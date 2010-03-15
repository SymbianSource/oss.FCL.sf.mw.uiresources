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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x000472f7 };

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
0x1191,	// (0x00048488) Screen

0x119d,	// (0x00048494) application_window

0x11d9,	// (0x000484d0) area_bottom_pane_ParamLimits

0x11d9,	// (0x000484d0) area_bottom_pane

0x1212,	// (0x00048509) area_top_pane_ParamLimits

0x1212,	// (0x00048509) area_top_pane

0xb1bf,	// (0x000524b6) call_video_uplink_pane_ParamLimits

0xb1bf,	// (0x000524b6) call_video_uplink_pane

0x12a0,	// (0x00048597) main_pane_ParamLimits

0x12a0,	// (0x00048597) main_pane

0xbb64,	// (0x00052e5b) context_pane

0x623d,	// (0x0004d534) navi_pane

0x6265,	// (0x0004d55c) popup_cale_events_window_ParamLimits

0x6265,	// (0x0004d55c) popup_cale_events_window

0xbb77,	// (0x00052e6e) popup_mup_playback_window

0x627d,	// (0x0004d574) signal_pane

0x1a84,	// (0x00048d7b) main_browser_pane

0x4566,	// (0x0004b85d) main_burst_pane

0x5f9d,	// (0x0004d294) main_calc_pane

0xbaf6,	// (0x00052ded) main_cale_day_pane

0x1d5a,	// (0x00049051) main_cale_month_pane

0xbaf6,	// (0x00052ded) main_cale_week_pane

0x4566,	// (0x0004b85d) main_call_pane

0x14bd,	// (0x000487b4) main_call_poc_pane

0x4566,	// (0x0004b85d) main_camera_pane

0x4566,	// (0x0004b85d) main_chi_dic_pane

0x40c7,	// (0x0004b3be) main_clock_pane

0x14bd,	// (0x000487b4) main_fmradio_pane

0x4566,	// (0x0004b85d) main_graph_messa_pane

0x14bd,	// (0x000487b4) main_help_pane

0x1a84,	// (0x00048d7b) main_im_pane

0x1718,	// (0x00048a0f) main_image_pane_ParamLimits

0x1718,	// (0x00048a0f) main_image_pane

0x14bd,	// (0x000487b4) main_location2_pane

0x4566,	// (0x0004b85d) main_location_pane

0x1718,	// (0x00048a0f) main_messa_pane

0x14bd,	// (0x000487b4) main_mp2_pane

0x4566,	// (0x0004b85d) main_mp_pane

0x14bd,	// (0x000487b4) main_msg_pane

0x14bd,	// (0x000487b4) main_mup_eq_pane

0x14bd,	// (0x000487b4) main_mup_pane

0x1a84,	// (0x00048d7b) main_notes_pane

0x14bd,	// (0x000487b4) main_pec_pane

0x14bd,	// (0x000487b4) main_phob_pane

0x14bd,	// (0x000487b4) main_pinb_pane

0x14bd,	// (0x000487b4) main_postcard_pane

0x14bd,	// (0x000487b4) main_qdial_pane

0x4566,	// (0x0004b85d) main_skin_pane

0x14bd,	// (0x000487b4) main_smil2_pane

0x4566,	// (0x0004b85d) main_smil_pane

0x4566,	// (0x0004b85d) main_video_pane

0x4566,	// (0x0004b85d) main_video_tele_pane

0x1718,	// (0x00048a0f) main_viewer_pane_ParamLimits

0x1718,	// (0x00048a0f) main_viewer_pane

0x4566,	// (0x0004b85d) main_vorec_pane

0x5ff1,	// (0x0004d2e8) popup_blid_sat_info_window_ParamLimits

0x5ff1,	// (0x0004d2e8) popup_blid_sat_info_window

0x6049,	// (0x0004d340) popup_dyc_status_message_window_ParamLimits

0x6049,	// (0x0004d340) popup_dyc_status_message_window

0x6063,	// (0x0004d35a) popup_grid_large_graphic_window_ParamLimits

0x6063,	// (0x0004d35a) popup_grid_large_graphic_window

0x611f,	// (0x0004d416) popup_loc_request_window_ParamLimits

0x611f,	// (0x0004d416) popup_loc_request_window

0x6215,	// (0x0004d50c) popup_wml_address_window_ParamLimits

0x6215,	// (0x0004d50c) popup_wml_address_window

0x5dd7,	// (0x0004d0ce) call_muted_g1

0x5240,	// (0x0004c537) popup_call_audio_conf_window_ParamLimits

0x5240,	// (0x0004c537) popup_call_audio_conf_window

0x5deb,	// (0x0004d0e2) popup_call_audio_first_window_ParamLimits

0x5deb,	// (0x0004d0e2) popup_call_audio_first_window

0x5e61,	// (0x0004d158) popup_call_audio_in_window_ParamLimits

0x5e61,	// (0x0004d158) popup_call_audio_in_window

0x5e9d,	// (0x0004d194) popup_call_audio_out_window_ParamLimits

0x5e9d,	// (0x0004d194) popup_call_audio_out_window

0x5ed7,	// (0x0004d1ce) popup_call_audio_second_window_ParamLimits

0x5ed7,	// (0x0004d1ce) popup_call_audio_second_window

0x5f2d,	// (0x0004d224) popup_call_audio_wait_window_ParamLimits

0x5f2d,	// (0x0004d224) popup_call_audio_wait_window

0x5f62,	// (0x0004d259) popup_number_entry_window_ParamLimits

0x5f62,	// (0x0004d259) popup_number_entry_window

0xe923,	// (0x00055c1a) bg_popup_call_pane_cp05_ParamLimits

0xe923,	// (0x00055c1a) bg_popup_call_pane_cp05

0xe943,	// (0x00055c3a) popup_number_entry_window_t1

0xe956,	// (0x00055c4d) popup_number_entry_window_t2

0xe968,	// (0x00055c5f) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x000563ca) popup_number_entry_window_t

0xe97a,	// (0x00055c71) text_title_cp2

0xe98d,	// (0x00055c84) bg_popup_call_pane_cp_ParamLimits

0xe98d,	// (0x00055c84) bg_popup_call_pane_cp

0xe99b,	// (0x00055c92) call_thumbnail_pane

0xe9a3,	// (0x00055c9a) popup_call_audio_in_window_g1_ParamLimits

0xe9a3,	// (0x00055c9a) popup_call_audio_in_window_g1

0xe9af,	// (0x00055ca6) popup_call_audio_in_window_g2_ParamLimits

0xe9af,	// (0x00055ca6) popup_call_audio_in_window_g2

0xe9bb,	// (0x00055cb2) popup_call_audio_in_window_g3_ParamLimits

0xe9bb,	// (0x00055cb2) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x000563d3) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x000563d3) popup_call_audio_in_window_g

0xe9c7,	// (0x00055cbe) popup_call_audio_in_window_t1_ParamLimits

0xe9c7,	// (0x00055cbe) popup_call_audio_in_window_t1

0xe9e3,	// (0x00055cda) popup_call_audio_in_window_t2_ParamLimits

0xe9e3,	// (0x00055cda) popup_call_audio_in_window_t2

0xe9ff,	// (0x00055cf6) popup_call_audio_in_window_t3_ParamLimits

0xe9ff,	// (0x00055cf6) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x000563da) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x000563da) popup_call_audio_in_window_t

0xe98d,	// (0x00055c84) bg_popup_call_pane_cp01_ParamLimits

0xe98d,	// (0x00055c84) bg_popup_call_pane_cp01

0xe99b,	// (0x00055c92) call_thumbnail_pane_cp02

0xea12,	// (0x00055d09) call_type_pane_cp022

0xea1a,	// (0x00055d11) popup_call_audio_out_window_g1_ParamLimits

0xea1a,	// (0x00055d11) popup_call_audio_out_window_g1

0xea2c,	// (0x00055d23) popup_call_audio_out_window_g2_ParamLimits

0xea2c,	// (0x00055d23) popup_call_audio_out_window_g2

0xea38,	// (0x00055d2f) popup_call_audio_out_window_g3_ParamLimits

0xea38,	// (0x00055d2f) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x000563e1) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x000563e1) popup_call_audio_out_window_g

0xea4a,	// (0x00055d41) popup_call_audio_out_window_t1_ParamLimits

0xea4a,	// (0x00055d41) popup_call_audio_out_window_t1

0xea62,	// (0x00055d59) popup_call_audio_out_window_t2_ParamLimits

0xea62,	// (0x00055d59) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x000563e8) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x000563e8) popup_call_audio_out_window_t

0xea77,	// (0x00055d6e) bg_popup_call_pane_ParamLimits

0xea77,	// (0x00055d6e) bg_popup_call_pane

0x146a,	// (0x00048761) call_thumbnail_pane_cp_ParamLimits

0x146a,	// (0x00048761) call_thumbnail_pane_cp

0xeafb,	// (0x00055df2) call_type_pane_cp01_ParamLimits

0xeafb,	// (0x00055df2) call_type_pane_cp01

0xeb3f,	// (0x00055e36) popup_call_audio_first_window_g1_ParamLimits

0xeb3f,	// (0x00055e36) popup_call_audio_first_window_g1

0xeb8b,	// (0x00055e82) popup_call_audio_first_window_g2_ParamLimits

0xeb8b,	// (0x00055e82) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x000563ed) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x000563ed) popup_call_audio_first_window_g

0xebcf,	// (0x00055ec6) popup_call_audio_first_window_t1_ParamLimits

0xebcf,	// (0x00055ec6) popup_call_audio_first_window_t1

0xec7b,	// (0x00055f72) popup_call_audio_first_window_t4_ParamLimits

0xec7b,	// (0x00055f72) popup_call_audio_first_window_t4

0x148e,	// (0x00048785) popup_call_audio_first_window_t5_ParamLimits

0x148e,	// (0x00048785) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x000563f2) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x000563f2) popup_call_audio_first_window_t

0x14bd,	// (0x000487b4) bg_popup_call_pane_cp02

0x14c7,	// (0x000487be) call_type_pane_cp023

0x14cf,	// (0x000487c6) popup_call_audio_wait_window_g1

0x14d7,	// (0x000487ce) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x000563f9) popup_call_audio_wait_window_g

0x14df,	// (0x000487d6) popup_call_audio_wait_window_t3

0x14ed,	// (0x000487e4) bg_popup_call_pane_cp03_ParamLimits

0x14ed,	// (0x000487e4) bg_popup_call_pane_cp03

0x154d,	// (0x00048844) call_thumbnail_pane_cp011_ParamLimits

0x154d,	// (0x00048844) call_thumbnail_pane_cp011

0x1559,	// (0x00048850) call_type_pane_cp034_ParamLimits

0x1559,	// (0x00048850) call_type_pane_cp034

0x1595,	// (0x0004888c) popup_call_audio_second_window_g1_ParamLimits

0x1595,	// (0x0004888c) popup_call_audio_second_window_g1

0x15d1,	// (0x000488c8) popup_call_audio_second_window_g2_ParamLimits

0x15d1,	// (0x000488c8) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x000563fe) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x000563fe) popup_call_audio_second_window_g

0x160d,	// (0x00048904) popup_call_audio_second_window_t1_ParamLimits

0x160d,	// (0x00048904) popup_call_audio_second_window_t1

0x168e,	// (0x00048985) popup_call_audio_second_window_t2_ParamLimits

0x168e,	// (0x00048985) popup_call_audio_second_window_t2

0x16c4,	// (0x000489bb) popup_call_audio_second_window_t3_ParamLimits

0x16c4,	// (0x000489bb) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x00056403) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x00056403) popup_call_audio_second_window_t

0x14bd,	// (0x000487b4) bg_popup_call_pane_cp04

0x16fa,	// (0x000489f1) list_conf_pane

0x1702,	// (0x000489f9) popup_call_audio_conf_window_t1

0x1710,	// (0x00048a07) call_thumbnail_pane_g1

0x1718,	// (0x00048a0f) bg_pinb_pane_ParamLimits

0x1718,	// (0x00048a0f) bg_pinb_pane

0x1726,	// (0x00048a1d) find_pinb_pane

0x172f,	// (0x00048a26) listscroll_pinb_pane_ParamLimits

0x172f,	// (0x00048a26) listscroll_pinb_pane

0x173e,	// (0x00048a35) pinb_bg_pane_g1

0x1748,	// (0x00048a3f) pinb_bg_pane_g2

0x1754,	// (0x00048a4b) pinb_bg_pane_g3

0x1760,	// (0x00048a57) pinb_bg_pane_g4

0x176c,	// (0x00048a63) pinb_bg_pane_g5

0x1778,	// (0x00048a6f) pinb_bg_pane_g6

0x1783,	// (0x00048a7a) pinb_bg_pane_g7

0x178e,	// (0x00048a85) pinb_bg_pane_g8

0x1799,	// (0x00048a90) pinb_bg_pane_g9

0x17a3,	// (0x00048a9a) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x0005640a) pinb_bg_pane_g

0x17c0,	// (0x00048ab7) grid_pinb_pane

0x17c9,	// (0x00048ac0) list_pinb_pane

0x17d2,	// (0x00048ac9) scroll_pane_cp01_ParamLimits

0x17d2,	// (0x00048ac9) scroll_pane_cp01

0x17e4,	// (0x00048adb) find_pinb_pane_g1_ParamLimits

0x17e4,	// (0x00048adb) find_pinb_pane_g1

0x17fc,	// (0x00048af3) find_pinb_pane_t1

0x180e,	// (0x00048b05) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x00056424) find_pinb_pane_t

0x1823,	// (0x00048b1a) input_focus_pane_cp01_ParamLimits

0x1823,	// (0x00048b1a) input_focus_pane_cp01

0x182f,	// (0x00048b26) cell_pinb_pane_ParamLimits

0x182f,	// (0x00048b26) cell_pinb_pane

0x1858,	// (0x00048b4f) cell_pinb_pane_g1_ParamLimits

0x1858,	// (0x00048b4f) cell_pinb_pane_g1

0x1868,	// (0x00048b5f) cell_pinb_pane_g2_ParamLimits

0x1868,	// (0x00048b5f) cell_pinb_pane_g2

0x1874,	// (0x00048b6b) cell_pinb_pane_g3_ParamLimits

0x1874,	// (0x00048b6b) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x00056429) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x00056429) cell_pinb_pane_g

0x14bd,	// (0x000487b4) grid_highlight_pane_cp01

0x1880,	// (0x00048b77) list_pinb_item_pane_ParamLimits

0x1880,	// (0x00048b77) list_pinb_item_pane

0x14bd,	// (0x000487b4) list_highlight_pane_cp02

0x1892,	// (0x00048b89) list_pinb_item_pane_g1_ParamLimits

0x1892,	// (0x00048b89) list_pinb_item_pane_g1

0x189f,	// (0x00048b96) list_pinb_item_pane_g2_ParamLimits

0x189f,	// (0x00048b96) list_pinb_item_pane_g2

0x18ab,	// (0x00048ba2) list_pinb_item_pane_g3_ParamLimits

0x18ab,	// (0x00048ba2) list_pinb_item_pane_g3

0x18bc,	// (0x00048bb3) list_pinb_item_pane_g4_ParamLimits

0x18bc,	// (0x00048bb3) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x00056430) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x00056430) list_pinb_item_pane_g

0x18c8,	// (0x00048bbf) list_pinb_item_pane_t1_ParamLimits

0x18c8,	// (0x00048bbf) list_pinb_item_pane_t1

0x18fd,	// (0x00048bf4) calc_display_pane

0x1925,	// (0x00048c1c) calc_paper_pane

0x1948,	// (0x00048c3f) grid_calc_pane

0x14bd,	// (0x000487b4) bg_list_pane_cp01

0x1976,	// (0x00048c6d) clock_g1

0x197e,	// (0x00048c75) clock_g2

0x0001,

0xf142,	// (0x00056439) clock_g

0x1986,	// (0x00048c7d) clock_t1_ParamLimits

0x1986,	// (0x00048c7d) clock_t1

0x199b,	// (0x00048c92) clock_t2_ParamLimits

0x199b,	// (0x00048c92) clock_t2

0x19ad,	// (0x00048ca4) clock_t3_ParamLimits

0x19ad,	// (0x00048ca4) clock_t3

0x19bf,	// (0x00048cb6) clock_t4_ParamLimits

0x19bf,	// (0x00048cb6) clock_t4

0x19d1,	// (0x00048cc8) clock_t5_ParamLimits

0x19d1,	// (0x00048cc8) clock_t5

0x19e6,	// (0x00048cdd) clock_t6_ParamLimits

0x19e6,	// (0x00048cdd) clock_t6

0x19f8,	// (0x00048cef) clock_t7_ParamLimits

0x19f8,	// (0x00048cef) clock_t7

0x1a0a,	// (0x00048d01) clock_t8_ParamLimits

0x1a0a,	// (0x00048d01) clock_t8

0x1a1e,	// (0x00048d15) clock_t9_ParamLimits

0x1a1e,	// (0x00048d15) clock_t9

0x0008,

0xf147,	// (0x0005643e) clock_t_ParamLimits

0xf147,	// (0x0005643e) clock_t

0x1a32,	// (0x00048d29) popup_clock_analogue_window_cp02

0x1a32,	// (0x00048d29) popup_clock_digital_window_cp01

0x1a3a,	// (0x00048d31) listscroll_help_pane

0x14bd,	// (0x000487b4) phob_pre_status_pane

0x1a44,	// (0x00048d3b) grid_qdial_pane

0x1718,	// (0x00048a0f) listscroll_mce_pane

0x1718,	// (0x00048a0f) bg_notes_pane

0x1a4e,	// (0x00048d45) list_notes_pane

0x1a5c,	// (0x00048d53) scroll_pane_cp06

0x1a70,	// (0x00048d67) bg_calc_paper_pane

0xb1e5,	// (0x000524dc) list_calc_pane

0x1a84,	// (0x00048d7b) bg_calc_display_pane

0x1a90,	// (0x00048d87) calc_display_pane_t1

0x1aa2,	// (0x00048d99) calc_display_pane_t2

0xb1ff,	// (0x000524f6) calc_display_pane_t3

0x0002,

0xf15a,	// (0x00056451) calc_display_pane_t

0x1ab4,	// (0x00048dab) cell_calc_pane_ParamLimits

0x1ab4,	// (0x00048dab) cell_calc_pane

0x1ae9,	// (0x00048de0) bg_calc_paper_pane_g1

0x1af5,	// (0x00048dec) bg_calc_paper_pane_g2

0x1b01,	// (0x00048df8) bg_calc_paper_pane_g3

0x1b0d,	// (0x00048e04) bg_calc_paper_pane_g4

0x1b19,	// (0x00048e10) bg_calc_paper_pane_g5

0x1b25,	// (0x00048e1c) bg_calc_paper_pane_g6

0x1b34,	// (0x00048e2b) bg_calc_paper_pane_g7

0x1b43,	// (0x00048e3a) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x00056458) bg_calc_paper_pane_g

0x1b56,	// (0x00048e4d) calc_bg_paper_pane_g9

0x1b69,	// (0x00048e60) list_calc_item_pane_ParamLimits

0x1b69,	// (0x00048e60) list_calc_item_pane

0x1b7e,	// (0x00048e75) list_calc_item_pane_g1

0xb211,	// (0x00052508) list_calc_item_pane_t1_ParamLimits

0xb211,	// (0x00052508) list_calc_item_pane_t1

0x1b8b,	// (0x00048e82) list_calc_item_pane_t2_ParamLimits

0x1b8b,	// (0x00048e82) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x00056469) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x00056469) list_calc_item_pane_t

0x1ba5,	// (0x00048e9c) cell_calc_pane_g1

0x1bc7,	// (0x00048ebe) grid_highlight_pane_cp02

0x1be9,	// (0x00048ee0) bg_calc_display_pane_g1

0x1bf2,	// (0x00048ee9) bg_calc_display_pane_g2

0x1bfc,	// (0x00048ef3) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x00056473) bg_calc_display_pane_g

0x1c05,	// (0x00048efc) cell_qdial_pane_ParamLimits

0x1c05,	// (0x00048efc) cell_qdial_pane

0x1c19,	// (0x00048f10) cell_qdial_pane_g1_ParamLimits

0x1c19,	// (0x00048f10) cell_qdial_pane_g1

0x1c2f,	// (0x00048f26) cell_qdial_pane_g2_ParamLimits

0x1c2f,	// (0x00048f26) cell_qdial_pane_g2

0x1c40,	// (0x00048f37) cell_qdial_pane_g3_ParamLimits

0x1c40,	// (0x00048f37) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x0005647a) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x0005647a) cell_qdial_pane_g

0x1c62,	// (0x00048f59) cell_qdial_pane_t1_ParamLimits

0x1c62,	// (0x00048f59) cell_qdial_pane_t1

0x1c7a,	// (0x00048f71) cell_qdial_pane_t2_ParamLimits

0x1c7a,	// (0x00048f71) cell_qdial_pane_t2

0x1c8d,	// (0x00048f84) cell_qdial_pane_t3_ParamLimits

0x1c8d,	// (0x00048f84) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x00056483) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x00056483) cell_qdial_pane_t

0x14bd,	// (0x000487b4) grid_highlight_pane_cp04

0x1ca0,	// (0x00048f97) thumbnail_qdial_pane_ParamLimits

0x1ca0,	// (0x00048f97) thumbnail_qdial_pane

0x1cfc,	// (0x00048ff3) list_help_pane

0x1d05,	// (0x00048ffc) scroll_pane_cp02

0x1d0e,	// (0x00049005) help_list_pane_t1_ParamLimits

0x1d0e,	// (0x00049005) help_list_pane_t1

0xb223,	// (0x0005251a) bg_notes_pane_g2

0xb22b,	// (0x00052522) bg_notes_pane_g3

0xb233,	// (0x0005252a) notes_bg_pane_g1

0xb23b,	// (0x00052532) notes_bg_pane_g4

0xb243,	// (0x0005253a) notes_bg_pane_g5

0xb24b,	// (0x00052542) notes_bg_pane_g6

0xb253,	// (0x0005254a) notes_bg_pane_g7

0xb25b,	// (0x00052552) notes_bg_pane_g8

0xb263,	// (0x0005255a) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x000564a1) notes_bg_pane_g

0x1d2b,	// (0x00049022) list_notes_text_pane_ParamLimits

0x1d2b,	// (0x00049022) list_notes_text_pane

0x1d40,	// (0x00049037) list_notes_text_pane_g1

0x0389,	// (0x00047680) list_notes_text_pane_t1

0x1d5a,	// (0x00049051) listscroll_cale_week_pane

0x1d8f,	// (0x00049086) bg_cale_heading_pane

0x1da7,	// (0x0004909e) bg_cale_pane_cp01

0x1dc5,	// (0x000490bc) cale_week_corner_pane

0x1de4,	// (0x000490db) cale_week_day_heading_pane

0x1e01,	// (0x000490f8) cale_week_scroll_pane_g1

0x1e14,	// (0x0004910b) cale_week_scroll_pane_g2

0x1e2c,	// (0x00049123) cale_week_scroll_pane_g3

0x1e44,	// (0x0004913b) cale_week_scroll_pane_g4

0x1e5c,	// (0x00049153) cale_week_scroll_pane_g5

0x1e7c,	// (0x00049173) cale_week_scroll_pane_g6

0x1e9c,	// (0x00049193) cale_week_scroll_pane_g7

0x1ebc,	// (0x000491b3) cale_week_scroll_pane_g8

0x1ee0,	// (0x000491d7) cale_week_scroll_pane_g9

0x1ef8,	// (0x000491ef) cale_week_scroll_pane_g10

0x1f10,	// (0x00049207) cale_week_scroll_pane_g11

0x1f28,	// (0x0004921f) cale_week_scroll_pane_g12

0x1f40,	// (0x00049237) cale_week_scroll_pane_g13

0x1f40,	// (0x00049237) cale_week_scroll_pane_g14

0x1f40,	// (0x00049237) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x000564b0) cale_week_scroll_pane_g

0x1f58,	// (0x0004924f) cale_week_time_pane

0x1f7c,	// (0x00049273) grid_cale_week_pane

0x1fb4,	// (0x000492ab) scroll_pane_cp08

0x1fd1,	// (0x000492c8) cell_cale_week_pane_ParamLimits

0x1fd1,	// (0x000492c8) cell_cale_week_pane

0x205f,	// (0x00049356) cale_week_day_heading_pane_t1

0x20a4,	// (0x0004939b) cale_week_day_heading_pane_t2

0x20ee,	// (0x000493e5) cale_week_day_heading_pane_t3

0x2138,	// (0x0004942f) cale_week_day_heading_pane_t4

0x2182,	// (0x00049479) cale_week_day_heading_pane_t5

0x21d4,	// (0x000494cb) cale_week_day_heading_pane_t6

0x2226,	// (0x0004951d) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x000564cf) cale_week_day_heading_pane_t

0x226b,	// (0x00049562) bg_cale_side_pane

0x2279,	// (0x00049570) cale_week_time_pane_t1

0x2293,	// (0x0004958a) cale_week_time_pane_t2

0x22ad,	// (0x000495a4) cale_week_time_pane_t3

0x22c7,	// (0x000495be) cale_week_time_pane_t4

0x22e1,	// (0x000495d8) cale_week_time_pane_t5

0x22fb,	// (0x000495f2) cale_week_time_pane_t6

0x2315,	// (0x0004960c) cale_week_time_pane_t7

0x232f,	// (0x00049626) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x000564de) cale_week_time_pane_t

0x234f,	// (0x00049646) cell_cale_week_pane_g2

0x236e,	// (0x00049665) cell_cale_week_pane_g3_ParamLimits

0x236e,	// (0x00049665) cell_cale_week_pane_g3

0x2386,	// (0x0004967d) grid_highlight_pane_cp07

0x238e,	// (0x00049685) listscroll_gms_pane

0x2398,	// (0x0004968f) grid_gms_pane

0x23a1,	// (0x00049698) listscroll_gms_pane_g1

0x23a9,	// (0x000496a0) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x000564ef) listscroll_gms_pane_g

0x23b1,	// (0x000496a8) scroll_pane_cp010

0x23bc,	// (0x000496b3) cell_gms_pane_ParamLimits

0x23bc,	// (0x000496b3) cell_gms_pane

0x23cf,	// (0x000496c6) cell_gms_pane_g1

0x23d7,	// (0x000496ce) cell_gms_pane_g2

0x23df,	// (0x000496d6) cell_gms_pane_g3

0x23e8,	// (0x000496df) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x000564f4) cell_gms_pane_g

0x23f1,	// (0x000496e8) grid_highlight_pane_cp09

0x5d81,	// (0x0004d078) phob_pre_status_pane_g1

0x5d89,	// (0x0004d080) phob_pre_status_pane_g2

0x5d91,	// (0x0004d088) phob_pre_status_pane_g3

0x5d99,	// (0x0004d090) phob_pre_status_pane_g4

0x0004,

0xf5ec,	// (0x000568e3) phob_pre_status_pane_g

0x5da9,	// (0x0004d0a0) phob_pre_status_pane_t1

0x5db7,	// (0x0004d0ae) phob_pre_status_pane_t2

0x5dc7,	// (0x0004d0be) phob_pre_status_pane_t3

0x0002,

0xf5f7,	// (0x000568ee) phob_pre_status_pane_t

0x14bd,	// (0x000487b4) bg_list_pane_cp05

0x2401,	// (0x000496f8) grid_vorec_pane

0x240b,	// (0x00049702) vorec_t1

0x2419,	// (0x00049710) vorec_t2

0x2427,	// (0x0004971e) vorec_t3

0x2435,	// (0x0004972c) vorec_t4

0x2443,	// (0x0004973a) vorec_t5

0xb26b,	// (0x00052562) vorec_t6

0x0006,

0xf206,	// (0x000564fd) vorec_t

0x245f,	// (0x00049756) wait_bar_pane_cp01

0x2467,	// (0x0004975e) cell_vorec_pane_ParamLimits

0x2467,	// (0x0004975e) cell_vorec_pane

0x247a,	// (0x00049771) cell_vorec_pane_g1

0x14bd,	// (0x000487b4) grid_highlight_pane_cp05

0x2499,	// (0x00049790) cams_zoom_pane

0x24a8,	// (0x0004979f) image_vga_pane

0x24c2,	// (0x000497b9) main_camera_pane_g1

0x24d4,	// (0x000497cb) main_camera_pane_g2

0x24e4,	// (0x000497db) main_camera_pane_g3

0x24f4,	// (0x000497eb) main_camera_pane_g4

0x2504,	// (0x000497fb) main_camera_pane_g5

0x2514,	// (0x0004980b) main_camera_pane_g6

0x2526,	// (0x0004981d) main_camera_pane_g7

0x0007,

0xf215,	// (0x0005650c) main_camera_pane_g

0x2542,	// (0x00049839) main_camera_pane_t1

0x2558,	// (0x0004984f) main_camera_pane_t2

0x0001,

0xf226,	// (0x0005651d) main_camera_pane_t

0x2592,	// (0x00049889) cams_zoom_pane_cp_ParamLimits

0x2592,	// (0x00049889) cams_zoom_pane_cp

0x25ba,	// (0x000498b1) image_cif_pane_ParamLimits

0x25ba,	// (0x000498b1) image_cif_pane

0x25f0,	// (0x000498e7) image_subqcif_pane

0x25f8,	// (0x000498ef) main_video_pane_g1_ParamLimits

0x25f8,	// (0x000498ef) main_video_pane_g1

0x261c,	// (0x00049913) main_video_pane_g2_ParamLimits

0x261c,	// (0x00049913) main_video_pane_g2

0x2650,	// (0x00049947) main_video_pane_g3_ParamLimits

0x2650,	// (0x00049947) main_video_pane_g3

0x267e,	// (0x00049975) main_video_pane_g4_ParamLimits

0x267e,	// (0x00049975) main_video_pane_g4

0x26ac,	// (0x000499a3) main_video_pane_g5_ParamLimits

0x26ac,	// (0x000499a3) main_video_pane_g5

0x26c4,	// (0x000499bb) main_video_pane_g6_ParamLimits

0x26c4,	// (0x000499bb) main_video_pane_g6

0x0006,

0xf22b,	// (0x00056522) main_video_pane_g_ParamLimits

0xf22b,	// (0x00056522) main_video_pane_g

0x26ef,	// (0x000499e6) main_video_pane_t1_ParamLimits

0x26ef,	// (0x000499e6) main_video_pane_t1

0x2738,	// (0x00049a2f) cams_zoom_pane_g1

0x2741,	// (0x00049a38) cams_zoom_pane_g2

0x274a,	// (0x00049a41) cams_zoom_pane_g3

0x2753,	// (0x00049a4a) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x00056531) cams_zoom_pane_g

0x2770,	// (0x00049a67) grid_cams_pane

0x278a,	// (0x00049a81) linegrid_cams_pane

0x279e,	// (0x00049a95) cell_cams_pane_ParamLimits

0x279e,	// (0x00049a95) cell_cams_pane

0x27be,	// (0x00049ab5) cams_burst_image_pane

0x27c6,	// (0x00049abd) cell_cams_pane_g1

0x14bd,	// (0x000487b4) grid_highlight_pane_cp03

0x1ba5,	// (0x00048e9c) mp_bg_pane_g1

0x14bd,	// (0x000487b4) bg_list_pane_cp03

0xba1b,	// (0x00052d12) bg_mp_pane

0xba23,	// (0x00052d1a) grid_mp_pane

0xba2b,	// (0x00052d22) media_player_g1

0xba33,	// (0x00052d2a) media_player_t1

0xba41,	// (0x00052d38) media_player_t2

0xba4f,	// (0x00052d46) media_player_t3

0xba5d,	// (0x00052d54) media_player_t4

0xba6b,	// (0x00052d62) media_player_t5

0xba79,	// (0x00052d70) media_player_t6

0xba87,	// (0x00052d7e) media_player_t7

0x0006,

0xf5d6,	// (0x000568cd) media_player_t

0xba95,	// (0x00052d8c) wait_bar_pane_cp02

0xf5bb,	// (0x000568b2) main_usb_pane_t

0x5d78,	// (0x0004d06f) cell_mp_pane

0x1ba5,	// (0x00048e9c) cell_mp_pane_g1

0x14bd,	// (0x000487b4) grid_highlight_pane_cp06

0x27ce,	// (0x00049ac5) grid_skin_colour_pane

0x27d6,	// (0x00049acd) list_highlight_pane_cp03

0x27de,	// (0x00049ad5) skin_g1

0x27e6,	// (0x00049add) skin_t1

0x27f5,	// (0x00049aec) skin_t2

0x0001,

0xf26f,	// (0x00056566) skin_t

0x2803,	// (0x00049afa) cell_skin_colour_pane_ParamLimits

0x2803,	// (0x00049afa) cell_skin_colour_pane

0x2823,	// (0x00049b1a) cell_skin_colour_pane_g1

0x288e,	// (0x00049b85) call_video_g1_ParamLimits

0x288e,	// (0x00049b85) call_video_g1

0x28aa,	// (0x00049ba1) call_video_g2_ParamLimits

0x28aa,	// (0x00049ba1) call_video_g2

0x0001,

0xf274,	// (0x0005656b) call_video_g_ParamLimits

0xf274,	// (0x0005656b) call_video_g

0x28fc,	// (0x00049bf3) call_video_uplink_pane_cp1_ParamLimits

0x28fc,	// (0x00049bf3) call_video_uplink_pane_cp1

0x2961,	// (0x00049c58) call_video_uplink_pane_cp2

0x29a3,	// (0x00049c9a) video_down_crop_pane_ParamLimits

0x29a3,	// (0x00049c9a) video_down_crop_pane

0x2a9a,	// (0x00049d91) video_down_pane_ParamLimits

0x2a9a,	// (0x00049d91) video_down_pane

0x2b91,	// (0x00049e88) video_down_subqcif_pane_ParamLimits

0x2b91,	// (0x00049e88) video_down_subqcif_pane

0x2ba9,	// (0x00049ea0) video_down_subqcif_pane_cp_ParamLimits

0x2ba9,	// (0x00049ea0) video_down_subqcif_pane_cp

0x2be6,	// (0x00049edd) im_reading_pane_ParamLimits

0x2be6,	// (0x00049edd) im_reading_pane

0x2bf8,	// (0x00049eef) im_writing_pane_ParamLimits

0x2bf8,	// (0x00049eef) im_writing_pane

0x2c16,	// (0x00049f0d) im_reading_pane_t1

0x2c4f,	// (0x00049f46) list_im_pane

0x2c60,	// (0x00049f57) scroll_pane_cp07

0x2c79,	// (0x00049f70) im_writing_pane_t1_ParamLimits

0x2c79,	// (0x00049f70) im_writing_pane_t1

0x2c8e,	// (0x00049f85) im_writing_pane_t2_ParamLimits

0x2c8e,	// (0x00049f85) im_writing_pane_t2

0x0001,

0xf27e,	// (0x00056575) im_writing_pane_t_ParamLimits

0xf27e,	// (0x00056575) im_writing_pane_t

0x14bd,	// (0x000487b4) input_focus_pane_cp04

0x14bd,	// (0x000487b4) input_focus_pane_cp05

0x2cab,	// (0x00049fa2) list_im_single_pane_ParamLimits

0x2cab,	// (0x00049fa2) list_im_single_pane

0x2cbf,	// (0x00049fb6) list_single_im_pane_t1

0x5d38,	// (0x0004d02f) blid_accuracy_pane

0x5d40,	// (0x0004d037) blid_compass_pane

0x5d4a,	// (0x0004d041) main_location_t1

0x5d5a,	// (0x0004d051) main_location_t2

0x5d6a,	// (0x0004d061) main_location_t3

0x0002,

0xf5e5,	// (0x000568dc) main_location_t

0x14bd,	// (0x000487b4) aid_levels_location

0x1ba5,	// (0x00048e9c) blid_accuracy_pane_g1

0x1ba5,	// (0x00048e9c) blid_accuracy_pane_g2

0x0001,

0xf2e0,	// (0x000565d7) blid_accuracy_pane_g

0x2cf9,	// (0x00049ff0) wml_content_pane

0x2d37,	// (0x0004a02e) wml_button_pane_ParamLimits

0x2d37,	// (0x0004a02e) wml_button_pane

0x2d4b,	// (0x0004a042) wml_list_single_large_pane_ParamLimits

0x2d4b,	// (0x0004a042) wml_list_single_large_pane

0x2d60,	// (0x0004a057) wml_list_single_medium_pane_ParamLimits

0x2d60,	// (0x0004a057) wml_list_single_medium_pane

0x2d76,	// (0x0004a06d) wml_list_single_small_pane_ParamLimits

0x2d76,	// (0x0004a06d) wml_list_single_small_pane

0x2d8e,	// (0x0004a085) wml_selection_box_pane_ParamLimits

0x2d8e,	// (0x0004a085) wml_selection_box_pane

0x2da1,	// (0x0004a098) wml_list_single_pane_t1

0x2db0,	// (0x0004a0a7) wml_list_single_medium_pane_t1

0x2dbf,	// (0x0004a0b6) wml_list_single_large_pane_t1

0x2dce,	// (0x0004a0c5) input_focus_pane_cp02_ParamLimits

0x2dce,	// (0x0004a0c5) input_focus_pane_cp02

0x2de1,	// (0x0004a0d8) wml_selection_box_pane_g1

0x2dea,	// (0x0004a0e1) wml_selection_box_pane_t1_ParamLimits

0x2dea,	// (0x0004a0e1) wml_selection_box_pane_t1

0x1718,	// (0x00048a0f) bg_wml_button_pane_ParamLimits

0x1718,	// (0x00048a0f) bg_wml_button_pane

0x2e02,	// (0x0004a0f9) wml_button_pane_g1

0x2e0a,	// (0x0004a101) wml_button_pane_t1

0x2e02,	// (0x0004a0f9) wml_button_bg_pane_g1

0x2e1a,	// (0x0004a111) wml_button_bg_pane_g2

0x2e22,	// (0x0004a119) wml_button_bg_pane_g3

0x2e2a,	// (0x0004a121) wml_button_bg_pane_g4

0x2e32,	// (0x0004a129) wml_button_bg_pane_g5

0x2e3a,	// (0x0004a131) wml_button_bg_pane_g6

0x2e42,	// (0x0004a139) wml_button_bg_pane_g7

0x2e4a,	// (0x0004a141) wml_button_bg_pane_g8

0x2e52,	// (0x0004a149) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x0005657a) wml_button_bg_pane_g

0x2e5a,	// (0x0004a151) bg_list_pane_cp02

0x2e62,	// (0x0004a159) mce_header_pane_ParamLimits

0x2e62,	// (0x0004a159) mce_header_pane

0x2e78,	// (0x0004a16f) mce_icon_pane

0x2e78,	// (0x0004a16f) mce_image_pane

0x2e81,	// (0x0004a178) mce_text_pane_ParamLimits

0x2e81,	// (0x0004a178) mce_text_pane

0x2e94,	// (0x0004a18b) scroll_pane_cp03

0x2d2f,	// (0x0004a026) scroll_pane_cp04

0x2e9e,	// (0x0004a195) scroll_pane_cp05_ParamLimits

0x2e9e,	// (0x0004a195) scroll_pane_cp05

0x2eaa,	// (0x0004a1a1) mce_header_field_pane_ParamLimits

0x2eaa,	// (0x0004a1a1) mce_header_field_pane

0x2ec1,	// (0x0004a1b8) mce_header_field_pane_2_ParamLimits

0x2ec1,	// (0x0004a1b8) mce_header_field_pane_2

0x2ed7,	// (0x0004a1ce) mce_header_field_pane_3

0x2edf,	// (0x0004a1d6) list_single_mce_message_pane_ParamLimits

0x2edf,	// (0x0004a1d6) list_single_mce_message_pane

0x2ef4,	// (0x0004a1eb) list_single_mce_smart_pane_ParamLimits

0x2ef4,	// (0x0004a1eb) list_single_mce_smart_pane

0x2f14,	// (0x0004a20b) input_focus_pane_cp03

0x2f1d,	// (0x0004a214) list_header_data_pane

0x2f25,	// (0x0004a21c) mce_header_field_pane_t1

0x2f35,	// (0x0004a22c) list_single_mce_header_pane_ParamLimits

0x2f35,	// (0x0004a22c) list_single_mce_header_pane

0x2f49,	// (0x0004a240) list_single_mce_header_pane_t1

0x2f58,	// (0x0004a24f) list_single_mce_message_pane_g1

0x2f60,	// (0x0004a257) list_single_mce_message_pane_t1

0x2f94,	// (0x0004a28b) bg_cale_heading_pane_cp01_ParamLimits

0x2f94,	// (0x0004a28b) bg_cale_heading_pane_cp01

0x2fc3,	// (0x0004a2ba) bg_cale_pane_cp02_ParamLimits

0x2fc3,	// (0x0004a2ba) bg_cale_pane_cp02

0x2ff0,	// (0x0004a2e7) cale_month_corner_pane

0x300f,	// (0x0004a306) cale_month_day_heading_pane_ParamLimits

0x300f,	// (0x0004a306) cale_month_day_heading_pane

0x3056,	// (0x0004a34d) cale_month_pane_g1_ParamLimits

0x3056,	// (0x0004a34d) cale_month_pane_g1

0x307a,	// (0x0004a371) cale_month_pane_g2_ParamLimits

0x307a,	// (0x0004a371) cale_month_pane_g2

0x30aa,	// (0x0004a3a1) cale_month_pane_g3_ParamLimits

0x30aa,	// (0x0004a3a1) cale_month_pane_g3

0x30e6,	// (0x0004a3dd) cale_month_pane_g4_ParamLimits

0x30e6,	// (0x0004a3dd) cale_month_pane_g4

0x3122,	// (0x0004a419) cale_month_pane_g5_ParamLimits

0x3122,	// (0x0004a419) cale_month_pane_g5

0x316a,	// (0x0004a461) cale_month_pane_g6_ParamLimits

0x316a,	// (0x0004a461) cale_month_pane_g6

0x31b6,	// (0x0004a4ad) cale_month_pane_g7_ParamLimits

0x31b6,	// (0x0004a4ad) cale_month_pane_g7

0x320a,	// (0x0004a501) cale_month_pane_g8_ParamLimits

0x320a,	// (0x0004a501) cale_month_pane_g8

0x325e,	// (0x0004a555) cale_month_pane_g9_ParamLimits

0x325e,	// (0x0004a555) cale_month_pane_g9

0x32b0,	// (0x0004a5a7) cale_month_pane_g10_ParamLimits

0x32b0,	// (0x0004a5a7) cale_month_pane_g10

0x3302,	// (0x0004a5f9) cale_month_pane_g11_ParamLimits

0x3302,	// (0x0004a5f9) cale_month_pane_g11

0x3354,	// (0x0004a64b) cale_month_pane_g12_ParamLimits

0x3354,	// (0x0004a64b) cale_month_pane_g12

0x33a6,	// (0x0004a69d) cale_month_pane_g13_ParamLimits

0x33a6,	// (0x0004a69d) cale_month_pane_g13

0x000c,

0xf296,	// (0x0005658d) cale_month_pane_g_ParamLimits

0xf296,	// (0x0005658d) cale_month_pane_g

0x340a,	// (0x0004a701) cale_month_week_pane

0x342e,	// (0x0004a725) grid_cale_month_pane_ParamLimits

0x342e,	// (0x0004a725) grid_cale_month_pane

0x346c,	// (0x0004a763) cale_month_day_heading_pane_t1

0x34f2,	// (0x0004a7e9) cale_month_day_heading_pane_t2

0x3583,	// (0x0004a87a) cale_month_day_heading_pane_t3

0x3614,	// (0x0004a90b) cale_month_day_heading_pane_t4

0x36a9,	// (0x0004a9a0) cale_month_day_heading_pane_t5

0x374a,	// (0x0004aa41) cale_month_day_heading_pane_t6

0x37eb,	// (0x0004aae2) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x000565a8) cale_month_day_heading_pane_t

0x226b,	// (0x00049562) bg_cale_side_pane_cp01

0x3894,	// (0x0004ab8b) cale_month_week_pane_t1

0x38ad,	// (0x0004aba4) cale_month_week_pane_t2

0x38c6,	// (0x0004abbd) cale_month_week_pane_t3

0x38df,	// (0x0004abd6) cale_month_week_pane_t4

0x38f8,	// (0x0004abef) cale_month_week_pane_t5

0x3911,	// (0x0004ac08) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x000565b7) cale_month_week_pane_t

0x392a,	// (0x0004ac21) cell_cale_month_pane_ParamLimits

0x392a,	// (0x0004ac21) cell_cale_month_pane

0xb279,	// (0x00052570) cell_cale_month_pane_g1

0x3a54,	// (0x0004ad4b) cell_cale_month_pane_t1_ParamLimits

0x3a54,	// (0x0004ad4b) cell_cale_month_pane_t1

0x2386,	// (0x0004967d) grid_highlight_pane_cp08

0x1ba5,	// (0x00048e9c) main_smil_g1

0x3a74,	// (0x0004ad6b) smil_status_pane

0x3a7d,	// (0x0004ad74) smil_text_pane

0xb93b,	// (0x00052c32) bg_popup_call3_rect_pane_g8

0xb943,	// (0x00052c3a) bg_popup_call3_rect_pane_g9

0x0008,

0xf579,	// (0x00056870) bg_popup_call3_rect_pane_g

0xbbde,	// (0x00052ed5) smil_status_volume_pane_g1

0x3a91,	// (0x0004ad88) smil_status_pane_t1

0xbc11,	// (0x00052f08) volume_smil_pane

0x3aa8,	// (0x0004ad9f) list_smil_text_pane

0x3ab2,	// (0x0004ada9) scroll_pane_cp011

0x3abd,	// (0x0004adb4) smil_text_list_pane_t1_ParamLimits

0x3abd,	// (0x0004adb4) smil_text_list_pane_t1

0xb285,	// (0x0005257c) aid_volume_smil_ParamLimits

0xb285,	// (0x0005257c) aid_volume_smil

0x1ba5,	// (0x00048e9c) smil_volume_pane_g1

0x1ba5,	// (0x00048e9c) smil_volume_pane_g2

0x0001,

0xf2e0,	// (0x000565d7) smil_volume_pane_g

0x1d5a,	// (0x00049051) listscroll_cale_day_pane

0x3af9,	// (0x0004adf0) bg_cale_pane

0x3b11,	// (0x0004ae08) list_cale_pane

0x3b34,	// (0x0004ae2b) scroll_pane_cp09

0x3b45,	// (0x0004ae3c) cale_bg_pane_g1

0x3b4d,	// (0x0004ae44) cale_bg_pane_g2

0x3b55,	// (0x0004ae4c) cale_bg_pane_g3

0x3b5d,	// (0x0004ae54) cale_bg_pane_g4

0x3b65,	// (0x0004ae5c) cale_bg_pane_g5

0x3b6d,	// (0x0004ae64) cale_bg_pane_g6

0x3b75,	// (0x0004ae6c) cale_bg_pane_g7

0x3b7d,	// (0x0004ae74) cale_bg_pane_g8

0x3b85,	// (0x0004ae7c) cale_bg_pane_g9

0x0008,

0xf2e5,	// (0x000565dc) cale_bg_pane_g

0x3b8d,	// (0x0004ae84) list_cale_time_pane_ParamLimits

0x3b8d,	// (0x0004ae84) list_cale_time_pane

0x3ba0,	// (0x0004ae97) list_cale_time_pane_g1_ParamLimits

0x3ba0,	// (0x0004ae97) list_cale_time_pane_g1

0x3bac,	// (0x0004aea3) list_cale_time_pane_g2_ParamLimits

0x3bac,	// (0x0004aea3) list_cale_time_pane_g2

0x3bb9,	// (0x0004aeb0) list_cale_time_pane_g3_ParamLimits

0x3bb9,	// (0x0004aeb0) list_cale_time_pane_g3

0x3bc7,	// (0x0004aebe) list_cale_time_pane_g4_ParamLimits

0x3bc7,	// (0x0004aebe) list_cale_time_pane_g4

0x3bd5,	// (0x0004aecc) list_cale_time_pane_g5_ParamLimits

0x3bd5,	// (0x0004aecc) list_cale_time_pane_g5

0x0005,

0xf2f8,	// (0x000565ef) list_cale_time_pane_g_ParamLimits

0xf2f8,	// (0x000565ef) list_cale_time_pane_g

0x3bf0,	// (0x0004aee7) list_cale_time_pane_t1_ParamLimits

0x3bf0,	// (0x0004aee7) list_cale_time_pane_t1

0x3c18,	// (0x0004af0f) list_cale_time_pane_t2_ParamLimits

0x3c18,	// (0x0004af0f) list_cale_time_pane_t2

0x42e2,	// (0x0004b5d9) aid_blid_cardinal_pane

0x432c,	// (0x0004b623) compass_pane_t4

0x3c40,	// (0x0004af37) list_cale_time_pane_t4_ParamLimits

0x3c40,	// (0x0004af37) list_cale_time_pane_t4

0x433a,	// (0x0004b631) compass_pane_t5

0x4348,	// (0x0004b63f) compass_pane_t6

0x4356,	// (0x0004b64d) compass_pane_t7

0x43ec,	// (0x0004b6e3) navi_pane_cc_t1

0x460d,	// (0x0004b904) aid_phob_thumbnail_center_pane

0x4c4b,	// (0x0004bf42) main_postcard_pane_g4_ParamLimits

0x0002,

0xf305,	// (0x000565fc) list_cale_time_pane_t_ParamLimits

0xf305,	// (0x000565fc) list_cale_time_pane_t

0xe98d,	// (0x00055c84) bg_popup_window_pane_cp02_ParamLimits

0xe98d,	// (0x00055c84) bg_popup_window_pane_cp02

0x3c68,	// (0x0004af5f) heading_pane_cp01_ParamLimits

0x3c68,	// (0x0004af5f) heading_pane_cp01

0x3c74,	// (0x0004af6b) loc_req_pane_ParamLimits

0x3c74,	// (0x0004af6b) loc_req_pane

0x3c84,	// (0x0004af7b) loc_type_pane_ParamLimits

0x3c84,	// (0x0004af7b) loc_type_pane

0x3c96,	// (0x0004af8d) loc_type_pane_t1_ParamLimits

0x3c96,	// (0x0004af8d) loc_type_pane_t1

0x3ca8,	// (0x0004af9f) loc_type_pane_t2_ParamLimits

0x3ca8,	// (0x0004af9f) loc_type_pane_t2

0x3cba,	// (0x0004afb1) loc_type_pane_t3_ParamLimits

0x3cba,	// (0x0004afb1) loc_type_pane_t3

0x0002,

0xf30c,	// (0x00056603) loc_type_pane_t_ParamLimits

0xf30c,	// (0x00056603) loc_type_pane_t

0x3ccc,	// (0x0004afc3) list_loc_req_pane

0x3cd6,	// (0x0004afcd) scroll_pane_cp012

0x3ce1,	// (0x0004afd8) list_single_loc_request_popup_menu_pane_ParamLimits

0x3ce1,	// (0x0004afd8) list_single_loc_request_popup_menu_pane

0x3cee,	// (0x0004afe5) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x3cee,	// (0x0004afe5) list_single_loc_request_popup_menu_pane_g1

0x3cfa,	// (0x0004aff1) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x3cfa,	// (0x0004aff1) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf313,	// (0x0005660a) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf313,	// (0x0005660a) list_single_loc_request_popup_menu_pane_g

0x3d06,	// (0x0004affd) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x3d06,	// (0x0004affd) list_single_loc_request_popup_menu_pane_t1

0x1718,	// (0x00048a0f) bg_popup_window_pane_cp03_ParamLimits

0x1718,	// (0x00048a0f) bg_popup_window_pane_cp03

0x3d1c,	// (0x0004b013) heading_loc_req_pane_ParamLimits

0x3d1c,	// (0x0004b013) heading_loc_req_pane

0x3d28,	// (0x0004b01f) popup_dyc_status_message_window_g1_ParamLimits

0x3d28,	// (0x0004b01f) popup_dyc_status_message_window_g1

0x3d3c,	// (0x0004b033) popup_dyc_status_message_window_t1_ParamLimits

0x3d3c,	// (0x0004b033) popup_dyc_status_message_window_t1

0x3d51,	// (0x0004b048) popup_dyc_status_message_window_t2_ParamLimits

0x3d51,	// (0x0004b048) popup_dyc_status_message_window_t2

0x3d66,	// (0x0004b05d) popup_dyc_status_message_window_t3_ParamLimits

0x3d66,	// (0x0004b05d) popup_dyc_status_message_window_t3

0x0002,

0xf318,	// (0x0005660f) popup_dyc_status_message_window_t_ParamLimits

0xf318,	// (0x0005660f) popup_dyc_status_message_window_t

0x14bd,	// (0x000487b4) bg_heading_pane_cp01

0x3d82,	// (0x0004b079) heading_loc_req_pane_g1

0x3d8a,	// (0x0004b081) heading_loc_req_pane_g2

0x3d92,	// (0x0004b089) heading_loc_req_pane_g3

0x0002,

0xf31f,	// (0x00056616) heading_loc_req_pane_g

0x3d9a,	// (0x0004b091) heading_loc_req_pane_t1

0x3db5,	// (0x0004b0ac) bg_popup_sub_pane_cp01_ParamLimits

0x3db5,	// (0x0004b0ac) bg_popup_sub_pane_cp01

0x3dc3,	// (0x0004b0ba) popup_cale_events_window_g1_ParamLimits

0x3dc3,	// (0x0004b0ba) popup_cale_events_window_g1

0x3de3,	// (0x0004b0da) popup_cale_events_window_g2_ParamLimits

0x3de3,	// (0x0004b0da) popup_cale_events_window_g2

0x0001,

0xf353,	// (0x0005664a) popup_cale_events_window_g_ParamLimits

0xf353,	// (0x0005664a) popup_cale_events_window_g

0x3e03,	// (0x0004b0fa) popup_cale_events_window_t1_ParamLimits

0x3e03,	// (0x0004b0fa) popup_cale_events_window_t1

0x3e15,	// (0x0004b10c) popup_cale_events_window_t2_ParamLimits

0x3e15,	// (0x0004b10c) popup_cale_events_window_t2

0x3e53,	// (0x0004b14a) popup_cale_events_window_t3_ParamLimits

0x3e53,	// (0x0004b14a) popup_cale_events_window_t3

0x3e8d,	// (0x0004b184) popup_cale_events_window_t4_ParamLimits

0x3e8d,	// (0x0004b184) popup_cale_events_window_t4

0x0003,

0xf358,	// (0x0005664f) popup_cale_events_window_t_ParamLimits

0xf358,	// (0x0005664f) popup_cale_events_window_t

0x3ec3,	// (0x0004b1ba) call_type_pane

0x3ed3,	// (0x0004b1ca) popup_call_status_window_g1

0x3ee7,	// (0x0004b1de) popup_call_status_window_g2

0x3efb,	// (0x0004b1f2) popup_call_status_window_g3

0x0002,

0xf361,	// (0x00056658) popup_call_status_window_g

0x3f0a,	// (0x0004b201) call_type_pane_g1

0x3f13,	// (0x0004b20a) call_type_pane_g2

0x0001,

0xf368,	// (0x0005665f) call_type_pane_g

0x14bd,	// (0x000487b4) bg_popup_sub_pane_cp02

0x3f1c,	// (0x0004b213) listscroll_popup_wml_pane

0x3f24,	// (0x0004b21b) list_wml_pane

0x3f2e,	// (0x0004b225) scroll_pane_cp013

0x3f39,	// (0x0004b230) list_single_graphic_popup_wml_pane_ParamLimits

0x3f39,	// (0x0004b230) list_single_graphic_popup_wml_pane

0x1ba5,	// (0x00048e9c) list_single_graphic_popup_wml_pane_g1

0x3f4d,	// (0x0004b244) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf36d,	// (0x00056664) list_single_graphic_popup_wml_pane_g

0x3f55,	// (0x0004b24c) list_single_graphic_popup_wml_pane_t1

0x3f6b,	// (0x0004b262) aid_call_pane

0x1710,	// (0x00048a07) popup_clock_analogue_window_g1

0x1710,	// (0x00048a07) popup_clock_analogue_window_g2

0xb2a7,	// (0x0005259e) popup_clock_analogue_window_g3

0xb2a7,	// (0x0005259e) popup_clock_analogue_window_g4

0x1ba5,	// (0x00048e9c) popup_clock_analogue_window_g5

0x0004,

0xf372,	// (0x00056669) popup_clock_analogue_window_g

0xb2af,	// (0x000525a6) popup_clock_analogue_window_t1

0xb2bd,	// (0x000525b4) clock_digital_number_pane_ParamLimits

0xb2bd,	// (0x000525b4) clock_digital_number_pane

0xb2c9,	// (0x000525c0) clock_digital_number_pane_cp02_ParamLimits

0xb2c9,	// (0x000525c0) clock_digital_number_pane_cp02

0xb2d5,	// (0x000525cc) clock_digital_number_pane_cp03_ParamLimits

0xb2d5,	// (0x000525cc) clock_digital_number_pane_cp03

0xb2e1,	// (0x000525d8) clock_digital_number_pane_cp04_ParamLimits

0xb2e1,	// (0x000525d8) clock_digital_number_pane_cp04

0xb2f1,	// (0x000525e8) clock_digital_separator_pane_ParamLimits

0xb2f1,	// (0x000525e8) clock_digital_separator_pane

0xb2fd,	// (0x000525f4) popup_clock_digital_window_t1

0x1ba5,	// (0x00048e9c) clock_digital_number_pane_g1

0x1ba5,	// (0x00048e9c) clock_digital_number_pane_g2

0x0001,

0xf2e0,	// (0x000565d7) clock_digital_number_pane_g

0x1ba5,	// (0x00048e9c) clock_digital_separator_pane_g1

0x1ba5,	// (0x00048e9c) clock_digital_separator_pane_g2

0x0001,

0xf2e0,	// (0x000565d7) clock_digital_separator_pane_g

0x14bd,	// (0x000487b4) bg_popup_window_pane_cp04

0x3f73,	// (0x0004b26a) heading_pane_cp03

0x3f7b,	// (0x0004b272) listscroll_popup_gms_pane

0x3f83,	// (0x0004b27a) grid_large_graphic_popup_pane

0x3f8d,	// (0x0004b284) listscroll_popup_gms_pane_g1

0x3f95,	// (0x0004b28c) listscroll_popup_gms_pane_g2

0x0001,

0xf37d,	// (0x00056674) listscroll_popup_gms_pane_g

0x2d2f,	// (0x0004a026) scroll_pane_cp014

0x3f9d,	// (0x0004b294) cell_large_graphic_popup_pane_ParamLimits

0x3f9d,	// (0x0004b294) cell_large_graphic_popup_pane

0x3fb5,	// (0x0004b2ac) cell_large_graphic_popup_pane_g1_ParamLimits

0x3fb5,	// (0x0004b2ac) cell_large_graphic_popup_pane_g1

0x3fc1,	// (0x0004b2b8) cell_large_graphic_popup_pane_g2_ParamLimits

0x3fc1,	// (0x0004b2b8) cell_large_graphic_popup_pane_g2

0x3fcd,	// (0x0004b2c4) cell_large_graphic_popup_pane_g3_ParamLimits

0x3fcd,	// (0x0004b2c4) cell_large_graphic_popup_pane_g3

0x3fda,	// (0x0004b2d1) cell_large_graphic_popup_pane_g4_ParamLimits

0x3fda,	// (0x0004b2d1) cell_large_graphic_popup_pane_g4

0x0003,

0xf382,	// (0x00056679) cell_large_graphic_popup_pane_g_ParamLimits

0xf382,	// (0x00056679) cell_large_graphic_popup_pane_g

0x3fea,	// (0x0004b2e1) grid_highlight_pane_cp010

0x1ba5,	// (0x00048e9c) bg_popup_call_pane_g1

0x3ff4,	// (0x0004b2eb) list_single_graphic_popup_conf_pane_ParamLimits

0x3ff4,	// (0x0004b2eb) list_single_graphic_popup_conf_pane

0x4007,	// (0x0004b2fe) list_highlight_pane_cp01

0x4010,	// (0x0004b307) list_single_graphic_popup_conf_pane_g1

0x4018,	// (0x0004b30f) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf38b,	// (0x00056682) list_single_graphic_popup_conf_pane_g

0x4020,	// (0x0004b317) list_single_graphic_popup_conf_pane_t1

0x402e,	// (0x0004b325) linegrid_cams_pane_g1

0x4037,	// (0x0004b32e) linegrid_cams_pane_g2

0x23df,	// (0x000496d6) linegrid_cams_pane_g3

0x4040,	// (0x0004b337) linegrid_cams_pane_g4

0x4049,	// (0x0004b340) linegrid_cams_pane_g5

0x4052,	// (0x0004b349) linegrid_cams_pane_g6

0x23e8,	// (0x000496df) linegrid_cams_pane_g7

0x0006,

0xf390,	// (0x00056687) linegrid_cams_pane_g

0x405d,	// (0x0004b354) popup_clock_analogue_window

0x405d,	// (0x0004b354) popup_clock_digital_window

0x14bd,	// (0x000487b4) popup_phob_thumbnail_window

0x1ba5,	// (0x00048e9c) call_video_uplink_pane_g1

0x4066,	// (0x0004b35d) call_video_uplink_pane_g2

0x0001,

0xf39f,	// (0x00056696) call_video_uplink_pane_g

0x406e,	// (0x0004b365) video_uplink_pane

0x4076,	// (0x0004b36d) mce_image_pane_g1

0x4080,	// (0x0004b377) mce_image_pane_g2

0x408a,	// (0x0004b381) mce_image_pane_g3

0x4092,	// (0x0004b389) mce_image_pane_g4

0x409a,	// (0x0004b391) mce_image_pane_g5

0x0004,

0xf3a4,	// (0x0005669b) mce_image_pane_g

0x40a2,	// (0x0004b399) control_top_pane_stacon_cp01_ParamLimits

0x40a2,	// (0x0004b399) control_top_pane_stacon_cp01

0x40b6,	// (0x0004b3ad) uni_indicator_pane_stacon_cp01_ParamLimits

0x40b6,	// (0x0004b3ad) uni_indicator_pane_stacon_cp01

0x40c7,	// (0x0004b3be) bg_popup_sub_pane_cp03

0x40d1,	// (0x0004b3c8) chi_dic_find_pane

0x40d9,	// (0x0004b3d0) listscroll_chi_dic_pane

0x40e2,	// (0x0004b3d9) main_pane_chidic_g1

0x40f5,	// (0x0004b3ec) chi_dic_find_pane_t1

0x4103,	// (0x0004b3fa) find_chidic_pane

0x410c,	// (0x0004b403) chi_dic_list_pane_ParamLimits

0x410c,	// (0x0004b403) chi_dic_list_pane

0x411d,	// (0x0004b414) scroll_pane_cp020

0x4125,	// (0x0004b41c) find_chidic_pane_t1

0x14bd,	// (0x000487b4) input_focus_pane_cp06

0x4134,	// (0x0004b42b) list_chi_dic_pane_ParamLimits

0x4134,	// (0x0004b42b) list_chi_dic_pane

0x4146,	// (0x0004b43d) list_chi_dic_pane_t1_ParamLimits

0x4146,	// (0x0004b43d) list_chi_dic_pane_t1

0x14bd,	// (0x000487b4) list_highlight_pane_cp020

0x4159,	// (0x0004b450) bg_cale_heading_pane_g1

0x4161,	// (0x0004b458) bg_cale_heading_pane_g2

0x4169,	// (0x0004b460) bg_cale_heading_pane_g3

0x4171,	// (0x0004b468) bg_cale_heading_pane_g4

0x417b,	// (0x0004b472) bg_cale_heading_pane_g5

0x4185,	// (0x0004b47c) bg_cale_heading_pane_g6

0x418d,	// (0x0004b484) bg_cale_heading_pane_g7

0x4195,	// (0x0004b48c) bg_cale_heading_pane_g8

0x419f,	// (0x0004b496) bg_cale_heading_pane_g9

0x0008,

0xf3af,	// (0x000566a6) bg_cale_heading_pane_g

0x4159,	// (0x0004b450) bg_cale_side_pane_g1

0x41a9,	// (0x0004b4a0) bg_cale_side_pane_g2

0x41b1,	// (0x0004b4a8) bg_cale_side_pane_g3

0x41b9,	// (0x0004b4b0) bg_cale_side_pane_g4

0x41c1,	// (0x0004b4b8) bg_cale_side_pane_g5

0x41c9,	// (0x0004b4c0) bg_cale_side_pane_g6

0x41d1,	// (0x0004b4c8) bg_cale_side_pane_g7

0x41d9,	// (0x0004b4d0) bg_cale_side_pane_g8

0x41e1,	// (0x0004b4d8) bg_cale_side_pane_g9

0x0008,

0xf3c2,	// (0x000566b9) bg_cale_side_pane_g

0x41e9,	// (0x0004b4e0) popup_call_status_window_ParamLimits

0x41e9,	// (0x0004b4e0) popup_call_status_window

0x4232,	// (0x0004b529) stacon_top_pane

0x423a,	// (0x0004b531) status_pane_ParamLimits

0x423a,	// (0x0004b531) status_pane

0x424f,	// (0x0004b546) status_small_pane

0x4257,	// (0x0004b54e) control_pane

0x14bd,	// (0x000487b4) stacon_bottom_pane

0x425f,	// (0x0004b556) list_single_mce_smart_pane_t1_ParamLimits

0x425f,	// (0x0004b556) list_single_mce_smart_pane_t1

0x4272,	// (0x0004b569) list_single_mce_smart_pane_t2_ParamLimits

0x4272,	// (0x0004b569) list_single_mce_smart_pane_t2

0x0001,

0xf3d5,	// (0x000566cc) list_single_mce_smart_pane_t_ParamLimits

0xf3d5,	// (0x000566cc) list_single_mce_smart_pane_t

0x4291,	// (0x0004b588) compass_pane

0x429a,	// (0x0004b591) main_location2_pane_t1

0x42ac,	// (0x0004b5a3) main_location2_pane_t2

0x42be,	// (0x0004b5b5) main_location2_pane_t3

0x0003,

0xf3da,	// (0x000566d1) main_location2_pane_t

0x4302,	// (0x0004b5f9) compass_pane_g1_ParamLimits

0x4302,	// (0x0004b5f9) compass_pane_g1

0x430e,	// (0x0004b605) compass_pane_t1

0x431d,	// (0x0004b614) compass_pane_t2

0x0005,

0xf3e3,	// (0x000566da) compass_pane_t

0x4364,	// (0x0004b65b) text_secondary_cp61

0x43e3,	// (0x0004b6da) navi_pane_cams_g5

0x445d,	// (0x0004b754) navi_pane_im_t1

0x446b,	// (0x0004b762) navi_pane_mp_g1_ParamLimits

0x446b,	// (0x0004b762) navi_pane_mp_g1

0x447f,	// (0x0004b776) navi_pane_mp_g2_ParamLimits

0x447f,	// (0x0004b776) navi_pane_mp_g2

0x448b,	// (0x0004b782) navi_pane_mp_g3_ParamLimits

0x448b,	// (0x0004b782) navi_pane_mp_g3

0x0002,

0xf3f7,	// (0x000566ee) navi_pane_mp_g_ParamLimits

0xf3f7,	// (0x000566ee) navi_pane_mp_g

0x4497,	// (0x0004b78e) navi_pane_mp_t1

0x44a5,	// (0x0004b79c) navi_pane_mp_t2

0x0002,

0xf3fe,	// (0x000566f5) navi_pane_mp_t

0x454e,	// (0x0004b845) navi_pane_vt_g1

0x4497,	// (0x0004b78e) navi_pane_vt_t1

0x4556,	// (0x0004b84d) navi_slider_pane

0x4566,	// (0x0004b85d) zooming_pane

0x456e,	// (0x0004b865) navi_slider_pane_g1

0xb31a,	// (0x00052611) navi_slider_pane_g2

0x0006,

0xf405,	// (0x000566fc) navi_slider_pane_g

0x4592,	// (0x0004b889) aid_levels_zoom

0x459a,	// (0x0004b891) zooming_pane_g1

0x45a2,	// (0x0004b899) zooming_pane_g2

0x45a2,	// (0x0004b899) zooming_pane_g3

0x0002,

0xf414,	// (0x0005670b) zooming_pane_g

0x45aa,	// (0x0004b8a1) level_10_zoom

0x45b3,	// (0x0004b8aa) level_11_zoom

0x45bc,	// (0x0004b8b3) level_1_zoom

0x45c5,	// (0x0004b8bc) level_2_zoom

0x45ce,	// (0x0004b8c5) level_3_zoom

0x45d7,	// (0x0004b8ce) level_4_zoom

0x45e0,	// (0x0004b8d7) level_5_zoom

0x45e9,	// (0x0004b8e0) level_6_zoom

0x45f2,	// (0x0004b8e9) level_7_zoom

0x45fb,	// (0x0004b8f2) level_8_zoom

0x4604,	// (0x0004b8fb) level_9_zoom

0x4615,	// (0x0004b90c) popup_phob_thumbnail_window_g1

0x461d,	// (0x0004b914) popup_phob_thumbnail_window_g2

0x0001,

0xf41b,	// (0x00056712) popup_phob_thumbnail_window_g

0xba9d,	// (0x00052d94) level_1_location

0xbaa5,	// (0x00052d9c) level_2_location

0xbaad,	// (0x00052da4) level_3_location

0xbab5,	// (0x00052dac) level_4_location

0x4566,	// (0x0004b85d) level_5_location

0x4625,	// (0x0004b91c) mce_icon_pane_g1

0x462f,	// (0x0004b926) mce_icon_pane_g2

0x0001,

0xf420,	// (0x00056717) mce_icon_pane_g

0x4637,	// (0x0004b92e) main_mup_pane_g1_ParamLimits

0x4637,	// (0x0004b92e) main_mup_pane_g1

0x464d,	// (0x0004b944) main_mup_pane_g2_ParamLimits

0x464d,	// (0x0004b944) main_mup_pane_g2

0x4665,	// (0x0004b95c) main_mup_pane_g3_ParamLimits

0x4665,	// (0x0004b95c) main_mup_pane_g3

0x467d,	// (0x0004b974) main_mup_pane_g4_ParamLimits

0x467d,	// (0x0004b974) main_mup_pane_g4

0x4695,	// (0x0004b98c) main_mup_pane_g5_ParamLimits

0x4695,	// (0x0004b98c) main_mup_pane_g5

0x46b1,	// (0x0004b9a8) main_mup_pane_g6_ParamLimits

0x46b1,	// (0x0004b9a8) main_mup_pane_g6

0x46c9,	// (0x0004b9c0) main_mup_pane_g7_ParamLimits

0x46c9,	// (0x0004b9c0) main_mup_pane_g7

0x46e1,	// (0x0004b9d8) main_mup_pane_g8_ParamLimits

0x46e1,	// (0x0004b9d8) main_mup_pane_g8

0x46fb,	// (0x0004b9f2) main_mup_pane_g9_ParamLimits

0x46fb,	// (0x0004b9f2) main_mup_pane_g9

0x4715,	// (0x0004ba0c) main_mup_pane_g10_ParamLimits

0x4715,	// (0x0004ba0c) main_mup_pane_g10

0x472f,	// (0x0004ba26) main_mup_pane_g11_ParamLimits

0x472f,	// (0x0004ba26) main_mup_pane_g11

0x4743,	// (0x0004ba3a) main_mup_pane_g12_ParamLimits

0x4743,	// (0x0004ba3a) main_mup_pane_g12

0x4759,	// (0x0004ba50) main_mup_pane_g13_ParamLimits

0x4759,	// (0x0004ba50) main_mup_pane_g13

0x000c,

0xf425,	// (0x0005671c) main_mup_pane_g_ParamLimits

0xf425,	// (0x0005671c) main_mup_pane_g

0x476d,	// (0x0004ba64) main_mup_pane_t1_ParamLimits

0x476d,	// (0x0004ba64) main_mup_pane_t1

0x4787,	// (0x0004ba7e) main_mup_pane_t2_ParamLimits

0x4787,	// (0x0004ba7e) main_mup_pane_t2

0x479f,	// (0x0004ba96) main_mup_pane_t3_ParamLimits

0x479f,	// (0x0004ba96) main_mup_pane_t3

0x47b7,	// (0x0004baae) main_mup_pane_t4_ParamLimits

0x47b7,	// (0x0004baae) main_mup_pane_t4

0x47d5,	// (0x0004bacc) main_mup_pane_t5_ParamLimits

0x47d5,	// (0x0004bacc) main_mup_pane_t5

0x47ea,	// (0x0004bae1) main_mup_pane_t6_ParamLimits

0x47ea,	// (0x0004bae1) main_mup_pane_t6

0x0005,

0xf440,	// (0x00056737) main_mup_pane_t_ParamLimits

0xf440,	// (0x00056737) main_mup_pane_t

0x47fc,	// (0x0004baf3) mup_progress_pane_ParamLimits

0x47fc,	// (0x0004baf3) mup_progress_pane

0x4808,	// (0x0004baff) mup_visualizer_pane_ParamLimits

0x4808,	// (0x0004baff) mup_visualizer_pane

0x4838,	// (0x0004bb2f) mup_volume_pane_ParamLimits

0x4838,	// (0x0004bb2f) mup_volume_pane

0x4856,	// (0x0004bb4d) mup_visualizer_pane_g1_ParamLimits

0x4856,	// (0x0004bb4d) mup_visualizer_pane_g1

0x4856,	// (0x0004bb4d) mup_visualizer_pane_g2_ParamLimits

0x4856,	// (0x0004bb4d) mup_visualizer_pane_g2

0x4302,	// (0x0004b5f9) mup_visualizer_pane_g3_ParamLimits

0x4302,	// (0x0004b5f9) mup_visualizer_pane_g3

0x0002,

0xf44d,	// (0x00056744) mup_visualizer_pane_g_ParamLimits

0xf44d,	// (0x00056744) mup_visualizer_pane_g

0x1ba5,	// (0x00048e9c) mup_volume_pane_g1

0x486c,	// (0x0004bb63) mup_volume_pane_g2

0x0001,

0xf454,	// (0x0005674b) mup_volume_pane_g

0x1ba5,	// (0x00048e9c) mup_progress_pane_g1

0x4875,	// (0x0004bb6c) mup_progress_pane_g2

0x487e,	// (0x0004bb75) mup_progress_pane_g3

0x0002,

0xf459,	// (0x00056750) mup_progress_pane_g

0x14bd,	// (0x000487b4) bg_popup_window_pane_cp05

0x4887,	// (0x0004bb7e) heading_pane_cp02_ParamLimits

0x4887,	// (0x0004bb7e) heading_pane_cp02

0x48a1,	// (0x0004bb98) list_popup_blid_pane

0x48a9,	// (0x0004bba0) list_blid_sat_info_pane_ParamLimits

0x48a9,	// (0x0004bba0) list_blid_sat_info_pane

0x48bc,	// (0x0004bbb3) list_blid_sat_info_pane_g1

0x48c4,	// (0x0004bbbb) list_blid_sat_info_pane_t1

0x49ca,	// (0x0004bcc1) mup_equalizer_pane_ParamLimits

0x49ca,	// (0x0004bcc1) mup_equalizer_pane

0x49e3,	// (0x0004bcda) mup_equalizer_pane_cp1_ParamLimits

0x49e3,	// (0x0004bcda) mup_equalizer_pane_cp1

0x4a00,	// (0x0004bcf7) mup_equalizer_pane_cp2_ParamLimits

0x4a00,	// (0x0004bcf7) mup_equalizer_pane_cp2

0x4a1d,	// (0x0004bd14) mup_equalizer_pane_cp3_ParamLimits

0x4a1d,	// (0x0004bd14) mup_equalizer_pane_cp3

0x4a3e,	// (0x0004bd35) mup_equalizer_pane_cp4_ParamLimits

0x4a3e,	// (0x0004bd35) mup_equalizer_pane_cp4

0x4a5f,	// (0x0004bd56) mup_equalizer_pane_cp5

0x4a73,	// (0x0004bd6a) mup_equalizer_pane_cp6

0x4a87,	// (0x0004bd7e) mup_equalizer_pane_cp7

0xb9bb,	// (0x00052cb2) bg_popup_call_poc_act_pane_g9

0xb9c3,	// (0x00052cba) bg_popup_call_poc_act_pane_g10

0xb9cb,	// (0x00052cc2) bg_popup_call_poc_act_pane_g11

0x000a,

0x1718,	// (0x00048a0f) mup_scale_pane

0x1ba5,	// (0x00048e9c) mup_scale_pane_g1

0x4a9b,	// (0x0004bd92) mup_scale_pane_g2

0x0006,

0xf475,	// (0x0005676c) mup_scale_pane_g

0x4ad1,	// (0x0004bdc8) msg_data_pane

0x4ad9,	// (0x0004bdd0) scroll_pane_cp017

0x0589,	// (0x00047880) bg_list_pane_cp04_ParamLimits

0x0589,	// (0x00047880) bg_list_pane_cp04

0x4ae1,	// (0x0004bdd8) msg_data_pane_g1

0x4ae9,	// (0x0004bde0) msg_data_pane_g2

0x4af3,	// (0x0004bdea) msg_data_pane_g3

0x4afb,	// (0x0004bdf2) msg_data_pane_g4

0x4b03,	// (0x0004bdfa) msg_data_pane_g5

0x4b0b,	// (0x0004be02) msg_data_pane_g6

0x4b13,	// (0x0004be0a) msg_data_pane_g7

0x0006,

0xf484,	// (0x0005677b) msg_data_pane_g

0x05a1,	// (0x00047898) msg_text_pane_ParamLimits

0x05a1,	// (0x00047898) msg_text_pane

0x4b1b,	// (0x0004be12) qrid_highlight_pane_cp011_ParamLimits

0x4b1b,	// (0x0004be12) qrid_highlight_pane_cp011

0x14bd,	// (0x000487b4) msg_body_pane

0x14bd,	// (0x000487b4) msg_header_pane

0x4b3c,	// (0x0004be33) input_focus_pane_cp07

0x05d4,	// (0x000478cb) msg_header_pane_t1_ParamLimits

0x05d4,	// (0x000478cb) msg_header_pane_t1

0xb334,	// (0x0005262b) msg_header_pane_t2_ParamLimits

0xb334,	// (0x0005262b) msg_header_pane_t2

0x0001,

0xf498,	// (0x0005678f) msg_header_pane_t_ParamLimits

0xf498,	// (0x0005678f) msg_header_pane_t

0x4b51,	// (0x0004be48) msg_body_pane_g1

0x05e6,	// (0x000478dd) msg_body_pane_t1_ParamLimits

0x05e6,	// (0x000478dd) msg_body_pane_t1

0xb346,	// (0x0005263d) msg_body_pane_t2_ParamLimits

0xb346,	// (0x0005263d) msg_body_pane_t2

0xb358,	// (0x0005264f) msg_body_pane_t3_ParamLimits

0xb358,	// (0x0005264f) msg_body_pane_t3

0x0002,

0xf49d,	// (0x00056794) msg_body_pane_t_ParamLimits

0xf49d,	// (0x00056794) msg_body_pane_t

0x4b93,	// (0x0004be8a) main_viewer_pane_g1_ParamLimits

0x4b93,	// (0x0004be8a) main_viewer_pane_g1

0x4ba1,	// (0x0004be98) main_viewer_pane_g2_ParamLimits

0x4ba1,	// (0x0004be98) main_viewer_pane_g2

0x4baf,	// (0x0004bea6) main_viewer_pane_g3_ParamLimits

0x4baf,	// (0x0004bea6) main_viewer_pane_g3

0x4bbe,	// (0x0004beb5) main_viewer_pane_g4_ParamLimits

0x4bbe,	// (0x0004beb5) main_viewer_pane_g4

0xb382,	// (0x00052679) main_viewer_pane_g5_ParamLimits

0xb382,	// (0x00052679) main_viewer_pane_g5

0xb382,	// (0x00052679) main_viewer_pane_g7_ParamLimits

0xb382,	// (0x00052679) main_viewer_pane_g7

0xb394,	// (0x0005268b) main_viewer_pane_g8_ParamLimits

0xb394,	// (0x0005268b) main_viewer_pane_g8

0x0007,

0xf4ad,	// (0x000567a4) main_viewer_pane_g_ParamLimits

0xf4ad,	// (0x000567a4) main_viewer_pane_g

0x4bcd,	// (0x0004bec4) viewer_content_pane_ParamLimits

0x4bcd,	// (0x0004bec4) viewer_content_pane

0x4c08,	// (0x0004beff) main_postcard_pane_g1_ParamLimits

0x4c08,	// (0x0004beff) main_postcard_pane_g1

0x4c1e,	// (0x0004bf15) main_postcard_pane_g2_ParamLimits

0x4c1e,	// (0x0004bf15) main_postcard_pane_g2

0x4c34,	// (0x0004bf2b) main_postcard_pane_g3_ParamLimits

0x4c34,	// (0x0004bf2b) main_postcard_pane_g3

0x0005,

0xf4be,	// (0x000567b5) main_postcard_pane_g_ParamLimits

0xf4be,	// (0x000567b5) main_postcard_pane_g

0x4c4b,	// (0x0004bf42) main_postcard_pane_g4

0xbbf1,	// (0x00052ee8) smil_status_volume_pane_g2

0x4c8e,	// (0x0004bf85) postcard_pane_ParamLimits

0x4c8e,	// (0x0004bf85) postcard_pane

0x4cd0,	// (0x0004bfc7) postcard_pane_g1_ParamLimits

0x4cd0,	// (0x0004bfc7) postcard_pane_g1

0x4cde,	// (0x0004bfd5) postcard_pane_g2_ParamLimits

0x4cde,	// (0x0004bfd5) postcard_pane_g2

0x4cea,	// (0x0004bfe1) postcard_pane_g3_ParamLimits

0x4cea,	// (0x0004bfe1) postcard_pane_g3

0x4cf6,	// (0x0004bfed) postcard_pane_g4_ParamLimits

0x4cf6,	// (0x0004bfed) postcard_pane_g4

0x4d04,	// (0x0004bffb) postcard_pane_g5_ParamLimits

0x4d04,	// (0x0004bffb) postcard_pane_g5

0x4d19,	// (0x0004c010) postcard_pane_g6_ParamLimits

0x4d19,	// (0x0004c010) postcard_pane_g6

0x4cd0,	// (0x0004bfc7) postcard_pane_g7_ParamLimits

0x4cd0,	// (0x0004bfc7) postcard_pane_g7

0x0006,

0xf4cb,	// (0x000567c2) postcard_pane_g_ParamLimits

0xf4cb,	// (0x000567c2) postcard_pane_g

0x4d2d,	// (0x0004c024) main_mp2_pane_g1_ParamLimits

0x4d2d,	// (0x0004c024) main_mp2_pane_g1

0x4d39,	// (0x0004c030) main_mp2_pane_g2_ParamLimits

0x4d39,	// (0x0004c030) main_mp2_pane_g2

0x4d45,	// (0x0004c03c) main_mp2_pane_g3_ParamLimits

0x4d45,	// (0x0004c03c) main_mp2_pane_g3

0x0002,

0xf4da,	// (0x000567d1) main_mp2_pane_g_ParamLimits

0xf4da,	// (0x000567d1) main_mp2_pane_g

0x4d51,	// (0x0004c048) main_mp2_pane_t1_ParamLimits

0x4d51,	// (0x0004c048) main_mp2_pane_t1

0x4d66,	// (0x0004c05d) main_mp2_pane_t2_ParamLimits

0x4d66,	// (0x0004c05d) main_mp2_pane_t2

0x4d78,	// (0x0004c06f) main_mp2_pane_t3_ParamLimits

0x4d78,	// (0x0004c06f) main_mp2_pane_t3

0x0002,

0xf4e1,	// (0x000567d8) main_mp2_pane_t_ParamLimits

0xf4e1,	// (0x000567d8) main_mp2_pane_t

0x4d8a,	// (0x0004c081) pec_content_pane_ParamLimits

0x4d8a,	// (0x0004c081) pec_content_pane

0x2d2f,	// (0x0004a026) scroll_pane_cp015

0x4d9c,	// (0x0004c093) pec_attribute_pane_ParamLimits

0x4d9c,	// (0x0004c093) pec_attribute_pane

0x4dac,	// (0x0004c0a3) pec_content_pane_g1_ParamLimits

0x4dac,	// (0x0004c0a3) pec_content_pane_g1

0x4db8,	// (0x0004c0af) pec_content_pane_t1_ParamLimits

0x4db8,	// (0x0004c0af) pec_content_pane_t1

0x4dca,	// (0x0004c0c1) pec_content_pane_t2_ParamLimits

0x4dca,	// (0x0004c0c1) pec_content_pane_t2

0x0001,

0xf4e8,	// (0x000567df) pec_content_pane_t_ParamLimits

0xf4e8,	// (0x000567df) pec_content_pane_t

0x4ddc,	// (0x0004c0d3) list_single_graphic_pane_cp01_ParamLimits

0x4ddc,	// (0x0004c0d3) list_single_graphic_pane_cp01

0x1718,	// (0x00048a0f) bg_popup_sub_pane_cp04

0x4df1,	// (0x0004c0e8) popup_mup_playback_window_g1

0x4dfd,	// (0x0004c0f4) popup_mup_playback_window_t1

0x4e12,	// (0x0004c109) popup_mup_playback_window_t2

0x0001,

0xf4ed,	// (0x000567e4) popup_mup_playback_window_t

0x4e67,	// (0x0004c15e) main_image_pane_g1_ParamLimits

0x4e67,	// (0x0004c15e) main_image_pane_g1

0x4f44,	// (0x0004c23b) scroll_pane_cp018_ParamLimits

0x4f44,	// (0x0004c23b) scroll_pane_cp018

0x4f5c,	// (0x0004c253) scroll_pane_cp016_ParamLimits

0x4f5c,	// (0x0004c253) scroll_pane_cp016

0x4f90,	// (0x0004c287) smil2_image_pane_ParamLimits

0x4f90,	// (0x0004c287) smil2_image_pane

0x4fc0,	// (0x0004c2b7) smil2_root_pane_ParamLimits

0x4fc0,	// (0x0004c2b7) smil2_root_pane

0x4ff8,	// (0x0004c2ef) smil2_text_pane_ParamLimits

0x4ff8,	// (0x0004c2ef) smil2_text_pane

0x14bd,	// (0x000487b4) bg_list_pane_cp06

0x5080,	// (0x0004c377) grid_radio_pane

0x14bd,	// (0x000487b4) bg_popup_window_pane_cp06

0x5088,	// (0x0004c37f) main_fmradio_pane_t1

0x3f73,	// (0x0004b26a) heading_pane_cp04

0x5096,	// (0x0004c38d) main_fmradio_pane_t2

0xb9d3,	// (0x00052cca) popup_cale_lunar_info_window_g1

0x50a4,	// (0x0004c39b) main_fmradio_pane_t3

0xb9db,	// (0x00052cd2) popup_cale_lunar_info_window_g2

0x50b2,	// (0x0004c3a9) main_fmradio_pane_t4

0x0001,

0x50c0,	// (0x0004c3b7) main_fmradio_pane_t5

0x0004,

0xf5c8,	// (0x000568bf) popup_cale_lunar_info_window_g

0xf502,	// (0x000567f9) main_fmradio_pane_t

0x50ce,	// (0x0004c3c5) wait_bar_pane_cp03

0x50d6,	// (0x0004c3cd) cell_fmradio_pane_ParamLimits

0x50d6,	// (0x0004c3cd) cell_fmradio_pane

0x4cd0,	// (0x0004bfc7) cell_fmradio_pane_g1_ParamLimits

0x4cd0,	// (0x0004bfc7) cell_fmradio_pane_g1

0x14bd,	// (0x000487b4) grid_highlight_pane_cp011

0x50e9,	// (0x0004c3e0) poc_content_pane_ParamLimits

0x50e9,	// (0x0004c3e0) poc_content_pane

0x50fb,	// (0x0004c3f2) scroll_pane_cp019

0x5103,	// (0x0004c3fa) popup_call_poc_act_window_ParamLimits

0x5103,	// (0x0004c3fa) popup_call_poc_act_window

0x5127,	// (0x0004c41e) popup_call_poc_inact_window_ParamLimits

0x5127,	// (0x0004c41e) popup_call_poc_inact_window

0xf59f,	// (0x00056896) bg_popup_call_poc_act_pane_g

0xb94b,	// (0x00052c42) bg_popup_call_poc_inact_pane_g1

0xb953,	// (0x00052c4a) bg_popup_call_poc_inact_pane_g2

0x5140,	// (0x0004c437) popup_call_poc_act_window_g2

0xb95b,	// (0x00052c52) bg_popup_call_poc_inact_pane_g3

0xb963,	// (0x00052c5a) bg_popup_call_poc_inact_pane_g4

0xb96b,	// (0x00052c62) bg_popup_call_poc_inact_pane_g5

0x5148,	// (0x0004c43f) popup_call_poc_act_window_t1_ParamLimits

0x5148,	// (0x0004c43f) popup_call_poc_act_window_t1

0x5170,	// (0x0004c467) popup_call_poc_act_window_t2_ParamLimits

0x5170,	// (0x0004c467) popup_call_poc_act_window_t2

0x5198,	// (0x0004c48f) popup_call_poc_act_window_t3_ParamLimits

0x5198,	// (0x0004c48f) popup_call_poc_act_window_t3

0x51c0,	// (0x0004c4b7) popup_call_poc_act_window_t4_ParamLimits

0x51c0,	// (0x0004c4b7) popup_call_poc_act_window_t4

0x0003,

0xf50d,	// (0x00056804) popup_call_poc_act_window_t_ParamLimits

0xf50d,	// (0x00056804) popup_call_poc_act_window_t

0xb973,	// (0x00052c6a) bg_popup_call_poc_inact_pane_g6

0xb97b,	// (0x00052c72) bg_popup_call_poc_inact_pane_g7

0xb983,	// (0x00052c7a) bg_popup_call_poc_inact_pane_g8

0x51d2,	// (0x0004c4c9) popup_call_poc_inact_window_g2

0xb98b,	// (0x00052c82) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf58c,	// (0x00056883) bg_popup_call_poc_inact_pane_g

0x51da,	// (0x0004c4d1) popup_call_poc_inact_window_t1_ParamLimits

0x51da,	// (0x0004c4d1) popup_call_poc_inact_window_t1

0x51ef,	// (0x0004c4e6) popup_call_poc_inact_window_t2_ParamLimits

0x51ef,	// (0x0004c4e6) popup_call_poc_inact_window_t2

0x5204,	// (0x0004c4fb) popup_call_poc_inact_window_t3_ParamLimits

0x5204,	// (0x0004c4fb) popup_call_poc_inact_window_t3

0x0002,

0xf516,	// (0x0005680d) popup_call_poc_inact_window_t_ParamLimits

0xf516,	// (0x0005680d) popup_call_poc_inact_window_t

0xbb64,	// (0x00052e5b) context_pane_ParamLimits

0x627d,	// (0x0004d574) signal_pane_ParamLimits

0x4566,	// (0x0004b85d) main_call2_pane

0xbb3d,	// (0x00052e34) popup_phob_thumbnail2_window_ParamLimits

0xbb3d,	// (0x00052e34) popup_phob_thumbnail2_window

0xb36a,	// (0x00052661) aid_hotspot_pointer_arrow_pane

0xb372,	// (0x00052669) aid_hotspot_pointer_hand_pane

0x5da1,	// (0x0004d098) phob_pre_status_pane_g5

0x2499,	// (0x00049790) cams_zoom_pane_ParamLimits

0x24a8,	// (0x0004979f) image_vga_pane_ParamLimits

0x24c2,	// (0x000497b9) main_camera_pane_g1_ParamLimits

0x24d4,	// (0x000497cb) main_camera_pane_g2_ParamLimits

0x24e4,	// (0x000497db) main_camera_pane_g3_ParamLimits

0x24f4,	// (0x000497eb) main_camera_pane_g4_ParamLimits

0x2504,	// (0x000497fb) main_camera_pane_g5_ParamLimits

0x2514,	// (0x0004980b) main_camera_pane_g6_ParamLimits

0x2526,	// (0x0004981d) main_camera_pane_g7_ParamLimits

0xf215,	// (0x0005650c) main_camera_pane_g_ParamLimits

0x2542,	// (0x00049839) main_camera_pane_t1_ParamLimits

0x2558,	// (0x0004984f) main_camera_pane_t2_ParamLimits

0xf226,	// (0x0005651d) main_camera_pane_t_ParamLimits

0x1718,	// (0x00048a0f) bg_popup_preview_window_pane_cp01_ParamLimits

0x1718,	// (0x00048a0f) bg_popup_preview_window_pane_cp01

0x5219,	// (0x0004c510) popup_phob_thumbnail2_window_g1_ParamLimits

0x5219,	// (0x0004c510) popup_phob_thumbnail2_window_g1

0x14bd,	// (0x000487b4) call2_cli_visual_pane

0x5240,	// (0x0004c537) popup_call2_audio_conf_window_ParamLimits

0x5240,	// (0x0004c537) popup_call2_audio_conf_window

0x5260,	// (0x0004c557) popup_call2_audio_first_window_ParamLimits

0x5260,	// (0x0004c557) popup_call2_audio_first_window

0x52f6,	// (0x0004c5ed) popup_call2_audio_in_window_ParamLimits

0x52f6,	// (0x0004c5ed) popup_call2_audio_in_window

0x533e,	// (0x0004c635) popup_call2_audio_out_window_ParamLimits

0x533e,	// (0x0004c635) popup_call2_audio_out_window

0x53a8,	// (0x0004c69f) popup_call2_audio_second_window_ParamLimits

0x53a8,	// (0x0004c69f) popup_call2_audio_second_window

0x540e,	// (0x0004c705) popup_call2_audio_wait_window_ParamLimits

0x540e,	// (0x0004c705) popup_call2_audio_wait_window

0x14bd,	// (0x000487b4) bg_popup_call2_act_pane_cp03

0x16fa,	// (0x000489f1) list_conf_pane_cp

0x5448,	// (0x0004c73f) popup_call2_audio_conf_window_t1

0x3ff4,	// (0x0004b2eb) list_single_graphic_popup_conf2_pane_ParamLimits

0x3ff4,	// (0x0004b2eb) list_single_graphic_popup_conf2_pane

0x4007,	// (0x0004b2fe) list_highlight_pane_cp04

0x5456,	// (0x0004c74d) list_single_graphic_popup_conf2_pane_g1

0x4018,	// (0x0004b30f) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf51d,	// (0x00056814) list_single_graphic_popup_conf2_pane_g

0x5460,	// (0x0004c757) list_single_graphic_popup_conf2_pane_t1

0x546e,	// (0x0004c765) bg_popup_call2_act_pane_cp01_ParamLimits

0x546e,	// (0x0004c765) bg_popup_call2_act_pane_cp01

0x54f8,	// (0x0004c7ef) call_type_pane_cp05_ParamLimits

0x54f8,	// (0x0004c7ef) call_type_pane_cp05

0x554c,	// (0x0004c843) popup_call2_audio_second_window_g1_ParamLimits

0x554c,	// (0x0004c843) popup_call2_audio_second_window_g1

0x55a0,	// (0x0004c897) popup_call2_audio_second_window_g2_ParamLimits

0x55a0,	// (0x0004c897) popup_call2_audio_second_window_g2

0x0002,

0xf522,	// (0x00056819) popup_call2_audio_second_window_g_ParamLimits

0xf522,	// (0x00056819) popup_call2_audio_second_window_g

0x5605,	// (0x0004c8fc) popup_call2_audio_second_window_t1_ParamLimits

0x5605,	// (0x0004c8fc) popup_call2_audio_second_window_t1

0x56c0,	// (0x0004c9b7) popup_call2_audio_second_window_t2_ParamLimits

0x56c0,	// (0x0004c9b7) popup_call2_audio_second_window_t2

0x5713,	// (0x0004ca0a) popup_call2_audio_second_window_t3_ParamLimits

0x5713,	// (0x0004ca0a) popup_call2_audio_second_window_t3

0x0003,

0xf529,	// (0x00056820) popup_call2_audio_second_window_t_ParamLimits

0xf529,	// (0x00056820) popup_call2_audio_second_window_t

0x14bd,	// (0x000487b4) bg_popup_call2_in_pane_cp02

0x14c7,	// (0x000487be) call_type_pane_cp04

0x14cf,	// (0x000487c6) popup_call2_audio_wait_window_g1

0x14d7,	// (0x000487ce) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x000563f9) popup_call2_audio_wait_window_g

0x14df,	// (0x000487d6) popup_call2_audio_wait_window_t3

0x5806,	// (0x0004cafd) bg_popup_call2_act_pane_ParamLimits

0x5806,	// (0x0004cafd) bg_popup_call2_act_pane

0x58c6,	// (0x0004cbbd) call_type_pane_cp03_ParamLimits

0x58c6,	// (0x0004cbbd) call_type_pane_cp03

0x592a,	// (0x0004cc21) popup_call2_audio_first_window_g1_ParamLimits

0x592a,	// (0x0004cc21) popup_call2_audio_first_window_g1

0x599a,	// (0x0004cc91) popup_call2_audio_first_window_g2_ParamLimits

0x599a,	// (0x0004cc91) popup_call2_audio_first_window_g2

0x4856,	// (0x0004bb4d) popup_call2_audio_first_window_g3_ParamLimits

0x4856,	// (0x0004bb4d) popup_call2_audio_first_window_g3

0x0004,

0xf532,	// (0x00056829) popup_call2_audio_first_window_g_ParamLimits

0xf532,	// (0x00056829) popup_call2_audio_first_window_g

0x5a78,	// (0x0004cd6f) popup_call2_audio_first_window_t1_ParamLimits

0x5a78,	// (0x0004cd6f) popup_call2_audio_first_window_t1

0x5b7b,	// (0x0004ce72) popup_call2_audio_first_window_t4_ParamLimits

0x5b7b,	// (0x0004ce72) popup_call2_audio_first_window_t4

0x5c5e,	// (0x0004cf55) popup_call2_audio_first_window_t5_ParamLimits

0x5c5e,	// (0x0004cf55) popup_call2_audio_first_window_t5

0x0003,

0xf53d,	// (0x00056834) popup_call2_audio_first_window_t_ParamLimits

0xf53d,	// (0x00056834) popup_call2_audio_first_window_t

0x1710,	// (0x00048a07) bg_popup_call2_act_pane_g1

0xb9e3,	// (0x00052cda) popup_cale_lunar_info_window_t1

0xb9f1,	// (0x00052ce8) popup_cale_lunar_info_window_t2

0xb9ff,	// (0x00052cf6) popup_cale_lunar_info_window_t3

0x14bd,	// (0x000487b4) bg_popup_call2_bubble_pane

0xb477,	// (0x0005276e) bg_popup_call2_in_pane_cp01_ParamLimits

0xb477,	// (0x0005276e) bg_popup_call2_in_pane_cp01

0xea12,	// (0x00055d09) call_type_pane_cp02

0xb4bf,	// (0x000527b6) popup_call2_audio_out_window_g1_ParamLimits

0xb4bf,	// (0x000527b6) popup_call2_audio_out_window_g1

0xb4eb,	// (0x000527e2) popup_call2_audio_out_window_g2_ParamLimits

0xb4eb,	// (0x000527e2) popup_call2_audio_out_window_g2

0xb513,	// (0x0005280a) popup_call2_audio_out_window_g3_ParamLimits

0xb513,	// (0x0005280a) popup_call2_audio_out_window_g3

0x0003,

0xf546,	// (0x0005683d) popup_call2_audio_out_window_g_ParamLimits

0xf546,	// (0x0005683d) popup_call2_audio_out_window_g

0xb54e,	// (0x00052845) popup_call2_audio_out_window_t1_ParamLimits

0xb54e,	// (0x00052845) popup_call2_audio_out_window_t1

0xb5ad,	// (0x000528a4) popup_call2_audio_out_window_t2_ParamLimits

0xb5ad,	// (0x000528a4) popup_call2_audio_out_window_t2

0xb601,	// (0x000528f8) popup_call2_audio_out_window_t3_ParamLimits

0xb601,	// (0x000528f8) popup_call2_audio_out_window_t3

0xb617,	// (0x0005290e) popup_call2_audio_out_window_t4_ParamLimits

0xb617,	// (0x0005290e) popup_call2_audio_out_window_t4

0xb62d,	// (0x00052924) popup_call2_audio_out_window_t5_ParamLimits

0xb62d,	// (0x00052924) popup_call2_audio_out_window_t5

0x0005,

0xf54f,	// (0x00056846) popup_call2_audio_out_window_t_ParamLimits

0xf54f,	// (0x00056846) popup_call2_audio_out_window_t

0xb691,	// (0x00052988) bg_popup_call2_in_pane_ParamLimits

0xb691,	// (0x00052988) bg_popup_call2_in_pane

0xb6ed,	// (0x000529e4) popup_call2_audio_in_window_g1_ParamLimits

0xb6ed,	// (0x000529e4) popup_call2_audio_in_window_g1

0xb725,	// (0x00052a1c) popup_call2_audio_in_window_g2_ParamLimits

0xb725,	// (0x00052a1c) popup_call2_audio_in_window_g2

0xb75d,	// (0x00052a54) popup_call2_audio_in_window_g3_ParamLimits

0xb75d,	// (0x00052a54) popup_call2_audio_in_window_g3

0x0003,

0xf55c,	// (0x00056853) popup_call2_audio_in_window_g_ParamLimits

0xf55c,	// (0x00056853) popup_call2_audio_in_window_g

0xb7b5,	// (0x00052aac) popup_call2_audio_in_window_t1_ParamLimits

0xb7b5,	// (0x00052aac) popup_call2_audio_in_window_t1

0xb835,	// (0x00052b2c) popup_call2_audio_in_window_t2_ParamLimits

0xb835,	// (0x00052b2c) popup_call2_audio_in_window_t2

0xb8b5,	// (0x00052bac) popup_call2_audio_in_window_t3_ParamLimits

0xb8b5,	// (0x00052bac) popup_call2_audio_in_window_t3

0xb8cf,	// (0x00052bc6) popup_call2_audio_in_window_t4_ParamLimits

0xb8cf,	// (0x00052bc6) popup_call2_audio_in_window_t4

0xb8e1,	// (0x00052bd8) popup_call2_audio_in_window_t5_ParamLimits

0xb8e1,	// (0x00052bd8) popup_call2_audio_in_window_t5

0xb8f6,	// (0x00052bed) popup_call2_audio_in_window_t6_ParamLimits

0xb8f6,	// (0x00052bed) popup_call2_audio_in_window_t6

0x0005,

0xf565,	// (0x0005685c) popup_call2_audio_in_window_t_ParamLimits

0xf565,	// (0x0005685c) popup_call2_audio_in_window_t

0x1710,	// (0x00048a07) bg_popup_call2_in_pane_g1

0xba0d,	// (0x00052d04) popup_cale_lunar_info_window_t4

0x0003,

0xf5cd,	// (0x000568c4) popup_cale_lunar_info_window_t

0x1718,	// (0x00048a0f) bg_popup_call2_rect_pane_ParamLimits

0x1718,	// (0x00048a0f) bg_popup_call2_rect_pane

0x14bd,	// (0x000487b4) call2_cli_visual_graphic_pane

0x14bd,	// (0x000487b4) call2_cli_visual_text_pane

0xbc04,	// (0x00052efb) smil_status_volume_pane_g3

0x0002,

0x1ba5,	// (0x00048e9c) call2_cli_visual_graphic_pane_g1

0x1ba5,	// (0x00048e9c) call2_cli_visual_graphic_pane_g2

0x1ba5,	// (0x00048e9c) call2_cli_visual_graphic_pane_g3

0x0002,

0xf572,	// (0x00056869) call2_cli_visual_graphic_pane_g

0xb90b,	// (0x00052c02) bg_popup_call2_rect_pane_g1

0x1cf4,	// (0x00048feb) bg_popup_call2_rect_pane_g2

0xb913,	// (0x00052c0a) bg_popup_call2_rect_pane_g3

0xb91b,	// (0x00052c12) bg_popup_call2_rect_pane_g4

0xb923,	// (0x00052c1a) bg_popup_call2_rect_pane_g5

0xb92b,	// (0x00052c22) bg_popup_call2_rect_pane_g6

0xb933,	// (0x00052c2a) bg_popup_call2_rect_pane_g7

0xb93b,	// (0x00052c32) bg_popup_call2_rect_pane_g8

0xb943,	// (0x00052c3a) bg_popup_call2_rect_pane_g9

0x0008,

0xf579,	// (0x00056870) bg_popup_call2_rect_pane_g

0xb94b,	// (0x00052c42) bg_popup_call2_bubble_pane_g1

0xb953,	// (0x00052c4a) bg_popup_call2_bubble_pane_g2

0xb95b,	// (0x00052c52) bg_popup_call2_bubble_pane_g3

0xb963,	// (0x00052c5a) bg_popup_call2_bubble_pane_g4

0xb96b,	// (0x00052c62) bg_popup_call2_bubble_pane_g5

0xb973,	// (0x00052c6a) bg_popup_call2_bubble_pane_g6

0xb97b,	// (0x00052c72) bg_popup_call2_bubble_pane_g7

0xb983,	// (0x00052c7a) bg_popup_call2_bubble_pane_g8

0xb98b,	// (0x00052c82) bg_popup_call2_bubble_pane_g9

0x0008,

0xf58c,	// (0x00056883) bg_popup_call2_bubble_pane_g

0x1d75,	// (0x0004906c) aid_cale_week_size_cell_pane

0x256e,	// (0x00049865) aid_cams_cif_uncrop_pane_ParamLimits

0x256e,	// (0x00049865) aid_cams_cif_uncrop_pane

0x275c,	// (0x00049a53) aid_cams_size_cell_ParamLimits

0x275c,	// (0x00049a53) aid_cams_size_cell

0x2770,	// (0x00049a67) grid_cams_pane_ParamLimits

0x278a,	// (0x00049a81) linegrid_cams_pane_ParamLimits

0x28c0,	// (0x00049bb7) call_video_pane_t1

0x28de,	// (0x00049bd5) call_video_pane_t2

0x0001,

0xf279,	// (0x00056570) call_video_pane_t

0x2f6e,	// (0x0004a265) aid_cale_month_size_cell_pane_ParamLimits

0x2f6e,	// (0x0004a265) aid_cale_month_size_cell_pane

0xf616,	// (0x0005690d) smil_status_volume_pane_g

0xbc11,	// (0x00052f08) volume_smil_pane_ParamLimits

0xb177,	// (0x0005246e) aid_popup2_width_pane

0x1c4c,	// (0x00048f43) cell_qdial_pane_g4_ParamLimits

0x1c4c,	// (0x00048f43) cell_qdial_pane_g4

0x42e2,	// (0x0004b5d9) aid_blid_cardinal_pane_ParamLimits

0x42ee,	// (0x0004b5e5) aid_blid_destination_pane_ParamLimits

0x42ee,	// (0x0004b5e5) aid_blid_destination_pane

0x1718,	// (0x00048a0f) bg_popup_call_poc_act_pane_ParamLimits

0x1718,	// (0x00048a0f) bg_popup_call_poc_act_pane

0x1718,	// (0x00048a0f) bg_popup_call_poc_inact_pane_ParamLimits

0x1718,	// (0x00048a0f) bg_popup_call_poc_inact_pane

0xb993,	// (0x00052c8a) bg_popup_call_poc_act_pane_g1

0xb99b,	// (0x00052c92) bg_popup_call_poc_act_pane_g2

0xb9a3,	// (0x00052c9a) bg_popup_call_poc_act_pane_g3

0xb963,	// (0x00052c5a) bg_popup_call_poc_act_pane_g4

0xb96b,	// (0x00052c62) bg_popup_call_poc_act_pane_g5

0xb9ab,	// (0x00052ca2) bg_popup_call_poc_act_pane_g6

0xb97b,	// (0x00052c72) bg_popup_call_poc_act_pane_g7

0xb9b3,	// (0x00052caa) bg_popup_call_poc_act_pane_g8

0x14bd,	// (0x000487b4) main_usb_pane

0xbb18,	// (0x00052e0f) popup_cale_lunar_info_window

0x2c16,	// (0x00049f0d) im_reading_pane_t1_ParamLimits

0x2c4f,	// (0x00049f46) list_im_pane_ParamLimits

0x2c60,	// (0x00049f57) scroll_pane_cp07_ParamLimits

0x14bd,	// (0x000487b4) grid_highlight_pane_cp012

0x1718,	// (0x00048a0f) mup_scale_pane_ParamLimits

0x4cd0,	// (0x0004bfc7) main_usb_pane_g1_ParamLimits

0x4cd0,	// (0x0004bfc7) main_usb_pane_g1

0x5cb6,	// (0x0004cfad) main_usb_pane_g2_ParamLimits

0x5cb6,	// (0x0004cfad) main_usb_pane_g2

0x0001,

0xf5b6,	// (0x000568ad) main_usb_pane_g_ParamLimits

0xf5b6,	// (0x000568ad) main_usb_pane_g

0x5ccc,	// (0x0004cfc3) main_usb_pane_t1_ParamLimits

0x5ccc,	// (0x0004cfc3) main_usb_pane_t1

0x5cde,	// (0x0004cfd5) main_usb_pane_t2_ParamLimits

0x5cde,	// (0x0004cfd5) main_usb_pane_t2

0x5cf0,	// (0x0004cfe7) main_usb_pane_t3_ParamLimits

0x5cf0,	// (0x0004cfe7) main_usb_pane_t3

0x5d02,	// (0x0004cff9) main_usb_pane_t4_ParamLimits

0x5d02,	// (0x0004cff9) main_usb_pane_t4

0x5d14,	// (0x0004d00b) main_usb_pane_t5_ParamLimits

0x5d14,	// (0x0004d00b) main_usb_pane_t5

0x5d26,	// (0x0004d01d) main_usb_pane_t6_ParamLimits

0x5d26,	// (0x0004d01d) main_usb_pane_t6

0x0005,

0xf5bb,	// (0x000568b2) main_usb_pane_t_ParamLimits

0x4291,	// (0x0004b588) aid_text_placing

0x429a,	// (0x0004b591) main_location2_pane_t1_ParamLimits

0x42ac,	// (0x0004b5a3) main_location2_pane_t2_ParamLimits

0x42be,	// (0x0004b5b5) main_location2_pane_t3_ParamLimits

0x42d0,	// (0x0004b5c7) main_location2_pane_t4_ParamLimits

0x42d0,	// (0x0004b5c7) main_location2_pane_t4

0xf3da,	// (0x000566d1) main_location2_pane_t_ParamLimits

0x17f0,	// (0x00048ae7) find_pinb_pane_g2_ParamLimits

0x17f0,	// (0x00048ae7) find_pinb_pane_g2

0x0001,

0xf128,	// (0x0005641f) find_pinb_pane_g_ParamLimits

0xf128,	// (0x0005641f) find_pinb_pane_g

0x17fc,	// (0x00048af3) find_pinb_pane_t1_ParamLimits

0x180e,	// (0x00048b05) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x00056424) find_pinb_pane_t_ParamLimits

0x14bd,	// (0x000487b4) main_call3_pane

0x346c,	// (0x0004a763) cale_month_day_heading_pane_t1_ParamLimits

0x34f2,	// (0x0004a7e9) cale_month_day_heading_pane_t2_ParamLimits

0x3583,	// (0x0004a87a) cale_month_day_heading_pane_t3_ParamLimits

0x3614,	// (0x0004a90b) cale_month_day_heading_pane_t4_ParamLimits

0x36a9,	// (0x0004a9a0) cale_month_day_heading_pane_t5_ParamLimits

0x374a,	// (0x0004aa41) cale_month_day_heading_pane_t6_ParamLimits

0x37eb,	// (0x0004aae2) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x000565a8) cale_month_day_heading_pane_t_ParamLimits

0x3a9f,	// (0x0004ad96) smil_status_volume_pane

0x4cac,	// (0x0004bfa3) postcard_address_pane_ParamLimits

0x4cac,	// (0x0004bfa3) postcard_address_pane

0x4cbe,	// (0x0004bfb5) postcard_message_pane_ParamLimits

0x4cbe,	// (0x0004bfb5) postcard_message_pane

0x5c94,	// (0x0004cf8b) call2_cli_visual_pane_t1_ParamLimits

0x5c94,	// (0x0004cf8b) call2_cli_visual_pane_t1

0x64aa,	// (0x0004d7a1) postcard_message_pane_t1_ParamLimits

0x64aa,	// (0x0004d7a1) postcard_message_pane_t1

0x6493,	// (0x0004d78a) postcard_address_pane_t1_ParamLimits

0x6493,	// (0x0004d78a) postcard_address_pane_t1

0x647f,	// (0x0004d776) popup_call3_audio_in_window_ParamLimits

0x647f,	// (0x0004d776) popup_call3_audio_in_window

0x630a,	// (0x0004d601) bg_popup_call3_in_pane_ParamLimits

0x630a,	// (0x0004d601) bg_popup_call3_in_pane

0x6380,	// (0x0004d677) popup_call3_audio_in_window_g1_ParamLimits

0x6380,	// (0x0004d677) popup_call3_audio_in_window_g1

0x63a0,	// (0x0004d697) popup_call3_audio_in_window_g2_ParamLimits

0x63a0,	// (0x0004d697) popup_call3_audio_in_window_g2

0x63c0,	// (0x0004d6b7) popup_call3_audio_in_window_g3_ParamLimits

0x63c0,	// (0x0004d6b7) popup_call3_audio_in_window_g3

0x0003,

0xf61d,	// (0x00056914) popup_call3_audio_in_window_g_ParamLimits

0xf61d,	// (0x00056914) popup_call3_audio_in_window_g

0x63f1,	// (0x0004d6e8) popup_call3_audio_in_window_t1_ParamLimits

0x63f1,	// (0x0004d6e8) popup_call3_audio_in_window_t1

0x642f,	// (0x0004d726) popup_call3_audio_in_window_t2_ParamLimits

0x642f,	// (0x0004d726) popup_call3_audio_in_window_t2

0x646d,	// (0x0004d764) popup_call3_audio_in_window_t3_ParamLimits

0x646d,	// (0x0004d764) popup_call3_audio_in_window_t3

0x0002,

0xf626,	// (0x0005691d) popup_call3_audio_in_window_t_ParamLimits

0xf626,	// (0x0005691d) popup_call3_audio_in_window_t

0x4566,	// (0x0004b85d) bg_popup_call3_rect_pane

0xb90b,	// (0x00052c02) bg_popup_call3_rect_pane_g1

0x1cf4,	// (0x00048feb) bg_popup_call3_rect_pane_g2

0xb913,	// (0x00052c0a) bg_popup_call3_rect_pane_g3

0xb91b,	// (0x00052c12) bg_popup_call3_rect_pane_g4

0xb923,	// (0x00052c1a) bg_popup_call3_rect_pane_g5

0xb92b,	// (0x00052c22) bg_popup_call3_rect_pane_g6

0xb933,	// (0x00052c2a) bg_popup_call3_rect_pane_g7

0x484e,	// (0x0004bb45) mup_visualizer_osc_pane

0x4864,	// (0x0004bb5b) mup_visualizer_spec_pane

0x633a,	// (0x0004d631) call3_video_qcif_pane_ParamLimits

0x633a,	// (0x0004d631) call3_video_qcif_pane

0x634d,	// (0x0004d644) call3_video_qcif_uncrop_pane_ParamLimits

0x634d,	// (0x0004d644) call3_video_qcif_uncrop_pane

0x635b,	// (0x0004d652) call3_video_subqcif_pane_ParamLimits

0x635b,	// (0x0004d652) call3_video_subqcif_pane

0x636f,	// (0x0004d666) call3_video_subqcif_uncrop_pane_ParamLimits

0x636f,	// (0x0004d666) call3_video_subqcif_uncrop_pane

0x63e0,	// (0x0004d6d7) popup_call3_audio_in_window_g4_ParamLimits

0x63e0,	// (0x0004d6d7) popup_call3_audio_in_window_g4

0x62f9,	// (0x0004d5f0) mup_spec_half_pane

0x6302,	// (0x0004d5f9) mup_spec_half_pane_cp

0xbbc4,	// (0x00052ebb) mup_osc_middle_pane

0xbbcd,	// (0x00052ec4) mup_visualizer_osc_pane_g1

0x62d9,	// (0x0004d5d0) mup_spec_bar_pane_ParamLimits

0x62d9,	// (0x0004d5d0) mup_spec_bar_pane

0xbbb1,	// (0x00052ea8) mup_spec_bar_pane_g1

0xbbbb,	// (0x00052eb2) mup_spec_bar_pane_g2

0x0001,

0xf611,	// (0x00056908) mup_spec_bar_pane_g

0x1d75,	// (0x0004906c) aid_cale_week_size_cell_pane_ParamLimits

0x1d8f,	// (0x00049086) bg_cale_heading_pane_ParamLimits

0x1da7,	// (0x0004909e) bg_cale_pane_cp01_ParamLimits

0x1dc5,	// (0x000490bc) cale_week_corner_pane_ParamLimits

0x1de4,	// (0x000490db) cale_week_day_heading_pane_ParamLimits

0x1e01,	// (0x000490f8) cale_week_scroll_pane_g1_ParamLimits

0x1e14,	// (0x0004910b) cale_week_scroll_pane_g2_ParamLimits

0x1e2c,	// (0x00049123) cale_week_scroll_pane_g3_ParamLimits

0x1e44,	// (0x0004913b) cale_week_scroll_pane_g4_ParamLimits

0x1e5c,	// (0x00049153) cale_week_scroll_pane_g5_ParamLimits

0x1e7c,	// (0x00049173) cale_week_scroll_pane_g6_ParamLimits

0x1e9c,	// (0x00049193) cale_week_scroll_pane_g7_ParamLimits

0x1ebc,	// (0x000491b3) cale_week_scroll_pane_g8_ParamLimits

0x1ee0,	// (0x000491d7) cale_week_scroll_pane_g9_ParamLimits

0x1ef8,	// (0x000491ef) cale_week_scroll_pane_g10_ParamLimits

0x1f10,	// (0x00049207) cale_week_scroll_pane_g11_ParamLimits

0x1f28,	// (0x0004921f) cale_week_scroll_pane_g12_ParamLimits

0x1f40,	// (0x00049237) cale_week_scroll_pane_g13_ParamLimits

0x1f40,	// (0x00049237) cale_week_scroll_pane_g14_ParamLimits

0x1f40,	// (0x00049237) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x000564b0) cale_week_scroll_pane_g_ParamLimits

0x1f58,	// (0x0004924f) cale_week_time_pane_ParamLimits

0x1f7c,	// (0x00049273) grid_cale_week_pane_ParamLimits

0x1fa2,	// (0x00049299) listscroll_cale_week_pane_t1

0x1fb4,	// (0x000492ab) scroll_pane_cp08_ParamLimits

0x2ff0,	// (0x0004a2e7) cale_month_corner_pane_ParamLimits

0x33f8,	// (0x0004a6ef) cale_month_pane_t1

0x340a,	// (0x0004a701) cale_month_week_pane_ParamLimits

0x3ed3,	// (0x0004b1ca) popup_call_status_window_g1_ParamLimits

0x3ee7,	// (0x0004b1de) popup_call_status_window_g2_ParamLimits

0x3efb,	// (0x0004b1f2) popup_call_status_window_g3_ParamLimits

0xf361,	// (0x00056658) popup_call_status_window_g_ParamLimits

0x3f63,	// (0x0004b25a) aid_call2_pane

0x05c6,	// (0x000478bd) msg_header_pane_g1

0x4cac,	// (0x0004bfa3) postcard_address2_pane_ParamLimits

0x4cac,	// (0x0004bfa3) postcard_address2_pane

0x4cbe,	// (0x0004bfb5) postcard_message2_pane_ParamLimits

0x4cbe,	// (0x0004bfb5) postcard_message2_pane

0x628b,	// (0x0004d582) message2_row_pane_ParamLimits

0x628b,	// (0x0004d582) message2_row_pane

0x62a7,	// (0x0004d59e) address2_row_pane_ParamLimits

0x62a7,	// (0x0004d59e) address2_row_pane

0xbb7f,	// (0x00052e76) postcard_message2_row_pane_g1

0xbb87,	// (0x00052e7e) postcard_message2_row_pane_t1

0xbb7f,	// (0x00052e76) address2_row_pane_g1

0xbb87,	// (0x00052e7e) address2_row_pane_t1

0x23f9,	// (0x000496f0) aid_size_cell_vorec

0x14bd,	// (0x000487b4) main_rss_pane

0x62ba,	// (0x0004d5b1) rss_list_single_pane_ParamLimits

0x62ba,	// (0x0004d5b1) rss_list_single_pane

0xbb95,	// (0x00052e8c) rss_list_single_pane_t1

0xbba3,	// (0x00052e9a) rss_list_single_pane_t2

0x0001,

0xf60c,	// (0x00056903) rss_list_single_pane_t

0x14bd,	// (0x000487b4) main_camera2_pane

0x14bd,	// (0x000487b4) main_video2_pane

0x6523,	// (0x0004d81a) cams_zoom_pane_cp2_ParamLimits

0x6523,	// (0x0004d81a) cams_zoom_pane_cp2

0x6543,	// (0x0004d83a) image2_vga_pane_ParamLimits

0x6543,	// (0x0004d83a) image2_vga_pane

0x6594,	// (0x0004d88b) main_camera2_pane_g1_ParamLimits

0x6594,	// (0x0004d88b) main_camera2_pane_g1

0x65b4,	// (0x0004d8ab) main_camera2_pane_g2_ParamLimits

0x65b4,	// (0x0004d8ab) main_camera2_pane_g2

0x65d4,	// (0x0004d8cb) main_camera2_pane_g3_ParamLimits

0x65d4,	// (0x0004d8cb) main_camera2_pane_g3

0x65f4,	// (0x0004d8eb) main_camera2_pane_g4_ParamLimits

0x65f4,	// (0x0004d8eb) main_camera2_pane_g4

0x6614,	// (0x0004d90b) main_camera2_pane_g5_ParamLimits

0x6614,	// (0x0004d90b) main_camera2_pane_g5

0x6634,	// (0x0004d92b) main_camera2_pane_g6_ParamLimits

0x6634,	// (0x0004d92b) main_camera2_pane_g6

0x6654,	// (0x0004d94b) main_camera2_pane_g7_ParamLimits

0x6654,	// (0x0004d94b) main_camera2_pane_g7

0x6674,	// (0x0004d96b) main_camera2_pane_g8_ParamLimits

0x6674,	// (0x0004d96b) main_camera2_pane_g8

0x0008,

0xf62d,	// (0x00056924) main_camera2_pane_g_ParamLimits

0xf62d,	// (0x00056924) main_camera2_pane_g

0x66b4,	// (0x0004d9ab) main_camera2_pane_t1_ParamLimits

0x66b4,	// (0x0004d9ab) main_camera2_pane_t1

0x66e9,	// (0x0004d9e0) main_camera2_pane_t2_ParamLimits

0x66e9,	// (0x0004d9e0) main_camera2_pane_t2

0x670f,	// (0x0004da06) main_camera2_pane_t3_ParamLimits

0x670f,	// (0x0004da06) main_camera2_pane_t3

0x676d,	// (0x0004da64) main_camera2_pane_t4_ParamLimits

0x676d,	// (0x0004da64) main_camera2_pane_t4

0x0006,

0xf640,	// (0x00056937) main_camera2_pane_t_ParamLimits

0xf640,	// (0x00056937) main_camera2_pane_t

0x67ff,	// (0x0004daf6) cams_zoom_pane_cp4_ParamLimits

0x67ff,	// (0x0004daf6) cams_zoom_pane_cp4

0x6815,	// (0x0004db0c) image2_cif_pane_ParamLimits

0x6815,	// (0x0004db0c) image2_cif_pane

0x6840,	// (0x0004db37) image2_subqcif_pane_ParamLimits

0x6840,	// (0x0004db37) image2_subqcif_pane

0x685a,	// (0x0004db51) main_video2_pane_g1_ParamLimits

0x685a,	// (0x0004db51) main_video2_pane_g1

0x6874,	// (0x0004db6b) main_video2_pane_g2_ParamLimits

0x6874,	// (0x0004db6b) main_video2_pane_g2

0x688a,	// (0x0004db81) main_video2_pane_g3_ParamLimits

0x688a,	// (0x0004db81) main_video2_pane_g3

0x68a0,	// (0x0004db97) main_video2_pane_g4_ParamLimits

0x68a0,	// (0x0004db97) main_video2_pane_g4

0x68b6,	// (0x0004dbad) main_video2_pane_g5_ParamLimits

0x68b6,	// (0x0004dbad) main_video2_pane_g5

0x68cc,	// (0x0004dbc3) main_video2_pane_g6_ParamLimits

0x68cc,	// (0x0004dbc3) main_video2_pane_g6

0x0005,

0xf64f,	// (0x00056946) main_video2_pane_g_ParamLimits

0xf64f,	// (0x00056946) main_video2_pane_g

0x68e6,	// (0x0004dbdd) main_video2_pane_t1_ParamLimits

0x68e6,	// (0x0004dbdd) main_video2_pane_t1

0x690a,	// (0x0004dc01) main_video2_pane_t2_ParamLimits

0x690a,	// (0x0004dc01) main_video2_pane_t2

0x6958,	// (0x0004dc4f) main_video2_pane_t3_ParamLimits

0x6958,	// (0x0004dc4f) main_video2_pane_t3

0x0002,

0xf65c,	// (0x00056953) main_video2_pane_t_ParamLimits

0xf65c,	// (0x00056953) main_video2_pane_t

0x5de1,	// (0x0004d0d8) call_muted_g2

0x0001,

0xf5fe,	// (0x000568f5) call_muted_g

0x14bd,	// (0x000487b4) main_mup2_pane

0x699c,	// (0x0004dc93) main_mup2_pane_g1_ParamLimits

0x699c,	// (0x0004dc93) main_mup2_pane_g1

0x69a8,	// (0x0004dc9f) main_mup2_pane_g2_ParamLimits

0x69a8,	// (0x0004dc9f) main_mup2_pane_g2

0xbd35,	// (0x0005302c) main_mup_pane_g13_cp1

0xbd3d,	// (0x00053034) mup_volume_pane_cp1

0x69c4,	// (0x0004dcbb) main_mup2_pane_g4_ParamLimits

0x69c4,	// (0x0004dcbb) main_mup2_pane_g4

0x69d6,	// (0x0004dccd) main_mup2_pane_g5_ParamLimits

0x69d6,	// (0x0004dccd) main_mup2_pane_g5

0x69e8,	// (0x0004dcdf) main_mup2_pane_g6_ParamLimits

0x69e8,	// (0x0004dcdf) main_mup2_pane_g6

0x69fa,	// (0x0004dcf1) main_mup2_pane_g7_ParamLimits

0x69fa,	// (0x0004dcf1) main_mup2_pane_g7

0x0006,

0xf663,	// (0x0005695a) main_mup2_pane_g_ParamLimits

0xf663,	// (0x0005695a) main_mup2_pane_g

0x6a12,	// (0x0004dd09) main_mup2_pane_t1_ParamLimits

0x6a12,	// (0x0004dd09) main_mup2_pane_t1

0x6a28,	// (0x0004dd1f) main_mup2_pane_t2_ParamLimits

0x6a28,	// (0x0004dd1f) main_mup2_pane_t2

0x6a3e,	// (0x0004dd35) main_mup2_pane_t3_ParamLimits

0x6a3e,	// (0x0004dd35) main_mup2_pane_t3

0x6a54,	// (0x0004dd4b) main_mup2_pane_t4_ParamLimits

0x6a54,	// (0x0004dd4b) main_mup2_pane_t4

0x6a6c,	// (0x0004dd63) main_mup2_pane_t5_ParamLimits

0x6a6c,	// (0x0004dd63) main_mup2_pane_t5

0x6a84,	// (0x0004dd7b) main_mup2_pane_t6_ParamLimits

0x6a84,	// (0x0004dd7b) main_mup2_pane_t6

0x0005,

0xf672,	// (0x00056969) main_mup2_pane_t_ParamLimits

0xf672,	// (0x00056969) main_mup2_pane_t

0x6ab4,	// (0x0004ddab) mup2_visualizer_pane_ParamLimits

0x6ab4,	// (0x0004ddab) mup2_visualizer_pane

0x6ae2,	// (0x0004ddd9) mup_progress_pane_cp_ParamLimits

0x6ae2,	// (0x0004ddd9) mup_progress_pane_cp

0xbd17,	// (0x0005300e) mup_volume_pane_cp_ParamLimits

0xbd17,	// (0x0005300e) mup_volume_pane_cp

0x6af6,	// (0x0004dded) mup2_visualizer_pane_g1_ParamLimits

0x6af6,	// (0x0004dded) mup2_visualizer_pane_g1

0xbc56,	// (0x00052f4d) mup2_visualizer_pane_g2_ParamLimits

0xbc56,	// (0x00052f4d) mup2_visualizer_pane_g2

0x6b0d,	// (0x0004de04) mup2_visualizer_pane_g3_ParamLimits

0x6b0d,	// (0x0004de04) mup2_visualizer_pane_g3

0x0002,

0xf67f,	// (0x00056976) mup2_visualizer_pane_g_ParamLimits

0xf67f,	// (0x00056976) mup2_visualizer_pane_g

0x5078,	// (0x0004c36f) aid_size_cell_fmradio

0x5f93,	// (0x0004d28a) aid_height_parent_landcape

0x2d16,	// (0x0004a00d) wml_content_pane_cp

0x2d1e,	// (0x0004a015) wml_tabs_pane

0x2d27,	// (0x0004a01e) popup_wml_miniature_window

0x2d2f,	// (0x0004a026) scroll_pane_cp021

0x2d43,	// (0x0004a03a) wml_content_pane_comp8

0x14bd,	// (0x000487b4) bg_popup_sub_pane_cp05

0xbc74,	// (0x00052f6b) popup_wml_miniature_window_g1

0xbc7c,	// (0x00052f73) wml_miniature_view_pane

0x6b19,	// (0x0004de10) aid_size_wml_view

0x6b21,	// (0x0004de18) wml_miniature_view_pane_g1

0x6b2a,	// (0x0004de21) wml_miniature_view_pane_g2

0x6b33,	// (0x0004de2a) wml_miniature_view_pane_g3

0x6b3b,	// (0x0004de32) wml_miniature_view_pane_g4

0x6b43,	// (0x0004de3a) wml_miniature_view_pane_g5

0x6b4b,	// (0x0004de42) wml_miniature_view_pane_g6

0x6b53,	// (0x0004de4a) wml_miniature_view_pane_g7

0x6b5b,	// (0x0004de52) wml_miniature_view_pane_g8

0x0007,

0xf686,	// (0x0005697d) wml_miniature_view_pane_g

0xbc84,	// (0x00052f7b) background_graphic_ParamLimits

0xbc84,	// (0x00052f7b) background_graphic

0xbc90,	// (0x00052f87) wml_tabs_2_pane

0xbc99,	// (0x00052f90) wml_tabs_3_pane_ParamLimits

0xbc99,	// (0x00052f90) wml_tabs_3_pane

0xbcab,	// (0x00052fa2) wml_tabs_4_pane_ParamLimits

0xbcab,	// (0x00052fa2) wml_tabs_4_pane

0xbcc1,	// (0x00052fb8) wml_tabs_5_pane_ParamLimits

0xbcc1,	// (0x00052fb8) wml_tabs_5_pane

0xbcdb,	// (0x00052fd2) wml_tabs_pane_g2_ParamLimits

0xbcdb,	// (0x00052fd2) wml_tabs_pane_g2

0xbcef,	// (0x00052fe6) wml_tabs_pane_g3_ParamLimits

0xbcef,	// (0x00052fe6) wml_tabs_pane_g3

0x6b63,	// (0x0004de5a) wml_tabs_2_active_pane_ParamLimits

0x6b63,	// (0x0004de5a) wml_tabs_2_active_pane

0x6b77,	// (0x0004de6e) wml_tabs_2_passive_pane_ParamLimits

0x6b77,	// (0x0004de6e) wml_tabs_2_passive_pane

0x6b8b,	// (0x0004de82) wml_tabs_3_active_pane_cp_ParamLimits

0x6b8b,	// (0x0004de82) wml_tabs_3_active_pane_cp

0x6ba0,	// (0x0004de97) wml_tabs_3_passive_pane_ParamLimits

0x6ba0,	// (0x0004de97) wml_tabs_3_passive_pane

0x6bb3,	// (0x0004deaa) wml_tabs_3_passive_pane_cp_ParamLimits

0x6bb3,	// (0x0004deaa) wml_tabs_3_passive_pane_cp

0x6bca,	// (0x0004dec1) tabs_4_active_pane

0x6bd2,	// (0x0004dec9) tabs_4_passive_pane

0x6bdc,	// (0x0004ded3) tabs_4_passive_pane_cp

0x6be4,	// (0x0004dedb) tabs_4_passive_pane_cp2

0x5cae,	// (0x0004cfa5) aid_height_text

0x4824,	// (0x0004bb1b) mup_volume_cont_pane_ParamLimits

0x4824,	// (0x0004bb1b) mup_volume_cont_pane

0x17ae,	// (0x00048aa5) aid_size_cell_pinb

0x17b8,	// (0x00048aaf) aid_size_list_pinb

0x6ace,	// (0x0004ddc5) mup2_volume_cont_pane_ParamLimits

0x6ace,	// (0x0004ddc5) mup2_volume_cont_pane

0xbd03,	// (0x00052ffa) mup2_volume_cont_pane_g1_ParamLimits

0xbd03,	// (0x00052ffa) mup2_volume_cont_pane_g1

0x11a9,	// (0x000484a0) aid_size_cell_touch_ParamLimits

0x11a9,	// (0x000484a0) aid_size_cell_touch

0x13e4,	// (0x000486db) touch_pane_ParamLimits

0x13e4,	// (0x000486db) touch_pane

0xde02,	// (0x000550f9) main_rss2_pane

0xbd45,	// (0x0005303c) listscroll_rss2_pane

0xbd4e,	// (0x00053045) rss2_navigation_pane

0xbd56,	// (0x0005304d) list_rss2_pane

0x411d,	// (0x0004b414) scroll_pane_cp22

0xbd5e,	// (0x00053055) rss2_navigation_pane_g1

0xbd67,	// (0x0005305e) rss2_navigation_pane_g2

0xbd6f,	// (0x00053066) rss2_navigation_pane_g3

0x0002,

0xf697,	// (0x0005698e) rss2_navigation_pane_g

0xbd77,	// (0x0005306e) rss2_navigation_pane_t1

0x6bee,	// (0x0004dee5) rss2_list_single_pane_ParamLimits

0x6bee,	// (0x0004dee5) rss2_list_single_pane

0xbd85,	// (0x0005307c) rss2_list_single_pane_t2

0xbd93,	// (0x0005308a) rss2_list_single_pane_t3_ParamLimits

0xbd93,	// (0x0005308a) rss2_list_single_pane_t3

0xbdb0,	// (0x000530a7) rss2_list_single_pane_t4

0x3a87,	// (0x0004ad7e) smil_status_pane_g1

0x13ca,	// (0x000486c1) main_image2_pane_ParamLimits

0x13ca,	// (0x000486c1) main_image2_pane

0x6694,	// (0x0004d98b) main_camera2_pane_g9_ParamLimits

0x6694,	// (0x0004d98b) main_camera2_pane_g9

0x67c2,	// (0x0004dab9) main_camera2_pane_t5_ParamLimits

0x67c2,	// (0x0004dab9) main_camera2_pane_t5

0xbc26,	// (0x00052f1d) main_camera2_pane_t6_ParamLimits

0xbc26,	// (0x00052f1d) main_camera2_pane_t6

0x6c03,	// (0x0004defa) main_image2_pane_g1_ParamLimits

0x6c03,	// (0x0004defa) main_image2_pane_g1

0x502e,	// (0x0004c325) smil2_video_pane_ParamLimits

0x502e,	// (0x0004c325) smil2_video_pane

0xb193,	// (0x0005248a) aid_zoom_text_primary_cp

0xb1d3,	// (0x000524ca) popup_preview_fixed_window

0x2c0e,	// (0x00049f05) im_reading_pane_g1

0x650b,	// (0x0004d802) cams2_bc_adjust_pane_cp_ParamLimits

0x650b,	// (0x0004d802) cams2_bc_adjust_pane_cp

0x67f1,	// (0x0004dae8) cams2_bc_adjust_pane_ParamLimits

0x67f1,	// (0x0004dae8) cams2_bc_adjust_pane

0xbdbe,	// (0x000530b5) cams2_bc_adjust_pane_g1

0xbdc6,	// (0x000530bd) cams2_slider_pane

0xbdcf,	// (0x000530c6) cams2_slider_pane_g1

0xbdd8,	// (0x000530cf) cams2_slider_pane_g2

0x0006,

0xf69e,	// (0x00056995) cams2_slider_pane_g

0x18fd,	// (0x00048bf4) calc_display_pane_ParamLimits

0x1925,	// (0x00048c1c) calc_paper_pane_ParamLimits

0x1948,	// (0x00048c3f) grid_calc_pane_ParamLimits

0xb2fd,	// (0x000525f4) popup_clock_digital_window_t1_ParamLimits

0x4eb5,	// (0x0004c1ac) main_image_pane_t1

0x18df,	// (0x00048bd6) aid_size_cell_calc_ParamLimits

0x18df,	// (0x00048bd6) aid_size_cell_calc

0x5fd9,	// (0x0004d2d0) popup_blid_sat_info2_window_ParamLimits

0x5fd9,	// (0x0004d2d0) popup_blid_sat_info2_window

0xbdfa,	// (0x000530f1) aid_size_cell_blid

0xbe02,	// (0x000530f9) bg_popup_window_pane_cp07

0xbe25,	// (0x0005311c) grid_popup_blid_pane

0xbe2f,	// (0x00053126) heading_pane_cp05_ParamLimits

0xbe2f,	// (0x00053126) heading_pane_cp05

0xbef9,	// (0x000531f0) cell_popup_blid_pane_ParamLimits

0xbef9,	// (0x000531f0) cell_popup_blid_pane

0xbf1d,	// (0x00053214) cell_popup_blid_pane_g1

0xbf25,	// (0x0005321c) cell_popup_blid_pane_t1

0x6a9e,	// (0x0004dd95) mup2_indicator_pane_ParamLimits

0x6a9e,	// (0x0004dd95) mup2_indicator_pane

0x4566,	// (0x0004b85d) mup2_visualizer_osc_pane

0xbc62,	// (0x00052f59) mup2_visualizer_spec_pane_ParamLimits

0xbc62,	// (0x00052f59) mup2_visualizer_spec_pane

0x6c19,	// (0x0004df10) mup2_spec_half_pane

0x6c22,	// (0x0004df19) mup2_spec_half_pane_cp

0x6c2a,	// (0x0004df21) mup2_spec_bar_pane_ParamLimits

0x6c2a,	// (0x0004df21) mup2_spec_bar_pane

0xbbb1,	// (0x00052ea8) mup2_spec_bar_pane_g1

0xbbbb,	// (0x00052eb2) mup2_spec_bar_pane_g2

0x0001,

0xf611,	// (0x00056908) mup2_spec_bar_pane_g

0x6c4a,	// (0x0004df41) mup2_osc_middle_pane

0xbbcd,	// (0x00052ec4) mup2_visualizer_osc_pane_g1

0xe943,	// (0x00055c3a) popup_number_entry_window_t1_ParamLimits

0xe956,	// (0x00055c4d) popup_number_entry_window_t2_ParamLimits

0xe968,	// (0x00055c5f) popup_number_entry_window_t3_ParamLimits

0x1436,	// (0x0004872d) popup_number_entry_window_t5_ParamLimits

0x1436,	// (0x0004872d) popup_number_entry_window_t5

0xf0d3,	// (0x000563ca) popup_number_entry_window_t_ParamLimits

0xe97a,	// (0x00055c71) text_title_cp2_ParamLimits

0xb37a,	// (0x00052671) aid_hotspot_pointer_text2_pane

0xb3a0,	// (0x00052697) main_viewer_pane_g9_ParamLimits

0xb3a0,	// (0x00052697) main_viewer_pane_g9

0x33f8,	// (0x0004a6ef) cale_month_pane_t1_ParamLimits

0x3af9,	// (0x0004adf0) bg_cale_pane_ParamLimits

0x3b11,	// (0x0004ae08) list_cale_pane_ParamLimits

0x3b22,	// (0x0004ae19) listscroll_cale_day_pane_t1

0x3b34,	// (0x0004ae2b) scroll_pane_cp09_ParamLimits

0x48d2,	// (0x0004bbc9) main_mup_eq_pane_t1_ParamLimits

0x48d2,	// (0x0004bbc9) main_mup_eq_pane_t1

0x48ec,	// (0x0004bbe3) main_mup_eq_pane_t2_ParamLimits

0x48ec,	// (0x0004bbe3) main_mup_eq_pane_t2

0x4906,	// (0x0004bbfd) main_mup_eq_pane_t3_ParamLimits

0x4906,	// (0x0004bbfd) main_mup_eq_pane_t3

0x4922,	// (0x0004bc19) main_mup_eq_pane_t4_ParamLimits

0x4922,	// (0x0004bc19) main_mup_eq_pane_t4

0x493e,	// (0x0004bc35) main_mup_eq_pane_t5_ParamLimits

0x493e,	// (0x0004bc35) main_mup_eq_pane_t5

0x495a,	// (0x0004bc51) main_mup_eq_pane_t6_ParamLimits

0x495a,	// (0x0004bc51) main_mup_eq_pane_t6

0x496e,	// (0x0004bc65) main_mup_eq_pane_t7_ParamLimits

0x496e,	// (0x0004bc65) main_mup_eq_pane_t7

0x4982,	// (0x0004bc79) main_mup_eq_pane_t8_ParamLimits

0x4982,	// (0x0004bc79) main_mup_eq_pane_t8

0x4996,	// (0x0004bc8d) main_mup_eq_pane_t9_ParamLimits

0x4996,	// (0x0004bc8d) main_mup_eq_pane_t9

0x49b0,	// (0x0004bca7) main_mup_eq_pane_t10_ParamLimits

0x49b0,	// (0x0004bca7) main_mup_eq_pane_t10

0x0009,

0xf460,	// (0x00056757) main_mup_eq_pane_t_ParamLimits

0xf460,	// (0x00056757) main_mup_eq_pane_t

0x4a5f,	// (0x0004bd56) mup_equalizer_pane_cp5_ParamLimits

0x4a73,	// (0x0004bd6a) mup_equalizer_pane_cp6_ParamLimits

0x4a87,	// (0x0004bd7e) mup_equalizer_pane_cp7_ParamLimits

0xde02,	// (0x000550f9) main_gallery_pane

0xbbd6,	// (0x00052ecd) smil2_volume_pane

0xbbde,	// (0x00052ed5) smil_status_volume_pane_g1_ParamLimits

0xbbf1,	// (0x00052ee8) smil_status_volume_pane_g2_ParamLimits

0xbc04,	// (0x00052efb) smil_status_volume_pane_g3_ParamLimits

0xf616,	// (0x0005690d) smil_status_volume_pane_g_ParamLimits

0xbe02,	// (0x000530f9) bg_popup_window_pane_cp07_ParamLimits

0xbe10,	// (0x00053107) blid_firmament_pane

0x6c53,	// (0x0004df4a) aid_size_cell_gallery_ParamLimits

0x6c53,	// (0x0004df4a) aid_size_cell_gallery

0x6c69,	// (0x0004df60) grid_gallery_pane_ParamLimits

0x6c69,	// (0x0004df60) grid_gallery_pane

0x6c82,	// (0x0004df79) cell_gallery_pane_ParamLimits

0x6c82,	// (0x0004df79) cell_gallery_pane

0xbf33,	// (0x0005322a) bg_cell_gallery_focus_pane_ParamLimits

0xbf33,	// (0x0005322a) bg_cell_gallery_focus_pane

0xbf45,	// (0x0005323c) cell_gallery_pane_g1_ParamLimits

0xbf45,	// (0x0005323c) cell_gallery_pane_g1

0x6ccb,	// (0x0004dfc2) cell_gallery_pane_g2_ParamLimits

0x6ccb,	// (0x0004dfc2) cell_gallery_pane_g2

0x6cd8,	// (0x0004dfcf) cell_gallery_pane_g3_ParamLimits

0x6cd8,	// (0x0004dfcf) cell_gallery_pane_g3

0xbf51,	// (0x00053248) cell_gallery_pane_g4_ParamLimits

0xbf51,	// (0x00053248) cell_gallery_pane_g4

0x0003,

0xf6c4,	// (0x000569bb) cell_gallery_pane_g_ParamLimits

0xf6c4,	// (0x000569bb) cell_gallery_pane_g

0xbf5d,	// (0x00053254) bg_cell_gallery_focus_pane_g1

0xbf65,	// (0x0005325c) bg_cell_gallery_focus_pane_g2

0xbf6d,	// (0x00053264) bg_cell_gallery_focus_pane_g3

0xbf75,	// (0x0005326c) bg_cell_gallery_focus_pane_g4

0xbf7d,	// (0x00053274) bg_cell_gallery_focus_pane_g5

0xbf85,	// (0x0005327c) bg_cell_gallery_focus_pane_g6

0xbf8d,	// (0x00053284) bg_cell_gallery_focus_pane_g7

0xbf95,	// (0x0005328c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6cd,	// (0x000569c4) bg_cell_gallery_focus_pane_g

0xbf9d,	// (0x00053294) aid_firma_cardinal

0xbfb1,	// (0x000532a8) blid_firmament_pane_t1

0xbfc8,	// (0x000532bf) blid_firmament_pane_t2

0xbfdf,	// (0x000532d6) blid_firmament_pane_t3

0xbff6,	// (0x000532ed) blid_firmament_pane_t4

0x0003,

0xf6de,	// (0x000569d5) blid_firmament_pane_t

0xc00d,	// (0x00053304) blid_sat_info_pane

0xc01d,	// (0x00053314) blid_sat_info_pane_g1

0xc01d,	// (0x00053314) blid_sat_info_pane_g2

0x0001,

0xf6e7,	// (0x000569de) blid_sat_info_pane_g

0xc027,	// (0x0005331e) blid_sat_info_pane_t1

0xc035,	// (0x0005332c) smil2_volume_content_pane

0xc03e,	// (0x00053335) smil2_volume_pane_g1

0xc046,	// (0x0005333d) smil2_volume_content_pane_g1

0xc04f,	// (0x00053346) smil2_volume_content_pane_g2

0xc058,	// (0x0005334f) smil2_volume_content_pane_g3

0xc061,	// (0x00053358) smil2_volume_content_pane_g4

0xc06a,	// (0x00053361) smil2_volume_content_pane_g5

0xc073,	// (0x0005336a) smil2_volume_content_pane_g6

0xc07c,	// (0x00053373) smil2_volume_content_pane_g7

0xc085,	// (0x0005337c) smil2_volume_content_pane_g8

0xc08e,	// (0x00053385) smil2_volume_content_pane_g9

0xc097,	// (0x0005338e) smil2_volume_content_pane_g10

0x0009,

0xf6ec,	// (0x000569e3) smil2_volume_content_pane_g

0x205f,	// (0x00049356) cale_week_day_heading_pane_t1_ParamLimits

0x20a4,	// (0x0004939b) cale_week_day_heading_pane_t2_ParamLimits

0x20ee,	// (0x000493e5) cale_week_day_heading_pane_t3_ParamLimits

0x2138,	// (0x0004942f) cale_week_day_heading_pane_t4_ParamLimits

0x2182,	// (0x00049479) cale_week_day_heading_pane_t5_ParamLimits

0x21d4,	// (0x000494cb) cale_week_day_heading_pane_t6_ParamLimits

0x2226,	// (0x0004951d) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x000564cf) cale_week_day_heading_pane_t_ParamLimits

0x226b,	// (0x00049562) bg_cale_side_pane_ParamLimits

0x2279,	// (0x00049570) cale_week_time_pane_t1_ParamLimits

0x2293,	// (0x0004958a) cale_week_time_pane_t2_ParamLimits

0x22ad,	// (0x000495a4) cale_week_time_pane_t3_ParamLimits

0x22c7,	// (0x000495be) cale_week_time_pane_t4_ParamLimits

0x22e1,	// (0x000495d8) cale_week_time_pane_t5_ParamLimits

0x22fb,	// (0x000495f2) cale_week_time_pane_t6_ParamLimits

0x2315,	// (0x0004960c) cale_week_time_pane_t7_ParamLimits

0x232f,	// (0x00049626) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x000564de) cale_week_time_pane_t_ParamLimits

0x234f,	// (0x00049646) cell_cale_week_pane_g2_ParamLimits

0x226b,	// (0x00049562) bg_cale_side_pane_cp01_ParamLimits

0x3894,	// (0x0004ab8b) cale_month_week_pane_t1_ParamLimits

0x38ad,	// (0x0004aba4) cale_month_week_pane_t2_ParamLimits

0x38c6,	// (0x0004abbd) cale_month_week_pane_t3_ParamLimits

0x38df,	// (0x0004abd6) cale_month_week_pane_t4_ParamLimits

0x38f8,	// (0x0004abef) cale_month_week_pane_t5_ParamLimits

0x3911,	// (0x0004ac08) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x000565b7) cale_month_week_pane_t_ParamLimits

0xb279,	// (0x00052570) cell_cale_month_pane_g1_ParamLimits

0xde02,	// (0x000550f9) main_cale_event_viewer_pane

0xde02,	// (0x000550f9) listscroll_cale_event_viewer_pane

0xc0a0,	// (0x00053397) list_cale_ev_pane

0xc0a8,	// (0x0005339f) scroll_pane_cp023

0xc0b4,	// (0x000533ab) field_cale_ev_pane_ParamLimits

0xc0b4,	// (0x000533ab) field_cale_ev_pane

0xc0d2,	// (0x000533c9) field_cale_ev_content_pane_ParamLimits

0xc0d2,	// (0x000533c9) field_cale_ev_content_pane

0xc0de,	// (0x000533d5) field_cale_ev_pane_g1_ParamLimits

0xc0de,	// (0x000533d5) field_cale_ev_pane_g1

0xc0ea,	// (0x000533e1) field_cale_ev_pane_g2_ParamLimits

0xc0ea,	// (0x000533e1) field_cale_ev_pane_g2

0xc102,	// (0x000533f9) field_cale_ev_pane_g3_ParamLimits

0xc102,	// (0x000533f9) field_cale_ev_pane_g3

0x0002,

0xf701,	// (0x000569f8) field_cale_ev_pane_g_ParamLimits

0xf701,	// (0x000569f8) field_cale_ev_pane_g

0xc11a,	// (0x00053411) field_cale_ev_pane_t1_ParamLimits

0xc11a,	// (0x00053411) field_cale_ev_pane_t1

0xc131,	// (0x00053428) field_cale_ev_content_pane_t1_ParamLimits

0xc131,	// (0x00053428) field_cale_ev_content_pane_t1

0x4b31,	// (0x0004be28) bg_button_pane_cp01

0x1d5a,	// (0x00049051) listscroll_cale_week_pane_ParamLimits

0x1d6c,	// (0x00049063) popup_toolbar_window_cp01

0x1fa2,	// (0x00049299) listscroll_cale_week_pane_t1_ParamLimits

0x1d5a,	// (0x00049051) listscroll_cale_day_pane_ParamLimits

0x1d6c,	// (0x00049063) popup_toolbar_window_cp02

0x3b22,	// (0x0004ae19) listscroll_cale_day_pane_t1_ParamLimits

0x1d5a,	// (0x00049051) main_cale_month_pane_ParamLimits

0xbb4f,	// (0x00052e46) popup_toolbar_window_cp03_ParamLimits

0xbb4f,	// (0x00052e46) popup_toolbar_window_cp03

0x4e93,	// (0x0004c18a) main_image_pane_g2_ParamLimits

0x4e93,	// (0x0004c18a) main_image_pane_g2

0x4ea4,	// (0x0004c19b) main_image_pane_g3_ParamLimits

0x4ea4,	// (0x0004c19b) main_image_pane_g3

0x0002,

0xf4f2,	// (0x000567e9) main_image_pane_g_ParamLimits

0xf4f2,	// (0x000567e9) main_image_pane_g

0x4eb5,	// (0x0004c1ac) main_image_pane_t1_ParamLimits

0x4ecc,	// (0x0004c1c3) main_image_pane_t2_ParamLimits

0x4ecc,	// (0x0004c1c3) main_image_pane_t2

0x4ede,	// (0x0004c1d5) main_image_pane_t3_ParamLimits

0x4ede,	// (0x0004c1d5) main_image_pane_t3

0x4f06,	// (0x0004c1fd) main_image_pane_t4_ParamLimits

0x4f06,	// (0x0004c1fd) main_image_pane_t4

0x0003,

0xf4f9,	// (0x000567f0) main_image_pane_t_ParamLimits

0xf4f9,	// (0x000567f0) main_image_pane_t

0x4f26,	// (0x0004c21d) popup_image_details_window_cp01

0x4f30,	// (0x0004c227) popup_toobar_trans_pane_cp01_ParamLimits

0x4f30,	// (0x0004c227) popup_toobar_trans_pane_cp01

0x60b8,	// (0x0004d3af) popup_image_details_window_ParamLimits

0x60b8,	// (0x0004d3af) popup_image_details_window

0xbb22,	// (0x00052e19) popup_image_focus_window

0x64c5,	// (0x0004d7bc) camera2_autofocus_pane_ParamLimits

0x64c5,	// (0x0004d7bc) camera2_autofocus_pane

0xde02,	// (0x000550f9) bg_popup_sub_pane_cp06

0xc14f,	// (0x00053446) popup_image_focus_window_g1

0xc157,	// (0x0005344e) popup_image_focus_window_g2

0xc15f,	// (0x00053456) popup_image_focus_window_g3

0xc167,	// (0x0005345e) popup_image_focus_window_g4

0x0003,

0xf708,	// (0x000569ff) popup_image_focus_window_g

0xc16f,	// (0x00053466) popup_image_focus_window_t1

0xc17d,	// (0x00053474) popup_image_focus_window_t2

0xc18d,	// (0x00053484) popup_image_focus_window_t3

0x0002,

0xf711,	// (0x00056a08) popup_image_focus_window_t

0xc19b,	// (0x00053492) camera2_autofocus_pane_g1

0x13ca,	// (0x000486c1) bg_tb_trans_pane_cp01

0xc1a9,	// (0x000534a0) popup_image_details_window_g1

0xc1bc,	// (0x000534b3) popup_image_details_window_g2

0x0002,

0xf723,	// (0x00056a1a) popup_image_details_window_g

0xc1e5,	// (0x000534dc) popup_image_details_window_t1

0xc1f7,	// (0x000534ee) popup_image_details_window_t2

0xc210,	// (0x00053507) popup_image_details_window_t3

0xc224,	// (0x0005351b) popup_image_details_window_t4

0xc23f,	// (0x00053536) popup_image_details_window_t5

0x0004,

0xf72a,	// (0x00056a21) popup_image_details_window_t

0x1a70,	// (0x00048d67) bg_calc_paper_pane_ParamLimits

0xde02,	// (0x000550f9) grid_highlight_pane_cp013

0xb1e5,	// (0x000524dc) list_calc_pane_ParamLimits

0xb1f7,	// (0x000524ee) scroll_pane_cp024

0x1a84,	// (0x00048d7b) bg_calc_display_pane_ParamLimits

0x1a90,	// (0x00048d87) calc_display_pane_t1_ParamLimits

0x1aa2,	// (0x00048d99) calc_display_pane_t2_ParamLimits

0xb1ff,	// (0x000524f6) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x00056451) calc_display_pane_t_ParamLimits

0x1baf,	// (0x00048ea6) cell_calc_pane_g2

0x0001,

0xf177,	// (0x0005646e) cell_calc_pane_g

0x1bb8,	// (0x00048eaf) cell_calc_pane_t1

0x1bc7,	// (0x00048ebe) grid_highlight_pane_cp02_ParamLimits

0x1bdd,	// (0x00048ed4) toolbar_button_pane_cp01_ParamLimits

0x1bdd,	// (0x00048ed4) toolbar_button_pane_cp01

0x4f72,	// (0x0004c269) temp_image_control_pane_ParamLimits

0x4f72,	// (0x0004c269) temp_image_control_pane

0x13ca,	// (0x000486c1) main_mp3_pane

0xc259,	// (0x00053550) temp_image_control_pane_g1_ParamLimits

0xc259,	// (0x00053550) temp_image_control_pane_g1

0xc267,	// (0x0005355e) temp_image_control_pane_g2_ParamLimits

0xc267,	// (0x0005355e) temp_image_control_pane_g2

0xc279,	// (0x00053570) temp_image_control_pane_g3_ParamLimits

0xc279,	// (0x00053570) temp_image_control_pane_g3

0x6d15,	// (0x0004e00c) temp_image_control_pane_g4_ParamLimits

0x6d15,	// (0x0004e00c) temp_image_control_pane_g4

0x0003,

0xf735,	// (0x00056a2c) temp_image_control_pane_g_ParamLimits

0xf735,	// (0x00056a2c) temp_image_control_pane_g

0xc259,	// (0x00053550) main_mp3_pane_g1

0x6d28,	// (0x0004e01f) main_mp3_pane_g2

0x0007,

0xf73e,	// (0x00056a35) main_mp3_pane_g

0xc2bc,	// (0x000535b3) main_mp3_pane_t1

0x2536,	// (0x0004982d) main_camera_pane_g8_ParamLimits

0x2536,	// (0x0004982d) main_camera_pane_g8

0x26de,	// (0x000499d5) main_video_pane_g7_ParamLimits

0x26de,	// (0x000499d5) main_video_pane_g7

0xbc44,	// (0x00052f3b) main_camera2_pane_t7_ParamLimits

0xbc44,	// (0x00052f3b) main_camera2_pane_t7

0x2cd6,	// (0x00049fcd) scroll_pane_cp025_ParamLimits

0x2cd6,	// (0x00049fcd) scroll_pane_cp025

0x2cea,	// (0x00049fe1) scroll_pane_cp026_ParamLimits

0x2cea,	// (0x00049fe1) scroll_pane_cp026

0x2cf9,	// (0x00049ff0) wml_content_pane_ParamLimits

0xde02,	// (0x000550f9) main_touch_calib_pane

0x6dfc,	// (0x0004e0f3) main_touch_calib_pane_g1

0x6e0e,	// (0x0004e105) main_touch_calib_pane_g2

0x6e20,	// (0x0004e117) main_touch_calib_pane_g3

0x6e32,	// (0x0004e129) main_touch_calib_pane_g4

0x0003,

0xf75c,	// (0x00056a53) main_touch_calib_pane_g

0x6e44,	// (0x0004e13b) main_touch_calib_pane_t1

0x6e5e,	// (0x0004e155) main_touch_calib_pane_t2

0x0004,

0xf765,	// (0x00056a5c) main_touch_calib_pane_t

0x43c5,	// (0x0004b6bc) mup_progress_pane_cp02

0x43fa,	// (0x0004b6f1) navi_pane_g1

0x44b3,	// (0x0004b7aa) navi_pane_mp_t3

0x13ca,	// (0x000486c1) main_mp3_pane_ParamLimits

0x623d,	// (0x0004d534) navi_pane_ParamLimits

0xc259,	// (0x00053550) main_mp3_pane_g1_ParamLimits

0x6d28,	// (0x0004e01f) main_mp3_pane_g2_ParamLimits

0x6d36,	// (0x0004e02d) main_mp3_pane_g3_ParamLimits

0x6d36,	// (0x0004e02d) main_mp3_pane_g3

0x6d44,	// (0x0004e03b) main_mp3_pane_g4_ParamLimits

0x6d44,	// (0x0004e03b) main_mp3_pane_g4

0xc289,	// (0x00053580) main_mp3_pane_g5_ParamLimits

0xc289,	// (0x00053580) main_mp3_pane_g5

0xc297,	// (0x0005358e) main_mp3_pane_g6_ParamLimits

0xc297,	// (0x0005358e) main_mp3_pane_g6

0xc2a4,	// (0x0005359b) main_mp3_pane_g7_ParamLimits

0xc2a4,	// (0x0005359b) main_mp3_pane_g7

0xc2b0,	// (0x000535a7) main_mp3_pane_g8_ParamLimits

0xc2b0,	// (0x000535a7) main_mp3_pane_g8

0xf73e,	// (0x00056a35) main_mp3_pane_g_ParamLimits

0x6d50,	// (0x0004e047) main_mp3_pane_t2

0x6d5e,	// (0x0004e055) main_mp3_pane_t3

0xc2ca,	// (0x000535c1) main_mp3_pane_t4

0xc2d8,	// (0x000535cf) main_mp3_pane_t5

0x0005,

0xf74f,	// (0x00056a46) main_mp3_pane_t

0xc2e6,	// (0x000535dd) mup_progress_pane_cp01

0xb193,	// (0x0005248a) aid_zoom_text_secondary2

0xc0a0,	// (0x00053397) list_cale_ev2_pane

0xc0a8,	// (0x0005339f) scroll_pane_cp023_ParamLimits

0x6eb4,	// (0x0004e1ab) field_cale_ev2_pane_ParamLimits

0x6eb4,	// (0x0004e1ab) field_cale_ev2_pane

0xc2ee,	// (0x000535e5) field_cale_ev2_pane_g1_ParamLimits

0xc2ee,	// (0x000535e5) field_cale_ev2_pane_g1

0xc2fa,	// (0x000535f1) field_cale_ev2_pane_g2_ParamLimits

0xc2fa,	// (0x000535f1) field_cale_ev2_pane_g2

0xc312,	// (0x00053609) field_cale_ev2_pane_g3_ParamLimits

0xc312,	// (0x00053609) field_cale_ev2_pane_g3

0x0003,

0xf770,	// (0x00056a67) field_cale_ev2_pane_g_ParamLimits

0xf770,	// (0x00056a67) field_cale_ev2_pane_g

0x0617,	// (0x0004790e) field_cale_ev2_pane_t1_ParamLimits

0x0617,	// (0x0004790e) field_cale_ev2_pane_t1

0x062e,	// (0x00047925) field_cale_ev2_pane_t2_ParamLimits

0x062e,	// (0x00047925) field_cale_ev2_pane_t2

0x0001,

0xf779,	// (0x00056a70) field_cale_ev2_pane_t_ParamLimits

0xf779,	// (0x00056a70) field_cale_ev2_pane_t

0x4c62,	// (0x0004bf59) main_postcard_pane_g5_ParamLimits

0x4c62,	// (0x0004bf59) main_postcard_pane_g5

0x4c78,	// (0x0004bf6f) main_postcard_pane_g6_ParamLimits

0x4c78,	// (0x0004bf6f) main_postcard_pane_g6

0x2484,	// (0x0004977b) camera2_autofocus_pane_cp_ParamLimits

0x2484,	// (0x0004977b) camera2_autofocus_pane_cp

0x13ca,	// (0x000486c1) main_mup3_pane

0x6ed4,	// (0x0004e1cb) main_mup3_pane_g1_ParamLimits

0x6ed4,	// (0x0004e1cb) main_mup3_pane_g1

0x6ef6,	// (0x0004e1ed) main_mup3_pane_g2_ParamLimits

0x6ef6,	// (0x0004e1ed) main_mup3_pane_g2

0x6f74,	// (0x0004e26b) main_mup3_pane_g3_ParamLimits

0x6f74,	// (0x0004e26b) main_mup3_pane_g3

0x6fba,	// (0x0004e2b1) main_mup3_pane_g4_ParamLimits

0x6fba,	// (0x0004e2b1) main_mup3_pane_g4

0x7000,	// (0x0004e2f7) main_mup3_pane_g5_ParamLimits

0x7000,	// (0x0004e2f7) main_mup3_pane_g5

0x7046,	// (0x0004e33d) main_mup3_pane_g6_ParamLimits

0x7046,	// (0x0004e33d) main_mup3_pane_g6

0xc356,	// (0x0005364d) main_mup3_pane_g7_ParamLimits

0xc356,	// (0x0005364d) main_mup3_pane_g7

0x0007,

0xf789,	// (0x00056a80) main_mup3_pane_g_ParamLimits

0xf789,	// (0x00056a80) main_mup3_pane_g

0x70c4,	// (0x0004e3bb) main_mup3_pane_t1_ParamLimits

0x70c4,	// (0x0004e3bb) main_mup3_pane_t1

0x7138,	// (0x0004e42f) main_mup3_pane_t2_ParamLimits

0x7138,	// (0x0004e42f) main_mup3_pane_t2

0x720c,	// (0x0004e503) main_mup3_pane_t4_ParamLimits

0x720c,	// (0x0004e503) main_mup3_pane_t4

0x7262,	// (0x0004e559) main_mup3_pane_t5_ParamLimits

0x7262,	// (0x0004e559) main_mup3_pane_t5

0x731e,	// (0x0004e615) main_mup3_pane_t6_ParamLimits

0x731e,	// (0x0004e615) main_mup3_pane_t6

0x0005,

0xf79a,	// (0x00056a91) main_mup3_pane_t_ParamLimits

0xf79a,	// (0x00056a91) main_mup3_pane_t

0x73d6,	// (0x0004e6cd) mup3_progress_pane_ParamLimits

0x73d6,	// (0x0004e6cd) mup3_progress_pane

0x746c,	// (0x0004e763) popup_mup3_control_window_ParamLimits

0x746c,	// (0x0004e763) popup_mup3_control_window

0xc364,	// (0x0005365b) popup_mup3_text_window

0x749e,	// (0x0004e795) mup3_progress_pane_t1

0x74bd,	// (0x0004e7b4) mup3_progress_pane_t2

0xc36c,	// (0x00053663) mup3_progress_pane_t3

0x0002,

0xf7a7,	// (0x00056a9e) mup3_progress_pane_t

0xc389,	// (0x00053680) mup_progress_pane_cp03

0xde02,	// (0x000550f9) bg_tb_trans_pane_cp04

0x74dc,	// (0x0004e7d3) mup3_volume_pane

0x74e4,	// (0x0004e7db) popup_mup3_control_window_g1

0x74ed,	// (0x0004e7e4) mup3_volume_pane_g1

0x74f6,	// (0x0004e7ed) mup3_volume_pane_g2

0x74ff,	// (0x0004e7f6) mup3_volume_pane_g3

0x0002,

0xf7ae,	// (0x00056aa5) mup3_volume_pane_g

0xde02,	// (0x000550f9) bg_tb_trans_pane_cp03

0xc399,	// (0x00053690) popup_mup3_text_window_g1

0xc3a1,	// (0x00053698) popup_mup3_text_window_t1

0x1b7e,	// (0x00048e75) list_calc_item_pane_g1_ParamLimits

0xbd2c,	// (0x00053023) mup_volume_pane_cp_g1

0x6e78,	// (0x0004e16f) main_touch_calib_pane_t3

0x6e8c,	// (0x0004e183) main_touch_calib_pane_t4

0x6ea0,	// (0x0004e197) main_touch_calib_pane_t5

0xb16f,	// (0x00052466) aid_cell_size_toolbar2

0xb177,	// (0x0005246e) aid_popup3_width_pane

0xb183,	// (0x0005247a) aid_zoom_text_msg_primary

0x2451,	// (0x00049748) vorec_t7

0x1ae9,	// (0x00048de0) bg_calc_paper_pane_g1_ParamLimits

0x1af5,	// (0x00048dec) bg_calc_paper_pane_g2_ParamLimits

0x1b01,	// (0x00048df8) bg_calc_paper_pane_g3_ParamLimits

0x1b0d,	// (0x00048e04) bg_calc_paper_pane_g4_ParamLimits

0x1b19,	// (0x00048e10) bg_calc_paper_pane_g5_ParamLimits

0x1b25,	// (0x00048e1c) bg_calc_paper_pane_g6_ParamLimits

0x1b34,	// (0x00048e2b) bg_calc_paper_pane_g7_ParamLimits

0x1b43,	// (0x00048e3a) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x00056458) bg_calc_paper_pane_g_ParamLimits

0x1b56,	// (0x00048e4d) calc_bg_paper_pane_g9_ParamLimits

0x25db,	// (0x000498d2) image_qvga_pane_ParamLimits

0x25db,	// (0x000498d2) image_qvga_pane

0x1718,	// (0x00048a0f) bg_popup_sub_pane_cp04_ParamLimits

0x4df1,	// (0x0004c0e8) popup_mup_playback_window_g1_ParamLimits

0x4dfd,	// (0x0004c0f4) popup_mup_playback_window_t1_ParamLimits

0x4e12,	// (0x0004c109) popup_mup_playback_window_t2_ParamLimits

0xf4ed,	// (0x000567e4) popup_mup_playback_window_t_ParamLimits

0x69b8,	// (0x0004dcaf) main_mup2_pane_g3_ParamLimits

0x69b8,	// (0x0004dcaf) main_mup2_pane_g3

0x2969,	// (0x00049c60) popup_toolbar_window_cp04

0x55f4,	// (0x0004c8eb) popup_call2_audio_second_window_g3_ParamLimits

0x55f4,	// (0x0004c8eb) popup_call2_audio_second_window_g3

0x59fe,	// (0x0004ccf5) popup_call2_audio_first_window_g4_ParamLimits

0x59fe,	// (0x0004ccf5) popup_call2_audio_first_window_g4

0xb795,	// (0x00052a8c) popup_call2_audio_in_window_g4_ParamLimits

0xb795,	// (0x00052a8c) popup_call2_audio_in_window_g4

0x4e27,	// (0x0004c11e) aid_area_sk_bg_cut_ParamLimits

0x4e27,	// (0x0004c11e) aid_area_sk_bg_cut

0x4e45,	// (0x0004c13c) aid_area_sk_bg_cut_2_ParamLimits

0x4e45,	// (0x0004c13c) aid_area_sk_bg_cut_2

0x6cbb,	// (0x0004dfb2) aid_placing_details_win

0x6cc3,	// (0x0004dfba) aid_placing_details_win_2

0xc19b,	// (0x00053492) camera2_autofocus_pane_g1_ParamLimits

0x136f,	// (0x00048666) popup_fixed_preview_cale_window_ParamLimits

0x136f,	// (0x00048666) popup_fixed_preview_cale_window

0x4577,	// (0x0004b86e) navi_slider_pane_g3

0x4580,	// (0x0004b877) navi_slider_pane_g4

0x4589,	// (0x0004b880) navi_slider_pane_g5

0x4577,	// (0x0004b86e) navi_slider_pane_g6

0xb323,	// (0x0005261a) navi_slider_pane_g7

0x4aa4,	// (0x0004bd9b) mup_scale_pane_g3

0x4aad,	// (0x0004bda4) mup_scale_pane_g4

0x4ab6,	// (0x0004bdad) mup_scale_pane_g5

0x4abf,	// (0x0004bdb6) mup_scale_pane_g6

0x4ac8,	// (0x0004bdbf) mup_scale_pane_g7

0x4577,	// (0x0004b86e) cams2_slider_pane_g3

0xbde1,	// (0x000530d8) cams2_slider_pane_g4

0xbde9,	// (0x000530e0) cams2_slider_pane_g5

0x4577,	// (0x0004b86e) cams2_slider_pane_g6

0xbdf1,	// (0x000530e8) cams2_slider_pane_g7

0xc01d,	// (0x00053314) camera2_autofocus_pane_cp_g1

0xbaf6,	// (0x00052ded) bg_popup_preview_window_pane_cp02_ParamLimits

0xbaf6,	// (0x00052ded) bg_popup_preview_window_pane_cp02

0xc3af,	// (0x000536a6) list_fp_cale_pane_ParamLimits

0xc3af,	// (0x000536a6) list_fp_cale_pane

0xc3bb,	// (0x000536b2) popup_fixed_preview_cale_window_t1_ParamLimits

0xc3bb,	// (0x000536b2) popup_fixed_preview_cale_window_t1

0x7508,	// (0x0004e7ff) popup_fixed_preview_cale_window_t2_ParamLimits

0x7508,	// (0x0004e7ff) popup_fixed_preview_cale_window_t2

0x751d,	// (0x0004e814) popup_fixed_preview_cale_window_t3_ParamLimits

0x751d,	// (0x0004e814) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b5,	// (0x00056aac) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b5,	// (0x00056aac) popup_fixed_preview_cale_window_t

0x7532,	// (0x0004e829) list_single_fp_cale_pane_ParamLimits

0x7532,	// (0x0004e829) list_single_fp_cale_pane

0xc3d9,	// (0x000536d0) list_single_fp_cale_pane_g1_ParamLimits

0xc3d9,	// (0x000536d0) list_single_fp_cale_pane_g1

0xc3e5,	// (0x000536dc) list_single_fp_cale_pane_g2_ParamLimits

0xc3e5,	// (0x000536dc) list_single_fp_cale_pane_g2

0x0002,

0xf7bc,	// (0x00056ab3) list_single_fp_cale_pane_g_ParamLimits

0xf7bc,	// (0x00056ab3) list_single_fp_cale_pane_g

0xc3fe,	// (0x000536f5) list_single_fp_cale_pane_t1_ParamLimits

0xc3fe,	// (0x000536f5) list_single_fp_cale_pane_t1

0xc410,	// (0x00053707) list_single_fp_cale_pane_t2_ParamLimits

0xc410,	// (0x00053707) list_single_fp_cale_pane_t2

0x0001,

0xf7c3,	// (0x00056aba) list_single_fp_cale_pane_t_ParamLimits

0xf7c3,	// (0x00056aba) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xde02,	// (0x000550f9) main_dialer_pane

0x7547,	// (0x0004e83e) aid_cell_size_keypad

0x7551,	// (0x0004e848) dialer_ne_pane

0x7559,	// (0x0004e850) grid_dialer_command_1_pane

0x7561,	// (0x0004e858) grid_dialer_command_2_pane

0x7569,	// (0x0004e860) grid_dialer_keypad_pane

0x757b,	// (0x0004e872) bg_popup_call_pane_cp06_ParamLimits

0x757b,	// (0x0004e872) bg_popup_call_pane_cp06

0x7587,	// (0x0004e87e) dialer_ne_clear_pane_ParamLimits

0x7587,	// (0x0004e87e) dialer_ne_clear_pane

0xc443,	// (0x0005373a) dialer_ne_pane_g1

0xc44b,	// (0x00053742) dialer_ne_pane_t1_ParamLimits

0xc44b,	// (0x00053742) dialer_ne_pane_t1

0x7593,	// (0x0004e88a) dialer_ne_pane_t2_ParamLimits

0x7593,	// (0x0004e88a) dialer_ne_pane_t2

0x75bd,	// (0x0004e8b4) dialer_ne_pane_t3_ParamLimits

0x75bd,	// (0x0004e8b4) dialer_ne_pane_t3

0x0002,

0xf7c8,	// (0x00056abf) dialer_ne_pane_t_ParamLimits

0xf7c8,	// (0x00056abf) dialer_ne_pane_t

0x75ed,	// (0x0004e8e4) dialer_ne_pane_t3_copy1_ParamLimits

0x75ed,	// (0x0004e8e4) dialer_ne_pane_t3_copy1

0x761c,	// (0x0004e913) cell_dialer_keypad_pane_ParamLimits

0x761c,	// (0x0004e913) cell_dialer_keypad_pane

0x7633,	// (0x0004e92a) cell_dialer_command_1_pane_ParamLimits

0x7633,	// (0x0004e92a) cell_dialer_command_1_pane

0x7649,	// (0x0004e940) cell_dialer_command_2_pane_ParamLimits

0x7649,	// (0x0004e940) cell_dialer_command_2_pane

0xc45d,	// (0x00053754) bg_button_pane_cp02_ParamLimits

0xc45d,	// (0x00053754) bg_button_pane_cp02

0x7658,	// (0x0004e94f) cell_dialer_keypad_pane_g1_ParamLimits

0x7658,	// (0x0004e94f) cell_dialer_keypad_pane_g1

0xc45d,	// (0x00053754) bg_button_pane_cp03_ParamLimits

0xc45d,	// (0x00053754) bg_button_pane_cp03

0x766c,	// (0x0004e963) cell_dialer_command_1_pane_g1_ParamLimits

0x766c,	// (0x0004e963) cell_dialer_command_1_pane_g1

0xc469,	// (0x00053760) bg_button_pane_cp04

0x7680,	// (0x0004e977) cell_dialer_command_2_pane_g1

0x4566,	// (0x0004b85d) bg_button_pane_cp06

0xc471,	// (0x00053768) dialer_ne_clear_pane_g1

0x4406,	// (0x0004b6fd) navi_pane_g2

0x4434,	// (0x0004b72b) navi_pane_g3

0x0002,

0xf3f0,	// (0x000566e7) navi_pane_g

0x44c1,	// (0x0004b7b8) navi_pane_mv_g2

0x44e8,	// (0x0004b7df) navi_pane_mv_g5

0x44f0,	// (0x0004b7e7) navi_pane_mv_t1

0x1a84,	// (0x00048d7b) main_clock2_pane

0x76cb,	// (0x0004e9c2) main_clock2_list_pane_ParamLimits

0x76cb,	// (0x0004e9c2) main_clock2_list_pane

0x7703,	// (0x0004e9fa) main_clock2_pane_t1_ParamLimits

0x7703,	// (0x0004e9fa) main_clock2_pane_t1

0x773f,	// (0x0004ea36) main_clock2_pane_t2_ParamLimits

0x773f,	// (0x0004ea36) main_clock2_pane_t2

0x0004,

0xf7cf,	// (0x00056ac6) main_clock2_pane_t_ParamLimits

0xf7cf,	// (0x00056ac6) main_clock2_pane_t

0x77dd,	// (0x0004ead4) popup_clock_analogue_window_cp03_ParamLimits

0x77dd,	// (0x0004ead4) popup_clock_analogue_window_cp03

0x7802,	// (0x0004eaf9) popup_clock_digital_window_cp02_ParamLimits

0x7802,	// (0x0004eaf9) popup_clock_digital_window_cp02

0x7873,	// (0x0004eb6a) main_clock2_list_single_pane_ParamLimits

0x7873,	// (0x0004eb6a) main_clock2_list_single_pane

0x4566,	// (0x0004b85d) list_highlight_pane_cp05

0xc48f,	// (0x00053786) main_clock2_list_single_pane_t1

0x2969,	// (0x00049c60) popup_toolbar_window_cp04_ParamLimits

0x6ce5,	// (0x0004dfdc) camera2_autofocus_pane_g2_ParamLimits

0x6ce5,	// (0x0004dfdc) camera2_autofocus_pane_g2

0x6cf1,	// (0x0004dfe8) camera2_autofocus_pane_g3_ParamLimits

0x6cf1,	// (0x0004dfe8) camera2_autofocus_pane_g3

0x6cfd,	// (0x0004dff4) camera2_autofocus_pane_g4_ParamLimits

0x6cfd,	// (0x0004dff4) camera2_autofocus_pane_g4

0x6d09,	// (0x0004e000) camera2_autofocus_pane_g5_ParamLimits

0x6d09,	// (0x0004e000) camera2_autofocus_pane_g5

0x0004,

0xf718,	// (0x00056a0f) camera2_autofocus_pane_g_ParamLimits

0xf718,	// (0x00056a0f) camera2_autofocus_pane_g

0xc336,	// (0x0005362d) camera2_autofocus_pane_cp_g2

0xc33e,	// (0x00053635) camera2_autofocus_pane_cp_g3

0xc346,	// (0x0005363d) camera2_autofocus_pane_cp_g4

0xc34e,	// (0x00053645) camera2_autofocus_pane_cp_g5

0x0004,

0xf77e,	// (0x00056a75) camera2_autofocus_pane_cp_g

0x7573,	// (0x0004e86a) popup_dialer_spcha_window

0xde02,	// (0x000550f9) bg_popup_sub_pane_cp07

0xc49d,	// (0x00053794) list_spcha_pane

0xc4a5,	// (0x0005379c) list_single_spcha_pane_ParamLimits

0xc4a5,	// (0x0005379c) list_single_spcha_pane

0xde02,	// (0x000550f9) list_highlight_pane_cp06

0xc4b6,	// (0x000537ad) list_single_spcha_pane_t1

0xb53f,	// (0x00052836) popup_call2_audio_out_window_g4_ParamLimits

0xb53f,	// (0x00052836) popup_call2_audio_out_window_g4

0xde02,	// (0x000550f9) main_imed2_pane

0xbb2a,	// (0x00052e21) popup_imed_adjust2_window

0x60d0,	// (0x0004d3c7) popup_imed_trans_window_ParamLimits

0x60d0,	// (0x0004d3c7) popup_imed_trans_window

0xbe5b,	// (0x00053152) popup_blid_sat_info2_window_t1

0xbe69,	// (0x00053160) popup_blid_sat_info2_window_t2

0x000a,

0xf6ad,	// (0x000569a4) popup_blid_sat_info2_window_t

0x791d,	// (0x0004ec14) aid_size_cell_colour_35

0x793d,	// (0x0004ec34) aid_size_cell_colour_112

0x795d,	// (0x0004ec54) aid_size_cell_effect

0xbb02,	// (0x00052df9) bg_tb_trans_pane_cp02

0x3c68,	// (0x0004af5f) heading_imed_pane

0x797d,	// (0x0004ec74) listscroll_imed_pane

0xc4c4,	// (0x000537bb) heading_imed_pane_g1

0xc4cc,	// (0x000537c3) heading_imed_pane_t1

0xc4da,	// (0x000537d1) grid_imed_colour_35_pane_ParamLimits

0xc4da,	// (0x000537d1) grid_imed_colour_35_pane

0x7989,	// (0x0004ec80) grid_imed_effect_pane

0xc4f1,	// (0x000537e8) list_imed_aspect_pane

0x799f,	// (0x0004ec96) scroll_pane_cp027_ParamLimits

0x799f,	// (0x0004ec96) scroll_pane_cp027

0x79b0,	// (0x0004eca7) cell_imed_effect_pane_ParamLimits

0x79b0,	// (0x0004eca7) cell_imed_effect_pane

0xc4f9,	// (0x000537f0) cell_imed_colour_pane_ParamLimits

0xc4f9,	// (0x000537f0) cell_imed_colour_pane

0xc53b,	// (0x00053832) cell_imed_colour_pane_g1_ParamLimits

0xc53b,	// (0x00053832) cell_imed_colour_pane_g1

0xc54c,	// (0x00053843) hgihlgiht_grid_pane_cp016_ParamLimits

0xc54c,	// (0x00053843) hgihlgiht_grid_pane_cp016

0x79d7,	// (0x0004ecce) cell_imed_effect_pane_g1

0x79df,	// (0x0004ecd6) grid_highlight_pane_cp017

0xc55d,	// (0x00053854) list_imed_single_pane_ParamLimits

0xc55d,	// (0x00053854) list_imed_single_pane

0xde02,	// (0x000550f9) list_highlight_pane_cp07

0xc572,	// (0x00053869) list_imed_aspect_pane_comp1_t1

0xbb02,	// (0x00052df9) bg_tb_trans_pane_cp05

0xc594,	// (0x0005388b) popup_imed_adjust2_window_g1

0xc5bb,	// (0x000538b2) popup_imed_adjust2_window_t1

0xc5d3,	// (0x000538ca) slider_imed_adjust_pane

0xc5e7,	// (0x000538de) slider_imed_adjust_pane_g1

0xc5f7,	// (0x000538ee) slider_imed_adjust_pane_g2

0xc607,	// (0x000538fe) slider_imed_adjust_pane_g3

0xc618,	// (0x0005390f) slider_imed_adjust_pane_g4

0x0003,

0xf7ec,	// (0x00056ae3) slider_imed_adjust_pane_g

0x79e8,	// (0x0004ecdf) aid_size_cell_clipart2

0x79f4,	// (0x0004eceb) grid_imed_clipart_pane

0xc629,	// (0x00053920) scroll_pane_cp031

0x79fe,	// (0x0004ecf5) cell_imed_clipart_pane_ParamLimits

0x79fe,	// (0x0004ecf5) cell_imed_clipart_pane

0x7a20,	// (0x0004ed17) cell_imed_clipart_pane_g1

0xde02,	// (0x000550f9) grid_highlight_pane_cp014

0x76e0,	// (0x0004e9d7) main_clock2_pane_g1_ParamLimits

0x76e0,	// (0x0004e9d7) main_clock2_pane_g1

0x781e,	// (0x0004eb15) aid_call2_pane_cp10

0x7830,	// (0x0004eb27) aid_call_pane_cp10

0x4302,	// (0x0004b5f9) popup_clock_analogue_window_cp10_g1

0x4302,	// (0x0004b5f9) popup_clock_analogue_window_cp10_g2

0x7842,	// (0x0004eb39) popup_clock_analogue_window_cp10_g3

0x7842,	// (0x0004eb39) popup_clock_analogue_window_cp10_g4

0x4302,	// (0x0004b5f9) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7da,	// (0x00056ad1) popup_clock_analogue_window_cp10_g

0x7854,	// (0x0004eb4b) popup_clock_analogue_window_cp10_t1

0x7885,	// (0x0004eb7c) clock_digital_number_pane_cp10_ParamLimits

0x7885,	// (0x0004eb7c) clock_digital_number_pane_cp10

0x789d,	// (0x0004eb94) clock_digital_number_pane_cp11_ParamLimits

0x789d,	// (0x0004eb94) clock_digital_number_pane_cp11

0x78b5,	// (0x0004ebac) clock_digital_number_pane_cp12_ParamLimits

0x78b5,	// (0x0004ebac) clock_digital_number_pane_cp12

0x78cd,	// (0x0004ebc4) clock_digital_number_pane_cp13_ParamLimits

0x78cd,	// (0x0004ebc4) clock_digital_number_pane_cp13

0x78e5,	// (0x0004ebdc) clock_digital_separator_pane_cp10_ParamLimits

0x78e5,	// (0x0004ebdc) clock_digital_separator_pane_cp10

0x78fd,	// (0x0004ebf4) popup_clock_digital_window_cp02_t1_ParamLimits

0x78fd,	// (0x0004ebf4) popup_clock_digital_window_cp02_t1

0x1710,	// (0x00048a07) clock_digital_number_pane_cp10_g1

0x1710,	// (0x00048a07) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f5,	// (0x00056aec) clock_digital_number_pane_cp10_g

0x1710,	// (0x00048a07) clock_digital_separator_pane_cp10_g1

0x1710,	// (0x00048a07) clock_digital_separator_pane_g2_cp10

0x452e,	// (0x0004b825) navi_pane_vded_g4

0x4537,	// (0x0004b82e) navi_pane_vded_g5

0x4540,	// (0x0004b837) navi_pane_vded_t1

0xde02,	// (0x000550f9) main_vded_pane

0x7a29,	// (0x0004ed20) main_vded_pane_g1

0x7a33,	// (0x0004ed2a) main_vded_pane_g2

0x7a3d,	// (0x0004ed34) main_vded_pane_g3

0x0002,

0xf7fa,	// (0x00056af1) main_vded_pane_g

0x7a47,	// (0x0004ed3e) main_vded_pane_t1

0x7a55,	// (0x0004ed4c) main_vded_pane_t2

0x0001,

0xf801,	// (0x00056af8) main_vded_pane_t

0x7a63,	// (0x0004ed5a) vded_slider_pane

0x7a6b,	// (0x0004ed62) vded_video_pane

0xc631,	// (0x00053928) vded_video_pane_g1

0x7a73,	// (0x0004ed6a) vded_video_pane_g2

0xc01d,	// (0x00053314) vded_video_pane_g3

0x0002,

0xf806,	// (0x00056afd) vded_video_pane_g

0xc63b,	// (0x00053932) vded_slider_pane_g1

0xbd2c,	// (0x00053023) vded_slider_pane_g2

0xc644,	// (0x0005393b) vded_slider_pane_g3

0xc64d,	// (0x00053944) vded_slider_pane_g4

0xc656,	// (0x0005394d) vded_slider_pane_g5

0x0004,

0xf80d,	// (0x00056b04) vded_slider_pane_g

0x7454,	// (0x0004e74b) mup3_rocker_pane_ParamLimits

0x7454,	// (0x0004e74b) mup3_rocker_pane

0x7a7c,	// (0x0004ed73) mup3_control_keys_pane_g1

0x7a84,	// (0x0004ed7b) mup3_control_keys_pane_g2

0x7a8c,	// (0x0004ed83) mup3_control_keys_pane_g3

0x7a94,	// (0x0004ed8b) mup3_control_keys_pane_g4

0x0003,

0xf818,	// (0x00056b0f) mup3_control_keys_pane_g

0x13a6,	// (0x0004869d) popup_toolbar2_fixed_window_cp01_ParamLimits

0x13a6,	// (0x0004869d) popup_toolbar2_fixed_window_cp01

0x7488,	// (0x0004e77f) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7488,	// (0x0004e77f) popup_toolbar2_fixed_window_cp02

0x5766,	// (0x0004ca5d) popup_call2_audio_second_window_t4_ParamLimits

0x5766,	// (0x0004ca5d) popup_call2_audio_second_window_t4

0xb3ac,	// (0x000526a3) popup_call2_audio_first_window_t6_ParamLimits

0xb3ac,	// (0x000526a3) popup_call2_audio_first_window_t6

0xb642,	// (0x00052939) popup_call2_audio_out_window_t6_ParamLimits

0xb642,	// (0x00052939) popup_call2_audio_out_window_t6

0xde02,	// (0x000550f9) main_vitu_pane

0x7aa4,	// (0x0004ed9b) aid_size_cell_itu_ParamLimits

0x7aa4,	// (0x0004ed9b) aid_size_cell_itu

0x13ca,	// (0x000486c1) bg_popup_window_pane_cp08_ParamLimits

0x13ca,	// (0x000486c1) bg_popup_window_pane_cp08

0x7aba,	// (0x0004edb1) field_vitu_entry_pane_ParamLimits

0x7aba,	// (0x0004edb1) field_vitu_entry_pane

0x7ad1,	// (0x0004edc8) grid_vitu_function_pane_ParamLimits

0x7ad1,	// (0x0004edc8) grid_vitu_function_pane

0x7aec,	// (0x0004ede3) grid_vitu_itu_pane_ParamLimits

0x7aec,	// (0x0004ede3) grid_vitu_itu_pane

0x7b0a,	// (0x0004ee01) cell_vitu_itu_pane_ParamLimits

0x7b0a,	// (0x0004ee01) cell_vitu_itu_pane

0x7b2c,	// (0x0004ee23) cell_vitu_function_pane_ParamLimits

0x7b2c,	// (0x0004ee23) cell_vitu_function_pane

0x13ca,	// (0x000486c1) bg_popup_sub_pane_cp08_ParamLimits

0x13ca,	// (0x000486c1) bg_popup_sub_pane_cp08

0x7b45,	// (0x0004ee3c) field_vitu_entry_pane_t1_ParamLimits

0x7b45,	// (0x0004ee3c) field_vitu_entry_pane_t1

0xc677,	// (0x0005396e) field_vitu_entry_pane_t2_ParamLimits

0xc677,	// (0x0005396e) field_vitu_entry_pane_t2

0x0001,

0xf826,	// (0x00056b1d) field_vitu_entry_pane_t_ParamLimits

0xf826,	// (0x00056b1d) field_vitu_entry_pane_t

0xc694,	// (0x0005398b) bg_button_pane_cp05_ParamLimits

0xc694,	// (0x0005398b) bg_button_pane_cp05

0x7b63,	// (0x0004ee5a) cell_vitu_itu_pane_g1

0x7b7b,	// (0x0004ee72) cell_vitu_itu_pane_t1_ParamLimits

0x7b7b,	// (0x0004ee72) cell_vitu_itu_pane_t1

0x7b8d,	// (0x0004ee84) cell_vitu_itu_pane_t2_ParamLimits

0x7b8d,	// (0x0004ee84) cell_vitu_itu_pane_t2

0x0002,

0xf82b,	// (0x00056b22) cell_vitu_itu_pane_t_ParamLimits

0xf82b,	// (0x00056b22) cell_vitu_itu_pane_t

0xc6a2,	// (0x00053999) bg_button_pane_cp07

0x7bc2,	// (0x0004eeb9) cell_vitu_function_pane_g1

0xb1dd,	// (0x000524d4) main_calc_pane_g1

0x11cd,	// (0x000484c4) aid_visual_content_pane

0xde02,	// (0x000550f9) main_vradio_pane

0x7bcb,	// (0x0004eec2) main_vradio_pane_g1_ParamLimits

0x7bcb,	// (0x0004eec2) main_vradio_pane_g1

0xc6ac,	// (0x000539a3) main_vradio_pane_g2_ParamLimits

0xc6ac,	// (0x000539a3) main_vradio_pane_g2

0x0001,

0xf832,	// (0x00056b29) main_vradio_pane_g_ParamLimits

0xf832,	// (0x00056b29) main_vradio_pane_g

0x7be4,	// (0x0004eedb) main_vradio_pane_t1_ParamLimits

0x7be4,	// (0x0004eedb) main_vradio_pane_t1

0x7bf9,	// (0x0004eef0) main_vradio_pane_t2_ParamLimits

0x7bf9,	// (0x0004eef0) main_vradio_pane_t2

0xc6b9,	// (0x000539b0) main_vradio_pane_t3_ParamLimits

0xc6b9,	// (0x000539b0) main_vradio_pane_t3

0x0002,

0xf837,	// (0x00056b2e) main_vradio_pane_t_ParamLimits

0xf837,	// (0x00056b2e) main_vradio_pane_t

0x7c0e,	// (0x0004ef05) vradio_rocker_control_pane_ParamLimits

0x7c0e,	// (0x0004ef05) vradio_rocker_control_pane

0x7c20,	// (0x0004ef17) vradio_station_info_pane_ParamLimits

0x7c20,	// (0x0004ef17) vradio_station_info_pane

0xc6cd,	// (0x000539c4) vradio_frequency_info_pane_ParamLimits

0xc6cd,	// (0x000539c4) vradio_frequency_info_pane

0xc01d,	// (0x00053314) vradio_station_info_pane_g1

0xc6dc,	// (0x000539d3) vradio_station_info_pane_t1_ParamLimits

0xc6dc,	// (0x000539d3) vradio_station_info_pane_t1

0xc6fe,	// (0x000539f5) vradio_station_info_pane_t2_ParamLimits

0xc6fe,	// (0x000539f5) vradio_station_info_pane_t2

0x0001,

0xf83e,	// (0x00056b35) vradio_station_info_pane_t_ParamLimits

0xf83e,	// (0x00056b35) vradio_station_info_pane_t

0xc710,	// (0x00053a07) vradio_tuning_pane

0xc718,	// (0x00053a0f) vradio_rocker_control_pane_g1

0xc720,	// (0x00053a17) vradio_rocker_control_pane_g2

0xc728,	// (0x00053a1f) vradio_rocker_control_pane_g3

0xc730,	// (0x00053a27) vradio_rocker_control_pane_g4

0xc738,	// (0x00053a2f) vradio_rocker_control_pane_g5

0x0004,

0xf843,	// (0x00056b3a) vradio_rocker_control_pane_g

0x7c32,	// (0x0004ef29) vradio_frequency_info_pane_g1

0xc740,	// (0x00053a37) vradio_frequency_info_pane_t1_ParamLimits

0xc740,	// (0x00053a37) vradio_frequency_info_pane_t1

0x7c3c,	// (0x0004ef33) vradio_tuning_pane_g1

0x7c47,	// (0x0004ef3e) vradio_tuning_pane_t1

0xb19b,	// (0x00052492) area_side_right_pane_ParamLimits

0xb19b,	// (0x00052492) area_side_right_pane

0xbabd,	// (0x00052db4) status_small_pane_g1

0xbac5,	// (0x00052dbc) status_small_pane_g2

0xbace,	// (0x00052dc5) status_small_pane_g3

0xbad7,	// (0x00052dce) status_small_pane_g4

0x0003,

0xf603,	// (0x000568fa) status_small_pane_g

0xbae0,	// (0x00052dd7) status_small_pane_t1

0xde02,	// (0x000550f9) main_video3_pane

0xc754,	// (0x00053a4b) cams_zoom_vslider_pane

0xc75c,	// (0x00053a53) image3_wide_pane_ParamLimits

0xc75c,	// (0x00053a53) image3_wide_pane

0xc776,	// (0x00053a6d) image3_wide_small_pane

0xc782,	// (0x00053a79) main_video3_pane_g1_ParamLimits

0xc782,	// (0x00053a79) main_video3_pane_g1

0xc79e,	// (0x00053a95) main_video3_pane_g2_ParamLimits

0xc79e,	// (0x00053a95) main_video3_pane_g2

0x0001,

0xf84e,	// (0x00056b45) main_video3_pane_g_ParamLimits

0xf84e,	// (0x00056b45) main_video3_pane_g

0xc7ba,	// (0x00053ab1) main_video3_pane_t1_ParamLimits

0xc7ba,	// (0x00053ab1) main_video3_pane_t1

0xc7e5,	// (0x00053adc) main_video3_pane_t2_ParamLimits

0xc7e5,	// (0x00053adc) main_video3_pane_t2

0xc810,	// (0x00053b07) main_video3_pane_t3_ParamLimits

0xc810,	// (0x00053b07) main_video3_pane_t3

0x0002,

0xf853,	// (0x00056b4a) main_video3_pane_t_ParamLimits

0xf853,	// (0x00056b4a) main_video3_pane_t

0xc83d,	// (0x00053b34) cams_zoom_vslider_pane_g1

0xc846,	// (0x00053b3d) cams_zoom_vslider_pane_g2

0x0001,

0xf85a,	// (0x00056b51) cams_zoom_vslider_pane_g

0xc84e,	// (0x00053b45) small_slider_vertical_pane

0xc01d,	// (0x00053314) small_slider_vertical_pane_g1

0xc01d,	// (0x00053314) small_slider_vertical_pane_g2

0xc856,	// (0x00053b4d) small_slider_vertical_pane_g3

0x0002,

0xf85f,	// (0x00056b56) small_slider_vertical_pane_g

0xde02,	// (0x000550f9) main_hwr_training_pane

0xc85f,	// (0x00053b56) hwr_training_instruct_pane_ParamLimits

0xc85f,	// (0x00053b56) hwr_training_instruct_pane

0x7c56,	// (0x0004ef4d) hwr_training_navi_pane_ParamLimits

0x7c56,	// (0x0004ef4d) hwr_training_navi_pane

0x7c75,	// (0x0004ef6c) hwr_training_write_pane_ParamLimits

0x7c75,	// (0x0004ef6c) hwr_training_write_pane

0xde02,	// (0x000550f9) bg_frame_shadow_pane

0xc896,	// (0x00053b8d) hwr_training_write_pane_g1

0xc89e,	// (0x00053b95) hwr_training_write_pane_g2

0xc8a6,	// (0x00053b9d) hwr_training_write_pane_g3

0xc8ae,	// (0x00053ba5) hwr_training_write_pane_g4

0xc8b6,	// (0x00053bad) hwr_training_write_pane_g5

0xc8be,	// (0x00053bb5) hwr_training_write_pane_g6

0xc8c6,	// (0x00053bbd) hwr_training_write_pane_g7

0x0006,

0xf866,	// (0x00056b5d) hwr_training_write_pane_g

0xc8ce,	// (0x00053bc5) hwr_training_navi_pane_g1_ParamLimits

0xc8ce,	// (0x00053bc5) hwr_training_navi_pane_g1

0xc8e0,	// (0x00053bd7) hwr_training_navi_pane_g2_ParamLimits

0xc8e0,	// (0x00053bd7) hwr_training_navi_pane_g2

0xc8f2,	// (0x00053be9) hwr_training_navi_pane_g3_ParamLimits

0xc8f2,	// (0x00053be9) hwr_training_navi_pane_g3

0xc902,	// (0x00053bf9) hwr_training_navi_pane_g4_ParamLimits

0xc902,	// (0x00053bf9) hwr_training_navi_pane_g4

0x0004,

0xf875,	// (0x00056b6c) hwr_training_navi_pane_g_ParamLimits

0xf875,	// (0x00056b6c) hwr_training_navi_pane_g

0xc90f,	// (0x00053c06) hwr_training_navi_pane_t1

0x7cbd,	// (0x0004efb4) list_single_hwr_training_instruct_pane_ParamLimits

0x7cbd,	// (0x0004efb4) list_single_hwr_training_instruct_pane

0xc91d,	// (0x00053c14) list_single_hwr_training_instruct_pane_t1

0xbf5d,	// (0x00053254) bg_frame_shadow_pane_g1

0xc92c,	// (0x00053c23) bg_frame_shadow_pane_g2

0xc934,	// (0x00053c2b) bg_frame_shadow_pane_g3

0xc93c,	// (0x00053c33) bg_frame_shadow_pane_g4

0xc944,	// (0x00053c3b) bg_frame_shadow_pane_g5

0xc94c,	// (0x00053c43) bg_frame_shadow_pane_g6

0xc954,	// (0x00053c4b) bg_frame_shadow_pane_g7

0x1ccc,	// (0x00048fc3) bg_frame_shadow_pane_g8

0x0007,

0xf880,	// (0x00056b77) bg_frame_shadow_pane_g

0xde02,	// (0x000550f9) main_video_tele_dialer_pane

0x7cd2,	// (0x0004efc9) aid_size_cell_video_keypad_ParamLimits

0x7cd2,	// (0x0004efc9) aid_size_cell_video_keypad

0x7cec,	// (0x0004efe3) grid_video_dialer_keypad_pane_ParamLimits

0x7cec,	// (0x0004efe3) grid_video_dialer_keypad_pane

0x7d38,	// (0x0004f02f) video_down_pane_cp_ParamLimits

0x7d38,	// (0x0004f02f) video_down_pane_cp

0x7d6a,	// (0x0004f061) cell_video_dialer_keypad_pane_ParamLimits

0x7d6a,	// (0x0004f061) cell_video_dialer_keypad_pane

0xc95c,	// (0x00053c53) bg_button_pane_cp08_ParamLimits

0xc95c,	// (0x00053c53) bg_button_pane_cp08

0x7d8c,	// (0x0004f083) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7d8c,	// (0x0004f083) cell_video_dialer_keypad_pane_g1

0x743e,	// (0x0004e735) mup3_rocker2_pane_ParamLimits

0x743e,	// (0x0004e735) mup3_rocker2_pane

0xc01d,	// (0x00053314) mup3_rocker2_pane_g1

0x5fb1,	// (0x0004d2a8) main_dialer2_pane

0xde02,	// (0x000550f9) main_mp4_pane

0xc970,	// (0x00053c67) main_mp4_pane_g1_ParamLimits

0xc970,	// (0x00053c67) main_mp4_pane_g1

0xc970,	// (0x00053c67) main_mp4_pane_g2_ParamLimits

0xc970,	// (0x00053c67) main_mp4_pane_g2

0x7dc3,	// (0x0004f0ba) main_mp4_pane_g3_ParamLimits

0x7dc3,	// (0x0004f0ba) main_mp4_pane_g3

0xc97e,	// (0x00053c75) main_mp4_pane_g4_ParamLimits

0xc97e,	// (0x00053c75) main_mp4_pane_g4

0xc9a6,	// (0x00053c9d) main_mp4_pane_g5_ParamLimits

0xc9a6,	// (0x00053c9d) main_mp4_pane_g5

0x0005,

0xf8a0,	// (0x00056b97) main_mp4_pane_g_ParamLimits

0xf8a0,	// (0x00056b97) main_mp4_pane_g

0xc9f6,	// (0x00053ced) main_mp4_pane_t1_ParamLimits

0xc9f6,	// (0x00053ced) main_mp4_pane_t1

0xca52,	// (0x00053d49) main_mp4_pane_t2_ParamLimits

0xca52,	// (0x00053d49) main_mp4_pane_t2

0xcaa4,	// (0x00053d9b) main_mp4_pane_t3_ParamLimits

0xcaa4,	// (0x00053d9b) main_mp4_pane_t3

0xcac4,	// (0x00053dbb) main_mp4_pane_t4_ParamLimits

0xcac4,	// (0x00053dbb) main_mp4_pane_t4

0x0003,

0xf8ad,	// (0x00056ba4) main_mp4_pane_t_ParamLimits

0xf8ad,	// (0x00056ba4) main_mp4_pane_t

0xcb08,	// (0x00053dff) mp4_progress_pane_ParamLimits

0xcb08,	// (0x00053dff) mp4_progress_pane

0xcb52,	// (0x00053e49) mp4_rocker_pane_ParamLimits

0xcb52,	// (0x00053e49) mp4_rocker_pane

0xcb7a,	// (0x00053e71) mp4_progress_pane_t1

0xcb93,	// (0x00053e8a) mp4_progress_pane_t2

0x0001,

0xf8b6,	// (0x00056bad) mp4_progress_pane_t

0xcbac,	// (0x00053ea3) mup_progress_pane_cp04

0xc01d,	// (0x00053314) mp4_rocker_pane_g1

0x7dff,	// (0x0004f0f6) aid_cell_size_keypad2_ParamLimits

0x7dff,	// (0x0004f0f6) aid_cell_size_keypad2

0x7e15,	// (0x0004f10c) dialer2_ne_pane_ParamLimits

0x7e15,	// (0x0004f10c) dialer2_ne_pane

0x7e2f,	// (0x0004f126) grid_dialer2_keypad_pane_ParamLimits

0x7e2f,	// (0x0004f126) grid_dialer2_keypad_pane

0xbe02,	// (0x000530f9) bg_popup_call_pane_cp07_ParamLimits

0xbe02,	// (0x000530f9) bg_popup_call_pane_cp07

0x7e4b,	// (0x0004f142) dialer2_ne_pane_t1_ParamLimits

0x7e4b,	// (0x0004f142) dialer2_ne_pane_t1

0x7e86,	// (0x0004f17d) cell_dialer2_keypad_pane_ParamLimits

0x7e86,	// (0x0004f17d) cell_dialer2_keypad_pane

0xcbca,	// (0x00053ec1) bg_button_pane_pane_cp04_ParamLimits

0xcbca,	// (0x00053ec1) bg_button_pane_pane_cp04

0x7ea8,	// (0x0004f19f) cell_dialer2_keypad_pane_g1_ParamLimits

0x7ea8,	// (0x0004f19f) cell_dialer2_keypad_pane_g1

0x282b,	// (0x00049b22) aid_placing_vt_set_content_ParamLimits

0x282b,	// (0x00049b22) aid_placing_vt_set_content

0x2853,	// (0x00049b4a) aid_placing_vt_set_title_ParamLimits

0x2853,	// (0x00049b4a) aid_placing_vt_set_title

0xde02,	// (0x000550f9) main_image3_pane

0x7f6e,	// (0x0004f265) area_side_right_pane_cp01_ParamLimits

0x7f6e,	// (0x0004f265) area_side_right_pane_cp01

0xc970,	// (0x00053c67) main_image3_pane_g1_ParamLimits

0xc970,	// (0x00053c67) main_image3_pane_g1

0x7f85,	// (0x0004f27c) main_image3_pane_g2_ParamLimits

0x7f85,	// (0x0004f27c) main_image3_pane_g2

0x7fad,	// (0x0004f2a4) main_image3_pane_g3_ParamLimits

0x7fad,	// (0x0004f2a4) main_image3_pane_g3

0x7fd7,	// (0x0004f2ce) main_image3_pane_g4_ParamLimits

0x7fd7,	// (0x0004f2ce) main_image3_pane_g4

0x0003,

0xf8c5,	// (0x00056bbc) main_image3_pane_g_ParamLimits

0xf8c5,	// (0x00056bbc) main_image3_pane_g

0x8001,	// (0x0004f2f8) main_image3_pane_t1_ParamLimits

0x8001,	// (0x0004f2f8) main_image3_pane_t1

0x8059,	// (0x0004f350) main_image3_pane_t2_ParamLimits

0x8059,	// (0x0004f350) main_image3_pane_t2

0x80ab,	// (0x0004f3a2) main_image3_pane_t3_ParamLimits

0x80ab,	// (0x0004f3a2) main_image3_pane_t3

0x0003,

0xf8ce,	// (0x00056bc5) main_image3_pane_t_ParamLimits

0xf8ce,	// (0x00056bc5) main_image3_pane_t

0x13ca,	// (0x000486c1) grid_sctrl_middle_pane_cp01_ParamLimits

0x13ca,	// (0x000486c1) grid_sctrl_middle_pane_cp01

0x8133,	// (0x0004f42a) cell_sctrl_middle_pane_cp01_ParamLimits

0x8133,	// (0x0004f42a) cell_sctrl_middle_pane_cp01

0x8150,	// (0x0004f447) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x8150,	// (0x0004f447) cell_sctrl_middle_pane_cp01_g1

0xde02,	// (0x000550f9) main_call4_pane

0x8166,	// (0x0004f45d) aid_size_button_call4_ParamLimits

0x8166,	// (0x0004f45d) aid_size_button_call4

0x8197,	// (0x0004f48e) call4_windows_pane_ParamLimits

0x8197,	// (0x0004f48e) call4_windows_pane

0x81b7,	// (0x0004f4ae) grid_call4_button_pane_ParamLimits

0x81b7,	// (0x0004f4ae) grid_call4_button_pane

0xcc08,	// (0x00053eff) call4_windows_conf_pane

0xcc1f,	// (0x00053f16) popup_call4_audio_first_window_ParamLimits

0xcc1f,	// (0x00053f16) popup_call4_audio_first_window

0xcc6b,	// (0x00053f62) popup_call4_audio_second_window_ParamLimits

0xcc6b,	// (0x00053f62) popup_call4_audio_second_window

0xcc7f,	// (0x00053f76) popup_call4_audio_wait_window_ParamLimits

0xcc7f,	// (0x00053f76) popup_call4_audio_wait_window

0x81e4,	// (0x0004f4db) cell_call4_button_pane_ParamLimits

0x81e4,	// (0x0004f4db) cell_call4_button_pane

0x820d,	// (0x0004f504) bg_button_pane_cp09_ParamLimits

0x820d,	// (0x0004f504) bg_button_pane_cp09

0x8219,	// (0x0004f510) cell_call4_button_pane_g1_ParamLimits

0x8219,	// (0x0004f510) cell_call4_button_pane_g1

0x823f,	// (0x0004f536) cell_call4_button_pane_t1_ParamLimits

0x823f,	// (0x0004f536) cell_call4_button_pane_t1

0xccc7,	// (0x00053fbe) popup_call4_audio_conf_window_ParamLimits

0xccc7,	// (0x00053fbe) popup_call4_audio_conf_window

0x749e,	// (0x0004e795) mup3_progress_pane_t1_ParamLimits

0x74bd,	// (0x0004e7b4) mup3_progress_pane_t2_ParamLimits

0xc36c,	// (0x00053663) mup3_progress_pane_t3_ParamLimits

0xf7a7,	// (0x00056a9e) mup3_progress_pane_t_ParamLimits

0xc389,	// (0x00053680) mup_progress_pane_cp03_ParamLimits

0x7a9c,	// (0x0004ed93) mup3_control_keys_pane_g4_copy1

0xcb36,	// (0x00053e2d) mp4_rocker2_pane_ParamLimits

0xcb36,	// (0x00053e2d) mp4_rocker2_pane

0xccdb,	// (0x00053fd2) mp4_rocker2_pane_g1

0xcce3,	// (0x00053fda) mp4_rocker2_pane_g2

0xcceb,	// (0x00053fe2) mp4_rocker2_pane_g3

0xccf3,	// (0x00053fea) mp4_rocker2_pane_g4

0xccfb,	// (0x00053ff2) mp4_rocker2_pane_g5

0x0004,

0xf8d7,	// (0x00056bce) mp4_rocker2_pane_g

0xde02,	// (0x000550f9) main_camera4_pane

0xde02,	// (0x000550f9) main_video4_pane

0x7d06,	// (0x0004effd) main_video_tele_dialer_pane_t1_ParamLimits

0x7d06,	// (0x0004effd) main_video_tele_dialer_pane_t1

0x7d1f,	// (0x0004f016) main_video_tele_dialer_pane_t2_ParamLimits

0x7d1f,	// (0x0004f016) main_video_tele_dialer_pane_t2

0x0001,

0xf891,	// (0x00056b88) main_video_tele_dialer_pane_t_ParamLimits

0xf891,	// (0x00056b88) main_video_tele_dialer_pane_t

0x827d,	// (0x0004f574) cam4_autofocus_pane_ParamLimits

0x827d,	// (0x0004f574) cam4_autofocus_pane

0x8293,	// (0x0004f58a) cam4_image_uncrop_pane_ParamLimits

0x8293,	// (0x0004f58a) cam4_image_uncrop_pane

0x82ad,	// (0x0004f5a4) cam4_indicators_pane_ParamLimits

0x82ad,	// (0x0004f5a4) cam4_indicators_pane

0x82d8,	// (0x0004f5cf) main_camera4_pane_g1_ParamLimits

0x82d8,	// (0x0004f5cf) main_camera4_pane_g1

0x82ea,	// (0x0004f5e1) main_camera4_pane_g2_ParamLimits

0x82ea,	// (0x0004f5e1) main_camera4_pane_g2

0x82fd,	// (0x0004f5f4) main_camera4_pane_g3_ParamLimits

0x82fd,	// (0x0004f5f4) main_camera4_pane_g3

0x8310,	// (0x0004f607) main_camera4_pane_g4_ParamLimits

0x8310,	// (0x0004f607) main_camera4_pane_g4

0x8323,	// (0x0004f61a) main_camera4_pane_g5_ParamLimits

0x8323,	// (0x0004f61a) main_camera4_pane_g5

0x0005,

0xf8e2,	// (0x00056bd9) main_camera4_pane_g_ParamLimits

0xf8e2,	// (0x00056bd9) main_camera4_pane_g

0x8347,	// (0x0004f63e) main_camera4_pane_t1_ParamLimits

0x8347,	// (0x0004f63e) main_camera4_pane_t1

0xc289,	// (0x00053580) bg_tb_trans_pane_cp06

0xcd27,	// (0x0005401e) cam4_indicators_pane_g1

0xcd38,	// (0x0005402f) cam4_indicators_pane_g2

0x0002,

0xf8fd,	// (0x00056bf4) cam4_indicators_pane_g

0xcd56,	// (0x0005404d) cam4_indicators_pane_t1

0x83ab,	// (0x0004f6a2) main_video4_pane_g1_ParamLimits

0x83ab,	// (0x0004f6a2) main_video4_pane_g1

0x83ba,	// (0x0004f6b1) main_video4_pane_g2_ParamLimits

0x83ba,	// (0x0004f6b1) main_video4_pane_g2

0x83c9,	// (0x0004f6c0) main_video4_pane_g3_ParamLimits

0x83c9,	// (0x0004f6c0) main_video4_pane_g3

0x83d8,	// (0x0004f6cf) main_video4_pane_g4_ParamLimits

0x83d8,	// (0x0004f6cf) main_video4_pane_g4

0x0004,

0xf904,	// (0x00056bfb) main_video4_pane_g_ParamLimits

0xf904,	// (0x00056bfb) main_video4_pane_g

0x83f6,	// (0x0004f6ed) vid4_indicators_pane_ParamLimits

0x83f6,	// (0x0004f6ed) vid4_indicators_pane

0x8424,	// (0x0004f71b) video4_image_uncrop_cif_pane_ParamLimits

0x8424,	// (0x0004f71b) video4_image_uncrop_cif_pane

0x843e,	// (0x0004f735) video4_image_uncrop_nhd_pane_ParamLimits

0x843e,	// (0x0004f735) video4_image_uncrop_nhd_pane

0x8293,	// (0x0004f58a) video4_image_uncrop_vga_pane_ParamLimits

0x8293,	// (0x0004f58a) video4_image_uncrop_vga_pane

0x13ca,	// (0x000486c1) bg_tb_trans_pane_cp07

0xcd82,	// (0x00054079) vid4_indicators_pane_g1

0xcd96,	// (0x0005408d) vid4_indicators_pane_g2

0xcdaa,	// (0x000540a1) vid4_indicators_pane_g3

0x0004,

0xf90f,	// (0x00056c06) vid4_indicators_pane_g

0xcdd9,	// (0x000540d0) vid4_indicators_pane_t1

0x8452,	// (0x0004f749) cam4_autofocus_pane_g1

0x845a,	// (0x0004f751) cam4_autofocus_pane_g2

0x8462,	// (0x0004f759) cam4_autofocus_pane_g3

0x0002,

0xf91a,	// (0x00056c11) cam4_autofocus_pane_g

0x846a,	// (0x0004f761) cam4_autofocus_pane_g3_copy1

0x7d4e,	// (0x0004f045) video_down_pane_cp_t1

0x7d5c,	// (0x0004f053) video_down_pane_cp_t2

0x0001,

0xf896,	// (0x00056b8d) video_down_pane_cp_t

0x13ca,	// (0x000486c1) popup_vitu2_window_ParamLimits

0x13ca,	// (0x000486c1) popup_vitu2_window

0x8472,	// (0x0004f769) aid_size_cell2_itu2_ParamLimits

0x8472,	// (0x0004f769) aid_size_cell2_itu2

0x8498,	// (0x0004f78f) aid_size_cell_itu2_ParamLimits

0x8498,	// (0x0004f78f) aid_size_cell_itu2

0x84f4,	// (0x0004f7eb) bg_popup_window_pane_cp09_ParamLimits

0x84f4,	// (0x0004f7eb) bg_popup_window_pane_cp09

0x8502,	// (0x0004f7f9) field_vitu2_entry_pane_ParamLimits

0x8502,	// (0x0004f7f9) field_vitu2_entry_pane

0x8528,	// (0x0004f81f) grid_vitu2_function_pane_ParamLimits

0x8528,	// (0x0004f81f) grid_vitu2_function_pane

0x8579,	// (0x0004f870) grid_vitu2_itu_pane_ParamLimits

0x8579,	// (0x0004f870) grid_vitu2_itu_pane

0x860c,	// (0x0004f903) cell_vitu2_itu_pane_ParamLimits

0x860c,	// (0x0004f903) cell_vitu2_itu_pane

0x8630,	// (0x0004f927) cell_vitu2_function_pane_ParamLimits

0x8630,	// (0x0004f927) cell_vitu2_function_pane

0xd2c8,	// (0x000545bf) bg_popup_call_pane_cp08_ParamLimits

0xd2c8,	// (0x000545bf) bg_popup_call_pane_cp08

0xd2e1,	// (0x000545d8) field_vitu2_entry_pane_g1

0xd2ed,	// (0x000545e4) field_vitu2_entry_pane_g2

0x0002,

0xf921,	// (0x00056c18) field_vitu2_entry_pane_g

0x0643,	// (0x0004793a) field_vitu2_entry_pane_t1_ParamLimits

0x0643,	// (0x0004793a) field_vitu2_entry_pane_t1

0xcdf0,	// (0x000540e7) field_vitu2_entry_pane_t2_ParamLimits

0xcdf0,	// (0x000540e7) field_vitu2_entry_pane_t2

0x0001,

0xf928,	// (0x00056c1f) field_vitu2_entry_pane_t_ParamLimits

0xf928,	// (0x00056c1f) field_vitu2_entry_pane_t

0x866f,	// (0x0004f966) bg_button_pane_cp010_ParamLimits

0x866f,	// (0x0004f966) bg_button_pane_cp010

0x867d,	// (0x0004f974) cell_vitu2_itu_pane_g1

0x869b,	// (0x0004f992) cell_vitu2_itu_pane_t1_ParamLimits

0x869b,	// (0x0004f992) cell_vitu2_itu_pane_t1

0x0672,	// (0x00047969) cell_vitu2_itu_pane_t2_ParamLimits

0x0672,	// (0x00047969) cell_vitu2_itu_pane_t2

0x0002,

0xf932,	// (0x00056c29) cell_vitu2_itu_pane_t_ParamLimits

0xf932,	// (0x00056c29) cell_vitu2_itu_pane_t

0x13ca,	// (0x000486c1) bg_button_pane_cp011

0x8701,	// (0x0004f9f8) cell_vitu2_function_pane_g1

0xde02,	// (0x000550f9) main_myfav_hc_pane

0x80fb,	// (0x0004f3f2) popup_image3_note_pane_ParamLimits

0x80fb,	// (0x0004f3f2) popup_image3_note_pane

0x8117,	// (0x0004f40e) popup_image3_tool_bar_pane_ParamLimits

0x8117,	// (0x0004f40e) popup_image3_tool_bar_pane

0x06f6,	// (0x000479ed) cell_vitu2_itu_pane_t3_ParamLimits

0x06f6,	// (0x000479ed) cell_vitu2_itu_pane_t3

0xde02,	// (0x000550f9) bg_popup_trans_pane

0xd30f,	// (0x00054606) grid_image3_tool_bar_pane

0xd319,	// (0x00054610) bg_popup_trans_pane_g1

0x2e22,	// (0x0004a119) bg_popup_trans_pane_g2

0xd321,	// (0x00054618) bg_popup_trans_pane_g3

0xd329,	// (0x00054620) bg_popup_trans_pane_g4

0xd331,	// (0x00054628) bg_popup_trans_pane_g5

0xd339,	// (0x00054630) bg_popup_trans_pane_g6

0xd341,	// (0x00054638) bg_popup_trans_pane_g7

0xd349,	// (0x00054640) bg_popup_trans_pane_g8

0x2e02,	// (0x0004a0f9) bg_popup_trans_pane_g9

0x0008,

0xf939,	// (0x00056c30) bg_popup_trans_pane_g

0xd351,	// (0x00054648) cell_image3_tool_bar_pane_ParamLimits

0xd351,	// (0x00054648) cell_image3_tool_bar_pane

0xc01d,	// (0x00053314) cell_image3_tool_bar_pane_g1

0xde02,	// (0x000550f9) bg_popup_trans_pane_cp1

0xd365,	// (0x0005465c) popup_image3_note_pane_t1

0xd373,	// (0x0005466a) popup_image3_note_pane_t2

0xd381,	// (0x00054678) popup_image3_note_pane_t3

0x0002,

0xf94c,	// (0x00056c43) popup_image3_note_pane_t

0xd38f,	// (0x00054686) popup_image3_note_pane_t3_copy1

0x8715,	// (0x0004fa0c) bg_myfav_hc_instruction_pane_ParamLimits

0x8715,	// (0x0004fa0c) bg_myfav_hc_instruction_pane

0x8729,	// (0x0004fa20) cell_myfav_contact_pane_ParamLimits

0x8729,	// (0x0004fa20) cell_myfav_contact_pane

0x8747,	// (0x0004fa3e) cell_myfav_contact_pane_cp1_ParamLimits

0x8747,	// (0x0004fa3e) cell_myfav_contact_pane_cp1

0x875f,	// (0x0004fa56) cell_myfav_contact_pane_cp2_ParamLimits

0x875f,	// (0x0004fa56) cell_myfav_contact_pane_cp2

0x8777,	// (0x0004fa6e) cell_myfav_contact_pane_cp3_ParamLimits

0x8777,	// (0x0004fa6e) cell_myfav_contact_pane_cp3

0x878e,	// (0x0004fa85) cell_myfav_contact_pane_cp4_ParamLimits

0x878e,	// (0x0004fa85) cell_myfav_contact_pane_cp4

0x87a6,	// (0x0004fa9d) cell_myfav_contact_pane_cp5_ParamLimits

0x87a6,	// (0x0004fa9d) cell_myfav_contact_pane_cp5

0x87ba,	// (0x0004fab1) cell_myfav_contact_pane_cp6_ParamLimits

0x87ba,	// (0x0004fab1) cell_myfav_contact_pane_cp6

0x87d0,	// (0x0004fac7) cell_myfav_contact_pane_cp7_ParamLimits

0x87d0,	// (0x0004fac7) cell_myfav_contact_pane_cp7

0xd39d,	// (0x00054694) listscroll_gen_pane_cp05

0x87ea,	// (0x0004fae1) main_myfav_hc_pane_g1_ParamLimits

0x87ea,	// (0x0004fae1) main_myfav_hc_pane_g1

0x8804,	// (0x0004fafb) main_myfav_hc_pane_g2_ParamLimits

0x8804,	// (0x0004fafb) main_myfav_hc_pane_g2

0x0002,

0xf953,	// (0x00056c4a) main_myfav_hc_pane_g_ParamLimits

0xf953,	// (0x00056c4a) main_myfav_hc_pane_g

0x8836,	// (0x0004fb2d) main_myfav_hc_pane_t1_ParamLimits

0x8836,	// (0x0004fb2d) main_myfav_hc_pane_t1

0xd3a6,	// (0x0005469d) main_myfav_hc_pane_t2_ParamLimits

0xd3a6,	// (0x0005469d) main_myfav_hc_pane_t2

0xd3b8,	// (0x000546af) main_myfav_hc_pane_t3_ParamLimits

0xd3b8,	// (0x000546af) main_myfav_hc_pane_t3

0x884d,	// (0x0004fb44) main_myfav_hc_pane_t4_ParamLimits

0x884d,	// (0x0004fb44) main_myfav_hc_pane_t4

0x0004,

0xf95a,	// (0x00056c51) main_myfav_hc_pane_t_ParamLimits

0xf95a,	// (0x00056c51) main_myfav_hc_pane_t

0xc01d,	// (0x00053314) bg_myfav_hc_instruction_pane_g1

0xd3ca,	// (0x000546c1) cell_myfav_contact_pane_g1_ParamLimits

0xd3ca,	// (0x000546c1) cell_myfav_contact_pane_g1

0xd3ca,	// (0x000546c1) cell_myfav_contact_pane_g2_ParamLimits

0xd3ca,	// (0x000546c1) cell_myfav_contact_pane_g2

0xd3d6,	// (0x000546cd) cell_myfav_contact_pane_g3_ParamLimits

0xd3d6,	// (0x000546cd) cell_myfav_contact_pane_g3

0xc356,	// (0x0005364d) cell_myfav_contact_pane_g4_ParamLimits

0xc356,	// (0x0005364d) cell_myfav_contact_pane_g4

0xd3e3,	// (0x000546da) cell_myfav_contact_pane_g5_ParamLimits

0xd3e3,	// (0x000546da) cell_myfav_contact_pane_g5

0x0004,

0xf965,	// (0x00056c5c) cell_myfav_contact_pane_g_ParamLimits

0xf965,	// (0x00056c5c) cell_myfav_contact_pane_g

0x881e,	// (0x0004fb15) main_myfav_hc_pane_g3_ParamLimits

0x881e,	// (0x0004fb15) main_myfav_hc_pane_g3

0x1308,	// (0x000485ff) popup_adpt_find_window

0x8875,	// (0x0004fb6c) afind_page_pane_ParamLimits

0x8875,	// (0x0004fb6c) afind_page_pane

0x888a,	// (0x0004fb81) aid_size_cell_afind_ParamLimits

0x888a,	// (0x0004fb81) aid_size_cell_afind

0x88a8,	// (0x0004fb9f) bg_popup_sub_pane_cp09_ParamLimits

0x88a8,	// (0x0004fb9f) bg_popup_sub_pane_cp09

0x88b5,	// (0x0004fbac) find_pane_cp01_ParamLimits

0x88b5,	// (0x0004fbac) find_pane_cp01

0xd3ef,	// (0x000546e6) grid_afind_control_pane_ParamLimits

0xd3ef,	// (0x000546e6) grid_afind_control_pane

0x88c2,	// (0x0004fbb9) grid_afind_pane_ParamLimits

0x88c2,	// (0x0004fbb9) grid_afind_pane

0x88e4,	// (0x0004fbdb) cell_afind_pane_ParamLimits

0x88e4,	// (0x0004fbdb) cell_afind_pane

0xc01d,	// (0x00053314) afind_page_pane_g1

0x8945,	// (0x0004fc3c) afind_page_pane_g2

0x894e,	// (0x0004fc45) afind_page_pane_g3

0x0002,

0xf970,	// (0x00056c67) afind_page_pane_g

0x8957,	// (0x0004fc4e) afind_page_pane_t1

0xd403,	// (0x000546fa) cell_afind_grid_control_pane_ParamLimits

0xd403,	// (0x000546fa) cell_afind_grid_control_pane

0xcbca,	// (0x00053ec1) bg_button_pane_cp69_ParamLimits

0xcbca,	// (0x00053ec1) bg_button_pane_cp69

0x8977,	// (0x0004fc6e) cell_afind_pane_g1_ParamLimits

0x8977,	// (0x0004fc6e) cell_afind_pane_g1

0x8984,	// (0x0004fc7b) cell_afind_pane_t1_ParamLimits

0x8984,	// (0x0004fc7b) cell_afind_pane_t1

0x27be,	// (0x00049ab5) bg_button_pane_cp72

0xd412,	// (0x00054709) cell_afind_grid_control_pane_g1

0x5225,	// (0x0004c51c) aid_image_placing_area_ParamLimits

0x5225,	// (0x0004c51c) aid_image_placing_area

0xc65f,	// (0x00053956) field_vitu_entry_pane_g1_ParamLimits

0xc65f,	// (0x00053956) field_vitu_entry_pane_g1

0xc66b,	// (0x00053962) field_vitu_entry_pane_g2_ParamLimits

0xc66b,	// (0x00053962) field_vitu_entry_pane_g2

0x0001,

0xf821,	// (0x00056b18) field_vitu_entry_pane_g_ParamLimits

0xf821,	// (0x00056b18) field_vitu_entry_pane_g

0x7b63,	// (0x0004ee5a) cell_vitu_itu_pane_g1_ParamLimits

0x7ba5,	// (0x0004ee9c) cell_vitu_itu_pane_t3_ParamLimits

0x7ba5,	// (0x0004ee9c) cell_vitu_itu_pane_t3

0xcb7a,	// (0x00053e71) mp4_progress_pane_t1_ParamLimits

0xcb93,	// (0x00053e8a) mp4_progress_pane_t2_ParamLimits

0xf8b6,	// (0x00056bad) mp4_progress_pane_t_ParamLimits

0xcbac,	// (0x00053ea3) mup_progress_pane_cp04_ParamLimits

0x8861,	// (0x0004fb58) main_myfav_hc_pane_t5_ParamLimits

0x8861,	// (0x0004fb58) main_myfav_hc_pane_t5

0xb18b,	// (0x00052482) aid_zoom_text_primary

0x1308,	// (0x000485ff) popup_adpt_find_window_ParamLimits

0x13ca,	// (0x000486c1) main_cam_set_pane

0x82c4,	// (0x0004f5bb) cam4_zoom_pane_ParamLimits

0x82c4,	// (0x0004f5bb) cam4_zoom_pane

0x8996,	// (0x0004fc8d) main_cam_set_pane_g1_ParamLimits

0x8996,	// (0x0004fc8d) main_cam_set_pane_g1

0x89a4,	// (0x0004fc9b) main_cam_set_pane_g2_ParamLimits

0x89a4,	// (0x0004fc9b) main_cam_set_pane_g2

0x0001,

0xf977,	// (0x00056c6e) main_cam_set_pane_g_ParamLimits

0xf977,	// (0x00056c6e) main_cam_set_pane_g

0x89c5,	// (0x0004fcbc) main_cam_set_pane_t1_ParamLimits

0x89c5,	// (0x0004fcbc) main_cam_set_pane_t1

0x89e0,	// (0x0004fcd7) main_cset_listscroll_pane_ParamLimits

0x89e0,	// (0x0004fcd7) main_cset_listscroll_pane

0x8a00,	// (0x0004fcf7) main_cset_slider_pane_ParamLimits

0x8a00,	// (0x0004fcf7) main_cset_slider_pane

0xd423,	// (0x0005471a) main_cset_list_pane_ParamLimits

0xd423,	// (0x0005471a) main_cset_list_pane

0xd433,	// (0x0005472a) scroll_pane_cp028

0x8a26,	// (0x0004fd1d) aid_area_touch_slider

0x8a42,	// (0x0004fd39) cset_slider_pane

0x8a6c,	// (0x0004fd63) main_cset_slider_pane_g1

0x8a81,	// (0x0004fd78) main_cset_slider_pane_g2

0x0011,

0xf97c,	// (0x00056c73) main_cset_slider_pane_g

0xd46c,	// (0x00054763) main_cset_slider_pane_t1

0x8b3d,	// (0x0004fe34) main_cset_slider_pane_t2

0x8b57,	// (0x0004fe4e) main_cset_slider_pane_t3

0x8b71,	// (0x0004fe68) main_cset_slider_pane_t4

0x8b8b,	// (0x0004fe82) main_cset_slider_pane_t5

0x8ba5,	// (0x0004fe9c) main_cset_slider_pane_t6

0x8bba,	// (0x0004feb1) main_cset_slider_pane_t7

0x000e,

0xf9a1,	// (0x00056c98) main_cset_slider_pane_t

0x8cbe,	// (0x0004ffb5) cset_list_set_pane_ParamLimits

0x8cbe,	// (0x0004ffb5) cset_list_set_pane

0x8cd0,	// (0x0004ffc7) aid_position_infowindow_above

0x8cd8,	// (0x0004ffcf) aid_position_infowindow_below

0xce0d,	// (0x00054104) cset_list_set_pane_g1_ParamLimits

0xce0d,	// (0x00054104) cset_list_set_pane_g1

0xce19,	// (0x00054110) cset_list_set_pane_g3_ParamLimits

0xce19,	// (0x00054110) cset_list_set_pane_g3

0x0001,

0xf9c0,	// (0x00056cb7) cset_list_set_pane_g_ParamLimits

0xf9c0,	// (0x00056cb7) cset_list_set_pane_g

0xce28,	// (0x0005411f) cset_list_set_pane_t1_ParamLimits

0xce28,	// (0x0005411f) cset_list_set_pane_t1

0x13ca,	// (0x000486c1) list_highlight_pane_cp021_ParamLimits

0x13ca,	// (0x000486c1) list_highlight_pane_cp021

0x4aa4,	// (0x0004bd9b) cset_slider_pane_g1

0x4ab6,	// (0x0004bdad) cset_slider_pane_g2

0x4aad,	// (0x0004bda4) cset_slider_pane_g3

0x0002,

0xf9c5,	// (0x00056cbc) cset_slider_pane_g

0xce3d,	// (0x00054134) aid_area_touch_cam4_zoom

0xce45,	// (0x0005413c) cam4_zoom_cont_pane

0xce4d,	// (0x00054144) cam4_zoom_pane_g1

0xce55,	// (0x0005414c) cam4_zoom_pane_g2

0x8ce0,	// (0x0004ffd7) cam4_zoom_pane_g3

0x0002,

0xf9cc,	// (0x00056cc3) cam4_zoom_pane_g

0xd50c,	// (0x00054803) cam4_zoom_cont_pane_g1

0xd515,	// (0x0005480c) cam4_zoom_cont_pane_g2

0xd51e,	// (0x00054815) cam4_zoom_cont_pane_g3

0x0002,

0xf9d3,	// (0x00056cca) cam4_zoom_cont_pane_g

0x8184,	// (0x0004f47b) call4_image_pane_ParamLimits

0x8184,	// (0x0004f47b) call4_image_pane

0xcc08,	// (0x00053eff) call4_windows_conf_pane_ParamLimits

0xcc49,	// (0x00053f40) popup_call4_audio_in_window_ParamLimits

0xcc49,	// (0x00053f40) popup_call4_audio_in_window

0xde02,	// (0x000550f9) bg_popup_call2_act_pane_cp02

0xccbf,	// (0x00053fb6) call4_list_conf_pane

0xc01d,	// (0x00053314) call4_image_pane_g1

0xc01d,	// (0x00053314) call4_image_pane_g2

0x0001,

0xf6e7,	// (0x000569de) call4_image_pane_g

0xd527,	// (0x0005481e) list_single_graphic_popup_conf4_pane_ParamLimits

0xd527,	// (0x0005481e) list_single_graphic_popup_conf4_pane

0xde02,	// (0x000550f9) list_highlight_pane_cp022

0xd53a,	// (0x00054831) list_single_graphic_popup_conf4_pane_g1

0x4018,	// (0x0004b30f) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9da,	// (0x00056cd1) list_single_graphic_popup_conf4_pane_g

0xd542,	// (0x00054839) list_single_graphic_popup_conf4_pane_t1

0x2989,	// (0x00049c80) popup_vtel_slider_window_ParamLimits

0x2989,	// (0x00049c80) popup_vtel_slider_window

0xcbb8,	// (0x00053eaf) dialer2_ne_pane_t2_ParamLimits

0xcbb8,	// (0x00053eaf) dialer2_ne_pane_t2

0x0001,

0xf8bb,	// (0x00056bb2) dialer2_ne_pane_t_ParamLimits

0xf8bb,	// (0x00056bb2) dialer2_ne_pane_t

0xbe02,	// (0x000530f9) bg_popup_sub_pane_cp010_ParamLimits

0xbe02,	// (0x000530f9) bg_popup_sub_pane_cp010

0x8ce8,	// (0x0004ffdf) popup_vtel_slider_window_g1_ParamLimits

0x8ce8,	// (0x0004ffdf) popup_vtel_slider_window_g1

0x8cfb,	// (0x0004fff2) popup_vtel_slider_window_g2_ParamLimits

0x8cfb,	// (0x0004fff2) popup_vtel_slider_window_g2

0x0003,

0xf9df,	// (0x00056cd6) popup_vtel_slider_window_g_ParamLimits

0xf9df,	// (0x00056cd6) popup_vtel_slider_window_g

0x8d51,	// (0x00050048) vtel_slider_pane_ParamLimits

0x8d51,	// (0x00050048) vtel_slider_pane

0x8d73,	// (0x0005006a) vtel_slider_pane_g1_ParamLimits

0x8d73,	// (0x0005006a) vtel_slider_pane_g1

0x8d87,	// (0x0005007e) vtel_slider_pane_g2_ParamLimits

0x8d87,	// (0x0005007e) vtel_slider_pane_g2

0x8d9f,	// (0x00050096) vtel_slider_pane_g3_ParamLimits

0x8d9f,	// (0x00050096) vtel_slider_pane_g3

0x8d73,	// (0x0005006a) vtel_slider_pane_g4_ParamLimits

0x8d73,	// (0x0005006a) vtel_slider_pane_g4

0x8db5,	// (0x000500ac) vtel_slider_pane_g5_ParamLimits

0x8db5,	// (0x000500ac) vtel_slider_pane_g5

0x0004,

0xf9e8,	// (0x00056cdf) vtel_slider_pane_g_ParamLimits

0xf9e8,	// (0x00056cdf) vtel_slider_pane_g

0xde02,	// (0x000550f9) main_gallery2_pane

0x84c4,	// (0x0004f7bb) aid_size_row_itut2_dropdow_list_ParamLimits

0x84c4,	// (0x0004f7bb) aid_size_row_itut2_dropdow_list

0x8550,	// (0x0004f847) grid_vitu2_function_top_pane_ParamLimits

0x8550,	// (0x0004f847) grid_vitu2_function_top_pane

0x85b5,	// (0x0004f8ac) popup_vitu2_dropdown_list_window_ParamLimits

0x85b5,	// (0x0004f8ac) popup_vitu2_dropdown_list_window

0x85de,	// (0x0004f8d5) popup_vitu2_match_list_window

0x8dcb,	// (0x000500c2) cell_vitu2_function_top_pane_ParamLimits

0x8dcb,	// (0x000500c2) cell_vitu2_function_top_pane

0x8de9,	// (0x000500e0) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8de9,	// (0x000500e0) cell_vitu2_function_top_pane_cp01

0x8e07,	// (0x000500fe) cell_vitu2_function_top_wide_pane_ParamLimits

0x8e07,	// (0x000500fe) cell_vitu2_function_top_wide_pane

0x13ca,	// (0x000486c1) bg_button_pane_cp012

0x8e25,	// (0x0005011c) cell_vitu2_function_top_pane_g1

0xce5d,	// (0x00054154) bg_button_pane_cp013_ParamLimits

0xce5d,	// (0x00054154) bg_button_pane_cp013

0x8e39,	// (0x00050130) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8e39,	// (0x00050130) cell_vitu2_function_top_wide_pane_g1

0x13ca,	// (0x000486c1) bg_popup_sub_pane_cp20

0x8e51,	// (0x00050148) list_vitu2_match_list_pane

0xd319,	// (0x00054610) bg_popup_sub_pane_cp20_g1

0xd321,	// (0x00054618) bg_popup_sub_pane_cp20_g2

0x2e22,	// (0x0004a119) bg_popup_sub_pane_cp20_g3

0xd329,	// (0x00054620) bg_popup_sub_pane_cp20_g4

0x2e02,	// (0x0004a0f9) bg_popup_sub_pane_cp20_g5

0xd558,	// (0x0005484f) bg_popup_sub_pane_cp20_g6

0xd339,	// (0x00054630) bg_popup_sub_pane_cp20_g7

0xd341,	// (0x00054638) bg_popup_sub_pane_cp20_g8

0xd349,	// (0x00054640) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f3,	// (0x00056cea) bg_popup_sub_pane_cp20_g

0xce79,	// (0x00054170) list_vitu2_match_list_item_pane_ParamLimits

0xce79,	// (0x00054170) list_vitu2_match_list_item_pane

0xce8b,	// (0x00054182) list_vitu2_match_list_item_pane_t1

0xde02,	// (0x000550f9) bg_popup_sub_pane_cp21

0x3f1c,	// (0x0004b213) grid_vitu2_dropdown_list_pane

0x8e6f,	// (0x00050166) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8e6f,	// (0x00050166) cell_vitu2_dropdown_list_char_pane

0x8e90,	// (0x00050187) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8e90,	// (0x00050187) cell_vitu2_dropdown_list_ctrl_pane

0xd560,	// (0x00054857) cell_vitu2_dropdown_list_char_pane_g1

0xd569,	// (0x00054860) cell_vitu2_dropdown_list_char_pane_g2

0xd572,	// (0x00054869) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa10,	// (0x00056d07) cell_vitu2_dropdown_list_char_pane_g

0x8ebc,	// (0x000501b3) cell_vitu2_dropdown_list_char_pane_t1

0x8eca,	// (0x000501c1) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8eca,	// (0x000501c1) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8ed7,	// (0x000501ce) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8ed7,	// (0x000501ce) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8ee4,	// (0x000501db) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8ee4,	// (0x000501db) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8ef1,	// (0x000501e8) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8ef1,	// (0x000501e8) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc289,	// (0x00053580) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc289,	// (0x00053580) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa17,	// (0x00056d0e) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa17,	// (0x00056d0e) cell_vitu2_dropdown_list_ctrl_pane_g

0x8f0d,	// (0x00050204) aid_size_cell_gallery2_ParamLimits

0x8f0d,	// (0x00050204) aid_size_cell_gallery2

0x8f23,	// (0x0005021a) grid_gallery2_pane_ParamLimits

0x8f23,	// (0x0005021a) grid_gallery2_pane

0x8f37,	// (0x0005022e) scroll_pane_cp029_ParamLimits

0x8f37,	// (0x0005022e) scroll_pane_cp029

0x8f43,	// (0x0005023a) cell_gallery2_pane_ParamLimits

0x8f43,	// (0x0005023a) cell_gallery2_pane

0xd57b,	// (0x00054872) cell_gallery2_pane_g2

0x8f79,	// (0x00050270) cell_gallery2_pane_g3

0xd585,	// (0x0005487c) cell_gallery2_pane_g4

0xd58d,	// (0x00054884) cell_gallery2_pane_g5

0x4566,	// (0x0004b85d) grid_highlight_pane_cp10

0x85de,	// (0x0004f8d5) popup_vitu2_match_list_window_ParamLimits

0x85f5,	// (0x0004f8ec) popup_vitu2_query_window_ParamLimits

0x85f5,	// (0x0004f8ec) popup_vitu2_query_window

0xde02,	// (0x000550f9) bg_vitu2_candi_button_pane

0xd560,	// (0x00054857) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd569,	// (0x00054860) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd572,	// (0x00054869) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x07a9,	// (0x00047aa0) bg_button_pane_cp015

0x8f81,	// (0x00050278) bg_button_pane_cp016

0x8f94,	// (0x0005028b) bg_button_pane_cp017

0xbb02,	// (0x00052df9) bg_popup_sub_pane_cp22

0xd595,	// (0x0005488c) popup_vitu2_query_window_g1

0x07dc,	// (0x00047ad3) popup_vitu2_query_window_g2

0x0002,

0xfa22,	// (0x00056d19) popup_vitu2_query_window_g

0x07fb,	// (0x00047af2) popup_vitu2_query_window_t1_ParamLimits

0x07fb,	// (0x00047af2) popup_vitu2_query_window_t1

0x0830,	// (0x00047b27) popup_vitu2_query_window_t2_ParamLimits

0x0830,	// (0x00047b27) popup_vitu2_query_window_t2

0x0842,	// (0x00047b39) popup_vitu2_query_window_t3_ParamLimits

0x0842,	// (0x00047b39) popup_vitu2_query_window_t3

0x8fb8,	// (0x000502af) popup_vitu2_query_window_t4_ParamLimits

0x8fb8,	// (0x000502af) popup_vitu2_query_window_t4

0x8fd9,	// (0x000502d0) popup_vitu2_query_window_t5_ParamLimits

0x8fd9,	// (0x000502d0) popup_vitu2_query_window_t5

0x0006,

0xfa29,	// (0x00056d20) popup_vitu2_query_window_t_ParamLimits

0xfa29,	// (0x00056d20) popup_vitu2_query_window_t

0xd41b,	// (0x00054712) main_cset_text_pane

0x8a26,	// (0x0004fd1d) aid_area_touch_slider_ParamLimits

0x8a42,	// (0x0004fd39) cset_slider_pane_ParamLimits

0x8a6c,	// (0x0004fd63) main_cset_slider_pane_g1_ParamLimits

0x8a81,	// (0x0004fd78) main_cset_slider_pane_g2_ParamLimits

0xd43c,	// (0x00054733) main_cset_slider_pane_g3_ParamLimits

0xd43c,	// (0x00054733) main_cset_slider_pane_g3

0x8a96,	// (0x0004fd8d) main_cset_slider_pane_g4_ParamLimits

0x8a96,	// (0x0004fd8d) main_cset_slider_pane_g4

0x8aa5,	// (0x0004fd9c) main_cset_slider_pane_g5_ParamLimits

0x8aa5,	// (0x0004fd9c) main_cset_slider_pane_g5

0x8ab1,	// (0x0004fda8) main_cset_slider_pane_g6_ParamLimits

0x8ab1,	// (0x0004fda8) main_cset_slider_pane_g6

0xf97c,	// (0x00056c73) main_cset_slider_pane_g_ParamLimits

0xd46c,	// (0x00054763) main_cset_slider_pane_t1_ParamLimits

0x8b3d,	// (0x0004fe34) main_cset_slider_pane_t2_ParamLimits

0x8b57,	// (0x0004fe4e) main_cset_slider_pane_t3_ParamLimits

0x8b71,	// (0x0004fe68) main_cset_slider_pane_t4_ParamLimits

0x8b8b,	// (0x0004fe82) main_cset_slider_pane_t5_ParamLimits

0x8ba5,	// (0x0004fe9c) main_cset_slider_pane_t6_ParamLimits

0x8bba,	// (0x0004feb1) main_cset_slider_pane_t7_ParamLimits

0x8be4,	// (0x0004fedb) main_cset_slider_pane_t8_ParamLimits

0x8be4,	// (0x0004fedb) main_cset_slider_pane_t8

0x8c0c,	// (0x0004ff03) main_cset_slider_pane_t9_ParamLimits

0x8c0c,	// (0x0004ff03) main_cset_slider_pane_t9

0x8c34,	// (0x0004ff2b) main_cset_slider_pane_t10_ParamLimits

0x8c34,	// (0x0004ff2b) main_cset_slider_pane_t10

0x8c5c,	// (0x0004ff53) main_cset_slider_pane_t11_ParamLimits

0x8c5c,	// (0x0004ff53) main_cset_slider_pane_t11

0x8c84,	// (0x0004ff7b) main_cset_slider_pane_t12_ParamLimits

0x8c84,	// (0x0004ff7b) main_cset_slider_pane_t12

0x8ca1,	// (0x0004ff98) main_cset_slider_pane_t13_ParamLimits

0x8ca1,	// (0x0004ff98) main_cset_slider_pane_t13

0xf9a1,	// (0x00056c98) main_cset_slider_pane_t_ParamLimits

0xde02,	// (0x000550f9) bg_popup_sub_pane_cp011

0xd5a1,	// (0x00054898) main_cset_text_pane_g1

0xd5a9,	// (0x000548a0) main_cset_text_pane_t1

0xd5b7,	// (0x000548ae) main_cset_text_pane_t2

0xd5c5,	// (0x000548bc) main_cset_text_pane_t3

0xd5d3,	// (0x000548ca) main_cset_text_pane_t4

0xd5e1,	// (0x000548d8) main_cset_text_pane_t5

0xd5ef,	// (0x000548e6) main_cset_text_pane_t6

0xd5fd,	// (0x000548f4) main_cset_text_pane_t7

0x0006,

0xfa38,	// (0x00056d2f) main_cset_text_pane_t

0xde02,	// (0x000550f9) main_cam4_burst_pane

0xde02,	// (0x000550f9) main_cam5_pane

0x8965,	// (0x0004fc5c) bg_button_pane_cp019

0x896e,	// (0x0004fc65) bg_button_pane_cp020

0xd448,	// (0x0005473f) main_cset_slider_pane_g7_ParamLimits

0xd448,	// (0x0005473f) main_cset_slider_pane_g7

0xd454,	// (0x0005474b) main_cset_slider_pane_g8_ParamLimits

0xd454,	// (0x0005474b) main_cset_slider_pane_g8

0x8ac5,	// (0x0004fdbc) main_cset_slider_pane_g9_ParamLimits

0x8ac5,	// (0x0004fdbc) main_cset_slider_pane_g9

0x8ad1,	// (0x0004fdc8) main_cset_slider_pane_g10_ParamLimits

0x8ad1,	// (0x0004fdc8) main_cset_slider_pane_g10

0x8add,	// (0x0004fdd4) main_cset_slider_pane_g11_ParamLimits

0x8add,	// (0x0004fdd4) main_cset_slider_pane_g11

0x8ae9,	// (0x0004fde0) main_cset_slider_pane_g12_ParamLimits

0x8ae9,	// (0x0004fde0) main_cset_slider_pane_g12

0x8af5,	// (0x0004fdec) main_cset_slider_pane_g13_ParamLimits

0x8af5,	// (0x0004fdec) main_cset_slider_pane_g13

0x8b01,	// (0x0004fdf8) main_cset_slider_pane_g14_ParamLimits

0x8b01,	// (0x0004fdf8) main_cset_slider_pane_g14

0x8b0d,	// (0x0004fe04) main_cset_slider_pane_g15_ParamLimits

0x8b0d,	// (0x0004fe04) main_cset_slider_pane_g15

0xd49a,	// (0x00054791) main_cset_slider_pane_t14_ParamLimits

0xd49a,	// (0x00054791) main_cset_slider_pane_t14

0xd4d3,	// (0x000547ca) main_cset_slider_pane_t15_ParamLimits

0xd4d3,	// (0x000547ca) main_cset_slider_pane_t15

0x8ffa,	// (0x000502f1) aid_cam4_burst_size_cell_ParamLimits

0x8ffa,	// (0x000502f1) aid_cam4_burst_size_cell

0x901a,	// (0x00050311) grid_cam4_burst_pane_ParamLimits

0x901a,	// (0x00050311) grid_cam4_burst_pane

0x9052,	// (0x00050349) linegrid_cam4_burst_pane_ParamLimits

0x9052,	// (0x00050349) linegrid_cam4_burst_pane

0xd60b,	// (0x00054902) scroll_pane_cp30_ParamLimits

0xd60b,	// (0x00054902) scroll_pane_cp30

0x9076,	// (0x0005036d) cell_cam4_burst_pane_ParamLimits

0x9076,	// (0x0005036d) cell_cam4_burst_pane

0xd617,	// (0x0005490e) linegrid_cam4_burst_pane_g1_ParamLimits

0xd617,	// (0x0005490e) linegrid_cam4_burst_pane_g1

0x90c3,	// (0x000503ba) linegrid_cam4_burst_pane_g2_ParamLimits

0x90c3,	// (0x000503ba) linegrid_cam4_burst_pane_g2

0xd624,	// (0x0005491b) linegrid_cam4_burst_pane_g3_ParamLimits

0xd624,	// (0x0005491b) linegrid_cam4_burst_pane_g3

0x0002,

0xfa47,	// (0x00056d3e) linegrid_cam4_burst_pane_g_ParamLimits

0xfa47,	// (0x00056d3e) linegrid_cam4_burst_pane_g

0x90d4,	// (0x000503cb) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x90d4,	// (0x000503cb) linegrid_cam4_burst_pane_g3_copy1

0xd631,	// (0x00054928) linegrid_cam4_burst_pane_g4_ParamLimits

0xd631,	// (0x00054928) linegrid_cam4_burst_pane_g4

0x90ee,	// (0x000503e5) linegrid_cam4_burst_pane_g5_ParamLimits

0x90ee,	// (0x000503e5) linegrid_cam4_burst_pane_g5

0x90ff,	// (0x000503f6) linegrid_cam4_burst_pane_g6_ParamLimits

0x90ff,	// (0x000503f6) linegrid_cam4_burst_pane_g6

0xd63e,	// (0x00054935) linegrid_cam4_burst_pane_g7_ParamLimits

0xd63e,	// (0x00054935) linegrid_cam4_burst_pane_g7

0x9116,	// (0x0005040d) cell_cam4_burst_pane_g1

0xd657,	// (0x0005494e) main_cam5_pane_t1_ParamLimits

0xd657,	// (0x0005494e) main_cam5_pane_t1

0xd669,	// (0x00054960) main_cam5_pane_t2_ParamLimits

0xd669,	// (0x00054960) main_cam5_pane_t2

0xd67b,	// (0x00054972) main_cam5_pane_t3_ParamLimits

0xd67b,	// (0x00054972) main_cam5_pane_t3

0xd68d,	// (0x00054984) main_cam5_pane_t4_ParamLimits

0xd68d,	// (0x00054984) main_cam5_pane_t4

0xd6a5,	// (0x0005499c) main_cam5_pane_t5_ParamLimits

0xd6a5,	// (0x0005499c) main_cam5_pane_t5

0xd6b9,	// (0x000549b0) main_cam5_pane_t6_ParamLimits

0xd6b9,	// (0x000549b0) main_cam5_pane_t6

0xd6cd,	// (0x000549c4) main_cam5_pane_t7_ParamLimits

0xd6cd,	// (0x000549c4) main_cam5_pane_t7

0xd6df,	// (0x000549d6) main_cam5_pane_t8_ParamLimits

0xd6df,	// (0x000549d6) main_cam5_pane_t8

0xd6fb,	// (0x000549f2) main_cam5_pane_t9_ParamLimits

0xd6fb,	// (0x000549f2) main_cam5_pane_t9

0xd70d,	// (0x00054a04) main_cam5_pane_t10_ParamLimits

0xd70d,	// (0x00054a04) main_cam5_pane_t10

0xd71f,	// (0x00054a16) main_cam5_pane_t11_ParamLimits

0xd71f,	// (0x00054a16) main_cam5_pane_t11

0xd731,	// (0x00054a28) main_cam5_pane_t12_ParamLimits

0xd731,	// (0x00054a28) main_cam5_pane_t12

0xd746,	// (0x00054a3d) main_cam5_pane_t13_ParamLimits

0xd746,	// (0x00054a3d) main_cam5_pane_t13

0x000c,

0xfa53,	// (0x00056d4a) main_cam5_pane_t_ParamLimits

0xfa53,	// (0x00056d4a) main_cam5_pane_t

0x138a,	// (0x00048681) popup_scut_keymap_window_ParamLimits

0x138a,	// (0x00048681) popup_scut_keymap_window

0x9129,	// (0x00050420) aid_size_cell_brow_shortcut

0x4566,	// (0x0004b85d) bg_popup_window_pane_cp010

0x9135,	// (0x0005042c) grid_scut_pane

0x9141,	// (0x00050438) cell_scut_pane_ParamLimits

0x9141,	// (0x00050438) cell_scut_pane

0x9158,	// (0x0005044f) cell_scut_pane_g1

0xd763,	// (0x00054a5a) cell_scut_pane_t1

0xd772,	// (0x00054a69) cell_scut_pane_t2

0x9161,	// (0x00050458) cell_scut_pane_t3

0x0002,

0xfa6e,	// (0x00056d65) cell_scut_pane_t

0x7057,	// (0x0004e34e) main_mup3_pane_g8_ParamLimits

0x7057,	// (0x0004e34e) main_mup3_pane_g8

0x84dc,	// (0x0004f7d3) area_vitu2_query_pane_ParamLimits

0x84dc,	// (0x0004f7d3) area_vitu2_query_pane

0x07bb,	// (0x00047ab2) input_focus_pane_cp08

0xd781,	// (0x00054a78) area_vitu2_query_pane_g1

0x08c0,	// (0x00047bb7) area_vitu2_query_pane_g2

0x0001,

0xfa75,	// (0x00056d6c) area_vitu2_query_pane_g

0x916f,	// (0x00050466) area_vitu2_query_pane_t1_ParamLimits

0x916f,	// (0x00050466) area_vitu2_query_pane_t1

0x9183,	// (0x0005047a) area_vitu2_query_pane_t2_ParamLimits

0x9183,	// (0x0005047a) area_vitu2_query_pane_t2

0x08d1,	// (0x00047bc8) area_vitu2_query_pane_t3_ParamLimits

0x08d1,	// (0x00047bc8) area_vitu2_query_pane_t3

0xce99,	// (0x00054190) area_vitu2_query_pane_t4_ParamLimits

0xce99,	// (0x00054190) area_vitu2_query_pane_t4

0xcec1,	// (0x000541b8) area_vitu2_query_pane_t5_ParamLimits

0xcec1,	// (0x000541b8) area_vitu2_query_pane_t5

0xcee9,	// (0x000541e0) area_vitu2_query_pane_t6_ParamLimits

0xcee9,	// (0x000541e0) area_vitu2_query_pane_t6

0x0006,

0xfa7a,	// (0x00056d71) area_vitu2_query_pane_t_ParamLimits

0xfa7a,	// (0x00056d71) area_vitu2_query_pane_t

0x9197,	// (0x0005048e) bg_button_pane_cp018

0x91a5,	// (0x0005049c) bg_button_pane_cp021

0x08f9,	// (0x00047bf0) bg_button_pane_cp022

0x0908,	// (0x00047bff) input_focus_pane_cp09

0x4373,	// (0x0004b66a) aid_size_touch_mv_arrow_left

0x439c,	// (0x0004b693) aid_size_touch_mv_arrow_right

0x8b25,	// (0x0004fe1c) main_cset_slider_pane_g16_ParamLimits

0x8b25,	// (0x0004fe1c) main_cset_slider_pane_g16

0x8b31,	// (0x0004fe28) main_cset_slider_pane_g17_ParamLimits

0x8b31,	// (0x0004fe28) main_cset_slider_pane_g17

0x9116,	// (0x0005040d) cell_cam4_burst_pane_g1_ParamLimits

0xde02,	// (0x000550f9) compa_mode_pane

0x8d0b,	// (0x00050002) popup_vtel_slider_window_g3_ParamLimits

0x8d0b,	// (0x00050002) popup_vtel_slider_window_g3

0x8d22,	// (0x00050019) popup_vtel_slider_window_g4_ParamLimits

0x8d22,	// (0x00050019) popup_vtel_slider_window_g4

0x8d39,	// (0x00050030) popup_vtel_slider_window_t1_ParamLimits

0x8d39,	// (0x00050030) popup_vtel_slider_window_t1

0xde02,	// (0x000550f9) main_cl_pane

0xbb2a,	// (0x00052e21) popup_imed_adjust2_window_ParamLimits

0xbb02,	// (0x00052df9) bg_tb_trans_pane_cp05_ParamLimits

0xc594,	// (0x0005388b) popup_imed_adjust2_window_g1_ParamLimits

0xc5a3,	// (0x0005389a) popup_imed_adjust2_window_g2_ParamLimits

0xc5a3,	// (0x0005389a) popup_imed_adjust2_window_g2

0xc5af,	// (0x000538a6) popup_imed_adjust2_window_g3_ParamLimits

0xc5af,	// (0x000538a6) popup_imed_adjust2_window_g3

0x0002,

0xf7e5,	// (0x00056adc) popup_imed_adjust2_window_g_ParamLimits

0xf7e5,	// (0x00056adc) popup_imed_adjust2_window_g

0xc5bb,	// (0x000538b2) popup_imed_adjust2_window_t1_ParamLimits

0xc5d3,	// (0x000538ca) slider_imed_adjust_pane_ParamLimits

0xc5e7,	// (0x000538de) slider_imed_adjust_pane_g1_ParamLimits

0xc5f7,	// (0x000538ee) slider_imed_adjust_pane_g2_ParamLimits

0xc607,	// (0x000538fe) slider_imed_adjust_pane_g3_ParamLimits

0xc618,	// (0x0005390f) slider_imed_adjust_pane_g4_ParamLimits

0xf7ec,	// (0x00056ae3) slider_imed_adjust_pane_g_ParamLimits

0x8265,	// (0x0004f55c) aid_touch_area_cam4_ParamLimits

0x8265,	// (0x0004f55c) aid_touch_area_cam4

0xcd03,	// (0x00053ffa) battery_pane_cp01

0x8334,	// (0x0004f62b) main_camera4_pane_g6_ParamLimits

0x8334,	// (0x0004f62b) main_camera4_pane_g6

0x835e,	// (0x0004f655) main_camera4_pane_t2_ParamLimits

0x835e,	// (0x0004f655) main_camera4_pane_t2

0x0001,

0xf8ef,	// (0x00056be6) main_camera4_pane_t_ParamLimits

0xf8ef,	// (0x00056be6) main_camera4_pane_t

0x8393,	// (0x0004f68a) aid_touch_area_vid4_ParamLimits

0x8393,	// (0x0004f68a) aid_touch_area_vid4

0x83e7,	// (0x0004f6de) main_video4_pane_g5_ParamLimits

0x83e7,	// (0x0004f6de) main_video4_pane_g5

0x840c,	// (0x0004f703) vid4_progress_pane_ParamLimits

0x840c,	// (0x0004f703) vid4_progress_pane

0xd460,	// (0x00054757) main_cset_slider_pane_g18_ParamLimits

0xd460,	// (0x00054757) main_cset_slider_pane_g18

0xd64b,	// (0x00054942) cell_cam4_burst_pane_g2_ParamLimits

0xd64b,	// (0x00054942) cell_cam4_burst_pane_g2

0x0001,

0xfa4e,	// (0x00056d45) cell_cam4_burst_pane_g_ParamLimits

0xfa4e,	// (0x00056d45) cell_cam4_burst_pane_g

0x1a84,	// (0x00048d7b) bg_cl_pane_ParamLimits

0x1a84,	// (0x00048d7b) bg_cl_pane

0x91b1,	// (0x000504a8) cl_header_pane_ParamLimits

0x91b1,	// (0x000504a8) cl_header_pane

0x91c5,	// (0x000504bc) cl_listscroll_pane_ParamLimits

0x91c5,	// (0x000504bc) cl_listscroll_pane

0xd78d,	// (0x00054a84) bg_cl_pane_g1

0xd795,	// (0x00054a8c) bg_cl_pane_g2

0xd79d,	// (0x00054a94) bg_cl_pane_g3

0xd7a5,	// (0x00054a9c) bg_cl_pane_g4

0xd7ad,	// (0x00054aa4) bg_cl_pane_g5

0xd7b5,	// (0x00054aac) bg_cl_pane_g6

0xd7bd,	// (0x00054ab4) bg_cl_pane_g7

0xd7c5,	// (0x00054abc) bg_cl_pane_g8

0xd7cd,	// (0x00054ac4) bg_cl_pane_g9

0x0008,

0xfa89,	// (0x00056d80) bg_cl_pane_g

0x91d5,	// (0x000504cc) aid_height_cl_leading_ParamLimits

0x91d5,	// (0x000504cc) aid_height_cl_leading

0x91e1,	// (0x000504d8) aid_height_cl_text_ParamLimits

0x91e1,	// (0x000504d8) aid_height_cl_text

0x13ca,	// (0x000486c1) bg_cl_header_pane_ParamLimits

0x13ca,	// (0x000486c1) bg_cl_header_pane

0x9200,	// (0x000504f7) cl_header_pane_g1_ParamLimits

0x9200,	// (0x000504f7) cl_header_pane_g1

0x9216,	// (0x0005050d) cl_header_pane_t1_ParamLimits

0x9216,	// (0x0005050d) cl_header_pane_t1

0xd7d5,	// (0x00054acc) cl_list_pane

0xd433,	// (0x0005472a) hc_scroll_pane_cp01

0x2e02,	// (0x0004a0f9) bg_cl_header_pane_g1

0xd319,	// (0x00054610) bg_cl_header_pane_g2

0x2e22,	// (0x0004a119) bg_cl_header_pane_g3

0xd329,	// (0x00054620) bg_cl_header_pane_g4

0xd321,	// (0x00054618) bg_cl_header_pane_g5

0xd558,	// (0x0005484f) bg_cl_header_pane_g6

0xd341,	// (0x00054638) bg_cl_header_pane_g7

0xd349,	// (0x00054640) bg_cl_header_pane_g8

0xd339,	// (0x00054630) bg_cl_header_pane_g9

0x0008,

0xfa9c,	// (0x00056d93) bg_cl_header_pane_g

0x922f,	// (0x00050526) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x922f,	// (0x00050526) hc_cl_list_double_graphic_heading_pane

0x9240,	// (0x00050537) hc_cl_list_single_graphic_pane_ParamLimits

0x9240,	// (0x00050537) hc_cl_list_single_graphic_pane

0x9256,	// (0x0005054d) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x9256,	// (0x0005054d) hc_cl_list_single_graphic_pane_g1

0x9262,	// (0x00050559) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x9262,	// (0x00050559) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaaf,	// (0x00056da6) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaaf,	// (0x00056da6) hc_cl_list_single_graphic_pane_g

0x9276,	// (0x0005056d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x9276,	// (0x0005056d) hc_cl_list_single_graphic_pane_t1

0x9256,	// (0x0005054d) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x9256,	// (0x0005054d) hc_cl_list_double_graphic_heading_pane_g1

0x928b,	// (0x00050582) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x928b,	// (0x00050582) hc_cl_list_double_graphic_heading_pane_g2

0x929f,	// (0x00050596) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x929f,	// (0x00050596) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab4,	// (0x00056dab) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab4,	// (0x00056dab) hc_cl_list_double_graphic_heading_pane_g

0x92b3,	// (0x000505aa) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x92b3,	// (0x000505aa) hc_cl_list_double_graphic_heading_pane_t1

0x92c8,	// (0x000505bf) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x92c8,	// (0x000505bf) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabb,	// (0x00056db2) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabb,	// (0x00056db2) hc_cl_list_double_graphic_heading_pane_t

0x92dd,	// (0x000505d4) vid4_progress_pane_g1

0x92ef,	// (0x000505e6) vid4_progress_pane_g2

0xb394,	// (0x0005268b) vid4_progress_pane_g3

0xcf3d,	// (0x00054234) vid4_progress_pane_g4

0x0004,

0xfac0,	// (0x00056db7) vid4_progress_pane_g

0xcf5b,	// (0x00054252) vid4_progress_pane_t1

0xcf70,	// (0x00054267) vid4_progress_pane_t2

0x0002,

0xfacb,	// (0x00056dc2) vid4_progress_pane_t

0xcf9b,	// (0x00054292) wait_bar_pane_cp07

0xbe10,	// (0x00053107) blid_firmament_pane_ParamLimits

0xbe53,	// (0x0005314a) popup_blid_sat_info2_window_g1

0xbe77,	// (0x0005316e) popup_blid_sat_info2_window_t3

0xbe85,	// (0x0005317c) popup_blid_sat_info2_window_t4

0xbe93,	// (0x0005318a) popup_blid_sat_info2_window_t5

0xbea1,	// (0x00053198) popup_blid_sat_info2_window_t6

0xbeb1,	// (0x000531a8) popup_blid_sat_info2_window_t7

0xbebf,	// (0x000531b6) popup_blid_sat_info2_window_t8

0xbecd,	// (0x000531c4) popup_blid_sat_info2_window_t9

0xbedb,	// (0x000531d2) popup_blid_sat_info2_window_t10

0xbf9d,	// (0x00053294) aid_firma_cardinal_ParamLimits

0xbfb1,	// (0x000532a8) blid_firmament_pane_t1_ParamLimits

0xbfc8,	// (0x000532bf) blid_firmament_pane_t2_ParamLimits

0xbfdf,	// (0x000532d6) blid_firmament_pane_t3_ParamLimits

0xbff6,	// (0x000532ed) blid_firmament_pane_t4_ParamLimits

0xf6de,	// (0x000569d5) blid_firmament_pane_t_ParamLimits

0xc00d,	// (0x00053304) blid_sat_info_pane_ParamLimits

0x13ca,	// (0x000486c1) main_cam_set_pane_ParamLimits

0x791d,	// (0x0004ec14) aid_size_cell_colour_35_ParamLimits

0x793d,	// (0x0004ec34) aid_size_cell_colour_112_ParamLimits

0x795d,	// (0x0004ec54) aid_size_cell_effect_ParamLimits

0xbb02,	// (0x00052df9) bg_tb_trans_pane_cp02_ParamLimits

0x3c68,	// (0x0004af5f) heading_imed_pane_ParamLimits

0x797d,	// (0x0004ec74) listscroll_imed_pane_ParamLimits

0x5a10,	// (0x0004cd07) popup_call2_audio_first_window_g5_ParamLimits

0x5a10,	// (0x0004cd07) popup_call2_audio_first_window_g5

0x7f10,	// (0x0004f207) aid_size_touch_image3_arrow_left_ParamLimits

0x7f10,	// (0x0004f207) aid_size_touch_image3_arrow_left

0x7f3c,	// (0x0004f233) aid_size_touch_image3_arrow_right_ParamLimits

0x7f3c,	// (0x0004f233) aid_size_touch_image3_arrow_right

0xcf86,	// (0x0005427d) vid4_progress_pane_t3

0x7c90,	// (0x0004ef87) main_hwr_training_symbol_option_pane_ParamLimits

0x7c90,	// (0x0004ef87) main_hwr_training_symbol_option_pane

0xc881,	// (0x00053b78) popup_hwr_training_preview_window_ParamLimits

0xc881,	// (0x00053b78) popup_hwr_training_preview_window

0x7cb0,	// (0x0004efa7) hwr_training_navi_pane_g5_ParamLimits

0x7cb0,	// (0x0004efa7) hwr_training_navi_pane_g5

0xd307,	// (0x000545fe) popup_char_count_window

0x13ca,	// (0x000486c1) bg_popup_sub_pane_cp20_ParamLimits

0x8e51,	// (0x00050148) list_vitu2_match_list_pane_ParamLimits

0x8e60,	// (0x00050157) vitu2_page_scroll_pane_ParamLimits

0x8e60,	// (0x00050157) vitu2_page_scroll_pane

0xd7e7,	// (0x00054ade) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd7e7,	// (0x00054ade) list_single_hwr_training_symbol_option_pane

0xd7fa,	// (0x00054af1) list_single_hwr_training_symbol_option_pane_g1

0xd802,	// (0x00054af9) list_single_hwr_training_symbol_option_pane_t1

0xd810,	// (0x00054b07) bg_button_pane_cp023

0xd819,	// (0x00054b10) bg_button_pane_cp024

0x9325,	// (0x0005061c) vitu2_page_scroll_pane_g1

0x932d,	// (0x00050624) vitu2_page_scroll_pane_g2

0x0001,

0xfad2,	// (0x00056dc9) vitu2_page_scroll_pane_g

0x9335,	// (0x0005062c) vitu2_page_scroll_pane_t1

0xd84c,	// (0x00054b43) popup_char_count_window_g1

0xd855,	// (0x00054b4c) popup_char_count_window_g2

0xd85e,	// (0x00054b55) popup_char_count_window_g3

0x0002,

0xfad7,	// (0x00056dce) popup_char_count_window_g

0xd867,	// (0x00054b5e) popup_char_count_window_t1

0xde02,	// (0x000550f9) main_vded2_pane

0xc580,	// (0x00053877) aid_size_cell_imed_line

0xc58a,	// (0x00053881) grid_imed_line_width_pane

0xcdbb,	// (0x000540b2) vid4_indicators_pane_g4

0xd875,	// (0x00054b6c) cell_imed_line_width_pane_ParamLimits

0xd875,	// (0x00054b6c) cell_imed_line_width_pane

0xd889,	// (0x00054b80) cell_imed_line_width_pane_g1

0xd892,	// (0x00054b89) cell_imed_line_width_pane_g2

0x0001,

0xfade,	// (0x00056dd5) cell_imed_line_width_pane_g

0x9344,	// (0x0005063b) main_vded2_pane_g1_ParamLimits

0x9344,	// (0x0005063b) main_vded2_pane_g1

0x935a,	// (0x00050651) main_vded2_pane_g2_ParamLimits

0x935a,	// (0x00050651) main_vded2_pane_g2

0x0001,

0xfae3,	// (0x00056dda) main_vded2_pane_g_ParamLimits

0xfae3,	// (0x00056dda) main_vded2_pane_g

0x936c,	// (0x00050663) vded2_slider_pane_ParamLimits

0x936c,	// (0x00050663) vded2_slider_pane

0x937c,	// (0x00050673) aid_size_touch_vded2_end

0x9386,	// (0x0005067d) aid_size_touch_vded2_playhead

0xd89a,	// (0x00054b91) aid_size_touch_vded2_start

0xd8a2,	// (0x00054b99) vded2_slider_bg_pane

0xd8ab,	// (0x00054ba2) vded2_slider_pane_g1

0xd8b4,	// (0x00054bab) vded2_slider_pane_g2

0x9390,	// (0x00050687) vded2_slider_pane_g3

0x0002,

0xfae8,	// (0x00056ddf) vded2_slider_pane_g

0xd8bc,	// (0x00054bb3) vded2_slider_bg_pane_g1

0xd8c5,	// (0x00054bbc) vded2_slider_bg_pane_g2

0xd8ce,	// (0x00054bc5) vded2_slider_bg_pane_g3

0x0002,

0xfaef,	// (0x00056de6) vded2_slider_bg_pane_g

0x4bdb,	// (0x0004bed2) aid_postcard_touch_down_pane_ParamLimits

0x4bdb,	// (0x0004bed2) aid_postcard_touch_down_pane

0x4bf1,	// (0x0004bee8) aid_postcard_touch_up_pane_ParamLimits

0x4bf1,	// (0x0004bee8) aid_postcard_touch_up_pane

0xde02,	// (0x000550f9) main_blid2_pane

0xbb10,	// (0x00052e07) popup_blid2_search_window

0xde02,	// (0x000550f9) blid2_gps_pane

0xde02,	// (0x000550f9) blid2_navig_pane

0xde02,	// (0x000550f9) blid2_search_pane

0xde02,	// (0x000550f9) blid2_tripm_pane

0x939b,	// (0x00050692) blid2_search_pane_g1_ParamLimits

0x939b,	// (0x00050692) blid2_search_pane_g1

0x93b5,	// (0x000506ac) blid2_search_pane_t1_ParamLimits

0x93b5,	// (0x000506ac) blid2_search_pane_t1

0x93c7,	// (0x000506be) aid_size_cell_blid2_gps_ParamLimits

0x93c7,	// (0x000506be) aid_size_cell_blid2_gps

0x93df,	// (0x000506d6) blid2_gps_pane_g1_ParamLimits

0x93df,	// (0x000506d6) blid2_gps_pane_g1

0x93f3,	// (0x000506ea) grid_blid2_satellite_pane_ParamLimits

0x93f3,	// (0x000506ea) grid_blid2_satellite_pane

0x940d,	// (0x00050704) blid2_navig_pane_g1_ParamLimits

0x940d,	// (0x00050704) blid2_navig_pane_g1

0x9419,	// (0x00050710) blid2_navig_pane_t1_ParamLimits

0x9419,	// (0x00050710) blid2_navig_pane_t1

0x9434,	// (0x0005072b) blid2_navig_pane_t2_ParamLimits

0x9434,	// (0x0005072b) blid2_navig_pane_t2

0x0001,

0xfaf6,	// (0x00056ded) blid2_navig_pane_t_ParamLimits

0xfaf6,	// (0x00056ded) blid2_navig_pane_t

0x944f,	// (0x00050746) blid2_navig_ring_pane_ParamLimits

0x944f,	// (0x00050746) blid2_navig_ring_pane

0x9468,	// (0x0005075f) blid2_speed_pane_ParamLimits

0x9468,	// (0x0005075f) blid2_speed_pane

0x9474,	// (0x0005076b) blid2_tripm_pane_g1_ParamLimits

0x9474,	// (0x0005076b) blid2_tripm_pane_g1

0x948d,	// (0x00050784) blid2_tripm_pane_g2_ParamLimits

0x948d,	// (0x00050784) blid2_tripm_pane_g2

0x94a1,	// (0x00050798) blid2_tripm_pane_g3_ParamLimits

0x94a1,	// (0x00050798) blid2_tripm_pane_g3

0x94b5,	// (0x000507ac) blid2_tripm_pane_g4_ParamLimits

0x94b5,	// (0x000507ac) blid2_tripm_pane_g4

0x94c9,	// (0x000507c0) blid2_tripm_pane_g5_ParamLimits

0x94c9,	// (0x000507c0) blid2_tripm_pane_g5

0x0005,

0xfafb,	// (0x00056df2) blid2_tripm_pane_g_ParamLimits

0xfafb,	// (0x00056df2) blid2_tripm_pane_g

0x94ef,	// (0x000507e6) blid2_tripm_pane_t1_ParamLimits

0x94ef,	// (0x000507e6) blid2_tripm_pane_t1

0x950a,	// (0x00050801) blid2_tripm_pane_t2_ParamLimits

0x950a,	// (0x00050801) blid2_tripm_pane_t2

0x9523,	// (0x0005081a) blid2_tripm_pane_t3_ParamLimits

0x9523,	// (0x0005081a) blid2_tripm_pane_t3

0x0003,

0xfb08,	// (0x00056dff) blid2_tripm_pane_t_ParamLimits

0xfb08,	// (0x00056dff) blid2_tripm_pane_t

0x956a,	// (0x00050861) cell_blid2_satellite_pane_ParamLimits

0x956a,	// (0x00050861) cell_blid2_satellite_pane

0x9588,	// (0x0005087f) cell_blid2_satellite_pane_g1

0xd8d7,	// (0x00054bce) cell_blid2_satellite_pane_t1

0xc01d,	// (0x00053314) blid2_speed_pane_g1

0xd8e5,	// (0x00054bdc) blid2_speed_pane_t1

0xd8f3,	// (0x00054bea) blid2_speed_pane_t2

0x0001,

0xfb11,	// (0x00056e08) blid2_speed_pane_t

0xc01d,	// (0x00053314) blid2_navig_ring_pane_g1

0x9591,	// (0x00050888) blid2_navig_ring_pane_g2

0x9599,	// (0x00050890) blid2_navig_ring_pane_g3

0x95a1,	// (0x00050898) blid2_navig_ring_pane_g4

0x95a9,	// (0x000508a0) blid2_navig_ring_pane_g5

0x0004,

0xfb16,	// (0x00056e0d) blid2_navig_ring_pane_g

0xde02,	// (0x000550f9) bg_popup_window_pane_cp011

0xd901,	// (0x00054bf8) popup_blid2_search_window_g1

0xd909,	// (0x00054c00) popup_blid2_search_window_t1

0xd917,	// (0x00054c0e) popup_blid2_search_window_t2

0x0001,

0xfb21,	// (0x00056e18) popup_blid2_search_window_t

0x2cce,	// (0x00049fc5) main_browser_pane_g1

0x1a84,	// (0x00048d7b) main_browser_pane_ParamLimits

0x13ca,	// (0x000486c1) bg_button_pane_cp011_ParamLimits

0x8701,	// (0x0004f9f8) cell_vitu2_function_pane_g1_ParamLimits

0xbb02,	// (0x00052df9) bg_popup_sub_pane_cp22_ParamLimits

0x07bb,	// (0x00047ab2) input_focus_pane_cp08_ParamLimits

0x8fa7,	// (0x0005029e) popup_vitu2_query_button_pane_ParamLimits

0x8fa7,	// (0x0005029e) popup_vitu2_query_button_pane

0x07d2,	// (0x00047ac9) popup_vitu2_query_input_button_pane

0xd595,	// (0x0005488c) popup_vitu2_query_window_g1_ParamLimits

0x07dc,	// (0x00047ad3) popup_vitu2_query_window_g2_ParamLimits

0xfa22,	// (0x00056d19) popup_vitu2_query_window_g_ParamLimits

0xde02,	// (0x000550f9) bg_button_pane_cp026

0x95b1,	// (0x000508a8) popup_vitu2_query_input_button_pane_g1

0xde02,	// (0x000550f9) bg_button_pane_cp025

0xd925,	// (0x00054c1c) popup_vitu2_query_button_pane_t1

0x6d6c,	// (0x0004e063) main_mp3_pane_t6

0x6d7a,	// (0x0004e071) popup_slider_window_cp01

0xcd1f,	// (0x00054016) cam4_battery_pane

0xcd78,	// (0x0005406f) cam4_battery_pane_cp02

0xcf35,	// (0x0005422c) cam4_battery_pane_cp01

0xcf35,	// (0x0005422c) cam4_battery_pane_cp03

0xc01d,	// (0x00053314) cam4_battery_pane_g1

0xd933,	// (0x00054c2a) cam4_battery_pane_g2

0x0001,

0xfb26,	// (0x00056e1d) cam4_battery_pane_g

0xbee9,	// (0x000531e0) popup_blid_sat_info2_window_t11

0x4373,	// (0x0004b66a) aid_size_touch_mv_arrow_left_ParamLimits

0x439c,	// (0x0004b693) aid_size_touch_mv_arrow_right_ParamLimits

0x43fa,	// (0x0004b6f1) navi_pane_g1_ParamLimits

0x4406,	// (0x0004b6fd) navi_pane_g2_ParamLimits

0x4434,	// (0x0004b72b) navi_pane_g3_ParamLimits

0xf3f0,	// (0x000566e7) navi_pane_g_ParamLimits

0x44f0,	// (0x0004b7e7) navi_pane_mv_t1_ParamLimits

0x7989,	// (0x0004ec80) grid_imed_effect_pane_ParamLimits

0x2874,	// (0x00049b6b) aid_placing_vt_slider_lsc

0x2884,	// (0x00049b7b) aid_placing_vt_slider_prt

0x13ca,	// (0x000486c1) bg_tb_trans_pane_cp01_ParamLimits

0xc1a9,	// (0x000534a0) popup_image_details_window_g1_ParamLimits

0xc1bc,	// (0x000534b3) popup_image_details_window_g2_ParamLimits

0xc1d1,	// (0x000534c8) popup_image_details_window_g3_ParamLimits

0xc1d1,	// (0x000534c8) popup_image_details_window_g3

0xf723,	// (0x00056a1a) popup_image_details_window_g_ParamLimits

0xc1e5,	// (0x000534dc) popup_image_details_window_t1_ParamLimits

0xc1f7,	// (0x000534ee) popup_image_details_window_t2_ParamLimits

0xc210,	// (0x00053507) popup_image_details_window_t3_ParamLimits

0xc224,	// (0x0005351b) popup_image_details_window_t4_ParamLimits

0xc23f,	// (0x00053536) popup_image_details_window_t5_ParamLimits

0xf72a,	// (0x00056a21) popup_image_details_window_t_ParamLimits

0x91ed,	// (0x000504e4) cl_header_name_pane_ParamLimits

0x91ed,	// (0x000504e4) cl_header_name_pane

0x95b9,	// (0x000508b0) cl_header_name_pane_t1_ParamLimits

0x95b9,	// (0x000508b0) cl_header_name_pane_t1

0x95da,	// (0x000508d1) cl_header_name_pane_t2_ParamLimits

0x95da,	// (0x000508d1) cl_header_name_pane_t2

0x961c,	// (0x00050913) cl_header_name_pane_t3_ParamLimits

0x961c,	// (0x00050913) cl_header_name_pane_t3

0x0002,

0xfb2b,	// (0x00056e22) cl_header_name_pane_t_ParamLimits

0xfb2b,	// (0x00056e22) cl_header_name_pane_t

0x44c1,	// (0x0004b7b8) navi_pane_mv_g2_ParamLimits

0xd2e1,	// (0x000545d8) field_vitu2_entry_pane_g1_ParamLimits

0xd2ed,	// (0x000545e4) field_vitu2_entry_pane_g2_ParamLimits

0xd2f9,	// (0x000545f0) field_vitu2_entry_pane_g3_ParamLimits

0xd2f9,	// (0x000545f0) field_vitu2_entry_pane_g3

0xf921,	// (0x00056c18) field_vitu2_entry_pane_g_ParamLimits

0x867d,	// (0x0004f974) cell_vitu2_itu_pane_g1_ParamLimits

0x868d,	// (0x0004f984) cell_vitu2_itu_pane_g2_ParamLimits

0x868d,	// (0x0004f984) cell_vitu2_itu_pane_g2

0x0001,

0xf92d,	// (0x00056c24) cell_vitu2_itu_pane_g_ParamLimits

0xf92d,	// (0x00056c24) cell_vitu2_itu_pane_g

0x13ca,	// (0x000486c1) bg_vkb2_func_pane_cp05_ParamLimits

0x13ca,	// (0x000486c1) bg_vkb2_func_pane_cp05

0x13ca,	// (0x000486c1) bg_vkb2_func_pane_cp03

0x13ca,	// (0x000486c1) bg_vkb2_func_pane_cp04

0x13ca,	// (0x000486c1) bg_vkb2_func_pane_cp10_ParamLimits

0x13ca,	// (0x000486c1) bg_vkb2_func_pane_cp10

0x08f9,	// (0x00047bf0) bg_vkb2_func_pane_cp08

0x9197,	// (0x0005048e) bg_vkb2_func_pane_cp06

0x91a5,	// (0x0005049c) bg_vkb2_func_pane_cp07

0xd822,	// (0x00054b19) bg_vkb2_func_pane_cp11_ParamLimits

0xd822,	// (0x00054b19) bg_vkb2_func_pane_cp11

0xd837,	// (0x00054b2e) bg_vkb2_func_pane_cp12_ParamLimits

0xd837,	// (0x00054b2e) bg_vkb2_func_pane_cp12

0xde02,	// (0x000550f9) bg_vkb2_func_pane_cp09

0xd319,	// (0x00054610) bg_vkb2_func_pane_g1

0x2e22,	// (0x0004a119) bg_vkb2_func_pane_g2

0xd321,	// (0x00054618) bg_vkb2_func_pane_g3

0xd329,	// (0x00054620) bg_vkb2_func_pane_g4

0xd558,	// (0x0005484f) bg_vkb2_func_pane_g5

0xd341,	// (0x00054638) bg_vkb2_func_pane_g6

0xd349,	// (0x00054640) bg_vkb2_func_pane_g7

0xd339,	// (0x00054630) bg_vkb2_func_pane_g8

0x2e02,	// (0x0004a0f9) bg_vkb2_func_pane_g9

0x0008,

0xfb32,	// (0x00056e29) bg_vkb2_func_pane_g

0x94dd,	// (0x000507d4) blid2_tripm_pane_g6_ParamLimits

0x94dd,	// (0x000507d4) blid2_tripm_pane_g6

0xcb72,	// (0x00053e69) mp4_progress_pane_g1

0x9556,	// (0x0005084d) blid2_tripm_values_pane_ParamLimits

0x9556,	// (0x0005084d) blid2_tripm_values_pane

0x964d,	// (0x00050944) blid2_tripm_values_pane_t1

0x965b,	// (0x00050952) blid2_tripm_values_pane_t2

0x9669,	// (0x00050960) blid2_tripm_values_pane_t3

0x9677,	// (0x0005096e) blid2_tripm_values_pane_t4

0x9685,	// (0x0005097c) blid2_tripm_values_pane_t5

0x9693,	// (0x0005098a) blid2_tripm_values_pane_t6

0x96a1,	// (0x00050998) blid2_tripm_values_pane_t7

0x96af,	// (0x000509a6) blid2_tripm_values_pane_t8

0x96bd,	// (0x000509b4) blid2_tripm_values_pane_t9

0x0008,

0xfb45,	// (0x00056e3c) blid2_tripm_values_pane_t

0x28c0,	// (0x00049bb7) call_video_pane_t1_ParamLimits

0x28de,	// (0x00049bd5) call_video_pane_t2_ParamLimits

0xf279,	// (0x00056570) call_video_pane_t_ParamLimits

0x05c6,	// (0x000478bd) msg_header_pane_g1_ParamLimits

0x4b45,	// (0x0004be3c) msg_header_pane_g2_ParamLimits

0x4b45,	// (0x0004be3c) msg_header_pane_g2

0x0001,

0xf493,	// (0x0005678a) msg_header_pane_g_ParamLimits

0xf493,	// (0x0005678a) msg_header_pane_g

0x1a84,	// (0x00048d7b) main_clock2_pane_ParamLimits

0x7688,	// (0x0004e97f) grid_clock2_toolbar_pane_ParamLimits

0x7688,	// (0x0004e97f) grid_clock2_toolbar_pane

0x7688,	// (0x0004e97f) listscroll_clock2_pane_ParamLimits

0x7688,	// (0x0004e97f) listscroll_clock2_pane

0x777d,	// (0x0004ea74) main_clock2_pane_t3_ParamLimits

0x777d,	// (0x0004ea74) main_clock2_pane_t3

0x77a1,	// (0x0004ea98) main_clock2_pane_t4_ParamLimits

0x77a1,	// (0x0004ea98) main_clock2_pane_t4

0xd93d,	// (0x00054c34) cell_clock2_toolbar_pane

0xd945,	// (0x00054c3c) cell_clock2_toolbar_pane_cp01

0xd945,	// (0x00054c3c) cell_clock2_toolbar_pane_cp02

0xd94d,	// (0x00054c44) cell_clock2_toolbar_pane_cp03

0xd955,	// (0x00054c4c) list_clock2_pane

0x411d,	// (0x0004b414) scroll_pane_cp10

0xd95d,	// (0x00054c54) list_single_clock2_pane_ParamLimits

0xd95d,	// (0x00054c54) list_single_clock2_pane

0x4566,	// (0x0004b85d) list_highlight_pane_cp08

0xd96a,	// (0x00054c61) list_single_clock2_pane_t1

0xd978,	// (0x00054c6f) list_single_clock2_pane_t2

0x0001,

0xfb58,	// (0x00056e4f) list_single_clock2_pane_t

0xde02,	// (0x000550f9) bg_button_pane_cp10

0xd986,	// (0x00054c7d) cell_clock2_toolbar_pane_g1

0x4b59,	// (0x0004be50) aid_main_viewer_pane_g1_ParamLimits

0x4b59,	// (0x0004be50) aid_main_viewer_pane_g1

0x4b67,	// (0x0004be5e) aid_main_viewer_pane_g2_ParamLimits

0x4b67,	// (0x0004be5e) aid_main_viewer_pane_g2

0x4b75,	// (0x0004be6c) aid_main_viewer_pane_g3_ParamLimits

0x4b75,	// (0x0004be6c) aid_main_viewer_pane_g3

0x4b84,	// (0x0004be7b) aid_main_viewer_pane_g4_ParamLimits

0x4b84,	// (0x0004be7b) aid_main_viewer_pane_g4

0x0003,

0xf4a4,	// (0x0005679b) aid_main_viewer_pane_g_ParamLimits

0xf4a4,	// (0x0005679b) aid_main_viewer_pane_g

0x5f9d,	// (0x0004d294) main_calc_pane_ParamLimits

0x5fb1,	// (0x0004d2a8) main_dialer2_pane_ParamLimits

0xde02,	// (0x000550f9) main_cam6_pane

0xde02,	// (0x000550f9) main_vid6_pane

0x7694,	// (0x0004e98b) listscroll_gen_pane_cp06_ParamLimits

0x7694,	// (0x0004e98b) listscroll_gen_pane_cp06

0x77c4,	// (0x0004eabb) main_clock2_pane_t5_ParamLimits

0x77c4,	// (0x0004eabb) main_clock2_pane_t5

0x781e,	// (0x0004eb15) aid_call2_pane_cp10_ParamLimits

0x7830,	// (0x0004eb27) aid_call_pane_cp10_ParamLimits

0x4302,	// (0x0004b5f9) popup_clock_analogue_window_cp10_g1_ParamLimits

0x4302,	// (0x0004b5f9) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7842,	// (0x0004eb39) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7842,	// (0x0004eb39) popup_clock_analogue_window_cp10_g4_ParamLimits

0x4302,	// (0x0004b5f9) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7da,	// (0x00056ad1) popup_clock_analogue_window_cp10_g_ParamLimits

0x7854,	// (0x0004eb4b) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7ebd,	// (0x0004f1b4) cell_dialer2_keypad_pane_g2_ParamLimits

0x7ebd,	// (0x0004f1b4) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c0,	// (0x00056bb7) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c0,	// (0x00056bb7) cell_dialer2_keypad_pane_g

0x7ed9,	// (0x0004f1d0) cell_dialer2_keypad_pane_t1

0x8a18,	// (0x0004fd0f) main_cset_text2_pane_ParamLimits

0x8a18,	// (0x0004fd0f) main_cset_text2_pane

0xd781,	// (0x00054a78) area_vitu2_query_pane_g1_ParamLimits

0x08c0,	// (0x00047bb7) area_vitu2_query_pane_g2_ParamLimits

0xfa75,	// (0x00056d6c) area_vitu2_query_pane_g_ParamLimits

0xcf11,	// (0x00054208) area_vitu2_query_pane_t7_ParamLimits

0xcf11,	// (0x00054208) area_vitu2_query_pane_t7

0x9197,	// (0x0005048e) bg_button_pane_cp018_ParamLimits

0x91a5,	// (0x0005049c) bg_button_pane_cp021_ParamLimits

0x08f9,	// (0x00047bf0) bg_button_pane_cp022_ParamLimits

0x08f9,	// (0x00047bf0) bg_vkb2_func_pane_cp08_ParamLimits

0x9197,	// (0x0005048e) bg_vkb2_func_pane_cp06_ParamLimits

0x91a5,	// (0x0005049c) bg_vkb2_func_pane_cp07_ParamLimits

0x0908,	// (0x00047bff) input_focus_pane_cp09_ParamLimits

0xcfc6,	// (0x000542bd) cam6_autofocus_pane_ParamLimits

0xcfc6,	// (0x000542bd) cam6_autofocus_pane

0x96cb,	// (0x000509c2) cam6_image_uncrop_pane_ParamLimits

0x96cb,	// (0x000509c2) cam6_image_uncrop_pane

0x96da,	// (0x000509d1) cam6_indi_pane_ParamLimits

0x96da,	// (0x000509d1) cam6_indi_pane

0x96f0,	// (0x000509e7) cam6_mode_pane_ParamLimits

0x96f0,	// (0x000509e7) cam6_mode_pane

0x9702,	// (0x000509f9) cam6_timer_pane_ParamLimits

0x9702,	// (0x000509f9) cam6_timer_pane

0x970e,	// (0x00050a05) cam6_zoom_pane_ParamLimits

0x970e,	// (0x00050a05) cam6_zoom_pane

0x971a,	// (0x00050a11) cam6_mode_pane_g1_ParamLimits

0x971a,	// (0x00050a11) cam6_mode_pane_g1

0x972a,	// (0x00050a21) cam6_mode_pane_g2_ParamLimits

0x972a,	// (0x00050a21) cam6_mode_pane_g2

0x973a,	// (0x00050a31) cam6_mode_pane_g3_ParamLimits

0x973a,	// (0x00050a31) cam6_mode_pane_g3

0x974a,	// (0x00050a41) cam6_mode_pane_g4_ParamLimits

0x974a,	// (0x00050a41) cam6_mode_pane_g4

0x0003,

0xfb5d,	// (0x00056e54) cam6_mode_pane_g_ParamLimits

0xfb5d,	// (0x00056e54) cam6_mode_pane_g

0xd98e,	// (0x00054c85) bg_tb_trans_pane_cp08_ParamLimits

0xd98e,	// (0x00054c85) bg_tb_trans_pane_cp08

0xd99c,	// (0x00054c93) cam6_battery_pane_ParamLimits

0xd99c,	// (0x00054c93) cam6_battery_pane

0xd9b2,	// (0x00054ca9) cam6_indi_pane_g1_ParamLimits

0xd9b2,	// (0x00054ca9) cam6_indi_pane_g1

0xd9c4,	// (0x00054cbb) cam6_indi_pane_g2_ParamLimits

0xd9c4,	// (0x00054cbb) cam6_indi_pane_g2

0xd9d6,	// (0x00054ccd) cam6_indi_pane_g3_ParamLimits

0xd9d6,	// (0x00054ccd) cam6_indi_pane_g3

0x0002,

0xfb66,	// (0x00056e5d) cam6_indi_pane_g_ParamLimits

0xfb66,	// (0x00056e5d) cam6_indi_pane_g

0xd9e8,	// (0x00054cdf) cam6_indi_pane_t1_ParamLimits

0xd9e8,	// (0x00054cdf) cam6_indi_pane_t1

0x975a,	// (0x00050a51) cam6_autofocus_pane_g1

0x9762,	// (0x00050a59) cam6_autofocus_pane_g2

0x976a,	// (0x00050a61) cam6_autofocus_pane_g3

0x9772,	// (0x00050a69) cam6_autofocus_pane_g4

0x0003,

0xfb6d,	// (0x00056e64) cam6_autofocus_pane_g

0xda0e,	// (0x00054d05) cam6_timer_pane_g1

0xda16,	// (0x00054d0d) cam6_timer_pane_t1

0xda24,	// (0x00054d1b) cam6_zoom_cont_pane

0xda2c,	// (0x00054d23) cam6_zoom_pane_g1

0xda34,	// (0x00054d2b) cam6_zoom_pane_g2

0x977a,	// (0x00050a71) cam6_zoom_pane_g3

0x0002,

0xfb76,	// (0x00056e6d) cam6_zoom_pane_g

0xc01d,	// (0x00053314) cam6_battery_pane_g1

0xc01d,	// (0x00053314) cam6_battery_pane_g2

0x0001,

0xf6e7,	// (0x000569de) cam6_battery_pane_g

0xda3c,	// (0x00054d33) cam6_zoom_cont_pane_g1

0xda45,	// (0x00054d3c) cam6_zoom_cont_pane_g2

0xda4e,	// (0x00054d45) cam6_zoom_cont_pane_g3

0x0002,

0xfb7d,	// (0x00056e74) cam6_zoom_cont_pane_g

0x9797,	// (0x00050a8e) cam6_mode_pane_cp_ParamLimits

0x9797,	// (0x00050a8e) cam6_mode_pane_cp

0x970e,	// (0x00050a05) cam6_zoom_pane_cp_ParamLimits

0x970e,	// (0x00050a05) cam6_zoom_pane_cp

0x97a9,	// (0x00050aa0) vid6_image_uncrop_cif_pane_ParamLimits

0x97a9,	// (0x00050aa0) vid6_image_uncrop_cif_pane

0x97b9,	// (0x00050ab0) vid6_image_uncrop_nhd_pane_ParamLimits

0x97b9,	// (0x00050ab0) vid6_image_uncrop_nhd_pane

0x96cb,	// (0x000509c2) vid6_image_uncrop_vga_pane_ParamLimits

0x96cb,	// (0x000509c2) vid6_image_uncrop_vga_pane

0x97c8,	// (0x00050abf) vid6_image_uncrop_wvga_pane_ParamLimits

0x97c8,	// (0x00050abf) vid6_image_uncrop_wvga_pane

0x97d7,	// (0x00050ace) vid6_indi_pane_ParamLimits

0x97d7,	// (0x00050ace) vid6_indi_pane

0xd98e,	// (0x00054c85) bg_tb_trans_pane_cp09_ParamLimits

0xd98e,	// (0x00054c85) bg_tb_trans_pane_cp09

0xda66,	// (0x00054d5d) cam6_battery_pane_cp_ParamLimits

0xda66,	// (0x00054d5d) cam6_battery_pane_cp

0xda72,	// (0x00054d69) vid6_indi_pane_g1_ParamLimits

0xda72,	// (0x00054d69) vid6_indi_pane_g1

0xda84,	// (0x00054d7b) vid6_indi_pane_g2_ParamLimits

0xda84,	// (0x00054d7b) vid6_indi_pane_g2

0xda96,	// (0x00054d8d) vid6_indi_pane_g3_ParamLimits

0xda96,	// (0x00054d8d) vid6_indi_pane_g3

0xdaab,	// (0x00054da2) vid6_indi_pane_g4_ParamLimits

0xdaab,	// (0x00054da2) vid6_indi_pane_g4

0xdac0,	// (0x00054db7) vid6_indi_pane_g5_ParamLimits

0xdac0,	// (0x00054db7) vid6_indi_pane_g5

0x0004,

0xfb84,	// (0x00056e7b) vid6_indi_pane_g_ParamLimits

0xfb84,	// (0x00056e7b) vid6_indi_pane_g

0xdada,	// (0x00054dd1) vid6_indi_pane_t1_ParamLimits

0xdada,	// (0x00054dd1) vid6_indi_pane_t1

0xdaf0,	// (0x00054de7) vid6_indi_pane_t2_ParamLimits

0xdaf0,	// (0x00054de7) vid6_indi_pane_t2

0xdb18,	// (0x00054e0f) vid6_indi_pane_t3_ParamLimits

0xdb18,	// (0x00054e0f) vid6_indi_pane_t3

0xdb40,	// (0x00054e37) vid6_indi_pane_t4_ParamLimits

0xdb40,	// (0x00054e37) vid6_indi_pane_t4

0x0003,

0xfb8f,	// (0x00056e86) vid6_indi_pane_t_ParamLimits

0xfb8f,	// (0x00056e86) vid6_indi_pane_t

0xdb64,	// (0x00054e5b) wait_bar_pane_cp08

0x97ef,	// (0x00050ae6) main_cset_text2_pane_t1_ParamLimits

0x97ef,	// (0x00050ae6) main_cset_text2_pane_t1

0x9782,	// (0x00050a79) listscroll_gen_pane_cp06_t1_ParamLimits

0x9782,	// (0x00050a79) listscroll_gen_pane_cp06_t1

0xde02,	// (0x000550f9) main_cam6_set_pane

0xc289,	// (0x00053580) bg_tb_trans_pane_cp06_ParamLimits

0xcd27,	// (0x0005401e) cam4_indicators_pane_g1_ParamLimits

0xcd38,	// (0x0005402f) cam4_indicators_pane_g2_ParamLimits

0xf8fd,	// (0x00056bf4) cam4_indicators_pane_g_ParamLimits

0xcd56,	// (0x0005404d) cam4_indicators_pane_t1_ParamLimits

0x13ca,	// (0x000486c1) bg_tb_trans_pane_cp07_ParamLimits

0xcd82,	// (0x00054079) vid4_indicators_pane_g1_ParamLimits

0xcd96,	// (0x0005408d) vid4_indicators_pane_g2_ParamLimits

0xcdaa,	// (0x000540a1) vid4_indicators_pane_g3_ParamLimits

0xcdbb,	// (0x000540b2) vid4_indicators_pane_g4_ParamLimits

0xf90f,	// (0x00056c06) vid4_indicators_pane_g_ParamLimits

0xcdd9,	// (0x000540d0) vid4_indicators_pane_t1_ParamLimits

0x92dd,	// (0x000505d4) vid4_progress_pane_g1_ParamLimits

0x92ef,	// (0x000505e6) vid4_progress_pane_g2_ParamLimits

0xb394,	// (0x0005268b) vid4_progress_pane_g3_ParamLimits

0xcf3d,	// (0x00054234) vid4_progress_pane_g4_ParamLimits

0xfac0,	// (0x00056db7) vid4_progress_pane_g_ParamLimits

0xcf5b,	// (0x00054252) vid4_progress_pane_t1_ParamLimits

0xcf70,	// (0x00054267) vid4_progress_pane_t2_ParamLimits

0xcf86,	// (0x0005427d) vid4_progress_pane_t3_ParamLimits

0xfacb,	// (0x00056dc2) vid4_progress_pane_t_ParamLimits

0xcf9b,	// (0x00054292) wait_bar_pane_cp07_ParamLimits

0x980c,	// (0x00050b03) main_cam6_set_pane_g2_ParamLimits

0x980c,	// (0x00050b03) main_cam6_set_pane_g2

0x9830,	// (0x00050b27) main_cset6_listscroll_pane_ParamLimits

0x9830,	// (0x00050b27) main_cset6_listscroll_pane

0x9850,	// (0x00050b47) main_cset6_slider_pane_ParamLimits

0x9850,	// (0x00050b47) main_cset6_slider_pane

0x9866,	// (0x00050b5d) main_cset6_text2_pane_ParamLimits

0x9866,	// (0x00050b5d) main_cset6_text2_pane

0xdb73,	// (0x00054e6a) main_cset6_text_pane

0xdb7b,	// (0x00054e72) main_cset_list_pane_copy1_ParamLimits

0xdb7b,	// (0x00054e72) main_cset_list_pane_copy1

0xdb8b,	// (0x00054e82) scroll_pane_cp028_copy1

0x9874,	// (0x00050b6b) cset_list_set_pane_copy1

0x9885,	// (0x00050b7c) aid_position_infowindow_above_copy1

0x988d,	// (0x00050b84) aid_position_infowindow_below_copy1

0x092b,	// (0x00047c22) cset_list_set_pane_g1_copy1

0x0933,	// (0x00047c2a) cset_list_set_pane_g3_copy1_ParamLimits

0x0933,	// (0x00047c2a) cset_list_set_pane_g3_copy1

0x0942,	// (0x00047c39) cset_list_set_pane_t1_copy1_ParamLimits

0x0942,	// (0x00047c39) cset_list_set_pane_t1_copy1

0x13ca,	// (0x000486c1) list_highlight_pane_cp021_copy1_ParamLimits

0x13ca,	// (0x000486c1) list_highlight_pane_cp021_copy1

0xdb94,	// (0x00054e8b) cset6_slider_pane_ParamLimits

0xdb94,	// (0x00054e8b) cset6_slider_pane

0xdbc0,	// (0x00054eb7) main_cset6_slider_pane_g1_ParamLimits

0xdbc0,	// (0x00054eb7) main_cset6_slider_pane_g1

0x9895,	// (0x00050b8c) main_cset6_slider_pane_g2_ParamLimits

0x9895,	// (0x00050b8c) main_cset6_slider_pane_g2

0xdbe8,	// (0x00054edf) main_cset6_slider_pane_g3_ParamLimits

0xdbe8,	// (0x00054edf) main_cset6_slider_pane_g3

0x98bd,	// (0x00050bb4) main_cset6_slider_pane_g4_ParamLimits

0x98bd,	// (0x00050bb4) main_cset6_slider_pane_g4

0x98c9,	// (0x00050bc0) main_cset6_slider_pane_g5_ParamLimits

0x98c9,	// (0x00050bc0) main_cset6_slider_pane_g5

0xd448,	// (0x0005473f) main_cset6_slider_pane_g7_ParamLimits

0xd448,	// (0x0005473f) main_cset6_slider_pane_g7

0xd454,	// (0x0005474b) main_cset6_slider_pane_g8_ParamLimits

0xd454,	// (0x0005474b) main_cset6_slider_pane_g8

0x8ac5,	// (0x0004fdbc) main_cset6_slider_pane_g9_ParamLimits

0x8ac5,	// (0x0004fdbc) main_cset6_slider_pane_g9

0x8ad1,	// (0x0004fdc8) main_cset6_slider_pane_g10_ParamLimits

0x8ad1,	// (0x0004fdc8) main_cset6_slider_pane_g10

0x8add,	// (0x0004fdd4) main_cset6_slider_pane_g11_ParamLimits

0x8add,	// (0x0004fdd4) main_cset6_slider_pane_g11

0x8ae9,	// (0x0004fde0) main_cset6_slider_pane_g12_ParamLimits

0x8ae9,	// (0x0004fde0) main_cset6_slider_pane_g12

0x8af5,	// (0x0004fdec) main_cset6_slider_pane_g13_ParamLimits

0x8af5,	// (0x0004fdec) main_cset6_slider_pane_g13

0x8b01,	// (0x0004fdf8) main_cset6_slider_pane_g14_ParamLimits

0x8b01,	// (0x0004fdf8) main_cset6_slider_pane_g14

0x98d5,	// (0x00050bcc) main_cset6_slider_pane_g15_ParamLimits

0x98d5,	// (0x00050bcc) main_cset6_slider_pane_g15

0x8b25,	// (0x0004fe1c) main_cset6_slider_pane_g16_ParamLimits

0x8b25,	// (0x0004fe1c) main_cset6_slider_pane_g16

0x8b31,	// (0x0004fe28) main_cset6_slider_pane_g17_ParamLimits

0x8b31,	// (0x0004fe28) main_cset6_slider_pane_g17

0x0011,

0xfb98,	// (0x00056e8f) main_cset6_slider_pane_g_ParamLimits

0xfb98,	// (0x00056e8f) main_cset6_slider_pane_g

0xdbf4,	// (0x00054eeb) main_cset6_slider_pane_t1_ParamLimits

0xdbf4,	// (0x00054eeb) main_cset6_slider_pane_t1

0x9905,	// (0x00050bfc) main_cset6_slider_pane_t2_ParamLimits

0x9905,	// (0x00050bfc) main_cset6_slider_pane_t2

0x9930,	// (0x00050c27) main_cset6_slider_pane_t3_ParamLimits

0x9930,	// (0x00050c27) main_cset6_slider_pane_t3

0x995b,	// (0x00050c52) main_cset6_slider_pane_t4_ParamLimits

0x995b,	// (0x00050c52) main_cset6_slider_pane_t4

0x9986,	// (0x00050c7d) main_cset6_slider_pane_t5_ParamLimits

0x9986,	// (0x00050c7d) main_cset6_slider_pane_t5

0xdc35,	// (0x00054f2c) main_cset6_slider_pane_t7_ParamLimits

0xdc35,	// (0x00054f2c) main_cset6_slider_pane_t7

0x99b1,	// (0x00050ca8) main_cset6_slider_pane_t8_ParamLimits

0x99b1,	// (0x00050ca8) main_cset6_slider_pane_t8

0x99d5,	// (0x00050ccc) main_cset6_slider_pane_t9_ParamLimits

0x99d5,	// (0x00050ccc) main_cset6_slider_pane_t9

0x99f9,	// (0x00050cf0) main_cset6_slider_pane_t10_ParamLimits

0x99f9,	// (0x00050cf0) main_cset6_slider_pane_t10

0x9a1d,	// (0x00050d14) main_cset6_slider_pane_t11_ParamLimits

0x9a1d,	// (0x00050d14) main_cset6_slider_pane_t11

0xdc6b,	// (0x00054f62) main_cset6_slider_pane_t14_ParamLimits

0xdc6b,	// (0x00054f62) main_cset6_slider_pane_t14

0xdca4,	// (0x00054f9b) main_cset6_slider_pane_t15_ParamLimits

0xdca4,	// (0x00054f9b) main_cset6_slider_pane_t15

0x000b,

0xfbbd,	// (0x00056eb4) main_cset6_slider_pane_t_ParamLimits

0xfbbd,	// (0x00056eb4) main_cset6_slider_pane_t

0xd50c,	// (0x00054803) cset_slider_pane_g1_copy1

0xd515,	// (0x0005480c) cset_slider_pane_g2_copy1

0xd51e,	// (0x00054815) cset_slider_pane_g3_copy1

0xde02,	// (0x000550f9) bg_popup_sub_pane_cp011_copy1

0xdcdd,	// (0x00054fd4) main_cset_text_pane_g1_copy1

0xd5a9,	// (0x000548a0) main_cset_text_pane_t1_copy1

0xd5b7,	// (0x000548ae) main_cset_text_pane_t2_copy1

0xd5c5,	// (0x000548bc) main_cset_text_pane_t3_copy1

0xd5d3,	// (0x000548ca) main_cset_text_pane_t4_copy1

0xd5e1,	// (0x000548d8) main_cset_text_pane_t5_copy1

0xdce5,	// (0x00054fdc) main_cset_text_pane_t6_copy1

0xd5fd,	// (0x000548f4) main_cset_text_pane_t7_copy1

0x97ef,	// (0x00050ae6) main_cset_text2_pane_t1_copy1

0x13ca,	// (0x000486c1) main_ncimui_pane

0x61fb,	// (0x0004d4f2) popup_query_ncimui_window_ParamLimits

0x61fb,	// (0x0004d4f2) popup_query_ncimui_window

0xc32a,	// (0x00053621) field_cale_ev2_pane_g4_ParamLimits

0xc32a,	// (0x00053621) field_cale_ev2_pane_g4

0x7d9d,	// (0x0004f094) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7d9d,	// (0x0004f094) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89b,	// (0x00056b92) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89b,	// (0x00056b92) cell_video_dialer_keypad_pane_g

0x7db5,	// (0x0004f0ac) cell_video_dialer_keypad_pane_t1

0xde02,	// (0x000550f9) bg_popup_window_pane_cp012

0x3f73,	// (0x0004b26a) heading_pane_cp06

0xdd11,	// (0x00055008) ncim_query_content_pane

0xde02,	// (0x000550f9) bg_popup_heading_pane_cp01

0xdd19,	// (0x00055010) ncim_heading_pane_t1

0xdd27,	// (0x0005501e) ncim_indicator_popup_pane

0xdd39,	// (0x00055030) ncim_query_button_pane

0xdd4d,	// (0x00055044) ncim_query_content_pane_t1

0xdd5f,	// (0x00055056) ncim_query_content_pane_t2

0x0005,

0xfc01,	// (0x00056ef8) ncim_query_content_pane_t

0xdd99,	// (0x00055090) ncim_query_list_pane

0xddab,	// (0x000550a2) ncim_query_popup_pane

0xdd27,	// (0x0005501e) ncim_indicator_popup_pane_ParamLimits

0x9b67,	// (0x00050e5e) ncim_query_content_pane_g1_ParamLimits

0x9b67,	// (0x00050e5e) ncim_query_content_pane_g1

0xdd4d,	// (0x00055044) ncim_query_content_pane_t1_ParamLimits

0xdd5f,	// (0x00055056) ncim_query_content_pane_t2_ParamLimits

0x9b73,	// (0x00050e6a) ncim_query_content_pane_t3_ParamLimits

0x9b73,	// (0x00050e6a) ncim_query_content_pane_t3

0x9b9b,	// (0x00050e92) ncim_query_content_pane_t4_ParamLimits

0x9b9b,	// (0x00050e92) ncim_query_content_pane_t4

0x9bc3,	// (0x00050eba) ncim_query_content_pane_t5_ParamLimits

0x9bc3,	// (0x00050eba) ncim_query_content_pane_t5

0xdd71,	// (0x00055068) ncim_query_content_pane_t6_ParamLimits

0xdd71,	// (0x00055068) ncim_query_content_pane_t6

0xfc01,	// (0x00056ef8) ncim_query_content_pane_t_ParamLimits

0xdd99,	// (0x00055090) ncim_query_list_pane_ParamLimits

0xddab,	// (0x000550a2) ncim_query_popup_pane_ParamLimits

0xddbf,	// (0x000550b6) wait_bar_pane_cp04

0xde02,	// (0x000550f9) input_focus_pane_cp011

0xddc7,	// (0x000550be) ncim_query_popup_pane_t1

0xddd5,	// (0x000550cc) ncim_list_query_list_pane_ParamLimits

0xddd5,	// (0x000550cc) ncim_list_query_list_pane

0xde02,	// (0x000550f9) bg_button_pane_cp027

0xdde2,	// (0x000550d9) ncim_query_button_pane_g1

0xde02,	// (0x000550f9) list_highlight_pane_cp012

0xde2a,	// (0x00055121) ncim_list_query_list_pane_g1

0xde32,	// (0x00055129) ncim_list_query_list_pane_t1

0xcd47,	// (0x0005403e) cam4_indicators_pane_g3_ParamLimits

0xcd47,	// (0x0005403e) cam4_indicators_pane_g3

0xcdc7,	// (0x000540be) vid4_indicators_pane_g5_ParamLimits

0xcdc7,	// (0x000540be) vid4_indicators_pane_g5

0xcf4c,	// (0x00054243) vid4_progress_pane_g5_ParamLimits

0xcf4c,	// (0x00054243) vid4_progress_pane_g5

0x9a55,	// (0x00050d4c) main_ncimui_pane_g1

0x9abb,	// (0x00050db2) ncimui_group_query_pane_ParamLimits

0x9abb,	// (0x00050db2) ncimui_group_query_pane

0x9b03,	// (0x00050dfa) ncimui_list_pane_ParamLimits

0x9b03,	// (0x00050dfa) ncimui_list_pane

0x9b2a,	// (0x00050e21) ncimui_text_pane_ParamLimits

0x9b2a,	// (0x00050e21) ncimui_text_pane

0x9beb,	// (0x00050ee2) ncimui_text_pane_t1_ParamLimits

0x9beb,	// (0x00050ee2) ncimui_text_pane_t1

0xde40,	// (0x00055137) ncimui_list_single_graphic_pane_ParamLimits

0xde40,	// (0x00055137) ncimui_list_single_graphic_pane

0x9c09,	// (0x00050f00) ncimui_query_pane_ParamLimits

0x9c09,	// (0x00050f00) ncimui_query_pane

0xde02,	// (0x000550f9) list_highlight_pane_cp013

0xde50,	// (0x00055147) ncim_list_query_list_pane_t1_copy1

0xde2a,	// (0x00055121) ncim_list_single_graphic_pane_g1

0xde5e,	// (0x00055155) ncim_query_button_pane_cp01

0xde6a,	// (0x00055161) ncim_query_entry_pane_ParamLimits

0xde6a,	// (0x00055161) ncim_query_entry_pane

0xde7d,	// (0x00055174) ncimui_query_pane_g1

0xde89,	// (0x00055180) ncimui_query_pane_t1_ParamLimits

0xde89,	// (0x00055180) ncimui_query_pane_t1

0x13ca,	// (0x000486c1) input_focus_pane_cp012

0xdea2,	// (0x00055199) ncim_query_entry_pane_t1

0x1a84,	// (0x00048d7b) main_im_pane_ParamLimits

0x13ca,	// (0x000486c1) main_mobtv_pane_ParamLimits

0x13ca,	// (0x000486c1) main_mobtv_pane

0x98ed,	// (0x00050be4) main_cset6_slider_pane_g18_ParamLimits

0x98ed,	// (0x00050be4) main_cset6_slider_pane_g18

0x98f9,	// (0x00050bf0) main_cset6_slider_pane_g19_ParamLimits

0x98f9,	// (0x00050bf0) main_cset6_slider_pane_g19

0xddec,	// (0x000550e3) bg_main_mobtv_pane_ParamLimits

0xddec,	// (0x000550e3) bg_main_mobtv_pane

0x9c1c,	// (0x00050f13) main_mobtv_info_pane

0x9c25,	// (0x00050f1c) main_mobtv_loading_pane_ParamLimits

0x9c25,	// (0x00050f1c) main_mobtv_loading_pane

0xdeb4,	// (0x000551ab) main_mobtv_pg_channel_list_pane

0xdebe,	// (0x000551b5) main_mobtv_pg_hdr_pane

0x9c32,	// (0x00050f29) main_mobtv_programe_curr_pane_ParamLimits

0x9c32,	// (0x00050f29) main_mobtv_programe_curr_pane

0x9c3f,	// (0x00050f36) main_mobtv_programe_next_pane_ParamLimits

0x9c3f,	// (0x00050f36) main_mobtv_programe_next_pane

0xdec7,	// (0x000551be) popup_mobtv_noti_window

0xc01d,	// (0x00053314) main_tv_pg_hdr_pane_g1

0xdecf,	// (0x000551c6) main_tv_pg_hdr_pane_g2

0xded7,	// (0x000551ce) main_tv_pg_hdr_pane_g3

0xdedf,	// (0x000551d6) main_tv_pg_hdr_pane_g4

0xdee7,	// (0x000551de) main_tv_pg_hdr_pane_g5

0xdef1,	// (0x000551e8) main_tv_pg_hdr_pane_g6

0xdefb,	// (0x000551f2) main_tv_pg_hdr_pane_g7

0xdf05,	// (0x000551fc) main_tv_pg_hdr_pane_g8

0xdf0f,	// (0x00055206) main_tv_pg_hdr_pane_g9

0xdf19,	// (0x00055210) main_tv_pg_hdr_pane_g10

0xdf23,	// (0x0005521a) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0e,	// (0x00056f05) main_tv_pg_hdr_pane_g

0xdf2d,	// (0x00055224) main_tv_pg_hdr_pane_t1

0xdf3b,	// (0x00055232) main_tv_pg_hdr_pane_t2

0xdf49,	// (0x00055240) main_tv_pg_hdr_pane_t3

0xdf59,	// (0x00055250) main_tv_pg_hdr_pane_t4

0xdf69,	// (0x00055260) main_tv_pg_hdr_pane_t5

0x0004,

0xfc25,	// (0x00056f1c) main_tv_pg_hdr_pane_t

0xdf79,	// (0x00055270) single_mobtv_pg_channel_pane_ParamLimits

0xdf79,	// (0x00055270) single_mobtv_pg_channel_pane

0xdf8b,	// (0x00055282) single_mobtv_pg_channel_table_pane

0xdf94,	// (0x0005528b) single_mobtv_pg_channel_thumb_pane

0xdf9d,	// (0x00055294) single_tv_pg_channel_pane_g1

0xdfa6,	// (0x0005529d) single_tv_pg_channel_pane_g2

0x0001,

0xfc30,	// (0x00056f27) single_tv_pg_channel_pane_g

0xc289,	// (0x00053580) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc289,	// (0x00053580) bg_single_mobtv_pg_channel_thumb_pane

0xdfaf,	// (0x000552a6) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdfaf,	// (0x000552a6) single_mobtv_pg_channel_thumb_pane_g1

0xdfbd,	// (0x000552b4) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdfbd,	// (0x000552b4) single_mobtv_pg_channel_thumb_pane_g2

0xdfc9,	// (0x000552c0) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdfc9,	// (0x000552c0) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc35,	// (0x00056f2c) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc35,	// (0x00056f2c) single_mobtv_pg_channel_thumb_pane_g

0xdfd5,	// (0x000552cc) single_mobtv_pg_channel_thumb_pane_t1

0xdfe3,	// (0x000552da) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3c,	// (0x00056f33) single_mobtv_pg_channel_thumb_pane_t

0xc01d,	// (0x00053314) bg_single_mobtv_pg_channel_table_pane_g1

0xc01d,	// (0x00053314) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e7,	// (0x000569de) bg_single_mobtv_pg_channel_table_pane_g

0xdff1,	// (0x000552e8) single_mobtv_pg_channel_table_pane_t1

0xdfff,	// (0x000552f6) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc41,	// (0x00056f38) single_mobtv_pg_channel_table_pane_t

0x9c54,	// (0x00050f4b) main_mobtv_info_pane_g1_ParamLimits

0x9c54,	// (0x00050f4b) main_mobtv_info_pane_g1

0x9c72,	// (0x00050f69) main_mobtv_info_pane_t1_ParamLimits

0x9c72,	// (0x00050f69) main_mobtv_info_pane_t1

0x9cea,	// (0x00050fe1) main_mobtv_info_pane_t2_ParamLimits

0x9cea,	// (0x00050fe1) main_mobtv_info_pane_t2

0x0002,

0xfc4b,	// (0x00056f42) main_mobtv_info_pane_t_ParamLimits

0xfc4b,	// (0x00056f42) main_mobtv_info_pane_t

0x9d79,	// (0x00051070) wait_bar_pane_cp05

0x9d8b,	// (0x00051082) main_mobtv_loading_pane_g1_ParamLimits

0x9d8b,	// (0x00051082) main_mobtv_loading_pane_g1

0x9d9e,	// (0x00051095) main_mobtv_loading_pane_g2_ParamLimits

0x9d9e,	// (0x00051095) main_mobtv_loading_pane_g2

0x9daa,	// (0x000510a1) main_mobtv_loading_pane_g3_ParamLimits

0x9daa,	// (0x000510a1) main_mobtv_loading_pane_g3

0x0002,

0xfc52,	// (0x00056f49) main_mobtv_loading_pane_g_ParamLimits

0xfc52,	// (0x00056f49) main_mobtv_loading_pane_g

0xe00d,	// (0x00055304) main_mobtv_loading_pane_t1_ParamLimits

0xe00d,	// (0x00055304) main_mobtv_loading_pane_t1

0xe025,	// (0x0005531c) main_mobtv_loading_pane_t2_ParamLimits

0xe025,	// (0x0005531c) main_mobtv_loading_pane_t2

0x0001,

0xfc59,	// (0x00056f50) main_mobtv_loading_pane_t_ParamLimits

0xfc59,	// (0x00056f50) main_mobtv_loading_pane_t

0x9dbd,	// (0x000510b4) wait_bar_pane_cp06_ParamLimits

0x9dbd,	// (0x000510b4) wait_bar_pane_cp06

0xe049,	// (0x00055340) main_mobtv_programe_curr_pane_t1

0xe057,	// (0x0005534e) main_mobtv_programe_curr_pane_t2

0x0001,

0x008c,	// (0x00047383) main_mobtv_programe_curr_pane_t

0xe065,	// (0x0005535c) main_mobtv_programe_next_pane_t1

0xe073,	// (0x0005536a) main_mobtv_programe_next_pane_t2

0xe081,	// (0x00055378) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5e,	// (0x00056f55) main_mobtv_programe_next_pane_t

0xde02,	// (0x000550f9) bg_popup_mobtv_noti_window_pane

0xe08f,	// (0x00055386) popup_mobtv_noti_window_g1

0xe097,	// (0x0005538e) popup_mobtv_noti_window_t1

0xe0a5,	// (0x0005539c) popup_mobtv_noti_window_t2

0x0001,

0xfc65,	// (0x00056f5c) popup_mobtv_noti_window_t

0xc01d,	// (0x00053314) bg_popup_mobtv_noti_window_pane_g1

0xde02,	// (0x000550f9) sc_clock_pane

0xde02,	// (0x000550f9) main_fs_bigclock_pane

0x9540,	// (0x00050837) blid2_tripm_pane_t4_ParamLimits

0x9540,	// (0x00050837) blid2_tripm_pane_t4

0x9dcc,	// (0x000510c3) sc_clock_pane_g1_ParamLimits

0x9dcc,	// (0x000510c3) sc_clock_pane_g1

0x9dde,	// (0x000510d5) sc_clock_pane_t1_ParamLimits

0x9dde,	// (0x000510d5) sc_clock_pane_t1

0x9e00,	// (0x000510f7) sc_clock_pane_t2_ParamLimits

0x9e00,	// (0x000510f7) sc_clock_pane_t2

0x9e18,	// (0x0005110f) sc_clock_pane_t3_ParamLimits

0x9e18,	// (0x0005110f) sc_clock_pane_t3

0x0004,

0xfc6a,	// (0x00056f61) sc_clock_pane_t_ParamLimits

0xfc6a,	// (0x00056f61) sc_clock_pane_t

0xa7b7,	// (0x00051aae) main_fs_bigclock_indicator_pane_ParamLimits

0xa7b7,	// (0x00051aae) main_fs_bigclock_indicator_pane

0xc259,	// (0x00053550) main_fs_bigclock_pane_g1_ParamLimits

0xc259,	// (0x00053550) main_fs_bigclock_pane_g1

0xa7c3,	// (0x00051aba) main_fs_bigclock_pane_t1_ParamLimits

0xa7c3,	// (0x00051aba) main_fs_bigclock_pane_t1

0xa7d5,	// (0x00051acc) main_fs_bigclock_pane_t2_ParamLimits

0xa7d5,	// (0x00051acc) main_fs_bigclock_pane_t2

0xa7e9,	// (0x00051ae0) main_fs_bigclock_pane_t3_ParamLimits

0xa7e9,	// (0x00051ae0) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x00057165) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x00057165) main_fs_bigclock_pane_t

0xe88d,	// (0x00055b84) main_fs_bigclock_indicator_pane_g1

0xdd41,	// (0x00055038) ncim_query_content_pane_g2_ParamLimits

0xdd41,	// (0x00055038) ncim_query_content_pane_g2

0x0001,

0xfbfc,	// (0x00056ef3) ncim_query_content_pane_g_ParamLimits

0xfbfc,	// (0x00056ef3) ncim_query_content_pane_g

0x9e31,	// (0x00051128) sc_clock_pane_t4_ParamLimits

0x9e31,	// (0x00051128) sc_clock_pane_t4

0x13ca,	// (0x000486c1) main_radioblah_pane

0xcc8d,	// (0x00053f84) cell_call4_button_pane_t1_copy1_ParamLimits

0xcc8d,	// (0x00053f84) cell_call4_button_pane_t1_copy1

0x9a6d,	// (0x00050d64) main_ncimui_pane_t1_ParamLimits

0x9a6d,	// (0x00050d64) main_ncimui_pane_t1

0x9a87,	// (0x00050d7e) main_ncimui_pane_t2_ParamLimits

0x9a87,	// (0x00050d7e) main_ncimui_pane_t2

0x0002,

0xfbf5,	// (0x00056eec) main_ncimui_pane_t_ParamLimits

0xfbf5,	// (0x00056eec) main_ncimui_pane_t

0xe1df,	// (0x000554d6) main_radioblah_anim_pane_ParamLimits

0xe1df,	// (0x000554d6) main_radioblah_anim_pane

0xe1f0,	// (0x000554e7) main_radioblah_info_pane_ParamLimits

0xe1f0,	// (0x000554e7) main_radioblah_info_pane

0xe204,	// (0x000554fb) main_radioblah_pane_t1_ParamLimits

0xe204,	// (0x000554fb) main_radioblah_pane_t1

0xe220,	// (0x00055517) main_radioblah_pane_t2_ParamLimits

0xe220,	// (0x00055517) main_radioblah_pane_t2

0x0003,

0xfc8b,	// (0x00056f82) main_radioblah_pane_t_ParamLimits

0xfc8b,	// (0x00056f82) main_radioblah_pane_t

0x9ee7,	// (0x000511de) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9ee7,	// (0x000511de) main_radioblah_rocker_ctrl_pane

0xe268,	// (0x0005555f) main_radioblah_info_pane_t1_ParamLimits

0xe268,	// (0x0005555f) main_radioblah_info_pane_t1

0x9f3f,	// (0x00051236) main_radioblah_info_pane_t2_ParamLimits

0x9f3f,	// (0x00051236) main_radioblah_info_pane_t2

0x0003,

0xfc94,	// (0x00056f8b) main_radioblah_info_pane_t_ParamLimits

0xfc94,	// (0x00056f8b) main_radioblah_info_pane_t

0xc01d,	// (0x00053314) main_radioblah_rocker_ctrl_pane_g1

0x9fef,	// (0x000512e6) main_radioblah_rocker_ctrl_pane_g2

0x9ff7,	// (0x000512ee) main_radioblah_rocker_ctrl_pane_g3

0x9fff,	// (0x000512f6) main_radioblah_rocker_ctrl_pane_g4

0xa007,	// (0x000512fe) main_radioblah_rocker_ctrl_pane_g5

0xa00f,	// (0x00051306) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9d,	// (0x00056f94) main_radioblah_rocker_ctrl_pane_g

0x97ef,	// (0x00050ae6) main_cset_text2_pane_t1_copy1_ParamLimits

0xcd17,	// (0x0005400e) cam4_image_uncrop_qvga_pane

0xcd70,	// (0x00054067) vid4_image_uncrop_qcif_pane

0xcfc6,	// (0x000542bd) cam6_image_uncrop_qvga_pane_ParamLimits

0xcfc6,	// (0x000542bd) cam6_image_uncrop_qvga_pane

0xda56,	// (0x00054d4d) vid6_image_uncrop_qcif_pane_ParamLimits

0xda56,	// (0x00054d4d) vid6_image_uncrop_qcif_pane

0xde02,	// (0x000550f9) bg_popup_preview_window_pane_cp03

0xdcf3,	// (0x00054fea) list_cset_text2_pane

0xdcfb,	// (0x00054ff2) main_cset6_text2_pane_g1

0xdd03,	// (0x00054ffa) main_cset6_text2_pane_t1

0xa017,	// (0x0005130e) list_cset_text2_pane_t1_ParamLimits

0xa017,	// (0x0005130e) list_cset_text2_pane_t1

0x13ca,	// (0x000486c1) main_radioblah_pane_ParamLimits

0x9d65,	// (0x0005105c) main_mobtv_info_pane_t3_ParamLimits

0x9d65,	// (0x0005105c) main_mobtv_info_pane_t3

0x9ed5,	// (0x000511cc) main_radioblah_pane_g1

0x9f0f,	// (0x00051206) main_radioblah_info_pane_g1

0x9f94,	// (0x0005128b) main_radioblah_info_pane_t3_ParamLimits

0x9f94,	// (0x0005128b) main_radioblah_info_pane_t3

0x3a2e,	// (0x0004ad25) highlight_cell_cale_month_pane_ParamLimits

0x3a2e,	// (0x0004ad25) highlight_cell_cale_month_pane

0xde02,	// (0x000550f9) main_phob_fisheye_pane

0xc3cd,	// (0x000536c4) scroll_pane_cp0031_ParamLimits

0xc3cd,	// (0x000536c4) scroll_pane_cp0031

0xdb64,	// (0x00054e5b) wait_bar_pane_cp08_ParamLimits

0x9874,	// (0x00050b6b) cset_list_set_pane_copy1_ParamLimits

0xe2a2,	// (0x00055599) highlight_cell_cale_month_pane_g1

0xa030,	// (0x00051327) highlight_cell_cale_month_pane_t1

0xd7d5,	// (0x00054acc) list_gen_pane_cp01

0xd433,	// (0x0005472a) scroll_pane_01

0xa03e,	// (0x00051335) list_single_double_fisheye_pane

0x0a28,	// (0x00047d1f) list_double_fisheye_pane_g1_ParamLimits

0x0a28,	// (0x00047d1f) list_double_fisheye_pane_g1

0x0a34,	// (0x00047d2b) list_double_fisheye_pane_g2_ParamLimits

0x0a34,	// (0x00047d2b) list_double_fisheye_pane_g2

0xa047,	// (0x0005133e) list_double_fisheye_pane_g3_ParamLimits

0xa047,	// (0x0005133e) list_double_fisheye_pane_g3

0x0004,

0xfcaa,	// (0x00056fa1) list_double_fisheye_pane_g_ParamLimits

0xfcaa,	// (0x00056fa1) list_double_fisheye_pane_g

0x0a65,	// (0x00047d5c) list_double_fisheye_pane_t1_ParamLimits

0x0a65,	// (0x00047d5c) list_double_fisheye_pane_t1

0x0a80,	// (0x00047d77) list_double_fisheye_pane_t2_ParamLimits

0x0a80,	// (0x00047d77) list_double_fisheye_pane_t2

0x0001,

0xfcb5,	// (0x00056fac) list_double_fisheye_pane_t_ParamLimits

0xfcb5,	// (0x00056fac) list_double_fisheye_pane_t

0xde02,	// (0x000550f9) main_call5_pane

0x9e5c,	// (0x00051153) sc_swipe_pane_ParamLimits

0x9e5c,	// (0x00051153) sc_swipe_pane

0xa066,	// (0x0005135d) call5_image_pane_ParamLimits

0xa066,	// (0x0005135d) call5_image_pane

0xa083,	// (0x0005137a) call5_swipe_1_pane_ParamLimits

0xa083,	// (0x0005137a) call5_swipe_1_pane

0xa096,	// (0x0005138d) call5_swipe_2_pane_ParamLimits

0xa096,	// (0x0005138d) call5_swipe_2_pane

0xa0c1,	// (0x000513b8) popup_call5_audio_first_window_ParamLimits

0xa0c1,	// (0x000513b8) popup_call5_audio_first_window

0xc289,	// (0x00053580) call5_swipe_1_pane_g1_ParamLimits

0xc289,	// (0x00053580) call5_swipe_1_pane_g1

0xe2aa,	// (0x000555a1) call5_swipe_1_pane_g2_ParamLimits

0xe2aa,	// (0x000555a1) call5_swipe_1_pane_g2

0x0001,

0xfcba,	// (0x00056fb1) call5_swipe_1_pane_g_ParamLimits

0xfcba,	// (0x00056fb1) call5_swipe_1_pane_g

0xe2b6,	// (0x000555ad) call5_swipe_1_pane_t1_ParamLimits

0xe2b6,	// (0x000555ad) call5_swipe_1_pane_t1

0xc289,	// (0x00053580) call5_swipe_2_pane_g1_ParamLimits

0xc289,	// (0x00053580) call5_swipe_2_pane_g1

0xe2cb,	// (0x000555c2) call5_swipe_2_pane_g2_ParamLimits

0xe2cb,	// (0x000555c2) call5_swipe_2_pane_g2

0x0001,

0xfcbf,	// (0x00056fb6) call5_swipe_2_pane_g_ParamLimits

0xfcbf,	// (0x00056fb6) call5_swipe_2_pane_g

0xe2d7,	// (0x000555ce) call5_swipe_2_pane_t1_ParamLimits

0xe2d7,	// (0x000555ce) call5_swipe_2_pane_t1

0xe2ec,	// (0x000555e3) sc_swipe_pane_g1_ParamLimits

0xe2ec,	// (0x000555e3) sc_swipe_pane_g1

0xe2f9,	// (0x000555f0) sc_swipe_pane_g2_ParamLimits

0xe2f9,	// (0x000555f0) sc_swipe_pane_g2

0x0001,

0xfcc4,	// (0x00056fbb) sc_swipe_pane_g_ParamLimits

0xfcc4,	// (0x00056fbb) sc_swipe_pane_g

0xe305,	// (0x000555fc) sc_swipe_pane_t1_ParamLimits

0xe305,	// (0x000555fc) sc_swipe_pane_t1

0xde02,	// (0x000550f9) main_cmail_launcher_pane

0xa0d2,	// (0x000513c9) aid_size_cell_cmail_l_ParamLimits

0xa0d2,	// (0x000513c9) aid_size_cell_cmail_l

0xa0ec,	// (0x000513e3) grid_cmail_l_pane_ParamLimits

0xa0ec,	// (0x000513e3) grid_cmail_l_pane

0xa107,	// (0x000513fe) cell_cmail_l_pane_ParamLimits

0xa107,	// (0x000513fe) cell_cmail_l_pane

0xa12d,	// (0x00051424) cell_cmail_l_pane_g1_ParamLimits

0xa12d,	// (0x00051424) cell_cmail_l_pane_g1

0xa139,	// (0x00051430) cell_cmail_l_pane_t1_ParamLimits

0xa139,	// (0x00051430) cell_cmail_l_pane_t1

0xe31a,	// (0x00055611) cell_cmail_l_pane_t2_ParamLimits

0xe31a,	// (0x00055611) cell_cmail_l_pane_t2

0x0001,

0xfcc9,	// (0x00056fc0) cell_cmail_l_pane_t_ParamLimits

0xfcc9,	// (0x00056fc0) cell_cmail_l_pane_t

0x13ca,	// (0x000486c1) grid_highlight_pane_cp018_ParamLimits

0x13ca,	// (0x000486c1) grid_highlight_pane_cp018

0x126f,	// (0x00048566) main2_pane_ParamLimits

0x126f,	// (0x00048566) main2_pane

0x1cac,	// (0x00048fa3) popup_sp_fs_action_menu_bg_pane_g1

0x1cb4,	// (0x00048fab) popup_sp_fs_action_menu_bg_pane_g2

0x1cbc,	// (0x00048fb3) popup_sp_fs_action_menu_bg_pane_g3

0x1cc4,	// (0x00048fbb) popup_sp_fs_action_menu_bg_pane_g4

0x1ccc,	// (0x00048fc3) popup_sp_fs_action_menu_bg_pane_g5

0x1cd4,	// (0x00048fcb) popup_sp_fs_action_menu_bg_pane_g6

0x1cdc,	// (0x00048fd3) popup_sp_fs_action_menu_bg_pane_g7

0x1ce4,	// (0x00048fdb) popup_sp_fs_action_menu_bg_pane_g8

0x1cec,	// (0x00048fe3) popup_sp_fs_action_menu_bg_pane_g9

0x1cf4,	// (0x00048feb) popup_sp_fs_action_menu_bg_pane_g10

0x1cf4,	// (0x00048feb) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x0005648a) popup_sp_fs_action_menu_bg_pane_g

0x0397,	// (0x0004768e) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0397,	// (0x0004768e) list_medium_line_x2_t3_g3_g1

0x03a3,	// (0x0004769a) list_medium_line_x2_t3_g3_g2_ParamLimits

0x03a3,	// (0x0004769a) list_medium_line_x2_t3_g3_g2

0x03af,	// (0x000476a6) list_medium_line_x2_t3_g3_g3_ParamLimits

0x03af,	// (0x000476a6) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x0005653a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x0005653a) list_medium_line_x2_t3_g3_g

0x03bb,	// (0x000476b2) list_medium_line_x2_t3_g3_t1_ParamLimits

0x03bb,	// (0x000476b2) list_medium_line_x2_t3_g3_t1

0x03d0,	// (0x000476c7) list_medium_line_x2_t3_g3_t2_ParamLimits

0x03d0,	// (0x000476c7) list_medium_line_x2_t3_g3_t2

0x03e4,	// (0x000476db) list_medium_line_x2_t3_g3_t3_ParamLimits

0x03e4,	// (0x000476db) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x00056541) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x00056541) list_medium_line_x2_t3_g3_t

0x0397,	// (0x0004768e) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0397,	// (0x0004768e) list_medium_line_x2_t3_g2_g1

0x03af,	// (0x000476a6) list_medium_line_x2_t3_g2_g2_ParamLimits

0x03af,	// (0x000476a6) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x00056548) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x00056548) list_medium_line_x2_t3_g2_g

0x03f9,	// (0x000476f0) list_medium_line_x2_t3_g2_t1_ParamLimits

0x03f9,	// (0x000476f0) list_medium_line_x2_t3_g2_t1

0x040f,	// (0x00047706) list_medium_line_x2_t3_g2_t2_ParamLimits

0x040f,	// (0x00047706) list_medium_line_x2_t3_g2_t2

0x03e4,	// (0x000476db) list_medium_line_x2_t3_g2_t3_ParamLimits

0x03e4,	// (0x000476db) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x0005654d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x0005654d) list_medium_line_x2_t3_g2_t

0x0397,	// (0x0004768e) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0397,	// (0x0004768e) list_medium_line_x2_t4_g4_g1

0x0421,	// (0x00047718) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0421,	// (0x00047718) list_medium_line_x2_t4_g4_g2

0x03a3,	// (0x0004769a) list_medium_line_x2_t4_g4_g3_ParamLimits

0x03a3,	// (0x0004769a) list_medium_line_x2_t4_g4_g3

0x042d,	// (0x00047724) list_medium_line_x2_t4_g4_g4_ParamLimits

0x042d,	// (0x00047724) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x00056554) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x00056554) list_medium_line_x2_t4_g4_g

0x0439,	// (0x00047730) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0439,	// (0x00047730) list_medium_line_x2_t4_g4_t1

0x0453,	// (0x0004774a) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0453,	// (0x0004774a) list_medium_line_x2_t4_g4_t2

0x0469,	// (0x00047760) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0469,	// (0x00047760) list_medium_line_x2_t4_g4_t3

0x047e,	// (0x00047775) list_medium_line_x2_t4_g4_t4_ParamLimits

0x047e,	// (0x00047775) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x0005655d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x0005655d) list_medium_line_x2_t4_g4_t

0x0397,	// (0x0004768e) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0397,	// (0x0004768e) list_medium_line_x2_t2_g4_g1

0x0421,	// (0x00047718) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0421,	// (0x00047718) list_medium_line_x2_t2_g4_g2

0x03a3,	// (0x0004769a) list_medium_line_x2_t2_g4_g3_ParamLimits

0x03a3,	// (0x0004769a) list_medium_line_x2_t2_g4_g3

0x03af,	// (0x000476a6) list_medium_line_x2_t2_g4_g4_ParamLimits

0x03af,	// (0x000476a6) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x000565c4) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x000565c4) list_medium_line_x2_t2_g4_g

0x0490,	// (0x00047787) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0490,	// (0x00047787) list_medium_line_x2_t2_g4_t1

0x03e4,	// (0x000476db) list_medium_line_x2_t2_g4_t2_ParamLimits

0x03e4,	// (0x000476db) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x000565cd) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x000565cd) list_medium_line_x2_t2_g4_t

0x0397,	// (0x0004768e) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0397,	// (0x0004768e) list_medium_line_x2_t2_g3_g1

0x03a3,	// (0x0004769a) list_medium_line_x2_t2_g3_g2_ParamLimits

0x03a3,	// (0x0004769a) list_medium_line_x2_t2_g3_g2

0x03af,	// (0x000476a6) list_medium_line_x2_t2_g3_g3_ParamLimits

0x03af,	// (0x000476a6) list_medium_line_x2_t2_g3_g3

0x0002,

0xf243,	// (0x0005653a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf243,	// (0x0005653a) list_medium_line_x2_t2_g3_g

0x04a5,	// (0x0004779c) list_medium_line_x2_t2_g3_t1_ParamLimits

0x04a5,	// (0x0004779c) list_medium_line_x2_t2_g3_t1

0x03e4,	// (0x000476db) list_medium_line_x2_t2_g3_t2_ParamLimits

0x03e4,	// (0x000476db) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2db,	// (0x000565d2) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2db,	// (0x000565d2) list_medium_line_x2_t2_g3_t

0x3da9,	// (0x0004b0a0) main_sp_fs_list_pane_ParamLimits

0x3da9,	// (0x0004b0a0) main_sp_fs_list_pane

0xde0c,	// (0x00055103) sp_fs_scroll_pane_ParamLimits

0xde0c,	// (0x00055103) sp_fs_scroll_pane

0x04ba,	// (0x000477b1) list_medium_line_x2_t3_t1

0x04ca,	// (0x000477c1) list_medium_line_x2_t3_t2

0x04d8,	// (0x000477cf) list_medium_line_x2_t3_t3

0x0002,

0xf326,	// (0x0005661d) list_medium_line_x2_t3_t

0x04e6,	// (0x000477dd) list_medium_line_x3_t4_t1

0x04f6,	// (0x000477ed) list_medium_line_x3_t4_t2

0x0504,	// (0x000477fb) list_medium_line_x3_t4_t3

0x04d8,	// (0x000477cf) list_medium_line_x3_t4_t4

0x0003,

0xf32d,	// (0x00056624) list_medium_line_x3_t4_t

0x0512,	// (0x00047809) list_medium_line_x4_t5_t1

0x0522,	// (0x00047819) list_medium_line_x4_t5_t2

0x0504,	// (0x000477fb) list_medium_line_x4_t5_t3

0x0530,	// (0x00047827) list_medium_line_x4_t5_t4

0x04d8,	// (0x000477cf) list_medium_line_x4_t5_t5

0x0004,

0xf336,	// (0x0005662d) list_medium_line_x4_t5_t

0x0397,	// (0x0004768e) list_medium_line_t4_g4_g1_ParamLimits

0x0397,	// (0x0004768e) list_medium_line_t4_g4_g1

0x042d,	// (0x00047724) list_medium_line_t4_g4_g2_ParamLimits

0x042d,	// (0x00047724) list_medium_line_t4_g4_g2

0x053e,	// (0x00047835) list_medium_line_t4_g4_g3_ParamLimits

0x053e,	// (0x00047835) list_medium_line_t4_g4_g3

0x03af,	// (0x000476a6) list_medium_line_t4_g4_g4_ParamLimits

0x03af,	// (0x000476a6) list_medium_line_t4_g4_g4

0x0003,

0xf341,	// (0x00056638) list_medium_line_t4_g4_g_ParamLimits

0xf341,	// (0x00056638) list_medium_line_t4_g4_g

0x054a,	// (0x00047841) list_medium_line_t4_g4_t1_ParamLimits

0x054a,	// (0x00047841) list_medium_line_t4_g4_t1

0x055f,	// (0x00047856) list_medium_line_t4_g4_t2_ParamLimits

0x055f,	// (0x00047856) list_medium_line_t4_g4_t2

0x0574,	// (0x0004786b) list_medium_line_t4_g4_t3_ParamLimits

0x0574,	// (0x0004786b) list_medium_line_t4_g4_t3

0x03e4,	// (0x000476db) list_medium_line_t4_g4_t4_ParamLimits

0x03e4,	// (0x000476db) list_medium_line_t4_g4_t4

0x0003,

0xf34a,	// (0x00056641) list_medium_line_t4_g4_t_ParamLimits

0xf34a,	// (0x00056641) list_medium_line_t4_g4_t

0x40ea,	// (0x0004b3e1) chi_dic_find_pane_g1

0x5fc5,	// (0x0004d2bc) main_tport_pane

0x074e,	// (0x00047a45) list_medium_line_plain_t1

0x075c,	// (0x00047a53) list_medium_line_t2_g2_g1_ParamLimits

0x075c,	// (0x00047a53) list_medium_line_t2_g2_g1

0x0768,	// (0x00047a5f) list_medium_line_t2_g2_g2_ParamLimits

0x0768,	// (0x00047a5f) list_medium_line_t2_g2_g2

0x0001,

0xfa06,	// (0x00056cfd) list_medium_line_t2_g2_g_ParamLimits

0xfa06,	// (0x00056cfd) list_medium_line_t2_g2_g

0x0774,	// (0x00047a6b) list_medium_line_t2_g2_t1_ParamLimits

0x0774,	// (0x00047a6b) list_medium_line_t2_g2_t1

0x078e,	// (0x00047a85) list_medium_line_t2_g2_t2_ParamLimits

0x078e,	// (0x00047a85) list_medium_line_t2_g2_t2

0x0001,

0xfa0b,	// (0x00056d02) list_medium_line_t2_g2_t_ParamLimits

0xfa0b,	// (0x00056d02) list_medium_line_t2_g2_t

0xcfad,	// (0x000542a4) aid_sp_fs_list_icon_a_sm

0xcfb5,	// (0x000542ac) aid_sp_fs_list_icon_d

0xcfbd,	// (0x000542b4) aid_sp_fs_text_primary

0xd7de,	// (0x00054ad5) aid_sp_fs_text_secondary

0x9301,	// (0x000505f8) list_medium_line

0x9301,	// (0x000505f8) list_medium_line_g2

0x9301,	// (0x000505f8) list_medium_line_g3

0x9301,	// (0x000505f8) list_medium_line_plain

0x9301,	// (0x000505f8) list_medium_line_plain_t2

0x9301,	// (0x000505f8) list_medium_line_plain_t3

0x9301,	// (0x000505f8) list_medium_line_right_icon

0x9301,	// (0x000505f8) list_medium_line_right_iconx2

0x9301,	// (0x000505f8) list_medium_line_t2

0x9301,	// (0x000505f8) list_medium_line_t2_g2

0x9301,	// (0x000505f8) list_medium_line_t2_g3

0x9301,	// (0x000505f8) list_medium_line_t2_right_icon

0x9301,	// (0x000505f8) list_medium_line_t2_right_iconx2

0x9301,	// (0x000505f8) list_medium_line_t3

0x9301,	// (0x000505f8) list_medium_line_t3_g2

0x9301,	// (0x000505f8) list_medium_line_t3_g3

0x9301,	// (0x000505f8) list_medium_line_t3_right_iconx2

0x930a,	// (0x00050601) list_medium_line_t4_g4

0x9313,	// (0x0005060a) list_medium_line_x2

0x9313,	// (0x0005060a) list_medium_line_x2_t2_g2

0x9313,	// (0x0005060a) list_medium_line_x2_t2_g3

0x9313,	// (0x0005060a) list_medium_line_x2_t2_g4

0x9313,	// (0x0005060a) list_medium_line_x2_t3

0x9313,	// (0x0005060a) list_medium_line_x2_t3_g2

0x9313,	// (0x0005060a) list_medium_line_x2_t3_g3

0x9313,	// (0x0005060a) list_medium_line_x2_t3_g4

0x9313,	// (0x0005060a) list_medium_line_x2_t4_g2

0x9313,	// (0x0005060a) list_medium_line_x2_t4_g4

0x931c,	// (0x00050613) list_medium_line_x3

0x931c,	// (0x00050613) list_medium_line_x3_t4

0x931c,	// (0x00050613) list_medium_line_x3_t4_g4

0x930a,	// (0x00050601) list_medium_line_x4_t4

0x930a,	// (0x00050601) list_medium_line_x4_t4_g7

0x930a,	// (0x00050601) list_medium_line_x4_t5

0x0917,	// (0x00047c0e) list_single_fs_dyc_pane_ParamLimits

0x0917,	// (0x00047c0e) list_single_fs_dyc_pane

0x0397,	// (0x0004768e) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0397,	// (0x0004768e) list_medium_line_x4_t4_g7_g1

0x0957,	// (0x00047c4e) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0957,	// (0x00047c4e) list_medium_line_x4_t4_g7_g2

0x0963,	// (0x00047c5a) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0963,	// (0x00047c5a) list_medium_line_x4_t4_g7_g3

0x0972,	// (0x00047c69) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0972,	// (0x00047c69) list_medium_line_x4_t4_g7_g4

0x097e,	// (0x00047c75) list_medium_line_x4_t4_g7_g5_ParamLimits

0x097e,	// (0x00047c75) list_medium_line_x4_t4_g7_g5

0x098d,	// (0x00047c84) list_medium_line_x4_t4_g7_g6_ParamLimits

0x098d,	// (0x00047c84) list_medium_line_x4_t4_g7_g6

0x099c,	// (0x00047c93) list_medium_line_x4_t4_g7_g7_ParamLimits

0x099c,	// (0x00047c93) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd6,	// (0x00056ecd) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd6,	// (0x00056ecd) list_medium_line_x4_t4_g7_g

0x09a8,	// (0x00047c9f) list_medium_line_x4_t4_g7_t1_ParamLimits

0x09a8,	// (0x00047c9f) list_medium_line_x4_t4_g7_t1

0x09bd,	// (0x00047cb4) list_medium_line_x4_t4_g7_t2_ParamLimits

0x09bd,	// (0x00047cb4) list_medium_line_x4_t4_g7_t2

0x09d2,	// (0x00047cc9) list_medium_line_x4_t4_g7_t3_ParamLimits

0x09d2,	// (0x00047cc9) list_medium_line_x4_t4_g7_t3

0x09e7,	// (0x00047cde) list_medium_line_x4_t4_g7_t4_ParamLimits

0x09e7,	// (0x00047cde) list_medium_line_x4_t4_g7_t4

0x09f9,	// (0x00047cf0) list_medium_line_x4_t4_g7_t5_ParamLimits

0x09f9,	// (0x00047cf0) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe5,	// (0x00056edc) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe5,	// (0x00056edc) list_medium_line_x4_t4_g7_t

0x0a0b,	// (0x00047d02) list_single_dyc_row_pane_ParamLimits

0x0a0b,	// (0x00047d02) list_single_dyc_row_pane

0xa053,	// (0x0005134a) call5_gesture_pane_ParamLimits

0xa053,	// (0x0005134a) call5_gesture_pane

0xa0a9,	// (0x000513a0) call5_windows_pane_ParamLimits

0xa0a9,	// (0x000513a0) call5_windows_pane

0xa14f,	// (0x00051446) call5_swipe_1_pane_cp_ParamLimits

0xa14f,	// (0x00051446) call5_swipe_1_pane_cp

0xa15b,	// (0x00051452) call5_swipe_2_pane_cp_ParamLimits

0xa15b,	// (0x00051452) call5_swipe_2_pane_cp

0x4566,	// (0x0004b85d) call5_image_pane_cp

0xa167,	// (0x0005145e) popup_call5_audio_first_window_cp_ParamLimits

0xa167,	// (0x0005145e) popup_call5_audio_first_window_cp

0xe2ec,	// (0x000555e3) call5_swipe_1_pane_g1_cp_ParamLimits

0xe2ec,	// (0x000555e3) call5_swipe_1_pane_g1_cp

0xe32c,	// (0x00055623) call5_swipe_1_pane_g2_cp

0xe305,	// (0x000555fc) call5_swipe_1_pane_t1_cp_ParamLimits

0xe305,	// (0x000555fc) call5_swipe_1_pane_t1_cp

0xe2ec,	// (0x000555e3) call5_swipe_2_pane_g1_cp_ParamLimits

0xe2ec,	// (0x000555e3) call5_swipe_2_pane_g1_cp

0xe334,	// (0x0005562b) call5_swipe_2_pane_g2_cp

0xe33c,	// (0x00055633) call5_swipe_2_pane_t1_cp_ParamLimits

0xe33c,	// (0x00055633) call5_swipe_2_pane_t1_cp

0x13ca,	// (0x000486c1) main_sp_fs_email_pane

0xe351,	// (0x00055648) main_sp_fs_listscroll_pane_te

0xa175,	// (0x0005146c) popup_sp_fs_action_menu_pane_ParamLimits

0xa175,	// (0x0005146c) popup_sp_fs_action_menu_pane

0xc01d,	// (0x00053314) bg_sp_fs_ctrlbar_pane_g1

0xe35a,	// (0x00055651) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe363,	// (0x0005565a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe36c,	// (0x00055663) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc01d,	// (0x00053314) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcce,	// (0x00056fc5) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbe02,	// (0x000530f9) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbe02,	// (0x000530f9) bg_sp_fs_ctrlbar_ddmenu_pane

0xe375,	// (0x0005566c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe375,	// (0x0005566c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe381,	// (0x00055678) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe381,	// (0x00055678) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd7,	// (0x00056fce) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd7,	// (0x00056fce) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe38d,	// (0x00055684) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe38d,	// (0x00055684) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0aa2,	// (0x00047d99) list_medium_line_t2_right_icon_g1

0x0aaa,	// (0x00047da1) list_medium_line_t2_right_icon_t1

0x0aba,	// (0x00047db1) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdc,	// (0x00056fd3) list_medium_line_t2_right_icon_t

0xbb02,	// (0x00052df9) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbb02,	// (0x00052df9) bg_sp_fs_ctrlbar_pane

0xa201,	// (0x000514f8) main_sp_fs_ctrlbar_button_pane_cp01

0xa20b,	// (0x00051502) main_sp_fs_ctrlbar_ddmenu_pane

0xe3df,	// (0x000556d6) main_sp_fs_ctrlbar_pane_g1

0xe3eb,	// (0x000556e2) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce1,	// (0x00056fd8) main_sp_fs_ctrlbar_pane_g

0xe3f7,	// (0x000556ee) main_sp_fs_ctrlbar_pane_t1

0xa215,	// (0x0005150c) main_sp_fs_ctrlbar_pane

0xa239,	// (0x00051530) main_sp_fs_listscroll_pane_te_cp01

0x0acc,	// (0x00047dc3) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0acc,	// (0x00047dc3) popup_sp_fs_action_menu_pane_cp01

0x13ca,	// (0x000486c1) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x13ca,	// (0x000486c1) bg_sp_fs_highlight_list_pane_cp01

0xcfd4,	// (0x000542cb) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xcfd4,	// (0x000542cb) sp_fs_action_menu_list_gene_pane_g1

0xe427,	// (0x0005571e) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe427,	// (0x0005571e) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfceb,	// (0x00056fe2) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfceb,	// (0x00056fe2) sp_fs_action_menu_list_gene_pane_g

0xcfe3,	// (0x000542da) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xcfe3,	// (0x000542da) sp_fs_action_menu_list_gene_pane_t1

0xcffb,	// (0x000542f2) sp_fs_action_menu_list_gene_pane_ParamLimits

0xcffb,	// (0x000542f2) sp_fs_action_menu_list_gene_pane

0xe434,	// (0x0005572b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe434,	// (0x0005572b) popup_sp_fs_action_menu_bg_pane

0xd01a,	// (0x00054311) sp_fs_action_menu_list_pane_ParamLimits

0xd01a,	// (0x00054311) sp_fs_action_menu_list_pane

0xa259,	// (0x00051550) sp_fs_scroll_pane_cp01_ParamLimits

0xa259,	// (0x00051550) sp_fs_scroll_pane_cp01

0x0afc,	// (0x00047df3) list_medium_line_plain_t2_t1

0x0b0c,	// (0x00047e03) list_medium_line_plain_t2_t2

0x0001,

0xfcf0,	// (0x00056fe7) list_medium_line_plain_t2_t

0x0b1c,	// (0x00047e13) list_medium_line_plain_t3_t1

0x0b2c,	// (0x00047e23) list_medium_line_plain_t3_t2

0x0b3a,	// (0x00047e31) list_medium_line_plain_t3_t3

0x0002,

0xfcf5,	// (0x00056fec) list_medium_line_plain_t3_t

0x0397,	// (0x0004768e) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0397,	// (0x0004768e) list_medium_line_x2_t2_g2_g1

0x03af,	// (0x000476a6) list_medium_line_x2_t2_g2_g2_ParamLimits

0x03af,	// (0x000476a6) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x00056548) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x00056548) list_medium_line_x2_t2_g2_g

0x054a,	// (0x00047841) list_medium_line_x2_t2_g2_t1_ParamLimits

0x054a,	// (0x00047841) list_medium_line_x2_t2_g2_t1

0x03e4,	// (0x000476db) list_medium_line_x2_t2_g2_t2_ParamLimits

0x03e4,	// (0x000476db) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfc,	// (0x00056ff3) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfc,	// (0x00056ff3) list_medium_line_x2_t2_g2_t

0x0397,	// (0x0004768e) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0397,	// (0x0004768e) list_medium_line_x2_t4_g2_g1

0x0b48,	// (0x00047e3f) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0b48,	// (0x00047e3f) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd01,	// (0x00056ff8) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd01,	// (0x00056ff8) list_medium_line_x2_t4_g2_g

0x0b5a,	// (0x00047e51) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0b5a,	// (0x00047e51) list_medium_line_x2_t4_g2_t1

0x0b71,	// (0x00047e68) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0b71,	// (0x00047e68) list_medium_line_x2_t4_g2_t2

0x0b86,	// (0x00047e7d) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0b86,	// (0x00047e7d) list_medium_line_x2_t4_g2_t3

0x03e4,	// (0x000476db) list_medium_line_x2_t4_g2_t4_ParamLimits

0x03e4,	// (0x000476db) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd06,	// (0x00056ffd) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd06,	// (0x00056ffd) list_medium_line_x2_t4_g2_t

0x0b98,	// (0x00047e8f) list_medium_line_t3_right_iconx2_g1

0x0aa2,	// (0x00047d99) list_medium_line_t3_right_iconx2_g2

0x0ba0,	// (0x00047e97) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0f,	// (0x00057006) list_medium_line_t3_right_iconx2_g

0x0baa,	// (0x00047ea1) list_medium_line_t3_right_iconx2_t1

0x0bba,	// (0x00047eb1) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd16,	// (0x0005700d) list_medium_line_t3_right_iconx2_t

0x0397,	// (0x0004768e) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0397,	// (0x0004768e) list_medium_line_x3_t4_g4_g1

0x03a3,	// (0x0004769a) list_medium_line_x3_t4_g4_g2_ParamLimits

0x03a3,	// (0x0004769a) list_medium_line_x3_t4_g4_g2

0x042d,	// (0x00047724) list_medium_line_x3_t4_g4_g3_ParamLimits

0x042d,	// (0x00047724) list_medium_line_x3_t4_g4_g3

0x0bc8,	// (0x00047ebf) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0bc8,	// (0x00047ebf) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1b,	// (0x00057012) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1b,	// (0x00057012) list_medium_line_x3_t4_g4_g

0x0bd4,	// (0x00047ecb) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0bd4,	// (0x00047ecb) list_medium_line_x3_t4_g4_t1

0x0beb,	// (0x00047ee2) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0beb,	// (0x00047ee2) list_medium_line_x3_t4_g4_t2

0x055f,	// (0x00047856) list_medium_line_x3_t4_g4_t3_ParamLimits

0x055f,	// (0x00047856) list_medium_line_x3_t4_g4_t3

0x0c06,	// (0x00047efd) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0c06,	// (0x00047efd) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd24,	// (0x0005701b) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd24,	// (0x0005701b) list_medium_line_x3_t4_g4_t

0x0c23,	// (0x00047f1a) list_single_dyc_row_text_pane_t1_ParamLimits

0x0c23,	// (0x00047f1a) list_single_dyc_row_text_pane_t1

0x0c6c,	// (0x00047f63) list_single_dyc_row_text_pane_t2_ParamLimits

0x0c6c,	// (0x00047f63) list_single_dyc_row_text_pane_t2

0xd03a,	// (0x00054331) list_single_dyc_row_text_pane_t3_ParamLimits

0xd03a,	// (0x00054331) list_single_dyc_row_text_pane_t3

0x0002,

0xfd2d,	// (0x00057024) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2d,	// (0x00057024) list_single_dyc_row_text_pane_t

0xd04c,	// (0x00054343) list_single_dyc_row_pane_g1_ParamLimits

0xd04c,	// (0x00054343) list_single_dyc_row_pane_g1

0xd058,	// (0x0005434f) list_single_dyc_row_pane_g2_ParamLimits

0xd058,	// (0x0005434f) list_single_dyc_row_pane_g2

0xd064,	// (0x0005435b) list_single_dyc_row_pane_g3_ParamLimits

0xd064,	// (0x0005435b) list_single_dyc_row_pane_g3

0xd070,	// (0x00054367) list_single_dyc_row_pane_g4_ParamLimits

0xd070,	// (0x00054367) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0005702b) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0005702b) list_single_dyc_row_pane_g

0xd07c,	// (0x00054373) list_single_dyc_row_text_pane_ParamLimits

0xd07c,	// (0x00054373) list_single_dyc_row_text_pane

0xde02,	// (0x000550f9) bg_sp_fs_scroll_pane

0xe442,	// (0x00055739) thumb_sp_fs_scroll_pane

0x075c,	// (0x00047a53) list_medium_line_g1_ParamLimits

0x075c,	// (0x00047a53) list_medium_line_g1

0x0cc6,	// (0x00047fbd) list_medium_line_t1_ParamLimits

0x0cc6,	// (0x00047fbd) list_medium_line_t1

0x0397,	// (0x0004768e) list_medium_line_x2_g1_ParamLimits

0x0397,	// (0x0004768e) list_medium_line_x2_g1

0x03a3,	// (0x0004769a) list_medium_line_x2_g2_ParamLimits

0x03a3,	// (0x0004769a) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x00057034) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x00057034) list_medium_line_x2_g

0xd09b,	// (0x00054392) list_medium_line_x2_t1_ParamLimits

0xd09b,	// (0x00054392) list_medium_line_x2_t1

0x0397,	// (0x0004768e) list_medium_line_x3_g1_ParamLimits

0x0397,	// (0x0004768e) list_medium_line_x3_g1

0x03a3,	// (0x0004769a) list_medium_line_x3_g2_ParamLimits

0x03a3,	// (0x0004769a) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x00057034) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x00057034) list_medium_line_x3_g

0xd09b,	// (0x00054392) list_medium_line_x3_t1_ParamLimits

0xd09b,	// (0x00054392) list_medium_line_x3_t1

0xe44b,	// (0x00055742) thumb_sp_fs_scroll_pane_g1

0xe454,	// (0x0005574b) thumb_sp_fs_scroll_pane_g2

0xe45d,	// (0x00055754) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x00057039) thumb_sp_fs_scroll_pane_g

0xe44b,	// (0x00055742) bg_sp_fs_scroll_pane_g1

0xe454,	// (0x0005574b) bg_sp_fs_scroll_pane_g2

0xe45d,	// (0x00055754) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x00057039) bg_sp_fs_scroll_pane_g

0x0397,	// (0x0004768e) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0397,	// (0x0004768e) list_medium_line_x2_t3_g4_g1

0x0421,	// (0x00047718) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0421,	// (0x00047718) list_medium_line_x2_t3_g4_g2

0x03a3,	// (0x0004769a) list_medium_line_x2_t3_g4_g3_ParamLimits

0x03a3,	// (0x0004769a) list_medium_line_x2_t3_g4_g3

0x03af,	// (0x000476a6) list_medium_line_x2_t3_g4_g4_ParamLimits

0x03af,	// (0x000476a6) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x000565c4) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x000565c4) list_medium_line_x2_t3_g4_g

0x0cdb,	// (0x00047fd2) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0cdb,	// (0x00047fd2) list_medium_line_x2_t3_g4_t1

0x0cf5,	// (0x00047fec) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0cf5,	// (0x00047fec) list_medium_line_x2_t3_g4_t2

0x03e4,	// (0x000476db) list_medium_line_x2_t3_g4_t3_ParamLimits

0x03e4,	// (0x000476db) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x00057040) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x00057040) list_medium_line_x2_t3_g4_t

0x075c,	// (0x00047a53) list_medium_line_g2_g1_ParamLimits

0x075c,	// (0x00047a53) list_medium_line_g2_g1

0x0768,	// (0x00047a5f) list_medium_line_g2_g2_ParamLimits

0x0768,	// (0x00047a5f) list_medium_line_g2_g2

0x0001,

0xfa06,	// (0x00056cfd) list_medium_line_g2_g_ParamLimits

0xfa06,	// (0x00056cfd) list_medium_line_g2_g

0x0d0f,	// (0x00048006) list_medium_line_g2_t1_ParamLimits

0x0d0f,	// (0x00048006) list_medium_line_g2_t1

0x075c,	// (0x00047a53) list_medium_line_t3_g2_g1_ParamLimits

0x075c,	// (0x00047a53) list_medium_line_t3_g2_g1

0x0768,	// (0x00047a5f) list_medium_line_t3_g2_g2_ParamLimits

0x0768,	// (0x00047a5f) list_medium_line_t3_g2_g2

0x0001,

0xfa06,	// (0x00056cfd) list_medium_line_t3_g2_g_ParamLimits

0xfa06,	// (0x00056cfd) list_medium_line_t3_g2_g

0x0d24,	// (0x0004801b) list_medium_line_t3_g2_t1_ParamLimits

0x0d24,	// (0x0004801b) list_medium_line_t3_g2_t1

0x0d3e,	// (0x00048035) list_medium_line_t3_g2_t2_ParamLimits

0x0d3e,	// (0x00048035) list_medium_line_t3_g2_t2

0x0d53,	// (0x0004804a) list_medium_line_t3_g2_t3_ParamLimits

0x0d53,	// (0x0004804a) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x00057047) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x00057047) list_medium_line_t3_g2_t

0x0aa2,	// (0x00047d99) list_medium_line_right_icon_g1

0x0d6d,	// (0x00048064) list_medium_line_right_icon_t1

0x075c,	// (0x00047a53) list_medium_line_t2_g1_ParamLimits

0x075c,	// (0x00047a53) list_medium_line_t2_g1

0x0d7b,	// (0x00048072) list_medium_line_t2_t1_ParamLimits

0x0d7b,	// (0x00048072) list_medium_line_t2_t1

0x0d95,	// (0x0004808c) list_medium_line_t2_t2_ParamLimits

0x0d95,	// (0x0004808c) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0005704e) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0005704e) list_medium_line_t2_t

0x075c,	// (0x00047a53) list_medium_line_t3_g1_ParamLimits

0x075c,	// (0x00047a53) list_medium_line_t3_g1

0x0dae,	// (0x000480a5) list_medium_line_t3_t1_ParamLimits

0x0dae,	// (0x000480a5) list_medium_line_t3_t1

0x0dc5,	// (0x000480bc) list_medium_line_t3_t2_ParamLimits

0x0dc5,	// (0x000480bc) list_medium_line_t3_t2

0x0dda,	// (0x000480d1) list_medium_line_t3_t3_ParamLimits

0x0dda,	// (0x000480d1) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x00057053) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x00057053) list_medium_line_t3_t

0x075c,	// (0x00047a53) list_medium_line_g3_g1_ParamLimits

0x075c,	// (0x00047a53) list_medium_line_g3_g1

0x0dec,	// (0x000480e3) list_medium_line_g3_g2_ParamLimits

0x0dec,	// (0x000480e3) list_medium_line_g3_g2

0x0768,	// (0x00047a5f) list_medium_line_g3_g3_ParamLimits

0x0768,	// (0x00047a5f) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0005705a) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0005705a) list_medium_line_g3_g

0x0df8,	// (0x000480ef) list_medium_line_g3_t1_ParamLimits

0x0df8,	// (0x000480ef) list_medium_line_g3_t1

0x075c,	// (0x00047a53) list_medium_line_t2_g3_g1_ParamLimits

0x075c,	// (0x00047a53) list_medium_line_t2_g3_g1

0x0dec,	// (0x000480e3) list_medium_line_t2_g3_g2_ParamLimits

0x0dec,	// (0x000480e3) list_medium_line_t2_g3_g2

0x0768,	// (0x00047a5f) list_medium_line_t2_g3_g3_ParamLimits

0x0768,	// (0x00047a5f) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0005705a) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0005705a) list_medium_line_t2_g3_g

0x0e0d,	// (0x00048104) list_medium_line_t2_g3_t1_ParamLimits

0x0e0d,	// (0x00048104) list_medium_line_t2_g3_t1

0x0e27,	// (0x0004811e) list_medium_line_t2_g3_t2_ParamLimits

0x0e27,	// (0x0004811e) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x00057061) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x00057061) list_medium_line_t2_g3_t

0x075c,	// (0x00047a53) list_medium_line_t3_g3_g1_ParamLimits

0x075c,	// (0x00047a53) list_medium_line_t3_g3_g1

0x0dec,	// (0x000480e3) list_medium_line_t3_g3_g2_ParamLimits

0x0dec,	// (0x000480e3) list_medium_line_t3_g3_g2

0x0768,	// (0x00047a5f) list_medium_line_t3_g3_g3_ParamLimits

0x0768,	// (0x00047a5f) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0005705a) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0005705a) list_medium_line_t3_g3_g

0x0e42,	// (0x00048139) list_medium_line_t3_g3_t1_ParamLimits

0x0e42,	// (0x00048139) list_medium_line_t3_g3_t1

0x0e56,	// (0x0004814d) list_medium_line_t3_g3_t2_ParamLimits

0x0e56,	// (0x0004814d) list_medium_line_t3_g3_t2

0x0e68,	// (0x0004815f) list_medium_line_t3_g3_t3_ParamLimits

0x0e68,	// (0x0004815f) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x00057066) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x00057066) list_medium_line_t3_g3_t

0x0b98,	// (0x00047e8f) list_medium_line_right_iconx2_g1

0x0aa2,	// (0x00047d99) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0005706d) list_medium_line_right_iconx2_g

0x0e7c,	// (0x00048173) list_medium_line_right_iconx2_t1

0x0b98,	// (0x00047e8f) list_medium_line_t2_right_iconx2_g1

0x0aa2,	// (0x00047d99) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0005706d) list_medium_line_t2_right_iconx2_g

0x0e8a,	// (0x00048181) list_medium_line_t2_right_iconx2_t1

0x0e9a,	// (0x00048191) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x00057072) list_medium_line_t2_right_iconx2_t

0x0eac,	// (0x000481a3) list_medium_line_x4_t4_t1

0x0eba,	// (0x000481b1) list_medium_line_x4_t4_t2

0x0eca,	// (0x000481c1) list_medium_line_x4_t4_t3

0x0eda,	// (0x000481d1) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x00057077) list_medium_line_x4_t4_t

0xa2c2,	// (0x000515b9) tport_appsw_pane_ParamLimits

0xa2c2,	// (0x000515b9) tport_appsw_pane

0xa2da,	// (0x000515d1) tport_contact_pane_ParamLimits

0xa2da,	// (0x000515d1) tport_contact_pane

0xa2f2,	// (0x000515e9) tport_listscroll_pane_ParamLimits

0xa2f2,	// (0x000515e9) tport_listscroll_pane

0xa30c,	// (0x00051603) cell_tport_appsw_pane_ParamLimits

0xa30c,	// (0x00051603) cell_tport_appsw_pane

0xd2f9,	// (0x000545f0) tport_appsw_pane_g1_ParamLimits

0xd2f9,	// (0x000545f0) tport_appsw_pane_g1

0xe466,	// (0x0005575d) tport_contact_pane_g1

0xddc7,	// (0x000550be) tport_contact_pane_t1

0xe46f,	// (0x00055766) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x00057080) tport_contact_pane_t

0xe47d,	// (0x00055774) list_tport_pane

0xe486,	// (0x0005577d) scroll_pane_cp_030

0xa354,	// (0x0005164b) cell_tport_appsw_pane_g1

0xa364,	// (0x0005165b) cell_tport_appsw_pane_t1

0xde02,	// (0x000550f9) grid_highlight_pane_cp019

0xa372,	// (0x00051669) list_tport_double_graphic_pane_ParamLimits

0xa372,	// (0x00051669) list_tport_double_graphic_pane

0x13ca,	// (0x000486c1) list_highlight_pane_cp023_ParamLimits

0x13ca,	// (0x000486c1) list_highlight_pane_cp023

0xa37f,	// (0x00051676) list_tport_double_graphic_pane_g1_ParamLimits

0xa37f,	// (0x00051676) list_tport_double_graphic_pane_g1

0xa38c,	// (0x00051683) list_tport_double_graphic_pane_t1_ParamLimits

0xa38c,	// (0x00051683) list_tport_double_graphic_pane_t1

0xa3a1,	// (0x00051698) list_tport_double_graphic_pane_t2_ParamLimits

0xa3a1,	// (0x00051698) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0005708c) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0005708c) list_tport_double_graphic_pane_t

0xde02,	// (0x000550f9) main_cale_note_pane

0x8655,	// (0x0004f94c) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8655,	// (0x0004f94c) cell_vitu2_function_top_wide_pane_cp01

0x9d79,	// (0x00051070) wait_bar_pane_cp05_ParamLimits

0x13ca,	// (0x000486c1) listscroll_cmail_pane

0xe48f,	// (0x00055786) list_cmail_pane

0xd527,	// (0x0005481e) list_cmail_body_pane

0xa3b3,	// (0x000516aa) list_single_cmail_header_caption_pane

0xa3c9,	// (0x000516c0) list_single_cmail_header_detail_pane_ParamLimits

0xa3c9,	// (0x000516c0) list_single_cmail_header_detail_pane

0xe49f,	// (0x00055796) list_single_cmail_header_caption_pane_t1

0x0eea,	// (0x000481e1) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0eea,	// (0x000481e1) list_single_cmail_header_detail_pane_g1

0xd0b1,	// (0x000543a8) list_single_cmail_header_detail_pane_g2_ParamLimits

0xd0b1,	// (0x000543a8) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x00057091) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x00057091) list_single_cmail_header_detail_pane_g

0x0f02,	// (0x000481f9) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0f02,	// (0x000481f9) list_single_cmail_header_detail_pane_t1

0x0f40,	// (0x00048237) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0f40,	// (0x00048237) list_single_cmail_header_editor_pane_bg

0xdfa6,	// (0x0005529d) list_cmail_body_pane_g1

0xe4ba,	// (0x000557b1) list_cmail_body_pane_t1

0xd319,	// (0x00054610) list_single_cmail_header_editor_pane_bg_g1

0x2e22,	// (0x0004a119) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd329,	// (0x00054620) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd321,	// (0x00054618) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd558,	// (0x0005484f) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd349,	// (0x00054640) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd339,	// (0x00054630) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd341,	// (0x00054638) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x2e02,	// (0x0004a0f9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa3fd,	// (0x000516f4) calenote_gesture_pane_ParamLimits

0xa3fd,	// (0x000516f4) calenote_gesture_pane

0xa41d,	// (0x00051714) calenote_window_pane_ParamLimits

0xa41d,	// (0x00051714) calenote_window_pane

0xe4c8,	// (0x000557bf) popup_note_window_cp01

0xa439,	// (0x00051730) calenote_swipe_1_pane_ParamLimits

0xa439,	// (0x00051730) calenote_swipe_1_pane

0xa15b,	// (0x00051452) calenote_swipe_2_pane_ParamLimits

0xa15b,	// (0x00051452) calenote_swipe_2_pane

0xe2ec,	// (0x000555e3) calenote_swipe_1_pane_g1_ParamLimits

0xe2ec,	// (0x000555e3) calenote_swipe_1_pane_g1

0xe2f9,	// (0x000555f0) calenote_swipe_1_pane_g2_ParamLimits

0xe2f9,	// (0x000555f0) calenote_swipe_1_pane_g2

0x0001,

0xfcc4,	// (0x00056fbb) calenote_swipe_1_pane_g_ParamLimits

0xfcc4,	// (0x00056fbb) calenote_swipe_1_pane_g

0xe4da,	// (0x000557d1) calenote_swipe_1_pane_t1_ParamLimits

0xe4da,	// (0x000557d1) calenote_swipe_1_pane_t1

0xe2ec,	// (0x000555e3) calenote_swipe_2_pane_g1_ParamLimits

0xe2ec,	// (0x000555e3) calenote_swipe_2_pane_g1

0xe4f9,	// (0x000557f0) calenote_swipe_2_pane_g2_ParamLimits

0xe4f9,	// (0x000557f0) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0005709d) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0005709d) calenote_swipe_2_pane_g

0xe505,	// (0x000557fc) calenote_swipe_2_pane_t1_ParamLimits

0xe505,	// (0x000557fc) calenote_swipe_2_pane_t1

0xde02,	// (0x000550f9) main_mup_navstr_pane

0x7330,	// (0x0004e627) main_mup3_pane_t7_ParamLimits

0x7330,	// (0x0004e627) main_mup3_pane_t7

0xc9ce,	// (0x00053cc5) main_mp4_pane_g6_ParamLimits

0xc9ce,	// (0x00053cc5) main_mp4_pane_g6

0xcbf6,	// (0x00053eed) main_image3_pane_t4_ParamLimits

0xcbf6,	// (0x00053eed) main_image3_pane_t4

0xa44e,	// (0x00051745) popup_navstr_preview_pane_ParamLimits

0xa44e,	// (0x00051745) popup_navstr_preview_pane

0xa462,	// (0x00051759) scroll_navstr_pane_ParamLimits

0xa462,	// (0x00051759) scroll_navstr_pane

0xde02,	// (0x000550f9) bg_popup_preview_window_pane_cp04

0xe52c,	// (0x00055823) popup_navstr_preview_pane_t1

0xa476,	// (0x0005176d) scroll_navstr_pane_g1_ParamLimits

0xa476,	// (0x0005176d) scroll_navstr_pane_g1

0xa48a,	// (0x00051781) scroll_navstr_pane_t1_ParamLimits

0xa48a,	// (0x00051781) scroll_navstr_pane_t1

0xe4d1,	// (0x000557c8) bg_button_pane_cp014

0xe4d1,	// (0x000557c8) bg_button_pane_cp030

0x0a48,	// (0x00047d3f) list_double_fisheye_pane_g4_ParamLimits

0x0a48,	// (0x00047d3f) list_double_fisheye_pane_g4

0x0a54,	// (0x00047d4b) list_double_fisheye_pane_g5_ParamLimits

0x0a54,	// (0x00047d4b) list_double_fisheye_pane_g5

0xde0c,	// (0x00055103) sp_fs_scroll_pane_cp03

0xe3df,	// (0x000556d6) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3eb,	// (0x000556e2) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce1,	// (0x00056fd8) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe3f7,	// (0x000556ee) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe497,	// (0x0005578e) sp_fs_scroll_pane_cp02

0x1d49,	// (0x00049040) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1d49,	// (0x00049040) popup_sp_fs_calendar_preview_list_single_pane

0xde02,	// (0x000550f9) main_cam6_pano_pane

0x13ca,	// (0x000486c1) main_mup3_pane_ParamLimits

0xde02,	// (0x000550f9) main_phacti_pane

0x9c4c,	// (0x00050f43) bg_button_pane_cp11

0x9c66,	// (0x00050f5d) main_mobtv_info_pane_g2_ParamLimits

0x9c66,	// (0x00050f5d) main_mobtv_info_pane_g2

0x0001,

0xfc46,	// (0x00056f3d) main_mobtv_info_pane_g_ParamLimits

0xfc46,	// (0x00056f3d) main_mobtv_info_pane_g

0x9e43,	// (0x0005113a) sc_clock_pane_t5_ParamLimits

0x9e43,	// (0x0005113a) sc_clock_pane_t5

0x9ed5,	// (0x000511cc) main_radioblah_pane_g1_ParamLimits

0xe238,	// (0x0005552f) main_radioblah_pane_t3_ParamLimits

0xe238,	// (0x0005552f) main_radioblah_pane_t3

0xe250,	// (0x00055547) main_radioblah_pane_t4_ParamLimits

0xe250,	// (0x00055547) main_radioblah_pane_t4

0x9efd,	// (0x000511f4) main_radioblah_text_pane_ParamLimits

0x9efd,	// (0x000511f4) main_radioblah_text_pane

0x9f0f,	// (0x00051206) main_radioblah_info_pane_g1_ParamLimits

0x9fa8,	// (0x0005129f) main_radioblah_info_pane_t4_ParamLimits

0x9fa8,	// (0x0005129f) main_radioblah_info_pane_t4

0x13ca,	// (0x000486c1) main_sp_fs_calendar_pane

0xa4a1,	// (0x00051798) main_phacti_pane_g1

0xa4a9,	// (0x000517a0) phacti_note_pane_ParamLimits

0xa4a9,	// (0x000517a0) phacti_note_pane

0xe543,	// (0x0005583a) phacti_term_pane_ParamLimits

0xe543,	// (0x0005583a) phacti_term_pane

0xe558,	// (0x0005584f) phacti_note_pane_t1_ParamLimits

0xe558,	// (0x0005584f) phacti_note_pane_t1

0xd0e1,	// (0x000543d8) phacti_term_pane_g1

0xd0e9,	// (0x000543e0) phacti_term_pane_t1_ParamLimits

0xd0e9,	// (0x000543e0) phacti_term_pane_t1

0xe56f,	// (0x00055866) popup_sp_fs_calendar_preview_list_single_pane_g1

0x27c6,	// (0x00049abd) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x000570a7) popup_sp_fs_calendar_preview_list_single_pane_g

0xe577,	// (0x0005586e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe577,	// (0x0005586e) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe58c,	// (0x00055883) aid_popup_sp_fs_bg_corner_pane

0xc01d,	// (0x00053314) popup_sp_fs_calendar_preview_bg_pane_g1

0xde02,	// (0x000550f9) popup_sp_fs_calendar_preview_bg_pane

0xe594,	// (0x0005588b) popup_sp_fs_calendar_preview_list_pane

0xbb02,	// (0x00052df9) bg_main_sp_fs_cale_pane_ParamLimits

0xbb02,	// (0x00052df9) bg_main_sp_fs_cale_pane

0xd11c,	// (0x00054413) listscroll_cale_mrui_pane_ParamLimits

0xd11c,	// (0x00054413) listscroll_cale_mrui_pane

0xd131,	// (0x00054428) listscroll_sp_fs_schedule_track_pane

0xd13a,	// (0x00054431) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xd13a,	// (0x00054431) main_sp_fs_ctrlbar_pane_cp01

0xe59c,	// (0x00055893) main_sp_fs_ribbon_pane

0xd14d,	// (0x00054444) popup_sp_fs_cale_preview_window

0xa51e,	// (0x00051815) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa51e,	// (0x00051815) list_single_sp_fs_schedule_track_pane

0x13ca,	// (0x000486c1) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x13ca,	// (0x000486c1) bg_sp_fs_highlight_list_pane_cp03

0xa531,	// (0x00051828) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa531,	// (0x00051828) list_single_sp_fs_schedule_track_pane_g1

0xa53d,	// (0x00051834) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa53d,	// (0x00051834) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x000570ac) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x000570ac) list_single_sp_fs_schedule_track_pane_g

0xa549,	// (0x00051840) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa549,	// (0x00051840) list_single_sp_fs_schedule_track_pane_t1

0xa563,	// (0x0005185a) sp_fs_schedule_track_pane_ParamLimits

0xa563,	// (0x0005185a) sp_fs_schedule_track_pane

0xe5a4,	// (0x0005589b) sp_fs_schedule_track_pane_g1

0xe5ac,	// (0x000558a3) sp_fs_schedule_track_pane_g2

0xe5b4,	// (0x000558ab) sp_fs_schedule_track_pane_g3

0xe5bc,	// (0x000558b3) sp_fs_schedule_track_pane_g4

0xe5c4,	// (0x000558bb) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x000570b1) sp_fs_schedule_track_pane_g

0xd319,	// (0x00054610) bg_sp_fs_schedule_viewer_highlight_g1

0x2e22,	// (0x0004a119) bg_sp_fs_schedule_viewer_highlight_g2

0xd321,	// (0x00054618) bg_sp_fs_schedule_viewer_highlight_g3

0xd329,	// (0x00054620) bg_sp_fs_schedule_viewer_highlight_g4

0xd558,	// (0x0005484f) bg_sp_fs_schedule_viewer_highlight_g5

0xd339,	// (0x00054630) bg_sp_fs_schedule_viewer_highlight_g6

0xd341,	// (0x00054638) bg_sp_fs_schedule_viewer_highlight_g7

0xd349,	// (0x00054640) bg_sp_fs_schedule_viewer_highlight_g8

0x2e02,	// (0x0004a0f9) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x000570bc) bg_sp_fs_schedule_viewer_highlight_g

0xde02,	// (0x000550f9) bg_main_sp_fs_ribbon_pane

0xa574,	// (0x0005186b) main_sp_fs_ribbon_pane_g1

0xe5cc,	// (0x000558c3) main_sp_fs_ribbon_pane_t1

0xa57d,	// (0x00051874) main_sp_fs_ribbon_pane_t2

0xe5db,	// (0x000558d2) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x000570cf) main_sp_fs_ribbon_pane_t

0xe5ea,	// (0x000558e1) main_sp_fs_ribbon_scheduler_pane

0xe5f2,	// (0x000558e9) bg_main_sp_fs_ribbon_pane_g1

0xe5fb,	// (0x000558f2) bg_main_sp_fs_ribbon_pane_g2

0xe604,	// (0x000558fb) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x000570d6) bg_main_sp_fs_ribbon_pane_g

0xe60c,	// (0x00055903) main_sp_fs_ribbon_scheduler_pane_g1

0xe615,	// (0x0005590c) main_sp_fs_ribbon_scheduler_pane_g2

0xe61e,	// (0x00055915) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x000570dd) main_sp_fs_ribbon_scheduler_pane_g

0xe627,	// (0x0005591e) list_cale_mrui_pane

0xa58c,	// (0x00051883) sp_fs_scroll_pane_cp07_ParamLimits

0xa58c,	// (0x00051883) sp_fs_scroll_pane_cp07

0xa5a8,	// (0x0005189f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa5a8,	// (0x0005189f) bg_sp_fs_schedule_viewer_highlight

0xe634,	// (0x0005592b) list_single_sp_fs_schedule_track_pane_cp01

0xe63c,	// (0x00055933) list_sp_fs_schedule_track_pane

0xe644,	// (0x0005593b) sp_fs_scroll_pane_cp06_ParamLimits

0xe644,	// (0x0005593b) sp_fs_scroll_pane_cp06

0xc01d,	// (0x00053314) bgmain_sp_fs_calendar_pane_g1

0x0f59,	// (0x00048250) list_single_cale_mrui_pane_ParamLimits

0x0f59,	// (0x00048250) list_single_cale_mrui_pane

0xd15f,	// (0x00054456) list_single_cale_mrui_row_pane_ParamLimits

0xd15f,	// (0x00054456) list_single_cale_mrui_row_pane

0xd16c,	// (0x00054463) list_single_cale_mrui_row_pane_g1_ParamLimits

0xd16c,	// (0x00054463) list_single_cale_mrui_row_pane_g1

0xd1a4,	// (0x0005449b) list_single_cale_mrui_row_pane_t1_ParamLimits

0xd1a4,	// (0x0005449b) list_single_cale_mrui_row_pane_t1

0x0f7a,	// (0x00048271) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0f7a,	// (0x00048271) list_single_cale_mrui_row_pane_t2

0xd1b6,	// (0x000544ad) list_single_cale_mrui_row_pane_t3_ParamLimits

0xd1b6,	// (0x000544ad) list_single_cale_mrui_row_pane_t3

0xd1e5,	// (0x000544dc) list_single_cale_mrui_row_pane_t4_ParamLimits

0xd1e5,	// (0x000544dc) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x000570eb) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x000570eb) list_single_cale_mrui_row_pane_t

0x0fe2,	// (0x000482d9) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0fe2,	// (0x000482d9) list_single_cmail_header_editor_pane_bg_cp01

0x1008,	// (0x000482ff) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1008,	// (0x000482ff) list_single_cmail_header_editor_pane_bg_cp02

0xa5b8,	// (0x000518af) main_radioblah_text_pane_t1_ParamLimits

0xa5b8,	// (0x000518af) main_radioblah_text_pane_t1

0xe663,	// (0x0005595a) cam6_indi_pane_cp01

0xe66b,	// (0x00055962) cam6_mode_pane_cp01

0xe673,	// (0x0005596a) cam6_pano_pane

0xe67c,	// (0x00055973) cam6_zoom_pane_cp01

0xe684,	// (0x0005597b) cam6_pano_image_pane

0xe68f,	// (0x00055986) cam6_pano_pane_g1

0xdfa6,	// (0x0005529d) cam6_pano_pane_g2

0xe698,	// (0x0005598f) cam6_pano_pane_g3

0xe6a1,	// (0x00055998) cam6_pano_pane_g4

0xc631,	// (0x00053928) cam6_pano_pane_g5

0xe6aa,	// (0x000559a1) cam6_pano_pane_g6

0xddfa,	// (0x000550f1) cam6_pano_pane_g7

0xe6b4,	// (0x000559ab) cam6_pano_pane_g8

0xe6bd,	// (0x000559b4) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x000570f4) cam6_pano_pane_g

0xde02,	// (0x000550f9) main_browser_tag_pane

0xe524,	// (0x0005581b) grid_navstr_albumart_pane

0xe6c8,	// (0x000559bf) cell_navstr_albumart_pane_ParamLimits

0xe6c8,	// (0x000559bf) cell_navstr_albumart_pane

0xe6e8,	// (0x000559df) cell_navstr_albumart_pane_g1

0xb913,	// (0x00052c0a) cell_navstr_albumart_pane_g2

0xb923,	// (0x00052c1a) cell_navstr_albumart_pane_g3

0xb91b,	// (0x00052c12) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x00057107) cell_navstr_albumart_pane_g

0xa5d2,	// (0x000518c9) bt_list_pane_ParamLimits

0xa5d2,	// (0x000518c9) bt_list_pane

0xa5e6,	// (0x000518dd) bt_list_pane_t1

0xa5f5,	// (0x000518ec) bt_list_pane_t2

0x0001,

0xfe19,	// (0x00057110) bt_list_pane_t

0xde02,	// (0x000550f9) main_cale_prevew_pane

0xa604,	// (0x000518fb) popup_cale_preview_window_ParamLimits

0xa604,	// (0x000518fb) popup_cale_preview_window

0x13ca,	// (0x000486c1) bg_popup_preview_window_pane_cp05_ParamLimits

0x13ca,	// (0x000486c1) bg_popup_preview_window_pane_cp05

0xe6f0,	// (0x000559e7) list_cale_preview_pane_ParamLimits

0xe6f0,	// (0x000559e7) list_cale_preview_pane

0xa61f,	// (0x00051916) list_double_cale_preview_pane_ParamLimits

0xa61f,	// (0x00051916) list_double_cale_preview_pane

0xa631,	// (0x00051928) list_single_cale_preview_pane_ParamLimits

0xa631,	// (0x00051928) list_single_cale_preview_pane

0xa647,	// (0x0005193e) list_single_cale_preview_pane_g1

0xa64f,	// (0x00051946) list_single_cale_preview_pane_t1_ParamLimits

0xa64f,	// (0x00051946) list_single_cale_preview_pane_t1

0xa664,	// (0x0005195b) list_double_cale_preview_pane_g1

0xa66c,	// (0x00051963) list_double_cale_preview_pane_t1_ParamLimits

0xa66c,	// (0x00051963) list_double_cale_preview_pane_t1

0xa681,	// (0x00051978) list_double_cale_preview_pane_t2_ParamLimits

0xa681,	// (0x00051978) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x00057115) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x00057115) list_double_cale_preview_pane_t

0xde02,	// (0x000550f9) main_ezdial_pane

0x13ca,	// (0x000486c1) main_sp_fs_email_pane_ParamLimits

0xa1b9,	// (0x000514b0) cmail_ddmenu_btn01_pane_ParamLimits

0xa1b9,	// (0x000514b0) cmail_ddmenu_btn01_pane

0xa1cc,	// (0x000514c3) cmail_ddmenu_btn02_pane_ParamLimits

0xa1cc,	// (0x000514c3) cmail_ddmenu_btn02_pane

0xa1ef,	// (0x000514e6) cmail_ddmenu_btn03_pane_ParamLimits

0xa1ef,	// (0x000514e6) cmail_ddmenu_btn03_pane

0xa215,	// (0x0005150c) main_sp_fs_ctrlbar_pane_ParamLimits

0xa239,	// (0x00051530) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd527,	// (0x0005481e) list_cmail_body_pane_ParamLimits

0xa3f2,	// (0x000516e9) bg_button_pane_cp12

0xe4ad,	// (0x000557a4) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe4ad,	// (0x000557a4) list_single_cmail_header_detail_pane_g3

0xd0bd,	// (0x000543b4) list_single_cmail_header_detail_pane_t2_ParamLimits

0xd0bd,	// (0x000543b4) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x00057098) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x00057098) list_single_cmail_header_detail_pane_t

0xd0fe,	// (0x000543f5) phacti_term_pane_t2_ParamLimits

0xd0fe,	// (0x000543f5) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x000570a2) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x000570a2) phacti_term_pane_t

0xe6fc,	// (0x000559f3) aid_size_list_single_double

0xa699,	// (0x00051990) popup_ezdial_listscroll_window

0xa6b5,	// (0x000519ac) popup_number_entry_window_cp01

0x4566,	// (0x0004b85d) bg_popup_call_pane_cp09

0xe708,	// (0x000559ff) ezdial_list_pane

0xe710,	// (0x00055a07) scroll_pane_cp23

0xbb02,	// (0x00052df9) bg_button_pane_cp028_ParamLimits

0xbb02,	// (0x00052df9) bg_button_pane_cp028

0xa6c3,	// (0x000519ba) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa6c3,	// (0x000519ba) cmail_ddmenu_btn01_pane_g1

0xa6cf,	// (0x000519c6) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa6cf,	// (0x000519c6) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0005711a) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0005711a) cmail_ddmenu_btn01_pane_g

0xe718,	// (0x00055a0f) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe718,	// (0x00055a0f) cmail_ddmenu_btn01_pane_t1

0xbb02,	// (0x00052df9) bg_button_pane_cp029_ParamLimits

0xbb02,	// (0x00052df9) bg_button_pane_cp029

0xa6db,	// (0x000519d2) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa6db,	// (0x000519d2) cmail_ddmenu_btn02_pane_g1

0xa6f3,	// (0x000519ea) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa6f3,	// (0x000519ea) cmail_ddmenu_btn02_pane_t1

0x13ca,	// (0x000486c1) bg_button_pane_cp031_ParamLimits

0x13ca,	// (0x000486c1) bg_button_pane_cp031

0xa6db,	// (0x000519d2) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa6db,	// (0x000519d2) cmail_ddmenu_btn03_pane_g1

0xa6f3,	// (0x000519ea) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa6f3,	// (0x000519ea) cmail_ddmenu_btn03_pane_t1

0x7ed9,	// (0x0004f1d0) cell_dialer2_keypad_pane_t1_ParamLimits

0x7ef3,	// (0x0004f1ea) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7ef3,	// (0x0004f1ea) cell_dialer2_keypad_pane_t1_copy1

0x9ab3,	// (0x00050daa) ncimui_group_button_pane

0x13ca,	// (0x000486c1) main_sp_fs_calendar_pane_ParamLimits

0xa3b3,	// (0x000516aa) list_single_cmail_header_caption_pane_ParamLimits

0xd113,	// (0x0005440a) aid_recal_txt_sm_pane

0xde02,	// (0x000550f9) mian_recal_day_pane

0xd14d,	// (0x00054444) popup_sp_fs_cale_preview_window_ParamLimits

0xe72d,	// (0x00055a24) list_recal_day_pane

0xd22f,	// (0x00054526) list_single_recal_day_pane_ParamLimits

0xd22f,	// (0x00054526) list_single_recal_day_pane

0xe754,	// (0x00055a4b) list_single_recal_day_pane_g1_ParamLimits

0xe754,	// (0x00055a4b) list_single_recal_day_pane_g1

0xd241,	// (0x00054538) list_single_recal_day_pane_g2_ParamLimits

0xd241,	// (0x00054538) list_single_recal_day_pane_g2

0xd251,	// (0x00054548) list_single_recal_day_pane_g3_ParamLimits

0xd251,	// (0x00054548) list_single_recal_day_pane_g3

0x1028,	// (0x0004831f) list_single_recal_day_pane_g4_ParamLimits

0x1028,	// (0x0004831f) list_single_recal_day_pane_g4

0xd25d,	// (0x00054554) list_single_recal_day_pane_g5_ParamLimits

0xd25d,	// (0x00054554) list_single_recal_day_pane_g5

0xd26d,	// (0x00054564) list_single_recal_day_pane_g6_ParamLimits

0xd26d,	// (0x00054564) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x00057129) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x00057129) list_single_recal_day_pane_g

0xd281,	// (0x00054578) list_single_recal_day_pane_t1

0xd293,	// (0x0005458a) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x00057134) list_single_recal_day_pane_t

0xa717,	// (0x00051a0e) ncimui_query_button_pane_ParamLimits

0xa717,	// (0x00051a0e) ncimui_query_button_pane

0xa727,	// (0x00051a1e) ncimui_query_button_pane_t1_ParamLimits

0xa727,	// (0x00051a1e) ncimui_query_button_pane_t1

0xe760,	// (0x00055a57) ncimui_query_button_pane_t2_ParamLimits

0xe760,	// (0x00055a57) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x00057139) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x00057139) ncimui_query_button_pane_t

0xa73a,	// (0x00051a31) query_button_pane_ParamLimits

0xa73a,	// (0x00051a31) query_button_pane

0xde02,	// (0x000550f9) bg_button_pane_cp0028

0xe773,	// (0x00055a6a) query_button_pane_t1

0x5fc5,	// (0x0004d2bc) main_tport_pane_ParamLimits

0xa27f,	// (0x00051576) bg_popup_window_pane_cp01_ParamLimits

0xa27f,	// (0x00051576) bg_popup_window_pane_cp01

0xa29a,	// (0x00051591) heading_pane_cp08_ParamLimits

0xa29a,	// (0x00051591) heading_pane_cp08

0xa2ad,	// (0x000515a4) heading_pane_cp07_ParamLimits

0xa2ad,	// (0x000515a4) heading_pane_cp07

0xa354,	// (0x0005164b) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x00057085) cell_tport_appsw_pane_g

0xb32c,	// (0x00052623) input_candi_list_open_g1

0x3be3,	// (0x0004aeda) list_cale_time_pane_g6_ParamLimits

0x3be3,	// (0x0004aeda) list_cale_time_pane_g6

0x6d84,	// (0x0004e07b) aid_size_touch_calib_1_ParamLimits

0x6d84,	// (0x0004e07b) aid_size_touch_calib_1

0x6d96,	// (0x0004e08d) aid_size_touch_calib_2_ParamLimits

0x6d96,	// (0x0004e08d) aid_size_touch_calib_2

0x6dae,	// (0x0004e0a5) aid_size_touch_calib_3_ParamLimits

0x6dae,	// (0x0004e0a5) aid_size_touch_calib_3

0x6dcc,	// (0x0004e0c3) aid_size_touch_calib_4_ParamLimits

0x6dcc,	// (0x0004e0c3) aid_size_touch_calib_4

0x6de4,	// (0x0004e0db) main_touch_calib_button_group_pane_ParamLimits

0x6de4,	// (0x0004e0db) main_touch_calib_button_group_pane

0x6dfc,	// (0x0004e0f3) main_touch_calib_pane_g1_ParamLimits

0x6e0e,	// (0x0004e105) main_touch_calib_pane_g2_ParamLimits

0x6e20,	// (0x0004e117) main_touch_calib_pane_g3_ParamLimits

0x6e32,	// (0x0004e129) main_touch_calib_pane_g4_ParamLimits

0xf75c,	// (0x00056a53) main_touch_calib_pane_g_ParamLimits

0x6e44,	// (0x0004e13b) main_touch_calib_pane_t1_ParamLimits

0x6e5e,	// (0x0004e155) main_touch_calib_pane_t2_ParamLimits

0x6e78,	// (0x0004e16f) main_touch_calib_pane_t3_ParamLimits

0x6e8c,	// (0x0004e183) main_touch_calib_pane_t4_ParamLimits

0x6ea0,	// (0x0004e197) main_touch_calib_pane_t5_ParamLimits

0xf765,	// (0x00056a5c) main_touch_calib_pane_t_ParamLimits

0xc3f1,	// (0x000536e8) list_single_fp_cale_pane_g3_ParamLimits

0xc3f1,	// (0x000536e8) list_single_fp_cale_pane_g3

0x13ca,	// (0x000486c1) bg_button_pane_cp012_ParamLimits

0x13ca,	// (0x000486c1) bg_vkb2_func_pane_cp03_ParamLimits

0x8e25,	// (0x0005011c) cell_vitu2_function_top_pane_g1_ParamLimits

0x13ca,	// (0x000486c1) bg_vkb2_func_pane_cp04_ParamLimits

0x9a41,	// (0x00050d38) main_ncimui_button_group_pane_ParamLimits

0x9a41,	// (0x00050d38) main_ncimui_button_group_pane

0x9aa1,	// (0x00050d98) main_ncimui_pane_t3_ParamLimits

0x9aa1,	// (0x00050d98) main_ncimui_pane_t3

0xe53a,	// (0x00055831) phacti_button_group_pane

0xe6fc,	// (0x000559f3) aid_size_list_single_double_ParamLimits

0xa699,	// (0x00051990) popup_ezdial_listscroll_window_ParamLimits

0xa6b5,	// (0x000519ac) popup_number_entry_window_cp01_ParamLimits

0xa74d,	// (0x00051a44) phacti_button_pane_ParamLimits

0xa74d,	// (0x00051a44) phacti_button_pane

0xde02,	// (0x000550f9) bg_button_pane_cp14

0xe781,	// (0x00055a78) phacti_button_pane_t1

0xa75e,	// (0x00051a55) main_touch_calib_button_pane_ParamLimits

0xa75e,	// (0x00051a55) main_touch_calib_button_pane

0x1a84,	// (0x00048d7b) bg_button_pane_cp18_ParamLimits

0x1a84,	// (0x00048d7b) bg_button_pane_cp18

0xe78f,	// (0x00055a86) main_touch_calib_button_pane_t1_ParamLimits

0xe78f,	// (0x00055a86) main_touch_calib_button_pane_t1

0xe7a5,	// (0x00055a9c) main_touch_calib_button_pane_t2_ParamLimits

0xe7a5,	// (0x00055a9c) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0005713e) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0005713e) main_touch_calib_button_pane_t

0xde02,	// (0x000550f9) cell_ncimui_button_pane

0xde02,	// (0x000550f9) bg_button_pane_cp032

0xe7c3,	// (0x00055aba) cell_ncimui_button_pane_t1

0xcbd6,	// (0x00053ecd) image3_infobar_pane_ParamLimits

0xcbd6,	// (0x00053ecd) image3_infobar_pane

0x9e6f,	// (0x00051166) fs_bigclock_status_pane_ParamLimits

0x9e6f,	// (0x00051166) fs_bigclock_status_pane

0x9e7c,	// (0x00051173) main_fs_bigclock_clock_pane_ParamLimits

0x9e7c,	// (0x00051173) main_fs_bigclock_clock_pane

0x9e98,	// (0x0005118f) main_fs_bigclock_indi_pane_ParamLimits

0x9e98,	// (0x0005118f) main_fs_bigclock_indi_pane

0x9eb1,	// (0x000511a8) main_fs_bigclock_swipe_pane_ParamLimits

0x9eb1,	// (0x000511a8) main_fs_bigclock_swipe_pane

0xde02,	// (0x000550f9) main_fs_clock_dumped_data

0xe0b3,	// (0x000553aa) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe0b3,	// (0x000553aa) list_single_fs_bigclock_indicator_pane_g1

0xe0cd,	// (0x000553c4) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe0cd,	// (0x000553c4) list_single_fs_bigclock_indicator_pane_g2

0xe0e7,	// (0x000553de) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe0e7,	// (0x000553de) list_single_fs_bigclock_indicator_pane_g3

0xe101,	// (0x000553f8) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe101,	// (0x000553f8) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc75,	// (0x00056f6c) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc75,	// (0x00056f6c) list_single_fs_bigclock_indicator_pane_g

0xe12a,	// (0x00055421) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe12a,	// (0x00055421) list_single_fs_bigclock_indicator_pane_t1

0xe152,	// (0x00055449) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe152,	// (0x00055449) list_single_fs_bigclock_indicator_pane_t2

0xe17a,	// (0x00055471) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe17a,	// (0x00055471) list_single_fs_bigclock_indicator_pane_t3

0xe1a2,	// (0x00055499) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe1a2,	// (0x00055499) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc80,	// (0x00056f77) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc80,	// (0x00056f77) list_single_fs_bigclock_indicator_pane_t

0xe7d1,	// (0x00055ac8) image3_infobar_fav_pane_ParamLimits

0xe7d1,	// (0x00055ac8) image3_infobar_fav_pane

0xe7e1,	// (0x00055ad8) image3_infobar_loc_pane_ParamLimits

0xe7e1,	// (0x00055ad8) image3_infobar_loc_pane

0xe7f5,	// (0x00055aec) image3_infobar_time_pane_ParamLimits

0xe7f5,	// (0x00055aec) image3_infobar_time_pane

0xc01d,	// (0x00053314) image3_infobar_time_pane_g1

0xe805,	// (0x00055afc) image3_infobar_time_pane_t1

0xc01d,	// (0x00053314) image3_infobar_loc_pane_g1

0xe813,	// (0x00055b0a) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x00057143) image3_infobar_loc_pane_g

0xe81b,	// (0x00055b12) image3_infobar_loc_pane_t1

0xc01d,	// (0x00053314) image3_infobar_fav_pane_g1

0xe829,	// (0x00055b20) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x00057148) image3_infobar_fav_pane_g

0xe831,	// (0x00055b28) fs_bigclock_status_battery_pane

0xe83a,	// (0x00055b31) fs_bigclock_status_signal_pane

0xe843,	// (0x00055b3a) fs_bigclock_status_title_pane

0xe84c,	// (0x00055b43) fs_bigclock_status_signal_pane_g1

0xe855,	// (0x00055b4c) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0005714d) fs_bigclock_status_signal_pane_g

0xe85d,	// (0x00055b54) fs_bigclock_status_battery_pane_g1

0xe866,	// (0x00055b5d) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x00057152) fs_bigclock_status_battery_pane_g

0xe86e,	// (0x00055b65) fs_bigclock_status_title_pane_t1

0xc01d,	// (0x00053314) main_fs_bigclock_clock_pane_g1

0xa773,	// (0x00051a6a) main_fs_bigclock_clock_pane_g2

0xa773,	// (0x00051a6a) main_fs_bigclock_clock_pane_g3

0xa773,	// (0x00051a6a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x00057157) main_fs_bigclock_clock_pane_g

0xa77b,	// (0x00051a72) main_fs_bigclock_clock_pane_t1

0xa789,	// (0x00051a80) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x00057160) main_fs_bigclock_clock_pane_t

0xe87c,	// (0x00055b73) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe87c,	// (0x00055b73) list_single_fs_bigclock_indicator_pane

0xa798,	// (0x00051a8f) list_single_fs_bigclock_pane_ParamLimits

0xa798,	// (0x00051a8f) list_single_fs_bigclock_pane

0xe896,	// (0x00055b8d) main_fs_bigclock_indicator_pane_t1

0xe8a5,	// (0x00055b9c) list_single_fs_bigclock_pane_g1

0xe8ad,	// (0x00055ba4) list_single_fs_bigclock_pane_t1

0xc01d,	// (0x00053314) main_fs_bigclock_swipe_pane_g1

0xe8f0,	// (0x00055be7) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x00057171) main_fs_bigclock_swipe_pane_g

0xe8f8,	// (0x00055bef) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe8f8,	// (0x00055bef) main_fs_bigclock_swipe_pane_t1

0x3ec3,	// (0x0004b1ba) call_type_pane_ParamLimits

0xde02,	// (0x000550f9) main_btmg_pane

0xd198,	// (0x0005448f) list_single_cale_mrui_row_pane_g2_ParamLimits

0xd198,	// (0x0005448f) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x000570e4) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x000570e4) list_single_cale_mrui_row_pane_g

0xd21e,	// (0x00054515) list_recal_vselct_arw_lo_pane

0xe74c,	// (0x00055a43) list_recal_vselct_arw_up_pane

0xd226,	// (0x0005451d) list_recal_vselct_pane

0xa7fb,	// (0x00051af2) btmg_button_pane

0xa805,	// (0x00051afc) main_btmg_pane_g1

0xde02,	// (0x000550f9) bg_button_pane_cp044

0xed07,	// (0x00055ffe) btmg_button_pane_t1

0xbaee,	// (0x00052de5) aid_listscroll_gen

0x13ca,	// (0x000486c1) main_cntbar_detail_pane

0xe48f,	// (0x00055786) list_cmail_folder_pane

0xde0c,	// (0x00055103) sp_fs_scroll_pane_cp03_ParamLimits

0x1048,	// (0x0004833f) list_single_fs_dyc_pane_cp01_ParamLimits

0x1048,	// (0x0004833f) list_single_fs_dyc_pane_cp01

0xed15,	// (0x0005600c) aid_size_cmail_indent

0xd2a5,	// (0x0005459c) list_single_dyc_row_pane_cp01

0xa841,	// (0x00051b38) cntbar_detail_list_pane_ParamLimits

0xa841,	// (0x00051b38) cntbar_detail_list_pane

0xa88d,	// (0x00051b84) main_cntbar_detail_cont_pane_ParamLimits

0xa88d,	// (0x00051b84) main_cntbar_detail_cont_pane

0xde0c,	// (0x00055103) scroll_pane_cp032_ParamLimits

0xde0c,	// (0x00055103) scroll_pane_cp032

0xa8a1,	// (0x00051b98) cntbar_detail_list_event_pane_ParamLimits

0xa8a1,	// (0x00051b98) cntbar_detail_list_event_pane

0xa851,	// (0x00051b48) cntbar_detail_list_shct_pane

0x2e78,	// (0x0004a16f) aid_list_gen

0xed1e,	// (0x00056015) aid_scroll

0xed27,	// (0x0005601e) aid_size_touch_scroll_bar

0x9313,	// (0x0005060a) aid_list_double

0x9301,	// (0x000505f8) aid_list_single

0x9301,	// (0x000505f8) aid_list_single_lg

0x105e,	// (0x00048355) aid_list_z_g_a_sm

0x1066,	// (0x0004835d) aid_list_z_g_d

0x106e,	// (0x00048365) aid_txt_z_prm

0x107c,	// (0x00048373) aid_txt_z_prm_cp01

0x108a,	// (0x00048381) aid_txt_z_sec

0xa8b1,	// (0x00051ba8) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa8b1,	// (0x00051ba8) main_cntbar_detail_cont_pane_g1

0xa8c5,	// (0x00051bbc) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa8c5,	// (0x00051bbc) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x00057176) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x00057176) main_cntbar_detail_cont_pane_g

0xed30,	// (0x00056027) main_cntbar_detail_cont_pane_t1

0xed3e,	// (0x00056035) main_cntbar_detail_cont_pane_t2

0xed4c,	// (0x00056043) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0005717b) main_cntbar_detail_cont_pane_t

0xa8d5,	// (0x00051bcc) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa8d5,	// (0x00051bcc) cell_cntbar_detail_list_shct_pane

0xed5a,	// (0x00056051) cntbar_detail_list_shct_pane_g1

0xed63,	// (0x0005605a) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x00057182) cntbar_detail_list_shct_pane_g

0xa8e9,	// (0x00051be0) cntbar_detail_list_event_pane_g1_ParamLimits

0xa8e9,	// (0x00051be0) cntbar_detail_list_event_pane_g1

0xa8f5,	// (0x00051bec) cntbar_detail_list_event_pane_g2_ParamLimits

0xa8f5,	// (0x00051bec) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x00057187) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x00057187) cntbar_detail_list_event_pane_g

0xa961,	// (0x00051c58) cntbar_detail_list_event_pane_t1_ParamLimits

0xa961,	// (0x00051c58) cntbar_detail_list_event_pane_t1

0xa976,	// (0x00051c6d) cntbar_detail_list_event_pane_t2_ParamLimits

0xa976,	// (0x00051c6d) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x00057194) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x00057194) cntbar_detail_list_event_pane_t

0xc01d,	// (0x00053314) cell_cntbar_detail_list_shct_pane_g1

0x44e0,	// (0x0004b7d7) navi_pane_mv_g3

0x13ca,	// (0x000486c1) main_cntbar_detail_pane_ParamLimits

0xde02,	// (0x000550f9) main_notif_wgt_pane

0xc968,	// (0x00053c5f) aid_tch_main_mp4_pane_g4

0xcb6a,	// (0x00053e61) popup_slider_window_cp02

0xd214,	// (0x0005450b) list_recal_day_event_pane

0xa80f,	// (0x00051b06) cntbar_detail_btn_pane_ParamLimits

0xa80f,	// (0x00051b06) cntbar_detail_btn_pane

0xa828,	// (0x00051b1f) cntbar_detail_btn_pane_cp01_ParamLimits

0xa828,	// (0x00051b1f) cntbar_detail_btn_pane_cp01

0xa851,	// (0x00051b48) cntbar_detail_list_shct_pane_ParamLimits

0xa861,	// (0x00051b58) cntbar_detail_pane_g1_ParamLimits

0xa861,	// (0x00051b58) cntbar_detail_pane_g1

0xa871,	// (0x00051b68) cntbar_detail_pane_t1_ParamLimits

0xa871,	// (0x00051b68) cntbar_detail_pane_t1

0xa901,	// (0x00051bf8) cntbar_detail_list_event_pane_g3_ParamLimits

0xa901,	// (0x00051bf8) cntbar_detail_list_event_pane_g3

0xa919,	// (0x00051c10) cntbar_detail_list_event_pane_g4_ParamLimits

0xa919,	// (0x00051c10) cntbar_detail_list_event_pane_g4

0xa931,	// (0x00051c28) cntbar_detail_list_event_pane_g5_ParamLimits

0xa931,	// (0x00051c28) cntbar_detail_list_event_pane_g5

0xa949,	// (0x00051c40) cntbar_detail_list_event_pane_g6_ParamLimits

0xa949,	// (0x00051c40) cntbar_detail_list_event_pane_g6

0xa98b,	// (0x00051c82) cntbar_detail_list_event_pane_t3_ParamLimits

0xa98b,	// (0x00051c82) cntbar_detail_list_event_pane_t3

0xa99d,	// (0x00051c94) popup_notif_wgt_window_ParamLimits

0xa99d,	// (0x00051c94) popup_notif_wgt_window

0xa9b6,	// (0x00051cad) popup_submenu_window_cp01_ParamLimits

0xa9b6,	// (0x00051cad) popup_submenu_window_cp01

0x4566,	// (0x0004b85d) bg_popup_window_pane_cp10

0xed6c,	// (0x00056063) listscroll_notif_wgt_pane

0xed7e,	// (0x00056075) list_notif_wgt_window

0xed87,	// (0x0005607e) scroll_pane_cp033

0xa717,	// (0x00051a0e) list_notif_wgt_row_pane_ParamLimits

0xa717,	// (0x00051a0e) list_notif_wgt_row_pane

0xed90,	// (0x00056087) aid_size_list_notif_wgt_del

0xed9d,	// (0x00056094) list_notif_wgt_row_pane_g1

0xeda9,	// (0x000560a0) list_notif_wgt_row_pane_g2

0xedb5,	// (0x000560ac) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0005719b) list_notif_wgt_row_pane_g

0xedc2,	// (0x000560b9) list_notif_wgt_row_pane_t1

0xedd7,	// (0x000560ce) list_notif_wgt_row_pane_t2

0xede9,	// (0x000560e0) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x000571a2) list_notif_wgt_row_pane_t

0xd560,	// (0x00054857) list_recal_day_event_pane_g1

0xedfb,	// (0x000560f2) list_recal_day_event_pane_t1

0xde02,	// (0x000550f9) bg_button_pane_cp045

0xa9cc,	// (0x00051cc3) cntbar_detail_btn_pane_t1

0xbb02,	// (0x00052df9) main_callh_pane_ParamLimits

0xbb02,	// (0x00052df9) main_callh_pane

0xde02,	// (0x000550f9) main_coverflow0_pane

0xde02,	// (0x000550f9) main_wgtman_pane

0x9ebf,	// (0x000511b6) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9ebf,	// (0x000511b6) main_fs_bigclock_unlock_btn_pane

0xa34c,	// (0x00051643) bg_button_pane_cp16

0xa35c,	// (0x00051653) cell_tport_appsw_pane_g3

0xa9da,	// (0x00051cd1) cf0_flow_pane_ParamLimits

0xa9da,	// (0x00051cd1) cf0_flow_pane

0xee0a,	// (0x00056101) listscroll_cf0_pane

0xee15,	// (0x0005610c) main_cf0_pane_g1

0xa9ef,	// (0x00051ce6) main_cf0_pane_t1_ParamLimits

0xa9ef,	// (0x00051ce6) main_cf0_pane_t1

0xaa06,	// (0x00051cfd) main_cf0_pane_t2_ParamLimits

0xaa06,	// (0x00051cfd) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x000571ae) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x000571ae) main_cf0_pane_t

0xee27,	// (0x0005611e) scroll_pane_cp11

0xaa1d,	// (0x00051d14) cf0_flow_pane_g1

0xaa25,	// (0x00051d1c) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x000571b3) cf0_flow_pane_g

0xaa2d,	// (0x00051d24) cf0_flow_pane_t1

0xde02,	// (0x000550f9) main_call6_pane

0xde02,	// (0x000550f9) main_calllock_pane

0xaa3b,	// (0x00051d32) call6_btn_grp_pane_ParamLimits

0xaa3b,	// (0x00051d32) call6_btn_grp_pane

0xaa55,	// (0x00051d4c) call6_pane_g1_ParamLimits

0xaa55,	// (0x00051d4c) call6_pane_g1

0xaa6a,	// (0x00051d61) popup_call6_1st_window_ParamLimits

0xaa6a,	// (0x00051d61) popup_call6_1st_window

0xaa7b,	// (0x00051d72) popup_call6_2nd_window_ParamLimits

0xaa7b,	// (0x00051d72) popup_call6_2nd_window

0xaa8c,	// (0x00051d83) cell_call6_btn_pane_ParamLimits

0xaa8c,	// (0x00051d83) cell_call6_btn_pane

0x4566,	// (0x0004b85d) bg_popup_call2_in_pane_cp03

0xee32,	// (0x00056129) popup_call6_1st_window_g1

0xee3a,	// (0x00056131) popup_call6_1st_window_g2

0xee42,	// (0x00056139) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x000571b8) popup_call6_1st_window_g

0xee4a,	// (0x00056141) popup_call6_1st_window_t1

0xee59,	// (0x00056150) popup_call6_1st_window_t2

0xee69,	// (0x00056160) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x000571bf) popup_call6_1st_window_t

0x4566,	// (0x0004b85d) bg_popup_call2_in_pane_cp04

0xee32,	// (0x00056129) popup_call6_2nd_window_g1

0xee3a,	// (0x00056131) popup_call6_2nd_window_g2

0xee42,	// (0x00056139) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x000571b8) popup_call6_2nd_window_g

0xee4a,	// (0x00056141) popup_call6_2nd_window_t1

0xde02,	// (0x000550f9) bg_button_pane_cp15

0xee79,	// (0x00056170) cell_call6_btn_pane_g1

0xee82,	// (0x00056179) cell_call6_btn_pane_t1

0xaaa0,	// (0x00051d97) listscroll_wgtman_pane_ParamLimits

0xaaa0,	// (0x00051d97) listscroll_wgtman_pane

0xaac3,	// (0x00051dba) wgtman_btn_pane_ParamLimits

0xaac3,	// (0x00051dba) wgtman_btn_pane

0x411d,	// (0x0004b414) aid_scroll_copy1

0xee91,	// (0x00056188) list_wgtman_pane

0xab06,	// (0x00051dfd) wgtman_btn_pane_g1_ParamLimits

0xab06,	// (0x00051dfd) wgtman_btn_pane_g1

0xab32,	// (0x00051e29) wgtman_btn_pane_t1_ParamLimits

0xab32,	// (0x00051e29) wgtman_btn_pane_t1

0xee9b,	// (0x00056192) wgtman_btn_pane_t2_ParamLimits

0xee9b,	// (0x00056192) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x000571c6) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x000571c6) wgtman_btn_pane_t

0xab6f,	// (0x00051e66) listrow_wgtman_pane_ParamLimits

0xab6f,	// (0x00051e66) listrow_wgtman_pane

0xab81,	// (0x00051e78) listrow_wgtman_pane_g1

0xab8e,	// (0x00051e85) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x000571cb) listrow_wgtman_pane_g

0x1098,	// (0x0004838f) listrow_wgtman_pane_t1

0x10b0,	// (0x000483a7) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x000571d0) listrow_wgtman_pane_t

0x10d6,	// (0x000483cd) wait_bar_pane_cp09

0xeeb2,	// (0x000561a9) main_calllock_btn_pane

0xeebc,	// (0x000561b3) main_calllock_pane_g1

0xde02,	// (0x000550f9) bg_button_pane_cp17

0xeec8,	// (0x000561bf) main_calllock_btn_pane_g1

0xeed1,	// (0x000561c8) main_calllock_btn_pane_t1

0xde02,	// (0x000550f9) main_dialer3_pane

0xde02,	// (0x000550f9) main_fmrd2_pane

0xc01d,	// (0x00053314) main_fs_bigclock_unlock_btn_pane_g1

0xeee8,	// (0x000561df) main_fs_bigclock_unlock_btn_pane_t1

0xabac,	// (0x00051ea3) area_fmrd2_info_pane_ParamLimits

0xabac,	// (0x00051ea3) area_fmrd2_info_pane

0xabbd,	// (0x00051eb4) area_fmrd2_visual_pane_ParamLimits

0xabbd,	// (0x00051eb4) area_fmrd2_visual_pane

0xabcb,	// (0x00051ec2) fmrd2_indi_pane_ParamLimits

0xabcb,	// (0x00051ec2) fmrd2_indi_pane

0xabd8,	// (0x00051ecf) area_fmrd2_visual_pane_g1

0xabe0,	// (0x00051ed7) area_fmrd2_visual_pane_t1

0xabf0,	// (0x00051ee7) area_fmrd2_visual_pane_t2

0xac00,	// (0x00051ef7) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x000571da) area_fmrd2_visual_pane_t

0xac10,	// (0x00051f07) area_fmrd2_info_pane_g1

0xac18,	// (0x00051f0f) area_fmrd2_info_pane_t1

0xac28,	// (0x00051f1f) area_fmrd2_info_pane_t2

0xac38,	// (0x00051f2f) area_fmrd2_info_pane_t3

0xac48,	// (0x00051f3f) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x000571e1) area_fmrd2_info_pane_t

0xac56,	// (0x00051f4d) fmrd2_indi_pane_t1

0xac66,	// (0x00051f5d) fmrd2_indi_pane_t2

0xac76,	// (0x00051f6d) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x000571ea) fmrd2_indi_pane_t

0xe110,	// (0x00055407) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe110,	// (0x00055407) list_single_fs_bigclock_indicator_pane_g5

0xe1b7,	// (0x000554ae) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe1b7,	// (0x000554ae) list_single_fs_bigclock_indicator_pane_t5

0xa4bd,	// (0x000517b4) aid_cell_bcale_month_pane_ParamLimits

0xa4bd,	// (0x000517b4) aid_cell_bcale_month_pane

0xa4db,	// (0x000517d2) bcale_month_pane_ParamLimits

0xa4db,	// (0x000517d2) bcale_month_pane

0xa4ff,	// (0x000517f6) bcale_preview_pane_ParamLimits

0xa4ff,	// (0x000517f6) bcale_preview_pane

0xe8ad,	// (0x00055ba4) list_single_fs_bigclock_pane_t1_ParamLimits

0xe8cc,	// (0x00055bc3) list_single_fs_bigclock_pane_t2_ParamLimits

0xe8cc,	// (0x00055bc3) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0005716c) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0005716c) list_single_fs_bigclock_pane_t

0xeee0,	// (0x000561d7) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x000571d5) main_fs_bigclock_unlock_btn_pane_g

0xac86,	// (0x00051f7d) aid_dia3_key_size_ParamLimits

0xac86,	// (0x00051f7d) aid_dia3_key_size

0xac95,	// (0x00051f8c) aid_dia3_listrow_size_ParamLimits

0xac95,	// (0x00051f8c) aid_dia3_listrow_size

0xacaa,	// (0x00051fa1) dia3_keypad_fun_pane_ParamLimits

0xacaa,	// (0x00051fa1) dia3_keypad_fun_pane

0xacc6,	// (0x00051fbd) dia3_keypad_num_pane_ParamLimits

0xacc6,	// (0x00051fbd) dia3_keypad_num_pane

0xace1,	// (0x00051fd8) dia3_listscroll_pane_ParamLimits

0xace1,	// (0x00051fd8) dia3_listscroll_pane

0xacf4,	// (0x00051feb) dia3_numentry_pane_ParamLimits

0xacf4,	// (0x00051feb) dia3_numentry_pane

0xeef6,	// (0x000561ed) dia3_list_pane

0xef01,	// (0x000561f8) scroll_pane_cp12

0xde02,	// (0x000550f9) bg_dia3_numentry_pane

0xad08,	// (0x00051fff) dia3_numentry_pane_t1

0xad17,	// (0x0005200e) cell_dia3_key_num_pane

0xad1f,	// (0x00052016) cell_dia3_key0_fun_pane_ParamLimits

0xad1f,	// (0x00052016) cell_dia3_key0_fun_pane

0xad33,	// (0x0005202a) cell_dia3_key1_fun_pane_ParamLimits

0xad33,	// (0x0005202a) cell_dia3_key1_fun_pane

0xad4b,	// (0x00052042) dia3_listrow_pane

0xdde2,	// (0x000550d9) bg_dia3_numentry_pane_g1

0xde02,	// (0x000550f9) bg_button_pane_cp21

0xef0c,	// (0x00056203) cell_dia3_key_num_pane_t1

0xef1a,	// (0x00056211) cell_dia3_key_num_pane_t2

0xef29,	// (0x00056220) cell_dia3_key_num_pane_t3

0xef38,	// (0x0005622f) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x000571f1) cell_dia3_key_num_pane_t

0xde02,	// (0x000550f9) bg_button_pane_cp19

0xad5d,	// (0x00052054) cell_dia3_key0_fun_pane_g1

0xde02,	// (0x000550f9) bg_button_pane_cp20

0xad65,	// (0x0005205c) cell_dia3_key1_fun_pane_g1

0xad6d,	// (0x00052064) area_left_week_number_pane

0xad79,	// (0x00052070) area_top_day_name_pane

0xad8c,	// (0x00052083) frame_month_view_pane

0xef47,	// (0x0005623e) grid_month_view_pane

0xad9f,	// (0x00052096) cell_top_day_name_pane_ParamLimits

0xad9f,	// (0x00052096) cell_top_day_name_pane

0xadcc,	// (0x000520c3) cell_area_left_week_number_pane_ParamLimits

0xadcc,	// (0x000520c3) cell_area_left_week_number_pane

0xade0,	// (0x000520d7) cell_month_view_pane_ParamLimits

0xade0,	// (0x000520d7) cell_month_view_pane

0xef55,	// (0x0005624c) frm_month_g1

0xae0d,	// (0x00052104) frm_month_g2

0xae20,	// (0x00052117) frm_month_g3

0xae33,	// (0x0005212a) frm_month_g4

0xae46,	// (0x0005213d) frm_month_g5

0xae59,	// (0x00052150) frm_month_g6

0xae6c,	// (0x00052163) frm_month_g7

0xef62,	// (0x00056259) frm_month_g8

0xae7f,	// (0x00052176) frm_month_g9

0xae8f,	// (0x00052186) frm_month_g10

0xae9f,	// (0x00052196) frm_month_g11

0xaeaf,	// (0x000521a6) frm_month_g12

0xaec1,	// (0x000521b8) frm_month_g13

0xaed3,	// (0x000521ca) frm_month_g14

0xaee7,	// (0x000521de) frm_month_g15

0xaefb,	// (0x000521f2) frm_month_g16

0x000f,

0xff03,	// (0x000571fa) frm_month_g

0xef6f,	// (0x00056266) cell_top_day_name_pane_t1

0xaf0f,	// (0x00052206) cell_area_left_week_number_pane_g1

0xaf1b,	// (0x00052212) cell_area_left_week_number_pane_t1

0xc289,	// (0x00053580) cell_month_view_pane_g1

0xaf2e,	// (0x00052225) cell_month_view_pane_t1

0xde02,	// (0x000550f9) main_fps_pane

0xe3a7,	// (0x0005569e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3a7,	// (0x0005569e) cmail_ddmenu_btn02_pane_cp1

0xe3c3,	// (0x000556ba) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe3c3,	// (0x000556ba) cmail_ddmenu_btn02_pane_cp2

0xa6e7,	// (0x000519de) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa6e7,	// (0x000519de) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0005711f) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0005711f) cmail_ddmenu_btn02_pane_g

0xa705,	// (0x000519fc) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa705,	// (0x000519fc) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x00057124) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x00057124) cmail_ddmenu_btn02_pane_t

0xaf41,	// (0x00052238) fps_text_pane_ParamLimits

0xaf41,	// (0x00052238) fps_text_pane

0xaf58,	// (0x0005224f) main_fps_pane_g1_ParamLimits

0xaf58,	// (0x0005224f) main_fps_pane_g1

0xaf72,	// (0x00052269) wait_bar_pane_cp010_ParamLimits

0xaf72,	// (0x00052269) wait_bar_pane_cp010

0xaf83,	// (0x0005227a) fps_text_pane_t1_ParamLimits

0xaf83,	// (0x0005227a) fps_text_pane_t1

0xde18,	// (0x0005510f) cam4_image_uncrop_pane_g1

0xde21,	// (0x00055118) cam4_image_uncrop_pane_g2

0x837f,	// (0x0004f676) cam4_image_uncrop_pane_g3

0x8388,	// (0x0004f67f) cam4_image_uncrop_pane_g4

0x0003,

0xf8f4,	// (0x00056beb) cam4_image_uncrop_pane_g

0xad4b,	// (0x00052042) dia3_listrow_pane_ParamLimits

0xde02,	// (0x000550f9) main_phob2_pane

0xa31d,	// (0x00051614) cell_tport_appsw_pane_cp02_ParamLimits

0xa31d,	// (0x00051614) cell_tport_appsw_pane_cp02

0xa331,	// (0x00051628) cell_tport_appsw_pane_cp03_ParamLimits

0xa331,	// (0x00051628) cell_tport_appsw_pane_cp03

0xde02,	// (0x000550f9) phob2_contact_card_pane

0xde02,	// (0x000550f9) phob2_listscroll_pane

0xef82,	// (0x00056279) phob2_list_pane

0xef8a,	// (0x00056281) scroll_pane_cp034

0xaf9b,	// (0x00052292) phob2_cc_data_pane_ParamLimits

0xaf9b,	// (0x00052292) phob2_cc_data_pane

0xafba,	// (0x000522b1) phob2_cc_listscroll_pane_ParamLimits

0xafba,	// (0x000522b1) phob2_cc_listscroll_pane

0xafd8,	// (0x000522cf) list_double_large_graphic_phob2_pane_ParamLimits

0xafd8,	// (0x000522cf) list_double_large_graphic_phob2_pane

0xafea,	// (0x000522e1) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xafea,	// (0x000522e1) list_double_large_graphic_phob2_pane_g1

0x10e8,	// (0x000483df) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x10e8,	// (0x000483df) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0005721b) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0005721b) list_double_large_graphic_phob2_pane_g

0x10f4,	// (0x000483eb) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x10f4,	// (0x000483eb) list_double_large_graphic_phob2_pane_t1

0x1109,	// (0x00048400) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1109,	// (0x00048400) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x00057220) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x00057220) list_double_large_graphic_phob2_pane_t

0xde02,	// (0x000550f9) list_highlight_pane_cp024

0xef92,	// (0x00056289) phob2_cc_button_pane

0xb000,	// (0x000522f7) phob2_cc_data_pane_g1_ParamLimits

0xb000,	// (0x000522f7) phob2_cc_data_pane_g1

0xb015,	// (0x0005230c) phob2_cc_data_pane_g2_ParamLimits

0xb015,	// (0x0005230c) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x00057225) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x00057225) phob2_cc_data_pane_g

0xb027,	// (0x0005231e) phob2_cc_data_pane_t1_ParamLimits

0xb027,	// (0x0005231e) phob2_cc_data_pane_t1

0xb03f,	// (0x00052336) phob2_cc_data_pane_t2_ParamLimits

0xb03f,	// (0x00052336) phob2_cc_data_pane_t2

0xb057,	// (0x0005234e) phob2_cc_data_pane_t3_ParamLimits

0xb057,	// (0x0005234e) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0005722a) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0005722a) phob2_cc_data_pane_t

0xef9a,	// (0x00056291) phob2_cc_list_pane_ParamLimits

0xef9a,	// (0x00056291) phob2_cc_list_pane

0xd60b,	// (0x00054902) scroll_pane_cp035_ParamLimits

0xd60b,	// (0x00054902) scroll_pane_cp035

0x13ca,	// (0x000486c1) bg_button_pane_cp033

0xefa6,	// (0x0005629d) phob2_cc_button_pane_g1

0xefb2,	// (0x000562a9) phob2_cc_button_pane_t1

0xefc7,	// (0x000562be) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x00057231) phob2_cc_button_pane_t

0xb06f,	// (0x00052366) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb06f,	// (0x00052366) list_double_large_graphic_phob2_cc_pane

0xb081,	// (0x00052378) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb081,	// (0x00052378) list_double_large_graphic_phob2_cc_pane_g1

0x111b,	// (0x00048412) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x111b,	// (0x00048412) list_double_large_graphic_phob2_cc_pane_g2

0x1127,	// (0x0004841e) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1127,	// (0x0004841e) list_double_large_graphic_phob2_cc_pane_g3

0x1133,	// (0x0004842a) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1133,	// (0x0004842a) list_double_large_graphic_phob2_cc_pane_g4

0xd2ae,	// (0x000545a5) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xd2ae,	// (0x000545a5) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x00057236) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x00057236) list_double_large_graphic_phob2_cc_pane_g

0x113f,	// (0x00048436) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x113f,	// (0x00048436) list_double_large_graphic_phob2_cc_pane_t1

0x1168,	// (0x0004845f) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1168,	// (0x0004845f) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x00057241) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x00057241) list_double_large_graphic_phob2_cc_pane_t

0xefd9,	// (0x000562d0) list_highlight_pane_cp025_ParamLimits

0xefd9,	// (0x000562d0) list_highlight_pane_cp025

0x13ca,	// (0x000486c1) bg_button_pane_cp033_ParamLimits

0xefa6,	// (0x0005629d) phob2_cc_button_pane_g1_ParamLimits

0xefb2,	// (0x000562a9) phob2_cc_button_pane_t1_ParamLimits

0xefc7,	// (0x000562be) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x00057231) phob2_cc_button_pane_t_ParamLimits

0x13d8,	// (0x000486cf) popup_wgtman_window

0xd433,	// (0x0005472a) scroll_pane_cp038

0xaae8,	// (0x00051ddf) wgtman_btn_pane_cp_01_ParamLimits

0xaae8,	// (0x00051ddf) wgtman_btn_pane_cp_01

0xefe7,	// (0x000562de) wgtman_content_pane

0xeff0,	// (0x000562e7) wgtman_heading_pane

0xde02,	// (0x000550f9) bg_heading_pane_cp02

0xeff9,	// (0x000562f0) wgtman_heading_pane_g1

0xf001,	// (0x000562f8) wgtman_heading_pane_t1

0xf00f,	// (0x00056306) scroll_pane_cp036

0xf017,	// (0x0005630e) wgtman_list_pane

0xf01f,	// (0x00056316) wgtman_list_pane_t1_ParamLimits

0xf01f,	// (0x00056316) wgtman_list_pane_t1

0xcd0b,	// (0x00054002) cam4_grid_pane

0x07a9,	// (0x00047aa0) bg_button_pane_cp015_ParamLimits

0x8f81,	// (0x00050278) bg_button_pane_cp016_ParamLimits

0x8f94,	// (0x0005028b) bg_button_pane_cp017_ParamLimits

0x07ef,	// (0x00047ae6) popup_vitu2_query_window_g3_ParamLimits

0x07ef,	// (0x00047ae6) popup_vitu2_query_window_g3

0x086a,	// (0x00047b61) popup_vitu2_query_window_t6_ParamLimits

0x086a,	// (0x00047b61) popup_vitu2_query_window_t6

0x0895,	// (0x00047b8c) popup_vitu2_query_window_t7_ParamLimits

0x0895,	// (0x00047b8c) popup_vitu2_query_window_t7

0xde18,	// (0x0005510f) cam4_grid_pane_g1

0xde21,	// (0x00055118) cam4_grid_pane_g2

0xf039,	// (0x00056330) cam4_grid_pane_g3

0xf042,	// (0x00056339) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x00057246) cam4_grid_pane_g

0x2874,	// (0x00049b6b) aid_placing_vt_slider_lsc_ParamLimits

0x2bcf,	// (0x00049ec6) vidtel_button_pane_ParamLimits

0x2bcf,	// (0x00049ec6) vidtel_button_pane

0xf04d,	// (0x00056344) bg_button_pane_cp034

0xb08d,	// (0x00052384) vidtel_button_pane_g1

0xf057,	// (0x0005634e) vidtel_button_pane_t1

0xd550,	// (0x00054847) aid_size_vtel_slider_touch

0xd60b,	// (0x00054902) scroll_pane_cp039

0xde5e,	// (0x00055155) ncim_query_button_pane_cp01_ParamLimits

0xde7d,	// (0x00055174) ncimui_query_pane_g1_ParamLimits

0x13ca,	// (0x000486c1) input_focus_pane_cp012_ParamLimits

0xdea2,	// (0x00055199) ncim_query_entry_pane_t1_ParamLimits

0xd60b,	// (0x00054902) scroll_pane_cp039_ParamLimits

0x43cd,	// (0x0004b6c4) navi_pane_bcale_mc_g1

0x43d5,	// (0x0004b6cc) navi_pane_bcale_mc_t1

0xe40c,	// (0x00055703) main_sp_fs_email_pane_g1

0xe418,	// (0x0005570f) main_sp_fs_email_pane_g2

0x0001,

0xfce6,	// (0x00056fdd) main_sp_fs_email_pane_g

0xe656,	// (0x0005594d) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe656,	// (0x0005594d) list_single_cale_mrui_row_pane_g3

0x103e,	// (0x00048335) list_single_recal_day_pane_g5_event_pane

0xd279,	// (0x00054570) list_single_recal_day_pane_g7

0xf065,	// (0x0005635c) list_recal_day_event_pane_cp01

0xf06e,	// (0x00056365) list_recal_vselct_arw_lo_pane_cp01

0xf076,	// (0x0005636d) list_recal_vselct_arw_up_pane_cp01

0xf07e,	// (0x00056375) list_recal_vselct_pane_cp01

0xd560,	// (0x00054857) list_recal_day_event_pane_cp01_g1

0xd2ba,	// (0x000545b1) list_recal_day_event_pane_cp01_t1

0xd281,	// (0x00054578) list_single_recal_day_pane_t1_ParamLimits

0xd293,	// (0x0005458a) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x00057134) list_single_recal_day_pane_t_ParamLimits

0x1718,	// (0x00048a0f) bg_notes_pane_ParamLimits

0x1a4e,	// (0x00048d45) list_notes_pane_ParamLimits

0x1a5c,	// (0x00048d53) scroll_pane_cp06_ParamLimits

0x1a84,	// (0x00048d7b) main_notes_pane_ParamLimits

0xde02,	// (0x000550f9) main_welc_pane

0xb095,	// (0x0005238c) main_welc_body_pane_ParamLimits

0xb095,	// (0x0005238c) main_welc_body_pane

0xb0b3,	// (0x000523aa) main_welc_opti_pane_ParamLimits

0xb0b3,	// (0x000523aa) main_welc_opti_pane

0xb0f8,	// (0x000523ef) main_welc_pane_t1_ParamLimits

0xb0f8,	// (0x000523ef) main_welc_pane_t1

0xb116,	// (0x0005240d) main_welc_body_row_pane_ParamLimits

0xb116,	// (0x0005240d) main_welc_body_row_pane

0xe915,	// (0x00055c0c) main_welc_opti_row_pane_ParamLimits

0xe915,	// (0x00055c0c) main_welc_opti_row_pane

0xf088,	// (0x0005637f) main_welc_opti_row_pane_g1

0xf090,	// (0x00056387) main_welc_opti_row_pane_t1

0xf0a0,	// (0x00056397) main_welc_body_row_pane_t1

0xed76,	// (0x0005606d) popup_notif_wgt_heading_pane

0xed90,	// (0x00056087) aid_size_list_notif_wgt_del_ParamLimits

0xed9d,	// (0x00056094) list_notif_wgt_row_pane_g1_ParamLimits

0xeda9,	// (0x000560a0) list_notif_wgt_row_pane_g2_ParamLimits

0xedb5,	// (0x000560ac) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0005719b) list_notif_wgt_row_pane_g_ParamLimits

0xedc2,	// (0x000560b9) list_notif_wgt_row_pane_t1_ParamLimits

0xedd7,	// (0x000560ce) list_notif_wgt_row_pane_t2_ParamLimits

0xede9,	// (0x000560e0) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x000571a2) list_notif_wgt_row_pane_t_ParamLimits

0xab81,	// (0x00051e78) listrow_wgtman_pane_g1_ParamLimits

0xab8e,	// (0x00051e85) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x000571cb) listrow_wgtman_pane_g_ParamLimits

0x1098,	// (0x0004838f) listrow_wgtman_pane_t1_ParamLimits

0x10b0,	// (0x000483a7) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x000571d0) listrow_wgtman_pane_t_ParamLimits

0x10d6,	// (0x000483cd) wait_bar_pane_cp09_ParamLimits

0xde02,	// (0x000550f9) bg_popup_heading_pane_cp02

0xf0af,	// (0x000563a6) popup_notif_wgt_heading_pane_g1

0xf0b7,	// (0x000563ae) popup_notif_wgt_heading_pane_t1

0xde02,	// (0x000550f9) main_vids_pane

0xde02,	// (0x000550f9) vids_listscroll_pane

0xb12a,	// (0x00052421) scroll_pane_cp040

0xde02,	// (0x000550f9) vids_list_pane

0xb135,	// (0x0005242c) vids_list_double_pane_ParamLimits

0xb135,	// (0x0005242c) vids_list_double_pane

0xb146,	// (0x0005243d) vids_list_double_pane_g1

0xb14f,	// (0x00052446) vids_list_double_pane_t1

0xb15f,	// (0x00052456) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x00057254) vids_list_double_pane_t

0x13ca,	// (0x000486c1) main_ncimui_pane_ParamLimits

0x9a55,	// (0x00050d4c) main_ncimui_pane_g1_ParamLimits

0x9a61,	// (0x00050d58) main_ncimui_pane_g2_ParamLimits

0x9a61,	// (0x00050d58) main_ncimui_pane_g2

0x0001,

0xfbf0,	// (0x00056ee7) main_ncimui_pane_g_ParamLimits

0xfbf0,	// (0x00056ee7) main_ncimui_pane_g

0xb0ce,	// (0x000523c5) main_welc_pane_g1_ParamLimits

0xb0ce,	// (0x000523c5) main_welc_pane_g1

0xb0e3,	// (0x000523da) main_welc_pane_g2_ParamLimits

0xb0e3,	// (0x000523da) main_welc_pane_g2

0x0001,

0xff58,	// (0x0005724f) main_welc_pane_g_ParamLimits

0xff58,	// (0x0005724f) main_welc_pane_g

0x1718,	// (0x00048a0f) listscroll_mce_pane_ParamLimits

0x455e,	// (0x0004b855) wait_bar_pane_cp10

0xbaf6,	// (0x00052ded) main_cale_day_pane_ParamLimits

0xbaf6,	// (0x00052ded) main_cale_week_pane_ParamLimits

0x1718,	// (0x00048a0f) main_messa_pane_ParamLimits

0x76b9,	// (0x0004e9b0) main_clock2_btn_pane_ParamLimits

0x76b9,	// (0x0004e9b0) main_clock2_btn_pane

0xc479,	// (0x00053770) main_clock2_btn_pane_cp01_ParamLimits

0xc479,	// (0x00053770) main_clock2_btn_pane_cp01

0xe627,	// (0x0005591e) list_cale_mrui_pane_ParamLimits

0xee1f,	// (0x00056116) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x000571a9) main_cf0_pane_g

0xad6d,	// (0x00052064) area_left_week_number_pane_ParamLimits

0xad79,	// (0x00052070) area_top_day_name_pane_ParamLimits

0xad8c,	// (0x00052083) frame_month_view_pane_ParamLimits

0xef47,	// (0x0005623e) grid_month_view_pane_ParamLimits

0xef55,	// (0x0005624c) frm_month_g1_ParamLimits

0xae0d,	// (0x00052104) frm_month_g2_ParamLimits

0xae20,	// (0x00052117) frm_month_g3_ParamLimits

0xae33,	// (0x0005212a) frm_month_g4_ParamLimits

0xae46,	// (0x0005213d) frm_month_g5_ParamLimits

0xae59,	// (0x00052150) frm_month_g6_ParamLimits

0xae6c,	// (0x00052163) frm_month_g7_ParamLimits

0xef62,	// (0x00056259) frm_month_g8_ParamLimits

0xae7f,	// (0x00052176) frm_month_g9_ParamLimits

0xae8f,	// (0x00052186) frm_month_g10_ParamLimits

0xae9f,	// (0x00052196) frm_month_g11_ParamLimits

0xaeaf,	// (0x000521a6) frm_month_g12_ParamLimits

0xaec1,	// (0x000521b8) frm_month_g13_ParamLimits

0xaed3,	// (0x000521ca) frm_month_g14_ParamLimits

0xaee7,	// (0x000521de) frm_month_g15_ParamLimits

0xaefb,	// (0x000521f2) frm_month_g16_ParamLimits

0xff03,	// (0x000571fa) frm_month_g_ParamLimits

0xef6f,	// (0x00056266) cell_top_day_name_pane_t1_ParamLimits

0xaf0f,	// (0x00052206) cell_area_left_week_number_pane_g1_ParamLimits

0xaf1b,	// (0x00052212) cell_area_left_week_number_pane_t1_ParamLimits

0xc289,	// (0x00053580) cell_month_view_pane_g1_ParamLimits

0xaf2e,	// (0x00052225) cell_month_view_pane_t1_ParamLimits

0x1710,	// (0x00048a07) main_clock2_btn_pane_g1

0xf0c5,	// (0x000563bc) main_clock2_btn_pane_t1

0x13ca,	// (0x000486c1) listscroll_cmail_pane_ParamLimits

0xe40c,	// (0x00055703) main_sp_fs_email_pane_g1_ParamLimits

0xe418,	// (0x0005570f) main_sp_fs_email_pane_g2_ParamLimits

0xfce6,	// (0x00056fdd) main_sp_fs_email_pane_g_ParamLimits

0xe72d,	// (0x00055a24) list_recal_day_pane_ParamLimits

0xe73e,	// (0x00055a35) mian_recal_day_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small
