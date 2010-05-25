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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0004c5af };

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
0x12a0,	// (0x0004d84f) Screen

0x12ac,	// (0x0004d85b) application_window

0x12f8,	// (0x0004d8a7) area_bottom_pane_ParamLimits

0x12f8,	// (0x0004d8a7) area_bottom_pane

0x1331,	// (0x0004d8e0) area_top_pane_ParamLimits

0x1331,	// (0x0004d8e0) area_top_pane

0x9763,	// (0x00055d12) call_video_uplink_pane_ParamLimits

0x9763,	// (0x00055d12) call_video_uplink_pane

0x13bf,	// (0x0004d96e) main_pane_ParamLimits

0x13bf,	// (0x0004d96e) main_pane

0xc8db,	// (0x00058e8a) context_pane

0x44bc,	// (0x00050a6b) navi_pane

0x44ee,	// (0x00050a9d) popup_cale_events_window_ParamLimits

0x44ee,	// (0x00050a9d) popup_cale_events_window

0xc8ee,	// (0x00058e9d) popup_mup_playback_window

0x4506,	// (0x00050ab5) signal_pane

0xa83e,	// (0x00056ded) main_browser_pane

0xaa33,	// (0x00056fe2) main_burst_pane

0x4224,	// (0x000507d3) main_calc_pane

0xc8c1,	// (0x00058e70) main_cale_day_pane

0x19cf,	// (0x0004df7e) main_cale_month_pane

0xc8c1,	// (0x00058e70) main_cale_week_pane

0xaa33,	// (0x00056fe2) main_call_pane

0xa512,	// (0x00056ac1) main_call_poc_pane

0xaa33,	// (0x00056fe2) main_camera_pane

0xaa33,	// (0x00056fe2) main_chi_dic_pane

0xb224,	// (0x000577d3) main_clock_pane

0xa512,	// (0x00056ac1) main_fmradio_pane

0xaa33,	// (0x00056fe2) main_graph_messa_pane

0xa512,	// (0x00056ac1) main_help_pane

0xa83e,	// (0x00056ded) main_im_pane

0xa76d,	// (0x00056d1c) main_image_pane_ParamLimits

0xa76d,	// (0x00056d1c) main_image_pane

0xa512,	// (0x00056ac1) main_location2_pane

0xaa33,	// (0x00056fe2) main_location_pane

0xa76d,	// (0x00056d1c) main_messa_pane

0xa512,	// (0x00056ac1) main_mp2_pane

0xaa33,	// (0x00056fe2) main_mp_pane

0xa512,	// (0x00056ac1) main_msg_pane

0xa512,	// (0x00056ac1) main_mup_eq_pane

0xa512,	// (0x00056ac1) main_mup_pane

0xa83e,	// (0x00056ded) main_notes_pane

0xa512,	// (0x00056ac1) main_pec_pane

0xa512,	// (0x00056ac1) main_phob_pane

0xa512,	// (0x00056ac1) main_pinb_pane

0xa512,	// (0x00056ac1) main_postcard_pane

0xa512,	// (0x00056ac1) main_qdial_pane

0xaa33,	// (0x00056fe2) main_skin_pane

0xa512,	// (0x00056ac1) main_smil2_pane

0xaa33,	// (0x00056fe2) main_smil_pane

0xaa33,	// (0x00056fe2) main_video_pane

0xaa33,	// (0x00056fe2) main_video_tele_pane

0xa76d,	// (0x00056d1c) main_viewer_pane_ParamLimits

0xa76d,	// (0x00056d1c) main_viewer_pane

0xaa33,	// (0x00056fe2) main_vorec_pane

0x4278,	// (0x00050827) popup_blid_sat_info_window_ParamLimits

0x4278,	// (0x00050827) popup_blid_sat_info_window

0x42d0,	// (0x0005087f) popup_dyc_status_message_window_ParamLimits

0x42d0,	// (0x0005087f) popup_dyc_status_message_window

0x42e8,	// (0x00050897) popup_grid_large_graphic_window_ParamLimits

0x42e8,	// (0x00050897) popup_grid_large_graphic_window

0x4398,	// (0x00050947) popup_loc_request_window_ParamLimits

0x4398,	// (0x00050947) popup_loc_request_window

0x4494,	// (0x00050a43) popup_wml_address_window_ParamLimits

0x4494,	// (0x00050a43) popup_wml_address_window

0x405e,	// (0x0005060d) call_muted_g1

0x3d12,	// (0x000502c1) popup_call_audio_conf_window_ParamLimits

0x3d12,	// (0x000502c1) popup_call_audio_conf_window

0x4072,	// (0x00050621) popup_call_audio_first_window_ParamLimits

0x4072,	// (0x00050621) popup_call_audio_first_window

0x40e8,	// (0x00050697) popup_call_audio_in_window_ParamLimits

0x40e8,	// (0x00050697) popup_call_audio_in_window

0x4124,	// (0x000506d3) popup_call_audio_out_window_ParamLimits

0x4124,	// (0x000506d3) popup_call_audio_out_window

0x415e,	// (0x0005070d) popup_call_audio_second_window_ParamLimits

0x415e,	// (0x0005070d) popup_call_audio_second_window

0x41b4,	// (0x00050763) popup_call_audio_wait_window_ParamLimits

0x41b4,	// (0x00050763) popup_call_audio_wait_window

0x41e9,	// (0x00050798) popup_number_entry_window_ParamLimits

0x41e9,	// (0x00050798) popup_number_entry_window

0x9781,	// (0x00055d30) bg_popup_call_pane_cp05_ParamLimits

0x9781,	// (0x00055d30) bg_popup_call_pane_cp05

0x97a1,	// (0x00055d50) popup_number_entry_window_t1

0x97b4,	// (0x00055d63) popup_number_entry_window_t2

0x97c6,	// (0x00055d75) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0005b679) popup_number_entry_window_t

0x97d8,	// (0x00055d87) text_title_cp2

0x97eb,	// (0x00055d9a) bg_popup_call_pane_cp_ParamLimits

0x97eb,	// (0x00055d9a) bg_popup_call_pane_cp

0x97f9,	// (0x00055da8) call_thumbnail_pane

0x9801,	// (0x00055db0) popup_call_audio_in_window_g1_ParamLimits

0x9801,	// (0x00055db0) popup_call_audio_in_window_g1

0x980d,	// (0x00055dbc) popup_call_audio_in_window_g2_ParamLimits

0x980d,	// (0x00055dbc) popup_call_audio_in_window_g2

0x9819,	// (0x00055dc8) popup_call_audio_in_window_g3_ParamLimits

0x9819,	// (0x00055dc8) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0005b682) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0005b682) popup_call_audio_in_window_g

0x9825,	// (0x00055dd4) popup_call_audio_in_window_t1_ParamLimits

0x9825,	// (0x00055dd4) popup_call_audio_in_window_t1

0x9841,	// (0x00055df0) popup_call_audio_in_window_t2_ParamLimits

0x9841,	// (0x00055df0) popup_call_audio_in_window_t2

0x985d,	// (0x00055e0c) popup_call_audio_in_window_t3_ParamLimits

0x985d,	// (0x00055e0c) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0005b689) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0005b689) popup_call_audio_in_window_t

0x97eb,	// (0x00055d9a) bg_popup_call_pane_cp01_ParamLimits

0x97eb,	// (0x00055d9a) bg_popup_call_pane_cp01

0x97f9,	// (0x00055da8) call_thumbnail_pane_cp02

0x9870,	// (0x00055e1f) call_type_pane_cp022

0x9878,	// (0x00055e27) popup_call_audio_out_window_g1_ParamLimits

0x9878,	// (0x00055e27) popup_call_audio_out_window_g1

0xa208,	// (0x000567b7) popup_call_audio_out_window_g2_ParamLimits

0xa208,	// (0x000567b7) popup_call_audio_out_window_g2

0xa214,	// (0x000567c3) popup_call_audio_out_window_g3_ParamLimits

0xa214,	// (0x000567c3) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0005b690) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0005b690) popup_call_audio_out_window_g

0xa226,	// (0x000567d5) popup_call_audio_out_window_t1_ParamLimits

0xa226,	// (0x000567d5) popup_call_audio_out_window_t1

0xa23e,	// (0x000567ed) popup_call_audio_out_window_t2_ParamLimits

0xa23e,	// (0x000567ed) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0005b697) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0005b697) popup_call_audio_out_window_t

0xa253,	// (0x00056802) bg_popup_call_pane_ParamLimits

0xa253,	// (0x00056802) bg_popup_call_pane

0x157c,	// (0x0004db2b) call_thumbnail_pane_cp_ParamLimits

0x157c,	// (0x0004db2b) call_thumbnail_pane_cp

0xa2d7,	// (0x00056886) call_type_pane_cp01_ParamLimits

0xa2d7,	// (0x00056886) call_type_pane_cp01

0xa31b,	// (0x000568ca) popup_call_audio_first_window_g1_ParamLimits

0xa31b,	// (0x000568ca) popup_call_audio_first_window_g1

0xa367,	// (0x00056916) popup_call_audio_first_window_g2_ParamLimits

0xa367,	// (0x00056916) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0005b69c) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0005b69c) popup_call_audio_first_window_g

0xa3ab,	// (0x0005695a) popup_call_audio_first_window_t1_ParamLimits

0xa3ab,	// (0x0005695a) popup_call_audio_first_window_t1

0xa457,	// (0x00056a06) popup_call_audio_first_window_t4_ParamLimits

0xa457,	// (0x00056a06) popup_call_audio_first_window_t4

0xa4e3,	// (0x00056a92) popup_call_audio_first_window_t5_ParamLimits

0xa4e3,	// (0x00056a92) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0005b6a1) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0005b6a1) popup_call_audio_first_window_t

0xa512,	// (0x00056ac1) bg_popup_call_pane_cp02

0xa51c,	// (0x00056acb) call_type_pane_cp023

0xa524,	// (0x00056ad3) popup_call_audio_wait_window_g1

0xa52c,	// (0x00056adb) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0005b6a8) popup_call_audio_wait_window_g

0xa534,	// (0x00056ae3) popup_call_audio_wait_window_t3

0xa542,	// (0x00056af1) bg_popup_call_pane_cp03_ParamLimits

0xa542,	// (0x00056af1) bg_popup_call_pane_cp03

0xa5a2,	// (0x00056b51) call_thumbnail_pane_cp011_ParamLimits

0xa5a2,	// (0x00056b51) call_thumbnail_pane_cp011

0xa5ae,	// (0x00056b5d) call_type_pane_cp034_ParamLimits

0xa5ae,	// (0x00056b5d) call_type_pane_cp034

0xa5ea,	// (0x00056b99) popup_call_audio_second_window_g1_ParamLimits

0xa5ea,	// (0x00056b99) popup_call_audio_second_window_g1

0xa626,	// (0x00056bd5) popup_call_audio_second_window_g2_ParamLimits

0xa626,	// (0x00056bd5) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0005b6ad) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0005b6ad) popup_call_audio_second_window_g

0xa662,	// (0x00056c11) popup_call_audio_second_window_t1_ParamLimits

0xa662,	// (0x00056c11) popup_call_audio_second_window_t1

0xa6e3,	// (0x00056c92) popup_call_audio_second_window_t2_ParamLimits

0xa6e3,	// (0x00056c92) popup_call_audio_second_window_t2

0xa719,	// (0x00056cc8) popup_call_audio_second_window_t3_ParamLimits

0xa719,	// (0x00056cc8) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0005b6b2) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0005b6b2) popup_call_audio_second_window_t

0xa512,	// (0x00056ac1) bg_popup_call_pane_cp04

0xa74f,	// (0x00056cfe) list_conf_pane

0xa757,	// (0x00056d06) popup_call_audio_conf_window_t1

0xa765,	// (0x00056d14) call_thumbnail_pane_g1

0xa76d,	// (0x00056d1c) bg_pinb_pane_ParamLimits

0xa76d,	// (0x00056d1c) bg_pinb_pane

0xa77b,	// (0x00056d2a) find_pinb_pane

0xa784,	// (0x00056d33) listscroll_pinb_pane_ParamLimits

0xa784,	// (0x00056d33) listscroll_pinb_pane

0xa793,	// (0x00056d42) pinb_bg_pane_g1

0x15a0,	// (0x0004db4f) pinb_bg_pane_g2

0x15ac,	// (0x0004db5b) pinb_bg_pane_g3

0x15b8,	// (0x0004db67) pinb_bg_pane_g4

0x15c4,	// (0x0004db73) pinb_bg_pane_g5

0x15d0,	// (0x0004db7f) pinb_bg_pane_g6

0x15db,	// (0x0004db8a) pinb_bg_pane_g7

0x15e6,	// (0x0004db95) pinb_bg_pane_g8

0x15f1,	// (0x0004dba0) pinb_bg_pane_g9

0x15fb,	// (0x0004dbaa) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0005b6b9) pinb_bg_pane_g

0x1618,	// (0x0004dbc7) grid_pinb_pane

0x1621,	// (0x0004dbd0) list_pinb_pane

0x162a,	// (0x0004dbd9) scroll_pane_cp01_ParamLimits

0x162a,	// (0x0004dbd9) scroll_pane_cp01

0xa79d,	// (0x00056d4c) find_pinb_pane_g1_ParamLimits

0xa79d,	// (0x00056d4c) find_pinb_pane_g1

0xa7b5,	// (0x00056d64) find_pinb_pane_t1

0xa7c7,	// (0x00056d76) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0005b6d3) find_pinb_pane_t

0xa7dc,	// (0x00056d8b) input_focus_pane_cp01_ParamLimits

0xa7dc,	// (0x00056d8b) input_focus_pane_cp01

0x163c,	// (0x0004dbeb) cell_pinb_pane_ParamLimits

0x163c,	// (0x0004dbeb) cell_pinb_pane

0x1667,	// (0x0004dc16) cell_pinb_pane_g1_ParamLimits

0x1667,	// (0x0004dc16) cell_pinb_pane_g1

0xa7e8,	// (0x00056d97) cell_pinb_pane_g2_ParamLimits

0xa7e8,	// (0x00056d97) cell_pinb_pane_g2

0xa7f4,	// (0x00056da3) cell_pinb_pane_g3_ParamLimits

0xa7f4,	// (0x00056da3) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0005b6d8) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0005b6d8) cell_pinb_pane_g

0xa512,	// (0x00056ac1) grid_highlight_pane_cp01

0x167a,	// (0x0004dc29) list_pinb_item_pane_ParamLimits

0x167a,	// (0x0004dc29) list_pinb_item_pane

0xa512,	// (0x00056ac1) list_highlight_pane_cp02

0x168d,	// (0x0004dc3c) list_pinb_item_pane_g1_ParamLimits

0x168d,	// (0x0004dc3c) list_pinb_item_pane_g1

0x169a,	// (0x0004dc49) list_pinb_item_pane_g2_ParamLimits

0x169a,	// (0x0004dc49) list_pinb_item_pane_g2

0x16a6,	// (0x0004dc55) list_pinb_item_pane_g3_ParamLimits

0x16a6,	// (0x0004dc55) list_pinb_item_pane_g3

0x16b7,	// (0x0004dc66) list_pinb_item_pane_g4_ParamLimits

0x16b7,	// (0x0004dc66) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0005b6df) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0005b6df) list_pinb_item_pane_g

0x16c3,	// (0x0004dc72) list_pinb_item_pane_t1_ParamLimits

0x16c3,	// (0x0004dc72) list_pinb_item_pane_t1

0x16f8,	// (0x0004dca7) calc_display_pane

0x1720,	// (0x0004dccf) calc_paper_pane

0x1743,	// (0x0004dcf2) grid_calc_pane

0xa512,	// (0x00056ac1) bg_list_pane_cp01

0x1771,	// (0x0004dd20) clock_g1

0x1779,	// (0x0004dd28) clock_g2

0x0001,

0xf139,	// (0x0005b6e8) clock_g

0x1781,	// (0x0004dd30) clock_t1_ParamLimits

0x1781,	// (0x0004dd30) clock_t1

0x1796,	// (0x0004dd45) clock_t2_ParamLimits

0x1796,	// (0x0004dd45) clock_t2

0x17a8,	// (0x0004dd57) clock_t3_ParamLimits

0x17a8,	// (0x0004dd57) clock_t3

0x17ba,	// (0x0004dd69) clock_t4_ParamLimits

0x17ba,	// (0x0004dd69) clock_t4

0x17cc,	// (0x0004dd7b) clock_t5_ParamLimits

0x17cc,	// (0x0004dd7b) clock_t5

0x17e1,	// (0x0004dd90) clock_t6_ParamLimits

0x17e1,	// (0x0004dd90) clock_t6

0x17f3,	// (0x0004dda2) clock_t7_ParamLimits

0x17f3,	// (0x0004dda2) clock_t7

0x1805,	// (0x0004ddb4) clock_t8_ParamLimits

0x1805,	// (0x0004ddb4) clock_t8

0x1819,	// (0x0004ddc8) clock_t9_ParamLimits

0x1819,	// (0x0004ddc8) clock_t9

0x0008,

0xf13e,	// (0x0005b6ed) clock_t_ParamLimits

0xf13e,	// (0x0005b6ed) clock_t

0xa800,	// (0x00056daf) popup_clock_analogue_window_cp02

0xa800,	// (0x00056daf) popup_clock_digital_window_cp01

0xa808,	// (0x00056db7) listscroll_help_pane

0xa512,	// (0x00056ac1) phob_pre_status_pane

0xa812,	// (0x00056dc1) grid_qdial_pane

0xa76d,	// (0x00056d1c) listscroll_mce_pane

0xa76d,	// (0x00056d1c) bg_notes_pane

0xa81c,	// (0x00056dcb) list_notes_pane

0x182d,	// (0x0004dddc) scroll_pane_cp06

0xa82a,	// (0x00056dd9) bg_calc_paper_pane

0x9892,	// (0x00055e41) list_calc_pane

0xa83e,	// (0x00056ded) bg_calc_display_pane

0x1841,	// (0x0004ddf0) calc_display_pane_t1

0x1853,	// (0x0004de02) calc_display_pane_t2

0x98ac,	// (0x00055e5b) calc_display_pane_t3

0x0002,

0xf151,	// (0x0005b700) calc_display_pane_t

0x1865,	// (0x0004de14) cell_calc_pane_ParamLimits

0x1865,	// (0x0004de14) cell_calc_pane

0xa84a,	// (0x00056df9) bg_calc_paper_pane_g1

0xa856,	// (0x00056e05) bg_calc_paper_pane_g2

0xa862,	// (0x00056e11) bg_calc_paper_pane_g3

0xa86e,	// (0x00056e1d) bg_calc_paper_pane_g4

0xa87a,	// (0x00056e29) bg_calc_paper_pane_g5

0x189c,	// (0x0004de4b) bg_calc_paper_pane_g6

0x18ab,	// (0x0004de5a) bg_calc_paper_pane_g7

0x18ba,	// (0x0004de69) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0005b707) bg_calc_paper_pane_g

0x18cd,	// (0x0004de7c) calc_bg_paper_pane_g9

0x18e0,	// (0x0004de8f) list_calc_item_pane_ParamLimits

0x18e0,	// (0x0004de8f) list_calc_item_pane

0xa886,	// (0x00056e35) list_calc_item_pane_g1

0x98be,	// (0x00055e6d) list_calc_item_pane_t1_ParamLimits

0x98be,	// (0x00055e6d) list_calc_item_pane_t1

0x18f9,	// (0x0004dea8) list_calc_item_pane_t2_ParamLimits

0x18f9,	// (0x0004dea8) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0005b718) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0005b718) list_calc_item_pane_t

0xa893,	// (0x00056e42) cell_calc_pane_g1

0xa89d,	// (0x00056e4c) grid_highlight_pane_cp02

0xa8bf,	// (0x00056e6e) bg_calc_display_pane_g1

0x98d0,	// (0x00055e7f) bg_calc_display_pane_g2

0xa8c8,	// (0x00056e77) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0005b722) bg_calc_display_pane_g

0x192b,	// (0x0004deda) cell_qdial_pane_ParamLimits

0x192b,	// (0x0004deda) cell_qdial_pane

0x193f,	// (0x0004deee) cell_qdial_pane_g1_ParamLimits

0x193f,	// (0x0004deee) cell_qdial_pane_g1

0x1955,	// (0x0004df04) cell_qdial_pane_g2_ParamLimits

0x1955,	// (0x0004df04) cell_qdial_pane_g2

0xa8d1,	// (0x00056e80) cell_qdial_pane_g3_ParamLimits

0xa8d1,	// (0x00056e80) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0005b729) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0005b729) cell_qdial_pane_g

0x197b,	// (0x0004df2a) cell_qdial_pane_t1_ParamLimits

0x197b,	// (0x0004df2a) cell_qdial_pane_t1

0x1993,	// (0x0004df42) cell_qdial_pane_t2_ParamLimits

0x1993,	// (0x0004df42) cell_qdial_pane_t2

0x19a6,	// (0x0004df55) cell_qdial_pane_t3_ParamLimits

0x19a6,	// (0x0004df55) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0005b732) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0005b732) cell_qdial_pane_t

0xa512,	// (0x00056ac1) grid_highlight_pane_cp04

0xa8dd,	// (0x00056e8c) thumbnail_qdial_pane_ParamLimits

0xa8dd,	// (0x00056e8c) thumbnail_qdial_pane

0xa939,	// (0x00056ee8) list_help_pane

0xa942,	// (0x00056ef1) scroll_pane_cp02

0xa94b,	// (0x00056efa) help_list_pane_t1_ParamLimits

0xa94b,	// (0x00056efa) help_list_pane_t1

0x98da,	// (0x00055e89) bg_notes_pane_g2

0x98e2,	// (0x00055e91) bg_notes_pane_g3

0x98ea,	// (0x00055e99) notes_bg_pane_g1

0x98f2,	// (0x00055ea1) notes_bg_pane_g4

0x98fa,	// (0x00055ea9) notes_bg_pane_g5

0x9902,	// (0x00055eb1) notes_bg_pane_g6

0x990a,	// (0x00055eb9) notes_bg_pane_g7

0x9912,	// (0x00055ec1) notes_bg_pane_g8

0x991a,	// (0x00055ec9) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0005b750) notes_bg_pane_g

0x19b9,	// (0x0004df68) list_notes_text_pane_ParamLimits

0x19b9,	// (0x0004df68) list_notes_text_pane

0xa969,	// (0x00056f18) list_notes_text_pane_g1

0x03e3,	// (0x0004c992) list_notes_text_pane_t1

0x19cf,	// (0x0004df7e) listscroll_cale_week_pane

0x19fb,	// (0x0004dfaa) bg_cale_heading_pane

0xa98c,	// (0x00056f3b) bg_cale_pane_cp01

0x1a13,	// (0x0004dfc2) cale_week_corner_pane

0x1a32,	// (0x0004dfe1) cale_week_day_heading_pane

0x1a4f,	// (0x0004dffe) cale_week_scroll_pane_g1

0x1a62,	// (0x0004e011) cale_week_scroll_pane_g2

0x1a7a,	// (0x0004e029) cale_week_scroll_pane_g3

0x1a92,	// (0x0004e041) cale_week_scroll_pane_g4

0x1aaa,	// (0x0004e059) cale_week_scroll_pane_g5

0x1aca,	// (0x0004e079) cale_week_scroll_pane_g6

0x1aea,	// (0x0004e099) cale_week_scroll_pane_g7

0x1b0a,	// (0x0004e0b9) cale_week_scroll_pane_g8

0x1b2e,	// (0x0004e0dd) cale_week_scroll_pane_g9

0x1b46,	// (0x0004e0f5) cale_week_scroll_pane_g10

0x1b5e,	// (0x0004e10d) cale_week_scroll_pane_g11

0x1b76,	// (0x0004e125) cale_week_scroll_pane_g12

0x1b8e,	// (0x0004e13d) cale_week_scroll_pane_g13

0x1b8e,	// (0x0004e13d) cale_week_scroll_pane_g14

0x1b8e,	// (0x0004e13d) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0005b75f) cale_week_scroll_pane_g

0x1bca,	// (0x0004e179) cale_week_time_pane

0x1bee,	// (0x0004e19d) grid_cale_week_pane

0xa9bb,	// (0x00056f6a) scroll_pane_cp08

0x1c14,	// (0x0004e1c3) cell_cale_week_pane_ParamLimits

0x1c14,	// (0x0004e1c3) cell_cale_week_pane

0x1ca2,	// (0x0004e251) cale_week_day_heading_pane_t1

0x1ccc,	// (0x0004e27b) cale_week_day_heading_pane_t2

0x1cfb,	// (0x0004e2aa) cale_week_day_heading_pane_t3

0x1d2a,	// (0x0004e2d9) cale_week_day_heading_pane_t4

0x1d59,	// (0x0004e308) cale_week_day_heading_pane_t5

0x1d90,	// (0x0004e33f) cale_week_day_heading_pane_t6

0x1dc7,	// (0x0004e376) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0005b780) cale_week_day_heading_pane_t

0xa9d8,	// (0x00056f87) bg_cale_side_pane

0x1df1,	// (0x0004e3a0) cale_week_time_pane_t1

0x1e0b,	// (0x0004e3ba) cale_week_time_pane_t2

0x1e25,	// (0x0004e3d4) cale_week_time_pane_t3

0x1e3f,	// (0x0004e3ee) cale_week_time_pane_t4

0x1e59,	// (0x0004e408) cale_week_time_pane_t5

0x1e73,	// (0x0004e422) cale_week_time_pane_t6

0x1e8d,	// (0x0004e43c) cale_week_time_pane_t7

0x1ea7,	// (0x0004e456) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0005b78f) cale_week_time_pane_t

0x1ec7,	// (0x0004e476) cell_cale_week_pane_g2

0x1eeb,	// (0x0004e49a) cell_cale_week_pane_g3_ParamLimits

0x1eeb,	// (0x0004e49a) cell_cale_week_pane_g3

0xa9e6,	// (0x00056f95) grid_highlight_pane_cp07

0xa9ee,	// (0x00056f9d) listscroll_gms_pane

0xa9f8,	// (0x00056fa7) grid_gms_pane

0xaa01,	// (0x00056fb0) listscroll_gms_pane_g1

0xaa09,	// (0x00056fb8) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0005b7a0) listscroll_gms_pane_g

0x1f03,	// (0x0004e4b2) scroll_pane_cp010

0x1f0e,	// (0x0004e4bd) cell_gms_pane_ParamLimits

0x1f0e,	// (0x0004e4bd) cell_gms_pane

0x1f20,	// (0x0004e4cf) cell_gms_pane_g1

0xaa11,	// (0x00056fc0) cell_gms_pane_g2

0xaa19,	// (0x00056fc8) cell_gms_pane_g3

0xaa22,	// (0x00056fd1) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0005b7a5) cell_gms_pane_g

0xaa2b,	// (0x00056fda) grid_highlight_pane_cp09

0x4008,	// (0x000505b7) phob_pre_status_pane_g1

0x4010,	// (0x000505bf) phob_pre_status_pane_g2

0x4018,	// (0x000505c7) phob_pre_status_pane_g3

0x4020,	// (0x000505cf) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x0005bba3) phob_pre_status_pane_g

0x4030,	// (0x000505df) phob_pre_status_pane_t1

0x403e,	// (0x000505ed) phob_pre_status_pane_t2

0x404e,	// (0x000505fd) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x0005bbae) phob_pre_status_pane_t

0xaa33,	// (0x00056fe2) bg_list_pane_cp05

0x1f30,	// (0x0004e4df) grid_vorec_pane

0x1f38,	// (0x0004e4e7) vorec_t1

0x1f46,	// (0x0004e4f5) vorec_t2

0x1f54,	// (0x0004e503) vorec_t3

0x1f62,	// (0x0004e511) vorec_t4

0x96f3,	// (0x00055ca2) vorec_t5

0x9701,	// (0x00055cb0) vorec_t6

0x0004,

0xf1ff,	// (0x0005b7ae) vorec_t

0x970f,	// (0x00055cbe) wait_bar_pane_cp01

0x1f7e,	// (0x0004e52d) cell_vorec_pane_ParamLimits

0x1f7e,	// (0x0004e52d) cell_vorec_pane

0x9922,	// (0x00055ed1) cell_vorec_pane_g1

0xa512,	// (0x00056ac1) grid_highlight_pane_cp05

0x1fa9,	// (0x0004e558) cams_zoom_pane

0x1fb8,	// (0x0004e567) image_vga_pane

0x1fd2,	// (0x0004e581) main_camera_pane_g1

0x1fe4,	// (0x0004e593) main_camera_pane_g2

0x1ff4,	// (0x0004e5a3) main_camera_pane_g3

0x2004,	// (0x0004e5b3) main_camera_pane_g4

0x2014,	// (0x0004e5c3) main_camera_pane_g5

0x2024,	// (0x0004e5d3) main_camera_pane_g6

0x2034,	// (0x0004e5e3) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0005b7b9) main_camera_pane_g

0x2044,	// (0x0004e5f3) main_camera_pane_t1

0x205a,	// (0x0004e609) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0005b7ca) main_camera_pane_t

0x2094,	// (0x0004e643) cams_zoom_pane_cp_ParamLimits

0x2094,	// (0x0004e643) cams_zoom_pane_cp

0x20bc,	// (0x0004e66b) image_cif_pane_ParamLimits

0x20bc,	// (0x0004e66b) image_cif_pane

0x20f7,	// (0x0004e6a6) image_subqcif_pane

0x20ff,	// (0x0004e6ae) main_video_pane_g1_ParamLimits

0x20ff,	// (0x0004e6ae) main_video_pane_g1

0x2123,	// (0x0004e6d2) main_video_pane_g2_ParamLimits

0x2123,	// (0x0004e6d2) main_video_pane_g2

0x2157,	// (0x0004e706) main_video_pane_g3_ParamLimits

0x2157,	// (0x0004e706) main_video_pane_g3

0x2185,	// (0x0004e734) main_video_pane_g4_ParamLimits

0x2185,	// (0x0004e734) main_video_pane_g4

0x21b3,	// (0x0004e762) main_video_pane_g5_ParamLimits

0x21b3,	// (0x0004e762) main_video_pane_g5

0xaa47,	// (0x00056ff6) main_video_pane_g6_ParamLimits

0xaa47,	// (0x00056ff6) main_video_pane_g6

0x0006,

0xf220,	// (0x0005b7cf) main_video_pane_g_ParamLimits

0xf220,	// (0x0005b7cf) main_video_pane_g

0x21dc,	// (0x0004e78b) main_video_pane_t1_ParamLimits

0x21dc,	// (0x0004e78b) main_video_pane_t1

0xaa61,	// (0x00057010) cams_zoom_pane_g1

0xaa6a,	// (0x00057019) cams_zoom_pane_g2

0xaa73,	// (0x00057022) cams_zoom_pane_g3

0xaa7c,	// (0x0005702b) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0005b7de) cams_zoom_pane_g

0x2239,	// (0x0004e7e8) grid_cams_pane

0x2253,	// (0x0004e802) linegrid_cams_pane

0x2266,	// (0x0004e815) cell_cams_pane_ParamLimits

0x2266,	// (0x0004e815) cell_cams_pane

0xaa85,	// (0x00057034) cams_burst_image_pane

0xaa8d,	// (0x0005703c) cell_cams_pane_g1

0xa512,	// (0x00056ac1) grid_highlight_pane_cp03

0xa893,	// (0x00056e42) mp_bg_pane_g1

0xa512,	// (0x00056ac1) bg_list_pane_cp03

0xc7e6,	// (0x00058d95) bg_mp_pane

0xc7ee,	// (0x00058d9d) grid_mp_pane

0xc7f6,	// (0x00058da5) media_player_g1

0xc7fe,	// (0x00058dad) media_player_t1

0xc80c,	// (0x00058dbb) media_player_t2

0xc81a,	// (0x00058dc9) media_player_t3

0xc828,	// (0x00058dd7) media_player_t4

0xc836,	// (0x00058de5) media_player_t5

0xc844,	// (0x00058df3) media_player_t6

0xc852,	// (0x00058e01) media_player_t7

0x0006,

0xf5de,	// (0x0005bb8d) media_player_t

0xc860,	// (0x00058e0f) wait_bar_pane_cp02

0xf5c3,	// (0x0005bb72) main_usb_pane_t

0x3fff,	// (0x000505ae) cell_mp_pane

0xa893,	// (0x00056e42) cell_mp_pane_g1

0xa512,	// (0x00056ac1) grid_highlight_pane_cp06

0xaa95,	// (0x00057044) grid_skin_colour_pane

0xaa9d,	// (0x0005704c) list_highlight_pane_cp03

0x2286,	// (0x0004e835) skin_g1

0xaaa5,	// (0x00057054) skin_t1

0xaab4,	// (0x00057063) skin_t2

0x0001,

0xf264,	// (0x0005b813) skin_t

0x228e,	// (0x0004e83d) cell_skin_colour_pane_ParamLimits

0x228e,	// (0x0004e83d) cell_skin_colour_pane

0xaac2,	// (0x00057071) cell_skin_colour_pane_g1

0x2307,	// (0x0004e8b6) call_video_g1_ParamLimits

0x2307,	// (0x0004e8b6) call_video_g1

0x2323,	// (0x0004e8d2) call_video_g2_ParamLimits

0x2323,	// (0x0004e8d2) call_video_g2

0x0001,

0xf269,	// (0x0005b818) call_video_g_ParamLimits

0xf269,	// (0x0005b818) call_video_g

0x2375,	// (0x0004e924) call_video_uplink_pane_cp1_ParamLimits

0x2375,	// (0x0004e924) call_video_uplink_pane_cp1

0xaad4,	// (0x00057083) call_video_uplink_pane_cp2

0x2414,	// (0x0004e9c3) video_down_crop_pane_ParamLimits

0x2414,	// (0x0004e9c3) video_down_crop_pane

0x24fd,	// (0x0004eaac) video_down_pane_ParamLimits

0x24fd,	// (0x0004eaac) video_down_pane

0xaadc,	// (0x0005708b) video_down_subqcif_pane_ParamLimits

0xaadc,	// (0x0005708b) video_down_subqcif_pane

0xaaf4,	// (0x000570a3) video_down_subqcif_pane_cp_ParamLimits

0xaaf4,	// (0x000570a3) video_down_subqcif_pane_cp

0xab1a,	// (0x000570c9) im_reading_pane_ParamLimits

0xab1a,	// (0x000570c9) im_reading_pane

0x260b,	// (0x0004ebba) im_writing_pane_ParamLimits

0x260b,	// (0x0004ebba) im_writing_pane

0x2621,	// (0x0004ebd0) im_reading_pane_t1

0xab34,	// (0x000570e3) list_im_pane

0xab45,	// (0x000570f4) scroll_pane_cp07

0x265b,	// (0x0004ec0a) im_writing_pane_t1_ParamLimits

0x265b,	// (0x0004ec0a) im_writing_pane_t1

0xab5e,	// (0x0005710d) im_writing_pane_t2_ParamLimits

0xab5e,	// (0x0005710d) im_writing_pane_t2

0x0001,

0xf273,	// (0x0005b822) im_writing_pane_t_ParamLimits

0xf273,	// (0x0005b822) im_writing_pane_t

0xa512,	// (0x00056ac1) input_focus_pane_cp04

0xa512,	// (0x00056ac1) input_focus_pane_cp05

0x2670,	// (0x0004ec1f) list_im_single_pane_ParamLimits

0x2670,	// (0x0004ec1f) list_im_single_pane

0x2685,	// (0x0004ec34) list_single_im_pane_t1

0x3fbf,	// (0x0005056e) blid_accuracy_pane

0x3fc7,	// (0x00050576) blid_compass_pane

0x3fd1,	// (0x00050580) main_location_t1

0x3fe1,	// (0x00050590) main_location_t2

0x3ff1,	// (0x000505a0) main_location_t3

0x0002,

0xf5ed,	// (0x0005bb9c) main_location_t

0xa512,	// (0x00056ac1) aid_levels_location

0xa893,	// (0x00056e42) blid_accuracy_pane_g1

0xa893,	// (0x00056e42) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0005b884) blid_accuracy_pane_g

0xaba6,	// (0x00057155) wml_content_pane

0xabe4,	// (0x00057193) wml_button_pane_ParamLimits

0xabe4,	// (0x00057193) wml_button_pane

0x2694,	// (0x0004ec43) wml_list_single_large_pane_ParamLimits

0x2694,	// (0x0004ec43) wml_list_single_large_pane

0x26a9,	// (0x0004ec58) wml_list_single_medium_pane_ParamLimits

0x26a9,	// (0x0004ec58) wml_list_single_medium_pane

0x26c0,	// (0x0004ec6f) wml_list_single_small_pane_ParamLimits

0x26c0,	// (0x0004ec6f) wml_list_single_small_pane

0xabf8,	// (0x000571a7) wml_selection_box_pane_ParamLimits

0xabf8,	// (0x000571a7) wml_selection_box_pane

0xac0b,	// (0x000571ba) wml_list_single_pane_t1

0xac1a,	// (0x000571c9) wml_list_single_medium_pane_t1

0xac29,	// (0x000571d8) wml_list_single_large_pane_t1

0xac38,	// (0x000571e7) input_focus_pane_cp02_ParamLimits

0xac38,	// (0x000571e7) input_focus_pane_cp02

0xac4b,	// (0x000571fa) wml_selection_box_pane_g1

0xac54,	// (0x00057203) wml_selection_box_pane_t1_ParamLimits

0xac54,	// (0x00057203) wml_selection_box_pane_t1

0xa76d,	// (0x00056d1c) bg_wml_button_pane_ParamLimits

0xa76d,	// (0x00056d1c) bg_wml_button_pane

0xac6c,	// (0x0005721b) wml_button_pane_g1

0xac74,	// (0x00057223) wml_button_pane_t1

0xac6c,	// (0x0005721b) wml_button_bg_pane_g1

0xac84,	// (0x00057233) wml_button_bg_pane_g2

0xac8c,	// (0x0005723b) wml_button_bg_pane_g3

0xac94,	// (0x00057243) wml_button_bg_pane_g4

0xac9c,	// (0x0005724b) wml_button_bg_pane_g5

0xaca4,	// (0x00057253) wml_button_bg_pane_g6

0xacac,	// (0x0005725b) wml_button_bg_pane_g7

0xacb4,	// (0x00057263) wml_button_bg_pane_g8

0xacca,	// (0x00057279) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0005b827) wml_button_bg_pane_g

0x26d9,	// (0x0004ec88) bg_list_pane_cp02

0xacd2,	// (0x00057281) mce_header_pane_ParamLimits

0xacd2,	// (0x00057281) mce_header_pane

0xace8,	// (0x00057297) mce_icon_pane

0xace8,	// (0x00057297) mce_image_pane

0xacf1,	// (0x000572a0) mce_text_pane_ParamLimits

0xacf1,	// (0x000572a0) mce_text_pane

0x26e1,	// (0x0004ec90) scroll_pane_cp03

0xabdc,	// (0x0005718b) scroll_pane_cp04

0xad04,	// (0x000572b3) scroll_pane_cp05_ParamLimits

0xad04,	// (0x000572b3) scroll_pane_cp05

0x26eb,	// (0x0004ec9a) mce_header_field_pane_ParamLimits

0x26eb,	// (0x0004ec9a) mce_header_field_pane

0x2702,	// (0x0004ecb1) mce_header_field_pane_2_ParamLimits

0x2702,	// (0x0004ecb1) mce_header_field_pane_2

0x2718,	// (0x0004ecc7) mce_header_field_pane_3

0x2720,	// (0x0004eccf) list_single_mce_message_pane_ParamLimits

0x2720,	// (0x0004eccf) list_single_mce_message_pane

0x2736,	// (0x0004ece5) list_single_mce_smart_pane_ParamLimits

0x2736,	// (0x0004ece5) list_single_mce_smart_pane

0xad10,	// (0x000572bf) input_focus_pane_cp03

0xad19,	// (0x000572c8) list_header_data_pane

0x2757,	// (0x0004ed06) mce_header_field_pane_t1

0x2767,	// (0x0004ed16) list_single_mce_header_pane_ParamLimits

0x2767,	// (0x0004ed16) list_single_mce_header_pane

0xad21,	// (0x000572d0) list_single_mce_header_pane_t1

0xad30,	// (0x000572df) list_single_mce_message_pane_g1

0xad38,	// (0x000572e7) list_single_mce_message_pane_t1

0x27a1,	// (0x0004ed50) bg_cale_heading_pane_cp01_ParamLimits

0x27a1,	// (0x0004ed50) bg_cale_heading_pane_cp01

0xad46,	// (0x000572f5) bg_cale_pane_cp02_ParamLimits

0xad46,	// (0x000572f5) bg_cale_pane_cp02

0x27db,	// (0x0004ed8a) cale_month_corner_pane

0x27fa,	// (0x0004eda9) cale_month_day_heading_pane_ParamLimits

0x27fa,	// (0x0004eda9) cale_month_day_heading_pane

0x284c,	// (0x0004edfb) cale_month_pane_g1_ParamLimits

0x284c,	// (0x0004edfb) cale_month_pane_g1

0x287b,	// (0x0004ee2a) cale_month_pane_g2_ParamLimits

0x287b,	// (0x0004ee2a) cale_month_pane_g2

0x28ab,	// (0x0004ee5a) cale_month_pane_g3_ParamLimits

0x28ab,	// (0x0004ee5a) cale_month_pane_g3

0x28e7,	// (0x0004ee96) cale_month_pane_g4_ParamLimits

0x28e7,	// (0x0004ee96) cale_month_pane_g4

0x2923,	// (0x0004eed2) cale_month_pane_g5_ParamLimits

0x2923,	// (0x0004eed2) cale_month_pane_g5

0x296b,	// (0x0004ef1a) cale_month_pane_g6_ParamLimits

0x296b,	// (0x0004ef1a) cale_month_pane_g6

0x29b7,	// (0x0004ef66) cale_month_pane_g7_ParamLimits

0x29b7,	// (0x0004ef66) cale_month_pane_g7

0x2a07,	// (0x0004efb6) cale_month_pane_g8_ParamLimits

0x2a07,	// (0x0004efb6) cale_month_pane_g8

0x2a5b,	// (0x0004f00a) cale_month_pane_g9_ParamLimits

0x2a5b,	// (0x0004f00a) cale_month_pane_g9

0x2aad,	// (0x0004f05c) cale_month_pane_g10_ParamLimits

0x2aad,	// (0x0004f05c) cale_month_pane_g10

0x2aff,	// (0x0004f0ae) cale_month_pane_g11_ParamLimits

0x2aff,	// (0x0004f0ae) cale_month_pane_g11

0x2b51,	// (0x0004f100) cale_month_pane_g12_ParamLimits

0x2b51,	// (0x0004f100) cale_month_pane_g12

0x2ba3,	// (0x0004f152) cale_month_pane_g13_ParamLimits

0x2ba3,	// (0x0004f152) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0005b83a) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0005b83a) cale_month_pane_g

0x2bf5,	// (0x0004f1a4) cale_month_week_pane

0x2c19,	// (0x0004f1c8) grid_cale_month_pane_ParamLimits

0x2c19,	// (0x0004f1c8) grid_cale_month_pane

0x2c62,	// (0x0004f211) cale_month_day_heading_pane_t1

0x2ca4,	// (0x0004f253) cale_month_day_heading_pane_t2

0x2cd9,	// (0x0004f288) cale_month_day_heading_pane_t3

0x2d0e,	// (0x0004f2bd) cale_month_day_heading_pane_t4

0x2d4b,	// (0x0004f2fa) cale_month_day_heading_pane_t5

0x2d90,	// (0x0004f33f) cale_month_day_heading_pane_t6

0x2dd5,	// (0x0004f384) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0005b855) cale_month_day_heading_pane_t

0xa9d8,	// (0x00056f87) bg_cale_side_pane_cp01

0x2e22,	// (0x0004f3d1) cale_month_week_pane_t1

0x2e3b,	// (0x0004f3ea) cale_month_week_pane_t2

0x2e54,	// (0x0004f403) cale_month_week_pane_t3

0x2e6d,	// (0x0004f41c) cale_month_week_pane_t4

0x2e86,	// (0x0004f435) cale_month_week_pane_t5

0x2e9f,	// (0x0004f44e) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0005b864) cale_month_week_pane_t

0x2eb8,	// (0x0004f467) cell_cale_month_pane_ParamLimits

0x2eb8,	// (0x0004f467) cell_cale_month_pane

0x992c,	// (0x00055edb) cell_cale_month_pane_g1

0x2fe6,	// (0x0004f595) cell_cale_month_pane_t1_ParamLimits

0x2fe6,	// (0x0004f595) cell_cale_month_pane_t1

0xa9e6,	// (0x00056f95) grid_highlight_pane_cp08

0xa893,	// (0x00056e42) main_smil_g1

0x3012,	// (0x0004f5c1) smil_status_pane

0xad85,	// (0x00057334) smil_text_pane

0xc6c6,	// (0x00058c75) bg_popup_call3_rect_pane_g8

0xc6ce,	// (0x00058c7d) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0005bb1d) bg_popup_call3_rect_pane_g

0xc955,	// (0x00058f04) smil_status_volume_pane_g1

0xad8f,	// (0x0005733e) smil_status_pane_t1

0x9a7e,	// (0x0005602d) volume_smil_pane

0xada6,	// (0x00057355) list_smil_text_pane

0x3027,	// (0x0004f5d6) scroll_pane_cp011

0x3032,	// (0x0004f5e1) smil_text_list_pane_t1_ParamLimits

0x3032,	// (0x0004f5e1) smil_text_list_pane_t1

0x9938,	// (0x00055ee7) aid_volume_smil_ParamLimits

0x9938,	// (0x00055ee7) aid_volume_smil

0xa893,	// (0x00056e42) smil_volume_pane_g1

0xa893,	// (0x00056e42) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0005b884) smil_volume_pane_g

0x19cf,	// (0x0004df7e) listscroll_cale_day_pane

0xadb0,	// (0x0005735f) bg_cale_pane

0xadc8,	// (0x00057377) list_cale_pane

0xadeb,	// (0x0005739a) scroll_pane_cp09

0xadfc,	// (0x000573ab) cale_bg_pane_g1

0xae04,	// (0x000573b3) cale_bg_pane_g2

0xae0c,	// (0x000573bb) cale_bg_pane_g3

0xae14,	// (0x000573c3) cale_bg_pane_g4

0xae1c,	// (0x000573cb) cale_bg_pane_g5

0xae24,	// (0x000573d3) cale_bg_pane_g6

0xae2c,	// (0x000573db) cale_bg_pane_g7

0xae34,	// (0x000573e3) cale_bg_pane_g8

0xae3c,	// (0x000573eb) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0005b889) cale_bg_pane_g

0x307e,	// (0x0004f62d) list_cale_time_pane_ParamLimits

0x307e,	// (0x0004f62d) list_cale_time_pane

0xae44,	// (0x000573f3) list_cale_time_pane_g1_ParamLimits

0xae44,	// (0x000573f3) list_cale_time_pane_g1

0xae50,	// (0x000573ff) list_cale_time_pane_g2_ParamLimits

0xae50,	// (0x000573ff) list_cale_time_pane_g2

0x3094,	// (0x0004f643) list_cale_time_pane_g3_ParamLimits

0x3094,	// (0x0004f643) list_cale_time_pane_g3

0x30a2,	// (0x0004f651) list_cale_time_pane_g4_ParamLimits

0x30a2,	// (0x0004f651) list_cale_time_pane_g4

0x30b0,	// (0x0004f65f) list_cale_time_pane_g5_ParamLimits

0x30b0,	// (0x0004f65f) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0005b89c) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0005b89c) list_cale_time_pane_g

0xae6a,	// (0x00057419) list_cale_time_pane_t1_ParamLimits

0xae6a,	// (0x00057419) list_cale_time_pane_t1

0xae92,	// (0x00057441) list_cale_time_pane_t2_ParamLimits

0xae92,	// (0x00057441) list_cale_time_pane_t2

0x3361,	// (0x0004f910) aid_blid_cardinal_pane

0x339f,	// (0x0004f94e) compass_pane_t4

0xaeba,	// (0x00057469) list_cale_time_pane_t4_ParamLimits

0xaeba,	// (0x00057469) list_cale_time_pane_t4

0x33ad,	// (0x0004f95c) compass_pane_t5

0x33bb,	// (0x0004f96a) compass_pane_t6

0x33c9,	// (0x0004f978) compass_pane_t7

0xb33e,	// (0x000578ed) navi_pane_cc_t1

0xb51b,	// (0x00057aca) aid_phob_thumbnail_center_pane

0x39d5,	// (0x0004ff84) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0005b8a9) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0005b8a9) list_cale_time_pane_t

0x97eb,	// (0x00055d9a) bg_popup_window_pane_cp02_ParamLimits

0x97eb,	// (0x00055d9a) bg_popup_window_pane_cp02

0xaee2,	// (0x00057491) heading_pane_cp01_ParamLimits

0xaee2,	// (0x00057491) heading_pane_cp01

0xaeee,	// (0x0005749d) loc_req_pane_ParamLimits

0xaeee,	// (0x0005749d) loc_req_pane

0xaefe,	// (0x000574ad) loc_type_pane_ParamLimits

0xaefe,	// (0x000574ad) loc_type_pane

0xaf10,	// (0x000574bf) loc_type_pane_t1_ParamLimits

0xaf10,	// (0x000574bf) loc_type_pane_t1

0xaf22,	// (0x000574d1) loc_type_pane_t2_ParamLimits

0xaf22,	// (0x000574d1) loc_type_pane_t2

0xaf34,	// (0x000574e3) loc_type_pane_t3_ParamLimits

0xaf34,	// (0x000574e3) loc_type_pane_t3

0x0002,

0xf301,	// (0x0005b8b0) loc_type_pane_t_ParamLimits

0xf301,	// (0x0005b8b0) loc_type_pane_t

0xaf46,	// (0x000574f5) list_loc_req_pane

0xaf50,	// (0x000574ff) scroll_pane_cp012

0x30be,	// (0x0004f66d) list_single_loc_request_popup_menu_pane_ParamLimits

0x30be,	// (0x0004f66d) list_single_loc_request_popup_menu_pane

0xaf5b,	// (0x0005750a) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf5b,	// (0x0005750a) list_single_loc_request_popup_menu_pane_g1

0xaf67,	// (0x00057516) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf67,	// (0x00057516) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0005b8b7) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0005b8b7) list_single_loc_request_popup_menu_pane_g

0xaf73,	// (0x00057522) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf73,	// (0x00057522) list_single_loc_request_popup_menu_pane_t1

0xa76d,	// (0x00056d1c) bg_popup_window_pane_cp03_ParamLimits

0xa76d,	// (0x00056d1c) bg_popup_window_pane_cp03

0xaf89,	// (0x00057538) heading_loc_req_pane_ParamLimits

0xaf89,	// (0x00057538) heading_loc_req_pane

0x30cb,	// (0x0004f67a) popup_dyc_status_message_window_g1_ParamLimits

0x30cb,	// (0x0004f67a) popup_dyc_status_message_window_g1

0x30df,	// (0x0004f68e) popup_dyc_status_message_window_t1_ParamLimits

0x30df,	// (0x0004f68e) popup_dyc_status_message_window_t1

0x30f4,	// (0x0004f6a3) popup_dyc_status_message_window_t2_ParamLimits

0x30f4,	// (0x0004f6a3) popup_dyc_status_message_window_t2

0x3109,	// (0x0004f6b8) popup_dyc_status_message_window_t3_ParamLimits

0x3109,	// (0x0004f6b8) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0005b8bc) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0005b8bc) popup_dyc_status_message_window_t

0xa512,	// (0x00056ac1) bg_heading_pane_cp01

0xaf95,	// (0x00057544) heading_loc_req_pane_g1

0xaf9d,	// (0x0005754c) heading_loc_req_pane_g2

0xafa5,	// (0x00057554) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0005b8c3) heading_loc_req_pane_g

0xafad,	// (0x0005755c) heading_loc_req_pane_t1

0xafbc,	// (0x0005756b) bg_popup_sub_pane_cp01_ParamLimits

0xafbc,	// (0x0005756b) bg_popup_sub_pane_cp01

0xafca,	// (0x00057579) popup_cale_events_window_g1_ParamLimits

0xafca,	// (0x00057579) popup_cale_events_window_g1

0xafea,	// (0x00057599) popup_cale_events_window_g2_ParamLimits

0xafea,	// (0x00057599) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0005b8f7) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0005b8f7) popup_cale_events_window_g

0xb00a,	// (0x000575b9) popup_cale_events_window_t1_ParamLimits

0xb00a,	// (0x000575b9) popup_cale_events_window_t1

0xb01c,	// (0x000575cb) popup_cale_events_window_t2_ParamLimits

0xb01c,	// (0x000575cb) popup_cale_events_window_t2

0xb05a,	// (0x00057609) popup_cale_events_window_t3_ParamLimits

0xb05a,	// (0x00057609) popup_cale_events_window_t3

0xb094,	// (0x00057643) popup_cale_events_window_t4_ParamLimits

0xb094,	// (0x00057643) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0005b8fc) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0005b8fc) popup_cale_events_window_t

0x3131,	// (0x0004f6e0) call_type_pane

0x3141,	// (0x0004f6f0) popup_call_status_window_g1

0x3155,	// (0x0004f704) popup_call_status_window_g2

0x3169,	// (0x0004f718) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0005b905) popup_call_status_window_g

0xb0ca,	// (0x00057679) call_type_pane_g1

0xb0d3,	// (0x00057682) call_type_pane_g2

0x0001,

0xf35d,	// (0x0005b90c) call_type_pane_g

0xa512,	// (0x00056ac1) bg_popup_sub_pane_cp02

0xb0dc,	// (0x0005768b) listscroll_popup_wml_pane

0xb0e4,	// (0x00057693) list_wml_pane

0xb0ee,	// (0x0005769d) scroll_pane_cp013

0xb0f9,	// (0x000576a8) list_single_graphic_popup_wml_pane_ParamLimits

0xb0f9,	// (0x000576a8) list_single_graphic_popup_wml_pane

0xa893,	// (0x00056e42) list_single_graphic_popup_wml_pane_g1

0xb10d,	// (0x000576bc) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0005b911) list_single_graphic_popup_wml_pane_g

0xb115,	// (0x000576c4) list_single_graphic_popup_wml_pane_t1

0xb12b,	// (0x000576da) aid_call_pane

0xa765,	// (0x00056d14) popup_clock_analogue_window_g1

0xa765,	// (0x00056d14) popup_clock_analogue_window_g2

0x995a,	// (0x00055f09) popup_clock_analogue_window_g3

0x995a,	// (0x00055f09) popup_clock_analogue_window_g4

0xa893,	// (0x00056e42) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0005b916) popup_clock_analogue_window_g

0x9962,	// (0x00055f11) popup_clock_analogue_window_t1

0x9970,	// (0x00055f1f) clock_digital_number_pane_ParamLimits

0x9970,	// (0x00055f1f) clock_digital_number_pane

0x997c,	// (0x00055f2b) clock_digital_number_pane_cp02_ParamLimits

0x997c,	// (0x00055f2b) clock_digital_number_pane_cp02

0x9988,	// (0x00055f37) clock_digital_number_pane_cp03_ParamLimits

0x9988,	// (0x00055f37) clock_digital_number_pane_cp03

0x9994,	// (0x00055f43) clock_digital_number_pane_cp04_ParamLimits

0x9994,	// (0x00055f43) clock_digital_number_pane_cp04

0x99a0,	// (0x00055f4f) clock_digital_separator_pane_ParamLimits

0x99a0,	// (0x00055f4f) clock_digital_separator_pane

0x99ac,	// (0x00055f5b) popup_clock_digital_window_t1

0xa893,	// (0x00056e42) clock_digital_number_pane_g1

0xa893,	// (0x00056e42) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0005b884) clock_digital_number_pane_g

0xa893,	// (0x00056e42) clock_digital_separator_pane_g1

0xa893,	// (0x00056e42) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0005b884) clock_digital_separator_pane_g

0xa512,	// (0x00056ac1) bg_popup_window_pane_cp04

0xb133,	// (0x000576e2) heading_pane_cp03

0xb13b,	// (0x000576ea) listscroll_popup_gms_pane

0xb143,	// (0x000576f2) grid_large_graphic_popup_pane

0xb14d,	// (0x000576fc) listscroll_popup_gms_pane_g1

0xb155,	// (0x00057704) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0005b921) listscroll_popup_gms_pane_g

0xabdc,	// (0x0005718b) scroll_pane_cp014

0x3178,	// (0x0004f727) cell_large_graphic_popup_pane_ParamLimits

0x3178,	// (0x0004f727) cell_large_graphic_popup_pane

0x3190,	// (0x0004f73f) cell_large_graphic_popup_pane_g1_ParamLimits

0x3190,	// (0x0004f73f) cell_large_graphic_popup_pane_g1

0xb15d,	// (0x0005770c) cell_large_graphic_popup_pane_g2_ParamLimits

0xb15d,	// (0x0005770c) cell_large_graphic_popup_pane_g2

0xb169,	// (0x00057718) cell_large_graphic_popup_pane_g3_ParamLimits

0xb169,	// (0x00057718) cell_large_graphic_popup_pane_g3

0xb176,	// (0x00057725) cell_large_graphic_popup_pane_g4_ParamLimits

0xb176,	// (0x00057725) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0005b926) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0005b926) cell_large_graphic_popup_pane_g

0xb186,	// (0x00057735) grid_highlight_pane_cp010

0xa893,	// (0x00056e42) bg_popup_call_pane_g1

0xb190,	// (0x0005773f) list_single_graphic_popup_conf_pane_ParamLimits

0xb190,	// (0x0005773f) list_single_graphic_popup_conf_pane

0xb1a3,	// (0x00057752) list_highlight_pane_cp01

0xb1ac,	// (0x0005775b) list_single_graphic_popup_conf_pane_g1

0xb1b4,	// (0x00057763) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0005b92f) list_single_graphic_popup_conf_pane_g

0xb1bc,	// (0x0005776b) list_single_graphic_popup_conf_pane_t1

0xb1ca,	// (0x00057779) linegrid_cams_pane_g1

0x319c,	// (0x0004f74b) linegrid_cams_pane_g2

0xaa19,	// (0x00056fc8) linegrid_cams_pane_g3

0xb1d3,	// (0x00057782) linegrid_cams_pane_g4

0x31a5,	// (0x0004f754) linegrid_cams_pane_g5

0x31ae,	// (0x0004f75d) linegrid_cams_pane_g6

0xaa22,	// (0x00056fd1) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0005b934) linegrid_cams_pane_g

0xb1dc,	// (0x0005778b) popup_clock_analogue_window

0xb1dc,	// (0x0005778b) popup_clock_digital_window

0xa512,	// (0x00056ac1) popup_phob_thumbnail_window

0xa893,	// (0x00056e42) call_video_uplink_pane_g1

0xb1e5,	// (0x00057794) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0005b943) call_video_uplink_pane_g

0xb1ed,	// (0x0005779c) video_uplink_pane

0xb1f5,	// (0x000577a4) mce_image_pane_g1

0x31b9,	// (0x0004f768) mce_image_pane_g2

0x31c1,	// (0x0004f770) mce_image_pane_g3

0x31c9,	// (0x0004f778) mce_image_pane_g4

0x31d3,	// (0x0004f782) mce_image_pane_g5

0x0004,

0xf399,	// (0x0005b948) mce_image_pane_g

0xb1ff,	// (0x000577ae) control_top_pane_stacon_cp01_ParamLimits

0xb1ff,	// (0x000577ae) control_top_pane_stacon_cp01

0xb213,	// (0x000577c2) uni_indicator_pane_stacon_cp01_ParamLimits

0xb213,	// (0x000577c2) uni_indicator_pane_stacon_cp01

0xb224,	// (0x000577d3) bg_popup_sub_pane_cp03

0x31db,	// (0x0004f78a) chi_dic_find_pane

0x31e3,	// (0x0004f792) listscroll_chi_dic_pane

0x31ec,	// (0x0004f79b) main_pane_chidic_g1

0x31ff,	// (0x0004f7ae) chi_dic_find_pane_t1

0xb22e,	// (0x000577dd) find_chidic_pane

0xb237,	// (0x000577e6) chi_dic_list_pane_ParamLimits

0xb237,	// (0x000577e6) chi_dic_list_pane

0xb248,	// (0x000577f7) scroll_pane_cp020

0x320d,	// (0x0004f7bc) find_chidic_pane_t1

0xa512,	// (0x00056ac1) input_focus_pane_cp06

0x321c,	// (0x0004f7cb) list_chi_dic_pane_ParamLimits

0x321c,	// (0x0004f7cb) list_chi_dic_pane

0x322e,	// (0x0004f7dd) list_chi_dic_pane_t1_ParamLimits

0x322e,	// (0x0004f7dd) list_chi_dic_pane_t1

0xa512,	// (0x00056ac1) list_highlight_pane_cp020

0xb250,	// (0x000577ff) bg_cale_heading_pane_g1

0x3241,	// (0x0004f7f0) bg_cale_heading_pane_g2

0x3249,	// (0x0004f7f8) bg_cale_heading_pane_g3

0x3251,	// (0x0004f800) bg_cale_heading_pane_g4

0x325b,	// (0x0004f80a) bg_cale_heading_pane_g5

0x3265,	// (0x0004f814) bg_cale_heading_pane_g6

0x326d,	// (0x0004f81c) bg_cale_heading_pane_g7

0x3275,	// (0x0004f824) bg_cale_heading_pane_g8

0x327f,	// (0x0004f82e) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0005b953) bg_cale_heading_pane_g

0xb250,	// (0x000577ff) bg_cale_side_pane_g1

0x3289,	// (0x0004f838) bg_cale_side_pane_g2

0x3291,	// (0x0004f840) bg_cale_side_pane_g3

0x3299,	// (0x0004f848) bg_cale_side_pane_g4

0x32a1,	// (0x0004f850) bg_cale_side_pane_g5

0x32a9,	// (0x0004f858) bg_cale_side_pane_g6

0x32b1,	// (0x0004f860) bg_cale_side_pane_g7

0x32b9,	// (0x0004f868) bg_cale_side_pane_g8

0x32c1,	// (0x0004f870) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0005b966) bg_cale_side_pane_g

0x32c9,	// (0x0004f878) popup_call_status_window_ParamLimits

0x32c9,	// (0x0004f878) popup_call_status_window

0xb258,	// (0x00057807) stacon_top_pane

0xb260,	// (0x0005780f) status_pane_ParamLimits

0xb260,	// (0x0005780f) status_pane

0xb275,	// (0x00057824) status_small_pane

0xb27d,	// (0x0005782c) control_pane

0xa512,	// (0x00056ac1) stacon_bottom_pane

0xb285,	// (0x00057834) list_single_mce_smart_pane_t1_ParamLimits

0xb285,	// (0x00057834) list_single_mce_smart_pane_t1

0xb298,	// (0x00057847) list_single_mce_smart_pane_t2_ParamLimits

0xb298,	// (0x00057847) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0005b979) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0005b979) list_single_mce_smart_pane_t

0x3310,	// (0x0004f8bf) compass_pane

0x3319,	// (0x0004f8c8) main_location2_pane_t1

0x332b,	// (0x0004f8da) main_location2_pane_t2

0x333d,	// (0x0004f8ec) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0005b97e) main_location2_pane_t

0xb2b7,	// (0x00057866) compass_pane_g1_ParamLimits

0xb2b7,	// (0x00057866) compass_pane_g1

0x3381,	// (0x0004f930) compass_pane_t1

0x3390,	// (0x0004f93f) compass_pane_t2

0x0005,

0xf3d8,	// (0x0005b987) compass_pane_t

0x33d7,	// (0x0004f986) text_secondary_cp61

0xb335,	// (0x000578e4) navi_pane_cams_g5

0xb3b1,	// (0x00057960) navi_pane_im_t1

0xb3bf,	// (0x0005796e) navi_pane_mp_g1_ParamLimits

0xb3bf,	// (0x0005796e) navi_pane_mp_g1

0xb3d3,	// (0x00057982) navi_pane_mp_g2_ParamLimits

0xb3d3,	// (0x00057982) navi_pane_mp_g2

0xb3df,	// (0x0005798e) navi_pane_mp_g3_ParamLimits

0xb3df,	// (0x0005798e) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0005b99b) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0005b99b) navi_pane_mp_g

0xb3eb,	// (0x0005799a) navi_pane_mp_t1

0xb3f9,	// (0x000579a8) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0005b9a2) navi_pane_mp_t

0xb464,	// (0x00057a13) navi_pane_vt_g1

0xb3eb,	// (0x0005799a) navi_pane_vt_t1

0xb46c,	// (0x00057a1b) navi_slider_pane

0xaa33,	// (0x00056fe2) zooming_pane

0xb47c,	// (0x00057a2b) navi_slider_pane_g1

0x99c9,	// (0x00055f78) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0005b9a9) navi_slider_pane_g

0xb4a0,	// (0x00057a4f) aid_levels_zoom

0xb4a8,	// (0x00057a57) zooming_pane_g1

0xb4b0,	// (0x00057a5f) zooming_pane_g2

0xb4b0,	// (0x00057a5f) zooming_pane_g3

0x0002,

0xf409,	// (0x0005b9b8) zooming_pane_g

0xb4b8,	// (0x00057a67) level_10_zoom

0xb4c1,	// (0x00057a70) level_11_zoom

0xb4ca,	// (0x00057a79) level_1_zoom

0xb4d3,	// (0x00057a82) level_2_zoom

0xb4dc,	// (0x00057a8b) level_3_zoom

0xb4e5,	// (0x00057a94) level_4_zoom

0xb4ee,	// (0x00057a9d) level_5_zoom

0xb4f7,	// (0x00057aa6) level_6_zoom

0xb500,	// (0x00057aaf) level_7_zoom

0xb509,	// (0x00057ab8) level_8_zoom

0xb512,	// (0x00057ac1) level_9_zoom

0xb523,	// (0x00057ad2) popup_phob_thumbnail_window_g1

0xb52b,	// (0x00057ada) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0005b9bf) popup_phob_thumbnail_window_g

0xc868,	// (0x00058e17) level_1_location

0xc870,	// (0x00058e1f) level_2_location

0xc878,	// (0x00058e27) level_3_location

0xc880,	// (0x00058e2f) level_4_location

0xaa33,	// (0x00056fe2) level_5_location

0x3428,	// (0x0004f9d7) mce_icon_pane_g1

0x3432,	// (0x0004f9e1) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0005b9c4) mce_icon_pane_g

0x343a,	// (0x0004f9e9) main_mup_pane_g1_ParamLimits

0x343a,	// (0x0004f9e9) main_mup_pane_g1

0x3450,	// (0x0004f9ff) main_mup_pane_g2_ParamLimits

0x3450,	// (0x0004f9ff) main_mup_pane_g2

0x3462,	// (0x0004fa11) main_mup_pane_g3_ParamLimits

0x3462,	// (0x0004fa11) main_mup_pane_g3

0x3474,	// (0x0004fa23) main_mup_pane_g4_ParamLimits

0x3474,	// (0x0004fa23) main_mup_pane_g4

0x348c,	// (0x0004fa3b) main_mup_pane_g5_ParamLimits

0x348c,	// (0x0004fa3b) main_mup_pane_g5

0x34a8,	// (0x0004fa57) main_mup_pane_g6_ParamLimits

0x34a8,	// (0x0004fa57) main_mup_pane_g6

0x34c0,	// (0x0004fa6f) main_mup_pane_g7_ParamLimits

0x34c0,	// (0x0004fa6f) main_mup_pane_g7

0x34d8,	// (0x0004fa87) main_mup_pane_g8_ParamLimits

0x34d8,	// (0x0004fa87) main_mup_pane_g8

0x34f0,	// (0x0004fa9f) main_mup_pane_g9_ParamLimits

0x34f0,	// (0x0004fa9f) main_mup_pane_g9

0x350a,	// (0x0004fab9) main_mup_pane_g10_ParamLimits

0x350a,	// (0x0004fab9) main_mup_pane_g10

0x3524,	// (0x0004fad3) main_mup_pane_g11_ParamLimits

0x3524,	// (0x0004fad3) main_mup_pane_g11

0x3538,	// (0x0004fae7) main_mup_pane_g12_ParamLimits

0x3538,	// (0x0004fae7) main_mup_pane_g12

0x354e,	// (0x0004fafd) main_mup_pane_g13_ParamLimits

0x354e,	// (0x0004fafd) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0005b9c9) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0005b9c9) main_mup_pane_g

0x3562,	// (0x0004fb11) main_mup_pane_t1_ParamLimits

0x3562,	// (0x0004fb11) main_mup_pane_t1

0x357c,	// (0x0004fb2b) main_mup_pane_t2_ParamLimits

0x357c,	// (0x0004fb2b) main_mup_pane_t2

0x3594,	// (0x0004fb43) main_mup_pane_t3_ParamLimits

0x3594,	// (0x0004fb43) main_mup_pane_t3

0x35ac,	// (0x0004fb5b) main_mup_pane_t4_ParamLimits

0x35ac,	// (0x0004fb5b) main_mup_pane_t4

0x35ca,	// (0x0004fb79) main_mup_pane_t5_ParamLimits

0x35ca,	// (0x0004fb79) main_mup_pane_t5

0x35df,	// (0x0004fb8e) main_mup_pane_t6_ParamLimits

0x35df,	// (0x0004fb8e) main_mup_pane_t6

0x0005,

0xf435,	// (0x0005b9e4) main_mup_pane_t_ParamLimits

0xf435,	// (0x0005b9e4) main_mup_pane_t

0x35f1,	// (0x0004fba0) mup_progress_pane_ParamLimits

0x35f1,	// (0x0004fba0) mup_progress_pane

0x35fd,	// (0x0004fbac) mup_visualizer_pane_ParamLimits

0x35fd,	// (0x0004fbac) mup_visualizer_pane

0x3631,	// (0x0004fbe0) mup_volume_pane_ParamLimits

0x3631,	// (0x0004fbe0) mup_volume_pane

0xb533,	// (0x00057ae2) mup_visualizer_pane_g1_ParamLimits

0xb533,	// (0x00057ae2) mup_visualizer_pane_g1

0xb533,	// (0x00057ae2) mup_visualizer_pane_g2_ParamLimits

0xb533,	// (0x00057ae2) mup_visualizer_pane_g2

0xb2b7,	// (0x00057866) mup_visualizer_pane_g3_ParamLimits

0xb2b7,	// (0x00057866) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0005b9f1) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0005b9f1) mup_visualizer_pane_g

0xa893,	// (0x00056e42) mup_volume_pane_g1

0xb549,	// (0x00057af8) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0005b9f8) mup_volume_pane_g

0xa893,	// (0x00056e42) mup_progress_pane_g1

0xb552,	// (0x00057b01) mup_progress_pane_g2

0xb55b,	// (0x00057b0a) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0005b9fd) mup_progress_pane_g

0xa512,	// (0x00056ac1) bg_popup_window_pane_cp05

0xb564,	// (0x00057b13) heading_pane_cp02_ParamLimits

0xb564,	// (0x00057b13) heading_pane_cp02

0xb57e,	// (0x00057b2d) list_popup_blid_pane

0xb586,	// (0x00057b35) list_blid_sat_info_pane_ParamLimits

0xb586,	// (0x00057b35) list_blid_sat_info_pane

0xb599,	// (0x00057b48) list_blid_sat_info_pane_g1

0xb5a1,	// (0x00057b50) list_blid_sat_info_pane_t1

0x3747,	// (0x0004fcf6) mup_equalizer_pane_ParamLimits

0x3747,	// (0x0004fcf6) mup_equalizer_pane

0x3760,	// (0x0004fd0f) mup_equalizer_pane_cp1_ParamLimits

0x3760,	// (0x0004fd0f) mup_equalizer_pane_cp1

0x377d,	// (0x0004fd2c) mup_equalizer_pane_cp2_ParamLimits

0x377d,	// (0x0004fd2c) mup_equalizer_pane_cp2

0x379a,	// (0x0004fd49) mup_equalizer_pane_cp3_ParamLimits

0x379a,	// (0x0004fd49) mup_equalizer_pane_cp3

0x37bb,	// (0x0004fd6a) mup_equalizer_pane_cp4_ParamLimits

0x37bb,	// (0x0004fd6a) mup_equalizer_pane_cp4

0x37dc,	// (0x0004fd8b) mup_equalizer_pane_cp5

0x37f0,	// (0x0004fd9f) mup_equalizer_pane_cp6

0x3804,	// (0x0004fdb3) mup_equalizer_pane_cp7

0xc746,	// (0x00058cf5) bg_popup_call_poc_act_pane_g9

0xc74e,	// (0x00058cfd) bg_popup_call_poc_act_pane_g10

0xc756,	// (0x00058d05) bg_popup_call_poc_act_pane_g11

0x000a,

0xa76d,	// (0x00056d1c) mup_scale_pane

0xa893,	// (0x00056e42) mup_scale_pane_g1

0xb5af,	// (0x00057b5e) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0005ba19) mup_scale_pane_g

0xb5d3,	// (0x00057b82) msg_data_pane

0xb5db,	// (0x00057b8a) scroll_pane_cp017

0x0602,	// (0x0004cbb1) bg_list_pane_cp04_ParamLimits

0x0602,	// (0x0004cbb1) bg_list_pane_cp04

0xb5e3,	// (0x00057b92) msg_data_pane_g1

0x3832,	// (0x0004fde1) msg_data_pane_g2

0x383a,	// (0x0004fde9) msg_data_pane_g3

0x3842,	// (0x0004fdf1) msg_data_pane_g4

0x384a,	// (0x0004fdf9) msg_data_pane_g5

0x3852,	// (0x0004fe01) msg_data_pane_g6

0x385a,	// (0x0004fe09) msg_data_pane_g7

0x0006,

0xf479,	// (0x0005ba28) msg_data_pane_g

0x061a,	// (0x0004cbc9) msg_text_pane_ParamLimits

0x061a,	// (0x0004cbc9) msg_text_pane

0x3862,	// (0x0004fe11) qrid_highlight_pane_cp011_ParamLimits

0x3862,	// (0x0004fe11) qrid_highlight_pane_cp011

0xa512,	// (0x00056ac1) msg_body_pane

0xa512,	// (0x00056ac1) msg_header_pane

0xb5f4,	// (0x00057ba3) input_focus_pane_cp07

0x3878,	// (0x0004fe27) msg_header_pane_t1_ParamLimits

0x3878,	// (0x0004fe27) msg_header_pane_t1

0x388a,	// (0x0004fe39) msg_header_pane_t2_ParamLimits

0x388a,	// (0x0004fe39) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0005ba3c) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0005ba3c) msg_header_pane_t

0xb609,	// (0x00057bb8) msg_body_pane_g1

0x389c,	// (0x0004fe4b) msg_body_pane_t1_ParamLimits

0x389c,	// (0x0004fe4b) msg_body_pane_t1

0x38cd,	// (0x0004fe7c) msg_body_pane_t2_ParamLimits

0x38cd,	// (0x0004fe7c) msg_body_pane_t2

0x38df,	// (0x0004fe8e) msg_body_pane_t3_ParamLimits

0x38df,	// (0x0004fe8e) msg_body_pane_t3

0x0002,

0xf492,	// (0x0005ba41) msg_body_pane_t_ParamLimits

0xf492,	// (0x0005ba41) msg_body_pane_t

0x392b,	// (0x0004feda) main_viewer_pane_g1_ParamLimits

0x392b,	// (0x0004feda) main_viewer_pane_g1

0x3939,	// (0x0004fee8) main_viewer_pane_g2_ParamLimits

0x3939,	// (0x0004fee8) main_viewer_pane_g2

0x3947,	// (0x0004fef6) main_viewer_pane_g3_ParamLimits

0x3947,	// (0x0004fef6) main_viewer_pane_g3

0x3956,	// (0x0004ff05) main_viewer_pane_g4_ParamLimits

0x3956,	// (0x0004ff05) main_viewer_pane_g4

0x99f3,	// (0x00055fa2) main_viewer_pane_g5_ParamLimits

0x99f3,	// (0x00055fa2) main_viewer_pane_g5

0x99f3,	// (0x00055fa2) main_viewer_pane_g7_ParamLimits

0x99f3,	// (0x00055fa2) main_viewer_pane_g7

0x9a05,	// (0x00055fb4) main_viewer_pane_g8_ParamLimits

0x9a05,	// (0x00055fb4) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0005ba51) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0005ba51) main_viewer_pane_g

0xb611,	// (0x00057bc0) viewer_content_pane_ParamLimits

0xb611,	// (0x00057bc0) viewer_content_pane

0x3992,	// (0x0004ff41) main_postcard_pane_g1_ParamLimits

0x3992,	// (0x0004ff41) main_postcard_pane_g1

0x39a8,	// (0x0004ff57) main_postcard_pane_g2_ParamLimits

0x39a8,	// (0x0004ff57) main_postcard_pane_g2

0x39be,	// (0x0004ff6d) main_postcard_pane_g3_ParamLimits

0x39be,	// (0x0004ff6d) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0005ba62) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0005ba62) main_postcard_pane_g

0x39d5,	// (0x0004ff84) main_postcard_pane_g4

0xc968,	// (0x00058f17) smil_status_volume_pane_g2

0x3a18,	// (0x0004ffc7) postcard_pane_ParamLimits

0x3a18,	// (0x0004ffc7) postcard_pane

0xb61f,	// (0x00057bce) postcard_pane_g1_ParamLimits

0xb61f,	// (0x00057bce) postcard_pane_g1

0x3a5a,	// (0x00050009) postcard_pane_g2_ParamLimits

0x3a5a,	// (0x00050009) postcard_pane_g2

0x3a66,	// (0x00050015) postcard_pane_g3_ParamLimits

0x3a66,	// (0x00050015) postcard_pane_g3

0xb62d,	// (0x00057bdc) postcard_pane_g4_ParamLimits

0xb62d,	// (0x00057bdc) postcard_pane_g4

0x3a72,	// (0x00050021) postcard_pane_g5_ParamLimits

0x3a72,	// (0x00050021) postcard_pane_g5

0x3a87,	// (0x00050036) postcard_pane_g6_ParamLimits

0x3a87,	// (0x00050036) postcard_pane_g6

0xb61f,	// (0x00057bce) postcard_pane_g7_ParamLimits

0xb61f,	// (0x00057bce) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0005ba6f) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0005ba6f) postcard_pane_g

0x3a9b,	// (0x0005004a) main_mp2_pane_g1_ParamLimits

0x3a9b,	// (0x0005004a) main_mp2_pane_g1

0x3aa7,	// (0x00050056) main_mp2_pane_g2_ParamLimits

0x3aa7,	// (0x00050056) main_mp2_pane_g2

0x3ab3,	// (0x00050062) main_mp2_pane_g3_ParamLimits

0x3ab3,	// (0x00050062) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0005ba7e) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0005ba7e) main_mp2_pane_g

0x3abf,	// (0x0005006e) main_mp2_pane_t1_ParamLimits

0x3abf,	// (0x0005006e) main_mp2_pane_t1

0x3ad4,	// (0x00050083) main_mp2_pane_t2_ParamLimits

0x3ad4,	// (0x00050083) main_mp2_pane_t2

0x3ae6,	// (0x00050095) main_mp2_pane_t3_ParamLimits

0x3ae6,	// (0x00050095) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0005ba85) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0005ba85) main_mp2_pane_t

0xb63b,	// (0x00057bea) pec_content_pane_ParamLimits

0xb63b,	// (0x00057bea) pec_content_pane

0xabdc,	// (0x0005718b) scroll_pane_cp015

0xb64d,	// (0x00057bfc) pec_attribute_pane_ParamLimits

0xb64d,	// (0x00057bfc) pec_attribute_pane

0x3af8,	// (0x000500a7) pec_content_pane_g1_ParamLimits

0x3af8,	// (0x000500a7) pec_content_pane_g1

0xb65d,	// (0x00057c0c) pec_content_pane_t1_ParamLimits

0xb65d,	// (0x00057c0c) pec_content_pane_t1

0xb66f,	// (0x00057c1e) pec_content_pane_t2_ParamLimits

0xb66f,	// (0x00057c1e) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0005ba8c) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0005ba8c) pec_content_pane_t

0x3b04,	// (0x000500b3) list_single_graphic_pane_cp01_ParamLimits

0x3b04,	// (0x000500b3) list_single_graphic_pane_cp01

0xa76d,	// (0x00056d1c) bg_popup_sub_pane_cp04

0xb681,	// (0x00057c30) popup_mup_playback_window_g1

0xb68d,	// (0x00057c3c) popup_mup_playback_window_t1

0xb6a2,	// (0x00057c51) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0005ba91) popup_mup_playback_window_t

0xb6d9,	// (0x00057c88) main_image_pane_g1_ParamLimits

0xb6d9,	// (0x00057c88) main_image_pane_g1

0xb71c,	// (0x00057ccb) scroll_pane_cp018_ParamLimits

0xb71c,	// (0x00057ccb) scroll_pane_cp018

0xb734,	// (0x00057ce3) scroll_pane_cp016_ParamLimits

0xb734,	// (0x00057ce3) scroll_pane_cp016

0x3bd2,	// (0x00050181) smil2_image_pane_ParamLimits

0x3bd2,	// (0x00050181) smil2_image_pane

0x3c02,	// (0x000501b1) smil2_root_pane_ParamLimits

0x3c02,	// (0x000501b1) smil2_root_pane

0x3c3a,	// (0x000501e9) smil2_text_pane_ParamLimits

0x3c3a,	// (0x000501e9) smil2_text_pane

0xa512,	// (0x00056ac1) bg_list_pane_cp06

0xb770,	// (0x00057d1f) grid_radio_pane

0xa512,	// (0x00056ac1) bg_popup_window_pane_cp06

0xb778,	// (0x00057d27) main_fmradio_pane_t1

0xb133,	// (0x000576e2) heading_pane_cp04

0xb786,	// (0x00057d35) main_fmradio_pane_t2

0xc79e,	// (0x00058d4d) popup_cale_lunar_info_window_g1

0xb794,	// (0x00057d43) main_fmradio_pane_t3

0xc7a6,	// (0x00058d55) popup_cale_lunar_info_window_g2

0xb7a2,	// (0x00057d51) main_fmradio_pane_t4

0x0001,

0xb7b0,	// (0x00057d5f) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x0005bb7f) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0005baa6) main_fmradio_pane_t

0xb7be,	// (0x00057d6d) wait_bar_pane_cp03

0xb7c6,	// (0x00057d75) cell_fmradio_pane_ParamLimits

0xb7c6,	// (0x00057d75) cell_fmradio_pane

0xb61f,	// (0x00057bce) cell_fmradio_pane_g1_ParamLimits

0xb61f,	// (0x00057bce) cell_fmradio_pane_g1

0xa512,	// (0x00056ac1) grid_highlight_pane_cp011

0xb7d9,	// (0x00057d88) poc_content_pane_ParamLimits

0xb7d9,	// (0x00057d88) poc_content_pane

0xb7eb,	// (0x00057d9a) scroll_pane_cp019

0x3cba,	// (0x00050269) popup_call_poc_act_window_ParamLimits

0x3cba,	// (0x00050269) popup_call_poc_act_window

0x3cde,	// (0x0005028d) popup_call_poc_inact_window_ParamLimits

0x3cde,	// (0x0005028d) popup_call_poc_inact_window

0xf594,	// (0x0005bb43) bg_popup_call_poc_act_pane_g

0xc75e,	// (0x00058d0d) bg_popup_call_poc_inact_pane_g1

0xc766,	// (0x00058d15) bg_popup_call_poc_inact_pane_g2

0xb7f3,	// (0x00057da2) popup_call_poc_act_window_g2

0xc76e,	// (0x00058d1d) bg_popup_call_poc_inact_pane_g3

0xc6ee,	// (0x00058c9d) bg_popup_call_poc_inact_pane_g4

0xc776,	// (0x00058d25) bg_popup_call_poc_inact_pane_g5

0xb7fb,	// (0x00057daa) popup_call_poc_act_window_t1_ParamLimits

0xb7fb,	// (0x00057daa) popup_call_poc_act_window_t1

0xb823,	// (0x00057dd2) popup_call_poc_act_window_t2_ParamLimits

0xb823,	// (0x00057dd2) popup_call_poc_act_window_t2

0xb84b,	// (0x00057dfa) popup_call_poc_act_window_t3_ParamLimits

0xb84b,	// (0x00057dfa) popup_call_poc_act_window_t3

0xb873,	// (0x00057e22) popup_call_poc_act_window_t4_ParamLimits

0xb873,	// (0x00057e22) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0005bab1) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0005bab1) popup_call_poc_act_window_t

0xc77e,	// (0x00058d2d) bg_popup_call_poc_inact_pane_g6

0xc786,	// (0x00058d35) bg_popup_call_poc_inact_pane_g7

0xc78e,	// (0x00058d3d) bg_popup_call_poc_inact_pane_g8

0xb885,	// (0x00057e34) popup_call_poc_inact_window_g2

0xc796,	// (0x00058d45) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x0005bb5a) bg_popup_call_poc_inact_pane_g

0xb88d,	// (0x00057e3c) popup_call_poc_inact_window_t1_ParamLimits

0xb88d,	// (0x00057e3c) popup_call_poc_inact_window_t1

0xb8a2,	// (0x00057e51) popup_call_poc_inact_window_t2_ParamLimits

0xb8a2,	// (0x00057e51) popup_call_poc_inact_window_t2

0xb8b7,	// (0x00057e66) popup_call_poc_inact_window_t3_ParamLimits

0xb8b7,	// (0x00057e66) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0005baba) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0005baba) popup_call_poc_inact_window_t

0xc8db,	// (0x00058e8a) context_pane_ParamLimits

0x4506,	// (0x00050ab5) signal_pane_ParamLimits

0xaa33,	// (0x00056fe2) main_call2_pane

0x9a4a,	// (0x00055ff9) popup_phob_thumbnail2_window_ParamLimits

0x9a4a,	// (0x00055ff9) popup_phob_thumbnail2_window

0x99db,	// (0x00055f8a) aid_hotspot_pointer_arrow_pane

0x99e3,	// (0x00055f92) aid_hotspot_pointer_hand_pane

0x4028,	// (0x000505d7) phob_pre_status_pane_g5

0x1fa9,	// (0x0004e558) cams_zoom_pane_ParamLimits

0x1fb8,	// (0x0004e567) image_vga_pane_ParamLimits

0x1fd2,	// (0x0004e581) main_camera_pane_g1_ParamLimits

0x1fe4,	// (0x0004e593) main_camera_pane_g2_ParamLimits

0x1ff4,	// (0x0004e5a3) main_camera_pane_g3_ParamLimits

0x2004,	// (0x0004e5b3) main_camera_pane_g4_ParamLimits

0x2014,	// (0x0004e5c3) main_camera_pane_g5_ParamLimits

0x2024,	// (0x0004e5d3) main_camera_pane_g6_ParamLimits

0x2034,	// (0x0004e5e3) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0005b7b9) main_camera_pane_g_ParamLimits

0x2044,	// (0x0004e5f3) main_camera_pane_t1_ParamLimits

0x205a,	// (0x0004e609) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0005b7ca) main_camera_pane_t_ParamLimits

0xa76d,	// (0x00056d1c) bg_popup_preview_window_pane_cp01_ParamLimits

0xa76d,	// (0x00056d1c) bg_popup_preview_window_pane_cp01

0xb8cc,	// (0x00057e7b) popup_phob_thumbnail2_window_g1_ParamLimits

0xb8cc,	// (0x00057e7b) popup_phob_thumbnail2_window_g1

0xa512,	// (0x00056ac1) call2_cli_visual_pane

0x3d12,	// (0x000502c1) popup_call2_audio_conf_window_ParamLimits

0x3d12,	// (0x000502c1) popup_call2_audio_conf_window

0x3d32,	// (0x000502e1) popup_call2_audio_first_window_ParamLimits

0x3d32,	// (0x000502e1) popup_call2_audio_first_window

0x3dc8,	// (0x00050377) popup_call2_audio_in_window_ParamLimits

0x3dc8,	// (0x00050377) popup_call2_audio_in_window

0x3e10,	// (0x000503bf) popup_call2_audio_out_window_ParamLimits

0x3e10,	// (0x000503bf) popup_call2_audio_out_window

0x3e7a,	// (0x00050429) popup_call2_audio_second_window_ParamLimits

0x3e7a,	// (0x00050429) popup_call2_audio_second_window

0x3ee0,	// (0x0005048f) popup_call2_audio_wait_window_ParamLimits

0x3ee0,	// (0x0005048f) popup_call2_audio_wait_window

0xa512,	// (0x00056ac1) bg_popup_call2_act_pane_cp03

0xa74f,	// (0x00056cfe) list_conf_pane_cp

0xb8d8,	// (0x00057e87) popup_call2_audio_conf_window_t1

0xb8e6,	// (0x00057e95) list_single_graphic_popup_conf2_pane_ParamLimits

0xb8e6,	// (0x00057e95) list_single_graphic_popup_conf2_pane

0xb1a3,	// (0x00057752) list_highlight_pane_cp04

0xb8f9,	// (0x00057ea8) list_single_graphic_popup_conf2_pane_g1

0xb1b4,	// (0x00057763) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0005bac1) list_single_graphic_popup_conf2_pane_g

0xb903,	// (0x00057eb2) list_single_graphic_popup_conf2_pane_t1

0xb911,	// (0x00057ec0) bg_popup_call2_act_pane_cp01_ParamLimits

0xb911,	// (0x00057ec0) bg_popup_call2_act_pane_cp01

0xb99b,	// (0x00057f4a) call_type_pane_cp05_ParamLimits

0xb99b,	// (0x00057f4a) call_type_pane_cp05

0xb9ef,	// (0x00057f9e) popup_call2_audio_second_window_g1_ParamLimits

0xb9ef,	// (0x00057f9e) popup_call2_audio_second_window_g1

0xba43,	// (0x00057ff2) popup_call2_audio_second_window_g2_ParamLimits

0xba43,	// (0x00057ff2) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0005bac6) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0005bac6) popup_call2_audio_second_window_g

0xbaa8,	// (0x00058057) popup_call2_audio_second_window_t1_ParamLimits

0xbaa8,	// (0x00058057) popup_call2_audio_second_window_t1

0xbb63,	// (0x00058112) popup_call2_audio_second_window_t2_ParamLimits

0xbb63,	// (0x00058112) popup_call2_audio_second_window_t2

0xbbb6,	// (0x00058165) popup_call2_audio_second_window_t3_ParamLimits

0xbbb6,	// (0x00058165) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0005bacd) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0005bacd) popup_call2_audio_second_window_t

0xa512,	// (0x00056ac1) bg_popup_call2_in_pane_cp02

0xa51c,	// (0x00056acb) call_type_pane_cp04

0xa524,	// (0x00056ad3) popup_call2_audio_wait_window_g1

0xa52c,	// (0x00056adb) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0005b6a8) popup_call2_audio_wait_window_g

0xa534,	// (0x00056ae3) popup_call2_audio_wait_window_t3

0xbca9,	// (0x00058258) bg_popup_call2_act_pane_ParamLimits

0xbca9,	// (0x00058258) bg_popup_call2_act_pane

0xbd69,	// (0x00058318) call_type_pane_cp03_ParamLimits

0xbd69,	// (0x00058318) call_type_pane_cp03

0xbdcd,	// (0x0005837c) popup_call2_audio_first_window_g1_ParamLimits

0xbdcd,	// (0x0005837c) popup_call2_audio_first_window_g1

0xbe3d,	// (0x000583ec) popup_call2_audio_first_window_g2_ParamLimits

0xbe3d,	// (0x000583ec) popup_call2_audio_first_window_g2

0xb533,	// (0x00057ae2) popup_call2_audio_first_window_g3_ParamLimits

0xb533,	// (0x00057ae2) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0005bad6) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0005bad6) popup_call2_audio_first_window_g

0xbf1b,	// (0x000584ca) popup_call2_audio_first_window_t1_ParamLimits

0xbf1b,	// (0x000584ca) popup_call2_audio_first_window_t1

0xc01e,	// (0x000585cd) popup_call2_audio_first_window_t4_ParamLimits

0xc01e,	// (0x000585cd) popup_call2_audio_first_window_t4

0xc101,	// (0x000586b0) popup_call2_audio_first_window_t5_ParamLimits

0xc101,	// (0x000586b0) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0005bae1) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0005bae1) popup_call2_audio_first_window_t

0xa765,	// (0x00056d14) bg_popup_call2_act_pane_g1

0xc7ae,	// (0x00058d5d) popup_cale_lunar_info_window_t1

0xc7bc,	// (0x00058d6b) popup_cale_lunar_info_window_t2

0xc7ca,	// (0x00058d79) popup_cale_lunar_info_window_t3

0xa512,	// (0x00056ac1) bg_popup_call2_bubble_pane

0xc202,	// (0x000587b1) bg_popup_call2_in_pane_cp01_ParamLimits

0xc202,	// (0x000587b1) bg_popup_call2_in_pane_cp01

0x9870,	// (0x00055e1f) call_type_pane_cp02

0xc24a,	// (0x000587f9) popup_call2_audio_out_window_g1_ParamLimits

0xc24a,	// (0x000587f9) popup_call2_audio_out_window_g1

0xc276,	// (0x00058825) popup_call2_audio_out_window_g2_ParamLimits

0xc276,	// (0x00058825) popup_call2_audio_out_window_g2

0xc29e,	// (0x0005884d) popup_call2_audio_out_window_g3_ParamLimits

0xc29e,	// (0x0005884d) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0005baea) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0005baea) popup_call2_audio_out_window_g

0xc2d9,	// (0x00058888) popup_call2_audio_out_window_t1_ParamLimits

0xc2d9,	// (0x00058888) popup_call2_audio_out_window_t1

0xc338,	// (0x000588e7) popup_call2_audio_out_window_t2_ParamLimits

0xc338,	// (0x000588e7) popup_call2_audio_out_window_t2

0xc38c,	// (0x0005893b) popup_call2_audio_out_window_t3_ParamLimits

0xc38c,	// (0x0005893b) popup_call2_audio_out_window_t3

0xc3a2,	// (0x00058951) popup_call2_audio_out_window_t4_ParamLimits

0xc3a2,	// (0x00058951) popup_call2_audio_out_window_t4

0xc3b8,	// (0x00058967) popup_call2_audio_out_window_t5_ParamLimits

0xc3b8,	// (0x00058967) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0005baf3) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0005baf3) popup_call2_audio_out_window_t

0xc41c,	// (0x000589cb) bg_popup_call2_in_pane_ParamLimits

0xc41c,	// (0x000589cb) bg_popup_call2_in_pane

0xc478,	// (0x00058a27) popup_call2_audio_in_window_g1_ParamLimits

0xc478,	// (0x00058a27) popup_call2_audio_in_window_g1

0xc4b0,	// (0x00058a5f) popup_call2_audio_in_window_g2_ParamLimits

0xc4b0,	// (0x00058a5f) popup_call2_audio_in_window_g2

0xc4e8,	// (0x00058a97) popup_call2_audio_in_window_g3_ParamLimits

0xc4e8,	// (0x00058a97) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0005bb00) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0005bb00) popup_call2_audio_in_window_g

0xc540,	// (0x00058aef) popup_call2_audio_in_window_t1_ParamLimits

0xc540,	// (0x00058aef) popup_call2_audio_in_window_t1

0xc5c0,	// (0x00058b6f) popup_call2_audio_in_window_t2_ParamLimits

0xc5c0,	// (0x00058b6f) popup_call2_audio_in_window_t2

0xc640,	// (0x00058bef) popup_call2_audio_in_window_t3_ParamLimits

0xc640,	// (0x00058bef) popup_call2_audio_in_window_t3

0xc65a,	// (0x00058c09) popup_call2_audio_in_window_t4_ParamLimits

0xc65a,	// (0x00058c09) popup_call2_audio_in_window_t4

0xc66c,	// (0x00058c1b) popup_call2_audio_in_window_t5_ParamLimits

0xc66c,	// (0x00058c1b) popup_call2_audio_in_window_t5

0xc681,	// (0x00058c30) popup_call2_audio_in_window_t6_ParamLimits

0xc681,	// (0x00058c30) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0005bb09) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0005bb09) popup_call2_audio_in_window_t

0xa765,	// (0x00056d14) bg_popup_call2_in_pane_g1

0xc7d8,	// (0x00058d87) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x0005bb84) popup_cale_lunar_info_window_t

0xa76d,	// (0x00056d1c) bg_popup_call2_rect_pane_ParamLimits

0xa76d,	// (0x00056d1c) bg_popup_call2_rect_pane

0xa512,	// (0x00056ac1) call2_cli_visual_graphic_pane

0xa512,	// (0x00056ac1) call2_cli_visual_text_pane

0x9a71,	// (0x00056020) smil_status_volume_pane_g3

0x0002,

0xa893,	// (0x00056e42) call2_cli_visual_graphic_pane_g1

0xa893,	// (0x00056e42) call2_cli_visual_graphic_pane_g2

0xa893,	// (0x00056e42) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0005bb16) call2_cli_visual_graphic_pane_g

0xc696,	// (0x00058c45) bg_popup_call2_rect_pane_g1

0xa931,	// (0x00056ee0) bg_popup_call2_rect_pane_g2

0xc69e,	// (0x00058c4d) bg_popup_call2_rect_pane_g3

0xc6a6,	// (0x00058c55) bg_popup_call2_rect_pane_g4

0xc6ae,	// (0x00058c5d) bg_popup_call2_rect_pane_g5

0xc6b6,	// (0x00058c65) bg_popup_call2_rect_pane_g6

0xc6be,	// (0x00058c6d) bg_popup_call2_rect_pane_g7

0xc6c6,	// (0x00058c75) bg_popup_call2_rect_pane_g8

0xc6ce,	// (0x00058c7d) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0005bb1d) bg_popup_call2_rect_pane_g

0xc6d6,	// (0x00058c85) bg_popup_call2_bubble_pane_g1

0xc6de,	// (0x00058c8d) bg_popup_call2_bubble_pane_g2

0xc6e6,	// (0x00058c95) bg_popup_call2_bubble_pane_g3

0xc6ee,	// (0x00058c9d) bg_popup_call2_bubble_pane_g4

0xc6f6,	// (0x00058ca5) bg_popup_call2_bubble_pane_g5

0xc6fe,	// (0x00058cad) bg_popup_call2_bubble_pane_g6

0xc706,	// (0x00058cb5) bg_popup_call2_bubble_pane_g7

0xc70e,	// (0x00058cbd) bg_popup_call2_bubble_pane_g8

0xc716,	// (0x00058cc5) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0005bb30) bg_popup_call2_bubble_pane_g

0x19e1,	// (0x0004df90) aid_cale_week_size_cell_pane

0x2070,	// (0x0004e61f) aid_cams_cif_uncrop_pane_ParamLimits

0x2070,	// (0x0004e61f) aid_cams_cif_uncrop_pane

0x2225,	// (0x0004e7d4) aid_cams_size_cell_ParamLimits

0x2225,	// (0x0004e7d4) aid_cams_size_cell

0x2239,	// (0x0004e7e8) grid_cams_pane_ParamLimits

0x2253,	// (0x0004e802) linegrid_cams_pane_ParamLimits

0x2339,	// (0x0004e8e8) call_video_pane_t1

0x2357,	// (0x0004e906) call_video_pane_t2

0x0001,

0xf26e,	// (0x0005b81d) call_video_pane_t

0x277b,	// (0x0004ed2a) aid_cale_month_size_cell_pane_ParamLimits

0x277b,	// (0x0004ed2a) aid_cale_month_size_cell_pane

0xf61e,	// (0x0005bbcd) smil_status_volume_pane_g

0x9a7e,	// (0x0005602d) volume_smil_pane_ParamLimits

0x972b,	// (0x00055cda) aid_popup2_width_pane

0x1965,	// (0x0004df14) cell_qdial_pane_g4_ParamLimits

0x1965,	// (0x0004df14) cell_qdial_pane_g4

0x3361,	// (0x0004f910) aid_blid_cardinal_pane_ParamLimits

0x336d,	// (0x0004f91c) aid_blid_destination_pane_ParamLimits

0x336d,	// (0x0004f91c) aid_blid_destination_pane

0xa76d,	// (0x00056d1c) bg_popup_call_poc_act_pane_ParamLimits

0xa76d,	// (0x00056d1c) bg_popup_call_poc_act_pane

0xa76d,	// (0x00056d1c) bg_popup_call_poc_inact_pane_ParamLimits

0xa76d,	// (0x00056d1c) bg_popup_call_poc_inact_pane

0xc71e,	// (0x00058ccd) bg_popup_call_poc_act_pane_g1

0xc726,	// (0x00058cd5) bg_popup_call_poc_act_pane_g2

0xc72e,	// (0x00058cdd) bg_popup_call_poc_act_pane_g3

0xc6ee,	// (0x00058c9d) bg_popup_call_poc_act_pane_g4

0xc6f6,	// (0x00058ca5) bg_popup_call_poc_act_pane_g5

0xc736,	// (0x00058ce5) bg_popup_call_poc_act_pane_g6

0xc706,	// (0x00058cb5) bg_popup_call_poc_act_pane_g7

0xc73e,	// (0x00058ced) bg_popup_call_poc_act_pane_g8

0xa512,	// (0x00056ac1) main_usb_pane

0x9a25,	// (0x00055fd4) popup_cale_lunar_info_window

0x2621,	// (0x0004ebd0) im_reading_pane_t1_ParamLimits

0xab34,	// (0x000570e3) list_im_pane_ParamLimits

0xab45,	// (0x000570f4) scroll_pane_cp07_ParamLimits

0xa512,	// (0x00056ac1) grid_highlight_pane_cp012

0xa76d,	// (0x00056d1c) mup_scale_pane_ParamLimits

0xb61f,	// (0x00057bce) main_usb_pane_g1_ParamLimits

0xb61f,	// (0x00057bce) main_usb_pane_g1

0x3f3d,	// (0x000504ec) main_usb_pane_g2_ParamLimits

0x3f3d,	// (0x000504ec) main_usb_pane_g2

0x0001,

0xf5be,	// (0x0005bb6d) main_usb_pane_g_ParamLimits

0xf5be,	// (0x0005bb6d) main_usb_pane_g

0x3f53,	// (0x00050502) main_usb_pane_t1_ParamLimits

0x3f53,	// (0x00050502) main_usb_pane_t1

0x3f65,	// (0x00050514) main_usb_pane_t2_ParamLimits

0x3f65,	// (0x00050514) main_usb_pane_t2

0x3f77,	// (0x00050526) main_usb_pane_t3_ParamLimits

0x3f77,	// (0x00050526) main_usb_pane_t3

0x3f89,	// (0x00050538) main_usb_pane_t4_ParamLimits

0x3f89,	// (0x00050538) main_usb_pane_t4

0x3f9b,	// (0x0005054a) main_usb_pane_t5_ParamLimits

0x3f9b,	// (0x0005054a) main_usb_pane_t5

0x3fad,	// (0x0005055c) main_usb_pane_t6_ParamLimits

0x3fad,	// (0x0005055c) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x0005bb72) main_usb_pane_t_ParamLimits

0x3310,	// (0x0004f8bf) aid_text_placing

0x3319,	// (0x0004f8c8) main_location2_pane_t1_ParamLimits

0x332b,	// (0x0004f8da) main_location2_pane_t2_ParamLimits

0x333d,	// (0x0004f8ec) main_location2_pane_t3_ParamLimits

0x334f,	// (0x0004f8fe) main_location2_pane_t4_ParamLimits

0x334f,	// (0x0004f8fe) main_location2_pane_t4

0xf3cf,	// (0x0005b97e) main_location2_pane_t_ParamLimits

0xa7a9,	// (0x00056d58) find_pinb_pane_g2_ParamLimits

0xa7a9,	// (0x00056d58) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0005b6ce) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0005b6ce) find_pinb_pane_g

0xa7b5,	// (0x00056d64) find_pinb_pane_t1_ParamLimits

0xa7c7,	// (0x00056d76) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0005b6d3) find_pinb_pane_t_ParamLimits

0xa512,	// (0x00056ac1) main_call3_pane

0x2c62,	// (0x0004f211) cale_month_day_heading_pane_t1_ParamLimits

0x2ca4,	// (0x0004f253) cale_month_day_heading_pane_t2_ParamLimits

0x2cd9,	// (0x0004f288) cale_month_day_heading_pane_t3_ParamLimits

0x2d0e,	// (0x0004f2bd) cale_month_day_heading_pane_t4_ParamLimits

0x2d4b,	// (0x0004f2fa) cale_month_day_heading_pane_t5_ParamLimits

0x2d90,	// (0x0004f33f) cale_month_day_heading_pane_t6_ParamLimits

0x2dd5,	// (0x0004f384) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0005b855) cale_month_day_heading_pane_t_ParamLimits

0xad9d,	// (0x0005734c) smil_status_volume_pane

0x3a36,	// (0x0004ffe5) postcard_address_pane_ParamLimits

0x3a36,	// (0x0004ffe5) postcard_address_pane

0x3a48,	// (0x0004fff7) postcard_message_pane_ParamLimits

0x3a48,	// (0x0004fff7) postcard_message_pane

0x3f1a,	// (0x000504c9) call2_cli_visual_pane_t1_ParamLimits

0x3f1a,	// (0x000504c9) call2_cli_visual_pane_t1

0x4735,	// (0x00050ce4) postcard_message_pane_t1_ParamLimits

0x4735,	// (0x00050ce4) postcard_message_pane_t1

0x471e,	// (0x00050ccd) postcard_address_pane_t1_ParamLimits

0x471e,	// (0x00050ccd) postcard_address_pane_t1

0x470a,	// (0x00050cb9) popup_call3_audio_in_window_ParamLimits

0x470a,	// (0x00050cb9) popup_call3_audio_in_window

0x4595,	// (0x00050b44) bg_popup_call3_in_pane_ParamLimits

0x4595,	// (0x00050b44) bg_popup_call3_in_pane

0x460b,	// (0x00050bba) popup_call3_audio_in_window_g1_ParamLimits

0x460b,	// (0x00050bba) popup_call3_audio_in_window_g1

0x462b,	// (0x00050bda) popup_call3_audio_in_window_g2_ParamLimits

0x462b,	// (0x00050bda) popup_call3_audio_in_window_g2

0x464b,	// (0x00050bfa) popup_call3_audio_in_window_g3_ParamLimits

0x464b,	// (0x00050bfa) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x0005bbd4) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x0005bbd4) popup_call3_audio_in_window_g

0x467c,	// (0x00050c2b) popup_call3_audio_in_window_t1_ParamLimits

0x467c,	// (0x00050c2b) popup_call3_audio_in_window_t1

0x46ba,	// (0x00050c69) popup_call3_audio_in_window_t2_ParamLimits

0x46ba,	// (0x00050c69) popup_call3_audio_in_window_t2

0x46f8,	// (0x00050ca7) popup_call3_audio_in_window_t3_ParamLimits

0x46f8,	// (0x00050ca7) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x0005bbdd) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x0005bbdd) popup_call3_audio_in_window_t

0xaa33,	// (0x00056fe2) bg_popup_call3_rect_pane

0xc696,	// (0x00058c45) bg_popup_call3_rect_pane_g1

0xa931,	// (0x00056ee0) bg_popup_call3_rect_pane_g2

0xc69e,	// (0x00058c4d) bg_popup_call3_rect_pane_g3

0xc6a6,	// (0x00058c55) bg_popup_call3_rect_pane_g4

0xc6ae,	// (0x00058c5d) bg_popup_call3_rect_pane_g5

0xc6b6,	// (0x00058c65) bg_popup_call3_rect_pane_g6

0xc6be,	// (0x00058c6d) bg_popup_call3_rect_pane_g7

0x3647,	// (0x0004fbf6) mup_visualizer_osc_pane

0xb541,	// (0x00057af0) mup_visualizer_spec_pane

0x45c5,	// (0x00050b74) call3_video_qcif_pane_ParamLimits

0x45c5,	// (0x00050b74) call3_video_qcif_pane

0x45d8,	// (0x00050b87) call3_video_qcif_uncrop_pane_ParamLimits

0x45d8,	// (0x00050b87) call3_video_qcif_uncrop_pane

0x45e6,	// (0x00050b95) call3_video_subqcif_pane_ParamLimits

0x45e6,	// (0x00050b95) call3_video_subqcif_pane

0x45fa,	// (0x00050ba9) call3_video_subqcif_uncrop_pane_ParamLimits

0x45fa,	// (0x00050ba9) call3_video_subqcif_uncrop_pane

0x466b,	// (0x00050c1a) popup_call3_audio_in_window_g4_ParamLimits

0x466b,	// (0x00050c1a) popup_call3_audio_in_window_g4

0x4584,	// (0x00050b33) mup_spec_half_pane

0x458d,	// (0x00050b3c) mup_spec_half_pane_cp

0xc93b,	// (0x00058eea) mup_osc_middle_pane

0xc944,	// (0x00058ef3) mup_visualizer_osc_pane_g1

0x4564,	// (0x00050b13) mup_spec_bar_pane_ParamLimits

0x4564,	// (0x00050b13) mup_spec_bar_pane

0xc928,	// (0x00058ed7) mup_spec_bar_pane_g1

0xc932,	// (0x00058ee1) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0005bbc8) mup_spec_bar_pane_g

0x19e1,	// (0x0004df90) aid_cale_week_size_cell_pane_ParamLimits

0x19fb,	// (0x0004dfaa) bg_cale_heading_pane_ParamLimits

0xa98c,	// (0x00056f3b) bg_cale_pane_cp01_ParamLimits

0x1a13,	// (0x0004dfc2) cale_week_corner_pane_ParamLimits

0x1a32,	// (0x0004dfe1) cale_week_day_heading_pane_ParamLimits

0x1a4f,	// (0x0004dffe) cale_week_scroll_pane_g1_ParamLimits

0x1a62,	// (0x0004e011) cale_week_scroll_pane_g2_ParamLimits

0x1a7a,	// (0x0004e029) cale_week_scroll_pane_g3_ParamLimits

0x1a92,	// (0x0004e041) cale_week_scroll_pane_g4_ParamLimits

0x1aaa,	// (0x0004e059) cale_week_scroll_pane_g5_ParamLimits

0x1aca,	// (0x0004e079) cale_week_scroll_pane_g6_ParamLimits

0x1aea,	// (0x0004e099) cale_week_scroll_pane_g7_ParamLimits

0x1b0a,	// (0x0004e0b9) cale_week_scroll_pane_g8_ParamLimits

0x1b2e,	// (0x0004e0dd) cale_week_scroll_pane_g9_ParamLimits

0x1b46,	// (0x0004e0f5) cale_week_scroll_pane_g10_ParamLimits

0x1b5e,	// (0x0004e10d) cale_week_scroll_pane_g11_ParamLimits

0x1b76,	// (0x0004e125) cale_week_scroll_pane_g12_ParamLimits

0x1b8e,	// (0x0004e13d) cale_week_scroll_pane_g13_ParamLimits

0x1b8e,	// (0x0004e13d) cale_week_scroll_pane_g14_ParamLimits

0x1b8e,	// (0x0004e13d) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0005b75f) cale_week_scroll_pane_g_ParamLimits

0x1bca,	// (0x0004e179) cale_week_time_pane_ParamLimits

0x1bee,	// (0x0004e19d) grid_cale_week_pane_ParamLimits

0xa9a9,	// (0x00056f58) listscroll_cale_week_pane_t1

0xa9bb,	// (0x00056f6a) scroll_pane_cp08_ParamLimits

0x27db,	// (0x0004ed8a) cale_month_corner_pane_ParamLimits

0xad73,	// (0x00057322) cale_month_pane_t1

0x2bf5,	// (0x0004f1a4) cale_month_week_pane_ParamLimits

0x3141,	// (0x0004f6f0) popup_call_status_window_g1_ParamLimits

0x3155,	// (0x0004f704) popup_call_status_window_g2_ParamLimits

0x3169,	// (0x0004f718) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0005b905) popup_call_status_window_g_ParamLimits

0xb123,	// (0x000576d2) aid_call2_pane

0x0649,	// (0x0004cbf8) msg_header_pane_g1

0x3a36,	// (0x0004ffe5) postcard_address2_pane_ParamLimits

0x3a36,	// (0x0004ffe5) postcard_address2_pane

0x3a48,	// (0x0004fff7) postcard_message2_pane_ParamLimits

0x3a48,	// (0x0004fff7) postcard_message2_pane

0x4514,	// (0x00050ac3) message2_row_pane_ParamLimits

0x4514,	// (0x00050ac3) message2_row_pane

0x4531,	// (0x00050ae0) address2_row_pane_ParamLimits

0x4531,	// (0x00050ae0) address2_row_pane

0xc8f6,	// (0x00058ea5) postcard_message2_row_pane_g1

0xc8fe,	// (0x00058ead) postcard_message2_row_pane_t1

0xc8f6,	// (0x00058ea5) address2_row_pane_g1

0xc8fe,	// (0x00058ead) address2_row_pane_t1

0x1f28,	// (0x0004e4d7) aid_size_cell_vorec

0xa512,	// (0x00056ac1) main_rss_pane

0x4544,	// (0x00050af3) rss_list_single_pane_ParamLimits

0x4544,	// (0x00050af3) rss_list_single_pane

0xc90c,	// (0x00058ebb) rss_list_single_pane_t1

0xc91a,	// (0x00058ec9) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x0005bbc3) rss_list_single_pane_t

0xa512,	// (0x00056ac1) main_camera2_pane

0xa512,	// (0x00056ac1) main_video2_pane

0x47ae,	// (0x00050d5d) cams_zoom_pane_cp2_ParamLimits

0x47ae,	// (0x00050d5d) cams_zoom_pane_cp2

0x47ce,	// (0x00050d7d) image2_vga_pane_ParamLimits

0x47ce,	// (0x00050d7d) image2_vga_pane

0x481f,	// (0x00050dce) main_camera2_pane_g1_ParamLimits

0x481f,	// (0x00050dce) main_camera2_pane_g1

0x483f,	// (0x00050dee) main_camera2_pane_g2_ParamLimits

0x483f,	// (0x00050dee) main_camera2_pane_g2

0x485f,	// (0x00050e0e) main_camera2_pane_g3_ParamLimits

0x485f,	// (0x00050e0e) main_camera2_pane_g3

0x487f,	// (0x00050e2e) main_camera2_pane_g4_ParamLimits

0x487f,	// (0x00050e2e) main_camera2_pane_g4

0x489f,	// (0x00050e4e) main_camera2_pane_g5_ParamLimits

0x489f,	// (0x00050e4e) main_camera2_pane_g5

0x48bf,	// (0x00050e6e) main_camera2_pane_g6_ParamLimits

0x48bf,	// (0x00050e6e) main_camera2_pane_g6

0x48df,	// (0x00050e8e) main_camera2_pane_g7_ParamLimits

0x48df,	// (0x00050e8e) main_camera2_pane_g7

0x48ff,	// (0x00050eae) main_camera2_pane_g8_ParamLimits

0x48ff,	// (0x00050eae) main_camera2_pane_g8

0x0008,

0xf635,	// (0x0005bbe4) main_camera2_pane_g_ParamLimits

0xf635,	// (0x0005bbe4) main_camera2_pane_g

0x493f,	// (0x00050eee) main_camera2_pane_t1_ParamLimits

0x493f,	// (0x00050eee) main_camera2_pane_t1

0x4974,	// (0x00050f23) main_camera2_pane_t2_ParamLimits

0x4974,	// (0x00050f23) main_camera2_pane_t2

0x499a,	// (0x00050f49) main_camera2_pane_t3_ParamLimits

0x499a,	// (0x00050f49) main_camera2_pane_t3

0x49f8,	// (0x00050fa7) main_camera2_pane_t4_ParamLimits

0x49f8,	// (0x00050fa7) main_camera2_pane_t4

0x0006,

0xf648,	// (0x0005bbf7) main_camera2_pane_t_ParamLimits

0xf648,	// (0x0005bbf7) main_camera2_pane_t

0x4a8a,	// (0x00051039) cams_zoom_pane_cp4_ParamLimits

0x4a8a,	// (0x00051039) cams_zoom_pane_cp4

0x4aa0,	// (0x0005104f) image2_cif_pane_ParamLimits

0x4aa0,	// (0x0005104f) image2_cif_pane

0x4acb,	// (0x0005107a) image2_subqcif_pane_ParamLimits

0x4acb,	// (0x0005107a) image2_subqcif_pane

0x4ae5,	// (0x00051094) main_video2_pane_g1_ParamLimits

0x4ae5,	// (0x00051094) main_video2_pane_g1

0x4aff,	// (0x000510ae) main_video2_pane_g2_ParamLimits

0x4aff,	// (0x000510ae) main_video2_pane_g2

0x4b15,	// (0x000510c4) main_video2_pane_g3_ParamLimits

0x4b15,	// (0x000510c4) main_video2_pane_g3

0x4b2b,	// (0x000510da) main_video2_pane_g4_ParamLimits

0x4b2b,	// (0x000510da) main_video2_pane_g4

0x4b41,	// (0x000510f0) main_video2_pane_g5_ParamLimits

0x4b41,	// (0x000510f0) main_video2_pane_g5

0x4b57,	// (0x00051106) main_video2_pane_g6_ParamLimits

0x4b57,	// (0x00051106) main_video2_pane_g6

0x0005,

0xf657,	// (0x0005bc06) main_video2_pane_g_ParamLimits

0xf657,	// (0x0005bc06) main_video2_pane_g

0x4b71,	// (0x00051120) main_video2_pane_t1_ParamLimits

0x4b71,	// (0x00051120) main_video2_pane_t1

0x4b95,	// (0x00051144) main_video2_pane_t2_ParamLimits

0x4b95,	// (0x00051144) main_video2_pane_t2

0x4be3,	// (0x00051192) main_video2_pane_t3_ParamLimits

0x4be3,	// (0x00051192) main_video2_pane_t3

0x0002,

0xf664,	// (0x0005bc13) main_video2_pane_t_ParamLimits

0xf664,	// (0x0005bc13) main_video2_pane_t

0x4068,	// (0x00050617) call_muted_g2

0x0001,

0xf606,	// (0x0005bbb5) call_muted_g

0xa512,	// (0x00056ac1) main_mup2_pane

0x4c2b,	// (0x000511da) main_mup2_pane_g1_ParamLimits

0x4c2b,	// (0x000511da) main_mup2_pane_g1

0x4c37,	// (0x000511e6) main_mup2_pane_g2_ParamLimits

0x4c37,	// (0x000511e6) main_mup2_pane_g2

0x9aec,	// (0x0005609b) main_mup_pane_g13_cp1

0x9af4,	// (0x000560a3) mup_volume_pane_cp1

0x4c53,	// (0x00051202) main_mup2_pane_g4_ParamLimits

0x4c53,	// (0x00051202) main_mup2_pane_g4

0x4c65,	// (0x00051214) main_mup2_pane_g5_ParamLimits

0x4c65,	// (0x00051214) main_mup2_pane_g5

0x4c77,	// (0x00051226) main_mup2_pane_g6_ParamLimits

0x4c77,	// (0x00051226) main_mup2_pane_g6

0x4c89,	// (0x00051238) main_mup2_pane_g7_ParamLimits

0x4c89,	// (0x00051238) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x0005bc1a) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x0005bc1a) main_mup2_pane_g

0x4ca1,	// (0x00051250) main_mup2_pane_t1_ParamLimits

0x4ca1,	// (0x00051250) main_mup2_pane_t1

0x4cb7,	// (0x00051266) main_mup2_pane_t2_ParamLimits

0x4cb7,	// (0x00051266) main_mup2_pane_t2

0x4ccd,	// (0x0005127c) main_mup2_pane_t3_ParamLimits

0x4ccd,	// (0x0005127c) main_mup2_pane_t3

0x4ce3,	// (0x00051292) main_mup2_pane_t4_ParamLimits

0x4ce3,	// (0x00051292) main_mup2_pane_t4

0x4cfb,	// (0x000512aa) main_mup2_pane_t5_ParamLimits

0x4cfb,	// (0x000512aa) main_mup2_pane_t5

0x4d13,	// (0x000512c2) main_mup2_pane_t6_ParamLimits

0x4d13,	// (0x000512c2) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x0005bc29) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x0005bc29) main_mup2_pane_t

0x4d43,	// (0x000512f2) mup2_visualizer_pane_ParamLimits

0x4d43,	// (0x000512f2) mup2_visualizer_pane

0x4d71,	// (0x00051320) mup_progress_pane_cp_ParamLimits

0x4d71,	// (0x00051320) mup_progress_pane_cp

0x9ad7,	// (0x00056086) mup_volume_pane_cp_ParamLimits

0x9ad7,	// (0x00056086) mup_volume_pane_cp

0x4d85,	// (0x00051334) mup2_visualizer_pane_g1_ParamLimits

0x4d85,	// (0x00051334) mup2_visualizer_pane_g1

0xc97b,	// (0x00058f2a) mup2_visualizer_pane_g2_ParamLimits

0xc97b,	// (0x00058f2a) mup2_visualizer_pane_g2

0x4d9c,	// (0x0005134b) mup2_visualizer_pane_g3_ParamLimits

0x4d9c,	// (0x0005134b) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x0005bc36) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x0005bc36) mup2_visualizer_pane_g

0xb768,	// (0x00057d17) aid_size_cell_fmradio

0x421a,	// (0x000507c9) aid_height_parent_landcape

0xabc3,	// (0x00057172) wml_content_pane_cp

0xabcb,	// (0x0005717a) wml_tabs_pane

0xabd4,	// (0x00057183) popup_wml_miniature_window

0xabdc,	// (0x0005718b) scroll_pane_cp021

0xabf0,	// (0x0005719f) wml_content_pane_comp8

0xa512,	// (0x00056ac1) bg_popup_sub_pane_cp05

0xc999,	// (0x00058f48) popup_wml_miniature_window_g1

0xc9a1,	// (0x00058f50) wml_miniature_view_pane

0x4da8,	// (0x00051357) aid_size_wml_view

0x4db0,	// (0x0005135f) wml_miniature_view_pane_g1

0x4db9,	// (0x00051368) wml_miniature_view_pane_g2

0x4dc2,	// (0x00051371) wml_miniature_view_pane_g3

0x4dca,	// (0x00051379) wml_miniature_view_pane_g4

0x4dd2,	// (0x00051381) wml_miniature_view_pane_g5

0x4dda,	// (0x00051389) wml_miniature_view_pane_g6

0x4de2,	// (0x00051391) wml_miniature_view_pane_g7

0x4dea,	// (0x00051399) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x0005bc3d) wml_miniature_view_pane_g

0xc9a9,	// (0x00058f58) background_graphic_ParamLimits

0xc9a9,	// (0x00058f58) background_graphic

0xc9b5,	// (0x00058f64) wml_tabs_2_pane

0xc9be,	// (0x00058f6d) wml_tabs_3_pane_ParamLimits

0xc9be,	// (0x00058f6d) wml_tabs_3_pane

0xc9d0,	// (0x00058f7f) wml_tabs_4_pane_ParamLimits

0xc9d0,	// (0x00058f7f) wml_tabs_4_pane

0xc9e6,	// (0x00058f95) wml_tabs_5_pane_ParamLimits

0xc9e6,	// (0x00058f95) wml_tabs_5_pane

0xca00,	// (0x00058faf) wml_tabs_pane_g2_ParamLimits

0xca00,	// (0x00058faf) wml_tabs_pane_g2

0xca14,	// (0x00058fc3) wml_tabs_pane_g3_ParamLimits

0xca14,	// (0x00058fc3) wml_tabs_pane_g3

0x4df2,	// (0x000513a1) wml_tabs_2_active_pane_ParamLimits

0x4df2,	// (0x000513a1) wml_tabs_2_active_pane

0x4e06,	// (0x000513b5) wml_tabs_2_passive_pane_ParamLimits

0x4e06,	// (0x000513b5) wml_tabs_2_passive_pane

0x4e1a,	// (0x000513c9) wml_tabs_3_active_pane_cp_ParamLimits

0x4e1a,	// (0x000513c9) wml_tabs_3_active_pane_cp

0x4e2f,	// (0x000513de) wml_tabs_3_passive_pane_ParamLimits

0x4e2f,	// (0x000513de) wml_tabs_3_passive_pane

0x4e42,	// (0x000513f1) wml_tabs_3_passive_pane_cp_ParamLimits

0x4e42,	// (0x000513f1) wml_tabs_3_passive_pane_cp

0x4e59,	// (0x00051408) tabs_4_active_pane

0x4e61,	// (0x00051410) tabs_4_passive_pane

0x4e6b,	// (0x0005141a) tabs_4_passive_pane_cp

0x4e73,	// (0x00051422) tabs_4_passive_pane_cp2

0x3f35,	// (0x000504e4) aid_height_text

0x3619,	// (0x0004fbc8) mup_volume_cont_pane_ParamLimits

0x3619,	// (0x0004fbc8) mup_volume_cont_pane

0x1606,	// (0x0004dbb5) aid_size_cell_pinb

0x1610,	// (0x0004dbbf) aid_size_list_pinb

0x4d5d,	// (0x0005130c) mup2_volume_cont_pane_ParamLimits

0x4d5d,	// (0x0005130c) mup2_volume_cont_pane

0x9ac3,	// (0x00056072) mup2_volume_cont_pane_g1_ParamLimits

0x9ac3,	// (0x00056072) mup2_volume_cont_pane_g1

0x12b8,	// (0x0004d867) aid_size_cell_touch_ParamLimits

0x12b8,	// (0x0004d867) aid_size_cell_touch

0x14f5,	// (0x0004daa4) touch_pane_ParamLimits

0x14f5,	// (0x0004daa4) touch_pane

0x9719,	// (0x00055cc8) main_rss2_pane

0xca31,	// (0x00058fe0) listscroll_rss2_pane

0xca3a,	// (0x00058fe9) rss2_navigation_pane

0xca42,	// (0x00058ff1) list_rss2_pane

0xb248,	// (0x000577f7) scroll_pane_cp22

0xca4a,	// (0x00058ff9) rss2_navigation_pane_g1

0xca53,	// (0x00059002) rss2_navigation_pane_g2

0xca5b,	// (0x0005900a) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x0005bc4e) rss2_navigation_pane_g

0xca63,	// (0x00059012) rss2_navigation_pane_t1

0x4e7d,	// (0x0005142c) rss2_list_single_pane_ParamLimits

0x4e7d,	// (0x0005142c) rss2_list_single_pane

0xca71,	// (0x00059020) rss2_list_single_pane_t2

0xca7f,	// (0x0005902e) rss2_list_single_pane_t3_ParamLimits

0xca7f,	// (0x0005902e) rss2_list_single_pane_t3

0xca9c,	// (0x0005904b) rss2_list_single_pane_t4

0x301d,	// (0x0004f5cc) smil_status_pane_g1

0xa1fa,	// (0x000567a9) main_image2_pane_ParamLimits

0xa1fa,	// (0x000567a9) main_image2_pane

0x491f,	// (0x00050ece) main_camera2_pane_g9_ParamLimits

0x491f,	// (0x00050ece) main_camera2_pane_g9

0x4a4d,	// (0x00050ffc) main_camera2_pane_t5_ParamLimits

0x4a4d,	// (0x00050ffc) main_camera2_pane_t5

0x9a93,	// (0x00056042) main_camera2_pane_t6_ParamLimits

0x9a93,	// (0x00056042) main_camera2_pane_t6

0x4e93,	// (0x00051442) main_image2_pane_g1_ParamLimits

0x4e93,	// (0x00051442) main_image2_pane_g1

0x3c70,	// (0x0005021f) smil2_video_pane_ParamLimits

0x3c70,	// (0x0005021f) smil2_video_pane

0x12f0,	// (0x0004d89f) aid_zoom_text_primary_cp

0x9777,	// (0x00055d26) popup_preview_fixed_window

0xab2c,	// (0x000570db) im_reading_pane_g1

0x4796,	// (0x00050d45) cams2_bc_adjust_pane_cp_ParamLimits

0x4796,	// (0x00050d45) cams2_bc_adjust_pane_cp

0x4a7c,	// (0x0005102b) cams2_bc_adjust_pane_ParamLimits

0x4a7c,	// (0x0005102b) cams2_bc_adjust_pane

0x9afc,	// (0x000560ab) cams2_bc_adjust_pane_g1

0x9b04,	// (0x000560b3) cams2_slider_pane

0x9b0d,	// (0x000560bc) cams2_slider_pane_g1

0x9b16,	// (0x000560c5) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x0005bc55) cams2_slider_pane_g

0x16f8,	// (0x0004dca7) calc_display_pane_ParamLimits

0x1720,	// (0x0004dccf) calc_paper_pane_ParamLimits

0x1743,	// (0x0004dcf2) grid_calc_pane_ParamLimits

0x99ac,	// (0x00055f5b) popup_clock_digital_window_t1_ParamLimits

0xb705,	// (0x00057cb4) main_image_pane_t1

0x16da,	// (0x0004dc89) aid_size_cell_calc_ParamLimits

0x16da,	// (0x0004dc89) aid_size_cell_calc

0x4260,	// (0x0005080f) popup_blid_sat_info2_window_ParamLimits

0x4260,	// (0x0005080f) popup_blid_sat_info2_window

0xcab2,	// (0x00059061) aid_size_cell_blid

0xcaba,	// (0x00059069) bg_popup_window_pane_cp07

0xcadd,	// (0x0005908c) grid_popup_blid_pane

0xcae7,	// (0x00059096) heading_pane_cp05_ParamLimits

0xcae7,	// (0x00059096) heading_pane_cp05

0xcbb1,	// (0x00059160) cell_popup_blid_pane_ParamLimits

0xcbb1,	// (0x00059160) cell_popup_blid_pane

0xcbd5,	// (0x00059184) cell_popup_blid_pane_g1

0xcbdd,	// (0x0005918c) cell_popup_blid_pane_t1

0x4d2d,	// (0x000512dc) mup2_indicator_pane_ParamLimits

0x4d2d,	// (0x000512dc) mup2_indicator_pane

0xaa33,	// (0x00056fe2) mup2_visualizer_osc_pane

0xc987,	// (0x00058f36) mup2_visualizer_spec_pane_ParamLimits

0xc987,	// (0x00058f36) mup2_visualizer_spec_pane

0x4ea9,	// (0x00051458) mup2_spec_half_pane

0x4eb2,	// (0x00051461) mup2_spec_half_pane_cp

0x4eba,	// (0x00051469) mup2_spec_bar_pane_ParamLimits

0x4eba,	// (0x00051469) mup2_spec_bar_pane

0xc928,	// (0x00058ed7) mup2_spec_bar_pane_g1

0xc932,	// (0x00058ee1) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0005bbc8) mup2_spec_bar_pane_g

0x4eda,	// (0x00051489) mup2_osc_middle_pane

0xc944,	// (0x00058ef3) mup2_visualizer_osc_pane_g1

0x97a1,	// (0x00055d50) popup_number_entry_window_t1_ParamLimits

0x97b4,	// (0x00055d63) popup_number_entry_window_t2_ParamLimits

0x97c6,	// (0x00055d75) popup_number_entry_window_t3_ParamLimits

0x1547,	// (0x0004daf6) popup_number_entry_window_t5_ParamLimits

0x1547,	// (0x0004daf6) popup_number_entry_window_t5

0xf0ca,	// (0x0005b679) popup_number_entry_window_t_ParamLimits

0x97d8,	// (0x00055d87) text_title_cp2_ParamLimits

0x99eb,	// (0x00055f9a) aid_hotspot_pointer_text2_pane

0x9a11,	// (0x00055fc0) main_viewer_pane_g9_ParamLimits

0x9a11,	// (0x00055fc0) main_viewer_pane_g9

0xad73,	// (0x00057322) cale_month_pane_t1_ParamLimits

0xadb0,	// (0x0005735f) bg_cale_pane_ParamLimits

0xadc8,	// (0x00057377) list_cale_pane_ParamLimits

0xadd9,	// (0x00057388) listscroll_cale_day_pane_t1

0xadeb,	// (0x0005739a) scroll_pane_cp09_ParamLimits

0x364f,	// (0x0004fbfe) main_mup_eq_pane_t1_ParamLimits

0x364f,	// (0x0004fbfe) main_mup_eq_pane_t1

0x3669,	// (0x0004fc18) main_mup_eq_pane_t2_ParamLimits

0x3669,	// (0x0004fc18) main_mup_eq_pane_t2

0x3683,	// (0x0004fc32) main_mup_eq_pane_t3_ParamLimits

0x3683,	// (0x0004fc32) main_mup_eq_pane_t3

0x369f,	// (0x0004fc4e) main_mup_eq_pane_t4_ParamLimits

0x369f,	// (0x0004fc4e) main_mup_eq_pane_t4

0x36bb,	// (0x0004fc6a) main_mup_eq_pane_t5_ParamLimits

0x36bb,	// (0x0004fc6a) main_mup_eq_pane_t5

0x36d7,	// (0x0004fc86) main_mup_eq_pane_t6_ParamLimits

0x36d7,	// (0x0004fc86) main_mup_eq_pane_t6

0x36eb,	// (0x0004fc9a) main_mup_eq_pane_t7_ParamLimits

0x36eb,	// (0x0004fc9a) main_mup_eq_pane_t7

0x36ff,	// (0x0004fcae) main_mup_eq_pane_t8_ParamLimits

0x36ff,	// (0x0004fcae) main_mup_eq_pane_t8

0x3713,	// (0x0004fcc2) main_mup_eq_pane_t9_ParamLimits

0x3713,	// (0x0004fcc2) main_mup_eq_pane_t9

0x372d,	// (0x0004fcdc) main_mup_eq_pane_t10_ParamLimits

0x372d,	// (0x0004fcdc) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0005ba04) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0005ba04) main_mup_eq_pane_t

0x37dc,	// (0x0004fd8b) mup_equalizer_pane_cp5_ParamLimits

0x37f0,	// (0x0004fd9f) mup_equalizer_pane_cp6_ParamLimits

0x3804,	// (0x0004fdb3) mup_equalizer_pane_cp7_ParamLimits

0x9719,	// (0x00055cc8) main_gallery_pane

0xc94d,	// (0x00058efc) smil2_volume_pane

0xc955,	// (0x00058f04) smil_status_volume_pane_g1_ParamLimits

0xc968,	// (0x00058f17) smil_status_volume_pane_g2_ParamLimits

0x9a71,	// (0x00056020) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x0005bbcd) smil_status_volume_pane_g_ParamLimits

0xcaba,	// (0x00059069) bg_popup_window_pane_cp07_ParamLimits

0xcac8,	// (0x00059077) blid_firmament_pane

0x4ee3,	// (0x00051492) aid_size_cell_gallery_ParamLimits

0x4ee3,	// (0x00051492) aid_size_cell_gallery

0x4ef9,	// (0x000514a8) grid_gallery_pane_ParamLimits

0x4ef9,	// (0x000514a8) grid_gallery_pane

0x4f12,	// (0x000514c1) cell_gallery_pane_ParamLimits

0x4f12,	// (0x000514c1) cell_gallery_pane

0xcbeb,	// (0x0005919a) bg_cell_gallery_focus_pane_ParamLimits

0xcbeb,	// (0x0005919a) bg_cell_gallery_focus_pane

0xcbfd,	// (0x000591ac) cell_gallery_pane_g1_ParamLimits

0xcbfd,	// (0x000591ac) cell_gallery_pane_g1

0x4f5b,	// (0x0005150a) cell_gallery_pane_g2_ParamLimits

0x4f5b,	// (0x0005150a) cell_gallery_pane_g2

0x4f68,	// (0x00051517) cell_gallery_pane_g3_ParamLimits

0x4f68,	// (0x00051517) cell_gallery_pane_g3

0xcc09,	// (0x000591b8) cell_gallery_pane_g4_ParamLimits

0xcc09,	// (0x000591b8) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x0005bc7b) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x0005bc7b) cell_gallery_pane_g

0xcc15,	// (0x000591c4) bg_cell_gallery_focus_pane_g1

0xcc1d,	// (0x000591cc) bg_cell_gallery_focus_pane_g2

0xcc25,	// (0x000591d4) bg_cell_gallery_focus_pane_g3

0xcc2d,	// (0x000591dc) bg_cell_gallery_focus_pane_g4

0xcc35,	// (0x000591e4) bg_cell_gallery_focus_pane_g5

0xcc3d,	// (0x000591ec) bg_cell_gallery_focus_pane_g6

0xcc45,	// (0x000591f4) bg_cell_gallery_focus_pane_g7

0xcc4d,	// (0x000591fc) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x0005bc84) bg_cell_gallery_focus_pane_g

0xcc55,	// (0x00059204) aid_firma_cardinal

0xcc69,	// (0x00059218) blid_firmament_pane_t1

0xcc80,	// (0x0005922f) blid_firmament_pane_t2

0xcc97,	// (0x00059246) blid_firmament_pane_t3

0xccae,	// (0x0005925d) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x0005bc95) blid_firmament_pane_t

0xccc5,	// (0x00059274) blid_sat_info_pane

0xccd5,	// (0x00059284) blid_sat_info_pane_g1

0xccd5,	// (0x00059284) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x0005bc9e) blid_sat_info_pane_g

0xccdf,	// (0x0005928e) blid_sat_info_pane_t1

0xcced,	// (0x0005929c) smil2_volume_content_pane

0xccf6,	// (0x000592a5) smil2_volume_pane_g1

0xccfe,	// (0x000592ad) smil2_volume_content_pane_g1

0xcd07,	// (0x000592b6) smil2_volume_content_pane_g2

0xcd10,	// (0x000592bf) smil2_volume_content_pane_g3

0xcd19,	// (0x000592c8) smil2_volume_content_pane_g4

0xcd22,	// (0x000592d1) smil2_volume_content_pane_g5

0xcd2b,	// (0x000592da) smil2_volume_content_pane_g6

0xcd34,	// (0x000592e3) smil2_volume_content_pane_g7

0xcd3d,	// (0x000592ec) smil2_volume_content_pane_g8

0xcd52,	// (0x00059301) smil2_volume_content_pane_g9

0xcd5b,	// (0x0005930a) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x0005bca3) smil2_volume_content_pane_g

0x1ca2,	// (0x0004e251) cale_week_day_heading_pane_t1_ParamLimits

0x1ccc,	// (0x0004e27b) cale_week_day_heading_pane_t2_ParamLimits

0x1cfb,	// (0x0004e2aa) cale_week_day_heading_pane_t3_ParamLimits

0x1d2a,	// (0x0004e2d9) cale_week_day_heading_pane_t4_ParamLimits

0x1d59,	// (0x0004e308) cale_week_day_heading_pane_t5_ParamLimits

0x1d90,	// (0x0004e33f) cale_week_day_heading_pane_t6_ParamLimits

0x1dc7,	// (0x0004e376) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0005b780) cale_week_day_heading_pane_t_ParamLimits

0xa9d8,	// (0x00056f87) bg_cale_side_pane_ParamLimits

0x1df1,	// (0x0004e3a0) cale_week_time_pane_t1_ParamLimits

0x1e0b,	// (0x0004e3ba) cale_week_time_pane_t2_ParamLimits

0x1e25,	// (0x0004e3d4) cale_week_time_pane_t3_ParamLimits

0x1e3f,	// (0x0004e3ee) cale_week_time_pane_t4_ParamLimits

0x1e59,	// (0x0004e408) cale_week_time_pane_t5_ParamLimits

0x1e73,	// (0x0004e422) cale_week_time_pane_t6_ParamLimits

0x1e8d,	// (0x0004e43c) cale_week_time_pane_t7_ParamLimits

0x1ea7,	// (0x0004e456) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0005b78f) cale_week_time_pane_t_ParamLimits

0x1ec7,	// (0x0004e476) cell_cale_week_pane_g2_ParamLimits

0xa9d8,	// (0x00056f87) bg_cale_side_pane_cp01_ParamLimits

0x2e22,	// (0x0004f3d1) cale_month_week_pane_t1_ParamLimits

0x2e3b,	// (0x0004f3ea) cale_month_week_pane_t2_ParamLimits

0x2e54,	// (0x0004f403) cale_month_week_pane_t3_ParamLimits

0x2e6d,	// (0x0004f41c) cale_month_week_pane_t4_ParamLimits

0x2e86,	// (0x0004f435) cale_month_week_pane_t5_ParamLimits

0x2e9f,	// (0x0004f44e) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0005b864) cale_month_week_pane_t_ParamLimits

0x992c,	// (0x00055edb) cell_cale_month_pane_g1_ParamLimits

0x9719,	// (0x00055cc8) main_cale_event_viewer_pane

0x9719,	// (0x00055cc8) listscroll_cale_event_viewer_pane

0xcd64,	// (0x00059313) list_cale_ev_pane

0xcd6c,	// (0x0005931b) scroll_pane_cp023

0xcd78,	// (0x00059327) field_cale_ev_pane_ParamLimits

0xcd78,	// (0x00059327) field_cale_ev_pane

0xcd96,	// (0x00059345) field_cale_ev_content_pane_ParamLimits

0xcd96,	// (0x00059345) field_cale_ev_content_pane

0xcda2,	// (0x00059351) field_cale_ev_pane_g1_ParamLimits

0xcda2,	// (0x00059351) field_cale_ev_pane_g1

0xcdae,	// (0x0005935d) field_cale_ev_pane_g2_ParamLimits

0xcdae,	// (0x0005935d) field_cale_ev_pane_g2

0xcdc6,	// (0x00059375) field_cale_ev_pane_g3_ParamLimits

0xcdc6,	// (0x00059375) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x0005bcb8) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x0005bcb8) field_cale_ev_pane_g

0xcdde,	// (0x0005938d) field_cale_ev_pane_t1_ParamLimits

0xcdde,	// (0x0005938d) field_cale_ev_pane_t1

0xa94b,	// (0x00056efa) field_cale_ev_content_pane_t1_ParamLimits

0xa94b,	// (0x00056efa) field_cale_ev_content_pane_t1

0xb5eb,	// (0x00057b9a) bg_button_pane_cp01

0x19cf,	// (0x0004df7e) listscroll_cale_week_pane_ParamLimits

0xa983,	// (0x00056f32) popup_toolbar_window_cp01

0xa9a9,	// (0x00056f58) listscroll_cale_week_pane_t1_ParamLimits

0x19cf,	// (0x0004df7e) listscroll_cale_day_pane_ParamLimits

0xa983,	// (0x00056f32) popup_toolbar_window_cp02

0xadd9,	// (0x00057388) listscroll_cale_day_pane_t1_ParamLimits

0x19cf,	// (0x0004df7e) main_cale_month_pane_ParamLimits

0x9a5c,	// (0x0005600b) popup_toolbar_window_cp03_ParamLimits

0x9a5c,	// (0x0005600b) popup_toolbar_window_cp03

0x3b38,	// (0x000500e7) main_image_pane_g2_ParamLimits

0x3b38,	// (0x000500e7) main_image_pane_g2

0x3b49,	// (0x000500f8) main_image_pane_g3_ParamLimits

0x3b49,	// (0x000500f8) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0005ba96) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0005ba96) main_image_pane_g

0xb705,	// (0x00057cb4) main_image_pane_t1_ParamLimits

0x3b5a,	// (0x00050109) main_image_pane_t2_ParamLimits

0x3b5a,	// (0x00050109) main_image_pane_t2

0x3b6c,	// (0x0005011b) main_image_pane_t3_ParamLimits

0x3b6c,	// (0x0005011b) main_image_pane_t3

0x3b94,	// (0x00050143) main_image_pane_t4_ParamLimits

0x3b94,	// (0x00050143) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0005ba9d) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0005ba9d) main_image_pane_t

0x3bb4,	// (0x00050163) popup_image_details_window_cp01

0x3bbe,	// (0x0005016d) popup_toobar_trans_pane_cp01_ParamLimits

0x3bbe,	// (0x0005016d) popup_toobar_trans_pane_cp01

0x4331,	// (0x000508e0) popup_image_details_window_ParamLimits

0x4331,	// (0x000508e0) popup_image_details_window

0x9a2f,	// (0x00055fde) popup_image_focus_window

0x4750,	// (0x00050cff) camera2_autofocus_pane_ParamLimits

0x4750,	// (0x00050cff) camera2_autofocus_pane

0x9719,	// (0x00055cc8) bg_popup_sub_pane_cp06

0xcdf5,	// (0x000593a4) popup_image_focus_window_g1

0xcdfd,	// (0x000593ac) popup_image_focus_window_g2

0xce05,	// (0x000593b4) popup_image_focus_window_g3

0xce0d,	// (0x000593bc) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x0005bcbf) popup_image_focus_window_g

0xce15,	// (0x000593c4) popup_image_focus_window_t1

0xce23,	// (0x000593d2) popup_image_focus_window_t2

0xce33,	// (0x000593e2) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x0005bcc8) popup_image_focus_window_t

0xce41,	// (0x000593f0) camera2_autofocus_pane_g1

0xa1fa,	// (0x000567a9) bg_tb_trans_pane_cp01

0xce4f,	// (0x000593fe) popup_image_details_window_g1

0xce62,	// (0x00059411) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x0005bcda) popup_image_details_window_g

0xce8b,	// (0x0005943a) popup_image_details_window_t1

0xce9d,	// (0x0005944c) popup_image_details_window_t2

0xceb6,	// (0x00059465) popup_image_details_window_t3

0xceca,	// (0x00059479) popup_image_details_window_t4

0xcee5,	// (0x00059494) popup_image_details_window_t5

0x0004,

0xf732,	// (0x0005bce1) popup_image_details_window_t

0xa82a,	// (0x00056dd9) bg_calc_paper_pane_ParamLimits

0x9719,	// (0x00055cc8) grid_highlight_pane_cp013

0x9892,	// (0x00055e41) list_calc_pane_ParamLimits

0x98a4,	// (0x00055e53) scroll_pane_cp024

0xa83e,	// (0x00056ded) bg_calc_display_pane_ParamLimits

0x1841,	// (0x0004ddf0) calc_display_pane_t1_ParamLimits

0x1853,	// (0x0004de02) calc_display_pane_t2_ParamLimits

0x98ac,	// (0x00055e5b) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0005b700) calc_display_pane_t_ParamLimits

0x1913,	// (0x0004dec2) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0005b71d) cell_calc_pane_g

0x191c,	// (0x0004decb) cell_calc_pane_t1

0xa89d,	// (0x00056e4c) grid_highlight_pane_cp02_ParamLimits

0xa8b3,	// (0x00056e62) toolbar_button_pane_cp01_ParamLimits

0xa8b3,	// (0x00056e62) toolbar_button_pane_cp01

0xb74a,	// (0x00057cf9) temp_image_control_pane_ParamLimits

0xb74a,	// (0x00057cf9) temp_image_control_pane

0xa1fa,	// (0x000567a9) main_mp3_pane

0xceff,	// (0x000594ae) temp_image_control_pane_g1_ParamLimits

0xceff,	// (0x000594ae) temp_image_control_pane_g1

0xcf0d,	// (0x000594bc) temp_image_control_pane_g2_ParamLimits

0xcf0d,	// (0x000594bc) temp_image_control_pane_g2

0xcf1f,	// (0x000594ce) temp_image_control_pane_g3_ParamLimits

0xcf1f,	// (0x000594ce) temp_image_control_pane_g3

0x4fa5,	// (0x00051554) temp_image_control_pane_g4_ParamLimits

0x4fa5,	// (0x00051554) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x0005bcec) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x0005bcec) temp_image_control_pane_g

0xceff,	// (0x000594ae) main_mp3_pane_g1

0x4fb8,	// (0x00051567) main_mp3_pane_g2

0x0007,

0xf746,	// (0x0005bcf5) main_mp3_pane_g

0xcf62,	// (0x00059511) main_mp3_pane_t1

0xaa3b,	// (0x00056fea) main_camera_pane_g8_ParamLimits

0xaa3b,	// (0x00056fea) main_camera_pane_g8

0x21cb,	// (0x0004e77a) main_video_pane_g7_ParamLimits

0x21cb,	// (0x0004e77a) main_video_pane_g7

0x9ab1,	// (0x00056060) main_camera2_pane_t7_ParamLimits

0x9ab1,	// (0x00056060) main_camera2_pane_t7

0xab83,	// (0x00057132) scroll_pane_cp025_ParamLimits

0xab83,	// (0x00057132) scroll_pane_cp025

0xab97,	// (0x00057146) scroll_pane_cp026_ParamLimits

0xab97,	// (0x00057146) scroll_pane_cp026

0xaba6,	// (0x00057155) wml_content_pane_ParamLimits

0x9719,	// (0x00055cc8) main_touch_calib_pane

0x508c,	// (0x0005163b) main_touch_calib_pane_g1

0x509e,	// (0x0005164d) main_touch_calib_pane_g2

0x50b0,	// (0x0005165f) main_touch_calib_pane_g3

0x50c2,	// (0x00051671) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x0005bd13) main_touch_calib_pane_g

0x50d4,	// (0x00051683) main_touch_calib_pane_t1

0x50ee,	// (0x0005169d) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x0005bd1c) main_touch_calib_pane_t

0xb317,	// (0x000578c6) mup_progress_pane_cp02

0xb34c,	// (0x000578fb) navi_pane_g1

0xb407,	// (0x000579b6) navi_pane_mp_t3

0xa1fa,	// (0x000567a9) main_mp3_pane_ParamLimits

0x44bc,	// (0x00050a6b) navi_pane_ParamLimits

0xceff,	// (0x000594ae) main_mp3_pane_g1_ParamLimits

0x4fb8,	// (0x00051567) main_mp3_pane_g2_ParamLimits

0x4fc6,	// (0x00051575) main_mp3_pane_g3_ParamLimits

0x4fc6,	// (0x00051575) main_mp3_pane_g3

0x4fd4,	// (0x00051583) main_mp3_pane_g4_ParamLimits

0x4fd4,	// (0x00051583) main_mp3_pane_g4

0xcf2f,	// (0x000594de) main_mp3_pane_g5_ParamLimits

0xcf2f,	// (0x000594de) main_mp3_pane_g5

0xcf3d,	// (0x000594ec) main_mp3_pane_g6_ParamLimits

0xcf3d,	// (0x000594ec) main_mp3_pane_g6

0xcf4a,	// (0x000594f9) main_mp3_pane_g7_ParamLimits

0xcf4a,	// (0x000594f9) main_mp3_pane_g7

0xcf56,	// (0x00059505) main_mp3_pane_g8_ParamLimits

0xcf56,	// (0x00059505) main_mp3_pane_g8

0xf746,	// (0x0005bcf5) main_mp3_pane_g_ParamLimits

0x4fe0,	// (0x0005158f) main_mp3_pane_t2

0x4fee,	// (0x0005159d) main_mp3_pane_t3

0xcf70,	// (0x0005951f) main_mp3_pane_t4

0xcf7e,	// (0x0005952d) main_mp3_pane_t5

0x0005,

0xf757,	// (0x0005bd06) main_mp3_pane_t

0xcf8c,	// (0x0005953b) mup_progress_pane_cp01

0x12f0,	// (0x0004d89f) aid_zoom_text_secondary2

0xcd64,	// (0x00059313) list_cale_ev2_pane

0xcd6c,	// (0x0005931b) scroll_pane_cp023_ParamLimits

0x5144,	// (0x000516f3) field_cale_ev2_pane_ParamLimits

0x5144,	// (0x000516f3) field_cale_ev2_pane

0x5165,	// (0x00051714) field_cale_ev2_pane_g1_ParamLimits

0x5165,	// (0x00051714) field_cale_ev2_pane_g1

0x5171,	// (0x00051720) field_cale_ev2_pane_g2_ParamLimits

0x5171,	// (0x00051720) field_cale_ev2_pane_g2

0x5189,	// (0x00051738) field_cale_ev2_pane_g3_ParamLimits

0x5189,	// (0x00051738) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x0005bd27) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x0005bd27) field_cale_ev2_pane_g

0x51ad,	// (0x0005175c) field_cale_ev2_pane_t1_ParamLimits

0x51ad,	// (0x0005175c) field_cale_ev2_pane_t1

0x51c4,	// (0x00051773) field_cale_ev2_pane_t2_ParamLimits

0x51c4,	// (0x00051773) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x0005bd30) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x0005bd30) field_cale_ev2_pane_t

0x39ec,	// (0x0004ff9b) main_postcard_pane_g5_ParamLimits

0x39ec,	// (0x0004ff9b) main_postcard_pane_g5

0x3a02,	// (0x0004ffb1) main_postcard_pane_g6_ParamLimits

0x3a02,	// (0x0004ffb1) main_postcard_pane_g6

0x1f91,	// (0x0004e540) camera2_autofocus_pane_cp_ParamLimits

0x1f91,	// (0x0004e540) camera2_autofocus_pane_cp

0xa1fa,	// (0x000567a9) main_mup3_pane

0x51f9,	// (0x000517a8) main_mup3_pane_g1_ParamLimits

0x51f9,	// (0x000517a8) main_mup3_pane_g1

0x521b,	// (0x000517ca) main_mup3_pane_g2_ParamLimits

0x521b,	// (0x000517ca) main_mup3_pane_g2

0x529b,	// (0x0005184a) main_mup3_pane_g3_ParamLimits

0x529b,	// (0x0005184a) main_mup3_pane_g3

0x52e1,	// (0x00051890) main_mup3_pane_g4_ParamLimits

0x52e1,	// (0x00051890) main_mup3_pane_g4

0x5327,	// (0x000518d6) main_mup3_pane_g5_ParamLimits

0x5327,	// (0x000518d6) main_mup3_pane_g5

0x536d,	// (0x0005191c) main_mup3_pane_g6_ParamLimits

0x536d,	// (0x0005191c) main_mup3_pane_g6

0xcf94,	// (0x00059543) main_mup3_pane_g7_ParamLimits

0xcf94,	// (0x00059543) main_mup3_pane_g7

0x0007,

0xf791,	// (0x0005bd40) main_mup3_pane_g_ParamLimits

0xf791,	// (0x0005bd40) main_mup3_pane_g

0x53eb,	// (0x0005199a) main_mup3_pane_t1_ParamLimits

0x53eb,	// (0x0005199a) main_mup3_pane_t1

0x545f,	// (0x00051a0e) main_mup3_pane_t2_ParamLimits

0x545f,	// (0x00051a0e) main_mup3_pane_t2

0x5533,	// (0x00051ae2) main_mup3_pane_t4_ParamLimits

0x5533,	// (0x00051ae2) main_mup3_pane_t4

0x5589,	// (0x00051b38) main_mup3_pane_t5_ParamLimits

0x5589,	// (0x00051b38) main_mup3_pane_t5

0x5645,	// (0x00051bf4) main_mup3_pane_t6_ParamLimits

0x5645,	// (0x00051bf4) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x0005bd51) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x0005bd51) main_mup3_pane_t

0x56fd,	// (0x00051cac) mup3_progress_pane_ParamLimits

0x56fd,	// (0x00051cac) mup3_progress_pane

0x5789,	// (0x00051d38) popup_mup3_control_window_ParamLimits

0x5789,	// (0x00051d38) popup_mup3_control_window

0xcfa2,	// (0x00059551) popup_mup3_text_window

0x57bb,	// (0x00051d6a) mup3_progress_pane_t1

0x57da,	// (0x00051d89) mup3_progress_pane_t2

0xcfaa,	// (0x00059559) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x0005bd5e) mup3_progress_pane_t

0xcfc7,	// (0x00059576) mup_progress_pane_cp03

0x9719,	// (0x00055cc8) bg_tb_trans_pane_cp04

0x57f9,	// (0x00051da8) mup3_volume_pane

0x5801,	// (0x00051db0) popup_mup3_control_window_g1

0x580a,	// (0x00051db9) mup3_volume_pane_g1

0x5813,	// (0x00051dc2) mup3_volume_pane_g2

0x581c,	// (0x00051dcb) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x0005bd65) mup3_volume_pane_g

0x9719,	// (0x00055cc8) bg_tb_trans_pane_cp03

0xcfd7,	// (0x00059586) popup_mup3_text_window_g1

0xcfdf,	// (0x0005958e) popup_mup3_text_window_t1

0xa886,	// (0x00056e35) list_calc_item_pane_g1_ParamLimits

0xca28,	// (0x00058fd7) mup_volume_pane_cp_g1

0x5108,	// (0x000516b7) main_touch_calib_pane_t3

0x511c,	// (0x000516cb) main_touch_calib_pane_t4

0x5130,	// (0x000516df) main_touch_calib_pane_t5

0x9723,	// (0x00055cd2) aid_cell_size_toolbar2

0x972b,	// (0x00055cda) aid_popup3_width_pane

0x12e8,	// (0x0004d897) aid_zoom_text_msg_primary

0x1f70,	// (0x0004e51f) vorec_t7

0xa84a,	// (0x00056df9) bg_calc_paper_pane_g1_ParamLimits

0xa856,	// (0x00056e05) bg_calc_paper_pane_g2_ParamLimits

0xa862,	// (0x00056e11) bg_calc_paper_pane_g3_ParamLimits

0xa86e,	// (0x00056e1d) bg_calc_paper_pane_g4_ParamLimits

0xa87a,	// (0x00056e29) bg_calc_paper_pane_g5_ParamLimits

0x189c,	// (0x0004de4b) bg_calc_paper_pane_g6_ParamLimits

0x18ab,	// (0x0004de5a) bg_calc_paper_pane_g7_ParamLimits

0x18ba,	// (0x0004de69) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0005b707) bg_calc_paper_pane_g_ParamLimits

0x18cd,	// (0x0004de7c) calc_bg_paper_pane_g9_ParamLimits

0x20dd,	// (0x0004e68c) image_qvga_pane_ParamLimits

0x20dd,	// (0x0004e68c) image_qvga_pane

0xa76d,	// (0x00056d1c) bg_popup_sub_pane_cp04_ParamLimits

0xb681,	// (0x00057c30) popup_mup_playback_window_g1_ParamLimits

0xb68d,	// (0x00057c3c) popup_mup_playback_window_t1_ParamLimits

0xb6a2,	// (0x00057c51) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0005ba91) popup_mup_playback_window_t_ParamLimits

0x4c47,	// (0x000511f6) main_mup2_pane_g3_ParamLimits

0x4c47,	// (0x000511f6) main_mup2_pane_g3

0x23da,	// (0x0004e989) popup_toolbar_window_cp04

0xba97,	// (0x00058046) popup_call2_audio_second_window_g3_ParamLimits

0xba97,	// (0x00058046) popup_call2_audio_second_window_g3

0xbea1,	// (0x00058450) popup_call2_audio_first_window_g4_ParamLimits

0xbea1,	// (0x00058450) popup_call2_audio_first_window_g4

0xc520,	// (0x00058acf) popup_call2_audio_in_window_g4_ParamLimits

0xc520,	// (0x00058acf) popup_call2_audio_in_window_g4

0x3b1a,	// (0x000500c9) aid_area_sk_bg_cut_ParamLimits

0x3b1a,	// (0x000500c9) aid_area_sk_bg_cut

0xb6b7,	// (0x00057c66) aid_area_sk_bg_cut_2_ParamLimits

0xb6b7,	// (0x00057c66) aid_area_sk_bg_cut_2

0x4f4b,	// (0x000514fa) aid_placing_details_win

0x4f53,	// (0x00051502) aid_placing_details_win_2

0xce41,	// (0x000593f0) camera2_autofocus_pane_g1_ParamLimits

0x148e,	// (0x0004da3d) popup_fixed_preview_cale_window_ParamLimits

0x148e,	// (0x0004da3d) popup_fixed_preview_cale_window

0xb485,	// (0x00057a34) navi_slider_pane_g3

0xb48e,	// (0x00057a3d) navi_slider_pane_g4

0xb497,	// (0x00057a46) navi_slider_pane_g5

0xb485,	// (0x00057a34) navi_slider_pane_g6

0x99d2,	// (0x00055f81) navi_slider_pane_g7

0xb5b8,	// (0x00057b67) mup_scale_pane_g3

0xb5c1,	// (0x00057b70) mup_scale_pane_g4

0xb5ca,	// (0x00057b79) mup_scale_pane_g5

0x3818,	// (0x0004fdc7) mup_scale_pane_g6

0x3821,	// (0x0004fdd0) mup_scale_pane_g7

0xb485,	// (0x00057a34) cams2_slider_pane_g3

0xcaaa,	// (0x00059059) cams2_slider_pane_g4

0x9b1f,	// (0x000560ce) cams2_slider_pane_g5

0xb485,	// (0x00057a34) cams2_slider_pane_g6

0x9b27,	// (0x000560d6) cams2_slider_pane_g7

0xccd5,	// (0x00059284) camera2_autofocus_pane_cp_g1

0xc8c1,	// (0x00058e70) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8c1,	// (0x00058e70) bg_popup_preview_window_pane_cp02

0xcfed,	// (0x0005959c) list_fp_cale_pane_ParamLimits

0xcfed,	// (0x0005959c) list_fp_cale_pane

0xcff9,	// (0x000595a8) popup_fixed_preview_cale_window_t1_ParamLimits

0xcff9,	// (0x000595a8) popup_fixed_preview_cale_window_t1

0x5825,	// (0x00051dd4) popup_fixed_preview_cale_window_t2_ParamLimits

0x5825,	// (0x00051dd4) popup_fixed_preview_cale_window_t2

0x583a,	// (0x00051de9) popup_fixed_preview_cale_window_t3_ParamLimits

0x583a,	// (0x00051de9) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x0005bd6c) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x0005bd6c) popup_fixed_preview_cale_window_t

0x584f,	// (0x00051dfe) list_single_fp_cale_pane_ParamLimits

0x584f,	// (0x00051dfe) list_single_fp_cale_pane

0xd017,	// (0x000595c6) list_single_fp_cale_pane_g1_ParamLimits

0xd017,	// (0x000595c6) list_single_fp_cale_pane_g1

0xd023,	// (0x000595d2) list_single_fp_cale_pane_g2_ParamLimits

0xd023,	// (0x000595d2) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x0005bd73) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x0005bd73) list_single_fp_cale_pane_g

0xd03c,	// (0x000595eb) list_single_fp_cale_pane_t1_ParamLimits

0xd03c,	// (0x000595eb) list_single_fp_cale_pane_t1

0xd04e,	// (0x000595fd) list_single_fp_cale_pane_t2_ParamLimits

0xd04e,	// (0x000595fd) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x0005bd7a) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x0005bd7a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9719,	// (0x00055cc8) main_dialer_pane

0x5865,	// (0x00051e14) aid_cell_size_keypad

0x586f,	// (0x00051e1e) dialer_ne_pane

0x5877,	// (0x00051e26) grid_dialer_command_1_pane

0x587f,	// (0x00051e2e) grid_dialer_command_2_pane

0x5887,	// (0x00051e36) grid_dialer_keypad_pane

0x5899,	// (0x00051e48) bg_popup_call_pane_cp06_ParamLimits

0x5899,	// (0x00051e48) bg_popup_call_pane_cp06

0x58a5,	// (0x00051e54) dialer_ne_clear_pane_ParamLimits

0x58a5,	// (0x00051e54) dialer_ne_clear_pane

0xd081,	// (0x00059630) dialer_ne_pane_g1

0xd089,	// (0x00059638) dialer_ne_pane_t1_ParamLimits

0xd089,	// (0x00059638) dialer_ne_pane_t1

0x58b1,	// (0x00051e60) dialer_ne_pane_t2_ParamLimits

0x58b1,	// (0x00051e60) dialer_ne_pane_t2

0x58db,	// (0x00051e8a) dialer_ne_pane_t3_ParamLimits

0x58db,	// (0x00051e8a) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x0005bd7f) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x0005bd7f) dialer_ne_pane_t

0x590b,	// (0x00051eba) dialer_ne_pane_t3_copy1_ParamLimits

0x590b,	// (0x00051eba) dialer_ne_pane_t3_copy1

0x593a,	// (0x00051ee9) cell_dialer_keypad_pane_ParamLimits

0x593a,	// (0x00051ee9) cell_dialer_keypad_pane

0x5951,	// (0x00051f00) cell_dialer_command_1_pane_ParamLimits

0x5951,	// (0x00051f00) cell_dialer_command_1_pane

0x5967,	// (0x00051f16) cell_dialer_command_2_pane_ParamLimits

0x5967,	// (0x00051f16) cell_dialer_command_2_pane

0xd09b,	// (0x0005964a) bg_button_pane_cp02_ParamLimits

0xd09b,	// (0x0005964a) bg_button_pane_cp02

0x5976,	// (0x00051f25) cell_dialer_keypad_pane_g1_ParamLimits

0x5976,	// (0x00051f25) cell_dialer_keypad_pane_g1

0xd09b,	// (0x0005964a) bg_button_pane_cp03_ParamLimits

0xd09b,	// (0x0005964a) bg_button_pane_cp03

0x598a,	// (0x00051f39) cell_dialer_command_1_pane_g1_ParamLimits

0x598a,	// (0x00051f39) cell_dialer_command_1_pane_g1

0xd0a7,	// (0x00059656) bg_button_pane_cp04

0x599e,	// (0x00051f4d) cell_dialer_command_2_pane_g1

0xaa33,	// (0x00056fe2) bg_button_pane_cp06

0xd0af,	// (0x0005965e) dialer_ne_clear_pane_g1

0xb358,	// (0x00057907) navi_pane_g2

0xb386,	// (0x00057935) navi_pane_g3

0x0002,

0xf3e5,	// (0x0005b994) navi_pane_g

0xb415,	// (0x000579c4) navi_pane_mv_g2

0xb43c,	// (0x000579eb) navi_pane_mv_g5

0x33e6,	// (0x0004f995) navi_pane_mv_t1

0xa83e,	// (0x00056ded) main_clock2_pane

0x59ec,	// (0x00051f9b) main_clock2_list_pane_ParamLimits

0x59ec,	// (0x00051f9b) main_clock2_list_pane

0x5a26,	// (0x00051fd5) main_clock2_pane_t1_ParamLimits

0x5a26,	// (0x00051fd5) main_clock2_pane_t1

0x5a64,	// (0x00052013) main_clock2_pane_t2_ParamLimits

0x5a64,	// (0x00052013) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x0005bd8b) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x0005bd8b) main_clock2_pane_t

0x5b02,	// (0x000520b1) popup_clock_analogue_window_cp03_ParamLimits

0x5b02,	// (0x000520b1) popup_clock_analogue_window_cp03

0x5b27,	// (0x000520d6) popup_clock_digital_window_cp02_ParamLimits

0x5b27,	// (0x000520d6) popup_clock_digital_window_cp02

0x5b98,	// (0x00052147) main_clock2_list_single_pane_ParamLimits

0x5b98,	// (0x00052147) main_clock2_list_single_pane

0xaa33,	// (0x00056fe2) list_highlight_pane_cp05

0xd0e9,	// (0x00059698) main_clock2_list_single_pane_t1

0x23da,	// (0x0004e989) popup_toolbar_window_cp04_ParamLimits

0x4f75,	// (0x00051524) camera2_autofocus_pane_g2_ParamLimits

0x4f75,	// (0x00051524) camera2_autofocus_pane_g2

0x4f81,	// (0x00051530) camera2_autofocus_pane_g3_ParamLimits

0x4f81,	// (0x00051530) camera2_autofocus_pane_g3

0x4f8d,	// (0x0005153c) camera2_autofocus_pane_g4_ParamLimits

0x4f8d,	// (0x0005153c) camera2_autofocus_pane_g4

0x4f99,	// (0x00051548) camera2_autofocus_pane_g5_ParamLimits

0x4f99,	// (0x00051548) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x0005bccf) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x0005bccf) camera2_autofocus_pane_g

0x51d9,	// (0x00051788) camera2_autofocus_pane_cp_g2

0x51e1,	// (0x00051790) camera2_autofocus_pane_cp_g3

0x51e9,	// (0x00051798) camera2_autofocus_pane_cp_g4

0x51f1,	// (0x000517a0) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x0005bd35) camera2_autofocus_pane_cp_g

0x5891,	// (0x00051e40) popup_dialer_spcha_window

0x9719,	// (0x00055cc8) bg_popup_sub_pane_cp07

0xd0f7,	// (0x000596a6) list_spcha_pane

0xd0ff,	// (0x000596ae) list_single_spcha_pane_ParamLimits

0xd0ff,	// (0x000596ae) list_single_spcha_pane

0x9719,	// (0x00055cc8) list_highlight_pane_cp06

0xd110,	// (0x000596bf) list_single_spcha_pane_t1

0xc2ca,	// (0x00058879) popup_call2_audio_out_window_g4_ParamLimits

0xc2ca,	// (0x00058879) popup_call2_audio_out_window_g4

0x9719,	// (0x00055cc8) main_imed2_pane

0x9a37,	// (0x00055fe6) popup_imed_adjust2_window

0x4349,	// (0x000508f8) popup_imed_trans_window_ParamLimits

0x4349,	// (0x000508f8) popup_imed_trans_window

0xcb13,	// (0x000590c2) popup_blid_sat_info2_window_t1

0xcb21,	// (0x000590d0) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x0005bc64) popup_blid_sat_info2_window_t

0x5c41,	// (0x000521f0) aid_size_cell_colour_35

0x5c61,	// (0x00052210) aid_size_cell_colour_112

0x5c81,	// (0x00052230) aid_size_cell_effect

0xc8cd,	// (0x00058e7c) bg_tb_trans_pane_cp02

0xaee2,	// (0x00057491) heading_imed_pane

0x5ca1,	// (0x00052250) listscroll_imed_pane

0xd11e,	// (0x000596cd) heading_imed_pane_g1

0xd126,	// (0x000596d5) heading_imed_pane_t1

0xd134,	// (0x000596e3) grid_imed_colour_35_pane_ParamLimits

0xd134,	// (0x000596e3) grid_imed_colour_35_pane

0x5cad,	// (0x0005225c) grid_imed_effect_pane

0xd14c,	// (0x000596fb) list_imed_aspect_pane

0x5cc3,	// (0x00052272) scroll_pane_cp027_ParamLimits

0x5cc3,	// (0x00052272) scroll_pane_cp027

0x5cd4,	// (0x00052283) cell_imed_effect_pane_ParamLimits

0x5cd4,	// (0x00052283) cell_imed_effect_pane

0xd154,	// (0x00059703) cell_imed_colour_pane_ParamLimits

0xd154,	// (0x00059703) cell_imed_colour_pane

0xd196,	// (0x00059745) cell_imed_colour_pane_g1_ParamLimits

0xd196,	// (0x00059745) cell_imed_colour_pane_g1

0xd1a7,	// (0x00059756) hgihlgiht_grid_pane_cp016_ParamLimits

0xd1a7,	// (0x00059756) hgihlgiht_grid_pane_cp016

0x5cfb,	// (0x000522aa) cell_imed_effect_pane_g1

0x5d03,	// (0x000522b2) grid_highlight_pane_cp017

0xd1b8,	// (0x00059767) list_imed_single_pane_ParamLimits

0xd1b8,	// (0x00059767) list_imed_single_pane

0x9719,	// (0x00055cc8) list_highlight_pane_cp07

0xd1cd,	// (0x0005977c) list_imed_aspect_pane_comp1_t1

0xc8cd,	// (0x00058e7c) bg_tb_trans_pane_cp05

0xd1ef,	// (0x0005979e) popup_imed_adjust2_window_g1

0xd216,	// (0x000597c5) popup_imed_adjust2_window_t1

0xd22e,	// (0x000597dd) slider_imed_adjust_pane

0xd242,	// (0x000597f1) slider_imed_adjust_pane_g1

0xd252,	// (0x00059801) slider_imed_adjust_pane_g2

0xd262,	// (0x00059811) slider_imed_adjust_pane_g3

0xd273,	// (0x00059822) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x0005bda8) slider_imed_adjust_pane_g

0x5d0c,	// (0x000522bb) aid_size_cell_clipart2

0x5d18,	// (0x000522c7) grid_imed_clipart_pane

0xd284,	// (0x00059833) scroll_pane_cp031

0x5d22,	// (0x000522d1) cell_imed_clipart_pane_ParamLimits

0x5d22,	// (0x000522d1) cell_imed_clipart_pane

0x5d44,	// (0x000522f3) cell_imed_clipart_pane_g1

0x9719,	// (0x00055cc8) grid_highlight_pane_cp014

0x5a01,	// (0x00051fb0) main_clock2_pane_g1_ParamLimits

0x5a01,	// (0x00051fb0) main_clock2_pane_g1

0x5b43,	// (0x000520f2) aid_call2_pane_cp10

0x5b55,	// (0x00052104) aid_call_pane_cp10

0xb2b7,	// (0x00057866) popup_clock_analogue_window_cp10_g1

0xb2b7,	// (0x00057866) popup_clock_analogue_window_cp10_g2

0x5b67,	// (0x00052116) popup_clock_analogue_window_cp10_g3

0x5b67,	// (0x00052116) popup_clock_analogue_window_cp10_g4

0xb2b7,	// (0x00057866) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x0005bd96) popup_clock_analogue_window_cp10_g

0x5b79,	// (0x00052128) popup_clock_analogue_window_cp10_t1

0x5baa,	// (0x00052159) clock_digital_number_pane_cp10_ParamLimits

0x5baa,	// (0x00052159) clock_digital_number_pane_cp10

0x5bc2,	// (0x00052171) clock_digital_number_pane_cp11_ParamLimits

0x5bc2,	// (0x00052171) clock_digital_number_pane_cp11

0x5bda,	// (0x00052189) clock_digital_number_pane_cp12_ParamLimits

0x5bda,	// (0x00052189) clock_digital_number_pane_cp12

0x5bf2,	// (0x000521a1) clock_digital_number_pane_cp13_ParamLimits

0x5bf2,	// (0x000521a1) clock_digital_number_pane_cp13

0x5c0a,	// (0x000521b9) clock_digital_separator_pane_cp10_ParamLimits

0x5c0a,	// (0x000521b9) clock_digital_separator_pane_cp10

0x5c22,	// (0x000521d1) popup_clock_digital_window_cp02_t1_ParamLimits

0x5c22,	// (0x000521d1) popup_clock_digital_window_cp02_t1

0xa765,	// (0x00056d14) clock_digital_number_pane_cp10_g1

0xa765,	// (0x00056d14) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x0005bdb1) clock_digital_number_pane_cp10_g

0xa765,	// (0x00056d14) clock_digital_separator_pane_cp10_g1

0xa765,	// (0x00056d14) clock_digital_separator_pane_g2_cp10

0xb444,	// (0x000579f3) navi_pane_vded_g4

0xb44d,	// (0x000579fc) navi_pane_vded_g5

0xb456,	// (0x00057a05) navi_pane_vded_t1

0x9719,	// (0x00055cc8) main_vded_pane

0x5d4d,	// (0x000522fc) main_vded_pane_g1

0x5d57,	// (0x00052306) main_vded_pane_g2

0x5d61,	// (0x00052310) main_vded_pane_g3

0x0002,

0xf807,	// (0x0005bdb6) main_vded_pane_g

0x5d6b,	// (0x0005231a) main_vded_pane_t1

0x5d79,	// (0x00052328) main_vded_pane_t2

0x0001,

0xf80e,	// (0x0005bdbd) main_vded_pane_t

0x5d87,	// (0x00052336) vded_slider_pane

0x5d8f,	// (0x0005233e) vded_video_pane

0xd28c,	// (0x0005983b) vded_video_pane_g1

0x5d97,	// (0x00052346) vded_video_pane_g2

0xccd5,	// (0x00059284) vded_video_pane_g3

0x0002,

0xf813,	// (0x0005bdc2) vded_video_pane_g

0xd296,	// (0x00059845) vded_slider_pane_g1

0xca28,	// (0x00058fd7) vded_slider_pane_g2

0xd29f,	// (0x0005984e) vded_slider_pane_g3

0xd2a8,	// (0x00059857) vded_slider_pane_g4

0xd2b1,	// (0x00059860) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x0005bdc9) vded_slider_pane_g

0x5771,	// (0x00051d20) mup3_rocker_pane_ParamLimits

0x5771,	// (0x00051d20) mup3_rocker_pane

0x5da0,	// (0x0005234f) mup3_control_keys_pane_g1

0x5da8,	// (0x00052357) mup3_control_keys_pane_g2

0x5db0,	// (0x0005235f) mup3_control_keys_pane_g3

0x5db8,	// (0x00052367) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x0005bdd4) mup3_control_keys_pane_g

0x14c5,	// (0x0004da74) popup_toolbar2_fixed_window_cp01_ParamLimits

0x14c5,	// (0x0004da74) popup_toolbar2_fixed_window_cp01

0x57a5,	// (0x00051d54) popup_toolbar2_fixed_window_cp02_ParamLimits

0x57a5,	// (0x00051d54) popup_toolbar2_fixed_window_cp02

0xbc09,	// (0x000581b8) popup_call2_audio_second_window_t4_ParamLimits

0xbc09,	// (0x000581b8) popup_call2_audio_second_window_t4

0xc137,	// (0x000586e6) popup_call2_audio_first_window_t6_ParamLimits

0xc137,	// (0x000586e6) popup_call2_audio_first_window_t6

0xc3cd,	// (0x0005897c) popup_call2_audio_out_window_t6_ParamLimits

0xc3cd,	// (0x0005897c) popup_call2_audio_out_window_t6

0x9719,	// (0x00055cc8) main_vitu_pane

0x5dc8,	// (0x00052377) aid_size_cell_itu_ParamLimits

0x5dc8,	// (0x00052377) aid_size_cell_itu

0xa1fa,	// (0x000567a9) bg_popup_window_pane_cp08_ParamLimits

0xa1fa,	// (0x000567a9) bg_popup_window_pane_cp08

0x5dde,	// (0x0005238d) field_vitu_entry_pane_ParamLimits

0x5dde,	// (0x0005238d) field_vitu_entry_pane

0x5df6,	// (0x000523a5) grid_vitu_function_pane_ParamLimits

0x5df6,	// (0x000523a5) grid_vitu_function_pane

0x5e11,	// (0x000523c0) grid_vitu_itu_pane_ParamLimits

0x5e11,	// (0x000523c0) grid_vitu_itu_pane

0x5e2f,	// (0x000523de) cell_vitu_itu_pane_ParamLimits

0x5e2f,	// (0x000523de) cell_vitu_itu_pane

0x5e51,	// (0x00052400) cell_vitu_function_pane_ParamLimits

0x5e51,	// (0x00052400) cell_vitu_function_pane

0xa1fa,	// (0x000567a9) bg_popup_sub_pane_cp08_ParamLimits

0xa1fa,	// (0x000567a9) bg_popup_sub_pane_cp08

0x5e6a,	// (0x00052419) field_vitu_entry_pane_t1_ParamLimits

0x5e6a,	// (0x00052419) field_vitu_entry_pane_t1

0xd2d2,	// (0x00059881) field_vitu_entry_pane_t2_ParamLimits

0xd2d2,	// (0x00059881) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x0005bde2) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x0005bde2) field_vitu_entry_pane_t

0xd2ef,	// (0x0005989e) bg_button_pane_cp05_ParamLimits

0xd2ef,	// (0x0005989e) bg_button_pane_cp05

0x5e89,	// (0x00052438) cell_vitu_itu_pane_g1

0x5ea1,	// (0x00052450) cell_vitu_itu_pane_t1_ParamLimits

0x5ea1,	// (0x00052450) cell_vitu_itu_pane_t1

0x5eb3,	// (0x00052462) cell_vitu_itu_pane_t2_ParamLimits

0x5eb3,	// (0x00052462) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x0005bde7) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x0005bde7) cell_vitu_itu_pane_t

0xd2fd,	// (0x000598ac) bg_button_pane_cp07

0x5ee8,	// (0x00052497) cell_vitu_function_pane_g1

0x988a,	// (0x00055e39) main_calc_pane_g1

0x12dc,	// (0x0004d88b) aid_visual_content_pane

0x9719,	// (0x00055cc8) main_vradio_pane

0x5ef1,	// (0x000524a0) main_vradio_pane_g1_ParamLimits

0x5ef1,	// (0x000524a0) main_vradio_pane_g1

0xd307,	// (0x000598b6) main_vradio_pane_g2_ParamLimits

0xd307,	// (0x000598b6) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x0005bdee) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x0005bdee) main_vradio_pane_g

0x5f0a,	// (0x000524b9) main_vradio_pane_t1_ParamLimits

0x5f0a,	// (0x000524b9) main_vradio_pane_t1

0x5f1f,	// (0x000524ce) main_vradio_pane_t2_ParamLimits

0x5f1f,	// (0x000524ce) main_vradio_pane_t2

0xd314,	// (0x000598c3) main_vradio_pane_t3_ParamLimits

0xd314,	// (0x000598c3) main_vradio_pane_t3

0x0002,

0xf844,	// (0x0005bdf3) main_vradio_pane_t_ParamLimits

0xf844,	// (0x0005bdf3) main_vradio_pane_t

0x5f34,	// (0x000524e3) vradio_rocker_control_pane_ParamLimits

0x5f34,	// (0x000524e3) vradio_rocker_control_pane

0x5f46,	// (0x000524f5) vradio_station_info_pane_ParamLimits

0x5f46,	// (0x000524f5) vradio_station_info_pane

0xd328,	// (0x000598d7) vradio_frequency_info_pane_ParamLimits

0xd328,	// (0x000598d7) vradio_frequency_info_pane

0xccd5,	// (0x00059284) vradio_station_info_pane_g1

0xd337,	// (0x000598e6) vradio_station_info_pane_t1_ParamLimits

0xd337,	// (0x000598e6) vradio_station_info_pane_t1

0xd359,	// (0x00059908) vradio_station_info_pane_t2_ParamLimits

0xd359,	// (0x00059908) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x0005bdfa) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x0005bdfa) vradio_station_info_pane_t

0xd36b,	// (0x0005991a) vradio_tuning_pane

0xd373,	// (0x00059922) vradio_rocker_control_pane_g1

0xd37b,	// (0x0005992a) vradio_rocker_control_pane_g2

0xd383,	// (0x00059932) vradio_rocker_control_pane_g3

0xd38b,	// (0x0005993a) vradio_rocker_control_pane_g4

0xd393,	// (0x00059942) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x0005bdff) vradio_rocker_control_pane_g

0x5f58,	// (0x00052507) vradio_frequency_info_pane_g1

0xd39b,	// (0x0005994a) vradio_frequency_info_pane_t1_ParamLimits

0xd39b,	// (0x0005994a) vradio_frequency_info_pane_t1

0x5f62,	// (0x00052511) vradio_tuning_pane_g1

0x5f6d,	// (0x0005251c) vradio_tuning_pane_t1

0x973f,	// (0x00055cee) area_side_right_pane_ParamLimits

0x973f,	// (0x00055cee) area_side_right_pane

0xc888,	// (0x00058e37) status_small_pane_g1

0xc890,	// (0x00058e3f) status_small_pane_g2

0xc899,	// (0x00058e48) status_small_pane_g3

0xc8a2,	// (0x00058e51) status_small_pane_g4

0x0003,

0xf60b,	// (0x0005bbba) status_small_pane_g

0xc8ab,	// (0x00058e5a) status_small_pane_t1

0x9719,	// (0x00055cc8) main_video3_pane

0xd3af,	// (0x0005995e) cams_zoom_vslider_pane

0xd3b7,	// (0x00059966) image3_wide_pane_ParamLimits

0xd3b7,	// (0x00059966) image3_wide_pane

0xd3d1,	// (0x00059980) image3_wide_small_pane

0xd3dd,	// (0x0005998c) main_video3_pane_g1_ParamLimits

0xd3dd,	// (0x0005998c) main_video3_pane_g1

0xd3f9,	// (0x000599a8) main_video3_pane_g2_ParamLimits

0xd3f9,	// (0x000599a8) main_video3_pane_g2

0x0001,

0xf85b,	// (0x0005be0a) main_video3_pane_g_ParamLimits

0xf85b,	// (0x0005be0a) main_video3_pane_g

0xd415,	// (0x000599c4) main_video3_pane_t1_ParamLimits

0xd415,	// (0x000599c4) main_video3_pane_t1

0xd440,	// (0x000599ef) main_video3_pane_t2_ParamLimits

0xd440,	// (0x000599ef) main_video3_pane_t2

0xd46b,	// (0x00059a1a) main_video3_pane_t3_ParamLimits

0xd46b,	// (0x00059a1a) main_video3_pane_t3

0x0002,

0xf860,	// (0x0005be0f) main_video3_pane_t_ParamLimits

0xf860,	// (0x0005be0f) main_video3_pane_t

0xd498,	// (0x00059a47) cams_zoom_vslider_pane_g1

0xd4a1,	// (0x00059a50) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x0005be16) cams_zoom_vslider_pane_g

0xd4a9,	// (0x00059a58) small_slider_vertical_pane

0xccd5,	// (0x00059284) small_slider_vertical_pane_g1

0xccd5,	// (0x00059284) small_slider_vertical_pane_g2

0xd4b1,	// (0x00059a60) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x0005be1b) small_slider_vertical_pane_g

0x9719,	// (0x00055cc8) main_hwr_training_pane

0xd4ba,	// (0x00059a69) hwr_training_instruct_pane_ParamLimits

0xd4ba,	// (0x00059a69) hwr_training_instruct_pane

0x5f7c,	// (0x0005252b) hwr_training_navi_pane_ParamLimits

0x5f7c,	// (0x0005252b) hwr_training_navi_pane

0x5f9b,	// (0x0005254a) hwr_training_write_pane_ParamLimits

0x5f9b,	// (0x0005254a) hwr_training_write_pane

0x9719,	// (0x00055cc8) bg_frame_shadow_pane

0xd4f1,	// (0x00059aa0) hwr_training_write_pane_g1

0xd4f9,	// (0x00059aa8) hwr_training_write_pane_g2

0xd501,	// (0x00059ab0) hwr_training_write_pane_g3

0xd509,	// (0x00059ab8) hwr_training_write_pane_g4

0xd511,	// (0x00059ac0) hwr_training_write_pane_g5

0xd519,	// (0x00059ac8) hwr_training_write_pane_g6

0xd521,	// (0x00059ad0) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x0005be22) hwr_training_write_pane_g

0x9b30,	// (0x000560df) hwr_training_navi_pane_g1_ParamLimits

0x9b30,	// (0x000560df) hwr_training_navi_pane_g1

0x9b42,	// (0x000560f1) hwr_training_navi_pane_g2_ParamLimits

0x9b42,	// (0x000560f1) hwr_training_navi_pane_g2

0x9b54,	// (0x00056103) hwr_training_navi_pane_g3_ParamLimits

0x9b54,	// (0x00056103) hwr_training_navi_pane_g3

0x9b64,	// (0x00056113) hwr_training_navi_pane_g4_ParamLimits

0x9b64,	// (0x00056113) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x0005be31) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x0005be31) hwr_training_navi_pane_g

0x9b71,	// (0x00056120) hwr_training_navi_pane_t1

0x5fe5,	// (0x00052594) list_single_hwr_training_instruct_pane_ParamLimits

0x5fe5,	// (0x00052594) list_single_hwr_training_instruct_pane

0xd529,	// (0x00059ad8) list_single_hwr_training_instruct_pane_t1

0xcc15,	// (0x000591c4) bg_frame_shadow_pane_g1

0xd538,	// (0x00059ae7) bg_frame_shadow_pane_g2

0xd540,	// (0x00059aef) bg_frame_shadow_pane_g3

0xd548,	// (0x00059af7) bg_frame_shadow_pane_g4

0xd550,	// (0x00059aff) bg_frame_shadow_pane_g5

0xd558,	// (0x00059b07) bg_frame_shadow_pane_g6

0xd560,	// (0x00059b0f) bg_frame_shadow_pane_g7

0xa909,	// (0x00056eb8) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x0005be3c) bg_frame_shadow_pane_g

0x9719,	// (0x00055cc8) main_video_tele_dialer_pane

0x5ffb,	// (0x000525aa) aid_size_cell_video_keypad_ParamLimits

0x5ffb,	// (0x000525aa) aid_size_cell_video_keypad

0x6015,	// (0x000525c4) grid_video_dialer_keypad_pane_ParamLimits

0x6015,	// (0x000525c4) grid_video_dialer_keypad_pane

0x6063,	// (0x00052612) video_down_pane_cp_ParamLimits

0x6063,	// (0x00052612) video_down_pane_cp

0x6095,	// (0x00052644) cell_video_dialer_keypad_pane_ParamLimits

0x6095,	// (0x00052644) cell_video_dialer_keypad_pane

0xd568,	// (0x00059b17) bg_button_pane_cp08_ParamLimits

0xd568,	// (0x00059b17) bg_button_pane_cp08

0x60b7,	// (0x00052666) cell_video_dialer_keypad_pane_g1_ParamLimits

0x60b7,	// (0x00052666) cell_video_dialer_keypad_pane_g1

0x575b,	// (0x00051d0a) mup3_rocker2_pane_ParamLimits

0x575b,	// (0x00051d0a) mup3_rocker2_pane

0xccd5,	// (0x00059284) mup3_rocker2_pane_g1

0x4238,	// (0x000507e7) main_dialer2_pane

0x9719,	// (0x00055cc8) main_mp4_pane

0x9b87,	// (0x00056136) main_mp4_pane_g1_ParamLimits

0x9b87,	// (0x00056136) main_mp4_pane_g1

0x9b87,	// (0x00056136) main_mp4_pane_g2_ParamLimits

0x9b87,	// (0x00056136) main_mp4_pane_g2

0x60f1,	// (0x000526a0) main_mp4_pane_g3_ParamLimits

0x60f1,	// (0x000526a0) main_mp4_pane_g3

0x9b95,	// (0x00056144) main_mp4_pane_g4_ParamLimits

0x9b95,	// (0x00056144) main_mp4_pane_g4

0x9bbd,	// (0x0005616c) main_mp4_pane_g5_ParamLimits

0x9bbd,	// (0x0005616c) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x0005be5c) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x0005be5c) main_mp4_pane_g

0x9c0d,	// (0x000561bc) main_mp4_pane_t1_ParamLimits

0x9c0d,	// (0x000561bc) main_mp4_pane_t1

0x9c69,	// (0x00056218) main_mp4_pane_t2_ParamLimits

0x9c69,	// (0x00056218) main_mp4_pane_t2

0xd574,	// (0x00059b23) main_mp4_pane_t3_ParamLimits

0xd574,	// (0x00059b23) main_mp4_pane_t3

0x9cbb,	// (0x0005626a) main_mp4_pane_t4_ParamLimits

0x9cbb,	// (0x0005626a) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0005be69) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0005be69) main_mp4_pane_t

0x9cff,	// (0x000562ae) mp4_progress_pane_ParamLimits

0x9cff,	// (0x000562ae) mp4_progress_pane

0x9d49,	// (0x000562f8) mp4_rocker_pane_ParamLimits

0x9d49,	// (0x000562f8) mp4_rocker_pane

0xd59c,	// (0x00059b4b) mp4_progress_pane_t1

0xd5b5,	// (0x00059b64) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x0005be72) mp4_progress_pane_t

0xd5ce,	// (0x00059b7d) mup_progress_pane_cp04

0xccd5,	// (0x00059284) mp4_rocker_pane_g1

0x612d,	// (0x000526dc) aid_cell_size_keypad2_ParamLimits

0x612d,	// (0x000526dc) aid_cell_size_keypad2

0x6143,	// (0x000526f2) dialer2_ne_pane_ParamLimits

0x6143,	// (0x000526f2) dialer2_ne_pane

0x615d,	// (0x0005270c) grid_dialer2_keypad_pane_ParamLimits

0x615d,	// (0x0005270c) grid_dialer2_keypad_pane

0xcaba,	// (0x00059069) bg_popup_call_pane_cp07_ParamLimits

0xcaba,	// (0x00059069) bg_popup_call_pane_cp07

0x6179,	// (0x00052728) dialer2_ne_pane_t1_ParamLimits

0x6179,	// (0x00052728) dialer2_ne_pane_t1

0x61b5,	// (0x00052764) cell_dialer2_keypad_pane_ParamLimits

0x61b5,	// (0x00052764) cell_dialer2_keypad_pane

0xd5ec,	// (0x00059b9b) bg_button_pane_pane_cp04_ParamLimits

0xd5ec,	// (0x00059b9b) bg_button_pane_pane_cp04

0x61d7,	// (0x00052786) cell_dialer2_keypad_pane_g1_ParamLimits

0x61d7,	// (0x00052786) cell_dialer2_keypad_pane_g1

0x22ae,	// (0x0004e85d) aid_placing_vt_set_content_ParamLimits

0x22ae,	// (0x0004e85d) aid_placing_vt_set_content

0x22d6,	// (0x0004e885) aid_placing_vt_set_title_ParamLimits

0x22d6,	// (0x0004e885) aid_placing_vt_set_title

0x9719,	// (0x00055cc8) main_image3_pane

0x629d,	// (0x0005284c) area_side_right_pane_cp01_ParamLimits

0x629d,	// (0x0005284c) area_side_right_pane_cp01

0x9b87,	// (0x00056136) main_image3_pane_g1_ParamLimits

0x9b87,	// (0x00056136) main_image3_pane_g1

0x62b4,	// (0x00052863) main_image3_pane_g2_ParamLimits

0x62b4,	// (0x00052863) main_image3_pane_g2

0x62dc,	// (0x0005288b) main_image3_pane_g3_ParamLimits

0x62dc,	// (0x0005288b) main_image3_pane_g3

0x6306,	// (0x000528b5) main_image3_pane_g4_ParamLimits

0x6306,	// (0x000528b5) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x0005be81) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x0005be81) main_image3_pane_g

0x6330,	// (0x000528df) main_image3_pane_t1_ParamLimits

0x6330,	// (0x000528df) main_image3_pane_t1

0x6388,	// (0x00052937) main_image3_pane_t2_ParamLimits

0x6388,	// (0x00052937) main_image3_pane_t2

0x63da,	// (0x00052989) main_image3_pane_t3_ParamLimits

0x63da,	// (0x00052989) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0005be8a) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0005be8a) main_image3_pane_t

0xa1fa,	// (0x000567a9) grid_sctrl_middle_pane_cp01_ParamLimits

0xa1fa,	// (0x000567a9) grid_sctrl_middle_pane_cp01

0x6462,	// (0x00052a11) cell_sctrl_middle_pane_cp01_ParamLimits

0x6462,	// (0x00052a11) cell_sctrl_middle_pane_cp01

0x647f,	// (0x00052a2e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x647f,	// (0x00052a2e) cell_sctrl_middle_pane_cp01_g1

0x9719,	// (0x00055cc8) main_call4_pane

0x6495,	// (0x00052a44) aid_size_button_call4_ParamLimits

0x6495,	// (0x00052a44) aid_size_button_call4

0x64c6,	// (0x00052a75) call4_windows_pane_ParamLimits

0x64c6,	// (0x00052a75) call4_windows_pane

0x64e6,	// (0x00052a95) grid_call4_button_pane_ParamLimits

0x64e6,	// (0x00052a95) grid_call4_button_pane

0xd5f8,	// (0x00059ba7) call4_windows_conf_pane

0xd60f,	// (0x00059bbe) popup_call4_audio_first_window_ParamLimits

0xd60f,	// (0x00059bbe) popup_call4_audio_first_window

0xd65b,	// (0x00059c0a) popup_call4_audio_second_window_ParamLimits

0xd65b,	// (0x00059c0a) popup_call4_audio_second_window

0xd66f,	// (0x00059c1e) popup_call4_audio_wait_window_ParamLimits

0xd66f,	// (0x00059c1e) popup_call4_audio_wait_window

0x6513,	// (0x00052ac2) cell_call4_button_pane_ParamLimits

0x6513,	// (0x00052ac2) cell_call4_button_pane

0x653c,	// (0x00052aeb) bg_button_pane_cp09_ParamLimits

0x653c,	// (0x00052aeb) bg_button_pane_cp09

0x6548,	// (0x00052af7) cell_call4_button_pane_g1_ParamLimits

0x6548,	// (0x00052af7) cell_call4_button_pane_g1

0x656e,	// (0x00052b1d) cell_call4_button_pane_t1_ParamLimits

0x656e,	// (0x00052b1d) cell_call4_button_pane_t1

0xd6b7,	// (0x00059c66) popup_call4_audio_conf_window_ParamLimits

0xd6b7,	// (0x00059c66) popup_call4_audio_conf_window

0x57bb,	// (0x00051d6a) mup3_progress_pane_t1_ParamLimits

0x57da,	// (0x00051d89) mup3_progress_pane_t2_ParamLimits

0xcfaa,	// (0x00059559) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x0005bd5e) mup3_progress_pane_t_ParamLimits

0xcfc7,	// (0x00059576) mup_progress_pane_cp03_ParamLimits

0x5dc0,	// (0x0005236f) mup3_control_keys_pane_g4_copy1

0x9d2d,	// (0x000562dc) mp4_rocker2_pane_ParamLimits

0x9d2d,	// (0x000562dc) mp4_rocker2_pane

0xd6cb,	// (0x00059c7a) mp4_rocker2_pane_g1

0xd6d3,	// (0x00059c82) mp4_rocker2_pane_g2

0x9d9b,	// (0x0005634a) mp4_rocker2_pane_g3

0x9da3,	// (0x00056352) mp4_rocker2_pane_g4

0x9dab,	// (0x0005635a) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0005be93) mp4_rocker2_pane_g

0x9719,	// (0x00055cc8) main_camera4_pane

0x9719,	// (0x00055cc8) main_video4_pane

0x6031,	// (0x000525e0) main_video_tele_dialer_pane_t1_ParamLimits

0x6031,	// (0x000525e0) main_video_tele_dialer_pane_t1

0x604a,	// (0x000525f9) main_video_tele_dialer_pane_t2_ParamLimits

0x604a,	// (0x000525f9) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x0005be4d) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x0005be4d) main_video_tele_dialer_pane_t

0x65b0,	// (0x00052b5f) cam4_autofocus_pane_ParamLimits

0x65b0,	// (0x00052b5f) cam4_autofocus_pane

0x65c6,	// (0x00052b75) cam4_image_uncrop_pane_ParamLimits

0x65c6,	// (0x00052b75) cam4_image_uncrop_pane

0x65e0,	// (0x00052b8f) cam4_indicators_pane_ParamLimits

0x65e0,	// (0x00052b8f) cam4_indicators_pane

0x660b,	// (0x00052bba) main_camera4_pane_g1_ParamLimits

0x660b,	// (0x00052bba) main_camera4_pane_g1

0x661d,	// (0x00052bcc) main_camera4_pane_g2_ParamLimits

0x661d,	// (0x00052bcc) main_camera4_pane_g2

0x6630,	// (0x00052bdf) main_camera4_pane_g3_ParamLimits

0x6630,	// (0x00052bdf) main_camera4_pane_g3

0x6643,	// (0x00052bf2) main_camera4_pane_g4_ParamLimits

0x6643,	// (0x00052bf2) main_camera4_pane_g4

0x6656,	// (0x00052c05) main_camera4_pane_g5_ParamLimits

0x6656,	// (0x00052c05) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x0005be9e) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x0005be9e) main_camera4_pane_g

0x667a,	// (0x00052c29) main_camera4_pane_t1_ParamLimits

0x667a,	// (0x00052c29) main_camera4_pane_t1

0xcf2f,	// (0x000594de) bg_tb_trans_pane_cp06

0x9dd7,	// (0x00056386) cam4_indicators_pane_g1

0x9de8,	// (0x00056397) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0005beb9) cam4_indicators_pane_g

0x9e00,	// (0x000563af) cam4_indicators_pane_t1

0x66de,	// (0x00052c8d) main_video4_pane_g1_ParamLimits

0x66de,	// (0x00052c8d) main_video4_pane_g1

0x66ed,	// (0x00052c9c) main_video4_pane_g2_ParamLimits

0x66ed,	// (0x00052c9c) main_video4_pane_g2

0x66fc,	// (0x00052cab) main_video4_pane_g3_ParamLimits

0x66fc,	// (0x00052cab) main_video4_pane_g3

0x670b,	// (0x00052cba) main_video4_pane_g4_ParamLimits

0x670b,	// (0x00052cba) main_video4_pane_g4

0x0004,

0xf911,	// (0x0005bec0) main_video4_pane_g_ParamLimits

0xf911,	// (0x0005bec0) main_video4_pane_g

0x6729,	// (0x00052cd8) vid4_indicators_pane_ParamLimits

0x6729,	// (0x00052cd8) vid4_indicators_pane

0x6757,	// (0x00052d06) video4_image_uncrop_cif_pane_ParamLimits

0x6757,	// (0x00052d06) video4_image_uncrop_cif_pane

0x6771,	// (0x00052d20) video4_image_uncrop_nhd_pane_ParamLimits

0x6771,	// (0x00052d20) video4_image_uncrop_nhd_pane

0x65c6,	// (0x00052b75) video4_image_uncrop_vga_pane_ParamLimits

0x65c6,	// (0x00052b75) video4_image_uncrop_vga_pane

0xa1fa,	// (0x000567a9) bg_tb_trans_pane_cp07

0x9e2a,	// (0x000563d9) vid4_indicators_pane_g1

0x9e3e,	// (0x000563ed) vid4_indicators_pane_g2

0x9e52,	// (0x00056401) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0005becb) vid4_indicators_pane_g

0x9e7f,	// (0x0005642e) vid4_indicators_pane_t1

0x6785,	// (0x00052d34) cam4_autofocus_pane_g1

0x678d,	// (0x00052d3c) cam4_autofocus_pane_g2

0x6795,	// (0x00052d44) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0005bed6) cam4_autofocus_pane_g

0x679d,	// (0x00052d4c) cam4_autofocus_pane_g3_copy1

0x6079,	// (0x00052628) video_down_pane_cp_t1

0x6087,	// (0x00052636) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x0005be52) video_down_pane_cp_t

0xa1fa,	// (0x000567a9) popup_vitu2_window_ParamLimits

0xa1fa,	// (0x000567a9) popup_vitu2_window

0x67a5,	// (0x00052d54) aid_size_cell2_itu2_ParamLimits

0x67a5,	// (0x00052d54) aid_size_cell2_itu2

0x67cb,	// (0x00052d7a) aid_size_cell_itu2_ParamLimits

0x67cb,	// (0x00052d7a) aid_size_cell_itu2

0x6827,	// (0x00052dd6) bg_popup_window_pane_cp09_ParamLimits

0x6827,	// (0x00052dd6) bg_popup_window_pane_cp09

0x6835,	// (0x00052de4) field_vitu2_entry_pane_ParamLimits

0x6835,	// (0x00052de4) field_vitu2_entry_pane

0x685b,	// (0x00052e0a) grid_vitu2_function_pane_ParamLimits

0x685b,	// (0x00052e0a) grid_vitu2_function_pane

0x68ac,	// (0x00052e5b) grid_vitu2_itu_pane_ParamLimits

0x68ac,	// (0x00052e5b) grid_vitu2_itu_pane

0x6942,	// (0x00052ef1) cell_vitu2_itu_pane_ParamLimits

0x6942,	// (0x00052ef1) cell_vitu2_itu_pane

0x696e,	// (0x00052f1d) cell_vitu2_function_pane_ParamLimits

0x696e,	// (0x00052f1d) cell_vitu2_function_pane

0xd6db,	// (0x00059c8a) bg_popup_call_pane_cp08_ParamLimits

0xd6db,	// (0x00059c8a) bg_popup_call_pane_cp08

0xd6f2,	// (0x00059ca1) field_vitu2_entry_pane_g1

0xd6fe,	// (0x00059cad) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x0005bedd) field_vitu2_entry_pane_g

0x0657,	// (0x0004cc06) field_vitu2_entry_pane_t1_ParamLimits

0x0657,	// (0x0004cc06) field_vitu2_entry_pane_t1

0x69ad,	// (0x00052f5c) field_vitu2_entry_pane_t2_ParamLimits

0x69ad,	// (0x00052f5c) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0005bee4) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0005bee4) field_vitu2_entry_pane_t

0x69ca,	// (0x00052f79) bg_button_pane_cp010_ParamLimits

0x69ca,	// (0x00052f79) bg_button_pane_cp010

0x9e96,	// (0x00056445) cell_vitu2_itu_pane_g1

0x69e6,	// (0x00052f95) cell_vitu2_itu_pane_t1_ParamLimits

0x69e6,	// (0x00052f95) cell_vitu2_itu_pane_t1

0x0687,	// (0x0004cc36) cell_vitu2_itu_pane_t2_ParamLimits

0x0687,	// (0x0004cc36) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0005beee) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0005beee) cell_vitu2_itu_pane_t

0xa1fa,	// (0x000567a9) bg_button_pane_cp011

0x6a44,	// (0x00052ff3) cell_vitu2_function_pane_g1

0x9719,	// (0x00055cc8) main_myfav_hc_pane

0x642a,	// (0x000529d9) popup_image3_note_pane_ParamLimits

0x642a,	// (0x000529d9) popup_image3_note_pane

0x6446,	// (0x000529f5) popup_image3_tool_bar_pane_ParamLimits

0x6446,	// (0x000529f5) popup_image3_tool_bar_pane

0x0715,	// (0x0004ccc4) cell_vitu2_itu_pane_t3_ParamLimits

0x0715,	// (0x0004ccc4) cell_vitu2_itu_pane_t3

0x9719,	// (0x00055cc8) bg_popup_trans_pane

0xd720,	// (0x00059ccf) grid_image3_tool_bar_pane

0xd72a,	// (0x00059cd9) bg_popup_trans_pane_g1

0xac8c,	// (0x0005723b) bg_popup_trans_pane_g2

0xd732,	// (0x00059ce1) bg_popup_trans_pane_g3

0xd73a,	// (0x00059ce9) bg_popup_trans_pane_g4

0xd742,	// (0x00059cf1) bg_popup_trans_pane_g5

0xd74a,	// (0x00059cf9) bg_popup_trans_pane_g6

0xd752,	// (0x00059d01) bg_popup_trans_pane_g7

0xd75a,	// (0x00059d09) bg_popup_trans_pane_g8

0xac6c,	// (0x0005721b) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0005bef5) bg_popup_trans_pane_g

0xd762,	// (0x00059d11) cell_image3_tool_bar_pane_ParamLimits

0xd762,	// (0x00059d11) cell_image3_tool_bar_pane

0xccd5,	// (0x00059284) cell_image3_tool_bar_pane_g1

0x9719,	// (0x00055cc8) bg_popup_trans_pane_cp1

0xd776,	// (0x00059d25) popup_image3_note_pane_t1

0xd784,	// (0x00059d33) popup_image3_note_pane_t2

0xd792,	// (0x00059d41) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x0005bf08) popup_image3_note_pane_t

0xd7a0,	// (0x00059d4f) popup_image3_note_pane_t3_copy1

0x6a58,	// (0x00053007) bg_myfav_hc_instruction_pane_ParamLimits

0x6a58,	// (0x00053007) bg_myfav_hc_instruction_pane

0x6a6c,	// (0x0005301b) cell_myfav_contact_pane_ParamLimits

0x6a6c,	// (0x0005301b) cell_myfav_contact_pane

0x6a8a,	// (0x00053039) cell_myfav_contact_pane_cp1_ParamLimits

0x6a8a,	// (0x00053039) cell_myfav_contact_pane_cp1

0x6aa2,	// (0x00053051) cell_myfav_contact_pane_cp2_ParamLimits

0x6aa2,	// (0x00053051) cell_myfav_contact_pane_cp2

0x6aba,	// (0x00053069) cell_myfav_contact_pane_cp3_ParamLimits

0x6aba,	// (0x00053069) cell_myfav_contact_pane_cp3

0x6ad1,	// (0x00053080) cell_myfav_contact_pane_cp4_ParamLimits

0x6ad1,	// (0x00053080) cell_myfav_contact_pane_cp4

0x6ae9,	// (0x00053098) cell_myfav_contact_pane_cp5_ParamLimits

0x6ae9,	// (0x00053098) cell_myfav_contact_pane_cp5

0x6afd,	// (0x000530ac) cell_myfav_contact_pane_cp6_ParamLimits

0x6afd,	// (0x000530ac) cell_myfav_contact_pane_cp6

0x6b13,	// (0x000530c2) cell_myfav_contact_pane_cp7_ParamLimits

0x6b13,	// (0x000530c2) cell_myfav_contact_pane_cp7

0xd7ae,	// (0x00059d5d) listscroll_gen_pane_cp05

0x6b2d,	// (0x000530dc) main_myfav_hc_pane_g1_ParamLimits

0x6b2d,	// (0x000530dc) main_myfav_hc_pane_g1

0x6b47,	// (0x000530f6) main_myfav_hc_pane_g2_ParamLimits

0x6b47,	// (0x000530f6) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x0005bf0f) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x0005bf0f) main_myfav_hc_pane_g

0x6b79,	// (0x00053128) main_myfav_hc_pane_t1_ParamLimits

0x6b79,	// (0x00053128) main_myfav_hc_pane_t1

0xd7b7,	// (0x00059d66) main_myfav_hc_pane_t2_ParamLimits

0xd7b7,	// (0x00059d66) main_myfav_hc_pane_t2

0xd7c9,	// (0x00059d78) main_myfav_hc_pane_t3_ParamLimits

0xd7c9,	// (0x00059d78) main_myfav_hc_pane_t3

0x6b90,	// (0x0005313f) main_myfav_hc_pane_t4_ParamLimits

0x6b90,	// (0x0005313f) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x0005bf16) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x0005bf16) main_myfav_hc_pane_t

0xccd5,	// (0x00059284) bg_myfav_hc_instruction_pane_g1

0xd7db,	// (0x00059d8a) cell_myfav_contact_pane_g1_ParamLimits

0xd7db,	// (0x00059d8a) cell_myfav_contact_pane_g1

0xd7db,	// (0x00059d8a) cell_myfav_contact_pane_g2_ParamLimits

0xd7db,	// (0x00059d8a) cell_myfav_contact_pane_g2

0xd7e7,	// (0x00059d96) cell_myfav_contact_pane_g3_ParamLimits

0xd7e7,	// (0x00059d96) cell_myfav_contact_pane_g3

0xcf94,	// (0x00059543) cell_myfav_contact_pane_g4_ParamLimits

0xcf94,	// (0x00059543) cell_myfav_contact_pane_g4

0xd7f4,	// (0x00059da3) cell_myfav_contact_pane_g5_ParamLimits

0xd7f4,	// (0x00059da3) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0005bf21) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0005bf21) cell_myfav_contact_pane_g

0x6b61,	// (0x00053110) main_myfav_hc_pane_g3_ParamLimits

0x6b61,	// (0x00053110) main_myfav_hc_pane_g3

0x1427,	// (0x0004d9d6) popup_adpt_find_window

0x6bb8,	// (0x00053167) afind_page_pane_ParamLimits

0x6bb8,	// (0x00053167) afind_page_pane

0x6bcd,	// (0x0005317c) aid_size_cell_afind_ParamLimits

0x6bcd,	// (0x0005317c) aid_size_cell_afind

0x6beb,	// (0x0005319a) bg_popup_sub_pane_cp09_ParamLimits

0x6beb,	// (0x0005319a) bg_popup_sub_pane_cp09

0x6bf8,	// (0x000531a7) find_pane_cp01_ParamLimits

0x6bf8,	// (0x000531a7) find_pane_cp01

0xd800,	// (0x00059daf) grid_afind_control_pane_ParamLimits

0xd800,	// (0x00059daf) grid_afind_control_pane

0x6c05,	// (0x000531b4) grid_afind_pane_ParamLimits

0x6c05,	// (0x000531b4) grid_afind_pane

0x6c24,	// (0x000531d3) cell_afind_pane_ParamLimits

0x6c24,	// (0x000531d3) cell_afind_pane

0xccd5,	// (0x00059284) afind_page_pane_g1

0x6c8b,	// (0x0005323a) afind_page_pane_g2

0x6c94,	// (0x00053243) afind_page_pane_g3

0x0002,

0xf97d,	// (0x0005bf2c) afind_page_pane_g

0x6c9d,	// (0x0005324c) afind_page_pane_t1

0xd814,	// (0x00059dc3) cell_afind_grid_control_pane_ParamLimits

0xd814,	// (0x00059dc3) cell_afind_grid_control_pane

0xd5ec,	// (0x00059b9b) bg_button_pane_cp69_ParamLimits

0xd5ec,	// (0x00059b9b) bg_button_pane_cp69

0x6cbd,	// (0x0005326c) cell_afind_pane_g1_ParamLimits

0x6cbd,	// (0x0005326c) cell_afind_pane_g1

0x6cca,	// (0x00053279) cell_afind_pane_t1_ParamLimits

0x6cca,	// (0x00053279) cell_afind_pane_t1

0xaa85,	// (0x00057034) bg_button_pane_cp72

0xd823,	// (0x00059dd2) cell_afind_grid_control_pane_g1

0x3cf7,	// (0x000502a6) aid_image_placing_area_ParamLimits

0x3cf7,	// (0x000502a6) aid_image_placing_area

0xd2ba,	// (0x00059869) field_vitu_entry_pane_g1_ParamLimits

0xd2ba,	// (0x00059869) field_vitu_entry_pane_g1

0xd2c6,	// (0x00059875) field_vitu_entry_pane_g2_ParamLimits

0xd2c6,	// (0x00059875) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x0005bddd) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x0005bddd) field_vitu_entry_pane_g

0x5e89,	// (0x00052438) cell_vitu_itu_pane_g1_ParamLimits

0x5ecb,	// (0x0005247a) cell_vitu_itu_pane_t3_ParamLimits

0x5ecb,	// (0x0005247a) cell_vitu_itu_pane_t3

0xd59c,	// (0x00059b4b) mp4_progress_pane_t1_ParamLimits

0xd5b5,	// (0x00059b64) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x0005be72) mp4_progress_pane_t_ParamLimits

0xd5ce,	// (0x00059b7d) mup_progress_pane_cp04_ParamLimits

0x6ba4,	// (0x00053153) main_myfav_hc_pane_t5_ParamLimits

0x6ba4,	// (0x00053153) main_myfav_hc_pane_t5

0x9737,	// (0x00055ce6) aid_zoom_text_primary

0x1427,	// (0x0004d9d6) popup_adpt_find_window_ParamLimits

0xa1fa,	// (0x000567a9) main_cam_set_pane

0x65f7,	// (0x00052ba6) cam4_zoom_pane_ParamLimits

0x65f7,	// (0x00052ba6) cam4_zoom_pane

0x6cdc,	// (0x0005328b) main_cam_set_pane_g1_ParamLimits

0x6cdc,	// (0x0005328b) main_cam_set_pane_g1

0x6cea,	// (0x00053299) main_cam_set_pane_g2_ParamLimits

0x6cea,	// (0x00053299) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0005bf33) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0005bf33) main_cam_set_pane_g

0x6d0b,	// (0x000532ba) main_cam_set_pane_t1_ParamLimits

0x6d0b,	// (0x000532ba) main_cam_set_pane_t1

0x6d26,	// (0x000532d5) main_cset_listscroll_pane_ParamLimits

0x6d26,	// (0x000532d5) main_cset_listscroll_pane

0x6d46,	// (0x000532f5) main_cset_slider_pane_ParamLimits

0x6d46,	// (0x000532f5) main_cset_slider_pane

0xd834,	// (0x00059de3) main_cset_list_pane_ParamLimits

0xd834,	// (0x00059de3) main_cset_list_pane

0xd844,	// (0x00059df3) scroll_pane_cp028

0x6d6c,	// (0x0005331b) aid_area_touch_slider

0x6d88,	// (0x00053337) cset_slider_pane

0x6db2,	// (0x00053361) main_cset_slider_pane_g1

0x6dc7,	// (0x00053376) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x0005bf38) main_cset_slider_pane_g

0xd895,	// (0x00059e44) main_cset_slider_pane_t1

0x6e6b,	// (0x0005341a) main_cset_slider_pane_t2

0x6e85,	// (0x00053434) main_cset_slider_pane_t3

0x6e9f,	// (0x0005344e) main_cset_slider_pane_t4

0x6eb9,	// (0x00053468) main_cset_slider_pane_t5

0x6ed3,	// (0x00053482) main_cset_slider_pane_t6

0x6ee8,	// (0x00053497) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x0005bf5d) main_cset_slider_pane_t

0x6fec,	// (0x0005359b) cset_list_set_pane_ParamLimits

0x6fec,	// (0x0005359b) cset_list_set_pane

0x6ffe,	// (0x000535ad) aid_position_infowindow_above

0x7006,	// (0x000535b5) aid_position_infowindow_below

0x0773,	// (0x0004cd22) cset_list_set_pane_g1_ParamLimits

0x0773,	// (0x0004cd22) cset_list_set_pane_g1

0x077f,	// (0x0004cd2e) cset_list_set_pane_g3_ParamLimits

0x077f,	// (0x0004cd2e) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0005bf7c) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0005bf7c) cset_list_set_pane_g

0x078e,	// (0x0004cd3d) cset_list_set_pane_t1_ParamLimits

0x078e,	// (0x0004cd3d) cset_list_set_pane_t1

0xa1fa,	// (0x000567a9) list_highlight_pane_cp021_ParamLimits

0xa1fa,	// (0x000567a9) list_highlight_pane_cp021

0xb5b8,	// (0x00057b67) cset_slider_pane_g1

0xb5ca,	// (0x00057b79) cset_slider_pane_g2

0xb5c1,	// (0x00057b70) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x0005bf81) cset_slider_pane_g

0x9ea8,	// (0x00056457) aid_area_touch_cam4_zoom

0x9eb0,	// (0x0005645f) cam4_zoom_cont_pane

0x9eb8,	// (0x00056467) cam4_zoom_pane_g1

0x9ec0,	// (0x0005646f) cam4_zoom_pane_g2

0x700e,	// (0x000535bd) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0005bf88) cam4_zoom_pane_g

0xd4b1,	// (0x00059a60) cam4_zoom_cont_pane_g1

0xd935,	// (0x00059ee4) cam4_zoom_cont_pane_g2

0xd93e,	// (0x00059eed) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0005bf8f) cam4_zoom_cont_pane_g

0x64b3,	// (0x00052a62) call4_image_pane_ParamLimits

0x64b3,	// (0x00052a62) call4_image_pane

0xd5f8,	// (0x00059ba7) call4_windows_conf_pane_ParamLimits

0xd639,	// (0x00059be8) popup_call4_audio_in_window_ParamLimits

0xd639,	// (0x00059be8) popup_call4_audio_in_window

0x9719,	// (0x00055cc8) bg_popup_call2_act_pane_cp02

0xd6af,	// (0x00059c5e) call4_list_conf_pane

0xccd5,	// (0x00059284) call4_image_pane_g1

0xccd5,	// (0x00059284) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x0005bc9e) call4_image_pane_g

0xd947,	// (0x00059ef6) list_single_graphic_popup_conf4_pane_ParamLimits

0xd947,	// (0x00059ef6) list_single_graphic_popup_conf4_pane

0x9719,	// (0x00055cc8) list_highlight_pane_cp022

0xd95a,	// (0x00059f09) list_single_graphic_popup_conf4_pane_g1

0xb1b4,	// (0x00057763) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0005bf96) list_single_graphic_popup_conf4_pane_g

0xd962,	// (0x00059f11) list_single_graphic_popup_conf4_pane_t1

0x23fa,	// (0x0004e9a9) popup_vtel_slider_window_ParamLimits

0x23fa,	// (0x0004e9a9) popup_vtel_slider_window

0xd5da,	// (0x00059b89) dialer2_ne_pane_t2_ParamLimits

0xd5da,	// (0x00059b89) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0005be77) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0005be77) dialer2_ne_pane_t

0xcaba,	// (0x00059069) bg_popup_sub_pane_cp010_ParamLimits

0xcaba,	// (0x00059069) bg_popup_sub_pane_cp010

0x7016,	// (0x000535c5) popup_vtel_slider_window_g1_ParamLimits

0x7016,	// (0x000535c5) popup_vtel_slider_window_g1

0x7029,	// (0x000535d8) popup_vtel_slider_window_g2_ParamLimits

0x7029,	// (0x000535d8) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0005bf9b) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0005bf9b) popup_vtel_slider_window_g

0x707f,	// (0x0005362e) vtel_slider_pane_ParamLimits

0x707f,	// (0x0005362e) vtel_slider_pane

0x70a1,	// (0x00053650) vtel_slider_pane_g1_ParamLimits

0x70a1,	// (0x00053650) vtel_slider_pane_g1

0x70b5,	// (0x00053664) vtel_slider_pane_g2_ParamLimits

0x70b5,	// (0x00053664) vtel_slider_pane_g2

0x70cd,	// (0x0005367c) vtel_slider_pane_g3_ParamLimits

0x70cd,	// (0x0005367c) vtel_slider_pane_g3

0x70a1,	// (0x00053650) vtel_slider_pane_g4_ParamLimits

0x70a1,	// (0x00053650) vtel_slider_pane_g4

0x70e3,	// (0x00053692) vtel_slider_pane_g5_ParamLimits

0x70e3,	// (0x00053692) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0005bfa4) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0005bfa4) vtel_slider_pane_g

0xa1fa,	// (0x000567a9) main_gallery2_pane

0x67f7,	// (0x00052da6) aid_size_row_itut2_dropdow_list_ParamLimits

0x67f7,	// (0x00052da6) aid_size_row_itut2_dropdow_list

0x6883,	// (0x00052e32) grid_vitu2_function_top_pane_ParamLimits

0x6883,	// (0x00052e32) grid_vitu2_function_top_pane

0x68ed,	// (0x00052e9c) popup_vitu2_dropdown_list_window_ParamLimits

0x68ed,	// (0x00052e9c) popup_vitu2_dropdown_list_window

0x6916,	// (0x00052ec5) popup_vitu2_match_list_window

0x70f9,	// (0x000536a8) cell_vitu2_function_top_pane_ParamLimits

0x70f9,	// (0x000536a8) cell_vitu2_function_top_pane

0x7111,	// (0x000536c0) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7111,	// (0x000536c0) cell_vitu2_function_top_pane_cp01

0x712d,	// (0x000536dc) cell_vitu2_function_top_wide_pane_ParamLimits

0x712d,	// (0x000536dc) cell_vitu2_function_top_wide_pane

0xa1fa,	// (0x000567a9) bg_button_pane_cp012

0x7149,	// (0x000536f8) cell_vitu2_function_top_pane_g1

0x9ec8,	// (0x00056477) bg_button_pane_cp013_ParamLimits

0x9ec8,	// (0x00056477) bg_button_pane_cp013

0x715d,	// (0x0005370c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x715d,	// (0x0005370c) cell_vitu2_function_top_wide_pane_g1

0xa1fa,	// (0x000567a9) bg_popup_sub_pane_cp20

0x7175,	// (0x00053724) list_vitu2_match_list_pane

0xd72a,	// (0x00059cd9) bg_popup_sub_pane_cp20_g1

0xd732,	// (0x00059ce1) bg_popup_sub_pane_cp20_g2

0xac8c,	// (0x0005723b) bg_popup_sub_pane_cp20_g3

0xd73a,	// (0x00059ce9) bg_popup_sub_pane_cp20_g4

0xac6c,	// (0x0005721b) bg_popup_sub_pane_cp20_g5

0xd978,	// (0x00059f27) bg_popup_sub_pane_cp20_g6

0xd74a,	// (0x00059cf9) bg_popup_sub_pane_cp20_g7

0xd752,	// (0x00059d01) bg_popup_sub_pane_cp20_g8

0xd75a,	// (0x00059d09) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0005bfaf) bg_popup_sub_pane_cp20_g

0x9ee4,	// (0x00056493) list_vitu2_match_list_item_pane_ParamLimits

0x9ee4,	// (0x00056493) list_vitu2_match_list_item_pane

0x9ef6,	// (0x000564a5) list_vitu2_match_list_item_pane_t1

0x9719,	// (0x00055cc8) bg_popup_sub_pane_cp21

0xb0dc,	// (0x0005768b) grid_vitu2_dropdown_list_pane

0x7193,	// (0x00053742) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7193,	// (0x00053742) cell_vitu2_dropdown_list_char_pane

0x71b4,	// (0x00053763) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x71b4,	// (0x00053763) cell_vitu2_dropdown_list_ctrl_pane

0xd980,	// (0x00059f2f) cell_vitu2_dropdown_list_char_pane_g1

0xd989,	// (0x00059f38) cell_vitu2_dropdown_list_char_pane_g2

0xd992,	// (0x00059f41) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0005bfcc) cell_vitu2_dropdown_list_char_pane_g

0x71e0,	// (0x0005378f) cell_vitu2_dropdown_list_char_pane_t1

0x71ee,	// (0x0005379d) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x71ee,	// (0x0005379d) cell_vitu2_dropdown_list_ctrl_pane_g1

0x71fb,	// (0x000537aa) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x71fb,	// (0x000537aa) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7208,	// (0x000537b7) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7208,	// (0x000537b7) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7215,	// (0x000537c4) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7215,	// (0x000537c4) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcf2f,	// (0x000594de) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcf2f,	// (0x000594de) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0005bfd3) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0005bfd3) cell_vitu2_dropdown_list_ctrl_pane_g

0x7231,	// (0x000537e0) aid_size_cell_gallery2_ParamLimits

0x7231,	// (0x000537e0) aid_size_cell_gallery2

0x724f,	// (0x000537fe) grid_gallery2_pane_ParamLimits

0x724f,	// (0x000537fe) grid_gallery2_pane

0x7269,	// (0x00053818) scroll_pane_cp029_ParamLimits

0x7269,	// (0x00053818) scroll_pane_cp029

0x7275,	// (0x00053824) cell_gallery2_pane_ParamLimits

0x7275,	// (0x00053824) cell_gallery2_pane

0xd99b,	// (0x00059f4a) cell_gallery2_pane_g2

0x72d1,	// (0x00053880) cell_gallery2_pane_g3

0xd9a3,	// (0x00059f52) cell_gallery2_pane_g4

0xd9ab,	// (0x00059f5a) cell_gallery2_pane_g5

0xaa33,	// (0x00056fe2) grid_highlight_pane_cp10

0x6916,	// (0x00052ec5) popup_vitu2_match_list_window_ParamLimits

0x692b,	// (0x00052eda) popup_vitu2_query_window_ParamLimits

0x692b,	// (0x00052eda) popup_vitu2_query_window

0x9719,	// (0x00055cc8) bg_vitu2_candi_button_pane

0xd980,	// (0x00059f2f) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd989,	// (0x00059f38) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd992,	// (0x00059f41) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0801,	// (0x0004cdb0) bg_button_pane_cp015

0x72d9,	// (0x00053888) bg_button_pane_cp016

0x72ec,	// (0x0005389b) bg_button_pane_cp017

0xc8cd,	// (0x00058e7c) bg_popup_sub_pane_cp22

0xd9b3,	// (0x00059f62) popup_vitu2_query_window_g1

0x0836,	// (0x0004cde5) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0005bfde) popup_vitu2_query_window_g

0x0855,	// (0x0004ce04) popup_vitu2_query_window_t1_ParamLimits

0x0855,	// (0x0004ce04) popup_vitu2_query_window_t1

0x088a,	// (0x0004ce39) popup_vitu2_query_window_t2_ParamLimits

0x088a,	// (0x0004ce39) popup_vitu2_query_window_t2

0x089c,	// (0x0004ce4b) popup_vitu2_query_window_t3_ParamLimits

0x089c,	// (0x0004ce4b) popup_vitu2_query_window_t3

0x7310,	// (0x000538bf) popup_vitu2_query_window_t4_ParamLimits

0x7310,	// (0x000538bf) popup_vitu2_query_window_t4

0x7331,	// (0x000538e0) popup_vitu2_query_window_t5_ParamLimits

0x7331,	// (0x000538e0) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0005bfe5) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0005bfe5) popup_vitu2_query_window_t

0xd82c,	// (0x00059ddb) main_cset_text_pane

0x6d6c,	// (0x0005331b) aid_area_touch_slider_ParamLimits

0x6d88,	// (0x00053337) cset_slider_pane_ParamLimits

0x6db2,	// (0x00053361) main_cset_slider_pane_g1_ParamLimits

0x6dc7,	// (0x00053376) main_cset_slider_pane_g2_ParamLimits

0xd84d,	// (0x00059dfc) main_cset_slider_pane_g3_ParamLimits

0xd84d,	// (0x00059dfc) main_cset_slider_pane_g3

0x6ddc,	// (0x0005338b) main_cset_slider_pane_g4_ParamLimits

0x6ddc,	// (0x0005338b) main_cset_slider_pane_g4

0x6deb,	// (0x0005339a) main_cset_slider_pane_g5_ParamLimits

0x6deb,	// (0x0005339a) main_cset_slider_pane_g5

0x6df7,	// (0x000533a6) main_cset_slider_pane_g6_ParamLimits

0x6df7,	// (0x000533a6) main_cset_slider_pane_g6

0xf989,	// (0x0005bf38) main_cset_slider_pane_g_ParamLimits

0xd895,	// (0x00059e44) main_cset_slider_pane_t1_ParamLimits

0x6e6b,	// (0x0005341a) main_cset_slider_pane_t2_ParamLimits

0x6e85,	// (0x00053434) main_cset_slider_pane_t3_ParamLimits

0x6e9f,	// (0x0005344e) main_cset_slider_pane_t4_ParamLimits

0x6eb9,	// (0x00053468) main_cset_slider_pane_t5_ParamLimits

0x6ed3,	// (0x00053482) main_cset_slider_pane_t6_ParamLimits

0x6ee8,	// (0x00053497) main_cset_slider_pane_t7_ParamLimits

0x6f12,	// (0x000534c1) main_cset_slider_pane_t8_ParamLimits

0x6f12,	// (0x000534c1) main_cset_slider_pane_t8

0x6f3a,	// (0x000534e9) main_cset_slider_pane_t9_ParamLimits

0x6f3a,	// (0x000534e9) main_cset_slider_pane_t9

0x6f62,	// (0x00053511) main_cset_slider_pane_t10_ParamLimits

0x6f62,	// (0x00053511) main_cset_slider_pane_t10

0x6f8a,	// (0x00053539) main_cset_slider_pane_t11_ParamLimits

0x6f8a,	// (0x00053539) main_cset_slider_pane_t11

0x6fb2,	// (0x00053561) main_cset_slider_pane_t12_ParamLimits

0x6fb2,	// (0x00053561) main_cset_slider_pane_t12

0x6fcf,	// (0x0005357e) main_cset_slider_pane_t13_ParamLimits

0x6fcf,	// (0x0005357e) main_cset_slider_pane_t13

0xf9ae,	// (0x0005bf5d) main_cset_slider_pane_t_ParamLimits

0x9719,	// (0x00055cc8) bg_popup_sub_pane_cp011

0xd9bf,	// (0x00059f6e) main_cset_text_pane_g1

0xd9c7,	// (0x00059f76) main_cset_text_pane_t1

0xd9d5,	// (0x00059f84) main_cset_text_pane_t2

0xd9e3,	// (0x00059f92) main_cset_text_pane_t3

0xd9f1,	// (0x00059fa0) main_cset_text_pane_t4

0xd9ff,	// (0x00059fae) main_cset_text_pane_t5

0xda0d,	// (0x00059fbc) main_cset_text_pane_t6

0xda1b,	// (0x00059fca) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0005bff4) main_cset_text_pane_t

0x9719,	// (0x00055cc8) main_cam4_burst_pane

0x9719,	// (0x00055cc8) main_cam5_pane

0x6cab,	// (0x0005325a) bg_button_pane_cp019

0x6cb4,	// (0x00053263) bg_button_pane_cp020

0xd859,	// (0x00059e08) main_cset_slider_pane_g7_ParamLimits

0xd859,	// (0x00059e08) main_cset_slider_pane_g7

0xd865,	// (0x00059e14) main_cset_slider_pane_g8_ParamLimits

0xd865,	// (0x00059e14) main_cset_slider_pane_g8

0x6e0b,	// (0x000533ba) main_cset_slider_pane_g9_ParamLimits

0x6e0b,	// (0x000533ba) main_cset_slider_pane_g9

0x6e17,	// (0x000533c6) main_cset_slider_pane_g10_ParamLimits

0x6e17,	// (0x000533c6) main_cset_slider_pane_g10

0x6e23,	// (0x000533d2) main_cset_slider_pane_g11_ParamLimits

0x6e23,	// (0x000533d2) main_cset_slider_pane_g11

0x6e2f,	// (0x000533de) main_cset_slider_pane_g12_ParamLimits

0x6e2f,	// (0x000533de) main_cset_slider_pane_g12

0x6e3b,	// (0x000533ea) main_cset_slider_pane_g13_ParamLimits

0x6e3b,	// (0x000533ea) main_cset_slider_pane_g13

0x6e47,	// (0x000533f6) main_cset_slider_pane_g14_ParamLimits

0x6e47,	// (0x000533f6) main_cset_slider_pane_g14

0x6e53,	// (0x00053402) main_cset_slider_pane_g15_ParamLimits

0x6e53,	// (0x00053402) main_cset_slider_pane_g15

0xd8c3,	// (0x00059e72) main_cset_slider_pane_t14_ParamLimits

0xd8c3,	// (0x00059e72) main_cset_slider_pane_t14

0xd8fc,	// (0x00059eab) main_cset_slider_pane_t15_ParamLimits

0xd8fc,	// (0x00059eab) main_cset_slider_pane_t15

0x7352,	// (0x00053901) aid_cam4_burst_size_cell_ParamLimits

0x7352,	// (0x00053901) aid_cam4_burst_size_cell

0x7372,	// (0x00053921) grid_cam4_burst_pane_ParamLimits

0x7372,	// (0x00053921) grid_cam4_burst_pane

0x73aa,	// (0x00053959) linegrid_cam4_burst_pane_ParamLimits

0x73aa,	// (0x00053959) linegrid_cam4_burst_pane

0xda29,	// (0x00059fd8) scroll_pane_cp30_ParamLimits

0xda29,	// (0x00059fd8) scroll_pane_cp30

0x73ce,	// (0x0005397d) cell_cam4_burst_pane_ParamLimits

0x73ce,	// (0x0005397d) cell_cam4_burst_pane

0xda35,	// (0x00059fe4) linegrid_cam4_burst_pane_g1_ParamLimits

0xda35,	// (0x00059fe4) linegrid_cam4_burst_pane_g1

0x741b,	// (0x000539ca) linegrid_cam4_burst_pane_g2_ParamLimits

0x741b,	// (0x000539ca) linegrid_cam4_burst_pane_g2

0xda42,	// (0x00059ff1) linegrid_cam4_burst_pane_g3_ParamLimits

0xda42,	// (0x00059ff1) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0005c003) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0005c003) linegrid_cam4_burst_pane_g

0x742c,	// (0x000539db) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x742c,	// (0x000539db) linegrid_cam4_burst_pane_g3_copy1

0xda4f,	// (0x00059ffe) linegrid_cam4_burst_pane_g4_ParamLimits

0xda4f,	// (0x00059ffe) linegrid_cam4_burst_pane_g4

0x7446,	// (0x000539f5) linegrid_cam4_burst_pane_g5_ParamLimits

0x7446,	// (0x000539f5) linegrid_cam4_burst_pane_g5

0x7457,	// (0x00053a06) linegrid_cam4_burst_pane_g6_ParamLimits

0x7457,	// (0x00053a06) linegrid_cam4_burst_pane_g6

0xda5c,	// (0x0005a00b) linegrid_cam4_burst_pane_g7_ParamLimits

0xda5c,	// (0x0005a00b) linegrid_cam4_burst_pane_g7

0x746e,	// (0x00053a1d) cell_cam4_burst_pane_g1

0xda75,	// (0x0005a024) main_cam5_pane_t1_ParamLimits

0xda75,	// (0x0005a024) main_cam5_pane_t1

0xda87,	// (0x0005a036) main_cam5_pane_t2_ParamLimits

0xda87,	// (0x0005a036) main_cam5_pane_t2

0xda99,	// (0x0005a048) main_cam5_pane_t3_ParamLimits

0xda99,	// (0x0005a048) main_cam5_pane_t3

0xdaab,	// (0x0005a05a) main_cam5_pane_t4_ParamLimits

0xdaab,	// (0x0005a05a) main_cam5_pane_t4

0xdac3,	// (0x0005a072) main_cam5_pane_t5_ParamLimits

0xdac3,	// (0x0005a072) main_cam5_pane_t5

0xdad7,	// (0x0005a086) main_cam5_pane_t6_ParamLimits

0xdad7,	// (0x0005a086) main_cam5_pane_t6

0xdaeb,	// (0x0005a09a) main_cam5_pane_t7_ParamLimits

0xdaeb,	// (0x0005a09a) main_cam5_pane_t7

0xdafd,	// (0x0005a0ac) main_cam5_pane_t8_ParamLimits

0xdafd,	// (0x0005a0ac) main_cam5_pane_t8

0xdb19,	// (0x0005a0c8) main_cam5_pane_t9_ParamLimits

0xdb19,	// (0x0005a0c8) main_cam5_pane_t9

0xdb2b,	// (0x0005a0da) main_cam5_pane_t10_ParamLimits

0xdb2b,	// (0x0005a0da) main_cam5_pane_t10

0xdb3d,	// (0x0005a0ec) main_cam5_pane_t11_ParamLimits

0xdb3d,	// (0x0005a0ec) main_cam5_pane_t11

0xdb4f,	// (0x0005a0fe) main_cam5_pane_t12_ParamLimits

0xdb4f,	// (0x0005a0fe) main_cam5_pane_t12

0xdb64,	// (0x0005a113) main_cam5_pane_t13_ParamLimits

0xdb64,	// (0x0005a113) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0005c00f) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0005c00f) main_cam5_pane_t

0x14a9,	// (0x0004da58) popup_scut_keymap_window_ParamLimits

0x14a9,	// (0x0004da58) popup_scut_keymap_window

0x7481,	// (0x00053a30) aid_size_cell_brow_shortcut

0xaa33,	// (0x00056fe2) bg_popup_window_pane_cp010

0x748d,	// (0x00053a3c) grid_scut_pane

0x7499,	// (0x00053a48) cell_scut_pane_ParamLimits

0x7499,	// (0x00053a48) cell_scut_pane

0x74b0,	// (0x00053a5f) cell_scut_pane_g1

0xdb81,	// (0x0005a130) cell_scut_pane_t1

0xdb90,	// (0x0005a13f) cell_scut_pane_t2

0x74b9,	// (0x00053a68) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0005c02a) cell_scut_pane_t

0x537e,	// (0x0005192d) main_mup3_pane_g8_ParamLimits

0x537e,	// (0x0005192d) main_mup3_pane_g8

0x680f,	// (0x00052dbe) area_vitu2_query_pane_ParamLimits

0x680f,	// (0x00052dbe) area_vitu2_query_pane

0x0815,	// (0x0004cdc4) input_focus_pane_cp08

0xdb9f,	// (0x0005a14e) area_vitu2_query_pane_g1

0x091a,	// (0x0004cec9) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0005c031) area_vitu2_query_pane_g

0x74c7,	// (0x00053a76) area_vitu2_query_pane_t1_ParamLimits

0x74c7,	// (0x00053a76) area_vitu2_query_pane_t1

0x74db,	// (0x00053a8a) area_vitu2_query_pane_t2_ParamLimits

0x74db,	// (0x00053a8a) area_vitu2_query_pane_t2

0x092b,	// (0x0004ceda) area_vitu2_query_pane_t3_ParamLimits

0x092b,	// (0x0004ceda) area_vitu2_query_pane_t3

0x74ef,	// (0x00053a9e) area_vitu2_query_pane_t4_ParamLimits

0x74ef,	// (0x00053a9e) area_vitu2_query_pane_t4

0x7517,	// (0x00053ac6) area_vitu2_query_pane_t5_ParamLimits

0x7517,	// (0x00053ac6) area_vitu2_query_pane_t5

0x753f,	// (0x00053aee) area_vitu2_query_pane_t6_ParamLimits

0x753f,	// (0x00053aee) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0005c036) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0005c036) area_vitu2_query_pane_t

0x758b,	// (0x00053b3a) bg_button_pane_cp018

0x7599,	// (0x00053b48) bg_button_pane_cp021

0x0953,	// (0x0004cf02) bg_button_pane_cp022

0x0964,	// (0x0004cf13) input_focus_pane_cp09

0xb2c3,	// (0x00057872) aid_size_touch_mv_arrow_left

0xb2ee,	// (0x0005789d) aid_size_touch_mv_arrow_right

0xd871,	// (0x00059e20) main_cset_slider_pane_g16_ParamLimits

0xd871,	// (0x00059e20) main_cset_slider_pane_g16

0xd87d,	// (0x00059e2c) main_cset_slider_pane_g17_ParamLimits

0xd87d,	// (0x00059e2c) main_cset_slider_pane_g17

0x746e,	// (0x00053a1d) cell_cam4_burst_pane_g1_ParamLimits

0x9719,	// (0x00055cc8) compa_mode_pane

0x7039,	// (0x000535e8) popup_vtel_slider_window_g3_ParamLimits

0x7039,	// (0x000535e8) popup_vtel_slider_window_g3

0x7050,	// (0x000535ff) popup_vtel_slider_window_g4_ParamLimits

0x7050,	// (0x000535ff) popup_vtel_slider_window_g4

0x7067,	// (0x00053616) popup_vtel_slider_window_t1_ParamLimits

0x7067,	// (0x00053616) popup_vtel_slider_window_t1

0x9719,	// (0x00055cc8) main_cl_pane

0x9a37,	// (0x00055fe6) popup_imed_adjust2_window_ParamLimits

0xc8cd,	// (0x00058e7c) bg_tb_trans_pane_cp05_ParamLimits

0xd1ef,	// (0x0005979e) popup_imed_adjust2_window_g1_ParamLimits

0xd1fe,	// (0x000597ad) popup_imed_adjust2_window_g2_ParamLimits

0xd1fe,	// (0x000597ad) popup_imed_adjust2_window_g2

0xd20a,	// (0x000597b9) popup_imed_adjust2_window_g3_ParamLimits

0xd20a,	// (0x000597b9) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x0005bda1) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x0005bda1) popup_imed_adjust2_window_g

0xd216,	// (0x000597c5) popup_imed_adjust2_window_t1_ParamLimits

0xd22e,	// (0x000597dd) slider_imed_adjust_pane_ParamLimits

0xd242,	// (0x000597f1) slider_imed_adjust_pane_g1_ParamLimits

0xd252,	// (0x00059801) slider_imed_adjust_pane_g2_ParamLimits

0xd262,	// (0x00059811) slider_imed_adjust_pane_g3_ParamLimits

0xd273,	// (0x00059822) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x0005bda8) slider_imed_adjust_pane_g_ParamLimits

0x6598,	// (0x00052b47) aid_touch_area_cam4_ParamLimits

0x6598,	// (0x00052b47) aid_touch_area_cam4

0x9db3,	// (0x00056362) battery_pane_cp01

0x6667,	// (0x00052c16) main_camera4_pane_g6_ParamLimits

0x6667,	// (0x00052c16) main_camera4_pane_g6

0x6691,	// (0x00052c40) main_camera4_pane_t2_ParamLimits

0x6691,	// (0x00052c40) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0005beab) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0005beab) main_camera4_pane_t

0x66c6,	// (0x00052c75) aid_touch_area_vid4_ParamLimits

0x66c6,	// (0x00052c75) aid_touch_area_vid4

0x671a,	// (0x00052cc9) main_video4_pane_g5_ParamLimits

0x671a,	// (0x00052cc9) main_video4_pane_g5

0x673f,	// (0x00052cee) vid4_progress_pane_ParamLimits

0x673f,	// (0x00052cee) vid4_progress_pane

0xd889,	// (0x00059e38) main_cset_slider_pane_g18_ParamLimits

0xd889,	// (0x00059e38) main_cset_slider_pane_g18

0xda69,	// (0x0005a018) cell_cam4_burst_pane_g2_ParamLimits

0xda69,	// (0x0005a018) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0005c00a) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0005c00a) cell_cam4_burst_pane_g

0xa83e,	// (0x00056ded) bg_cl_pane_ParamLimits

0xa83e,	// (0x00056ded) bg_cl_pane

0x75a5,	// (0x00053b54) cl_header_pane_ParamLimits

0x75a5,	// (0x00053b54) cl_header_pane

0x75b9,	// (0x00053b68) cl_listscroll_pane_ParamLimits

0x75b9,	// (0x00053b68) cl_listscroll_pane

0xdbab,	// (0x0005a15a) bg_cl_pane_g1

0xdbb3,	// (0x0005a162) bg_cl_pane_g2

0xdbbb,	// (0x0005a16a) bg_cl_pane_g3

0xdbc3,	// (0x0005a172) bg_cl_pane_g4

0xdbcb,	// (0x0005a17a) bg_cl_pane_g5

0xdbd3,	// (0x0005a182) bg_cl_pane_g6

0xdbdb,	// (0x0005a18a) bg_cl_pane_g7

0xdbe3,	// (0x0005a192) bg_cl_pane_g8

0xdbeb,	// (0x0005a19a) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0005c045) bg_cl_pane_g

0x75c9,	// (0x00053b78) aid_height_cl_leading_ParamLimits

0x75c9,	// (0x00053b78) aid_height_cl_leading

0x75d5,	// (0x00053b84) aid_height_cl_text_ParamLimits

0x75d5,	// (0x00053b84) aid_height_cl_text

0xa1fa,	// (0x000567a9) bg_cl_header_pane_ParamLimits

0xa1fa,	// (0x000567a9) bg_cl_header_pane

0x75f4,	// (0x00053ba3) cl_header_pane_g1_ParamLimits

0x75f4,	// (0x00053ba3) cl_header_pane_g1

0x760a,	// (0x00053bb9) cl_header_pane_t1_ParamLimits

0x760a,	// (0x00053bb9) cl_header_pane_t1

0xdbf3,	// (0x0005a1a2) cl_list_pane

0xd844,	// (0x00059df3) hc_scroll_pane_cp01

0xac6c,	// (0x0005721b) bg_cl_header_pane_g1

0xd72a,	// (0x00059cd9) bg_cl_header_pane_g2

0xac8c,	// (0x0005723b) bg_cl_header_pane_g3

0xd73a,	// (0x00059ce9) bg_cl_header_pane_g4

0xd732,	// (0x00059ce1) bg_cl_header_pane_g5

0xd978,	// (0x00059f27) bg_cl_header_pane_g6

0xd752,	// (0x00059d01) bg_cl_header_pane_g7

0xd75a,	// (0x00059d09) bg_cl_header_pane_g8

0xd74a,	// (0x00059cf9) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0005c058) bg_cl_header_pane_g

0x7623,	// (0x00053bd2) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7623,	// (0x00053bd2) hc_cl_list_double_graphic_heading_pane

0x7634,	// (0x00053be3) hc_cl_list_single_graphic_pane_ParamLimits

0x7634,	// (0x00053be3) hc_cl_list_single_graphic_pane

0x764d,	// (0x00053bfc) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x764d,	// (0x00053bfc) hc_cl_list_single_graphic_pane_g1

0x7659,	// (0x00053c08) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7659,	// (0x00053c08) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0005c06b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0005c06b) hc_cl_list_single_graphic_pane_g

0x766d,	// (0x00053c1c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x766d,	// (0x00053c1c) hc_cl_list_single_graphic_pane_t1

0x764d,	// (0x00053bfc) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x764d,	// (0x00053bfc) hc_cl_list_double_graphic_heading_pane_g1

0x7682,	// (0x00053c31) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7682,	// (0x00053c31) hc_cl_list_double_graphic_heading_pane_g2

0x7696,	// (0x00053c45) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7696,	// (0x00053c45) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x0005c070) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x0005c070) hc_cl_list_double_graphic_heading_pane_g

0x76aa,	// (0x00053c59) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x76aa,	// (0x00053c59) hc_cl_list_double_graphic_heading_pane_t1

0x76bf,	// (0x00053c6e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x76bf,	// (0x00053c6e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0005c077) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0005c077) hc_cl_list_double_graphic_heading_pane_t

0x9f0c,	// (0x000564bb) vid4_progress_pane_g1

0x9f1c,	// (0x000564cb) vid4_progress_pane_g2

0x76d4,	// (0x00053c83) vid4_progress_pane_g3

0x9f2c,	// (0x000564db) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0005c07c) vid4_progress_pane_g

0x76e6,	// (0x00053c95) vid4_progress_pane_t1

0x9f44,	// (0x000564f3) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0005c087) vid4_progress_pane_t

0x76fc,	// (0x00053cab) wait_bar_pane_cp07

0xcac8,	// (0x00059077) blid_firmament_pane_ParamLimits

0xcb0b,	// (0x000590ba) popup_blid_sat_info2_window_g1

0xcb2f,	// (0x000590de) popup_blid_sat_info2_window_t3

0xcb3d,	// (0x000590ec) popup_blid_sat_info2_window_t4

0xcb4b,	// (0x000590fa) popup_blid_sat_info2_window_t5

0xcb59,	// (0x00059108) popup_blid_sat_info2_window_t6

0xcb69,	// (0x00059118) popup_blid_sat_info2_window_t7

0xcb77,	// (0x00059126) popup_blid_sat_info2_window_t8

0xcb85,	// (0x00059134) popup_blid_sat_info2_window_t9

0xcb93,	// (0x00059142) popup_blid_sat_info2_window_t10

0xcc55,	// (0x00059204) aid_firma_cardinal_ParamLimits

0xcc69,	// (0x00059218) blid_firmament_pane_t1_ParamLimits

0xcc80,	// (0x0005922f) blid_firmament_pane_t2_ParamLimits

0xcc97,	// (0x00059246) blid_firmament_pane_t3_ParamLimits

0xccae,	// (0x0005925d) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x0005bc95) blid_firmament_pane_t_ParamLimits

0xccc5,	// (0x00059274) blid_sat_info_pane_ParamLimits

0xa1fa,	// (0x000567a9) main_cam_set_pane_ParamLimits

0x5c41,	// (0x000521f0) aid_size_cell_colour_35_ParamLimits

0x5c61,	// (0x00052210) aid_size_cell_colour_112_ParamLimits

0x5c81,	// (0x00052230) aid_size_cell_effect_ParamLimits

0xc8cd,	// (0x00058e7c) bg_tb_trans_pane_cp02_ParamLimits

0xaee2,	// (0x00057491) heading_imed_pane_ParamLimits

0x5ca1,	// (0x00052250) listscroll_imed_pane_ParamLimits

0xbeb3,	// (0x00058462) popup_call2_audio_first_window_g5_ParamLimits

0xbeb3,	// (0x00058462) popup_call2_audio_first_window_g5

0x623f,	// (0x000527ee) aid_size_touch_image3_arrow_left_ParamLimits

0x623f,	// (0x000527ee) aid_size_touch_image3_arrow_left

0x626b,	// (0x0005281a) aid_size_touch_image3_arrow_right_ParamLimits

0x626b,	// (0x0005281a) aid_size_touch_image3_arrow_right

0x9f59,	// (0x00056508) vid4_progress_pane_t3

0x5fb6,	// (0x00052565) main_hwr_training_symbol_option_pane_ParamLimits

0x5fb6,	// (0x00052565) main_hwr_training_symbol_option_pane

0xd4dc,	// (0x00059a8b) popup_hwr_training_preview_window_ParamLimits

0xd4dc,	// (0x00059a8b) popup_hwr_training_preview_window

0x5fd6,	// (0x00052585) hwr_training_navi_pane_g5_ParamLimits

0x5fd6,	// (0x00052585) hwr_training_navi_pane_g5

0xd718,	// (0x00059cc7) popup_char_count_window

0xa1fa,	// (0x000567a9) bg_popup_sub_pane_cp20_ParamLimits

0x7175,	// (0x00053724) list_vitu2_match_list_pane_ParamLimits

0x7184,	// (0x00053733) vitu2_page_scroll_pane_ParamLimits

0x7184,	// (0x00053733) vitu2_page_scroll_pane

0xdbfc,	// (0x0005a1ab) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbfc,	// (0x0005a1ab) list_single_hwr_training_symbol_option_pane

0xdc0f,	// (0x0005a1be) list_single_hwr_training_symbol_option_pane_g1

0xdc17,	// (0x0005a1c6) list_single_hwr_training_symbol_option_pane_t1

0xdc25,	// (0x0005a1d4) bg_button_pane_cp023

0xdc2e,	// (0x0005a1dd) bg_button_pane_cp024

0x772f,	// (0x00053cde) vitu2_page_scroll_pane_g1

0x7737,	// (0x00053ce6) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0005c08e) vitu2_page_scroll_pane_g

0x773f,	// (0x00053cee) vitu2_page_scroll_pane_t1

0xccfe,	// (0x000592ad) popup_char_count_window_g1

0xdc61,	// (0x0005a210) popup_char_count_window_g2

0xdc6a,	// (0x0005a219) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0005c093) popup_char_count_window_g

0xdc73,	// (0x0005a222) popup_char_count_window_t1

0x9719,	// (0x00055cc8) main_vded2_pane

0xd1db,	// (0x0005978a) aid_size_cell_imed_line

0xd1e5,	// (0x00059794) grid_imed_line_width_pane

0x9e63,	// (0x00056412) vid4_indicators_pane_g4

0xdc81,	// (0x0005a230) cell_imed_line_width_pane_ParamLimits

0xdc81,	// (0x0005a230) cell_imed_line_width_pane

0xdc95,	// (0x0005a244) cell_imed_line_width_pane_g1

0xdc9e,	// (0x0005a24d) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0005c09a) cell_imed_line_width_pane_g

0x774e,	// (0x00053cfd) main_vded2_pane_g1_ParamLimits

0x774e,	// (0x00053cfd) main_vded2_pane_g1

0x7764,	// (0x00053d13) main_vded2_pane_g2_ParamLimits

0x7764,	// (0x00053d13) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0005c09f) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0005c09f) main_vded2_pane_g

0x7776,	// (0x00053d25) vded2_slider_pane_ParamLimits

0x7776,	// (0x00053d25) vded2_slider_pane

0x7786,	// (0x00053d35) aid_size_touch_vded2_end

0x7790,	// (0x00053d3f) aid_size_touch_vded2_playhead

0xdca6,	// (0x0005a255) aid_size_touch_vded2_start

0xdcae,	// (0x0005a25d) vded2_slider_bg_pane

0xdcb7,	// (0x0005a266) vded2_slider_pane_g1

0xdcc0,	// (0x0005a26f) vded2_slider_pane_g2

0x779a,	// (0x00053d49) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0005c0a4) vded2_slider_pane_g

0xdcc8,	// (0x0005a277) vded2_slider_bg_pane_g1

0xdcd1,	// (0x0005a280) vded2_slider_bg_pane_g2

0xdcda,	// (0x0005a289) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0005c0ab) vded2_slider_bg_pane_g

0x3965,	// (0x0004ff14) aid_postcard_touch_down_pane_ParamLimits

0x3965,	// (0x0004ff14) aid_postcard_touch_down_pane

0x397b,	// (0x0004ff2a) aid_postcard_touch_up_pane_ParamLimits

0x397b,	// (0x0004ff2a) aid_postcard_touch_up_pane

0x9719,	// (0x00055cc8) main_blid2_pane

0x9a1d,	// (0x00055fcc) popup_blid2_search_window

0x9719,	// (0x00055cc8) blid2_gps_pane

0x9719,	// (0x00055cc8) blid2_navig_pane

0x9719,	// (0x00055cc8) blid2_search_pane

0x9719,	// (0x00055cc8) blid2_tripm_pane

0x77a5,	// (0x00053d54) blid2_search_pane_g1_ParamLimits

0x77a5,	// (0x00053d54) blid2_search_pane_g1

0x77bd,	// (0x00053d6c) blid2_search_pane_t1_ParamLimits

0x77bd,	// (0x00053d6c) blid2_search_pane_t1

0x77cf,	// (0x00053d7e) aid_size_cell_blid2_gps_ParamLimits

0x77cf,	// (0x00053d7e) aid_size_cell_blid2_gps

0x77e7,	// (0x00053d96) blid2_gps_pane_g1_ParamLimits

0x77e7,	// (0x00053d96) blid2_gps_pane_g1

0x77fb,	// (0x00053daa) grid_blid2_satellite_pane_ParamLimits

0x77fb,	// (0x00053daa) grid_blid2_satellite_pane

0x7815,	// (0x00053dc4) blid2_navig_pane_g1_ParamLimits

0x7815,	// (0x00053dc4) blid2_navig_pane_g1

0x7821,	// (0x00053dd0) blid2_navig_pane_t1_ParamLimits

0x7821,	// (0x00053dd0) blid2_navig_pane_t1

0x783c,	// (0x00053deb) blid2_navig_pane_t2_ParamLimits

0x783c,	// (0x00053deb) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0005c0b2) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0005c0b2) blid2_navig_pane_t

0x7857,	// (0x00053e06) blid2_navig_ring_pane_ParamLimits

0x7857,	// (0x00053e06) blid2_navig_ring_pane

0x7870,	// (0x00053e1f) blid2_speed_pane_ParamLimits

0x7870,	// (0x00053e1f) blid2_speed_pane

0x787c,	// (0x00053e2b) blid2_tripm_pane_g1_ParamLimits

0x787c,	// (0x00053e2b) blid2_tripm_pane_g1

0x7897,	// (0x00053e46) blid2_tripm_pane_g2_ParamLimits

0x7897,	// (0x00053e46) blid2_tripm_pane_g2

0x78ab,	// (0x00053e5a) blid2_tripm_pane_g3_ParamLimits

0x78ab,	// (0x00053e5a) blid2_tripm_pane_g3

0x78bf,	// (0x00053e6e) blid2_tripm_pane_g4_ParamLimits

0x78bf,	// (0x00053e6e) blid2_tripm_pane_g4

0x78d3,	// (0x00053e82) blid2_tripm_pane_g5_ParamLimits

0x78d3,	// (0x00053e82) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0005c0b7) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0005c0b7) blid2_tripm_pane_g

0x78f9,	// (0x00053ea8) blid2_tripm_pane_t1_ParamLimits

0x78f9,	// (0x00053ea8) blid2_tripm_pane_t1

0x7914,	// (0x00053ec3) blid2_tripm_pane_t2_ParamLimits

0x7914,	// (0x00053ec3) blid2_tripm_pane_t2

0x792d,	// (0x00053edc) blid2_tripm_pane_t3_ParamLimits

0x792d,	// (0x00053edc) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0005c0c4) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0005c0c4) blid2_tripm_pane_t

0x7974,	// (0x00053f23) cell_blid2_satellite_pane_ParamLimits

0x7974,	// (0x00053f23) cell_blid2_satellite_pane

0x7992,	// (0x00053f41) cell_blid2_satellite_pane_g1

0xdce3,	// (0x0005a292) cell_blid2_satellite_pane_t1

0xccd5,	// (0x00059284) blid2_speed_pane_g1

0xdcf1,	// (0x0005a2a0) blid2_speed_pane_t1

0xdcff,	// (0x0005a2ae) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0005c0cd) blid2_speed_pane_t

0xccd5,	// (0x00059284) blid2_navig_ring_pane_g1

0x799b,	// (0x00053f4a) blid2_navig_ring_pane_g2

0x79a3,	// (0x00053f52) blid2_navig_ring_pane_g3

0x79ab,	// (0x00053f5a) blid2_navig_ring_pane_g4

0x79b3,	// (0x00053f62) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0005c0d2) blid2_navig_ring_pane_g

0x9719,	// (0x00055cc8) bg_popup_window_pane_cp011

0xdd0d,	// (0x0005a2bc) popup_blid2_search_window_g1

0xdd15,	// (0x0005a2c4) popup_blid2_search_window_t1

0xdd23,	// (0x0005a2d2) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0005c0dd) popup_blid2_search_window_t

0xab7b,	// (0x0005712a) main_browser_pane_g1

0xa83e,	// (0x00056ded) main_browser_pane_ParamLimits

0xa1fa,	// (0x000567a9) bg_button_pane_cp011_ParamLimits

0x6a44,	// (0x00052ff3) cell_vitu2_function_pane_g1_ParamLimits

0xc8cd,	// (0x00058e7c) bg_popup_sub_pane_cp22_ParamLimits

0x0815,	// (0x0004cdc4) input_focus_pane_cp08_ParamLimits

0x72ff,	// (0x000538ae) popup_vitu2_query_button_pane_ParamLimits

0x72ff,	// (0x000538ae) popup_vitu2_query_button_pane

0x082c,	// (0x0004cddb) popup_vitu2_query_input_button_pane

0xd9b3,	// (0x00059f62) popup_vitu2_query_window_g1_ParamLimits

0x0836,	// (0x0004cde5) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0005bfde) popup_vitu2_query_window_g_ParamLimits

0x9719,	// (0x00055cc8) bg_button_pane_cp026

0x79bb,	// (0x00053f6a) popup_vitu2_query_input_button_pane_g1

0x9719,	// (0x00055cc8) bg_button_pane_cp025

0xdd31,	// (0x0005a2e0) popup_vitu2_query_button_pane_t1

0x4ffc,	// (0x000515ab) main_mp3_pane_t6

0x500a,	// (0x000515b9) popup_slider_window_cp01

0x9dcf,	// (0x0005637e) cam4_battery_pane

0x9e22,	// (0x000563d1) cam4_battery_pane_cp02

0x9f04,	// (0x000564b3) cam4_battery_pane_cp01

0x9f04,	// (0x000564b3) cam4_battery_pane_cp03

0xccd5,	// (0x00059284) cam4_battery_pane_g1

0xdd3f,	// (0x0005a2ee) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0005c0e2) cam4_battery_pane_g

0xcba1,	// (0x00059150) popup_blid_sat_info2_window_t11

0xb2c3,	// (0x00057872) aid_size_touch_mv_arrow_left_ParamLimits

0xb2ee,	// (0x0005789d) aid_size_touch_mv_arrow_right_ParamLimits

0xb34c,	// (0x000578fb) navi_pane_g1_ParamLimits

0xb358,	// (0x00057907) navi_pane_g2_ParamLimits

0xb386,	// (0x00057935) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0005b994) navi_pane_g_ParamLimits

0x33e6,	// (0x0004f995) navi_pane_mv_t1_ParamLimits

0x5cad,	// (0x0005225c) grid_imed_effect_pane_ParamLimits

0x22f7,	// (0x0004e8a6) aid_placing_vt_slider_lsc

0xaaca,	// (0x00057079) aid_placing_vt_slider_prt

0xa1fa,	// (0x000567a9) bg_tb_trans_pane_cp01_ParamLimits

0xce4f,	// (0x000593fe) popup_image_details_window_g1_ParamLimits

0xce62,	// (0x00059411) popup_image_details_window_g2_ParamLimits

0xce77,	// (0x00059426) popup_image_details_window_g3_ParamLimits

0xce77,	// (0x00059426) popup_image_details_window_g3

0xf72b,	// (0x0005bcda) popup_image_details_window_g_ParamLimits

0xce8b,	// (0x0005943a) popup_image_details_window_t1_ParamLimits

0xce9d,	// (0x0005944c) popup_image_details_window_t2_ParamLimits

0xceb6,	// (0x00059465) popup_image_details_window_t3_ParamLimits

0xceca,	// (0x00059479) popup_image_details_window_t4_ParamLimits

0xcee5,	// (0x00059494) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x0005bce1) popup_image_details_window_t_ParamLimits

0x75e1,	// (0x00053b90) cl_header_name_pane_ParamLimits

0x75e1,	// (0x00053b90) cl_header_name_pane

0x79c3,	// (0x00053f72) cl_header_name_pane_t1_ParamLimits

0x79c3,	// (0x00053f72) cl_header_name_pane_t1

0x79e4,	// (0x00053f93) cl_header_name_pane_t2_ParamLimits

0x79e4,	// (0x00053f93) cl_header_name_pane_t2

0x7a26,	// (0x00053fd5) cl_header_name_pane_t3_ParamLimits

0x7a26,	// (0x00053fd5) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0005c0e7) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0005c0e7) cl_header_name_pane_t

0xb415,	// (0x000579c4) navi_pane_mv_g2_ParamLimits

0xd6f2,	// (0x00059ca1) field_vitu2_entry_pane_g1_ParamLimits

0xd6fe,	// (0x00059cad) field_vitu2_entry_pane_g2_ParamLimits

0xd70a,	// (0x00059cb9) field_vitu2_entry_pane_g3_ParamLimits

0xd70a,	// (0x00059cb9) field_vitu2_entry_pane_g3

0xf92e,	// (0x0005bedd) field_vitu2_entry_pane_g_ParamLimits

0x9e96,	// (0x00056445) cell_vitu2_itu_pane_g1_ParamLimits

0x69d8,	// (0x00052f87) cell_vitu2_itu_pane_g2_ParamLimits

0x69d8,	// (0x00052f87) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0005bee9) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0005bee9) cell_vitu2_itu_pane_g

0xa1fa,	// (0x000567a9) bg_vkb2_func_pane_cp05_ParamLimits

0xa1fa,	// (0x000567a9) bg_vkb2_func_pane_cp05

0xa1fa,	// (0x000567a9) bg_vkb2_func_pane_cp03

0xa1fa,	// (0x000567a9) bg_vkb2_func_pane_cp04

0xa1fa,	// (0x000567a9) bg_vkb2_func_pane_cp10_ParamLimits

0xa1fa,	// (0x000567a9) bg_vkb2_func_pane_cp10

0x0953,	// (0x0004cf02) bg_vkb2_func_pane_cp08

0x758b,	// (0x00053b3a) bg_vkb2_func_pane_cp06

0x7599,	// (0x00053b48) bg_vkb2_func_pane_cp07

0xdc37,	// (0x0005a1e6) bg_vkb2_func_pane_cp11_ParamLimits

0xdc37,	// (0x0005a1e6) bg_vkb2_func_pane_cp11

0xdc4c,	// (0x0005a1fb) bg_vkb2_func_pane_cp12_ParamLimits

0xdc4c,	// (0x0005a1fb) bg_vkb2_func_pane_cp12

0x9719,	// (0x00055cc8) bg_vkb2_func_pane_cp09

0xd72a,	// (0x00059cd9) bg_vkb2_func_pane_g1

0xac8c,	// (0x0005723b) bg_vkb2_func_pane_g2

0xd732,	// (0x00059ce1) bg_vkb2_func_pane_g3

0xd73a,	// (0x00059ce9) bg_vkb2_func_pane_g4

0xd978,	// (0x00059f27) bg_vkb2_func_pane_g5

0xd752,	// (0x00059d01) bg_vkb2_func_pane_g6

0xd75a,	// (0x00059d09) bg_vkb2_func_pane_g7

0xd74a,	// (0x00059cf9) bg_vkb2_func_pane_g8

0xac6c,	// (0x0005721b) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0005c0ee) bg_vkb2_func_pane_g

0x78e7,	// (0x00053e96) blid2_tripm_pane_g6_ParamLimits

0x78e7,	// (0x00053e96) blid2_tripm_pane_g6

0xd594,	// (0x00059b43) mp4_progress_pane_g1

0x7960,	// (0x00053f0f) blid2_tripm_values_pane_ParamLimits

0x7960,	// (0x00053f0f) blid2_tripm_values_pane

0x7a57,	// (0x00054006) blid2_tripm_values_pane_t1

0x7a65,	// (0x00054014) blid2_tripm_values_pane_t2

0x7a73,	// (0x00054022) blid2_tripm_values_pane_t3

0x7a81,	// (0x00054030) blid2_tripm_values_pane_t4

0x7a8f,	// (0x0005403e) blid2_tripm_values_pane_t5

0x7a9d,	// (0x0005404c) blid2_tripm_values_pane_t6

0x7aab,	// (0x0005405a) blid2_tripm_values_pane_t7

0x7ab9,	// (0x00054068) blid2_tripm_values_pane_t8

0x7ac7,	// (0x00054076) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0005c101) blid2_tripm_values_pane_t

0x2339,	// (0x0004e8e8) call_video_pane_t1_ParamLimits

0x2357,	// (0x0004e906) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0005b81d) call_video_pane_t_ParamLimits

0x0649,	// (0x0004cbf8) msg_header_pane_g1_ParamLimits

0xb5fd,	// (0x00057bac) msg_header_pane_g2_ParamLimits

0xb5fd,	// (0x00057bac) msg_header_pane_g2

0x0001,

0xf488,	// (0x0005ba37) msg_header_pane_g_ParamLimits

0xf488,	// (0x0005ba37) msg_header_pane_g

0xa83e,	// (0x00056ded) main_clock2_pane_ParamLimits

0x59a6,	// (0x00051f55) grid_clock2_toolbar_pane_ParamLimits

0x59a6,	// (0x00051f55) grid_clock2_toolbar_pane

0x59a6,	// (0x00051f55) listscroll_clock2_pane_ParamLimits

0x59a6,	// (0x00051f55) listscroll_clock2_pane

0x5aa2,	// (0x00052051) main_clock2_pane_t3_ParamLimits

0x5aa2,	// (0x00052051) main_clock2_pane_t3

0x5ac6,	// (0x00052075) main_clock2_pane_t4_ParamLimits

0x5ac6,	// (0x00052075) main_clock2_pane_t4

0xdd49,	// (0x0005a2f8) cell_clock2_toolbar_pane

0xdd51,	// (0x0005a300) cell_clock2_toolbar_pane_cp01

0xdd51,	// (0x0005a300) cell_clock2_toolbar_pane_cp02

0xdd59,	// (0x0005a308) cell_clock2_toolbar_pane_cp03

0xdd61,	// (0x0005a310) list_clock2_pane

0xb248,	// (0x000577f7) scroll_pane_cp10

0xdd69,	// (0x0005a318) list_single_clock2_pane_ParamLimits

0xdd69,	// (0x0005a318) list_single_clock2_pane

0xaa33,	// (0x00056fe2) list_highlight_pane_cp08

0xdd76,	// (0x0005a325) list_single_clock2_pane_t1

0xdd84,	// (0x0005a333) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x0005c114) list_single_clock2_pane_t

0x9719,	// (0x00055cc8) bg_button_pane_cp10

0xdd92,	// (0x0005a341) cell_clock2_toolbar_pane_g1

0x38f1,	// (0x0004fea0) aid_main_viewer_pane_g1_ParamLimits

0x38f1,	// (0x0004fea0) aid_main_viewer_pane_g1

0x38ff,	// (0x0004feae) aid_main_viewer_pane_g2_ParamLimits

0x38ff,	// (0x0004feae) aid_main_viewer_pane_g2

0x390d,	// (0x0004febc) aid_main_viewer_pane_g3_ParamLimits

0x390d,	// (0x0004febc) aid_main_viewer_pane_g3

0x391c,	// (0x0004fecb) aid_main_viewer_pane_g4_ParamLimits

0x391c,	// (0x0004fecb) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0005ba48) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0005ba48) aid_main_viewer_pane_g

0x4224,	// (0x000507d3) main_calc_pane_ParamLimits

0x4238,	// (0x000507e7) main_dialer2_pane_ParamLimits

0x9719,	// (0x00055cc8) main_cam6_pane

0x9719,	// (0x00055cc8) main_vid6_pane

0x59b2,	// (0x00051f61) listscroll_gen_pane_cp06_ParamLimits

0x59b2,	// (0x00051f61) listscroll_gen_pane_cp06

0x5ae9,	// (0x00052098) main_clock2_pane_t5_ParamLimits

0x5ae9,	// (0x00052098) main_clock2_pane_t5

0x5b43,	// (0x000520f2) aid_call2_pane_cp10_ParamLimits

0x5b55,	// (0x00052104) aid_call_pane_cp10_ParamLimits

0xb2b7,	// (0x00057866) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2b7,	// (0x00057866) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5b67,	// (0x00052116) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5b67,	// (0x00052116) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2b7,	// (0x00057866) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x0005bd96) popup_clock_analogue_window_cp10_g_ParamLimits

0x5b79,	// (0x00052128) popup_clock_analogue_window_cp10_t1_ParamLimits

0x61ec,	// (0x0005279b) cell_dialer2_keypad_pane_g2_ParamLimits

0x61ec,	// (0x0005279b) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0005be7c) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0005be7c) cell_dialer2_keypad_pane_g

0x6208,	// (0x000527b7) cell_dialer2_keypad_pane_t1

0x6d5e,	// (0x0005330d) main_cset_text2_pane_ParamLimits

0x6d5e,	// (0x0005330d) main_cset_text2_pane

0xdb9f,	// (0x0005a14e) area_vitu2_query_pane_g1_ParamLimits

0x091a,	// (0x0004cec9) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0005c031) area_vitu2_query_pane_g_ParamLimits

0x7567,	// (0x00053b16) area_vitu2_query_pane_t7_ParamLimits

0x7567,	// (0x00053b16) area_vitu2_query_pane_t7

0x758b,	// (0x00053b3a) bg_button_pane_cp018_ParamLimits

0x7599,	// (0x00053b48) bg_button_pane_cp021_ParamLimits

0x0953,	// (0x0004cf02) bg_button_pane_cp022_ParamLimits

0x0953,	// (0x0004cf02) bg_vkb2_func_pane_cp08_ParamLimits

0x758b,	// (0x00053b3a) bg_vkb2_func_pane_cp06_ParamLimits

0x7599,	// (0x00053b48) bg_vkb2_func_pane_cp07_ParamLimits

0x0964,	// (0x0004cf13) input_focus_pane_cp09_ParamLimits

0x9f6f,	// (0x0005651e) cam6_autofocus_pane_ParamLimits

0x9f6f,	// (0x0005651e) cam6_autofocus_pane

0x7ad5,	// (0x00054084) cam6_image_uncrop_pane_ParamLimits

0x7ad5,	// (0x00054084) cam6_image_uncrop_pane

0x7ae4,	// (0x00054093) cam6_indi_pane_ParamLimits

0x7ae4,	// (0x00054093) cam6_indi_pane

0x7afa,	// (0x000540a9) cam6_mode_pane_ParamLimits

0x7afa,	// (0x000540a9) cam6_mode_pane

0x7b0c,	// (0x000540bb) cam6_timer_pane_ParamLimits

0x7b0c,	// (0x000540bb) cam6_timer_pane

0x7b1c,	// (0x000540cb) cam6_zoom_pane_ParamLimits

0x7b1c,	// (0x000540cb) cam6_zoom_pane

0x7b28,	// (0x000540d7) cam6_mode_pane_g1_ParamLimits

0x7b28,	// (0x000540d7) cam6_mode_pane_g1

0x7b38,	// (0x000540e7) cam6_mode_pane_g2_ParamLimits

0x7b38,	// (0x000540e7) cam6_mode_pane_g2

0x7b48,	// (0x000540f7) cam6_mode_pane_g3_ParamLimits

0x7b48,	// (0x000540f7) cam6_mode_pane_g3

0x7b58,	// (0x00054107) cam6_mode_pane_g4_ParamLimits

0x7b58,	// (0x00054107) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0005c119) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0005c119) cam6_mode_pane_g

0xdd9a,	// (0x0005a349) bg_tb_trans_pane_cp08_ParamLimits

0xdd9a,	// (0x0005a349) bg_tb_trans_pane_cp08

0xdda8,	// (0x0005a357) cam6_battery_pane_ParamLimits

0xdda8,	// (0x0005a357) cam6_battery_pane

0xddbe,	// (0x0005a36d) cam6_indi_pane_g1_ParamLimits

0xddbe,	// (0x0005a36d) cam6_indi_pane_g1

0xddd0,	// (0x0005a37f) cam6_indi_pane_g2_ParamLimits

0xddd0,	// (0x0005a37f) cam6_indi_pane_g2

0xdde2,	// (0x0005a391) cam6_indi_pane_g3_ParamLimits

0xdde2,	// (0x0005a391) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x0005c122) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x0005c122) cam6_indi_pane_g

0xddf4,	// (0x0005a3a3) cam6_indi_pane_t1_ParamLimits

0xddf4,	// (0x0005a3a3) cam6_indi_pane_t1

0x7b68,	// (0x00054117) cam6_autofocus_pane_g1

0x7b70,	// (0x0005411f) cam6_autofocus_pane_g2

0x7b78,	// (0x00054127) cam6_autofocus_pane_g3

0x7b80,	// (0x0005412f) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x0005c129) cam6_autofocus_pane_g

0xde1a,	// (0x0005a3c9) cam6_timer_pane_g1

0xde22,	// (0x0005a3d1) cam6_timer_pane_t1

0xde30,	// (0x0005a3df) cam6_zoom_cont_pane

0xde38,	// (0x0005a3e7) cam6_zoom_pane_g1

0xde40,	// (0x0005a3ef) cam6_zoom_pane_g2

0x7b88,	// (0x00054137) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x0005c132) cam6_zoom_pane_g

0xccd5,	// (0x00059284) cam6_battery_pane_g1

0xccd5,	// (0x00059284) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x0005bc9e) cam6_battery_pane_g

0xde48,	// (0x0005a3f7) cam6_zoom_cont_pane_g1

0xde51,	// (0x0005a400) cam6_zoom_cont_pane_g2

0xde5a,	// (0x0005a409) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x0005c139) cam6_zoom_cont_pane_g

0x7ba5,	// (0x00054154) cam6_mode_pane_cp_ParamLimits

0x7ba5,	// (0x00054154) cam6_mode_pane_cp

0x7b1c,	// (0x000540cb) cam6_zoom_pane_cp_ParamLimits

0x7b1c,	// (0x000540cb) cam6_zoom_pane_cp

0x7bb7,	// (0x00054166) vid6_image_uncrop_cif_pane_ParamLimits

0x7bb7,	// (0x00054166) vid6_image_uncrop_cif_pane

0x7bc7,	// (0x00054176) vid6_image_uncrop_nhd_pane_ParamLimits

0x7bc7,	// (0x00054176) vid6_image_uncrop_nhd_pane

0x7ad5,	// (0x00054084) vid6_image_uncrop_vga_pane_ParamLimits

0x7ad5,	// (0x00054084) vid6_image_uncrop_vga_pane

0x7bd6,	// (0x00054185) vid6_image_uncrop_wvga_pane_ParamLimits

0x7bd6,	// (0x00054185) vid6_image_uncrop_wvga_pane

0x7be5,	// (0x00054194) vid6_indi_pane_ParamLimits

0x7be5,	// (0x00054194) vid6_indi_pane

0xdd9a,	// (0x0005a349) bg_tb_trans_pane_cp09_ParamLimits

0xdd9a,	// (0x0005a349) bg_tb_trans_pane_cp09

0xde72,	// (0x0005a421) cam6_battery_pane_cp_ParamLimits

0xde72,	// (0x0005a421) cam6_battery_pane_cp

0xde7e,	// (0x0005a42d) vid6_indi_pane_g1_ParamLimits

0xde7e,	// (0x0005a42d) vid6_indi_pane_g1

0xde90,	// (0x0005a43f) vid6_indi_pane_g2_ParamLimits

0xde90,	// (0x0005a43f) vid6_indi_pane_g2

0xdea2,	// (0x0005a451) vid6_indi_pane_g3_ParamLimits

0xdea2,	// (0x0005a451) vid6_indi_pane_g3

0xdeb7,	// (0x0005a466) vid6_indi_pane_g4_ParamLimits

0xdeb7,	// (0x0005a466) vid6_indi_pane_g4

0xdecc,	// (0x0005a47b) vid6_indi_pane_g5_ParamLimits

0xdecc,	// (0x0005a47b) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x0005c140) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x0005c140) vid6_indi_pane_g

0xdee6,	// (0x0005a495) vid6_indi_pane_t1_ParamLimits

0xdee6,	// (0x0005a495) vid6_indi_pane_t1

0xdefc,	// (0x0005a4ab) vid6_indi_pane_t2_ParamLimits

0xdefc,	// (0x0005a4ab) vid6_indi_pane_t2

0xdf24,	// (0x0005a4d3) vid6_indi_pane_t3_ParamLimits

0xdf24,	// (0x0005a4d3) vid6_indi_pane_t3

0xdf4c,	// (0x0005a4fb) vid6_indi_pane_t4_ParamLimits

0xdf4c,	// (0x0005a4fb) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x0005c14b) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x0005c14b) vid6_indi_pane_t

0xdf70,	// (0x0005a51f) wait_bar_pane_cp08

0x7bfd,	// (0x000541ac) main_cset_text2_pane_t1_ParamLimits

0x7bfd,	// (0x000541ac) main_cset_text2_pane_t1

0x7b90,	// (0x0005413f) listscroll_gen_pane_cp06_t1_ParamLimits

0x7b90,	// (0x0005413f) listscroll_gen_pane_cp06_t1

0x9719,	// (0x00055cc8) main_cam6_set_pane

0xcf2f,	// (0x000594de) bg_tb_trans_pane_cp06_ParamLimits

0x9dd7,	// (0x00056386) cam4_indicators_pane_g1_ParamLimits

0x9de8,	// (0x00056397) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0005beb9) cam4_indicators_pane_g_ParamLimits

0x9e00,	// (0x000563af) cam4_indicators_pane_t1_ParamLimits

0xa1fa,	// (0x000567a9) bg_tb_trans_pane_cp07_ParamLimits

0x9e2a,	// (0x000563d9) vid4_indicators_pane_g1_ParamLimits

0x9e3e,	// (0x000563ed) vid4_indicators_pane_g2_ParamLimits

0x9e52,	// (0x00056401) vid4_indicators_pane_g3_ParamLimits

0x9e63,	// (0x00056412) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0005becb) vid4_indicators_pane_g_ParamLimits

0x9e7f,	// (0x0005642e) vid4_indicators_pane_t1_ParamLimits

0x9f0c,	// (0x000564bb) vid4_progress_pane_g1_ParamLimits

0x9f1c,	// (0x000564cb) vid4_progress_pane_g2_ParamLimits

0x76d4,	// (0x00053c83) vid4_progress_pane_g3_ParamLimits

0x9f2c,	// (0x000564db) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0005c07c) vid4_progress_pane_g_ParamLimits

0x76e6,	// (0x00053c95) vid4_progress_pane_t1_ParamLimits

0x9f44,	// (0x000564f3) vid4_progress_pane_t2_ParamLimits

0x9f59,	// (0x00056508) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0005c087) vid4_progress_pane_t_ParamLimits

0x76fc,	// (0x00053cab) wait_bar_pane_cp07_ParamLimits

0x7c1b,	// (0x000541ca) main_cam6_set_pane_g2_ParamLimits

0x7c1b,	// (0x000541ca) main_cam6_set_pane_g2

0x7c3f,	// (0x000541ee) main_cset6_listscroll_pane_ParamLimits

0x7c3f,	// (0x000541ee) main_cset6_listscroll_pane

0x7c5b,	// (0x0005420a) main_cset6_slider_pane_ParamLimits

0x7c5b,	// (0x0005420a) main_cset6_slider_pane

0x7c71,	// (0x00054220) main_cset6_text2_pane_ParamLimits

0x7c71,	// (0x00054220) main_cset6_text2_pane

0xdf7f,	// (0x0005a52e) main_cset6_text_pane

0xdf87,	// (0x0005a536) main_cset_list_pane_copy1_ParamLimits

0xdf87,	// (0x0005a536) main_cset_list_pane_copy1

0xdf97,	// (0x0005a546) scroll_pane_cp028_copy1

0x7c7f,	// (0x0005422e) cset_list_set_pane_copy1

0x7c91,	// (0x00054240) aid_position_infowindow_above_copy1

0x7c99,	// (0x00054248) aid_position_infowindow_below_copy1

0x099b,	// (0x0004cf4a) cset_list_set_pane_g1_copy1

0x09a3,	// (0x0004cf52) cset_list_set_pane_g3_copy1_ParamLimits

0x09a3,	// (0x0004cf52) cset_list_set_pane_g3_copy1

0x09b2,	// (0x0004cf61) cset_list_set_pane_t1_copy1_ParamLimits

0x09b2,	// (0x0004cf61) cset_list_set_pane_t1_copy1

0xa1fa,	// (0x000567a9) list_highlight_pane_cp021_copy1_ParamLimits

0xa1fa,	// (0x000567a9) list_highlight_pane_cp021_copy1

0xdfa0,	// (0x0005a54f) cset6_slider_pane_ParamLimits

0xdfa0,	// (0x0005a54f) cset6_slider_pane

0xdfcc,	// (0x0005a57b) main_cset6_slider_pane_g1_ParamLimits

0xdfcc,	// (0x0005a57b) main_cset6_slider_pane_g1

0x7ca1,	// (0x00054250) main_cset6_slider_pane_g2_ParamLimits

0x7ca1,	// (0x00054250) main_cset6_slider_pane_g2

0xdff4,	// (0x0005a5a3) main_cset6_slider_pane_g3_ParamLimits

0xdff4,	// (0x0005a5a3) main_cset6_slider_pane_g3

0x7cc9,	// (0x00054278) main_cset6_slider_pane_g4_ParamLimits

0x7cc9,	// (0x00054278) main_cset6_slider_pane_g4

0xe000,	// (0x0005a5af) main_cset6_slider_pane_g5_ParamLimits

0xe000,	// (0x0005a5af) main_cset6_slider_pane_g5

0xd859,	// (0x00059e08) main_cset6_slider_pane_g7_ParamLimits

0xd859,	// (0x00059e08) main_cset6_slider_pane_g7

0xd865,	// (0x00059e14) main_cset6_slider_pane_g8_ParamLimits

0xd865,	// (0x00059e14) main_cset6_slider_pane_g8

0x6e0b,	// (0x000533ba) main_cset6_slider_pane_g9_ParamLimits

0x6e0b,	// (0x000533ba) main_cset6_slider_pane_g9

0x6e17,	// (0x000533c6) main_cset6_slider_pane_g10_ParamLimits

0x6e17,	// (0x000533c6) main_cset6_slider_pane_g10

0x6e23,	// (0x000533d2) main_cset6_slider_pane_g11_ParamLimits

0x6e23,	// (0x000533d2) main_cset6_slider_pane_g11

0x6e2f,	// (0x000533de) main_cset6_slider_pane_g12_ParamLimits

0x6e2f,	// (0x000533de) main_cset6_slider_pane_g12

0x6e3b,	// (0x000533ea) main_cset6_slider_pane_g13_ParamLimits

0x6e3b,	// (0x000533ea) main_cset6_slider_pane_g13

0x6e47,	// (0x000533f6) main_cset6_slider_pane_g14_ParamLimits

0x6e47,	// (0x000533f6) main_cset6_slider_pane_g14

0x7cd5,	// (0x00054284) main_cset6_slider_pane_g15_ParamLimits

0x7cd5,	// (0x00054284) main_cset6_slider_pane_g15

0xd871,	// (0x00059e20) main_cset6_slider_pane_g16_ParamLimits

0xd871,	// (0x00059e20) main_cset6_slider_pane_g16

0xd87d,	// (0x00059e2c) main_cset6_slider_pane_g17_ParamLimits

0xd87d,	// (0x00059e2c) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x0005c154) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x0005c154) main_cset6_slider_pane_g

0xe00c,	// (0x0005a5bb) main_cset6_slider_pane_t1_ParamLimits

0xe00c,	// (0x0005a5bb) main_cset6_slider_pane_t1

0x7d05,	// (0x000542b4) main_cset6_slider_pane_t2_ParamLimits

0x7d05,	// (0x000542b4) main_cset6_slider_pane_t2

0x7d30,	// (0x000542df) main_cset6_slider_pane_t3_ParamLimits

0x7d30,	// (0x000542df) main_cset6_slider_pane_t3

0x7d5b,	// (0x0005430a) main_cset6_slider_pane_t4_ParamLimits

0x7d5b,	// (0x0005430a) main_cset6_slider_pane_t4

0x7d86,	// (0x00054335) main_cset6_slider_pane_t5_ParamLimits

0x7d86,	// (0x00054335) main_cset6_slider_pane_t5

0xe04d,	// (0x0005a5fc) main_cset6_slider_pane_t7_ParamLimits

0xe04d,	// (0x0005a5fc) main_cset6_slider_pane_t7

0x7db1,	// (0x00054360) main_cset6_slider_pane_t8_ParamLimits

0x7db1,	// (0x00054360) main_cset6_slider_pane_t8

0x7dd5,	// (0x00054384) main_cset6_slider_pane_t9_ParamLimits

0x7dd5,	// (0x00054384) main_cset6_slider_pane_t9

0x7df9,	// (0x000543a8) main_cset6_slider_pane_t10_ParamLimits

0x7df9,	// (0x000543a8) main_cset6_slider_pane_t10

0x7e1d,	// (0x000543cc) main_cset6_slider_pane_t11_ParamLimits

0x7e1d,	// (0x000543cc) main_cset6_slider_pane_t11

0xe083,	// (0x0005a632) main_cset6_slider_pane_t14_ParamLimits

0xe083,	// (0x0005a632) main_cset6_slider_pane_t14

0xe0bc,	// (0x0005a66b) main_cset6_slider_pane_t15_ParamLimits

0xe0bc,	// (0x0005a66b) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x0005c179) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x0005c179) main_cset6_slider_pane_t

0xd4b1,	// (0x00059a60) cset_slider_pane_g1_copy1

0xd935,	// (0x00059ee4) cset_slider_pane_g2_copy1

0xd93e,	// (0x00059eed) cset_slider_pane_g3_copy1

0x9719,	// (0x00055cc8) bg_popup_sub_pane_cp011_copy1

0xe0f5,	// (0x0005a6a4) main_cset_text_pane_g1_copy1

0xd9c7,	// (0x00059f76) main_cset_text_pane_t1_copy1

0xd9d5,	// (0x00059f84) main_cset_text_pane_t2_copy1

0xd9e3,	// (0x00059f92) main_cset_text_pane_t3_copy1

0xd9f1,	// (0x00059fa0) main_cset_text_pane_t4_copy1

0xd9ff,	// (0x00059fae) main_cset_text_pane_t5_copy1

0xe0fd,	// (0x0005a6ac) main_cset_text_pane_t6_copy1

0xe10b,	// (0x0005a6ba) main_cset_text_pane_t7_copy1

0x7bfd,	// (0x000541ac) main_cset_text2_pane_t1_copy1

0xa1fa,	// (0x000567a9) main_ncimui_pane

0x447c,	// (0x00050a2b) popup_query_ncimui_window_ParamLimits

0x447c,	// (0x00050a2b) popup_query_ncimui_window

0x51a1,	// (0x00051750) field_cale_ev2_pane_g4_ParamLimits

0x51a1,	// (0x00051750) field_cale_ev2_pane_g4

0x60cb,	// (0x0005267a) cell_video_dialer_keypad_pane_g2_ParamLimits

0x60cb,	// (0x0005267a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x0005be57) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x0005be57) cell_video_dialer_keypad_pane_g

0x60e3,	// (0x00052692) cell_video_dialer_keypad_pane_t1

0x9719,	// (0x00055cc8) bg_popup_window_pane_cp012

0xb133,	// (0x000576e2) heading_pane_cp06

0xe137,	// (0x0005a6e6) ncim_query_content_pane

0x9719,	// (0x00055cc8) bg_popup_heading_pane_cp01

0xe13f,	// (0x0005a6ee) ncim_heading_pane_t1

0xe14d,	// (0x0005a6fc) ncim_indicator_popup_pane

0xe15f,	// (0x0005a70e) ncim_query_button_pane

0xe173,	// (0x0005a722) ncim_query_content_pane_t1

0xe185,	// (0x0005a734) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0005c1bd) ncim_query_content_pane_t

0xe1bf,	// (0x0005a76e) ncim_query_list_pane

0xe1d1,	// (0x0005a780) ncim_query_popup_pane

0xe14d,	// (0x0005a6fc) ncim_indicator_popup_pane_ParamLimits

0x7f6a,	// (0x00054519) ncim_query_content_pane_g1_ParamLimits

0x7f6a,	// (0x00054519) ncim_query_content_pane_g1

0xe173,	// (0x0005a722) ncim_query_content_pane_t1_ParamLimits

0xe185,	// (0x0005a734) ncim_query_content_pane_t2_ParamLimits

0x7f76,	// (0x00054525) ncim_query_content_pane_t3_ParamLimits

0x7f76,	// (0x00054525) ncim_query_content_pane_t3

0x7f9e,	// (0x0005454d) ncim_query_content_pane_t4_ParamLimits

0x7f9e,	// (0x0005454d) ncim_query_content_pane_t4

0x7fc6,	// (0x00054575) ncim_query_content_pane_t5_ParamLimits

0x7fc6,	// (0x00054575) ncim_query_content_pane_t5

0xe197,	// (0x0005a746) ncim_query_content_pane_t6_ParamLimits

0xe197,	// (0x0005a746) ncim_query_content_pane_t6

0xfc0e,	// (0x0005c1bd) ncim_query_content_pane_t_ParamLimits

0xe1bf,	// (0x0005a76e) ncim_query_list_pane_ParamLimits

0xe1d1,	// (0x0005a780) ncim_query_popup_pane_ParamLimits

0xe1e5,	// (0x0005a794) wait_bar_pane_cp04

0x9719,	// (0x00055cc8) input_focus_pane_cp011

0xe1ed,	// (0x0005a79c) ncim_query_popup_pane_t1

0xe1fb,	// (0x0005a7aa) ncim_list_query_list_pane_ParamLimits

0xe1fb,	// (0x0005a7aa) ncim_list_query_list_pane

0x9719,	// (0x00055cc8) bg_button_pane_cp027

0xe208,	// (0x0005a7b7) ncim_query_button_pane_g1

0x9719,	// (0x00055cc8) list_highlight_pane_cp012

0xe212,	// (0x0005a7c1) ncim_list_query_list_pane_g1

0xe21a,	// (0x0005a7c9) ncim_list_query_list_pane_t1

0x9df4,	// (0x000563a3) cam4_indicators_pane_g3_ParamLimits

0x9df4,	// (0x000563a3) cam4_indicators_pane_g3

0x9e6f,	// (0x0005641e) vid4_indicators_pane_g5_ParamLimits

0x9e6f,	// (0x0005641e) vid4_indicators_pane_g5

0x9f38,	// (0x000564e7) vid4_progress_pane_g5_ParamLimits

0x9f38,	// (0x000564e7) vid4_progress_pane_g5

0x7e55,	// (0x00054404) main_ncimui_pane_g1

0x7ebe,	// (0x0005446d) ncimui_group_query_pane_ParamLimits

0x7ebe,	// (0x0005446d) ncimui_group_query_pane

0x7f06,	// (0x000544b5) ncimui_list_pane_ParamLimits

0x7f06,	// (0x000544b5) ncimui_list_pane

0x7f2d,	// (0x000544dc) ncimui_text_pane_ParamLimits

0x7f2d,	// (0x000544dc) ncimui_text_pane

0x7fee,	// (0x0005459d) ncimui_text_pane_t1_ParamLimits

0x7fee,	// (0x0005459d) ncimui_text_pane_t1

0xe228,	// (0x0005a7d7) ncimui_list_single_graphic_pane_ParamLimits

0xe228,	// (0x0005a7d7) ncimui_list_single_graphic_pane

0x800c,	// (0x000545bb) ncimui_query_pane_ParamLimits

0x800c,	// (0x000545bb) ncimui_query_pane

0x9719,	// (0x00055cc8) list_highlight_pane_cp013

0xe238,	// (0x0005a7e7) ncim_list_query_list_pane_t1_copy1

0xe246,	// (0x0005a7f5) ncim_list_single_graphic_pane_g1

0x801f,	// (0x000545ce) ncim_query_button_pane_cp01

0x802b,	// (0x000545da) ncim_query_entry_pane_ParamLimits

0x802b,	// (0x000545da) ncim_query_entry_pane

0x803e,	// (0x000545ed) ncimui_query_pane_g1

0x804a,	// (0x000545f9) ncimui_query_pane_t1_ParamLimits

0x804a,	// (0x000545f9) ncimui_query_pane_t1

0xa1fa,	// (0x000567a9) input_focus_pane_cp012

0xe24e,	// (0x0005a7fd) ncim_query_entry_pane_t1

0xa83e,	// (0x00056ded) main_im_pane_ParamLimits

0xa1fa,	// (0x000567a9) main_mobtv_pane_ParamLimits

0xa1fa,	// (0x000567a9) main_mobtv_pane

0x7ced,	// (0x0005429c) main_cset6_slider_pane_g18_ParamLimits

0x7ced,	// (0x0005429c) main_cset6_slider_pane_g18

0x7cf9,	// (0x000542a8) main_cset6_slider_pane_g19_ParamLimits

0x7cf9,	// (0x000542a8) main_cset6_slider_pane_g19

0xacbc,	// (0x0005726b) bg_main_mobtv_pane_ParamLimits

0xacbc,	// (0x0005726b) bg_main_mobtv_pane

0x8063,	// (0x00054612) main_mobtv_info_pane

0x806c,	// (0x0005461b) main_mobtv_loading_pane_ParamLimits

0x806c,	// (0x0005461b) main_mobtv_loading_pane

0xe260,	// (0x0005a80f) main_mobtv_pg_channel_list_pane

0xe26a,	// (0x0005a819) main_mobtv_pg_hdr_pane

0x8079,	// (0x00054628) main_mobtv_programe_curr_pane_ParamLimits

0x8079,	// (0x00054628) main_mobtv_programe_curr_pane

0x8086,	// (0x00054635) main_mobtv_programe_next_pane_ParamLimits

0x8086,	// (0x00054635) main_mobtv_programe_next_pane

0xe273,	// (0x0005a822) popup_mobtv_noti_window

0xccd5,	// (0x00059284) main_tv_pg_hdr_pane_g1

0xe27b,	// (0x0005a82a) main_tv_pg_hdr_pane_g2

0xe283,	// (0x0005a832) main_tv_pg_hdr_pane_g3

0xe28b,	// (0x0005a83a) main_tv_pg_hdr_pane_g4

0xe293,	// (0x0005a842) main_tv_pg_hdr_pane_g5

0xe29d,	// (0x0005a84c) main_tv_pg_hdr_pane_g6

0xe2a7,	// (0x0005a856) main_tv_pg_hdr_pane_g7

0xe2b1,	// (0x0005a860) main_tv_pg_hdr_pane_g8

0xe2bb,	// (0x0005a86a) main_tv_pg_hdr_pane_g9

0xe2c5,	// (0x0005a874) main_tv_pg_hdr_pane_g10

0xe2cf,	// (0x0005a87e) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x0005c1ca) main_tv_pg_hdr_pane_g

0xe302,	// (0x0005a8b1) main_tv_pg_hdr_pane_t1

0xe310,	// (0x0005a8bf) main_tv_pg_hdr_pane_t2

0xe31e,	// (0x0005a8cd) main_tv_pg_hdr_pane_t3

0xe32e,	// (0x0005a8dd) main_tv_pg_hdr_pane_t4

0xe33e,	// (0x0005a8ed) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0005c1e1) main_tv_pg_hdr_pane_t

0xe34e,	// (0x0005a8fd) single_mobtv_pg_channel_pane_ParamLimits

0xe34e,	// (0x0005a8fd) single_mobtv_pg_channel_pane

0xe360,	// (0x0005a90f) single_mobtv_pg_channel_table_pane

0xad9d,	// (0x0005734c) single_mobtv_pg_channel_thumb_pane

0xe369,	// (0x0005a918) single_tv_pg_channel_pane_g1

0xe372,	// (0x0005a921) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x0005c1ec) single_tv_pg_channel_pane_g

0xcf2f,	// (0x000594de) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcf2f,	// (0x000594de) bg_single_mobtv_pg_channel_thumb_pane

0xe37b,	// (0x0005a92a) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe37b,	// (0x0005a92a) single_mobtv_pg_channel_thumb_pane_g1

0xe389,	// (0x0005a938) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe389,	// (0x0005a938) single_mobtv_pg_channel_thumb_pane_g2

0xe395,	// (0x0005a944) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe395,	// (0x0005a944) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0005c1f1) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0005c1f1) single_mobtv_pg_channel_thumb_pane_g

0xe3a1,	// (0x0005a950) single_mobtv_pg_channel_thumb_pane_t1

0xe3af,	// (0x0005a95e) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x0005c1f8) single_mobtv_pg_channel_thumb_pane_t

0xccd5,	// (0x00059284) bg_single_mobtv_pg_channel_table_pane_g1

0xccd5,	// (0x00059284) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x0005bc9e) bg_single_mobtv_pg_channel_table_pane_g

0xe3bd,	// (0x0005a96c) single_mobtv_pg_channel_table_pane_t1

0xe3cb,	// (0x0005a97a) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x0005c1fd) single_mobtv_pg_channel_table_pane_t

0x809b,	// (0x0005464a) main_mobtv_info_pane_g1_ParamLimits

0x809b,	// (0x0005464a) main_mobtv_info_pane_g1

0x80b9,	// (0x00054668) main_mobtv_info_pane_t1_ParamLimits

0x80b9,	// (0x00054668) main_mobtv_info_pane_t1

0x8131,	// (0x000546e0) main_mobtv_info_pane_t2_ParamLimits

0x8131,	// (0x000546e0) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x0005c207) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x0005c207) main_mobtv_info_pane_t

0x81c0,	// (0x0005476f) wait_bar_pane_cp05

0x81d2,	// (0x00054781) main_mobtv_loading_pane_g1_ParamLimits

0x81d2,	// (0x00054781) main_mobtv_loading_pane_g1

0x81e5,	// (0x00054794) main_mobtv_loading_pane_g2_ParamLimits

0x81e5,	// (0x00054794) main_mobtv_loading_pane_g2

0x81f1,	// (0x000547a0) main_mobtv_loading_pane_g3_ParamLimits

0x81f1,	// (0x000547a0) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0005c20e) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0005c20e) main_mobtv_loading_pane_g

0xe3d9,	// (0x0005a988) main_mobtv_loading_pane_t1_ParamLimits

0xe3d9,	// (0x0005a988) main_mobtv_loading_pane_t1

0xe3f1,	// (0x0005a9a0) main_mobtv_loading_pane_t2_ParamLimits

0xe3f1,	// (0x0005a9a0) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x0005c215) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x0005c215) main_mobtv_loading_pane_t

0x8204,	// (0x000547b3) wait_bar_pane_cp06_ParamLimits

0x8204,	// (0x000547b3) wait_bar_pane_cp06

0xe415,	// (0x0005a9c4) main_mobtv_programe_curr_pane_t1

0xe423,	// (0x0005a9d2) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x0005c21a) main_mobtv_programe_curr_pane_t

0xe431,	// (0x0005a9e0) main_mobtv_programe_next_pane_t1

0xe43f,	// (0x0005a9ee) main_mobtv_programe_next_pane_t2

0xe44d,	// (0x0005a9fc) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x0005c21f) main_mobtv_programe_next_pane_t

0x9719,	// (0x00055cc8) bg_popup_mobtv_noti_window_pane

0xe45b,	// (0x0005aa0a) popup_mobtv_noti_window_g1

0xe463,	// (0x0005aa12) popup_mobtv_noti_window_t1

0xe471,	// (0x0005aa20) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x0005c226) popup_mobtv_noti_window_t

0xccd5,	// (0x00059284) bg_popup_mobtv_noti_window_pane_g1

0x9719,	// (0x00055cc8) sc_clock_pane

0x9719,	// (0x00055cc8) main_fs_bigclock_pane

0x794a,	// (0x00053ef9) blid2_tripm_pane_t4_ParamLimits

0x794a,	// (0x00053ef9) blid2_tripm_pane_t4

0x8213,	// (0x000547c2) sc_clock_pane_g1_ParamLimits

0x8213,	// (0x000547c2) sc_clock_pane_g1

0x8225,	// (0x000547d4) sc_clock_pane_t1_ParamLimits

0x8225,	// (0x000547d4) sc_clock_pane_t1

0x8247,	// (0x000547f6) sc_clock_pane_t2_ParamLimits

0x8247,	// (0x000547f6) sc_clock_pane_t2

0x825f,	// (0x0005480e) sc_clock_pane_t3_ParamLimits

0x825f,	// (0x0005480e) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x0005c22b) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x0005c22b) sc_clock_pane_t

0x8d17,	// (0x000552c6) main_fs_bigclock_indicator_pane_ParamLimits

0x8d17,	// (0x000552c6) main_fs_bigclock_indicator_pane

0x8305,	// (0x000548b4) main_fs_bigclock_pane_g1_ParamLimits

0x8305,	// (0x000548b4) main_fs_bigclock_pane_g1

0x8d23,	// (0x000552d2) main_fs_bigclock_pane_t1_ParamLimits

0x8d23,	// (0x000552d2) main_fs_bigclock_pane_t1

0x8d35,	// (0x000552e4) main_fs_bigclock_pane_t2_ParamLimits

0x8d35,	// (0x000552e4) main_fs_bigclock_pane_t2

0x8d49,	// (0x000552f8) main_fs_bigclock_pane_t3_ParamLimits

0x8d49,	// (0x000552f8) main_fs_bigclock_pane_t3

0x0002,

0xfe3a,	// (0x0005c3e9) main_fs_bigclock_pane_t_ParamLimits

0xfe3a,	// (0x0005c3e9) main_fs_bigclock_pane_t

0xecbd,	// (0x0005b26c) main_fs_bigclock_indicator_pane_g1

0xe167,	// (0x0005a716) ncim_query_content_pane_g2_ParamLimits

0xe167,	// (0x0005a716) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x0005c1b8) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x0005c1b8) ncim_query_content_pane_g

0x8278,	// (0x00054827) sc_clock_pane_t4_ParamLimits

0x8278,	// (0x00054827) sc_clock_pane_t4

0xa1fa,	// (0x000567a9) main_radioblah_pane

0xd67d,	// (0x00059c2c) cell_call4_button_pane_t1_copy1_ParamLimits

0xd67d,	// (0x00059c2c) cell_call4_button_pane_t1_copy1

0x7e6d,	// (0x0005441c) main_ncimui_pane_t1_ParamLimits

0x7e6d,	// (0x0005441c) main_ncimui_pane_t1

0x7e87,	// (0x00054436) main_ncimui_pane_t2_ParamLimits

0x7e87,	// (0x00054436) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0005c1b1) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0005c1b1) main_ncimui_pane_t

0xe5b7,	// (0x0005ab66) main_radioblah_anim_pane_ParamLimits

0xe5b7,	// (0x0005ab66) main_radioblah_anim_pane

0xe5c8,	// (0x0005ab77) main_radioblah_info_pane_ParamLimits

0xe5c8,	// (0x0005ab77) main_radioblah_info_pane

0xe5dc,	// (0x0005ab8b) main_radioblah_pane_t1_ParamLimits

0xe5dc,	// (0x0005ab8b) main_radioblah_pane_t1

0xe5f8,	// (0x0005aba7) main_radioblah_pane_t2_ParamLimits

0xe5f8,	// (0x0005aba7) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x0005c24c) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x0005c24c) main_radioblah_pane_t

0x8364,	// (0x00054913) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8364,	// (0x00054913) main_radioblah_rocker_ctrl_pane

0xe640,	// (0x0005abef) main_radioblah_info_pane_t1_ParamLimits

0xe640,	// (0x0005abef) main_radioblah_info_pane_t1

0x83bc,	// (0x0005496b) main_radioblah_info_pane_t2_ParamLimits

0x83bc,	// (0x0005496b) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x0005c255) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x0005c255) main_radioblah_info_pane_t

0xccd5,	// (0x00059284) main_radioblah_rocker_ctrl_pane_g1

0x846c,	// (0x00054a1b) main_radioblah_rocker_ctrl_pane_g2

0x8474,	// (0x00054a23) main_radioblah_rocker_ctrl_pane_g3

0x847c,	// (0x00054a2b) main_radioblah_rocker_ctrl_pane_g4

0x8484,	// (0x00054a33) main_radioblah_rocker_ctrl_pane_g5

0x848c,	// (0x00054a3b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x0005c25e) main_radioblah_rocker_ctrl_pane_g

0x7bfd,	// (0x000541ac) main_cset_text2_pane_t1_copy1_ParamLimits

0x9dc7,	// (0x00056376) cam4_image_uncrop_qvga_pane

0x9e1a,	// (0x000563c9) vid4_image_uncrop_qcif_pane

0x9f6f,	// (0x0005651e) cam6_image_uncrop_qvga_pane_ParamLimits

0x9f6f,	// (0x0005651e) cam6_image_uncrop_qvga_pane

0xde62,	// (0x0005a411) vid6_image_uncrop_qcif_pane_ParamLimits

0xde62,	// (0x0005a411) vid6_image_uncrop_qcif_pane

0x9719,	// (0x00055cc8) bg_popup_preview_window_pane_cp03

0xe119,	// (0x0005a6c8) list_cset_text2_pane

0xe121,	// (0x0005a6d0) main_cset6_text2_pane_g1

0xe129,	// (0x0005a6d8) main_cset6_text2_pane_t1

0xe67a,	// (0x0005ac29) list_cset_text2_pane_t1_ParamLimits

0xe67a,	// (0x0005ac29) list_cset_text2_pane_t1

0xa1fa,	// (0x000567a9) main_radioblah_pane_ParamLimits

0x81ac,	// (0x0005475b) main_mobtv_info_pane_t3_ParamLimits

0x81ac,	// (0x0005475b) main_mobtv_info_pane_t3

0x8352,	// (0x00054901) main_radioblah_pane_g1

0x838c,	// (0x0005493b) main_radioblah_info_pane_g1

0x8411,	// (0x000549c0) main_radioblah_info_pane_t3_ParamLimits

0x8411,	// (0x000549c0) main_radioblah_info_pane_t3

0x2fc0,	// (0x0004f56f) highlight_cell_cale_month_pane_ParamLimits

0x2fc0,	// (0x0004f56f) highlight_cell_cale_month_pane

0x9719,	// (0x00055cc8) main_phob_fisheye_pane

0xd00b,	// (0x000595ba) scroll_pane_cp0031_ParamLimits

0xd00b,	// (0x000595ba) scroll_pane_cp0031

0xdf70,	// (0x0005a51f) wait_bar_pane_cp08_ParamLimits

0x7c7f,	// (0x0005422e) cset_list_set_pane_copy1_ParamLimits

0xe695,	// (0x0005ac44) highlight_cell_cale_month_pane_g1

0x8494,	// (0x00054a43) highlight_cell_cale_month_pane_t1

0xdbf3,	// (0x0005a1a2) list_gen_pane_cp01

0xd844,	// (0x00059df3) scroll_pane_01

0x84a2,	// (0x00054a51) list_single_double_fisheye_pane

0x0a91,	// (0x0004d040) list_double_fisheye_pane_g1_ParamLimits

0x0a91,	// (0x0004d040) list_double_fisheye_pane_g1

0x0a9d,	// (0x0004d04c) list_double_fisheye_pane_g2_ParamLimits

0x0a9d,	// (0x0004d04c) list_double_fisheye_pane_g2

0x84ab,	// (0x00054a5a) list_double_fisheye_pane_g3_ParamLimits

0x84ab,	// (0x00054a5a) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x0005c26b) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x0005c26b) list_double_fisheye_pane_g

0x0ace,	// (0x0004d07d) list_double_fisheye_pane_t1_ParamLimits

0x0ace,	// (0x0004d07d) list_double_fisheye_pane_t1

0x0ae9,	// (0x0004d098) list_double_fisheye_pane_t2_ParamLimits

0x0ae9,	// (0x0004d098) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x0005c276) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x0005c276) list_double_fisheye_pane_t

0x9719,	// (0x00055cc8) main_call5_pane

0x82a3,	// (0x00054852) sc_swipe_pane_ParamLimits

0x82a3,	// (0x00054852) sc_swipe_pane

0x84ca,	// (0x00054a79) call5_image_pane_ParamLimits

0x84ca,	// (0x00054a79) call5_image_pane

0x84e7,	// (0x00054a96) call5_swipe_1_pane_ParamLimits

0x84e7,	// (0x00054a96) call5_swipe_1_pane

0x84fa,	// (0x00054aa9) call5_swipe_2_pane_ParamLimits

0x84fa,	// (0x00054aa9) call5_swipe_2_pane

0x8525,	// (0x00054ad4) popup_call5_audio_first_window_ParamLimits

0x8525,	// (0x00054ad4) popup_call5_audio_first_window

0xcf2f,	// (0x000594de) call5_swipe_1_pane_g1_ParamLimits

0xcf2f,	// (0x000594de) call5_swipe_1_pane_g1

0xe69d,	// (0x0005ac4c) call5_swipe_1_pane_g2_ParamLimits

0xe69d,	// (0x0005ac4c) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x0005c27b) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x0005c27b) call5_swipe_1_pane_g

0xe6a9,	// (0x0005ac58) call5_swipe_1_pane_t1_ParamLimits

0xe6a9,	// (0x0005ac58) call5_swipe_1_pane_t1

0xcf2f,	// (0x000594de) call5_swipe_2_pane_g1_ParamLimits

0xcf2f,	// (0x000594de) call5_swipe_2_pane_g1

0xe6be,	// (0x0005ac6d) call5_swipe_2_pane_g2_ParamLimits

0xe6be,	// (0x0005ac6d) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x0005c280) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x0005c280) call5_swipe_2_pane_g

0xe6ca,	// (0x0005ac79) call5_swipe_2_pane_t1_ParamLimits

0xe6ca,	// (0x0005ac79) call5_swipe_2_pane_t1

0xe6df,	// (0x0005ac8e) sc_swipe_pane_g1_ParamLimits

0xe6df,	// (0x0005ac8e) sc_swipe_pane_g1

0xe6ec,	// (0x0005ac9b) sc_swipe_pane_g2_ParamLimits

0xe6ec,	// (0x0005ac9b) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x0005c285) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x0005c285) sc_swipe_pane_g

0xe6f8,	// (0x0005aca7) sc_swipe_pane_t1_ParamLimits

0xe6f8,	// (0x0005aca7) sc_swipe_pane_t1

0x9719,	// (0x00055cc8) main_cmail_launcher_pane

0x8536,	// (0x00054ae5) aid_size_cell_cmail_l_ParamLimits

0x8536,	// (0x00054ae5) aid_size_cell_cmail_l

0x8550,	// (0x00054aff) grid_cmail_l_pane_ParamLimits

0x8550,	// (0x00054aff) grid_cmail_l_pane

0x856a,	// (0x00054b19) cell_cmail_l_pane_ParamLimits

0x856a,	// (0x00054b19) cell_cmail_l_pane

0x8590,	// (0x00054b3f) cell_cmail_l_pane_g1_ParamLimits

0x8590,	// (0x00054b3f) cell_cmail_l_pane_g1

0x85a1,	// (0x00054b50) cell_cmail_l_pane_t1_ParamLimits

0x85a1,	// (0x00054b50) cell_cmail_l_pane_t1

0xe70d,	// (0x0005acbc) cell_cmail_l_pane_t2_ParamLimits

0xe70d,	// (0x0005acbc) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x0005c28a) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x0005c28a) cell_cmail_l_pane_t

0xa1fa,	// (0x000567a9) grid_highlight_pane_cp018_ParamLimits

0xa1fa,	// (0x000567a9) grid_highlight_pane_cp018

0x138e,	// (0x0004d93d) main2_pane_ParamLimits

0x138e,	// (0x0004d93d) main2_pane

0xa8e9,	// (0x00056e98) popup_sp_fs_action_menu_bg_pane_g1

0xa8f1,	// (0x00056ea0) popup_sp_fs_action_menu_bg_pane_g2

0xa8f9,	// (0x00056ea8) popup_sp_fs_action_menu_bg_pane_g3

0xa901,	// (0x00056eb0) popup_sp_fs_action_menu_bg_pane_g4

0xa909,	// (0x00056eb8) popup_sp_fs_action_menu_bg_pane_g5

0xa911,	// (0x00056ec0) popup_sp_fs_action_menu_bg_pane_g6

0xa919,	// (0x00056ec8) popup_sp_fs_action_menu_bg_pane_g7

0xa921,	// (0x00056ed0) popup_sp_fs_action_menu_bg_pane_g8

0xa929,	// (0x00056ed8) popup_sp_fs_action_menu_bg_pane_g9

0xa931,	// (0x00056ee0) popup_sp_fs_action_menu_bg_pane_g10

0xa931,	// (0x00056ee0) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0005b739) popup_sp_fs_action_menu_bg_pane_g

0x03f1,	// (0x0004c9a0) list_medium_line_x2_t3_g3_g1_ParamLimits

0x03f1,	// (0x0004c9a0) list_medium_line_x2_t3_g3_g1

0x03fd,	// (0x0004c9ac) list_medium_line_x2_t3_g3_g2_ParamLimits

0x03fd,	// (0x0004c9ac) list_medium_line_x2_t3_g3_g2

0x0409,	// (0x0004c9b8) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0409,	// (0x0004c9b8) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0005b7e7) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0005b7e7) list_medium_line_x2_t3_g3_g

0x0415,	// (0x0004c9c4) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0415,	// (0x0004c9c4) list_medium_line_x2_t3_g3_t1

0x042a,	// (0x0004c9d9) list_medium_line_x2_t3_g3_t2_ParamLimits

0x042a,	// (0x0004c9d9) list_medium_line_x2_t3_g3_t2

0x043e,	// (0x0004c9ed) list_medium_line_x2_t3_g3_t3_ParamLimits

0x043e,	// (0x0004c9ed) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0005b7ee) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0005b7ee) list_medium_line_x2_t3_g3_t

0x03f1,	// (0x0004c9a0) list_medium_line_x2_t3_g2_g1_ParamLimits

0x03f1,	// (0x0004c9a0) list_medium_line_x2_t3_g2_g1

0x0409,	// (0x0004c9b8) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0409,	// (0x0004c9b8) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0005b7f5) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0005b7f5) list_medium_line_x2_t3_g2_g

0x0453,	// (0x0004ca02) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0453,	// (0x0004ca02) list_medium_line_x2_t3_g2_t1

0x0468,	// (0x0004ca17) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0468,	// (0x0004ca17) list_medium_line_x2_t3_g2_t2

0x047a,	// (0x0004ca29) list_medium_line_x2_t3_g2_t3_ParamLimits

0x047a,	// (0x0004ca29) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0005b7fa) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0005b7fa) list_medium_line_x2_t3_g2_t

0x03f1,	// (0x0004c9a0) list_medium_line_x2_t4_g4_g1_ParamLimits

0x03f1,	// (0x0004c9a0) list_medium_line_x2_t4_g4_g1

0x0498,	// (0x0004ca47) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0498,	// (0x0004ca47) list_medium_line_x2_t4_g4_g2

0x03fd,	// (0x0004c9ac) list_medium_line_x2_t4_g4_g3_ParamLimits

0x03fd,	// (0x0004c9ac) list_medium_line_x2_t4_g4_g3

0x04a4,	// (0x0004ca53) list_medium_line_x2_t4_g4_g4_ParamLimits

0x04a4,	// (0x0004ca53) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0005b801) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0005b801) list_medium_line_x2_t4_g4_g

0x04b0,	// (0x0004ca5f) list_medium_line_x2_t4_g4_t1_ParamLimits

0x04b0,	// (0x0004ca5f) list_medium_line_x2_t4_g4_t1

0x04ca,	// (0x0004ca79) list_medium_line_x2_t4_g4_t2_ParamLimits

0x04ca,	// (0x0004ca79) list_medium_line_x2_t4_g4_t2

0x04e0,	// (0x0004ca8f) list_medium_line_x2_t4_g4_t3_ParamLimits

0x04e0,	// (0x0004ca8f) list_medium_line_x2_t4_g4_t3

0x04f5,	// (0x0004caa4) list_medium_line_x2_t4_g4_t4_ParamLimits

0x04f5,	// (0x0004caa4) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0005b80a) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0005b80a) list_medium_line_x2_t4_g4_t

0x03f1,	// (0x0004c9a0) list_medium_line_x2_t2_g4_g1_ParamLimits

0x03f1,	// (0x0004c9a0) list_medium_line_x2_t2_g4_g1

0x0498,	// (0x0004ca47) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0498,	// (0x0004ca47) list_medium_line_x2_t2_g4_g2

0x03fd,	// (0x0004c9ac) list_medium_line_x2_t2_g4_g3_ParamLimits

0x03fd,	// (0x0004c9ac) list_medium_line_x2_t2_g4_g3

0x0409,	// (0x0004c9b8) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0409,	// (0x0004c9b8) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0005b871) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0005b871) list_medium_line_x2_t2_g4_g

0x0507,	// (0x0004cab6) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0507,	// (0x0004cab6) list_medium_line_x2_t2_g4_t1

0x043e,	// (0x0004c9ed) list_medium_line_x2_t2_g4_t2_ParamLimits

0x043e,	// (0x0004c9ed) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0005b87a) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0005b87a) list_medium_line_x2_t2_g4_t

0x03f1,	// (0x0004c9a0) list_medium_line_x2_t2_g3_g1_ParamLimits

0x03f1,	// (0x0004c9a0) list_medium_line_x2_t2_g3_g1

0x03fd,	// (0x0004c9ac) list_medium_line_x2_t2_g3_g2_ParamLimits

0x03fd,	// (0x0004c9ac) list_medium_line_x2_t2_g3_g2

0x0409,	// (0x0004c9b8) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0409,	// (0x0004c9b8) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0005b7e7) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0005b7e7) list_medium_line_x2_t2_g3_g

0x051c,	// (0x0004cacb) list_medium_line_x2_t2_g3_t1_ParamLimits

0x051c,	// (0x0004cacb) list_medium_line_x2_t2_g3_t1

0x043e,	// (0x0004c9ed) list_medium_line_x2_t2_g3_t2_ParamLimits

0x043e,	// (0x0004c9ed) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0005b87f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0005b87f) list_medium_line_x2_t2_g3_t

0x3125,	// (0x0004f6d4) main_sp_fs_list_pane_ParamLimits

0x3125,	// (0x0004f6d4) main_sp_fs_list_pane

0xcd46,	// (0x000592f5) sp_fs_scroll_pane_ParamLimits

0xcd46,	// (0x000592f5) sp_fs_scroll_pane

0x0531,	// (0x0004cae0) list_medium_line_x2_t3_t1

0x0541,	// (0x0004caf0) list_medium_line_x2_t3_t2

0x054f,	// (0x0004cafe) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0005b8ca) list_medium_line_x2_t3_t

0x055d,	// (0x0004cb0c) list_medium_line_x3_t4_t1

0x056d,	// (0x0004cb1c) list_medium_line_x3_t4_t2

0x057b,	// (0x0004cb2a) list_medium_line_x3_t4_t3

0x054f,	// (0x0004cafe) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0005b8d1) list_medium_line_x3_t4_t

0x0589,	// (0x0004cb38) list_medium_line_x4_t5_t1

0x0599,	// (0x0004cb48) list_medium_line_x4_t5_t2

0x057b,	// (0x0004cb2a) list_medium_line_x4_t5_t3

0x05a7,	// (0x0004cb56) list_medium_line_x4_t5_t4

0x054f,	// (0x0004cafe) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0005b8da) list_medium_line_x4_t5_t

0x03f1,	// (0x0004c9a0) list_medium_line_t4_g4_g1_ParamLimits

0x03f1,	// (0x0004c9a0) list_medium_line_t4_g4_g1

0x04a4,	// (0x0004ca53) list_medium_line_t4_g4_g2_ParamLimits

0x04a4,	// (0x0004ca53) list_medium_line_t4_g4_g2

0x05b5,	// (0x0004cb64) list_medium_line_t4_g4_g3_ParamLimits

0x05b5,	// (0x0004cb64) list_medium_line_t4_g4_g3

0x0409,	// (0x0004c9b8) list_medium_line_t4_g4_g4_ParamLimits

0x0409,	// (0x0004c9b8) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0005b8e5) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0005b8e5) list_medium_line_t4_g4_g

0x05c1,	// (0x0004cb70) list_medium_line_t4_g4_t1_ParamLimits

0x05c1,	// (0x0004cb70) list_medium_line_t4_g4_t1

0x05d6,	// (0x0004cb85) list_medium_line_t4_g4_t2_ParamLimits

0x05d6,	// (0x0004cb85) list_medium_line_t4_g4_t2

0x05ec,	// (0x0004cb9b) list_medium_line_t4_g4_t3_ParamLimits

0x05ec,	// (0x0004cb9b) list_medium_line_t4_g4_t3

0x043e,	// (0x0004c9ed) list_medium_line_t4_g4_t4_ParamLimits

0x043e,	// (0x0004c9ed) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0005b8ee) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0005b8ee) list_medium_line_t4_g4_t

0x31f4,	// (0x0004f7a3) chi_dic_find_pane_g1

0x424c,	// (0x000507fb) main_tport_pane

0x07a3,	// (0x0004cd52) list_medium_line_plain_t1

0x07b1,	// (0x0004cd60) list_medium_line_t2_g2_g1_ParamLimits

0x07b1,	// (0x0004cd60) list_medium_line_t2_g2_g1

0x07bd,	// (0x0004cd6c) list_medium_line_t2_g2_g2_ParamLimits

0x07bd,	// (0x0004cd6c) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0005bfc2) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0005bfc2) list_medium_line_t2_g2_g

0x07c9,	// (0x0004cd78) list_medium_line_t2_g2_t1_ParamLimits

0x07c9,	// (0x0004cd78) list_medium_line_t2_g2_t1

0x07e3,	// (0x0004cd92) list_medium_line_t2_g2_t2_ParamLimits

0x07e3,	// (0x0004cd92) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0005bfc7) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0005bfc7) list_medium_line_t2_g2_t

0x770d,	// (0x00053cbc) aid_sp_fs_list_icon_a_sm

0x7715,	// (0x00053cc4) aid_sp_fs_list_icon_d

0x771d,	// (0x00053ccc) aid_sp_fs_text_primary

0xe2f9,	// (0x0005a8a8) aid_sp_fs_text_secondary

0x7726,	// (0x00053cd5) list_medium_line

0x7726,	// (0x00053cd5) list_medium_line_g2

0x7726,	// (0x00053cd5) list_medium_line_g3

0x7726,	// (0x00053cd5) list_medium_line_plain

0x7726,	// (0x00053cd5) list_medium_line_plain_t2

0x7726,	// (0x00053cd5) list_medium_line_plain_t3

0x7726,	// (0x00053cd5) list_medium_line_right_icon

0x7726,	// (0x00053cd5) list_medium_line_right_iconx2

0x7726,	// (0x00053cd5) list_medium_line_t2

0x7726,	// (0x00053cd5) list_medium_line_t2_g2

0x7726,	// (0x00053cd5) list_medium_line_t2_g3

0x7726,	// (0x00053cd5) list_medium_line_t2_right_icon

0x7726,	// (0x00053cd5) list_medium_line_t2_right_iconx2

0x7726,	// (0x00053cd5) list_medium_line_t3

0x7726,	// (0x00053cd5) list_medium_line_t3_g2

0x7726,	// (0x00053cd5) list_medium_line_t3_g3

0x7726,	// (0x00053cd5) list_medium_line_t3_right_iconx2

0x0975,	// (0x0004cf24) list_medium_line_t4_g4

0x7726,	// (0x00053cd5) list_medium_line_x2

0x7726,	// (0x00053cd5) list_medium_line_x2_t2_g2

0x7726,	// (0x00053cd5) list_medium_line_x2_t2_g3

0x7726,	// (0x00053cd5) list_medium_line_x2_t2_g4

0x7726,	// (0x00053cd5) list_medium_line_x2_t3

0x7726,	// (0x00053cd5) list_medium_line_x2_t3_g2

0x7726,	// (0x00053cd5) list_medium_line_x2_t3_g3

0x7726,	// (0x00053cd5) list_medium_line_x2_t3_g4

0x7726,	// (0x00053cd5) list_medium_line_x2_t4_g2

0x7726,	// (0x00053cd5) list_medium_line_x2_t4_g4

0x097e,	// (0x0004cf2d) list_medium_line_x3

0x097e,	// (0x0004cf2d) list_medium_line_x3_t4

0x097e,	// (0x0004cf2d) list_medium_line_x3_t4_g4

0x0975,	// (0x0004cf24) list_medium_line_x4_t4

0x0975,	// (0x0004cf24) list_medium_line_x4_t4_g7

0x0975,	// (0x0004cf24) list_medium_line_x4_t5

0x0987,	// (0x0004cf36) list_single_fs_dyc_pane_ParamLimits

0x0987,	// (0x0004cf36) list_single_fs_dyc_pane

0x03f1,	// (0x0004c9a0) list_medium_line_x4_t4_g7_g1_ParamLimits

0x03f1,	// (0x0004c9a0) list_medium_line_x4_t4_g7_g1

0x09c7,	// (0x0004cf76) list_medium_line_x4_t4_g7_g2_ParamLimits

0x09c7,	// (0x0004cf76) list_medium_line_x4_t4_g7_g2

0x09d3,	// (0x0004cf82) list_medium_line_x4_t4_g7_g3_ParamLimits

0x09d3,	// (0x0004cf82) list_medium_line_x4_t4_g7_g3

0x09e2,	// (0x0004cf91) list_medium_line_x4_t4_g7_g4_ParamLimits

0x09e2,	// (0x0004cf91) list_medium_line_x4_t4_g7_g4

0x09ee,	// (0x0004cf9d) list_medium_line_x4_t4_g7_g5_ParamLimits

0x09ee,	// (0x0004cf9d) list_medium_line_x4_t4_g7_g5

0x09fd,	// (0x0004cfac) list_medium_line_x4_t4_g7_g6_ParamLimits

0x09fd,	// (0x0004cfac) list_medium_line_x4_t4_g7_g6

0x0a0c,	// (0x0004cfbb) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0a0c,	// (0x0004cfbb) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0005c192) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0005c192) list_medium_line_x4_t4_g7_g

0x0a18,	// (0x0004cfc7) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0a18,	// (0x0004cfc7) list_medium_line_x4_t4_g7_t1

0x0a2d,	// (0x0004cfdc) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0a2d,	// (0x0004cfdc) list_medium_line_x4_t4_g7_t2

0x0a42,	// (0x0004cff1) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0a42,	// (0x0004cff1) list_medium_line_x4_t4_g7_t3

0x0a57,	// (0x0004d006) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0a57,	// (0x0004d006) list_medium_line_x4_t4_g7_t4

0x0a69,	// (0x0004d018) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0a69,	// (0x0004d018) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x0005c1a1) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x0005c1a1) list_medium_line_x4_t4_g7_t

0x0a7b,	// (0x0004d02a) list_single_dyc_row_pane_ParamLimits

0x0a7b,	// (0x0004d02a) list_single_dyc_row_pane

0x84b7,	// (0x00054a66) call5_gesture_pane_ParamLimits

0x84b7,	// (0x00054a66) call5_gesture_pane

0x850d,	// (0x00054abc) call5_windows_pane_ParamLimits

0x850d,	// (0x00054abc) call5_windows_pane

0x85b7,	// (0x00054b66) call5_swipe_1_pane_cp_ParamLimits

0x85b7,	// (0x00054b66) call5_swipe_1_pane_cp

0x85c3,	// (0x00054b72) call5_swipe_2_pane_cp_ParamLimits

0x85c3,	// (0x00054b72) call5_swipe_2_pane_cp

0xaa33,	// (0x00056fe2) call5_image_pane_cp

0x85cf,	// (0x00054b7e) popup_call5_audio_first_window_cp_ParamLimits

0x85cf,	// (0x00054b7e) popup_call5_audio_first_window_cp

0xe6df,	// (0x0005ac8e) call5_swipe_1_pane_g1_cp_ParamLimits

0xe6df,	// (0x0005ac8e) call5_swipe_1_pane_g1_cp

0xe71f,	// (0x0005acce) call5_swipe_1_pane_g2_cp

0xe6f8,	// (0x0005aca7) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6f8,	// (0x0005aca7) call5_swipe_1_pane_t1_cp

0xe6df,	// (0x0005ac8e) call5_swipe_2_pane_g1_cp_ParamLimits

0xe6df,	// (0x0005ac8e) call5_swipe_2_pane_g1_cp

0xe727,	// (0x0005acd6) call5_swipe_2_pane_g2_cp

0xe72f,	// (0x0005acde) call5_swipe_2_pane_t1_cp_ParamLimits

0xe72f,	// (0x0005acde) call5_swipe_2_pane_t1_cp

0xa1fa,	// (0x000567a9) main_sp_fs_email_pane

0xe744,	// (0x0005acf3) main_sp_fs_listscroll_pane_te

0x85dd,	// (0x00054b8c) popup_sp_fs_action_menu_pane_ParamLimits

0x85dd,	// (0x00054b8c) popup_sp_fs_action_menu_pane

0xccd5,	// (0x00059284) bg_sp_fs_ctrlbar_pane_g1

0xe74d,	// (0x0005acfc) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe756,	// (0x0005ad05) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe75f,	// (0x0005ad0e) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xccd5,	// (0x00059284) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x0005c28f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcaba,	// (0x00059069) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcaba,	// (0x00059069) bg_sp_fs_ctrlbar_ddmenu_pane

0xe768,	// (0x0005ad17) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe768,	// (0x0005ad17) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe774,	// (0x0005ad23) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe774,	// (0x0005ad23) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x0005c298) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x0005c298) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe780,	// (0x0005ad2f) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe780,	// (0x0005ad2f) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0b0b,	// (0x0004d0ba) list_medium_line_t2_right_icon_g1

0x0b13,	// (0x0004d0c2) list_medium_line_t2_right_icon_t1

0x0b23,	// (0x0004d0d2) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x0005c29d) list_medium_line_t2_right_icon_t

0xc8cd,	// (0x00058e7c) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc8cd,	// (0x00058e7c) bg_sp_fs_ctrlbar_pane

0x8667,	// (0x00054c16) main_sp_fs_ctrlbar_button_pane_cp01

0x8671,	// (0x00054c20) main_sp_fs_ctrlbar_ddmenu_pane

0xe7d2,	// (0x0005ad81) main_sp_fs_ctrlbar_pane_g1

0xe7de,	// (0x0005ad8d) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x0005c2a2) main_sp_fs_ctrlbar_pane_g

0xe7ea,	// (0x0005ad99) main_sp_fs_ctrlbar_pane_t1

0x867b,	// (0x00054c2a) main_sp_fs_ctrlbar_pane

0x869f,	// (0x00054c4e) main_sp_fs_listscroll_pane_te_cp01

0x0b35,	// (0x0004d0e4) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0b35,	// (0x0004d0e4) popup_sp_fs_action_menu_pane_cp01

0xa1fa,	// (0x000567a9) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa1fa,	// (0x000567a9) bg_sp_fs_highlight_list_pane_cp01

0x86bf,	// (0x00054c6e) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x86bf,	// (0x00054c6e) sp_fs_action_menu_list_gene_pane_g1

0xe81a,	// (0x0005adc9) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe81a,	// (0x0005adc9) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x0005c2ac) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x0005c2ac) sp_fs_action_menu_list_gene_pane_g

0x86ce,	// (0x00054c7d) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x86ce,	// (0x00054c7d) sp_fs_action_menu_list_gene_pane_t1

0x86e6,	// (0x00054c95) sp_fs_action_menu_list_gene_pane_ParamLimits

0x86e6,	// (0x00054c95) sp_fs_action_menu_list_gene_pane

0xe827,	// (0x0005add6) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe827,	// (0x0005add6) popup_sp_fs_action_menu_bg_pane

0x8705,	// (0x00054cb4) sp_fs_action_menu_list_pane_ParamLimits

0x8705,	// (0x00054cb4) sp_fs_action_menu_list_pane

0x8725,	// (0x00054cd4) sp_fs_scroll_pane_cp01_ParamLimits

0x8725,	// (0x00054cd4) sp_fs_scroll_pane_cp01

0x0b65,	// (0x0004d114) list_medium_line_plain_t2_t1

0x0b75,	// (0x0004d124) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x0005c2b1) list_medium_line_plain_t2_t

0x0b85,	// (0x0004d134) list_medium_line_plain_t3_t1

0x0b95,	// (0x0004d144) list_medium_line_plain_t3_t2

0x0ba3,	// (0x0004d152) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x0005c2b6) list_medium_line_plain_t3_t

0x03f1,	// (0x0004c9a0) list_medium_line_x2_t2_g2_g1_ParamLimits

0x03f1,	// (0x0004c9a0) list_medium_line_x2_t2_g2_g1

0x0409,	// (0x0004c9b8) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0409,	// (0x0004c9b8) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0005b7f5) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0005b7f5) list_medium_line_x2_t2_g2_g

0x05c1,	// (0x0004cb70) list_medium_line_x2_t2_g2_t1_ParamLimits

0x05c1,	// (0x0004cb70) list_medium_line_x2_t2_g2_t1

0x043e,	// (0x0004c9ed) list_medium_line_x2_t2_g2_t2_ParamLimits

0x043e,	// (0x0004c9ed) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x0005c2bd) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x0005c2bd) list_medium_line_x2_t2_g2_t

0x03f1,	// (0x0004c9a0) list_medium_line_x2_t4_g2_g1_ParamLimits

0x03f1,	// (0x0004c9a0) list_medium_line_x2_t4_g2_g1

0x0bb1,	// (0x0004d160) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0bb1,	// (0x0004d160) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd13,	// (0x0005c2c2) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd13,	// (0x0005c2c2) list_medium_line_x2_t4_g2_g

0x0bc3,	// (0x0004d172) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0bc3,	// (0x0004d172) list_medium_line_x2_t4_g2_t1

0x0bdd,	// (0x0004d18c) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0bdd,	// (0x0004d18c) list_medium_line_x2_t4_g2_t2

0x0bf3,	// (0x0004d1a2) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0bf3,	// (0x0004d1a2) list_medium_line_x2_t4_g2_t3

0x043e,	// (0x0004c9ed) list_medium_line_x2_t4_g2_t4_ParamLimits

0x043e,	// (0x0004c9ed) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd18,	// (0x0005c2c7) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd18,	// (0x0005c2c7) list_medium_line_x2_t4_g2_t

0x0c08,	// (0x0004d1b7) list_medium_line_t3_right_iconx2_g1

0x0b0b,	// (0x0004d0ba) list_medium_line_t3_right_iconx2_g2

0x0c10,	// (0x0004d1bf) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd21,	// (0x0005c2d0) list_medium_line_t3_right_iconx2_g

0x0c1a,	// (0x0004d1c9) list_medium_line_t3_right_iconx2_t1

0x0c2a,	// (0x0004d1d9) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd28,	// (0x0005c2d7) list_medium_line_t3_right_iconx2_t

0x03f1,	// (0x0004c9a0) list_medium_line_x3_t4_g4_g1_ParamLimits

0x03f1,	// (0x0004c9a0) list_medium_line_x3_t4_g4_g1

0x03fd,	// (0x0004c9ac) list_medium_line_x3_t4_g4_g2_ParamLimits

0x03fd,	// (0x0004c9ac) list_medium_line_x3_t4_g4_g2

0x04a4,	// (0x0004ca53) list_medium_line_x3_t4_g4_g3_ParamLimits

0x04a4,	// (0x0004ca53) list_medium_line_x3_t4_g4_g3

0x0c38,	// (0x0004d1e7) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0c38,	// (0x0004d1e7) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2d,	// (0x0005c2dc) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2d,	// (0x0005c2dc) list_medium_line_x3_t4_g4_g

0x0c44,	// (0x0004d1f3) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0c44,	// (0x0004d1f3) list_medium_line_x3_t4_g4_t1

0x0c5b,	// (0x0004d20a) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0c5b,	// (0x0004d20a) list_medium_line_x3_t4_g4_t2

0x0c76,	// (0x0004d225) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0c76,	// (0x0004d225) list_medium_line_x3_t4_g4_t3

0x0c8b,	// (0x0004d23a) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0c8b,	// (0x0004d23a) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd36,	// (0x0005c2e5) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd36,	// (0x0005c2e5) list_medium_line_x3_t4_g4_t

0x0ca8,	// (0x0004d257) list_single_dyc_row_text_pane_t1_ParamLimits

0x0ca8,	// (0x0004d257) list_single_dyc_row_text_pane_t1

0x0cf1,	// (0x0004d2a0) list_single_dyc_row_text_pane_t2_ParamLimits

0x0cf1,	// (0x0004d2a0) list_single_dyc_row_text_pane_t2

0x874b,	// (0x00054cfa) list_single_dyc_row_text_pane_t3_ParamLimits

0x874b,	// (0x00054cfa) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3f,	// (0x0005c2ee) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3f,	// (0x0005c2ee) list_single_dyc_row_text_pane_t

0x876f,	// (0x00054d1e) list_single_dyc_row_pane_g1_ParamLimits

0x876f,	// (0x00054d1e) list_single_dyc_row_pane_g1

0x877b,	// (0x00054d2a) list_single_dyc_row_pane_g2_ParamLimits

0x877b,	// (0x00054d2a) list_single_dyc_row_pane_g2

0x8787,	// (0x00054d36) list_single_dyc_row_pane_g3_ParamLimits

0x8787,	// (0x00054d36) list_single_dyc_row_pane_g3

0x8793,	// (0x00054d42) list_single_dyc_row_pane_g4_ParamLimits

0x8793,	// (0x00054d42) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x0005c2fb) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x0005c2fb) list_single_dyc_row_pane_g

0x879f,	// (0x00054d4e) list_single_dyc_row_text_pane_ParamLimits

0x879f,	// (0x00054d4e) list_single_dyc_row_text_pane

0x9719,	// (0x00055cc8) bg_sp_fs_scroll_pane

0xe835,	// (0x0005ade4) thumb_sp_fs_scroll_pane

0x07b1,	// (0x0004cd60) list_medium_line_g1_ParamLimits

0x07b1,	// (0x0004cd60) list_medium_line_g1

0x0e26,	// (0x0004d3d5) list_medium_line_t1_ParamLimits

0x0e26,	// (0x0004d3d5) list_medium_line_t1

0x03f1,	// (0x0004c9a0) list_medium_line_x2_g1_ParamLimits

0x03f1,	// (0x0004c9a0) list_medium_line_x2_g1

0x03fd,	// (0x0004c9ac) list_medium_line_x2_g2_ParamLimits

0x03fd,	// (0x0004c9ac) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x0005c304) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x0005c304) list_medium_line_x2_g

0x87be,	// (0x00054d6d) list_medium_line_x2_t1_ParamLimits

0x87be,	// (0x00054d6d) list_medium_line_x2_t1

0x03f1,	// (0x0004c9a0) list_medium_line_x3_g1_ParamLimits

0x03f1,	// (0x0004c9a0) list_medium_line_x3_g1

0x03fd,	// (0x0004c9ac) list_medium_line_x3_g2_ParamLimits

0x03fd,	// (0x0004c9ac) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x0005c304) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x0005c304) list_medium_line_x3_g

0x87be,	// (0x00054d6d) list_medium_line_x3_t1_ParamLimits

0x87be,	// (0x00054d6d) list_medium_line_x3_t1

0xe83e,	// (0x0005aded) thumb_sp_fs_scroll_pane_g1

0xe847,	// (0x0005adf6) thumb_sp_fs_scroll_pane_g2

0xe850,	// (0x0005adff) thumb_sp_fs_scroll_pane_g3

0x0002,

0x01c3,	// (0x0004c772) thumb_sp_fs_scroll_pane_g

0xe83e,	// (0x0005aded) bg_sp_fs_scroll_pane_g1

0xe847,	// (0x0005adf6) bg_sp_fs_scroll_pane_g2

0xe850,	// (0x0005adff) bg_sp_fs_scroll_pane_g3

0x0002,

0x01c3,	// (0x0004c772) bg_sp_fs_scroll_pane_g

0x03f1,	// (0x0004c9a0) list_medium_line_x2_t3_g4_g1_ParamLimits

0x03f1,	// (0x0004c9a0) list_medium_line_x2_t3_g4_g1

0x0498,	// (0x0004ca47) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0498,	// (0x0004ca47) list_medium_line_x2_t3_g4_g2

0x03fd,	// (0x0004c9ac) list_medium_line_x2_t3_g4_g3_ParamLimits

0x03fd,	// (0x0004c9ac) list_medium_line_x2_t3_g4_g3

0x0409,	// (0x0004c9b8) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0409,	// (0x0004c9b8) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0005b871) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0005b871) list_medium_line_x2_t3_g4_g

0x0e3b,	// (0x0004d3ea) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0e3b,	// (0x0004d3ea) list_medium_line_x2_t3_g4_t1

0x0e55,	// (0x0004d404) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0e55,	// (0x0004d404) list_medium_line_x2_t3_g4_t2

0x043e,	// (0x0004c9ed) list_medium_line_x2_t3_g4_t3_ParamLimits

0x043e,	// (0x0004c9ed) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5a,	// (0x0005c309) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5a,	// (0x0005c309) list_medium_line_x2_t3_g4_t

0x07b1,	// (0x0004cd60) list_medium_line_g2_g1_ParamLimits

0x07b1,	// (0x0004cd60) list_medium_line_g2_g1

0x07bd,	// (0x0004cd6c) list_medium_line_g2_g2_ParamLimits

0x07bd,	// (0x0004cd6c) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0005bfc2) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0005bfc2) list_medium_line_g2_g

0x0e6f,	// (0x0004d41e) list_medium_line_g2_t1_ParamLimits

0x0e6f,	// (0x0004d41e) list_medium_line_g2_t1

0x07b1,	// (0x0004cd60) list_medium_line_t3_g2_g1_ParamLimits

0x07b1,	// (0x0004cd60) list_medium_line_t3_g2_g1

0x07bd,	// (0x0004cd6c) list_medium_line_t3_g2_g2_ParamLimits

0x07bd,	// (0x0004cd6c) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0005bfc2) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0005bfc2) list_medium_line_t3_g2_g

0x0e84,	// (0x0004d433) list_medium_line_t3_g2_t1_ParamLimits

0x0e84,	// (0x0004d433) list_medium_line_t3_g2_t1

0x0e9e,	// (0x0004d44d) list_medium_line_t3_g2_t2_ParamLimits

0x0e9e,	// (0x0004d44d) list_medium_line_t3_g2_t2

0x0eb4,	// (0x0004d463) list_medium_line_t3_g2_t3_ParamLimits

0x0eb4,	// (0x0004d463) list_medium_line_t3_g2_t3

0x0002,

0xfd61,	// (0x0005c310) list_medium_line_t3_g2_t_ParamLimits

0xfd61,	// (0x0005c310) list_medium_line_t3_g2_t

0x0b0b,	// (0x0004d0ba) list_medium_line_right_icon_g1

0x0ece,	// (0x0004d47d) list_medium_line_right_icon_t1

0x07b1,	// (0x0004cd60) list_medium_line_t2_g1_ParamLimits

0x07b1,	// (0x0004cd60) list_medium_line_t2_g1

0x0edc,	// (0x0004d48b) list_medium_line_t2_t1_ParamLimits

0x0edc,	// (0x0004d48b) list_medium_line_t2_t1

0x0ef6,	// (0x0004d4a5) list_medium_line_t2_t2_ParamLimits

0x0ef6,	// (0x0004d4a5) list_medium_line_t2_t2

0x0001,

0xfd68,	// (0x0005c317) list_medium_line_t2_t_ParamLimits

0xfd68,	// (0x0005c317) list_medium_line_t2_t

0x07b1,	// (0x0004cd60) list_medium_line_t3_g1_ParamLimits

0x07b1,	// (0x0004cd60) list_medium_line_t3_g1

0x0f0f,	// (0x0004d4be) list_medium_line_t3_t1_ParamLimits

0x0f0f,	// (0x0004d4be) list_medium_line_t3_t1

0x0f29,	// (0x0004d4d8) list_medium_line_t3_t2_ParamLimits

0x0f29,	// (0x0004d4d8) list_medium_line_t3_t2

0x0f3f,	// (0x0004d4ee) list_medium_line_t3_t3_ParamLimits

0x0f3f,	// (0x0004d4ee) list_medium_line_t3_t3

0x0002,

0xfd6d,	// (0x0005c31c) list_medium_line_t3_t_ParamLimits

0xfd6d,	// (0x0005c31c) list_medium_line_t3_t

0x07b1,	// (0x0004cd60) list_medium_line_g3_g1_ParamLimits

0x07b1,	// (0x0004cd60) list_medium_line_g3_g1

0x0f54,	// (0x0004d503) list_medium_line_g3_g2_ParamLimits

0x0f54,	// (0x0004d503) list_medium_line_g3_g2

0x07bd,	// (0x0004cd6c) list_medium_line_g3_g3_ParamLimits

0x07bd,	// (0x0004cd6c) list_medium_line_g3_g3

0x0002,

0xfd74,	// (0x0005c323) list_medium_line_g3_g_ParamLimits

0xfd74,	// (0x0005c323) list_medium_line_g3_g

0x0f60,	// (0x0004d50f) list_medium_line_g3_t1_ParamLimits

0x0f60,	// (0x0004d50f) list_medium_line_g3_t1

0x07b1,	// (0x0004cd60) list_medium_line_t2_g3_g1_ParamLimits

0x07b1,	// (0x0004cd60) list_medium_line_t2_g3_g1

0x0f54,	// (0x0004d503) list_medium_line_t2_g3_g2_ParamLimits

0x0f54,	// (0x0004d503) list_medium_line_t2_g3_g2

0x07bd,	// (0x0004cd6c) list_medium_line_t2_g3_g3_ParamLimits

0x07bd,	// (0x0004cd6c) list_medium_line_t2_g3_g3

0x0002,

0xfd74,	// (0x0005c323) list_medium_line_t2_g3_g_ParamLimits

0xfd74,	// (0x0005c323) list_medium_line_t2_g3_g

0x0f75,	// (0x0004d524) list_medium_line_t2_g3_t1_ParamLimits

0x0f75,	// (0x0004d524) list_medium_line_t2_g3_t1

0x0f8f,	// (0x0004d53e) list_medium_line_t2_g3_t2_ParamLimits

0x0f8f,	// (0x0004d53e) list_medium_line_t2_g3_t2

0x0001,

0xfd7b,	// (0x0005c32a) list_medium_line_t2_g3_t_ParamLimits

0xfd7b,	// (0x0005c32a) list_medium_line_t2_g3_t

0x07b1,	// (0x0004cd60) list_medium_line_t3_g3_g1_ParamLimits

0x07b1,	// (0x0004cd60) list_medium_line_t3_g3_g1

0x0f54,	// (0x0004d503) list_medium_line_t3_g3_g2_ParamLimits

0x0f54,	// (0x0004d503) list_medium_line_t3_g3_g2

0x07bd,	// (0x0004cd6c) list_medium_line_t3_g3_g3_ParamLimits

0x07bd,	// (0x0004cd6c) list_medium_line_t3_g3_g3

0x0002,

0xfd74,	// (0x0005c323) list_medium_line_t3_g3_g_ParamLimits

0xfd74,	// (0x0005c323) list_medium_line_t3_g3_g

0x0fad,	// (0x0004d55c) list_medium_line_t3_g3_t1_ParamLimits

0x0fad,	// (0x0004d55c) list_medium_line_t3_g3_t1

0x0fc6,	// (0x0004d575) list_medium_line_t3_g3_t2_ParamLimits

0x0fc6,	// (0x0004d575) list_medium_line_t3_g3_t2

0x0fdc,	// (0x0004d58b) list_medium_line_t3_g3_t3_ParamLimits

0x0fdc,	// (0x0004d58b) list_medium_line_t3_g3_t3

0x0002,

0xfd80,	// (0x0005c32f) list_medium_line_t3_g3_t_ParamLimits

0xfd80,	// (0x0005c32f) list_medium_line_t3_g3_t

0x0c08,	// (0x0004d1b7) list_medium_line_right_iconx2_g1

0x0b0b,	// (0x0004d0ba) list_medium_line_right_iconx2_g2

0x0001,

0xfd87,	// (0x0005c336) list_medium_line_right_iconx2_g

0x0ff6,	// (0x0004d5a5) list_medium_line_right_iconx2_t1

0x0c08,	// (0x0004d1b7) list_medium_line_t2_right_iconx2_g1

0x0b0b,	// (0x0004d0ba) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd87,	// (0x0005c336) list_medium_line_t2_right_iconx2_g

0x1004,	// (0x0004d5b3) list_medium_line_t2_right_iconx2_t1

0x1014,	// (0x0004d5c3) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8c,	// (0x0005c33b) list_medium_line_t2_right_iconx2_t

0x1026,	// (0x0004d5d5) list_medium_line_x4_t4_t1

0x1034,	// (0x0004d5e3) list_medium_line_x4_t4_t2

0x1044,	// (0x0004d5f3) list_medium_line_x4_t4_t3

0x1054,	// (0x0004d603) list_medium_line_x4_t4_t4

0x0003,

0xfd91,	// (0x0005c340) list_medium_line_x4_t4_t

0x8817,	// (0x00054dc6) tport_appsw_pane_ParamLimits

0x8817,	// (0x00054dc6) tport_appsw_pane

0x882f,	// (0x00054dde) tport_contact_pane_ParamLimits

0x882f,	// (0x00054dde) tport_contact_pane

0x8847,	// (0x00054df6) tport_listscroll_pane_ParamLimits

0x8847,	// (0x00054df6) tport_listscroll_pane

0x8861,	// (0x00054e10) cell_tport_appsw_pane_ParamLimits

0x8861,	// (0x00054e10) cell_tport_appsw_pane

0xd70a,	// (0x00059cb9) tport_appsw_pane_g1_ParamLimits

0xd70a,	// (0x00059cb9) tport_appsw_pane_g1

0xe859,	// (0x0005ae08) tport_contact_pane_g1

0xe862,	// (0x0005ae11) tport_contact_pane_t1

0xe870,	// (0x0005ae1f) tport_contact_pane_t2

0x0001,

0x020a,	// (0x0004c7b9) tport_contact_pane_t

0xe87e,	// (0x0005ae2d) list_tport_pane

0xe887,	// (0x0005ae36) scroll_pane_cp_030

0x88a9,	// (0x00054e58) cell_tport_appsw_pane_g1

0x88b9,	// (0x00054e68) cell_tport_appsw_pane_t1

0x88c7,	// (0x00054e76) grid_highlight_pane_cp019

0x88cf,	// (0x00054e7e) list_tport_double_graphic_pane_ParamLimits

0x88cf,	// (0x00054e7e) list_tport_double_graphic_pane

0xa1fa,	// (0x000567a9) list_highlight_pane_cp023_ParamLimits

0xa1fa,	// (0x000567a9) list_highlight_pane_cp023

0x88dc,	// (0x00054e8b) list_tport_double_graphic_pane_g1_ParamLimits

0x88dc,	// (0x00054e8b) list_tport_double_graphic_pane_g1

0x88e9,	// (0x00054e98) list_tport_double_graphic_pane_t1_ParamLimits

0x88e9,	// (0x00054e98) list_tport_double_graphic_pane_t1

0x88fe,	// (0x00054ead) list_tport_double_graphic_pane_t2_ParamLimits

0x88fe,	// (0x00054ead) list_tport_double_graphic_pane_t2

0x0001,

0xfda1,	// (0x0005c350) list_tport_double_graphic_pane_t_ParamLimits

0xfda1,	// (0x0005c350) list_tport_double_graphic_pane_t

0x9719,	// (0x00055cc8) main_cale_note_pane

0x6993,	// (0x00052f42) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6993,	// (0x00052f42) cell_vitu2_function_top_wide_pane_cp01

0x81c0,	// (0x0005476f) wait_bar_pane_cp05_ParamLimits

0xa1fa,	// (0x000567a9) listscroll_cmail_pane

0xe890,	// (0x0005ae3f) list_cmail_pane

0x8910,	// (0x00054ebf) list_cmail_body_pane

0x8925,	// (0x00054ed4) list_single_cmail_header_caption_pane

0x893c,	// (0x00054eeb) list_single_cmail_header_detail_pane_ParamLimits

0x893c,	// (0x00054eeb) list_single_cmail_header_detail_pane

0xe8a0,	// (0x0005ae4f) list_single_cmail_header_caption_pane_t1

0x1064,	// (0x0004d613) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1064,	// (0x0004d613) list_single_cmail_header_detail_pane_g1

0x9f7d,	// (0x0005652c) list_single_cmail_header_detail_pane_g2_ParamLimits

0x9f7d,	// (0x0005652c) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda6,	// (0x0005c355) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda6,	// (0x0005c355) list_single_cmail_header_detail_pane_g

0x9f89,	// (0x00056538) list_single_cmail_header_detail_pane_t1_ParamLimits

0x9f89,	// (0x00056538) list_single_cmail_header_detail_pane_t1

0x9fe9,	// (0x00056598) list_single_cmail_header_editor_pane_bg_ParamLimits

0x9fe9,	// (0x00056598) list_single_cmail_header_editor_pane_bg

0xe372,	// (0x0005a921) list_cmail_body_pane_g1

0xe8c4,	// (0x0005ae73) list_cmail_body_pane_t1

0xd72a,	// (0x00059cd9) list_single_cmail_header_editor_pane_bg_g1

0xac8c,	// (0x0005723b) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd73a,	// (0x00059ce9) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd732,	// (0x00059ce1) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd978,	// (0x00059f27) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd75a,	// (0x00059d09) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd74a,	// (0x00059cf9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd752,	// (0x00059d01) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac6c,	// (0x0005721b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8966,	// (0x00054f15) calenote_gesture_pane_ParamLimits

0x8966,	// (0x00054f15) calenote_gesture_pane

0x8986,	// (0x00054f35) calenote_window_pane_ParamLimits

0x8986,	// (0x00054f35) calenote_window_pane

0xe8d2,	// (0x0005ae81) popup_note_window_cp01

0x89a2,	// (0x00054f51) calenote_swipe_1_pane_ParamLimits

0x89a2,	// (0x00054f51) calenote_swipe_1_pane

0x85c3,	// (0x00054b72) calenote_swipe_2_pane_ParamLimits

0x85c3,	// (0x00054b72) calenote_swipe_2_pane

0xe6df,	// (0x0005ac8e) calenote_swipe_1_pane_g1_ParamLimits

0xe6df,	// (0x0005ac8e) calenote_swipe_1_pane_g1

0xe6ec,	// (0x0005ac9b) calenote_swipe_1_pane_g2_ParamLimits

0xe6ec,	// (0x0005ac9b) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x0005c285) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x0005c285) calenote_swipe_1_pane_g

0xe8e4,	// (0x0005ae93) calenote_swipe_1_pane_t1_ParamLimits

0xe8e4,	// (0x0005ae93) calenote_swipe_1_pane_t1

0xe6df,	// (0x0005ac8e) calenote_swipe_2_pane_g1_ParamLimits

0xe6df,	// (0x0005ac8e) calenote_swipe_2_pane_g1

0xe903,	// (0x0005aeb2) calenote_swipe_2_pane_g2_ParamLimits

0xe903,	// (0x0005aeb2) calenote_swipe_2_pane_g2

0x0001,

0xfdb2,	// (0x0005c361) calenote_swipe_2_pane_g_ParamLimits

0xfdb2,	// (0x0005c361) calenote_swipe_2_pane_g

0xe90f,	// (0x0005aebe) calenote_swipe_2_pane_t1_ParamLimits

0xe90f,	// (0x0005aebe) calenote_swipe_2_pane_t1

0x9719,	// (0x00055cc8) main_mup_navstr_pane

0x5657,	// (0x00051c06) main_mup3_pane_t7_ParamLimits

0x5657,	// (0x00051c06) main_mup3_pane_t7

0x9be5,	// (0x00056194) main_mp4_pane_g6_ParamLimits

0x9be5,	// (0x00056194) main_mp4_pane_g6

0x9d89,	// (0x00056338) main_image3_pane_t4_ParamLimits

0x9d89,	// (0x00056338) main_image3_pane_t4

0x89b7,	// (0x00054f66) popup_navstr_preview_pane_ParamLimits

0x89b7,	// (0x00054f66) popup_navstr_preview_pane

0x89cb,	// (0x00054f7a) scroll_navstr_pane_ParamLimits

0x89cb,	// (0x00054f7a) scroll_navstr_pane

0x9719,	// (0x00055cc8) bg_popup_preview_window_pane_cp04

0xe936,	// (0x0005aee5) popup_navstr_preview_pane_t1

0x89df,	// (0x00054f8e) scroll_navstr_pane_g1_ParamLimits

0x89df,	// (0x00054f8e) scroll_navstr_pane_g1

0x89f3,	// (0x00054fa2) scroll_navstr_pane_t1_ParamLimits

0x89f3,	// (0x00054fa2) scroll_navstr_pane_t1

0xe8db,	// (0x0005ae8a) bg_button_pane_cp014

0xe8db,	// (0x0005ae8a) bg_button_pane_cp030

0x0ab1,	// (0x0004d060) list_double_fisheye_pane_g4_ParamLimits

0x0ab1,	// (0x0004d060) list_double_fisheye_pane_g4

0x0abd,	// (0x0004d06c) list_double_fisheye_pane_g5_ParamLimits

0x0abd,	// (0x0004d06c) list_double_fisheye_pane_g5

0xcd46,	// (0x000592f5) sp_fs_scroll_pane_cp03

0xe7d2,	// (0x0005ad81) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe7de,	// (0x0005ad8d) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x0005c2a2) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7ea,	// (0x0005ad99) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe898,	// (0x0005ae47) sp_fs_scroll_pane_cp02

0xa972,	// (0x00056f21) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa972,	// (0x00056f21) popup_sp_fs_calendar_preview_list_single_pane

0x9719,	// (0x00055cc8) main_cam6_pano_pane

0xa1fa,	// (0x000567a9) main_mup3_pane_ParamLimits

0x9719,	// (0x00055cc8) main_phacti_pane

0x8093,	// (0x00054642) bg_button_pane_cp11

0x80ad,	// (0x0005465c) main_mobtv_info_pane_g2_ParamLimits

0x80ad,	// (0x0005465c) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x0005c202) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x0005c202) main_mobtv_info_pane_g

0x828a,	// (0x00054839) sc_clock_pane_t5_ParamLimits

0x828a,	// (0x00054839) sc_clock_pane_t5

0x8352,	// (0x00054901) main_radioblah_pane_g1_ParamLimits

0xe610,	// (0x0005abbf) main_radioblah_pane_t3_ParamLimits

0xe610,	// (0x0005abbf) main_radioblah_pane_t3

0xe628,	// (0x0005abd7) main_radioblah_pane_t4_ParamLimits

0xe628,	// (0x0005abd7) main_radioblah_pane_t4

0x837a,	// (0x00054929) main_radioblah_text_pane_ParamLimits

0x837a,	// (0x00054929) main_radioblah_text_pane

0x838c,	// (0x0005493b) main_radioblah_info_pane_g1_ParamLimits

0x8425,	// (0x000549d4) main_radioblah_info_pane_t4_ParamLimits

0x8425,	// (0x000549d4) main_radioblah_info_pane_t4

0xa1fa,	// (0x000567a9) main_sp_fs_calendar_pane

0x8a0a,	// (0x00054fb9) main_phacti_pane_g1

0x8a12,	// (0x00054fc1) phacti_note_pane_ParamLimits

0x8a12,	// (0x00054fc1) phacti_note_pane

0xe94d,	// (0x0005aefc) phacti_term_pane_ParamLimits

0xe94d,	// (0x0005aefc) phacti_term_pane

0xe962,	// (0x0005af11) phacti_note_pane_t1_ParamLimits

0xe962,	// (0x0005af11) phacti_note_pane_t1

0xa000,	// (0x000565af) phacti_term_pane_g1

0xa008,	// (0x000565b7) phacti_term_pane_t1_ParamLimits

0xa008,	// (0x000565b7) phacti_term_pane_t1

0xe979,	// (0x0005af28) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe981,	// (0x0005af30) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x0231,	// (0x0004c7e0) popup_sp_fs_calendar_preview_list_single_pane_g

0xe989,	// (0x0005af38) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe989,	// (0x0005af38) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe99f,	// (0x0005af4e) aid_popup_sp_fs_bg_corner_pane

0xccd5,	// (0x00059284) popup_sp_fs_calendar_preview_bg_pane_g1

0x9719,	// (0x00055cc8) popup_sp_fs_calendar_preview_bg_pane

0x210f,	// (0x0004e6be) popup_sp_fs_calendar_preview_list_pane

0xc8cd,	// (0x00058e7c) bg_main_sp_fs_cale_pane_ParamLimits

0xc8cd,	// (0x00058e7c) bg_main_sp_fs_cale_pane

0xa03b,	// (0x000565ea) listscroll_cale_mrui_pane_ParamLimits

0xa03b,	// (0x000565ea) listscroll_cale_mrui_pane

0xa050,	// (0x000565ff) listscroll_sp_fs_schedule_track_pane

0xa059,	// (0x00056608) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa059,	// (0x00056608) main_sp_fs_ctrlbar_pane_cp01

0xe9a7,	// (0x0005af56) main_sp_fs_ribbon_pane

0xa06c,	// (0x0005661b) popup_sp_fs_cale_preview_window

0x8a87,	// (0x00055036) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8a87,	// (0x00055036) list_single_sp_fs_schedule_track_pane

0xa1fa,	// (0x000567a9) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa1fa,	// (0x000567a9) bg_sp_fs_highlight_list_pane_cp03

0x8a9b,	// (0x0005504a) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8a9b,	// (0x0005504a) list_single_sp_fs_schedule_track_pane_g1

0x8aa7,	// (0x00055056) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8aa7,	// (0x00055056) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdbc,	// (0x0005c36b) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdbc,	// (0x0005c36b) list_single_sp_fs_schedule_track_pane_g

0x8ab3,	// (0x00055062) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8ab3,	// (0x00055062) list_single_sp_fs_schedule_track_pane_t1

0x8acd,	// (0x0005507c) sp_fs_schedule_track_pane_ParamLimits

0x8acd,	// (0x0005507c) sp_fs_schedule_track_pane

0xe9af,	// (0x0005af5e) sp_fs_schedule_track_pane_g1

0xe9b7,	// (0x0005af66) sp_fs_schedule_track_pane_g2

0xe9bf,	// (0x0005af6e) sp_fs_schedule_track_pane_g3

0xe9c7,	// (0x0005af76) sp_fs_schedule_track_pane_g4

0xe9cf,	// (0x0005af7e) sp_fs_schedule_track_pane_g5

0x0004,

0x023b,	// (0x0004c7ea) sp_fs_schedule_track_pane_g

0xd72a,	// (0x00059cd9) bg_sp_fs_schedule_viewer_highlight_g1

0xac8c,	// (0x0005723b) bg_sp_fs_schedule_viewer_highlight_g2

0xd732,	// (0x00059ce1) bg_sp_fs_schedule_viewer_highlight_g3

0xd73a,	// (0x00059ce9) bg_sp_fs_schedule_viewer_highlight_g4

0xd978,	// (0x00059f27) bg_sp_fs_schedule_viewer_highlight_g5

0xd74a,	// (0x00059cf9) bg_sp_fs_schedule_viewer_highlight_g6

0xd752,	// (0x00059d01) bg_sp_fs_schedule_viewer_highlight_g7

0xd75a,	// (0x00059d09) bg_sp_fs_schedule_viewer_highlight_g8

0xac6c,	// (0x0005721b) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc1,	// (0x0005c370) bg_sp_fs_schedule_viewer_highlight_g

0x9719,	// (0x00055cc8) bg_main_sp_fs_ribbon_pane

0x8ade,	// (0x0005508d) main_sp_fs_ribbon_pane_g1

0xe9d7,	// (0x0005af86) main_sp_fs_ribbon_pane_t1

0x8ae7,	// (0x00055096) main_sp_fs_ribbon_pane_t2

0xe9e6,	// (0x0005af95) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd4,	// (0x0005c383) main_sp_fs_ribbon_pane_t

0xe9f5,	// (0x0005afa4) main_sp_fs_ribbon_scheduler_pane

0xe9fd,	// (0x0005afac) bg_main_sp_fs_ribbon_pane_g1

0xea06,	// (0x0005afb5) bg_main_sp_fs_ribbon_pane_g2

0xea0f,	// (0x0005afbe) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0260,	// (0x0004c80f) bg_main_sp_fs_ribbon_pane_g

0xea17,	// (0x0005afc6) main_sp_fs_ribbon_scheduler_pane_g1

0xea20,	// (0x0005afcf) main_sp_fs_ribbon_scheduler_pane_g2

0xea29,	// (0x0005afd8) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0267,	// (0x0004c816) main_sp_fs_ribbon_scheduler_pane_g

0xea32,	// (0x0005afe1) list_cale_mrui_pane

0x8af6,	// (0x000550a5) sp_fs_scroll_pane_cp07_ParamLimits

0x8af6,	// (0x000550a5) sp_fs_scroll_pane_cp07

0x8b12,	// (0x000550c1) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8b12,	// (0x000550c1) bg_sp_fs_schedule_viewer_highlight

0xea3f,	// (0x0005afee) list_single_sp_fs_schedule_track_pane_cp01

0xea47,	// (0x0005aff6) list_sp_fs_schedule_track_pane

0xea4f,	// (0x0005affe) sp_fs_scroll_pane_cp06_ParamLimits

0xea4f,	// (0x0005affe) sp_fs_scroll_pane_cp06

0xccd5,	// (0x00059284) bgmain_sp_fs_calendar_pane_g1

0x107c,	// (0x0004d62b) list_single_cale_mrui_pane_ParamLimits

0x107c,	// (0x0004d62b) list_single_cale_mrui_pane

0xa07e,	// (0x0005662d) list_single_cale_mrui_row_pane_ParamLimits

0xa07e,	// (0x0005662d) list_single_cale_mrui_row_pane

0xa08b,	// (0x0005663a) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa08b,	// (0x0005663a) list_single_cale_mrui_row_pane_g1

0xa0c3,	// (0x00056672) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa0c3,	// (0x00056672) list_single_cale_mrui_row_pane_t1

0x109e,	// (0x0004d64d) list_single_cale_mrui_row_pane_t2_ParamLimits

0x109e,	// (0x0004d64d) list_single_cale_mrui_row_pane_t2

0xa0d5,	// (0x00056684) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa0d5,	// (0x00056684) list_single_cale_mrui_row_pane_t3

0xa104,	// (0x000566b3) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa104,	// (0x000566b3) list_single_cale_mrui_row_pane_t4

0x0003,

0xfde2,	// (0x0005c391) list_single_cale_mrui_row_pane_t_ParamLimits

0xfde2,	// (0x0005c391) list_single_cale_mrui_row_pane_t

0x1106,	// (0x0004d6b5) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1106,	// (0x0004d6b5) list_single_cmail_header_editor_pane_bg_cp01

0x112c,	// (0x0004d6db) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x112c,	// (0x0004d6db) list_single_cmail_header_editor_pane_bg_cp02

0x8b22,	// (0x000550d1) main_radioblah_text_pane_t1_ParamLimits

0x8b22,	// (0x000550d1) main_radioblah_text_pane_t1

0xea6e,	// (0x0005b01d) cam6_indi_pane_cp01

0xea76,	// (0x0005b025) cam6_mode_pane_cp01

0xea7e,	// (0x0005b02d) cam6_pano_pane

0xea87,	// (0x0005b036) cam6_zoom_pane_cp01

0xea8f,	// (0x0005b03e) cam6_pano_image_pane

0xea9a,	// (0x0005b049) cam6_pano_pane_g1

0xe372,	// (0x0005a921) cam6_pano_pane_g2

0xeaa3,	// (0x0005b052) cam6_pano_pane_g3

0xeaac,	// (0x0005b05b) cam6_pano_pane_g4

0xd28c,	// (0x0005983b) cam6_pano_pane_g5

0xeab5,	// (0x0005b064) cam6_pano_pane_g6

0xeabf,	// (0x0005b06e) cam6_pano_pane_g7

0xeac7,	// (0x0005b076) cam6_pano_pane_g8

0xead0,	// (0x0005b07f) cam6_pano_pane_g9

0x0008,

0xfdeb,	// (0x0005c39a) cam6_pano_pane_g

0x9719,	// (0x00055cc8) main_browser_tag_pane

0xe92e,	// (0x0005aedd) grid_navstr_albumart_pane

0xeadb,	// (0x0005b08a) cell_navstr_albumart_pane_ParamLimits

0xeadb,	// (0x0005b08a) cell_navstr_albumart_pane

0xeafb,	// (0x0005b0aa) cell_navstr_albumart_pane_g1

0xc69e,	// (0x00058c4d) cell_navstr_albumart_pane_g2

0xc6ae,	// (0x00058c5d) cell_navstr_albumart_pane_g3

0xc6a6,	// (0x00058c55) cell_navstr_albumart_pane_g4

0x0003,

0x0291,	// (0x0004c840) cell_navstr_albumart_pane_g

0x8b3d,	// (0x000550ec) bt_list_pane_ParamLimits

0x8b3d,	// (0x000550ec) bt_list_pane

0x8b51,	// (0x00055100) bt_list_pane_t1

0x8b60,	// (0x0005510f) bt_list_pane_t2

0x0001,

0xfdfe,	// (0x0005c3ad) bt_list_pane_t

0x9719,	// (0x00055cc8) main_cale_prevew_pane

0x8b6f,	// (0x0005511e) popup_cale_preview_window_ParamLimits

0x8b6f,	// (0x0005511e) popup_cale_preview_window

0xa1fa,	// (0x000567a9) bg_popup_preview_window_pane_cp05_ParamLimits

0xa1fa,	// (0x000567a9) bg_popup_preview_window_pane_cp05

0xeb03,	// (0x0005b0b2) list_cale_preview_pane_ParamLimits

0xeb03,	// (0x0005b0b2) list_cale_preview_pane

0x8b88,	// (0x00055137) list_double_cale_preview_pane_ParamLimits

0x8b88,	// (0x00055137) list_double_cale_preview_pane

0xd762,	// (0x00059d11) list_single_cale_preview_pane_ParamLimits

0xd762,	// (0x00059d11) list_single_cale_preview_pane

0x8b9a,	// (0x00055149) list_single_cale_preview_pane_g1

0x8ba2,	// (0x00055151) list_single_cale_preview_pane_t1_ParamLimits

0x8ba2,	// (0x00055151) list_single_cale_preview_pane_t1

0x8bb7,	// (0x00055166) list_double_cale_preview_pane_g1

0x8bbf,	// (0x0005516e) list_double_cale_preview_pane_t1_ParamLimits

0x8bbf,	// (0x0005516e) list_double_cale_preview_pane_t1

0x8bd4,	// (0x00055183) list_double_cale_preview_pane_t2_ParamLimits

0x8bd4,	// (0x00055183) list_double_cale_preview_pane_t2

0x0001,

0xfe03,	// (0x0005c3b2) list_double_cale_preview_pane_t_ParamLimits

0xfe03,	// (0x0005c3b2) list_double_cale_preview_pane_t

0x9719,	// (0x00055cc8) main_ezdial_pane

0xa1fa,	// (0x000567a9) main_sp_fs_email_pane_ParamLimits

0x861f,	// (0x00054bce) cmail_ddmenu_btn01_pane_ParamLimits

0x861f,	// (0x00054bce) cmail_ddmenu_btn01_pane

0x8632,	// (0x00054be1) cmail_ddmenu_btn02_pane_ParamLimits

0x8632,	// (0x00054be1) cmail_ddmenu_btn02_pane

0x8655,	// (0x00054c04) cmail_ddmenu_btn03_pane_ParamLimits

0x8655,	// (0x00054c04) cmail_ddmenu_btn03_pane

0x867b,	// (0x00054c2a) main_sp_fs_ctrlbar_pane_ParamLimits

0x869f,	// (0x00054c4e) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8910,	// (0x00054ebf) list_cmail_body_pane_ParamLimits

0xe8ae,	// (0x0005ae5d) bg_button_pane_cp12

0xe8b7,	// (0x0005ae66) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe8b7,	// (0x0005ae66) list_single_cmail_header_detail_pane_g3

0x9fc5,	// (0x00056574) list_single_cmail_header_detail_pane_t2_ParamLimits

0x9fc5,	// (0x00056574) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdad,	// (0x0005c35c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdad,	// (0x0005c35c) list_single_cmail_header_detail_pane_t

0xa01d,	// (0x000565cc) phacti_term_pane_t2_ParamLimits

0xa01d,	// (0x000565cc) phacti_term_pane_t2

0x0001,

0xfdb7,	// (0x0005c366) phacti_term_pane_t_ParamLimits

0xfdb7,	// (0x0005c366) phacti_term_pane_t

0xeb0f,	// (0x0005b0be) aid_size_list_single_double

0x8bec,	// (0x0005519b) popup_ezdial_listscroll_window

0x8c08,	// (0x000551b7) popup_number_entry_window_cp01

0xaa33,	// (0x00056fe2) bg_popup_call_pane_cp09

0xeb1b,	// (0x0005b0ca) ezdial_list_pane

0xeb23,	// (0x0005b0d2) scroll_pane_cp23

0xc8cd,	// (0x00058e7c) bg_button_pane_cp028_ParamLimits

0xc8cd,	// (0x00058e7c) bg_button_pane_cp028

0x8c16,	// (0x000551c5) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8c16,	// (0x000551c5) cmail_ddmenu_btn01_pane_g1

0x8c22,	// (0x000551d1) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8c22,	// (0x000551d1) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe08,	// (0x0005c3b7) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe08,	// (0x0005c3b7) cmail_ddmenu_btn01_pane_g

0xeb2b,	// (0x0005b0da) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb2b,	// (0x0005b0da) cmail_ddmenu_btn01_pane_t1

0xc8cd,	// (0x00058e7c) bg_button_pane_cp029_ParamLimits

0xc8cd,	// (0x00058e7c) bg_button_pane_cp029

0x8c2e,	// (0x000551dd) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8c2e,	// (0x000551dd) cmail_ddmenu_btn02_pane_g1

0x8c47,	// (0x000551f6) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8c47,	// (0x000551f6) cmail_ddmenu_btn02_pane_t1

0xa1fa,	// (0x000567a9) bg_button_pane_cp031_ParamLimits

0xa1fa,	// (0x000567a9) bg_button_pane_cp031

0x8c2e,	// (0x000551dd) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8c2e,	// (0x000551dd) cmail_ddmenu_btn03_pane_g1

0x8c47,	// (0x000551f6) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8c47,	// (0x000551f6) cmail_ddmenu_btn03_pane_t1

0x6208,	// (0x000527b7) cell_dialer2_keypad_pane_t1_ParamLimits

0x6222,	// (0x000527d1) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6222,	// (0x000527d1) cell_dialer2_keypad_pane_t1_copy1

0x7eb6,	// (0x00054465) ncimui_group_button_pane

0xa1fa,	// (0x000567a9) main_sp_fs_calendar_pane_ParamLimits

0x8925,	// (0x00054ed4) list_single_cmail_header_caption_pane_ParamLimits

0xa032,	// (0x000565e1) aid_recal_txt_sm_pane

0x9719,	// (0x00055cc8) mian_recal_day_pane

0xa06c,	// (0x0005661b) popup_sp_fs_cale_preview_window_ParamLimits

0xeb40,	// (0x0005b0ef) list_recal_day_pane

0xa14e,	// (0x000566fd) list_single_recal_day_pane_ParamLimits

0xa14e,	// (0x000566fd) list_single_recal_day_pane

0xeb67,	// (0x0005b116) list_single_recal_day_pane_g1_ParamLimits

0xeb67,	// (0x0005b116) list_single_recal_day_pane_g1

0xa160,	// (0x0005670f) list_single_recal_day_pane_g2_ParamLimits

0xa160,	// (0x0005670f) list_single_recal_day_pane_g2

0xa16c,	// (0x0005671b) list_single_recal_day_pane_g3_ParamLimits

0xa16c,	// (0x0005671b) list_single_recal_day_pane_g3

0x114c,	// (0x0004d6fb) list_single_recal_day_pane_g4_ParamLimits

0x114c,	// (0x0004d6fb) list_single_recal_day_pane_g4

0xa178,	// (0x00056727) list_single_recal_day_pane_g5_ParamLimits

0xa178,	// (0x00056727) list_single_recal_day_pane_g5

0xa184,	// (0x00056733) list_single_recal_day_pane_g6_ParamLimits

0xa184,	// (0x00056733) list_single_recal_day_pane_g6

0x0004,

0xfe17,	// (0x0005c3c6) list_single_recal_day_pane_g_ParamLimits

0xfe17,	// (0x0005c3c6) list_single_recal_day_pane_g

0xa198,	// (0x00056747) list_single_recal_day_pane_t1

0xa1aa,	// (0x00056759) list_single_recal_day_pane_t2

0x0001,

0xfe22,	// (0x0005c3d1) list_single_recal_day_pane_t

0x8c6b,	// (0x0005521a) ncimui_query_button_pane_ParamLimits

0x8c6b,	// (0x0005521a) ncimui_query_button_pane

0x8c7b,	// (0x0005522a) ncimui_query_button_pane_t1_ParamLimits

0x8c7b,	// (0x0005522a) ncimui_query_button_pane_t1

0xeb73,	// (0x0005b122) ncimui_query_button_pane_t2_ParamLimits

0xeb73,	// (0x0005b122) ncimui_query_button_pane_t2

0x0001,

0xfe27,	// (0x0005c3d6) ncimui_query_button_pane_t_ParamLimits

0xfe27,	// (0x0005c3d6) ncimui_query_button_pane_t

0x8c8e,	// (0x0005523d) query_button_pane_ParamLimits

0x8c8e,	// (0x0005523d) query_button_pane

0x9719,	// (0x00055cc8) bg_button_pane_cp0028

0xeb86,	// (0x0005b135) query_button_pane_t1

0x424c,	// (0x000507fb) main_tport_pane_ParamLimits

0x87d4,	// (0x00054d83) bg_popup_window_pane_cp01_ParamLimits

0x87d4,	// (0x00054d83) bg_popup_window_pane_cp01

0x87ef,	// (0x00054d9e) heading_pane_cp08_ParamLimits

0x87ef,	// (0x00054d9e) heading_pane_cp08

0x8802,	// (0x00054db1) heading_pane_cp07_ParamLimits

0x8802,	// (0x00054db1) heading_pane_cp07

0x88a9,	// (0x00054e58) cell_tport_appsw_pane_g2

0x0002,

0xfd9a,	// (0x0005c349) cell_tport_appsw_pane_g

0x382a,	// (0x0004fdd9) input_candi_list_open_g1

0xae5d,	// (0x0005740c) list_cale_time_pane_g6_ParamLimits

0xae5d,	// (0x0005740c) list_cale_time_pane_g6

0x5014,	// (0x000515c3) aid_size_touch_calib_1_ParamLimits

0x5014,	// (0x000515c3) aid_size_touch_calib_1

0x5026,	// (0x000515d5) aid_size_touch_calib_2_ParamLimits

0x5026,	// (0x000515d5) aid_size_touch_calib_2

0x503e,	// (0x000515ed) aid_size_touch_calib_3_ParamLimits

0x503e,	// (0x000515ed) aid_size_touch_calib_3

0x505c,	// (0x0005160b) aid_size_touch_calib_4_ParamLimits

0x505c,	// (0x0005160b) aid_size_touch_calib_4

0x5074,	// (0x00051623) main_touch_calib_button_group_pane_ParamLimits

0x5074,	// (0x00051623) main_touch_calib_button_group_pane

0x508c,	// (0x0005163b) main_touch_calib_pane_g1_ParamLimits

0x509e,	// (0x0005164d) main_touch_calib_pane_g2_ParamLimits

0x50b0,	// (0x0005165f) main_touch_calib_pane_g3_ParamLimits

0x50c2,	// (0x00051671) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x0005bd13) main_touch_calib_pane_g_ParamLimits

0x50d4,	// (0x00051683) main_touch_calib_pane_t1_ParamLimits

0x50ee,	// (0x0005169d) main_touch_calib_pane_t2_ParamLimits

0x5108,	// (0x000516b7) main_touch_calib_pane_t3_ParamLimits

0x511c,	// (0x000516cb) main_touch_calib_pane_t4_ParamLimits

0x5130,	// (0x000516df) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x0005bd1c) main_touch_calib_pane_t_ParamLimits

0xd02f,	// (0x000595de) list_single_fp_cale_pane_g3_ParamLimits

0xd02f,	// (0x000595de) list_single_fp_cale_pane_g3

0xa1fa,	// (0x000567a9) bg_button_pane_cp012_ParamLimits

0xa1fa,	// (0x000567a9) bg_vkb2_func_pane_cp03_ParamLimits

0x7149,	// (0x000536f8) cell_vitu2_function_top_pane_g1_ParamLimits

0xa1fa,	// (0x000567a9) bg_vkb2_func_pane_cp04_ParamLimits

0x7e41,	// (0x000543f0) main_ncimui_button_group_pane_ParamLimits

0x7e41,	// (0x000543f0) main_ncimui_button_group_pane

0x7ea1,	// (0x00054450) main_ncimui_pane_t3_ParamLimits

0x7ea1,	// (0x00054450) main_ncimui_pane_t3

0xe944,	// (0x0005aef3) phacti_button_group_pane

0xeb0f,	// (0x0005b0be) aid_size_list_single_double_ParamLimits

0x8bec,	// (0x0005519b) popup_ezdial_listscroll_window_ParamLimits

0x8c08,	// (0x000551b7) popup_number_entry_window_cp01_ParamLimits

0x8ca1,	// (0x00055250) phacti_button_pane_ParamLimits

0x8ca1,	// (0x00055250) phacti_button_pane

0x9719,	// (0x00055cc8) bg_button_pane_cp14

0xeb94,	// (0x0005b143) phacti_button_pane_t1

0x8cb2,	// (0x00055261) main_touch_calib_button_pane_ParamLimits

0x8cb2,	// (0x00055261) main_touch_calib_button_pane

0xa83e,	// (0x00056ded) bg_button_pane_cp18_ParamLimits

0xa83e,	// (0x00056ded) bg_button_pane_cp18

0xeba2,	// (0x0005b151) main_touch_calib_button_pane_t1_ParamLimits

0xeba2,	// (0x0005b151) main_touch_calib_button_pane_t1

0xebb8,	// (0x0005b167) main_touch_calib_button_pane_t2_ParamLimits

0xebb8,	// (0x0005b167) main_touch_calib_button_pane_t2

0x0001,

0x02c8,	// (0x0004c877) main_touch_calib_button_pane_t_ParamLimits

0x02c8,	// (0x0004c877) main_touch_calib_button_pane_t

0x9719,	// (0x00055cc8) cell_ncimui_button_pane

0x9719,	// (0x00055cc8) bg_button_pane_cp032

0xebd6,	// (0x0005b185) cell_ncimui_button_pane_t1

0x9d69,	// (0x00056318) image3_infobar_pane_ParamLimits

0x9d69,	// (0x00056318) image3_infobar_pane

0x82b6,	// (0x00054865) fs_bigclock_status_pane_ParamLimits

0x82b6,	// (0x00054865) fs_bigclock_status_pane

0x82c3,	// (0x00054872) main_fs_bigclock_clock_pane_ParamLimits

0x82c3,	// (0x00054872) main_fs_bigclock_clock_pane

0x82e1,	// (0x00054890) main_fs_bigclock_indi_pane_ParamLimits

0x82e1,	// (0x00054890) main_fs_bigclock_indi_pane

0x8313,	// (0x000548c2) main_fs_bigclock_swipe_pane_ParamLimits

0x8313,	// (0x000548c2) main_fs_bigclock_swipe_pane

0x9719,	// (0x00055cc8) main_fs_clock_dumped_data

0xe47f,	// (0x0005aa2e) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe47f,	// (0x0005aa2e) list_single_fs_bigclock_indicator_pane_g1

0xe49b,	// (0x0005aa4a) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe49b,	// (0x0005aa4a) list_single_fs_bigclock_indicator_pane_g2

0xe4b5,	// (0x0005aa64) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe4b5,	// (0x0005aa64) list_single_fs_bigclock_indicator_pane_g3

0xe4cf,	// (0x0005aa7e) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe4cf,	// (0x0005aa7e) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x0005c236) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x0005c236) list_single_fs_bigclock_indicator_pane_g

0xe4fa,	// (0x0005aaa9) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4fa,	// (0x0005aaa9) list_single_fs_bigclock_indicator_pane_t1

0xe522,	// (0x0005aad1) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe522,	// (0x0005aad1) list_single_fs_bigclock_indicator_pane_t2

0xe54a,	// (0x0005aaf9) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe54a,	// (0x0005aaf9) list_single_fs_bigclock_indicator_pane_t3

0xe572,	// (0x0005ab21) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe572,	// (0x0005ab21) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x0005c241) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x0005c241) list_single_fs_bigclock_indicator_pane_t

0xebe4,	// (0x0005b193) image3_infobar_fav_pane_ParamLimits

0xebe4,	// (0x0005b193) image3_infobar_fav_pane

0xebf4,	// (0x0005b1a3) image3_infobar_loc_pane_ParamLimits

0xebf4,	// (0x0005b1a3) image3_infobar_loc_pane

0xec08,	// (0x0005b1b7) image3_infobar_time_pane_ParamLimits

0xec08,	// (0x0005b1b7) image3_infobar_time_pane

0xccd5,	// (0x00059284) image3_infobar_time_pane_g1

0xec18,	// (0x0005b1c7) image3_infobar_time_pane_t1

0xccd5,	// (0x00059284) image3_infobar_loc_pane_g1

0xec26,	// (0x0005b1d5) image3_infobar_loc_pane_g2

0x0001,

0x02cd,	// (0x0004c87c) image3_infobar_loc_pane_g

0xec2e,	// (0x0005b1dd) image3_infobar_loc_pane_t1

0xccd5,	// (0x00059284) image3_infobar_fav_pane_g1

0xec3c,	// (0x0005b1eb) image3_infobar_fav_pane_g2

0x0001,

0x02d2,	// (0x0004c881) image3_infobar_fav_pane_g

0xec44,	// (0x0005b1f3) fs_bigclock_status_battery_pane

0xec4d,	// (0x0005b1fc) fs_bigclock_status_signal_pane

0xec56,	// (0x0005b205) fs_bigclock_status_title_pane

0xec5f,	// (0x0005b20e) fs_bigclock_status_signal_pane_g1

0xec68,	// (0x0005b217) fs_bigclock_status_signal_pane_g2

0x0001,

0x02d7,	// (0x0004c886) fs_bigclock_status_signal_pane_g

0xec70,	// (0x0005b21f) fs_bigclock_status_battery_pane_g1

0xec79,	// (0x0005b228) fs_bigclock_status_battery_pane_g2

0x0001,

0x02dc,	// (0x0004c88b) fs_bigclock_status_battery_pane_g

0xec81,	// (0x0005b230) fs_bigclock_status_title_pane_t1

0x8cc7,	// (0x00055276) main_fs_bigclock_clock_pane_g1

0x8cc7,	// (0x00055276) main_fs_bigclock_clock_pane_g2

0x8cd8,	// (0x00055287) main_fs_bigclock_clock_pane_g3

0x8cd8,	// (0x00055287) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe2c,	// (0x0005c3db) main_fs_bigclock_clock_pane_g

0x8ceb,	// (0x0005529a) main_fs_bigclock_clock_pane_t1

0x8d01,	// (0x000552b0) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe35,	// (0x0005c3e4) main_fs_bigclock_clock_pane_t

0xec8f,	// (0x0005b23e) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec8f,	// (0x0005b23e) list_single_fs_bigclock_indicator_pane

0xeca0,	// (0x0005b24f) list_single_fs_bigclock_pane_ParamLimits

0xeca0,	// (0x0005b24f) list_single_fs_bigclock_pane

0xecc6,	// (0x0005b275) main_fs_bigclock_indicator_pane_t1

0xecd5,	// (0x0005b284) list_single_fs_bigclock_pane_g1

0xecdd,	// (0x0005b28c) list_single_fs_bigclock_pane_t1

0xccd5,	// (0x00059284) main_fs_bigclock_swipe_pane_g1

0xed20,	// (0x0005b2cf) main_fs_bigclock_swipe_pane_g2

0x0001,

0x02fb,	// (0x0004c8aa) main_fs_bigclock_swipe_pane_g

0xed28,	// (0x0005b2d7) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed28,	// (0x0005b2d7) main_fs_bigclock_swipe_pane_t1

0x3131,	// (0x0004f6e0) call_type_pane_ParamLimits

0x9719,	// (0x00055cc8) main_btmg_pane

0xa0b7,	// (0x00056666) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa0b7,	// (0x00056666) list_single_cale_mrui_row_pane_g2

0x0002,

0xfddb,	// (0x0005c38a) list_single_cale_mrui_row_pane_g_ParamLimits

0xfddb,	// (0x0005c38a) list_single_cale_mrui_row_pane_g

0xa13d,	// (0x000566ec) list_recal_vselct_arw_lo_pane

0xeb5f,	// (0x0005b10e) list_recal_vselct_arw_up_pane

0xa145,	// (0x000566f4) list_recal_vselct_pane

0x8d5b,	// (0x0005530a) btmg_button_pane

0x8d65,	// (0x00055314) main_btmg_pane_g1

0x9719,	// (0x00055cc8) bg_button_pane_cp044

0xed45,	// (0x0005b2f4) btmg_button_pane_t1

0xc8b9,	// (0x00058e68) aid_listscroll_gen

0xa1fa,	// (0x000567a9) main_cntbar_detail_pane

0xe890,	// (0x0005ae3f) list_cmail_folder_pane

0xcd46,	// (0x000592f5) sp_fs_scroll_pane_cp03_ParamLimits

0x1164,	// (0x0004d713) list_single_fs_dyc_pane_cp01_ParamLimits

0x1164,	// (0x0004d713) list_single_fs_dyc_pane_cp01

0xed53,	// (0x0005b302) aid_size_cmail_indent

0xa1bc,	// (0x0005676b) list_single_dyc_row_pane_cp01

0x8da1,	// (0x00055350) cntbar_detail_list_pane_ParamLimits

0x8da1,	// (0x00055350) cntbar_detail_list_pane

0x8ded,	// (0x0005539c) main_cntbar_detail_cont_pane_ParamLimits

0x8ded,	// (0x0005539c) main_cntbar_detail_cont_pane

0xcd46,	// (0x000592f5) scroll_pane_cp032_ParamLimits

0xcd46,	// (0x000592f5) scroll_pane_cp032

0x8e01,	// (0x000553b0) cntbar_detail_list_event_pane_ParamLimits

0x8e01,	// (0x000553b0) cntbar_detail_list_event_pane

0x8db1,	// (0x00055360) cntbar_detail_list_shct_pane

0xace8,	// (0x00057297) aid_list_gen

0xed5c,	// (0x0005b30b) aid_scroll

0xed65,	// (0x0005b314) aid_size_touch_scroll_bar

0x7726,	// (0x00053cd5) aid_list_double

0xa1c5,	// (0x00056774) aid_list_single

0x7726,	// (0x00053cd5) aid_list_single_lg

0xa1ce,	// (0x0005677d) aid_list_z_g_a_sm

0xa1d6,	// (0x00056785) aid_list_z_g_d

0xa1de,	// (0x0005678d) aid_txt_z_prm

0x117b,	// (0x0004d72a) aid_txt_z_prm_cp01

0x1189,	// (0x0004d738) aid_txt_z_sec

0x8e11,	// (0x000553c0) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8e11,	// (0x000553c0) main_cntbar_detail_cont_pane_g1

0x8e25,	// (0x000553d4) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8e25,	// (0x000553d4) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe41,	// (0x0005c3f0) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe41,	// (0x0005c3f0) main_cntbar_detail_cont_pane_g

0xed6e,	// (0x0005b31d) main_cntbar_detail_cont_pane_t1

0xed7c,	// (0x0005b32b) main_cntbar_detail_cont_pane_t2

0xed8a,	// (0x0005b339) main_cntbar_detail_cont_pane_t3

0x0002,

0x0305,	// (0x0004c8b4) main_cntbar_detail_cont_pane_t

0x8e35,	// (0x000553e4) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8e35,	// (0x000553e4) cell_cntbar_detail_list_shct_pane

0xed98,	// (0x0005b347) cntbar_detail_list_shct_pane_g1

0xeda1,	// (0x0005b350) cntbar_detail_list_shct_pane_g2

0x0001,

0x030c,	// (0x0004c8bb) cntbar_detail_list_shct_pane_g

0x8e49,	// (0x000553f8) cntbar_detail_list_event_pane_g1_ParamLimits

0x8e49,	// (0x000553f8) cntbar_detail_list_event_pane_g1

0x8e55,	// (0x00055404) cntbar_detail_list_event_pane_g2_ParamLimits

0x8e55,	// (0x00055404) cntbar_detail_list_event_pane_g2

0x0005,

0xfe46,	// (0x0005c3f5) cntbar_detail_list_event_pane_g_ParamLimits

0xfe46,	// (0x0005c3f5) cntbar_detail_list_event_pane_g

0x8ec1,	// (0x00055470) cntbar_detail_list_event_pane_t1_ParamLimits

0x8ec1,	// (0x00055470) cntbar_detail_list_event_pane_t1

0x8ed6,	// (0x00055485) cntbar_detail_list_event_pane_t2_ParamLimits

0x8ed6,	// (0x00055485) cntbar_detail_list_event_pane_t2

0x0002,

0xfe53,	// (0x0005c402) cntbar_detail_list_event_pane_t_ParamLimits

0xfe53,	// (0x0005c402) cntbar_detail_list_event_pane_t

0xccd5,	// (0x00059284) cell_cntbar_detail_list_shct_pane_g1

0xb434,	// (0x000579e3) navi_pane_mv_g3

0xa1fa,	// (0x000567a9) main_cntbar_detail_pane_ParamLimits

0x9719,	// (0x00055cc8) main_notif_wgt_pane

0x9b7f,	// (0x0005612e) aid_tch_main_mp4_pane_g4

0x9d61,	// (0x00056310) popup_slider_window_cp02

0xa133,	// (0x000566e2) list_recal_day_event_pane

0x8d6f,	// (0x0005531e) cntbar_detail_btn_pane_ParamLimits

0x8d6f,	// (0x0005531e) cntbar_detail_btn_pane

0x8d88,	// (0x00055337) cntbar_detail_btn_pane_cp01_ParamLimits

0x8d88,	// (0x00055337) cntbar_detail_btn_pane_cp01

0x8db1,	// (0x00055360) cntbar_detail_list_shct_pane_ParamLimits

0x8dc1,	// (0x00055370) cntbar_detail_pane_g1_ParamLimits

0x8dc1,	// (0x00055370) cntbar_detail_pane_g1

0x8dd1,	// (0x00055380) cntbar_detail_pane_t1_ParamLimits

0x8dd1,	// (0x00055380) cntbar_detail_pane_t1

0x8e61,	// (0x00055410) cntbar_detail_list_event_pane_g3_ParamLimits

0x8e61,	// (0x00055410) cntbar_detail_list_event_pane_g3

0x8e79,	// (0x00055428) cntbar_detail_list_event_pane_g4_ParamLimits

0x8e79,	// (0x00055428) cntbar_detail_list_event_pane_g4

0x8e91,	// (0x00055440) cntbar_detail_list_event_pane_g5_ParamLimits

0x8e91,	// (0x00055440) cntbar_detail_list_event_pane_g5

0x8ea9,	// (0x00055458) cntbar_detail_list_event_pane_g6_ParamLimits

0x8ea9,	// (0x00055458) cntbar_detail_list_event_pane_g6

0x8eeb,	// (0x0005549a) cntbar_detail_list_event_pane_t3_ParamLimits

0x8eeb,	// (0x0005549a) cntbar_detail_list_event_pane_t3

0x8efd,	// (0x000554ac) popup_notif_wgt_window_ParamLimits

0x8efd,	// (0x000554ac) popup_notif_wgt_window

0x8f16,	// (0x000554c5) popup_submenu_window_cp01_ParamLimits

0x8f16,	// (0x000554c5) popup_submenu_window_cp01

0xaa33,	// (0x00056fe2) bg_popup_window_pane_cp10

0xedaa,	// (0x0005b359) listscroll_notif_wgt_pane

0xedbc,	// (0x0005b36b) list_notif_wgt_window

0xedc5,	// (0x0005b374) scroll_pane_cp033

0x8f28,	// (0x000554d7) list_notif_wgt_row_pane_ParamLimits

0x8f28,	// (0x000554d7) list_notif_wgt_row_pane

0xedce,	// (0x0005b37d) aid_size_list_notif_wgt_del

0xeddb,	// (0x0005b38a) list_notif_wgt_row_pane_g1

0xede7,	// (0x0005b396) list_notif_wgt_row_pane_g2

0xedf6,	// (0x0005b3a5) list_notif_wgt_row_pane_g3

0x0002,

0x0325,	// (0x0004c8d4) list_notif_wgt_row_pane_g

0xee03,	// (0x0005b3b2) list_notif_wgt_row_pane_t1

0xee19,	// (0x0005b3c8) list_notif_wgt_row_pane_t2

0xee2b,	// (0x0005b3da) list_notif_wgt_row_pane_t3

0x0002,

0x032c,	// (0x0004c8db) list_notif_wgt_row_pane_t

0xd980,	// (0x00059f2f) list_recal_day_event_pane_g1

0xee3d,	// (0x0005b3ec) list_recal_day_event_pane_t1

0x9719,	// (0x00055cc8) bg_button_pane_cp045

0x8f38,	// (0x000554e7) cntbar_detail_btn_pane_t1

0xc8cd,	// (0x00058e7c) main_callh_pane_ParamLimits

0xc8cd,	// (0x00058e7c) main_callh_pane

0x9719,	// (0x00055cc8) main_coverflow0_pane

0x9719,	// (0x00055cc8) main_wgtman_pane

0x832b,	// (0x000548da) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x832b,	// (0x000548da) main_fs_bigclock_unlock_btn_pane

0x88a1,	// (0x00054e50) bg_button_pane_cp16

0x88b1,	// (0x00054e60) cell_tport_appsw_pane_g3

0x8f46,	// (0x000554f5) cf0_flow_pane_ParamLimits

0x8f46,	// (0x000554f5) cf0_flow_pane

0xee4c,	// (0x0005b3fb) listscroll_cf0_pane

0xee57,	// (0x0005b406) main_cf0_pane_g1

0x8f5b,	// (0x0005550a) main_cf0_pane_t1_ParamLimits

0x8f5b,	// (0x0005550a) main_cf0_pane_t1

0x8f72,	// (0x00055521) main_cf0_pane_t2_ParamLimits

0x8f72,	// (0x00055521) main_cf0_pane_t2

0x0001,

0xfe5a,	// (0x0005c409) main_cf0_pane_t_ParamLimits

0xfe5a,	// (0x0005c409) main_cf0_pane_t

0xee69,	// (0x0005b418) scroll_pane_cp11

0x8f89,	// (0x00055538) cf0_flow_pane_g1

0x8f91,	// (0x00055540) cf0_flow_pane_g2

0x0001,

0xfe5f,	// (0x0005c40e) cf0_flow_pane_g

0x8f99,	// (0x00055548) cf0_flow_pane_t1

0x9719,	// (0x00055cc8) main_call6_pane

0x9719,	// (0x00055cc8) main_calllock_pane

0x8fa7,	// (0x00055556) call6_btn_grp_pane_ParamLimits

0x8fa7,	// (0x00055556) call6_btn_grp_pane

0x8fc1,	// (0x00055570) call6_pane_g1_ParamLimits

0x8fc1,	// (0x00055570) call6_pane_g1

0x8fd6,	// (0x00055585) popup_call6_1st_window_ParamLimits

0x8fd6,	// (0x00055585) popup_call6_1st_window

0x8fe7,	// (0x00055596) popup_call6_2nd_window_ParamLimits

0x8fe7,	// (0x00055596) popup_call6_2nd_window

0x8ff8,	// (0x000555a7) cell_call6_btn_pane_ParamLimits

0x8ff8,	// (0x000555a7) cell_call6_btn_pane

0xaa33,	// (0x00056fe2) bg_popup_call2_in_pane_cp03

0xee74,	// (0x0005b423) popup_call6_1st_window_g1

0xee7c,	// (0x0005b42b) popup_call6_1st_window_g2

0xee84,	// (0x0005b433) popup_call6_1st_window_g3

0x0002,

0x0342,	// (0x0004c8f1) popup_call6_1st_window_g

0xee8c,	// (0x0005b43b) popup_call6_1st_window_t1

0xee9b,	// (0x0005b44a) popup_call6_1st_window_t2

0xeeab,	// (0x0005b45a) popup_call6_1st_window_t3

0x0002,

0x0349,	// (0x0004c8f8) popup_call6_1st_window_t

0xaa33,	// (0x00056fe2) bg_popup_call2_in_pane_cp04

0xee74,	// (0x0005b423) popup_call6_2nd_window_g1

0xee7c,	// (0x0005b42b) popup_call6_2nd_window_g2

0xee84,	// (0x0005b433) popup_call6_2nd_window_g3

0x0002,

0x0342,	// (0x0004c8f1) popup_call6_2nd_window_g

0xee8c,	// (0x0005b43b) popup_call6_2nd_window_t1

0x9719,	// (0x00055cc8) bg_button_pane_cp15

0xeebb,	// (0x0005b46a) cell_call6_btn_pane_g1

0xeec4,	// (0x0005b473) cell_call6_btn_pane_t1

0x900c,	// (0x000555bb) listscroll_wgtman_pane_ParamLimits

0x900c,	// (0x000555bb) listscroll_wgtman_pane

0x902d,	// (0x000555dc) wgtman_btn_pane_ParamLimits

0x902d,	// (0x000555dc) wgtman_btn_pane

0xb248,	// (0x000577f7) aid_scroll_copy1

0xeed3,	// (0x0005b482) list_wgtman_pane

0x9070,	// (0x0005561f) wgtman_btn_pane_g1_ParamLimits

0x9070,	// (0x0005561f) wgtman_btn_pane_g1

0x909c,	// (0x0005564b) wgtman_btn_pane_t1_ParamLimits

0x909c,	// (0x0005564b) wgtman_btn_pane_t1

0xeedd,	// (0x0005b48c) wgtman_btn_pane_t2_ParamLimits

0xeedd,	// (0x0005b48c) wgtman_btn_pane_t2

0x0001,

0xfe64,	// (0x0005c413) wgtman_btn_pane_t_ParamLimits

0xfe64,	// (0x0005c413) wgtman_btn_pane_t

0x90d9,	// (0x00055688) listrow_wgtman_pane_ParamLimits

0x90d9,	// (0x00055688) listrow_wgtman_pane

0x90eb,	// (0x0005569a) listrow_wgtman_pane_g1

0x90f8,	// (0x000556a7) listrow_wgtman_pane_g2

0x0001,

0xfe69,	// (0x0005c418) listrow_wgtman_pane_g

0x1197,	// (0x0004d746) listrow_wgtman_pane_t1

0x11af,	// (0x0004d75e) listrow_wgtman_pane_t2

0x0001,

0xfe6e,	// (0x0005c41d) listrow_wgtman_pane_t

0x11d5,	// (0x0004d784) wait_bar_pane_cp09

0xeef4,	// (0x0005b4a3) main_calllock_btn_pane

0xeefe,	// (0x0005b4ad) main_calllock_pane_g1

0x9719,	// (0x00055cc8) bg_button_pane_cp17

0xef09,	// (0x0005b4b8) main_calllock_btn_pane_g1

0xef12,	// (0x0005b4c1) main_calllock_btn_pane_t1

0x9719,	// (0x00055cc8) main_dialer3_pane

0x9719,	// (0x00055cc8) main_fmrd2_pane

0xccd5,	// (0x00059284) main_fs_bigclock_unlock_btn_pane_g1

0x911e,	// (0x000556cd) main_fs_bigclock_unlock_btn_pane_t1

0x912c,	// (0x000556db) area_fmrd2_info_pane_ParamLimits

0x912c,	// (0x000556db) area_fmrd2_info_pane

0x913d,	// (0x000556ec) area_fmrd2_visual_pane_ParamLimits

0x913d,	// (0x000556ec) area_fmrd2_visual_pane

0x914b,	// (0x000556fa) fmrd2_indi_pane_ParamLimits

0x914b,	// (0x000556fa) fmrd2_indi_pane

0x9158,	// (0x00055707) area_fmrd2_visual_pane_g1

0x9160,	// (0x0005570f) area_fmrd2_visual_pane_t1

0x9170,	// (0x0005571f) area_fmrd2_visual_pane_t2

0x9180,	// (0x0005572f) area_fmrd2_visual_pane_t3

0x0002,

0xfe78,	// (0x0005c427) area_fmrd2_visual_pane_t

0x9190,	// (0x0005573f) area_fmrd2_info_pane_g1

0x9198,	// (0x00055747) area_fmrd2_info_pane_t1

0x91a8,	// (0x00055757) area_fmrd2_info_pane_t2

0x91b8,	// (0x00055767) area_fmrd2_info_pane_t3

0x91c8,	// (0x00055777) area_fmrd2_info_pane_t4

0x0003,

0xfe7f,	// (0x0005c42e) area_fmrd2_info_pane_t

0x91d6,	// (0x00055785) fmrd2_indi_pane_t1

0x91e6,	// (0x00055795) fmrd2_indi_pane_t2

0x91f6,	// (0x000557a5) fmrd2_indi_pane_t3

0x0002,

0xfe88,	// (0x0005c437) fmrd2_indi_pane_t

0xe4de,	// (0x0005aa8d) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4de,	// (0x0005aa8d) list_single_fs_bigclock_indicator_pane_g5

0xe58f,	// (0x0005ab3e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe58f,	// (0x0005ab3e) list_single_fs_bigclock_indicator_pane_t5

0x8a26,	// (0x00054fd5) aid_cell_bcale_month_pane_ParamLimits

0x8a26,	// (0x00054fd5) aid_cell_bcale_month_pane

0x8a44,	// (0x00054ff3) bcale_month_pane_ParamLimits

0x8a44,	// (0x00054ff3) bcale_month_pane

0x8a68,	// (0x00055017) bcale_preview_pane_ParamLimits

0x8a68,	// (0x00055017) bcale_preview_pane

0xecdd,	// (0x0005b28c) list_single_fs_bigclock_pane_t1_ParamLimits

0xecfc,	// (0x0005b2ab) list_single_fs_bigclock_pane_t2_ParamLimits

0xecfc,	// (0x0005b2ab) list_single_fs_bigclock_pane_t2

0x0001,

0x02f6,	// (0x0004c8a5) list_single_fs_bigclock_pane_t_ParamLimits

0x02f6,	// (0x0004c8a5) list_single_fs_bigclock_pane_t

0x9116,	// (0x000556c5) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe73,	// (0x0005c422) main_fs_bigclock_unlock_btn_pane_g

0x9206,	// (0x000557b5) aid_dia3_key_size_ParamLimits

0x9206,	// (0x000557b5) aid_dia3_key_size

0x9215,	// (0x000557c4) aid_dia3_listrow_size_ParamLimits

0x9215,	// (0x000557c4) aid_dia3_listrow_size

0x922a,	// (0x000557d9) dia3_keypad_fun_pane_ParamLimits

0x922a,	// (0x000557d9) dia3_keypad_fun_pane

0x9246,	// (0x000557f5) dia3_keypad_num_pane_ParamLimits

0x9246,	// (0x000557f5) dia3_keypad_num_pane

0x9261,	// (0x00055810) dia3_listscroll_pane_ParamLimits

0x9261,	// (0x00055810) dia3_listscroll_pane

0x9274,	// (0x00055823) dia3_numentry_pane_ParamLimits

0x9274,	// (0x00055823) dia3_numentry_pane

0xef21,	// (0x0005b4d0) dia3_list_pane

0xef2c,	// (0x0005b4db) scroll_pane_cp12

0x9719,	// (0x00055cc8) bg_dia3_numentry_pane

0x9288,	// (0x00055837) dia3_numentry_pane_t1

0x9297,	// (0x00055846) cell_dia3_key_num_pane

0x929f,	// (0x0005584e) cell_dia3_key0_fun_pane_ParamLimits

0x929f,	// (0x0005584e) cell_dia3_key0_fun_pane

0x92b3,	// (0x00055862) cell_dia3_key1_fun_pane_ParamLimits

0x92b3,	// (0x00055862) cell_dia3_key1_fun_pane

0x92cb,	// (0x0005587a) dia3_listrow_pane

0xe208,	// (0x0005a7b7) bg_dia3_numentry_pane_g1

0x9719,	// (0x00055cc8) bg_button_pane_cp21

0xef37,	// (0x0005b4e6) cell_dia3_key_num_pane_t1

0xef45,	// (0x0005b4f4) cell_dia3_key_num_pane_t2

0xef54,	// (0x0005b503) cell_dia3_key_num_pane_t3

0xef63,	// (0x0005b512) cell_dia3_key_num_pane_t4

0x0003,

0x037b,	// (0x0004c92a) cell_dia3_key_num_pane_t

0x9719,	// (0x00055cc8) bg_button_pane_cp19

0x92dd,	// (0x0005588c) cell_dia3_key0_fun_pane_g1

0x9719,	// (0x00055cc8) bg_button_pane_cp20

0x92e5,	// (0x00055894) cell_dia3_key1_fun_pane_g1

0x92ed,	// (0x0005589c) area_left_week_number_pane

0x92f9,	// (0x000558a8) area_top_day_name_pane

0x930c,	// (0x000558bb) frame_month_view_pane

0xef72,	// (0x0005b521) grid_month_view_pane

0x931f,	// (0x000558ce) cell_top_day_name_pane_ParamLimits

0x931f,	// (0x000558ce) cell_top_day_name_pane

0x934c,	// (0x000558fb) cell_area_left_week_number_pane_ParamLimits

0x934c,	// (0x000558fb) cell_area_left_week_number_pane

0x9360,	// (0x0005590f) cell_month_view_pane_ParamLimits

0x9360,	// (0x0005590f) cell_month_view_pane

0xef80,	// (0x0005b52f) frm_month_g1

0x938d,	// (0x0005593c) frm_month_g2

0x93a0,	// (0x0005594f) frm_month_g3

0x93b3,	// (0x00055962) frm_month_g4

0x93c6,	// (0x00055975) frm_month_g5

0x93d9,	// (0x00055988) frm_month_g6

0x93ec,	// (0x0005599b) frm_month_g7

0xef8d,	// (0x0005b53c) frm_month_g8

0x93ff,	// (0x000559ae) frm_month_g9

0x940f,	// (0x000559be) frm_month_g10

0x941f,	// (0x000559ce) frm_month_g11

0x942f,	// (0x000559de) frm_month_g12

0x9441,	// (0x000559f0) frm_month_g13

0x9453,	// (0x00055a02) frm_month_g14

0x9467,	// (0x00055a16) frm_month_g15

0x947b,	// (0x00055a2a) frm_month_g16

0x000f,

0xfe8f,	// (0x0005c43e) frm_month_g

0xef9a,	// (0x0005b549) cell_top_day_name_pane_t1

0x948f,	// (0x00055a3e) cell_area_left_week_number_pane_g1

0x949b,	// (0x00055a4a) cell_area_left_week_number_pane_t1

0xcf2f,	// (0x000594de) cell_month_view_pane_g1

0x94ae,	// (0x00055a5d) cell_month_view_pane_t1

0x9719,	// (0x00055cc8) main_fps_pane

0xe79a,	// (0x0005ad49) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe79a,	// (0x0005ad49) cmail_ddmenu_btn02_pane_cp1

0xe7b6,	// (0x0005ad65) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe7b6,	// (0x0005ad65) cmail_ddmenu_btn02_pane_cp2

0x8c3a,	// (0x000551e9) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8c3a,	// (0x000551e9) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe0d,	// (0x0005c3bc) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe0d,	// (0x0005c3bc) cmail_ddmenu_btn02_pane_g

0x8c59,	// (0x00055208) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8c59,	// (0x00055208) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe12,	// (0x0005c3c1) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe12,	// (0x0005c3c1) cmail_ddmenu_btn02_pane_t

0x94c1,	// (0x00055a70) fps_text_pane_ParamLimits

0x94c1,	// (0x00055a70) fps_text_pane

0x94d8,	// (0x00055a87) main_fps_pane_g1_ParamLimits

0x94d8,	// (0x00055a87) main_fps_pane_g1

0x94f2,	// (0x00055aa1) wait_bar_pane_cp010_ParamLimits

0x94f2,	// (0x00055aa1) wait_bar_pane_cp010

0x9503,	// (0x00055ab2) fps_text_pane_t1_ParamLimits

0x9503,	// (0x00055ab2) fps_text_pane_t1

0xe2e7,	// (0x0005a896) cam4_image_uncrop_pane_g1

0xe2f0,	// (0x0005a89f) cam4_image_uncrop_pane_g2

0x66b2,	// (0x00052c61) cam4_image_uncrop_pane_g3

0x66bb,	// (0x00052c6a) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x0005beb0) cam4_image_uncrop_pane_g

0x92cb,	// (0x0005587a) dia3_listrow_pane_ParamLimits

0x9719,	// (0x00055cc8) main_phob2_pane

0x8872,	// (0x00054e21) cell_tport_appsw_pane_cp02_ParamLimits

0x8872,	// (0x00054e21) cell_tport_appsw_pane_cp02

0x8886,	// (0x00054e35) cell_tport_appsw_pane_cp03_ParamLimits

0x8886,	// (0x00054e35) cell_tport_appsw_pane_cp03

0x9719,	// (0x00055cc8) phob2_contact_card_pane

0x9719,	// (0x00055cc8) phob2_listscroll_pane

0xefad,	// (0x0005b55c) phob2_list_pane

0xefb5,	// (0x0005b564) scroll_pane_cp034

0x951b,	// (0x00055aca) phob2_cc_data_pane_ParamLimits

0x951b,	// (0x00055aca) phob2_cc_data_pane

0x953a,	// (0x00055ae9) phob2_cc_listscroll_pane_ParamLimits

0x953a,	// (0x00055ae9) phob2_cc_listscroll_pane

0x90d9,	// (0x00055688) list_double_large_graphic_phob2_pane_ParamLimits

0x90d9,	// (0x00055688) list_double_large_graphic_phob2_pane

0x9558,	// (0x00055b07) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9558,	// (0x00055b07) list_double_large_graphic_phob2_pane_g1

0x11e7,	// (0x0004d796) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x11e7,	// (0x0004d796) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfeb0,	// (0x0005c45f) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfeb0,	// (0x0005c45f) list_double_large_graphic_phob2_pane_g

0x11f3,	// (0x0004d7a2) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x11f3,	// (0x0004d7a2) list_double_large_graphic_phob2_pane_t1

0x1209,	// (0x0004d7b8) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1209,	// (0x0004d7b8) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfeb5,	// (0x0005c464) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfeb5,	// (0x0005c464) list_double_large_graphic_phob2_pane_t

0x9719,	// (0x00055cc8) list_highlight_pane_cp024

0x956e,	// (0x00055b1d) phob2_cc_button_pane

0x9576,	// (0x00055b25) phob2_cc_data_pane_g1_ParamLimits

0x9576,	// (0x00055b25) phob2_cc_data_pane_g1

0x958b,	// (0x00055b3a) phob2_cc_data_pane_g2_ParamLimits

0x958b,	// (0x00055b3a) phob2_cc_data_pane_g2

0x0001,

0xfeba,	// (0x0005c469) phob2_cc_data_pane_g_ParamLimits

0xfeba,	// (0x0005c469) phob2_cc_data_pane_g

0x959b,	// (0x00055b4a) phob2_cc_data_pane_t1_ParamLimits

0x959b,	// (0x00055b4a) phob2_cc_data_pane_t1

0x95b3,	// (0x00055b62) phob2_cc_data_pane_t2_ParamLimits

0x95b3,	// (0x00055b62) phob2_cc_data_pane_t2

0x95cb,	// (0x00055b7a) phob2_cc_data_pane_t3_ParamLimits

0x95cb,	// (0x00055b7a) phob2_cc_data_pane_t3

0x0002,

0xfebf,	// (0x0005c46e) phob2_cc_data_pane_t_ParamLimits

0xfebf,	// (0x0005c46e) phob2_cc_data_pane_t

0xefbd,	// (0x0005b56c) phob2_cc_list_pane_ParamLimits

0xefbd,	// (0x0005b56c) phob2_cc_list_pane

0xda29,	// (0x00059fd8) scroll_pane_cp035_ParamLimits

0xda29,	// (0x00059fd8) scroll_pane_cp035

0xa1fa,	// (0x000567a9) bg_button_pane_cp033

0xefc9,	// (0x0005b578) phob2_cc_button_pane_g1

0xefd5,	// (0x0005b584) phob2_cc_button_pane_t1

0xefea,	// (0x0005b599) phob2_cc_button_pane_t2

0x0001,

0x03bb,	// (0x0004c96a) phob2_cc_button_pane_t

0x95e3,	// (0x00055b92) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x95e3,	// (0x00055b92) list_double_large_graphic_phob2_cc_pane

0x95f6,	// (0x00055ba5) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x95f6,	// (0x00055ba5) list_double_large_graphic_phob2_cc_pane_g1

0x121e,	// (0x0004d7cd) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x121e,	// (0x0004d7cd) list_double_large_graphic_phob2_cc_pane_g2

0x122a,	// (0x0004d7d9) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x122a,	// (0x0004d7d9) list_double_large_graphic_phob2_cc_pane_g3

0x1236,	// (0x0004d7e5) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1236,	// (0x0004d7e5) list_double_large_graphic_phob2_cc_pane_g4

0x1242,	// (0x0004d7f1) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1242,	// (0x0004d7f1) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfec6,	// (0x0005c475) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfec6,	// (0x0005c475) list_double_large_graphic_phob2_cc_pane_g

0x124e,	// (0x0004d7fd) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x124e,	// (0x0004d7fd) list_double_large_graphic_phob2_cc_pane_t1

0x1277,	// (0x0004d826) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1277,	// (0x0004d826) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfed1,	// (0x0005c480) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfed1,	// (0x0005c480) list_double_large_graphic_phob2_cc_pane_t

0xeffc,	// (0x0005b5ab) list_highlight_pane_cp025_ParamLimits

0xeffc,	// (0x0005b5ab) list_highlight_pane_cp025

0xa1fa,	// (0x000567a9) bg_button_pane_cp033_ParamLimits

0xefc9,	// (0x0005b578) phob2_cc_button_pane_g1_ParamLimits

0xefd5,	// (0x0005b584) phob2_cc_button_pane_t1_ParamLimits

0xefea,	// (0x0005b599) phob2_cc_button_pane_t2_ParamLimits

0x03bb,	// (0x0004c96a) phob2_cc_button_pane_t_ParamLimits

0x14e9,	// (0x0004da98) popup_wgtman_window

0xd844,	// (0x00059df3) scroll_pane_cp038

0x9052,	// (0x00055601) wgtman_btn_pane_cp_01_ParamLimits

0x9052,	// (0x00055601) wgtman_btn_pane_cp_01

0xf00a,	// (0x0005b5b9) wgtman_content_pane

0xf013,	// (0x0005b5c2) wgtman_heading_pane

0x9719,	// (0x00055cc8) bg_heading_pane_cp02

0xf01c,	// (0x0005b5cb) wgtman_heading_pane_g1

0xf024,	// (0x0005b5d3) wgtman_heading_pane_t1

0xf032,	// (0x0005b5e1) scroll_pane_cp036

0xf03a,	// (0x0005b5e9) wgtman_list_pane

0xe67a,	// (0x0005ac29) wgtman_list_pane_t1_ParamLimits

0xe67a,	// (0x0005ac29) wgtman_list_pane_t1

0x9dbb,	// (0x0005636a) cam4_grid_pane

0x0801,	// (0x0004cdb0) bg_button_pane_cp015_ParamLimits

0x72d9,	// (0x00053888) bg_button_pane_cp016_ParamLimits

0x72ec,	// (0x0005389b) bg_button_pane_cp017_ParamLimits

0x0849,	// (0x0004cdf8) popup_vitu2_query_window_g3_ParamLimits

0x0849,	// (0x0004cdf8) popup_vitu2_query_window_g3

0x08c4,	// (0x0004ce73) popup_vitu2_query_window_t6_ParamLimits

0x08c4,	// (0x0004ce73) popup_vitu2_query_window_t6

0x08ef,	// (0x0004ce9e) popup_vitu2_query_window_t7_ParamLimits

0x08ef,	// (0x0004ce9e) popup_vitu2_query_window_t7

0xe2e7,	// (0x0005a896) cam4_grid_pane_g1

0xe2f0,	// (0x0005a89f) cam4_grid_pane_g2

0xf042,	// (0x0005b5f1) cam4_grid_pane_g3

0xf04b,	// (0x0005b5fa) cam4_grid_pane_g4

0x0003,

0xfed6,	// (0x0005c485) cam4_grid_pane_g

0x22f7,	// (0x0004e8a6) aid_placing_vt_slider_lsc_ParamLimits

0x25f4,	// (0x0004eba3) vidtel_button_pane_ParamLimits

0x25f4,	// (0x0004eba3) vidtel_button_pane

0x9719,	// (0x00055cc8) bg_button_pane_cp034

0x9602,	// (0x00055bb1) vidtel_button_pane_g1

0xf056,	// (0x0005b605) vidtel_button_pane_t1

0xd970,	// (0x00059f1f) aid_size_vtel_slider_touch

0xda29,	// (0x00059fd8) scroll_pane_cp039

0x801f,	// (0x000545ce) ncim_query_button_pane_cp01_ParamLimits

0x803e,	// (0x000545ed) ncimui_query_pane_g1_ParamLimits

0xa1fa,	// (0x000567a9) input_focus_pane_cp012_ParamLimits

0xe24e,	// (0x0005a7fd) ncim_query_entry_pane_t1_ParamLimits

0xda29,	// (0x00059fd8) scroll_pane_cp039_ParamLimits

0xb31f,	// (0x000578ce) navi_pane_bcale_mc_g1

0xb327,	// (0x000578d6) navi_pane_bcale_mc_t1

0xe7ff,	// (0x0005adae) main_sp_fs_email_pane_g1

0xe80b,	// (0x0005adba) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x0005c2a7) main_sp_fs_email_pane_g

0xea61,	// (0x0005b010) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea61,	// (0x0005b010) list_single_cale_mrui_row_pane_g3

0x115a,	// (0x0004d709) list_single_recal_day_pane_g5_event_pane

0xa190,	// (0x0005673f) list_single_recal_day_pane_g7

0xf06c,	// (0x0005b61b) list_recal_day_event_pane_cp01

0xf075,	// (0x0005b624) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x0005b62c) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x0005b634) list_recal_vselct_pane_cp01

0xd980,	// (0x00059f2f) list_recal_day_event_pane_cp01_g1

0xa1ec,	// (0x0005679b) list_recal_day_event_pane_cp01_t1

0xa198,	// (0x00056747) list_single_recal_day_pane_t1_ParamLimits

0xa1aa,	// (0x00056759) list_single_recal_day_pane_t2_ParamLimits

0xfe22,	// (0x0005c3d1) list_single_recal_day_pane_t_ParamLimits

0xa76d,	// (0x00056d1c) bg_notes_pane_ParamLimits

0xa81c,	// (0x00056dcb) list_notes_pane_ParamLimits

0x182d,	// (0x0004dddc) scroll_pane_cp06_ParamLimits

0xa83e,	// (0x00056ded) main_notes_pane_ParamLimits

0x9719,	// (0x00055cc8) main_welc_pane

0x960a,	// (0x00055bb9) main_welc_body_pane_ParamLimits

0x960a,	// (0x00055bb9) main_welc_body_pane

0x9627,	// (0x00055bd6) main_welc_opti_pane_ParamLimits

0x9627,	// (0x00055bd6) main_welc_opti_pane

0x966c,	// (0x00055c1b) main_welc_pane_t1_ParamLimits

0x966c,	// (0x00055c1b) main_welc_pane_t1

0x968a,	// (0x00055c39) main_welc_body_row_pane_ParamLimits

0x968a,	// (0x00055c39) main_welc_body_row_pane

0xe2d9,	// (0x0005a888) main_welc_opti_row_pane_ParamLimits

0xe2d9,	// (0x0005a888) main_welc_opti_row_pane

0xf08f,	// (0x0005b63e) main_welc_opti_row_pane_g1

0x969f,	// (0x00055c4e) main_welc_opti_row_pane_t1

0xf097,	// (0x0005b646) main_welc_body_row_pane_t1

0xedb4,	// (0x0005b363) popup_notif_wgt_heading_pane

0xedce,	// (0x0005b37d) aid_size_list_notif_wgt_del_ParamLimits

0xeddb,	// (0x0005b38a) list_notif_wgt_row_pane_g1_ParamLimits

0xede7,	// (0x0005b396) list_notif_wgt_row_pane_g2_ParamLimits

0xedf6,	// (0x0005b3a5) list_notif_wgt_row_pane_g3_ParamLimits

0x0325,	// (0x0004c8d4) list_notif_wgt_row_pane_g_ParamLimits

0xee03,	// (0x0005b3b2) list_notif_wgt_row_pane_t1_ParamLimits

0xee19,	// (0x0005b3c8) list_notif_wgt_row_pane_t2_ParamLimits

0xee2b,	// (0x0005b3da) list_notif_wgt_row_pane_t3_ParamLimits

0x032c,	// (0x0004c8db) list_notif_wgt_row_pane_t_ParamLimits

0x90eb,	// (0x0005569a) listrow_wgtman_pane_g1_ParamLimits

0x90f8,	// (0x000556a7) listrow_wgtman_pane_g2_ParamLimits

0xfe69,	// (0x0005c418) listrow_wgtman_pane_g_ParamLimits

0x1197,	// (0x0004d746) listrow_wgtman_pane_t1_ParamLimits

0x11af,	// (0x0004d75e) listrow_wgtman_pane_t2_ParamLimits

0xfe6e,	// (0x0005c41d) listrow_wgtman_pane_t_ParamLimits

0x11d5,	// (0x0004d784) wait_bar_pane_cp09_ParamLimits

0x9719,	// (0x00055cc8) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0005b655) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0005b65d) popup_notif_wgt_heading_pane_t1

0x9719,	// (0x00055cc8) main_vids_pane

0x9719,	// (0x00055cc8) vids_listscroll_pane

0x96ae,	// (0x00055c5d) scroll_pane_cp040

0x9719,	// (0x00055cc8) vids_list_pane

0x96b9,	// (0x00055c68) vids_list_double_pane_ParamLimits

0x96b9,	// (0x00055c68) vids_list_double_pane

0x96ca,	// (0x00055c79) vids_list_double_pane_g1

0x96d3,	// (0x00055c82) vids_list_double_pane_t1

0x96e3,	// (0x00055c92) vids_list_double_pane_t2

0x0001,

0xfee4,	// (0x0005c493) vids_list_double_pane_t

0xa1fa,	// (0x000567a9) main_ncimui_pane_ParamLimits

0x7e55,	// (0x00054404) main_ncimui_pane_g1_ParamLimits

0x7e61,	// (0x00054410) main_ncimui_pane_g2_ParamLimits

0x7e61,	// (0x00054410) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x0005c1ac) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x0005c1ac) main_ncimui_pane_g

0x9642,	// (0x00055bf1) main_welc_pane_g1_ParamLimits

0x9642,	// (0x00055bf1) main_welc_pane_g1

0x9657,	// (0x00055c06) main_welc_pane_g2_ParamLimits

0x9657,	// (0x00055c06) main_welc_pane_g2

0x0001,

0xfedf,	// (0x0005c48e) main_welc_pane_g_ParamLimits

0xfedf,	// (0x0005c48e) main_welc_pane_g

0xa76d,	// (0x00056d1c) listscroll_mce_pane_ParamLimits

0xb474,	// (0x00057a23) wait_bar_pane_cp10

0xc8c1,	// (0x00058e70) main_cale_day_pane_ParamLimits

0xc8c1,	// (0x00058e70) main_cale_week_pane_ParamLimits

0xa76d,	// (0x00056d1c) main_messa_pane_ParamLimits

0x59da,	// (0x00051f89) main_clock2_btn_pane_ParamLimits

0x59da,	// (0x00051f89) main_clock2_btn_pane

0xd0b7,	// (0x00059666) main_clock2_btn_pane_cp01_ParamLimits

0xd0b7,	// (0x00059666) main_clock2_btn_pane_cp01

0xea32,	// (0x0005afe1) list_cale_mrui_pane_ParamLimits

0xee61,	// (0x0005b410) main_cf0_pane_g2

0x0001,

0x0333,	// (0x0004c8e2) main_cf0_pane_g

0x92ed,	// (0x0005589c) area_left_week_number_pane_ParamLimits

0x92f9,	// (0x000558a8) area_top_day_name_pane_ParamLimits

0x930c,	// (0x000558bb) frame_month_view_pane_ParamLimits

0xef72,	// (0x0005b521) grid_month_view_pane_ParamLimits

0xef80,	// (0x0005b52f) frm_month_g1_ParamLimits

0x938d,	// (0x0005593c) frm_month_g2_ParamLimits

0x93a0,	// (0x0005594f) frm_month_g3_ParamLimits

0x93b3,	// (0x00055962) frm_month_g4_ParamLimits

0x93c6,	// (0x00055975) frm_month_g5_ParamLimits

0x93d9,	// (0x00055988) frm_month_g6_ParamLimits

0x93ec,	// (0x0005599b) frm_month_g7_ParamLimits

0xef8d,	// (0x0005b53c) frm_month_g8_ParamLimits

0x93ff,	// (0x000559ae) frm_month_g9_ParamLimits

0x940f,	// (0x000559be) frm_month_g10_ParamLimits

0x941f,	// (0x000559ce) frm_month_g11_ParamLimits

0x942f,	// (0x000559de) frm_month_g12_ParamLimits

0x9441,	// (0x000559f0) frm_month_g13_ParamLimits

0x9453,	// (0x00055a02) frm_month_g14_ParamLimits

0x9467,	// (0x00055a16) frm_month_g15_ParamLimits

0x947b,	// (0x00055a2a) frm_month_g16_ParamLimits

0xfe8f,	// (0x0005c43e) frm_month_g_ParamLimits

0xef9a,	// (0x0005b549) cell_top_day_name_pane_t1_ParamLimits

0x948f,	// (0x00055a3e) cell_area_left_week_number_pane_g1_ParamLimits

0x949b,	// (0x00055a4a) cell_area_left_week_number_pane_t1_ParamLimits

0xcf2f,	// (0x000594de) cell_month_view_pane_g1_ParamLimits

0x94ae,	// (0x00055a5d) cell_month_view_pane_t1_ParamLimits

0xa765,	// (0x00056d14) main_clock2_btn_pane_g1

0xf0bc,	// (0x0005b66b) main_clock2_btn_pane_t1

0xa1fa,	// (0x000567a9) listscroll_cmail_pane_ParamLimits

0xe7ff,	// (0x0005adae) main_sp_fs_email_pane_g1_ParamLimits

0xe80b,	// (0x0005adba) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x0005c2a7) main_sp_fs_email_pane_g_ParamLimits

0xeb40,	// (0x0005b0ef) list_recal_day_pane_ParamLimits

0xeb51,	// (0x0005b100) mian_recal_day_pane_t1

0x0d67,	// (0x0004d316) list_single_dyc_row_text_pane_t4_ParamLimits

0x0d67,	// (0x0004d316) list_single_dyc_row_text_pane_t4

0x0db0,	// (0x0004d35f) list_single_dyc_row_text_pane_t5_ParamLimits

0x0db0,	// (0x0004d35f) list_single_dyc_row_text_pane_t5

0x875d,	// (0x00054d0c) list_single_dyc_row_text_pane_t6_ParamLimits

0x875d,	// (0x00054d0c) list_single_dyc_row_text_pane_t6

0x3076,	// (0x0004f625) aid_mgn_list_cale_time_pane

0xa1fa,	// (0x000567a9) main_gallery2_pane_ParamLimits

0xd0cd,	// (0x0005967c) main_clock2_pane_cp01_t1

0xd0db,	// (0x0005968a) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x0005bd86) main_clock2_pane_cp01_t

0x1ba6,	// (0x0004e155) cale_week_scroll_pane_g16_ParamLimits

0x1ba6,	// (0x0004e155) cale_week_scroll_pane_g16

0xaa33,	// (0x00056fe2) vorec_slider_pane

0xf056,	// (0x0005b605) vidtel_button_pane_t1_ParamLimits

0x8cc7,	// (0x00055276) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8cc7,	// (0x00055276) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8cd8,	// (0x00055287) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8cd8,	// (0x00055287) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe2c,	// (0x0005c3db) main_fs_bigclock_clock_pane_g_ParamLimits

0x8ceb,	// (0x0005529a) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8d01,	// (0x000552b0) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe35,	// (0x0005c3e4) main_fs_bigclock_clock_pane_t_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small
