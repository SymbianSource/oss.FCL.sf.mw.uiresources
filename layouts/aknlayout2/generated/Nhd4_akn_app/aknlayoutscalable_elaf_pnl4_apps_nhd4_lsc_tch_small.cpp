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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00042720 };

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
0x161b,	// (0x00043d3b) Screen

0x1627,	// (0x00043d47) application_window

0x1663,	// (0x00043d83) area_bottom_pane_ParamLimits

0x1663,	// (0x00043d83) area_bottom_pane

0x169c,	// (0x00043dbc) area_top_pane_ParamLimits

0x169c,	// (0x00043dbc) area_top_pane

0xa5f7,	// (0x0004cd17) call_video_uplink_pane_ParamLimits

0xa5f7,	// (0x0004cd17) call_video_uplink_pane

0x1711,	// (0x00043e31) main_pane_ParamLimits

0x1711,	// (0x00043e31) main_pane

0xe298,	// (0x000509b8) context_pane

0x462a,	// (0x00046d4a) navi_pane

0x4652,	// (0x00046d72) popup_cale_events_window_ParamLimits

0x4652,	// (0x00046d72) popup_cale_events_window

0xe2ab,	// (0x000509cb) popup_mup_playback_window

0x466a,	// (0x00046d8a) signal_pane

0xc399,	// (0x0004eab9) main_browser_pane

0xce23,	// (0x0004f543) main_burst_pane

0x438a,	// (0x00046aaa) main_calc_pane

0xce23,	// (0x0004f543) main_cale_day_pane

0xc399,	// (0x0004eab9) main_cale_month_pane

0xce23,	// (0x0004f543) main_cale_week_pane

0xce23,	// (0x0004f543) main_call_pane

0xc027,	// (0x0004e747) main_call_poc_pane

0xce23,	// (0x0004f543) main_camera_pane

0xce23,	// (0x0004f543) main_chi_dic_pane

0xcca4,	// (0x0004f3c4) main_clock_pane

0xc027,	// (0x0004e747) main_fmradio_pane

0xce23,	// (0x0004f543) main_graph_messa_pane

0xc027,	// (0x0004e747) main_help_pane

0xc399,	// (0x0004eab9) main_im_pane

0xc282,	// (0x0004e9a2) main_image_pane_ParamLimits

0xc282,	// (0x0004e9a2) main_image_pane

0xc027,	// (0x0004e747) main_location2_pane

0xce23,	// (0x0004f543) main_location_pane

0xc027,	// (0x0004e747) main_messa_pane

0xc027,	// (0x0004e747) main_mp2_pane

0xce23,	// (0x0004f543) main_mp_pane

0xc027,	// (0x0004e747) main_msg_pane

0xc027,	// (0x0004e747) main_mup_eq_pane

0xc027,	// (0x0004e747) main_mup_pane

0xc399,	// (0x0004eab9) main_notes_pane

0xc027,	// (0x0004e747) main_pec_pane

0xc027,	// (0x0004e747) main_phob_pane

0xc027,	// (0x0004e747) main_pinb_pane

0xc027,	// (0x0004e747) main_postcard_pane

0xc027,	// (0x0004e747) main_qdial_pane

0xce23,	// (0x0004f543) main_skin_pane

0xc027,	// (0x0004e747) main_smil2_pane

0xce23,	// (0x0004f543) main_smil_pane

0xce23,	// (0x0004f543) main_video_pane

0xce23,	// (0x0004f543) main_video_tele_pane

0xc282,	// (0x0004e9a2) main_viewer_pane_ParamLimits

0xc282,	// (0x0004e9a2) main_viewer_pane

0xce23,	// (0x0004f543) main_vorec_pane

0x43de,	// (0x00046afe) popup_blid_sat_info_window_ParamLimits

0x43de,	// (0x00046afe) popup_blid_sat_info_window

0x4436,	// (0x00046b56) popup_dyc_status_message_window_ParamLimits

0x4436,	// (0x00046b56) popup_dyc_status_message_window

0x444e,	// (0x00046b6e) popup_grid_large_graphic_window_ParamLimits

0x444e,	// (0x00046b6e) popup_grid_large_graphic_window

0x4504,	// (0x00046c24) popup_loc_request_window_ParamLimits

0x4504,	// (0x00046c24) popup_loc_request_window

0x4602,	// (0x00046d22) popup_wml_address_window_ParamLimits

0x4602,	// (0x00046d22) popup_wml_address_window

0x41c4,	// (0x000468e4) call_muted_g1

0x3e7c,	// (0x0004659c) popup_call_audio_conf_window_ParamLimits

0x3e7c,	// (0x0004659c) popup_call_audio_conf_window

0x41d8,	// (0x000468f8) popup_call_audio_first_window_ParamLimits

0x41d8,	// (0x000468f8) popup_call_audio_first_window

0x424e,	// (0x0004696e) popup_call_audio_in_window_ParamLimits

0x424e,	// (0x0004696e) popup_call_audio_in_window

0x428a,	// (0x000469aa) popup_call_audio_out_window_ParamLimits

0x428a,	// (0x000469aa) popup_call_audio_out_window

0x42c4,	// (0x000469e4) popup_call_audio_second_window_ParamLimits

0x42c4,	// (0x000469e4) popup_call_audio_second_window

0x431a,	// (0x00046a3a) popup_call_audio_wait_window_ParamLimits

0x431a,	// (0x00046a3a) popup_call_audio_wait_window

0x434f,	// (0x00046a6f) popup_number_entry_window_ParamLimits

0x434f,	// (0x00046a6f) popup_number_entry_window

0xbc16,	// (0x0004e336) bg_popup_call_pane_cp05_ParamLimits

0xbc16,	// (0x0004e336) bg_popup_call_pane_cp05

0xbc36,	// (0x0004e356) popup_number_entry_window_t1

0xbc49,	// (0x0004e369) popup_number_entry_window_t2

0xbc5b,	// (0x0004e37b) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x00051807) popup_number_entry_window_t

0xbc6d,	// (0x0004e38d) text_title_cp2

0xbc80,	// (0x0004e3a0) bg_popup_call_pane_cp_ParamLimits

0xbc80,	// (0x0004e3a0) bg_popup_call_pane_cp

0xbc8e,	// (0x0004e3ae) call_thumbnail_pane

0xbc96,	// (0x0004e3b6) popup_call_audio_in_window_g1_ParamLimits

0xbc96,	// (0x0004e3b6) popup_call_audio_in_window_g1

0xbca2,	// (0x0004e3c2) popup_call_audio_in_window_g2_ParamLimits

0xbca2,	// (0x0004e3c2) popup_call_audio_in_window_g2

0xbcae,	// (0x0004e3ce) popup_call_audio_in_window_g3_ParamLimits

0xbcae,	// (0x0004e3ce) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x00051810) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x00051810) popup_call_audio_in_window_g

0xbcba,	// (0x0004e3da) popup_call_audio_in_window_t1_ParamLimits

0xbcba,	// (0x0004e3da) popup_call_audio_in_window_t1

0xbcd5,	// (0x0004e3f5) popup_call_audio_in_window_t2_ParamLimits

0xbcd5,	// (0x0004e3f5) popup_call_audio_in_window_t2

0xbcf0,	// (0x0004e410) popup_call_audio_in_window_t3_ParamLimits

0xbcf0,	// (0x0004e410) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x00051817) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x00051817) popup_call_audio_in_window_t

0xbc80,	// (0x0004e3a0) bg_popup_call_pane_cp01_ParamLimits

0xbc80,	// (0x0004e3a0) bg_popup_call_pane_cp01

0xbc8e,	// (0x0004e3ae) call_thumbnail_pane_cp02

0xbd03,	// (0x0004e423) call_type_pane_cp022

0xbd0b,	// (0x0004e42b) popup_call_audio_out_window_g1_ParamLimits

0xbd0b,	// (0x0004e42b) popup_call_audio_out_window_g1

0xbd1d,	// (0x0004e43d) popup_call_audio_out_window_g2_ParamLimits

0xbd1d,	// (0x0004e43d) popup_call_audio_out_window_g2

0xbd29,	// (0x0004e449) popup_call_audio_out_window_g3_ParamLimits

0xbd29,	// (0x0004e449) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x0005181e) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x0005181e) popup_call_audio_out_window_g

0xbd3b,	// (0x0004e45b) popup_call_audio_out_window_t1_ParamLimits

0xbd3b,	// (0x0004e45b) popup_call_audio_out_window_t1

0xbd53,	// (0x0004e473) popup_call_audio_out_window_t2_ParamLimits

0xbd53,	// (0x0004e473) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x00051825) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x00051825) popup_call_audio_out_window_t

0xbd68,	// (0x0004e488) bg_popup_call_pane_ParamLimits

0xbd68,	// (0x0004e488) bg_popup_call_pane

0x18c9,	// (0x00043fe9) call_thumbnail_pane_cp_ParamLimits

0x18c9,	// (0x00043fe9) call_thumbnail_pane_cp

0xbdec,	// (0x0004e50c) call_type_pane_cp01_ParamLimits

0xbdec,	// (0x0004e50c) call_type_pane_cp01

0xbe30,	// (0x0004e550) popup_call_audio_first_window_g1_ParamLimits

0xbe30,	// (0x0004e550) popup_call_audio_first_window_g1

0xbe7c,	// (0x0004e59c) popup_call_audio_first_window_g2_ParamLimits

0xbe7c,	// (0x0004e59c) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x0005182a) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x0005182a) popup_call_audio_first_window_g

0xbec0,	// (0x0004e5e0) popup_call_audio_first_window_t1_ParamLimits

0xbec0,	// (0x0004e5e0) popup_call_audio_first_window_t1

0xbf6c,	// (0x0004e68c) popup_call_audio_first_window_t4_ParamLimits

0xbf6c,	// (0x0004e68c) popup_call_audio_first_window_t4

0xbff8,	// (0x0004e718) popup_call_audio_first_window_t5_ParamLimits

0xbff8,	// (0x0004e718) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x0005182f) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x0005182f) popup_call_audio_first_window_t

0xc027,	// (0x0004e747) bg_popup_call_pane_cp02

0xc031,	// (0x0004e751) call_type_pane_cp023

0xc039,	// (0x0004e759) popup_call_audio_wait_window_g1

0xc041,	// (0x0004e761) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x00051836) popup_call_audio_wait_window_g

0xc049,	// (0x0004e769) popup_call_audio_wait_window_t3

0xc057,	// (0x0004e777) bg_popup_call_pane_cp03_ParamLimits

0xc057,	// (0x0004e777) bg_popup_call_pane_cp03

0xc0b7,	// (0x0004e7d7) call_thumbnail_pane_cp011_ParamLimits

0xc0b7,	// (0x0004e7d7) call_thumbnail_pane_cp011

0xc0c3,	// (0x0004e7e3) call_type_pane_cp034_ParamLimits

0xc0c3,	// (0x0004e7e3) call_type_pane_cp034

0xc0ff,	// (0x0004e81f) popup_call_audio_second_window_g1_ParamLimits

0xc0ff,	// (0x0004e81f) popup_call_audio_second_window_g1

0xc13b,	// (0x0004e85b) popup_call_audio_second_window_g2_ParamLimits

0xc13b,	// (0x0004e85b) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x0005183b) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x0005183b) popup_call_audio_second_window_g

0xc177,	// (0x0004e897) popup_call_audio_second_window_t1_ParamLimits

0xc177,	// (0x0004e897) popup_call_audio_second_window_t1

0xc1f8,	// (0x0004e918) popup_call_audio_second_window_t2_ParamLimits

0xc1f8,	// (0x0004e918) popup_call_audio_second_window_t2

0xc22e,	// (0x0004e94e) popup_call_audio_second_window_t3_ParamLimits

0xc22e,	// (0x0004e94e) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x00051840) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x00051840) popup_call_audio_second_window_t

0xc027,	// (0x0004e747) bg_popup_call_pane_cp04

0xc264,	// (0x0004e984) list_conf_pane

0xc26c,	// (0x0004e98c) popup_call_audio_conf_window_t1

0xc27a,	// (0x0004e99a) call_thumbnail_pane_g1

0xc282,	// (0x0004e9a2) bg_pinb_pane_ParamLimits

0xc282,	// (0x0004e9a2) bg_pinb_pane

0xc290,	// (0x0004e9b0) find_pinb_pane

0xc299,	// (0x0004e9b9) listscroll_pinb_pane_ParamLimits

0xc299,	// (0x0004e9b9) listscroll_pinb_pane

0xc2a8,	// (0x0004e9c8) pinb_bg_pane_g1

0x18ed,	// (0x0004400d) pinb_bg_pane_g2

0x18f9,	// (0x00044019) pinb_bg_pane_g3

0x1905,	// (0x00044025) pinb_bg_pane_g4

0x1911,	// (0x00044031) pinb_bg_pane_g5

0x191d,	// (0x0004403d) pinb_bg_pane_g6

0x1928,	// (0x00044048) pinb_bg_pane_g7

0x1933,	// (0x00044053) pinb_bg_pane_g8

0x193e,	// (0x0004405e) pinb_bg_pane_g9

0x1948,	// (0x00044068) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x00051847) pinb_bg_pane_g

0x195d,	// (0x0004407d) grid_pinb_pane

0x1966,	// (0x00044086) list_pinb_pane

0x196f,	// (0x0004408f) scroll_pane_cp01_ParamLimits

0x196f,	// (0x0004408f) scroll_pane_cp01

0xc2ba,	// (0x0004e9da) find_pinb_pane_g1_ParamLimits

0xc2ba,	// (0x0004e9da) find_pinb_pane_g1

0xc2d2,	// (0x0004e9f2) find_pinb_pane_t1

0xc2e4,	// (0x0004ea04) find_pinb_pane_t2

0x0001,

0xf141,	// (0x00051861) find_pinb_pane_t

0xc2f9,	// (0x0004ea19) input_focus_pane_cp01_ParamLimits

0xc2f9,	// (0x0004ea19) input_focus_pane_cp01

0x1981,	// (0x000440a1) cell_pinb_pane_ParamLimits

0x1981,	// (0x000440a1) cell_pinb_pane

0x19b3,	// (0x000440d3) cell_pinb_pane_g1_ParamLimits

0x19b3,	// (0x000440d3) cell_pinb_pane_g1

0x19c3,	// (0x000440e3) cell_pinb_pane_g2_ParamLimits

0x19c3,	// (0x000440e3) cell_pinb_pane_g2

0xc305,	// (0x0004ea25) cell_pinb_pane_g3_ParamLimits

0xc305,	// (0x0004ea25) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x00051866) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x00051866) cell_pinb_pane_g

0xc027,	// (0x0004e747) grid_highlight_pane_cp01

0x19cf,	// (0x000440ef) list_pinb_item_pane_ParamLimits

0x19cf,	// (0x000440ef) list_pinb_item_pane

0xc027,	// (0x0004e747) list_highlight_pane_cp02

0xc311,	// (0x0004ea31) list_pinb_item_pane_g1_ParamLimits

0xc311,	// (0x0004ea31) list_pinb_item_pane_g1

0xc31e,	// (0x0004ea3e) list_pinb_item_pane_g2_ParamLimits

0xc31e,	// (0x0004ea3e) list_pinb_item_pane_g2

0x19e3,	// (0x00044103) list_pinb_item_pane_g3_ParamLimits

0x19e3,	// (0x00044103) list_pinb_item_pane_g3

0xc32a,	// (0x0004ea4a) list_pinb_item_pane_g4_ParamLimits

0xc32a,	// (0x0004ea4a) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x0005186d) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x0005186d) list_pinb_item_pane_g

0xc336,	// (0x0004ea56) list_pinb_item_pane_t1_ParamLimits

0xc336,	// (0x0004ea56) list_pinb_item_pane_t1

0x1a12,	// (0x00044132) calc_display_pane

0x1a3a,	// (0x0004415a) calc_paper_pane

0x1a5d,	// (0x0004417d) grid_calc_pane

0xc027,	// (0x0004e747) bg_list_pane_cp01

0x1a8b,	// (0x000441ab) clock_g1

0x1a93,	// (0x000441b3) clock_g2

0x0001,

0xf156,	// (0x00051876) clock_g

0x1a9b,	// (0x000441bb) clock_t1_ParamLimits

0x1a9b,	// (0x000441bb) clock_t1

0x1ab0,	// (0x000441d0) clock_t2_ParamLimits

0x1ab0,	// (0x000441d0) clock_t2

0x1ac2,	// (0x000441e2) clock_t3_ParamLimits

0x1ac2,	// (0x000441e2) clock_t3

0x1ad4,	// (0x000441f4) clock_t4_ParamLimits

0x1ad4,	// (0x000441f4) clock_t4

0x1ae6,	// (0x00044206) clock_t5_ParamLimits

0x1ae6,	// (0x00044206) clock_t5

0x1afb,	// (0x0004421b) clock_t6_ParamLimits

0x1afb,	// (0x0004421b) clock_t6

0x1b0d,	// (0x0004422d) clock_t7_ParamLimits

0x1b0d,	// (0x0004422d) clock_t7

0x1b1f,	// (0x0004423f) clock_t8_ParamLimits

0x1b1f,	// (0x0004423f) clock_t8

0x1b33,	// (0x00044253) clock_t9_ParamLimits

0x1b33,	// (0x00044253) clock_t9

0x0008,

0xf15b,	// (0x0005187b) clock_t_ParamLimits

0xf15b,	// (0x0005187b) clock_t

0xc34d,	// (0x0004ea6d) popup_clock_analogue_window_cp02

0xc34d,	// (0x0004ea6d) popup_clock_digital_window_cp01

0xc355,	// (0x0004ea75) listscroll_help_pane

0xc027,	// (0x0004e747) phob_pre_status_pane

0xc35f,	// (0x0004ea7f) grid_qdial_pane

0xc027,	// (0x0004e747) listscroll_mce_pane

0xc369,	// (0x0004ea89) bg_notes_pane

0xc377,	// (0x0004ea97) list_notes_pane

0x1b47,	// (0x00044267) scroll_pane_cp06

0xc385,	// (0x0004eaa5) bg_calc_paper_pane

0xa62b,	// (0x0004cd4b) list_calc_pane

0xc399,	// (0x0004eab9) bg_calc_display_pane

0x1b5b,	// (0x0004427b) calc_display_pane_t1

0x1b6d,	// (0x0004428d) calc_display_pane_t2

0xa645,	// (0x0004cd65) calc_display_pane_t3

0x0002,

0xf16e,	// (0x0005188e) calc_display_pane_t

0x1b7f,	// (0x0004429f) cell_calc_pane_ParamLimits

0x1b7f,	// (0x0004429f) cell_calc_pane

0xc3a5,	// (0x0004eac5) bg_calc_paper_pane_g1

0xc3b1,	// (0x0004ead1) bg_calc_paper_pane_g2

0xc3bd,	// (0x0004eadd) bg_calc_paper_pane_g3

0xc3c9,	// (0x0004eae9) bg_calc_paper_pane_g4

0xc3d5,	// (0x0004eaf5) bg_calc_paper_pane_g5

0x1bb6,	// (0x000442d6) bg_calc_paper_pane_g6

0x1bc7,	// (0x000442e7) bg_calc_paper_pane_g7

0x1bd8,	// (0x000442f8) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x00051895) bg_calc_paper_pane_g

0x1beb,	// (0x0004430b) calc_bg_paper_pane_g9

0x1bfe,	// (0x0004431e) list_calc_item_pane_ParamLimits

0x1bfe,	// (0x0004431e) list_calc_item_pane

0xc3e1,	// (0x0004eb01) list_calc_item_pane_g1

0xa657,	// (0x0004cd77) list_calc_item_pane_t1_ParamLimits

0xa657,	// (0x0004cd77) list_calc_item_pane_t1

0x1c16,	// (0x00044336) list_calc_item_pane_t2_ParamLimits

0x1c16,	// (0x00044336) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x000518a6) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x000518a6) list_calc_item_pane_t

0xc3ee,	// (0x0004eb0e) cell_calc_pane_g1

0xc3f8,	// (0x0004eb18) grid_highlight_pane_cp02

0xc41a,	// (0x0004eb3a) bg_calc_display_pane_g1

0xa669,	// (0x0004cd89) bg_calc_display_pane_g2

0xc423,	// (0x0004eb43) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x000518b0) bg_calc_display_pane_g

0x1c48,	// (0x00044368) cell_qdial_pane_ParamLimits

0x1c48,	// (0x00044368) cell_qdial_pane

0x1c5c,	// (0x0004437c) cell_qdial_pane_g1_ParamLimits

0x1c5c,	// (0x0004437c) cell_qdial_pane_g1

0x1c72,	// (0x00044392) cell_qdial_pane_g2_ParamLimits

0x1c72,	// (0x00044392) cell_qdial_pane_g2

0xc42c,	// (0x0004eb4c) cell_qdial_pane_g3_ParamLimits

0xc42c,	// (0x0004eb4c) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x000518b7) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x000518b7) cell_qdial_pane_g

0x1c99,	// (0x000443b9) cell_qdial_pane_t1_ParamLimits

0x1c99,	// (0x000443b9) cell_qdial_pane_t1

0x1cb1,	// (0x000443d1) cell_qdial_pane_t2_ParamLimits

0x1cb1,	// (0x000443d1) cell_qdial_pane_t2

0x1cc4,	// (0x000443e4) cell_qdial_pane_t3_ParamLimits

0x1cc4,	// (0x000443e4) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x000518c0) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x000518c0) cell_qdial_pane_t

0xc027,	// (0x0004e747) grid_highlight_pane_cp04

0xc438,	// (0x0004eb58) thumbnail_qdial_pane_ParamLimits

0xc438,	// (0x0004eb58) thumbnail_qdial_pane

0xc494,	// (0x0004ebb4) list_help_pane

0xc49d,	// (0x0004ebbd) scroll_pane_cp02

0x1cd7,	// (0x000443f7) help_list_pane_t1_ParamLimits

0x1cd7,	// (0x000443f7) help_list_pane_t1

0xa673,	// (0x0004cd93) bg_notes_pane_g2

0xa67b,	// (0x0004cd9b) bg_notes_pane_g3

0xa683,	// (0x0004cda3) notes_bg_pane_g1

0xa68b,	// (0x0004cdab) notes_bg_pane_g4

0xa693,	// (0x0004cdb3) notes_bg_pane_g5

0xa69b,	// (0x0004cdbb) notes_bg_pane_g6

0xa6a3,	// (0x0004cdc3) notes_bg_pane_g7

0xa6ab,	// (0x0004cdcb) notes_bg_pane_g8

0xa6b3,	// (0x0004cdd3) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x000518de) notes_bg_pane_g

0x1cf7,	// (0x00044417) list_notes_text_pane_ParamLimits

0x1cf7,	// (0x00044417) list_notes_text_pane

0xc4a6,	// (0x0004ebc6) list_notes_text_pane_g1

0x0b9d,	// (0x000432bd) list_notes_text_pane_t1

0xc399,	// (0x0004eab9) listscroll_cale_week_pane

0x1d2b,	// (0x0004444b) bg_cale_heading_pane

0xc4c0,	// (0x0004ebe0) bg_cale_pane_cp01

0x1d43,	// (0x00044463) cale_week_corner_pane

0x1d54,	// (0x00044474) cale_week_day_heading_pane

0x1d6c,	// (0x0004448c) cale_week_scroll_pane_g1

0x1d81,	// (0x000444a1) cale_week_scroll_pane_g2

0x1d92,	// (0x000444b2) cale_week_scroll_pane_g3

0x1da3,	// (0x000444c3) cale_week_scroll_pane_g4

0x1db4,	// (0x000444d4) cale_week_scroll_pane_g5

0x1dc7,	// (0x000444e7) cale_week_scroll_pane_g6

0x1dda,	// (0x000444fa) cale_week_scroll_pane_g7

0x1ded,	// (0x0004450d) cale_week_scroll_pane_g8

0x1e00,	// (0x00044520) cale_week_scroll_pane_g9

0x1e11,	// (0x00044531) cale_week_scroll_pane_g10

0x1e22,	// (0x00044542) cale_week_scroll_pane_g11

0x1e33,	// (0x00044553) cale_week_scroll_pane_g12

0x1e44,	// (0x00044564) cale_week_scroll_pane_g13

0x1e55,	// (0x00044575) cale_week_scroll_pane_g14

0x1e66,	// (0x00044586) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x000518ed) cale_week_scroll_pane_g

0x1e7b,	// (0x0004459b) cale_week_time_pane

0x1e8e,	// (0x000445ae) grid_cale_week_pane

0x1ea3,	// (0x000445c3) scroll_pane_cp08

0x1ebd,	// (0x000445dd) cell_cale_week_pane_ParamLimits

0x1ebd,	// (0x000445dd) cell_cale_week_pane

0x1efd,	// (0x0004461d) cale_week_day_heading_pane_t1

0x1f11,	// (0x00044631) cale_week_day_heading_pane_t2

0x1f25,	// (0x00044645) cale_week_day_heading_pane_t3

0x1f39,	// (0x00044659) cale_week_day_heading_pane_t4

0x1f4d,	// (0x0004466d) cale_week_day_heading_pane_t5

0x1f61,	// (0x00044681) cale_week_day_heading_pane_t6

0x1f77,	// (0x00044697) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x0005190c) cale_week_day_heading_pane_t

0xc4eb,	// (0x0004ec0b) bg_cale_side_pane

0x1f8b,	// (0x000446ab) cale_week_time_pane_t1

0x1fa3,	// (0x000446c3) cale_week_time_pane_t2

0x1fbb,	// (0x000446db) cale_week_time_pane_t3

0x1fd3,	// (0x000446f3) cale_week_time_pane_t4

0x1feb,	// (0x0004470b) cale_week_time_pane_t5

0x2003,	// (0x00044723) cale_week_time_pane_t6

0x201b,	// (0x0004473b) cale_week_time_pane_t7

0x2033,	// (0x00044753) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x0005191b) cale_week_time_pane_t

0x204b,	// (0x0004476b) cell_cale_week_pane_g2

0x2064,	// (0x00044784) cell_cale_week_pane_g3_ParamLimits

0x2064,	// (0x00044784) cell_cale_week_pane_g3

0xc4f9,	// (0x0004ec19) grid_highlight_pane_cp07

0xc501,	// (0x0004ec21) listscroll_gms_pane

0xc50b,	// (0x0004ec2b) grid_gms_pane

0xc514,	// (0x0004ec34) listscroll_gms_pane_g1

0xc51c,	// (0x0004ec3c) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x0005192c) listscroll_gms_pane_g

0x207c,	// (0x0004479c) scroll_pane_cp010

0x2087,	// (0x000447a7) cell_gms_pane_ParamLimits

0x2087,	// (0x000447a7) cell_gms_pane

0x2099,	// (0x000447b9) cell_gms_pane_g1

0xc524,	// (0x0004ec44) cell_gms_pane_g2

0xc4a6,	// (0x0004ebc6) cell_gms_pane_g3

0xc52c,	// (0x0004ec4c) cell_gms_pane_g4

0x0003,

0xf211,	// (0x00051931) cell_gms_pane_g

0xc535,	// (0x0004ec55) grid_highlight_pane_cp09

0x416c,	// (0x0004688c) phob_pre_status_pane_g1

0x4174,	// (0x00046894) phob_pre_status_pane_g2

0x417c,	// (0x0004689c) phob_pre_status_pane_g3

0x4184,	// (0x000468a4) phob_pre_status_pane_g4

0x0004,

0xf533,	// (0x00051c53) phob_pre_status_pane_g

0x4196,	// (0x000468b6) phob_pre_status_pane_t1

0x41a4,	// (0x000468c4) phob_pre_status_pane_t2

0x41b4,	// (0x000468d4) phob_pre_status_pane_t3

0x0002,

0xf53e,	// (0x00051c5e) phob_pre_status_pane_t

0xc027,	// (0x0004e747) bg_list_pane_cp05

0xa6c3,	// (0x0004cde3) grid_vorec_pane

0xa6cb,	// (0x0004cdeb) vorec_t1

0xa6d9,	// (0x0004cdf9) vorec_t2

0xa6e7,	// (0x0004ce07) vorec_t3

0xa6f5,	// (0x0004ce15) vorec_t4

0xa703,	// (0x0004ce23) vorec_t5

0xa711,	// (0x0004ce31) vorec_t6

0x0006,

0xf21a,	// (0x0005193a) vorec_t

0xa72d,	// (0x0004ce4d) wait_bar_pane_cp01

0xc53d,	// (0x0004ec5d) cell_vorec_pane_ParamLimits

0xc53d,	// (0x0004ec5d) cell_vorec_pane

0xc550,	// (0x0004ec70) cell_vorec_pane_g1

0xc027,	// (0x0004e747) grid_highlight_pane_cp05

0x20b9,	// (0x000447d9) cams_zoom_pane

0x20c8,	// (0x000447e8) image_vga_pane

0x20e2,	// (0x00044802) main_camera_pane_g1

0x20f4,	// (0x00044814) main_camera_pane_g2

0x2106,	// (0x00044826) main_camera_pane_g3

0x2118,	// (0x00044838) main_camera_pane_g4

0x212a,	// (0x0004484a) main_camera_pane_g5

0x213c,	// (0x0004485c) main_camera_pane_g6

0x214e,	// (0x0004486e) main_camera_pane_g7

0x0007,

0xf229,	// (0x00051949) main_camera_pane_g

0x2160,	// (0x00044880) main_camera_pane_t1

0x2176,	// (0x00044896) main_camera_pane_t2

0x0001,

0xf23a,	// (0x0005195a) main_camera_pane_t

0x21b2,	// (0x000448d2) cams_zoom_pane_cp_ParamLimits

0x21b2,	// (0x000448d2) cams_zoom_pane_cp

0x21da,	// (0x000448fa) image_cif_pane_ParamLimits

0x21da,	// (0x000448fa) image_cif_pane

0x2215,	// (0x00044935) image_subqcif_pane

0x221d,	// (0x0004493d) main_video_pane_g1_ParamLimits

0x221d,	// (0x0004493d) main_video_pane_g1

0x2241,	// (0x00044961) main_video_pane_g2_ParamLimits

0x2241,	// (0x00044961) main_video_pane_g2

0x2277,	// (0x00044997) main_video_pane_g3_ParamLimits

0x2277,	// (0x00044997) main_video_pane_g3

0x22a7,	// (0x000449c7) main_video_pane_g4_ParamLimits

0x22a7,	// (0x000449c7) main_video_pane_g4

0x22d7,	// (0x000449f7) main_video_pane_g5_ParamLimits

0x22d7,	// (0x000449f7) main_video_pane_g5

0xc566,	// (0x0004ec86) main_video_pane_g6_ParamLimits

0xc566,	// (0x0004ec86) main_video_pane_g6

0x0006,

0xf23f,	// (0x0005195f) main_video_pane_g_ParamLimits

0xf23f,	// (0x0005195f) main_video_pane_g

0x2302,	// (0x00044a22) main_video_pane_t1_ParamLimits

0x2302,	// (0x00044a22) main_video_pane_t1

0xc580,	// (0x0004eca0) cams_zoom_pane_g1

0xc589,	// (0x0004eca9) cams_zoom_pane_g2

0xc592,	// (0x0004ecb2) cams_zoom_pane_g3

0xc59b,	// (0x0004ecbb) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x0005196e) cams_zoom_pane_g

0x235f,	// (0x00044a7f) grid_cams_pane

0x2379,	// (0x00044a99) linegrid_cams_pane

0x238c,	// (0x00044aac) cell_cams_pane_ParamLimits

0x238c,	// (0x00044aac) cell_cams_pane

0xc5a4,	// (0x0004ecc4) cams_burst_image_pane

0xc5ac,	// (0x0004eccc) cell_cams_pane_g1

0xc027,	// (0x0004e747) grid_highlight_pane_cp03

0xc3ee,	// (0x0004eb0e) mp_bg_pane_g1

0xc027,	// (0x0004e747) bg_list_pane_cp03

0xe170,	// (0x00050890) bg_mp_pane

0xe178,	// (0x00050898) grid_mp_pane

0xe180,	// (0x000508a0) media_player_g1

0xe188,	// (0x000508a8) media_player_t1

0xe196,	// (0x000508b6) media_player_t2

0xe1a4,	// (0x000508c4) media_player_t3

0xe1b2,	// (0x000508d2) media_player_t4

0xe1c0,	// (0x000508e0) media_player_t5

0xe1ce,	// (0x000508ee) media_player_t6

0xe1dc,	// (0x000508fc) media_player_t7

0x0006,

0x0220,	// (0x00042940) media_player_t

0xe1ea,	// (0x0005090a) wait_bar_pane_cp02

0xf51f,	// (0x00051c3f) main_usb_pane_t

0x4163,	// (0x00046883) cell_mp_pane

0xc3ee,	// (0x0004eb0e) cell_mp_pane_g1

0xc027,	// (0x0004e747) grid_highlight_pane_cp06

0xc5b4,	// (0x0004ecd4) grid_skin_colour_pane

0xc5bc,	// (0x0004ecdc) list_highlight_pane_cp03

0x23ac,	// (0x00044acc) skin_g1

0xc5c4,	// (0x0004ece4) skin_t1

0xc5d3,	// (0x0004ecf3) skin_t2

0x0001,

0xf283,	// (0x000519a3) skin_t

0x23b4,	// (0x00044ad4) cell_skin_colour_pane_ParamLimits

0x23b4,	// (0x00044ad4) cell_skin_colour_pane

0xc5e1,	// (0x0004ed01) cell_skin_colour_pane_g1

0x242d,	// (0x00044b4d) call_video_g1_ParamLimits

0x242d,	// (0x00044b4d) call_video_g1

0x2449,	// (0x00044b69) call_video_g2_ParamLimits

0x2449,	// (0x00044b69) call_video_g2

0x0001,

0xf288,	// (0x000519a8) call_video_g_ParamLimits

0xf288,	// (0x000519a8) call_video_g

0x249b,	// (0x00044bbb) call_video_uplink_pane_cp1_ParamLimits

0x249b,	// (0x00044bbb) call_video_uplink_pane_cp1

0xc5f3,	// (0x0004ed13) call_video_uplink_pane_cp2

0x253a,	// (0x00044c5a) video_down_crop_pane_ParamLimits

0x253a,	// (0x00044c5a) video_down_crop_pane

0x2623,	// (0x00044d43) video_down_pane_ParamLimits

0x2623,	// (0x00044d43) video_down_pane

0xc5fb,	// (0x0004ed1b) video_down_subqcif_pane_ParamLimits

0xc5fb,	// (0x0004ed1b) video_down_subqcif_pane

0xc613,	// (0x0004ed33) video_down_subqcif_pane_cp_ParamLimits

0xc613,	// (0x0004ed33) video_down_subqcif_pane_cp

0xc639,	// (0x0004ed59) im_reading_pane_ParamLimits

0xc639,	// (0x0004ed59) im_reading_pane

0x2731,	// (0x00044e51) im_writing_pane_ParamLimits

0x2731,	// (0x00044e51) im_writing_pane

0x2747,	// (0x00044e67) im_reading_pane_t1

0xc653,	// (0x0004ed73) list_im_pane

0xc664,	// (0x0004ed84) scroll_pane_cp07

0x2783,	// (0x00044ea3) im_writing_pane_t1_ParamLimits

0x2783,	// (0x00044ea3) im_writing_pane_t1

0xc67d,	// (0x0004ed9d) im_writing_pane_t2_ParamLimits

0xc67d,	// (0x0004ed9d) im_writing_pane_t2

0x0001,

0xf292,	// (0x000519b2) im_writing_pane_t_ParamLimits

0xf292,	// (0x000519b2) im_writing_pane_t

0xc027,	// (0x0004e747) input_focus_pane_cp04

0xc027,	// (0x0004e747) input_focus_pane_cp05

0x2798,	// (0x00044eb8) list_im_single_pane_ParamLimits

0x2798,	// (0x00044eb8) list_im_single_pane

0x27ae,	// (0x00044ece) list_single_im_pane_t1

0x4123,	// (0x00046843) blid_accuracy_pane

0x412b,	// (0x0004684b) blid_compass_pane

0x4135,	// (0x00046855) main_location_t1

0x4145,	// (0x00046865) main_location_t2

0x4155,	// (0x00046875) main_location_t3

0x0002,

0xf52c,	// (0x00051c4c) main_location_t

0xc027,	// (0x0004e747) aid_levels_location

0xc3ee,	// (0x0004eb0e) blid_accuracy_pane_g1

0xc3ee,	// (0x0004eb0e) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x00051a14) blid_accuracy_pane_g

0xc6c5,	// (0x0004ede5) wml_content_pane

0xc703,	// (0x0004ee23) wml_button_pane_ParamLimits

0xc703,	// (0x0004ee23) wml_button_pane

0x27bd,	// (0x00044edd) wml_list_single_large_pane_ParamLimits

0x27bd,	// (0x00044edd) wml_list_single_large_pane

0x27d4,	// (0x00044ef4) wml_list_single_medium_pane_ParamLimits

0x27d4,	// (0x00044ef4) wml_list_single_medium_pane

0x27ec,	// (0x00044f0c) wml_list_single_small_pane_ParamLimits

0x27ec,	// (0x00044f0c) wml_list_single_small_pane

0xc717,	// (0x0004ee37) wml_selection_box_pane_ParamLimits

0xc717,	// (0x0004ee37) wml_selection_box_pane

0xc72a,	// (0x0004ee4a) wml_list_single_pane_t1

0xc739,	// (0x0004ee59) wml_list_single_medium_pane_t1

0xc748,	// (0x0004ee68) wml_list_single_large_pane_t1

0xc757,	// (0x0004ee77) input_focus_pane_cp02_ParamLimits

0xc757,	// (0x0004ee77) input_focus_pane_cp02

0xc76a,	// (0x0004ee8a) wml_selection_box_pane_g1

0xc773,	// (0x0004ee93) wml_selection_box_pane_t1_ParamLimits

0xc773,	// (0x0004ee93) wml_selection_box_pane_t1

0xc282,	// (0x0004e9a2) bg_wml_button_pane_ParamLimits

0xc282,	// (0x0004e9a2) bg_wml_button_pane

0xc78b,	// (0x0004eeab) wml_button_pane_g1

0xc793,	// (0x0004eeb3) wml_button_pane_t1

0xc78b,	// (0x0004eeab) wml_button_bg_pane_g1

0xc7a3,	// (0x0004eec3) wml_button_bg_pane_g2

0xc7ab,	// (0x0004eecb) wml_button_bg_pane_g3

0xc7b3,	// (0x0004eed3) wml_button_bg_pane_g4

0xc7bb,	// (0x0004eedb) wml_button_bg_pane_g5

0xc7c3,	// (0x0004eee3) wml_button_bg_pane_g6

0xc7cb,	// (0x0004eeeb) wml_button_bg_pane_g7

0xc7d3,	// (0x0004eef3) wml_button_bg_pane_g8

0xc7db,	// (0x0004eefb) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x000519b7) wml_button_bg_pane_g

0x280a,	// (0x00044f2a) bg_list_pane_cp02

0xc7e3,	// (0x0004ef03) mce_header_pane_ParamLimits

0xc7e3,	// (0x0004ef03) mce_header_pane

0xc7f9,	// (0x0004ef19) mce_icon_pane

0xc7f9,	// (0x0004ef19) mce_image_pane

0xc802,	// (0x0004ef22) mce_text_pane_ParamLimits

0xc802,	// (0x0004ef22) mce_text_pane

0x2812,	// (0x00044f32) scroll_pane_cp03

0xc6fb,	// (0x0004ee1b) scroll_pane_cp04

0xc815,	// (0x0004ef35) scroll_pane_cp05_ParamLimits

0xc815,	// (0x0004ef35) scroll_pane_cp05

0x281c,	// (0x00044f3c) mce_header_field_pane_ParamLimits

0x281c,	// (0x00044f3c) mce_header_field_pane

0x2833,	// (0x00044f53) mce_header_field_pane_2_ParamLimits

0x2833,	// (0x00044f53) mce_header_field_pane_2

0x2849,	// (0x00044f69) mce_header_field_pane_3

0x2851,	// (0x00044f71) list_single_mce_message_pane_ParamLimits

0x2851,	// (0x00044f71) list_single_mce_message_pane

0x2869,	// (0x00044f89) list_single_mce_smart_pane_ParamLimits

0x2869,	// (0x00044f89) list_single_mce_smart_pane

0xc821,	// (0x0004ef41) input_focus_pane_cp03

0xc82a,	// (0x0004ef4a) list_header_data_pane

0x288c,	// (0x00044fac) mce_header_field_pane_t1

0x289c,	// (0x00044fbc) list_single_mce_header_pane_ParamLimits

0x289c,	// (0x00044fbc) list_single_mce_header_pane

0xc832,	// (0x0004ef52) list_single_mce_header_pane_t1

0xc841,	// (0x0004ef61) list_single_mce_message_pane_g1

0xc849,	// (0x0004ef69) list_single_mce_message_pane_t1

0x28ce,	// (0x00044fee) bg_cale_heading_pane_cp01_ParamLimits

0x28ce,	// (0x00044fee) bg_cale_heading_pane_cp01

0xc857,	// (0x0004ef77) bg_cale_pane_cp02_ParamLimits

0xc857,	// (0x0004ef77) bg_cale_pane_cp02

0x28f1,	// (0x00045011) cale_month_corner_pane

0x2907,	// (0x00045027) cale_month_day_heading_pane_ParamLimits

0x2907,	// (0x00045027) cale_month_day_heading_pane

0x293a,	// (0x0004505a) cale_month_pane_g1_ParamLimits

0x293a,	// (0x0004505a) cale_month_pane_g1

0x2956,	// (0x00045076) cale_month_pane_g2_ParamLimits

0x2956,	// (0x00045076) cale_month_pane_g2

0x2971,	// (0x00045091) cale_month_pane_g3_ParamLimits

0x2971,	// (0x00045091) cale_month_pane_g3

0x299d,	// (0x000450bd) cale_month_pane_g4_ParamLimits

0x299d,	// (0x000450bd) cale_month_pane_g4

0x29c9,	// (0x000450e9) cale_month_pane_g5_ParamLimits

0x29c9,	// (0x000450e9) cale_month_pane_g5

0x29fd,	// (0x0004511d) cale_month_pane_g6_ParamLimits

0x29fd,	// (0x0004511d) cale_month_pane_g6

0x2a39,	// (0x00045159) cale_month_pane_g7_ParamLimits

0x2a39,	// (0x00045159) cale_month_pane_g7

0x2a75,	// (0x00045195) cale_month_pane_g8_ParamLimits

0x2a75,	// (0x00045195) cale_month_pane_g8

0x2ab1,	// (0x000451d1) cale_month_pane_g9_ParamLimits

0x2ab1,	// (0x000451d1) cale_month_pane_g9

0x2aeb,	// (0x0004520b) cale_month_pane_g10_ParamLimits

0x2aeb,	// (0x0004520b) cale_month_pane_g10

0x2b25,	// (0x00045245) cale_month_pane_g11_ParamLimits

0x2b25,	// (0x00045245) cale_month_pane_g11

0x2b5f,	// (0x0004527f) cale_month_pane_g12_ParamLimits

0x2b5f,	// (0x0004527f) cale_month_pane_g12

0x2b99,	// (0x000452b9) cale_month_pane_g13_ParamLimits

0x2b99,	// (0x000452b9) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x000519ca) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x000519ca) cale_month_pane_g

0x2bd3,	// (0x000452f3) cale_month_week_pane

0x2be6,	// (0x00045306) grid_cale_month_pane_ParamLimits

0x2be6,	// (0x00045306) grid_cale_month_pane

0x2c14,	// (0x00045334) cale_month_day_heading_pane_t1

0x2c72,	// (0x00045392) cale_month_day_heading_pane_t2

0x2cd7,	// (0x000453f7) cale_month_day_heading_pane_t3

0x2d3c,	// (0x0004545c) cale_month_day_heading_pane_t4

0x2da1,	// (0x000454c1) cale_month_day_heading_pane_t5

0x2e16,	// (0x00045536) cale_month_day_heading_pane_t6

0x2e8b,	// (0x000455ab) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x000519e5) cale_month_day_heading_pane_t

0xc4eb,	// (0x0004ec0b) bg_cale_side_pane_cp01

0x2f00,	// (0x00045620) cale_month_week_pane_t1

0x2f17,	// (0x00045637) cale_month_week_pane_t2

0x2f2e,	// (0x0004564e) cale_month_week_pane_t3

0x2f45,	// (0x00045665) cale_month_week_pane_t4

0x2f5c,	// (0x0004567c) cale_month_week_pane_t5

0x2f73,	// (0x00045693) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x000519f4) cale_month_week_pane_t

0x2f8a,	// (0x000456aa) cell_cale_month_pane_ParamLimits

0x2f8a,	// (0x000456aa) cell_cale_month_pane

0xa7ff,	// (0x0004cf1f) cell_cale_month_pane_g1

0x3060,	// (0x00045780) cell_cale_month_pane_t1_ParamLimits

0x3060,	// (0x00045780) cell_cale_month_pane_t1

0xc4f9,	// (0x0004ec19) grid_highlight_pane_cp08

0xc3ee,	// (0x0004eb0e) main_smil_g1

0x307c,	// (0x0004579c) smil_status_pane

0xc88c,	// (0x0004efac) smil_text_pane

0xe088,	// (0x000507a8) bg_popup_call3_rect_pane_g8

0xe090,	// (0x000507b0) bg_popup_call3_rect_pane_g9

0x0008,

0x01c3,	// (0x000428e3) bg_popup_call3_rect_pane_g

0xe312,	// (0x00050a32) smil_status_volume_pane_g1

0xc896,	// (0x0004efb6) smil_status_pane_t1

0xa9a8,	// (0x0004d0c8) volume_smil_pane

0xc8ad,	// (0x0004efcd) list_smil_text_pane

0x3091,	// (0x000457b1) scroll_pane_cp011

0x309c,	// (0x000457bc) smil_text_list_pane_t1_ParamLimits

0x309c,	// (0x000457bc) smil_text_list_pane_t1

0xa80b,	// (0x0004cf2b) aid_volume_smil_ParamLimits

0xa80b,	// (0x0004cf2b) aid_volume_smil

0xc3ee,	// (0x0004eb0e) smil_volume_pane_g1

0xc3ee,	// (0x0004eb0e) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x00051a14) smil_volume_pane_g

0xc399,	// (0x0004eab9) listscroll_cale_day_pane

0xc8b7,	// (0x0004efd7) bg_cale_pane

0xc8cf,	// (0x0004efef) list_cale_pane

0xc8e0,	// (0x0004f000) scroll_pane_cp09

0xc8f1,	// (0x0004f011) cale_bg_pane_g1

0xc8f9,	// (0x0004f019) cale_bg_pane_g2

0xc901,	// (0x0004f021) cale_bg_pane_g3

0xc909,	// (0x0004f029) cale_bg_pane_g4

0xc911,	// (0x0004f031) cale_bg_pane_g5

0xc919,	// (0x0004f039) cale_bg_pane_g6

0xc921,	// (0x0004f041) cale_bg_pane_g7

0xc929,	// (0x0004f049) cale_bg_pane_g8

0xc931,	// (0x0004f051) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x00051a19) cale_bg_pane_g

0x30f0,	// (0x00045810) list_cale_time_pane_ParamLimits

0x30f0,	// (0x00045810) list_cale_time_pane

0x3105,	// (0x00045825) list_cale_time_pane_g1_ParamLimits

0x3105,	// (0x00045825) list_cale_time_pane_g1

0xc939,	// (0x0004f059) list_cale_time_pane_g2_ParamLimits

0xc939,	// (0x0004f059) list_cale_time_pane_g2

0x3111,	// (0x00045831) list_cale_time_pane_g3_ParamLimits

0x3111,	// (0x00045831) list_cale_time_pane_g3

0x312d,	// (0x0004584d) list_cale_time_pane_g4_ParamLimits

0x312d,	// (0x0004584d) list_cale_time_pane_g4

0x313b,	// (0x0004585b) list_cale_time_pane_g5_ParamLimits

0x313b,	// (0x0004585b) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x00051a2c) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x00051a2c) list_cale_time_pane_g

0x3149,	// (0x00045869) list_cale_time_pane_t1_ParamLimits

0x3149,	// (0x00045869) list_cale_time_pane_t1

0x3171,	// (0x00045891) list_cale_time_pane_t2_ParamLimits

0x3171,	// (0x00045891) list_cale_time_pane_t2

0x3444,	// (0x00045b64) aid_blid_cardinal_pane

0x3482,	// (0x00045ba2) compass_pane_t4

0x3199,	// (0x000458b9) list_cale_time_pane_t4_ParamLimits

0x3199,	// (0x000458b9) list_cale_time_pane_t4

0x3490,	// (0x00045bb0) compass_pane_t5

0x349e,	// (0x00045bbe) compass_pane_t6

0x34ac,	// (0x00045bcc) compass_pane_t7

0xcd67,	// (0x0004f487) navi_pane_cc_t1

0xceca,	// (0x0004f5ea) aid_phob_thumbnail_center_pane

0x3b37,	// (0x00046257) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x00051a39) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x00051a39) list_cale_time_pane_t

0xbc80,	// (0x0004e3a0) bg_popup_window_pane_cp02_ParamLimits

0xbc80,	// (0x0004e3a0) bg_popup_window_pane_cp02

0xc953,	// (0x0004f073) heading_pane_cp01_ParamLimits

0xc953,	// (0x0004f073) heading_pane_cp01

0xc95f,	// (0x0004f07f) loc_req_pane_ParamLimits

0xc95f,	// (0x0004f07f) loc_req_pane

0xc96f,	// (0x0004f08f) loc_type_pane_ParamLimits

0xc96f,	// (0x0004f08f) loc_type_pane

0xc981,	// (0x0004f0a1) loc_type_pane_t1_ParamLimits

0xc981,	// (0x0004f0a1) loc_type_pane_t1

0xc993,	// (0x0004f0b3) loc_type_pane_t2_ParamLimits

0xc993,	// (0x0004f0b3) loc_type_pane_t2

0xc9a5,	// (0x0004f0c5) loc_type_pane_t3_ParamLimits

0xc9a5,	// (0x0004f0c5) loc_type_pane_t3

0x0002,

0xf320,	// (0x00051a40) loc_type_pane_t_ParamLimits

0xf320,	// (0x00051a40) loc_type_pane_t

0xc9b7,	// (0x0004f0d7) list_loc_req_pane

0xc9c1,	// (0x0004f0e1) scroll_pane_cp012

0x31c1,	// (0x000458e1) list_single_loc_request_popup_menu_pane_ParamLimits

0x31c1,	// (0x000458e1) list_single_loc_request_popup_menu_pane

0xc9cc,	// (0x0004f0ec) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xc9cc,	// (0x0004f0ec) list_single_loc_request_popup_menu_pane_g1

0xc9d8,	// (0x0004f0f8) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xc9d8,	// (0x0004f0f8) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x00051a47) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x00051a47) list_single_loc_request_popup_menu_pane_g

0xc9e4,	// (0x0004f104) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xc9e4,	// (0x0004f104) list_single_loc_request_popup_menu_pane_t1

0xc282,	// (0x0004e9a2) bg_popup_window_pane_cp03_ParamLimits

0xc282,	// (0x0004e9a2) bg_popup_window_pane_cp03

0xd76e,	// (0x0004fe8e) heading_loc_req_pane_ParamLimits

0xd76e,	// (0x0004fe8e) heading_loc_req_pane

0x31ce,	// (0x000458ee) popup_dyc_status_message_window_g1_ParamLimits

0x31ce,	// (0x000458ee) popup_dyc_status_message_window_g1

0x31e2,	// (0x00045902) popup_dyc_status_message_window_t1_ParamLimits

0x31e2,	// (0x00045902) popup_dyc_status_message_window_t1

0x31f7,	// (0x00045917) popup_dyc_status_message_window_t2_ParamLimits

0x31f7,	// (0x00045917) popup_dyc_status_message_window_t2

0x320c,	// (0x0004592c) popup_dyc_status_message_window_t3_ParamLimits

0x320c,	// (0x0004592c) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x00051a4c) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x00051a4c) popup_dyc_status_message_window_t

0xc027,	// (0x0004e747) bg_heading_pane_cp01

0xc9fa,	// (0x0004f11a) heading_loc_req_pane_g1

0xca02,	// (0x0004f122) heading_loc_req_pane_g2

0xca0a,	// (0x0004f12a) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x00051a53) heading_loc_req_pane_g

0xca12,	// (0x0004f132) heading_loc_req_pane_t1

0xca21,	// (0x0004f141) bg_popup_sub_pane_cp01_ParamLimits

0xca21,	// (0x0004f141) bg_popup_sub_pane_cp01

0xca2f,	// (0x0004f14f) popup_cale_events_window_g1_ParamLimits

0xca2f,	// (0x0004f14f) popup_cale_events_window_g1

0xca4f,	// (0x0004f16f) popup_cale_events_window_g2_ParamLimits

0xca4f,	// (0x0004f16f) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x00051a87) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x00051a87) popup_cale_events_window_g

0xca6f,	// (0x0004f18f) popup_cale_events_window_t1_ParamLimits

0xca6f,	// (0x0004f18f) popup_cale_events_window_t1

0xca81,	// (0x0004f1a1) popup_cale_events_window_t2_ParamLimits

0xca81,	// (0x0004f1a1) popup_cale_events_window_t2

0xcabf,	// (0x0004f1df) popup_cale_events_window_t3_ParamLimits

0xcabf,	// (0x0004f1df) popup_cale_events_window_t3

0xcaf9,	// (0x0004f219) popup_cale_events_window_t4_ParamLimits

0xcaf9,	// (0x0004f219) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x00051a8c) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x00051a8c) popup_cale_events_window_t

0x3240,	// (0x00045960) call_type_pane

0x3250,	// (0x00045970) popup_call_status_window_g1

0x3264,	// (0x00045984) popup_call_status_window_g2

0x3278,	// (0x00045998) popup_call_status_window_g3

0x0002,

0xf375,	// (0x00051a95) popup_call_status_window_g

0xcb2f,	// (0x0004f24f) call_type_pane_g1

0xcb38,	// (0x0004f258) call_type_pane_g2

0x0001,

0xf37c,	// (0x00051a9c) call_type_pane_g

0xc027,	// (0x0004e747) bg_popup_sub_pane_cp02

0xcb41,	// (0x0004f261) listscroll_popup_wml_pane

0xcb49,	// (0x0004f269) list_wml_pane

0xcb53,	// (0x0004f273) scroll_pane_cp013

0xcb5e,	// (0x0004f27e) list_single_graphic_popup_wml_pane_ParamLimits

0xcb5e,	// (0x0004f27e) list_single_graphic_popup_wml_pane

0xc3ee,	// (0x0004eb0e) list_single_graphic_popup_wml_pane_g1

0xcb72,	// (0x0004f292) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x00051aa1) list_single_graphic_popup_wml_pane_g

0xcb7a,	// (0x0004f29a) list_single_graphic_popup_wml_pane_t1

0xcb90,	// (0x0004f2b0) aid_call_pane

0xc27a,	// (0x0004e99a) popup_clock_analogue_window_g1

0xc27a,	// (0x0004e99a) popup_clock_analogue_window_g2

0xa8a2,	// (0x0004cfc2) popup_clock_analogue_window_g3

0xa8a2,	// (0x0004cfc2) popup_clock_analogue_window_g4

0xc3ee,	// (0x0004eb0e) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x00051aa6) popup_clock_analogue_window_g

0xa8aa,	// (0x0004cfca) popup_clock_analogue_window_t1

0xa8b8,	// (0x0004cfd8) clock_digital_number_pane_ParamLimits

0xa8b8,	// (0x0004cfd8) clock_digital_number_pane

0xa8c4,	// (0x0004cfe4) clock_digital_number_pane_cp02_ParamLimits

0xa8c4,	// (0x0004cfe4) clock_digital_number_pane_cp02

0xa8d0,	// (0x0004cff0) clock_digital_number_pane_cp03_ParamLimits

0xa8d0,	// (0x0004cff0) clock_digital_number_pane_cp03

0xa8dc,	// (0x0004cffc) clock_digital_number_pane_cp04_ParamLimits

0xa8dc,	// (0x0004cffc) clock_digital_number_pane_cp04

0xa8e8,	// (0x0004d008) clock_digital_separator_pane_ParamLimits

0xa8e8,	// (0x0004d008) clock_digital_separator_pane

0xa8f4,	// (0x0004d014) popup_clock_digital_window_t1

0xc3ee,	// (0x0004eb0e) clock_digital_number_pane_g1

0xc3ee,	// (0x0004eb0e) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x00051a14) clock_digital_number_pane_g

0xc3ee,	// (0x0004eb0e) clock_digital_separator_pane_g1

0xc3ee,	// (0x0004eb0e) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x00051a14) clock_digital_separator_pane_g

0xc027,	// (0x0004e747) bg_popup_window_pane_cp04

0xcb98,	// (0x0004f2b8) heading_pane_cp03

0xcba0,	// (0x0004f2c0) listscroll_popup_gms_pane

0xcba8,	// (0x0004f2c8) grid_large_graphic_popup_pane

0xcbb2,	// (0x0004f2d2) listscroll_popup_gms_pane_g1

0xcbba,	// (0x0004f2da) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x00051ab1) listscroll_popup_gms_pane_g

0xc6fb,	// (0x0004ee1b) scroll_pane_cp014

0xcbc2,	// (0x0004f2e2) cell_large_graphic_popup_pane_ParamLimits

0xcbc2,	// (0x0004f2e2) cell_large_graphic_popup_pane

0xcbda,	// (0x0004f2fa) cell_large_graphic_popup_pane_g1_ParamLimits

0xcbda,	// (0x0004f2fa) cell_large_graphic_popup_pane_g1

0xcbe6,	// (0x0004f306) cell_large_graphic_popup_pane_g2_ParamLimits

0xcbe6,	// (0x0004f306) cell_large_graphic_popup_pane_g2

0xcbf2,	// (0x0004f312) cell_large_graphic_popup_pane_g3_ParamLimits

0xcbf2,	// (0x0004f312) cell_large_graphic_popup_pane_g3

0xcbff,	// (0x0004f31f) cell_large_graphic_popup_pane_g4_ParamLimits

0xcbff,	// (0x0004f31f) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x00051ab6) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x00051ab6) cell_large_graphic_popup_pane_g

0xcc0f,	// (0x0004f32f) grid_highlight_pane_cp010

0xc3ee,	// (0x0004eb0e) bg_popup_call_pane_g1

0xcc19,	// (0x0004f339) list_single_graphic_popup_conf_pane_ParamLimits

0xcc19,	// (0x0004f339) list_single_graphic_popup_conf_pane

0xcc2b,	// (0x0004f34b) list_highlight_pane_cp01

0xcc34,	// (0x0004f354) list_single_graphic_popup_conf_pane_g1

0xcc3c,	// (0x0004f35c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x00051abf) list_single_graphic_popup_conf_pane_g

0xcc44,	// (0x0004f364) list_single_graphic_popup_conf_pane_t1

0xcc52,	// (0x0004f372) linegrid_cams_pane_g1

0x3288,	// (0x000459a8) linegrid_cams_pane_g2

0xc4a6,	// (0x0004ebc6) linegrid_cams_pane_g3

0xcc5b,	// (0x0004f37b) linegrid_cams_pane_g4

0x3291,	// (0x000459b1) linegrid_cams_pane_g5

0x329a,	// (0x000459ba) linegrid_cams_pane_g6

0xc52c,	// (0x0004ec4c) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x00051ac4) linegrid_cams_pane_g

0xcc64,	// (0x0004f384) popup_clock_analogue_window

0xcc64,	// (0x0004f384) popup_clock_digital_window

0xc027,	// (0x0004e747) popup_phob_thumbnail_window

0xc3ee,	// (0x0004eb0e) call_video_uplink_pane_g1

0xcc6d,	// (0x0004f38d) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x00051ad3) call_video_uplink_pane_g

0xc4f9,	// (0x0004ec19) video_uplink_pane

0xcc75,	// (0x0004f395) mce_image_pane_g1

0x32a5,	// (0x000459c5) mce_image_pane_g2

0x32ad,	// (0x000459cd) mce_image_pane_g3

0x32b5,	// (0x000459d5) mce_image_pane_g4

0x32bd,	// (0x000459dd) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x00051ad8) mce_image_pane_g

0xcc7f,	// (0x0004f39f) control_top_pane_stacon_cp01_ParamLimits

0xcc7f,	// (0x0004f39f) control_top_pane_stacon_cp01

0xcc93,	// (0x0004f3b3) uni_indicator_pane_stacon_cp01_ParamLimits

0xcc93,	// (0x0004f3b3) uni_indicator_pane_stacon_cp01

0xcca4,	// (0x0004f3c4) bg_popup_sub_pane_cp03

0x32c5,	// (0x000459e5) chi_dic_find_pane

0x32cd,	// (0x000459ed) listscroll_chi_dic_pane

0x32d6,	// (0x000459f6) main_pane_chidic_g1

0x32e9,	// (0x00045a09) chi_dic_find_pane_t1

0xccae,	// (0x0004f3ce) find_chidic_pane

0xccb7,	// (0x0004f3d7) chi_dic_list_pane_ParamLimits

0xccb7,	// (0x0004f3d7) chi_dic_list_pane

0xccc8,	// (0x0004f3e8) scroll_pane_cp020

0x32f7,	// (0x00045a17) find_chidic_pane_t1

0xc027,	// (0x0004e747) input_focus_pane_cp06

0x3306,	// (0x00045a26) list_chi_dic_pane_ParamLimits

0x3306,	// (0x00045a26) list_chi_dic_pane

0xccd0,	// (0x0004f3f0) list_chi_dic_pane_t1_ParamLimits

0xccd0,	// (0x0004f3f0) list_chi_dic_pane_t1

0xc027,	// (0x0004e747) list_highlight_pane_cp020

0xcce3,	// (0x0004f403) bg_cale_heading_pane_g1

0x331a,	// (0x00045a3a) bg_cale_heading_pane_g2

0x3322,	// (0x00045a42) bg_cale_heading_pane_g3

0x332a,	// (0x00045a4a) bg_cale_heading_pane_g4

0x3334,	// (0x00045a54) bg_cale_heading_pane_g5

0x333e,	// (0x00045a5e) bg_cale_heading_pane_g6

0x3346,	// (0x00045a66) bg_cale_heading_pane_g7

0x334e,	// (0x00045a6e) bg_cale_heading_pane_g8

0x3358,	// (0x00045a78) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x00051ae3) bg_cale_heading_pane_g

0xcce3,	// (0x0004f403) bg_cale_side_pane_g1

0x3362,	// (0x00045a82) bg_cale_side_pane_g2

0x336a,	// (0x00045a8a) bg_cale_side_pane_g3

0x3372,	// (0x00045a92) bg_cale_side_pane_g4

0x337a,	// (0x00045a9a) bg_cale_side_pane_g5

0x3382,	// (0x00045aa2) bg_cale_side_pane_g6

0x338a,	// (0x00045aaa) bg_cale_side_pane_g7

0x3392,	// (0x00045ab2) bg_cale_side_pane_g8

0x339a,	// (0x00045aba) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x00051af6) bg_cale_side_pane_g

0x33a2,	// (0x00045ac2) popup_call_status_window_ParamLimits

0x33a2,	// (0x00045ac2) popup_call_status_window

0xcceb,	// (0x0004f40b) stacon_top_pane

0xccf3,	// (0x0004f413) status_pane_ParamLimits

0xccf3,	// (0x0004f413) status_pane

0xcd08,	// (0x0004f428) status_small_pane

0xcd10,	// (0x0004f430) control_pane

0xc027,	// (0x0004e747) stacon_bottom_pane

0xcd18,	// (0x0004f438) list_single_mce_smart_pane_t1_ParamLimits

0xcd18,	// (0x0004f438) list_single_mce_smart_pane_t1

0xcd2b,	// (0x0004f44b) list_single_mce_smart_pane_t2_ParamLimits

0xcd2b,	// (0x0004f44b) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x00051b09) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x00051b09) list_single_mce_smart_pane_t

0x33e9,	// (0x00045b09) compass_pane

0x33f2,	// (0x00045b12) main_location2_pane_t1

0x3406,	// (0x00045b26) main_location2_pane_t2

0x341a,	// (0x00045b3a) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x00051b0e) main_location2_pane_t

0xcd4a,	// (0x0004f46a) compass_pane_g1_ParamLimits

0xcd4a,	// (0x0004f46a) compass_pane_g1

0x3464,	// (0x00045b84) compass_pane_t1

0x3473,	// (0x00045b93) compass_pane_t2

0x0005,

0xf3f7,	// (0x00051b17) compass_pane_t

0x34ba,	// (0x00045bda) text_secondary_cp61

0xcd5e,	// (0x0004f47e) navi_pane_cams_g5

0xcd81,	// (0x0004f4a1) navi_pane_im_t1

0xcd8f,	// (0x0004f4af) navi_pane_mp_g1_ParamLimits

0xcd8f,	// (0x0004f4af) navi_pane_mp_g1

0xcda3,	// (0x0004f4c3) navi_pane_mp_g2_ParamLimits

0xcda3,	// (0x0004f4c3) navi_pane_mp_g2

0xcdaf,	// (0x0004f4cf) navi_pane_mp_g3_ParamLimits

0xcdaf,	// (0x0004f4cf) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x00051b2b) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x00051b2b) navi_pane_mp_g

0xcdbb,	// (0x0004f4db) navi_pane_mp_t1

0xcdc9,	// (0x0004f4e9) navi_pane_mp_t2

0x0002,

0xf412,	// (0x00051b32) navi_pane_mp_t

0xce13,	// (0x0004f533) navi_pane_vt_g1

0xcdbb,	// (0x0004f4db) navi_pane_vt_t1

0xce1b,	// (0x0004f53b) navi_slider_pane

0xce23,	// (0x0004f543) zooming_pane

0xce2b,	// (0x0004f54b) navi_slider_pane_g1

0xa911,	// (0x0004d031) navi_slider_pane_g2

0x0006,

0xf419,	// (0x00051b39) navi_slider_pane_g

0xce4f,	// (0x0004f56f) aid_levels_zoom

0xce57,	// (0x0004f577) zooming_pane_g1

0xce5f,	// (0x0004f57f) zooming_pane_g2

0xce5f,	// (0x0004f57f) zooming_pane_g3

0x0002,

0x005e,	// (0x0004277e) zooming_pane_g

0xce67,	// (0x0004f587) level_10_zoom

0xce70,	// (0x0004f590) level_11_zoom

0xce79,	// (0x0004f599) level_1_zoom

0xce82,	// (0x0004f5a2) level_2_zoom

0xce8b,	// (0x0004f5ab) level_3_zoom

0xce94,	// (0x0004f5b4) level_4_zoom

0xce9d,	// (0x0004f5bd) level_5_zoom

0xcea6,	// (0x0004f5c6) level_6_zoom

0xceaf,	// (0x0004f5cf) level_7_zoom

0xceb8,	// (0x0004f5d8) level_8_zoom

0xcec1,	// (0x0004f5e1) level_9_zoom

0xced2,	// (0x0004f5f2) popup_phob_thumbnail_window_g1

0xceda,	// (0x0004f5fa) popup_phob_thumbnail_window_g2

0x0001,

0x0065,	// (0x00042785) popup_phob_thumbnail_window_g

0xe1f2,	// (0x00050912) level_1_location

0xe1fa,	// (0x0005091a) level_2_location

0xe202,	// (0x00050922) level_3_location

0xe20a,	// (0x0005092a) level_4_location

0xce23,	// (0x0004f543) level_5_location

0x35f9,	// (0x00045d19) mce_icon_pane_g1

0x3601,	// (0x00045d21) mce_icon_pane_g2

0x0001,

0xf428,	// (0x00051b48) mce_icon_pane_g

0x3609,	// (0x00045d29) main_mup_pane_g1_ParamLimits

0x3609,	// (0x00045d29) main_mup_pane_g1

0x361f,	// (0x00045d3f) main_mup_pane_g2_ParamLimits

0x361f,	// (0x00045d3f) main_mup_pane_g2

0x3637,	// (0x00045d57) main_mup_pane_g3_ParamLimits

0x3637,	// (0x00045d57) main_mup_pane_g3

0x364f,	// (0x00045d6f) main_mup_pane_g4_ParamLimits

0x364f,	// (0x00045d6f) main_mup_pane_g4

0x3667,	// (0x00045d87) main_mup_pane_g5_ParamLimits

0x3667,	// (0x00045d87) main_mup_pane_g5

0x3683,	// (0x00045da3) main_mup_pane_g6_ParamLimits

0x3683,	// (0x00045da3) main_mup_pane_g6

0x369b,	// (0x00045dbb) main_mup_pane_g7_ParamLimits

0x369b,	// (0x00045dbb) main_mup_pane_g7

0x36b3,	// (0x00045dd3) main_mup_pane_g8_ParamLimits

0x36b3,	// (0x00045dd3) main_mup_pane_g8

0x36cb,	// (0x00045deb) main_mup_pane_g9_ParamLimits

0x36cb,	// (0x00045deb) main_mup_pane_g9

0x36e5,	// (0x00045e05) main_mup_pane_g10_ParamLimits

0x36e5,	// (0x00045e05) main_mup_pane_g10

0x36ff,	// (0x00045e1f) main_mup_pane_g11_ParamLimits

0x36ff,	// (0x00045e1f) main_mup_pane_g11

0x3713,	// (0x00045e33) main_mup_pane_g12_ParamLimits

0x3713,	// (0x00045e33) main_mup_pane_g12

0x3729,	// (0x00045e49) main_mup_pane_g13_ParamLimits

0x3729,	// (0x00045e49) main_mup_pane_g13

0x000c,

0xf42d,	// (0x00051b4d) main_mup_pane_g_ParamLimits

0xf42d,	// (0x00051b4d) main_mup_pane_g

0x373d,	// (0x00045e5d) main_mup_pane_t1_ParamLimits

0x373d,	// (0x00045e5d) main_mup_pane_t1

0x3757,	// (0x00045e77) main_mup_pane_t2_ParamLimits

0x3757,	// (0x00045e77) main_mup_pane_t2

0x376f,	// (0x00045e8f) main_mup_pane_t3_ParamLimits

0x376f,	// (0x00045e8f) main_mup_pane_t3

0x3787,	// (0x00045ea7) main_mup_pane_t4_ParamLimits

0x3787,	// (0x00045ea7) main_mup_pane_t4

0x37a5,	// (0x00045ec5) main_mup_pane_t5_ParamLimits

0x37a5,	// (0x00045ec5) main_mup_pane_t5

0x37ba,	// (0x00045eda) main_mup_pane_t6_ParamLimits

0x37ba,	// (0x00045eda) main_mup_pane_t6

0x0005,

0xf448,	// (0x00051b68) main_mup_pane_t_ParamLimits

0xf448,	// (0x00051b68) main_mup_pane_t

0x37cc,	// (0x00045eec) mup_progress_pane_ParamLimits

0x37cc,	// (0x00045eec) mup_progress_pane

0x37d8,	// (0x00045ef8) mup_visualizer_pane_ParamLimits

0x37d8,	// (0x00045ef8) mup_visualizer_pane

0x380c,	// (0x00045f2c) mup_volume_pane_ParamLimits

0x380c,	// (0x00045f2c) mup_volume_pane

0xce05,	// (0x0004f525) mup_visualizer_pane_g1_ParamLimits

0xce05,	// (0x0004f525) mup_visualizer_pane_g1

0xce05,	// (0x0004f525) mup_visualizer_pane_g2_ParamLimits

0xce05,	// (0x0004f525) mup_visualizer_pane_g2

0xcd4a,	// (0x0004f46a) mup_visualizer_pane_g3_ParamLimits

0xcd4a,	// (0x0004f46a) mup_visualizer_pane_g3

0x0002,

0xf455,	// (0x00051b75) mup_visualizer_pane_g_ParamLimits

0xf455,	// (0x00051b75) mup_visualizer_pane_g

0xc3ee,	// (0x0004eb0e) mup_volume_pane_g1

0xceea,	// (0x0004f60a) mup_volume_pane_g2

0x0001,

0x009e,	// (0x000427be) mup_volume_pane_g

0xc3ee,	// (0x0004eb0e) mup_progress_pane_g1

0xcef3,	// (0x0004f613) mup_progress_pane_g2

0xcefc,	// (0x0004f61c) mup_progress_pane_g3

0x0002,

0x00a3,	// (0x000427c3) mup_progress_pane_g

0xc027,	// (0x0004e747) bg_popup_window_pane_cp05

0xcf05,	// (0x0004f625) heading_pane_cp02_ParamLimits

0xcf05,	// (0x0004f625) heading_pane_cp02

0xcf1f,	// (0x0004f63f) list_popup_blid_pane

0xcf27,	// (0x0004f647) list_blid_sat_info_pane_ParamLimits

0xcf27,	// (0x0004f647) list_blid_sat_info_pane

0xcf3a,	// (0x0004f65a) list_blid_sat_info_pane_g1

0xcf42,	// (0x0004f662) list_blid_sat_info_pane_t1

0x3932,	// (0x00046052) mup_equalizer_pane_ParamLimits

0x3932,	// (0x00046052) mup_equalizer_pane

0x394b,	// (0x0004606b) mup_equalizer_pane_cp1_ParamLimits

0x394b,	// (0x0004606b) mup_equalizer_pane_cp1

0x3968,	// (0x00046088) mup_equalizer_pane_cp2_ParamLimits

0x3968,	// (0x00046088) mup_equalizer_pane_cp2

0x3985,	// (0x000460a5) mup_equalizer_pane_cp3_ParamLimits

0x3985,	// (0x000460a5) mup_equalizer_pane_cp3

0x39a6,	// (0x000460c6) mup_equalizer_pane_cp4_ParamLimits

0x39a6,	// (0x000460c6) mup_equalizer_pane_cp4

0x39c7,	// (0x000460e7) mup_equalizer_pane_cp5

0x39db,	// (0x000460fb) mup_equalizer_pane_cp6

0x39ef,	// (0x0004610f) mup_equalizer_pane_cp7

0xe110,	// (0x00050830) bg_popup_call_poc_act_pane_g9

0xe118,	// (0x00050838) bg_popup_call_poc_act_pane_g10

0xe120,	// (0x00050840) bg_popup_call_poc_act_pane_g11

0x000a,

0xc282,	// (0x0004e9a2) mup_scale_pane

0xc3ee,	// (0x0004eb0e) mup_scale_pane_g1

0xcf50,	// (0x0004f670) mup_scale_pane_g2

0x0006,

0xf471,	// (0x00051b91) mup_scale_pane_g

0xcf74,	// (0x0004f694) msg_data_pane

0xcf7c,	// (0x0004f69c) scroll_pane_cp017

0x0c5d,	// (0x0004337d) bg_list_pane_cp04_ParamLimits

0x0c5d,	// (0x0004337d) bg_list_pane_cp04

0xcf84,	// (0x0004f6a4) msg_data_pane_g1

0x3a15,	// (0x00046135) msg_data_pane_g2

0x32ad,	// (0x000459cd) msg_data_pane_g3

0x3a1d,	// (0x0004613d) msg_data_pane_g4

0x3a25,	// (0x00046145) msg_data_pane_g5

0x3a2d,	// (0x0004614d) msg_data_pane_g6

0x3a35,	// (0x00046155) msg_data_pane_g7

0x0006,

0xf480,	// (0x00051ba0) msg_data_pane_g

0x0c7d,	// (0x0004339d) msg_text_pane_ParamLimits

0x0c7d,	// (0x0004339d) msg_text_pane

0x3a3d,	// (0x0004615d) qrid_highlight_pane_cp011_ParamLimits

0x3a3d,	// (0x0004615d) qrid_highlight_pane_cp011

0xc027,	// (0x0004e747) msg_body_pane

0xc027,	// (0x0004e747) msg_header_pane

0xcf95,	// (0x0004f6b5) input_focus_pane_cp07

0x0cb6,	// (0x000433d6) msg_header_pane_t1_ParamLimits

0x0cb6,	// (0x000433d6) msg_header_pane_t1

0xa923,	// (0x0004d043) msg_header_pane_t2_ParamLimits

0xa923,	// (0x0004d043) msg_header_pane_t2

0x0001,

0xf494,	// (0x00051bb4) msg_header_pane_t_ParamLimits

0xf494,	// (0x00051bb4) msg_header_pane_t

0xcfaa,	// (0x0004f6ca) msg_body_pane_g1

0x0cca,	// (0x000433ea) msg_body_pane_t1_ParamLimits

0x0cca,	// (0x000433ea) msg_body_pane_t1

0xa935,	// (0x0004d055) msg_body_pane_t2_ParamLimits

0xa935,	// (0x0004d055) msg_body_pane_t2

0xa947,	// (0x0004d067) msg_body_pane_t3_ParamLimits

0xa947,	// (0x0004d067) msg_body_pane_t3

0x0002,

0xf499,	// (0x00051bb9) msg_body_pane_t_ParamLimits

0xf499,	// (0x00051bb9) msg_body_pane_t

0x3a8d,	// (0x000461ad) main_viewer_pane_g1_ParamLimits

0x3a8d,	// (0x000461ad) main_viewer_pane_g1

0x3a9b,	// (0x000461bb) main_viewer_pane_g2_ParamLimits

0x3a9b,	// (0x000461bb) main_viewer_pane_g2

0x3aa9,	// (0x000461c9) main_viewer_pane_g3_ParamLimits

0x3aa9,	// (0x000461c9) main_viewer_pane_g3

0x3ab8,	// (0x000461d8) main_viewer_pane_g4_ParamLimits

0x3ab8,	// (0x000461d8) main_viewer_pane_g4

0xa971,	// (0x0004d091) main_viewer_pane_g5_ParamLimits

0xa971,	// (0x0004d091) main_viewer_pane_g5

0xa971,	// (0x0004d091) main_viewer_pane_g7_ParamLimits

0xa971,	// (0x0004d091) main_viewer_pane_g7

0xa983,	// (0x0004d0a3) main_viewer_pane_g8_ParamLimits

0xa983,	// (0x0004d0a3) main_viewer_pane_g8

0x0007,

0xf4a9,	// (0x00051bc9) main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x00051bc9) main_viewer_pane_g

0xcfb2,	// (0x0004f6d2) viewer_content_pane_ParamLimits

0xcfb2,	// (0x0004f6d2) viewer_content_pane

0x3af4,	// (0x00046214) main_postcard_pane_g1_ParamLimits

0x3af4,	// (0x00046214) main_postcard_pane_g1

0x3b0a,	// (0x0004622a) main_postcard_pane_g2_ParamLimits

0x3b0a,	// (0x0004622a) main_postcard_pane_g2

0x3b20,	// (0x00046240) main_postcard_pane_g3_ParamLimits

0x3b20,	// (0x00046240) main_postcard_pane_g3

0x0005,

0xf4ba,	// (0x00051bda) main_postcard_pane_g_ParamLimits

0xf4ba,	// (0x00051bda) main_postcard_pane_g

0x3b37,	// (0x00046257) main_postcard_pane_g4

0xe325,	// (0x00050a45) smil_status_volume_pane_g2

0x3b7a,	// (0x0004629a) postcard_pane_ParamLimits

0x3b7a,	// (0x0004629a) postcard_pane

0xcfc0,	// (0x0004f6e0) postcard_pane_g1_ParamLimits

0xcfc0,	// (0x0004f6e0) postcard_pane_g1

0x3bbc,	// (0x000462dc) postcard_pane_g2_ParamLimits

0x3bbc,	// (0x000462dc) postcard_pane_g2

0x3bc8,	// (0x000462e8) postcard_pane_g3_ParamLimits

0x3bc8,	// (0x000462e8) postcard_pane_g3

0xcfce,	// (0x0004f6ee) postcard_pane_g4_ParamLimits

0xcfce,	// (0x0004f6ee) postcard_pane_g4

0x3bd4,	// (0x000462f4) postcard_pane_g5_ParamLimits

0x3bd4,	// (0x000462f4) postcard_pane_g5

0x3be9,	// (0x00046309) postcard_pane_g6_ParamLimits

0x3be9,	// (0x00046309) postcard_pane_g6

0xcfc0,	// (0x0004f6e0) postcard_pane_g7_ParamLimits

0xcfc0,	// (0x0004f6e0) postcard_pane_g7

0x0006,

0xf4c7,	// (0x00051be7) postcard_pane_g_ParamLimits

0xf4c7,	// (0x00051be7) postcard_pane_g

0x3bfd,	// (0x0004631d) main_mp2_pane_g1_ParamLimits

0x3bfd,	// (0x0004631d) main_mp2_pane_g1

0x3c09,	// (0x00046329) main_mp2_pane_g2_ParamLimits

0x3c09,	// (0x00046329) main_mp2_pane_g2

0x3c15,	// (0x00046335) main_mp2_pane_g3_ParamLimits

0x3c15,	// (0x00046335) main_mp2_pane_g3

0x0002,

0xf4d6,	// (0x00051bf6) main_mp2_pane_g_ParamLimits

0xf4d6,	// (0x00051bf6) main_mp2_pane_g

0x3c21,	// (0x00046341) main_mp2_pane_t1_ParamLimits

0x3c21,	// (0x00046341) main_mp2_pane_t1

0x3c36,	// (0x00046356) main_mp2_pane_t2_ParamLimits

0x3c36,	// (0x00046356) main_mp2_pane_t2

0x3c48,	// (0x00046368) main_mp2_pane_t3_ParamLimits

0x3c48,	// (0x00046368) main_mp2_pane_t3

0x0002,

0xf4dd,	// (0x00051bfd) main_mp2_pane_t_ParamLimits

0xf4dd,	// (0x00051bfd) main_mp2_pane_t

0xcfdc,	// (0x0004f6fc) pec_content_pane_ParamLimits

0xcfdc,	// (0x0004f6fc) pec_content_pane

0xc6fb,	// (0x0004ee1b) scroll_pane_cp015

0xcfee,	// (0x0004f70e) pec_attribute_pane_ParamLimits

0xcfee,	// (0x0004f70e) pec_attribute_pane

0x3c5a,	// (0x0004637a) pec_content_pane_g1_ParamLimits

0x3c5a,	// (0x0004637a) pec_content_pane_g1

0xcffe,	// (0x0004f71e) pec_content_pane_t1_ParamLimits

0xcffe,	// (0x0004f71e) pec_content_pane_t1

0xd010,	// (0x0004f730) pec_content_pane_t2_ParamLimits

0xd010,	// (0x0004f730) pec_content_pane_t2

0x0001,

0x0132,	// (0x00042852) pec_content_pane_t_ParamLimits

0x0132,	// (0x00042852) pec_content_pane_t

0x3c68,	// (0x00046388) list_single_graphic_pane_cp01_ParamLimits

0x3c68,	// (0x00046388) list_single_graphic_pane_cp01

0xc282,	// (0x0004e9a2) bg_popup_sub_pane_cp04

0xd022,	// (0x0004f742) popup_mup_playback_window_g1

0xd02e,	// (0x0004f74e) popup_mup_playback_window_t1

0xd043,	// (0x0004f763) popup_mup_playback_window_t2

0x0001,

0x0137,	// (0x00042857) popup_mup_playback_window_t

0xd07a,	// (0x0004f79a) main_image_pane_g1_ParamLimits

0xd07a,	// (0x0004f79a) main_image_pane_g1

0xd0bd,	// (0x0004f7dd) scroll_pane_cp018_ParamLimits

0xd0bd,	// (0x0004f7dd) scroll_pane_cp018

0xd0d5,	// (0x0004f7f5) scroll_pane_cp016_ParamLimits

0xd0d5,	// (0x0004f7f5) scroll_pane_cp016

0x3d38,	// (0x00046458) smil2_image_pane_ParamLimits

0x3d38,	// (0x00046458) smil2_image_pane

0x3d6c,	// (0x0004648c) smil2_root_pane_ParamLimits

0x3d6c,	// (0x0004648c) smil2_root_pane

0x3da4,	// (0x000464c4) smil2_text_pane_ParamLimits

0x3da4,	// (0x000464c4) smil2_text_pane

0xc027,	// (0x0004e747) bg_list_pane_cp06

0xd111,	// (0x0004f831) grid_radio_pane

0xc027,	// (0x0004e747) bg_popup_window_pane_cp06

0xd119,	// (0x0004f839) main_fmradio_pane_t1

0xcb98,	// (0x0004f2b8) heading_pane_cp04

0xd127,	// (0x0004f847) main_fmradio_pane_t2

0xe128,	// (0x00050848) popup_cale_lunar_info_window_g1

0xd135,	// (0x0004f855) main_fmradio_pane_t3

0xe130,	// (0x00050850) popup_cale_lunar_info_window_g2

0xd143,	// (0x0004f863) main_fmradio_pane_t4

0x0001,

0xd151,	// (0x0004f871) main_fmradio_pane_t5

0x0004,

0x0212,	// (0x00042932) popup_cale_lunar_info_window_g

0x014c,	// (0x0004286c) main_fmradio_pane_t

0xd15f,	// (0x0004f87f) wait_bar_pane_cp03

0xd167,	// (0x0004f887) cell_fmradio_pane_ParamLimits

0xd167,	// (0x0004f887) cell_fmradio_pane

0xcfc0,	// (0x0004f6e0) cell_fmradio_pane_g1_ParamLimits

0xcfc0,	// (0x0004f6e0) cell_fmradio_pane_g1

0xc027,	// (0x0004e747) grid_highlight_pane_cp011

0xd17a,	// (0x0004f89a) poc_content_pane_ParamLimits

0xd17a,	// (0x0004f89a) poc_content_pane

0xd18c,	// (0x0004f8ac) scroll_pane_cp019

0x3e24,	// (0x00046544) popup_call_poc_act_window_ParamLimits

0x3e24,	// (0x00046544) popup_call_poc_act_window

0x3e48,	// (0x00046568) popup_call_poc_inact_window_ParamLimits

0x3e48,	// (0x00046568) popup_call_poc_inact_window

0x01e9,	// (0x00042909) bg_popup_call_poc_act_pane_g

0xe098,	// (0x000507b8) bg_popup_call_poc_inact_pane_g1

0xe0a0,	// (0x000507c0) bg_popup_call_poc_inact_pane_g2

0xd194,	// (0x0004f8b4) popup_call_poc_act_window_g2

0xe0a8,	// (0x000507c8) bg_popup_call_poc_inact_pane_g3

0xe0b0,	// (0x000507d0) bg_popup_call_poc_inact_pane_g4

0xe0b8,	// (0x000507d8) bg_popup_call_poc_inact_pane_g5

0xd19c,	// (0x0004f8bc) popup_call_poc_act_window_t1_ParamLimits

0xd19c,	// (0x0004f8bc) popup_call_poc_act_window_t1

0xd1c4,	// (0x0004f8e4) popup_call_poc_act_window_t2_ParamLimits

0xd1c4,	// (0x0004f8e4) popup_call_poc_act_window_t2

0xd1ec,	// (0x0004f90c) popup_call_poc_act_window_t3_ParamLimits

0xd1ec,	// (0x0004f90c) popup_call_poc_act_window_t3

0xd214,	// (0x0004f934) popup_call_poc_act_window_t4_ParamLimits

0xd214,	// (0x0004f934) popup_call_poc_act_window_t4

0x0003,

0x0157,	// (0x00042877) popup_call_poc_act_window_t_ParamLimits

0x0157,	// (0x00042877) popup_call_poc_act_window_t

0xe0c0,	// (0x000507e0) bg_popup_call_poc_inact_pane_g6

0xe0c8,	// (0x000507e8) bg_popup_call_poc_inact_pane_g7

0xe0d0,	// (0x000507f0) bg_popup_call_poc_inact_pane_g8

0xd226,	// (0x0004f946) popup_call_poc_inact_window_g2

0xe0d8,	// (0x000507f8) bg_popup_call_poc_inact_pane_g9

0x0008,

0x01d6,	// (0x000428f6) bg_popup_call_poc_inact_pane_g

0xd22e,	// (0x0004f94e) popup_call_poc_inact_window_t1_ParamLimits

0xd22e,	// (0x0004f94e) popup_call_poc_inact_window_t1

0xd243,	// (0x0004f963) popup_call_poc_inact_window_t2_ParamLimits

0xd243,	// (0x0004f963) popup_call_poc_inact_window_t2

0xd258,	// (0x0004f978) popup_call_poc_inact_window_t3_ParamLimits

0xd258,	// (0x0004f978) popup_call_poc_inact_window_t3

0x0002,

0x0160,	// (0x00042880) popup_call_poc_inact_window_t_ParamLimits

0x0160,	// (0x00042880) popup_call_poc_inact_window_t

0xe298,	// (0x000509b8) context_pane_ParamLimits

0x466a,	// (0x00046d8a) signal_pane_ParamLimits

0xce23,	// (0x0004f543) main_call2_pane

0xe286,	// (0x000509a6) popup_phob_thumbnail2_window_ParamLimits

0xe286,	// (0x000509a6) popup_phob_thumbnail2_window

0xa959,	// (0x0004d079) aid_hotspot_pointer_arrow_pane

0xa961,	// (0x0004d081) aid_hotspot_pointer_hand_pane

0x418e,	// (0x000468ae) phob_pre_status_pane_g5

0x20b9,	// (0x000447d9) cams_zoom_pane_ParamLimits

0x20c8,	// (0x000447e8) image_vga_pane_ParamLimits

0x20e2,	// (0x00044802) main_camera_pane_g1_ParamLimits

0x20f4,	// (0x00044814) main_camera_pane_g2_ParamLimits

0x2106,	// (0x00044826) main_camera_pane_g3_ParamLimits

0x2118,	// (0x00044838) main_camera_pane_g4_ParamLimits

0x212a,	// (0x0004484a) main_camera_pane_g5_ParamLimits

0x213c,	// (0x0004485c) main_camera_pane_g6_ParamLimits

0x214e,	// (0x0004486e) main_camera_pane_g7_ParamLimits

0xf229,	// (0x00051949) main_camera_pane_g_ParamLimits

0x2160,	// (0x00044880) main_camera_pane_t1_ParamLimits

0x2176,	// (0x00044896) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x0005195a) main_camera_pane_t_ParamLimits

0xc282,	// (0x0004e9a2) bg_popup_preview_window_pane_cp01_ParamLimits

0xc282,	// (0x0004e9a2) bg_popup_preview_window_pane_cp01

0xd26d,	// (0x0004f98d) popup_phob_thumbnail2_window_g1_ParamLimits

0xd26d,	// (0x0004f98d) popup_phob_thumbnail2_window_g1

0xc027,	// (0x0004e747) call2_cli_visual_pane

0x3e7c,	// (0x0004659c) popup_call2_audio_conf_window_ParamLimits

0x3e7c,	// (0x0004659c) popup_call2_audio_conf_window

0x3e9c,	// (0x000465bc) popup_call2_audio_first_window_ParamLimits

0x3e9c,	// (0x000465bc) popup_call2_audio_first_window

0x3f32,	// (0x00046652) popup_call2_audio_in_window_ParamLimits

0x3f32,	// (0x00046652) popup_call2_audio_in_window

0x3f7a,	// (0x0004669a) popup_call2_audio_out_window_ParamLimits

0x3f7a,	// (0x0004669a) popup_call2_audio_out_window

0x3fe4,	// (0x00046704) popup_call2_audio_second_window_ParamLimits

0x3fe4,	// (0x00046704) popup_call2_audio_second_window

0x404a,	// (0x0004676a) popup_call2_audio_wait_window_ParamLimits

0x404a,	// (0x0004676a) popup_call2_audio_wait_window

0xc027,	// (0x0004e747) bg_popup_call2_act_pane_cp03

0xc264,	// (0x0004e984) list_conf_pane_cp

0xd279,	// (0x0004f999) popup_call2_audio_conf_window_t1

0xd287,	// (0x0004f9a7) list_single_graphic_popup_conf2_pane_ParamLimits

0xd287,	// (0x0004f9a7) list_single_graphic_popup_conf2_pane

0xcc2b,	// (0x0004f34b) list_highlight_pane_cp04

0xd29a,	// (0x0004f9ba) list_single_graphic_popup_conf2_pane_g1

0xcc3c,	// (0x0004f35c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f4,	// (0x00051c14) list_single_graphic_popup_conf2_pane_g

0xd2a4,	// (0x0004f9c4) list_single_graphic_popup_conf2_pane_t1

0xd2b2,	// (0x0004f9d2) bg_popup_call2_act_pane_cp01_ParamLimits

0xd2b2,	// (0x0004f9d2) bg_popup_call2_act_pane_cp01

0xd33c,	// (0x0004fa5c) call_type_pane_cp05_ParamLimits

0xd33c,	// (0x0004fa5c) call_type_pane_cp05

0xd390,	// (0x0004fab0) popup_call2_audio_second_window_g1_ParamLimits

0xd390,	// (0x0004fab0) popup_call2_audio_second_window_g1

0xd3e4,	// (0x0004fb04) popup_call2_audio_second_window_g2_ParamLimits

0xd3e4,	// (0x0004fb04) popup_call2_audio_second_window_g2

0x0002,

0x016c,	// (0x0004288c) popup_call2_audio_second_window_g_ParamLimits

0x016c,	// (0x0004288c) popup_call2_audio_second_window_g

0xd449,	// (0x0004fb69) popup_call2_audio_second_window_t1_ParamLimits

0xd449,	// (0x0004fb69) popup_call2_audio_second_window_t1

0xd504,	// (0x0004fc24) popup_call2_audio_second_window_t2_ParamLimits

0xd504,	// (0x0004fc24) popup_call2_audio_second_window_t2

0xd557,	// (0x0004fc77) popup_call2_audio_second_window_t3_ParamLimits

0xd557,	// (0x0004fc77) popup_call2_audio_second_window_t3

0x0003,

0x0173,	// (0x00042893) popup_call2_audio_second_window_t_ParamLimits

0x0173,	// (0x00042893) popup_call2_audio_second_window_t

0xc027,	// (0x0004e747) bg_popup_call2_in_pane_cp02

0xc031,	// (0x0004e751) call_type_pane_cp04

0xc039,	// (0x0004e759) popup_call2_audio_wait_window_g1

0xc041,	// (0x0004e761) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x00051836) popup_call2_audio_wait_window_g

0xc049,	// (0x0004e769) popup_call2_audio_wait_window_t3

0xd64a,	// (0x0004fd6a) bg_popup_call2_act_pane_ParamLimits

0xd64a,	// (0x0004fd6a) bg_popup_call2_act_pane

0xd70a,	// (0x0004fe2a) call_type_pane_cp03_ParamLimits

0xd70a,	// (0x0004fe2a) call_type_pane_cp03

0xd77a,	// (0x0004fe9a) popup_call2_audio_first_window_g1_ParamLimits

0xd77a,	// (0x0004fe9a) popup_call2_audio_first_window_g1

0xd7ea,	// (0x0004ff0a) popup_call2_audio_first_window_g2_ParamLimits

0xd7ea,	// (0x0004ff0a) popup_call2_audio_first_window_g2

0xce05,	// (0x0004f525) popup_call2_audio_first_window_g3_ParamLimits

0xce05,	// (0x0004f525) popup_call2_audio_first_window_g3

0x0004,

0xf4f9,	// (0x00051c19) popup_call2_audio_first_window_g_ParamLimits

0xf4f9,	// (0x00051c19) popup_call2_audio_first_window_g

0xd8c8,	// (0x0004ffe8) popup_call2_audio_first_window_t1_ParamLimits

0xd8c8,	// (0x0004ffe8) popup_call2_audio_first_window_t1

0xd9cb,	// (0x000500eb) popup_call2_audio_first_window_t4_ParamLimits

0xd9cb,	// (0x000500eb) popup_call2_audio_first_window_t4

0xdaba,	// (0x000501da) popup_call2_audio_first_window_t5_ParamLimits

0xdaba,	// (0x000501da) popup_call2_audio_first_window_t5

0x0003,

0xf504,	// (0x00051c24) popup_call2_audio_first_window_t_ParamLimits

0xf504,	// (0x00051c24) popup_call2_audio_first_window_t

0xc27a,	// (0x0004e99a) bg_popup_call2_act_pane_g1

0xe138,	// (0x00050858) popup_cale_lunar_info_window_t1

0xe146,	// (0x00050866) popup_cale_lunar_info_window_t2

0xe154,	// (0x00050874) popup_cale_lunar_info_window_t3

0xc027,	// (0x0004e747) bg_popup_call2_bubble_pane

0xdbbb,	// (0x000502db) bg_popup_call2_in_pane_cp01_ParamLimits

0xdbbb,	// (0x000502db) bg_popup_call2_in_pane_cp01

0xbd03,	// (0x0004e423) call_type_pane_cp02

0xdc03,	// (0x00050323) popup_call2_audio_out_window_g1_ParamLimits

0xdc03,	// (0x00050323) popup_call2_audio_out_window_g1

0xdc2f,	// (0x0005034f) popup_call2_audio_out_window_g2_ParamLimits

0xdc2f,	// (0x0005034f) popup_call2_audio_out_window_g2

0xdc57,	// (0x00050377) popup_call2_audio_out_window_g3_ParamLimits

0xdc57,	// (0x00050377) popup_call2_audio_out_window_g3

0x0003,

0x0190,	// (0x000428b0) popup_call2_audio_out_window_g_ParamLimits

0x0190,	// (0x000428b0) popup_call2_audio_out_window_g

0xdc92,	// (0x000503b2) popup_call2_audio_out_window_t1_ParamLimits

0xdc92,	// (0x000503b2) popup_call2_audio_out_window_t1

0xdcf1,	// (0x00050411) popup_call2_audio_out_window_t2_ParamLimits

0xdcf1,	// (0x00050411) popup_call2_audio_out_window_t2

0xdd45,	// (0x00050465) popup_call2_audio_out_window_t3_ParamLimits

0xdd45,	// (0x00050465) popup_call2_audio_out_window_t3

0xdd5b,	// (0x0005047b) popup_call2_audio_out_window_t4_ParamLimits

0xdd5b,	// (0x0005047b) popup_call2_audio_out_window_t4

0xdd71,	// (0x00050491) popup_call2_audio_out_window_t5_ParamLimits

0xdd71,	// (0x00050491) popup_call2_audio_out_window_t5

0x0005,

0xf50d,	// (0x00051c2d) popup_call2_audio_out_window_t_ParamLimits

0xf50d,	// (0x00051c2d) popup_call2_audio_out_window_t

0xddde,	// (0x000504fe) bg_popup_call2_in_pane_ParamLimits

0xddde,	// (0x000504fe) bg_popup_call2_in_pane

0xde3a,	// (0x0005055a) popup_call2_audio_in_window_g1_ParamLimits

0xde3a,	// (0x0005055a) popup_call2_audio_in_window_g1

0xde72,	// (0x00050592) popup_call2_audio_in_window_g2_ParamLimits

0xde72,	// (0x00050592) popup_call2_audio_in_window_g2

0xdeaa,	// (0x000505ca) popup_call2_audio_in_window_g3_ParamLimits

0xdeaa,	// (0x000505ca) popup_call2_audio_in_window_g3

0x0003,

0x01a6,	// (0x000428c6) popup_call2_audio_in_window_g_ParamLimits

0x01a6,	// (0x000428c6) popup_call2_audio_in_window_g

0xdf02,	// (0x00050622) popup_call2_audio_in_window_t1_ParamLimits

0xdf02,	// (0x00050622) popup_call2_audio_in_window_t1

0xdf82,	// (0x000506a2) popup_call2_audio_in_window_t2_ParamLimits

0xdf82,	// (0x000506a2) popup_call2_audio_in_window_t2

0xe002,	// (0x00050722) popup_call2_audio_in_window_t3_ParamLimits

0xe002,	// (0x00050722) popup_call2_audio_in_window_t3

0xe01c,	// (0x0005073c) popup_call2_audio_in_window_t4_ParamLimits

0xe01c,	// (0x0005073c) popup_call2_audio_in_window_t4

0xe02e,	// (0x0005074e) popup_call2_audio_in_window_t5_ParamLimits

0xe02e,	// (0x0005074e) popup_call2_audio_in_window_t5

0xe043,	// (0x00050763) popup_call2_audio_in_window_t6_ParamLimits

0xe043,	// (0x00050763) popup_call2_audio_in_window_t6

0x0005,

0x01af,	// (0x000428cf) popup_call2_audio_in_window_t_ParamLimits

0x01af,	// (0x000428cf) popup_call2_audio_in_window_t

0xc27a,	// (0x0004e99a) bg_popup_call2_in_pane_g1

0xe162,	// (0x00050882) popup_cale_lunar_info_window_t4

0x0003,

0x0217,	// (0x00042937) popup_cale_lunar_info_window_t

0xc282,	// (0x0004e9a2) bg_popup_call2_rect_pane_ParamLimits

0xc282,	// (0x0004e9a2) bg_popup_call2_rect_pane

0xc027,	// (0x0004e747) call2_cli_visual_graphic_pane

0xc027,	// (0x0004e747) call2_cli_visual_text_pane

0xa99b,	// (0x0004d0bb) smil_status_volume_pane_g3

0x0002,

0xc3ee,	// (0x0004eb0e) call2_cli_visual_graphic_pane_g1

0xc3ee,	// (0x0004eb0e) call2_cli_visual_graphic_pane_g2

0xc3ee,	// (0x0004eb0e) call2_cli_visual_graphic_pane_g3

0x0002,

0x01bc,	// (0x000428dc) call2_cli_visual_graphic_pane_g

0xe058,	// (0x00050778) bg_popup_call2_rect_pane_g1

0xc48c,	// (0x0004ebac) bg_popup_call2_rect_pane_g2

0xe060,	// (0x00050780) bg_popup_call2_rect_pane_g3

0xe068,	// (0x00050788) bg_popup_call2_rect_pane_g4

0xe070,	// (0x00050790) bg_popup_call2_rect_pane_g5

0xe078,	// (0x00050798) bg_popup_call2_rect_pane_g6

0xe080,	// (0x000507a0) bg_popup_call2_rect_pane_g7

0xe088,	// (0x000507a8) bg_popup_call2_rect_pane_g8

0xe090,	// (0x000507b0) bg_popup_call2_rect_pane_g9

0x0008,

0x01c3,	// (0x000428e3) bg_popup_call2_rect_pane_g

0xe098,	// (0x000507b8) bg_popup_call2_bubble_pane_g1

0xe0a0,	// (0x000507c0) bg_popup_call2_bubble_pane_g2

0xe0a8,	// (0x000507c8) bg_popup_call2_bubble_pane_g3

0xe0b0,	// (0x000507d0) bg_popup_call2_bubble_pane_g4

0xe0b8,	// (0x000507d8) bg_popup_call2_bubble_pane_g5

0xe0c0,	// (0x000507e0) bg_popup_call2_bubble_pane_g6

0xe0c8,	// (0x000507e8) bg_popup_call2_bubble_pane_g7

0xe0d0,	// (0x000507f0) bg_popup_call2_bubble_pane_g8

0xe0d8,	// (0x000507f8) bg_popup_call2_bubble_pane_g9

0x0008,

0x01d6,	// (0x000428f6) bg_popup_call2_bubble_pane_g

0x1d18,	// (0x00044438) aid_cale_week_size_cell_pane

0x218e,	// (0x000448ae) aid_cams_cif_uncrop_pane_ParamLimits

0x218e,	// (0x000448ae) aid_cams_cif_uncrop_pane

0x234b,	// (0x00044a6b) aid_cams_size_cell_ParamLimits

0x234b,	// (0x00044a6b) aid_cams_size_cell

0x235f,	// (0x00044a7f) grid_cams_pane_ParamLimits

0x2379,	// (0x00044a99) linegrid_cams_pane_ParamLimits

0x245f,	// (0x00044b7f) call_video_pane_t1

0x247d,	// (0x00044b9d) call_video_pane_t2

0x0001,

0xf28d,	// (0x000519ad) call_video_pane_t

0x28b0,	// (0x00044fd0) aid_cale_month_size_cell_pane_ParamLimits

0x28b0,	// (0x00044fd0) aid_cale_month_size_cell_pane

0xf54a,	// (0x00051c6a) smil_status_volume_pane_g

0xa9a8,	// (0x0004d0c8) volume_smil_pane_ParamLimits

0xa5af,	// (0x0004cccf) aid_popup2_width_pane

0x1c83,	// (0x000443a3) cell_qdial_pane_g4_ParamLimits

0x1c83,	// (0x000443a3) cell_qdial_pane_g4

0x3444,	// (0x00045b64) aid_blid_cardinal_pane_ParamLimits

0x3450,	// (0x00045b70) aid_blid_destination_pane_ParamLimits

0x3450,	// (0x00045b70) aid_blid_destination_pane

0xc282,	// (0x0004e9a2) bg_popup_call_poc_act_pane_ParamLimits

0xc282,	// (0x0004e9a2) bg_popup_call_poc_act_pane

0xc282,	// (0x0004e9a2) bg_popup_call_poc_inact_pane_ParamLimits

0xc282,	// (0x0004e9a2) bg_popup_call_poc_inact_pane

0xe0e8,	// (0x00050808) bg_popup_call_poc_act_pane_g1

0xe0f0,	// (0x00050810) bg_popup_call_poc_act_pane_g2

0xe0f8,	// (0x00050818) bg_popup_call_poc_act_pane_g3

0xe0b0,	// (0x000507d0) bg_popup_call_poc_act_pane_g4

0xe0b8,	// (0x000507d8) bg_popup_call_poc_act_pane_g5

0xe100,	// (0x00050820) bg_popup_call_poc_act_pane_g6

0xe0c8,	// (0x000507e8) bg_popup_call_poc_act_pane_g7

0xe108,	// (0x00050828) bg_popup_call_poc_act_pane_g8

0xc027,	// (0x0004e747) main_usb_pane

0xe261,	// (0x00050981) popup_cale_lunar_info_window

0x2747,	// (0x00044e67) im_reading_pane_t1_ParamLimits

0xc653,	// (0x0004ed73) list_im_pane_ParamLimits

0xc664,	// (0x0004ed84) scroll_pane_cp07_ParamLimits

0xc027,	// (0x0004e747) grid_highlight_pane_cp012

0xc282,	// (0x0004e9a2) mup_scale_pane_ParamLimits

0xcfc0,	// (0x0004f6e0) main_usb_pane_g1_ParamLimits

0xcfc0,	// (0x0004f6e0) main_usb_pane_g1

0x40a1,	// (0x000467c1) main_usb_pane_g2_ParamLimits

0x40a1,	// (0x000467c1) main_usb_pane_g2

0x0001,

0xf51a,	// (0x00051c3a) main_usb_pane_g_ParamLimits

0xf51a,	// (0x00051c3a) main_usb_pane_g

0x40b7,	// (0x000467d7) main_usb_pane_t1_ParamLimits

0x40b7,	// (0x000467d7) main_usb_pane_t1

0x40c9,	// (0x000467e9) main_usb_pane_t2_ParamLimits

0x40c9,	// (0x000467e9) main_usb_pane_t2

0x40db,	// (0x000467fb) main_usb_pane_t3_ParamLimits

0x40db,	// (0x000467fb) main_usb_pane_t3

0x40ed,	// (0x0004680d) main_usb_pane_t4_ParamLimits

0x40ed,	// (0x0004680d) main_usb_pane_t4

0x40ff,	// (0x0004681f) main_usb_pane_t5_ParamLimits

0x40ff,	// (0x0004681f) main_usb_pane_t5

0x4111,	// (0x00046831) main_usb_pane_t6_ParamLimits

0x4111,	// (0x00046831) main_usb_pane_t6

0x0005,

0xf51f,	// (0x00051c3f) main_usb_pane_t_ParamLimits

0x33e9,	// (0x00045b09) aid_text_placing

0x33f2,	// (0x00045b12) main_location2_pane_t1_ParamLimits

0x3406,	// (0x00045b26) main_location2_pane_t2_ParamLimits

0x341a,	// (0x00045b3a) main_location2_pane_t3_ParamLimits

0x3430,	// (0x00045b50) main_location2_pane_t4_ParamLimits

0x3430,	// (0x00045b50) main_location2_pane_t4

0xf3ee,	// (0x00051b0e) main_location2_pane_t_ParamLimits

0xc2c6,	// (0x0004e9e6) find_pinb_pane_g2_ParamLimits

0xc2c6,	// (0x0004e9e6) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x0005185c) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x0005185c) find_pinb_pane_g

0xc2d2,	// (0x0004e9f2) find_pinb_pane_t1_ParamLimits

0xc2e4,	// (0x0004ea04) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x00051861) find_pinb_pane_t_ParamLimits

0xc027,	// (0x0004e747) main_call3_pane

0x2c14,	// (0x00045334) cale_month_day_heading_pane_t1_ParamLimits

0x2c72,	// (0x00045392) cale_month_day_heading_pane_t2_ParamLimits

0x2cd7,	// (0x000453f7) cale_month_day_heading_pane_t3_ParamLimits

0x2d3c,	// (0x0004545c) cale_month_day_heading_pane_t4_ParamLimits

0x2da1,	// (0x000454c1) cale_month_day_heading_pane_t5_ParamLimits

0x2e16,	// (0x00045536) cale_month_day_heading_pane_t6_ParamLimits

0x2e8b,	// (0x000455ab) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x000519e5) cale_month_day_heading_pane_t_ParamLimits

0xc8a4,	// (0x0004efc4) smil_status_volume_pane

0x3b98,	// (0x000462b8) postcard_address_pane_ParamLimits

0x3b98,	// (0x000462b8) postcard_address_pane

0x3baa,	// (0x000462ca) postcard_message_pane_ParamLimits

0x3baa,	// (0x000462ca) postcard_message_pane

0x4084,	// (0x000467a4) call2_cli_visual_pane_t1_ParamLimits

0x4084,	// (0x000467a4) call2_cli_visual_pane_t1

0x4898,	// (0x00046fb8) postcard_message_pane_t1_ParamLimits

0x4898,	// (0x00046fb8) postcard_message_pane_t1

0x4881,	// (0x00046fa1) postcard_address_pane_t1_ParamLimits

0x4881,	// (0x00046fa1) postcard_address_pane_t1

0x486d,	// (0x00046f8d) popup_call3_audio_in_window_ParamLimits

0x486d,	// (0x00046f8d) popup_call3_audio_in_window

0x46fc,	// (0x00046e1c) bg_popup_call3_in_pane_ParamLimits

0x46fc,	// (0x00046e1c) bg_popup_call3_in_pane

0x476e,	// (0x00046e8e) popup_call3_audio_in_window_g1_ParamLimits

0x476e,	// (0x00046e8e) popup_call3_audio_in_window_g1

0x478e,	// (0x00046eae) popup_call3_audio_in_window_g2_ParamLimits

0x478e,	// (0x00046eae) popup_call3_audio_in_window_g2

0x47ae,	// (0x00046ece) popup_call3_audio_in_window_g3_ParamLimits

0x47ae,	// (0x00046ece) popup_call3_audio_in_window_g3

0x0003,

0xf551,	// (0x00051c71) popup_call3_audio_in_window_g_ParamLimits

0xf551,	// (0x00051c71) popup_call3_audio_in_window_g

0x47df,	// (0x00046eff) popup_call3_audio_in_window_t1_ParamLimits

0x47df,	// (0x00046eff) popup_call3_audio_in_window_t1

0x481d,	// (0x00046f3d) popup_call3_audio_in_window_t2_ParamLimits

0x481d,	// (0x00046f3d) popup_call3_audio_in_window_t2

0x485b,	// (0x00046f7b) popup_call3_audio_in_window_t3_ParamLimits

0x485b,	// (0x00046f7b) popup_call3_audio_in_window_t3

0x0002,

0xf55a,	// (0x00051c7a) popup_call3_audio_in_window_t_ParamLimits

0xf55a,	// (0x00051c7a) popup_call3_audio_in_window_t

0xce23,	// (0x0004f543) bg_popup_call3_rect_pane

0xe058,	// (0x00050778) bg_popup_call3_rect_pane_g1

0xc48c,	// (0x0004ebac) bg_popup_call3_rect_pane_g2

0xe060,	// (0x00050780) bg_popup_call3_rect_pane_g3

0xe068,	// (0x00050788) bg_popup_call3_rect_pane_g4

0xe070,	// (0x00050790) bg_popup_call3_rect_pane_g5

0xe078,	// (0x00050798) bg_popup_call3_rect_pane_g6

0xe080,	// (0x000507a0) bg_popup_call3_rect_pane_g7

0x3822,	// (0x00045f42) mup_visualizer_osc_pane

0xcee2,	// (0x0004f602) mup_visualizer_spec_pane

0x472c,	// (0x00046e4c) call3_video_qcif_pane_ParamLimits

0x472c,	// (0x00046e4c) call3_video_qcif_pane

0x473d,	// (0x00046e5d) call3_video_qcif_uncrop_pane_ParamLimits

0x473d,	// (0x00046e5d) call3_video_qcif_uncrop_pane

0x4749,	// (0x00046e69) call3_video_subqcif_pane_ParamLimits

0x4749,	// (0x00046e69) call3_video_subqcif_pane

0x475d,	// (0x00046e7d) call3_video_subqcif_uncrop_pane_ParamLimits

0x475d,	// (0x00046e7d) call3_video_subqcif_uncrop_pane

0x47ce,	// (0x00046eee) popup_call3_audio_in_window_g4_ParamLimits

0x47ce,	// (0x00046eee) popup_call3_audio_in_window_g4

0x46eb,	// (0x00046e0b) mup_spec_half_pane

0x46f4,	// (0x00046e14) mup_spec_half_pane_cp

0xe2f8,	// (0x00050a18) mup_osc_middle_pane

0xe301,	// (0x00050a21) mup_visualizer_osc_pane_g1

0x46cb,	// (0x00046deb) mup_spec_bar_pane_ParamLimits

0x46cb,	// (0x00046deb) mup_spec_bar_pane

0xe2e5,	// (0x00050a05) mup_spec_bar_pane_g1

0xe2ef,	// (0x00050a0f) mup_spec_bar_pane_g2

0x0001,

0x025b,	// (0x0004297b) mup_spec_bar_pane_g

0x1d18,	// (0x00044438) aid_cale_week_size_cell_pane_ParamLimits

0x1d2b,	// (0x0004444b) bg_cale_heading_pane_ParamLimits

0xc4c0,	// (0x0004ebe0) bg_cale_pane_cp01_ParamLimits

0x1d43,	// (0x00044463) cale_week_corner_pane_ParamLimits

0x1d54,	// (0x00044474) cale_week_day_heading_pane_ParamLimits

0x1d6c,	// (0x0004448c) cale_week_scroll_pane_g1_ParamLimits

0x1d81,	// (0x000444a1) cale_week_scroll_pane_g2_ParamLimits

0x1d92,	// (0x000444b2) cale_week_scroll_pane_g3_ParamLimits

0x1da3,	// (0x000444c3) cale_week_scroll_pane_g4_ParamLimits

0x1db4,	// (0x000444d4) cale_week_scroll_pane_g5_ParamLimits

0x1dc7,	// (0x000444e7) cale_week_scroll_pane_g6_ParamLimits

0x1dda,	// (0x000444fa) cale_week_scroll_pane_g7_ParamLimits

0x1ded,	// (0x0004450d) cale_week_scroll_pane_g8_ParamLimits

0x1e00,	// (0x00044520) cale_week_scroll_pane_g9_ParamLimits

0x1e11,	// (0x00044531) cale_week_scroll_pane_g10_ParamLimits

0x1e22,	// (0x00044542) cale_week_scroll_pane_g11_ParamLimits

0x1e33,	// (0x00044553) cale_week_scroll_pane_g12_ParamLimits

0x1e44,	// (0x00044564) cale_week_scroll_pane_g13_ParamLimits

0x1e55,	// (0x00044575) cale_week_scroll_pane_g14_ParamLimits

0x1e66,	// (0x00044586) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x000518ed) cale_week_scroll_pane_g_ParamLimits

0x1e7b,	// (0x0004459b) cale_week_time_pane_ParamLimits

0x1e8e,	// (0x000445ae) grid_cale_week_pane_ParamLimits

0xc4d9,	// (0x0004ebf9) listscroll_cale_week_pane_t1

0x1ea3,	// (0x000445c3) scroll_pane_cp08_ParamLimits

0x28f1,	// (0x00045011) cale_month_corner_pane_ParamLimits

0xc87a,	// (0x0004ef9a) cale_month_pane_t1

0x2bd3,	// (0x000452f3) cale_month_week_pane_ParamLimits

0x3250,	// (0x00045970) popup_call_status_window_g1_ParamLimits

0x3264,	// (0x00045984) popup_call_status_window_g2_ParamLimits

0x3278,	// (0x00045998) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x00051a95) popup_call_status_window_g_ParamLimits

0xcb88,	// (0x0004f2a8) aid_call2_pane

0x0ca8,	// (0x000433c8) msg_header_pane_g1

0x3b98,	// (0x000462b8) postcard_address2_pane_ParamLimits

0x3b98,	// (0x000462b8) postcard_address2_pane

0x3baa,	// (0x000462ca) postcard_message2_pane_ParamLimits

0x3baa,	// (0x000462ca) postcard_message2_pane

0x4678,	// (0x00046d98) message2_row_pane_ParamLimits

0x4678,	// (0x00046d98) message2_row_pane

0x4697,	// (0x00046db7) address2_row_pane_ParamLimits

0x4697,	// (0x00046db7) address2_row_pane

0xe2b3,	// (0x000509d3) postcard_message2_row_pane_g1

0xe2bb,	// (0x000509db) postcard_message2_row_pane_t1

0xe2b3,	// (0x000509d3) address2_row_pane_g1

0xe2bb,	// (0x000509db) address2_row_pane_t1

0xa6bb,	// (0x0004cddb) aid_size_cell_vorec

0xc027,	// (0x0004e747) main_rss_pane

0x46aa,	// (0x00046dca) rss_list_single_pane_ParamLimits

0x46aa,	// (0x00046dca) rss_list_single_pane

0xe2c9,	// (0x000509e9) rss_list_single_pane_t1

0xe2d7,	// (0x000509f7) rss_list_single_pane_t2

0x0001,

0x0256,	// (0x00042976) rss_list_single_pane_t

0xc027,	// (0x0004e747) main_camera2_pane

0xc027,	// (0x0004e747) main_video2_pane

0x4911,	// (0x00047031) cams_zoom_pane_cp2_ParamLimits

0x4911,	// (0x00047031) cams_zoom_pane_cp2

0x4931,	// (0x00047051) image2_vga_pane_ParamLimits

0x4931,	// (0x00047051) image2_vga_pane

0x4982,	// (0x000470a2) main_camera2_pane_g1_ParamLimits

0x4982,	// (0x000470a2) main_camera2_pane_g1

0x49a2,	// (0x000470c2) main_camera2_pane_g2_ParamLimits

0x49a2,	// (0x000470c2) main_camera2_pane_g2

0x49c2,	// (0x000470e2) main_camera2_pane_g3_ParamLimits

0x49c2,	// (0x000470e2) main_camera2_pane_g3

0x49e2,	// (0x00047102) main_camera2_pane_g4_ParamLimits

0x49e2,	// (0x00047102) main_camera2_pane_g4

0x4a02,	// (0x00047122) main_camera2_pane_g5_ParamLimits

0x4a02,	// (0x00047122) main_camera2_pane_g5

0x4a22,	// (0x00047142) main_camera2_pane_g6_ParamLimits

0x4a22,	// (0x00047142) main_camera2_pane_g6

0x4a42,	// (0x00047162) main_camera2_pane_g7_ParamLimits

0x4a42,	// (0x00047162) main_camera2_pane_g7

0x4a62,	// (0x00047182) main_camera2_pane_g8_ParamLimits

0x4a62,	// (0x00047182) main_camera2_pane_g8

0x0008,

0xf561,	// (0x00051c81) main_camera2_pane_g_ParamLimits

0xf561,	// (0x00051c81) main_camera2_pane_g

0x4aa2,	// (0x000471c2) main_camera2_pane_t1_ParamLimits

0x4aa2,	// (0x000471c2) main_camera2_pane_t1

0x4ad7,	// (0x000471f7) main_camera2_pane_t2_ParamLimits

0x4ad7,	// (0x000471f7) main_camera2_pane_t2

0x4afd,	// (0x0004721d) main_camera2_pane_t3_ParamLimits

0x4afd,	// (0x0004721d) main_camera2_pane_t3

0x4b5b,	// (0x0004727b) main_camera2_pane_t4_ParamLimits

0x4b5b,	// (0x0004727b) main_camera2_pane_t4

0x0006,

0xf574,	// (0x00051c94) main_camera2_pane_t_ParamLimits

0xf574,	// (0x00051c94) main_camera2_pane_t

0x4bed,	// (0x0004730d) cams_zoom_pane_cp4_ParamLimits

0x4bed,	// (0x0004730d) cams_zoom_pane_cp4

0x4c03,	// (0x00047323) image2_cif_pane_ParamLimits

0x4c03,	// (0x00047323) image2_cif_pane

0x4c2e,	// (0x0004734e) image2_subqcif_pane_ParamLimits

0x4c2e,	// (0x0004734e) image2_subqcif_pane

0x4c48,	// (0x00047368) main_video2_pane_g1_ParamLimits

0x4c48,	// (0x00047368) main_video2_pane_g1

0x4c62,	// (0x00047382) main_video2_pane_g2_ParamLimits

0x4c62,	// (0x00047382) main_video2_pane_g2

0x4c78,	// (0x00047398) main_video2_pane_g3_ParamLimits

0x4c78,	// (0x00047398) main_video2_pane_g3

0x4c8e,	// (0x000473ae) main_video2_pane_g4_ParamLimits

0x4c8e,	// (0x000473ae) main_video2_pane_g4

0x4ca4,	// (0x000473c4) main_video2_pane_g5_ParamLimits

0x4ca4,	// (0x000473c4) main_video2_pane_g5

0x4cba,	// (0x000473da) main_video2_pane_g6_ParamLimits

0x4cba,	// (0x000473da) main_video2_pane_g6

0x0005,

0xf583,	// (0x00051ca3) main_video2_pane_g_ParamLimits

0xf583,	// (0x00051ca3) main_video2_pane_g

0x4cd4,	// (0x000473f4) main_video2_pane_t1_ParamLimits

0x4cd4,	// (0x000473f4) main_video2_pane_t1

0x4cf8,	// (0x00047418) main_video2_pane_t2_ParamLimits

0x4cf8,	// (0x00047418) main_video2_pane_t2

0x4d46,	// (0x00047466) main_video2_pane_t3_ParamLimits

0x4d46,	// (0x00047466) main_video2_pane_t3

0x0002,

0xf590,	// (0x00051cb0) main_video2_pane_t_ParamLimits

0xf590,	// (0x00051cb0) main_video2_pane_t

0x41ce,	// (0x000468ee) call_muted_g2

0x0001,

0xf545,	// (0x00051c65) call_muted_g

0xc027,	// (0x0004e747) main_mup2_pane

0x4d8e,	// (0x000474ae) main_mup2_pane_g1_ParamLimits

0x4d8e,	// (0x000474ae) main_mup2_pane_g1

0x4d9a,	// (0x000474ba) main_mup2_pane_g2_ParamLimits

0x4d9a,	// (0x000474ba) main_mup2_pane_g2

0xaa16,	// (0x0004d136) main_mup_pane_g13_cp1

0xaa1e,	// (0x0004d13e) mup_volume_pane_cp1

0x4db6,	// (0x000474d6) main_mup2_pane_g4_ParamLimits

0x4db6,	// (0x000474d6) main_mup2_pane_g4

0x4dc8,	// (0x000474e8) main_mup2_pane_g5_ParamLimits

0x4dc8,	// (0x000474e8) main_mup2_pane_g5

0x4dda,	// (0x000474fa) main_mup2_pane_g6_ParamLimits

0x4dda,	// (0x000474fa) main_mup2_pane_g6

0x4dec,	// (0x0004750c) main_mup2_pane_g7_ParamLimits

0x4dec,	// (0x0004750c) main_mup2_pane_g7

0x0006,

0xf597,	// (0x00051cb7) main_mup2_pane_g_ParamLimits

0xf597,	// (0x00051cb7) main_mup2_pane_g

0x4e04,	// (0x00047524) main_mup2_pane_t1_ParamLimits

0x4e04,	// (0x00047524) main_mup2_pane_t1

0x4e1a,	// (0x0004753a) main_mup2_pane_t2_ParamLimits

0x4e1a,	// (0x0004753a) main_mup2_pane_t2

0x4e30,	// (0x00047550) main_mup2_pane_t3_ParamLimits

0x4e30,	// (0x00047550) main_mup2_pane_t3

0x4e46,	// (0x00047566) main_mup2_pane_t4_ParamLimits

0x4e46,	// (0x00047566) main_mup2_pane_t4

0x4e5e,	// (0x0004757e) main_mup2_pane_t5_ParamLimits

0x4e5e,	// (0x0004757e) main_mup2_pane_t5

0x4e76,	// (0x00047596) main_mup2_pane_t6_ParamLimits

0x4e76,	// (0x00047596) main_mup2_pane_t6

0x0005,

0xf5a6,	// (0x00051cc6) main_mup2_pane_t_ParamLimits

0xf5a6,	// (0x00051cc6) main_mup2_pane_t

0x4ea6,	// (0x000475c6) mup2_visualizer_pane_ParamLimits

0x4ea6,	// (0x000475c6) mup2_visualizer_pane

0x4ed4,	// (0x000475f4) mup_progress_pane_cp_ParamLimits

0x4ed4,	// (0x000475f4) mup_progress_pane_cp

0xaa01,	// (0x0004d121) mup_volume_pane_cp_ParamLimits

0xaa01,	// (0x0004d121) mup_volume_pane_cp

0x4ee8,	// (0x00047608) mup2_visualizer_pane_g1_ParamLimits

0x4ee8,	// (0x00047608) mup2_visualizer_pane_g1

0xe338,	// (0x00050a58) mup2_visualizer_pane_g2_ParamLimits

0xe338,	// (0x00050a58) mup2_visualizer_pane_g2

0x4eff,	// (0x0004761f) mup2_visualizer_pane_g3_ParamLimits

0x4eff,	// (0x0004761f) mup2_visualizer_pane_g3

0x0002,

0xf5b3,	// (0x00051cd3) mup2_visualizer_pane_g_ParamLimits

0xf5b3,	// (0x00051cd3) mup2_visualizer_pane_g

0xd109,	// (0x0004f829) aid_size_cell_fmradio

0x4380,	// (0x00046aa0) aid_height_parent_landcape

0xc6e2,	// (0x0004ee02) wml_content_pane_cp

0xc6ea,	// (0x0004ee0a) wml_tabs_pane

0xc6f3,	// (0x0004ee13) popup_wml_miniature_window

0xc6fb,	// (0x0004ee1b) scroll_pane_cp021

0xc70f,	// (0x0004ee2f) wml_content_pane_comp8

0xc027,	// (0x0004e747) bg_popup_sub_pane_cp05

0xe356,	// (0x00050a76) popup_wml_miniature_window_g1

0xe35e,	// (0x00050a7e) wml_miniature_view_pane

0x4f0b,	// (0x0004762b) aid_size_wml_view

0x4f13,	// (0x00047633) wml_miniature_view_pane_g1

0x4f1c,	// (0x0004763c) wml_miniature_view_pane_g2

0x4f25,	// (0x00047645) wml_miniature_view_pane_g3

0x4f2d,	// (0x0004764d) wml_miniature_view_pane_g4

0x4f35,	// (0x00047655) wml_miniature_view_pane_g5

0x4f3d,	// (0x0004765d) wml_miniature_view_pane_g6

0x4f45,	// (0x00047665) wml_miniature_view_pane_g7

0x4f4d,	// (0x0004766d) wml_miniature_view_pane_g8

0x0007,

0xf5ba,	// (0x00051cda) wml_miniature_view_pane_g

0xe366,	// (0x00050a86) background_graphic_ParamLimits

0xe366,	// (0x00050a86) background_graphic

0xe372,	// (0x00050a92) wml_tabs_2_pane

0xe37b,	// (0x00050a9b) wml_tabs_3_pane_ParamLimits

0xe37b,	// (0x00050a9b) wml_tabs_3_pane

0xe38d,	// (0x00050aad) wml_tabs_4_pane_ParamLimits

0xe38d,	// (0x00050aad) wml_tabs_4_pane

0xe3a3,	// (0x00050ac3) wml_tabs_5_pane_ParamLimits

0xe3a3,	// (0x00050ac3) wml_tabs_5_pane

0xe3bd,	// (0x00050add) wml_tabs_pane_g2_ParamLimits

0xe3bd,	// (0x00050add) wml_tabs_pane_g2

0xe3d1,	// (0x00050af1) wml_tabs_pane_g3_ParamLimits

0xe3d1,	// (0x00050af1) wml_tabs_pane_g3

0x4f55,	// (0x00047675) wml_tabs_2_active_pane_ParamLimits

0x4f55,	// (0x00047675) wml_tabs_2_active_pane

0x4f69,	// (0x00047689) wml_tabs_2_passive_pane_ParamLimits

0x4f69,	// (0x00047689) wml_tabs_2_passive_pane

0x4f7d,	// (0x0004769d) wml_tabs_3_active_pane_cp_ParamLimits

0x4f7d,	// (0x0004769d) wml_tabs_3_active_pane_cp

0x4f92,	// (0x000476b2) wml_tabs_3_passive_pane_ParamLimits

0x4f92,	// (0x000476b2) wml_tabs_3_passive_pane

0x4fa5,	// (0x000476c5) wml_tabs_3_passive_pane_cp_ParamLimits

0x4fa5,	// (0x000476c5) wml_tabs_3_passive_pane_cp

0x4fbc,	// (0x000476dc) tabs_4_active_pane

0x4fc4,	// (0x000476e4) tabs_4_passive_pane

0x4fce,	// (0x000476ee) tabs_4_passive_pane_cp

0x4fd6,	// (0x000476f6) tabs_4_passive_pane_cp2

0xe0e0,	// (0x00050800) aid_height_text

0x37f4,	// (0x00045f14) mup_volume_cont_pane_ParamLimits

0x37f4,	// (0x00045f14) mup_volume_cont_pane

0x1953,	// (0x00044073) aid_size_cell_pinb

0xc2b2,	// (0x0004e9d2) aid_size_list_pinb

0x4ec0,	// (0x000475e0) mup2_volume_cont_pane_ParamLimits

0x4ec0,	// (0x000475e0) mup2_volume_cont_pane

0xa9ed,	// (0x0004d10d) mup2_volume_cont_pane_g1_ParamLimits

0xa9ed,	// (0x0004d10d) mup2_volume_cont_pane_g1

0x1633,	// (0x00043d53) aid_size_cell_touch_ParamLimits

0x1633,	// (0x00043d53) aid_size_cell_touch

0x1841,	// (0x00043f61) touch_pane_ParamLimits

0x1841,	// (0x00043f61) touch_pane

0xa59d,	// (0x0004ccbd) main_rss2_pane

0xe3ee,	// (0x00050b0e) listscroll_rss2_pane

0xe3f7,	// (0x00050b17) rss2_navigation_pane

0xe3ff,	// (0x00050b1f) list_rss2_pane

0xccc8,	// (0x0004f3e8) scroll_pane_cp22

0xe407,	// (0x00050b27) rss2_navigation_pane_g1

0xe410,	// (0x00050b30) rss2_navigation_pane_g2

0xe418,	// (0x00050b38) rss2_navigation_pane_g3

0x0002,

0x02e1,	// (0x00042a01) rss2_navigation_pane_g

0xe420,	// (0x00050b40) rss2_navigation_pane_t1

0x4fe0,	// (0x00047700) rss2_list_single_pane_ParamLimits

0x4fe0,	// (0x00047700) rss2_list_single_pane

0xe42e,	// (0x00050b4e) rss2_list_single_pane_t2

0xe43c,	// (0x00050b5c) rss2_list_single_pane_t3_ParamLimits

0xe43c,	// (0x00050b5c) rss2_list_single_pane_t3

0xe459,	// (0x00050b79) rss2_list_single_pane_t4

0x3087,	// (0x000457a7) smil_status_pane_g1

0xa615,	// (0x0004cd35) main_image2_pane_ParamLimits

0xa615,	// (0x0004cd35) main_image2_pane

0x4a82,	// (0x000471a2) main_camera2_pane_g9_ParamLimits

0x4a82,	// (0x000471a2) main_camera2_pane_g9

0x4bb0,	// (0x000472d0) main_camera2_pane_t5_ParamLimits

0x4bb0,	// (0x000472d0) main_camera2_pane_t5

0xa9bd,	// (0x0004d0dd) main_camera2_pane_t6_ParamLimits

0xa9bd,	// (0x0004d0dd) main_camera2_pane_t6

0x4ff8,	// (0x00047718) main_image2_pane_g1_ParamLimits

0x4ff8,	// (0x00047718) main_image2_pane_g1

0x3dda,	// (0x000464fa) smil2_video_pane_ParamLimits

0x3dda,	// (0x000464fa) smil2_video_pane

0xa5cb,	// (0x0004cceb) aid_zoom_text_primary_cp

0xa60b,	// (0x0004cd2b) popup_preview_fixed_window

0xc64b,	// (0x0004ed6b) im_reading_pane_g1

0x48f9,	// (0x00047019) cams2_bc_adjust_pane_cp_ParamLimits

0x48f9,	// (0x00047019) cams2_bc_adjust_pane_cp

0x4bdf,	// (0x000472ff) cams2_bc_adjust_pane_ParamLimits

0x4bdf,	// (0x000472ff) cams2_bc_adjust_pane

0xaa26,	// (0x0004d146) cams2_bc_adjust_pane_g1

0xaa2e,	// (0x0004d14e) cams2_slider_pane

0xaa37,	// (0x0004d157) cams2_slider_pane_g1

0xaa40,	// (0x0004d160) cams2_slider_pane_g2

0x0006,

0xf5cb,	// (0x00051ceb) cams2_slider_pane_g

0x1a12,	// (0x00044132) calc_display_pane_ParamLimits

0x1a3a,	// (0x0004415a) calc_paper_pane_ParamLimits

0x1a5d,	// (0x0004417d) grid_calc_pane_ParamLimits

0xa8f4,	// (0x0004d014) popup_clock_digital_window_t1_ParamLimits

0xd0a6,	// (0x0004f7c6) main_image_pane_t1

0x19f4,	// (0x00044114) aid_size_cell_calc_ParamLimits

0x19f4,	// (0x00044114) aid_size_cell_calc

0x43c6,	// (0x00046ae6) popup_blid_sat_info2_window_ParamLimits

0x43c6,	// (0x00046ae6) popup_blid_sat_info2_window

0xe46f,	// (0x00050b8f) aid_size_cell_blid

0xe477,	// (0x00050b97) bg_popup_window_pane_cp07

0xe49a,	// (0x00050bba) grid_popup_blid_pane

0xe4a4,	// (0x00050bc4) heading_pane_cp05_ParamLimits

0xe4a4,	// (0x00050bc4) heading_pane_cp05

0xe56e,	// (0x00050c8e) cell_popup_blid_pane_ParamLimits

0xe56e,	// (0x00050c8e) cell_popup_blid_pane

0xe594,	// (0x00050cb4) cell_popup_blid_pane_g1

0xe59c,	// (0x00050cbc) cell_popup_blid_pane_t1

0x4e90,	// (0x000475b0) mup2_indicator_pane_ParamLimits

0x4e90,	// (0x000475b0) mup2_indicator_pane

0xce23,	// (0x0004f543) mup2_visualizer_osc_pane

0xe344,	// (0x00050a64) mup2_visualizer_spec_pane_ParamLimits

0xe344,	// (0x00050a64) mup2_visualizer_spec_pane

0x500e,	// (0x0004772e) mup2_spec_half_pane

0x5017,	// (0x00047737) mup2_spec_half_pane_cp

0x501f,	// (0x0004773f) mup2_spec_bar_pane_ParamLimits

0x501f,	// (0x0004773f) mup2_spec_bar_pane

0xe2e5,	// (0x00050a05) mup2_spec_bar_pane_g1

0xe2ef,	// (0x00050a0f) mup2_spec_bar_pane_g2

0x0001,

0x025b,	// (0x0004297b) mup2_spec_bar_pane_g

0x503f,	// (0x0004775f) mup2_osc_middle_pane

0xe301,	// (0x00050a21) mup2_visualizer_osc_pane_g1

0xbc36,	// (0x0004e356) popup_number_entry_window_t1_ParamLimits

0xbc49,	// (0x0004e369) popup_number_entry_window_t2_ParamLimits

0xbc5b,	// (0x0004e37b) popup_number_entry_window_t3_ParamLimits

0x1893,	// (0x00043fb3) popup_number_entry_window_t5_ParamLimits

0x1893,	// (0x00043fb3) popup_number_entry_window_t5

0xf0e7,	// (0x00051807) popup_number_entry_window_t_ParamLimits

0xbc6d,	// (0x0004e38d) text_title_cp2_ParamLimits

0xa969,	// (0x0004d089) aid_hotspot_pointer_text2_pane

0xa98f,	// (0x0004d0af) main_viewer_pane_g9_ParamLimits

0xa98f,	// (0x0004d0af) main_viewer_pane_g9

0xc87a,	// (0x0004ef9a) cale_month_pane_t1_ParamLimits

0xc8b7,	// (0x0004efd7) bg_cale_pane_ParamLimits

0xc8cf,	// (0x0004efef) list_cale_pane_ParamLimits

0xc4d9,	// (0x0004ebf9) listscroll_cale_day_pane_t1

0xc8e0,	// (0x0004f000) scroll_pane_cp09_ParamLimits

0x382a,	// (0x00045f4a) main_mup_eq_pane_t1_ParamLimits

0x382a,	// (0x00045f4a) main_mup_eq_pane_t1

0x3846,	// (0x00045f66) main_mup_eq_pane_t2_ParamLimits

0x3846,	// (0x00045f66) main_mup_eq_pane_t2

0x3862,	// (0x00045f82) main_mup_eq_pane_t3_ParamLimits

0x3862,	// (0x00045f82) main_mup_eq_pane_t3

0x3880,	// (0x00045fa0) main_mup_eq_pane_t4_ParamLimits

0x3880,	// (0x00045fa0) main_mup_eq_pane_t4

0x389e,	// (0x00045fbe) main_mup_eq_pane_t5_ParamLimits

0x389e,	// (0x00045fbe) main_mup_eq_pane_t5

0x38bc,	// (0x00045fdc) main_mup_eq_pane_t6_ParamLimits

0x38bc,	// (0x00045fdc) main_mup_eq_pane_t6

0x38d2,	// (0x00045ff2) main_mup_eq_pane_t7_ParamLimits

0x38d2,	// (0x00045ff2) main_mup_eq_pane_t7

0x38e8,	// (0x00046008) main_mup_eq_pane_t8_ParamLimits

0x38e8,	// (0x00046008) main_mup_eq_pane_t8

0x38fe,	// (0x0004601e) main_mup_eq_pane_t9_ParamLimits

0x38fe,	// (0x0004601e) main_mup_eq_pane_t9

0x3918,	// (0x00046038) main_mup_eq_pane_t10_ParamLimits

0x3918,	// (0x00046038) main_mup_eq_pane_t10

0x0009,

0xf45c,	// (0x00051b7c) main_mup_eq_pane_t_ParamLimits

0xf45c,	// (0x00051b7c) main_mup_eq_pane_t

0x39c7,	// (0x000460e7) mup_equalizer_pane_cp5_ParamLimits

0x39db,	// (0x000460fb) mup_equalizer_pane_cp6_ParamLimits

0x39ef,	// (0x0004610f) mup_equalizer_pane_cp7_ParamLimits

0xa59d,	// (0x0004ccbd) main_gallery_pane

0xe30a,	// (0x00050a2a) smil2_volume_pane

0xe312,	// (0x00050a32) smil_status_volume_pane_g1_ParamLimits

0xe325,	// (0x00050a45) smil_status_volume_pane_g2_ParamLimits

0xa99b,	// (0x0004d0bb) smil_status_volume_pane_g3_ParamLimits

0xf54a,	// (0x00051c6a) smil_status_volume_pane_g_ParamLimits

0xe477,	// (0x00050b97) bg_popup_window_pane_cp07_ParamLimits

0xe485,	// (0x00050ba5) blid_firmament_pane

0x5048,	// (0x00047768) aid_size_cell_gallery_ParamLimits

0x5048,	// (0x00047768) aid_size_cell_gallery

0x505e,	// (0x0004777e) grid_gallery_pane_ParamLimits

0x505e,	// (0x0004777e) grid_gallery_pane

0x5077,	// (0x00047797) cell_gallery_pane_ParamLimits

0x5077,	// (0x00047797) cell_gallery_pane

0xe5aa,	// (0x00050cca) bg_cell_gallery_focus_pane_ParamLimits

0xe5aa,	// (0x00050cca) bg_cell_gallery_focus_pane

0xe5bc,	// (0x00050cdc) cell_gallery_pane_g1_ParamLimits

0xe5bc,	// (0x00050cdc) cell_gallery_pane_g1

0x50c0,	// (0x000477e0) cell_gallery_pane_g2_ParamLimits

0x50c0,	// (0x000477e0) cell_gallery_pane_g2

0x50cd,	// (0x000477ed) cell_gallery_pane_g3_ParamLimits

0x50cd,	// (0x000477ed) cell_gallery_pane_g3

0xe5c8,	// (0x00050ce8) cell_gallery_pane_g4_ParamLimits

0xe5c8,	// (0x00050ce8) cell_gallery_pane_g4

0x0003,

0xf5f1,	// (0x00051d11) cell_gallery_pane_g_ParamLimits

0xf5f1,	// (0x00051d11) cell_gallery_pane_g

0xe5d4,	// (0x00050cf4) bg_cell_gallery_focus_pane_g1

0xe5dc,	// (0x00050cfc) bg_cell_gallery_focus_pane_g2

0xe5e4,	// (0x00050d04) bg_cell_gallery_focus_pane_g3

0xe5ec,	// (0x00050d0c) bg_cell_gallery_focus_pane_g4

0xe5f4,	// (0x00050d14) bg_cell_gallery_focus_pane_g5

0xe5fc,	// (0x00050d1c) bg_cell_gallery_focus_pane_g6

0xe604,	// (0x00050d24) bg_cell_gallery_focus_pane_g7

0xe60c,	// (0x00050d2c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5fa,	// (0x00051d1a) bg_cell_gallery_focus_pane_g

0xe614,	// (0x00050d34) aid_firma_cardinal

0xe628,	// (0x00050d48) blid_firmament_pane_t1

0xe63f,	// (0x00050d5f) blid_firmament_pane_t2

0xe656,	// (0x00050d76) blid_firmament_pane_t3

0xe66d,	// (0x00050d8d) blid_firmament_pane_t4

0x0003,

0xf60b,	// (0x00051d2b) blid_firmament_pane_t

0xe684,	// (0x00050da4) blid_sat_info_pane

0xe694,	// (0x00050db4) blid_sat_info_pane_g1

0xe694,	// (0x00050db4) blid_sat_info_pane_g2

0x0001,

0xf614,	// (0x00051d34) blid_sat_info_pane_g

0xe6a6,	// (0x00050dc6) blid_sat_info_pane_t1

0xe6b4,	// (0x00050dd4) smil2_volume_content_pane

0xe6bd,	// (0x00050ddd) smil2_volume_pane_g1

0xe6c5,	// (0x00050de5) smil2_volume_content_pane_g1

0xe6ce,	// (0x00050dee) smil2_volume_content_pane_g2

0xe6d7,	// (0x00050df7) smil2_volume_content_pane_g3

0xe6e0,	// (0x00050e00) smil2_volume_content_pane_g4

0xe6e9,	// (0x00050e09) smil2_volume_content_pane_g5

0xe6f2,	// (0x00050e12) smil2_volume_content_pane_g6

0xe6fb,	// (0x00050e1b) smil2_volume_content_pane_g7

0xe704,	// (0x00050e24) smil2_volume_content_pane_g8

0xe70d,	// (0x00050e2d) smil2_volume_content_pane_g9

0xe716,	// (0x00050e36) smil2_volume_content_pane_g10

0x0009,

0x0336,	// (0x00042a56) smil2_volume_content_pane_g

0x1efd,	// (0x0004461d) cale_week_day_heading_pane_t1_ParamLimits

0x1f11,	// (0x00044631) cale_week_day_heading_pane_t2_ParamLimits

0x1f25,	// (0x00044645) cale_week_day_heading_pane_t3_ParamLimits

0x1f39,	// (0x00044659) cale_week_day_heading_pane_t4_ParamLimits

0x1f4d,	// (0x0004466d) cale_week_day_heading_pane_t5_ParamLimits

0x1f61,	// (0x00044681) cale_week_day_heading_pane_t6_ParamLimits

0x1f77,	// (0x00044697) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x0005190c) cale_week_day_heading_pane_t_ParamLimits

0xc4eb,	// (0x0004ec0b) bg_cale_side_pane_ParamLimits

0x1f8b,	// (0x000446ab) cale_week_time_pane_t1_ParamLimits

0x1fa3,	// (0x000446c3) cale_week_time_pane_t2_ParamLimits

0x1fbb,	// (0x000446db) cale_week_time_pane_t3_ParamLimits

0x1fd3,	// (0x000446f3) cale_week_time_pane_t4_ParamLimits

0x1feb,	// (0x0004470b) cale_week_time_pane_t5_ParamLimits

0x2003,	// (0x00044723) cale_week_time_pane_t6_ParamLimits

0x201b,	// (0x0004473b) cale_week_time_pane_t7_ParamLimits

0x2033,	// (0x00044753) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x0005191b) cale_week_time_pane_t_ParamLimits

0x204b,	// (0x0004476b) cell_cale_week_pane_g2_ParamLimits

0xc4eb,	// (0x0004ec0b) bg_cale_side_pane_cp01_ParamLimits

0x2f00,	// (0x00045620) cale_month_week_pane_t1_ParamLimits

0x2f17,	// (0x00045637) cale_month_week_pane_t2_ParamLimits

0x2f2e,	// (0x0004564e) cale_month_week_pane_t3_ParamLimits

0x2f45,	// (0x00045665) cale_month_week_pane_t4_ParamLimits

0x2f5c,	// (0x0004567c) cale_month_week_pane_t5_ParamLimits

0x2f73,	// (0x00045693) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x000519f4) cale_month_week_pane_t_ParamLimits

0xa7ff,	// (0x0004cf1f) cell_cale_month_pane_g1_ParamLimits

0xa59d,	// (0x0004ccbd) main_cale_event_viewer_pane

0xa59d,	// (0x0004ccbd) listscroll_cale_event_viewer_pane

0xe71f,	// (0x00050e3f) list_cale_ev_pane

0xe727,	// (0x00050e47) scroll_pane_cp023

0xe733,	// (0x00050e53) field_cale_ev_pane_ParamLimits

0xe733,	// (0x00050e53) field_cale_ev_pane

0xe74d,	// (0x00050e6d) field_cale_ev_content_pane_ParamLimits

0xe74d,	// (0x00050e6d) field_cale_ev_content_pane

0xe759,	// (0x00050e79) field_cale_ev_pane_g1_ParamLimits

0xe759,	// (0x00050e79) field_cale_ev_pane_g1

0xe765,	// (0x00050e85) field_cale_ev_pane_g2_ParamLimits

0xe765,	// (0x00050e85) field_cale_ev_pane_g2

0xe77d,	// (0x00050e9d) field_cale_ev_pane_g3_ParamLimits

0xe77d,	// (0x00050e9d) field_cale_ev_pane_g3

0x0002,

0x034b,	// (0x00042a6b) field_cale_ev_pane_g_ParamLimits

0x034b,	// (0x00042a6b) field_cale_ev_pane_g

0xe795,	// (0x00050eb5) field_cale_ev_pane_t1_ParamLimits

0xe795,	// (0x00050eb5) field_cale_ev_pane_t1

0xe7ac,	// (0x00050ecc) field_cale_ev_content_pane_t1_ParamLimits

0xe7ac,	// (0x00050ecc) field_cale_ev_content_pane_t1

0xcf8c,	// (0x0004f6ac) bg_button_pane_cp01

0xc399,	// (0x0004eab9) listscroll_cale_week_pane_ParamLimits

0x1d0e,	// (0x0004442e) popup_toolbar_window_cp01

0xc4d9,	// (0x0004ebf9) listscroll_cale_week_pane_t1_ParamLimits

0xc399,	// (0x0004eab9) listscroll_cale_day_pane_ParamLimits

0x30e6,	// (0x00045806) popup_toolbar_window_cp02

0xc4d9,	// (0x0004ebf9) listscroll_cale_day_pane_t1_ParamLimits

0xc399,	// (0x0004eab9) main_cale_month_pane_ParamLimits

0x45ec,	// (0x00046d0c) popup_toolbar_window_cp03_ParamLimits

0x45ec,	// (0x00046d0c) popup_toolbar_window_cp03

0x3c9e,	// (0x000463be) main_image_pane_g2_ParamLimits

0x3c9e,	// (0x000463be) main_image_pane_g2

0x3caf,	// (0x000463cf) main_image_pane_g3_ParamLimits

0x3caf,	// (0x000463cf) main_image_pane_g3

0x0002,

0xf4e4,	// (0x00051c04) main_image_pane_g_ParamLimits

0xf4e4,	// (0x00051c04) main_image_pane_g

0xd0a6,	// (0x0004f7c6) main_image_pane_t1_ParamLimits

0x3cc0,	// (0x000463e0) main_image_pane_t2_ParamLimits

0x3cc0,	// (0x000463e0) main_image_pane_t2

0x3cd2,	// (0x000463f2) main_image_pane_t3_ParamLimits

0x3cd2,	// (0x000463f2) main_image_pane_t3

0x3cfa,	// (0x0004641a) main_image_pane_t4_ParamLimits

0x3cfa,	// (0x0004641a) main_image_pane_t4

0x0003,

0xf4eb,	// (0x00051c0b) main_image_pane_t_ParamLimits

0xf4eb,	// (0x00051c0b) main_image_pane_t

0x3d1a,	// (0x0004643a) popup_image_details_window_cp01

0x3d24,	// (0x00046444) popup_toobar_trans_pane_cp01_ParamLimits

0x3d24,	// (0x00046444) popup_toobar_trans_pane_cp01

0x449d,	// (0x00046bbd) popup_image_details_window_ParamLimits

0x449d,	// (0x00046bbd) popup_image_details_window

0xe26b,	// (0x0005098b) popup_image_focus_window

0x48b3,	// (0x00046fd3) camera2_autofocus_pane_ParamLimits

0x48b3,	// (0x00046fd3) camera2_autofocus_pane

0xa59d,	// (0x0004ccbd) bg_popup_sub_pane_cp06

0xe7c9,	// (0x00050ee9) popup_image_focus_window_g1

0xe7d1,	// (0x00050ef1) popup_image_focus_window_g2

0xe7d9,	// (0x00050ef9) popup_image_focus_window_g3

0xe7e1,	// (0x00050f01) popup_image_focus_window_g4

0x0003,

0x0352,	// (0x00042a72) popup_image_focus_window_g

0xe7e9,	// (0x00050f09) popup_image_focus_window_t1

0xe7f7,	// (0x00050f17) popup_image_focus_window_t2

0xe807,	// (0x00050f27) popup_image_focus_window_t3

0x0002,

0x035b,	// (0x00042a7b) popup_image_focus_window_t

0xe815,	// (0x00050f35) camera2_autofocus_pane_g1

0xa615,	// (0x0004cd35) bg_tb_trans_pane_cp01

0xe823,	// (0x00050f43) popup_image_details_window_g1

0xe836,	// (0x00050f56) popup_image_details_window_g2

0x0002,

0x036d,	// (0x00042a8d) popup_image_details_window_g

0xe85f,	// (0x00050f7f) popup_image_details_window_t1

0xe871,	// (0x00050f91) popup_image_details_window_t2

0xe88a,	// (0x00050faa) popup_image_details_window_t3

0xe89e,	// (0x00050fbe) popup_image_details_window_t4

0xe8b9,	// (0x00050fd9) popup_image_details_window_t5

0x0004,

0x0374,	// (0x00042a94) popup_image_details_window_t

0xc385,	// (0x0004eaa5) bg_calc_paper_pane_ParamLimits

0xa59d,	// (0x0004ccbd) grid_highlight_pane_cp013

0xa62b,	// (0x0004cd4b) list_calc_pane_ParamLimits

0xa63d,	// (0x0004cd5d) scroll_pane_cp024

0xc399,	// (0x0004eab9) bg_calc_display_pane_ParamLimits

0x1b5b,	// (0x0004427b) calc_display_pane_t1_ParamLimits

0x1b6d,	// (0x0004428d) calc_display_pane_t2_ParamLimits

0xa645,	// (0x0004cd65) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x0005188e) calc_display_pane_t_ParamLimits

0x1c30,	// (0x00044350) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x000518ab) cell_calc_pane_g

0x1c39,	// (0x00044359) cell_calc_pane_t1

0xc3f8,	// (0x0004eb18) grid_highlight_pane_cp02_ParamLimits

0xc40e,	// (0x0004eb2e) toolbar_button_pane_cp01_ParamLimits

0xc40e,	// (0x0004eb2e) toolbar_button_pane_cp01

0xd0eb,	// (0x0004f80b) temp_image_control_pane_ParamLimits

0xd0eb,	// (0x0004f80b) temp_image_control_pane

0xa615,	// (0x0004cd35) main_mp3_pane

0xe8d3,	// (0x00050ff3) temp_image_control_pane_g1_ParamLimits

0xe8d3,	// (0x00050ff3) temp_image_control_pane_g1

0xe8e1,	// (0x00051001) temp_image_control_pane_g2_ParamLimits

0xe8e1,	// (0x00051001) temp_image_control_pane_g2

0xe8f3,	// (0x00051013) temp_image_control_pane_g3_ParamLimits

0xe8f3,	// (0x00051013) temp_image_control_pane_g3

0x510a,	// (0x0004782a) temp_image_control_pane_g4_ParamLimits

0x510a,	// (0x0004782a) temp_image_control_pane_g4

0x0003,

0xf624,	// (0x00051d44) temp_image_control_pane_g_ParamLimits

0xf624,	// (0x00051d44) temp_image_control_pane_g

0xe8d3,	// (0x00050ff3) main_mp3_pane_g1

0x511d,	// (0x0004783d) main_mp3_pane_g2

0x0007,

0xf62d,	// (0x00051d4d) main_mp3_pane_g

0xe936,	// (0x00051056) main_mp3_pane_t1

0xc55a,	// (0x0004ec7a) main_camera_pane_g8_ParamLimits

0xc55a,	// (0x0004ec7a) main_camera_pane_g8

0x22f1,	// (0x00044a11) main_video_pane_g7_ParamLimits

0x22f1,	// (0x00044a11) main_video_pane_g7

0xa9db,	// (0x0004d0fb) main_camera2_pane_t7_ParamLimits

0xa9db,	// (0x0004d0fb) main_camera2_pane_t7

0xc6a2,	// (0x0004edc2) scroll_pane_cp025_ParamLimits

0xc6a2,	// (0x0004edc2) scroll_pane_cp025

0xc6b6,	// (0x0004edd6) scroll_pane_cp026_ParamLimits

0xc6b6,	// (0x0004edd6) scroll_pane_cp026

0xc6c5,	// (0x0004ede5) wml_content_pane_ParamLimits

0xa59d,	// (0x0004ccbd) main_touch_calib_pane

0x51e9,	// (0x00047909) main_touch_calib_pane_g1

0x51f5,	// (0x00047915) main_touch_calib_pane_g2

0x5201,	// (0x00047921) main_touch_calib_pane_g3

0x520d,	// (0x0004792d) main_touch_calib_pane_g4

0x0003,

0xf64b,	// (0x00051d6b) main_touch_calib_pane_g

0x5219,	// (0x00047939) main_touch_calib_pane_t1

0x5233,	// (0x00047953) main_touch_calib_pane_t2

0x0004,

0xf654,	// (0x00051d74) main_touch_calib_pane_t

0xcd56,	// (0x0004f476) mup_progress_pane_cp02

0xcd75,	// (0x0004f495) navi_pane_g1

0xcdd7,	// (0x0004f4f7) navi_pane_mp_t3

0xa615,	// (0x0004cd35) main_mp3_pane_ParamLimits

0x462a,	// (0x00046d4a) navi_pane_ParamLimits

0xe8d3,	// (0x00050ff3) main_mp3_pane_g1_ParamLimits

0x511d,	// (0x0004783d) main_mp3_pane_g2_ParamLimits

0x512b,	// (0x0004784b) main_mp3_pane_g3_ParamLimits

0x512b,	// (0x0004784b) main_mp3_pane_g3

0x5139,	// (0x00047859) main_mp3_pane_g4_ParamLimits

0x5139,	// (0x00047859) main_mp3_pane_g4

0xe903,	// (0x00051023) main_mp3_pane_g5_ParamLimits

0xe903,	// (0x00051023) main_mp3_pane_g5

0xe911,	// (0x00051031) main_mp3_pane_g6_ParamLimits

0xe911,	// (0x00051031) main_mp3_pane_g6

0xe91e,	// (0x0005103e) main_mp3_pane_g7_ParamLimits

0xe91e,	// (0x0005103e) main_mp3_pane_g7

0xe92a,	// (0x0005104a) main_mp3_pane_g8_ParamLimits

0xe92a,	// (0x0005104a) main_mp3_pane_g8

0xf62d,	// (0x00051d4d) main_mp3_pane_g_ParamLimits

0x5147,	// (0x00047867) main_mp3_pane_t2

0x5155,	// (0x00047875) main_mp3_pane_t3

0xe944,	// (0x00051064) main_mp3_pane_t4

0xe952,	// (0x00051072) main_mp3_pane_t5

0x0005,

0xf63e,	// (0x00051d5e) main_mp3_pane_t

0xe960,	// (0x00051080) mup_progress_pane_cp01

0xa5cb,	// (0x0004cceb) aid_zoom_text_secondary2

0xe71f,	// (0x00050e3f) list_cale_ev2_pane

0xe727,	// (0x00050e47) scroll_pane_cp023_ParamLimits

0x5289,	// (0x000479a9) field_cale_ev2_pane_ParamLimits

0x5289,	// (0x000479a9) field_cale_ev2_pane

0xaa5a,	// (0x0004d17a) field_cale_ev2_pane_g1_ParamLimits

0xaa5a,	// (0x0004d17a) field_cale_ev2_pane_g1

0xaa66,	// (0x0004d186) field_cale_ev2_pane_g2_ParamLimits

0xaa66,	// (0x0004d186) field_cale_ev2_pane_g2

0xaa7e,	// (0x0004d19e) field_cale_ev2_pane_g3_ParamLimits

0xaa7e,	// (0x0004d19e) field_cale_ev2_pane_g3

0x0003,

0xf65f,	// (0x00051d7f) field_cale_ev2_pane_g_ParamLimits

0xf65f,	// (0x00051d7f) field_cale_ev2_pane_g

0x0cfb,	// (0x0004341b) field_cale_ev2_pane_t1_ParamLimits

0x0cfb,	// (0x0004341b) field_cale_ev2_pane_t1

0x0d12,	// (0x00043432) field_cale_ev2_pane_t2_ParamLimits

0x0d12,	// (0x00043432) field_cale_ev2_pane_t2

0x0001,

0xf668,	// (0x00051d88) field_cale_ev2_pane_t_ParamLimits

0xf668,	// (0x00051d88) field_cale_ev2_pane_t

0x3b4e,	// (0x0004626e) main_postcard_pane_g5_ParamLimits

0x3b4e,	// (0x0004626e) main_postcard_pane_g5

0x3b64,	// (0x00046284) main_postcard_pane_g6_ParamLimits

0x3b64,	// (0x00046284) main_postcard_pane_g6

0x20a1,	// (0x000447c1) camera2_autofocus_pane_cp_ParamLimits

0x20a1,	// (0x000447c1) camera2_autofocus_pane_cp

0xa615,	// (0x0004cd35) main_mup3_pane

0x52cf,	// (0x000479ef) main_mup3_pane_g1_ParamLimits

0x52cf,	// (0x000479ef) main_mup3_pane_g1

0x52f1,	// (0x00047a11) main_mup3_pane_g2_ParamLimits

0x52f1,	// (0x00047a11) main_mup3_pane_g2

0x5376,	// (0x00047a96) main_mup3_pane_g3_ParamLimits

0x5376,	// (0x00047a96) main_mup3_pane_g3

0x53bc,	// (0x00047adc) main_mup3_pane_g4_ParamLimits

0x53bc,	// (0x00047adc) main_mup3_pane_g4

0x5402,	// (0x00047b22) main_mup3_pane_g5_ParamLimits

0x5402,	// (0x00047b22) main_mup3_pane_g5

0x544a,	// (0x00047b6a) main_mup3_pane_g6_ParamLimits

0x544a,	// (0x00047b6a) main_mup3_pane_g6

0xe968,	// (0x00051088) main_mup3_pane_g7_ParamLimits

0xe968,	// (0x00051088) main_mup3_pane_g7

0x0007,

0xf678,	// (0x00051d98) main_mup3_pane_g_ParamLimits

0xf678,	// (0x00051d98) main_mup3_pane_g

0x54ca,	// (0x00047bea) main_mup3_pane_t1_ParamLimits

0x54ca,	// (0x00047bea) main_mup3_pane_t1

0x553e,	// (0x00047c5e) main_mup3_pane_t2_ParamLimits

0x553e,	// (0x00047c5e) main_mup3_pane_t2

0x5612,	// (0x00047d32) main_mup3_pane_t4_ParamLimits

0x5612,	// (0x00047d32) main_mup3_pane_t4

0x5670,	// (0x00047d90) main_mup3_pane_t5_ParamLimits

0x5670,	// (0x00047d90) main_mup3_pane_t5

0x572c,	// (0x00047e4c) main_mup3_pane_t6_ParamLimits

0x572c,	// (0x00047e4c) main_mup3_pane_t6

0x0005,

0xf689,	// (0x00051da9) main_mup3_pane_t_ParamLimits

0xf689,	// (0x00051da9) main_mup3_pane_t

0x57e4,	// (0x00047f04) mup3_progress_pane_ParamLimits

0x57e4,	// (0x00047f04) mup3_progress_pane

0x5870,	// (0x00047f90) popup_mup3_control_window_ParamLimits

0x5870,	// (0x00047f90) popup_mup3_control_window

0xe976,	// (0x00051096) popup_mup3_text_window

0x58a2,	// (0x00047fc2) mup3_progress_pane_t1

0x58c1,	// (0x00047fe1) mup3_progress_pane_t2

0xe97e,	// (0x0005109e) mup3_progress_pane_t3

0x0002,

0xf696,	// (0x00051db6) mup3_progress_pane_t

0xe99b,	// (0x000510bb) mup_progress_pane_cp03

0xa59d,	// (0x0004ccbd) bg_tb_trans_pane_cp04

0x58e0,	// (0x00048000) mup3_volume_pane

0x58e8,	// (0x00048008) popup_mup3_control_window_g1

0x58f1,	// (0x00048011) mup3_volume_pane_g1

0x58fa,	// (0x0004801a) mup3_volume_pane_g2

0x5903,	// (0x00048023) mup3_volume_pane_g3

0x0002,

0xf69d,	// (0x00051dbd) mup3_volume_pane_g

0xa59d,	// (0x0004ccbd) bg_tb_trans_pane_cp03

0xe9ab,	// (0x000510cb) popup_mup3_text_window_g1

0xe9b3,	// (0x000510d3) popup_mup3_text_window_t1

0xc3e1,	// (0x0004eb01) list_calc_item_pane_g1_ParamLimits

0xe3e5,	// (0x00050b05) mup_volume_pane_cp_g1

0x524d,	// (0x0004796d) main_touch_calib_pane_t3

0x5261,	// (0x00047981) main_touch_calib_pane_t4

0x5275,	// (0x00047995) main_touch_calib_pane_t5

0xa5a7,	// (0x0004ccc7) aid_cell_size_toolbar2

0xa5af,	// (0x0004cccf) aid_popup3_width_pane

0xa5bb,	// (0x0004ccdb) aid_zoom_text_msg_primary

0xa71f,	// (0x0004ce3f) vorec_t7

0xc3a5,	// (0x0004eac5) bg_calc_paper_pane_g1_ParamLimits

0xc3b1,	// (0x0004ead1) bg_calc_paper_pane_g2_ParamLimits

0xc3bd,	// (0x0004eadd) bg_calc_paper_pane_g3_ParamLimits

0xc3c9,	// (0x0004eae9) bg_calc_paper_pane_g4_ParamLimits

0xc3d5,	// (0x0004eaf5) bg_calc_paper_pane_g5_ParamLimits

0x1bb6,	// (0x000442d6) bg_calc_paper_pane_g6_ParamLimits

0x1bc7,	// (0x000442e7) bg_calc_paper_pane_g7_ParamLimits

0x1bd8,	// (0x000442f8) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x00051895) bg_calc_paper_pane_g_ParamLimits

0x1beb,	// (0x0004430b) calc_bg_paper_pane_g9_ParamLimits

0x21fb,	// (0x0004491b) image_qvga_pane_ParamLimits

0x21fb,	// (0x0004491b) image_qvga_pane

0xc282,	// (0x0004e9a2) bg_popup_sub_pane_cp04_ParamLimits

0xd022,	// (0x0004f742) popup_mup_playback_window_g1_ParamLimits

0xd02e,	// (0x0004f74e) popup_mup_playback_window_t1_ParamLimits

0xd043,	// (0x0004f763) popup_mup_playback_window_t2_ParamLimits

0x0137,	// (0x00042857) popup_mup_playback_window_t_ParamLimits

0x4daa,	// (0x000474ca) main_mup2_pane_g3_ParamLimits

0x4daa,	// (0x000474ca) main_mup2_pane_g3

0x2500,	// (0x00044c20) popup_toolbar_window_cp04

0xd438,	// (0x0004fb58) popup_call2_audio_second_window_g3_ParamLimits

0xd438,	// (0x0004fb58) popup_call2_audio_second_window_g3

0xd84e,	// (0x0004ff6e) popup_call2_audio_first_window_g4_ParamLimits

0xd84e,	// (0x0004ff6e) popup_call2_audio_first_window_g4

0xdee2,	// (0x00050602) popup_call2_audio_in_window_g4_ParamLimits

0xdee2,	// (0x00050602) popup_call2_audio_in_window_g4

0x3c80,	// (0x000463a0) aid_area_sk_bg_cut_ParamLimits

0x3c80,	// (0x000463a0) aid_area_sk_bg_cut

0xd058,	// (0x0004f778) aid_area_sk_bg_cut_2_ParamLimits

0xd058,	// (0x0004f778) aid_area_sk_bg_cut_2

0x50b0,	// (0x000477d0) aid_placing_details_win

0x50b8,	// (0x000477d8) aid_placing_details_win_2

0xe815,	// (0x00050f35) camera2_autofocus_pane_g1_ParamLimits

0x17e0,	// (0x00043f00) popup_fixed_preview_cale_window_ParamLimits

0x17e0,	// (0x00043f00) popup_fixed_preview_cale_window

0xce34,	// (0x0004f554) navi_slider_pane_g3

0xce3d,	// (0x0004f55d) navi_slider_pane_g4

0xce46,	// (0x0004f566) navi_slider_pane_g5

0xce34,	// (0x0004f554) navi_slider_pane_g6

0xa91a,	// (0x0004d03a) navi_slider_pane_g7

0xcf59,	// (0x0004f679) mup_scale_pane_g3

0xcf62,	// (0x0004f682) mup_scale_pane_g4

0xcf6b,	// (0x0004f68b) mup_scale_pane_g5

0x3a03,	// (0x00046123) mup_scale_pane_g6

0x3a0c,	// (0x0004612c) mup_scale_pane_g7

0xce34,	// (0x0004f554) cams2_slider_pane_g3

0xe467,	// (0x00050b87) cams2_slider_pane_g4

0xaa49,	// (0x0004d169) cams2_slider_pane_g5

0xce34,	// (0x0004f554) cams2_slider_pane_g6

0xaa51,	// (0x0004d171) cams2_slider_pane_g7

0xe694,	// (0x00050db4) camera2_autofocus_pane_cp_g1

0xe9c1,	// (0x000510e1) bg_popup_preview_window_pane_cp02_ParamLimits

0xe9c1,	// (0x000510e1) bg_popup_preview_window_pane_cp02

0xe9cd,	// (0x000510ed) list_fp_cale_pane_ParamLimits

0xe9cd,	// (0x000510ed) list_fp_cale_pane

0xe9d9,	// (0x000510f9) popup_fixed_preview_cale_window_t1_ParamLimits

0xe9d9,	// (0x000510f9) popup_fixed_preview_cale_window_t1

0x590c,	// (0x0004802c) popup_fixed_preview_cale_window_t2_ParamLimits

0x590c,	// (0x0004802c) popup_fixed_preview_cale_window_t2

0x5921,	// (0x00048041) popup_fixed_preview_cale_window_t3_ParamLimits

0x5921,	// (0x00048041) popup_fixed_preview_cale_window_t3

0x0002,

0xf6a4,	// (0x00051dc4) popup_fixed_preview_cale_window_t_ParamLimits

0xf6a4,	// (0x00051dc4) popup_fixed_preview_cale_window_t

0x5936,	// (0x00048056) list_single_fp_cale_pane_ParamLimits

0x5936,	// (0x00048056) list_single_fp_cale_pane

0xe9f7,	// (0x00051117) list_single_fp_cale_pane_g1_ParamLimits

0xe9f7,	// (0x00051117) list_single_fp_cale_pane_g1

0xea03,	// (0x00051123) list_single_fp_cale_pane_g2_ParamLimits

0xea03,	// (0x00051123) list_single_fp_cale_pane_g2

0x0002,

0x0406,	// (0x00042b26) list_single_fp_cale_pane_g_ParamLimits

0x0406,	// (0x00042b26) list_single_fp_cale_pane_g

0xea1c,	// (0x0005113c) list_single_fp_cale_pane_t1_ParamLimits

0xea1c,	// (0x0005113c) list_single_fp_cale_pane_t1

0xea2e,	// (0x0005114e) list_single_fp_cale_pane_t2_ParamLimits

0xea2e,	// (0x0005114e) list_single_fp_cale_pane_t2

0x0001,

0x040d,	// (0x00042b2d) list_single_fp_cale_pane_t_ParamLimits

0x040d,	// (0x00042b2d) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa59d,	// (0x0004ccbd) main_dialer_pane

0x594e,	// (0x0004806e) aid_cell_size_keypad

0x5958,	// (0x00048078) dialer_ne_pane

0x5960,	// (0x00048080) grid_dialer_command_1_pane

0x5968,	// (0x00048088) grid_dialer_command_2_pane

0x5970,	// (0x00048090) grid_dialer_keypad_pane

0x5982,	// (0x000480a2) bg_popup_call_pane_cp06_ParamLimits

0x5982,	// (0x000480a2) bg_popup_call_pane_cp06

0x598e,	// (0x000480ae) dialer_ne_clear_pane_ParamLimits

0x598e,	// (0x000480ae) dialer_ne_clear_pane

0xea61,	// (0x00051181) dialer_ne_pane_g1

0xea69,	// (0x00051189) dialer_ne_pane_t1_ParamLimits

0xea69,	// (0x00051189) dialer_ne_pane_t1

0x599a,	// (0x000480ba) dialer_ne_pane_t2_ParamLimits

0x599a,	// (0x000480ba) dialer_ne_pane_t2

0x59c4,	// (0x000480e4) dialer_ne_pane_t3_ParamLimits

0x59c4,	// (0x000480e4) dialer_ne_pane_t3

0x0002,

0xf6ab,	// (0x00051dcb) dialer_ne_pane_t_ParamLimits

0xf6ab,	// (0x00051dcb) dialer_ne_pane_t

0x59f4,	// (0x00048114) dialer_ne_pane_t3_copy1_ParamLimits

0x59f4,	// (0x00048114) dialer_ne_pane_t3_copy1

0x5a23,	// (0x00048143) cell_dialer_keypad_pane_ParamLimits

0x5a23,	// (0x00048143) cell_dialer_keypad_pane

0x5a3a,	// (0x0004815a) cell_dialer_command_1_pane_ParamLimits

0x5a3a,	// (0x0004815a) cell_dialer_command_1_pane

0x5a50,	// (0x00048170) cell_dialer_command_2_pane_ParamLimits

0x5a50,	// (0x00048170) cell_dialer_command_2_pane

0xea7b,	// (0x0005119b) bg_button_pane_cp02_ParamLimits

0xea7b,	// (0x0005119b) bg_button_pane_cp02

0x5a5f,	// (0x0004817f) cell_dialer_keypad_pane_g1_ParamLimits

0x5a5f,	// (0x0004817f) cell_dialer_keypad_pane_g1

0xea7b,	// (0x0005119b) bg_button_pane_cp03_ParamLimits

0xea7b,	// (0x0005119b) bg_button_pane_cp03

0x5a74,	// (0x00048194) cell_dialer_command_1_pane_g1_ParamLimits

0x5a74,	// (0x00048194) cell_dialer_command_1_pane_g1

0xea87,	// (0x000511a7) bg_button_pane_cp04

0x5a88,	// (0x000481a8) cell_dialer_command_2_pane_g1

0xce23,	// (0x0004f543) bg_button_pane_cp06

0xea8f,	// (0x000511af) dialer_ne_clear_pane_g1

0x3531,	// (0x00045c51) navi_pane_g2

0x355f,	// (0x00045c7f) navi_pane_g3

0x0002,

0xf404,	// (0x00051b24) navi_pane_g

0x3588,	// (0x00045ca8) navi_pane_mv_g2

0x35af,	// (0x00045ccf) navi_pane_mv_g5

0x35b7,	// (0x00045cd7) navi_pane_mv_t1

0xc399,	// (0x0004eab9) main_clock2_pane

0x5ac2,	// (0x000481e2) main_clock2_list_pane_ParamLimits

0x5ac2,	// (0x000481e2) main_clock2_list_pane

0x5afc,	// (0x0004821c) main_clock2_pane_t1_ParamLimits

0x5afc,	// (0x0004821c) main_clock2_pane_t1

0x5b3a,	// (0x0004825a) main_clock2_pane_t2_ParamLimits

0x5b3a,	// (0x0004825a) main_clock2_pane_t2

0x0004,

0xf6b2,	// (0x00051dd2) main_clock2_pane_t_ParamLimits

0xf6b2,	// (0x00051dd2) main_clock2_pane_t

0x5bd7,	// (0x000482f7) popup_clock_analogue_window_cp03_ParamLimits

0x5bd7,	// (0x000482f7) popup_clock_analogue_window_cp03

0x5bfe,	// (0x0004831e) popup_clock_digital_window_cp02_ParamLimits

0x5bfe,	// (0x0004831e) popup_clock_digital_window_cp02

0x5c73,	// (0x00048393) main_clock2_list_single_pane_ParamLimits

0x5c73,	// (0x00048393) main_clock2_list_single_pane

0xce23,	// (0x0004f543) list_highlight_pane_cp05

0xea97,	// (0x000511b7) main_clock2_list_single_pane_t1

0x2500,	// (0x00044c20) popup_toolbar_window_cp04_ParamLimits

0x50da,	// (0x000477fa) camera2_autofocus_pane_g2_ParamLimits

0x50da,	// (0x000477fa) camera2_autofocus_pane_g2

0x50e6,	// (0x00047806) camera2_autofocus_pane_g3_ParamLimits

0x50e6,	// (0x00047806) camera2_autofocus_pane_g3

0x50f2,	// (0x00047812) camera2_autofocus_pane_g4_ParamLimits

0x50f2,	// (0x00047812) camera2_autofocus_pane_g4

0x50fe,	// (0x0004781e) camera2_autofocus_pane_g5_ParamLimits

0x50fe,	// (0x0004781e) camera2_autofocus_pane_g5

0x0004,

0xf619,	// (0x00051d39) camera2_autofocus_pane_g_ParamLimits

0xf619,	// (0x00051d39) camera2_autofocus_pane_g

0x52af,	// (0x000479cf) camera2_autofocus_pane_cp_g2

0x52b7,	// (0x000479d7) camera2_autofocus_pane_cp_g3

0x52bf,	// (0x000479df) camera2_autofocus_pane_cp_g4

0x52c7,	// (0x000479e7) camera2_autofocus_pane_cp_g5

0x0004,

0xf66d,	// (0x00051d8d) camera2_autofocus_pane_cp_g

0x597a,	// (0x0004809a) popup_dialer_spcha_window

0xa59d,	// (0x0004ccbd) bg_popup_sub_pane_cp07

0xeaa5,	// (0x000511c5) list_spcha_pane

0xeaad,	// (0x000511cd) list_single_spcha_pane_ParamLimits

0xeaad,	// (0x000511cd) list_single_spcha_pane

0xa59d,	// (0x0004ccbd) list_highlight_pane_cp06

0xeabe,	// (0x000511de) list_single_spcha_pane_t1

0xdc83,	// (0x000503a3) popup_call2_audio_out_window_g4_ParamLimits

0xdc83,	// (0x000503a3) popup_call2_audio_out_window_g4

0xa59d,	// (0x0004ccbd) main_imed2_pane

0xe273,	// (0x00050993) popup_imed_adjust2_window

0x44b5,	// (0x00046bd5) popup_imed_trans_window_ParamLimits

0x44b5,	// (0x00046bd5) popup_imed_trans_window

0xe4d0,	// (0x00050bf0) popup_blid_sat_info2_window_t1

0xe4de,	// (0x00050bfe) popup_blid_sat_info2_window_t2

0x000a,

0xf5da,	// (0x00051cfa) popup_blid_sat_info2_window_t

0x5d1b,	// (0x0004843b) aid_size_cell_colour_35

0x5d3b,	// (0x0004845b) aid_size_cell_colour_112

0x5d5b,	// (0x0004847b) aid_size_cell_effect

0xe24b,	// (0x0005096b) bg_tb_trans_pane_cp02

0xc953,	// (0x0004f073) heading_imed_pane

0x5d7b,	// (0x0004849b) listscroll_imed_pane

0xeacc,	// (0x000511ec) heading_imed_pane_g1

0xead4,	// (0x000511f4) heading_imed_pane_t1

0xeae2,	// (0x00051202) grid_imed_colour_35_pane_ParamLimits

0xeae2,	// (0x00051202) grid_imed_colour_35_pane

0x5d87,	// (0x000484a7) grid_imed_effect_pane

0xeafd,	// (0x0005121d) list_imed_aspect_pane

0x5d9c,	// (0x000484bc) scroll_pane_cp027_ParamLimits

0x5d9c,	// (0x000484bc) scroll_pane_cp027

0x5dad,	// (0x000484cd) cell_imed_effect_pane_ParamLimits

0x5dad,	// (0x000484cd) cell_imed_effect_pane

0xeb05,	// (0x00051225) cell_imed_colour_pane_ParamLimits

0xeb05,	// (0x00051225) cell_imed_colour_pane

0xeb47,	// (0x00051267) cell_imed_colour_pane_g1_ParamLimits

0xeb47,	// (0x00051267) cell_imed_colour_pane_g1

0xeb58,	// (0x00051278) hgihlgiht_grid_pane_cp016_ParamLimits

0xeb58,	// (0x00051278) hgihlgiht_grid_pane_cp016

0x5dd4,	// (0x000484f4) cell_imed_effect_pane_g1

0x5ddc,	// (0x000484fc) grid_highlight_pane_cp017

0xeb69,	// (0x00051289) list_imed_single_pane_ParamLimits

0xeb69,	// (0x00051289) list_imed_single_pane

0xa59d,	// (0x0004ccbd) list_highlight_pane_cp07

0xeb80,	// (0x000512a0) list_imed_aspect_pane_comp1_t1

0xe24b,	// (0x0005096b) bg_tb_trans_pane_cp05

0xeba2,	// (0x000512c2) popup_imed_adjust2_window_g1

0xebc9,	// (0x000512e9) popup_imed_adjust2_window_t1

0xebe1,	// (0x00051301) slider_imed_adjust_pane

0xebf5,	// (0x00051315) slider_imed_adjust_pane_g1

0xec05,	// (0x00051325) slider_imed_adjust_pane_g2

0xec15,	// (0x00051335) slider_imed_adjust_pane_g3

0xec26,	// (0x00051346) slider_imed_adjust_pane_g4

0x0003,

0x0436,	// (0x00042b56) slider_imed_adjust_pane_g

0x5de5,	// (0x00048505) aid_size_cell_clipart2

0x5df1,	// (0x00048511) grid_imed_clipart_pane

0xec37,	// (0x00051357) scroll_pane_cp031

0x5dfb,	// (0x0004851b) cell_imed_clipart_pane_ParamLimits

0x5dfb,	// (0x0004851b) cell_imed_clipart_pane

0x5e22,	// (0x00048542) cell_imed_clipart_pane_g1

0xa59d,	// (0x0004ccbd) grid_highlight_pane_cp014

0x5ad7,	// (0x000481f7) main_clock2_pane_g1_ParamLimits

0x5ad7,	// (0x000481f7) main_clock2_pane_g1

0x5c1e,	// (0x0004833e) aid_call2_pane_cp10

0x5c30,	// (0x00048350) aid_call_pane_cp10

0xcd4a,	// (0x0004f46a) popup_clock_analogue_window_cp10_g1

0xcd4a,	// (0x0004f46a) popup_clock_analogue_window_cp10_g2

0x5c42,	// (0x00048362) popup_clock_analogue_window_cp10_g3

0x5c42,	// (0x00048362) popup_clock_analogue_window_cp10_g4

0xcd4a,	// (0x0004f46a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6bd,	// (0x00051ddd) popup_clock_analogue_window_cp10_g

0x5c54,	// (0x00048374) popup_clock_analogue_window_cp10_t1

0x5c85,	// (0x000483a5) clock_digital_number_pane_cp10_ParamLimits

0x5c85,	// (0x000483a5) clock_digital_number_pane_cp10

0x5c9d,	// (0x000483bd) clock_digital_number_pane_cp11_ParamLimits

0x5c9d,	// (0x000483bd) clock_digital_number_pane_cp11

0x5cb5,	// (0x000483d5) clock_digital_number_pane_cp12_ParamLimits

0x5cb5,	// (0x000483d5) clock_digital_number_pane_cp12

0x5ccd,	// (0x000483ed) clock_digital_number_pane_cp13_ParamLimits

0x5ccd,	// (0x000483ed) clock_digital_number_pane_cp13

0x5ce5,	// (0x00048405) clock_digital_separator_pane_cp10_ParamLimits

0x5ce5,	// (0x00048405) clock_digital_separator_pane_cp10

0x5cfd,	// (0x0004841d) popup_clock_digital_window_cp02_t1_ParamLimits

0x5cfd,	// (0x0004841d) popup_clock_digital_window_cp02_t1

0xc27a,	// (0x0004e99a) clock_digital_number_pane_cp10_g1

0xc27a,	// (0x0004e99a) clock_digital_number_pane_cp10_g2

0x0001,

0x043f,	// (0x00042b5f) clock_digital_number_pane_cp10_g

0xc27a,	// (0x0004e99a) clock_digital_separator_pane_cp10_g1

0xc27a,	// (0x0004e99a) clock_digital_separator_pane_g2_cp10

0xcde5,	// (0x0004f505) navi_pane_vded_g4

0xcdee,	// (0x0004f50e) navi_pane_vded_g5

0xcdf7,	// (0x0004f517) navi_pane_vded_t1

0xa59d,	// (0x0004ccbd) main_vded_pane

0x5e2b,	// (0x0004854b) main_vded_pane_g1

0x5e37,	// (0x00048557) main_vded_pane_g2

0x5e41,	// (0x00048561) main_vded_pane_g3

0x0002,

0xf6c8,	// (0x00051de8) main_vded_pane_g

0x5e4b,	// (0x0004856b) main_vded_pane_t1

0x5e59,	// (0x00048579) main_vded_pane_t2

0x0001,

0xf6cf,	// (0x00051def) main_vded_pane_t

0x5e67,	// (0x00048587) vded_slider_pane

0x5e71,	// (0x00048591) vded_video_pane

0xec3f,	// (0x0005135f) vded_video_pane_g1

0x5e7b,	// (0x0004859b) vded_video_pane_g2

0xe694,	// (0x00050db4) vded_video_pane_g3

0x0002,

0xf6d4,	// (0x00051df4) vded_video_pane_g

0xec49,	// (0x00051369) vded_slider_pane_g1

0xe3e5,	// (0x00050b05) vded_slider_pane_g2

0xec52,	// (0x00051372) vded_slider_pane_g3

0xec5b,	// (0x0005137b) vded_slider_pane_g4

0xec64,	// (0x00051384) vded_slider_pane_g5

0x0004,

0x0457,	// (0x00042b77) vded_slider_pane_g

0x5858,	// (0x00047f78) mup3_rocker_pane_ParamLimits

0x5858,	// (0x00047f78) mup3_rocker_pane

0x5e84,	// (0x000485a4) mup3_control_keys_pane_g1

0x5e8c,	// (0x000485ac) mup3_control_keys_pane_g2

0x5e94,	// (0x000485b4) mup3_control_keys_pane_g3

0x5e9c,	// (0x000485bc) mup3_control_keys_pane_g4

0x0003,

0xf6db,	// (0x00051dfb) mup3_control_keys_pane_g

0x1817,	// (0x00043f37) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1817,	// (0x00043f37) popup_toolbar2_fixed_window_cp01

0x588c,	// (0x00047fac) popup_toolbar2_fixed_window_cp02_ParamLimits

0x588c,	// (0x00047fac) popup_toolbar2_fixed_window_cp02

0xd5aa,	// (0x0004fcca) popup_call2_audio_second_window_t4_ParamLimits

0xd5aa,	// (0x0004fcca) popup_call2_audio_second_window_t4

0xdaf0,	// (0x00050210) popup_call2_audio_first_window_t6_ParamLimits

0xdaf0,	// (0x00050210) popup_call2_audio_first_window_t6

0xdd86,	// (0x000504a6) popup_call2_audio_out_window_t6_ParamLimits

0xdd86,	// (0x000504a6) popup_call2_audio_out_window_t6

0xa59d,	// (0x0004ccbd) main_vitu_pane

0x5eac,	// (0x000485cc) aid_size_cell_itu_ParamLimits

0x5eac,	// (0x000485cc) aid_size_cell_itu

0xa615,	// (0x0004cd35) bg_popup_window_pane_cp08_ParamLimits

0xa615,	// (0x0004cd35) bg_popup_window_pane_cp08

0x5ec2,	// (0x000485e2) field_vitu_entry_pane_ParamLimits

0x5ec2,	// (0x000485e2) field_vitu_entry_pane

0x5ed9,	// (0x000485f9) grid_vitu_function_pane_ParamLimits

0x5ed9,	// (0x000485f9) grid_vitu_function_pane

0x5ef4,	// (0x00048614) grid_vitu_itu_pane_ParamLimits

0x5ef4,	// (0x00048614) grid_vitu_itu_pane

0x5f12,	// (0x00048632) cell_vitu_itu_pane_ParamLimits

0x5f12,	// (0x00048632) cell_vitu_itu_pane

0x5f36,	// (0x00048656) cell_vitu_function_pane_ParamLimits

0x5f36,	// (0x00048656) cell_vitu_function_pane

0xa615,	// (0x0004cd35) bg_popup_sub_pane_cp08_ParamLimits

0xa615,	// (0x0004cd35) bg_popup_sub_pane_cp08

0x5f51,	// (0x00048671) field_vitu_entry_pane_t1_ParamLimits

0x5f51,	// (0x00048671) field_vitu_entry_pane_t1

0xec85,	// (0x000513a5) field_vitu_entry_pane_t2_ParamLimits

0xec85,	// (0x000513a5) field_vitu_entry_pane_t2

0x0001,

0xf6e4,	// (0x00051e04) field_vitu_entry_pane_t_ParamLimits

0xf6e4,	// (0x00051e04) field_vitu_entry_pane_t

0xeca2,	// (0x000513c2) bg_button_pane_cp05_ParamLimits

0xeca2,	// (0x000513c2) bg_button_pane_cp05

0x5f71,	// (0x00048691) cell_vitu_itu_pane_g1

0x5f89,	// (0x000486a9) cell_vitu_itu_pane_t1_ParamLimits

0x5f89,	// (0x000486a9) cell_vitu_itu_pane_t1

0x5f9b,	// (0x000486bb) cell_vitu_itu_pane_t2_ParamLimits

0x5f9b,	// (0x000486bb) cell_vitu_itu_pane_t2

0x0002,

0xf6e9,	// (0x00051e09) cell_vitu_itu_pane_t_ParamLimits

0xf6e9,	// (0x00051e09) cell_vitu_itu_pane_t

0xecb0,	// (0x000513d0) bg_button_pane_cp07

0x5fd0,	// (0x000486f0) cell_vitu_function_pane_g1

0xa623,	// (0x0004cd43) main_calc_pane_g1

0x1657,	// (0x00043d77) aid_visual_content_pane

0xa59d,	// (0x0004ccbd) main_vradio_pane

0x5fd9,	// (0x000486f9) main_vradio_pane_g1_ParamLimits

0x5fd9,	// (0x000486f9) main_vradio_pane_g1

0xecba,	// (0x000513da) main_vradio_pane_g2_ParamLimits

0xecba,	// (0x000513da) main_vradio_pane_g2

0x0001,

0xf6f0,	// (0x00051e10) main_vradio_pane_g_ParamLimits

0xf6f0,	// (0x00051e10) main_vradio_pane_g

0x5ff2,	// (0x00048712) main_vradio_pane_t1_ParamLimits

0x5ff2,	// (0x00048712) main_vradio_pane_t1

0x6007,	// (0x00048727) main_vradio_pane_t2_ParamLimits

0x6007,	// (0x00048727) main_vradio_pane_t2

0xecc7,	// (0x000513e7) main_vradio_pane_t3_ParamLimits

0xecc7,	// (0x000513e7) main_vradio_pane_t3

0x0002,

0xf6f5,	// (0x00051e15) main_vradio_pane_t_ParamLimits

0xf6f5,	// (0x00051e15) main_vradio_pane_t

0x601c,	// (0x0004873c) vradio_rocker_control_pane_ParamLimits

0x601c,	// (0x0004873c) vradio_rocker_control_pane

0x602e,	// (0x0004874e) vradio_station_info_pane_ParamLimits

0x602e,	// (0x0004874e) vradio_station_info_pane

0xecdb,	// (0x000513fb) vradio_frequency_info_pane_ParamLimits

0xecdb,	// (0x000513fb) vradio_frequency_info_pane

0xe694,	// (0x00050db4) vradio_station_info_pane_g1

0xecea,	// (0x0005140a) vradio_station_info_pane_t1_ParamLimits

0xecea,	// (0x0005140a) vradio_station_info_pane_t1

0xed0c,	// (0x0005142c) vradio_station_info_pane_t2_ParamLimits

0xed0c,	// (0x0005142c) vradio_station_info_pane_t2

0x0001,

0x0488,	// (0x00042ba8) vradio_station_info_pane_t_ParamLimits

0x0488,	// (0x00042ba8) vradio_station_info_pane_t

0xed1e,	// (0x0005143e) vradio_tuning_pane

0xed26,	// (0x00051446) vradio_rocker_control_pane_g1

0xed2e,	// (0x0005144e) vradio_rocker_control_pane_g2

0xed36,	// (0x00051456) vradio_rocker_control_pane_g3

0xed3e,	// (0x0005145e) vradio_rocker_control_pane_g4

0xed46,	// (0x00051466) vradio_rocker_control_pane_g5

0x0004,

0x048d,	// (0x00042bad) vradio_rocker_control_pane_g

0x6040,	// (0x00048760) vradio_frequency_info_pane_g1

0xed4e,	// (0x0005146e) vradio_frequency_info_pane_t1_ParamLimits

0xed4e,	// (0x0005146e) vradio_frequency_info_pane_t1

0x604a,	// (0x0004876a) vradio_tuning_pane_g1

0x6055,	// (0x00048775) vradio_tuning_pane_t1

0xa5d3,	// (0x0004ccf3) area_side_right_pane_ParamLimits

0xa5d3,	// (0x0004ccf3) area_side_right_pane

0xe212,	// (0x00050932) status_small_pane_g1

0xe21a,	// (0x0005093a) status_small_pane_g2

0xe223,	// (0x00050943) status_small_pane_g3

0xe22c,	// (0x0005094c) status_small_pane_g4

0x0003,

0x024d,	// (0x0004296d) status_small_pane_g

0xe235,	// (0x00050955) status_small_pane_t1

0xa59d,	// (0x0004ccbd) main_video3_pane

0xed62,	// (0x00051482) cams_zoom_vslider_pane

0xed6a,	// (0x0005148a) image3_wide_pane_ParamLimits

0xed6a,	// (0x0005148a) image3_wide_pane

0xed84,	// (0x000514a4) image3_wide_small_pane

0xed90,	// (0x000514b0) main_video3_pane_g1_ParamLimits

0xed90,	// (0x000514b0) main_video3_pane_g1

0xedac,	// (0x000514cc) main_video3_pane_g2_ParamLimits

0xedac,	// (0x000514cc) main_video3_pane_g2

0x0001,

0x0498,	// (0x00042bb8) main_video3_pane_g_ParamLimits

0x0498,	// (0x00042bb8) main_video3_pane_g

0xedc8,	// (0x000514e8) main_video3_pane_t1_ParamLimits

0xedc8,	// (0x000514e8) main_video3_pane_t1

0xedf3,	// (0x00051513) main_video3_pane_t2_ParamLimits

0xedf3,	// (0x00051513) main_video3_pane_t2

0xee1e,	// (0x0005153e) main_video3_pane_t3_ParamLimits

0xee1e,	// (0x0005153e) main_video3_pane_t3

0x0002,

0x049d,	// (0x00042bbd) main_video3_pane_t_ParamLimits

0x049d,	// (0x00042bbd) main_video3_pane_t

0xee4b,	// (0x0005156b) cams_zoom_vslider_pane_g1

0xee54,	// (0x00051574) cams_zoom_vslider_pane_g2

0x0001,

0x04a4,	// (0x00042bc4) cams_zoom_vslider_pane_g

0xee5c,	// (0x0005157c) small_slider_vertical_pane

0xe694,	// (0x00050db4) small_slider_vertical_pane_g1

0xe694,	// (0x00050db4) small_slider_vertical_pane_g2

0xee64,	// (0x00051584) small_slider_vertical_pane_g3

0x0002,

0xf6fc,	// (0x00051e1c) small_slider_vertical_pane_g

0xa59d,	// (0x0004ccbd) main_hwr_training_pane

0xee6d,	// (0x0005158d) hwr_training_instruct_pane_ParamLimits

0xee6d,	// (0x0005158d) hwr_training_instruct_pane

0x6064,	// (0x00048784) hwr_training_navi_pane_ParamLimits

0x6064,	// (0x00048784) hwr_training_navi_pane

0x6083,	// (0x000487a3) hwr_training_write_pane_ParamLimits

0x6083,	// (0x000487a3) hwr_training_write_pane

0xa59d,	// (0x0004ccbd) bg_frame_shadow_pane

0xeea4,	// (0x000515c4) hwr_training_write_pane_g1

0xeeac,	// (0x000515cc) hwr_training_write_pane_g2

0xeeb4,	// (0x000515d4) hwr_training_write_pane_g3

0xeebc,	// (0x000515dc) hwr_training_write_pane_g4

0xeec4,	// (0x000515e4) hwr_training_write_pane_g5

0xeecc,	// (0x000515ec) hwr_training_write_pane_g6

0xeed4,	// (0x000515f4) hwr_training_write_pane_g7

0x0006,

0x04b0,	// (0x00042bd0) hwr_training_write_pane_g

0xaaa2,	// (0x0004d1c2) hwr_training_navi_pane_g1_ParamLimits

0xaaa2,	// (0x0004d1c2) hwr_training_navi_pane_g1

0xaab4,	// (0x0004d1d4) hwr_training_navi_pane_g2_ParamLimits

0xaab4,	// (0x0004d1d4) hwr_training_navi_pane_g2

0xaac6,	// (0x0004d1e6) hwr_training_navi_pane_g3_ParamLimits

0xaac6,	// (0x0004d1e6) hwr_training_navi_pane_g3

0xaad6,	// (0x0004d1f6) hwr_training_navi_pane_g4_ParamLimits

0xaad6,	// (0x0004d1f6) hwr_training_navi_pane_g4

0x0004,

0xf703,	// (0x00051e23) hwr_training_navi_pane_g_ParamLimits

0xf703,	// (0x00051e23) hwr_training_navi_pane_g

0xaae3,	// (0x0004d203) hwr_training_navi_pane_t1

0x60cd,	// (0x000487ed) list_single_hwr_training_instruct_pane_ParamLimits

0x60cd,	// (0x000487ed) list_single_hwr_training_instruct_pane

0xeedc,	// (0x000515fc) list_single_hwr_training_instruct_pane_t1

0xe5d4,	// (0x00050cf4) bg_frame_shadow_pane_g1

0xeeeb,	// (0x0005160b) bg_frame_shadow_pane_g2

0xeef3,	// (0x00051613) bg_frame_shadow_pane_g3

0xeefb,	// (0x0005161b) bg_frame_shadow_pane_g4

0xef03,	// (0x00051623) bg_frame_shadow_pane_g5

0xef0b,	// (0x0005162b) bg_frame_shadow_pane_g6

0xef13,	// (0x00051633) bg_frame_shadow_pane_g7

0xc464,	// (0x0004eb84) bg_frame_shadow_pane_g8

0x0007,

0xf70e,	// (0x00051e2e) bg_frame_shadow_pane_g

0xa59d,	// (0x0004ccbd) main_video_tele_dialer_pane

0x60ea,	// (0x0004880a) aid_size_cell_video_keypad_ParamLimits

0x60ea,	// (0x0004880a) aid_size_cell_video_keypad

0x6104,	// (0x00048824) grid_video_dialer_keypad_pane_ParamLimits

0x6104,	// (0x00048824) grid_video_dialer_keypad_pane

0x6150,	// (0x00048870) video_down_pane_cp_ParamLimits

0x6150,	// (0x00048870) video_down_pane_cp

0x6180,	// (0x000488a0) cell_video_dialer_keypad_pane_ParamLimits

0x6180,	// (0x000488a0) cell_video_dialer_keypad_pane

0xef1b,	// (0x0005163b) bg_button_pane_cp08_ParamLimits

0xef1b,	// (0x0005163b) bg_button_pane_cp08

0x61a2,	// (0x000488c2) cell_video_dialer_keypad_pane_g1_ParamLimits

0x61a2,	// (0x000488c2) cell_video_dialer_keypad_pane_g1

0x5842,	// (0x00047f62) mup3_rocker2_pane_ParamLimits

0x5842,	// (0x00047f62) mup3_rocker2_pane

0xe694,	// (0x00050db4) mup3_rocker2_pane_g1

0x439e,	// (0x00046abe) main_dialer2_pane

0xa59d,	// (0x0004ccbd) main_mp4_pane

0xaaf9,	// (0x0004d219) main_mp4_pane_g1_ParamLimits

0xaaf9,	// (0x0004d219) main_mp4_pane_g1

0xaaf9,	// (0x0004d219) main_mp4_pane_g2_ParamLimits

0xaaf9,	// (0x0004d219) main_mp4_pane_g2

0x61dd,	// (0x000488fd) main_mp4_pane_g3_ParamLimits

0x61dd,	// (0x000488fd) main_mp4_pane_g3

0xab07,	// (0x0004d227) main_mp4_pane_g4_ParamLimits

0xab07,	// (0x0004d227) main_mp4_pane_g4

0xab2f,	// (0x0004d24f) main_mp4_pane_g5_ParamLimits

0xab2f,	// (0x0004d24f) main_mp4_pane_g5

0x0005,

0xf72e,	// (0x00051e4e) main_mp4_pane_g_ParamLimits

0xf72e,	// (0x00051e4e) main_mp4_pane_g

0xab7f,	// (0x0004d29f) main_mp4_pane_t1_ParamLimits

0xab7f,	// (0x0004d29f) main_mp4_pane_t1

0xabdb,	// (0x0004d2fb) main_mp4_pane_t2_ParamLimits

0xabdb,	// (0x0004d2fb) main_mp4_pane_t2

0xef27,	// (0x00051647) main_mp4_pane_t3_ParamLimits

0xef27,	// (0x00051647) main_mp4_pane_t3

0xac2d,	// (0x0004d34d) main_mp4_pane_t4_ParamLimits

0xac2d,	// (0x0004d34d) main_mp4_pane_t4

0x0003,

0xf73b,	// (0x00051e5b) main_mp4_pane_t_ParamLimits

0xf73b,	// (0x00051e5b) main_mp4_pane_t

0xac71,	// (0x0004d391) mp4_progress_pane_ParamLimits

0xac71,	// (0x0004d391) mp4_progress_pane

0xacbb,	// (0x0004d3db) mp4_rocker_pane_ParamLimits

0xacbb,	// (0x0004d3db) mp4_rocker_pane

0xef4f,	// (0x0005166f) mp4_progress_pane_t1

0xef68,	// (0x00051688) mp4_progress_pane_t2

0x0001,

0x0500,	// (0x00042c20) mp4_progress_pane_t

0xef81,	// (0x000516a1) mup_progress_pane_cp04

0xe694,	// (0x00050db4) mp4_rocker_pane_g1

0x6219,	// (0x00048939) aid_cell_size_keypad2_ParamLimits

0x6219,	// (0x00048939) aid_cell_size_keypad2

0x622f,	// (0x0004894f) dialer2_ne_pane_ParamLimits

0x622f,	// (0x0004894f) dialer2_ne_pane

0x6249,	// (0x00048969) grid_dialer2_keypad_pane_ParamLimits

0x6249,	// (0x00048969) grid_dialer2_keypad_pane

0xe477,	// (0x00050b97) bg_popup_call_pane_cp07_ParamLimits

0xe477,	// (0x00050b97) bg_popup_call_pane_cp07

0x6267,	// (0x00048987) dialer2_ne_pane_t1_ParamLimits

0x6267,	// (0x00048987) dialer2_ne_pane_t1

0x62a6,	// (0x000489c6) cell_dialer2_keypad_pane_ParamLimits

0x62a6,	// (0x000489c6) cell_dialer2_keypad_pane

0xef9f,	// (0x000516bf) bg_button_pane_pane_cp04_ParamLimits

0xef9f,	// (0x000516bf) bg_button_pane_pane_cp04

0x62ca,	// (0x000489ea) cell_dialer2_keypad_pane_g1_ParamLimits

0x62ca,	// (0x000489ea) cell_dialer2_keypad_pane_g1

0x23d4,	// (0x00044af4) aid_placing_vt_set_content_ParamLimits

0x23d4,	// (0x00044af4) aid_placing_vt_set_content

0x23fc,	// (0x00044b1c) aid_placing_vt_set_title_ParamLimits

0x23fc,	// (0x00044b1c) aid_placing_vt_set_title

0xa59d,	// (0x0004ccbd) main_image3_pane

0x6390,	// (0x00048ab0) area_side_right_pane_cp01_ParamLimits

0x6390,	// (0x00048ab0) area_side_right_pane_cp01

0xaaf9,	// (0x0004d219) main_image3_pane_g1_ParamLimits

0xaaf9,	// (0x0004d219) main_image3_pane_g1

0x63a7,	// (0x00048ac7) main_image3_pane_g2_ParamLimits

0x63a7,	// (0x00048ac7) main_image3_pane_g2

0x63cf,	// (0x00048aef) main_image3_pane_g3_ParamLimits

0x63cf,	// (0x00048aef) main_image3_pane_g3

0x63f9,	// (0x00048b19) main_image3_pane_g4_ParamLimits

0x63f9,	// (0x00048b19) main_image3_pane_g4

0x0003,

0xf74e,	// (0x00051e6e) main_image3_pane_g_ParamLimits

0xf74e,	// (0x00051e6e) main_image3_pane_g

0x6423,	// (0x00048b43) main_image3_pane_t1_ParamLimits

0x6423,	// (0x00048b43) main_image3_pane_t1

0x647b,	// (0x00048b9b) main_image3_pane_t2_ParamLimits

0x647b,	// (0x00048b9b) main_image3_pane_t2

0x64cd,	// (0x00048bed) main_image3_pane_t3_ParamLimits

0x64cd,	// (0x00048bed) main_image3_pane_t3

0x0003,

0xf757,	// (0x00051e77) main_image3_pane_t_ParamLimits

0xf757,	// (0x00051e77) main_image3_pane_t

0xa615,	// (0x0004cd35) grid_sctrl_middle_pane_cp01_ParamLimits

0xa615,	// (0x0004cd35) grid_sctrl_middle_pane_cp01

0x6555,	// (0x00048c75) cell_sctrl_middle_pane_cp01_ParamLimits

0x6555,	// (0x00048c75) cell_sctrl_middle_pane_cp01

0x6572,	// (0x00048c92) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6572,	// (0x00048c92) cell_sctrl_middle_pane_cp01_g1

0xa59d,	// (0x0004ccbd) main_call4_pane

0x6588,	// (0x00048ca8) aid_size_button_call4_ParamLimits

0x6588,	// (0x00048ca8) aid_size_button_call4

0x65b9,	// (0x00048cd9) call4_windows_pane_ParamLimits

0x65b9,	// (0x00048cd9) call4_windows_pane

0x65d9,	// (0x00048cf9) grid_call4_button_pane_ParamLimits

0x65d9,	// (0x00048cf9) grid_call4_button_pane

0xefab,	// (0x000516cb) call4_windows_conf_pane

0xefc0,	// (0x000516e0) popup_call4_audio_first_window_ParamLimits

0xefc0,	// (0x000516e0) popup_call4_audio_first_window

0xf00c,	// (0x0005172c) popup_call4_audio_second_window_ParamLimits

0xf00c,	// (0x0005172c) popup_call4_audio_second_window

0xf020,	// (0x00051740) popup_call4_audio_wait_window_ParamLimits

0xf020,	// (0x00051740) popup_call4_audio_wait_window

0x6606,	// (0x00048d26) cell_call4_button_pane_ParamLimits

0x6606,	// (0x00048d26) cell_call4_button_pane

0x662f,	// (0x00048d4f) bg_button_pane_cp09_ParamLimits

0x662f,	// (0x00048d4f) bg_button_pane_cp09

0x663b,	// (0x00048d5b) cell_call4_button_pane_g1_ParamLimits

0x663b,	// (0x00048d5b) cell_call4_button_pane_g1

0x6661,	// (0x00048d81) cell_call4_button_pane_t1_ParamLimits

0x6661,	// (0x00048d81) cell_call4_button_pane_t1

0xf068,	// (0x00051788) popup_call4_audio_conf_window_ParamLimits

0xf068,	// (0x00051788) popup_call4_audio_conf_window

0x58a2,	// (0x00047fc2) mup3_progress_pane_t1_ParamLimits

0x58c1,	// (0x00047fe1) mup3_progress_pane_t2_ParamLimits

0xe97e,	// (0x0005109e) mup3_progress_pane_t3_ParamLimits

0xf696,	// (0x00051db6) mup3_progress_pane_t_ParamLimits

0xe99b,	// (0x000510bb) mup_progress_pane_cp03_ParamLimits

0x5ea4,	// (0x000485c4) mup3_control_keys_pane_g4_copy1

0xac9f,	// (0x0004d3bf) mp4_rocker2_pane_ParamLimits

0xac9f,	// (0x0004d3bf) mp4_rocker2_pane

0xf07c,	// (0x0005179c) mp4_rocker2_pane_g1

0xf084,	// (0x000517a4) mp4_rocker2_pane_g2

0xad0d,	// (0x0004d42d) mp4_rocker2_pane_g3

0xad15,	// (0x0004d435) mp4_rocker2_pane_g4

0xad1d,	// (0x0004d43d) mp4_rocker2_pane_g5

0x0004,

0xf760,	// (0x00051e80) mp4_rocker2_pane_g

0xa59d,	// (0x0004ccbd) main_camera4_pane

0xa59d,	// (0x0004ccbd) main_video4_pane

0x611e,	// (0x0004883e) main_video_tele_dialer_pane_t1_ParamLimits

0x611e,	// (0x0004883e) main_video_tele_dialer_pane_t1

0x6137,	// (0x00048857) main_video_tele_dialer_pane_t2_ParamLimits

0x6137,	// (0x00048857) main_video_tele_dialer_pane_t2

0x0001,

0xf71f,	// (0x00051e3f) main_video_tele_dialer_pane_t_ParamLimits

0xf71f,	// (0x00051e3f) main_video_tele_dialer_pane_t

0x66a3,	// (0x00048dc3) cam4_autofocus_pane_ParamLimits

0x66a3,	// (0x00048dc3) cam4_autofocus_pane

0x66b9,	// (0x00048dd9) cam4_image_uncrop_pane_ParamLimits

0x66b9,	// (0x00048dd9) cam4_image_uncrop_pane

0x66d3,	// (0x00048df3) cam4_indicators_pane_ParamLimits

0x66d3,	// (0x00048df3) cam4_indicators_pane

0x66fe,	// (0x00048e1e) main_camera4_pane_g1_ParamLimits

0x66fe,	// (0x00048e1e) main_camera4_pane_g1

0x6711,	// (0x00048e31) main_camera4_pane_g2_ParamLimits

0x6711,	// (0x00048e31) main_camera4_pane_g2

0x6724,	// (0x00048e44) main_camera4_pane_g3_ParamLimits

0x6724,	// (0x00048e44) main_camera4_pane_g3

0x6737,	// (0x00048e57) main_camera4_pane_g4_ParamLimits

0x6737,	// (0x00048e57) main_camera4_pane_g4

0x674a,	// (0x00048e6a) main_camera4_pane_g5_ParamLimits

0x674a,	// (0x00048e6a) main_camera4_pane_g5

0x0005,

0xf76b,	// (0x00051e8b) main_camera4_pane_g_ParamLimits

0xf76b,	// (0x00051e8b) main_camera4_pane_g

0x676e,	// (0x00048e8e) main_camera4_pane_t1_ParamLimits

0x676e,	// (0x00048e8e) main_camera4_pane_t1

0xe903,	// (0x00051023) bg_tb_trans_pane_cp06

0xad49,	// (0x0004d469) cam4_indicators_pane_g1

0xad5a,	// (0x0004d47a) cam4_indicators_pane_g2

0x0002,

0xf786,	// (0x00051ea6) cam4_indicators_pane_g

0xad78,	// (0x0004d498) cam4_indicators_pane_t1

0x67d2,	// (0x00048ef2) main_video4_pane_g1_ParamLimits

0x67d2,	// (0x00048ef2) main_video4_pane_g1

0x67e5,	// (0x00048f05) main_video4_pane_g2_ParamLimits

0x67e5,	// (0x00048f05) main_video4_pane_g2

0x67f9,	// (0x00048f19) main_video4_pane_g3_ParamLimits

0x67f9,	// (0x00048f19) main_video4_pane_g3

0x680d,	// (0x00048f2d) main_video4_pane_g4_ParamLimits

0x680d,	// (0x00048f2d) main_video4_pane_g4

0x0004,

0xf78d,	// (0x00051ead) main_video4_pane_g_ParamLimits

0xf78d,	// (0x00051ead) main_video4_pane_g

0x6835,	// (0x00048f55) vid4_indicators_pane_ParamLimits

0x6835,	// (0x00048f55) vid4_indicators_pane

0x6867,	// (0x00048f87) video4_image_uncrop_cif_pane_ParamLimits

0x6867,	// (0x00048f87) video4_image_uncrop_cif_pane

0x6881,	// (0x00048fa1) video4_image_uncrop_nhd_pane_ParamLimits

0x6881,	// (0x00048fa1) video4_image_uncrop_nhd_pane

0x66b9,	// (0x00048dd9) video4_image_uncrop_vga_pane_ParamLimits

0x66b9,	// (0x00048dd9) video4_image_uncrop_vga_pane

0xad9a,	// (0x0004d4ba) bg_tb_trans_pane_cp07

0x6895,	// (0x00048fb5) vid4_indicators_pane_g1

0x68a2,	// (0x00048fc2) vid4_indicators_pane_g2

0x68af,	// (0x00048fcf) vid4_indicators_pane_g3

0x0004,

0xf798,	// (0x00051eb8) vid4_indicators_pane_g

0x68d4,	// (0x00048ff4) vid4_indicators_pane_t1

0x68e6,	// (0x00049006) cam4_autofocus_pane_g1

0x68ee,	// (0x0004900e) cam4_autofocus_pane_g2

0x68f6,	// (0x00049016) cam4_autofocus_pane_g3

0x0002,

0xf7a3,	// (0x00051ec3) cam4_autofocus_pane_g

0x68fe,	// (0x0004901e) cam4_autofocus_pane_g3_copy1

0x6164,	// (0x00048884) video_down_pane_cp_t1

0x6172,	// (0x00048892) video_down_pane_cp_t2

0x0001,

0xf724,	// (0x00051e44) video_down_pane_cp_t

0xa615,	// (0x0004cd35) popup_vitu2_window_ParamLimits

0xa615,	// (0x0004cd35) popup_vitu2_window

0x6906,	// (0x00049026) aid_size_cell2_itu2_ParamLimits

0x6906,	// (0x00049026) aid_size_cell2_itu2

0x692c,	// (0x0004904c) aid_size_cell_itu2_ParamLimits

0x692c,	// (0x0004904c) aid_size_cell_itu2

0x6988,	// (0x000490a8) bg_popup_window_pane_cp09_ParamLimits

0x6988,	// (0x000490a8) bg_popup_window_pane_cp09

0x6996,	// (0x000490b6) field_vitu2_entry_pane_ParamLimits

0x6996,	// (0x000490b6) field_vitu2_entry_pane

0x69bc,	// (0x000490dc) grid_vitu2_function_pane_ParamLimits

0x69bc,	// (0x000490dc) grid_vitu2_function_pane

0x6a0d,	// (0x0004912d) grid_vitu2_itu_pane_ParamLimits

0x6a0d,	// (0x0004912d) grid_vitu2_itu_pane

0x6a9e,	// (0x000491be) cell_vitu2_itu_pane_ParamLimits

0x6a9e,	// (0x000491be) cell_vitu2_itu_pane

0x6ac2,	// (0x000491e2) cell_vitu2_function_pane_ParamLimits

0x6ac2,	// (0x000491e2) cell_vitu2_function_pane

0xf09e,	// (0x000517be) bg_popup_call_pane_cp08_ParamLimits

0xf09e,	// (0x000517be) bg_popup_call_pane_cp08

0xf0b7,	// (0x000517d7) field_vitu2_entry_pane_g1

0xf0c3,	// (0x000517e3) field_vitu2_entry_pane_g2

0x0002,

0xf7aa,	// (0x00051eca) field_vitu2_entry_pane_g

0xadb0,	// (0x0004d4d0) field_vitu2_entry_pane_t1_ParamLimits

0xadb0,	// (0x0004d4d0) field_vitu2_entry_pane_t1

0xade2,	// (0x0004d502) field_vitu2_entry_pane_t2_ParamLimits

0xade2,	// (0x0004d502) field_vitu2_entry_pane_t2

0x0001,

0xf7b1,	// (0x00051ed1) field_vitu2_entry_pane_t_ParamLimits

0xf7b1,	// (0x00051ed1) field_vitu2_entry_pane_t

0x6b09,	// (0x00049229) bg_button_pane_cp010_ParamLimits

0x6b09,	// (0x00049229) bg_button_pane_cp010

0x6b17,	// (0x00049237) cell_vitu2_itu_pane_g1

0x6b35,	// (0x00049255) cell_vitu2_itu_pane_t1_ParamLimits

0x6b35,	// (0x00049255) cell_vitu2_itu_pane_t1

0x0d27,	// (0x00043447) cell_vitu2_itu_pane_t2_ParamLimits

0x0d27,	// (0x00043447) cell_vitu2_itu_pane_t2

0x0002,

0xf7bb,	// (0x00051edb) cell_vitu2_itu_pane_t_ParamLimits

0xf7bb,	// (0x00051edb) cell_vitu2_itu_pane_t

0xa615,	// (0x0004cd35) bg_button_pane_cp011

0x6b9b,	// (0x000492bb) cell_vitu2_function_pane_g1

0xa59d,	// (0x0004ccbd) main_myfav_hc_pane

0x651d,	// (0x00048c3d) popup_image3_note_pane_ParamLimits

0x651d,	// (0x00048c3d) popup_image3_note_pane

0x6539,	// (0x00048c59) popup_image3_tool_bar_pane_ParamLimits

0x6539,	// (0x00048c59) popup_image3_tool_bar_pane

0x0dab,	// (0x000434cb) cell_vitu2_itu_pane_t3_ParamLimits

0x0dab,	// (0x000434cb) cell_vitu2_itu_pane_t3

0xa59d,	// (0x0004ccbd) bg_popup_trans_pane

0x6baf,	// (0x000492cf) grid_image3_tool_bar_pane

0x6bb9,	// (0x000492d9) bg_popup_trans_pane_g1

0xc7ab,	// (0x0004eecb) bg_popup_trans_pane_g2

0x6bc1,	// (0x000492e1) bg_popup_trans_pane_g3

0x6bc9,	// (0x000492e9) bg_popup_trans_pane_g4

0x6bd1,	// (0x000492f1) bg_popup_trans_pane_g5

0x6bd9,	// (0x000492f9) bg_popup_trans_pane_g6

0x6be1,	// (0x00049301) bg_popup_trans_pane_g7

0x6be9,	// (0x00049309) bg_popup_trans_pane_g8

0xc78b,	// (0x0004eeab) bg_popup_trans_pane_g9

0x0008,

0xf7c2,	// (0x00051ee2) bg_popup_trans_pane_g

0x6bf1,	// (0x00049311) cell_image3_tool_bar_pane_ParamLimits

0x6bf1,	// (0x00049311) cell_image3_tool_bar_pane

0xe694,	// (0x00050db4) cell_image3_tool_bar_pane_g1

0xa59d,	// (0x0004ccbd) bg_popup_trans_pane_cp1

0x6c05,	// (0x00049325) popup_image3_note_pane_t1

0x6c13,	// (0x00049333) popup_image3_note_pane_t2

0x6c21,	// (0x00049341) popup_image3_note_pane_t3

0x0002,

0xf7d5,	// (0x00051ef5) popup_image3_note_pane_t

0x6c2f,	// (0x0004934f) popup_image3_note_pane_t3_copy1

0x6c3d,	// (0x0004935d) bg_myfav_hc_instruction_pane_ParamLimits

0x6c3d,	// (0x0004935d) bg_myfav_hc_instruction_pane

0x6c53,	// (0x00049373) cell_myfav_contact_pane_ParamLimits

0x6c53,	// (0x00049373) cell_myfav_contact_pane

0x6c6f,	// (0x0004938f) cell_myfav_contact_pane_cp1_ParamLimits

0x6c6f,	// (0x0004938f) cell_myfav_contact_pane_cp1

0x6c87,	// (0x000493a7) cell_myfav_contact_pane_cp2_ParamLimits

0x6c87,	// (0x000493a7) cell_myfav_contact_pane_cp2

0x6c9f,	// (0x000493bf) cell_myfav_contact_pane_cp3_ParamLimits

0x6c9f,	// (0x000493bf) cell_myfav_contact_pane_cp3

0x6cb6,	// (0x000493d6) cell_myfav_contact_pane_cp4_ParamLimits

0x6cb6,	// (0x000493d6) cell_myfav_contact_pane_cp4

0x6cce,	// (0x000493ee) cell_myfav_contact_pane_cp5_ParamLimits

0x6cce,	// (0x000493ee) cell_myfav_contact_pane_cp5

0x6ce2,	// (0x00049402) cell_myfav_contact_pane_cp6_ParamLimits

0x6ce2,	// (0x00049402) cell_myfav_contact_pane_cp6

0x6cf8,	// (0x00049418) cell_myfav_contact_pane_cp7_ParamLimits

0x6cf8,	// (0x00049418) cell_myfav_contact_pane_cp7

0x6d12,	// (0x00049432) listscroll_gen_pane_cp05

0x6d1b,	// (0x0004943b) main_myfav_hc_pane_g1_ParamLimits

0x6d1b,	// (0x0004943b) main_myfav_hc_pane_g1

0x6d35,	// (0x00049455) main_myfav_hc_pane_g2_ParamLimits

0x6d35,	// (0x00049455) main_myfav_hc_pane_g2

0x0002,

0xf7dc,	// (0x00051efc) main_myfav_hc_pane_g_ParamLimits

0xf7dc,	// (0x00051efc) main_myfav_hc_pane_g

0x6d67,	// (0x00049487) main_myfav_hc_pane_t1_ParamLimits

0x6d67,	// (0x00049487) main_myfav_hc_pane_t1

0x6d7e,	// (0x0004949e) main_myfav_hc_pane_t2_ParamLimits

0x6d7e,	// (0x0004949e) main_myfav_hc_pane_t2

0x6d90,	// (0x000494b0) main_myfav_hc_pane_t3_ParamLimits

0x6d90,	// (0x000494b0) main_myfav_hc_pane_t3

0x6da2,	// (0x000494c2) main_myfav_hc_pane_t4_ParamLimits

0x6da2,	// (0x000494c2) main_myfav_hc_pane_t4

0x0004,

0xf7e3,	// (0x00051f03) main_myfav_hc_pane_t_ParamLimits

0xf7e3,	// (0x00051f03) main_myfav_hc_pane_t

0xe694,	// (0x00050db4) bg_myfav_hc_instruction_pane_g1

0x6dca,	// (0x000494ea) cell_myfav_contact_pane_g1_ParamLimits

0x6dca,	// (0x000494ea) cell_myfav_contact_pane_g1

0x6dca,	// (0x000494ea) cell_myfav_contact_pane_g2_ParamLimits

0x6dca,	// (0x000494ea) cell_myfav_contact_pane_g2

0x6dd6,	// (0x000494f6) cell_myfav_contact_pane_g3_ParamLimits

0x6dd6,	// (0x000494f6) cell_myfav_contact_pane_g3

0xe968,	// (0x00051088) cell_myfav_contact_pane_g4_ParamLimits

0xe968,	// (0x00051088) cell_myfav_contact_pane_g4

0x6de3,	// (0x00049503) cell_myfav_contact_pane_g5_ParamLimits

0x6de3,	// (0x00049503) cell_myfav_contact_pane_g5

0x0004,

0xf7ee,	// (0x00051f0e) cell_myfav_contact_pane_g_ParamLimits

0xf7ee,	// (0x00051f0e) cell_myfav_contact_pane_g

0x6d4f,	// (0x0004946f) main_myfav_hc_pane_g3_ParamLimits

0x6d4f,	// (0x0004946f) main_myfav_hc_pane_g3

0x1779,	// (0x00043e99) popup_adpt_find_window

0x6def,	// (0x0004950f) afind_page_pane_ParamLimits

0x6def,	// (0x0004950f) afind_page_pane

0x6e04,	// (0x00049524) aid_size_cell_afind_ParamLimits

0x6e04,	// (0x00049524) aid_size_cell_afind

0x6e22,	// (0x00049542) bg_popup_sub_pane_cp09_ParamLimits

0x6e22,	// (0x00049542) bg_popup_sub_pane_cp09

0x6e2f,	// (0x0004954f) find_pane_cp01_ParamLimits

0x6e2f,	// (0x0004954f) find_pane_cp01

0x6e3c,	// (0x0004955c) grid_afind_control_pane_ParamLimits

0x6e3c,	// (0x0004955c) grid_afind_control_pane

0x6e50,	// (0x00049570) grid_afind_pane_ParamLimits

0x6e50,	// (0x00049570) grid_afind_pane

0x6e72,	// (0x00049592) cell_afind_pane_ParamLimits

0x6e72,	// (0x00049592) cell_afind_pane

0xe694,	// (0x00050db4) afind_page_pane_g1

0x6ed3,	// (0x000495f3) afind_page_pane_g2

0x6edc,	// (0x000495fc) afind_page_pane_g3

0x0002,

0xf7f9,	// (0x00051f19) afind_page_pane_g

0x6ee5,	// (0x00049605) afind_page_pane_t1

0x6f05,	// (0x00049625) cell_afind_grid_control_pane_ParamLimits

0x6f05,	// (0x00049625) cell_afind_grid_control_pane

0xef9f,	// (0x000516bf) bg_button_pane_cp69_ParamLimits

0xef9f,	// (0x000516bf) bg_button_pane_cp69

0x6f14,	// (0x00049634) cell_afind_pane_g1_ParamLimits

0x6f14,	// (0x00049634) cell_afind_pane_g1

0x6f21,	// (0x00049641) cell_afind_pane_t1_ParamLimits

0x6f21,	// (0x00049641) cell_afind_pane_t1

0xc5a4,	// (0x0004ecc4) bg_button_pane_cp72

0x6f33,	// (0x00049653) cell_afind_grid_control_pane_g1

0x3e61,	// (0x00046581) aid_image_placing_area_ParamLimits

0x3e61,	// (0x00046581) aid_image_placing_area

0xec6d,	// (0x0005138d) field_vitu_entry_pane_g1_ParamLimits

0xec6d,	// (0x0005138d) field_vitu_entry_pane_g1

0xec79,	// (0x00051399) field_vitu_entry_pane_g2_ParamLimits

0xec79,	// (0x00051399) field_vitu_entry_pane_g2

0x0001,

0x046b,	// (0x00042b8b) field_vitu_entry_pane_g_ParamLimits

0x046b,	// (0x00042b8b) field_vitu_entry_pane_g

0x5f71,	// (0x00048691) cell_vitu_itu_pane_g1_ParamLimits

0x5fb3,	// (0x000486d3) cell_vitu_itu_pane_t3_ParamLimits

0x5fb3,	// (0x000486d3) cell_vitu_itu_pane_t3

0xef4f,	// (0x0005166f) mp4_progress_pane_t1_ParamLimits

0xef68,	// (0x00051688) mp4_progress_pane_t2_ParamLimits

0x0500,	// (0x00042c20) mp4_progress_pane_t_ParamLimits

0xef81,	// (0x000516a1) mup_progress_pane_cp04_ParamLimits

0x6db6,	// (0x000494d6) main_myfav_hc_pane_t5_ParamLimits

0x6db6,	// (0x000494d6) main_myfav_hc_pane_t5

0xa5c3,	// (0x0004cce3) aid_zoom_text_primary

0x1779,	// (0x00043e99) popup_adpt_find_window_ParamLimits

0xa615,	// (0x0004cd35) main_cam_set_pane

0x66ea,	// (0x00048e0a) cam4_zoom_pane_ParamLimits

0x66ea,	// (0x00048e0a) cam4_zoom_pane

0x6f3c,	// (0x0004965c) main_cam_set_pane_g1_ParamLimits

0x6f3c,	// (0x0004965c) main_cam_set_pane_g1

0x6f4a,	// (0x0004966a) main_cam_set_pane_g2_ParamLimits

0x6f4a,	// (0x0004966a) main_cam_set_pane_g2

0x0001,

0xf800,	// (0x00051f20) main_cam_set_pane_g_ParamLimits

0xf800,	// (0x00051f20) main_cam_set_pane_g

0x6f6b,	// (0x0004968b) main_cam_set_pane_t1_ParamLimits

0x6f6b,	// (0x0004968b) main_cam_set_pane_t1

0x6f86,	// (0x000496a6) main_cset_listscroll_pane_ParamLimits

0x6f86,	// (0x000496a6) main_cset_listscroll_pane

0x6fa6,	// (0x000496c6) main_cset_slider_pane_ParamLimits

0x6fa6,	// (0x000496c6) main_cset_slider_pane

0x6fd4,	// (0x000496f4) main_cset_list_pane_ParamLimits

0x6fd4,	// (0x000496f4) main_cset_list_pane

0x6fe4,	// (0x00049704) scroll_pane_cp028

0x6fed,	// (0x0004970d) aid_area_touch_slider

0x7009,	// (0x00049729) cset_slider_pane

0x7033,	// (0x00049753) main_cset_slider_pane_g1

0x7048,	// (0x00049768) main_cset_slider_pane_g2

0x0011,

0xf805,	// (0x00051f25) main_cset_slider_pane_g

0x7134,	// (0x00049854) main_cset_slider_pane_t1

0x7162,	// (0x00049882) main_cset_slider_pane_t2

0x717c,	// (0x0004989c) main_cset_slider_pane_t3

0x7196,	// (0x000498b6) main_cset_slider_pane_t4

0x71b0,	// (0x000498d0) main_cset_slider_pane_t5

0x71cc,	// (0x000498ec) main_cset_slider_pane_t6

0x71e1,	// (0x00049901) main_cset_slider_pane_t7

0x000e,

0xf82a,	// (0x00051f4a) main_cset_slider_pane_t

0x7357,	// (0x00049a77) cset_list_set_pane_ParamLimits

0x7357,	// (0x00049a77) cset_list_set_pane

0x736b,	// (0x00049a8b) aid_position_infowindow_above

0x7373,	// (0x00049a93) aid_position_infowindow_below

0x0e03,	// (0x00043523) cset_list_set_pane_g1_ParamLimits

0x0e03,	// (0x00043523) cset_list_set_pane_g1

0x0e0f,	// (0x0004352f) cset_list_set_pane_g3_ParamLimits

0x0e0f,	// (0x0004352f) cset_list_set_pane_g3

0x0001,

0xf849,	// (0x00051f69) cset_list_set_pane_g_ParamLimits

0xf849,	// (0x00051f69) cset_list_set_pane_g

0x0e1e,	// (0x0004353e) cset_list_set_pane_t1_ParamLimits

0x0e1e,	// (0x0004353e) cset_list_set_pane_t1

0xa615,	// (0x0004cd35) list_highlight_pane_cp021_ParamLimits

0xa615,	// (0x0004cd35) list_highlight_pane_cp021

0xcf59,	// (0x0004f679) cset_slider_pane_g1

0xcf6b,	// (0x0004f68b) cset_slider_pane_g2

0xcf62,	// (0x0004f682) cset_slider_pane_g3

0x0002,

0x060f,	// (0x00042d2f) cset_slider_pane_g

0xadff,	// (0x0004d51f) aid_area_touch_cam4_zoom

0xae07,	// (0x0004d527) cam4_zoom_cont_pane

0xae0f,	// (0x0004d52f) cam4_zoom_pane_g1

0xae17,	// (0x0004d537) cam4_zoom_pane_g2

0x737b,	// (0x00049a9b) cam4_zoom_pane_g3

0x0002,

0xf84e,	// (0x00051f6e) cam4_zoom_pane_g

0x7383,	// (0x00049aa3) cam4_zoom_cont_pane_g1

0x738c,	// (0x00049aac) cam4_zoom_cont_pane_g2

0x7395,	// (0x00049ab5) cam4_zoom_cont_pane_g3

0x0002,

0xf855,	// (0x00051f75) cam4_zoom_cont_pane_g

0x65a6,	// (0x00048cc6) call4_image_pane_ParamLimits

0x65a6,	// (0x00048cc6) call4_image_pane

0xefab,	// (0x000516cb) call4_windows_conf_pane_ParamLimits

0xefea,	// (0x0005170a) popup_call4_audio_in_window_ParamLimits

0xefea,	// (0x0005170a) popup_call4_audio_in_window

0xa59d,	// (0x0004ccbd) bg_popup_call2_act_pane_cp02

0xf060,	// (0x00051780) call4_list_conf_pane

0xe694,	// (0x00050db4) call4_image_pane_g1

0xe694,	// (0x00050db4) call4_image_pane_g2

0x0001,

0xf614,	// (0x00051d34) call4_image_pane_g

0x739e,	// (0x00049abe) list_single_graphic_popup_conf4_pane_ParamLimits

0x739e,	// (0x00049abe) list_single_graphic_popup_conf4_pane

0xa59d,	// (0x0004ccbd) list_highlight_pane_cp022

0x73b1,	// (0x00049ad1) list_single_graphic_popup_conf4_pane_g1

0xcc3c,	// (0x0004f35c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf85c,	// (0x00051f7c) list_single_graphic_popup_conf4_pane_g

0x73b9,	// (0x00049ad9) list_single_graphic_popup_conf4_pane_t1

0x2520,	// (0x00044c40) popup_vtel_slider_window_ParamLimits

0x2520,	// (0x00044c40) popup_vtel_slider_window

0xef8d,	// (0x000516ad) dialer2_ne_pane_t2_ParamLimits

0xef8d,	// (0x000516ad) dialer2_ne_pane_t2

0x0001,

0xf744,	// (0x00051e64) dialer2_ne_pane_t_ParamLimits

0xf744,	// (0x00051e64) dialer2_ne_pane_t

0xe477,	// (0x00050b97) bg_popup_sub_pane_cp010_ParamLimits

0xe477,	// (0x00050b97) bg_popup_sub_pane_cp010

0x73cf,	// (0x00049aef) popup_vtel_slider_window_g1_ParamLimits

0x73cf,	// (0x00049aef) popup_vtel_slider_window_g1

0x73e2,	// (0x00049b02) popup_vtel_slider_window_g2_ParamLimits

0x73e2,	// (0x00049b02) popup_vtel_slider_window_g2

0x0003,

0xf861,	// (0x00051f81) popup_vtel_slider_window_g_ParamLimits

0xf861,	// (0x00051f81) popup_vtel_slider_window_g

0x7438,	// (0x00049b58) vtel_slider_pane_ParamLimits

0x7438,	// (0x00049b58) vtel_slider_pane

0x745a,	// (0x00049b7a) vtel_slider_pane_g1_ParamLimits

0x745a,	// (0x00049b7a) vtel_slider_pane_g1

0x746e,	// (0x00049b8e) vtel_slider_pane_g2_ParamLimits

0x746e,	// (0x00049b8e) vtel_slider_pane_g2

0x7486,	// (0x00049ba6) vtel_slider_pane_g3_ParamLimits

0x7486,	// (0x00049ba6) vtel_slider_pane_g3

0x745a,	// (0x00049b7a) vtel_slider_pane_g4_ParamLimits

0x745a,	// (0x00049b7a) vtel_slider_pane_g4

0x749c,	// (0x00049bbc) vtel_slider_pane_g5_ParamLimits

0x749c,	// (0x00049bbc) vtel_slider_pane_g5

0x0004,

0xf86a,	// (0x00051f8a) vtel_slider_pane_g_ParamLimits

0xf86a,	// (0x00051f8a) vtel_slider_pane_g

0xa59d,	// (0x0004ccbd) main_gallery2_pane

0x6958,	// (0x00049078) aid_size_row_itut2_dropdow_list_ParamLimits

0x6958,	// (0x00049078) aid_size_row_itut2_dropdow_list

0x69e4,	// (0x00049104) grid_vitu2_function_top_pane_ParamLimits

0x69e4,	// (0x00049104) grid_vitu2_function_top_pane

0x6a49,	// (0x00049169) popup_vitu2_dropdown_list_window_ParamLimits

0x6a49,	// (0x00049169) popup_vitu2_dropdown_list_window

0x6a72,	// (0x00049192) popup_vitu2_match_list_window

0x74b2,	// (0x00049bd2) cell_vitu2_function_top_pane_ParamLimits

0x74b2,	// (0x00049bd2) cell_vitu2_function_top_pane

0x74d0,	// (0x00049bf0) cell_vitu2_function_top_pane_cp01_ParamLimits

0x74d0,	// (0x00049bf0) cell_vitu2_function_top_pane_cp01

0x74ee,	// (0x00049c0e) cell_vitu2_function_top_wide_pane_ParamLimits

0x74ee,	// (0x00049c0e) cell_vitu2_function_top_wide_pane

0xa615,	// (0x0004cd35) bg_button_pane_cp012

0x750c,	// (0x00049c2c) cell_vitu2_function_top_pane_g1

0xae2d,	// (0x0004d54d) bg_button_pane_cp013_ParamLimits

0xae2d,	// (0x0004d54d) bg_button_pane_cp013

0x7520,	// (0x00049c40) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7520,	// (0x00049c40) cell_vitu2_function_top_wide_pane_g1

0xa615,	// (0x0004cd35) bg_popup_sub_pane_cp20

0x7538,	// (0x00049c58) list_vitu2_match_list_pane

0x6bb9,	// (0x000492d9) bg_popup_sub_pane_cp20_g1

0x6bc1,	// (0x000492e1) bg_popup_sub_pane_cp20_g2

0xc7ab,	// (0x0004eecb) bg_popup_sub_pane_cp20_g3

0x6bc9,	// (0x000492e9) bg_popup_sub_pane_cp20_g4

0xc78b,	// (0x0004eeab) bg_popup_sub_pane_cp20_g5

0x7556,	// (0x00049c76) bg_popup_sub_pane_cp20_g6

0x6bd9,	// (0x000492f9) bg_popup_sub_pane_cp20_g7

0x6be1,	// (0x00049301) bg_popup_sub_pane_cp20_g8

0x6be9,	// (0x00049309) bg_popup_sub_pane_cp20_g9

0x0008,

0xf875,	// (0x00051f95) bg_popup_sub_pane_cp20_g

0xae49,	// (0x0004d569) list_vitu2_match_list_item_pane_ParamLimits

0xae49,	// (0x0004d569) list_vitu2_match_list_item_pane

0xae5b,	// (0x0004d57b) list_vitu2_match_list_item_pane_t1

0xa59d,	// (0x0004ccbd) bg_popup_sub_pane_cp21

0xcb41,	// (0x0004f261) grid_vitu2_dropdown_list_pane

0x755e,	// (0x00049c7e) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x755e,	// (0x00049c7e) cell_vitu2_dropdown_list_char_pane

0x757f,	// (0x00049c9f) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x757f,	// (0x00049c9f) cell_vitu2_dropdown_list_ctrl_pane

0x75ab,	// (0x00049ccb) cell_vitu2_dropdown_list_char_pane_g1

0x75b4,	// (0x00049cd4) cell_vitu2_dropdown_list_char_pane_g2

0x75bd,	// (0x00049cdd) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf892,	// (0x00051fb2) cell_vitu2_dropdown_list_char_pane_g

0x75c6,	// (0x00049ce6) cell_vitu2_dropdown_list_char_pane_t1

0x75d4,	// (0x00049cf4) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x75d4,	// (0x00049cf4) cell_vitu2_dropdown_list_ctrl_pane_g1

0x75e4,	// (0x00049d04) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x75e4,	// (0x00049d04) cell_vitu2_dropdown_list_ctrl_pane_g2

0x75f5,	// (0x00049d15) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x75f5,	// (0x00049d15) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7605,	// (0x00049d25) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7605,	// (0x00049d25) cell_vitu2_dropdown_list_ctrl_pane_g4

0xe903,	// (0x00051023) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xe903,	// (0x00051023) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf899,	// (0x00051fb9) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf899,	// (0x00051fb9) cell_vitu2_dropdown_list_ctrl_pane_g

0x7621,	// (0x00049d41) aid_size_cell_gallery2_ParamLimits

0x7621,	// (0x00049d41) aid_size_cell_gallery2

0x7637,	// (0x00049d57) grid_gallery2_pane_ParamLimits

0x7637,	// (0x00049d57) grid_gallery2_pane

0x764b,	// (0x00049d6b) scroll_pane_cp029_ParamLimits

0x764b,	// (0x00049d6b) scroll_pane_cp029

0x7657,	// (0x00049d77) cell_gallery2_pane_ParamLimits

0x7657,	// (0x00049d77) cell_gallery2_pane

0x768d,	// (0x00049dad) cell_gallery2_pane_g2

0x7697,	// (0x00049db7) cell_gallery2_pane_g3

0x769f,	// (0x00049dbf) cell_gallery2_pane_g4

0x76a7,	// (0x00049dc7) cell_gallery2_pane_g5

0xce23,	// (0x0004f543) grid_highlight_pane_cp10

0x6a72,	// (0x00049192) popup_vitu2_match_list_window_ParamLimits

0x6a87,	// (0x000491a7) popup_vitu2_query_window_ParamLimits

0x6a87,	// (0x000491a7) popup_vitu2_query_window

0xa59d,	// (0x0004ccbd) bg_vitu2_candi_button_pane

0x75ab,	// (0x00049ccb) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x75b4,	// (0x00049cd4) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x75bd,	// (0x00049cdd) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0e68,	// (0x00043588) bg_button_pane_cp015

0x76af,	// (0x00049dcf) bg_button_pane_cp016

0x76c2,	// (0x00049de2) bg_button_pane_cp017

0xe24b,	// (0x0005096b) bg_popup_sub_pane_cp22

0x76e6,	// (0x00049e06) popup_vitu2_query_window_g1

0x0e9d,	// (0x000435bd) popup_vitu2_query_window_g2

0x0002,

0xf8a4,	// (0x00051fc4) popup_vitu2_query_window_g

0x0ebc,	// (0x000435dc) popup_vitu2_query_window_t1_ParamLimits

0x0ebc,	// (0x000435dc) popup_vitu2_query_window_t1

0x0ef1,	// (0x00043611) popup_vitu2_query_window_t2_ParamLimits

0x0ef1,	// (0x00043611) popup_vitu2_query_window_t2

0x0f03,	// (0x00043623) popup_vitu2_query_window_t3_ParamLimits

0x0f03,	// (0x00043623) popup_vitu2_query_window_t3

0x76f2,	// (0x00049e12) popup_vitu2_query_window_t4_ParamLimits

0x76f2,	// (0x00049e12) popup_vitu2_query_window_t4

0x7713,	// (0x00049e33) popup_vitu2_query_window_t5_ParamLimits

0x7713,	// (0x00049e33) popup_vitu2_query_window_t5

0x0006,

0xf8ab,	// (0x00051fcb) popup_vitu2_query_window_t_ParamLimits

0xf8ab,	// (0x00051fcb) popup_vitu2_query_window_t

0x6fcc,	// (0x000496ec) main_cset_text_pane

0x6fed,	// (0x0004970d) aid_area_touch_slider_ParamLimits

0x7009,	// (0x00049729) cset_slider_pane_ParamLimits

0x7033,	// (0x00049753) main_cset_slider_pane_g1_ParamLimits

0x7048,	// (0x00049768) main_cset_slider_pane_g2_ParamLimits

0x705d,	// (0x0004977d) main_cset_slider_pane_g3_ParamLimits

0x705d,	// (0x0004977d) main_cset_slider_pane_g3

0x7069,	// (0x00049789) main_cset_slider_pane_g4_ParamLimits

0x7069,	// (0x00049789) main_cset_slider_pane_g4

0x7078,	// (0x00049798) main_cset_slider_pane_g5_ParamLimits

0x7078,	// (0x00049798) main_cset_slider_pane_g5

0x7084,	// (0x000497a4) main_cset_slider_pane_g6_ParamLimits

0x7084,	// (0x000497a4) main_cset_slider_pane_g6

0xf805,	// (0x00051f25) main_cset_slider_pane_g_ParamLimits

0x7134,	// (0x00049854) main_cset_slider_pane_t1_ParamLimits

0x7162,	// (0x00049882) main_cset_slider_pane_t2_ParamLimits

0x717c,	// (0x0004989c) main_cset_slider_pane_t3_ParamLimits

0x7196,	// (0x000498b6) main_cset_slider_pane_t4_ParamLimits

0x71b0,	// (0x000498d0) main_cset_slider_pane_t5_ParamLimits

0x71cc,	// (0x000498ec) main_cset_slider_pane_t6_ParamLimits

0x71e1,	// (0x00049901) main_cset_slider_pane_t7_ParamLimits

0x720b,	// (0x0004992b) main_cset_slider_pane_t8_ParamLimits

0x720b,	// (0x0004992b) main_cset_slider_pane_t8

0x7233,	// (0x00049953) main_cset_slider_pane_t9_ParamLimits

0x7233,	// (0x00049953) main_cset_slider_pane_t9

0x725b,	// (0x0004997b) main_cset_slider_pane_t10_ParamLimits

0x725b,	// (0x0004997b) main_cset_slider_pane_t10

0x7283,	// (0x000499a3) main_cset_slider_pane_t11_ParamLimits

0x7283,	// (0x000499a3) main_cset_slider_pane_t11

0x72ab,	// (0x000499cb) main_cset_slider_pane_t12_ParamLimits

0x72ab,	// (0x000499cb) main_cset_slider_pane_t12

0x72c8,	// (0x000499e8) main_cset_slider_pane_t13_ParamLimits

0x72c8,	// (0x000499e8) main_cset_slider_pane_t13

0xf82a,	// (0x00051f4a) main_cset_slider_pane_t_ParamLimits

0xa59d,	// (0x0004ccbd) bg_popup_sub_pane_cp011

0x7734,	// (0x00049e54) main_cset_text_pane_g1

0x773c,	// (0x00049e5c) main_cset_text_pane_t1

0x774a,	// (0x00049e6a) main_cset_text_pane_t2

0x7758,	// (0x00049e78) main_cset_text_pane_t3

0x7766,	// (0x00049e86) main_cset_text_pane_t4

0x7774,	// (0x00049e94) main_cset_text_pane_t5

0x7782,	// (0x00049ea2) main_cset_text_pane_t6

0x7790,	// (0x00049eb0) main_cset_text_pane_t7

0x0006,

0xf8ba,	// (0x00051fda) main_cset_text_pane_t

0xa59d,	// (0x0004ccbd) main_cam4_burst_pane

0xa59d,	// (0x0004ccbd) main_cam5_pane

0x6ef3,	// (0x00049613) bg_button_pane_cp019

0x6efc,	// (0x0004961c) bg_button_pane_cp020

0x7098,	// (0x000497b8) main_cset_slider_pane_g7_ParamLimits

0x7098,	// (0x000497b8) main_cset_slider_pane_g7

0x70a4,	// (0x000497c4) main_cset_slider_pane_g8_ParamLimits

0x70a4,	// (0x000497c4) main_cset_slider_pane_g8

0x70b0,	// (0x000497d0) main_cset_slider_pane_g9_ParamLimits

0x70b0,	// (0x000497d0) main_cset_slider_pane_g9

0x70bc,	// (0x000497dc) main_cset_slider_pane_g10_ParamLimits

0x70bc,	// (0x000497dc) main_cset_slider_pane_g10

0x70c8,	// (0x000497e8) main_cset_slider_pane_g11_ParamLimits

0x70c8,	// (0x000497e8) main_cset_slider_pane_g11

0x70d4,	// (0x000497f4) main_cset_slider_pane_g12_ParamLimits

0x70d4,	// (0x000497f4) main_cset_slider_pane_g12

0x70e0,	// (0x00049800) main_cset_slider_pane_g13_ParamLimits

0x70e0,	// (0x00049800) main_cset_slider_pane_g13

0x70ec,	// (0x0004980c) main_cset_slider_pane_g14_ParamLimits

0x70ec,	// (0x0004980c) main_cset_slider_pane_g14

0x70f8,	// (0x00049818) main_cset_slider_pane_g15_ParamLimits

0x70f8,	// (0x00049818) main_cset_slider_pane_g15

0x72e5,	// (0x00049a05) main_cset_slider_pane_t14_ParamLimits

0x72e5,	// (0x00049a05) main_cset_slider_pane_t14

0x731e,	// (0x00049a3e) main_cset_slider_pane_t15_ParamLimits

0x731e,	// (0x00049a3e) main_cset_slider_pane_t15

0x779e,	// (0x00049ebe) aid_cam4_burst_size_cell_ParamLimits

0x779e,	// (0x00049ebe) aid_cam4_burst_size_cell

0x77be,	// (0x00049ede) grid_cam4_burst_pane_ParamLimits

0x77be,	// (0x00049ede) grid_cam4_burst_pane

0x77f6,	// (0x00049f16) linegrid_cam4_burst_pane_ParamLimits

0x77f6,	// (0x00049f16) linegrid_cam4_burst_pane

0x781c,	// (0x00049f3c) scroll_pane_cp30_ParamLimits

0x781c,	// (0x00049f3c) scroll_pane_cp30

0x7828,	// (0x00049f48) cell_cam4_burst_pane_ParamLimits

0x7828,	// (0x00049f48) cell_cam4_burst_pane

0x7875,	// (0x00049f95) linegrid_cam4_burst_pane_g1_ParamLimits

0x7875,	// (0x00049f95) linegrid_cam4_burst_pane_g1

0x7882,	// (0x00049fa2) linegrid_cam4_burst_pane_g2_ParamLimits

0x7882,	// (0x00049fa2) linegrid_cam4_burst_pane_g2

0x7893,	// (0x00049fb3) linegrid_cam4_burst_pane_g3_ParamLimits

0x7893,	// (0x00049fb3) linegrid_cam4_burst_pane_g3

0x0002,

0xf8c9,	// (0x00051fe9) linegrid_cam4_burst_pane_g_ParamLimits

0xf8c9,	// (0x00051fe9) linegrid_cam4_burst_pane_g

0x78a0,	// (0x00049fc0) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x78a0,	// (0x00049fc0) linegrid_cam4_burst_pane_g3_copy1

0x78ba,	// (0x00049fda) linegrid_cam4_burst_pane_g4_ParamLimits

0x78ba,	// (0x00049fda) linegrid_cam4_burst_pane_g4

0x78c7,	// (0x00049fe7) linegrid_cam4_burst_pane_g5_ParamLimits

0x78c7,	// (0x00049fe7) linegrid_cam4_burst_pane_g5

0x78d8,	// (0x00049ff8) linegrid_cam4_burst_pane_g6_ParamLimits

0x78d8,	// (0x00049ff8) linegrid_cam4_burst_pane_g6

0x78ef,	// (0x0004a00f) linegrid_cam4_burst_pane_g7_ParamLimits

0x78ef,	// (0x0004a00f) linegrid_cam4_burst_pane_g7

0x78fc,	// (0x0004a01c) cell_cam4_burst_pane_g1

0x791d,	// (0x0004a03d) main_cam5_pane_t1_ParamLimits

0x791d,	// (0x0004a03d) main_cam5_pane_t1

0x792f,	// (0x0004a04f) main_cam5_pane_t2_ParamLimits

0x792f,	// (0x0004a04f) main_cam5_pane_t2

0x7941,	// (0x0004a061) main_cam5_pane_t3_ParamLimits

0x7941,	// (0x0004a061) main_cam5_pane_t3

0x7953,	// (0x0004a073) main_cam5_pane_t4_ParamLimits

0x7953,	// (0x0004a073) main_cam5_pane_t4

0x7969,	// (0x0004a089) main_cam5_pane_t5_ParamLimits

0x7969,	// (0x0004a089) main_cam5_pane_t5

0x797b,	// (0x0004a09b) main_cam5_pane_t6_ParamLimits

0x797b,	// (0x0004a09b) main_cam5_pane_t6

0x798f,	// (0x0004a0af) main_cam5_pane_t7_ParamLimits

0x798f,	// (0x0004a0af) main_cam5_pane_t7

0x79a1,	// (0x0004a0c1) main_cam5_pane_t8_ParamLimits

0x79a1,	// (0x0004a0c1) main_cam5_pane_t8

0x79bd,	// (0x0004a0dd) main_cam5_pane_t9_ParamLimits

0x79bd,	// (0x0004a0dd) main_cam5_pane_t9

0x79cf,	// (0x0004a0ef) main_cam5_pane_t10_ParamLimits

0x79cf,	// (0x0004a0ef) main_cam5_pane_t10

0x79e1,	// (0x0004a101) main_cam5_pane_t11_ParamLimits

0x79e1,	// (0x0004a101) main_cam5_pane_t11

0x79f3,	// (0x0004a113) main_cam5_pane_t12_ParamLimits

0x79f3,	// (0x0004a113) main_cam5_pane_t12

0x7a08,	// (0x0004a128) main_cam5_pane_t13_ParamLimits

0x7a08,	// (0x0004a128) main_cam5_pane_t13

0x000c,

0xf8d5,	// (0x00051ff5) main_cam5_pane_t_ParamLimits

0xf8d5,	// (0x00051ff5) main_cam5_pane_t

0x17fb,	// (0x00043f1b) popup_scut_keymap_window_ParamLimits

0x17fb,	// (0x00043f1b) popup_scut_keymap_window

0x7a25,	// (0x0004a145) aid_size_cell_brow_shortcut

0xce23,	// (0x0004f543) bg_popup_window_pane_cp010

0x7a31,	// (0x0004a151) grid_scut_pane

0x7a3d,	// (0x0004a15d) cell_scut_pane_ParamLimits

0x7a3d,	// (0x0004a15d) cell_scut_pane

0x7a54,	// (0x0004a174) cell_scut_pane_g1

0x7a5d,	// (0x0004a17d) cell_scut_pane_t1

0x7a6c,	// (0x0004a18c) cell_scut_pane_t2

0x7a7b,	// (0x0004a19b) cell_scut_pane_t3

0x0002,

0xf8f0,	// (0x00052010) cell_scut_pane_t

0x545d,	// (0x00047b7d) main_mup3_pane_g8_ParamLimits

0x545d,	// (0x00047b7d) main_mup3_pane_g8

0x6970,	// (0x00049090) area_vitu2_query_pane_ParamLimits

0x6970,	// (0x00049090) area_vitu2_query_pane

0x0e7c,	// (0x0004359c) input_focus_pane_cp08

0x7a89,	// (0x0004a1a9) area_vitu2_query_pane_g1

0x0f81,	// (0x000436a1) area_vitu2_query_pane_g2

0x0001,

0xf8f7,	// (0x00052017) area_vitu2_query_pane_g

0x7a95,	// (0x0004a1b5) area_vitu2_query_pane_t1_ParamLimits

0x7a95,	// (0x0004a1b5) area_vitu2_query_pane_t1

0x7aa9,	// (0x0004a1c9) area_vitu2_query_pane_t2_ParamLimits

0x7aa9,	// (0x0004a1c9) area_vitu2_query_pane_t2

0x0f92,	// (0x000436b2) area_vitu2_query_pane_t3_ParamLimits

0x0f92,	// (0x000436b2) area_vitu2_query_pane_t3

0xae81,	// (0x0004d5a1) area_vitu2_query_pane_t4_ParamLimits

0xae81,	// (0x0004d5a1) area_vitu2_query_pane_t4

0xaea9,	// (0x0004d5c9) area_vitu2_query_pane_t5_ParamLimits

0xaea9,	// (0x0004d5c9) area_vitu2_query_pane_t5

0xaed1,	// (0x0004d5f1) area_vitu2_query_pane_t6_ParamLimits

0xaed1,	// (0x0004d5f1) area_vitu2_query_pane_t6

0x0006,

0xf8fc,	// (0x0005201c) area_vitu2_query_pane_t_ParamLimits

0xf8fc,	// (0x0005201c) area_vitu2_query_pane_t

0x7abd,	// (0x0004a1dd) bg_button_pane_cp018

0x7acb,	// (0x0004a1eb) bg_button_pane_cp021

0x0fba,	// (0x000436da) bg_button_pane_cp022

0x0fcb,	// (0x000436eb) input_focus_pane_cp09

0x34c9,	// (0x00045be9) aid_size_touch_mv_arrow_left

0x34f2,	// (0x00045c12) aid_size_touch_mv_arrow_right

0x7110,	// (0x00049830) main_cset_slider_pane_g16_ParamLimits

0x7110,	// (0x00049830) main_cset_slider_pane_g16

0x711c,	// (0x0004983c) main_cset_slider_pane_g17_ParamLimits

0x711c,	// (0x0004983c) main_cset_slider_pane_g17

0x78fc,	// (0x0004a01c) cell_cam4_burst_pane_g1_ParamLimits

0xa59d,	// (0x0004ccbd) compa_mode_pane

0x73f2,	// (0x00049b12) popup_vtel_slider_window_g3_ParamLimits

0x73f2,	// (0x00049b12) popup_vtel_slider_window_g3

0x7409,	// (0x00049b29) popup_vtel_slider_window_g4_ParamLimits

0x7409,	// (0x00049b29) popup_vtel_slider_window_g4

0x7420,	// (0x00049b40) popup_vtel_slider_window_t1_ParamLimits

0x7420,	// (0x00049b40) popup_vtel_slider_window_t1

0xa59d,	// (0x0004ccbd) main_cl_pane

0xe273,	// (0x00050993) popup_imed_adjust2_window_ParamLimits

0xe24b,	// (0x0005096b) bg_tb_trans_pane_cp05_ParamLimits

0xeba2,	// (0x000512c2) popup_imed_adjust2_window_g1_ParamLimits

0xebb1,	// (0x000512d1) popup_imed_adjust2_window_g2_ParamLimits

0xebb1,	// (0x000512d1) popup_imed_adjust2_window_g2

0xebbd,	// (0x000512dd) popup_imed_adjust2_window_g3_ParamLimits

0xebbd,	// (0x000512dd) popup_imed_adjust2_window_g3

0x0002,

0x042f,	// (0x00042b4f) popup_imed_adjust2_window_g_ParamLimits

0x042f,	// (0x00042b4f) popup_imed_adjust2_window_g

0xebc9,	// (0x000512e9) popup_imed_adjust2_window_t1_ParamLimits

0xebe1,	// (0x00051301) slider_imed_adjust_pane_ParamLimits

0xebf5,	// (0x00051315) slider_imed_adjust_pane_g1_ParamLimits

0xec05,	// (0x00051325) slider_imed_adjust_pane_g2_ParamLimits

0xec15,	// (0x00051335) slider_imed_adjust_pane_g3_ParamLimits

0xec26,	// (0x00051346) slider_imed_adjust_pane_g4_ParamLimits

0x0436,	// (0x00042b56) slider_imed_adjust_pane_g_ParamLimits

0x668b,	// (0x00048dab) aid_touch_area_cam4_ParamLimits

0x668b,	// (0x00048dab) aid_touch_area_cam4

0xad25,	// (0x0004d445) battery_pane_cp01

0x675b,	// (0x00048e7b) main_camera4_pane_g6_ParamLimits

0x675b,	// (0x00048e7b) main_camera4_pane_g6

0x6785,	// (0x00048ea5) main_camera4_pane_t2_ParamLimits

0x6785,	// (0x00048ea5) main_camera4_pane_t2

0x0001,

0xf778,	// (0x00051e98) main_camera4_pane_t_ParamLimits

0xf778,	// (0x00051e98) main_camera4_pane_t

0x67ba,	// (0x00048eda) aid_touch_area_vid4_ParamLimits

0x67ba,	// (0x00048eda) aid_touch_area_vid4

0x6821,	// (0x00048f41) main_video4_pane_g5_ParamLimits

0x6821,	// (0x00048f41) main_video4_pane_g5

0x684c,	// (0x00048f6c) vid4_progress_pane_ParamLimits

0x684c,	// (0x00048f6c) vid4_progress_pane

0x7128,	// (0x00049848) main_cset_slider_pane_g18_ParamLimits

0x7128,	// (0x00049848) main_cset_slider_pane_g18

0x7911,	// (0x0004a031) cell_cam4_burst_pane_g2_ParamLimits

0x7911,	// (0x0004a031) cell_cam4_burst_pane_g2

0x0001,

0xf8d0,	// (0x00051ff0) cell_cam4_burst_pane_g_ParamLimits

0xf8d0,	// (0x00051ff0) cell_cam4_burst_pane_g

0xc399,	// (0x0004eab9) bg_cl_pane_ParamLimits

0xc399,	// (0x0004eab9) bg_cl_pane

0x7ad7,	// (0x0004a1f7) cl_header_pane_ParamLimits

0x7ad7,	// (0x0004a1f7) cl_header_pane

0x7aeb,	// (0x0004a20b) cl_listscroll_pane_ParamLimits

0x7aeb,	// (0x0004a20b) cl_listscroll_pane

0x7afb,	// (0x0004a21b) bg_cl_pane_g1

0x7b03,	// (0x0004a223) bg_cl_pane_g2

0x7b0b,	// (0x0004a22b) bg_cl_pane_g3

0x7b13,	// (0x0004a233) bg_cl_pane_g4

0x7b1b,	// (0x0004a23b) bg_cl_pane_g5

0x7b23,	// (0x0004a243) bg_cl_pane_g6

0x7b2b,	// (0x0004a24b) bg_cl_pane_g7

0x7b33,	// (0x0004a253) bg_cl_pane_g8

0x7b3b,	// (0x0004a25b) bg_cl_pane_g9

0x0008,

0xf90b,	// (0x0005202b) bg_cl_pane_g

0x7b43,	// (0x0004a263) aid_height_cl_leading_ParamLimits

0x7b43,	// (0x0004a263) aid_height_cl_leading

0x7b4f,	// (0x0004a26f) aid_height_cl_text_ParamLimits

0x7b4f,	// (0x0004a26f) aid_height_cl_text

0xa615,	// (0x0004cd35) bg_cl_header_pane_ParamLimits

0xa615,	// (0x0004cd35) bg_cl_header_pane

0x7b6e,	// (0x0004a28e) cl_header_pane_g1_ParamLimits

0x7b6e,	// (0x0004a28e) cl_header_pane_g1

0x7b84,	// (0x0004a2a4) cl_header_pane_t1_ParamLimits

0x7b84,	// (0x0004a2a4) cl_header_pane_t1

0x7b9d,	// (0x0004a2bd) cl_list_pane

0x6fe4,	// (0x00049704) hc_scroll_pane_cp01

0xc78b,	// (0x0004eeab) bg_cl_header_pane_g1

0x6bb9,	// (0x000492d9) bg_cl_header_pane_g2

0xc7ab,	// (0x0004eecb) bg_cl_header_pane_g3

0x6bc9,	// (0x000492e9) bg_cl_header_pane_g4

0x6bc1,	// (0x000492e1) bg_cl_header_pane_g5

0x7556,	// (0x00049c76) bg_cl_header_pane_g6

0x6be1,	// (0x00049301) bg_cl_header_pane_g7

0x6be9,	// (0x00049309) bg_cl_header_pane_g8

0x6bd9,	// (0x000492f9) bg_cl_header_pane_g9

0x0008,

0xf91e,	// (0x0005203e) bg_cl_header_pane_g

0x7ba6,	// (0x0004a2c6) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7ba6,	// (0x0004a2c6) hc_cl_list_double_graphic_heading_pane

0x7bba,	// (0x0004a2da) hc_cl_list_single_graphic_pane_ParamLimits

0x7bba,	// (0x0004a2da) hc_cl_list_single_graphic_pane

0x7bd4,	// (0x0004a2f4) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7bd4,	// (0x0004a2f4) hc_cl_list_single_graphic_pane_g1

0x7be0,	// (0x0004a300) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7be0,	// (0x0004a300) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf931,	// (0x00052051) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf931,	// (0x00052051) hc_cl_list_single_graphic_pane_g

0x7bf4,	// (0x0004a314) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7bf4,	// (0x0004a314) hc_cl_list_single_graphic_pane_t1

0x7bd4,	// (0x0004a2f4) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7bd4,	// (0x0004a2f4) hc_cl_list_double_graphic_heading_pane_g1

0x7c09,	// (0x0004a329) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7c09,	// (0x0004a329) hc_cl_list_double_graphic_heading_pane_g2

0x7c1d,	// (0x0004a33d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7c1d,	// (0x0004a33d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf936,	// (0x00052056) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf936,	// (0x00052056) hc_cl_list_double_graphic_heading_pane_g

0x7c31,	// (0x0004a351) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7c31,	// (0x0004a351) hc_cl_list_double_graphic_heading_pane_t1

0x7c46,	// (0x0004a366) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7c46,	// (0x0004a366) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf93d,	// (0x0005205d) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf93d,	// (0x0005205d) hc_cl_list_double_graphic_heading_pane_t

0xaf25,	// (0x0004d645) vid4_progress_pane_g1

0xaf35,	// (0x0004d655) vid4_progress_pane_g2

0xaf45,	// (0x0004d665) vid4_progress_pane_g3

0xad5a,	// (0x0004d47a) vid4_progress_pane_g4

0x0004,

0xf942,	// (0x00052062) vid4_progress_pane_g

0xaf51,	// (0x0004d671) vid4_progress_pane_t1

0xaf66,	// (0x0004d686) vid4_progress_pane_t2

0x0002,

0xf94d,	// (0x0005206d) vid4_progress_pane_t

0xaf91,	// (0x0004d6b1) wait_bar_pane_cp07

0xe485,	// (0x00050ba5) blid_firmament_pane_ParamLimits

0xe4c8,	// (0x00050be8) popup_blid_sat_info2_window_g1

0xe4ec,	// (0x00050c0c) popup_blid_sat_info2_window_t3

0xe4fa,	// (0x00050c1a) popup_blid_sat_info2_window_t4

0xe508,	// (0x00050c28) popup_blid_sat_info2_window_t5

0xe516,	// (0x00050c36) popup_blid_sat_info2_window_t6

0xe526,	// (0x00050c46) popup_blid_sat_info2_window_t7

0xe534,	// (0x00050c54) popup_blid_sat_info2_window_t8

0xe542,	// (0x00050c62) popup_blid_sat_info2_window_t9

0xe550,	// (0x00050c70) popup_blid_sat_info2_window_t10

0xe614,	// (0x00050d34) aid_firma_cardinal_ParamLimits

0xe628,	// (0x00050d48) blid_firmament_pane_t1_ParamLimits

0xe63f,	// (0x00050d5f) blid_firmament_pane_t2_ParamLimits

0xe656,	// (0x00050d76) blid_firmament_pane_t3_ParamLimits

0xe66d,	// (0x00050d8d) blid_firmament_pane_t4_ParamLimits

0xf60b,	// (0x00051d2b) blid_firmament_pane_t_ParamLimits

0xe684,	// (0x00050da4) blid_sat_info_pane_ParamLimits

0xa615,	// (0x0004cd35) main_cam_set_pane_ParamLimits

0x5d1b,	// (0x0004843b) aid_size_cell_colour_35_ParamLimits

0x5d3b,	// (0x0004845b) aid_size_cell_colour_112_ParamLimits

0x5d5b,	// (0x0004847b) aid_size_cell_effect_ParamLimits

0xe24b,	// (0x0005096b) bg_tb_trans_pane_cp02_ParamLimits

0xc953,	// (0x0004f073) heading_imed_pane_ParamLimits

0x5d7b,	// (0x0004849b) listscroll_imed_pane_ParamLimits

0xd860,	// (0x0004ff80) popup_call2_audio_first_window_g5_ParamLimits

0xd860,	// (0x0004ff80) popup_call2_audio_first_window_g5

0x6332,	// (0x00048a52) aid_size_touch_image3_arrow_left_ParamLimits

0x6332,	// (0x00048a52) aid_size_touch_image3_arrow_left

0x635e,	// (0x00048a7e) aid_size_touch_image3_arrow_right_ParamLimits

0x635e,	// (0x00048a7e) aid_size_touch_image3_arrow_right

0xaf7c,	// (0x0004d69c) vid4_progress_pane_t3

0x609e,	// (0x000487be) main_hwr_training_symbol_option_pane_ParamLimits

0x609e,	// (0x000487be) main_hwr_training_symbol_option_pane

0xee8f,	// (0x000515af) popup_hwr_training_preview_window_ParamLimits

0xee8f,	// (0x000515af) popup_hwr_training_preview_window

0x60be,	// (0x000487de) hwr_training_navi_pane_g5_ParamLimits

0x60be,	// (0x000487de) hwr_training_navi_pane_g5

0x6b01,	// (0x00049221) popup_char_count_window

0xa615,	// (0x0004cd35) bg_popup_sub_pane_cp20_ParamLimits

0x7538,	// (0x00049c58) list_vitu2_match_list_pane_ParamLimits

0x7547,	// (0x00049c67) vitu2_page_scroll_pane_ParamLimits

0x7547,	// (0x00049c67) vitu2_page_scroll_pane

0x7c64,	// (0x0004a384) list_single_hwr_training_symbol_option_pane_ParamLimits

0x7c64,	// (0x0004a384) list_single_hwr_training_symbol_option_pane

0x7c77,	// (0x0004a397) list_single_hwr_training_symbol_option_pane_g1

0x7c7f,	// (0x0004a39f) list_single_hwr_training_symbol_option_pane_t1

0x7c8d,	// (0x0004a3ad) bg_button_pane_cp023

0x7c96,	// (0x0004a3b6) bg_button_pane_cp024

0x7cc9,	// (0x0004a3e9) vitu2_page_scroll_pane_g1

0x7cd1,	// (0x0004a3f1) vitu2_page_scroll_pane_g2

0x0001,

0xf954,	// (0x00052074) vitu2_page_scroll_pane_g

0x7cd9,	// (0x0004a3f9) vitu2_page_scroll_pane_t1

0xe3e5,	// (0x00050b05) popup_char_count_window_g1

0x7ce8,	// (0x0004a408) popup_char_count_window_g2

0x7cf1,	// (0x0004a411) popup_char_count_window_g3

0x0002,

0xf959,	// (0x00052079) popup_char_count_window_g

0x7cfa,	// (0x0004a41a) popup_char_count_window_t1

0xa59d,	// (0x0004ccbd) main_vded2_pane

0xeb8e,	// (0x000512ae) aid_size_cell_imed_line

0xeb98,	// (0x000512b8) grid_imed_line_width_pane

0x68bc,	// (0x00048fdc) vid4_indicators_pane_g4

0x7d08,	// (0x0004a428) cell_imed_line_width_pane_ParamLimits

0x7d08,	// (0x0004a428) cell_imed_line_width_pane

0x7d1c,	// (0x0004a43c) cell_imed_line_width_pane_g1

0xe69e,	// (0x00050dbe) cell_imed_line_width_pane_g2

0x0001,

0xf960,	// (0x00052080) cell_imed_line_width_pane_g

0x7d25,	// (0x0004a445) main_vded2_pane_g1_ParamLimits

0x7d25,	// (0x0004a445) main_vded2_pane_g1

0x7d3d,	// (0x0004a45d) main_vded2_pane_g2_ParamLimits

0x7d3d,	// (0x0004a45d) main_vded2_pane_g2

0x0001,

0xf965,	// (0x00052085) main_vded2_pane_g_ParamLimits

0xf965,	// (0x00052085) main_vded2_pane_g

0x7d4f,	// (0x0004a46f) vded2_slider_pane_ParamLimits

0x7d4f,	// (0x0004a46f) vded2_slider_pane

0x7d5f,	// (0x0004a47f) aid_size_touch_vded2_end

0x7d69,	// (0x0004a489) aid_size_touch_vded2_playhead

0x7d73,	// (0x0004a493) aid_size_touch_vded2_start

0x7d7b,	// (0x0004a49b) vded2_slider_bg_pane

0x7d84,	// (0x0004a4a4) vded2_slider_pane_g1

0x7d8d,	// (0x0004a4ad) vded2_slider_pane_g2

0x7d95,	// (0x0004a4b5) vded2_slider_pane_g3

0x0002,

0xf96a,	// (0x0005208a) vded2_slider_pane_g

0x7da0,	// (0x0004a4c0) vded2_slider_bg_pane_g1

0x7da9,	// (0x0004a4c9) vded2_slider_bg_pane_g2

0x7db2,	// (0x0004a4d2) vded2_slider_bg_pane_g3

0x0002,

0xf971,	// (0x00052091) vded2_slider_bg_pane_g

0x3ac7,	// (0x000461e7) aid_postcard_touch_down_pane_ParamLimits

0x3ac7,	// (0x000461e7) aid_postcard_touch_down_pane

0x3add,	// (0x000461fd) aid_postcard_touch_up_pane_ParamLimits

0x3add,	// (0x000461fd) aid_postcard_touch_up_pane

0xa59d,	// (0x0004ccbd) main_blid2_pane

0xe259,	// (0x00050979) popup_blid2_search_window

0xa59d,	// (0x0004ccbd) blid2_gps_pane

0xa59d,	// (0x0004ccbd) blid2_navig_pane

0xa59d,	// (0x0004ccbd) blid2_search_pane

0xa59d,	// (0x0004ccbd) blid2_tripm_pane

0x7dbb,	// (0x0004a4db) blid2_search_pane_g1_ParamLimits

0x7dbb,	// (0x0004a4db) blid2_search_pane_g1

0x7dd3,	// (0x0004a4f3) blid2_search_pane_t1_ParamLimits

0x7dd3,	// (0x0004a4f3) blid2_search_pane_t1

0x7de5,	// (0x0004a505) aid_size_cell_blid2_gps_ParamLimits

0x7de5,	// (0x0004a505) aid_size_cell_blid2_gps

0x7dfd,	// (0x0004a51d) blid2_gps_pane_g1_ParamLimits

0x7dfd,	// (0x0004a51d) blid2_gps_pane_g1

0x7e11,	// (0x0004a531) grid_blid2_satellite_pane_ParamLimits

0x7e11,	// (0x0004a531) grid_blid2_satellite_pane

0x7e2b,	// (0x0004a54b) blid2_navig_pane_g1_ParamLimits

0x7e2b,	// (0x0004a54b) blid2_navig_pane_g1

0x7e37,	// (0x0004a557) blid2_navig_pane_t1_ParamLimits

0x7e37,	// (0x0004a557) blid2_navig_pane_t1

0x7e52,	// (0x0004a572) blid2_navig_pane_t2_ParamLimits

0x7e52,	// (0x0004a572) blid2_navig_pane_t2

0x0001,

0xf978,	// (0x00052098) blid2_navig_pane_t_ParamLimits

0xf978,	// (0x00052098) blid2_navig_pane_t

0x7e6d,	// (0x0004a58d) blid2_navig_ring_pane_ParamLimits

0x7e6d,	// (0x0004a58d) blid2_navig_ring_pane

0x7e86,	// (0x0004a5a6) blid2_speed_pane_ParamLimits

0x7e86,	// (0x0004a5a6) blid2_speed_pane

0x7e92,	// (0x0004a5b2) blid2_tripm_pane_g1_ParamLimits

0x7e92,	// (0x0004a5b2) blid2_tripm_pane_g1

0x7ead,	// (0x0004a5cd) blid2_tripm_pane_g2_ParamLimits

0x7ead,	// (0x0004a5cd) blid2_tripm_pane_g2

0x7ec1,	// (0x0004a5e1) blid2_tripm_pane_g3_ParamLimits

0x7ec1,	// (0x0004a5e1) blid2_tripm_pane_g3

0x7ed5,	// (0x0004a5f5) blid2_tripm_pane_g4_ParamLimits

0x7ed5,	// (0x0004a5f5) blid2_tripm_pane_g4

0x7ee9,	// (0x0004a609) blid2_tripm_pane_g5_ParamLimits

0x7ee9,	// (0x0004a609) blid2_tripm_pane_g5

0x0005,

0xf97d,	// (0x0005209d) blid2_tripm_pane_g_ParamLimits

0xf97d,	// (0x0005209d) blid2_tripm_pane_g

0x7f0f,	// (0x0004a62f) blid2_tripm_pane_t1_ParamLimits

0x7f0f,	// (0x0004a62f) blid2_tripm_pane_t1

0x7f2a,	// (0x0004a64a) blid2_tripm_pane_t2_ParamLimits

0x7f2a,	// (0x0004a64a) blid2_tripm_pane_t2

0x7f45,	// (0x0004a665) blid2_tripm_pane_t3_ParamLimits

0x7f45,	// (0x0004a665) blid2_tripm_pane_t3

0x0003,

0xf98a,	// (0x000520aa) blid2_tripm_pane_t_ParamLimits

0xf98a,	// (0x000520aa) blid2_tripm_pane_t

0x7f8c,	// (0x0004a6ac) cell_blid2_satellite_pane_ParamLimits

0x7f8c,	// (0x0004a6ac) cell_blid2_satellite_pane

0x7faa,	// (0x0004a6ca) cell_blid2_satellite_pane_g1

0x7fb3,	// (0x0004a6d3) cell_blid2_satellite_pane_t1

0xe694,	// (0x00050db4) blid2_speed_pane_g1

0x7fc1,	// (0x0004a6e1) blid2_speed_pane_t1

0x7fcf,	// (0x0004a6ef) blid2_speed_pane_t2

0x0001,

0xf993,	// (0x000520b3) blid2_speed_pane_t

0xe694,	// (0x00050db4) blid2_navig_ring_pane_g1

0x7fdd,	// (0x0004a6fd) blid2_navig_ring_pane_g2

0x7fe5,	// (0x0004a705) blid2_navig_ring_pane_g3

0x7fed,	// (0x0004a70d) blid2_navig_ring_pane_g4

0x7ff5,	// (0x0004a715) blid2_navig_ring_pane_g5

0x0004,

0xf998,	// (0x000520b8) blid2_navig_ring_pane_g

0xa59d,	// (0x0004ccbd) bg_popup_window_pane_cp011

0x7ffd,	// (0x0004a71d) popup_blid2_search_window_g1

0x8005,	// (0x0004a725) popup_blid2_search_window_t1

0x8013,	// (0x0004a733) popup_blid2_search_window_t2

0x0001,

0xf9a3,	// (0x000520c3) popup_blid2_search_window_t

0xc69a,	// (0x0004edba) main_browser_pane_g1

0xc399,	// (0x0004eab9) main_browser_pane_ParamLimits

0xa615,	// (0x0004cd35) bg_button_pane_cp011_ParamLimits

0x6b9b,	// (0x000492bb) cell_vitu2_function_pane_g1_ParamLimits

0xe24b,	// (0x0005096b) bg_popup_sub_pane_cp22_ParamLimits

0x0e7c,	// (0x0004359c) input_focus_pane_cp08_ParamLimits

0x76d5,	// (0x00049df5) popup_vitu2_query_button_pane_ParamLimits

0x76d5,	// (0x00049df5) popup_vitu2_query_button_pane

0x0e93,	// (0x000435b3) popup_vitu2_query_input_button_pane

0x76e6,	// (0x00049e06) popup_vitu2_query_window_g1_ParamLimits

0x0e9d,	// (0x000435bd) popup_vitu2_query_window_g2_ParamLimits

0xf8a4,	// (0x00051fc4) popup_vitu2_query_window_g_ParamLimits

0xa59d,	// (0x0004ccbd) bg_button_pane_cp026

0x8021,	// (0x0004a741) popup_vitu2_query_input_button_pane_g1

0xa59d,	// (0x0004ccbd) bg_button_pane_cp025

0x8029,	// (0x0004a749) popup_vitu2_query_button_pane_t1

0x5163,	// (0x00047883) main_mp3_pane_t6

0x5171,	// (0x00047891) popup_slider_window_cp01

0xad41,	// (0x0004d461) cam4_battery_pane

0xada8,	// (0x0004d4c8) cam4_battery_pane_cp02

0xaf1d,	// (0x0004d63d) cam4_battery_pane_cp01

0xaf1d,	// (0x0004d63d) cam4_battery_pane_cp03

0xe694,	// (0x00050db4) cam4_battery_pane_g1

0xf0dd,	// (0x000517fd) cam4_battery_pane_g2

0x0001,

0xf9a8,	// (0x000520c8) cam4_battery_pane_g

0xe55e,	// (0x00050c7e) popup_blid_sat_info2_window_t11

0x34c9,	// (0x00045be9) aid_size_touch_mv_arrow_left_ParamLimits

0x34f2,	// (0x00045c12) aid_size_touch_mv_arrow_right_ParamLimits

0xcd75,	// (0x0004f495) navi_pane_g1_ParamLimits

0x3531,	// (0x00045c51) navi_pane_g2_ParamLimits

0x355f,	// (0x00045c7f) navi_pane_g3_ParamLimits

0xf404,	// (0x00051b24) navi_pane_g_ParamLimits

0x35b7,	// (0x00045cd7) navi_pane_mv_t1_ParamLimits

0x5d87,	// (0x000484a7) grid_imed_effect_pane_ParamLimits

0x241d,	// (0x00044b3d) aid_placing_vt_slider_lsc

0xc5e9,	// (0x0004ed09) aid_placing_vt_slider_prt

0xa615,	// (0x0004cd35) bg_tb_trans_pane_cp01_ParamLimits

0xe823,	// (0x00050f43) popup_image_details_window_g1_ParamLimits

0xe836,	// (0x00050f56) popup_image_details_window_g2_ParamLimits

0xe84b,	// (0x00050f6b) popup_image_details_window_g3_ParamLimits

0xe84b,	// (0x00050f6b) popup_image_details_window_g3

0x036d,	// (0x00042a8d) popup_image_details_window_g_ParamLimits

0xe85f,	// (0x00050f7f) popup_image_details_window_t1_ParamLimits

0xe871,	// (0x00050f91) popup_image_details_window_t2_ParamLimits

0xe88a,	// (0x00050faa) popup_image_details_window_t3_ParamLimits

0xe89e,	// (0x00050fbe) popup_image_details_window_t4_ParamLimits

0xe8b9,	// (0x00050fd9) popup_image_details_window_t5_ParamLimits

0x0374,	// (0x00042a94) popup_image_details_window_t_ParamLimits

0x7b5b,	// (0x0004a27b) cl_header_name_pane_ParamLimits

0x7b5b,	// (0x0004a27b) cl_header_name_pane

0x8037,	// (0x0004a757) cl_header_name_pane_t1_ParamLimits

0x8037,	// (0x0004a757) cl_header_name_pane_t1

0x8058,	// (0x0004a778) cl_header_name_pane_t2_ParamLimits

0x8058,	// (0x0004a778) cl_header_name_pane_t2

0x809a,	// (0x0004a7ba) cl_header_name_pane_t3_ParamLimits

0x809a,	// (0x0004a7ba) cl_header_name_pane_t3

0x0002,

0xf9ad,	// (0x000520cd) cl_header_name_pane_t_ParamLimits

0xf9ad,	// (0x000520cd) cl_header_name_pane_t

0x3588,	// (0x00045ca8) navi_pane_mv_g2_ParamLimits

0xf0b7,	// (0x000517d7) field_vitu2_entry_pane_g1_ParamLimits

0xf0c3,	// (0x000517e3) field_vitu2_entry_pane_g2_ParamLimits

0xf0cf,	// (0x000517ef) field_vitu2_entry_pane_g3_ParamLimits

0xf0cf,	// (0x000517ef) field_vitu2_entry_pane_g3

0xf7aa,	// (0x00051eca) field_vitu2_entry_pane_g_ParamLimits

0x6b17,	// (0x00049237) cell_vitu2_itu_pane_g1_ParamLimits

0x6b27,	// (0x00049247) cell_vitu2_itu_pane_g2_ParamLimits

0x6b27,	// (0x00049247) cell_vitu2_itu_pane_g2

0x0001,

0xf7b6,	// (0x00051ed6) cell_vitu2_itu_pane_g_ParamLimits

0xf7b6,	// (0x00051ed6) cell_vitu2_itu_pane_g

0xa615,	// (0x0004cd35) bg_vkb2_func_pane_cp05_ParamLimits

0xa615,	// (0x0004cd35) bg_vkb2_func_pane_cp05

0xa615,	// (0x0004cd35) bg_vkb2_func_pane_cp03

0xa615,	// (0x0004cd35) bg_vkb2_func_pane_cp04

0xa615,	// (0x0004cd35) bg_vkb2_func_pane_cp10_ParamLimits

0xa615,	// (0x0004cd35) bg_vkb2_func_pane_cp10

0x0fba,	// (0x000436da) bg_vkb2_func_pane_cp08

0x7abd,	// (0x0004a1dd) bg_vkb2_func_pane_cp06

0x7acb,	// (0x0004a1eb) bg_vkb2_func_pane_cp07

0x7c9f,	// (0x0004a3bf) bg_vkb2_func_pane_cp11_ParamLimits

0x7c9f,	// (0x0004a3bf) bg_vkb2_func_pane_cp11

0x7cb4,	// (0x0004a3d4) bg_vkb2_func_pane_cp12_ParamLimits

0x7cb4,	// (0x0004a3d4) bg_vkb2_func_pane_cp12

0xa59d,	// (0x0004ccbd) bg_vkb2_func_pane_cp09

0x6bb9,	// (0x000492d9) bg_vkb2_func_pane_g1

0xc7ab,	// (0x0004eecb) bg_vkb2_func_pane_g2

0x6bc1,	// (0x000492e1) bg_vkb2_func_pane_g3

0x6bc9,	// (0x000492e9) bg_vkb2_func_pane_g4

0x7556,	// (0x00049c76) bg_vkb2_func_pane_g5

0x6be1,	// (0x00049301) bg_vkb2_func_pane_g6

0x6be9,	// (0x00049309) bg_vkb2_func_pane_g7

0x6bd9,	// (0x000492f9) bg_vkb2_func_pane_g8

0xc78b,	// (0x0004eeab) bg_vkb2_func_pane_g9

0x0008,

0xf9b4,	// (0x000520d4) bg_vkb2_func_pane_g

0x7efd,	// (0x0004a61d) blid2_tripm_pane_g6_ParamLimits

0x7efd,	// (0x0004a61d) blid2_tripm_pane_g6

0xef47,	// (0x00051667) mp4_progress_pane_g1

0x7f78,	// (0x0004a698) blid2_tripm_values_pane_ParamLimits

0x7f78,	// (0x0004a698) blid2_tripm_values_pane

0x80cb,	// (0x0004a7eb) blid2_tripm_values_pane_t1

0x80d9,	// (0x0004a7f9) blid2_tripm_values_pane_t2

0x80e7,	// (0x0004a807) blid2_tripm_values_pane_t3

0x80f5,	// (0x0004a815) blid2_tripm_values_pane_t4

0x8103,	// (0x0004a823) blid2_tripm_values_pane_t5

0x8111,	// (0x0004a831) blid2_tripm_values_pane_t6

0x811f,	// (0x0004a83f) blid2_tripm_values_pane_t7

0x812d,	// (0x0004a84d) blid2_tripm_values_pane_t8

0x813b,	// (0x0004a85b) blid2_tripm_values_pane_t9

0x0008,

0xf9c7,	// (0x000520e7) blid2_tripm_values_pane_t

0x245f,	// (0x00044b7f) call_video_pane_t1_ParamLimits

0x247d,	// (0x00044b9d) call_video_pane_t2_ParamLimits

0xf28d,	// (0x000519ad) call_video_pane_t_ParamLimits

0x0ca8,	// (0x000433c8) msg_header_pane_g1_ParamLimits

0xcf9e,	// (0x0004f6be) msg_header_pane_g2_ParamLimits

0xcf9e,	// (0x0004f6be) msg_header_pane_g2

0x0001,

0xf48f,	// (0x00051baf) msg_header_pane_g_ParamLimits

0xf48f,	// (0x00051baf) msg_header_pane_g

0xc399,	// (0x0004eab9) main_clock2_pane_ParamLimits

0x5a90,	// (0x000481b0) grid_clock2_toolbar_pane_ParamLimits

0x5a90,	// (0x000481b0) grid_clock2_toolbar_pane

0x5a90,	// (0x000481b0) listscroll_clock2_pane_ParamLimits

0x5a90,	// (0x000481b0) listscroll_clock2_pane

0x5b78,	// (0x00048298) main_clock2_pane_t3_ParamLimits

0x5b78,	// (0x00048298) main_clock2_pane_t3

0x5b9b,	// (0x000482bb) main_clock2_pane_t4_ParamLimits

0x5b9b,	// (0x000482bb) main_clock2_pane_t4

0x8149,	// (0x0004a869) cell_clock2_toolbar_pane

0x8151,	// (0x0004a871) cell_clock2_toolbar_pane_cp01

0x8151,	// (0x0004a871) cell_clock2_toolbar_pane_cp02

0x8159,	// (0x0004a879) cell_clock2_toolbar_pane_cp03

0x8161,	// (0x0004a881) list_clock2_pane

0xccc8,	// (0x0004f3e8) scroll_pane_cp10

0x8169,	// (0x0004a889) list_single_clock2_pane_ParamLimits

0x8169,	// (0x0004a889) list_single_clock2_pane

0xce23,	// (0x0004f543) list_highlight_pane_cp08

0x8176,	// (0x0004a896) list_single_clock2_pane_t1

0x8184,	// (0x0004a8a4) list_single_clock2_pane_t2

0x0001,

0xf9da,	// (0x000520fa) list_single_clock2_pane_t

0xa59d,	// (0x0004ccbd) bg_button_pane_cp10

0x8192,	// (0x0004a8b2) cell_clock2_toolbar_pane_g1

0x3a53,	// (0x00046173) aid_main_viewer_pane_g1_ParamLimits

0x3a53,	// (0x00046173) aid_main_viewer_pane_g1

0x3a61,	// (0x00046181) aid_main_viewer_pane_g2_ParamLimits

0x3a61,	// (0x00046181) aid_main_viewer_pane_g2

0x3a6f,	// (0x0004618f) aid_main_viewer_pane_g3_ParamLimits

0x3a6f,	// (0x0004618f) aid_main_viewer_pane_g3

0x3a7e,	// (0x0004619e) aid_main_viewer_pane_g4_ParamLimits

0x3a7e,	// (0x0004619e) aid_main_viewer_pane_g4

0x0003,

0xf4a0,	// (0x00051bc0) aid_main_viewer_pane_g_ParamLimits

0xf4a0,	// (0x00051bc0) aid_main_viewer_pane_g

0x438a,	// (0x00046aaa) main_calc_pane_ParamLimits

0x439e,	// (0x00046abe) main_dialer2_pane_ParamLimits

0xa59d,	// (0x0004ccbd) main_cam6_pane

0xa59d,	// (0x0004ccbd) main_vid6_pane

0x5a9c,	// (0x000481bc) listscroll_gen_pane_cp06_ParamLimits

0x5a9c,	// (0x000481bc) listscroll_gen_pane_cp06

0x5bbe,	// (0x000482de) main_clock2_pane_t5_ParamLimits

0x5bbe,	// (0x000482de) main_clock2_pane_t5

0x5c1e,	// (0x0004833e) aid_call2_pane_cp10_ParamLimits

0x5c30,	// (0x00048350) aid_call_pane_cp10_ParamLimits

0xcd4a,	// (0x0004f46a) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcd4a,	// (0x0004f46a) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5c42,	// (0x00048362) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5c42,	// (0x00048362) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcd4a,	// (0x0004f46a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6bd,	// (0x00051ddd) popup_clock_analogue_window_cp10_g_ParamLimits

0x5c54,	// (0x00048374) popup_clock_analogue_window_cp10_t1_ParamLimits

0x62df,	// (0x000489ff) cell_dialer2_keypad_pane_g2_ParamLimits

0x62df,	// (0x000489ff) cell_dialer2_keypad_pane_g2

0x0001,

0xf749,	// (0x00051e69) cell_dialer2_keypad_pane_g_ParamLimits

0xf749,	// (0x00051e69) cell_dialer2_keypad_pane_g

0x62fb,	// (0x00048a1b) cell_dialer2_keypad_pane_t1

0x6fbe,	// (0x000496de) main_cset_text2_pane_ParamLimits

0x6fbe,	// (0x000496de) main_cset_text2_pane

0x7a89,	// (0x0004a1a9) area_vitu2_query_pane_g1_ParamLimits

0x0f81,	// (0x000436a1) area_vitu2_query_pane_g2_ParamLimits

0xf8f7,	// (0x00052017) area_vitu2_query_pane_g_ParamLimits

0xaef9,	// (0x0004d619) area_vitu2_query_pane_t7_ParamLimits

0xaef9,	// (0x0004d619) area_vitu2_query_pane_t7

0x7abd,	// (0x0004a1dd) bg_button_pane_cp018_ParamLimits

0x7acb,	// (0x0004a1eb) bg_button_pane_cp021_ParamLimits

0x0fba,	// (0x000436da) bg_button_pane_cp022_ParamLimits

0x0fba,	// (0x000436da) bg_vkb2_func_pane_cp08_ParamLimits

0x7abd,	// (0x0004a1dd) bg_vkb2_func_pane_cp06_ParamLimits

0x7acb,	// (0x0004a1eb) bg_vkb2_func_pane_cp07_ParamLimits

0x0fcb,	// (0x000436eb) input_focus_pane_cp09_ParamLimits

0xafe9,	// (0x0004d709) cam6_autofocus_pane_ParamLimits

0xafe9,	// (0x0004d709) cam6_autofocus_pane

0x819a,	// (0x0004a8ba) cam6_image_uncrop_pane_ParamLimits

0x819a,	// (0x0004a8ba) cam6_image_uncrop_pane

0x81a9,	// (0x0004a8c9) cam6_indi_pane_ParamLimits

0x81a9,	// (0x0004a8c9) cam6_indi_pane

0x81bf,	// (0x0004a8df) cam6_mode_pane_ParamLimits

0x81bf,	// (0x0004a8df) cam6_mode_pane

0x81d1,	// (0x0004a8f1) cam6_timer_pane_ParamLimits

0x81d1,	// (0x0004a8f1) cam6_timer_pane

0x81dd,	// (0x0004a8fd) cam6_zoom_pane_ParamLimits

0x81dd,	// (0x0004a8fd) cam6_zoom_pane

0x81e9,	// (0x0004a909) cam6_mode_pane_g1_ParamLimits

0x81e9,	// (0x0004a909) cam6_mode_pane_g1

0x81f9,	// (0x0004a919) cam6_mode_pane_g2_ParamLimits

0x81f9,	// (0x0004a919) cam6_mode_pane_g2

0x8209,	// (0x0004a929) cam6_mode_pane_g3_ParamLimits

0x8209,	// (0x0004a929) cam6_mode_pane_g3

0x8219,	// (0x0004a939) cam6_mode_pane_g4_ParamLimits

0x8219,	// (0x0004a939) cam6_mode_pane_g4

0x0003,

0xf9df,	// (0x000520ff) cam6_mode_pane_g_ParamLimits

0xf9df,	// (0x000520ff) cam6_mode_pane_g

0x8229,	// (0x0004a949) bg_tb_trans_pane_cp08_ParamLimits

0x8229,	// (0x0004a949) bg_tb_trans_pane_cp08

0x8237,	// (0x0004a957) cam6_battery_pane_ParamLimits

0x8237,	// (0x0004a957) cam6_battery_pane

0x824d,	// (0x0004a96d) cam6_indi_pane_g1_ParamLimits

0x824d,	// (0x0004a96d) cam6_indi_pane_g1

0x825f,	// (0x0004a97f) cam6_indi_pane_g2_ParamLimits

0x825f,	// (0x0004a97f) cam6_indi_pane_g2

0x8271,	// (0x0004a991) cam6_indi_pane_g3_ParamLimits

0x8271,	// (0x0004a991) cam6_indi_pane_g3

0x0002,

0xf9e8,	// (0x00052108) cam6_indi_pane_g_ParamLimits

0xf9e8,	// (0x00052108) cam6_indi_pane_g

0x8283,	// (0x0004a9a3) cam6_indi_pane_t1_ParamLimits

0x8283,	// (0x0004a9a3) cam6_indi_pane_t1

0x82a9,	// (0x0004a9c9) cam6_autofocus_pane_g1

0x82b1,	// (0x0004a9d1) cam6_autofocus_pane_g2

0x82b9,	// (0x0004a9d9) cam6_autofocus_pane_g3

0x82c1,	// (0x0004a9e1) cam6_autofocus_pane_g4

0x0003,

0xf9ef,	// (0x0005210f) cam6_autofocus_pane_g

0x82c9,	// (0x0004a9e9) cam6_timer_pane_g1

0x82d1,	// (0x0004a9f1) cam6_timer_pane_t1

0x82df,	// (0x0004a9ff) cam6_zoom_cont_pane

0x82e7,	// (0x0004aa07) cam6_zoom_pane_g1

0x82ef,	// (0x0004aa0f) cam6_zoom_pane_g2

0x82f7,	// (0x0004aa17) cam6_zoom_pane_g3

0x0002,

0xf9f8,	// (0x00052118) cam6_zoom_pane_g

0xe694,	// (0x00050db4) cam6_battery_pane_g1

0xe694,	// (0x00050db4) cam6_battery_pane_g2

0x0001,

0xf614,	// (0x00051d34) cam6_battery_pane_g

0x82ff,	// (0x0004aa1f) cam6_zoom_cont_pane_g1

0x8308,	// (0x0004aa28) cam6_zoom_cont_pane_g2

0x8311,	// (0x0004aa31) cam6_zoom_cont_pane_g3

0x0002,

0xf9ff,	// (0x0005211f) cam6_zoom_cont_pane_g

0x832e,	// (0x0004aa4e) cam6_mode_pane_cp_ParamLimits

0x832e,	// (0x0004aa4e) cam6_mode_pane_cp

0x81dd,	// (0x0004a8fd) cam6_zoom_pane_cp_ParamLimits

0x81dd,	// (0x0004a8fd) cam6_zoom_pane_cp

0x8340,	// (0x0004aa60) vid6_image_uncrop_cif_pane_ParamLimits

0x8340,	// (0x0004aa60) vid6_image_uncrop_cif_pane

0x8350,	// (0x0004aa70) vid6_image_uncrop_nhd_pane_ParamLimits

0x8350,	// (0x0004aa70) vid6_image_uncrop_nhd_pane

0x819a,	// (0x0004a8ba) vid6_image_uncrop_vga_pane_ParamLimits

0x819a,	// (0x0004a8ba) vid6_image_uncrop_vga_pane

0x836f,	// (0x0004aa8f) vid6_image_uncrop_wvga_pane_ParamLimits

0x836f,	// (0x0004aa8f) vid6_image_uncrop_wvga_pane

0x837e,	// (0x0004aa9e) vid6_indi_pane_ParamLimits

0x837e,	// (0x0004aa9e) vid6_indi_pane

0x8229,	// (0x0004a949) bg_tb_trans_pane_cp09_ParamLimits

0x8229,	// (0x0004a949) bg_tb_trans_pane_cp09

0x8396,	// (0x0004aab6) cam6_battery_pane_cp_ParamLimits

0x8396,	// (0x0004aab6) cam6_battery_pane_cp

0x83a2,	// (0x0004aac2) vid6_indi_pane_g1_ParamLimits

0x83a2,	// (0x0004aac2) vid6_indi_pane_g1

0x83b4,	// (0x0004aad4) vid6_indi_pane_g2_ParamLimits

0x83b4,	// (0x0004aad4) vid6_indi_pane_g2

0x83c6,	// (0x0004aae6) vid6_indi_pane_g3_ParamLimits

0x83c6,	// (0x0004aae6) vid6_indi_pane_g3

0x83db,	// (0x0004aafb) vid6_indi_pane_g4_ParamLimits

0x83db,	// (0x0004aafb) vid6_indi_pane_g4

0x83f0,	// (0x0004ab10) vid6_indi_pane_g5_ParamLimits

0x83f0,	// (0x0004ab10) vid6_indi_pane_g5

0x0004,

0xfa06,	// (0x00052126) vid6_indi_pane_g_ParamLimits

0xfa06,	// (0x00052126) vid6_indi_pane_g

0x840a,	// (0x0004ab2a) vid6_indi_pane_t1_ParamLimits

0x840a,	// (0x0004ab2a) vid6_indi_pane_t1

0x8420,	// (0x0004ab40) vid6_indi_pane_t2_ParamLimits

0x8420,	// (0x0004ab40) vid6_indi_pane_t2

0x8448,	// (0x0004ab68) vid6_indi_pane_t3_ParamLimits

0x8448,	// (0x0004ab68) vid6_indi_pane_t3

0x8470,	// (0x0004ab90) vid6_indi_pane_t4_ParamLimits

0x8470,	// (0x0004ab90) vid6_indi_pane_t4

0x0003,

0xfa11,	// (0x00052131) vid6_indi_pane_t_ParamLimits

0xfa11,	// (0x00052131) vid6_indi_pane_t

0x8494,	// (0x0004abb4) wait_bar_pane_cp08

0x84a3,	// (0x0004abc3) main_cset_text2_pane_t1_ParamLimits

0x84a3,	// (0x0004abc3) main_cset_text2_pane_t1

0x8319,	// (0x0004aa39) listscroll_gen_pane_cp06_t1_ParamLimits

0x8319,	// (0x0004aa39) listscroll_gen_pane_cp06_t1

0xa59d,	// (0x0004ccbd) main_cam6_set_pane

0xe903,	// (0x00051023) bg_tb_trans_pane_cp06_ParamLimits

0xad49,	// (0x0004d469) cam4_indicators_pane_g1_ParamLimits

0xad5a,	// (0x0004d47a) cam4_indicators_pane_g2_ParamLimits

0xf786,	// (0x00051ea6) cam4_indicators_pane_g_ParamLimits

0xad78,	// (0x0004d498) cam4_indicators_pane_t1_ParamLimits

0xad9a,	// (0x0004d4ba) bg_tb_trans_pane_cp07_ParamLimits

0x6895,	// (0x00048fb5) vid4_indicators_pane_g1_ParamLimits

0x68a2,	// (0x00048fc2) vid4_indicators_pane_g2_ParamLimits

0x68af,	// (0x00048fcf) vid4_indicators_pane_g3_ParamLimits

0x68bc,	// (0x00048fdc) vid4_indicators_pane_g4_ParamLimits

0xf798,	// (0x00051eb8) vid4_indicators_pane_g_ParamLimits

0x68d4,	// (0x00048ff4) vid4_indicators_pane_t1_ParamLimits

0xaf25,	// (0x0004d645) vid4_progress_pane_g1_ParamLimits

0xaf35,	// (0x0004d655) vid4_progress_pane_g2_ParamLimits

0xaf45,	// (0x0004d665) vid4_progress_pane_g3_ParamLimits

0xad5a,	// (0x0004d47a) vid4_progress_pane_g4_ParamLimits

0xf942,	// (0x00052062) vid4_progress_pane_g_ParamLimits

0xaf51,	// (0x0004d671) vid4_progress_pane_t1_ParamLimits

0xaf66,	// (0x0004d686) vid4_progress_pane_t2_ParamLimits

0xaf7c,	// (0x0004d69c) vid4_progress_pane_t3_ParamLimits

0xf94d,	// (0x0005206d) vid4_progress_pane_t_ParamLimits

0xaf91,	// (0x0004d6b1) wait_bar_pane_cp07_ParamLimits

0x84c3,	// (0x0004abe3) main_cam6_set_pane_g2_ParamLimits

0x84c3,	// (0x0004abe3) main_cam6_set_pane_g2

0x84e7,	// (0x0004ac07) main_cset6_listscroll_pane_ParamLimits

0x84e7,	// (0x0004ac07) main_cset6_listscroll_pane

0x8503,	// (0x0004ac23) main_cset6_slider_pane_ParamLimits

0x8503,	// (0x0004ac23) main_cset6_slider_pane

0x8519,	// (0x0004ac39) main_cset6_text2_pane_ParamLimits

0x8519,	// (0x0004ac39) main_cset6_text2_pane

0x8527,	// (0x0004ac47) main_cset6_text_pane

0x852f,	// (0x0004ac4f) main_cset_list_pane_copy1_ParamLimits

0x852f,	// (0x0004ac4f) main_cset_list_pane_copy1

0x853f,	// (0x0004ac5f) scroll_pane_cp028_copy1

0x8548,	// (0x0004ac68) cset_list_set_pane_copy1

0x855b,	// (0x0004ac7b) aid_position_infowindow_above_copy1

0x8563,	// (0x0004ac83) aid_position_infowindow_below_copy1

0xaff7,	// (0x0004d717) cset_list_set_pane_g1_copy1

0xafff,	// (0x0004d71f) cset_list_set_pane_g3_copy1_ParamLimits

0xafff,	// (0x0004d71f) cset_list_set_pane_g3_copy1

0xb00e,	// (0x0004d72e) cset_list_set_pane_t1_copy1_ParamLimits

0xb00e,	// (0x0004d72e) cset_list_set_pane_t1_copy1

0xa615,	// (0x0004cd35) list_highlight_pane_cp021_copy1_ParamLimits

0xa615,	// (0x0004cd35) list_highlight_pane_cp021_copy1

0x856b,	// (0x0004ac8b) cset6_slider_pane_ParamLimits

0x856b,	// (0x0004ac8b) cset6_slider_pane

0x8597,	// (0x0004acb7) main_cset6_slider_pane_g1_ParamLimits

0x8597,	// (0x0004acb7) main_cset6_slider_pane_g1

0x85bf,	// (0x0004acdf) main_cset6_slider_pane_g2_ParamLimits

0x85bf,	// (0x0004acdf) main_cset6_slider_pane_g2

0x7098,	// (0x000497b8) main_cset6_slider_pane_g3_ParamLimits

0x7098,	// (0x000497b8) main_cset6_slider_pane_g3

0x70c8,	// (0x000497e8) main_cset6_slider_pane_g4_ParamLimits

0x70c8,	// (0x000497e8) main_cset6_slider_pane_g4

0x7110,	// (0x00049830) main_cset6_slider_pane_g5_ParamLimits

0x7110,	// (0x00049830) main_cset6_slider_pane_g5

0x7098,	// (0x000497b8) main_cset6_slider_pane_g7_ParamLimits

0x7098,	// (0x000497b8) main_cset6_slider_pane_g7

0x70a4,	// (0x000497c4) main_cset6_slider_pane_g8_ParamLimits

0x70a4,	// (0x000497c4) main_cset6_slider_pane_g8

0x70b0,	// (0x000497d0) main_cset6_slider_pane_g9_ParamLimits

0x70b0,	// (0x000497d0) main_cset6_slider_pane_g9

0x70bc,	// (0x000497dc) main_cset6_slider_pane_g10_ParamLimits

0x70bc,	// (0x000497dc) main_cset6_slider_pane_g10

0x70c8,	// (0x000497e8) main_cset6_slider_pane_g11_ParamLimits

0x70c8,	// (0x000497e8) main_cset6_slider_pane_g11

0x70d4,	// (0x000497f4) main_cset6_slider_pane_g12_ParamLimits

0x70d4,	// (0x000497f4) main_cset6_slider_pane_g12

0x70e0,	// (0x00049800) main_cset6_slider_pane_g13_ParamLimits

0x70e0,	// (0x00049800) main_cset6_slider_pane_g13

0x70ec,	// (0x0004980c) main_cset6_slider_pane_g14_ParamLimits

0x70ec,	// (0x0004980c) main_cset6_slider_pane_g14

0x85e7,	// (0x0004ad07) main_cset6_slider_pane_g15_ParamLimits

0x85e7,	// (0x0004ad07) main_cset6_slider_pane_g15

0x7110,	// (0x00049830) main_cset6_slider_pane_g16_ParamLimits

0x7110,	// (0x00049830) main_cset6_slider_pane_g16

0x711c,	// (0x0004983c) main_cset6_slider_pane_g17_ParamLimits

0x711c,	// (0x0004983c) main_cset6_slider_pane_g17

0x0011,

0xfa1a,	// (0x0005213a) main_cset6_slider_pane_g_ParamLimits

0xfa1a,	// (0x0005213a) main_cset6_slider_pane_g

0x85ff,	// (0x0004ad1f) main_cset6_slider_pane_t1_ParamLimits

0x85ff,	// (0x0004ad1f) main_cset6_slider_pane_t1

0x8640,	// (0x0004ad60) main_cset6_slider_pane_t2_ParamLimits

0x8640,	// (0x0004ad60) main_cset6_slider_pane_t2

0x866b,	// (0x0004ad8b) main_cset6_slider_pane_t3_ParamLimits

0x866b,	// (0x0004ad8b) main_cset6_slider_pane_t3

0x8696,	// (0x0004adb6) main_cset6_slider_pane_t4_ParamLimits

0x8696,	// (0x0004adb6) main_cset6_slider_pane_t4

0x86c1,	// (0x0004ade1) main_cset6_slider_pane_t5_ParamLimits

0x86c1,	// (0x0004ade1) main_cset6_slider_pane_t5

0x86ec,	// (0x0004ae0c) main_cset6_slider_pane_t7_ParamLimits

0x86ec,	// (0x0004ae0c) main_cset6_slider_pane_t7

0x8722,	// (0x0004ae42) main_cset6_slider_pane_t8_ParamLimits

0x8722,	// (0x0004ae42) main_cset6_slider_pane_t8

0x8746,	// (0x0004ae66) main_cset6_slider_pane_t9_ParamLimits

0x8746,	// (0x0004ae66) main_cset6_slider_pane_t9

0x876a,	// (0x0004ae8a) main_cset6_slider_pane_t10_ParamLimits

0x876a,	// (0x0004ae8a) main_cset6_slider_pane_t10

0x878e,	// (0x0004aeae) main_cset6_slider_pane_t11_ParamLimits

0x878e,	// (0x0004aeae) main_cset6_slider_pane_t11

0x87b2,	// (0x0004aed2) main_cset6_slider_pane_t14_ParamLimits

0x87b2,	// (0x0004aed2) main_cset6_slider_pane_t14

0x87eb,	// (0x0004af0b) main_cset6_slider_pane_t15_ParamLimits

0x87eb,	// (0x0004af0b) main_cset6_slider_pane_t15

0x000b,

0xfa3f,	// (0x0005215f) main_cset6_slider_pane_t_ParamLimits

0xfa3f,	// (0x0005215f) main_cset6_slider_pane_t

0x7383,	// (0x00049aa3) cset_slider_pane_g1_copy1

0x738c,	// (0x00049aac) cset_slider_pane_g2_copy1

0x7395,	// (0x00049ab5) cset_slider_pane_g3_copy1

0xa59d,	// (0x0004ccbd) bg_popup_sub_pane_cp011_copy1

0x7734,	// (0x00049e54) main_cset_text_pane_g1_copy1

0x773c,	// (0x00049e5c) main_cset_text_pane_t1_copy1

0x774a,	// (0x00049e6a) main_cset_text_pane_t2_copy1

0x7758,	// (0x00049e78) main_cset_text_pane_t3_copy1

0x7766,	// (0x00049e86) main_cset_text_pane_t4_copy1

0x7774,	// (0x00049e94) main_cset_text_pane_t5_copy1

0x7782,	// (0x00049ea2) main_cset_text_pane_t6_copy1

0x7790,	// (0x00049eb0) main_cset_text_pane_t7_copy1

0x84a3,	// (0x0004abc3) main_cset_text2_pane_t1_copy1

0xa59d,	// (0x0004ccbd) main_ncimui_pane

0x45d4,	// (0x00046cf4) popup_query_ncimui_window_ParamLimits

0x45d4,	// (0x00046cf4) popup_query_ncimui_window

0xaa96,	// (0x0004d1b6) field_cale_ev2_pane_g4_ParamLimits

0xaa96,	// (0x0004d1b6) field_cale_ev2_pane_g4

0x61b7,	// (0x000488d7) cell_video_dialer_keypad_pane_g2_ParamLimits

0x61b7,	// (0x000488d7) cell_video_dialer_keypad_pane_g2

0x0001,

0xf729,	// (0x00051e49) cell_video_dialer_keypad_pane_g_ParamLimits

0xf729,	// (0x00051e49) cell_video_dialer_keypad_pane_g

0x61cf,	// (0x000488ef) cell_video_dialer_keypad_pane_t1

0xa59d,	// (0x0004ccbd) bg_popup_window_pane_cp012

0xcb98,	// (0x0004f2b8) heading_pane_cp06

0x893b,	// (0x0004b05b) ncim_query_content_pane

0xa59d,	// (0x0004ccbd) bg_popup_heading_pane_cp01

0x8943,	// (0x0004b063) ncim_heading_pane_t1

0x8951,	// (0x0004b071) ncim_indicator_popup_pane

0x8963,	// (0x0004b083) ncim_query_button_pane

0x8983,	// (0x0004b0a3) ncim_query_content_pane_t1

0x8995,	// (0x0004b0b5) ncim_query_content_pane_t2

0x0005,

0xfa7e,	// (0x0005219e) ncim_query_content_pane_t

0x8a47,	// (0x0004b167) ncim_query_list_pane

0x8a59,	// (0x0004b179) ncim_query_popup_pane

0x8951,	// (0x0004b071) ncim_indicator_popup_pane_ParamLimits

0x896b,	// (0x0004b08b) ncim_query_content_pane_g1_ParamLimits

0x896b,	// (0x0004b08b) ncim_query_content_pane_g1

0x8983,	// (0x0004b0a3) ncim_query_content_pane_t1_ParamLimits

0x8995,	// (0x0004b0b5) ncim_query_content_pane_t2_ParamLimits

0x89a7,	// (0x0004b0c7) ncim_query_content_pane_t3_ParamLimits

0x89a7,	// (0x0004b0c7) ncim_query_content_pane_t3

0x89cf,	// (0x0004b0ef) ncim_query_content_pane_t4_ParamLimits

0x89cf,	// (0x0004b0ef) ncim_query_content_pane_t4

0x89f7,	// (0x0004b117) ncim_query_content_pane_t5_ParamLimits

0x89f7,	// (0x0004b117) ncim_query_content_pane_t5

0x8a1f,	// (0x0004b13f) ncim_query_content_pane_t6_ParamLimits

0x8a1f,	// (0x0004b13f) ncim_query_content_pane_t6

0xfa7e,	// (0x0005219e) ncim_query_content_pane_t_ParamLimits

0x8a47,	// (0x0004b167) ncim_query_list_pane_ParamLimits

0x8a59,	// (0x0004b179) ncim_query_popup_pane_ParamLimits

0x8a6d,	// (0x0004b18d) wait_bar_pane_cp04

0xa59d,	// (0x0004ccbd) input_focus_pane_cp011

0x8a75,	// (0x0004b195) ncim_query_popup_pane_t1

0x8a83,	// (0x0004b1a3) ncim_list_query_list_pane_ParamLimits

0x8a83,	// (0x0004b1a3) ncim_list_query_list_pane

0xa59d,	// (0x0004ccbd) bg_button_pane_cp027

0x8a96,	// (0x0004b1b6) ncim_query_button_pane_g1

0xa59d,	// (0x0004ccbd) list_highlight_pane_cp012

0x8aa0,	// (0x0004b1c0) ncim_list_query_list_pane_g1

0x8aa8,	// (0x0004b1c8) ncim_list_query_list_pane_t1

0xad69,	// (0x0004d489) cam4_indicators_pane_g3_ParamLimits

0xad69,	// (0x0004d489) cam4_indicators_pane_g3

0x68c8,	// (0x00048fe8) vid4_indicators_pane_g5_ParamLimits

0x68c8,	// (0x00048fe8) vid4_indicators_pane_g5

0xad69,	// (0x0004d489) vid4_progress_pane_g5_ParamLimits

0xad69,	// (0x0004d489) vid4_progress_pane_g5

0x8854,	// (0x0004af74) main_ncimui_pane_g1

0x88aa,	// (0x0004afca) ncimui_group_query_pane_ParamLimits

0x88aa,	// (0x0004afca) ncimui_group_query_pane

0x88e6,	// (0x0004b006) ncimui_list_pane_ParamLimits

0x88e6,	// (0x0004b006) ncimui_list_pane

0x8907,	// (0x0004b027) ncimui_text_pane_ParamLimits

0x8907,	// (0x0004b027) ncimui_text_pane

0x8ab6,	// (0x0004b1d6) ncimui_text_pane_t1_ParamLimits

0x8ab6,	// (0x0004b1d6) ncimui_text_pane_t1

0x8ad4,	// (0x0004b1f4) ncimui_list_single_graphic_pane_ParamLimits

0x8ad4,	// (0x0004b1f4) ncimui_list_single_graphic_pane

0x8ae4,	// (0x0004b204) ncimui_query_pane_ParamLimits

0x8ae4,	// (0x0004b204) ncimui_query_pane

0xa59d,	// (0x0004ccbd) list_highlight_pane_cp013

0x8af7,	// (0x0004b217) ncim_list_query_list_pane_t1_copy1

0x8aa0,	// (0x0004b1c0) ncim_list_single_graphic_pane_g1

0x8b05,	// (0x0004b225) ncim_query_button_pane_cp01

0x8b11,	// (0x0004b231) ncim_query_entry_pane_ParamLimits

0x8b11,	// (0x0004b231) ncim_query_entry_pane

0x8b24,	// (0x0004b244) ncimui_query_pane_g1

0x8b30,	// (0x0004b250) ncimui_query_pane_t1_ParamLimits

0x8b30,	// (0x0004b250) ncimui_query_pane_t1

0xa615,	// (0x0004cd35) input_focus_pane_cp012

0x8b49,	// (0x0004b269) ncim_query_entry_pane_t1

0xc399,	// (0x0004eab9) main_im_pane_ParamLimits

0xa615,	// (0x0004cd35) main_mobtv_pane_ParamLimits

0xa615,	// (0x0004cd35) main_mobtv_pane

0x70b0,	// (0x000497d0) main_cset6_slider_pane_g18_ParamLimits

0x70b0,	// (0x000497d0) main_cset6_slider_pane_g18

0x70e0,	// (0x00049800) main_cset6_slider_pane_g19_ParamLimits

0x70e0,	// (0x00049800) main_cset6_slider_pane_g19

0x8b5b,	// (0x0004b27b) bg_main_mobtv_pane_ParamLimits

0x8b5b,	// (0x0004b27b) bg_main_mobtv_pane

0x8b69,	// (0x0004b289) main_mobtv_info_pane

0x8b72,	// (0x0004b292) main_mobtv_loading_pane_ParamLimits

0x8b72,	// (0x0004b292) main_mobtv_loading_pane

0x8b7f,	// (0x0004b29f) main_mobtv_pg_channel_list_pane

0x8b89,	// (0x0004b2a9) main_mobtv_pg_hdr_pane

0x8b92,	// (0x0004b2b2) main_mobtv_programe_curr_pane_ParamLimits

0x8b92,	// (0x0004b2b2) main_mobtv_programe_curr_pane

0x8b9f,	// (0x0004b2bf) main_mobtv_programe_next_pane_ParamLimits

0x8b9f,	// (0x0004b2bf) main_mobtv_programe_next_pane

0x8bac,	// (0x0004b2cc) popup_mobtv_noti_window

0xe694,	// (0x00050db4) main_tv_pg_hdr_pane_g1

0x8bb4,	// (0x0004b2d4) main_tv_pg_hdr_pane_g2

0x8bbc,	// (0x0004b2dc) main_tv_pg_hdr_pane_g3

0x8bc4,	// (0x0004b2e4) main_tv_pg_hdr_pane_g4

0x8bcc,	// (0x0004b2ec) main_tv_pg_hdr_pane_g5

0x8bd6,	// (0x0004b2f6) main_tv_pg_hdr_pane_g6

0x8be0,	// (0x0004b300) main_tv_pg_hdr_pane_g7

0x8bea,	// (0x0004b30a) main_tv_pg_hdr_pane_g8

0x8bf4,	// (0x0004b314) main_tv_pg_hdr_pane_g9

0x8bfe,	// (0x0004b31e) main_tv_pg_hdr_pane_g10

0x8c08,	// (0x0004b328) main_tv_pg_hdr_pane_g11

0x000a,

0xfa8b,	// (0x000521ab) main_tv_pg_hdr_pane_g

0x8c12,	// (0x0004b332) main_tv_pg_hdr_pane_t1

0x8c20,	// (0x0004b340) main_tv_pg_hdr_pane_t2

0x8c2e,	// (0x0004b34e) main_tv_pg_hdr_pane_t3

0x8c3e,	// (0x0004b35e) main_tv_pg_hdr_pane_t4

0x8c4e,	// (0x0004b36e) main_tv_pg_hdr_pane_t5

0x0004,

0xfaa2,	// (0x000521c2) main_tv_pg_hdr_pane_t

0x8c5e,	// (0x0004b37e) single_mobtv_pg_channel_pane_ParamLimits

0x8c5e,	// (0x0004b37e) single_mobtv_pg_channel_pane

0x8c70,	// (0x0004b390) single_mobtv_pg_channel_table_pane

0x8c79,	// (0x0004b399) single_mobtv_pg_channel_thumb_pane

0x8c82,	// (0x0004b3a2) single_tv_pg_channel_pane_g1

0x8c8b,	// (0x0004b3ab) single_tv_pg_channel_pane_g2

0x0001,

0xfaad,	// (0x000521cd) single_tv_pg_channel_pane_g

0xe903,	// (0x00051023) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe903,	// (0x00051023) bg_single_mobtv_pg_channel_thumb_pane

0x8c94,	// (0x0004b3b4) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x8c94,	// (0x0004b3b4) single_mobtv_pg_channel_thumb_pane_g1

0x8ca2,	// (0x0004b3c2) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x8ca2,	// (0x0004b3c2) single_mobtv_pg_channel_thumb_pane_g2

0x8cae,	// (0x0004b3ce) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x8cae,	// (0x0004b3ce) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfab2,	// (0x000521d2) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfab2,	// (0x000521d2) single_mobtv_pg_channel_thumb_pane_g

0x8cba,	// (0x0004b3da) single_mobtv_pg_channel_thumb_pane_t1

0x8cc8,	// (0x0004b3e8) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfab9,	// (0x000521d9) single_mobtv_pg_channel_thumb_pane_t

0xe694,	// (0x00050db4) bg_single_mobtv_pg_channel_table_pane_g1

0xe694,	// (0x00050db4) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf614,	// (0x00051d34) bg_single_mobtv_pg_channel_table_pane_g

0x8cd6,	// (0x0004b3f6) single_mobtv_pg_channel_table_pane_t1

0x8ce4,	// (0x0004b404) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfabe,	// (0x000521de) single_mobtv_pg_channel_table_pane_t

0x8cfa,	// (0x0004b41a) main_mobtv_info_pane_g1_ParamLimits

0x8cfa,	// (0x0004b41a) main_mobtv_info_pane_g1

0x8d18,	// (0x0004b438) main_mobtv_info_pane_t1_ParamLimits

0x8d18,	// (0x0004b438) main_mobtv_info_pane_t1

0x8d90,	// (0x0004b4b0) main_mobtv_info_pane_t2_ParamLimits

0x8d90,	// (0x0004b4b0) main_mobtv_info_pane_t2

0x0002,

0xfac8,	// (0x000521e8) main_mobtv_info_pane_t_ParamLimits

0xfac8,	// (0x000521e8) main_mobtv_info_pane_t

0x8e1f,	// (0x0004b53f) wait_bar_pane_cp05

0x8e31,	// (0x0004b551) main_mobtv_loading_pane_g1_ParamLimits

0x8e31,	// (0x0004b551) main_mobtv_loading_pane_g1

0x8e44,	// (0x0004b564) main_mobtv_loading_pane_g2_ParamLimits

0x8e44,	// (0x0004b564) main_mobtv_loading_pane_g2

0x8e50,	// (0x0004b570) main_mobtv_loading_pane_g3_ParamLimits

0x8e50,	// (0x0004b570) main_mobtv_loading_pane_g3

0x0002,

0xfacf,	// (0x000521ef) main_mobtv_loading_pane_g_ParamLimits

0xfacf,	// (0x000521ef) main_mobtv_loading_pane_g

0x8e63,	// (0x0004b583) main_mobtv_loading_pane_t1_ParamLimits

0x8e63,	// (0x0004b583) main_mobtv_loading_pane_t1

0x8e7b,	// (0x0004b59b) main_mobtv_loading_pane_t2_ParamLimits

0x8e7b,	// (0x0004b59b) main_mobtv_loading_pane_t2

0x0001,

0xfad6,	// (0x000521f6) main_mobtv_loading_pane_t_ParamLimits

0xfad6,	// (0x000521f6) main_mobtv_loading_pane_t

0x8e9f,	// (0x0004b5bf) wait_bar_pane_cp06_ParamLimits

0x8e9f,	// (0x0004b5bf) wait_bar_pane_cp06

0x8eae,	// (0x0004b5ce) main_mobtv_programe_curr_pane_t1

0x8ebc,	// (0x0004b5dc) main_mobtv_programe_curr_pane_t2

0x0001,

0xfadb,	// (0x000521fb) main_mobtv_programe_curr_pane_t

0x8eca,	// (0x0004b5ea) main_mobtv_programe_next_pane_t1

0x8ed8,	// (0x0004b5f8) main_mobtv_programe_next_pane_t2

0x8ee6,	// (0x0004b606) main_mobtv_programe_next_pane_t3

0x0002,

0xfae0,	// (0x00052200) main_mobtv_programe_next_pane_t

0xa59d,	// (0x0004ccbd) bg_popup_mobtv_noti_window_pane

0x8ef4,	// (0x0004b614) popup_mobtv_noti_window_g1

0x8efc,	// (0x0004b61c) popup_mobtv_noti_window_t1

0x8f0a,	// (0x0004b62a) popup_mobtv_noti_window_t2

0x0001,

0xfae7,	// (0x00052207) popup_mobtv_noti_window_t

0xe694,	// (0x00050db4) bg_popup_mobtv_noti_window_pane_g1

0xa59d,	// (0x0004ccbd) sc_clock_pane

0xa59d,	// (0x0004ccbd) main_fs_bigclock_pane

0x7f62,	// (0x0004a682) blid2_tripm_pane_t4_ParamLimits

0x7f62,	// (0x0004a682) blid2_tripm_pane_t4

0x8f18,	// (0x0004b638) sc_clock_pane_g1_ParamLimits

0x8f18,	// (0x0004b638) sc_clock_pane_g1

0x8f2a,	// (0x0004b64a) sc_clock_pane_t1_ParamLimits

0x8f2a,	// (0x0004b64a) sc_clock_pane_t1

0x8f4c,	// (0x0004b66c) sc_clock_pane_t2_ParamLimits

0x8f4c,	// (0x0004b66c) sc_clock_pane_t2

0x8f64,	// (0x0004b684) sc_clock_pane_t3_ParamLimits

0x8f64,	// (0x0004b684) sc_clock_pane_t3

0x0004,

0xfaec,	// (0x0005220c) sc_clock_pane_t_ParamLimits

0xfaec,	// (0x0005220c) sc_clock_pane_t

0x9d90,	// (0x0004c4b0) main_fs_bigclock_indicator_pane_ParamLimits

0x9d90,	// (0x0004c4b0) main_fs_bigclock_indicator_pane

0xe8d3,	// (0x00050ff3) main_fs_bigclock_pane_g1_ParamLimits

0xe8d3,	// (0x00050ff3) main_fs_bigclock_pane_g1

0x9d9c,	// (0x0004c4bc) main_fs_bigclock_pane_t1_ParamLimits

0x9d9c,	// (0x0004c4bc) main_fs_bigclock_pane_t1

0x9dae,	// (0x0004c4ce) main_fs_bigclock_pane_t2_ParamLimits

0x9dae,	// (0x0004c4ce) main_fs_bigclock_pane_t2

0x9dc0,	// (0x0004c4e0) main_fs_bigclock_pane_t3_ParamLimits

0x9dc0,	// (0x0004c4e0) main_fs_bigclock_pane_t3

0x0002,

0xfce7,	// (0x00052407) main_fs_bigclock_pane_t_ParamLimits

0xfce7,	// (0x00052407) main_fs_bigclock_pane_t

0xb7c7,	// (0x0004dee7) main_fs_bigclock_indicator_pane_g1

0x8977,	// (0x0004b097) ncim_query_content_pane_g2_ParamLimits

0x8977,	// (0x0004b097) ncim_query_content_pane_g2

0x0001,

0xfa79,	// (0x00052199) ncim_query_content_pane_g_ParamLimits

0xfa79,	// (0x00052199) ncim_query_content_pane_g

0x8f7d,	// (0x0004b69d) sc_clock_pane_t4_ParamLimits

0x8f7d,	// (0x0004b69d) sc_clock_pane_t4

0xa615,	// (0x0004cd35) main_radioblah_pane

0xf02e,	// (0x0005174e) cell_call4_button_pane_t1_copy1_ParamLimits

0xf02e,	// (0x0005174e) cell_call4_button_pane_t1_copy1

0x885c,	// (0x0004af7c) main_ncimui_pane_t1_ParamLimits

0x885c,	// (0x0004af7c) main_ncimui_pane_t1

0x8876,	// (0x0004af96) main_ncimui_pane_t2_ParamLimits

0x8876,	// (0x0004af96) main_ncimui_pane_t2

0x0002,

0xfa72,	// (0x00052192) main_ncimui_pane_t_ParamLimits

0xfa72,	// (0x00052192) main_ncimui_pane_t

0x9155,	// (0x0004b875) main_radioblah_anim_pane_ParamLimits

0x9155,	// (0x0004b875) main_radioblah_anim_pane

0x9166,	// (0x0004b886) main_radioblah_info_pane_ParamLimits

0x9166,	// (0x0004b886) main_radioblah_info_pane

0x918c,	// (0x0004b8ac) main_radioblah_pane_t1_ParamLimits

0x918c,	// (0x0004b8ac) main_radioblah_pane_t1

0x91a8,	// (0x0004b8c8) main_radioblah_pane_t2_ParamLimits

0x91a8,	// (0x0004b8c8) main_radioblah_pane_t2

0x0003,

0xfb0d,	// (0x0005222d) main_radioblah_pane_t_ParamLimits

0xfb0d,	// (0x0005222d) main_radioblah_pane_t

0x91f0,	// (0x0004b910) main_radioblah_rocker_ctrl_pane_ParamLimits

0x91f0,	// (0x0004b910) main_radioblah_rocker_ctrl_pane

0x9248,	// (0x0004b968) main_radioblah_info_pane_t1_ParamLimits

0x9248,	// (0x0004b968) main_radioblah_info_pane_t1

0x9282,	// (0x0004b9a2) main_radioblah_info_pane_t2_ParamLimits

0x9282,	// (0x0004b9a2) main_radioblah_info_pane_t2

0x0003,

0xfb16,	// (0x00052236) main_radioblah_info_pane_t_ParamLimits

0xfb16,	// (0x00052236) main_radioblah_info_pane_t

0xe694,	// (0x00050db4) main_radioblah_rocker_ctrl_pane_g1

0x9334,	// (0x0004ba54) main_radioblah_rocker_ctrl_pane_g2

0x933c,	// (0x0004ba5c) main_radioblah_rocker_ctrl_pane_g3

0x9344,	// (0x0004ba64) main_radioblah_rocker_ctrl_pane_g4

0x934c,	// (0x0004ba6c) main_radioblah_rocker_ctrl_pane_g5

0x9354,	// (0x0004ba74) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb1f,	// (0x0005223f) main_radioblah_rocker_ctrl_pane_g

0x84a3,	// (0x0004abc3) main_cset_text2_pane_t1_copy1_ParamLimits

0xad39,	// (0x0004d459) cam4_image_uncrop_qvga_pane

0xad92,	// (0x0004d4b2) vid4_image_uncrop_qcif_pane

0xafe9,	// (0x0004d709) cam6_image_uncrop_qvga_pane_ParamLimits

0xafe9,	// (0x0004d709) cam6_image_uncrop_qvga_pane

0x835f,	// (0x0004aa7f) vid6_image_uncrop_qcif_pane_ParamLimits

0x835f,	// (0x0004aa7f) vid6_image_uncrop_qcif_pane

0xa59d,	// (0x0004ccbd) bg_popup_preview_window_pane_cp03

0x8824,	// (0x0004af44) list_cset_text2_pane

0x882c,	// (0x0004af4c) main_cset6_text2_pane_g1

0x8834,	// (0x0004af54) main_cset6_text2_pane_t1

0x935c,	// (0x0004ba7c) list_cset_text2_pane_t1_ParamLimits

0x935c,	// (0x0004ba7c) list_cset_text2_pane_t1

0xa615,	// (0x0004cd35) main_radioblah_pane_ParamLimits

0x8e0b,	// (0x0004b52b) main_mobtv_info_pane_t3_ParamLimits

0x8e0b,	// (0x0004b52b) main_mobtv_info_pane_t3

0x917a,	// (0x0004b89a) main_radioblah_pane_g1

0x9218,	// (0x0004b938) main_radioblah_info_pane_g1

0x92d9,	// (0x0004b9f9) main_radioblah_info_pane_t3_ParamLimits

0x92d9,	// (0x0004b9f9) main_radioblah_info_pane_t3

0x3042,	// (0x00045762) highlight_cell_cale_month_pane_ParamLimits

0x3042,	// (0x00045762) highlight_cell_cale_month_pane

0xa59d,	// (0x0004ccbd) main_phob_fisheye_pane

0xe9eb,	// (0x0005110b) scroll_pane_cp0031_ParamLimits

0xe9eb,	// (0x0005110b) scroll_pane_cp0031

0x8494,	// (0x0004abb4) wait_bar_pane_cp08_ParamLimits

0x8548,	// (0x0004ac68) cset_list_set_pane_copy1_ParamLimits

0x9379,	// (0x0004ba99) highlight_cell_cale_month_pane_g1

0x9381,	// (0x0004baa1) highlight_cell_cale_month_pane_t1

0x7b9d,	// (0x0004a2bd) list_gen_pane_cp01

0x6fe4,	// (0x00049704) scroll_pane_01

0x938f,	// (0x0004baaf) list_single_double_fisheye_pane

0x0fdc,	// (0x000436fc) list_double_fisheye_pane_g1_ParamLimits

0x0fdc,	// (0x000436fc) list_double_fisheye_pane_g1

0x0fe8,	// (0x00043708) list_double_fisheye_pane_g2_ParamLimits

0x0fe8,	// (0x00043708) list_double_fisheye_pane_g2

0x9398,	// (0x0004bab8) list_double_fisheye_pane_g3_ParamLimits

0x9398,	// (0x0004bab8) list_double_fisheye_pane_g3

0x0004,

0xfb2c,	// (0x0005224c) list_double_fisheye_pane_g_ParamLimits

0xfb2c,	// (0x0005224c) list_double_fisheye_pane_g

0x1019,	// (0x00043739) list_double_fisheye_pane_t1_ParamLimits

0x1019,	// (0x00043739) list_double_fisheye_pane_t1

0x1034,	// (0x00043754) list_double_fisheye_pane_t2_ParamLimits

0x1034,	// (0x00043754) list_double_fisheye_pane_t2

0x0001,

0xfb37,	// (0x00052257) list_double_fisheye_pane_t_ParamLimits

0xfb37,	// (0x00052257) list_double_fisheye_pane_t

0xa59d,	// (0x0004ccbd) main_call5_pane

0x8fa8,	// (0x0004b6c8) sc_swipe_pane_ParamLimits

0x8fa8,	// (0x0004b6c8) sc_swipe_pane

0x93b7,	// (0x0004bad7) call5_image_pane_ParamLimits

0x93b7,	// (0x0004bad7) call5_image_pane

0x93d4,	// (0x0004baf4) call5_swipe_1_pane_ParamLimits

0x93d4,	// (0x0004baf4) call5_swipe_1_pane

0x93e7,	// (0x0004bb07) call5_swipe_2_pane_ParamLimits

0x93e7,	// (0x0004bb07) call5_swipe_2_pane

0x9412,	// (0x0004bb32) popup_call5_audio_first_window_ParamLimits

0x9412,	// (0x0004bb32) popup_call5_audio_first_window

0xe903,	// (0x00051023) call5_swipe_1_pane_g1_ParamLimits

0xe903,	// (0x00051023) call5_swipe_1_pane_g1

0x9423,	// (0x0004bb43) call5_swipe_1_pane_g2_ParamLimits

0x9423,	// (0x0004bb43) call5_swipe_1_pane_g2

0x0001,

0xfb3c,	// (0x0005225c) call5_swipe_1_pane_g_ParamLimits

0xfb3c,	// (0x0005225c) call5_swipe_1_pane_g

0x942f,	// (0x0004bb4f) call5_swipe_1_pane_t1_ParamLimits

0x942f,	// (0x0004bb4f) call5_swipe_1_pane_t1

0xe903,	// (0x00051023) call5_swipe_2_pane_g1_ParamLimits

0xe903,	// (0x00051023) call5_swipe_2_pane_g1

0x9444,	// (0x0004bb64) call5_swipe_2_pane_g2_ParamLimits

0x9444,	// (0x0004bb64) call5_swipe_2_pane_g2

0x0001,

0xfb41,	// (0x00052261) call5_swipe_2_pane_g_ParamLimits

0xfb41,	// (0x00052261) call5_swipe_2_pane_g

0x9450,	// (0x0004bb70) call5_swipe_2_pane_t1_ParamLimits

0x9450,	// (0x0004bb70) call5_swipe_2_pane_t1

0x9465,	// (0x0004bb85) sc_swipe_pane_g1_ParamLimits

0x9465,	// (0x0004bb85) sc_swipe_pane_g1

0x9472,	// (0x0004bb92) sc_swipe_pane_g2_ParamLimits

0x9472,	// (0x0004bb92) sc_swipe_pane_g2

0x0001,

0xfb46,	// (0x00052266) sc_swipe_pane_g_ParamLimits

0xfb46,	// (0x00052266) sc_swipe_pane_g

0x947e,	// (0x0004bb9e) sc_swipe_pane_t1_ParamLimits

0x947e,	// (0x0004bb9e) sc_swipe_pane_t1

0xa59d,	// (0x0004ccbd) main_cmail_launcher_pane

0x9493,	// (0x0004bbb3) aid_size_cell_cmail_l_ParamLimits

0x9493,	// (0x0004bbb3) aid_size_cell_cmail_l

0x94ad,	// (0x0004bbcd) grid_cmail_l_pane_ParamLimits

0x94ad,	// (0x0004bbcd) grid_cmail_l_pane

0x94c8,	// (0x0004bbe8) cell_cmail_l_pane_ParamLimits

0x94c8,	// (0x0004bbe8) cell_cmail_l_pane

0x94ee,	// (0x0004bc0e) cell_cmail_l_pane_g1_ParamLimits

0x94ee,	// (0x0004bc0e) cell_cmail_l_pane_g1

0x94fa,	// (0x0004bc1a) cell_cmail_l_pane_t1_ParamLimits

0x94fa,	// (0x0004bc1a) cell_cmail_l_pane_t1

0x9510,	// (0x0004bc30) cell_cmail_l_pane_t2_ParamLimits

0x9510,	// (0x0004bc30) cell_cmail_l_pane_t2

0x0001,

0xfb4b,	// (0x0005226b) cell_cmail_l_pane_t_ParamLimits

0xfb4b,	// (0x0005226b) cell_cmail_l_pane_t

0xa615,	// (0x0004cd35) grid_highlight_pane_cp018_ParamLimits

0xa615,	// (0x0004cd35) grid_highlight_pane_cp018

0x16f9,	// (0x00043e19) main2_pane_ParamLimits

0x16f9,	// (0x00043e19) main2_pane

0xc444,	// (0x0004eb64) popup_sp_fs_action_menu_bg_pane_g1

0xc44c,	// (0x0004eb6c) popup_sp_fs_action_menu_bg_pane_g2

0xc454,	// (0x0004eb74) popup_sp_fs_action_menu_bg_pane_g3

0xc45c,	// (0x0004eb7c) popup_sp_fs_action_menu_bg_pane_g4

0xc464,	// (0x0004eb84) popup_sp_fs_action_menu_bg_pane_g5

0xc46c,	// (0x0004eb8c) popup_sp_fs_action_menu_bg_pane_g6

0xc474,	// (0x0004eb94) popup_sp_fs_action_menu_bg_pane_g7

0xc47c,	// (0x0004eb9c) popup_sp_fs_action_menu_bg_pane_g8

0xc484,	// (0x0004eba4) popup_sp_fs_action_menu_bg_pane_g9

0xc48c,	// (0x0004ebac) popup_sp_fs_action_menu_bg_pane_g10

0xc48c,	// (0x0004ebac) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x000518c7) popup_sp_fs_action_menu_bg_pane_g

0xa735,	// (0x0004ce55) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa735,	// (0x0004ce55) list_medium_line_x2_t3_g3_g1

0xa741,	// (0x0004ce61) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa741,	// (0x0004ce61) list_medium_line_x2_t3_g3_g2

0xa74d,	// (0x0004ce6d) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa74d,	// (0x0004ce6d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x00051977) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x00051977) list_medium_line_x2_t3_g3_g

0xa759,	// (0x0004ce79) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa759,	// (0x0004ce79) list_medium_line_x2_t3_g3_t1

0x0bab,	// (0x000432cb) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0bab,	// (0x000432cb) list_medium_line_x2_t3_g3_t2

0xa76e,	// (0x0004ce8e) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa76e,	// (0x0004ce8e) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x0005197e) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x0005197e) list_medium_line_x2_t3_g3_t

0xa735,	// (0x0004ce55) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa735,	// (0x0004ce55) list_medium_line_x2_t3_g2_g1

0xa74d,	// (0x0004ce6d) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa74d,	// (0x0004ce6d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x00051985) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x00051985) list_medium_line_x2_t3_g2_g

0xa783,	// (0x0004cea3) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa783,	// (0x0004cea3) list_medium_line_x2_t3_g2_t1

0xa799,	// (0x0004ceb9) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa799,	// (0x0004ceb9) list_medium_line_x2_t3_g2_t2

0xa76e,	// (0x0004ce8e) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa76e,	// (0x0004ce8e) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x0005198a) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x0005198a) list_medium_line_x2_t3_g2_t

0xa735,	// (0x0004ce55) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa735,	// (0x0004ce55) list_medium_line_x2_t4_g4_g1

0xa7ab,	// (0x0004cecb) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa7ab,	// (0x0004cecb) list_medium_line_x2_t4_g4_g2

0xa741,	// (0x0004ce61) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa741,	// (0x0004ce61) list_medium_line_x2_t4_g4_g3

0xa7b7,	// (0x0004ced7) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa7b7,	// (0x0004ced7) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x00051991) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x00051991) list_medium_line_x2_t4_g4_g

0x0bbf,	// (0x000432df) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0bbf,	// (0x000432df) list_medium_line_x2_t4_g4_t1

0x0bd9,	// (0x000432f9) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0bd9,	// (0x000432f9) list_medium_line_x2_t4_g4_t2

0x0bee,	// (0x0004330e) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0bee,	// (0x0004330e) list_medium_line_x2_t4_g4_t3

0xa7c3,	// (0x0004cee3) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa7c3,	// (0x0004cee3) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x0005199a) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x0005199a) list_medium_line_x2_t4_g4_t

0xa735,	// (0x0004ce55) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa735,	// (0x0004ce55) list_medium_line_x2_t2_g4_g1

0xa7ab,	// (0x0004cecb) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa7ab,	// (0x0004cecb) list_medium_line_x2_t2_g4_g2

0xa741,	// (0x0004ce61) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa741,	// (0x0004ce61) list_medium_line_x2_t2_g4_g3

0xa74d,	// (0x0004ce6d) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa74d,	// (0x0004ce6d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x00051a01) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x00051a01) list_medium_line_x2_t2_g4_g

0xa7d5,	// (0x0004cef5) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa7d5,	// (0x0004cef5) list_medium_line_x2_t2_g4_t1

0xa76e,	// (0x0004ce8e) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa76e,	// (0x0004ce8e) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x00051a0a) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x00051a0a) list_medium_line_x2_t2_g4_t

0xa735,	// (0x0004ce55) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa735,	// (0x0004ce55) list_medium_line_x2_t2_g3_g1

0xa741,	// (0x0004ce61) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa741,	// (0x0004ce61) list_medium_line_x2_t2_g3_g2

0xa74d,	// (0x0004ce6d) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa74d,	// (0x0004ce6d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x00051977) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x00051977) list_medium_line_x2_t2_g3_g

0xa7ea,	// (0x0004cf0a) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa7ea,	// (0x0004cf0a) list_medium_line_x2_t2_g3_t1

0xa76e,	// (0x0004ce8e) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa76e,	// (0x0004ce8e) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x00051a0f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x00051a0f) list_medium_line_x2_t2_g3_t

0x3228,	// (0x00045948) main_sp_fs_list_pane_ParamLimits

0x3228,	// (0x00045948) main_sp_fs_list_pane

0x3234,	// (0x00045954) sp_fs_scroll_pane_ParamLimits

0x3234,	// (0x00045954) sp_fs_scroll_pane

0x0c03,	// (0x00043323) list_medium_line_x2_t3_t1

0x0c13,	// (0x00043333) list_medium_line_x2_t3_t2

0xa82d,	// (0x0004cf4d) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x00051a5a) list_medium_line_x2_t3_t

0x0c21,	// (0x00043341) list_medium_line_x3_t4_t1

0x0c31,	// (0x00043351) list_medium_line_x3_t4_t2

0xa83b,	// (0x0004cf5b) list_medium_line_x3_t4_t3

0xa82d,	// (0x0004cf4d) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x00051a61) list_medium_line_x3_t4_t

0x0c3f,	// (0x0004335f) list_medium_line_x4_t5_t1

0x0c4f,	// (0x0004336f) list_medium_line_x4_t5_t2

0xa83b,	// (0x0004cf5b) list_medium_line_x4_t5_t3

0xa849,	// (0x0004cf69) list_medium_line_x4_t5_t4

0xa82d,	// (0x0004cf4d) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x00051a6a) list_medium_line_x4_t5_t

0xa735,	// (0x0004ce55) list_medium_line_t4_g4_g1_ParamLimits

0xa735,	// (0x0004ce55) list_medium_line_t4_g4_g1

0xa7b7,	// (0x0004ced7) list_medium_line_t4_g4_g2_ParamLimits

0xa7b7,	// (0x0004ced7) list_medium_line_t4_g4_g2

0xa857,	// (0x0004cf77) list_medium_line_t4_g4_g3_ParamLimits

0xa857,	// (0x0004cf77) list_medium_line_t4_g4_g3

0xa74d,	// (0x0004ce6d) list_medium_line_t4_g4_g4_ParamLimits

0xa74d,	// (0x0004ce6d) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x00051a75) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x00051a75) list_medium_line_t4_g4_g

0xa863,	// (0x0004cf83) list_medium_line_t4_g4_t1_ParamLimits

0xa863,	// (0x0004cf83) list_medium_line_t4_g4_t1

0xa878,	// (0x0004cf98) list_medium_line_t4_g4_t2_ParamLimits

0xa878,	// (0x0004cf98) list_medium_line_t4_g4_t2

0xa88d,	// (0x0004cfad) list_medium_line_t4_g4_t3_ParamLimits

0xa88d,	// (0x0004cfad) list_medium_line_t4_g4_t3

0xa76e,	// (0x0004ce8e) list_medium_line_t4_g4_t4_ParamLimits

0xa76e,	// (0x0004ce8e) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x00051a7e) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x00051a7e) list_medium_line_t4_g4_t

0x32de,	// (0x000459fe) chi_dic_find_pane_g1

0x43b2,	// (0x00046ad2) main_tport_pane

0xae1f,	// (0x0004d53f) list_medium_line_plain_t1

0xae69,	// (0x0004d589) list_medium_line_t2_g2_g1_ParamLimits

0xae69,	// (0x0004d589) list_medium_line_t2_g2_g1

0xae75,	// (0x0004d595) list_medium_line_t2_g2_g2_ParamLimits

0xae75,	// (0x0004d595) list_medium_line_t2_g2_g2

0x0001,

0xf888,	// (0x00051fa8) list_medium_line_t2_g2_g_ParamLimits

0xf888,	// (0x00051fa8) list_medium_line_t2_g2_g

0x0e33,	// (0x00043553) list_medium_line_t2_g2_t1_ParamLimits

0x0e33,	// (0x00043553) list_medium_line_t2_g2_t1

0x0e4d,	// (0x0004356d) list_medium_line_t2_g2_t2_ParamLimits

0x0e4d,	// (0x0004356d) list_medium_line_t2_g2_t2

0x0001,

0xf88d,	// (0x00051fad) list_medium_line_t2_g2_t_ParamLimits

0xf88d,	// (0x00051fad) list_medium_line_t2_g2_t

0xafa1,	// (0x0004d6c1) aid_sp_fs_list_icon_a_sm

0xafa9,	// (0x0004d6c9) aid_sp_fs_list_icon_d

0xafb1,	// (0x0004d6d1) aid_sp_fs_text_primary

0x7c5b,	// (0x0004a37b) aid_sp_fs_text_secondary

0xddd5,	// (0x000504f5) list_medium_line

0xddd5,	// (0x000504f5) list_medium_line_g2

0xddd5,	// (0x000504f5) list_medium_line_g3

0xddd5,	// (0x000504f5) list_medium_line_plain

0xddd5,	// (0x000504f5) list_medium_line_plain_t2

0xddd5,	// (0x000504f5) list_medium_line_plain_t3

0xddd5,	// (0x000504f5) list_medium_line_right_icon

0xddd5,	// (0x000504f5) list_medium_line_right_iconx2

0xddd5,	// (0x000504f5) list_medium_line_t2

0xddd5,	// (0x000504f5) list_medium_line_t2_g2

0xddd5,	// (0x000504f5) list_medium_line_t2_g3

0xddd5,	// (0x000504f5) list_medium_line_t2_right_icon

0xddd5,	// (0x000504f5) list_medium_line_t2_right_iconx2

0xddd5,	// (0x000504f5) list_medium_line_t3

0xddd5,	// (0x000504f5) list_medium_line_t3_g2

0xddd5,	// (0x000504f5) list_medium_line_t3_g3

0xddd5,	// (0x000504f5) list_medium_line_t3_right_iconx2

0xafba,	// (0x0004d6da) list_medium_line_t4_g4

0xafc3,	// (0x0004d6e3) list_medium_line_x2

0xafc3,	// (0x0004d6e3) list_medium_line_x2_t2_g2

0xafc3,	// (0x0004d6e3) list_medium_line_x2_t2_g3

0xafc3,	// (0x0004d6e3) list_medium_line_x2_t2_g4

0xafc3,	// (0x0004d6e3) list_medium_line_x2_t3

0xafc3,	// (0x0004d6e3) list_medium_line_x2_t3_g2

0xafc3,	// (0x0004d6e3) list_medium_line_x2_t3_g3

0xafc3,	// (0x0004d6e3) list_medium_line_x2_t3_g4

0xafc3,	// (0x0004d6e3) list_medium_line_x2_t4_g2

0xafc3,	// (0x0004d6e3) list_medium_line_x2_t4_g4

0xafcc,	// (0x0004d6ec) list_medium_line_x3

0xafcc,	// (0x0004d6ec) list_medium_line_x3_t4

0xafcc,	// (0x0004d6ec) list_medium_line_x3_t4_g4

0xafba,	// (0x0004d6da) list_medium_line_x4_t4

0xafba,	// (0x0004d6da) list_medium_line_x4_t4_g7

0xafba,	// (0x0004d6da) list_medium_line_x4_t5

0xafd5,	// (0x0004d6f5) list_single_fs_dyc_pane_ParamLimits

0xafd5,	// (0x0004d6f5) list_single_fs_dyc_pane

0xa735,	// (0x0004ce55) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa735,	// (0x0004ce55) list_medium_line_x4_t4_g7_g1

0xb023,	// (0x0004d743) list_medium_line_x4_t4_g7_g2_ParamLimits

0xb023,	// (0x0004d743) list_medium_line_x4_t4_g7_g2

0xb02f,	// (0x0004d74f) list_medium_line_x4_t4_g7_g3_ParamLimits

0xb02f,	// (0x0004d74f) list_medium_line_x4_t4_g7_g3

0xb03e,	// (0x0004d75e) list_medium_line_x4_t4_g7_g4_ParamLimits

0xb03e,	// (0x0004d75e) list_medium_line_x4_t4_g7_g4

0xb04a,	// (0x0004d76a) list_medium_line_x4_t4_g7_g5_ParamLimits

0xb04a,	// (0x0004d76a) list_medium_line_x4_t4_g7_g5

0xb059,	// (0x0004d779) list_medium_line_x4_t4_g7_g6_ParamLimits

0xb059,	// (0x0004d779) list_medium_line_x4_t4_g7_g6

0xb068,	// (0x0004d788) list_medium_line_x4_t4_g7_g7_ParamLimits

0xb068,	// (0x0004d788) list_medium_line_x4_t4_g7_g7

0x0006,

0xfa58,	// (0x00052178) list_medium_line_x4_t4_g7_g_ParamLimits

0xfa58,	// (0x00052178) list_medium_line_x4_t4_g7_g

0xb074,	// (0x0004d794) list_medium_line_x4_t4_g7_t1_ParamLimits

0xb074,	// (0x0004d794) list_medium_line_x4_t4_g7_t1

0xb089,	// (0x0004d7a9) list_medium_line_x4_t4_g7_t2_ParamLimits

0xb089,	// (0x0004d7a9) list_medium_line_x4_t4_g7_t2

0xb09e,	// (0x0004d7be) list_medium_line_x4_t4_g7_t3_ParamLimits

0xb09e,	// (0x0004d7be) list_medium_line_x4_t4_g7_t3

0xb0b3,	// (0x0004d7d3) list_medium_line_x4_t4_g7_t4_ParamLimits

0xb0b3,	// (0x0004d7d3) list_medium_line_x4_t4_g7_t4

0xb0c5,	// (0x0004d7e5) list_medium_line_x4_t4_g7_t5_ParamLimits

0xb0c5,	// (0x0004d7e5) list_medium_line_x4_t4_g7_t5

0x0004,

0xfa67,	// (0x00052187) list_medium_line_x4_t4_g7_t_ParamLimits

0xfa67,	// (0x00052187) list_medium_line_x4_t4_g7_t

0xb0d7,	// (0x0004d7f7) list_single_dyc_row_pane_ParamLimits

0xb0d7,	// (0x0004d7f7) list_single_dyc_row_pane

0x93a4,	// (0x0004bac4) call5_gesture_pane_ParamLimits

0x93a4,	// (0x0004bac4) call5_gesture_pane

0x93fa,	// (0x0004bb1a) call5_windows_pane_ParamLimits

0x93fa,	// (0x0004bb1a) call5_windows_pane

0x9522,	// (0x0004bc42) call5_swipe_1_pane_cp_ParamLimits

0x9522,	// (0x0004bc42) call5_swipe_1_pane_cp

0x952e,	// (0x0004bc4e) call5_swipe_2_pane_cp_ParamLimits

0x952e,	// (0x0004bc4e) call5_swipe_2_pane_cp

0xce23,	// (0x0004f543) call5_image_pane_cp

0x953a,	// (0x0004bc5a) popup_call5_audio_first_window_cp_ParamLimits

0x953a,	// (0x0004bc5a) popup_call5_audio_first_window_cp

0x9465,	// (0x0004bb85) call5_swipe_1_pane_g1_cp_ParamLimits

0x9465,	// (0x0004bb85) call5_swipe_1_pane_g1_cp

0x9546,	// (0x0004bc66) call5_swipe_1_pane_g2_cp

0x947e,	// (0x0004bb9e) call5_swipe_1_pane_t1_cp_ParamLimits

0x947e,	// (0x0004bb9e) call5_swipe_1_pane_t1_cp

0x9465,	// (0x0004bb85) call5_swipe_2_pane_g1_cp_ParamLimits

0x9465,	// (0x0004bb85) call5_swipe_2_pane_g1_cp

0x954e,	// (0x0004bc6e) call5_swipe_2_pane_g2_cp

0x9556,	// (0x0004bc76) call5_swipe_2_pane_t1_cp_ParamLimits

0x9556,	// (0x0004bc76) call5_swipe_2_pane_t1_cp

0xa615,	// (0x0004cd35) main_sp_fs_email_pane

0x956b,	// (0x0004bc8b) main_sp_fs_listscroll_pane_te

0xb0f4,	// (0x0004d814) popup_sp_fs_action_menu_pane_ParamLimits

0xb0f4,	// (0x0004d814) popup_sp_fs_action_menu_pane

0xe694,	// (0x00050db4) bg_sp_fs_ctrlbar_pane_g1

0x9574,	// (0x0004bc94) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x957d,	// (0x0004bc9d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x9586,	// (0x0004bca6) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe694,	// (0x00050db4) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfb50,	// (0x00052270) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe477,	// (0x00050b97) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe477,	// (0x00050b97) bg_sp_fs_ctrlbar_ddmenu_pane

0x958f,	// (0x0004bcaf) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x958f,	// (0x0004bcaf) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x959b,	// (0x0004bcbb) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x959b,	// (0x0004bcbb) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfb59,	// (0x00052279) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfb59,	// (0x00052279) main_sp_fs_ctrlbar_ddmenu_pane_g

0x95a7,	// (0x0004bcc7) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x95a7,	// (0x0004bcc7) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xb134,	// (0x0004d854) list_medium_line_t2_right_icon_g1

0x1056,	// (0x00043776) list_medium_line_t2_right_icon_t1

0x1066,	// (0x00043786) list_medium_line_t2_right_icon_t2

0x0001,

0xfb5e,	// (0x0005227e) list_medium_line_t2_right_icon_t

0xe24b,	// (0x0005096b) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe24b,	// (0x0005096b) bg_sp_fs_ctrlbar_pane

0x9644,	// (0x0004bd64) main_sp_fs_ctrlbar_button_pane_cp01

0x964e,	// (0x0004bd6e) main_sp_fs_ctrlbar_ddmenu_pane

0xdaae,	// (0x000501ce) main_sp_fs_ctrlbar_pane_g1

0x9658,	// (0x0004bd78) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfb63,	// (0x00052283) main_sp_fs_ctrlbar_pane_g

0x9664,	// (0x0004bd84) main_sp_fs_ctrlbar_pane_t1

0x1078,	// (0x00043798) main_sp_fs_ctrlbar_pane

0x109c,	// (0x000437bc) main_sp_fs_listscroll_pane_te_cp01

0x10bc,	// (0x000437dc) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x10bc,	// (0x000437dc) popup_sp_fs_action_menu_pane_cp01

0xa615,	// (0x0004cd35) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa615,	// (0x0004cd35) bg_sp_fs_highlight_list_pane_cp01

0xb13c,	// (0x0004d85c) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xb13c,	// (0x0004d85c) sp_fs_action_menu_list_gene_pane_g1

0x9689,	// (0x0004bda9) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x9689,	// (0x0004bda9) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfb6d,	// (0x0005228d) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfb6d,	// (0x0005228d) sp_fs_action_menu_list_gene_pane_g

0xb14b,	// (0x0004d86b) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xb14b,	// (0x0004d86b) sp_fs_action_menu_list_gene_pane_t1

0xb163,	// (0x0004d883) sp_fs_action_menu_list_gene_pane_ParamLimits

0xb163,	// (0x0004d883) sp_fs_action_menu_list_gene_pane

0x9696,	// (0x0004bdb6) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x9696,	// (0x0004bdb6) popup_sp_fs_action_menu_bg_pane

0xb180,	// (0x0004d8a0) sp_fs_action_menu_list_pane_ParamLimits

0xb180,	// (0x0004d8a0) sp_fs_action_menu_list_pane

0x96a4,	// (0x0004bdc4) sp_fs_scroll_pane_cp01_ParamLimits

0x96a4,	// (0x0004bdc4) sp_fs_scroll_pane_cp01

0x10d6,	// (0x000437f6) list_medium_line_plain_t2_t1

0x10e6,	// (0x00043806) list_medium_line_plain_t2_t2

0x0001,

0xfb72,	// (0x00052292) list_medium_line_plain_t2_t

0x10f6,	// (0x00043816) list_medium_line_plain_t3_t1

0x1106,	// (0x00043826) list_medium_line_plain_t3_t2

0x1114,	// (0x00043834) list_medium_line_plain_t3_t3

0x0002,

0xfb77,	// (0x00052297) list_medium_line_plain_t3_t

0xa735,	// (0x0004ce55) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa735,	// (0x0004ce55) list_medium_line_x2_t2_g2_g1

0xa74d,	// (0x0004ce6d) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa74d,	// (0x0004ce6d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x00051985) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x00051985) list_medium_line_x2_t2_g2_g

0xa863,	// (0x0004cf83) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa863,	// (0x0004cf83) list_medium_line_x2_t2_g2_t1

0xa76e,	// (0x0004ce8e) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa76e,	// (0x0004ce8e) list_medium_line_x2_t2_g2_t2

0x0001,

0xfb7e,	// (0x0005229e) list_medium_line_x2_t2_g2_t_ParamLimits

0xfb7e,	// (0x0005229e) list_medium_line_x2_t2_g2_t

0xa735,	// (0x0004ce55) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa735,	// (0x0004ce55) list_medium_line_x2_t4_g2_g1

0xb19e,	// (0x0004d8be) list_medium_line_x2_t4_g2_g2_ParamLimits

0xb19e,	// (0x0004d8be) list_medium_line_x2_t4_g2_g2

0x0001,

0xfb83,	// (0x000522a3) list_medium_line_x2_t4_g2_g_ParamLimits

0xfb83,	// (0x000522a3) list_medium_line_x2_t4_g2_g

0x1122,	// (0x00043842) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1122,	// (0x00043842) list_medium_line_x2_t4_g2_t1

0x1139,	// (0x00043859) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1139,	// (0x00043859) list_medium_line_x2_t4_g2_t2

0x114e,	// (0x0004386e) list_medium_line_x2_t4_g2_t3_ParamLimits

0x114e,	// (0x0004386e) list_medium_line_x2_t4_g2_t3

0xa76e,	// (0x0004ce8e) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa76e,	// (0x0004ce8e) list_medium_line_x2_t4_g2_t4

0x0003,

0xfb88,	// (0x000522a8) list_medium_line_x2_t4_g2_t_ParamLimits

0xfb88,	// (0x000522a8) list_medium_line_x2_t4_g2_t

0xb1b0,	// (0x0004d8d0) list_medium_line_t3_right_iconx2_g1

0xb134,	// (0x0004d854) list_medium_line_t3_right_iconx2_g2

0x1160,	// (0x00043880) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfb91,	// (0x000522b1) list_medium_line_t3_right_iconx2_g

0x116a,	// (0x0004388a) list_medium_line_t3_right_iconx2_t1

0x117a,	// (0x0004389a) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfb98,	// (0x000522b8) list_medium_line_t3_right_iconx2_t

0xa735,	// (0x0004ce55) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa735,	// (0x0004ce55) list_medium_line_x3_t4_g4_g1

0xa741,	// (0x0004ce61) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa741,	// (0x0004ce61) list_medium_line_x3_t4_g4_g2

0xa7b7,	// (0x0004ced7) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa7b7,	// (0x0004ced7) list_medium_line_x3_t4_g4_g3

0xb1b8,	// (0x0004d8d8) list_medium_line_x3_t4_g4_g4_ParamLimits

0xb1b8,	// (0x0004d8d8) list_medium_line_x3_t4_g4_g4

0x0003,

0xfb9d,	// (0x000522bd) list_medium_line_x3_t4_g4_g_ParamLimits

0xfb9d,	// (0x000522bd) list_medium_line_x3_t4_g4_g

0x1188,	// (0x000438a8) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1188,	// (0x000438a8) list_medium_line_x3_t4_g4_t1

0x119f,	// (0x000438bf) list_medium_line_x3_t4_g4_t2_ParamLimits

0x119f,	// (0x000438bf) list_medium_line_x3_t4_g4_t2

0xa878,	// (0x0004cf98) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa878,	// (0x0004cf98) list_medium_line_x3_t4_g4_t3

0xb1c4,	// (0x0004d8e4) list_medium_line_x3_t4_g4_t4_ParamLimits

0xb1c4,	// (0x0004d8e4) list_medium_line_x3_t4_g4_t4

0x0003,

0xfba6,	// (0x000522c6) list_medium_line_x3_t4_g4_t_ParamLimits

0xfba6,	// (0x000522c6) list_medium_line_x3_t4_g4_t

0x11ba,	// (0x000438da) list_single_dyc_row_text_pane_t1_ParamLimits

0x11ba,	// (0x000438da) list_single_dyc_row_text_pane_t1

0x1203,	// (0x00043923) list_single_dyc_row_text_pane_t2_ParamLimits

0x1203,	// (0x00043923) list_single_dyc_row_text_pane_t2

0xb1e1,	// (0x0004d901) list_single_dyc_row_text_pane_t3_ParamLimits

0xb1e1,	// (0x0004d901) list_single_dyc_row_text_pane_t3

0x0002,

0xfbaf,	// (0x000522cf) list_single_dyc_row_text_pane_t_ParamLimits

0xfbaf,	// (0x000522cf) list_single_dyc_row_text_pane_t

0xb1f3,	// (0x0004d913) list_single_dyc_row_pane_g1_ParamLimits

0xb1f3,	// (0x0004d913) list_single_dyc_row_pane_g1

0xb1ff,	// (0x0004d91f) list_single_dyc_row_pane_g2_ParamLimits

0xb1ff,	// (0x0004d91f) list_single_dyc_row_pane_g2

0xb20b,	// (0x0004d92b) list_single_dyc_row_pane_g3_ParamLimits

0xb20b,	// (0x0004d92b) list_single_dyc_row_pane_g3

0xb217,	// (0x0004d937) list_single_dyc_row_pane_g4_ParamLimits

0xb217,	// (0x0004d937) list_single_dyc_row_pane_g4

0x0003,

0xfbb6,	// (0x000522d6) list_single_dyc_row_pane_g_ParamLimits

0xfbb6,	// (0x000522d6) list_single_dyc_row_pane_g

0xb223,	// (0x0004d943) list_single_dyc_row_text_pane_ParamLimits

0xb223,	// (0x0004d943) list_single_dyc_row_text_pane

0xa59d,	// (0x0004ccbd) bg_sp_fs_scroll_pane

0x96ca,	// (0x0004bdea) thumb_sp_fs_scroll_pane

0xae69,	// (0x0004d589) list_medium_line_g1_ParamLimits

0xae69,	// (0x0004d589) list_medium_line_g1

0xb242,	// (0x0004d962) list_medium_line_t1_ParamLimits

0xb242,	// (0x0004d962) list_medium_line_t1

0xa735,	// (0x0004ce55) list_medium_line_x2_g1_ParamLimits

0xa735,	// (0x0004ce55) list_medium_line_x2_g1

0xa741,	// (0x0004ce61) list_medium_line_x2_g2_ParamLimits

0xa741,	// (0x0004ce61) list_medium_line_x2_g2

0x0001,

0xfbbf,	// (0x000522df) list_medium_line_x2_g_ParamLimits

0xfbbf,	// (0x000522df) list_medium_line_x2_g

0xb257,	// (0x0004d977) list_medium_line_x2_t1_ParamLimits

0xb257,	// (0x0004d977) list_medium_line_x2_t1

0xa735,	// (0x0004ce55) list_medium_line_x3_g1_ParamLimits

0xa735,	// (0x0004ce55) list_medium_line_x3_g1

0xa741,	// (0x0004ce61) list_medium_line_x3_g2_ParamLimits

0xa741,	// (0x0004ce61) list_medium_line_x3_g2

0x0001,

0xfbbf,	// (0x000522df) list_medium_line_x3_g_ParamLimits

0xfbbf,	// (0x000522df) list_medium_line_x3_g

0xb257,	// (0x0004d977) list_medium_line_x3_t1_ParamLimits

0xb257,	// (0x0004d977) list_medium_line_x3_t1

0x96d3,	// (0x0004bdf3) thumb_sp_fs_scroll_pane_g1

0x96dc,	// (0x0004bdfc) thumb_sp_fs_scroll_pane_g2

0x96e5,	// (0x0004be05) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfbc4,	// (0x000522e4) thumb_sp_fs_scroll_pane_g

0x96d3,	// (0x0004bdf3) bg_sp_fs_scroll_pane_g1

0x96dc,	// (0x0004bdfc) bg_sp_fs_scroll_pane_g2

0x96e5,	// (0x0004be05) bg_sp_fs_scroll_pane_g3

0x0002,

0xfbc4,	// (0x000522e4) bg_sp_fs_scroll_pane_g

0xa735,	// (0x0004ce55) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa735,	// (0x0004ce55) list_medium_line_x2_t3_g4_g1

0xa7ab,	// (0x0004cecb) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa7ab,	// (0x0004cecb) list_medium_line_x2_t3_g4_g2

0xa741,	// (0x0004ce61) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa741,	// (0x0004ce61) list_medium_line_x2_t3_g4_g3

0xa74d,	// (0x0004ce6d) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa74d,	// (0x0004ce6d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x00051a01) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x00051a01) list_medium_line_x2_t3_g4_g

0x125d,	// (0x0004397d) list_medium_line_x2_t3_g4_t1_ParamLimits

0x125d,	// (0x0004397d) list_medium_line_x2_t3_g4_t1

0x1277,	// (0x00043997) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1277,	// (0x00043997) list_medium_line_x2_t3_g4_t2

0xa76e,	// (0x0004ce8e) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa76e,	// (0x0004ce8e) list_medium_line_x2_t3_g4_t3

0x0002,

0xfbcb,	// (0x000522eb) list_medium_line_x2_t3_g4_t_ParamLimits

0xfbcb,	// (0x000522eb) list_medium_line_x2_t3_g4_t

0xae69,	// (0x0004d589) list_medium_line_g2_g1_ParamLimits

0xae69,	// (0x0004d589) list_medium_line_g2_g1

0xae75,	// (0x0004d595) list_medium_line_g2_g2_ParamLimits

0xae75,	// (0x0004d595) list_medium_line_g2_g2

0x0001,

0xf888,	// (0x00051fa8) list_medium_line_g2_g_ParamLimits

0xf888,	// (0x00051fa8) list_medium_line_g2_g

0xb26d,	// (0x0004d98d) list_medium_line_g2_t1_ParamLimits

0xb26d,	// (0x0004d98d) list_medium_line_g2_t1

0xae69,	// (0x0004d589) list_medium_line_t3_g2_g1_ParamLimits

0xae69,	// (0x0004d589) list_medium_line_t3_g2_g1

0xae75,	// (0x0004d595) list_medium_line_t3_g2_g2_ParamLimits

0xae75,	// (0x0004d595) list_medium_line_t3_g2_g2

0x0001,

0xf888,	// (0x00051fa8) list_medium_line_t3_g2_g_ParamLimits

0xf888,	// (0x00051fa8) list_medium_line_t3_g2_g

0x1290,	// (0x000439b0) list_medium_line_t3_g2_t1_ParamLimits

0x1290,	// (0x000439b0) list_medium_line_t3_g2_t1

0x12a7,	// (0x000439c7) list_medium_line_t3_g2_t2_ParamLimits

0x12a7,	// (0x000439c7) list_medium_line_t3_g2_t2

0x12bc,	// (0x000439dc) list_medium_line_t3_g2_t3_ParamLimits

0x12bc,	// (0x000439dc) list_medium_line_t3_g2_t3

0x0002,

0xfbd2,	// (0x000522f2) list_medium_line_t3_g2_t_ParamLimits

0xfbd2,	// (0x000522f2) list_medium_line_t3_g2_t

0xb134,	// (0x0004d854) list_medium_line_right_icon_g1

0xb282,	// (0x0004d9a2) list_medium_line_right_icon_t1

0xae69,	// (0x0004d589) list_medium_line_t2_g1_ParamLimits

0xae69,	// (0x0004d589) list_medium_line_t2_g1

0x12d5,	// (0x000439f5) list_medium_line_t2_t1_ParamLimits

0x12d5,	// (0x000439f5) list_medium_line_t2_t1

0x12ec,	// (0x00043a0c) list_medium_line_t2_t2_ParamLimits

0x12ec,	// (0x00043a0c) list_medium_line_t2_t2

0x0001,

0xfbd9,	// (0x000522f9) list_medium_line_t2_t_ParamLimits

0xfbd9,	// (0x000522f9) list_medium_line_t2_t

0xae69,	// (0x0004d589) list_medium_line_t3_g1_ParamLimits

0xae69,	// (0x0004d589) list_medium_line_t3_g1

0x1300,	// (0x00043a20) list_medium_line_t3_t1_ParamLimits

0x1300,	// (0x00043a20) list_medium_line_t3_t1

0x1317,	// (0x00043a37) list_medium_line_t3_t2_ParamLimits

0x1317,	// (0x00043a37) list_medium_line_t3_t2

0x132c,	// (0x00043a4c) list_medium_line_t3_t3_ParamLimits

0x132c,	// (0x00043a4c) list_medium_line_t3_t3

0x0002,

0xfbde,	// (0x000522fe) list_medium_line_t3_t_ParamLimits

0xfbde,	// (0x000522fe) list_medium_line_t3_t

0xae69,	// (0x0004d589) list_medium_line_g3_g1_ParamLimits

0xae69,	// (0x0004d589) list_medium_line_g3_g1

0xb290,	// (0x0004d9b0) list_medium_line_g3_g2_ParamLimits

0xb290,	// (0x0004d9b0) list_medium_line_g3_g2

0xae75,	// (0x0004d595) list_medium_line_g3_g3_ParamLimits

0xae75,	// (0x0004d595) list_medium_line_g3_g3

0x0002,

0xfbe5,	// (0x00052305) list_medium_line_g3_g_ParamLimits

0xfbe5,	// (0x00052305) list_medium_line_g3_g

0xb29c,	// (0x0004d9bc) list_medium_line_g3_t1_ParamLimits

0xb29c,	// (0x0004d9bc) list_medium_line_g3_t1

0xae69,	// (0x0004d589) list_medium_line_t2_g3_g1_ParamLimits

0xae69,	// (0x0004d589) list_medium_line_t2_g3_g1

0xb290,	// (0x0004d9b0) list_medium_line_t2_g3_g2_ParamLimits

0xb290,	// (0x0004d9b0) list_medium_line_t2_g3_g2

0xae75,	// (0x0004d595) list_medium_line_t2_g3_g3_ParamLimits

0xae75,	// (0x0004d595) list_medium_line_t2_g3_g3

0x0002,

0xfbe5,	// (0x00052305) list_medium_line_t2_g3_g_ParamLimits

0xfbe5,	// (0x00052305) list_medium_line_t2_g3_g

0x133e,	// (0x00043a5e) list_medium_line_t2_g3_t1_ParamLimits

0x133e,	// (0x00043a5e) list_medium_line_t2_g3_t1

0x1358,	// (0x00043a78) list_medium_line_t2_g3_t2_ParamLimits

0x1358,	// (0x00043a78) list_medium_line_t2_g3_t2

0x0001,

0xfbec,	// (0x0005230c) list_medium_line_t2_g3_t_ParamLimits

0xfbec,	// (0x0005230c) list_medium_line_t2_g3_t

0xae69,	// (0x0004d589) list_medium_line_t3_g3_g1_ParamLimits

0xae69,	// (0x0004d589) list_medium_line_t3_g3_g1

0xb290,	// (0x0004d9b0) list_medium_line_t3_g3_g2_ParamLimits

0xb290,	// (0x0004d9b0) list_medium_line_t3_g3_g2

0xae75,	// (0x0004d595) list_medium_line_t3_g3_g3_ParamLimits

0xae75,	// (0x0004d595) list_medium_line_t3_g3_g3

0x0002,

0xfbe5,	// (0x00052305) list_medium_line_t3_g3_g_ParamLimits

0xfbe5,	// (0x00052305) list_medium_line_t3_g3_g

0x1373,	// (0x00043a93) list_medium_line_t3_g3_t1_ParamLimits

0x1373,	// (0x00043a93) list_medium_line_t3_g3_t1

0x1387,	// (0x00043aa7) list_medium_line_t3_g3_t2_ParamLimits

0x1387,	// (0x00043aa7) list_medium_line_t3_g3_t2

0x1399,	// (0x00043ab9) list_medium_line_t3_g3_t3_ParamLimits

0x1399,	// (0x00043ab9) list_medium_line_t3_g3_t3

0x0002,

0xfbf1,	// (0x00052311) list_medium_line_t3_g3_t_ParamLimits

0xfbf1,	// (0x00052311) list_medium_line_t3_g3_t

0xb1b0,	// (0x0004d8d0) list_medium_line_right_iconx2_g1

0xb134,	// (0x0004d854) list_medium_line_right_iconx2_g2

0x0001,

0xfbf8,	// (0x00052318) list_medium_line_right_iconx2_g

0xb2b1,	// (0x0004d9d1) list_medium_line_right_iconx2_t1

0xb1b0,	// (0x0004d8d0) list_medium_line_t2_right_iconx2_g1

0xb134,	// (0x0004d854) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfbf8,	// (0x00052318) list_medium_line_t2_right_iconx2_g

0x13ad,	// (0x00043acd) list_medium_line_t2_right_iconx2_t1

0x13bd,	// (0x00043add) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbfd,	// (0x0005231d) list_medium_line_t2_right_iconx2_t

0xb2bf,	// (0x0004d9df) list_medium_line_x4_t4_t1

0x13cf,	// (0x00043aef) list_medium_line_x4_t4_t2

0x13df,	// (0x00043aff) list_medium_line_x4_t4_t3

0x13ef,	// (0x00043b0f) list_medium_line_x4_t4_t4

0x0003,

0xfc02,	// (0x00052322) list_medium_line_x4_t4_t

0x9731,	// (0x0004be51) tport_appsw_pane_ParamLimits

0x9731,	// (0x0004be51) tport_appsw_pane

0x9742,	// (0x0004be62) tport_contact_pane_ParamLimits

0x9742,	// (0x0004be62) tport_contact_pane

0x975b,	// (0x0004be7b) tport_listscroll_pane_ParamLimits

0x975b,	// (0x0004be7b) tport_listscroll_pane

0x9776,	// (0x0004be96) cell_tport_appsw_pane_ParamLimits

0x9776,	// (0x0004be96) cell_tport_appsw_pane

0xf0cf,	// (0x000517ef) tport_appsw_pane_g1_ParamLimits

0xf0cf,	// (0x000517ef) tport_appsw_pane_g1

0x97b6,	// (0x0004bed6) tport_contact_pane_g1

0x97bf,	// (0x0004bedf) tport_contact_pane_t1

0x97cd,	// (0x0004beed) tport_contact_pane_t2

0x0001,

0xfc0b,	// (0x0005232b) tport_contact_pane_t

0x97db,	// (0x0004befb) list_tport_pane

0x97e4,	// (0x0004bf04) scroll_pane_cp_030

0x97f5,	// (0x0004bf15) cell_tport_appsw_pane_g1

0x9805,	// (0x0004bf25) cell_tport_appsw_pane_t1

0xa59d,	// (0x0004ccbd) grid_highlight_pane_cp019

0x9813,	// (0x0004bf33) list_tport_double_graphic_pane_ParamLimits

0x9813,	// (0x0004bf33) list_tport_double_graphic_pane

0xa615,	// (0x0004cd35) list_highlight_pane_cp023_ParamLimits

0xa615,	// (0x0004cd35) list_highlight_pane_cp023

0x9820,	// (0x0004bf40) list_tport_double_graphic_pane_g1_ParamLimits

0x9820,	// (0x0004bf40) list_tport_double_graphic_pane_g1

0x982d,	// (0x0004bf4d) list_tport_double_graphic_pane_t1_ParamLimits

0x982d,	// (0x0004bf4d) list_tport_double_graphic_pane_t1

0x9842,	// (0x0004bf62) list_tport_double_graphic_pane_t2_ParamLimits

0x9842,	// (0x0004bf62) list_tport_double_graphic_pane_t2

0x0001,

0xfc17,	// (0x00052337) list_tport_double_graphic_pane_t_ParamLimits

0xfc17,	// (0x00052337) list_tport_double_graphic_pane_t

0xa59d,	// (0x0004ccbd) main_cale_note_pane

0x6ae7,	// (0x00049207) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6ae7,	// (0x00049207) cell_vitu2_function_top_wide_pane_cp01

0x8e1f,	// (0x0004b53f) wait_bar_pane_cp05_ParamLimits

0xa59d,	// (0x0004ccbd) listscroll_cmail_pane

0x985c,	// (0x0004bf7c) list_cmail_pane

0x987d,	// (0x0004bf9d) list_cmail_body_pane

0x9892,	// (0x0004bfb2) list_single_cmail_header_caption_pane

0x98ab,	// (0x0004bfcb) list_single_cmail_header_detail_pane_ParamLimits

0x98ab,	// (0x0004bfcb) list_single_cmail_header_detail_pane

0x98d4,	// (0x0004bff4) list_single_cmail_header_caption_pane_t1

0x13ff,	// (0x00043b1f) list_single_cmail_header_detail_pane_g1_ParamLimits

0x13ff,	// (0x00043b1f) list_single_cmail_header_detail_pane_g1

0xb2cd,	// (0x0004d9ed) list_single_cmail_header_detail_pane_g2_ParamLimits

0xb2cd,	// (0x0004d9ed) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc1c,	// (0x0005233c) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc1c,	// (0x0005233c) list_single_cmail_header_detail_pane_g

0xb2d9,	// (0x0004d9f9) list_single_cmail_header_detail_pane_t1_ParamLimits

0xb2d9,	// (0x0004d9f9) list_single_cmail_header_detail_pane_t1

0xb30b,	// (0x0004da2b) list_single_cmail_header_editor_pane_bg_ParamLimits

0xb30b,	// (0x0004da2b) list_single_cmail_header_editor_pane_bg

0x98fa,	// (0x0004c01a) list_cmail_body_pane_g1

0x9903,	// (0x0004c023) list_cmail_body_pane_t1

0x6bb9,	// (0x000492d9) list_single_cmail_header_editor_pane_bg_g1

0xc7ab,	// (0x0004eecb) list_single_cmail_header_editor_pane_bg_g1_copy1

0x6bc9,	// (0x000492e9) list_single_cmail_header_editor_pane_bg_g1_copy2

0x6bc1,	// (0x000492e1) list_single_cmail_header_editor_pane_bg_g1_copy3

0x7556,	// (0x00049c76) list_single_cmail_header_editor_pane_bg_g1_copy4

0x6be9,	// (0x00049309) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x6bd9,	// (0x000492f9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x6be1,	// (0x00049301) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc78b,	// (0x0004eeab) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9911,	// (0x0004c031) calenote_gesture_pane_ParamLimits

0x9911,	// (0x0004c031) calenote_gesture_pane

0x9931,	// (0x0004c051) calenote_window_pane_ParamLimits

0x9931,	// (0x0004c051) calenote_window_pane

0x994d,	// (0x0004c06d) popup_note_window_cp01

0x9956,	// (0x0004c076) calenote_swipe_1_pane_ParamLimits

0x9956,	// (0x0004c076) calenote_swipe_1_pane

0x952e,	// (0x0004bc4e) calenote_swipe_2_pane_ParamLimits

0x952e,	// (0x0004bc4e) calenote_swipe_2_pane

0x9465,	// (0x0004bb85) calenote_swipe_1_pane_g1_ParamLimits

0x9465,	// (0x0004bb85) calenote_swipe_1_pane_g1

0x9472,	// (0x0004bb92) calenote_swipe_1_pane_g2_ParamLimits

0x9472,	// (0x0004bb92) calenote_swipe_1_pane_g2

0x0001,

0xfb46,	// (0x00052266) calenote_swipe_1_pane_g_ParamLimits

0xfb46,	// (0x00052266) calenote_swipe_1_pane_g

0x9974,	// (0x0004c094) calenote_swipe_1_pane_t1_ParamLimits

0x9974,	// (0x0004c094) calenote_swipe_1_pane_t1

0x9465,	// (0x0004bb85) calenote_swipe_2_pane_g1_ParamLimits

0x9465,	// (0x0004bb85) calenote_swipe_2_pane_g1

0x9993,	// (0x0004c0b3) calenote_swipe_2_pane_g2_ParamLimits

0x9993,	// (0x0004c0b3) calenote_swipe_2_pane_g2

0x0001,

0xfc28,	// (0x00052348) calenote_swipe_2_pane_g_ParamLimits

0xfc28,	// (0x00052348) calenote_swipe_2_pane_g

0x999f,	// (0x0004c0bf) calenote_swipe_2_pane_t1_ParamLimits

0x999f,	// (0x0004c0bf) calenote_swipe_2_pane_t1

0xa59d,	// (0x0004ccbd) main_mup_navstr_pane

0x573e,	// (0x00047e5e) main_mup3_pane_t7_ParamLimits

0x573e,	// (0x00047e5e) main_mup3_pane_t7

0xab57,	// (0x0004d277) main_mp4_pane_g6_ParamLimits

0xab57,	// (0x0004d277) main_mp4_pane_g6

0xacfb,	// (0x0004d41b) main_image3_pane_t4_ParamLimits

0xacfb,	// (0x0004d41b) main_image3_pane_t4

0x99c6,	// (0x0004c0e6) popup_navstr_preview_pane_ParamLimits

0x99c6,	// (0x0004c0e6) popup_navstr_preview_pane

0x99da,	// (0x0004c0fa) scroll_navstr_pane_ParamLimits

0x99da,	// (0x0004c0fa) scroll_navstr_pane

0xa59d,	// (0x0004ccbd) bg_popup_preview_window_pane_cp04

0x99ee,	// (0x0004c10e) popup_navstr_preview_pane_t1

0x99fc,	// (0x0004c11c) scroll_navstr_pane_g1_ParamLimits

0x99fc,	// (0x0004c11c) scroll_navstr_pane_g1

0x9a10,	// (0x0004c130) scroll_navstr_pane_t1_ParamLimits

0x9a10,	// (0x0004c130) scroll_navstr_pane_t1

0x996b,	// (0x0004c08b) bg_button_pane_cp014

0x996b,	// (0x0004c08b) bg_button_pane_cp030

0x0ffc,	// (0x0004371c) list_double_fisheye_pane_g4_ParamLimits

0x0ffc,	// (0x0004371c) list_double_fisheye_pane_g4

0x1008,	// (0x00043728) list_double_fisheye_pane_g5_ParamLimits

0x1008,	// (0x00043728) list_double_fisheye_pane_g5

0x986e,	// (0x0004bf8e) sp_fs_scroll_pane_cp03

0xdaae,	// (0x000501ce) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x9658,	// (0x0004bd78) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfb63,	// (0x00052283) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x9664,	// (0x0004bd84) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9864,	// (0x0004bf84) sp_fs_scroll_pane_cp02

0xc4af,	// (0x0004ebcf) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc4af,	// (0x0004ebcf) popup_sp_fs_calendar_preview_list_single_pane

0xa59d,	// (0x0004ccbd) main_cam6_pano_pane

0xa615,	// (0x0004cd35) main_mup3_pane_ParamLimits

0xa59d,	// (0x0004ccbd) main_phacti_pane

0x8cf2,	// (0x0004b412) bg_button_pane_cp11

0x8d0c,	// (0x0004b42c) main_mobtv_info_pane_g2_ParamLimits

0x8d0c,	// (0x0004b42c) main_mobtv_info_pane_g2

0x0001,

0xfac3,	// (0x000521e3) main_mobtv_info_pane_g_ParamLimits

0xfac3,	// (0x000521e3) main_mobtv_info_pane_g

0x8f8f,	// (0x0004b6af) sc_clock_pane_t5_ParamLimits

0x8f8f,	// (0x0004b6af) sc_clock_pane_t5

0x917a,	// (0x0004b89a) main_radioblah_pane_g1_ParamLimits

0x91c0,	// (0x0004b8e0) main_radioblah_pane_t3_ParamLimits

0x91c0,	// (0x0004b8e0) main_radioblah_pane_t3

0x91d8,	// (0x0004b8f8) main_radioblah_pane_t4_ParamLimits

0x91d8,	// (0x0004b8f8) main_radioblah_pane_t4

0x9206,	// (0x0004b926) main_radioblah_text_pane_ParamLimits

0x9206,	// (0x0004b926) main_radioblah_text_pane

0x9218,	// (0x0004b938) main_radioblah_info_pane_g1_ParamLimits

0x92ed,	// (0x0004ba0d) main_radioblah_info_pane_t4_ParamLimits

0x92ed,	// (0x0004ba0d) main_radioblah_info_pane_t4

0xa615,	// (0x0004cd35) main_sp_fs_calendar_pane

0x9a26,	// (0x0004c146) main_phacti_pane_g1

0x9a37,	// (0x0004c157) phacti_note_pane_ParamLimits

0x9a37,	// (0x0004c157) phacti_note_pane

0x9a4b,	// (0x0004c16b) phacti_term_pane_ParamLimits

0x9a4b,	// (0x0004c16b) phacti_term_pane

0x9a60,	// (0x0004c180) phacti_note_pane_t1_ParamLimits

0x9a60,	// (0x0004c180) phacti_note_pane_t1

0xb31d,	// (0x0004da3d) phacti_term_pane_g1

0xb325,	// (0x0004da45) phacti_term_pane_t1_ParamLimits

0xb325,	// (0x0004da45) phacti_term_pane_t1

0x9a77,	// (0x0004c197) popup_sp_fs_calendar_preview_list_single_pane_g1

0x9a7f,	// (0x0004c19f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc32,	// (0x00052352) popup_sp_fs_calendar_preview_list_single_pane_g

0x9a87,	// (0x0004c1a7) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x9a87,	// (0x0004c1a7) popup_sp_fs_calendar_preview_list_single_pane_t1

0x9a9d,	// (0x0004c1bd) aid_popup_sp_fs_bg_corner_pane

0xe694,	// (0x00050db4) popup_sp_fs_calendar_preview_bg_pane_g1

0xa59d,	// (0x0004ccbd) popup_sp_fs_calendar_preview_bg_pane

0x9aa5,	// (0x0004c1c5) popup_sp_fs_calendar_preview_list_pane

0xa615,	// (0x0004cd35) bg_main_sp_fs_cale_pane_ParamLimits

0xa615,	// (0x0004cd35) bg_main_sp_fs_cale_pane

0xb34f,	// (0x0004da6f) listscroll_cale_mrui_pane_ParamLimits

0xb34f,	// (0x0004da6f) listscroll_cale_mrui_pane

0xb363,	// (0x0004da83) listscroll_sp_fs_schedule_track_pane

0xb36c,	// (0x0004da8c) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xb36c,	// (0x0004da8c) main_sp_fs_ctrlbar_pane_cp01

0xb37d,	// (0x0004da9d) main_sp_fs_ribbon_pane

0xb385,	// (0x0004daa5) popup_sp_fs_cale_preview_window

0x9af4,	// (0x0004c214) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9af4,	// (0x0004c214) list_single_sp_fs_schedule_track_pane

0xa615,	// (0x0004cd35) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa615,	// (0x0004cd35) bg_sp_fs_highlight_list_pane_cp03

0x9b09,	// (0x0004c229) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9b09,	// (0x0004c229) list_single_sp_fs_schedule_track_pane_g1

0x9b15,	// (0x0004c235) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9b15,	// (0x0004c235) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc37,	// (0x00052357) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc37,	// (0x00052357) list_single_sp_fs_schedule_track_pane_g

0x9b21,	// (0x0004c241) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9b21,	// (0x0004c241) list_single_sp_fs_schedule_track_pane_t1

0x9b3b,	// (0x0004c25b) sp_fs_schedule_track_pane_ParamLimits

0x9b3b,	// (0x0004c25b) sp_fs_schedule_track_pane

0xb397,	// (0x0004dab7) sp_fs_schedule_track_pane_g1

0xb39f,	// (0x0004dabf) sp_fs_schedule_track_pane_g2

0xb3a7,	// (0x0004dac7) sp_fs_schedule_track_pane_g3

0xb3af,	// (0x0004dacf) sp_fs_schedule_track_pane_g4

0xb3b7,	// (0x0004dad7) sp_fs_schedule_track_pane_g5

0x0004,

0xfc3c,	// (0x0005235c) sp_fs_schedule_track_pane_g

0x6bb9,	// (0x000492d9) bg_sp_fs_schedule_viewer_highlight_g1

0xc7ab,	// (0x0004eecb) bg_sp_fs_schedule_viewer_highlight_g2

0x6bc1,	// (0x000492e1) bg_sp_fs_schedule_viewer_highlight_g3

0x6bc9,	// (0x000492e9) bg_sp_fs_schedule_viewer_highlight_g4

0x7556,	// (0x00049c76) bg_sp_fs_schedule_viewer_highlight_g5

0x6bd9,	// (0x000492f9) bg_sp_fs_schedule_viewer_highlight_g6

0x6be1,	// (0x00049301) bg_sp_fs_schedule_viewer_highlight_g7

0x6be9,	// (0x00049309) bg_sp_fs_schedule_viewer_highlight_g8

0xc78b,	// (0x0004eeab) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc47,	// (0x00052367) bg_sp_fs_schedule_viewer_highlight_g

0xa59d,	// (0x0004ccbd) bg_main_sp_fs_ribbon_pane

0x9b4c,	// (0x0004c26c) main_sp_fs_ribbon_pane_g1

0xb3bf,	// (0x0004dadf) main_sp_fs_ribbon_pane_t1

0x9b55,	// (0x0004c275) main_sp_fs_ribbon_pane_t2

0xb3ce,	// (0x0004daee) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc5a,	// (0x0005237a) main_sp_fs_ribbon_pane_t

0xb3dd,	// (0x0004dafd) main_sp_fs_ribbon_scheduler_pane

0xb3e5,	// (0x0004db05) bg_main_sp_fs_ribbon_pane_g1

0xb3ee,	// (0x0004db0e) bg_main_sp_fs_ribbon_pane_g2

0xb3f7,	// (0x0004db17) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc61,	// (0x00052381) bg_main_sp_fs_ribbon_pane_g

0xb3ff,	// (0x0004db1f) main_sp_fs_ribbon_scheduler_pane_g1

0xb408,	// (0x0004db28) main_sp_fs_ribbon_scheduler_pane_g2

0xb411,	// (0x0004db31) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc68,	// (0x00052388) main_sp_fs_ribbon_scheduler_pane_g

0xb41a,	// (0x0004db3a) list_cale_mrui_pane

0x9b64,	// (0x0004c284) sp_fs_scroll_pane_cp07_ParamLimits

0x9b64,	// (0x0004c284) sp_fs_scroll_pane_cp07

0x9b78,	// (0x0004c298) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9b78,	// (0x0004c298) bg_sp_fs_schedule_viewer_highlight

0xb423,	// (0x0004db43) list_single_sp_fs_schedule_track_pane_cp01

0xb42b,	// (0x0004db4b) list_sp_fs_schedule_track_pane

0xb433,	// (0x0004db53) sp_fs_scroll_pane_cp06_ParamLimits

0xb433,	// (0x0004db53) sp_fs_scroll_pane_cp06

0xe694,	// (0x00050db4) bgmain_sp_fs_calendar_pane_g1

0x143d,	// (0x00043b5d) list_single_cale_mrui_pane_ParamLimits

0x143d,	// (0x00043b5d) list_single_cale_mrui_pane

0xb445,	// (0x0004db65) list_single_cale_mrui_row_pane_ParamLimits

0xb445,	// (0x0004db65) list_single_cale_mrui_row_pane

0xb452,	// (0x0004db72) list_single_cale_mrui_row_pane_g1_ParamLimits

0xb452,	// (0x0004db72) list_single_cale_mrui_row_pane_g1

0xb497,	// (0x0004dbb7) list_single_cale_mrui_row_pane_t1_ParamLimits

0xb497,	// (0x0004dbb7) list_single_cale_mrui_row_pane_t1

0x145f,	// (0x00043b7f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x145f,	// (0x00043b7f) list_single_cale_mrui_row_pane_t2

0xb4a9,	// (0x0004dbc9) list_single_cale_mrui_row_pane_t3_ParamLimits

0xb4a9,	// (0x0004dbc9) list_single_cale_mrui_row_pane_t3

0xb4d8,	// (0x0004dbf8) list_single_cale_mrui_row_pane_t4_ParamLimits

0xb4d8,	// (0x0004dbf8) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc76,	// (0x00052396) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc76,	// (0x00052396) list_single_cale_mrui_row_pane_t

0x14c7,	// (0x00043be7) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x14c7,	// (0x00043be7) list_single_cmail_header_editor_pane_bg_cp01

0x14ed,	// (0x00043c0d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x14ed,	// (0x00043c0d) list_single_cmail_header_editor_pane_bg_cp02

0x9b88,	// (0x0004c2a8) main_radioblah_text_pane_t1_ParamLimits

0x9b88,	// (0x0004c2a8) main_radioblah_text_pane_t1

0xb507,	// (0x0004dc27) cam6_indi_pane_cp01

0xb50f,	// (0x0004dc2f) cam6_mode_pane_cp01

0xb517,	// (0x0004dc37) cam6_pano_pane

0xb520,	// (0x0004dc40) cam6_zoom_pane_cp01

0xb528,	// (0x0004dc48) cam6_pano_image_pane

0xb533,	// (0x0004dc53) cam6_pano_pane_g1

0x8c8b,	// (0x0004b3ab) cam6_pano_pane_g2

0xb53c,	// (0x0004dc5c) cam6_pano_pane_g3

0xb545,	// (0x0004dc65) cam6_pano_pane_g4

0xec3f,	// (0x0005135f) cam6_pano_pane_g5

0xb54e,	// (0x0004dc6e) cam6_pano_pane_g6

0xb558,	// (0x0004dc78) cam6_pano_pane_g7

0xb560,	// (0x0004dc80) cam6_pano_pane_g8

0xb569,	// (0x0004dc89) cam6_pano_pane_g9

0x0008,

0xfc7f,	// (0x0005239f) cam6_pano_pane_g

0xa59d,	// (0x0004ccbd) main_browser_tag_pane

0x99be,	// (0x0004c0de) grid_navstr_albumart_pane

0xb574,	// (0x0004dc94) cell_navstr_albumart_pane_ParamLimits

0xb574,	// (0x0004dc94) cell_navstr_albumart_pane

0xcf84,	// (0x0004f6a4) cell_navstr_albumart_pane_g1

0xe060,	// (0x00050780) cell_navstr_albumart_pane_g2

0xe070,	// (0x00050790) cell_navstr_albumart_pane_g3

0xe068,	// (0x00050788) cell_navstr_albumart_pane_g4

0x0003,

0x0a5a,	// (0x0004317a) cell_navstr_albumart_pane_g

0x9ba3,	// (0x0004c2c3) bt_list_pane_ParamLimits

0x9ba3,	// (0x0004c2c3) bt_list_pane

0x9bb8,	// (0x0004c2d8) bt_list_pane_t1

0x9bc7,	// (0x0004c2e7) bt_list_pane_t2

0x0001,

0xfc92,	// (0x000523b2) bt_list_pane_t

0xa59d,	// (0x0004ccbd) main_cale_prevew_pane

0x9bd6,	// (0x0004c2f6) popup_cale_preview_window_ParamLimits

0x9bd6,	// (0x0004c2f6) popup_cale_preview_window

0xa615,	// (0x0004cd35) bg_popup_preview_window_pane_cp05_ParamLimits

0xa615,	// (0x0004cd35) bg_popup_preview_window_pane_cp05

0xb596,	// (0x0004dcb6) list_cale_preview_pane_ParamLimits

0xb596,	// (0x0004dcb6) list_cale_preview_pane

0x9bed,	// (0x0004c30d) list_double_cale_preview_pane_ParamLimits

0x9bed,	// (0x0004c30d) list_double_cale_preview_pane

0x9bff,	// (0x0004c31f) list_single_cale_preview_pane_ParamLimits

0x9bff,	// (0x0004c31f) list_single_cale_preview_pane

0x9c13,	// (0x0004c333) list_single_cale_preview_pane_g1

0x9c1b,	// (0x0004c33b) list_single_cale_preview_pane_t1_ParamLimits

0x9c1b,	// (0x0004c33b) list_single_cale_preview_pane_t1

0x9c30,	// (0x0004c350) list_double_cale_preview_pane_g1

0x9c38,	// (0x0004c358) list_double_cale_preview_pane_t1_ParamLimits

0x9c38,	// (0x0004c358) list_double_cale_preview_pane_t1

0x9c4d,	// (0x0004c36d) list_double_cale_preview_pane_t2_ParamLimits

0x9c4d,	// (0x0004c36d) list_double_cale_preview_pane_t2

0x0001,

0xfc97,	// (0x000523b7) list_double_cale_preview_pane_t_ParamLimits

0xfc97,	// (0x000523b7) list_double_cale_preview_pane_t

0xa59d,	// (0x0004ccbd) main_ezdial_pane

0xa615,	// (0x0004cd35) main_sp_fs_email_pane_ParamLimits

0x95c1,	// (0x0004bce1) cmail_ddmenu_btn01_pane_ParamLimits

0x95c1,	// (0x0004bce1) cmail_ddmenu_btn01_pane

0x95d4,	// (0x0004bcf4) cmail_ddmenu_btn02_pane_ParamLimits

0x95d4,	// (0x0004bcf4) cmail_ddmenu_btn02_pane

0x962f,	// (0x0004bd4f) cmail_ddmenu_btn03_pane_ParamLimits

0x962f,	// (0x0004bd4f) cmail_ddmenu_btn03_pane

0x1078,	// (0x00043798) main_sp_fs_ctrlbar_pane_ParamLimits

0x109c,	// (0x000437bc) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x987d,	// (0x0004bf9d) list_cmail_body_pane_ParamLimits

0x98e4,	// (0x0004c004) bg_button_pane_cp12

0x98ed,	// (0x0004c00d) list_single_cmail_header_detail_pane_g3_ParamLimits

0x98ed,	// (0x0004c00d) list_single_cmail_header_detail_pane_g3

0x1417,	// (0x00043b37) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1417,	// (0x00043b37) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc23,	// (0x00052343) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc23,	// (0x00052343) list_single_cmail_header_detail_pane_t

0xb33a,	// (0x0004da5a) phacti_term_pane_t2_ParamLimits

0xb33a,	// (0x0004da5a) phacti_term_pane_t2

0x0001,

0xfc2d,	// (0x0005234d) phacti_term_pane_t_ParamLimits

0xfc2d,	// (0x0005234d) phacti_term_pane_t

0xb5a2,	// (0x0004dcc2) aid_size_list_single_double

0x9c65,	// (0x0004c385) popup_ezdial_listscroll_window

0x9c81,	// (0x0004c3a1) popup_number_entry_window_cp01

0xce23,	// (0x0004f543) bg_popup_call_pane_cp09

0xb5ae,	// (0x0004dcce) ezdial_list_pane

0xb5b6,	// (0x0004dcd6) scroll_pane_cp23

0xe24b,	// (0x0005096b) bg_button_pane_cp028_ParamLimits

0xe24b,	// (0x0005096b) bg_button_pane_cp028

0x9c8f,	// (0x0004c3af) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9c8f,	// (0x0004c3af) cmail_ddmenu_btn01_pane_g1

0x9c9e,	// (0x0004c3be) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9c9e,	// (0x0004c3be) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc9c,	// (0x000523bc) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc9c,	// (0x000523bc) cmail_ddmenu_btn01_pane_g

0xb5be,	// (0x0004dcde) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xb5be,	// (0x0004dcde) cmail_ddmenu_btn01_pane_t1

0xe24b,	// (0x0005096b) bg_button_pane_cp029_ParamLimits

0xe24b,	// (0x0005096b) bg_button_pane_cp029

0x9cae,	// (0x0004c3ce) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9cae,	// (0x0004c3ce) cmail_ddmenu_btn02_pane_g1

0x9cc9,	// (0x0004c3e9) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9cc9,	// (0x0004c3e9) cmail_ddmenu_btn02_pane_t1

0xa615,	// (0x0004cd35) bg_button_pane_cp031_ParamLimits

0xa615,	// (0x0004cd35) bg_button_pane_cp031

0x9cae,	// (0x0004c3ce) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9cae,	// (0x0004c3ce) cmail_ddmenu_btn03_pane_g1

0x9cc9,	// (0x0004c3e9) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9cc9,	// (0x0004c3e9) cmail_ddmenu_btn03_pane_t1

0x62fb,	// (0x00048a1b) cell_dialer2_keypad_pane_t1_ParamLimits

0x6315,	// (0x00048a35) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6315,	// (0x00048a35) cell_dialer2_keypad_pane_t1_copy1

0x88a2,	// (0x0004afc2) ncimui_group_button_pane

0xa615,	// (0x0004cd35) main_sp_fs_calendar_pane_ParamLimits

0x9892,	// (0x0004bfb2) list_single_cmail_header_caption_pane_ParamLimits

0x7c5b,	// (0x0004a37b) aid_recal_txt_sm_pane

0xa59d,	// (0x0004ccbd) mian_recal_day_pane

0xb385,	// (0x0004daa5) popup_sp_fs_cale_preview_window_ParamLimits

0xa59d,	// (0x0004ccbd) list_recal_day_pane

0xb5ed,	// (0x0004dd0d) list_single_recal_day_pane_ParamLimits

0xb5ed,	// (0x0004dd0d) list_single_recal_day_pane

0xb5ff,	// (0x0004dd1f) list_single_recal_day_pane_g1_ParamLimits

0xb5ff,	// (0x0004dd1f) list_single_recal_day_pane_g1

0xb60b,	// (0x0004dd2b) list_single_recal_day_pane_g2_ParamLimits

0xb60b,	// (0x0004dd2b) list_single_recal_day_pane_g2

0xb61b,	// (0x0004dd3b) list_single_recal_day_pane_g3_ParamLimits

0xb61b,	// (0x0004dd3b) list_single_recal_day_pane_g3

0x9cf0,	// (0x0004c410) list_single_recal_day_pane_g4_ParamLimits

0x9cf0,	// (0x0004c410) list_single_recal_day_pane_g4

0xb627,	// (0x0004dd47) list_single_recal_day_pane_g5_ParamLimits

0xb627,	// (0x0004dd47) list_single_recal_day_pane_g5

0xb637,	// (0x0004dd57) list_single_recal_day_pane_g6_ParamLimits

0xb637,	// (0x0004dd57) list_single_recal_day_pane_g6

0x0004,

0xfcab,	// (0x000523cb) list_single_recal_day_pane_g_ParamLimits

0xfcab,	// (0x000523cb) list_single_recal_day_pane_g

0xb64e,	// (0x0004dd6e) list_single_recal_day_pane_t1

0xb660,	// (0x0004dd80) list_single_recal_day_pane_t2

0x0001,

0xfcb6,	// (0x000523d6) list_single_recal_day_pane_t

0x9d10,	// (0x0004c430) ncimui_query_button_pane_ParamLimits

0x9d10,	// (0x0004c430) ncimui_query_button_pane

0x9d20,	// (0x0004c440) ncimui_query_button_pane_t1_ParamLimits

0x9d20,	// (0x0004c440) ncimui_query_button_pane_t1

0xb675,	// (0x0004dd95) ncimui_query_button_pane_t2_ParamLimits

0xb675,	// (0x0004dd95) ncimui_query_button_pane_t2

0x0001,

0xfcbb,	// (0x000523db) ncimui_query_button_pane_t_ParamLimits

0xfcbb,	// (0x000523db) ncimui_query_button_pane_t

0x9d33,	// (0x0004c453) query_button_pane_ParamLimits

0x9d33,	// (0x0004c453) query_button_pane

0xa59d,	// (0x0004ccbd) bg_button_pane_cp0028

0xb688,	// (0x0004dda8) query_button_pane_t1

0x43b2,	// (0x00046ad2) main_tport_pane_ParamLimits

0x96ee,	// (0x0004be0e) bg_popup_window_pane_cp01_ParamLimits

0x96ee,	// (0x0004be0e) bg_popup_window_pane_cp01

0x9708,	// (0x0004be28) heading_pane_cp08_ParamLimits

0x9708,	// (0x0004be28) heading_pane_cp08

0x971c,	// (0x0004be3c) heading_pane_cp07_ParamLimits

0x971c,	// (0x0004be3c) heading_pane_cp07

0x97f5,	// (0x0004bf15) cell_tport_appsw_pane_g2

0x0002,

0xfc10,	// (0x00052330) cell_tport_appsw_pane_g

0x0c75,	// (0x00043395) input_candi_list_open_g1

0xc946,	// (0x0004f066) list_cale_time_pane_g6_ParamLimits

0xc946,	// (0x0004f066) list_cale_time_pane_g6

0x517b,	// (0x0004789b) aid_size_touch_calib_1_ParamLimits

0x517b,	// (0x0004789b) aid_size_touch_calib_1

0x5187,	// (0x000478a7) aid_size_touch_calib_2_ParamLimits

0x5187,	// (0x000478a7) aid_size_touch_calib_2

0x519d,	// (0x000478bd) aid_size_touch_calib_3_ParamLimits

0x519d,	// (0x000478bd) aid_size_touch_calib_3

0x51bb,	// (0x000478db) aid_size_touch_calib_4_ParamLimits

0x51bb,	// (0x000478db) aid_size_touch_calib_4

0x51d1,	// (0x000478f1) main_touch_calib_button_group_pane_ParamLimits

0x51d1,	// (0x000478f1) main_touch_calib_button_group_pane

0x51e9,	// (0x00047909) main_touch_calib_pane_g1_ParamLimits

0x51f5,	// (0x00047915) main_touch_calib_pane_g2_ParamLimits

0x5201,	// (0x00047921) main_touch_calib_pane_g3_ParamLimits

0x520d,	// (0x0004792d) main_touch_calib_pane_g4_ParamLimits

0xf64b,	// (0x00051d6b) main_touch_calib_pane_g_ParamLimits

0x5219,	// (0x00047939) main_touch_calib_pane_t1_ParamLimits

0x5233,	// (0x00047953) main_touch_calib_pane_t2_ParamLimits

0x524d,	// (0x0004796d) main_touch_calib_pane_t3_ParamLimits

0x5261,	// (0x00047981) main_touch_calib_pane_t4_ParamLimits

0x5275,	// (0x00047995) main_touch_calib_pane_t5_ParamLimits

0xf654,	// (0x00051d74) main_touch_calib_pane_t_ParamLimits

0xea0f,	// (0x0005112f) list_single_fp_cale_pane_g3_ParamLimits

0xea0f,	// (0x0005112f) list_single_fp_cale_pane_g3

0xa615,	// (0x0004cd35) bg_button_pane_cp012_ParamLimits

0xa615,	// (0x0004cd35) bg_vkb2_func_pane_cp03_ParamLimits

0x750c,	// (0x00049c2c) cell_vitu2_function_top_pane_g1_ParamLimits

0xa615,	// (0x0004cd35) bg_vkb2_func_pane_cp04_ParamLimits

0x8842,	// (0x0004af62) main_ncimui_button_group_pane_ParamLimits

0x8842,	// (0x0004af62) main_ncimui_button_group_pane

0x8890,	// (0x0004afb0) main_ncimui_pane_t3_ParamLimits

0x8890,	// (0x0004afb0) main_ncimui_pane_t3

0x9a2e,	// (0x0004c14e) phacti_button_group_pane

0xb5a2,	// (0x0004dcc2) aid_size_list_single_double_ParamLimits

0x9c65,	// (0x0004c385) popup_ezdial_listscroll_window_ParamLimits

0x9c81,	// (0x0004c3a1) popup_number_entry_window_cp01_ParamLimits

0x9d46,	// (0x0004c466) phacti_button_pane_ParamLimits

0x9d46,	// (0x0004c466) phacti_button_pane

0xa59d,	// (0x0004ccbd) bg_button_pane_cp14

0xb696,	// (0x0004ddb6) phacti_button_pane_t1

0x9d57,	// (0x0004c477) main_touch_calib_button_pane_ParamLimits

0x9d57,	// (0x0004c477) main_touch_calib_button_pane

0xc399,	// (0x0004eab9) bg_button_pane_cp18_ParamLimits

0xc399,	// (0x0004eab9) bg_button_pane_cp18

0xb6a4,	// (0x0004ddc4) main_touch_calib_button_pane_t1_ParamLimits

0xb6a4,	// (0x0004ddc4) main_touch_calib_button_pane_t1

0xb6ba,	// (0x0004ddda) main_touch_calib_button_pane_t2_ParamLimits

0xb6ba,	// (0x0004ddda) main_touch_calib_button_pane_t2

0x0001,

0xfcc0,	// (0x000523e0) main_touch_calib_button_pane_t_ParamLimits

0xfcc0,	// (0x000523e0) main_touch_calib_button_pane_t

0xa59d,	// (0x0004ccbd) cell_ncimui_button_pane

0xa59d,	// (0x0004ccbd) bg_button_pane_cp032

0xb6d8,	// (0x0004ddf8) cell_ncimui_button_pane_t1

0xacdb,	// (0x0004d3fb) image3_infobar_pane_ParamLimits

0xacdb,	// (0x0004d3fb) image3_infobar_pane

0x8fbb,	// (0x0004b6db) fs_bigclock_status_pane_ParamLimits

0x8fbb,	// (0x0004b6db) fs_bigclock_status_pane

0x8fc8,	// (0x0004b6e8) main_fs_bigclock_clock_pane_ParamLimits

0x8fc8,	// (0x0004b6e8) main_fs_bigclock_clock_pane

0x8fdc,	// (0x0004b6fc) main_fs_bigclock_indi_pane_ParamLimits

0x8fdc,	// (0x0004b6fc) main_fs_bigclock_indi_pane

0x8ff4,	// (0x0004b714) main_fs_bigclock_swipe_pane_ParamLimits

0x8ff4,	// (0x0004b714) main_fs_bigclock_swipe_pane

0xa59d,	// (0x0004ccbd) main_fs_clock_dumped_data

0x901a,	// (0x0004b73a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x901a,	// (0x0004b73a) list_single_fs_bigclock_indicator_pane_g1

0x9043,	// (0x0004b763) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x9043,	// (0x0004b763) list_single_fs_bigclock_indicator_pane_g2

0x905d,	// (0x0004b77d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x905d,	// (0x0004b77d) list_single_fs_bigclock_indicator_pane_g3

0x9077,	// (0x0004b797) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x9077,	// (0x0004b797) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfaf7,	// (0x00052217) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfaf7,	// (0x00052217) list_single_fs_bigclock_indicator_pane_g

0x90a0,	// (0x0004b7c0) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x90a0,	// (0x0004b7c0) list_single_fs_bigclock_indicator_pane_t1

0x90c8,	// (0x0004b7e8) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x90c8,	// (0x0004b7e8) list_single_fs_bigclock_indicator_pane_t2

0x90f0,	// (0x0004b810) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x90f0,	// (0x0004b810) list_single_fs_bigclock_indicator_pane_t3

0x9118,	// (0x0004b838) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x9118,	// (0x0004b838) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb02,	// (0x00052222) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb02,	// (0x00052222) list_single_fs_bigclock_indicator_pane_t

0xb6e6,	// (0x0004de06) image3_infobar_fav_pane_ParamLimits

0xb6e6,	// (0x0004de06) image3_infobar_fav_pane

0xb6f6,	// (0x0004de16) image3_infobar_loc_pane_ParamLimits

0xb6f6,	// (0x0004de16) image3_infobar_loc_pane

0xb70a,	// (0x0004de2a) image3_infobar_time_pane_ParamLimits

0xb70a,	// (0x0004de2a) image3_infobar_time_pane

0xe694,	// (0x00050db4) image3_infobar_time_pane_g1

0xb71a,	// (0x0004de3a) image3_infobar_time_pane_t1

0xe694,	// (0x00050db4) image3_infobar_loc_pane_g1

0xb728,	// (0x0004de48) image3_infobar_loc_pane_g2

0x0001,

0xfcc5,	// (0x000523e5) image3_infobar_loc_pane_g

0xb730,	// (0x0004de50) image3_infobar_loc_pane_t1

0xe694,	// (0x00050db4) image3_infobar_fav_pane_g1

0xb73e,	// (0x0004de5e) image3_infobar_fav_pane_g2

0x0001,

0xfcca,	// (0x000523ea) image3_infobar_fav_pane_g

0xb746,	// (0x0004de66) fs_bigclock_status_battery_pane

0xb74f,	// (0x0004de6f) fs_bigclock_status_signal_pane

0xb758,	// (0x0004de78) fs_bigclock_status_title_pane

0xb761,	// (0x0004de81) fs_bigclock_status_signal_pane_g1

0xb76a,	// (0x0004de8a) fs_bigclock_status_signal_pane_g2

0x0001,

0xfccf,	// (0x000523ef) fs_bigclock_status_signal_pane_g

0xb772,	// (0x0004de92) fs_bigclock_status_battery_pane_g1

0xb77b,	// (0x0004de9b) fs_bigclock_status_battery_pane_g2

0x0001,

0xfcd4,	// (0x000523f4) fs_bigclock_status_battery_pane_g

0xb783,	// (0x0004dea3) fs_bigclock_status_title_pane_t1

0xe694,	// (0x00050db4) main_fs_bigclock_clock_pane_g1

0xb791,	// (0x0004deb1) main_fs_bigclock_clock_pane_g2

0xb791,	// (0x0004deb1) main_fs_bigclock_clock_pane_g3

0xb791,	// (0x0004deb1) main_fs_bigclock_clock_pane_g4

0x0003,

0xfcd9,	// (0x000523f9) main_fs_bigclock_clock_pane_g

0xb799,	// (0x0004deb9) main_fs_bigclock_clock_pane_t1

0xb7a7,	// (0x0004dec7) main_fs_bigclock_clock_pane_t2

0x0001,

0xfce2,	// (0x00052402) main_fs_bigclock_clock_pane_t

0xb7b6,	// (0x0004ded6) list_single_fs_bigclock_indicator_pane_ParamLimits

0xb7b6,	// (0x0004ded6) list_single_fs_bigclock_indicator_pane

0x9d6c,	// (0x0004c48c) list_single_fs_bigclock_pane_ParamLimits

0x9d6c,	// (0x0004c48c) list_single_fs_bigclock_pane

0xb7d0,	// (0x0004def0) main_fs_bigclock_indicator_pane_t1

0xb7df,	// (0x0004deff) list_single_fs_bigclock_pane_g1

0xb7e7,	// (0x0004df07) list_single_fs_bigclock_pane_t1

0xe694,	// (0x00050db4) main_fs_bigclock_swipe_pane_g1

0xb82a,	// (0x0004df4a) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfcf3,	// (0x00052413) main_fs_bigclock_swipe_pane_g

0xb832,	// (0x0004df52) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xb832,	// (0x0004df52) main_fs_bigclock_swipe_pane_t1

0x3240,	// (0x00045960) call_type_pane_ParamLimits

0xa59d,	// (0x0004ccbd) main_btmg_pane

0xb47e,	// (0x0004db9e) list_single_cale_mrui_row_pane_g2_ParamLimits

0xb47e,	// (0x0004db9e) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc6f,	// (0x0005238f) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc6f,	// (0x0005238f) list_single_cale_mrui_row_pane_g

0xb5dd,	// (0x0004dcfd) list_recal_vselct_arw_lo_pane

0xb5e5,	// (0x0004dd05) list_recal_vselct_arw_up_pane

0xafb1,	// (0x0004d6d1) list_recal_vselct_pane

0xb84f,	// (0x0004df6f) btmg_button_pane

0x9dd2,	// (0x0004c4f2) main_btmg_pane_g1

0xa59d,	// (0x0004ccbd) bg_button_pane_cp044

0xb859,	// (0x0004df79) btmg_button_pane_t1

0xe243,	// (0x00050963) aid_listscroll_gen

0xa615,	// (0x0004cd35) main_cntbar_detail_pane

0x9854,	// (0x0004bf74) list_cmail_folder_pane

0x986e,	// (0x0004bf8e) sp_fs_scroll_pane_cp03_ParamLimits

0x150d,	// (0x00043c2d) list_single_fs_dyc_pane_cp01_ParamLimits

0x150d,	// (0x00043c2d) list_single_fs_dyc_pane_cp01

0xb867,	// (0x0004df87) aid_size_cmail_indent

0xb870,	// (0x0004df90) list_single_dyc_row_pane_cp01

0x9e08,	// (0x0004c528) cntbar_detail_list_pane_ParamLimits

0x9e08,	// (0x0004c528) cntbar_detail_list_pane

0x9e54,	// (0x0004c574) main_cntbar_detail_cont_pane_ParamLimits

0x9e54,	// (0x0004c574) main_cntbar_detail_cont_pane

0x3234,	// (0x00045954) scroll_pane_cp032_ParamLimits

0x3234,	// (0x00045954) scroll_pane_cp032

0x9e68,	// (0x0004c588) cntbar_detail_list_event_pane_ParamLimits

0x9e68,	// (0x0004c588) cntbar_detail_list_event_pane

0x9e18,	// (0x0004c538) cntbar_detail_list_shct_pane

0xc7f9,	// (0x0004ef19) aid_list_gen

0xb879,	// (0x0004df99) aid_scroll

0xb882,	// (0x0004dfa2) aid_size_touch_scroll_bar

0xb88b,	// (0x0004dfab) aid_list_double

0xb894,	// (0x0004dfb4) aid_list_single

0xb89d,	// (0x0004dfbd) aid_list_single_lg

0xb8a6,	// (0x0004dfc6) aid_list_z_g_a_sm

0xb8ae,	// (0x0004dfce) aid_list_z_g_d

0xb8b6,	// (0x0004dfd6) aid_txt_z_prm

0x1526,	// (0x00043c46) aid_txt_z_prm_cp01

0x1534,	// (0x00043c54) aid_txt_z_sec

0x9e78,	// (0x0004c598) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9e78,	// (0x0004c598) main_cntbar_detail_cont_pane_g1

0x9e8c,	// (0x0004c5ac) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9e8c,	// (0x0004c5ac) main_cntbar_detail_cont_pane_g2

0x0001,

0xfcf8,	// (0x00052418) main_cntbar_detail_cont_pane_g_ParamLimits

0xfcf8,	// (0x00052418) main_cntbar_detail_cont_pane_g

0xb8c4,	// (0x0004dfe4) main_cntbar_detail_cont_pane_t1

0xb8d2,	// (0x0004dff2) main_cntbar_detail_cont_pane_t2

0xb8e0,	// (0x0004e000) main_cntbar_detail_cont_pane_t3

0x0002,

0xfcfd,	// (0x0005241d) main_cntbar_detail_cont_pane_t

0x9e9c,	// (0x0004c5bc) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9e9c,	// (0x0004c5bc) cell_cntbar_detail_list_shct_pane

0xb8ee,	// (0x0004e00e) cntbar_detail_list_shct_pane_g1

0xb8f7,	// (0x0004e017) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd04,	// (0x00052424) cntbar_detail_list_shct_pane_g

0x9eb0,	// (0x0004c5d0) cntbar_detail_list_event_pane_g1_ParamLimits

0x9eb0,	// (0x0004c5d0) cntbar_detail_list_event_pane_g1

0x9ebc,	// (0x0004c5dc) cntbar_detail_list_event_pane_g2_ParamLimits

0x9ebc,	// (0x0004c5dc) cntbar_detail_list_event_pane_g2

0x0005,

0xfd09,	// (0x00052429) cntbar_detail_list_event_pane_g_ParamLimits

0xfd09,	// (0x00052429) cntbar_detail_list_event_pane_g

0x9f28,	// (0x0004c648) cntbar_detail_list_event_pane_t1_ParamLimits

0x9f28,	// (0x0004c648) cntbar_detail_list_event_pane_t1

0x9f3d,	// (0x0004c65d) cntbar_detail_list_event_pane_t2_ParamLimits

0x9f3d,	// (0x0004c65d) cntbar_detail_list_event_pane_t2

0x0002,

0xfd16,	// (0x00052436) cntbar_detail_list_event_pane_t_ParamLimits

0xfd16,	// (0x00052436) cntbar_detail_list_event_pane_t

0xe694,	// (0x00050db4) cell_cntbar_detail_list_shct_pane_g1

0x35a7,	// (0x00045cc7) navi_pane_mv_g3

0xa615,	// (0x0004cd35) main_cntbar_detail_pane_ParamLimits

0xa59d,	// (0x0004ccbd) main_notif_wgt_pane

0xaaf1,	// (0x0004d211) aid_tch_main_mp4_pane_g4

0xacd3,	// (0x0004d3f3) popup_slider_window_cp02

0xb5d3,	// (0x0004dcf3) list_recal_day_event_pane

0x9ddc,	// (0x0004c4fc) cntbar_detail_btn_pane_ParamLimits

0x9ddc,	// (0x0004c4fc) cntbar_detail_btn_pane

0x9df2,	// (0x0004c512) cntbar_detail_btn_pane_cp01_ParamLimits

0x9df2,	// (0x0004c512) cntbar_detail_btn_pane_cp01

0x9e18,	// (0x0004c538) cntbar_detail_list_shct_pane_ParamLimits

0x9e28,	// (0x0004c548) cntbar_detail_pane_g1_ParamLimits

0x9e28,	// (0x0004c548) cntbar_detail_pane_g1

0x9e38,	// (0x0004c558) cntbar_detail_pane_t1_ParamLimits

0x9e38,	// (0x0004c558) cntbar_detail_pane_t1

0x9ec8,	// (0x0004c5e8) cntbar_detail_list_event_pane_g3_ParamLimits

0x9ec8,	// (0x0004c5e8) cntbar_detail_list_event_pane_g3

0x9ee0,	// (0x0004c600) cntbar_detail_list_event_pane_g4_ParamLimits

0x9ee0,	// (0x0004c600) cntbar_detail_list_event_pane_g4

0x9ef8,	// (0x0004c618) cntbar_detail_list_event_pane_g5_ParamLimits

0x9ef8,	// (0x0004c618) cntbar_detail_list_event_pane_g5

0x9f10,	// (0x0004c630) cntbar_detail_list_event_pane_g6_ParamLimits

0x9f10,	// (0x0004c630) cntbar_detail_list_event_pane_g6

0x9f52,	// (0x0004c672) cntbar_detail_list_event_pane_t3_ParamLimits

0x9f52,	// (0x0004c672) cntbar_detail_list_event_pane_t3

0x9f64,	// (0x0004c684) popup_notif_wgt_window_ParamLimits

0x9f64,	// (0x0004c684) popup_notif_wgt_window

0x9f7d,	// (0x0004c69d) popup_submenu_window_cp01_ParamLimits

0x9f7d,	// (0x0004c69d) popup_submenu_window_cp01

0xce23,	// (0x0004f543) bg_popup_window_pane_cp10

0xb900,	// (0x0004e020) listscroll_notif_wgt_pane

0xb90a,	// (0x0004e02a) list_notif_wgt_window

0xb913,	// (0x0004e033) scroll_pane_cp033

0xb91c,	// (0x0004e03c) list_notif_wgt_row_pane_ParamLimits

0xb91c,	// (0x0004e03c) list_notif_wgt_row_pane

0xb930,	// (0x0004e050) aid_size_list_notif_wgt_del

0xb939,	// (0x0004e059) list_notif_wgt_row_pane_g1

0xb941,	// (0x0004e061) list_notif_wgt_row_pane_g2

0xb949,	// (0x0004e069) list_notif_wgt_row_pane_g3

0x0002,

0xfd1d,	// (0x0005243d) list_notif_wgt_row_pane_g

0xb952,	// (0x0004e072) list_notif_wgt_row_pane_t1

0xb960,	// (0x0004e080) list_notif_wgt_row_pane_t2

0xb96e,	// (0x0004e08e) list_notif_wgt_row_pane_t3

0x0002,

0xfd24,	// (0x00052444) list_notif_wgt_row_pane_t

0x75ab,	// (0x00049ccb) list_recal_day_event_pane_g1

0xb97c,	// (0x0004e09c) list_recal_day_event_pane_t1

0xa59d,	// (0x0004ccbd) bg_button_pane_cp045

0xb98b,	// (0x0004e0ab) cntbar_detail_btn_pane_t1

0xe24b,	// (0x0005096b) main_callh_pane_ParamLimits

0xe24b,	// (0x0005096b) main_callh_pane

0xa59d,	// (0x0004ccbd) main_coverflow0_pane

0xa59d,	// (0x0004ccbd) main_wgtman_pane

0x9002,	// (0x0004b722) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9002,	// (0x0004b722) main_fs_bigclock_unlock_btn_pane

0x97ed,	// (0x0004bf0d) bg_button_pane_cp16

0x97fd,	// (0x0004bf1d) cell_tport_appsw_pane_g3

0x9f8f,	// (0x0004c6af) cf0_flow_pane_ParamLimits

0x9f8f,	// (0x0004c6af) cf0_flow_pane

0xb999,	// (0x0004e0b9) listscroll_cf0_pane

0xb9a2,	// (0x0004e0c2) main_cf0_pane_g1

0x9fa4,	// (0x0004c6c4) main_cf0_pane_t1_ParamLimits

0x9fa4,	// (0x0004c6c4) main_cf0_pane_t1

0x9fbb,	// (0x0004c6db) main_cf0_pane_t2_ParamLimits

0x9fbb,	// (0x0004c6db) main_cf0_pane_t2

0x0001,

0xfd2b,	// (0x0005244b) main_cf0_pane_t_ParamLimits

0xfd2b,	// (0x0005244b) main_cf0_pane_t

0xb9ac,	// (0x0004e0cc) scroll_pane_cp11

0x9fd2,	// (0x0004c6f2) cf0_flow_pane_g1

0x9fda,	// (0x0004c6fa) cf0_flow_pane_g2

0x0001,

0xfd30,	// (0x00052450) cf0_flow_pane_g

0x9fe2,	// (0x0004c702) cf0_flow_pane_t1

0xa59d,	// (0x0004ccbd) main_call6_pane

0xa59d,	// (0x0004ccbd) main_calllock_pane

0x9ff0,	// (0x0004c710) call6_btn_grp_pane_ParamLimits

0x9ff0,	// (0x0004c710) call6_btn_grp_pane

0xa00a,	// (0x0004c72a) call6_pane_g1_ParamLimits

0xa00a,	// (0x0004c72a) call6_pane_g1

0xa01f,	// (0x0004c73f) popup_call6_1st_window_ParamLimits

0xa01f,	// (0x0004c73f) popup_call6_1st_window

0xa030,	// (0x0004c750) popup_call6_2nd_window_ParamLimits

0xa030,	// (0x0004c750) popup_call6_2nd_window

0xa041,	// (0x0004c761) cell_call6_btn_pane_ParamLimits

0xa041,	// (0x0004c761) cell_call6_btn_pane

0xce23,	// (0x0004f543) bg_popup_call2_in_pane_cp03

0xb9b7,	// (0x0004e0d7) popup_call6_1st_window_g1

0xb9bf,	// (0x0004e0df) popup_call6_1st_window_g2

0xb9c7,	// (0x0004e0e7) popup_call6_1st_window_g3

0x0002,

0xfd35,	// (0x00052455) popup_call6_1st_window_g

0xb9cf,	// (0x0004e0ef) popup_call6_1st_window_t1

0xb9de,	// (0x0004e0fe) popup_call6_1st_window_t2

0xb9ee,	// (0x0004e10e) popup_call6_1st_window_t3

0x0002,

0xfd3c,	// (0x0005245c) popup_call6_1st_window_t

0xce23,	// (0x0004f543) bg_popup_call2_in_pane_cp04

0xb9b7,	// (0x0004e0d7) popup_call6_2nd_window_g1

0xb9bf,	// (0x0004e0df) popup_call6_2nd_window_g2

0xb9c7,	// (0x0004e0e7) popup_call6_2nd_window_g3

0x0002,

0xfd35,	// (0x00052455) popup_call6_2nd_window_g

0xb9cf,	// (0x0004e0ef) popup_call6_2nd_window_t1

0xa59d,	// (0x0004ccbd) bg_button_pane_cp15

0xb9fe,	// (0x0004e11e) cell_call6_btn_pane_g1

0xba07,	// (0x0004e127) cell_call6_btn_pane_t1

0xa055,	// (0x0004c775) listscroll_wgtman_pane_ParamLimits

0xa055,	// (0x0004c775) listscroll_wgtman_pane

0xa078,	// (0x0004c798) wgtman_btn_pane_ParamLimits

0xa078,	// (0x0004c798) wgtman_btn_pane

0xccc8,	// (0x0004f3e8) aid_scroll_copy1

0xba16,	// (0x0004e136) list_wgtman_pane

0xa0bb,	// (0x0004c7db) wgtman_btn_pane_g1_ParamLimits

0xa0bb,	// (0x0004c7db) wgtman_btn_pane_g1

0xa0e7,	// (0x0004c807) wgtman_btn_pane_t1_ParamLimits

0xa0e7,	// (0x0004c807) wgtman_btn_pane_t1

0xba20,	// (0x0004e140) wgtman_btn_pane_t2_ParamLimits

0xba20,	// (0x0004e140) wgtman_btn_pane_t2

0x0001,

0xfd43,	// (0x00052463) wgtman_btn_pane_t_ParamLimits

0xfd43,	// (0x00052463) wgtman_btn_pane_t

0xa124,	// (0x0004c844) listrow_wgtman_pane_ParamLimits

0xa124,	// (0x0004c844) listrow_wgtman_pane

0xa137,	// (0x0004c857) listrow_wgtman_pane_g1

0xa140,	// (0x0004c860) listrow_wgtman_pane_g2

0x0001,

0xfd48,	// (0x00052468) listrow_wgtman_pane_g

0x1542,	// (0x00043c62) listrow_wgtman_pane_t1

0x1550,	// (0x00043c70) listrow_wgtman_pane_t2

0x0001,

0xfd4d,	// (0x0005246d) listrow_wgtman_pane_t

0x155e,	// (0x00043c7e) wait_bar_pane_cp09

0xba37,	// (0x0004e157) main_calllock_btn_pane

0xba41,	// (0x0004e161) main_calllock_pane_g1

0xa59d,	// (0x0004ccbd) bg_button_pane_cp17

0xba4c,	// (0x0004e16c) main_calllock_btn_pane_g1

0xba55,	// (0x0004e175) main_calllock_btn_pane_t1

0xa59d,	// (0x0004ccbd) main_dialer3_pane

0xa59d,	// (0x0004ccbd) main_fmrd2_pane

0xe694,	// (0x00050db4) main_fs_bigclock_unlock_btn_pane_g1

0xba6c,	// (0x0004e18c) main_fs_bigclock_unlock_btn_pane_t1

0xa14a,	// (0x0004c86a) area_fmrd2_info_pane_ParamLimits

0xa14a,	// (0x0004c86a) area_fmrd2_info_pane

0xa15b,	// (0x0004c87b) area_fmrd2_visual_pane_ParamLimits

0xa15b,	// (0x0004c87b) area_fmrd2_visual_pane

0xa169,	// (0x0004c889) fmrd2_indi_pane_ParamLimits

0xa169,	// (0x0004c889) fmrd2_indi_pane

0xa176,	// (0x0004c896) area_fmrd2_visual_pane_g1

0xa17e,	// (0x0004c89e) area_fmrd2_visual_pane_t1

0xa18e,	// (0x0004c8ae) area_fmrd2_visual_pane_t2

0xa19e,	// (0x0004c8be) area_fmrd2_visual_pane_t3

0x0002,

0xfd57,	// (0x00052477) area_fmrd2_visual_pane_t

0xa1ae,	// (0x0004c8ce) area_fmrd2_info_pane_g1

0xa1b6,	// (0x0004c8d6) area_fmrd2_info_pane_t1

0xa1c6,	// (0x0004c8e6) area_fmrd2_info_pane_t2

0xa1d6,	// (0x0004c8f6) area_fmrd2_info_pane_t3

0xa1e6,	// (0x0004c906) area_fmrd2_info_pane_t4

0x0003,

0xfd5e,	// (0x0005247e) area_fmrd2_info_pane_t

0xa1f4,	// (0x0004c914) fmrd2_indi_pane_t1

0xa204,	// (0x0004c924) fmrd2_indi_pane_t2

0xa214,	// (0x0004c934) fmrd2_indi_pane_t3

0x0002,

0xfd67,	// (0x00052487) fmrd2_indi_pane_t

0x9086,	// (0x0004b7a6) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x9086,	// (0x0004b7a6) list_single_fs_bigclock_indicator_pane_g5

0x912d,	// (0x0004b84d) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x912d,	// (0x0004b84d) list_single_fs_bigclock_indicator_pane_t5

0x9aad,	// (0x0004c1cd) aid_cell_bcale_month_pane_ParamLimits

0x9aad,	// (0x0004c1cd) aid_cell_bcale_month_pane

0x9abf,	// (0x0004c1df) bcale_month_pane_ParamLimits

0x9abf,	// (0x0004c1df) bcale_month_pane

0x9ad9,	// (0x0004c1f9) bcale_preview_pane_ParamLimits

0x9ad9,	// (0x0004c1f9) bcale_preview_pane

0xb7e7,	// (0x0004df07) list_single_fs_bigclock_pane_t1_ParamLimits

0xb806,	// (0x0004df26) list_single_fs_bigclock_pane_t2_ParamLimits

0xb806,	// (0x0004df26) list_single_fs_bigclock_pane_t2

0x0001,

0xfcee,	// (0x0005240e) list_single_fs_bigclock_pane_t_ParamLimits

0xfcee,	// (0x0005240e) list_single_fs_bigclock_pane_t

0xba64,	// (0x0004e184) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd52,	// (0x00052472) main_fs_bigclock_unlock_btn_pane_g

0xa224,	// (0x0004c944) aid_dia3_key_size_ParamLimits

0xa224,	// (0x0004c944) aid_dia3_key_size

0xa233,	// (0x0004c953) aid_dia3_listrow_size_ParamLimits

0xa233,	// (0x0004c953) aid_dia3_listrow_size

0xa248,	// (0x0004c968) dia3_keypad_fun_pane_ParamLimits

0xa248,	// (0x0004c968) dia3_keypad_fun_pane

0xa264,	// (0x0004c984) dia3_keypad_num_pane_ParamLimits

0xa264,	// (0x0004c984) dia3_keypad_num_pane

0xa27f,	// (0x0004c99f) dia3_listscroll_pane_ParamLimits

0xa27f,	// (0x0004c99f) dia3_listscroll_pane

0xa292,	// (0x0004c9b2) dia3_numentry_pane_ParamLimits

0xa292,	// (0x0004c9b2) dia3_numentry_pane

0xba7a,	// (0x0004e19a) dia3_list_pane

0xba85,	// (0x0004e1a5) scroll_pane_cp12

0xa59d,	// (0x0004ccbd) bg_dia3_numentry_pane

0xa2a6,	// (0x0004c9c6) dia3_numentry_pane_t1

0xa2b5,	// (0x0004c9d5) cell_dia3_key_num_pane

0xa2bd,	// (0x0004c9dd) cell_dia3_key0_fun_pane_ParamLimits

0xa2bd,	// (0x0004c9dd) cell_dia3_key0_fun_pane

0xa2d1,	// (0x0004c9f1) cell_dia3_key1_fun_pane_ParamLimits

0xa2d1,	// (0x0004c9f1) cell_dia3_key1_fun_pane

0xa2e9,	// (0x0004ca09) dia3_listrow_pane

0x8a96,	// (0x0004b1b6) bg_dia3_numentry_pane_g1

0xa59d,	// (0x0004ccbd) bg_button_pane_cp21

0xba90,	// (0x0004e1b0) cell_dia3_key_num_pane_t1

0xba9e,	// (0x0004e1be) cell_dia3_key_num_pane_t2

0xbaad,	// (0x0004e1cd) cell_dia3_key_num_pane_t3

0xbabc,	// (0x0004e1dc) cell_dia3_key_num_pane_t4

0x0003,

0xfd6e,	// (0x0005248e) cell_dia3_key_num_pane_t

0xa59d,	// (0x0004ccbd) bg_button_pane_cp19

0xa2fb,	// (0x0004ca1b) cell_dia3_key0_fun_pane_g1

0xa59d,	// (0x0004ccbd) bg_button_pane_cp20

0xa303,	// (0x0004ca23) cell_dia3_key1_fun_pane_g1

0xa30b,	// (0x0004ca2b) area_left_week_number_pane

0xddd5,	// (0x000504f5) area_top_day_name_pane

0xa314,	// (0x0004ca34) frame_month_view_pane

0xa31c,	// (0x0004ca3c) grid_month_view_pane

0xa326,	// (0x0004ca46) cell_top_day_name_pane_ParamLimits

0xa326,	// (0x0004ca46) cell_top_day_name_pane

0x9bff,	// (0x0004c31f) cell_area_left_week_number_pane_ParamLimits

0x9bff,	// (0x0004c31f) cell_area_left_week_number_pane

0xa33c,	// (0x0004ca5c) cell_month_view_pane_ParamLimits

0xa33c,	// (0x0004ca5c) cell_month_view_pane

0xbacb,	// (0x0004e1eb) frm_month_g1

0xa357,	// (0x0004ca77) frm_month_g2

0xa35f,	// (0x0004ca7f) frm_month_g3

0xa367,	// (0x0004ca87) frm_month_g4

0xa36f,	// (0x0004ca8f) frm_month_g5

0xa377,	// (0x0004ca97) frm_month_g6

0xa37f,	// (0x0004ca9f) frm_month_g7

0xbad4,	// (0x0004e1f4) frm_month_g8

0xa387,	// (0x0004caa7) frm_month_g9

0xa390,	// (0x0004cab0) frm_month_g10

0xa399,	// (0x0004cab9) frm_month_g11

0xa3a2,	// (0x0004cac2) frm_month_g12

0xa3ab,	// (0x0004cacb) frm_month_g13

0xa3b4,	// (0x0004cad4) frm_month_g14

0xa3bd,	// (0x0004cadd) frm_month_g15

0xa3c6,	// (0x0004cae6) frm_month_g16

0x000f,

0xfd77,	// (0x00052497) frm_month_g

0xa3cf,	// (0x0004caef) cell_top_day_name_pane_t1

0xa3de,	// (0x0004cafe) cell_area_left_week_number_pane_g1

0xa3cf,	// (0x0004caef) cell_area_left_week_number_pane_t1

0xe694,	// (0x00050db4) cell_month_view_pane_g1

0xa3e6,	// (0x0004cb06) cell_month_view_pane_t1

0xa59d,	// (0x0004ccbd) main_fps_pane

0x95f7,	// (0x0004bd17) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x95f7,	// (0x0004bd17) cmail_ddmenu_btn02_pane_cp1

0x9613,	// (0x0004bd33) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x9613,	// (0x0004bd33) cmail_ddmenu_btn02_pane_cp2

0x9cbd,	// (0x0004c3dd) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9cbd,	// (0x0004c3dd) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfca1,	// (0x000523c1) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfca1,	// (0x000523c1) cmail_ddmenu_btn02_pane_g

0x9cde,	// (0x0004c3fe) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9cde,	// (0x0004c3fe) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfca6,	// (0x000523c6) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfca6,	// (0x000523c6) cmail_ddmenu_btn02_pane_t

0xa3f5,	// (0x0004cb15) fps_text_pane_ParamLimits

0xa3f5,	// (0x0004cb15) fps_text_pane

0xa40c,	// (0x0004cb2c) main_fps_pane_g1_ParamLimits

0xa40c,	// (0x0004cb2c) main_fps_pane_g1

0xa426,	// (0x0004cb46) wait_bar_pane_cp010_ParamLimits

0xa426,	// (0x0004cb46) wait_bar_pane_cp010

0xa437,	// (0x0004cb57) fps_text_pane_t1_ParamLimits

0xa437,	// (0x0004cb57) fps_text_pane_t1

0xf08c,	// (0x000517ac) cam4_image_uncrop_pane_g1

0xf095,	// (0x000517b5) cam4_image_uncrop_pane_g2

0x67a6,	// (0x00048ec6) cam4_image_uncrop_pane_g3

0x67af,	// (0x00048ecf) cam4_image_uncrop_pane_g4

0x0003,

0xf77d,	// (0x00051e9d) cam4_image_uncrop_pane_g

0xa2e9,	// (0x0004ca09) dia3_listrow_pane_ParamLimits

0xa59d,	// (0x0004ccbd) main_phob2_pane

0x9787,	// (0x0004bea7) cell_tport_appsw_pane_cp02_ParamLimits

0x9787,	// (0x0004bea7) cell_tport_appsw_pane_cp02

0x979b,	// (0x0004bebb) cell_tport_appsw_pane_cp03_ParamLimits

0x979b,	// (0x0004bebb) cell_tport_appsw_pane_cp03

0xa59d,	// (0x0004ccbd) phob2_contact_card_pane

0xa59d,	// (0x0004ccbd) phob2_listscroll_pane

0xbadd,	// (0x0004e1fd) phob2_list_pane

0xbae5,	// (0x0004e205) scroll_pane_cp034

0xa44f,	// (0x0004cb6f) phob2_cc_data_pane_ParamLimits

0xa44f,	// (0x0004cb6f) phob2_cc_data_pane

0xa46e,	// (0x0004cb8e) phob2_cc_listscroll_pane_ParamLimits

0xa46e,	// (0x0004cb8e) phob2_cc_listscroll_pane

0x6bf1,	// (0x00049311) list_double_large_graphic_phob2_pane_ParamLimits

0x6bf1,	// (0x00049311) list_double_large_graphic_phob2_pane

0xa48c,	// (0x0004cbac) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa48c,	// (0x0004cbac) list_double_large_graphic_phob2_pane_g1

0x1566,	// (0x00043c86) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1566,	// (0x00043c86) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfd98,	// (0x000524b8) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd98,	// (0x000524b8) list_double_large_graphic_phob2_pane_g

0x1572,	// (0x00043c92) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1572,	// (0x00043c92) list_double_large_graphic_phob2_pane_t1

0x1587,	// (0x00043ca7) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1587,	// (0x00043ca7) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfd9d,	// (0x000524bd) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfd9d,	// (0x000524bd) list_double_large_graphic_phob2_pane_t

0xa59d,	// (0x0004ccbd) list_highlight_pane_cp024

0xbaed,	// (0x0004e20d) phob2_cc_button_pane

0xa499,	// (0x0004cbb9) phob2_cc_data_pane_g1_ParamLimits

0xa499,	// (0x0004cbb9) phob2_cc_data_pane_g1

0xa4ae,	// (0x0004cbce) phob2_cc_data_pane_g2_ParamLimits

0xa4ae,	// (0x0004cbce) phob2_cc_data_pane_g2

0x0001,

0xfda2,	// (0x000524c2) phob2_cc_data_pane_g_ParamLimits

0xfda2,	// (0x000524c2) phob2_cc_data_pane_g

0xa4c0,	// (0x0004cbe0) phob2_cc_data_pane_t1_ParamLimits

0xa4c0,	// (0x0004cbe0) phob2_cc_data_pane_t1

0xa4d8,	// (0x0004cbf8) phob2_cc_data_pane_t2_ParamLimits

0xa4d8,	// (0x0004cbf8) phob2_cc_data_pane_t2

0xa4f0,	// (0x0004cc10) phob2_cc_data_pane_t3_ParamLimits

0xa4f0,	// (0x0004cc10) phob2_cc_data_pane_t3

0x0002,

0xfda7,	// (0x000524c7) phob2_cc_data_pane_t_ParamLimits

0xfda7,	// (0x000524c7) phob2_cc_data_pane_t

0xbaf5,	// (0x0004e215) phob2_cc_list_pane_ParamLimits

0xbaf5,	// (0x0004e215) phob2_cc_list_pane

0x781c,	// (0x00049f3c) scroll_pane_cp035_ParamLimits

0x781c,	// (0x00049f3c) scroll_pane_cp035

0xa615,	// (0x0004cd35) bg_button_pane_cp033

0xbb01,	// (0x0004e221) phob2_cc_button_pane_g1

0xbb0d,	// (0x0004e22d) phob2_cc_button_pane_t1

0xbb22,	// (0x0004e242) phob2_cc_button_pane_t2

0x0001,

0xfdae,	// (0x000524ce) phob2_cc_button_pane_t

0xa50a,	// (0x0004cc2a) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa50a,	// (0x0004cc2a) list_double_large_graphic_phob2_cc_pane

0xa51e,	// (0x0004cc3e) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa51e,	// (0x0004cc3e) list_double_large_graphic_phob2_cc_pane_g1

0x1599,	// (0x00043cb9) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1599,	// (0x00043cb9) list_double_large_graphic_phob2_cc_pane_g2

0x15a5,	// (0x00043cc5) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x15a5,	// (0x00043cc5) list_double_large_graphic_phob2_cc_pane_g3

0x15b1,	// (0x00043cd1) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x15b1,	// (0x00043cd1) list_double_large_graphic_phob2_cc_pane_g4

0x15bd,	// (0x00043cdd) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x15bd,	// (0x00043cdd) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdb3,	// (0x000524d3) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdb3,	// (0x000524d3) list_double_large_graphic_phob2_cc_pane_g

0x15c9,	// (0x00043ce9) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x15c9,	// (0x00043ce9) list_double_large_graphic_phob2_cc_pane_t1

0x15f2,	// (0x00043d12) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x15f2,	// (0x00043d12) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdbe,	// (0x000524de) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdbe,	// (0x000524de) list_double_large_graphic_phob2_cc_pane_t

0xbb34,	// (0x0004e254) list_highlight_pane_cp025_ParamLimits

0xbb34,	// (0x0004e254) list_highlight_pane_cp025

0xa615,	// (0x0004cd35) bg_button_pane_cp033_ParamLimits

0xbb01,	// (0x0004e221) phob2_cc_button_pane_g1_ParamLimits

0xbb0d,	// (0x0004e22d) phob2_cc_button_pane_t1_ParamLimits

0xbb22,	// (0x0004e242) phob2_cc_button_pane_t2_ParamLimits

0xfdae,	// (0x000524ce) phob2_cc_button_pane_t_ParamLimits

0x1835,	// (0x00043f55) popup_wgtman_window

0x6fe4,	// (0x00049704) scroll_pane_cp038

0xa09d,	// (0x0004c7bd) wgtman_btn_pane_cp_01_ParamLimits

0xa09d,	// (0x0004c7bd) wgtman_btn_pane_cp_01

0xbb42,	// (0x0004e262) wgtman_content_pane

0xb88b,	// (0x0004dfab) wgtman_heading_pane

0xa59d,	// (0x0004ccbd) bg_heading_pane_cp02

0xbb4b,	// (0x0004e26b) wgtman_heading_pane_g1

0xbb53,	// (0x0004e273) wgtman_heading_pane_t1

0xbb61,	// (0x0004e281) scroll_pane_cp036

0xbb69,	// (0x0004e289) wgtman_list_pane

0xbb71,	// (0x0004e291) wgtman_list_pane_t1_ParamLimits

0xbb71,	// (0x0004e291) wgtman_list_pane_t1

0xad2d,	// (0x0004d44d) cam4_grid_pane

0x0e68,	// (0x00043588) bg_button_pane_cp015_ParamLimits

0x76af,	// (0x00049dcf) bg_button_pane_cp016_ParamLimits

0x76c2,	// (0x00049de2) bg_button_pane_cp017_ParamLimits

0x0eb0,	// (0x000435d0) popup_vitu2_query_window_g3_ParamLimits

0x0eb0,	// (0x000435d0) popup_vitu2_query_window_g3

0x0f2b,	// (0x0004364b) popup_vitu2_query_window_t6_ParamLimits

0x0f2b,	// (0x0004364b) popup_vitu2_query_window_t6

0x0f56,	// (0x00043676) popup_vitu2_query_window_t7_ParamLimits

0x0f56,	// (0x00043676) popup_vitu2_query_window_t7

0xf08c,	// (0x000517ac) cam4_grid_pane_g1

0xf095,	// (0x000517b5) cam4_grid_pane_g2

0xbb93,	// (0x0004e2b3) cam4_grid_pane_g3

0xbb9c,	// (0x0004e2bc) cam4_grid_pane_g4

0x0003,

0xfdc3,	// (0x000524e3) cam4_grid_pane_g

0x241d,	// (0x00044b3d) aid_placing_vt_slider_lsc_ParamLimits

0x271a,	// (0x00044e3a) vidtel_button_pane_ParamLimits

0x271a,	// (0x00044e3a) vidtel_button_pane

0xbba7,	// (0x0004e2c7) bg_button_pane_cp034

0xa52a,	// (0x0004cc4a) vidtel_button_pane_g1

0xbbb1,	// (0x0004e2d1) vidtel_button_pane_t1

0x73c7,	// (0x00049ae7) aid_size_vtel_slider_touch

0x781c,	// (0x00049f3c) scroll_pane_cp039

0x8b05,	// (0x0004b225) ncim_query_button_pane_cp01_ParamLimits

0x8b24,	// (0x0004b244) ncimui_query_pane_g1_ParamLimits

0xa615,	// (0x0004cd35) input_focus_pane_cp012_ParamLimits

0x8b49,	// (0x0004b269) ncim_query_entry_pane_t1_ParamLimits

0x781c,	// (0x00049f3c) scroll_pane_cp039_ParamLimits

0x351b,	// (0x00045c3b) navi_pane_bcale_mc_g1

0x3523,	// (0x00045c43) navi_pane_bcale_mc_t1

0x9679,	// (0x0004bd99) main_sp_fs_email_pane_g1

0x9681,	// (0x0004bda1) main_sp_fs_email_pane_g2

0x0001,

0xfb68,	// (0x00052288) main_sp_fs_email_pane_g

0xb48a,	// (0x0004dbaa) list_single_cale_mrui_row_pane_g3_ParamLimits

0xb48a,	// (0x0004dbaa) list_single_cale_mrui_row_pane_g3

0x9d06,	// (0x0004c426) list_single_recal_day_pane_g5_event_pane

0xb646,	// (0x0004dd66) list_single_recal_day_pane_g7

0xbbbf,	// (0x0004e2df) list_recal_day_event_pane_cp01

0xbbc8,	// (0x0004e2e8) list_recal_vselct_arw_lo_pane_cp01

0xbbd0,	// (0x0004e2f0) list_recal_vselct_arw_up_pane_cp01

0xbbd8,	// (0x0004e2f8) list_recal_vselct_pane_cp01

0x75ab,	// (0x00049ccb) list_recal_day_event_pane_cp01_g1

0xbbe2,	// (0x0004e302) list_recal_day_event_pane_cp01_t1

0xb64e,	// (0x0004dd6e) list_single_recal_day_pane_t1_ParamLimits

0xb660,	// (0x0004dd80) list_single_recal_day_pane_t2_ParamLimits

0xfcb6,	// (0x000523d6) list_single_recal_day_pane_t_ParamLimits

0xc369,	// (0x0004ea89) bg_notes_pane_ParamLimits

0xc377,	// (0x0004ea97) list_notes_pane_ParamLimits

0x1b47,	// (0x00044267) scroll_pane_cp06_ParamLimits

0xc399,	// (0x0004eab9) main_notes_pane_ParamLimits

0xa59d,	// (0x0004ccbd) main_welc_pane

0xa532,	// (0x0004cc52) main_welc_body_pane_ParamLimits

0xa532,	// (0x0004cc52) main_welc_body_pane

0xa546,	// (0x0004cc66) main_welc_opti_pane_ParamLimits

0xa546,	// (0x0004cc66) main_welc_opti_pane

0xa55d,	// (0x0004cc7d) main_welc_pane_t1_ParamLimits

0xa55d,	// (0x0004cc7d) main_welc_pane_t1

0xa576,	// (0x0004cc96) main_welc_body_row_pane_ParamLimits

0xa576,	// (0x0004cc96) main_welc_body_row_pane

0xa58d,	// (0x0004ccad) main_welc_opti_row_pane_ParamLimits

0xa58d,	// (0x0004ccad) main_welc_opti_row_pane

0xbbf0,	// (0x0004e310) main_welc_opti_row_pane_g1

0xbbf8,	// (0x0004e318) main_welc_opti_row_pane_t1

0xbc07,	// (0x0004e327) main_welc_body_row_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small
