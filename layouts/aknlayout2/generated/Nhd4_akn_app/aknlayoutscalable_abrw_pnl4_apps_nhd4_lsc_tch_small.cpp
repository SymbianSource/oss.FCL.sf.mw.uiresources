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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0005b283 };

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
0x0e52,	// (0x0005c0d5) Screen

0x0e5e,	// (0x0005c0e1) application_window

0x0ed0,	// (0x0005c153) area_bottom_pane_ParamLimits

0x0ed0,	// (0x0005c153) area_bottom_pane

0x0f2d,	// (0x0005c1b0) area_top_pane_ParamLimits

0x0f2d,	// (0x0005c1b0) area_top_pane

0x99a3,	// (0x00064c26) call_video_uplink_pane_ParamLimits

0x99a3,	// (0x00064c26) call_video_uplink_pane

0x0fa2,	// (0x0005c225) main_pane_ParamLimits

0x0fa2,	// (0x0005c225) main_pane

0xc256,	// (0x000674d9) context_pane

0x412e,	// (0x0005f3b1) navi_pane

0x4156,	// (0x0005f3d9) popup_cale_events_window_ParamLimits

0x4156,	// (0x0005f3d9) popup_cale_events_window

0xc269,	// (0x000674ec) popup_mup_playback_window

0x416e,	// (0x0005f3f1) signal_pane

0xa176,	// (0x000653f9) main_browser_pane

0xada0,	// (0x00066023) main_burst_pane

0x3e8e,	// (0x0005f111) main_calc_pane

0xada0,	// (0x00066023) main_cale_day_pane

0xa176,	// (0x000653f9) main_cale_month_pane

0xada0,	// (0x00066023) main_cale_week_pane

0xada0,	// (0x00066023) main_call_pane

0x9de0,	// (0x00065063) main_call_poc_pane

0xada0,	// (0x00066023) main_camera_pane

0xada0,	// (0x00066023) main_chi_dic_pane

0xac2f,	// (0x00065eb2) main_clock_pane

0x9de0,	// (0x00065063) main_fmradio_pane

0xada0,	// (0x00066023) main_graph_messa_pane

0x9de0,	// (0x00065063) main_help_pane

0xa176,	// (0x000653f9) main_im_pane

0xa03b,	// (0x000652be) main_image_pane_ParamLimits

0xa03b,	// (0x000652be) main_image_pane

0x9de0,	// (0x00065063) main_location2_pane

0xada0,	// (0x00066023) main_location_pane

0x9de0,	// (0x00065063) main_messa_pane

0x9de0,	// (0x00065063) main_mp2_pane

0xada0,	// (0x00066023) main_mp_pane

0x9de0,	// (0x00065063) main_msg_pane

0x9de0,	// (0x00065063) main_mup_eq_pane

0x9de0,	// (0x00065063) main_mup_pane

0xada0,	// (0x00066023) main_notes_pane

0x9de0,	// (0x00065063) main_pec_pane

0x9de0,	// (0x00065063) main_phob_pane

0x9de0,	// (0x00065063) main_pinb_pane

0x9de0,	// (0x00065063) main_postcard_pane

0x9de0,	// (0x00065063) main_qdial_pane

0xada0,	// (0x00066023) main_skin_pane

0x9de0,	// (0x00065063) main_smil2_pane

0xada0,	// (0x00066023) main_smil_pane

0xada0,	// (0x00066023) main_video_pane

0xada0,	// (0x00066023) main_video_tele_pane

0xa03b,	// (0x000652be) main_viewer_pane_ParamLimits

0xa03b,	// (0x000652be) main_viewer_pane

0xada0,	// (0x00066023) main_vorec_pane

0x3ee2,	// (0x0005f165) popup_blid_sat_info_window_ParamLimits

0x3ee2,	// (0x0005f165) popup_blid_sat_info_window

0x3f3a,	// (0x0005f1bd) popup_dyc_status_message_window_ParamLimits

0x3f3a,	// (0x0005f1bd) popup_dyc_status_message_window

0x3f52,	// (0x0005f1d5) popup_grid_large_graphic_window_ParamLimits

0x3f52,	// (0x0005f1d5) popup_grid_large_graphic_window

0x4008,	// (0x0005f28b) popup_loc_request_window_ParamLimits

0x4008,	// (0x0005f28b) popup_loc_request_window

0x4106,	// (0x0005f389) popup_wml_address_window_ParamLimits

0x4106,	// (0x0005f389) popup_wml_address_window

0x3cc8,	// (0x0005ef4b) call_muted_g1

0x3980,	// (0x0005ec03) popup_call_audio_conf_window_ParamLimits

0x3980,	// (0x0005ec03) popup_call_audio_conf_window

0x3cdc,	// (0x0005ef5f) popup_call_audio_first_window_ParamLimits

0x3cdc,	// (0x0005ef5f) popup_call_audio_first_window

0x3d52,	// (0x0005efd5) popup_call_audio_in_window_ParamLimits

0x3d52,	// (0x0005efd5) popup_call_audio_in_window

0x3d8e,	// (0x0005f011) popup_call_audio_out_window_ParamLimits

0x3d8e,	// (0x0005f011) popup_call_audio_out_window

0x3dc8,	// (0x0005f04b) popup_call_audio_second_window_ParamLimits

0x3dc8,	// (0x0005f04b) popup_call_audio_second_window

0x3e1e,	// (0x0005f0a1) popup_call_audio_wait_window_ParamLimits

0x3e1e,	// (0x0005f0a1) popup_call_audio_wait_window

0x3e53,	// (0x0005f0d6) popup_number_entry_window_ParamLimits

0x3e53,	// (0x0005f0d6) popup_number_entry_window

0x99cf,	// (0x00064c52) bg_popup_call_pane_cp05_ParamLimits

0x99cf,	// (0x00064c52) bg_popup_call_pane_cp05

0x99ef,	// (0x00064c72) popup_number_entry_window_t1

0x9a02,	// (0x00064c85) popup_number_entry_window_t2

0x9a14,	// (0x00064c97) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0006a36f) popup_number_entry_window_t

0x9a26,	// (0x00064ca9) text_title_cp2

0x9a39,	// (0x00064cbc) bg_popup_call_pane_cp_ParamLimits

0x9a39,	// (0x00064cbc) bg_popup_call_pane_cp

0x9a47,	// (0x00064cca) call_thumbnail_pane

0x9a4f,	// (0x00064cd2) popup_call_audio_in_window_g1_ParamLimits

0x9a4f,	// (0x00064cd2) popup_call_audio_in_window_g1

0x9a5b,	// (0x00064cde) popup_call_audio_in_window_g2_ParamLimits

0x9a5b,	// (0x00064cde) popup_call_audio_in_window_g2

0x9a67,	// (0x00064cea) popup_call_audio_in_window_g3_ParamLimits

0x9a67,	// (0x00064cea) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0006a378) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0006a378) popup_call_audio_in_window_g

0x9a73,	// (0x00064cf6) popup_call_audio_in_window_t1_ParamLimits

0x9a73,	// (0x00064cf6) popup_call_audio_in_window_t1

0x9a8e,	// (0x00064d11) popup_call_audio_in_window_t2_ParamLimits

0x9a8e,	// (0x00064d11) popup_call_audio_in_window_t2

0x9aa9,	// (0x00064d2c) popup_call_audio_in_window_t3_ParamLimits

0x9aa9,	// (0x00064d2c) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0006a37f) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0006a37f) popup_call_audio_in_window_t

0x9a39,	// (0x00064cbc) bg_popup_call_pane_cp01_ParamLimits

0x9a39,	// (0x00064cbc) bg_popup_call_pane_cp01

0x9a47,	// (0x00064cca) call_thumbnail_pane_cp02

0x9abc,	// (0x00064d3f) call_type_pane_cp022

0x9ac4,	// (0x00064d47) popup_call_audio_out_window_g1_ParamLimits

0x9ac4,	// (0x00064d47) popup_call_audio_out_window_g1

0x9ad6,	// (0x00064d59) popup_call_audio_out_window_g2_ParamLimits

0x9ad6,	// (0x00064d59) popup_call_audio_out_window_g2

0x9ae2,	// (0x00064d65) popup_call_audio_out_window_g3_ParamLimits

0x9ae2,	// (0x00064d65) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0006a386) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0006a386) popup_call_audio_out_window_g

0x9af4,	// (0x00064d77) popup_call_audio_out_window_t1_ParamLimits

0x9af4,	// (0x00064d77) popup_call_audio_out_window_t1

0x9b0c,	// (0x00064d8f) popup_call_audio_out_window_t2_ParamLimits

0x9b0c,	// (0x00064d8f) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0006a38d) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0006a38d) popup_call_audio_out_window_t

0x9b21,	// (0x00064da4) bg_popup_call_pane_ParamLimits

0x9b21,	// (0x00064da4) bg_popup_call_pane

0x114d,	// (0x0005c3d0) call_thumbnail_pane_cp_ParamLimits

0x114d,	// (0x0005c3d0) call_thumbnail_pane_cp

0x9ba5,	// (0x00064e28) call_type_pane_cp01_ParamLimits

0x9ba5,	// (0x00064e28) call_type_pane_cp01

0x9be9,	// (0x00064e6c) popup_call_audio_first_window_g1_ParamLimits

0x9be9,	// (0x00064e6c) popup_call_audio_first_window_g1

0x9c35,	// (0x00064eb8) popup_call_audio_first_window_g2_ParamLimits

0x9c35,	// (0x00064eb8) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0006a392) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0006a392) popup_call_audio_first_window_g

0x9c79,	// (0x00064efc) popup_call_audio_first_window_t1_ParamLimits

0x9c79,	// (0x00064efc) popup_call_audio_first_window_t1

0x9d25,	// (0x00064fa8) popup_call_audio_first_window_t4_ParamLimits

0x9d25,	// (0x00064fa8) popup_call_audio_first_window_t4

0x9db1,	// (0x00065034) popup_call_audio_first_window_t5_ParamLimits

0x9db1,	// (0x00065034) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0006a397) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0006a397) popup_call_audio_first_window_t

0x9de0,	// (0x00065063) bg_popup_call_pane_cp02

0x9dea,	// (0x0006506d) call_type_pane_cp023

0x9df2,	// (0x00065075) popup_call_audio_wait_window_g1

0x9dfa,	// (0x0006507d) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0006a39e) popup_call_audio_wait_window_g

0x9e02,	// (0x00065085) popup_call_audio_wait_window_t3

0x9e10,	// (0x00065093) bg_popup_call_pane_cp03_ParamLimits

0x9e10,	// (0x00065093) bg_popup_call_pane_cp03

0x9e70,	// (0x000650f3) call_thumbnail_pane_cp011_ParamLimits

0x9e70,	// (0x000650f3) call_thumbnail_pane_cp011

0x9e7c,	// (0x000650ff) call_type_pane_cp034_ParamLimits

0x9e7c,	// (0x000650ff) call_type_pane_cp034

0x9eb8,	// (0x0006513b) popup_call_audio_second_window_g1_ParamLimits

0x9eb8,	// (0x0006513b) popup_call_audio_second_window_g1

0x9ef4,	// (0x00065177) popup_call_audio_second_window_g2_ParamLimits

0x9ef4,	// (0x00065177) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0006a3a3) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0006a3a3) popup_call_audio_second_window_g

0x9f30,	// (0x000651b3) popup_call_audio_second_window_t1_ParamLimits

0x9f30,	// (0x000651b3) popup_call_audio_second_window_t1

0x9fb1,	// (0x00065234) popup_call_audio_second_window_t2_ParamLimits

0x9fb1,	// (0x00065234) popup_call_audio_second_window_t2

0x9fe7,	// (0x0006526a) popup_call_audio_second_window_t3_ParamLimits

0x9fe7,	// (0x0006526a) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0006a3a8) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0006a3a8) popup_call_audio_second_window_t

0x9de0,	// (0x00065063) bg_popup_call_pane_cp04

0xa01d,	// (0x000652a0) list_conf_pane

0xa025,	// (0x000652a8) popup_call_audio_conf_window_t1

0xa033,	// (0x000652b6) call_thumbnail_pane_g1

0xa03b,	// (0x000652be) bg_pinb_pane_ParamLimits

0xa03b,	// (0x000652be) bg_pinb_pane

0xa049,	// (0x000652cc) find_pinb_pane

0xa052,	// (0x000652d5) listscroll_pinb_pane_ParamLimits

0xa052,	// (0x000652d5) listscroll_pinb_pane

0xa061,	// (0x000652e4) pinb_bg_pane_g1

0x1171,	// (0x0005c3f4) pinb_bg_pane_g2

0x117d,	// (0x0005c400) pinb_bg_pane_g3

0x1189,	// (0x0005c40c) pinb_bg_pane_g4

0x1195,	// (0x0005c418) pinb_bg_pane_g5

0x11a1,	// (0x0005c424) pinb_bg_pane_g6

0x11ac,	// (0x0005c42f) pinb_bg_pane_g7

0x11b7,	// (0x0005c43a) pinb_bg_pane_g8

0x11c2,	// (0x0005c445) pinb_bg_pane_g9

0x11cc,	// (0x0005c44f) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0006a3af) pinb_bg_pane_g

0x11e1,	// (0x0005c464) grid_pinb_pane

0x11ea,	// (0x0005c46d) list_pinb_pane

0x11f3,	// (0x0005c476) scroll_pane_cp01_ParamLimits

0x11f3,	// (0x0005c476) scroll_pane_cp01

0xa073,	// (0x000652f6) find_pinb_pane_g1_ParamLimits

0xa073,	// (0x000652f6) find_pinb_pane_g1

0xa08b,	// (0x0006530e) find_pinb_pane_t1

0xa09d,	// (0x00065320) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0006a3c9) find_pinb_pane_t

0xa0b2,	// (0x00065335) input_focus_pane_cp01_ParamLimits

0xa0b2,	// (0x00065335) input_focus_pane_cp01

0x1205,	// (0x0005c488) cell_pinb_pane_ParamLimits

0x1205,	// (0x0005c488) cell_pinb_pane

0x1237,	// (0x0005c4ba) cell_pinb_pane_g1_ParamLimits

0x1237,	// (0x0005c4ba) cell_pinb_pane_g1

0x1247,	// (0x0005c4ca) cell_pinb_pane_g2_ParamLimits

0x1247,	// (0x0005c4ca) cell_pinb_pane_g2

0xa0be,	// (0x00065341) cell_pinb_pane_g3_ParamLimits

0xa0be,	// (0x00065341) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0006a3ce) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0006a3ce) cell_pinb_pane_g

0x9de0,	// (0x00065063) grid_highlight_pane_cp01

0x1253,	// (0x0005c4d6) list_pinb_item_pane_ParamLimits

0x1253,	// (0x0005c4d6) list_pinb_item_pane

0x9de0,	// (0x00065063) list_highlight_pane_cp02

0xa0ca,	// (0x0006534d) list_pinb_item_pane_g1_ParamLimits

0xa0ca,	// (0x0006534d) list_pinb_item_pane_g1

0xa0d7,	// (0x0006535a) list_pinb_item_pane_g2_ParamLimits

0xa0d7,	// (0x0006535a) list_pinb_item_pane_g2

0x1267,	// (0x0005c4ea) list_pinb_item_pane_g3_ParamLimits

0x1267,	// (0x0005c4ea) list_pinb_item_pane_g3

0xa0e3,	// (0x00065366) list_pinb_item_pane_g4_ParamLimits

0xa0e3,	// (0x00065366) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0006a3d5) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0006a3d5) list_pinb_item_pane_g

0xa0ef,	// (0x00065372) list_pinb_item_pane_t1_ParamLimits

0xa0ef,	// (0x00065372) list_pinb_item_pane_t1

0x1296,	// (0x0005c519) calc_display_pane

0x12be,	// (0x0005c541) calc_paper_pane

0x12e1,	// (0x0005c564) grid_calc_pane

0x9de0,	// (0x00065063) bg_list_pane_cp01

0x130f,	// (0x0005c592) clock_g1

0x1317,	// (0x0005c59a) clock_g2

0x0001,

0xf15b,	// (0x0006a3de) clock_g

0x131f,	// (0x0005c5a2) clock_t1_ParamLimits

0x131f,	// (0x0005c5a2) clock_t1

0x1334,	// (0x0005c5b7) clock_t2_ParamLimits

0x1334,	// (0x0005c5b7) clock_t2

0x1346,	// (0x0005c5c9) clock_t3_ParamLimits

0x1346,	// (0x0005c5c9) clock_t3

0x1358,	// (0x0005c5db) clock_t4_ParamLimits

0x1358,	// (0x0005c5db) clock_t4

0x136a,	// (0x0005c5ed) clock_t5_ParamLimits

0x136a,	// (0x0005c5ed) clock_t5

0x137f,	// (0x0005c602) clock_t6_ParamLimits

0x137f,	// (0x0005c602) clock_t6

0x1391,	// (0x0005c614) clock_t7_ParamLimits

0x1391,	// (0x0005c614) clock_t7

0x13a3,	// (0x0005c626) clock_t8_ParamLimits

0x13a3,	// (0x0005c626) clock_t8

0x13b7,	// (0x0005c63a) clock_t9_ParamLimits

0x13b7,	// (0x0005c63a) clock_t9

0x0008,

0xf160,	// (0x0006a3e3) clock_t_ParamLimits

0xf160,	// (0x0006a3e3) clock_t

0xa10e,	// (0x00065391) popup_clock_analogue_window_cp02

0xa10e,	// (0x00065391) popup_clock_digital_window_cp01

0xa116,	// (0x00065399) listscroll_help_pane

0x9de0,	// (0x00065063) phob_pre_status_pane

0xa120,	// (0x000653a3) grid_qdial_pane

0x9de0,	// (0x00065063) listscroll_mce_pane

0xa12a,	// (0x000653ad) bg_notes_pane

0xa134,	// (0x000653b7) list_notes_pane

0x13cb,	// (0x0005c64e) scroll_pane_cp06

0xa13e,	// (0x000653c1) bg_calc_paper_pane

0xa15c,	// (0x000653df) list_calc_pane

0xa176,	// (0x000653f9) bg_calc_display_pane

0x13d6,	// (0x0005c659) calc_display_pane_t1

0x13e8,	// (0x0005c66b) calc_display_pane_t2

0xa182,	// (0x00065405) calc_display_pane_t3

0x0002,

0xf173,	// (0x0006a3f6) calc_display_pane_t

0x13fa,	// (0x0005c67d) cell_calc_pane_ParamLimits

0x13fa,	// (0x0005c67d) cell_calc_pane

0xa194,	// (0x00065417) bg_calc_paper_pane_g1

0xa1a0,	// (0x00065423) bg_calc_paper_pane_g2

0xa1ac,	// (0x0006542f) bg_calc_paper_pane_g3

0xa1b8,	// (0x0006543b) bg_calc_paper_pane_g4

0xa1c4,	// (0x00065447) bg_calc_paper_pane_g5

0x142f,	// (0x0005c6b2) bg_calc_paper_pane_g6

0x143e,	// (0x0005c6c1) bg_calc_paper_pane_g7

0x144d,	// (0x0005c6d0) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0006a3fd) bg_calc_paper_pane_g

0x1460,	// (0x0005c6e3) calc_bg_paper_pane_g9

0x1473,	// (0x0005c6f6) list_calc_item_pane_ParamLimits

0x1473,	// (0x0005c6f6) list_calc_item_pane

0xa1d0,	// (0x00065453) list_calc_item_pane_g1

0xa1dd,	// (0x00065460) list_calc_item_pane_t1_ParamLimits

0xa1dd,	// (0x00065460) list_calc_item_pane_t1

0x1489,	// (0x0005c70c) list_calc_item_pane_t2_ParamLimits

0x1489,	// (0x0005c70c) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0006a40e) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0006a40e) list_calc_item_pane_t

0xa1ef,	// (0x00065472) cell_calc_pane_g1

0xa1f9,	// (0x0006547c) grid_highlight_pane_cp02

0xa21b,	// (0x0006549e) bg_calc_display_pane_g1

0xa224,	// (0x000654a7) bg_calc_display_pane_g2

0xa22e,	// (0x000654b1) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0006a418) bg_calc_display_pane_g

0x14bb,	// (0x0005c73e) cell_qdial_pane_ParamLimits

0x14bb,	// (0x0005c73e) cell_qdial_pane

0x14cf,	// (0x0005c752) cell_qdial_pane_g1_ParamLimits

0x14cf,	// (0x0005c752) cell_qdial_pane_g1

0x14e5,	// (0x0005c768) cell_qdial_pane_g2_ParamLimits

0x14e5,	// (0x0005c768) cell_qdial_pane_g2

0xa237,	// (0x000654ba) cell_qdial_pane_g3_ParamLimits

0xa237,	// (0x000654ba) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0006a41f) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0006a41f) cell_qdial_pane_g

0x150c,	// (0x0005c78f) cell_qdial_pane_t1_ParamLimits

0x150c,	// (0x0005c78f) cell_qdial_pane_t1

0x1524,	// (0x0005c7a7) cell_qdial_pane_t2_ParamLimits

0x1524,	// (0x0005c7a7) cell_qdial_pane_t2

0x1537,	// (0x0005c7ba) cell_qdial_pane_t3_ParamLimits

0x1537,	// (0x0005c7ba) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0006a428) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0006a428) cell_qdial_pane_t

0x9de0,	// (0x00065063) grid_highlight_pane_cp04

0xa243,	// (0x000654c6) thumbnail_qdial_pane_ParamLimits

0xa243,	// (0x000654c6) thumbnail_qdial_pane

0xa29f,	// (0x00065522) list_help_pane

0xa2a8,	// (0x0006552b) scroll_pane_cp02

0x154a,	// (0x0005c7cd) help_list_pane_t1_ParamLimits

0x154a,	// (0x0005c7cd) help_list_pane_t1

0xa2b1,	// (0x00065534) bg_notes_pane_g2

0xa2b9,	// (0x0006553c) bg_notes_pane_g3

0xa2c1,	// (0x00065544) notes_bg_pane_g1

0xa2c9,	// (0x0006554c) notes_bg_pane_g4

0xa2d1,	// (0x00065554) notes_bg_pane_g5

0xa2d9,	// (0x0006555c) notes_bg_pane_g6

0xa2e1,	// (0x00065564) notes_bg_pane_g7

0xa2e9,	// (0x0006556c) notes_bg_pane_g8

0xa2f1,	// (0x00065574) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0006a446) notes_bg_pane_g

0xa2f9,	// (0x0006557c) list_notes_text_pane_ParamLimits

0xa2f9,	// (0x0006557c) list_notes_text_pane

0xa310,	// (0x00065593) list_notes_text_pane_g1

0x156a,	// (0x0005c7ed) list_notes_text_pane_t1

0xa176,	// (0x000653f9) listscroll_cale_week_pane

0x1595,	// (0x0005c818) bg_cale_heading_pane

0xa32a,	// (0x000655ad) bg_cale_pane_cp01

0x15ad,	// (0x0005c830) cale_week_corner_pane

0x15be,	// (0x0005c841) cale_week_day_heading_pane

0x15d6,	// (0x0005c859) cale_week_scroll_pane_g1

0x15eb,	// (0x0005c86e) cale_week_scroll_pane_g2

0x15fc,	// (0x0005c87f) cale_week_scroll_pane_g3

0x160d,	// (0x0005c890) cale_week_scroll_pane_g4

0x161e,	// (0x0005c8a1) cale_week_scroll_pane_g5

0x1631,	// (0x0005c8b4) cale_week_scroll_pane_g6

0x1644,	// (0x0005c8c7) cale_week_scroll_pane_g7

0x1657,	// (0x0005c8da) cale_week_scroll_pane_g8

0x166a,	// (0x0005c8ed) cale_week_scroll_pane_g9

0x167b,	// (0x0005c8fe) cale_week_scroll_pane_g10

0x168c,	// (0x0005c90f) cale_week_scroll_pane_g11

0x169d,	// (0x0005c920) cale_week_scroll_pane_g12

0x16ae,	// (0x0005c931) cale_week_scroll_pane_g13

0x16bf,	// (0x0005c942) cale_week_scroll_pane_g14

0x16d0,	// (0x0005c953) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0006a455) cale_week_scroll_pane_g

0x16e1,	// (0x0005c964) cale_week_time_pane

0x16f4,	// (0x0005c977) grid_cale_week_pane

0x1709,	// (0x0005c98c) scroll_pane_cp08

0x1723,	// (0x0005c9a6) cell_cale_week_pane_ParamLimits

0x1723,	// (0x0005c9a6) cell_cale_week_pane

0x1763,	// (0x0005c9e6) cale_week_day_heading_pane_t1

0x1777,	// (0x0005c9fa) cale_week_day_heading_pane_t2

0x178b,	// (0x0005ca0e) cale_week_day_heading_pane_t3

0x179f,	// (0x0005ca22) cale_week_day_heading_pane_t4

0x17b3,	// (0x0005ca36) cale_week_day_heading_pane_t5

0x17c7,	// (0x0005ca4a) cale_week_day_heading_pane_t6

0x17dd,	// (0x0005ca60) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0006a474) cale_week_day_heading_pane_t

0xa355,	// (0x000655d8) bg_cale_side_pane

0x17f1,	// (0x0005ca74) cale_week_time_pane_t1

0x1809,	// (0x0005ca8c) cale_week_time_pane_t2

0x1821,	// (0x0005caa4) cale_week_time_pane_t3

0x1839,	// (0x0005cabc) cale_week_time_pane_t4

0x1851,	// (0x0005cad4) cale_week_time_pane_t5

0x1869,	// (0x0005caec) cale_week_time_pane_t6

0x1881,	// (0x0005cb04) cale_week_time_pane_t7

0x1899,	// (0x0005cb1c) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0006a483) cale_week_time_pane_t

0x18b1,	// (0x0005cb34) cell_cale_week_pane_g2

0x18ca,	// (0x0005cb4d) cell_cale_week_pane_g3_ParamLimits

0x18ca,	// (0x0005cb4d) cell_cale_week_pane_g3

0xa363,	// (0x000655e6) grid_highlight_pane_cp07

0xa36b,	// (0x000655ee) listscroll_gms_pane

0xa375,	// (0x000655f8) grid_gms_pane

0xa37e,	// (0x00065601) listscroll_gms_pane_g1

0xa386,	// (0x00065609) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0006a494) listscroll_gms_pane_g

0x18e2,	// (0x0005cb65) scroll_pane_cp010

0x18ed,	// (0x0005cb70) cell_gms_pane_ParamLimits

0x18ed,	// (0x0005cb70) cell_gms_pane

0x1900,	// (0x0005cb83) cell_gms_pane_g1

0xa38e,	// (0x00065611) cell_gms_pane_g2

0xa310,	// (0x00065593) cell_gms_pane_g3

0xa396,	// (0x00065619) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0006a499) cell_gms_pane_g

0xa39f,	// (0x00065622) grid_highlight_pane_cp09

0x3c70,	// (0x0005eef3) phob_pre_status_pane_g1

0x3c78,	// (0x0005eefb) phob_pre_status_pane_g2

0x3c80,	// (0x0005ef03) phob_pre_status_pane_g3

0x3c88,	// (0x0005ef0b) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x0006a888) phob_pre_status_pane_g

0x3c9a,	// (0x0005ef1d) phob_pre_status_pane_t1

0x3ca8,	// (0x0005ef2b) phob_pre_status_pane_t2

0x3cb8,	// (0x0005ef3b) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x0006a893) phob_pre_status_pane_t

0x9de0,	// (0x00065063) bg_list_pane_cp05

0xa3af,	// (0x00065632) grid_vorec_pane

0xa3b7,	// (0x0006563a) vorec_t1

0xa3c5,	// (0x00065648) vorec_t2

0xa3d3,	// (0x00065656) vorec_t3

0xa3e1,	// (0x00065664) vorec_t4

0xa3ef,	// (0x00065672) vorec_t5

0xa3fd,	// (0x00065680) vorec_t6

0x0006,

0xf21f,	// (0x0006a4a2) vorec_t

0xa419,	// (0x0006569c) wait_bar_pane_cp01

0xa421,	// (0x000656a4) cell_vorec_pane_ParamLimits

0xa421,	// (0x000656a4) cell_vorec_pane

0xa434,	// (0x000656b7) cell_vorec_pane_g1

0x9de0,	// (0x00065063) grid_highlight_pane_cp05

0x1920,	// (0x0005cba3) cams_zoom_pane

0x192f,	// (0x0005cbb2) image_vga_pane

0x1949,	// (0x0005cbcc) main_camera_pane_g1

0x195b,	// (0x0005cbde) main_camera_pane_g2

0x196d,	// (0x0005cbf0) main_camera_pane_g3

0x197f,	// (0x0005cc02) main_camera_pane_g4

0x1991,	// (0x0005cc14) main_camera_pane_g5

0x19a3,	// (0x0005cc26) main_camera_pane_g6

0x19b5,	// (0x0005cc38) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0006a4b1) main_camera_pane_g

0x19c7,	// (0x0005cc4a) main_camera_pane_t1

0x19dd,	// (0x0005cc60) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0006a4c2) main_camera_pane_t

0x1a19,	// (0x0005cc9c) cams_zoom_pane_cp_ParamLimits

0x1a19,	// (0x0005cc9c) cams_zoom_pane_cp

0x1a41,	// (0x0005ccc4) image_cif_pane_ParamLimits

0x1a41,	// (0x0005ccc4) image_cif_pane

0x1a7c,	// (0x0005ccff) image_subqcif_pane

0x1a84,	// (0x0005cd07) main_video_pane_g1_ParamLimits

0x1a84,	// (0x0005cd07) main_video_pane_g1

0x1aa8,	// (0x0005cd2b) main_video_pane_g2_ParamLimits

0x1aa8,	// (0x0005cd2b) main_video_pane_g2

0x1ade,	// (0x0005cd61) main_video_pane_g3_ParamLimits

0x1ade,	// (0x0005cd61) main_video_pane_g3

0x1b0e,	// (0x0005cd91) main_video_pane_g4_ParamLimits

0x1b0e,	// (0x0005cd91) main_video_pane_g4

0x1b3e,	// (0x0005cdc1) main_video_pane_g5_ParamLimits

0x1b3e,	// (0x0005cdc1) main_video_pane_g5

0xa44a,	// (0x000656cd) main_video_pane_g6_ParamLimits

0xa44a,	// (0x000656cd) main_video_pane_g6

0x0006,

0xf244,	// (0x0006a4c7) main_video_pane_g_ParamLimits

0xf244,	// (0x0006a4c7) main_video_pane_g

0x1b69,	// (0x0005cdec) main_video_pane_t1_ParamLimits

0x1b69,	// (0x0005cdec) main_video_pane_t1

0xa464,	// (0x000656e7) cams_zoom_pane_g1

0xa46d,	// (0x000656f0) cams_zoom_pane_g2

0xa476,	// (0x000656f9) cams_zoom_pane_g3

0xa47f,	// (0x00065702) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0006a4d6) cams_zoom_pane_g

0x1bc6,	// (0x0005ce49) grid_cams_pane

0x1be0,	// (0x0005ce63) linegrid_cams_pane

0x1bf3,	// (0x0005ce76) cell_cams_pane_ParamLimits

0x1bf3,	// (0x0005ce76) cell_cams_pane

0xa488,	// (0x0006570b) cams_burst_image_pane

0xa490,	// (0x00065713) cell_cams_pane_g1

0x9de0,	// (0x00065063) grid_highlight_pane_cp03

0xa1ef,	// (0x00065472) mp_bg_pane_g1

0x9de0,	// (0x00065063) bg_list_pane_cp03

0xc12e,	// (0x000673b1) bg_mp_pane

0xc136,	// (0x000673b9) grid_mp_pane

0xc13e,	// (0x000673c1) media_player_g1

0xc146,	// (0x000673c9) media_player_t1

0xc154,	// (0x000673d7) media_player_t2

0xc162,	// (0x000673e5) media_player_t3

0xc170,	// (0x000673f3) media_player_t4

0xc17e,	// (0x00067401) media_player_t5

0xc18c,	// (0x0006740f) media_player_t6

0xc19a,	// (0x0006741d) media_player_t7

0x0006,

0xf5ef,	// (0x0006a872) media_player_t

0xc1a8,	// (0x0006742b) wait_bar_pane_cp02

0xf5d4,	// (0x0006a857) main_usb_pane_t

0x3c67,	// (0x0005eeea) cell_mp_pane

0xa1ef,	// (0x00065472) cell_mp_pane_g1

0x9de0,	// (0x00065063) grid_highlight_pane_cp06

0xa498,	// (0x0006571b) grid_skin_colour_pane

0xa4a0,	// (0x00065723) list_highlight_pane_cp03

0x1d0b,	// (0x0005cf8e) skin_g1

0xa4a8,	// (0x0006572b) skin_t1

0xa4b7,	// (0x0006573a) skin_t2

0x0001,

0xf288,	// (0x0006a50b) skin_t

0x1d13,	// (0x0005cf96) cell_skin_colour_pane_ParamLimits

0x1d13,	// (0x0005cf96) cell_skin_colour_pane

0xa4c5,	// (0x00065748) cell_skin_colour_pane_g1

0x1d8c,	// (0x0005d00f) call_video_g1_ParamLimits

0x1d8c,	// (0x0005d00f) call_video_g1

0x1da8,	// (0x0005d02b) call_video_g2_ParamLimits

0x1da8,	// (0x0005d02b) call_video_g2

0x0001,

0xf28d,	// (0x0006a510) call_video_g_ParamLimits

0xf28d,	// (0x0006a510) call_video_g

0x1dfa,	// (0x0005d07d) call_video_uplink_pane_cp1_ParamLimits

0x1dfa,	// (0x0005d07d) call_video_uplink_pane_cp1

0xa4d7,	// (0x0006575a) call_video_uplink_pane_cp2

0x1e99,	// (0x0005d11c) video_down_crop_pane_ParamLimits

0x1e99,	// (0x0005d11c) video_down_crop_pane

0x1f82,	// (0x0005d205) video_down_pane_ParamLimits

0x1f82,	// (0x0005d205) video_down_pane

0xa4df,	// (0x00065762) video_down_subqcif_pane_ParamLimits

0xa4df,	// (0x00065762) video_down_subqcif_pane

0xa4f7,	// (0x0006577a) video_down_subqcif_pane_cp_ParamLimits

0xa4f7,	// (0x0006577a) video_down_subqcif_pane_cp

0xa51b,	// (0x0006579e) im_reading_pane_ParamLimits

0xa51b,	// (0x0006579e) im_reading_pane

0x2090,	// (0x0005d313) im_writing_pane_ParamLimits

0x2090,	// (0x0005d313) im_writing_pane

0x20a6,	// (0x0005d329) im_reading_pane_t1

0xa535,	// (0x000657b8) list_im_pane

0xa546,	// (0x000657c9) scroll_pane_cp07

0x20e2,	// (0x0005d365) im_writing_pane_t1_ParamLimits

0x20e2,	// (0x0005d365) im_writing_pane_t1

0xa55f,	// (0x000657e2) im_writing_pane_t2_ParamLimits

0xa55f,	// (0x000657e2) im_writing_pane_t2

0x0001,

0xf297,	// (0x0006a51a) im_writing_pane_t_ParamLimits

0xf297,	// (0x0006a51a) im_writing_pane_t

0x9de0,	// (0x00065063) input_focus_pane_cp04

0x9de0,	// (0x00065063) input_focus_pane_cp05

0x20f7,	// (0x0005d37a) list_im_single_pane_ParamLimits

0x20f7,	// (0x0005d37a) list_im_single_pane

0x210d,	// (0x0005d390) list_single_im_pane_t1

0x3c27,	// (0x0005eeaa) blid_accuracy_pane

0x3c2f,	// (0x0005eeb2) blid_compass_pane

0x3c39,	// (0x0005eebc) main_location_t1

0x3c49,	// (0x0005eecc) main_location_t2

0x3c59,	// (0x0005eedc) main_location_t3

0x0002,

0xf5fe,	// (0x0006a881) main_location_t

0x9de0,	// (0x00065063) aid_levels_location

0xa1ef,	// (0x00065472) blid_accuracy_pane_g1

0xa1ef,	// (0x00065472) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0006a57c) blid_accuracy_pane_g

0xa5a7,	// (0x0006582a) wml_content_pane

0xa5e5,	// (0x00065868) wml_button_pane_ParamLimits

0xa5e5,	// (0x00065868) wml_button_pane

0x211c,	// (0x0005d39f) wml_list_single_large_pane_ParamLimits

0x211c,	// (0x0005d39f) wml_list_single_large_pane

0x2133,	// (0x0005d3b6) wml_list_single_medium_pane_ParamLimits

0x2133,	// (0x0005d3b6) wml_list_single_medium_pane

0x214b,	// (0x0005d3ce) wml_list_single_small_pane_ParamLimits

0x214b,	// (0x0005d3ce) wml_list_single_small_pane

0xa5f9,	// (0x0006587c) wml_selection_box_pane_ParamLimits

0xa5f9,	// (0x0006587c) wml_selection_box_pane

0xa60c,	// (0x0006588f) wml_list_single_pane_t1

0xa61b,	// (0x0006589e) wml_list_single_medium_pane_t1

0xa62a,	// (0x000658ad) wml_list_single_large_pane_t1

0xa639,	// (0x000658bc) input_focus_pane_cp02_ParamLimits

0xa639,	// (0x000658bc) input_focus_pane_cp02

0xa64c,	// (0x000658cf) wml_selection_box_pane_g1

0xa655,	// (0x000658d8) wml_selection_box_pane_t1_ParamLimits

0xa655,	// (0x000658d8) wml_selection_box_pane_t1

0xa03b,	// (0x000652be) bg_wml_button_pane_ParamLimits

0xa03b,	// (0x000652be) bg_wml_button_pane

0xa66d,	// (0x000658f0) wml_button_pane_g1

0xa675,	// (0x000658f8) wml_button_pane_t1

0xa66d,	// (0x000658f0) wml_button_bg_pane_g1

0xa685,	// (0x00065908) wml_button_bg_pane_g2

0xa68d,	// (0x00065910) wml_button_bg_pane_g3

0xa695,	// (0x00065918) wml_button_bg_pane_g4

0xa69d,	// (0x00065920) wml_button_bg_pane_g5

0xa6a5,	// (0x00065928) wml_button_bg_pane_g6

0xa6ad,	// (0x00065930) wml_button_bg_pane_g7

0xa6b5,	// (0x00065938) wml_button_bg_pane_g8

0xa6bd,	// (0x00065940) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0006a51f) wml_button_bg_pane_g

0x2169,	// (0x0005d3ec) bg_list_pane_cp02

0xa6c5,	// (0x00065948) mce_header_pane_ParamLimits

0xa6c5,	// (0x00065948) mce_header_pane

0xa6db,	// (0x0006595e) mce_icon_pane

0xa6db,	// (0x0006595e) mce_image_pane

0xa6e4,	// (0x00065967) mce_text_pane_ParamLimits

0xa6e4,	// (0x00065967) mce_text_pane

0x2171,	// (0x0005d3f4) scroll_pane_cp03

0xa5dd,	// (0x00065860) scroll_pane_cp04

0xa6f7,	// (0x0006597a) scroll_pane_cp05_ParamLimits

0xa6f7,	// (0x0006597a) scroll_pane_cp05

0x217b,	// (0x0005d3fe) mce_header_field_pane_ParamLimits

0x217b,	// (0x0005d3fe) mce_header_field_pane

0x2192,	// (0x0005d415) mce_header_field_pane_2_ParamLimits

0x2192,	// (0x0005d415) mce_header_field_pane_2

0x21a8,	// (0x0005d42b) mce_header_field_pane_3

0x21b0,	// (0x0005d433) list_single_mce_message_pane_ParamLimits

0x21b0,	// (0x0005d433) list_single_mce_message_pane

0x21c8,	// (0x0005d44b) list_single_mce_smart_pane_ParamLimits

0x21c8,	// (0x0005d44b) list_single_mce_smart_pane

0xa703,	// (0x00065986) input_focus_pane_cp03

0xa70c,	// (0x0006598f) list_header_data_pane

0x21eb,	// (0x0005d46e) mce_header_field_pane_t1

0x21fb,	// (0x0005d47e) list_single_mce_header_pane_ParamLimits

0x21fb,	// (0x0005d47e) list_single_mce_header_pane

0xa714,	// (0x00065997) list_single_mce_header_pane_t1

0xa723,	// (0x000659a6) list_single_mce_message_pane_g1

0xa72b,	// (0x000659ae) list_single_mce_message_pane_t1

0x222d,	// (0x0005d4b0) bg_cale_heading_pane_cp01_ParamLimits

0x222d,	// (0x0005d4b0) bg_cale_heading_pane_cp01

0xa739,	// (0x000659bc) bg_cale_pane_cp02_ParamLimits

0xa739,	// (0x000659bc) bg_cale_pane_cp02

0x2250,	// (0x0005d4d3) cale_month_corner_pane

0x2266,	// (0x0005d4e9) cale_month_day_heading_pane_ParamLimits

0x2266,	// (0x0005d4e9) cale_month_day_heading_pane

0x2299,	// (0x0005d51c) cale_month_pane_g1_ParamLimits

0x2299,	// (0x0005d51c) cale_month_pane_g1

0x22b5,	// (0x0005d538) cale_month_pane_g2_ParamLimits

0x22b5,	// (0x0005d538) cale_month_pane_g2

0x22d0,	// (0x0005d553) cale_month_pane_g3_ParamLimits

0x22d0,	// (0x0005d553) cale_month_pane_g3

0x22fc,	// (0x0005d57f) cale_month_pane_g4_ParamLimits

0x22fc,	// (0x0005d57f) cale_month_pane_g4

0x2328,	// (0x0005d5ab) cale_month_pane_g5_ParamLimits

0x2328,	// (0x0005d5ab) cale_month_pane_g5

0x235c,	// (0x0005d5df) cale_month_pane_g6_ParamLimits

0x235c,	// (0x0005d5df) cale_month_pane_g6

0x2398,	// (0x0005d61b) cale_month_pane_g7_ParamLimits

0x2398,	// (0x0005d61b) cale_month_pane_g7

0x23d4,	// (0x0005d657) cale_month_pane_g8_ParamLimits

0x23d4,	// (0x0005d657) cale_month_pane_g8

0x2410,	// (0x0005d693) cale_month_pane_g9_ParamLimits

0x2410,	// (0x0005d693) cale_month_pane_g9

0x244a,	// (0x0005d6cd) cale_month_pane_g10_ParamLimits

0x244a,	// (0x0005d6cd) cale_month_pane_g10

0x2484,	// (0x0005d707) cale_month_pane_g11_ParamLimits

0x2484,	// (0x0005d707) cale_month_pane_g11

0x24be,	// (0x0005d741) cale_month_pane_g12_ParamLimits

0x24be,	// (0x0005d741) cale_month_pane_g12

0x24f8,	// (0x0005d77b) cale_month_pane_g13_ParamLimits

0x24f8,	// (0x0005d77b) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0006a532) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0006a532) cale_month_pane_g

0x2532,	// (0x0005d7b5) cale_month_week_pane

0x2545,	// (0x0005d7c8) grid_cale_month_pane_ParamLimits

0x2545,	// (0x0005d7c8) grid_cale_month_pane

0x2573,	// (0x0005d7f6) cale_month_day_heading_pane_t1

0x25d1,	// (0x0005d854) cale_month_day_heading_pane_t2

0x2636,	// (0x0005d8b9) cale_month_day_heading_pane_t3

0x269b,	// (0x0005d91e) cale_month_day_heading_pane_t4

0x2700,	// (0x0005d983) cale_month_day_heading_pane_t5

0x2775,	// (0x0005d9f8) cale_month_day_heading_pane_t6

0x27ea,	// (0x0005da6d) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0006a54d) cale_month_day_heading_pane_t

0xa355,	// (0x000655d8) bg_cale_side_pane_cp01

0x285f,	// (0x0005dae2) cale_month_week_pane_t1

0x2876,	// (0x0005daf9) cale_month_week_pane_t2

0x288d,	// (0x0005db10) cale_month_week_pane_t3

0x28a4,	// (0x0005db27) cale_month_week_pane_t4

0x28bb,	// (0x0005db3e) cale_month_week_pane_t5

0x28d2,	// (0x0005db55) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0006a55c) cale_month_week_pane_t

0x28e9,	// (0x0005db6c) cell_cale_month_pane_ParamLimits

0x28e9,	// (0x0005db6c) cell_cale_month_pane

0xa76e,	// (0x000659f1) cell_cale_month_pane_g1

0x29e9,	// (0x0005dc6c) cell_cale_month_pane_t1_ParamLimits

0x29e9,	// (0x0005dc6c) cell_cale_month_pane_t1

0xa363,	// (0x000655e6) grid_highlight_pane_cp08

0xa1ef,	// (0x00065472) main_smil_g1

0x2a05,	// (0x0005dc88) smil_status_pane

0xa77a,	// (0x000659fd) smil_text_pane

0xc046,	// (0x000672c9) bg_popup_call3_rect_pane_g8

0xc04e,	// (0x000672d1) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0006a815) bg_popup_call3_rect_pane_g

0xc2d0,	// (0x00067553) smil_status_volume_pane_g1

0xa784,	// (0x00065a07) smil_status_pane_t1

0xc303,	// (0x00067586) volume_smil_pane

0xa79b,	// (0x00065a1e) list_smil_text_pane

0x2a1a,	// (0x0005dc9d) scroll_pane_cp011

0x2a25,	// (0x0005dca8) smil_text_list_pane_t1_ParamLimits

0x2a25,	// (0x0005dca8) smil_text_list_pane_t1

0xa7a5,	// (0x00065a28) aid_volume_smil_ParamLimits

0xa7a5,	// (0x00065a28) aid_volume_smil

0xa1ef,	// (0x00065472) smil_volume_pane_g1

0xa1ef,	// (0x00065472) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0006a57c) smil_volume_pane_g

0xa176,	// (0x000653f9) listscroll_cale_day_pane

0xa7c7,	// (0x00065a4a) bg_cale_pane

0xa7df,	// (0x00065a62) list_cale_pane

0xa7f0,	// (0x00065a73) scroll_pane_cp09

0xa801,	// (0x00065a84) cale_bg_pane_g1

0xa809,	// (0x00065a8c) cale_bg_pane_g2

0xa811,	// (0x00065a94) cale_bg_pane_g3

0xa819,	// (0x00065a9c) cale_bg_pane_g4

0xa821,	// (0x00065aa4) cale_bg_pane_g5

0xa829,	// (0x00065aac) cale_bg_pane_g6

0xa831,	// (0x00065ab4) cale_bg_pane_g7

0xa839,	// (0x00065abc) cale_bg_pane_g8

0xa841,	// (0x00065ac4) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x0006a581) cale_bg_pane_g

0x2a79,	// (0x0005dcfc) list_cale_time_pane_ParamLimits

0x2a79,	// (0x0005dcfc) list_cale_time_pane

0x2a8e,	// (0x0005dd11) list_cale_time_pane_g1_ParamLimits

0x2a8e,	// (0x0005dd11) list_cale_time_pane_g1

0xa849,	// (0x00065acc) list_cale_time_pane_g2_ParamLimits

0xa849,	// (0x00065acc) list_cale_time_pane_g2

0x2a9a,	// (0x0005dd1d) list_cale_time_pane_g3_ParamLimits

0x2a9a,	// (0x0005dd1d) list_cale_time_pane_g3

0x2ab6,	// (0x0005dd39) list_cale_time_pane_g4_ParamLimits

0x2ab6,	// (0x0005dd39) list_cale_time_pane_g4

0x2ac4,	// (0x0005dd47) list_cale_time_pane_g5_ParamLimits

0x2ac4,	// (0x0005dd47) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x0006a594) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x0006a594) list_cale_time_pane_g

0x2ad2,	// (0x0005dd55) list_cale_time_pane_t1_ParamLimits

0x2ad2,	// (0x0005dd55) list_cale_time_pane_t1

0x2afa,	// (0x0005dd7d) list_cale_time_pane_t2_ParamLimits

0x2afa,	// (0x0005dd7d) list_cale_time_pane_t2

0x2e9c,	// (0x0005e11f) aid_blid_cardinal_pane

0x2eda,	// (0x0005e15d) compass_pane_t4

0x2b22,	// (0x0005dda5) list_cale_time_pane_t4_ParamLimits

0x2b22,	// (0x0005dda5) list_cale_time_pane_t4

0x2ee8,	// (0x0005e16b) compass_pane_t5

0x2ef6,	// (0x0005e179) compass_pane_t6

0x2f04,	// (0x0005e187) compass_pane_t7

0xacf2,	// (0x00065f75) navi_pane_cc_t1

0xae59,	// (0x000660dc) aid_phob_thumbnail_center_pane

0x363b,	// (0x0005e8be) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x0006a5a1) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x0006a5a1) list_cale_time_pane_t

0x9a39,	// (0x00064cbc) bg_popup_window_pane_cp02_ParamLimits

0x9a39,	// (0x00064cbc) bg_popup_window_pane_cp02

0xa863,	// (0x00065ae6) heading_pane_cp01_ParamLimits

0xa863,	// (0x00065ae6) heading_pane_cp01

0xa86f,	// (0x00065af2) loc_req_pane_ParamLimits

0xa86f,	// (0x00065af2) loc_req_pane

0xa87f,	// (0x00065b02) loc_type_pane_ParamLimits

0xa87f,	// (0x00065b02) loc_type_pane

0xa891,	// (0x00065b14) loc_type_pane_t1_ParamLimits

0xa891,	// (0x00065b14) loc_type_pane_t1

0xa8a3,	// (0x00065b26) loc_type_pane_t2_ParamLimits

0xa8a3,	// (0x00065b26) loc_type_pane_t2

0xa8b5,	// (0x00065b38) loc_type_pane_t3_ParamLimits

0xa8b5,	// (0x00065b38) loc_type_pane_t3

0x0002,

0xf325,	// (0x0006a5a8) loc_type_pane_t_ParamLimits

0xf325,	// (0x0006a5a8) loc_type_pane_t

0xa8c7,	// (0x00065b4a) list_loc_req_pane

0xa8d1,	// (0x00065b54) scroll_pane_cp012

0x2b4a,	// (0x0005ddcd) list_single_loc_request_popup_menu_pane_ParamLimits

0x2b4a,	// (0x0005ddcd) list_single_loc_request_popup_menu_pane

0xa8dc,	// (0x00065b5f) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa8dc,	// (0x00065b5f) list_single_loc_request_popup_menu_pane_g1

0xa8e8,	// (0x00065b6b) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa8e8,	// (0x00065b6b) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0006a5af) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0006a5af) list_single_loc_request_popup_menu_pane_g

0xa8f4,	// (0x00065b77) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa8f4,	// (0x00065b77) list_single_loc_request_popup_menu_pane_t1

0xa03b,	// (0x000652be) bg_popup_window_pane_cp03_ParamLimits

0xa03b,	// (0x000652be) bg_popup_window_pane_cp03

0xa90a,	// (0x00065b8d) heading_loc_req_pane_ParamLimits

0xa90a,	// (0x00065b8d) heading_loc_req_pane

0x2b57,	// (0x0005ddda) popup_dyc_status_message_window_g1_ParamLimits

0x2b57,	// (0x0005ddda) popup_dyc_status_message_window_g1

0x2b6b,	// (0x0005ddee) popup_dyc_status_message_window_t1_ParamLimits

0x2b6b,	// (0x0005ddee) popup_dyc_status_message_window_t1

0x2b80,	// (0x0005de03) popup_dyc_status_message_window_t2_ParamLimits

0x2b80,	// (0x0005de03) popup_dyc_status_message_window_t2

0x2b95,	// (0x0005de18) popup_dyc_status_message_window_t3_ParamLimits

0x2b95,	// (0x0005de18) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x0006a5b4) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x0006a5b4) popup_dyc_status_message_window_t

0x9de0,	// (0x00065063) bg_heading_pane_cp01

0xa916,	// (0x00065b99) heading_loc_req_pane_g1

0xa91e,	// (0x00065ba1) heading_loc_req_pane_g2

0xa926,	// (0x00065ba9) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0006a5bb) heading_loc_req_pane_g

0xa92e,	// (0x00065bb1) heading_loc_req_pane_t1

0xa93d,	// (0x00065bc0) bg_popup_sub_pane_cp01_ParamLimits

0xa93d,	// (0x00065bc0) bg_popup_sub_pane_cp01

0xa94b,	// (0x00065bce) popup_cale_events_window_g1_ParamLimits

0xa94b,	// (0x00065bce) popup_cale_events_window_g1

0xa96b,	// (0x00065bee) popup_cale_events_window_g2_ParamLimits

0xa96b,	// (0x00065bee) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0006a5ef) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0006a5ef) popup_cale_events_window_g

0xa98b,	// (0x00065c0e) popup_cale_events_window_t1_ParamLimits

0xa98b,	// (0x00065c0e) popup_cale_events_window_t1

0xa99d,	// (0x00065c20) popup_cale_events_window_t2_ParamLimits

0xa99d,	// (0x00065c20) popup_cale_events_window_t2

0xa9db,	// (0x00065c5e) popup_cale_events_window_t3_ParamLimits

0xa9db,	// (0x00065c5e) popup_cale_events_window_t3

0xaa15,	// (0x00065c98) popup_cale_events_window_t4_ParamLimits

0xaa15,	// (0x00065c98) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x0006a5f4) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x0006a5f4) popup_cale_events_window_t

0x2c98,	// (0x0005df1b) call_type_pane

0x2ca8,	// (0x0005df2b) popup_call_status_window_g1

0x2cbc,	// (0x0005df3f) popup_call_status_window_g2

0x2cd0,	// (0x0005df53) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x0006a5fd) popup_call_status_window_g

0xaa4b,	// (0x00065cce) call_type_pane_g1

0xaa54,	// (0x00065cd7) call_type_pane_g2

0x0001,

0xf381,	// (0x0006a604) call_type_pane_g

0x9de0,	// (0x00065063) bg_popup_sub_pane_cp02

0xaa5d,	// (0x00065ce0) listscroll_popup_wml_pane

0xaa65,	// (0x00065ce8) list_wml_pane

0xaa6f,	// (0x00065cf2) scroll_pane_cp013

0xaa7a,	// (0x00065cfd) list_single_graphic_popup_wml_pane_ParamLimits

0xaa7a,	// (0x00065cfd) list_single_graphic_popup_wml_pane

0xa1ef,	// (0x00065472) list_single_graphic_popup_wml_pane_g1

0xaa8e,	// (0x00065d11) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0006a609) list_single_graphic_popup_wml_pane_g

0xaa96,	// (0x00065d19) list_single_graphic_popup_wml_pane_t1

0xaaac,	// (0x00065d2f) aid_call_pane

0xa033,	// (0x000652b6) popup_clock_analogue_window_g1

0xa033,	// (0x000652b6) popup_clock_analogue_window_g2

0xaab4,	// (0x00065d37) popup_clock_analogue_window_g3

0xaab4,	// (0x00065d37) popup_clock_analogue_window_g4

0xa1ef,	// (0x00065472) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x0006a60e) popup_clock_analogue_window_g

0xaabc,	// (0x00065d3f) popup_clock_analogue_window_t1

0xaaca,	// (0x00065d4d) clock_digital_number_pane_ParamLimits

0xaaca,	// (0x00065d4d) clock_digital_number_pane

0xaad6,	// (0x00065d59) clock_digital_number_pane_cp02_ParamLimits

0xaad6,	// (0x00065d59) clock_digital_number_pane_cp02

0xaae2,	// (0x00065d65) clock_digital_number_pane_cp03_ParamLimits

0xaae2,	// (0x00065d65) clock_digital_number_pane_cp03

0xaaee,	// (0x00065d71) clock_digital_number_pane_cp04_ParamLimits

0xaaee,	// (0x00065d71) clock_digital_number_pane_cp04

0xaafa,	// (0x00065d7d) clock_digital_separator_pane_ParamLimits

0xaafa,	// (0x00065d7d) clock_digital_separator_pane

0xab06,	// (0x00065d89) popup_clock_digital_window_t1

0xa1ef,	// (0x00065472) clock_digital_number_pane_g1

0xa1ef,	// (0x00065472) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0006a57c) clock_digital_number_pane_g

0xa1ef,	// (0x00065472) clock_digital_separator_pane_g1

0xa1ef,	// (0x00065472) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0006a57c) clock_digital_separator_pane_g

0x9de0,	// (0x00065063) bg_popup_window_pane_cp04

0xab23,	// (0x00065da6) heading_pane_cp03

0xab2b,	// (0x00065dae) listscroll_popup_gms_pane

0xab33,	// (0x00065db6) grid_large_graphic_popup_pane

0xab3d,	// (0x00065dc0) listscroll_popup_gms_pane_g1

0xab45,	// (0x00065dc8) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0006a619) listscroll_popup_gms_pane_g

0xa5dd,	// (0x00065860) scroll_pane_cp014

0xab4d,	// (0x00065dd0) cell_large_graphic_popup_pane_ParamLimits

0xab4d,	// (0x00065dd0) cell_large_graphic_popup_pane

0xab65,	// (0x00065de8) cell_large_graphic_popup_pane_g1_ParamLimits

0xab65,	// (0x00065de8) cell_large_graphic_popup_pane_g1

0xab71,	// (0x00065df4) cell_large_graphic_popup_pane_g2_ParamLimits

0xab71,	// (0x00065df4) cell_large_graphic_popup_pane_g2

0xab7d,	// (0x00065e00) cell_large_graphic_popup_pane_g3_ParamLimits

0xab7d,	// (0x00065e00) cell_large_graphic_popup_pane_g3

0xab8a,	// (0x00065e0d) cell_large_graphic_popup_pane_g4_ParamLimits

0xab8a,	// (0x00065e0d) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x0006a61e) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x0006a61e) cell_large_graphic_popup_pane_g

0xab9a,	// (0x00065e1d) grid_highlight_pane_cp010

0xa1ef,	// (0x00065472) bg_popup_call_pane_g1

0xaba4,	// (0x00065e27) list_single_graphic_popup_conf_pane_ParamLimits

0xaba4,	// (0x00065e27) list_single_graphic_popup_conf_pane

0xabb6,	// (0x00065e39) list_highlight_pane_cp01

0xabbf,	// (0x00065e42) list_single_graphic_popup_conf_pane_g1

0xabc7,	// (0x00065e4a) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0006a627) list_single_graphic_popup_conf_pane_g

0xabcf,	// (0x00065e52) list_single_graphic_popup_conf_pane_t1

0xabdd,	// (0x00065e60) linegrid_cams_pane_g1

0x2ce0,	// (0x0005df63) linegrid_cams_pane_g2

0xa310,	// (0x00065593) linegrid_cams_pane_g3

0xabe6,	// (0x00065e69) linegrid_cams_pane_g4

0x2ce9,	// (0x0005df6c) linegrid_cams_pane_g5

0x2cf2,	// (0x0005df75) linegrid_cams_pane_g6

0xa396,	// (0x00065619) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x0006a62c) linegrid_cams_pane_g

0xabef,	// (0x00065e72) popup_clock_analogue_window

0xabef,	// (0x00065e72) popup_clock_digital_window

0x9de0,	// (0x00065063) popup_phob_thumbnail_window

0xa1ef,	// (0x00065472) call_video_uplink_pane_g1

0xabf8,	// (0x00065e7b) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x0006a63b) call_video_uplink_pane_g

0xa363,	// (0x000655e6) video_uplink_pane

0xac00,	// (0x00065e83) mce_image_pane_g1

0x2cfd,	// (0x0005df80) mce_image_pane_g2

0x2d05,	// (0x0005df88) mce_image_pane_g3

0x2d0d,	// (0x0005df90) mce_image_pane_g4

0x2d15,	// (0x0005df98) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0006a640) mce_image_pane_g

0xac0a,	// (0x00065e8d) control_top_pane_stacon_cp01_ParamLimits

0xac0a,	// (0x00065e8d) control_top_pane_stacon_cp01

0xac1e,	// (0x00065ea1) uni_indicator_pane_stacon_cp01_ParamLimits

0xac1e,	// (0x00065ea1) uni_indicator_pane_stacon_cp01

0xac2f,	// (0x00065eb2) bg_popup_sub_pane_cp03

0x2d1d,	// (0x0005dfa0) chi_dic_find_pane

0x2d25,	// (0x0005dfa8) listscroll_chi_dic_pane

0x2d2e,	// (0x0005dfb1) main_pane_chidic_g1

0x2d41,	// (0x0005dfc4) chi_dic_find_pane_t1

0xac39,	// (0x00065ebc) find_chidic_pane

0xac42,	// (0x00065ec5) chi_dic_list_pane_ParamLimits

0xac42,	// (0x00065ec5) chi_dic_list_pane

0xac53,	// (0x00065ed6) scroll_pane_cp020

0x2d4f,	// (0x0005dfd2) find_chidic_pane_t1

0x9de0,	// (0x00065063) input_focus_pane_cp06

0x2d5e,	// (0x0005dfe1) list_chi_dic_pane_ParamLimits

0x2d5e,	// (0x0005dfe1) list_chi_dic_pane

0xac5b,	// (0x00065ede) list_chi_dic_pane_t1_ParamLimits

0xac5b,	// (0x00065ede) list_chi_dic_pane_t1

0x9de0,	// (0x00065063) list_highlight_pane_cp020

0xac6e,	// (0x00065ef1) bg_cale_heading_pane_g1

0x2d72,	// (0x0005dff5) bg_cale_heading_pane_g2

0x2d7a,	// (0x0005dffd) bg_cale_heading_pane_g3

0x2d82,	// (0x0005e005) bg_cale_heading_pane_g4

0x2d8c,	// (0x0005e00f) bg_cale_heading_pane_g5

0x2d96,	// (0x0005e019) bg_cale_heading_pane_g6

0x2d9e,	// (0x0005e021) bg_cale_heading_pane_g7

0x2da6,	// (0x0005e029) bg_cale_heading_pane_g8

0x2db0,	// (0x0005e033) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0006a64b) bg_cale_heading_pane_g

0xac6e,	// (0x00065ef1) bg_cale_side_pane_g1

0x2dba,	// (0x0005e03d) bg_cale_side_pane_g2

0x2dc2,	// (0x0005e045) bg_cale_side_pane_g3

0x2dca,	// (0x0005e04d) bg_cale_side_pane_g4

0x2dd2,	// (0x0005e055) bg_cale_side_pane_g5

0x2dda,	// (0x0005e05d) bg_cale_side_pane_g6

0x2de2,	// (0x0005e065) bg_cale_side_pane_g7

0x2dea,	// (0x0005e06d) bg_cale_side_pane_g8

0x2df2,	// (0x0005e075) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0006a65e) bg_cale_side_pane_g

0x2dfa,	// (0x0005e07d) popup_call_status_window_ParamLimits

0x2dfa,	// (0x0005e07d) popup_call_status_window

0xac76,	// (0x00065ef9) stacon_top_pane

0xac7e,	// (0x00065f01) status_pane_ParamLimits

0xac7e,	// (0x00065f01) status_pane

0xac93,	// (0x00065f16) status_small_pane

0xac9b,	// (0x00065f1e) control_pane

0x9de0,	// (0x00065063) stacon_bottom_pane

0xaca3,	// (0x00065f26) list_single_mce_smart_pane_t1_ParamLimits

0xaca3,	// (0x00065f26) list_single_mce_smart_pane_t1

0xacb6,	// (0x00065f39) list_single_mce_smart_pane_t2_ParamLimits

0xacb6,	// (0x00065f39) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x0006a671) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x0006a671) list_single_mce_smart_pane_t

0x2e41,	// (0x0005e0c4) compass_pane

0x2e4a,	// (0x0005e0cd) main_location2_pane_t1

0x2e5e,	// (0x0005e0e1) main_location2_pane_t2

0x2e72,	// (0x0005e0f5) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0006a676) main_location2_pane_t

0xacd5,	// (0x00065f58) compass_pane_g1_ParamLimits

0xacd5,	// (0x00065f58) compass_pane_g1

0x2ebc,	// (0x0005e13f) compass_pane_t1

0x2ecb,	// (0x0005e14e) compass_pane_t2

0x0005,

0xf3fc,	// (0x0006a67f) compass_pane_t

0x2f12,	// (0x0005e195) text_secondary_cp61

0xace9,	// (0x00065f6c) navi_pane_cams_g5

0xad0c,	// (0x00065f8f) navi_pane_im_t1

0xad1a,	// (0x00065f9d) navi_pane_mp_g1_ParamLimits

0xad1a,	// (0x00065f9d) navi_pane_mp_g1

0xad2e,	// (0x00065fb1) navi_pane_mp_g2_ParamLimits

0xad2e,	// (0x00065fb1) navi_pane_mp_g2

0xad3a,	// (0x00065fbd) navi_pane_mp_g3_ParamLimits

0xad3a,	// (0x00065fbd) navi_pane_mp_g3

0x0002,

0xf410,	// (0x0006a693) navi_pane_mp_g_ParamLimits

0xf410,	// (0x0006a693) navi_pane_mp_g

0xad46,	// (0x00065fc9) navi_pane_mp_t1

0xad54,	// (0x00065fd7) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0006a69a) navi_pane_mp_t

0xad90,	// (0x00066013) navi_pane_vt_g1

0xad46,	// (0x00065fc9) navi_pane_vt_t1

0xad98,	// (0x0006601b) navi_slider_pane

0xada0,	// (0x00066023) zooming_pane

0xada8,	// (0x0006602b) navi_slider_pane_g1

0xadb1,	// (0x00066034) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x0006a6a1) navi_slider_pane_g

0xadde,	// (0x00066061) aid_levels_zoom

0xade6,	// (0x00066069) zooming_pane_g1

0xadee,	// (0x00066071) zooming_pane_g2

0xadee,	// (0x00066071) zooming_pane_g3

0x0002,

0xf42d,	// (0x0006a6b0) zooming_pane_g

0xadf6,	// (0x00066079) level_10_zoom

0xadff,	// (0x00066082) level_11_zoom

0xae08,	// (0x0006608b) level_1_zoom

0xae11,	// (0x00066094) level_2_zoom

0xae1a,	// (0x0006609d) level_3_zoom

0xae23,	// (0x000660a6) level_4_zoom

0xae2c,	// (0x000660af) level_5_zoom

0xae35,	// (0x000660b8) level_6_zoom

0xae3e,	// (0x000660c1) level_7_zoom

0xae47,	// (0x000660ca) level_8_zoom

0xae50,	// (0x000660d3) level_9_zoom

0xae61,	// (0x000660e4) popup_phob_thumbnail_window_g1

0xae69,	// (0x000660ec) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0006a6b7) popup_phob_thumbnail_window_g

0xc1b0,	// (0x00067433) level_1_location

0xc1b8,	// (0x0006743b) level_2_location

0xc1c0,	// (0x00067443) level_3_location

0xc1c8,	// (0x0006744b) level_4_location

0xada0,	// (0x00066023) level_5_location

0x303b,	// (0x0005e2be) mce_icon_pane_g1

0x3043,	// (0x0005e2c6) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0006a6bc) mce_icon_pane_g

0x304b,	// (0x0005e2ce) main_mup_pane_g1_ParamLimits

0x304b,	// (0x0005e2ce) main_mup_pane_g1

0x3061,	// (0x0005e2e4) main_mup_pane_g2_ParamLimits

0x3061,	// (0x0005e2e4) main_mup_pane_g2

0x3079,	// (0x0005e2fc) main_mup_pane_g3_ParamLimits

0x3079,	// (0x0005e2fc) main_mup_pane_g3

0x3091,	// (0x0005e314) main_mup_pane_g4_ParamLimits

0x3091,	// (0x0005e314) main_mup_pane_g4

0x30a9,	// (0x0005e32c) main_mup_pane_g5_ParamLimits

0x30a9,	// (0x0005e32c) main_mup_pane_g5

0x30c5,	// (0x0005e348) main_mup_pane_g6_ParamLimits

0x30c5,	// (0x0005e348) main_mup_pane_g6

0x30dd,	// (0x0005e360) main_mup_pane_g7_ParamLimits

0x30dd,	// (0x0005e360) main_mup_pane_g7

0x30f5,	// (0x0005e378) main_mup_pane_g8_ParamLimits

0x30f5,	// (0x0005e378) main_mup_pane_g8

0x310d,	// (0x0005e390) main_mup_pane_g9_ParamLimits

0x310d,	// (0x0005e390) main_mup_pane_g9

0x3127,	// (0x0005e3aa) main_mup_pane_g10_ParamLimits

0x3127,	// (0x0005e3aa) main_mup_pane_g10

0x3141,	// (0x0005e3c4) main_mup_pane_g11_ParamLimits

0x3141,	// (0x0005e3c4) main_mup_pane_g11

0x3155,	// (0x0005e3d8) main_mup_pane_g12_ParamLimits

0x3155,	// (0x0005e3d8) main_mup_pane_g12

0x316b,	// (0x0005e3ee) main_mup_pane_g13_ParamLimits

0x316b,	// (0x0005e3ee) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0006a6c1) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0006a6c1) main_mup_pane_g

0x317f,	// (0x0005e402) main_mup_pane_t1_ParamLimits

0x317f,	// (0x0005e402) main_mup_pane_t1

0x3199,	// (0x0005e41c) main_mup_pane_t2_ParamLimits

0x3199,	// (0x0005e41c) main_mup_pane_t2

0x31b1,	// (0x0005e434) main_mup_pane_t3_ParamLimits

0x31b1,	// (0x0005e434) main_mup_pane_t3

0x31c9,	// (0x0005e44c) main_mup_pane_t4_ParamLimits

0x31c9,	// (0x0005e44c) main_mup_pane_t4

0x31e7,	// (0x0005e46a) main_mup_pane_t5_ParamLimits

0x31e7,	// (0x0005e46a) main_mup_pane_t5

0x31fc,	// (0x0005e47f) main_mup_pane_t6_ParamLimits

0x31fc,	// (0x0005e47f) main_mup_pane_t6

0x0005,

0xf459,	// (0x0006a6dc) main_mup_pane_t_ParamLimits

0xf459,	// (0x0006a6dc) main_mup_pane_t

0x320e,	// (0x0005e491) mup_progress_pane_ParamLimits

0x320e,	// (0x0005e491) mup_progress_pane

0x321a,	// (0x0005e49d) mup_visualizer_pane_ParamLimits

0x321a,	// (0x0005e49d) mup_visualizer_pane

0x324e,	// (0x0005e4d1) mup_volume_pane_ParamLimits

0x324e,	// (0x0005e4d1) mup_volume_pane

0xae71,	// (0x000660f4) mup_visualizer_pane_g1_ParamLimits

0xae71,	// (0x000660f4) mup_visualizer_pane_g1

0xae71,	// (0x000660f4) mup_visualizer_pane_g2_ParamLimits

0xae71,	// (0x000660f4) mup_visualizer_pane_g2

0xacd5,	// (0x00065f58) mup_visualizer_pane_g3_ParamLimits

0xacd5,	// (0x00065f58) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0006a6e9) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0006a6e9) mup_visualizer_pane_g

0xa1ef,	// (0x00065472) mup_volume_pane_g1

0xae87,	// (0x0006610a) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0006a6f0) mup_volume_pane_g

0xa1ef,	// (0x00065472) mup_progress_pane_g1

0xae90,	// (0x00066113) mup_progress_pane_g2

0xae99,	// (0x0006611c) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0006a6f5) mup_progress_pane_g

0x9de0,	// (0x00065063) bg_popup_window_pane_cp05

0xaea2,	// (0x00066125) heading_pane_cp02_ParamLimits

0xaea2,	// (0x00066125) heading_pane_cp02

0xaebc,	// (0x0006613f) list_popup_blid_pane

0xaec4,	// (0x00066147) list_blid_sat_info_pane_ParamLimits

0xaec4,	// (0x00066147) list_blid_sat_info_pane

0xaed7,	// (0x0006615a) list_blid_sat_info_pane_g1

0xaedf,	// (0x00066162) list_blid_sat_info_pane_t1

0x3364,	// (0x0005e5e7) mup_equalizer_pane_ParamLimits

0x3364,	// (0x0005e5e7) mup_equalizer_pane

0x337d,	// (0x0005e600) mup_equalizer_pane_cp1_ParamLimits

0x337d,	// (0x0005e600) mup_equalizer_pane_cp1

0x339a,	// (0x0005e61d) mup_equalizer_pane_cp2_ParamLimits

0x339a,	// (0x0005e61d) mup_equalizer_pane_cp2

0x33b7,	// (0x0005e63a) mup_equalizer_pane_cp3_ParamLimits

0x33b7,	// (0x0005e63a) mup_equalizer_pane_cp3

0x33d8,	// (0x0005e65b) mup_equalizer_pane_cp4_ParamLimits

0x33d8,	// (0x0005e65b) mup_equalizer_pane_cp4

0x33f9,	// (0x0005e67c) mup_equalizer_pane_cp5

0x340d,	// (0x0005e690) mup_equalizer_pane_cp6

0x3421,	// (0x0005e6a4) mup_equalizer_pane_cp7

0xc0ce,	// (0x00067351) bg_popup_call_poc_act_pane_g9

0xc0d6,	// (0x00067359) bg_popup_call_poc_act_pane_g10

0xc0de,	// (0x00067361) bg_popup_call_poc_act_pane_g11

0x000a,

0xa03b,	// (0x000652be) mup_scale_pane

0xa1ef,	// (0x00065472) mup_scale_pane_g1

0xaeed,	// (0x00066170) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0006a711) mup_scale_pane_g

0xaf11,	// (0x00066194) msg_data_pane

0xaf19,	// (0x0006619c) scroll_pane_cp017

0x3447,	// (0x0005e6ca) bg_list_pane_cp04_ParamLimits

0x3447,	// (0x0005e6ca) bg_list_pane_cp04

0xaf21,	// (0x000661a4) msg_data_pane_g1

0x3467,	// (0x0005e6ea) msg_data_pane_g2

0x2d05,	// (0x0005df88) msg_data_pane_g3

0x346f,	// (0x0005e6f2) msg_data_pane_g4

0x3477,	// (0x0005e6fa) msg_data_pane_g5

0x347f,	// (0x0005e702) msg_data_pane_g6

0x3487,	// (0x0005e70a) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0006a720) msg_data_pane_g

0x348f,	// (0x0005e712) msg_text_pane_ParamLimits

0x348f,	// (0x0005e712) msg_text_pane

0x34b8,	// (0x0005e73b) qrid_highlight_pane_cp011_ParamLimits

0x34b8,	// (0x0005e73b) qrid_highlight_pane_cp011

0x9de0,	// (0x00065063) msg_body_pane

0x9de0,	// (0x00065063) msg_header_pane

0xaf32,	// (0x000661b5) input_focus_pane_cp07

0x34dc,	// (0x0005e75f) msg_header_pane_t1_ParamLimits

0x34dc,	// (0x0005e75f) msg_header_pane_t1

0x34f0,	// (0x0005e773) msg_header_pane_t2_ParamLimits

0x34f0,	// (0x0005e773) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0006a734) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0006a734) msg_header_pane_t

0xaf47,	// (0x000661ca) msg_body_pane_g1

0x3502,	// (0x0005e785) msg_body_pane_t1_ParamLimits

0x3502,	// (0x0005e785) msg_body_pane_t1

0x3533,	// (0x0005e7b6) msg_body_pane_t2_ParamLimits

0x3533,	// (0x0005e7b6) msg_body_pane_t2

0x3545,	// (0x0005e7c8) msg_body_pane_t3_ParamLimits

0x3545,	// (0x0005e7c8) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0006a739) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0006a739) msg_body_pane_t

0x3591,	// (0x0005e814) main_viewer_pane_g1_ParamLimits

0x3591,	// (0x0005e814) main_viewer_pane_g1

0x359f,	// (0x0005e822) main_viewer_pane_g2_ParamLimits

0x359f,	// (0x0005e822) main_viewer_pane_g2

0x35ad,	// (0x0005e830) main_viewer_pane_g3_ParamLimits

0x35ad,	// (0x0005e830) main_viewer_pane_g3

0x35bc,	// (0x0005e83f) main_viewer_pane_g4_ParamLimits

0x35bc,	// (0x0005e83f) main_viewer_pane_g4

0xaf67,	// (0x000661ea) main_viewer_pane_g5_ParamLimits

0xaf67,	// (0x000661ea) main_viewer_pane_g5

0xaf67,	// (0x000661ea) main_viewer_pane_g7_ParamLimits

0xaf67,	// (0x000661ea) main_viewer_pane_g7

0xaf79,	// (0x000661fc) main_viewer_pane_g8_ParamLimits

0xaf79,	// (0x000661fc) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0006a749) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0006a749) main_viewer_pane_g

0xaf91,	// (0x00066214) viewer_content_pane_ParamLimits

0xaf91,	// (0x00066214) viewer_content_pane

0x35f8,	// (0x0005e87b) main_postcard_pane_g1_ParamLimits

0x35f8,	// (0x0005e87b) main_postcard_pane_g1

0x360e,	// (0x0005e891) main_postcard_pane_g2_ParamLimits

0x360e,	// (0x0005e891) main_postcard_pane_g2

0x3624,	// (0x0005e8a7) main_postcard_pane_g3_ParamLimits

0x3624,	// (0x0005e8a7) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0006a75a) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0006a75a) main_postcard_pane_g

0x363b,	// (0x0005e8be) main_postcard_pane_g4

0xc2e3,	// (0x00067566) smil_status_volume_pane_g2

0x367e,	// (0x0005e901) postcard_pane_ParamLimits

0x367e,	// (0x0005e901) postcard_pane

0xaf9f,	// (0x00066222) postcard_pane_g1_ParamLimits

0xaf9f,	// (0x00066222) postcard_pane_g1

0x36c0,	// (0x0005e943) postcard_pane_g2_ParamLimits

0x36c0,	// (0x0005e943) postcard_pane_g2

0x36cc,	// (0x0005e94f) postcard_pane_g3_ParamLimits

0x36cc,	// (0x0005e94f) postcard_pane_g3

0xafad,	// (0x00066230) postcard_pane_g4_ParamLimits

0xafad,	// (0x00066230) postcard_pane_g4

0x36d8,	// (0x0005e95b) postcard_pane_g5_ParamLimits

0x36d8,	// (0x0005e95b) postcard_pane_g5

0x36ed,	// (0x0005e970) postcard_pane_g6_ParamLimits

0x36ed,	// (0x0005e970) postcard_pane_g6

0xaf9f,	// (0x00066222) postcard_pane_g7_ParamLimits

0xaf9f,	// (0x00066222) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0006a767) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0006a767) postcard_pane_g

0x3701,	// (0x0005e984) main_mp2_pane_g1_ParamLimits

0x3701,	// (0x0005e984) main_mp2_pane_g1

0x370d,	// (0x0005e990) main_mp2_pane_g2_ParamLimits

0x370d,	// (0x0005e990) main_mp2_pane_g2

0x3719,	// (0x0005e99c) main_mp2_pane_g3_ParamLimits

0x3719,	// (0x0005e99c) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0006a776) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0006a776) main_mp2_pane_g

0x3725,	// (0x0005e9a8) main_mp2_pane_t1_ParamLimits

0x3725,	// (0x0005e9a8) main_mp2_pane_t1

0x373a,	// (0x0005e9bd) main_mp2_pane_t2_ParamLimits

0x373a,	// (0x0005e9bd) main_mp2_pane_t2

0x374c,	// (0x0005e9cf) main_mp2_pane_t3_ParamLimits

0x374c,	// (0x0005e9cf) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x0006a77d) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x0006a77d) main_mp2_pane_t

0xafbb,	// (0x0006623e) pec_content_pane_ParamLimits

0xafbb,	// (0x0006623e) pec_content_pane

0xa5dd,	// (0x00065860) scroll_pane_cp015

0xafcd,	// (0x00066250) pec_attribute_pane_ParamLimits

0xafcd,	// (0x00066250) pec_attribute_pane

0x375e,	// (0x0005e9e1) pec_content_pane_g1_ParamLimits

0x375e,	// (0x0005e9e1) pec_content_pane_g1

0xafdd,	// (0x00066260) pec_content_pane_t1_ParamLimits

0xafdd,	// (0x00066260) pec_content_pane_t1

0xafef,	// (0x00066272) pec_content_pane_t2_ParamLimits

0xafef,	// (0x00066272) pec_content_pane_t2

0x0001,

0xf501,	// (0x0006a784) pec_content_pane_t_ParamLimits

0xf501,	// (0x0006a784) pec_content_pane_t

0x376c,	// (0x0005e9ef) list_single_graphic_pane_cp01_ParamLimits

0x376c,	// (0x0005e9ef) list_single_graphic_pane_cp01

0xa03b,	// (0x000652be) bg_popup_sub_pane_cp04

0xb001,	// (0x00066284) popup_mup_playback_window_g1

0xb00d,	// (0x00066290) popup_mup_playback_window_t1

0xb022,	// (0x000662a5) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0006a789) popup_mup_playback_window_t

0xb059,	// (0x000662dc) main_image_pane_g1_ParamLimits

0xb059,	// (0x000662dc) main_image_pane_g1

0xb09c,	// (0x0006631f) scroll_pane_cp018_ParamLimits

0xb09c,	// (0x0006631f) scroll_pane_cp018

0xb0b4,	// (0x00066337) scroll_pane_cp016_ParamLimits

0xb0b4,	// (0x00066337) scroll_pane_cp016

0x383c,	// (0x0005eabf) smil2_image_pane_ParamLimits

0x383c,	// (0x0005eabf) smil2_image_pane

0x3870,	// (0x0005eaf3) smil2_root_pane_ParamLimits

0x3870,	// (0x0005eaf3) smil2_root_pane

0x38a8,	// (0x0005eb2b) smil2_text_pane_ParamLimits

0x38a8,	// (0x0005eb2b) smil2_text_pane

0x9de0,	// (0x00065063) bg_list_pane_cp06

0xb0f0,	// (0x00066373) grid_radio_pane

0x9de0,	// (0x00065063) bg_popup_window_pane_cp06

0xb0f8,	// (0x0006637b) main_fmradio_pane_t1

0xab23,	// (0x00065da6) heading_pane_cp04

0xb106,	// (0x00066389) main_fmradio_pane_t2

0xc0e6,	// (0x00067369) popup_cale_lunar_info_window_g1

0xb114,	// (0x00066397) main_fmradio_pane_t3

0xc0ee,	// (0x00067371) popup_cale_lunar_info_window_g2

0xb122,	// (0x000663a5) main_fmradio_pane_t4

0x0001,

0xb130,	// (0x000663b3) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x0006a864) popup_cale_lunar_info_window_g

0xf51b,	// (0x0006a79e) main_fmradio_pane_t

0xb13e,	// (0x000663c1) wait_bar_pane_cp03

0xb146,	// (0x000663c9) cell_fmradio_pane_ParamLimits

0xb146,	// (0x000663c9) cell_fmradio_pane

0xaf9f,	// (0x00066222) cell_fmradio_pane_g1_ParamLimits

0xaf9f,	// (0x00066222) cell_fmradio_pane_g1

0x9de0,	// (0x00065063) grid_highlight_pane_cp011

0xb159,	// (0x000663dc) poc_content_pane_ParamLimits

0xb159,	// (0x000663dc) poc_content_pane

0xb16b,	// (0x000663ee) scroll_pane_cp019

0x3928,	// (0x0005ebab) popup_call_poc_act_window_ParamLimits

0x3928,	// (0x0005ebab) popup_call_poc_act_window

0x394c,	// (0x0005ebcf) popup_call_poc_inact_window_ParamLimits

0x394c,	// (0x0005ebcf) popup_call_poc_inact_window

0xf5b8,	// (0x0006a83b) bg_popup_call_poc_act_pane_g

0xc056,	// (0x000672d9) bg_popup_call_poc_inact_pane_g1

0xc05e,	// (0x000672e1) bg_popup_call_poc_inact_pane_g2

0xb173,	// (0x000663f6) popup_call_poc_act_window_g2

0xc066,	// (0x000672e9) bg_popup_call_poc_inact_pane_g3

0xc06e,	// (0x000672f1) bg_popup_call_poc_inact_pane_g4

0xc076,	// (0x000672f9) bg_popup_call_poc_inact_pane_g5

0xb17b,	// (0x000663fe) popup_call_poc_act_window_t1_ParamLimits

0xb17b,	// (0x000663fe) popup_call_poc_act_window_t1

0xb1a3,	// (0x00066426) popup_call_poc_act_window_t2_ParamLimits

0xb1a3,	// (0x00066426) popup_call_poc_act_window_t2

0xb1cb,	// (0x0006644e) popup_call_poc_act_window_t3_ParamLimits

0xb1cb,	// (0x0006644e) popup_call_poc_act_window_t3

0xb1f3,	// (0x00066476) popup_call_poc_act_window_t4_ParamLimits

0xb1f3,	// (0x00066476) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0006a7a9) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0006a7a9) popup_call_poc_act_window_t

0xc07e,	// (0x00067301) bg_popup_call_poc_inact_pane_g6

0xc086,	// (0x00067309) bg_popup_call_poc_inact_pane_g7

0xc08e,	// (0x00067311) bg_popup_call_poc_inact_pane_g8

0xb205,	// (0x00066488) popup_call_poc_inact_window_g2

0xc096,	// (0x00067319) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x0006a828) bg_popup_call_poc_inact_pane_g

0xb20d,	// (0x00066490) popup_call_poc_inact_window_t1_ParamLimits

0xb20d,	// (0x00066490) popup_call_poc_inact_window_t1

0xb222,	// (0x000664a5) popup_call_poc_inact_window_t2_ParamLimits

0xb222,	// (0x000664a5) popup_call_poc_inact_window_t2

0xb237,	// (0x000664ba) popup_call_poc_inact_window_t3_ParamLimits

0xb237,	// (0x000664ba) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x0006a7b2) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x0006a7b2) popup_call_poc_inact_window_t

0xc256,	// (0x000674d9) context_pane_ParamLimits

0x416e,	// (0x0005f3f1) signal_pane_ParamLimits

0xada0,	// (0x00066023) main_call2_pane

0xc244,	// (0x000674c7) popup_phob_thumbnail2_window_ParamLimits

0xc244,	// (0x000674c7) popup_phob_thumbnail2_window

0xaf4f,	// (0x000661d2) aid_hotspot_pointer_arrow_pane

0xaf57,	// (0x000661da) aid_hotspot_pointer_hand_pane

0x3c92,	// (0x0005ef15) phob_pre_status_pane_g5

0x1920,	// (0x0005cba3) cams_zoom_pane_ParamLimits

0x192f,	// (0x0005cbb2) image_vga_pane_ParamLimits

0x1949,	// (0x0005cbcc) main_camera_pane_g1_ParamLimits

0x195b,	// (0x0005cbde) main_camera_pane_g2_ParamLimits

0x196d,	// (0x0005cbf0) main_camera_pane_g3_ParamLimits

0x197f,	// (0x0005cc02) main_camera_pane_g4_ParamLimits

0x1991,	// (0x0005cc14) main_camera_pane_g5_ParamLimits

0x19a3,	// (0x0005cc26) main_camera_pane_g6_ParamLimits

0x19b5,	// (0x0005cc38) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0006a4b1) main_camera_pane_g_ParamLimits

0x19c7,	// (0x0005cc4a) main_camera_pane_t1_ParamLimits

0x19dd,	// (0x0005cc60) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0006a4c2) main_camera_pane_t_ParamLimits

0xa03b,	// (0x000652be) bg_popup_preview_window_pane_cp01_ParamLimits

0xa03b,	// (0x000652be) bg_popup_preview_window_pane_cp01

0xb24c,	// (0x000664cf) popup_phob_thumbnail2_window_g1_ParamLimits

0xb24c,	// (0x000664cf) popup_phob_thumbnail2_window_g1

0x9de0,	// (0x00065063) call2_cli_visual_pane

0x3980,	// (0x0005ec03) popup_call2_audio_conf_window_ParamLimits

0x3980,	// (0x0005ec03) popup_call2_audio_conf_window

0x39a0,	// (0x0005ec23) popup_call2_audio_first_window_ParamLimits

0x39a0,	// (0x0005ec23) popup_call2_audio_first_window

0x3a36,	// (0x0005ecb9) popup_call2_audio_in_window_ParamLimits

0x3a36,	// (0x0005ecb9) popup_call2_audio_in_window

0x3a7e,	// (0x0005ed01) popup_call2_audio_out_window_ParamLimits

0x3a7e,	// (0x0005ed01) popup_call2_audio_out_window

0x3ae8,	// (0x0005ed6b) popup_call2_audio_second_window_ParamLimits

0x3ae8,	// (0x0005ed6b) popup_call2_audio_second_window

0x3b4e,	// (0x0005edd1) popup_call2_audio_wait_window_ParamLimits

0x3b4e,	// (0x0005edd1) popup_call2_audio_wait_window

0x9de0,	// (0x00065063) bg_popup_call2_act_pane_cp03

0xa01d,	// (0x000652a0) list_conf_pane_cp

0xb258,	// (0x000664db) popup_call2_audio_conf_window_t1

0xb266,	// (0x000664e9) list_single_graphic_popup_conf2_pane_ParamLimits

0xb266,	// (0x000664e9) list_single_graphic_popup_conf2_pane

0xabb6,	// (0x00065e39) list_highlight_pane_cp04

0xb279,	// (0x000664fc) list_single_graphic_popup_conf2_pane_g1

0xabc7,	// (0x00065e4a) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0006a7b9) list_single_graphic_popup_conf2_pane_g

0xb283,	// (0x00066506) list_single_graphic_popup_conf2_pane_t1

0xb291,	// (0x00066514) bg_popup_call2_act_pane_cp01_ParamLimits

0xb291,	// (0x00066514) bg_popup_call2_act_pane_cp01

0xb31b,	// (0x0006659e) call_type_pane_cp05_ParamLimits

0xb31b,	// (0x0006659e) call_type_pane_cp05

0xb36f,	// (0x000665f2) popup_call2_audio_second_window_g1_ParamLimits

0xb36f,	// (0x000665f2) popup_call2_audio_second_window_g1

0xb3c3,	// (0x00066646) popup_call2_audio_second_window_g2_ParamLimits

0xb3c3,	// (0x00066646) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x0006a7be) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x0006a7be) popup_call2_audio_second_window_g

0xb428,	// (0x000666ab) popup_call2_audio_second_window_t1_ParamLimits

0xb428,	// (0x000666ab) popup_call2_audio_second_window_t1

0xb4e3,	// (0x00066766) popup_call2_audio_second_window_t2_ParamLimits

0xb4e3,	// (0x00066766) popup_call2_audio_second_window_t2

0xb536,	// (0x000667b9) popup_call2_audio_second_window_t3_ParamLimits

0xb536,	// (0x000667b9) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x0006a7c5) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x0006a7c5) popup_call2_audio_second_window_t

0x9de0,	// (0x00065063) bg_popup_call2_in_pane_cp02

0x9dea,	// (0x0006506d) call_type_pane_cp04

0x9df2,	// (0x00065075) popup_call2_audio_wait_window_g1

0x9dfa,	// (0x0006507d) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0006a39e) popup_call2_audio_wait_window_g

0x9e02,	// (0x00065085) popup_call2_audio_wait_window_t3

0xb629,	// (0x000668ac) bg_popup_call2_act_pane_ParamLimits

0xb629,	// (0x000668ac) bg_popup_call2_act_pane

0xb6e9,	// (0x0006696c) call_type_pane_cp03_ParamLimits

0xb6e9,	// (0x0006696c) call_type_pane_cp03

0xb74d,	// (0x000669d0) popup_call2_audio_first_window_g1_ParamLimits

0xb74d,	// (0x000669d0) popup_call2_audio_first_window_g1

0xb7bd,	// (0x00066a40) popup_call2_audio_first_window_g2_ParamLimits

0xb7bd,	// (0x00066a40) popup_call2_audio_first_window_g2

0xae71,	// (0x000660f4) popup_call2_audio_first_window_g3_ParamLimits

0xae71,	// (0x000660f4) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x0006a7ce) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x0006a7ce) popup_call2_audio_first_window_g

0xb89b,	// (0x00066b1e) popup_call2_audio_first_window_t1_ParamLimits

0xb89b,	// (0x00066b1e) popup_call2_audio_first_window_t1

0xb99e,	// (0x00066c21) popup_call2_audio_first_window_t4_ParamLimits

0xb99e,	// (0x00066c21) popup_call2_audio_first_window_t4

0xba81,	// (0x00066d04) popup_call2_audio_first_window_t5_ParamLimits

0xba81,	// (0x00066d04) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x0006a7d9) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x0006a7d9) popup_call2_audio_first_window_t

0xa033,	// (0x000652b6) bg_popup_call2_act_pane_g1

0xc0f6,	// (0x00067379) popup_cale_lunar_info_window_t1

0xc104,	// (0x00067387) popup_cale_lunar_info_window_t2

0xc112,	// (0x00067395) popup_cale_lunar_info_window_t3

0x9de0,	// (0x00065063) bg_popup_call2_bubble_pane

0xbb82,	// (0x00066e05) bg_popup_call2_in_pane_cp01_ParamLimits

0xbb82,	// (0x00066e05) bg_popup_call2_in_pane_cp01

0x9abc,	// (0x00064d3f) call_type_pane_cp02

0xbbca,	// (0x00066e4d) popup_call2_audio_out_window_g1_ParamLimits

0xbbca,	// (0x00066e4d) popup_call2_audio_out_window_g1

0xbbf6,	// (0x00066e79) popup_call2_audio_out_window_g2_ParamLimits

0xbbf6,	// (0x00066e79) popup_call2_audio_out_window_g2

0xbc1e,	// (0x00066ea1) popup_call2_audio_out_window_g3_ParamLimits

0xbc1e,	// (0x00066ea1) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x0006a7e2) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x0006a7e2) popup_call2_audio_out_window_g

0xbc59,	// (0x00066edc) popup_call2_audio_out_window_t1_ParamLimits

0xbc59,	// (0x00066edc) popup_call2_audio_out_window_t1

0xbcb8,	// (0x00066f3b) popup_call2_audio_out_window_t2_ParamLimits

0xbcb8,	// (0x00066f3b) popup_call2_audio_out_window_t2

0xbd0c,	// (0x00066f8f) popup_call2_audio_out_window_t3_ParamLimits

0xbd0c,	// (0x00066f8f) popup_call2_audio_out_window_t3

0xbd22,	// (0x00066fa5) popup_call2_audio_out_window_t4_ParamLimits

0xbd22,	// (0x00066fa5) popup_call2_audio_out_window_t4

0xbd38,	// (0x00066fbb) popup_call2_audio_out_window_t5_ParamLimits

0xbd38,	// (0x00066fbb) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x0006a7eb) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x0006a7eb) popup_call2_audio_out_window_t

0xbd9c,	// (0x0006701f) bg_popup_call2_in_pane_ParamLimits

0xbd9c,	// (0x0006701f) bg_popup_call2_in_pane

0xbdf8,	// (0x0006707b) popup_call2_audio_in_window_g1_ParamLimits

0xbdf8,	// (0x0006707b) popup_call2_audio_in_window_g1

0xbe30,	// (0x000670b3) popup_call2_audio_in_window_g2_ParamLimits

0xbe30,	// (0x000670b3) popup_call2_audio_in_window_g2

0xbe68,	// (0x000670eb) popup_call2_audio_in_window_g3_ParamLimits

0xbe68,	// (0x000670eb) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x0006a7f8) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x0006a7f8) popup_call2_audio_in_window_g

0xbec0,	// (0x00067143) popup_call2_audio_in_window_t1_ParamLimits

0xbec0,	// (0x00067143) popup_call2_audio_in_window_t1

0xbf40,	// (0x000671c3) popup_call2_audio_in_window_t2_ParamLimits

0xbf40,	// (0x000671c3) popup_call2_audio_in_window_t2

0xbfc0,	// (0x00067243) popup_call2_audio_in_window_t3_ParamLimits

0xbfc0,	// (0x00067243) popup_call2_audio_in_window_t3

0xbfda,	// (0x0006725d) popup_call2_audio_in_window_t4_ParamLimits

0xbfda,	// (0x0006725d) popup_call2_audio_in_window_t4

0xbfec,	// (0x0006726f) popup_call2_audio_in_window_t5_ParamLimits

0xbfec,	// (0x0006726f) popup_call2_audio_in_window_t5

0xc001,	// (0x00067284) popup_call2_audio_in_window_t6_ParamLimits

0xc001,	// (0x00067284) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x0006a801) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x0006a801) popup_call2_audio_in_window_t

0xa033,	// (0x000652b6) bg_popup_call2_in_pane_g1

0xc120,	// (0x000673a3) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x0006a869) popup_cale_lunar_info_window_t

0xa03b,	// (0x000652be) bg_popup_call2_rect_pane_ParamLimits

0xa03b,	// (0x000652be) bg_popup_call2_rect_pane

0x9de0,	// (0x00065063) call2_cli_visual_graphic_pane

0x9de0,	// (0x00065063) call2_cli_visual_text_pane

0xc2f6,	// (0x00067579) smil_status_volume_pane_g3

0x0002,

0xa1ef,	// (0x00065472) call2_cli_visual_graphic_pane_g1

0xa1ef,	// (0x00065472) call2_cli_visual_graphic_pane_g2

0xa1ef,	// (0x00065472) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x0006a80e) call2_cli_visual_graphic_pane_g

0xc016,	// (0x00067299) bg_popup_call2_rect_pane_g1

0xa297,	// (0x0006551a) bg_popup_call2_rect_pane_g2

0xc01e,	// (0x000672a1) bg_popup_call2_rect_pane_g3

0xc026,	// (0x000672a9) bg_popup_call2_rect_pane_g4

0xc02e,	// (0x000672b1) bg_popup_call2_rect_pane_g5

0xc036,	// (0x000672b9) bg_popup_call2_rect_pane_g6

0xc03e,	// (0x000672c1) bg_popup_call2_rect_pane_g7

0xc046,	// (0x000672c9) bg_popup_call2_rect_pane_g8

0xc04e,	// (0x000672d1) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0006a815) bg_popup_call2_rect_pane_g

0xc056,	// (0x000672d9) bg_popup_call2_bubble_pane_g1

0xc05e,	// (0x000672e1) bg_popup_call2_bubble_pane_g2

0xc066,	// (0x000672e9) bg_popup_call2_bubble_pane_g3

0xc06e,	// (0x000672f1) bg_popup_call2_bubble_pane_g4

0xc076,	// (0x000672f9) bg_popup_call2_bubble_pane_g5

0xc07e,	// (0x00067301) bg_popup_call2_bubble_pane_g6

0xc086,	// (0x00067309) bg_popup_call2_bubble_pane_g7

0xc08e,	// (0x00067311) bg_popup_call2_bubble_pane_g8

0xc096,	// (0x00067319) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x0006a828) bg_popup_call2_bubble_pane_g

0x1582,	// (0x0005c805) aid_cale_week_size_cell_pane

0x19f5,	// (0x0005cc78) aid_cams_cif_uncrop_pane_ParamLimits

0x19f5,	// (0x0005cc78) aid_cams_cif_uncrop_pane

0x1bb2,	// (0x0005ce35) aid_cams_size_cell_ParamLimits

0x1bb2,	// (0x0005ce35) aid_cams_size_cell

0x1bc6,	// (0x0005ce49) grid_cams_pane_ParamLimits

0x1be0,	// (0x0005ce63) linegrid_cams_pane_ParamLimits

0x1dbe,	// (0x0005d041) call_video_pane_t1

0x1ddc,	// (0x0005d05f) call_video_pane_t2

0x0001,

0xf292,	// (0x0006a515) call_video_pane_t

0x220f,	// (0x0005d492) aid_cale_month_size_cell_pane_ParamLimits

0x220f,	// (0x0005d492) aid_cale_month_size_cell_pane

0xf62f,	// (0x0006a8b2) smil_status_volume_pane_g

0xc303,	// (0x00067586) volume_smil_pane_ParamLimits

0x0e7c,	// (0x0005c0ff) aid_popup2_width_pane

0x14f6,	// (0x0005c779) cell_qdial_pane_g4_ParamLimits

0x14f6,	// (0x0005c779) cell_qdial_pane_g4

0x2e9c,	// (0x0005e11f) aid_blid_cardinal_pane_ParamLimits

0x2ea8,	// (0x0005e12b) aid_blid_destination_pane_ParamLimits

0x2ea8,	// (0x0005e12b) aid_blid_destination_pane

0xa03b,	// (0x000652be) bg_popup_call_poc_act_pane_ParamLimits

0xa03b,	// (0x000652be) bg_popup_call_poc_act_pane

0xa03b,	// (0x000652be) bg_popup_call_poc_inact_pane_ParamLimits

0xa03b,	// (0x000652be) bg_popup_call_poc_inact_pane

0xc0a6,	// (0x00067329) bg_popup_call_poc_act_pane_g1

0xc0ae,	// (0x00067331) bg_popup_call_poc_act_pane_g2

0xc0b6,	// (0x00067339) bg_popup_call_poc_act_pane_g3

0xc06e,	// (0x000672f1) bg_popup_call_poc_act_pane_g4

0xc076,	// (0x000672f9) bg_popup_call_poc_act_pane_g5

0xc0be,	// (0x00067341) bg_popup_call_poc_act_pane_g6

0xc086,	// (0x00067309) bg_popup_call_poc_act_pane_g7

0xc0c6,	// (0x00067349) bg_popup_call_poc_act_pane_g8

0x9de0,	// (0x00065063) main_usb_pane

0xc21f,	// (0x000674a2) popup_cale_lunar_info_window

0x20a6,	// (0x0005d329) im_reading_pane_t1_ParamLimits

0xa535,	// (0x000657b8) list_im_pane_ParamLimits

0xa546,	// (0x000657c9) scroll_pane_cp07_ParamLimits

0x9de0,	// (0x00065063) grid_highlight_pane_cp012

0xa03b,	// (0x000652be) mup_scale_pane_ParamLimits

0xaf9f,	// (0x00066222) main_usb_pane_g1_ParamLimits

0xaf9f,	// (0x00066222) main_usb_pane_g1

0x3ba5,	// (0x0005ee28) main_usb_pane_g2_ParamLimits

0x3ba5,	// (0x0005ee28) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x0006a852) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x0006a852) main_usb_pane_g

0x3bbb,	// (0x0005ee3e) main_usb_pane_t1_ParamLimits

0x3bbb,	// (0x0005ee3e) main_usb_pane_t1

0x3bcd,	// (0x0005ee50) main_usb_pane_t2_ParamLimits

0x3bcd,	// (0x0005ee50) main_usb_pane_t2

0x3bdf,	// (0x0005ee62) main_usb_pane_t3_ParamLimits

0x3bdf,	// (0x0005ee62) main_usb_pane_t3

0x3bf1,	// (0x0005ee74) main_usb_pane_t4_ParamLimits

0x3bf1,	// (0x0005ee74) main_usb_pane_t4

0x3c03,	// (0x0005ee86) main_usb_pane_t5_ParamLimits

0x3c03,	// (0x0005ee86) main_usb_pane_t5

0x3c15,	// (0x0005ee98) main_usb_pane_t6_ParamLimits

0x3c15,	// (0x0005ee98) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x0006a857) main_usb_pane_t_ParamLimits

0x2e41,	// (0x0005e0c4) aid_text_placing

0x2e4a,	// (0x0005e0cd) main_location2_pane_t1_ParamLimits

0x2e5e,	// (0x0005e0e1) main_location2_pane_t2_ParamLimits

0x2e72,	// (0x0005e0f5) main_location2_pane_t3_ParamLimits

0x2e88,	// (0x0005e10b) main_location2_pane_t4_ParamLimits

0x2e88,	// (0x0005e10b) main_location2_pane_t4

0xf3f3,	// (0x0006a676) main_location2_pane_t_ParamLimits

0xa07f,	// (0x00065302) find_pinb_pane_g2_ParamLimits

0xa07f,	// (0x00065302) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0006a3c4) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0006a3c4) find_pinb_pane_g

0xa08b,	// (0x0006530e) find_pinb_pane_t1_ParamLimits

0xa09d,	// (0x00065320) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0006a3c9) find_pinb_pane_t_ParamLimits

0x9de0,	// (0x00065063) main_call3_pane

0x2573,	// (0x0005d7f6) cale_month_day_heading_pane_t1_ParamLimits

0x25d1,	// (0x0005d854) cale_month_day_heading_pane_t2_ParamLimits

0x2636,	// (0x0005d8b9) cale_month_day_heading_pane_t3_ParamLimits

0x269b,	// (0x0005d91e) cale_month_day_heading_pane_t4_ParamLimits

0x2700,	// (0x0005d983) cale_month_day_heading_pane_t5_ParamLimits

0x2775,	// (0x0005d9f8) cale_month_day_heading_pane_t6_ParamLimits

0x27ea,	// (0x0005da6d) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0006a54d) cale_month_day_heading_pane_t_ParamLimits

0xa792,	// (0x00065a15) smil_status_volume_pane

0x369c,	// (0x0005e91f) postcard_address_pane_ParamLimits

0x369c,	// (0x0005e91f) postcard_address_pane

0x36ae,	// (0x0005e931) postcard_message_pane_ParamLimits

0x36ae,	// (0x0005e931) postcard_message_pane

0x3b88,	// (0x0005ee0b) call2_cli_visual_pane_t1_ParamLimits

0x3b88,	// (0x0005ee0b) call2_cli_visual_pane_t1

0x439c,	// (0x0005f61f) postcard_message_pane_t1_ParamLimits

0x439c,	// (0x0005f61f) postcard_message_pane_t1

0x4385,	// (0x0005f608) postcard_address_pane_t1_ParamLimits

0x4385,	// (0x0005f608) postcard_address_pane_t1

0x4371,	// (0x0005f5f4) popup_call3_audio_in_window_ParamLimits

0x4371,	// (0x0005f5f4) popup_call3_audio_in_window

0x4200,	// (0x0005f483) bg_popup_call3_in_pane_ParamLimits

0x4200,	// (0x0005f483) bg_popup_call3_in_pane

0x4272,	// (0x0005f4f5) popup_call3_audio_in_window_g1_ParamLimits

0x4272,	// (0x0005f4f5) popup_call3_audio_in_window_g1

0x4292,	// (0x0005f515) popup_call3_audio_in_window_g2_ParamLimits

0x4292,	// (0x0005f515) popup_call3_audio_in_window_g2

0x42b2,	// (0x0005f535) popup_call3_audio_in_window_g3_ParamLimits

0x42b2,	// (0x0005f535) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x0006a8b9) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x0006a8b9) popup_call3_audio_in_window_g

0x42e3,	// (0x0005f566) popup_call3_audio_in_window_t1_ParamLimits

0x42e3,	// (0x0005f566) popup_call3_audio_in_window_t1

0x4321,	// (0x0005f5a4) popup_call3_audio_in_window_t2_ParamLimits

0x4321,	// (0x0005f5a4) popup_call3_audio_in_window_t2

0x435f,	// (0x0005f5e2) popup_call3_audio_in_window_t3_ParamLimits

0x435f,	// (0x0005f5e2) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x0006a8c2) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x0006a8c2) popup_call3_audio_in_window_t

0xada0,	// (0x00066023) bg_popup_call3_rect_pane

0xc016,	// (0x00067299) bg_popup_call3_rect_pane_g1

0xa297,	// (0x0006551a) bg_popup_call3_rect_pane_g2

0xc01e,	// (0x000672a1) bg_popup_call3_rect_pane_g3

0xc026,	// (0x000672a9) bg_popup_call3_rect_pane_g4

0xc02e,	// (0x000672b1) bg_popup_call3_rect_pane_g5

0xc036,	// (0x000672b9) bg_popup_call3_rect_pane_g6

0xc03e,	// (0x000672c1) bg_popup_call3_rect_pane_g7

0x3264,	// (0x0005e4e7) mup_visualizer_osc_pane

0xae7f,	// (0x00066102) mup_visualizer_spec_pane

0x4230,	// (0x0005f4b3) call3_video_qcif_pane_ParamLimits

0x4230,	// (0x0005f4b3) call3_video_qcif_pane

0x4241,	// (0x0005f4c4) call3_video_qcif_uncrop_pane_ParamLimits

0x4241,	// (0x0005f4c4) call3_video_qcif_uncrop_pane

0x424d,	// (0x0005f4d0) call3_video_subqcif_pane_ParamLimits

0x424d,	// (0x0005f4d0) call3_video_subqcif_pane

0x4261,	// (0x0005f4e4) call3_video_subqcif_uncrop_pane_ParamLimits

0x4261,	// (0x0005f4e4) call3_video_subqcif_uncrop_pane

0x42d2,	// (0x0005f555) popup_call3_audio_in_window_g4_ParamLimits

0x42d2,	// (0x0005f555) popup_call3_audio_in_window_g4

0x41ef,	// (0x0005f472) mup_spec_half_pane

0x41f8,	// (0x0005f47b) mup_spec_half_pane_cp

0xc2b6,	// (0x00067539) mup_osc_middle_pane

0xc2bf,	// (0x00067542) mup_visualizer_osc_pane_g1

0x41cf,	// (0x0005f452) mup_spec_bar_pane_ParamLimits

0x41cf,	// (0x0005f452) mup_spec_bar_pane

0xc2a3,	// (0x00067526) mup_spec_bar_pane_g1

0xc2ad,	// (0x00067530) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0006a8ad) mup_spec_bar_pane_g

0x1582,	// (0x0005c805) aid_cale_week_size_cell_pane_ParamLimits

0x1595,	// (0x0005c818) bg_cale_heading_pane_ParamLimits

0xa32a,	// (0x000655ad) bg_cale_pane_cp01_ParamLimits

0x15ad,	// (0x0005c830) cale_week_corner_pane_ParamLimits

0x15be,	// (0x0005c841) cale_week_day_heading_pane_ParamLimits

0x15d6,	// (0x0005c859) cale_week_scroll_pane_g1_ParamLimits

0x15eb,	// (0x0005c86e) cale_week_scroll_pane_g2_ParamLimits

0x15fc,	// (0x0005c87f) cale_week_scroll_pane_g3_ParamLimits

0x160d,	// (0x0005c890) cale_week_scroll_pane_g4_ParamLimits

0x161e,	// (0x0005c8a1) cale_week_scroll_pane_g5_ParamLimits

0x1631,	// (0x0005c8b4) cale_week_scroll_pane_g6_ParamLimits

0x1644,	// (0x0005c8c7) cale_week_scroll_pane_g7_ParamLimits

0x1657,	// (0x0005c8da) cale_week_scroll_pane_g8_ParamLimits

0x166a,	// (0x0005c8ed) cale_week_scroll_pane_g9_ParamLimits

0x167b,	// (0x0005c8fe) cale_week_scroll_pane_g10_ParamLimits

0x168c,	// (0x0005c90f) cale_week_scroll_pane_g11_ParamLimits

0x169d,	// (0x0005c920) cale_week_scroll_pane_g12_ParamLimits

0x16ae,	// (0x0005c931) cale_week_scroll_pane_g13_ParamLimits

0x16bf,	// (0x0005c942) cale_week_scroll_pane_g14_ParamLimits

0x16d0,	// (0x0005c953) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0006a455) cale_week_scroll_pane_g_ParamLimits

0x16e1,	// (0x0005c964) cale_week_time_pane_ParamLimits

0x16f4,	// (0x0005c977) grid_cale_week_pane_ParamLimits

0xa343,	// (0x000655c6) listscroll_cale_week_pane_t1

0x1709,	// (0x0005c98c) scroll_pane_cp08_ParamLimits

0x2250,	// (0x0005d4d3) cale_month_corner_pane_ParamLimits

0xa75c,	// (0x000659df) cale_month_pane_t1

0x2532,	// (0x0005d7b5) cale_month_week_pane_ParamLimits

0x2ca8,	// (0x0005df2b) popup_call_status_window_g1_ParamLimits

0x2cbc,	// (0x0005df3f) popup_call_status_window_g2_ParamLimits

0x2cd0,	// (0x0005df53) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x0006a5fd) popup_call_status_window_g_ParamLimits

0xaaa4,	// (0x00065d27) aid_call2_pane

0x34ce,	// (0x0005e751) msg_header_pane_g1

0x369c,	// (0x0005e91f) postcard_address2_pane_ParamLimits

0x369c,	// (0x0005e91f) postcard_address2_pane

0x36ae,	// (0x0005e931) postcard_message2_pane_ParamLimits

0x36ae,	// (0x0005e931) postcard_message2_pane

0x417c,	// (0x0005f3ff) message2_row_pane_ParamLimits

0x417c,	// (0x0005f3ff) message2_row_pane

0x419b,	// (0x0005f41e) address2_row_pane_ParamLimits

0x419b,	// (0x0005f41e) address2_row_pane

0xc271,	// (0x000674f4) postcard_message2_row_pane_g1

0xc279,	// (0x000674fc) postcard_message2_row_pane_t1

0xc271,	// (0x000674f4) address2_row_pane_g1

0xc279,	// (0x000674fc) address2_row_pane_t1

0xa3a7,	// (0x0006562a) aid_size_cell_vorec

0x9de0,	// (0x00065063) main_rss_pane

0x41ae,	// (0x0005f431) rss_list_single_pane_ParamLimits

0x41ae,	// (0x0005f431) rss_list_single_pane

0xc287,	// (0x0006750a) rss_list_single_pane_t1

0xc295,	// (0x00067518) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x0006a8a8) rss_list_single_pane_t

0x9de0,	// (0x00065063) main_camera2_pane

0x9de0,	// (0x00065063) main_video2_pane

0x4415,	// (0x0005f698) cams_zoom_pane_cp2_ParamLimits

0x4415,	// (0x0005f698) cams_zoom_pane_cp2

0x4435,	// (0x0005f6b8) image2_vga_pane_ParamLimits

0x4435,	// (0x0005f6b8) image2_vga_pane

0x4486,	// (0x0005f709) main_camera2_pane_g1_ParamLimits

0x4486,	// (0x0005f709) main_camera2_pane_g1

0x44a6,	// (0x0005f729) main_camera2_pane_g2_ParamLimits

0x44a6,	// (0x0005f729) main_camera2_pane_g2

0x44c6,	// (0x0005f749) main_camera2_pane_g3_ParamLimits

0x44c6,	// (0x0005f749) main_camera2_pane_g3

0x44e6,	// (0x0005f769) main_camera2_pane_g4_ParamLimits

0x44e6,	// (0x0005f769) main_camera2_pane_g4

0x4506,	// (0x0005f789) main_camera2_pane_g5_ParamLimits

0x4506,	// (0x0005f789) main_camera2_pane_g5

0x4526,	// (0x0005f7a9) main_camera2_pane_g6_ParamLimits

0x4526,	// (0x0005f7a9) main_camera2_pane_g6

0x4546,	// (0x0005f7c9) main_camera2_pane_g7_ParamLimits

0x4546,	// (0x0005f7c9) main_camera2_pane_g7

0x4566,	// (0x0005f7e9) main_camera2_pane_g8_ParamLimits

0x4566,	// (0x0005f7e9) main_camera2_pane_g8

0x0008,

0xf646,	// (0x0006a8c9) main_camera2_pane_g_ParamLimits

0xf646,	// (0x0006a8c9) main_camera2_pane_g

0x45a6,	// (0x0005f829) main_camera2_pane_t1_ParamLimits

0x45a6,	// (0x0005f829) main_camera2_pane_t1

0x45db,	// (0x0005f85e) main_camera2_pane_t2_ParamLimits

0x45db,	// (0x0005f85e) main_camera2_pane_t2

0x4601,	// (0x0005f884) main_camera2_pane_t3_ParamLimits

0x4601,	// (0x0005f884) main_camera2_pane_t3

0x465f,	// (0x0005f8e2) main_camera2_pane_t4_ParamLimits

0x465f,	// (0x0005f8e2) main_camera2_pane_t4

0x0006,

0xf659,	// (0x0006a8dc) main_camera2_pane_t_ParamLimits

0xf659,	// (0x0006a8dc) main_camera2_pane_t

0x46f1,	// (0x0005f974) cams_zoom_pane_cp4_ParamLimits

0x46f1,	// (0x0005f974) cams_zoom_pane_cp4

0x4707,	// (0x0005f98a) image2_cif_pane_ParamLimits

0x4707,	// (0x0005f98a) image2_cif_pane

0x4732,	// (0x0005f9b5) image2_subqcif_pane_ParamLimits

0x4732,	// (0x0005f9b5) image2_subqcif_pane

0x474c,	// (0x0005f9cf) main_video2_pane_g1_ParamLimits

0x474c,	// (0x0005f9cf) main_video2_pane_g1

0x4766,	// (0x0005f9e9) main_video2_pane_g2_ParamLimits

0x4766,	// (0x0005f9e9) main_video2_pane_g2

0x477c,	// (0x0005f9ff) main_video2_pane_g3_ParamLimits

0x477c,	// (0x0005f9ff) main_video2_pane_g3

0x4792,	// (0x0005fa15) main_video2_pane_g4_ParamLimits

0x4792,	// (0x0005fa15) main_video2_pane_g4

0x47a8,	// (0x0005fa2b) main_video2_pane_g5_ParamLimits

0x47a8,	// (0x0005fa2b) main_video2_pane_g5

0x47be,	// (0x0005fa41) main_video2_pane_g6_ParamLimits

0x47be,	// (0x0005fa41) main_video2_pane_g6

0x0005,

0xf668,	// (0x0006a8eb) main_video2_pane_g_ParamLimits

0xf668,	// (0x0006a8eb) main_video2_pane_g

0x47d8,	// (0x0005fa5b) main_video2_pane_t1_ParamLimits

0x47d8,	// (0x0005fa5b) main_video2_pane_t1

0x47fc,	// (0x0005fa7f) main_video2_pane_t2_ParamLimits

0x47fc,	// (0x0005fa7f) main_video2_pane_t2

0x484a,	// (0x0005facd) main_video2_pane_t3_ParamLimits

0x484a,	// (0x0005facd) main_video2_pane_t3

0x0002,

0xf675,	// (0x0006a8f8) main_video2_pane_t_ParamLimits

0xf675,	// (0x0006a8f8) main_video2_pane_t

0x3cd2,	// (0x0005ef55) call_muted_g2

0x0001,

0xf617,	// (0x0006a89a) call_muted_g

0x9de0,	// (0x00065063) main_mup2_pane

0x4892,	// (0x0005fb15) main_mup2_pane_g1_ParamLimits

0x4892,	// (0x0005fb15) main_mup2_pane_g1

0x489e,	// (0x0005fb21) main_mup2_pane_g2_ParamLimits

0x489e,	// (0x0005fb21) main_mup2_pane_g2

0xc427,	// (0x000676aa) main_mup_pane_g13_cp1

0xc42f,	// (0x000676b2) mup_volume_pane_cp1

0x48ba,	// (0x0005fb3d) main_mup2_pane_g4_ParamLimits

0x48ba,	// (0x0005fb3d) main_mup2_pane_g4

0x48cc,	// (0x0005fb4f) main_mup2_pane_g5_ParamLimits

0x48cc,	// (0x0005fb4f) main_mup2_pane_g5

0x48de,	// (0x0005fb61) main_mup2_pane_g6_ParamLimits

0x48de,	// (0x0005fb61) main_mup2_pane_g6

0x48f0,	// (0x0005fb73) main_mup2_pane_g7_ParamLimits

0x48f0,	// (0x0005fb73) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x0006a8ff) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x0006a8ff) main_mup2_pane_g

0x4908,	// (0x0005fb8b) main_mup2_pane_t1_ParamLimits

0x4908,	// (0x0005fb8b) main_mup2_pane_t1

0x491e,	// (0x0005fba1) main_mup2_pane_t2_ParamLimits

0x491e,	// (0x0005fba1) main_mup2_pane_t2

0x4934,	// (0x0005fbb7) main_mup2_pane_t3_ParamLimits

0x4934,	// (0x0005fbb7) main_mup2_pane_t3

0x494a,	// (0x0005fbcd) main_mup2_pane_t4_ParamLimits

0x494a,	// (0x0005fbcd) main_mup2_pane_t4

0x4962,	// (0x0005fbe5) main_mup2_pane_t5_ParamLimits

0x4962,	// (0x0005fbe5) main_mup2_pane_t5

0x497a,	// (0x0005fbfd) main_mup2_pane_t6_ParamLimits

0x497a,	// (0x0005fbfd) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x0006a90e) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x0006a90e) main_mup2_pane_t

0x49aa,	// (0x0005fc2d) mup2_visualizer_pane_ParamLimits

0x49aa,	// (0x0005fc2d) mup2_visualizer_pane

0x49d8,	// (0x0005fc5b) mup_progress_pane_cp_ParamLimits

0x49d8,	// (0x0005fc5b) mup_progress_pane_cp

0xc409,	// (0x0006768c) mup_volume_pane_cp_ParamLimits

0xc409,	// (0x0006768c) mup_volume_pane_cp

0x49ec,	// (0x0005fc6f) mup2_visualizer_pane_g1_ParamLimits

0x49ec,	// (0x0005fc6f) mup2_visualizer_pane_g1

0xc348,	// (0x000675cb) mup2_visualizer_pane_g2_ParamLimits

0xc348,	// (0x000675cb) mup2_visualizer_pane_g2

0x4a03,	// (0x0005fc86) mup2_visualizer_pane_g3_ParamLimits

0x4a03,	// (0x0005fc86) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x0006a91b) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x0006a91b) mup2_visualizer_pane_g

0xb0e8,	// (0x0006636b) aid_size_cell_fmradio

0x3e84,	// (0x0005f107) aid_height_parent_landcape

0xa5c4,	// (0x00065847) wml_content_pane_cp

0xa5cc,	// (0x0006584f) wml_tabs_pane

0xa5d5,	// (0x00065858) popup_wml_miniature_window

0xa5dd,	// (0x00065860) scroll_pane_cp021

0xa5f1,	// (0x00065874) wml_content_pane_comp8

0x9de0,	// (0x00065063) bg_popup_sub_pane_cp05

0xc366,	// (0x000675e9) popup_wml_miniature_window_g1

0xc36e,	// (0x000675f1) wml_miniature_view_pane

0x4a0f,	// (0x0005fc92) aid_size_wml_view

0x4a17,	// (0x0005fc9a) wml_miniature_view_pane_g1

0x4a20,	// (0x0005fca3) wml_miniature_view_pane_g2

0x4a29,	// (0x0005fcac) wml_miniature_view_pane_g3

0x4a31,	// (0x0005fcb4) wml_miniature_view_pane_g4

0x4a39,	// (0x0005fcbc) wml_miniature_view_pane_g5

0x4a41,	// (0x0005fcc4) wml_miniature_view_pane_g6

0x4a49,	// (0x0005fccc) wml_miniature_view_pane_g7

0x4a51,	// (0x0005fcd4) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x0006a922) wml_miniature_view_pane_g

0xc376,	// (0x000675f9) background_graphic_ParamLimits

0xc376,	// (0x000675f9) background_graphic

0xc382,	// (0x00067605) wml_tabs_2_pane

0xc38b,	// (0x0006760e) wml_tabs_3_pane_ParamLimits

0xc38b,	// (0x0006760e) wml_tabs_3_pane

0xc39d,	// (0x00067620) wml_tabs_4_pane_ParamLimits

0xc39d,	// (0x00067620) wml_tabs_4_pane

0xc3b3,	// (0x00067636) wml_tabs_5_pane_ParamLimits

0xc3b3,	// (0x00067636) wml_tabs_5_pane

0xc3cd,	// (0x00067650) wml_tabs_pane_g2_ParamLimits

0xc3cd,	// (0x00067650) wml_tabs_pane_g2

0xc3e1,	// (0x00067664) wml_tabs_pane_g3_ParamLimits

0xc3e1,	// (0x00067664) wml_tabs_pane_g3

0x4a59,	// (0x0005fcdc) wml_tabs_2_active_pane_ParamLimits

0x4a59,	// (0x0005fcdc) wml_tabs_2_active_pane

0x4a6d,	// (0x0005fcf0) wml_tabs_2_passive_pane_ParamLimits

0x4a6d,	// (0x0005fcf0) wml_tabs_2_passive_pane

0x4a81,	// (0x0005fd04) wml_tabs_3_active_pane_cp_ParamLimits

0x4a81,	// (0x0005fd04) wml_tabs_3_active_pane_cp

0x4a96,	// (0x0005fd19) wml_tabs_3_passive_pane_ParamLimits

0x4a96,	// (0x0005fd19) wml_tabs_3_passive_pane

0x4aa9,	// (0x0005fd2c) wml_tabs_3_passive_pane_cp_ParamLimits

0x4aa9,	// (0x0005fd2c) wml_tabs_3_passive_pane_cp

0x4ac0,	// (0x0005fd43) tabs_4_active_pane

0x4ac8,	// (0x0005fd4b) tabs_4_passive_pane

0x4ad2,	// (0x0005fd55) tabs_4_passive_pane_cp

0x4ada,	// (0x0005fd5d) tabs_4_passive_pane_cp2

0xc09e,	// (0x00067321) aid_height_text

0x3236,	// (0x0005e4b9) mup_volume_cont_pane_ParamLimits

0x3236,	// (0x0005e4b9) mup_volume_cont_pane

0x11d7,	// (0x0005c45a) aid_size_cell_pinb

0xa06b,	// (0x000652ee) aid_size_list_pinb

0x49c4,	// (0x0005fc47) mup2_volume_cont_pane_ParamLimits

0x49c4,	// (0x0005fc47) mup2_volume_cont_pane

0xc3f5,	// (0x00067678) mup2_volume_cont_pane_g1_ParamLimits

0xc3f5,	// (0x00067678) mup2_volume_cont_pane_g1

0x0e88,	// (0x0005c10b) aid_size_cell_touch_ParamLimits

0x0e88,	// (0x0005c10b) aid_size_cell_touch

0x10c6,	// (0x0005c349) touch_pane_ParamLimits

0x10c6,	// (0x0005c349) touch_pane

0x0e6a,	// (0x0005c0ed) main_rss2_pane

0xc437,	// (0x000676ba) listscroll_rss2_pane

0xc440,	// (0x000676c3) rss2_navigation_pane

0xc448,	// (0x000676cb) list_rss2_pane

0xac53,	// (0x00065ed6) scroll_pane_cp22

0xc450,	// (0x000676d3) rss2_navigation_pane_g1

0xc459,	// (0x000676dc) rss2_navigation_pane_g2

0xc461,	// (0x000676e4) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x0006a933) rss2_navigation_pane_g

0xc469,	// (0x000676ec) rss2_navigation_pane_t1

0x4ae4,	// (0x0005fd67) rss2_list_single_pane_ParamLimits

0x4ae4,	// (0x0005fd67) rss2_list_single_pane

0xc477,	// (0x000676fa) rss2_list_single_pane_t2

0xc485,	// (0x00067708) rss2_list_single_pane_t3_ParamLimits

0xc485,	// (0x00067708) rss2_list_single_pane_t3

0xc4a2,	// (0x00067725) rss2_list_single_pane_t4

0x2a10,	// (0x0005dc93) smil_status_pane_g1

0x99c1,	// (0x00064c44) main_image2_pane_ParamLimits

0x99c1,	// (0x00064c44) main_image2_pane

0x4586,	// (0x0005f809) main_camera2_pane_g9_ParamLimits

0x4586,	// (0x0005f809) main_camera2_pane_g9

0x46b4,	// (0x0005f937) main_camera2_pane_t5_ParamLimits

0x46b4,	// (0x0005f937) main_camera2_pane_t5

0xc318,	// (0x0006759b) main_camera2_pane_t6_ParamLimits

0xc318,	// (0x0006759b) main_camera2_pane_t6

0x4afc,	// (0x0005fd7f) main_image2_pane_g1_ParamLimits

0x4afc,	// (0x0005fd7f) main_image2_pane_g1

0x38de,	// (0x0005eb61) smil2_video_pane_ParamLimits

0x38de,	// (0x0005eb61) smil2_video_pane

0x0ec8,	// (0x0005c14b) aid_zoom_text_primary_cp

0x99b7,	// (0x00064c3a) popup_preview_fixed_window

0xa52d,	// (0x000657b0) im_reading_pane_g1

0x43fd,	// (0x0005f680) cams2_bc_adjust_pane_cp_ParamLimits

0x43fd,	// (0x0005f680) cams2_bc_adjust_pane_cp

0x46e3,	// (0x0005f966) cams2_bc_adjust_pane_ParamLimits

0x46e3,	// (0x0005f966) cams2_bc_adjust_pane

0xc4b0,	// (0x00067733) cams2_bc_adjust_pane_g1

0xc4b8,	// (0x0006773b) cams2_slider_pane

0xc4c1,	// (0x00067744) cams2_slider_pane_g1

0xc4ca,	// (0x0006774d) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x0006a93a) cams2_slider_pane_g

0x1296,	// (0x0005c519) calc_display_pane_ParamLimits

0x12be,	// (0x0005c541) calc_paper_pane_ParamLimits

0x12e1,	// (0x0005c564) grid_calc_pane_ParamLimits

0xab06,	// (0x00065d89) popup_clock_digital_window_t1_ParamLimits

0xb085,	// (0x00066308) main_image_pane_t1

0x1278,	// (0x0005c4fb) aid_size_cell_calc_ParamLimits

0x1278,	// (0x0005c4fb) aid_size_cell_calc

0x3eca,	// (0x0005f14d) popup_blid_sat_info2_window_ParamLimits

0x3eca,	// (0x0005f14d) popup_blid_sat_info2_window

0xc4ec,	// (0x0006776f) aid_size_cell_blid

0xc4f4,	// (0x00067777) bg_popup_window_pane_cp07

0xc517,	// (0x0006779a) grid_popup_blid_pane

0xc521,	// (0x000677a4) heading_pane_cp05_ParamLimits

0xc521,	// (0x000677a4) heading_pane_cp05

0xc5eb,	// (0x0006786e) cell_popup_blid_pane_ParamLimits

0xc5eb,	// (0x0006786e) cell_popup_blid_pane

0xc611,	// (0x00067894) cell_popup_blid_pane_g1

0xc619,	// (0x0006789c) cell_popup_blid_pane_t1

0x4994,	// (0x0005fc17) mup2_indicator_pane_ParamLimits

0x4994,	// (0x0005fc17) mup2_indicator_pane

0xada0,	// (0x00066023) mup2_visualizer_osc_pane

0xc354,	// (0x000675d7) mup2_visualizer_spec_pane_ParamLimits

0xc354,	// (0x000675d7) mup2_visualizer_spec_pane

0x4b12,	// (0x0005fd95) mup2_spec_half_pane

0x4b1b,	// (0x0005fd9e) mup2_spec_half_pane_cp

0x4b23,	// (0x0005fda6) mup2_spec_bar_pane_ParamLimits

0x4b23,	// (0x0005fda6) mup2_spec_bar_pane

0xc2a3,	// (0x00067526) mup2_spec_bar_pane_g1

0xc2ad,	// (0x00067530) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0006a8ad) mup2_spec_bar_pane_g

0x4b43,	// (0x0005fdc6) mup2_osc_middle_pane

0xc2bf,	// (0x00067542) mup2_visualizer_osc_pane_g1

0x99ef,	// (0x00064c72) popup_number_entry_window_t1_ParamLimits

0x9a02,	// (0x00064c85) popup_number_entry_window_t2_ParamLimits

0x9a14,	// (0x00064c97) popup_number_entry_window_t3_ParamLimits

0x1118,	// (0x0005c39b) popup_number_entry_window_t5_ParamLimits

0x1118,	// (0x0005c39b) popup_number_entry_window_t5

0xf0ec,	// (0x0006a36f) popup_number_entry_window_t_ParamLimits

0x9a26,	// (0x00064ca9) text_title_cp2_ParamLimits

0xaf5f,	// (0x000661e2) aid_hotspot_pointer_text2_pane

0xaf85,	// (0x00066208) main_viewer_pane_g9_ParamLimits

0xaf85,	// (0x00066208) main_viewer_pane_g9

0xa75c,	// (0x000659df) cale_month_pane_t1_ParamLimits

0xa7c7,	// (0x00065a4a) bg_cale_pane_ParamLimits

0xa7df,	// (0x00065a62) list_cale_pane_ParamLimits

0xa343,	// (0x000655c6) listscroll_cale_day_pane_t1

0xa7f0,	// (0x00065a73) scroll_pane_cp09_ParamLimits

0x326c,	// (0x0005e4ef) main_mup_eq_pane_t1_ParamLimits

0x326c,	// (0x0005e4ef) main_mup_eq_pane_t1

0x3286,	// (0x0005e509) main_mup_eq_pane_t2_ParamLimits

0x3286,	// (0x0005e509) main_mup_eq_pane_t2

0x32a0,	// (0x0005e523) main_mup_eq_pane_t3_ParamLimits

0x32a0,	// (0x0005e523) main_mup_eq_pane_t3

0x32bc,	// (0x0005e53f) main_mup_eq_pane_t4_ParamLimits

0x32bc,	// (0x0005e53f) main_mup_eq_pane_t4

0x32d8,	// (0x0005e55b) main_mup_eq_pane_t5_ParamLimits

0x32d8,	// (0x0005e55b) main_mup_eq_pane_t5

0x32f4,	// (0x0005e577) main_mup_eq_pane_t6_ParamLimits

0x32f4,	// (0x0005e577) main_mup_eq_pane_t6

0x3308,	// (0x0005e58b) main_mup_eq_pane_t7_ParamLimits

0x3308,	// (0x0005e58b) main_mup_eq_pane_t7

0x331c,	// (0x0005e59f) main_mup_eq_pane_t8_ParamLimits

0x331c,	// (0x0005e59f) main_mup_eq_pane_t8

0x3330,	// (0x0005e5b3) main_mup_eq_pane_t9_ParamLimits

0x3330,	// (0x0005e5b3) main_mup_eq_pane_t9

0x334a,	// (0x0005e5cd) main_mup_eq_pane_t10_ParamLimits

0x334a,	// (0x0005e5cd) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0006a6fc) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0006a6fc) main_mup_eq_pane_t

0x33f9,	// (0x0005e67c) mup_equalizer_pane_cp5_ParamLimits

0x340d,	// (0x0005e690) mup_equalizer_pane_cp6_ParamLimits

0x3421,	// (0x0005e6a4) mup_equalizer_pane_cp7_ParamLimits

0x0e6a,	// (0x0005c0ed) main_gallery_pane

0xc2c8,	// (0x0006754b) smil2_volume_pane

0xc2d0,	// (0x00067553) smil_status_volume_pane_g1_ParamLimits

0xc2e3,	// (0x00067566) smil_status_volume_pane_g2_ParamLimits

0xc2f6,	// (0x00067579) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x0006a8b2) smil_status_volume_pane_g_ParamLimits

0xc4f4,	// (0x00067777) bg_popup_window_pane_cp07_ParamLimits

0xc502,	// (0x00067785) blid_firmament_pane

0x4b4c,	// (0x0005fdcf) aid_size_cell_gallery_ParamLimits

0x4b4c,	// (0x0005fdcf) aid_size_cell_gallery

0x4b62,	// (0x0005fde5) grid_gallery_pane_ParamLimits

0x4b62,	// (0x0005fde5) grid_gallery_pane

0x4b7b,	// (0x0005fdfe) cell_gallery_pane_ParamLimits

0x4b7b,	// (0x0005fdfe) cell_gallery_pane

0xc627,	// (0x000678aa) bg_cell_gallery_focus_pane_ParamLimits

0xc627,	// (0x000678aa) bg_cell_gallery_focus_pane

0xc639,	// (0x000678bc) cell_gallery_pane_g1_ParamLimits

0xc639,	// (0x000678bc) cell_gallery_pane_g1

0x4bc4,	// (0x0005fe47) cell_gallery_pane_g2_ParamLimits

0x4bc4,	// (0x0005fe47) cell_gallery_pane_g2

0x4bd1,	// (0x0005fe54) cell_gallery_pane_g3_ParamLimits

0x4bd1,	// (0x0005fe54) cell_gallery_pane_g3

0xc645,	// (0x000678c8) cell_gallery_pane_g4_ParamLimits

0xc645,	// (0x000678c8) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x0006a960) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x0006a960) cell_gallery_pane_g

0xc651,	// (0x000678d4) bg_cell_gallery_focus_pane_g1

0xc659,	// (0x000678dc) bg_cell_gallery_focus_pane_g2

0xc661,	// (0x000678e4) bg_cell_gallery_focus_pane_g3

0xc669,	// (0x000678ec) bg_cell_gallery_focus_pane_g4

0xc671,	// (0x000678f4) bg_cell_gallery_focus_pane_g5

0xc679,	// (0x000678fc) bg_cell_gallery_focus_pane_g6

0xc681,	// (0x00067904) bg_cell_gallery_focus_pane_g7

0xc689,	// (0x0006790c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x0006a969) bg_cell_gallery_focus_pane_g

0xc691,	// (0x00067914) aid_firma_cardinal

0xc6a5,	// (0x00067928) blid_firmament_pane_t1

0xc6bc,	// (0x0006793f) blid_firmament_pane_t2

0xc6d3,	// (0x00067956) blid_firmament_pane_t3

0xc6ea,	// (0x0006796d) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x0006a97a) blid_firmament_pane_t

0xc701,	// (0x00067984) blid_sat_info_pane

0xc711,	// (0x00067994) blid_sat_info_pane_g1

0xc711,	// (0x00067994) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x0006a983) blid_sat_info_pane_g

0xc71b,	// (0x0006799e) blid_sat_info_pane_t1

0xc729,	// (0x000679ac) smil2_volume_content_pane

0xc732,	// (0x000679b5) smil2_volume_pane_g1

0xc73a,	// (0x000679bd) smil2_volume_content_pane_g1

0xc743,	// (0x000679c6) smil2_volume_content_pane_g2

0xc74c,	// (0x000679cf) smil2_volume_content_pane_g3

0xc755,	// (0x000679d8) smil2_volume_content_pane_g4

0xc75e,	// (0x000679e1) smil2_volume_content_pane_g5

0xc767,	// (0x000679ea) smil2_volume_content_pane_g6

0xc770,	// (0x000679f3) smil2_volume_content_pane_g7

0xc779,	// (0x000679fc) smil2_volume_content_pane_g8

0xc782,	// (0x00067a05) smil2_volume_content_pane_g9

0xc78b,	// (0x00067a0e) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x0006a988) smil2_volume_content_pane_g

0x1763,	// (0x0005c9e6) cale_week_day_heading_pane_t1_ParamLimits

0x1777,	// (0x0005c9fa) cale_week_day_heading_pane_t2_ParamLimits

0x178b,	// (0x0005ca0e) cale_week_day_heading_pane_t3_ParamLimits

0x179f,	// (0x0005ca22) cale_week_day_heading_pane_t4_ParamLimits

0x17b3,	// (0x0005ca36) cale_week_day_heading_pane_t5_ParamLimits

0x17c7,	// (0x0005ca4a) cale_week_day_heading_pane_t6_ParamLimits

0x17dd,	// (0x0005ca60) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0006a474) cale_week_day_heading_pane_t_ParamLimits

0xa355,	// (0x000655d8) bg_cale_side_pane_ParamLimits

0x17f1,	// (0x0005ca74) cale_week_time_pane_t1_ParamLimits

0x1809,	// (0x0005ca8c) cale_week_time_pane_t2_ParamLimits

0x1821,	// (0x0005caa4) cale_week_time_pane_t3_ParamLimits

0x1839,	// (0x0005cabc) cale_week_time_pane_t4_ParamLimits

0x1851,	// (0x0005cad4) cale_week_time_pane_t5_ParamLimits

0x1869,	// (0x0005caec) cale_week_time_pane_t6_ParamLimits

0x1881,	// (0x0005cb04) cale_week_time_pane_t7_ParamLimits

0x1899,	// (0x0005cb1c) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0006a483) cale_week_time_pane_t_ParamLimits

0x18b1,	// (0x0005cb34) cell_cale_week_pane_g2_ParamLimits

0xa355,	// (0x000655d8) bg_cale_side_pane_cp01_ParamLimits

0x285f,	// (0x0005dae2) cale_month_week_pane_t1_ParamLimits

0x2876,	// (0x0005daf9) cale_month_week_pane_t2_ParamLimits

0x288d,	// (0x0005db10) cale_month_week_pane_t3_ParamLimits

0x28a4,	// (0x0005db27) cale_month_week_pane_t4_ParamLimits

0x28bb,	// (0x0005db3e) cale_month_week_pane_t5_ParamLimits

0x28d2,	// (0x0005db55) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0006a55c) cale_month_week_pane_t_ParamLimits

0xa76e,	// (0x000659f1) cell_cale_month_pane_g1_ParamLimits

0x0e6a,	// (0x0005c0ed) main_cale_event_viewer_pane

0x0e6a,	// (0x0005c0ed) listscroll_cale_event_viewer_pane

0xc794,	// (0x00067a17) list_cale_ev_pane

0xc79c,	// (0x00067a1f) scroll_pane_cp023

0xc7a8,	// (0x00067a2b) field_cale_ev_pane_ParamLimits

0xc7a8,	// (0x00067a2b) field_cale_ev_pane

0xc7c2,	// (0x00067a45) field_cale_ev_content_pane_ParamLimits

0xc7c2,	// (0x00067a45) field_cale_ev_content_pane

0xc7ce,	// (0x00067a51) field_cale_ev_pane_g1_ParamLimits

0xc7ce,	// (0x00067a51) field_cale_ev_pane_g1

0xc7da,	// (0x00067a5d) field_cale_ev_pane_g2_ParamLimits

0xc7da,	// (0x00067a5d) field_cale_ev_pane_g2

0xc7f2,	// (0x00067a75) field_cale_ev_pane_g3_ParamLimits

0xc7f2,	// (0x00067a75) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x0006a99d) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x0006a99d) field_cale_ev_pane_g

0xc80a,	// (0x00067a8d) field_cale_ev_pane_t1_ParamLimits

0xc80a,	// (0x00067a8d) field_cale_ev_pane_t1

0xc821,	// (0x00067aa4) field_cale_ev_content_pane_t1_ParamLimits

0xc821,	// (0x00067aa4) field_cale_ev_content_pane_t1

0xaf29,	// (0x000661ac) bg_button_pane_cp01

0xa176,	// (0x000653f9) listscroll_cale_week_pane_ParamLimits

0x1578,	// (0x0005c7fb) popup_toolbar_window_cp01

0xa343,	// (0x000655c6) listscroll_cale_week_pane_t1_ParamLimits

0xa176,	// (0x000653f9) listscroll_cale_day_pane_ParamLimits

0x2a6f,	// (0x0005dcf2) popup_toolbar_window_cp02

0xa343,	// (0x000655c6) listscroll_cale_day_pane_t1_ParamLimits

0xa176,	// (0x000653f9) main_cale_month_pane_ParamLimits

0x40f0,	// (0x0005f373) popup_toolbar_window_cp03_ParamLimits

0x40f0,	// (0x0005f373) popup_toolbar_window_cp03

0x37a2,	// (0x0005ea25) main_image_pane_g2_ParamLimits

0x37a2,	// (0x0005ea25) main_image_pane_g2

0x37b3,	// (0x0005ea36) main_image_pane_g3_ParamLimits

0x37b3,	// (0x0005ea36) main_image_pane_g3

0x0002,

0xf50b,	// (0x0006a78e) main_image_pane_g_ParamLimits

0xf50b,	// (0x0006a78e) main_image_pane_g

0xb085,	// (0x00066308) main_image_pane_t1_ParamLimits

0x37c4,	// (0x0005ea47) main_image_pane_t2_ParamLimits

0x37c4,	// (0x0005ea47) main_image_pane_t2

0x37d6,	// (0x0005ea59) main_image_pane_t3_ParamLimits

0x37d6,	// (0x0005ea59) main_image_pane_t3

0x37fe,	// (0x0005ea81) main_image_pane_t4_ParamLimits

0x37fe,	// (0x0005ea81) main_image_pane_t4

0x0003,

0xf512,	// (0x0006a795) main_image_pane_t_ParamLimits

0xf512,	// (0x0006a795) main_image_pane_t

0x381e,	// (0x0005eaa1) popup_image_details_window_cp01

0x3828,	// (0x0005eaab) popup_toobar_trans_pane_cp01_ParamLimits

0x3828,	// (0x0005eaab) popup_toobar_trans_pane_cp01

0x3fa1,	// (0x0005f224) popup_image_details_window_ParamLimits

0x3fa1,	// (0x0005f224) popup_image_details_window

0xc229,	// (0x000674ac) popup_image_focus_window

0x43b7,	// (0x0005f63a) camera2_autofocus_pane_ParamLimits

0x43b7,	// (0x0005f63a) camera2_autofocus_pane

0x0e6a,	// (0x0005c0ed) bg_popup_sub_pane_cp06

0xc83e,	// (0x00067ac1) popup_image_focus_window_g1

0xc846,	// (0x00067ac9) popup_image_focus_window_g2

0xc84e,	// (0x00067ad1) popup_image_focus_window_g3

0xc856,	// (0x00067ad9) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x0006a9a4) popup_image_focus_window_g

0xc85e,	// (0x00067ae1) popup_image_focus_window_t1

0xc86c,	// (0x00067aef) popup_image_focus_window_t2

0xc87c,	// (0x00067aff) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x0006a9ad) popup_image_focus_window_t

0xc88a,	// (0x00067b0d) camera2_autofocus_pane_g1

0x99c1,	// (0x00064c44) bg_tb_trans_pane_cp01

0xc898,	// (0x00067b1b) popup_image_details_window_g1

0xc8ab,	// (0x00067b2e) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x0006a9bf) popup_image_details_window_g

0xc8d4,	// (0x00067b57) popup_image_details_window_t1

0xc8e6,	// (0x00067b69) popup_image_details_window_t2

0xc8ff,	// (0x00067b82) popup_image_details_window_t3

0xc913,	// (0x00067b96) popup_image_details_window_t4

0xc92e,	// (0x00067bb1) popup_image_details_window_t5

0x0004,

0xf743,	// (0x0006a9c6) popup_image_details_window_t

0xa13e,	// (0x000653c1) bg_calc_paper_pane_ParamLimits

0xa152,	// (0x000653d5) grid_highlight_pane_cp013

0xa15c,	// (0x000653df) list_calc_pane_ParamLimits

0xa16e,	// (0x000653f1) scroll_pane_cp024

0xa176,	// (0x000653f9) bg_calc_display_pane_ParamLimits

0x13d6,	// (0x0005c659) calc_display_pane_t1_ParamLimits

0x13e8,	// (0x0005c66b) calc_display_pane_t2_ParamLimits

0xa182,	// (0x00065405) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0006a3f6) calc_display_pane_t_ParamLimits

0x14a3,	// (0x0005c726) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0006a413) cell_calc_pane_g

0x14ac,	// (0x0005c72f) cell_calc_pane_t1

0xa1f9,	// (0x0006547c) grid_highlight_pane_cp02_ParamLimits

0xa20f,	// (0x00065492) toolbar_button_pane_cp01_ParamLimits

0xa20f,	// (0x00065492) toolbar_button_pane_cp01

0xb0ca,	// (0x0006634d) temp_image_control_pane_ParamLimits

0xb0ca,	// (0x0006634d) temp_image_control_pane

0x99c1,	// (0x00064c44) main_mp3_pane

0xc948,	// (0x00067bcb) temp_image_control_pane_g1_ParamLimits

0xc948,	// (0x00067bcb) temp_image_control_pane_g1

0xc956,	// (0x00067bd9) temp_image_control_pane_g2_ParamLimits

0xc956,	// (0x00067bd9) temp_image_control_pane_g2

0xc968,	// (0x00067beb) temp_image_control_pane_g3_ParamLimits

0xc968,	// (0x00067beb) temp_image_control_pane_g3

0x4c0e,	// (0x0005fe91) temp_image_control_pane_g4_ParamLimits

0x4c0e,	// (0x0005fe91) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x0006a9d1) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x0006a9d1) temp_image_control_pane_g

0xc948,	// (0x00067bcb) main_mp3_pane_g1

0x4c21,	// (0x0005fea4) main_mp3_pane_g2

0x0007,

0xf757,	// (0x0006a9da) main_mp3_pane_g

0xc9ab,	// (0x00067c2e) main_mp3_pane_t1

0xa43e,	// (0x000656c1) main_camera_pane_g8_ParamLimits

0xa43e,	// (0x000656c1) main_camera_pane_g8

0x1b58,	// (0x0005cddb) main_video_pane_g7_ParamLimits

0x1b58,	// (0x0005cddb) main_video_pane_g7

0xc336,	// (0x000675b9) main_camera2_pane_t7_ParamLimits

0xc336,	// (0x000675b9) main_camera2_pane_t7

0xa584,	// (0x00065807) scroll_pane_cp025_ParamLimits

0xa584,	// (0x00065807) scroll_pane_cp025

0xa598,	// (0x0006581b) scroll_pane_cp026_ParamLimits

0xa598,	// (0x0006581b) scroll_pane_cp026

0xa5a7,	// (0x0006582a) wml_content_pane_ParamLimits

0x0e6a,	// (0x0005c0ed) main_touch_calib_pane

0x4ced,	// (0x0005ff70) main_touch_calib_pane_g1

0x4cf9,	// (0x0005ff7c) main_touch_calib_pane_g2

0x4d05,	// (0x0005ff88) main_touch_calib_pane_g3

0x4d11,	// (0x0005ff94) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x0006a9f8) main_touch_calib_pane_g

0x4d1d,	// (0x0005ffa0) main_touch_calib_pane_t1

0x4d37,	// (0x0005ffba) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x0006aa01) main_touch_calib_pane_t

0xace1,	// (0x00065f64) mup_progress_pane_cp02

0xad00,	// (0x00065f83) navi_pane_g1

0xad62,	// (0x00065fe5) navi_pane_mp_t3

0x99c1,	// (0x00064c44) main_mp3_pane_ParamLimits

0x412e,	// (0x0005f3b1) navi_pane_ParamLimits

0xc948,	// (0x00067bcb) main_mp3_pane_g1_ParamLimits

0x4c21,	// (0x0005fea4) main_mp3_pane_g2_ParamLimits

0x4c2f,	// (0x0005feb2) main_mp3_pane_g3_ParamLimits

0x4c2f,	// (0x0005feb2) main_mp3_pane_g3

0x4c3d,	// (0x0005fec0) main_mp3_pane_g4_ParamLimits

0x4c3d,	// (0x0005fec0) main_mp3_pane_g4

0xc978,	// (0x00067bfb) main_mp3_pane_g5_ParamLimits

0xc978,	// (0x00067bfb) main_mp3_pane_g5

0xc986,	// (0x00067c09) main_mp3_pane_g6_ParamLimits

0xc986,	// (0x00067c09) main_mp3_pane_g6

0xc993,	// (0x00067c16) main_mp3_pane_g7_ParamLimits

0xc993,	// (0x00067c16) main_mp3_pane_g7

0xc99f,	// (0x00067c22) main_mp3_pane_g8_ParamLimits

0xc99f,	// (0x00067c22) main_mp3_pane_g8

0xf757,	// (0x0006a9da) main_mp3_pane_g_ParamLimits

0x4c4b,	// (0x0005fece) main_mp3_pane_t2

0x4c59,	// (0x0005fedc) main_mp3_pane_t3

0xc9b9,	// (0x00067c3c) main_mp3_pane_t4

0xc9c7,	// (0x00067c4a) main_mp3_pane_t5

0x0005,

0xf768,	// (0x0006a9eb) main_mp3_pane_t

0xc9d5,	// (0x00067c58) mup_progress_pane_cp01

0x0ec8,	// (0x0005c14b) aid_zoom_text_secondary2

0xc794,	// (0x00067a17) list_cale_ev2_pane

0xc79c,	// (0x00067a1f) scroll_pane_cp023_ParamLimits

0x4d8d,	// (0x00060010) field_cale_ev2_pane_ParamLimits

0x4d8d,	// (0x00060010) field_cale_ev2_pane

0x4db3,	// (0x00060036) field_cale_ev2_pane_g1_ParamLimits

0x4db3,	// (0x00060036) field_cale_ev2_pane_g1

0x4dbf,	// (0x00060042) field_cale_ev2_pane_g2_ParamLimits

0x4dbf,	// (0x00060042) field_cale_ev2_pane_g2

0x4dd7,	// (0x0006005a) field_cale_ev2_pane_g3_ParamLimits

0x4dd7,	// (0x0006005a) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x0006aa0c) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x0006aa0c) field_cale_ev2_pane_g

0x4dfb,	// (0x0006007e) field_cale_ev2_pane_t1_ParamLimits

0x4dfb,	// (0x0006007e) field_cale_ev2_pane_t1

0x4e12,	// (0x00060095) field_cale_ev2_pane_t2_ParamLimits

0x4e12,	// (0x00060095) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x0006aa15) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x0006aa15) field_cale_ev2_pane_t

0x3652,	// (0x0005e8d5) main_postcard_pane_g5_ParamLimits

0x3652,	// (0x0005e8d5) main_postcard_pane_g5

0x3668,	// (0x0005e8eb) main_postcard_pane_g6_ParamLimits

0x3668,	// (0x0005e8eb) main_postcard_pane_g6

0x1908,	// (0x0005cb8b) camera2_autofocus_pane_cp_ParamLimits

0x1908,	// (0x0005cb8b) camera2_autofocus_pane_cp

0x99c1,	// (0x00064c44) main_mup3_pane

0x4e47,	// (0x000600ca) main_mup3_pane_g1_ParamLimits

0x4e47,	// (0x000600ca) main_mup3_pane_g1

0x4e69,	// (0x000600ec) main_mup3_pane_g2_ParamLimits

0x4e69,	// (0x000600ec) main_mup3_pane_g2

0x4eea,	// (0x0006016d) main_mup3_pane_g3_ParamLimits

0x4eea,	// (0x0006016d) main_mup3_pane_g3

0x4f2c,	// (0x000601af) main_mup3_pane_g4_ParamLimits

0x4f2c,	// (0x000601af) main_mup3_pane_g4

0x4f6e,	// (0x000601f1) main_mup3_pane_g5_ParamLimits

0x4f6e,	// (0x000601f1) main_mup3_pane_g5

0x4fb2,	// (0x00060235) main_mup3_pane_g6_ParamLimits

0x4fb2,	// (0x00060235) main_mup3_pane_g6

0xc9dd,	// (0x00067c60) main_mup3_pane_g7_ParamLimits

0xc9dd,	// (0x00067c60) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x0006aa25) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x0006aa25) main_mup3_pane_g

0x502e,	// (0x000602b1) main_mup3_pane_t1_ParamLimits

0x502e,	// (0x000602b1) main_mup3_pane_t1

0x50a2,	// (0x00060325) main_mup3_pane_t2_ParamLimits

0x50a2,	// (0x00060325) main_mup3_pane_t2

0x5176,	// (0x000603f9) main_mup3_pane_t4_ParamLimits

0x5176,	// (0x000603f9) main_mup3_pane_t4

0x51d0,	// (0x00060453) main_mup3_pane_t5_ParamLimits

0x51d0,	// (0x00060453) main_mup3_pane_t5

0x5284,	// (0x00060507) main_mup3_pane_t6_ParamLimits

0x5284,	// (0x00060507) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x0006aa36) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x0006aa36) main_mup3_pane_t

0x5338,	// (0x000605bb) mup3_progress_pane_ParamLimits

0x5338,	// (0x000605bb) mup3_progress_pane

0x53b4,	// (0x00060637) popup_mup3_control_window_ParamLimits

0x53b4,	// (0x00060637) popup_mup3_control_window

0xc9eb,	// (0x00067c6e) popup_mup3_text_window

0x53e6,	// (0x00060669) mup3_progress_pane_t1

0x53fd,	// (0x00060680) mup3_progress_pane_t2

0xc9f3,	// (0x00067c76) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x0006aa43) mup3_progress_pane_t

0xca0a,	// (0x00067c8d) mup_progress_pane_cp03

0x0e6a,	// (0x0005c0ed) bg_tb_trans_pane_cp04

0x5414,	// (0x00060697) mup3_volume_pane

0x541c,	// (0x0006069f) popup_mup3_control_window_g1

0x5425,	// (0x000606a8) mup3_volume_pane_g1

0x542e,	// (0x000606b1) mup3_volume_pane_g2

0x5437,	// (0x000606ba) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x0006aa4a) mup3_volume_pane_g

0x0e6a,	// (0x0005c0ed) bg_tb_trans_pane_cp03

0xca1a,	// (0x00067c9d) popup_mup3_text_window_g1

0xca22,	// (0x00067ca5) popup_mup3_text_window_t1

0xa1d0,	// (0x00065453) list_calc_item_pane_g1_ParamLimits

0xc41e,	// (0x000676a1) mup_volume_pane_cp_g1

0x4d51,	// (0x0005ffd4) main_touch_calib_pane_t3

0x4d65,	// (0x0005ffe8) main_touch_calib_pane_t4

0x4d79,	// (0x0005fffc) main_touch_calib_pane_t5

0x0e74,	// (0x0005c0f7) aid_cell_size_toolbar2

0x0e7c,	// (0x0005c0ff) aid_popup3_width_pane

0x0eb8,	// (0x0005c13b) aid_zoom_text_msg_primary

0xa40b,	// (0x0006568e) vorec_t7

0xa194,	// (0x00065417) bg_calc_paper_pane_g1_ParamLimits

0xa1a0,	// (0x00065423) bg_calc_paper_pane_g2_ParamLimits

0xa1ac,	// (0x0006542f) bg_calc_paper_pane_g3_ParamLimits

0xa1b8,	// (0x0006543b) bg_calc_paper_pane_g4_ParamLimits

0xa1c4,	// (0x00065447) bg_calc_paper_pane_g5_ParamLimits

0x142f,	// (0x0005c6b2) bg_calc_paper_pane_g6_ParamLimits

0x143e,	// (0x0005c6c1) bg_calc_paper_pane_g7_ParamLimits

0x144d,	// (0x0005c6d0) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0006a3fd) bg_calc_paper_pane_g_ParamLimits

0x1460,	// (0x0005c6e3) calc_bg_paper_pane_g9_ParamLimits

0x1a62,	// (0x0005cce5) image_qvga_pane_ParamLimits

0x1a62,	// (0x0005cce5) image_qvga_pane

0xa03b,	// (0x000652be) bg_popup_sub_pane_cp04_ParamLimits

0xb001,	// (0x00066284) popup_mup_playback_window_g1_ParamLimits

0xb00d,	// (0x00066290) popup_mup_playback_window_t1_ParamLimits

0xb022,	// (0x000662a5) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0006a789) popup_mup_playback_window_t_ParamLimits

0x48ae,	// (0x0005fb31) main_mup2_pane_g3_ParamLimits

0x48ae,	// (0x0005fb31) main_mup2_pane_g3

0x1e5f,	// (0x0005d0e2) popup_toolbar_window_cp04

0xb417,	// (0x0006669a) popup_call2_audio_second_window_g3_ParamLimits

0xb417,	// (0x0006669a) popup_call2_audio_second_window_g3

0xb821,	// (0x00066aa4) popup_call2_audio_first_window_g4_ParamLimits

0xb821,	// (0x00066aa4) popup_call2_audio_first_window_g4

0xbea0,	// (0x00067123) popup_call2_audio_in_window_g4_ParamLimits

0xbea0,	// (0x00067123) popup_call2_audio_in_window_g4

0x3784,	// (0x0005ea07) aid_area_sk_bg_cut_ParamLimits

0x3784,	// (0x0005ea07) aid_area_sk_bg_cut

0xb037,	// (0x000662ba) aid_area_sk_bg_cut_2_ParamLimits

0xb037,	// (0x000662ba) aid_area_sk_bg_cut_2

0x4bb4,	// (0x0005fe37) aid_placing_details_win

0x4bbc,	// (0x0005fe3f) aid_placing_details_win_2

0xc88a,	// (0x00067b0d) camera2_autofocus_pane_g1_ParamLimits

0x1071,	// (0x0005c2f4) popup_fixed_preview_cale_window_ParamLimits

0x1071,	// (0x0005c2f4) popup_fixed_preview_cale_window

0xadba,	// (0x0006603d) navi_slider_pane_g3

0xadc3,	// (0x00066046) navi_slider_pane_g4

0xadcc,	// (0x0006604f) navi_slider_pane_g5

0xadba,	// (0x0006603d) navi_slider_pane_g6

0xadd5,	// (0x00066058) navi_slider_pane_g7

0xaef6,	// (0x00066179) mup_scale_pane_g3

0xaeff,	// (0x00066182) mup_scale_pane_g4

0xaf08,	// (0x0006618b) mup_scale_pane_g5

0x3435,	// (0x0005e6b8) mup_scale_pane_g6

0x343e,	// (0x0005e6c1) mup_scale_pane_g7

0xadba,	// (0x0006603d) cams2_slider_pane_g3

0xc4d3,	// (0x00067756) cams2_slider_pane_g4

0xc4db,	// (0x0006775e) cams2_slider_pane_g5

0xadba,	// (0x0006603d) cams2_slider_pane_g6

0xc4e3,	// (0x00067766) cams2_slider_pane_g7

0xc711,	// (0x00067994) camera2_autofocus_pane_cp_g1

0xca30,	// (0x00067cb3) bg_popup_preview_window_pane_cp02_ParamLimits

0xca30,	// (0x00067cb3) bg_popup_preview_window_pane_cp02

0xca3c,	// (0x00067cbf) list_fp_cale_pane_ParamLimits

0xca3c,	// (0x00067cbf) list_fp_cale_pane

0xca48,	// (0x00067ccb) popup_fixed_preview_cale_window_t1_ParamLimits

0xca48,	// (0x00067ccb) popup_fixed_preview_cale_window_t1

0x5440,	// (0x000606c3) popup_fixed_preview_cale_window_t2_ParamLimits

0x5440,	// (0x000606c3) popup_fixed_preview_cale_window_t2

0x5455,	// (0x000606d8) popup_fixed_preview_cale_window_t3_ParamLimits

0x5455,	// (0x000606d8) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x0006aa51) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x0006aa51) popup_fixed_preview_cale_window_t

0x546a,	// (0x000606ed) list_single_fp_cale_pane_ParamLimits

0x546a,	// (0x000606ed) list_single_fp_cale_pane

0xca66,	// (0x00067ce9) list_single_fp_cale_pane_g1_ParamLimits

0xca66,	// (0x00067ce9) list_single_fp_cale_pane_g1

0xca72,	// (0x00067cf5) list_single_fp_cale_pane_g2_ParamLimits

0xca72,	// (0x00067cf5) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0006aa58) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0006aa58) list_single_fp_cale_pane_g

0xca8b,	// (0x00067d0e) list_single_fp_cale_pane_t1_ParamLimits

0xca8b,	// (0x00067d0e) list_single_fp_cale_pane_t1

0xca9d,	// (0x00067d20) list_single_fp_cale_pane_t2_ParamLimits

0xca9d,	// (0x00067d20) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x0006aa5f) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x0006aa5f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0e6a,	// (0x0005c0ed) main_dialer_pane

0x5482,	// (0x00060705) aid_cell_size_keypad

0x548c,	// (0x0006070f) dialer_ne_pane

0x5494,	// (0x00060717) grid_dialer_command_1_pane

0x549c,	// (0x0006071f) grid_dialer_command_2_pane

0x54a4,	// (0x00060727) grid_dialer_keypad_pane

0x54b6,	// (0x00060739) bg_popup_call_pane_cp06_ParamLimits

0x54b6,	// (0x00060739) bg_popup_call_pane_cp06

0x54c2,	// (0x00060745) dialer_ne_clear_pane_ParamLimits

0x54c2,	// (0x00060745) dialer_ne_clear_pane

0xcad0,	// (0x00067d53) dialer_ne_pane_g1

0xcad8,	// (0x00067d5b) dialer_ne_pane_t1_ParamLimits

0xcad8,	// (0x00067d5b) dialer_ne_pane_t1

0x54ce,	// (0x00060751) dialer_ne_pane_t2_ParamLimits

0x54ce,	// (0x00060751) dialer_ne_pane_t2

0x54f8,	// (0x0006077b) dialer_ne_pane_t3_ParamLimits

0x54f8,	// (0x0006077b) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x0006aa64) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x0006aa64) dialer_ne_pane_t

0x5528,	// (0x000607ab) dialer_ne_pane_t3_copy1_ParamLimits

0x5528,	// (0x000607ab) dialer_ne_pane_t3_copy1

0x5557,	// (0x000607da) cell_dialer_keypad_pane_ParamLimits

0x5557,	// (0x000607da) cell_dialer_keypad_pane

0x556e,	// (0x000607f1) cell_dialer_command_1_pane_ParamLimits

0x556e,	// (0x000607f1) cell_dialer_command_1_pane

0x5584,	// (0x00060807) cell_dialer_command_2_pane_ParamLimits

0x5584,	// (0x00060807) cell_dialer_command_2_pane

0xcaea,	// (0x00067d6d) bg_button_pane_cp02_ParamLimits

0xcaea,	// (0x00067d6d) bg_button_pane_cp02

0x5593,	// (0x00060816) cell_dialer_keypad_pane_g1_ParamLimits

0x5593,	// (0x00060816) cell_dialer_keypad_pane_g1

0xcaea,	// (0x00067d6d) bg_button_pane_cp03_ParamLimits

0xcaea,	// (0x00067d6d) bg_button_pane_cp03

0x55a8,	// (0x0006082b) cell_dialer_command_1_pane_g1_ParamLimits

0x55a8,	// (0x0006082b) cell_dialer_command_1_pane_g1

0xcaf6,	// (0x00067d79) bg_button_pane_cp04

0x55bc,	// (0x0006083f) cell_dialer_command_2_pane_g1

0xada0,	// (0x00066023) bg_button_pane_cp06

0xcafe,	// (0x00067d81) dialer_ne_clear_pane_g1

0x2f73,	// (0x0005e1f6) navi_pane_g2

0x2fa1,	// (0x0005e224) navi_pane_g3

0x0002,

0xf409,	// (0x0006a68c) navi_pane_g

0x2fca,	// (0x0005e24d) navi_pane_mv_g2

0x2ff1,	// (0x0005e274) navi_pane_mv_g5

0x2ff9,	// (0x0005e27c) navi_pane_mv_t1

0xa176,	// (0x000653f9) main_clock2_pane

0x55ef,	// (0x00060872) main_clock2_list_pane_ParamLimits

0x55ef,	// (0x00060872) main_clock2_list_pane

0x5625,	// (0x000608a8) main_clock2_pane_t1_ParamLimits

0x5625,	// (0x000608a8) main_clock2_pane_t1

0x5663,	// (0x000608e6) main_clock2_pane_t2_ParamLimits

0x5663,	// (0x000608e6) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x0006aa6b) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x0006aa6b) main_clock2_pane_t

0x56ed,	// (0x00060970) popup_clock_analogue_window_cp03_ParamLimits

0x56ed,	// (0x00060970) popup_clock_analogue_window_cp03

0x5714,	// (0x00060997) popup_clock_digital_window_cp02_ParamLimits

0x5714,	// (0x00060997) popup_clock_digital_window_cp02

0x5789,	// (0x00060a0c) main_clock2_list_single_pane_ParamLimits

0x5789,	// (0x00060a0c) main_clock2_list_single_pane

0xada0,	// (0x00066023) list_highlight_pane_cp05

0xcb06,	// (0x00067d89) main_clock2_list_single_pane_t1

0x1e5f,	// (0x0005d0e2) popup_toolbar_window_cp04_ParamLimits

0x4bde,	// (0x0005fe61) camera2_autofocus_pane_g2_ParamLimits

0x4bde,	// (0x0005fe61) camera2_autofocus_pane_g2

0x4bea,	// (0x0005fe6d) camera2_autofocus_pane_g3_ParamLimits

0x4bea,	// (0x0005fe6d) camera2_autofocus_pane_g3

0x4bf6,	// (0x0005fe79) camera2_autofocus_pane_g4_ParamLimits

0x4bf6,	// (0x0005fe79) camera2_autofocus_pane_g4

0x4c02,	// (0x0005fe85) camera2_autofocus_pane_g5_ParamLimits

0x4c02,	// (0x0005fe85) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x0006a9b4) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x0006a9b4) camera2_autofocus_pane_g

0x4e27,	// (0x000600aa) camera2_autofocus_pane_cp_g2

0x4e2f,	// (0x000600b2) camera2_autofocus_pane_cp_g3

0x4e37,	// (0x000600ba) camera2_autofocus_pane_cp_g4

0x4e3f,	// (0x000600c2) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x0006aa1a) camera2_autofocus_pane_cp_g

0x54ae,	// (0x00060731) popup_dialer_spcha_window

0x0e6a,	// (0x0005c0ed) bg_popup_sub_pane_cp07

0xcb14,	// (0x00067d97) list_spcha_pane

0xcb1c,	// (0x00067d9f) list_single_spcha_pane_ParamLimits

0xcb1c,	// (0x00067d9f) list_single_spcha_pane

0x0e6a,	// (0x0005c0ed) list_highlight_pane_cp06

0xcb2d,	// (0x00067db0) list_single_spcha_pane_t1

0xbc4a,	// (0x00066ecd) popup_call2_audio_out_window_g4_ParamLimits

0xbc4a,	// (0x00066ecd) popup_call2_audio_out_window_g4

0x0e6a,	// (0x0005c0ed) main_imed2_pane

0xc231,	// (0x000674b4) popup_imed_adjust2_window

0x3fb9,	// (0x0005f23c) popup_imed_trans_window_ParamLimits

0x3fb9,	// (0x0005f23c) popup_imed_trans_window

0xc54d,	// (0x000677d0) popup_blid_sat_info2_window_t1

0xc55b,	// (0x000677de) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x0006a949) popup_blid_sat_info2_window_t

0x5833,	// (0x00060ab6) aid_size_cell_colour_35

0x5853,	// (0x00060ad6) aid_size_cell_colour_112

0x5873,	// (0x00060af6) aid_size_cell_effect

0xc209,	// (0x0006748c) bg_tb_trans_pane_cp02

0xa863,	// (0x00065ae6) heading_imed_pane

0x5893,	// (0x00060b16) listscroll_imed_pane

0xcb3b,	// (0x00067dbe) heading_imed_pane_g1

0xcb43,	// (0x00067dc6) heading_imed_pane_t1

0xcb51,	// (0x00067dd4) grid_imed_colour_35_pane_ParamLimits

0xcb51,	// (0x00067dd4) grid_imed_colour_35_pane

0x589f,	// (0x00060b22) grid_imed_effect_pane

0xcb6c,	// (0x00067def) list_imed_aspect_pane

0x58b4,	// (0x00060b37) scroll_pane_cp027_ParamLimits

0x58b4,	// (0x00060b37) scroll_pane_cp027

0x58c5,	// (0x00060b48) cell_imed_effect_pane_ParamLimits

0x58c5,	// (0x00060b48) cell_imed_effect_pane

0xcb74,	// (0x00067df7) cell_imed_colour_pane_ParamLimits

0xcb74,	// (0x00067df7) cell_imed_colour_pane

0xcbb6,	// (0x00067e39) cell_imed_colour_pane_g1_ParamLimits

0xcbb6,	// (0x00067e39) cell_imed_colour_pane_g1

0xcbc7,	// (0x00067e4a) hgihlgiht_grid_pane_cp016_ParamLimits

0xcbc7,	// (0x00067e4a) hgihlgiht_grid_pane_cp016

0x58ec,	// (0x00060b6f) cell_imed_effect_pane_g1

0x58f4,	// (0x00060b77) grid_highlight_pane_cp017

0xa2f9,	// (0x0006557c) list_imed_single_pane_ParamLimits

0xa2f9,	// (0x0006557c) list_imed_single_pane

0x0e6a,	// (0x0005c0ed) list_highlight_pane_cp07

0xcbd8,	// (0x00067e5b) list_imed_aspect_pane_comp1_t1

0xc209,	// (0x0006748c) bg_tb_trans_pane_cp05

0xcbfa,	// (0x00067e7d) popup_imed_adjust2_window_g1

0xcc21,	// (0x00067ea4) popup_imed_adjust2_window_t1

0xcc39,	// (0x00067ebc) slider_imed_adjust_pane

0xcc4d,	// (0x00067ed0) slider_imed_adjust_pane_g1

0xcc5d,	// (0x00067ee0) slider_imed_adjust_pane_g2

0xcc6d,	// (0x00067ef0) slider_imed_adjust_pane_g3

0xcc7e,	// (0x00067f01) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x0006aa88) slider_imed_adjust_pane_g

0x58fd,	// (0x00060b80) aid_size_cell_clipart2

0x5909,	// (0x00060b8c) grid_imed_clipart_pane

0xcc8f,	// (0x00067f12) scroll_pane_cp031

0x5913,	// (0x00060b96) cell_imed_clipart_pane_ParamLimits

0x5913,	// (0x00060b96) cell_imed_clipart_pane

0x593a,	// (0x00060bbd) cell_imed_clipart_pane_g1

0x0e6a,	// (0x0005c0ed) grid_highlight_pane_cp014

0x5604,	// (0x00060887) main_clock2_pane_g1_ParamLimits

0x5604,	// (0x00060887) main_clock2_pane_g1

0x5734,	// (0x000609b7) aid_call2_pane_cp10

0x5746,	// (0x000609c9) aid_call_pane_cp10

0xacd5,	// (0x00065f58) popup_clock_analogue_window_cp10_g1

0xacd5,	// (0x00065f58) popup_clock_analogue_window_cp10_g2

0x5758,	// (0x000609db) popup_clock_analogue_window_cp10_g3

0x5758,	// (0x000609db) popup_clock_analogue_window_cp10_g4

0xacd5,	// (0x00065f58) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x0006aa76) popup_clock_analogue_window_cp10_g

0x576a,	// (0x000609ed) popup_clock_analogue_window_cp10_t1

0x579b,	// (0x00060a1e) clock_digital_number_pane_cp10_ParamLimits

0x579b,	// (0x00060a1e) clock_digital_number_pane_cp10

0x57b3,	// (0x00060a36) clock_digital_number_pane_cp11_ParamLimits

0x57b3,	// (0x00060a36) clock_digital_number_pane_cp11

0x57cb,	// (0x00060a4e) clock_digital_number_pane_cp12_ParamLimits

0x57cb,	// (0x00060a4e) clock_digital_number_pane_cp12

0x57e3,	// (0x00060a66) clock_digital_number_pane_cp13_ParamLimits

0x57e3,	// (0x00060a66) clock_digital_number_pane_cp13

0x57fb,	// (0x00060a7e) clock_digital_separator_pane_cp10_ParamLimits

0x57fb,	// (0x00060a7e) clock_digital_separator_pane_cp10

0x5813,	// (0x00060a96) popup_clock_digital_window_cp02_t1_ParamLimits

0x5813,	// (0x00060a96) popup_clock_digital_window_cp02_t1

0xa033,	// (0x000652b6) clock_digital_number_pane_cp10_g1

0xa033,	// (0x000652b6) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x0006aa91) clock_digital_number_pane_cp10_g

0xa033,	// (0x000652b6) clock_digital_separator_pane_cp10_g1

0xa033,	// (0x000652b6) clock_digital_separator_pane_g2_cp10

0xad70,	// (0x00065ff3) navi_pane_vded_g4

0xad79,	// (0x00065ffc) navi_pane_vded_g5

0xad82,	// (0x00066005) navi_pane_vded_t1

0x0e6a,	// (0x0005c0ed) main_vded_pane

0x5943,	// (0x00060bc6) main_vded_pane_g1

0x594f,	// (0x00060bd2) main_vded_pane_g2

0x5959,	// (0x00060bdc) main_vded_pane_g3

0x0002,

0xf813,	// (0x0006aa96) main_vded_pane_g

0x5963,	// (0x00060be6) main_vded_pane_t1

0x5971,	// (0x00060bf4) main_vded_pane_t2

0x0001,

0xf81a,	// (0x0006aa9d) main_vded_pane_t

0x597f,	// (0x00060c02) vded_slider_pane

0x5989,	// (0x00060c0c) vded_video_pane

0xcc97,	// (0x00067f1a) vded_video_pane_g1

0x5993,	// (0x00060c16) vded_video_pane_g2

0xc711,	// (0x00067994) vded_video_pane_g3

0x0002,

0xf81f,	// (0x0006aaa2) vded_video_pane_g

0xcca1,	// (0x00067f24) vded_slider_pane_g1

0xc41e,	// (0x000676a1) vded_slider_pane_g2

0xccaa,	// (0x00067f2d) vded_slider_pane_g3

0xccb3,	// (0x00067f36) vded_slider_pane_g4

0xccbc,	// (0x00067f3f) vded_slider_pane_g5

0x0004,

0xf826,	// (0x0006aaa9) vded_slider_pane_g

0x539c,	// (0x0006061f) mup3_rocker_pane_ParamLimits

0x539c,	// (0x0006061f) mup3_rocker_pane

0x599c,	// (0x00060c1f) mup3_control_keys_pane_g1

0x59a4,	// (0x00060c27) mup3_control_keys_pane_g2

0x59ac,	// (0x00060c2f) mup3_control_keys_pane_g3

0x59b4,	// (0x00060c37) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x0006aab4) mup3_control_keys_pane_g

0x10a8,	// (0x0005c32b) popup_toolbar2_fixed_window_cp01_ParamLimits

0x10a8,	// (0x0005c32b) popup_toolbar2_fixed_window_cp01

0x53d0,	// (0x00060653) popup_toolbar2_fixed_window_cp02_ParamLimits

0x53d0,	// (0x00060653) popup_toolbar2_fixed_window_cp02

0xb589,	// (0x0006680c) popup_call2_audio_second_window_t4_ParamLimits

0xb589,	// (0x0006680c) popup_call2_audio_second_window_t4

0xbab7,	// (0x00066d3a) popup_call2_audio_first_window_t6_ParamLimits

0xbab7,	// (0x00066d3a) popup_call2_audio_first_window_t6

0xbd4d,	// (0x00066fd0) popup_call2_audio_out_window_t6_ParamLimits

0xbd4d,	// (0x00066fd0) popup_call2_audio_out_window_t6

0x0e6a,	// (0x0005c0ed) main_vitu_pane

0x59c4,	// (0x00060c47) aid_size_cell_itu_ParamLimits

0x59c4,	// (0x00060c47) aid_size_cell_itu

0x99c1,	// (0x00064c44) bg_popup_window_pane_cp08_ParamLimits

0x99c1,	// (0x00064c44) bg_popup_window_pane_cp08

0x59da,	// (0x00060c5d) field_vitu_entry_pane_ParamLimits

0x59da,	// (0x00060c5d) field_vitu_entry_pane

0x59f1,	// (0x00060c74) grid_vitu_function_pane_ParamLimits

0x59f1,	// (0x00060c74) grid_vitu_function_pane

0x5a0c,	// (0x00060c8f) grid_vitu_itu_pane_ParamLimits

0x5a0c,	// (0x00060c8f) grid_vitu_itu_pane

0x5a2a,	// (0x00060cad) cell_vitu_itu_pane_ParamLimits

0x5a2a,	// (0x00060cad) cell_vitu_itu_pane

0x5a4e,	// (0x00060cd1) cell_vitu_function_pane_ParamLimits

0x5a4e,	// (0x00060cd1) cell_vitu_function_pane

0x99c1,	// (0x00064c44) bg_popup_sub_pane_cp08_ParamLimits

0x99c1,	// (0x00064c44) bg_popup_sub_pane_cp08

0x5a69,	// (0x00060cec) field_vitu_entry_pane_t1_ParamLimits

0x5a69,	// (0x00060cec) field_vitu_entry_pane_t1

0xccdd,	// (0x00067f60) field_vitu_entry_pane_t2_ParamLimits

0xccdd,	// (0x00067f60) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x0006aac2) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x0006aac2) field_vitu_entry_pane_t

0xccfa,	// (0x00067f7d) bg_button_pane_cp05_ParamLimits

0xccfa,	// (0x00067f7d) bg_button_pane_cp05

0x5a89,	// (0x00060d0c) cell_vitu_itu_pane_g1

0x5aa1,	// (0x00060d24) cell_vitu_itu_pane_t1_ParamLimits

0x5aa1,	// (0x00060d24) cell_vitu_itu_pane_t1

0x5ab3,	// (0x00060d36) cell_vitu_itu_pane_t2_ParamLimits

0x5ab3,	// (0x00060d36) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x0006aac7) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x0006aac7) cell_vitu_itu_pane_t

0xcd08,	// (0x00067f8b) bg_button_pane_cp07

0x5ae8,	// (0x00060d6b) cell_vitu_function_pane_g1

0xa106,	// (0x00065389) main_calc_pane_g1

0x0eac,	// (0x0005c12f) aid_visual_content_pane

0x0e6a,	// (0x0005c0ed) main_vradio_pane

0x5af1,	// (0x00060d74) main_vradio_pane_g1_ParamLimits

0x5af1,	// (0x00060d74) main_vradio_pane_g1

0xcd12,	// (0x00067f95) main_vradio_pane_g2_ParamLimits

0xcd12,	// (0x00067f95) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x0006aace) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x0006aace) main_vradio_pane_g

0x5b0a,	// (0x00060d8d) main_vradio_pane_t1_ParamLimits

0x5b0a,	// (0x00060d8d) main_vradio_pane_t1

0x5b1f,	// (0x00060da2) main_vradio_pane_t2_ParamLimits

0x5b1f,	// (0x00060da2) main_vradio_pane_t2

0xcd1f,	// (0x00067fa2) main_vradio_pane_t3_ParamLimits

0xcd1f,	// (0x00067fa2) main_vradio_pane_t3

0x0002,

0xf850,	// (0x0006aad3) main_vradio_pane_t_ParamLimits

0xf850,	// (0x0006aad3) main_vradio_pane_t

0x5b34,	// (0x00060db7) vradio_rocker_control_pane_ParamLimits

0x5b34,	// (0x00060db7) vradio_rocker_control_pane

0x5b46,	// (0x00060dc9) vradio_station_info_pane_ParamLimits

0x5b46,	// (0x00060dc9) vradio_station_info_pane

0xcd33,	// (0x00067fb6) vradio_frequency_info_pane_ParamLimits

0xcd33,	// (0x00067fb6) vradio_frequency_info_pane

0xc711,	// (0x00067994) vradio_station_info_pane_g1

0xcd42,	// (0x00067fc5) vradio_station_info_pane_t1_ParamLimits

0xcd42,	// (0x00067fc5) vradio_station_info_pane_t1

0xcd64,	// (0x00067fe7) vradio_station_info_pane_t2_ParamLimits

0xcd64,	// (0x00067fe7) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x0006aada) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x0006aada) vradio_station_info_pane_t

0xcd76,	// (0x00067ff9) vradio_tuning_pane

0xcd7e,	// (0x00068001) vradio_rocker_control_pane_g1

0xcd86,	// (0x00068009) vradio_rocker_control_pane_g2

0xcd8e,	// (0x00068011) vradio_rocker_control_pane_g3

0xcd96,	// (0x00068019) vradio_rocker_control_pane_g4

0xcd9e,	// (0x00068021) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x0006aadf) vradio_rocker_control_pane_g

0x5b58,	// (0x00060ddb) vradio_frequency_info_pane_g1

0xcda6,	// (0x00068029) vradio_frequency_info_pane_t1_ParamLimits

0xcda6,	// (0x00068029) vradio_frequency_info_pane_t1

0x5b62,	// (0x00060de5) vradio_tuning_pane_g1

0x5b6d,	// (0x00060df0) vradio_tuning_pane_t1

0x0f09,	// (0x0005c18c) area_side_right_pane_ParamLimits

0x0f09,	// (0x0005c18c) area_side_right_pane

0xc1d0,	// (0x00067453) status_small_pane_g1

0xc1d8,	// (0x0006745b) status_small_pane_g2

0xc1e1,	// (0x00067464) status_small_pane_g3

0xc1ea,	// (0x0006746d) status_small_pane_g4

0x0003,

0xf61c,	// (0x0006a89f) status_small_pane_g

0xc1f3,	// (0x00067476) status_small_pane_t1

0x0e6a,	// (0x0005c0ed) main_video3_pane

0xcdba,	// (0x0006803d) cams_zoom_vslider_pane

0xcdc2,	// (0x00068045) image3_wide_pane_ParamLimits

0xcdc2,	// (0x00068045) image3_wide_pane

0xcddc,	// (0x0006805f) image3_wide_small_pane

0xcde8,	// (0x0006806b) main_video3_pane_g1_ParamLimits

0xcde8,	// (0x0006806b) main_video3_pane_g1

0xce04,	// (0x00068087) main_video3_pane_g2_ParamLimits

0xce04,	// (0x00068087) main_video3_pane_g2

0x0001,

0xf867,	// (0x0006aaea) main_video3_pane_g_ParamLimits

0xf867,	// (0x0006aaea) main_video3_pane_g

0xce20,	// (0x000680a3) main_video3_pane_t1_ParamLimits

0xce20,	// (0x000680a3) main_video3_pane_t1

0xce4b,	// (0x000680ce) main_video3_pane_t2_ParamLimits

0xce4b,	// (0x000680ce) main_video3_pane_t2

0xce76,	// (0x000680f9) main_video3_pane_t3_ParamLimits

0xce76,	// (0x000680f9) main_video3_pane_t3

0x0002,

0xf86c,	// (0x0006aaef) main_video3_pane_t_ParamLimits

0xf86c,	// (0x0006aaef) main_video3_pane_t

0xcea3,	// (0x00068126) cams_zoom_vslider_pane_g1

0xceac,	// (0x0006812f) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x0006aaf6) cams_zoom_vslider_pane_g

0xceb4,	// (0x00068137) small_slider_vertical_pane

0xc711,	// (0x00067994) small_slider_vertical_pane_g1

0xc711,	// (0x00067994) small_slider_vertical_pane_g2

0xcebc,	// (0x0006813f) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x0006aafb) small_slider_vertical_pane_g

0x0e6a,	// (0x0005c0ed) main_hwr_training_pane

0xcec5,	// (0x00068148) hwr_training_instruct_pane_ParamLimits

0xcec5,	// (0x00068148) hwr_training_instruct_pane

0x5b7c,	// (0x00060dff) hwr_training_navi_pane_ParamLimits

0x5b7c,	// (0x00060dff) hwr_training_navi_pane

0x5b9b,	// (0x00060e1e) hwr_training_write_pane_ParamLimits

0x5b9b,	// (0x00060e1e) hwr_training_write_pane

0x0e6a,	// (0x0005c0ed) bg_frame_shadow_pane

0xcefc,	// (0x0006817f) hwr_training_write_pane_g1

0xcf04,	// (0x00068187) hwr_training_write_pane_g2

0xcf0c,	// (0x0006818f) hwr_training_write_pane_g3

0xcf14,	// (0x00068197) hwr_training_write_pane_g4

0xcf1c,	// (0x0006819f) hwr_training_write_pane_g5

0xcf24,	// (0x000681a7) hwr_training_write_pane_g6

0xcf2c,	// (0x000681af) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x0006ab02) hwr_training_write_pane_g

0xdb4d,	// (0x00068dd0) hwr_training_navi_pane_g1_ParamLimits

0xdb4d,	// (0x00068dd0) hwr_training_navi_pane_g1

0xdb5f,	// (0x00068de2) hwr_training_navi_pane_g2_ParamLimits

0xdb5f,	// (0x00068de2) hwr_training_navi_pane_g2

0xdb71,	// (0x00068df4) hwr_training_navi_pane_g3_ParamLimits

0xdb71,	// (0x00068df4) hwr_training_navi_pane_g3

0xdb81,	// (0x00068e04) hwr_training_navi_pane_g4_ParamLimits

0xdb81,	// (0x00068e04) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x0006ab11) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x0006ab11) hwr_training_navi_pane_g

0xdb8e,	// (0x00068e11) hwr_training_navi_pane_t1

0x5be5,	// (0x00060e68) list_single_hwr_training_instruct_pane_ParamLimits

0x5be5,	// (0x00060e68) list_single_hwr_training_instruct_pane

0xcf34,	// (0x000681b7) list_single_hwr_training_instruct_pane_t1

0xc651,	// (0x000678d4) bg_frame_shadow_pane_g1

0xcf43,	// (0x000681c6) bg_frame_shadow_pane_g2

0xcf4b,	// (0x000681ce) bg_frame_shadow_pane_g3

0xcf53,	// (0x000681d6) bg_frame_shadow_pane_g4

0xcf5b,	// (0x000681de) bg_frame_shadow_pane_g5

0xcf63,	// (0x000681e6) bg_frame_shadow_pane_g6

0xcf6b,	// (0x000681ee) bg_frame_shadow_pane_g7

0xa26f,	// (0x000654f2) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x0006ab1c) bg_frame_shadow_pane_g

0x0e6a,	// (0x0005c0ed) main_video_tele_dialer_pane

0x5c02,	// (0x00060e85) aid_size_cell_video_keypad_ParamLimits

0x5c02,	// (0x00060e85) aid_size_cell_video_keypad

0x5c1c,	// (0x00060e9f) grid_video_dialer_keypad_pane_ParamLimits

0x5c1c,	// (0x00060e9f) grid_video_dialer_keypad_pane

0x5c68,	// (0x00060eeb) video_down_pane_cp_ParamLimits

0x5c68,	// (0x00060eeb) video_down_pane_cp

0x5c98,	// (0x00060f1b) cell_video_dialer_keypad_pane_ParamLimits

0x5c98,	// (0x00060f1b) cell_video_dialer_keypad_pane

0xcf73,	// (0x000681f6) bg_button_pane_cp08_ParamLimits

0xcf73,	// (0x000681f6) bg_button_pane_cp08

0x5cba,	// (0x00060f3d) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5cba,	// (0x00060f3d) cell_video_dialer_keypad_pane_g1

0x5386,	// (0x00060609) mup3_rocker2_pane_ParamLimits

0x5386,	// (0x00060609) mup3_rocker2_pane

0xc711,	// (0x00067994) mup3_rocker2_pane_g1

0x3ea2,	// (0x0005f125) main_dialer2_pane

0x0e6a,	// (0x0005c0ed) main_mp4_pane

0xdba4,	// (0x00068e27) main_mp4_pane_g1_ParamLimits

0xdba4,	// (0x00068e27) main_mp4_pane_g1

0xdba4,	// (0x00068e27) main_mp4_pane_g2_ParamLimits

0xdba4,	// (0x00068e27) main_mp4_pane_g2

0x5cf5,	// (0x00060f78) main_mp4_pane_g3_ParamLimits

0x5cf5,	// (0x00060f78) main_mp4_pane_g3

0xdbb2,	// (0x00068e35) main_mp4_pane_g4_ParamLimits

0xdbb2,	// (0x00068e35) main_mp4_pane_g4

0xdbda,	// (0x00068e5d) main_mp4_pane_g5_ParamLimits

0xdbda,	// (0x00068e5d) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x0006ab3c) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x0006ab3c) main_mp4_pane_g

0xdc2a,	// (0x00068ead) main_mp4_pane_t1_ParamLimits

0xdc2a,	// (0x00068ead) main_mp4_pane_t1

0xdc86,	// (0x00068f09) main_mp4_pane_t2_ParamLimits

0xdc86,	// (0x00068f09) main_mp4_pane_t2

0xdf7c,	// (0x000691ff) main_mp4_pane_t3_ParamLimits

0xdf7c,	// (0x000691ff) main_mp4_pane_t3

0xdcd8,	// (0x00068f5b) main_mp4_pane_t4_ParamLimits

0xdcd8,	// (0x00068f5b) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x0006ab49) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x0006ab49) main_mp4_pane_t

0xdd1c,	// (0x00068f9f) mp4_progress_pane_ParamLimits

0xdd1c,	// (0x00068f9f) mp4_progress_pane

0xdd66,	// (0x00068fe9) mp4_rocker_pane_ParamLimits

0xdd66,	// (0x00068fe9) mp4_rocker_pane

0xdfa4,	// (0x00069227) mp4_progress_pane_t1

0xdfbd,	// (0x00069240) mp4_progress_pane_t2

0x0001,

0x06de,	// (0x0005b961) mp4_progress_pane_t

0xdfd6,	// (0x00069259) mup_progress_pane_cp04

0xdfe2,	// (0x00069265) mp4_rocker_pane_g1

0x5d31,	// (0x00060fb4) aid_cell_size_keypad2_ParamLimits

0x5d31,	// (0x00060fb4) aid_cell_size_keypad2

0x5d47,	// (0x00060fca) dialer2_ne_pane_ParamLimits

0x5d47,	// (0x00060fca) dialer2_ne_pane

0x5d61,	// (0x00060fe4) grid_dialer2_keypad_pane_ParamLimits

0x5d61,	// (0x00060fe4) grid_dialer2_keypad_pane

0xc4f4,	// (0x00067777) bg_popup_call_pane_cp07_ParamLimits

0xc4f4,	// (0x00067777) bg_popup_call_pane_cp07

0x5d7f,	// (0x00061002) dialer2_ne_pane_t1_ParamLimits

0x5d7f,	// (0x00061002) dialer2_ne_pane_t1

0x5dbe,	// (0x00061041) cell_dialer2_keypad_pane_ParamLimits

0x5dbe,	// (0x00061041) cell_dialer2_keypad_pane

0xdffe,	// (0x00069281) bg_button_pane_pane_cp04_ParamLimits

0xdffe,	// (0x00069281) bg_button_pane_pane_cp04

0x5de2,	// (0x00061065) cell_dialer2_keypad_pane_g1_ParamLimits

0x5de2,	// (0x00061065) cell_dialer2_keypad_pane_g1

0x1d33,	// (0x0005cfb6) aid_placing_vt_set_content_ParamLimits

0x1d33,	// (0x0005cfb6) aid_placing_vt_set_content

0x1d5b,	// (0x0005cfde) aid_placing_vt_set_title_ParamLimits

0x1d5b,	// (0x0005cfde) aid_placing_vt_set_title

0x0e6a,	// (0x0005c0ed) main_image3_pane

0x5ea8,	// (0x0006112b) area_side_right_pane_cp01_ParamLimits

0x5ea8,	// (0x0006112b) area_side_right_pane_cp01

0xdba4,	// (0x00068e27) main_image3_pane_g1_ParamLimits

0xdba4,	// (0x00068e27) main_image3_pane_g1

0x5ebf,	// (0x00061142) main_image3_pane_g2_ParamLimits

0x5ebf,	// (0x00061142) main_image3_pane_g2

0x5ee7,	// (0x0006116a) main_image3_pane_g3_ParamLimits

0x5ee7,	// (0x0006116a) main_image3_pane_g3

0x5f11,	// (0x00061194) main_image3_pane_g4_ParamLimits

0x5f11,	// (0x00061194) main_image3_pane_g4

0x0003,

0xf8d9,	// (0x0006ab5c) main_image3_pane_g_ParamLimits

0xf8d9,	// (0x0006ab5c) main_image3_pane_g

0x5f3b,	// (0x000611be) main_image3_pane_t1_ParamLimits

0x5f3b,	// (0x000611be) main_image3_pane_t1

0x5f93,	// (0x00061216) main_image3_pane_t2_ParamLimits

0x5f93,	// (0x00061216) main_image3_pane_t2

0x5fe5,	// (0x00061268) main_image3_pane_t3_ParamLimits

0x5fe5,	// (0x00061268) main_image3_pane_t3

0x0003,

0xf8e2,	// (0x0006ab65) main_image3_pane_t_ParamLimits

0xf8e2,	// (0x0006ab65) main_image3_pane_t

0x99c1,	// (0x00064c44) grid_sctrl_middle_pane_cp01_ParamLimits

0x99c1,	// (0x00064c44) grid_sctrl_middle_pane_cp01

0x606d,	// (0x000612f0) cell_sctrl_middle_pane_cp01_ParamLimits

0x606d,	// (0x000612f0) cell_sctrl_middle_pane_cp01

0x608a,	// (0x0006130d) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x608a,	// (0x0006130d) cell_sctrl_middle_pane_cp01_g1

0x0e6a,	// (0x0005c0ed) main_call4_pane

0x60a0,	// (0x00061323) aid_size_button_call4_ParamLimits

0x60a0,	// (0x00061323) aid_size_button_call4

0x60d1,	// (0x00061354) call4_windows_pane_ParamLimits

0x60d1,	// (0x00061354) call4_windows_pane

0x60f1,	// (0x00061374) grid_call4_button_pane_ParamLimits

0x60f1,	// (0x00061374) grid_call4_button_pane

0xe00a,	// (0x0006928d) call4_windows_conf_pane

0xe01f,	// (0x000692a2) popup_call4_audio_first_window_ParamLimits

0xe01f,	// (0x000692a2) popup_call4_audio_first_window

0xe06b,	// (0x000692ee) popup_call4_audio_second_window_ParamLimits

0xe06b,	// (0x000692ee) popup_call4_audio_second_window

0xe08d,	// (0x00069310) popup_call4_audio_wait_window_ParamLimits

0xe08d,	// (0x00069310) popup_call4_audio_wait_window

0x611e,	// (0x000613a1) cell_call4_button_pane_ParamLimits

0x611e,	// (0x000613a1) cell_call4_button_pane

0x6147,	// (0x000613ca) bg_button_pane_cp09_ParamLimits

0x6147,	// (0x000613ca) bg_button_pane_cp09

0x6153,	// (0x000613d6) cell_call4_button_pane_g1_ParamLimits

0x6153,	// (0x000613d6) cell_call4_button_pane_g1

0x6179,	// (0x000613fc) cell_call4_button_pane_t1_ParamLimits

0x6179,	// (0x000613fc) cell_call4_button_pane_t1

0xe0d5,	// (0x00069358) popup_call4_audio_conf_window_ParamLimits

0xe0d5,	// (0x00069358) popup_call4_audio_conf_window

0x53e6,	// (0x00060669) mup3_progress_pane_t1_ParamLimits

0x53fd,	// (0x00060680) mup3_progress_pane_t2_ParamLimits

0xc9f3,	// (0x00067c76) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x0006aa43) mup3_progress_pane_t_ParamLimits

0xca0a,	// (0x00067c8d) mup_progress_pane_cp03_ParamLimits

0x59bc,	// (0x00060c3f) mup3_control_keys_pane_g4_copy1

0xdd4a,	// (0x00068fcd) mp4_rocker2_pane_ParamLimits

0xdd4a,	// (0x00068fcd) mp4_rocker2_pane

0xe0e9,	// (0x0006936c) mp4_rocker2_pane_g1

0xe0f1,	// (0x00069374) mp4_rocker2_pane_g2

0xddb8,	// (0x0006903b) mp4_rocker2_pane_g3

0xddc0,	// (0x00069043) mp4_rocker2_pane_g4

0xddc8,	// (0x0006904b) mp4_rocker2_pane_g5

0x0004,

0xf8eb,	// (0x0006ab6e) mp4_rocker2_pane_g

0x0e6a,	// (0x0005c0ed) main_camera4_pane

0x0e6a,	// (0x0005c0ed) main_video4_pane

0x5c36,	// (0x00060eb9) main_video_tele_dialer_pane_t1_ParamLimits

0x5c36,	// (0x00060eb9) main_video_tele_dialer_pane_t1

0x5c4f,	// (0x00060ed2) main_video_tele_dialer_pane_t2_ParamLimits

0x5c4f,	// (0x00060ed2) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x0006ab2d) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x0006ab2d) main_video_tele_dialer_pane_t

0x61bb,	// (0x0006143e) cam4_autofocus_pane_ParamLimits

0x61bb,	// (0x0006143e) cam4_autofocus_pane

0x61d1,	// (0x00061454) cam4_image_uncrop_pane_ParamLimits

0x61d1,	// (0x00061454) cam4_image_uncrop_pane

0x61eb,	// (0x0006146e) cam4_indicators_pane_ParamLimits

0x61eb,	// (0x0006146e) cam4_indicators_pane

0x6216,	// (0x00061499) main_camera4_pane_g1_ParamLimits

0x6216,	// (0x00061499) main_camera4_pane_g1

0x6229,	// (0x000614ac) main_camera4_pane_g2_ParamLimits

0x6229,	// (0x000614ac) main_camera4_pane_g2

0x623c,	// (0x000614bf) main_camera4_pane_g3_ParamLimits

0x623c,	// (0x000614bf) main_camera4_pane_g3

0x624f,	// (0x000614d2) main_camera4_pane_g4_ParamLimits

0x624f,	// (0x000614d2) main_camera4_pane_g4

0x6262,	// (0x000614e5) main_camera4_pane_g5_ParamLimits

0x6262,	// (0x000614e5) main_camera4_pane_g5

0x0005,

0xf8f6,	// (0x0006ab79) main_camera4_pane_g_ParamLimits

0xf8f6,	// (0x0006ab79) main_camera4_pane_g

0x6286,	// (0x00061509) main_camera4_pane_t1_ParamLimits

0x6286,	// (0x00061509) main_camera4_pane_t1

0xddec,	// (0x0006906f) bg_tb_trans_pane_cp06

0xde02,	// (0x00069085) cam4_indicators_pane_g1

0xde13,	// (0x00069096) cam4_indicators_pane_g2

0x0002,

0xf911,	// (0x0006ab94) cam4_indicators_pane_g

0xde31,	// (0x000690b4) cam4_indicators_pane_t1

0x62ea,	// (0x0006156d) main_video4_pane_g1_ParamLimits

0x62ea,	// (0x0006156d) main_video4_pane_g1

0x62fd,	// (0x00061580) main_video4_pane_g2_ParamLimits

0x62fd,	// (0x00061580) main_video4_pane_g2

0x6311,	// (0x00061594) main_video4_pane_g3_ParamLimits

0x6311,	// (0x00061594) main_video4_pane_g3

0x6325,	// (0x000615a8) main_video4_pane_g4_ParamLimits

0x6325,	// (0x000615a8) main_video4_pane_g4

0x0004,

0xf918,	// (0x0006ab9b) main_video4_pane_g_ParamLimits

0xf918,	// (0x0006ab9b) main_video4_pane_g

0x634d,	// (0x000615d0) vid4_indicators_pane_ParamLimits

0x634d,	// (0x000615d0) vid4_indicators_pane

0x637f,	// (0x00061602) video4_image_uncrop_cif_pane_ParamLimits

0x637f,	// (0x00061602) video4_image_uncrop_cif_pane

0x6399,	// (0x0006161c) video4_image_uncrop_nhd_pane_ParamLimits

0x6399,	// (0x0006161c) video4_image_uncrop_nhd_pane

0x61d1,	// (0x00061454) video4_image_uncrop_vga_pane_ParamLimits

0x61d1,	// (0x00061454) video4_image_uncrop_vga_pane

0xde53,	// (0x000690d6) bg_tb_trans_pane_cp07

0x63ad,	// (0x00061630) vid4_indicators_pane_g1

0x63ba,	// (0x0006163d) vid4_indicators_pane_g2

0x63c7,	// (0x0006164a) vid4_indicators_pane_g3

0x0004,

0xf923,	// (0x0006aba6) vid4_indicators_pane_g

0x63ec,	// (0x0006166f) vid4_indicators_pane_t1

0x63fe,	// (0x00061681) cam4_autofocus_pane_g1

0x6406,	// (0x00061689) cam4_autofocus_pane_g2

0x640e,	// (0x00061691) cam4_autofocus_pane_g3

0x0002,

0xf92e,	// (0x0006abb1) cam4_autofocus_pane_g

0x6416,	// (0x00061699) cam4_autofocus_pane_g3_copy1

0x5c7c,	// (0x00060eff) video_down_pane_cp_t1

0x5c8a,	// (0x00060f0d) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x0006ab32) video_down_pane_cp_t

0x99c1,	// (0x00064c44) popup_vitu2_window_ParamLimits

0x99c1,	// (0x00064c44) popup_vitu2_window

0x641e,	// (0x000616a1) aid_size_cell2_itu2_ParamLimits

0x641e,	// (0x000616a1) aid_size_cell2_itu2

0x6444,	// (0x000616c7) aid_size_cell_itu2_ParamLimits

0x6444,	// (0x000616c7) aid_size_cell_itu2

0x64a0,	// (0x00061723) bg_popup_window_pane_cp09_ParamLimits

0x64a0,	// (0x00061723) bg_popup_window_pane_cp09

0x64ae,	// (0x00061731) field_vitu2_entry_pane_ParamLimits

0x64ae,	// (0x00061731) field_vitu2_entry_pane

0x64d4,	// (0x00061757) grid_vitu2_function_pane_ParamLimits

0x64d4,	// (0x00061757) grid_vitu2_function_pane

0x6525,	// (0x000617a8) grid_vitu2_itu_pane_ParamLimits

0x6525,	// (0x000617a8) grid_vitu2_itu_pane

0x65b6,	// (0x00061839) cell_vitu2_itu_pane_ParamLimits

0x65b6,	// (0x00061839) cell_vitu2_itu_pane

0x65da,	// (0x0006185d) cell_vitu2_function_pane_ParamLimits

0x65da,	// (0x0006185d) cell_vitu2_function_pane

0xe0f9,	// (0x0006937c) bg_popup_call_pane_cp08_ParamLimits

0xe0f9,	// (0x0006937c) bg_popup_call_pane_cp08

0xe112,	// (0x00069395) field_vitu2_entry_pane_g1

0xe11e,	// (0x000693a1) field_vitu2_entry_pane_g2

0x0002,

0x0749,	// (0x0005b9cc) field_vitu2_entry_pane_g

0x6619,	// (0x0006189c) field_vitu2_entry_pane_t1_ParamLimits

0x6619,	// (0x0006189c) field_vitu2_entry_pane_t1

0x664b,	// (0x000618ce) field_vitu2_entry_pane_t2_ParamLimits

0x664b,	// (0x000618ce) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0006abb8) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0006abb8) field_vitu2_entry_pane_t

0x6668,	// (0x000618eb) bg_button_pane_cp010_ParamLimits

0x6668,	// (0x000618eb) bg_button_pane_cp010

0x6676,	// (0x000618f9) cell_vitu2_itu_pane_g1

0x6694,	// (0x00061917) cell_vitu2_itu_pane_t1_ParamLimits

0x6694,	// (0x00061917) cell_vitu2_itu_pane_t1

0x0d76,	// (0x0005bff9) cell_vitu2_itu_pane_t2_ParamLimits

0x0d76,	// (0x0005bff9) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0006abc2) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0006abc2) cell_vitu2_itu_pane_t

0xde69,	// (0x000690ec) bg_button_pane_cp011

0x66fa,	// (0x0006197d) cell_vitu2_function_pane_g1

0x0e6a,	// (0x0005c0ed) main_myfav_hc_pane

0x6035,	// (0x000612b8) popup_image3_note_pane_ParamLimits

0x6035,	// (0x000612b8) popup_image3_note_pane

0x6051,	// (0x000612d4) popup_image3_tool_bar_pane_ParamLimits

0x6051,	// (0x000612d4) popup_image3_tool_bar_pane

0x0dfa,	// (0x0005c07d) cell_vitu2_itu_pane_t3_ParamLimits

0x0dfa,	// (0x0005c07d) cell_vitu2_itu_pane_t3

0x0e6a,	// (0x0005c0ed) bg_popup_trans_pane

0xe140,	// (0x000693c3) grid_image3_tool_bar_pane

0xe14a,	// (0x000693cd) bg_popup_trans_pane_g1

0xa68d,	// (0x00065910) bg_popup_trans_pane_g2

0xe152,	// (0x000693d5) bg_popup_trans_pane_g3

0xe15a,	// (0x000693dd) bg_popup_trans_pane_g4

0xe162,	// (0x000693e5) bg_popup_trans_pane_g5

0xe16a,	// (0x000693ed) bg_popup_trans_pane_g6

0xe172,	// (0x000693f5) bg_popup_trans_pane_g7

0xe17a,	// (0x000693fd) bg_popup_trans_pane_g8

0xa66d,	// (0x000658f0) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0006abc9) bg_popup_trans_pane_g

0xe182,	// (0x00069405) cell_image3_tool_bar_pane_ParamLimits

0xe182,	// (0x00069405) cell_image3_tool_bar_pane

0xc711,	// (0x00067994) cell_image3_tool_bar_pane_g1

0x0e6a,	// (0x0005c0ed) bg_popup_trans_pane_cp1

0xe196,	// (0x00069419) popup_image3_note_pane_t1

0xe1a4,	// (0x00069427) popup_image3_note_pane_t2

0xe1b2,	// (0x00069435) popup_image3_note_pane_t3

0x0002,

0x0774,	// (0x0005b9f7) popup_image3_note_pane_t

0xe1c0,	// (0x00069443) popup_image3_note_pane_t3_copy1

0x670e,	// (0x00061991) bg_myfav_hc_instruction_pane_ParamLimits

0x670e,	// (0x00061991) bg_myfav_hc_instruction_pane

0x6724,	// (0x000619a7) cell_myfav_contact_pane_ParamLimits

0x6724,	// (0x000619a7) cell_myfav_contact_pane

0x6740,	// (0x000619c3) cell_myfav_contact_pane_cp1_ParamLimits

0x6740,	// (0x000619c3) cell_myfav_contact_pane_cp1

0x6758,	// (0x000619db) cell_myfav_contact_pane_cp2_ParamLimits

0x6758,	// (0x000619db) cell_myfav_contact_pane_cp2

0x6770,	// (0x000619f3) cell_myfav_contact_pane_cp3_ParamLimits

0x6770,	// (0x000619f3) cell_myfav_contact_pane_cp3

0x6787,	// (0x00061a0a) cell_myfav_contact_pane_cp4_ParamLimits

0x6787,	// (0x00061a0a) cell_myfav_contact_pane_cp4

0x679f,	// (0x00061a22) cell_myfav_contact_pane_cp5_ParamLimits

0x679f,	// (0x00061a22) cell_myfav_contact_pane_cp5

0x67b3,	// (0x00061a36) cell_myfav_contact_pane_cp6_ParamLimits

0x67b3,	// (0x00061a36) cell_myfav_contact_pane_cp6

0x67c9,	// (0x00061a4c) cell_myfav_contact_pane_cp7_ParamLimits

0x67c9,	// (0x00061a4c) cell_myfav_contact_pane_cp7

0xe1ce,	// (0x00069451) listscroll_gen_pane_cp05

0x67e3,	// (0x00061a66) main_myfav_hc_pane_g1_ParamLimits

0x67e3,	// (0x00061a66) main_myfav_hc_pane_g1

0x67fd,	// (0x00061a80) main_myfav_hc_pane_g2_ParamLimits

0x67fd,	// (0x00061a80) main_myfav_hc_pane_g2

0x0002,

0xf959,	// (0x0006abdc) main_myfav_hc_pane_g_ParamLimits

0xf959,	// (0x0006abdc) main_myfav_hc_pane_g

0x682f,	// (0x00061ab2) main_myfav_hc_pane_t1_ParamLimits

0x682f,	// (0x00061ab2) main_myfav_hc_pane_t1

0xe1d7,	// (0x0006945a) main_myfav_hc_pane_t2_ParamLimits

0xe1d7,	// (0x0006945a) main_myfav_hc_pane_t2

0xe1e9,	// (0x0006946c) main_myfav_hc_pane_t3_ParamLimits

0xe1e9,	// (0x0006946c) main_myfav_hc_pane_t3

0x6846,	// (0x00061ac9) main_myfav_hc_pane_t4_ParamLimits

0x6846,	// (0x00061ac9) main_myfav_hc_pane_t4

0x0004,

0xf960,	// (0x0006abe3) main_myfav_hc_pane_t_ParamLimits

0xf960,	// (0x0006abe3) main_myfav_hc_pane_t

0xc711,	// (0x00067994) bg_myfav_hc_instruction_pane_g1

0xe1fb,	// (0x0006947e) cell_myfav_contact_pane_g1_ParamLimits

0xe1fb,	// (0x0006947e) cell_myfav_contact_pane_g1

0xe1fb,	// (0x0006947e) cell_myfav_contact_pane_g2_ParamLimits

0xe1fb,	// (0x0006947e) cell_myfav_contact_pane_g2

0xe207,	// (0x0006948a) cell_myfav_contact_pane_g3_ParamLimits

0xe207,	// (0x0006948a) cell_myfav_contact_pane_g3

0xc9dd,	// (0x00067c60) cell_myfav_contact_pane_g4_ParamLimits

0xc9dd,	// (0x00067c60) cell_myfav_contact_pane_g4

0xe214,	// (0x00069497) cell_myfav_contact_pane_g5_ParamLimits

0xe214,	// (0x00069497) cell_myfav_contact_pane_g5

0x0004,

0xf96b,	// (0x0006abee) cell_myfav_contact_pane_g_ParamLimits

0xf96b,	// (0x0006abee) cell_myfav_contact_pane_g

0x6817,	// (0x00061a9a) main_myfav_hc_pane_g3_ParamLimits

0x6817,	// (0x00061a9a) main_myfav_hc_pane_g3

0x100a,	// (0x0005c28d) popup_adpt_find_window

0x686e,	// (0x00061af1) afind_page_pane_ParamLimits

0x686e,	// (0x00061af1) afind_page_pane

0x6883,	// (0x00061b06) aid_size_cell_afind_ParamLimits

0x6883,	// (0x00061b06) aid_size_cell_afind

0x68a1,	// (0x00061b24) bg_popup_sub_pane_cp09_ParamLimits

0x68a1,	// (0x00061b24) bg_popup_sub_pane_cp09

0x68ae,	// (0x00061b31) find_pane_cp01_ParamLimits

0x68ae,	// (0x00061b31) find_pane_cp01

0xe220,	// (0x000694a3) grid_afind_control_pane_ParamLimits

0xe220,	// (0x000694a3) grid_afind_control_pane

0x68bb,	// (0x00061b3e) grid_afind_pane_ParamLimits

0x68bb,	// (0x00061b3e) grid_afind_pane

0x68dd,	// (0x00061b60) cell_afind_pane_ParamLimits

0x68dd,	// (0x00061b60) cell_afind_pane

0xc711,	// (0x00067994) afind_page_pane_g1

0x693e,	// (0x00061bc1) afind_page_pane_g2

0x6947,	// (0x00061bca) afind_page_pane_g3

0x0002,

0xf976,	// (0x0006abf9) afind_page_pane_g

0x6950,	// (0x00061bd3) afind_page_pane_t1

0xe234,	// (0x000694b7) cell_afind_grid_control_pane_ParamLimits

0xe234,	// (0x000694b7) cell_afind_grid_control_pane

0xdffe,	// (0x00069281) bg_button_pane_cp69_ParamLimits

0xdffe,	// (0x00069281) bg_button_pane_cp69

0x6970,	// (0x00061bf3) cell_afind_pane_g1_ParamLimits

0x6970,	// (0x00061bf3) cell_afind_pane_g1

0x697d,	// (0x00061c00) cell_afind_pane_t1_ParamLimits

0x697d,	// (0x00061c00) cell_afind_pane_t1

0xa488,	// (0x0006570b) bg_button_pane_cp72

0xe243,	// (0x000694c6) cell_afind_grid_control_pane_g1

0x3965,	// (0x0005ebe8) aid_image_placing_area_ParamLimits

0x3965,	// (0x0005ebe8) aid_image_placing_area

0xccc5,	// (0x00067f48) field_vitu_entry_pane_g1_ParamLimits

0xccc5,	// (0x00067f48) field_vitu_entry_pane_g1

0xccd1,	// (0x00067f54) field_vitu_entry_pane_g2_ParamLimits

0xccd1,	// (0x00067f54) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x0006aabd) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x0006aabd) field_vitu_entry_pane_g

0x5a89,	// (0x00060d0c) cell_vitu_itu_pane_g1_ParamLimits

0x5acb,	// (0x00060d4e) cell_vitu_itu_pane_t3_ParamLimits

0x5acb,	// (0x00060d4e) cell_vitu_itu_pane_t3

0xdfa4,	// (0x00069227) mp4_progress_pane_t1_ParamLimits

0xdfbd,	// (0x00069240) mp4_progress_pane_t2_ParamLimits

0x06de,	// (0x0005b961) mp4_progress_pane_t_ParamLimits

0xdfd6,	// (0x00069259) mup_progress_pane_cp04_ParamLimits

0x685a,	// (0x00061add) main_myfav_hc_pane_t5_ParamLimits

0x685a,	// (0x00061add) main_myfav_hc_pane_t5

0x0ec0,	// (0x0005c143) aid_zoom_text_primary

0x100a,	// (0x0005c28d) popup_adpt_find_window_ParamLimits

0x99c1,	// (0x00064c44) main_cam_set_pane

0x6202,	// (0x00061485) cam4_zoom_pane_ParamLimits

0x6202,	// (0x00061485) cam4_zoom_pane

0x698f,	// (0x00061c12) main_cam_set_pane_g1_ParamLimits

0x698f,	// (0x00061c12) main_cam_set_pane_g1

0x699d,	// (0x00061c20) main_cam_set_pane_g2_ParamLimits

0x699d,	// (0x00061c20) main_cam_set_pane_g2

0x0001,

0xf97d,	// (0x0006ac00) main_cam_set_pane_g_ParamLimits

0xf97d,	// (0x0006ac00) main_cam_set_pane_g

0x69be,	// (0x00061c41) main_cam_set_pane_t1_ParamLimits

0x69be,	// (0x00061c41) main_cam_set_pane_t1

0x69d9,	// (0x00061c5c) main_cset_listscroll_pane_ParamLimits

0x69d9,	// (0x00061c5c) main_cset_listscroll_pane

0x69f9,	// (0x00061c7c) main_cset_slider_pane_ParamLimits

0x69f9,	// (0x00061c7c) main_cset_slider_pane

0xe254,	// (0x000694d7) main_cset_list_pane_ParamLimits

0xe254,	// (0x000694d7) main_cset_list_pane

0xe264,	// (0x000694e7) scroll_pane_cp028

0x6a1f,	// (0x00061ca2) aid_area_touch_slider

0x6a3b,	// (0x00061cbe) cset_slider_pane

0x6a65,	// (0x00061ce8) main_cset_slider_pane_g1

0x6a7a,	// (0x00061cfd) main_cset_slider_pane_g2

0x0011,

0xf982,	// (0x0006ac05) main_cset_slider_pane_g

0xe29d,	// (0x00069520) main_cset_slider_pane_t1

0x6b36,	// (0x00061db9) main_cset_slider_pane_t2

0x6b50,	// (0x00061dd3) main_cset_slider_pane_t3

0x6b6a,	// (0x00061ded) main_cset_slider_pane_t4

0x6b84,	// (0x00061e07) main_cset_slider_pane_t5

0x6ba0,	// (0x00061e23) main_cset_slider_pane_t6

0x6bb5,	// (0x00061e38) main_cset_slider_pane_t7

0x000e,

0xf9a7,	// (0x0006ac2a) main_cset_slider_pane_t

0x6cb9,	// (0x00061f3c) cset_list_set_pane_ParamLimits

0x6cb9,	// (0x00061f3c) cset_list_set_pane

0x6ccd,	// (0x00061f50) aid_position_infowindow_above

0x6cd5,	// (0x00061f58) aid_position_infowindow_below

0x6cdd,	// (0x00061f60) cset_list_set_pane_g1_ParamLimits

0x6cdd,	// (0x00061f60) cset_list_set_pane_g1

0x6ce9,	// (0x00061f6c) cset_list_set_pane_g3_ParamLimits

0x6ce9,	// (0x00061f6c) cset_list_set_pane_g3

0x0001,

0xf9c6,	// (0x0006ac49) cset_list_set_pane_g_ParamLimits

0xf9c6,	// (0x0006ac49) cset_list_set_pane_g

0x6cf8,	// (0x00061f7b) cset_list_set_pane_t1_ParamLimits

0x6cf8,	// (0x00061f7b) cset_list_set_pane_t1

0x99c1,	// (0x00064c44) list_highlight_pane_cp021_ParamLimits

0x99c1,	// (0x00064c44) list_highlight_pane_cp021

0xaef6,	// (0x00066179) cset_slider_pane_g1

0xaf08,	// (0x0006618b) cset_slider_pane_g2

0xaeff,	// (0x00066182) cset_slider_pane_g3

0x0002,

0xf9cb,	// (0x0006ac4e) cset_slider_pane_g

0xde77,	// (0x000690fa) aid_area_touch_cam4_zoom

0xde7f,	// (0x00069102) cam4_zoom_cont_pane

0xde87,	// (0x0006910a) cam4_zoom_pane_g1

0xde8f,	// (0x00069112) cam4_zoom_pane_g2

0x6d0d,	// (0x00061f90) cam4_zoom_pane_g3

0x0002,

0xf9d2,	// (0x0006ac55) cam4_zoom_pane_g

0xde97,	// (0x0006911a) cam4_zoom_cont_pane_g1

0xdea0,	// (0x00069123) cam4_zoom_cont_pane_g2

0xdea9,	// (0x0006912c) cam4_zoom_cont_pane_g3

0x0002,

0xf9d9,	// (0x0006ac5c) cam4_zoom_cont_pane_g

0x60be,	// (0x00061341) call4_image_pane_ParamLimits

0x60be,	// (0x00061341) call4_image_pane

0xe00a,	// (0x0006928d) call4_windows_conf_pane_ParamLimits

0xe049,	// (0x000692cc) popup_call4_audio_in_window_ParamLimits

0xe049,	// (0x000692cc) popup_call4_audio_in_window

0x0e6a,	// (0x0005c0ed) bg_popup_call2_act_pane_cp02

0xe0cd,	// (0x00069350) call4_list_conf_pane

0xc711,	// (0x00067994) call4_image_pane_g1

0xc711,	// (0x00067994) call4_image_pane_g2

0x0001,

0xf700,	// (0x0006a983) call4_image_pane_g

0xe33d,	// (0x000695c0) list_single_graphic_popup_conf4_pane_ParamLimits

0xe33d,	// (0x000695c0) list_single_graphic_popup_conf4_pane

0x0e6a,	// (0x0005c0ed) list_highlight_pane_cp022

0xe350,	// (0x000695d3) list_single_graphic_popup_conf4_pane_g1

0xabc7,	// (0x00065e4a) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e0,	// (0x0006ac63) list_single_graphic_popup_conf4_pane_g

0xe358,	// (0x000695db) list_single_graphic_popup_conf4_pane_t1

0x1e7f,	// (0x0005d102) popup_vtel_slider_window_ParamLimits

0x1e7f,	// (0x0005d102) popup_vtel_slider_window

0xdfec,	// (0x0006926f) dialer2_ne_pane_t2_ParamLimits

0xdfec,	// (0x0006926f) dialer2_ne_pane_t2

0x0001,

0xf8cf,	// (0x0006ab52) dialer2_ne_pane_t_ParamLimits

0xf8cf,	// (0x0006ab52) dialer2_ne_pane_t

0xc4f4,	// (0x00067777) bg_popup_sub_pane_cp010_ParamLimits

0xc4f4,	// (0x00067777) bg_popup_sub_pane_cp010

0x6d15,	// (0x00061f98) popup_vtel_slider_window_g1_ParamLimits

0x6d15,	// (0x00061f98) popup_vtel_slider_window_g1

0x6d28,	// (0x00061fab) popup_vtel_slider_window_g2_ParamLimits

0x6d28,	// (0x00061fab) popup_vtel_slider_window_g2

0x0003,

0xf9e5,	// (0x0006ac68) popup_vtel_slider_window_g_ParamLimits

0xf9e5,	// (0x0006ac68) popup_vtel_slider_window_g

0x6d7e,	// (0x00062001) vtel_slider_pane_ParamLimits

0x6d7e,	// (0x00062001) vtel_slider_pane

0x6da0,	// (0x00062023) vtel_slider_pane_g1_ParamLimits

0x6da0,	// (0x00062023) vtel_slider_pane_g1

0x6db4,	// (0x00062037) vtel_slider_pane_g2_ParamLimits

0x6db4,	// (0x00062037) vtel_slider_pane_g2

0x6dcc,	// (0x0006204f) vtel_slider_pane_g3_ParamLimits

0x6dcc,	// (0x0006204f) vtel_slider_pane_g3

0x6da0,	// (0x00062023) vtel_slider_pane_g4_ParamLimits

0x6da0,	// (0x00062023) vtel_slider_pane_g4

0x6de2,	// (0x00062065) vtel_slider_pane_g5_ParamLimits

0x6de2,	// (0x00062065) vtel_slider_pane_g5

0x0004,

0xf9ee,	// (0x0006ac71) vtel_slider_pane_g_ParamLimits

0xf9ee,	// (0x0006ac71) vtel_slider_pane_g

0x0e6a,	// (0x0005c0ed) main_gallery2_pane

0x6470,	// (0x000616f3) aid_size_row_itut2_dropdow_list_ParamLimits

0x6470,	// (0x000616f3) aid_size_row_itut2_dropdow_list

0x64fc,	// (0x0006177f) grid_vitu2_function_top_pane_ParamLimits

0x64fc,	// (0x0006177f) grid_vitu2_function_top_pane

0x6561,	// (0x000617e4) popup_vitu2_dropdown_list_window_ParamLimits

0x6561,	// (0x000617e4) popup_vitu2_dropdown_list_window

0x658a,	// (0x0006180d) popup_vitu2_match_list_window

0x6e06,	// (0x00062089) cell_vitu2_function_top_pane_ParamLimits

0x6e06,	// (0x00062089) cell_vitu2_function_top_pane

0x6e24,	// (0x000620a7) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6e24,	// (0x000620a7) cell_vitu2_function_top_pane_cp01

0x6e42,	// (0x000620c5) cell_vitu2_function_top_wide_pane_ParamLimits

0x6e42,	// (0x000620c5) cell_vitu2_function_top_wide_pane

0xde69,	// (0x000690ec) bg_button_pane_cp012

0x6e60,	// (0x000620e3) cell_vitu2_function_top_pane_g1

0xdeb2,	// (0x00069135) bg_button_pane_cp013_ParamLimits

0xdeb2,	// (0x00069135) bg_button_pane_cp013

0x6e74,	// (0x000620f7) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6e74,	// (0x000620f7) cell_vitu2_function_top_wide_pane_g1

0xde69,	// (0x000690ec) bg_popup_sub_pane_cp20

0x6e8c,	// (0x0006210f) list_vitu2_match_list_pane

0xe14a,	// (0x000693cd) bg_popup_sub_pane_cp20_g1

0xe152,	// (0x000693d5) bg_popup_sub_pane_cp20_g2

0xa68d,	// (0x00065910) bg_popup_sub_pane_cp20_g3

0xe15a,	// (0x000693dd) bg_popup_sub_pane_cp20_g4

0xa66d,	// (0x000658f0) bg_popup_sub_pane_cp20_g5

0xe36e,	// (0x000695f1) bg_popup_sub_pane_cp20_g6

0xe16a,	// (0x000693ed) bg_popup_sub_pane_cp20_g7

0xe172,	// (0x000693f5) bg_popup_sub_pane_cp20_g8

0xe17a,	// (0x000693fd) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f9,	// (0x0006ac7c) bg_popup_sub_pane_cp20_g

0xdece,	// (0x00069151) list_vitu2_match_list_item_pane_ParamLimits

0xdece,	// (0x00069151) list_vitu2_match_list_item_pane

0xdee0,	// (0x00069163) list_vitu2_match_list_item_pane_t1

0xa152,	// (0x000653d5) bg_popup_sub_pane_cp21

0xdeee,	// (0x00069171) grid_vitu2_dropdown_list_pane

0x6ef7,	// (0x0006217a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6ef7,	// (0x0006217a) cell_vitu2_dropdown_list_char_pane

0x6f18,	// (0x0006219b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6f18,	// (0x0006219b) cell_vitu2_dropdown_list_ctrl_pane

0xe376,	// (0x000695f9) cell_vitu2_dropdown_list_char_pane_g1

0xe37f,	// (0x00069602) cell_vitu2_dropdown_list_char_pane_g2

0xe388,	// (0x0006960b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0x0838,	// (0x0005babb) cell_vitu2_dropdown_list_char_pane_g

0x6f44,	// (0x000621c7) cell_vitu2_dropdown_list_char_pane_t1

0x6f52,	// (0x000621d5) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6f52,	// (0x000621d5) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6f62,	// (0x000621e5) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6f62,	// (0x000621e5) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6f73,	// (0x000621f6) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6f73,	// (0x000621f6) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6f83,	// (0x00062206) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6f83,	// (0x00062206) cell_vitu2_dropdown_list_ctrl_pane_g4

0xddec,	// (0x0006906f) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xddec,	// (0x0006906f) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa16,	// (0x0006ac99) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa16,	// (0x0006ac99) cell_vitu2_dropdown_list_ctrl_pane_g

0x6f9f,	// (0x00062222) aid_size_cell_gallery2_ParamLimits

0x6f9f,	// (0x00062222) aid_size_cell_gallery2

0x6fb5,	// (0x00062238) grid_gallery2_pane_ParamLimits

0x6fb5,	// (0x00062238) grid_gallery2_pane

0x6fc9,	// (0x0006224c) scroll_pane_cp029_ParamLimits

0x6fc9,	// (0x0006224c) scroll_pane_cp029

0x6fd5,	// (0x00062258) cell_gallery2_pane_ParamLimits

0x6fd5,	// (0x00062258) cell_gallery2_pane

0xe391,	// (0x00069614) cell_gallery2_pane_g2

0x700b,	// (0x0006228e) cell_gallery2_pane_g3

0xe39b,	// (0x0006961e) cell_gallery2_pane_g4

0xe3a3,	// (0x00069626) cell_gallery2_pane_g5

0xada0,	// (0x00066023) grid_highlight_pane_cp10

0x658a,	// (0x0006180d) popup_vitu2_match_list_window_ParamLimits

0x659f,	// (0x00061822) popup_vitu2_query_window_ParamLimits

0x659f,	// (0x00061822) popup_vitu2_query_window

0xa152,	// (0x000653d5) bg_vitu2_candi_button_pane

0xe376,	// (0x000695f9) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xe37f,	// (0x00069602) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xe388,	// (0x0006960b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7013,	// (0x00062296) bg_button_pane_cp015

0x7027,	// (0x000622aa) bg_button_pane_cp016

0x703a,	// (0x000622bd) bg_button_pane_cp017

0xc209,	// (0x0006748c) bg_popup_sub_pane_cp22

0xe3ab,	// (0x0006962e) popup_vitu2_query_window_g1

0x707f,	// (0x00062302) popup_vitu2_query_window_g2

0x0002,

0xfa21,	// (0x0006aca4) popup_vitu2_query_window_g

0x709e,	// (0x00062321) popup_vitu2_query_window_t1_ParamLimits

0x709e,	// (0x00062321) popup_vitu2_query_window_t1

0x70d3,	// (0x00062356) popup_vitu2_query_window_t2_ParamLimits

0x70d3,	// (0x00062356) popup_vitu2_query_window_t2

0x70e5,	// (0x00062368) popup_vitu2_query_window_t3_ParamLimits

0x70e5,	// (0x00062368) popup_vitu2_query_window_t3

0x710d,	// (0x00062390) popup_vitu2_query_window_t4_ParamLimits

0x710d,	// (0x00062390) popup_vitu2_query_window_t4

0x712e,	// (0x000623b1) popup_vitu2_query_window_t5_ParamLimits

0x712e,	// (0x000623b1) popup_vitu2_query_window_t5

0x0006,

0xfa28,	// (0x0006acab) popup_vitu2_query_window_t_ParamLimits

0xfa28,	// (0x0006acab) popup_vitu2_query_window_t

0xe24c,	// (0x000694cf) main_cset_text_pane

0x6a1f,	// (0x00061ca2) aid_area_touch_slider_ParamLimits

0x6a3b,	// (0x00061cbe) cset_slider_pane_ParamLimits

0x6a65,	// (0x00061ce8) main_cset_slider_pane_g1_ParamLimits

0x6a7a,	// (0x00061cfd) main_cset_slider_pane_g2_ParamLimits

0xe26d,	// (0x000694f0) main_cset_slider_pane_g3_ParamLimits

0xe26d,	// (0x000694f0) main_cset_slider_pane_g3

0x6a8f,	// (0x00061d12) main_cset_slider_pane_g4_ParamLimits

0x6a8f,	// (0x00061d12) main_cset_slider_pane_g4

0x6a9e,	// (0x00061d21) main_cset_slider_pane_g5_ParamLimits

0x6a9e,	// (0x00061d21) main_cset_slider_pane_g5

0x6aaa,	// (0x00061d2d) main_cset_slider_pane_g6_ParamLimits

0x6aaa,	// (0x00061d2d) main_cset_slider_pane_g6

0xf982,	// (0x0006ac05) main_cset_slider_pane_g_ParamLimits

0xe29d,	// (0x00069520) main_cset_slider_pane_t1_ParamLimits

0x6b36,	// (0x00061db9) main_cset_slider_pane_t2_ParamLimits

0x6b50,	// (0x00061dd3) main_cset_slider_pane_t3_ParamLimits

0x6b6a,	// (0x00061ded) main_cset_slider_pane_t4_ParamLimits

0x6b84,	// (0x00061e07) main_cset_slider_pane_t5_ParamLimits

0x6ba0,	// (0x00061e23) main_cset_slider_pane_t6_ParamLimits

0x6bb5,	// (0x00061e38) main_cset_slider_pane_t7_ParamLimits

0x6bdf,	// (0x00061e62) main_cset_slider_pane_t8_ParamLimits

0x6bdf,	// (0x00061e62) main_cset_slider_pane_t8

0x6c07,	// (0x00061e8a) main_cset_slider_pane_t9_ParamLimits

0x6c07,	// (0x00061e8a) main_cset_slider_pane_t9

0x6c2f,	// (0x00061eb2) main_cset_slider_pane_t10_ParamLimits

0x6c2f,	// (0x00061eb2) main_cset_slider_pane_t10

0x6c57,	// (0x00061eda) main_cset_slider_pane_t11_ParamLimits

0x6c57,	// (0x00061eda) main_cset_slider_pane_t11

0x6c7f,	// (0x00061f02) main_cset_slider_pane_t12_ParamLimits

0x6c7f,	// (0x00061f02) main_cset_slider_pane_t12

0x6c9c,	// (0x00061f1f) main_cset_slider_pane_t13_ParamLimits

0x6c9c,	// (0x00061f1f) main_cset_slider_pane_t13

0xf9a7,	// (0x0006ac2a) main_cset_slider_pane_t_ParamLimits

0x0e6a,	// (0x0005c0ed) bg_popup_sub_pane_cp011

0xe3b7,	// (0x0006963a) main_cset_text_pane_g1

0xe3bf,	// (0x00069642) main_cset_text_pane_t1

0xe3cd,	// (0x00069650) main_cset_text_pane_t2

0xe3db,	// (0x0006965e) main_cset_text_pane_t3

0xe3e9,	// (0x0006966c) main_cset_text_pane_t4

0xe3f7,	// (0x0006967a) main_cset_text_pane_t5

0xe405,	// (0x00069688) main_cset_text_pane_t6

0xe413,	// (0x00069696) main_cset_text_pane_t7

0x0006,

0x0860,	// (0x0005bae3) main_cset_text_pane_t

0x0e6a,	// (0x0005c0ed) main_cam4_burst_pane

0x0e6a,	// (0x0005c0ed) main_cam5_pane

0x695e,	// (0x00061be1) bg_button_pane_cp019

0x6967,	// (0x00061bea) bg_button_pane_cp020

0xe279,	// (0x000694fc) main_cset_slider_pane_g7_ParamLimits

0xe279,	// (0x000694fc) main_cset_slider_pane_g7

0xe285,	// (0x00069508) main_cset_slider_pane_g8_ParamLimits

0xe285,	// (0x00069508) main_cset_slider_pane_g8

0x6abe,	// (0x00061d41) main_cset_slider_pane_g9_ParamLimits

0x6abe,	// (0x00061d41) main_cset_slider_pane_g9

0x6aca,	// (0x00061d4d) main_cset_slider_pane_g10_ParamLimits

0x6aca,	// (0x00061d4d) main_cset_slider_pane_g10

0x6ad6,	// (0x00061d59) main_cset_slider_pane_g11_ParamLimits

0x6ad6,	// (0x00061d59) main_cset_slider_pane_g11

0x6ae2,	// (0x00061d65) main_cset_slider_pane_g12_ParamLimits

0x6ae2,	// (0x00061d65) main_cset_slider_pane_g12

0x6aee,	// (0x00061d71) main_cset_slider_pane_g13_ParamLimits

0x6aee,	// (0x00061d71) main_cset_slider_pane_g13

0x6afa,	// (0x00061d7d) main_cset_slider_pane_g14_ParamLimits

0x6afa,	// (0x00061d7d) main_cset_slider_pane_g14

0x6b06,	// (0x00061d89) main_cset_slider_pane_g15_ParamLimits

0x6b06,	// (0x00061d89) main_cset_slider_pane_g15

0xe2cb,	// (0x0006954e) main_cset_slider_pane_t14_ParamLimits

0xe2cb,	// (0x0006954e) main_cset_slider_pane_t14

0xe304,	// (0x00069587) main_cset_slider_pane_t15_ParamLimits

0xe304,	// (0x00069587) main_cset_slider_pane_t15

0x71a5,	// (0x00062428) aid_cam4_burst_size_cell_ParamLimits

0x71a5,	// (0x00062428) aid_cam4_burst_size_cell

0x71c5,	// (0x00062448) grid_cam4_burst_pane_ParamLimits

0x71c5,	// (0x00062448) grid_cam4_burst_pane

0x71fd,	// (0x00062480) linegrid_cam4_burst_pane_ParamLimits

0x71fd,	// (0x00062480) linegrid_cam4_burst_pane

0xe9fd,	// (0x00069c80) scroll_pane_cp30_ParamLimits

0xe9fd,	// (0x00069c80) scroll_pane_cp30

0x7223,	// (0x000624a6) cell_cam4_burst_pane_ParamLimits

0x7223,	// (0x000624a6) cell_cam4_burst_pane

0xe421,	// (0x000696a4) linegrid_cam4_burst_pane_g1_ParamLimits

0xe421,	// (0x000696a4) linegrid_cam4_burst_pane_g1

0x7270,	// (0x000624f3) linegrid_cam4_burst_pane_g2_ParamLimits

0x7270,	// (0x000624f3) linegrid_cam4_burst_pane_g2

0xe42e,	// (0x000696b1) linegrid_cam4_burst_pane_g3_ParamLimits

0xe42e,	// (0x000696b1) linegrid_cam4_burst_pane_g3

0x0002,

0xfa37,	// (0x0006acba) linegrid_cam4_burst_pane_g_ParamLimits

0xfa37,	// (0x0006acba) linegrid_cam4_burst_pane_g

0x7281,	// (0x00062504) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7281,	// (0x00062504) linegrid_cam4_burst_pane_g3_copy1

0xe43b,	// (0x000696be) linegrid_cam4_burst_pane_g4_ParamLimits

0xe43b,	// (0x000696be) linegrid_cam4_burst_pane_g4

0x729b,	// (0x0006251e) linegrid_cam4_burst_pane_g5_ParamLimits

0x729b,	// (0x0006251e) linegrid_cam4_burst_pane_g5

0x72ac,	// (0x0006252f) linegrid_cam4_burst_pane_g6_ParamLimits

0x72ac,	// (0x0006252f) linegrid_cam4_burst_pane_g6

0xe448,	// (0x000696cb) linegrid_cam4_burst_pane_g7_ParamLimits

0xe448,	// (0x000696cb) linegrid_cam4_burst_pane_g7

0x72c3,	// (0x00062546) cell_cam4_burst_pane_g1

0xe461,	// (0x000696e4) main_cam5_pane_t1_ParamLimits

0xe461,	// (0x000696e4) main_cam5_pane_t1

0xe473,	// (0x000696f6) main_cam5_pane_t2_ParamLimits

0xe473,	// (0x000696f6) main_cam5_pane_t2

0xe485,	// (0x00069708) main_cam5_pane_t3_ParamLimits

0xe485,	// (0x00069708) main_cam5_pane_t3

0xe497,	// (0x0006971a) main_cam5_pane_t4_ParamLimits

0xe497,	// (0x0006971a) main_cam5_pane_t4

0xe4ad,	// (0x00069730) main_cam5_pane_t5_ParamLimits

0xe4ad,	// (0x00069730) main_cam5_pane_t5

0xe4bf,	// (0x00069742) main_cam5_pane_t6_ParamLimits

0xe4bf,	// (0x00069742) main_cam5_pane_t6

0xe4d3,	// (0x00069756) main_cam5_pane_t7_ParamLimits

0xe4d3,	// (0x00069756) main_cam5_pane_t7

0xe4e5,	// (0x00069768) main_cam5_pane_t8_ParamLimits

0xe4e5,	// (0x00069768) main_cam5_pane_t8

0xe501,	// (0x00069784) main_cam5_pane_t9_ParamLimits

0xe501,	// (0x00069784) main_cam5_pane_t9

0xe513,	// (0x00069796) main_cam5_pane_t10_ParamLimits

0xe513,	// (0x00069796) main_cam5_pane_t10

0xe525,	// (0x000697a8) main_cam5_pane_t11_ParamLimits

0xe525,	// (0x000697a8) main_cam5_pane_t11

0xe537,	// (0x000697ba) main_cam5_pane_t12_ParamLimits

0xe537,	// (0x000697ba) main_cam5_pane_t12

0xe54c,	// (0x000697cf) main_cam5_pane_t13_ParamLimits

0xe54c,	// (0x000697cf) main_cam5_pane_t13

0x000c,

0x087b,	// (0x0005bafe) main_cam5_pane_t_ParamLimits

0x087b,	// (0x0005bafe) main_cam5_pane_t

0x108c,	// (0x0005c30f) popup_scut_keymap_window_ParamLimits

0x108c,	// (0x0005c30f) popup_scut_keymap_window

0x72d6,	// (0x00062559) aid_size_cell_brow_shortcut

0xada0,	// (0x00066023) bg_popup_window_pane_cp010

0x72e2,	// (0x00062565) grid_scut_pane

0x72ee,	// (0x00062571) cell_scut_pane_ParamLimits

0x72ee,	// (0x00062571) cell_scut_pane

0x7305,	// (0x00062588) cell_scut_pane_g1

0xe569,	// (0x000697ec) cell_scut_pane_t1

0xe578,	// (0x000697fb) cell_scut_pane_t2

0x730e,	// (0x00062591) cell_scut_pane_t3

0x0002,

0xfa43,	// (0x0006acc6) cell_scut_pane_t

0x4fc5,	// (0x00060248) main_mup3_pane_g8_ParamLimits

0x4fc5,	// (0x00060248) main_mup3_pane_g8

0x6488,	// (0x0006170b) area_vitu2_query_pane_ParamLimits

0x6488,	// (0x0006170b) area_vitu2_query_pane

0x704d,	// (0x000622d0) input_focus_pane_cp08

0xe587,	// (0x0006980a) area_vitu2_query_pane_g1

0x731c,	// (0x0006259f) area_vitu2_query_pane_g2

0x0001,

0xfa4a,	// (0x0006accd) area_vitu2_query_pane_g

0x732d,	// (0x000625b0) area_vitu2_query_pane_t1_ParamLimits

0x732d,	// (0x000625b0) area_vitu2_query_pane_t1

0x7341,	// (0x000625c4) area_vitu2_query_pane_t2_ParamLimits

0x7341,	// (0x000625c4) area_vitu2_query_pane_t2

0x7355,	// (0x000625d8) area_vitu2_query_pane_t3_ParamLimits

0x7355,	// (0x000625d8) area_vitu2_query_pane_t3

0x737d,	// (0x00062600) area_vitu2_query_pane_t4_ParamLimits

0x737d,	// (0x00062600) area_vitu2_query_pane_t4

0x73a5,	// (0x00062628) area_vitu2_query_pane_t5_ParamLimits

0x73a5,	// (0x00062628) area_vitu2_query_pane_t5

0x73cd,	// (0x00062650) area_vitu2_query_pane_t6_ParamLimits

0x73cd,	// (0x00062650) area_vitu2_query_pane_t6

0x0006,

0xfa4f,	// (0x0006acd2) area_vitu2_query_pane_t_ParamLimits

0xfa4f,	// (0x0006acd2) area_vitu2_query_pane_t

0x7419,	// (0x0006269c) bg_button_pane_cp018

0x7427,	// (0x000626aa) bg_button_pane_cp021

0x7433,	// (0x000626b6) bg_button_pane_cp022

0x7444,	// (0x000626c7) input_focus_pane_cp09

0x2f21,	// (0x0005e1a4) aid_size_touch_mv_arrow_left

0x2f4a,	// (0x0005e1cd) aid_size_touch_mv_arrow_right

0x6b1e,	// (0x00061da1) main_cset_slider_pane_g16_ParamLimits

0x6b1e,	// (0x00061da1) main_cset_slider_pane_g16

0x6b2a,	// (0x00061dad) main_cset_slider_pane_g17_ParamLimits

0x6b2a,	// (0x00061dad) main_cset_slider_pane_g17

0x72c3,	// (0x00062546) cell_cam4_burst_pane_g1_ParamLimits

0x0e6a,	// (0x0005c0ed) compa_mode_pane

0x6d38,	// (0x00061fbb) popup_vtel_slider_window_g3_ParamLimits

0x6d38,	// (0x00061fbb) popup_vtel_slider_window_g3

0x6d4f,	// (0x00061fd2) popup_vtel_slider_window_g4_ParamLimits

0x6d4f,	// (0x00061fd2) popup_vtel_slider_window_g4

0x6d66,	// (0x00061fe9) popup_vtel_slider_window_t1_ParamLimits

0x6d66,	// (0x00061fe9) popup_vtel_slider_window_t1

0x0e6a,	// (0x0005c0ed) main_cl_pane

0xc231,	// (0x000674b4) popup_imed_adjust2_window_ParamLimits

0xc209,	// (0x0006748c) bg_tb_trans_pane_cp05_ParamLimits

0xcbfa,	// (0x00067e7d) popup_imed_adjust2_window_g1_ParamLimits

0xcc09,	// (0x00067e8c) popup_imed_adjust2_window_g2_ParamLimits

0xcc09,	// (0x00067e8c) popup_imed_adjust2_window_g2

0xcc15,	// (0x00067e98) popup_imed_adjust2_window_g3_ParamLimits

0xcc15,	// (0x00067e98) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x0006aa81) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x0006aa81) popup_imed_adjust2_window_g

0xcc21,	// (0x00067ea4) popup_imed_adjust2_window_t1_ParamLimits

0xcc39,	// (0x00067ebc) slider_imed_adjust_pane_ParamLimits

0xcc4d,	// (0x00067ed0) slider_imed_adjust_pane_g1_ParamLimits

0xcc5d,	// (0x00067ee0) slider_imed_adjust_pane_g2_ParamLimits

0xcc6d,	// (0x00067ef0) slider_imed_adjust_pane_g3_ParamLimits

0xcc7e,	// (0x00067f01) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x0006aa88) slider_imed_adjust_pane_g_ParamLimits

0x61a3,	// (0x00061426) aid_touch_area_cam4_ParamLimits

0x61a3,	// (0x00061426) aid_touch_area_cam4

0xddd0,	// (0x00069053) battery_pane_cp01

0x6273,	// (0x000614f6) main_camera4_pane_g6_ParamLimits

0x6273,	// (0x000614f6) main_camera4_pane_g6

0x629d,	// (0x00061520) main_camera4_pane_t2_ParamLimits

0x629d,	// (0x00061520) main_camera4_pane_t2

0x0001,

0xf903,	// (0x0006ab86) main_camera4_pane_t_ParamLimits

0xf903,	// (0x0006ab86) main_camera4_pane_t

0x62d2,	// (0x00061555) aid_touch_area_vid4_ParamLimits

0x62d2,	// (0x00061555) aid_touch_area_vid4

0x6339,	// (0x000615bc) main_video4_pane_g5_ParamLimits

0x6339,	// (0x000615bc) main_video4_pane_g5

0x6364,	// (0x000615e7) vid4_progress_pane_ParamLimits

0x6364,	// (0x000615e7) vid4_progress_pane

0xe291,	// (0x00069514) main_cset_slider_pane_g18_ParamLimits

0xe291,	// (0x00069514) main_cset_slider_pane_g18

0xe455,	// (0x000696d8) cell_cam4_burst_pane_g2_ParamLimits

0xe455,	// (0x000696d8) cell_cam4_burst_pane_g2

0x0001,

0xfa3e,	// (0x0006acc1) cell_cam4_burst_pane_g_ParamLimits

0xfa3e,	// (0x0006acc1) cell_cam4_burst_pane_g

0xa176,	// (0x000653f9) bg_cl_pane_ParamLimits

0xa176,	// (0x000653f9) bg_cl_pane

0x7455,	// (0x000626d8) cl_header_pane_ParamLimits

0x7455,	// (0x000626d8) cl_header_pane

0x7469,	// (0x000626ec) cl_listscroll_pane_ParamLimits

0x7469,	// (0x000626ec) cl_listscroll_pane

0xe593,	// (0x00069816) bg_cl_pane_g1

0xe59b,	// (0x0006981e) bg_cl_pane_g2

0xe5a3,	// (0x00069826) bg_cl_pane_g3

0xe5ab,	// (0x0006982e) bg_cl_pane_g4

0xe5b3,	// (0x00069836) bg_cl_pane_g5

0xe5bb,	// (0x0006983e) bg_cl_pane_g6

0xe5c3,	// (0x00069846) bg_cl_pane_g7

0xe5cb,	// (0x0006984e) bg_cl_pane_g8

0xe5d3,	// (0x00069856) bg_cl_pane_g9

0x0008,

0x08b1,	// (0x0005bb34) bg_cl_pane_g

0x7479,	// (0x000626fc) aid_height_cl_leading_ParamLimits

0x7479,	// (0x000626fc) aid_height_cl_leading

0x7485,	// (0x00062708) aid_height_cl_text_ParamLimits

0x7485,	// (0x00062708) aid_height_cl_text

0x99c1,	// (0x00064c44) bg_cl_header_pane_ParamLimits

0x99c1,	// (0x00064c44) bg_cl_header_pane

0x74a4,	// (0x00062727) cl_header_pane_g1_ParamLimits

0x74a4,	// (0x00062727) cl_header_pane_g1

0x74ba,	// (0x0006273d) cl_header_pane_t1_ParamLimits

0x74ba,	// (0x0006273d) cl_header_pane_t1

0xe5db,	// (0x0006985e) cl_list_pane

0xe264,	// (0x000694e7) hc_scroll_pane_cp01

0xa66d,	// (0x000658f0) bg_cl_header_pane_g1

0xe14a,	// (0x000693cd) bg_cl_header_pane_g2

0xa68d,	// (0x00065910) bg_cl_header_pane_g3

0xe15a,	// (0x000693dd) bg_cl_header_pane_g4

0xe152,	// (0x000693d5) bg_cl_header_pane_g5

0xe36e,	// (0x000695f1) bg_cl_header_pane_g6

0xe172,	// (0x000693f5) bg_cl_header_pane_g7

0xe17a,	// (0x000693fd) bg_cl_header_pane_g8

0xe16a,	// (0x000693ed) bg_cl_header_pane_g9

0x0008,

0xfa5e,	// (0x0006ace1) bg_cl_header_pane_g

0x74d3,	// (0x00062756) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x74d3,	// (0x00062756) hc_cl_list_double_graphic_heading_pane

0x74e7,	// (0x0006276a) hc_cl_list_single_graphic_pane_ParamLimits

0x74e7,	// (0x0006276a) hc_cl_list_single_graphic_pane

0x7501,	// (0x00062784) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7501,	// (0x00062784) hc_cl_list_single_graphic_pane_g1

0x750d,	// (0x00062790) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x750d,	// (0x00062790) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa71,	// (0x0006acf4) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa71,	// (0x0006acf4) hc_cl_list_single_graphic_pane_g

0x7521,	// (0x000627a4) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7521,	// (0x000627a4) hc_cl_list_single_graphic_pane_t1

0x7501,	// (0x00062784) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7501,	// (0x00062784) hc_cl_list_double_graphic_heading_pane_g1

0x7536,	// (0x000627b9) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7536,	// (0x000627b9) hc_cl_list_double_graphic_heading_pane_g2

0x754a,	// (0x000627cd) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x754a,	// (0x000627cd) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa76,	// (0x0006acf9) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa76,	// (0x0006acf9) hc_cl_list_double_graphic_heading_pane_g

0x755e,	// (0x000627e1) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x755e,	// (0x000627e1) hc_cl_list_double_graphic_heading_pane_t1

0x7573,	// (0x000627f6) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7573,	// (0x000627f6) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa7d,	// (0x0006ad00) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa7d,	// (0x0006ad00) hc_cl_list_double_graphic_heading_pane_t

0xdefe,	// (0x00069181) vid4_progress_pane_g1

0xdf0e,	// (0x00069191) vid4_progress_pane_g2

0xa8dc,	// (0x00065b5f) vid4_progress_pane_g3

0xde13,	// (0x00069096) vid4_progress_pane_g4

0x0004,

0xfa82,	// (0x0006ad05) vid4_progress_pane_g

0xdf1e,	// (0x000691a1) vid4_progress_pane_t1

0xdf33,	// (0x000691b6) vid4_progress_pane_t2

0x0002,

0xfa8d,	// (0x0006ad10) vid4_progress_pane_t

0xdf5e,	// (0x000691e1) wait_bar_pane_cp07

0xc502,	// (0x00067785) blid_firmament_pane_ParamLimits

0xc545,	// (0x000677c8) popup_blid_sat_info2_window_g1

0xc569,	// (0x000677ec) popup_blid_sat_info2_window_t3

0xc577,	// (0x000677fa) popup_blid_sat_info2_window_t4

0xc585,	// (0x00067808) popup_blid_sat_info2_window_t5

0xc593,	// (0x00067816) popup_blid_sat_info2_window_t6

0xc5a3,	// (0x00067826) popup_blid_sat_info2_window_t7

0xc5b1,	// (0x00067834) popup_blid_sat_info2_window_t8

0xc5bf,	// (0x00067842) popup_blid_sat_info2_window_t9

0xc5cd,	// (0x00067850) popup_blid_sat_info2_window_t10

0xc691,	// (0x00067914) aid_firma_cardinal_ParamLimits

0xc6a5,	// (0x00067928) blid_firmament_pane_t1_ParamLimits

0xc6bc,	// (0x0006793f) blid_firmament_pane_t2_ParamLimits

0xc6d3,	// (0x00067956) blid_firmament_pane_t3_ParamLimits

0xc6ea,	// (0x0006796d) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x0006a97a) blid_firmament_pane_t_ParamLimits

0xc701,	// (0x00067984) blid_sat_info_pane_ParamLimits

0x99c1,	// (0x00064c44) main_cam_set_pane_ParamLimits

0x5833,	// (0x00060ab6) aid_size_cell_colour_35_ParamLimits

0x5853,	// (0x00060ad6) aid_size_cell_colour_112_ParamLimits

0x5873,	// (0x00060af6) aid_size_cell_effect_ParamLimits

0xc209,	// (0x0006748c) bg_tb_trans_pane_cp02_ParamLimits

0xa863,	// (0x00065ae6) heading_imed_pane_ParamLimits

0x5893,	// (0x00060b16) listscroll_imed_pane_ParamLimits

0xb833,	// (0x00066ab6) popup_call2_audio_first_window_g5_ParamLimits

0xb833,	// (0x00066ab6) popup_call2_audio_first_window_g5

0x5e4a,	// (0x000610cd) aid_size_touch_image3_arrow_left_ParamLimits

0x5e4a,	// (0x000610cd) aid_size_touch_image3_arrow_left

0x5e76,	// (0x000610f9) aid_size_touch_image3_arrow_right_ParamLimits

0x5e76,	// (0x000610f9) aid_size_touch_image3_arrow_right

0xdf49,	// (0x000691cc) vid4_progress_pane_t3

0x5bb6,	// (0x00060e39) main_hwr_training_symbol_option_pane_ParamLimits

0x5bb6,	// (0x00060e39) main_hwr_training_symbol_option_pane

0xcee7,	// (0x0006816a) popup_hwr_training_preview_window_ParamLimits

0xcee7,	// (0x0006816a) popup_hwr_training_preview_window

0x5bd6,	// (0x00060e59) hwr_training_navi_pane_g5_ParamLimits

0x5bd6,	// (0x00060e59) hwr_training_navi_pane_g5

0xe138,	// (0x000693bb) popup_char_count_window

0xde69,	// (0x000690ec) bg_popup_sub_pane_cp20_ParamLimits

0x6e8c,	// (0x0006210f) list_vitu2_match_list_pane_ParamLimits

0x6e9b,	// (0x0006211e) vitu2_page_scroll_pane_ParamLimits

0x6e9b,	// (0x0006211e) vitu2_page_scroll_pane

0xe5e4,	// (0x00069867) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe5e4,	// (0x00069867) list_single_hwr_training_symbol_option_pane

0xe5f7,	// (0x0006987a) list_single_hwr_training_symbol_option_pane_g1

0xe5ff,	// (0x00069882) list_single_hwr_training_symbol_option_pane_t1

0xe60d,	// (0x00069890) bg_button_pane_cp023

0xe616,	// (0x00069899) bg_button_pane_cp024

0x75d9,	// (0x0006285c) vitu2_page_scroll_pane_g1

0x75e1,	// (0x00062864) vitu2_page_scroll_pane_g2

0x0001,

0xfa94,	// (0x0006ad17) vitu2_page_scroll_pane_g

0x75e9,	// (0x0006286c) vitu2_page_scroll_pane_t1

0xc41e,	// (0x000676a1) popup_char_count_window_g1

0xe649,	// (0x000698cc) popup_char_count_window_g2

0xe652,	// (0x000698d5) popup_char_count_window_g3

0x0002,

0xfa99,	// (0x0006ad1c) popup_char_count_window_g

0xe65b,	// (0x000698de) popup_char_count_window_t1

0x0e6a,	// (0x0005c0ed) main_vded2_pane

0xcbe6,	// (0x00067e69) aid_size_cell_imed_line

0xcbf0,	// (0x00067e73) grid_imed_line_width_pane

0x63d4,	// (0x00061657) vid4_indicators_pane_g4

0xe669,	// (0x000698ec) cell_imed_line_width_pane_ParamLimits

0xe669,	// (0x000698ec) cell_imed_line_width_pane

0xe67d,	// (0x00069900) cell_imed_line_width_pane_g1

0xc4b0,	// (0x00067733) cell_imed_line_width_pane_g2

0x0001,

0xfaa0,	// (0x0006ad23) cell_imed_line_width_pane_g

0x75f8,	// (0x0006287b) main_vded2_pane_g1_ParamLimits

0x75f8,	// (0x0006287b) main_vded2_pane_g1

0x760e,	// (0x00062891) main_vded2_pane_g2_ParamLimits

0x760e,	// (0x00062891) main_vded2_pane_g2

0x0001,

0xfaa5,	// (0x0006ad28) main_vded2_pane_g_ParamLimits

0xfaa5,	// (0x0006ad28) main_vded2_pane_g

0x7620,	// (0x000628a3) vded2_slider_pane_ParamLimits

0x7620,	// (0x000628a3) vded2_slider_pane

0x7630,	// (0x000628b3) aid_size_touch_vded2_end

0x763a,	// (0x000628bd) aid_size_touch_vded2_playhead

0xe686,	// (0x00069909) aid_size_touch_vded2_start

0xe68e,	// (0x00069911) vded2_slider_bg_pane

0xe697,	// (0x0006991a) vded2_slider_pane_g1

0xe6a0,	// (0x00069923) vded2_slider_pane_g2

0x7644,	// (0x000628c7) vded2_slider_pane_g3

0x0002,

0xfaaa,	// (0x0006ad2d) vded2_slider_pane_g

0xe6a8,	// (0x0006992b) vded2_slider_bg_pane_g1

0xe6b1,	// (0x00069934) vded2_slider_bg_pane_g2

0xe6ba,	// (0x0006993d) vded2_slider_bg_pane_g3

0x0002,

0x0917,	// (0x0005bb9a) vded2_slider_bg_pane_g

0x35cb,	// (0x0005e84e) aid_postcard_touch_down_pane_ParamLimits

0x35cb,	// (0x0005e84e) aid_postcard_touch_down_pane

0x35e1,	// (0x0005e864) aid_postcard_touch_up_pane_ParamLimits

0x35e1,	// (0x0005e864) aid_postcard_touch_up_pane

0x0e6a,	// (0x0005c0ed) main_blid2_pane

0xc217,	// (0x0006749a) popup_blid2_search_window

0x0e6a,	// (0x0005c0ed) blid2_gps_pane

0x0e6a,	// (0x0005c0ed) blid2_navig_pane

0x0e6a,	// (0x0005c0ed) blid2_search_pane

0x0e6a,	// (0x0005c0ed) blid2_tripm_pane

0x764f,	// (0x000628d2) blid2_search_pane_g1_ParamLimits

0x764f,	// (0x000628d2) blid2_search_pane_g1

0x7667,	// (0x000628ea) blid2_search_pane_t1_ParamLimits

0x7667,	// (0x000628ea) blid2_search_pane_t1

0x7679,	// (0x000628fc) aid_size_cell_blid2_gps_ParamLimits

0x7679,	// (0x000628fc) aid_size_cell_blid2_gps

0x7691,	// (0x00062914) blid2_gps_pane_g1_ParamLimits

0x7691,	// (0x00062914) blid2_gps_pane_g1

0x76a5,	// (0x00062928) grid_blid2_satellite_pane_ParamLimits

0x76a5,	// (0x00062928) grid_blid2_satellite_pane

0x76bf,	// (0x00062942) blid2_navig_pane_g1_ParamLimits

0x76bf,	// (0x00062942) blid2_navig_pane_g1

0x76cb,	// (0x0006294e) blid2_navig_pane_t1_ParamLimits

0x76cb,	// (0x0006294e) blid2_navig_pane_t1

0x76e6,	// (0x00062969) blid2_navig_pane_t2_ParamLimits

0x76e6,	// (0x00062969) blid2_navig_pane_t2

0x0001,

0xfab1,	// (0x0006ad34) blid2_navig_pane_t_ParamLimits

0xfab1,	// (0x0006ad34) blid2_navig_pane_t

0x7701,	// (0x00062984) blid2_navig_ring_pane_ParamLimits

0x7701,	// (0x00062984) blid2_navig_ring_pane

0x771a,	// (0x0006299d) blid2_speed_pane_ParamLimits

0x771a,	// (0x0006299d) blid2_speed_pane

0x7726,	// (0x000629a9) blid2_tripm_pane_g1_ParamLimits

0x7726,	// (0x000629a9) blid2_tripm_pane_g1

0x7741,	// (0x000629c4) blid2_tripm_pane_g2_ParamLimits

0x7741,	// (0x000629c4) blid2_tripm_pane_g2

0x7755,	// (0x000629d8) blid2_tripm_pane_g3_ParamLimits

0x7755,	// (0x000629d8) blid2_tripm_pane_g3

0x7769,	// (0x000629ec) blid2_tripm_pane_g4_ParamLimits

0x7769,	// (0x000629ec) blid2_tripm_pane_g4

0x777d,	// (0x00062a00) blid2_tripm_pane_g5_ParamLimits

0x777d,	// (0x00062a00) blid2_tripm_pane_g5

0x0005,

0xfab6,	// (0x0006ad39) blid2_tripm_pane_g_ParamLimits

0xfab6,	// (0x0006ad39) blid2_tripm_pane_g

0x77a3,	// (0x00062a26) blid2_tripm_pane_t1_ParamLimits

0x77a3,	// (0x00062a26) blid2_tripm_pane_t1

0x77be,	// (0x00062a41) blid2_tripm_pane_t2_ParamLimits

0x77be,	// (0x00062a41) blid2_tripm_pane_t2

0x77d9,	// (0x00062a5c) blid2_tripm_pane_t3_ParamLimits

0x77d9,	// (0x00062a5c) blid2_tripm_pane_t3

0x0003,

0xfac3,	// (0x0006ad46) blid2_tripm_pane_t_ParamLimits

0xfac3,	// (0x0006ad46) blid2_tripm_pane_t

0x7820,	// (0x00062aa3) cell_blid2_satellite_pane_ParamLimits

0x7820,	// (0x00062aa3) cell_blid2_satellite_pane

0x783e,	// (0x00062ac1) cell_blid2_satellite_pane_g1

0xe6c3,	// (0x00069946) cell_blid2_satellite_pane_t1

0xc711,	// (0x00067994) blid2_speed_pane_g1

0xe6d1,	// (0x00069954) blid2_speed_pane_t1

0xe6df,	// (0x00069962) blid2_speed_pane_t2

0x0001,

0x0939,	// (0x0005bbbc) blid2_speed_pane_t

0xc711,	// (0x00067994) blid2_navig_ring_pane_g1

0x7847,	// (0x00062aca) blid2_navig_ring_pane_g2

0x784f,	// (0x00062ad2) blid2_navig_ring_pane_g3

0x7857,	// (0x00062ada) blid2_navig_ring_pane_g4

0x785f,	// (0x00062ae2) blid2_navig_ring_pane_g5

0x0004,

0xfacc,	// (0x0006ad4f) blid2_navig_ring_pane_g

0x0e6a,	// (0x0005c0ed) bg_popup_window_pane_cp011

0xe6ed,	// (0x00069970) popup_blid2_search_window_g1

0xe6f5,	// (0x00069978) popup_blid2_search_window_t1

0xe703,	// (0x00069986) popup_blid2_search_window_t2

0x0001,

0x0949,	// (0x0005bbcc) popup_blid2_search_window_t

0xa57c,	// (0x000657ff) main_browser_pane_g1

0xa176,	// (0x000653f9) main_browser_pane_ParamLimits

0xde69,	// (0x000690ec) bg_button_pane_cp011_ParamLimits

0x66fa,	// (0x0006197d) cell_vitu2_function_pane_g1_ParamLimits

0xc209,	// (0x0006748c) bg_popup_sub_pane_cp22_ParamLimits

0x704d,	// (0x000622d0) input_focus_pane_cp08_ParamLimits

0x7064,	// (0x000622e7) popup_vitu2_query_button_pane_ParamLimits

0x7064,	// (0x000622e7) popup_vitu2_query_button_pane

0x7075,	// (0x000622f8) popup_vitu2_query_input_button_pane

0xe3ab,	// (0x0006962e) popup_vitu2_query_window_g1_ParamLimits

0x707f,	// (0x00062302) popup_vitu2_query_window_g2_ParamLimits

0xfa21,	// (0x0006aca4) popup_vitu2_query_window_g_ParamLimits

0x0e6a,	// (0x0005c0ed) bg_button_pane_cp026

0x7867,	// (0x00062aea) popup_vitu2_query_input_button_pane_g1

0x0e6a,	// (0x0005c0ed) bg_button_pane_cp025

0xe711,	// (0x00069994) popup_vitu2_query_button_pane_t1

0x4c67,	// (0x0005feea) main_mp3_pane_t6

0x4c75,	// (0x0005fef8) popup_slider_window_cp01

0xddfa,	// (0x0006907d) cam4_battery_pane

0xde61,	// (0x000690e4) cam4_battery_pane_cp02

0xdef6,	// (0x00069179) cam4_battery_pane_cp01

0xdef6,	// (0x00069179) cam4_battery_pane_cp03

0xdfe2,	// (0x00069265) cam4_battery_pane_g1

0xc711,	// (0x00067994) cam4_battery_pane_g2

0x0001,

0xfad7,	// (0x0006ad5a) cam4_battery_pane_g

0xc5db,	// (0x0006785e) popup_blid_sat_info2_window_t11

0x2f21,	// (0x0005e1a4) aid_size_touch_mv_arrow_left_ParamLimits

0x2f4a,	// (0x0005e1cd) aid_size_touch_mv_arrow_right_ParamLimits

0xad00,	// (0x00065f83) navi_pane_g1_ParamLimits

0x2f73,	// (0x0005e1f6) navi_pane_g2_ParamLimits

0x2fa1,	// (0x0005e224) navi_pane_g3_ParamLimits

0xf409,	// (0x0006a68c) navi_pane_g_ParamLimits

0x2ff9,	// (0x0005e27c) navi_pane_mv_t1_ParamLimits

0x589f,	// (0x00060b22) grid_imed_effect_pane_ParamLimits

0x1d7c,	// (0x0005cfff) aid_placing_vt_slider_lsc

0xa4cd,	// (0x00065750) aid_placing_vt_slider_prt

0x99c1,	// (0x00064c44) bg_tb_trans_pane_cp01_ParamLimits

0xc898,	// (0x00067b1b) popup_image_details_window_g1_ParamLimits

0xc8ab,	// (0x00067b2e) popup_image_details_window_g2_ParamLimits

0xc8c0,	// (0x00067b43) popup_image_details_window_g3_ParamLimits

0xc8c0,	// (0x00067b43) popup_image_details_window_g3

0xf73c,	// (0x0006a9bf) popup_image_details_window_g_ParamLimits

0xc8d4,	// (0x00067b57) popup_image_details_window_t1_ParamLimits

0xc8e6,	// (0x00067b69) popup_image_details_window_t2_ParamLimits

0xc8ff,	// (0x00067b82) popup_image_details_window_t3_ParamLimits

0xc913,	// (0x00067b96) popup_image_details_window_t4_ParamLimits

0xc92e,	// (0x00067bb1) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x0006a9c6) popup_image_details_window_t_ParamLimits

0x7491,	// (0x00062714) cl_header_name_pane_ParamLimits

0x7491,	// (0x00062714) cl_header_name_pane

0x786f,	// (0x00062af2) cl_header_name_pane_t1_ParamLimits

0x786f,	// (0x00062af2) cl_header_name_pane_t1

0x7890,	// (0x00062b13) cl_header_name_pane_t2_ParamLimits

0x7890,	// (0x00062b13) cl_header_name_pane_t2

0x78d2,	// (0x00062b55) cl_header_name_pane_t3_ParamLimits

0x78d2,	// (0x00062b55) cl_header_name_pane_t3

0x0002,

0xfadc,	// (0x0006ad5f) cl_header_name_pane_t_ParamLimits

0xfadc,	// (0x0006ad5f) cl_header_name_pane_t

0x2fca,	// (0x0005e24d) navi_pane_mv_g2_ParamLimits

0xe112,	// (0x00069395) field_vitu2_entry_pane_g1_ParamLimits

0xe11e,	// (0x000693a1) field_vitu2_entry_pane_g2_ParamLimits

0xe12a,	// (0x000693ad) field_vitu2_entry_pane_g3_ParamLimits

0xe12a,	// (0x000693ad) field_vitu2_entry_pane_g3

0x0749,	// (0x0005b9cc) field_vitu2_entry_pane_g_ParamLimits

0x6676,	// (0x000618f9) cell_vitu2_itu_pane_g1_ParamLimits

0x6686,	// (0x00061909) cell_vitu2_itu_pane_g2_ParamLimits

0x6686,	// (0x00061909) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0006abbd) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0006abbd) cell_vitu2_itu_pane_g

0xde69,	// (0x000690ec) bg_vkb2_func_pane_cp05_ParamLimits

0xde69,	// (0x000690ec) bg_vkb2_func_pane_cp05

0xde69,	// (0x000690ec) bg_vkb2_func_pane_cp03

0xde69,	// (0x000690ec) bg_vkb2_func_pane_cp04

0xde69,	// (0x000690ec) bg_vkb2_func_pane_cp10_ParamLimits

0xde69,	// (0x000690ec) bg_vkb2_func_pane_cp10

0x7433,	// (0x000626b6) bg_vkb2_func_pane_cp08

0x7419,	// (0x0006269c) bg_vkb2_func_pane_cp06

0x7427,	// (0x000626aa) bg_vkb2_func_pane_cp07

0xe61f,	// (0x000698a2) bg_vkb2_func_pane_cp11_ParamLimits

0xe61f,	// (0x000698a2) bg_vkb2_func_pane_cp11

0xe634,	// (0x000698b7) bg_vkb2_func_pane_cp12_ParamLimits

0xe634,	// (0x000698b7) bg_vkb2_func_pane_cp12

0x0e6a,	// (0x0005c0ed) bg_vkb2_func_pane_cp09

0xe14a,	// (0x000693cd) bg_vkb2_func_pane_g1

0xa68d,	// (0x00065910) bg_vkb2_func_pane_g2

0xe152,	// (0x000693d5) bg_vkb2_func_pane_g3

0xe15a,	// (0x000693dd) bg_vkb2_func_pane_g4

0xe36e,	// (0x000695f1) bg_vkb2_func_pane_g5

0xe172,	// (0x000693f5) bg_vkb2_func_pane_g6

0xe17a,	// (0x000693fd) bg_vkb2_func_pane_g7

0xe16a,	// (0x000693ed) bg_vkb2_func_pane_g8

0xa66d,	// (0x000658f0) bg_vkb2_func_pane_g9

0x0008,

0xfae3,	// (0x0006ad66) bg_vkb2_func_pane_g

0x7791,	// (0x00062a14) blid2_tripm_pane_g6_ParamLimits

0x7791,	// (0x00062a14) blid2_tripm_pane_g6

0xdf9c,	// (0x0006921f) mp4_progress_pane_g1

0x780c,	// (0x00062a8f) blid2_tripm_values_pane_ParamLimits

0x780c,	// (0x00062a8f) blid2_tripm_values_pane

0x7903,	// (0x00062b86) blid2_tripm_values_pane_t1

0x7911,	// (0x00062b94) blid2_tripm_values_pane_t2

0x791f,	// (0x00062ba2) blid2_tripm_values_pane_t3

0x792d,	// (0x00062bb0) blid2_tripm_values_pane_t4

0x793b,	// (0x00062bbe) blid2_tripm_values_pane_t5

0x7949,	// (0x00062bcc) blid2_tripm_values_pane_t6

0x7957,	// (0x00062bda) blid2_tripm_values_pane_t7

0x7965,	// (0x00062be8) blid2_tripm_values_pane_t8

0x7973,	// (0x00062bf6) blid2_tripm_values_pane_t9

0x0008,

0xfaf6,	// (0x0006ad79) blid2_tripm_values_pane_t

0x1dbe,	// (0x0005d041) call_video_pane_t1_ParamLimits

0x1ddc,	// (0x0005d05f) call_video_pane_t2_ParamLimits

0xf292,	// (0x0006a515) call_video_pane_t_ParamLimits

0x34ce,	// (0x0005e751) msg_header_pane_g1_ParamLimits

0xaf3b,	// (0x000661be) msg_header_pane_g2_ParamLimits

0xaf3b,	// (0x000661be) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x0006a72f) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x0006a72f) msg_header_pane_g

0xa176,	// (0x000653f9) main_clock2_pane_ParamLimits

0x55c4,	// (0x00060847) grid_clock2_toolbar_pane_ParamLimits

0x55c4,	// (0x00060847) grid_clock2_toolbar_pane

0x55c4,	// (0x00060847) listscroll_clock2_pane_ParamLimits

0x55c4,	// (0x00060847) listscroll_clock2_pane

0x56a1,	// (0x00060924) main_clock2_pane_t3_ParamLimits

0x56a1,	// (0x00060924) main_clock2_pane_t3

0x56bc,	// (0x0006093f) main_clock2_pane_t4_ParamLimits

0x56bc,	// (0x0006093f) main_clock2_pane_t4

0xe71f,	// (0x000699a2) cell_clock2_toolbar_pane

0xe727,	// (0x000699aa) cell_clock2_toolbar_pane_cp01

0xe727,	// (0x000699aa) cell_clock2_toolbar_pane_cp02

0xe72f,	// (0x000699b2) cell_clock2_toolbar_pane_cp03

0xe737,	// (0x000699ba) list_clock2_pane

0xac53,	// (0x00065ed6) scroll_pane_cp10

0xe73f,	// (0x000699c2) list_single_clock2_pane_ParamLimits

0xe73f,	// (0x000699c2) list_single_clock2_pane

0xada0,	// (0x00066023) list_highlight_pane_cp08

0xe74c,	// (0x000699cf) list_single_clock2_pane_t1

0xe75a,	// (0x000699dd) list_single_clock2_pane_t2

0x0001,

0x0980,	// (0x0005bc03) list_single_clock2_pane_t

0x0e6a,	// (0x0005c0ed) bg_button_pane_cp10

0xe768,	// (0x000699eb) cell_clock2_toolbar_pane_g1

0x3557,	// (0x0005e7da) aid_main_viewer_pane_g1_ParamLimits

0x3557,	// (0x0005e7da) aid_main_viewer_pane_g1

0x3565,	// (0x0005e7e8) aid_main_viewer_pane_g2_ParamLimits

0x3565,	// (0x0005e7e8) aid_main_viewer_pane_g2

0x3573,	// (0x0005e7f6) aid_main_viewer_pane_g3_ParamLimits

0x3573,	// (0x0005e7f6) aid_main_viewer_pane_g3

0x3582,	// (0x0005e805) aid_main_viewer_pane_g4_ParamLimits

0x3582,	// (0x0005e805) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x0006a740) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x0006a740) aid_main_viewer_pane_g

0x3e8e,	// (0x0005f111) main_calc_pane_ParamLimits

0x3ea2,	// (0x0005f125) main_dialer2_pane_ParamLimits

0x0e6a,	// (0x0005c0ed) main_cam6_pane

0x0e6a,	// (0x0005c0ed) main_vid6_pane

0x55d0,	// (0x00060853) listscroll_gen_pane_cp06_ParamLimits

0x55d0,	// (0x00060853) listscroll_gen_pane_cp06

0x56d7,	// (0x0006095a) main_clock2_pane_t5_ParamLimits

0x56d7,	// (0x0006095a) main_clock2_pane_t5

0x5734,	// (0x000609b7) aid_call2_pane_cp10_ParamLimits

0x5746,	// (0x000609c9) aid_call_pane_cp10_ParamLimits

0xacd5,	// (0x00065f58) popup_clock_analogue_window_cp10_g1_ParamLimits

0xacd5,	// (0x00065f58) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5758,	// (0x000609db) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5758,	// (0x000609db) popup_clock_analogue_window_cp10_g4_ParamLimits

0xacd5,	// (0x00065f58) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x0006aa76) popup_clock_analogue_window_cp10_g_ParamLimits

0x576a,	// (0x000609ed) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5df7,	// (0x0006107a) cell_dialer2_keypad_pane_g2_ParamLimits

0x5df7,	// (0x0006107a) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d4,	// (0x0006ab57) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d4,	// (0x0006ab57) cell_dialer2_keypad_pane_g

0x5e13,	// (0x00061096) cell_dialer2_keypad_pane_t1

0x6a11,	// (0x00061c94) main_cset_text2_pane_ParamLimits

0x6a11,	// (0x00061c94) main_cset_text2_pane

0xe587,	// (0x0006980a) area_vitu2_query_pane_g1_ParamLimits

0x731c,	// (0x0006259f) area_vitu2_query_pane_g2_ParamLimits

0xfa4a,	// (0x0006accd) area_vitu2_query_pane_g_ParamLimits

0x73f5,	// (0x00062678) area_vitu2_query_pane_t7_ParamLimits

0x73f5,	// (0x00062678) area_vitu2_query_pane_t7

0x7419,	// (0x0006269c) bg_button_pane_cp018_ParamLimits

0x7427,	// (0x000626aa) bg_button_pane_cp021_ParamLimits

0x7433,	// (0x000626b6) bg_button_pane_cp022_ParamLimits

0x7433,	// (0x000626b6) bg_vkb2_func_pane_cp08_ParamLimits

0x7419,	// (0x0006269c) bg_vkb2_func_pane_cp06_ParamLimits

0x7427,	// (0x000626aa) bg_vkb2_func_pane_cp07_ParamLimits

0x7444,	// (0x000626c7) input_focus_pane_cp09_ParamLimits

0xdf6e,	// (0x000691f1) cam6_autofocus_pane_ParamLimits

0xdf6e,	// (0x000691f1) cam6_autofocus_pane

0x7981,	// (0x00062c04) cam6_image_uncrop_pane_ParamLimits

0x7981,	// (0x00062c04) cam6_image_uncrop_pane

0x7990,	// (0x00062c13) cam6_indi_pane_ParamLimits

0x7990,	// (0x00062c13) cam6_indi_pane

0x79a6,	// (0x00062c29) cam6_mode_pane_ParamLimits

0x79a6,	// (0x00062c29) cam6_mode_pane

0x79b8,	// (0x00062c3b) cam6_timer_pane_ParamLimits

0x79b8,	// (0x00062c3b) cam6_timer_pane

0x79c4,	// (0x00062c47) cam6_zoom_pane_ParamLimits

0x79c4,	// (0x00062c47) cam6_zoom_pane

0x79d0,	// (0x00062c53) cam6_mode_pane_g1_ParamLimits

0x79d0,	// (0x00062c53) cam6_mode_pane_g1

0x79e0,	// (0x00062c63) cam6_mode_pane_g2_ParamLimits

0x79e0,	// (0x00062c63) cam6_mode_pane_g2

0x79f0,	// (0x00062c73) cam6_mode_pane_g3_ParamLimits

0x79f0,	// (0x00062c73) cam6_mode_pane_g3

0x7a00,	// (0x00062c83) cam6_mode_pane_g4_ParamLimits

0x7a00,	// (0x00062c83) cam6_mode_pane_g4

0x0003,

0xfb09,	// (0x0006ad8c) cam6_mode_pane_g_ParamLimits

0xfb09,	// (0x0006ad8c) cam6_mode_pane_g

0xe07f,	// (0x00069302) bg_tb_trans_pane_cp08_ParamLimits

0xe07f,	// (0x00069302) bg_tb_trans_pane_cp08

0xe770,	// (0x000699f3) cam6_battery_pane_ParamLimits

0xe770,	// (0x000699f3) cam6_battery_pane

0xe786,	// (0x00069a09) cam6_indi_pane_g1_ParamLimits

0xe786,	// (0x00069a09) cam6_indi_pane_g1

0xe798,	// (0x00069a1b) cam6_indi_pane_g2_ParamLimits

0xe798,	// (0x00069a1b) cam6_indi_pane_g2

0xe7aa,	// (0x00069a2d) cam6_indi_pane_g3_ParamLimits

0xe7aa,	// (0x00069a2d) cam6_indi_pane_g3

0x0002,

0x098e,	// (0x0005bc11) cam6_indi_pane_g_ParamLimits

0x098e,	// (0x0005bc11) cam6_indi_pane_g

0xe7bc,	// (0x00069a3f) cam6_indi_pane_t1_ParamLimits

0xe7bc,	// (0x00069a3f) cam6_indi_pane_t1

0x7a10,	// (0x00062c93) cam6_autofocus_pane_g1

0x7a18,	// (0x00062c9b) cam6_autofocus_pane_g2

0x7a20,	// (0x00062ca3) cam6_autofocus_pane_g3

0x7a28,	// (0x00062cab) cam6_autofocus_pane_g4

0x0003,

0xfb12,	// (0x0006ad95) cam6_autofocus_pane_g

0xe7e2,	// (0x00069a65) cam6_timer_pane_g1

0xe7ea,	// (0x00069a6d) cam6_timer_pane_t1

0xe7f8,	// (0x00069a7b) cam6_zoom_cont_pane

0xe800,	// (0x00069a83) cam6_zoom_pane_g1

0xe808,	// (0x00069a8b) cam6_zoom_pane_g2

0x7a30,	// (0x00062cb3) cam6_zoom_pane_g3

0x0002,

0xfb1b,	// (0x0006ad9e) cam6_zoom_pane_g

0xc711,	// (0x00067994) cam6_battery_pane_g1

0xc711,	// (0x00067994) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x0006a983) cam6_battery_pane_g

0xe810,	// (0x00069a93) cam6_zoom_cont_pane_g1

0xe819,	// (0x00069a9c) cam6_zoom_cont_pane_g2

0xe822,	// (0x00069aa5) cam6_zoom_cont_pane_g3

0x0002,

0x09a5,	// (0x0005bc28) cam6_zoom_cont_pane_g

0x7a4d,	// (0x00062cd0) cam6_mode_pane_cp_ParamLimits

0x7a4d,	// (0x00062cd0) cam6_mode_pane_cp

0x7a5f,	// (0x00062ce2) cam6_zoom_pane_cp_ParamLimits

0x7a5f,	// (0x00062ce2) cam6_zoom_pane_cp

0x7a6b,	// (0x00062cee) vid6_image_uncrop_cif_pane_ParamLimits

0x7a6b,	// (0x00062cee) vid6_image_uncrop_cif_pane

0x7a7b,	// (0x00062cfe) vid6_image_uncrop_nhd_pane_ParamLimits

0x7a7b,	// (0x00062cfe) vid6_image_uncrop_nhd_pane

0x7a8a,	// (0x00062d0d) vid6_image_uncrop_vga_pane_ParamLimits

0x7a8a,	// (0x00062d0d) vid6_image_uncrop_vga_pane

0x7a99,	// (0x00062d1c) vid6_image_uncrop_wvga_pane_ParamLimits

0x7a99,	// (0x00062d1c) vid6_image_uncrop_wvga_pane

0x7aa8,	// (0x00062d2b) vid6_indi_pane_ParamLimits

0x7aa8,	// (0x00062d2b) vid6_indi_pane

0xe07f,	// (0x00069302) bg_tb_trans_pane_cp09_ParamLimits

0xe07f,	// (0x00069302) bg_tb_trans_pane_cp09

0xe83a,	// (0x00069abd) cam6_battery_pane_cp_ParamLimits

0xe83a,	// (0x00069abd) cam6_battery_pane_cp

0xe846,	// (0x00069ac9) vid6_indi_pane_g1_ParamLimits

0xe846,	// (0x00069ac9) vid6_indi_pane_g1

0xe858,	// (0x00069adb) vid6_indi_pane_g2_ParamLimits

0xe858,	// (0x00069adb) vid6_indi_pane_g2

0xe86a,	// (0x00069aed) vid6_indi_pane_g3_ParamLimits

0xe86a,	// (0x00069aed) vid6_indi_pane_g3

0xe87f,	// (0x00069b02) vid6_indi_pane_g4_ParamLimits

0xe87f,	// (0x00069b02) vid6_indi_pane_g4

0xe894,	// (0x00069b17) vid6_indi_pane_g5_ParamLimits

0xe894,	// (0x00069b17) vid6_indi_pane_g5

0x0004,

0x09ac,	// (0x0005bc2f) vid6_indi_pane_g_ParamLimits

0x09ac,	// (0x0005bc2f) vid6_indi_pane_g

0xe8ae,	// (0x00069b31) vid6_indi_pane_t1_ParamLimits

0xe8ae,	// (0x00069b31) vid6_indi_pane_t1

0xe8c4,	// (0x00069b47) vid6_indi_pane_t2_ParamLimits

0xe8c4,	// (0x00069b47) vid6_indi_pane_t2

0xe8ec,	// (0x00069b6f) vid6_indi_pane_t3_ParamLimits

0xe8ec,	// (0x00069b6f) vid6_indi_pane_t3

0xe914,	// (0x00069b97) vid6_indi_pane_t4_ParamLimits

0xe914,	// (0x00069b97) vid6_indi_pane_t4

0x0003,

0x09b7,	// (0x0005bc3a) vid6_indi_pane_t_ParamLimits

0x09b7,	// (0x0005bc3a) vid6_indi_pane_t

0xe938,	// (0x00069bbb) wait_bar_pane_cp08

0x7ac0,	// (0x00062d43) main_cset_text2_pane_t1_ParamLimits

0x7ac0,	// (0x00062d43) main_cset_text2_pane_t1

0x7a38,	// (0x00062cbb) listscroll_gen_pane_cp06_t1_ParamLimits

0x7a38,	// (0x00062cbb) listscroll_gen_pane_cp06_t1

0x0e6a,	// (0x0005c0ed) main_cam6_set_pane

0xddec,	// (0x0006906f) bg_tb_trans_pane_cp06_ParamLimits

0xde02,	// (0x00069085) cam4_indicators_pane_g1_ParamLimits

0xde13,	// (0x00069096) cam4_indicators_pane_g2_ParamLimits

0xf911,	// (0x0006ab94) cam4_indicators_pane_g_ParamLimits

0xde31,	// (0x000690b4) cam4_indicators_pane_t1_ParamLimits

0xde53,	// (0x000690d6) bg_tb_trans_pane_cp07_ParamLimits

0x63ad,	// (0x00061630) vid4_indicators_pane_g1_ParamLimits

0x63ba,	// (0x0006163d) vid4_indicators_pane_g2_ParamLimits

0x63c7,	// (0x0006164a) vid4_indicators_pane_g3_ParamLimits

0x63d4,	// (0x00061657) vid4_indicators_pane_g4_ParamLimits

0xf923,	// (0x0006aba6) vid4_indicators_pane_g_ParamLimits

0x63ec,	// (0x0006166f) vid4_indicators_pane_t1_ParamLimits

0xdefe,	// (0x00069181) vid4_progress_pane_g1_ParamLimits

0xdf0e,	// (0x00069191) vid4_progress_pane_g2_ParamLimits

0xa8dc,	// (0x00065b5f) vid4_progress_pane_g3_ParamLimits

0xde13,	// (0x00069096) vid4_progress_pane_g4_ParamLimits

0xfa82,	// (0x0006ad05) vid4_progress_pane_g_ParamLimits

0xdf1e,	// (0x000691a1) vid4_progress_pane_t1_ParamLimits

0xdf33,	// (0x000691b6) vid4_progress_pane_t2_ParamLimits

0xdf49,	// (0x000691cc) vid4_progress_pane_t3_ParamLimits

0xfa8d,	// (0x0006ad10) vid4_progress_pane_t_ParamLimits

0xdf5e,	// (0x000691e1) wait_bar_pane_cp07_ParamLimits

0x7ae0,	// (0x00062d63) main_cam6_set_pane_g2_ParamLimits

0x7ae0,	// (0x00062d63) main_cam6_set_pane_g2

0x7b04,	// (0x00062d87) main_cset6_listscroll_pane_ParamLimits

0x7b04,	// (0x00062d87) main_cset6_listscroll_pane

0x7b20,	// (0x00062da3) main_cset6_slider_pane_ParamLimits

0x7b20,	// (0x00062da3) main_cset6_slider_pane

0x7b36,	// (0x00062db9) main_cset6_text2_pane_ParamLimits

0x7b36,	// (0x00062db9) main_cset6_text2_pane

0xe947,	// (0x00069bca) main_cset6_text_pane

0xe94f,	// (0x00069bd2) main_cset_list_pane_copy1_ParamLimits

0xe94f,	// (0x00069bd2) main_cset_list_pane_copy1

0xe95f,	// (0x00069be2) scroll_pane_cp028_copy1

0x7b44,	// (0x00062dc7) cset_list_set_pane_copy1

0x7b57,	// (0x00062dda) aid_position_infowindow_above_copy1

0x7b5f,	// (0x00062de2) aid_position_infowindow_below_copy1

0x7b67,	// (0x00062dea) cset_list_set_pane_g1_copy1

0x7b6f,	// (0x00062df2) cset_list_set_pane_g3_copy1_ParamLimits

0x7b6f,	// (0x00062df2) cset_list_set_pane_g3_copy1

0x6cf8,	// (0x00061f7b) cset_list_set_pane_t1_copy1_ParamLimits

0x6cf8,	// (0x00061f7b) cset_list_set_pane_t1_copy1

0x99c1,	// (0x00064c44) list_highlight_pane_cp021_copy1_ParamLimits

0x99c1,	// (0x00064c44) list_highlight_pane_cp021_copy1

0xe968,	// (0x00069beb) cset6_slider_pane_ParamLimits

0xe968,	// (0x00069beb) cset6_slider_pane

0xe994,	// (0x00069c17) main_cset6_slider_pane_g1_ParamLimits

0xe994,	// (0x00069c17) main_cset6_slider_pane_g1

0x7b7e,	// (0x00062e01) main_cset6_slider_pane_g2_ParamLimits

0x7b7e,	// (0x00062e01) main_cset6_slider_pane_g2

0xe279,	// (0x000694fc) main_cset6_slider_pane_g3_ParamLimits

0xe279,	// (0x000694fc) main_cset6_slider_pane_g3

0x6ad6,	// (0x00061d59) main_cset6_slider_pane_g4_ParamLimits

0x6ad6,	// (0x00061d59) main_cset6_slider_pane_g4

0x6b1e,	// (0x00061da1) main_cset6_slider_pane_g5_ParamLimits

0x6b1e,	// (0x00061da1) main_cset6_slider_pane_g5

0xe279,	// (0x000694fc) main_cset6_slider_pane_g7_ParamLimits

0xe279,	// (0x000694fc) main_cset6_slider_pane_g7

0xe285,	// (0x00069508) main_cset6_slider_pane_g8_ParamLimits

0xe285,	// (0x00069508) main_cset6_slider_pane_g8

0x6abe,	// (0x00061d41) main_cset6_slider_pane_g9_ParamLimits

0x6abe,	// (0x00061d41) main_cset6_slider_pane_g9

0x6aca,	// (0x00061d4d) main_cset6_slider_pane_g10_ParamLimits

0x6aca,	// (0x00061d4d) main_cset6_slider_pane_g10

0x6ad6,	// (0x00061d59) main_cset6_slider_pane_g11_ParamLimits

0x6ad6,	// (0x00061d59) main_cset6_slider_pane_g11

0x6ae2,	// (0x00061d65) main_cset6_slider_pane_g12_ParamLimits

0x6ae2,	// (0x00061d65) main_cset6_slider_pane_g12

0x6aee,	// (0x00061d71) main_cset6_slider_pane_g13_ParamLimits

0x6aee,	// (0x00061d71) main_cset6_slider_pane_g13

0x6afa,	// (0x00061d7d) main_cset6_slider_pane_g14_ParamLimits

0x6afa,	// (0x00061d7d) main_cset6_slider_pane_g14

0x7ba6,	// (0x00062e29) main_cset6_slider_pane_g15_ParamLimits

0x7ba6,	// (0x00062e29) main_cset6_slider_pane_g15

0x6b1e,	// (0x00061da1) main_cset6_slider_pane_g16_ParamLimits

0x6b1e,	// (0x00061da1) main_cset6_slider_pane_g16

0x6b2a,	// (0x00061dad) main_cset6_slider_pane_g17_ParamLimits

0x6b2a,	// (0x00061dad) main_cset6_slider_pane_g17

0x0011,

0xfb22,	// (0x0006ada5) main_cset6_slider_pane_g_ParamLimits

0xfb22,	// (0x0006ada5) main_cset6_slider_pane_g

0xe9bc,	// (0x00069c3f) main_cset6_slider_pane_t1_ParamLimits

0xe9bc,	// (0x00069c3f) main_cset6_slider_pane_t1

0x7bbe,	// (0x00062e41) main_cset6_slider_pane_t2_ParamLimits

0x7bbe,	// (0x00062e41) main_cset6_slider_pane_t2

0x7be9,	// (0x00062e6c) main_cset6_slider_pane_t3_ParamLimits

0x7be9,	// (0x00062e6c) main_cset6_slider_pane_t3

0x7c14,	// (0x00062e97) main_cset6_slider_pane_t4_ParamLimits

0x7c14,	// (0x00062e97) main_cset6_slider_pane_t4

0x7c3f,	// (0x00062ec2) main_cset6_slider_pane_t5_ParamLimits

0x7c3f,	// (0x00062ec2) main_cset6_slider_pane_t5

0xea09,	// (0x00069c8c) main_cset6_slider_pane_t7_ParamLimits

0xea09,	// (0x00069c8c) main_cset6_slider_pane_t7

0x7c6a,	// (0x00062eed) main_cset6_slider_pane_t8_ParamLimits

0x7c6a,	// (0x00062eed) main_cset6_slider_pane_t8

0x7c8e,	// (0x00062f11) main_cset6_slider_pane_t9_ParamLimits

0x7c8e,	// (0x00062f11) main_cset6_slider_pane_t9

0x7cb2,	// (0x00062f35) main_cset6_slider_pane_t10_ParamLimits

0x7cb2,	// (0x00062f35) main_cset6_slider_pane_t10

0x7cd6,	// (0x00062f59) main_cset6_slider_pane_t11_ParamLimits

0x7cd6,	// (0x00062f59) main_cset6_slider_pane_t11

0xea3f,	// (0x00069cc2) main_cset6_slider_pane_t14_ParamLimits

0xea3f,	// (0x00069cc2) main_cset6_slider_pane_t14

0xea78,	// (0x00069cfb) main_cset6_slider_pane_t15_ParamLimits

0xea78,	// (0x00069cfb) main_cset6_slider_pane_t15

0x000b,

0xfb47,	// (0x0006adca) main_cset6_slider_pane_t_ParamLimits

0xfb47,	// (0x0006adca) main_cset6_slider_pane_t

0xeab1,	// (0x00069d34) cset_slider_pane_g1_copy1

0xeaba,	// (0x00069d3d) cset_slider_pane_g2_copy1

0xeac3,	// (0x00069d46) cset_slider_pane_g3_copy1

0x0e6a,	// (0x0005c0ed) bg_popup_sub_pane_cp011_copy1

0xe3b7,	// (0x0006963a) main_cset_text_pane_g1_copy1

0xe3bf,	// (0x00069642) main_cset_text_pane_t1_copy1

0xe3cd,	// (0x00069650) main_cset_text_pane_t2_copy1

0xe3db,	// (0x0006965e) main_cset_text_pane_t3_copy1

0xe3e9,	// (0x0006966c) main_cset_text_pane_t4_copy1

0xe3f7,	// (0x0006967a) main_cset_text_pane_t5_copy1

0xe405,	// (0x00069688) main_cset_text_pane_t6_copy1

0xe413,	// (0x00069696) main_cset_text_pane_t7_copy1

0x7ac0,	// (0x00062d43) main_cset_text2_pane_t1_copy1

0x0e6a,	// (0x0005c0ed) main_ncimui_pane

0x40d8,	// (0x0005f35b) popup_query_ncimui_window_ParamLimits

0x40d8,	// (0x0005f35b) popup_query_ncimui_window

0x4def,	// (0x00060072) field_cale_ev2_pane_g4_ParamLimits

0x4def,	// (0x00060072) field_cale_ev2_pane_g4

0x5ccf,	// (0x00060f52) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5ccf,	// (0x00060f52) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x0006ab37) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x0006ab37) cell_video_dialer_keypad_pane_g

0x5ce7,	// (0x00060f6a) cell_video_dialer_keypad_pane_t1

0x0e6a,	// (0x0005c0ed) bg_popup_window_pane_cp012

0xab23,	// (0x00065da6) heading_pane_cp06

0xeaea,	// (0x00069d6d) ncim_query_content_pane

0x0e6a,	// (0x0005c0ed) bg_popup_heading_pane_cp01

0xeaf2,	// (0x00069d75) ncim_heading_pane_t1

0xeb00,	// (0x00069d83) ncim_indicator_popup_pane

0xeb12,	// (0x00069d95) ncim_query_button_pane

0xeb26,	// (0x00069da9) ncim_query_content_pane_t1

0xeb38,	// (0x00069dbb) ncim_query_content_pane_t2

0x0005,

0xfb86,	// (0x0006ae09) ncim_query_content_pane_t

0xeb72,	// (0x00069df5) ncim_query_list_pane

0xeb84,	// (0x00069e07) ncim_query_popup_pane

0xeb00,	// (0x00069d83) ncim_indicator_popup_pane_ParamLimits

0x7ec4,	// (0x00063147) ncim_query_content_pane_g1_ParamLimits

0x7ec4,	// (0x00063147) ncim_query_content_pane_g1

0xeb26,	// (0x00069da9) ncim_query_content_pane_t1_ParamLimits

0xeb38,	// (0x00069dbb) ncim_query_content_pane_t2_ParamLimits

0x7ed0,	// (0x00063153) ncim_query_content_pane_t3_ParamLimits

0x7ed0,	// (0x00063153) ncim_query_content_pane_t3

0x7ef8,	// (0x0006317b) ncim_query_content_pane_t4_ParamLimits

0x7ef8,	// (0x0006317b) ncim_query_content_pane_t4

0x7f20,	// (0x000631a3) ncim_query_content_pane_t5_ParamLimits

0x7f20,	// (0x000631a3) ncim_query_content_pane_t5

0xeb4a,	// (0x00069dcd) ncim_query_content_pane_t6_ParamLimits

0xeb4a,	// (0x00069dcd) ncim_query_content_pane_t6

0xfb86,	// (0x0006ae09) ncim_query_content_pane_t_ParamLimits

0xeb72,	// (0x00069df5) ncim_query_list_pane_ParamLimits

0xeb84,	// (0x00069e07) ncim_query_popup_pane_ParamLimits

0xeb98,	// (0x00069e1b) wait_bar_pane_cp04

0x0e6a,	// (0x0005c0ed) input_focus_pane_cp011

0xeba0,	// (0x00069e23) ncim_query_popup_pane_t1

0xebae,	// (0x00069e31) ncim_list_query_list_pane_ParamLimits

0xebae,	// (0x00069e31) ncim_list_query_list_pane

0x0e6a,	// (0x0005c0ed) bg_button_pane_cp027

0xebc1,	// (0x00069e44) ncim_query_button_pane_g1

0x0e6a,	// (0x0005c0ed) list_highlight_pane_cp012

0xebcb,	// (0x00069e4e) ncim_list_query_list_pane_g1

0xebd3,	// (0x00069e56) ncim_list_query_list_pane_t1

0xde22,	// (0x000690a5) cam4_indicators_pane_g3_ParamLimits

0xde22,	// (0x000690a5) cam4_indicators_pane_g3

0x63e0,	// (0x00061663) vid4_indicators_pane_g5_ParamLimits

0x63e0,	// (0x00061663) vid4_indicators_pane_g5

0xde22,	// (0x000690a5) vid4_progress_pane_g5_ParamLimits

0xde22,	// (0x000690a5) vid4_progress_pane_g5

0x7ddd,	// (0x00063060) main_ncimui_pane_g1

0x7e33,	// (0x000630b6) ncimui_group_query_pane_ParamLimits

0x7e33,	// (0x000630b6) ncimui_group_query_pane

0x7e6f,	// (0x000630f2) ncimui_list_pane_ParamLimits

0x7e6f,	// (0x000630f2) ncimui_list_pane

0x7e90,	// (0x00063113) ncimui_text_pane_ParamLimits

0x7e90,	// (0x00063113) ncimui_text_pane

0x7f48,	// (0x000631cb) ncimui_text_pane_t1_ParamLimits

0x7f48,	// (0x000631cb) ncimui_text_pane_t1

0xebe1,	// (0x00069e64) ncimui_list_single_graphic_pane_ParamLimits

0xebe1,	// (0x00069e64) ncimui_list_single_graphic_pane

0x7f66,	// (0x000631e9) ncimui_query_pane_ParamLimits

0x7f66,	// (0x000631e9) ncimui_query_pane

0x0e6a,	// (0x0005c0ed) list_highlight_pane_cp013

0xebf1,	// (0x00069e74) ncim_list_query_list_pane_t1_copy1

0xebcb,	// (0x00069e4e) ncim_list_single_graphic_pane_g1

0xebff,	// (0x00069e82) ncim_query_button_pane_cp01

0xec0b,	// (0x00069e8e) ncim_query_entry_pane_ParamLimits

0xec0b,	// (0x00069e8e) ncim_query_entry_pane

0xec1e,	// (0x00069ea1) ncimui_query_pane_g1

0xec2a,	// (0x00069ead) ncimui_query_pane_t1_ParamLimits

0xec2a,	// (0x00069ead) ncimui_query_pane_t1

0x99c1,	// (0x00064c44) input_focus_pane_cp012

0xec43,	// (0x00069ec6) ncim_query_entry_pane_t1

0xa176,	// (0x000653f9) main_im_pane_ParamLimits

0x99c1,	// (0x00064c44) main_mobtv_pane_ParamLimits

0x99c1,	// (0x00064c44) main_mobtv_pane

0x6abe,	// (0x00061d41) main_cset6_slider_pane_g18_ParamLimits

0x6abe,	// (0x00061d41) main_cset6_slider_pane_g18

0x6aee,	// (0x00061d71) main_cset6_slider_pane_g19_ParamLimits

0x6aee,	// (0x00061d71) main_cset6_slider_pane_g19

0x7f79,	// (0x000631fc) bg_main_mobtv_pane_ParamLimits

0x7f79,	// (0x000631fc) bg_main_mobtv_pane

0x7f87,	// (0x0006320a) main_mobtv_info_pane

0x7f90,	// (0x00063213) main_mobtv_loading_pane_ParamLimits

0x7f90,	// (0x00063213) main_mobtv_loading_pane

0xec55,	// (0x00069ed8) main_mobtv_pg_channel_list_pane

0xec5f,	// (0x00069ee2) main_mobtv_pg_hdr_pane

0x7f9d,	// (0x00063220) main_mobtv_programe_curr_pane_ParamLimits

0x7f9d,	// (0x00063220) main_mobtv_programe_curr_pane

0x7faa,	// (0x0006322d) main_mobtv_programe_next_pane_ParamLimits

0x7faa,	// (0x0006322d) main_mobtv_programe_next_pane

0xec68,	// (0x00069eeb) popup_mobtv_noti_window

0xc711,	// (0x00067994) main_tv_pg_hdr_pane_g1

0xec70,	// (0x00069ef3) main_tv_pg_hdr_pane_g2

0xec78,	// (0x00069efb) main_tv_pg_hdr_pane_g3

0xec80,	// (0x00069f03) main_tv_pg_hdr_pane_g4

0xec88,	// (0x00069f0b) main_tv_pg_hdr_pane_g5

0xec92,	// (0x00069f15) main_tv_pg_hdr_pane_g6

0xec9c,	// (0x00069f1f) main_tv_pg_hdr_pane_g7

0xeca6,	// (0x00069f29) main_tv_pg_hdr_pane_g8

0xecb0,	// (0x00069f33) main_tv_pg_hdr_pane_g9

0xecba,	// (0x00069f3d) main_tv_pg_hdr_pane_g10

0xecc4,	// (0x00069f47) main_tv_pg_hdr_pane_g11

0x000a,

0xfb93,	// (0x0006ae16) main_tv_pg_hdr_pane_g

0xecce,	// (0x00069f51) main_tv_pg_hdr_pane_t1

0xecdc,	// (0x00069f5f) main_tv_pg_hdr_pane_t2

0xecea,	// (0x00069f6d) main_tv_pg_hdr_pane_t3

0xecfa,	// (0x00069f7d) main_tv_pg_hdr_pane_t4

0xed0a,	// (0x00069f8d) main_tv_pg_hdr_pane_t5

0x0004,

0x0a48,	// (0x0005bccb) main_tv_pg_hdr_pane_t

0xed1a,	// (0x00069f9d) single_mobtv_pg_channel_pane_ParamLimits

0xed1a,	// (0x00069f9d) single_mobtv_pg_channel_pane

0xed3e,	// (0x00069fc1) single_mobtv_pg_channel_table_pane

0xed47,	// (0x00069fca) single_mobtv_pg_channel_thumb_pane

0xed50,	// (0x00069fd3) single_tv_pg_channel_pane_g1

0xed59,	// (0x00069fdc) single_tv_pg_channel_pane_g2

0x0001,

0xfbaa,	// (0x0006ae2d) single_tv_pg_channel_pane_g

0xc978,	// (0x00067bfb) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc978,	// (0x00067bfb) bg_single_mobtv_pg_channel_thumb_pane

0xed62,	// (0x00069fe5) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xed62,	// (0x00069fe5) single_mobtv_pg_channel_thumb_pane_g1

0xed70,	// (0x00069ff3) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xed70,	// (0x00069ff3) single_mobtv_pg_channel_thumb_pane_g2

0xed7c,	// (0x00069fff) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xed7c,	// (0x00069fff) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbaf,	// (0x0006ae32) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbaf,	// (0x0006ae32) single_mobtv_pg_channel_thumb_pane_g

0xed88,	// (0x0006a00b) single_mobtv_pg_channel_thumb_pane_t1

0xed96,	// (0x0006a019) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbb6,	// (0x0006ae39) single_mobtv_pg_channel_thumb_pane_t

0xc711,	// (0x00067994) bg_single_mobtv_pg_channel_table_pane_g1

0xc711,	// (0x00067994) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x0006a983) bg_single_mobtv_pg_channel_table_pane_g

0xeda4,	// (0x0006a027) single_mobtv_pg_channel_table_pane_t1

0xedb2,	// (0x0006a035) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbbb,	// (0x0006ae3e) single_mobtv_pg_channel_table_pane_t

0x7fbf,	// (0x00063242) main_mobtv_info_pane_g1_ParamLimits

0x7fbf,	// (0x00063242) main_mobtv_info_pane_g1

0x7fdd,	// (0x00063260) main_mobtv_info_pane_t1_ParamLimits

0x7fdd,	// (0x00063260) main_mobtv_info_pane_t1

0x8055,	// (0x000632d8) main_mobtv_info_pane_t2_ParamLimits

0x8055,	// (0x000632d8) main_mobtv_info_pane_t2

0x0002,

0xfbc5,	// (0x0006ae48) main_mobtv_info_pane_t_ParamLimits

0xfbc5,	// (0x0006ae48) main_mobtv_info_pane_t

0x80e4,	// (0x00063367) wait_bar_pane_cp05

0x80f6,	// (0x00063379) main_mobtv_loading_pane_g1_ParamLimits

0x80f6,	// (0x00063379) main_mobtv_loading_pane_g1

0x8109,	// (0x0006338c) main_mobtv_loading_pane_g2_ParamLimits

0x8109,	// (0x0006338c) main_mobtv_loading_pane_g2

0x8115,	// (0x00063398) main_mobtv_loading_pane_g3_ParamLimits

0x8115,	// (0x00063398) main_mobtv_loading_pane_g3

0x0002,

0xfbcc,	// (0x0006ae4f) main_mobtv_loading_pane_g_ParamLimits

0xfbcc,	// (0x0006ae4f) main_mobtv_loading_pane_g

0xedc0,	// (0x0006a043) main_mobtv_loading_pane_t1_ParamLimits

0xedc0,	// (0x0006a043) main_mobtv_loading_pane_t1

0xedd8,	// (0x0006a05b) main_mobtv_loading_pane_t2_ParamLimits

0xedd8,	// (0x0006a05b) main_mobtv_loading_pane_t2

0x0001,

0x0a7c,	// (0x0005bcff) main_mobtv_loading_pane_t_ParamLimits

0x0a7c,	// (0x0005bcff) main_mobtv_loading_pane_t

0x8128,	// (0x000633ab) wait_bar_pane_cp06_ParamLimits

0x8128,	// (0x000633ab) wait_bar_pane_cp06

0xedfc,	// (0x0006a07f) main_mobtv_programe_curr_pane_t1

0xee0a,	// (0x0006a08d) main_mobtv_programe_curr_pane_t2

0x0001,

0x0a81,	// (0x0005bd04) main_mobtv_programe_curr_pane_t

0xee18,	// (0x0006a09b) main_mobtv_programe_next_pane_t1

0xee26,	// (0x0006a0a9) main_mobtv_programe_next_pane_t2

0xee34,	// (0x0006a0b7) main_mobtv_programe_next_pane_t3

0x0002,

0x0a86,	// (0x0005bd09) main_mobtv_programe_next_pane_t

0x0e6a,	// (0x0005c0ed) bg_popup_mobtv_noti_window_pane

0xee42,	// (0x0006a0c5) popup_mobtv_noti_window_g1

0xee4a,	// (0x0006a0cd) popup_mobtv_noti_window_t1

0xee58,	// (0x0006a0db) popup_mobtv_noti_window_t2

0x0001,

0x0a8d,	// (0x0005bd10) popup_mobtv_noti_window_t

0xc711,	// (0x00067994) bg_popup_mobtv_noti_window_pane_g1

0x0e6a,	// (0x0005c0ed) sc_clock_pane

0x0e6a,	// (0x0005c0ed) main_fs_bigclock_pane

0x77f6,	// (0x00062a79) blid2_tripm_pane_t4_ParamLimits

0x77f6,	// (0x00062a79) blid2_tripm_pane_t4

0x8137,	// (0x000633ba) sc_clock_pane_g1_ParamLimits

0x8137,	// (0x000633ba) sc_clock_pane_g1

0x8149,	// (0x000633cc) sc_clock_pane_t1_ParamLimits

0x8149,	// (0x000633cc) sc_clock_pane_t1

0x816b,	// (0x000633ee) sc_clock_pane_t2_ParamLimits

0x816b,	// (0x000633ee) sc_clock_pane_t2

0x8183,	// (0x00063406) sc_clock_pane_t3_ParamLimits

0x8183,	// (0x00063406) sc_clock_pane_t3

0x0004,

0xfbd3,	// (0x0006ae56) sc_clock_pane_t_ParamLimits

0xfbd3,	// (0x0006ae56) sc_clock_pane_t

0x90f3,	// (0x00064376) main_fs_bigclock_indicator_pane_ParamLimits

0x90f3,	// (0x00064376) main_fs_bigclock_indicator_pane

0xc948,	// (0x00067bcb) main_fs_bigclock_pane_g1_ParamLimits

0xc948,	// (0x00067bcb) main_fs_bigclock_pane_g1

0x90ff,	// (0x00064382) main_fs_bigclock_pane_t1_ParamLimits

0x90ff,	// (0x00064382) main_fs_bigclock_pane_t1

0x9111,	// (0x00064394) main_fs_bigclock_pane_t2_ParamLimits

0x9111,	// (0x00064394) main_fs_bigclock_pane_t2

0x9123,	// (0x000643a6) main_fs_bigclock_pane_t3_ParamLimits

0x9123,	// (0x000643a6) main_fs_bigclock_pane_t3

0x0002,

0xfdb8,	// (0x0006b03b) main_fs_bigclock_pane_t_ParamLimits

0xfdb8,	// (0x0006b03b) main_fs_bigclock_pane_t

0xd762,	// (0x000689e5) main_fs_bigclock_indicator_pane_g1

0xeb1a,	// (0x00069d9d) ncim_query_content_pane_g2_ParamLimits

0xeb1a,	// (0x00069d9d) ncim_query_content_pane_g2

0x0001,

0xfb81,	// (0x0006ae04) ncim_query_content_pane_g_ParamLimits

0xfb81,	// (0x0006ae04) ncim_query_content_pane_g

0x819c,	// (0x0006341f) sc_clock_pane_t4_ParamLimits

0x819c,	// (0x0006341f) sc_clock_pane_t4

0x99c1,	// (0x00064c44) main_radioblah_pane

0xe09b,	// (0x0006931e) cell_call4_button_pane_t1_copy1_ParamLimits

0xe09b,	// (0x0006931e) cell_call4_button_pane_t1_copy1

0x7de5,	// (0x00063068) main_ncimui_pane_t1_ParamLimits

0x7de5,	// (0x00063068) main_ncimui_pane_t1

0x7dff,	// (0x00063082) main_ncimui_pane_t2_ParamLimits

0x7dff,	// (0x00063082) main_ncimui_pane_t2

0x0002,

0xfb7a,	// (0x0006adfd) main_ncimui_pane_t_ParamLimits

0xfb7a,	// (0x0006adfd) main_ncimui_pane_t

0xee66,	// (0x0006a0e9) main_radioblah_anim_pane_ParamLimits

0xee66,	// (0x0006a0e9) main_radioblah_anim_pane

0xee77,	// (0x0006a0fa) main_radioblah_info_pane_ParamLimits

0xee77,	// (0x0006a0fa) main_radioblah_info_pane

0xee8b,	// (0x0006a10e) main_radioblah_pane_t1_ParamLimits

0xee8b,	// (0x0006a10e) main_radioblah_pane_t1

0xeea7,	// (0x0006a12a) main_radioblah_pane_t2_ParamLimits

0xeea7,	// (0x0006a12a) main_radioblah_pane_t2

0x0003,

0x0ab3,	// (0x0005bd36) main_radioblah_pane_t_ParamLimits

0x0ab3,	// (0x0005bd36) main_radioblah_pane_t

0x836c,	// (0x000635ef) main_radioblah_rocker_ctrl_pane_ParamLimits

0x836c,	// (0x000635ef) main_radioblah_rocker_ctrl_pane

0xeeef,	// (0x0006a172) main_radioblah_info_pane_t1_ParamLimits

0xeeef,	// (0x0006a172) main_radioblah_info_pane_t1

0x83c4,	// (0x00063647) main_radioblah_info_pane_t2_ParamLimits

0x83c4,	// (0x00063647) main_radioblah_info_pane_t2

0x0003,

0xfbf4,	// (0x0006ae77) main_radioblah_info_pane_t_ParamLimits

0xfbf4,	// (0x0006ae77) main_radioblah_info_pane_t

0xc711,	// (0x00067994) main_radioblah_rocker_ctrl_pane_g1

0x8476,	// (0x000636f9) main_radioblah_rocker_ctrl_pane_g2

0x847e,	// (0x00063701) main_radioblah_rocker_ctrl_pane_g3

0x8486,	// (0x00063709) main_radioblah_rocker_ctrl_pane_g4

0x848e,	// (0x00063711) main_radioblah_rocker_ctrl_pane_g5

0x8496,	// (0x00063719) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbfd,	// (0x0006ae80) main_radioblah_rocker_ctrl_pane_g

0x7ac0,	// (0x00062d43) main_cset_text2_pane_t1_copy1_ParamLimits

0xdde4,	// (0x00069067) cam4_image_uncrop_qvga_pane

0xde4b,	// (0x000690ce) vid4_image_uncrop_qcif_pane

0xdf6e,	// (0x000691f1) cam6_image_uncrop_qvga_pane_ParamLimits

0xdf6e,	// (0x000691f1) cam6_image_uncrop_qvga_pane

0xe82a,	// (0x00069aad) vid6_image_uncrop_qcif_pane_ParamLimits

0xe82a,	// (0x00069aad) vid6_image_uncrop_qcif_pane

0x0e6a,	// (0x0005c0ed) bg_popup_preview_window_pane_cp03

0xeacc,	// (0x00069d4f) list_cset_text2_pane

0xead4,	// (0x00069d57) main_cset6_text2_pane_g1

0xeadc,	// (0x00069d5f) main_cset6_text2_pane_t1

0x849e,	// (0x00063721) list_cset_text2_pane_t1_ParamLimits

0x849e,	// (0x00063721) list_cset_text2_pane_t1

0x99c1,	// (0x00064c44) main_radioblah_pane_ParamLimits

0x80d0,	// (0x00063353) main_mobtv_info_pane_t3_ParamLimits

0x80d0,	// (0x00063353) main_mobtv_info_pane_t3

0x835a,	// (0x000635dd) main_radioblah_pane_g1

0x8394,	// (0x00063617) main_radioblah_info_pane_g1

0x841b,	// (0x0006369e) main_radioblah_info_pane_t3_ParamLimits

0x841b,	// (0x0006369e) main_radioblah_info_pane_t3

0x29a1,	// (0x0005dc24) highlight_cell_cale_month_pane_ParamLimits

0x29a1,	// (0x0005dc24) highlight_cell_cale_month_pane

0x0e6a,	// (0x0005c0ed) main_phob_fisheye_pane

0xca5a,	// (0x00067cdd) scroll_pane_cp0031_ParamLimits

0xca5a,	// (0x00067cdd) scroll_pane_cp0031

0xe938,	// (0x00069bbb) wait_bar_pane_cp08_ParamLimits

0x7b44,	// (0x00062dc7) cset_list_set_pane_copy1_ParamLimits

0xef29,	// (0x0006a1ac) highlight_cell_cale_month_pane_g1

0x84bb,	// (0x0006373e) highlight_cell_cale_month_pane_t1

0xe5db,	// (0x0006985e) list_gen_pane_cp01

0xe264,	// (0x000694e7) scroll_pane_01

0x84c9,	// (0x0006374c) list_single_double_fisheye_pane

0x84d2,	// (0x00063755) list_double_fisheye_pane_g1_ParamLimits

0x84d2,	// (0x00063755) list_double_fisheye_pane_g1

0x84de,	// (0x00063761) list_double_fisheye_pane_g2_ParamLimits

0x84de,	// (0x00063761) list_double_fisheye_pane_g2

0x84f2,	// (0x00063775) list_double_fisheye_pane_g3_ParamLimits

0x84f2,	// (0x00063775) list_double_fisheye_pane_g3

0x0004,

0xfc0a,	// (0x0006ae8d) list_double_fisheye_pane_g_ParamLimits

0xfc0a,	// (0x0006ae8d) list_double_fisheye_pane_g

0x851b,	// (0x0006379e) list_double_fisheye_pane_t1_ParamLimits

0x851b,	// (0x0006379e) list_double_fisheye_pane_t1

0x8536,	// (0x000637b9) list_double_fisheye_pane_t2_ParamLimits

0x8536,	// (0x000637b9) list_double_fisheye_pane_t2

0x0001,

0xfc15,	// (0x0006ae98) list_double_fisheye_pane_t_ParamLimits

0xfc15,	// (0x0006ae98) list_double_fisheye_pane_t

0x0e6a,	// (0x0005c0ed) main_call5_pane

0x81c7,	// (0x0006344a) sc_swipe_pane_ParamLimits

0x81c7,	// (0x0006344a) sc_swipe_pane

0x856b,	// (0x000637ee) call5_image_pane_ParamLimits

0x856b,	// (0x000637ee) call5_image_pane

0x8588,	// (0x0006380b) call5_swipe_1_pane_ParamLimits

0x8588,	// (0x0006380b) call5_swipe_1_pane

0x859b,	// (0x0006381e) call5_swipe_2_pane_ParamLimits

0x859b,	// (0x0006381e) call5_swipe_2_pane

0x85c6,	// (0x00063849) popup_call5_audio_first_window_ParamLimits

0x85c6,	// (0x00063849) popup_call5_audio_first_window

0xc978,	// (0x00067bfb) call5_swipe_1_pane_g1_ParamLimits

0xc978,	// (0x00067bfb) call5_swipe_1_pane_g1

0xef31,	// (0x0006a1b4) call5_swipe_1_pane_g2_ParamLimits

0xef31,	// (0x0006a1b4) call5_swipe_1_pane_g2

0x0001,

0xfc1a,	// (0x0006ae9d) call5_swipe_1_pane_g_ParamLimits

0xfc1a,	// (0x0006ae9d) call5_swipe_1_pane_g

0xef3d,	// (0x0006a1c0) call5_swipe_1_pane_t1_ParamLimits

0xef3d,	// (0x0006a1c0) call5_swipe_1_pane_t1

0xc978,	// (0x00067bfb) call5_swipe_2_pane_g1_ParamLimits

0xc978,	// (0x00067bfb) call5_swipe_2_pane_g1

0xef52,	// (0x0006a1d5) call5_swipe_2_pane_g2_ParamLimits

0xef52,	// (0x0006a1d5) call5_swipe_2_pane_g2

0x0001,

0xfc1f,	// (0x0006aea2) call5_swipe_2_pane_g_ParamLimits

0xfc1f,	// (0x0006aea2) call5_swipe_2_pane_g

0xef5e,	// (0x0006a1e1) call5_swipe_2_pane_t1_ParamLimits

0xef5e,	// (0x0006a1e1) call5_swipe_2_pane_t1

0xef73,	// (0x0006a1f6) sc_swipe_pane_g1_ParamLimits

0xef73,	// (0x0006a1f6) sc_swipe_pane_g1

0xef80,	// (0x0006a203) sc_swipe_pane_g2_ParamLimits

0xef80,	// (0x0006a203) sc_swipe_pane_g2

0x0001,

0x0aec,	// (0x0005bd6f) sc_swipe_pane_g_ParamLimits

0x0aec,	// (0x0005bd6f) sc_swipe_pane_g

0xef8c,	// (0x0006a20f) sc_swipe_pane_t1_ParamLimits

0xef8c,	// (0x0006a20f) sc_swipe_pane_t1

0x0e6a,	// (0x0005c0ed) main_cmail_launcher_pane

0x85d7,	// (0x0006385a) aid_size_cell_cmail_l_ParamLimits

0x85d7,	// (0x0006385a) aid_size_cell_cmail_l

0x85f1,	// (0x00063874) grid_cmail_l_pane_ParamLimits

0x85f1,	// (0x00063874) grid_cmail_l_pane

0x860c,	// (0x0006388f) cell_cmail_l_pane_ParamLimits

0x860c,	// (0x0006388f) cell_cmail_l_pane

0x8632,	// (0x000638b5) cell_cmail_l_pane_g1_ParamLimits

0x8632,	// (0x000638b5) cell_cmail_l_pane_g1

0x863e,	// (0x000638c1) cell_cmail_l_pane_t1_ParamLimits

0x863e,	// (0x000638c1) cell_cmail_l_pane_t1

0xefa1,	// (0x0006a224) cell_cmail_l_pane_t2_ParamLimits

0xefa1,	// (0x0006a224) cell_cmail_l_pane_t2

0x0001,

0xfc24,	// (0x0006aea7) cell_cmail_l_pane_t_ParamLimits

0xfc24,	// (0x0006aea7) cell_cmail_l_pane_t

0x99c1,	// (0x00064c44) grid_highlight_pane_cp018_ParamLimits

0x99c1,	// (0x00064c44) grid_highlight_pane_cp018

0x0f8a,	// (0x0005c20d) main2_pane_ParamLimits

0x0f8a,	// (0x0005c20d) main2_pane

0xa24f,	// (0x000654d2) popup_sp_fs_action_menu_bg_pane_g1

0xa257,	// (0x000654da) popup_sp_fs_action_menu_bg_pane_g2

0xa25f,	// (0x000654e2) popup_sp_fs_action_menu_bg_pane_g3

0xa267,	// (0x000654ea) popup_sp_fs_action_menu_bg_pane_g4

0xa26f,	// (0x000654f2) popup_sp_fs_action_menu_bg_pane_g5

0xa277,	// (0x000654fa) popup_sp_fs_action_menu_bg_pane_g6

0xa27f,	// (0x00065502) popup_sp_fs_action_menu_bg_pane_g7

0xa287,	// (0x0006550a) popup_sp_fs_action_menu_bg_pane_g8

0xa28f,	// (0x00065512) popup_sp_fs_action_menu_bg_pane_g9

0xa297,	// (0x0006551a) popup_sp_fs_action_menu_bg_pane_g10

0xa297,	// (0x0006551a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0006a42f) popup_sp_fs_action_menu_bg_pane_g

0x1c13,	// (0x0005ce96) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1c13,	// (0x0005ce96) list_medium_line_x2_t3_g3_g1

0x1c1f,	// (0x0005cea2) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1c1f,	// (0x0005cea2) list_medium_line_x2_t3_g3_g2

0x1c2b,	// (0x0005ceae) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1c2b,	// (0x0005ceae) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0006a4df) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0006a4df) list_medium_line_x2_t3_g3_g

0x1c37,	// (0x0005ceba) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1c37,	// (0x0005ceba) list_medium_line_x2_t3_g3_t1

0x1c4c,	// (0x0005cecf) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1c4c,	// (0x0005cecf) list_medium_line_x2_t3_g3_t2

0x1c60,	// (0x0005cee3) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1c60,	// (0x0005cee3) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0006a4e6) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0006a4e6) list_medium_line_x2_t3_g3_t

0x1c13,	// (0x0005ce96) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1c13,	// (0x0005ce96) list_medium_line_x2_t3_g2_g1

0x1c2b,	// (0x0005ceae) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1c2b,	// (0x0005ceae) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0006a4ed) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0006a4ed) list_medium_line_x2_t3_g2_g

0x1c75,	// (0x0005cef8) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1c75,	// (0x0005cef8) list_medium_line_x2_t3_g2_t1

0x1c8b,	// (0x0005cf0e) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1c8b,	// (0x0005cf0e) list_medium_line_x2_t3_g2_t2

0x1c60,	// (0x0005cee3) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1c60,	// (0x0005cee3) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0006a4f2) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0006a4f2) list_medium_line_x2_t3_g2_t

0x1c13,	// (0x0005ce96) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1c13,	// (0x0005ce96) list_medium_line_x2_t4_g4_g1

0x1c9d,	// (0x0005cf20) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1c9d,	// (0x0005cf20) list_medium_line_x2_t4_g4_g2

0x1c1f,	// (0x0005cea2) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1c1f,	// (0x0005cea2) list_medium_line_x2_t4_g4_g3

0x1ca9,	// (0x0005cf2c) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1ca9,	// (0x0005cf2c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0006a4f9) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0006a4f9) list_medium_line_x2_t4_g4_g

0x1cb5,	// (0x0005cf38) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1cb5,	// (0x0005cf38) list_medium_line_x2_t4_g4_t1

0x1ccf,	// (0x0005cf52) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1ccf,	// (0x0005cf52) list_medium_line_x2_t4_g4_t2

0x1ce4,	// (0x0005cf67) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1ce4,	// (0x0005cf67) list_medium_line_x2_t4_g4_t3

0x1cf9,	// (0x0005cf7c) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1cf9,	// (0x0005cf7c) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0006a502) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0006a502) list_medium_line_x2_t4_g4_t

0x1c13,	// (0x0005ce96) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1c13,	// (0x0005ce96) list_medium_line_x2_t2_g4_g1

0x1c9d,	// (0x0005cf20) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1c9d,	// (0x0005cf20) list_medium_line_x2_t2_g4_g2

0x1c1f,	// (0x0005cea2) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1c1f,	// (0x0005cea2) list_medium_line_x2_t2_g4_g3

0x1c2b,	// (0x0005ceae) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1c2b,	// (0x0005ceae) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0006a569) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0006a569) list_medium_line_x2_t2_g4_g

0x29bf,	// (0x0005dc42) list_medium_line_x2_t2_g4_t1_ParamLimits

0x29bf,	// (0x0005dc42) list_medium_line_x2_t2_g4_t1

0x1c60,	// (0x0005cee3) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1c60,	// (0x0005cee3) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0006a572) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0006a572) list_medium_line_x2_t2_g4_t

0x1c13,	// (0x0005ce96) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1c13,	// (0x0005ce96) list_medium_line_x2_t2_g3_g1

0x1c1f,	// (0x0005cea2) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1c1f,	// (0x0005cea2) list_medium_line_x2_t2_g3_g2

0x1c2b,	// (0x0005ceae) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1c2b,	// (0x0005ceae) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0006a4df) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0006a4df) list_medium_line_x2_t2_g3_g

0x29d4,	// (0x0005dc57) list_medium_line_x2_t2_g3_t1_ParamLimits

0x29d4,	// (0x0005dc57) list_medium_line_x2_t2_g3_t1

0x1c60,	// (0x0005cee3) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1c60,	// (0x0005cee3) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0006a577) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0006a577) list_medium_line_x2_t2_g3_t

0x2bb1,	// (0x0005de34) main_sp_fs_list_pane_ParamLimits

0x2bb1,	// (0x0005de34) main_sp_fs_list_pane

0x2bbd,	// (0x0005de40) sp_fs_scroll_pane_ParamLimits

0x2bbd,	// (0x0005de40) sp_fs_scroll_pane

0x2bc9,	// (0x0005de4c) list_medium_line_x2_t3_t1

0x2bd9,	// (0x0005de5c) list_medium_line_x2_t3_t2

0x2be7,	// (0x0005de6a) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x0006a5c2) list_medium_line_x2_t3_t

0x2bf5,	// (0x0005de78) list_medium_line_x3_t4_t1

0x2c05,	// (0x0005de88) list_medium_line_x3_t4_t2

0x2c13,	// (0x0005de96) list_medium_line_x3_t4_t3

0x2be7,	// (0x0005de6a) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0006a5c9) list_medium_line_x3_t4_t

0x2c21,	// (0x0005dea4) list_medium_line_x4_t5_t1

0x2c31,	// (0x0005deb4) list_medium_line_x4_t5_t2

0x2c13,	// (0x0005de96) list_medium_line_x4_t5_t3

0x2c3f,	// (0x0005dec2) list_medium_line_x4_t5_t4

0x2be7,	// (0x0005de6a) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x0006a5d2) list_medium_line_x4_t5_t

0x1c13,	// (0x0005ce96) list_medium_line_t4_g4_g1_ParamLimits

0x1c13,	// (0x0005ce96) list_medium_line_t4_g4_g1

0x1ca9,	// (0x0005cf2c) list_medium_line_t4_g4_g2_ParamLimits

0x1ca9,	// (0x0005cf2c) list_medium_line_t4_g4_g2

0x2c4d,	// (0x0005ded0) list_medium_line_t4_g4_g3_ParamLimits

0x2c4d,	// (0x0005ded0) list_medium_line_t4_g4_g3

0x1c2b,	// (0x0005ceae) list_medium_line_t4_g4_g4_ParamLimits

0x1c2b,	// (0x0005ceae) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x0006a5dd) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x0006a5dd) list_medium_line_t4_g4_g

0x2c59,	// (0x0005dedc) list_medium_line_t4_g4_t1_ParamLimits

0x2c59,	// (0x0005dedc) list_medium_line_t4_g4_t1

0x2c6e,	// (0x0005def1) list_medium_line_t4_g4_t2_ParamLimits

0x2c6e,	// (0x0005def1) list_medium_line_t4_g4_t2

0x2c83,	// (0x0005df06) list_medium_line_t4_g4_t3_ParamLimits

0x2c83,	// (0x0005df06) list_medium_line_t4_g4_t3

0x1c60,	// (0x0005cee3) list_medium_line_t4_g4_t4_ParamLimits

0x1c60,	// (0x0005cee3) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0006a5e6) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0006a5e6) list_medium_line_t4_g4_t

0x2d36,	// (0x0005dfb9) chi_dic_find_pane_g1

0x3eb6,	// (0x0005f139) main_tport_pane

0x6df8,	// (0x0006207b) list_medium_line_plain_t1

0x6eaa,	// (0x0006212d) list_medium_line_t2_g2_g1_ParamLimits

0x6eaa,	// (0x0006212d) list_medium_line_t2_g2_g1

0x6eb6,	// (0x00062139) list_medium_line_t2_g2_g2_ParamLimits

0x6eb6,	// (0x00062139) list_medium_line_t2_g2_g2

0x0001,

0xfa0c,	// (0x0006ac8f) list_medium_line_t2_g2_g_ParamLimits

0xfa0c,	// (0x0006ac8f) list_medium_line_t2_g2_g

0x6ec2,	// (0x00062145) list_medium_line_t2_g2_t1_ParamLimits

0x6ec2,	// (0x00062145) list_medium_line_t2_g2_t1

0x6edc,	// (0x0006215f) list_medium_line_t2_g2_t2_ParamLimits

0x6edc,	// (0x0006215f) list_medium_line_t2_g2_t2

0x0001,

0xfa11,	// (0x0006ac94) list_medium_line_t2_g2_t_ParamLimits

0xfa11,	// (0x0006ac94) list_medium_line_t2_g2_t

0x7588,	// (0x0006280b) aid_sp_fs_list_icon_a_sm

0x7590,	// (0x00062813) aid_sp_fs_list_icon_d

0x7598,	// (0x0006281b) aid_sp_fs_text_primary

0x75a1,	// (0x00062824) aid_sp_fs_text_secondary

0xcf7f,	// (0x00068202) list_medium_line

0xcf7f,	// (0x00068202) list_medium_line_g2

0xcf7f,	// (0x00068202) list_medium_line_g3

0xcf7f,	// (0x00068202) list_medium_line_plain

0xcf7f,	// (0x00068202) list_medium_line_plain_t2

0xcf7f,	// (0x00068202) list_medium_line_plain_t3

0xcf7f,	// (0x00068202) list_medium_line_right_icon

0xcf7f,	// (0x00068202) list_medium_line_right_iconx2

0xcf7f,	// (0x00068202) list_medium_line_t2

0xcf7f,	// (0x00068202) list_medium_line_t2_g2

0xcf7f,	// (0x00068202) list_medium_line_t2_g3

0xcf7f,	// (0x00068202) list_medium_line_t2_right_icon

0xcf7f,	// (0x00068202) list_medium_line_t2_right_iconx2

0xcf7f,	// (0x00068202) list_medium_line_t3

0xcf7f,	// (0x00068202) list_medium_line_t3_g2

0xcf7f,	// (0x00068202) list_medium_line_t3_g3

0xcf7f,	// (0x00068202) list_medium_line_t3_right_iconx2

0x75aa,	// (0x0006282d) list_medium_line_t4_g4

0x75b3,	// (0x00062836) list_medium_line_x2

0x75b3,	// (0x00062836) list_medium_line_x2_t2_g2

0x75b3,	// (0x00062836) list_medium_line_x2_t2_g3

0x75b3,	// (0x00062836) list_medium_line_x2_t2_g4

0x75b3,	// (0x00062836) list_medium_line_x2_t3

0x75b3,	// (0x00062836) list_medium_line_x2_t3_g2

0x75b3,	// (0x00062836) list_medium_line_x2_t3_g3

0x75b3,	// (0x00062836) list_medium_line_x2_t3_g4

0x75b3,	// (0x00062836) list_medium_line_x2_t4_g2

0x75b3,	// (0x00062836) list_medium_line_x2_t4_g4

0x75bc,	// (0x0006283f) list_medium_line_x3

0x75bc,	// (0x0006283f) list_medium_line_x3_t4

0x75bc,	// (0x0006283f) list_medium_line_x3_t4_g4

0x75aa,	// (0x0006282d) list_medium_line_x4_t4

0x75aa,	// (0x0006282d) list_medium_line_x4_t4_g7

0x75aa,	// (0x0006282d) list_medium_line_x4_t5

0x75c5,	// (0x00062848) list_single_fs_dyc_pane_ParamLimits

0x75c5,	// (0x00062848) list_single_fs_dyc_pane

0x1c13,	// (0x0005ce96) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1c13,	// (0x0005ce96) list_medium_line_x4_t4_g7_g1

0x7cfa,	// (0x00062f7d) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7cfa,	// (0x00062f7d) list_medium_line_x4_t4_g7_g2

0x7d06,	// (0x00062f89) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7d06,	// (0x00062f89) list_medium_line_x4_t4_g7_g3

0x7d15,	// (0x00062f98) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7d15,	// (0x00062f98) list_medium_line_x4_t4_g7_g4

0x7d21,	// (0x00062fa4) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7d21,	// (0x00062fa4) list_medium_line_x4_t4_g7_g5

0x7d30,	// (0x00062fb3) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7d30,	// (0x00062fb3) list_medium_line_x4_t4_g7_g6

0x7d3f,	// (0x00062fc2) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7d3f,	// (0x00062fc2) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb60,	// (0x0006ade3) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb60,	// (0x0006ade3) list_medium_line_x4_t4_g7_g

0x7d4b,	// (0x00062fce) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7d4b,	// (0x00062fce) list_medium_line_x4_t4_g7_t1

0x7d60,	// (0x00062fe3) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7d60,	// (0x00062fe3) list_medium_line_x4_t4_g7_t2

0x7d75,	// (0x00062ff8) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7d75,	// (0x00062ff8) list_medium_line_x4_t4_g7_t3

0x7d8a,	// (0x0006300d) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7d8a,	// (0x0006300d) list_medium_line_x4_t4_g7_t4

0x7d9c,	// (0x0006301f) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7d9c,	// (0x0006301f) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb6f,	// (0x0006adf2) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb6f,	// (0x0006adf2) list_medium_line_x4_t4_g7_t

0x7dae,	// (0x00063031) list_single_dyc_row_pane_ParamLimits

0x7dae,	// (0x00063031) list_single_dyc_row_pane

0x8558,	// (0x000637db) call5_gesture_pane_ParamLimits

0x8558,	// (0x000637db) call5_gesture_pane

0x85ae,	// (0x00063831) call5_windows_pane_ParamLimits

0x85ae,	// (0x00063831) call5_windows_pane

0x8654,	// (0x000638d7) call5_swipe_1_pane_cp_ParamLimits

0x8654,	// (0x000638d7) call5_swipe_1_pane_cp

0x8660,	// (0x000638e3) call5_swipe_2_pane_cp_ParamLimits

0x8660,	// (0x000638e3) call5_swipe_2_pane_cp

0xada0,	// (0x00066023) call5_image_pane_cp

0x866c,	// (0x000638ef) popup_call5_audio_first_window_cp_ParamLimits

0x866c,	// (0x000638ef) popup_call5_audio_first_window_cp

0xef73,	// (0x0006a1f6) call5_swipe_1_pane_g1_cp_ParamLimits

0xef73,	// (0x0006a1f6) call5_swipe_1_pane_g1_cp

0xefb3,	// (0x0006a236) call5_swipe_1_pane_g2_cp

0xef8c,	// (0x0006a20f) call5_swipe_1_pane_t1_cp_ParamLimits

0xef8c,	// (0x0006a20f) call5_swipe_1_pane_t1_cp

0xef73,	// (0x0006a1f6) call5_swipe_2_pane_g1_cp_ParamLimits

0xef73,	// (0x0006a1f6) call5_swipe_2_pane_g1_cp

0xefbb,	// (0x0006a23e) call5_swipe_2_pane_g2_cp

0xefc3,	// (0x0006a246) call5_swipe_2_pane_t1_cp_ParamLimits

0xefc3,	// (0x0006a246) call5_swipe_2_pane_t1_cp

0x99c1,	// (0x00064c44) main_sp_fs_email_pane

0xefd8,	// (0x0006a25b) main_sp_fs_listscroll_pane_te

0x8678,	// (0x000638fb) popup_sp_fs_action_menu_pane_ParamLimits

0x8678,	// (0x000638fb) popup_sp_fs_action_menu_pane

0xc711,	// (0x00067994) bg_sp_fs_ctrlbar_pane_g1

0xefe1,	// (0x0006a264) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xefea,	// (0x0006a26d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xeff3,	// (0x0006a276) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc711,	// (0x00067994) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc29,	// (0x0006aeac) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc4f4,	// (0x00067777) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc4f4,	// (0x00067777) bg_sp_fs_ctrlbar_ddmenu_pane

0xeffc,	// (0x0006a27f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xeffc,	// (0x0006a27f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xf008,	// (0x0006a28b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xf008,	// (0x0006a28b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0aff,	// (0x0005bd82) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0aff,	// (0x0005bd82) main_sp_fs_ctrlbar_ddmenu_pane_g

0xf014,	// (0x0006a297) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xf014,	// (0x0006a297) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x86b8,	// (0x0006393b) list_medium_line_t2_right_icon_g1

0x86c0,	// (0x00063943) list_medium_line_t2_right_icon_t1

0x86d0,	// (0x00063953) list_medium_line_t2_right_icon_t2

0x0001,

0xfc32,	// (0x0006aeb5) list_medium_line_t2_right_icon_t

0xc209,	// (0x0006748c) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc209,	// (0x0006748c) bg_sp_fs_ctrlbar_pane

0x872a,	// (0x000639ad) main_sp_fs_ctrlbar_button_pane_cp01

0x8734,	// (0x000639b7) main_sp_fs_ctrlbar_ddmenu_pane

0xcf88,	// (0x0006820b) main_sp_fs_ctrlbar_pane_g1

0xf066,	// (0x0006a2e9) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfc37,	// (0x0006aeba) main_sp_fs_ctrlbar_pane_g

0xf072,	// (0x0006a2f5) main_sp_fs_ctrlbar_pane_t1

0x873e,	// (0x000639c1) main_sp_fs_ctrlbar_pane

0x8762,	// (0x000639e5) main_sp_fs_listscroll_pane_te_cp01

0x8782,	// (0x00063a05) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8782,	// (0x00063a05) popup_sp_fs_action_menu_pane_cp01

0x99c1,	// (0x00064c44) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x99c1,	// (0x00064c44) bg_sp_fs_highlight_list_pane_cp01

0xcf94,	// (0x00068217) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xcf94,	// (0x00068217) sp_fs_action_menu_list_gene_pane_g1

0xf087,	// (0x0006a30a) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xf087,	// (0x0006a30a) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc3c,	// (0x0006aebf) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc3c,	// (0x0006aebf) sp_fs_action_menu_list_gene_pane_g

0xcfa3,	// (0x00068226) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xcfa3,	// (0x00068226) sp_fs_action_menu_list_gene_pane_t1

0xcfbb,	// (0x0006823e) sp_fs_action_menu_list_gene_pane_ParamLimits

0xcfbb,	// (0x0006823e) sp_fs_action_menu_list_gene_pane

0xf094,	// (0x0006a317) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xf094,	// (0x0006a317) popup_sp_fs_action_menu_bg_pane

0xcfd8,	// (0x0006825b) sp_fs_action_menu_list_pane_ParamLimits

0xcfd8,	// (0x0006825b) sp_fs_action_menu_list_pane

0xf0a2,	// (0x0006a325) sp_fs_scroll_pane_cp01_ParamLimits

0xf0a2,	// (0x0006a325) sp_fs_scroll_pane_cp01

0x879c,	// (0x00063a1f) list_medium_line_plain_t2_t1

0x87ac,	// (0x00063a2f) list_medium_line_plain_t2_t2

0x0001,

0xfc41,	// (0x0006aec4) list_medium_line_plain_t2_t

0x87bc,	// (0x00063a3f) list_medium_line_plain_t3_t1

0x87cc,	// (0x00063a4f) list_medium_line_plain_t3_t2

0x87da,	// (0x00063a5d) list_medium_line_plain_t3_t3

0x0002,

0xfc46,	// (0x0006aec9) list_medium_line_plain_t3_t

0x1c13,	// (0x0005ce96) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1c13,	// (0x0005ce96) list_medium_line_x2_t2_g2_g1

0x1c2b,	// (0x0005ceae) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1c2b,	// (0x0005ceae) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0006a4ed) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0006a4ed) list_medium_line_x2_t2_g2_g

0x2c59,	// (0x0005dedc) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2c59,	// (0x0005dedc) list_medium_line_x2_t2_g2_t1

0x1c60,	// (0x0005cee3) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1c60,	// (0x0005cee3) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc4d,	// (0x0006aed0) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc4d,	// (0x0006aed0) list_medium_line_x2_t2_g2_t

0x1c13,	// (0x0005ce96) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1c13,	// (0x0005ce96) list_medium_line_x2_t4_g2_g1

0xcff6,	// (0x00068279) list_medium_line_x2_t4_g2_g2_ParamLimits

0xcff6,	// (0x00068279) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc52,	// (0x0006aed5) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc52,	// (0x0006aed5) list_medium_line_x2_t4_g2_g

0x87e8,	// (0x00063a6b) list_medium_line_x2_t4_g2_t1_ParamLimits

0x87e8,	// (0x00063a6b) list_medium_line_x2_t4_g2_t1

0x87ff,	// (0x00063a82) list_medium_line_x2_t4_g2_t2_ParamLimits

0x87ff,	// (0x00063a82) list_medium_line_x2_t4_g2_t2

0x8814,	// (0x00063a97) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8814,	// (0x00063a97) list_medium_line_x2_t4_g2_t3

0x1c60,	// (0x0005cee3) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1c60,	// (0x0005cee3) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc57,	// (0x0006aeda) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc57,	// (0x0006aeda) list_medium_line_x2_t4_g2_t

0xd008,	// (0x0006828b) list_medium_line_t3_right_iconx2_g1

0x86b8,	// (0x0006393b) list_medium_line_t3_right_iconx2_g2

0x8826,	// (0x00063aa9) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc60,	// (0x0006aee3) list_medium_line_t3_right_iconx2_g

0x8830,	// (0x00063ab3) list_medium_line_t3_right_iconx2_t1

0x8840,	// (0x00063ac3) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc67,	// (0x0006aeea) list_medium_line_t3_right_iconx2_t

0x1c13,	// (0x0005ce96) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1c13,	// (0x0005ce96) list_medium_line_x3_t4_g4_g1

0x1c1f,	// (0x0005cea2) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1c1f,	// (0x0005cea2) list_medium_line_x3_t4_g4_g2

0x1ca9,	// (0x0005cf2c) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1ca9,	// (0x0005cf2c) list_medium_line_x3_t4_g4_g3

0xd010,	// (0x00068293) list_medium_line_x3_t4_g4_g4_ParamLimits

0xd010,	// (0x00068293) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc6c,	// (0x0006aeef) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc6c,	// (0x0006aeef) list_medium_line_x3_t4_g4_g

0x884e,	// (0x00063ad1) list_medium_line_x3_t4_g4_t1_ParamLimits

0x884e,	// (0x00063ad1) list_medium_line_x3_t4_g4_t1

0x8865,	// (0x00063ae8) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8865,	// (0x00063ae8) list_medium_line_x3_t4_g4_t2

0x2c6e,	// (0x0005def1) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2c6e,	// (0x0005def1) list_medium_line_x3_t4_g4_t3

0xd01c,	// (0x0006829f) list_medium_line_x3_t4_g4_t4_ParamLimits

0xd01c,	// (0x0006829f) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc75,	// (0x0006aef8) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc75,	// (0x0006aef8) list_medium_line_x3_t4_g4_t

0x8880,	// (0x00063b03) list_single_dyc_row_text_pane_t1_ParamLimits

0x8880,	// (0x00063b03) list_single_dyc_row_text_pane_t1

0x88c9,	// (0x00063b4c) list_single_dyc_row_text_pane_t2_ParamLimits

0x88c9,	// (0x00063b4c) list_single_dyc_row_text_pane_t2

0xd039,	// (0x000682bc) list_single_dyc_row_text_pane_t3_ParamLimits

0xd039,	// (0x000682bc) list_single_dyc_row_text_pane_t3

0x0002,

0xfc7e,	// (0x0006af01) list_single_dyc_row_text_pane_t_ParamLimits

0xfc7e,	// (0x0006af01) list_single_dyc_row_text_pane_t

0xd04b,	// (0x000682ce) list_single_dyc_row_pane_g1_ParamLimits

0xd04b,	// (0x000682ce) list_single_dyc_row_pane_g1

0xd057,	// (0x000682da) list_single_dyc_row_pane_g2_ParamLimits

0xd057,	// (0x000682da) list_single_dyc_row_pane_g2

0xd063,	// (0x000682e6) list_single_dyc_row_pane_g3_ParamLimits

0xd063,	// (0x000682e6) list_single_dyc_row_pane_g3

0xd06f,	// (0x000682f2) list_single_dyc_row_pane_g4_ParamLimits

0xd06f,	// (0x000682f2) list_single_dyc_row_pane_g4

0x0003,

0xfc85,	// (0x0006af08) list_single_dyc_row_pane_g_ParamLimits

0xfc85,	// (0x0006af08) list_single_dyc_row_pane_g

0xd07b,	// (0x000682fe) list_single_dyc_row_text_pane_ParamLimits

0xd07b,	// (0x000682fe) list_single_dyc_row_text_pane

0x0e6a,	// (0x0005c0ed) bg_sp_fs_scroll_pane

0xf0c8,	// (0x0006a34b) thumb_sp_fs_scroll_pane

0x6eaa,	// (0x0006212d) list_medium_line_g1_ParamLimits

0x6eaa,	// (0x0006212d) list_medium_line_g1

0xd09a,	// (0x0006831d) list_medium_line_t1_ParamLimits

0xd09a,	// (0x0006831d) list_medium_line_t1

0x1c13,	// (0x0005ce96) list_medium_line_x2_g1_ParamLimits

0x1c13,	// (0x0005ce96) list_medium_line_x2_g1

0x1c1f,	// (0x0005cea2) list_medium_line_x2_g2_ParamLimits

0x1c1f,	// (0x0005cea2) list_medium_line_x2_g2

0x0001,

0xfc8e,	// (0x0006af11) list_medium_line_x2_g_ParamLimits

0xfc8e,	// (0x0006af11) list_medium_line_x2_g

0xd0af,	// (0x00068332) list_medium_line_x2_t1_ParamLimits

0xd0af,	// (0x00068332) list_medium_line_x2_t1

0x1c13,	// (0x0005ce96) list_medium_line_x3_g1_ParamLimits

0x1c13,	// (0x0005ce96) list_medium_line_x3_g1

0x1c1f,	// (0x0005cea2) list_medium_line_x3_g2_ParamLimits

0x1c1f,	// (0x0005cea2) list_medium_line_x3_g2

0x0001,

0xfc8e,	// (0x0006af11) list_medium_line_x3_g_ParamLimits

0xfc8e,	// (0x0006af11) list_medium_line_x3_g

0xd0af,	// (0x00068332) list_medium_line_x3_t1_ParamLimits

0xd0af,	// (0x00068332) list_medium_line_x3_t1

0xf0d1,	// (0x0006a354) thumb_sp_fs_scroll_pane_g1

0xf0da,	// (0x0006a35d) thumb_sp_fs_scroll_pane_g2

0xf0e3,	// (0x0006a366) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0b65,	// (0x0005bde8) thumb_sp_fs_scroll_pane_g

0xf0d1,	// (0x0006a354) bg_sp_fs_scroll_pane_g1

0xf0da,	// (0x0006a35d) bg_sp_fs_scroll_pane_g2

0xf0e3,	// (0x0006a366) bg_sp_fs_scroll_pane_g3

0x0002,

0x0b65,	// (0x0005bde8) bg_sp_fs_scroll_pane_g

0x1c13,	// (0x0005ce96) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1c13,	// (0x0005ce96) list_medium_line_x2_t3_g4_g1

0x1c9d,	// (0x0005cf20) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1c9d,	// (0x0005cf20) list_medium_line_x2_t3_g4_g2

0x1c1f,	// (0x0005cea2) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1c1f,	// (0x0005cea2) list_medium_line_x2_t3_g4_g3

0x1c2b,	// (0x0005ceae) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1c2b,	// (0x0005ceae) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0006a569) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0006a569) list_medium_line_x2_t3_g4_g

0x8923,	// (0x00063ba6) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8923,	// (0x00063ba6) list_medium_line_x2_t3_g4_t1

0x893d,	// (0x00063bc0) list_medium_line_x2_t3_g4_t2_ParamLimits

0x893d,	// (0x00063bc0) list_medium_line_x2_t3_g4_t2

0x1c60,	// (0x0005cee3) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1c60,	// (0x0005cee3) list_medium_line_x2_t3_g4_t3

0x0002,

0xfc93,	// (0x0006af16) list_medium_line_x2_t3_g4_t_ParamLimits

0xfc93,	// (0x0006af16) list_medium_line_x2_t3_g4_t

0x6eaa,	// (0x0006212d) list_medium_line_g2_g1_ParamLimits

0x6eaa,	// (0x0006212d) list_medium_line_g2_g1

0x6eb6,	// (0x00062139) list_medium_line_g2_g2_ParamLimits

0x6eb6,	// (0x00062139) list_medium_line_g2_g2

0x0001,

0xfa0c,	// (0x0006ac8f) list_medium_line_g2_g_ParamLimits

0xfa0c,	// (0x0006ac8f) list_medium_line_g2_g

0xd0c5,	// (0x00068348) list_medium_line_g2_t1_ParamLimits

0xd0c5,	// (0x00068348) list_medium_line_g2_t1

0x6eaa,	// (0x0006212d) list_medium_line_t3_g2_g1_ParamLimits

0x6eaa,	// (0x0006212d) list_medium_line_t3_g2_g1

0x6eb6,	// (0x00062139) list_medium_line_t3_g2_g2_ParamLimits

0x6eb6,	// (0x00062139) list_medium_line_t3_g2_g2

0x0001,

0xfa0c,	// (0x0006ac8f) list_medium_line_t3_g2_g_ParamLimits

0xfa0c,	// (0x0006ac8f) list_medium_line_t3_g2_g

0x8956,	// (0x00063bd9) list_medium_line_t3_g2_t1_ParamLimits

0x8956,	// (0x00063bd9) list_medium_line_t3_g2_t1

0x896d,	// (0x00063bf0) list_medium_line_t3_g2_t2_ParamLimits

0x896d,	// (0x00063bf0) list_medium_line_t3_g2_t2

0x8982,	// (0x00063c05) list_medium_line_t3_g2_t3_ParamLimits

0x8982,	// (0x00063c05) list_medium_line_t3_g2_t3

0x0002,

0xfc9a,	// (0x0006af1d) list_medium_line_t3_g2_t_ParamLimits

0xfc9a,	// (0x0006af1d) list_medium_line_t3_g2_t

0x86b8,	// (0x0006393b) list_medium_line_right_icon_g1

0xd0da,	// (0x0006835d) list_medium_line_right_icon_t1

0x6eaa,	// (0x0006212d) list_medium_line_t2_g1_ParamLimits

0x6eaa,	// (0x0006212d) list_medium_line_t2_g1

0x899b,	// (0x00063c1e) list_medium_line_t2_t1_ParamLimits

0x899b,	// (0x00063c1e) list_medium_line_t2_t1

0x89b2,	// (0x00063c35) list_medium_line_t2_t2_ParamLimits

0x89b2,	// (0x00063c35) list_medium_line_t2_t2

0x0001,

0xfca1,	// (0x0006af24) list_medium_line_t2_t_ParamLimits

0xfca1,	// (0x0006af24) list_medium_line_t2_t

0x6eaa,	// (0x0006212d) list_medium_line_t3_g1_ParamLimits

0x6eaa,	// (0x0006212d) list_medium_line_t3_g1

0x89c6,	// (0x00063c49) list_medium_line_t3_t1_ParamLimits

0x89c6,	// (0x00063c49) list_medium_line_t3_t1

0x89dd,	// (0x00063c60) list_medium_line_t3_t2_ParamLimits

0x89dd,	// (0x00063c60) list_medium_line_t3_t2

0x89f2,	// (0x00063c75) list_medium_line_t3_t3_ParamLimits

0x89f2,	// (0x00063c75) list_medium_line_t3_t3

0x0002,

0xfca6,	// (0x0006af29) list_medium_line_t3_t_ParamLimits

0xfca6,	// (0x0006af29) list_medium_line_t3_t

0x6eaa,	// (0x0006212d) list_medium_line_g3_g1_ParamLimits

0x6eaa,	// (0x0006212d) list_medium_line_g3_g1

0xd0e8,	// (0x0006836b) list_medium_line_g3_g2_ParamLimits

0xd0e8,	// (0x0006836b) list_medium_line_g3_g2

0x6eb6,	// (0x00062139) list_medium_line_g3_g3_ParamLimits

0x6eb6,	// (0x00062139) list_medium_line_g3_g3

0x0002,

0xfcad,	// (0x0006af30) list_medium_line_g3_g_ParamLimits

0xfcad,	// (0x0006af30) list_medium_line_g3_g

0xd0f4,	// (0x00068377) list_medium_line_g3_t1_ParamLimits

0xd0f4,	// (0x00068377) list_medium_line_g3_t1

0x6eaa,	// (0x0006212d) list_medium_line_t2_g3_g1_ParamLimits

0x6eaa,	// (0x0006212d) list_medium_line_t2_g3_g1

0xd0e8,	// (0x0006836b) list_medium_line_t2_g3_g2_ParamLimits

0xd0e8,	// (0x0006836b) list_medium_line_t2_g3_g2

0x6eb6,	// (0x00062139) list_medium_line_t2_g3_g3_ParamLimits

0x6eb6,	// (0x00062139) list_medium_line_t2_g3_g3

0x0002,

0xfcad,	// (0x0006af30) list_medium_line_t2_g3_g_ParamLimits

0xfcad,	// (0x0006af30) list_medium_line_t2_g3_g

0x8a04,	// (0x00063c87) list_medium_line_t2_g3_t1_ParamLimits

0x8a04,	// (0x00063c87) list_medium_line_t2_g3_t1

0x8a1e,	// (0x00063ca1) list_medium_line_t2_g3_t2_ParamLimits

0x8a1e,	// (0x00063ca1) list_medium_line_t2_g3_t2

0x0001,

0xfcb4,	// (0x0006af37) list_medium_line_t2_g3_t_ParamLimits

0xfcb4,	// (0x0006af37) list_medium_line_t2_g3_t

0x6eaa,	// (0x0006212d) list_medium_line_t3_g3_g1_ParamLimits

0x6eaa,	// (0x0006212d) list_medium_line_t3_g3_g1

0xd0e8,	// (0x0006836b) list_medium_line_t3_g3_g2_ParamLimits

0xd0e8,	// (0x0006836b) list_medium_line_t3_g3_g2

0x6eb6,	// (0x00062139) list_medium_line_t3_g3_g3_ParamLimits

0x6eb6,	// (0x00062139) list_medium_line_t3_g3_g3

0x0002,

0xfcad,	// (0x0006af30) list_medium_line_t3_g3_g_ParamLimits

0xfcad,	// (0x0006af30) list_medium_line_t3_g3_g

0x8a39,	// (0x00063cbc) list_medium_line_t3_g3_t1_ParamLimits

0x8a39,	// (0x00063cbc) list_medium_line_t3_g3_t1

0x8a4d,	// (0x00063cd0) list_medium_line_t3_g3_t2_ParamLimits

0x8a4d,	// (0x00063cd0) list_medium_line_t3_g3_t2

0x8a5f,	// (0x00063ce2) list_medium_line_t3_g3_t3_ParamLimits

0x8a5f,	// (0x00063ce2) list_medium_line_t3_g3_t3

0x0002,

0xfcb9,	// (0x0006af3c) list_medium_line_t3_g3_t_ParamLimits

0xfcb9,	// (0x0006af3c) list_medium_line_t3_g3_t

0xd008,	// (0x0006828b) list_medium_line_right_iconx2_g1

0x86b8,	// (0x0006393b) list_medium_line_right_iconx2_g2

0x0001,

0xfcc0,	// (0x0006af43) list_medium_line_right_iconx2_g

0xd109,	// (0x0006838c) list_medium_line_right_iconx2_t1

0xd008,	// (0x0006828b) list_medium_line_t2_right_iconx2_g1

0x86b8,	// (0x0006393b) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcc0,	// (0x0006af43) list_medium_line_t2_right_iconx2_g

0x8a73,	// (0x00063cf6) list_medium_line_t2_right_iconx2_t1

0x8a83,	// (0x00063d06) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfcc5,	// (0x0006af48) list_medium_line_t2_right_iconx2_t

0xd117,	// (0x0006839a) list_medium_line_x4_t4_t1

0x8a95,	// (0x00063d18) list_medium_line_x4_t4_t2

0x8aa5,	// (0x00063d28) list_medium_line_x4_t4_t3

0x8ab5,	// (0x00063d38) list_medium_line_x4_t4_t4

0x0003,

0xfcca,	// (0x0006af4d) list_medium_line_x4_t4_t

0x8b08,	// (0x00063d8b) tport_appsw_pane_ParamLimits

0x8b08,	// (0x00063d8b) tport_appsw_pane

0x8b19,	// (0x00063d9c) tport_contact_pane_ParamLimits

0x8b19,	// (0x00063d9c) tport_contact_pane

0x8b32,	// (0x00063db5) tport_listscroll_pane_ParamLimits

0x8b32,	// (0x00063db5) tport_listscroll_pane

0x8b4d,	// (0x00063dd0) cell_tport_appsw_pane_ParamLimits

0x8b4d,	// (0x00063dd0) cell_tport_appsw_pane

0xe12a,	// (0x000693ad) tport_appsw_pane_g1_ParamLimits

0xe12a,	// (0x000693ad) tport_appsw_pane_g1

0xd125,	// (0x000683a8) tport_contact_pane_g1

0xd12e,	// (0x000683b1) tport_contact_pane_t1

0xd13c,	// (0x000683bf) tport_contact_pane_t2

0x0001,

0xfcd3,	// (0x0006af56) tport_contact_pane_t

0xd14a,	// (0x000683cd) list_tport_pane

0xd153,	// (0x000683d6) scroll_pane_cp_030

0xd164,	// (0x000683e7) cell_tport_appsw_pane_g1

0xd174,	// (0x000683f7) cell_tport_appsw_pane_t1

0x0e6a,	// (0x0005c0ed) grid_highlight_pane_cp019

0x8b8d,	// (0x00063e10) list_tport_double_graphic_pane_ParamLimits

0x8b8d,	// (0x00063e10) list_tport_double_graphic_pane

0x99c1,	// (0x00064c44) list_highlight_pane_cp023_ParamLimits

0x99c1,	// (0x00064c44) list_highlight_pane_cp023

0x8b9a,	// (0x00063e1d) list_tport_double_graphic_pane_g1_ParamLimits

0x8b9a,	// (0x00063e1d) list_tport_double_graphic_pane_g1

0x8ba7,	// (0x00063e2a) list_tport_double_graphic_pane_t1_ParamLimits

0x8ba7,	// (0x00063e2a) list_tport_double_graphic_pane_t1

0x8bbc,	// (0x00063e3f) list_tport_double_graphic_pane_t2_ParamLimits

0x8bbc,	// (0x00063e3f) list_tport_double_graphic_pane_t2

0x0001,

0xfcdf,	// (0x0006af62) list_tport_double_graphic_pane_t_ParamLimits

0xfcdf,	// (0x0006af62) list_tport_double_graphic_pane_t

0x0e6a,	// (0x0005c0ed) main_cale_note_pane

0x65ff,	// (0x00061882) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x65ff,	// (0x00061882) cell_vitu2_function_top_wide_pane_cp01

0x80e4,	// (0x00063367) wait_bar_pane_cp05_ParamLimits

0x0e6a,	// (0x0005c0ed) listscroll_cmail_pane

0xd18a,	// (0x0006840d) list_cmail_pane

0x8bd8,	// (0x00063e5b) list_cmail_body_pane

0x8bed,	// (0x00063e70) list_single_cmail_header_caption_pane

0x8c06,	// (0x00063e89) list_single_cmail_header_detail_pane_ParamLimits

0x8c06,	// (0x00063e89) list_single_cmail_header_detail_pane

0x8c2f,	// (0x00063eb2) list_single_cmail_header_caption_pane_t1

0x8c3f,	// (0x00063ec2) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8c3f,	// (0x00063ec2) list_single_cmail_header_detail_pane_g1

0xd1aa,	// (0x0006842d) list_single_cmail_header_detail_pane_g2_ParamLimits

0xd1aa,	// (0x0006842d) list_single_cmail_header_detail_pane_g2

0x0002,

0xfce4,	// (0x0006af67) list_single_cmail_header_detail_pane_g_ParamLimits

0xfce4,	// (0x0006af67) list_single_cmail_header_detail_pane_g

0xd1c3,	// (0x00068446) list_single_cmail_header_detail_pane_t1_ParamLimits

0xd1c3,	// (0x00068446) list_single_cmail_header_detail_pane_t1

0xd1f5,	// (0x00068478) list_single_cmail_header_editor_pane_bg_ParamLimits

0xd1f5,	// (0x00068478) list_single_cmail_header_editor_pane_bg

0xd207,	// (0x0006848a) list_cmail_body_pane_g1

0xd210,	// (0x00068493) list_cmail_body_pane_t1

0xe14a,	// (0x000693cd) list_single_cmail_header_editor_pane_bg_g1

0xa68d,	// (0x00065910) list_single_cmail_header_editor_pane_bg_g1_copy1

0xe15a,	// (0x000693dd) list_single_cmail_header_editor_pane_bg_g1_copy2

0xe152,	// (0x000693d5) list_single_cmail_header_editor_pane_bg_g1_copy3

0xe36e,	// (0x000695f1) list_single_cmail_header_editor_pane_bg_g1_copy4

0xe17a,	// (0x000693fd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xe16a,	// (0x000693ed) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xe172,	// (0x000693f5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa66d,	// (0x000658f0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8c7d,	// (0x00063f00) calenote_gesture_pane_ParamLimits

0x8c7d,	// (0x00063f00) calenote_gesture_pane

0x8c9d,	// (0x00063f20) calenote_window_pane_ParamLimits

0x8c9d,	// (0x00063f20) calenote_window_pane

0xd21e,	// (0x000684a1) popup_note_window_cp01

0x8cb9,	// (0x00063f3c) calenote_swipe_1_pane_ParamLimits

0x8cb9,	// (0x00063f3c) calenote_swipe_1_pane

0x8660,	// (0x000638e3) calenote_swipe_2_pane_ParamLimits

0x8660,	// (0x000638e3) calenote_swipe_2_pane

0xef73,	// (0x0006a1f6) calenote_swipe_1_pane_g1_ParamLimits

0xef73,	// (0x0006a1f6) calenote_swipe_1_pane_g1

0xef80,	// (0x0006a203) calenote_swipe_1_pane_g2_ParamLimits

0xef80,	// (0x0006a203) calenote_swipe_1_pane_g2

0x0001,

0x0aec,	// (0x0005bd6f) calenote_swipe_1_pane_g_ParamLimits

0x0aec,	// (0x0005bd6f) calenote_swipe_1_pane_g

0xd230,	// (0x000684b3) calenote_swipe_1_pane_t1_ParamLimits

0xd230,	// (0x000684b3) calenote_swipe_1_pane_t1

0xef73,	// (0x0006a1f6) calenote_swipe_2_pane_g1_ParamLimits

0xef73,	// (0x0006a1f6) calenote_swipe_2_pane_g1

0xd24f,	// (0x000684d2) calenote_swipe_2_pane_g2_ParamLimits

0xd24f,	// (0x000684d2) calenote_swipe_2_pane_g2

0x0001,

0xfcf0,	// (0x0006af73) calenote_swipe_2_pane_g_ParamLimits

0xfcf0,	// (0x0006af73) calenote_swipe_2_pane_g

0xd25b,	// (0x000684de) calenote_swipe_2_pane_t1_ParamLimits

0xd25b,	// (0x000684de) calenote_swipe_2_pane_t1

0x0e6a,	// (0x0005c0ed) main_mup_navstr_pane

0x5296,	// (0x00060519) main_mup3_pane_t7_ParamLimits

0x5296,	// (0x00060519) main_mup3_pane_t7

0xdc02,	// (0x00068e85) main_mp4_pane_g6_ParamLimits

0xdc02,	// (0x00068e85) main_mp4_pane_g6

0xdda6,	// (0x00069029) main_image3_pane_t4_ParamLimits

0xdda6,	// (0x00069029) main_image3_pane_t4

0x8cce,	// (0x00063f51) popup_navstr_preview_pane_ParamLimits

0x8cce,	// (0x00063f51) popup_navstr_preview_pane

0x8ce2,	// (0x00063f65) scroll_navstr_pane_ParamLimits

0x8ce2,	// (0x00063f65) scroll_navstr_pane

0x0e6a,	// (0x0005c0ed) bg_popup_preview_window_pane_cp04

0xd282,	// (0x00068505) popup_navstr_preview_pane_t1

0x8cf6,	// (0x00063f79) scroll_navstr_pane_g1_ParamLimits

0x8cf6,	// (0x00063f79) scroll_navstr_pane_g1

0x8d0a,	// (0x00063f8d) scroll_navstr_pane_t1_ParamLimits

0x8d0a,	// (0x00063f8d) scroll_navstr_pane_t1

0xd227,	// (0x000684aa) bg_button_pane_cp014

0xd227,	// (0x000684aa) bg_button_pane_cp030

0x84fe,	// (0x00063781) list_double_fisheye_pane_g4_ParamLimits

0x84fe,	// (0x00063781) list_double_fisheye_pane_g4

0x850a,	// (0x0006378d) list_double_fisheye_pane_g5_ParamLimits

0x850a,	// (0x0006378d) list_double_fisheye_pane_g5

0xd192,	// (0x00068415) sp_fs_scroll_pane_cp03

0xcf88,	// (0x0006820b) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xf066,	// (0x0006a2e9) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc37,	// (0x0006aeba) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xf072,	// (0x0006a2f5) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8bce,	// (0x00063e51) sp_fs_scroll_pane_cp02

0xa319,	// (0x0006559c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa319,	// (0x0006559c) popup_sp_fs_calendar_preview_list_single_pane

0x0e6a,	// (0x0005c0ed) main_cam6_pano_pane

0x99c1,	// (0x00064c44) main_mup3_pane_ParamLimits

0x0e6a,	// (0x0005c0ed) main_phacti_pane

0x7fb7,	// (0x0006323a) bg_button_pane_cp11

0x7fd1,	// (0x00063254) main_mobtv_info_pane_g2_ParamLimits

0x7fd1,	// (0x00063254) main_mobtv_info_pane_g2

0x0001,

0xfbc0,	// (0x0006ae43) main_mobtv_info_pane_g_ParamLimits

0xfbc0,	// (0x0006ae43) main_mobtv_info_pane_g

0x81ae,	// (0x00063431) sc_clock_pane_t5_ParamLimits

0x81ae,	// (0x00063431) sc_clock_pane_t5

0x835a,	// (0x000635dd) main_radioblah_pane_g1_ParamLimits

0xeebf,	// (0x0006a142) main_radioblah_pane_t3_ParamLimits

0xeebf,	// (0x0006a142) main_radioblah_pane_t3

0xeed7,	// (0x0006a15a) main_radioblah_pane_t4_ParamLimits

0xeed7,	// (0x0006a15a) main_radioblah_pane_t4

0x8382,	// (0x00063605) main_radioblah_text_pane_ParamLimits

0x8382,	// (0x00063605) main_radioblah_text_pane

0x8394,	// (0x00063617) main_radioblah_info_pane_g1_ParamLimits

0x842f,	// (0x000636b2) main_radioblah_info_pane_t4_ParamLimits

0x842f,	// (0x000636b2) main_radioblah_info_pane_t4

0x99c1,	// (0x00064c44) main_sp_fs_calendar_pane

0x8d20,	// (0x00063fa3) main_phacti_pane_g1

0x8d28,	// (0x00063fab) phacti_note_pane_ParamLimits

0x8d28,	// (0x00063fab) phacti_note_pane

0xd299,	// (0x0006851c) phacti_term_pane_ParamLimits

0xd299,	// (0x0006851c) phacti_term_pane

0xd2ae,	// (0x00068531) phacti_note_pane_t1_ParamLimits

0xd2ae,	// (0x00068531) phacti_note_pane_t1

0xd2c5,	// (0x00068548) phacti_term_pane_g1

0xd2cd,	// (0x00068550) phacti_term_pane_t1_ParamLimits

0xd2cd,	// (0x00068550) phacti_term_pane_t1

0xd2f7,	// (0x0006857a) popup_sp_fs_calendar_preview_list_single_pane_g1

0xd2ff,	// (0x00068582) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcfa,	// (0x0006af7d) popup_sp_fs_calendar_preview_list_single_pane_g

0xd307,	// (0x0006858a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xd307,	// (0x0006858a) popup_sp_fs_calendar_preview_list_single_pane_t1

0xd31d,	// (0x000685a0) aid_popup_sp_fs_bg_corner_pane

0xc711,	// (0x00067994) popup_sp_fs_calendar_preview_bg_pane_g1

0x0e6a,	// (0x0005c0ed) popup_sp_fs_calendar_preview_bg_pane

0xd325,	// (0x000685a8) popup_sp_fs_calendar_preview_list_pane

0x99c1,	// (0x00064c44) bg_main_sp_fs_cale_pane_ParamLimits

0x99c1,	// (0x00064c44) bg_main_sp_fs_cale_pane

0xd32d,	// (0x000685b0) listscroll_cale_mrui_pane_ParamLimits

0xd32d,	// (0x000685b0) listscroll_cale_mrui_pane

0xd341,	// (0x000685c4) listscroll_sp_fs_schedule_track_pane

0xd34a,	// (0x000685cd) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xd34a,	// (0x000685cd) main_sp_fs_ctrlbar_pane_cp01

0xd35b,	// (0x000685de) main_sp_fs_ribbon_pane

0xd363,	// (0x000685e6) popup_sp_fs_cale_preview_window

0x8d83,	// (0x00064006) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8d83,	// (0x00064006) list_single_sp_fs_schedule_track_pane

0x99c1,	// (0x00064c44) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x99c1,	// (0x00064c44) bg_sp_fs_highlight_list_pane_cp03

0x8d98,	// (0x0006401b) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8d98,	// (0x0006401b) list_single_sp_fs_schedule_track_pane_g1

0x8da4,	// (0x00064027) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8da4,	// (0x00064027) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcff,	// (0x0006af82) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcff,	// (0x0006af82) list_single_sp_fs_schedule_track_pane_g

0x8db0,	// (0x00064033) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8db0,	// (0x00064033) list_single_sp_fs_schedule_track_pane_t1

0x8dca,	// (0x0006404d) sp_fs_schedule_track_pane_ParamLimits

0x8dca,	// (0x0006404d) sp_fs_schedule_track_pane

0xd375,	// (0x000685f8) sp_fs_schedule_track_pane_g1

0xd37d,	// (0x00068600) sp_fs_schedule_track_pane_g2

0xd385,	// (0x00068608) sp_fs_schedule_track_pane_g3

0xd38d,	// (0x00068610) sp_fs_schedule_track_pane_g4

0xd395,	// (0x00068618) sp_fs_schedule_track_pane_g5

0x0004,

0xfd04,	// (0x0006af87) sp_fs_schedule_track_pane_g

0xe14a,	// (0x000693cd) bg_sp_fs_schedule_viewer_highlight_g1

0xa68d,	// (0x00065910) bg_sp_fs_schedule_viewer_highlight_g2

0xe152,	// (0x000693d5) bg_sp_fs_schedule_viewer_highlight_g3

0xe15a,	// (0x000693dd) bg_sp_fs_schedule_viewer_highlight_g4

0xe36e,	// (0x000695f1) bg_sp_fs_schedule_viewer_highlight_g5

0xe16a,	// (0x000693ed) bg_sp_fs_schedule_viewer_highlight_g6

0xe172,	// (0x000693f5) bg_sp_fs_schedule_viewer_highlight_g7

0xe17a,	// (0x000693fd) bg_sp_fs_schedule_viewer_highlight_g8

0xa66d,	// (0x000658f0) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd0f,	// (0x0006af92) bg_sp_fs_schedule_viewer_highlight_g

0x0e6a,	// (0x0005c0ed) bg_main_sp_fs_ribbon_pane

0x8ddb,	// (0x0006405e) main_sp_fs_ribbon_pane_g1

0xd39d,	// (0x00068620) main_sp_fs_ribbon_pane_t1

0x8de4,	// (0x00064067) main_sp_fs_ribbon_pane_t2

0xd3ac,	// (0x0006862f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd22,	// (0x0006afa5) main_sp_fs_ribbon_pane_t

0xd3bb,	// (0x0006863e) main_sp_fs_ribbon_scheduler_pane

0xd3c3,	// (0x00068646) bg_main_sp_fs_ribbon_pane_g1

0xd3cc,	// (0x0006864f) bg_main_sp_fs_ribbon_pane_g2

0xd3d5,	// (0x00068658) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd29,	// (0x0006afac) bg_main_sp_fs_ribbon_pane_g

0xd3dd,	// (0x00068660) main_sp_fs_ribbon_scheduler_pane_g1

0xd3e6,	// (0x00068669) main_sp_fs_ribbon_scheduler_pane_g2

0xd3ef,	// (0x00068672) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd30,	// (0x0006afb3) main_sp_fs_ribbon_scheduler_pane_g

0xd3f8,	// (0x0006867b) list_cale_mrui_pane

0x8df3,	// (0x00064076) sp_fs_scroll_pane_cp07_ParamLimits

0x8df3,	// (0x00064076) sp_fs_scroll_pane_cp07

0x8e07,	// (0x0006408a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8e07,	// (0x0006408a) bg_sp_fs_schedule_viewer_highlight

0xd401,	// (0x00068684) list_single_sp_fs_schedule_track_pane_cp01

0xd409,	// (0x0006868c) list_sp_fs_schedule_track_pane

0xd411,	// (0x00068694) sp_fs_scroll_pane_cp06_ParamLimits

0xd411,	// (0x00068694) sp_fs_scroll_pane_cp06

0xc711,	// (0x00067994) bgmain_sp_fs_calendar_pane_g1

0x8e17,	// (0x0006409a) list_single_cale_mrui_pane_ParamLimits

0x8e17,	// (0x0006409a) list_single_cale_mrui_pane

0xd423,	// (0x000686a6) list_single_cale_mrui_row_pane_ParamLimits

0xd423,	// (0x000686a6) list_single_cale_mrui_row_pane

0xd430,	// (0x000686b3) list_single_cale_mrui_row_pane_g1_ParamLimits

0xd430,	// (0x000686b3) list_single_cale_mrui_row_pane_g1

0xd468,	// (0x000686eb) list_single_cale_mrui_row_pane_t1_ParamLimits

0xd468,	// (0x000686eb) list_single_cale_mrui_row_pane_t1

0x8e39,	// (0x000640bc) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8e39,	// (0x000640bc) list_single_cale_mrui_row_pane_t2

0xd47a,	// (0x000686fd) list_single_cale_mrui_row_pane_t3_ParamLimits

0xd47a,	// (0x000686fd) list_single_cale_mrui_row_pane_t3

0xd4a9,	// (0x0006872c) list_single_cale_mrui_row_pane_t4_ParamLimits

0xd4a9,	// (0x0006872c) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd3c,	// (0x0006afbf) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd3c,	// (0x0006afbf) list_single_cale_mrui_row_pane_t

0x8ea1,	// (0x00064124) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8ea1,	// (0x00064124) list_single_cmail_header_editor_pane_bg_cp01

0x8ec7,	// (0x0006414a) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8ec7,	// (0x0006414a) list_single_cmail_header_editor_pane_bg_cp02

0x8ee7,	// (0x0006416a) main_radioblah_text_pane_t1_ParamLimits

0x8ee7,	// (0x0006416a) main_radioblah_text_pane_t1

0xd4d8,	// (0x0006875b) cam6_indi_pane_cp01

0xd4e0,	// (0x00068763) cam6_mode_pane_cp01

0xd4e8,	// (0x0006876b) cam6_pano_pane

0xd4f1,	// (0x00068774) cam6_zoom_pane_cp01

0xd4f9,	// (0x0006877c) cam6_pano_image_pane

0xd504,	// (0x00068787) cam6_pano_pane_g1

0xed59,	// (0x00069fdc) cam6_pano_pane_g2

0xd50d,	// (0x00068790) cam6_pano_pane_g3

0xd516,	// (0x00068799) cam6_pano_pane_g4

0xcc97,	// (0x00067f1a) cam6_pano_pane_g5

0xd51f,	// (0x000687a2) cam6_pano_pane_g6

0xd529,	// (0x000687ac) cam6_pano_pane_g7

0xd531,	// (0x000687b4) cam6_pano_pane_g8

0xd53a,	// (0x000687bd) cam6_pano_pane_g9

0x0008,

0xfd45,	// (0x0006afc8) cam6_pano_pane_g

0x0e6a,	// (0x0005c0ed) main_browser_tag_pane

0xd27a,	// (0x000684fd) grid_navstr_albumart_pane

0xd545,	// (0x000687c8) cell_navstr_albumart_pane_ParamLimits

0xd545,	// (0x000687c8) cell_navstr_albumart_pane

0xaf21,	// (0x000661a4) cell_navstr_albumart_pane_g1

0xc01e,	// (0x000672a1) cell_navstr_albumart_pane_g2

0xc02e,	// (0x000672b1) cell_navstr_albumart_pane_g3

0xc026,	// (0x000672a9) cell_navstr_albumart_pane_g4

0x0003,

0xfd58,	// (0x0006afdb) cell_navstr_albumart_pane_g

0x8f02,	// (0x00064185) bt_list_pane_ParamLimits

0x8f02,	// (0x00064185) bt_list_pane

0x8f17,	// (0x0006419a) bt_list_pane_t1

0x8f26,	// (0x000641a9) bt_list_pane_t2

0x0001,

0xfd61,	// (0x0006afe4) bt_list_pane_t

0x0e6a,	// (0x0005c0ed) main_cale_prevew_pane

0x8f35,	// (0x000641b8) popup_cale_preview_window_ParamLimits

0x8f35,	// (0x000641b8) popup_cale_preview_window

0x99c1,	// (0x00064c44) bg_popup_preview_window_pane_cp05_ParamLimits

0x99c1,	// (0x00064c44) bg_popup_preview_window_pane_cp05

0xd567,	// (0x000687ea) list_cale_preview_pane_ParamLimits

0xd567,	// (0x000687ea) list_cale_preview_pane

0x8f4c,	// (0x000641cf) list_double_cale_preview_pane_ParamLimits

0x8f4c,	// (0x000641cf) list_double_cale_preview_pane

0x8f5e,	// (0x000641e1) list_single_cale_preview_pane_ParamLimits

0x8f5e,	// (0x000641e1) list_single_cale_preview_pane

0x8f72,	// (0x000641f5) list_single_cale_preview_pane_g1

0x8f7a,	// (0x000641fd) list_single_cale_preview_pane_t1_ParamLimits

0x8f7a,	// (0x000641fd) list_single_cale_preview_pane_t1

0x8f8f,	// (0x00064212) list_double_cale_preview_pane_g1

0x8f97,	// (0x0006421a) list_double_cale_preview_pane_t1_ParamLimits

0x8f97,	// (0x0006421a) list_double_cale_preview_pane_t1

0x8fac,	// (0x0006422f) list_double_cale_preview_pane_t2_ParamLimits

0x8fac,	// (0x0006422f) list_double_cale_preview_pane_t2

0x0001,

0xfd66,	// (0x0006afe9) list_double_cale_preview_pane_t_ParamLimits

0xfd66,	// (0x0006afe9) list_double_cale_preview_pane_t

0x0e6a,	// (0x0005c0ed) main_ezdial_pane

0x99c1,	// (0x00064c44) main_sp_fs_email_pane_ParamLimits

0x86e2,	// (0x00063965) cmail_ddmenu_btn01_pane_ParamLimits

0x86e2,	// (0x00063965) cmail_ddmenu_btn01_pane

0x86f5,	// (0x00063978) cmail_ddmenu_btn02_pane_ParamLimits

0x86f5,	// (0x00063978) cmail_ddmenu_btn02_pane

0x8718,	// (0x0006399b) cmail_ddmenu_btn03_pane_ParamLimits

0x8718,	// (0x0006399b) cmail_ddmenu_btn03_pane

0x873e,	// (0x000639c1) main_sp_fs_ctrlbar_pane_ParamLimits

0x8762,	// (0x000639e5) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8bd8,	// (0x00063e5b) list_cmail_body_pane_ParamLimits

0xd1a1,	// (0x00068424) bg_button_pane_cp12

0xd1b6,	// (0x00068439) list_single_cmail_header_detail_pane_g3_ParamLimits

0xd1b6,	// (0x00068439) list_single_cmail_header_detail_pane_g3

0x8c57,	// (0x00063eda) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8c57,	// (0x00063eda) list_single_cmail_header_detail_pane_t2

0x0001,

0xfceb,	// (0x0006af6e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfceb,	// (0x0006af6e) list_single_cmail_header_detail_pane_t

0xd2e2,	// (0x00068565) phacti_term_pane_t2_ParamLimits

0xd2e2,	// (0x00068565) phacti_term_pane_t2

0x0001,

0xfcf5,	// (0x0006af78) phacti_term_pane_t_ParamLimits

0xfcf5,	// (0x0006af78) phacti_term_pane_t

0xd573,	// (0x000687f6) aid_size_list_single_double

0x8fc4,	// (0x00064247) popup_ezdial_listscroll_window

0x8fe0,	// (0x00064263) popup_number_entry_window_cp01

0xada0,	// (0x00066023) bg_popup_call_pane_cp09

0xd57f,	// (0x00068802) ezdial_list_pane

0xd587,	// (0x0006880a) scroll_pane_cp23

0xc209,	// (0x0006748c) bg_button_pane_cp028_ParamLimits

0xc209,	// (0x0006748c) bg_button_pane_cp028

0x8fee,	// (0x00064271) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8fee,	// (0x00064271) cmail_ddmenu_btn01_pane_g1

0x8ffa,	// (0x0006427d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8ffa,	// (0x0006427d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd6b,	// (0x0006afee) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd6b,	// (0x0006afee) cmail_ddmenu_btn01_pane_g

0xd58f,	// (0x00068812) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd58f,	// (0x00068812) cmail_ddmenu_btn01_pane_t1

0xc209,	// (0x0006748c) bg_button_pane_cp029_ParamLimits

0xc209,	// (0x0006748c) bg_button_pane_cp029

0x9006,	// (0x00064289) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9006,	// (0x00064289) cmail_ddmenu_btn02_pane_g1

0x901e,	// (0x000642a1) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x901e,	// (0x000642a1) cmail_ddmenu_btn02_pane_t1

0x99c1,	// (0x00064c44) bg_button_pane_cp031_ParamLimits

0x99c1,	// (0x00064c44) bg_button_pane_cp031

0x9006,	// (0x00064289) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9006,	// (0x00064289) cmail_ddmenu_btn03_pane_g1

0x901e,	// (0x000642a1) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x901e,	// (0x000642a1) cmail_ddmenu_btn03_pane_t1

0x5e13,	// (0x00061096) cell_dialer2_keypad_pane_t1_ParamLimits

0x5e2d,	// (0x000610b0) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5e2d,	// (0x000610b0) cell_dialer2_keypad_pane_t1_copy1

0x7e2b,	// (0x000630ae) ncimui_group_button_pane

0x99c1,	// (0x00064c44) main_sp_fs_calendar_pane_ParamLimits

0x8bed,	// (0x00063e70) list_single_cmail_header_caption_pane_ParamLimits

0x75a1,	// (0x00062824) aid_recal_txt_sm_pane

0x0e6a,	// (0x0005c0ed) mian_recal_day_pane

0xd363,	// (0x000685e6) popup_sp_fs_cale_preview_window_ParamLimits

0x0e6a,	// (0x0005c0ed) list_recal_day_pane

0xd5bd,	// (0x00068840) list_single_recal_day_pane_ParamLimits

0xd5bd,	// (0x00068840) list_single_recal_day_pane

0xd5cf,	// (0x00068852) list_single_recal_day_pane_g1_ParamLimits

0xd5cf,	// (0x00068852) list_single_recal_day_pane_g1

0xd5db,	// (0x0006885e) list_single_recal_day_pane_g2_ParamLimits

0xd5db,	// (0x0006885e) list_single_recal_day_pane_g2

0xd5ea,	// (0x0006886d) list_single_recal_day_pane_g3_ParamLimits

0xd5ea,	// (0x0006886d) list_single_recal_day_pane_g3

0x9042,	// (0x000642c5) list_single_recal_day_pane_g4_ParamLimits

0x9042,	// (0x000642c5) list_single_recal_day_pane_g4

0xd5f6,	// (0x00068879) list_single_recal_day_pane_g5_ParamLimits

0xd5f6,	// (0x00068879) list_single_recal_day_pane_g5

0xd605,	// (0x00068888) list_single_recal_day_pane_g6_ParamLimits

0xd605,	// (0x00068888) list_single_recal_day_pane_g6

0x0005,

0xfd7a,	// (0x0006affd) list_single_recal_day_pane_g_ParamLimits

0xfd7a,	// (0x0006affd) list_single_recal_day_pane_g

0xd611,	// (0x00068894) list_single_recal_day_pane_t1

0xd61f,	// (0x000688a2) list_single_recal_day_pane_t2

0x0001,

0xfd87,	// (0x0006b00a) list_single_recal_day_pane_t

0x9055,	// (0x000642d8) ncimui_query_button_pane_ParamLimits

0x9055,	// (0x000642d8) ncimui_query_button_pane

0x9065,	// (0x000642e8) ncimui_query_button_pane_t1_ParamLimits

0x9065,	// (0x000642e8) ncimui_query_button_pane_t1

0xd62d,	// (0x000688b0) ncimui_query_button_pane_t2_ParamLimits

0xd62d,	// (0x000688b0) ncimui_query_button_pane_t2

0x0001,

0xfd8c,	// (0x0006b00f) ncimui_query_button_pane_t_ParamLimits

0xfd8c,	// (0x0006b00f) ncimui_query_button_pane_t

0x9078,	// (0x000642fb) query_button_pane_ParamLimits

0x9078,	// (0x000642fb) query_button_pane

0x0e6a,	// (0x0005c0ed) bg_button_pane_cp0028

0xd640,	// (0x000688c3) query_button_pane_t1

0x3eb6,	// (0x0005f139) main_tport_pane_ParamLimits

0x8ac5,	// (0x00063d48) bg_popup_window_pane_cp01_ParamLimits

0x8ac5,	// (0x00063d48) bg_popup_window_pane_cp01

0x8adf,	// (0x00063d62) heading_pane_cp08_ParamLimits

0x8adf,	// (0x00063d62) heading_pane_cp08

0x8af3,	// (0x00063d76) heading_pane_cp07_ParamLimits

0x8af3,	// (0x00063d76) heading_pane_cp07

0xd164,	// (0x000683e7) cell_tport_appsw_pane_g2

0x0002,

0xfcd8,	// (0x0006af5b) cell_tport_appsw_pane_g

0x345f,	// (0x0005e6e2) input_candi_list_open_g1

0xa856,	// (0x00065ad9) list_cale_time_pane_g6_ParamLimits

0xa856,	// (0x00065ad9) list_cale_time_pane_g6

0x4c7f,	// (0x0005ff02) aid_size_touch_calib_1_ParamLimits

0x4c7f,	// (0x0005ff02) aid_size_touch_calib_1

0x4c8b,	// (0x0005ff0e) aid_size_touch_calib_2_ParamLimits

0x4c8b,	// (0x0005ff0e) aid_size_touch_calib_2

0x4ca1,	// (0x0005ff24) aid_size_touch_calib_3_ParamLimits

0x4ca1,	// (0x0005ff24) aid_size_touch_calib_3

0x4cbf,	// (0x0005ff42) aid_size_touch_calib_4_ParamLimits

0x4cbf,	// (0x0005ff42) aid_size_touch_calib_4

0x4cd5,	// (0x0005ff58) main_touch_calib_button_group_pane_ParamLimits

0x4cd5,	// (0x0005ff58) main_touch_calib_button_group_pane

0x4ced,	// (0x0005ff70) main_touch_calib_pane_g1_ParamLimits

0x4cf9,	// (0x0005ff7c) main_touch_calib_pane_g2_ParamLimits

0x4d05,	// (0x0005ff88) main_touch_calib_pane_g3_ParamLimits

0x4d11,	// (0x0005ff94) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x0006a9f8) main_touch_calib_pane_g_ParamLimits

0x4d1d,	// (0x0005ffa0) main_touch_calib_pane_t1_ParamLimits

0x4d37,	// (0x0005ffba) main_touch_calib_pane_t2_ParamLimits

0x4d51,	// (0x0005ffd4) main_touch_calib_pane_t3_ParamLimits

0x4d65,	// (0x0005ffe8) main_touch_calib_pane_t4_ParamLimits

0x4d79,	// (0x0005fffc) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x0006aa01) main_touch_calib_pane_t_ParamLimits

0xca7e,	// (0x00067d01) list_single_fp_cale_pane_g3_ParamLimits

0xca7e,	// (0x00067d01) list_single_fp_cale_pane_g3

0xde69,	// (0x000690ec) bg_button_pane_cp012_ParamLimits

0xde69,	// (0x000690ec) bg_vkb2_func_pane_cp03_ParamLimits

0x6e60,	// (0x000620e3) cell_vitu2_function_top_pane_g1_ParamLimits

0xde69,	// (0x000690ec) bg_vkb2_func_pane_cp04_ParamLimits

0x7dcb,	// (0x0006304e) main_ncimui_button_group_pane_ParamLimits

0x7dcb,	// (0x0006304e) main_ncimui_button_group_pane

0x7e19,	// (0x0006309c) main_ncimui_pane_t3_ParamLimits

0x7e19,	// (0x0006309c) main_ncimui_pane_t3

0xd290,	// (0x00068513) phacti_button_group_pane

0xd573,	// (0x000687f6) aid_size_list_single_double_ParamLimits

0x8fc4,	// (0x00064247) popup_ezdial_listscroll_window_ParamLimits

0x8fe0,	// (0x00064263) popup_number_entry_window_cp01_ParamLimits

0x908b,	// (0x0006430e) phacti_button_pane_ParamLimits

0x908b,	// (0x0006430e) phacti_button_pane

0x0e6a,	// (0x0005c0ed) bg_button_pane_cp14

0xd64e,	// (0x000688d1) phacti_button_pane_t1

0x909c,	// (0x0006431f) main_touch_calib_button_pane_ParamLimits

0x909c,	// (0x0006431f) main_touch_calib_button_pane

0xa176,	// (0x000653f9) bg_button_pane_cp18_ParamLimits

0xa176,	// (0x000653f9) bg_button_pane_cp18

0xd65c,	// (0x000688df) main_touch_calib_button_pane_t1_ParamLimits

0xd65c,	// (0x000688df) main_touch_calib_button_pane_t1

0xd672,	// (0x000688f5) main_touch_calib_button_pane_t2_ParamLimits

0xd672,	// (0x000688f5) main_touch_calib_button_pane_t2

0x0001,

0xfd91,	// (0x0006b014) main_touch_calib_button_pane_t_ParamLimits

0xfd91,	// (0x0006b014) main_touch_calib_button_pane_t

0x0e6a,	// (0x0005c0ed) cell_ncimui_button_pane

0x0e6a,	// (0x0005c0ed) bg_button_pane_cp032

0xd690,	// (0x00068913) cell_ncimui_button_pane_t1

0xdd86,	// (0x00069009) image3_infobar_pane_ParamLimits

0xdd86,	// (0x00069009) image3_infobar_pane

0x81da,	// (0x0006345d) fs_bigclock_status_pane_ParamLimits

0x81da,	// (0x0006345d) fs_bigclock_status_pane

0x81e7,	// (0x0006346a) main_fs_bigclock_clock_pane_ParamLimits

0x81e7,	// (0x0006346a) main_fs_bigclock_clock_pane

0x81fa,	// (0x0006347d) main_fs_bigclock_indi_pane_ParamLimits

0x81fa,	// (0x0006347d) main_fs_bigclock_indi_pane

0x8215,	// (0x00063498) main_fs_bigclock_swipe_pane_ParamLimits

0x8215,	// (0x00063498) main_fs_bigclock_swipe_pane

0x0e6a,	// (0x0005c0ed) main_fs_clock_dumped_data

0x8238,	// (0x000634bb) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x8238,	// (0x000634bb) list_single_fs_bigclock_indicator_pane_g1

0x8256,	// (0x000634d9) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x8256,	// (0x000634d9) list_single_fs_bigclock_indicator_pane_g2

0x8270,	// (0x000634f3) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x8270,	// (0x000634f3) list_single_fs_bigclock_indicator_pane_g3

0x828a,	// (0x0006350d) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x828a,	// (0x0006350d) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbde,	// (0x0006ae61) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbde,	// (0x0006ae61) list_single_fs_bigclock_indicator_pane_g

0x82b0,	// (0x00063533) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x82b0,	// (0x00063533) list_single_fs_bigclock_indicator_pane_t1

0x82d8,	// (0x0006355b) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x82d8,	// (0x0006355b) list_single_fs_bigclock_indicator_pane_t2

0x8300,	// (0x00063583) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x8300,	// (0x00063583) list_single_fs_bigclock_indicator_pane_t3

0x8328,	// (0x000635ab) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x8328,	// (0x000635ab) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbe9,	// (0x0006ae6c) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbe9,	// (0x0006ae6c) list_single_fs_bigclock_indicator_pane_t

0xd69e,	// (0x00068921) image3_infobar_fav_pane_ParamLimits

0xd69e,	// (0x00068921) image3_infobar_fav_pane

0xd6ae,	// (0x00068931) image3_infobar_loc_pane_ParamLimits

0xd6ae,	// (0x00068931) image3_infobar_loc_pane

0xd6c2,	// (0x00068945) image3_infobar_time_pane_ParamLimits

0xd6c2,	// (0x00068945) image3_infobar_time_pane

0xc711,	// (0x00067994) image3_infobar_time_pane_g1

0xd6d2,	// (0x00068955) image3_infobar_time_pane_t1

0xc711,	// (0x00067994) image3_infobar_loc_pane_g1

0xd6e0,	// (0x00068963) image3_infobar_loc_pane_g2

0x0001,

0xfd96,	// (0x0006b019) image3_infobar_loc_pane_g

0xd6e8,	// (0x0006896b) image3_infobar_loc_pane_t1

0xc711,	// (0x00067994) image3_infobar_fav_pane_g1

0xd6f6,	// (0x00068979) image3_infobar_fav_pane_g2

0x0001,

0xfd9b,	// (0x0006b01e) image3_infobar_fav_pane_g

0xd6fe,	// (0x00068981) fs_bigclock_status_battery_pane

0xd707,	// (0x0006898a) fs_bigclock_status_signal_pane

0xd710,	// (0x00068993) fs_bigclock_status_title_pane

0xd719,	// (0x0006899c) fs_bigclock_status_signal_pane_g1

0xd722,	// (0x000689a5) fs_bigclock_status_signal_pane_g2

0x0001,

0xfda0,	// (0x0006b023) fs_bigclock_status_signal_pane_g

0xd72a,	// (0x000689ad) fs_bigclock_status_battery_pane_g1

0xd733,	// (0x000689b6) fs_bigclock_status_battery_pane_g2

0x0001,

0xfda5,	// (0x0006b028) fs_bigclock_status_battery_pane_g

0xd73b,	// (0x000689be) fs_bigclock_status_title_pane_t1

0xc711,	// (0x00067994) main_fs_bigclock_clock_pane_g1

0xd749,	// (0x000689cc) main_fs_bigclock_clock_pane_g2

0xd749,	// (0x000689cc) main_fs_bigclock_clock_pane_g3

0xd749,	// (0x000689cc) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdaa,	// (0x0006b02d) main_fs_bigclock_clock_pane_g

0x90b1,	// (0x00064334) main_fs_bigclock_clock_pane_t1

0x90bf,	// (0x00064342) main_fs_bigclock_clock_pane_t2

0x0001,

0xfdb3,	// (0x0006b036) main_fs_bigclock_clock_pane_t

0xd751,	// (0x000689d4) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd751,	// (0x000689d4) list_single_fs_bigclock_indicator_pane

0x90ce,	// (0x00064351) list_single_fs_bigclock_pane_ParamLimits

0x90ce,	// (0x00064351) list_single_fs_bigclock_pane

0xd76b,	// (0x000689ee) main_fs_bigclock_indicator_pane_t1

0xd77a,	// (0x000689fd) list_single_fs_bigclock_pane_g1

0xd782,	// (0x00068a05) list_single_fs_bigclock_pane_t1

0xc711,	// (0x00067994) main_fs_bigclock_swipe_pane_g1

0xd7c2,	// (0x00068a45) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdc4,	// (0x0006b047) main_fs_bigclock_swipe_pane_g

0xd7ca,	// (0x00068a4d) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd7ca,	// (0x00068a4d) main_fs_bigclock_swipe_pane_t1

0x2c98,	// (0x0005df1b) call_type_pane_ParamLimits

0x0e6a,	// (0x0005c0ed) main_btmg_pane

0xd45c,	// (0x000686df) list_single_cale_mrui_row_pane_g2_ParamLimits

0xd45c,	// (0x000686df) list_single_cale_mrui_row_pane_g2

0x0001,

0xfd37,	// (0x0006afba) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd37,	// (0x0006afba) list_single_cale_mrui_row_pane_g

0xd5ad,	// (0x00068830) list_recal_vselct_arw_lo_pane

0xd5b5,	// (0x00068838) list_recal_vselct_arw_up_pane

0x7598,	// (0x0006281b) list_recal_vselct_pane

0xd7e7,	// (0x00068a6a) btmg_button_pane

0x9135,	// (0x000643b8) main_btmg_pane_g1

0x0e6a,	// (0x0005c0ed) bg_button_pane_cp044

0xd7f1,	// (0x00068a74) btmg_button_pane_t1

0xc201,	// (0x00067484) aid_listscroll_gen

0x99c1,	// (0x00064c44) main_cntbar_detail_pane

0xd182,	// (0x00068405) list_cmail_folder_pane

0xd192,	// (0x00068415) sp_fs_scroll_pane_cp03_ParamLimits

0x913f,	// (0x000643c2) list_single_fs_dyc_pane_cp01_ParamLimits

0x913f,	// (0x000643c2) list_single_fs_dyc_pane_cp01

0xd7ff,	// (0x00068a82) aid_size_cmail_indent

0xd808,	// (0x00068a8b) list_single_dyc_row_pane_cp01

0x9184,	// (0x00064407) cntbar_detail_list_pane_ParamLimits

0x9184,	// (0x00064407) cntbar_detail_list_pane

0x91d0,	// (0x00064453) main_cntbar_detail_cont_pane_ParamLimits

0x91d0,	// (0x00064453) main_cntbar_detail_cont_pane

0x2bbd,	// (0x0005de40) scroll_pane_cp032_ParamLimits

0x2bbd,	// (0x0005de40) scroll_pane_cp032

0x91e4,	// (0x00064467) cntbar_detail_list_event_pane_ParamLimits

0x91e4,	// (0x00064467) cntbar_detail_list_event_pane

0x9194,	// (0x00064417) cntbar_detail_list_shct_pane

0xa6db,	// (0x0006595e) aid_list_gen

0xd811,	// (0x00068a94) aid_scroll

0xd81a,	// (0x00068a9d) aid_size_touch_scroll_bar

0xd823,	// (0x00068aa6) aid_list_double

0xd82c,	// (0x00068aaf) aid_list_single

0xd835,	// (0x00068ab8) aid_list_single_lg

0xd83e,	// (0x00068ac1) aid_list_z_g_a_sm

0xd846,	// (0x00068ac9) aid_list_z_g_d

0xd84e,	// (0x00068ad1) aid_txt_z_prm

0x91f4,	// (0x00064477) aid_txt_z_prm_cp01

0x9202,	// (0x00064485) aid_txt_z_sec

0x9210,	// (0x00064493) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9210,	// (0x00064493) main_cntbar_detail_cont_pane_g1

0x9224,	// (0x000644a7) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9224,	// (0x000644a7) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdc9,	// (0x0006b04c) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdc9,	// (0x0006b04c) main_cntbar_detail_cont_pane_g

0xd85c,	// (0x00068adf) main_cntbar_detail_cont_pane_t1

0xd86a,	// (0x00068aed) main_cntbar_detail_cont_pane_t2

0xd878,	// (0x00068afb) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdce,	// (0x0006b051) main_cntbar_detail_cont_pane_t

0x9234,	// (0x000644b7) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9234,	// (0x000644b7) cell_cntbar_detail_list_shct_pane

0xd886,	// (0x00068b09) cntbar_detail_list_shct_pane_g1

0xd88f,	// (0x00068b12) cntbar_detail_list_shct_pane_g2

0x0001,

0xfdd5,	// (0x0006b058) cntbar_detail_list_shct_pane_g

0x9248,	// (0x000644cb) cntbar_detail_list_event_pane_g1_ParamLimits

0x9248,	// (0x000644cb) cntbar_detail_list_event_pane_g1

0x9254,	// (0x000644d7) cntbar_detail_list_event_pane_g2_ParamLimits

0x9254,	// (0x000644d7) cntbar_detail_list_event_pane_g2

0x0005,

0xfdda,	// (0x0006b05d) cntbar_detail_list_event_pane_g_ParamLimits

0xfdda,	// (0x0006b05d) cntbar_detail_list_event_pane_g

0x92c0,	// (0x00064543) cntbar_detail_list_event_pane_t1_ParamLimits

0x92c0,	// (0x00064543) cntbar_detail_list_event_pane_t1

0x92d5,	// (0x00064558) cntbar_detail_list_event_pane_t2_ParamLimits

0x92d5,	// (0x00064558) cntbar_detail_list_event_pane_t2

0x0002,

0xfde7,	// (0x0006b06a) cntbar_detail_list_event_pane_t_ParamLimits

0xfde7,	// (0x0006b06a) cntbar_detail_list_event_pane_t

0xc711,	// (0x00067994) cell_cntbar_detail_list_shct_pane_g1

0x2fe9,	// (0x0005e26c) navi_pane_mv_g3

0x99c1,	// (0x00064c44) main_cntbar_detail_pane_ParamLimits

0x0e6a,	// (0x0005c0ed) main_notif_wgt_pane

0xdb9c,	// (0x00068e1f) aid_tch_main_mp4_pane_g4

0xdd7e,	// (0x00069001) popup_slider_window_cp02

0xd5a4,	// (0x00068827) list_recal_day_event_pane

0x9158,	// (0x000643db) cntbar_detail_btn_pane_ParamLimits

0x9158,	// (0x000643db) cntbar_detail_btn_pane

0x916e,	// (0x000643f1) cntbar_detail_btn_pane_cp01_ParamLimits

0x916e,	// (0x000643f1) cntbar_detail_btn_pane_cp01

0x9194,	// (0x00064417) cntbar_detail_list_shct_pane_ParamLimits

0x91a4,	// (0x00064427) cntbar_detail_pane_g1_ParamLimits

0x91a4,	// (0x00064427) cntbar_detail_pane_g1

0x91b4,	// (0x00064437) cntbar_detail_pane_t1_ParamLimits

0x91b4,	// (0x00064437) cntbar_detail_pane_t1

0x9260,	// (0x000644e3) cntbar_detail_list_event_pane_g3_ParamLimits

0x9260,	// (0x000644e3) cntbar_detail_list_event_pane_g3

0x9278,	// (0x000644fb) cntbar_detail_list_event_pane_g4_ParamLimits

0x9278,	// (0x000644fb) cntbar_detail_list_event_pane_g4

0x9290,	// (0x00064513) cntbar_detail_list_event_pane_g5_ParamLimits

0x9290,	// (0x00064513) cntbar_detail_list_event_pane_g5

0x92a8,	// (0x0006452b) cntbar_detail_list_event_pane_g6_ParamLimits

0x92a8,	// (0x0006452b) cntbar_detail_list_event_pane_g6

0x92ea,	// (0x0006456d) cntbar_detail_list_event_pane_t3_ParamLimits

0x92ea,	// (0x0006456d) cntbar_detail_list_event_pane_t3

0x92fc,	// (0x0006457f) popup_notif_wgt_window_ParamLimits

0x92fc,	// (0x0006457f) popup_notif_wgt_window

0x9315,	// (0x00064598) popup_submenu_window_cp01_ParamLimits

0x9315,	// (0x00064598) popup_submenu_window_cp01

0xada0,	// (0x00066023) bg_popup_window_pane_cp10

0xd898,	// (0x00068b1b) listscroll_notif_wgt_pane

0xd8a2,	// (0x00068b25) list_notif_wgt_window

0xd8ab,	// (0x00068b2e) scroll_pane_cp033

0xd8b4,	// (0x00068b37) list_notif_wgt_row_pane_ParamLimits

0xd8b4,	// (0x00068b37) list_notif_wgt_row_pane

0xd8c8,	// (0x00068b4b) aid_size_list_notif_wgt_del

0xd8d1,	// (0x00068b54) list_notif_wgt_row_pane_g1

0xd8d9,	// (0x00068b5c) list_notif_wgt_row_pane_g2

0xd8e1,	// (0x00068b64) list_notif_wgt_row_pane_g3

0x0002,

0xfdee,	// (0x0006b071) list_notif_wgt_row_pane_g

0xd8ea,	// (0x00068b6d) list_notif_wgt_row_pane_t1

0xd8f8,	// (0x00068b7b) list_notif_wgt_row_pane_t2

0xd906,	// (0x00068b89) list_notif_wgt_row_pane_t3

0x0002,

0xfdf5,	// (0x0006b078) list_notif_wgt_row_pane_t

0xe388,	// (0x0006960b) list_recal_day_event_pane_g1

0xd914,	// (0x00068b97) list_recal_day_event_pane_t1

0x0e6a,	// (0x0005c0ed) bg_button_pane_cp045

0xd923,	// (0x00068ba6) cntbar_detail_btn_pane_t1

0xc209,	// (0x0006748c) main_callh_pane_ParamLimits

0xc209,	// (0x0006748c) main_callh_pane

0x0e6a,	// (0x0005c0ed) main_coverflow0_pane

0x0e6a,	// (0x0005c0ed) main_wgtman_pane

0x8223,	// (0x000634a6) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8223,	// (0x000634a6) main_fs_bigclock_unlock_btn_pane

0xd15c,	// (0x000683df) bg_button_pane_cp16

0xd16c,	// (0x000683ef) cell_tport_appsw_pane_g3

0x9327,	// (0x000645aa) cf0_flow_pane_ParamLimits

0x9327,	// (0x000645aa) cf0_flow_pane

0xd931,	// (0x00068bb4) listscroll_cf0_pane

0xd93a,	// (0x00068bbd) main_cf0_pane_g1

0x933c,	// (0x000645bf) main_cf0_pane_t1_ParamLimits

0x933c,	// (0x000645bf) main_cf0_pane_t1

0x9353,	// (0x000645d6) main_cf0_pane_t2_ParamLimits

0x9353,	// (0x000645d6) main_cf0_pane_t2

0x0001,

0xfdfc,	// (0x0006b07f) main_cf0_pane_t_ParamLimits

0xfdfc,	// (0x0006b07f) main_cf0_pane_t

0xd944,	// (0x00068bc7) scroll_pane_cp11

0x936a,	// (0x000645ed) cf0_flow_pane_g1

0x9372,	// (0x000645f5) cf0_flow_pane_g2

0x0001,

0xfe01,	// (0x0006b084) cf0_flow_pane_g

0x937a,	// (0x000645fd) cf0_flow_pane_t1

0x0e6a,	// (0x0005c0ed) main_call6_pane

0x0e6a,	// (0x0005c0ed) main_calllock_pane

0x9388,	// (0x0006460b) call6_btn_grp_pane_ParamLimits

0x9388,	// (0x0006460b) call6_btn_grp_pane

0x93a2,	// (0x00064625) call6_pane_g1_ParamLimits

0x93a2,	// (0x00064625) call6_pane_g1

0x93b7,	// (0x0006463a) popup_call6_1st_window_ParamLimits

0x93b7,	// (0x0006463a) popup_call6_1st_window

0x93c8,	// (0x0006464b) popup_call6_2nd_window_ParamLimits

0x93c8,	// (0x0006464b) popup_call6_2nd_window

0x93d9,	// (0x0006465c) cell_call6_btn_pane_ParamLimits

0x93d9,	// (0x0006465c) cell_call6_btn_pane

0xada0,	// (0x00066023) bg_popup_call2_in_pane_cp03

0xd94f,	// (0x00068bd2) popup_call6_1st_window_g1

0xd957,	// (0x00068bda) popup_call6_1st_window_g2

0xd95f,	// (0x00068be2) popup_call6_1st_window_g3

0x0002,

0xfe06,	// (0x0006b089) popup_call6_1st_window_g

0xd967,	// (0x00068bea) popup_call6_1st_window_t1

0xd976,	// (0x00068bf9) popup_call6_1st_window_t2

0xd986,	// (0x00068c09) popup_call6_1st_window_t3

0x0002,

0xfe0d,	// (0x0006b090) popup_call6_1st_window_t

0xada0,	// (0x00066023) bg_popup_call2_in_pane_cp04

0xd94f,	// (0x00068bd2) popup_call6_2nd_window_g1

0xd957,	// (0x00068bda) popup_call6_2nd_window_g2

0xd95f,	// (0x00068be2) popup_call6_2nd_window_g3

0x0002,

0xfe06,	// (0x0006b089) popup_call6_2nd_window_g

0xd967,	// (0x00068bea) popup_call6_2nd_window_t1

0x0e6a,	// (0x0005c0ed) bg_button_pane_cp15

0xd996,	// (0x00068c19) cell_call6_btn_pane_g1

0xd99f,	// (0x00068c22) cell_call6_btn_pane_t1

0x93ed,	// (0x00064670) listscroll_wgtman_pane_ParamLimits

0x93ed,	// (0x00064670) listscroll_wgtman_pane

0x9410,	// (0x00064693) wgtman_btn_pane_ParamLimits

0x9410,	// (0x00064693) wgtman_btn_pane

0xac53,	// (0x00065ed6) aid_scroll_copy1

0xd9ae,	// (0x00068c31) list_wgtman_pane

0x9453,	// (0x000646d6) wgtman_btn_pane_g1_ParamLimits

0x9453,	// (0x000646d6) wgtman_btn_pane_g1

0x947f,	// (0x00064702) wgtman_btn_pane_t1_ParamLimits

0x947f,	// (0x00064702) wgtman_btn_pane_t1

0xd9b8,	// (0x00068c3b) wgtman_btn_pane_t2_ParamLimits

0xd9b8,	// (0x00068c3b) wgtman_btn_pane_t2

0x0001,

0xfe14,	// (0x0006b097) wgtman_btn_pane_t_ParamLimits

0xfe14,	// (0x0006b097) wgtman_btn_pane_t

0x94bc,	// (0x0006473f) listrow_wgtman_pane_ParamLimits

0x94bc,	// (0x0006473f) listrow_wgtman_pane

0x94cf,	// (0x00064752) listrow_wgtman_pane_g1

0x94d8,	// (0x0006475b) listrow_wgtman_pane_g2

0x0001,

0xfe19,	// (0x0006b09c) listrow_wgtman_pane_g

0x94e2,	// (0x00064765) listrow_wgtman_pane_t1

0x94f0,	// (0x00064773) listrow_wgtman_pane_t2

0x0001,

0xfe1e,	// (0x0006b0a1) listrow_wgtman_pane_t

0x94fe,	// (0x00064781) wait_bar_pane_cp09

0xd9cf,	// (0x00068c52) main_calllock_btn_pane

0xd9d9,	// (0x00068c5c) main_calllock_pane_g1

0x0e6a,	// (0x0005c0ed) bg_button_pane_cp17

0xd9e4,	// (0x00068c67) main_calllock_btn_pane_g1

0xd9ed,	// (0x00068c70) main_calllock_btn_pane_t1

0x0e6a,	// (0x0005c0ed) main_dialer3_pane

0x0e6a,	// (0x0005c0ed) main_fmrd2_pane

0xc711,	// (0x00067994) main_fs_bigclock_unlock_btn_pane_g1

0xda04,	// (0x00068c87) main_fs_bigclock_unlock_btn_pane_t1

0x9506,	// (0x00064789) area_fmrd2_info_pane_ParamLimits

0x9506,	// (0x00064789) area_fmrd2_info_pane

0x9517,	// (0x0006479a) area_fmrd2_visual_pane_ParamLimits

0x9517,	// (0x0006479a) area_fmrd2_visual_pane

0x9525,	// (0x000647a8) fmrd2_indi_pane_ParamLimits

0x9525,	// (0x000647a8) fmrd2_indi_pane

0x9532,	// (0x000647b5) area_fmrd2_visual_pane_g1

0x953a,	// (0x000647bd) area_fmrd2_visual_pane_t1

0x954a,	// (0x000647cd) area_fmrd2_visual_pane_t2

0x955a,	// (0x000647dd) area_fmrd2_visual_pane_t3

0x0002,

0xfe28,	// (0x0006b0ab) area_fmrd2_visual_pane_t

0x956a,	// (0x000647ed) area_fmrd2_info_pane_g1

0x9572,	// (0x000647f5) area_fmrd2_info_pane_t1

0x9582,	// (0x00064805) area_fmrd2_info_pane_t2

0x9592,	// (0x00064815) area_fmrd2_info_pane_t3

0x95a2,	// (0x00064825) area_fmrd2_info_pane_t4

0x0003,

0xfe2f,	// (0x0006b0b2) area_fmrd2_info_pane_t

0x95b0,	// (0x00064833) fmrd2_indi_pane_t1

0x95c0,	// (0x00064843) fmrd2_indi_pane_t2

0x95d0,	// (0x00064853) fmrd2_indi_pane_t3

0x0002,

0xfe38,	// (0x0006b0bb) fmrd2_indi_pane_t

0x8299,	// (0x0006351c) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x8299,	// (0x0006351c) list_single_fs_bigclock_indicator_pane_g5

0x833d,	// (0x000635c0) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x833d,	// (0x000635c0) list_single_fs_bigclock_indicator_pane_t5

0x8d3c,	// (0x00063fbf) aid_cell_bcale_month_pane_ParamLimits

0x8d3c,	// (0x00063fbf) aid_cell_bcale_month_pane

0x8d4e,	// (0x00063fd1) bcale_month_pane_ParamLimits

0x8d4e,	// (0x00063fd1) bcale_month_pane

0x8d68,	// (0x00063feb) bcale_preview_pane_ParamLimits

0x8d68,	// (0x00063feb) bcale_preview_pane

0xd782,	// (0x00068a05) list_single_fs_bigclock_pane_t1_ParamLimits

0xd79e,	// (0x00068a21) list_single_fs_bigclock_pane_t2_ParamLimits

0xd79e,	// (0x00068a21) list_single_fs_bigclock_pane_t2

0x0001,

0xfdbf,	// (0x0006b042) list_single_fs_bigclock_pane_t_ParamLimits

0xfdbf,	// (0x0006b042) list_single_fs_bigclock_pane_t

0xd9fc,	// (0x00068c7f) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe23,	// (0x0006b0a6) main_fs_bigclock_unlock_btn_pane_g

0x95e0,	// (0x00064863) aid_dia3_key_size_ParamLimits

0x95e0,	// (0x00064863) aid_dia3_key_size

0x95ef,	// (0x00064872) aid_dia3_listrow_size_ParamLimits

0x95ef,	// (0x00064872) aid_dia3_listrow_size

0x9604,	// (0x00064887) dia3_keypad_fun_pane_ParamLimits

0x9604,	// (0x00064887) dia3_keypad_fun_pane

0x9620,	// (0x000648a3) dia3_keypad_num_pane_ParamLimits

0x9620,	// (0x000648a3) dia3_keypad_num_pane

0x963b,	// (0x000648be) dia3_listscroll_pane_ParamLimits

0x963b,	// (0x000648be) dia3_listscroll_pane

0x964e,	// (0x000648d1) dia3_numentry_pane_ParamLimits

0x964e,	// (0x000648d1) dia3_numentry_pane

0xda12,	// (0x00068c95) dia3_list_pane

0xda1d,	// (0x00068ca0) scroll_pane_cp12

0x0e6a,	// (0x0005c0ed) bg_dia3_numentry_pane

0x9662,	// (0x000648e5) dia3_numentry_pane_t1

0x9671,	// (0x000648f4) cell_dia3_key_num_pane

0x9679,	// (0x000648fc) cell_dia3_key0_fun_pane_ParamLimits

0x9679,	// (0x000648fc) cell_dia3_key0_fun_pane

0x968d,	// (0x00064910) cell_dia3_key1_fun_pane_ParamLimits

0x968d,	// (0x00064910) cell_dia3_key1_fun_pane

0x96a5,	// (0x00064928) dia3_listrow_pane

0xebc1,	// (0x00069e44) bg_dia3_numentry_pane_g1

0x0e6a,	// (0x0005c0ed) bg_button_pane_cp21

0xda28,	// (0x00068cab) cell_dia3_key_num_pane_t1

0xda36,	// (0x00068cb9) cell_dia3_key_num_pane_t2

0xda45,	// (0x00068cc8) cell_dia3_key_num_pane_t3

0xda54,	// (0x00068cd7) cell_dia3_key_num_pane_t4

0x0003,

0xfe3f,	// (0x0006b0c2) cell_dia3_key_num_pane_t

0x0e6a,	// (0x0005c0ed) bg_button_pane_cp19

0x96b7,	// (0x0006493a) cell_dia3_key0_fun_pane_g1

0x0e6a,	// (0x0005c0ed) bg_button_pane_cp20

0x96bf,	// (0x00064942) cell_dia3_key1_fun_pane_g1

0x96c7,	// (0x0006494a) area_left_week_number_pane

0xcf7f,	// (0x00068202) area_top_day_name_pane

0x96d0,	// (0x00064953) frame_month_view_pane

0x96d8,	// (0x0006495b) grid_month_view_pane

0x96e2,	// (0x00064965) cell_top_day_name_pane_ParamLimits

0x96e2,	// (0x00064965) cell_top_day_name_pane

0x8f5e,	// (0x000641e1) cell_area_left_week_number_pane_ParamLimits

0x8f5e,	// (0x000641e1) cell_area_left_week_number_pane

0x96f8,	// (0x0006497b) cell_month_view_pane_ParamLimits

0x96f8,	// (0x0006497b) cell_month_view_pane

0xda63,	// (0x00068ce6) frm_month_g1

0x9713,	// (0x00064996) frm_month_g2

0x971b,	// (0x0006499e) frm_month_g3

0x9723,	// (0x000649a6) frm_month_g4

0x972b,	// (0x000649ae) frm_month_g5

0x9733,	// (0x000649b6) frm_month_g6

0x973b,	// (0x000649be) frm_month_g7

0xda6c,	// (0x00068cef) frm_month_g8

0x9743,	// (0x000649c6) frm_month_g9

0x974c,	// (0x000649cf) frm_month_g10

0x9755,	// (0x000649d8) frm_month_g11

0x975e,	// (0x000649e1) frm_month_g12

0x9767,	// (0x000649ea) frm_month_g13

0x9770,	// (0x000649f3) frm_month_g14

0x9779,	// (0x000649fc) frm_month_g15

0x9782,	// (0x00064a05) frm_month_g16

0x000f,

0xfe48,	// (0x0006b0cb) frm_month_g

0x978b,	// (0x00064a0e) cell_top_day_name_pane_t1

0x979a,	// (0x00064a1d) cell_area_left_week_number_pane_g1

0x978b,	// (0x00064a0e) cell_area_left_week_number_pane_t1

0xc711,	// (0x00067994) cell_month_view_pane_g1

0x97a2,	// (0x00064a25) cell_month_view_pane_t1

0x0e6a,	// (0x0005c0ed) main_fps_pane

0xf02e,	// (0x0006a2b1) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xf02e,	// (0x0006a2b1) cmail_ddmenu_btn02_pane_cp1

0xf04a,	// (0x0006a2cd) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xf04a,	// (0x0006a2cd) cmail_ddmenu_btn02_pane_cp2

0x9012,	// (0x00064295) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9012,	// (0x00064295) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd70,	// (0x0006aff3) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd70,	// (0x0006aff3) cmail_ddmenu_btn02_pane_g

0x9030,	// (0x000642b3) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9030,	// (0x000642b3) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd75,	// (0x0006aff8) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd75,	// (0x0006aff8) cmail_ddmenu_btn02_pane_t

0x97b1,	// (0x00064a34) fps_text_pane_ParamLimits

0x97b1,	// (0x00064a34) fps_text_pane

0x97c8,	// (0x00064a4b) main_fps_pane_g1_ParamLimits

0x97c8,	// (0x00064a4b) main_fps_pane_g1

0x97e2,	// (0x00064a65) wait_bar_pane_cp010_ParamLimits

0x97e2,	// (0x00064a65) wait_bar_pane_cp010

0x97f3,	// (0x00064a76) fps_text_pane_t1_ParamLimits

0x97f3,	// (0x00064a76) fps_text_pane_t1

0xed2c,	// (0x00069faf) cam4_image_uncrop_pane_g1

0xed35,	// (0x00069fb8) cam4_image_uncrop_pane_g2

0x62be,	// (0x00061541) cam4_image_uncrop_pane_g3

0x62c7,	// (0x0006154a) cam4_image_uncrop_pane_g4

0x0003,

0xf908,	// (0x0006ab8b) cam4_image_uncrop_pane_g

0x96a5,	// (0x00064928) dia3_listrow_pane_ParamLimits

0x0e6a,	// (0x0005c0ed) main_phob2_pane

0x8b5e,	// (0x00063de1) cell_tport_appsw_pane_cp02_ParamLimits

0x8b5e,	// (0x00063de1) cell_tport_appsw_pane_cp02

0x8b72,	// (0x00063df5) cell_tport_appsw_pane_cp03_ParamLimits

0x8b72,	// (0x00063df5) cell_tport_appsw_pane_cp03

0x0e6a,	// (0x0005c0ed) phob2_contact_card_pane

0x0e6a,	// (0x0005c0ed) phob2_listscroll_pane

0xda75,	// (0x00068cf8) phob2_list_pane

0xda7d,	// (0x00068d00) scroll_pane_cp034

0x980b,	// (0x00064a8e) phob2_cc_data_pane_ParamLimits

0x980b,	// (0x00064a8e) phob2_cc_data_pane

0x982a,	// (0x00064aad) phob2_cc_listscroll_pane_ParamLimits

0x982a,	// (0x00064aad) phob2_cc_listscroll_pane

0xe182,	// (0x00069405) list_double_large_graphic_phob2_pane_ParamLimits

0xe182,	// (0x00069405) list_double_large_graphic_phob2_pane

0x9848,	// (0x00064acb) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9848,	// (0x00064acb) list_double_large_graphic_phob2_pane_g1

0x9855,	// (0x00064ad8) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9855,	// (0x00064ad8) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe69,	// (0x0006b0ec) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe69,	// (0x0006b0ec) list_double_large_graphic_phob2_pane_g

0x9861,	// (0x00064ae4) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9861,	// (0x00064ae4) list_double_large_graphic_phob2_pane_t1

0x9876,	// (0x00064af9) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9876,	// (0x00064af9) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe6e,	// (0x0006b0f1) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe6e,	// (0x0006b0f1) list_double_large_graphic_phob2_pane_t

0x0e6a,	// (0x0005c0ed) list_highlight_pane_cp024

0xda85,	// (0x00068d08) phob2_cc_button_pane

0x9888,	// (0x00064b0b) phob2_cc_data_pane_g1_ParamLimits

0x9888,	// (0x00064b0b) phob2_cc_data_pane_g1

0x989d,	// (0x00064b20) phob2_cc_data_pane_g2_ParamLimits

0x989d,	// (0x00064b20) phob2_cc_data_pane_g2

0x0001,

0xfe73,	// (0x0006b0f6) phob2_cc_data_pane_g_ParamLimits

0xfe73,	// (0x0006b0f6) phob2_cc_data_pane_g

0x98af,	// (0x00064b32) phob2_cc_data_pane_t1_ParamLimits

0x98af,	// (0x00064b32) phob2_cc_data_pane_t1

0x98c7,	// (0x00064b4a) phob2_cc_data_pane_t2_ParamLimits

0x98c7,	// (0x00064b4a) phob2_cc_data_pane_t2

0x98df,	// (0x00064b62) phob2_cc_data_pane_t3_ParamLimits

0x98df,	// (0x00064b62) phob2_cc_data_pane_t3

0x0002,

0xfe78,	// (0x0006b0fb) phob2_cc_data_pane_t_ParamLimits

0xfe78,	// (0x0006b0fb) phob2_cc_data_pane_t

0xda8d,	// (0x00068d10) phob2_cc_list_pane_ParamLimits

0xda8d,	// (0x00068d10) phob2_cc_list_pane

0xe9fd,	// (0x00069c80) scroll_pane_cp035_ParamLimits

0xe9fd,	// (0x00069c80) scroll_pane_cp035

0x99c1,	// (0x00064c44) bg_button_pane_cp033

0xda99,	// (0x00068d1c) phob2_cc_button_pane_g1

0xdaa5,	// (0x00068d28) phob2_cc_button_pane_t1

0xdaba,	// (0x00068d3d) phob2_cc_button_pane_t2

0x0001,

0xfe7f,	// (0x0006b102) phob2_cc_button_pane_t

0x98f9,	// (0x00064b7c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x98f9,	// (0x00064b7c) list_double_large_graphic_phob2_cc_pane

0x990d,	// (0x00064b90) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x990d,	// (0x00064b90) list_double_large_graphic_phob2_cc_pane_g1

0x9919,	// (0x00064b9c) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9919,	// (0x00064b9c) list_double_large_graphic_phob2_cc_pane_g2

0x9925,	// (0x00064ba8) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9925,	// (0x00064ba8) list_double_large_graphic_phob2_cc_pane_g3

0x9931,	// (0x00064bb4) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9931,	// (0x00064bb4) list_double_large_graphic_phob2_cc_pane_g4

0x993d,	// (0x00064bc0) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x993d,	// (0x00064bc0) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe84,	// (0x0006b107) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe84,	// (0x0006b107) list_double_large_graphic_phob2_cc_pane_g

0x9949,	// (0x00064bcc) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9949,	// (0x00064bcc) list_double_large_graphic_phob2_cc_pane_t1

0x9972,	// (0x00064bf5) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9972,	// (0x00064bf5) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe8f,	// (0x0006b112) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe8f,	// (0x0006b112) list_double_large_graphic_phob2_cc_pane_t

0xdacc,	// (0x00068d4f) list_highlight_pane_cp025_ParamLimits

0xdacc,	// (0x00068d4f) list_highlight_pane_cp025

0x99c1,	// (0x00064c44) bg_button_pane_cp033_ParamLimits

0xda99,	// (0x00068d1c) phob2_cc_button_pane_g1_ParamLimits

0xdaa5,	// (0x00068d28) phob2_cc_button_pane_t1_ParamLimits

0xdaba,	// (0x00068d3d) phob2_cc_button_pane_t2_ParamLimits

0xfe7f,	// (0x0006b102) phob2_cc_button_pane_t_ParamLimits

0x0eac,	// (0x0005c12f) popup_wgtman_window

0xe264,	// (0x000694e7) scroll_pane_cp038

0x9435,	// (0x000646b8) wgtman_btn_pane_cp_01_ParamLimits

0x9435,	// (0x000646b8) wgtman_btn_pane_cp_01

0xdada,	// (0x00068d5d) wgtman_content_pane

0xd823,	// (0x00068aa6) wgtman_heading_pane

0x0e6a,	// (0x0005c0ed) bg_heading_pane_cp02

0xdae3,	// (0x00068d66) wgtman_heading_pane_g1

0xdaeb,	// (0x00068d6e) wgtman_heading_pane_t1

0xdaf9,	// (0x00068d7c) scroll_pane_cp036

0xdb01,	// (0x00068d84) wgtman_list_pane

0xdb09,	// (0x00068d8c) wgtman_list_pane_t1_ParamLimits

0xdb09,	// (0x00068d8c) wgtman_list_pane_t1

0xddd8,	// (0x0006905b) cam4_grid_pane

0x7013,	// (0x00062296) bg_button_pane_cp015_ParamLimits

0x7027,	// (0x000622aa) bg_button_pane_cp016_ParamLimits

0x703a,	// (0x000622bd) bg_button_pane_cp017_ParamLimits

0x7092,	// (0x00062315) popup_vitu2_query_window_g3_ParamLimits

0x7092,	// (0x00062315) popup_vitu2_query_window_g3

0x714f,	// (0x000623d2) popup_vitu2_query_window_t6_ParamLimits

0x714f,	// (0x000623d2) popup_vitu2_query_window_t6

0x717a,	// (0x000623fd) popup_vitu2_query_window_t7_ParamLimits

0x717a,	// (0x000623fd) popup_vitu2_query_window_t7

0xed2c,	// (0x00069faf) cam4_grid_pane_g1

0xed35,	// (0x00069fb8) cam4_grid_pane_g2

0xdb2b,	// (0x00068dae) cam4_grid_pane_g3

0xdb34,	// (0x00068db7) cam4_grid_pane_g4

0x0003,

0xfe94,	// (0x0006b117) cam4_grid_pane_g

0x1d7c,	// (0x0005cfff) aid_placing_vt_slider_lsc_ParamLimits

0x2079,	// (0x0005d2fc) vidtel_button_pane_ParamLimits

0x2079,	// (0x0005d2fc) vidtel_button_pane

0x0e6a,	// (0x0005c0ed) bg_button_pane_cp034

0x999b,	// (0x00064c1e) vidtel_button_pane_g1

0xdb3f,	// (0x00068dc2) vidtel_button_pane_t1

0xe366,	// (0x000695e9) aid_size_vtel_slider_touch

0xe9fd,	// (0x00069c80) scroll_pane_cp039

0xebff,	// (0x00069e82) ncim_query_button_pane_cp01_ParamLimits

0xec1e,	// (0x00069ea1) ncimui_query_pane_g1_ParamLimits

0x99c1,	// (0x00064c44) input_focus_pane_cp012_ParamLimits

0xec43,	// (0x00069ec6) ncim_query_entry_pane_t1_ParamLimits

0xe9fd,	// (0x00069c80) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small
