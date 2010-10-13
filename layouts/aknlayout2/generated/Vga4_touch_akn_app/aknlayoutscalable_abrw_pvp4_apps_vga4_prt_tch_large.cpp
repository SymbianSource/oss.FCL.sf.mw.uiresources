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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0008d14d };

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
0x409a,	// (0x000911e7) Screen

0x40a6,	// (0x000911f3) application_window

0x40fa,	// (0x00091247) area_bottom_pane_ParamLimits

0x40fa,	// (0x00091247) area_bottom_pane

0x4158,	// (0x000912a5) area_top_pane_ParamLimits

0x4158,	// (0x000912a5) area_top_pane

0x41bc,	// (0x00091309) call_video_uplink_pane_ParamLimits

0x41bc,	// (0x00091309) call_video_uplink_pane

0x41fb,	// (0x00091348) main_pane_ParamLimits

0x41fb,	// (0x00091348) main_pane

0xde47,	// (0x0009af94) context_pane

0x7193,	// (0x000942e0) navi_pane

0x71bc,	// (0x00094309) popup_cale_events_window_ParamLimits

0x71bc,	// (0x00094309) popup_cale_events_window

0xde5a,	// (0x0009afa7) popup_mup_playback_window

0x71d4,	// (0x00094321) signal_pane

0x1df7,	// (0x0008ef44) main_browser_pane

0x1f95,	// (0x0008f0e2) main_burst_pane

0x6fe3,	// (0x00094130) main_calc_pane

0xde3b,	// (0x0009af88) main_cale_day_pane

0x6ff0,	// (0x0009413d) main_cale_month_pane

0xde3b,	// (0x0009af88) main_cale_week_pane

0x1f95,	// (0x0008f0e2) main_call_pane

0x1410,	// (0x0008e55d) main_call_poc_pane

0x1f95,	// (0x0008f0e2) main_camera_pane

0x1f95,	// (0x0008f0e2) main_chi_dic_pane

0x2d60,	// (0x0008fead) main_clock_pane

0x1410,	// (0x0008e55d) main_fmradio_pane

0x1f95,	// (0x0008f0e2) main_graph_messa_pane

0x1410,	// (0x0008e55d) main_help_pane

0x1df7,	// (0x0008ef44) main_im_pane

0x166b,	// (0x0008e7b8) main_image_pane_ParamLimits

0x166b,	// (0x0008e7b8) main_image_pane

0x1410,	// (0x0008e55d) main_location2_pane

0x1f95,	// (0x0008f0e2) main_location_pane

0x166b,	// (0x0008e7b8) main_messa_pane

0x1410,	// (0x0008e55d) main_mp2_pane

0x1f95,	// (0x0008f0e2) main_mp_pane

0x1410,	// (0x0008e55d) main_msg_pane

0x1410,	// (0x0008e55d) main_mup_eq_pane

0x1410,	// (0x0008e55d) main_mup_pane

0x1df7,	// (0x0008ef44) main_notes_pane

0x1410,	// (0x0008e55d) main_pec_pane

0x1410,	// (0x0008e55d) main_phob_pane

0x1410,	// (0x0008e55d) main_pinb_pane

0x1410,	// (0x0008e55d) main_postcard_pane

0x1410,	// (0x0008e55d) main_qdial_pane

0x1f95,	// (0x0008f0e2) main_skin_pane

0x1410,	// (0x0008e55d) main_smil2_pane

0x1f95,	// (0x0008f0e2) main_smil_pane

0x1f95,	// (0x0008f0e2) main_video_pane

0x1f95,	// (0x0008f0e2) main_video_tele_pane

0x166b,	// (0x0008e7b8) main_viewer_pane_ParamLimits

0x166b,	// (0x0008e7b8) main_viewer_pane

0x1f95,	// (0x0008f0e2) main_vorec_pane

0x7043,	// (0x00094190) popup_blid_sat_info_window_ParamLimits

0x7043,	// (0x00094190) popup_blid_sat_info_window

0x7069,	// (0x000941b6) popup_dyc_status_message_window_ParamLimits

0x7069,	// (0x000941b6) popup_dyc_status_message_window

0x7079,	// (0x000941c6) popup_grid_large_graphic_window_ParamLimits

0x7079,	// (0x000941c6) popup_grid_large_graphic_window

0x710e,	// (0x0009425b) popup_loc_request_window_ParamLimits

0x710e,	// (0x0009425b) popup_loc_request_window

0x7167,	// (0x000942b4) popup_wml_address_window_ParamLimits

0x7167,	// (0x000942b4) popup_wml_address_window

0x6ebb,	// (0x00094008) call_muted_g1

0x6bab,	// (0x00093cf8) popup_call_audio_conf_window_ParamLimits

0x6bab,	// (0x00093cf8) popup_call_audio_conf_window

0x6ecb,	// (0x00094018) popup_call_audio_first_window_ParamLimits

0x6ecb,	// (0x00094018) popup_call_audio_first_window

0x6f0b,	// (0x00094058) popup_call_audio_in_window_ParamLimits

0x6f0b,	// (0x00094058) popup_call_audio_in_window

0x6f2f,	// (0x0009407c) popup_call_audio_out_window_ParamLimits

0x6f2f,	// (0x0009407c) popup_call_audio_out_window

0x6f51,	// (0x0009409e) popup_call_audio_second_window_ParamLimits

0x6f51,	// (0x0009409e) popup_call_audio_second_window

0x6f81,	// (0x000940ce) popup_call_audio_wait_window_ParamLimits

0x6f81,	// (0x000940ce) popup_call_audio_wait_window

0x6fa2,	// (0x000940ef) popup_number_entry_window_ParamLimits

0x6fa2,	// (0x000940ef) popup_number_entry_window

0x0399,	// (0x0008d4e6) bg_popup_call_pane_cp05_ParamLimits

0x0399,	// (0x0008d4e6) bg_popup_call_pane_cp05

0x03b9,	// (0x0008d506) popup_number_entry_window_t1

0x03cc,	// (0x0008d519) popup_number_entry_window_t2

0x03de,	// (0x0008d52b) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x0009c18d) popup_number_entry_window_t

0x0425,	// (0x0008d572) text_title_cp2

0x0438,	// (0x0008d585) bg_popup_call_pane_cp_ParamLimits

0x0438,	// (0x0008d585) bg_popup_call_pane_cp

0x0446,	// (0x0008d593) call_thumbnail_pane

0x044e,	// (0x0008d59b) popup_call_audio_in_window_g1_ParamLimits

0x044e,	// (0x0008d59b) popup_call_audio_in_window_g1

0x045a,	// (0x0008d5a7) popup_call_audio_in_window_g2_ParamLimits

0x045a,	// (0x0008d5a7) popup_call_audio_in_window_g2

0x0466,	// (0x0008d5b3) popup_call_audio_in_window_g3_ParamLimits

0x0466,	// (0x0008d5b3) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x0009c196) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x0009c196) popup_call_audio_in_window_g

0x10a1,	// (0x0008e1ee) popup_call_audio_in_window_t1_ParamLimits

0x10a1,	// (0x0008e1ee) popup_call_audio_in_window_t1

0x10bd,	// (0x0008e20a) popup_call_audio_in_window_t2_ParamLimits

0x10bd,	// (0x0008e20a) popup_call_audio_in_window_t2

0x10d9,	// (0x0008e226) popup_call_audio_in_window_t3_ParamLimits

0x10d9,	// (0x0008e226) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x0009c19d) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x0009c19d) popup_call_audio_in_window_t

0x0438,	// (0x0008d585) bg_popup_call_pane_cp01_ParamLimits

0x0438,	// (0x0008d585) bg_popup_call_pane_cp01

0x0446,	// (0x0008d593) call_thumbnail_pane_cp02

0x10ec,	// (0x0008e239) call_type_pane_cp022

0x10f4,	// (0x0008e241) popup_call_audio_out_window_g1_ParamLimits

0x10f4,	// (0x0008e241) popup_call_audio_out_window_g1

0x1106,	// (0x0008e253) popup_call_audio_out_window_g2_ParamLimits

0x1106,	// (0x0008e253) popup_call_audio_out_window_g2

0x1112,	// (0x0008e25f) popup_call_audio_out_window_g3_ParamLimits

0x1112,	// (0x0008e25f) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x0009c1a4) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x0009c1a4) popup_call_audio_out_window_g

0x1124,	// (0x0008e271) popup_call_audio_out_window_t1_ParamLimits

0x1124,	// (0x0008e271) popup_call_audio_out_window_t1

0x113c,	// (0x0008e289) popup_call_audio_out_window_t2_ParamLimits

0x113c,	// (0x0008e289) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x0009c1ab) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x0009c1ab) popup_call_audio_out_window_t

0x1151,	// (0x0008e29e) bg_popup_call_pane_ParamLimits

0x1151,	// (0x0008e29e) bg_popup_call_pane

0x43da,	// (0x00091527) call_thumbnail_pane_cp_ParamLimits

0x43da,	// (0x00091527) call_thumbnail_pane_cp

0x11d5,	// (0x0008e322) call_type_pane_cp01_ParamLimits

0x11d5,	// (0x0008e322) call_type_pane_cp01

0x1219,	// (0x0008e366) popup_call_audio_first_window_g1_ParamLimits

0x1219,	// (0x0008e366) popup_call_audio_first_window_g1

0x1265,	// (0x0008e3b2) popup_call_audio_first_window_g2_ParamLimits

0x1265,	// (0x0008e3b2) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x0009c1b0) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x0009c1b0) popup_call_audio_first_window_g

0x12a9,	// (0x0008e3f6) popup_call_audio_first_window_t1_ParamLimits

0x12a9,	// (0x0008e3f6) popup_call_audio_first_window_t1

0x1355,	// (0x0008e4a2) popup_call_audio_first_window_t4_ParamLimits

0x1355,	// (0x0008e4a2) popup_call_audio_first_window_t4

0x13e1,	// (0x0008e52e) popup_call_audio_first_window_t5_ParamLimits

0x13e1,	// (0x0008e52e) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x0009c1b5) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x0009c1b5) popup_call_audio_first_window_t

0x1410,	// (0x0008e55d) bg_popup_call_pane_cp02

0x141a,	// (0x0008e567) call_type_pane_cp023

0x1422,	// (0x0008e56f) popup_call_audio_wait_window_g1

0x142a,	// (0x0008e577) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x0009c1bc) popup_call_audio_wait_window_g

0x1432,	// (0x0008e57f) popup_call_audio_wait_window_t3

0x1440,	// (0x0008e58d) bg_popup_call_pane_cp03_ParamLimits

0x1440,	// (0x0008e58d) bg_popup_call_pane_cp03

0x14a0,	// (0x0008e5ed) call_thumbnail_pane_cp011_ParamLimits

0x14a0,	// (0x0008e5ed) call_thumbnail_pane_cp011

0x14ac,	// (0x0008e5f9) call_type_pane_cp034_ParamLimits

0x14ac,	// (0x0008e5f9) call_type_pane_cp034

0x14e8,	// (0x0008e635) popup_call_audio_second_window_g1_ParamLimits

0x14e8,	// (0x0008e635) popup_call_audio_second_window_g1

0x1524,	// (0x0008e671) popup_call_audio_second_window_g2_ParamLimits

0x1524,	// (0x0008e671) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x0009c1c1) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x0009c1c1) popup_call_audio_second_window_g

0x1560,	// (0x0008e6ad) popup_call_audio_second_window_t1_ParamLimits

0x1560,	// (0x0008e6ad) popup_call_audio_second_window_t1

0x15e1,	// (0x0008e72e) popup_call_audio_second_window_t2_ParamLimits

0x15e1,	// (0x0008e72e) popup_call_audio_second_window_t2

0x1617,	// (0x0008e764) popup_call_audio_second_window_t3_ParamLimits

0x1617,	// (0x0008e764) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x0009c1c6) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x0009c1c6) popup_call_audio_second_window_t

0x1410,	// (0x0008e55d) bg_popup_call_pane_cp04

0x164d,	// (0x0008e79a) list_conf_pane

0x1655,	// (0x0008e7a2) popup_call_audio_conf_window_t1

0x1663,	// (0x0008e7b0) call_thumbnail_pane_g1

0x166b,	// (0x0008e7b8) bg_pinb_pane_ParamLimits

0x166b,	// (0x0008e7b8) bg_pinb_pane

0x1679,	// (0x0008e7c6) find_pinb_pane

0x166b,	// (0x0008e7b8) listscroll_pinb_pane_ParamLimits

0x166b,	// (0x0008e7b8) listscroll_pinb_pane

0x1683,	// (0x0008e7d0) pinb_bg_pane_g1

0x1683,	// (0x0008e7d0) pinb_bg_pane_g2

0x1683,	// (0x0008e7d0) pinb_bg_pane_g3

0x1683,	// (0x0008e7d0) pinb_bg_pane_g4

0x1683,	// (0x0008e7d0) pinb_bg_pane_g5

0x1683,	// (0x0008e7d0) pinb_bg_pane_g6

0x1683,	// (0x0008e7d0) pinb_bg_pane_g7

0x1683,	// (0x0008e7d0) pinb_bg_pane_g8

0x1683,	// (0x0008e7d0) pinb_bg_pane_g9

0x1683,	// (0x0008e7d0) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x0009c1cd) pinb_bg_pane_g

0x038f,	// (0x0008d4dc) grid_pinb_pane

0x038f,	// (0x0008d4dc) list_pinb_pane

0x1093,	// (0x0008e1e0) scroll_pane_cp01_ParamLimits

0x1093,	// (0x0008e1e0) scroll_pane_cp01

0x168d,	// (0x0008e7da) find_pinb_pane_g1_ParamLimits

0x168d,	// (0x0008e7da) find_pinb_pane_g1

0x16a5,	// (0x0008e7f2) find_pinb_pane_t1

0x16b7,	// (0x0008e804) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x0009c1e7) find_pinb_pane_t

0x16cc,	// (0x0008e819) input_focus_pane_cp01_ParamLimits

0x16cc,	// (0x0008e819) input_focus_pane_cp01

0x0472,	// (0x0008d5bf) cell_pinb_pane_ParamLimits

0x0472,	// (0x0008d5bf) cell_pinb_pane

0x16d8,	// (0x0008e825) cell_pinb_pane_g1_ParamLimits

0x16d8,	// (0x0008e825) cell_pinb_pane_g1

0x16e6,	// (0x0008e833) cell_pinb_pane_g2_ParamLimits

0x16e6,	// (0x0008e833) cell_pinb_pane_g2

0x16e6,	// (0x0008e833) cell_pinb_pane_g3_ParamLimits

0x16e6,	// (0x0008e833) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x0009c1ec) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x0009c1ec) cell_pinb_pane_g

0x1410,	// (0x0008e55d) grid_highlight_pane_cp01

0x0472,	// (0x0008d5bf) list_pinb_item_pane_ParamLimits

0x0472,	// (0x0008d5bf) list_pinb_item_pane

0x038f,	// (0x0008d4dc) list_highlight_pane_cp02

0x16f4,	// (0x0008e841) list_pinb_item_pane_g1_ParamLimits

0x16f4,	// (0x0008e841) list_pinb_item_pane_g1

0x16e6,	// (0x0008e833) list_pinb_item_pane_g2_ParamLimits

0x16e6,	// (0x0008e833) list_pinb_item_pane_g2

0x16d8,	// (0x0008e825) list_pinb_item_pane_g3_ParamLimits

0x16d8,	// (0x0008e825) list_pinb_item_pane_g3

0x16e6,	// (0x0008e833) list_pinb_item_pane_g4_ParamLimits

0x16e6,	// (0x0008e833) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x0009c1f3) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x0009c1f3) list_pinb_item_pane_g

0x1702,	// (0x0008e84f) list_pinb_item_pane_t1_ParamLimits

0x1702,	// (0x0008e84f) list_pinb_item_pane_t1

0x4418,	// (0x00091565) calc_display_pane

0x4436,	// (0x00091583) calc_paper_pane

0x4452,	// (0x0009159f) grid_calc_pane

0x038f,	// (0x0008d4dc) bg_list_pane_cp01

0x1d99,	// (0x0008eee6) clock_g1

0x1d99,	// (0x0008eee6) clock_g2

0x0001,

0xf0af,	// (0x0009c1fc) clock_g

0x1da3,	// (0x0008eef0) clock_t1_ParamLimits

0x1da3,	// (0x0008eef0) clock_t1

0x1db7,	// (0x0008ef04) clock_t2_ParamLimits

0x1db7,	// (0x0008ef04) clock_t2

0x1db7,	// (0x0008ef04) clock_t3_ParamLimits

0x1db7,	// (0x0008ef04) clock_t3

0x1db7,	// (0x0008ef04) clock_t4_ParamLimits

0x1db7,	// (0x0008ef04) clock_t4

0x1da3,	// (0x0008eef0) clock_t5_ParamLimits

0x1da3,	// (0x0008eef0) clock_t5

0x1db7,	// (0x0008ef04) clock_t6_ParamLimits

0x1db7,	// (0x0008ef04) clock_t6

0x1db7,	// (0x0008ef04) clock_t7_ParamLimits

0x1db7,	// (0x0008ef04) clock_t7

0x1db7,	// (0x0008ef04) clock_t8_ParamLimits

0x1db7,	// (0x0008ef04) clock_t8

0x1db7,	// (0x0008ef04) clock_t9_ParamLimits

0x1db7,	// (0x0008ef04) clock_t9

0x0008,

0xf0b4,	// (0x0009c201) clock_t_ParamLimits

0xf0b4,	// (0x0009c201) clock_t

0x038f,	// (0x0008d4dc) popup_clock_analogue_window_cp02

0x038f,	// (0x0008d4dc) popup_clock_digital_window_cp01

0x1410,	// (0x0008e55d) listscroll_help_pane

0x1410,	// (0x0008e55d) phob_pre_status_pane

0x1dcb,	// (0x0008ef18) grid_qdial_pane

0x166b,	// (0x0008e7b8) listscroll_mce_pane

0x166b,	// (0x0008e7b8) bg_notes_pane

0x1dd5,	// (0x0008ef22) list_notes_pane

0x447e,	// (0x000915cb) scroll_pane_cp06

0x1de3,	// (0x0008ef30) bg_calc_paper_pane

0x448d,	// (0x000915da) list_calc_pane

0x1df7,	// (0x0008ef44) bg_calc_display_pane

0x44a7,	// (0x000915f4) calc_display_pane_t1

0x44bc,	// (0x00091609) calc_display_pane_t2

0x44d1,	// (0x0009161e) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x0009c214) calc_display_pane_t

0x44e3,	// (0x00091630) cell_calc_pane_ParamLimits

0x44e3,	// (0x00091630) cell_calc_pane

0x1e03,	// (0x0008ef50) bg_calc_paper_pane_g1

0x1e1b,	// (0x0008ef68) bg_calc_paper_pane_g2

0x1e0f,	// (0x0008ef5c) bg_calc_paper_pane_g3

0x1e33,	// (0x0008ef80) bg_calc_paper_pane_g4

0x1e27,	// (0x0008ef74) bg_calc_paper_pane_g5

0x4512,	// (0x0009165f) bg_calc_paper_pane_g6

0x4523,	// (0x00091670) bg_calc_paper_pane_g7

0x4534,	// (0x00091681) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x0009c21b) bg_calc_paper_pane_g

0x4545,	// (0x00091692) calc_bg_paper_pane_g9

0x4556,	// (0x000916a3) list_calc_item_pane_ParamLimits

0x4556,	// (0x000916a3) list_calc_item_pane

0x1e3f,	// (0x0008ef8c) list_calc_item_pane_g1

0x4577,	// (0x000916c4) list_calc_item_pane_t1_ParamLimits

0x4577,	// (0x000916c4) list_calc_item_pane_t1

0x4589,	// (0x000916d6) list_calc_item_pane_t2_ParamLimits

0x4589,	// (0x000916d6) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x0009c22c) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x0009c22c) list_calc_item_pane_t

0x1683,	// (0x0008e7d0) cell_calc_pane_g1

0x1e4c,	// (0x0008ef99) grid_highlight_pane_cp02

0x0537,	// (0x0008d684) bg_calc_display_pane_g1

0x45b9,	// (0x00091706) bg_calc_display_pane_g2

0x0525,	// (0x0008d672) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x0009c236) bg_calc_display_pane_g

0x45c3,	// (0x00091710) cell_qdial_pane_ParamLimits

0x45c3,	// (0x00091710) cell_qdial_pane

0x45d9,	// (0x00091726) cell_qdial_pane_g1_ParamLimits

0x45d9,	// (0x00091726) cell_qdial_pane_g1

0x45e6,	// (0x00091733) cell_qdial_pane_g2_ParamLimits

0x45e6,	// (0x00091733) cell_qdial_pane_g2

0x1e6e,	// (0x0008efbb) cell_qdial_pane_g3_ParamLimits

0x1e6e,	// (0x0008efbb) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x0009c23d) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x0009c23d) cell_qdial_pane_g

0x4604,	// (0x00091751) cell_qdial_pane_t1_ParamLimits

0x4604,	// (0x00091751) cell_qdial_pane_t1

0x461c,	// (0x00091769) cell_qdial_pane_t2_ParamLimits

0x461c,	// (0x00091769) cell_qdial_pane_t2

0x462f,	// (0x0009177c) cell_qdial_pane_t3_ParamLimits

0x462f,	// (0x0009177c) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x0009c246) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x0009c246) cell_qdial_pane_t

0x1410,	// (0x0008e55d) grid_highlight_pane_cp04

0x1e7a,	// (0x0008efc7) thumbnail_qdial_pane_ParamLimits

0x1e7a,	// (0x0008efc7) thumbnail_qdial_pane

0x1ed6,	// (0x0008f023) list_help_pane

0x1edf,	// (0x0008f02c) scroll_pane_cp02

0x4642,	// (0x0009178f) help_list_pane_t1_ParamLimits

0x4642,	// (0x0009178f) help_list_pane_t1

0x4669,	// (0x000917b6) bg_notes_pane_g2

0x4671,	// (0x000917be) bg_notes_pane_g3

0x4679,	// (0x000917c6) notes_bg_pane_g1

0x4681,	// (0x000917ce) notes_bg_pane_g4

0x4689,	// (0x000917d6) notes_bg_pane_g5

0x4691,	// (0x000917de) notes_bg_pane_g6

0x4699,	// (0x000917e6) notes_bg_pane_g7

0x46a1,	// (0x000917ee) notes_bg_pane_g8

0x46a9,	// (0x000917f6) notes_bg_pane_g9

0x0006,

0xf117,	// (0x0009c264) notes_bg_pane_g

0x46b1,	// (0x000917fe) list_notes_text_pane_ParamLimits

0x46b1,	// (0x000917fe) list_notes_text_pane

0x1ee8,	// (0x0008f035) list_notes_text_pane_g1

0xe4f2,	// (0x0009b63f) list_notes_text_pane_t1

0x46d9,	// (0x00091826) listscroll_cale_week_pane

0x4705,	// (0x00091852) bg_cale_heading_pane

0x472e,	// (0x0009187b) bg_cale_pane_cp01

0x4750,	// (0x0009189d) cale_week_corner_pane

0x476f,	// (0x000918bc) cale_week_day_heading_pane

0x479d,	// (0x000918ea) cale_week_scroll_pane_g1

0x47c1,	// (0x0009190e) cale_week_scroll_pane_g2

0x47d9,	// (0x00091926) cale_week_scroll_pane_g3

0x47f1,	// (0x0009193e) cale_week_scroll_pane_g4

0x4809,	// (0x00091956) cale_week_scroll_pane_g5

0x4821,	// (0x0009196e) cale_week_scroll_pane_g6

0x4841,	// (0x0009198e) cale_week_scroll_pane_g7

0x4861,	// (0x000919ae) cale_week_scroll_pane_g8

0x4881,	// (0x000919ce) cale_week_scroll_pane_g9

0x489e,	// (0x000919eb) cale_week_scroll_pane_g10

0x48bb,	// (0x00091a08) cale_week_scroll_pane_g11

0x48da,	// (0x00091a27) cale_week_scroll_pane_g12

0x48ff,	// (0x00091a4c) cale_week_scroll_pane_g13

0x4928,	// (0x00091a75) cale_week_scroll_pane_g14

0x4951,	// (0x00091a9e) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x0009c273) cale_week_scroll_pane_g

0x499a,	// (0x00091ae7) cale_week_time_pane

0x49ba,	// (0x00091b07) grid_cale_week_pane

0x1f1d,	// (0x0008f06a) scroll_pane_cp08

0x49eb,	// (0x00091b38) cell_cale_week_pane_ParamLimits

0x49eb,	// (0x00091b38) cell_cale_week_pane

0x4a7b,	// (0x00091bc8) cale_week_day_heading_pane_t1

0x4aa3,	// (0x00091bf0) cale_week_day_heading_pane_t2

0x4ad0,	// (0x00091c1d) cale_week_day_heading_pane_t3

0x4afd,	// (0x00091c4a) cale_week_day_heading_pane_t4

0x4b2a,	// (0x00091c77) cale_week_day_heading_pane_t5

0x4b57,	// (0x00091ca4) cale_week_day_heading_pane_t6

0x4b84,	// (0x00091cd1) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x0009c294) cale_week_day_heading_pane_t

0x1f3a,	// (0x0008f087) bg_cale_side_pane

0x4bac,	// (0x00091cf9) cale_week_time_pane_t1

0x4bd0,	// (0x00091d1d) cale_week_time_pane_t2

0x4bf4,	// (0x00091d41) cale_week_time_pane_t3

0x4c18,	// (0x00091d65) cale_week_time_pane_t4

0x4c3c,	// (0x00091d89) cale_week_time_pane_t5

0x4c62,	// (0x00091daf) cale_week_time_pane_t6

0x4c8a,	// (0x00091dd7) cale_week_time_pane_t7

0x4cb6,	// (0x00091e03) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x0009c2a3) cale_week_time_pane_t

0x4ce6,	// (0x00091e33) cell_cale_week_pane_g2

0x4d0a,	// (0x00091e57) cell_cale_week_pane_g3_ParamLimits

0x4d0a,	// (0x00091e57) cell_cale_week_pane_g3

0x1f48,	// (0x0008f095) grid_highlight_pane_cp07

0x1f50,	// (0x0008f09d) listscroll_gms_pane

0x1f5a,	// (0x0008f0a7) grid_gms_pane

0x1f63,	// (0x0008f0b0) listscroll_gms_pane_g1

0x1f6b,	// (0x0008f0b8) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x0009c2b4) listscroll_gms_pane_g

0x4d22,	// (0x00091e6f) scroll_pane_cp010

0x4d2d,	// (0x00091e7a) cell_gms_pane_ParamLimits

0x4d2d,	// (0x00091e7a) cell_gms_pane

0x4d40,	// (0x00091e8d) cell_gms_pane_g1

0x1f73,	// (0x0008f0c0) cell_gms_pane_g2

0x1f7b,	// (0x0008f0c8) cell_gms_pane_g3

0x1f84,	// (0x0008f0d1) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x0009c2b9) cell_gms_pane_g

0x1f8d,	// (0x0008f0da) grid_highlight_pane_cp09

0x6e3f,	// (0x00093f8c) phob_pre_status_pane_g1

0x6e47,	// (0x00093f94) phob_pre_status_pane_g2

0x6e4f,	// (0x00093f9c) phob_pre_status_pane_g3

0x6e57,	// (0x00093fa4) phob_pre_status_pane_g4

0x0004,

0xf525,	// (0x0009c672) phob_pre_status_pane_g

0x6e67,	// (0x00093fb4) phob_pre_status_pane_t1

0x6e77,	// (0x00093fc4) phob_pre_status_pane_t2

0x6e87,	// (0x00093fd4) phob_pre_status_pane_t3

0x0002,

0xf530,	// (0x0009c67d) phob_pre_status_pane_t

0x1f95,	// (0x0008f0e2) bg_list_pane_cp05

0x4d50,	// (0x00091e9d) grid_vorec_pane

0x4d5a,	// (0x00091ea7) vorec_t1

0x4d68,	// (0x00091eb5) vorec_t2

0x4d76,	// (0x00091ec3) vorec_t3

0x4d84,	// (0x00091ed1) vorec_t4

0xc0e5,	// (0x00099232) vorec_t5

0xc0f3,	// (0x00099240) vorec_t6

0x0004,

0xf175,	// (0x0009c2c2) vorec_t

0xc101,	// (0x0009924e) wait_bar_pane_cp01

0x4da0,	// (0x00091eed) cell_vorec_pane_ParamLimits

0x4da0,	// (0x00091eed) cell_vorec_pane

0x4db5,	// (0x00091f02) cell_vorec_pane_g1

0x1410,	// (0x0008e55d) grid_highlight_pane_cp05

0x0472,	// (0x0008d5bf) cams_zoom_pane

0x0472,	// (0x0008d5bf) image_vga_pane

0x16e6,	// (0x0008e833) main_camera_pane_g1

0x16e6,	// (0x0008e833) main_camera_pane_g2

0x16e6,	// (0x0008e833) main_camera_pane_g3

0x16e6,	// (0x0008e833) main_camera_pane_g4

0x16e6,	// (0x0008e833) main_camera_pane_g5

0x16e6,	// (0x0008e833) main_camera_pane_g6

0x16e6,	// (0x0008e833) main_camera_pane_g7

0x0007,

0xf180,	// (0x0009c2cd) main_camera_pane_g

0x1db7,	// (0x0008ef04) main_camera_pane_t1

0x1db7,	// (0x0008ef04) main_camera_pane_t2

0x0001,

0xf191,	// (0x0009c2de) main_camera_pane_t

0x4dbf,	// (0x00091f0c) cams_zoom_pane_cp_ParamLimits

0x4dbf,	// (0x00091f0c) cams_zoom_pane_cp

0x4ded,	// (0x00091f3a) image_cif_pane_ParamLimits

0x4ded,	// (0x00091f3a) image_cif_pane

0x038f,	// (0x0008d4dc) image_subqcif_pane

0x4dfb,	// (0x00091f48) main_video_pane_g1_ParamLimits

0x4dfb,	// (0x00091f48) main_video_pane_g1

0x4e23,	// (0x00091f70) main_video_pane_g2_ParamLimits

0x4e23,	// (0x00091f70) main_video_pane_g2

0x4e56,	// (0x00091fa3) main_video_pane_g3_ParamLimits

0x4e56,	// (0x00091fa3) main_video_pane_g3

0x4e56,	// (0x00091fa3) main_video_pane_g4_ParamLimits

0x4e56,	// (0x00091fa3) main_video_pane_g4

0x4e84,	// (0x00091fd1) main_video_pane_g5_ParamLimits

0x4e84,	// (0x00091fd1) main_video_pane_g5

0x1f9d,	// (0x0008f0ea) main_video_pane_g6_ParamLimits

0x1f9d,	// (0x0008f0ea) main_video_pane_g6

0x0006,

0xf196,	// (0x0009c2e3) main_video_pane_g_ParamLimits

0xf196,	// (0x0009c2e3) main_video_pane_g

0x4ea0,	// (0x00091fed) main_video_pane_t1_ParamLimits

0x4ea0,	// (0x00091fed) main_video_pane_t1

0x1d99,	// (0x0008eee6) cams_zoom_pane_g1

0x1d99,	// (0x0008eee6) cams_zoom_pane_g2

0x1d99,	// (0x0008eee6) cams_zoom_pane_g3

0x1d99,	// (0x0008eee6) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x0009c2f2) cams_zoom_pane_g

0x0472,	// (0x0008d5bf) grid_cams_pane

0x0472,	// (0x0008d5bf) linegrid_cams_pane

0x4eda,	// (0x00092027) cell_cams_pane_ParamLimits

0x4eda,	// (0x00092027) cell_cams_pane

0x038f,	// (0x0008d4dc) cams_burst_image_pane

0x1d99,	// (0x0008eee6) cell_cams_pane_g1

0x038f,	// (0x0008d4dc) grid_highlight_pane_cp03

0x1683,	// (0x0008e7d0) mp_bg_pane_g1

0x038f,	// (0x0008d4dc) bg_list_pane_cp03

0x038f,	// (0x0008d4dc) bg_mp_pane

0x038f,	// (0x0008d4dc) grid_mp_pane

0x1d99,	// (0x0008eee6) media_player_g1

0x2af5,	// (0x0008fc42) media_player_t1

0x2af5,	// (0x0008fc42) media_player_t2

0x2af5,	// (0x0008fc42) media_player_t3

0x2af5,	// (0x0008fc42) media_player_t4

0x2af5,	// (0x0008fc42) media_player_t5

0x2af5,	// (0x0008fc42) media_player_t6

0x2af5,	// (0x0008fc42) media_player_t7

0x0006,

0xf50f,	// (0x0009c65c) media_player_t

0x038f,	// (0x0008d4dc) wait_bar_pane_cp02

0xf4f4,	// (0x0009c641) main_usb_pane_t

0x2d60,	// (0x0008fead) cell_mp_pane

0x1683,	// (0x0008e7d0) cell_mp_pane_g1

0x1410,	// (0x0008e55d) grid_highlight_pane_cp06

0x1fb7,	// (0x0008f104) grid_skin_colour_pane

0x1fbf,	// (0x0008f10c) list_highlight_pane_cp03

0x4eef,	// (0x0009203c) skin_g1

0x1fc7,	// (0x0008f114) skin_t1

0x1fd6,	// (0x0008f123) skin_t2

0x0001,

0xf1d3,	// (0x0009c320) skin_t

0x4ef9,	// (0x00092046) cell_skin_colour_pane_ParamLimits

0x4ef9,	// (0x00092046) cell_skin_colour_pane

0x1fe4,	// (0x0008f131) cell_skin_colour_pane_g1

0x4f79,	// (0x000920c6) call_video_g1_ParamLimits

0x4f79,	// (0x000920c6) call_video_g1

0x4f89,	// (0x000920d6) call_video_g2_ParamLimits

0x4f89,	// (0x000920d6) call_video_g2

0x0001,

0xf1d8,	// (0x0009c325) call_video_g_ParamLimits

0xf1d8,	// (0x0009c325) call_video_g

0x4fd9,	// (0x00092126) call_video_uplink_pane_cp1_ParamLimits

0x4fd9,	// (0x00092126) call_video_uplink_pane_cp1

0x1ff6,	// (0x0008f143) call_video_uplink_pane_cp2

0x50a7,	// (0x000921f4) video_down_crop_pane_ParamLimits

0x50a7,	// (0x000921f4) video_down_crop_pane

0x5199,	// (0x000922e6) video_down_pane_ParamLimits

0x5199,	// (0x000922e6) video_down_pane

0x1ffe,	// (0x0008f14b) video_down_subqcif_pane_ParamLimits

0x1ffe,	// (0x0008f14b) video_down_subqcif_pane

0x2018,	// (0x0008f165) video_down_subqcif_pane_cp_ParamLimits

0x2018,	// (0x0008f165) video_down_subqcif_pane_cp

0x2040,	// (0x0008f18d) im_reading_pane_ParamLimits

0x2040,	// (0x0008f18d) im_reading_pane

0x52b6,	// (0x00092403) im_writing_pane_ParamLimits

0x52b6,	// (0x00092403) im_writing_pane

0x52d4,	// (0x00092421) im_reading_pane_t1

0x205a,	// (0x0008f1a7) list_im_pane

0x206b,	// (0x0008f1b8) scroll_pane_cp07

0x5316,	// (0x00092463) im_writing_pane_t1_ParamLimits

0x5316,	// (0x00092463) im_writing_pane_t1

0x2084,	// (0x0008f1d1) im_writing_pane_t2_ParamLimits

0x2084,	// (0x0008f1d1) im_writing_pane_t2

0x0001,

0xf1e2,	// (0x0009c32f) im_writing_pane_t_ParamLimits

0xf1e2,	// (0x0009c32f) im_writing_pane_t

0x1410,	// (0x0008e55d) input_focus_pane_cp04

0x1410,	// (0x0008e55d) input_focus_pane_cp05

0x5328,	// (0x00092475) list_im_single_pane_ParamLimits

0x5328,	// (0x00092475) list_im_single_pane

0x20a1,	// (0x0008f1ee) list_single_im_pane_t1

0x1f95,	// (0x0008f0e2) blid_accuracy_pane

0x1f95,	// (0x0008f0e2) blid_compass_pane

0xddf3,	// (0x0009af40) main_location_t1

0xddf3,	// (0x0009af40) main_location_t2

0xddf3,	// (0x0009af40) main_location_t3

0x0002,

0xf51e,	// (0x0009c66b) main_location_t

0x1410,	// (0x0008e55d) aid_levels_location

0x1683,	// (0x0008e7d0) blid_accuracy_pane_g1

0x1683,	// (0x0008e7d0) blid_accuracy_pane_g2

0x0001,

0xf236,	// (0x0009c383) blid_accuracy_pane_g

0x20db,	// (0x0008f228) wml_content_pane

0x2119,	// (0x0008f266) wml_button_pane_ParamLimits

0x2119,	// (0x0008f266) wml_button_pane

0x5341,	// (0x0009248e) wml_list_single_large_pane_ParamLimits

0x5341,	// (0x0009248e) wml_list_single_large_pane

0x5363,	// (0x000924b0) wml_list_single_medium_pane_ParamLimits

0x5363,	// (0x000924b0) wml_list_single_medium_pane

0x5386,	// (0x000924d3) wml_list_single_small_pane_ParamLimits

0x5386,	// (0x000924d3) wml_list_single_small_pane

0x212d,	// (0x0008f27a) wml_selection_box_pane_ParamLimits

0x212d,	// (0x0008f27a) wml_selection_box_pane

0x2140,	// (0x0008f28d) wml_list_single_pane_t1

0x214f,	// (0x0008f29c) wml_list_single_medium_pane_t1

0x215e,	// (0x0008f2ab) wml_list_single_large_pane_t1

0x216d,	// (0x0008f2ba) input_focus_pane_cp02_ParamLimits

0x216d,	// (0x0008f2ba) input_focus_pane_cp02

0x2180,	// (0x0008f2cd) wml_selection_box_pane_g1

0x2189,	// (0x0008f2d6) wml_selection_box_pane_t1_ParamLimits

0x2189,	// (0x0008f2d6) wml_selection_box_pane_t1

0x166b,	// (0x0008e7b8) bg_wml_button_pane_ParamLimits

0x166b,	// (0x0008e7b8) bg_wml_button_pane

0x21a1,	// (0x0008f2ee) wml_button_pane_g1

0x21a9,	// (0x0008f2f6) wml_button_pane_t1

0x21a1,	// (0x0008f2ee) wml_button_bg_pane_g1

0x21b9,	// (0x0008f306) wml_button_bg_pane_g2

0x21c1,	// (0x0008f30e) wml_button_bg_pane_g3

0x21c9,	// (0x0008f316) wml_button_bg_pane_g4

0x21d1,	// (0x0008f31e) wml_button_bg_pane_g5

0x21d9,	// (0x0008f326) wml_button_bg_pane_g6

0x21e1,	// (0x0008f32e) wml_button_bg_pane_g7

0x21e9,	// (0x0008f336) wml_button_bg_pane_g8

0x21f1,	// (0x0008f33e) wml_button_bg_pane_g9

0x0008,

0xf1e7,	// (0x0009c334) wml_button_bg_pane_g

0x53ae,	// (0x000924fb) bg_list_pane_cp02

0x21f9,	// (0x0008f346) mce_header_pane_ParamLimits

0x21f9,	// (0x0008f346) mce_header_pane

0x220f,	// (0x0008f35c) mce_icon_pane

0x220f,	// (0x0008f35c) mce_image_pane

0x2218,	// (0x0008f365) mce_text_pane_ParamLimits

0x2218,	// (0x0008f365) mce_text_pane

0x53b8,	// (0x00092505) scroll_pane_cp03

0x2111,	// (0x0008f25e) scroll_pane_cp04

0x222b,	// (0x0008f378) scroll_pane_cp05_ParamLimits

0x222b,	// (0x0008f378) scroll_pane_cp05

0x53c2,	// (0x0009250f) mce_header_field_pane_ParamLimits

0x53c2,	// (0x0009250f) mce_header_field_pane

0x53e4,	// (0x00092531) mce_header_field_pane_2_ParamLimits

0x53e4,	// (0x00092531) mce_header_field_pane_2

0x53fa,	// (0x00092547) mce_header_field_pane_3

0x5402,	// (0x0009254f) list_single_mce_message_pane_ParamLimits

0x5402,	// (0x0009254f) list_single_mce_message_pane

0x5421,	// (0x0009256e) list_single_mce_smart_pane_ParamLimits

0x5421,	// (0x0009256e) list_single_mce_smart_pane

0x2237,	// (0x0008f384) input_focus_pane_cp03

0x2240,	// (0x0008f38d) list_header_data_pane

0x544b,	// (0x00092598) mce_header_field_pane_t1

0x545b,	// (0x000925a8) list_single_mce_header_pane_ParamLimits

0x545b,	// (0x000925a8) list_single_mce_header_pane

0x2248,	// (0x0008f395) list_single_mce_header_pane_t1

0x2257,	// (0x0008f3a4) list_single_mce_message_pane_g1

0x225f,	// (0x0008f3ac) list_single_mce_message_pane_t1

0x549f,	// (0x000925ec) bg_cale_heading_pane_cp01_ParamLimits

0x549f,	// (0x000925ec) bg_cale_heading_pane_cp01

0x226d,	// (0x0008f3ba) bg_cale_pane_cp02_ParamLimits

0x226d,	// (0x0008f3ba) bg_cale_pane_cp02

0x54f1,	// (0x0009263e) cale_month_corner_pane

0x5510,	// (0x0009265d) cale_month_day_heading_pane_ParamLimits

0x5510,	// (0x0009265d) cale_month_day_heading_pane

0x5572,	// (0x000926bf) cale_month_pane_g1_ParamLimits

0x5572,	// (0x000926bf) cale_month_pane_g1

0x55b9,	// (0x00092706) cale_month_pane_g2_ParamLimits

0x55b9,	// (0x00092706) cale_month_pane_g2

0x55f1,	// (0x0009273e) cale_month_pane_g3_ParamLimits

0x55f1,	// (0x0009273e) cale_month_pane_g3

0x5645,	// (0x00092792) cale_month_pane_g4_ParamLimits

0x5645,	// (0x00092792) cale_month_pane_g4

0x5699,	// (0x000927e6) cale_month_pane_g5_ParamLimits

0x5699,	// (0x000927e6) cale_month_pane_g5

0x56ed,	// (0x0009283a) cale_month_pane_g6_ParamLimits

0x56ed,	// (0x0009283a) cale_month_pane_g6

0x5751,	// (0x0009289e) cale_month_pane_g7_ParamLimits

0x5751,	// (0x0009289e) cale_month_pane_g7

0x57b5,	// (0x00092902) cale_month_pane_g8_ParamLimits

0x57b5,	// (0x00092902) cale_month_pane_g8

0x5819,	// (0x00092966) cale_month_pane_g9_ParamLimits

0x5819,	// (0x00092966) cale_month_pane_g9

0x5873,	// (0x000929c0) cale_month_pane_g10_ParamLimits

0x5873,	// (0x000929c0) cale_month_pane_g10

0x58c5,	// (0x00092a12) cale_month_pane_g11_ParamLimits

0x58c5,	// (0x00092a12) cale_month_pane_g11

0x5913,	// (0x00092a60) cale_month_pane_g12_ParamLimits

0x5913,	// (0x00092a60) cale_month_pane_g12

0x5963,	// (0x00092ab0) cale_month_pane_g13_ParamLimits

0x5963,	// (0x00092ab0) cale_month_pane_g13

0x000c,

0xf1fa,	// (0x0009c347) cale_month_pane_g_ParamLimits

0xf1fa,	// (0x0009c347) cale_month_pane_g

0x59b3,	// (0x00092b00) cale_month_week_pane

0x59d3,	// (0x00092b20) grid_cale_month_pane_ParamLimits

0x59d3,	// (0x00092b20) grid_cale_month_pane

0x5a2c,	// (0x00092b79) cale_month_day_heading_pane_t1

0x5aae,	// (0x00092bfb) cale_month_day_heading_pane_t2

0x5b27,	// (0x00092c74) cale_month_day_heading_pane_t3

0x5ba0,	// (0x00092ced) cale_month_day_heading_pane_t4

0x5c19,	// (0x00092d66) cale_month_day_heading_pane_t5

0x5c9a,	// (0x00092de7) cale_month_day_heading_pane_t6

0x5d23,	// (0x00092e70) cale_month_day_heading_pane_t7

0x0006,

0xf215,	// (0x0009c362) cale_month_day_heading_pane_t

0x1f3a,	// (0x0008f087) bg_cale_side_pane_cp01

0x5dac,	// (0x00092ef9) cale_month_week_pane_t1

0x5dc5,	// (0x00092f12) cale_month_week_pane_t2

0x5dde,	// (0x00092f2b) cale_month_week_pane_t3

0x5df7,	// (0x00092f44) cale_month_week_pane_t4

0x5e10,	// (0x00092f5d) cale_month_week_pane_t5

0x5e2d,	// (0x00092f7a) cale_month_week_pane_t6

0x0005,

0xf224,	// (0x0009c371) cale_month_week_pane_t

0x5e50,	// (0x00092f9d) cell_cale_month_pane_ParamLimits

0x5e50,	// (0x00092f9d) cell_cale_month_pane

0x5f7e,	// (0x000930cb) cell_cale_month_pane_g1

0x5f8a,	// (0x000930d7) cell_cale_month_pane_t1_ParamLimits

0x5f8a,	// (0x000930d7) cell_cale_month_pane_t1

0x1f48,	// (0x0008f095) grid_highlight_pane_cp08

0x1683,	// (0x0008e7d0) main_smil_g1

0x5fb6,	// (0x00093103) smil_status_pane

0x22ac,	// (0x0008f3f9) smil_text_pane

0xdd09,	// (0x0009ae56) bg_popup_call3_rect_pane_g8

0xdd11,	// (0x0009ae5e) bg_popup_call3_rect_pane_g9

0x0008,

0xf4b2,	// (0x0009c5ff) bg_popup_call3_rect_pane_g

0xdebc,	// (0x0009b009) smil_status_volume_pane_g1

0x22b6,	// (0x0008f403) smil_status_pane_t1

0x721c,	// (0x00094369) volume_smil_pane

0x22cd,	// (0x0008f41a) list_smil_text_pane

0x5fc9,	// (0x00093116) scroll_pane_cp011

0x5fd4,	// (0x00093121) smil_text_list_pane_t1_ParamLimits

0x5fd4,	// (0x00093121) smil_text_list_pane_t1

0x6028,	// (0x00093175) aid_volume_smil_ParamLimits

0x6028,	// (0x00093175) aid_volume_smil

0x1683,	// (0x0008e7d0) smil_volume_pane_g1

0x1683,	// (0x0008e7d0) smil_volume_pane_g2

0x0001,

0xf236,	// (0x0009c383) smil_volume_pane_g

0x46d9,	// (0x00091826) listscroll_cale_day_pane

0x22d7,	// (0x0008f424) bg_cale_pane

0x22ef,	// (0x0008f43c) list_cale_pane

0x2312,	// (0x0008f45f) scroll_pane_cp09

0x2323,	// (0x0008f470) cale_bg_pane_g1

0x232b,	// (0x0008f478) cale_bg_pane_g2

0x2333,	// (0x0008f480) cale_bg_pane_g3

0x233b,	// (0x0008f488) cale_bg_pane_g4

0x2343,	// (0x0008f490) cale_bg_pane_g5

0x234b,	// (0x0008f498) cale_bg_pane_g6

0x2353,	// (0x0008f4a0) cale_bg_pane_g7

0x235b,	// (0x0008f4a8) cale_bg_pane_g8

0x2363,	// (0x0008f4b0) cale_bg_pane_g9

0x0008,

0xf23b,	// (0x0009c388) cale_bg_pane_g

0x236b,	// (0x0008f4b8) list_cale_time_pane_ParamLimits

0x236b,	// (0x0008f4b8) list_cale_time_pane

0x2382,	// (0x0008f4cf) list_cale_time_pane_g1_ParamLimits

0x2382,	// (0x0008f4cf) list_cale_time_pane_g1

0x238e,	// (0x0008f4db) list_cale_time_pane_g2_ParamLimits

0x238e,	// (0x0008f4db) list_cale_time_pane_g2

0x6052,	// (0x0009319f) list_cale_time_pane_g3_ParamLimits

0x6052,	// (0x0009319f) list_cale_time_pane_g3

0x6060,	// (0x000931ad) list_cale_time_pane_g4_ParamLimits

0x6060,	// (0x000931ad) list_cale_time_pane_g4

0x606e,	// (0x000931bb) list_cale_time_pane_g5_ParamLimits

0x606e,	// (0x000931bb) list_cale_time_pane_g5

0x0005,

0xf24e,	// (0x0009c39b) list_cale_time_pane_g_ParamLimits

0xf24e,	// (0x0009c39b) list_cale_time_pane_g

0x23a8,	// (0x0008f4f5) list_cale_time_pane_t1_ParamLimits

0x23a8,	// (0x0008f4f5) list_cale_time_pane_t1

0x23d0,	// (0x0008f51d) list_cale_time_pane_t2_ParamLimits

0x23d0,	// (0x0008f51d) list_cale_time_pane_t2

0x6340,	// (0x0009348d) aid_blid_cardinal_pane

0x6382,	// (0x000934cf) compass_pane_t4

0x23f8,	// (0x0008f545) list_cale_time_pane_t4_ParamLimits

0x23f8,	// (0x0008f545) list_cale_time_pane_t4

0x6390,	// (0x000934dd) compass_pane_t5

0x63a0,	// (0x000934ed) compass_pane_t6

0x63ae,	// (0x000934fb) compass_pane_t7

0x2e10,	// (0x0008ff5d) navi_pane_cc_t1

0x2f5d,	// (0x000900aa) aid_phob_thumbnail_center_pane

0x6974,	// (0x00093ac1) main_postcard_pane_g4_ParamLimits

0x0002,

0xf25b,	// (0x0009c3a8) list_cale_time_pane_t_ParamLimits

0xf25b,	// (0x0009c3a8) list_cale_time_pane_t

0x0438,	// (0x0008d585) bg_popup_window_pane_cp02_ParamLimits

0x0438,	// (0x0008d585) bg_popup_window_pane_cp02

0x2420,	// (0x0008f56d) heading_pane_cp01_ParamLimits

0x2420,	// (0x0008f56d) heading_pane_cp01

0x242c,	// (0x0008f579) loc_req_pane_ParamLimits

0x242c,	// (0x0008f579) loc_req_pane

0x243c,	// (0x0008f589) loc_type_pane_ParamLimits

0x243c,	// (0x0008f589) loc_type_pane

0x244e,	// (0x0008f59b) loc_type_pane_t1_ParamLimits

0x244e,	// (0x0008f59b) loc_type_pane_t1

0x2460,	// (0x0008f5ad) loc_type_pane_t2_ParamLimits

0x2460,	// (0x0008f5ad) loc_type_pane_t2

0x2472,	// (0x0008f5bf) loc_type_pane_t3_ParamLimits

0x2472,	// (0x0008f5bf) loc_type_pane_t3

0x0002,

0xf262,	// (0x0009c3af) loc_type_pane_t_ParamLimits

0xf262,	// (0x0009c3af) loc_type_pane_t

0x2484,	// (0x0008f5d1) list_loc_req_pane

0x248e,	// (0x0008f5db) scroll_pane_cp012

0x607c,	// (0x000931c9) list_single_loc_request_popup_menu_pane_ParamLimits

0x607c,	// (0x000931c9) list_single_loc_request_popup_menu_pane

0x2499,	// (0x0008f5e6) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x2499,	// (0x0008f5e6) list_single_loc_request_popup_menu_pane_g1

0x24a5,	// (0x0008f5f2) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x24a5,	// (0x0008f5f2) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf269,	// (0x0009c3b6) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf269,	// (0x0009c3b6) list_single_loc_request_popup_menu_pane_g

0x2aab,	// (0x0008fbf8) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x2aab,	// (0x0008fbf8) list_single_loc_request_popup_menu_pane_t1

0x608e,	// (0x000931db) bg_popup_window_pane_cp03_ParamLimits

0x608e,	// (0x000931db) bg_popup_window_pane_cp03

0x609c,	// (0x000931e9) heading_loc_req_pane_ParamLimits

0x609c,	// (0x000931e9) heading_loc_req_pane

0x60a8,	// (0x000931f5) popup_dyc_status_message_window_g1_ParamLimits

0x60a8,	// (0x000931f5) popup_dyc_status_message_window_g1

0x60b4,	// (0x00093201) popup_dyc_status_message_window_t1_ParamLimits

0x60b4,	// (0x00093201) popup_dyc_status_message_window_t1

0x60c6,	// (0x00093213) popup_dyc_status_message_window_t2_ParamLimits

0x60c6,	// (0x00093213) popup_dyc_status_message_window_t2

0x60d8,	// (0x00093225) popup_dyc_status_message_window_t3_ParamLimits

0x60d8,	// (0x00093225) popup_dyc_status_message_window_t3

0x0002,

0xf26e,	// (0x0009c3bb) popup_dyc_status_message_window_t_ParamLimits

0xf26e,	// (0x0009c3bb) popup_dyc_status_message_window_t

0x1410,	// (0x0008e55d) bg_heading_pane_cp01

0x2acd,	// (0x0008fc1a) heading_loc_req_pane_g1

0x2ad5,	// (0x0008fc22) heading_loc_req_pane_g2

0x2add,	// (0x0008fc2a) heading_loc_req_pane_g3

0x0002,

0xf275,	// (0x0009c3c2) heading_loc_req_pane_g

0x2ae5,	// (0x0008fc32) heading_loc_req_pane_t1

0x2b05,	// (0x0008fc52) bg_popup_sub_pane_cp01_ParamLimits

0x2b05,	// (0x0008fc52) bg_popup_sub_pane_cp01

0x2b13,	// (0x0008fc60) popup_cale_events_window_g1_ParamLimits

0x2b13,	// (0x0008fc60) popup_cale_events_window_g1

0x2b33,	// (0x0008fc80) popup_cale_events_window_g2_ParamLimits

0x2b33,	// (0x0008fc80) popup_cale_events_window_g2

0x0001,

0xf297,	// (0x0009c3e4) popup_cale_events_window_g_ParamLimits

0xf297,	// (0x0009c3e4) popup_cale_events_window_g

0x2b53,	// (0x0008fca0) popup_cale_events_window_t1_ParamLimits

0x2b53,	// (0x0008fca0) popup_cale_events_window_t1

0x2b65,	// (0x0008fcb2) popup_cale_events_window_t2_ParamLimits

0x2b65,	// (0x0008fcb2) popup_cale_events_window_t2

0x2ba3,	// (0x0008fcf0) popup_cale_events_window_t3_ParamLimits

0x2ba3,	// (0x0008fcf0) popup_cale_events_window_t3

0x2bdd,	// (0x0008fd2a) popup_cale_events_window_t4_ParamLimits

0x2bdd,	// (0x0008fd2a) popup_cale_events_window_t4

0x0003,

0xf29c,	// (0x0009c3e9) popup_cale_events_window_t_ParamLimits

0xf29c,	// (0x0009c3e9) popup_cale_events_window_t

0x6102,	// (0x0009324f) call_type_pane

0x317f,	// (0x000902cc) popup_call_status_window_g1

0x610e,	// (0x0009325b) popup_call_status_window_g2

0x611a,	// (0x00093267) popup_call_status_window_g3

0x0002,

0xf2a5,	// (0x0009c3f2) popup_call_status_window_g

0x2c13,	// (0x0008fd60) call_type_pane_g1

0x2c1c,	// (0x0008fd69) call_type_pane_g2

0x0001,

0xf2ac,	// (0x0009c3f9) call_type_pane_g

0x1410,	// (0x0008e55d) bg_popup_sub_pane_cp02

0x2c25,	// (0x0008fd72) listscroll_popup_wml_pane

0x2c2d,	// (0x0008fd7a) list_wml_pane

0x2c37,	// (0x0008fd84) scroll_pane_cp013

0x2c42,	// (0x0008fd8f) list_single_graphic_popup_wml_pane_ParamLimits

0x2c42,	// (0x0008fd8f) list_single_graphic_popup_wml_pane

0x1683,	// (0x0008e7d0) list_single_graphic_popup_wml_pane_g1

0x2c56,	// (0x0008fda3) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b1,	// (0x0009c3fe) list_single_graphic_popup_wml_pane_g

0x2c5e,	// (0x0008fdab) list_single_graphic_popup_wml_pane_t1

0x2c6c,	// (0x0008fdb9) aid_call_pane

0x1663,	// (0x0008e7b0) popup_clock_analogue_window_g1

0x1663,	// (0x0008e7b0) popup_clock_analogue_window_g2

0x6126,	// (0x00093273) popup_clock_analogue_window_g3

0x6126,	// (0x00093273) popup_clock_analogue_window_g4

0x1683,	// (0x0008e7d0) popup_clock_analogue_window_g5

0x0004,

0xf2b6,	// (0x0009c403) popup_clock_analogue_window_g

0x612e,	// (0x0009327b) popup_clock_analogue_window_t1

0x613c,	// (0x00093289) clock_digital_number_pane_ParamLimits

0x613c,	// (0x00093289) clock_digital_number_pane

0x6148,	// (0x00093295) clock_digital_number_pane_cp02_ParamLimits

0x6148,	// (0x00093295) clock_digital_number_pane_cp02

0x6154,	// (0x000932a1) clock_digital_number_pane_cp03_ParamLimits

0x6154,	// (0x000932a1) clock_digital_number_pane_cp03

0x6160,	// (0x000932ad) clock_digital_number_pane_cp04_ParamLimits

0x6160,	// (0x000932ad) clock_digital_number_pane_cp04

0x616c,	// (0x000932b9) clock_digital_separator_pane_ParamLimits

0x616c,	// (0x000932b9) clock_digital_separator_pane

0x6178,	// (0x000932c5) popup_clock_digital_window_t1

0x1683,	// (0x0008e7d0) clock_digital_number_pane_g1

0x1683,	// (0x0008e7d0) clock_digital_number_pane_g2

0x0001,

0xf236,	// (0x0009c383) clock_digital_number_pane_g

0x1683,	// (0x0008e7d0) clock_digital_separator_pane_g1

0x1683,	// (0x0008e7d0) clock_digital_separator_pane_g2

0x0001,

0xf236,	// (0x0009c383) clock_digital_separator_pane_g

0x1410,	// (0x0008e55d) bg_popup_window_pane_cp04

0x2c7c,	// (0x0008fdc9) heading_pane_cp03

0x1f95,	// (0x0008f0e2) listscroll_popup_gms_pane

0x1410,	// (0x0008e55d) grid_large_graphic_popup_pane

0x2c85,	// (0x0008fdd2) listscroll_popup_gms_pane_g1

0x2c8e,	// (0x0008fddb) listscroll_popup_gms_pane_g2

0x0001,

0xf2c1,	// (0x0009c40e) listscroll_popup_gms_pane_g

0x2c97,	// (0x0008fde4) scroll_pane_cp014

0x0472,	// (0x0008d5bf) cell_large_graphic_popup_pane_ParamLimits

0x0472,	// (0x0008d5bf) cell_large_graphic_popup_pane

0x16d8,	// (0x0008e825) cell_large_graphic_popup_pane_g1_ParamLimits

0x16d8,	// (0x0008e825) cell_large_graphic_popup_pane_g1

0x2ca0,	// (0x0008fded) cell_large_graphic_popup_pane_g2_ParamLimits

0x2ca0,	// (0x0008fded) cell_large_graphic_popup_pane_g2

0x2cae,	// (0x0008fdfb) cell_large_graphic_popup_pane_g3_ParamLimits

0x2cae,	// (0x0008fdfb) cell_large_graphic_popup_pane_g3

0x2cbc,	// (0x0008fe09) cell_large_graphic_popup_pane_g4_ParamLimits

0x2cbc,	// (0x0008fe09) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c6,	// (0x0009c413) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c6,	// (0x0009c413) cell_large_graphic_popup_pane_g

0x1410,	// (0x0008e55d) grid_highlight_pane_cp010

0x1683,	// (0x0008e7d0) bg_popup_call_pane_g1

0x2ccd,	// (0x0008fe1a) list_single_graphic_popup_conf_pane_ParamLimits

0x2ccd,	// (0x0008fe1a) list_single_graphic_popup_conf_pane

0x2cdf,	// (0x0008fe2c) list_highlight_pane_cp01

0x2ce8,	// (0x0008fe35) list_single_graphic_popup_conf_pane_g1

0x2cf0,	// (0x0008fe3d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2cf,	// (0x0009c41c) list_single_graphic_popup_conf_pane_g

0x2cf8,	// (0x0008fe45) list_single_graphic_popup_conf_pane_t1

0x2d06,	// (0x0008fe53) linegrid_cams_pane_g1

0x6195,	// (0x000932e2) linegrid_cams_pane_g2

0x1f7b,	// (0x0008f0c8) linegrid_cams_pane_g3

0x2d0f,	// (0x0008fe5c) linegrid_cams_pane_g4

0x619e,	// (0x000932eb) linegrid_cams_pane_g5

0x61a7,	// (0x000932f4) linegrid_cams_pane_g6

0x1f84,	// (0x0008f0d1) linegrid_cams_pane_g7

0x0006,

0xf2d4,	// (0x0009c421) linegrid_cams_pane_g

0x2d18,	// (0x0008fe65) popup_clock_analogue_window

0x2d18,	// (0x0008fe65) popup_clock_digital_window

0x1410,	// (0x0008e55d) popup_phob_thumbnail_window

0x1683,	// (0x0008e7d0) call_video_uplink_pane_g1

0x2d21,	// (0x0008fe6e) call_video_uplink_pane_g2

0x0001,

0xf2e3,	// (0x0009c430) call_video_uplink_pane_g

0x2d29,	// (0x0008fe76) video_uplink_pane

0x2d31,	// (0x0008fe7e) mce_image_pane_g1

0x61b2,	// (0x000932ff) mce_image_pane_g2

0x61bc,	// (0x00093309) mce_image_pane_g3

0x61c6,	// (0x00093313) mce_image_pane_g4

0x61ce,	// (0x0009331b) mce_image_pane_g5

0x0004,

0xf2e8,	// (0x0009c435) mce_image_pane_g

0x2d3b,	// (0x0008fe88) control_top_pane_stacon_cp01_ParamLimits

0x2d3b,	// (0x0008fe88) control_top_pane_stacon_cp01

0x2d4f,	// (0x0008fe9c) uni_indicator_pane_stacon_cp01_ParamLimits

0x2d4f,	// (0x0008fe9c) uni_indicator_pane_stacon_cp01

0x2d60,	// (0x0008fead) bg_popup_sub_pane_cp03

0x61d6,	// (0x00093323) chi_dic_find_pane

0x61de,	// (0x0009332b) listscroll_chi_dic_pane

0x61e7,	// (0x00093334) main_pane_chidic_g1

0x61fa,	// (0x00093347) chi_dic_find_pane_t1

0x2d6a,	// (0x0008feb7) find_chidic_pane

0x2d73,	// (0x0008fec0) chi_dic_list_pane_ParamLimits

0x2d73,	// (0x0008fec0) chi_dic_list_pane

0x2d84,	// (0x0008fed1) scroll_pane_cp020

0x6208,	// (0x00093355) find_chidic_pane_t1

0x1410,	// (0x0008e55d) input_focus_pane_cp06

0x6217,	// (0x00093364) list_chi_dic_pane_ParamLimits

0x6217,	// (0x00093364) list_chi_dic_pane

0x622c,	// (0x00093379) list_chi_dic_pane_t1_ParamLimits

0x622c,	// (0x00093379) list_chi_dic_pane_t1

0x1410,	// (0x0008e55d) list_highlight_pane_cp020

0x2d8c,	// (0x0008fed9) bg_cale_heading_pane_g1

0x623f,	// (0x0009338c) bg_cale_heading_pane_g2

0x6247,	// (0x00093394) bg_cale_heading_pane_g3

0x624f,	// (0x0009339c) bg_cale_heading_pane_g4

0x6259,	// (0x000933a6) bg_cale_heading_pane_g5

0x6263,	// (0x000933b0) bg_cale_heading_pane_g6

0x626b,	// (0x000933b8) bg_cale_heading_pane_g7

0x6273,	// (0x000933c0) bg_cale_heading_pane_g8

0x627d,	// (0x000933ca) bg_cale_heading_pane_g9

0x0008,

0xf2f3,	// (0x0009c440) bg_cale_heading_pane_g

0x2d8c,	// (0x0008fed9) bg_cale_side_pane_g1

0x6287,	// (0x000933d4) bg_cale_side_pane_g2

0x6291,	// (0x000933de) bg_cale_side_pane_g3

0x629b,	// (0x000933e8) bg_cale_side_pane_g4

0x62a5,	// (0x000933f2) bg_cale_side_pane_g5

0x62af,	// (0x000933fc) bg_cale_side_pane_g6

0x62b9,	// (0x00093406) bg_cale_side_pane_g7

0x62c3,	// (0x00093410) bg_cale_side_pane_g8

0x62cb,	// (0x00093418) bg_cale_side_pane_g9

0x0008,

0xf306,	// (0x0009c453) bg_cale_side_pane_g

0x62d3,	// (0x00093420) popup_call_status_window_ParamLimits

0x62d3,	// (0x00093420) popup_call_status_window

0x2d94,	// (0x0008fee1) stacon_top_pane

0x2d9c,	// (0x0008fee9) status_pane_ParamLimits

0x2d9c,	// (0x0008fee9) status_pane

0x2db1,	// (0x0008fefe) status_small_pane

0x2db9,	// (0x0008ff06) control_pane

0x1410,	// (0x0008e55d) stacon_bottom_pane

0x2dc1,	// (0x0008ff0e) list_single_mce_smart_pane_t1_ParamLimits

0x2dc1,	// (0x0008ff0e) list_single_mce_smart_pane_t1

0x2dd4,	// (0x0008ff21) list_single_mce_smart_pane_t2_ParamLimits

0x2dd4,	// (0x0008ff21) list_single_mce_smart_pane_t2

0x0001,

0xf319,	// (0x0009c466) list_single_mce_smart_pane_t_ParamLimits

0xf319,	// (0x0009c466) list_single_mce_smart_pane_t

0x62df,	// (0x0009342c) compass_pane

0x62ea,	// (0x00093437) main_location2_pane_t1

0x6300,	// (0x0009344d) main_location2_pane_t2

0x6316,	// (0x00093463) main_location2_pane_t3

0x0003,

0xf31e,	// (0x0009c46b) main_location2_pane_t

0x2df3,	// (0x0008ff40) compass_pane_g1_ParamLimits

0x2df3,	// (0x0008ff40) compass_pane_g1

0x6364,	// (0x000934b1) compass_pane_t1

0x6373,	// (0x000934c0) compass_pane_t2

0x0005,

0xf327,	// (0x0009c474) compass_pane_t

0x63be,	// (0x0009350b) text_secondary_cp61

0x2e07,	// (0x0008ff54) navi_pane_cams_g5

0x2e2a,	// (0x0008ff77) navi_pane_im_t1

0x2e38,	// (0x0008ff85) navi_pane_mp_g1_ParamLimits

0x2e38,	// (0x0008ff85) navi_pane_mp_g1

0x2e4c,	// (0x0008ff99) navi_pane_mp_g2_ParamLimits

0x2e4c,	// (0x0008ff99) navi_pane_mp_g2

0x2e58,	// (0x0008ffa5) navi_pane_mp_g3_ParamLimits

0x2e58,	// (0x0008ffa5) navi_pane_mp_g3

0x0002,

0xf33b,	// (0x0009c488) navi_pane_mp_g_ParamLimits

0xf33b,	// (0x0009c488) navi_pane_mp_g

0x2e64,	// (0x0008ffb1) navi_pane_mp_t1

0x2e72,	// (0x0008ffbf) navi_pane_mp_t2

0x0002,

0xf342,	// (0x0009c48f) navi_pane_mp_t

0x2eae,	// (0x0008fffb) navi_pane_vt_g1

0x2e64,	// (0x0008ffb1) navi_pane_vt_t1

0x2eb6,	// (0x00090003) navi_slider_pane

0x1f95,	// (0x0008f0e2) zooming_pane

0x2ebe,	// (0x0009000b) navi_slider_pane_g1

0x64f3,	// (0x00093640) navi_slider_pane_g2

0x0006,

0xf349,	// (0x0009c496) navi_slider_pane_g

0x2ee2,	// (0x0009002f) aid_levels_zoom

0x2eea,	// (0x00090037) zooming_pane_g1

0x2ef2,	// (0x0009003f) zooming_pane_g2

0x2ef2,	// (0x0009003f) zooming_pane_g3

0x0002,

0xf358,	// (0x0009c4a5) zooming_pane_g

0x2efa,	// (0x00090047) level_10_zoom

0x2f03,	// (0x00090050) level_11_zoom

0x2f0c,	// (0x00090059) level_1_zoom

0x2f15,	// (0x00090062) level_2_zoom

0x2f1e,	// (0x0009006b) level_3_zoom

0x2f27,	// (0x00090074) level_4_zoom

0x2f30,	// (0x0009007d) level_5_zoom

0x2f39,	// (0x00090086) level_6_zoom

0x2f42,	// (0x0009008f) level_7_zoom

0x2f4b,	// (0x00090098) level_8_zoom

0x2f54,	// (0x000900a1) level_9_zoom

0x2f65,	// (0x000900b2) popup_phob_thumbnail_window_g1

0x2f6d,	// (0x000900ba) popup_phob_thumbnail_window_g2

0x0001,

0xf35f,	// (0x0009c4ac) popup_phob_thumbnail_window_g

0x6e97,	// (0x00093fe4) level_1_location

0x6e9f,	// (0x00093fec) level_2_location

0x6ea7,	// (0x00093ff4) level_3_location

0x6eb1,	// (0x00093ffe) level_4_location

0x1f95,	// (0x0008f0e2) level_5_location

0x6505,	// (0x00093652) mce_icon_pane_g1

0x650d,	// (0x0009365a) mce_icon_pane_g2

0x0001,

0xf364,	// (0x0009c4b1) mce_icon_pane_g

0x6515,	// (0x00093662) main_mup_pane_g1_ParamLimits

0x6515,	// (0x00093662) main_mup_pane_g1

0x16f4,	// (0x0008e841) main_mup_pane_g2_ParamLimits

0x16f4,	// (0x0008e841) main_mup_pane_g2

0x16f4,	// (0x0008e841) main_mup_pane_g3_ParamLimits

0x16f4,	// (0x0008e841) main_mup_pane_g3

0x16f4,	// (0x0008e841) main_mup_pane_g4_ParamLimits

0x16f4,	// (0x0008e841) main_mup_pane_g4

0x16f4,	// (0x0008e841) main_mup_pane_g5_ParamLimits

0x16f4,	// (0x0008e841) main_mup_pane_g5

0x16f4,	// (0x0008e841) main_mup_pane_g6_ParamLimits

0x16f4,	// (0x0008e841) main_mup_pane_g6

0x16f4,	// (0x0008e841) main_mup_pane_g7_ParamLimits

0x16f4,	// (0x0008e841) main_mup_pane_g7

0x16f4,	// (0x0008e841) main_mup_pane_g8_ParamLimits

0x16f4,	// (0x0008e841) main_mup_pane_g8

0x16f4,	// (0x0008e841) main_mup_pane_g9_ParamLimits

0x16f4,	// (0x0008e841) main_mup_pane_g9

0x16f4,	// (0x0008e841) main_mup_pane_g10_ParamLimits

0x16f4,	// (0x0008e841) main_mup_pane_g10

0x16f4,	// (0x0008e841) main_mup_pane_g11_ParamLimits

0x16f4,	// (0x0008e841) main_mup_pane_g11

0x16e6,	// (0x0008e833) main_mup_pane_g12_ParamLimits

0x16e6,	// (0x0008e833) main_mup_pane_g12

0x16f4,	// (0x0008e841) main_mup_pane_g13_ParamLimits

0x16f4,	// (0x0008e841) main_mup_pane_g13

0x000c,

0xf369,	// (0x0009c4b6) main_mup_pane_g_ParamLimits

0xf369,	// (0x0009c4b6) main_mup_pane_g

0x1702,	// (0x0008e84f) main_mup_pane_t1_ParamLimits

0x1702,	// (0x0008e84f) main_mup_pane_t1

0x1702,	// (0x0008e84f) main_mup_pane_t2_ParamLimits

0x1702,	// (0x0008e84f) main_mup_pane_t2

0x1702,	// (0x0008e84f) main_mup_pane_t3_ParamLimits

0x1702,	// (0x0008e84f) main_mup_pane_t3

0x1db7,	// (0x0008ef04) main_mup_pane_t4_ParamLimits

0x1db7,	// (0x0008ef04) main_mup_pane_t4

0x1db7,	// (0x0008ef04) main_mup_pane_t5_ParamLimits

0x1db7,	// (0x0008ef04) main_mup_pane_t5

0x1da3,	// (0x0008eef0) main_mup_pane_t6_ParamLimits

0x1da3,	// (0x0008eef0) main_mup_pane_t6

0x0005,

0xf384,	// (0x0009c4d1) main_mup_pane_t_ParamLimits

0xf384,	// (0x0009c4d1) main_mup_pane_t

0x1093,	// (0x0008e1e0) mup_progress_pane_ParamLimits

0x1093,	// (0x0008e1e0) mup_progress_pane

0xce48,	// (0x00099f95) mup_visualizer_pane_ParamLimits

0xce48,	// (0x00099f95) mup_visualizer_pane

0xce48,	// (0x00099f95) mup_volume_pane_ParamLimits

0xce48,	// (0x00099f95) mup_volume_pane

0x16e6,	// (0x0008e833) mup_visualizer_pane_g1_ParamLimits

0x16e6,	// (0x0008e833) mup_visualizer_pane_g1

0x2fa5,	// (0x000900f2) mup_visualizer_pane_g2_ParamLimits

0x2fa5,	// (0x000900f2) mup_visualizer_pane_g2

0x16d8,	// (0x0008e825) mup_visualizer_pane_g3_ParamLimits

0x16d8,	// (0x0008e825) mup_visualizer_pane_g3

0x0002,

0xf391,	// (0x0009c4de) mup_visualizer_pane_g_ParamLimits

0xf391,	// (0x0009c4de) mup_visualizer_pane_g

0x1d99,	// (0x0008eee6) mup_volume_pane_g1

0x1d99,	// (0x0008eee6) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x0009c1fc) mup_volume_pane_g

0x1d99,	// (0x0008eee6) mup_progress_pane_g1

0x1d99,	// (0x0008eee6) mup_progress_pane_g2

0x1d99,	// (0x0008eee6) mup_progress_pane_g3

0x0002,

0xf398,	// (0x0009c4e5) mup_progress_pane_g

0x1410,	// (0x0008e55d) bg_popup_window_pane_cp05

0x2fb3,	// (0x00090100) heading_pane_cp02_ParamLimits

0x2fb3,	// (0x00090100) heading_pane_cp02

0x2fcf,	// (0x0009011c) list_popup_blid_pane

0x2fd7,	// (0x00090124) list_blid_sat_info_pane_ParamLimits

0x2fd7,	// (0x00090124) list_blid_sat_info_pane

0x2fea,	// (0x00090137) list_blid_sat_info_pane_g1

0x2ff2,	// (0x0009013f) list_blid_sat_info_pane_t1

0x6624,	// (0x00093771) mup_equalizer_pane_ParamLimits

0x6624,	// (0x00093771) mup_equalizer_pane

0x6645,	// (0x00093792) mup_equalizer_pane_cp1_ParamLimits

0x6645,	// (0x00093792) mup_equalizer_pane_cp1

0x6666,	// (0x000937b3) mup_equalizer_pane_cp2_ParamLimits

0x6666,	// (0x000937b3) mup_equalizer_pane_cp2

0x6687,	// (0x000937d4) mup_equalizer_pane_cp3_ParamLimits

0x6687,	// (0x000937d4) mup_equalizer_pane_cp3

0x66ac,	// (0x000937f9) mup_equalizer_pane_cp4_ParamLimits

0x66ac,	// (0x000937f9) mup_equalizer_pane_cp4

0x66d1,	// (0x0009381e) mup_equalizer_pane_cp5

0x66e9,	// (0x00093836) mup_equalizer_pane_cp6

0x6701,	// (0x0009384e) mup_equalizer_pane_cp7

0xdd89,	// (0x0009aed6) bg_popup_call_poc_act_pane_g9

0xdd91,	// (0x0009aede) bg_popup_call_poc_act_pane_g10

0xdd99,	// (0x0009aee6) bg_popup_call_poc_act_pane_g11

0x000a,

0x166b,	// (0x0008e7b8) mup_scale_pane

0x1683,	// (0x0008e7d0) mup_scale_pane_g1

0x3000,	// (0x0009014d) mup_scale_pane_g2

0x0006,

0xf3b4,	// (0x0009c501) mup_scale_pane_g

0x3024,	// (0x00090171) msg_data_pane

0x302c,	// (0x00090179) scroll_pane_cp017

0x672b,	// (0x00093878) bg_list_pane_cp04_ParamLimits

0x672b,	// (0x00093878) bg_list_pane_cp04

0x3034,	// (0x00090181) msg_data_pane_g1

0x6753,	// (0x000938a0) msg_data_pane_g2

0x675d,	// (0x000938aa) msg_data_pane_g3

0x6767,	// (0x000938b4) msg_data_pane_g4

0x676f,	// (0x000938bc) msg_data_pane_g5

0x6777,	// (0x000938c4) msg_data_pane_g6

0x677f,	// (0x000938cc) msg_data_pane_g7

0x0006,

0xf3c3,	// (0x0009c510) msg_data_pane_g

0x6787,	// (0x000938d4) msg_text_pane_ParamLimits

0x6787,	// (0x000938d4) msg_text_pane

0x67bd,	// (0x0009390a) qrid_highlight_pane_cp011_ParamLimits

0x67bd,	// (0x0009390a) qrid_highlight_pane_cp011

0x1410,	// (0x0008e55d) msg_body_pane

0x166b,	// (0x0008e7b8) msg_header_pane

0xe500,	// (0x0009b64d) input_focus_pane_cp07

0x67e1,	// (0x0009392e) msg_header_pane_t1_ParamLimits

0x67e1,	// (0x0009392e) msg_header_pane_t1

0x67fd,	// (0x0009394a) msg_header_pane_t2_ParamLimits

0x67fd,	// (0x0009394a) msg_header_pane_t2

0x0001,

0xf3d7,	// (0x0009c524) msg_header_pane_t_ParamLimits

0xf3d7,	// (0x0009c524) msg_header_pane_t

0x305c,	// (0x000901a9) msg_body_pane_g1

0x681d,	// (0x0009396a) msg_body_pane_t1_ParamLimits

0x681d,	// (0x0009396a) msg_body_pane_t1

0x684e,	// (0x0009399b) msg_body_pane_t2_ParamLimits

0x684e,	// (0x0009399b) msg_body_pane_t2

0x6860,	// (0x000939ad) msg_body_pane_t3_ParamLimits

0x6860,	// (0x000939ad) msg_body_pane_t3

0x0002,

0xf3dc,	// (0x0009c529) msg_body_pane_t_ParamLimits

0xf3dc,	// (0x0009c529) msg_body_pane_t

0x68c4,	// (0x00093a11) main_viewer_pane_g1_ParamLimits

0x68c4,	// (0x00093a11) main_viewer_pane_g1

0x68d0,	// (0x00093a1d) main_viewer_pane_g2_ParamLimits

0x68d0,	// (0x00093a1d) main_viewer_pane_g2

0x68dc,	// (0x00093a29) main_viewer_pane_g3_ParamLimits

0x68dc,	// (0x00093a29) main_viewer_pane_g3

0x68ed,	// (0x00093a3a) main_viewer_pane_g4_ParamLimits

0x68ed,	// (0x00093a3a) main_viewer_pane_g4

0x68fe,	// (0x00093a4b) main_viewer_pane_g5_ParamLimits

0x68fe,	// (0x00093a4b) main_viewer_pane_g5

0x68fe,	// (0x00093a4b) main_viewer_pane_g7_ParamLimits

0x68fe,	// (0x00093a4b) main_viewer_pane_g7

0x6910,	// (0x00093a5d) main_viewer_pane_g8_ParamLimits

0x6910,	// (0x00093a5d) main_viewer_pane_g8

0x0007,

0xf3ec,	// (0x0009c539) main_viewer_pane_g_ParamLimits

0xf3ec,	// (0x0009c539) main_viewer_pane_g

0x3064,	// (0x000901b1) viewer_content_pane_ParamLimits

0x3064,	// (0x000901b1) viewer_content_pane

0x6948,	// (0x00093a95) main_postcard_pane_g1_ParamLimits

0x6948,	// (0x00093a95) main_postcard_pane_g1

0x6956,	// (0x00093aa3) main_postcard_pane_g2_ParamLimits

0x6956,	// (0x00093aa3) main_postcard_pane_g2

0x6964,	// (0x00093ab1) main_postcard_pane_g3_ParamLimits

0x6964,	// (0x00093ab1) main_postcard_pane_g3

0x0005,

0xf3fd,	// (0x0009c54a) main_postcard_pane_g_ParamLimits

0xf3fd,	// (0x0009c54a) main_postcard_pane_g

0x6974,	// (0x00093ac1) main_postcard_pane_g4

0xdecf,	// (0x0009b01c) smil_status_volume_pane_g2

0x69a0,	// (0x00093aed) postcard_pane_ParamLimits

0x69a0,	// (0x00093aed) postcard_pane

0x317f,	// (0x000902cc) postcard_pane_g1_ParamLimits

0x317f,	// (0x000902cc) postcard_pane_g1

0x69da,	// (0x00093b27) postcard_pane_g2_ParamLimits

0x69da,	// (0x00093b27) postcard_pane_g2

0x69e6,	// (0x00093b33) postcard_pane_g3_ParamLimits

0x69e6,	// (0x00093b33) postcard_pane_g3

0x3080,	// (0x000901cd) postcard_pane_g4_ParamLimits

0x3080,	// (0x000901cd) postcard_pane_g4

0x69f2,	// (0x00093b3f) postcard_pane_g5_ParamLimits

0x69f2,	// (0x00093b3f) postcard_pane_g5

0x69fe,	// (0x00093b4b) postcard_pane_g6_ParamLimits

0x69fe,	// (0x00093b4b) postcard_pane_g6

0x3072,	// (0x000901bf) postcard_pane_g7_ParamLimits

0x3072,	// (0x000901bf) postcard_pane_g7

0x0006,

0xf40a,	// (0x0009c557) postcard_pane_g_ParamLimits

0xf40a,	// (0x0009c557) postcard_pane_g

0x6a0c,	// (0x00093b59) main_mp2_pane_g1_ParamLimits

0x6a0c,	// (0x00093b59) main_mp2_pane_g1

0x6a1a,	// (0x00093b67) main_mp2_pane_g2_ParamLimits

0x6a1a,	// (0x00093b67) main_mp2_pane_g2

0x6a26,	// (0x00093b73) main_mp2_pane_g3_ParamLimits

0x6a26,	// (0x00093b73) main_mp2_pane_g3

0x0002,

0xf419,	// (0x0009c566) main_mp2_pane_g_ParamLimits

0xf419,	// (0x0009c566) main_mp2_pane_g

0x6a32,	// (0x00093b7f) main_mp2_pane_t1_ParamLimits

0x6a32,	// (0x00093b7f) main_mp2_pane_t1

0x6a49,	// (0x00093b96) main_mp2_pane_t2_ParamLimits

0x6a49,	// (0x00093b96) main_mp2_pane_t2

0x6a5d,	// (0x00093baa) main_mp2_pane_t3_ParamLimits

0x6a5d,	// (0x00093baa) main_mp2_pane_t3

0x0002,

0xf420,	// (0x0009c56d) main_mp2_pane_t_ParamLimits

0xf420,	// (0x0009c56d) main_mp2_pane_t

0x1093,	// (0x0008e1e0) pec_content_pane_ParamLimits

0x1093,	// (0x0008e1e0) pec_content_pane

0x038f,	// (0x0008d4dc) scroll_pane_cp015

0x2f97,	// (0x000900e4) pec_attribute_pane_ParamLimits

0x2f97,	// (0x000900e4) pec_attribute_pane

0x16d8,	// (0x0008e825) pec_content_pane_g1_ParamLimits

0x16d8,	// (0x0008e825) pec_content_pane_g1

0x308e,	// (0x000901db) pec_content_pane_t1_ParamLimits

0x308e,	// (0x000901db) pec_content_pane_t1

0x30a2,	// (0x000901ef) pec_content_pane_t2_ParamLimits

0x30a2,	// (0x000901ef) pec_content_pane_t2

0x0001,

0xf427,	// (0x0009c574) pec_content_pane_t_ParamLimits

0xf427,	// (0x0009c574) pec_content_pane_t

0x0472,	// (0x0008d5bf) list_single_graphic_pane_cp01_ParamLimits

0x0472,	// (0x0008d5bf) list_single_graphic_pane_cp01

0x166b,	// (0x0008e7b8) bg_popup_sub_pane_cp04

0x30b6,	// (0x00090203) popup_mup_playback_window_g1

0x30c2,	// (0x0009020f) popup_mup_playback_window_t1

0x30d7,	// (0x00090224) popup_mup_playback_window_t2

0x0001,

0xf42c,	// (0x0009c579) popup_mup_playback_window_t

0x310e,	// (0x0009025b) main_image_pane_g1_ParamLimits

0x310e,	// (0x0009025b) main_image_pane_g1

0x3151,	// (0x0009029e) scroll_pane_cp018_ParamLimits

0x3151,	// (0x0009029e) scroll_pane_cp018

0x3169,	// (0x000902b6) scroll_pane_cp016_ParamLimits

0x3169,	// (0x000902b6) scroll_pane_cp016

0x6ae0,	// (0x00093c2d) smil2_image_pane_ParamLimits

0x6ae0,	// (0x00093c2d) smil2_image_pane

0x6b16,	// (0x00093c63) smil2_root_pane_ParamLimits

0x6b16,	// (0x00093c63) smil2_root_pane

0x6b42,	// (0x00093c8f) smil2_text_pane_ParamLimits

0x6b42,	// (0x00093c8f) smil2_text_pane

0x038f,	// (0x0008d4dc) bg_list_pane_cp06

0x038f,	// (0x0008d4dc) grid_radio_pane

0x1410,	// (0x0008e55d) bg_popup_window_pane_cp06

0x2af5,	// (0x0008fc42) main_fmradio_pane_t1

0xdda1,	// (0x0009aeee) heading_pane_cp04

0x2af5,	// (0x0008fc42) main_fmradio_pane_t2

0xdda9,	// (0x0009aef6) popup_cale_lunar_info_window_g1

0x2af5,	// (0x0008fc42) main_fmradio_pane_t3

0xddb1,	// (0x0009aefe) popup_cale_lunar_info_window_g2

0x2af5,	// (0x0008fc42) main_fmradio_pane_t4

0x0001,

0x2af5,	// (0x0008fc42) main_fmradio_pane_t5

0x0004,

0xf501,	// (0x0009c64e) popup_cale_lunar_info_window_g

0xf28c,	// (0x0009c3d9) main_fmradio_pane_t

0x038f,	// (0x0008d4dc) wait_bar_pane_cp03

0x0472,	// (0x0008d5bf) cell_fmradio_pane_ParamLimits

0x0472,	// (0x0008d5bf) cell_fmradio_pane

0x16d8,	// (0x0008e825) cell_fmradio_pane_g1_ParamLimits

0x16d8,	// (0x0008e825) cell_fmradio_pane_g1

0x038f,	// (0x0008d4dc) grid_highlight_pane_cp011

0xce74,	// (0x00099fc1) poc_content_pane_ParamLimits

0xce74,	// (0x00099fc1) poc_content_pane

0xce86,	// (0x00099fd3) scroll_pane_cp019

0x6b82,	// (0x00093ccf) popup_call_poc_act_window_ParamLimits

0x6b82,	// (0x00093ccf) popup_call_poc_act_window

0x6b8f,	// (0x00093cdc) popup_call_poc_inact_window_ParamLimits

0x6b8f,	// (0x00093cdc) popup_call_poc_inact_window

0xf4d8,	// (0x0009c625) bg_popup_call_poc_act_pane_g

0xdd19,	// (0x0009ae66) bg_popup_call_poc_inact_pane_g1

0xdd21,	// (0x0009ae6e) bg_popup_call_poc_inact_pane_g2

0xce8e,	// (0x00099fdb) popup_call_poc_act_window_g2

0xdd29,	// (0x0009ae76) bg_popup_call_poc_inact_pane_g3

0xdd31,	// (0x0009ae7e) bg_popup_call_poc_inact_pane_g4

0xdd39,	// (0x0009ae86) bg_popup_call_poc_inact_pane_g5

0xce96,	// (0x00099fe3) popup_call_poc_act_window_t1_ParamLimits

0xce96,	// (0x00099fe3) popup_call_poc_act_window_t1

0xcebe,	// (0x0009a00b) popup_call_poc_act_window_t2_ParamLimits

0xcebe,	// (0x0009a00b) popup_call_poc_act_window_t2

0xcee6,	// (0x0009a033) popup_call_poc_act_window_t3_ParamLimits

0xcee6,	// (0x0009a033) popup_call_poc_act_window_t3

0xcf0e,	// (0x0009a05b) popup_call_poc_act_window_t4_ParamLimits

0xcf0e,	// (0x0009a05b) popup_call_poc_act_window_t4

0x0003,

0xf441,	// (0x0009c58e) popup_call_poc_act_window_t_ParamLimits

0xf441,	// (0x0009c58e) popup_call_poc_act_window_t

0xdd41,	// (0x0009ae8e) bg_popup_call_poc_inact_pane_g6

0xdd49,	// (0x0009ae96) bg_popup_call_poc_inact_pane_g7

0xdd51,	// (0x0009ae9e) bg_popup_call_poc_inact_pane_g8

0xcf20,	// (0x0009a06d) popup_call_poc_inact_window_g2

0xdd59,	// (0x0009aea6) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4c5,	// (0x0009c612) bg_popup_call_poc_inact_pane_g

0xcf28,	// (0x0009a075) popup_call_poc_inact_window_t1_ParamLimits

0xcf28,	// (0x0009a075) popup_call_poc_inact_window_t1

0xcf3d,	// (0x0009a08a) popup_call_poc_inact_window_t2_ParamLimits

0xcf3d,	// (0x0009a08a) popup_call_poc_inact_window_t2

0xcf52,	// (0x0009a09f) popup_call_poc_inact_window_t3_ParamLimits

0xcf52,	// (0x0009a09f) popup_call_poc_inact_window_t3

0x0002,

0xf44a,	// (0x0009c597) popup_call_poc_inact_window_t_ParamLimits

0xf44a,	// (0x0009c597) popup_call_poc_inact_window_t

0xde47,	// (0x0009af94) context_pane_ParamLimits

0x71d4,	// (0x00094321) signal_pane_ParamLimits

0x1f95,	// (0x0008f0e2) main_call2_pane

0x7140,	// (0x0009428d) popup_phob_thumbnail2_window_ParamLimits

0x7140,	// (0x0009428d) popup_phob_thumbnail2_window

0x6872,	// (0x000939bf) aid_hotspot_pointer_arrow_pane

0x687a,	// (0x000939c7) aid_hotspot_pointer_hand_pane

0x6e5f,	// (0x00093fac) phob_pre_status_pane_g5

0x0472,	// (0x0008d5bf) cams_zoom_pane_ParamLimits

0x0472,	// (0x0008d5bf) image_vga_pane_ParamLimits

0x16e6,	// (0x0008e833) main_camera_pane_g1_ParamLimits

0x16e6,	// (0x0008e833) main_camera_pane_g2_ParamLimits

0x16e6,	// (0x0008e833) main_camera_pane_g3_ParamLimits

0x16e6,	// (0x0008e833) main_camera_pane_g4_ParamLimits

0x16e6,	// (0x0008e833) main_camera_pane_g5_ParamLimits

0x16e6,	// (0x0008e833) main_camera_pane_g6_ParamLimits

0x16e6,	// (0x0008e833) main_camera_pane_g7_ParamLimits

0xf180,	// (0x0009c2cd) main_camera_pane_g_ParamLimits

0x1db7,	// (0x0008ef04) main_camera_pane_t1_ParamLimits

0x1db7,	// (0x0008ef04) main_camera_pane_t2_ParamLimits

0xf191,	// (0x0009c2de) main_camera_pane_t_ParamLimits

0x166b,	// (0x0008e7b8) bg_popup_preview_window_pane_cp01_ParamLimits

0x166b,	// (0x0008e7b8) bg_popup_preview_window_pane_cp01

0xcf67,	// (0x0009a0b4) popup_phob_thumbnail2_window_g1_ParamLimits

0xcf67,	// (0x0009a0b4) popup_phob_thumbnail2_window_g1

0x1410,	// (0x0008e55d) call2_cli_visual_pane

0x6bab,	// (0x00093cf8) popup_call2_audio_conf_window_ParamLimits

0x6bab,	// (0x00093cf8) popup_call2_audio_conf_window

0x6bc4,	// (0x00093d11) popup_call2_audio_first_window_ParamLimits

0x6bc4,	// (0x00093d11) popup_call2_audio_first_window

0x6c62,	// (0x00093daf) popup_call2_audio_in_window_ParamLimits

0x6c62,	// (0x00093daf) popup_call2_audio_in_window

0x6ca6,	// (0x00093df3) popup_call2_audio_out_window_ParamLimits

0x6ca6,	// (0x00093df3) popup_call2_audio_out_window

0x6d10,	// (0x00093e5d) popup_call2_audio_second_window_ParamLimits

0x6d10,	// (0x00093e5d) popup_call2_audio_second_window

0x6d6e,	// (0x00093ebb) popup_call2_audio_wait_window_ParamLimits

0x6d6e,	// (0x00093ebb) popup_call2_audio_wait_window

0x1410,	// (0x0008e55d) bg_popup_call2_act_pane_cp03

0x164d,	// (0x0008e79a) list_conf_pane_cp

0xcf73,	// (0x0009a0c0) popup_call2_audio_conf_window_t1

0xcf81,	// (0x0009a0ce) list_single_graphic_popup_conf2_pane_ParamLimits

0xcf81,	// (0x0009a0ce) list_single_graphic_popup_conf2_pane

0x2cdf,	// (0x0008fe2c) list_highlight_pane_cp04

0xcf94,	// (0x0009a0e1) list_single_graphic_popup_conf2_pane_g1

0x2cf0,	// (0x0008fe3d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf451,	// (0x0009c59e) list_single_graphic_popup_conf2_pane_g

0xcf9e,	// (0x0009a0eb) list_single_graphic_popup_conf2_pane_t1

0xcfac,	// (0x0009a0f9) bg_popup_call2_act_pane_cp01_ParamLimits

0xcfac,	// (0x0009a0f9) bg_popup_call2_act_pane_cp01

0xd036,	// (0x0009a183) call_type_pane_cp05_ParamLimits

0xd036,	// (0x0009a183) call_type_pane_cp05

0xd08a,	// (0x0009a1d7) popup_call2_audio_second_window_g1_ParamLimits

0xd08a,	// (0x0009a1d7) popup_call2_audio_second_window_g1

0xd0de,	// (0x0009a22b) popup_call2_audio_second_window_g2_ParamLimits

0xd0de,	// (0x0009a22b) popup_call2_audio_second_window_g2

0x0002,

0xf456,	// (0x0009c5a3) popup_call2_audio_second_window_g_ParamLimits

0xf456,	// (0x0009c5a3) popup_call2_audio_second_window_g

0xd143,	// (0x0009a290) popup_call2_audio_second_window_t1_ParamLimits

0xd143,	// (0x0009a290) popup_call2_audio_second_window_t1

0xd1fe,	// (0x0009a34b) popup_call2_audio_second_window_t2_ParamLimits

0xd1fe,	// (0x0009a34b) popup_call2_audio_second_window_t2

0xd251,	// (0x0009a39e) popup_call2_audio_second_window_t3_ParamLimits

0xd251,	// (0x0009a39e) popup_call2_audio_second_window_t3

0x0003,

0xf45d,	// (0x0009c5aa) popup_call2_audio_second_window_t_ParamLimits

0xf45d,	// (0x0009c5aa) popup_call2_audio_second_window_t

0x1410,	// (0x0008e55d) bg_popup_call2_in_pane_cp02

0x141a,	// (0x0008e567) call_type_pane_cp04

0x6dad,	// (0x00093efa) popup_call2_audio_wait_window_g1

0x6db5,	// (0x00093f02) popup_call2_audio_wait_window_g2

0x0001,

0xf466,	// (0x0009c5b3) popup_call2_audio_wait_window_g

0x1432,	// (0x0008e57f) popup_call2_audio_wait_window_t3

0xd344,	// (0x0009a491) bg_popup_call2_act_pane_ParamLimits

0xd344,	// (0x0009a491) bg_popup_call2_act_pane

0xd404,	// (0x0009a551) call_type_pane_cp03_ParamLimits

0xd404,	// (0x0009a551) call_type_pane_cp03

0xd468,	// (0x0009a5b5) popup_call2_audio_first_window_g1_ParamLimits

0xd468,	// (0x0009a5b5) popup_call2_audio_first_window_g1

0xd4d8,	// (0x0009a625) popup_call2_audio_first_window_g2_ParamLimits

0xd4d8,	// (0x0009a625) popup_call2_audio_first_window_g2

0x317f,	// (0x000902cc) popup_call2_audio_first_window_g3_ParamLimits

0x317f,	// (0x000902cc) popup_call2_audio_first_window_g3

0x0004,

0xf46b,	// (0x0009c5b8) popup_call2_audio_first_window_g_ParamLimits

0xf46b,	// (0x0009c5b8) popup_call2_audio_first_window_g

0xd5b6,	// (0x0009a703) popup_call2_audio_first_window_t1_ParamLimits

0xd5b6,	// (0x0009a703) popup_call2_audio_first_window_t1

0xd6b9,	// (0x0009a806) popup_call2_audio_first_window_t4_ParamLimits

0xd6b9,	// (0x0009a806) popup_call2_audio_first_window_t4

0xd79c,	// (0x0009a8e9) popup_call2_audio_first_window_t5_ParamLimits

0xd79c,	// (0x0009a8e9) popup_call2_audio_first_window_t5

0x0003,

0xf476,	// (0x0009c5c3) popup_call2_audio_first_window_t_ParamLimits

0xf476,	// (0x0009c5c3) popup_call2_audio_first_window_t

0x1663,	// (0x0008e7b0) bg_popup_call2_act_pane_g1

0xddbb,	// (0x0009af08) popup_cale_lunar_info_window_t1

0xddc9,	// (0x0009af16) popup_cale_lunar_info_window_t2

0xddd7,	// (0x0009af24) popup_cale_lunar_info_window_t3

0x1410,	// (0x0008e55d) bg_popup_call2_bubble_pane

0xd89d,	// (0x0009a9ea) bg_popup_call2_in_pane_cp01_ParamLimits

0xd89d,	// (0x0009a9ea) bg_popup_call2_in_pane_cp01

0x10ec,	// (0x0008e239) call_type_pane_cp02

0x6dbd,	// (0x00093f0a) popup_call2_audio_out_window_g1_ParamLimits

0x6dbd,	// (0x00093f0a) popup_call2_audio_out_window_g1

0xd8e5,	// (0x0009aa32) popup_call2_audio_out_window_g2_ParamLimits

0xd8e5,	// (0x0009aa32) popup_call2_audio_out_window_g2

0x6de9,	// (0x00093f36) popup_call2_audio_out_window_g3_ParamLimits

0x6de9,	// (0x00093f36) popup_call2_audio_out_window_g3

0x0003,

0xf47f,	// (0x0009c5cc) popup_call2_audio_out_window_g_ParamLimits

0xf47f,	// (0x0009c5cc) popup_call2_audio_out_window_g

0xd91c,	// (0x0009aa69) popup_call2_audio_out_window_t1_ParamLimits

0xd91c,	// (0x0009aa69) popup_call2_audio_out_window_t1

0xd97b,	// (0x0009aac8) popup_call2_audio_out_window_t2_ParamLimits

0xd97b,	// (0x0009aac8) popup_call2_audio_out_window_t2

0xd9cf,	// (0x0009ab1c) popup_call2_audio_out_window_t3_ParamLimits

0xd9cf,	// (0x0009ab1c) popup_call2_audio_out_window_t3

0xd9e5,	// (0x0009ab32) popup_call2_audio_out_window_t4_ParamLimits

0xd9e5,	// (0x0009ab32) popup_call2_audio_out_window_t4

0xd9fb,	// (0x0009ab48) popup_call2_audio_out_window_t5_ParamLimits

0xd9fb,	// (0x0009ab48) popup_call2_audio_out_window_t5

0x0005,

0xf488,	// (0x0009c5d5) popup_call2_audio_out_window_t_ParamLimits

0xf488,	// (0x0009c5d5) popup_call2_audio_out_window_t

0xda5f,	// (0x0009abac) bg_popup_call2_in_pane_ParamLimits

0xda5f,	// (0x0009abac) bg_popup_call2_in_pane

0xdabb,	// (0x0009ac08) popup_call2_audio_in_window_g1_ParamLimits

0xdabb,	// (0x0009ac08) popup_call2_audio_in_window_g1

0xdaf3,	// (0x0009ac40) popup_call2_audio_in_window_g2_ParamLimits

0xdaf3,	// (0x0009ac40) popup_call2_audio_in_window_g2

0xdb2b,	// (0x0009ac78) popup_call2_audio_in_window_g3_ParamLimits

0xdb2b,	// (0x0009ac78) popup_call2_audio_in_window_g3

0x0003,

0xf495,	// (0x0009c5e2) popup_call2_audio_in_window_g_ParamLimits

0xf495,	// (0x0009c5e2) popup_call2_audio_in_window_g

0xdb83,	// (0x0009acd0) popup_call2_audio_in_window_t1_ParamLimits

0xdb83,	// (0x0009acd0) popup_call2_audio_in_window_t1

0xdc03,	// (0x0009ad50) popup_call2_audio_in_window_t2_ParamLimits

0xdc03,	// (0x0009ad50) popup_call2_audio_in_window_t2

0xdc83,	// (0x0009add0) popup_call2_audio_in_window_t3_ParamLimits

0xdc83,	// (0x0009add0) popup_call2_audio_in_window_t3

0xdc9d,	// (0x0009adea) popup_call2_audio_in_window_t4_ParamLimits

0xdc9d,	// (0x0009adea) popup_call2_audio_in_window_t4

0xdcaf,	// (0x0009adfc) popup_call2_audio_in_window_t5_ParamLimits

0xdcaf,	// (0x0009adfc) popup_call2_audio_in_window_t5

0xdcc4,	// (0x0009ae11) popup_call2_audio_in_window_t6_ParamLimits

0xdcc4,	// (0x0009ae11) popup_call2_audio_in_window_t6

0x0005,

0xf49e,	// (0x0009c5eb) popup_call2_audio_in_window_t_ParamLimits

0xf49e,	// (0x0009c5eb) popup_call2_audio_in_window_t

0x1663,	// (0x0008e7b0) bg_popup_call2_in_pane_g1

0xdde5,	// (0x0009af32) popup_cale_lunar_info_window_t4

0x0003,

0xf506,	// (0x0009c653) popup_cale_lunar_info_window_t

0x166b,	// (0x0008e7b8) bg_popup_call2_rect_pane_ParamLimits

0x166b,	// (0x0008e7b8) bg_popup_call2_rect_pane

0x1410,	// (0x0008e55d) call2_cli_visual_graphic_pane

0x1410,	// (0x0008e55d) call2_cli_visual_text_pane

0x720f,	// (0x0009435c) smil_status_volume_pane_g3

0x0002,

0x1683,	// (0x0008e7d0) call2_cli_visual_graphic_pane_g1

0x1683,	// (0x0008e7d0) call2_cli_visual_graphic_pane_g2

0x1683,	// (0x0008e7d0) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4ab,	// (0x0009c5f8) call2_cli_visual_graphic_pane_g

0xdcd9,	// (0x0009ae26) bg_popup_call2_rect_pane_g1

0x1ece,	// (0x0008f01b) bg_popup_call2_rect_pane_g2

0xdce1,	// (0x0009ae2e) bg_popup_call2_rect_pane_g3

0xdce9,	// (0x0009ae36) bg_popup_call2_rect_pane_g4

0xdcf1,	// (0x0009ae3e) bg_popup_call2_rect_pane_g5

0xdcf9,	// (0x0009ae46) bg_popup_call2_rect_pane_g6

0xdd01,	// (0x0009ae4e) bg_popup_call2_rect_pane_g7

0xdd09,	// (0x0009ae56) bg_popup_call2_rect_pane_g8

0xdd11,	// (0x0009ae5e) bg_popup_call2_rect_pane_g9

0x0008,

0xf4b2,	// (0x0009c5ff) bg_popup_call2_rect_pane_g

0xdd19,	// (0x0009ae66) bg_popup_call2_bubble_pane_g1

0xdd21,	// (0x0009ae6e) bg_popup_call2_bubble_pane_g2

0xdd29,	// (0x0009ae76) bg_popup_call2_bubble_pane_g3

0xdd31,	// (0x0009ae7e) bg_popup_call2_bubble_pane_g4

0xdd39,	// (0x0009ae86) bg_popup_call2_bubble_pane_g5

0xdd41,	// (0x0009ae8e) bg_popup_call2_bubble_pane_g6

0xdd49,	// (0x0009ae96) bg_popup_call2_bubble_pane_g7

0xdd51,	// (0x0009ae9e) bg_popup_call2_bubble_pane_g8

0xdd59,	// (0x0009aea6) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c5,	// (0x0009c612) bg_popup_call2_bubble_pane_g

0x46eb,	// (0x00091838) aid_cale_week_size_cell_pane

0x166b,	// (0x0008e7b8) aid_cams_cif_uncrop_pane_ParamLimits

0x166b,	// (0x0008e7b8) aid_cams_cif_uncrop_pane

0x0472,	// (0x0008d5bf) aid_cams_size_cell_ParamLimits

0x0472,	// (0x0008d5bf) aid_cams_size_cell

0x0472,	// (0x0008d5bf) grid_cams_pane_ParamLimits

0x0472,	// (0x0008d5bf) linegrid_cams_pane_ParamLimits

0x4f9f,	// (0x000920ec) call_video_pane_t1

0x4fbc,	// (0x00092109) call_video_pane_t2

0x0001,

0xf1dd,	// (0x0009c32a) call_video_pane_t

0x5479,	// (0x000925c6) aid_cale_month_size_cell_pane_ParamLimits

0x5479,	// (0x000925c6) aid_cale_month_size_cell_pane

0xf54a,	// (0x0009c697) smil_status_volume_pane_g

0x721c,	// (0x00094369) volume_smil_pane_ParamLimits

0x40ba,	// (0x00091207) aid_popup2_width_pane

0x45f7,	// (0x00091744) cell_qdial_pane_g4_ParamLimits

0x45f7,	// (0x00091744) cell_qdial_pane_g4

0x6340,	// (0x0009348d) aid_blid_cardinal_pane_ParamLimits

0x6350,	// (0x0009349d) aid_blid_destination_pane_ParamLimits

0x6350,	// (0x0009349d) aid_blid_destination_pane

0x166b,	// (0x0008e7b8) bg_popup_call_poc_act_pane_ParamLimits

0x166b,	// (0x0008e7b8) bg_popup_call_poc_act_pane

0x166b,	// (0x0008e7b8) bg_popup_call_poc_inact_pane_ParamLimits

0x166b,	// (0x0008e7b8) bg_popup_call_poc_inact_pane

0xdd61,	// (0x0009aeae) bg_popup_call_poc_act_pane_g1

0xdd69,	// (0x0009aeb6) bg_popup_call_poc_act_pane_g2

0xdd71,	// (0x0009aebe) bg_popup_call_poc_act_pane_g3

0xdd31,	// (0x0009ae7e) bg_popup_call_poc_act_pane_g4

0xdd39,	// (0x0009ae86) bg_popup_call_poc_act_pane_g5

0xdd79,	// (0x0009aec6) bg_popup_call_poc_act_pane_g6

0xdd49,	// (0x0009ae96) bg_popup_call_poc_act_pane_g7

0xdd81,	// (0x0009aece) bg_popup_call_poc_act_pane_g8

0x1410,	// (0x0008e55d) main_usb_pane

0x705d,	// (0x000941aa) popup_cale_lunar_info_window

0x52d4,	// (0x00092421) im_reading_pane_t1_ParamLimits

0x205a,	// (0x0008f1a7) list_im_pane_ParamLimits

0x206b,	// (0x0008f1b8) scroll_pane_cp07_ParamLimits

0x1410,	// (0x0008e55d) grid_highlight_pane_cp012

0x166b,	// (0x0008e7b8) mup_scale_pane_ParamLimits

0x16e6,	// (0x0008e833) main_usb_pane_g1_ParamLimits

0x16e6,	// (0x0008e833) main_usb_pane_g1

0x16e6,	// (0x0008e833) main_usb_pane_g2_ParamLimits

0x16e6,	// (0x0008e833) main_usb_pane_g2

0x0001,

0xf4ef,	// (0x0009c63c) main_usb_pane_g_ParamLimits

0xf4ef,	// (0x0009c63c) main_usb_pane_g

0x1db7,	// (0x0008ef04) main_usb_pane_t1_ParamLimits

0x1db7,	// (0x0008ef04) main_usb_pane_t1

0x1db7,	// (0x0008ef04) main_usb_pane_t2_ParamLimits

0x1db7,	// (0x0008ef04) main_usb_pane_t2

0x1db7,	// (0x0008ef04) main_usb_pane_t3_ParamLimits

0x1db7,	// (0x0008ef04) main_usb_pane_t3

0x1db7,	// (0x0008ef04) main_usb_pane_t4_ParamLimits

0x1db7,	// (0x0008ef04) main_usb_pane_t4

0x1db7,	// (0x0008ef04) main_usb_pane_t5_ParamLimits

0x1db7,	// (0x0008ef04) main_usb_pane_t5

0x1db7,	// (0x0008ef04) main_usb_pane_t6_ParamLimits

0x1db7,	// (0x0008ef04) main_usb_pane_t6

0x0005,

0xf4f4,	// (0x0009c641) main_usb_pane_t_ParamLimits

0x62df,	// (0x0009342c) aid_text_placing

0x62ea,	// (0x00093437) main_location2_pane_t1_ParamLimits

0x6300,	// (0x0009344d) main_location2_pane_t2_ParamLimits

0x6316,	// (0x00093463) main_location2_pane_t3_ParamLimits

0x632c,	// (0x00093479) main_location2_pane_t4_ParamLimits

0x632c,	// (0x00093479) main_location2_pane_t4

0xf31e,	// (0x0009c46b) main_location2_pane_t_ParamLimits

0x1699,	// (0x0008e7e6) find_pinb_pane_g2_ParamLimits

0x1699,	// (0x0008e7e6) find_pinb_pane_g2

0x0001,

0xf095,	// (0x0009c1e2) find_pinb_pane_g_ParamLimits

0xf095,	// (0x0009c1e2) find_pinb_pane_g

0x16a5,	// (0x0008e7f2) find_pinb_pane_t1_ParamLimits

0x16b7,	// (0x0008e804) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x0009c1e7) find_pinb_pane_t_ParamLimits

0x1410,	// (0x0008e55d) main_call3_pane

0x5a2c,	// (0x00092b79) cale_month_day_heading_pane_t1_ParamLimits

0x5aae,	// (0x00092bfb) cale_month_day_heading_pane_t2_ParamLimits

0x5b27,	// (0x00092c74) cale_month_day_heading_pane_t3_ParamLimits

0x5ba0,	// (0x00092ced) cale_month_day_heading_pane_t4_ParamLimits

0x5c19,	// (0x00092d66) cale_month_day_heading_pane_t5_ParamLimits

0x5c9a,	// (0x00092de7) cale_month_day_heading_pane_t6_ParamLimits

0x5d23,	// (0x00092e70) cale_month_day_heading_pane_t7_ParamLimits

0xf215,	// (0x0009c362) cale_month_day_heading_pane_t_ParamLimits

0x22c4,	// (0x0008f411) smil_status_volume_pane

0x69be,	// (0x00093b0b) postcard_address_pane_ParamLimits

0x69be,	// (0x00093b0b) postcard_address_pane

0x69cc,	// (0x00093b19) postcard_message_pane_ParamLimits

0x69cc,	// (0x00093b19) postcard_message_pane

0x6e15,	// (0x00093f62) call2_cli_visual_pane_t1_ParamLimits

0x6e15,	// (0x00093f62) call2_cli_visual_pane_t1

0xdefa,	// (0x0009b047) postcard_message_pane_t1_ParamLimits

0xdefa,	// (0x0009b047) postcard_message_pane_t1

0xdee2,	// (0x0009b02f) postcard_address_pane_t1_ParamLimits

0xdee2,	// (0x0009b02f) postcard_address_pane_t1

0x7353,	// (0x000944a0) popup_call3_audio_in_window_ParamLimits

0x7353,	// (0x000944a0) popup_call3_audio_in_window

0x7231,	// (0x0009437e) bg_popup_call3_in_pane_ParamLimits

0x7231,	// (0x0009437e) bg_popup_call3_in_pane

0x7299,	// (0x000943e6) popup_call3_audio_in_window_g1_ParamLimits

0x7299,	// (0x000943e6) popup_call3_audio_in_window_g1

0x72b1,	// (0x000943fe) popup_call3_audio_in_window_g2_ParamLimits

0x72b1,	// (0x000943fe) popup_call3_audio_in_window_g2

0x72c9,	// (0x00094416) popup_call3_audio_in_window_g3_ParamLimits

0x72c9,	// (0x00094416) popup_call3_audio_in_window_g3

0x0003,

0xf551,	// (0x0009c69e) popup_call3_audio_in_window_g_ParamLimits

0xf551,	// (0x0009c69e) popup_call3_audio_in_window_g

0x72f1,	// (0x0009443e) popup_call3_audio_in_window_t1_ParamLimits

0x72f1,	// (0x0009443e) popup_call3_audio_in_window_t1

0x7319,	// (0x00094466) popup_call3_audio_in_window_t2_ParamLimits

0x7319,	// (0x00094466) popup_call3_audio_in_window_t2

0x7341,	// (0x0009448e) popup_call3_audio_in_window_t3_ParamLimits

0x7341,	// (0x0009448e) popup_call3_audio_in_window_t3

0x0002,

0xf55a,	// (0x0009c6a7) popup_call3_audio_in_window_t_ParamLimits

0xf55a,	// (0x0009c6a7) popup_call3_audio_in_window_t

0x1f95,	// (0x0008f0e2) bg_popup_call3_rect_pane

0xdcd9,	// (0x0009ae26) bg_popup_call3_rect_pane_g1

0x1ece,	// (0x0008f01b) bg_popup_call3_rect_pane_g2

0xdce1,	// (0x0009ae2e) bg_popup_call3_rect_pane_g3

0xdce9,	// (0x0009ae36) bg_popup_call3_rect_pane_g4

0xdcf1,	// (0x0009ae3e) bg_popup_call3_rect_pane_g5

0xdcf9,	// (0x0009ae46) bg_popup_call3_rect_pane_g6

0xdd01,	// (0x0009ae4e) bg_popup_call3_rect_pane_g7

0x038f,	// (0x0008d4dc) mup_visualizer_osc_pane

0x038f,	// (0x0008d4dc) mup_visualizer_spec_pane

0x7251,	// (0x0009439e) call3_video_qcif_pane_ParamLimits

0x7251,	// (0x0009439e) call3_video_qcif_pane

0x7263,	// (0x000943b0) call3_video_qcif_uncrop_pane_ParamLimits

0x7263,	// (0x000943b0) call3_video_qcif_uncrop_pane

0x7273,	// (0x000943c0) call3_video_subqcif_pane_ParamLimits

0x7273,	// (0x000943c0) call3_video_subqcif_pane

0x7287,	// (0x000943d4) call3_video_subqcif_uncrop_pane_ParamLimits

0x7287,	// (0x000943d4) call3_video_subqcif_uncrop_pane

0x72e1,	// (0x0009442e) popup_call3_audio_in_window_g4_ParamLimits

0x72e1,	// (0x0009442e) popup_call3_audio_in_window_g4

0x038f,	// (0x0008d4dc) mup_spec_half_pane

0x038f,	// (0x0008d4dc) mup_spec_half_pane_cp

0x038f,	// (0x0008d4dc) mup_osc_middle_pane

0x1d99,	// (0x0008eee6) mup_visualizer_osc_pane_g1

0xde95,	// (0x0009afe2) mup_spec_bar_pane_ParamLimits

0xde95,	// (0x0009afe2) mup_spec_bar_pane

0x1d99,	// (0x0008eee6) mup_spec_bar_pane_g1

0x1d99,	// (0x0008eee6) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x0009c1fc) mup_spec_bar_pane_g

0x46eb,	// (0x00091838) aid_cale_week_size_cell_pane_ParamLimits

0x4705,	// (0x00091852) bg_cale_heading_pane_ParamLimits

0x472e,	// (0x0009187b) bg_cale_pane_cp01_ParamLimits

0x4750,	// (0x0009189d) cale_week_corner_pane_ParamLimits

0x476f,	// (0x000918bc) cale_week_day_heading_pane_ParamLimits

0x479d,	// (0x000918ea) cale_week_scroll_pane_g1_ParamLimits

0x47c1,	// (0x0009190e) cale_week_scroll_pane_g2_ParamLimits

0x47d9,	// (0x00091926) cale_week_scroll_pane_g3_ParamLimits

0x47f1,	// (0x0009193e) cale_week_scroll_pane_g4_ParamLimits

0x4809,	// (0x00091956) cale_week_scroll_pane_g5_ParamLimits

0x4821,	// (0x0009196e) cale_week_scroll_pane_g6_ParamLimits

0x4841,	// (0x0009198e) cale_week_scroll_pane_g7_ParamLimits

0x4861,	// (0x000919ae) cale_week_scroll_pane_g8_ParamLimits

0x4881,	// (0x000919ce) cale_week_scroll_pane_g9_ParamLimits

0x489e,	// (0x000919eb) cale_week_scroll_pane_g10_ParamLimits

0x48bb,	// (0x00091a08) cale_week_scroll_pane_g11_ParamLimits

0x48da,	// (0x00091a27) cale_week_scroll_pane_g12_ParamLimits

0x48ff,	// (0x00091a4c) cale_week_scroll_pane_g13_ParamLimits

0x4928,	// (0x00091a75) cale_week_scroll_pane_g14_ParamLimits

0x4951,	// (0x00091a9e) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x0009c273) cale_week_scroll_pane_g_ParamLimits

0x499a,	// (0x00091ae7) cale_week_time_pane_ParamLimits

0x49ba,	// (0x00091b07) grid_cale_week_pane_ParamLimits

0x1f0b,	// (0x0008f058) listscroll_cale_week_pane_t1

0x1f1d,	// (0x0008f06a) scroll_pane_cp08_ParamLimits

0x54f1,	// (0x0009263e) cale_month_corner_pane_ParamLimits

0x229a,	// (0x0008f3e7) cale_month_pane_t1

0x59b3,	// (0x00092b00) cale_month_week_pane_ParamLimits

0x317f,	// (0x000902cc) popup_call_status_window_g1_ParamLimits

0x610e,	// (0x0009325b) popup_call_status_window_g2_ParamLimits

0x611a,	// (0x00093267) popup_call_status_window_g3_ParamLimits

0xf2a5,	// (0x0009c3f2) popup_call_status_window_g_ParamLimits

0x2c74,	// (0x0008fdc1) aid_call2_pane

0x67d3,	// (0x00093920) msg_header_pane_g1

0x69be,	// (0x00093b0b) postcard_address2_pane_ParamLimits

0x69be,	// (0x00093b0b) postcard_address2_pane

0x69cc,	// (0x00093b19) postcard_message2_pane_ParamLimits

0x69cc,	// (0x00093b19) postcard_message2_pane

0x71e2,	// (0x0009432f) message2_row_pane_ParamLimits

0x71e2,	// (0x0009432f) message2_row_pane

0x71fc,	// (0x00094349) address2_row_pane_ParamLimits

0x71fc,	// (0x00094349) address2_row_pane

0xde62,	// (0x0009afaf) postcard_message2_row_pane_g1

0xde6a,	// (0x0009afb7) postcard_message2_row_pane_t1

0xde62,	// (0x0009afaf) address2_row_pane_g1

0xde6a,	// (0x0009afb7) address2_row_pane_t1

0x4d48,	// (0x00091e95) aid_size_cell_vorec

0x1410,	// (0x0008e55d) main_rss_pane

0xde78,	// (0x0009afc5) rss_list_single_pane_ParamLimits

0xde78,	// (0x0009afc5) rss_list_single_pane

0xde86,	// (0x0009afd3) rss_list_single_pane_t1

0xde86,	// (0x0009afd3) rss_list_single_pane_t2

0x0001,

0xf545,	// (0x0009c692) rss_list_single_pane_t

0x1410,	// (0x0008e55d) main_camera2_pane

0x1410,	// (0x0008e55d) main_video2_pane

0x435f,	// (0x000914ac) cams_zoom_pane_cp2_ParamLimits

0x435f,	// (0x000914ac) cams_zoom_pane_cp2

0x435f,	// (0x000914ac) image2_vga_pane_ParamLimits

0x435f,	// (0x000914ac) image2_vga_pane

0x2ca0,	// (0x0008fded) main_camera2_pane_g1_ParamLimits

0x2ca0,	// (0x0008fded) main_camera2_pane_g1

0x2ca0,	// (0x0008fded) main_camera2_pane_g2_ParamLimits

0x2ca0,	// (0x0008fded) main_camera2_pane_g2

0x2ca0,	// (0x0008fded) main_camera2_pane_g3_ParamLimits

0x2ca0,	// (0x0008fded) main_camera2_pane_g3

0x2ca0,	// (0x0008fded) main_camera2_pane_g4_ParamLimits

0x2ca0,	// (0x0008fded) main_camera2_pane_g4

0x2ca0,	// (0x0008fded) main_camera2_pane_g5_ParamLimits

0x2ca0,	// (0x0008fded) main_camera2_pane_g5

0x2ca0,	// (0x0008fded) main_camera2_pane_g6_ParamLimits

0x2ca0,	// (0x0008fded) main_camera2_pane_g6

0x2ca0,	// (0x0008fded) main_camera2_pane_g7_ParamLimits

0x2ca0,	// (0x0008fded) main_camera2_pane_g7

0x2ca0,	// (0x0008fded) main_camera2_pane_g8_ParamLimits

0x2ca0,	// (0x0008fded) main_camera2_pane_g8

0x0008,

0xf561,	// (0x0009c6ae) main_camera2_pane_g_ParamLimits

0xf561,	// (0x0009c6ae) main_camera2_pane_g

0x7370,	// (0x000944bd) main_camera2_pane_t1_ParamLimits

0x7370,	// (0x000944bd) main_camera2_pane_t1

0x7370,	// (0x000944bd) main_camera2_pane_t2_ParamLimits

0x7370,	// (0x000944bd) main_camera2_pane_t2

0x7370,	// (0x000944bd) main_camera2_pane_t3_ParamLimits

0x7370,	// (0x000944bd) main_camera2_pane_t3

0x7370,	// (0x000944bd) main_camera2_pane_t4_ParamLimits

0x7370,	// (0x000944bd) main_camera2_pane_t4

0x0006,

0xf574,	// (0x0009c6c1) main_camera2_pane_t_ParamLimits

0xf574,	// (0x0009c6c1) main_camera2_pane_t

0x7398,	// (0x000944e5) cams_zoom_pane_cp4_ParamLimits

0x7398,	// (0x000944e5) cams_zoom_pane_cp4

0x7002,	// (0x0009414f) image2_cif_pane_ParamLimits

0x7002,	// (0x0009414f) image2_cif_pane

0x435f,	// (0x000914ac) image2_subqcif_pane_ParamLimits

0x435f,	// (0x000914ac) image2_subqcif_pane

0x73a6,	// (0x000944f3) main_video2_pane_g1_ParamLimits

0x73a6,	// (0x000944f3) main_video2_pane_g1

0x73a6,	// (0x000944f3) main_video2_pane_g2_ParamLimits

0x73a6,	// (0x000944f3) main_video2_pane_g2

0x73a6,	// (0x000944f3) main_video2_pane_g3_ParamLimits

0x73a6,	// (0x000944f3) main_video2_pane_g3

0x73a6,	// (0x000944f3) main_video2_pane_g4_ParamLimits

0x73a6,	// (0x000944f3) main_video2_pane_g4

0x73a6,	// (0x000944f3) main_video2_pane_g5_ParamLimits

0x73a6,	// (0x000944f3) main_video2_pane_g5

0x73a6,	// (0x000944f3) main_video2_pane_g6_ParamLimits

0x73a6,	// (0x000944f3) main_video2_pane_g6

0x0005,

0xf583,	// (0x0009c6d0) main_video2_pane_g_ParamLimits

0xf583,	// (0x0009c6d0) main_video2_pane_g

0x73b4,	// (0x00094501) main_video2_pane_t1_ParamLimits

0x73b4,	// (0x00094501) main_video2_pane_t1

0x73b4,	// (0x00094501) main_video2_pane_t2_ParamLimits

0x73b4,	// (0x00094501) main_video2_pane_t2

0x73b4,	// (0x00094501) main_video2_pane_t3_ParamLimits

0x73b4,	// (0x00094501) main_video2_pane_t3

0x0002,

0xf590,	// (0x0009c6dd) main_video2_pane_t_ParamLimits

0xf590,	// (0x0009c6dd) main_video2_pane_t

0x6ec3,	// (0x00094010) call_muted_g2

0x0001,

0xf537,	// (0x0009c684) call_muted_g

0x1410,	// (0x0008e55d) main_mup2_pane

0x16f4,	// (0x0008e841) main_mup2_pane_g1_ParamLimits

0x16f4,	// (0x0008e841) main_mup2_pane_g1

0x16f4,	// (0x0008e841) main_mup2_pane_g2_ParamLimits

0x16f4,	// (0x0008e841) main_mup2_pane_g2

0x060e,	// (0x0008d75b) main_mup_pane_g13_cp1

0x4379,	// (0x000914c6) mup_volume_pane_cp1

0x16f4,	// (0x0008e841) main_mup2_pane_g4_ParamLimits

0x16f4,	// (0x0008e841) main_mup2_pane_g4

0x16f4,	// (0x0008e841) main_mup2_pane_g5_ParamLimits

0x16f4,	// (0x0008e841) main_mup2_pane_g5

0x16f4,	// (0x0008e841) main_mup2_pane_g6_ParamLimits

0x16f4,	// (0x0008e841) main_mup2_pane_g6

0x16f4,	// (0x0008e841) main_mup2_pane_g7_ParamLimits

0x16f4,	// (0x0008e841) main_mup2_pane_g7

0x0006,

0xf597,	// (0x0009c6e4) main_mup2_pane_g_ParamLimits

0xf597,	// (0x0009c6e4) main_mup2_pane_g

0x1702,	// (0x0008e84f) main_mup2_pane_t1_ParamLimits

0x1702,	// (0x0008e84f) main_mup2_pane_t1

0x1702,	// (0x0008e84f) main_mup2_pane_t2_ParamLimits

0x1702,	// (0x0008e84f) main_mup2_pane_t2

0x1702,	// (0x0008e84f) main_mup2_pane_t3_ParamLimits

0x1702,	// (0x0008e84f) main_mup2_pane_t3

0x1702,	// (0x0008e84f) main_mup2_pane_t4_ParamLimits

0x1702,	// (0x0008e84f) main_mup2_pane_t4

0x1702,	// (0x0008e84f) main_mup2_pane_t5_ParamLimits

0x1702,	// (0x0008e84f) main_mup2_pane_t5

0x1702,	// (0x0008e84f) main_mup2_pane_t6_ParamLimits

0x1702,	// (0x0008e84f) main_mup2_pane_t6

0x0005,

0xf5a6,	// (0x0009c6f3) main_mup2_pane_t_ParamLimits

0xf5a6,	// (0x0009c6f3) main_mup2_pane_t

0xce48,	// (0x00099f95) mup2_visualizer_pane_ParamLimits

0xce48,	// (0x00099f95) mup2_visualizer_pane

0xce48,	// (0x00099f95) mup_progress_pane_cp_ParamLimits

0xce48,	// (0x00099f95) mup_progress_pane_cp

0x7483,	// (0x000945d0) mup_volume_pane_cp_ParamLimits

0x7483,	// (0x000945d0) mup_volume_pane_cp

0x16d8,	// (0x0008e825) mup2_visualizer_pane_g1_ParamLimits

0x16d8,	// (0x0008e825) mup2_visualizer_pane_g1

0x16e6,	// (0x0008e833) mup2_visualizer_pane_g2_ParamLimits

0x16e6,	// (0x0008e833) mup2_visualizer_pane_g2

0x16e6,	// (0x0008e833) mup2_visualizer_pane_g3_ParamLimits

0x16e6,	// (0x0008e833) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x0009c1ec) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x0009c1ec) mup2_visualizer_pane_g

0x038f,	// (0x0008d4dc) aid_size_cell_fmradio

0x6fd9,	// (0x00094126) aid_height_parent_landcape

0x20f8,	// (0x0008f245) wml_content_pane_cp

0x2100,	// (0x0008f24d) wml_tabs_pane

0x2109,	// (0x0008f256) popup_wml_miniature_window

0x2111,	// (0x0008f25e) scroll_pane_cp021

0x2125,	// (0x0008f272) wml_content_pane_comp8

0x1410,	// (0x0008e55d) bg_popup_sub_pane_cp05

0xdf2c,	// (0x0009b079) popup_wml_miniature_window_g1

0xdf34,	// (0x0009b081) wml_miniature_view_pane

0x73c8,	// (0x00094515) aid_size_wml_view

0x73d0,	// (0x0009451d) wml_miniature_view_pane_g1

0x73d9,	// (0x00094526) wml_miniature_view_pane_g2

0x73e2,	// (0x0009452f) wml_miniature_view_pane_g3

0x73ea,	// (0x00094537) wml_miniature_view_pane_g4

0x73f2,	// (0x0009453f) wml_miniature_view_pane_g5

0x73fa,	// (0x00094547) wml_miniature_view_pane_g6

0x7402,	// (0x0009454f) wml_miniature_view_pane_g7

0x740a,	// (0x00094557) wml_miniature_view_pane_g8

0x0007,

0xf5b3,	// (0x0009c700) wml_miniature_view_pane_g

0xdf3c,	// (0x0009b089) background_graphic_ParamLimits

0xdf3c,	// (0x0009b089) background_graphic

0xdf48,	// (0x0009b095) wml_tabs_2_pane

0xdf51,	// (0x0009b09e) wml_tabs_3_pane_ParamLimits

0xdf51,	// (0x0009b09e) wml_tabs_3_pane

0xdf63,	// (0x0009b0b0) wml_tabs_4_pane_ParamLimits

0xdf63,	// (0x0009b0b0) wml_tabs_4_pane

0xdf79,	// (0x0009b0c6) wml_tabs_5_pane_ParamLimits

0xdf79,	// (0x0009b0c6) wml_tabs_5_pane

0xdf93,	// (0x0009b0e0) wml_tabs_pane_g2_ParamLimits

0xdf93,	// (0x0009b0e0) wml_tabs_pane_g2

0xdfa8,	// (0x0009b0f5) wml_tabs_pane_g3_ParamLimits

0xdfa8,	// (0x0009b0f5) wml_tabs_pane_g3

0xdfbd,	// (0x0009b10a) wml_tabs_2_active_pane_ParamLimits

0xdfbd,	// (0x0009b10a) wml_tabs_2_active_pane

0xdfbd,	// (0x0009b10a) wml_tabs_2_passive_pane_ParamLimits

0xdfbd,	// (0x0009b10a) wml_tabs_2_passive_pane

0x7412,	// (0x0009455f) wml_tabs_3_active_pane_cp_ParamLimits

0x7412,	// (0x0009455f) wml_tabs_3_active_pane_cp

0x7425,	// (0x00094572) wml_tabs_3_passive_pane_ParamLimits

0x7425,	// (0x00094572) wml_tabs_3_passive_pane

0x7436,	// (0x00094583) wml_tabs_3_passive_pane_cp_ParamLimits

0x7436,	// (0x00094583) wml_tabs_3_passive_pane_cp

0x744b,	// (0x00094598) tabs_4_active_pane

0x7453,	// (0x000945a0) tabs_4_passive_pane

0x745b,	// (0x000945a8) tabs_4_passive_pane_cp

0x7463,	// (0x000945b0) tabs_4_passive_pane_cp2

0x6e37,	// (0x00093f84) aid_height_text

0xce48,	// (0x00099f95) mup_volume_cont_pane_ParamLimits

0xce48,	// (0x00099f95) mup_volume_cont_pane

0x038f,	// (0x0008d4dc) aid_size_cell_pinb

0x038f,	// (0x0008d4dc) aid_size_list_pinb

0xce48,	// (0x00099f95) mup2_volume_cont_pane_ParamLimits

0xce48,	// (0x00099f95) mup2_volume_cont_pane

0x746d,	// (0x000945ba) mup2_volume_cont_pane_g1_ParamLimits

0x746d,	// (0x000945ba) mup2_volume_cont_pane_g1

0x40c6,	// (0x00091213) aid_size_cell_touch_ParamLimits

0x40c6,	// (0x00091213) aid_size_cell_touch

0x4383,	// (0x000914d0) touch_pane_ParamLimits

0x4383,	// (0x000914d0) touch_pane

0x4379,	// (0x000914c6) main_rss2_pane

0xdfd4,	// (0x0009b121) listscroll_rss2_pane

0xdfdd,	// (0x0009b12a) rss2_navigation_pane

0xdfe5,	// (0x0009b132) list_rss2_pane

0x2d84,	// (0x0008fed1) scroll_pane_cp22

0xdfed,	// (0x0009b13a) rss2_navigation_pane_g1

0xdff6,	// (0x0009b143) rss2_navigation_pane_g2

0xdffe,	// (0x0009b14b) rss2_navigation_pane_g3

0x0002,

0xf5c4,	// (0x0009c711) rss2_navigation_pane_g

0xe006,	// (0x0009b153) rss2_navigation_pane_t1

0x7499,	// (0x000945e6) rss2_list_single_pane_ParamLimits

0x7499,	// (0x000945e6) rss2_list_single_pane

0xe014,	// (0x0009b161) rss2_list_single_pane_t2

0xe022,	// (0x0009b16f) rss2_list_single_pane_t3_ParamLimits

0xe022,	// (0x0009b16f) rss2_list_single_pane_t3

0xe03f,	// (0x0009b18c) rss2_list_single_pane_t4

0x5fc1,	// (0x0009310e) smil_status_pane_g1

0x7002,	// (0x0009414f) main_image2_pane_ParamLimits

0x7002,	// (0x0009414f) main_image2_pane

0x2ca0,	// (0x0008fded) main_camera2_pane_g9_ParamLimits

0x2ca0,	// (0x0008fded) main_camera2_pane_g9

0x7370,	// (0x000944bd) main_camera2_pane_t5_ParamLimits

0x7370,	// (0x000944bd) main_camera2_pane_t5

0x7384,	// (0x000944d1) main_camera2_pane_t6_ParamLimits

0x7384,	// (0x000944d1) main_camera2_pane_t6

0x74bc,	// (0x00094609) main_image2_pane_g1_ParamLimits

0x74bc,	// (0x00094609) main_image2_pane_g1

0x6b6c,	// (0x00093cb9) smil2_video_pane_ParamLimits

0x6b6c,	// (0x00093cb9) smil2_video_pane

0x3fca,	// (0x00091117) aid_zoom_text_primary_cp

0x4314,	// (0x00091461) popup_preview_fixed_window

0x2052,	// (0x0008f19f) im_reading_pane_g1

0x7362,	// (0x000944af) cams2_bc_adjust_pane_cp_ParamLimits

0x7362,	// (0x000944af) cams2_bc_adjust_pane_cp

0x435f,	// (0x000914ac) cams2_bc_adjust_pane_ParamLimits

0x435f,	// (0x000914ac) cams2_bc_adjust_pane

0x060e,	// (0x0008d75b) cams2_bc_adjust_pane_g1

0x4379,	// (0x000914c6) cams2_slider_pane

0x060e,	// (0x0008d75b) cams2_slider_pane_g1

0x060e,	// (0x0008d75b) cams2_slider_pane_g2

0x0006,

0xf5cb,	// (0x0009c718) cams2_slider_pane_g

0x4418,	// (0x00091565) calc_display_pane_ParamLimits

0x4436,	// (0x00091583) calc_paper_pane_ParamLimits

0x4452,	// (0x0009159f) grid_calc_pane_ParamLimits

0x6178,	// (0x000932c5) popup_clock_digital_window_t1_ParamLimits

0x313a,	// (0x00090287) main_image_pane_t1

0x43fe,	// (0x0009154b) aid_size_cell_calc_ParamLimits

0x43fe,	// (0x0009154b) aid_size_cell_calc

0x7033,	// (0x00094180) popup_blid_sat_info2_window_ParamLimits

0x7033,	// (0x00094180) popup_blid_sat_info2_window

0xe04d,	// (0x0009b19a) aid_size_cell_blid

0xce48,	// (0x00099f95) bg_popup_window_pane_cp07

0xe06a,	// (0x0009b1b7) grid_popup_blid_pane

0xe074,	// (0x0009b1c1) heading_pane_cp05_ParamLimits

0xe074,	// (0x0009b1c1) heading_pane_cp05

0xe13e,	// (0x0009b28b) cell_popup_blid_pane_ParamLimits

0xe13e,	// (0x0009b28b) cell_popup_blid_pane

0xe168,	// (0x0009b2b5) cell_popup_blid_pane_g1

0xe170,	// (0x0009b2bd) cell_popup_blid_pane_t1

0xce48,	// (0x00099f95) mup2_indicator_pane_ParamLimits

0xce48,	// (0x00099f95) mup2_indicator_pane

0x038f,	// (0x0008d4dc) mup2_visualizer_osc_pane

0xdf16,	// (0x0009b063) mup2_visualizer_spec_pane_ParamLimits

0xdf16,	// (0x0009b063) mup2_visualizer_spec_pane

0x038f,	// (0x0008d4dc) mup2_spec_half_pane

0x038f,	// (0x0008d4dc) mup2_spec_half_pane_cp

0xe17e,	// (0x0009b2cb) mup2_spec_bar_pane_ParamLimits

0xe17e,	// (0x0009b2cb) mup2_spec_bar_pane

0x1d99,	// (0x0008eee6) mup2_spec_bar_pane_g1

0xe19d,	// (0x0009b2ea) mup2_spec_bar_pane_g2

0x0001,

0xf5f1,	// (0x0009c73e) mup2_spec_bar_pane_g

0x038f,	// (0x0008d4dc) mup2_osc_middle_pane

0x1d99,	// (0x0008eee6) mup2_visualizer_osc_pane_g1

0x03b9,	// (0x0008d506) popup_number_entry_window_t1_ParamLimits

0x03cc,	// (0x0008d519) popup_number_entry_window_t2_ParamLimits

0x03de,	// (0x0008d52b) popup_number_entry_window_t3_ParamLimits

0x03f0,	// (0x0008d53d) popup_number_entry_window_t5_ParamLimits

0x03f0,	// (0x0008d53d) popup_number_entry_window_t5

0xf040,	// (0x0009c18d) popup_number_entry_window_t_ParamLimits

0x0425,	// (0x0008d572) text_title_cp2_ParamLimits

0x6882,	// (0x000939cf) aid_hotspot_pointer_text2_pane

0x691c,	// (0x00093a69) main_viewer_pane_g9_ParamLimits

0x691c,	// (0x00093a69) main_viewer_pane_g9

0x229a,	// (0x0008f3e7) cale_month_pane_t1_ParamLimits

0x22d7,	// (0x0008f424) bg_cale_pane_ParamLimits

0x22ef,	// (0x0008f43c) list_cale_pane_ParamLimits

0x2300,	// (0x0008f44d) listscroll_cale_day_pane_t1

0x2312,	// (0x0008f45f) scroll_pane_cp09_ParamLimits

0x6528,	// (0x00093675) main_mup_eq_pane_t1_ParamLimits

0x6528,	// (0x00093675) main_mup_eq_pane_t1

0x6544,	// (0x00093691) main_mup_eq_pane_t2_ParamLimits

0x6544,	// (0x00093691) main_mup_eq_pane_t2

0x6560,	// (0x000936ad) main_mup_eq_pane_t3_ParamLimits

0x6560,	// (0x000936ad) main_mup_eq_pane_t3

0x657a,	// (0x000936c7) main_mup_eq_pane_t4_ParamLimits

0x657a,	// (0x000936c7) main_mup_eq_pane_t4

0x6594,	// (0x000936e1) main_mup_eq_pane_t5_ParamLimits

0x6594,	// (0x000936e1) main_mup_eq_pane_t5

0x65ae,	// (0x000936fb) main_mup_eq_pane_t6_ParamLimits

0x65ae,	// (0x000936fb) main_mup_eq_pane_t6

0x65c4,	// (0x00093711) main_mup_eq_pane_t7_ParamLimits

0x65c4,	// (0x00093711) main_mup_eq_pane_t7

0x65da,	// (0x00093727) main_mup_eq_pane_t8_ParamLimits

0x65da,	// (0x00093727) main_mup_eq_pane_t8

0x65f0,	// (0x0009373d) main_mup_eq_pane_t9_ParamLimits

0x65f0,	// (0x0009373d) main_mup_eq_pane_t9

0x660c,	// (0x00093759) main_mup_eq_pane_t10_ParamLimits

0x660c,	// (0x00093759) main_mup_eq_pane_t10

0x0009,

0xf39f,	// (0x0009c4ec) main_mup_eq_pane_t_ParamLimits

0xf39f,	// (0x0009c4ec) main_mup_eq_pane_t

0x66d1,	// (0x0009381e) mup_equalizer_pane_cp5_ParamLimits

0x66e9,	// (0x00093836) mup_equalizer_pane_cp6_ParamLimits

0x6701,	// (0x0009384e) mup_equalizer_pane_cp7_ParamLimits

0x4379,	// (0x000914c6) main_gallery_pane

0xdeb4,	// (0x0009b001) smil2_volume_pane

0xdebc,	// (0x0009b009) smil_status_volume_pane_g1_ParamLimits

0xdecf,	// (0x0009b01c) smil_status_volume_pane_g2_ParamLimits

0x720f,	// (0x0009435c) smil_status_volume_pane_g3_ParamLimits

0xf54a,	// (0x0009c697) smil_status_volume_pane_g_ParamLimits

0xce48,	// (0x00099f95) bg_popup_window_pane_cp07_ParamLimits

0xe055,	// (0x0009b1a2) blid_firmament_pane

0x0472,	// (0x0008d5bf) aid_size_cell_gallery_ParamLimits

0x0472,	// (0x0008d5bf) aid_size_cell_gallery

0x0472,	// (0x0008d5bf) grid_gallery_pane_ParamLimits

0x0472,	// (0x0008d5bf) grid_gallery_pane

0x2f97,	// (0x000900e4) cell_gallery_pane_ParamLimits

0x2f97,	// (0x000900e4) cell_gallery_pane

0x1093,	// (0x0008e1e0) bg_cell_gallery_focus_pane_ParamLimits

0x1093,	// (0x0008e1e0) bg_cell_gallery_focus_pane

0x16d8,	// (0x0008e825) cell_gallery_pane_g1_ParamLimits

0x16d8,	// (0x0008e825) cell_gallery_pane_g1

0x16d8,	// (0x0008e825) cell_gallery_pane_g2_ParamLimits

0x16d8,	// (0x0008e825) cell_gallery_pane_g2

0x16d8,	// (0x0008e825) cell_gallery_pane_g3_ParamLimits

0x16d8,	// (0x0008e825) cell_gallery_pane_g3

0x16e6,	// (0x0008e833) cell_gallery_pane_g4_ParamLimits

0x16e6,	// (0x0008e833) cell_gallery_pane_g4

0x0003,

0xf5f6,	// (0x0009c743) cell_gallery_pane_g_ParamLimits

0xf5f6,	// (0x0009c743) cell_gallery_pane_g

0xe1a7,	// (0x0009b2f4) bg_cell_gallery_focus_pane_g1

0xe1af,	// (0x0009b2fc) bg_cell_gallery_focus_pane_g2

0xe1b7,	// (0x0009b304) bg_cell_gallery_focus_pane_g3

0xe1bf,	// (0x0009b30c) bg_cell_gallery_focus_pane_g4

0xe1c7,	// (0x0009b314) bg_cell_gallery_focus_pane_g5

0xe1cf,	// (0x0009b31c) bg_cell_gallery_focus_pane_g6

0xe1d7,	// (0x0009b324) bg_cell_gallery_focus_pane_g7

0xe1df,	// (0x0009b32c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5ff,	// (0x0009c74c) bg_cell_gallery_focus_pane_g

0xe1e7,	// (0x0009b334) aid_firma_cardinal

0xe1fb,	// (0x0009b348) blid_firmament_pane_t1

0xe212,	// (0x0009b35f) blid_firmament_pane_t2

0xe229,	// (0x0009b376) blid_firmament_pane_t3

0xe240,	// (0x0009b38d) blid_firmament_pane_t4

0x0003,

0xf610,	// (0x0009c75d) blid_firmament_pane_t

0xe257,	// (0x0009b3a4) blid_sat_info_pane

0x1d99,	// (0x0008eee6) blid_sat_info_pane_g1

0x1d99,	// (0x0008eee6) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x0009c1fc) blid_sat_info_pane_g

0xe267,	// (0x0009b3b4) blid_sat_info_pane_t1

0xe275,	// (0x0009b3c2) smil2_volume_content_pane

0xe27e,	// (0x0009b3cb) smil2_volume_pane_g1

0x2aa2,	// (0x0008fbef) smil2_volume_content_pane_g1

0xe286,	// (0x0009b3d3) smil2_volume_content_pane_g2

0xe28f,	// (0x0009b3dc) smil2_volume_content_pane_g3

0xe298,	// (0x0009b3e5) smil2_volume_content_pane_g4

0xe2a1,	// (0x0009b3ee) smil2_volume_content_pane_g5

0xe2aa,	// (0x0009b3f7) smil2_volume_content_pane_g6

0xe2b3,	// (0x0009b400) smil2_volume_content_pane_g7

0xe2bc,	// (0x0009b409) smil2_volume_content_pane_g8

0xe2c5,	// (0x0009b412) smil2_volume_content_pane_g9

0xe2ce,	// (0x0009b41b) smil2_volume_content_pane_g10

0x0009,

0xf619,	// (0x0009c766) smil2_volume_content_pane_g

0x4a7b,	// (0x00091bc8) cale_week_day_heading_pane_t1_ParamLimits

0x4aa3,	// (0x00091bf0) cale_week_day_heading_pane_t2_ParamLimits

0x4ad0,	// (0x00091c1d) cale_week_day_heading_pane_t3_ParamLimits

0x4afd,	// (0x00091c4a) cale_week_day_heading_pane_t4_ParamLimits

0x4b2a,	// (0x00091c77) cale_week_day_heading_pane_t5_ParamLimits

0x4b57,	// (0x00091ca4) cale_week_day_heading_pane_t6_ParamLimits

0x4b84,	// (0x00091cd1) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x0009c294) cale_week_day_heading_pane_t_ParamLimits

0x1f3a,	// (0x0008f087) bg_cale_side_pane_ParamLimits

0x4bac,	// (0x00091cf9) cale_week_time_pane_t1_ParamLimits

0x4bd0,	// (0x00091d1d) cale_week_time_pane_t2_ParamLimits

0x4bf4,	// (0x00091d41) cale_week_time_pane_t3_ParamLimits

0x4c18,	// (0x00091d65) cale_week_time_pane_t4_ParamLimits

0x4c3c,	// (0x00091d89) cale_week_time_pane_t5_ParamLimits

0x4c62,	// (0x00091daf) cale_week_time_pane_t6_ParamLimits

0x4c8a,	// (0x00091dd7) cale_week_time_pane_t7_ParamLimits

0x4cb6,	// (0x00091e03) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x0009c2a3) cale_week_time_pane_t_ParamLimits

0x4ce6,	// (0x00091e33) cell_cale_week_pane_g2_ParamLimits

0x1f3a,	// (0x0008f087) bg_cale_side_pane_cp01_ParamLimits

0x5dac,	// (0x00092ef9) cale_month_week_pane_t1_ParamLimits

0x5dc5,	// (0x00092f12) cale_month_week_pane_t2_ParamLimits

0x5dde,	// (0x00092f2b) cale_month_week_pane_t3_ParamLimits

0x5df7,	// (0x00092f44) cale_month_week_pane_t4_ParamLimits

0x5e10,	// (0x00092f5d) cale_month_week_pane_t5_ParamLimits

0x5e2d,	// (0x00092f7a) cale_month_week_pane_t6_ParamLimits

0xf224,	// (0x0009c371) cale_month_week_pane_t_ParamLimits

0x5f7e,	// (0x000930cb) cell_cale_month_pane_g1_ParamLimits

0x4379,	// (0x000914c6) main_cale_event_viewer_pane

0x038f,	// (0x0008d4dc) listscroll_cale_event_viewer_pane

0xe2d7,	// (0x0009b424) list_cale_ev_pane

0xe2df,	// (0x0009b42c) scroll_pane_cp023

0x74c8,	// (0x00094615) field_cale_ev_pane_ParamLimits

0x74c8,	// (0x00094615) field_cale_ev_pane

0xe2eb,	// (0x0009b438) field_cale_ev_content_pane_ParamLimits

0xe2eb,	// (0x0009b438) field_cale_ev_content_pane

0xe2f7,	// (0x0009b444) field_cale_ev_pane_g1_ParamLimits

0xe2f7,	// (0x0009b444) field_cale_ev_pane_g1

0xe303,	// (0x0009b450) field_cale_ev_pane_g2_ParamLimits

0xe303,	// (0x0009b450) field_cale_ev_pane_g2

0xe31b,	// (0x0009b468) field_cale_ev_pane_g3_ParamLimits

0xe31b,	// (0x0009b468) field_cale_ev_pane_g3

0x0002,

0xf62e,	// (0x0009c77b) field_cale_ev_pane_g_ParamLimits

0xf62e,	// (0x0009c77b) field_cale_ev_pane_g

0xe333,	// (0x0009b480) field_cale_ev_pane_t1_ParamLimits

0xe333,	// (0x0009b480) field_cale_ev_pane_t1

0x74ec,	// (0x00094639) field_cale_ev_content_pane_t1_ParamLimits

0x74ec,	// (0x00094639) field_cale_ev_content_pane_t1

0x303c,	// (0x00090189) bg_button_pane_cp01

0x46d9,	// (0x00091826) listscroll_cale_week_pane_ParamLimits

0x1f02,	// (0x0008f04f) popup_toolbar_window_cp01

0x1f0b,	// (0x0008f058) listscroll_cale_week_pane_t1_ParamLimits

0x46d9,	// (0x00091826) listscroll_cale_day_pane_ParamLimits

0x1f02,	// (0x0008f04f) popup_toolbar_window_cp02

0x2300,	// (0x0008f44d) listscroll_cale_day_pane_t1_ParamLimits

0x6ff0,	// (0x0009413d) main_cale_month_pane_ParamLimits

0x7152,	// (0x0009429f) popup_toolbar_window_cp03_ParamLimits

0x7152,	// (0x0009429f) popup_toolbar_window_cp03

0x6a7c,	// (0x00093bc9) main_image_pane_g2_ParamLimits

0x6a7c,	// (0x00093bc9) main_image_pane_g2

0x6a88,	// (0x00093bd5) main_image_pane_g3_ParamLimits

0x6a88,	// (0x00093bd5) main_image_pane_g3

0x0002,

0xf431,	// (0x0009c57e) main_image_pane_g_ParamLimits

0xf431,	// (0x0009c57e) main_image_pane_g

0x313a,	// (0x00090287) main_image_pane_t1_ParamLimits

0x6a94,	// (0x00093be1) main_image_pane_t2_ParamLimits

0x6a94,	// (0x00093be1) main_image_pane_t2

0x6aa6,	// (0x00093bf3) main_image_pane_t3_ParamLimits

0x6aa6,	// (0x00093bf3) main_image_pane_t3

0x6ab8,	// (0x00093c05) main_image_pane_t4_ParamLimits

0x6ab8,	// (0x00093c05) main_image_pane_t4

0x0003,

0xf438,	// (0x0009c585) main_image_pane_t_ParamLimits

0xf438,	// (0x0009c585) main_image_pane_t

0x6aca,	// (0x00093c17) popup_image_details_window_cp01

0x6ad4,	// (0x00093c21) popup_toobar_trans_pane_cp01_ParamLimits

0x6ad4,	// (0x00093c21) popup_toobar_trans_pane_cp01

0x7094,	// (0x000941e1) popup_image_details_window_ParamLimits

0x7094,	// (0x000941e1) popup_image_details_window

0x70a2,	// (0x000941ef) popup_image_focus_window

0x435f,	// (0x000914ac) camera2_autofocus_pane_ParamLimits

0x435f,	// (0x000914ac) camera2_autofocus_pane

0x038f,	// (0x0008d4dc) bg_popup_sub_pane_cp06

0xe34a,	// (0x0009b497) popup_image_focus_window_g1

0xe352,	// (0x0009b49f) popup_image_focus_window_g2

0xe35a,	// (0x0009b4a7) popup_image_focus_window_g3

0xe362,	// (0x0009b4af) popup_image_focus_window_g4

0x0003,

0xf635,	// (0x0009c782) popup_image_focus_window_g

0xe36a,	// (0x0009b4b7) popup_image_focus_window_t1

0xe378,	// (0x0009b4c5) popup_image_focus_window_t2

0xe388,	// (0x0009b4d5) popup_image_focus_window_t3

0x0002,

0xf63e,	// (0x0009c78b) popup_image_focus_window_t

0x16d8,	// (0x0008e825) camera2_autofocus_pane_g1

0x1093,	// (0x0008e1e0) bg_tb_trans_pane_cp01

0xe396,	// (0x0009b4e3) popup_image_details_window_g1

0xe3a9,	// (0x0009b4f6) popup_image_details_window_g2

0x0002,

0xf650,	// (0x0009c79d) popup_image_details_window_g

0xe3d2,	// (0x0009b51f) popup_image_details_window_t1

0xe3e4,	// (0x0009b531) popup_image_details_window_t2

0xe3fd,	// (0x0009b54a) popup_image_details_window_t3

0xe411,	// (0x0009b55e) popup_image_details_window_t4

0xe42c,	// (0x0009b579) popup_image_details_window_t5

0x0004,

0xf657,	// (0x0009c7a4) popup_image_details_window_t

0x1de3,	// (0x0008ef30) bg_calc_paper_pane_ParamLimits

0x4379,	// (0x000914c6) grid_highlight_pane_cp013

0x448d,	// (0x000915da) list_calc_pane_ParamLimits

0x449f,	// (0x000915ec) scroll_pane_cp024

0x1df7,	// (0x0008ef44) bg_calc_display_pane_ParamLimits

0x44a7,	// (0x000915f4) calc_display_pane_t1_ParamLimits

0x44bc,	// (0x00091609) calc_display_pane_t2_ParamLimits

0x44d1,	// (0x0009161e) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x0009c214) calc_display_pane_t_ParamLimits

0x45a1,	// (0x000916ee) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x0009c231) cell_calc_pane_g

0x45aa,	// (0x000916f7) cell_calc_pane_t1

0x1e4c,	// (0x0008ef99) grid_highlight_pane_cp02_ParamLimits

0x1e62,	// (0x0008efaf) toolbar_button_pane_cp01_ParamLimits

0x1e62,	// (0x0008efaf) toolbar_button_pane_cp01

0xce56,	// (0x00099fa3) temp_image_control_pane_ParamLimits

0xce56,	// (0x00099fa3) temp_image_control_pane

0x7002,	// (0x0009414f) main_mp3_pane

0xe446,	// (0x0009b593) temp_image_control_pane_g1_ParamLimits

0xe446,	// (0x0009b593) temp_image_control_pane_g1

0xe454,	// (0x0009b5a1) temp_image_control_pane_g2_ParamLimits

0xe454,	// (0x0009b5a1) temp_image_control_pane_g2

0xe466,	// (0x0009b5b3) temp_image_control_pane_g3_ParamLimits

0xe466,	// (0x0009b5b3) temp_image_control_pane_g3

0x7507,	// (0x00094654) temp_image_control_pane_g4_ParamLimits

0x7507,	// (0x00094654) temp_image_control_pane_g4

0x0003,

0xf662,	// (0x0009c7af) temp_image_control_pane_g_ParamLimits

0xf662,	// (0x0009c7af) temp_image_control_pane_g

0xe446,	// (0x0009b593) main_mp3_pane_g1

0x7518,	// (0x00094665) main_mp3_pane_g2

0x0007,

0xf66b,	// (0x0009c7b8) main_mp3_pane_g

0xe49b,	// (0x0009b5e8) main_mp3_pane_t1

0x16e6,	// (0x0008e833) main_camera_pane_g8_ParamLimits

0x16e6,	// (0x0008e833) main_camera_pane_g8

0x4e92,	// (0x00091fdf) main_video_pane_g7_ParamLimits

0x4e92,	// (0x00091fdf) main_video_pane_g7

0x7370,	// (0x000944bd) main_camera2_pane_t7_ParamLimits

0x7370,	// (0x000944bd) main_camera2_pane_t7

0x20b8,	// (0x0008f205) scroll_pane_cp025_ParamLimits

0x20b8,	// (0x0008f205) scroll_pane_cp025

0x20cc,	// (0x0008f219) scroll_pane_cp026_ParamLimits

0x20cc,	// (0x0008f219) scroll_pane_cp026

0x20db,	// (0x0008f228) wml_content_pane_ParamLimits

0x4379,	// (0x000914c6) main_touch_calib_pane

0x75bc,	// (0x00094709) main_touch_calib_pane_g1

0x75c8,	// (0x00094715) main_touch_calib_pane_g2

0x75d4,	// (0x00094721) main_touch_calib_pane_g3

0x75e0,	// (0x0009472d) main_touch_calib_pane_g4

0x0003,

0xf689,	// (0x0009c7d6) main_touch_calib_pane_g

0x75ec,	// (0x00094739) main_touch_calib_pane_t1

0x7603,	// (0x00094750) main_touch_calib_pane_t2

0x0004,

0xf692,	// (0x0009c7df) main_touch_calib_pane_t

0x2dff,	// (0x0008ff4c) mup_progress_pane_cp02

0x2e1e,	// (0x0008ff6b) navi_pane_g1

0x2e80,	// (0x0008ffcd) navi_pane_mp_t3

0x7002,	// (0x0009414f) main_mp3_pane_ParamLimits

0x7193,	// (0x000942e0) navi_pane_ParamLimits

0xe446,	// (0x0009b593) main_mp3_pane_g1_ParamLimits

0x7518,	// (0x00094665) main_mp3_pane_g2_ParamLimits

0x7524,	// (0x00094671) main_mp3_pane_g3_ParamLimits

0x7524,	// (0x00094671) main_mp3_pane_g3

0x7530,	// (0x0009467d) main_mp3_pane_g4_ParamLimits

0x7530,	// (0x0009467d) main_mp3_pane_g4

0x16d8,	// (0x0008e825) main_mp3_pane_g5_ParamLimits

0x16d8,	// (0x0008e825) main_mp3_pane_g5

0xe476,	// (0x0009b5c3) main_mp3_pane_g6_ParamLimits

0xe476,	// (0x0009b5c3) main_mp3_pane_g6

0xe483,	// (0x0009b5d0) main_mp3_pane_g7_ParamLimits

0xe483,	// (0x0009b5d0) main_mp3_pane_g7

0xe48f,	// (0x0009b5dc) main_mp3_pane_g8_ParamLimits

0xe48f,	// (0x0009b5dc) main_mp3_pane_g8

0xf66b,	// (0x0009c7b8) main_mp3_pane_g_ParamLimits

0x753c,	// (0x00094689) main_mp3_pane_t2

0x754c,	// (0x00094699) main_mp3_pane_t3

0xe4a9,	// (0x0009b5f6) main_mp3_pane_t4

0xe4b7,	// (0x0009b604) main_mp3_pane_t5

0x0005,

0xf67c,	// (0x0009c7c9) main_mp3_pane_t

0xe4c5,	// (0x0009b612) mup_progress_pane_cp01

0x3fca,	// (0x00091117) aid_zoom_text_secondary2

0xe2d7,	// (0x0009b424) list_cale_ev2_pane

0xe2df,	// (0x0009b42c) scroll_pane_cp023_ParamLimits

0x765e,	// (0x000947ab) field_cale_ev2_pane_ParamLimits

0x765e,	// (0x000947ab) field_cale_ev2_pane

0x7679,	// (0x000947c6) field_cale_ev2_pane_g1_ParamLimits

0x7679,	// (0x000947c6) field_cale_ev2_pane_g1

0x7685,	// (0x000947d2) field_cale_ev2_pane_g2_ParamLimits

0x7685,	// (0x000947d2) field_cale_ev2_pane_g2

0x769d,	// (0x000947ea) field_cale_ev2_pane_g3_ParamLimits

0x769d,	// (0x000947ea) field_cale_ev2_pane_g3

0x0003,

0xf69d,	// (0x0009c7ea) field_cale_ev2_pane_g_ParamLimits

0xf69d,	// (0x0009c7ea) field_cale_ev2_pane_g

0x76b5,	// (0x00094802) field_cale_ev2_pane_t1_ParamLimits

0x76b5,	// (0x00094802) field_cale_ev2_pane_t1

0x76cc,	// (0x00094819) field_cale_ev2_pane_t2_ParamLimits

0x76cc,	// (0x00094819) field_cale_ev2_pane_t2

0x0001,

0xf6a6,	// (0x0009c7f3) field_cale_ev2_pane_t_ParamLimits

0xf6a6,	// (0x0009c7f3) field_cale_ev2_pane_t

0x6984,	// (0x00093ad1) main_postcard_pane_g5_ParamLimits

0x6984,	// (0x00093ad1) main_postcard_pane_g5

0x6992,	// (0x00093adf) main_postcard_pane_g6_ParamLimits

0x6992,	// (0x00093adf) main_postcard_pane_g6

0x0472,	// (0x0008d5bf) camera2_autofocus_pane_cp_ParamLimits

0x0472,	// (0x0008d5bf) camera2_autofocus_pane_cp

0x7002,	// (0x0009414f) main_mup3_pane

0x7724,	// (0x00094871) main_mup3_pane_g1_ParamLimits

0x7724,	// (0x00094871) main_mup3_pane_g1

0x7745,	// (0x00094892) main_mup3_pane_g2_ParamLimits

0x7745,	// (0x00094892) main_mup3_pane_g2

0x77b9,	// (0x00094906) main_mup3_pane_g3_ParamLimits

0x77b9,	// (0x00094906) main_mup3_pane_g3

0x781e,	// (0x0009496b) main_mup3_pane_g4_ParamLimits

0x781e,	// (0x0009496b) main_mup3_pane_g4

0x7883,	// (0x000949d0) main_mup3_pane_g5_ParamLimits

0x7883,	// (0x000949d0) main_mup3_pane_g5

0x78e8,	// (0x00094a35) main_mup3_pane_g6_ParamLimits

0x78e8,	// (0x00094a35) main_mup3_pane_g6

0x16e6,	// (0x0008e833) main_mup3_pane_g7_ParamLimits

0x16e6,	// (0x0008e833) main_mup3_pane_g7

0x0007,

0xf6b6,	// (0x0009c803) main_mup3_pane_g_ParamLimits

0xf6b6,	// (0x0009c803) main_mup3_pane_g

0x7962,	// (0x00094aaf) main_mup3_pane_t1_ParamLimits

0x7962,	// (0x00094aaf) main_mup3_pane_t1

0x79c7,	// (0x00094b14) main_mup3_pane_t2_ParamLimits

0x79c7,	// (0x00094b14) main_mup3_pane_t2

0x7a90,	// (0x00094bdd) main_mup3_pane_t4_ParamLimits

0x7a90,	// (0x00094bdd) main_mup3_pane_t4

0x7ae4,	// (0x00094c31) main_mup3_pane_t5_ParamLimits

0x7ae4,	// (0x00094c31) main_mup3_pane_t5

0x7ba0,	// (0x00094ced) main_mup3_pane_t6_ParamLimits

0x7ba0,	// (0x00094ced) main_mup3_pane_t6

0x0005,

0xf6c7,	// (0x0009c814) main_mup3_pane_t_ParamLimits

0xf6c7,	// (0x0009c814) main_mup3_pane_t

0x7c4a,	// (0x00094d97) mup3_progress_pane_ParamLimits

0x7c4a,	// (0x00094d97) mup3_progress_pane

0x7cc8,	// (0x00094e15) popup_mup3_control_window_ParamLimits

0x7cc8,	// (0x00094e15) popup_mup3_control_window

0xe4cd,	// (0x0009b61a) popup_mup3_text_window

0x7ce5,	// (0x00094e32) mup3_progress_pane_t1

0x7d03,	// (0x00094e50) mup3_progress_pane_t2

0xe4d5,	// (0x0009b622) mup3_progress_pane_t3

0x0002,

0xf6d4,	// (0x0009c821) mup3_progress_pane_t

0xe521,	// (0x0009b66e) mup_progress_pane_cp03

0x038f,	// (0x0008d4dc) bg_tb_trans_pane_cp04

0x7d21,	// (0x00094e6e) mup3_volume_pane

0x7d29,	// (0x00094e76) popup_mup3_control_window_g1

0x0597,	// (0x0008d6e4) mup3_volume_pane_g1

0x05a0,	// (0x0008d6ed) mup3_volume_pane_g2

0x05a9,	// (0x0008d6f6) mup3_volume_pane_g3

0x0002,

0xf6db,	// (0x0009c828) mup3_volume_pane_g

0x038f,	// (0x0008d4dc) bg_tb_trans_pane_cp03

0xe531,	// (0x0009b67e) popup_mup3_text_window_g1

0xe539,	// (0x0009b686) popup_mup3_text_window_t1

0x1e3f,	// (0x0008ef8c) list_calc_item_pane_g1_ParamLimits

0xdfcb,	// (0x0009b118) mup_volume_pane_cp_g1

0x761c,	// (0x00094769) main_touch_calib_pane_t3

0x7632,	// (0x0009477f) main_touch_calib_pane_t4

0x7648,	// (0x00094795) main_touch_calib_pane_t5

0x40b2,	// (0x000911ff) aid_cell_size_toolbar2

0x40ba,	// (0x00091207) aid_popup3_width_pane

0x3fba,	// (0x00091107) aid_zoom_text_msg_primary

0x4d92,	// (0x00091edf) vorec_t7

0x1e03,	// (0x0008ef50) bg_calc_paper_pane_g1_ParamLimits

0x1e1b,	// (0x0008ef68) bg_calc_paper_pane_g2_ParamLimits

0x1e0f,	// (0x0008ef5c) bg_calc_paper_pane_g3_ParamLimits

0x1e33,	// (0x0008ef80) bg_calc_paper_pane_g4_ParamLimits

0x1e27,	// (0x0008ef74) bg_calc_paper_pane_g5_ParamLimits

0x4512,	// (0x0009165f) bg_calc_paper_pane_g6_ParamLimits

0x4523,	// (0x00091670) bg_calc_paper_pane_g7_ParamLimits

0x4534,	// (0x00091681) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x0009c21b) bg_calc_paper_pane_g_ParamLimits

0x4545,	// (0x00091692) calc_bg_paper_pane_g9_ParamLimits

0x0472,	// (0x0008d5bf) image_qvga_pane_ParamLimits

0x0472,	// (0x0008d5bf) image_qvga_pane

0x166b,	// (0x0008e7b8) bg_popup_sub_pane_cp04_ParamLimits

0x30b6,	// (0x00090203) popup_mup_playback_window_g1_ParamLimits

0x30c2,	// (0x0009020f) popup_mup_playback_window_t1_ParamLimits

0x30d7,	// (0x00090224) popup_mup_playback_window_t2_ParamLimits

0xf42c,	// (0x0009c579) popup_mup_playback_window_t_ParamLimits

0x16d8,	// (0x0008e825) main_mup2_pane_g3_ParamLimits

0x16d8,	// (0x0008e825) main_mup2_pane_g3

0x5045,	// (0x00092192) popup_toolbar_window_cp04

0xd132,	// (0x0009a27f) popup_call2_audio_second_window_g3_ParamLimits

0xd132,	// (0x0009a27f) popup_call2_audio_second_window_g3

0xd53c,	// (0x0009a689) popup_call2_audio_first_window_g4_ParamLimits

0xd53c,	// (0x0009a689) popup_call2_audio_first_window_g4

0xdb63,	// (0x0009acb0) popup_call2_audio_in_window_g4_ParamLimits

0xdb63,	// (0x0009acb0) popup_call2_audio_in_window_g4

0x6a6f,	// (0x00093bbc) aid_area_sk_bg_cut_ParamLimits

0x6a6f,	// (0x00093bbc) aid_area_sk_bg_cut

0x30ec,	// (0x00090239) aid_area_sk_bg_cut_2_ParamLimits

0x30ec,	// (0x00090239) aid_area_sk_bg_cut_2

0x038f,	// (0x0008d4dc) aid_placing_details_win

0x038f,	// (0x0008d4dc) aid_placing_details_win_2

0x16d8,	// (0x0008e825) camera2_autofocus_pane_g1_ParamLimits

0x4305,	// (0x00091452) popup_fixed_preview_cale_window_ParamLimits

0x4305,	// (0x00091452) popup_fixed_preview_cale_window

0x2ed9,	// (0x00090026) navi_slider_pane_g3

0x2ed0,	// (0x0009001d) navi_slider_pane_g4

0x2ec7,	// (0x00090014) navi_slider_pane_g5

0x2ed9,	// (0x00090026) navi_slider_pane_g6

0x64fc,	// (0x00093649) navi_slider_pane_g7

0x3009,	// (0x00090156) mup_scale_pane_g3

0x3012,	// (0x0009015f) mup_scale_pane_g4

0x301b,	// (0x00090168) mup_scale_pane_g5

0x6719,	// (0x00093866) mup_scale_pane_g6

0x6722,	// (0x0009386f) mup_scale_pane_g7

0x060e,	// (0x0008d75b) cams2_slider_pane_g3

0x060e,	// (0x0008d75b) cams2_slider_pane_g4

0x060e,	// (0x0008d75b) cams2_slider_pane_g5

0x060e,	// (0x0008d75b) cams2_slider_pane_g6

0x060e,	// (0x0008d75b) cams2_slider_pane_g7

0x1d99,	// (0x0008eee6) camera2_autofocus_pane_cp_g1

0xde3b,	// (0x0009af88) bg_popup_preview_window_pane_cp02_ParamLimits

0xde3b,	// (0x0009af88) bg_popup_preview_window_pane_cp02

0xe547,	// (0x0009b694) list_fp_cale_pane_ParamLimits

0xe547,	// (0x0009b694) list_fp_cale_pane

0xe553,	// (0x0009b6a0) popup_fixed_preview_cale_window_t1_ParamLimits

0xe553,	// (0x0009b6a0) popup_fixed_preview_cale_window_t1

0x7d32,	// (0x00094e7f) popup_fixed_preview_cale_window_t2_ParamLimits

0x7d32,	// (0x00094e7f) popup_fixed_preview_cale_window_t2

0x7d47,	// (0x00094e94) popup_fixed_preview_cale_window_t3_ParamLimits

0x7d47,	// (0x00094e94) popup_fixed_preview_cale_window_t3

0x0002,

0xf6e2,	// (0x0009c82f) popup_fixed_preview_cale_window_t_ParamLimits

0xf6e2,	// (0x0009c82f) popup_fixed_preview_cale_window_t

0x7d5c,	// (0x00094ea9) list_single_fp_cale_pane_ParamLimits

0x7d5c,	// (0x00094ea9) list_single_fp_cale_pane

0xe571,	// (0x0009b6be) list_single_fp_cale_pane_g1_ParamLimits

0xe571,	// (0x0009b6be) list_single_fp_cale_pane_g1

0xe57d,	// (0x0009b6ca) list_single_fp_cale_pane_g2_ParamLimits

0xe57d,	// (0x0009b6ca) list_single_fp_cale_pane_g2

0x0002,

0xf6e9,	// (0x0009c836) list_single_fp_cale_pane_g_ParamLimits

0xf6e9,	// (0x0009c836) list_single_fp_cale_pane_g

0xe596,	// (0x0009b6e3) list_single_fp_cale_pane_t1_ParamLimits

0xe596,	// (0x0009b6e3) list_single_fp_cale_pane_t1

0xe5a8,	// (0x0009b6f5) list_single_fp_cale_pane_t2_ParamLimits

0xe5a8,	// (0x0009b6f5) list_single_fp_cale_pane_t2

0x0001,

0xf6f0,	// (0x0009c83d) list_single_fp_cale_pane_t_ParamLimits

0xf6f0,	// (0x0009c83d) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4379,	// (0x000914c6) main_dialer_pane

0x038f,	// (0x0008d4dc) aid_cell_size_keypad

0x038f,	// (0x0008d4dc) dialer_ne_pane

0x038f,	// (0x0008d4dc) grid_dialer_command_1_pane

0x038f,	// (0x0008d4dc) grid_dialer_command_2_pane

0x038f,	// (0x0008d4dc) grid_dialer_keypad_pane

0xce48,	// (0x00099f95) bg_popup_call_pane_cp06_ParamLimits

0xce48,	// (0x00099f95) bg_popup_call_pane_cp06

0xce48,	// (0x00099f95) dialer_ne_clear_pane_ParamLimits

0xce48,	// (0x00099f95) dialer_ne_clear_pane

0x1d99,	// (0x0008eee6) dialer_ne_pane_g1

0x1db7,	// (0x0008ef04) dialer_ne_pane_t1_ParamLimits

0x1db7,	// (0x0008ef04) dialer_ne_pane_t1

0xe5db,	// (0x0009b728) dialer_ne_pane_t2_ParamLimits

0xe5db,	// (0x0009b728) dialer_ne_pane_t2

0x7d6c,	// (0x00094eb9) dialer_ne_pane_t3_ParamLimits

0x7d6c,	// (0x00094eb9) dialer_ne_pane_t3

0x0002,

0xf6f5,	// (0x0009c842) dialer_ne_pane_t_ParamLimits

0xf6f5,	// (0x0009c842) dialer_ne_pane_t

0x7d6c,	// (0x00094eb9) dialer_ne_pane_t3_copy1_ParamLimits

0x7d6c,	// (0x00094eb9) dialer_ne_pane_t3_copy1

0xe5f8,	// (0x0009b745) cell_dialer_keypad_pane_ParamLimits

0xe5f8,	// (0x0009b745) cell_dialer_keypad_pane

0x1093,	// (0x0008e1e0) cell_dialer_command_1_pane_ParamLimits

0x1093,	// (0x0008e1e0) cell_dialer_command_1_pane

0xe60f,	// (0x0009b75c) cell_dialer_command_2_pane_ParamLimits

0xe60f,	// (0x0009b75c) cell_dialer_command_2_pane

0x1093,	// (0x0008e1e0) bg_button_pane_cp02_ParamLimits

0x1093,	// (0x0008e1e0) bg_button_pane_cp02

0x16d8,	// (0x0008e825) cell_dialer_keypad_pane_g1_ParamLimits

0x16d8,	// (0x0008e825) cell_dialer_keypad_pane_g1

0x1093,	// (0x0008e1e0) bg_button_pane_cp03_ParamLimits

0x1093,	// (0x0008e1e0) bg_button_pane_cp03

0x16d8,	// (0x0008e825) cell_dialer_command_1_pane_g1_ParamLimits

0x16d8,	// (0x0008e825) cell_dialer_command_1_pane_g1

0x038f,	// (0x0008d4dc) bg_button_pane_cp04

0x1d99,	// (0x0008eee6) cell_dialer_command_2_pane_g1

0x038f,	// (0x0008d4dc) bg_button_pane_cp06

0x1d99,	// (0x0008eee6) dialer_ne_clear_pane_g1

0x6437,	// (0x00093584) navi_pane_g2

0x6465,	// (0x000935b2) navi_pane_g3

0x0002,

0xf334,	// (0x0009c481) navi_pane_g

0x6490,	// (0x000935dd) navi_pane_mv_g2

0x64b7,	// (0x00093604) navi_pane_mv_g5

0x64bf,	// (0x0009360c) navi_pane_mv_t1

0x1df7,	// (0x0008ef44) main_clock2_pane

0x0472,	// (0x0008d5bf) main_clock2_list_pane_ParamLimits

0x0472,	// (0x0008d5bf) main_clock2_list_pane

0x7de1,	// (0x00094f2e) main_clock2_pane_t1_ParamLimits

0x7de1,	// (0x00094f2e) main_clock2_pane_t1

0x7e0f,	// (0x00094f5c) main_clock2_pane_t2_ParamLimits

0x7e0f,	// (0x00094f5c) main_clock2_pane_t2

0x0004,

0xf701,	// (0x0009c84e) main_clock2_pane_t_ParamLimits

0xf701,	// (0x0009c84e) main_clock2_pane_t

0x7e74,	// (0x00094fc1) popup_clock_analogue_window_cp03_ParamLimits

0x7e74,	// (0x00094fc1) popup_clock_analogue_window_cp03

0x7e92,	// (0x00094fdf) popup_clock_digital_window_cp02_ParamLimits

0x7e92,	// (0x00094fdf) popup_clock_digital_window_cp02

0x7f07,	// (0x00095054) main_clock2_list_single_pane_ParamLimits

0x7f07,	// (0x00095054) main_clock2_list_single_pane

0x1f95,	// (0x0008f0e2) list_highlight_pane_cp05

0xe650,	// (0x0009b79d) main_clock2_list_single_pane_t1

0x5045,	// (0x00092192) popup_toolbar_window_cp04_ParamLimits

0x16e6,	// (0x0008e833) camera2_autofocus_pane_g2_ParamLimits

0x16e6,	// (0x0008e833) camera2_autofocus_pane_g2

0x16e6,	// (0x0008e833) camera2_autofocus_pane_g3_ParamLimits

0x16e6,	// (0x0008e833) camera2_autofocus_pane_g3

0x16e6,	// (0x0008e833) camera2_autofocus_pane_g4_ParamLimits

0x16e6,	// (0x0008e833) camera2_autofocus_pane_g4

0x16e6,	// (0x0008e833) camera2_autofocus_pane_g5_ParamLimits

0x16e6,	// (0x0008e833) camera2_autofocus_pane_g5

0x0004,

0xf645,	// (0x0009c792) camera2_autofocus_pane_g_ParamLimits

0xf645,	// (0x0009c792) camera2_autofocus_pane_g

0x76e1,	// (0x0009482e) camera2_autofocus_pane_cp_g2

0x76e9,	// (0x00094836) camera2_autofocus_pane_cp_g3

0x76f1,	// (0x0009483e) camera2_autofocus_pane_cp_g4

0x76f9,	// (0x00094846) camera2_autofocus_pane_cp_g5

0x0004,

0xf6ab,	// (0x0009c7f8) camera2_autofocus_pane_cp_g

0x038f,	// (0x0008d4dc) popup_dialer_spcha_window

0x038f,	// (0x0008d4dc) bg_popup_sub_pane_cp07

0x038f,	// (0x0008d4dc) list_spcha_pane

0xe65e,	// (0x0009b7ab) list_single_spcha_pane_ParamLimits

0xe65e,	// (0x0009b7ab) list_single_spcha_pane

0x038f,	// (0x0008d4dc) list_highlight_pane_cp06

0x2af5,	// (0x0008fc42) list_single_spcha_pane_t1

0xd90d,	// (0x0009aa5a) popup_call2_audio_out_window_g4_ParamLimits

0xd90d,	// (0x0009aa5a) popup_call2_audio_out_window_g4

0x4379,	// (0x000914c6) main_imed2_pane

0x70ac,	// (0x000941f9) popup_imed_adjust2_window

0x70bf,	// (0x0009420c) popup_imed_trans_window_ParamLimits

0x70bf,	// (0x0009420c) popup_imed_trans_window

0xe0a0,	// (0x0009b1ed) popup_blid_sat_info2_window_t1

0xe0ae,	// (0x0009b1fb) popup_blid_sat_info2_window_t2

0x000a,

0xf5da,	// (0x0009c727) popup_blid_sat_info2_window_t

0x7fbe,	// (0x0009510b) aid_size_cell_colour_35

0x7fd8,	// (0x00095125) aid_size_cell_colour_112

0x7fef,	// (0x0009513c) aid_size_cell_effect

0x1093,	// (0x0008e1e0) bg_tb_trans_pane_cp02

0x2ac1,	// (0x0008fc0e) heading_imed_pane

0x8009,	// (0x00095156) listscroll_imed_pane

0xe670,	// (0x0009b7bd) heading_imed_pane_g1

0xe678,	// (0x0009b7c5) heading_imed_pane_t1

0xe686,	// (0x0009b7d3) grid_imed_colour_35_pane_ParamLimits

0xe686,	// (0x0009b7d3) grid_imed_colour_35_pane

0x8015,	// (0x00095162) grid_imed_effect_pane

0xe6a2,	// (0x0009b7ef) list_imed_aspect_pane

0x8025,	// (0x00095172) scroll_pane_cp027_ParamLimits

0x8025,	// (0x00095172) scroll_pane_cp027

0x8031,	// (0x0009517e) cell_imed_effect_pane_ParamLimits

0x8031,	// (0x0009517e) cell_imed_effect_pane

0xe6aa,	// (0x0009b7f7) cell_imed_colour_pane_ParamLimits

0xe6aa,	// (0x0009b7f7) cell_imed_colour_pane

0xe6f4,	// (0x0009b841) cell_imed_colour_pane_g1_ParamLimits

0xe6f4,	// (0x0009b841) cell_imed_colour_pane_g1

0xe705,	// (0x0009b852) hgihlgiht_grid_pane_cp016_ParamLimits

0xe705,	// (0x0009b852) hgihlgiht_grid_pane_cp016

0x804d,	// (0x0009519a) cell_imed_effect_pane_g1

0x8055,	// (0x000951a2) grid_highlight_pane_cp017

0xe716,	// (0x0009b863) list_imed_single_pane_ParamLimits

0xe716,	// (0x0009b863) list_imed_single_pane

0x038f,	// (0x0008d4dc) list_highlight_pane_cp07

0xe72a,	// (0x0009b877) list_imed_aspect_pane_comp1_t1

0x2f97,	// (0x000900e4) bg_tb_trans_pane_cp05

0xe74c,	// (0x0009b899) popup_imed_adjust2_window_g1

0xe773,	// (0x0009b8c0) popup_imed_adjust2_window_t1

0xe78b,	// (0x0009b8d8) slider_imed_adjust_pane

0xe79f,	// (0x0009b8ec) slider_imed_adjust_pane_g1

0xe7af,	// (0x0009b8fc) slider_imed_adjust_pane_g2

0xe7bf,	// (0x0009b90c) slider_imed_adjust_pane_g3

0xe7d0,	// (0x0009b91d) slider_imed_adjust_pane_g4

0x0003,

0xf71e,	// (0x0009c86b) slider_imed_adjust_pane_g

0x805e,	// (0x000951ab) aid_size_cell_clipart2

0xe7e1,	// (0x0009b92e) grid_imed_clipart_pane

0x302c,	// (0x00090179) scroll_pane_cp031

0x806a,	// (0x000951b7) cell_imed_clipart_pane_ParamLimits

0x806a,	// (0x000951b7) cell_imed_clipart_pane

0x8088,	// (0x000951d5) cell_imed_clipart_pane_g1

0x038f,	// (0x0008d4dc) grid_highlight_pane_cp014

0x7dc3,	// (0x00094f10) main_clock2_pane_g1_ParamLimits

0x7dc3,	// (0x00094f10) main_clock2_pane_g1

0x7eae,	// (0x00094ffb) aid_call2_pane_cp10

0x7ec0,	// (0x0009500d) aid_call_pane_cp10

0x2df3,	// (0x0008ff40) popup_clock_analogue_window_cp10_g1

0x2df3,	// (0x0008ff40) popup_clock_analogue_window_cp10_g2

0x7ed2,	// (0x0009501f) popup_clock_analogue_window_cp10_g3

0x7ed2,	// (0x0009501f) popup_clock_analogue_window_cp10_g4

0x2df3,	// (0x0008ff40) popup_clock_analogue_window_cp10_g5

0x0004,

0xf70c,	// (0x0009c859) popup_clock_analogue_window_cp10_g

0x7ee8,	// (0x00095035) popup_clock_analogue_window_cp10_t1

0x7f19,	// (0x00095066) clock_digital_number_pane_cp10_ParamLimits

0x7f19,	// (0x00095066) clock_digital_number_pane_cp10

0x7f33,	// (0x00095080) clock_digital_number_pane_cp11_ParamLimits

0x7f33,	// (0x00095080) clock_digital_number_pane_cp11

0x7f4d,	// (0x0009509a) clock_digital_number_pane_cp12_ParamLimits

0x7f4d,	// (0x0009509a) clock_digital_number_pane_cp12

0x7f67,	// (0x000950b4) clock_digital_number_pane_cp13_ParamLimits

0x7f67,	// (0x000950b4) clock_digital_number_pane_cp13

0x7f83,	// (0x000950d0) clock_digital_separator_pane_cp10_ParamLimits

0x7f83,	// (0x000950d0) clock_digital_separator_pane_cp10

0x7f9d,	// (0x000950ea) popup_clock_digital_window_cp02_t1_ParamLimits

0x7f9d,	// (0x000950ea) popup_clock_digital_window_cp02_t1

0x1663,	// (0x0008e7b0) clock_digital_number_pane_cp10_g1

0x1663,	// (0x0008e7b0) clock_digital_number_pane_cp10_g2

0x0001,

0xf727,	// (0x0009c874) clock_digital_number_pane_cp10_g

0x1663,	// (0x0008e7b0) clock_digital_separator_pane_cp10_g1

0x1663,	// (0x0008e7b0) clock_digital_separator_pane_g2_cp10

0x2e8e,	// (0x0008ffdb) navi_pane_vded_g4

0x2e97,	// (0x0008ffe4) navi_pane_vded_g5

0x2ea0,	// (0x0008ffed) navi_pane_vded_t1

0x4379,	// (0x000914c6) main_vded_pane

0x8091,	// (0x000951de) main_vded_pane_g1

0x809d,	// (0x000951ea) main_vded_pane_g2

0x80a7,	// (0x000951f4) main_vded_pane_g3

0x0002,

0xf72c,	// (0x0009c879) main_vded_pane_g

0x80b1,	// (0x000951fe) main_vded_pane_t1

0x80bf,	// (0x0009520c) main_vded_pane_t2

0x0001,

0xf733,	// (0x0009c880) main_vded_pane_t

0x80cd,	// (0x0009521a) vded_slider_pane

0x80d7,	// (0x00095224) vded_video_pane

0xe7eb,	// (0x0009b938) vded_video_pane_g1

0x80e3,	// (0x00095230) vded_video_pane_g2

0x1d99,	// (0x0008eee6) vded_video_pane_g3

0x0002,

0xf738,	// (0x0009c885) vded_video_pane_g

0xe7f5,	// (0x0009b942) vded_slider_pane_g1

0xdfcb,	// (0x0009b118) vded_slider_pane_g2

0xe7fe,	// (0x0009b94b) vded_slider_pane_g3

0xe807,	// (0x0009b954) vded_slider_pane_g4

0xe810,	// (0x0009b95d) vded_slider_pane_g5

0x0004,

0xf73f,	// (0x0009c88c) vded_slider_pane_g

0x7cbc,	// (0x00094e09) mup3_rocker_pane_ParamLimits

0x7cbc,	// (0x00094e09) mup3_rocker_pane

0x80ec,	// (0x00095239) mup3_control_keys_pane_g1

0x80f4,	// (0x00095241) mup3_control_keys_pane_g2

0x80fc,	// (0x00095249) mup3_control_keys_pane_g3

0x8104,	// (0x00095251) mup3_control_keys_pane_g4

0x0003,

0xf74a,	// (0x0009c897) mup3_control_keys_pane_g

0x432d,	// (0x0009147a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x432d,	// (0x0009147a) popup_toolbar2_fixed_window_cp01

0x7cd8,	// (0x00094e25) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7cd8,	// (0x00094e25) popup_toolbar2_fixed_window_cp02

0xd2a4,	// (0x0009a3f1) popup_call2_audio_second_window_t4_ParamLimits

0xd2a4,	// (0x0009a3f1) popup_call2_audio_second_window_t4

0xd7d2,	// (0x0009a91f) popup_call2_audio_first_window_t6_ParamLimits

0xd7d2,	// (0x0009a91f) popup_call2_audio_first_window_t6

0xda10,	// (0x0009ab5d) popup_call2_audio_out_window_t6_ParamLimits

0xda10,	// (0x0009ab5d) popup_call2_audio_out_window_t6

0x4379,	// (0x000914c6) main_vitu_pane

0x0472,	// (0x0008d5bf) aid_size_cell_itu_ParamLimits

0x0472,	// (0x0008d5bf) aid_size_cell_itu

0x0472,	// (0x0008d5bf) bg_popup_window_pane_cp08_ParamLimits

0x0472,	// (0x0008d5bf) bg_popup_window_pane_cp08

0x0472,	// (0x0008d5bf) field_vitu_entry_pane_ParamLimits

0x0472,	// (0x0008d5bf) field_vitu_entry_pane

0x0472,	// (0x0008d5bf) grid_vitu_function_pane_ParamLimits

0x0472,	// (0x0008d5bf) grid_vitu_function_pane

0x0472,	// (0x0008d5bf) grid_vitu_itu_pane_ParamLimits

0x0472,	// (0x0008d5bf) grid_vitu_itu_pane

0x0472,	// (0x0008d5bf) cell_vitu_itu_pane_ParamLimits

0x0472,	// (0x0008d5bf) cell_vitu_itu_pane

0x0472,	// (0x0008d5bf) cell_vitu_function_pane_ParamLimits

0x0472,	// (0x0008d5bf) cell_vitu_function_pane

0x1093,	// (0x0008e1e0) bg_popup_sub_pane_cp08_ParamLimits

0x1093,	// (0x0008e1e0) bg_popup_sub_pane_cp08

0x1da3,	// (0x0008eef0) field_vitu_entry_pane_t1_ParamLimits

0x1da3,	// (0x0008eef0) field_vitu_entry_pane_t1

0xe5db,	// (0x0009b728) field_vitu_entry_pane_t2_ParamLimits

0xe5db,	// (0x0009b728) field_vitu_entry_pane_t2

0x0001,

0xf753,	// (0x0009c8a0) field_vitu_entry_pane_t_ParamLimits

0xf753,	// (0x0009c8a0) field_vitu_entry_pane_t

0xce48,	// (0x00099f95) bg_button_pane_cp05_ParamLimits

0xce48,	// (0x00099f95) bg_button_pane_cp05

0xe819,	// (0x0009b966) cell_vitu_itu_pane_g1

0x2f83,	// (0x000900d0) cell_vitu_itu_pane_t1_ParamLimits

0x2f83,	// (0x000900d0) cell_vitu_itu_pane_t1

0x2f83,	// (0x000900d0) cell_vitu_itu_pane_t2_ParamLimits

0x2f83,	// (0x000900d0) cell_vitu_itu_pane_t2

0x0002,

0xf758,	// (0x0009c8a5) cell_vitu_itu_pane_t_ParamLimits

0xf758,	// (0x0009c8a5) cell_vitu_itu_pane_t

0x038f,	// (0x0008d4dc) bg_button_pane_cp07

0x1d99,	// (0x0008eee6) cell_vitu_function_pane_g1

0x4476,	// (0x000915c3) main_calc_pane_g1

0x40ee,	// (0x0009123b) aid_visual_content_pane

0x4379,	// (0x000914c6) main_vradio_pane

0x16e6,	// (0x0008e833) main_vradio_pane_g1_ParamLimits

0x16e6,	// (0x0008e833) main_vradio_pane_g1

0x16e6,	// (0x0008e833) main_vradio_pane_g2_ParamLimits

0x16e6,	// (0x0008e833) main_vradio_pane_g2

0x0001,

0xf4ef,	// (0x0009c63c) main_vradio_pane_g_ParamLimits

0xf4ef,	// (0x0009c63c) main_vradio_pane_g

0x1db7,	// (0x0008ef04) main_vradio_pane_t1_ParamLimits

0x1db7,	// (0x0008ef04) main_vradio_pane_t1

0x1db7,	// (0x0008ef04) main_vradio_pane_t2_ParamLimits

0x1db7,	// (0x0008ef04) main_vradio_pane_t2

0x1db7,	// (0x0008ef04) main_vradio_pane_t3_ParamLimits

0x1db7,	// (0x0008ef04) main_vradio_pane_t3

0x0002,

0xf75f,	// (0x0009c8ac) main_vradio_pane_t_ParamLimits

0xf75f,	// (0x0009c8ac) main_vradio_pane_t

0x0472,	// (0x0008d5bf) vradio_rocker_control_pane_ParamLimits

0x0472,	// (0x0008d5bf) vradio_rocker_control_pane

0x0472,	// (0x0008d5bf) vradio_station_info_pane_ParamLimits

0x0472,	// (0x0008d5bf) vradio_station_info_pane

0x1093,	// (0x0008e1e0) vradio_frequency_info_pane_ParamLimits

0x1093,	// (0x0008e1e0) vradio_frequency_info_pane

0x1d99,	// (0x0008eee6) vradio_station_info_pane_g1

0x2f83,	// (0x000900d0) vradio_station_info_pane_t1_ParamLimits

0x2f83,	// (0x000900d0) vradio_station_info_pane_t1

0x1db7,	// (0x0008ef04) vradio_station_info_pane_t2_ParamLimits

0x1db7,	// (0x0008ef04) vradio_station_info_pane_t2

0x0001,

0xf766,	// (0x0009c8b3) vradio_station_info_pane_t_ParamLimits

0xf766,	// (0x0009c8b3) vradio_station_info_pane_t

0x038f,	// (0x0008d4dc) vradio_tuning_pane

0x8114,	// (0x00095261) vradio_rocker_control_pane_g1

0xe835,	// (0x0009b982) vradio_rocker_control_pane_g2

0x811c,	// (0x00095269) vradio_rocker_control_pane_g3

0x8124,	// (0x00095271) vradio_rocker_control_pane_g4

0x812e,	// (0x0009527b) vradio_rocker_control_pane_g5

0x0004,

0xf76b,	// (0x0009c8b8) vradio_rocker_control_pane_g

0x1d99,	// (0x0008eee6) vradio_frequency_info_pane_g1

0x1da3,	// (0x0008eef0) vradio_frequency_info_pane_t1_ParamLimits

0x1da3,	// (0x0008eef0) vradio_frequency_info_pane_t1

0x8136,	// (0x00095283) vradio_tuning_pane_g1

0x8143,	// (0x00095290) vradio_tuning_pane_t1

0x412f,	// (0x0009127c) area_side_right_pane_ParamLimits

0x412f,	// (0x0009127c) area_side_right_pane

0xde02,	// (0x0009af4f) status_small_pane_g1

0xde0a,	// (0x0009af57) status_small_pane_g2

0xde13,	// (0x0009af60) status_small_pane_g3

0xde1c,	// (0x0009af69) status_small_pane_g4

0x0003,

0xf53c,	// (0x0009c689) status_small_pane_g

0xde25,	// (0x0009af72) status_small_pane_t1

0x4379,	// (0x000914c6) main_video3_pane

0x038f,	// (0x0008d4dc) cams_zoom_vslider_pane

0xe83d,	// (0x0009b98a) image3_wide_pane_ParamLimits

0xe83d,	// (0x0009b98a) image3_wide_pane

0x038f,	// (0x0008d4dc) image3_wide_small_pane

0xe857,	// (0x0009b9a4) main_video3_pane_g1_ParamLimits

0xe857,	// (0x0009b9a4) main_video3_pane_g1

0xe857,	// (0x0009b9a4) main_video3_pane_g2_ParamLimits

0xe857,	// (0x0009b9a4) main_video3_pane_g2

0x0001,

0xf776,	// (0x0009c8c3) main_video3_pane_g_ParamLimits

0xf776,	// (0x0009c8c3) main_video3_pane_g

0xe875,	// (0x0009b9c2) main_video3_pane_t1_ParamLimits

0xe875,	// (0x0009b9c2) main_video3_pane_t1

0xe875,	// (0x0009b9c2) main_video3_pane_t2_ParamLimits

0xe875,	// (0x0009b9c2) main_video3_pane_t2

0xe875,	// (0x0009b9c2) main_video3_pane_t3_ParamLimits

0xe875,	// (0x0009b9c2) main_video3_pane_t3

0x0002,

0xf77b,	// (0x0009c8c8) main_video3_pane_t_ParamLimits

0xf77b,	// (0x0009c8c8) main_video3_pane_t

0x1d99,	// (0x0008eee6) cams_zoom_vslider_pane_g1

0x1d99,	// (0x0008eee6) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x0009c1fc) cams_zoom_vslider_pane_g

0x038f,	// (0x0008d4dc) small_slider_vertical_pane

0x1d99,	// (0x0008eee6) small_slider_vertical_pane_g1

0x1d99,	// (0x0008eee6) small_slider_vertical_pane_g2

0xe89c,	// (0x0009b9e9) small_slider_vertical_pane_g3

0x0002,

0xf782,	// (0x0009c8cf) small_slider_vertical_pane_g

0x4379,	// (0x000914c6) main_hwr_training_pane

0xe8a5,	// (0x0009b9f2) hwr_training_instruct_pane_ParamLimits

0xe8a5,	// (0x0009b9f2) hwr_training_instruct_pane

0x8152,	// (0x0009529f) hwr_training_navi_pane_ParamLimits

0x8152,	// (0x0009529f) hwr_training_navi_pane

0x816c,	// (0x000952b9) hwr_training_write_pane_ParamLimits

0x816c,	// (0x000952b9) hwr_training_write_pane

0x038f,	// (0x0008d4dc) bg_frame_shadow_pane

0xe8dc,	// (0x0009ba29) hwr_training_write_pane_g1

0xe8e4,	// (0x0009ba31) hwr_training_write_pane_g2

0xe8ec,	// (0x0009ba39) hwr_training_write_pane_g3

0xe8f4,	// (0x0009ba41) hwr_training_write_pane_g4

0xe8fc,	// (0x0009ba49) hwr_training_write_pane_g5

0xe904,	// (0x0009ba51) hwr_training_write_pane_g6

0xe90c,	// (0x0009ba59) hwr_training_write_pane_g7

0x0006,

0xf789,	// (0x0009c8d6) hwr_training_write_pane_g

0x81a4,	// (0x000952f1) hwr_training_navi_pane_g1_ParamLimits

0x81a4,	// (0x000952f1) hwr_training_navi_pane_g1

0x81b6,	// (0x00095303) hwr_training_navi_pane_g2_ParamLimits

0x81b6,	// (0x00095303) hwr_training_navi_pane_g2

0x81c8,	// (0x00095315) hwr_training_navi_pane_g3_ParamLimits

0x81c8,	// (0x00095315) hwr_training_navi_pane_g3

0x81d8,	// (0x00095325) hwr_training_navi_pane_g4_ParamLimits

0x81d8,	// (0x00095325) hwr_training_navi_pane_g4

0x0004,

0xf798,	// (0x0009c8e5) hwr_training_navi_pane_g_ParamLimits

0xf798,	// (0x0009c8e5) hwr_training_navi_pane_g

0x81f2,	// (0x0009533f) hwr_training_navi_pane_t1

0x8200,	// (0x0009534d) list_single_hwr_training_instruct_pane_ParamLimits

0x8200,	// (0x0009534d) list_single_hwr_training_instruct_pane

0xe914,	// (0x0009ba61) list_single_hwr_training_instruct_pane_t1

0xe1a7,	// (0x0009b2f4) bg_frame_shadow_pane_g1

0xe923,	// (0x0009ba70) bg_frame_shadow_pane_g2

0xe92b,	// (0x0009ba78) bg_frame_shadow_pane_g3

0xe933,	// (0x0009ba80) bg_frame_shadow_pane_g4

0xe95d,	// (0x0009baaa) bg_frame_shadow_pane_g5

0xe965,	// (0x0009bab2) bg_frame_shadow_pane_g6

0xe96d,	// (0x0009baba) bg_frame_shadow_pane_g7

0x1ea6,	// (0x0008eff3) bg_frame_shadow_pane_g8

0x0007,

0xf7a3,	// (0x0009c8f0) bg_frame_shadow_pane_g

0x4379,	// (0x000914c6) main_video_tele_dialer_pane

0x8219,	// (0x00095366) aid_size_cell_video_keypad_ParamLimits

0x8219,	// (0x00095366) aid_size_cell_video_keypad

0x8229,	// (0x00095376) grid_video_dialer_keypad_pane_ParamLimits

0x8229,	// (0x00095376) grid_video_dialer_keypad_pane

0x825b,	// (0x000953a8) video_down_pane_cp_ParamLimits

0x825b,	// (0x000953a8) video_down_pane_cp

0x8285,	// (0x000953d2) cell_video_dialer_keypad_pane_ParamLimits

0x8285,	// (0x000953d2) cell_video_dialer_keypad_pane

0xe975,	// (0x0009bac2) bg_button_pane_cp08_ParamLimits

0xe975,	// (0x0009bac2) bg_button_pane_cp08

0x829c,	// (0x000953e9) cell_video_dialer_keypad_pane_g1_ParamLimits

0x829c,	// (0x000953e9) cell_video_dialer_keypad_pane_g1

0x7cb0,	// (0x00094dfd) mup3_rocker2_pane_ParamLimits

0x7cb0,	// (0x00094dfd) mup3_rocker2_pane

0x1d99,	// (0x0008eee6) mup3_rocker2_pane_g1

0x7010,	// (0x0009415d) main_dialer2_pane

0x4379,	// (0x000914c6) main_mp4_pane

0x82f5,	// (0x00095442) main_mp4_pane_g1_ParamLimits

0x82f5,	// (0x00095442) main_mp4_pane_g1

0x8317,	// (0x00095464) main_mp4_pane_g2_ParamLimits

0x8317,	// (0x00095464) main_mp4_pane_g2

0x8335,	// (0x00095482) main_mp4_pane_g3_ParamLimits

0x8335,	// (0x00095482) main_mp4_pane_g3

0x8370,	// (0x000954bd) main_mp4_pane_g4_ParamLimits

0x8370,	// (0x000954bd) main_mp4_pane_g4

0x8398,	// (0x000954e5) main_mp4_pane_g5_ParamLimits

0x8398,	// (0x000954e5) main_mp4_pane_g5

0x0007,

0xf7c3,	// (0x0009c910) main_mp4_pane_g_ParamLimits

0xf7c3,	// (0x0009c910) main_mp4_pane_g

0x8400,	// (0x0009554d) main_mp4_pane_t1_ParamLimits

0x8400,	// (0x0009554d) main_mp4_pane_t1

0x8462,	// (0x000955af) main_mp4_pane_t2_ParamLimits

0x8462,	// (0x000955af) main_mp4_pane_t2

0x84c6,	// (0x00095613) main_mp4_pane_t3_ParamLimits

0x84c6,	// (0x00095613) main_mp4_pane_t3

0x8524,	// (0x00095671) main_mp4_pane_t4_ParamLimits

0x8524,	// (0x00095671) main_mp4_pane_t4

0x0003,

0xf7d4,	// (0x0009c921) main_mp4_pane_t_ParamLimits

0xf7d4,	// (0x0009c921) main_mp4_pane_t

0x8582,	// (0x000956cf) mp4_progress_pane_ParamLimits

0x8582,	// (0x000956cf) mp4_progress_pane

0x85b6,	// (0x00095703) mp4_rocker_pane_ParamLimits

0x85b6,	// (0x00095703) mp4_rocker_pane

0xe989,	// (0x0009bad6) mp4_progress_pane_t1

0xe9ab,	// (0x0009baf8) mp4_progress_pane_t2

0x0001,

0xf7dd,	// (0x0009c92a) mp4_progress_pane_t

0xe9cd,	// (0x0009bb1a) mup_progress_pane_cp04

0x060e,	// (0x0008d75b) mp4_rocker_pane_g1

0x435f,	// (0x000914ac) aid_cell_size_keypad2_ParamLimits

0x435f,	// (0x000914ac) aid_cell_size_keypad2

0x435f,	// (0x000914ac) dialer2_ne_pane_ParamLimits

0x435f,	// (0x000914ac) dialer2_ne_pane

0x435f,	// (0x000914ac) grid_dialer2_keypad_pane_ParamLimits

0x435f,	// (0x000914ac) grid_dialer2_keypad_pane

0xe93b,	// (0x0009ba88) bg_popup_call_pane_cp07_ParamLimits

0xe93b,	// (0x0009ba88) bg_popup_call_pane_cp07

0x85cc,	// (0x00095719) dialer2_ne_pane_t1_ParamLimits

0x85cc,	// (0x00095719) dialer2_ne_pane_t1

0x85f1,	// (0x0009573e) cell_dialer2_keypad_pane_ParamLimits

0x85f1,	// (0x0009573e) cell_dialer2_keypad_pane

0xce48,	// (0x00099f95) bg_button_pane_pane_cp04_ParamLimits

0xce48,	// (0x00099f95) bg_button_pane_pane_cp04

0x16d8,	// (0x0008e825) cell_dialer2_keypad_pane_g1_ParamLimits

0x16d8,	// (0x0008e825) cell_dialer2_keypad_pane_g1

0x4f17,	// (0x00092064) aid_placing_vt_set_content_ParamLimits

0x4f17,	// (0x00092064) aid_placing_vt_set_content

0x4f3f,	// (0x0009208c) aid_placing_vt_set_title_ParamLimits

0x4f3f,	// (0x0009208c) aid_placing_vt_set_title

0x4379,	// (0x000914c6) main_image3_pane

0x863a,	// (0x00095787) area_side_right_pane_cp01_ParamLimits

0x863a,	// (0x00095787) area_side_right_pane_cp01

0x8669,	// (0x000957b6) main_image3_pane_g1_ParamLimits

0x8669,	// (0x000957b6) main_image3_pane_g1

0x8677,	// (0x000957c4) main_image3_pane_g2_ParamLimits

0x8677,	// (0x000957c4) main_image3_pane_g2

0x8690,	// (0x000957dd) main_image3_pane_g3_ParamLimits

0x8690,	// (0x000957dd) main_image3_pane_g3

0x86a9,	// (0x000957f6) main_image3_pane_g4_ParamLimits

0x86a9,	// (0x000957f6) main_image3_pane_g4

0x0003,

0xf7ec,	// (0x0009c939) main_image3_pane_g_ParamLimits

0xf7ec,	// (0x0009c939) main_image3_pane_g

0x86c2,	// (0x0009580f) main_image3_pane_t1_ParamLimits

0x86c2,	// (0x0009580f) main_image3_pane_t1

0x86e7,	// (0x00095834) main_image3_pane_t2_ParamLimits

0x86e7,	// (0x00095834) main_image3_pane_t2

0x8706,	// (0x00095853) main_image3_pane_t3_ParamLimits

0x8706,	// (0x00095853) main_image3_pane_t3

0x0003,

0xf7f5,	// (0x0009c942) main_image3_pane_t_ParamLimits

0xf7f5,	// (0x0009c942) main_image3_pane_t

0x0472,	// (0x0008d5bf) grid_sctrl_middle_pane_cp01_ParamLimits

0x0472,	// (0x0008d5bf) grid_sctrl_middle_pane_cp01

0x8767,	// (0x000958b4) cell_sctrl_middle_pane_cp01_ParamLimits

0x8767,	// (0x000958b4) cell_sctrl_middle_pane_cp01

0x8778,	// (0x000958c5) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x8778,	// (0x000958c5) cell_sctrl_middle_pane_cp01_g1

0x4379,	// (0x000914c6) main_call4_pane

0x8785,	// (0x000958d2) aid_size_button_call4_ParamLimits

0x8785,	// (0x000958d2) aid_size_button_call4

0x87bb,	// (0x00095908) call4_windows_pane_ParamLimits

0x87bb,	// (0x00095908) call4_windows_pane

0x87d0,	// (0x0009591d) grid_call4_button_pane_ParamLimits

0x87d0,	// (0x0009591d) grid_call4_button_pane

0x8800,	// (0x0009594d) call4_windows_conf_pane

0x8819,	// (0x00095966) popup_call4_audio_first_window_ParamLimits

0x8819,	// (0x00095966) popup_call4_audio_first_window

0x8869,	// (0x000959b6) popup_call4_audio_second_window_ParamLimits

0x8869,	// (0x000959b6) popup_call4_audio_second_window

0x8882,	// (0x000959cf) popup_call4_audio_wait_window_ParamLimits

0x8882,	// (0x000959cf) popup_call4_audio_wait_window

0x8890,	// (0x000959dd) cell_call4_button_pane_ParamLimits

0x8890,	// (0x000959dd) cell_call4_button_pane

0x88b3,	// (0x00095a00) bg_button_pane_cp09_ParamLimits

0x88b3,	// (0x00095a00) bg_button_pane_cp09

0x88bf,	// (0x00095a0c) cell_call4_button_pane_g1_ParamLimits

0x88bf,	// (0x00095a0c) cell_call4_button_pane_g1

0x88cc,	// (0x00095a19) cell_call4_button_pane_t1_ParamLimits

0x88cc,	// (0x00095a19) cell_call4_button_pane_t1

0xea16,	// (0x0009bb63) popup_call4_audio_conf_window_ParamLimits

0xea16,	// (0x0009bb63) popup_call4_audio_conf_window

0x7ce5,	// (0x00094e32) mup3_progress_pane_t1_ParamLimits

0x7d03,	// (0x00094e50) mup3_progress_pane_t2_ParamLimits

0xe4d5,	// (0x0009b622) mup3_progress_pane_t3_ParamLimits

0xf6d4,	// (0x0009c821) mup3_progress_pane_t_ParamLimits

0xe521,	// (0x0009b66e) mup_progress_pane_cp03_ParamLimits

0x810c,	// (0x00095259) mup3_control_keys_pane_g4_copy1

0x85b6,	// (0x00095703) mp4_rocker2_pane_ParamLimits

0x85b6,	// (0x00095703) mp4_rocker2_pane

0x8910,	// (0x00095a5d) mp4_rocker2_pane_g1

0x8910,	// (0x00095a5d) mp4_rocker2_pane_g2

0x8910,	// (0x00095a5d) mp4_rocker2_pane_g3

0x8910,	// (0x00095a5d) mp4_rocker2_pane_g4

0x8910,	// (0x00095a5d) mp4_rocker2_pane_g5

0x0004,

0xf7fe,	// (0x0009c94b) mp4_rocker2_pane_g

0x4379,	// (0x000914c6) main_camera4_pane

0x4379,	// (0x000914c6) main_video4_pane

0x8237,	// (0x00095384) main_video_tele_dialer_pane_t1_ParamLimits

0x8237,	// (0x00095384) main_video_tele_dialer_pane_t1

0x8249,	// (0x00095396) main_video_tele_dialer_pane_t2_ParamLimits

0x8249,	// (0x00095396) main_video_tele_dialer_pane_t2

0x0001,

0xf7b4,	// (0x0009c901) main_video_tele_dialer_pane_t_ParamLimits

0xf7b4,	// (0x0009c901) main_video_tele_dialer_pane_t

0x8930,	// (0x00095a7d) cam4_autofocus_pane_ParamLimits

0x8930,	// (0x00095a7d) cam4_autofocus_pane

0x8948,	// (0x00095a95) cam4_image_uncrop_pane_ParamLimits

0x8948,	// (0x00095a95) cam4_image_uncrop_pane

0x8961,	// (0x00095aae) cam4_indicators_pane_ParamLimits

0x8961,	// (0x00095aae) cam4_indicators_pane

0x897d,	// (0x00095aca) main_camera4_pane_g1_ParamLimits

0x897d,	// (0x00095aca) main_camera4_pane_g1

0x8989,	// (0x00095ad6) main_camera4_pane_g2_ParamLimits

0x8989,	// (0x00095ad6) main_camera4_pane_g2

0x8989,	// (0x00095ad6) main_camera4_pane_g3_ParamLimits

0x8989,	// (0x00095ad6) main_camera4_pane_g3

0x8995,	// (0x00095ae2) main_camera4_pane_g4_ParamLimits

0x8995,	// (0x00095ae2) main_camera4_pane_g4

0x89a1,	// (0x00095aee) main_camera4_pane_g5_ParamLimits

0x89a1,	// (0x00095aee) main_camera4_pane_g5

0x0005,

0xf809,	// (0x0009c956) main_camera4_pane_g_ParamLimits

0xf809,	// (0x0009c956) main_camera4_pane_g

0x89bb,	// (0x00095b08) main_camera4_pane_t1_ParamLimits

0x89bb,	// (0x00095b08) main_camera4_pane_t1

0x0f38,	// (0x0008e085) bg_tb_trans_pane_cp06

0x8a0d,	// (0x00095b5a) cam4_indicators_pane_g1

0x8a1e,	// (0x00095b6b) cam4_indicators_pane_g2

0x0002,

0xf824,	// (0x0009c971) cam4_indicators_pane_g

0x8a36,	// (0x00095b83) cam4_indicators_pane_t1

0x8a60,	// (0x00095bad) main_video4_pane_g1_ParamLimits

0x8a60,	// (0x00095bad) main_video4_pane_g1

0x8a6c,	// (0x00095bb9) main_video4_pane_g2_ParamLimits

0x8a6c,	// (0x00095bb9) main_video4_pane_g2

0x8a78,	// (0x00095bc5) main_video4_pane_g3_ParamLimits

0x8a78,	// (0x00095bc5) main_video4_pane_g3

0x8a84,	// (0x00095bd1) main_video4_pane_g4_ParamLimits

0x8a84,	// (0x00095bd1) main_video4_pane_g4

0x0004,

0xf82b,	// (0x0009c978) main_video4_pane_g_ParamLimits

0xf82b,	// (0x0009c978) main_video4_pane_g

0x8aa6,	// (0x00095bf3) vid4_indicators_pane_ParamLimits

0x8aa6,	// (0x00095bf3) vid4_indicators_pane

0x8ac5,	// (0x00095c12) video4_image_uncrop_cif_pane_ParamLimits

0x8ac5,	// (0x00095c12) video4_image_uncrop_cif_pane

0x8ad4,	// (0x00095c21) video4_image_uncrop_nhd_pane_ParamLimits

0x8ad4,	// (0x00095c21) video4_image_uncrop_nhd_pane

0x8948,	// (0x00095a95) video4_image_uncrop_vga_pane_ParamLimits

0x8948,	// (0x00095a95) video4_image_uncrop_vga_pane

0x7002,	// (0x0009414f) bg_tb_trans_pane_cp07

0x8aed,	// (0x00095c3a) vid4_indicators_pane_g1

0x8b03,	// (0x00095c50) vid4_indicators_pane_g2

0x8b17,	// (0x00095c64) vid4_indicators_pane_g3

0x0004,

0xf836,	// (0x0009c983) vid4_indicators_pane_g

0x8b48,	// (0x00095c95) vid4_indicators_pane_t1

0x8b5f,	// (0x00095cac) cam4_autofocus_pane_g1

0x8b67,	// (0x00095cb4) cam4_autofocus_pane_g2

0x8b6f,	// (0x00095cbc) cam4_autofocus_pane_g3

0x0002,

0xf841,	// (0x0009c98e) cam4_autofocus_pane_g

0x8b77,	// (0x00095cc4) cam4_autofocus_pane_g3_copy1

0x8269,	// (0x000953b6) video_down_pane_cp_t1

0x8277,	// (0x000953c4) video_down_pane_cp_t2

0x0001,

0xf7b9,	// (0x0009c906) video_down_pane_cp_t

0x435f,	// (0x000914ac) popup_vitu2_window_ParamLimits

0x435f,	// (0x000914ac) popup_vitu2_window

0x8b7f,	// (0x00095ccc) aid_size_cell2_itu2_ParamLimits

0x8b7f,	// (0x00095ccc) aid_size_cell2_itu2

0x8ba1,	// (0x00095cee) aid_size_cell_itu2_ParamLimits

0x8ba1,	// (0x00095cee) aid_size_cell_itu2

0x8be5,	// (0x00095d32) bg_popup_window_pane_cp09_ParamLimits

0x8be5,	// (0x00095d32) bg_popup_window_pane_cp09

0x8bf3,	// (0x00095d40) field_vitu2_entry_pane_ParamLimits

0x8bf3,	// (0x00095d40) field_vitu2_entry_pane

0x8c13,	// (0x00095d60) grid_vitu2_function_pane_ParamLimits

0x8c13,	// (0x00095d60) grid_vitu2_function_pane

0x8c57,	// (0x00095da4) grid_vitu2_itu_pane_ParamLimits

0x8c57,	// (0x00095da4) grid_vitu2_itu_pane

0x8ccd,	// (0x00095e1a) cell_vitu2_itu_pane_ParamLimits

0x8ccd,	// (0x00095e1a) cell_vitu2_itu_pane

0x8ce8,	// (0x00095e35) cell_vitu2_function_pane_ParamLimits

0x8ce8,	// (0x00095e35) cell_vitu2_function_pane

0xea30,	// (0x0009bb7d) bg_popup_call_pane_cp08_ParamLimits

0xea30,	// (0x0009bb7d) bg_popup_call_pane_cp08

0xea47,	// (0x0009bb94) field_vitu2_entry_pane_g1

0xea53,	// (0x0009bba0) field_vitu2_entry_pane_g2

0x0002,

0xf848,	// (0x0009c995) field_vitu2_entry_pane_g

0xea5f,	// (0x0009bbac) field_vitu2_entry_pane_t1_ParamLimits

0xea5f,	// (0x0009bbac) field_vitu2_entry_pane_t1

0xea8e,	// (0x0009bbdb) field_vitu2_entry_pane_t2_ParamLimits

0xea8e,	// (0x0009bbdb) field_vitu2_entry_pane_t2

0x0001,

0xf84f,	// (0x0009c99c) field_vitu2_entry_pane_t_ParamLimits

0xf84f,	// (0x0009c99c) field_vitu2_entry_pane_t

0x7362,	// (0x000944af) bg_button_pane_cp010_ParamLimits

0x7362,	// (0x000944af) bg_button_pane_cp010

0x8d2c,	// (0x00095e79) cell_vitu2_itu_pane_g1

0x8d52,	// (0x00095e9f) cell_vitu2_itu_pane_t1_ParamLimits

0x8d52,	// (0x00095e9f) cell_vitu2_itu_pane_t1

0x3fd2,	// (0x0009111f) cell_vitu2_itu_pane_t2_ParamLimits

0x3fd2,	// (0x0009111f) cell_vitu2_itu_pane_t2

0x0002,

0xf859,	// (0x0009c9a6) cell_vitu2_itu_pane_t_ParamLimits

0xf859,	// (0x0009c9a6) cell_vitu2_itu_pane_t

0x7002,	// (0x0009414f) bg_button_pane_cp011

0x8d9e,	// (0x00095eeb) cell_vitu2_function_pane_g1

0x4379,	// (0x000914c6) main_myfav_hc_pane

0x8748,	// (0x00095895) popup_image3_note_pane_ParamLimits

0x8748,	// (0x00095895) popup_image3_note_pane

0x8756,	// (0x000958a3) popup_image3_tool_bar_pane_ParamLimits

0x8756,	// (0x000958a3) popup_image3_tool_bar_pane

0x4048,	// (0x00091195) cell_vitu2_itu_pane_t3_ParamLimits

0x4048,	// (0x00091195) cell_vitu2_itu_pane_t3

0x038f,	// (0x0008d4dc) bg_popup_trans_pane

0xeab3,	// (0x0009bc00) grid_image3_tool_bar_pane

0xeabd,	// (0x0009bc0a) bg_popup_trans_pane_g1

0x21c1,	// (0x0008f30e) bg_popup_trans_pane_g2

0xeac5,	// (0x0009bc12) bg_popup_trans_pane_g3

0xeacd,	// (0x0009bc1a) bg_popup_trans_pane_g4

0xead5,	// (0x0009bc22) bg_popup_trans_pane_g5

0xeadd,	// (0x0009bc2a) bg_popup_trans_pane_g6

0xeae5,	// (0x0009bc32) bg_popup_trans_pane_g7

0xeaed,	// (0x0009bc3a) bg_popup_trans_pane_g8

0x21a1,	// (0x0008f2ee) bg_popup_trans_pane_g9

0x0008,

0xf860,	// (0x0009c9ad) bg_popup_trans_pane_g

0xeaf5,	// (0x0009bc42) cell_image3_tool_bar_pane_ParamLimits

0xeaf5,	// (0x0009bc42) cell_image3_tool_bar_pane

0x1d99,	// (0x0008eee6) cell_image3_tool_bar_pane_g1

0x038f,	// (0x0008d4dc) bg_popup_trans_pane_cp1

0xeb0b,	// (0x0009bc58) popup_image3_note_pane_t1

0xeb19,	// (0x0009bc66) popup_image3_note_pane_t2

0xeb27,	// (0x0009bc74) popup_image3_note_pane_t3

0x0002,

0xf873,	// (0x0009c9c0) popup_image3_note_pane_t

0xeb37,	// (0x0009bc84) popup_image3_note_pane_t3_copy1

0x8db2,	// (0x00095eff) bg_myfav_hc_instruction_pane_ParamLimits

0x8db2,	// (0x00095eff) bg_myfav_hc_instruction_pane

0x8dca,	// (0x00095f17) cell_myfav_contact_pane_ParamLimits

0x8dca,	// (0x00095f17) cell_myfav_contact_pane

0x8de4,	// (0x00095f31) cell_myfav_contact_pane_cp1_ParamLimits

0x8de4,	// (0x00095f31) cell_myfav_contact_pane_cp1

0x8dfc,	// (0x00095f49) cell_myfav_contact_pane_cp2_ParamLimits

0x8dfc,	// (0x00095f49) cell_myfav_contact_pane_cp2

0x8e14,	// (0x00095f61) cell_myfav_contact_pane_cp3_ParamLimits

0x8e14,	// (0x00095f61) cell_myfav_contact_pane_cp3

0x8e2b,	// (0x00095f78) cell_myfav_contact_pane_cp4_ParamLimits

0x8e2b,	// (0x00095f78) cell_myfav_contact_pane_cp4

0x8e41,	// (0x00095f8e) cell_myfav_contact_pane_cp5_ParamLimits

0x8e41,	// (0x00095f8e) cell_myfav_contact_pane_cp5

0x8e55,	// (0x00095fa2) cell_myfav_contact_pane_cp6_ParamLimits

0x8e55,	// (0x00095fa2) cell_myfav_contact_pane_cp6

0x8e69,	// (0x00095fb6) cell_myfav_contact_pane_cp7_ParamLimits

0x8e69,	// (0x00095fb6) cell_myfav_contact_pane_cp7

0xeb45,	// (0x0009bc92) listscroll_gen_pane_cp05

0x8e81,	// (0x00095fce) main_myfav_hc_pane_g1_ParamLimits

0x8e81,	// (0x00095fce) main_myfav_hc_pane_g1

0x8e9b,	// (0x00095fe8) main_myfav_hc_pane_g2_ParamLimits

0x8e9b,	// (0x00095fe8) main_myfav_hc_pane_g2

0x0002,

0xf87a,	// (0x0009c9c7) main_myfav_hc_pane_g_ParamLimits

0xf87a,	// (0x0009c9c7) main_myfav_hc_pane_g

0x8ecd,	// (0x0009601a) main_myfav_hc_pane_t1_ParamLimits

0x8ecd,	// (0x0009601a) main_myfav_hc_pane_t1

0xeb4e,	// (0x0009bc9b) main_myfav_hc_pane_t2_ParamLimits

0xeb4e,	// (0x0009bc9b) main_myfav_hc_pane_t2

0xeb60,	// (0x0009bcad) main_myfav_hc_pane_t3_ParamLimits

0xeb60,	// (0x0009bcad) main_myfav_hc_pane_t3

0x8ee4,	// (0x00096031) main_myfav_hc_pane_t4_ParamLimits

0x8ee4,	// (0x00096031) main_myfav_hc_pane_t4

0x0004,

0xf881,	// (0x0009c9ce) main_myfav_hc_pane_t_ParamLimits

0xf881,	// (0x0009c9ce) main_myfav_hc_pane_t

0x1d99,	// (0x0008eee6) bg_myfav_hc_instruction_pane_g1

0xeb72,	// (0x0009bcbf) cell_myfav_contact_pane_g1_ParamLimits

0xeb72,	// (0x0009bcbf) cell_myfav_contact_pane_g1

0xeb72,	// (0x0009bcbf) cell_myfav_contact_pane_g2_ParamLimits

0xeb72,	// (0x0009bcbf) cell_myfav_contact_pane_g2

0xeb7e,	// (0x0009bccb) cell_myfav_contact_pane_g3_ParamLimits

0xeb7e,	// (0x0009bccb) cell_myfav_contact_pane_g3

0x16e6,	// (0x0008e833) cell_myfav_contact_pane_g4_ParamLimits

0x16e6,	// (0x0008e833) cell_myfav_contact_pane_g4

0xeb8b,	// (0x0009bcd8) cell_myfav_contact_pane_g5_ParamLimits

0xeb8b,	// (0x0009bcd8) cell_myfav_contact_pane_g5

0x0004,

0xf88c,	// (0x0009c9d9) cell_myfav_contact_pane_g_ParamLimits

0xf88c,	// (0x0009c9d9) cell_myfav_contact_pane_g

0x8eb5,	// (0x00096002) main_myfav_hc_pane_g3_ParamLimits

0x8eb5,	// (0x00096002) main_myfav_hc_pane_g3

0x4269,	// (0x000913b6) popup_adpt_find_window

0x8f0e,	// (0x0009605b) afind_page_pane_ParamLimits

0x8f0e,	// (0x0009605b) afind_page_pane

0x8f1b,	// (0x00096068) aid_size_cell_afind_ParamLimits

0x8f1b,	// (0x00096068) aid_size_cell_afind

0x8f35,	// (0x00096082) bg_popup_sub_pane_cp09_ParamLimits

0x8f35,	// (0x00096082) bg_popup_sub_pane_cp09

0x8f46,	// (0x00096093) find_pane_cp01_ParamLimits

0x8f46,	// (0x00096093) find_pane_cp01

0xeb97,	// (0x0009bce4) grid_afind_control_pane_ParamLimits

0xeb97,	// (0x0009bce4) grid_afind_control_pane

0x8f59,	// (0x000960a6) grid_afind_pane_ParamLimits

0x8f59,	// (0x000960a6) grid_afind_pane

0x8f75,	// (0x000960c2) cell_afind_pane_ParamLimits

0x8f75,	// (0x000960c2) cell_afind_pane

0x1d99,	// (0x0008eee6) afind_page_pane_g1

0x8fbd,	// (0x0009610a) afind_page_pane_g2

0x8fc5,	// (0x00096112) afind_page_pane_g3

0x0002,

0xf897,	// (0x0009c9e4) afind_page_pane_g

0x8fcd,	// (0x0009611a) afind_page_pane_t1

0xebbd,	// (0x0009bd0a) cell_afind_grid_control_pane_ParamLimits

0xebbd,	// (0x0009bd0a) cell_afind_grid_control_pane

0xebcc,	// (0x0009bd19) bg_button_pane_cp69_ParamLimits

0xebcc,	// (0x0009bd19) bg_button_pane_cp69

0x8fdb,	// (0x00096128) cell_afind_pane_g1_ParamLimits

0x8fdb,	// (0x00096128) cell_afind_pane_g1

0x8fe8,	// (0x00096135) cell_afind_pane_t1_ParamLimits

0x8fe8,	// (0x00096135) cell_afind_pane_t1

0xebd8,	// (0x0009bd25) bg_button_pane_cp72

0xebe0,	// (0x0009bd2d) cell_afind_grid_control_pane_g1

0x6b9c,	// (0x00093ce9) aid_image_placing_area_ParamLimits

0x6b9c,	// (0x00093ce9) aid_image_placing_area

0x16d8,	// (0x0008e825) field_vitu_entry_pane_g1_ParamLimits

0x16d8,	// (0x0008e825) field_vitu_entry_pane_g1

0x16d8,	// (0x0008e825) field_vitu_entry_pane_g2_ParamLimits

0x16d8,	// (0x0008e825) field_vitu_entry_pane_g2

0x0001,

0xf1bc,	// (0x0009c309) field_vitu_entry_pane_g_ParamLimits

0xf1bc,	// (0x0009c309) field_vitu_entry_pane_g

0xe819,	// (0x0009b966) cell_vitu_itu_pane_g1_ParamLimits

0xe5db,	// (0x0009b728) cell_vitu_itu_pane_t3_ParamLimits

0xe5db,	// (0x0009b728) cell_vitu_itu_pane_t3

0xe989,	// (0x0009bad6) mp4_progress_pane_t1_ParamLimits

0xe9ab,	// (0x0009baf8) mp4_progress_pane_t2_ParamLimits

0xf7dd,	// (0x0009c92a) mp4_progress_pane_t_ParamLimits

0xe9cd,	// (0x0009bb1a) mup_progress_pane_cp04_ParamLimits

0x8ef8,	// (0x00096045) main_myfav_hc_pane_t5_ParamLimits

0x8ef8,	// (0x00096045) main_myfav_hc_pane_t5

0x3fc2,	// (0x0009110f) aid_zoom_text_primary

0x4269,	// (0x000913b6) popup_adpt_find_window_ParamLimits

0x7002,	// (0x0009414f) main_cam_set_pane

0x896f,	// (0x00095abc) cam4_zoom_pane_ParamLimits

0x896f,	// (0x00095abc) cam4_zoom_pane

0x8ffa,	// (0x00096147) main_cam_set_pane_g1_ParamLimits

0x8ffa,	// (0x00096147) main_cam_set_pane_g1

0x9008,	// (0x00096155) main_cam_set_pane_g2_ParamLimits

0x9008,	// (0x00096155) main_cam_set_pane_g2

0x0001,

0xf89e,	// (0x0009c9eb) main_cam_set_pane_g_ParamLimits

0xf89e,	// (0x0009c9eb) main_cam_set_pane_g

0x9014,	// (0x00096161) main_cam_set_pane_t1_ParamLimits

0x9014,	// (0x00096161) main_cam_set_pane_t1

0x9030,	// (0x0009617d) main_cset_listscroll_pane_ParamLimits

0x9030,	// (0x0009617d) main_cset_listscroll_pane

0x9064,	// (0x000961b1) main_cset_slider_pane_ParamLimits

0x9064,	// (0x000961b1) main_cset_slider_pane

0xebf1,	// (0x0009bd3e) main_cset_list_pane_ParamLimits

0xebf1,	// (0x0009bd3e) main_cset_list_pane

0xec01,	// (0x0009bd4e) scroll_pane_cp028

0x9085,	// (0x000961d2) aid_area_touch_slider

0x90a1,	// (0x000961ee) cset_slider_pane

0x90c4,	// (0x00096211) main_cset_slider_pane_g1

0x90d9,	// (0x00096226) main_cset_slider_pane_g2

0x0011,

0xf8a3,	// (0x0009c9f0) main_cset_slider_pane_g

0xec3a,	// (0x0009bd87) main_cset_slider_pane_t1

0x9195,	// (0x000962e2) main_cset_slider_pane_t2

0x91af,	// (0x000962fc) main_cset_slider_pane_t3

0x91c9,	// (0x00096316) main_cset_slider_pane_t4

0x91e3,	// (0x00096330) main_cset_slider_pane_t5

0x91fd,	// (0x0009634a) main_cset_slider_pane_t6

0x9212,	// (0x0009635f) main_cset_slider_pane_t7

0x000e,

0xf8c8,	// (0x0009ca15) main_cset_slider_pane_t

0x9316,	// (0x00096463) cset_list_set_pane_ParamLimits

0x9316,	// (0x00096463) cset_list_set_pane

0xecd4,	// (0x0009be21) aid_position_infowindow_above

0xecdc,	// (0x0009be29) aid_position_infowindow_below

0x9327,	// (0x00096474) cset_list_set_pane_g1_ParamLimits

0x9327,	// (0x00096474) cset_list_set_pane_g1

0x9333,	// (0x00096480) cset_list_set_pane_g3_ParamLimits

0x9333,	// (0x00096480) cset_list_set_pane_g3

0x0001,

0xf8e7,	// (0x0009ca34) cset_list_set_pane_g_ParamLimits

0xf8e7,	// (0x0009ca34) cset_list_set_pane_g

0x9342,	// (0x0009648f) cset_list_set_pane_t1_ParamLimits

0x9342,	// (0x0009648f) cset_list_set_pane_t1

0x1093,	// (0x0008e1e0) list_highlight_pane_cp021_ParamLimits

0x1093,	// (0x0008e1e0) list_highlight_pane_cp021

0x3009,	// (0x00090156) cset_slider_pane_g1

0x301b,	// (0x00090168) cset_slider_pane_g2

0x3012,	// (0x0009015f) cset_slider_pane_g3

0x0002,

0xf8ec,	// (0x0009ca39) cset_slider_pane_g

0x2c97,	// (0x0008fde4) aid_area_touch_cam4_zoom

0x9357,	// (0x000964a4) cam4_zoom_cont_pane

0x935f,	// (0x000964ac) cam4_zoom_pane_g1

0x9367,	// (0x000964b4) cam4_zoom_pane_g2

0x936f,	// (0x000964bc) cam4_zoom_pane_g3

0x0002,

0xf8f3,	// (0x0009ca40) cam4_zoom_pane_g

0x9377,	// (0x000964c4) cam4_zoom_cont_pane_g1

0x9380,	// (0x000964cd) cam4_zoom_cont_pane_g2

0x9389,	// (0x000964d6) cam4_zoom_cont_pane_g3

0x0002,

0xf8fa,	// (0x0009ca47) cam4_zoom_cont_pane_g

0x879f,	// (0x000958ec) call4_image_pane_ParamLimits

0x879f,	// (0x000958ec) call4_image_pane

0x8800,	// (0x0009594d) call4_windows_conf_pane_ParamLimits

0x8847,	// (0x00095994) popup_call4_audio_in_window_ParamLimits

0x8847,	// (0x00095994) popup_call4_audio_in_window

0x038f,	// (0x0008d4dc) bg_popup_call2_act_pane_cp02

0xea0e,	// (0x0009bb5b) call4_list_conf_pane

0x1d99,	// (0x0008eee6) call4_image_pane_g1

0x1d99,	// (0x0008eee6) call4_image_pane_g2

0x0001,

0xf0af,	// (0x0009c1fc) call4_image_pane_g

0xece4,	// (0x0009be31) list_single_graphic_popup_conf4_pane_ParamLimits

0xece4,	// (0x0009be31) list_single_graphic_popup_conf4_pane

0x038f,	// (0x0008d4dc) list_highlight_pane_cp022

0xed02,	// (0x0009be4f) list_single_graphic_popup_conf4_pane_g1

0x2cf0,	// (0x0008fe3d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf901,	// (0x0009ca4e) list_single_graphic_popup_conf4_pane_g

0xed0a,	// (0x0009be57) list_single_graphic_popup_conf4_pane_t1

0x5099,	// (0x000921e6) popup_vtel_slider_window_ParamLimits

0x5099,	// (0x000921e6) popup_vtel_slider_window

0xe9e0,	// (0x0009bb2d) dialer2_ne_pane_t2_ParamLimits

0xe9e0,	// (0x0009bb2d) dialer2_ne_pane_t2

0x0001,

0xf7e2,	// (0x0009c92f) dialer2_ne_pane_t_ParamLimits

0xf7e2,	// (0x0009c92f) dialer2_ne_pane_t

0x1093,	// (0x0008e1e0) bg_popup_sub_pane_cp010_ParamLimits

0x1093,	// (0x0008e1e0) bg_popup_sub_pane_cp010

0x9392,	// (0x000964df) popup_vtel_slider_window_g1_ParamLimits

0x9392,	// (0x000964df) popup_vtel_slider_window_g1

0x939e,	// (0x000964eb) popup_vtel_slider_window_g2_ParamLimits

0x939e,	// (0x000964eb) popup_vtel_slider_window_g2

0x0003,

0xf906,	// (0x0009ca53) popup_vtel_slider_window_g_ParamLimits

0xf906,	// (0x0009ca53) popup_vtel_slider_window_g

0x93e6,	// (0x00096533) vtel_slider_pane_ParamLimits

0x93e6,	// (0x00096533) vtel_slider_pane

0x93f5,	// (0x00096542) vtel_slider_pane_g1_ParamLimits

0x93f5,	// (0x00096542) vtel_slider_pane_g1

0x9402,	// (0x0009654f) vtel_slider_pane_g2_ParamLimits

0x9402,	// (0x0009654f) vtel_slider_pane_g2

0x940f,	// (0x0009655c) vtel_slider_pane_g3_ParamLimits

0x940f,	// (0x0009655c) vtel_slider_pane_g3

0x93f5,	// (0x00096542) vtel_slider_pane_g4_ParamLimits

0x93f5,	// (0x00096542) vtel_slider_pane_g4

0x941c,	// (0x00096569) vtel_slider_pane_g5_ParamLimits

0x941c,	// (0x00096569) vtel_slider_pane_g5

0x0004,

0xf90f,	// (0x0009ca5c) vtel_slider_pane_g_ParamLimits

0xf90f,	// (0x0009ca5c) vtel_slider_pane_g

0x7002,	// (0x0009414f) main_gallery2_pane

0x8bc7,	// (0x00095d14) aid_size_row_itut2_dropdow_list_ParamLimits

0x8bc7,	// (0x00095d14) aid_size_row_itut2_dropdow_list

0x8c35,	// (0x00095d82) grid_vitu2_function_top_pane_ParamLimits

0x8c35,	// (0x00095d82) grid_vitu2_function_top_pane

0x8c8b,	// (0x00095dd8) popup_vitu2_dropdown_list_window_ParamLimits

0x8c8b,	// (0x00095dd8) popup_vitu2_dropdown_list_window

0x8ca9,	// (0x00095df6) popup_vitu2_match_list_window

0x9429,	// (0x00096576) cell_vitu2_function_top_pane_ParamLimits

0x9429,	// (0x00096576) cell_vitu2_function_top_pane

0x9443,	// (0x00096590) cell_vitu2_function_top_pane_cp01_ParamLimits

0x9443,	// (0x00096590) cell_vitu2_function_top_pane_cp01

0x945f,	// (0x000965ac) cell_vitu2_function_top_wide_pane_ParamLimits

0x945f,	// (0x000965ac) cell_vitu2_function_top_wide_pane

0x7002,	// (0x0009414f) bg_button_pane_cp012

0x947d,	// (0x000965ca) cell_vitu2_function_top_pane_g1

0x9491,	// (0x000965de) bg_button_pane_cp013_ParamLimits

0x9491,	// (0x000965de) bg_button_pane_cp013

0x94ad,	// (0x000965fa) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x94ad,	// (0x000965fa) cell_vitu2_function_top_wide_pane_g1

0x435f,	// (0x000914ac) bg_popup_sub_pane_cp20

0x94c5,	// (0x00096612) list_vitu2_match_list_pane

0xeabd,	// (0x0009bc0a) bg_popup_sub_pane_cp20_g1

0xeac5,	// (0x0009bc12) bg_popup_sub_pane_cp20_g2

0x21c1,	// (0x0008f30e) bg_popup_sub_pane_cp20_g3

0xeacd,	// (0x0009bc1a) bg_popup_sub_pane_cp20_g4

0x21a1,	// (0x0008f2ee) bg_popup_sub_pane_cp20_g5

0xed20,	// (0x0009be6d) bg_popup_sub_pane_cp20_g6

0xeadd,	// (0x0009bc2a) bg_popup_sub_pane_cp20_g7

0xeae5,	// (0x0009bc32) bg_popup_sub_pane_cp20_g8

0xeaed,	// (0x0009bc3a) bg_popup_sub_pane_cp20_g9

0x0008,

0xf91a,	// (0x0009ca67) bg_popup_sub_pane_cp20_g

0x94dd,	// (0x0009662a) list_vitu2_match_list_item_pane_ParamLimits

0x94dd,	// (0x0009662a) list_vitu2_match_list_item_pane

0x94ef,	// (0x0009663c) list_vitu2_match_list_item_pane_t1

0x4379,	// (0x000914c6) bg_popup_sub_pane_cp21

0x1f95,	// (0x0008f0e2) grid_vitu2_dropdown_list_pane

0x94fd,	// (0x0009664a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x94fd,	// (0x0009664a) cell_vitu2_dropdown_list_char_pane

0x9521,	// (0x0009666e) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x9521,	// (0x0009666e) cell_vitu2_dropdown_list_ctrl_pane

0xed28,	// (0x0009be75) cell_vitu2_dropdown_list_char_pane_g1

0xed31,	// (0x0009be7e) cell_vitu2_dropdown_list_char_pane_g2

0xed3a,	// (0x0009be87) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf92d,	// (0x0009ca7a) cell_vitu2_dropdown_list_char_pane_g

0x954b,	// (0x00096698) cell_vitu2_dropdown_list_char_pane_t1

0x9559,	// (0x000966a6) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x9559,	// (0x000966a6) cell_vitu2_dropdown_list_ctrl_pane_g1

0x9569,	// (0x000966b6) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x9569,	// (0x000966b6) cell_vitu2_dropdown_list_ctrl_pane_g2

0x957a,	// (0x000966c7) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x957a,	// (0x000966c7) cell_vitu2_dropdown_list_ctrl_pane_g3

0x958a,	// (0x000966d7) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x958a,	// (0x000966d7) cell_vitu2_dropdown_list_ctrl_pane_g4

0x0f38,	// (0x0008e085) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x0f38,	// (0x0008e085) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf934,	// (0x0009ca81) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf934,	// (0x0009ca81) cell_vitu2_dropdown_list_ctrl_pane_g

0x95a3,	// (0x000966f0) aid_size_cell_gallery2_ParamLimits

0x95a3,	// (0x000966f0) aid_size_cell_gallery2

0x95bd,	// (0x0009670a) grid_gallery2_pane_ParamLimits

0x95bd,	// (0x0009670a) grid_gallery2_pane

0x95d4,	// (0x00096721) scroll_pane_cp029_ParamLimits

0x95d4,	// (0x00096721) scroll_pane_cp029

0x95e4,	// (0x00096731) cell_gallery2_pane_ParamLimits

0x95e4,	// (0x00096731) cell_gallery2_pane

0xed43,	// (0x0009be90) cell_gallery2_pane_g2

0x963b,	// (0x00096788) cell_gallery2_pane_g3

0xed4b,	// (0x0009be98) cell_gallery2_pane_g4

0xed53,	// (0x0009bea0) cell_gallery2_pane_g5

0x1f95,	// (0x0008f0e2) grid_highlight_pane_cp10

0x8ca9,	// (0x00095df6) popup_vitu2_match_list_window_ParamLimits

0x8cbd,	// (0x00095e0a) popup_vitu2_query_window_ParamLimits

0x8cbd,	// (0x00095e0a) popup_vitu2_query_window

0x4379,	// (0x000914c6) bg_vitu2_candi_button_pane

0xed28,	// (0x0009be75) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xed31,	// (0x0009be7e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xed3a,	// (0x0009be87) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x9643,	// (0x00096790) bg_button_pane_cp015

0x9658,	// (0x000967a5) bg_button_pane_cp016

0x9664,	// (0x000967b1) bg_button_pane_cp017

0x2f97,	// (0x000900e4) bg_popup_sub_pane_cp22

0xed5b,	// (0x0009bea8) popup_vitu2_query_window_g1

0x96a5,	// (0x000967f2) popup_vitu2_query_window_g2

0x0002,

0xf93f,	// (0x0009ca8c) popup_vitu2_query_window_g

0x96c9,	// (0x00096816) popup_vitu2_query_window_t1_ParamLimits

0x96c9,	// (0x00096816) popup_vitu2_query_window_t1

0x96fc,	// (0x00096849) popup_vitu2_query_window_t2_ParamLimits

0x96fc,	// (0x00096849) popup_vitu2_query_window_t2

0x970e,	// (0x0009685b) popup_vitu2_query_window_t3_ParamLimits

0x970e,	// (0x0009685b) popup_vitu2_query_window_t3

0x9736,	// (0x00096883) popup_vitu2_query_window_t4_ParamLimits

0x9736,	// (0x00096883) popup_vitu2_query_window_t4

0x974a,	// (0x00096897) popup_vitu2_query_window_t5_ParamLimits

0x974a,	// (0x00096897) popup_vitu2_query_window_t5

0x0006,

0xf946,	// (0x0009ca93) popup_vitu2_query_window_t_ParamLimits

0xf946,	// (0x0009ca93) popup_vitu2_query_window_t

0xebe9,	// (0x0009bd36) main_cset_text_pane

0x9085,	// (0x000961d2) aid_area_touch_slider_ParamLimits

0x90a1,	// (0x000961ee) cset_slider_pane_ParamLimits

0x90c4,	// (0x00096211) main_cset_slider_pane_g1_ParamLimits

0x90d9,	// (0x00096226) main_cset_slider_pane_g2_ParamLimits

0xec0a,	// (0x0009bd57) main_cset_slider_pane_g3_ParamLimits

0xec0a,	// (0x0009bd57) main_cset_slider_pane_g3

0x90ee,	// (0x0009623b) main_cset_slider_pane_g4_ParamLimits

0x90ee,	// (0x0009623b) main_cset_slider_pane_g4

0x90fd,	// (0x0009624a) main_cset_slider_pane_g5_ParamLimits

0x90fd,	// (0x0009624a) main_cset_slider_pane_g5

0x9109,	// (0x00096256) main_cset_slider_pane_g6_ParamLimits

0x9109,	// (0x00096256) main_cset_slider_pane_g6

0xf8a3,	// (0x0009c9f0) main_cset_slider_pane_g_ParamLimits

0xec3a,	// (0x0009bd87) main_cset_slider_pane_t1_ParamLimits

0x9195,	// (0x000962e2) main_cset_slider_pane_t2_ParamLimits

0x91af,	// (0x000962fc) main_cset_slider_pane_t3_ParamLimits

0x91c9,	// (0x00096316) main_cset_slider_pane_t4_ParamLimits

0x91e3,	// (0x00096330) main_cset_slider_pane_t5_ParamLimits

0x91fd,	// (0x0009634a) main_cset_slider_pane_t6_ParamLimits

0x9212,	// (0x0009635f) main_cset_slider_pane_t7_ParamLimits

0x923c,	// (0x00096389) main_cset_slider_pane_t8_ParamLimits

0x923c,	// (0x00096389) main_cset_slider_pane_t8

0x9264,	// (0x000963b1) main_cset_slider_pane_t9_ParamLimits

0x9264,	// (0x000963b1) main_cset_slider_pane_t9

0x928c,	// (0x000963d9) main_cset_slider_pane_t10_ParamLimits

0x928c,	// (0x000963d9) main_cset_slider_pane_t10

0x92b4,	// (0x00096401) main_cset_slider_pane_t11_ParamLimits

0x92b4,	// (0x00096401) main_cset_slider_pane_t11

0x92dc,	// (0x00096429) main_cset_slider_pane_t12_ParamLimits

0x92dc,	// (0x00096429) main_cset_slider_pane_t12

0x92f9,	// (0x00096446) main_cset_slider_pane_t13_ParamLimits

0x92f9,	// (0x00096446) main_cset_slider_pane_t13

0xf8c8,	// (0x0009ca15) main_cset_slider_pane_t_ParamLimits

0x038f,	// (0x0008d4dc) bg_popup_sub_pane_cp011

0xed67,	// (0x0009beb4) main_cset_text_pane_g1

0xed6f,	// (0x0009bebc) main_cset_text_pane_t1

0xed7d,	// (0x0009beca) main_cset_text_pane_t2

0xed8b,	// (0x0009bed8) main_cset_text_pane_t3

0xed99,	// (0x0009bee6) main_cset_text_pane_t4

0xeda7,	// (0x0009bef4) main_cset_text_pane_t5

0xedb5,	// (0x0009bf02) main_cset_text_pane_t6

0xedc3,	// (0x0009bf10) main_cset_text_pane_t7

0x0006,

0xf955,	// (0x0009caa2) main_cset_text_pane_t

0x4379,	// (0x000914c6) main_cam4_burst_pane

0x4379,	// (0x000914c6) main_cam5_pane

0xebab,	// (0x0009bcf8) bg_button_pane_cp019

0xebb4,	// (0x0009bd01) bg_button_pane_cp020

0xec16,	// (0x0009bd63) main_cset_slider_pane_g7_ParamLimits

0xec16,	// (0x0009bd63) main_cset_slider_pane_g7

0xec22,	// (0x0009bd6f) main_cset_slider_pane_g8_ParamLimits

0xec22,	// (0x0009bd6f) main_cset_slider_pane_g8

0x911d,	// (0x0009626a) main_cset_slider_pane_g9_ParamLimits

0x911d,	// (0x0009626a) main_cset_slider_pane_g9

0x9129,	// (0x00096276) main_cset_slider_pane_g10_ParamLimits

0x9129,	// (0x00096276) main_cset_slider_pane_g10

0x9135,	// (0x00096282) main_cset_slider_pane_g11_ParamLimits

0x9135,	// (0x00096282) main_cset_slider_pane_g11

0x9141,	// (0x0009628e) main_cset_slider_pane_g12_ParamLimits

0x9141,	// (0x0009628e) main_cset_slider_pane_g12

0x914d,	// (0x0009629a) main_cset_slider_pane_g13_ParamLimits

0x914d,	// (0x0009629a) main_cset_slider_pane_g13

0x9159,	// (0x000962a6) main_cset_slider_pane_g14_ParamLimits

0x9159,	// (0x000962a6) main_cset_slider_pane_g14

0x9165,	// (0x000962b2) main_cset_slider_pane_g15_ParamLimits

0x9165,	// (0x000962b2) main_cset_slider_pane_g15

0xec62,	// (0x0009bdaf) main_cset_slider_pane_t14_ParamLimits

0xec62,	// (0x0009bdaf) main_cset_slider_pane_t14

0xec9b,	// (0x0009bde8) main_cset_slider_pane_t15_ParamLimits

0xec9b,	// (0x0009bde8) main_cset_slider_pane_t15

0x97b4,	// (0x00096901) aid_cam4_burst_size_cell_ParamLimits

0x97b4,	// (0x00096901) aid_cam4_burst_size_cell

0x97d0,	// (0x0009691d) grid_cam4_burst_pane_ParamLimits

0x97d0,	// (0x0009691d) grid_cam4_burst_pane

0x9802,	// (0x0009694f) linegrid_cam4_burst_pane_ParamLimits

0x9802,	// (0x0009694f) linegrid_cam4_burst_pane

0x9820,	// (0x0009696d) scroll_pane_cp30_ParamLimits

0x9820,	// (0x0009696d) scroll_pane_cp30

0x982c,	// (0x00096979) cell_cam4_burst_pane_ParamLimits

0x982c,	// (0x00096979) cell_cam4_burst_pane

0xedd1,	// (0x0009bf1e) linegrid_cam4_burst_pane_g1_ParamLimits

0xedd1,	// (0x0009bf1e) linegrid_cam4_burst_pane_g1

0x986c,	// (0x000969b9) linegrid_cam4_burst_pane_g2_ParamLimits

0x986c,	// (0x000969b9) linegrid_cam4_burst_pane_g2

0xedde,	// (0x0009bf2b) linegrid_cam4_burst_pane_g3_ParamLimits

0xedde,	// (0x0009bf2b) linegrid_cam4_burst_pane_g3

0x0002,

0xf964,	// (0x0009cab1) linegrid_cam4_burst_pane_g_ParamLimits

0xf964,	// (0x0009cab1) linegrid_cam4_burst_pane_g

0x987d,	// (0x000969ca) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x987d,	// (0x000969ca) linegrid_cam4_burst_pane_g3_copy1

0xedeb,	// (0x0009bf38) linegrid_cam4_burst_pane_g4_ParamLimits

0xedeb,	// (0x0009bf38) linegrid_cam4_burst_pane_g4

0x9897,	// (0x000969e4) linegrid_cam4_burst_pane_g5_ParamLimits

0x9897,	// (0x000969e4) linegrid_cam4_burst_pane_g5

0x98a8,	// (0x000969f5) linegrid_cam4_burst_pane_g6_ParamLimits

0x98a8,	// (0x000969f5) linegrid_cam4_burst_pane_g6

0xedf8,	// (0x0009bf45) linegrid_cam4_burst_pane_g7_ParamLimits

0xedf8,	// (0x0009bf45) linegrid_cam4_burst_pane_g7

0x98bf,	// (0x00096a0c) cell_cam4_burst_pane_g1

0xee11,	// (0x0009bf5e) main_cam5_pane_t1_ParamLimits

0xee11,	// (0x0009bf5e) main_cam5_pane_t1

0xee23,	// (0x0009bf70) main_cam5_pane_t2_ParamLimits

0xee23,	// (0x0009bf70) main_cam5_pane_t2

0xee35,	// (0x0009bf82) main_cam5_pane_t3_ParamLimits

0xee35,	// (0x0009bf82) main_cam5_pane_t3

0xee47,	// (0x0009bf94) main_cam5_pane_t4_ParamLimits

0xee47,	// (0x0009bf94) main_cam5_pane_t4

0xee5f,	// (0x0009bfac) main_cam5_pane_t5_ParamLimits

0xee5f,	// (0x0009bfac) main_cam5_pane_t5

0xee73,	// (0x0009bfc0) main_cam5_pane_t6_ParamLimits

0xee73,	// (0x0009bfc0) main_cam5_pane_t6

0xee87,	// (0x0009bfd4) main_cam5_pane_t7_ParamLimits

0xee87,	// (0x0009bfd4) main_cam5_pane_t7

0xee99,	// (0x0009bfe6) main_cam5_pane_t8_ParamLimits

0xee99,	// (0x0009bfe6) main_cam5_pane_t8

0xeeb7,	// (0x0009c004) main_cam5_pane_t9_ParamLimits

0xeeb7,	// (0x0009c004) main_cam5_pane_t9

0xeec9,	// (0x0009c016) main_cam5_pane_t10_ParamLimits

0xeec9,	// (0x0009c016) main_cam5_pane_t10

0xeedb,	// (0x0009c028) main_cam5_pane_t11_ParamLimits

0xeedb,	// (0x0009c028) main_cam5_pane_t11

0xeeef,	// (0x0009c03c) main_cam5_pane_t12_ParamLimits

0xeeef,	// (0x0009c03c) main_cam5_pane_t12

0xef06,	// (0x0009c053) main_cam5_pane_t13_ParamLimits

0xef06,	// (0x0009c053) main_cam5_pane_t13

0x000c,

0xf970,	// (0x0009cabd) main_cam5_pane_t_ParamLimits

0xf970,	// (0x0009cabd) main_cam5_pane_t

0x431e,	// (0x0009146b) popup_scut_keymap_window_ParamLimits

0x431e,	// (0x0009146b) popup_scut_keymap_window

0x98d2,	// (0x00096a1f) aid_size_cell_brow_shortcut

0x1f95,	// (0x0008f0e2) bg_popup_window_pane_cp010

0x98de,	// (0x00096a2b) grid_scut_pane

0x98ea,	// (0x00096a37) cell_scut_pane_ParamLimits

0x98ea,	// (0x00096a37) cell_scut_pane

0x9905,	// (0x00096a52) cell_scut_pane_g1

0xef29,	// (0x0009c076) cell_scut_pane_t1

0xef38,	// (0x0009c085) cell_scut_pane_t2

0x990e,	// (0x00096a5b) cell_scut_pane_t3

0x0002,

0xf98b,	// (0x0009cad8) cell_scut_pane_t

0x78f6,	// (0x00094a43) main_mup3_pane_g8_ParamLimits

0x78f6,	// (0x00094a43) main_mup3_pane_g8

0x8bd5,	// (0x00095d22) area_vitu2_query_pane_ParamLimits

0x8bd5,	// (0x00095d22) area_vitu2_query_pane

0x9670,	// (0x000967bd) input_focus_pane_cp08

0xef47,	// (0x0009c094) area_vitu2_query_pane_g1

0x991c,	// (0x00096a69) area_vitu2_query_pane_g2

0x0001,

0xf992,	// (0x0009cadf) area_vitu2_query_pane_g

0x992d,	// (0x00096a7a) area_vitu2_query_pane_t1_ParamLimits

0x992d,	// (0x00096a7a) area_vitu2_query_pane_t1

0x9941,	// (0x00096a8e) area_vitu2_query_pane_t2_ParamLimits

0x9941,	// (0x00096a8e) area_vitu2_query_pane_t2

0x9955,	// (0x00096aa2) area_vitu2_query_pane_t3_ParamLimits

0x9955,	// (0x00096aa2) area_vitu2_query_pane_t3

0xef53,	// (0x0009c0a0) area_vitu2_query_pane_t4_ParamLimits

0xef53,	// (0x0009c0a0) area_vitu2_query_pane_t4

0xef7b,	// (0x0009c0c8) area_vitu2_query_pane_t5_ParamLimits

0xef7b,	// (0x0009c0c8) area_vitu2_query_pane_t5

0xefa3,	// (0x0009c0f0) area_vitu2_query_pane_t6_ParamLimits

0xefa3,	// (0x0009c0f0) area_vitu2_query_pane_t6

0x0006,

0xf997,	// (0x0009cae4) area_vitu2_query_pane_t_ParamLimits

0xf997,	// (0x0009cae4) area_vitu2_query_pane_t

0x9658,	// (0x000967a5) bg_button_pane_cp018

0x997d,	// (0x00096aca) bg_button_pane_cp021

0x9989,	// (0x00096ad6) bg_button_pane_cp022

0x99ac,	// (0x00096af9) input_focus_pane_cp09

0x63cd,	// (0x0009351a) aid_size_touch_mv_arrow_left

0x63f8,	// (0x00093545) aid_size_touch_mv_arrow_right

0x917d,	// (0x000962ca) main_cset_slider_pane_g16_ParamLimits

0x917d,	// (0x000962ca) main_cset_slider_pane_g16

0x9189,	// (0x000962d6) main_cset_slider_pane_g17_ParamLimits

0x9189,	// (0x000962d6) main_cset_slider_pane_g17

0x98bf,	// (0x00096a0c) cell_cam4_burst_pane_g1_ParamLimits

0x038f,	// (0x0008d4dc) compa_mode_pane

0x93aa,	// (0x000964f7) popup_vtel_slider_window_g3_ParamLimits

0x93aa,	// (0x000964f7) popup_vtel_slider_window_g3

0x93be,	// (0x0009650b) popup_vtel_slider_window_g4_ParamLimits

0x93be,	// (0x0009650b) popup_vtel_slider_window_g4

0x93d2,	// (0x0009651f) popup_vtel_slider_window_t1_ParamLimits

0x93d2,	// (0x0009651f) popup_vtel_slider_window_t1

0x4379,	// (0x000914c6) main_cl_pane

0x70ac,	// (0x000941f9) popup_imed_adjust2_window_ParamLimits

0x2f97,	// (0x000900e4) bg_tb_trans_pane_cp05_ParamLimits

0xe74c,	// (0x0009b899) popup_imed_adjust2_window_g1_ParamLimits

0xe75b,	// (0x0009b8a8) popup_imed_adjust2_window_g2_ParamLimits

0xe75b,	// (0x0009b8a8) popup_imed_adjust2_window_g2

0xe767,	// (0x0009b8b4) popup_imed_adjust2_window_g3_ParamLimits

0xe767,	// (0x0009b8b4) popup_imed_adjust2_window_g3

0x0002,

0xf717,	// (0x0009c864) popup_imed_adjust2_window_g_ParamLimits

0xf717,	// (0x0009c864) popup_imed_adjust2_window_g

0xe773,	// (0x0009b8c0) popup_imed_adjust2_window_t1_ParamLimits

0xe78b,	// (0x0009b8d8) slider_imed_adjust_pane_ParamLimits

0xe79f,	// (0x0009b8ec) slider_imed_adjust_pane_g1_ParamLimits

0xe7af,	// (0x0009b8fc) slider_imed_adjust_pane_g2_ParamLimits

0xe7bf,	// (0x0009b90c) slider_imed_adjust_pane_g3_ParamLimits

0xe7d0,	// (0x0009b91d) slider_imed_adjust_pane_g4_ParamLimits

0xf71e,	// (0x0009c86b) slider_imed_adjust_pane_g_ParamLimits

0x8918,	// (0x00095a65) aid_touch_area_cam4_ParamLimits

0x8918,	// (0x00095a65) aid_touch_area_cam4

0x8928,	// (0x00095a75) battery_pane_cp01

0x89af,	// (0x00095afc) main_camera4_pane_g6_ParamLimits

0x89af,	// (0x00095afc) main_camera4_pane_g6

0x89cd,	// (0x00095b1a) main_camera4_pane_t2_ParamLimits

0x89cd,	// (0x00095b1a) main_camera4_pane_t2

0x0001,

0xf816,	// (0x0009c963) main_camera4_pane_t_ParamLimits

0xf816,	// (0x0009c963) main_camera4_pane_t

0x8a50,	// (0x00095b9d) aid_touch_area_vid4_ParamLimits

0x8a50,	// (0x00095b9d) aid_touch_area_vid4

0x8a90,	// (0x00095bdd) main_video4_pane_g5_ParamLimits

0x8a90,	// (0x00095bdd) main_video4_pane_g5

0x8ab6,	// (0x00095c03) vid4_progress_pane_ParamLimits

0x8ab6,	// (0x00095c03) vid4_progress_pane

0xec2e,	// (0x0009bd7b) main_cset_slider_pane_g18_ParamLimits

0xec2e,	// (0x0009bd7b) main_cset_slider_pane_g18

0xee05,	// (0x0009bf52) cell_cam4_burst_pane_g2_ParamLimits

0xee05,	// (0x0009bf52) cell_cam4_burst_pane_g2

0x0001,

0xf96b,	// (0x0009cab8) cell_cam4_burst_pane_g_ParamLimits

0xf96b,	// (0x0009cab8) cell_cam4_burst_pane_g

0x99bd,	// (0x00096b0a) bg_cl_pane_ParamLimits

0x99bd,	// (0x00096b0a) bg_cl_pane

0x99c9,	// (0x00096b16) cl_header_pane_ParamLimits

0x99c9,	// (0x00096b16) cl_header_pane

0x99d5,	// (0x00096b22) cl_listscroll_pane_ParamLimits

0x99d5,	// (0x00096b22) cl_listscroll_pane

0xefef,	// (0x0009c13c) bg_cl_pane_g1

0xeff7,	// (0x0009c144) bg_cl_pane_g2

0xefff,	// (0x0009c14c) bg_cl_pane_g3

0xf007,	// (0x0009c154) bg_cl_pane_g4

0xf00f,	// (0x0009c15c) bg_cl_pane_g5

0xf017,	// (0x0009c164) bg_cl_pane_g6

0xf01f,	// (0x0009c16c) bg_cl_pane_g7

0xf027,	// (0x0009c174) bg_cl_pane_g8

0xf02f,	// (0x0009c17c) bg_cl_pane_g9

0x0008,

0xf9a6,	// (0x0009caf3) bg_cl_pane_g

0x99e1,	// (0x00096b2e) aid_height_cl_leading_ParamLimits

0x99e1,	// (0x00096b2e) aid_height_cl_leading

0x99ed,	// (0x00096b3a) aid_height_cl_text_ParamLimits

0x99ed,	// (0x00096b3a) aid_height_cl_text

0x0472,	// (0x0008d5bf) bg_cl_header_pane_ParamLimits

0x0472,	// (0x0008d5bf) bg_cl_header_pane

0x9a05,	// (0x00096b52) cl_header_pane_g1_ParamLimits

0x9a05,	// (0x00096b52) cl_header_pane_g1

0x9a12,	// (0x00096b5f) cl_header_pane_t1_ParamLimits

0x9a12,	// (0x00096b5f) cl_header_pane_t1

0xf037,	// (0x0009c184) cl_list_pane

0xec01,	// (0x0009bd4e) hc_scroll_pane_cp01

0x21a1,	// (0x0008f2ee) bg_cl_header_pane_g1

0xeabd,	// (0x0009bc0a) bg_cl_header_pane_g2

0x21c1,	// (0x0008f30e) bg_cl_header_pane_g3

0xeacd,	// (0x0009bc1a) bg_cl_header_pane_g4

0xeac5,	// (0x0009bc12) bg_cl_header_pane_g5

0xed20,	// (0x0009be6d) bg_cl_header_pane_g6

0xeae5,	// (0x0009bc32) bg_cl_header_pane_g7

0xeaed,	// (0x0009bc3a) bg_cl_header_pane_g8

0xeadd,	// (0x0009bc2a) bg_cl_header_pane_g9

0x0008,

0xf9b9,	// (0x0009cb06) bg_cl_header_pane_g

0x9a24,	// (0x00096b71) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x9a24,	// (0x00096b71) hc_cl_list_double_graphic_heading_pane

0x9a34,	// (0x00096b81) hc_cl_list_single_graphic_pane_ParamLimits

0x9a34,	// (0x00096b81) hc_cl_list_single_graphic_pane

0x9a46,	// (0x00096b93) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x9a46,	// (0x00096b93) hc_cl_list_single_graphic_pane_g1

0x9a52,	// (0x00096b9f) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x9a52,	// (0x00096b9f) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9cc,	// (0x0009cb19) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9cc,	// (0x0009cb19) hc_cl_list_single_graphic_pane_g

0x9a66,	// (0x00096bb3) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x9a66,	// (0x00096bb3) hc_cl_list_single_graphic_pane_t1

0x9a46,	// (0x00096b93) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x9a46,	// (0x00096b93) hc_cl_list_double_graphic_heading_pane_g1

0x9a7b,	// (0x00096bc8) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x9a7b,	// (0x00096bc8) hc_cl_list_double_graphic_heading_pane_g2

0x9a8f,	// (0x00096bdc) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9a8f,	// (0x00096bdc) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9d1,	// (0x0009cb1e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9d1,	// (0x0009cb1e) hc_cl_list_double_graphic_heading_pane_g

0x9aa3,	// (0x00096bf0) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x9aa3,	// (0x00096bf0) hc_cl_list_double_graphic_heading_pane_t1

0x9ab8,	// (0x00096c05) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x9ab8,	// (0x00096c05) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9d8,	// (0x0009cb25) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9d8,	// (0x0009cb25) hc_cl_list_double_graphic_heading_pane_t

0x9ad5,	// (0x00096c22) vid4_progress_pane_g1

0x9ae5,	// (0x00096c32) vid4_progress_pane_g2

0x9af5,	// (0x00096c42) vid4_progress_pane_g3

0x9b07,	// (0x00096c54) vid4_progress_pane_g4

0x0004,

0xf9dd,	// (0x0009cb2a) vid4_progress_pane_g

0x9b25,	// (0x00096c72) vid4_progress_pane_t1

0x9b3f,	// (0x00096c8c) vid4_progress_pane_t2

0x0002,

0xf9e8,	// (0x0009cb35) vid4_progress_pane_t

0x9b6d,	// (0x00096cba) wait_bar_pane_cp07

0xe055,	// (0x0009b1a2) blid_firmament_pane_ParamLimits

0xe098,	// (0x0009b1e5) popup_blid_sat_info2_window_g1

0xe0bc,	// (0x0009b209) popup_blid_sat_info2_window_t3

0xe0ca,	// (0x0009b217) popup_blid_sat_info2_window_t4

0xe0d8,	// (0x0009b225) popup_blid_sat_info2_window_t5

0xe0e6,	// (0x0009b233) popup_blid_sat_info2_window_t6

0xe0f6,	// (0x0009b243) popup_blid_sat_info2_window_t7

0xe104,	// (0x0009b251) popup_blid_sat_info2_window_t8

0xe112,	// (0x0009b25f) popup_blid_sat_info2_window_t9

0xe120,	// (0x0009b26d) popup_blid_sat_info2_window_t10

0xe1e7,	// (0x0009b334) aid_firma_cardinal_ParamLimits

0xe1fb,	// (0x0009b348) blid_firmament_pane_t1_ParamLimits

0xe212,	// (0x0009b35f) blid_firmament_pane_t2_ParamLimits

0xe229,	// (0x0009b376) blid_firmament_pane_t3_ParamLimits

0xe240,	// (0x0009b38d) blid_firmament_pane_t4_ParamLimits

0xf610,	// (0x0009c75d) blid_firmament_pane_t_ParamLimits

0xe257,	// (0x0009b3a4) blid_sat_info_pane_ParamLimits

0x7002,	// (0x0009414f) main_cam_set_pane_ParamLimits

0x7fbe,	// (0x0009510b) aid_size_cell_colour_35_ParamLimits

0x7fd8,	// (0x00095125) aid_size_cell_colour_112_ParamLimits

0x7fef,	// (0x0009513c) aid_size_cell_effect_ParamLimits

0x1093,	// (0x0008e1e0) bg_tb_trans_pane_cp02_ParamLimits

0x2ac1,	// (0x0008fc0e) heading_imed_pane_ParamLimits

0x8009,	// (0x00095156) listscroll_imed_pane_ParamLimits

0xd54e,	// (0x0009a69b) popup_call2_audio_first_window_g5_ParamLimits

0xd54e,	// (0x0009a69b) popup_call2_audio_first_window_g5

0x8608,	// (0x00095755) aid_size_touch_image3_arrow_left_ParamLimits

0x8608,	// (0x00095755) aid_size_touch_image3_arrow_left

0x861e,	// (0x0009576b) aid_size_touch_image3_arrow_right_ParamLimits

0x861e,	// (0x0009576b) aid_size_touch_image3_arrow_right

0x9b58,	// (0x00096ca5) vid4_progress_pane_t3

0x8184,	// (0x000952d1) main_hwr_training_symbol_option_pane_ParamLimits

0x8184,	// (0x000952d1) main_hwr_training_symbol_option_pane

0xe8c7,	// (0x0009ba14) popup_hwr_training_preview_window_ParamLimits

0xe8c7,	// (0x0009ba14) popup_hwr_training_preview_window

0x81e5,	// (0x00095332) hwr_training_navi_pane_g5_ParamLimits

0x81e5,	// (0x00095332) hwr_training_navi_pane_g5

0xeaab,	// (0x0009bbf8) popup_char_count_window

0x435f,	// (0x000914ac) bg_popup_sub_pane_cp20_ParamLimits

0x94c5,	// (0x00096612) list_vitu2_match_list_pane_ParamLimits

0x94d1,	// (0x0009661e) vitu2_page_scroll_pane_ParamLimits

0x94d1,	// (0x0009661e) vitu2_page_scroll_pane

0x04a1,	// (0x0008d5ee) list_single_hwr_training_symbol_option_pane_ParamLimits

0x04a1,	// (0x0008d5ee) list_single_hwr_training_symbol_option_pane

0x04b4,	// (0x0008d601) list_single_hwr_training_symbol_option_pane_g1

0x04bc,	// (0x0008d609) list_single_hwr_training_symbol_option_pane_t1

0x04ca,	// (0x0008d617) bg_button_pane_cp023

0x04d3,	// (0x0008d620) bg_button_pane_cp024

0x0506,	// (0x0008d653) vitu2_page_scroll_pane_g1

0x050e,	// (0x0008d65b) vitu2_page_scroll_pane_g2

0x0001,

0xf9ef,	// (0x0009cb3c) vitu2_page_scroll_pane_g

0x0516,	// (0x0008d663) vitu2_page_scroll_pane_t1

0x0525,	// (0x0008d672) popup_char_count_window_g1

0x052e,	// (0x0008d67b) popup_char_count_window_g2

0x0537,	// (0x0008d684) popup_char_count_window_g3

0x0002,

0xf9f4,	// (0x0009cb41) popup_char_count_window_g

0x0540,	// (0x0008d68d) popup_char_count_window_t1

0x4379,	// (0x000914c6) main_vded2_pane

0xe738,	// (0x0009b885) aid_size_cell_imed_line

0xe742,	// (0x0009b88f) grid_imed_line_width_pane

0x8b2a,	// (0x00095c77) vid4_indicators_pane_g4

0x054e,	// (0x0008d69b) cell_imed_line_width_pane_ParamLimits

0x054e,	// (0x0008d69b) cell_imed_line_width_pane

0x0564,	// (0x0008d6b1) cell_imed_line_width_pane_g1

0x056d,	// (0x0008d6ba) cell_imed_line_width_pane_g2

0x0001,

0xf9fb,	// (0x0009cb48) cell_imed_line_width_pane_g

0x9b94,	// (0x00096ce1) main_vded2_pane_g1_ParamLimits

0x9b94,	// (0x00096ce1) main_vded2_pane_g1

0x9ba3,	// (0x00096cf0) main_vded2_pane_g2_ParamLimits

0x9ba3,	// (0x00096cf0) main_vded2_pane_g2

0x0001,

0xfa00,	// (0x0009cb4d) main_vded2_pane_g_ParamLimits

0xfa00,	// (0x0009cb4d) main_vded2_pane_g

0x9bb1,	// (0x00096cfe) vded2_slider_pane_ParamLimits

0x9bb1,	// (0x00096cfe) vded2_slider_pane

0x9bbe,	// (0x00096d0b) aid_size_touch_vded2_end

0x9bc8,	// (0x00096d15) aid_size_touch_vded2_playhead

0x0575,	// (0x0008d6c2) aid_size_touch_vded2_start

0x057d,	// (0x0008d6ca) vded2_slider_bg_pane

0x0586,	// (0x0008d6d3) vded2_slider_pane_g1

0x058f,	// (0x0008d6dc) vded2_slider_pane_g2

0x9bd0,	// (0x00096d1d) vded2_slider_pane_g3

0x0002,

0xfa05,	// (0x0009cb52) vded2_slider_pane_g

0x0597,	// (0x0008d6e4) vded2_slider_bg_pane_g1

0x05a0,	// (0x0008d6ed) vded2_slider_bg_pane_g2

0x05a9,	// (0x0008d6f6) vded2_slider_bg_pane_g3

0x0002,

0xf6db,	// (0x0009c828) vded2_slider_bg_pane_g

0x6928,	// (0x00093a75) aid_postcard_touch_down_pane_ParamLimits

0x6928,	// (0x00093a75) aid_postcard_touch_down_pane

0x6938,	// (0x00093a85) aid_postcard_touch_up_pane_ParamLimits

0x6938,	// (0x00093a85) aid_postcard_touch_up_pane

0x4379,	// (0x000914c6) main_blid2_pane

0x702b,	// (0x00094178) popup_blid2_search_window

0x038f,	// (0x0008d4dc) blid2_gps_pane

0x038f,	// (0x0008d4dc) blid2_navig_pane

0x038f,	// (0x0008d4dc) blid2_search_pane

0x038f,	// (0x0008d4dc) blid2_tripm_pane

0x9bd9,	// (0x00096d26) blid2_search_pane_g1_ParamLimits

0x9bd9,	// (0x00096d26) blid2_search_pane_g1

0x9be5,	// (0x00096d32) blid2_search_pane_t1_ParamLimits

0x9be5,	// (0x00096d32) blid2_search_pane_t1

0x9bf7,	// (0x00096d44) aid_size_cell_blid2_gps_ParamLimits

0x9bf7,	// (0x00096d44) aid_size_cell_blid2_gps

0x9c07,	// (0x00096d54) blid2_gps_pane_g1_ParamLimits

0x9c07,	// (0x00096d54) blid2_gps_pane_g1

0x9c13,	// (0x00096d60) grid_blid2_satellite_pane_ParamLimits

0x9c13,	// (0x00096d60) grid_blid2_satellite_pane

0x9c21,	// (0x00096d6e) blid2_navig_pane_g1_ParamLimits

0x9c21,	// (0x00096d6e) blid2_navig_pane_g1

0x9c2d,	// (0x00096d7a) blid2_navig_pane_t1_ParamLimits

0x9c2d,	// (0x00096d7a) blid2_navig_pane_t1

0x9c3f,	// (0x00096d8c) blid2_navig_pane_t2_ParamLimits

0x9c3f,	// (0x00096d8c) blid2_navig_pane_t2

0x0001,

0xfa0c,	// (0x0009cb59) blid2_navig_pane_t_ParamLimits

0xfa0c,	// (0x0009cb59) blid2_navig_pane_t

0x9c51,	// (0x00096d9e) blid2_navig_ring_pane_ParamLimits

0x9c51,	// (0x00096d9e) blid2_navig_ring_pane

0x9c61,	// (0x00096dae) blid2_speed_pane_ParamLimits

0x9c61,	// (0x00096dae) blid2_speed_pane

0x9c6d,	// (0x00096dba) blid2_tripm_pane_g1_ParamLimits

0x9c6d,	// (0x00096dba) blid2_tripm_pane_g1

0x9c7d,	// (0x00096dca) blid2_tripm_pane_g2_ParamLimits

0x9c7d,	// (0x00096dca) blid2_tripm_pane_g2

0x9c89,	// (0x00096dd6) blid2_tripm_pane_g3_ParamLimits

0x9c89,	// (0x00096dd6) blid2_tripm_pane_g3

0x9c95,	// (0x00096de2) blid2_tripm_pane_g4_ParamLimits

0x9c95,	// (0x00096de2) blid2_tripm_pane_g4

0x9ca1,	// (0x00096dee) blid2_tripm_pane_g5_ParamLimits

0x9ca1,	// (0x00096dee) blid2_tripm_pane_g5

0x0005,

0xfa11,	// (0x0009cb5e) blid2_tripm_pane_g_ParamLimits

0xfa11,	// (0x0009cb5e) blid2_tripm_pane_g

0x9cbd,	// (0x00096e0a) blid2_tripm_pane_t1_ParamLimits

0x9cbd,	// (0x00096e0a) blid2_tripm_pane_t1

0x9ccf,	// (0x00096e1c) blid2_tripm_pane_t2_ParamLimits

0x9ccf,	// (0x00096e1c) blid2_tripm_pane_t2

0x9ce1,	// (0x00096e2e) blid2_tripm_pane_t3_ParamLimits

0x9ce1,	// (0x00096e2e) blid2_tripm_pane_t3

0x0003,

0xfa1e,	// (0x0009cb6b) blid2_tripm_pane_t_ParamLimits

0xfa1e,	// (0x0009cb6b) blid2_tripm_pane_t

0x9d13,	// (0x00096e60) cell_blid2_satellite_pane_ParamLimits

0x9d13,	// (0x00096e60) cell_blid2_satellite_pane

0x9d31,	// (0x00096e7e) cell_blid2_satellite_pane_g1

0x05b2,	// (0x0008d6ff) cell_blid2_satellite_pane_t1

0x1d99,	// (0x0008eee6) blid2_speed_pane_g1

0x05c0,	// (0x0008d70d) blid2_speed_pane_t1

0x05ce,	// (0x0008d71b) blid2_speed_pane_t2

0x0001,

0xfa27,	// (0x0009cb74) blid2_speed_pane_t

0x1d99,	// (0x0008eee6) blid2_navig_ring_pane_g1

0x9d3a,	// (0x00096e87) blid2_navig_ring_pane_g2

0x9d42,	// (0x00096e8f) blid2_navig_ring_pane_g3

0x9d4a,	// (0x00096e97) blid2_navig_ring_pane_g4

0x9d52,	// (0x00096e9f) blid2_navig_ring_pane_g5

0x0004,

0xfa2c,	// (0x0009cb79) blid2_navig_ring_pane_g

0x038f,	// (0x0008d4dc) bg_popup_window_pane_cp011

0x05dc,	// (0x0008d729) popup_blid2_search_window_g1

0x05e4,	// (0x0008d731) popup_blid2_search_window_t1

0x05f2,	// (0x0008d73f) popup_blid2_search_window_t2

0x0001,

0xfa37,	// (0x0009cb84) popup_blid2_search_window_t

0x20b0,	// (0x0008f1fd) main_browser_pane_g1

0x1df7,	// (0x0008ef44) main_browser_pane_ParamLimits

0x7002,	// (0x0009414f) bg_button_pane_cp011_ParamLimits

0x8d9e,	// (0x00095eeb) cell_vitu2_function_pane_g1_ParamLimits

0x2f97,	// (0x000900e4) bg_popup_sub_pane_cp22_ParamLimits

0x9670,	// (0x000967bd) input_focus_pane_cp08_ParamLimits

0x968c,	// (0x000967d9) popup_vitu2_query_button_pane_ParamLimits

0x968c,	// (0x000967d9) popup_vitu2_query_button_pane

0x969b,	// (0x000967e8) popup_vitu2_query_input_button_pane

0xed5b,	// (0x0009bea8) popup_vitu2_query_window_g1_ParamLimits

0x96a5,	// (0x000967f2) popup_vitu2_query_window_g2_ParamLimits

0xf93f,	// (0x0009ca8c) popup_vitu2_query_window_g_ParamLimits

0x038f,	// (0x0008d4dc) bg_button_pane_cp026

0x9d5a,	// (0x00096ea7) popup_vitu2_query_input_button_pane_g1

0x038f,	// (0x0008d4dc) bg_button_pane_cp025

0x0600,	// (0x0008d74d) popup_vitu2_query_button_pane_t1

0x755c,	// (0x000946a9) main_mp3_pane_t6

0x756c,	// (0x000946b9) popup_slider_window_cp01

0x8a05,	// (0x00095b52) cam4_battery_pane

0x8ae3,	// (0x00095c30) cam4_battery_pane_cp02

0x9acd,	// (0x00096c1a) cam4_battery_pane_cp01

0x9acd,	// (0x00096c1a) cam4_battery_pane_cp03

0x060e,	// (0x0008d75b) cam4_battery_pane_g1

0x1d99,	// (0x0008eee6) cam4_battery_pane_g2

0x0001,

0xfa3c,	// (0x0009cb89) cam4_battery_pane_g

0xe12e,	// (0x0009b27b) popup_blid_sat_info2_window_t11

0x63cd,	// (0x0009351a) aid_size_touch_mv_arrow_left_ParamLimits

0x63f8,	// (0x00093545) aid_size_touch_mv_arrow_right_ParamLimits

0x2e1e,	// (0x0008ff6b) navi_pane_g1_ParamLimits

0x6437,	// (0x00093584) navi_pane_g2_ParamLimits

0x6465,	// (0x000935b2) navi_pane_g3_ParamLimits

0xf334,	// (0x0009c481) navi_pane_g_ParamLimits

0x64bf,	// (0x0009360c) navi_pane_mv_t1_ParamLimits

0x8015,	// (0x00095162) grid_imed_effect_pane_ParamLimits

0x4f61,	// (0x000920ae) aid_placing_vt_slider_lsc

0x1fec,	// (0x0008f139) aid_placing_vt_slider_prt

0x1093,	// (0x0008e1e0) bg_tb_trans_pane_cp01_ParamLimits

0xe396,	// (0x0009b4e3) popup_image_details_window_g1_ParamLimits

0xe3a9,	// (0x0009b4f6) popup_image_details_window_g2_ParamLimits

0xe3be,	// (0x0009b50b) popup_image_details_window_g3_ParamLimits

0xe3be,	// (0x0009b50b) popup_image_details_window_g3

0xf650,	// (0x0009c79d) popup_image_details_window_g_ParamLimits

0xe3d2,	// (0x0009b51f) popup_image_details_window_t1_ParamLimits

0xe3e4,	// (0x0009b531) popup_image_details_window_t2_ParamLimits

0xe3fd,	// (0x0009b54a) popup_image_details_window_t3_ParamLimits

0xe411,	// (0x0009b55e) popup_image_details_window_t4_ParamLimits

0xe42c,	// (0x0009b579) popup_image_details_window_t5_ParamLimits

0xf657,	// (0x0009c7a4) popup_image_details_window_t_ParamLimits

0x99f9,	// (0x00096b46) cl_header_name_pane_ParamLimits

0x99f9,	// (0x00096b46) cl_header_name_pane

0x9d62,	// (0x00096eaf) cl_header_name_pane_t1_ParamLimits

0x9d62,	// (0x00096eaf) cl_header_name_pane_t1

0x9d79,	// (0x00096ec6) cl_header_name_pane_t2_ParamLimits

0x9d79,	// (0x00096ec6) cl_header_name_pane_t2

0x9da3,	// (0x00096ef0) cl_header_name_pane_t3_ParamLimits

0x9da3,	// (0x00096ef0) cl_header_name_pane_t3

0x0002,

0xfa41,	// (0x0009cb8e) cl_header_name_pane_t_ParamLimits

0xfa41,	// (0x0009cb8e) cl_header_name_pane_t

0x6490,	// (0x000935dd) navi_pane_mv_g2_ParamLimits

0xea47,	// (0x0009bb94) field_vitu2_entry_pane_g1_ParamLimits

0xea53,	// (0x0009bba0) field_vitu2_entry_pane_g2_ParamLimits

0x2f75,	// (0x000900c2) field_vitu2_entry_pane_g3_ParamLimits

0x2f75,	// (0x000900c2) field_vitu2_entry_pane_g3

0xf848,	// (0x0009c995) field_vitu2_entry_pane_g_ParamLimits

0x8d2c,	// (0x00095e79) cell_vitu2_itu_pane_g1_ParamLimits

0x8d44,	// (0x00095e91) cell_vitu2_itu_pane_g2_ParamLimits

0x8d44,	// (0x00095e91) cell_vitu2_itu_pane_g2

0x0001,

0xf854,	// (0x0009c9a1) cell_vitu2_itu_pane_g_ParamLimits

0xf854,	// (0x0009c9a1) cell_vitu2_itu_pane_g

0x7002,	// (0x0009414f) bg_vkb2_func_pane_cp05_ParamLimits

0x7002,	// (0x0009414f) bg_vkb2_func_pane_cp05

0x7002,	// (0x0009414f) bg_vkb2_func_pane_cp03

0x7002,	// (0x0009414f) bg_vkb2_func_pane_cp04

0x7002,	// (0x0009414f) bg_vkb2_func_pane_cp10_ParamLimits

0x7002,	// (0x0009414f) bg_vkb2_func_pane_cp10

0x999a,	// (0x00096ae7) bg_vkb2_func_pane_cp08

0x9658,	// (0x000967a5) bg_vkb2_func_pane_cp06

0x997d,	// (0x00096aca) bg_vkb2_func_pane_cp07

0x04dc,	// (0x0008d629) bg_vkb2_func_pane_cp11_ParamLimits

0x04dc,	// (0x0008d629) bg_vkb2_func_pane_cp11

0x04f1,	// (0x0008d63e) bg_vkb2_func_pane_cp12_ParamLimits

0x04f1,	// (0x0008d63e) bg_vkb2_func_pane_cp12

0x038f,	// (0x0008d4dc) bg_vkb2_func_pane_cp09

0xeabd,	// (0x0009bc0a) bg_vkb2_func_pane_g1

0x21c1,	// (0x0008f30e) bg_vkb2_func_pane_g2

0xeac5,	// (0x0009bc12) bg_vkb2_func_pane_g3

0xeacd,	// (0x0009bc1a) bg_vkb2_func_pane_g4

0xed20,	// (0x0009be6d) bg_vkb2_func_pane_g5

0xeae5,	// (0x0009bc32) bg_vkb2_func_pane_g6

0xeaed,	// (0x0009bc3a) bg_vkb2_func_pane_g7

0xeadd,	// (0x0009bc2a) bg_vkb2_func_pane_g8

0x21a1,	// (0x0008f2ee) bg_vkb2_func_pane_g9

0x0008,

0xfa48,	// (0x0009cb95) bg_vkb2_func_pane_g

0x9caf,	// (0x00096dfc) blid2_tripm_pane_g6_ParamLimits

0x9caf,	// (0x00096dfc) blid2_tripm_pane_g6

0xe981,	// (0x0009bace) mp4_progress_pane_g1

0x9d07,	// (0x00096e54) blid2_tripm_values_pane_ParamLimits

0x9d07,	// (0x00096e54) blid2_tripm_values_pane

0x9dc8,	// (0x00096f15) blid2_tripm_values_pane_t1

0x9dd6,	// (0x00096f23) blid2_tripm_values_pane_t2

0x0618,	// (0x0008d765) blid2_tripm_values_pane_t3

0x9de4,	// (0x00096f31) blid2_tripm_values_pane_t4

0x9df2,	// (0x00096f3f) blid2_tripm_values_pane_t5

0x9e00,	// (0x00096f4d) blid2_tripm_values_pane_t6

0x0626,	// (0x0008d773) blid2_tripm_values_pane_t7

0x9e0e,	// (0x00096f5b) blid2_tripm_values_pane_t8

0x9e1c,	// (0x00096f69) blid2_tripm_values_pane_t9

0x0008,

0xfa5b,	// (0x0009cba8) blid2_tripm_values_pane_t

0x4f9f,	// (0x000920ec) call_video_pane_t1_ParamLimits

0x4fbc,	// (0x00092109) call_video_pane_t2_ParamLimits

0xf1dd,	// (0x0009c32a) call_video_pane_t_ParamLimits

0x67d3,	// (0x00093920) msg_header_pane_g1_ParamLimits

0x3050,	// (0x0009019d) msg_header_pane_g2_ParamLimits

0x3050,	// (0x0009019d) msg_header_pane_g2

0x0001,

0xf3d2,	// (0x0009c51f) msg_header_pane_g_ParamLimits

0xf3d2,	// (0x0009c51f) msg_header_pane_g

0x1df7,	// (0x0008ef44) main_clock2_pane_ParamLimits

0x7d8e,	// (0x00094edb) grid_clock2_toolbar_pane_ParamLimits

0x7d8e,	// (0x00094edb) grid_clock2_toolbar_pane

0x7d8e,	// (0x00094edb) listscroll_clock2_pane_ParamLimits

0x7d8e,	// (0x00094edb) listscroll_clock2_pane

0x7e3d,	// (0x00094f8a) main_clock2_pane_t3_ParamLimits

0x7e3d,	// (0x00094f8a) main_clock2_pane_t3

0x7e4f,	// (0x00094f9c) main_clock2_pane_t4_ParamLimits

0x7e4f,	// (0x00094f9c) main_clock2_pane_t4

0x0634,	// (0x0008d781) cell_clock2_toolbar_pane

0x063c,	// (0x0008d789) cell_clock2_toolbar_pane_cp01

0x063c,	// (0x0008d789) cell_clock2_toolbar_pane_cp02

0x0644,	// (0x0008d791) cell_clock2_toolbar_pane_cp03

0x064c,	// (0x0008d799) list_clock2_pane

0x2d84,	// (0x0008fed1) scroll_pane_cp10

0x0654,	// (0x0008d7a1) list_single_clock2_pane_ParamLimits

0x0654,	// (0x0008d7a1) list_single_clock2_pane

0x1f95,	// (0x0008f0e2) list_highlight_pane_cp08

0x0661,	// (0x0008d7ae) list_single_clock2_pane_t1

0x066f,	// (0x0008d7bc) list_single_clock2_pane_t2

0x0001,

0xfa6e,	// (0x0009cbbb) list_single_clock2_pane_t

0x038f,	// (0x0008d4dc) bg_button_pane_cp10

0x067d,	// (0x0008d7ca) cell_clock2_toolbar_pane_g1

0x688a,	// (0x000939d7) aid_main_viewer_pane_g1_ParamLimits

0x688a,	// (0x000939d7) aid_main_viewer_pane_g1

0x6896,	// (0x000939e3) aid_main_viewer_pane_g2_ParamLimits

0x6896,	// (0x000939e3) aid_main_viewer_pane_g2

0x68a2,	// (0x000939ef) aid_main_viewer_pane_g3_ParamLimits

0x68a2,	// (0x000939ef) aid_main_viewer_pane_g3

0x68b3,	// (0x00093a00) aid_main_viewer_pane_g4_ParamLimits

0x68b3,	// (0x00093a00) aid_main_viewer_pane_g4

0x0003,

0xf3e3,	// (0x0009c530) aid_main_viewer_pane_g_ParamLimits

0xf3e3,	// (0x0009c530) aid_main_viewer_pane_g

0x6fe3,	// (0x00094130) main_calc_pane_ParamLimits

0x7010,	// (0x0009415d) main_dialer2_pane_ParamLimits

0x4379,	// (0x000914c6) main_cam6_pane

0x4379,	// (0x000914c6) main_vid6_pane

0x7d9a,	// (0x00094ee7) listscroll_gen_pane_cp06_ParamLimits

0x7d9a,	// (0x00094ee7) listscroll_gen_pane_cp06

0x7e61,	// (0x00094fae) main_clock2_pane_t5_ParamLimits

0x7e61,	// (0x00094fae) main_clock2_pane_t5

0x7eae,	// (0x00094ffb) aid_call2_pane_cp10_ParamLimits

0x7ec0,	// (0x0009500d) aid_call_pane_cp10_ParamLimits

0x2df3,	// (0x0008ff40) popup_clock_analogue_window_cp10_g1_ParamLimits

0x2df3,	// (0x0008ff40) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7ed2,	// (0x0009501f) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7ed2,	// (0x0009501f) popup_clock_analogue_window_cp10_g4_ParamLimits

0x2df3,	// (0x0008ff40) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf70c,	// (0x0009c859) popup_clock_analogue_window_cp10_g_ParamLimits

0x7ee8,	// (0x00095035) popup_clock_analogue_window_cp10_t1_ParamLimits

0xe9f2,	// (0x0009bb3f) cell_dialer2_keypad_pane_g2_ParamLimits

0xe9f2,	// (0x0009bb3f) cell_dialer2_keypad_pane_g2

0x0001,

0xf7e7,	// (0x0009c934) cell_dialer2_keypad_pane_g_ParamLimits

0xf7e7,	// (0x0009c934) cell_dialer2_keypad_pane_g

0x1da3,	// (0x0008eef0) cell_dialer2_keypad_pane_t1

0x9072,	// (0x000961bf) main_cset_text2_pane_ParamLimits

0x9072,	// (0x000961bf) main_cset_text2_pane

0xef47,	// (0x0009c094) area_vitu2_query_pane_g1_ParamLimits

0x991c,	// (0x00096a69) area_vitu2_query_pane_g2_ParamLimits

0xf992,	// (0x0009cadf) area_vitu2_query_pane_g_ParamLimits

0xefcb,	// (0x0009c118) area_vitu2_query_pane_t7_ParamLimits

0xefcb,	// (0x0009c118) area_vitu2_query_pane_t7

0x9658,	// (0x000967a5) bg_button_pane_cp018_ParamLimits

0x997d,	// (0x00096aca) bg_button_pane_cp021_ParamLimits

0x9989,	// (0x00096ad6) bg_button_pane_cp022_ParamLimits

0x999a,	// (0x00096ae7) bg_vkb2_func_pane_cp08_ParamLimits

0x9658,	// (0x000967a5) bg_vkb2_func_pane_cp06_ParamLimits

0x997d,	// (0x00096aca) bg_vkb2_func_pane_cp07_ParamLimits

0x99ac,	// (0x00096af9) input_focus_pane_cp09_ParamLimits

0x9e2a,	// (0x00096f77) cam6_autofocus_pane_ParamLimits

0x9e2a,	// (0x00096f77) cam6_autofocus_pane

0x9e4c,	// (0x00096f99) cam6_image_uncrop_pane_ParamLimits

0x9e4c,	// (0x00096f99) cam6_image_uncrop_pane

0x9e82,	// (0x00096fcf) cam6_indi_pane_ParamLimits

0x9e82,	// (0x00096fcf) cam6_indi_pane

0x9e9c,	// (0x00096fe9) cam6_mode_pane_ParamLimits

0x9e9c,	// (0x00096fe9) cam6_mode_pane

0x9eb0,	// (0x00096ffd) cam6_timer_pane_ParamLimits

0x9eb0,	// (0x00096ffd) cam6_timer_pane

0x9ec4,	// (0x00097011) cam6_zoom_pane_ParamLimits

0x9ec4,	// (0x00097011) cam6_zoom_pane

0x9ee0,	// (0x0009702d) cam6_mode_pane_g1_ParamLimits

0x9ee0,	// (0x0009702d) cam6_mode_pane_g1

0x9eec,	// (0x00097039) cam6_mode_pane_g2_ParamLimits

0x9eec,	// (0x00097039) cam6_mode_pane_g2

0x9ef8,	// (0x00097045) cam6_mode_pane_g3_ParamLimits

0x9ef8,	// (0x00097045) cam6_mode_pane_g3

0x9f04,	// (0x00097051) cam6_mode_pane_g4_ParamLimits

0x9f04,	// (0x00097051) cam6_mode_pane_g4

0x0003,

0xfa73,	// (0x0009cbc0) cam6_mode_pane_g_ParamLimits

0xfa73,	// (0x0009cbc0) cam6_mode_pane_g

0xe93b,	// (0x0009ba88) bg_tb_trans_pane_cp08_ParamLimits

0xe93b,	// (0x0009ba88) bg_tb_trans_pane_cp08

0x0685,	// (0x0008d7d2) cam6_battery_pane_ParamLimits

0x0685,	// (0x0008d7d2) cam6_battery_pane

0x069b,	// (0x0008d7e8) cam6_indi_pane_g1_ParamLimits

0x069b,	// (0x0008d7e8) cam6_indi_pane_g1

0x06ad,	// (0x0008d7fa) cam6_indi_pane_g2_ParamLimits

0x06ad,	// (0x0008d7fa) cam6_indi_pane_g2

0x06bf,	// (0x0008d80c) cam6_indi_pane_g3_ParamLimits

0x06bf,	// (0x0008d80c) cam6_indi_pane_g3

0x0002,

0xfa7c,	// (0x0009cbc9) cam6_indi_pane_g_ParamLimits

0xfa7c,	// (0x0009cbc9) cam6_indi_pane_g

0x06d1,	// (0x0008d81e) cam6_indi_pane_t1_ParamLimits

0x06d1,	// (0x0008d81e) cam6_indi_pane_t1

0x8b67,	// (0x00095cb4) cam6_autofocus_pane_g1

0x8b5f,	// (0x00095cac) cam6_autofocus_pane_g2

0x8b77,	// (0x00095cc4) cam6_autofocus_pane_g3

0x8b6f,	// (0x00095cbc) cam6_autofocus_pane_g4

0x0003,

0xfa83,	// (0x0009cbd0) cam6_autofocus_pane_g

0x06f7,	// (0x0008d844) cam6_timer_pane_g1

0x06ff,	// (0x0008d84c) cam6_timer_pane_t1

0x070d,	// (0x0008d85a) cam6_zoom_cont_pane

0x0715,	// (0x0008d862) cam6_zoom_pane_g1

0x071e,	// (0x0008d86b) cam6_zoom_pane_g2

0x9f10,	// (0x0009705d) cam6_zoom_pane_g3

0x0002,

0xfa8c,	// (0x0009cbd9) cam6_zoom_pane_g

0x1d99,	// (0x0008eee6) cam6_battery_pane_g1

0x1d99,	// (0x0008eee6) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x0009c1fc) cam6_battery_pane_g

0x0715,	// (0x0008d862) cam6_zoom_cont_pane_g1

0x071e,	// (0x0008d86b) cam6_zoom_cont_pane_g2

0x0727,	// (0x0008d874) cam6_zoom_cont_pane_g3

0x0002,

0xfa93,	// (0x0009cbe0) cam6_zoom_cont_pane_g

0x9f2e,	// (0x0009707b) cam6_mode_pane_cp_ParamLimits

0x9f2e,	// (0x0009707b) cam6_mode_pane_cp

0x9f42,	// (0x0009708f) cam6_zoom_pane_cp_ParamLimits

0x9f42,	// (0x0009708f) cam6_zoom_pane_cp

0x9f5e,	// (0x000970ab) vid6_image_uncrop_cif_pane_ParamLimits

0x9f5e,	// (0x000970ab) vid6_image_uncrop_cif_pane

0x9f8a,	// (0x000970d7) vid6_image_uncrop_nhd_pane_ParamLimits

0x9f8a,	// (0x000970d7) vid6_image_uncrop_nhd_pane

0x9fa9,	// (0x000970f6) vid6_image_uncrop_vga_pane_ParamLimits

0x9fa9,	// (0x000970f6) vid6_image_uncrop_vga_pane

0x9fc8,	// (0x00097115) vid6_image_uncrop_wvga_pane_ParamLimits

0x9fc8,	// (0x00097115) vid6_image_uncrop_wvga_pane

0x9fe7,	// (0x00097134) vid6_indi_pane_ParamLimits

0x9fe7,	// (0x00097134) vid6_indi_pane

0xe93b,	// (0x0009ba88) bg_tb_trans_pane_cp09_ParamLimits

0xe93b,	// (0x0009ba88) bg_tb_trans_pane_cp09

0x073f,	// (0x0008d88c) cam6_battery_pane_cp_ParamLimits

0x073f,	// (0x0008d88c) cam6_battery_pane_cp

0x074b,	// (0x0008d898) vid6_indi_pane_g1_ParamLimits

0x074b,	// (0x0008d898) vid6_indi_pane_g1

0x075d,	// (0x0008d8aa) vid6_indi_pane_g2_ParamLimits

0x075d,	// (0x0008d8aa) vid6_indi_pane_g2

0x076f,	// (0x0008d8bc) vid6_indi_pane_g3_ParamLimits

0x076f,	// (0x0008d8bc) vid6_indi_pane_g3

0x0786,	// (0x0008d8d3) vid6_indi_pane_g4_ParamLimits

0x0786,	// (0x0008d8d3) vid6_indi_pane_g4

0x079d,	// (0x0008d8ea) vid6_indi_pane_g5_ParamLimits

0x079d,	// (0x0008d8ea) vid6_indi_pane_g5

0x0004,

0xfa9a,	// (0x0009cbe7) vid6_indi_pane_g_ParamLimits

0xfa9a,	// (0x0009cbe7) vid6_indi_pane_g

0x07b7,	// (0x0008d904) vid6_indi_pane_t1_ParamLimits

0x07b7,	// (0x0008d904) vid6_indi_pane_t1

0x07cd,	// (0x0008d91a) vid6_indi_pane_t2_ParamLimits

0x07cd,	// (0x0008d91a) vid6_indi_pane_t2

0x07f5,	// (0x0008d942) vid6_indi_pane_t3_ParamLimits

0x07f5,	// (0x0008d942) vid6_indi_pane_t3

0x081d,	// (0x0008d96a) vid6_indi_pane_t4_ParamLimits

0x081d,	// (0x0008d96a) vid6_indi_pane_t4

0x0003,

0xfaa5,	// (0x0009cbf2) vid6_indi_pane_t_ParamLimits

0xfaa5,	// (0x0009cbf2) vid6_indi_pane_t

0x0841,	// (0x0008d98e) wait_bar_pane_cp08

0xa00c,	// (0x00097159) main_cset_text2_pane_t1_ParamLimits

0xa00c,	// (0x00097159) main_cset_text2_pane_t1

0x9f19,	// (0x00097066) listscroll_gen_pane_cp06_t1_ParamLimits

0x9f19,	// (0x00097066) listscroll_gen_pane_cp06_t1

0x4379,	// (0x000914c6) main_cam6_set_pane

0x0f38,	// (0x0008e085) bg_tb_trans_pane_cp06_ParamLimits

0x8a0d,	// (0x00095b5a) cam4_indicators_pane_g1_ParamLimits

0x8a1e,	// (0x00095b6b) cam4_indicators_pane_g2_ParamLimits

0xf824,	// (0x0009c971) cam4_indicators_pane_g_ParamLimits

0x8a36,	// (0x00095b83) cam4_indicators_pane_t1_ParamLimits

0x7002,	// (0x0009414f) bg_tb_trans_pane_cp07_ParamLimits

0x8aed,	// (0x00095c3a) vid4_indicators_pane_g1_ParamLimits

0x8b03,	// (0x00095c50) vid4_indicators_pane_g2_ParamLimits

0x8b17,	// (0x00095c64) vid4_indicators_pane_g3_ParamLimits

0x8b2a,	// (0x00095c77) vid4_indicators_pane_g4_ParamLimits

0xf836,	// (0x0009c983) vid4_indicators_pane_g_ParamLimits

0x8b48,	// (0x00095c95) vid4_indicators_pane_t1_ParamLimits

0x9ad5,	// (0x00096c22) vid4_progress_pane_g1_ParamLimits

0x9ae5,	// (0x00096c32) vid4_progress_pane_g2_ParamLimits

0x9af5,	// (0x00096c42) vid4_progress_pane_g3_ParamLimits

0x9b07,	// (0x00096c54) vid4_progress_pane_g4_ParamLimits

0xf9dd,	// (0x0009cb2a) vid4_progress_pane_g_ParamLimits

0x9b25,	// (0x00096c72) vid4_progress_pane_t1_ParamLimits

0x9b3f,	// (0x00096c8c) vid4_progress_pane_t2_ParamLimits

0x9b58,	// (0x00096ca5) vid4_progress_pane_t3_ParamLimits

0xf9e8,	// (0x0009cb35) vid4_progress_pane_t_ParamLimits

0x9b6d,	// (0x00096cba) wait_bar_pane_cp07_ParamLimits

0xa033,	// (0x00097180) main_cam6_set_pane_g2_ParamLimits

0xa033,	// (0x00097180) main_cam6_set_pane_g2

0xa03f,	// (0x0009718c) main_cset6_listscroll_pane_ParamLimits

0xa03f,	// (0x0009718c) main_cset6_listscroll_pane

0xa06c,	// (0x000971b9) main_cset6_slider_pane_ParamLimits

0xa06c,	// (0x000971b9) main_cset6_slider_pane

0xa078,	// (0x000971c5) main_cset6_text2_pane_ParamLimits

0xa078,	// (0x000971c5) main_cset6_text2_pane

0x0850,	// (0x0008d99d) main_cset6_text_pane

0x0858,	// (0x0008d9a5) main_cset_list_pane_copy1_ParamLimits

0x0858,	// (0x0008d9a5) main_cset_list_pane_copy1

0x0868,	// (0x0008d9b5) scroll_pane_cp028_copy1

0xa08b,	// (0x000971d8) cset_list_set_pane_copy1

0xa09b,	// (0x000971e8) aid_position_infowindow_above_copy1

0xa0a3,	// (0x000971f0) aid_position_infowindow_below_copy1

0xa0ab,	// (0x000971f8) cset_list_set_pane_g1_copy1

0xa0b3,	// (0x00097200) cset_list_set_pane_g3_copy1_ParamLimits

0xa0b3,	// (0x00097200) cset_list_set_pane_g3_copy1

0xa0c2,	// (0x0009720f) cset_list_set_pane_t1_copy1_ParamLimits

0xa0c2,	// (0x0009720f) cset_list_set_pane_t1_copy1

0x1093,	// (0x0008e1e0) list_highlight_pane_cp021_copy1_ParamLimits

0x1093,	// (0x0008e1e0) list_highlight_pane_cp021_copy1

0x0871,	// (0x0008d9be) cset6_slider_pane_ParamLimits

0x0871,	// (0x0008d9be) cset6_slider_pane

0x089d,	// (0x0008d9ea) main_cset6_slider_pane_g1_ParamLimits

0x089d,	// (0x0008d9ea) main_cset6_slider_pane_g1

0xa0d7,	// (0x00097224) main_cset6_slider_pane_g2_ParamLimits

0xa0d7,	// (0x00097224) main_cset6_slider_pane_g2

0x08c5,	// (0x0008da12) main_cset6_slider_pane_g3_ParamLimits

0x08c5,	// (0x0008da12) main_cset6_slider_pane_g3

0xa0ff,	// (0x0009724c) main_cset6_slider_pane_g4_ParamLimits

0xa0ff,	// (0x0009724c) main_cset6_slider_pane_g4

0xa10b,	// (0x00097258) main_cset6_slider_pane_g5_ParamLimits

0xa10b,	// (0x00097258) main_cset6_slider_pane_g5

0xec16,	// (0x0009bd63) main_cset6_slider_pane_g7_ParamLimits

0xec16,	// (0x0009bd63) main_cset6_slider_pane_g7

0xec22,	// (0x0009bd6f) main_cset6_slider_pane_g8_ParamLimits

0xec22,	// (0x0009bd6f) main_cset6_slider_pane_g8

0xa117,	// (0x00097264) main_cset6_slider_pane_g9_ParamLimits

0xa117,	// (0x00097264) main_cset6_slider_pane_g9

0xa123,	// (0x00097270) main_cset6_slider_pane_g10_ParamLimits

0xa123,	// (0x00097270) main_cset6_slider_pane_g10

0xa12f,	// (0x0009727c) main_cset6_slider_pane_g11_ParamLimits

0xa12f,	// (0x0009727c) main_cset6_slider_pane_g11

0xa13b,	// (0x00097288) main_cset6_slider_pane_g12_ParamLimits

0xa13b,	// (0x00097288) main_cset6_slider_pane_g12

0xa147,	// (0x00097294) main_cset6_slider_pane_g13_ParamLimits

0xa147,	// (0x00097294) main_cset6_slider_pane_g13

0xa153,	// (0x000972a0) main_cset6_slider_pane_g14_ParamLimits

0xa153,	// (0x000972a0) main_cset6_slider_pane_g14

0xa15f,	// (0x000972ac) main_cset6_slider_pane_g15_ParamLimits

0xa15f,	// (0x000972ac) main_cset6_slider_pane_g15

0xa177,	// (0x000972c4) main_cset6_slider_pane_g16_ParamLimits

0xa177,	// (0x000972c4) main_cset6_slider_pane_g16

0xa183,	// (0x000972d0) main_cset6_slider_pane_g17_ParamLimits

0xa183,	// (0x000972d0) main_cset6_slider_pane_g17

0x0011,

0xfaae,	// (0x0009cbfb) main_cset6_slider_pane_g_ParamLimits

0xfaae,	// (0x0009cbfb) main_cset6_slider_pane_g

0x08d1,	// (0x0008da1e) main_cset6_slider_pane_t1_ParamLimits

0x08d1,	// (0x0008da1e) main_cset6_slider_pane_t1

0xa1a7,	// (0x000972f4) main_cset6_slider_pane_t2_ParamLimits

0xa1a7,	// (0x000972f4) main_cset6_slider_pane_t2

0xa1d2,	// (0x0009731f) main_cset6_slider_pane_t3_ParamLimits

0xa1d2,	// (0x0009731f) main_cset6_slider_pane_t3

0xa1fd,	// (0x0009734a) main_cset6_slider_pane_t4_ParamLimits

0xa1fd,	// (0x0009734a) main_cset6_slider_pane_t4

0xa228,	// (0x00097375) main_cset6_slider_pane_t5_ParamLimits

0xa228,	// (0x00097375) main_cset6_slider_pane_t5

0x0912,	// (0x0008da5f) main_cset6_slider_pane_t7_ParamLimits

0x0912,	// (0x0008da5f) main_cset6_slider_pane_t7

0xa253,	// (0x000973a0) main_cset6_slider_pane_t8_ParamLimits

0xa253,	// (0x000973a0) main_cset6_slider_pane_t8

0xa277,	// (0x000973c4) main_cset6_slider_pane_t9_ParamLimits

0xa277,	// (0x000973c4) main_cset6_slider_pane_t9

0xa29b,	// (0x000973e8) main_cset6_slider_pane_t10_ParamLimits

0xa29b,	// (0x000973e8) main_cset6_slider_pane_t10

0xa2bf,	// (0x0009740c) main_cset6_slider_pane_t11_ParamLimits

0xa2bf,	// (0x0009740c) main_cset6_slider_pane_t11

0x0948,	// (0x0008da95) main_cset6_slider_pane_t14_ParamLimits

0x0948,	// (0x0008da95) main_cset6_slider_pane_t14

0x0981,	// (0x0008dace) main_cset6_slider_pane_t15_ParamLimits

0x0981,	// (0x0008dace) main_cset6_slider_pane_t15

0x000b,

0xfad3,	// (0x0009cc20) main_cset6_slider_pane_t_ParamLimits

0xfad3,	// (0x0009cc20) main_cset6_slider_pane_t

0x09ba,	// (0x0008db07) cset_slider_pane_g1_copy1

0x09c3,	// (0x0008db10) cset_slider_pane_g2_copy1

0x09cc,	// (0x0008db19) cset_slider_pane_g3_copy1

0x038f,	// (0x0008d4dc) bg_popup_sub_pane_cp011_copy1

0x09de,	// (0x0008db2b) main_cset_text_pane_g1_copy1

0xed6f,	// (0x0009bebc) main_cset_text_pane_t1_copy1

0xed7d,	// (0x0009beca) main_cset_text_pane_t2_copy1

0xed8b,	// (0x0009bed8) main_cset_text_pane_t3_copy1

0xed99,	// (0x0009bee6) main_cset_text_pane_t4_copy1

0xeda7,	// (0x0009bef4) main_cset_text_pane_t5_copy1

0x09e6,	// (0x0008db33) main_cset_text_pane_t6_copy1

0x09f4,	// (0x0008db41) main_cset_text_pane_t7_copy1

0xa300,	// (0x0009744d) main_cset_text2_pane_t1_copy1

0x7002,	// (0x0009414f) main_ncimui_pane

0x7069,	// (0x000941b6) popup_query_ncimui_window_ParamLimits

0x7069,	// (0x000941b6) popup_query_ncimui_window

0xe515,	// (0x0009b662) field_cale_ev2_pane_g4_ParamLimits

0xe515,	// (0x0009b662) field_cale_ev2_pane_g4

0x82b1,	// (0x000953fe) cell_video_dialer_keypad_pane_g2_ParamLimits

0x82b1,	// (0x000953fe) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7be,	// (0x0009c90b) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7be,	// (0x0009c90b) cell_video_dialer_keypad_pane_g

0x82c9,	// (0x00095416) cell_video_dialer_keypad_pane_t1

0x038f,	// (0x0008d4dc) bg_popup_window_pane_cp012

0xdda1,	// (0x0009aeee) heading_pane_cp06

0x0a20,	// (0x0008db6d) ncim_query_content_pane

0x038f,	// (0x0008d4dc) bg_popup_heading_pane_cp01

0x0a28,	// (0x0008db75) ncim_heading_pane_t1

0x0a36,	// (0x0008db83) ncim_indicator_popup_pane

0x0a48,	// (0x0008db95) ncim_query_button_pane

0x0a5e,	// (0x0008dbab) ncim_query_content_pane_t1

0x0a70,	// (0x0008dbbd) ncim_query_content_pane_t2

0x0005,

0xfb17,	// (0x0009cc64) ncim_query_content_pane_t

0x0aaa,	// (0x0008dbf7) ncim_query_list_pane

0x0abc,	// (0x0008dc09) ncim_query_popup_pane

0x0a36,	// (0x0008db83) ncim_indicator_popup_pane_ParamLimits

0xa45c,	// (0x000975a9) ncim_query_content_pane_g1_ParamLimits

0xa45c,	// (0x000975a9) ncim_query_content_pane_g1

0x0a5e,	// (0x0008dbab) ncim_query_content_pane_t1_ParamLimits

0x0a70,	// (0x0008dbbd) ncim_query_content_pane_t2_ParamLimits

0xa468,	// (0x000975b5) ncim_query_content_pane_t3_ParamLimits

0xa468,	// (0x000975b5) ncim_query_content_pane_t3

0xa485,	// (0x000975d2) ncim_query_content_pane_t4_ParamLimits

0xa485,	// (0x000975d2) ncim_query_content_pane_t4

0xa4a2,	// (0x000975ef) ncim_query_content_pane_t5_ParamLimits

0xa4a2,	// (0x000975ef) ncim_query_content_pane_t5

0x0a82,	// (0x0008dbcf) ncim_query_content_pane_t6_ParamLimits

0x0a82,	// (0x0008dbcf) ncim_query_content_pane_t6

0xfb17,	// (0x0009cc64) ncim_query_content_pane_t_ParamLimits

0x0aaa,	// (0x0008dbf7) ncim_query_list_pane_ParamLimits

0x0abc,	// (0x0008dc09) ncim_query_popup_pane_ParamLimits

0x0ad0,	// (0x0008dc1d) wait_bar_pane_cp04

0x038f,	// (0x0008d4dc) input_focus_pane_cp011

0x0ad8,	// (0x0008dc25) ncim_query_popup_pane_t1

0x0ae6,	// (0x0008dc33) ncim_list_query_list_pane_ParamLimits

0x0ae6,	// (0x0008dc33) ncim_list_query_list_pane

0x038f,	// (0x0008d4dc) bg_button_pane_cp027

0x0af9,	// (0x0008dc46) ncim_query_button_pane_g1

0x038f,	// (0x0008d4dc) list_highlight_pane_cp012

0x0b03,	// (0x0008dc50) ncim_list_query_list_pane_g1

0x0b0b,	// (0x0008dc58) ncim_list_query_list_pane_t1

0x8a2a,	// (0x00095b77) cam4_indicators_pane_g3_ParamLimits

0x8a2a,	// (0x00095b77) cam4_indicators_pane_g3

0x8b36,	// (0x00095c83) vid4_indicators_pane_g5_ParamLimits

0x8b36,	// (0x00095c83) vid4_indicators_pane_g5

0x9b16,	// (0x00096c63) vid4_progress_pane_g5_ParamLimits

0x9b16,	// (0x00096c63) vid4_progress_pane_g5

0xa332,	// (0x0009747f) main_ncimui_pane_g1

0xa39e,	// (0x000974eb) ncimui_group_query_pane_ParamLimits

0xa39e,	// (0x000974eb) ncimui_group_query_pane

0xa3f8,	// (0x00097545) ncimui_list_pane_ParamLimits

0xa3f8,	// (0x00097545) ncimui_list_pane

0xa41f,	// (0x0009756c) ncimui_text_pane_ParamLimits

0xa41f,	// (0x0009756c) ncimui_text_pane

0xa4bf,	// (0x0009760c) ncimui_text_pane_t1_ParamLimits

0xa4bf,	// (0x0009760c) ncimui_text_pane_t1

0x0b19,	// (0x0008dc66) ncimui_list_single_graphic_pane_ParamLimits

0x0b19,	// (0x0008dc66) ncimui_list_single_graphic_pane

0xa4de,	// (0x0009762b) ncimui_query_pane_ParamLimits

0xa4de,	// (0x0009762b) ncimui_query_pane

0x038f,	// (0x0008d4dc) list_highlight_pane_cp013

0x0b29,	// (0x0008dc76) ncim_list_query_list_pane_t1_copy1

0x0b03,	// (0x0008dc50) ncim_list_single_graphic_pane_g1

0xa4f1,	// (0x0009763e) ncim_query_button_pane_cp01

0xa4fd,	// (0x0009764a) ncim_query_entry_pane_ParamLimits

0xa4fd,	// (0x0009764a) ncim_query_entry_pane

0xa510,	// (0x0009765d) ncimui_query_pane_g1

0xa51c,	// (0x00097669) ncimui_query_pane_t1_ParamLimits

0xa51c,	// (0x00097669) ncimui_query_pane_t1

0x1093,	// (0x0008e1e0) input_focus_pane_cp012

0x0b37,	// (0x0008dc84) ncim_query_entry_pane_t1

0x1df7,	// (0x0008ef44) main_im_pane_ParamLimits

0x7002,	// (0x0009414f) main_mobtv_pane_ParamLimits

0x7002,	// (0x0009414f) main_mobtv_pane

0xa18f,	// (0x000972dc) main_cset6_slider_pane_g18_ParamLimits

0xa18f,	// (0x000972dc) main_cset6_slider_pane_g18

0xa19b,	// (0x000972e8) main_cset6_slider_pane_g19_ParamLimits

0xa19b,	// (0x000972e8) main_cset6_slider_pane_g19

0x2f75,	// (0x000900c2) bg_main_mobtv_pane_ParamLimits

0x2f75,	// (0x000900c2) bg_main_mobtv_pane

0xa535,	// (0x00097682) main_mobtv_info_pane

0xa540,	// (0x0009768d) main_mobtv_loading_pane_ParamLimits

0xa540,	// (0x0009768d) main_mobtv_loading_pane

0x0b49,	// (0x0008dc96) main_mobtv_pg_channel_list_pane

0x0b53,	// (0x0008dca0) main_mobtv_pg_hdr_pane

0xa54d,	// (0x0009769a) main_mobtv_programe_curr_pane_ParamLimits

0xa54d,	// (0x0009769a) main_mobtv_programe_curr_pane

0xa55a,	// (0x000976a7) main_mobtv_programe_next_pane_ParamLimits

0xa55a,	// (0x000976a7) main_mobtv_programe_next_pane

0x0b5c,	// (0x0008dca9) popup_mobtv_noti_window

0x1d99,	// (0x0008eee6) main_tv_pg_hdr_pane_g1

0x0b66,	// (0x0008dcb3) main_tv_pg_hdr_pane_g2

0x0b6e,	// (0x0008dcbb) main_tv_pg_hdr_pane_g3

0x0b76,	// (0x0008dcc3) main_tv_pg_hdr_pane_g4

0x0b7e,	// (0x0008dccb) main_tv_pg_hdr_pane_g5

0x0b88,	// (0x0008dcd5) main_tv_pg_hdr_pane_g6

0x0b92,	// (0x0008dcdf) main_tv_pg_hdr_pane_g7

0x0b9c,	// (0x0008dce9) main_tv_pg_hdr_pane_g8

0x0ba6,	// (0x0008dcf3) main_tv_pg_hdr_pane_g9

0x0bb0,	// (0x0008dcfd) main_tv_pg_hdr_pane_g10

0x0bba,	// (0x0008dd07) main_tv_pg_hdr_pane_g11

0x000a,

0xfb24,	// (0x0009cc71) main_tv_pg_hdr_pane_g

0x0bc4,	// (0x0008dd11) main_tv_pg_hdr_pane_t1

0x0bd2,	// (0x0008dd1f) main_tv_pg_hdr_pane_t2

0x0be0,	// (0x0008dd2d) main_tv_pg_hdr_pane_t3

0x0bf0,	// (0x0008dd3d) main_tv_pg_hdr_pane_t4

0x0c00,	// (0x0008dd4d) main_tv_pg_hdr_pane_t5

0x0004,

0xfb3b,	// (0x0009cc88) main_tv_pg_hdr_pane_t

0x0c10,	// (0x0008dd5d) single_mobtv_pg_channel_pane_ParamLimits

0x0c10,	// (0x0008dd5d) single_mobtv_pg_channel_pane

0x0c22,	// (0x0008dd6f) single_mobtv_pg_channel_table_pane

0x0c2b,	// (0x0008dd78) single_mobtv_pg_channel_thumb_pane

0x0c34,	// (0x0008dd81) single_tv_pg_channel_pane_g1

0x0c3d,	// (0x0008dd8a) single_tv_pg_channel_pane_g2

0x0001,

0xfb46,	// (0x0009cc93) single_tv_pg_channel_pane_g

0x16d8,	// (0x0008e825) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x16d8,	// (0x0008e825) bg_single_mobtv_pg_channel_thumb_pane

0x0c46,	// (0x0008dd93) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x0c46,	// (0x0008dd93) single_mobtv_pg_channel_thumb_pane_g1

0x0c54,	// (0x0008dda1) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x0c54,	// (0x0008dda1) single_mobtv_pg_channel_thumb_pane_g2

0x0c60,	// (0x0008ddad) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x0c60,	// (0x0008ddad) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb4b,	// (0x0009cc98) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb4b,	// (0x0009cc98) single_mobtv_pg_channel_thumb_pane_g

0x0c6c,	// (0x0008ddb9) single_mobtv_pg_channel_thumb_pane_t1

0x0c7a,	// (0x0008ddc7) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb52,	// (0x0009cc9f) single_mobtv_pg_channel_thumb_pane_t

0x1d99,	// (0x0008eee6) bg_single_mobtv_pg_channel_table_pane_g1

0x1d99,	// (0x0008eee6) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x0009c1fc) bg_single_mobtv_pg_channel_table_pane_g

0x0c88,	// (0x0008ddd5) single_mobtv_pg_channel_table_pane_t1

0x0c96,	// (0x0008dde3) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb57,	// (0x0009cca4) single_mobtv_pg_channel_table_pane_t

0xa56f,	// (0x000976bc) main_mobtv_info_pane_g1_ParamLimits

0xa56f,	// (0x000976bc) main_mobtv_info_pane_g1

0xa58b,	// (0x000976d8) main_mobtv_info_pane_t1_ParamLimits

0xa58b,	// (0x000976d8) main_mobtv_info_pane_t1

0xa603,	// (0x00097750) main_mobtv_info_pane_t2_ParamLimits

0xa603,	// (0x00097750) main_mobtv_info_pane_t2

0x0002,

0xfb61,	// (0x0009ccae) main_mobtv_info_pane_t_ParamLimits

0xfb61,	// (0x0009ccae) main_mobtv_info_pane_t

0xa694,	// (0x000977e1) wait_bar_pane_cp05

0xa6a6,	// (0x000977f3) main_mobtv_loading_pane_g1_ParamLimits

0xa6a6,	// (0x000977f3) main_mobtv_loading_pane_g1

0xa6b2,	// (0x000977ff) main_mobtv_loading_pane_g2_ParamLimits

0xa6b2,	// (0x000977ff) main_mobtv_loading_pane_g2

0xa6be,	// (0x0009780b) main_mobtv_loading_pane_g3_ParamLimits

0xa6be,	// (0x0009780b) main_mobtv_loading_pane_g3

0x0002,

0xfb68,	// (0x0009ccb5) main_mobtv_loading_pane_g_ParamLimits

0xfb68,	// (0x0009ccb5) main_mobtv_loading_pane_g

0x0ca4,	// (0x0008ddf1) main_mobtv_loading_pane_t1_ParamLimits

0x0ca4,	// (0x0008ddf1) main_mobtv_loading_pane_t1

0x0cbc,	// (0x0008de09) main_mobtv_loading_pane_t2_ParamLimits

0x0cbc,	// (0x0008de09) main_mobtv_loading_pane_t2

0x0001,

0xfb6f,	// (0x0009ccbc) main_mobtv_loading_pane_t_ParamLimits

0xfb6f,	// (0x0009ccbc) main_mobtv_loading_pane_t

0xa6cc,	// (0x00097819) wait_bar_pane_cp06_ParamLimits

0xa6cc,	// (0x00097819) wait_bar_pane_cp06

0x0ce0,	// (0x0008de2d) main_mobtv_programe_curr_pane_t1

0x0cee,	// (0x0008de3b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb74,	// (0x0009ccc1) main_mobtv_programe_curr_pane_t

0x0cfc,	// (0x0008de49) main_mobtv_programe_next_pane_t1

0x0d0a,	// (0x0008de57) main_mobtv_programe_next_pane_t2

0x0d18,	// (0x0008de65) main_mobtv_programe_next_pane_t3

0x0002,

0xfb79,	// (0x0009ccc6) main_mobtv_programe_next_pane_t

0x038f,	// (0x0008d4dc) bg_popup_mobtv_noti_window_pane

0x0d26,	// (0x0008de73) popup_mobtv_noti_window_g1

0x0d2e,	// (0x0008de7b) popup_mobtv_noti_window_t1

0x0d3c,	// (0x0008de89) popup_mobtv_noti_window_t2

0x0001,

0xfb80,	// (0x0009cccd) popup_mobtv_noti_window_t

0x1d99,	// (0x0008eee6) bg_popup_mobtv_noti_window_pane_g1

0x4379,	// (0x000914c6) sc_clock_pane

0x4379,	// (0x000914c6) main_fs_bigclock_pane

0x9cf5,	// (0x00096e42) blid2_tripm_pane_t4_ParamLimits

0x9cf5,	// (0x00096e42) blid2_tripm_pane_t4

0x16e6,	// (0x0008e833) sc_clock_pane_g1_ParamLimits

0x16e6,	// (0x0008e833) sc_clock_pane_g1

0x1db7,	// (0x0008ef04) sc_clock_pane_t1_ParamLimits

0x1db7,	// (0x0008ef04) sc_clock_pane_t1

0x1db7,	// (0x0008ef04) sc_clock_pane_t2_ParamLimits

0x1db7,	// (0x0008ef04) sc_clock_pane_t2

0x1db7,	// (0x0008ef04) sc_clock_pane_t3_ParamLimits

0x1db7,	// (0x0008ef04) sc_clock_pane_t3

0x0004,

0xfb85,	// (0x0009ccd2) sc_clock_pane_t_ParamLimits

0xfb85,	// (0x0009ccd2) sc_clock_pane_t

0xb3a7,	// (0x000984f4) main_fs_bigclock_indicator_pane_ParamLimits

0xb3a7,	// (0x000984f4) main_fs_bigclock_indicator_pane

0xa721,	// (0x0009786e) main_fs_bigclock_pane_g1_ParamLimits

0xa721,	// (0x0009786e) main_fs_bigclock_pane_g1

0xb3b3,	// (0x00098500) main_fs_bigclock_pane_t1_ParamLimits

0xb3b3,	// (0x00098500) main_fs_bigclock_pane_t1

0xb3c5,	// (0x00098512) main_fs_bigclock_pane_t2_ParamLimits

0xb3c5,	// (0x00098512) main_fs_bigclock_pane_t2

0xb3d9,	// (0x00098526) main_fs_bigclock_pane_t3_ParamLimits

0xb3d9,	// (0x00098526) main_fs_bigclock_pane_t3

0x0002,

0xfd1b,	// (0x0009ce68) main_fs_bigclock_pane_t_ParamLimits

0xfd1b,	// (0x0009ce68) main_fs_bigclock_pane_t

0x1aac,	// (0x0008ebf9) main_fs_bigclock_indicator_pane_g1

0x0a50,	// (0x0008db9d) ncim_query_content_pane_g2_ParamLimits

0x0a50,	// (0x0008db9d) ncim_query_content_pane_g2

0x0001,

0xfb12,	// (0x0009cc5f) ncim_query_content_pane_g_ParamLimits

0xfb12,	// (0x0009cc5f) ncim_query_content_pane_g

0x1db7,	// (0x0008ef04) sc_clock_pane_t4_ParamLimits

0x1db7,	// (0x0008ef04) sc_clock_pane_t4

0x7002,	// (0x0009414f) main_radioblah_pane

0x88de,	// (0x00095a2b) cell_call4_button_pane_t1_copy1_ParamLimits

0x88de,	// (0x00095a2b) cell_call4_button_pane_t1_copy1

0xa34e,	// (0x0009749b) main_ncimui_pane_t1_ParamLimits

0xa34e,	// (0x0009749b) main_ncimui_pane_t1

0xa368,	// (0x000974b5) main_ncimui_pane_t2_ParamLimits

0xa368,	// (0x000974b5) main_ncimui_pane_t2

0x0002,

0xfb0b,	// (0x0009cc58) main_ncimui_pane_t_ParamLimits

0xfb0b,	// (0x0009cc58) main_ncimui_pane_t

0x2f97,	// (0x000900e4) main_radioblah_anim_pane_ParamLimits

0x2f97,	// (0x000900e4) main_radioblah_anim_pane

0x2f97,	// (0x000900e4) main_radioblah_info_pane_ParamLimits

0x2f97,	// (0x000900e4) main_radioblah_info_pane

0x2f83,	// (0x000900d0) main_radioblah_pane_t1_ParamLimits

0x2f83,	// (0x000900d0) main_radioblah_pane_t1

0x2f83,	// (0x000900d0) main_radioblah_pane_t2_ParamLimits

0x2f83,	// (0x000900d0) main_radioblah_pane_t2

0x0003,

0xfba6,	// (0x0009ccf3) main_radioblah_pane_t_ParamLimits

0xfba6,	// (0x0009ccf3) main_radioblah_pane_t

0x0472,	// (0x0008d5bf) main_radioblah_rocker_ctrl_pane_ParamLimits

0x0472,	// (0x0008d5bf) main_radioblah_rocker_ctrl_pane

0xe949,	// (0x0009ba96) main_radioblah_info_pane_t1_ParamLimits

0xe949,	// (0x0009ba96) main_radioblah_info_pane_t1

0x0d7a,	// (0x0008dec7) main_radioblah_info_pane_t2_ParamLimits

0x0d7a,	// (0x0008dec7) main_radioblah_info_pane_t2

0x0003,

0xfbaf,	// (0x0009ccfc) main_radioblah_info_pane_t_ParamLimits

0xfbaf,	// (0x0009ccfc) main_radioblah_info_pane_t

0x1d99,	// (0x0008eee6) main_radioblah_rocker_ctrl_pane_g1

0x1d99,	// (0x0008eee6) main_radioblah_rocker_ctrl_pane_g2

0x1d99,	// (0x0008eee6) main_radioblah_rocker_ctrl_pane_g3

0x1d99,	// (0x0008eee6) main_radioblah_rocker_ctrl_pane_g4

0x1d99,	// (0x0008eee6) main_radioblah_rocker_ctrl_pane_g5

0x1d99,	// (0x0008eee6) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbb8,	// (0x0009cd05) main_radioblah_rocker_ctrl_pane_g

0xa300,	// (0x0009744d) main_cset_text2_pane_t1_copy1_ParamLimits

0x8957,	// (0x00095aa4) cam4_image_uncrop_qvga_pane

0x8a9c,	// (0x00095be9) vid4_image_uncrop_qcif_pane

0x9e74,	// (0x00096fc1) cam6_image_uncrop_qvga_pane_ParamLimits

0x9e74,	// (0x00096fc1) cam6_image_uncrop_qvga_pane

0x072f,	// (0x0008d87c) vid6_image_uncrop_qcif_pane_ParamLimits

0x072f,	// (0x0008d87c) vid6_image_uncrop_qcif_pane

0x038f,	// (0x0008d4dc) bg_popup_preview_window_pane_cp03

0x0a02,	// (0x0008db4f) list_cset_text2_pane

0x0a0a,	// (0x0008db57) main_cset6_text2_pane_g1

0x0a12,	// (0x0008db5f) main_cset6_text2_pane_t1

0xa8ae,	// (0x000979fb) list_cset_text2_pane_t1_ParamLimits

0xa8ae,	// (0x000979fb) list_cset_text2_pane_t1

0x7002,	// (0x0009414f) main_radioblah_pane_ParamLimits

0xa680,	// (0x000977cd) main_mobtv_info_pane_t3_ParamLimits

0xa680,	// (0x000977cd) main_mobtv_info_pane_t3

0x2f75,	// (0x000900c2) main_radioblah_pane_g1

0x0d4a,	// (0x0008de97) main_radioblah_info_pane_g1

0x1db7,	// (0x0008ef04) main_radioblah_info_pane_t3_ParamLimits

0x1db7,	// (0x0008ef04) main_radioblah_info_pane_t3

0x5f58,	// (0x000930a5) highlight_cell_cale_month_pane_ParamLimits

0x5f58,	// (0x000930a5) highlight_cell_cale_month_pane

0x4379,	// (0x000914c6) main_phob_fisheye_pane

0xe565,	// (0x0009b6b2) scroll_pane_cp0031_ParamLimits

0xe565,	// (0x0009b6b2) scroll_pane_cp0031

0x0841,	// (0x0008d98e) wait_bar_pane_cp08_ParamLimits

0xa08b,	// (0x000971d8) cset_list_set_pane_copy1_ParamLimits

0x0dc9,	// (0x0008df16) highlight_cell_cale_month_pane_g1

0xa8c5,	// (0x00097a12) highlight_cell_cale_month_pane_t1

0xf037,	// (0x0009c184) list_gen_pane_cp01

0xec01,	// (0x0009bd4e) scroll_pane_01

0xa8d3,	// (0x00097a20) list_single_double_fisheye_pane

0xa8dc,	// (0x00097a29) list_double_fisheye_pane_g1_ParamLimits

0xa8dc,	// (0x00097a29) list_double_fisheye_pane_g1

0xa8e8,	// (0x00097a35) list_double_fisheye_pane_g2_ParamLimits

0xa8e8,	// (0x00097a35) list_double_fisheye_pane_g2

0xa8fc,	// (0x00097a49) list_double_fisheye_pane_g3_ParamLimits

0xa8fc,	// (0x00097a49) list_double_fisheye_pane_g3

0x0004,

0xfbc5,	// (0x0009cd12) list_double_fisheye_pane_g_ParamLimits

0xfbc5,	// (0x0009cd12) list_double_fisheye_pane_g

0xa925,	// (0x00097a72) list_double_fisheye_pane_t1_ParamLimits

0xa925,	// (0x00097a72) list_double_fisheye_pane_t1

0xa940,	// (0x00097a8d) list_double_fisheye_pane_t2_ParamLimits

0xa940,	// (0x00097a8d) list_double_fisheye_pane_t2

0x0001,

0xfbd0,	// (0x0009cd1d) list_double_fisheye_pane_t_ParamLimits

0xfbd0,	// (0x0009cd1d) list_double_fisheye_pane_t

0x4379,	// (0x000914c6) main_call5_pane

0x0472,	// (0x0008d5bf) sc_swipe_pane_ParamLimits

0x0472,	// (0x0008d5bf) sc_swipe_pane

0xa96e,	// (0x00097abb) call5_image_pane_ParamLimits

0xa96e,	// (0x00097abb) call5_image_pane

0xa980,	// (0x00097acd) call5_swipe_1_pane_ParamLimits

0xa980,	// (0x00097acd) call5_swipe_1_pane

0xa98c,	// (0x00097ad9) call5_swipe_2_pane_ParamLimits

0xa98c,	// (0x00097ad9) call5_swipe_2_pane

0xa9a6,	// (0x00097af3) popup_call5_audio_first_window_ParamLimits

0xa9a6,	// (0x00097af3) popup_call5_audio_first_window

0x16d8,	// (0x0008e825) call5_swipe_1_pane_g1_ParamLimits

0x16d8,	// (0x0008e825) call5_swipe_1_pane_g1

0x0dd1,	// (0x0008df1e) call5_swipe_1_pane_g2_ParamLimits

0x0dd1,	// (0x0008df1e) call5_swipe_1_pane_g2

0x0001,

0xfbd5,	// (0x0009cd22) call5_swipe_1_pane_g_ParamLimits

0xfbd5,	// (0x0009cd22) call5_swipe_1_pane_g

0x0ddd,	// (0x0008df2a) call5_swipe_1_pane_t1_ParamLimits

0x0ddd,	// (0x0008df2a) call5_swipe_1_pane_t1

0x16d8,	// (0x0008e825) call5_swipe_2_pane_g1_ParamLimits

0x16d8,	// (0x0008e825) call5_swipe_2_pane_g1

0x0df2,	// (0x0008df3f) call5_swipe_2_pane_g2_ParamLimits

0x0df2,	// (0x0008df3f) call5_swipe_2_pane_g2

0x0001,

0xfbda,	// (0x0009cd27) call5_swipe_2_pane_g_ParamLimits

0xfbda,	// (0x0009cd27) call5_swipe_2_pane_g

0x0dfe,	// (0x0008df4b) call5_swipe_2_pane_t1_ParamLimits

0x0dfe,	// (0x0008df4b) call5_swipe_2_pane_t1

0x16d8,	// (0x0008e825) sc_swipe_pane_g1_ParamLimits

0x16d8,	// (0x0008e825) sc_swipe_pane_g1

0x16e6,	// (0x0008e833) sc_swipe_pane_g2_ParamLimits

0x16e6,	// (0x0008e833) sc_swipe_pane_g2

0x0001,

0xfbdf,	// (0x0009cd2c) sc_swipe_pane_g_ParamLimits

0xfbdf,	// (0x0009cd2c) sc_swipe_pane_g

0x1da3,	// (0x0008eef0) sc_swipe_pane_t1_ParamLimits

0x1da3,	// (0x0008eef0) sc_swipe_pane_t1

0x4379,	// (0x000914c6) main_cmail_launcher_pane

0xa9b6,	// (0x00097b03) aid_size_cell_cmail_l_ParamLimits

0xa9b6,	// (0x00097b03) aid_size_cell_cmail_l

0xa9c4,	// (0x00097b11) grid_cmail_l_pane_ParamLimits

0xa9c4,	// (0x00097b11) grid_cmail_l_pane

0xa9d2,	// (0x00097b1f) cell_cmail_l_pane_ParamLimits

0xa9d2,	// (0x00097b1f) cell_cmail_l_pane

0xa9ed,	// (0x00097b3a) cell_cmail_l_pane_g1_ParamLimits

0xa9ed,	// (0x00097b3a) cell_cmail_l_pane_g1

0xa9f9,	// (0x00097b46) cell_cmail_l_pane_t1_ParamLimits

0xa9f9,	// (0x00097b46) cell_cmail_l_pane_t1

0xaa0f,	// (0x00097b5c) cell_cmail_l_pane_t2_ParamLimits

0xaa0f,	// (0x00097b5c) cell_cmail_l_pane_t2

0x0001,

0xfbe4,	// (0x0009cd31) cell_cmail_l_pane_t_ParamLimits

0xfbe4,	// (0x0009cd31) cell_cmail_l_pane_t

0x1093,	// (0x0008e1e0) grid_highlight_pane_cp018_ParamLimits

0x1093,	// (0x0008e1e0) grid_highlight_pane_cp018

0x41d0,	// (0x0009131d) main2_pane_ParamLimits

0x41d0,	// (0x0009131d) main2_pane

0x1e86,	// (0x0008efd3) popup_sp_fs_action_menu_bg_pane_g1

0x1e8e,	// (0x0008efdb) popup_sp_fs_action_menu_bg_pane_g2

0x1e96,	// (0x0008efe3) popup_sp_fs_action_menu_bg_pane_g3

0x1e9e,	// (0x0008efeb) popup_sp_fs_action_menu_bg_pane_g4

0x1ea6,	// (0x0008eff3) popup_sp_fs_action_menu_bg_pane_g5

0x1eae,	// (0x0008effb) popup_sp_fs_action_menu_bg_pane_g6

0x1eb6,	// (0x0008f003) popup_sp_fs_action_menu_bg_pane_g7

0x1ebe,	// (0x0008f00b) popup_sp_fs_action_menu_bg_pane_g8

0x1ec6,	// (0x0008f013) popup_sp_fs_action_menu_bg_pane_g9

0x1ece,	// (0x0008f01b) popup_sp_fs_action_menu_bg_pane_g10

0x1ece,	// (0x0008f01b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x0009c24d) popup_sp_fs_action_menu_bg_pane_g

0x16d8,	// (0x0008e825) list_medium_line_x2_t3_g3_g1_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x2_t3_g3_g1

0x16d8,	// (0x0008e825) list_medium_line_x2_t3_g3_g2_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x2_t3_g3_g2

0x16d8,	// (0x0008e825) list_medium_line_x2_t3_g3_g3_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x0009c2fb) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x0009c2fb) list_medium_line_x2_t3_g3_g

0x1da3,	// (0x0008eef0) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_x2_t3_g3_t1

0x1da3,	// (0x0008eef0) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_x2_t3_g3_t2

0x1da3,	// (0x0008eef0) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x0009c302) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x0009c302) list_medium_line_x2_t3_g3_t

0x16d8,	// (0x0008e825) list_medium_line_x2_t3_g2_g1_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x2_t3_g2_g1

0x16d8,	// (0x0008e825) list_medium_line_x2_t3_g2_g2_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1bc,	// (0x0009c309) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1bc,	// (0x0009c309) list_medium_line_x2_t3_g2_g

0x1da3,	// (0x0008eef0) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_x2_t3_g2_t1

0x1da3,	// (0x0008eef0) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_x2_t3_g2_t2

0x1da3,	// (0x0008eef0) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x0009c302) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x0009c302) list_medium_line_x2_t3_g2_t

0x16d8,	// (0x0008e825) list_medium_line_x2_t4_g4_g1_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x2_t4_g4_g1

0x16d8,	// (0x0008e825) list_medium_line_x2_t4_g4_g2_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x2_t4_g4_g2

0x16d8,	// (0x0008e825) list_medium_line_x2_t4_g4_g3_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x2_t4_g4_g3

0x16d8,	// (0x0008e825) list_medium_line_x2_t4_g4_g4_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c1,	// (0x0009c30e) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c1,	// (0x0009c30e) list_medium_line_x2_t4_g4_g

0x1da3,	// (0x0008eef0) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_x2_t4_g4_t1

0x1da3,	// (0x0008eef0) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_x2_t4_g4_t2

0x1da3,	// (0x0008eef0) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_x2_t4_g4_t3

0x1da3,	// (0x0008eef0) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1ca,	// (0x0009c317) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1ca,	// (0x0009c317) list_medium_line_x2_t4_g4_t

0x16d8,	// (0x0008e825) list_medium_line_x2_t2_g4_g1_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x2_t2_g4_g1

0x16d8,	// (0x0008e825) list_medium_line_x2_t2_g4_g2_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x2_t2_g4_g2

0x16d8,	// (0x0008e825) list_medium_line_x2_t2_g4_g3_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x2_t2_g4_g3

0x16d8,	// (0x0008e825) list_medium_line_x2_t2_g4_g4_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c1,	// (0x0009c30e) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c1,	// (0x0009c30e) list_medium_line_x2_t2_g4_g

0x1da3,	// (0x0008eef0) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_x2_t2_g4_t1

0x1da3,	// (0x0008eef0) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_x2_t2_g4_t2

0x0001,

0xf231,	// (0x0009c37e) list_medium_line_x2_t2_g4_t_ParamLimits

0xf231,	// (0x0009c37e) list_medium_line_x2_t2_g4_t

0x16d8,	// (0x0008e825) list_medium_line_x2_t2_g3_g1_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x2_t2_g3_g1

0x16d8,	// (0x0008e825) list_medium_line_x2_t2_g3_g2_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x2_t2_g3_g2

0x16d8,	// (0x0008e825) list_medium_line_x2_t2_g3_g3_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x0009c2fb) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x0009c2fb) list_medium_line_x2_t2_g3_g

0x1da3,	// (0x0008eef0) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_x2_t2_g3_t1

0x1da3,	// (0x0008eef0) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_x2_t2_g3_t2

0x0001,

0xf231,	// (0x0009c37e) list_medium_line_x2_t2_g3_t_ParamLimits

0xf231,	// (0x0009c37e) list_medium_line_x2_t2_g3_t

0x60ea,	// (0x00093237) main_sp_fs_list_pane_ParamLimits

0x60ea,	// (0x00093237) main_sp_fs_list_pane

0x60f6,	// (0x00093243) sp_fs_scroll_pane_ParamLimits

0x60f6,	// (0x00093243) sp_fs_scroll_pane

0x2af5,	// (0x0008fc42) list_medium_line_x2_t3_t1

0x2af5,	// (0x0008fc42) list_medium_line_x2_t3_t2

0x2af5,	// (0x0008fc42) list_medium_line_x2_t3_t3

0x0002,

0xf27c,	// (0x0009c3c9) list_medium_line_x2_t3_t

0x2af5,	// (0x0008fc42) list_medium_line_x3_t4_t1

0x2af5,	// (0x0008fc42) list_medium_line_x3_t4_t2

0x2af5,	// (0x0008fc42) list_medium_line_x3_t4_t3

0x2af5,	// (0x0008fc42) list_medium_line_x3_t4_t4

0x0003,

0xf283,	// (0x0009c3d0) list_medium_line_x3_t4_t

0x2af5,	// (0x0008fc42) list_medium_line_x4_t5_t1

0x2af5,	// (0x0008fc42) list_medium_line_x4_t5_t2

0x2af5,	// (0x0008fc42) list_medium_line_x4_t5_t3

0x2af5,	// (0x0008fc42) list_medium_line_x4_t5_t4

0x2af5,	// (0x0008fc42) list_medium_line_x4_t5_t5

0x0004,

0xf28c,	// (0x0009c3d9) list_medium_line_x4_t5_t

0x16d8,	// (0x0008e825) list_medium_line_t4_g4_g1_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_t4_g4_g1

0x16d8,	// (0x0008e825) list_medium_line_t4_g4_g2_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_t4_g4_g2

0x16d8,	// (0x0008e825) list_medium_line_t4_g4_g3_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_t4_g4_g3

0x16d8,	// (0x0008e825) list_medium_line_t4_g4_g4_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_t4_g4_g4

0x0003,

0xf1c1,	// (0x0009c30e) list_medium_line_t4_g4_g_ParamLimits

0xf1c1,	// (0x0009c30e) list_medium_line_t4_g4_g

0x1da3,	// (0x0008eef0) list_medium_line_t4_g4_t1_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_t4_g4_t1

0x1da3,	// (0x0008eef0) list_medium_line_t4_g4_t2_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_t4_g4_t2

0x1da3,	// (0x0008eef0) list_medium_line_t4_g4_t3_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_t4_g4_t3

0x1da3,	// (0x0008eef0) list_medium_line_t4_g4_t4_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_t4_g4_t4

0x0003,

0xf1ca,	// (0x0009c317) list_medium_line_t4_g4_t_ParamLimits

0xf1ca,	// (0x0009c317) list_medium_line_t4_g4_t

0x61ef,	// (0x0009333c) chi_dic_find_pane_g1

0x701e,	// (0x0009416b) main_tport_pane

0x2af5,	// (0x0008fc42) list_medium_line_plain_t1

0x16d8,	// (0x0008e825) list_medium_line_t2_g2_g1_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_t2_g2_g1

0x16d8,	// (0x0008e825) list_medium_line_t2_g2_g2_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_t2_g2_g2

0x0001,

0xf1bc,	// (0x0009c309) list_medium_line_t2_g2_g_ParamLimits

0xf1bc,	// (0x0009c309) list_medium_line_t2_g2_g

0x1da3,	// (0x0008eef0) list_medium_line_t2_g2_t1_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_t2_g2_t1

0x1da3,	// (0x0008eef0) list_medium_line_t2_g2_t2_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_t2_g2_t2

0x0001,

0xf231,	// (0x0009c37e) list_medium_line_t2_g2_t_ParamLimits

0xf231,	// (0x0009c37e) list_medium_line_t2_g2_t

0x0057,	// (0x0008d1a4) aid_sp_fs_list_icon_a_sm

0x005f,	// (0x0008d1ac) aid_sp_fs_list_icon_d

0x0498,	// (0x0008d5e5) aid_sp_fs_text_primary

0x0067,	// (0x0008d1b4) aid_sp_fs_text_secondary

0x038f,	// (0x0008d4dc) list_medium_line

0x038f,	// (0x0008d4dc) list_medium_line_g2

0x038f,	// (0x0008d4dc) list_medium_line_g3

0x038f,	// (0x0008d4dc) list_medium_line_plain

0x038f,	// (0x0008d4dc) list_medium_line_plain_t2

0x038f,	// (0x0008d4dc) list_medium_line_plain_t3

0x038f,	// (0x0008d4dc) list_medium_line_right_icon

0x038f,	// (0x0008d4dc) list_medium_line_right_iconx2

0x038f,	// (0x0008d4dc) list_medium_line_t2

0x038f,	// (0x0008d4dc) list_medium_line_t2_g2

0x038f,	// (0x0008d4dc) list_medium_line_t2_g3

0x038f,	// (0x0008d4dc) list_medium_line_t2_right_icon

0x038f,	// (0x0008d4dc) list_medium_line_t2_right_iconx2

0x038f,	// (0x0008d4dc) list_medium_line_t3

0x038f,	// (0x0008d4dc) list_medium_line_t3_g2

0x038f,	// (0x0008d4dc) list_medium_line_t3_g3

0x038f,	// (0x0008d4dc) list_medium_line_t3_right_iconx2

0x038f,	// (0x0008d4dc) list_medium_line_t4_g4

0x038f,	// (0x0008d4dc) list_medium_line_x2

0x038f,	// (0x0008d4dc) list_medium_line_x2_t2_g2

0x038f,	// (0x0008d4dc) list_medium_line_x2_t2_g3

0x038f,	// (0x0008d4dc) list_medium_line_x2_t2_g4

0x038f,	// (0x0008d4dc) list_medium_line_x2_t3

0x038f,	// (0x0008d4dc) list_medium_line_x2_t3_g2

0x038f,	// (0x0008d4dc) list_medium_line_x2_t3_g3

0x038f,	// (0x0008d4dc) list_medium_line_x2_t3_g4

0x038f,	// (0x0008d4dc) list_medium_line_x2_t4_g2

0x038f,	// (0x0008d4dc) list_medium_line_x2_t4_g4

0x038f,	// (0x0008d4dc) list_medium_line_x3

0x038f,	// (0x0008d4dc) list_medium_line_x3_t4

0x038f,	// (0x0008d4dc) list_medium_line_x3_t4_g4

0x038f,	// (0x0008d4dc) list_medium_line_x4_t4

0x038f,	// (0x0008d4dc) list_medium_line_x4_t4_g7

0x038f,	// (0x0008d4dc) list_medium_line_x4_t5

0x9b80,	// (0x00096ccd) list_single_fs_dyc_pane_ParamLimits

0x9b80,	// (0x00096ccd) list_single_fs_dyc_pane

0x16d8,	// (0x0008e825) list_medium_line_x4_t4_g7_g1_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x4_t4_g7_g1

0x16d8,	// (0x0008e825) list_medium_line_x4_t4_g7_g2_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x4_t4_g7_g2

0x16d8,	// (0x0008e825) list_medium_line_x4_t4_g7_g3_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x4_t4_g7_g3

0x16d8,	// (0x0008e825) list_medium_line_x4_t4_g7_g4_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x4_t4_g7_g4

0x16d8,	// (0x0008e825) list_medium_line_x4_t4_g7_g5_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x4_t4_g7_g5

0x16d8,	// (0x0008e825) list_medium_line_x4_t4_g7_g6_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x4_t4_g7_g6

0x16e6,	// (0x0008e833) list_medium_line_x4_t4_g7_g7_ParamLimits

0x16e6,	// (0x0008e833) list_medium_line_x4_t4_g7_g7

0x0006,

0xfaec,	// (0x0009cc39) list_medium_line_x4_t4_g7_g_ParamLimits

0xfaec,	// (0x0009cc39) list_medium_line_x4_t4_g7_g

0x1da3,	// (0x0008eef0) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_x4_t4_g7_t1

0x1da3,	// (0x0008eef0) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_x4_t4_g7_t2

0x1da3,	// (0x0008eef0) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_x4_t4_g7_t3

0x1db7,	// (0x0008ef04) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1db7,	// (0x0008ef04) list_medium_line_x4_t4_g7_t4

0x1db7,	// (0x0008ef04) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1db7,	// (0x0008ef04) list_medium_line_x4_t4_g7_t5

0x0004,

0xfafb,	// (0x0009cc48) list_medium_line_x4_t4_g7_t_ParamLimits

0xfafb,	// (0x0009cc48) list_medium_line_x4_t4_g7_t

0xa2e3,	// (0x00097430) list_single_dyc_row_pane_ParamLimits

0xa2e3,	// (0x00097430) list_single_dyc_row_pane

0xa962,	// (0x00097aaf) call5_gesture_pane_ParamLimits

0xa962,	// (0x00097aaf) call5_gesture_pane

0xa998,	// (0x00097ae5) call5_windows_pane_ParamLimits

0xa998,	// (0x00097ae5) call5_windows_pane

0xaa2c,	// (0x00097b79) call5_swipe_1_pane_cp_ParamLimits

0xaa2c,	// (0x00097b79) call5_swipe_1_pane_cp

0xaa38,	// (0x00097b85) call5_swipe_2_pane_cp_ParamLimits

0xaa38,	// (0x00097b85) call5_swipe_2_pane_cp

0x1f95,	// (0x0008f0e2) call5_image_pane_cp

0xaa44,	// (0x00097b91) popup_call5_audio_first_window_cp_ParamLimits

0xaa44,	// (0x00097b91) popup_call5_audio_first_window_cp

0x0e13,	// (0x0008df60) call5_swipe_1_pane_g1_cp_ParamLimits

0x0e13,	// (0x0008df60) call5_swipe_1_pane_g1_cp

0x0e20,	// (0x0008df6d) call5_swipe_1_pane_g2_cp

0x0e28,	// (0x0008df75) call5_swipe_1_pane_t1_cp_ParamLimits

0x0e28,	// (0x0008df75) call5_swipe_1_pane_t1_cp

0x0e13,	// (0x0008df60) call5_swipe_2_pane_g1_cp_ParamLimits

0x0e13,	// (0x0008df60) call5_swipe_2_pane_g1_cp

0x0e3d,	// (0x0008df8a) call5_swipe_2_pane_g2_cp

0x0e45,	// (0x0008df92) call5_swipe_2_pane_t1_cp_ParamLimits

0x0e45,	// (0x0008df92) call5_swipe_2_pane_t1_cp

0x1093,	// (0x0008e1e0) main_sp_fs_email_pane

0xecf9,	// (0x0009be46) main_sp_fs_listscroll_pane_te

0xaa52,	// (0x00097b9f) popup_sp_fs_action_menu_pane_ParamLimits

0xaa52,	// (0x00097b9f) popup_sp_fs_action_menu_pane

0x1d99,	// (0x0008eee6) bg_sp_fs_ctrlbar_pane_g1

0x0e5a,	// (0x0008dfa7) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x0e63,	// (0x0008dfb0) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x0e6c,	// (0x0008dfb9) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x1d99,	// (0x0008eee6) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbe9,	// (0x0009cd36) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xce48,	// (0x00099f95) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xce48,	// (0x00099f95) bg_sp_fs_ctrlbar_ddmenu_pane

0x0e75,	// (0x0008dfc2) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x0e75,	// (0x0008dfc2) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x0e81,	// (0x0008dfce) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x0e81,	// (0x0008dfce) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbf2,	// (0x0009cd3f) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbf2,	// (0x0009cd3f) main_sp_fs_ctrlbar_ddmenu_pane_g

0x0e8d,	// (0x0008dfda) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x0e8d,	// (0x0008dfda) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x1d99,	// (0x0008eee6) list_medium_line_t2_right_icon_g1

0x2af5,	// (0x0008fc42) list_medium_line_t2_right_icon_t1

0x2af5,	// (0x0008fc42) list_medium_line_t2_right_icon_t2

0x0001,

0xfbf7,	// (0x0009cd44) list_medium_line_t2_right_icon_t

0x2f97,	// (0x000900e4) bg_sp_fs_ctrlbar_pane_ParamLimits

0x2f97,	// (0x000900e4) bg_sp_fs_ctrlbar_pane

0xaaf1,	// (0x00097c3e) main_sp_fs_ctrlbar_button_pane_cp01

0xaaf9,	// (0x00097c46) main_sp_fs_ctrlbar_ddmenu_pane

0x0ee1,	// (0x0008e02e) main_sp_fs_ctrlbar_pane_g1

0x0eed,	// (0x0008e03a) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbfc,	// (0x0009cd49) main_sp_fs_ctrlbar_pane_g

0xab37,	// (0x00097c84) main_sp_fs_ctrlbar_pane_t1

0xab74,	// (0x00097cc1) main_sp_fs_ctrlbar_pane

0xab8e,	// (0x00097cdb) main_sp_fs_listscroll_pane_te_cp01

0xaba9,	// (0x00097cf6) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xaba9,	// (0x00097cf6) popup_sp_fs_action_menu_pane_cp01

0x1093,	// (0x0008e1e0) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x1093,	// (0x0008e1e0) bg_sp_fs_highlight_list_pane_cp01

0x007e,	// (0x0008d1cb) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x007e,	// (0x0008d1cb) sp_fs_action_menu_list_gene_pane_g1

0x0f14,	// (0x0008e061) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x0f14,	// (0x0008e061) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc0a,	// (0x0009cd57) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc0a,	// (0x0009cd57) sp_fs_action_menu_list_gene_pane_g

0x008d,	// (0x0008d1da) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x008d,	// (0x0008d1da) sp_fs_action_menu_list_gene_pane_t1

0x00a5,	// (0x0008d1f2) sp_fs_action_menu_list_gene_pane_ParamLimits

0x00a5,	// (0x0008d1f2) sp_fs_action_menu_list_gene_pane

0x0f21,	// (0x0008e06e) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x0f21,	// (0x0008e06e) popup_sp_fs_action_menu_bg_pane

0x00c8,	// (0x0008d215) sp_fs_action_menu_list_pane_ParamLimits

0x00c8,	// (0x0008d215) sp_fs_action_menu_list_pane

0xabc9,	// (0x00097d16) sp_fs_scroll_pane_cp01_ParamLimits

0xabc9,	// (0x00097d16) sp_fs_scroll_pane_cp01

0x2af5,	// (0x0008fc42) list_medium_line_plain_t2_t1

0x2af5,	// (0x0008fc42) list_medium_line_plain_t2_t2

0x0001,

0xfbf7,	// (0x0009cd44) list_medium_line_plain_t2_t

0x2af5,	// (0x0008fc42) list_medium_line_plain_t3_t1

0x2af5,	// (0x0008fc42) list_medium_line_plain_t3_t2

0x2af5,	// (0x0008fc42) list_medium_line_plain_t3_t3

0x0002,

0xf27c,	// (0x0009c3c9) list_medium_line_plain_t3_t

0x16d8,	// (0x0008e825) list_medium_line_x2_t2_g2_g1_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x2_t2_g2_g1

0x16d8,	// (0x0008e825) list_medium_line_x2_t2_g2_g2_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1bc,	// (0x0009c309) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1bc,	// (0x0009c309) list_medium_line_x2_t2_g2_g

0x1da3,	// (0x0008eef0) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_x2_t2_g2_t1

0x1da3,	// (0x0008eef0) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_x2_t2_g2_t2

0x0001,

0xf231,	// (0x0009c37e) list_medium_line_x2_t2_g2_t_ParamLimits

0xf231,	// (0x0009c37e) list_medium_line_x2_t2_g2_t

0x16d8,	// (0x0008e825) list_medium_line_x2_t4_g2_g1_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x2_t4_g2_g1

0x16d8,	// (0x0008e825) list_medium_line_x2_t4_g2_g2_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1bc,	// (0x0009c309) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1bc,	// (0x0009c309) list_medium_line_x2_t4_g2_g

0x1da3,	// (0x0008eef0) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_x2_t4_g2_t1

0x1da3,	// (0x0008eef0) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_x2_t4_g2_t2

0x1da3,	// (0x0008eef0) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_x2_t4_g2_t3

0x1da3,	// (0x0008eef0) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1ca,	// (0x0009c317) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1ca,	// (0x0009c317) list_medium_line_x2_t4_g2_t

0x1d99,	// (0x0008eee6) list_medium_line_t3_right_iconx2_g1

0x1d99,	// (0x0008eee6) list_medium_line_t3_right_iconx2_g2

0x1d99,	// (0x0008eee6) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf398,	// (0x0009c4e5) list_medium_line_t3_right_iconx2_g

0x2af5,	// (0x0008fc42) list_medium_line_t3_right_iconx2_t1

0x2af5,	// (0x0008fc42) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbf7,	// (0x0009cd44) list_medium_line_t3_right_iconx2_t

0x16d8,	// (0x0008e825) list_medium_line_x3_t4_g4_g1_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x3_t4_g4_g1

0x16d8,	// (0x0008e825) list_medium_line_x3_t4_g4_g2_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x3_t4_g4_g2

0x16d8,	// (0x0008e825) list_medium_line_x3_t4_g4_g3_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x3_t4_g4_g3

0x16d8,	// (0x0008e825) list_medium_line_x3_t4_g4_g4_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c1,	// (0x0009c30e) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c1,	// (0x0009c30e) list_medium_line_x3_t4_g4_g

0x1da3,	// (0x0008eef0) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_x3_t4_g4_t1

0x1da3,	// (0x0008eef0) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_x3_t4_g4_t2

0x1da3,	// (0x0008eef0) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_x3_t4_g4_t3

0x1da3,	// (0x0008eef0) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1ca,	// (0x0009c317) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1ca,	// (0x0009c317) list_medium_line_x3_t4_g4_t

0xabef,	// (0x00097d3c) list_single_dyc_row_text_pane_t1_ParamLimits

0xabef,	// (0x00097d3c) list_single_dyc_row_text_pane_t1

0xac32,	// (0x00097d7f) list_single_dyc_row_text_pane_t2_ParamLimits

0xac32,	// (0x00097d7f) list_single_dyc_row_text_pane_t2

0x00ec,	// (0x0008d239) list_single_dyc_row_text_pane_t3_ParamLimits

0x00ec,	// (0x0008d239) list_single_dyc_row_text_pane_t3

0x0005,

0xfc0f,	// (0x0009cd5c) list_single_dyc_row_text_pane_t_ParamLimits

0xfc0f,	// (0x0009cd5c) list_single_dyc_row_text_pane_t

0x0110,	// (0x0008d25d) list_single_dyc_row_pane_g1_ParamLimits

0x0110,	// (0x0008d25d) list_single_dyc_row_pane_g1

0x011c,	// (0x0008d269) list_single_dyc_row_pane_g2_ParamLimits

0x011c,	// (0x0008d269) list_single_dyc_row_pane_g2

0x0128,	// (0x0008d275) list_single_dyc_row_pane_g3_ParamLimits

0x0128,	// (0x0008d275) list_single_dyc_row_pane_g3

0x0134,	// (0x0008d281) list_single_dyc_row_pane_g4_ParamLimits

0x0134,	// (0x0008d281) list_single_dyc_row_pane_g4

0x0003,

0xfc1c,	// (0x0009cd69) list_single_dyc_row_pane_g_ParamLimits

0xfc1c,	// (0x0009cd69) list_single_dyc_row_pane_g

0x0140,	// (0x0008d28d) list_single_dyc_row_text_pane_ParamLimits

0x0140,	// (0x0008d28d) list_single_dyc_row_text_pane

0x038f,	// (0x0008d4dc) bg_sp_fs_scroll_pane

0x0f2f,	// (0x0008e07c) thumb_sp_fs_scroll_pane

0x16d8,	// (0x0008e825) list_medium_line_g1_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_g1

0x1da3,	// (0x0008eef0) list_medium_line_t1_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_t1

0x16d8,	// (0x0008e825) list_medium_line_x2_g1_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x2_g1

0x16d8,	// (0x0008e825) list_medium_line_x2_g2_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x2_g2

0x0001,

0xf1bc,	// (0x0009c309) list_medium_line_x2_g_ParamLimits

0xf1bc,	// (0x0009c309) list_medium_line_x2_g

0x1da3,	// (0x0008eef0) list_medium_line_x2_t1_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_x2_t1

0x16d8,	// (0x0008e825) list_medium_line_x3_g1_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x3_g1

0x0f38,	// (0x0008e085) list_medium_line_x3_g2_ParamLimits

0x0f38,	// (0x0008e085) list_medium_line_x3_g2

0x0001,

0xfc25,	// (0x0009cd72) list_medium_line_x3_g_ParamLimits

0xfc25,	// (0x0009cd72) list_medium_line_x3_g

0x0f46,	// (0x0008e093) list_medium_line_x3_t1_ParamLimits

0x0f46,	// (0x0008e093) list_medium_line_x3_t1

0x0f5a,	// (0x0008e0a7) thumb_sp_fs_scroll_pane_g1

0x0f63,	// (0x0008e0b0) thumb_sp_fs_scroll_pane_g2

0x0f6c,	// (0x0008e0b9) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc2a,	// (0x0009cd77) thumb_sp_fs_scroll_pane_g

0x0f5a,	// (0x0008e0a7) bg_sp_fs_scroll_pane_g1

0x0f63,	// (0x0008e0b0) bg_sp_fs_scroll_pane_g2

0x0f6c,	// (0x0008e0b9) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc2a,	// (0x0009cd77) bg_sp_fs_scroll_pane_g

0x16d8,	// (0x0008e825) list_medium_line_x2_t3_g4_g1_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x2_t3_g4_g1

0x16d8,	// (0x0008e825) list_medium_line_x2_t3_g4_g2_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x2_t3_g4_g2

0x16d8,	// (0x0008e825) list_medium_line_x2_t3_g4_g3_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x2_t3_g4_g3

0x16d8,	// (0x0008e825) list_medium_line_x2_t3_g4_g4_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c1,	// (0x0009c30e) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c1,	// (0x0009c30e) list_medium_line_x2_t3_g4_g

0x1da3,	// (0x0008eef0) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_x2_t3_g4_t1

0x1da3,	// (0x0008eef0) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_x2_t3_g4_t2

0x1da3,	// (0x0008eef0) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x0009c302) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x0009c302) list_medium_line_x2_t3_g4_t

0x16d8,	// (0x0008e825) list_medium_line_g2_g1_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_g2_g1

0x16d8,	// (0x0008e825) list_medium_line_g2_g2_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_g2_g2

0x0001,

0xf1bc,	// (0x0009c309) list_medium_line_g2_g_ParamLimits

0xf1bc,	// (0x0009c309) list_medium_line_g2_g

0x1da3,	// (0x0008eef0) list_medium_line_g2_t1_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_g2_t1

0x16d8,	// (0x0008e825) list_medium_line_t3_g2_g1_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_t3_g2_g1

0x16d8,	// (0x0008e825) list_medium_line_t3_g2_g2_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_t3_g2_g2

0x0001,

0xf1bc,	// (0x0009c309) list_medium_line_t3_g2_g_ParamLimits

0xf1bc,	// (0x0009c309) list_medium_line_t3_g2_g

0x1da3,	// (0x0008eef0) list_medium_line_t3_g2_t1_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_t3_g2_t1

0x1da3,	// (0x0008eef0) list_medium_line_t3_g2_t2_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_t3_g2_t2

0x1da3,	// (0x0008eef0) list_medium_line_t3_g2_t3_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x0009c302) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x0009c302) list_medium_line_t3_g2_t

0x1d99,	// (0x0008eee6) list_medium_line_right_icon_g1

0x2af5,	// (0x0008fc42) list_medium_line_right_icon_t1

0x16d8,	// (0x0008e825) list_medium_line_t2_g1_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_t2_g1

0x1da3,	// (0x0008eef0) list_medium_line_t2_t1_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_t2_t1

0x1da3,	// (0x0008eef0) list_medium_line_t2_t2_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_t2_t2

0x0001,

0xf231,	// (0x0009c37e) list_medium_line_t2_t_ParamLimits

0xf231,	// (0x0009c37e) list_medium_line_t2_t

0x16d8,	// (0x0008e825) list_medium_line_t3_g1_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_t3_g1

0x1da3,	// (0x0008eef0) list_medium_line_t3_t1_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_t3_t1

0x1da3,	// (0x0008eef0) list_medium_line_t3_t2_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_t3_t2

0x1da3,	// (0x0008eef0) list_medium_line_t3_t3_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x0009c302) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x0009c302) list_medium_line_t3_t

0x16d8,	// (0x0008e825) list_medium_line_g3_g1_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_g3_g1

0x16d8,	// (0x0008e825) list_medium_line_g3_g2_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_g3_g2

0x16d8,	// (0x0008e825) list_medium_line_g3_g3_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x0009c2fb) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x0009c2fb) list_medium_line_g3_g

0x1da3,	// (0x0008eef0) list_medium_line_g3_t1_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_g3_t1

0x16d8,	// (0x0008e825) list_medium_line_t2_g3_g1_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_t2_g3_g1

0x16d8,	// (0x0008e825) list_medium_line_t2_g3_g2_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_t2_g3_g2

0x16d8,	// (0x0008e825) list_medium_line_t2_g3_g3_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x0009c2fb) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x0009c2fb) list_medium_line_t2_g3_g

0x1da3,	// (0x0008eef0) list_medium_line_t2_g3_t1_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_t2_g3_t1

0x1da3,	// (0x0008eef0) list_medium_line_t2_g3_t2_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_t2_g3_t2

0x0001,

0xf231,	// (0x0009c37e) list_medium_line_t2_g3_t_ParamLimits

0xf231,	// (0x0009c37e) list_medium_line_t2_g3_t

0x16d8,	// (0x0008e825) list_medium_line_t3_g3_g1_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_t3_g3_g1

0x16d8,	// (0x0008e825) list_medium_line_t3_g3_g2_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_t3_g3_g2

0x16d8,	// (0x0008e825) list_medium_line_t3_g3_g3_ParamLimits

0x16d8,	// (0x0008e825) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x0009c2fb) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x0009c2fb) list_medium_line_t3_g3_g

0x1da3,	// (0x0008eef0) list_medium_line_t3_g3_t1_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_t3_g3_t1

0x1da3,	// (0x0008eef0) list_medium_line_t3_g3_t2_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_t3_g3_t2

0x1da3,	// (0x0008eef0) list_medium_line_t3_g3_t3_ParamLimits

0x1da3,	// (0x0008eef0) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x0009c302) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x0009c302) list_medium_line_t3_g3_t

0x1d99,	// (0x0008eee6) list_medium_line_right_iconx2_g1

0x1d99,	// (0x0008eee6) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x0009c1fc) list_medium_line_right_iconx2_g

0x2af5,	// (0x0008fc42) list_medium_line_right_iconx2_t1

0x1d99,	// (0x0008eee6) list_medium_line_t2_right_iconx2_g1

0x1d99,	// (0x0008eee6) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x0009c1fc) list_medium_line_t2_right_iconx2_g

0x2af5,	// (0x0008fc42) list_medium_line_t2_right_iconx2_t1

0x2af5,	// (0x0008fc42) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbf7,	// (0x0009cd44) list_medium_line_t2_right_iconx2_t

0x2af5,	// (0x0008fc42) list_medium_line_x4_t4_t1

0x2af5,	// (0x0008fc42) list_medium_line_x4_t4_t2

0x2af5,	// (0x0008fc42) list_medium_line_x4_t4_t3

0x2af5,	// (0x0008fc42) list_medium_line_x4_t4_t4

0x0003,

0xf283,	// (0x0009c3d0) list_medium_line_x4_t4_t

0xad8d,	// (0x00097eda) tport_appsw_pane_ParamLimits

0xad8d,	// (0x00097eda) tport_appsw_pane

0xad9b,	// (0x00097ee8) tport_contact_pane_ParamLimits

0xad9b,	// (0x00097ee8) tport_contact_pane

0xadab,	// (0x00097ef8) tport_listscroll_pane_ParamLimits

0xadab,	// (0x00097ef8) tport_listscroll_pane

0xadbb,	// (0x00097f08) cell_tport_appsw_pane_ParamLimits

0xadbb,	// (0x00097f08) cell_tport_appsw_pane

0x16e6,	// (0x0008e833) tport_appsw_pane_g1_ParamLimits

0x16e6,	// (0x0008e833) tport_appsw_pane_g1

0xade8,	// (0x00097f35) tport_contact_pane_g1

0xadf1,	// (0x00097f3e) tport_contact_pane_t1

0xadff,	// (0x00097f4c) tport_contact_pane_t2

0x0001,

0xfc31,	// (0x0009cd7e) tport_contact_pane_t

0x0f75,	// (0x0008e0c2) list_tport_pane

0x0f7e,	// (0x0008e0cb) scroll_pane_cp_030

0xae15,	// (0x00097f62) cell_tport_appsw_pane_g1

0xae25,	// (0x00097f72) cell_tport_appsw_pane_t1

0xae33,	// (0x00097f80) grid_highlight_pane_cp019

0xae3b,	// (0x00097f88) list_tport_double_graphic_pane_ParamLimits

0xae3b,	// (0x00097f88) list_tport_double_graphic_pane

0x1093,	// (0x0008e1e0) list_highlight_pane_cp023_ParamLimits

0x1093,	// (0x0008e1e0) list_highlight_pane_cp023

0xae48,	// (0x00097f95) list_tport_double_graphic_pane_g1_ParamLimits

0xae48,	// (0x00097f95) list_tport_double_graphic_pane_g1

0xae55,	// (0x00097fa2) list_tport_double_graphic_pane_t1_ParamLimits

0xae55,	// (0x00097fa2) list_tport_double_graphic_pane_t1

0xae6a,	// (0x00097fb7) list_tport_double_graphic_pane_t2_ParamLimits

0xae6a,	// (0x00097fb7) list_tport_double_graphic_pane_t2

0x0001,

0xfc3d,	// (0x0009cd8a) list_tport_double_graphic_pane_t_ParamLimits

0xfc3d,	// (0x0009cd8a) list_tport_double_graphic_pane_t

0x038f,	// (0x0008d4dc) main_cale_note_pane

0x8d11,	// (0x00095e5e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8d11,	// (0x00095e5e) cell_vitu2_function_top_wide_pane_cp01

0xa694,	// (0x000977e1) wait_bar_pane_cp05_ParamLimits

0x1093,	// (0x0008e1e0) listscroll_cmail_pane

0x0f8f,	// (0x0008e0dc) list_cmail_pane

0xae7c,	// (0x00097fc9) list_cmail_body_pane

0xae96,	// (0x00097fe3) list_single_cmail_header_caption_pane

0xaeb6,	// (0x00098003) list_single_cmail_header_detail_pane_ParamLimits

0xaeb6,	// (0x00098003) list_single_cmail_header_detail_pane

0x0fa6,	// (0x0008e0f3) list_single_cmail_header_caption_pane_t1

0xaeec,	// (0x00098039) list_single_cmail_header_detail_pane_g1_ParamLimits

0xaeec,	// (0x00098039) list_single_cmail_header_detail_pane_g1

0x015f,	// (0x0008d2ac) list_single_cmail_header_detail_pane_g2_ParamLimits

0x015f,	// (0x0008d2ac) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc42,	// (0x0009cd8f) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc42,	// (0x0009cd8f) list_single_cmail_header_detail_pane_g

0xaf04,	// (0x00098051) list_single_cmail_header_detail_pane_t1_ParamLimits

0xaf04,	// (0x00098051) list_single_cmail_header_detail_pane_t1

0xaf40,	// (0x0009808d) list_single_cmail_header_editor_pane_bg_ParamLimits

0xaf40,	// (0x0009808d) list_single_cmail_header_editor_pane_bg

0x0c3d,	// (0x0008dd8a) list_cmail_body_pane_g1

0x0fca,	// (0x0008e117) list_cmail_body_pane_t1

0xeabd,	// (0x0009bc0a) list_single_cmail_header_editor_pane_bg_g1

0x21c1,	// (0x0008f30e) list_single_cmail_header_editor_pane_bg_g1_copy1

0xeacd,	// (0x0009bc1a) list_single_cmail_header_editor_pane_bg_g1_copy2

0xeac5,	// (0x0009bc12) list_single_cmail_header_editor_pane_bg_g1_copy3

0xed20,	// (0x0009be6d) list_single_cmail_header_editor_pane_bg_g1_copy4

0xeaed,	// (0x0009bc3a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xeadd,	// (0x0009bc2a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xeae5,	// (0x0009bc32) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x21a1,	// (0x0008f2ee) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xaf57,	// (0x000980a4) calenote_gesture_pane_ParamLimits

0xaf57,	// (0x000980a4) calenote_gesture_pane

0xaf71,	// (0x000980be) calenote_window_pane_ParamLimits

0xaf71,	// (0x000980be) calenote_window_pane

0x0fd8,	// (0x0008e125) popup_note_window_cp01

0xaf89,	// (0x000980d6) calenote_swipe_1_pane_ParamLimits

0xaf89,	// (0x000980d6) calenote_swipe_1_pane

0xaa38,	// (0x00097b85) calenote_swipe_2_pane_ParamLimits

0xaa38,	// (0x00097b85) calenote_swipe_2_pane

0x0e13,	// (0x0008df60) calenote_swipe_1_pane_g1_ParamLimits

0x0e13,	// (0x0008df60) calenote_swipe_1_pane_g1

0x0fea,	// (0x0008e137) calenote_swipe_1_pane_g2_ParamLimits

0x0fea,	// (0x0008e137) calenote_swipe_1_pane_g2

0x0001,

0xfc4e,	// (0x0009cd9b) calenote_swipe_1_pane_g_ParamLimits

0xfc4e,	// (0x0009cd9b) calenote_swipe_1_pane_g

0x0ff6,	// (0x0008e143) calenote_swipe_1_pane_t1_ParamLimits

0x0ff6,	// (0x0008e143) calenote_swipe_1_pane_t1

0x0e13,	// (0x0008df60) calenote_swipe_2_pane_g1_ParamLimits

0x0e13,	// (0x0008df60) calenote_swipe_2_pane_g1

0x1015,	// (0x0008e162) calenote_swipe_2_pane_g2_ParamLimits

0x1015,	// (0x0008e162) calenote_swipe_2_pane_g2

0x0001,

0xfc53,	// (0x0009cda0) calenote_swipe_2_pane_g_ParamLimits

0xfc53,	// (0x0009cda0) calenote_swipe_2_pane_g

0x1021,	// (0x0008e16e) calenote_swipe_2_pane_t1_ParamLimits

0x1021,	// (0x0008e16e) calenote_swipe_2_pane_t1

0x038f,	// (0x0008d4dc) main_mup_navstr_pane

0x7bb2,	// (0x00094cff) main_mup3_pane_t7_ParamLimits

0x7bb2,	// (0x00094cff) main_mup3_pane_t7

0x83c0,	// (0x0009550d) main_mp4_pane_g6_ParamLimits

0x83c0,	// (0x0009550d) main_mp4_pane_g6

0x8736,	// (0x00095883) main_image3_pane_t4_ParamLimits

0x8736,	// (0x00095883) main_image3_pane_t4

0xaf9c,	// (0x000980e9) popup_navstr_preview_pane_ParamLimits

0xaf9c,	// (0x000980e9) popup_navstr_preview_pane

0xafa8,	// (0x000980f5) scroll_navstr_pane_ParamLimits

0xafa8,	// (0x000980f5) scroll_navstr_pane

0x038f,	// (0x0008d4dc) bg_popup_preview_window_pane_cp04

0x1048,	// (0x0008e195) popup_navstr_preview_pane_t1

0xafb4,	// (0x00098101) scroll_navstr_pane_g1_ParamLimits

0xafb4,	// (0x00098101) scroll_navstr_pane_g1

0xafc1,	// (0x0009810e) scroll_navstr_pane_t1_ParamLimits

0xafc1,	// (0x0009810e) scroll_navstr_pane_t1

0x0fe1,	// (0x0008e12e) bg_button_pane_cp014

0x0fe1,	// (0x0008e12e) bg_button_pane_cp030

0xa908,	// (0x00097a55) list_double_fisheye_pane_g4_ParamLimits

0xa908,	// (0x00097a55) list_double_fisheye_pane_g4

0xa914,	// (0x00097a61) list_double_fisheye_pane_g5_ParamLimits

0xa914,	// (0x00097a61) list_double_fisheye_pane_g5

0x0480,	// (0x0008d5cd) sp_fs_scroll_pane_cp03

0x0ee1,	// (0x0008e02e) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x0eed,	// (0x0008e03a) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbfc,	// (0x0009cd49) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xab37,	// (0x00097c84) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x0f9e,	// (0x0008e0eb) sp_fs_scroll_pane_cp02

0x1ef1,	// (0x0008f03e) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1ef1,	// (0x0008f03e) popup_sp_fs_calendar_preview_list_single_pane

0x038f,	// (0x0008d4dc) main_cam6_pano_pane

0x7002,	// (0x0009414f) main_mup3_pane_ParamLimits

0x038f,	// (0x0008d4dc) main_phacti_pane

0xa567,	// (0x000976b4) bg_button_pane_cp11

0xa57f,	// (0x000976cc) main_mobtv_info_pane_g2_ParamLimits

0xa57f,	// (0x000976cc) main_mobtv_info_pane_g2

0x0001,

0xfb5c,	// (0x0009cca9) main_mobtv_info_pane_g_ParamLimits

0xfb5c,	// (0x0009cca9) main_mobtv_info_pane_g

0x1db7,	// (0x0008ef04) sc_clock_pane_t5_ParamLimits

0x1db7,	// (0x0008ef04) sc_clock_pane_t5

0x2f75,	// (0x000900c2) main_radioblah_pane_g1_ParamLimits

0x2f83,	// (0x000900d0) main_radioblah_pane_t3_ParamLimits

0x2f83,	// (0x000900d0) main_radioblah_pane_t3

0x2f83,	// (0x000900d0) main_radioblah_pane_t4_ParamLimits

0x2f83,	// (0x000900d0) main_radioblah_pane_t4

0x0472,	// (0x0008d5bf) main_radioblah_text_pane_ParamLimits

0x0472,	// (0x0008d5bf) main_radioblah_text_pane

0x0d4a,	// (0x0008de97) main_radioblah_info_pane_g1_ParamLimits

0x0d8e,	// (0x0008dedb) main_radioblah_info_pane_t4_ParamLimits

0x0d8e,	// (0x0008dedb) main_radioblah_info_pane_t4

0x1093,	// (0x0008e1e0) main_sp_fs_calendar_pane

0xafd3,	// (0x00098120) main_phacti_pane_g1

0xafdb,	// (0x00098128) phacti_note_pane_ParamLimits

0xafdb,	// (0x00098128) phacti_note_pane

0x105f,	// (0x0008e1ac) phacti_term_pane_ParamLimits

0x105f,	// (0x0008e1ac) phacti_term_pane

0x1074,	// (0x0008e1c1) phacti_note_pane_t1_ParamLimits

0x1074,	// (0x0008e1c1) phacti_note_pane_t1

0x018f,	// (0x0008d2dc) phacti_term_pane_g1

0x0197,	// (0x0008d2e4) phacti_term_pane_t1_ParamLimits

0x0197,	// (0x0008d2e4) phacti_term_pane_t1

0x108b,	// (0x0008e1d8) popup_sp_fs_calendar_preview_list_single_pane_g1

0x1744,	// (0x0008e891) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc5d,	// (0x0009cdaa) popup_sp_fs_calendar_preview_list_single_pane_g

0x174c,	// (0x0008e899) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x174c,	// (0x0008e899) popup_sp_fs_calendar_preview_list_single_pane_t1

0x1762,	// (0x0008e8af) aid_popup_sp_fs_bg_corner_pane

0x1d99,	// (0x0008eee6) popup_sp_fs_calendar_preview_bg_pane_g1

0x038f,	// (0x0008d4dc) popup_sp_fs_calendar_preview_bg_pane

0x176a,	// (0x0008e8b7) popup_sp_fs_calendar_preview_list_pane

0x2f97,	// (0x000900e4) bg_main_sp_fs_cale_pane_ParamLimits

0x2f97,	// (0x000900e4) bg_main_sp_fs_cale_pane

0x01ca,	// (0x0008d317) listscroll_cale_mrui_pane_ParamLimits

0x01ca,	// (0x0008d317) listscroll_cale_mrui_pane

0x01df,	// (0x0008d32c) listscroll_sp_fs_schedule_track_pane

0x01e8,	// (0x0008d335) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x01e8,	// (0x0008d335) main_sp_fs_ctrlbar_pane_cp01

0x1772,	// (0x0008e8bf) main_sp_fs_ribbon_pane

0x01fb,	// (0x0008d348) popup_sp_fs_cale_preview_window

0xb03e,	// (0x0009818b) list_single_sp_fs_schedule_track_pane_ParamLimits

0xb03e,	// (0x0009818b) list_single_sp_fs_schedule_track_pane

0x0472,	// (0x0008d5bf) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0472,	// (0x0008d5bf) bg_sp_fs_highlight_list_pane_cp03

0xb055,	// (0x000981a2) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb055,	// (0x000981a2) list_single_sp_fs_schedule_track_pane_g1

0xb061,	// (0x000981ae) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xb061,	// (0x000981ae) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc62,	// (0x0009cdaf) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc62,	// (0x0009cdaf) list_single_sp_fs_schedule_track_pane_g

0xb06d,	// (0x000981ba) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xb06d,	// (0x000981ba) list_single_sp_fs_schedule_track_pane_t1

0xb08b,	// (0x000981d8) sp_fs_schedule_track_pane_ParamLimits

0xb08b,	// (0x000981d8) sp_fs_schedule_track_pane

0x177a,	// (0x0008e8c7) sp_fs_schedule_track_pane_g1

0x1782,	// (0x0008e8cf) sp_fs_schedule_track_pane_g2

0x178a,	// (0x0008e8d7) sp_fs_schedule_track_pane_g3

0x1792,	// (0x0008e8df) sp_fs_schedule_track_pane_g4

0x179a,	// (0x0008e8e7) sp_fs_schedule_track_pane_g5

0x0004,

0xfc67,	// (0x0009cdb4) sp_fs_schedule_track_pane_g

0xeabd,	// (0x0009bc0a) bg_sp_fs_schedule_viewer_highlight_g1

0x21c1,	// (0x0008f30e) bg_sp_fs_schedule_viewer_highlight_g2

0xeac5,	// (0x0009bc12) bg_sp_fs_schedule_viewer_highlight_g3

0xeacd,	// (0x0009bc1a) bg_sp_fs_schedule_viewer_highlight_g4

0xed20,	// (0x0009be6d) bg_sp_fs_schedule_viewer_highlight_g5

0xeadd,	// (0x0009bc2a) bg_sp_fs_schedule_viewer_highlight_g6

0xeae5,	// (0x0009bc32) bg_sp_fs_schedule_viewer_highlight_g7

0xeaed,	// (0x0009bc3a) bg_sp_fs_schedule_viewer_highlight_g8

0x21a1,	// (0x0008f2ee) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc72,	// (0x0009cdbf) bg_sp_fs_schedule_viewer_highlight_g

0x038f,	// (0x0008d4dc) bg_main_sp_fs_ribbon_pane

0xb09d,	// (0x000981ea) main_sp_fs_ribbon_pane_g1

0x17a2,	// (0x0008e8ef) main_sp_fs_ribbon_pane_t1

0xb0a6,	// (0x000981f3) main_sp_fs_ribbon_pane_t2

0x17b1,	// (0x0008e8fe) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc85,	// (0x0009cdd2) main_sp_fs_ribbon_pane_t

0x17c0,	// (0x0008e90d) main_sp_fs_ribbon_scheduler_pane

0x17c8,	// (0x0008e915) bg_main_sp_fs_ribbon_pane_g1

0x17d1,	// (0x0008e91e) bg_main_sp_fs_ribbon_pane_g2

0x17da,	// (0x0008e927) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc8c,	// (0x0009cdd9) bg_main_sp_fs_ribbon_pane_g

0x17e2,	// (0x0008e92f) main_sp_fs_ribbon_scheduler_pane_g1

0x17eb,	// (0x0008e938) main_sp_fs_ribbon_scheduler_pane_g2

0x17f4,	// (0x0008e941) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc93,	// (0x0009cde0) main_sp_fs_ribbon_scheduler_pane_g

0x17fd,	// (0x0008e94a) list_cale_mrui_pane

0xb0b5,	// (0x00098202) sp_fs_scroll_pane_cp07_ParamLimits

0xb0b5,	// (0x00098202) sp_fs_scroll_pane_cp07

0xb0d1,	// (0x0009821e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xb0d1,	// (0x0009821e) bg_sp_fs_schedule_viewer_highlight

0x180a,	// (0x0008e957) list_single_sp_fs_schedule_track_pane_cp01

0x1812,	// (0x0008e95f) list_sp_fs_schedule_track_pane

0x181a,	// (0x0008e967) sp_fs_scroll_pane_cp06_ParamLimits

0x181a,	// (0x0008e967) sp_fs_scroll_pane_cp06

0x1d99,	// (0x0008eee6) bgmain_sp_fs_calendar_pane_g1

0xb0de,	// (0x0009822b) list_single_cale_mrui_pane_ParamLimits

0xb0de,	// (0x0009822b) list_single_cale_mrui_pane

0x020d,	// (0x0008d35a) list_single_cale_mrui_row_pane_ParamLimits

0x020d,	// (0x0008d35a) list_single_cale_mrui_row_pane

0x021a,	// (0x0008d367) list_single_cale_mrui_row_pane_g1_ParamLimits

0x021a,	// (0x0008d367) list_single_cale_mrui_row_pane_g1

0x0252,	// (0x0008d39f) list_single_cale_mrui_row_pane_t1_ParamLimits

0x0252,	// (0x0008d39f) list_single_cale_mrui_row_pane_t1

0xb101,	// (0x0009824e) list_single_cale_mrui_row_pane_t2_ParamLimits

0xb101,	// (0x0009824e) list_single_cale_mrui_row_pane_t2

0x0264,	// (0x0008d3b1) list_single_cale_mrui_row_pane_t3_ParamLimits

0x0264,	// (0x0008d3b1) list_single_cale_mrui_row_pane_t3

0x0293,	// (0x0008d3e0) list_single_cale_mrui_row_pane_t4_ParamLimits

0x0293,	// (0x0008d3e0) list_single_cale_mrui_row_pane_t4

0x0003,

0xfca1,	// (0x0009cdee) list_single_cale_mrui_row_pane_t_ParamLimits

0xfca1,	// (0x0009cdee) list_single_cale_mrui_row_pane_t

0xb167,	// (0x000982b4) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xb167,	// (0x000982b4) list_single_cmail_header_editor_pane_bg_cp01

0xb191,	// (0x000982de) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xb191,	// (0x000982de) list_single_cmail_header_editor_pane_bg_cp02

0x1839,	// (0x0008e986) main_radioblah_text_pane_t1_ParamLimits

0x1839,	// (0x0008e986) main_radioblah_text_pane_t1

0x1853,	// (0x0008e9a0) cam6_indi_pane_cp01

0x185b,	// (0x0008e9a8) cam6_mode_pane_cp01

0x1863,	// (0x0008e9b0) cam6_pano_pane

0x186c,	// (0x0008e9b9) cam6_zoom_pane_cp01

0x1876,	// (0x0008e9c3) cam6_pano_image_pane

0x187f,	// (0x0008e9cc) cam6_pano_pane_g1

0x0c3d,	// (0x0008dd8a) cam6_pano_pane_g2

0x1888,	// (0x0008e9d5) cam6_pano_pane_g3

0x1891,	// (0x0008e9de) cam6_pano_pane_g4

0xe7eb,	// (0x0009b938) cam6_pano_pane_g5

0x189a,	// (0x0008e9e7) cam6_pano_pane_g6

0x18a2,	// (0x0008e9ef) cam6_pano_pane_g7

0x18aa,	// (0x0008e9f7) cam6_pano_pane_g8

0x18b3,	// (0x0008ea00) cam6_pano_pane_g9

0x0008,

0xfcaa,	// (0x0009cdf7) cam6_pano_pane_g

0x038f,	// (0x0008d4dc) main_browser_tag_pane

0x1040,	// (0x0008e18d) grid_navstr_albumart_pane

0x18be,	// (0x0008ea0b) cell_navstr_albumart_pane_ParamLimits

0x18be,	// (0x0008ea0b) cell_navstr_albumart_pane

0x18da,	// (0x0008ea27) cell_navstr_albumart_pane_g1

0xdce1,	// (0x0009ae2e) cell_navstr_albumart_pane_g2

0xdcf1,	// (0x0009ae3e) cell_navstr_albumart_pane_g3

0xdce9,	// (0x0009ae36) cell_navstr_albumart_pane_g4

0x0003,

0xfcbd,	// (0x0009ce0a) cell_navstr_albumart_pane_g

0xb1af,	// (0x000982fc) bt_list_pane_ParamLimits

0xb1af,	// (0x000982fc) bt_list_pane

0xb1c8,	// (0x00098315) bt_list_pane_t1

0xb1d7,	// (0x00098324) bt_list_pane_t2

0x0001,

0xfcc6,	// (0x0009ce13) bt_list_pane_t

0x038f,	// (0x0008d4dc) main_cale_prevew_pane

0xb1e6,	// (0x00098333) popup_cale_preview_window_ParamLimits

0xb1e6,	// (0x00098333) popup_cale_preview_window

0x1093,	// (0x0008e1e0) bg_popup_preview_window_pane_cp05_ParamLimits

0x1093,	// (0x0008e1e0) bg_popup_preview_window_pane_cp05

0x18e2,	// (0x0008ea2f) list_cale_preview_pane_ParamLimits

0x18e2,	// (0x0008ea2f) list_cale_preview_pane

0xb203,	// (0x00098350) list_double_cale_preview_pane_ParamLimits

0xb203,	// (0x00098350) list_double_cale_preview_pane

0xb217,	// (0x00098364) list_single_cale_preview_pane_ParamLimits

0xb217,	// (0x00098364) list_single_cale_preview_pane

0xb22f,	// (0x0009837c) list_single_cale_preview_pane_g1

0xb237,	// (0x00098384) list_single_cale_preview_pane_t1_ParamLimits

0xb237,	// (0x00098384) list_single_cale_preview_pane_t1

0xb24c,	// (0x00098399) list_double_cale_preview_pane_g1

0xb254,	// (0x000983a1) list_double_cale_preview_pane_t1_ParamLimits

0xb254,	// (0x000983a1) list_double_cale_preview_pane_t1

0xb269,	// (0x000983b6) list_double_cale_preview_pane_t2_ParamLimits

0xb269,	// (0x000983b6) list_double_cale_preview_pane_t2

0x0001,

0xfccb,	// (0x0009ce18) list_double_cale_preview_pane_t_ParamLimits

0xfccb,	// (0x0009ce18) list_double_cale_preview_pane_t

0x038f,	// (0x0008d4dc) main_ezdial_pane

0x1093,	// (0x0008e1e0) main_sp_fs_email_pane_ParamLimits

0xaa98,	// (0x00097be5) cmail_ddmenu_btn01_pane_ParamLimits

0xaa98,	// (0x00097be5) cmail_ddmenu_btn01_pane

0xaab5,	// (0x00097c02) cmail_ddmenu_btn02_pane_ParamLimits

0xaab5,	// (0x00097c02) cmail_ddmenu_btn02_pane

0xaad3,	// (0x00097c20) cmail_ddmenu_btn03_pane_ParamLimits

0xaad3,	// (0x00097c20) cmail_ddmenu_btn03_pane

0xab74,	// (0x00097cc1) main_sp_fs_ctrlbar_pane_ParamLimits

0xab8e,	// (0x00097cdb) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xae7c,	// (0x00097fc9) list_cmail_body_pane_ParamLimits

0x0fb4,	// (0x0008e101) bg_button_pane_cp12

0x0fbd,	// (0x0008e10a) list_single_cmail_header_detail_pane_g3_ParamLimits

0x0fbd,	// (0x0008e10a) list_single_cmail_header_detail_pane_g3

0x016b,	// (0x0008d2b8) list_single_cmail_header_detail_pane_t2_ParamLimits

0x016b,	// (0x0008d2b8) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc49,	// (0x0009cd96) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc49,	// (0x0009cd96) list_single_cmail_header_detail_pane_t

0x01ac,	// (0x0008d2f9) phacti_term_pane_t2_ParamLimits

0x01ac,	// (0x0008d2f9) phacti_term_pane_t2

0x0001,

0xfc58,	// (0x0009cda5) phacti_term_pane_t_ParamLimits

0xfc58,	// (0x0009cda5) phacti_term_pane_t

0x18ee,	// (0x0008ea3b) aid_size_list_single_double

0xb281,	// (0x000983ce) popup_ezdial_listscroll_window

0x18fa,	// (0x0008ea47) popup_number_entry_window_cp01

0x1f95,	// (0x0008f0e2) bg_popup_call_pane_cp09

0x1907,	// (0x0008ea54) ezdial_list_pane

0x190f,	// (0x0008ea5c) scroll_pane_cp23

0xce48,	// (0x00099f95) bg_button_pane_cp028_ParamLimits

0xce48,	// (0x00099f95) bg_button_pane_cp028

0xb29d,	// (0x000983ea) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb29d,	// (0x000983ea) cmail_ddmenu_btn01_pane_g1

0xb2af,	// (0x000983fc) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb2af,	// (0x000983fc) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcd0,	// (0x0009ce1d) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcd0,	// (0x0009ce1d) cmail_ddmenu_btn01_pane_g

0x1917,	// (0x0008ea64) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x1917,	// (0x0008ea64) cmail_ddmenu_btn01_pane_t1

0x2f97,	// (0x000900e4) bg_button_pane_cp029_ParamLimits

0x2f97,	// (0x000900e4) bg_button_pane_cp029

0xb2bb,	// (0x00098408) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb2bb,	// (0x00098408) cmail_ddmenu_btn02_pane_g1

0xb2d3,	// (0x00098420) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb2d3,	// (0x00098420) cmail_ddmenu_btn02_pane_t1

0x0472,	// (0x0008d5bf) bg_button_pane_cp031_ParamLimits

0x0472,	// (0x0008d5bf) bg_button_pane_cp031

0xb2bb,	// (0x00098408) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb2bb,	// (0x00098408) cmail_ddmenu_btn03_pane_g1

0xb2d3,	// (0x00098420) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb2d3,	// (0x00098420) cmail_ddmenu_btn03_pane_t1

0x1da3,	// (0x0008eef0) cell_dialer2_keypad_pane_t1_ParamLimits

0xe5db,	// (0x0009b728) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xe5db,	// (0x0009b728) cell_dialer2_keypad_pane_t1_copy1

0xa394,	// (0x000974e1) ncimui_group_button_pane

0x1093,	// (0x0008e1e0) main_sp_fs_calendar_pane_ParamLimits

0xae96,	// (0x00097fe3) list_single_cmail_header_caption_pane_ParamLimits

0x01c1,	// (0x0008d30e) aid_recal_txt_sm_pane

0x038f,	// (0x0008d4dc) mian_recal_day_pane

0x01fb,	// (0x0008d348) popup_sp_fs_cale_preview_window_ParamLimits

0x192d,	// (0x0008ea7a) list_recal_day_pane

0x02e0,	// (0x0008d42d) list_single_recal_day_pane_ParamLimits

0x02e0,	// (0x0008d42d) list_single_recal_day_pane

0x1954,	// (0x0008eaa1) list_single_recal_day_pane_g1_ParamLimits

0x1954,	// (0x0008eaa1) list_single_recal_day_pane_g1

0x02f2,	// (0x0008d43f) list_single_recal_day_pane_g2_ParamLimits

0x02f2,	// (0x0008d43f) list_single_recal_day_pane_g2

0x02fe,	// (0x0008d44b) list_single_recal_day_pane_g3_ParamLimits

0x02fe,	// (0x0008d44b) list_single_recal_day_pane_g3

0xb2f7,	// (0x00098444) list_single_recal_day_pane_g4_ParamLimits

0xb2f7,	// (0x00098444) list_single_recal_day_pane_g4

0x030a,	// (0x0008d457) list_single_recal_day_pane_g5_ParamLimits

0x030a,	// (0x0008d457) list_single_recal_day_pane_g5

0x0316,	// (0x0008d463) list_single_recal_day_pane_g6_ParamLimits

0x0316,	// (0x0008d463) list_single_recal_day_pane_g6

0x0004,

0xfcdf,	// (0x0009ce2c) list_single_recal_day_pane_g_ParamLimits

0xfcdf,	// (0x0009ce2c) list_single_recal_day_pane_g

0x032a,	// (0x0008d477) list_single_recal_day_pane_t1

0x033c,	// (0x0008d489) list_single_recal_day_pane_t2

0x0001,

0xfcea,	// (0x0009ce37) list_single_recal_day_pane_t

0xb30f,	// (0x0009845c) ncimui_query_button_pane_ParamLimits

0xb30f,	// (0x0009845c) ncimui_query_button_pane

0xb31f,	// (0x0009846c) ncimui_query_button_pane_t1_ParamLimits

0xb31f,	// (0x0009846c) ncimui_query_button_pane_t1

0x1960,	// (0x0008eaad) ncimui_query_button_pane_t2_ParamLimits

0x1960,	// (0x0008eaad) ncimui_query_button_pane_t2

0x0001,

0xfcef,	// (0x0009ce3c) ncimui_query_button_pane_t_ParamLimits

0xfcef,	// (0x0009ce3c) ncimui_query_button_pane_t

0xb332,	// (0x0009847f) query_button_pane_ParamLimits

0xb332,	// (0x0009847f) query_button_pane

0x038f,	// (0x0008d4dc) bg_button_pane_cp0028

0x1973,	// (0x0008eac0) query_button_pane_t1

0x701e,	// (0x0009416b) main_tport_pane_ParamLimits

0xad63,	// (0x00097eb0) bg_popup_window_pane_cp01_ParamLimits

0xad63,	// (0x00097eb0) bg_popup_window_pane_cp01

0xad71,	// (0x00097ebe) heading_pane_cp08_ParamLimits

0xad71,	// (0x00097ebe) heading_pane_cp08

0xad7f,	// (0x00097ecc) heading_pane_cp07_ParamLimits

0xad7f,	// (0x00097ecc) heading_pane_cp07

0xae15,	// (0x00097f62) cell_tport_appsw_pane_g2

0x0002,

0xfc36,	// (0x0009cd83) cell_tport_appsw_pane_g

0x674b,	// (0x00093898) input_candi_list_open_g1

0x239b,	// (0x0008f4e8) list_cale_time_pane_g6_ParamLimits

0x239b,	// (0x0008f4e8) list_cale_time_pane_g6

0x7576,	// (0x000946c3) aid_size_touch_calib_1_ParamLimits

0x7576,	// (0x000946c3) aid_size_touch_calib_1

0x7582,	// (0x000946cf) aid_size_touch_calib_2_ParamLimits

0x7582,	// (0x000946cf) aid_size_touch_calib_2

0x7590,	// (0x000946dd) aid_size_touch_calib_3_ParamLimits

0x7590,	// (0x000946dd) aid_size_touch_calib_3

0x75a0,	// (0x000946ed) aid_size_touch_calib_4_ParamLimits

0x75a0,	// (0x000946ed) aid_size_touch_calib_4

0x75ae,	// (0x000946fb) main_touch_calib_button_group_pane_ParamLimits

0x75ae,	// (0x000946fb) main_touch_calib_button_group_pane

0x75bc,	// (0x00094709) main_touch_calib_pane_g1_ParamLimits

0x75c8,	// (0x00094715) main_touch_calib_pane_g2_ParamLimits

0x75d4,	// (0x00094721) main_touch_calib_pane_g3_ParamLimits

0x75e0,	// (0x0009472d) main_touch_calib_pane_g4_ParamLimits

0xf689,	// (0x0009c7d6) main_touch_calib_pane_g_ParamLimits

0x75ec,	// (0x00094739) main_touch_calib_pane_t1_ParamLimits

0x7603,	// (0x00094750) main_touch_calib_pane_t2_ParamLimits

0x761c,	// (0x00094769) main_touch_calib_pane_t3_ParamLimits

0x7632,	// (0x0009477f) main_touch_calib_pane_t4_ParamLimits

0x7648,	// (0x00094795) main_touch_calib_pane_t5_ParamLimits

0xf692,	// (0x0009c7df) main_touch_calib_pane_t_ParamLimits

0xe589,	// (0x0009b6d6) list_single_fp_cale_pane_g3_ParamLimits

0xe589,	// (0x0009b6d6) list_single_fp_cale_pane_g3

0x7002,	// (0x0009414f) bg_button_pane_cp012_ParamLimits

0x7002,	// (0x0009414f) bg_vkb2_func_pane_cp03_ParamLimits

0x947d,	// (0x000965ca) cell_vitu2_function_top_pane_g1_ParamLimits

0x7002,	// (0x0009414f) bg_vkb2_func_pane_cp04_ParamLimits

0xa31a,	// (0x00097467) main_ncimui_button_group_pane_ParamLimits

0xa31a,	// (0x00097467) main_ncimui_button_group_pane

0xa382,	// (0x000974cf) main_ncimui_pane_t3_ParamLimits

0xa382,	// (0x000974cf) main_ncimui_pane_t3

0x1056,	// (0x0008e1a3) phacti_button_group_pane

0x18ee,	// (0x0008ea3b) aid_size_list_single_double_ParamLimits

0xb281,	// (0x000983ce) popup_ezdial_listscroll_window_ParamLimits

0x18fa,	// (0x0008ea47) popup_number_entry_window_cp01_ParamLimits

0xb33f,	// (0x0009848c) phacti_button_pane_ParamLimits

0xb33f,	// (0x0009848c) phacti_button_pane

0x038f,	// (0x0008d4dc) bg_button_pane_cp14

0x1981,	// (0x0008eace) phacti_button_pane_t1

0xb350,	// (0x0009849d) main_touch_calib_button_pane_ParamLimits

0xb350,	// (0x0009849d) main_touch_calib_button_pane

0x1df7,	// (0x0008ef44) bg_button_pane_cp18_ParamLimits

0x1df7,	// (0x0008ef44) bg_button_pane_cp18

0x198f,	// (0x0008eadc) main_touch_calib_button_pane_t1_ParamLimits

0x198f,	// (0x0008eadc) main_touch_calib_button_pane_t1

0x19a5,	// (0x0008eaf2) main_touch_calib_button_pane_t2_ParamLimits

0x19a5,	// (0x0008eaf2) main_touch_calib_button_pane_t2

0x0001,

0xfcf4,	// (0x0009ce41) main_touch_calib_button_pane_t_ParamLimits

0xfcf4,	// (0x0009ce41) main_touch_calib_button_pane_t

0x038f,	// (0x0008d4dc) cell_ncimui_button_pane

0x038f,	// (0x0008d4dc) bg_button_pane_cp032

0x19c3,	// (0x0008eb10) cell_ncimui_button_pane_t1

0x8647,	// (0x00095794) image3_infobar_pane_ParamLimits

0x8647,	// (0x00095794) image3_infobar_pane

0xa6d8,	// (0x00097825) fs_bigclock_status_pane_ParamLimits

0xa6d8,	// (0x00097825) fs_bigclock_status_pane

0xa6e5,	// (0x00097832) main_fs_bigclock_clock_pane_ParamLimits

0xa6e5,	// (0x00097832) main_fs_bigclock_clock_pane

0xa701,	// (0x0009784e) main_fs_bigclock_indi_pane_ParamLimits

0xa701,	// (0x0009784e) main_fs_bigclock_indi_pane

0xa72f,	// (0x0009787c) main_fs_bigclock_swipe_pane_ParamLimits

0xa72f,	// (0x0009787c) main_fs_bigclock_swipe_pane

0x038f,	// (0x0008d4dc) main_fs_clock_dumped_data

0xa769,	// (0x000978b6) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xa769,	// (0x000978b6) list_single_fs_bigclock_indicator_pane_g1

0xa788,	// (0x000978d5) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xa788,	// (0x000978d5) list_single_fs_bigclock_indicator_pane_g2

0xa7a2,	// (0x000978ef) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xa7a2,	// (0x000978ef) list_single_fs_bigclock_indicator_pane_g3

0xa7be,	// (0x0009790b) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xa7be,	// (0x0009790b) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb90,	// (0x0009ccdd) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb90,	// (0x0009ccdd) list_single_fs_bigclock_indicator_pane_g

0xa7ed,	// (0x0009793a) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xa7ed,	// (0x0009793a) list_single_fs_bigclock_indicator_pane_t1

0xa815,	// (0x00097962) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xa815,	// (0x00097962) list_single_fs_bigclock_indicator_pane_t2

0xa83d,	// (0x0009798a) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xa83d,	// (0x0009798a) list_single_fs_bigclock_indicator_pane_t3

0xa865,	// (0x000979b2) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xa865,	// (0x000979b2) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb9b,	// (0x0009cce8) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb9b,	// (0x0009cce8) list_single_fs_bigclock_indicator_pane_t

0x19d1,	// (0x0008eb1e) image3_infobar_fav_pane_ParamLimits

0x19d1,	// (0x0008eb1e) image3_infobar_fav_pane

0x19e1,	// (0x0008eb2e) image3_infobar_loc_pane_ParamLimits

0x19e1,	// (0x0008eb2e) image3_infobar_loc_pane

0x19f7,	// (0x0008eb44) image3_infobar_time_pane_ParamLimits

0x19f7,	// (0x0008eb44) image3_infobar_time_pane

0x1d99,	// (0x0008eee6) image3_infobar_time_pane_g1

0x1a07,	// (0x0008eb54) image3_infobar_time_pane_t1

0x1d99,	// (0x0008eee6) image3_infobar_loc_pane_g1

0x1a15,	// (0x0008eb62) image3_infobar_loc_pane_g2

0x0001,

0xfcf9,	// (0x0009ce46) image3_infobar_loc_pane_g

0x1a1d,	// (0x0008eb6a) image3_infobar_loc_pane_t1

0x1d99,	// (0x0008eee6) image3_infobar_fav_pane_g1

0x1a2b,	// (0x0008eb78) image3_infobar_fav_pane_g2

0x0001,

0xfcfe,	// (0x0009ce4b) image3_infobar_fav_pane_g

0x1a33,	// (0x0008eb80) fs_bigclock_status_battery_pane

0x1a3c,	// (0x0008eb89) fs_bigclock_status_signal_pane

0x1a45,	// (0x0008eb92) fs_bigclock_status_title_pane

0x1a4e,	// (0x0008eb9b) fs_bigclock_status_signal_pane_g1

0x1a57,	// (0x0008eba4) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd03,	// (0x0009ce50) fs_bigclock_status_signal_pane_g

0x1a5f,	// (0x0008ebac) fs_bigclock_status_battery_pane_g1

0x1a68,	// (0x0008ebb5) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd08,	// (0x0009ce55) fs_bigclock_status_battery_pane_g

0x1a70,	// (0x0008ebbd) fs_bigclock_status_title_pane_t1

0xb360,	// (0x000984ad) main_fs_bigclock_clock_pane_g1

0xb360,	// (0x000984ad) main_fs_bigclock_clock_pane_g2

0xb36f,	// (0x000984bc) main_fs_bigclock_clock_pane_g3

0xb36f,	// (0x000984bc) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd0d,	// (0x0009ce5a) main_fs_bigclock_clock_pane_g

0xb37f,	// (0x000984cc) main_fs_bigclock_clock_pane_t1

0xb394,	// (0x000984e1) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd16,	// (0x0009ce63) main_fs_bigclock_clock_pane_t

0x1a7e,	// (0x0008ebcb) list_single_fs_bigclock_indicator_pane_ParamLimits

0x1a7e,	// (0x0008ebcb) list_single_fs_bigclock_indicator_pane

0x1a8f,	// (0x0008ebdc) list_single_fs_bigclock_pane_ParamLimits

0x1a8f,	// (0x0008ebdc) list_single_fs_bigclock_pane

0x1ab5,	// (0x0008ec02) main_fs_bigclock_indicator_pane_t1

0x1ac4,	// (0x0008ec11) list_single_fs_bigclock_pane_g1

0x1acc,	// (0x0008ec19) list_single_fs_bigclock_pane_t1

0x1d99,	// (0x0008eee6) main_fs_bigclock_swipe_pane_g1

0x1b0f,	// (0x0008ec5c) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd27,	// (0x0009ce74) main_fs_bigclock_swipe_pane_g

0x1b17,	// (0x0008ec64) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x1b17,	// (0x0008ec64) main_fs_bigclock_swipe_pane_t1

0x6102,	// (0x0009324f) call_type_pane_ParamLimits

0x038f,	// (0x0008d4dc) main_btmg_pane

0x0246,	// (0x0008d393) list_single_cale_mrui_row_pane_g2_ParamLimits

0x0246,	// (0x0008d393) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc9a,	// (0x0009cde7) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc9a,	// (0x0009cde7) list_single_cale_mrui_row_pane_g

0x02ce,	// (0x0008d41b) list_recal_vselct_arw_lo_pane

0x194c,	// (0x0008ea99) list_recal_vselct_arw_up_pane

0x02d6,	// (0x0008d423) list_recal_vselct_pane

0xb3eb,	// (0x00098538) btmg_button_pane

0xb3f7,	// (0x00098544) main_btmg_pane_g1

0x038f,	// (0x0008d4dc) bg_button_pane_cp044

0x1b34,	// (0x0008ec81) btmg_button_pane_t1

0xde33,	// (0x0009af80) aid_listscroll_gen

0x1093,	// (0x0008e1e0) main_cntbar_detail_pane

0x0f87,	// (0x0008e0d4) list_cmail_folder_pane

0x0480,	// (0x0008d5cd) sp_fs_scroll_pane_cp03_ParamLimits

0xb3ff,	// (0x0009854c) list_single_fs_dyc_pane_cp01_ParamLimits

0xb3ff,	// (0x0009854c) list_single_fs_dyc_pane_cp01

0x1b42,	// (0x0008ec8f) aid_size_cmail_indent

0x034e,	// (0x0008d49b) list_single_dyc_row_pane_cp01

0xb43c,	// (0x00098589) cntbar_detail_list_pane_ParamLimits

0xb43c,	// (0x00098589) cntbar_detail_list_pane

0xb47c,	// (0x000985c9) main_cntbar_detail_cont_pane_ParamLimits

0xb47c,	// (0x000985c9) main_cntbar_detail_cont_pane

0x60f6,	// (0x00093243) scroll_pane_cp032_ParamLimits

0x60f6,	// (0x00093243) scroll_pane_cp032

0xb488,	// (0x000985d5) cntbar_detail_list_event_pane_ParamLimits

0xb488,	// (0x000985d5) cntbar_detail_list_event_pane

0xb44a,	// (0x00098597) cntbar_detail_list_shct_pane

0x220f,	// (0x0008f35c) aid_list_gen

0x1b4b,	// (0x0008ec98) aid_scroll

0x1b54,	// (0x0008eca1) aid_size_touch_scroll_bar

0xb498,	// (0x000985e5) aid_list_double

0xb4a1,	// (0x000985ee) aid_list_single

0xb4a1,	// (0x000985ee) aid_list_single_lg

0xb4aa,	// (0x000985f7) aid_list_z_g_a_sm

0xb4b2,	// (0x000985ff) aid_list_z_g_d

0xb4ba,	// (0x00098607) aid_txt_z_prm

0xb4c8,	// (0x00098615) aid_txt_z_prm_cp01

0xb4d6,	// (0x00098623) aid_txt_z_sec

0xb4e4,	// (0x00098631) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb4e4,	// (0x00098631) main_cntbar_detail_cont_pane_g1

0xb4f1,	// (0x0009863e) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb4f1,	// (0x0009863e) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd2c,	// (0x0009ce79) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd2c,	// (0x0009ce79) main_cntbar_detail_cont_pane_g

0x1b5d,	// (0x0008ecaa) main_cntbar_detail_cont_pane_t1

0x1b6b,	// (0x0008ecb8) main_cntbar_detail_cont_pane_t2

0x1b79,	// (0x0008ecc6) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd31,	// (0x0009ce7e) main_cntbar_detail_cont_pane_t

0xb4fd,	// (0x0009864a) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb4fd,	// (0x0009864a) cell_cntbar_detail_list_shct_pane

0x1b87,	// (0x0008ecd4) cntbar_detail_list_shct_pane_g1

0x1b90,	// (0x0008ecdd) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd38,	// (0x0009ce85) cntbar_detail_list_shct_pane_g

0xb511,	// (0x0009865e) cntbar_detail_list_event_pane_g1_ParamLimits

0xb511,	// (0x0009865e) cntbar_detail_list_event_pane_g1

0xb51d,	// (0x0009866a) cntbar_detail_list_event_pane_g2_ParamLimits

0xb51d,	// (0x0009866a) cntbar_detail_list_event_pane_g2

0x0005,

0xfd3d,	// (0x0009ce8a) cntbar_detail_list_event_pane_g_ParamLimits

0xfd3d,	// (0x0009ce8a) cntbar_detail_list_event_pane_g

0xb58b,	// (0x000986d8) cntbar_detail_list_event_pane_t1_ParamLimits

0xb58b,	// (0x000986d8) cntbar_detail_list_event_pane_t1

0xb5a0,	// (0x000986ed) cntbar_detail_list_event_pane_t2_ParamLimits

0xb5a0,	// (0x000986ed) cntbar_detail_list_event_pane_t2

0x0002,

0xfd4a,	// (0x0009ce97) cntbar_detail_list_event_pane_t_ParamLimits

0xfd4a,	// (0x0009ce97) cntbar_detail_list_event_pane_t

0x1d99,	// (0x0008eee6) cell_cntbar_detail_list_shct_pane_g1

0x64af,	// (0x000935fc) navi_pane_mv_g3

0x1093,	// (0x0008e1e0) main_cntbar_detail_pane_ParamLimits

0x038f,	// (0x0008d4dc) main_notif_wgt_pane

0x82ed,	// (0x0009543a) aid_tch_main_mp4_pane_g4

0x85c2,	// (0x0009570f) popup_slider_window_cp02

0x02c4,	// (0x0008d411) list_recal_day_event_pane

0xb41c,	// (0x00098569) cntbar_detail_btn_pane_ParamLimits

0xb41c,	// (0x00098569) cntbar_detail_btn_pane

0xb42c,	// (0x00098579) cntbar_detail_btn_pane_cp01_ParamLimits

0xb42c,	// (0x00098579) cntbar_detail_btn_pane_cp01

0xb44a,	// (0x00098597) cntbar_detail_list_shct_pane_ParamLimits

0xb456,	// (0x000985a3) cntbar_detail_pane_g1_ParamLimits

0xb456,	// (0x000985a3) cntbar_detail_pane_g1

0xb466,	// (0x000985b3) cntbar_detail_pane_t1_ParamLimits

0xb466,	// (0x000985b3) cntbar_detail_pane_t1

0xb529,	// (0x00098676) cntbar_detail_list_event_pane_g3_ParamLimits

0xb529,	// (0x00098676) cntbar_detail_list_event_pane_g3

0xb541,	// (0x0009868e) cntbar_detail_list_event_pane_g4_ParamLimits

0xb541,	// (0x0009868e) cntbar_detail_list_event_pane_g4

0xb559,	// (0x000986a6) cntbar_detail_list_event_pane_g5_ParamLimits

0xb559,	// (0x000986a6) cntbar_detail_list_event_pane_g5

0xb571,	// (0x000986be) cntbar_detail_list_event_pane_g6_ParamLimits

0xb571,	// (0x000986be) cntbar_detail_list_event_pane_g6

0xb5b5,	// (0x00098702) cntbar_detail_list_event_pane_t3_ParamLimits

0xb5b5,	// (0x00098702) cntbar_detail_list_event_pane_t3

0xb5c7,	// (0x00098714) popup_notif_wgt_window_ParamLimits

0xb5c7,	// (0x00098714) popup_notif_wgt_window

0xb5d7,	// (0x00098724) popup_submenu_window_cp01_ParamLimits

0xb5d7,	// (0x00098724) popup_submenu_window_cp01

0x1f95,	// (0x0008f0e2) bg_popup_window_pane_cp10

0x1b99,	// (0x0008ece6) listscroll_notif_wgt_pane

0x1bab,	// (0x0008ecf8) list_notif_wgt_window

0x1bb4,	// (0x0008ed01) scroll_pane_cp033

0xb5e7,	// (0x00098734) list_notif_wgt_row_pane_ParamLimits

0xb5e7,	// (0x00098734) list_notif_wgt_row_pane

0x1bbd,	// (0x0008ed0a) aid_size_list_notif_wgt_del

0x1bca,	// (0x0008ed17) list_notif_wgt_row_pane_g1

0x1bd6,	// (0x0008ed23) list_notif_wgt_row_pane_g2

0x1be5,	// (0x0008ed32) list_notif_wgt_row_pane_g3

0x0002,

0xfd51,	// (0x0009ce9e) list_notif_wgt_row_pane_g

0x1bf2,	// (0x0008ed3f) list_notif_wgt_row_pane_t1

0x1c08,	// (0x0008ed55) list_notif_wgt_row_pane_t2

0x1c1a,	// (0x0008ed67) list_notif_wgt_row_pane_t3

0x0002,

0xfd58,	// (0x0009cea5) list_notif_wgt_row_pane_t

0xed3a,	// (0x0009be87) list_recal_day_event_pane_g1

0x1c2c,	// (0x0008ed79) list_recal_day_event_pane_t1

0x038f,	// (0x0008d4dc) bg_button_pane_cp045

0xb5fb,	// (0x00098748) cntbar_detail_btn_pane_t1

0x2f97,	// (0x000900e4) main_callh_pane_ParamLimits

0x2f97,	// (0x000900e4) main_callh_pane

0x038f,	// (0x0008d4dc) main_coverflow0_pane

0x038f,	// (0x0008d4dc) main_wgtman_pane

0xa747,	// (0x00097894) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xa747,	// (0x00097894) main_fs_bigclock_unlock_btn_pane

0xae0d,	// (0x00097f5a) bg_button_pane_cp16

0xae1d,	// (0x00097f6a) cell_tport_appsw_pane_g3

0xb609,	// (0x00098756) cf0_flow_pane_ParamLimits

0xb609,	// (0x00098756) cf0_flow_pane

0x1c3b,	// (0x0008ed88) listscroll_cf0_pane

0x1c46,	// (0x0008ed93) main_cf0_pane_g1

0xb618,	// (0x00098765) main_cf0_pane_t1_ParamLimits

0xb618,	// (0x00098765) main_cf0_pane_t1

0xb62c,	// (0x00098779) main_cf0_pane_t2_ParamLimits

0xb62c,	// (0x00098779) main_cf0_pane_t2

0x0001,

0xfd64,	// (0x0009ceb1) main_cf0_pane_t_ParamLimits

0xfd64,	// (0x0009ceb1) main_cf0_pane_t

0x1c58,	// (0x0008eda5) scroll_pane_cp11

0xb640,	// (0x0009878d) cf0_flow_pane_g1

0xb648,	// (0x00098795) cf0_flow_pane_g2

0x0001,

0xfd69,	// (0x0009ceb6) cf0_flow_pane_g

0xb650,	// (0x0009879d) cf0_flow_pane_t1

0x038f,	// (0x0008d4dc) main_call6_pane

0x038f,	// (0x0008d4dc) main_calllock_pane

0xb65e,	// (0x000987ab) call6_btn_grp_pane_ParamLimits

0xb65e,	// (0x000987ab) call6_btn_grp_pane

0xb66b,	// (0x000987b8) call6_pane_g1_ParamLimits

0xb66b,	// (0x000987b8) call6_pane_g1

0xb67b,	// (0x000987c8) popup_call6_1st_window_ParamLimits

0xb67b,	// (0x000987c8) popup_call6_1st_window

0xb68b,	// (0x000987d8) popup_call6_2nd_window_ParamLimits

0xb68b,	// (0x000987d8) popup_call6_2nd_window

0xb69b,	// (0x000987e8) cell_call6_btn_pane_ParamLimits

0xb69b,	// (0x000987e8) cell_call6_btn_pane

0x1f95,	// (0x0008f0e2) bg_popup_call2_in_pane_cp03

0x1c63,	// (0x0008edb0) popup_call6_1st_window_g1

0x1c6b,	// (0x0008edb8) popup_call6_1st_window_g2

0x1c73,	// (0x0008edc0) popup_call6_1st_window_g3

0x0002,

0xfd6e,	// (0x0009cebb) popup_call6_1st_window_g

0x1c7b,	// (0x0008edc8) popup_call6_1st_window_t1

0x1c8a,	// (0x0008edd7) popup_call6_1st_window_t2

0x1c9a,	// (0x0008ede7) popup_call6_1st_window_t3

0x0002,

0xfd75,	// (0x0009cec2) popup_call6_1st_window_t

0x1f95,	// (0x0008f0e2) bg_popup_call2_in_pane_cp04

0x1caa,	// (0x0008edf7) popup_call6_2nd_window_g1

0x1cb2,	// (0x0008edff) popup_call6_2nd_window_g2

0x1cba,	// (0x0008ee07) popup_call6_2nd_window_g3

0x0002,

0xfd7c,	// (0x0009cec9) popup_call6_2nd_window_g

0x1cc2,	// (0x0008ee0f) popup_call6_2nd_window_t1

0x4379,	// (0x000914c6) bg_button_pane_cp15

0xb6ac,	// (0x000987f9) cell_call6_btn_pane_g1

0xb6b5,	// (0x00098802) cell_call6_btn_pane_t1

0xb6c4,	// (0x00098811) listscroll_wgtman_pane_ParamLimits

0xb6c4,	// (0x00098811) listscroll_wgtman_pane

0xb6e0,	// (0x0009882d) wgtman_btn_pane_ParamLimits

0xb6e0,	// (0x0009882d) wgtman_btn_pane

0x2d84,	// (0x0008fed1) aid_scroll_copy1

0x1cda,	// (0x0008ee27) list_wgtman_pane

0xb715,	// (0x00098862) wgtman_btn_pane_g1_ParamLimits

0xb715,	// (0x00098862) wgtman_btn_pane_g1

0xb73d,	// (0x0009888a) wgtman_btn_pane_t1_ParamLimits

0xb73d,	// (0x0009888a) wgtman_btn_pane_t1

0x1ce4,	// (0x0008ee31) wgtman_btn_pane_t2_ParamLimits

0x1ce4,	// (0x0008ee31) wgtman_btn_pane_t2

0x0001,

0xfd83,	// (0x0009ced0) wgtman_btn_pane_t_ParamLimits

0xfd83,	// (0x0009ced0) wgtman_btn_pane_t

0xb774,	// (0x000988c1) listrow_wgtman_pane_ParamLimits

0xb774,	// (0x000988c1) listrow_wgtman_pane

0xb78b,	// (0x000988d8) listrow_wgtman_pane_g1

0xb798,	// (0x000988e5) listrow_wgtman_pane_g2

0x0001,

0xfd88,	// (0x0009ced5) listrow_wgtman_pane_g

0xb7b6,	// (0x00098903) listrow_wgtman_pane_t1

0xb7ce,	// (0x0009891b) listrow_wgtman_pane_t2

0x0001,

0xfd8d,	// (0x0009ceda) listrow_wgtman_pane_t

0xb7f4,	// (0x00098941) wait_bar_pane_cp09

0x1cfb,	// (0x0008ee48) main_calllock_btn_pane

0x1d05,	// (0x0008ee52) main_calllock_pane_g1

0x038f,	// (0x0008d4dc) bg_button_pane_cp17

0x1cd1,	// (0x0008ee1e) main_calllock_btn_pane_g1

0x1d11,	// (0x0008ee5e) main_calllock_btn_pane_t1

0x038f,	// (0x0008d4dc) main_dialer3_pane

0x038f,	// (0x0008d4dc) main_fmrd2_pane

0x1d99,	// (0x0008eee6) main_fs_bigclock_unlock_btn_pane_g1

0xb80e,	// (0x0009895b) main_fs_bigclock_unlock_btn_pane_t1

0xb81c,	// (0x00098969) area_fmrd2_info_pane_ParamLimits

0xb81c,	// (0x00098969) area_fmrd2_info_pane

0xb828,	// (0x00098975) area_fmrd2_visual_pane_ParamLimits

0xb828,	// (0x00098975) area_fmrd2_visual_pane

0xb836,	// (0x00098983) fmrd2_indi_pane_ParamLimits

0xb836,	// (0x00098983) fmrd2_indi_pane

0xb843,	// (0x00098990) area_fmrd2_visual_pane_g1

0xb84b,	// (0x00098998) area_fmrd2_visual_pane_t1

0xb85b,	// (0x000989a8) area_fmrd2_visual_pane_t2

0xb86b,	// (0x000989b8) area_fmrd2_visual_pane_t3

0x0002,

0xfd97,	// (0x0009cee4) area_fmrd2_visual_pane_t

0xb87b,	// (0x000989c8) area_fmrd2_info_pane_g1

0xb883,	// (0x000989d0) area_fmrd2_info_pane_t1

0xb893,	// (0x000989e0) area_fmrd2_info_pane_t2

0xb8a3,	// (0x000989f0) area_fmrd2_info_pane_t3

0xb8b3,	// (0x00098a00) area_fmrd2_info_pane_t4

0x0003,

0xfd9e,	// (0x0009ceeb) area_fmrd2_info_pane_t

0xb8c3,	// (0x00098a10) fmrd2_indi_pane_t1

0xb8d3,	// (0x00098a20) fmrd2_indi_pane_t2

0xb8e3,	// (0x00098a30) fmrd2_indi_pane_t3

0x0002,

0xfda7,	// (0x0009cef4) fmrd2_indi_pane_t

0xa7cf,	// (0x0009791c) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xa7cf,	// (0x0009791c) list_single_fs_bigclock_indicator_pane_g5

0xa884,	// (0x000979d1) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xa884,	// (0x000979d1) list_single_fs_bigclock_indicator_pane_t5

0xaff1,	// (0x0009813e) aid_cell_bcale_month_pane_ParamLimits

0xaff1,	// (0x0009813e) aid_cell_bcale_month_pane

0xb00f,	// (0x0009815c) bcale_month_pane_ParamLimits

0xb00f,	// (0x0009815c) bcale_month_pane

0xb02d,	// (0x0009817a) bcale_preview_pane_ParamLimits

0xb02d,	// (0x0009817a) bcale_preview_pane

0x1acc,	// (0x0008ec19) list_single_fs_bigclock_pane_t1_ParamLimits

0x1aeb,	// (0x0008ec38) list_single_fs_bigclock_pane_t2_ParamLimits

0x1aeb,	// (0x0008ec38) list_single_fs_bigclock_pane_t2

0x0001,

0xfd22,	// (0x0009ce6f) list_single_fs_bigclock_pane_t_ParamLimits

0xfd22,	// (0x0009ce6f) list_single_fs_bigclock_pane_t

0xb806,	// (0x00098953) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd92,	// (0x0009cedf) main_fs_bigclock_unlock_btn_pane_g

0xb8f3,	// (0x00098a40) aid_dia3_key_size_ParamLimits

0xb8f3,	// (0x00098a40) aid_dia3_key_size

0xb8ff,	// (0x00098a4c) aid_dia3_listrow_size_ParamLimits

0xb8ff,	// (0x00098a4c) aid_dia3_listrow_size

0xb90f,	// (0x00098a5c) dia3_keypad_fun_pane_ParamLimits

0xb90f,	// (0x00098a5c) dia3_keypad_fun_pane

0xb91f,	// (0x00098a6c) dia3_keypad_num_pane_ParamLimits

0xb91f,	// (0x00098a6c) dia3_keypad_num_pane

0xb92f,	// (0x00098a7c) dia3_listscroll_pane_ParamLimits

0xb92f,	// (0x00098a7c) dia3_listscroll_pane

0xb93d,	// (0x00098a8a) dia3_numentry_pane_ParamLimits

0xb93d,	// (0x00098a8a) dia3_numentry_pane

0x1d20,	// (0x0008ee6d) dia3_list_pane

0xb94b,	// (0x00098a98) scroll_pane_cp12

0x038f,	// (0x0008d4dc) bg_dia3_numentry_pane

0xb956,	// (0x00098aa3) dia3_numentry_pane_t1

0xb965,	// (0x00098ab2) cell_dia3_key_num_pane

0xb96d,	// (0x00098aba) cell_dia3_key0_fun_pane_ParamLimits

0xb96d,	// (0x00098aba) cell_dia3_key0_fun_pane

0xb97a,	// (0x00098ac7) cell_dia3_key1_fun_pane_ParamLimits

0xb97a,	// (0x00098ac7) cell_dia3_key1_fun_pane

0xb987,	// (0x00098ad4) dia3_listrow_pane

0x0af9,	// (0x0008dc46) bg_dia3_numentry_pane_g1

0x038f,	// (0x0008d4dc) bg_button_pane_cp21

0xb994,	// (0x00098ae1) cell_dia3_key_num_pane_t1

0xb9a2,	// (0x00098aef) cell_dia3_key_num_pane_t2

0xb9b1,	// (0x00098afe) cell_dia3_key_num_pane_t3

0xb9c0,	// (0x00098b0d) cell_dia3_key_num_pane_t4

0x0003,

0xfdae,	// (0x0009cefb) cell_dia3_key_num_pane_t

0x038f,	// (0x0008d4dc) bg_button_pane_cp19

0xb9cf,	// (0x00098b1c) cell_dia3_key0_fun_pane_g1

0x038f,	// (0x0008d4dc) bg_button_pane_cp20

0xb9d7,	// (0x00098b24) cell_dia3_key1_fun_pane_g1

0xb9df,	// (0x00098b2c) area_left_week_number_pane

0xb9f2,	// (0x00098b3f) area_top_day_name_pane

0xba00,	// (0x00098b4d) frame_month_view_pane

0x1d2b,	// (0x0008ee78) grid_month_view_pane

0xba15,	// (0x00098b62) cell_top_day_name_pane_ParamLimits

0xba15,	// (0x00098b62) cell_top_day_name_pane

0xba31,	// (0x00098b7e) cell_area_left_week_number_pane_ParamLimits

0xba31,	// (0x00098b7e) cell_area_left_week_number_pane

0xba52,	// (0x00098b9f) cell_month_view_pane_ParamLimits

0xba52,	// (0x00098b9f) cell_month_view_pane

0x1d39,	// (0x0008ee86) frm_month_g1

0xba7e,	// (0x00098bcb) frm_month_g2

0xba8f,	// (0x00098bdc) frm_month_g3

0xbaa0,	// (0x00098bed) frm_month_g4

0xbab1,	// (0x00098bfe) frm_month_g5

0xbac2,	// (0x00098c0f) frm_month_g6

0xbad5,	// (0x00098c22) frm_month_g7

0x1d46,	// (0x0008ee93) frm_month_g8

0xbae8,	// (0x00098c35) frm_month_g9

0xbaf5,	// (0x00098c42) frm_month_g10

0xbb02,	// (0x00098c4f) frm_month_g11

0xbb0f,	// (0x00098c5c) frm_month_g12

0xbb1c,	// (0x00098c69) frm_month_g13

0xbb2b,	// (0x00098c78) frm_month_g14

0xbb3a,	// (0x00098c87) frm_month_g15

0xbb49,	// (0x00098c96) frm_month_g16

0x000f,

0xfdb7,	// (0x0009cf04) frm_month_g

0x1d53,	// (0x0008eea0) cell_top_day_name_pane_t1

0xbb58,	// (0x00098ca5) cell_area_left_week_number_pane_g1

0xbb67,	// (0x00098cb4) cell_area_left_week_number_pane_t1

0x16d8,	// (0x0008e825) cell_month_view_pane_g1

0xbb7d,	// (0x00098cca) cell_month_view_pane_t1

0x038f,	// (0x0008d4dc) main_fps_pane

0x0ea7,	// (0x0008dff4) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x0ea7,	// (0x0008dff4) cmail_ddmenu_btn02_pane_cp1

0x0ec3,	// (0x0008e010) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x0ec3,	// (0x0008e010) cmail_ddmenu_btn02_pane_cp2

0xb2c7,	// (0x00098414) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb2c7,	// (0x00098414) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcd5,	// (0x0009ce22) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcd5,	// (0x0009ce22) cmail_ddmenu_btn02_pane_g

0xb2e5,	// (0x00098432) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb2e5,	// (0x00098432) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcda,	// (0x0009ce27) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcda,	// (0x0009ce27) cmail_ddmenu_btn02_pane_t

0xbb93,	// (0x00098ce0) fps_text_pane_ParamLimits

0xbb93,	// (0x00098ce0) fps_text_pane

0xbba0,	// (0x00098ced) main_fps_pane_g1_ParamLimits

0xbba0,	// (0x00098ced) main_fps_pane_g1

0xbbac,	// (0x00098cf9) wait_bar_pane_cp010_ParamLimits

0xbbac,	// (0x00098cf9) wait_bar_pane_cp010

0xbbb8,	// (0x00098d05) fps_text_pane_t1_ParamLimits

0xbbb8,	// (0x00098d05) fps_text_pane_t1

0x89df,	// (0x00095b2c) cam4_image_uncrop_pane_g1

0x89e8,	// (0x00095b35) cam4_image_uncrop_pane_g2

0x89f1,	// (0x00095b3e) cam4_image_uncrop_pane_g3

0x89fa,	// (0x00095b47) cam4_image_uncrop_pane_g4

0x0003,

0xf81b,	// (0x0009c968) cam4_image_uncrop_pane_g

0xb987,	// (0x00098ad4) dia3_listrow_pane_ParamLimits

0x038f,	// (0x0008d4dc) main_phob2_pane

0xadca,	// (0x00097f17) cell_tport_appsw_pane_cp02_ParamLimits

0xadca,	// (0x00097f17) cell_tport_appsw_pane_cp02

0xadd9,	// (0x00097f26) cell_tport_appsw_pane_cp03_ParamLimits

0xadd9,	// (0x00097f26) cell_tport_appsw_pane_cp03

0x038f,	// (0x0008d4dc) phob2_contact_card_pane

0x038f,	// (0x0008d4dc) phob2_listscroll_pane

0x1d66,	// (0x0008eeb3) phob2_list_pane

0x1d6e,	// (0x0008eebb) scroll_pane_cp034

0xbbd1,	// (0x00098d1e) phob2_cc_data_pane_ParamLimits

0xbbd1,	// (0x00098d1e) phob2_cc_data_pane

0xbbe8,	// (0x00098d35) phob2_cc_listscroll_pane_ParamLimits

0xbbe8,	// (0x00098d35) phob2_cc_listscroll_pane

0xbc04,	// (0x00098d51) list_double_large_graphic_phob2_pane_ParamLimits

0xbc04,	// (0x00098d51) list_double_large_graphic_phob2_pane

0xbc18,	// (0x00098d65) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xbc18,	// (0x00098d65) list_double_large_graphic_phob2_pane_g1

0xbc25,	// (0x00098d72) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xbc25,	// (0x00098d72) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdd8,	// (0x0009cf25) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdd8,	// (0x0009cf25) list_double_large_graphic_phob2_pane_g

0xbc4b,	// (0x00098d98) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xbc4b,	// (0x00098d98) list_double_large_graphic_phob2_pane_t1

0xbc60,	// (0x00098dad) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xbc60,	// (0x00098dad) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfde1,	// (0x0009cf2e) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfde1,	// (0x0009cf2e) list_double_large_graphic_phob2_pane_t

0x038f,	// (0x0008d4dc) list_highlight_pane_cp024

0xbc75,	// (0x00098dc2) phob2_cc_button_pane

0xbc7f,	// (0x00098dcc) phob2_cc_data_pane_g1_ParamLimits

0xbc7f,	// (0x00098dcc) phob2_cc_data_pane_g1

0xbc92,	// (0x00098ddf) phob2_cc_data_pane_g2_ParamLimits

0xbc92,	// (0x00098ddf) phob2_cc_data_pane_g2

0x0001,

0xfde6,	// (0x0009cf33) phob2_cc_data_pane_g_ParamLimits

0xfde6,	// (0x0009cf33) phob2_cc_data_pane_g

0xbca6,	// (0x00098df3) phob2_cc_data_pane_t1_ParamLimits

0xbca6,	// (0x00098df3) phob2_cc_data_pane_t1

0xbcc7,	// (0x00098e14) phob2_cc_data_pane_t2_ParamLimits

0xbcc7,	// (0x00098e14) phob2_cc_data_pane_t2

0xbce8,	// (0x00098e35) phob2_cc_data_pane_t3_ParamLimits

0xbce8,	// (0x00098e35) phob2_cc_data_pane_t3

0x0002,

0xfdeb,	// (0x0009cf38) phob2_cc_data_pane_t_ParamLimits

0xfdeb,	// (0x0009cf38) phob2_cc_data_pane_t

0x1d76,	// (0x0008eec3) phob2_cc_list_pane_ParamLimits

0x1d76,	// (0x0008eec3) phob2_cc_list_pane

0x048c,	// (0x0008d5d9) scroll_pane_cp035_ParamLimits

0x048c,	// (0x0008d5d9) scroll_pane_cp035

0x1093,	// (0x0008e1e0) bg_button_pane_cp033

0xbd09,	// (0x00098e56) phob2_cc_button_pane_g1

0xbd15,	// (0x00098e62) phob2_cc_button_pane_t1

0xbd2a,	// (0x00098e77) phob2_cc_button_pane_t2

0x0001,

0xfdf2,	// (0x0009cf3f) phob2_cc_button_pane_t

0xbd3c,	// (0x00098e89) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xbd3c,	// (0x00098e89) list_double_large_graphic_phob2_cc_pane

0xbd89,	// (0x00098ed6) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xbd89,	// (0x00098ed6) list_double_large_graphic_phob2_cc_pane_g1

0xbd9a,	// (0x00098ee7) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xbd9a,	// (0x00098ee7) list_double_large_graphic_phob2_cc_pane_g2

0xbda9,	// (0x00098ef6) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xbda9,	// (0x00098ef6) list_double_large_graphic_phob2_cc_pane_g3

0xbdb8,	// (0x00098f05) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xbdb8,	// (0x00098f05) list_double_large_graphic_phob2_cc_pane_g4

0xbdc9,	// (0x00098f16) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xbdc9,	// (0x00098f16) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdf7,	// (0x0009cf44) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdf7,	// (0x0009cf44) list_double_large_graphic_phob2_cc_pane_g

0xbdd8,	// (0x00098f25) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xbdd8,	// (0x00098f25) list_double_large_graphic_phob2_cc_pane_t1

0xbe01,	// (0x00098f4e) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xbe01,	// (0x00098f4e) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe02,	// (0x0009cf4f) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe02,	// (0x0009cf4f) list_double_large_graphic_phob2_cc_pane_t

0x1d82,	// (0x0008eecf) list_highlight_pane_cp025_ParamLimits

0x1d82,	// (0x0008eecf) list_highlight_pane_cp025

0x1093,	// (0x0008e1e0) bg_button_pane_cp033_ParamLimits

0xbd09,	// (0x00098e56) phob2_cc_button_pane_g1_ParamLimits

0xbd15,	// (0x00098e62) phob2_cc_button_pane_t1_ParamLimits

0xbd2a,	// (0x00098e77) phob2_cc_button_pane_t2_ParamLimits

0xfdf2,	// (0x0009cf3f) phob2_cc_button_pane_t_ParamLimits

0x436d,	// (0x000914ba) popup_wgtman_window

0xec01,	// (0x0009bd4e) scroll_pane_cp038

0xb6fd,	// (0x0009884a) wgtman_btn_pane_cp_01_ParamLimits

0xb6fd,	// (0x0009884a) wgtman_btn_pane_cp_01

0x1d90,	// (0x0008eedd) wgtman_content_pane

0x24c0,	// (0x0008f60d) wgtman_heading_pane

0x038f,	// (0x0008d4dc) bg_heading_pane_cp02

0x24c9,	// (0x0008f616) wgtman_heading_pane_g1

0x24d1,	// (0x0008f61e) wgtman_heading_pane_t1

0x24df,	// (0x0008f62c) scroll_pane_cp036

0x24e7,	// (0x0008f634) wgtman_list_pane

0x172a,	// (0x0008e877) wgtman_list_pane_t1_ParamLimits

0x172a,	// (0x0008e877) wgtman_list_pane_t1

0x893c,	// (0x00095a89) cam4_grid_pane

0x9643,	// (0x00096790) bg_button_pane_cp015_ParamLimits

0x9658,	// (0x000967a5) bg_button_pane_cp016_ParamLimits

0x9664,	// (0x000967b1) bg_button_pane_cp017_ParamLimits

0x96bd,	// (0x0009680a) popup_vitu2_query_window_g3_ParamLimits

0x96bd,	// (0x0009680a) popup_vitu2_query_window_g3

0x975e,	// (0x000968ab) popup_vitu2_query_window_t6_ParamLimits

0x975e,	// (0x000968ab) popup_vitu2_query_window_t6

0x9789,	// (0x000968d6) popup_vitu2_query_window_t7_ParamLimits

0x9789,	// (0x000968d6) popup_vitu2_query_window_t7

0x1716,	// (0x0008e863) cam4_grid_pane_g1

0x171f,	// (0x0008e86c) cam4_grid_pane_g2

0x24ef,	// (0x0008f63c) cam4_grid_pane_g3

0x24f8,	// (0x0008f645) cam4_grid_pane_g4

0x0003,

0xfe07,	// (0x0009cf54) cam4_grid_pane_g

0x4f61,	// (0x000920ae) aid_placing_vt_slider_lsc_ParamLimits

0x5294,	// (0x000923e1) vidtel_button_pane_ParamLimits

0x5294,	// (0x000923e1) vidtel_button_pane

0x038f,	// (0x0008d4dc) bg_button_pane_cp034

0x2503,	// (0x0008f650) vidtel_button_pane_g1

0x250b,	// (0x0008f658) vidtel_button_pane_t1

0xed18,	// (0x0009be65) aid_size_vtel_slider_touch

0x048c,	// (0x0008d5d9) scroll_pane_cp039

0xa4f1,	// (0x0009763e) ncim_query_button_pane_cp01_ParamLimits

0xa510,	// (0x0009765d) ncimui_query_pane_g1_ParamLimits

0x1093,	// (0x0008e1e0) input_focus_pane_cp012_ParamLimits

0x0b37,	// (0x0008dc84) ncim_query_entry_pane_t1_ParamLimits

0x048c,	// (0x0008d5d9) scroll_pane_cp039_ParamLimits

0x6421,	// (0x0009356e) navi_pane_bcale_mc_g1

0x6429,	// (0x00093576) navi_pane_bcale_mc_t1

0x0ef9,	// (0x0008e046) main_sp_fs_email_pane_g1

0x0f05,	// (0x0008e052) main_sp_fs_email_pane_g2

0x0001,

0xfc05,	// (0x0009cd52) main_sp_fs_email_pane_g

0x182c,	// (0x0008e979) list_single_cale_mrui_row_pane_g3_ParamLimits

0x182c,	// (0x0008e979) list_single_cale_mrui_row_pane_g3

0xb305,	// (0x00098452) list_single_recal_day_pane_g5_event_pane

0x0322,	// (0x0008d46f) list_single_recal_day_pane_g7

0x2521,	// (0x0008f66e) list_recal_day_event_pane_cp01

0x252a,	// (0x0008f677) list_recal_vselct_arw_lo_pane_cp01

0x2532,	// (0x0008f67f) list_recal_vselct_arw_up_pane_cp01

0x253a,	// (0x0008f687) list_recal_vselct_pane_cp01

0xed3a,	// (0x0009be87) list_recal_day_event_pane_cp01_g1

0x0357,	// (0x0008d4a4) list_recal_day_event_pane_cp01_t1

0x032a,	// (0x0008d477) list_single_recal_day_pane_t1_ParamLimits

0x033c,	// (0x0008d489) list_single_recal_day_pane_t2_ParamLimits

0xfcea,	// (0x0009ce37) list_single_recal_day_pane_t_ParamLimits

0x166b,	// (0x0008e7b8) bg_notes_pane_ParamLimits

0x1dd5,	// (0x0008ef22) list_notes_pane_ParamLimits

0x447e,	// (0x000915cb) scroll_pane_cp06_ParamLimits

0x1df7,	// (0x0008ef44) main_notes_pane_ParamLimits

0x1093,	// (0x0008e1e0) main_welc_pane

0xbe4c,	// (0x00098f99) main_welc_body_pane_ParamLimits

0xbe4c,	// (0x00098f99) main_welc_body_pane

0xbe67,	// (0x00098fb4) main_welc_opti_pane_ParamLimits

0xbe67,	// (0x00098fb4) main_welc_opti_pane

0xbece,	// (0x0009901b) main_welc_pane_t1_ParamLimits

0xbece,	// (0x0009901b) main_welc_pane_t1

0xc074,	// (0x000991c1) main_welc_body_row_pane_ParamLimits

0xc074,	// (0x000991c1) main_welc_body_row_pane

0x0472,	// (0x0008d5bf) main_welc_opti_row_pane_ParamLimits

0x0472,	// (0x0008d5bf) main_welc_opti_row_pane

0x2554,	// (0x0008f6a1) main_welc_opti_row_pane_g1

0xc08e,	// (0x000991db) main_welc_opti_row_pane_t1

0x255c,	// (0x0008f6a9) main_welc_body_row_pane_t1

0x1ba3,	// (0x0008ecf0) popup_notif_wgt_heading_pane

0x1bbd,	// (0x0008ed0a) aid_size_list_notif_wgt_del_ParamLimits

0x1bca,	// (0x0008ed17) list_notif_wgt_row_pane_g1_ParamLimits

0x1bd6,	// (0x0008ed23) list_notif_wgt_row_pane_g2_ParamLimits

0x1be5,	// (0x0008ed32) list_notif_wgt_row_pane_g3_ParamLimits

0xfd51,	// (0x0009ce9e) list_notif_wgt_row_pane_g_ParamLimits

0x1bf2,	// (0x0008ed3f) list_notif_wgt_row_pane_t1_ParamLimits

0x1c08,	// (0x0008ed55) list_notif_wgt_row_pane_t2_ParamLimits

0x1c1a,	// (0x0008ed67) list_notif_wgt_row_pane_t3_ParamLimits

0xfd58,	// (0x0009cea5) list_notif_wgt_row_pane_t_ParamLimits

0xb78b,	// (0x000988d8) listrow_wgtman_pane_g1_ParamLimits

0xb798,	// (0x000988e5) listrow_wgtman_pane_g2_ParamLimits

0xfd88,	// (0x0009ced5) listrow_wgtman_pane_g_ParamLimits

0xb7b6,	// (0x00098903) listrow_wgtman_pane_t1_ParamLimits

0xb7ce,	// (0x0009891b) listrow_wgtman_pane_t2_ParamLimits

0xfd8d,	// (0x0009ceda) listrow_wgtman_pane_t_ParamLimits

0xb7f4,	// (0x00098941) wait_bar_pane_cp09_ParamLimits

0x038f,	// (0x0008d4dc) bg_popup_heading_pane_cp02

0x256b,	// (0x0008f6b8) popup_notif_wgt_heading_pane_g1

0x2573,	// (0x0008f6c0) popup_notif_wgt_heading_pane_t1

0x038f,	// (0x0008d4dc) main_vids_pane

0x038f,	// (0x0008d4dc) vids_listscroll_pane

0xc09d,	// (0x000991ea) scroll_pane_cp040

0x038f,	// (0x0008d4dc) vids_list_pane

0xc0a8,	// (0x000991f5) vids_list_double_pane_ParamLimits

0xc0a8,	// (0x000991f5) vids_list_double_pane

0xc0bc,	// (0x00099209) vids_list_double_pane_g1

0xc0c5,	// (0x00099212) vids_list_double_pane_t1

0xc0d5,	// (0x00099222) vids_list_double_pane_t2

0x0001,

0xfe26,	// (0x0009cf73) vids_list_double_pane_t

0x7002,	// (0x0009414f) main_ncimui_pane_ParamLimits

0xa332,	// (0x0009747f) main_ncimui_pane_g1_ParamLimits

0xa340,	// (0x0009748d) main_ncimui_pane_g2_ParamLimits

0xa340,	// (0x0009748d) main_ncimui_pane_g2

0x0001,

0xfb06,	// (0x0009cc53) main_ncimui_pane_g_ParamLimits

0xfb06,	// (0x0009cc53) main_ncimui_pane_g

0xbe82,	// (0x00098fcf) main_welc_pane_g1_ParamLimits

0xbe82,	// (0x00098fcf) main_welc_pane_g1

0xbe8e,	// (0x00098fdb) main_welc_pane_g2_ParamLimits

0xbe8e,	// (0x00098fdb) main_welc_pane_g2

0x0003,

0xfe10,	// (0x0009cf5d) main_welc_pane_g_ParamLimits

0xfe10,	// (0x0009cf5d) main_welc_pane_g

0x166b,	// (0x0008e7b8) listscroll_mce_pane_ParamLimits

0x64eb,	// (0x00093638) wait_bar_pane_cp10

0xde3b,	// (0x0009af88) main_cale_day_pane_ParamLimits

0xde3b,	// (0x0009af88) main_cale_week_pane_ParamLimits

0x166b,	// (0x0008e7b8) main_messa_pane_ParamLimits

0x7db7,	// (0x00094f04) main_clock2_btn_pane_ParamLimits

0x7db7,	// (0x00094f04) main_clock2_btn_pane

0xe620,	// (0x0009b76d) main_clock2_btn_pane_cp01_ParamLimits

0xe620,	// (0x0009b76d) main_clock2_btn_pane_cp01

0x17fd,	// (0x0008e94a) list_cale_mrui_pane_ParamLimits

0x1c50,	// (0x0008ed9d) main_cf0_pane_g2

0x0001,

0xfd5f,	// (0x0009ceac) main_cf0_pane_g

0xb9df,	// (0x00098b2c) area_left_week_number_pane_ParamLimits

0xb9f2,	// (0x00098b3f) area_top_day_name_pane_ParamLimits

0xba00,	// (0x00098b4d) frame_month_view_pane_ParamLimits

0x1d2b,	// (0x0008ee78) grid_month_view_pane_ParamLimits

0x1d39,	// (0x0008ee86) frm_month_g1_ParamLimits

0xba7e,	// (0x00098bcb) frm_month_g2_ParamLimits

0xba8f,	// (0x00098bdc) frm_month_g3_ParamLimits

0xbaa0,	// (0x00098bed) frm_month_g4_ParamLimits

0xbab1,	// (0x00098bfe) frm_month_g5_ParamLimits

0xbac2,	// (0x00098c0f) frm_month_g6_ParamLimits

0xbad5,	// (0x00098c22) frm_month_g7_ParamLimits

0x1d46,	// (0x0008ee93) frm_month_g8_ParamLimits

0xbae8,	// (0x00098c35) frm_month_g9_ParamLimits

0xbaf5,	// (0x00098c42) frm_month_g10_ParamLimits

0xbb02,	// (0x00098c4f) frm_month_g11_ParamLimits

0xbb0f,	// (0x00098c5c) frm_month_g12_ParamLimits

0xbb1c,	// (0x00098c69) frm_month_g13_ParamLimits

0xbb2b,	// (0x00098c78) frm_month_g14_ParamLimits

0xbb3a,	// (0x00098c87) frm_month_g15_ParamLimits

0xbb49,	// (0x00098c96) frm_month_g16_ParamLimits

0xfdb7,	// (0x0009cf04) frm_month_g_ParamLimits

0x1d53,	// (0x0008eea0) cell_top_day_name_pane_t1_ParamLimits

0xbb58,	// (0x00098ca5) cell_area_left_week_number_pane_g1_ParamLimits

0xbb67,	// (0x00098cb4) cell_area_left_week_number_pane_t1_ParamLimits

0x16d8,	// (0x0008e825) cell_month_view_pane_g1_ParamLimits

0xbb7d,	// (0x00098cca) cell_month_view_pane_t1_ParamLimits

0x1663,	// (0x0008e7b0) main_clock2_btn_pane_g1

0x2581,	// (0x0008f6ce) main_clock2_btn_pane_t1

0x1093,	// (0x0008e1e0) listscroll_cmail_pane_ParamLimits

0x0ef9,	// (0x0008e046) main_sp_fs_email_pane_g1_ParamLimits

0x0f05,	// (0x0008e052) main_sp_fs_email_pane_g2_ParamLimits

0xfc05,	// (0x0009cd52) main_sp_fs_email_pane_g_ParamLimits

0x192d,	// (0x0008ea7a) list_recal_day_pane_ParamLimits

0x193e,	// (0x0008ea8b) mian_recal_day_pane_t1

0xaca8,	// (0x00097df5) list_single_dyc_row_text_pane_t4_ParamLimits

0xaca8,	// (0x00097df5) list_single_dyc_row_text_pane_t4

0xaced,	// (0x00097e3a) list_single_dyc_row_text_pane_t5_ParamLimits

0xaced,	// (0x00097e3a) list_single_dyc_row_text_pane_t5

0x00fe,	// (0x0008d24b) list_single_dyc_row_text_pane_t6_ParamLimits

0x00fe,	// (0x0008d24b) list_single_dyc_row_text_pane_t6

0x604a,	// (0x00093197) aid_mgn_list_cale_time_pane

0x7002,	// (0x0009414f) main_gallery2_pane_ParamLimits

0xe634,	// (0x0009b781) main_clock2_pane_cp01_t1

0xe642,	// (0x0009b78f) main_clock2_pane_cp01_t3

0x0001,

0xf6fc,	// (0x0009c849) main_clock2_pane_cp01_t

0x497a,	// (0x00091ac7) cale_week_scroll_pane_g16_ParamLimits

0x497a,	// (0x00091ac7) cale_week_scroll_pane_g16

0x1f95,	// (0x0008f0e2) vorec_slider_pane

0x250b,	// (0x0008f658) vidtel_button_pane_t1_ParamLimits

0xb360,	// (0x000984ad) main_fs_bigclock_clock_pane_g1_ParamLimits

0xb360,	// (0x000984ad) main_fs_bigclock_clock_pane_g2_ParamLimits

0xb36f,	// (0x000984bc) main_fs_bigclock_clock_pane_g3_ParamLimits

0xb36f,	// (0x000984bc) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd0d,	// (0x0009ce5a) main_fs_bigclock_clock_pane_g_ParamLimits

0xb37f,	// (0x000984cc) main_fs_bigclock_clock_pane_t1_ParamLimits

0xb394,	// (0x000984e1) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd16,	// (0x0009ce63) main_fs_bigclock_clock_pane_t_ParamLimits

0x7701,	// (0x0009484e) main_mup3_lyrics_pane_ParamLimits

0x7701,	// (0x0009484e) main_mup3_lyrics_pane

0xc10a,	// (0x00099257) main_mup3_lyrics_pane_t1_ParamLimits

0xc10a,	// (0x00099257) main_mup3_lyrics_pane_t1

0x82d7,	// (0x00095424) aid_main_mp4_pane_t1_area

0x82e1,	// (0x0009542e) aid_main_mp4_pane_t2_area

0x83e8,	// (0x00095535) main_mp4_pane_g7_ParamLimits

0x83e8,	// (0x00095535) main_mp4_pane_g7

0x83f4,	// (0x00095541) main_mp4_pane_g8_ParamLimits

0x83f4,	// (0x00095541) main_mp4_pane_g8

0x87f4,	// (0x00095941) aid_call6_pane_g1_size

0xbd68,	// (0x00098eb5) list_double_large_graphic_phob2_other_pane_ParamLimits

0xbd68,	// (0x00098eb5) list_double_large_graphic_phob2_other_pane

0xc131,	// (0x0009927e) list_double_large_graphic_phob2_other_pane_g1

0x038f,	// (0x0008d4dc) list_highlight_pane_cp026

0x1093,	// (0x0008e1e0) main_welc_pane_ParamLimits

0xab03,	// (0x00097c50) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xab03,	// (0x00097c50) main_sp_fs_ctrlbar_pane_g3

0xab1d,	// (0x00097c6a) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xab1d,	// (0x00097c6a) main_sp_fs_ctrlbar_pane_g4

0xab4f,	// (0x00097c9c) toolbar2_fixed_button_pane_cp01

0xab5a,	// (0x00097ca7) toolbar2_fixed_button_pane_cp02

0xab67,	// (0x00097cb4) toolbar2_fixed_button_pane_cp03

0xbe3c,	// (0x00098f89) list_welc_entry_pane_ParamLimits

0xbe3c,	// (0x00098f89) list_welc_entry_pane

0xbe9c,	// (0x00098fe9) main_welc_pane_g3_ParamLimits

0xbe9c,	// (0x00098fe9) main_welc_pane_g3

0xbeec,	// (0x00099039) main_welc_pane_t2_ParamLimits

0xbeec,	// (0x00099039) main_welc_pane_t2

0xbf00,	// (0x0009904d) main_welc_pane_t3_ParamLimits

0xbf00,	// (0x0009904d) main_welc_pane_t3

0x0005,

0xfe19,	// (0x0009cf66) main_welc_pane_t_ParamLimits

0xfe19,	// (0x0009cf66) main_welc_pane_t

0xbffc,	// (0x00099149) welc_button_pane_ParamLimits

0xbffc,	// (0x00099149) welc_button_pane

0xc066,	// (0x000991b3) welc_service_logo_pane_ParamLimits

0xc066,	// (0x000991b3) welc_service_logo_pane

0xc139,	// (0x00099286) list_single_welc_entry_pane_ParamLimits

0xc139,	// (0x00099286) list_single_welc_entry_pane

0xc14a,	// (0x00099297) list_single_welc_entry_pane_g1

0xc152,	// (0x0009929f) list_single_welc_entry_pane_t1

0xc160,	// (0x000992ad) list_single_welc_entry_pane_t2

0x0001,

0xfe2b,	// (0x0009cf78) list_single_welc_entry_pane_t

0x038f,	// (0x0008d4dc) bg_button_pane_cp035

0x258f,	// (0x0008f6dc) welc_button_pane_t1

0xc16e,	// (0x000992bb) welc_service_logo_pane_g1

0xc177,	// (0x000992c4) welc_service_logo_pane_g2

0x0001,

0xfe30,	// (0x0009cf7d) welc_service_logo_pane_g

0x4379,	// (0x000914c6) main_int_radio_pane

0x09d5,	// (0x0008db22) list_single_fs_dyc_pane_g1

0xbc31,	// (0x00098d7e) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xbc31,	// (0x00098d7e) list_double_large_graphic_phob2_pane_g3

0xbc3d,	// (0x00098d8a) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xbc3d,	// (0x00098d8a) list_double_large_graphic_phob2_pane_g4

0xc180,	// (0x000992cd) main_int_radio1_pane_ParamLimits

0xc180,	// (0x000992cd) main_int_radio1_pane

0x259d,	// (0x0008f6ea) find_pane_cp02

0xc196,	// (0x000992e3) input_focus_pane_cp12_ParamLimits

0xc196,	// (0x000992e3) input_focus_pane_cp12

0xc1a2,	// (0x000992ef) input_focus_pane_cp13_ParamLimits

0xc1a2,	// (0x000992ef) input_focus_pane_cp13

0xc1ba,	// (0x00099307) input_focus_pane_cp14_ParamLimits

0xc1ba,	// (0x00099307) input_focus_pane_cp14

0x25a6,	// (0x0008f6f3) int_radio1_listscroll_pane

0xc1d2,	// (0x0009931f) main_int_radio1_pane_g1_ParamLimits

0xc1d2,	// (0x0009931f) main_int_radio1_pane_g1

0xc1de,	// (0x0009932b) main_int_radio1_pane_t1_ParamLimits

0xc1de,	// (0x0009932b) main_int_radio1_pane_t1

0xc1f0,	// (0x0009933d) main_int_radio1_pane_t2_ParamLimits

0xc1f0,	// (0x0009933d) main_int_radio1_pane_t2

0xc204,	// (0x00099351) main_int_radio1_pane_t3_ParamLimits

0xc204,	// (0x00099351) main_int_radio1_pane_t3

0xc218,	// (0x00099365) main_int_radio1_pane_t4_ParamLimits

0xc218,	// (0x00099365) main_int_radio1_pane_t4

0x25b0,	// (0x0008f6fd) main_int_radio1_pane_t5_ParamLimits

0x25b0,	// (0x0008f6fd) main_int_radio1_pane_t5

0xc22f,	// (0x0009937c) main_int_radio1_pane_t6_ParamLimits

0xc22f,	// (0x0009937c) main_int_radio1_pane_t6

0xc241,	// (0x0009938e) main_int_radio1_pane_t7_ParamLimits

0xc241,	// (0x0009938e) main_int_radio1_pane_t7

0xc253,	// (0x000993a0) main_int_radio1_pane_t8_ParamLimits

0xc253,	// (0x000993a0) main_int_radio1_pane_t8

0xc265,	// (0x000993b2) main_int_radio1_pane_t9_ParamLimits

0xc265,	// (0x000993b2) main_int_radio1_pane_t9

0xc277,	// (0x000993c4) main_int_radio1_pane_t10_ParamLimits

0xc277,	// (0x000993c4) main_int_radio1_pane_t10

0xc2a8,	// (0x000993f5) main_int_radio1_pane_t11_ParamLimits

0xc2a8,	// (0x000993f5) main_int_radio1_pane_t11

0xc2d9,	// (0x00099426) main_int_radio1_pane_t12_ParamLimits

0xc2d9,	// (0x00099426) main_int_radio1_pane_t12

0x000b,

0xfe35,	// (0x0009cf82) main_int_radio1_pane_t_ParamLimits

0xfe35,	// (0x0009cf82) main_int_radio1_pane_t

0x1d66,	// (0x0008eeb3) int_radio_list_pane

0x1d6e,	// (0x0008eebb) scroll_pane_cp037

0x25c2,	// (0x0008f70f) list_double_large_graphic_int_radio_pane_ParamLimits

0x25c2,	// (0x0008f70f) list_double_large_graphic_int_radio_pane

0x25d6,	// (0x0008f723) list_double_large_graphic_int_radio_pane_g1

0x0373,	// (0x0008d4c0) list_double_large_graphic_int_radio_pane_t1

0x0381,	// (0x0008d4ce) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe4e,	// (0x0009cf9b) list_double_large_graphic_int_radio_pane_t

0x038f,	// (0x0008d4dc) list_highlight_pane_cp027

0x2544,	// (0x0008f691) main_button_pane_4

0xbea8,	// (0x00098ff5) main_welc_pane_g4_ParamLimits

0xbea8,	// (0x00098ff5) main_welc_pane_g4

0xbf12,	// (0x0009905f) main_welc_pane_t4_ParamLimits

0xbf12,	// (0x0009905f) main_welc_pane_t4

0xbf24,	// (0x00099071) main_welc_pane_t5_ParamLimits

0xbf24,	// (0x00099071) main_welc_pane_t5

0xbf56,	// (0x000990a3) main_welc_pane_t6_ParamLimits

0xbf56,	// (0x000990a3) main_welc_pane_t6

0xc00a,	// (0x00099157) welc_button_pane_2_ParamLimits

0xc00a,	// (0x00099157) welc_button_pane_2

0xc028,	// (0x00099175) welc_button_pane_3_ParamLimits

0xc028,	// (0x00099175) welc_button_pane_3

0x254c,	// (0x0008f699) welc_button_pane_4

0xc048,	// (0x00099195) welc_button_pane_5_ParamLimits

0xc048,	// (0x00099195) welc_button_pane_5

0x40ee,	// (0x0009123b) main_popup_welc_pane

0x25f7,	// (0x0008f744) main_welc_sk_g3

0x2601,	// (0x0008f74e) main_welc_sk_g4

0x260b,	// (0x0008f758) main_welc_sk_t3

0x261b,	// (0x0008f768) main_welc_sk_t4

0x262b,	// (0x0008f778) popup_welc_pane_t4

0x2639,	// (0x0008f786) popup_welc_pane_t5

0x2647,	// (0x0008f794) popup_welc_pane_t6

0x4379,	// (0x000914c6) main_acti_pane

0x038f,	// (0x0008d4dc) main_sso_pane

0xc2f0,	// (0x0009943d) sso_body_pane_ParamLimits

0xc2f0,	// (0x0009943d) sso_body_pane

0xc2ff,	// (0x0009944c) sso_logo_pane_ParamLimits

0xc2ff,	// (0x0009944c) sso_logo_pane

0xc32e,	// (0x0009947b) sso_sk_pane_ParamLimits

0xc32e,	// (0x0009947b) sso_sk_pane

0x2689,	// (0x0008f7d6) main_sso_logo_pane_g1

0xc33b,	// (0x00099488) sso_sk_pane_t1_ParamLimits

0xc33b,	// (0x00099488) sso_sk_pane_t1

0xc34f,	// (0x0009949c) sso_sk_pane_t2_ParamLimits

0xc34f,	// (0x0009949c) sso_sk_pane_t2

0x0001,

0xfe53,	// (0x0009cfa0) sso_sk_pane_t_ParamLimits

0xfe53,	// (0x0009cfa0) sso_sk_pane_t

0x2694,	// (0x0008f7e1) aid_sso_gap

0x269d,	// (0x0008f7ea) aid_sso_txt1

0x26a7,	// (0x0008f7f4) aid_sso_txt2

0x26b1,	// (0x0008f7fe) aid_sso_txt3

0x0002,

0xfe58,	// (0x0009cfa5) aid_sso_txt

0x26bb,	// (0x0008f808) aid_sso_widget

0xc3ac,	// (0x000994f9) sso_btn_pane_ParamLimits

0xc3ac,	// (0x000994f9) sso_btn_pane

0xc420,	// (0x0009956d) sso_option_pane_ParamLimits

0xc420,	// (0x0009956d) sso_option_pane

0xc4d2,	// (0x0009961f) sso_query_pane_ParamLimits

0xc4d2,	// (0x0009961f) sso_query_pane

0xc522,	// (0x0009966f) sso_query_pane_cp01_ParamLimits

0xc522,	// (0x0009966f) sso_query_pane_cp01

0xc57a,	// (0x000996c7) sso_t_hdr_pane_ParamLimits

0xc57a,	// (0x000996c7) sso_t_hdr_pane

0xc59e,	// (0x000996eb) sso_t_nml_pane_ParamLimits

0xc59e,	// (0x000996eb) sso_t_nml_pane

0x26c5,	// (0x0008f812) sso_t_sub_pane

0xc30c,	// (0x00099459) sso_popup_window_ParamLimits

0xc30c,	// (0x00099459) sso_popup_window

0xc361,	// (0x000994ae) sso_apps_pane_ParamLimits

0xc361,	// (0x000994ae) sso_apps_pane

0xc384,	// (0x000994d1) sso_body_pane_g1

0xc38c,	// (0x000994d9) sso_body_pane_t1

0xc39c,	// (0x000994e9) sso_body_pane_t2

0x0001,

0xfe5f,	// (0x0009cfac) sso_body_pane_t

0xc3f0,	// (0x0009953d) sso_btn_pane_cp01_ParamLimits

0xc3f0,	// (0x0009953d) sso_btn_pane_cp01

0xc4a4,	// (0x000995f1) sso_prog_pane_ParamLimits

0xc4a4,	// (0x000995f1) sso_prog_pane

0xc5ee,	// (0x0009973b) sso_t_hdr_pane_t1_ParamLimits

0xc5ee,	// (0x0009973b) sso_t_hdr_pane_t1

0x26da,	// (0x0008f827) input_focus_pane_cp10_ParamLimits

0x26da,	// (0x0008f827) input_focus_pane_cp10

0x26ee,	// (0x0008f83b) sso_query_pane_t1_ParamLimits

0x26ee,	// (0x0008f83b) sso_query_pane_t1

0x2701,	// (0x0008f84e) sso_query_pane_t2_ParamLimits

0x2701,	// (0x0008f84e) sso_query_pane_t2

0x271b,	// (0x0008f868) sso_query_pane_t3_ParamLimits

0x271b,	// (0x0008f868) sso_query_pane_t3

0x2745,	// (0x0008f892) sso_query_pane_t4_ParamLimits

0x2745,	// (0x0008f892) sso_query_pane_t4

0x0003,

0xfe64,	// (0x0009cfb1) sso_query_pane_t_ParamLimits

0xfe64,	// (0x0009cfb1) sso_query_pane_t

0x25ee,	// (0x0008f73b) bg_button_pane_cp22

0x25df,	// (0x0008f72c) sso_btn_pane_t1

0xc607,	// (0x00099754) sso_t_nml_pane_t1_ParamLimits

0xc607,	// (0x00099754) sso_t_nml_pane_t1

0x2769,	// (0x0008f8b6) sso_option_row_pane_ParamLimits

0x2769,	// (0x0008f8b6) sso_option_row_pane

0x2776,	// (0x0008f8c3) sso_t_sub_pane_t1_ParamLimits

0x2776,	// (0x0008f8c3) sso_t_sub_pane_t1

0x1093,	// (0x0008e1e0) bg_popup_window_pane_cp11_ParamLimits

0x1093,	// (0x0008e1e0) bg_popup_window_pane_cp11

0x2793,	// (0x0008f8e0) popup_sk_window_cp01_ParamLimits

0x2793,	// (0x0008f8e0) popup_sk_window_cp01

0x27a0,	// (0x0008f8ed) sso_popup_body_pane_ParamLimits

0x27a0,	// (0x0008f8ed) sso_popup_body_pane

0x27ad,	// (0x0008f8fa) scroll_pane_cp21_ParamLimits

0x27ad,	// (0x0008f8fa) scroll_pane_cp21

0x27ba,	// (0x0008f907) sso_popup_body_t_pane_ParamLimits

0x27ba,	// (0x0008f907) sso_popup_body_t_pane

0x27c7,	// (0x0008f914) sso_popup_body_t_hdr_pane_ParamLimits

0x27c7,	// (0x0008f914) sso_popup_body_t_hdr_pane

0xc624,	// (0x00099771) sso_popup_body_t_nml_pane_ParamLimits

0xc624,	// (0x00099771) sso_popup_body_t_nml_pane

0xc642,	// (0x0009978f) sso_popup_body_t_sub_pane_ParamLimits

0xc642,	// (0x0009978f) sso_popup_body_t_sub_pane

0x27d9,	// (0x0008f926) sso_popup_body_t_hdr_pane_t1

0xc665,	// (0x000997b2) sso_popup_body_t_nml_pane_t1_ParamLimits

0xc665,	// (0x000997b2) sso_popup_body_t_nml_pane_t1

0x27e9,	// (0x0008f936) sso_popup_body_t_sub_pane_t1_ParamLimits

0x27e9,	// (0x0008f936) sso_popup_body_t_sub_pane_t1

0x1d99,	// (0x0008eee6) sso_prog_pane_g1

0xc6af,	// (0x000997fc) sso_apps_pane_comp1_ParamLimits

0xc6af,	// (0x000997fc) sso_apps_pane_comp1

0x280e,	// (0x0008f95b) sso_apps_pane_comp1_g1

0x2816,	// (0x0008f963) sso_apps_pane_comp1_t1

0x2832,	// (0x0008f97f) sso_option_row_pane_g1

0x283a,	// (0x0008f987) sso_option_row_pane_t1

0x0f8f,	// (0x0008e0dc) list_cmail_pane_ParamLimits

0x038f,	// (0x0008d4dc) main_call7_pane

0xbe2a,	// (0x00098f77) bg_welc_area_ParamLimits

0xbe2a,	// (0x00098f77) bg_welc_area

0xbf8c,	// (0x000990d9) sso_t_hdr_pane_a_t1_ParamLimits

0xbf8c,	// (0x000990d9) sso_t_hdr_pane_a_t1

0xbfa0,	// (0x000990ed) sso_t_nml_pane_a_t1_ParamLimits

0xbfa0,	// (0x000990ed) sso_t_nml_pane_a_t1

0xbfca,	// (0x00099117) sso_t_sub_pane_a_t1_ParamLimits

0xbfca,	// (0x00099117) sso_t_sub_pane_a_t1

0xc058,	// (0x000991a5) welc_button_pane_cp01_ParamLimits

0xc058,	// (0x000991a5) welc_button_pane_cp01

0x25df,	// (0x0008f72c) sso_btn_pane_t1_copy1

0x25ee,	// (0x0008f73b) welc_button_pane_2_comp1

0x2657,	// (0x0008f7a4) sso_t_hdr_pane_p_t1

0x2667,	// (0x0008f7b4) sso_t_nml_pane_p_t1

0x2677,	// (0x0008f7c4) sso_t_sub_pane_p_t1

0x038f,	// (0x0008d4dc) main_att_pane

0x038f,	// (0x0008d4dc) main_vod_pane

0x26c5,	// (0x0008f812) sso_t_sub_pane_ParamLimits

0x2824,	// (0x0008f971) input_focus_pane_cp10_t1

0x283a,	// (0x0008f987) sso_option_row_pane_t1_ParamLimits

0xc6c4,	// (0x00099811) main_att_body_pane_ParamLimits

0xc6c4,	// (0x00099811) main_att_body_pane

0xc6d8,	// (0x00099825) att_btn_emg_pane_ParamLimits

0xc6d8,	// (0x00099825) att_btn_emg_pane

0xc6f0,	// (0x0009983d) att_btn_pane_ParamLimits

0xc6f0,	// (0x0009983d) att_btn_pane

0xc75c,	// (0x000998a9) att_btn_pane_cp01_ParamLimits

0xc75c,	// (0x000998a9) att_btn_pane_cp01

0xc776,	// (0x000998c3) att_li_srv_pane_ParamLimits

0xc776,	// (0x000998c3) att_li_srv_pane

0xc788,	// (0x000998d5) att_opt_pane_ParamLimits

0xc788,	// (0x000998d5) att_opt_pane

0xc7cc,	// (0x00099919) att_query_pane_ParamLimits

0xc7cc,	// (0x00099919) att_query_pane

0xc83c,	// (0x00099989) att_query_pane_cp01_ParamLimits

0xc83c,	// (0x00099989) att_query_pane_cp01

0xc880,	// (0x000999cd) att_t_hdr_pane_ParamLimits

0xc880,	// (0x000999cd) att_t_hdr_pane

0xc8e8,	// (0x00099a35) att_t_nml_pane_ParamLimits

0xc8e8,	// (0x00099a35) att_t_nml_pane

0xc95a,	// (0x00099aa7) att_t_nml_pane_cp01_ParamLimits

0xc95a,	// (0x00099aa7) att_t_nml_pane_cp01

0xc97e,	// (0x00099acb) att_t_nmlb_pane_ParamLimits

0xc97e,	// (0x00099acb) att_t_nmlb_pane

0xc9e2,	// (0x00099b2f) att_term_pane_ParamLimits

0xc9e2,	// (0x00099b2f) att_term_pane

0xca26,	// (0x00099b73) main_att_body_pane_g1_ParamLimits

0xca26,	// (0x00099b73) main_att_body_pane_g1

0x2853,	// (0x0008f9a0) att_t_hdr_pane_t1_ParamLimits

0x2853,	// (0x0008f9a0) att_t_hdr_pane_t1

0x286c,	// (0x0008f9b9) att_t_nml_pane_t1_ParamLimits

0x286c,	// (0x0008f9b9) att_t_nml_pane_t1

0x2891,	// (0x0008f9de) att_btn_pane_t1

0x25ee,	// (0x0008f73b) bg_button_pane_cp23

0xca52,	// (0x00099b9f) att_li_srv_row_pane_ParamLimits

0xca52,	// (0x00099b9f) att_li_srv_row_pane

0x28a1,	// (0x0008f9ee) att_t_nmlb_pane_t1_ParamLimits

0x28a1,	// (0x0008f9ee) att_t_nmlb_pane_t1

0x28bf,	// (0x0008fa0c) att_query_pane_t1

0x28ce,	// (0x0008fa1b) att_query_pane_t2

0x28dd,	// (0x0008fa2a) att_query_pane_t3

0x0002,

0xfe6d,	// (0x0009cfba) att_query_pane_t

0x28ec,	// (0x0008fa39) input_focus_pane_cp11

0x28f5,	// (0x0008fa42) att_term_pane_t1_ParamLimits

0x28f5,	// (0x0008fa42) att_term_pane_t1

0x038f,	// (0x0008d4dc) att_opt_row_pane

0x2832,	// (0x0008f97f) att_opt_row_pane_g1

0x2912,	// (0x0008fa5f) att_opt_row_pane_t1_ParamLimits

0x2912,	// (0x0008fa5f) att_opt_row_pane_t1

0xca62,	// (0x00099baf) att_li_srv_row_pane_g1

0xca6a,	// (0x00099bb7) att_li_srv_row_pane_t1_ParamLimits

0xca6a,	// (0x00099bb7) att_li_srv_row_pane_t1

0xca7f,	// (0x00099bcc) att_li_srv_row_pane_t2_ParamLimits

0xca7f,	// (0x00099bcc) att_li_srv_row_pane_t2

0x0001,

0xfe74,	// (0x0009cfc1) att_li_srv_row_pane_t_ParamLimits

0xfe74,	// (0x0009cfc1) att_li_srv_row_pane_t

0x292b,	// (0x0008fa78) att_btn_close_pane_g1

0x038f,	// (0x0008d4dc) bg_button_pane_cp24

0xca94,	// (0x00099be1) main_vod_body_pane_ParamLimits

0xca94,	// (0x00099be1) main_vod_body_pane

0xcaa2,	// (0x00099bef) main_vod_body_pane_g1_ParamLimits

0xcaa2,	// (0x00099bef) main_vod_body_pane_g1

0xcad2,	// (0x00099c1f) scroll_pane_cp24_ParamLimits

0xcad2,	// (0x00099c1f) scroll_pane_cp24

0xcb1a,	// (0x00099c67) vod_btn_pane_ParamLimits

0xcb1a,	// (0x00099c67) vod_btn_pane

0xcb58,	// (0x00099ca5) vod_det_pane_ParamLimits

0xcb58,	// (0x00099ca5) vod_det_pane

0xcb84,	// (0x00099cd1) vod_logo_g1_ParamLimits

0xcb84,	// (0x00099cd1) vod_logo_g1

0xcbce,	// (0x00099d1b) vod_opt_pane_ParamLimits

0xcbce,	// (0x00099d1b) vod_opt_pane

0xcbfe,	// (0x00099d4b) vod_opt_pane_cp01_ParamLimits

0xcbfe,	// (0x00099d4b) vod_opt_pane_cp01

0xcc26,	// (0x00099d73) vod_query_pane_ParamLimits

0xcc26,	// (0x00099d73) vod_query_pane

0xcc4e,	// (0x00099d9b) vod_query_pane_cp01_ParamLimits

0xcc4e,	// (0x00099d9b) vod_query_pane_cp01

0xcc5a,	// (0x00099da7) vod_t_nml_pane_ParamLimits

0xcc5a,	// (0x00099da7) vod_t_nml_pane

0xcd08,	// (0x00099e55) vod_t_nml_pane_cp01_ParamLimits

0xcd08,	// (0x00099e55) vod_t_nml_pane_cp01

0xcd40,	// (0x00099e8d) vod_t_sub_pane_ParamLimits

0xcd40,	// (0x00099e8d) vod_t_sub_pane

0xcd6c,	// (0x00099eb9) vod_t_sub_pane_cp01_ParamLimits

0xcd6c,	// (0x00099eb9) vod_t_sub_pane_cp01

0x28ec,	// (0x0008fa39) vod_query_field_pane

0x2933,	// (0x0008fa80) vod_query_pane_t1

0x25ee,	// (0x0008f73b) bg_button_pane_cp25

0x2942,	// (0x0008fa8f) sso_btn_pane_t1_copy2

0xcd94,	// (0x00099ee1) vod_t_nml_pane_t1_ParamLimits

0xcd94,	// (0x00099ee1) vod_t_nml_pane_t1

0x2951,	// (0x0008fa9e) vod_opt_row_pane_ParamLimits

0x2951,	// (0x0008fa9e) vod_opt_row_pane

0x2963,	// (0x0008fab0) vod_t_sub_pane_t1_ParamLimits

0x2963,	// (0x0008fab0) vod_t_sub_pane_t1

0x297c,	// (0x0008fac9) vod_det_cell_pane_ParamLimits

0x297c,	// (0x0008fac9) vod_det_cell_pane

0x038f,	// (0x0008d4dc) input_focus_pane_cp15

0x298d,	// (0x0008fada) vod_query_field_pane_t1

0x299b,	// (0x0008fae8) vod_opt_row_pane_g1_ParamLimits

0x299b,	// (0x0008fae8) vod_opt_row_pane_g1

0x29a7,	// (0x0008faf4) vod_opt_row_pane_t1_ParamLimits

0x29a7,	// (0x0008faf4) vod_opt_row_pane_t1

0x29c6,	// (0x0008fb13) vod_det_cell_field_pane

0x29cf,	// (0x0008fb1c) vod_det_cell_pane_g1

0x29d7,	// (0x0008fb24) vod_det_cell_pane_t1

0x038f,	// (0x0008d4dc) input_focus_pane_cp16

0x29e6,	// (0x0008fb33) vod_det_cell_field_pane_t1

0xcdcf,	// (0x00099f1c) call7_btn_grp_pane_ParamLimits

0xcdcf,	// (0x00099f1c) call7_btn_grp_pane

0x0472,	// (0x0008d5bf) call7_bubble_pane_ParamLimits

0x0472,	// (0x0008d5bf) call7_bubble_pane

0xcddc,	// (0x00099f29) cell_call7_btn_pane_ParamLimits

0xcddc,	// (0x00099f29) cell_call7_btn_pane

0xcded,	// (0x00099f3a) call7_pane_g1_ParamLimits

0xcded,	// (0x00099f3a) call7_pane_g1

0xcdfc,	// (0x00099f49) call7_windows_conf_pane_ParamLimits

0xcdfc,	// (0x00099f49) call7_windows_conf_pane

0xce1e,	// (0x00099f6b) popup_call7_1st_window_ParamLimits

0xce1e,	// (0x00099f6b) popup_call7_1st_window

0xce2c,	// (0x00099f79) popup_call7_2nd_window_ParamLimits

0xce2c,	// (0x00099f79) popup_call7_2nd_window

0xce3a,	// (0x00099f87) popup_call7_3rd_window_ParamLimits

0xce3a,	// (0x00099f87) popup_call7_3rd_window

0x038f,	// (0x0008d4dc) bg_button_pane_cp26

0x1cd1,	// (0x0008ee1e) cell_call7_btn_pane_g1

0x24b1,	// (0x0008f5fe) cell_call7_btn_pane_t1

0x038f,	// (0x0008d4dc) bg_popup_window_pane_cp12

0x29f4,	// (0x0008fb41) popup_call7_1st_window_g1

0x29fc,	// (0x0008fb49) popup_call7_1st_window_g2

0x2a04,	// (0x0008fb51) popup_call7_1st_window_g3

0x0002,

0xfe79,	// (0x0009cfc6) popup_call7_1st_window_g

0x2a0c,	// (0x0008fb59) popup_call7_1st_window_t1

0x2a1b,	// (0x0008fb68) popup_call7_1st_window_t2

0x2a2b,	// (0x0008fb78) popup_call7_1st_window_t3

0x0002,

0xfe80,	// (0x0009cfcd) popup_call7_1st_window_t

0x038f,	// (0x0008d4dc) bg_popup_window_pane_cp13

0x2a3b,	// (0x0008fb88) popup_call7_2nd_window_g1

0x2a43,	// (0x0008fb90) popup_call7_2nd_window_g2

0x2a4b,	// (0x0008fb98) popup_call7_2nd_window_g3

0x0002,

0xfe87,	// (0x0009cfd4) popup_call7_2nd_window_g

0x2a0c,	// (0x0008fb59) popup_call7_2nd_window_t1

0x038f,	// (0x0008d4dc) bg_popup_window_pane_cp14

0x2a53,	// (0x0008fba0) call7_list_conf_pane

0x2a5b,	// (0x0008fba8) call7_list_conf_row_pane_ParamLimits

0x2a5b,	// (0x0008fba8) call7_list_conf_row_pane

0x2a6e,	// (0x0008fbbb) call7_list_conf_row_pane_g1

0x2a76,	// (0x0008fbc3) call7_list_conf_row_pane_g2

0x0001,

0xfe8e,	// (0x0009cfdb) call7_list_conf_row_pane_g

0x2a7e,	// (0x0008fbcb) call7_list_conf_row_pane_t1

0x038f,	// (0x0008d4dc) list_highlight_pane_cp22

0xc474,	// (0x000995c1) sso_option_pane_cp01_ParamLimits

0xc474,	// (0x000995c1) sso_option_pane_cp01

0x166b,	// (0x0008e7b8) msg_header_pane_ParamLimits

0x303c,	// (0x00090189) bg_button_pane_cp01_ParamLimits

0xe500,	// (0x0009b64d) input_focus_pane_cp07_ParamLimits

0xab9f,	// (0x00097cec) popup_email_progress_window

0x1d99,	// (0x0008eee6) popup_email_progress_window_g1

0x2a8c,	// (0x0008fbd9) popup_email_progress_window_g2

0x0001,

0xfe93,	// (0x0009cfe0) popup_email_progress_window_g

0x2a94,	// (0x0008fbe1) popup_email_progress_window_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large
