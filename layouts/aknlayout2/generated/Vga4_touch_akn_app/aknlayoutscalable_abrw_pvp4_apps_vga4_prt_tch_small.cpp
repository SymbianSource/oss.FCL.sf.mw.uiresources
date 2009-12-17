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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x000484bf };

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
0x4b3e,	// (0x0004cffd) Screen

0x4b4a,	// (0x0004d009) application_window

0x4bb0,	// (0x0004d06f) area_bottom_pane_ParamLimits

0x4bb0,	// (0x0004d06f) area_bottom_pane

0x4c0a,	// (0x0004d0c9) area_top_pane_ParamLimits

0x4c0a,	// (0x0004d0c9) area_top_pane

0x4c6e,	// (0x0004d12d) call_video_uplink_pane_ParamLimits

0x4c6e,	// (0x0004d12d) call_video_uplink_pane

0x4cac,	// (0x0004d16b) main_pane_ParamLimits

0x4cac,	// (0x0004d16b) main_pane

0xf013,	// (0x000574d2) context_pane

0x8994,	// (0x00050e53) navi_pane

0x89b8,	// (0x00050e77) popup_cale_events_window_ParamLimits

0x89b8,	// (0x00050e77) popup_cale_events_window

0xf026,	// (0x000574e5) popup_mup_playback_window

0x89d0,	// (0x00050e8f) signal_pane

0x58b5,	// (0x0004dd74) main_browser_pane

0xdba9,	// (0x00056068) main_burst_pane

0x8846,	// (0x00050d05) main_calc_pane

0xdba9,	// (0x00056068) main_cale_day_pane

0x58b5,	// (0x0004dd74) main_cale_month_pane

0xdba9,	// (0x00056068) main_cale_week_pane

0xdba9,	// (0x00056068) main_call_pane

0x52d5,	// (0x0004d794) main_call_poc_pane

0xdba9,	// (0x00056068) main_camera_pane

0xdba9,	// (0x00056068) main_chi_dic_pane

0xda4b,	// (0x00055f0a) main_clock_pane

0x52d5,	// (0x0004d794) main_fmradio_pane

0xdba9,	// (0x00056068) main_graph_messa_pane

0x52d5,	// (0x0004d794) main_help_pane

0x58b5,	// (0x0004dd74) main_im_pane

0x5530,	// (0x0004d9ef) main_image_pane_ParamLimits

0x5530,	// (0x0004d9ef) main_image_pane

0x52d5,	// (0x0004d794) main_location2_pane

0xdba9,	// (0x00056068) main_location_pane

0x52d5,	// (0x0004d794) main_messa_pane

0x52d5,	// (0x0004d794) main_mp2_pane

0xdba9,	// (0x00056068) main_mp_pane

0x52d5,	// (0x0004d794) main_msg_pane

0x52d5,	// (0x0004d794) main_mup_eq_pane

0x52d5,	// (0x0004d794) main_mup_pane

0xdba9,	// (0x00056068) main_notes_pane

0x52d5,	// (0x0004d794) main_pec_pane

0x52d5,	// (0x0004d794) main_phob_pane

0x52d5,	// (0x0004d794) main_pinb_pane

0x52d5,	// (0x0004d794) main_postcard_pane

0x52d5,	// (0x0004d794) main_qdial_pane

0xdba9,	// (0x00056068) main_skin_pane

0x52d5,	// (0x0004d794) main_smil2_pane

0xdba9,	// (0x00056068) main_smil_pane

0xdba9,	// (0x00056068) main_video_pane

0xdba9,	// (0x00056068) main_video_tele_pane

0x5530,	// (0x0004d9ef) main_viewer_pane_ParamLimits

0x5530,	// (0x0004d9ef) main_viewer_pane

0xdba9,	// (0x00056068) main_vorec_pane

0x887e,	// (0x00050d3d) popup_blid_sat_info_window_ParamLimits

0x887e,	// (0x00050d3d) popup_blid_sat_info_window

0x8898,	// (0x00050d57) popup_dyc_status_message_window_ParamLimits

0x8898,	// (0x00050d57) popup_dyc_status_message_window

0x88a8,	// (0x00050d67) popup_grid_large_graphic_window_ParamLimits

0x88a8,	// (0x00050d67) popup_grid_large_graphic_window

0x8920,	// (0x00050ddf) popup_loc_request_window_ParamLimits

0x8920,	// (0x00050ddf) popup_loc_request_window

0x8968,	// (0x00050e27) popup_wml_address_window_ParamLimits

0x8968,	// (0x00050e27) popup_wml_address_window

0x871e,	// (0x00050bdd) call_muted_g1

0x83da,	// (0x00050899) popup_call_audio_conf_window_ParamLimits

0x83da,	// (0x00050899) popup_call_audio_conf_window

0x872e,	// (0x00050bed) popup_call_audio_first_window_ParamLimits

0x872e,	// (0x00050bed) popup_call_audio_first_window

0x876e,	// (0x00050c2d) popup_call_audio_in_window_ParamLimits

0x876e,	// (0x00050c2d) popup_call_audio_in_window

0x8792,	// (0x00050c51) popup_call_audio_out_window_ParamLimits

0x8792,	// (0x00050c51) popup_call_audio_out_window

0x87b4,	// (0x00050c73) popup_call_audio_second_window_ParamLimits

0x87b4,	// (0x00050c73) popup_call_audio_second_window

0x87e4,	// (0x00050ca3) popup_call_audio_wait_window_ParamLimits

0x87e4,	// (0x00050ca3) popup_call_audio_wait_window

0x8805,	// (0x00050cc4) popup_number_entry_window_ParamLimits

0x8805,	// (0x00050cc4) popup_number_entry_window

0x4e66,	// (0x0004d325) bg_popup_call_pane_cp05_ParamLimits

0x4e66,	// (0x0004d325) bg_popup_call_pane_cp05

0x4e86,	// (0x0004d345) popup_number_entry_window_t1

0x4e99,	// (0x0004d358) popup_number_entry_window_t2

0x4eab,	// (0x0004d36a) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x000575ee) popup_number_entry_window_t

0x4ef5,	// (0x0004d3b4) text_title_cp2

0x4f08,	// (0x0004d3c7) bg_popup_call_pane_cp_ParamLimits

0x4f08,	// (0x0004d3c7) bg_popup_call_pane_cp

0x4f16,	// (0x0004d3d5) call_thumbnail_pane

0x4f1e,	// (0x0004d3dd) popup_call_audio_in_window_g1_ParamLimits

0x4f1e,	// (0x0004d3dd) popup_call_audio_in_window_g1

0x4f2a,	// (0x0004d3e9) popup_call_audio_in_window_g2_ParamLimits

0x4f2a,	// (0x0004d3e9) popup_call_audio_in_window_g2

0x4f36,	// (0x0004d3f5) popup_call_audio_in_window_g3_ParamLimits

0x4f36,	// (0x0004d3f5) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x000575f7) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x000575f7) popup_call_audio_in_window_g

0x4f42,	// (0x0004d401) popup_call_audio_in_window_t1_ParamLimits

0x4f42,	// (0x0004d401) popup_call_audio_in_window_t1

0x4f5e,	// (0x0004d41d) popup_call_audio_in_window_t2_ParamLimits

0x4f5e,	// (0x0004d41d) popup_call_audio_in_window_t2

0x4f7a,	// (0x0004d439) popup_call_audio_in_window_t3_ParamLimits

0x4f7a,	// (0x0004d439) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x000575fe) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x000575fe) popup_call_audio_in_window_t

0x4f08,	// (0x0004d3c7) bg_popup_call_pane_cp01_ParamLimits

0x4f08,	// (0x0004d3c7) bg_popup_call_pane_cp01

0x4f16,	// (0x0004d3d5) call_thumbnail_pane_cp02

0x4f8d,	// (0x0004d44c) call_type_pane_cp022

0x4f95,	// (0x0004d454) popup_call_audio_out_window_g1_ParamLimits

0x4f95,	// (0x0004d454) popup_call_audio_out_window_g1

0x4fa7,	// (0x0004d466) popup_call_audio_out_window_g2_ParamLimits

0x4fa7,	// (0x0004d466) popup_call_audio_out_window_g2

0x4fb3,	// (0x0004d472) popup_call_audio_out_window_g3_ParamLimits

0x4fb3,	// (0x0004d472) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x00057605) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x00057605) popup_call_audio_out_window_g

0x4fc5,	// (0x0004d484) popup_call_audio_out_window_t1_ParamLimits

0x4fc5,	// (0x0004d484) popup_call_audio_out_window_t1

0x4fdd,	// (0x0004d49c) popup_call_audio_out_window_t2_ParamLimits

0x4fdd,	// (0x0004d49c) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x0005760c) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x0005760c) popup_call_audio_out_window_t

0x4ff2,	// (0x0004d4b1) bg_popup_call_pane_ParamLimits

0x4ff2,	// (0x0004d4b1) bg_popup_call_pane

0x5076,	// (0x0004d535) call_thumbnail_pane_cp_ParamLimits

0x5076,	// (0x0004d535) call_thumbnail_pane_cp

0x509a,	// (0x0004d559) call_type_pane_cp01_ParamLimits

0x509a,	// (0x0004d559) call_type_pane_cp01

0x50de,	// (0x0004d59d) popup_call_audio_first_window_g1_ParamLimits

0x50de,	// (0x0004d59d) popup_call_audio_first_window_g1

0x512a,	// (0x0004d5e9) popup_call_audio_first_window_g2_ParamLimits

0x512a,	// (0x0004d5e9) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x00057611) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x00057611) popup_call_audio_first_window_g

0x516e,	// (0x0004d62d) popup_call_audio_first_window_t1_ParamLimits

0x516e,	// (0x0004d62d) popup_call_audio_first_window_t1

0x521a,	// (0x0004d6d9) popup_call_audio_first_window_t4_ParamLimits

0x521a,	// (0x0004d6d9) popup_call_audio_first_window_t4

0x52a6,	// (0x0004d765) popup_call_audio_first_window_t5_ParamLimits

0x52a6,	// (0x0004d765) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x00057616) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x00057616) popup_call_audio_first_window_t

0x52d5,	// (0x0004d794) bg_popup_call_pane_cp02

0x52df,	// (0x0004d79e) call_type_pane_cp023

0x52e7,	// (0x0004d7a6) popup_call_audio_wait_window_g1

0x52ef,	// (0x0004d7ae) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0005761d) popup_call_audio_wait_window_g

0x52f7,	// (0x0004d7b6) popup_call_audio_wait_window_t3

0x5305,	// (0x0004d7c4) bg_popup_call_pane_cp03_ParamLimits

0x5305,	// (0x0004d7c4) bg_popup_call_pane_cp03

0x5365,	// (0x0004d824) call_thumbnail_pane_cp011_ParamLimits

0x5365,	// (0x0004d824) call_thumbnail_pane_cp011

0x5371,	// (0x0004d830) call_type_pane_cp034_ParamLimits

0x5371,	// (0x0004d830) call_type_pane_cp034

0x53ad,	// (0x0004d86c) popup_call_audio_second_window_g1_ParamLimits

0x53ad,	// (0x0004d86c) popup_call_audio_second_window_g1

0x53e9,	// (0x0004d8a8) popup_call_audio_second_window_g2_ParamLimits

0x53e9,	// (0x0004d8a8) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x00057622) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x00057622) popup_call_audio_second_window_g

0x5425,	// (0x0004d8e4) popup_call_audio_second_window_t1_ParamLimits

0x5425,	// (0x0004d8e4) popup_call_audio_second_window_t1

0x54a6,	// (0x0004d965) popup_call_audio_second_window_t2_ParamLimits

0x54a6,	// (0x0004d965) popup_call_audio_second_window_t2

0x54dc,	// (0x0004d99b) popup_call_audio_second_window_t3_ParamLimits

0x54dc,	// (0x0004d99b) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x00057627) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x00057627) popup_call_audio_second_window_t

0x52d5,	// (0x0004d794) bg_popup_call_pane_cp04

0x5512,	// (0x0004d9d1) list_conf_pane

0x551a,	// (0x0004d9d9) popup_call_audio_conf_window_t1

0x5528,	// (0x0004d9e7) call_thumbnail_pane_g1

0x5530,	// (0x0004d9ef) bg_pinb_pane_ParamLimits

0x5530,	// (0x0004d9ef) bg_pinb_pane

0x553e,	// (0x0004d9fd) find_pinb_pane

0x5547,	// (0x0004da06) listscroll_pinb_pane_ParamLimits

0x5547,	// (0x0004da06) listscroll_pinb_pane

0x5556,	// (0x0004da15) pinb_bg_pane_g1

0x5560,	// (0x0004da1f) pinb_bg_pane_g2

0x556c,	// (0x0004da2b) pinb_bg_pane_g3

0x5578,	// (0x0004da37) pinb_bg_pane_g4

0x5584,	// (0x0004da43) pinb_bg_pane_g5

0x5590,	// (0x0004da4f) pinb_bg_pane_g6

0x559b,	// (0x0004da5a) pinb_bg_pane_g7

0x55a6,	// (0x0004da65) pinb_bg_pane_g8

0x55b1,	// (0x0004da70) pinb_bg_pane_g9

0x55bb,	// (0x0004da7a) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x0005762e) pinb_bg_pane_g

0x55d8,	// (0x0004da97) grid_pinb_pane

0x55e3,	// (0x0004daa2) list_pinb_pane

0x55ee,	// (0x0004daad) scroll_pane_cp01_ParamLimits

0x55ee,	// (0x0004daad) scroll_pane_cp01

0x5600,	// (0x0004dabf) find_pinb_pane_g1_ParamLimits

0x5600,	// (0x0004dabf) find_pinb_pane_g1

0x5618,	// (0x0004dad7) find_pinb_pane_t1

0x562a,	// (0x0004dae9) find_pinb_pane_t2

0x0001,

0xf189,	// (0x00057648) find_pinb_pane_t

0x563f,	// (0x0004dafe) input_focus_pane_cp01_ParamLimits

0x563f,	// (0x0004dafe) input_focus_pane_cp01

0x564b,	// (0x0004db0a) cell_pinb_pane_ParamLimits

0x564b,	// (0x0004db0a) cell_pinb_pane

0x566b,	// (0x0004db2a) cell_pinb_pane_g1_ParamLimits

0x566b,	// (0x0004db2a) cell_pinb_pane_g1

0x5680,	// (0x0004db3f) cell_pinb_pane_g2_ParamLimits

0x5680,	// (0x0004db3f) cell_pinb_pane_g2

0x568c,	// (0x0004db4b) cell_pinb_pane_g3_ParamLimits

0x568c,	// (0x0004db4b) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x0005764d) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x0005764d) cell_pinb_pane_g

0x52d5,	// (0x0004d794) grid_highlight_pane_cp01

0x5698,	// (0x0004db57) list_pinb_item_pane_ParamLimits

0x5698,	// (0x0004db57) list_pinb_item_pane

0x52d5,	// (0x0004d794) list_highlight_pane_cp02

0x56b3,	// (0x0004db72) list_pinb_item_pane_g1_ParamLimits

0x56b3,	// (0x0004db72) list_pinb_item_pane_g1

0x56c0,	// (0x0004db7f) list_pinb_item_pane_g2_ParamLimits

0x56c0,	// (0x0004db7f) list_pinb_item_pane_g2

0x56cc,	// (0x0004db8b) list_pinb_item_pane_g3_ParamLimits

0x56cc,	// (0x0004db8b) list_pinb_item_pane_g3

0x56dd,	// (0x0004db9c) list_pinb_item_pane_g4_ParamLimits

0x56dd,	// (0x0004db9c) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x00057654) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x00057654) list_pinb_item_pane_g

0x56e9,	// (0x0004dba8) list_pinb_item_pane_t1_ParamLimits

0x56e9,	// (0x0004dba8) list_pinb_item_pane_t1

0x571a,	// (0x0004dbd9) calc_display_pane

0x5738,	// (0x0004dbf7) calc_paper_pane

0x5754,	// (0x0004dc13) grid_calc_pane

0x52d5,	// (0x0004d794) bg_list_pane_cp01

0x5780,	// (0x0004dc3f) clock_g1

0x5788,	// (0x0004dc47) clock_g2

0x0001,

0xf19e,	// (0x0005765d) clock_g

0x5792,	// (0x0004dc51) clock_t1_ParamLimits

0x5792,	// (0x0004dc51) clock_t1

0x57a7,	// (0x0004dc66) clock_t2_ParamLimits

0x57a7,	// (0x0004dc66) clock_t2

0x57b9,	// (0x0004dc78) clock_t3_ParamLimits

0x57b9,	// (0x0004dc78) clock_t3

0x57cb,	// (0x0004dc8a) clock_t4_ParamLimits

0x57cb,	// (0x0004dc8a) clock_t4

0x57dd,	// (0x0004dc9c) clock_t5_ParamLimits

0x57dd,	// (0x0004dc9c) clock_t5

0x57f2,	// (0x0004dcb1) clock_t6_ParamLimits

0x57f2,	// (0x0004dcb1) clock_t6

0x5804,	// (0x0004dcc3) clock_t7_ParamLimits

0x5804,	// (0x0004dcc3) clock_t7

0x5816,	// (0x0004dcd5) clock_t8_ParamLimits

0x5816,	// (0x0004dcd5) clock_t8

0x582c,	// (0x0004dceb) clock_t9_ParamLimits

0x582c,	// (0x0004dceb) clock_t9

0x0008,

0xf1a3,	// (0x00057662) clock_t_ParamLimits

0xf1a3,	// (0x00057662) clock_t

0x5842,	// (0x0004dd01) popup_clock_analogue_window_cp02

0x5842,	// (0x0004dd01) popup_clock_digital_window_cp01

0x584a,	// (0x0004dd09) listscroll_help_pane

0x52d5,	// (0x0004d794) phob_pre_status_pane

0x5854,	// (0x0004dd13) grid_qdial_pane

0x52d5,	// (0x0004d794) listscroll_mce_pane

0x585e,	// (0x0004dd1d) bg_notes_pane

0x5868,	// (0x0004dd27) list_notes_pane

0x5872,	// (0x0004dd31) scroll_pane_cp06

0x587d,	// (0x0004dd3c) bg_calc_paper_pane

0x589b,	// (0x0004dd5a) list_calc_pane

0x58b5,	// (0x0004dd74) bg_calc_display_pane

0x58c1,	// (0x0004dd80) calc_display_pane_t1

0x58d6,	// (0x0004dd95) calc_display_pane_t2

0x58eb,	// (0x0004ddaa) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x00057675) calc_display_pane_t

0x58fd,	// (0x0004ddbc) cell_calc_pane_ParamLimits

0x58fd,	// (0x0004ddbc) cell_calc_pane

0x592c,	// (0x0004ddeb) bg_calc_paper_pane_g1

0x5938,	// (0x0004ddf7) bg_calc_paper_pane_g2

0x5944,	// (0x0004de03) bg_calc_paper_pane_g3

0x5950,	// (0x0004de0f) bg_calc_paper_pane_g4

0x595c,	// (0x0004de1b) bg_calc_paper_pane_g5

0x5968,	// (0x0004de27) bg_calc_paper_pane_g6

0x5979,	// (0x0004de38) bg_calc_paper_pane_g7

0x598a,	// (0x0004de49) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x0005767c) bg_calc_paper_pane_g

0x599b,	// (0x0004de5a) calc_bg_paper_pane_g9

0x59ac,	// (0x0004de6b) list_calc_item_pane_ParamLimits

0x59ac,	// (0x0004de6b) list_calc_item_pane

0x59d0,	// (0x0004de8f) list_calc_item_pane_g1

0x59dd,	// (0x0004de9c) list_calc_item_pane_t1_ParamLimits

0x59dd,	// (0x0004de9c) list_calc_item_pane_t1

0x59ef,	// (0x0004deae) list_calc_item_pane_t2_ParamLimits

0x59ef,	// (0x0004deae) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x0005768d) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x0005768d) list_calc_item_pane_t

0x5a07,	// (0x0004dec6) cell_calc_pane_g1

0x5a29,	// (0x0004dee8) grid_highlight_pane_cp02

0x5a4b,	// (0x0004df0a) bg_calc_display_pane_g1

0x5a54,	// (0x0004df13) bg_calc_display_pane_g2

0x5a5e,	// (0x0004df1d) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x00057697) bg_calc_display_pane_g

0x5a67,	// (0x0004df26) cell_qdial_pane_ParamLimits

0x5a67,	// (0x0004df26) cell_qdial_pane

0x5a7d,	// (0x0004df3c) cell_qdial_pane_g1_ParamLimits

0x5a7d,	// (0x0004df3c) cell_qdial_pane_g1

0x5a8a,	// (0x0004df49) cell_qdial_pane_g2_ParamLimits

0x5a8a,	// (0x0004df49) cell_qdial_pane_g2

0x5a9b,	// (0x0004df5a) cell_qdial_pane_g3_ParamLimits

0x5a9b,	// (0x0004df5a) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x0005769e) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x0005769e) cell_qdial_pane_g

0x5ab4,	// (0x0004df73) cell_qdial_pane_t1_ParamLimits

0x5ab4,	// (0x0004df73) cell_qdial_pane_t1

0x5acc,	// (0x0004df8b) cell_qdial_pane_t2_ParamLimits

0x5acc,	// (0x0004df8b) cell_qdial_pane_t2

0x5adf,	// (0x0004df9e) cell_qdial_pane_t3_ParamLimits

0x5adf,	// (0x0004df9e) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x000576a7) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x000576a7) cell_qdial_pane_t

0x52d5,	// (0x0004d794) grid_highlight_pane_cp04

0x5af2,	// (0x0004dfb1) thumbnail_qdial_pane_ParamLimits

0x5af2,	// (0x0004dfb1) thumbnail_qdial_pane

0x5b4e,	// (0x0004e00d) list_help_pane

0x5b57,	// (0x0004e016) scroll_pane_cp02

0x5b60,	// (0x0004e01f) help_list_pane_t1_ParamLimits

0x5b60,	// (0x0004e01f) help_list_pane_t1

0x5b8a,	// (0x0004e049) bg_notes_pane_g2

0x5b92,	// (0x0004e051) bg_notes_pane_g3

0x5b9a,	// (0x0004e059) notes_bg_pane_g1

0x5ba2,	// (0x0004e061) notes_bg_pane_g4

0x5baa,	// (0x0004e069) notes_bg_pane_g5

0x5bb2,	// (0x0004e071) notes_bg_pane_g6

0x5bba,	// (0x0004e079) notes_bg_pane_g7

0x5bc2,	// (0x0004e081) notes_bg_pane_g8

0x5bca,	// (0x0004e089) notes_bg_pane_g9

0x0006,

0xf206,	// (0x000576c5) notes_bg_pane_g

0x5bd2,	// (0x0004e091) list_notes_text_pane_ParamLimits

0x5bd2,	// (0x0004e091) list_notes_text_pane

0x5bef,	// (0x0004e0ae) list_notes_text_pane_g1

0x08fa,	// (0x00048db9) list_notes_text_pane_t1

0x58b5,	// (0x0004dd74) listscroll_cale_week_pane

0x5c26,	// (0x0004e0e5) bg_cale_heading_pane

0x5c3a,	// (0x0004e0f9) bg_cale_pane_cp01

0x5c53,	// (0x0004e112) cale_week_corner_pane

0x5c69,	// (0x0004e128) cale_week_day_heading_pane

0x5c7d,	// (0x0004e13c) cale_week_scroll_pane_g1

0x5c8e,	// (0x0004e14d) cale_week_scroll_pane_g2

0x5c9f,	// (0x0004e15e) cale_week_scroll_pane_g3

0x5cb0,	// (0x0004e16f) cale_week_scroll_pane_g4

0x5cc1,	// (0x0004e180) cale_week_scroll_pane_g5

0x5cd2,	// (0x0004e191) cale_week_scroll_pane_g6

0x5ce5,	// (0x0004e1a4) cale_week_scroll_pane_g7

0x5cf8,	// (0x0004e1b7) cale_week_scroll_pane_g8

0x5d0b,	// (0x0004e1ca) cale_week_scroll_pane_g9

0x5d1c,	// (0x0004e1db) cale_week_scroll_pane_g10

0x5d2d,	// (0x0004e1ec) cale_week_scroll_pane_g11

0x5d3e,	// (0x0004e1fd) cale_week_scroll_pane_g12

0x5d4f,	// (0x0004e20e) cale_week_scroll_pane_g13

0x5d60,	// (0x0004e21f) cale_week_scroll_pane_g14

0x5d71,	// (0x0004e230) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x000576d4) cale_week_scroll_pane_g

0x5d82,	// (0x0004e241) cale_week_time_pane

0x5d95,	// (0x0004e254) grid_cale_week_pane

0x5dbc,	// (0x0004e27b) scroll_pane_cp08

0x5dd6,	// (0x0004e295) cell_cale_week_pane_ParamLimits

0x5dd6,	// (0x0004e295) cell_cale_week_pane

0x5e14,	// (0x0004e2d3) cale_week_day_heading_pane_t1

0x5e41,	// (0x0004e300) cale_week_day_heading_pane_t2

0x5e6e,	// (0x0004e32d) cale_week_day_heading_pane_t3

0x5e9b,	// (0x0004e35a) cale_week_day_heading_pane_t4

0x5ec8,	// (0x0004e387) cale_week_day_heading_pane_t5

0x5ef5,	// (0x0004e3b4) cale_week_day_heading_pane_t6

0x5f22,	// (0x0004e3e1) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x000576f3) cale_week_day_heading_pane_t

0x5f4f,	// (0x0004e40e) bg_cale_side_pane

0x5f5d,	// (0x0004e41c) cale_week_time_pane_t1

0x5f89,	// (0x0004e448) cale_week_time_pane_t2

0x5fb5,	// (0x0004e474) cale_week_time_pane_t3

0x5fe1,	// (0x0004e4a0) cale_week_time_pane_t4

0x600d,	// (0x0004e4cc) cale_week_time_pane_t5

0x6039,	// (0x0004e4f8) cale_week_time_pane_t6

0x6065,	// (0x0004e524) cale_week_time_pane_t7

0x6091,	// (0x0004e550) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x00057702) cale_week_time_pane_t

0x60bd,	// (0x0004e57c) cell_cale_week_pane_g2

0x60d6,	// (0x0004e595) cell_cale_week_pane_g3_ParamLimits

0x60d6,	// (0x0004e595) cell_cale_week_pane_g3

0x60ee,	// (0x0004e5ad) grid_highlight_pane_cp07

0x60f6,	// (0x0004e5b5) listscroll_gms_pane

0x6100,	// (0x0004e5bf) grid_gms_pane

0x6109,	// (0x0004e5c8) listscroll_gms_pane_g1

0x6111,	// (0x0004e5d0) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x00057713) listscroll_gms_pane_g

0x6119,	// (0x0004e5d8) scroll_pane_cp010

0x6124,	// (0x0004e5e3) cell_gms_pane_ParamLimits

0x6124,	// (0x0004e5e3) cell_gms_pane

0x6137,	// (0x0004e5f6) cell_gms_pane_g1

0x613f,	// (0x0004e5fe) cell_gms_pane_g2

0x6147,	// (0x0004e606) cell_gms_pane_g3

0x6150,	// (0x0004e60f) cell_gms_pane_g4

0x0003,

0xf259,	// (0x00057718) cell_gms_pane_g

0x6159,	// (0x0004e618) grid_highlight_pane_cp09

0x86c6,	// (0x00050b85) phob_pre_status_pane_g1

0x86ce,	// (0x00050b8d) phob_pre_status_pane_g2

0x86d6,	// (0x00050b95) phob_pre_status_pane_g3

0x86de,	// (0x00050b9d) phob_pre_status_pane_g4

0x0004,

0xf648,	// (0x00057b07) phob_pre_status_pane_g

0x86ee,	// (0x00050bad) phob_pre_status_pane_t1

0x86fe,	// (0x00050bbd) phob_pre_status_pane_t2

0x870e,	// (0x00050bcd) phob_pre_status_pane_t3

0x0002,

0xf653,	// (0x00057b12) phob_pre_status_pane_t

0x52d5,	// (0x0004d794) bg_list_pane_cp05

0x6169,	// (0x0004e628) grid_vorec_pane

0x6173,	// (0x0004e632) vorec_t1

0x6181,	// (0x0004e640) vorec_t2

0x618f,	// (0x0004e64e) vorec_t3

0x619d,	// (0x0004e65c) vorec_t4

0x61ab,	// (0x0004e66a) vorec_t5

0x61b9,	// (0x0004e678) vorec_t6

0x0006,

0xf262,	// (0x00057721) vorec_t

0x61d5,	// (0x0004e694) wait_bar_pane_cp01

0x61dd,	// (0x0004e69c) cell_vorec_pane_ParamLimits

0x61dd,	// (0x0004e69c) cell_vorec_pane

0x61f4,	// (0x0004e6b3) cell_vorec_pane_g1

0x52d5,	// (0x0004d794) grid_highlight_pane_cp05

0x620c,	// (0x0004e6cb) cams_zoom_pane

0x6218,	// (0x0004e6d7) image_vga_pane

0x6227,	// (0x0004e6e6) main_camera_pane_g1

0x6235,	// (0x0004e6f4) main_camera_pane_g2

0x6241,	// (0x0004e700) main_camera_pane_g3

0x624f,	// (0x0004e70e) main_camera_pane_g4

0x625d,	// (0x0004e71c) main_camera_pane_g5

0x626b,	// (0x0004e72a) main_camera_pane_g6

0x6279,	// (0x0004e738) main_camera_pane_g7

0x0007,

0xf271,	// (0x00057730) main_camera_pane_g

0x6293,	// (0x0004e752) main_camera_pane_t1

0x62a5,	// (0x0004e764) main_camera_pane_t2

0x0001,

0xf282,	// (0x00057741) main_camera_pane_t

0x62c8,	// (0x0004e787) cams_zoom_pane_cp_ParamLimits

0x62c8,	// (0x0004e787) cams_zoom_pane_cp

0x62ec,	// (0x0004e7ab) image_cif_pane_ParamLimits

0x62ec,	// (0x0004e7ab) image_cif_pane

0x630a,	// (0x0004e7c9) image_subqcif_pane

0x6314,	// (0x0004e7d3) main_video_pane_g1_ParamLimits

0x6314,	// (0x0004e7d3) main_video_pane_g1

0x6334,	// (0x0004e7f3) main_video_pane_g2_ParamLimits

0x6334,	// (0x0004e7f3) main_video_pane_g2

0x6364,	// (0x0004e823) main_video_pane_g3_ParamLimits

0x6364,	// (0x0004e823) main_video_pane_g3

0x638d,	// (0x0004e84c) main_video_pane_g4_ParamLimits

0x638d,	// (0x0004e84c) main_video_pane_g4

0x63b6,	// (0x0004e875) main_video_pane_g5_ParamLimits

0x63b6,	// (0x0004e875) main_video_pane_g5

0x63cc,	// (0x0004e88b) main_video_pane_g6_ParamLimits

0x63cc,	// (0x0004e88b) main_video_pane_g6

0x0006,

0xf287,	// (0x00057746) main_video_pane_g_ParamLimits

0xf287,	// (0x00057746) main_video_pane_g

0x63f2,	// (0x0004e8b1) main_video_pane_t1_ParamLimits

0x63f2,	// (0x0004e8b1) main_video_pane_t1

0x6430,	// (0x0004e8ef) cams_zoom_pane_g1

0x6439,	// (0x0004e8f8) cams_zoom_pane_g2

0x6442,	// (0x0004e901) cams_zoom_pane_g3

0x644b,	// (0x0004e90a) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x00057755) cams_zoom_pane_g

0x6460,	// (0x0004e91f) grid_cams_pane

0x646e,	// (0x0004e92d) linegrid_cams_pane

0x647c,	// (0x0004e93b) cell_cams_pane_ParamLimits

0x647c,	// (0x0004e93b) cell_cams_pane

0x6491,	// (0x0004e950) cams_burst_image_pane

0x6499,	// (0x0004e958) cell_cams_pane_g1

0x52d5,	// (0x0004d794) grid_highlight_pane_cp03

0x5a07,	// (0x0004dec6) mp_bg_pane_g1

0x52d5,	// (0x0004d794) bg_list_pane_cp03

0xeed7,	// (0x00057396) bg_mp_pane

0xeedf,	// (0x0005739e) grid_mp_pane

0xeee7,	// (0x000573a6) media_player_g1

0xeef1,	// (0x000573b0) media_player_t1

0xeeff,	// (0x000573be) media_player_t2

0xef0d,	// (0x000573cc) media_player_t3

0xef1b,	// (0x000573da) media_player_t4

0xef29,	// (0x000573e8) media_player_t5

0xef37,	// (0x000573f6) media_player_t6

0xef45,	// (0x00057404) media_player_t7

0x0006,

0xf632,	// (0x00057af1) media_player_t

0xef53,	// (0x00057412) wait_bar_pane_cp02

0xf617,	// (0x00057ad6) main_usb_pane_t

0x86bd,	// (0x00050b7c) cell_mp_pane

0x5a07,	// (0x0004dec6) cell_mp_pane_g1

0x52d5,	// (0x0004d794) grid_highlight_pane_cp06

0x64fa,	// (0x0004e9b9) grid_skin_colour_pane

0x6502,	// (0x0004e9c1) list_highlight_pane_cp03

0x650a,	// (0x0004e9c9) skin_g1

0x6514,	// (0x0004e9d3) skin_t1

0x6523,	// (0x0004e9e2) skin_t2

0x0001,

0xf2cb,	// (0x0005778a) skin_t

0x6531,	// (0x0004e9f0) cell_skin_colour_pane_ParamLimits

0x6531,	// (0x0004e9f0) cell_skin_colour_pane

0x654f,	// (0x0004ea0e) cell_skin_colour_pane_g1

0x659a,	// (0x0004ea59) call_video_g1_ParamLimits

0x659a,	// (0x0004ea59) call_video_g1

0x65aa,	// (0x0004ea69) call_video_g2_ParamLimits

0x65aa,	// (0x0004ea69) call_video_g2

0x0001,

0xf2d0,	// (0x0005778f) call_video_g_ParamLimits

0xf2d0,	// (0x0005778f) call_video_g

0x65e2,	// (0x0004eaa1) call_video_uplink_pane_cp1_ParamLimits

0x65e2,	// (0x0004eaa1) call_video_uplink_pane_cp1

0x662e,	// (0x0004eaed) call_video_uplink_pane_cp2

0x6698,	// (0x0004eb57) video_down_crop_pane_ParamLimits

0x6698,	// (0x0004eb57) video_down_crop_pane

0x6770,	// (0x0004ec2f) video_down_pane_ParamLimits

0x6770,	// (0x0004ec2f) video_down_pane

0x684d,	// (0x0004ed0c) video_down_subqcif_pane_ParamLimits

0x684d,	// (0x0004ed0c) video_down_subqcif_pane

0x6867,	// (0x0004ed26) video_down_subqcif_pane_cp_ParamLimits

0x6867,	// (0x0004ed26) video_down_subqcif_pane_cp

0x688d,	// (0x0004ed4c) im_reading_pane_ParamLimits

0x688d,	// (0x0004ed4c) im_reading_pane

0x689f,	// (0x0004ed5e) im_writing_pane_ParamLimits

0x689f,	// (0x0004ed5e) im_writing_pane

0x68c5,	// (0x0004ed84) im_reading_pane_t1

0x690d,	// (0x0004edcc) list_im_pane

0x691e,	// (0x0004eddd) scroll_pane_cp07

0x6937,	// (0x0004edf6) im_writing_pane_t1_ParamLimits

0x6937,	// (0x0004edf6) im_writing_pane_t1

0x6949,	// (0x0004ee08) im_writing_pane_t2_ParamLimits

0x6949,	// (0x0004ee08) im_writing_pane_t2

0x0001,

0xf2da,	// (0x00057799) im_writing_pane_t_ParamLimits

0xf2da,	// (0x00057799) im_writing_pane_t

0x52d5,	// (0x0004d794) input_focus_pane_cp04

0x52d5,	// (0x0004d794) input_focus_pane_cp05

0x6966,	// (0x0004ee25) list_im_single_pane_ParamLimits

0x6966,	// (0x0004ee25) list_im_single_pane

0x6982,	// (0x0004ee41) list_single_im_pane_t1

0x8681,	// (0x00050b40) blid_accuracy_pane

0x8689,	// (0x00050b48) blid_compass_pane

0x8693,	// (0x00050b52) main_location_t1

0x86a1,	// (0x00050b60) main_location_t2

0x86af,	// (0x00050b6e) main_location_t3

0x0002,

0xf641,	// (0x00057b00) main_location_t

0x52d5,	// (0x0004d794) aid_levels_location

0x5a07,	// (0x0004dec6) blid_accuracy_pane_g1

0x5a07,	// (0x0004dec6) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x000577fb) blid_accuracy_pane_g

0x69bc,	// (0x0004ee7b) wml_content_pane

0x69fa,	// (0x0004eeb9) wml_button_pane_ParamLimits

0x69fa,	// (0x0004eeb9) wml_button_pane

0x6a0e,	// (0x0004eecd) wml_list_single_large_pane_ParamLimits

0x6a0e,	// (0x0004eecd) wml_list_single_large_pane

0x6a30,	// (0x0004eeef) wml_list_single_medium_pane_ParamLimits

0x6a30,	// (0x0004eeef) wml_list_single_medium_pane

0x6a56,	// (0x0004ef15) wml_list_single_small_pane_ParamLimits

0x6a56,	// (0x0004ef15) wml_list_single_small_pane

0x6a81,	// (0x0004ef40) wml_selection_box_pane_ParamLimits

0x6a81,	// (0x0004ef40) wml_selection_box_pane

0x6a94,	// (0x0004ef53) wml_list_single_pane_t1

0x6aa3,	// (0x0004ef62) wml_list_single_medium_pane_t1

0x6ab2,	// (0x0004ef71) wml_list_single_large_pane_t1

0x6ac1,	// (0x0004ef80) input_focus_pane_cp02_ParamLimits

0x6ac1,	// (0x0004ef80) input_focus_pane_cp02

0x6ad4,	// (0x0004ef93) wml_selection_box_pane_g1

0x6add,	// (0x0004ef9c) wml_selection_box_pane_t1_ParamLimits

0x6add,	// (0x0004ef9c) wml_selection_box_pane_t1

0x5530,	// (0x0004d9ef) bg_wml_button_pane_ParamLimits

0x5530,	// (0x0004d9ef) bg_wml_button_pane

0x6af5,	// (0x0004efb4) wml_button_pane_g1

0x6afd,	// (0x0004efbc) wml_button_pane_t1

0x6af5,	// (0x0004efb4) wml_button_bg_pane_g1

0x6b0d,	// (0x0004efcc) wml_button_bg_pane_g2

0x6b15,	// (0x0004efd4) wml_button_bg_pane_g3

0x6b1d,	// (0x0004efdc) wml_button_bg_pane_g4

0x6b25,	// (0x0004efe4) wml_button_bg_pane_g5

0x6b2d,	// (0x0004efec) wml_button_bg_pane_g6

0x6b35,	// (0x0004eff4) wml_button_bg_pane_g7

0x6b3d,	// (0x0004effc) wml_button_bg_pane_g8

0x6b45,	// (0x0004f004) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x0005779e) wml_button_bg_pane_g

0x6b4d,	// (0x0004f00c) bg_list_pane_cp02

0x6b57,	// (0x0004f016) mce_header_pane_ParamLimits

0x6b57,	// (0x0004f016) mce_header_pane

0x6b6d,	// (0x0004f02c) mce_icon_pane

0x6b6d,	// (0x0004f02c) mce_image_pane

0x6b76,	// (0x0004f035) mce_text_pane_ParamLimits

0x6b76,	// (0x0004f035) mce_text_pane

0x6b89,	// (0x0004f048) scroll_pane_cp03

0x69f2,	// (0x0004eeb1) scroll_pane_cp04

0x6b93,	// (0x0004f052) scroll_pane_cp05_ParamLimits

0x6b93,	// (0x0004f052) scroll_pane_cp05

0x6b9f,	// (0x0004f05e) mce_header_field_pane_ParamLimits

0x6b9f,	// (0x0004f05e) mce_header_field_pane

0x6bc1,	// (0x0004f080) mce_header_field_pane_2_ParamLimits

0x6bc1,	// (0x0004f080) mce_header_field_pane_2

0x6bd7,	// (0x0004f096) mce_header_field_pane_3

0x6bdf,	// (0x0004f09e) list_single_mce_message_pane_ParamLimits

0x6bdf,	// (0x0004f09e) list_single_mce_message_pane

0x6bfe,	// (0x0004f0bd) list_single_mce_smart_pane_ParamLimits

0x6bfe,	// (0x0004f0bd) list_single_mce_smart_pane

0x6c28,	// (0x0004f0e7) input_focus_pane_cp03

0xd5de,	// (0x00055a9d) list_header_data_pane

0x6c31,	// (0x0004f0f0) mce_header_field_pane_t1

0x6c41,	// (0x0004f100) list_single_mce_header_pane_ParamLimits

0x6c41,	// (0x0004f100) list_single_mce_header_pane

0xd5e6,	// (0x00055aa5) list_single_mce_header_pane_t1

0xd5f5,	// (0x00055ab4) list_single_mce_message_pane_g1

0xd5fd,	// (0x00055abc) list_single_mce_message_pane_t1

0x6c7d,	// (0x0004f13c) bg_cale_heading_pane_cp01_ParamLimits

0x6c7d,	// (0x0004f13c) bg_cale_heading_pane_cp01

0xd60b,	// (0x00055aca) bg_cale_pane_cp02_ParamLimits

0xd60b,	// (0x00055aca) bg_cale_pane_cp02

0x6ca0,	// (0x0004f15f) cale_month_corner_pane

0x6cb6,	// (0x0004f175) cale_month_day_heading_pane_ParamLimits

0x6cb6,	// (0x0004f175) cale_month_day_heading_pane

0x6ce9,	// (0x0004f1a8) cale_month_pane_g1_ParamLimits

0x6ce9,	// (0x0004f1a8) cale_month_pane_g1

0x6d05,	// (0x0004f1c4) cale_month_pane_g2_ParamLimits

0x6d05,	// (0x0004f1c4) cale_month_pane_g2

0x6d20,	// (0x0004f1df) cale_month_pane_g3_ParamLimits

0x6d20,	// (0x0004f1df) cale_month_pane_g3

0x6d4c,	// (0x0004f20b) cale_month_pane_g4_ParamLimits

0x6d4c,	// (0x0004f20b) cale_month_pane_g4

0x6d78,	// (0x0004f237) cale_month_pane_g5_ParamLimits

0x6d78,	// (0x0004f237) cale_month_pane_g5

0x6da4,	// (0x0004f263) cale_month_pane_g6_ParamLimits

0x6da4,	// (0x0004f263) cale_month_pane_g6

0x6de0,	// (0x0004f29f) cale_month_pane_g7_ParamLimits

0x6de0,	// (0x0004f29f) cale_month_pane_g7

0x6e1c,	// (0x0004f2db) cale_month_pane_g8_ParamLimits

0x6e1c,	// (0x0004f2db) cale_month_pane_g8

0x6e58,	// (0x0004f317) cale_month_pane_g9_ParamLimits

0x6e58,	// (0x0004f317) cale_month_pane_g9

0x6e92,	// (0x0004f351) cale_month_pane_g10_ParamLimits

0x6e92,	// (0x0004f351) cale_month_pane_g10

0x6ecc,	// (0x0004f38b) cale_month_pane_g11_ParamLimits

0x6ecc,	// (0x0004f38b) cale_month_pane_g11

0x6f06,	// (0x0004f3c5) cale_month_pane_g12_ParamLimits

0x6f06,	// (0x0004f3c5) cale_month_pane_g12

0x6f40,	// (0x0004f3ff) cale_month_pane_g13_ParamLimits

0x6f40,	// (0x0004f3ff) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x000577b1) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x000577b1) cale_month_pane_g

0x6f7a,	// (0x0004f439) cale_month_week_pane

0x6f8d,	// (0x0004f44c) grid_cale_month_pane_ParamLimits

0x6f8d,	// (0x0004f44c) grid_cale_month_pane

0x6fbb,	// (0x0004f47a) cale_month_day_heading_pane_t1

0x7019,	// (0x0004f4d8) cale_month_day_heading_pane_t2

0x707e,	// (0x0004f53d) cale_month_day_heading_pane_t3

0x70e3,	// (0x0004f5a2) cale_month_day_heading_pane_t4

0x7148,	// (0x0004f607) cale_month_day_heading_pane_t5

0x71b5,	// (0x0004f674) cale_month_day_heading_pane_t6

0x722a,	// (0x0004f6e9) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x000577cc) cale_month_day_heading_pane_t

0x5f4f,	// (0x0004e40e) bg_cale_side_pane_cp01

0x729f,	// (0x0004f75e) cale_month_week_pane_t1

0x72ca,	// (0x0004f789) cale_month_week_pane_t2

0x72f5,	// (0x0004f7b4) cale_month_week_pane_t3

0x7320,	// (0x0004f7df) cale_month_week_pane_t4

0x734b,	// (0x0004f80a) cale_month_week_pane_t5

0x7376,	// (0x0004f835) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x000577db) cale_month_week_pane_t

0x73a1,	// (0x0004f860) cell_cale_month_pane_ParamLimits

0x73a1,	// (0x0004f860) cell_cale_month_pane

0x746f,	// (0x0004f92e) cell_cale_month_pane_g1

0x747b,	// (0x0004f93a) cell_cale_month_pane_t1_ParamLimits

0x747b,	// (0x0004f93a) cell_cale_month_pane_t1

0x60ee,	// (0x0004e5ad) grid_highlight_pane_cp08

0x5a07,	// (0x0004dec6) main_smil_g1

0x7497,	// (0x0004f956) smil_status_pane

0xd640,	// (0x00055aff) smil_text_pane

0xedf5,	// (0x000572b4) bg_popup_call3_rect_pane_g8

0xedfd,	// (0x000572bc) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x00057a94) bg_popup_call3_rect_pane_g

0xf0a0,	// (0x0005755f) smil_status_volume_pane_g1

0xd64a,	// (0x00055b09) smil_status_pane_t1

0x8a62,	// (0x00050f21) volume_smil_pane

0xd661,	// (0x00055b20) list_smil_text_pane

0x74aa,	// (0x0004f969) scroll_pane_cp011

0x74b5,	// (0x0004f974) smil_text_list_pane_t1_ParamLimits

0x74b5,	// (0x0004f974) smil_text_list_pane_t1

0x7519,	// (0x0004f9d8) aid_volume_smil_ParamLimits

0x7519,	// (0x0004f9d8) aid_volume_smil

0x5a07,	// (0x0004dec6) smil_volume_pane_g1

0x5a07,	// (0x0004dec6) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x000577fb) smil_volume_pane_g

0x58b5,	// (0x0004dd74) listscroll_cale_day_pane

0xd66b,	// (0x00055b2a) bg_cale_pane

0xd683,	// (0x00055b42) list_cale_pane

0xd694,	// (0x00055b53) scroll_pane_cp09

0xd6a5,	// (0x00055b64) cale_bg_pane_g1

0xd6ad,	// (0x00055b6c) cale_bg_pane_g2

0xd6b5,	// (0x00055b74) cale_bg_pane_g3

0xd6bd,	// (0x00055b7c) cale_bg_pane_g4

0xd6c5,	// (0x00055b84) cale_bg_pane_g5

0xd6cd,	// (0x00055b8c) cale_bg_pane_g6

0xd6d5,	// (0x00055b94) cale_bg_pane_g7

0xd6dd,	// (0x00055b9c) cale_bg_pane_g8

0xd6e5,	// (0x00055ba4) cale_bg_pane_g9

0x0008,

0xf341,	// (0x00057800) cale_bg_pane_g

0x753b,	// (0x0004f9fa) list_cale_time_pane_ParamLimits

0x753b,	// (0x0004f9fa) list_cale_time_pane

0x7553,	// (0x0004fa12) list_cale_time_pane_g1_ParamLimits

0x7553,	// (0x0004fa12) list_cale_time_pane_g1

0xd6ed,	// (0x00055bac) list_cale_time_pane_g2_ParamLimits

0xd6ed,	// (0x00055bac) list_cale_time_pane_g2

0x755f,	// (0x0004fa1e) list_cale_time_pane_g3_ParamLimits

0x755f,	// (0x0004fa1e) list_cale_time_pane_g3

0x756d,	// (0x0004fa2c) list_cale_time_pane_g4_ParamLimits

0x756d,	// (0x0004fa2c) list_cale_time_pane_g4

0x757b,	// (0x0004fa3a) list_cale_time_pane_g5_ParamLimits

0x757b,	// (0x0004fa3a) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x00057813) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x00057813) list_cale_time_pane_g

0x7589,	// (0x0004fa48) list_cale_time_pane_t1_ParamLimits

0x7589,	// (0x0004fa48) list_cale_time_pane_t1

0x75b1,	// (0x0004fa70) list_cale_time_pane_t2_ParamLimits

0x75b1,	// (0x0004fa70) list_cale_time_pane_t2

0x7920,	// (0x0004fddf) aid_blid_cardinal_pane

0x7962,	// (0x0004fe21) compass_pane_t4

0x75d9,	// (0x0004fa98) list_cale_time_pane_t4_ParamLimits

0x75d9,	// (0x0004fa98) list_cale_time_pane_t4

0x7970,	// (0x0004fe2f) compass_pane_t5

0x7980,	// (0x0004fe3f) compass_pane_t6

0x798e,	// (0x0004fe4d) compass_pane_t7

0xdafb,	// (0x00055fba) navi_pane_cc_t1

0xdc50,	// (0x0005610f) aid_phob_thumbnail_center_pane

0x8177,	// (0x00050636) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x00057820) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x00057820) list_cale_time_pane_t

0x4f08,	// (0x0004d3c7) bg_popup_window_pane_cp02_ParamLimits

0x4f08,	// (0x0004d3c7) bg_popup_window_pane_cp02

0xd707,	// (0x00055bc6) heading_pane_cp01_ParamLimits

0xd707,	// (0x00055bc6) heading_pane_cp01

0xd713,	// (0x00055bd2) loc_req_pane_ParamLimits

0xd713,	// (0x00055bd2) loc_req_pane

0xd723,	// (0x00055be2) loc_type_pane_ParamLimits

0xd723,	// (0x00055be2) loc_type_pane

0xd735,	// (0x00055bf4) loc_type_pane_t1_ParamLimits

0xd735,	// (0x00055bf4) loc_type_pane_t1

0xd747,	// (0x00055c06) loc_type_pane_t2_ParamLimits

0xd747,	// (0x00055c06) loc_type_pane_t2

0xd759,	// (0x00055c18) loc_type_pane_t3_ParamLimits

0xd759,	// (0x00055c18) loc_type_pane_t3

0x0002,

0xf368,	// (0x00057827) loc_type_pane_t_ParamLimits

0xf368,	// (0x00057827) loc_type_pane_t

0xd76b,	// (0x00055c2a) list_loc_req_pane

0xd775,	// (0x00055c34) scroll_pane_cp012

0x7601,	// (0x0004fac0) list_single_loc_request_popup_menu_pane_ParamLimits

0x7601,	// (0x0004fac0) list_single_loc_request_popup_menu_pane

0xd780,	// (0x00055c3f) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xd780,	// (0x00055c3f) list_single_loc_request_popup_menu_pane_g1

0xd78c,	// (0x00055c4b) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xd78c,	// (0x00055c4b) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x0005782e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x0005782e) list_single_loc_request_popup_menu_pane_g

0xd798,	// (0x00055c57) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xd798,	// (0x00055c57) list_single_loc_request_popup_menu_pane_t1

0x7613,	// (0x0004fad2) bg_popup_window_pane_cp03_ParamLimits

0x7613,	// (0x0004fad2) bg_popup_window_pane_cp03

0x7621,	// (0x0004fae0) heading_loc_req_pane_ParamLimits

0x7621,	// (0x0004fae0) heading_loc_req_pane

0x762d,	// (0x0004faec) popup_dyc_status_message_window_g1_ParamLimits

0x762d,	// (0x0004faec) popup_dyc_status_message_window_g1

0x7639,	// (0x0004faf8) popup_dyc_status_message_window_t1_ParamLimits

0x7639,	// (0x0004faf8) popup_dyc_status_message_window_t1

0x764b,	// (0x0004fb0a) popup_dyc_status_message_window_t2_ParamLimits

0x764b,	// (0x0004fb0a) popup_dyc_status_message_window_t2

0x765d,	// (0x0004fb1c) popup_dyc_status_message_window_t3_ParamLimits

0x765d,	// (0x0004fb1c) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x00057833) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x00057833) popup_dyc_status_message_window_t

0x52d5,	// (0x0004d794) bg_heading_pane_cp01

0xd7ae,	// (0x00055c6d) heading_loc_req_pane_g1

0xd7b6,	// (0x00055c75) heading_loc_req_pane_g2

0xd7be,	// (0x00055c7d) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x0005783a) heading_loc_req_pane_g

0xd7c6,	// (0x00055c85) heading_loc_req_pane_t1

0xd7d6,	// (0x00055c95) bg_popup_sub_pane_cp01_ParamLimits

0xd7d6,	// (0x00055c95) bg_popup_sub_pane_cp01

0xd7e4,	// (0x00055ca3) popup_cale_events_window_g1_ParamLimits

0xd7e4,	// (0x00055ca3) popup_cale_events_window_g1

0xd804,	// (0x00055cc3) popup_cale_events_window_g2_ParamLimits

0xd804,	// (0x00055cc3) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x0005786e) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x0005786e) popup_cale_events_window_g

0xd824,	// (0x00055ce3) popup_cale_events_window_t1_ParamLimits

0xd824,	// (0x00055ce3) popup_cale_events_window_t1

0xd836,	// (0x00055cf5) popup_cale_events_window_t2_ParamLimits

0xd836,	// (0x00055cf5) popup_cale_events_window_t2

0xd874,	// (0x00055d33) popup_cale_events_window_t3_ParamLimits

0xd874,	// (0x00055d33) popup_cale_events_window_t3

0xd8ae,	// (0x00055d6d) popup_cale_events_window_t4_ParamLimits

0xd8ae,	// (0x00055d6d) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x00057873) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x00057873) popup_cale_events_window_t

0x76e1,	// (0x0004fba0) call_type_pane

0xd8e4,	// (0x00055da3) popup_call_status_window_g1

0x76ed,	// (0x0004fbac) popup_call_status_window_g2

0x76f9,	// (0x0004fbb8) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x0005787c) popup_call_status_window_g

0xd8f2,	// (0x00055db1) call_type_pane_g1

0xd8fb,	// (0x00055dba) call_type_pane_g2

0x0001,

0xf3c4,	// (0x00057883) call_type_pane_g

0x52d5,	// (0x0004d794) bg_popup_sub_pane_cp02

0xd904,	// (0x00055dc3) listscroll_popup_wml_pane

0xd90c,	// (0x00055dcb) list_wml_pane

0xd916,	// (0x00055dd5) scroll_pane_cp013

0xd921,	// (0x00055de0) list_single_graphic_popup_wml_pane_ParamLimits

0xd921,	// (0x00055de0) list_single_graphic_popup_wml_pane

0x5a07,	// (0x0004dec6) list_single_graphic_popup_wml_pane_g1

0xd935,	// (0x00055df4) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x00057888) list_single_graphic_popup_wml_pane_g

0xd93d,	// (0x00055dfc) list_single_graphic_popup_wml_pane_t1

0xd953,	// (0x00055e12) aid_call_pane

0x5528,	// (0x0004d9e7) popup_clock_analogue_window_g1

0x5528,	// (0x0004d9e7) popup_clock_analogue_window_g2

0x7705,	// (0x0004fbc4) popup_clock_analogue_window_g3

0x7705,	// (0x0004fbc4) popup_clock_analogue_window_g4

0x5a07,	// (0x0004dec6) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x0005788d) popup_clock_analogue_window_g

0x770d,	// (0x0004fbcc) popup_clock_analogue_window_t1

0x771b,	// (0x0004fbda) clock_digital_number_pane_ParamLimits

0x771b,	// (0x0004fbda) clock_digital_number_pane

0x7727,	// (0x0004fbe6) clock_digital_number_pane_cp02_ParamLimits

0x7727,	// (0x0004fbe6) clock_digital_number_pane_cp02

0x7733,	// (0x0004fbf2) clock_digital_number_pane_cp03_ParamLimits

0x7733,	// (0x0004fbf2) clock_digital_number_pane_cp03

0x773f,	// (0x0004fbfe) clock_digital_number_pane_cp04_ParamLimits

0x773f,	// (0x0004fbfe) clock_digital_number_pane_cp04

0x774b,	// (0x0004fc0a) clock_digital_separator_pane_ParamLimits

0x774b,	// (0x0004fc0a) clock_digital_separator_pane

0x7757,	// (0x0004fc16) popup_clock_digital_window_t1

0x5a07,	// (0x0004dec6) clock_digital_number_pane_g1

0x5a07,	// (0x0004dec6) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x000577fb) clock_digital_number_pane_g

0x5a07,	// (0x0004dec6) clock_digital_separator_pane_g1

0x5a07,	// (0x0004dec6) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x000577fb) clock_digital_separator_pane_g

0x52d5,	// (0x0004d794) bg_popup_window_pane_cp04

0xd95b,	// (0x00055e1a) heading_pane_cp03

0xd963,	// (0x00055e22) listscroll_popup_gms_pane

0xd96b,	// (0x00055e2a) grid_large_graphic_popup_pane

0xd975,	// (0x00055e34) listscroll_popup_gms_pane_g1

0xd97d,	// (0x00055e3c) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x00057898) listscroll_popup_gms_pane_g

0x69f2,	// (0x0004eeb1) scroll_pane_cp014

0x7774,	// (0x0004fc33) cell_large_graphic_popup_pane_ParamLimits

0x7774,	// (0x0004fc33) cell_large_graphic_popup_pane

0x778e,	// (0x0004fc4d) cell_large_graphic_popup_pane_g1_ParamLimits

0x778e,	// (0x0004fc4d) cell_large_graphic_popup_pane_g1

0xd985,	// (0x00055e44) cell_large_graphic_popup_pane_g2_ParamLimits

0xd985,	// (0x00055e44) cell_large_graphic_popup_pane_g2

0xd991,	// (0x00055e50) cell_large_graphic_popup_pane_g3_ParamLimits

0xd991,	// (0x00055e50) cell_large_graphic_popup_pane_g3

0xd99e,	// (0x00055e5d) cell_large_graphic_popup_pane_g4_ParamLimits

0xd99e,	// (0x00055e5d) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x0005789d) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x0005789d) cell_large_graphic_popup_pane_g

0xd9ae,	// (0x00055e6d) grid_highlight_pane_cp010

0x5a07,	// (0x0004dec6) bg_popup_call_pane_g1

0xd9b8,	// (0x00055e77) list_single_graphic_popup_conf_pane_ParamLimits

0xd9b8,	// (0x00055e77) list_single_graphic_popup_conf_pane

0xd9ca,	// (0x00055e89) list_highlight_pane_cp01

0xd9d3,	// (0x00055e92) list_single_graphic_popup_conf_pane_g1

0xd9db,	// (0x00055e9a) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x000578a6) list_single_graphic_popup_conf_pane_g

0xd9e3,	// (0x00055ea2) list_single_graphic_popup_conf_pane_t1

0xd9f1,	// (0x00055eb0) linegrid_cams_pane_g1

0x779a,	// (0x0004fc59) linegrid_cams_pane_g2

0x6147,	// (0x0004e606) linegrid_cams_pane_g3

0xd9fa,	// (0x00055eb9) linegrid_cams_pane_g4

0x77a3,	// (0x0004fc62) linegrid_cams_pane_g5

0x77ac,	// (0x0004fc6b) linegrid_cams_pane_g6

0x6150,	// (0x0004e60f) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x000578ab) linegrid_cams_pane_g

0xda03,	// (0x00055ec2) popup_clock_analogue_window

0xda03,	// (0x00055ec2) popup_clock_digital_window

0x52d5,	// (0x0004d794) popup_phob_thumbnail_window

0x5a07,	// (0x0004dec6) call_video_uplink_pane_g1

0xda0c,	// (0x00055ecb) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x000578ba) call_video_uplink_pane_g

0xda14,	// (0x00055ed3) video_uplink_pane

0xda1c,	// (0x00055edb) mce_image_pane_g1

0x77b7,	// (0x0004fc76) mce_image_pane_g2

0x77c1,	// (0x0004fc80) mce_image_pane_g3

0x77cb,	// (0x0004fc8a) mce_image_pane_g4

0x77d3,	// (0x0004fc92) mce_image_pane_g5

0x0004,

0xf400,	// (0x000578bf) mce_image_pane_g

0xda26,	// (0x00055ee5) control_top_pane_stacon_cp01_ParamLimits

0xda26,	// (0x00055ee5) control_top_pane_stacon_cp01

0xda3a,	// (0x00055ef9) uni_indicator_pane_stacon_cp01_ParamLimits

0xda3a,	// (0x00055ef9) uni_indicator_pane_stacon_cp01

0xda4b,	// (0x00055f0a) bg_popup_sub_pane_cp03

0x77db,	// (0x0004fc9a) chi_dic_find_pane

0x77e3,	// (0x0004fca2) listscroll_chi_dic_pane

0x77ec,	// (0x0004fcab) main_pane_chidic_g1

0x77ff,	// (0x0004fcbe) chi_dic_find_pane_t1

0xda55,	// (0x00055f14) find_chidic_pane

0xda5e,	// (0x00055f1d) chi_dic_list_pane_ParamLimits

0xda5e,	// (0x00055f1d) chi_dic_list_pane

0xda6f,	// (0x00055f2e) scroll_pane_cp020

0x780d,	// (0x0004fccc) find_chidic_pane_t1

0x52d5,	// (0x0004d794) input_focus_pane_cp06

0x781c,	// (0x0004fcdb) list_chi_dic_pane_ParamLimits

0x781c,	// (0x0004fcdb) list_chi_dic_pane

0x7834,	// (0x0004fcf3) list_chi_dic_pane_t1_ParamLimits

0x7834,	// (0x0004fcf3) list_chi_dic_pane_t1

0x52d5,	// (0x0004d794) list_highlight_pane_cp020

0xda77,	// (0x00055f36) bg_cale_heading_pane_g1

0x7847,	// (0x0004fd06) bg_cale_heading_pane_g2

0x784f,	// (0x0004fd0e) bg_cale_heading_pane_g3

0x7857,	// (0x0004fd16) bg_cale_heading_pane_g4

0x7861,	// (0x0004fd20) bg_cale_heading_pane_g5

0x786b,	// (0x0004fd2a) bg_cale_heading_pane_g6

0x7873,	// (0x0004fd32) bg_cale_heading_pane_g7

0x787b,	// (0x0004fd3a) bg_cale_heading_pane_g8

0x7885,	// (0x0004fd44) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x000578ca) bg_cale_heading_pane_g

0xda77,	// (0x00055f36) bg_cale_side_pane_g1

0x788f,	// (0x0004fd4e) bg_cale_side_pane_g2

0x7897,	// (0x0004fd56) bg_cale_side_pane_g3

0x789f,	// (0x0004fd5e) bg_cale_side_pane_g4

0x78a7,	// (0x0004fd66) bg_cale_side_pane_g5

0x78af,	// (0x0004fd6e) bg_cale_side_pane_g6

0x78b7,	// (0x0004fd76) bg_cale_side_pane_g7

0x78bf,	// (0x0004fd7e) bg_cale_side_pane_g8

0x78c7,	// (0x0004fd86) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x000578dd) bg_cale_side_pane_g

0x78cf,	// (0x0004fd8e) popup_call_status_window_ParamLimits

0x78cf,	// (0x0004fd8e) popup_call_status_window

0xda7f,	// (0x00055f3e) stacon_top_pane

0xda87,	// (0x00055f46) status_pane_ParamLimits

0xda87,	// (0x00055f46) status_pane

0xda9c,	// (0x00055f5b) status_small_pane

0xdaa4,	// (0x00055f63) control_pane

0x52d5,	// (0x0004d794) stacon_bottom_pane

0xdaac,	// (0x00055f6b) list_single_mce_smart_pane_t1_ParamLimits

0xdaac,	// (0x00055f6b) list_single_mce_smart_pane_t1

0xdabf,	// (0x00055f7e) list_single_mce_smart_pane_t2_ParamLimits

0xdabf,	// (0x00055f7e) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x000578f0) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x000578f0) list_single_mce_smart_pane_t

0x78db,	// (0x0004fd9a) compass_pane

0x78e6,	// (0x0004fda5) main_location2_pane_t1

0x78fa,	// (0x0004fdb9) main_location2_pane_t2

0x78fa,	// (0x0004fdb9) main_location2_pane_t3

0x0003,

0xf436,	// (0x000578f5) main_location2_pane_t

0xdade,	// (0x00055f9d) compass_pane_g1_ParamLimits

0xdade,	// (0x00055f9d) compass_pane_g1

0x7944,	// (0x0004fe03) compass_pane_t1

0x7953,	// (0x0004fe12) compass_pane_t2

0x0005,

0xf43f,	// (0x000578fe) compass_pane_t

0x799e,	// (0x0004fe5d) text_secondary_cp61

0xdaf2,	// (0x00055fb1) navi_pane_cams_g5

0xdb15,	// (0x00055fd4) navi_pane_im_t1

0xdb23,	// (0x00055fe2) navi_pane_mp_g1_ParamLimits

0xdb23,	// (0x00055fe2) navi_pane_mp_g1

0xdb37,	// (0x00055ff6) navi_pane_mp_g2_ParamLimits

0xdb37,	// (0x00055ff6) navi_pane_mp_g2

0xdb43,	// (0x00056002) navi_pane_mp_g3_ParamLimits

0xdb43,	// (0x00056002) navi_pane_mp_g3

0x0002,

0xf453,	// (0x00057912) navi_pane_mp_g_ParamLimits

0xf453,	// (0x00057912) navi_pane_mp_g

0xdb4f,	// (0x0005600e) navi_pane_mp_t1

0xdb5d,	// (0x0005601c) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x00057919) navi_pane_mp_t

0xdb99,	// (0x00056058) navi_pane_vt_g1

0xdb4f,	// (0x0005600e) navi_pane_vt_t1

0xdba1,	// (0x00056060) navi_slider_pane

0xdba9,	// (0x00056068) zooming_pane

0xdbb1,	// (0x00056070) navi_slider_pane_g1

0x7ab5,	// (0x0004ff74) navi_slider_pane_g2

0x0006,

0xf461,	// (0x00057920) navi_slider_pane_g

0xdbd5,	// (0x00056094) aid_levels_zoom

0xdbdd,	// (0x0005609c) zooming_pane_g1

0xdbe5,	// (0x000560a4) zooming_pane_g2

0xdbe5,	// (0x000560a4) zooming_pane_g3

0x0002,

0xf470,	// (0x0005792f) zooming_pane_g

0xdbed,	// (0x000560ac) level_10_zoom

0xdbf6,	// (0x000560b5) level_11_zoom

0xdbff,	// (0x000560be) level_1_zoom

0xdc08,	// (0x000560c7) level_2_zoom

0xdc11,	// (0x000560d0) level_3_zoom

0xdc1a,	// (0x000560d9) level_4_zoom

0xdc23,	// (0x000560e2) level_5_zoom

0xdc2c,	// (0x000560eb) level_6_zoom

0xdc35,	// (0x000560f4) level_7_zoom

0xdc3e,	// (0x000560fd) level_8_zoom

0xdc47,	// (0x00056106) level_9_zoom

0xdc58,	// (0x00056117) popup_phob_thumbnail_window_g1

0xdc60,	// (0x0005611f) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x00057936) popup_phob_thumbnail_window_g

0xef5b,	// (0x0005741a) level_1_location

0xef63,	// (0x00057422) level_2_location

0xef6b,	// (0x0005742a) level_3_location

0xef73,	// (0x00057432) level_4_location

0xdba9,	// (0x00056068) level_5_location

0x7ac7,	// (0x0004ff86) mce_icon_pane_g1

0x7acf,	// (0x0004ff8e) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x0005793b) mce_icon_pane_g

0x7ad7,	// (0x0004ff96) main_mup_pane_g1_ParamLimits

0x7ad7,	// (0x0004ff96) main_mup_pane_g1

0x7aef,	// (0x0004ffae) main_mup_pane_g2_ParamLimits

0x7aef,	// (0x0004ffae) main_mup_pane_g2

0x7b0b,	// (0x0004ffca) main_mup_pane_g3_ParamLimits

0x7b0b,	// (0x0004ffca) main_mup_pane_g3

0x7b27,	// (0x0004ffe6) main_mup_pane_g4_ParamLimits

0x7b27,	// (0x0004ffe6) main_mup_pane_g4

0x7b3b,	// (0x0004fffa) main_mup_pane_g5_ParamLimits

0x7b3b,	// (0x0004fffa) main_mup_pane_g5

0x7b5c,	// (0x0005001b) main_mup_pane_g6_ParamLimits

0x7b5c,	// (0x0005001b) main_mup_pane_g6

0x7b7c,	// (0x0005003b) main_mup_pane_g7_ParamLimits

0x7b7c,	// (0x0005003b) main_mup_pane_g7

0x7ba0,	// (0x0005005f) main_mup_pane_g8_ParamLimits

0x7ba0,	// (0x0005005f) main_mup_pane_g8

0x7bc4,	// (0x00050083) main_mup_pane_g9_ParamLimits

0x7bc4,	// (0x00050083) main_mup_pane_g9

0x7be7,	// (0x000500a6) main_mup_pane_g10_ParamLimits

0x7be7,	// (0x000500a6) main_mup_pane_g10

0x7c0a,	// (0x000500c9) main_mup_pane_g11_ParamLimits

0x7c0a,	// (0x000500c9) main_mup_pane_g11

0x7c2a,	// (0x000500e9) main_mup_pane_g12_ParamLimits

0x7c2a,	// (0x000500e9) main_mup_pane_g12

0x7c38,	// (0x000500f7) main_mup_pane_g13_ParamLimits

0x7c38,	// (0x000500f7) main_mup_pane_g13

0x000c,

0xf481,	// (0x00057940) main_mup_pane_g_ParamLimits

0xf481,	// (0x00057940) main_mup_pane_g

0x7c4e,	// (0x0005010d) main_mup_pane_t1_ParamLimits

0x7c4e,	// (0x0005010d) main_mup_pane_t1

0x7c6d,	// (0x0005012c) main_mup_pane_t2_ParamLimits

0x7c6d,	// (0x0005012c) main_mup_pane_t2

0x7c87,	// (0x00050146) main_mup_pane_t3_ParamLimits

0x7c87,	// (0x00050146) main_mup_pane_t3

0x7ca1,	// (0x00050160) main_mup_pane_t4_ParamLimits

0x7ca1,	// (0x00050160) main_mup_pane_t4

0x7cb3,	// (0x00050172) main_mup_pane_t5_ParamLimits

0x7cb3,	// (0x00050172) main_mup_pane_t5

0x7cc5,	// (0x00050184) main_mup_pane_t6_ParamLimits

0x7cc5,	// (0x00050184) main_mup_pane_t6

0x0005,

0xf49c,	// (0x0005795b) main_mup_pane_t_ParamLimits

0xf49c,	// (0x0005795b) main_mup_pane_t

0x7cdb,	// (0x0005019a) mup_progress_pane_ParamLimits

0x7cdb,	// (0x0005019a) mup_progress_pane

0x7ce7,	// (0x000501a6) mup_visualizer_pane_ParamLimits

0x7ce7,	// (0x000501a6) mup_visualizer_pane

0x7d25,	// (0x000501e4) mup_volume_pane_ParamLimits

0x7d25,	// (0x000501e4) mup_volume_pane

0xd8e4,	// (0x00055da3) mup_visualizer_pane_g1_ParamLimits

0xd8e4,	// (0x00055da3) mup_visualizer_pane_g1

0xd8e4,	// (0x00055da3) mup_visualizer_pane_g2_ParamLimits

0xd8e4,	// (0x00055da3) mup_visualizer_pane_g2

0xdade,	// (0x00055f9d) mup_visualizer_pane_g3_ParamLimits

0xdade,	// (0x00055f9d) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x00057968) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x00057968) mup_visualizer_pane_g

0x5a07,	// (0x0004dec6) mup_volume_pane_g1

0xdc70,	// (0x0005612f) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x0005796f) mup_volume_pane_g

0x5a07,	// (0x0004dec6) mup_progress_pane_g1

0xdc79,	// (0x00056138) mup_progress_pane_g2

0xdc82,	// (0x00056141) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x00057974) mup_progress_pane_g

0x52d5,	// (0x0004d794) bg_popup_window_pane_cp05

0xdc8b,	// (0x0005614a) heading_pane_cp02_ParamLimits

0xdc8b,	// (0x0005614a) heading_pane_cp02

0xdca7,	// (0x00056166) list_popup_blid_pane

0xdcaf,	// (0x0005616e) list_blid_sat_info_pane_ParamLimits

0xdcaf,	// (0x0005616e) list_blid_sat_info_pane

0xdcc2,	// (0x00056181) list_blid_sat_info_pane_g1

0xdcca,	// (0x00056189) list_blid_sat_info_pane_t1

0x7e44,	// (0x00050303) mup_equalizer_pane_ParamLimits

0x7e44,	// (0x00050303) mup_equalizer_pane

0x7e65,	// (0x00050324) mup_equalizer_pane_cp1_ParamLimits

0x7e65,	// (0x00050324) mup_equalizer_pane_cp1

0x7e86,	// (0x00050345) mup_equalizer_pane_cp2_ParamLimits

0x7e86,	// (0x00050345) mup_equalizer_pane_cp2

0x7ea7,	// (0x00050366) mup_equalizer_pane_cp3_ParamLimits

0x7ea7,	// (0x00050366) mup_equalizer_pane_cp3

0x7ecc,	// (0x0005038b) mup_equalizer_pane_cp4_ParamLimits

0x7ecc,	// (0x0005038b) mup_equalizer_pane_cp4

0x7ef1,	// (0x000503b0) mup_equalizer_pane_cp5

0x7f09,	// (0x000503c8) mup_equalizer_pane_cp6

0x7f21,	// (0x000503e0) mup_equalizer_pane_cp7

0xee75,	// (0x00057334) bg_popup_call_poc_act_pane_g9

0xee7d,	// (0x0005733c) bg_popup_call_poc_act_pane_g10

0xee85,	// (0x00057344) bg_popup_call_poc_act_pane_g11

0x000a,

0x5530,	// (0x0004d9ef) mup_scale_pane

0x5a07,	// (0x0004dec6) mup_scale_pane_g1

0xdcd8,	// (0x00056197) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x00057990) mup_scale_pane_g

0xdcfc,	// (0x000561bb) msg_data_pane

0xdd04,	// (0x000561c3) scroll_pane_cp017

0x7f4b,	// (0x0005040a) bg_list_pane_cp04_ParamLimits

0x7f4b,	// (0x0005040a) bg_list_pane_cp04

0xdd0c,	// (0x000561cb) msg_data_pane_g1

0x7f71,	// (0x00050430) msg_data_pane_g2

0x7f7b,	// (0x0005043a) msg_data_pane_g3

0x7f85,	// (0x00050444) msg_data_pane_g4

0x7f8d,	// (0x0005044c) msg_data_pane_g5

0x7f95,	// (0x00050454) msg_data_pane_g6

0x7f9d,	// (0x0005045c) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x0005799f) msg_data_pane_g

0x7fa5,	// (0x00050464) msg_text_pane_ParamLimits

0x7fa5,	// (0x00050464) msg_text_pane

0x7fd6,	// (0x00050495) qrid_highlight_pane_cp011_ParamLimits

0x7fd6,	// (0x00050495) qrid_highlight_pane_cp011

0x52d5,	// (0x0004d794) msg_body_pane

0x52d5,	// (0x0004d794) msg_header_pane

0xdd1d,	// (0x000561dc) input_focus_pane_cp07

0x7ffa,	// (0x000504b9) msg_header_pane_t1_ParamLimits

0x7ffa,	// (0x000504b9) msg_header_pane_t1

0x800e,	// (0x000504cd) msg_header_pane_t2_ParamLimits

0x800e,	// (0x000504cd) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x000579b3) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x000579b3) msg_header_pane_t

0xdd32,	// (0x000561f1) msg_body_pane_g1

0x8020,	// (0x000504df) msg_body_pane_t1_ParamLimits

0x8020,	// (0x000504df) msg_body_pane_t1

0x8051,	// (0x00050510) msg_body_pane_t2_ParamLimits

0x8051,	// (0x00050510) msg_body_pane_t2

0x8063,	// (0x00050522) msg_body_pane_t3_ParamLimits

0x8063,	// (0x00050522) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x000579b8) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x000579b8) msg_body_pane_t

0x80c7,	// (0x00050586) main_viewer_pane_g1_ParamLimits

0x80c7,	// (0x00050586) main_viewer_pane_g1

0x80d3,	// (0x00050592) main_viewer_pane_g2_ParamLimits

0x80d3,	// (0x00050592) main_viewer_pane_g2

0x80df,	// (0x0005059e) main_viewer_pane_g3_ParamLimits

0x80df,	// (0x0005059e) main_viewer_pane_g3

0x80f0,	// (0x000505af) main_viewer_pane_g4_ParamLimits

0x80f0,	// (0x000505af) main_viewer_pane_g4

0x8101,	// (0x000505c0) main_viewer_pane_g5_ParamLimits

0x8101,	// (0x000505c0) main_viewer_pane_g5

0x8101,	// (0x000505c0) main_viewer_pane_g7_ParamLimits

0x8101,	// (0x000505c0) main_viewer_pane_g7

0x8113,	// (0x000505d2) main_viewer_pane_g8_ParamLimits

0x8113,	// (0x000505d2) main_viewer_pane_g8

0x0007,

0xf509,	// (0x000579c8) main_viewer_pane_g_ParamLimits

0xf509,	// (0x000579c8) main_viewer_pane_g

0xdd3a,	// (0x000561f9) viewer_content_pane_ParamLimits

0xdd3a,	// (0x000561f9) viewer_content_pane

0x814b,	// (0x0005060a) main_postcard_pane_g1_ParamLimits

0x814b,	// (0x0005060a) main_postcard_pane_g1

0x8159,	// (0x00050618) main_postcard_pane_g2_ParamLimits

0x8159,	// (0x00050618) main_postcard_pane_g2

0x8167,	// (0x00050626) main_postcard_pane_g3_ParamLimits

0x8167,	// (0x00050626) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x000579d9) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x000579d9) main_postcard_pane_g

0x8177,	// (0x00050636) main_postcard_pane_g4

0xf0b3,	// (0x00057572) smil_status_volume_pane_g2

0x81a3,	// (0x00050662) postcard_pane_ParamLimits

0x81a3,	// (0x00050662) postcard_pane

0xd8e4,	// (0x00055da3) postcard_pane_g1_ParamLimits

0xd8e4,	// (0x00055da3) postcard_pane_g1

0x81dd,	// (0x0005069c) postcard_pane_g2_ParamLimits

0x81dd,	// (0x0005069c) postcard_pane_g2

0x81e9,	// (0x000506a8) postcard_pane_g3_ParamLimits

0x81e9,	// (0x000506a8) postcard_pane_g3

0xdd48,	// (0x00056207) postcard_pane_g4_ParamLimits

0xdd48,	// (0x00056207) postcard_pane_g4

0x81f5,	// (0x000506b4) postcard_pane_g5_ParamLimits

0x81f5,	// (0x000506b4) postcard_pane_g5

0x8201,	// (0x000506c0) postcard_pane_g6_ParamLimits

0x8201,	// (0x000506c0) postcard_pane_g6

0xdd56,	// (0x00056215) postcard_pane_g7_ParamLimits

0xdd56,	// (0x00056215) postcard_pane_g7

0x0006,

0xf527,	// (0x000579e6) postcard_pane_g_ParamLimits

0xf527,	// (0x000579e6) postcard_pane_g

0x820f,	// (0x000506ce) main_mp2_pane_g1_ParamLimits

0x820f,	// (0x000506ce) main_mp2_pane_g1

0x821d,	// (0x000506dc) main_mp2_pane_g2_ParamLimits

0x821d,	// (0x000506dc) main_mp2_pane_g2

0x8229,	// (0x000506e8) main_mp2_pane_g3_ParamLimits

0x8229,	// (0x000506e8) main_mp2_pane_g3

0x0002,

0xf536,	// (0x000579f5) main_mp2_pane_g_ParamLimits

0xf536,	// (0x000579f5) main_mp2_pane_g

0x8235,	// (0x000506f4) main_mp2_pane_t1_ParamLimits

0x8235,	// (0x000506f4) main_mp2_pane_t1

0x824c,	// (0x0005070b) main_mp2_pane_t2_ParamLimits

0x824c,	// (0x0005070b) main_mp2_pane_t2

0x8260,	// (0x0005071f) main_mp2_pane_t3_ParamLimits

0x8260,	// (0x0005071f) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x000579fc) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x000579fc) main_mp2_pane_t

0xdd64,	// (0x00056223) pec_content_pane_ParamLimits

0xdd64,	// (0x00056223) pec_content_pane

0x69f2,	// (0x0004eeb1) scroll_pane_cp015

0xdd76,	// (0x00056235) pec_attribute_pane_ParamLimits

0xdd76,	// (0x00056235) pec_attribute_pane

0x8272,	// (0x00050731) pec_content_pane_g1_ParamLimits

0x8272,	// (0x00050731) pec_content_pane_g1

0xdd86,	// (0x00056245) pec_content_pane_t1_ParamLimits

0xdd86,	// (0x00056245) pec_content_pane_t1

0xdd98,	// (0x00056257) pec_content_pane_t2_ParamLimits

0xdd98,	// (0x00056257) pec_content_pane_t2

0x0001,

0xf544,	// (0x00057a03) pec_content_pane_t_ParamLimits

0xf544,	// (0x00057a03) pec_content_pane_t

0x827e,	// (0x0005073d) list_single_graphic_pane_cp01_ParamLimits

0x827e,	// (0x0005073d) list_single_graphic_pane_cp01

0x5530,	// (0x0004d9ef) bg_popup_sub_pane_cp04

0xddaa,	// (0x00056269) popup_mup_playback_window_g1

0xddb6,	// (0x00056275) popup_mup_playback_window_t1

0xddcb,	// (0x0005628a) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x00057a08) popup_mup_playback_window_t

0xde02,	// (0x000562c1) main_image_pane_g1_ParamLimits

0xde02,	// (0x000562c1) main_image_pane_g1

0xde45,	// (0x00056304) scroll_pane_cp018_ParamLimits

0xde45,	// (0x00056304) scroll_pane_cp018

0xde5d,	// (0x0005631c) scroll_pane_cp016_ParamLimits

0xde5d,	// (0x0005631c) scroll_pane_cp016

0x830f,	// (0x000507ce) smil2_image_pane_ParamLimits

0x830f,	// (0x000507ce) smil2_image_pane

0x8345,	// (0x00050804) smil2_root_pane_ParamLimits

0x8345,	// (0x00050804) smil2_root_pane

0x8371,	// (0x00050830) smil2_text_pane_ParamLimits

0x8371,	// (0x00050830) smil2_text_pane

0x52d5,	// (0x0004d794) bg_list_pane_cp06

0xde99,	// (0x00056358) grid_radio_pane

0x52d5,	// (0x0004d794) bg_popup_window_pane_cp06

0xdea3,	// (0x00056362) main_fmradio_pane_t1

0xd95b,	// (0x00055e1a) heading_pane_cp04

0xdeb1,	// (0x00056370) main_fmradio_pane_t2

0xee8d,	// (0x0005734c) popup_cale_lunar_info_window_g1

0xdebf,	// (0x0005637e) main_fmradio_pane_t3

0xee95,	// (0x00057354) popup_cale_lunar_info_window_g2

0xdecf,	// (0x0005638e) main_fmradio_pane_t4

0x0001,

0xdedd,	// (0x0005639c) main_fmradio_pane_t5

0x0004,

0xf624,	// (0x00057ae3) popup_cale_lunar_info_window_g

0xf55e,	// (0x00057a1d) main_fmradio_pane_t

0xdeeb,	// (0x000563aa) wait_bar_pane_cp03

0xdef3,	// (0x000563b2) cell_fmradio_pane_ParamLimits

0xdef3,	// (0x000563b2) cell_fmradio_pane

0xdd56,	// (0x00056215) cell_fmradio_pane_g1_ParamLimits

0xdd56,	// (0x00056215) cell_fmradio_pane_g1

0x52d5,	// (0x0004d794) grid_highlight_pane_cp011

0xdf08,	// (0x000563c7) poc_content_pane_ParamLimits

0xdf08,	// (0x000563c7) poc_content_pane

0xdf1a,	// (0x000563d9) scroll_pane_cp019

0x83b1,	// (0x00050870) popup_call_poc_act_window_ParamLimits

0x83b1,	// (0x00050870) popup_call_poc_act_window

0x83be,	// (0x0005087d) popup_call_poc_inact_window_ParamLimits

0x83be,	// (0x0005087d) popup_call_poc_inact_window

0xf5fb,	// (0x00057aba) bg_popup_call_poc_act_pane_g

0xee05,	// (0x000572c4) bg_popup_call_poc_inact_pane_g1

0xee0d,	// (0x000572cc) bg_popup_call_poc_inact_pane_g2

0xdf22,	// (0x000563e1) popup_call_poc_act_window_g2

0xee15,	// (0x000572d4) bg_popup_call_poc_inact_pane_g3

0xee1d,	// (0x000572dc) bg_popup_call_poc_inact_pane_g4

0xee25,	// (0x000572e4) bg_popup_call_poc_inact_pane_g5

0xdf2a,	// (0x000563e9) popup_call_poc_act_window_t1_ParamLimits

0xdf2a,	// (0x000563e9) popup_call_poc_act_window_t1

0xdf52,	// (0x00056411) popup_call_poc_act_window_t2_ParamLimits

0xdf52,	// (0x00056411) popup_call_poc_act_window_t2

0xdf7a,	// (0x00056439) popup_call_poc_act_window_t3_ParamLimits

0xdf7a,	// (0x00056439) popup_call_poc_act_window_t3

0xdfa2,	// (0x00056461) popup_call_poc_act_window_t4_ParamLimits

0xdfa2,	// (0x00056461) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x00057a28) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x00057a28) popup_call_poc_act_window_t

0xee2d,	// (0x000572ec) bg_popup_call_poc_inact_pane_g6

0xee35,	// (0x000572f4) bg_popup_call_poc_inact_pane_g7

0xee3d,	// (0x000572fc) bg_popup_call_poc_inact_pane_g8

0xdfb4,	// (0x00056473) popup_call_poc_inact_window_g2

0xee45,	// (0x00057304) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5e8,	// (0x00057aa7) bg_popup_call_poc_inact_pane_g

0xdfbc,	// (0x0005647b) popup_call_poc_inact_window_t1_ParamLimits

0xdfbc,	// (0x0005647b) popup_call_poc_inact_window_t1

0xdfd1,	// (0x00056490) popup_call_poc_inact_window_t2_ParamLimits

0xdfd1,	// (0x00056490) popup_call_poc_inact_window_t2

0xdfe6,	// (0x000564a5) popup_call_poc_inact_window_t3_ParamLimits

0xdfe6,	// (0x000564a5) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x00057a31) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x00057a31) popup_call_poc_inact_window_t

0xf013,	// (0x000574d2) context_pane_ParamLimits

0x89d0,	// (0x00050e8f) signal_pane_ParamLimits

0xdba9,	// (0x00056068) main_call2_pane

0xf001,	// (0x000574c0) popup_phob_thumbnail2_window_ParamLimits

0xf001,	// (0x000574c0) popup_phob_thumbnail2_window

0x8075,	// (0x00050534) aid_hotspot_pointer_arrow_pane

0x807d,	// (0x0005053c) aid_hotspot_pointer_hand_pane

0x86e6,	// (0x00050ba5) phob_pre_status_pane_g5

0x620c,	// (0x0004e6cb) cams_zoom_pane_ParamLimits

0x6218,	// (0x0004e6d7) image_vga_pane_ParamLimits

0x6227,	// (0x0004e6e6) main_camera_pane_g1_ParamLimits

0x6235,	// (0x0004e6f4) main_camera_pane_g2_ParamLimits

0x6241,	// (0x0004e700) main_camera_pane_g3_ParamLimits

0x624f,	// (0x0004e70e) main_camera_pane_g4_ParamLimits

0x625d,	// (0x0004e71c) main_camera_pane_g5_ParamLimits

0x626b,	// (0x0004e72a) main_camera_pane_g6_ParamLimits

0x6279,	// (0x0004e738) main_camera_pane_g7_ParamLimits

0xf271,	// (0x00057730) main_camera_pane_g_ParamLimits

0x6293,	// (0x0004e752) main_camera_pane_t1_ParamLimits

0x62a5,	// (0x0004e764) main_camera_pane_t2_ParamLimits

0xf282,	// (0x00057741) main_camera_pane_t_ParamLimits

0x5530,	// (0x0004d9ef) bg_popup_preview_window_pane_cp01_ParamLimits

0x5530,	// (0x0004d9ef) bg_popup_preview_window_pane_cp01

0xdffb,	// (0x000564ba) popup_phob_thumbnail2_window_g1_ParamLimits

0xdffb,	// (0x000564ba) popup_phob_thumbnail2_window_g1

0x52d5,	// (0x0004d794) call2_cli_visual_pane

0x83da,	// (0x00050899) popup_call2_audio_conf_window_ParamLimits

0x83da,	// (0x00050899) popup_call2_audio_conf_window

0x83f3,	// (0x000508b2) popup_call2_audio_first_window_ParamLimits

0x83f3,	// (0x000508b2) popup_call2_audio_first_window

0x8491,	// (0x00050950) popup_call2_audio_in_window_ParamLimits

0x8491,	// (0x00050950) popup_call2_audio_in_window

0x84d5,	// (0x00050994) popup_call2_audio_out_window_ParamLimits

0x84d5,	// (0x00050994) popup_call2_audio_out_window

0x853f,	// (0x000509fe) popup_call2_audio_second_window_ParamLimits

0x853f,	// (0x000509fe) popup_call2_audio_second_window

0x859d,	// (0x00050a5c) popup_call2_audio_wait_window_ParamLimits

0x859d,	// (0x00050a5c) popup_call2_audio_wait_window

0x52d5,	// (0x0004d794) bg_popup_call2_act_pane_cp03

0x5512,	// (0x0004d9d1) list_conf_pane_cp

0xe007,	// (0x000564c6) popup_call2_audio_conf_window_t1

0xe015,	// (0x000564d4) list_single_graphic_popup_conf2_pane_ParamLimits

0xe015,	// (0x000564d4) list_single_graphic_popup_conf2_pane

0xd9ca,	// (0x00055e89) list_highlight_pane_cp04

0xe028,	// (0x000564e7) list_single_graphic_popup_conf2_pane_g1

0xd9db,	// (0x00055e9a) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x00057a38) list_single_graphic_popup_conf2_pane_g

0xe032,	// (0x000564f1) list_single_graphic_popup_conf2_pane_t1

0xe040,	// (0x000564ff) bg_popup_call2_act_pane_cp01_ParamLimits

0xe040,	// (0x000564ff) bg_popup_call2_act_pane_cp01

0xe0ca,	// (0x00056589) call_type_pane_cp05_ParamLimits

0xe0ca,	// (0x00056589) call_type_pane_cp05

0xe11e,	// (0x000565dd) popup_call2_audio_second_window_g1_ParamLimits

0xe11e,	// (0x000565dd) popup_call2_audio_second_window_g1

0xe172,	// (0x00056631) popup_call2_audio_second_window_g2_ParamLimits

0xe172,	// (0x00056631) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x00057a3d) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x00057a3d) popup_call2_audio_second_window_g

0xe1d7,	// (0x00056696) popup_call2_audio_second_window_t1_ParamLimits

0xe1d7,	// (0x00056696) popup_call2_audio_second_window_t1

0xe292,	// (0x00056751) popup_call2_audio_second_window_t2_ParamLimits

0xe292,	// (0x00056751) popup_call2_audio_second_window_t2

0xe2e5,	// (0x000567a4) popup_call2_audio_second_window_t3_ParamLimits

0xe2e5,	// (0x000567a4) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x00057a44) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x00057a44) popup_call2_audio_second_window_t

0x52d5,	// (0x0004d794) bg_popup_call2_in_pane_cp02

0x52df,	// (0x0004d79e) call_type_pane_cp04

0x52e7,	// (0x0004d7a6) popup_call2_audio_wait_window_g1

0x52ef,	// (0x0004d7ae) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0005761d) popup_call2_audio_wait_window_g

0x52f7,	// (0x0004d7b6) popup_call2_audio_wait_window_t3

0xe3d8,	// (0x00056897) bg_popup_call2_act_pane_ParamLimits

0xe3d8,	// (0x00056897) bg_popup_call2_act_pane

0xe498,	// (0x00056957) call_type_pane_cp03_ParamLimits

0xe498,	// (0x00056957) call_type_pane_cp03

0xe4fc,	// (0x000569bb) popup_call2_audio_first_window_g1_ParamLimits

0xe4fc,	// (0x000569bb) popup_call2_audio_first_window_g1

0xe56c,	// (0x00056a2b) popup_call2_audio_first_window_g2_ParamLimits

0xe56c,	// (0x00056a2b) popup_call2_audio_first_window_g2

0xd8e4,	// (0x00055da3) popup_call2_audio_first_window_g3_ParamLimits

0xd8e4,	// (0x00055da3) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x00057a4d) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x00057a4d) popup_call2_audio_first_window_g

0xe64a,	// (0x00056b09) popup_call2_audio_first_window_t1_ParamLimits

0xe64a,	// (0x00056b09) popup_call2_audio_first_window_t1

0xe74d,	// (0x00056c0c) popup_call2_audio_first_window_t4_ParamLimits

0xe74d,	// (0x00056c0c) popup_call2_audio_first_window_t4

0xe830,	// (0x00056cef) popup_call2_audio_first_window_t5_ParamLimits

0xe830,	// (0x00056cef) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x00057a58) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x00057a58) popup_call2_audio_first_window_t

0x5528,	// (0x0004d9e7) bg_popup_call2_act_pane_g1

0xee9f,	// (0x0005735e) popup_cale_lunar_info_window_t1

0xeead,	// (0x0005736c) popup_cale_lunar_info_window_t2

0xeebb,	// (0x0005737a) popup_cale_lunar_info_window_t3

0x52d5,	// (0x0004d794) bg_popup_call2_bubble_pane

0xe931,	// (0x00056df0) bg_popup_call2_in_pane_cp01_ParamLimits

0xe931,	// (0x00056df0) bg_popup_call2_in_pane_cp01

0x4f8d,	// (0x0004d44c) call_type_pane_cp02

0xe979,	// (0x00056e38) popup_call2_audio_out_window_g1_ParamLimits

0xe979,	// (0x00056e38) popup_call2_audio_out_window_g1

0xe9a5,	// (0x00056e64) popup_call2_audio_out_window_g2_ParamLimits

0xe9a5,	// (0x00056e64) popup_call2_audio_out_window_g2

0xe9cd,	// (0x00056e8c) popup_call2_audio_out_window_g3_ParamLimits

0xe9cd,	// (0x00056e8c) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x00057a61) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x00057a61) popup_call2_audio_out_window_g

0xea08,	// (0x00056ec7) popup_call2_audio_out_window_t1_ParamLimits

0xea08,	// (0x00056ec7) popup_call2_audio_out_window_t1

0xea67,	// (0x00056f26) popup_call2_audio_out_window_t2_ParamLimits

0xea67,	// (0x00056f26) popup_call2_audio_out_window_t2

0xeabb,	// (0x00056f7a) popup_call2_audio_out_window_t3_ParamLimits

0xeabb,	// (0x00056f7a) popup_call2_audio_out_window_t3

0xead1,	// (0x00056f90) popup_call2_audio_out_window_t4_ParamLimits

0xead1,	// (0x00056f90) popup_call2_audio_out_window_t4

0xeae7,	// (0x00056fa6) popup_call2_audio_out_window_t5_ParamLimits

0xeae7,	// (0x00056fa6) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x00057a6a) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x00057a6a) popup_call2_audio_out_window_t

0xeb4b,	// (0x0005700a) bg_popup_call2_in_pane_ParamLimits

0xeb4b,	// (0x0005700a) bg_popup_call2_in_pane

0xeba7,	// (0x00057066) popup_call2_audio_in_window_g1_ParamLimits

0xeba7,	// (0x00057066) popup_call2_audio_in_window_g1

0xebdf,	// (0x0005709e) popup_call2_audio_in_window_g2_ParamLimits

0xebdf,	// (0x0005709e) popup_call2_audio_in_window_g2

0xec17,	// (0x000570d6) popup_call2_audio_in_window_g3_ParamLimits

0xec17,	// (0x000570d6) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x00057a77) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x00057a77) popup_call2_audio_in_window_g

0xec6f,	// (0x0005712e) popup_call2_audio_in_window_t1_ParamLimits

0xec6f,	// (0x0005712e) popup_call2_audio_in_window_t1

0xecef,	// (0x000571ae) popup_call2_audio_in_window_t2_ParamLimits

0xecef,	// (0x000571ae) popup_call2_audio_in_window_t2

0xed6f,	// (0x0005722e) popup_call2_audio_in_window_t3_ParamLimits

0xed6f,	// (0x0005722e) popup_call2_audio_in_window_t3

0xed89,	// (0x00057248) popup_call2_audio_in_window_t4_ParamLimits

0xed89,	// (0x00057248) popup_call2_audio_in_window_t4

0xed9b,	// (0x0005725a) popup_call2_audio_in_window_t5_ParamLimits

0xed9b,	// (0x0005725a) popup_call2_audio_in_window_t5

0xedb0,	// (0x0005726f) popup_call2_audio_in_window_t6_ParamLimits

0xedb0,	// (0x0005726f) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x00057a80) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x00057a80) popup_call2_audio_in_window_t

0x5528,	// (0x0004d9e7) bg_popup_call2_in_pane_g1

0xeec9,	// (0x00057388) popup_cale_lunar_info_window_t4

0x0003,

0xf629,	// (0x00057ae8) popup_cale_lunar_info_window_t

0x5530,	// (0x0004d9ef) bg_popup_call2_rect_pane_ParamLimits

0x5530,	// (0x0004d9ef) bg_popup_call2_rect_pane

0x52d5,	// (0x0004d794) call2_cli_visual_graphic_pane

0x52d5,	// (0x0004d794) call2_cli_visual_text_pane

0x8a55,	// (0x00050f14) smil_status_volume_pane_g3

0x0002,

0x5a07,	// (0x0004dec6) call2_cli_visual_graphic_pane_g1

0x5a07,	// (0x0004dec6) call2_cli_visual_graphic_pane_g2

0x5a07,	// (0x0004dec6) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x00057a8d) call2_cli_visual_graphic_pane_g

0xedc5,	// (0x00057284) bg_popup_call2_rect_pane_g1

0x5b46,	// (0x0004e005) bg_popup_call2_rect_pane_g2

0xedcd,	// (0x0005728c) bg_popup_call2_rect_pane_g3

0xedd5,	// (0x00057294) bg_popup_call2_rect_pane_g4

0xeddd,	// (0x0005729c) bg_popup_call2_rect_pane_g5

0xede5,	// (0x000572a4) bg_popup_call2_rect_pane_g6

0xeded,	// (0x000572ac) bg_popup_call2_rect_pane_g7

0xedf5,	// (0x000572b4) bg_popup_call2_rect_pane_g8

0xedfd,	// (0x000572bc) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x00057a94) bg_popup_call2_rect_pane_g

0xee05,	// (0x000572c4) bg_popup_call2_bubble_pane_g1

0xee0d,	// (0x000572cc) bg_popup_call2_bubble_pane_g2

0xee15,	// (0x000572d4) bg_popup_call2_bubble_pane_g3

0xee1d,	// (0x000572dc) bg_popup_call2_bubble_pane_g4

0xee25,	// (0x000572e4) bg_popup_call2_bubble_pane_g5

0xee2d,	// (0x000572ec) bg_popup_call2_bubble_pane_g6

0xee35,	// (0x000572f4) bg_popup_call2_bubble_pane_g7

0xee3d,	// (0x000572fc) bg_popup_call2_bubble_pane_g8

0xee45,	// (0x00057304) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x00057aa7) bg_popup_call2_bubble_pane_g

0x5c13,	// (0x0004e0d2) aid_cale_week_size_cell_pane

0x62b9,	// (0x0004e778) aid_cams_cif_uncrop_pane_ParamLimits

0x62b9,	// (0x0004e778) aid_cams_cif_uncrop_pane

0x6454,	// (0x0004e913) aid_cams_size_cell_ParamLimits

0x6454,	// (0x0004e913) aid_cams_size_cell

0x6460,	// (0x0004e91f) grid_cams_pane_ParamLimits

0x646e,	// (0x0004e92d) linegrid_cams_pane_ParamLimits

0x65b6,	// (0x0004ea75) call_video_pane_t1

0x65cc,	// (0x0004ea8b) call_video_pane_t2

0x0001,

0xf2d5,	// (0x00057794) call_video_pane_t

0x6c5f,	// (0x0004f11e) aid_cale_month_size_cell_pane_ParamLimits

0x6c5f,	// (0x0004f11e) aid_cale_month_size_cell_pane

0xf672,	// (0x00057b31) smil_status_volume_pane_g

0x8a62,	// (0x00050f21) volume_smil_pane_ParamLimits

0x4b68,	// (0x0004d027) aid_popup2_width_pane

0x5aa7,	// (0x0004df66) cell_qdial_pane_g4_ParamLimits

0x5aa7,	// (0x0004df66) cell_qdial_pane_g4

0x7920,	// (0x0004fddf) aid_blid_cardinal_pane_ParamLimits

0x7930,	// (0x0004fdef) aid_blid_destination_pane_ParamLimits

0x7930,	// (0x0004fdef) aid_blid_destination_pane

0x5530,	// (0x0004d9ef) bg_popup_call_poc_act_pane_ParamLimits

0x5530,	// (0x0004d9ef) bg_popup_call_poc_act_pane

0x5530,	// (0x0004d9ef) bg_popup_call_poc_inact_pane_ParamLimits

0x5530,	// (0x0004d9ef) bg_popup_call_poc_inact_pane

0xee4d,	// (0x0005730c) bg_popup_call_poc_act_pane_g1

0xee55,	// (0x00057314) bg_popup_call_poc_act_pane_g2

0xee5d,	// (0x0005731c) bg_popup_call_poc_act_pane_g3

0xee1d,	// (0x000572dc) bg_popup_call_poc_act_pane_g4

0xee25,	// (0x000572e4) bg_popup_call_poc_act_pane_g5

0xee65,	// (0x00057324) bg_popup_call_poc_act_pane_g6

0xee35,	// (0x000572f4) bg_popup_call_poc_act_pane_g7

0xee6d,	// (0x0005732c) bg_popup_call_poc_act_pane_g8

0x52d5,	// (0x0004d794) main_usb_pane

0xefd8,	// (0x00057497) popup_cale_lunar_info_window

0x68c5,	// (0x0004ed84) im_reading_pane_t1_ParamLimits

0x690d,	// (0x0004edcc) list_im_pane_ParamLimits

0x691e,	// (0x0004eddd) scroll_pane_cp07_ParamLimits

0x52d5,	// (0x0004d794) grid_highlight_pane_cp012

0x5530,	// (0x0004d9ef) mup_scale_pane_ParamLimits

0xd8e4,	// (0x00055da3) main_usb_pane_g1_ParamLimits

0xd8e4,	// (0x00055da3) main_usb_pane_g1

0x8609,	// (0x00050ac8) main_usb_pane_g2_ParamLimits

0x8609,	// (0x00050ac8) main_usb_pane_g2

0x0001,

0xf612,	// (0x00057ad1) main_usb_pane_g_ParamLimits

0xf612,	// (0x00057ad1) main_usb_pane_g

0x8615,	// (0x00050ad4) main_usb_pane_t1_ParamLimits

0x8615,	// (0x00050ad4) main_usb_pane_t1

0x8627,	// (0x00050ae6) main_usb_pane_t2_ParamLimits

0x8627,	// (0x00050ae6) main_usb_pane_t2

0x8639,	// (0x00050af8) main_usb_pane_t3_ParamLimits

0x8639,	// (0x00050af8) main_usb_pane_t3

0x864b,	// (0x00050b0a) main_usb_pane_t4_ParamLimits

0x864b,	// (0x00050b0a) main_usb_pane_t4

0x865d,	// (0x00050b1c) main_usb_pane_t5_ParamLimits

0x865d,	// (0x00050b1c) main_usb_pane_t5

0x866f,	// (0x00050b2e) main_usb_pane_t6_ParamLimits

0x866f,	// (0x00050b2e) main_usb_pane_t6

0x0005,

0xf617,	// (0x00057ad6) main_usb_pane_t_ParamLimits

0x78db,	// (0x0004fd9a) aid_text_placing

0x78e6,	// (0x0004fda5) main_location2_pane_t1_ParamLimits

0x78fa,	// (0x0004fdb9) main_location2_pane_t2_ParamLimits

0x78fa,	// (0x0004fdb9) main_location2_pane_t3_ParamLimits

0x790e,	// (0x0004fdcd) main_location2_pane_t4_ParamLimits

0x790e,	// (0x0004fdcd) main_location2_pane_t4

0xf436,	// (0x000578f5) main_location2_pane_t_ParamLimits

0x560c,	// (0x0004dacb) find_pinb_pane_g2_ParamLimits

0x560c,	// (0x0004dacb) find_pinb_pane_g2

0x0001,

0xf184,	// (0x00057643) find_pinb_pane_g_ParamLimits

0xf184,	// (0x00057643) find_pinb_pane_g

0x5618,	// (0x0004dad7) find_pinb_pane_t1_ParamLimits

0x562a,	// (0x0004dae9) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x00057648) find_pinb_pane_t_ParamLimits

0x52d5,	// (0x0004d794) main_call3_pane

0x6fbb,	// (0x0004f47a) cale_month_day_heading_pane_t1_ParamLimits

0x7019,	// (0x0004f4d8) cale_month_day_heading_pane_t2_ParamLimits

0x707e,	// (0x0004f53d) cale_month_day_heading_pane_t3_ParamLimits

0x70e3,	// (0x0004f5a2) cale_month_day_heading_pane_t4_ParamLimits

0x7148,	// (0x0004f607) cale_month_day_heading_pane_t5_ParamLimits

0x71b5,	// (0x0004f674) cale_month_day_heading_pane_t6_ParamLimits

0x722a,	// (0x0004f6e9) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x000577cc) cale_month_day_heading_pane_t_ParamLimits

0xd658,	// (0x00055b17) smil_status_volume_pane

0x81c1,	// (0x00050680) postcard_address_pane_ParamLimits

0x81c1,	// (0x00050680) postcard_address_pane

0x81cf,	// (0x0005068e) postcard_message_pane_ParamLimits

0x81cf,	// (0x0005068e) postcard_message_pane

0x85dc,	// (0x00050a9b) call2_cli_visual_pane_t1_ParamLimits

0x85dc,	// (0x00050a9b) call2_cli_visual_pane_t1

0x8ba8,	// (0x00051067) postcard_message_pane_t1_ParamLimits

0x8ba8,	// (0x00051067) postcard_message_pane_t1

0xf0c6,	// (0x00057585) postcard_address_pane_t1_ParamLimits

0xf0c6,	// (0x00057585) postcard_address_pane_t1

0x8b99,	// (0x00051058) popup_call3_audio_in_window_ParamLimits

0x8b99,	// (0x00051058) popup_call3_audio_in_window

0x8a77,	// (0x00050f36) bg_popup_call3_in_pane_ParamLimits

0x8a77,	// (0x00050f36) bg_popup_call3_in_pane

0x8adf,	// (0x00050f9e) popup_call3_audio_in_window_g1_ParamLimits

0x8adf,	// (0x00050f9e) popup_call3_audio_in_window_g1

0x8af7,	// (0x00050fb6) popup_call3_audio_in_window_g2_ParamLimits

0x8af7,	// (0x00050fb6) popup_call3_audio_in_window_g2

0x8b0f,	// (0x00050fce) popup_call3_audio_in_window_g3_ParamLimits

0x8b0f,	// (0x00050fce) popup_call3_audio_in_window_g3

0x0003,

0xf679,	// (0x00057b38) popup_call3_audio_in_window_g_ParamLimits

0xf679,	// (0x00057b38) popup_call3_audio_in_window_g

0x8b37,	// (0x00050ff6) popup_call3_audio_in_window_t1_ParamLimits

0x8b37,	// (0x00050ff6) popup_call3_audio_in_window_t1

0x8b5f,	// (0x0005101e) popup_call3_audio_in_window_t2_ParamLimits

0x8b5f,	// (0x0005101e) popup_call3_audio_in_window_t2

0x8b87,	// (0x00051046) popup_call3_audio_in_window_t3_ParamLimits

0x8b87,	// (0x00051046) popup_call3_audio_in_window_t3

0x0002,

0xf682,	// (0x00057b41) popup_call3_audio_in_window_t_ParamLimits

0xf682,	// (0x00057b41) popup_call3_audio_in_window_t

0xdba9,	// (0x00056068) bg_popup_call3_rect_pane

0xedc5,	// (0x00057284) bg_popup_call3_rect_pane_g1

0x5b46,	// (0x0004e005) bg_popup_call3_rect_pane_g2

0xedcd,	// (0x0005728c) bg_popup_call3_rect_pane_g3

0xedd5,	// (0x00057294) bg_popup_call3_rect_pane_g4

0xeddd,	// (0x0005729c) bg_popup_call3_rect_pane_g5

0xede5,	// (0x000572a4) bg_popup_call3_rect_pane_g6

0xeded,	// (0x000572ac) bg_popup_call3_rect_pane_g7

0x7d40,	// (0x000501ff) mup_visualizer_osc_pane

0xdc68,	// (0x00056127) mup_visualizer_spec_pane

0x8a97,	// (0x00050f56) call3_video_qcif_pane_ParamLimits

0x8a97,	// (0x00050f56) call3_video_qcif_pane

0x8aa9,	// (0x00050f68) call3_video_qcif_uncrop_pane_ParamLimits

0x8aa9,	// (0x00050f68) call3_video_qcif_uncrop_pane

0x8ab9,	// (0x00050f78) call3_video_subqcif_pane_ParamLimits

0x8ab9,	// (0x00050f78) call3_video_subqcif_pane

0x8acd,	// (0x00050f8c) call3_video_subqcif_uncrop_pane_ParamLimits

0x8acd,	// (0x00050f8c) call3_video_subqcif_uncrop_pane

0x8b27,	// (0x00050fe6) popup_call3_audio_in_window_g4_ParamLimits

0x8b27,	// (0x00050fe6) popup_call3_audio_in_window_g4

0x8a44,	// (0x00050f03) mup_spec_half_pane

0x8a4d,	// (0x00050f0c) mup_spec_half_pane_cp

0xf086,	// (0x00057545) mup_osc_middle_pane

0xf08f,	// (0x0005754e) mup_visualizer_osc_pane_g1

0x8a24,	// (0x00050ee3) mup_spec_bar_pane_ParamLimits

0x8a24,	// (0x00050ee3) mup_spec_bar_pane

0xf073,	// (0x00057532) mup_spec_bar_pane_g1

0xf07d,	// (0x0005753c) mup_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x00057b2c) mup_spec_bar_pane_g

0x5c13,	// (0x0004e0d2) aid_cale_week_size_cell_pane_ParamLimits

0x5c26,	// (0x0004e0e5) bg_cale_heading_pane_ParamLimits

0x5c3a,	// (0x0004e0f9) bg_cale_pane_cp01_ParamLimits

0x5c53,	// (0x0004e112) cale_week_corner_pane_ParamLimits

0x5c69,	// (0x0004e128) cale_week_day_heading_pane_ParamLimits

0x5c7d,	// (0x0004e13c) cale_week_scroll_pane_g1_ParamLimits

0x5c8e,	// (0x0004e14d) cale_week_scroll_pane_g2_ParamLimits

0x5c9f,	// (0x0004e15e) cale_week_scroll_pane_g3_ParamLimits

0x5cb0,	// (0x0004e16f) cale_week_scroll_pane_g4_ParamLimits

0x5cc1,	// (0x0004e180) cale_week_scroll_pane_g5_ParamLimits

0x5cd2,	// (0x0004e191) cale_week_scroll_pane_g6_ParamLimits

0x5ce5,	// (0x0004e1a4) cale_week_scroll_pane_g7_ParamLimits

0x5cf8,	// (0x0004e1b7) cale_week_scroll_pane_g8_ParamLimits

0x5d0b,	// (0x0004e1ca) cale_week_scroll_pane_g9_ParamLimits

0x5d1c,	// (0x0004e1db) cale_week_scroll_pane_g10_ParamLimits

0x5d2d,	// (0x0004e1ec) cale_week_scroll_pane_g11_ParamLimits

0x5d3e,	// (0x0004e1fd) cale_week_scroll_pane_g12_ParamLimits

0x5d4f,	// (0x0004e20e) cale_week_scroll_pane_g13_ParamLimits

0x5d60,	// (0x0004e21f) cale_week_scroll_pane_g14_ParamLimits

0x5d71,	// (0x0004e230) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x000576d4) cale_week_scroll_pane_g_ParamLimits

0x5d82,	// (0x0004e241) cale_week_time_pane_ParamLimits

0x5d95,	// (0x0004e254) grid_cale_week_pane_ParamLimits

0x5daa,	// (0x0004e269) listscroll_cale_week_pane_t1

0x5dbc,	// (0x0004e27b) scroll_pane_cp08_ParamLimits

0x6ca0,	// (0x0004f15f) cale_month_corner_pane_ParamLimits

0xd62e,	// (0x00055aed) cale_month_pane_t1

0x6f7a,	// (0x0004f439) cale_month_week_pane_ParamLimits

0xd8e4,	// (0x00055da3) popup_call_status_window_g1_ParamLimits

0x76ed,	// (0x0004fbac) popup_call_status_window_g2_ParamLimits

0x76f9,	// (0x0004fbb8) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x0005787c) popup_call_status_window_g_ParamLimits

0xd94b,	// (0x00055e0a) aid_call2_pane

0x7fec,	// (0x000504ab) msg_header_pane_g1

0x81c1,	// (0x00050680) postcard_address2_pane_ParamLimits

0x81c1,	// (0x00050680) postcard_address2_pane

0x81cf,	// (0x0005068e) postcard_message2_pane_ParamLimits

0x81cf,	// (0x0005068e) postcard_message2_pane

0x89de,	// (0x00050e9d) message2_row_pane_ParamLimits

0x89de,	// (0x00050e9d) message2_row_pane

0xf02e,	// (0x000574ed) address2_row_pane_ParamLimits

0xf02e,	// (0x000574ed) address2_row_pane

0xf041,	// (0x00057500) postcard_message2_row_pane_g1

0xf049,	// (0x00057508) postcard_message2_row_pane_t1

0xf041,	// (0x00057500) address2_row_pane_g1

0xf049,	// (0x00057508) address2_row_pane_t1

0x6161,	// (0x0004e620) aid_size_cell_vorec

0x52d5,	// (0x0004d794) main_rss_pane

0x89f8,	// (0x00050eb7) rss_list_single_pane_ParamLimits

0x89f8,	// (0x00050eb7) rss_list_single_pane

0xf057,	// (0x00057516) rss_list_single_pane_t1

0xf065,	// (0x00057524) rss_list_single_pane_t2

0x0001,

0xf668,	// (0x00057b27) rss_list_single_pane_t

0x52d5,	// (0x0004d794) main_camera2_pane

0x52d5,	// (0x0004d794) main_video2_pane

0x8c0c,	// (0x000510cb) cams_zoom_pane_cp2_ParamLimits

0x8c0c,	// (0x000510cb) cams_zoom_pane_cp2

0x8c18,	// (0x000510d7) image2_vga_pane_ParamLimits

0x8c18,	// (0x000510d7) image2_vga_pane

0x8c27,	// (0x000510e6) main_camera2_pane_g1_ParamLimits

0x8c27,	// (0x000510e6) main_camera2_pane_g1

0x8c33,	// (0x000510f2) main_camera2_pane_g2_ParamLimits

0x8c33,	// (0x000510f2) main_camera2_pane_g2

0x8c3f,	// (0x000510fe) main_camera2_pane_g3_ParamLimits

0x8c3f,	// (0x000510fe) main_camera2_pane_g3

0x8c4b,	// (0x0005110a) main_camera2_pane_g4_ParamLimits

0x8c4b,	// (0x0005110a) main_camera2_pane_g4

0x8c57,	// (0x00051116) main_camera2_pane_g5_ParamLimits

0x8c57,	// (0x00051116) main_camera2_pane_g5

0x8c63,	// (0x00051122) main_camera2_pane_g6_ParamLimits

0x8c63,	// (0x00051122) main_camera2_pane_g6

0x8c6f,	// (0x0005112e) main_camera2_pane_g7_ParamLimits

0x8c6f,	// (0x0005112e) main_camera2_pane_g7

0x8c7b,	// (0x0005113a) main_camera2_pane_g8_ParamLimits

0x8c7b,	// (0x0005113a) main_camera2_pane_g8

0x0008,

0xf689,	// (0x00057b48) main_camera2_pane_g_ParamLimits

0xf689,	// (0x00057b48) main_camera2_pane_g

0x8c93,	// (0x00051152) main_camera2_pane_t1_ParamLimits

0x8c93,	// (0x00051152) main_camera2_pane_t1

0x8ca5,	// (0x00051164) main_camera2_pane_t2_ParamLimits

0x8ca5,	// (0x00051164) main_camera2_pane_t2

0x8cb7,	// (0x00051176) main_camera2_pane_t3_ParamLimits

0x8cb7,	// (0x00051176) main_camera2_pane_t3

0x8cc9,	// (0x00051188) main_camera2_pane_t4_ParamLimits

0x8cc9,	// (0x00051188) main_camera2_pane_t4

0x0006,

0xf69c,	// (0x00057b5b) main_camera2_pane_t_ParamLimits

0xf69c,	// (0x00057b5b) main_camera2_pane_t

0x8d26,	// (0x000511e5) cams_zoom_pane_cp4_ParamLimits

0x8d26,	// (0x000511e5) cams_zoom_pane_cp4

0x8d36,	// (0x000511f5) image2_cif_pane_ParamLimits

0x8d36,	// (0x000511f5) image2_cif_pane

0x8d4b,	// (0x0005120a) image2_subqcif_pane_ParamLimits

0x8d4b,	// (0x0005120a) image2_subqcif_pane

0x8d5a,	// (0x00051219) main_video2_pane_g1_ParamLimits

0x8d5a,	// (0x00051219) main_video2_pane_g1

0x8d6c,	// (0x0005122b) main_video2_pane_g2_ParamLimits

0x8d6c,	// (0x0005122b) main_video2_pane_g2

0x8d7c,	// (0x0005123b) main_video2_pane_g3_ParamLimits

0x8d7c,	// (0x0005123b) main_video2_pane_g3

0x8d8c,	// (0x0005124b) main_video2_pane_g4_ParamLimits

0x8d8c,	// (0x0005124b) main_video2_pane_g4

0x8d9c,	// (0x0005125b) main_video2_pane_g5_ParamLimits

0x8d9c,	// (0x0005125b) main_video2_pane_g5

0x8dac,	// (0x0005126b) main_video2_pane_g6_ParamLimits

0x8dac,	// (0x0005126b) main_video2_pane_g6

0x0005,

0xf6ab,	// (0x00057b6a) main_video2_pane_g_ParamLimits

0xf6ab,	// (0x00057b6a) main_video2_pane_g

0x8dbe,	// (0x0005127d) main_video2_pane_t1_ParamLimits

0x8dbe,	// (0x0005127d) main_video2_pane_t1

0x8dd8,	// (0x00051297) main_video2_pane_t2_ParamLimits

0x8dd8,	// (0x00051297) main_video2_pane_t2

0x8dfe,	// (0x000512bd) main_video2_pane_t3_ParamLimits

0x8dfe,	// (0x000512bd) main_video2_pane_t3

0x0002,

0xf6b8,	// (0x00057b77) main_video2_pane_t_ParamLimits

0xf6b8,	// (0x00057b77) main_video2_pane_t

0x8726,	// (0x00050be5) call_muted_g2

0x0001,

0xf65a,	// (0x00057b19) call_muted_g

0x52d5,	// (0x0004d794) main_mup2_pane

0x0c0f,	// (0x000490ce) main_mup2_pane_g1_ParamLimits

0x0c0f,	// (0x000490ce) main_mup2_pane_g1

0x8e24,	// (0x000512e3) main_mup2_pane_g2_ParamLimits

0x8e24,	// (0x000512e3) main_mup2_pane_g2

0x90b6,	// (0x00051575) main_mup_pane_g13_cp1

0x90be,	// (0x0005157d) mup_volume_pane_cp1

0x8e46,	// (0x00051305) main_mup2_pane_g4_ParamLimits

0x8e46,	// (0x00051305) main_mup2_pane_g4

0x8e5b,	// (0x0005131a) main_mup2_pane_g5_ParamLimits

0x8e5b,	// (0x0005131a) main_mup2_pane_g5

0x8e70,	// (0x0005132f) main_mup2_pane_g6_ParamLimits

0x8e70,	// (0x0005132f) main_mup2_pane_g6

0x8e85,	// (0x00051344) main_mup2_pane_g7_ParamLimits

0x8e85,	// (0x00051344) main_mup2_pane_g7

0x0006,

0xf6bf,	// (0x00057b7e) main_mup2_pane_g_ParamLimits

0xf6bf,	// (0x00057b7e) main_mup2_pane_g

0x8ea1,	// (0x00051360) main_mup2_pane_t1_ParamLimits

0x8ea1,	// (0x00051360) main_mup2_pane_t1

0x8eb8,	// (0x00051377) main_mup2_pane_t2_ParamLimits

0x8eb8,	// (0x00051377) main_mup2_pane_t2

0x8ecf,	// (0x0005138e) main_mup2_pane_t3_ParamLimits

0x8ecf,	// (0x0005138e) main_mup2_pane_t3

0x8ee6,	// (0x000513a5) main_mup2_pane_t4_ParamLimits

0x8ee6,	// (0x000513a5) main_mup2_pane_t4

0x8f00,	// (0x000513bf) main_mup2_pane_t5_ParamLimits

0x8f00,	// (0x000513bf) main_mup2_pane_t5

0x8f1a,	// (0x000513d9) main_mup2_pane_t6_ParamLimits

0x8f1a,	// (0x000513d9) main_mup2_pane_t6

0x0005,

0xf6ce,	// (0x00057b8d) main_mup2_pane_t_ParamLimits

0xf6ce,	// (0x00057b8d) main_mup2_pane_t

0x8f52,	// (0x00051411) mup2_visualizer_pane_ParamLimits

0x8f52,	// (0x00051411) mup2_visualizer_pane

0x8f88,	// (0x00051447) mup_progress_pane_cp_ParamLimits

0x8f88,	// (0x00051447) mup_progress_pane_cp

0x90a1,	// (0x00051560) mup_volume_pane_cp_ParamLimits

0x90a1,	// (0x00051560) mup_volume_pane_cp

0x8fa1,	// (0x00051460) mup2_visualizer_pane_g1_ParamLimits

0x8fa1,	// (0x00051460) mup2_visualizer_pane_g1

0xf0dd,	// (0x0005759c) mup2_visualizer_pane_g2_ParamLimits

0xf0dd,	// (0x0005759c) mup2_visualizer_pane_g2

0x8fb6,	// (0x00051475) mup2_visualizer_pane_g3_ParamLimits

0x8fb6,	// (0x00051475) mup2_visualizer_pane_g3

0x0002,

0xf6db,	// (0x00057b9a) mup2_visualizer_pane_g_ParamLimits

0xf6db,	// (0x00057b9a) mup2_visualizer_pane_g

0xde91,	// (0x00056350) aid_size_cell_fmradio

0x883c,	// (0x00050cfb) aid_height_parent_landcape

0x69d9,	// (0x0004ee98) wml_content_pane_cp

0x69e1,	// (0x0004eea0) wml_tabs_pane

0x69ea,	// (0x0004eea9) popup_wml_miniature_window

0x69f2,	// (0x0004eeb1) scroll_pane_cp021

0x6a06,	// (0x0004eec5) wml_content_pane_comp8

0x52d5,	// (0x0004d794) bg_popup_sub_pane_cp05

0xf0fb,	// (0x000575ba) popup_wml_miniature_window_g1

0xf103,	// (0x000575c2) wml_miniature_view_pane

0x8fc4,	// (0x00051483) aid_size_wml_view

0x8fcc,	// (0x0005148b) wml_miniature_view_pane_g1

0x8fd5,	// (0x00051494) wml_miniature_view_pane_g2

0x8fde,	// (0x0005149d) wml_miniature_view_pane_g3

0x8fe6,	// (0x000514a5) wml_miniature_view_pane_g4

0x8fee,	// (0x000514ad) wml_miniature_view_pane_g5

0x8ff6,	// (0x000514b5) wml_miniature_view_pane_g6

0x8ffe,	// (0x000514bd) wml_miniature_view_pane_g7

0x9006,	// (0x000514c5) wml_miniature_view_pane_g8

0x0007,

0xf6e2,	// (0x00057ba1) wml_miniature_view_pane_g

0x0c0f,	// (0x000490ce) background_graphic_ParamLimits

0x0c0f,	// (0x000490ce) background_graphic

0x0c1b,	// (0x000490da) wml_tabs_2_pane

0x0c24,	// (0x000490e3) wml_tabs_3_pane_ParamLimits

0x0c24,	// (0x000490e3) wml_tabs_3_pane

0x0c36,	// (0x000490f5) wml_tabs_4_pane_ParamLimits

0x0c36,	// (0x000490f5) wml_tabs_4_pane

0x0c4c,	// (0x0004910b) wml_tabs_5_pane_ParamLimits

0x0c4c,	// (0x0004910b) wml_tabs_5_pane

0x0c66,	// (0x00049125) wml_tabs_pane_g2_ParamLimits

0x0c66,	// (0x00049125) wml_tabs_pane_g2

0x0c7a,	// (0x00049139) wml_tabs_pane_g3_ParamLimits

0x0c7a,	// (0x00049139) wml_tabs_pane_g3

0x900e,	// (0x000514cd) wml_tabs_2_active_pane_ParamLimits

0x900e,	// (0x000514cd) wml_tabs_2_active_pane

0x9020,	// (0x000514df) wml_tabs_2_passive_pane_ParamLimits

0x9020,	// (0x000514df) wml_tabs_2_passive_pane

0x9032,	// (0x000514f1) wml_tabs_3_active_pane_cp_ParamLimits

0x9032,	// (0x000514f1) wml_tabs_3_active_pane_cp

0x9045,	// (0x00051504) wml_tabs_3_passive_pane_ParamLimits

0x9045,	// (0x00051504) wml_tabs_3_passive_pane

0x9056,	// (0x00051515) wml_tabs_3_passive_pane_cp_ParamLimits

0x9056,	// (0x00051515) wml_tabs_3_passive_pane_cp

0x906b,	// (0x0005152a) tabs_4_active_pane

0x9073,	// (0x00051532) tabs_4_passive_pane

0x907b,	// (0x0005153a) tabs_4_passive_pane_cp

0x9083,	// (0x00051542) tabs_4_passive_pane_cp2

0x8601,	// (0x00050ac0) aid_height_text

0x7d09,	// (0x000501c8) mup_volume_cont_pane_ParamLimits

0x7d09,	// (0x000501c8) mup_volume_cont_pane

0x55c6,	// (0x0004da85) aid_size_cell_pinb

0x55d0,	// (0x0004da8f) aid_size_list_pinb

0x8f71,	// (0x00051430) mup2_volume_cont_pane_ParamLimits

0x8f71,	// (0x00051430) mup2_volume_cont_pane

0x908d,	// (0x0005154c) mup2_volume_cont_pane_g1_ParamLimits

0x908d,	// (0x0005154c) mup2_volume_cont_pane_g1

0x4b74,	// (0x0004d033) aid_size_cell_touch_ParamLimits

0x4b74,	// (0x0004d033) aid_size_cell_touch

0x4e0f,	// (0x0004d2ce) touch_pane_ParamLimits

0x4e0f,	// (0x0004d2ce) touch_pane

0x4b56,	// (0x0004d015) main_rss2_pane

0x0cd0,	// (0x0004918f) listscroll_rss2_pane

0x0cd9,	// (0x00049198) rss2_navigation_pane

0x0ce1,	// (0x000491a0) list_rss2_pane

0xda6f,	// (0x00055f2e) scroll_pane_cp22

0x0ce9,	// (0x000491a8) rss2_navigation_pane_g1

0x0cf2,	// (0x000491b1) rss2_navigation_pane_g2

0x0cfa,	// (0x000491b9) rss2_navigation_pane_g3

0x0002,

0xf6f3,	// (0x00057bb2) rss2_navigation_pane_g

0x0d02,	// (0x000491c1) rss2_navigation_pane_t1

0x90c6,	// (0x00051585) rss2_list_single_pane_ParamLimits

0x90c6,	// (0x00051585) rss2_list_single_pane

0x0d10,	// (0x000491cf) rss2_list_single_pane_t2

0x0d1e,	// (0x000491dd) rss2_list_single_pane_t3_ParamLimits

0x0d1e,	// (0x000491dd) rss2_list_single_pane_t3

0x0d3b,	// (0x000491fa) rss2_list_single_pane_t4

0x74a2,	// (0x0004f961) smil_status_pane_g1

0xefc2,	// (0x00057481) main_image2_pane_ParamLimits

0xefc2,	// (0x00057481) main_image2_pane

0x8c87,	// (0x00051146) main_camera2_pane_g9_ParamLimits

0x8c87,	// (0x00051146) main_camera2_pane_g9

0x8cdb,	// (0x0005119a) main_camera2_pane_t5_ParamLimits

0x8cdb,	// (0x0005119a) main_camera2_pane_t5

0x8ced,	// (0x000511ac) main_camera2_pane_t6_ParamLimits

0x8ced,	// (0x000511ac) main_camera2_pane_t6

0x90ec,	// (0x000515ab) main_image2_pane_g1_ParamLimits

0x90ec,	// (0x000515ab) main_image2_pane_g1

0x839b,	// (0x0005085a) smil2_video_pane_ParamLimits

0x839b,	// (0x0005085a) smil2_video_pane

0x085a,	// (0x00048d19) aid_zoom_text_primary_cp

0x4dce,	// (0x0004d28d) popup_preview_fixed_window

0x68bd,	// (0x0004ed7c) im_reading_pane_g1

0x8bd1,	// (0x00051090) cams2_bc_adjust_pane_cp_ParamLimits

0x8bd1,	// (0x00051090) cams2_bc_adjust_pane_cp

0x8d18,	// (0x000511d7) cams2_bc_adjust_pane_ParamLimits

0x8d18,	// (0x000511d7) cams2_bc_adjust_pane

0x212a,	// (0x0004a5e9) cams2_bc_adjust_pane_g1

0x90f8,	// (0x000515b7) cams2_slider_pane

0x9101,	// (0x000515c0) cams2_slider_pane_g1

0x910a,	// (0x000515c9) cams2_slider_pane_g2

0x0006,

0xf6fa,	// (0x00057bb9) cams2_slider_pane_g

0x571a,	// (0x0004dbd9) calc_display_pane_ParamLimits

0x5738,	// (0x0004dbf7) calc_paper_pane_ParamLimits

0x5754,	// (0x0004dc13) grid_calc_pane_ParamLimits

0x7757,	// (0x0004fc16) popup_clock_digital_window_t1_ParamLimits

0xde2e,	// (0x000562ed) main_image_pane_t1

0x5700,	// (0x0004dbbf) aid_size_cell_calc_ParamLimits

0x5700,	// (0x0004dbbf) aid_size_cell_calc

0x886e,	// (0x00050d2d) popup_blid_sat_info2_window_ParamLimits

0x886e,	// (0x00050d2d) popup_blid_sat_info2_window

0x0d85,	// (0x00049244) aid_size_cell_blid

0x0d8d,	// (0x0004924c) bg_popup_window_pane_cp07

0x0db0,	// (0x0004926f) grid_popup_blid_pane

0x0dba,	// (0x00049279) heading_pane_cp05_ParamLimits

0x0dba,	// (0x00049279) heading_pane_cp05

0x0e84,	// (0x00049343) cell_popup_blid_pane_ParamLimits

0x0e84,	// (0x00049343) cell_popup_blid_pane

0x0eae,	// (0x0004936d) cell_popup_blid_pane_g1

0x0eb6,	// (0x00049375) cell_popup_blid_pane_t1

0x8f37,	// (0x000513f6) mup2_indicator_pane_ParamLimits

0x8f37,	// (0x000513f6) mup2_indicator_pane

0xdba9,	// (0x00056068) mup2_visualizer_osc_pane

0xf0e9,	// (0x000575a8) mup2_visualizer_spec_pane_ParamLimits

0xf0e9,	// (0x000575a8) mup2_visualizer_spec_pane

0x9124,	// (0x000515e3) mup2_spec_half_pane

0x912d,	// (0x000515ec) mup2_spec_half_pane_cp

0x9137,	// (0x000515f6) mup2_spec_bar_pane_ParamLimits

0x9137,	// (0x000515f6) mup2_spec_bar_pane

0xf073,	// (0x00057532) mup2_spec_bar_pane_g1

0xf07d,	// (0x0005753c) mup2_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x00057b2c) mup2_spec_bar_pane_g

0x9156,	// (0x00051615) mup2_osc_middle_pane

0xf08f,	// (0x0005754e) mup2_visualizer_osc_pane_g1

0x4e86,	// (0x0004d345) popup_number_entry_window_t1_ParamLimits

0x4e99,	// (0x0004d358) popup_number_entry_window_t2_ParamLimits

0x4eab,	// (0x0004d36a) popup_number_entry_window_t3_ParamLimits

0x4ebd,	// (0x0004d37c) popup_number_entry_window_t5_ParamLimits

0x4ebd,	// (0x0004d37c) popup_number_entry_window_t5

0xf12f,	// (0x000575ee) popup_number_entry_window_t_ParamLimits

0x4ef5,	// (0x0004d3b4) text_title_cp2_ParamLimits

0x8085,	// (0x00050544) aid_hotspot_pointer_text2_pane

0x811f,	// (0x000505de) main_viewer_pane_g9_ParamLimits

0x811f,	// (0x000505de) main_viewer_pane_g9

0xd62e,	// (0x00055aed) cale_month_pane_t1_ParamLimits

0xd66b,	// (0x00055b2a) bg_cale_pane_ParamLimits

0xd683,	// (0x00055b42) list_cale_pane_ParamLimits

0x5daa,	// (0x0004e269) listscroll_cale_day_pane_t1

0xd694,	// (0x00055b53) scroll_pane_cp09_ParamLimits

0x7d48,	// (0x00050207) main_mup_eq_pane_t1_ParamLimits

0x7d48,	// (0x00050207) main_mup_eq_pane_t1

0x7d64,	// (0x00050223) main_mup_eq_pane_t2_ParamLimits

0x7d64,	// (0x00050223) main_mup_eq_pane_t2

0x7d80,	// (0x0005023f) main_mup_eq_pane_t3_ParamLimits

0x7d80,	// (0x0005023f) main_mup_eq_pane_t3

0x7d9a,	// (0x00050259) main_mup_eq_pane_t4_ParamLimits

0x7d9a,	// (0x00050259) main_mup_eq_pane_t4

0x7db4,	// (0x00050273) main_mup_eq_pane_t5_ParamLimits

0x7db4,	// (0x00050273) main_mup_eq_pane_t5

0x7dce,	// (0x0005028d) main_mup_eq_pane_t6_ParamLimits

0x7dce,	// (0x0005028d) main_mup_eq_pane_t6

0x7de4,	// (0x000502a3) main_mup_eq_pane_t7_ParamLimits

0x7de4,	// (0x000502a3) main_mup_eq_pane_t7

0x7dfa,	// (0x000502b9) main_mup_eq_pane_t8_ParamLimits

0x7dfa,	// (0x000502b9) main_mup_eq_pane_t8

0x7e10,	// (0x000502cf) main_mup_eq_pane_t9_ParamLimits

0x7e10,	// (0x000502cf) main_mup_eq_pane_t9

0x7e2c,	// (0x000502eb) main_mup_eq_pane_t10_ParamLimits

0x7e2c,	// (0x000502eb) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x0005797b) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x0005797b) main_mup_eq_pane_t

0x7ef1,	// (0x000503b0) mup_equalizer_pane_cp5_ParamLimits

0x7f09,	// (0x000503c8) mup_equalizer_pane_cp6_ParamLimits

0x7f21,	// (0x000503e0) mup_equalizer_pane_cp7_ParamLimits

0x4b56,	// (0x0004d015) main_gallery_pane

0xf098,	// (0x00057557) smil2_volume_pane

0xf0a0,	// (0x0005755f) smil_status_volume_pane_g1_ParamLimits

0xf0b3,	// (0x00057572) smil_status_volume_pane_g2_ParamLimits

0x8a55,	// (0x00050f14) smil_status_volume_pane_g3_ParamLimits

0xf672,	// (0x00057b31) smil_status_volume_pane_g_ParamLimits

0x0d8d,	// (0x0004924c) bg_popup_window_pane_cp07_ParamLimits

0x0d9b,	// (0x0004925a) blid_firmament_pane

0x915f,	// (0x0005161e) aid_size_cell_gallery_ParamLimits

0x915f,	// (0x0005161e) aid_size_cell_gallery

0x916d,	// (0x0005162c) grid_gallery_pane_ParamLimits

0x916d,	// (0x0005162c) grid_gallery_pane

0x917d,	// (0x0005163c) cell_gallery_pane_ParamLimits

0x917d,	// (0x0005163c) cell_gallery_pane

0x0ec4,	// (0x00049383) bg_cell_gallery_focus_pane_ParamLimits

0x0ec4,	// (0x00049383) bg_cell_gallery_focus_pane

0x0ed6,	// (0x00049395) cell_gallery_pane_g1_ParamLimits

0x0ed6,	// (0x00049395) cell_gallery_pane_g1

0x91cb,	// (0x0005168a) cell_gallery_pane_g2_ParamLimits

0x91cb,	// (0x0005168a) cell_gallery_pane_g2

0x91d8,	// (0x00051697) cell_gallery_pane_g3_ParamLimits

0x91d8,	// (0x00051697) cell_gallery_pane_g3

0x0ee2,	// (0x000493a1) cell_gallery_pane_g4_ParamLimits

0x0ee2,	// (0x000493a1) cell_gallery_pane_g4

0x0003,

0xf720,	// (0x00057bdf) cell_gallery_pane_g_ParamLimits

0xf720,	// (0x00057bdf) cell_gallery_pane_g

0x0eee,	// (0x000493ad) bg_cell_gallery_focus_pane_g1

0x0ef6,	// (0x000493b5) bg_cell_gallery_focus_pane_g2

0x0efe,	// (0x000493bd) bg_cell_gallery_focus_pane_g3

0x0f06,	// (0x000493c5) bg_cell_gallery_focus_pane_g4

0x0f0e,	// (0x000493cd) bg_cell_gallery_focus_pane_g5

0x0f16,	// (0x000493d5) bg_cell_gallery_focus_pane_g6

0x0f1e,	// (0x000493dd) bg_cell_gallery_focus_pane_g7

0x0f26,	// (0x000493e5) bg_cell_gallery_focus_pane_g8

0x0007,

0xf729,	// (0x00057be8) bg_cell_gallery_focus_pane_g

0x0f2e,	// (0x000493ed) aid_firma_cardinal

0x0f42,	// (0x00049401) blid_firmament_pane_t1

0x0f59,	// (0x00049418) blid_firmament_pane_t2

0x0f70,	// (0x0004942f) blid_firmament_pane_t3

0x0f87,	// (0x00049446) blid_firmament_pane_t4

0x0003,

0xf73a,	// (0x00057bf9) blid_firmament_pane_t

0x0f9e,	// (0x0004945d) blid_sat_info_pane

0x0fae,	// (0x0004946d) blid_sat_info_pane_g1

0x0fae,	// (0x0004946d) blid_sat_info_pane_g2

0x0001,

0xf743,	// (0x00057c02) blid_sat_info_pane_g

0x0fb8,	// (0x00049477) blid_sat_info_pane_t1

0x0fc6,	// (0x00049485) smil2_volume_content_pane

0x0fcf,	// (0x0004948e) smil2_volume_pane_g1

0x0fd7,	// (0x00049496) smil2_volume_content_pane_g1

0x0fe0,	// (0x0004949f) smil2_volume_content_pane_g2

0x0fe9,	// (0x000494a8) smil2_volume_content_pane_g3

0x0ff2,	// (0x000494b1) smil2_volume_content_pane_g4

0x0ffb,	// (0x000494ba) smil2_volume_content_pane_g5

0x1004,	// (0x000494c3) smil2_volume_content_pane_g6

0x100d,	// (0x000494cc) smil2_volume_content_pane_g7

0x1016,	// (0x000494d5) smil2_volume_content_pane_g8

0x101f,	// (0x000494de) smil2_volume_content_pane_g9

0x1028,	// (0x000494e7) smil2_volume_content_pane_g10

0x0009,

0xf748,	// (0x00057c07) smil2_volume_content_pane_g

0x5e14,	// (0x0004e2d3) cale_week_day_heading_pane_t1_ParamLimits

0x5e41,	// (0x0004e300) cale_week_day_heading_pane_t2_ParamLimits

0x5e6e,	// (0x0004e32d) cale_week_day_heading_pane_t3_ParamLimits

0x5e9b,	// (0x0004e35a) cale_week_day_heading_pane_t4_ParamLimits

0x5ec8,	// (0x0004e387) cale_week_day_heading_pane_t5_ParamLimits

0x5ef5,	// (0x0004e3b4) cale_week_day_heading_pane_t6_ParamLimits

0x5f22,	// (0x0004e3e1) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x000576f3) cale_week_day_heading_pane_t_ParamLimits

0x5f4f,	// (0x0004e40e) bg_cale_side_pane_ParamLimits

0x5f5d,	// (0x0004e41c) cale_week_time_pane_t1_ParamLimits

0x5f89,	// (0x0004e448) cale_week_time_pane_t2_ParamLimits

0x5fb5,	// (0x0004e474) cale_week_time_pane_t3_ParamLimits

0x5fe1,	// (0x0004e4a0) cale_week_time_pane_t4_ParamLimits

0x600d,	// (0x0004e4cc) cale_week_time_pane_t5_ParamLimits

0x6039,	// (0x0004e4f8) cale_week_time_pane_t6_ParamLimits

0x6065,	// (0x0004e524) cale_week_time_pane_t7_ParamLimits

0x6091,	// (0x0004e550) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x00057702) cale_week_time_pane_t_ParamLimits

0x60bd,	// (0x0004e57c) cell_cale_week_pane_g2_ParamLimits

0x5f4f,	// (0x0004e40e) bg_cale_side_pane_cp01_ParamLimits

0x729f,	// (0x0004f75e) cale_month_week_pane_t1_ParamLimits

0x72ca,	// (0x0004f789) cale_month_week_pane_t2_ParamLimits

0x72f5,	// (0x0004f7b4) cale_month_week_pane_t3_ParamLimits

0x7320,	// (0x0004f7df) cale_month_week_pane_t4_ParamLimits

0x734b,	// (0x0004f80a) cale_month_week_pane_t5_ParamLimits

0x7376,	// (0x0004f835) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x000577db) cale_month_week_pane_t_ParamLimits

0x746f,	// (0x0004f92e) cell_cale_month_pane_g1_ParamLimits

0x4b56,	// (0x0004d015) main_cale_event_viewer_pane

0x4b56,	// (0x0004d015) listscroll_cale_event_viewer_pane

0x1031,	// (0x000494f0) list_cale_ev_pane

0x1039,	// (0x000494f8) scroll_pane_cp023

0x91e5,	// (0x000516a4) field_cale_ev_pane_ParamLimits

0x91e5,	// (0x000516a4) field_cale_ev_pane

0x1045,	// (0x00049504) field_cale_ev_content_pane_ParamLimits

0x1045,	// (0x00049504) field_cale_ev_content_pane

0x1051,	// (0x00049510) field_cale_ev_pane_g1_ParamLimits

0x1051,	// (0x00049510) field_cale_ev_pane_g1

0x105d,	// (0x0004951c) field_cale_ev_pane_g2_ParamLimits

0x105d,	// (0x0004951c) field_cale_ev_pane_g2

0x1075,	// (0x00049534) field_cale_ev_pane_g3_ParamLimits

0x1075,	// (0x00049534) field_cale_ev_pane_g3

0x0002,

0xf75d,	// (0x00057c1c) field_cale_ev_pane_g_ParamLimits

0xf75d,	// (0x00057c1c) field_cale_ev_pane_g

0x108d,	// (0x0004954c) field_cale_ev_pane_t1_ParamLimits

0x108d,	// (0x0004954c) field_cale_ev_pane_t1

0x9209,	// (0x000516c8) field_cale_ev_content_pane_t1_ParamLimits

0x9209,	// (0x000516c8) field_cale_ev_content_pane_t1

0xdd14,	// (0x000561d3) bg_button_pane_cp01

0x58b5,	// (0x0004dd74) listscroll_cale_week_pane_ParamLimits

0x5c09,	// (0x0004e0c8) popup_toolbar_window_cp01

0x5daa,	// (0x0004e269) listscroll_cale_week_pane_t1_ParamLimits

0x58b5,	// (0x0004dd74) listscroll_cale_day_pane_ParamLimits

0x5c09,	// (0x0004e0c8) popup_toolbar_window_cp02

0x5daa,	// (0x0004e269) listscroll_cale_day_pane_t1_ParamLimits

0x58b5,	// (0x0004dd74) main_cale_month_pane_ParamLimits

0x8952,	// (0x00050e11) popup_toolbar_window_cp03_ParamLimits

0x8952,	// (0x00050e11) popup_toolbar_window_cp03

0x82ab,	// (0x0005076a) main_image_pane_g2_ParamLimits

0x82ab,	// (0x0005076a) main_image_pane_g2

0x82b7,	// (0x00050776) main_image_pane_g3_ParamLimits

0x82b7,	// (0x00050776) main_image_pane_g3

0x0002,

0xf54e,	// (0x00057a0d) main_image_pane_g_ParamLimits

0xf54e,	// (0x00057a0d) main_image_pane_g

0xde2e,	// (0x000562ed) main_image_pane_t1_ParamLimits

0x82c3,	// (0x00050782) main_image_pane_t2_ParamLimits

0x82c3,	// (0x00050782) main_image_pane_t2

0x82d5,	// (0x00050794) main_image_pane_t3_ParamLimits

0x82d5,	// (0x00050794) main_image_pane_t3

0x82e7,	// (0x000507a6) main_image_pane_t4_ParamLimits

0x82e7,	// (0x000507a6) main_image_pane_t4

0x0003,

0xf555,	// (0x00057a14) main_image_pane_t_ParamLimits

0xf555,	// (0x00057a14) main_image_pane_t

0x82f9,	// (0x000507b8) popup_image_details_window_cp01

0x8303,	// (0x000507c2) popup_toobar_trans_pane_cp01_ParamLimits

0x8303,	// (0x000507c2) popup_toobar_trans_pane_cp01

0x88c3,	// (0x00050d82) popup_image_details_window_ParamLimits

0x88c3,	// (0x00050d82) popup_image_details_window

0xefe4,	// (0x000574a3) popup_image_focus_window

0x8bc3,	// (0x00051082) camera2_autofocus_pane_ParamLimits

0x8bc3,	// (0x00051082) camera2_autofocus_pane

0x4b56,	// (0x0004d015) bg_popup_sub_pane_cp06

0x10a4,	// (0x00049563) popup_image_focus_window_g1

0x10ac,	// (0x0004956b) popup_image_focus_window_g2

0x10b4,	// (0x00049573) popup_image_focus_window_g3

0x10bc,	// (0x0004957b) popup_image_focus_window_g4

0x0003,

0xf764,	// (0x00057c23) popup_image_focus_window_g

0x10c4,	// (0x00049583) popup_image_focus_window_t1

0x10d2,	// (0x00049591) popup_image_focus_window_t2

0x10e2,	// (0x000495a1) popup_image_focus_window_t3

0x0002,

0xf76d,	// (0x00057c2c) popup_image_focus_window_t

0x10f0,	// (0x000495af) camera2_autofocus_pane_g1

0xefc2,	// (0x00057481) bg_tb_trans_pane_cp01

0x10fe,	// (0x000495bd) popup_image_details_window_g1

0x1111,	// (0x000495d0) popup_image_details_window_g2

0x0002,

0xf77f,	// (0x00057c3e) popup_image_details_window_g

0x113a,	// (0x000495f9) popup_image_details_window_t1

0x114c,	// (0x0004960b) popup_image_details_window_t2

0x1165,	// (0x00049624) popup_image_details_window_t3

0x1179,	// (0x00049638) popup_image_details_window_t4

0x1194,	// (0x00049653) popup_image_details_window_t5

0x0004,

0xf786,	// (0x00057c45) popup_image_details_window_t

0x587d,	// (0x0004dd3c) bg_calc_paper_pane_ParamLimits

0x5891,	// (0x0004dd50) grid_highlight_pane_cp013

0x589b,	// (0x0004dd5a) list_calc_pane_ParamLimits

0x58ad,	// (0x0004dd6c) scroll_pane_cp024

0x58b5,	// (0x0004dd74) bg_calc_display_pane_ParamLimits

0x58c1,	// (0x0004dd80) calc_display_pane_t1_ParamLimits

0x58d6,	// (0x0004dd95) calc_display_pane_t2_ParamLimits

0x58eb,	// (0x0004ddaa) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x00057675) calc_display_pane_t_ParamLimits

0x5a11,	// (0x0004ded0) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x00057692) cell_calc_pane_g

0x5a1a,	// (0x0004ded9) cell_calc_pane_t1

0x5a29,	// (0x0004dee8) grid_highlight_pane_cp02_ParamLimits

0x5a3f,	// (0x0004defe) toolbar_button_pane_cp01_ParamLimits

0x5a3f,	// (0x0004defe) toolbar_button_pane_cp01

0xde73,	// (0x00056332) temp_image_control_pane_ParamLimits

0xde73,	// (0x00056332) temp_image_control_pane

0xefc2,	// (0x00057481) main_mp3_pane

0x11ae,	// (0x0004966d) temp_image_control_pane_g1_ParamLimits

0x11ae,	// (0x0004966d) temp_image_control_pane_g1

0x11bc,	// (0x0004967b) temp_image_control_pane_g2_ParamLimits

0x11bc,	// (0x0004967b) temp_image_control_pane_g2

0x11ce,	// (0x0004968d) temp_image_control_pane_g3_ParamLimits

0x11ce,	// (0x0004968d) temp_image_control_pane_g3

0x9257,	// (0x00051716) temp_image_control_pane_g4_ParamLimits

0x9257,	// (0x00051716) temp_image_control_pane_g4

0x0003,

0xf791,	// (0x00057c50) temp_image_control_pane_g_ParamLimits

0xf791,	// (0x00057c50) temp_image_control_pane_g

0x11ae,	// (0x0004966d) main_mp3_pane_g1

0x9268,	// (0x00051727) main_mp3_pane_g2

0x0007,

0xf79a,	// (0x00057c59) main_mp3_pane_g

0x1211,	// (0x000496d0) main_mp3_pane_t1

0x6287,	// (0x0004e746) main_camera_pane_g8_ParamLimits

0x6287,	// (0x0004e746) main_camera_pane_g8

0x63e6,	// (0x0004e8a5) main_video_pane_g7_ParamLimits

0x63e6,	// (0x0004e8a5) main_video_pane_g7

0x8d06,	// (0x000511c5) main_camera2_pane_t7_ParamLimits

0x8d06,	// (0x000511c5) main_camera2_pane_t7

0x6999,	// (0x0004ee58) scroll_pane_cp025_ParamLimits

0x6999,	// (0x0004ee58) scroll_pane_cp025

0x69ad,	// (0x0004ee6c) scroll_pane_cp026_ParamLimits

0x69ad,	// (0x0004ee6c) scroll_pane_cp026

0x69bc,	// (0x0004ee7b) wml_content_pane_ParamLimits

0x4b56,	// (0x0004d015) main_touch_calib_pane

0x930c,	// (0x000517cb) main_touch_calib_pane_g1

0x9318,	// (0x000517d7) main_touch_calib_pane_g2

0x9324,	// (0x000517e3) main_touch_calib_pane_g3

0x9330,	// (0x000517ef) main_touch_calib_pane_g4

0x0003,

0xf7b8,	// (0x00057c77) main_touch_calib_pane_g

0x933c,	// (0x000517fb) main_touch_calib_pane_t1

0x9353,	// (0x00051812) main_touch_calib_pane_t2

0x0004,

0xf7c1,	// (0x00057c80) main_touch_calib_pane_t

0xdaea,	// (0x00055fa9) mup_progress_pane_cp02

0xdb09,	// (0x00055fc8) navi_pane_g1

0xdb6b,	// (0x0005602a) navi_pane_mp_t3

0xefc2,	// (0x00057481) main_mp3_pane_ParamLimits

0x8994,	// (0x00050e53) navi_pane_ParamLimits

0x11ae,	// (0x0004966d) main_mp3_pane_g1_ParamLimits

0x9268,	// (0x00051727) main_mp3_pane_g2_ParamLimits

0x9274,	// (0x00051733) main_mp3_pane_g3_ParamLimits

0x9274,	// (0x00051733) main_mp3_pane_g3

0x9280,	// (0x0005173f) main_mp3_pane_g4_ParamLimits

0x9280,	// (0x0005173f) main_mp3_pane_g4

0x11de,	// (0x0004969d) main_mp3_pane_g5_ParamLimits

0x11de,	// (0x0004969d) main_mp3_pane_g5

0x11ec,	// (0x000496ab) main_mp3_pane_g6_ParamLimits

0x11ec,	// (0x000496ab) main_mp3_pane_g6

0x11f9,	// (0x000496b8) main_mp3_pane_g7_ParamLimits

0x11f9,	// (0x000496b8) main_mp3_pane_g7

0x1205,	// (0x000496c4) main_mp3_pane_g8_ParamLimits

0x1205,	// (0x000496c4) main_mp3_pane_g8

0xf79a,	// (0x00057c59) main_mp3_pane_g_ParamLimits

0x928c,	// (0x0005174b) main_mp3_pane_t2

0x929c,	// (0x0005175b) main_mp3_pane_t3

0x121f,	// (0x000496de) main_mp3_pane_t4

0x122d,	// (0x000496ec) main_mp3_pane_t5

0x0005,

0xf7ab,	// (0x00057c6a) main_mp3_pane_t

0x123b,	// (0x000496fa) mup_progress_pane_cp01

0x085a,	// (0x00048d19) aid_zoom_text_secondary2

0x1031,	// (0x000494f0) list_cale_ev2_pane

0x1039,	// (0x000494f8) scroll_pane_cp023_ParamLimits

0x93aa,	// (0x00051869) field_cale_ev2_pane_ParamLimits

0x93aa,	// (0x00051869) field_cale_ev2_pane

0x1243,	// (0x00049702) field_cale_ev2_pane_g1_ParamLimits

0x1243,	// (0x00049702) field_cale_ev2_pane_g1

0x124f,	// (0x0004970e) field_cale_ev2_pane_g2_ParamLimits

0x124f,	// (0x0004970e) field_cale_ev2_pane_g2

0x1267,	// (0x00049726) field_cale_ev2_pane_g3_ParamLimits

0x1267,	// (0x00049726) field_cale_ev2_pane_g3

0x0003,

0xf7cc,	// (0x00057c8b) field_cale_ev2_pane_g_ParamLimits

0xf7cc,	// (0x00057c8b) field_cale_ev2_pane_g

0x128b,	// (0x0004974a) field_cale_ev2_pane_t1_ParamLimits

0x128b,	// (0x0004974a) field_cale_ev2_pane_t1

0x12a2,	// (0x00049761) field_cale_ev2_pane_t2_ParamLimits

0x12a2,	// (0x00049761) field_cale_ev2_pane_t2

0x0001,

0xf7d5,	// (0x00057c94) field_cale_ev2_pane_t_ParamLimits

0xf7d5,	// (0x00057c94) field_cale_ev2_pane_t

0x8187,	// (0x00050646) main_postcard_pane_g5_ParamLimits

0x8187,	// (0x00050646) main_postcard_pane_g5

0x8195,	// (0x00050654) main_postcard_pane_g6_ParamLimits

0x8195,	// (0x00050654) main_postcard_pane_g6

0x61fe,	// (0x0004e6bd) camera2_autofocus_pane_cp_ParamLimits

0x61fe,	// (0x0004e6bd) camera2_autofocus_pane_cp

0xefc2,	// (0x00057481) main_mup3_pane

0x93e8,	// (0x000518a7) main_mup3_pane_g1_ParamLimits

0x93e8,	// (0x000518a7) main_mup3_pane_g1

0x9409,	// (0x000518c8) main_mup3_pane_g2_ParamLimits

0x9409,	// (0x000518c8) main_mup3_pane_g2

0x9485,	// (0x00051944) main_mup3_pane_g3_ParamLimits

0x9485,	// (0x00051944) main_mup3_pane_g3

0x94c6,	// (0x00051985) main_mup3_pane_g4_ParamLimits

0x94c6,	// (0x00051985) main_mup3_pane_g4

0x9507,	// (0x000519c6) main_mup3_pane_g5_ParamLimits

0x9507,	// (0x000519c6) main_mup3_pane_g5

0x9548,	// (0x00051a07) main_mup3_pane_g6_ParamLimits

0x9548,	// (0x00051a07) main_mup3_pane_g6

0x12b7,	// (0x00049776) main_mup3_pane_g7_ParamLimits

0x12b7,	// (0x00049776) main_mup3_pane_g7

0x0007,

0xf7e5,	// (0x00057ca4) main_mup3_pane_g_ParamLimits

0xf7e5,	// (0x00057ca4) main_mup3_pane_g

0x95ba,	// (0x00051a79) main_mup3_pane_t1_ParamLimits

0x95ba,	// (0x00051a79) main_mup3_pane_t1

0x962d,	// (0x00051aec) main_mup3_pane_t2_ParamLimits

0x962d,	// (0x00051aec) main_mup3_pane_t2

0x96fa,	// (0x00051bb9) main_mup3_pane_t4_ParamLimits

0x96fa,	// (0x00051bb9) main_mup3_pane_t4

0x974e,	// (0x00051c0d) main_mup3_pane_t5_ParamLimits

0x974e,	// (0x00051c0d) main_mup3_pane_t5

0x97fa,	// (0x00051cb9) main_mup3_pane_t6_ParamLimits

0x97fa,	// (0x00051cb9) main_mup3_pane_t6

0x0005,

0xf7f6,	// (0x00057cb5) main_mup3_pane_t_ParamLimits

0xf7f6,	// (0x00057cb5) main_mup3_pane_t

0x98a2,	// (0x00051d61) mup3_progress_pane_ParamLimits

0x98a2,	// (0x00051d61) mup3_progress_pane

0x990d,	// (0x00051dcc) popup_mup3_control_window_ParamLimits

0x990d,	// (0x00051dcc) popup_mup3_control_window

0x12c5,	// (0x00049784) popup_mup3_text_window

0x992a,	// (0x00051de9) mup3_progress_pane_t1

0x9941,	// (0x00051e00) mup3_progress_pane_t2

0x12cd,	// (0x0004978c) mup3_progress_pane_t3

0x0002,

0xf803,	// (0x00057cc2) mup3_progress_pane_t

0x12e4,	// (0x000497a3) mup_progress_pane_cp03

0x4b56,	// (0x0004d015) bg_tb_trans_pane_cp04

0x9958,	// (0x00051e17) mup3_volume_pane

0x9960,	// (0x00051e1f) popup_mup3_control_window_g1

0x2154,	// (0x0004a613) mup3_volume_pane_g1

0x215d,	// (0x0004a61c) mup3_volume_pane_g2

0x2166,	// (0x0004a625) mup3_volume_pane_g3

0x0002,

0xf80a,	// (0x00057cc9) mup3_volume_pane_g

0x4b56,	// (0x0004d015) bg_tb_trans_pane_cp03

0x12f4,	// (0x000497b3) popup_mup3_text_window_g1

0x12fc,	// (0x000497bb) popup_mup3_text_window_t1

0x59d0,	// (0x0004de8f) list_calc_item_pane_g1_ParamLimits

0x0cb7,	// (0x00049176) mup_volume_pane_cp_g1

0x936a,	// (0x00051829) main_touch_calib_pane_t3

0x937e,	// (0x0005183d) main_touch_calib_pane_t4

0x9394,	// (0x00051853) main_touch_calib_pane_t5

0x4b60,	// (0x0004d01f) aid_cell_size_toolbar2

0x4b68,	// (0x0004d027) aid_popup3_width_pane

0x0852,	// (0x00048d11) aid_zoom_text_msg_primary

0x61c7,	// (0x0004e686) vorec_t7

0x592c,	// (0x0004ddeb) bg_calc_paper_pane_g1_ParamLimits

0x5938,	// (0x0004ddf7) bg_calc_paper_pane_g2_ParamLimits

0x5944,	// (0x0004de03) bg_calc_paper_pane_g3_ParamLimits

0x5950,	// (0x0004de0f) bg_calc_paper_pane_g4_ParamLimits

0x595c,	// (0x0004de1b) bg_calc_paper_pane_g5_ParamLimits

0x5968,	// (0x0004de27) bg_calc_paper_pane_g6_ParamLimits

0x5979,	// (0x0004de38) bg_calc_paper_pane_g7_ParamLimits

0x598a,	// (0x0004de49) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x0005767c) bg_calc_paper_pane_g_ParamLimits

0x599b,	// (0x0004de5a) calc_bg_paper_pane_g9_ParamLimits

0x62fb,	// (0x0004e7ba) image_qvga_pane_ParamLimits

0x62fb,	// (0x0004e7ba) image_qvga_pane

0x5530,	// (0x0004d9ef) bg_popup_sub_pane_cp04_ParamLimits

0xddaa,	// (0x00056269) popup_mup_playback_window_g1_ParamLimits

0xddb6,	// (0x00056275) popup_mup_playback_window_t1_ParamLimits

0xddcb,	// (0x0005628a) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x00057a08) popup_mup_playback_window_t_ParamLimits

0x8e35,	// (0x000512f4) main_mup2_pane_g3_ParamLimits

0x8e35,	// (0x000512f4) main_mup2_pane_g3

0x6636,	// (0x0004eaf5) popup_toolbar_window_cp04

0xe1c6,	// (0x00056685) popup_call2_audio_second_window_g3_ParamLimits

0xe1c6,	// (0x00056685) popup_call2_audio_second_window_g3

0xe5d0,	// (0x00056a8f) popup_call2_audio_first_window_g4_ParamLimits

0xe5d0,	// (0x00056a8f) popup_call2_audio_first_window_g4

0xec4f,	// (0x0005710e) popup_call2_audio_in_window_g4_ParamLimits

0xec4f,	// (0x0005710e) popup_call2_audio_in_window_g4

0x829e,	// (0x0005075d) aid_area_sk_bg_cut_ParamLimits

0x829e,	// (0x0005075d) aid_area_sk_bg_cut

0xdde0,	// (0x0005629f) aid_area_sk_bg_cut_2_ParamLimits

0xdde0,	// (0x0005629f) aid_area_sk_bg_cut_2

0x91bb,	// (0x0005167a) aid_placing_details_win

0x91c3,	// (0x00051682) aid_placing_details_win_2

0x10f0,	// (0x000495af) camera2_autofocus_pane_g1_ParamLimits

0x4dbf,	// (0x0004d27e) popup_fixed_preview_cale_window_ParamLimits

0x4dbf,	// (0x0004d27e) popup_fixed_preview_cale_window

0xdbba,	// (0x00056079) navi_slider_pane_g3

0xdbc3,	// (0x00056082) navi_slider_pane_g4

0xdbcc,	// (0x0005608b) navi_slider_pane_g5

0xdbba,	// (0x00056079) navi_slider_pane_g6

0x7abe,	// (0x0004ff7d) navi_slider_pane_g7

0xdce1,	// (0x000561a0) mup_scale_pane_g3

0xdcea,	// (0x000561a9) mup_scale_pane_g4

0xdcf3,	// (0x000561b2) mup_scale_pane_g5

0x7f39,	// (0x000503f8) mup_scale_pane_g6

0x7f42,	// (0x00050401) mup_scale_pane_g7

0xdbba,	// (0x00056079) cams2_slider_pane_g3

0x0d6c,	// (0x0004922b) cams2_slider_pane_g4

0x9113,	// (0x000515d2) cams2_slider_pane_g5

0xdbba,	// (0x00056079) cams2_slider_pane_g6

0x911b,	// (0x000515da) cams2_slider_pane_g7

0x0fae,	// (0x0004946d) camera2_autofocus_pane_cp_g1

0x130a,	// (0x000497c9) bg_popup_preview_window_pane_cp02_ParamLimits

0x130a,	// (0x000497c9) bg_popup_preview_window_pane_cp02

0x1316,	// (0x000497d5) list_fp_cale_pane_ParamLimits

0x1316,	// (0x000497d5) list_fp_cale_pane

0x1322,	// (0x000497e1) popup_fixed_preview_cale_window_t1_ParamLimits

0x1322,	// (0x000497e1) popup_fixed_preview_cale_window_t1

0x9969,	// (0x00051e28) popup_fixed_preview_cale_window_t2_ParamLimits

0x9969,	// (0x00051e28) popup_fixed_preview_cale_window_t2

0x997e,	// (0x00051e3d) popup_fixed_preview_cale_window_t3_ParamLimits

0x997e,	// (0x00051e3d) popup_fixed_preview_cale_window_t3

0x0002,

0xf811,	// (0x00057cd0) popup_fixed_preview_cale_window_t_ParamLimits

0xf811,	// (0x00057cd0) popup_fixed_preview_cale_window_t

0x9993,	// (0x00051e52) list_single_fp_cale_pane_ParamLimits

0x9993,	// (0x00051e52) list_single_fp_cale_pane

0x1340,	// (0x000497ff) list_single_fp_cale_pane_g1_ParamLimits

0x1340,	// (0x000497ff) list_single_fp_cale_pane_g1

0x134c,	// (0x0004980b) list_single_fp_cale_pane_g2_ParamLimits

0x134c,	// (0x0004980b) list_single_fp_cale_pane_g2

0x0002,

0xf818,	// (0x00057cd7) list_single_fp_cale_pane_g_ParamLimits

0xf818,	// (0x00057cd7) list_single_fp_cale_pane_g

0x1365,	// (0x00049824) list_single_fp_cale_pane_t1_ParamLimits

0x1365,	// (0x00049824) list_single_fp_cale_pane_t1

0x1377,	// (0x00049836) list_single_fp_cale_pane_t2_ParamLimits

0x1377,	// (0x00049836) list_single_fp_cale_pane_t2

0x0001,

0xf81f,	// (0x00057cde) list_single_fp_cale_pane_t_ParamLimits

0xf81f,	// (0x00057cde) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4b56,	// (0x0004d015) main_dialer_pane

0x99a3,	// (0x00051e62) aid_cell_size_keypad

0x99ad,	// (0x00051e6c) dialer_ne_pane

0x99b7,	// (0x00051e76) grid_dialer_command_1_pane

0x99bf,	// (0x00051e7e) grid_dialer_command_2_pane

0x99c7,	// (0x00051e86) grid_dialer_keypad_pane

0x99db,	// (0x00051e9a) bg_popup_call_pane_cp06_ParamLimits

0x99db,	// (0x00051e9a) bg_popup_call_pane_cp06

0x99e7,	// (0x00051ea6) dialer_ne_clear_pane_ParamLimits

0x99e7,	// (0x00051ea6) dialer_ne_clear_pane

0x13aa,	// (0x00049869) dialer_ne_pane_g1

0x13b2,	// (0x00049871) dialer_ne_pane_t1_ParamLimits

0x13b2,	// (0x00049871) dialer_ne_pane_t1

0x99f3,	// (0x00051eb2) dialer_ne_pane_t2_ParamLimits

0x99f3,	// (0x00051eb2) dialer_ne_pane_t2

0x9a10,	// (0x00051ecf) dialer_ne_pane_t3_ParamLimits

0x9a10,	// (0x00051ecf) dialer_ne_pane_t3

0x0002,

0xf824,	// (0x00057ce3) dialer_ne_pane_t_ParamLimits

0xf824,	// (0x00057ce3) dialer_ne_pane_t

0x9a34,	// (0x00051ef3) dialer_ne_pane_t3_copy1_ParamLimits

0x9a34,	// (0x00051ef3) dialer_ne_pane_t3_copy1

0x9a58,	// (0x00051f17) cell_dialer_keypad_pane_ParamLimits

0x9a58,	// (0x00051f17) cell_dialer_keypad_pane

0x9a6f,	// (0x00051f2e) cell_dialer_command_1_pane_ParamLimits

0x9a6f,	// (0x00051f2e) cell_dialer_command_1_pane

0x9a85,	// (0x00051f44) cell_dialer_command_2_pane_ParamLimits

0x9a85,	// (0x00051f44) cell_dialer_command_2_pane

0x13c4,	// (0x00049883) bg_button_pane_cp02_ParamLimits

0x13c4,	// (0x00049883) bg_button_pane_cp02

0x9a94,	// (0x00051f53) cell_dialer_keypad_pane_g1_ParamLimits

0x9a94,	// (0x00051f53) cell_dialer_keypad_pane_g1

0x13c4,	// (0x00049883) bg_button_pane_cp03_ParamLimits

0x13c4,	// (0x00049883) bg_button_pane_cp03

0x9aa8,	// (0x00051f67) cell_dialer_command_1_pane_g1_ParamLimits

0x9aa8,	// (0x00051f67) cell_dialer_command_1_pane_g1

0x13d0,	// (0x0004988f) bg_button_pane_cp04

0x9abc,	// (0x00051f7b) cell_dialer_command_2_pane_g1

0xdba9,	// (0x00056068) bg_button_pane_cp06

0x13d8,	// (0x00049897) dialer_ne_clear_pane_g1

0x7a01,	// (0x0004fec0) navi_pane_g2

0x7a2f,	// (0x0004feee) navi_pane_g3

0x0002,

0xf44c,	// (0x0005790b) navi_pane_g

0x7a5a,	// (0x0004ff19) navi_pane_mv_g2

0x7a81,	// (0x0004ff40) navi_pane_mv_g5

0x7a89,	// (0x0004ff48) navi_pane_mv_t1

0x58b5,	// (0x0004dd74) main_clock2_pane

0x9aee,	// (0x00051fad) main_clock2_list_pane_ParamLimits

0x9aee,	// (0x00051fad) main_clock2_list_pane

0x9b18,	// (0x00051fd7) main_clock2_pane_t1_ParamLimits

0x9b18,	// (0x00051fd7) main_clock2_pane_t1

0x9b46,	// (0x00052005) main_clock2_pane_t2_ParamLimits

0x9b46,	// (0x00052005) main_clock2_pane_t2

0x0004,

0xf82b,	// (0x00057cea) main_clock2_pane_t_ParamLimits

0xf82b,	// (0x00057cea) main_clock2_pane_t

0x9baf,	// (0x0005206e) popup_clock_analogue_window_cp03_ParamLimits

0x9baf,	// (0x0005206e) popup_clock_analogue_window_cp03

0x9bcf,	// (0x0005208e) popup_clock_digital_window_cp02_ParamLimits

0x9bcf,	// (0x0005208e) popup_clock_digital_window_cp02

0x9c40,	// (0x000520ff) main_clock2_list_single_pane_ParamLimits

0x9c40,	// (0x000520ff) main_clock2_list_single_pane

0xdba9,	// (0x00056068) list_highlight_pane_cp05

0x13e0,	// (0x0004989f) main_clock2_list_single_pane_t1

0x6636,	// (0x0004eaf5) popup_toolbar_window_cp04_ParamLimits

0x9227,	// (0x000516e6) camera2_autofocus_pane_g2_ParamLimits

0x9227,	// (0x000516e6) camera2_autofocus_pane_g2

0x9233,	// (0x000516f2) camera2_autofocus_pane_g3_ParamLimits

0x9233,	// (0x000516f2) camera2_autofocus_pane_g3

0x923f,	// (0x000516fe) camera2_autofocus_pane_g4_ParamLimits

0x923f,	// (0x000516fe) camera2_autofocus_pane_g4

0x924b,	// (0x0005170a) camera2_autofocus_pane_g5_ParamLimits

0x924b,	// (0x0005170a) camera2_autofocus_pane_g5

0x0004,

0xf774,	// (0x00057c33) camera2_autofocus_pane_g_ParamLimits

0xf774,	// (0x00057c33) camera2_autofocus_pane_g

0x93c8,	// (0x00051887) camera2_autofocus_pane_cp_g2

0x93d0,	// (0x0005188f) camera2_autofocus_pane_cp_g3

0x93d8,	// (0x00051897) camera2_autofocus_pane_cp_g4

0x93e0,	// (0x0005189f) camera2_autofocus_pane_cp_g5

0x0004,

0xf7da,	// (0x00057c99) camera2_autofocus_pane_cp_g

0x99d3,	// (0x00051e92) popup_dialer_spcha_window

0x4b56,	// (0x0004d015) bg_popup_sub_pane_cp07

0x13ee,	// (0x000498ad) list_spcha_pane

0x13f6,	// (0x000498b5) list_single_spcha_pane_ParamLimits

0x13f6,	// (0x000498b5) list_single_spcha_pane

0x4b56,	// (0x0004d015) list_highlight_pane_cp06

0x1407,	// (0x000498c6) list_single_spcha_pane_t1

0xe9f9,	// (0x00056eb8) popup_call2_audio_out_window_g4_ParamLimits

0xe9f9,	// (0x00056eb8) popup_call2_audio_out_window_g4

0x4b56,	// (0x0004d015) main_imed2_pane

0xefee,	// (0x000574ad) popup_imed_adjust2_window

0x88d1,	// (0x00050d90) popup_imed_trans_window_ParamLimits

0x88d1,	// (0x00050d90) popup_imed_trans_window

0x0de6,	// (0x000492a5) popup_blid_sat_info2_window_t1

0x0df4,	// (0x000492b3) popup_blid_sat_info2_window_t2

0x000a,

0xf709,	// (0x00057bc8) popup_blid_sat_info2_window_t

0x9cea,	// (0x000521a9) aid_size_cell_colour_35

0x9d04,	// (0x000521c3) aid_size_cell_colour_112

0x9d1b,	// (0x000521da) aid_size_cell_effect

0xefc2,	// (0x00057481) bg_tb_trans_pane_cp02

0xf10b,	// (0x000575ca) heading_imed_pane

0x9d35,	// (0x000521f4) listscroll_imed_pane

0x1415,	// (0x000498d4) heading_imed_pane_g1

0x141d,	// (0x000498dc) heading_imed_pane_t1

0x142b,	// (0x000498ea) grid_imed_colour_35_pane_ParamLimits

0x142b,	// (0x000498ea) grid_imed_colour_35_pane

0x9d41,	// (0x00052200) grid_imed_effect_pane

0x1447,	// (0x00049906) list_imed_aspect_pane

0x9d51,	// (0x00052210) scroll_pane_cp027_ParamLimits

0x9d51,	// (0x00052210) scroll_pane_cp027

0x9d5d,	// (0x0005221c) cell_imed_effect_pane_ParamLimits

0x9d5d,	// (0x0005221c) cell_imed_effect_pane

0x144f,	// (0x0004990e) cell_imed_colour_pane_ParamLimits

0x144f,	// (0x0004990e) cell_imed_colour_pane

0x1499,	// (0x00049958) cell_imed_colour_pane_g1_ParamLimits

0x1499,	// (0x00049958) cell_imed_colour_pane_g1

0x14aa,	// (0x00049969) hgihlgiht_grid_pane_cp016_ParamLimits

0x14aa,	// (0x00049969) hgihlgiht_grid_pane_cp016

0x9d79,	// (0x00052238) cell_imed_effect_pane_g1

0x9d81,	// (0x00052240) grid_highlight_pane_cp017

0x14bb,	// (0x0004997a) list_imed_single_pane_ParamLimits

0x14bb,	// (0x0004997a) list_imed_single_pane

0x4b56,	// (0x0004d015) list_highlight_pane_cp07

0x14cf,	// (0x0004998e) list_imed_aspect_pane_comp1_t1

0xefb4,	// (0x00057473) bg_tb_trans_pane_cp05

0x14f1,	// (0x000499b0) popup_imed_adjust2_window_g1

0x1518,	// (0x000499d7) popup_imed_adjust2_window_t1

0x1530,	// (0x000499ef) slider_imed_adjust_pane

0x1544,	// (0x00049a03) slider_imed_adjust_pane_g1

0x1554,	// (0x00049a13) slider_imed_adjust_pane_g2

0x1564,	// (0x00049a23) slider_imed_adjust_pane_g3

0x1575,	// (0x00049a34) slider_imed_adjust_pane_g4

0x0003,

0xf848,	// (0x00057d07) slider_imed_adjust_pane_g

0x9d8a,	// (0x00052249) aid_size_cell_clipart2

0x9d96,	// (0x00052255) grid_imed_clipart_pane

0x1586,	// (0x00049a45) scroll_pane_cp031

0x9da0,	// (0x0005225f) cell_imed_clipart_pane_ParamLimits

0x9da0,	// (0x0005225f) cell_imed_clipart_pane

0x9dbe,	// (0x0005227d) cell_imed_clipart_pane_g1

0x4b56,	// (0x0004d015) grid_highlight_pane_cp014

0x9afa,	// (0x00051fb9) main_clock2_pane_g1_ParamLimits

0x9afa,	// (0x00051fb9) main_clock2_pane_g1

0x9beb,	// (0x000520aa) aid_call2_pane_cp10

0x9bfd,	// (0x000520bc) aid_call_pane_cp10

0xdade,	// (0x00055f9d) popup_clock_analogue_window_cp10_g1

0xdade,	// (0x00055f9d) popup_clock_analogue_window_cp10_g2

0x9c0f,	// (0x000520ce) popup_clock_analogue_window_cp10_g3

0x9c0f,	// (0x000520ce) popup_clock_analogue_window_cp10_g4

0xdade,	// (0x00055f9d) popup_clock_analogue_window_cp10_g5

0x0004,

0xf836,	// (0x00057cf5) popup_clock_analogue_window_cp10_g

0x9c21,	// (0x000520e0) popup_clock_analogue_window_cp10_t1

0x9c52,	// (0x00052111) clock_digital_number_pane_cp10_ParamLimits

0x9c52,	// (0x00052111) clock_digital_number_pane_cp10

0x9c6a,	// (0x00052129) clock_digital_number_pane_cp11_ParamLimits

0x9c6a,	// (0x00052129) clock_digital_number_pane_cp11

0x9c82,	// (0x00052141) clock_digital_number_pane_cp12_ParamLimits

0x9c82,	// (0x00052141) clock_digital_number_pane_cp12

0x9c9a,	// (0x00052159) clock_digital_number_pane_cp13_ParamLimits

0x9c9a,	// (0x00052159) clock_digital_number_pane_cp13

0x9cb2,	// (0x00052171) clock_digital_separator_pane_cp10_ParamLimits

0x9cb2,	// (0x00052171) clock_digital_separator_pane_cp10

0x9cca,	// (0x00052189) popup_clock_digital_window_cp02_t1_ParamLimits

0x9cca,	// (0x00052189) popup_clock_digital_window_cp02_t1

0x5528,	// (0x0004d9e7) clock_digital_number_pane_cp10_g1

0x5528,	// (0x0004d9e7) clock_digital_number_pane_cp10_g2

0x0001,

0xf851,	// (0x00057d10) clock_digital_number_pane_cp10_g

0x5528,	// (0x0004d9e7) clock_digital_separator_pane_cp10_g1

0x5528,	// (0x0004d9e7) clock_digital_separator_pane_g2_cp10

0xdb79,	// (0x00056038) navi_pane_vded_g4

0xdb82,	// (0x00056041) navi_pane_vded_g5

0xdb8b,	// (0x0005604a) navi_pane_vded_t1

0x4b56,	// (0x0004d015) main_vded_pane

0x9dc7,	// (0x00052286) main_vded_pane_g1

0x9dd3,	// (0x00052292) main_vded_pane_g2

0x9ddd,	// (0x0005229c) main_vded_pane_g3

0x0002,

0xf856,	// (0x00057d15) main_vded_pane_g

0x9de7,	// (0x000522a6) main_vded_pane_t1

0x9df5,	// (0x000522b4) main_vded_pane_t2

0x0001,

0xf85d,	// (0x00057d1c) main_vded_pane_t

0x9e03,	// (0x000522c2) vded_slider_pane

0x9e0d,	// (0x000522cc) vded_video_pane

0x158e,	// (0x00049a4d) vded_video_pane_g1

0x9e19,	// (0x000522d8) vded_video_pane_g2

0x0fae,	// (0x0004946d) vded_video_pane_g3

0x0002,

0xf862,	// (0x00057d21) vded_video_pane_g

0x1598,	// (0x00049a57) vded_slider_pane_g1

0x0cb7,	// (0x00049176) vded_slider_pane_g2

0x15a1,	// (0x00049a60) vded_slider_pane_g3

0x15aa,	// (0x00049a69) vded_slider_pane_g4

0x15b3,	// (0x00049a72) vded_slider_pane_g5

0x0004,

0xf869,	// (0x00057d28) vded_slider_pane_g

0x9901,	// (0x00051dc0) mup3_rocker_pane_ParamLimits

0x9901,	// (0x00051dc0) mup3_rocker_pane

0x9e22,	// (0x000522e1) mup3_control_keys_pane_g1

0x9e2a,	// (0x000522e9) mup3_control_keys_pane_g2

0x9e32,	// (0x000522f1) mup3_control_keys_pane_g3

0x9e3a,	// (0x000522f9) mup3_control_keys_pane_g4

0x0003,

0xf874,	// (0x00057d33) mup3_control_keys_pane_g

0x4de7,	// (0x0004d2a6) popup_toolbar2_fixed_window_cp01_ParamLimits

0x4de7,	// (0x0004d2a6) popup_toolbar2_fixed_window_cp01

0x991d,	// (0x00051ddc) popup_toolbar2_fixed_window_cp02_ParamLimits

0x991d,	// (0x00051ddc) popup_toolbar2_fixed_window_cp02

0xe338,	// (0x000567f7) popup_call2_audio_second_window_t4_ParamLimits

0xe338,	// (0x000567f7) popup_call2_audio_second_window_t4

0xe866,	// (0x00056d25) popup_call2_audio_first_window_t6_ParamLimits

0xe866,	// (0x00056d25) popup_call2_audio_first_window_t6

0xeafc,	// (0x00056fbb) popup_call2_audio_out_window_t6_ParamLimits

0xeafc,	// (0x00056fbb) popup_call2_audio_out_window_t6

0x4b56,	// (0x0004d015) main_vitu_pane

0x9e4a,	// (0x00052309) aid_size_cell_itu_ParamLimits

0x9e4a,	// (0x00052309) aid_size_cell_itu

0x19ed,	// (0x00049eac) bg_popup_window_pane_cp08_ParamLimits

0x19ed,	// (0x00049eac) bg_popup_window_pane_cp08

0x9e58,	// (0x00052317) field_vitu_entry_pane_ParamLimits

0x9e58,	// (0x00052317) field_vitu_entry_pane

0x9e67,	// (0x00052326) grid_vitu_function_pane_ParamLimits

0x9e67,	// (0x00052326) grid_vitu_function_pane

0x9e77,	// (0x00052336) grid_vitu_itu_pane_ParamLimits

0x9e77,	// (0x00052336) grid_vitu_itu_pane

0x9e87,	// (0x00052346) cell_vitu_itu_pane_ParamLimits

0x9e87,	// (0x00052346) cell_vitu_itu_pane

0x9e9e,	// (0x0005235d) cell_vitu_function_pane_ParamLimits

0x9e9e,	// (0x0005235d) cell_vitu_function_pane

0xefc2,	// (0x00057481) bg_popup_sub_pane_cp08_ParamLimits

0xefc2,	// (0x00057481) bg_popup_sub_pane_cp08

0x9eb2,	// (0x00052371) field_vitu_entry_pane_t1_ParamLimits

0x9eb2,	// (0x00052371) field_vitu_entry_pane_t1

0x15d4,	// (0x00049a93) field_vitu_entry_pane_t2_ParamLimits

0x15d4,	// (0x00049a93) field_vitu_entry_pane_t2

0x0001,

0xf882,	// (0x00057d41) field_vitu_entry_pane_t_ParamLimits

0xf882,	// (0x00057d41) field_vitu_entry_pane_t

0x15f1,	// (0x00049ab0) bg_button_pane_cp05_ParamLimits

0x15f1,	// (0x00049ab0) bg_button_pane_cp05

0x9ecc,	// (0x0005238b) cell_vitu_itu_pane_g1

0x9ee4,	// (0x000523a3) cell_vitu_itu_pane_t1_ParamLimits

0x9ee4,	// (0x000523a3) cell_vitu_itu_pane_t1

0x9ef6,	// (0x000523b5) cell_vitu_itu_pane_t2_ParamLimits

0x9ef6,	// (0x000523b5) cell_vitu_itu_pane_t2

0x0002,

0xf887,	// (0x00057d46) cell_vitu_itu_pane_t_ParamLimits

0xf887,	// (0x00057d46) cell_vitu_itu_pane_t

0x15ff,	// (0x00049abe) bg_button_pane_cp07

0x9f2b,	// (0x000523ea) cell_vitu_function_pane_g1

0x5778,	// (0x0004dc37) main_calc_pane_g1

0x4b9c,	// (0x0004d05b) aid_visual_content_pane

0x4b56,	// (0x0004d015) main_vradio_pane

0x9f34,	// (0x000523f3) main_vradio_pane_g1_ParamLimits

0x9f34,	// (0x000523f3) main_vradio_pane_g1

0x1609,	// (0x00049ac8) main_vradio_pane_g2_ParamLimits

0x1609,	// (0x00049ac8) main_vradio_pane_g2

0x0001,

0xf88e,	// (0x00057d4d) main_vradio_pane_g_ParamLimits

0xf88e,	// (0x00057d4d) main_vradio_pane_g

0x9f42,	// (0x00052401) main_vradio_pane_t1_ParamLimits

0x9f42,	// (0x00052401) main_vradio_pane_t1

0x9f54,	// (0x00052413) main_vradio_pane_t2_ParamLimits

0x9f54,	// (0x00052413) main_vradio_pane_t2

0x1616,	// (0x00049ad5) main_vradio_pane_t3_ParamLimits

0x1616,	// (0x00049ad5) main_vradio_pane_t3

0x0002,

0xf893,	// (0x00057d52) main_vradio_pane_t_ParamLimits

0xf893,	// (0x00057d52) main_vradio_pane_t

0x9f66,	// (0x00052425) vradio_rocker_control_pane_ParamLimits

0x9f66,	// (0x00052425) vradio_rocker_control_pane

0x9f72,	// (0x00052431) vradio_station_info_pane_ParamLimits

0x9f72,	// (0x00052431) vradio_station_info_pane

0x162a,	// (0x00049ae9) vradio_frequency_info_pane_ParamLimits

0x162a,	// (0x00049ae9) vradio_frequency_info_pane

0x0fae,	// (0x0004946d) vradio_station_info_pane_g1

0x1639,	// (0x00049af8) vradio_station_info_pane_t1_ParamLimits

0x1639,	// (0x00049af8) vradio_station_info_pane_t1

0x165b,	// (0x00049b1a) vradio_station_info_pane_t2_ParamLimits

0x165b,	// (0x00049b1a) vradio_station_info_pane_t2

0x0001,

0xf89a,	// (0x00057d59) vradio_station_info_pane_t_ParamLimits

0xf89a,	// (0x00057d59) vradio_station_info_pane_t

0x166d,	// (0x00049b2c) vradio_tuning_pane

0x1675,	// (0x00049b34) vradio_rocker_control_pane_g1

0x167d,	// (0x00049b3c) vradio_rocker_control_pane_g2

0x1685,	// (0x00049b44) vradio_rocker_control_pane_g3

0x168d,	// (0x00049b4c) vradio_rocker_control_pane_g4

0x1695,	// (0x00049b54) vradio_rocker_control_pane_g5

0x0004,

0xf89f,	// (0x00057d5e) vradio_rocker_control_pane_g

0x9f7f,	// (0x0005243e) vradio_frequency_info_pane_g1

0x169d,	// (0x00049b5c) vradio_frequency_info_pane_t1_ParamLimits

0x169d,	// (0x00049b5c) vradio_frequency_info_pane_t1

0x9f89,	// (0x00052448) vradio_tuning_pane_g1

0x9f94,	// (0x00052453) vradio_tuning_pane_t1

0x4be5,	// (0x0004d0a4) area_side_right_pane_ParamLimits

0x4be5,	// (0x0004d0a4) area_side_right_pane

0xef7b,	// (0x0005743a) status_small_pane_g1

0xef83,	// (0x00057442) status_small_pane_g2

0xef8c,	// (0x0005744b) status_small_pane_g3

0xef95,	// (0x00057454) status_small_pane_g4

0x0003,

0xf65f,	// (0x00057b1e) status_small_pane_g

0xef9e,	// (0x0005745d) status_small_pane_t1

0x4b56,	// (0x0004d015) main_video3_pane

0x16b1,	// (0x00049b70) cams_zoom_vslider_pane

0x16b9,	// (0x00049b78) image3_wide_pane_ParamLimits

0x16b9,	// (0x00049b78) image3_wide_pane

0x16d3,	// (0x00049b92) image3_wide_small_pane

0x16df,	// (0x00049b9e) main_video3_pane_g1_ParamLimits

0x16df,	// (0x00049b9e) main_video3_pane_g1

0x16fb,	// (0x00049bba) main_video3_pane_g2_ParamLimits

0x16fb,	// (0x00049bba) main_video3_pane_g2

0x0001,

0xf8aa,	// (0x00057d69) main_video3_pane_g_ParamLimits

0xf8aa,	// (0x00057d69) main_video3_pane_g

0x1717,	// (0x00049bd6) main_video3_pane_t1_ParamLimits

0x1717,	// (0x00049bd6) main_video3_pane_t1

0x1742,	// (0x00049c01) main_video3_pane_t2_ParamLimits

0x1742,	// (0x00049c01) main_video3_pane_t2

0x176f,	// (0x00049c2e) main_video3_pane_t3_ParamLimits

0x176f,	// (0x00049c2e) main_video3_pane_t3

0x0002,

0xf8af,	// (0x00057d6e) main_video3_pane_t_ParamLimits

0xf8af,	// (0x00057d6e) main_video3_pane_t

0x179c,	// (0x00049c5b) cams_zoom_vslider_pane_g1

0x17a5,	// (0x00049c64) cams_zoom_vslider_pane_g2

0x0001,

0xf8b6,	// (0x00057d75) cams_zoom_vslider_pane_g

0x17ad,	// (0x00049c6c) small_slider_vertical_pane

0x0fae,	// (0x0004946d) small_slider_vertical_pane_g1

0x0fae,	// (0x0004946d) small_slider_vertical_pane_g2

0x17b5,	// (0x00049c74) small_slider_vertical_pane_g3

0x0002,

0xf8bb,	// (0x00057d7a) small_slider_vertical_pane_g

0x4b56,	// (0x0004d015) main_hwr_training_pane

0x17be,	// (0x00049c7d) hwr_training_instruct_pane_ParamLimits

0x17be,	// (0x00049c7d) hwr_training_instruct_pane

0x9fa3,	// (0x00052462) hwr_training_navi_pane_ParamLimits

0x9fa3,	// (0x00052462) hwr_training_navi_pane

0x9fbd,	// (0x0005247c) hwr_training_write_pane_ParamLimits

0x9fbd,	// (0x0005247c) hwr_training_write_pane

0x4b56,	// (0x0004d015) bg_frame_shadow_pane

0x17f5,	// (0x00049cb4) hwr_training_write_pane_g1

0x17fd,	// (0x00049cbc) hwr_training_write_pane_g2

0x1805,	// (0x00049cc4) hwr_training_write_pane_g3

0x180d,	// (0x00049ccc) hwr_training_write_pane_g4

0x1815,	// (0x00049cd4) hwr_training_write_pane_g5

0x181d,	// (0x00049cdc) hwr_training_write_pane_g6

0x1825,	// (0x00049ce4) hwr_training_write_pane_g7

0x0006,

0xf8c2,	// (0x00057d81) hwr_training_write_pane_g

0x9ff5,	// (0x000524b4) hwr_training_navi_pane_g1_ParamLimits

0x9ff5,	// (0x000524b4) hwr_training_navi_pane_g1

0xa007,	// (0x000524c6) hwr_training_navi_pane_g2_ParamLimits

0xa007,	// (0x000524c6) hwr_training_navi_pane_g2

0xa019,	// (0x000524d8) hwr_training_navi_pane_g3_ParamLimits

0xa019,	// (0x000524d8) hwr_training_navi_pane_g3

0xa029,	// (0x000524e8) hwr_training_navi_pane_g4_ParamLimits

0xa029,	// (0x000524e8) hwr_training_navi_pane_g4

0x0004,

0xf8d1,	// (0x00057d90) hwr_training_navi_pane_g_ParamLimits

0xf8d1,	// (0x00057d90) hwr_training_navi_pane_g

0xa043,	// (0x00052502) hwr_training_navi_pane_t1

0xa051,	// (0x00052510) list_single_hwr_training_instruct_pane_ParamLimits

0xa051,	// (0x00052510) list_single_hwr_training_instruct_pane

0x182d,	// (0x00049cec) list_single_hwr_training_instruct_pane_t1

0x0eee,	// (0x000493ad) bg_frame_shadow_pane_g1

0x183c,	// (0x00049cfb) bg_frame_shadow_pane_g2

0x1844,	// (0x00049d03) bg_frame_shadow_pane_g3

0x184c,	// (0x00049d0b) bg_frame_shadow_pane_g4

0x1854,	// (0x00049d13) bg_frame_shadow_pane_g5

0x185c,	// (0x00049d1b) bg_frame_shadow_pane_g6

0x1864,	// (0x00049d23) bg_frame_shadow_pane_g7

0x5b1e,	// (0x0004dfdd) bg_frame_shadow_pane_g8

0x0007,

0xf8dc,	// (0x00057d9b) bg_frame_shadow_pane_g

0x4b56,	// (0x0004d015) main_video_tele_dialer_pane

0xa070,	// (0x0005252f) aid_size_cell_video_keypad_ParamLimits

0xa070,	// (0x0005252f) aid_size_cell_video_keypad

0xa080,	// (0x0005253f) grid_video_dialer_keypad_pane_ParamLimits

0xa080,	// (0x0005253f) grid_video_dialer_keypad_pane

0xa0b4,	// (0x00052573) video_down_pane_cp_ParamLimits

0xa0b4,	// (0x00052573) video_down_pane_cp

0xa0de,	// (0x0005259d) cell_video_dialer_keypad_pane_ParamLimits

0xa0de,	// (0x0005259d) cell_video_dialer_keypad_pane

0x186c,	// (0x00049d2b) bg_button_pane_cp08_ParamLimits

0x186c,	// (0x00049d2b) bg_button_pane_cp08

0xa0f5,	// (0x000525b4) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa0f5,	// (0x000525b4) cell_video_dialer_keypad_pane_g1

0x98f5,	// (0x00051db4) mup3_rocker2_pane_ParamLimits

0x98f5,	// (0x00051db4) mup3_rocker2_pane

0x0fae,	// (0x0004946d) mup3_rocker2_pane_g1

0x8853,	// (0x00050d12) main_dialer2_pane

0x4b56,	// (0x0004d015) main_mp4_pane

0xa138,	// (0x000525f7) main_mp4_pane_g1_ParamLimits

0xa138,	// (0x000525f7) main_mp4_pane_g1

0xa146,	// (0x00052605) main_mp4_pane_g2_ParamLimits

0xa146,	// (0x00052605) main_mp4_pane_g2

0xa154,	// (0x00052613) main_mp4_pane_g3_ParamLimits

0xa154,	// (0x00052613) main_mp4_pane_g3

0xa1a7,	// (0x00052666) main_mp4_pane_g4_ParamLimits

0xa1a7,	// (0x00052666) main_mp4_pane_g4

0xa1c1,	// (0x00052680) main_mp4_pane_g5_ParamLimits

0xa1c1,	// (0x00052680) main_mp4_pane_g5

0x0005,

0xf8fc,	// (0x00057dbb) main_mp4_pane_g_ParamLimits

0xf8fc,	// (0x00057dbb) main_mp4_pane_g

0xa1f5,	// (0x000526b4) main_mp4_pane_t1_ParamLimits

0xa1f5,	// (0x000526b4) main_mp4_pane_t1

0xa251,	// (0x00052710) main_mp4_pane_t2_ParamLimits

0xa251,	// (0x00052710) main_mp4_pane_t2

0x1878,	// (0x00049d37) main_mp4_pane_t3_ParamLimits

0x1878,	// (0x00049d37) main_mp4_pane_t3

0xa2a3,	// (0x00052762) main_mp4_pane_t4_ParamLimits

0xa2a3,	// (0x00052762) main_mp4_pane_t4

0x0003,

0xf909,	// (0x00057dc8) main_mp4_pane_t_ParamLimits

0xf909,	// (0x00057dc8) main_mp4_pane_t

0xa2e3,	// (0x000527a2) mp4_progress_pane_ParamLimits

0xa2e3,	// (0x000527a2) mp4_progress_pane

0xa32d,	// (0x000527ec) mp4_rocker_pane_ParamLimits

0xa32d,	// (0x000527ec) mp4_rocker_pane

0x18a0,	// (0x00049d5f) mp4_progress_pane_t1

0x18b9,	// (0x00049d78) mp4_progress_pane_t2

0x0001,

0xf912,	// (0x00057dd1) mp4_progress_pane_t

0x18d2,	// (0x00049d91) mup_progress_pane_cp04

0x21cb,	// (0x0004a68a) mp4_rocker_pane_g1

0xa34f,	// (0x0005280e) aid_cell_size_keypad2_ParamLimits

0xa34f,	// (0x0005280e) aid_cell_size_keypad2

0xa35f,	// (0x0005281e) dialer2_ne_pane_ParamLimits

0xa35f,	// (0x0005281e) dialer2_ne_pane

0xa36b,	// (0x0005282a) grid_dialer2_keypad_pane_ParamLimits

0xa36b,	// (0x0005282a) grid_dialer2_keypad_pane

0x2226,	// (0x0004a6e5) bg_popup_call_pane_cp07_ParamLimits

0x2226,	// (0x0004a6e5) bg_popup_call_pane_cp07

0xa379,	// (0x00052838) dialer2_ne_pane_t1_ParamLimits

0xa379,	// (0x00052838) dialer2_ne_pane_t1

0xa39e,	// (0x0005285d) cell_dialer2_keypad_pane_ParamLimits

0xa39e,	// (0x0005285d) cell_dialer2_keypad_pane

0x18f0,	// (0x00049daf) bg_button_pane_pane_cp04_ParamLimits

0x18f0,	// (0x00049daf) bg_button_pane_pane_cp04

0xa3b5,	// (0x00052874) cell_dialer2_keypad_pane_g1_ParamLimits

0xa3b5,	// (0x00052874) cell_dialer2_keypad_pane_g1

0x6557,	// (0x0004ea16) aid_placing_vt_set_content_ParamLimits

0x6557,	// (0x0004ea16) aid_placing_vt_set_content

0x6571,	// (0x0004ea30) aid_placing_vt_set_title_ParamLimits

0x6571,	// (0x0004ea30) aid_placing_vt_set_title

0x4b56,	// (0x0004d015) main_image3_pane

0xa44f,	// (0x0005290e) area_side_right_pane_cp01_ParamLimits

0xa44f,	// (0x0005290e) area_side_right_pane_cp01

0xa47e,	// (0x0005293d) main_image3_pane_g1_ParamLimits

0xa47e,	// (0x0005293d) main_image3_pane_g1

0xa48c,	// (0x0005294b) main_image3_pane_g2_ParamLimits

0xa48c,	// (0x0005294b) main_image3_pane_g2

0xa4a5,	// (0x00052964) main_image3_pane_g3_ParamLimits

0xa4a5,	// (0x00052964) main_image3_pane_g3

0xa4be,	// (0x0005297d) main_image3_pane_g4_ParamLimits

0xa4be,	// (0x0005297d) main_image3_pane_g4

0x0003,

0xf921,	// (0x00057de0) main_image3_pane_g_ParamLimits

0xf921,	// (0x00057de0) main_image3_pane_g

0xa4d7,	// (0x00052996) main_image3_pane_t1_ParamLimits

0xa4d7,	// (0x00052996) main_image3_pane_t1

0xa4fc,	// (0x000529bb) main_image3_pane_t2_ParamLimits

0xa4fc,	// (0x000529bb) main_image3_pane_t2

0xa51b,	// (0x000529da) main_image3_pane_t3_ParamLimits

0xa51b,	// (0x000529da) main_image3_pane_t3

0x0003,

0xf92a,	// (0x00057de9) main_image3_pane_t_ParamLimits

0xf92a,	// (0x00057de9) main_image3_pane_t

0x19ed,	// (0x00049eac) grid_sctrl_middle_pane_cp01_ParamLimits

0x19ed,	// (0x00049eac) grid_sctrl_middle_pane_cp01

0xa57c,	// (0x00052a3b) cell_sctrl_middle_pane_cp01_ParamLimits

0xa57c,	// (0x00052a3b) cell_sctrl_middle_pane_cp01

0xa58d,	// (0x00052a4c) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa58d,	// (0x00052a4c) cell_sctrl_middle_pane_cp01_g1

0x4b56,	// (0x0004d015) main_call4_pane

0xa59a,	// (0x00052a59) aid_size_button_call4_ParamLimits

0xa59a,	// (0x00052a59) aid_size_button_call4

0xa5cc,	// (0x00052a8b) call4_windows_pane_ParamLimits

0xa5cc,	// (0x00052a8b) call4_windows_pane

0xa5e8,	// (0x00052aa7) grid_call4_button_pane_ParamLimits

0xa5e8,	// (0x00052aa7) grid_call4_button_pane

0x18fc,	// (0x00049dbb) call4_windows_conf_pane

0x1917,	// (0x00049dd6) popup_call4_audio_first_window_ParamLimits

0x1917,	// (0x00049dd6) popup_call4_audio_first_window

0x1965,	// (0x00049e24) popup_call4_audio_second_window_ParamLimits

0x1965,	// (0x00049e24) popup_call4_audio_second_window

0x197b,	// (0x00049e3a) popup_call4_audio_wait_window_ParamLimits

0x197b,	// (0x00049e3a) popup_call4_audio_wait_window

0xa60c,	// (0x00052acb) cell_call4_button_pane_ParamLimits

0xa60c,	// (0x00052acb) cell_call4_button_pane

0xa62f,	// (0x00052aee) bg_button_pane_cp09_ParamLimits

0xa62f,	// (0x00052aee) bg_button_pane_cp09

0xa63b,	// (0x00052afa) cell_call4_button_pane_g1_ParamLimits

0xa63b,	// (0x00052afa) cell_call4_button_pane_g1

0xa648,	// (0x00052b07) cell_call4_button_pane_t1_ParamLimits

0xa648,	// (0x00052b07) cell_call4_button_pane_t1

0x19c3,	// (0x00049e82) popup_call4_audio_conf_window_ParamLimits

0x19c3,	// (0x00049e82) popup_call4_audio_conf_window

0x992a,	// (0x00051de9) mup3_progress_pane_t1_ParamLimits

0x9941,	// (0x00051e00) mup3_progress_pane_t2_ParamLimits

0x12cd,	// (0x0004978c) mup3_progress_pane_t3_ParamLimits

0xf803,	// (0x00057cc2) mup3_progress_pane_t_ParamLimits

0x12e4,	// (0x000497a3) mup_progress_pane_cp03_ParamLimits

0x9e42,	// (0x00052301) mup3_control_keys_pane_g4_copy1

0xa311,	// (0x000527d0) mp4_rocker2_pane_ParamLimits

0xa311,	// (0x000527d0) mp4_rocker2_pane

0x19e5,	// (0x00049ea4) mp4_rocker2_pane_g1

0x19dd,	// (0x00049e9c) mp4_rocker2_pane_g2

0xa65a,	// (0x00052b19) mp4_rocker2_pane_g3

0xa662,	// (0x00052b21) mp4_rocker2_pane_g4

0xa66a,	// (0x00052b29) mp4_rocker2_pane_g5

0x0004,

0xf933,	// (0x00057df2) mp4_rocker2_pane_g

0x4b56,	// (0x0004d015) main_camera4_pane

0x4b56,	// (0x0004d015) main_video4_pane

0xa090,	// (0x0005254f) main_video_tele_dialer_pane_t1_ParamLimits

0xa090,	// (0x0005254f) main_video_tele_dialer_pane_t1

0xa0a2,	// (0x00052561) main_video_tele_dialer_pane_t2_ParamLimits

0xa0a2,	// (0x00052561) main_video_tele_dialer_pane_t2

0x0001,

0xf8ed,	// (0x00057dac) main_video_tele_dialer_pane_t_ParamLimits

0xf8ed,	// (0x00057dac) main_video_tele_dialer_pane_t

0xa68a,	// (0x00052b49) cam4_autofocus_pane_ParamLimits

0xa68a,	// (0x00052b49) cam4_autofocus_pane

0xa696,	// (0x00052b55) cam4_image_uncrop_pane_ParamLimits

0xa696,	// (0x00052b55) cam4_image_uncrop_pane

0xa6af,	// (0x00052b6e) cam4_indicators_pane_ParamLimits

0xa6af,	// (0x00052b6e) cam4_indicators_pane

0xa6cb,	// (0x00052b8a) main_camera4_pane_g1_ParamLimits

0xa6cb,	// (0x00052b8a) main_camera4_pane_g1

0xa6d7,	// (0x00052b96) main_camera4_pane_g2_ParamLimits

0xa6d7,	// (0x00052b96) main_camera4_pane_g2

0xa6e3,	// (0x00052ba2) main_camera4_pane_g3_ParamLimits

0xa6e3,	// (0x00052ba2) main_camera4_pane_g3

0xa6ef,	// (0x00052bae) main_camera4_pane_g4_ParamLimits

0xa6ef,	// (0x00052bae) main_camera4_pane_g4

0xa6fb,	// (0x00052bba) main_camera4_pane_g5_ParamLimits

0xa6fb,	// (0x00052bba) main_camera4_pane_g5

0x0005,

0xf93e,	// (0x00057dfd) main_camera4_pane_g_ParamLimits

0xf93e,	// (0x00057dfd) main_camera4_pane_g

0xa715,	// (0x00052bd4) main_camera4_pane_t1_ParamLimits

0xa715,	// (0x00052bd4) main_camera4_pane_t1

0xa739,	// (0x00052bf8) bg_tb_trans_pane_cp06

0xa74f,	// (0x00052c0e) cam4_indicators_pane_g1

0xa75c,	// (0x00052c1b) cam4_indicators_pane_g2

0x0002,

0xf950,	// (0x00057e0f) cam4_indicators_pane_g

0xa77c,	// (0x00052c3b) cam4_indicators_pane_t1

0xa7a6,	// (0x00052c65) main_video4_pane_g1_ParamLimits

0xa7a6,	// (0x00052c65) main_video4_pane_g1

0xa7b2,	// (0x00052c71) main_video4_pane_g2_ParamLimits

0xa7b2,	// (0x00052c71) main_video4_pane_g2

0xa7be,	// (0x00052c7d) main_video4_pane_g3_ParamLimits

0xa7be,	// (0x00052c7d) main_video4_pane_g3

0xa7ca,	// (0x00052c89) main_video4_pane_g4_ParamLimits

0xa7ca,	// (0x00052c89) main_video4_pane_g4

0x0004,

0xf957,	// (0x00057e16) main_video4_pane_g_ParamLimits

0xf957,	// (0x00057e16) main_video4_pane_g

0xa7ec,	// (0x00052cab) vid4_indicators_pane_ParamLimits

0xa7ec,	// (0x00052cab) vid4_indicators_pane

0xa80a,	// (0x00052cc9) video4_image_uncrop_cif_pane_ParamLimits

0xa80a,	// (0x00052cc9) video4_image_uncrop_cif_pane

0xa819,	// (0x00052cd8) video4_image_uncrop_nhd_pane_ParamLimits

0xa819,	// (0x00052cd8) video4_image_uncrop_nhd_pane

0xa696,	// (0x00052b55) video4_image_uncrop_vga_pane_ParamLimits

0xa696,	// (0x00052b55) video4_image_uncrop_vga_pane

0xa828,	// (0x00052ce7) bg_tb_trans_pane_cp07

0xa74f,	// (0x00052c0e) vid4_indicators_pane_g1

0xa840,	// (0x00052cff) vid4_indicators_pane_g2

0xa84d,	// (0x00052d0c) vid4_indicators_pane_g3

0x0004,

0xf962,	// (0x00057e21) vid4_indicators_pane_g

0xa87a,	// (0x00052d39) vid4_indicators_pane_t1

0xa894,	// (0x00052d53) cam4_autofocus_pane_g1

0xa89c,	// (0x00052d5b) cam4_autofocus_pane_g2

0xa8a4,	// (0x00052d63) cam4_autofocus_pane_g3

0x0002,

0xf96d,	// (0x00057e2c) cam4_autofocus_pane_g

0xa8ac,	// (0x00052d6b) cam4_autofocus_pane_g3_copy1

0xa0c2,	// (0x00052581) video_down_pane_cp_t1

0xa0d0,	// (0x0005258f) video_down_pane_cp_t2

0x0001,

0xf8f2,	// (0x00057db1) video_down_pane_cp_t

0x19ed,	// (0x00049eac) popup_vitu2_window_ParamLimits

0x19ed,	// (0x00049eac) popup_vitu2_window

0xa8b4,	// (0x00052d73) aid_size_cell2_itu2_ParamLimits

0xa8b4,	// (0x00052d73) aid_size_cell2_itu2

0xa8d6,	// (0x00052d95) aid_size_cell_itu2_ParamLimits

0xa8d6,	// (0x00052d95) aid_size_cell_itu2

0xa91a,	// (0x00052dd9) bg_popup_window_pane_cp09_ParamLimits

0xa91a,	// (0x00052dd9) bg_popup_window_pane_cp09

0xa928,	// (0x00052de7) field_vitu2_entry_pane_ParamLimits

0xa928,	// (0x00052de7) field_vitu2_entry_pane

0xa948,	// (0x00052e07) grid_vitu2_function_pane_ParamLimits

0xa948,	// (0x00052e07) grid_vitu2_function_pane

0xa98c,	// (0x00052e4b) grid_vitu2_itu_pane_ParamLimits

0xa98c,	// (0x00052e4b) grid_vitu2_itu_pane

0xaa00,	// (0x00052ebf) cell_vitu2_itu_pane_ParamLimits

0xaa00,	// (0x00052ebf) cell_vitu2_itu_pane

0xaa17,	// (0x00052ed6) cell_vitu2_function_pane_ParamLimits

0xaa17,	// (0x00052ed6) cell_vitu2_function_pane

0x19fb,	// (0x00049eba) bg_popup_call_pane_cp08_ParamLimits

0x19fb,	// (0x00049eba) bg_popup_call_pane_cp08

0x1a14,	// (0x00049ed3) field_vitu2_entry_pane_g1

0x1a20,	// (0x00049edf) field_vitu2_entry_pane_g2

0x0002,

0xf974,	// (0x00057e33) field_vitu2_entry_pane_g

0x1a3a,	// (0x00049ef9) field_vitu2_entry_pane_t1_ParamLimits

0x1a3a,	// (0x00049ef9) field_vitu2_entry_pane_t1

0x1a57,	// (0x00049f16) field_vitu2_entry_pane_t2_ParamLimits

0x1a57,	// (0x00049f16) field_vitu2_entry_pane_t2

0x0001,

0xf97b,	// (0x00057e3a) field_vitu2_entry_pane_t_ParamLimits

0xf97b,	// (0x00057e3a) field_vitu2_entry_pane_t

0xaa5b,	// (0x00052f1a) bg_button_pane_cp010_ParamLimits

0xaa5b,	// (0x00052f1a) bg_button_pane_cp010

0xaa69,	// (0x00052f28) cell_vitu2_itu_pane_g1

0xaa87,	// (0x00052f46) cell_vitu2_itu_pane_t1_ParamLimits

0xaa87,	// (0x00052f46) cell_vitu2_itu_pane_t1

0x4a83,	// (0x0004cf42) cell_vitu2_itu_pane_t2_ParamLimits

0x4a83,	// (0x0004cf42) cell_vitu2_itu_pane_t2

0x0002,

0xf985,	// (0x00057e44) cell_vitu2_itu_pane_t_ParamLimits

0xf985,	// (0x00057e44) cell_vitu2_itu_pane_t

0xa828,	// (0x00052ce7) bg_button_pane_cp011

0xaad9,	// (0x00052f98) cell_vitu2_function_pane_g1

0x4b56,	// (0x0004d015) main_myfav_hc_pane

0xa55d,	// (0x00052a1c) popup_image3_note_pane_ParamLimits

0xa55d,	// (0x00052a1c) popup_image3_note_pane

0xa56b,	// (0x00052a2a) popup_image3_tool_bar_pane_ParamLimits

0xa56b,	// (0x00052a2a) popup_image3_tool_bar_pane

0x4af1,	// (0x0004cfb0) cell_vitu2_itu_pane_t3_ParamLimits

0x4af1,	// (0x0004cfb0) cell_vitu2_itu_pane_t3

0x4b56,	// (0x0004d015) bg_popup_trans_pane

0x1a7c,	// (0x00049f3b) grid_image3_tool_bar_pane

0x1a86,	// (0x00049f45) bg_popup_trans_pane_g1

0x6b15,	// (0x0004efd4) bg_popup_trans_pane_g2

0x1a8e,	// (0x00049f4d) bg_popup_trans_pane_g3

0x1a96,	// (0x00049f55) bg_popup_trans_pane_g4

0x1a9e,	// (0x00049f5d) bg_popup_trans_pane_g5

0x1aa6,	// (0x00049f65) bg_popup_trans_pane_g6

0x1aae,	// (0x00049f6d) bg_popup_trans_pane_g7

0x1ab6,	// (0x00049f75) bg_popup_trans_pane_g8

0x6af5,	// (0x0004efb4) bg_popup_trans_pane_g9

0x0008,

0xf98c,	// (0x00057e4b) bg_popup_trans_pane_g

0x1abe,	// (0x00049f7d) cell_image3_tool_bar_pane_ParamLimits

0x1abe,	// (0x00049f7d) cell_image3_tool_bar_pane

0x0fae,	// (0x0004946d) cell_image3_tool_bar_pane_g1

0x4b56,	// (0x0004d015) bg_popup_trans_pane_cp1

0x1ad4,	// (0x00049f93) popup_image3_note_pane_t1

0x1ae2,	// (0x00049fa1) popup_image3_note_pane_t2

0x1af0,	// (0x00049faf) popup_image3_note_pane_t3

0x0002,

0xf99f,	// (0x00057e5e) popup_image3_note_pane_t

0x1b00,	// (0x00049fbf) popup_image3_note_pane_t3_copy1

0xaaed,	// (0x00052fac) bg_myfav_hc_instruction_pane_ParamLimits

0xaaed,	// (0x00052fac) bg_myfav_hc_instruction_pane

0xab05,	// (0x00052fc4) cell_myfav_contact_pane_ParamLimits

0xab05,	// (0x00052fc4) cell_myfav_contact_pane

0xab1f,	// (0x00052fde) cell_myfav_contact_pane_cp1_ParamLimits

0xab1f,	// (0x00052fde) cell_myfav_contact_pane_cp1

0xab37,	// (0x00052ff6) cell_myfav_contact_pane_cp2_ParamLimits

0xab37,	// (0x00052ff6) cell_myfav_contact_pane_cp2

0xab4f,	// (0x0005300e) cell_myfav_contact_pane_cp3_ParamLimits

0xab4f,	// (0x0005300e) cell_myfav_contact_pane_cp3

0xab66,	// (0x00053025) cell_myfav_contact_pane_cp4_ParamLimits

0xab66,	// (0x00053025) cell_myfav_contact_pane_cp4

0xab7c,	// (0x0005303b) cell_myfav_contact_pane_cp5_ParamLimits

0xab7c,	// (0x0005303b) cell_myfav_contact_pane_cp5

0xab90,	// (0x0005304f) cell_myfav_contact_pane_cp6_ParamLimits

0xab90,	// (0x0005304f) cell_myfav_contact_pane_cp6

0xaba4,	// (0x00053063) cell_myfav_contact_pane_cp7_ParamLimits

0xaba4,	// (0x00053063) cell_myfav_contact_pane_cp7

0x1b0e,	// (0x00049fcd) listscroll_gen_pane_cp05

0xabbc,	// (0x0005307b) main_myfav_hc_pane_g1_ParamLimits

0xabbc,	// (0x0005307b) main_myfav_hc_pane_g1

0xabd6,	// (0x00053095) main_myfav_hc_pane_g2_ParamLimits

0xabd6,	// (0x00053095) main_myfav_hc_pane_g2

0x0002,

0xf9a6,	// (0x00057e65) main_myfav_hc_pane_g_ParamLimits

0xf9a6,	// (0x00057e65) main_myfav_hc_pane_g

0xac08,	// (0x000530c7) main_myfav_hc_pane_t1_ParamLimits

0xac08,	// (0x000530c7) main_myfav_hc_pane_t1

0x1b17,	// (0x00049fd6) main_myfav_hc_pane_t2_ParamLimits

0x1b17,	// (0x00049fd6) main_myfav_hc_pane_t2

0x1b29,	// (0x00049fe8) main_myfav_hc_pane_t3_ParamLimits

0x1b29,	// (0x00049fe8) main_myfav_hc_pane_t3

0xac1f,	// (0x000530de) main_myfav_hc_pane_t4_ParamLimits

0xac1f,	// (0x000530de) main_myfav_hc_pane_t4

0x0004,

0xf9ad,	// (0x00057e6c) main_myfav_hc_pane_t_ParamLimits

0xf9ad,	// (0x00057e6c) main_myfav_hc_pane_t

0x0fae,	// (0x0004946d) bg_myfav_hc_instruction_pane_g1

0x1b3b,	// (0x00049ffa) cell_myfav_contact_pane_g1_ParamLimits

0x1b3b,	// (0x00049ffa) cell_myfav_contact_pane_g1

0x1b3b,	// (0x00049ffa) cell_myfav_contact_pane_g2_ParamLimits

0x1b3b,	// (0x00049ffa) cell_myfav_contact_pane_g2

0x1b47,	// (0x0004a006) cell_myfav_contact_pane_g3_ParamLimits

0x1b47,	// (0x0004a006) cell_myfav_contact_pane_g3

0x12b7,	// (0x00049776) cell_myfav_contact_pane_g4_ParamLimits

0x12b7,	// (0x00049776) cell_myfav_contact_pane_g4

0x1b54,	// (0x0004a013) cell_myfav_contact_pane_g5_ParamLimits

0x1b54,	// (0x0004a013) cell_myfav_contact_pane_g5

0x0004,

0xf9b8,	// (0x00057e77) cell_myfav_contact_pane_g_ParamLimits

0xf9b8,	// (0x00057e77) cell_myfav_contact_pane_g

0xabf0,	// (0x000530af) main_myfav_hc_pane_g3_ParamLimits

0xabf0,	// (0x000530af) main_myfav_hc_pane_g3

0x4d20,	// (0x0004d1df) popup_adpt_find_window

0xac49,	// (0x00053108) afind_page_pane_ParamLimits

0xac49,	// (0x00053108) afind_page_pane

0xac56,	// (0x00053115) aid_size_cell_afind_ParamLimits

0xac56,	// (0x00053115) aid_size_cell_afind

0xac70,	// (0x0005312f) bg_popup_sub_pane_cp09_ParamLimits

0xac70,	// (0x0005312f) bg_popup_sub_pane_cp09

0xac7d,	// (0x0005313c) find_pane_cp01_ParamLimits

0xac7d,	// (0x0005313c) find_pane_cp01

0x1b60,	// (0x0004a01f) grid_afind_control_pane_ParamLimits

0x1b60,	// (0x0004a01f) grid_afind_control_pane

0xac8a,	// (0x00053149) grid_afind_pane_ParamLimits

0xac8a,	// (0x00053149) grid_afind_pane

0xaca6,	// (0x00053165) cell_afind_pane_ParamLimits

0xaca6,	// (0x00053165) cell_afind_pane

0x0fae,	// (0x0004946d) afind_page_pane_g1

0xacf2,	// (0x000531b1) afind_page_pane_g2

0xacfb,	// (0x000531ba) afind_page_pane_g3

0x0002,

0xf9c3,	// (0x00057e82) afind_page_pane_g

0xad04,	// (0x000531c3) afind_page_pane_t1

0x1b74,	// (0x0004a033) cell_afind_grid_control_pane_ParamLimits

0x1b74,	// (0x0004a033) cell_afind_grid_control_pane

0x18f0,	// (0x00049daf) bg_button_pane_cp69_ParamLimits

0x18f0,	// (0x00049daf) bg_button_pane_cp69

0xad24,	// (0x000531e3) cell_afind_pane_g1_ParamLimits

0xad24,	// (0x000531e3) cell_afind_pane_g1

0xad31,	// (0x000531f0) cell_afind_pane_t1_ParamLimits

0xad31,	// (0x000531f0) cell_afind_pane_t1

0x6491,	// (0x0004e950) bg_button_pane_cp72

0x1b83,	// (0x0004a042) cell_afind_grid_control_pane_g1

0x83cb,	// (0x0005088a) aid_image_placing_area_ParamLimits

0x83cb,	// (0x0005088a) aid_image_placing_area

0x15bc,	// (0x00049a7b) field_vitu_entry_pane_g1_ParamLimits

0x15bc,	// (0x00049a7b) field_vitu_entry_pane_g1

0x15c8,	// (0x00049a87) field_vitu_entry_pane_g2_ParamLimits

0x15c8,	// (0x00049a87) field_vitu_entry_pane_g2

0x0001,

0xf87d,	// (0x00057d3c) field_vitu_entry_pane_g_ParamLimits

0xf87d,	// (0x00057d3c) field_vitu_entry_pane_g

0x9ecc,	// (0x0005238b) cell_vitu_itu_pane_g1_ParamLimits

0x9f0e,	// (0x000523cd) cell_vitu_itu_pane_t3_ParamLimits

0x9f0e,	// (0x000523cd) cell_vitu_itu_pane_t3

0x18a0,	// (0x00049d5f) mp4_progress_pane_t1_ParamLimits

0x18b9,	// (0x00049d78) mp4_progress_pane_t2_ParamLimits

0xf912,	// (0x00057dd1) mp4_progress_pane_t_ParamLimits

0x18d2,	// (0x00049d91) mup_progress_pane_cp04_ParamLimits

0xac33,	// (0x000530f2) main_myfav_hc_pane_t5_ParamLimits

0xac33,	// (0x000530f2) main_myfav_hc_pane_t5

0x4ba8,	// (0x0004d067) aid_zoom_text_primary

0x4d20,	// (0x0004d1df) popup_adpt_find_window_ParamLimits

0xefc2,	// (0x00057481) main_cam_set_pane

0xa6bd,	// (0x00052b7c) cam4_zoom_pane_ParamLimits

0xa6bd,	// (0x00052b7c) cam4_zoom_pane

0xad43,	// (0x00053202) main_cam_set_pane_g1_ParamLimits

0xad43,	// (0x00053202) main_cam_set_pane_g1

0xad51,	// (0x00053210) main_cam_set_pane_g2_ParamLimits

0xad51,	// (0x00053210) main_cam_set_pane_g2

0x0001,

0xf9ca,	// (0x00057e89) main_cam_set_pane_g_ParamLimits

0xf9ca,	// (0x00057e89) main_cam_set_pane_g

0xad5d,	// (0x0005321c) main_cam_set_pane_t1_ParamLimits

0xad5d,	// (0x0005321c) main_cam_set_pane_t1

0xad79,	// (0x00053238) main_cset_listscroll_pane_ParamLimits

0xad79,	// (0x00053238) main_cset_listscroll_pane

0xada8,	// (0x00053267) main_cset_slider_pane_ParamLimits

0xada8,	// (0x00053267) main_cset_slider_pane

0x1b94,	// (0x0004a053) main_cset_list_pane_ParamLimits

0x1b94,	// (0x0004a053) main_cset_list_pane

0x1ba4,	// (0x0004a063) scroll_pane_cp028

0xadc9,	// (0x00053288) aid_area_touch_slider

0xade5,	// (0x000532a4) cset_slider_pane

0xae0f,	// (0x000532ce) main_cset_slider_pane_g1

0xae24,	// (0x000532e3) main_cset_slider_pane_g2

0x0011,

0xf9cf,	// (0x00057e8e) main_cset_slider_pane_g

0x1bdd,	// (0x0004a09c) main_cset_slider_pane_t1

0xaee0,	// (0x0005339f) main_cset_slider_pane_t2

0xaefa,	// (0x000533b9) main_cset_slider_pane_t3

0xaf14,	// (0x000533d3) main_cset_slider_pane_t4

0xaf2e,	// (0x000533ed) main_cset_slider_pane_t5

0xaf4a,	// (0x00053409) main_cset_slider_pane_t6

0xaf5f,	// (0x0005341e) main_cset_slider_pane_t7

0x000e,

0xf9f4,	// (0x00057eb3) main_cset_slider_pane_t

0xb063,	// (0x00053522) cset_list_set_pane_ParamLimits

0xb063,	// (0x00053522) cset_list_set_pane

0xb074,	// (0x00053533) aid_position_infowindow_above

0xb07c,	// (0x0005353b) aid_position_infowindow_below

0x1c7d,	// (0x0004a13c) cset_list_set_pane_g1_ParamLimits

0x1c7d,	// (0x0004a13c) cset_list_set_pane_g1

0x2430,	// (0x0004a8ef) cset_list_set_pane_g3_ParamLimits

0x2430,	// (0x0004a8ef) cset_list_set_pane_g3

0x0001,

0xfa13,	// (0x00057ed2) cset_list_set_pane_g_ParamLimits

0xfa13,	// (0x00057ed2) cset_list_set_pane_g

0x1c89,	// (0x0004a148) cset_list_set_pane_t1_ParamLimits

0x1c89,	// (0x0004a148) cset_list_set_pane_t1

0xefc2,	// (0x00057481) list_highlight_pane_cp021_ParamLimits

0xefc2,	// (0x00057481) list_highlight_pane_cp021

0xdce1,	// (0x000561a0) cset_slider_pane_g1

0xdcf3,	// (0x000561b2) cset_slider_pane_g2

0xdcea,	// (0x000561a9) cset_slider_pane_g3

0x0002,

0xfa18,	// (0x00057ed7) cset_slider_pane_g

0xb084,	// (0x00053543) aid_area_touch_cam4_zoom

0xb08c,	// (0x0005354b) cam4_zoom_cont_pane

0xb094,	// (0x00053553) cam4_zoom_pane_g1

0xb09c,	// (0x0005355b) cam4_zoom_pane_g2

0xb0a4,	// (0x00053563) cam4_zoom_pane_g3

0x0002,

0xfa1f,	// (0x00057ede) cam4_zoom_pane_g

0xb0ac,	// (0x0005356b) cam4_zoom_cont_pane_g1

0xb0b5,	// (0x00053574) cam4_zoom_cont_pane_g2

0xb0be,	// (0x0005357d) cam4_zoom_cont_pane_g3

0x0002,

0xfa26,	// (0x00057ee5) cam4_zoom_cont_pane_g

0xa5b4,	// (0x00052a73) call4_image_pane_ParamLimits

0xa5b4,	// (0x00052a73) call4_image_pane

0x18fc,	// (0x00049dbb) call4_windows_conf_pane_ParamLimits

0x1943,	// (0x00049e02) popup_call4_audio_in_window_ParamLimits

0x1943,	// (0x00049e02) popup_call4_audio_in_window

0x4b56,	// (0x0004d015) bg_popup_call2_act_pane_cp02

0x19bb,	// (0x00049e7a) call4_list_conf_pane

0x0fae,	// (0x0004946d) call4_image_pane_g1

0x0fae,	// (0x0004946d) call4_image_pane_g2

0x0001,

0xf743,	// (0x00057c02) call4_image_pane_g

0x1cb9,	// (0x0004a178) list_single_graphic_popup_conf4_pane_ParamLimits

0x1cb9,	// (0x0004a178) list_single_graphic_popup_conf4_pane

0x4b56,	// (0x0004d015) list_highlight_pane_cp022

0x1cce,	// (0x0004a18d) list_single_graphic_popup_conf4_pane_g1

0xd9db,	// (0x00055e9a) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa2d,	// (0x00057eec) list_single_graphic_popup_conf4_pane_g

0x1cd6,	// (0x0004a195) list_single_graphic_popup_conf4_pane_t1

0x668a,	// (0x0004eb49) popup_vtel_slider_window_ParamLimits

0x668a,	// (0x0004eb49) popup_vtel_slider_window

0x18de,	// (0x00049d9d) dialer2_ne_pane_t2_ParamLimits

0x18de,	// (0x00049d9d) dialer2_ne_pane_t2

0x0001,

0xf917,	// (0x00057dd6) dialer2_ne_pane_t_ParamLimits

0xf917,	// (0x00057dd6) dialer2_ne_pane_t

0xefc2,	// (0x00057481) bg_popup_sub_pane_cp010_ParamLimits

0xefc2,	// (0x00057481) bg_popup_sub_pane_cp010

0xb0c7,	// (0x00053586) popup_vtel_slider_window_g1_ParamLimits

0xb0c7,	// (0x00053586) popup_vtel_slider_window_g1

0xb0d3,	// (0x00053592) popup_vtel_slider_window_g2_ParamLimits

0xb0d3,	// (0x00053592) popup_vtel_slider_window_g2

0x0003,

0xfa32,	// (0x00057ef1) popup_vtel_slider_window_g_ParamLimits

0xfa32,	// (0x00057ef1) popup_vtel_slider_window_g

0xb11b,	// (0x000535da) vtel_slider_pane_ParamLimits

0xb11b,	// (0x000535da) vtel_slider_pane

0xb12a,	// (0x000535e9) vtel_slider_pane_g1_ParamLimits

0xb12a,	// (0x000535e9) vtel_slider_pane_g1

0xb137,	// (0x000535f6) vtel_slider_pane_g2_ParamLimits

0xb137,	// (0x000535f6) vtel_slider_pane_g2

0xb144,	// (0x00053603) vtel_slider_pane_g3_ParamLimits

0xb144,	// (0x00053603) vtel_slider_pane_g3

0xb12a,	// (0x000535e9) vtel_slider_pane_g4_ParamLimits

0xb12a,	// (0x000535e9) vtel_slider_pane_g4

0xb151,	// (0x00053610) vtel_slider_pane_g5_ParamLimits

0xb151,	// (0x00053610) vtel_slider_pane_g5

0x0004,

0xfa3b,	// (0x00057efa) vtel_slider_pane_g_ParamLimits

0xfa3b,	// (0x00057efa) vtel_slider_pane_g

0x4b56,	// (0x0004d015) main_gallery2_pane

0xa8fc,	// (0x00052dbb) aid_size_row_itut2_dropdow_list_ParamLimits

0xa8fc,	// (0x00052dbb) aid_size_row_itut2_dropdow_list

0xa96a,	// (0x00052e29) grid_vitu2_function_top_pane_ParamLimits

0xa96a,	// (0x00052e29) grid_vitu2_function_top_pane

0xa9bc,	// (0x00052e7b) popup_vitu2_dropdown_list_window_ParamLimits

0xa9bc,	// (0x00052e7b) popup_vitu2_dropdown_list_window

0xa9dc,	// (0x00052e9b) popup_vitu2_match_list_window

0xb15e,	// (0x0005361d) cell_vitu2_function_top_pane_ParamLimits

0xb15e,	// (0x0005361d) cell_vitu2_function_top_pane

0xb17e,	// (0x0005363d) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb17e,	// (0x0005363d) cell_vitu2_function_top_pane_cp01

0xb19c,	// (0x0005365b) cell_vitu2_function_top_wide_pane_ParamLimits

0xb19c,	// (0x0005365b) cell_vitu2_function_top_wide_pane

0xa828,	// (0x00052ce7) bg_button_pane_cp012

0xb1ba,	// (0x00053679) cell_vitu2_function_top_pane_g1

0xb1c9,	// (0x00053688) bg_button_pane_cp013_ParamLimits

0xb1c9,	// (0x00053688) bg_button_pane_cp013

0xb1e5,	// (0x000536a4) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb1e5,	// (0x000536a4) cell_vitu2_function_top_wide_pane_g1

0xb1fd,	// (0x000536bc) bg_popup_sub_pane_cp20

0xb20b,	// (0x000536ca) list_vitu2_match_list_pane

0x1a86,	// (0x00049f45) bg_popup_sub_pane_cp20_g1

0x1a8e,	// (0x00049f4d) bg_popup_sub_pane_cp20_g2

0x6b15,	// (0x0004efd4) bg_popup_sub_pane_cp20_g3

0x1a96,	// (0x00049f55) bg_popup_sub_pane_cp20_g4

0x6af5,	// (0x0004efb4) bg_popup_sub_pane_cp20_g5

0x1cf2,	// (0x0004a1b1) bg_popup_sub_pane_cp20_g6

0x1aa6,	// (0x00049f65) bg_popup_sub_pane_cp20_g7

0x1aae,	// (0x00049f6d) bg_popup_sub_pane_cp20_g8

0x1ab6,	// (0x00049f75) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa46,	// (0x00057f05) bg_popup_sub_pane_cp20_g

0xb223,	// (0x000536e2) list_vitu2_match_list_item_pane_ParamLimits

0xb223,	// (0x000536e2) list_vitu2_match_list_item_pane

0xb235,	// (0x000536f4) list_vitu2_match_list_item_pane_t1

0x5891,	// (0x0004dd50) bg_popup_sub_pane_cp21

0xb26f,	// (0x0005372e) grid_vitu2_dropdown_list_pane

0xb277,	// (0x00053736) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb277,	// (0x00053736) cell_vitu2_dropdown_list_char_pane

0xb29c,	// (0x0005375b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb29c,	// (0x0005375b) cell_vitu2_dropdown_list_ctrl_pane

0x1d24,	// (0x0004a1e3) cell_vitu2_dropdown_list_char_pane_g1

0x1d1b,	// (0x0004a1da) cell_vitu2_dropdown_list_char_pane_g2

0x1d12,	// (0x0004a1d1) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa63,	// (0x00057f22) cell_vitu2_dropdown_list_char_pane_g

0xb2ca,	// (0x00053789) cell_vitu2_dropdown_list_char_pane_t1

0xb2d8,	// (0x00053797) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb2d8,	// (0x00053797) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb2e8,	// (0x000537a7) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb2e8,	// (0x000537a7) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb2f9,	// (0x000537b8) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb2f9,	// (0x000537b8) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb309,	// (0x000537c8) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb309,	// (0x000537c8) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa739,	// (0x00052bf8) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa739,	// (0x00052bf8) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa6a,	// (0x00057f29) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa6a,	// (0x00057f29) cell_vitu2_dropdown_list_ctrl_pane_g

0xb322,	// (0x000537e1) aid_size_cell_gallery2_ParamLimits

0xb322,	// (0x000537e1) aid_size_cell_gallery2

0xb330,	// (0x000537ef) grid_gallery2_pane_ParamLimits

0xb330,	// (0x000537ef) grid_gallery2_pane

0xb33f,	// (0x000537fe) scroll_pane_cp029_ParamLimits

0xb33f,	// (0x000537fe) scroll_pane_cp029

0xb34b,	// (0x0005380a) cell_gallery2_pane_ParamLimits

0xb34b,	// (0x0005380a) cell_gallery2_pane

0x1d2d,	// (0x0004a1ec) cell_gallery2_pane_g2

0xb375,	// (0x00053834) cell_gallery2_pane_g3

0x1d37,	// (0x0004a1f6) cell_gallery2_pane_g4

0x1d3f,	// (0x0004a1fe) cell_gallery2_pane_g5

0xdba9,	// (0x00056068) grid_highlight_pane_cp10

0xa9dc,	// (0x00052e9b) popup_vitu2_match_list_window_ParamLimits

0xa9f0,	// (0x00052eaf) popup_vitu2_query_window_ParamLimits

0xa9f0,	// (0x00052eaf) popup_vitu2_query_window

0x5891,	// (0x0004dd50) bg_vitu2_candi_button_pane

0x1d24,	// (0x0004a1e3) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x1d1b,	// (0x0004a1da) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x1d12,	// (0x0004a1d1) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb37d,	// (0x0005383c) bg_button_pane_cp015

0xb387,	// (0x00053846) bg_button_pane_cp016

0xb391,	// (0x00053850) bg_button_pane_cp017

0xefc2,	// (0x00057481) bg_popup_sub_pane_cp22

0x1d47,	// (0x0004a206) popup_vitu2_query_window_g1

0xb3b9,	// (0x00053878) popup_vitu2_query_window_g2

0x0001,

0xfa75,	// (0x00057f34) popup_vitu2_query_window_g

0xb3c7,	// (0x00053886) popup_vitu2_query_window_t1_ParamLimits

0xb3c7,	// (0x00053886) popup_vitu2_query_window_t1

0xb3ef,	// (0x000538ae) popup_vitu2_query_window_t2_ParamLimits

0xb3ef,	// (0x000538ae) popup_vitu2_query_window_t2

0xb401,	// (0x000538c0) popup_vitu2_query_window_t3_ParamLimits

0xb401,	// (0x000538c0) popup_vitu2_query_window_t3

0xb429,	// (0x000538e8) popup_vitu2_query_window_t4_ParamLimits

0xb429,	// (0x000538e8) popup_vitu2_query_window_t4

0xb43f,	// (0x000538fe) popup_vitu2_query_window_t5_ParamLimits

0xb43f,	// (0x000538fe) popup_vitu2_query_window_t5

0x0004,

0xfa7a,	// (0x00057f39) popup_vitu2_query_window_t_ParamLimits

0xfa7a,	// (0x00057f39) popup_vitu2_query_window_t

0x1b8c,	// (0x0004a04b) main_cset_text_pane

0xadc9,	// (0x00053288) aid_area_touch_slider_ParamLimits

0xade5,	// (0x000532a4) cset_slider_pane_ParamLimits

0xae0f,	// (0x000532ce) main_cset_slider_pane_g1_ParamLimits

0xae24,	// (0x000532e3) main_cset_slider_pane_g2_ParamLimits

0x1bad,	// (0x0004a06c) main_cset_slider_pane_g3_ParamLimits

0x1bad,	// (0x0004a06c) main_cset_slider_pane_g3

0xae39,	// (0x000532f8) main_cset_slider_pane_g4_ParamLimits

0xae39,	// (0x000532f8) main_cset_slider_pane_g4

0xae48,	// (0x00053307) main_cset_slider_pane_g5_ParamLimits

0xae48,	// (0x00053307) main_cset_slider_pane_g5

0xae54,	// (0x00053313) main_cset_slider_pane_g6_ParamLimits

0xae54,	// (0x00053313) main_cset_slider_pane_g6

0xf9cf,	// (0x00057e8e) main_cset_slider_pane_g_ParamLimits

0x1bdd,	// (0x0004a09c) main_cset_slider_pane_t1_ParamLimits

0xaee0,	// (0x0005339f) main_cset_slider_pane_t2_ParamLimits

0xaefa,	// (0x000533b9) main_cset_slider_pane_t3_ParamLimits

0xaf14,	// (0x000533d3) main_cset_slider_pane_t4_ParamLimits

0xaf2e,	// (0x000533ed) main_cset_slider_pane_t5_ParamLimits

0xaf4a,	// (0x00053409) main_cset_slider_pane_t6_ParamLimits

0xaf5f,	// (0x0005341e) main_cset_slider_pane_t7_ParamLimits

0xaf89,	// (0x00053448) main_cset_slider_pane_t8_ParamLimits

0xaf89,	// (0x00053448) main_cset_slider_pane_t8

0xafb1,	// (0x00053470) main_cset_slider_pane_t9_ParamLimits

0xafb1,	// (0x00053470) main_cset_slider_pane_t9

0xafd9,	// (0x00053498) main_cset_slider_pane_t10_ParamLimits

0xafd9,	// (0x00053498) main_cset_slider_pane_t10

0xb001,	// (0x000534c0) main_cset_slider_pane_t11_ParamLimits

0xb001,	// (0x000534c0) main_cset_slider_pane_t11

0xb029,	// (0x000534e8) main_cset_slider_pane_t12_ParamLimits

0xb029,	// (0x000534e8) main_cset_slider_pane_t12

0xb046,	// (0x00053505) main_cset_slider_pane_t13_ParamLimits

0xb046,	// (0x00053505) main_cset_slider_pane_t13

0xf9f4,	// (0x00057eb3) main_cset_slider_pane_t_ParamLimits

0x4b56,	// (0x0004d015) bg_popup_sub_pane_cp011

0x1d53,	// (0x0004a212) main_cset_text_pane_g1

0x1d5b,	// (0x0004a21a) main_cset_text_pane_t1

0x1d69,	// (0x0004a228) main_cset_text_pane_t2

0x1d77,	// (0x0004a236) main_cset_text_pane_t3

0x1d85,	// (0x0004a244) main_cset_text_pane_t4

0x1d93,	// (0x0004a252) main_cset_text_pane_t5

0x1da1,	// (0x0004a260) main_cset_text_pane_t6

0x1daf,	// (0x0004a26e) main_cset_text_pane_t7

0x0006,

0xfa85,	// (0x00057f44) main_cset_text_pane_t

0x4b56,	// (0x0004d015) main_cam4_burst_pane

0x4b56,	// (0x0004d015) main_cam5_pane

0xad12,	// (0x000531d1) bg_button_pane_cp019

0xad1b,	// (0x000531da) bg_button_pane_cp020

0x1bb9,	// (0x0004a078) main_cset_slider_pane_g7_ParamLimits

0x1bb9,	// (0x0004a078) main_cset_slider_pane_g7

0x1bc5,	// (0x0004a084) main_cset_slider_pane_g8_ParamLimits

0x1bc5,	// (0x0004a084) main_cset_slider_pane_g8

0xae68,	// (0x00053327) main_cset_slider_pane_g9_ParamLimits

0xae68,	// (0x00053327) main_cset_slider_pane_g9

0xae74,	// (0x00053333) main_cset_slider_pane_g10_ParamLimits

0xae74,	// (0x00053333) main_cset_slider_pane_g10

0xae80,	// (0x0005333f) main_cset_slider_pane_g11_ParamLimits

0xae80,	// (0x0005333f) main_cset_slider_pane_g11

0xae8c,	// (0x0005334b) main_cset_slider_pane_g12_ParamLimits

0xae8c,	// (0x0005334b) main_cset_slider_pane_g12

0xae98,	// (0x00053357) main_cset_slider_pane_g13_ParamLimits

0xae98,	// (0x00053357) main_cset_slider_pane_g13

0xaea4,	// (0x00053363) main_cset_slider_pane_g14_ParamLimits

0xaea4,	// (0x00053363) main_cset_slider_pane_g14

0xaeb0,	// (0x0005336f) main_cset_slider_pane_g15_ParamLimits

0xaeb0,	// (0x0005336f) main_cset_slider_pane_g15

0x1c0b,	// (0x0004a0ca) main_cset_slider_pane_t14_ParamLimits

0x1c0b,	// (0x0004a0ca) main_cset_slider_pane_t14

0x1c44,	// (0x0004a103) main_cset_slider_pane_t15_ParamLimits

0x1c44,	// (0x0004a103) main_cset_slider_pane_t15

0xb455,	// (0x00053914) aid_cam4_burst_size_cell_ParamLimits

0xb455,	// (0x00053914) aid_cam4_burst_size_cell

0xb471,	// (0x00053930) grid_cam4_burst_pane_ParamLimits

0xb471,	// (0x00053930) grid_cam4_burst_pane

0xb4a3,	// (0x00053962) linegrid_cam4_burst_pane_ParamLimits

0xb4a3,	// (0x00053962) linegrid_cam4_burst_pane

0xb4c3,	// (0x00053982) scroll_pane_cp30_ParamLimits

0xb4c3,	// (0x00053982) scroll_pane_cp30

0xb4cf,	// (0x0005398e) cell_cam4_burst_pane_ParamLimits

0xb4cf,	// (0x0005398e) cell_cam4_burst_pane

0x1dbd,	// (0x0004a27c) linegrid_cam4_burst_pane_g1_ParamLimits

0x1dbd,	// (0x0004a27c) linegrid_cam4_burst_pane_g1

0xb50f,	// (0x000539ce) linegrid_cam4_burst_pane_g2_ParamLimits

0xb50f,	// (0x000539ce) linegrid_cam4_burst_pane_g2

0x1dca,	// (0x0004a289) linegrid_cam4_burst_pane_g3_ParamLimits

0x1dca,	// (0x0004a289) linegrid_cam4_burst_pane_g3

0x0002,

0xfa94,	// (0x00057f53) linegrid_cam4_burst_pane_g_ParamLimits

0xfa94,	// (0x00057f53) linegrid_cam4_burst_pane_g

0xb520,	// (0x000539df) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb520,	// (0x000539df) linegrid_cam4_burst_pane_g3_copy1

0x1dd7,	// (0x0004a296) linegrid_cam4_burst_pane_g4_ParamLimits

0x1dd7,	// (0x0004a296) linegrid_cam4_burst_pane_g4

0xb53a,	// (0x000539f9) linegrid_cam4_burst_pane_g5_ParamLimits

0xb53a,	// (0x000539f9) linegrid_cam4_burst_pane_g5

0xb54b,	// (0x00053a0a) linegrid_cam4_burst_pane_g6_ParamLimits

0xb54b,	// (0x00053a0a) linegrid_cam4_burst_pane_g6

0x1de4,	// (0x0004a2a3) linegrid_cam4_burst_pane_g7_ParamLimits

0x1de4,	// (0x0004a2a3) linegrid_cam4_burst_pane_g7

0xb562,	// (0x00053a21) cell_cam4_burst_pane_g1

0x1dfd,	// (0x0004a2bc) main_cam5_pane_t1_ParamLimits

0x1dfd,	// (0x0004a2bc) main_cam5_pane_t1

0x1e0f,	// (0x0004a2ce) main_cam5_pane_t2_ParamLimits

0x1e0f,	// (0x0004a2ce) main_cam5_pane_t2

0x1e21,	// (0x0004a2e0) main_cam5_pane_t3_ParamLimits

0x1e21,	// (0x0004a2e0) main_cam5_pane_t3

0x1e33,	// (0x0004a2f2) main_cam5_pane_t4_ParamLimits

0x1e33,	// (0x0004a2f2) main_cam5_pane_t4

0x1e4b,	// (0x0004a30a) main_cam5_pane_t5_ParamLimits

0x1e4b,	// (0x0004a30a) main_cam5_pane_t5

0x1e5f,	// (0x0004a31e) main_cam5_pane_t6_ParamLimits

0x1e5f,	// (0x0004a31e) main_cam5_pane_t6

0x1e73,	// (0x0004a332) main_cam5_pane_t7_ParamLimits

0x1e73,	// (0x0004a332) main_cam5_pane_t7

0x1e85,	// (0x0004a344) main_cam5_pane_t8_ParamLimits

0x1e85,	// (0x0004a344) main_cam5_pane_t8

0x1ea3,	// (0x0004a362) main_cam5_pane_t9_ParamLimits

0x1ea3,	// (0x0004a362) main_cam5_pane_t9

0x1eb5,	// (0x0004a374) main_cam5_pane_t10_ParamLimits

0x1eb5,	// (0x0004a374) main_cam5_pane_t10

0x1ec7,	// (0x0004a386) main_cam5_pane_t11_ParamLimits

0x1ec7,	// (0x0004a386) main_cam5_pane_t11

0x1edb,	// (0x0004a39a) main_cam5_pane_t12_ParamLimits

0x1edb,	// (0x0004a39a) main_cam5_pane_t12

0x1ef2,	// (0x0004a3b1) main_cam5_pane_t13_ParamLimits

0x1ef2,	// (0x0004a3b1) main_cam5_pane_t13

0x000c,

0xfaa0,	// (0x00057f5f) main_cam5_pane_t_ParamLimits

0xfaa0,	// (0x00057f5f) main_cam5_pane_t

0x4dd8,	// (0x0004d297) popup_scut_keymap_window_ParamLimits

0x4dd8,	// (0x0004d297) popup_scut_keymap_window

0xb575,	// (0x00053a34) aid_size_cell_brow_shortcut

0xdba9,	// (0x00056068) bg_popup_window_pane_cp010

0xb581,	// (0x00053a40) grid_scut_pane

0xb58d,	// (0x00053a4c) cell_scut_pane_ParamLimits

0xb58d,	// (0x00053a4c) cell_scut_pane

0xb5a8,	// (0x00053a67) cell_scut_pane_g1

0x1f15,	// (0x0004a3d4) cell_scut_pane_t1

0x1f24,	// (0x0004a3e3) cell_scut_pane_t2

0xb5b1,	// (0x00053a70) cell_scut_pane_t3

0x0002,

0xfabb,	// (0x00057f7a) cell_scut_pane_t

0x9556,	// (0x00051a15) main_mup3_pane_g8_ParamLimits

0x9556,	// (0x00051a15) main_mup3_pane_g8

0xa90a,	// (0x00052dc9) area_vitu2_query_pane_ParamLimits

0xa90a,	// (0x00052dc9) area_vitu2_query_pane

0xb39b,	// (0x0005385a) input_focus_pane_cp08

0x1f33,	// (0x0004a3f2) area_vitu2_query_pane_g1

0xb5bf,	// (0x00053a7e) area_vitu2_query_pane_g2

0x0001,

0xfac2,	// (0x00057f81) area_vitu2_query_pane_g

0xb5d0,	// (0x00053a8f) area_vitu2_query_pane_t1_ParamLimits

0xb5d0,	// (0x00053a8f) area_vitu2_query_pane_t1

0xb5e4,	// (0x00053aa3) area_vitu2_query_pane_t2_ParamLimits

0xb5e4,	// (0x00053aa3) area_vitu2_query_pane_t2

0xb5f8,	// (0x00053ab7) area_vitu2_query_pane_t3_ParamLimits

0xb5f8,	// (0x00053ab7) area_vitu2_query_pane_t3

0x1f3f,	// (0x0004a3fe) area_vitu2_query_pane_t4_ParamLimits

0x1f3f,	// (0x0004a3fe) area_vitu2_query_pane_t4

0x1f67,	// (0x0004a426) area_vitu2_query_pane_t5_ParamLimits

0x1f67,	// (0x0004a426) area_vitu2_query_pane_t5

0x1f8f,	// (0x0004a44e) area_vitu2_query_pane_t6_ParamLimits

0x1f8f,	// (0x0004a44e) area_vitu2_query_pane_t6

0x0006,

0xfac7,	// (0x00057f86) area_vitu2_query_pane_t_ParamLimits

0xfac7,	// (0x00057f86) area_vitu2_query_pane_t

0xb620,	// (0x00053adf) bg_button_pane_cp018

0xb62e,	// (0x00053aed) bg_button_pane_cp021

0xb63a,	// (0x00053af9) bg_button_pane_cp022

0xb64b,	// (0x00053b0a) input_focus_pane_cp09

0x79ad,	// (0x0004fe6c) aid_size_touch_mv_arrow_left

0x79d8,	// (0x0004fe97) aid_size_touch_mv_arrow_right

0xaec8,	// (0x00053387) main_cset_slider_pane_g16_ParamLimits

0xaec8,	// (0x00053387) main_cset_slider_pane_g16

0xaed4,	// (0x00053393) main_cset_slider_pane_g17_ParamLimits

0xaed4,	// (0x00053393) main_cset_slider_pane_g17

0xb562,	// (0x00053a21) cell_cam4_burst_pane_g1_ParamLimits

0x4b56,	// (0x0004d015) compa_mode_pane

0xb0df,	// (0x0005359e) popup_vtel_slider_window_g3_ParamLimits

0xb0df,	// (0x0005359e) popup_vtel_slider_window_g3

0xb0f3,	// (0x000535b2) popup_vtel_slider_window_g4_ParamLimits

0xb0f3,	// (0x000535b2) popup_vtel_slider_window_g4

0xb107,	// (0x000535c6) popup_vtel_slider_window_t1_ParamLimits

0xb107,	// (0x000535c6) popup_vtel_slider_window_t1

0x4b56,	// (0x0004d015) main_cl_pane

0xefee,	// (0x000574ad) popup_imed_adjust2_window_ParamLimits

0xefb4,	// (0x00057473) bg_tb_trans_pane_cp05_ParamLimits

0x14f1,	// (0x000499b0) popup_imed_adjust2_window_g1_ParamLimits

0x1500,	// (0x000499bf) popup_imed_adjust2_window_g2_ParamLimits

0x1500,	// (0x000499bf) popup_imed_adjust2_window_g2

0x150c,	// (0x000499cb) popup_imed_adjust2_window_g3_ParamLimits

0x150c,	// (0x000499cb) popup_imed_adjust2_window_g3

0x0002,

0xf841,	// (0x00057d00) popup_imed_adjust2_window_g_ParamLimits

0xf841,	// (0x00057d00) popup_imed_adjust2_window_g

0x1518,	// (0x000499d7) popup_imed_adjust2_window_t1_ParamLimits

0x1530,	// (0x000499ef) slider_imed_adjust_pane_ParamLimits

0x1544,	// (0x00049a03) slider_imed_adjust_pane_g1_ParamLimits

0x1554,	// (0x00049a13) slider_imed_adjust_pane_g2_ParamLimits

0x1564,	// (0x00049a23) slider_imed_adjust_pane_g3_ParamLimits

0x1575,	// (0x00049a34) slider_imed_adjust_pane_g4_ParamLimits

0xf848,	// (0x00057d07) slider_imed_adjust_pane_g_ParamLimits

0xa672,	// (0x00052b31) aid_touch_area_cam4_ParamLimits

0xa672,	// (0x00052b31) aid_touch_area_cam4

0xa682,	// (0x00052b41) battery_pane_cp01

0xa709,	// (0x00052bc8) main_camera4_pane_g6_ParamLimits

0xa709,	// (0x00052bc8) main_camera4_pane_g6

0xa727,	// (0x00052be6) main_camera4_pane_t2_ParamLimits

0xa727,	// (0x00052be6) main_camera4_pane_t2

0x0001,

0xf94b,	// (0x00057e0a) main_camera4_pane_t_ParamLimits

0xf94b,	// (0x00057e0a) main_camera4_pane_t

0xa796,	// (0x00052c55) aid_touch_area_vid4_ParamLimits

0xa796,	// (0x00052c55) aid_touch_area_vid4

0xa7d6,	// (0x00052c95) main_video4_pane_g5_ParamLimits

0xa7d6,	// (0x00052c95) main_video4_pane_g5

0xa7fa,	// (0x00052cb9) vid4_progress_pane_ParamLimits

0xa7fa,	// (0x00052cb9) vid4_progress_pane

0x1bd1,	// (0x0004a090) main_cset_slider_pane_g18_ParamLimits

0x1bd1,	// (0x0004a090) main_cset_slider_pane_g18

0x1df1,	// (0x0004a2b0) cell_cam4_burst_pane_g2_ParamLimits

0x1df1,	// (0x0004a2b0) cell_cam4_burst_pane_g2

0x0001,

0xfa9b,	// (0x00057f5a) cell_cam4_burst_pane_g_ParamLimits

0xfa9b,	// (0x00057f5a) cell_cam4_burst_pane_g

0xb65c,	// (0x00053b1b) bg_cl_pane_ParamLimits

0xb65c,	// (0x00053b1b) bg_cl_pane

0xb668,	// (0x00053b27) cl_header_pane_ParamLimits

0xb668,	// (0x00053b27) cl_header_pane

0xb674,	// (0x00053b33) cl_listscroll_pane_ParamLimits

0xb674,	// (0x00053b33) cl_listscroll_pane

0x1fdb,	// (0x0004a49a) bg_cl_pane_g1

0x1fe3,	// (0x0004a4a2) bg_cl_pane_g2

0x1feb,	// (0x0004a4aa) bg_cl_pane_g3

0x1ff3,	// (0x0004a4b2) bg_cl_pane_g4

0x1ffb,	// (0x0004a4ba) bg_cl_pane_g5

0x2003,	// (0x0004a4c2) bg_cl_pane_g6

0x200b,	// (0x0004a4ca) bg_cl_pane_g7

0x2013,	// (0x0004a4d2) bg_cl_pane_g8

0x201b,	// (0x0004a4da) bg_cl_pane_g9

0x0008,

0xfad6,	// (0x00057f95) bg_cl_pane_g

0xb680,	// (0x00053b3f) aid_height_cl_leading_ParamLimits

0xb680,	// (0x00053b3f) aid_height_cl_leading

0xb68c,	// (0x00053b4b) aid_height_cl_text_ParamLimits

0xb68c,	// (0x00053b4b) aid_height_cl_text

0x19ed,	// (0x00049eac) bg_cl_header_pane_ParamLimits

0x19ed,	// (0x00049eac) bg_cl_header_pane

0xb6a4,	// (0x00053b63) cl_header_pane_g1_ParamLimits

0xb6a4,	// (0x00053b63) cl_header_pane_g1

0xb6b1,	// (0x00053b70) cl_header_pane_t1_ParamLimits

0xb6b1,	// (0x00053b70) cl_header_pane_t1

0x2023,	// (0x0004a4e2) cl_list_pane

0x1ba4,	// (0x0004a063) hc_scroll_pane_cp01

0x6af5,	// (0x0004efb4) bg_cl_header_pane_g1

0x1a86,	// (0x00049f45) bg_cl_header_pane_g2

0x6b15,	// (0x0004efd4) bg_cl_header_pane_g3

0x1a96,	// (0x00049f55) bg_cl_header_pane_g4

0x1a8e,	// (0x00049f4d) bg_cl_header_pane_g5

0x1cf2,	// (0x0004a1b1) bg_cl_header_pane_g6

0x1aae,	// (0x00049f6d) bg_cl_header_pane_g7

0x1ab6,	// (0x00049f75) bg_cl_header_pane_g8

0x1aa6,	// (0x00049f65) bg_cl_header_pane_g9

0x0008,

0xfae9,	// (0x00057fa8) bg_cl_header_pane_g

0xb6c3,	// (0x00053b82) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb6c3,	// (0x00053b82) hc_cl_list_double_graphic_heading_pane

0x3b7d,	// (0x0004c03c) hc_cl_list_single_graphic_pane_ParamLimits

0x3b7d,	// (0x0004c03c) hc_cl_list_single_graphic_pane

0xb6d3,	// (0x00053b92) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb6d3,	// (0x00053b92) hc_cl_list_single_graphic_pane_g1

0xb6df,	// (0x00053b9e) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb6df,	// (0x00053b9e) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfafc,	// (0x00057fbb) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfafc,	// (0x00057fbb) hc_cl_list_single_graphic_pane_g

0xb6f3,	// (0x00053bb2) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb6f3,	// (0x00053bb2) hc_cl_list_single_graphic_pane_t1

0xb6d3,	// (0x00053b92) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb6d3,	// (0x00053b92) hc_cl_list_double_graphic_heading_pane_g1

0xb708,	// (0x00053bc7) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb708,	// (0x00053bc7) hc_cl_list_double_graphic_heading_pane_g2

0xb71c,	// (0x00053bdb) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb71c,	// (0x00053bdb) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb01,	// (0x00057fc0) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb01,	// (0x00057fc0) hc_cl_list_double_graphic_heading_pane_g

0xb730,	// (0x00053bef) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb730,	// (0x00053bef) hc_cl_list_double_graphic_heading_pane_t1

0xb745,	// (0x00053c04) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb745,	// (0x00053c04) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb08,	// (0x00057fc7) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb08,	// (0x00057fc7) hc_cl_list_double_graphic_heading_pane_t

0xb76c,	// (0x00053c2b) vid4_progress_pane_g1

0xb778,	// (0x00053c37) vid4_progress_pane_g2

0xb784,	// (0x00053c43) vid4_progress_pane_g3

0xb793,	// (0x00053c52) vid4_progress_pane_g4

0x0004,

0xfb0d,	// (0x00057fcc) vid4_progress_pane_g

0xb7b1,	// (0x00053c70) vid4_progress_pane_t1

0xb7c7,	// (0x00053c86) vid4_progress_pane_t2

0x0002,

0xfb18,	// (0x00057fd7) vid4_progress_pane_t

0xb7f2,	// (0x00053cb1) wait_bar_pane_cp07

0x0d9b,	// (0x0004925a) blid_firmament_pane_ParamLimits

0x0dde,	// (0x0004929d) popup_blid_sat_info2_window_g1

0x0e02,	// (0x000492c1) popup_blid_sat_info2_window_t3

0x0e10,	// (0x000492cf) popup_blid_sat_info2_window_t4

0x0e1e,	// (0x000492dd) popup_blid_sat_info2_window_t5

0x0e2c,	// (0x000492eb) popup_blid_sat_info2_window_t6

0x0e3c,	// (0x000492fb) popup_blid_sat_info2_window_t7

0x0e4a,	// (0x00049309) popup_blid_sat_info2_window_t8

0x0e58,	// (0x00049317) popup_blid_sat_info2_window_t9

0x0e66,	// (0x00049325) popup_blid_sat_info2_window_t10

0x0f2e,	// (0x000493ed) aid_firma_cardinal_ParamLimits

0x0f42,	// (0x00049401) blid_firmament_pane_t1_ParamLimits

0x0f59,	// (0x00049418) blid_firmament_pane_t2_ParamLimits

0x0f70,	// (0x0004942f) blid_firmament_pane_t3_ParamLimits

0x0f87,	// (0x00049446) blid_firmament_pane_t4_ParamLimits

0xf73a,	// (0x00057bf9) blid_firmament_pane_t_ParamLimits

0x0f9e,	// (0x0004945d) blid_sat_info_pane_ParamLimits

0xefc2,	// (0x00057481) main_cam_set_pane_ParamLimits

0x9cea,	// (0x000521a9) aid_size_cell_colour_35_ParamLimits

0x9d04,	// (0x000521c3) aid_size_cell_colour_112_ParamLimits

0x9d1b,	// (0x000521da) aid_size_cell_effect_ParamLimits

0xefc2,	// (0x00057481) bg_tb_trans_pane_cp02_ParamLimits

0xf10b,	// (0x000575ca) heading_imed_pane_ParamLimits

0x9d35,	// (0x000521f4) listscroll_imed_pane_ParamLimits

0xe5e2,	// (0x00056aa1) popup_call2_audio_first_window_g5_ParamLimits

0xe5e2,	// (0x00056aa1) popup_call2_audio_first_window_g5

0xa41d,	// (0x000528dc) aid_size_touch_image3_arrow_left_ParamLimits

0xa41d,	// (0x000528dc) aid_size_touch_image3_arrow_left

0xa433,	// (0x000528f2) aid_size_touch_image3_arrow_right_ParamLimits

0xa433,	// (0x000528f2) aid_size_touch_image3_arrow_right

0xb7dd,	// (0x00053c9c) vid4_progress_pane_t3

0x9fd5,	// (0x00052494) main_hwr_training_symbol_option_pane_ParamLimits

0x9fd5,	// (0x00052494) main_hwr_training_symbol_option_pane

0x17e0,	// (0x00049c9f) popup_hwr_training_preview_window_ParamLimits

0x17e0,	// (0x00049c9f) popup_hwr_training_preview_window

0xa036,	// (0x000524f5) hwr_training_navi_pane_g5_ParamLimits

0xa036,	// (0x000524f5) hwr_training_navi_pane_g5

0x1a74,	// (0x00049f33) popup_char_count_window

0xb1fd,	// (0x000536bc) bg_popup_sub_pane_cp20_ParamLimits

0xb20b,	// (0x000536ca) list_vitu2_match_list_pane_ParamLimits

0xb217,	// (0x000536d6) vitu2_page_scroll_pane_ParamLimits

0xb217,	// (0x000536d6) vitu2_page_scroll_pane

0x2086,	// (0x0004a545) list_single_hwr_training_symbol_option_pane_ParamLimits

0x2086,	// (0x0004a545) list_single_hwr_training_symbol_option_pane

0x2099,	// (0x0004a558) list_single_hwr_training_symbol_option_pane_g1

0x20a1,	// (0x0004a560) list_single_hwr_training_symbol_option_pane_t1

0x20af,	// (0x0004a56e) bg_button_pane_cp023

0x20b8,	// (0x0004a577) bg_button_pane_cp024

0xb804,	// (0x00053cc3) vitu2_page_scroll_pane_g1

0xb80c,	// (0x00053ccb) vitu2_page_scroll_pane_g2

0x0001,

0xfb1f,	// (0x00057fde) vitu2_page_scroll_pane_g

0xb816,	// (0x00053cd5) vitu2_page_scroll_pane_t1

0x0cb7,	// (0x00049176) popup_char_count_window_g1

0x20eb,	// (0x0004a5aa) popup_char_count_window_g2

0x20f4,	// (0x0004a5b3) popup_char_count_window_g3

0x0002,

0xfb24,	// (0x00057fe3) popup_char_count_window_g

0x20fd,	// (0x0004a5bc) popup_char_count_window_t1

0x4b56,	// (0x0004d015) main_vded2_pane

0x14dd,	// (0x0004999c) aid_size_cell_imed_line

0x14e7,	// (0x000499a6) grid_imed_line_width_pane

0xa85e,	// (0x00052d1d) vid4_indicators_pane_g4

0x210b,	// (0x0004a5ca) cell_imed_line_width_pane_ParamLimits

0x210b,	// (0x0004a5ca) cell_imed_line_width_pane

0x2121,	// (0x0004a5e0) cell_imed_line_width_pane_g1

0x212a,	// (0x0004a5e9) cell_imed_line_width_pane_g2

0x0001,

0xfb2b,	// (0x00057fea) cell_imed_line_width_pane_g

0xb825,	// (0x00053ce4) main_vded2_pane_g1_ParamLimits

0xb825,	// (0x00053ce4) main_vded2_pane_g1

0xb834,	// (0x00053cf3) main_vded2_pane_g2_ParamLimits

0xb834,	// (0x00053cf3) main_vded2_pane_g2

0x0001,

0xfb30,	// (0x00057fef) main_vded2_pane_g_ParamLimits

0xfb30,	// (0x00057fef) main_vded2_pane_g

0xb842,	// (0x00053d01) vded2_slider_pane_ParamLimits

0xb842,	// (0x00053d01) vded2_slider_pane

0xb84f,	// (0x00053d0e) aid_size_touch_vded2_end

0xb859,	// (0x00053d18) aid_size_touch_vded2_playhead

0x2132,	// (0x0004a5f1) aid_size_touch_vded2_start

0x213a,	// (0x0004a5f9) vded2_slider_bg_pane

0x2143,	// (0x0004a602) vded2_slider_pane_g1

0x214c,	// (0x0004a60b) vded2_slider_pane_g2

0xb861,	// (0x00053d20) vded2_slider_pane_g3

0x0002,

0xfb35,	// (0x00057ff4) vded2_slider_pane_g

0x2154,	// (0x0004a613) vded2_slider_bg_pane_g1

0x215d,	// (0x0004a61c) vded2_slider_bg_pane_g2

0x2166,	// (0x0004a625) vded2_slider_bg_pane_g3

0x0002,

0xf80a,	// (0x00057cc9) vded2_slider_bg_pane_g

0x812b,	// (0x000505ea) aid_postcard_touch_down_pane_ParamLimits

0x812b,	// (0x000505ea) aid_postcard_touch_down_pane

0x813b,	// (0x000505fa) aid_postcard_touch_up_pane_ParamLimits

0x813b,	// (0x000505fa) aid_postcard_touch_up_pane

0x4b56,	// (0x0004d015) main_blid2_pane

0xefd0,	// (0x0005748f) popup_blid2_search_window

0x4b56,	// (0x0004d015) blid2_gps_pane

0x4b56,	// (0x0004d015) blid2_navig_pane

0x4b56,	// (0x0004d015) blid2_search_pane

0x4b56,	// (0x0004d015) blid2_tripm_pane

0xb86a,	// (0x00053d29) blid2_search_pane_g1_ParamLimits

0xb86a,	// (0x00053d29) blid2_search_pane_g1

0xb87a,	// (0x00053d39) blid2_search_pane_t1_ParamLimits

0xb87a,	// (0x00053d39) blid2_search_pane_t1

0xb88c,	// (0x00053d4b) aid_size_cell_blid2_gps_ParamLimits

0xb88c,	// (0x00053d4b) aid_size_cell_blid2_gps

0xb89c,	// (0x00053d5b) blid2_gps_pane_g1_ParamLimits

0xb89c,	// (0x00053d5b) blid2_gps_pane_g1

0xb8a8,	// (0x00053d67) grid_blid2_satellite_pane_ParamLimits

0xb8a8,	// (0x00053d67) grid_blid2_satellite_pane

0xb8b6,	// (0x00053d75) blid2_navig_pane_g1_ParamLimits

0xb8b6,	// (0x00053d75) blid2_navig_pane_g1

0xb8c2,	// (0x00053d81) blid2_navig_pane_t1_ParamLimits

0xb8c2,	// (0x00053d81) blid2_navig_pane_t1

0xb8d4,	// (0x00053d93) blid2_navig_pane_t2_ParamLimits

0xb8d4,	// (0x00053d93) blid2_navig_pane_t2

0x0001,

0xfb3c,	// (0x00057ffb) blid2_navig_pane_t_ParamLimits

0xfb3c,	// (0x00057ffb) blid2_navig_pane_t

0xb8e6,	// (0x00053da5) blid2_navig_ring_pane_ParamLimits

0xb8e6,	// (0x00053da5) blid2_navig_ring_pane

0xb8f6,	// (0x00053db5) blid2_speed_pane_ParamLimits

0xb8f6,	// (0x00053db5) blid2_speed_pane

0xb902,	// (0x00053dc1) blid2_tripm_pane_g1_ParamLimits

0xb902,	// (0x00053dc1) blid2_tripm_pane_g1

0xb912,	// (0x00053dd1) blid2_tripm_pane_g2_ParamLimits

0xb912,	// (0x00053dd1) blid2_tripm_pane_g2

0xb91e,	// (0x00053ddd) blid2_tripm_pane_g3_ParamLimits

0xb91e,	// (0x00053ddd) blid2_tripm_pane_g3

0xb92a,	// (0x00053de9) blid2_tripm_pane_g4_ParamLimits

0xb92a,	// (0x00053de9) blid2_tripm_pane_g4

0xb936,	// (0x00053df5) blid2_tripm_pane_g5_ParamLimits

0xb936,	// (0x00053df5) blid2_tripm_pane_g5

0x0005,

0xfb41,	// (0x00058000) blid2_tripm_pane_g_ParamLimits

0xfb41,	// (0x00058000) blid2_tripm_pane_g

0xb952,	// (0x00053e11) blid2_tripm_pane_t1_ParamLimits

0xb952,	// (0x00053e11) blid2_tripm_pane_t1

0xb966,	// (0x00053e25) blid2_tripm_pane_t2_ParamLimits

0xb966,	// (0x00053e25) blid2_tripm_pane_t2

0xb978,	// (0x00053e37) blid2_tripm_pane_t3_ParamLimits

0xb978,	// (0x00053e37) blid2_tripm_pane_t3

0x0003,

0xfb4e,	// (0x0005800d) blid2_tripm_pane_t_ParamLimits

0xfb4e,	// (0x0005800d) blid2_tripm_pane_t

0xb9aa,	// (0x00053e69) cell_blid2_satellite_pane_ParamLimits

0xb9aa,	// (0x00053e69) cell_blid2_satellite_pane

0xb9c8,	// (0x00053e87) cell_blid2_satellite_pane_g1

0x216f,	// (0x0004a62e) cell_blid2_satellite_pane_t1

0x0fae,	// (0x0004946d) blid2_speed_pane_g1

0x217d,	// (0x0004a63c) blid2_speed_pane_t1

0x218b,	// (0x0004a64a) blid2_speed_pane_t2

0x0001,

0xfb57,	// (0x00058016) blid2_speed_pane_t

0x0fae,	// (0x0004946d) blid2_navig_ring_pane_g1

0xb9d1,	// (0x00053e90) blid2_navig_ring_pane_g2

0xb9d9,	// (0x00053e98) blid2_navig_ring_pane_g3

0xb9e1,	// (0x00053ea0) blid2_navig_ring_pane_g4

0xb9e9,	// (0x00053ea8) blid2_navig_ring_pane_g5

0x0004,

0xfb5c,	// (0x0005801b) blid2_navig_ring_pane_g

0x4b56,	// (0x0004d015) bg_popup_window_pane_cp011

0x2199,	// (0x0004a658) popup_blid2_search_window_g1

0x21a1,	// (0x0004a660) popup_blid2_search_window_t1

0x21af,	// (0x0004a66e) popup_blid2_search_window_t2

0x0001,

0xfb67,	// (0x00058026) popup_blid2_search_window_t

0x6991,	// (0x0004ee50) main_browser_pane_g1

0x58b5,	// (0x0004dd74) main_browser_pane_ParamLimits

0xa828,	// (0x00052ce7) bg_button_pane_cp011_ParamLimits

0xaad9,	// (0x00052f98) cell_vitu2_function_pane_g1_ParamLimits

0xefc2,	// (0x00057481) bg_popup_sub_pane_cp22_ParamLimits

0xb39b,	// (0x0005385a) input_focus_pane_cp08_ParamLimits

0xb3a8,	// (0x00053867) popup_vitu2_query_button_pane_ParamLimits

0xb3a8,	// (0x00053867) popup_vitu2_query_button_pane

0xb37d,	// (0x0005383c) popup_vitu2_query_input_button_pane

0x1d47,	// (0x0004a206) popup_vitu2_query_window_g1_ParamLimits

0xb3b9,	// (0x00053878) popup_vitu2_query_window_g2_ParamLimits

0xfa75,	// (0x00057f34) popup_vitu2_query_window_g_ParamLimits

0x4b56,	// (0x0004d015) bg_button_pane_cp026

0xb9f1,	// (0x00053eb0) popup_vitu2_query_input_button_pane_g1

0x4b56,	// (0x0004d015) bg_button_pane_cp025

0x21bd,	// (0x0004a67c) popup_vitu2_query_button_pane_t1

0x92ac,	// (0x0005176b) main_mp3_pane_t6

0x92bc,	// (0x0005177b) popup_slider_window_cp01

0xa747,	// (0x00052c06) cam4_battery_pane

0xa836,	// (0x00052cf5) cam4_battery_pane_cp02

0xb75a,	// (0x00053c19) cam4_battery_pane_cp01

0xb764,	// (0x00053c23) cam4_battery_pane_cp03

0x21cb,	// (0x0004a68a) cam4_battery_pane_g1

0x0fae,	// (0x0004946d) cam4_battery_pane_g2

0x0001,

0xfb6c,	// (0x0005802b) cam4_battery_pane_g

0x0e74,	// (0x00049333) popup_blid_sat_info2_window_t11

0x79ad,	// (0x0004fe6c) aid_size_touch_mv_arrow_left_ParamLimits

0x79d8,	// (0x0004fe97) aid_size_touch_mv_arrow_right_ParamLimits

0xdb09,	// (0x00055fc8) navi_pane_g1_ParamLimits

0x7a01,	// (0x0004fec0) navi_pane_g2_ParamLimits

0x7a2f,	// (0x0004feee) navi_pane_g3_ParamLimits

0xf44c,	// (0x0005790b) navi_pane_g_ParamLimits

0x7a89,	// (0x0004ff48) navi_pane_mv_t1_ParamLimits

0x9d41,	// (0x00052200) grid_imed_effect_pane_ParamLimits

0x6588,	// (0x0004ea47) aid_placing_vt_slider_lsc

0x6590,	// (0x0004ea4f) aid_placing_vt_slider_prt

0xefc2,	// (0x00057481) bg_tb_trans_pane_cp01_ParamLimits

0x10fe,	// (0x000495bd) popup_image_details_window_g1_ParamLimits

0x1111,	// (0x000495d0) popup_image_details_window_g2_ParamLimits

0x1126,	// (0x000495e5) popup_image_details_window_g3_ParamLimits

0x1126,	// (0x000495e5) popup_image_details_window_g3

0xf77f,	// (0x00057c3e) popup_image_details_window_g_ParamLimits

0x113a,	// (0x000495f9) popup_image_details_window_t1_ParamLimits

0x114c,	// (0x0004960b) popup_image_details_window_t2_ParamLimits

0x1165,	// (0x00049624) popup_image_details_window_t3_ParamLimits

0x1179,	// (0x00049638) popup_image_details_window_t4_ParamLimits

0x1194,	// (0x00049653) popup_image_details_window_t5_ParamLimits

0xf786,	// (0x00057c45) popup_image_details_window_t_ParamLimits

0xb698,	// (0x00053b57) cl_header_name_pane_ParamLimits

0xb698,	// (0x00053b57) cl_header_name_pane

0xb9f9,	// (0x00053eb8) cl_header_name_pane_t1_ParamLimits

0xb9f9,	// (0x00053eb8) cl_header_name_pane_t1

0xba10,	// (0x00053ecf) cl_header_name_pane_t2_ParamLimits

0xba10,	// (0x00053ecf) cl_header_name_pane_t2

0xba3a,	// (0x00053ef9) cl_header_name_pane_t3_ParamLimits

0xba3a,	// (0x00053ef9) cl_header_name_pane_t3

0x0002,

0xfb71,	// (0x00058030) cl_header_name_pane_t_ParamLimits

0xfb71,	// (0x00058030) cl_header_name_pane_t

0x7a5a,	// (0x0004ff19) navi_pane_mv_g2_ParamLimits

0x1a14,	// (0x00049ed3) field_vitu2_entry_pane_g1_ParamLimits

0x1a20,	// (0x00049edf) field_vitu2_entry_pane_g2_ParamLimits

0x1a2c,	// (0x00049eeb) field_vitu2_entry_pane_g3_ParamLimits

0x1a2c,	// (0x00049eeb) field_vitu2_entry_pane_g3

0xf974,	// (0x00057e33) field_vitu2_entry_pane_g_ParamLimits

0xaa69,	// (0x00052f28) cell_vitu2_itu_pane_g1_ParamLimits

0xaa79,	// (0x00052f38) cell_vitu2_itu_pane_g2_ParamLimits

0xaa79,	// (0x00052f38) cell_vitu2_itu_pane_g2

0x0001,

0xf980,	// (0x00057e3f) cell_vitu2_itu_pane_g_ParamLimits

0xf980,	// (0x00057e3f) cell_vitu2_itu_pane_g

0xa828,	// (0x00052ce7) bg_vkb2_func_pane_cp05_ParamLimits

0xa828,	// (0x00052ce7) bg_vkb2_func_pane_cp05

0xa828,	// (0x00052ce7) bg_vkb2_func_pane_cp03

0xa828,	// (0x00052ce7) bg_vkb2_func_pane_cp04

0xa828,	// (0x00052ce7) bg_vkb2_func_pane_cp10_ParamLimits

0xa828,	// (0x00052ce7) bg_vkb2_func_pane_cp10

0xb63a,	// (0x00053af9) bg_vkb2_func_pane_cp08

0xb620,	// (0x00053adf) bg_vkb2_func_pane_cp06

0xb62e,	// (0x00053aed) bg_vkb2_func_pane_cp07

0x20c1,	// (0x0004a580) bg_vkb2_func_pane_cp11_ParamLimits

0x20c1,	// (0x0004a580) bg_vkb2_func_pane_cp11

0x20d6,	// (0x0004a595) bg_vkb2_func_pane_cp12_ParamLimits

0x20d6,	// (0x0004a595) bg_vkb2_func_pane_cp12

0x4b56,	// (0x0004d015) bg_vkb2_func_pane_cp09

0x1a86,	// (0x00049f45) bg_vkb2_func_pane_g1

0x6b15,	// (0x0004efd4) bg_vkb2_func_pane_g2

0x1a8e,	// (0x00049f4d) bg_vkb2_func_pane_g3

0x1a96,	// (0x00049f55) bg_vkb2_func_pane_g4

0x1cf2,	// (0x0004a1b1) bg_vkb2_func_pane_g5

0x1aae,	// (0x00049f6d) bg_vkb2_func_pane_g6

0x1ab6,	// (0x00049f75) bg_vkb2_func_pane_g7

0x1aa6,	// (0x00049f65) bg_vkb2_func_pane_g8

0x6af5,	// (0x0004efb4) bg_vkb2_func_pane_g9

0x0008,

0xfb78,	// (0x00058037) bg_vkb2_func_pane_g

0xb944,	// (0x00053e03) blid2_tripm_pane_g6_ParamLimits

0xb944,	// (0x00053e03) blid2_tripm_pane_g6

0x1898,	// (0x00049d57) mp4_progress_pane_g1

0xb99e,	// (0x00053e5d) blid2_tripm_values_pane_ParamLimits

0xb99e,	// (0x00053e5d) blid2_tripm_values_pane

0xba5f,	// (0x00053f1e) blid2_tripm_values_pane_t1

0xba6d,	// (0x00053f2c) blid2_tripm_values_pane_t2

0xba7b,	// (0x00053f3a) blid2_tripm_values_pane_t3

0xba89,	// (0x00053f48) blid2_tripm_values_pane_t4

0xba97,	// (0x00053f56) blid2_tripm_values_pane_t5

0xbaa5,	// (0x00053f64) blid2_tripm_values_pane_t6

0xbab3,	// (0x00053f72) blid2_tripm_values_pane_t7

0xbac1,	// (0x00053f80) blid2_tripm_values_pane_t8

0xbacf,	// (0x00053f8e) blid2_tripm_values_pane_t9

0x0008,

0xfb8b,	// (0x0005804a) blid2_tripm_values_pane_t

0x65b6,	// (0x0004ea75) call_video_pane_t1_ParamLimits

0x65cc,	// (0x0004ea8b) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x00057794) call_video_pane_t_ParamLimits

0x7fec,	// (0x000504ab) msg_header_pane_g1_ParamLimits

0xdd26,	// (0x000561e5) msg_header_pane_g2_ParamLimits

0xdd26,	// (0x000561e5) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x000579ae) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x000579ae) msg_header_pane_g

0x58b5,	// (0x0004dd74) main_clock2_pane_ParamLimits

0x9ac4,	// (0x00051f83) grid_clock2_toolbar_pane_ParamLimits

0x9ac4,	// (0x00051f83) grid_clock2_toolbar_pane

0x9ac4,	// (0x00051f83) listscroll_clock2_pane_ParamLimits

0x9ac4,	// (0x00051f83) listscroll_clock2_pane

0x9b78,	// (0x00052037) main_clock2_pane_t3_ParamLimits

0x9b78,	// (0x00052037) main_clock2_pane_t3

0x9b8a,	// (0x00052049) main_clock2_pane_t4_ParamLimits

0x9b8a,	// (0x00052049) main_clock2_pane_t4

0x21d5,	// (0x0004a694) cell_clock2_toolbar_pane

0x21dd,	// (0x0004a69c) cell_clock2_toolbar_pane_cp01

0x21dd,	// (0x0004a69c) cell_clock2_toolbar_pane_cp02

0x21e5,	// (0x0004a6a4) cell_clock2_toolbar_pane_cp03

0x21ed,	// (0x0004a6ac) list_clock2_pane

0xda6f,	// (0x00055f2e) scroll_pane_cp10

0x21f5,	// (0x0004a6b4) list_single_clock2_pane_ParamLimits

0x21f5,	// (0x0004a6b4) list_single_clock2_pane

0xdba9,	// (0x00056068) list_highlight_pane_cp08

0x2202,	// (0x0004a6c1) list_single_clock2_pane_t1

0x2210,	// (0x0004a6cf) list_single_clock2_pane_t2

0x0001,

0xfb9e,	// (0x0005805d) list_single_clock2_pane_t

0x4b56,	// (0x0004d015) bg_button_pane_cp10

0x221e,	// (0x0004a6dd) cell_clock2_toolbar_pane_g1

0x808d,	// (0x0005054c) aid_main_viewer_pane_g1_ParamLimits

0x808d,	// (0x0005054c) aid_main_viewer_pane_g1

0x8099,	// (0x00050558) aid_main_viewer_pane_g2_ParamLimits

0x8099,	// (0x00050558) aid_main_viewer_pane_g2

0x80a5,	// (0x00050564) aid_main_viewer_pane_g3_ParamLimits

0x80a5,	// (0x00050564) aid_main_viewer_pane_g3

0x80b6,	// (0x00050575) aid_main_viewer_pane_g4_ParamLimits

0x80b6,	// (0x00050575) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x000579bf) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x000579bf) aid_main_viewer_pane_g

0x8846,	// (0x00050d05) main_calc_pane_ParamLimits

0x8853,	// (0x00050d12) main_dialer2_pane_ParamLimits

0x4b56,	// (0x0004d015) main_cam6_pane

0x4b56,	// (0x0004d015) main_vid6_pane

0x9ad0,	// (0x00051f8f) listscroll_gen_pane_cp06_ParamLimits

0x9ad0,	// (0x00051f8f) listscroll_gen_pane_cp06

0x9b9c,	// (0x0005205b) main_clock2_pane_t5_ParamLimits

0x9b9c,	// (0x0005205b) main_clock2_pane_t5

0x9beb,	// (0x000520aa) aid_call2_pane_cp10_ParamLimits

0x9bfd,	// (0x000520bc) aid_call_pane_cp10_ParamLimits

0xdade,	// (0x00055f9d) popup_clock_analogue_window_cp10_g1_ParamLimits

0xdade,	// (0x00055f9d) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9c0f,	// (0x000520ce) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9c0f,	// (0x000520ce) popup_clock_analogue_window_cp10_g4_ParamLimits

0xdade,	// (0x00055f9d) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf836,	// (0x00057cf5) popup_clock_analogue_window_cp10_g_ParamLimits

0x9c21,	// (0x000520e0) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa3ca,	// (0x00052889) cell_dialer2_keypad_pane_g2_ParamLimits

0xa3ca,	// (0x00052889) cell_dialer2_keypad_pane_g2

0x0001,

0xf91c,	// (0x00057ddb) cell_dialer2_keypad_pane_g_ParamLimits

0xf91c,	// (0x00057ddb) cell_dialer2_keypad_pane_g

0xa3e6,	// (0x000528a5) cell_dialer2_keypad_pane_t1

0xadb6,	// (0x00053275) main_cset_text2_pane_ParamLimits

0xadb6,	// (0x00053275) main_cset_text2_pane

0x1f33,	// (0x0004a3f2) area_vitu2_query_pane_g1_ParamLimits

0xb5bf,	// (0x00053a7e) area_vitu2_query_pane_g2_ParamLimits

0xfac2,	// (0x00057f81) area_vitu2_query_pane_g_ParamLimits

0x1fb7,	// (0x0004a476) area_vitu2_query_pane_t7_ParamLimits

0x1fb7,	// (0x0004a476) area_vitu2_query_pane_t7

0xb620,	// (0x00053adf) bg_button_pane_cp018_ParamLimits

0xb62e,	// (0x00053aed) bg_button_pane_cp021_ParamLimits

0xb63a,	// (0x00053af9) bg_button_pane_cp022_ParamLimits

0xb63a,	// (0x00053af9) bg_vkb2_func_pane_cp08_ParamLimits

0xb620,	// (0x00053adf) bg_vkb2_func_pane_cp06_ParamLimits

0xb62e,	// (0x00053aed) bg_vkb2_func_pane_cp07_ParamLimits

0xb64b,	// (0x00053b0a) input_focus_pane_cp09_ParamLimits

0xbadd,	// (0x00053f9c) cam6_autofocus_pane_ParamLimits

0xbadd,	// (0x00053f9c) cam6_autofocus_pane

0xbaff,	// (0x00053fbe) cam6_image_uncrop_pane_ParamLimits

0xbaff,	// (0x00053fbe) cam6_image_uncrop_pane

0xbb2c,	// (0x00053feb) cam6_indi_pane_ParamLimits

0xbb2c,	// (0x00053feb) cam6_indi_pane

0xbb46,	// (0x00054005) cam6_mode_pane_ParamLimits

0xbb46,	// (0x00054005) cam6_mode_pane

0xbb5a,	// (0x00054019) cam6_timer_pane_ParamLimits

0xbb5a,	// (0x00054019) cam6_timer_pane

0xbb66,	// (0x00054025) cam6_zoom_pane_ParamLimits

0xbb66,	// (0x00054025) cam6_zoom_pane

0xbb84,	// (0x00054043) cam6_mode_pane_g1_ParamLimits

0xbb84,	// (0x00054043) cam6_mode_pane_g1

0xbb90,	// (0x0005404f) cam6_mode_pane_g2_ParamLimits

0xbb90,	// (0x0005404f) cam6_mode_pane_g2

0xbb9c,	// (0x0005405b) cam6_mode_pane_g3_ParamLimits

0xbb9c,	// (0x0005405b) cam6_mode_pane_g3

0xbba8,	// (0x00054067) cam6_mode_pane_g4_ParamLimits

0xbba8,	// (0x00054067) cam6_mode_pane_g4

0x0003,

0xfba3,	// (0x00058062) cam6_mode_pane_g_ParamLimits

0xfba3,	// (0x00058062) cam6_mode_pane_g

0x2226,	// (0x0004a6e5) bg_tb_trans_pane_cp08_ParamLimits

0x2226,	// (0x0004a6e5) bg_tb_trans_pane_cp08

0x2234,	// (0x0004a6f3) cam6_battery_pane_ParamLimits

0x2234,	// (0x0004a6f3) cam6_battery_pane

0x224a,	// (0x0004a709) cam6_indi_pane_g1_ParamLimits

0x224a,	// (0x0004a709) cam6_indi_pane_g1

0x225c,	// (0x0004a71b) cam6_indi_pane_g2_ParamLimits

0x225c,	// (0x0004a71b) cam6_indi_pane_g2

0x226e,	// (0x0004a72d) cam6_indi_pane_g3_ParamLimits

0x226e,	// (0x0004a72d) cam6_indi_pane_g3

0x0002,

0xfbac,	// (0x0005806b) cam6_indi_pane_g_ParamLimits

0xfbac,	// (0x0005806b) cam6_indi_pane_g

0x2280,	// (0x0004a73f) cam6_indi_pane_t1_ParamLimits

0x2280,	// (0x0004a73f) cam6_indi_pane_t1

0xa89c,	// (0x00052d5b) cam6_autofocus_pane_g1

0xa894,	// (0x00052d53) cam6_autofocus_pane_g2

0xa8ac,	// (0x00052d6b) cam6_autofocus_pane_g3

0xa8a4,	// (0x00052d63) cam6_autofocus_pane_g4

0x0003,

0xfbb3,	// (0x00058072) cam6_autofocus_pane_g

0x22a6,	// (0x0004a765) cam6_timer_pane_g1

0x22ae,	// (0x0004a76d) cam6_timer_pane_t1

0x22bc,	// (0x0004a77b) cam6_zoom_cont_pane

0x22c4,	// (0x0004a783) cam6_zoom_pane_g1

0x22cc,	// (0x0004a78b) cam6_zoom_pane_g2

0xbbb4,	// (0x00054073) cam6_zoom_pane_g3

0x0002,

0xfbbc,	// (0x0005807b) cam6_zoom_pane_g

0x0fae,	// (0x0004946d) cam6_battery_pane_g1

0x0fae,	// (0x0004946d) cam6_battery_pane_g2

0x0001,

0xf743,	// (0x00057c02) cam6_battery_pane_g

0x22d4,	// (0x0004a793) cam6_zoom_cont_pane_g1

0x22dd,	// (0x0004a79c) cam6_zoom_cont_pane_g2

0x22e6,	// (0x0004a7a5) cam6_zoom_cont_pane_g3

0x0002,

0xfbc3,	// (0x00058082) cam6_zoom_cont_pane_g

0xbbd1,	// (0x00054090) cam6_mode_pane_cp_ParamLimits

0xbbd1,	// (0x00054090) cam6_mode_pane_cp

0xbbe5,	// (0x000540a4) cam6_zoom_pane_cp_ParamLimits

0xbbe5,	// (0x000540a4) cam6_zoom_pane_cp

0xbc03,	// (0x000540c2) vid6_image_uncrop_cif_pane_ParamLimits

0xbc03,	// (0x000540c2) vid6_image_uncrop_cif_pane

0xbc2f,	// (0x000540ee) vid6_image_uncrop_nhd_pane_ParamLimits

0xbc2f,	// (0x000540ee) vid6_image_uncrop_nhd_pane

0xbc4e,	// (0x0005410d) vid6_image_uncrop_vga_pane_ParamLimits

0xbc4e,	// (0x0005410d) vid6_image_uncrop_vga_pane

0xbc6d,	// (0x0005412c) vid6_image_uncrop_wvga_pane_ParamLimits

0xbc6d,	// (0x0005412c) vid6_image_uncrop_wvga_pane

0xbc8c,	// (0x0005414b) vid6_indi_pane_ParamLimits

0xbc8c,	// (0x0005414b) vid6_indi_pane

0x2226,	// (0x0004a6e5) bg_tb_trans_pane_cp09_ParamLimits

0x2226,	// (0x0004a6e5) bg_tb_trans_pane_cp09

0x22fe,	// (0x0004a7bd) cam6_battery_pane_cp_ParamLimits

0x22fe,	// (0x0004a7bd) cam6_battery_pane_cp

0x230a,	// (0x0004a7c9) vid6_indi_pane_g1_ParamLimits

0x230a,	// (0x0004a7c9) vid6_indi_pane_g1

0x231c,	// (0x0004a7db) vid6_indi_pane_g2_ParamLimits

0x231c,	// (0x0004a7db) vid6_indi_pane_g2

0x232e,	// (0x0004a7ed) vid6_indi_pane_g3_ParamLimits

0x232e,	// (0x0004a7ed) vid6_indi_pane_g3

0x2345,	// (0x0004a804) vid6_indi_pane_g4_ParamLimits

0x2345,	// (0x0004a804) vid6_indi_pane_g4

0x235c,	// (0x0004a81b) vid6_indi_pane_g5_ParamLimits

0x235c,	// (0x0004a81b) vid6_indi_pane_g5

0x0004,

0xfbca,	// (0x00058089) vid6_indi_pane_g_ParamLimits

0xfbca,	// (0x00058089) vid6_indi_pane_g

0x2376,	// (0x0004a835) vid6_indi_pane_t1_ParamLimits

0x2376,	// (0x0004a835) vid6_indi_pane_t1

0x238c,	// (0x0004a84b) vid6_indi_pane_t2_ParamLimits

0x238c,	// (0x0004a84b) vid6_indi_pane_t2

0x23b4,	// (0x0004a873) vid6_indi_pane_t3_ParamLimits

0x23b4,	// (0x0004a873) vid6_indi_pane_t3

0x23dc,	// (0x0004a89b) vid6_indi_pane_t4_ParamLimits

0x23dc,	// (0x0004a89b) vid6_indi_pane_t4

0x0003,

0xfbd5,	// (0x00058094) vid6_indi_pane_t_ParamLimits

0xfbd5,	// (0x00058094) vid6_indi_pane_t

0x2400,	// (0x0004a8bf) wait_bar_pane_cp08

0xbcb1,	// (0x00054170) main_cset_text2_pane_t1_ParamLimits

0xbcb1,	// (0x00054170) main_cset_text2_pane_t1

0xbbbc,	// (0x0005407b) listscroll_gen_pane_cp06_t1_ParamLimits

0xbbbc,	// (0x0005407b) listscroll_gen_pane_cp06_t1

0x4b56,	// (0x0004d015) main_cam6_set_pane

0xa739,	// (0x00052bf8) bg_tb_trans_pane_cp06_ParamLimits

0xa74f,	// (0x00052c0e) cam4_indicators_pane_g1_ParamLimits

0xa75c,	// (0x00052c1b) cam4_indicators_pane_g2_ParamLimits

0xf950,	// (0x00057e0f) cam4_indicators_pane_g_ParamLimits

0xa77c,	// (0x00052c3b) cam4_indicators_pane_t1_ParamLimits

0xa828,	// (0x00052ce7) bg_tb_trans_pane_cp07_ParamLimits

0xa74f,	// (0x00052c0e) vid4_indicators_pane_g1_ParamLimits

0xa840,	// (0x00052cff) vid4_indicators_pane_g2_ParamLimits

0xa84d,	// (0x00052d0c) vid4_indicators_pane_g3_ParamLimits

0xa85e,	// (0x00052d1d) vid4_indicators_pane_g4_ParamLimits

0xf962,	// (0x00057e21) vid4_indicators_pane_g_ParamLimits

0xa87a,	// (0x00052d39) vid4_indicators_pane_t1_ParamLimits

0xb76c,	// (0x00053c2b) vid4_progress_pane_g1_ParamLimits

0xb778,	// (0x00053c37) vid4_progress_pane_g2_ParamLimits

0xb784,	// (0x00053c43) vid4_progress_pane_g3_ParamLimits

0xb793,	// (0x00053c52) vid4_progress_pane_g4_ParamLimits

0xfb0d,	// (0x00057fcc) vid4_progress_pane_g_ParamLimits

0xb7b1,	// (0x00053c70) vid4_progress_pane_t1_ParamLimits

0xb7c7,	// (0x00053c86) vid4_progress_pane_t2_ParamLimits

0xb7dd,	// (0x00053c9c) vid4_progress_pane_t3_ParamLimits

0xfb18,	// (0x00057fd7) vid4_progress_pane_t_ParamLimits

0xb7f2,	// (0x00053cb1) wait_bar_pane_cp07_ParamLimits

0xbcd8,	// (0x00054197) main_cam6_set_pane_g2_ParamLimits

0xbcd8,	// (0x00054197) main_cam6_set_pane_g2

0xbce4,	// (0x000541a3) main_cset6_listscroll_pane_ParamLimits

0xbce4,	// (0x000541a3) main_cset6_listscroll_pane

0xbd11,	// (0x000541d0) main_cset6_slider_pane_ParamLimits

0xbd11,	// (0x000541d0) main_cset6_slider_pane

0xbd1d,	// (0x000541dc) main_cset6_text2_pane_ParamLimits

0xbd1d,	// (0x000541dc) main_cset6_text2_pane

0x240f,	// (0x0004a8ce) main_cset6_text_pane

0x2417,	// (0x0004a8d6) main_cset_list_pane_copy1_ParamLimits

0x2417,	// (0x0004a8d6) main_cset_list_pane_copy1

0x2427,	// (0x0004a8e6) scroll_pane_cp028_copy1

0xbd30,	// (0x000541ef) cset_list_set_pane_copy1

0xbd40,	// (0x000541ff) aid_position_infowindow_above_copy1

0xbd48,	// (0x00054207) aid_position_infowindow_below_copy1

0xbd50,	// (0x0005420f) cset_list_set_pane_g1_copy1

0xbd58,	// (0x00054217) cset_list_set_pane_g3_copy1_ParamLimits

0xbd58,	// (0x00054217) cset_list_set_pane_g3_copy1

0xbd67,	// (0x00054226) cset_list_set_pane_t1_copy1_ParamLimits

0xbd67,	// (0x00054226) cset_list_set_pane_t1_copy1

0xefc2,	// (0x00057481) list_highlight_pane_cp021_copy1_ParamLimits

0xefc2,	// (0x00057481) list_highlight_pane_cp021_copy1

0x243f,	// (0x0004a8fe) cset6_slider_pane_ParamLimits

0x243f,	// (0x0004a8fe) cset6_slider_pane

0x246b,	// (0x0004a92a) main_cset6_slider_pane_g1_ParamLimits

0x246b,	// (0x0004a92a) main_cset6_slider_pane_g1

0xbd7c,	// (0x0005423b) main_cset6_slider_pane_g2_ParamLimits

0xbd7c,	// (0x0005423b) main_cset6_slider_pane_g2

0x2493,	// (0x0004a952) main_cset6_slider_pane_g3_ParamLimits

0x2493,	// (0x0004a952) main_cset6_slider_pane_g3

0xbda4,	// (0x00054263) main_cset6_slider_pane_g4_ParamLimits

0xbda4,	// (0x00054263) main_cset6_slider_pane_g4

0xbdb0,	// (0x0005426f) main_cset6_slider_pane_g5_ParamLimits

0xbdb0,	// (0x0005426f) main_cset6_slider_pane_g5

0x1bb9,	// (0x0004a078) main_cset6_slider_pane_g7_ParamLimits

0x1bb9,	// (0x0004a078) main_cset6_slider_pane_g7

0x1bc5,	// (0x0004a084) main_cset6_slider_pane_g8_ParamLimits

0x1bc5,	// (0x0004a084) main_cset6_slider_pane_g8

0xbdbc,	// (0x0005427b) main_cset6_slider_pane_g9_ParamLimits

0xbdbc,	// (0x0005427b) main_cset6_slider_pane_g9

0xbdc8,	// (0x00054287) main_cset6_slider_pane_g10_ParamLimits

0xbdc8,	// (0x00054287) main_cset6_slider_pane_g10

0xbdd4,	// (0x00054293) main_cset6_slider_pane_g11_ParamLimits

0xbdd4,	// (0x00054293) main_cset6_slider_pane_g11

0xbde0,	// (0x0005429f) main_cset6_slider_pane_g12_ParamLimits

0xbde0,	// (0x0005429f) main_cset6_slider_pane_g12

0xbdec,	// (0x000542ab) main_cset6_slider_pane_g13_ParamLimits

0xbdec,	// (0x000542ab) main_cset6_slider_pane_g13

0xbdf8,	// (0x000542b7) main_cset6_slider_pane_g14_ParamLimits

0xbdf8,	// (0x000542b7) main_cset6_slider_pane_g14

0xbe04,	// (0x000542c3) main_cset6_slider_pane_g15_ParamLimits

0xbe04,	// (0x000542c3) main_cset6_slider_pane_g15

0xbe1c,	// (0x000542db) main_cset6_slider_pane_g16_ParamLimits

0xbe1c,	// (0x000542db) main_cset6_slider_pane_g16

0xbe28,	// (0x000542e7) main_cset6_slider_pane_g17_ParamLimits

0xbe28,	// (0x000542e7) main_cset6_slider_pane_g17

0x0011,

0xfbde,	// (0x0005809d) main_cset6_slider_pane_g_ParamLimits

0xfbde,	// (0x0005809d) main_cset6_slider_pane_g

0x249f,	// (0x0004a95e) main_cset6_slider_pane_t1_ParamLimits

0x249f,	// (0x0004a95e) main_cset6_slider_pane_t1

0xbe4c,	// (0x0005430b) main_cset6_slider_pane_t2_ParamLimits

0xbe4c,	// (0x0005430b) main_cset6_slider_pane_t2

0xbe77,	// (0x00054336) main_cset6_slider_pane_t3_ParamLimits

0xbe77,	// (0x00054336) main_cset6_slider_pane_t3

0xbea2,	// (0x00054361) main_cset6_slider_pane_t4_ParamLimits

0xbea2,	// (0x00054361) main_cset6_slider_pane_t4

0xbecd,	// (0x0005438c) main_cset6_slider_pane_t5_ParamLimits

0xbecd,	// (0x0005438c) main_cset6_slider_pane_t5

0x24e0,	// (0x0004a99f) main_cset6_slider_pane_t7_ParamLimits

0x24e0,	// (0x0004a99f) main_cset6_slider_pane_t7

0xbef8,	// (0x000543b7) main_cset6_slider_pane_t8_ParamLimits

0xbef8,	// (0x000543b7) main_cset6_slider_pane_t8

0xbf1c,	// (0x000543db) main_cset6_slider_pane_t9_ParamLimits

0xbf1c,	// (0x000543db) main_cset6_slider_pane_t9

0xbf40,	// (0x000543ff) main_cset6_slider_pane_t10_ParamLimits

0xbf40,	// (0x000543ff) main_cset6_slider_pane_t10

0xbf64,	// (0x00054423) main_cset6_slider_pane_t11_ParamLimits

0xbf64,	// (0x00054423) main_cset6_slider_pane_t11

0x2516,	// (0x0004a9d5) main_cset6_slider_pane_t14_ParamLimits

0x2516,	// (0x0004a9d5) main_cset6_slider_pane_t14

0x254f,	// (0x0004aa0e) main_cset6_slider_pane_t15_ParamLimits

0x254f,	// (0x0004aa0e) main_cset6_slider_pane_t15

0x000b,

0xfc03,	// (0x000580c2) main_cset6_slider_pane_t_ParamLimits

0xfc03,	// (0x000580c2) main_cset6_slider_pane_t

0x1c9e,	// (0x0004a15d) cset_slider_pane_g1_copy1

0x1ca7,	// (0x0004a166) cset_slider_pane_g2_copy1

0x1cb0,	// (0x0004a16f) cset_slider_pane_g3_copy1

0x4b56,	// (0x0004d015) bg_popup_sub_pane_cp011_copy1

0x1d53,	// (0x0004a212) main_cset_text_pane_g1_copy1

0x1d5b,	// (0x0004a21a) main_cset_text_pane_t1_copy1

0x1d69,	// (0x0004a228) main_cset_text_pane_t2_copy1

0x1d77,	// (0x0004a236) main_cset_text_pane_t3_copy1

0x1d85,	// (0x0004a244) main_cset_text_pane_t4_copy1

0x1d93,	// (0x0004a252) main_cset_text_pane_t5_copy1

0x1da1,	// (0x0004a260) main_cset_text_pane_t6_copy1

0x1daf,	// (0x0004a26e) main_cset_text_pane_t7_copy1

0xbf88,	// (0x00054447) main_cset_text2_pane_t1_copy1

0x4b56,	// (0x0004d015) main_ncimui_pane

0x8898,	// (0x00050d57) popup_query_ncimui_window_ParamLimits

0x8898,	// (0x00050d57) popup_query_ncimui_window

0x127f,	// (0x0004973e) field_cale_ev2_pane_g4_ParamLimits

0x127f,	// (0x0004973e) field_cale_ev2_pane_g4

0xa10a,	// (0x000525c9) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa10a,	// (0x000525c9) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8f7,	// (0x00057db6) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8f7,	// (0x00057db6) cell_video_dialer_keypad_pane_g

0xa122,	// (0x000525e1) cell_video_dialer_keypad_pane_t1

0x4b56,	// (0x0004d015) bg_popup_window_pane_cp012

0xd95b,	// (0x00055e1a) heading_pane_cp06

0x2677,	// (0x0004ab36) ncim_query_content_pane

0x4b56,	// (0x0004d015) bg_popup_heading_pane_cp01

0x267f,	// (0x0004ab3e) ncim_heading_pane_t1

0x268d,	// (0x0004ab4c) ncim_indicator_popup_pane

0x269f,	// (0x0004ab5e) ncim_query_button_pane

0x26b5,	// (0x0004ab74) ncim_query_content_pane_t1

0x26c7,	// (0x0004ab86) ncim_query_content_pane_t2

0x0005,

0xfc42,	// (0x00058101) ncim_query_content_pane_t

0x2701,	// (0x0004abc0) ncim_query_list_pane

0x2713,	// (0x0004abd2) ncim_query_popup_pane

0x268d,	// (0x0004ab4c) ncim_indicator_popup_pane_ParamLimits

0xc07d,	// (0x0005453c) ncim_query_content_pane_g1_ParamLimits

0xc07d,	// (0x0005453c) ncim_query_content_pane_g1

0x26b5,	// (0x0004ab74) ncim_query_content_pane_t1_ParamLimits

0x26c7,	// (0x0004ab86) ncim_query_content_pane_t2_ParamLimits

0xc089,	// (0x00054548) ncim_query_content_pane_t3_ParamLimits

0xc089,	// (0x00054548) ncim_query_content_pane_t3

0xc0a6,	// (0x00054565) ncim_query_content_pane_t4_ParamLimits

0xc0a6,	// (0x00054565) ncim_query_content_pane_t4

0xc0c3,	// (0x00054582) ncim_query_content_pane_t5_ParamLimits

0xc0c3,	// (0x00054582) ncim_query_content_pane_t5

0x26d9,	// (0x0004ab98) ncim_query_content_pane_t6_ParamLimits

0x26d9,	// (0x0004ab98) ncim_query_content_pane_t6

0xfc42,	// (0x00058101) ncim_query_content_pane_t_ParamLimits

0x2701,	// (0x0004abc0) ncim_query_list_pane_ParamLimits

0x2713,	// (0x0004abd2) ncim_query_popup_pane_ParamLimits

0x2727,	// (0x0004abe6) wait_bar_pane_cp04

0x4b56,	// (0x0004d015) input_focus_pane_cp011

0x272f,	// (0x0004abee) ncim_query_popup_pane_t1

0x273d,	// (0x0004abfc) ncim_list_query_list_pane_ParamLimits

0x273d,	// (0x0004abfc) ncim_list_query_list_pane

0x4b56,	// (0x0004d015) bg_button_pane_cp027

0x2750,	// (0x0004ac0f) ncim_query_button_pane_g1

0x4b56,	// (0x0004d015) list_highlight_pane_cp012

0x275a,	// (0x0004ac19) ncim_list_query_list_pane_g1

0x2762,	// (0x0004ac21) ncim_list_query_list_pane_t1

0xa76c,	// (0x00052c2b) cam4_indicators_pane_g3_ParamLimits

0xa76c,	// (0x00052c2b) cam4_indicators_pane_g3

0xa86a,	// (0x00052d29) vid4_indicators_pane_g5_ParamLimits

0xa86a,	// (0x00052d29) vid4_indicators_pane_g5

0xb7a2,	// (0x00053c61) vid4_progress_pane_g5_ParamLimits

0xb7a2,	// (0x00053c61) vid4_progress_pane_g5

0xbfb7,	// (0x00054476) main_ncimui_pane_g1

0xc001,	// (0x000544c0) ncimui_group_query_pane_ParamLimits

0xc001,	// (0x000544c0) ncimui_group_query_pane

0xc03f,	// (0x000544fe) ncimui_list_pane_ParamLimits

0xc03f,	// (0x000544fe) ncimui_list_pane

0xc059,	// (0x00054518) ncimui_text_pane_ParamLimits

0xc059,	// (0x00054518) ncimui_text_pane

0xc0e0,	// (0x0005459f) ncimui_text_pane_t1_ParamLimits

0xc0e0,	// (0x0005459f) ncimui_text_pane_t1

0x2770,	// (0x0004ac2f) ncimui_list_single_graphic_pane_ParamLimits

0x2770,	// (0x0004ac2f) ncimui_list_single_graphic_pane

0xc0ff,	// (0x000545be) ncimui_query_pane_ParamLimits

0xc0ff,	// (0x000545be) ncimui_query_pane

0x4b56,	// (0x0004d015) list_highlight_pane_cp013

0x2780,	// (0x0004ac3f) ncim_list_query_list_pane_t1_copy1

0x275a,	// (0x0004ac19) ncim_list_single_graphic_pane_g1

0x278e,	// (0x0004ac4d) ncim_query_button_pane_cp01

0x2796,	// (0x0004ac55) ncim_query_entry_pane_ParamLimits

0x2796,	// (0x0004ac55) ncim_query_entry_pane

0x27a6,	// (0x0004ac65) ncimui_query_pane_g1

0x27ae,	// (0x0004ac6d) ncimui_query_pane_t1_ParamLimits

0x27ae,	// (0x0004ac6d) ncimui_query_pane_t1

0x4b56,	// (0x0004d015) input_focus_pane_cp012

0x272f,	// (0x0004abee) ncim_query_entry_pane_t1

0x58b5,	// (0x0004dd74) main_im_pane_ParamLimits

0xefc2,	// (0x00057481) main_mobtv_pane_ParamLimits

0xefc2,	// (0x00057481) main_mobtv_pane

0xbe34,	// (0x000542f3) main_cset6_slider_pane_g18_ParamLimits

0xbe34,	// (0x000542f3) main_cset6_slider_pane_g18

0xbe40,	// (0x000542ff) main_cset6_slider_pane_g19_ParamLimits

0xbe40,	// (0x000542ff) main_cset6_slider_pane_g19

0x1a2c,	// (0x00049eeb) bg_main_mobtv_pane_ParamLimits

0x1a2c,	// (0x00049eeb) bg_main_mobtv_pane

0xc10f,	// (0x000545ce) main_mobtv_info_pane

0xc11a,	// (0x000545d9) main_mobtv_loading_pane_ParamLimits

0xc11a,	// (0x000545d9) main_mobtv_loading_pane

0x27d2,	// (0x0004ac91) main_mobtv_pg_channel_list_pane

0x27dc,	// (0x0004ac9b) main_mobtv_pg_hdr_pane

0xc127,	// (0x000545e6) main_mobtv_programe_curr_pane_ParamLimits

0xc127,	// (0x000545e6) main_mobtv_programe_curr_pane

0xc134,	// (0x000545f3) main_mobtv_programe_next_pane_ParamLimits

0xc134,	// (0x000545f3) main_mobtv_programe_next_pane

0x27e5,	// (0x0004aca4) popup_mobtv_noti_window

0x0fae,	// (0x0004946d) main_tv_pg_hdr_pane_g1

0x27ef,	// (0x0004acae) main_tv_pg_hdr_pane_g2

0x27f7,	// (0x0004acb6) main_tv_pg_hdr_pane_g3

0x27ff,	// (0x0004acbe) main_tv_pg_hdr_pane_g4

0x2807,	// (0x0004acc6) main_tv_pg_hdr_pane_g5

0x2811,	// (0x0004acd0) main_tv_pg_hdr_pane_g6

0x281b,	// (0x0004acda) main_tv_pg_hdr_pane_g7

0x2825,	// (0x0004ace4) main_tv_pg_hdr_pane_g8

0x282f,	// (0x0004acee) main_tv_pg_hdr_pane_g9

0x2839,	// (0x0004acf8) main_tv_pg_hdr_pane_g10

0x2843,	// (0x0004ad02) main_tv_pg_hdr_pane_g11

0x000a,

0xfc4f,	// (0x0005810e) main_tv_pg_hdr_pane_g

0x284d,	// (0x0004ad0c) main_tv_pg_hdr_pane_t1

0x285b,	// (0x0004ad1a) main_tv_pg_hdr_pane_t2

0x2869,	// (0x0004ad28) main_tv_pg_hdr_pane_t3

0x2879,	// (0x0004ad38) main_tv_pg_hdr_pane_t4

0x2889,	// (0x0004ad48) main_tv_pg_hdr_pane_t5

0x0004,

0xfc66,	// (0x00058125) main_tv_pg_hdr_pane_t

0x2899,	// (0x0004ad58) single_mobtv_pg_channel_pane_ParamLimits

0x2899,	// (0x0004ad58) single_mobtv_pg_channel_pane

0x28ab,	// (0x0004ad6a) single_mobtv_pg_channel_table_pane

0x28b4,	// (0x0004ad73) single_mobtv_pg_channel_thumb_pane

0x28bd,	// (0x0004ad7c) single_tv_pg_channel_pane_g1

0x28c6,	// (0x0004ad85) single_tv_pg_channel_pane_g2

0x0001,

0xfc71,	// (0x00058130) single_tv_pg_channel_pane_g

0x11de,	// (0x0004969d) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x11de,	// (0x0004969d) bg_single_mobtv_pg_channel_thumb_pane

0x28cf,	// (0x0004ad8e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x28cf,	// (0x0004ad8e) single_mobtv_pg_channel_thumb_pane_g1

0x28dd,	// (0x0004ad9c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x28dd,	// (0x0004ad9c) single_mobtv_pg_channel_thumb_pane_g2

0x28e9,	// (0x0004ada8) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x28e9,	// (0x0004ada8) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc76,	// (0x00058135) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc76,	// (0x00058135) single_mobtv_pg_channel_thumb_pane_g

0x28f5,	// (0x0004adb4) single_mobtv_pg_channel_thumb_pane_t1

0x2903,	// (0x0004adc2) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc7d,	// (0x0005813c) single_mobtv_pg_channel_thumb_pane_t

0x0fae,	// (0x0004946d) bg_single_mobtv_pg_channel_table_pane_g1

0x0fae,	// (0x0004946d) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf743,	// (0x00057c02) bg_single_mobtv_pg_channel_table_pane_g

0x2911,	// (0x0004add0) single_mobtv_pg_channel_table_pane_t1

0x291f,	// (0x0004adde) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc82,	// (0x00058141) single_mobtv_pg_channel_table_pane_t

0xc149,	// (0x00054608) main_mobtv_info_pane_g1_ParamLimits

0xc149,	// (0x00054608) main_mobtv_info_pane_g1

0xc165,	// (0x00054624) main_mobtv_info_pane_t1_ParamLimits

0xc165,	// (0x00054624) main_mobtv_info_pane_t1

0xc1dd,	// (0x0005469c) main_mobtv_info_pane_t2_ParamLimits

0xc1dd,	// (0x0005469c) main_mobtv_info_pane_t2

0x0002,

0xfc8c,	// (0x0005814b) main_mobtv_info_pane_t_ParamLimits

0xfc8c,	// (0x0005814b) main_mobtv_info_pane_t

0xc270,	// (0x0005472f) wait_bar_pane_cp05

0xc282,	// (0x00054741) main_mobtv_loading_pane_g1_ParamLimits

0xc282,	// (0x00054741) main_mobtv_loading_pane_g1

0xc28e,	// (0x0005474d) main_mobtv_loading_pane_g2_ParamLimits

0xc28e,	// (0x0005474d) main_mobtv_loading_pane_g2

0xc29a,	// (0x00054759) main_mobtv_loading_pane_g3_ParamLimits

0xc29a,	// (0x00054759) main_mobtv_loading_pane_g3

0x0002,

0xfc93,	// (0x00058152) main_mobtv_loading_pane_g_ParamLimits

0xfc93,	// (0x00058152) main_mobtv_loading_pane_g

0x292d,	// (0x0004adec) main_mobtv_loading_pane_t1_ParamLimits

0x292d,	// (0x0004adec) main_mobtv_loading_pane_t1

0x2945,	// (0x0004ae04) main_mobtv_loading_pane_t2_ParamLimits

0x2945,	// (0x0004ae04) main_mobtv_loading_pane_t2

0x0001,

0xfc9a,	// (0x00058159) main_mobtv_loading_pane_t_ParamLimits

0xfc9a,	// (0x00058159) main_mobtv_loading_pane_t

0xc2a8,	// (0x00054767) wait_bar_pane_cp06_ParamLimits

0xc2a8,	// (0x00054767) wait_bar_pane_cp06

0x2969,	// (0x0004ae28) main_mobtv_programe_curr_pane_t1

0x2977,	// (0x0004ae36) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc9f,	// (0x0005815e) main_mobtv_programe_curr_pane_t

0x2985,	// (0x0004ae44) main_mobtv_programe_next_pane_t1

0x2993,	// (0x0004ae52) main_mobtv_programe_next_pane_t2

0x29a1,	// (0x0004ae60) main_mobtv_programe_next_pane_t3

0x0002,

0xfca4,	// (0x00058163) main_mobtv_programe_next_pane_t

0x4b56,	// (0x0004d015) bg_popup_mobtv_noti_window_pane

0x29af,	// (0x0004ae6e) popup_mobtv_noti_window_g1

0x29b7,	// (0x0004ae76) popup_mobtv_noti_window_t1

0x29c5,	// (0x0004ae84) popup_mobtv_noti_window_t2

0x0001,

0xfcab,	// (0x0005816a) popup_mobtv_noti_window_t

0x0fae,	// (0x0004946d) bg_popup_mobtv_noti_window_pane_g1

0x4b56,	// (0x0004d015) sc_clock_pane

0x4b56,	// (0x0004d015) main_fs_bigclock_pane

0xb98c,	// (0x00053e4b) blid2_tripm_pane_t4_ParamLimits

0xb98c,	// (0x00053e4b) blid2_tripm_pane_t4

0xc2b4,	// (0x00054773) sc_clock_pane_g1_ParamLimits

0xc2b4,	// (0x00054773) sc_clock_pane_g1

0xc2c2,	// (0x00054781) sc_clock_pane_t1_ParamLimits

0xc2c2,	// (0x00054781) sc_clock_pane_t1

0xc2d7,	// (0x00054796) sc_clock_pane_t2_ParamLimits

0xc2d7,	// (0x00054796) sc_clock_pane_t2

0xc2e9,	// (0x000547a8) sc_clock_pane_t3_ParamLimits

0xc2e9,	// (0x000547a8) sc_clock_pane_t3

0x0004,

0xfcb0,	// (0x0005816f) sc_clock_pane_t_ParamLimits

0xfcb0,	// (0x0005816f) sc_clock_pane_t

0xcfca,	// (0x00055489) main_fs_bigclock_indicator_pane_ParamLimits

0xcfca,	// (0x00055489) main_fs_bigclock_indicator_pane

0xc370,	// (0x0005482f) main_fs_bigclock_pane_g1_ParamLimits

0xc370,	// (0x0005482f) main_fs_bigclock_pane_g1

0xcfd6,	// (0x00055495) main_fs_bigclock_pane_t1_ParamLimits

0xcfd6,	// (0x00055495) main_fs_bigclock_pane_t1

0xcfe8,	// (0x000554a7) main_fs_bigclock_pane_t2_ParamLimits

0xcfe8,	// (0x000554a7) main_fs_bigclock_pane_t2

0xcffc,	// (0x000554bb) main_fs_bigclock_pane_t3_ParamLimits

0xcffc,	// (0x000554bb) main_fs_bigclock_pane_t3

0x0002,

0xfeaf,	// (0x0005836e) main_fs_bigclock_pane_t_ParamLimits

0xfeaf,	// (0x0005836e) main_fs_bigclock_pane_t

0x35d6,	// (0x0004ba95) main_fs_bigclock_indicator_pane_g1

0x26a7,	// (0x0004ab66) ncim_query_content_pane_g2_ParamLimits

0x26a7,	// (0x0004ab66) ncim_query_content_pane_g2

0x0001,

0xfc3d,	// (0x000580fc) ncim_query_content_pane_g_ParamLimits

0xfc3d,	// (0x000580fc) ncim_query_content_pane_g

0xc2fb,	// (0x000547ba) sc_clock_pane_t4_ParamLimits

0xc2fb,	// (0x000547ba) sc_clock_pane_t4

0xefc2,	// (0x00057481) main_radioblah_pane

0x1989,	// (0x00049e48) cell_call4_button_pane_t1_copy1_ParamLimits

0x1989,	// (0x00049e48) cell_call4_button_pane_t1_copy1

0xbfc1,	// (0x00054480) main_ncimui_pane_t1_ParamLimits

0xbfc1,	// (0x00054480) main_ncimui_pane_t1

0xbfd3,	// (0x00054492) main_ncimui_pane_t2_ParamLimits

0xbfd3,	// (0x00054492) main_ncimui_pane_t2

0x0002,

0xfc36,	// (0x000580f5) main_ncimui_pane_t_ParamLimits

0xfc36,	// (0x000580f5) main_ncimui_pane_t

0x2afd,	// (0x0004afbc) main_radioblah_anim_pane_ParamLimits

0x2afd,	// (0x0004afbc) main_radioblah_anim_pane

0x2b0e,	// (0x0004afcd) main_radioblah_info_pane_ParamLimits

0x2b0e,	// (0x0004afcd) main_radioblah_info_pane

0x2b22,	// (0x0004afe1) main_radioblah_pane_t1_ParamLimits

0x2b22,	// (0x0004afe1) main_radioblah_pane_t1

0x2b3e,	// (0x0004affd) main_radioblah_pane_t2_ParamLimits

0x2b3e,	// (0x0004affd) main_radioblah_pane_t2

0x0003,

0xfcd1,	// (0x00058190) main_radioblah_pane_t_ParamLimits

0xfcd1,	// (0x00058190) main_radioblah_pane_t

0xc3c4,	// (0x00054883) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc3c4,	// (0x00054883) main_radioblah_rocker_ctrl_pane

0x2b86,	// (0x0004b045) main_radioblah_info_pane_t1_ParamLimits

0x2b86,	// (0x0004b045) main_radioblah_info_pane_t1

0xc40d,	// (0x000548cc) main_radioblah_info_pane_t2_ParamLimits

0xc40d,	// (0x000548cc) main_radioblah_info_pane_t2

0x0003,

0xfcda,	// (0x00058199) main_radioblah_info_pane_t_ParamLimits

0xfcda,	// (0x00058199) main_radioblah_info_pane_t

0x0fae,	// (0x0004946d) main_radioblah_rocker_ctrl_pane_g1

0xc4bd,	// (0x0005497c) main_radioblah_rocker_ctrl_pane_g2

0xc4c5,	// (0x00054984) main_radioblah_rocker_ctrl_pane_g3

0xc4cd,	// (0x0005498c) main_radioblah_rocker_ctrl_pane_g4

0xc4d5,	// (0x00054994) main_radioblah_rocker_ctrl_pane_g5

0xc4dd,	// (0x0005499c) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfce3,	// (0x000581a2) main_radioblah_rocker_ctrl_pane_g

0xbf88,	// (0x00054447) main_cset_text2_pane_t1_copy1_ParamLimits

0xa6a5,	// (0x00052b64) cam4_image_uncrop_qvga_pane

0xa7e2,	// (0x00052ca1) vid4_image_uncrop_qcif_pane

0xbb1e,	// (0x00053fdd) cam6_image_uncrop_qvga_pane_ParamLimits

0xbb1e,	// (0x00053fdd) cam6_image_uncrop_qvga_pane

0x22ee,	// (0x0004a7ad) vid6_image_uncrop_qcif_pane_ParamLimits

0x22ee,	// (0x0004a7ad) vid6_image_uncrop_qcif_pane

0x4b56,	// (0x0004d015) bg_popup_preview_window_pane_cp03

0x2659,	// (0x0004ab18) list_cset_text2_pane

0x2661,	// (0x0004ab20) main_cset6_text2_pane_g1

0x2669,	// (0x0004ab28) main_cset6_text2_pane_t1

0xc4e5,	// (0x000549a4) list_cset_text2_pane_t1_ParamLimits

0xc4e5,	// (0x000549a4) list_cset_text2_pane_t1

0xefc2,	// (0x00057481) main_radioblah_pane_ParamLimits

0xc25c,	// (0x0005471b) main_mobtv_info_pane_t3_ParamLimits

0xc25c,	// (0x0005471b) main_mobtv_info_pane_t3

0xc3b2,	// (0x00054871) main_radioblah_pane_g1

0xc3dd,	// (0x0005489c) main_radioblah_info_pane_g1

0xc462,	// (0x00054921) main_radioblah_info_pane_t3_ParamLimits

0xc462,	// (0x00054921) main_radioblah_info_pane_t3

0x7451,	// (0x0004f910) highlight_cell_cale_month_pane_ParamLimits

0x7451,	// (0x0004f910) highlight_cell_cale_month_pane

0x4b56,	// (0x0004d015) main_phob_fisheye_pane

0x1334,	// (0x000497f3) scroll_pane_cp0031_ParamLimits

0x1334,	// (0x000497f3) scroll_pane_cp0031

0x2400,	// (0x0004a8bf) wait_bar_pane_cp08_ParamLimits

0xbd30,	// (0x000541ef) cset_list_set_pane_copy1_ParamLimits

0x2bc0,	// (0x0004b07f) highlight_cell_cale_month_pane_g1

0xc4fe,	// (0x000549bd) highlight_cell_cale_month_pane_t1

0x2023,	// (0x0004a4e2) list_gen_pane_cp01

0x1ba4,	// (0x0004a063) scroll_pane_01

0x2060,	// (0x0004a51f) list_single_double_fisheye_pane

0xc50c,	// (0x000549cb) list_double_fisheye_pane_g1_ParamLimits

0xc50c,	// (0x000549cb) list_double_fisheye_pane_g1

0xc518,	// (0x000549d7) list_double_fisheye_pane_g2_ParamLimits

0xc518,	// (0x000549d7) list_double_fisheye_pane_g2

0xc52c,	// (0x000549eb) list_double_fisheye_pane_g3_ParamLimits

0xc52c,	// (0x000549eb) list_double_fisheye_pane_g3

0x0004,

0xfcf0,	// (0x000581af) list_double_fisheye_pane_g_ParamLimits

0xfcf0,	// (0x000581af) list_double_fisheye_pane_g

0xc555,	// (0x00054a14) list_double_fisheye_pane_t1_ParamLimits

0xc555,	// (0x00054a14) list_double_fisheye_pane_t1

0xc570,	// (0x00054a2f) list_double_fisheye_pane_t2_ParamLimits

0xc570,	// (0x00054a2f) list_double_fisheye_pane_t2

0x0001,

0xfcfb,	// (0x000581ba) list_double_fisheye_pane_t_ParamLimits

0xfcfb,	// (0x000581ba) list_double_fisheye_pane_t

0x4b56,	// (0x0004d015) main_call5_pane

0xc321,	// (0x000547e0) sc_swipe_pane_ParamLimits

0xc321,	// (0x000547e0) sc_swipe_pane

0xc59e,	// (0x00054a5d) call5_image_pane_ParamLimits

0xc59e,	// (0x00054a5d) call5_image_pane

0xc5b0,	// (0x00054a6f) call5_swipe_1_pane_ParamLimits

0xc5b0,	// (0x00054a6f) call5_swipe_1_pane

0xc5bc,	// (0x00054a7b) call5_swipe_2_pane_ParamLimits

0xc5bc,	// (0x00054a7b) call5_swipe_2_pane

0xc5d8,	// (0x00054a97) popup_call5_audio_first_window_ParamLimits

0xc5d8,	// (0x00054a97) popup_call5_audio_first_window

0x11de,	// (0x0004969d) call5_swipe_1_pane_g1_ParamLimits

0x11de,	// (0x0004969d) call5_swipe_1_pane_g1

0x2bc8,	// (0x0004b087) call5_swipe_1_pane_g2_ParamLimits

0x2bc8,	// (0x0004b087) call5_swipe_1_pane_g2

0x0001,

0xfd00,	// (0x000581bf) call5_swipe_1_pane_g_ParamLimits

0xfd00,	// (0x000581bf) call5_swipe_1_pane_g

0x2bd4,	// (0x0004b093) call5_swipe_1_pane_t1_ParamLimits

0x2bd4,	// (0x0004b093) call5_swipe_1_pane_t1

0x11de,	// (0x0004969d) call5_swipe_2_pane_g1_ParamLimits

0x11de,	// (0x0004969d) call5_swipe_2_pane_g1

0x2be9,	// (0x0004b0a8) call5_swipe_2_pane_g2_ParamLimits

0x2be9,	// (0x0004b0a8) call5_swipe_2_pane_g2

0x0001,

0xfd05,	// (0x000581c4) call5_swipe_2_pane_g_ParamLimits

0xfd05,	// (0x000581c4) call5_swipe_2_pane_g

0x2bf5,	// (0x0004b0b4) call5_swipe_2_pane_t1_ParamLimits

0x2bf5,	// (0x0004b0b4) call5_swipe_2_pane_t1

0x2c0a,	// (0x0004b0c9) sc_swipe_pane_g1_ParamLimits

0x2c0a,	// (0x0004b0c9) sc_swipe_pane_g1

0x2c17,	// (0x0004b0d6) sc_swipe_pane_g2_ParamLimits

0x2c17,	// (0x0004b0d6) sc_swipe_pane_g2

0x0001,

0xfd0a,	// (0x000581c9) sc_swipe_pane_g_ParamLimits

0xfd0a,	// (0x000581c9) sc_swipe_pane_g

0x2c23,	// (0x0004b0e2) sc_swipe_pane_t1_ParamLimits

0x2c23,	// (0x0004b0e2) sc_swipe_pane_t1

0x4b56,	// (0x0004d015) main_cmail_launcher_pane

0xc5e8,	// (0x00054aa7) aid_size_cell_cmail_l_ParamLimits

0xc5e8,	// (0x00054aa7) aid_size_cell_cmail_l

0xc5f8,	// (0x00054ab7) grid_cmail_l_pane_ParamLimits

0xc5f8,	// (0x00054ab7) grid_cmail_l_pane

0xc608,	// (0x00054ac7) cell_cmail_l_pane_ParamLimits

0xc608,	// (0x00054ac7) cell_cmail_l_pane

0xc61e,	// (0x00054add) cell_cmail_l_pane_g1_ParamLimits

0xc61e,	// (0x00054add) cell_cmail_l_pane_g1

0xc62a,	// (0x00054ae9) cell_cmail_l_pane_t1_ParamLimits

0xc62a,	// (0x00054ae9) cell_cmail_l_pane_t1

0x2c38,	// (0x0004b0f7) cell_cmail_l_pane_t2_ParamLimits

0x2c38,	// (0x0004b0f7) cell_cmail_l_pane_t2

0x0001,

0xfd0f,	// (0x000581ce) cell_cmail_l_pane_t_ParamLimits

0xfd0f,	// (0x000581ce) cell_cmail_l_pane_t

0xefc2,	// (0x00057481) grid_highlight_pane_cp018_ParamLimits

0xefc2,	// (0x00057481) grid_highlight_pane_cp018

0x4c82,	// (0x0004d141) main2_pane_ParamLimits

0x4c82,	// (0x0004d141) main2_pane

0x5afe,	// (0x0004dfbd) popup_sp_fs_action_menu_bg_pane_g1

0x5b06,	// (0x0004dfc5) popup_sp_fs_action_menu_bg_pane_g2

0x5b0e,	// (0x0004dfcd) popup_sp_fs_action_menu_bg_pane_g3

0x5b16,	// (0x0004dfd5) popup_sp_fs_action_menu_bg_pane_g4

0x5b1e,	// (0x0004dfdd) popup_sp_fs_action_menu_bg_pane_g5

0x5b26,	// (0x0004dfe5) popup_sp_fs_action_menu_bg_pane_g6

0x5b2e,	// (0x0004dfed) popup_sp_fs_action_menu_bg_pane_g7

0x5b36,	// (0x0004dff5) popup_sp_fs_action_menu_bg_pane_g8

0x5b3e,	// (0x0004dffd) popup_sp_fs_action_menu_bg_pane_g9

0x5b46,	// (0x0004e005) popup_sp_fs_action_menu_bg_pane_g10

0x5b46,	// (0x0004e005) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x000576ae) popup_sp_fs_action_menu_bg_pane_g

0x0972,	// (0x00048e31) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0972,	// (0x00048e31) list_medium_line_x2_t3_g3_g1

0x097e,	// (0x00048e3d) list_medium_line_x2_t3_g3_g2_ParamLimits

0x097e,	// (0x00048e3d) list_medium_line_x2_t3_g3_g2

0x098a,	// (0x00048e49) list_medium_line_x2_t3_g3_g3_ParamLimits

0x098a,	// (0x00048e49) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x0005775e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x0005775e) list_medium_line_x2_t3_g3_g

0x0996,	// (0x00048e55) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0996,	// (0x00048e55) list_medium_line_x2_t3_g3_t1

0x64a1,	// (0x0004e960) list_medium_line_x2_t3_g3_t2_ParamLimits

0x64a1,	// (0x0004e960) list_medium_line_x2_t3_g3_t2

0x09ab,	// (0x00048e6a) list_medium_line_x2_t3_g3_t3_ParamLimits

0x09ab,	// (0x00048e6a) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x00057765) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x00057765) list_medium_line_x2_t3_g3_t

0x0972,	// (0x00048e31) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0972,	// (0x00048e31) list_medium_line_x2_t3_g2_g1

0x098a,	// (0x00048e49) list_medium_line_x2_t3_g2_g2_ParamLimits

0x098a,	// (0x00048e49) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x0005776c) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x0005776c) list_medium_line_x2_t3_g2_g

0x09c0,	// (0x00048e7f) list_medium_line_x2_t3_g2_t1_ParamLimits

0x09c0,	// (0x00048e7f) list_medium_line_x2_t3_g2_t1

0x09d6,	// (0x00048e95) list_medium_line_x2_t3_g2_t2_ParamLimits

0x09d6,	// (0x00048e95) list_medium_line_x2_t3_g2_t2

0x09e8,	// (0x00048ea7) list_medium_line_x2_t3_g2_t3_ParamLimits

0x09e8,	// (0x00048ea7) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x00057771) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x00057771) list_medium_line_x2_t3_g2_t

0x0972,	// (0x00048e31) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0972,	// (0x00048e31) list_medium_line_x2_t4_g4_g1

0x0a06,	// (0x00048ec5) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0a06,	// (0x00048ec5) list_medium_line_x2_t4_g4_g2

0x097e,	// (0x00048e3d) list_medium_line_x2_t4_g4_g3_ParamLimits

0x097e,	// (0x00048e3d) list_medium_line_x2_t4_g4_g3

0x0a12,	// (0x00048ed1) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0a12,	// (0x00048ed1) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x00057778) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x00057778) list_medium_line_x2_t4_g4_g

0x64b5,	// (0x0004e974) list_medium_line_x2_t4_g4_t1_ParamLimits

0x64b5,	// (0x0004e974) list_medium_line_x2_t4_g4_t1

0x64cf,	// (0x0004e98e) list_medium_line_x2_t4_g4_t2_ParamLimits

0x64cf,	// (0x0004e98e) list_medium_line_x2_t4_g4_t2

0x64e5,	// (0x0004e9a4) list_medium_line_x2_t4_g4_t3_ParamLimits

0x64e5,	// (0x0004e9a4) list_medium_line_x2_t4_g4_t3

0x0a1e,	// (0x00048edd) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0a1e,	// (0x00048edd) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x00057781) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x00057781) list_medium_line_x2_t4_g4_t

0x0972,	// (0x00048e31) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0972,	// (0x00048e31) list_medium_line_x2_t2_g4_g1

0x0a06,	// (0x00048ec5) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0a06,	// (0x00048ec5) list_medium_line_x2_t2_g4_g2

0x097e,	// (0x00048e3d) list_medium_line_x2_t2_g4_g3_ParamLimits

0x097e,	// (0x00048e3d) list_medium_line_x2_t2_g4_g3

0x098a,	// (0x00048e49) list_medium_line_x2_t2_g4_g4_ParamLimits

0x098a,	// (0x00048e49) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x000577e8) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x000577e8) list_medium_line_x2_t2_g4_g

0x0a30,	// (0x00048eef) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0a30,	// (0x00048eef) list_medium_line_x2_t2_g4_t1

0x09ab,	// (0x00048e6a) list_medium_line_x2_t2_g4_t2_ParamLimits

0x09ab,	// (0x00048e6a) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x000577f1) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x000577f1) list_medium_line_x2_t2_g4_t

0x0972,	// (0x00048e31) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0972,	// (0x00048e31) list_medium_line_x2_t2_g3_g1

0x097e,	// (0x00048e3d) list_medium_line_x2_t2_g3_g2_ParamLimits

0x097e,	// (0x00048e3d) list_medium_line_x2_t2_g3_g2

0x098a,	// (0x00048e49) list_medium_line_x2_t2_g3_g3_ParamLimits

0x098a,	// (0x00048e49) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x0005775e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x0005775e) list_medium_line_x2_t2_g3_g

0x0a45,	// (0x00048f04) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0a45,	// (0x00048f04) list_medium_line_x2_t2_g3_t1

0x09ab,	// (0x00048e6a) list_medium_line_x2_t2_g3_t2_ParamLimits

0x09ab,	// (0x00048e6a) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x000577f6) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x000577f6) list_medium_line_x2_t2_g3_t

0x766f,	// (0x0004fb2e) main_sp_fs_list_pane_ParamLimits

0x766f,	// (0x0004fb2e) main_sp_fs_list_pane

0x767b,	// (0x0004fb3a) sp_fs_scroll_pane_ParamLimits

0x767b,	// (0x0004fb3a) sp_fs_scroll_pane

0x7687,	// (0x0004fb46) list_medium_line_x2_t3_t1

0x7697,	// (0x0004fb56) list_medium_line_x2_t3_t2

0x0a88,	// (0x00048f47) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x00057841) list_medium_line_x2_t3_t

0x76a5,	// (0x0004fb64) list_medium_line_x3_t4_t1

0x76b5,	// (0x0004fb74) list_medium_line_x3_t4_t2

0x0a96,	// (0x00048f55) list_medium_line_x3_t4_t3

0x0a88,	// (0x00048f47) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x00057848) list_medium_line_x3_t4_t

0x76c3,	// (0x0004fb82) list_medium_line_x4_t5_t1

0x76d3,	// (0x0004fb92) list_medium_line_x4_t5_t2

0x0a96,	// (0x00048f55) list_medium_line_x4_t5_t3

0x0aa4,	// (0x00048f63) list_medium_line_x4_t5_t4

0x0a88,	// (0x00048f47) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x00057851) list_medium_line_x4_t5_t

0x0972,	// (0x00048e31) list_medium_line_t4_g4_g1_ParamLimits

0x0972,	// (0x00048e31) list_medium_line_t4_g4_g1

0x0a12,	// (0x00048ed1) list_medium_line_t4_g4_g2_ParamLimits

0x0a12,	// (0x00048ed1) list_medium_line_t4_g4_g2

0x0ab2,	// (0x00048f71) list_medium_line_t4_g4_g3_ParamLimits

0x0ab2,	// (0x00048f71) list_medium_line_t4_g4_g3

0x098a,	// (0x00048e49) list_medium_line_t4_g4_g4_ParamLimits

0x098a,	// (0x00048e49) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x0005785c) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x0005785c) list_medium_line_t4_g4_g

0x0abe,	// (0x00048f7d) list_medium_line_t4_g4_t1_ParamLimits

0x0abe,	// (0x00048f7d) list_medium_line_t4_g4_t1

0x0ad3,	// (0x00048f92) list_medium_line_t4_g4_t2_ParamLimits

0x0ad3,	// (0x00048f92) list_medium_line_t4_g4_t2

0x0ae9,	// (0x00048fa8) list_medium_line_t4_g4_t3_ParamLimits

0x0ae9,	// (0x00048fa8) list_medium_line_t4_g4_t3

0x09ab,	// (0x00048e6a) list_medium_line_t4_g4_t4_ParamLimits

0x09ab,	// (0x00048e6a) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x00057865) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x00057865) list_medium_line_t4_g4_t

0x77f4,	// (0x0004fcb3) chi_dic_find_pane_g1

0x8861,	// (0x00050d20) main_tport_pane

0x1ce4,	// (0x0004a1a3) list_medium_line_plain_t1

0x1cfa,	// (0x0004a1b9) list_medium_line_t2_g2_g1_ParamLimits

0x1cfa,	// (0x0004a1b9) list_medium_line_t2_g2_g1

0x1d06,	// (0x0004a1c5) list_medium_line_t2_g2_g2_ParamLimits

0x1d06,	// (0x0004a1c5) list_medium_line_t2_g2_g2

0x0001,

0xfa59,	// (0x00057f18) list_medium_line_t2_g2_g_ParamLimits

0xfa59,	// (0x00057f18) list_medium_line_t2_g2_g

0xb243,	// (0x00053702) list_medium_line_t2_g2_t1_ParamLimits

0xb243,	// (0x00053702) list_medium_line_t2_g2_t1

0xb25a,	// (0x00053719) list_medium_line_t2_g2_t2_ParamLimits

0xb25a,	// (0x00053719) list_medium_line_t2_g2_t2

0x0001,

0xfa5e,	// (0x00057f1d) list_medium_line_t2_g2_t_ParamLimits

0xfa5e,	// (0x00057f1d) list_medium_line_t2_g2_t

0x202c,	// (0x0004a4eb) aid_sp_fs_list_icon_a_sm

0x2034,	// (0x0004a4f3) aid_sp_fs_list_icon_d

0x203c,	// (0x0004a4fb) aid_sp_fs_text_primary

0x2045,	// (0x0004a504) aid_sp_fs_text_secondary

0x204e,	// (0x0004a50d) list_medium_line

0x204e,	// (0x0004a50d) list_medium_line_g2

0x204e,	// (0x0004a50d) list_medium_line_g3

0x204e,	// (0x0004a50d) list_medium_line_plain

0x204e,	// (0x0004a50d) list_medium_line_plain_t2

0x204e,	// (0x0004a50d) list_medium_line_plain_t3

0x204e,	// (0x0004a50d) list_medium_line_right_icon

0x204e,	// (0x0004a50d) list_medium_line_right_iconx2

0x204e,	// (0x0004a50d) list_medium_line_t2

0x204e,	// (0x0004a50d) list_medium_line_t2_g2

0x204e,	// (0x0004a50d) list_medium_line_t2_g3

0x204e,	// (0x0004a50d) list_medium_line_t2_right_icon

0x204e,	// (0x0004a50d) list_medium_line_t2_right_iconx2

0x204e,	// (0x0004a50d) list_medium_line_t3

0x204e,	// (0x0004a50d) list_medium_line_t3_g2

0x204e,	// (0x0004a50d) list_medium_line_t3_g3

0x204e,	// (0x0004a50d) list_medium_line_t3_right_iconx2

0x2057,	// (0x0004a516) list_medium_line_t4_g4

0x2060,	// (0x0004a51f) list_medium_line_x2

0x2060,	// (0x0004a51f) list_medium_line_x2_t2_g2

0x2060,	// (0x0004a51f) list_medium_line_x2_t2_g3

0x2060,	// (0x0004a51f) list_medium_line_x2_t2_g4

0x2060,	// (0x0004a51f) list_medium_line_x2_t3

0x2060,	// (0x0004a51f) list_medium_line_x2_t3_g2

0x2060,	// (0x0004a51f) list_medium_line_x2_t3_g3

0x2060,	// (0x0004a51f) list_medium_line_x2_t3_g4

0x2060,	// (0x0004a51f) list_medium_line_x2_t4_g2

0x2060,	// (0x0004a51f) list_medium_line_x2_t4_g4

0x2069,	// (0x0004a528) list_medium_line_x3

0x2069,	// (0x0004a528) list_medium_line_x3_t4

0x2069,	// (0x0004a528) list_medium_line_x3_t4_g4

0x2057,	// (0x0004a516) list_medium_line_x4_t4

0x2057,	// (0x0004a516) list_medium_line_x4_t4_g7

0x2057,	// (0x0004a516) list_medium_line_x4_t5

0x2072,	// (0x0004a531) list_single_fs_dyc_pane_ParamLimits

0x2072,	// (0x0004a531) list_single_fs_dyc_pane

0x0972,	// (0x00048e31) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0972,	// (0x00048e31) list_medium_line_x4_t4_g7_g1

0x2588,	// (0x0004aa47) list_medium_line_x4_t4_g7_g2_ParamLimits

0x2588,	// (0x0004aa47) list_medium_line_x4_t4_g7_g2

0x2594,	// (0x0004aa53) list_medium_line_x4_t4_g7_g3_ParamLimits

0x2594,	// (0x0004aa53) list_medium_line_x4_t4_g7_g3

0x25a3,	// (0x0004aa62) list_medium_line_x4_t4_g7_g4_ParamLimits

0x25a3,	// (0x0004aa62) list_medium_line_x4_t4_g7_g4

0x25af,	// (0x0004aa6e) list_medium_line_x4_t4_g7_g5_ParamLimits

0x25af,	// (0x0004aa6e) list_medium_line_x4_t4_g7_g5

0x25be,	// (0x0004aa7d) list_medium_line_x4_t4_g7_g6_ParamLimits

0x25be,	// (0x0004aa7d) list_medium_line_x4_t4_g7_g6

0x25cd,	// (0x0004aa8c) list_medium_line_x4_t4_g7_g7_ParamLimits

0x25cd,	// (0x0004aa8c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc1c,	// (0x000580db) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc1c,	// (0x000580db) list_medium_line_x4_t4_g7_g

0x25d9,	// (0x0004aa98) list_medium_line_x4_t4_g7_t1_ParamLimits

0x25d9,	// (0x0004aa98) list_medium_line_x4_t4_g7_t1

0x25ee,	// (0x0004aaad) list_medium_line_x4_t4_g7_t2_ParamLimits

0x25ee,	// (0x0004aaad) list_medium_line_x4_t4_g7_t2

0x2603,	// (0x0004aac2) list_medium_line_x4_t4_g7_t3_ParamLimits

0x2603,	// (0x0004aac2) list_medium_line_x4_t4_g7_t3

0x2618,	// (0x0004aad7) list_medium_line_x4_t4_g7_t4_ParamLimits

0x2618,	// (0x0004aad7) list_medium_line_x4_t4_g7_t4

0x262a,	// (0x0004aae9) list_medium_line_x4_t4_g7_t5_ParamLimits

0x262a,	// (0x0004aae9) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc2b,	// (0x000580ea) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc2b,	// (0x000580ea) list_medium_line_x4_t4_g7_t

0x263c,	// (0x0004aafb) list_single_dyc_row_pane_ParamLimits

0x263c,	// (0x0004aafb) list_single_dyc_row_pane

0xc592,	// (0x00054a51) call5_gesture_pane_ParamLimits

0xc592,	// (0x00054a51) call5_gesture_pane

0xc5c8,	// (0x00054a87) call5_windows_pane_ParamLimits

0xc5c8,	// (0x00054a87) call5_windows_pane

0xc640,	// (0x00054aff) call5_swipe_1_pane_cp_ParamLimits

0xc640,	// (0x00054aff) call5_swipe_1_pane_cp

0xc64c,	// (0x00054b0b) call5_swipe_2_pane_cp_ParamLimits

0xc64c,	// (0x00054b0b) call5_swipe_2_pane_cp

0xdba9,	// (0x00056068) call5_image_pane_cp

0xc658,	// (0x00054b17) popup_call5_audio_first_window_cp_ParamLimits

0xc658,	// (0x00054b17) popup_call5_audio_first_window_cp

0x2c0a,	// (0x0004b0c9) call5_swipe_1_pane_g1_cp_ParamLimits

0x2c0a,	// (0x0004b0c9) call5_swipe_1_pane_g1_cp

0x2c4a,	// (0x0004b109) call5_swipe_1_pane_g2_cp

0x2c23,	// (0x0004b0e2) call5_swipe_1_pane_t1_cp_ParamLimits

0x2c23,	// (0x0004b0e2) call5_swipe_1_pane_t1_cp

0x2c0a,	// (0x0004b0c9) call5_swipe_2_pane_g1_cp_ParamLimits

0x2c0a,	// (0x0004b0c9) call5_swipe_2_pane_g1_cp

0x2c52,	// (0x0004b111) call5_swipe_2_pane_g2_cp

0x2c5a,	// (0x0004b119) call5_swipe_2_pane_t1_cp_ParamLimits

0x2c5a,	// (0x0004b119) call5_swipe_2_pane_t1_cp

0xefc2,	// (0x00057481) main_sp_fs_email_pane

0x2c6f,	// (0x0004b12e) main_sp_fs_listscroll_pane_te

0x2c78,	// (0x0004b137) popup_sp_fs_action_menu_pane_ParamLimits

0x2c78,	// (0x0004b137) popup_sp_fs_action_menu_pane

0x0fae,	// (0x0004946d) bg_sp_fs_ctrlbar_pane_g1

0x2cbe,	// (0x0004b17d) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x2cc7,	// (0x0004b186) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x2cd0,	// (0x0004b18f) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x0fae,	// (0x0004946d) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd14,	// (0x000581d3) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x0d8d,	// (0x0004924c) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x0d8d,	// (0x0004924c) bg_sp_fs_ctrlbar_ddmenu_pane

0x2cd9,	// (0x0004b198) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x2cd9,	// (0x0004b198) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x2ce5,	// (0x0004b1a4) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x2ce5,	// (0x0004b1a4) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd1d,	// (0x000581dc) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd1d,	// (0x000581dc) main_sp_fs_ctrlbar_ddmenu_pane_g

0x2cf1,	// (0x0004b1b0) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x2cf1,	// (0x0004b1b0) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x2d0b,	// (0x0004b1ca) list_medium_line_t2_right_icon_g1

0xc666,	// (0x00054b25) list_medium_line_t2_right_icon_t1

0xc676,	// (0x00054b35) list_medium_line_t2_right_icon_t2

0x0001,

0xfd22,	// (0x000581e1) list_medium_line_t2_right_icon_t

0xefb4,	// (0x00057473) bg_sp_fs_ctrlbar_pane_ParamLimits

0xefb4,	// (0x00057473) bg_sp_fs_ctrlbar_pane

0xc6db,	// (0x00054b9a) main_sp_fs_ctrlbar_button_pane_cp01

0xc6e3,	// (0x00054ba2) main_sp_fs_ctrlbar_ddmenu_pane

0x2d4d,	// (0x0004b20c) main_sp_fs_ctrlbar_pane_g1

0x2d59,	// (0x0004b218) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd27,	// (0x000581e6) main_sp_fs_ctrlbar_pane_g

0x2d65,	// (0x0004b224) main_sp_fs_ctrlbar_pane_t1

0xc6ed,	// (0x00054bac) main_sp_fs_ctrlbar_pane

0xc709,	// (0x00054bc8) main_sp_fs_listscroll_pane_te_cp01

0xc71a,	// (0x00054bd9) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc71a,	// (0x00054bd9) popup_sp_fs_action_menu_pane_cp01

0xefc2,	// (0x00057481) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xefc2,	// (0x00057481) bg_sp_fs_highlight_list_pane_cp01

0x2d7a,	// (0x0004b239) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x2d7a,	// (0x0004b239) sp_fs_action_menu_list_gene_pane_g1

0x2d89,	// (0x0004b248) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x2d89,	// (0x0004b248) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd2c,	// (0x000581eb) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd2c,	// (0x000581eb) sp_fs_action_menu_list_gene_pane_g

0x2d96,	// (0x0004b255) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x2d96,	// (0x0004b255) sp_fs_action_menu_list_gene_pane_t1

0x2dae,	// (0x0004b26d) sp_fs_action_menu_list_gene_pane_ParamLimits

0x2dae,	// (0x0004b26d) sp_fs_action_menu_list_gene_pane

0x2dd1,	// (0x0004b290) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x2dd1,	// (0x0004b290) popup_sp_fs_action_menu_bg_pane

0x2ddf,	// (0x0004b29e) sp_fs_action_menu_list_pane_ParamLimits

0x2ddf,	// (0x0004b29e) sp_fs_action_menu_list_pane

0x2e03,	// (0x0004b2c2) sp_fs_scroll_pane_cp01_ParamLimits

0x2e03,	// (0x0004b2c2) sp_fs_scroll_pane_cp01

0xc734,	// (0x00054bf3) list_medium_line_plain_t2_t1

0xc744,	// (0x00054c03) list_medium_line_plain_t2_t2

0x0001,

0xfd31,	// (0x000581f0) list_medium_line_plain_t2_t

0xc752,	// (0x00054c11) list_medium_line_plain_t3_t1

0xc762,	// (0x00054c21) list_medium_line_plain_t3_t2

0xc770,	// (0x00054c2f) list_medium_line_plain_t3_t3

0x0002,

0xfd36,	// (0x000581f5) list_medium_line_plain_t3_t

0x0972,	// (0x00048e31) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0972,	// (0x00048e31) list_medium_line_x2_t2_g2_g1

0x098a,	// (0x00048e49) list_medium_line_x2_t2_g2_g2_ParamLimits

0x098a,	// (0x00048e49) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x0005776c) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x0005776c) list_medium_line_x2_t2_g2_g

0x0abe,	// (0x00048f7d) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0abe,	// (0x00048f7d) list_medium_line_x2_t2_g2_t1

0x09ab,	// (0x00048e6a) list_medium_line_x2_t2_g2_t2_ParamLimits

0x09ab,	// (0x00048e6a) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd3d,	// (0x000581fc) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd3d,	// (0x000581fc) list_medium_line_x2_t2_g2_t

0x0972,	// (0x00048e31) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0972,	// (0x00048e31) list_medium_line_x2_t4_g2_g1

0x2e29,	// (0x0004b2e8) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2e29,	// (0x0004b2e8) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd42,	// (0x00058201) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd42,	// (0x00058201) list_medium_line_x2_t4_g2_g

0xc77e,	// (0x00054c3d) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc77e,	// (0x00054c3d) list_medium_line_x2_t4_g2_t1

0xc798,	// (0x00054c57) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc798,	// (0x00054c57) list_medium_line_x2_t4_g2_t2

0xc7ae,	// (0x00054c6d) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc7ae,	// (0x00054c6d) list_medium_line_x2_t4_g2_t3

0x09ab,	// (0x00048e6a) list_medium_line_x2_t4_g2_t4_ParamLimits

0x09ab,	// (0x00048e6a) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd47,	// (0x00058206) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd47,	// (0x00058206) list_medium_line_x2_t4_g2_t

0x2e3b,	// (0x0004b2fa) list_medium_line_t3_right_iconx2_g1

0x2d0b,	// (0x0004b1ca) list_medium_line_t3_right_iconx2_g2

0xc7c3,	// (0x00054c82) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd50,	// (0x0005820f) list_medium_line_t3_right_iconx2_g

0xc7cd,	// (0x00054c8c) list_medium_line_t3_right_iconx2_t1

0xc7dd,	// (0x00054c9c) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd57,	// (0x00058216) list_medium_line_t3_right_iconx2_t

0x0972,	// (0x00048e31) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0972,	// (0x00048e31) list_medium_line_x3_t4_g4_g1

0x097e,	// (0x00048e3d) list_medium_line_x3_t4_g4_g2_ParamLimits

0x097e,	// (0x00048e3d) list_medium_line_x3_t4_g4_g2

0x0a12,	// (0x00048ed1) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0a12,	// (0x00048ed1) list_medium_line_x3_t4_g4_g3

0x2e43,	// (0x0004b302) list_medium_line_x3_t4_g4_g4_ParamLimits

0x2e43,	// (0x0004b302) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd5c,	// (0x0005821b) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd5c,	// (0x0005821b) list_medium_line_x3_t4_g4_g

0xc7eb,	// (0x00054caa) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc7eb,	// (0x00054caa) list_medium_line_x3_t4_g4_t1

0xc802,	// (0x00054cc1) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc802,	// (0x00054cc1) list_medium_line_x3_t4_g4_t2

0x2e4f,	// (0x0004b30e) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2e4f,	// (0x0004b30e) list_medium_line_x3_t4_g4_t3

0x2e64,	// (0x0004b323) list_medium_line_x3_t4_g4_t4_ParamLimits

0x2e64,	// (0x0004b323) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd65,	// (0x00058224) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd65,	// (0x00058224) list_medium_line_x3_t4_g4_t

0xc817,	// (0x00054cd6) list_single_dyc_row_text_pane_t1_ParamLimits

0xc817,	// (0x00054cd6) list_single_dyc_row_text_pane_t1

0xc854,	// (0x00054d13) list_single_dyc_row_text_pane_t2_ParamLimits

0xc854,	// (0x00054d13) list_single_dyc_row_text_pane_t2

0x2e81,	// (0x0004b340) list_single_dyc_row_text_pane_t3_ParamLimits

0x2e81,	// (0x0004b340) list_single_dyc_row_text_pane_t3

0x0002,

0xfd6e,	// (0x0005822d) list_single_dyc_row_text_pane_t_ParamLimits

0xfd6e,	// (0x0005822d) list_single_dyc_row_text_pane_t

0x2e93,	// (0x0004b352) list_single_dyc_row_pane_g1_ParamLimits

0x2e93,	// (0x0004b352) list_single_dyc_row_pane_g1

0x2e9f,	// (0x0004b35e) list_single_dyc_row_pane_g2_ParamLimits

0x2e9f,	// (0x0004b35e) list_single_dyc_row_pane_g2

0x2eab,	// (0x0004b36a) list_single_dyc_row_pane_g3_ParamLimits

0x2eab,	// (0x0004b36a) list_single_dyc_row_pane_g3

0x2eb7,	// (0x0004b376) list_single_dyc_row_pane_g4_ParamLimits

0x2eb7,	// (0x0004b376) list_single_dyc_row_pane_g4

0x0003,

0xfd75,	// (0x00058234) list_single_dyc_row_pane_g_ParamLimits

0xfd75,	// (0x00058234) list_single_dyc_row_pane_g

0x2ec3,	// (0x0004b382) list_single_dyc_row_text_pane_ParamLimits

0x2ec3,	// (0x0004b382) list_single_dyc_row_text_pane

0x4b56,	// (0x0004d015) bg_sp_fs_scroll_pane

0x2ee2,	// (0x0004b3a1) thumb_sp_fs_scroll_pane

0x1cfa,	// (0x0004a1b9) list_medium_line_g1_ParamLimits

0x1cfa,	// (0x0004a1b9) list_medium_line_g1

0x2eeb,	// (0x0004b3aa) list_medium_line_t1_ParamLimits

0x2eeb,	// (0x0004b3aa) list_medium_line_t1

0x0972,	// (0x00048e31) list_medium_line_x2_g1_ParamLimits

0x0972,	// (0x00048e31) list_medium_line_x2_g1

0x097e,	// (0x00048e3d) list_medium_line_x2_g2_ParamLimits

0x097e,	// (0x00048e3d) list_medium_line_x2_g2

0x0001,

0xfd7e,	// (0x0005823d) list_medium_line_x2_g_ParamLimits

0xfd7e,	// (0x0005823d) list_medium_line_x2_g

0x2f00,	// (0x0004b3bf) list_medium_line_x2_t1_ParamLimits

0x2f00,	// (0x0004b3bf) list_medium_line_x2_t1

0x0972,	// (0x00048e31) list_medium_line_x3_g1_ParamLimits

0x0972,	// (0x00048e31) list_medium_line_x3_g1

0x097e,	// (0x00048e3d) list_medium_line_x3_g2_ParamLimits

0x097e,	// (0x00048e3d) list_medium_line_x3_g2

0x0001,

0xfd7e,	// (0x0005823d) list_medium_line_x3_g_ParamLimits

0xfd7e,	// (0x0005823d) list_medium_line_x3_g

0x2f00,	// (0x0004b3bf) list_medium_line_x3_t1_ParamLimits

0x2f00,	// (0x0004b3bf) list_medium_line_x3_t1

0x2f16,	// (0x0004b3d5) thumb_sp_fs_scroll_pane_g1

0x2f1f,	// (0x0004b3de) thumb_sp_fs_scroll_pane_g2

0x2f28,	// (0x0004b3e7) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd83,	// (0x00058242) thumb_sp_fs_scroll_pane_g

0x2f16,	// (0x0004b3d5) bg_sp_fs_scroll_pane_g1

0x2f1f,	// (0x0004b3de) bg_sp_fs_scroll_pane_g2

0x2f28,	// (0x0004b3e7) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd83,	// (0x00058242) bg_sp_fs_scroll_pane_g

0x0972,	// (0x00048e31) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0972,	// (0x00048e31) list_medium_line_x2_t3_g4_g1

0x0a06,	// (0x00048ec5) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0a06,	// (0x00048ec5) list_medium_line_x2_t3_g4_g2

0x097e,	// (0x00048e3d) list_medium_line_x2_t3_g4_g3_ParamLimits

0x097e,	// (0x00048e3d) list_medium_line_x2_t3_g4_g3

0x098a,	// (0x00048e49) list_medium_line_x2_t3_g4_g4_ParamLimits

0x098a,	// (0x00048e49) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x000577e8) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x000577e8) list_medium_line_x2_t3_g4_g

0xc8ae,	// (0x00054d6d) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc8ae,	// (0x00054d6d) list_medium_line_x2_t3_g4_t1

0xc8c4,	// (0x00054d83) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc8c4,	// (0x00054d83) list_medium_line_x2_t3_g4_t2

0x09ab,	// (0x00048e6a) list_medium_line_x2_t3_g4_t3_ParamLimits

0x09ab,	// (0x00048e6a) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd8a,	// (0x00058249) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd8a,	// (0x00058249) list_medium_line_x2_t3_g4_t

0x1cfa,	// (0x0004a1b9) list_medium_line_g2_g1_ParamLimits

0x1cfa,	// (0x0004a1b9) list_medium_line_g2_g1

0x1d06,	// (0x0004a1c5) list_medium_line_g2_g2_ParamLimits

0x1d06,	// (0x0004a1c5) list_medium_line_g2_g2

0x0001,

0xfa59,	// (0x00057f18) list_medium_line_g2_g_ParamLimits

0xfa59,	// (0x00057f18) list_medium_line_g2_g

0x2f31,	// (0x0004b3f0) list_medium_line_g2_t1_ParamLimits

0x2f31,	// (0x0004b3f0) list_medium_line_g2_t1

0x1cfa,	// (0x0004a1b9) list_medium_line_t3_g2_g1_ParamLimits

0x1cfa,	// (0x0004a1b9) list_medium_line_t3_g2_g1

0x1d06,	// (0x0004a1c5) list_medium_line_t3_g2_g2_ParamLimits

0x1d06,	// (0x0004a1c5) list_medium_line_t3_g2_g2

0x0001,

0xfa59,	// (0x00057f18) list_medium_line_t3_g2_g_ParamLimits

0xfa59,	// (0x00057f18) list_medium_line_t3_g2_g

0xc8dd,	// (0x00054d9c) list_medium_line_t3_g2_t1_ParamLimits

0xc8dd,	// (0x00054d9c) list_medium_line_t3_g2_t1

0xc8f4,	// (0x00054db3) list_medium_line_t3_g2_t2_ParamLimits

0xc8f4,	// (0x00054db3) list_medium_line_t3_g2_t2

0xc909,	// (0x00054dc8) list_medium_line_t3_g2_t3_ParamLimits

0xc909,	// (0x00054dc8) list_medium_line_t3_g2_t3

0x0002,

0xfd91,	// (0x00058250) list_medium_line_t3_g2_t_ParamLimits

0xfd91,	// (0x00058250) list_medium_line_t3_g2_t

0x2d0b,	// (0x0004b1ca) list_medium_line_right_icon_g1

0x2f46,	// (0x0004b405) list_medium_line_right_icon_t1

0x1cfa,	// (0x0004a1b9) list_medium_line_t2_g1_ParamLimits

0x1cfa,	// (0x0004a1b9) list_medium_line_t2_g1

0xc922,	// (0x00054de1) list_medium_line_t2_t1_ParamLimits

0xc922,	// (0x00054de1) list_medium_line_t2_t1

0xc93c,	// (0x00054dfb) list_medium_line_t2_t2_ParamLimits

0xc93c,	// (0x00054dfb) list_medium_line_t2_t2

0x0001,

0xfd98,	// (0x00058257) list_medium_line_t2_t_ParamLimits

0xfd98,	// (0x00058257) list_medium_line_t2_t

0x1cfa,	// (0x0004a1b9) list_medium_line_t3_g1_ParamLimits

0x1cfa,	// (0x0004a1b9) list_medium_line_t3_g1

0xc951,	// (0x00054e10) list_medium_line_t3_t1_ParamLimits

0xc951,	// (0x00054e10) list_medium_line_t3_t1

0xc96b,	// (0x00054e2a) list_medium_line_t3_t2_ParamLimits

0xc96b,	// (0x00054e2a) list_medium_line_t3_t2

0xc981,	// (0x00054e40) list_medium_line_t3_t3_ParamLimits

0xc981,	// (0x00054e40) list_medium_line_t3_t3

0x0002,

0xfd9d,	// (0x0005825c) list_medium_line_t3_t_ParamLimits

0xfd9d,	// (0x0005825c) list_medium_line_t3_t

0x1cfa,	// (0x0004a1b9) list_medium_line_g3_g1_ParamLimits

0x1cfa,	// (0x0004a1b9) list_medium_line_g3_g1

0x2f54,	// (0x0004b413) list_medium_line_g3_g2_ParamLimits

0x2f54,	// (0x0004b413) list_medium_line_g3_g2

0x1d06,	// (0x0004a1c5) list_medium_line_g3_g3_ParamLimits

0x1d06,	// (0x0004a1c5) list_medium_line_g3_g3

0x0002,

0xfda4,	// (0x00058263) list_medium_line_g3_g_ParamLimits

0xfda4,	// (0x00058263) list_medium_line_g3_g

0x2f60,	// (0x0004b41f) list_medium_line_g3_t1_ParamLimits

0x2f60,	// (0x0004b41f) list_medium_line_g3_t1

0x1cfa,	// (0x0004a1b9) list_medium_line_t2_g3_g1_ParamLimits

0x1cfa,	// (0x0004a1b9) list_medium_line_t2_g3_g1

0x2f54,	// (0x0004b413) list_medium_line_t2_g3_g2_ParamLimits

0x2f54,	// (0x0004b413) list_medium_line_t2_g3_g2

0x1d06,	// (0x0004a1c5) list_medium_line_t2_g3_g3_ParamLimits

0x1d06,	// (0x0004a1c5) list_medium_line_t2_g3_g3

0x0002,

0xfda4,	// (0x00058263) list_medium_line_t2_g3_g_ParamLimits

0xfda4,	// (0x00058263) list_medium_line_t2_g3_g

0xc996,	// (0x00054e55) list_medium_line_t2_g3_t1_ParamLimits

0xc996,	// (0x00054e55) list_medium_line_t2_g3_t1

0xc9ad,	// (0x00054e6c) list_medium_line_t2_g3_t2_ParamLimits

0xc9ad,	// (0x00054e6c) list_medium_line_t2_g3_t2

0x0001,

0xfdab,	// (0x0005826a) list_medium_line_t2_g3_t_ParamLimits

0xfdab,	// (0x0005826a) list_medium_line_t2_g3_t

0x1cfa,	// (0x0004a1b9) list_medium_line_t3_g3_g1_ParamLimits

0x1cfa,	// (0x0004a1b9) list_medium_line_t3_g3_g1

0x2f54,	// (0x0004b413) list_medium_line_t3_g3_g2_ParamLimits

0x2f54,	// (0x0004b413) list_medium_line_t3_g3_g2

0x1d06,	// (0x0004a1c5) list_medium_line_t3_g3_g3_ParamLimits

0x1d06,	// (0x0004a1c5) list_medium_line_t3_g3_g3

0x0002,

0xfda4,	// (0x00058263) list_medium_line_t3_g3_g_ParamLimits

0xfda4,	// (0x00058263) list_medium_line_t3_g3_g

0xc9c2,	// (0x00054e81) list_medium_line_t3_g3_t1_ParamLimits

0xc9c2,	// (0x00054e81) list_medium_line_t3_g3_t1

0xc9d6,	// (0x00054e95) list_medium_line_t3_g3_t2_ParamLimits

0xc9d6,	// (0x00054e95) list_medium_line_t3_g3_t2

0xc9e8,	// (0x00054ea7) list_medium_line_t3_g3_t3_ParamLimits

0xc9e8,	// (0x00054ea7) list_medium_line_t3_g3_t3

0x0002,

0xfdb0,	// (0x0005826f) list_medium_line_t3_g3_t_ParamLimits

0xfdb0,	// (0x0005826f) list_medium_line_t3_g3_t

0x2e3b,	// (0x0004b2fa) list_medium_line_right_iconx2_g1

0x2d0b,	// (0x0004b1ca) list_medium_line_right_iconx2_g2

0x0001,

0xfdb7,	// (0x00058276) list_medium_line_right_iconx2_g

0x2f75,	// (0x0004b434) list_medium_line_right_iconx2_t1

0x2e3b,	// (0x0004b2fa) list_medium_line_t2_right_iconx2_g1

0x2d0b,	// (0x0004b1ca) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdb7,	// (0x00058276) list_medium_line_t2_right_iconx2_g

0xc9fc,	// (0x00054ebb) list_medium_line_t2_right_iconx2_t1

0xca0c,	// (0x00054ecb) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdbc,	// (0x0005827b) list_medium_line_t2_right_iconx2_t

0x2f83,	// (0x0004b442) list_medium_line_x4_t4_t1

0xca1a,	// (0x00054ed9) list_medium_line_x4_t4_t2

0xca2a,	// (0x00054ee9) list_medium_line_x4_t4_t3

0xca3a,	// (0x00054ef9) list_medium_line_x4_t4_t4

0x0003,

0xfdc1,	// (0x00058280) list_medium_line_x4_t4_t

0xca73,	// (0x00054f32) tport_appsw_pane_ParamLimits

0xca73,	// (0x00054f32) tport_appsw_pane

0xca81,	// (0x00054f40) tport_contact_pane_ParamLimits

0xca81,	// (0x00054f40) tport_contact_pane

0xca8f,	// (0x00054f4e) tport_listscroll_pane_ParamLimits

0xca8f,	// (0x00054f4e) tport_listscroll_pane

0xca9d,	// (0x00054f5c) cell_tport_appsw_pane_ParamLimits

0xca9d,	// (0x00054f5c) cell_tport_appsw_pane

0x12b7,	// (0x00049776) tport_appsw_pane_g1_ParamLimits

0x12b7,	// (0x00049776) tport_appsw_pane_g1

0x2f91,	// (0x0004b450) tport_contact_pane_g1

0x2f9a,	// (0x0004b459) tport_contact_pane_t1

0x2fa8,	// (0x0004b467) tport_contact_pane_t2

0x0001,

0xfdca,	// (0x00058289) tport_contact_pane_t

0x2fb6,	// (0x0004b475) list_tport_pane

0x2fbf,	// (0x0004b47e) scroll_pane_cp_030

0xcab2,	// (0x00054f71) cell_tport_appsw_pane_g1

0x2fc8,	// (0x0004b487) cell_tport_appsw_pane_t1

0x4b56,	// (0x0004d015) grid_highlight_pane_cp019

0xcaca,	// (0x00054f89) list_tport_double_graphic_pane_ParamLimits

0xcaca,	// (0x00054f89) list_tport_double_graphic_pane

0xefc2,	// (0x00057481) list_highlight_pane_cp023_ParamLimits

0xefc2,	// (0x00057481) list_highlight_pane_cp023

0xcadb,	// (0x00054f9a) list_tport_double_graphic_pane_g1_ParamLimits

0xcadb,	// (0x00054f9a) list_tport_double_graphic_pane_g1

0xcae8,	// (0x00054fa7) list_tport_double_graphic_pane_t1_ParamLimits

0xcae8,	// (0x00054fa7) list_tport_double_graphic_pane_t1

0xcafd,	// (0x00054fbc) list_tport_double_graphic_pane_t2_ParamLimits

0xcafd,	// (0x00054fbc) list_tport_double_graphic_pane_t2

0x0001,

0xfdd6,	// (0x00058295) list_tport_double_graphic_pane_t_ParamLimits

0xfdd6,	// (0x00058295) list_tport_double_graphic_pane_t

0x4b56,	// (0x0004d015) main_cale_note_pane

0xaa40,	// (0x00052eff) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xaa40,	// (0x00052eff) cell_vitu2_function_top_wide_pane_cp01

0xc270,	// (0x0005472f) wait_bar_pane_cp05_ParamLimits

0x4b56,	// (0x0004d015) listscroll_cmail_pane

0x2fde,	// (0x0004b49d) list_cmail_pane

0xcb19,	// (0x00054fd8) list_cmail_body_pane

0xcb2e,	// (0x00054fed) list_single_cmail_header_caption_pane

0xcb48,	// (0x00055007) list_single_cmail_header_detail_pane_ParamLimits

0xcb48,	// (0x00055007) list_single_cmail_header_detail_pane

0xcb77,	// (0x00055036) list_single_cmail_header_caption_pane_t1

0xcb87,	// (0x00055046) list_single_cmail_header_detail_pane_g1_ParamLimits

0xcb87,	// (0x00055046) list_single_cmail_header_detail_pane_g1

0x2ffe,	// (0x0004b4bd) list_single_cmail_header_detail_pane_g2_ParamLimits

0x2ffe,	// (0x0004b4bd) list_single_cmail_header_detail_pane_g2

0x0002,

0xfddb,	// (0x0005829a) list_single_cmail_header_detail_pane_g_ParamLimits

0xfddb,	// (0x0005829a) list_single_cmail_header_detail_pane_g

0x3017,	// (0x0004b4d6) list_single_cmail_header_detail_pane_t1_ParamLimits

0x3017,	// (0x0004b4d6) list_single_cmail_header_detail_pane_t1

0x3055,	// (0x0004b514) list_single_cmail_header_editor_pane_bg_ParamLimits

0x3055,	// (0x0004b514) list_single_cmail_header_editor_pane_bg

0x28c6,	// (0x0004ad85) list_cmail_body_pane_g1

0x3067,	// (0x0004b526) list_cmail_body_pane_t1

0x1a86,	// (0x00049f45) list_single_cmail_header_editor_pane_bg_g1

0x6b15,	// (0x0004efd4) list_single_cmail_header_editor_pane_bg_g1_copy1

0x1a96,	// (0x00049f55) list_single_cmail_header_editor_pane_bg_g1_copy2

0x1a8e,	// (0x00049f4d) list_single_cmail_header_editor_pane_bg_g1_copy3

0x1cf2,	// (0x0004a1b1) list_single_cmail_header_editor_pane_bg_g1_copy4

0x1ab6,	// (0x00049f75) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x1aa6,	// (0x00049f65) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x1aae,	// (0x00049f6d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x6af5,	// (0x0004efb4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xcbc5,	// (0x00055084) calenote_gesture_pane_ParamLimits

0xcbc5,	// (0x00055084) calenote_gesture_pane

0xcbdf,	// (0x0005509e) calenote_window_pane_ParamLimits

0xcbdf,	// (0x0005509e) calenote_window_pane

0x3075,	// (0x0004b534) popup_note_window_cp01

0xcbf7,	// (0x000550b6) calenote_swipe_1_pane_ParamLimits

0xcbf7,	// (0x000550b6) calenote_swipe_1_pane

0xc64c,	// (0x00054b0b) calenote_swipe_2_pane_ParamLimits

0xc64c,	// (0x00054b0b) calenote_swipe_2_pane

0x2c0a,	// (0x0004b0c9) calenote_swipe_1_pane_g1_ParamLimits

0x2c0a,	// (0x0004b0c9) calenote_swipe_1_pane_g1

0x2c17,	// (0x0004b0d6) calenote_swipe_1_pane_g2_ParamLimits

0x2c17,	// (0x0004b0d6) calenote_swipe_1_pane_g2

0x0001,

0xfd0a,	// (0x000581c9) calenote_swipe_1_pane_g_ParamLimits

0xfd0a,	// (0x000581c9) calenote_swipe_1_pane_g

0x3087,	// (0x0004b546) calenote_swipe_1_pane_t1_ParamLimits

0x3087,	// (0x0004b546) calenote_swipe_1_pane_t1

0x2c0a,	// (0x0004b0c9) calenote_swipe_2_pane_g1_ParamLimits

0x2c0a,	// (0x0004b0c9) calenote_swipe_2_pane_g1

0x30a6,	// (0x0004b565) calenote_swipe_2_pane_g2_ParamLimits

0x30a6,	// (0x0004b565) calenote_swipe_2_pane_g2

0x0001,

0xfde7,	// (0x000582a6) calenote_swipe_2_pane_g_ParamLimits

0xfde7,	// (0x000582a6) calenote_swipe_2_pane_g

0x30b2,	// (0x0004b571) calenote_swipe_2_pane_t1_ParamLimits

0x30b2,	// (0x0004b571) calenote_swipe_2_pane_t1

0x4b56,	// (0x0004d015) main_mup_navstr_pane

0x980c,	// (0x00051ccb) main_mup3_pane_t7_ParamLimits

0x980c,	// (0x00051ccb) main_mup3_pane_t7

0xa1db,	// (0x0005269a) main_mp4_pane_g6_ParamLimits

0xa1db,	// (0x0005269a) main_mp4_pane_g6

0xa54b,	// (0x00052a0a) main_image3_pane_t4_ParamLimits

0xa54b,	// (0x00052a0a) main_image3_pane_t4

0xcc0a,	// (0x000550c9) popup_navstr_preview_pane_ParamLimits

0xcc0a,	// (0x000550c9) popup_navstr_preview_pane

0xcc16,	// (0x000550d5) scroll_navstr_pane_ParamLimits

0xcc16,	// (0x000550d5) scroll_navstr_pane

0x4b56,	// (0x0004d015) bg_popup_preview_window_pane_cp04

0x30d9,	// (0x0004b598) popup_navstr_preview_pane_t1

0xcc22,	// (0x000550e1) scroll_navstr_pane_g1_ParamLimits

0xcc22,	// (0x000550e1) scroll_navstr_pane_g1

0xcc2f,	// (0x000550ee) scroll_navstr_pane_t1_ParamLimits

0xcc2f,	// (0x000550ee) scroll_navstr_pane_t1

0x307e,	// (0x0004b53d) bg_button_pane_cp014

0x307e,	// (0x0004b53d) bg_button_pane_cp030

0xc538,	// (0x000549f7) list_double_fisheye_pane_g4_ParamLimits

0xc538,	// (0x000549f7) list_double_fisheye_pane_g4

0xc544,	// (0x00054a03) list_double_fisheye_pane_g5_ParamLimits

0xc544,	// (0x00054a03) list_double_fisheye_pane_g5

0x2fe6,	// (0x0004b4a5) sp_fs_scroll_pane_cp03

0x2d4d,	// (0x0004b20c) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x2d59,	// (0x0004b218) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd27,	// (0x000581e6) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x2d65,	// (0x0004b224) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xcb0f,	// (0x00054fce) sp_fs_scroll_pane_cp02

0x5bf8,	// (0x0004e0b7) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x5bf8,	// (0x0004e0b7) popup_sp_fs_calendar_preview_list_single_pane

0x4b56,	// (0x0004d015) main_cam6_pano_pane

0xefc2,	// (0x00057481) main_mup3_pane_ParamLimits

0x4b56,	// (0x0004d015) main_phacti_pane

0xc141,	// (0x00054600) bg_button_pane_cp11

0xc159,	// (0x00054618) main_mobtv_info_pane_g2_ParamLimits

0xc159,	// (0x00054618) main_mobtv_info_pane_g2

0x0001,

0xfc87,	// (0x00058146) main_mobtv_info_pane_g_ParamLimits

0xfc87,	// (0x00058146) main_mobtv_info_pane_g

0xc30d,	// (0x000547cc) sc_clock_pane_t5_ParamLimits

0xc30d,	// (0x000547cc) sc_clock_pane_t5

0xc3b2,	// (0x00054871) main_radioblah_pane_g1_ParamLimits

0x2b56,	// (0x0004b015) main_radioblah_pane_t3_ParamLimits

0x2b56,	// (0x0004b015) main_radioblah_pane_t3

0x2b6e,	// (0x0004b02d) main_radioblah_pane_t4_ParamLimits

0x2b6e,	// (0x0004b02d) main_radioblah_pane_t4

0xc3d0,	// (0x0005488f) main_radioblah_text_pane_ParamLimits

0xc3d0,	// (0x0005488f) main_radioblah_text_pane

0xc3dd,	// (0x0005489c) main_radioblah_info_pane_g1_ParamLimits

0xc476,	// (0x00054935) main_radioblah_info_pane_t4_ParamLimits

0xc476,	// (0x00054935) main_radioblah_info_pane_t4

0xefc2,	// (0x00057481) main_sp_fs_calendar_pane

0xcc41,	// (0x00055100) main_phacti_pane_g1

0xcc49,	// (0x00055108) phacti_note_pane_ParamLimits

0xcc49,	// (0x00055108) phacti_note_pane

0x30f0,	// (0x0004b5af) phacti_term_pane_ParamLimits

0x30f0,	// (0x0004b5af) phacti_term_pane

0x3105,	// (0x0004b5c4) phacti_note_pane_t1_ParamLimits

0x3105,	// (0x0004b5c4) phacti_note_pane_t1

0x311c,	// (0x0004b5db) phacti_term_pane_g1

0x3124,	// (0x0004b5e3) phacti_term_pane_t1_ParamLimits

0x3124,	// (0x0004b5e3) phacti_term_pane_t1

0x314e,	// (0x0004b60d) popup_sp_fs_calendar_preview_list_single_pane_g1

0x3156,	// (0x0004b615) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdf1,	// (0x000582b0) popup_sp_fs_calendar_preview_list_single_pane_g

0x315e,	// (0x0004b61d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x315e,	// (0x0004b61d) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3174,	// (0x0004b633) aid_popup_sp_fs_bg_corner_pane

0x0fae,	// (0x0004946d) popup_sp_fs_calendar_preview_bg_pane_g1

0x4b56,	// (0x0004d015) popup_sp_fs_calendar_preview_bg_pane

0x317c,	// (0x0004b63b) popup_sp_fs_calendar_preview_list_pane

0xefc2,	// (0x00057481) bg_main_sp_fs_cale_pane_ParamLimits

0xefc2,	// (0x00057481) bg_main_sp_fs_cale_pane

0x3184,	// (0x0004b643) listscroll_cale_mrui_pane_ParamLimits

0x3184,	// (0x0004b643) listscroll_cale_mrui_pane

0x3198,	// (0x0004b657) listscroll_sp_fs_schedule_track_pane

0x31a1,	// (0x0004b660) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x31a1,	// (0x0004b660) main_sp_fs_ctrlbar_pane_cp01

0x31b2,	// (0x0004b671) main_sp_fs_ribbon_pane

0x31ba,	// (0x0004b679) popup_sp_fs_cale_preview_window

0xcc88,	// (0x00055147) list_single_sp_fs_schedule_track_pane_ParamLimits

0xcc88,	// (0x00055147) list_single_sp_fs_schedule_track_pane

0x19ed,	// (0x00049eac) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x19ed,	// (0x00049eac) bg_sp_fs_highlight_list_pane_cp03

0xcc9a,	// (0x00055159) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xcc9a,	// (0x00055159) list_single_sp_fs_schedule_track_pane_g1

0xcca6,	// (0x00055165) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xcca6,	// (0x00055165) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdf6,	// (0x000582b5) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdf6,	// (0x000582b5) list_single_sp_fs_schedule_track_pane_g

0xccb2,	// (0x00055171) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xccb2,	// (0x00055171) list_single_sp_fs_schedule_track_pane_t1

0xccd0,	// (0x0005518f) sp_fs_schedule_track_pane_ParamLimits

0xccd0,	// (0x0005518f) sp_fs_schedule_track_pane

0x31cc,	// (0x0004b68b) sp_fs_schedule_track_pane_g1

0x31d4,	// (0x0004b693) sp_fs_schedule_track_pane_g2

0x31dc,	// (0x0004b69b) sp_fs_schedule_track_pane_g3

0x31e4,	// (0x0004b6a3) sp_fs_schedule_track_pane_g4

0x31ec,	// (0x0004b6ab) sp_fs_schedule_track_pane_g5

0x0004,

0xfdfb,	// (0x000582ba) sp_fs_schedule_track_pane_g

0x1a86,	// (0x00049f45) bg_sp_fs_schedule_viewer_highlight_g1

0x6b15,	// (0x0004efd4) bg_sp_fs_schedule_viewer_highlight_g2

0x1a8e,	// (0x00049f4d) bg_sp_fs_schedule_viewer_highlight_g3

0x1a96,	// (0x00049f55) bg_sp_fs_schedule_viewer_highlight_g4

0x1cf2,	// (0x0004a1b1) bg_sp_fs_schedule_viewer_highlight_g5

0x1aa6,	// (0x00049f65) bg_sp_fs_schedule_viewer_highlight_g6

0x1aae,	// (0x00049f6d) bg_sp_fs_schedule_viewer_highlight_g7

0x1ab6,	// (0x00049f75) bg_sp_fs_schedule_viewer_highlight_g8

0x6af5,	// (0x0004efb4) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe06,	// (0x000582c5) bg_sp_fs_schedule_viewer_highlight_g

0x4b56,	// (0x0004d015) bg_main_sp_fs_ribbon_pane

0xcce2,	// (0x000551a1) main_sp_fs_ribbon_pane_g1

0x31f4,	// (0x0004b6b3) main_sp_fs_ribbon_pane_t1

0xcceb,	// (0x000551aa) main_sp_fs_ribbon_pane_t2

0x3203,	// (0x0004b6c2) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe19,	// (0x000582d8) main_sp_fs_ribbon_pane_t

0x3212,	// (0x0004b6d1) main_sp_fs_ribbon_scheduler_pane

0x321a,	// (0x0004b6d9) bg_main_sp_fs_ribbon_pane_g1

0x3223,	// (0x0004b6e2) bg_main_sp_fs_ribbon_pane_g2

0x322c,	// (0x0004b6eb) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe20,	// (0x000582df) bg_main_sp_fs_ribbon_pane_g

0x3234,	// (0x0004b6f3) main_sp_fs_ribbon_scheduler_pane_g1

0x323d,	// (0x0004b6fc) main_sp_fs_ribbon_scheduler_pane_g2

0x3246,	// (0x0004b705) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe27,	// (0x000582e6) main_sp_fs_ribbon_scheduler_pane_g

0x324f,	// (0x0004b70e) list_cale_mrui_pane

0xccfa,	// (0x000551b9) sp_fs_scroll_pane_cp07_ParamLimits

0xccfa,	// (0x000551b9) sp_fs_scroll_pane_cp07

0xcd10,	// (0x000551cf) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xcd10,	// (0x000551cf) bg_sp_fs_schedule_viewer_highlight

0x3258,	// (0x0004b717) list_single_sp_fs_schedule_track_pane_cp01

0x3260,	// (0x0004b71f) list_sp_fs_schedule_track_pane

0x3268,	// (0x0004b727) sp_fs_scroll_pane_cp06_ParamLimits

0x3268,	// (0x0004b727) sp_fs_scroll_pane_cp06

0x0fae,	// (0x0004946d) bgmain_sp_fs_calendar_pane_g1

0xcd1d,	// (0x000551dc) list_single_cale_mrui_pane_ParamLimits

0xcd1d,	// (0x000551dc) list_single_cale_mrui_pane

0x327a,	// (0x0004b739) list_single_cale_mrui_row_pane_ParamLimits

0x327a,	// (0x0004b739) list_single_cale_mrui_row_pane

0x3287,	// (0x0004b746) list_single_cale_mrui_row_pane_g1_ParamLimits

0x3287,	// (0x0004b746) list_single_cale_mrui_row_pane_g1

0x32bf,	// (0x0004b77e) list_single_cale_mrui_row_pane_t1_ParamLimits

0x32bf,	// (0x0004b77e) list_single_cale_mrui_row_pane_t1

0xcd3f,	// (0x000551fe) list_single_cale_mrui_row_pane_t2_ParamLimits

0xcd3f,	// (0x000551fe) list_single_cale_mrui_row_pane_t2

0x32d1,	// (0x0004b790) list_single_cale_mrui_row_pane_t3_ParamLimits

0x32d1,	// (0x0004b790) list_single_cale_mrui_row_pane_t3

0x3300,	// (0x0004b7bf) list_single_cale_mrui_row_pane_t4_ParamLimits

0x3300,	// (0x0004b7bf) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe33,	// (0x000582f2) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe33,	// (0x000582f2) list_single_cale_mrui_row_pane_t

0xcda5,	// (0x00055264) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xcda5,	// (0x00055264) list_single_cmail_header_editor_pane_bg_cp01

0xcdc9,	// (0x00055288) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xcdc9,	// (0x00055288) list_single_cmail_header_editor_pane_bg_cp02

0xcde5,	// (0x000552a4) main_radioblah_text_pane_t1_ParamLimits

0xcde5,	// (0x000552a4) main_radioblah_text_pane_t1

0x332f,	// (0x0004b7ee) cam6_indi_pane_cp01

0x3337,	// (0x0004b7f6) cam6_mode_pane_cp01

0x333f,	// (0x0004b7fe) cam6_pano_pane

0x3348,	// (0x0004b807) cam6_zoom_pane_cp01

0x3352,	// (0x0004b811) cam6_pano_image_pane

0x335b,	// (0x0004b81a) cam6_pano_pane_g1

0x28c6,	// (0x0004ad85) cam6_pano_pane_g2

0x3364,	// (0x0004b823) cam6_pano_pane_g3

0x336d,	// (0x0004b82c) cam6_pano_pane_g4

0x158e,	// (0x00049a4d) cam6_pano_pane_g5

0x3376,	// (0x0004b835) cam6_pano_pane_g6

0x337e,	// (0x0004b83d) cam6_pano_pane_g7

0x3386,	// (0x0004b845) cam6_pano_pane_g8

0x338f,	// (0x0004b84e) cam6_pano_pane_g9

0x0008,

0xfe3c,	// (0x000582fb) cam6_pano_pane_g

0x4b56,	// (0x0004d015) main_browser_tag_pane

0x30d1,	// (0x0004b590) grid_navstr_albumart_pane

0x339a,	// (0x0004b859) cell_navstr_albumart_pane_ParamLimits

0x339a,	// (0x0004b859) cell_navstr_albumart_pane

0x33b6,	// (0x0004b875) cell_navstr_albumart_pane_g1

0xedcd,	// (0x0005728c) cell_navstr_albumart_pane_g2

0xeddd,	// (0x0005729c) cell_navstr_albumart_pane_g3

0xedd5,	// (0x00057294) cell_navstr_albumart_pane_g4

0x0003,

0xfe4f,	// (0x0005830e) cell_navstr_albumart_pane_g

0xce00,	// (0x000552bf) bt_list_pane_ParamLimits

0xce00,	// (0x000552bf) bt_list_pane

0xce19,	// (0x000552d8) bt_list_pane_t1

0xce28,	// (0x000552e7) bt_list_pane_t2

0x0001,

0xfe58,	// (0x00058317) bt_list_pane_t

0x4b56,	// (0x0004d015) main_cale_prevew_pane

0xce37,	// (0x000552f6) popup_cale_preview_window_ParamLimits

0xce37,	// (0x000552f6) popup_cale_preview_window

0xefc2,	// (0x00057481) bg_popup_preview_window_pane_cp05_ParamLimits

0xefc2,	// (0x00057481) bg_popup_preview_window_pane_cp05

0x33be,	// (0x0004b87d) list_cale_preview_pane_ParamLimits

0x33be,	// (0x0004b87d) list_cale_preview_pane

0xce52,	// (0x00055311) list_double_cale_preview_pane_ParamLimits

0xce52,	// (0x00055311) list_double_cale_preview_pane

0xce66,	// (0x00055325) list_single_cale_preview_pane_ParamLimits

0xce66,	// (0x00055325) list_single_cale_preview_pane

0xce7e,	// (0x0005533d) list_single_cale_preview_pane_g1

0xce86,	// (0x00055345) list_single_cale_preview_pane_t1_ParamLimits

0xce86,	// (0x00055345) list_single_cale_preview_pane_t1

0xce9b,	// (0x0005535a) list_double_cale_preview_pane_g1

0xcea3,	// (0x00055362) list_double_cale_preview_pane_t1_ParamLimits

0xcea3,	// (0x00055362) list_double_cale_preview_pane_t1

0xceb8,	// (0x00055377) list_double_cale_preview_pane_t2_ParamLimits

0xceb8,	// (0x00055377) list_double_cale_preview_pane_t2

0x0001,

0xfe5d,	// (0x0005831c) list_double_cale_preview_pane_t_ParamLimits

0xfe5d,	// (0x0005831c) list_double_cale_preview_pane_t

0x4b56,	// (0x0004d015) main_ezdial_pane

0xefc2,	// (0x00057481) main_sp_fs_email_pane_ParamLimits

0xc684,	// (0x00054b43) cmail_ddmenu_btn01_pane_ParamLimits

0xc684,	// (0x00054b43) cmail_ddmenu_btn01_pane

0xc6a1,	// (0x00054b60) cmail_ddmenu_btn02_pane_ParamLimits

0xc6a1,	// (0x00054b60) cmail_ddmenu_btn02_pane

0xc6bf,	// (0x00054b7e) cmail_ddmenu_btn03_pane_ParamLimits

0xc6bf,	// (0x00054b7e) cmail_ddmenu_btn03_pane

0xc6ed,	// (0x00054bac) main_sp_fs_ctrlbar_pane_ParamLimits

0xc709,	// (0x00054bc8) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcb19,	// (0x00054fd8) list_cmail_body_pane_ParamLimits

0x2ff5,	// (0x0004b4b4) bg_button_pane_cp12

0x300a,	// (0x0004b4c9) list_single_cmail_header_detail_pane_g3_ParamLimits

0x300a,	// (0x0004b4c9) list_single_cmail_header_detail_pane_g3

0xcb9f,	// (0x0005505e) list_single_cmail_header_detail_pane_t2_ParamLimits

0xcb9f,	// (0x0005505e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfde2,	// (0x000582a1) list_single_cmail_header_detail_pane_t_ParamLimits

0xfde2,	// (0x000582a1) list_single_cmail_header_detail_pane_t

0x3139,	// (0x0004b5f8) phacti_term_pane_t2_ParamLimits

0x3139,	// (0x0004b5f8) phacti_term_pane_t2

0x0001,

0xfdec,	// (0x000582ab) phacti_term_pane_t_ParamLimits

0xfdec,	// (0x000582ab) phacti_term_pane_t

0x33ca,	// (0x0004b889) aid_size_list_single_double

0xced0,	// (0x0005538f) popup_ezdial_listscroll_window

0xcef0,	// (0x000553af) popup_number_entry_window_cp01

0xdba9,	// (0x00056068) bg_popup_call_pane_cp09

0x33d6,	// (0x0004b895) ezdial_list_pane

0x33de,	// (0x0004b89d) scroll_pane_cp23

0x0d8d,	// (0x0004924c) bg_button_pane_cp028_ParamLimits

0x0d8d,	// (0x0004924c) bg_button_pane_cp028

0xcefe,	// (0x000553bd) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xcefe,	// (0x000553bd) cmail_ddmenu_btn01_pane_g1

0xcf0e,	// (0x000553cd) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xcf0e,	// (0x000553cd) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe62,	// (0x00058321) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe62,	// (0x00058321) cmail_ddmenu_btn01_pane_g

0x33e6,	// (0x0004b8a5) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x33e6,	// (0x0004b8a5) cmail_ddmenu_btn01_pane_t1

0xefb4,	// (0x00057473) bg_button_pane_cp029_ParamLimits

0xefb4,	// (0x00057473) bg_button_pane_cp029

0xcf0e,	// (0x000553cd) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xcf0e,	// (0x000553cd) cmail_ddmenu_btn02_pane_g1

0xcf26,	// (0x000553e5) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xcf26,	// (0x000553e5) cmail_ddmenu_btn02_pane_t1

0x19ed,	// (0x00049eac) bg_button_pane_cp031_ParamLimits

0x19ed,	// (0x00049eac) bg_button_pane_cp031

0xcf0e,	// (0x000553cd) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xcf0e,	// (0x000553cd) cmail_ddmenu_btn03_pane_g1

0xcf26,	// (0x000553e5) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xcf26,	// (0x000553e5) cmail_ddmenu_btn03_pane_t1

0xa3e6,	// (0x000528a5) cell_dialer2_keypad_pane_t1_ParamLimits

0xa400,	// (0x000528bf) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa400,	// (0x000528bf) cell_dialer2_keypad_pane_t1_copy1

0xbff7,	// (0x000544b6) ncimui_group_button_pane

0xefc2,	// (0x00057481) main_sp_fs_calendar_pane_ParamLimits

0xcb2e,	// (0x00054fed) list_single_cmail_header_caption_pane_ParamLimits

0x2045,	// (0x0004a504) aid_recal_txt_sm_pane

0x4b56,	// (0x0004d015) mian_recal_day_pane

0x31ba,	// (0x0004b679) popup_sp_fs_cale_preview_window_ParamLimits

0x4b56,	// (0x0004d015) list_recal_day_pane

0x3414,	// (0x0004b8d3) list_single_recal_day_pane_ParamLimits

0x3414,	// (0x0004b8d3) list_single_recal_day_pane

0x3426,	// (0x0004b8e5) list_single_recal_day_pane_g1_ParamLimits

0x3426,	// (0x0004b8e5) list_single_recal_day_pane_g1

0x3432,	// (0x0004b8f1) list_single_recal_day_pane_g2_ParamLimits

0x3432,	// (0x0004b8f1) list_single_recal_day_pane_g2

0x343e,	// (0x0004b8fd) list_single_recal_day_pane_g3_ParamLimits

0x343e,	// (0x0004b8fd) list_single_recal_day_pane_g3

0xcf4a,	// (0x00055409) list_single_recal_day_pane_g4_ParamLimits

0xcf4a,	// (0x00055409) list_single_recal_day_pane_g4

0x344a,	// (0x0004b909) list_single_recal_day_pane_g5_ParamLimits

0x344a,	// (0x0004b909) list_single_recal_day_pane_g5

0x3456,	// (0x0004b915) list_single_recal_day_pane_g6_ParamLimits

0x3456,	// (0x0004b915) list_single_recal_day_pane_g6

0x0005,

0xfe71,	// (0x00058330) list_single_recal_day_pane_g_ParamLimits

0xfe71,	// (0x00058330) list_single_recal_day_pane_g

0x3462,	// (0x0004b921) list_single_recal_day_pane_t1

0x3470,	// (0x0004b92f) list_single_recal_day_pane_t2

0x0001,

0xfe7e,	// (0x0005833d) list_single_recal_day_pane_t

0xcf58,	// (0x00055417) ncimui_query_button_pane_ParamLimits

0xcf58,	// (0x00055417) ncimui_query_button_pane

0xcf68,	// (0x00055427) ncimui_query_button_pane_t1_ParamLimits

0xcf68,	// (0x00055427) ncimui_query_button_pane_t1

0x347e,	// (0x0004b93d) ncimui_query_button_pane_t2_ParamLimits

0x347e,	// (0x0004b93d) ncimui_query_button_pane_t2

0x0001,

0xfe83,	// (0x00058342) ncimui_query_button_pane_t_ParamLimits

0xfe83,	// (0x00058342) ncimui_query_button_pane_t

0xcf7b,	// (0x0005543a) query_button_pane_ParamLimits

0xcf7b,	// (0x0005543a) query_button_pane

0x4b56,	// (0x0004d015) bg_button_pane_cp0028

0x3491,	// (0x0004b950) query_button_pane_t1

0x8861,	// (0x00050d20) main_tport_pane_ParamLimits

0xca4a,	// (0x00054f09) bg_popup_window_pane_cp01_ParamLimits

0xca4a,	// (0x00054f09) bg_popup_window_pane_cp01

0xca57,	// (0x00054f16) heading_pane_cp08_ParamLimits

0xca57,	// (0x00054f16) heading_pane_cp08

0xca65,	// (0x00054f24) heading_pane_cp07_ParamLimits

0xca65,	// (0x00054f24) heading_pane_cp07

0xcaba,	// (0x00054f79) cell_tport_appsw_pane_g2

0x0002,

0xfdcf,	// (0x0005828e) cell_tport_appsw_pane_g

0x7f69,	// (0x00050428) input_candi_list_open_g1

0xd6fa,	// (0x00055bb9) list_cale_time_pane_g6_ParamLimits

0xd6fa,	// (0x00055bb9) list_cale_time_pane_g6

0x92c6,	// (0x00051785) aid_size_touch_calib_1_ParamLimits

0x92c6,	// (0x00051785) aid_size_touch_calib_1

0x92d2,	// (0x00051791) aid_size_touch_calib_2_ParamLimits

0x92d2,	// (0x00051791) aid_size_touch_calib_2

0x92e0,	// (0x0005179f) aid_size_touch_calib_3_ParamLimits

0x92e0,	// (0x0005179f) aid_size_touch_calib_3

0x92f0,	// (0x000517af) aid_size_touch_calib_4_ParamLimits

0x92f0,	// (0x000517af) aid_size_touch_calib_4

0x92fe,	// (0x000517bd) main_touch_calib_button_group_pane_ParamLimits

0x92fe,	// (0x000517bd) main_touch_calib_button_group_pane

0x930c,	// (0x000517cb) main_touch_calib_pane_g1_ParamLimits

0x9318,	// (0x000517d7) main_touch_calib_pane_g2_ParamLimits

0x9324,	// (0x000517e3) main_touch_calib_pane_g3_ParamLimits

0x9330,	// (0x000517ef) main_touch_calib_pane_g4_ParamLimits

0xf7b8,	// (0x00057c77) main_touch_calib_pane_g_ParamLimits

0x933c,	// (0x000517fb) main_touch_calib_pane_t1_ParamLimits

0x9353,	// (0x00051812) main_touch_calib_pane_t2_ParamLimits

0x936a,	// (0x00051829) main_touch_calib_pane_t3_ParamLimits

0x937e,	// (0x0005183d) main_touch_calib_pane_t4_ParamLimits

0x9394,	// (0x00051853) main_touch_calib_pane_t5_ParamLimits

0xf7c1,	// (0x00057c80) main_touch_calib_pane_t_ParamLimits

0x1358,	// (0x00049817) list_single_fp_cale_pane_g3_ParamLimits

0x1358,	// (0x00049817) list_single_fp_cale_pane_g3

0xa828,	// (0x00052ce7) bg_button_pane_cp012_ParamLimits

0xa828,	// (0x00052ce7) bg_vkb2_func_pane_cp03_ParamLimits

0xb1ba,	// (0x00053679) cell_vitu2_function_top_pane_g1_ParamLimits

0xa828,	// (0x00052ce7) bg_vkb2_func_pane_cp04_ParamLimits

0xbfa6,	// (0x00054465) main_ncimui_button_group_pane_ParamLimits

0xbfa6,	// (0x00054465) main_ncimui_button_group_pane

0xbfe5,	// (0x000544a4) main_ncimui_pane_t3_ParamLimits

0xbfe5,	// (0x000544a4) main_ncimui_pane_t3

0x30e7,	// (0x0004b5a6) phacti_button_group_pane

0x33ca,	// (0x0004b889) aid_size_list_single_double_ParamLimits

0xced0,	// (0x0005538f) popup_ezdial_listscroll_window_ParamLimits

0xcef0,	// (0x000553af) popup_number_entry_window_cp01_ParamLimits

0xcf88,	// (0x00055447) phacti_button_pane_ParamLimits

0xcf88,	// (0x00055447) phacti_button_pane

0x4b56,	// (0x0004d015) bg_button_pane_cp14

0x349f,	// (0x0004b95e) phacti_button_pane_t1

0xcf99,	// (0x00055458) main_touch_calib_button_pane_ParamLimits

0xcf99,	// (0x00055458) main_touch_calib_button_pane

0x58b5,	// (0x0004dd74) bg_button_pane_cp18_ParamLimits

0x58b5,	// (0x0004dd74) bg_button_pane_cp18

0x34ad,	// (0x0004b96c) main_touch_calib_button_pane_t1_ParamLimits

0x34ad,	// (0x0004b96c) main_touch_calib_button_pane_t1

0x34c3,	// (0x0004b982) main_touch_calib_button_pane_t2_ParamLimits

0x34c3,	// (0x0004b982) main_touch_calib_button_pane_t2

0x0001,

0xfe88,	// (0x00058347) main_touch_calib_button_pane_t_ParamLimits

0xfe88,	// (0x00058347) main_touch_calib_button_pane_t

0x4b56,	// (0x0004d015) cell_ncimui_button_pane

0x4b56,	// (0x0004d015) bg_button_pane_cp032

0x34e1,	// (0x0004b9a0) cell_ncimui_button_pane_t1

0xa45c,	// (0x0005291b) image3_infobar_pane_ParamLimits

0xa45c,	// (0x0005291b) image3_infobar_pane

0xc32f,	// (0x000547ee) fs_bigclock_status_pane_ParamLimits

0xc32f,	// (0x000547ee) fs_bigclock_status_pane

0xc33c,	// (0x000547fb) main_fs_bigclock_clock_pane_ParamLimits

0xc33c,	// (0x000547fb) main_fs_bigclock_clock_pane

0xc34c,	// (0x0005480b) main_fs_bigclock_indi_pane_ParamLimits

0xc34c,	// (0x0005480b) main_fs_bigclock_indi_pane

0xc37e,	// (0x0005483d) main_fs_bigclock_swipe_pane_ParamLimits

0xc37e,	// (0x0005483d) main_fs_bigclock_swipe_pane

0x4b56,	// (0x0004d015) main_fs_clock_dumped_data

0x29d3,	// (0x0004ae92) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x29d3,	// (0x0004ae92) list_single_fs_bigclock_indicator_pane_g1

0x29f3,	// (0x0004aeb2) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x29f3,	// (0x0004aeb2) list_single_fs_bigclock_indicator_pane_g2

0x2a0d,	// (0x0004aecc) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x2a0d,	// (0x0004aecc) list_single_fs_bigclock_indicator_pane_g3

0x2a29,	// (0x0004aee8) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x2a29,	// (0x0004aee8) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcbb,	// (0x0005817a) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcbb,	// (0x0005817a) list_single_fs_bigclock_indicator_pane_g

0x2a4f,	// (0x0004af0e) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x2a4f,	// (0x0004af0e) list_single_fs_bigclock_indicator_pane_t1

0x2a77,	// (0x0004af36) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x2a77,	// (0x0004af36) list_single_fs_bigclock_indicator_pane_t2

0x2a9f,	// (0x0004af5e) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x2a9f,	// (0x0004af5e) list_single_fs_bigclock_indicator_pane_t3

0x2ac9,	// (0x0004af88) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x2ac9,	// (0x0004af88) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfcc6,	// (0x00058185) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfcc6,	// (0x00058185) list_single_fs_bigclock_indicator_pane_t

0x34ef,	// (0x0004b9ae) image3_infobar_fav_pane_ParamLimits

0x34ef,	// (0x0004b9ae) image3_infobar_fav_pane

0x34ff,	// (0x0004b9be) image3_infobar_loc_pane_ParamLimits

0x34ff,	// (0x0004b9be) image3_infobar_loc_pane

0x3515,	// (0x0004b9d4) image3_infobar_time_pane_ParamLimits

0x3515,	// (0x0004b9d4) image3_infobar_time_pane

0x0fae,	// (0x0004946d) image3_infobar_time_pane_g1

0x3525,	// (0x0004b9e4) image3_infobar_time_pane_t1

0x0fae,	// (0x0004946d) image3_infobar_loc_pane_g1

0x3533,	// (0x0004b9f2) image3_infobar_loc_pane_g2

0x0001,

0xfe8d,	// (0x0005834c) image3_infobar_loc_pane_g

0x353b,	// (0x0004b9fa) image3_infobar_loc_pane_t1

0x0fae,	// (0x0004946d) image3_infobar_fav_pane_g1

0x3549,	// (0x0004ba08) image3_infobar_fav_pane_g2

0x0001,

0xfe92,	// (0x00058351) image3_infobar_fav_pane_g

0x3551,	// (0x0004ba10) fs_bigclock_status_battery_pane

0x355a,	// (0x0004ba19) fs_bigclock_status_signal_pane

0x3563,	// (0x0004ba22) fs_bigclock_status_title_pane

0x356c,	// (0x0004ba2b) fs_bigclock_status_signal_pane_g1

0x3575,	// (0x0004ba34) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe97,	// (0x00058356) fs_bigclock_status_signal_pane_g

0x357d,	// (0x0004ba3c) fs_bigclock_status_battery_pane_g1

0x3586,	// (0x0004ba45) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe9c,	// (0x0005835b) fs_bigclock_status_battery_pane_g

0x358e,	// (0x0004ba4d) fs_bigclock_status_title_pane_t1

0x0fae,	// (0x0004946d) main_fs_bigclock_clock_pane_g1

0x359c,	// (0x0004ba5b) main_fs_bigclock_clock_pane_g2

0x359c,	// (0x0004ba5b) main_fs_bigclock_clock_pane_g3

0x359c,	// (0x0004ba5b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfea1,	// (0x00058360) main_fs_bigclock_clock_pane_g

0x35a8,	// (0x0004ba67) main_fs_bigclock_clock_pane_t1

0x35b6,	// (0x0004ba75) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeaa,	// (0x00058369) main_fs_bigclock_clock_pane_t

0x35c5,	// (0x0004ba84) list_single_fs_bigclock_indicator_pane_ParamLimits

0x35c5,	// (0x0004ba84) list_single_fs_bigclock_indicator_pane

0xcfab,	// (0x0005546a) list_single_fs_bigclock_pane_ParamLimits

0xcfab,	// (0x0005546a) list_single_fs_bigclock_pane

0x35df,	// (0x0004ba9e) main_fs_bigclock_indicator_pane_t1

0x35ee,	// (0x0004baad) list_single_fs_bigclock_pane_g1

0x35f6,	// (0x0004bab5) list_single_fs_bigclock_pane_t1

0x0fae,	// (0x0004946d) main_fs_bigclock_swipe_pane_g1

0x3634,	// (0x0004baf3) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfebb,	// (0x0005837a) main_fs_bigclock_swipe_pane_g

0x363c,	// (0x0004bafb) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x363c,	// (0x0004bafb) main_fs_bigclock_swipe_pane_t1

0x76e1,	// (0x0004fba0) call_type_pane_ParamLimits

0x4b56,	// (0x0004d015) main_btmg_pane

0x32b3,	// (0x0004b772) list_single_cale_mrui_row_pane_g2_ParamLimits

0x32b3,	// (0x0004b772) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe2e,	// (0x000582ed) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe2e,	// (0x000582ed) list_single_cale_mrui_row_pane_g

0x3404,	// (0x0004b8c3) list_recal_vselct_arw_lo_pane

0x340c,	// (0x0004b8cb) list_recal_vselct_arw_up_pane

0x203c,	// (0x0004a4fb) list_recal_vselct_pane

0x3659,	// (0x0004bb18) btmg_button_pane

0xd00e,	// (0x000554cd) main_btmg_pane_g1

0x4b56,	// (0x0004d015) bg_button_pane_cp044

0x3663,	// (0x0004bb22) btmg_button_pane_t1

0xefac,	// (0x0005746b) aid_listscroll_gen

0xefc2,	// (0x00057481) main_cntbar_detail_pane

0x2fd6,	// (0x0004b495) list_cmail_folder_pane

0x2fe6,	// (0x0004b4a5) sp_fs_scroll_pane_cp03_ParamLimits

0xf117,	// (0x000575d6) list_single_fs_dyc_pane_cp01_ParamLimits

0xf117,	// (0x000575d6) list_single_fs_dyc_pane_cp01

0x3671,	// (0x0004bb30) aid_size_cmail_indent

0x367a,	// (0x0004bb39) list_single_dyc_row_pane_cp01

0xd036,	// (0x000554f5) cntbar_detail_list_pane_ParamLimits

0xd036,	// (0x000554f5) cntbar_detail_list_pane

0xd076,	// (0x00055535) main_cntbar_detail_cont_pane_ParamLimits

0xd076,	// (0x00055535) main_cntbar_detail_cont_pane

0x767b,	// (0x0004fb3a) scroll_pane_cp032_ParamLimits

0x767b,	// (0x0004fb3a) scroll_pane_cp032

0xd082,	// (0x00055541) cntbar_detail_list_event_pane_ParamLimits

0xd082,	// (0x00055541) cntbar_detail_list_event_pane

0xd044,	// (0x00055503) cntbar_detail_list_shct_pane

0x6b6d,	// (0x0004f02c) aid_list_gen

0x3683,	// (0x0004bb42) aid_scroll

0x368c,	// (0x0004bb4b) aid_size_touch_scroll_bar

0xd092,	// (0x00055551) aid_list_double

0x369e,	// (0x0004bb5d) aid_list_single

0x20af,	// (0x0004a56e) aid_list_single_lg

0x36a7,	// (0x0004bb66) aid_list_z_g_a_sm

0x36af,	// (0x0004bb6e) aid_list_z_g_d

0x36b7,	// (0x0004bb76) aid_txt_z_prm

0xd09b,	// (0x0005555a) aid_txt_z_prm_cp01

0xd0a9,	// (0x00055568) aid_txt_z_sec

0xd0b7,	// (0x00055576) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd0b7,	// (0x00055576) main_cntbar_detail_cont_pane_g1

0xd0c4,	// (0x00055583) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd0c4,	// (0x00055583) main_cntbar_detail_cont_pane_g2

0x0001,

0xfec0,	// (0x0005837f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfec0,	// (0x0005837f) main_cntbar_detail_cont_pane_g

0x36c5,	// (0x0004bb84) main_cntbar_detail_cont_pane_t1

0x36d3,	// (0x0004bb92) main_cntbar_detail_cont_pane_t2

0x36e1,	// (0x0004bba0) main_cntbar_detail_cont_pane_t3

0x0002,

0xfec5,	// (0x00058384) main_cntbar_detail_cont_pane_t

0xd0d0,	// (0x0005558f) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd0d0,	// (0x0005558f) cell_cntbar_detail_list_shct_pane

0x36ef,	// (0x0004bbae) cntbar_detail_list_shct_pane_g1

0x36f8,	// (0x0004bbb7) cntbar_detail_list_shct_pane_g2

0x0001,

0xfecc,	// (0x0005838b) cntbar_detail_list_shct_pane_g

0xd0e4,	// (0x000555a3) cntbar_detail_list_event_pane_g1_ParamLimits

0xd0e4,	// (0x000555a3) cntbar_detail_list_event_pane_g1

0xd0f0,	// (0x000555af) cntbar_detail_list_event_pane_g2_ParamLimits

0xd0f0,	// (0x000555af) cntbar_detail_list_event_pane_g2

0x0005,

0xfed1,	// (0x00058390) cntbar_detail_list_event_pane_g_ParamLimits

0xfed1,	// (0x00058390) cntbar_detail_list_event_pane_g

0xd15e,	// (0x0005561d) cntbar_detail_list_event_pane_t1_ParamLimits

0xd15e,	// (0x0005561d) cntbar_detail_list_event_pane_t1

0xd173,	// (0x00055632) cntbar_detail_list_event_pane_t2_ParamLimits

0xd173,	// (0x00055632) cntbar_detail_list_event_pane_t2

0x0002,

0xfede,	// (0x0005839d) cntbar_detail_list_event_pane_t_ParamLimits

0xfede,	// (0x0005839d) cntbar_detail_list_event_pane_t

0x0fae,	// (0x0004946d) cell_cntbar_detail_list_shct_pane_g1

0x7a79,	// (0x0004ff38) navi_pane_mv_g3

0xefc2,	// (0x00057481) main_cntbar_detail_pane_ParamLimits

0x4b56,	// (0x0004d015) main_notif_wgt_pane

0xa130,	// (0x000525ef) aid_tch_main_mp4_pane_g4

0xa345,	// (0x00052804) popup_slider_window_cp02

0x33fb,	// (0x0004b8ba) list_recal_day_event_pane

0xd016,	// (0x000554d5) cntbar_detail_btn_pane_ParamLimits

0xd016,	// (0x000554d5) cntbar_detail_btn_pane

0xd026,	// (0x000554e5) cntbar_detail_btn_pane_cp01_ParamLimits

0xd026,	// (0x000554e5) cntbar_detail_btn_pane_cp01

0xd044,	// (0x00055503) cntbar_detail_list_shct_pane_ParamLimits

0xd050,	// (0x0005550f) cntbar_detail_pane_g1_ParamLimits

0xd050,	// (0x0005550f) cntbar_detail_pane_g1

0xd060,	// (0x0005551f) cntbar_detail_pane_t1_ParamLimits

0xd060,	// (0x0005551f) cntbar_detail_pane_t1

0xd0fc,	// (0x000555bb) cntbar_detail_list_event_pane_g3_ParamLimits

0xd0fc,	// (0x000555bb) cntbar_detail_list_event_pane_g3

0xd114,	// (0x000555d3) cntbar_detail_list_event_pane_g4_ParamLimits

0xd114,	// (0x000555d3) cntbar_detail_list_event_pane_g4

0xd12c,	// (0x000555eb) cntbar_detail_list_event_pane_g5_ParamLimits

0xd12c,	// (0x000555eb) cntbar_detail_list_event_pane_g5

0xd144,	// (0x00055603) cntbar_detail_list_event_pane_g6_ParamLimits

0xd144,	// (0x00055603) cntbar_detail_list_event_pane_g6

0xd188,	// (0x00055647) cntbar_detail_list_event_pane_t3_ParamLimits

0xd188,	// (0x00055647) cntbar_detail_list_event_pane_t3

0xd19a,	// (0x00055659) popup_notif_wgt_window_ParamLimits

0xd19a,	// (0x00055659) popup_notif_wgt_window

0xd1aa,	// (0x00055669) popup_submenu_window_cp01_ParamLimits

0xd1aa,	// (0x00055669) popup_submenu_window_cp01

0xdba9,	// (0x00056068) bg_popup_window_pane_cp10

0x3701,	// (0x0004bbc0) listscroll_notif_wgt_pane

0x370b,	// (0x0004bbca) list_notif_wgt_window

0x3714,	// (0x0004bbd3) scroll_pane_cp033

0x371d,	// (0x0004bbdc) list_notif_wgt_row_pane_ParamLimits

0x371d,	// (0x0004bbdc) list_notif_wgt_row_pane

0x3731,	// (0x0004bbf0) aid_size_list_notif_wgt_del

0x373a,	// (0x0004bbf9) list_notif_wgt_row_pane_g1

0x3742,	// (0x0004bc01) list_notif_wgt_row_pane_g2

0x374a,	// (0x0004bc09) list_notif_wgt_row_pane_g3

0x0002,

0xfee5,	// (0x000583a4) list_notif_wgt_row_pane_g

0x3753,	// (0x0004bc12) list_notif_wgt_row_pane_t1

0x3761,	// (0x0004bc20) list_notif_wgt_row_pane_t2

0x376f,	// (0x0004bc2e) list_notif_wgt_row_pane_t3

0x0002,

0xfeec,	// (0x000583ab) list_notif_wgt_row_pane_t

0x1d12,	// (0x0004a1d1) list_recal_day_event_pane_g1

0x377d,	// (0x0004bc3c) list_recal_day_event_pane_t1

0x4b56,	// (0x0004d015) bg_button_pane_cp045

0x378c,	// (0x0004bc4b) cntbar_detail_btn_pane_t1

0xefb4,	// (0x00057473) main_callh_pane_ParamLimits

0xefb4,	// (0x00057473) main_callh_pane

0x4b56,	// (0x0004d015) main_coverflow0_pane

0x4b56,	// (0x0004d015) main_wgtman_pane

0xc396,	// (0x00054855) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc396,	// (0x00054855) main_fs_bigclock_unlock_btn_pane

0xcaaa,	// (0x00054f69) bg_button_pane_cp16

0xcac2,	// (0x00054f81) cell_tport_appsw_pane_g3

0xd1b8,	// (0x00055677) cf0_flow_pane_ParamLimits

0xd1b8,	// (0x00055677) cf0_flow_pane

0x379a,	// (0x0004bc59) listscroll_cf0_pane

0x37a3,	// (0x0004bc62) main_cf0_pane_g1

0xd1c7,	// (0x00055686) main_cf0_pane_t1_ParamLimits

0xd1c7,	// (0x00055686) main_cf0_pane_t1

0xd1db,	// (0x0005569a) main_cf0_pane_t2_ParamLimits

0xd1db,	// (0x0005569a) main_cf0_pane_t2

0x0001,

0xfef3,	// (0x000583b2) main_cf0_pane_t_ParamLimits

0xfef3,	// (0x000583b2) main_cf0_pane_t

0x37ad,	// (0x0004bc6c) scroll_pane_cp11

0xd1ef,	// (0x000556ae) cf0_flow_pane_g1

0xd1f7,	// (0x000556b6) cf0_flow_pane_g2

0x0001,

0xfef8,	// (0x000583b7) cf0_flow_pane_g

0xd1ff,	// (0x000556be) cf0_flow_pane_t1

0x4b56,	// (0x0004d015) main_call6_pane

0x4b56,	// (0x0004d015) main_calllock_pane

0xd20d,	// (0x000556cc) call6_btn_grp_pane_ParamLimits

0xd20d,	// (0x000556cc) call6_btn_grp_pane

0xd21c,	// (0x000556db) call6_pane_g1_ParamLimits

0xd21c,	// (0x000556db) call6_pane_g1

0xd22c,	// (0x000556eb) popup_call6_1st_window_ParamLimits

0xd22c,	// (0x000556eb) popup_call6_1st_window

0xd23a,	// (0x000556f9) popup_call6_2nd_window_ParamLimits

0xd23a,	// (0x000556f9) popup_call6_2nd_window

0xd248,	// (0x00055707) cell_call6_btn_pane_ParamLimits

0xd248,	// (0x00055707) cell_call6_btn_pane

0xdba9,	// (0x00056068) bg_popup_call2_in_pane_cp03

0x37b8,	// (0x0004bc77) popup_call6_1st_window_g1

0x37c0,	// (0x0004bc7f) popup_call6_1st_window_g2

0x37c8,	// (0x0004bc87) popup_call6_1st_window_g3

0x0002,

0xfefd,	// (0x000583bc) popup_call6_1st_window_g

0x37d0,	// (0x0004bc8f) popup_call6_1st_window_t1

0x37df,	// (0x0004bc9e) popup_call6_1st_window_t2

0x37ef,	// (0x0004bcae) popup_call6_1st_window_t3

0x0002,

0xff04,	// (0x000583c3) popup_call6_1st_window_t

0xdba9,	// (0x00056068) bg_popup_call2_in_pane_cp04

0x37b8,	// (0x0004bc77) popup_call6_2nd_window_g1

0x37c0,	// (0x0004bc7f) popup_call6_2nd_window_g2

0x37c8,	// (0x0004bc87) popup_call6_2nd_window_g3

0x0002,

0xfefd,	// (0x000583bc) popup_call6_2nd_window_g

0x37d0,	// (0x0004bc8f) popup_call6_2nd_window_t1

0x4b56,	// (0x0004d015) bg_button_pane_cp15

0x37ff,	// (0x0004bcbe) cell_call6_btn_pane_g1

0x3808,	// (0x0004bcc7) cell_call6_btn_pane_t1

0xd257,	// (0x00055716) listscroll_wgtman_pane_ParamLimits

0xd257,	// (0x00055716) listscroll_wgtman_pane

0xd266,	// (0x00055725) wgtman_btn_pane_ParamLimits

0xd266,	// (0x00055725) wgtman_btn_pane

0xda6f,	// (0x00055f2e) aid_scroll_copy1

0x3817,	// (0x0004bcd6) list_wgtman_pane

0xd274,	// (0x00055733) wgtman_btn_pane_g1_ParamLimits

0xd274,	// (0x00055733) wgtman_btn_pane_g1

0xd280,	// (0x0005573f) wgtman_btn_pane_t1_ParamLimits

0xd280,	// (0x0005573f) wgtman_btn_pane_t1

0x3821,	// (0x0004bce0) wgtman_btn_pane_t2_ParamLimits

0x3821,	// (0x0004bce0) wgtman_btn_pane_t2

0x0001,

0xff0b,	// (0x000583ca) wgtman_btn_pane_t_ParamLimits

0xff0b,	// (0x000583ca) wgtman_btn_pane_t

0x3835,	// (0x0004bcf4) listrow_wgtman_pane_ParamLimits

0x3835,	// (0x0004bcf4) listrow_wgtman_pane

0x3849,	// (0x0004bd08) listrow_wgtman_pane_g1

0xd292,	// (0x00055751) listrow_wgtman_pane_g2

0x0001,

0xff10,	// (0x000583cf) listrow_wgtman_pane_g

0x3852,	// (0x0004bd11) listrow_wgtman_pane_t1

0x3860,	// (0x0004bd1f) listrow_wgtman_pane_t2

0x0001,

0xff15,	// (0x000583d4) listrow_wgtman_pane_t

0x386e,	// (0x0004bd2d) wait_bar_pane_cp09

0x3876,	// (0x0004bd35) main_calllock_btn_pane

0x3880,	// (0x0004bd3f) main_calllock_pane_g1

0x4b56,	// (0x0004d015) bg_button_pane_cp17

0x388c,	// (0x0004bd4b) main_calllock_btn_pane_g1

0x3895,	// (0x0004bd54) main_calllock_btn_pane_t1

0x4b56,	// (0x0004d015) main_dialer3_pane

0x4b56,	// (0x0004d015) main_fmrd2_pane

0x0fae,	// (0x0004946d) main_fs_bigclock_unlock_btn_pane_g1

0x38ac,	// (0x0004bd6b) main_fs_bigclock_unlock_btn_pane_t1

0xd29c,	// (0x0005575b) area_fmrd2_info_pane_ParamLimits

0xd29c,	// (0x0005575b) area_fmrd2_info_pane

0xd2ab,	// (0x0005576a) area_fmrd2_visual_pane_ParamLimits

0xd2ab,	// (0x0005576a) area_fmrd2_visual_pane

0xd2b9,	// (0x00055778) fmrd2_indi_pane_ParamLimits

0xd2b9,	// (0x00055778) fmrd2_indi_pane

0xd2c6,	// (0x00055785) area_fmrd2_visual_pane_g1

0xd2ce,	// (0x0005578d) area_fmrd2_visual_pane_t1

0xd2de,	// (0x0005579d) area_fmrd2_visual_pane_t2

0xd2ee,	// (0x000557ad) area_fmrd2_visual_pane_t3

0x0002,

0xff1f,	// (0x000583de) area_fmrd2_visual_pane_t

0xd2fe,	// (0x000557bd) area_fmrd2_info_pane_g1

0xd306,	// (0x000557c5) area_fmrd2_info_pane_t1

0xd316,	// (0x000557d5) area_fmrd2_info_pane_t2

0xd326,	// (0x000557e5) area_fmrd2_info_pane_t3

0xd336,	// (0x000557f5) area_fmrd2_info_pane_t4

0x0003,

0xff26,	// (0x000583e5) area_fmrd2_info_pane_t

0xd346,	// (0x00055805) fmrd2_indi_pane_t1

0xd356,	// (0x00055815) fmrd2_indi_pane_t2

0xd366,	// (0x00055825) fmrd2_indi_pane_t3

0x0002,

0xff2f,	// (0x000583ee) fmrd2_indi_pane_t

0x2a38,	// (0x0004aef7) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x2a38,	// (0x0004aef7) list_single_fs_bigclock_indicator_pane_g5

0x2ade,	// (0x0004af9d) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x2ade,	// (0x0004af9d) list_single_fs_bigclock_indicator_pane_t5

0xcc5f,	// (0x0005511e) aid_cell_bcale_month_pane_ParamLimits

0xcc5f,	// (0x0005511e) aid_cell_bcale_month_pane

0xcc6b,	// (0x0005512a) bcale_month_pane_ParamLimits

0xcc6b,	// (0x0005512a) bcale_month_pane

0xcc79,	// (0x00055138) bcale_preview_pane_ParamLimits

0xcc79,	// (0x00055138) bcale_preview_pane

0x35f6,	// (0x0004bab5) list_single_fs_bigclock_pane_t1_ParamLimits

0x3610,	// (0x0004bacf) list_single_fs_bigclock_pane_t2_ParamLimits

0x3610,	// (0x0004bacf) list_single_fs_bigclock_pane_t2

0x0001,

0xfeb6,	// (0x00058375) list_single_fs_bigclock_pane_t_ParamLimits

0xfeb6,	// (0x00058375) list_single_fs_bigclock_pane_t

0x38a4,	// (0x0004bd63) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff1a,	// (0x000583d9) main_fs_bigclock_unlock_btn_pane_g

0xd376,	// (0x00055835) aid_dia3_key_size_ParamLimits

0xd376,	// (0x00055835) aid_dia3_key_size

0xd382,	// (0x00055841) aid_dia3_listrow_size_ParamLimits

0xd382,	// (0x00055841) aid_dia3_listrow_size

0xd390,	// (0x0005584f) dia3_keypad_fun_pane_ParamLimits

0xd390,	// (0x0005584f) dia3_keypad_fun_pane

0xd3a0,	// (0x0005585f) dia3_keypad_num_pane_ParamLimits

0xd3a0,	// (0x0005585f) dia3_keypad_num_pane

0xd3b0,	// (0x0005586f) dia3_listscroll_pane_ParamLimits

0xd3b0,	// (0x0005586f) dia3_listscroll_pane

0xd3be,	// (0x0005587d) dia3_numentry_pane_ParamLimits

0xd3be,	// (0x0005587d) dia3_numentry_pane

0xd3cc,	// (0x0005588b) dia3_list_pane

0xd3d7,	// (0x00055896) scroll_pane_cp12

0x4b56,	// (0x0004d015) bg_dia3_numentry_pane

0xd3e2,	// (0x000558a1) dia3_numentry_pane_t1

0xd3f1,	// (0x000558b0) cell_dia3_key_num_pane

0xd3f9,	// (0x000558b8) cell_dia3_key0_fun_pane_ParamLimits

0xd3f9,	// (0x000558b8) cell_dia3_key0_fun_pane

0xd406,	// (0x000558c5) cell_dia3_key1_fun_pane_ParamLimits

0xd406,	// (0x000558c5) cell_dia3_key1_fun_pane

0xd413,	// (0x000558d2) dia3_listrow_pane

0x2750,	// (0x0004ac0f) bg_dia3_numentry_pane_g1

0x4b56,	// (0x0004d015) bg_button_pane_cp21

0xd41c,	// (0x000558db) cell_dia3_key_num_pane_t1

0xd42a,	// (0x000558e9) cell_dia3_key_num_pane_t2

0xd439,	// (0x000558f8) cell_dia3_key_num_pane_t3

0xd448,	// (0x00055907) cell_dia3_key_num_pane_t4

0x0003,

0xff36,	// (0x000583f5) cell_dia3_key_num_pane_t

0x4b56,	// (0x0004d015) bg_button_pane_cp19

0xd457,	// (0x00055916) cell_dia3_key0_fun_pane_g1

0x4b56,	// (0x0004d015) bg_button_pane_cp20

0xd45f,	// (0x0005591e) cell_dia3_key1_fun_pane_g1

0xd467,	// (0x00055926) area_left_week_number_pane

0xd470,	// (0x0005592f) area_top_day_name_pane

0xd479,	// (0x00055938) frame_month_view_pane

0xd483,	// (0x00055942) grid_month_view_pane

0xd48d,	// (0x0005594c) cell_top_day_name_pane_ParamLimits

0xd48d,	// (0x0005594c) cell_top_day_name_pane

0xd4a9,	// (0x00055968) cell_area_left_week_number_pane_ParamLimits

0xd4a9,	// (0x00055968) cell_area_left_week_number_pane

0xd4bd,	// (0x0005597c) cell_month_view_pane_ParamLimits

0xd4bd,	// (0x0005597c) cell_month_view_pane

0xd4dc,	// (0x0005599b) frm_month_g1

0xd4e5,	// (0x000559a4) frm_month_g2

0xd4ef,	// (0x000559ae) frm_month_g3

0xd4f9,	// (0x000559b8) frm_month_g4

0xd503,	// (0x000559c2) frm_month_g5

0xd50d,	// (0x000559cc) frm_month_g6

0xd517,	// (0x000559d6) frm_month_g7

0xd521,	// (0x000559e0) frm_month_g8

0xd52a,	// (0x000559e9) frm_month_g9

0xd533,	// (0x000559f2) frm_month_g10

0xd53c,	// (0x000559fb) frm_month_g11

0xd545,	// (0x00055a04) frm_month_g12

0xd54e,	// (0x00055a0d) frm_month_g13

0xd559,	// (0x00055a18) frm_month_g14

0xd564,	// (0x00055a23) frm_month_g15

0xd56f,	// (0x00055a2e) frm_month_g16

0x000f,

0xff3f,	// (0x000583fe) frm_month_g

0xd57a,	// (0x00055a39) cell_top_day_name_pane_t1

0xd589,	// (0x00055a48) cell_area_left_week_number_pane_g1

0xd57a,	// (0x00055a39) cell_area_left_week_number_pane_t1

0x0fae,	// (0x0004946d) cell_month_view_pane_g1

0xd591,	// (0x00055a50) cell_month_view_pane_t1

0x4b56,	// (0x0004d015) main_fps_pane

0x2d13,	// (0x0004b1d2) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x2d13,	// (0x0004b1d2) cmail_ddmenu_btn02_pane_cp1

0x2d2f,	// (0x0004b1ee) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x2d2f,	// (0x0004b1ee) cmail_ddmenu_btn02_pane_cp2

0xcf1a,	// (0x000553d9) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xcf1a,	// (0x000553d9) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe67,	// (0x00058326) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe67,	// (0x00058326) cmail_ddmenu_btn02_pane_g

0xcf38,	// (0x000553f7) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xcf38,	// (0x000553f7) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe6c,	// (0x0005832b) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe6c,	// (0x0005832b) cmail_ddmenu_btn02_pane_t

0xd5a0,	// (0x00055a5f) fps_text_pane_ParamLimits

0xd5a0,	// (0x00055a5f) fps_text_pane

0xd5ad,	// (0x00055a6c) main_fps_pane_g1_ParamLimits

0xd5ad,	// (0x00055a6c) main_fps_pane_g1

0xd5b9,	// (0x00055a78) wait_bar_pane_cp010_ParamLimits

0xd5b9,	// (0x00055a78) wait_bar_pane_cp010

0xd5c5,	// (0x00055a84) fps_text_pane_t1_ParamLimits

0xd5c5,	// (0x00055a84) fps_text_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small
