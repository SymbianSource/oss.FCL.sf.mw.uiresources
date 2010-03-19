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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00059edc };

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
0x0ddf,	// (0x0005acbb) Screen

0x0deb,	// (0x0005acc7) application_window

0x0e5d,	// (0x0005ad39) area_bottom_pane_ParamLimits

0x0e5d,	// (0x0005ad39) area_bottom_pane

0x0eba,	// (0x0005ad96) area_top_pane_ParamLimits

0x0eba,	// (0x0005ad96) area_top_pane

0x9848,	// (0x00063724) call_video_uplink_pane_ParamLimits

0x9848,	// (0x00063724) call_video_uplink_pane

0x0f2f,	// (0x0005ae0b) main_pane_ParamLimits

0x0f2f,	// (0x0005ae0b) main_pane

0xc0c8,	// (0x00065fa4) context_pane

0x4130,	// (0x0005e00c) navi_pane

0x4158,	// (0x0005e034) popup_cale_events_window_ParamLimits

0x4158,	// (0x0005e034) popup_cale_events_window

0xc0db,	// (0x00065fb7) popup_mup_playback_window

0x4170,	// (0x0005e04c) signal_pane

0x9fe5,	// (0x00063ec1) main_browser_pane

0xac39,	// (0x00064b15) main_burst_pane

0x3e82,	// (0x0005dd5e) main_calc_pane

0xac39,	// (0x00064b15) main_cale_day_pane

0x9fe5,	// (0x00063ec1) main_cale_month_pane

0xac39,	// (0x00064b15) main_cale_week_pane

0xac39,	// (0x00064b15) main_call_pane

0x9c87,	// (0x00063b63) main_call_poc_pane

0xac39,	// (0x00064b15) main_camera_pane

0xac39,	// (0x00064b15) main_chi_dic_pane

0xaabe,	// (0x0006499a) main_clock_pane

0x9c87,	// (0x00063b63) main_fmradio_pane

0xac39,	// (0x00064b15) main_graph_messa_pane

0x9c87,	// (0x00063b63) main_help_pane

0x9fe5,	// (0x00063ec1) main_im_pane

0x9ee2,	// (0x00063dbe) main_image_pane_ParamLimits

0x9ee2,	// (0x00063dbe) main_image_pane

0x9c87,	// (0x00063b63) main_location2_pane

0xac39,	// (0x00064b15) main_location_pane

0x9c87,	// (0x00063b63) main_messa_pane

0x9c87,	// (0x00063b63) main_mp2_pane

0xac39,	// (0x00064b15) main_mp_pane

0x9c87,	// (0x00063b63) main_msg_pane

0x9c87,	// (0x00063b63) main_mup_eq_pane

0x9c87,	// (0x00063b63) main_mup_pane

0xac39,	// (0x00064b15) main_notes_pane

0x9c87,	// (0x00063b63) main_pec_pane

0x9c87,	// (0x00063b63) main_phob_pane

0x9c87,	// (0x00063b63) main_pinb_pane

0x9c87,	// (0x00063b63) main_postcard_pane

0x9c87,	// (0x00063b63) main_qdial_pane

0xac39,	// (0x00064b15) main_skin_pane

0x9c87,	// (0x00063b63) main_smil2_pane

0xac39,	// (0x00064b15) main_smil_pane

0xac39,	// (0x00064b15) main_video_pane

0xac39,	// (0x00064b15) main_video_tele_pane

0x9ee2,	// (0x00063dbe) main_viewer_pane_ParamLimits

0x9ee2,	// (0x00063dbe) main_viewer_pane

0xac39,	// (0x00064b15) main_vorec_pane

0x3ed6,	// (0x0005ddb2) popup_blid_sat_info_window_ParamLimits

0x3ed6,	// (0x0005ddb2) popup_blid_sat_info_window

0x3f2e,	// (0x0005de0a) popup_dyc_status_message_window_ParamLimits

0x3f2e,	// (0x0005de0a) popup_dyc_status_message_window

0x3f48,	// (0x0005de24) popup_grid_large_graphic_window_ParamLimits

0x3f48,	// (0x0005de24) popup_grid_large_graphic_window

0x4004,	// (0x0005dee0) popup_loc_request_window_ParamLimits

0x4004,	// (0x0005dee0) popup_loc_request_window

0x4108,	// (0x0005dfe4) popup_wml_address_window_ParamLimits

0x4108,	// (0x0005dfe4) popup_wml_address_window

0x3cbc,	// (0x0005db98) call_muted_g1

0x3971,	// (0x0005d84d) popup_call_audio_conf_window_ParamLimits

0x3971,	// (0x0005d84d) popup_call_audio_conf_window

0x3cd0,	// (0x0005dbac) popup_call_audio_first_window_ParamLimits

0x3cd0,	// (0x0005dbac) popup_call_audio_first_window

0x3d46,	// (0x0005dc22) popup_call_audio_in_window_ParamLimits

0x3d46,	// (0x0005dc22) popup_call_audio_in_window

0x3d82,	// (0x0005dc5e) popup_call_audio_out_window_ParamLimits

0x3d82,	// (0x0005dc5e) popup_call_audio_out_window

0x3dbc,	// (0x0005dc98) popup_call_audio_second_window_ParamLimits

0x3dbc,	// (0x0005dc98) popup_call_audio_second_window

0x3e12,	// (0x0005dcee) popup_call_audio_wait_window_ParamLimits

0x3e12,	// (0x0005dcee) popup_call_audio_wait_window

0x3e47,	// (0x0005dd23) popup_number_entry_window_ParamLimits

0x3e47,	// (0x0005dd23) popup_number_entry_window

0x9874,	// (0x00063750) bg_popup_call_pane_cp05_ParamLimits

0x9874,	// (0x00063750) bg_popup_call_pane_cp05

0x9894,	// (0x00063770) popup_number_entry_window_t1

0x98a7,	// (0x00063783) popup_number_entry_window_t2

0x98b9,	// (0x00063795) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x00068fc8) popup_number_entry_window_t

0x98cb,	// (0x000637a7) text_title_cp2

0x98de,	// (0x000637ba) bg_popup_call_pane_cp_ParamLimits

0x98de,	// (0x000637ba) bg_popup_call_pane_cp

0x98ec,	// (0x000637c8) call_thumbnail_pane

0x98f4,	// (0x000637d0) popup_call_audio_in_window_g1_ParamLimits

0x98f4,	// (0x000637d0) popup_call_audio_in_window_g1

0x9900,	// (0x000637dc) popup_call_audio_in_window_g2_ParamLimits

0x9900,	// (0x000637dc) popup_call_audio_in_window_g2

0x990c,	// (0x000637e8) popup_call_audio_in_window_g3_ParamLimits

0x990c,	// (0x000637e8) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x00068fd1) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x00068fd1) popup_call_audio_in_window_g

0x9918,	// (0x000637f4) popup_call_audio_in_window_t1_ParamLimits

0x9918,	// (0x000637f4) popup_call_audio_in_window_t1

0x9934,	// (0x00063810) popup_call_audio_in_window_t2_ParamLimits

0x9934,	// (0x00063810) popup_call_audio_in_window_t2

0x9950,	// (0x0006382c) popup_call_audio_in_window_t3_ParamLimits

0x9950,	// (0x0006382c) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x00068fd8) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x00068fd8) popup_call_audio_in_window_t

0x98de,	// (0x000637ba) bg_popup_call_pane_cp01_ParamLimits

0x98de,	// (0x000637ba) bg_popup_call_pane_cp01

0x98ec,	// (0x000637c8) call_thumbnail_pane_cp02

0x9963,	// (0x0006383f) call_type_pane_cp022

0x996b,	// (0x00063847) popup_call_audio_out_window_g1_ParamLimits

0x996b,	// (0x00063847) popup_call_audio_out_window_g1

0x997d,	// (0x00063859) popup_call_audio_out_window_g2_ParamLimits

0x997d,	// (0x00063859) popup_call_audio_out_window_g2

0x9989,	// (0x00063865) popup_call_audio_out_window_g3_ParamLimits

0x9989,	// (0x00063865) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x00068fdf) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x00068fdf) popup_call_audio_out_window_g

0x999b,	// (0x00063877) popup_call_audio_out_window_t1_ParamLimits

0x999b,	// (0x00063877) popup_call_audio_out_window_t1

0x99b3,	// (0x0006388f) popup_call_audio_out_window_t2_ParamLimits

0x99b3,	// (0x0006388f) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x00068fe6) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x00068fe6) popup_call_audio_out_window_t

0x99c8,	// (0x000638a4) bg_popup_call_pane_ParamLimits

0x99c8,	// (0x000638a4) bg_popup_call_pane

0x10e5,	// (0x0005afc1) call_thumbnail_pane_cp_ParamLimits

0x10e5,	// (0x0005afc1) call_thumbnail_pane_cp

0x9a4c,	// (0x00063928) call_type_pane_cp01_ParamLimits

0x9a4c,	// (0x00063928) call_type_pane_cp01

0x9a90,	// (0x0006396c) popup_call_audio_first_window_g1_ParamLimits

0x9a90,	// (0x0006396c) popup_call_audio_first_window_g1

0x9adc,	// (0x000639b8) popup_call_audio_first_window_g2_ParamLimits

0x9adc,	// (0x000639b8) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00068feb) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00068feb) popup_call_audio_first_window_g

0x9b20,	// (0x000639fc) popup_call_audio_first_window_t1_ParamLimits

0x9b20,	// (0x000639fc) popup_call_audio_first_window_t1

0x9bcc,	// (0x00063aa8) popup_call_audio_first_window_t4_ParamLimits

0x9bcc,	// (0x00063aa8) popup_call_audio_first_window_t4

0x9c58,	// (0x00063b34) popup_call_audio_first_window_t5_ParamLimits

0x9c58,	// (0x00063b34) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x00068ff0) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x00068ff0) popup_call_audio_first_window_t

0x9c87,	// (0x00063b63) bg_popup_call_pane_cp02

0x9c91,	// (0x00063b6d) call_type_pane_cp023

0x9c99,	// (0x00063b75) popup_call_audio_wait_window_g1

0x9ca1,	// (0x00063b7d) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00068ff7) popup_call_audio_wait_window_g

0x9ca9,	// (0x00063b85) popup_call_audio_wait_window_t3

0x9cb7,	// (0x00063b93) bg_popup_call_pane_cp03_ParamLimits

0x9cb7,	// (0x00063b93) bg_popup_call_pane_cp03

0x9d17,	// (0x00063bf3) call_thumbnail_pane_cp011_ParamLimits

0x9d17,	// (0x00063bf3) call_thumbnail_pane_cp011

0x9d23,	// (0x00063bff) call_type_pane_cp034_ParamLimits

0x9d23,	// (0x00063bff) call_type_pane_cp034

0x9d5f,	// (0x00063c3b) popup_call_audio_second_window_g1_ParamLimits

0x9d5f,	// (0x00063c3b) popup_call_audio_second_window_g1

0x9d9b,	// (0x00063c77) popup_call_audio_second_window_g2_ParamLimits

0x9d9b,	// (0x00063c77) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00068ffc) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00068ffc) popup_call_audio_second_window_g

0x9dd7,	// (0x00063cb3) popup_call_audio_second_window_t1_ParamLimits

0x9dd7,	// (0x00063cb3) popup_call_audio_second_window_t1

0x9e58,	// (0x00063d34) popup_call_audio_second_window_t2_ParamLimits

0x9e58,	// (0x00063d34) popup_call_audio_second_window_t2

0x9e8e,	// (0x00063d6a) popup_call_audio_second_window_t3_ParamLimits

0x9e8e,	// (0x00063d6a) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x00069001) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x00069001) popup_call_audio_second_window_t

0x9c87,	// (0x00063b63) bg_popup_call_pane_cp04

0x9ec4,	// (0x00063da0) list_conf_pane

0x9ecc,	// (0x00063da8) popup_call_audio_conf_window_t1

0x9eda,	// (0x00063db6) call_thumbnail_pane_g1

0x9ee2,	// (0x00063dbe) bg_pinb_pane_ParamLimits

0x9ee2,	// (0x00063dbe) bg_pinb_pane

0x9ef0,	// (0x00063dcc) find_pinb_pane

0x9ef9,	// (0x00063dd5) listscroll_pinb_pane_ParamLimits

0x9ef9,	// (0x00063dd5) listscroll_pinb_pane

0x9f08,	// (0x00063de4) pinb_bg_pane_g1

0x1109,	// (0x0005afe5) pinb_bg_pane_g2

0x1115,	// (0x0005aff1) pinb_bg_pane_g3

0x1121,	// (0x0005affd) pinb_bg_pane_g4

0x112d,	// (0x0005b009) pinb_bg_pane_g5

0x1139,	// (0x0005b015) pinb_bg_pane_g6

0x1144,	// (0x0005b020) pinb_bg_pane_g7

0x114f,	// (0x0005b02b) pinb_bg_pane_g8

0x115a,	// (0x0005b036) pinb_bg_pane_g9

0x1164,	// (0x0005b040) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x00069008) pinb_bg_pane_g

0x1181,	// (0x0005b05d) grid_pinb_pane

0x118a,	// (0x0005b066) list_pinb_pane

0x1193,	// (0x0005b06f) scroll_pane_cp01_ParamLimits

0x1193,	// (0x0005b06f) scroll_pane_cp01

0x9f12,	// (0x00063dee) find_pinb_pane_g1_ParamLimits

0x9f12,	// (0x00063dee) find_pinb_pane_g1

0x9f2a,	// (0x00063e06) find_pinb_pane_t1

0x9f3c,	// (0x00063e18) find_pinb_pane_t2

0x0001,

0xf146,	// (0x00069022) find_pinb_pane_t

0x9f51,	// (0x00063e2d) input_focus_pane_cp01_ParamLimits

0x9f51,	// (0x00063e2d) input_focus_pane_cp01

0x11a5,	// (0x0005b081) cell_pinb_pane_ParamLimits

0x11a5,	// (0x0005b081) cell_pinb_pane

0x11ce,	// (0x0005b0aa) cell_pinb_pane_g1_ParamLimits

0x11ce,	// (0x0005b0aa) cell_pinb_pane_g1

0x11de,	// (0x0005b0ba) cell_pinb_pane_g2_ParamLimits

0x11de,	// (0x0005b0ba) cell_pinb_pane_g2

0x9f5d,	// (0x00063e39) cell_pinb_pane_g3_ParamLimits

0x9f5d,	// (0x00063e39) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x00069027) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x00069027) cell_pinb_pane_g

0x9c87,	// (0x00063b63) grid_highlight_pane_cp01

0x11ea,	// (0x0005b0c6) list_pinb_item_pane_ParamLimits

0x11ea,	// (0x0005b0c6) list_pinb_item_pane

0x9c87,	// (0x00063b63) list_highlight_pane_cp02

0x11fc,	// (0x0005b0d8) list_pinb_item_pane_g1_ParamLimits

0x11fc,	// (0x0005b0d8) list_pinb_item_pane_g1

0x9f69,	// (0x00063e45) list_pinb_item_pane_g2_ParamLimits

0x9f69,	// (0x00063e45) list_pinb_item_pane_g2

0x1209,	// (0x0005b0e5) list_pinb_item_pane_g3_ParamLimits

0x1209,	// (0x0005b0e5) list_pinb_item_pane_g3

0x121a,	// (0x0005b0f6) list_pinb_item_pane_g4_ParamLimits

0x121a,	// (0x0005b0f6) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0006902e) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0006902e) list_pinb_item_pane_g

0x1226,	// (0x0005b102) list_pinb_item_pane_t1_ParamLimits

0x1226,	// (0x0005b102) list_pinb_item_pane_t1

0x125b,	// (0x0005b137) calc_display_pane

0x1283,	// (0x0005b15f) calc_paper_pane

0x12a6,	// (0x0005b182) grid_calc_pane

0x9c87,	// (0x00063b63) bg_list_pane_cp01

0x12d0,	// (0x0005b1ac) clock_g1

0x12d8,	// (0x0005b1b4) clock_g2

0x0001,

0xf15b,	// (0x00069037) clock_g

0x12e0,	// (0x0005b1bc) clock_t1_ParamLimits

0x12e0,	// (0x0005b1bc) clock_t1

0x12f5,	// (0x0005b1d1) clock_t2_ParamLimits

0x12f5,	// (0x0005b1d1) clock_t2

0x1307,	// (0x0005b1e3) clock_t3_ParamLimits

0x1307,	// (0x0005b1e3) clock_t3

0x1319,	// (0x0005b1f5) clock_t4_ParamLimits

0x1319,	// (0x0005b1f5) clock_t4

0x132b,	// (0x0005b207) clock_t5_ParamLimits

0x132b,	// (0x0005b207) clock_t5

0x1340,	// (0x0005b21c) clock_t6_ParamLimits

0x1340,	// (0x0005b21c) clock_t6

0x1352,	// (0x0005b22e) clock_t7_ParamLimits

0x1352,	// (0x0005b22e) clock_t7

0x1364,	// (0x0005b240) clock_t8_ParamLimits

0x1364,	// (0x0005b240) clock_t8

0x1378,	// (0x0005b254) clock_t9_ParamLimits

0x1378,	// (0x0005b254) clock_t9

0x0008,

0xf160,	// (0x0006903c) clock_t_ParamLimits

0xf160,	// (0x0006903c) clock_t

0x9f7d,	// (0x00063e59) popup_clock_analogue_window_cp02

0x9f7d,	// (0x00063e59) popup_clock_digital_window_cp01

0x9f85,	// (0x00063e61) listscroll_help_pane

0x9c87,	// (0x00063b63) phob_pre_status_pane

0x9f8f,	// (0x00063e6b) grid_qdial_pane

0x9c87,	// (0x00063b63) listscroll_mce_pane

0x9f99,	// (0x00063e75) bg_notes_pane

0x9fa3,	// (0x00063e7f) list_notes_pane

0x138c,	// (0x0005b268) scroll_pane_cp06

0x9fad,	// (0x00063e89) bg_calc_paper_pane

0x9fcb,	// (0x00063ea7) list_calc_pane

0x9fe5,	// (0x00063ec1) bg_calc_display_pane

0x1397,	// (0x0005b273) calc_display_pane_t1

0x13a9,	// (0x0005b285) calc_display_pane_t2

0x9ff1,	// (0x00063ecd) calc_display_pane_t3

0x0002,

0xf173,	// (0x0006904f) calc_display_pane_t

0x13bb,	// (0x0005b297) cell_calc_pane_ParamLimits

0x13bb,	// (0x0005b297) cell_calc_pane

0xa003,	// (0x00063edf) bg_calc_paper_pane_g1

0xa00f,	// (0x00063eeb) bg_calc_paper_pane_g2

0xa01b,	// (0x00063ef7) bg_calc_paper_pane_g3

0xa027,	// (0x00063f03) bg_calc_paper_pane_g4

0xa033,	// (0x00063f0f) bg_calc_paper_pane_g5

0x13f0,	// (0x0005b2cc) bg_calc_paper_pane_g6

0x13ff,	// (0x0005b2db) bg_calc_paper_pane_g7

0x140e,	// (0x0005b2ea) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00069056) bg_calc_paper_pane_g

0x1421,	// (0x0005b2fd) calc_bg_paper_pane_g9

0x1434,	// (0x0005b310) list_calc_item_pane_ParamLimits

0x1434,	// (0x0005b310) list_calc_item_pane

0xa03f,	// (0x00063f1b) list_calc_item_pane_g1

0xa04c,	// (0x00063f28) list_calc_item_pane_t1_ParamLimits

0xa04c,	// (0x00063f28) list_calc_item_pane_t1

0x1447,	// (0x0005b323) list_calc_item_pane_t2_ParamLimits

0x1447,	// (0x0005b323) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00069067) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00069067) list_calc_item_pane_t

0xa05e,	// (0x00063f3a) cell_calc_pane_g1

0xa068,	// (0x00063f44) grid_highlight_pane_cp02

0x1479,	// (0x0005b355) bg_calc_display_pane_g1

0x1482,	// (0x0005b35e) bg_calc_display_pane_g2

0x148c,	// (0x0005b368) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x00069071) bg_calc_display_pane_g

0x1495,	// (0x0005b371) cell_qdial_pane_ParamLimits

0x1495,	// (0x0005b371) cell_qdial_pane

0x14a9,	// (0x0005b385) cell_qdial_pane_g1_ParamLimits

0x14a9,	// (0x0005b385) cell_qdial_pane_g1

0x14bf,	// (0x0005b39b) cell_qdial_pane_g2_ParamLimits

0x14bf,	// (0x0005b39b) cell_qdial_pane_g2

0xa08a,	// (0x00063f66) cell_qdial_pane_g3_ParamLimits

0xa08a,	// (0x00063f66) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00069078) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00069078) cell_qdial_pane_g

0x14e6,	// (0x0005b3c2) cell_qdial_pane_t1_ParamLimits

0x14e6,	// (0x0005b3c2) cell_qdial_pane_t1

0x14fe,	// (0x0005b3da) cell_qdial_pane_t2_ParamLimits

0x14fe,	// (0x0005b3da) cell_qdial_pane_t2

0x1511,	// (0x0005b3ed) cell_qdial_pane_t3_ParamLimits

0x1511,	// (0x0005b3ed) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x00069081) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x00069081) cell_qdial_pane_t

0x9c87,	// (0x00063b63) grid_highlight_pane_cp04

0xa096,	// (0x00063f72) thumbnail_qdial_pane_ParamLimits

0xa096,	// (0x00063f72) thumbnail_qdial_pane

0xa0f2,	// (0x00063fce) list_help_pane

0xa0fb,	// (0x00063fd7) scroll_pane_cp02

0x1524,	// (0x0005b400) help_list_pane_t1_ParamLimits

0x1524,	// (0x0005b400) help_list_pane_t1

0xa104,	// (0x00063fe0) bg_notes_pane_g2

0xa10c,	// (0x00063fe8) bg_notes_pane_g3

0xa114,	// (0x00063ff0) notes_bg_pane_g1

0xa11c,	// (0x00063ff8) notes_bg_pane_g4

0xa124,	// (0x00064000) notes_bg_pane_g5

0xa12c,	// (0x00064008) notes_bg_pane_g6

0xa134,	// (0x00064010) notes_bg_pane_g7

0xa13c,	// (0x00064018) notes_bg_pane_g8

0xa144,	// (0x00064020) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0006909f) notes_bg_pane_g

0x1541,	// (0x0005b41d) list_notes_text_pane_ParamLimits

0x1541,	// (0x0005b41d) list_notes_text_pane

0xa14c,	// (0x00064028) list_notes_text_pane_g1

0x1556,	// (0x0005b432) list_notes_text_pane_t1

0x9fe5,	// (0x00063ec1) listscroll_cale_week_pane

0x1581,	// (0x0005b45d) bg_cale_heading_pane

0xa166,	// (0x00064042) bg_cale_pane_cp01

0x1595,	// (0x0005b471) cale_week_corner_pane

0x15ab,	// (0x0005b487) cale_week_day_heading_pane

0x15bf,	// (0x0005b49b) cale_week_scroll_pane_g1

0x15d0,	// (0x0005b4ac) cale_week_scroll_pane_g2

0x15e1,	// (0x0005b4bd) cale_week_scroll_pane_g3

0x15f2,	// (0x0005b4ce) cale_week_scroll_pane_g4

0x1603,	// (0x0005b4df) cale_week_scroll_pane_g5

0x1616,	// (0x0005b4f2) cale_week_scroll_pane_g6

0x1629,	// (0x0005b505) cale_week_scroll_pane_g7

0x163c,	// (0x0005b518) cale_week_scroll_pane_g8

0x164f,	// (0x0005b52b) cale_week_scroll_pane_g9

0x1660,	// (0x0005b53c) cale_week_scroll_pane_g10

0x1671,	// (0x0005b54d) cale_week_scroll_pane_g11

0x1682,	// (0x0005b55e) cale_week_scroll_pane_g12

0x1693,	// (0x0005b56f) cale_week_scroll_pane_g13

0x16a4,	// (0x0005b580) cale_week_scroll_pane_g14

0x16b5,	// (0x0005b591) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x000690ae) cale_week_scroll_pane_g

0x16c6,	// (0x0005b5a2) cale_week_time_pane

0x16d9,	// (0x0005b5b5) grid_cale_week_pane

0x16ee,	// (0x0005b5ca) scroll_pane_cp08

0x1708,	// (0x0005b5e4) cell_cale_week_pane_ParamLimits

0x1708,	// (0x0005b5e4) cell_cale_week_pane

0x1748,	// (0x0005b624) cale_week_day_heading_pane_t1

0x1775,	// (0x0005b651) cale_week_day_heading_pane_t2

0x17a2,	// (0x0005b67e) cale_week_day_heading_pane_t3

0x17cf,	// (0x0005b6ab) cale_week_day_heading_pane_t4

0x17fc,	// (0x0005b6d8) cale_week_day_heading_pane_t5

0x1829,	// (0x0005b705) cale_week_day_heading_pane_t6

0x1858,	// (0x0005b734) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x000690cd) cale_week_day_heading_pane_t

0xa191,	// (0x0006406d) bg_cale_side_pane

0x1885,	// (0x0005b761) cale_week_time_pane_t1

0x189d,	// (0x0005b779) cale_week_time_pane_t2

0x18b5,	// (0x0005b791) cale_week_time_pane_t3

0x18cd,	// (0x0005b7a9) cale_week_time_pane_t4

0x18e5,	// (0x0005b7c1) cale_week_time_pane_t5

0x18fd,	// (0x0005b7d9) cale_week_time_pane_t6

0x1915,	// (0x0005b7f1) cale_week_time_pane_t7

0x192d,	// (0x0005b809) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x000690dc) cale_week_time_pane_t

0x1945,	// (0x0005b821) cell_cale_week_pane_g2

0x195e,	// (0x0005b83a) cell_cale_week_pane_g3_ParamLimits

0x195e,	// (0x0005b83a) cell_cale_week_pane_g3

0xa19f,	// (0x0006407b) grid_highlight_pane_cp07

0xa1a7,	// (0x00064083) listscroll_gms_pane

0xa1b1,	// (0x0006408d) grid_gms_pane

0xa1ba,	// (0x00064096) listscroll_gms_pane_g1

0xa1c2,	// (0x0006409e) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x000690ed) listscroll_gms_pane_g

0x1976,	// (0x0005b852) scroll_pane_cp010

0x1981,	// (0x0005b85d) cell_gms_pane_ParamLimits

0x1981,	// (0x0005b85d) cell_gms_pane

0x1994,	// (0x0005b870) cell_gms_pane_g1

0xa1ca,	// (0x000640a6) cell_gms_pane_g2

0xa1d2,	// (0x000640ae) cell_gms_pane_g3

0xa1db,	// (0x000640b7) cell_gms_pane_g4

0x0003,

0xf216,	// (0x000690f2) cell_gms_pane_g

0xa1e4,	// (0x000640c0) grid_highlight_pane_cp09

0x3c66,	// (0x0005db42) phob_pre_status_pane_g1

0x3c6e,	// (0x0005db4a) phob_pre_status_pane_g2

0x3c76,	// (0x0005db52) phob_pre_status_pane_g3

0x3c7e,	// (0x0005db5a) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x000694e1) phob_pre_status_pane_g

0x3c8e,	// (0x0005db6a) phob_pre_status_pane_t1

0x3c9c,	// (0x0005db78) phob_pre_status_pane_t2

0x3cac,	// (0x0005db88) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x000694ec) phob_pre_status_pane_t

0x9c87,	// (0x00063b63) bg_list_pane_cp05

0x19a4,	// (0x0005b880) grid_vorec_pane

0xa1ec,	// (0x000640c8) vorec_t1

0xa1fa,	// (0x000640d6) vorec_t2

0xa208,	// (0x000640e4) vorec_t3

0xa216,	// (0x000640f2) vorec_t4

0xa224,	// (0x00064100) vorec_t5

0xa232,	// (0x0006410e) vorec_t6

0x0006,

0xf21f,	// (0x000690fb) vorec_t

0xa24e,	// (0x0006412a) wait_bar_pane_cp01

0x19ac,	// (0x0005b888) cell_vorec_pane_ParamLimits

0x19ac,	// (0x0005b888) cell_vorec_pane

0xa256,	// (0x00064132) cell_vorec_pane_g1

0x9c87,	// (0x00063b63) grid_highlight_pane_cp05

0x19d7,	// (0x0005b8b3) cams_zoom_pane

0x19e6,	// (0x0005b8c2) image_vga_pane

0x1a00,	// (0x0005b8dc) main_camera_pane_g1

0x1a12,	// (0x0005b8ee) main_camera_pane_g2

0x1a22,	// (0x0005b8fe) main_camera_pane_g3

0x1a32,	// (0x0005b90e) main_camera_pane_g4

0x1a42,	// (0x0005b91e) main_camera_pane_g5

0x1a52,	// (0x0005b92e) main_camera_pane_g6

0x1a64,	// (0x0005b940) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0006910a) main_camera_pane_g

0x1a74,	// (0x0005b950) main_camera_pane_t1

0x1a8a,	// (0x0005b966) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0006911b) main_camera_pane_t

0x1ac4,	// (0x0005b9a0) cams_zoom_pane_cp_ParamLimits

0x1ac4,	// (0x0005b9a0) cams_zoom_pane_cp

0x1aec,	// (0x0005b9c8) image_cif_pane_ParamLimits

0x1aec,	// (0x0005b9c8) image_cif_pane

0x1b27,	// (0x0005ba03) image_subqcif_pane

0x1b2f,	// (0x0005ba0b) main_video_pane_g1_ParamLimits

0x1b2f,	// (0x0005ba0b) main_video_pane_g1

0x1b53,	// (0x0005ba2f) main_video_pane_g2_ParamLimits

0x1b53,	// (0x0005ba2f) main_video_pane_g2

0x1b87,	// (0x0005ba63) main_video_pane_g3_ParamLimits

0x1b87,	// (0x0005ba63) main_video_pane_g3

0x1bb5,	// (0x0005ba91) main_video_pane_g4_ParamLimits

0x1bb5,	// (0x0005ba91) main_video_pane_g4

0x1be3,	// (0x0005babf) main_video_pane_g5_ParamLimits

0x1be3,	// (0x0005babf) main_video_pane_g5

0xa26c,	// (0x00064148) main_video_pane_g6_ParamLimits

0xa26c,	// (0x00064148) main_video_pane_g6

0x0006,

0xf244,	// (0x00069120) main_video_pane_g_ParamLimits

0xf244,	// (0x00069120) main_video_pane_g

0x1c10,	// (0x0005baec) main_video_pane_t1_ParamLimits

0x1c10,	// (0x0005baec) main_video_pane_t1

0xa286,	// (0x00064162) cams_zoom_pane_g1

0xa28f,	// (0x0006416b) cams_zoom_pane_g2

0xa298,	// (0x00064174) cams_zoom_pane_g3

0xa2a1,	// (0x0006417d) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0006912f) cams_zoom_pane_g

0x1c6d,	// (0x0005bb49) grid_cams_pane

0x1c87,	// (0x0005bb63) linegrid_cams_pane

0x1c9b,	// (0x0005bb77) cell_cams_pane_ParamLimits

0x1c9b,	// (0x0005bb77) cell_cams_pane

0xa2aa,	// (0x00064186) cams_burst_image_pane

0xa2b2,	// (0x0006418e) cell_cams_pane_g1

0x9c87,	// (0x00063b63) grid_highlight_pane_cp03

0xa05e,	// (0x00063f3a) mp_bg_pane_g1

0x9c87,	// (0x00063b63) bg_list_pane_cp03

0xbfa0,	// (0x00065e7c) bg_mp_pane

0xbfa8,	// (0x00065e84) grid_mp_pane

0xbfb0,	// (0x00065e8c) media_player_g1

0xbfb8,	// (0x00065e94) media_player_t1

0xbfc6,	// (0x00065ea2) media_player_t2

0xbfd4,	// (0x00065eb0) media_player_t3

0xbfe2,	// (0x00065ebe) media_player_t4

0xbff0,	// (0x00065ecc) media_player_t5

0xbffe,	// (0x00065eda) media_player_t6

0xc00c,	// (0x00065ee8) media_player_t7

0x0006,

0xf5ef,	// (0x000694cb) media_player_t

0xc01a,	// (0x00065ef6) wait_bar_pane_cp02

0xf5d4,	// (0x000694b0) main_usb_pane_t

0x3c5d,	// (0x0005db39) cell_mp_pane

0xa05e,	// (0x00063f3a) cell_mp_pane_g1

0x9c87,	// (0x00063b63) grid_highlight_pane_cp06

0xa2ba,	// (0x00064196) grid_skin_colour_pane

0xa2c2,	// (0x0006419e) list_highlight_pane_cp03

0x1db4,	// (0x0005bc90) skin_g1

0xa2ca,	// (0x000641a6) skin_t1

0xa2d9,	// (0x000641b5) skin_t2

0x0001,

0xf288,	// (0x00069164) skin_t

0x1dbc,	// (0x0005bc98) cell_skin_colour_pane_ParamLimits

0x1dbc,	// (0x0005bc98) cell_skin_colour_pane

0xa2e7,	// (0x000641c3) cell_skin_colour_pane_g1

0x1e33,	// (0x0005bd0f) call_video_g1_ParamLimits

0x1e33,	// (0x0005bd0f) call_video_g1

0x1e4f,	// (0x0005bd2b) call_video_g2_ParamLimits

0x1e4f,	// (0x0005bd2b) call_video_g2

0x0001,

0xf28d,	// (0x00069169) call_video_g_ParamLimits

0xf28d,	// (0x00069169) call_video_g

0x1ea1,	// (0x0005bd7d) call_video_uplink_pane_cp1_ParamLimits

0x1ea1,	// (0x0005bd7d) call_video_uplink_pane_cp1

0xa2f9,	// (0x000641d5) call_video_uplink_pane_cp2

0x1f40,	// (0x0005be1c) video_down_crop_pane_ParamLimits

0x1f40,	// (0x0005be1c) video_down_crop_pane

0x2037,	// (0x0005bf13) video_down_pane_ParamLimits

0x2037,	// (0x0005bf13) video_down_pane

0xa301,	// (0x000641dd) video_down_subqcif_pane_ParamLimits

0xa301,	// (0x000641dd) video_down_subqcif_pane

0xa319,	// (0x000641f5) video_down_subqcif_pane_cp_ParamLimits

0xa319,	// (0x000641f5) video_down_subqcif_pane_cp

0xa33d,	// (0x00064219) im_reading_pane_ParamLimits

0xa33d,	// (0x00064219) im_reading_pane

0x2145,	// (0x0005c021) im_writing_pane_ParamLimits

0x2145,	// (0x0005c021) im_writing_pane

0x215b,	// (0x0005c037) im_reading_pane_t1

0xa357,	// (0x00064233) list_im_pane

0xa368,	// (0x00064244) scroll_pane_cp07

0x2194,	// (0x0005c070) im_writing_pane_t1_ParamLimits

0x2194,	// (0x0005c070) im_writing_pane_t1

0xa381,	// (0x0006425d) im_writing_pane_t2_ParamLimits

0xa381,	// (0x0006425d) im_writing_pane_t2

0x0001,

0xf297,	// (0x00069173) im_writing_pane_t_ParamLimits

0xf297,	// (0x00069173) im_writing_pane_t

0x9c87,	// (0x00063b63) input_focus_pane_cp04

0x9c87,	// (0x00063b63) input_focus_pane_cp05

0x21a9,	// (0x0005c085) list_im_single_pane_ParamLimits

0x21a9,	// (0x0005c085) list_im_single_pane

0x21bd,	// (0x0005c099) list_single_im_pane_t1

0x3c1d,	// (0x0005daf9) blid_accuracy_pane

0x3c25,	// (0x0005db01) blid_compass_pane

0x3c2f,	// (0x0005db0b) main_location_t1

0x3c3f,	// (0x0005db1b) main_location_t2

0x3c4f,	// (0x0005db2b) main_location_t3

0x0002,

0xf5fe,	// (0x000694da) main_location_t

0x9c87,	// (0x00063b63) aid_levels_location

0xa05e,	// (0x00063f3a) blid_accuracy_pane_g1

0xa05e,	// (0x00063f3a) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x000691d5) blid_accuracy_pane_g

0xa3c9,	// (0x000642a5) wml_content_pane

0xa407,	// (0x000642e3) wml_button_pane_ParamLimits

0xa407,	// (0x000642e3) wml_button_pane

0x21cc,	// (0x0005c0a8) wml_list_single_large_pane_ParamLimits

0x21cc,	// (0x0005c0a8) wml_list_single_large_pane

0x21e1,	// (0x0005c0bd) wml_list_single_medium_pane_ParamLimits

0x21e1,	// (0x0005c0bd) wml_list_single_medium_pane

0x21f7,	// (0x0005c0d3) wml_list_single_small_pane_ParamLimits

0x21f7,	// (0x0005c0d3) wml_list_single_small_pane

0xa41b,	// (0x000642f7) wml_selection_box_pane_ParamLimits

0xa41b,	// (0x000642f7) wml_selection_box_pane

0xa42e,	// (0x0006430a) wml_list_single_pane_t1

0xa43d,	// (0x00064319) wml_list_single_medium_pane_t1

0xa44c,	// (0x00064328) wml_list_single_large_pane_t1

0xa45b,	// (0x00064337) input_focus_pane_cp02_ParamLimits

0xa45b,	// (0x00064337) input_focus_pane_cp02

0xa46e,	// (0x0006434a) wml_selection_box_pane_g1

0xa477,	// (0x00064353) wml_selection_box_pane_t1_ParamLimits

0xa477,	// (0x00064353) wml_selection_box_pane_t1

0x9ee2,	// (0x00063dbe) bg_wml_button_pane_ParamLimits

0x9ee2,	// (0x00063dbe) bg_wml_button_pane

0xa48f,	// (0x0006436b) wml_button_pane_g1

0xa497,	// (0x00064373) wml_button_pane_t1

0xa48f,	// (0x0006436b) wml_button_bg_pane_g1

0xa4a7,	// (0x00064383) wml_button_bg_pane_g2

0xa4af,	// (0x0006438b) wml_button_bg_pane_g3

0xa4b7,	// (0x00064393) wml_button_bg_pane_g4

0xa4bf,	// (0x0006439b) wml_button_bg_pane_g5

0xa4c7,	// (0x000643a3) wml_button_bg_pane_g6

0xa4cf,	// (0x000643ab) wml_button_bg_pane_g7

0xa4d7,	// (0x000643b3) wml_button_bg_pane_g8

0xa4df,	// (0x000643bb) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x00069178) wml_button_bg_pane_g

0x220f,	// (0x0005c0eb) bg_list_pane_cp02

0xa4e7,	// (0x000643c3) mce_header_pane_ParamLimits

0xa4e7,	// (0x000643c3) mce_header_pane

0xa4fd,	// (0x000643d9) mce_icon_pane

0xa4fd,	// (0x000643d9) mce_image_pane

0xa506,	// (0x000643e2) mce_text_pane_ParamLimits

0xa506,	// (0x000643e2) mce_text_pane

0x2217,	// (0x0005c0f3) scroll_pane_cp03

0xa3ff,	// (0x000642db) scroll_pane_cp04

0xa519,	// (0x000643f5) scroll_pane_cp05_ParamLimits

0xa519,	// (0x000643f5) scroll_pane_cp05

0x2221,	// (0x0005c0fd) mce_header_field_pane_ParamLimits

0x2221,	// (0x0005c0fd) mce_header_field_pane

0x2238,	// (0x0005c114) mce_header_field_pane_2_ParamLimits

0x2238,	// (0x0005c114) mce_header_field_pane_2

0x224e,	// (0x0005c12a) mce_header_field_pane_3

0x2256,	// (0x0005c132) list_single_mce_message_pane_ParamLimits

0x2256,	// (0x0005c132) list_single_mce_message_pane

0x226b,	// (0x0005c147) list_single_mce_smart_pane_ParamLimits

0x226b,	// (0x0005c147) list_single_mce_smart_pane

0xa525,	// (0x00064401) input_focus_pane_cp03

0xa52e,	// (0x0006440a) list_header_data_pane

0x228b,	// (0x0005c167) mce_header_field_pane_t1

0x229b,	// (0x0005c177) list_single_mce_header_pane_ParamLimits

0x229b,	// (0x0005c177) list_single_mce_header_pane

0xa536,	// (0x00064412) list_single_mce_header_pane_t1

0xa545,	// (0x00064421) list_single_mce_message_pane_g1

0xa54d,	// (0x00064429) list_single_mce_message_pane_t1

0x22cd,	// (0x0005c1a9) bg_cale_heading_pane_cp01_ParamLimits

0x22cd,	// (0x0005c1a9) bg_cale_heading_pane_cp01

0xa55b,	// (0x00064437) bg_cale_pane_cp02_ParamLimits

0xa55b,	// (0x00064437) bg_cale_pane_cp02

0x22f0,	// (0x0005c1cc) cale_month_corner_pane

0x2306,	// (0x0005c1e2) cale_month_day_heading_pane_ParamLimits

0x2306,	// (0x0005c1e2) cale_month_day_heading_pane

0x2339,	// (0x0005c215) cale_month_pane_g1_ParamLimits

0x2339,	// (0x0005c215) cale_month_pane_g1

0x2355,	// (0x0005c231) cale_month_pane_g2_ParamLimits

0x2355,	// (0x0005c231) cale_month_pane_g2

0x2370,	// (0x0005c24c) cale_month_pane_g3_ParamLimits

0x2370,	// (0x0005c24c) cale_month_pane_g3

0x239c,	// (0x0005c278) cale_month_pane_g4_ParamLimits

0x239c,	// (0x0005c278) cale_month_pane_g4

0x23c8,	// (0x0005c2a4) cale_month_pane_g5_ParamLimits

0x23c8,	// (0x0005c2a4) cale_month_pane_g5

0x23fc,	// (0x0005c2d8) cale_month_pane_g6_ParamLimits

0x23fc,	// (0x0005c2d8) cale_month_pane_g6

0x2438,	// (0x0005c314) cale_month_pane_g7_ParamLimits

0x2438,	// (0x0005c314) cale_month_pane_g7

0x2474,	// (0x0005c350) cale_month_pane_g8_ParamLimits

0x2474,	// (0x0005c350) cale_month_pane_g8

0x24b0,	// (0x0005c38c) cale_month_pane_g9_ParamLimits

0x24b0,	// (0x0005c38c) cale_month_pane_g9

0x24ea,	// (0x0005c3c6) cale_month_pane_g10_ParamLimits

0x24ea,	// (0x0005c3c6) cale_month_pane_g10

0x2524,	// (0x0005c400) cale_month_pane_g11_ParamLimits

0x2524,	// (0x0005c400) cale_month_pane_g11

0x255e,	// (0x0005c43a) cale_month_pane_g12_ParamLimits

0x255e,	// (0x0005c43a) cale_month_pane_g12

0x2598,	// (0x0005c474) cale_month_pane_g13_ParamLimits

0x2598,	// (0x0005c474) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0006918b) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0006918b) cale_month_pane_g

0x25d2,	// (0x0005c4ae) cale_month_week_pane

0x25e5,	// (0x0005c4c1) grid_cale_month_pane_ParamLimits

0x25e5,	// (0x0005c4c1) grid_cale_month_pane

0x2613,	// (0x0005c4ef) cale_month_day_heading_pane_t1

0x2671,	// (0x0005c54d) cale_month_day_heading_pane_t2

0x26d6,	// (0x0005c5b2) cale_month_day_heading_pane_t3

0x273b,	// (0x0005c617) cale_month_day_heading_pane_t4

0x27a0,	// (0x0005c67c) cale_month_day_heading_pane_t5

0x2815,	// (0x0005c6f1) cale_month_day_heading_pane_t6

0x288a,	// (0x0005c766) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x000691a6) cale_month_day_heading_pane_t

0xa191,	// (0x0006406d) bg_cale_side_pane_cp01

0x28ff,	// (0x0005c7db) cale_month_week_pane_t1

0x2916,	// (0x0005c7f2) cale_month_week_pane_t2

0x292d,	// (0x0005c809) cale_month_week_pane_t3

0x2944,	// (0x0005c820) cale_month_week_pane_t4

0x295b,	// (0x0005c837) cale_month_week_pane_t5

0x2972,	// (0x0005c84e) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x000691b5) cale_month_week_pane_t

0x2989,	// (0x0005c865) cell_cale_month_pane_ParamLimits

0x2989,	// (0x0005c865) cell_cale_month_pane

0xa590,	// (0x0006446c) cell_cale_month_pane_g1

0x2a89,	// (0x0005c965) cell_cale_month_pane_t1_ParamLimits

0x2a89,	// (0x0005c965) cell_cale_month_pane_t1

0xa19f,	// (0x0006407b) grid_highlight_pane_cp08

0xa05e,	// (0x00063f3a) main_smil_g1

0x2aa5,	// (0x0005c981) smil_status_pane

0xa59c,	// (0x00064478) smil_text_pane

0xbec0,	// (0x00065d9c) bg_popup_call3_rect_pane_g8

0xbec8,	// (0x00065da4) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0006946e) bg_popup_call3_rect_pane_g

0xc142,	// (0x0006601e) smil_status_volume_pane_g1

0xa5a6,	// (0x00064482) smil_status_pane_t1

0xc175,	// (0x00066051) volume_smil_pane

0xa5bd,	// (0x00064499) list_smil_text_pane

0x2ab8,	// (0x0005c994) scroll_pane_cp011

0x2ac3,	// (0x0005c99f) smil_text_list_pane_t1_ParamLimits

0x2ac3,	// (0x0005c99f) smil_text_list_pane_t1

0xa5c7,	// (0x000644a3) aid_volume_smil_ParamLimits

0xa5c7,	// (0x000644a3) aid_volume_smil

0xa05e,	// (0x00063f3a) smil_volume_pane_g1

0xa05e,	// (0x00063f3a) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x000691d5) smil_volume_pane_g

0x9fe5,	// (0x00063ec1) listscroll_cale_day_pane

0xa5e9,	// (0x000644c5) bg_cale_pane

0xa601,	// (0x000644dd) list_cale_pane

0xa612,	// (0x000644ee) scroll_pane_cp09

0xa623,	// (0x000644ff) cale_bg_pane_g1

0xa62b,	// (0x00064507) cale_bg_pane_g2

0xa633,	// (0x0006450f) cale_bg_pane_g3

0xa63b,	// (0x00064517) cale_bg_pane_g4

0xa643,	// (0x0006451f) cale_bg_pane_g5

0xa64b,	// (0x00064527) cale_bg_pane_g6

0xa653,	// (0x0006452f) cale_bg_pane_g7

0xa65b,	// (0x00064537) cale_bg_pane_g8

0xa663,	// (0x0006453f) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x000691da) cale_bg_pane_g

0x19ac,	// (0x0005b888) list_cale_time_pane_ParamLimits

0x19ac,	// (0x0005b888) list_cale_time_pane

0xa66b,	// (0x00064547) list_cale_time_pane_g1_ParamLimits

0xa66b,	// (0x00064547) list_cale_time_pane_g1

0xa677,	// (0x00064553) list_cale_time_pane_g2_ParamLimits

0xa677,	// (0x00064553) list_cale_time_pane_g2

0x2b09,	// (0x0005c9e5) list_cale_time_pane_g3_ParamLimits

0x2b09,	// (0x0005c9e5) list_cale_time_pane_g3

0x2b17,	// (0x0005c9f3) list_cale_time_pane_g4_ParamLimits

0x2b17,	// (0x0005c9f3) list_cale_time_pane_g4

0x2b25,	// (0x0005ca01) list_cale_time_pane_g5_ParamLimits

0x2b25,	// (0x0005ca01) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x000691ed) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x000691ed) list_cale_time_pane_g

0xa691,	// (0x0006456d) list_cale_time_pane_t1_ParamLimits

0xa691,	// (0x0006456d) list_cale_time_pane_t1

0xa6b9,	// (0x00064595) list_cale_time_pane_t2_ParamLimits

0xa6b9,	// (0x00064595) list_cale_time_pane_t2

0x2e96,	// (0x0005cd72) aid_blid_cardinal_pane

0x2ed4,	// (0x0005cdb0) compass_pane_t4

0xa6e1,	// (0x000645bd) list_cale_time_pane_t4_ParamLimits

0xa6e1,	// (0x000645bd) list_cale_time_pane_t4

0x2ee2,	// (0x0005cdbe) compass_pane_t5

0x2ef0,	// (0x0005cdcc) compass_pane_t6

0x2efe,	// (0x0005cdda) compass_pane_t7

0xab8b,	// (0x00064a67) navi_pane_cc_t1

0xacf2,	// (0x00064bce) aid_phob_thumbnail_center_pane

0x3635,	// (0x0005d511) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x000691fa) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x000691fa) list_cale_time_pane_t

0x98de,	// (0x000637ba) bg_popup_window_pane_cp02_ParamLimits

0x98de,	// (0x000637ba) bg_popup_window_pane_cp02

0xa709,	// (0x000645e5) heading_pane_cp01_ParamLimits

0xa709,	// (0x000645e5) heading_pane_cp01

0xa715,	// (0x000645f1) loc_req_pane_ParamLimits

0xa715,	// (0x000645f1) loc_req_pane

0xa725,	// (0x00064601) loc_type_pane_ParamLimits

0xa725,	// (0x00064601) loc_type_pane

0xa737,	// (0x00064613) loc_type_pane_t1_ParamLimits

0xa737,	// (0x00064613) loc_type_pane_t1

0xa749,	// (0x00064625) loc_type_pane_t2_ParamLimits

0xa749,	// (0x00064625) loc_type_pane_t2

0xa75b,	// (0x00064637) loc_type_pane_t3_ParamLimits

0xa75b,	// (0x00064637) loc_type_pane_t3

0x0002,

0xf325,	// (0x00069201) loc_type_pane_t_ParamLimits

0xf325,	// (0x00069201) loc_type_pane_t

0xa76d,	// (0x00064649) list_loc_req_pane

0xa777,	// (0x00064653) scroll_pane_cp012

0x2b33,	// (0x0005ca0f) list_single_loc_request_popup_menu_pane_ParamLimits

0x2b33,	// (0x0005ca0f) list_single_loc_request_popup_menu_pane

0xa782,	// (0x0006465e) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa782,	// (0x0006465e) list_single_loc_request_popup_menu_pane_g1

0xa78e,	// (0x0006466a) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa78e,	// (0x0006466a) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x00069208) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x00069208) list_single_loc_request_popup_menu_pane_g

0xa79a,	// (0x00064676) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa79a,	// (0x00064676) list_single_loc_request_popup_menu_pane_t1

0x9ee2,	// (0x00063dbe) bg_popup_window_pane_cp03_ParamLimits

0x9ee2,	// (0x00063dbe) bg_popup_window_pane_cp03

0xa7b0,	// (0x0006468c) heading_loc_req_pane_ParamLimits

0xa7b0,	// (0x0006468c) heading_loc_req_pane

0x2b40,	// (0x0005ca1c) popup_dyc_status_message_window_g1_ParamLimits

0x2b40,	// (0x0005ca1c) popup_dyc_status_message_window_g1

0x2b54,	// (0x0005ca30) popup_dyc_status_message_window_t1_ParamLimits

0x2b54,	// (0x0005ca30) popup_dyc_status_message_window_t1

0x2b69,	// (0x0005ca45) popup_dyc_status_message_window_t2_ParamLimits

0x2b69,	// (0x0005ca45) popup_dyc_status_message_window_t2

0x2b7e,	// (0x0005ca5a) popup_dyc_status_message_window_t3_ParamLimits

0x2b7e,	// (0x0005ca5a) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x0006920d) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x0006920d) popup_dyc_status_message_window_t

0x9c87,	// (0x00063b63) bg_heading_pane_cp01

0xa7bc,	// (0x00064698) heading_loc_req_pane_g1

0xa7c4,	// (0x000646a0) heading_loc_req_pane_g2

0xa7cc,	// (0x000646a8) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x00069214) heading_loc_req_pane_g

0xa7d4,	// (0x000646b0) heading_loc_req_pane_t1

0xa7e3,	// (0x000646bf) bg_popup_sub_pane_cp01_ParamLimits

0xa7e3,	// (0x000646bf) bg_popup_sub_pane_cp01

0xa7f1,	// (0x000646cd) popup_cale_events_window_g1_ParamLimits

0xa7f1,	// (0x000646cd) popup_cale_events_window_g1

0xa811,	// (0x000646ed) popup_cale_events_window_g2_ParamLimits

0xa811,	// (0x000646ed) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x00069248) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x00069248) popup_cale_events_window_g

0xa831,	// (0x0006470d) popup_cale_events_window_t1_ParamLimits

0xa831,	// (0x0006470d) popup_cale_events_window_t1

0xa843,	// (0x0006471f) popup_cale_events_window_t2_ParamLimits

0xa843,	// (0x0006471f) popup_cale_events_window_t2

0xa881,	// (0x0006475d) popup_cale_events_window_t3_ParamLimits

0xa881,	// (0x0006475d) popup_cale_events_window_t3

0xa8bb,	// (0x00064797) popup_cale_events_window_t4_ParamLimits

0xa8bb,	// (0x00064797) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x0006924d) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x0006924d) popup_cale_events_window_t

0x2c81,	// (0x0005cb5d) call_type_pane

0x2c91,	// (0x0005cb6d) popup_call_status_window_g1

0x2ca5,	// (0x0005cb81) popup_call_status_window_g2

0x2cb9,	// (0x0005cb95) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x00069256) popup_call_status_window_g

0xa8f1,	// (0x000647cd) call_type_pane_g1

0xa8fa,	// (0x000647d6) call_type_pane_g2

0x0001,

0xf381,	// (0x0006925d) call_type_pane_g

0x9c87,	// (0x00063b63) bg_popup_sub_pane_cp02

0xa903,	// (0x000647df) listscroll_popup_wml_pane

0xa90b,	// (0x000647e7) list_wml_pane

0xa915,	// (0x000647f1) scroll_pane_cp013

0xa920,	// (0x000647fc) list_single_graphic_popup_wml_pane_ParamLimits

0xa920,	// (0x000647fc) list_single_graphic_popup_wml_pane

0xa05e,	// (0x00063f3a) list_single_graphic_popup_wml_pane_g1

0xa934,	// (0x00064810) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x00069262) list_single_graphic_popup_wml_pane_g

0xa93c,	// (0x00064818) list_single_graphic_popup_wml_pane_t1

0xa952,	// (0x0006482e) aid_call_pane

0x9eda,	// (0x00063db6) popup_clock_analogue_window_g1

0x9eda,	// (0x00063db6) popup_clock_analogue_window_g2

0xa95a,	// (0x00064836) popup_clock_analogue_window_g3

0xa95a,	// (0x00064836) popup_clock_analogue_window_g4

0xa05e,	// (0x00063f3a) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x00069267) popup_clock_analogue_window_g

0xa962,	// (0x0006483e) popup_clock_analogue_window_t1

0xa970,	// (0x0006484c) clock_digital_number_pane_ParamLimits

0xa970,	// (0x0006484c) clock_digital_number_pane

0xa97c,	// (0x00064858) clock_digital_number_pane_cp02_ParamLimits

0xa97c,	// (0x00064858) clock_digital_number_pane_cp02

0xa988,	// (0x00064864) clock_digital_number_pane_cp03_ParamLimits

0xa988,	// (0x00064864) clock_digital_number_pane_cp03

0xa994,	// (0x00064870) clock_digital_number_pane_cp04_ParamLimits

0xa994,	// (0x00064870) clock_digital_number_pane_cp04

0xa9a4,	// (0x00064880) clock_digital_separator_pane_ParamLimits

0xa9a4,	// (0x00064880) clock_digital_separator_pane

0xa9b0,	// (0x0006488c) popup_clock_digital_window_t1

0xa05e,	// (0x00063f3a) clock_digital_number_pane_g1

0xa05e,	// (0x00063f3a) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x000691d5) clock_digital_number_pane_g

0xa05e,	// (0x00063f3a) clock_digital_separator_pane_g1

0xa05e,	// (0x00063f3a) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x000691d5) clock_digital_separator_pane_g

0x9c87,	// (0x00063b63) bg_popup_window_pane_cp04

0xa9cd,	// (0x000648a9) heading_pane_cp03

0xa9d5,	// (0x000648b1) listscroll_popup_gms_pane

0xa9dd,	// (0x000648b9) grid_large_graphic_popup_pane

0xa9e7,	// (0x000648c3) listscroll_popup_gms_pane_g1

0xa9ef,	// (0x000648cb) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x00069272) listscroll_popup_gms_pane_g

0xa3ff,	// (0x000642db) scroll_pane_cp014

0x2cc8,	// (0x0005cba4) cell_large_graphic_popup_pane_ParamLimits

0x2cc8,	// (0x0005cba4) cell_large_graphic_popup_pane

0x2ce0,	// (0x0005cbbc) cell_large_graphic_popup_pane_g1_ParamLimits

0x2ce0,	// (0x0005cbbc) cell_large_graphic_popup_pane_g1

0xa9f7,	// (0x000648d3) cell_large_graphic_popup_pane_g2_ParamLimits

0xa9f7,	// (0x000648d3) cell_large_graphic_popup_pane_g2

0xaa03,	// (0x000648df) cell_large_graphic_popup_pane_g3_ParamLimits

0xaa03,	// (0x000648df) cell_large_graphic_popup_pane_g3

0xaa10,	// (0x000648ec) cell_large_graphic_popup_pane_g4_ParamLimits

0xaa10,	// (0x000648ec) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x00069277) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x00069277) cell_large_graphic_popup_pane_g

0xaa20,	// (0x000648fc) grid_highlight_pane_cp010

0xa05e,	// (0x00063f3a) bg_popup_call_pane_g1

0xaa2a,	// (0x00064906) list_single_graphic_popup_conf_pane_ParamLimits

0xaa2a,	// (0x00064906) list_single_graphic_popup_conf_pane

0xaa3d,	// (0x00064919) list_highlight_pane_cp01

0xaa46,	// (0x00064922) list_single_graphic_popup_conf_pane_g1

0xaa4e,	// (0x0006492a) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x00069280) list_single_graphic_popup_conf_pane_g

0xaa56,	// (0x00064932) list_single_graphic_popup_conf_pane_t1

0xaa64,	// (0x00064940) linegrid_cams_pane_g1

0x2cec,	// (0x0005cbc8) linegrid_cams_pane_g2

0xa1d2,	// (0x000640ae) linegrid_cams_pane_g3

0xaa6d,	// (0x00064949) linegrid_cams_pane_g4

0x2cf5,	// (0x0005cbd1) linegrid_cams_pane_g5

0x2cfe,	// (0x0005cbda) linegrid_cams_pane_g6

0xa1db,	// (0x000640b7) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x00069285) linegrid_cams_pane_g

0xaa76,	// (0x00064952) popup_clock_analogue_window

0xaa76,	// (0x00064952) popup_clock_digital_window

0x9c87,	// (0x00063b63) popup_phob_thumbnail_window

0xa05e,	// (0x00063f3a) call_video_uplink_pane_g1

0xaa7f,	// (0x0006495b) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x00069294) call_video_uplink_pane_g

0xaa87,	// (0x00064963) video_uplink_pane

0xaa8f,	// (0x0006496b) mce_image_pane_g1

0x2d09,	// (0x0005cbe5) mce_image_pane_g2

0x2d13,	// (0x0005cbef) mce_image_pane_g3

0x2d1b,	// (0x0005cbf7) mce_image_pane_g4

0x2d23,	// (0x0005cbff) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x00069299) mce_image_pane_g

0xaa99,	// (0x00064975) control_top_pane_stacon_cp01_ParamLimits

0xaa99,	// (0x00064975) control_top_pane_stacon_cp01

0xaaad,	// (0x00064989) uni_indicator_pane_stacon_cp01_ParamLimits

0xaaad,	// (0x00064989) uni_indicator_pane_stacon_cp01

0xaabe,	// (0x0006499a) bg_popup_sub_pane_cp03

0x2d2b,	// (0x0005cc07) chi_dic_find_pane

0x2d33,	// (0x0005cc0f) listscroll_chi_dic_pane

0x2d3c,	// (0x0005cc18) main_pane_chidic_g1

0xaac8,	// (0x000649a4) chi_dic_find_pane_t1

0xaad6,	// (0x000649b2) find_chidic_pane

0xaadf,	// (0x000649bb) chi_dic_list_pane_ParamLimits

0xaadf,	// (0x000649bb) chi_dic_list_pane

0xaaf0,	// (0x000649cc) scroll_pane_cp020

0xaaf8,	// (0x000649d4) find_chidic_pane_t1

0x9c87,	// (0x00063b63) input_focus_pane_cp06

0x2d4f,	// (0x0005cc2b) list_chi_dic_pane_ParamLimits

0x2d4f,	// (0x0005cc2b) list_chi_dic_pane

0x2d61,	// (0x0005cc3d) list_chi_dic_pane_t1_ParamLimits

0x2d61,	// (0x0005cc3d) list_chi_dic_pane_t1

0x9c87,	// (0x00063b63) list_highlight_pane_cp020

0xab07,	// (0x000649e3) bg_cale_heading_pane_g1

0x2d74,	// (0x0005cc50) bg_cale_heading_pane_g2

0x2d7c,	// (0x0005cc58) bg_cale_heading_pane_g3

0x2d84,	// (0x0005cc60) bg_cale_heading_pane_g4

0x2d8e,	// (0x0005cc6a) bg_cale_heading_pane_g5

0x2d98,	// (0x0005cc74) bg_cale_heading_pane_g6

0x2da0,	// (0x0005cc7c) bg_cale_heading_pane_g7

0x2da8,	// (0x0005cc84) bg_cale_heading_pane_g8

0x2db2,	// (0x0005cc8e) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x000692a4) bg_cale_heading_pane_g

0xab07,	// (0x000649e3) bg_cale_side_pane_g1

0x2dbc,	// (0x0005cc98) bg_cale_side_pane_g2

0x2dc4,	// (0x0005cca0) bg_cale_side_pane_g3

0x2dcc,	// (0x0005cca8) bg_cale_side_pane_g4

0x2dd4,	// (0x0005ccb0) bg_cale_side_pane_g5

0x2ddc,	// (0x0005ccb8) bg_cale_side_pane_g6

0x2de4,	// (0x0005ccc0) bg_cale_side_pane_g7

0x2dec,	// (0x0005ccc8) bg_cale_side_pane_g8

0x2df4,	// (0x0005ccd0) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x000692b7) bg_cale_side_pane_g

0x2dfc,	// (0x0005ccd8) popup_call_status_window_ParamLimits

0x2dfc,	// (0x0005ccd8) popup_call_status_window

0xab0f,	// (0x000649eb) stacon_top_pane

0xab17,	// (0x000649f3) status_pane_ParamLimits

0xab17,	// (0x000649f3) status_pane

0xab2c,	// (0x00064a08) status_small_pane

0xab34,	// (0x00064a10) control_pane

0x9c87,	// (0x00063b63) stacon_bottom_pane

0xab3c,	// (0x00064a18) list_single_mce_smart_pane_t1_ParamLimits

0xab3c,	// (0x00064a18) list_single_mce_smart_pane_t1

0xab4f,	// (0x00064a2b) list_single_mce_smart_pane_t2_ParamLimits

0xab4f,	// (0x00064a2b) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x000692ca) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x000692ca) list_single_mce_smart_pane_t

0x2e45,	// (0x0005cd21) compass_pane

0x2e4e,	// (0x0005cd2a) main_location2_pane_t1

0x2e60,	// (0x0005cd3c) main_location2_pane_t2

0x2e72,	// (0x0005cd4e) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x000692cf) main_location2_pane_t

0xab6e,	// (0x00064a4a) compass_pane_g1_ParamLimits

0xab6e,	// (0x00064a4a) compass_pane_g1

0x2eb6,	// (0x0005cd92) compass_pane_t1

0x2ec5,	// (0x0005cda1) compass_pane_t2

0x0005,

0xf3fc,	// (0x000692d8) compass_pane_t

0x2f0c,	// (0x0005cde8) text_secondary_cp61

0xab82,	// (0x00064a5e) navi_pane_cams_g5

0xaba5,	// (0x00064a81) navi_pane_im_t1

0xabb3,	// (0x00064a8f) navi_pane_mp_g1_ParamLimits

0xabb3,	// (0x00064a8f) navi_pane_mp_g1

0xabc7,	// (0x00064aa3) navi_pane_mp_g2_ParamLimits

0xabc7,	// (0x00064aa3) navi_pane_mp_g2

0xabd3,	// (0x00064aaf) navi_pane_mp_g3_ParamLimits

0xabd3,	// (0x00064aaf) navi_pane_mp_g3

0x0002,

0xf410,	// (0x000692ec) navi_pane_mp_g_ParamLimits

0xf410,	// (0x000692ec) navi_pane_mp_g

0xabdf,	// (0x00064abb) navi_pane_mp_t1

0xabed,	// (0x00064ac9) navi_pane_mp_t2

0x0002,

0xf417,	// (0x000692f3) navi_pane_mp_t

0xac29,	// (0x00064b05) navi_pane_vt_g1

0xabdf,	// (0x00064abb) navi_pane_vt_t1

0xac31,	// (0x00064b0d) navi_slider_pane

0xac39,	// (0x00064b15) zooming_pane

0xac41,	// (0x00064b1d) navi_slider_pane_g1

0xac4a,	// (0x00064b26) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x000692fa) navi_slider_pane_g

0xac77,	// (0x00064b53) aid_levels_zoom

0xac7f,	// (0x00064b5b) zooming_pane_g1

0xac87,	// (0x00064b63) zooming_pane_g2

0xac87,	// (0x00064b63) zooming_pane_g3

0x0002,

0xf42d,	// (0x00069309) zooming_pane_g

0xac8f,	// (0x00064b6b) level_10_zoom

0xac98,	// (0x00064b74) level_11_zoom

0xaca1,	// (0x00064b7d) level_1_zoom

0xacaa,	// (0x00064b86) level_2_zoom

0xacb3,	// (0x00064b8f) level_3_zoom

0xacbc,	// (0x00064b98) level_4_zoom

0xacc5,	// (0x00064ba1) level_5_zoom

0xacce,	// (0x00064baa) level_6_zoom

0xacd7,	// (0x00064bb3) level_7_zoom

0xace0,	// (0x00064bbc) level_8_zoom

0xace9,	// (0x00064bc5) level_9_zoom

0xacfa,	// (0x00064bd6) popup_phob_thumbnail_window_g1

0xad02,	// (0x00064bde) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x00069310) popup_phob_thumbnail_window_g

0xc022,	// (0x00065efe) level_1_location

0xc02a,	// (0x00065f06) level_2_location

0xc032,	// (0x00065f0e) level_3_location

0xc03a,	// (0x00065f16) level_4_location

0xac39,	// (0x00064b15) level_5_location

0x3031,	// (0x0005cf0d) mce_icon_pane_g1

0x3039,	// (0x0005cf15) mce_icon_pane_g2

0x0001,

0xf439,	// (0x00069315) mce_icon_pane_g

0x3041,	// (0x0005cf1d) main_mup_pane_g1_ParamLimits

0x3041,	// (0x0005cf1d) main_mup_pane_g1

0x3057,	// (0x0005cf33) main_mup_pane_g2_ParamLimits

0x3057,	// (0x0005cf33) main_mup_pane_g2

0x306f,	// (0x0005cf4b) main_mup_pane_g3_ParamLimits

0x306f,	// (0x0005cf4b) main_mup_pane_g3

0x3087,	// (0x0005cf63) main_mup_pane_g4_ParamLimits

0x3087,	// (0x0005cf63) main_mup_pane_g4

0x309f,	// (0x0005cf7b) main_mup_pane_g5_ParamLimits

0x309f,	// (0x0005cf7b) main_mup_pane_g5

0x30bb,	// (0x0005cf97) main_mup_pane_g6_ParamLimits

0x30bb,	// (0x0005cf97) main_mup_pane_g6

0x30d3,	// (0x0005cfaf) main_mup_pane_g7_ParamLimits

0x30d3,	// (0x0005cfaf) main_mup_pane_g7

0x30eb,	// (0x0005cfc7) main_mup_pane_g8_ParamLimits

0x30eb,	// (0x0005cfc7) main_mup_pane_g8

0x3105,	// (0x0005cfe1) main_mup_pane_g9_ParamLimits

0x3105,	// (0x0005cfe1) main_mup_pane_g9

0x311f,	// (0x0005cffb) main_mup_pane_g10_ParamLimits

0x311f,	// (0x0005cffb) main_mup_pane_g10

0x3139,	// (0x0005d015) main_mup_pane_g11_ParamLimits

0x3139,	// (0x0005d015) main_mup_pane_g11

0x314d,	// (0x0005d029) main_mup_pane_g12_ParamLimits

0x314d,	// (0x0005d029) main_mup_pane_g12

0x3163,	// (0x0005d03f) main_mup_pane_g13_ParamLimits

0x3163,	// (0x0005d03f) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0006931a) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0006931a) main_mup_pane_g

0x3177,	// (0x0005d053) main_mup_pane_t1_ParamLimits

0x3177,	// (0x0005d053) main_mup_pane_t1

0x3191,	// (0x0005d06d) main_mup_pane_t2_ParamLimits

0x3191,	// (0x0005d06d) main_mup_pane_t2

0x31a9,	// (0x0005d085) main_mup_pane_t3_ParamLimits

0x31a9,	// (0x0005d085) main_mup_pane_t3

0x31c1,	// (0x0005d09d) main_mup_pane_t4_ParamLimits

0x31c1,	// (0x0005d09d) main_mup_pane_t4

0x31df,	// (0x0005d0bb) main_mup_pane_t5_ParamLimits

0x31df,	// (0x0005d0bb) main_mup_pane_t5

0x31f4,	// (0x0005d0d0) main_mup_pane_t6_ParamLimits

0x31f4,	// (0x0005d0d0) main_mup_pane_t6

0x0005,

0xf459,	// (0x00069335) main_mup_pane_t_ParamLimits

0xf459,	// (0x00069335) main_mup_pane_t

0x3206,	// (0x0005d0e2) mup_progress_pane_ParamLimits

0x3206,	// (0x0005d0e2) mup_progress_pane

0x3212,	// (0x0005d0ee) mup_visualizer_pane_ParamLimits

0x3212,	// (0x0005d0ee) mup_visualizer_pane

0x3242,	// (0x0005d11e) mup_volume_pane_ParamLimits

0x3242,	// (0x0005d11e) mup_volume_pane

0xad0a,	// (0x00064be6) mup_visualizer_pane_g1_ParamLimits

0xad0a,	// (0x00064be6) mup_visualizer_pane_g1

0xad0a,	// (0x00064be6) mup_visualizer_pane_g2_ParamLimits

0xad0a,	// (0x00064be6) mup_visualizer_pane_g2

0xab6e,	// (0x00064a4a) mup_visualizer_pane_g3_ParamLimits

0xab6e,	// (0x00064a4a) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x00069342) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x00069342) mup_visualizer_pane_g

0xa05e,	// (0x00063f3a) mup_volume_pane_g1

0xad20,	// (0x00064bfc) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x00069349) mup_volume_pane_g

0xa05e,	// (0x00063f3a) mup_progress_pane_g1

0xad29,	// (0x00064c05) mup_progress_pane_g2

0xad32,	// (0x00064c0e) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0006934e) mup_progress_pane_g

0x9c87,	// (0x00063b63) bg_popup_window_pane_cp05

0xad3b,	// (0x00064c17) heading_pane_cp02_ParamLimits

0xad3b,	// (0x00064c17) heading_pane_cp02

0xad55,	// (0x00064c31) list_popup_blid_pane

0xad5d,	// (0x00064c39) list_blid_sat_info_pane_ParamLimits

0xad5d,	// (0x00064c39) list_blid_sat_info_pane

0xad70,	// (0x00064c4c) list_blid_sat_info_pane_g1

0xad78,	// (0x00064c54) list_blid_sat_info_pane_t1

0x3358,	// (0x0005d234) mup_equalizer_pane_ParamLimits

0x3358,	// (0x0005d234) mup_equalizer_pane

0x3371,	// (0x0005d24d) mup_equalizer_pane_cp1_ParamLimits

0x3371,	// (0x0005d24d) mup_equalizer_pane_cp1

0x338e,	// (0x0005d26a) mup_equalizer_pane_cp2_ParamLimits

0x338e,	// (0x0005d26a) mup_equalizer_pane_cp2

0x33ab,	// (0x0005d287) mup_equalizer_pane_cp3_ParamLimits

0x33ab,	// (0x0005d287) mup_equalizer_pane_cp3

0x33cc,	// (0x0005d2a8) mup_equalizer_pane_cp4_ParamLimits

0x33cc,	// (0x0005d2a8) mup_equalizer_pane_cp4

0x33ed,	// (0x0005d2c9) mup_equalizer_pane_cp5

0x3401,	// (0x0005d2dd) mup_equalizer_pane_cp6

0x3415,	// (0x0005d2f1) mup_equalizer_pane_cp7

0xbf40,	// (0x00065e1c) bg_popup_call_poc_act_pane_g9

0xbf48,	// (0x00065e24) bg_popup_call_poc_act_pane_g10

0xbf50,	// (0x00065e2c) bg_popup_call_poc_act_pane_g11

0x000a,

0x9ee2,	// (0x00063dbe) mup_scale_pane

0xa05e,	// (0x00063f3a) mup_scale_pane_g1

0xad86,	// (0x00064c62) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0006936a) mup_scale_pane_g

0xadaa,	// (0x00064c86) msg_data_pane

0xadb2,	// (0x00064c8e) scroll_pane_cp017

0x343b,	// (0x0005d317) bg_list_pane_cp04_ParamLimits

0x343b,	// (0x0005d317) bg_list_pane_cp04

0xadba,	// (0x00064c96) msg_data_pane_g1

0x345b,	// (0x0005d337) msg_data_pane_g2

0x3465,	// (0x0005d341) msg_data_pane_g3

0x346d,	// (0x0005d349) msg_data_pane_g4

0x3475,	// (0x0005d351) msg_data_pane_g5

0x347d,	// (0x0005d359) msg_data_pane_g6

0x3485,	// (0x0005d361) msg_data_pane_g7

0x0006,

0xf49d,	// (0x00069379) msg_data_pane_g

0x348d,	// (0x0005d369) msg_text_pane_ParamLimits

0x348d,	// (0x0005d369) msg_text_pane

0x34b2,	// (0x0005d38e) qrid_highlight_pane_cp011_ParamLimits

0x34b2,	// (0x0005d38e) qrid_highlight_pane_cp011

0x9c87,	// (0x00063b63) msg_body_pane

0x9c87,	// (0x00063b63) msg_header_pane

0xadcb,	// (0x00064ca7) input_focus_pane_cp07

0x34d6,	// (0x0005d3b2) msg_header_pane_t1_ParamLimits

0x34d6,	// (0x0005d3b2) msg_header_pane_t1

0x34ea,	// (0x0005d3c6) msg_header_pane_t2_ParamLimits

0x34ea,	// (0x0005d3c6) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0006938d) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0006938d) msg_header_pane_t

0xade0,	// (0x00064cbc) msg_body_pane_g1

0x34fc,	// (0x0005d3d8) msg_body_pane_t1_ParamLimits

0x34fc,	// (0x0005d3d8) msg_body_pane_t1

0x352d,	// (0x0005d409) msg_body_pane_t2_ParamLimits

0x352d,	// (0x0005d409) msg_body_pane_t2

0x353f,	// (0x0005d41b) msg_body_pane_t3_ParamLimits

0x353f,	// (0x0005d41b) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x00069392) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x00069392) msg_body_pane_t

0x358b,	// (0x0005d467) main_viewer_pane_g1_ParamLimits

0x358b,	// (0x0005d467) main_viewer_pane_g1

0x3599,	// (0x0005d475) main_viewer_pane_g2_ParamLimits

0x3599,	// (0x0005d475) main_viewer_pane_g2

0x35a7,	// (0x0005d483) main_viewer_pane_g3_ParamLimits

0x35a7,	// (0x0005d483) main_viewer_pane_g3

0x35b6,	// (0x0005d492) main_viewer_pane_g4_ParamLimits

0x35b6,	// (0x0005d492) main_viewer_pane_g4

0xae00,	// (0x00064cdc) main_viewer_pane_g5_ParamLimits

0xae00,	// (0x00064cdc) main_viewer_pane_g5

0xae00,	// (0x00064cdc) main_viewer_pane_g7_ParamLimits

0xae00,	// (0x00064cdc) main_viewer_pane_g7

0xa782,	// (0x0006465e) main_viewer_pane_g8_ParamLimits

0xa782,	// (0x0006465e) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x000693a2) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x000693a2) main_viewer_pane_g

0xae1e,	// (0x00064cfa) viewer_content_pane_ParamLimits

0xae1e,	// (0x00064cfa) viewer_content_pane

0x35f2,	// (0x0005d4ce) main_postcard_pane_g1_ParamLimits

0x35f2,	// (0x0005d4ce) main_postcard_pane_g1

0x3608,	// (0x0005d4e4) main_postcard_pane_g2_ParamLimits

0x3608,	// (0x0005d4e4) main_postcard_pane_g2

0x361e,	// (0x0005d4fa) main_postcard_pane_g3_ParamLimits

0x361e,	// (0x0005d4fa) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x000693b3) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x000693b3) main_postcard_pane_g

0x3635,	// (0x0005d511) main_postcard_pane_g4

0xc155,	// (0x00066031) smil_status_volume_pane_g2

0x3678,	// (0x0005d554) postcard_pane_ParamLimits

0x3678,	// (0x0005d554) postcard_pane

0xae2c,	// (0x00064d08) postcard_pane_g1_ParamLimits

0xae2c,	// (0x00064d08) postcard_pane_g1

0x36ba,	// (0x0005d596) postcard_pane_g2_ParamLimits

0x36ba,	// (0x0005d596) postcard_pane_g2

0x36c6,	// (0x0005d5a2) postcard_pane_g3_ParamLimits

0x36c6,	// (0x0005d5a2) postcard_pane_g3

0xae3a,	// (0x00064d16) postcard_pane_g4_ParamLimits

0xae3a,	// (0x00064d16) postcard_pane_g4

0x36d2,	// (0x0005d5ae) postcard_pane_g5_ParamLimits

0x36d2,	// (0x0005d5ae) postcard_pane_g5

0x36e7,	// (0x0005d5c3) postcard_pane_g6_ParamLimits

0x36e7,	// (0x0005d5c3) postcard_pane_g6

0xae2c,	// (0x00064d08) postcard_pane_g7_ParamLimits

0xae2c,	// (0x00064d08) postcard_pane_g7

0x0006,

0xf4e4,	// (0x000693c0) postcard_pane_g_ParamLimits

0xf4e4,	// (0x000693c0) postcard_pane_g

0x36fb,	// (0x0005d5d7) main_mp2_pane_g1_ParamLimits

0x36fb,	// (0x0005d5d7) main_mp2_pane_g1

0x3707,	// (0x0005d5e3) main_mp2_pane_g2_ParamLimits

0x3707,	// (0x0005d5e3) main_mp2_pane_g2

0x3713,	// (0x0005d5ef) main_mp2_pane_g3_ParamLimits

0x3713,	// (0x0005d5ef) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x000693cf) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x000693cf) main_mp2_pane_g

0x371f,	// (0x0005d5fb) main_mp2_pane_t1_ParamLimits

0x371f,	// (0x0005d5fb) main_mp2_pane_t1

0x3734,	// (0x0005d610) main_mp2_pane_t2_ParamLimits

0x3734,	// (0x0005d610) main_mp2_pane_t2

0x3746,	// (0x0005d622) main_mp2_pane_t3_ParamLimits

0x3746,	// (0x0005d622) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x000693d6) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x000693d6) main_mp2_pane_t

0xae48,	// (0x00064d24) pec_content_pane_ParamLimits

0xae48,	// (0x00064d24) pec_content_pane

0xa3ff,	// (0x000642db) scroll_pane_cp015

0xae5a,	// (0x00064d36) pec_attribute_pane_ParamLimits

0xae5a,	// (0x00064d36) pec_attribute_pane

0x3758,	// (0x0005d634) pec_content_pane_g1_ParamLimits

0x3758,	// (0x0005d634) pec_content_pane_g1

0xae6a,	// (0x00064d46) pec_content_pane_t1_ParamLimits

0xae6a,	// (0x00064d46) pec_content_pane_t1

0xae7c,	// (0x00064d58) pec_content_pane_t2_ParamLimits

0xae7c,	// (0x00064d58) pec_content_pane_t2

0x0001,

0xf501,	// (0x000693dd) pec_content_pane_t_ParamLimits

0xf501,	// (0x000693dd) pec_content_pane_t

0x3764,	// (0x0005d640) list_single_graphic_pane_cp01_ParamLimits

0x3764,	// (0x0005d640) list_single_graphic_pane_cp01

0x9ee2,	// (0x00063dbe) bg_popup_sub_pane_cp04

0xae8e,	// (0x00064d6a) popup_mup_playback_window_g1

0xae9a,	// (0x00064d76) popup_mup_playback_window_t1

0xaeaf,	// (0x00064d8b) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x000693e2) popup_mup_playback_window_t

0xaee6,	// (0x00064dc2) main_image_pane_g1_ParamLimits

0xaee6,	// (0x00064dc2) main_image_pane_g1

0xaf29,	// (0x00064e05) scroll_pane_cp018_ParamLimits

0xaf29,	// (0x00064e05) scroll_pane_cp018

0xaf41,	// (0x00064e1d) scroll_pane_cp016_ParamLimits

0xaf41,	// (0x00064e1d) scroll_pane_cp016

0x3831,	// (0x0005d70d) smil2_image_pane_ParamLimits

0x3831,	// (0x0005d70d) smil2_image_pane

0x3861,	// (0x0005d73d) smil2_root_pane_ParamLimits

0x3861,	// (0x0005d73d) smil2_root_pane

0x3899,	// (0x0005d775) smil2_text_pane_ParamLimits

0x3899,	// (0x0005d775) smil2_text_pane

0x9c87,	// (0x00063b63) bg_list_pane_cp06

0xaf7d,	// (0x00064e59) grid_radio_pane

0x9c87,	// (0x00063b63) bg_popup_window_pane_cp06

0xaf85,	// (0x00064e61) main_fmradio_pane_t1

0xa9cd,	// (0x000648a9) heading_pane_cp04

0xaf93,	// (0x00064e6f) main_fmradio_pane_t2

0xbf58,	// (0x00065e34) popup_cale_lunar_info_window_g1

0xafa1,	// (0x00064e7d) main_fmradio_pane_t3

0xbf60,	// (0x00065e3c) popup_cale_lunar_info_window_g2

0xafaf,	// (0x00064e8b) main_fmradio_pane_t4

0x0001,

0xafbd,	// (0x00064e99) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x000694bd) popup_cale_lunar_info_window_g

0xf51b,	// (0x000693f7) main_fmradio_pane_t

0xafcb,	// (0x00064ea7) wait_bar_pane_cp03

0xafd3,	// (0x00064eaf) cell_fmradio_pane_ParamLimits

0xafd3,	// (0x00064eaf) cell_fmradio_pane

0xae2c,	// (0x00064d08) cell_fmradio_pane_g1_ParamLimits

0xae2c,	// (0x00064d08) cell_fmradio_pane_g1

0x9c87,	// (0x00063b63) grid_highlight_pane_cp011

0xafe6,	// (0x00064ec2) poc_content_pane_ParamLimits

0xafe6,	// (0x00064ec2) poc_content_pane

0xaff8,	// (0x00064ed4) scroll_pane_cp019

0x3919,	// (0x0005d7f5) popup_call_poc_act_window_ParamLimits

0x3919,	// (0x0005d7f5) popup_call_poc_act_window

0x393d,	// (0x0005d819) popup_call_poc_inact_window_ParamLimits

0x393d,	// (0x0005d819) popup_call_poc_inact_window

0xf5b8,	// (0x00069494) bg_popup_call_poc_act_pane_g

0xbed0,	// (0x00065dac) bg_popup_call_poc_inact_pane_g1

0xbed8,	// (0x00065db4) bg_popup_call_poc_inact_pane_g2

0xb000,	// (0x00064edc) popup_call_poc_act_window_g2

0xbee0,	// (0x00065dbc) bg_popup_call_poc_inact_pane_g3

0xbee8,	// (0x00065dc4) bg_popup_call_poc_inact_pane_g4

0xbef0,	// (0x00065dcc) bg_popup_call_poc_inact_pane_g5

0xb008,	// (0x00064ee4) popup_call_poc_act_window_t1_ParamLimits

0xb008,	// (0x00064ee4) popup_call_poc_act_window_t1

0xb030,	// (0x00064f0c) popup_call_poc_act_window_t2_ParamLimits

0xb030,	// (0x00064f0c) popup_call_poc_act_window_t2

0xb058,	// (0x00064f34) popup_call_poc_act_window_t3_ParamLimits

0xb058,	// (0x00064f34) popup_call_poc_act_window_t3

0xb080,	// (0x00064f5c) popup_call_poc_act_window_t4_ParamLimits

0xb080,	// (0x00064f5c) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x00069402) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x00069402) popup_call_poc_act_window_t

0xbef8,	// (0x00065dd4) bg_popup_call_poc_inact_pane_g6

0xbf00,	// (0x00065ddc) bg_popup_call_poc_inact_pane_g7

0xbf08,	// (0x00065de4) bg_popup_call_poc_inact_pane_g8

0xb092,	// (0x00064f6e) popup_call_poc_inact_window_g2

0xbf10,	// (0x00065dec) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x00069481) bg_popup_call_poc_inact_pane_g

0xb09a,	// (0x00064f76) popup_call_poc_inact_window_t1_ParamLimits

0xb09a,	// (0x00064f76) popup_call_poc_inact_window_t1

0xb0af,	// (0x00064f8b) popup_call_poc_inact_window_t2_ParamLimits

0xb0af,	// (0x00064f8b) popup_call_poc_inact_window_t2

0xb0c4,	// (0x00064fa0) popup_call_poc_inact_window_t3_ParamLimits

0xb0c4,	// (0x00064fa0) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x0006940b) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x0006940b) popup_call_poc_inact_window_t

0xc0c8,	// (0x00065fa4) context_pane_ParamLimits

0x4170,	// (0x0005e04c) signal_pane_ParamLimits

0xac39,	// (0x00064b15) main_call2_pane

0xc0b6,	// (0x00065f92) popup_phob_thumbnail2_window_ParamLimits

0xc0b6,	// (0x00065f92) popup_phob_thumbnail2_window

0xade8,	// (0x00064cc4) aid_hotspot_pointer_arrow_pane

0xadf0,	// (0x00064ccc) aid_hotspot_pointer_hand_pane

0x3c86,	// (0x0005db62) phob_pre_status_pane_g5

0x19d7,	// (0x0005b8b3) cams_zoom_pane_ParamLimits

0x19e6,	// (0x0005b8c2) image_vga_pane_ParamLimits

0x1a00,	// (0x0005b8dc) main_camera_pane_g1_ParamLimits

0x1a12,	// (0x0005b8ee) main_camera_pane_g2_ParamLimits

0x1a22,	// (0x0005b8fe) main_camera_pane_g3_ParamLimits

0x1a32,	// (0x0005b90e) main_camera_pane_g4_ParamLimits

0x1a42,	// (0x0005b91e) main_camera_pane_g5_ParamLimits

0x1a52,	// (0x0005b92e) main_camera_pane_g6_ParamLimits

0x1a64,	// (0x0005b940) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0006910a) main_camera_pane_g_ParamLimits

0x1a74,	// (0x0005b950) main_camera_pane_t1_ParamLimits

0x1a8a,	// (0x0005b966) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0006911b) main_camera_pane_t_ParamLimits

0x9ee2,	// (0x00063dbe) bg_popup_preview_window_pane_cp01_ParamLimits

0x9ee2,	// (0x00063dbe) bg_popup_preview_window_pane_cp01

0xb0d9,	// (0x00064fb5) popup_phob_thumbnail2_window_g1_ParamLimits

0xb0d9,	// (0x00064fb5) popup_phob_thumbnail2_window_g1

0x9c87,	// (0x00063b63) call2_cli_visual_pane

0x3971,	// (0x0005d84d) popup_call2_audio_conf_window_ParamLimits

0x3971,	// (0x0005d84d) popup_call2_audio_conf_window

0x3991,	// (0x0005d86d) popup_call2_audio_first_window_ParamLimits

0x3991,	// (0x0005d86d) popup_call2_audio_first_window

0x3a27,	// (0x0005d903) popup_call2_audio_in_window_ParamLimits

0x3a27,	// (0x0005d903) popup_call2_audio_in_window

0x3a6f,	// (0x0005d94b) popup_call2_audio_out_window_ParamLimits

0x3a6f,	// (0x0005d94b) popup_call2_audio_out_window

0x3ad9,	// (0x0005d9b5) popup_call2_audio_second_window_ParamLimits

0x3ad9,	// (0x0005d9b5) popup_call2_audio_second_window

0x3b3f,	// (0x0005da1b) popup_call2_audio_wait_window_ParamLimits

0x3b3f,	// (0x0005da1b) popup_call2_audio_wait_window

0x9c87,	// (0x00063b63) bg_popup_call2_act_pane_cp03

0x9ec4,	// (0x00063da0) list_conf_pane_cp

0xb0e5,	// (0x00064fc1) popup_call2_audio_conf_window_t1

0xaa2a,	// (0x00064906) list_single_graphic_popup_conf2_pane_ParamLimits

0xaa2a,	// (0x00064906) list_single_graphic_popup_conf2_pane

0xaa3d,	// (0x00064919) list_highlight_pane_cp04

0xb0f3,	// (0x00064fcf) list_single_graphic_popup_conf2_pane_g1

0xaa4e,	// (0x0006492a) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x00069412) list_single_graphic_popup_conf2_pane_g

0xb0fd,	// (0x00064fd9) list_single_graphic_popup_conf2_pane_t1

0xb10b,	// (0x00064fe7) bg_popup_call2_act_pane_cp01_ParamLimits

0xb10b,	// (0x00064fe7) bg_popup_call2_act_pane_cp01

0xb195,	// (0x00065071) call_type_pane_cp05_ParamLimits

0xb195,	// (0x00065071) call_type_pane_cp05

0xb1e9,	// (0x000650c5) popup_call2_audio_second_window_g1_ParamLimits

0xb1e9,	// (0x000650c5) popup_call2_audio_second_window_g1

0xb23d,	// (0x00065119) popup_call2_audio_second_window_g2_ParamLimits

0xb23d,	// (0x00065119) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x00069417) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x00069417) popup_call2_audio_second_window_g

0xb2a2,	// (0x0006517e) popup_call2_audio_second_window_t1_ParamLimits

0xb2a2,	// (0x0006517e) popup_call2_audio_second_window_t1

0xb35d,	// (0x00065239) popup_call2_audio_second_window_t2_ParamLimits

0xb35d,	// (0x00065239) popup_call2_audio_second_window_t2

0xb3b0,	// (0x0006528c) popup_call2_audio_second_window_t3_ParamLimits

0xb3b0,	// (0x0006528c) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x0006941e) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x0006941e) popup_call2_audio_second_window_t

0x9c87,	// (0x00063b63) bg_popup_call2_in_pane_cp02

0x9c91,	// (0x00063b6d) call_type_pane_cp04

0x9c99,	// (0x00063b75) popup_call2_audio_wait_window_g1

0x9ca1,	// (0x00063b7d) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00068ff7) popup_call2_audio_wait_window_g

0x9ca9,	// (0x00063b85) popup_call2_audio_wait_window_t3

0xb4a3,	// (0x0006537f) bg_popup_call2_act_pane_ParamLimits

0xb4a3,	// (0x0006537f) bg_popup_call2_act_pane

0xb563,	// (0x0006543f) call_type_pane_cp03_ParamLimits

0xb563,	// (0x0006543f) call_type_pane_cp03

0xb5c7,	// (0x000654a3) popup_call2_audio_first_window_g1_ParamLimits

0xb5c7,	// (0x000654a3) popup_call2_audio_first_window_g1

0xb637,	// (0x00065513) popup_call2_audio_first_window_g2_ParamLimits

0xb637,	// (0x00065513) popup_call2_audio_first_window_g2

0xad0a,	// (0x00064be6) popup_call2_audio_first_window_g3_ParamLimits

0xad0a,	// (0x00064be6) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x00069427) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x00069427) popup_call2_audio_first_window_g

0xb715,	// (0x000655f1) popup_call2_audio_first_window_t1_ParamLimits

0xb715,	// (0x000655f1) popup_call2_audio_first_window_t1

0xb818,	// (0x000656f4) popup_call2_audio_first_window_t4_ParamLimits

0xb818,	// (0x000656f4) popup_call2_audio_first_window_t4

0xb8fb,	// (0x000657d7) popup_call2_audio_first_window_t5_ParamLimits

0xb8fb,	// (0x000657d7) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x00069432) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x00069432) popup_call2_audio_first_window_t

0x9eda,	// (0x00063db6) bg_popup_call2_act_pane_g1

0xbf68,	// (0x00065e44) popup_cale_lunar_info_window_t1

0xbf76,	// (0x00065e52) popup_cale_lunar_info_window_t2

0xbf84,	// (0x00065e60) popup_cale_lunar_info_window_t3

0x9c87,	// (0x00063b63) bg_popup_call2_bubble_pane

0xb9fc,	// (0x000658d8) bg_popup_call2_in_pane_cp01_ParamLimits

0xb9fc,	// (0x000658d8) bg_popup_call2_in_pane_cp01

0x9963,	// (0x0006383f) call_type_pane_cp02

0xba44,	// (0x00065920) popup_call2_audio_out_window_g1_ParamLimits

0xba44,	// (0x00065920) popup_call2_audio_out_window_g1

0xba70,	// (0x0006594c) popup_call2_audio_out_window_g2_ParamLimits

0xba70,	// (0x0006594c) popup_call2_audio_out_window_g2

0xba98,	// (0x00065974) popup_call2_audio_out_window_g3_ParamLimits

0xba98,	// (0x00065974) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x0006943b) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x0006943b) popup_call2_audio_out_window_g

0xbad3,	// (0x000659af) popup_call2_audio_out_window_t1_ParamLimits

0xbad3,	// (0x000659af) popup_call2_audio_out_window_t1

0xbb32,	// (0x00065a0e) popup_call2_audio_out_window_t2_ParamLimits

0xbb32,	// (0x00065a0e) popup_call2_audio_out_window_t2

0xbb86,	// (0x00065a62) popup_call2_audio_out_window_t3_ParamLimits

0xbb86,	// (0x00065a62) popup_call2_audio_out_window_t3

0xbb9c,	// (0x00065a78) popup_call2_audio_out_window_t4_ParamLimits

0xbb9c,	// (0x00065a78) popup_call2_audio_out_window_t4

0xbbb2,	// (0x00065a8e) popup_call2_audio_out_window_t5_ParamLimits

0xbbb2,	// (0x00065a8e) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x00069444) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x00069444) popup_call2_audio_out_window_t

0xbc16,	// (0x00065af2) bg_popup_call2_in_pane_ParamLimits

0xbc16,	// (0x00065af2) bg_popup_call2_in_pane

0xbc72,	// (0x00065b4e) popup_call2_audio_in_window_g1_ParamLimits

0xbc72,	// (0x00065b4e) popup_call2_audio_in_window_g1

0xbcaa,	// (0x00065b86) popup_call2_audio_in_window_g2_ParamLimits

0xbcaa,	// (0x00065b86) popup_call2_audio_in_window_g2

0xbce2,	// (0x00065bbe) popup_call2_audio_in_window_g3_ParamLimits

0xbce2,	// (0x00065bbe) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x00069451) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x00069451) popup_call2_audio_in_window_g

0xbd3a,	// (0x00065c16) popup_call2_audio_in_window_t1_ParamLimits

0xbd3a,	// (0x00065c16) popup_call2_audio_in_window_t1

0xbdba,	// (0x00065c96) popup_call2_audio_in_window_t2_ParamLimits

0xbdba,	// (0x00065c96) popup_call2_audio_in_window_t2

0xbe3a,	// (0x00065d16) popup_call2_audio_in_window_t3_ParamLimits

0xbe3a,	// (0x00065d16) popup_call2_audio_in_window_t3

0xbe54,	// (0x00065d30) popup_call2_audio_in_window_t4_ParamLimits

0xbe54,	// (0x00065d30) popup_call2_audio_in_window_t4

0xbe66,	// (0x00065d42) popup_call2_audio_in_window_t5_ParamLimits

0xbe66,	// (0x00065d42) popup_call2_audio_in_window_t5

0xbe7b,	// (0x00065d57) popup_call2_audio_in_window_t6_ParamLimits

0xbe7b,	// (0x00065d57) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x0006945a) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x0006945a) popup_call2_audio_in_window_t

0x9eda,	// (0x00063db6) bg_popup_call2_in_pane_g1

0xbf92,	// (0x00065e6e) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x000694c2) popup_cale_lunar_info_window_t

0x9ee2,	// (0x00063dbe) bg_popup_call2_rect_pane_ParamLimits

0x9ee2,	// (0x00063dbe) bg_popup_call2_rect_pane

0x9c87,	// (0x00063b63) call2_cli_visual_graphic_pane

0x9c87,	// (0x00063b63) call2_cli_visual_text_pane

0xc168,	// (0x00066044) smil_status_volume_pane_g3

0x0002,

0xa05e,	// (0x00063f3a) call2_cli_visual_graphic_pane_g1

0xa05e,	// (0x00063f3a) call2_cli_visual_graphic_pane_g2

0xa05e,	// (0x00063f3a) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x00069467) call2_cli_visual_graphic_pane_g

0xbe90,	// (0x00065d6c) bg_popup_call2_rect_pane_g1

0xa0ea,	// (0x00063fc6) bg_popup_call2_rect_pane_g2

0xbe98,	// (0x00065d74) bg_popup_call2_rect_pane_g3

0xbea0,	// (0x00065d7c) bg_popup_call2_rect_pane_g4

0xbea8,	// (0x00065d84) bg_popup_call2_rect_pane_g5

0xbeb0,	// (0x00065d8c) bg_popup_call2_rect_pane_g6

0xbeb8,	// (0x00065d94) bg_popup_call2_rect_pane_g7

0xbec0,	// (0x00065d9c) bg_popup_call2_rect_pane_g8

0xbec8,	// (0x00065da4) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0006946e) bg_popup_call2_rect_pane_g

0xbed0,	// (0x00065dac) bg_popup_call2_bubble_pane_g1

0xbed8,	// (0x00065db4) bg_popup_call2_bubble_pane_g2

0xbee0,	// (0x00065dbc) bg_popup_call2_bubble_pane_g3

0xbee8,	// (0x00065dc4) bg_popup_call2_bubble_pane_g4

0xbef0,	// (0x00065dcc) bg_popup_call2_bubble_pane_g5

0xbef8,	// (0x00065dd4) bg_popup_call2_bubble_pane_g6

0xbf00,	// (0x00065ddc) bg_popup_call2_bubble_pane_g7

0xbf08,	// (0x00065de4) bg_popup_call2_bubble_pane_g8

0xbf10,	// (0x00065dec) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x00069481) bg_popup_call2_bubble_pane_g

0x156e,	// (0x0005b44a) aid_cale_week_size_cell_pane

0x1aa0,	// (0x0005b97c) aid_cams_cif_uncrop_pane_ParamLimits

0x1aa0,	// (0x0005b97c) aid_cams_cif_uncrop_pane

0x1c59,	// (0x0005bb35) aid_cams_size_cell_ParamLimits

0x1c59,	// (0x0005bb35) aid_cams_size_cell

0x1c6d,	// (0x0005bb49) grid_cams_pane_ParamLimits

0x1c87,	// (0x0005bb63) linegrid_cams_pane_ParamLimits

0x1e65,	// (0x0005bd41) call_video_pane_t1

0x1e83,	// (0x0005bd5f) call_video_pane_t2

0x0001,

0xf292,	// (0x0006916e) call_video_pane_t

0x22af,	// (0x0005c18b) aid_cale_month_size_cell_pane_ParamLimits

0x22af,	// (0x0005c18b) aid_cale_month_size_cell_pane

0xf62f,	// (0x0006950b) smil_status_volume_pane_g

0xc175,	// (0x00066051) volume_smil_pane_ParamLimits

0x0e09,	// (0x0005ace5) aid_popup2_width_pane

0x14d0,	// (0x0005b3ac) cell_qdial_pane_g4_ParamLimits

0x14d0,	// (0x0005b3ac) cell_qdial_pane_g4

0x2e96,	// (0x0005cd72) aid_blid_cardinal_pane_ParamLimits

0x2ea2,	// (0x0005cd7e) aid_blid_destination_pane_ParamLimits

0x2ea2,	// (0x0005cd7e) aid_blid_destination_pane

0x9ee2,	// (0x00063dbe) bg_popup_call_poc_act_pane_ParamLimits

0x9ee2,	// (0x00063dbe) bg_popup_call_poc_act_pane

0x9ee2,	// (0x00063dbe) bg_popup_call_poc_inact_pane_ParamLimits

0x9ee2,	// (0x00063dbe) bg_popup_call_poc_inact_pane

0xbf18,	// (0x00065df4) bg_popup_call_poc_act_pane_g1

0xbf20,	// (0x00065dfc) bg_popup_call_poc_act_pane_g2

0xbf28,	// (0x00065e04) bg_popup_call_poc_act_pane_g3

0xbee8,	// (0x00065dc4) bg_popup_call_poc_act_pane_g4

0xbef0,	// (0x00065dcc) bg_popup_call_poc_act_pane_g5

0xbf30,	// (0x00065e0c) bg_popup_call_poc_act_pane_g6

0xbf00,	// (0x00065ddc) bg_popup_call_poc_act_pane_g7

0xbf38,	// (0x00065e14) bg_popup_call_poc_act_pane_g8

0x9c87,	// (0x00063b63) main_usb_pane

0xc091,	// (0x00065f6d) popup_cale_lunar_info_window

0x215b,	// (0x0005c037) im_reading_pane_t1_ParamLimits

0xa357,	// (0x00064233) list_im_pane_ParamLimits

0xa368,	// (0x00064244) scroll_pane_cp07_ParamLimits

0x9c87,	// (0x00063b63) grid_highlight_pane_cp012

0x9ee2,	// (0x00063dbe) mup_scale_pane_ParamLimits

0xae2c,	// (0x00064d08) main_usb_pane_g1_ParamLimits

0xae2c,	// (0x00064d08) main_usb_pane_g1

0x3b9b,	// (0x0005da77) main_usb_pane_g2_ParamLimits

0x3b9b,	// (0x0005da77) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x000694ab) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x000694ab) main_usb_pane_g

0x3bb1,	// (0x0005da8d) main_usb_pane_t1_ParamLimits

0x3bb1,	// (0x0005da8d) main_usb_pane_t1

0x3bc3,	// (0x0005da9f) main_usb_pane_t2_ParamLimits

0x3bc3,	// (0x0005da9f) main_usb_pane_t2

0x3bd5,	// (0x0005dab1) main_usb_pane_t3_ParamLimits

0x3bd5,	// (0x0005dab1) main_usb_pane_t3

0x3be7,	// (0x0005dac3) main_usb_pane_t4_ParamLimits

0x3be7,	// (0x0005dac3) main_usb_pane_t4

0x3bf9,	// (0x0005dad5) main_usb_pane_t5_ParamLimits

0x3bf9,	// (0x0005dad5) main_usb_pane_t5

0x3c0b,	// (0x0005dae7) main_usb_pane_t6_ParamLimits

0x3c0b,	// (0x0005dae7) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x000694b0) main_usb_pane_t_ParamLimits

0x2e45,	// (0x0005cd21) aid_text_placing

0x2e4e,	// (0x0005cd2a) main_location2_pane_t1_ParamLimits

0x2e60,	// (0x0005cd3c) main_location2_pane_t2_ParamLimits

0x2e72,	// (0x0005cd4e) main_location2_pane_t3_ParamLimits

0x2e84,	// (0x0005cd60) main_location2_pane_t4_ParamLimits

0x2e84,	// (0x0005cd60) main_location2_pane_t4

0xf3f3,	// (0x000692cf) main_location2_pane_t_ParamLimits

0x9f1e,	// (0x00063dfa) find_pinb_pane_g2_ParamLimits

0x9f1e,	// (0x00063dfa) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0006901d) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0006901d) find_pinb_pane_g

0x9f2a,	// (0x00063e06) find_pinb_pane_t1_ParamLimits

0x9f3c,	// (0x00063e18) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x00069022) find_pinb_pane_t_ParamLimits

0x9c87,	// (0x00063b63) main_call3_pane

0x2613,	// (0x0005c4ef) cale_month_day_heading_pane_t1_ParamLimits

0x2671,	// (0x0005c54d) cale_month_day_heading_pane_t2_ParamLimits

0x26d6,	// (0x0005c5b2) cale_month_day_heading_pane_t3_ParamLimits

0x273b,	// (0x0005c617) cale_month_day_heading_pane_t4_ParamLimits

0x27a0,	// (0x0005c67c) cale_month_day_heading_pane_t5_ParamLimits

0x2815,	// (0x0005c6f1) cale_month_day_heading_pane_t6_ParamLimits

0x288a,	// (0x0005c766) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x000691a6) cale_month_day_heading_pane_t_ParamLimits

0xa5b4,	// (0x00064490) smil_status_volume_pane

0x3696,	// (0x0005d572) postcard_address_pane_ParamLimits

0x3696,	// (0x0005d572) postcard_address_pane

0x36a8,	// (0x0005d584) postcard_message_pane_ParamLimits

0x36a8,	// (0x0005d584) postcard_message_pane

0x3b79,	// (0x0005da55) call2_cli_visual_pane_t1_ParamLimits

0x3b79,	// (0x0005da55) call2_cli_visual_pane_t1

0x439d,	// (0x0005e279) postcard_message_pane_t1_ParamLimits

0x439d,	// (0x0005e279) postcard_message_pane_t1

0x4386,	// (0x0005e262) postcard_address_pane_t1_ParamLimits

0x4386,	// (0x0005e262) postcard_address_pane_t1

0x4372,	// (0x0005e24e) popup_call3_audio_in_window_ParamLimits

0x4372,	// (0x0005e24e) popup_call3_audio_in_window

0x41fd,	// (0x0005e0d9) bg_popup_call3_in_pane_ParamLimits

0x41fd,	// (0x0005e0d9) bg_popup_call3_in_pane

0x4273,	// (0x0005e14f) popup_call3_audio_in_window_g1_ParamLimits

0x4273,	// (0x0005e14f) popup_call3_audio_in_window_g1

0x4293,	// (0x0005e16f) popup_call3_audio_in_window_g2_ParamLimits

0x4293,	// (0x0005e16f) popup_call3_audio_in_window_g2

0x42b3,	// (0x0005e18f) popup_call3_audio_in_window_g3_ParamLimits

0x42b3,	// (0x0005e18f) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x00069512) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x00069512) popup_call3_audio_in_window_g

0x42e4,	// (0x0005e1c0) popup_call3_audio_in_window_t1_ParamLimits

0x42e4,	// (0x0005e1c0) popup_call3_audio_in_window_t1

0x4322,	// (0x0005e1fe) popup_call3_audio_in_window_t2_ParamLimits

0x4322,	// (0x0005e1fe) popup_call3_audio_in_window_t2

0x4360,	// (0x0005e23c) popup_call3_audio_in_window_t3_ParamLimits

0x4360,	// (0x0005e23c) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x0006951b) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x0006951b) popup_call3_audio_in_window_t

0xac39,	// (0x00064b15) bg_popup_call3_rect_pane

0xbe90,	// (0x00065d6c) bg_popup_call3_rect_pane_g1

0xa0ea,	// (0x00063fc6) bg_popup_call3_rect_pane_g2

0xbe98,	// (0x00065d74) bg_popup_call3_rect_pane_g3

0xbea0,	// (0x00065d7c) bg_popup_call3_rect_pane_g4

0xbea8,	// (0x00065d84) bg_popup_call3_rect_pane_g5

0xbeb0,	// (0x00065d8c) bg_popup_call3_rect_pane_g6

0xbeb8,	// (0x00065d94) bg_popup_call3_rect_pane_g7

0x3258,	// (0x0005d134) mup_visualizer_osc_pane

0xad18,	// (0x00064bf4) mup_visualizer_spec_pane

0x422d,	// (0x0005e109) call3_video_qcif_pane_ParamLimits

0x422d,	// (0x0005e109) call3_video_qcif_pane

0x4240,	// (0x0005e11c) call3_video_qcif_uncrop_pane_ParamLimits

0x4240,	// (0x0005e11c) call3_video_qcif_uncrop_pane

0x424e,	// (0x0005e12a) call3_video_subqcif_pane_ParamLimits

0x424e,	// (0x0005e12a) call3_video_subqcif_pane

0x4262,	// (0x0005e13e) call3_video_subqcif_uncrop_pane_ParamLimits

0x4262,	// (0x0005e13e) call3_video_subqcif_uncrop_pane

0x42d3,	// (0x0005e1af) popup_call3_audio_in_window_g4_ParamLimits

0x42d3,	// (0x0005e1af) popup_call3_audio_in_window_g4

0x41ec,	// (0x0005e0c8) mup_spec_half_pane

0x41f5,	// (0x0005e0d1) mup_spec_half_pane_cp

0xc128,	// (0x00066004) mup_osc_middle_pane

0xc131,	// (0x0006600d) mup_visualizer_osc_pane_g1

0x41cc,	// (0x0005e0a8) mup_spec_bar_pane_ParamLimits

0x41cc,	// (0x0005e0a8) mup_spec_bar_pane

0xc115,	// (0x00065ff1) mup_spec_bar_pane_g1

0xc11f,	// (0x00065ffb) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00069506) mup_spec_bar_pane_g

0x156e,	// (0x0005b44a) aid_cale_week_size_cell_pane_ParamLimits

0x1581,	// (0x0005b45d) bg_cale_heading_pane_ParamLimits

0xa166,	// (0x00064042) bg_cale_pane_cp01_ParamLimits

0x1595,	// (0x0005b471) cale_week_corner_pane_ParamLimits

0x15ab,	// (0x0005b487) cale_week_day_heading_pane_ParamLimits

0x15bf,	// (0x0005b49b) cale_week_scroll_pane_g1_ParamLimits

0x15d0,	// (0x0005b4ac) cale_week_scroll_pane_g2_ParamLimits

0x15e1,	// (0x0005b4bd) cale_week_scroll_pane_g3_ParamLimits

0x15f2,	// (0x0005b4ce) cale_week_scroll_pane_g4_ParamLimits

0x1603,	// (0x0005b4df) cale_week_scroll_pane_g5_ParamLimits

0x1616,	// (0x0005b4f2) cale_week_scroll_pane_g6_ParamLimits

0x1629,	// (0x0005b505) cale_week_scroll_pane_g7_ParamLimits

0x163c,	// (0x0005b518) cale_week_scroll_pane_g8_ParamLimits

0x164f,	// (0x0005b52b) cale_week_scroll_pane_g9_ParamLimits

0x1660,	// (0x0005b53c) cale_week_scroll_pane_g10_ParamLimits

0x1671,	// (0x0005b54d) cale_week_scroll_pane_g11_ParamLimits

0x1682,	// (0x0005b55e) cale_week_scroll_pane_g12_ParamLimits

0x1693,	// (0x0005b56f) cale_week_scroll_pane_g13_ParamLimits

0x16a4,	// (0x0005b580) cale_week_scroll_pane_g14_ParamLimits

0x16b5,	// (0x0005b591) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x000690ae) cale_week_scroll_pane_g_ParamLimits

0x16c6,	// (0x0005b5a2) cale_week_time_pane_ParamLimits

0x16d9,	// (0x0005b5b5) grid_cale_week_pane_ParamLimits

0xa17f,	// (0x0006405b) listscroll_cale_week_pane_t1

0x16ee,	// (0x0005b5ca) scroll_pane_cp08_ParamLimits

0x22f0,	// (0x0005c1cc) cale_month_corner_pane_ParamLimits

0xa57e,	// (0x0006445a) cale_month_pane_t1

0x25d2,	// (0x0005c4ae) cale_month_week_pane_ParamLimits

0x2c91,	// (0x0005cb6d) popup_call_status_window_g1_ParamLimits

0x2ca5,	// (0x0005cb81) popup_call_status_window_g2_ParamLimits

0x2cb9,	// (0x0005cb95) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x00069256) popup_call_status_window_g_ParamLimits

0xa94a,	// (0x00064826) aid_call2_pane

0x34c8,	// (0x0005d3a4) msg_header_pane_g1

0x3696,	// (0x0005d572) postcard_address2_pane_ParamLimits

0x3696,	// (0x0005d572) postcard_address2_pane

0x36a8,	// (0x0005d584) postcard_message2_pane_ParamLimits

0x36a8,	// (0x0005d584) postcard_message2_pane

0x417e,	// (0x0005e05a) message2_row_pane_ParamLimits

0x417e,	// (0x0005e05a) message2_row_pane

0x419a,	// (0x0005e076) address2_row_pane_ParamLimits

0x419a,	// (0x0005e076) address2_row_pane

0xc0e3,	// (0x00065fbf) postcard_message2_row_pane_g1

0xc0eb,	// (0x00065fc7) postcard_message2_row_pane_t1

0xc0e3,	// (0x00065fbf) address2_row_pane_g1

0xc0eb,	// (0x00065fc7) address2_row_pane_t1

0x199c,	// (0x0005b878) aid_size_cell_vorec

0x9c87,	// (0x00063b63) main_rss_pane

0x41ad,	// (0x0005e089) rss_list_single_pane_ParamLimits

0x41ad,	// (0x0005e089) rss_list_single_pane

0xc0f9,	// (0x00065fd5) rss_list_single_pane_t1

0xc107,	// (0x00065fe3) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x00069501) rss_list_single_pane_t

0x9c87,	// (0x00063b63) main_camera2_pane

0x9c87,	// (0x00063b63) main_video2_pane

0x4416,	// (0x0005e2f2) cams_zoom_pane_cp2_ParamLimits

0x4416,	// (0x0005e2f2) cams_zoom_pane_cp2

0x4436,	// (0x0005e312) image2_vga_pane_ParamLimits

0x4436,	// (0x0005e312) image2_vga_pane

0x4487,	// (0x0005e363) main_camera2_pane_g1_ParamLimits

0x4487,	// (0x0005e363) main_camera2_pane_g1

0x44a7,	// (0x0005e383) main_camera2_pane_g2_ParamLimits

0x44a7,	// (0x0005e383) main_camera2_pane_g2

0x44c7,	// (0x0005e3a3) main_camera2_pane_g3_ParamLimits

0x44c7,	// (0x0005e3a3) main_camera2_pane_g3

0x44e7,	// (0x0005e3c3) main_camera2_pane_g4_ParamLimits

0x44e7,	// (0x0005e3c3) main_camera2_pane_g4

0x4507,	// (0x0005e3e3) main_camera2_pane_g5_ParamLimits

0x4507,	// (0x0005e3e3) main_camera2_pane_g5

0x4527,	// (0x0005e403) main_camera2_pane_g6_ParamLimits

0x4527,	// (0x0005e403) main_camera2_pane_g6

0x4547,	// (0x0005e423) main_camera2_pane_g7_ParamLimits

0x4547,	// (0x0005e423) main_camera2_pane_g7

0x4567,	// (0x0005e443) main_camera2_pane_g8_ParamLimits

0x4567,	// (0x0005e443) main_camera2_pane_g8

0x0008,

0xf646,	// (0x00069522) main_camera2_pane_g_ParamLimits

0xf646,	// (0x00069522) main_camera2_pane_g

0x45a7,	// (0x0005e483) main_camera2_pane_t1_ParamLimits

0x45a7,	// (0x0005e483) main_camera2_pane_t1

0x45dc,	// (0x0005e4b8) main_camera2_pane_t2_ParamLimits

0x45dc,	// (0x0005e4b8) main_camera2_pane_t2

0x4602,	// (0x0005e4de) main_camera2_pane_t3_ParamLimits

0x4602,	// (0x0005e4de) main_camera2_pane_t3

0x4660,	// (0x0005e53c) main_camera2_pane_t4_ParamLimits

0x4660,	// (0x0005e53c) main_camera2_pane_t4

0x0006,

0xf659,	// (0x00069535) main_camera2_pane_t_ParamLimits

0xf659,	// (0x00069535) main_camera2_pane_t

0x46f2,	// (0x0005e5ce) cams_zoom_pane_cp4_ParamLimits

0x46f2,	// (0x0005e5ce) cams_zoom_pane_cp4

0x4708,	// (0x0005e5e4) image2_cif_pane_ParamLimits

0x4708,	// (0x0005e5e4) image2_cif_pane

0x4733,	// (0x0005e60f) image2_subqcif_pane_ParamLimits

0x4733,	// (0x0005e60f) image2_subqcif_pane

0x474d,	// (0x0005e629) main_video2_pane_g1_ParamLimits

0x474d,	// (0x0005e629) main_video2_pane_g1

0x4767,	// (0x0005e643) main_video2_pane_g2_ParamLimits

0x4767,	// (0x0005e643) main_video2_pane_g2

0x477d,	// (0x0005e659) main_video2_pane_g3_ParamLimits

0x477d,	// (0x0005e659) main_video2_pane_g3

0x4793,	// (0x0005e66f) main_video2_pane_g4_ParamLimits

0x4793,	// (0x0005e66f) main_video2_pane_g4

0x47a9,	// (0x0005e685) main_video2_pane_g5_ParamLimits

0x47a9,	// (0x0005e685) main_video2_pane_g5

0x47bf,	// (0x0005e69b) main_video2_pane_g6_ParamLimits

0x47bf,	// (0x0005e69b) main_video2_pane_g6

0x0005,

0xf668,	// (0x00069544) main_video2_pane_g_ParamLimits

0xf668,	// (0x00069544) main_video2_pane_g

0x47d9,	// (0x0005e6b5) main_video2_pane_t1_ParamLimits

0x47d9,	// (0x0005e6b5) main_video2_pane_t1

0x47fd,	// (0x0005e6d9) main_video2_pane_t2_ParamLimits

0x47fd,	// (0x0005e6d9) main_video2_pane_t2

0x484b,	// (0x0005e727) main_video2_pane_t3_ParamLimits

0x484b,	// (0x0005e727) main_video2_pane_t3

0x0002,

0xf675,	// (0x00069551) main_video2_pane_t_ParamLimits

0xf675,	// (0x00069551) main_video2_pane_t

0x3cc6,	// (0x0005dba2) call_muted_g2

0x0001,

0xf617,	// (0x000694f3) call_muted_g

0x9c87,	// (0x00063b63) main_mup2_pane

0x488f,	// (0x0005e76b) main_mup2_pane_g1_ParamLimits

0x488f,	// (0x0005e76b) main_mup2_pane_g1

0x489b,	// (0x0005e777) main_mup2_pane_g2_ParamLimits

0x489b,	// (0x0005e777) main_mup2_pane_g2

0xc1e3,	// (0x000660bf) main_mup_pane_g13_cp1

0xc1eb,	// (0x000660c7) mup_volume_pane_cp1

0x48b7,	// (0x0005e793) main_mup2_pane_g4_ParamLimits

0x48b7,	// (0x0005e793) main_mup2_pane_g4

0x48c9,	// (0x0005e7a5) main_mup2_pane_g5_ParamLimits

0x48c9,	// (0x0005e7a5) main_mup2_pane_g5

0x48db,	// (0x0005e7b7) main_mup2_pane_g6_ParamLimits

0x48db,	// (0x0005e7b7) main_mup2_pane_g6

0x48ed,	// (0x0005e7c9) main_mup2_pane_g7_ParamLimits

0x48ed,	// (0x0005e7c9) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x00069558) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x00069558) main_mup2_pane_g

0x4905,	// (0x0005e7e1) main_mup2_pane_t1_ParamLimits

0x4905,	// (0x0005e7e1) main_mup2_pane_t1

0x491b,	// (0x0005e7f7) main_mup2_pane_t2_ParamLimits

0x491b,	// (0x0005e7f7) main_mup2_pane_t2

0x4931,	// (0x0005e80d) main_mup2_pane_t3_ParamLimits

0x4931,	// (0x0005e80d) main_mup2_pane_t3

0x4947,	// (0x0005e823) main_mup2_pane_t4_ParamLimits

0x4947,	// (0x0005e823) main_mup2_pane_t4

0x495f,	// (0x0005e83b) main_mup2_pane_t5_ParamLimits

0x495f,	// (0x0005e83b) main_mup2_pane_t5

0x4977,	// (0x0005e853) main_mup2_pane_t6_ParamLimits

0x4977,	// (0x0005e853) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x00069567) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x00069567) main_mup2_pane_t

0x49a7,	// (0x0005e883) mup2_visualizer_pane_ParamLimits

0x49a7,	// (0x0005e883) mup2_visualizer_pane

0x49d5,	// (0x0005e8b1) mup_progress_pane_cp_ParamLimits

0x49d5,	// (0x0005e8b1) mup_progress_pane_cp

0xc1ce,	// (0x000660aa) mup_volume_pane_cp_ParamLimits

0xc1ce,	// (0x000660aa) mup_volume_pane_cp

0x49e9,	// (0x0005e8c5) mup2_visualizer_pane_g1_ParamLimits

0x49e9,	// (0x0005e8c5) mup2_visualizer_pane_g1

0xde31,	// (0x00067d0d) mup2_visualizer_pane_g2_ParamLimits

0xde31,	// (0x00067d0d) mup2_visualizer_pane_g2

0x4a00,	// (0x0005e8dc) mup2_visualizer_pane_g3_ParamLimits

0x4a00,	// (0x0005e8dc) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x00069574) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x00069574) mup2_visualizer_pane_g

0xaf75,	// (0x00064e51) aid_size_cell_fmradio

0x3e78,	// (0x0005dd54) aid_height_parent_landcape

0xa3e6,	// (0x000642c2) wml_content_pane_cp

0xa3ee,	// (0x000642ca) wml_tabs_pane

0xa3f7,	// (0x000642d3) popup_wml_miniature_window

0xa3ff,	// (0x000642db) scroll_pane_cp021

0xa413,	// (0x000642ef) wml_content_pane_comp8

0x9c87,	// (0x00063b63) bg_popup_sub_pane_cp05

0xde4f,	// (0x00067d2b) popup_wml_miniature_window_g1

0xde57,	// (0x00067d33) wml_miniature_view_pane

0x4a0c,	// (0x0005e8e8) aid_size_wml_view

0x4a14,	// (0x0005e8f0) wml_miniature_view_pane_g1

0x4a1d,	// (0x0005e8f9) wml_miniature_view_pane_g2

0x4a26,	// (0x0005e902) wml_miniature_view_pane_g3

0x4a2e,	// (0x0005e90a) wml_miniature_view_pane_g4

0x4a36,	// (0x0005e912) wml_miniature_view_pane_g5

0x4a3e,	// (0x0005e91a) wml_miniature_view_pane_g6

0x4a46,	// (0x0005e922) wml_miniature_view_pane_g7

0x4a4e,	// (0x0005e92a) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x0006957b) wml_miniature_view_pane_g

0xde5f,	// (0x00067d3b) background_graphic_ParamLimits

0xde5f,	// (0x00067d3b) background_graphic

0xde6b,	// (0x00067d47) wml_tabs_2_pane

0xde74,	// (0x00067d50) wml_tabs_3_pane_ParamLimits

0xde74,	// (0x00067d50) wml_tabs_3_pane

0xde86,	// (0x00067d62) wml_tabs_4_pane_ParamLimits

0xde86,	// (0x00067d62) wml_tabs_4_pane

0xde9c,	// (0x00067d78) wml_tabs_5_pane_ParamLimits

0xde9c,	// (0x00067d78) wml_tabs_5_pane

0xdeb6,	// (0x00067d92) wml_tabs_pane_g2_ParamLimits

0xdeb6,	// (0x00067d92) wml_tabs_pane_g2

0xdeca,	// (0x00067da6) wml_tabs_pane_g3_ParamLimits

0xdeca,	// (0x00067da6) wml_tabs_pane_g3

0x4a56,	// (0x0005e932) wml_tabs_2_active_pane_ParamLimits

0x4a56,	// (0x0005e932) wml_tabs_2_active_pane

0x4a6a,	// (0x0005e946) wml_tabs_2_passive_pane_ParamLimits

0x4a6a,	// (0x0005e946) wml_tabs_2_passive_pane

0x4a7e,	// (0x0005e95a) wml_tabs_3_active_pane_cp_ParamLimits

0x4a7e,	// (0x0005e95a) wml_tabs_3_active_pane_cp

0x4a93,	// (0x0005e96f) wml_tabs_3_passive_pane_ParamLimits

0x4a93,	// (0x0005e96f) wml_tabs_3_passive_pane

0x4aa6,	// (0x0005e982) wml_tabs_3_passive_pane_cp_ParamLimits

0x4aa6,	// (0x0005e982) wml_tabs_3_passive_pane_cp

0x4abd,	// (0x0005e999) tabs_4_active_pane

0x4ac5,	// (0x0005e9a1) tabs_4_passive_pane

0x4acf,	// (0x0005e9ab) tabs_4_passive_pane_cp

0x4ad7,	// (0x0005e9b3) tabs_4_passive_pane_cp2

0x3b93,	// (0x0005da6f) aid_height_text

0x322e,	// (0x0005d10a) mup_volume_cont_pane_ParamLimits

0x322e,	// (0x0005d10a) mup_volume_cont_pane

0x116f,	// (0x0005b04b) aid_size_cell_pinb

0x1179,	// (0x0005b055) aid_size_list_pinb

0x49c1,	// (0x0005e89d) mup2_volume_cont_pane_ParamLimits

0x49c1,	// (0x0005e89d) mup2_volume_cont_pane

0xc1ba,	// (0x00066096) mup2_volume_cont_pane_g1_ParamLimits

0xc1ba,	// (0x00066096) mup2_volume_cont_pane_g1

0x0e15,	// (0x0005acf1) aid_size_cell_touch_ParamLimits

0x0e15,	// (0x0005acf1) aid_size_cell_touch

0x105f,	// (0x0005af3b) touch_pane_ParamLimits

0x105f,	// (0x0005af3b) touch_pane

0x0df7,	// (0x0005acd3) main_rss2_pane

0xdee7,	// (0x00067dc3) listscroll_rss2_pane

0xdef0,	// (0x00067dcc) rss2_navigation_pane

0xdef8,	// (0x00067dd4) list_rss2_pane

0xaaf0,	// (0x000649cc) scroll_pane_cp22

0xdf00,	// (0x00067ddc) rss2_navigation_pane_g1

0xdf09,	// (0x00067de5) rss2_navigation_pane_g2

0xdf11,	// (0x00067ded) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x0006958c) rss2_navigation_pane_g

0xdf19,	// (0x00067df5) rss2_navigation_pane_t1

0x4ae1,	// (0x0005e9bd) rss2_list_single_pane_ParamLimits

0x4ae1,	// (0x0005e9bd) rss2_list_single_pane

0xdf27,	// (0x00067e03) rss2_list_single_pane_t2

0xdf35,	// (0x00067e11) rss2_list_single_pane_t3_ParamLimits

0xdf35,	// (0x00067e11) rss2_list_single_pane_t3

0xdf52,	// (0x00067e2e) rss2_list_single_pane_t4

0x2aae,	// (0x0005c98a) smil_status_pane_g1

0x9866,	// (0x00063742) main_image2_pane_ParamLimits

0x9866,	// (0x00063742) main_image2_pane

0x4587,	// (0x0005e463) main_camera2_pane_g9_ParamLimits

0x4587,	// (0x0005e463) main_camera2_pane_g9

0x46b5,	// (0x0005e591) main_camera2_pane_t5_ParamLimits

0x46b5,	// (0x0005e591) main_camera2_pane_t5

0xc18a,	// (0x00066066) main_camera2_pane_t6_ParamLimits

0xc18a,	// (0x00066066) main_camera2_pane_t6

0x4af6,	// (0x0005e9d2) main_image2_pane_g1_ParamLimits

0x4af6,	// (0x0005e9d2) main_image2_pane_g1

0x38cf,	// (0x0005d7ab) smil2_video_pane_ParamLimits

0x38cf,	// (0x0005d7ab) smil2_video_pane

0x0e55,	// (0x0005ad31) aid_zoom_text_primary_cp

0x985c,	// (0x00063738) popup_preview_fixed_window

0xa34f,	// (0x0006422b) im_reading_pane_g1

0x43fe,	// (0x0005e2da) cams2_bc_adjust_pane_cp_ParamLimits

0x43fe,	// (0x0005e2da) cams2_bc_adjust_pane_cp

0x46e4,	// (0x0005e5c0) cams2_bc_adjust_pane_ParamLimits

0x46e4,	// (0x0005e5c0) cams2_bc_adjust_pane

0xdf60,	// (0x00067e3c) cams2_bc_adjust_pane_g1

0xc1f3,	// (0x000660cf) cams2_slider_pane

0xc1fc,	// (0x000660d8) cams2_slider_pane_g1

0xc205,	// (0x000660e1) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x00069593) cams2_slider_pane_g

0x125b,	// (0x0005b137) calc_display_pane_ParamLimits

0x1283,	// (0x0005b15f) calc_paper_pane_ParamLimits

0x12a6,	// (0x0005b182) grid_calc_pane_ParamLimits

0xa9b0,	// (0x0006488c) popup_clock_digital_window_t1_ParamLimits

0xaf12,	// (0x00064dee) main_image_pane_t1

0x123d,	// (0x0005b119) aid_size_cell_calc_ParamLimits

0x123d,	// (0x0005b119) aid_size_cell_calc

0x3ebe,	// (0x0005dd9a) popup_blid_sat_info2_window_ParamLimits

0x3ebe,	// (0x0005dd9a) popup_blid_sat_info2_window

0xdf70,	// (0x00067e4c) aid_size_cell_blid

0xdf78,	// (0x00067e54) bg_popup_window_pane_cp07

0xdf9b,	// (0x00067e77) grid_popup_blid_pane

0xdfae,	// (0x00067e8a) heading_pane_cp05_ParamLimits

0xdfae,	// (0x00067e8a) heading_pane_cp05

0xe078,	// (0x00067f54) cell_popup_blid_pane_ParamLimits

0xe078,	// (0x00067f54) cell_popup_blid_pane

0xe09c,	// (0x00067f78) cell_popup_blid_pane_g1

0xe0a4,	// (0x00067f80) cell_popup_blid_pane_t1

0x4991,	// (0x0005e86d) mup2_indicator_pane_ParamLimits

0x4991,	// (0x0005e86d) mup2_indicator_pane

0xac39,	// (0x00064b15) mup2_visualizer_osc_pane

0xde3d,	// (0x00067d19) mup2_visualizer_spec_pane_ParamLimits

0xde3d,	// (0x00067d19) mup2_visualizer_spec_pane

0x4b0c,	// (0x0005e9e8) mup2_spec_half_pane

0x4b15,	// (0x0005e9f1) mup2_spec_half_pane_cp

0x4b1d,	// (0x0005e9f9) mup2_spec_bar_pane_ParamLimits

0x4b1d,	// (0x0005e9f9) mup2_spec_bar_pane

0xc115,	// (0x00065ff1) mup2_spec_bar_pane_g1

0xc11f,	// (0x00065ffb) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00069506) mup2_spec_bar_pane_g

0x4b3d,	// (0x0005ea19) mup2_osc_middle_pane

0xc131,	// (0x0006600d) mup2_visualizer_osc_pane_g1

0x9894,	// (0x00063770) popup_number_entry_window_t1_ParamLimits

0x98a7,	// (0x00063783) popup_number_entry_window_t2_ParamLimits

0x98b9,	// (0x00063795) popup_number_entry_window_t3_ParamLimits

0x10b1,	// (0x0005af8d) popup_number_entry_window_t5_ParamLimits

0x10b1,	// (0x0005af8d) popup_number_entry_window_t5

0xf0ec,	// (0x00068fc8) popup_number_entry_window_t_ParamLimits

0x98cb,	// (0x000637a7) text_title_cp2_ParamLimits

0xadf8,	// (0x00064cd4) aid_hotspot_pointer_text2_pane

0xae12,	// (0x00064cee) main_viewer_pane_g9_ParamLimits

0xae12,	// (0x00064cee) main_viewer_pane_g9

0xa57e,	// (0x0006445a) cale_month_pane_t1_ParamLimits

0xa5e9,	// (0x000644c5) bg_cale_pane_ParamLimits

0xa601,	// (0x000644dd) list_cale_pane_ParamLimits

0xa17f,	// (0x0006405b) listscroll_cale_day_pane_t1

0xa612,	// (0x000644ee) scroll_pane_cp09_ParamLimits

0x3260,	// (0x0005d13c) main_mup_eq_pane_t1_ParamLimits

0x3260,	// (0x0005d13c) main_mup_eq_pane_t1

0x327a,	// (0x0005d156) main_mup_eq_pane_t2_ParamLimits

0x327a,	// (0x0005d156) main_mup_eq_pane_t2

0x3294,	// (0x0005d170) main_mup_eq_pane_t3_ParamLimits

0x3294,	// (0x0005d170) main_mup_eq_pane_t3

0x32b0,	// (0x0005d18c) main_mup_eq_pane_t4_ParamLimits

0x32b0,	// (0x0005d18c) main_mup_eq_pane_t4

0x32cc,	// (0x0005d1a8) main_mup_eq_pane_t5_ParamLimits

0x32cc,	// (0x0005d1a8) main_mup_eq_pane_t5

0x32e8,	// (0x0005d1c4) main_mup_eq_pane_t6_ParamLimits

0x32e8,	// (0x0005d1c4) main_mup_eq_pane_t6

0x32fc,	// (0x0005d1d8) main_mup_eq_pane_t7_ParamLimits

0x32fc,	// (0x0005d1d8) main_mup_eq_pane_t7

0x3310,	// (0x0005d1ec) main_mup_eq_pane_t8_ParamLimits

0x3310,	// (0x0005d1ec) main_mup_eq_pane_t8

0x3324,	// (0x0005d200) main_mup_eq_pane_t9_ParamLimits

0x3324,	// (0x0005d200) main_mup_eq_pane_t9

0x333e,	// (0x0005d21a) main_mup_eq_pane_t10_ParamLimits

0x333e,	// (0x0005d21a) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x00069355) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x00069355) main_mup_eq_pane_t

0x33ed,	// (0x0005d2c9) mup_equalizer_pane_cp5_ParamLimits

0x3401,	// (0x0005d2dd) mup_equalizer_pane_cp6_ParamLimits

0x3415,	// (0x0005d2f1) mup_equalizer_pane_cp7_ParamLimits

0x0df7,	// (0x0005acd3) main_gallery_pane

0xc13a,	// (0x00066016) smil2_volume_pane

0xc142,	// (0x0006601e) smil_status_volume_pane_g1_ParamLimits

0xc155,	// (0x00066031) smil_status_volume_pane_g2_ParamLimits

0xc168,	// (0x00066044) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x0006950b) smil_status_volume_pane_g_ParamLimits

0xdf78,	// (0x00067e54) bg_popup_window_pane_cp07_ParamLimits

0xdf86,	// (0x00067e62) blid_firmament_pane

0x4b46,	// (0x0005ea22) aid_size_cell_gallery_ParamLimits

0x4b46,	// (0x0005ea22) aid_size_cell_gallery

0x4b5c,	// (0x0005ea38) grid_gallery_pane_ParamLimits

0x4b5c,	// (0x0005ea38) grid_gallery_pane

0x4b75,	// (0x0005ea51) cell_gallery_pane_ParamLimits

0x4b75,	// (0x0005ea51) cell_gallery_pane

0xe0b2,	// (0x00067f8e) bg_cell_gallery_focus_pane_ParamLimits

0xe0b2,	// (0x00067f8e) bg_cell_gallery_focus_pane

0xe0c4,	// (0x00067fa0) cell_gallery_pane_g1_ParamLimits

0xe0c4,	// (0x00067fa0) cell_gallery_pane_g1

0x4bbe,	// (0x0005ea9a) cell_gallery_pane_g2_ParamLimits

0x4bbe,	// (0x0005ea9a) cell_gallery_pane_g2

0x4bcb,	// (0x0005eaa7) cell_gallery_pane_g3_ParamLimits

0x4bcb,	// (0x0005eaa7) cell_gallery_pane_g3

0xe0d0,	// (0x00067fac) cell_gallery_pane_g4_ParamLimits

0xe0d0,	// (0x00067fac) cell_gallery_pane_g4

0x0003,

0xf6c6,	// (0x000695a2) cell_gallery_pane_g_ParamLimits

0xf6c6,	// (0x000695a2) cell_gallery_pane_g

0xe0dc,	// (0x00067fb8) bg_cell_gallery_focus_pane_g1

0xe0e4,	// (0x00067fc0) bg_cell_gallery_focus_pane_g2

0xe0ec,	// (0x00067fc8) bg_cell_gallery_focus_pane_g3

0xe0f4,	// (0x00067fd0) bg_cell_gallery_focus_pane_g4

0xe0fc,	// (0x00067fd8) bg_cell_gallery_focus_pane_g5

0xe104,	// (0x00067fe0) bg_cell_gallery_focus_pane_g6

0xe10c,	// (0x00067fe8) bg_cell_gallery_focus_pane_g7

0xe114,	// (0x00067ff0) bg_cell_gallery_focus_pane_g8

0x0007,

0x0482,	// (0x0005a35e) bg_cell_gallery_focus_pane_g

0xe11c,	// (0x00067ff8) aid_firma_cardinal

0xe130,	// (0x0006800c) blid_firmament_pane_t1

0xe147,	// (0x00068023) blid_firmament_pane_t2

0xe15e,	// (0x0006803a) blid_firmament_pane_t3

0xe175,	// (0x00068051) blid_firmament_pane_t4

0x0003,

0x0493,	// (0x0005a36f) blid_firmament_pane_t

0xe18c,	// (0x00068068) blid_sat_info_pane

0xe19c,	// (0x00068078) blid_sat_info_pane_g1

0xe19c,	// (0x00068078) blid_sat_info_pane_g2

0x0001,

0x049c,	// (0x0005a378) blid_sat_info_pane_g

0xe1a6,	// (0x00068082) blid_sat_info_pane_t1

0xe1b4,	// (0x00068090) smil2_volume_content_pane

0xe1bd,	// (0x00068099) smil2_volume_pane_g1

0xdfa5,	// (0x00067e81) smil2_volume_content_pane_g1

0xe1c5,	// (0x000680a1) smil2_volume_content_pane_g2

0xe1ce,	// (0x000680aa) smil2_volume_content_pane_g3

0xe1d7,	// (0x000680b3) smil2_volume_content_pane_g4

0xe1e0,	// (0x000680bc) smil2_volume_content_pane_g5

0xe1e9,	// (0x000680c5) smil2_volume_content_pane_g6

0xe1f2,	// (0x000680ce) smil2_volume_content_pane_g7

0xe1fb,	// (0x000680d7) smil2_volume_content_pane_g8

0xe204,	// (0x000680e0) smil2_volume_content_pane_g9

0xe20d,	// (0x000680e9) smil2_volume_content_pane_g10

0x0009,

0xf6cf,	// (0x000695ab) smil2_volume_content_pane_g

0x1748,	// (0x0005b624) cale_week_day_heading_pane_t1_ParamLimits

0x1775,	// (0x0005b651) cale_week_day_heading_pane_t2_ParamLimits

0x17a2,	// (0x0005b67e) cale_week_day_heading_pane_t3_ParamLimits

0x17cf,	// (0x0005b6ab) cale_week_day_heading_pane_t4_ParamLimits

0x17fc,	// (0x0005b6d8) cale_week_day_heading_pane_t5_ParamLimits

0x1829,	// (0x0005b705) cale_week_day_heading_pane_t6_ParamLimits

0x1858,	// (0x0005b734) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x000690cd) cale_week_day_heading_pane_t_ParamLimits

0xa191,	// (0x0006406d) bg_cale_side_pane_ParamLimits

0x1885,	// (0x0005b761) cale_week_time_pane_t1_ParamLimits

0x189d,	// (0x0005b779) cale_week_time_pane_t2_ParamLimits

0x18b5,	// (0x0005b791) cale_week_time_pane_t3_ParamLimits

0x18cd,	// (0x0005b7a9) cale_week_time_pane_t4_ParamLimits

0x18e5,	// (0x0005b7c1) cale_week_time_pane_t5_ParamLimits

0x18fd,	// (0x0005b7d9) cale_week_time_pane_t6_ParamLimits

0x1915,	// (0x0005b7f1) cale_week_time_pane_t7_ParamLimits

0x192d,	// (0x0005b809) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x000690dc) cale_week_time_pane_t_ParamLimits

0x1945,	// (0x0005b821) cell_cale_week_pane_g2_ParamLimits

0xa191,	// (0x0006406d) bg_cale_side_pane_cp01_ParamLimits

0x28ff,	// (0x0005c7db) cale_month_week_pane_t1_ParamLimits

0x2916,	// (0x0005c7f2) cale_month_week_pane_t2_ParamLimits

0x292d,	// (0x0005c809) cale_month_week_pane_t3_ParamLimits

0x2944,	// (0x0005c820) cale_month_week_pane_t4_ParamLimits

0x295b,	// (0x0005c837) cale_month_week_pane_t5_ParamLimits

0x2972,	// (0x0005c84e) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x000691b5) cale_month_week_pane_t_ParamLimits

0xa590,	// (0x0006446c) cell_cale_month_pane_g1_ParamLimits

0x0df7,	// (0x0005acd3) main_cale_event_viewer_pane

0x0df7,	// (0x0005acd3) listscroll_cale_event_viewer_pane

0xe216,	// (0x000680f2) list_cale_ev_pane

0xe21e,	// (0x000680fa) scroll_pane_cp023

0xe22a,	// (0x00068106) field_cale_ev_pane_ParamLimits

0xe22a,	// (0x00068106) field_cale_ev_pane

0xe248,	// (0x00068124) field_cale_ev_content_pane_ParamLimits

0xe248,	// (0x00068124) field_cale_ev_content_pane

0xe254,	// (0x00068130) field_cale_ev_pane_g1_ParamLimits

0xe254,	// (0x00068130) field_cale_ev_pane_g1

0xe260,	// (0x0006813c) field_cale_ev_pane_g2_ParamLimits

0xe260,	// (0x0006813c) field_cale_ev_pane_g2

0xe278,	// (0x00068154) field_cale_ev_pane_g3_ParamLimits

0xe278,	// (0x00068154) field_cale_ev_pane_g3

0x0002,

0x04b6,	// (0x0005a392) field_cale_ev_pane_g_ParamLimits

0x04b6,	// (0x0005a392) field_cale_ev_pane_g

0xe290,	// (0x0006816c) field_cale_ev_pane_t1_ParamLimits

0xe290,	// (0x0006816c) field_cale_ev_pane_t1

0xe2a7,	// (0x00068183) field_cale_ev_content_pane_t1_ParamLimits

0xe2a7,	// (0x00068183) field_cale_ev_content_pane_t1

0xadc2,	// (0x00064c9e) bg_button_pane_cp01

0x9fe5,	// (0x00063ec1) listscroll_cale_week_pane_ParamLimits

0x1564,	// (0x0005b440) popup_toolbar_window_cp01

0xa17f,	// (0x0006405b) listscroll_cale_week_pane_t1_ParamLimits

0x9fe5,	// (0x00063ec1) listscroll_cale_day_pane_ParamLimits

0x2aff,	// (0x0005c9db) popup_toolbar_window_cp02

0xa17f,	// (0x0006405b) listscroll_cale_day_pane_t1_ParamLimits

0x9fe5,	// (0x00063ec1) main_cale_month_pane_ParamLimits

0x40f2,	// (0x0005dfce) popup_toolbar_window_cp03_ParamLimits

0x40f2,	// (0x0005dfce) popup_toolbar_window_cp03

0x3797,	// (0x0005d673) main_image_pane_g2_ParamLimits

0x3797,	// (0x0005d673) main_image_pane_g2

0x37a8,	// (0x0005d684) main_image_pane_g3_ParamLimits

0x37a8,	// (0x0005d684) main_image_pane_g3

0x0002,

0xf50b,	// (0x000693e7) main_image_pane_g_ParamLimits

0xf50b,	// (0x000693e7) main_image_pane_g

0xaf12,	// (0x00064dee) main_image_pane_t1_ParamLimits

0x37b9,	// (0x0005d695) main_image_pane_t2_ParamLimits

0x37b9,	// (0x0005d695) main_image_pane_t2

0x37cb,	// (0x0005d6a7) main_image_pane_t3_ParamLimits

0x37cb,	// (0x0005d6a7) main_image_pane_t3

0x37f3,	// (0x0005d6cf) main_image_pane_t4_ParamLimits

0x37f3,	// (0x0005d6cf) main_image_pane_t4

0x0003,

0xf512,	// (0x000693ee) main_image_pane_t_ParamLimits

0xf512,	// (0x000693ee) main_image_pane_t

0x3813,	// (0x0005d6ef) popup_image_details_window_cp01

0x381d,	// (0x0005d6f9) popup_toobar_trans_pane_cp01_ParamLimits

0x381d,	// (0x0005d6f9) popup_toobar_trans_pane_cp01

0x3f9d,	// (0x0005de79) popup_image_details_window_ParamLimits

0x3f9d,	// (0x0005de79) popup_image_details_window

0xc09b,	// (0x00065f77) popup_image_focus_window

0x43b8,	// (0x0005e294) camera2_autofocus_pane_ParamLimits

0x43b8,	// (0x0005e294) camera2_autofocus_pane

0x0df7,	// (0x0005acd3) bg_popup_sub_pane_cp06

0xe2c5,	// (0x000681a1) popup_image_focus_window_g1

0xe2cd,	// (0x000681a9) popup_image_focus_window_g2

0xe2d5,	// (0x000681b1) popup_image_focus_window_g3

0xe2dd,	// (0x000681b9) popup_image_focus_window_g4

0x0003,

0x04bd,	// (0x0005a399) popup_image_focus_window_g

0xe2e5,	// (0x000681c1) popup_image_focus_window_t1

0xe2f3,	// (0x000681cf) popup_image_focus_window_t2

0xe303,	// (0x000681df) popup_image_focus_window_t3

0x0002,

0x04c6,	// (0x0005a3a2) popup_image_focus_window_t

0xe311,	// (0x000681ed) camera2_autofocus_pane_g1

0x9866,	// (0x00063742) bg_tb_trans_pane_cp01

0xe31f,	// (0x000681fb) popup_image_details_window_g1

0xe332,	// (0x0006820e) popup_image_details_window_g2

0x0002,

0x04d8,	// (0x0005a3b4) popup_image_details_window_g

0xe35b,	// (0x00068237) popup_image_details_window_t1

0xe36d,	// (0x00068249) popup_image_details_window_t2

0xe386,	// (0x00068262) popup_image_details_window_t3

0xe39a,	// (0x00068276) popup_image_details_window_t4

0xe3b5,	// (0x00068291) popup_image_details_window_t5

0x0004,

0x04df,	// (0x0005a3bb) popup_image_details_window_t

0x9fad,	// (0x00063e89) bg_calc_paper_pane_ParamLimits

0x9fc1,	// (0x00063e9d) grid_highlight_pane_cp013

0x9fcb,	// (0x00063ea7) list_calc_pane_ParamLimits

0x9fdd,	// (0x00063eb9) scroll_pane_cp024

0x9fe5,	// (0x00063ec1) bg_calc_display_pane_ParamLimits

0x1397,	// (0x0005b273) calc_display_pane_t1_ParamLimits

0x13a9,	// (0x0005b285) calc_display_pane_t2_ParamLimits

0x9ff1,	// (0x00063ecd) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0006904f) calc_display_pane_t_ParamLimits

0x1461,	// (0x0005b33d) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0006906c) cell_calc_pane_g

0x146a,	// (0x0005b346) cell_calc_pane_t1

0xa068,	// (0x00063f44) grid_highlight_pane_cp02_ParamLimits

0xa07e,	// (0x00063f5a) toolbar_button_pane_cp01_ParamLimits

0xa07e,	// (0x00063f5a) toolbar_button_pane_cp01

0xaf57,	// (0x00064e33) temp_image_control_pane_ParamLimits

0xaf57,	// (0x00064e33) temp_image_control_pane

0x9866,	// (0x00063742) main_mp3_pane

0xe3cf,	// (0x000682ab) temp_image_control_pane_g1_ParamLimits

0xe3cf,	// (0x000682ab) temp_image_control_pane_g1

0xe3dd,	// (0x000682b9) temp_image_control_pane_g2_ParamLimits

0xe3dd,	// (0x000682b9) temp_image_control_pane_g2

0xe3ef,	// (0x000682cb) temp_image_control_pane_g3_ParamLimits

0xe3ef,	// (0x000682cb) temp_image_control_pane_g3

0x4c08,	// (0x0005eae4) temp_image_control_pane_g4_ParamLimits

0x4c08,	// (0x0005eae4) temp_image_control_pane_g4

0x0003,

0xf6ef,	// (0x000695cb) temp_image_control_pane_g_ParamLimits

0xf6ef,	// (0x000695cb) temp_image_control_pane_g

0xe3cf,	// (0x000682ab) main_mp3_pane_g1

0x4c1b,	// (0x0005eaf7) main_mp3_pane_g2

0x0007,

0xf6f8,	// (0x000695d4) main_mp3_pane_g

0xe432,	// (0x0006830e) main_mp3_pane_t1

0xa260,	// (0x0006413c) main_camera_pane_g8_ParamLimits

0xa260,	// (0x0006413c) main_camera_pane_g8

0x1bff,	// (0x0005badb) main_video_pane_g7_ParamLimits

0x1bff,	// (0x0005badb) main_video_pane_g7

0xc1a8,	// (0x00066084) main_camera2_pane_t7_ParamLimits

0xc1a8,	// (0x00066084) main_camera2_pane_t7

0xa3a6,	// (0x00064282) scroll_pane_cp025_ParamLimits

0xa3a6,	// (0x00064282) scroll_pane_cp025

0xa3ba,	// (0x00064296) scroll_pane_cp026_ParamLimits

0xa3ba,	// (0x00064296) scroll_pane_cp026

0xa3c9,	// (0x000642a5) wml_content_pane_ParamLimits

0x0df7,	// (0x0005acd3) main_touch_calib_pane

0x4ce5,	// (0x0005ebc1) main_touch_calib_pane_g1

0x4cf1,	// (0x0005ebcd) main_touch_calib_pane_g2

0x4cfd,	// (0x0005ebd9) main_touch_calib_pane_g3

0x4d09,	// (0x0005ebe5) main_touch_calib_pane_g4

0x0003,

0xf716,	// (0x000695f2) main_touch_calib_pane_g

0x4d15,	// (0x0005ebf1) main_touch_calib_pane_t1

0x4d2f,	// (0x0005ec0b) main_touch_calib_pane_t2

0x0004,

0xf71f,	// (0x000695fb) main_touch_calib_pane_t

0xab7a,	// (0x00064a56) mup_progress_pane_cp02

0xab99,	// (0x00064a75) navi_pane_g1

0xabfb,	// (0x00064ad7) navi_pane_mp_t3

0x9866,	// (0x00063742) main_mp3_pane_ParamLimits

0x4130,	// (0x0005e00c) navi_pane_ParamLimits

0xe3cf,	// (0x000682ab) main_mp3_pane_g1_ParamLimits

0x4c1b,	// (0x0005eaf7) main_mp3_pane_g2_ParamLimits

0x4c29,	// (0x0005eb05) main_mp3_pane_g3_ParamLimits

0x4c29,	// (0x0005eb05) main_mp3_pane_g3

0x4c37,	// (0x0005eb13) main_mp3_pane_g4_ParamLimits

0x4c37,	// (0x0005eb13) main_mp3_pane_g4

0xe3ff,	// (0x000682db) main_mp3_pane_g5_ParamLimits

0xe3ff,	// (0x000682db) main_mp3_pane_g5

0xe40d,	// (0x000682e9) main_mp3_pane_g6_ParamLimits

0xe40d,	// (0x000682e9) main_mp3_pane_g6

0xe41a,	// (0x000682f6) main_mp3_pane_g7_ParamLimits

0xe41a,	// (0x000682f6) main_mp3_pane_g7

0xe426,	// (0x00068302) main_mp3_pane_g8_ParamLimits

0xe426,	// (0x00068302) main_mp3_pane_g8

0xf6f8,	// (0x000695d4) main_mp3_pane_g_ParamLimits

0x4c43,	// (0x0005eb1f) main_mp3_pane_t2

0x4c51,	// (0x0005eb2d) main_mp3_pane_t3

0xe440,	// (0x0006831c) main_mp3_pane_t4

0xe44e,	// (0x0006832a) main_mp3_pane_t5

0x0005,

0xf709,	// (0x000695e5) main_mp3_pane_t

0xe45c,	// (0x00068338) mup_progress_pane_cp01

0x0e55,	// (0x0005ad31) aid_zoom_text_secondary2

0xe216,	// (0x000680f2) list_cale_ev2_pane

0xe21e,	// (0x000680fa) scroll_pane_cp023_ParamLimits

0x4d85,	// (0x0005ec61) field_cale_ev2_pane_ParamLimits

0x4d85,	// (0x0005ec61) field_cale_ev2_pane

0x4da5,	// (0x0005ec81) field_cale_ev2_pane_g1_ParamLimits

0x4da5,	// (0x0005ec81) field_cale_ev2_pane_g1

0x4db1,	// (0x0005ec8d) field_cale_ev2_pane_g2_ParamLimits

0x4db1,	// (0x0005ec8d) field_cale_ev2_pane_g2

0x4dc9,	// (0x0005eca5) field_cale_ev2_pane_g3_ParamLimits

0x4dc9,	// (0x0005eca5) field_cale_ev2_pane_g3

0x0003,

0xf72a,	// (0x00069606) field_cale_ev2_pane_g_ParamLimits

0xf72a,	// (0x00069606) field_cale_ev2_pane_g

0x4ded,	// (0x0005ecc9) field_cale_ev2_pane_t1_ParamLimits

0x4ded,	// (0x0005ecc9) field_cale_ev2_pane_t1

0x4e04,	// (0x0005ece0) field_cale_ev2_pane_t2_ParamLimits

0x4e04,	// (0x0005ece0) field_cale_ev2_pane_t2

0x0001,

0xf733,	// (0x0006960f) field_cale_ev2_pane_t_ParamLimits

0xf733,	// (0x0006960f) field_cale_ev2_pane_t

0x364c,	// (0x0005d528) main_postcard_pane_g5_ParamLimits

0x364c,	// (0x0005d528) main_postcard_pane_g5

0x3662,	// (0x0005d53e) main_postcard_pane_g6_ParamLimits

0x3662,	// (0x0005d53e) main_postcard_pane_g6

0x19bf,	// (0x0005b89b) camera2_autofocus_pane_cp_ParamLimits

0x19bf,	// (0x0005b89b) camera2_autofocus_pane_cp

0x9866,	// (0x00063742) main_mup3_pane

0x4e39,	// (0x0005ed15) main_mup3_pane_g1_ParamLimits

0x4e39,	// (0x0005ed15) main_mup3_pane_g1

0x4e5b,	// (0x0005ed37) main_mup3_pane_g2_ParamLimits

0x4e5b,	// (0x0005ed37) main_mup3_pane_g2

0x4ed9,	// (0x0005edb5) main_mup3_pane_g3_ParamLimits

0x4ed9,	// (0x0005edb5) main_mup3_pane_g3

0x4f1b,	// (0x0005edf7) main_mup3_pane_g4_ParamLimits

0x4f1b,	// (0x0005edf7) main_mup3_pane_g4

0x4f5d,	// (0x0005ee39) main_mup3_pane_g5_ParamLimits

0x4f5d,	// (0x0005ee39) main_mup3_pane_g5

0x4f9f,	// (0x0005ee7b) main_mup3_pane_g6_ParamLimits

0x4f9f,	// (0x0005ee7b) main_mup3_pane_g6

0xe464,	// (0x00068340) main_mup3_pane_g7_ParamLimits

0xe464,	// (0x00068340) main_mup3_pane_g7

0x0007,

0xf743,	// (0x0006961f) main_mup3_pane_g_ParamLimits

0xf743,	// (0x0006961f) main_mup3_pane_g

0x5019,	// (0x0005eef5) main_mup3_pane_t1_ParamLimits

0x5019,	// (0x0005eef5) main_mup3_pane_t1

0x5089,	// (0x0005ef65) main_mup3_pane_t2_ParamLimits

0x5089,	// (0x0005ef65) main_mup3_pane_t2

0x5159,	// (0x0005f035) main_mup3_pane_t4_ParamLimits

0x5159,	// (0x0005f035) main_mup3_pane_t4

0x51af,	// (0x0005f08b) main_mup3_pane_t5_ParamLimits

0x51af,	// (0x0005f08b) main_mup3_pane_t5

0x5263,	// (0x0005f13f) main_mup3_pane_t6_ParamLimits

0x5263,	// (0x0005f13f) main_mup3_pane_t6

0x0005,

0xf754,	// (0x00069630) main_mup3_pane_t_ParamLimits

0xf754,	// (0x00069630) main_mup3_pane_t

0x5317,	// (0x0005f1f3) mup3_progress_pane_ParamLimits

0x5317,	// (0x0005f1f3) mup3_progress_pane

0x5399,	// (0x0005f275) popup_mup3_control_window_ParamLimits

0x5399,	// (0x0005f275) popup_mup3_control_window

0xe472,	// (0x0006834e) popup_mup3_text_window

0x53cb,	// (0x0005f2a7) mup3_progress_pane_t1

0x53e2,	// (0x0005f2be) mup3_progress_pane_t2

0xe47a,	// (0x00068356) mup3_progress_pane_t3

0x0002,

0xf761,	// (0x0006963d) mup3_progress_pane_t

0xe491,	// (0x0006836d) mup_progress_pane_cp03

0x0df7,	// (0x0005acd3) bg_tb_trans_pane_cp04

0x53f9,	// (0x0005f2d5) mup3_volume_pane

0x5401,	// (0x0005f2dd) popup_mup3_control_window_g1

0x540a,	// (0x0005f2e6) mup3_volume_pane_g1

0x5413,	// (0x0005f2ef) mup3_volume_pane_g2

0x541c,	// (0x0005f2f8) mup3_volume_pane_g3

0x0002,

0xf768,	// (0x00069644) mup3_volume_pane_g

0x0df7,	// (0x0005acd3) bg_tb_trans_pane_cp03

0xe4a1,	// (0x0006837d) popup_mup3_text_window_g1

0xe4a9,	// (0x00068385) popup_mup3_text_window_t1

0xa03f,	// (0x00063f1b) list_calc_item_pane_g1_ParamLimits

0xdede,	// (0x00067dba) mup_volume_pane_cp_g1

0x4d49,	// (0x0005ec25) main_touch_calib_pane_t3

0x4d5d,	// (0x0005ec39) main_touch_calib_pane_t4

0x4d71,	// (0x0005ec4d) main_touch_calib_pane_t5

0x0e01,	// (0x0005acdd) aid_cell_size_toolbar2

0x0e09,	// (0x0005ace5) aid_popup3_width_pane

0x0e45,	// (0x0005ad21) aid_zoom_text_msg_primary

0xa240,	// (0x0006411c) vorec_t7

0xa003,	// (0x00063edf) bg_calc_paper_pane_g1_ParamLimits

0xa00f,	// (0x00063eeb) bg_calc_paper_pane_g2_ParamLimits

0xa01b,	// (0x00063ef7) bg_calc_paper_pane_g3_ParamLimits

0xa027,	// (0x00063f03) bg_calc_paper_pane_g4_ParamLimits

0xa033,	// (0x00063f0f) bg_calc_paper_pane_g5_ParamLimits

0x13f0,	// (0x0005b2cc) bg_calc_paper_pane_g6_ParamLimits

0x13ff,	// (0x0005b2db) bg_calc_paper_pane_g7_ParamLimits

0x140e,	// (0x0005b2ea) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00069056) bg_calc_paper_pane_g_ParamLimits

0x1421,	// (0x0005b2fd) calc_bg_paper_pane_g9_ParamLimits

0x1b0d,	// (0x0005b9e9) image_qvga_pane_ParamLimits

0x1b0d,	// (0x0005b9e9) image_qvga_pane

0x9ee2,	// (0x00063dbe) bg_popup_sub_pane_cp04_ParamLimits

0xae8e,	// (0x00064d6a) popup_mup_playback_window_g1_ParamLimits

0xae9a,	// (0x00064d76) popup_mup_playback_window_t1_ParamLimits

0xaeaf,	// (0x00064d8b) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x000693e2) popup_mup_playback_window_t_ParamLimits

0x48ab,	// (0x0005e787) main_mup2_pane_g3_ParamLimits

0x48ab,	// (0x0005e787) main_mup2_pane_g3

0x1f06,	// (0x0005bde2) popup_toolbar_window_cp04

0xb291,	// (0x0006516d) popup_call2_audio_second_window_g3_ParamLimits

0xb291,	// (0x0006516d) popup_call2_audio_second_window_g3

0xb69b,	// (0x00065577) popup_call2_audio_first_window_g4_ParamLimits

0xb69b,	// (0x00065577) popup_call2_audio_first_window_g4

0xbd1a,	// (0x00065bf6) popup_call2_audio_in_window_g4_ParamLimits

0xbd1a,	// (0x00065bf6) popup_call2_audio_in_window_g4

0x3779,	// (0x0005d655) aid_area_sk_bg_cut_ParamLimits

0x3779,	// (0x0005d655) aid_area_sk_bg_cut

0xaec4,	// (0x00064da0) aid_area_sk_bg_cut_2_ParamLimits

0xaec4,	// (0x00064da0) aid_area_sk_bg_cut_2

0x4bae,	// (0x0005ea8a) aid_placing_details_win

0x4bb6,	// (0x0005ea92) aid_placing_details_win_2

0xe311,	// (0x000681ed) camera2_autofocus_pane_g1_ParamLimits

0x0ffe,	// (0x0005aeda) popup_fixed_preview_cale_window_ParamLimits

0x0ffe,	// (0x0005aeda) popup_fixed_preview_cale_window

0xac53,	// (0x00064b2f) navi_slider_pane_g3

0xac5c,	// (0x00064b38) navi_slider_pane_g4

0xac65,	// (0x00064b41) navi_slider_pane_g5

0xac53,	// (0x00064b2f) navi_slider_pane_g6

0xac6e,	// (0x00064b4a) navi_slider_pane_g7

0xad8f,	// (0x00064c6b) mup_scale_pane_g3

0xad98,	// (0x00064c74) mup_scale_pane_g4

0xada1,	// (0x00064c7d) mup_scale_pane_g5

0x3429,	// (0x0005d305) mup_scale_pane_g6

0x3432,	// (0x0005d30e) mup_scale_pane_g7

0xac53,	// (0x00064b2f) cams2_slider_pane_g3

0xdf68,	// (0x00067e44) cams2_slider_pane_g4

0xc20e,	// (0x000660ea) cams2_slider_pane_g5

0xac53,	// (0x00064b2f) cams2_slider_pane_g6

0xc216,	// (0x000660f2) cams2_slider_pane_g7

0xe19c,	// (0x00068078) camera2_autofocus_pane_cp_g1

0xe4b7,	// (0x00068393) bg_popup_preview_window_pane_cp02_ParamLimits

0xe4b7,	// (0x00068393) bg_popup_preview_window_pane_cp02

0xe4c3,	// (0x0006839f) list_fp_cale_pane_ParamLimits

0xe4c3,	// (0x0006839f) list_fp_cale_pane

0xe4cf,	// (0x000683ab) popup_fixed_preview_cale_window_t1_ParamLimits

0xe4cf,	// (0x000683ab) popup_fixed_preview_cale_window_t1

0x5425,	// (0x0005f301) popup_fixed_preview_cale_window_t2_ParamLimits

0x5425,	// (0x0005f301) popup_fixed_preview_cale_window_t2

0x543a,	// (0x0005f316) popup_fixed_preview_cale_window_t3_ParamLimits

0x543a,	// (0x0005f316) popup_fixed_preview_cale_window_t3

0x0002,

0xf76f,	// (0x0006964b) popup_fixed_preview_cale_window_t_ParamLimits

0xf76f,	// (0x0006964b) popup_fixed_preview_cale_window_t

0x544f,	// (0x0005f32b) list_single_fp_cale_pane_ParamLimits

0x544f,	// (0x0005f32b) list_single_fp_cale_pane

0xe4ed,	// (0x000683c9) list_single_fp_cale_pane_g1_ParamLimits

0xe4ed,	// (0x000683c9) list_single_fp_cale_pane_g1

0xe4f9,	// (0x000683d5) list_single_fp_cale_pane_g2_ParamLimits

0xe4f9,	// (0x000683d5) list_single_fp_cale_pane_g2

0x0002,

0x0571,	// (0x0005a44d) list_single_fp_cale_pane_g_ParamLimits

0x0571,	// (0x0005a44d) list_single_fp_cale_pane_g

0xe512,	// (0x000683ee) list_single_fp_cale_pane_t1_ParamLimits

0xe512,	// (0x000683ee) list_single_fp_cale_pane_t1

0xe524,	// (0x00068400) list_single_fp_cale_pane_t2_ParamLimits

0xe524,	// (0x00068400) list_single_fp_cale_pane_t2

0x0001,

0x0578,	// (0x0005a454) list_single_fp_cale_pane_t_ParamLimits

0x0578,	// (0x0005a454) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0df7,	// (0x0005acd3) main_dialer_pane

0x5464,	// (0x0005f340) aid_cell_size_keypad

0x546e,	// (0x0005f34a) dialer_ne_pane

0x5476,	// (0x0005f352) grid_dialer_command_1_pane

0x547e,	// (0x0005f35a) grid_dialer_command_2_pane

0x5486,	// (0x0005f362) grid_dialer_keypad_pane

0x5498,	// (0x0005f374) bg_popup_call_pane_cp06_ParamLimits

0x5498,	// (0x0005f374) bg_popup_call_pane_cp06

0x54a4,	// (0x0005f380) dialer_ne_clear_pane_ParamLimits

0x54a4,	// (0x0005f380) dialer_ne_clear_pane

0xe557,	// (0x00068433) dialer_ne_pane_g1

0xe55f,	// (0x0006843b) dialer_ne_pane_t1_ParamLimits

0xe55f,	// (0x0006843b) dialer_ne_pane_t1

0x54b0,	// (0x0005f38c) dialer_ne_pane_t2_ParamLimits

0x54b0,	// (0x0005f38c) dialer_ne_pane_t2

0x54da,	// (0x0005f3b6) dialer_ne_pane_t3_ParamLimits

0x54da,	// (0x0005f3b6) dialer_ne_pane_t3

0x0002,

0xf776,	// (0x00069652) dialer_ne_pane_t_ParamLimits

0xf776,	// (0x00069652) dialer_ne_pane_t

0x550a,	// (0x0005f3e6) dialer_ne_pane_t3_copy1_ParamLimits

0x550a,	// (0x0005f3e6) dialer_ne_pane_t3_copy1

0x5539,	// (0x0005f415) cell_dialer_keypad_pane_ParamLimits

0x5539,	// (0x0005f415) cell_dialer_keypad_pane

0x5550,	// (0x0005f42c) cell_dialer_command_1_pane_ParamLimits

0x5550,	// (0x0005f42c) cell_dialer_command_1_pane

0x5566,	// (0x0005f442) cell_dialer_command_2_pane_ParamLimits

0x5566,	// (0x0005f442) cell_dialer_command_2_pane

0xe571,	// (0x0006844d) bg_button_pane_cp02_ParamLimits

0xe571,	// (0x0006844d) bg_button_pane_cp02

0x5575,	// (0x0005f451) cell_dialer_keypad_pane_g1_ParamLimits

0x5575,	// (0x0005f451) cell_dialer_keypad_pane_g1

0xe571,	// (0x0006844d) bg_button_pane_cp03_ParamLimits

0xe571,	// (0x0006844d) bg_button_pane_cp03

0x5589,	// (0x0005f465) cell_dialer_command_1_pane_g1_ParamLimits

0x5589,	// (0x0005f465) cell_dialer_command_1_pane_g1

0xe57d,	// (0x00068459) bg_button_pane_cp04

0x559d,	// (0x0005f479) cell_dialer_command_2_pane_g1

0xac39,	// (0x00064b15) bg_button_pane_cp06

0xe585,	// (0x00068461) dialer_ne_clear_pane_g1

0x2f6d,	// (0x0005ce49) navi_pane_g2

0x2f9b,	// (0x0005ce77) navi_pane_g3

0x0002,

0xf409,	// (0x000692e5) navi_pane_g

0x2fc4,	// (0x0005cea0) navi_pane_mv_g2

0x2feb,	// (0x0005cec7) navi_pane_mv_g5

0x2ff3,	// (0x0005cecf) navi_pane_mv_t1

0x9fe5,	// (0x00063ec1) main_clock2_pane

0x55d1,	// (0x0005f4ad) main_clock2_list_pane_ParamLimits

0x55d1,	// (0x0005f4ad) main_clock2_list_pane

0x5607,	// (0x0005f4e3) main_clock2_pane_t1_ParamLimits

0x5607,	// (0x0005f4e3) main_clock2_pane_t1

0x5643,	// (0x0005f51f) main_clock2_pane_t2_ParamLimits

0x5643,	// (0x0005f51f) main_clock2_pane_t2

0x0004,

0xf77d,	// (0x00069659) main_clock2_pane_t_ParamLimits

0xf77d,	// (0x00069659) main_clock2_pane_t

0x56cd,	// (0x0005f5a9) popup_clock_analogue_window_cp03_ParamLimits

0x56cd,	// (0x0005f5a9) popup_clock_analogue_window_cp03

0x56f2,	// (0x0005f5ce) popup_clock_digital_window_cp02_ParamLimits

0x56f2,	// (0x0005f5ce) popup_clock_digital_window_cp02

0x5763,	// (0x0005f63f) main_clock2_list_single_pane_ParamLimits

0x5763,	// (0x0005f63f) main_clock2_list_single_pane

0xac39,	// (0x00064b15) list_highlight_pane_cp05

0xe58d,	// (0x00068469) main_clock2_list_single_pane_t1

0x1f06,	// (0x0005bde2) popup_toolbar_window_cp04_ParamLimits

0x4bd8,	// (0x0005eab4) camera2_autofocus_pane_g2_ParamLimits

0x4bd8,	// (0x0005eab4) camera2_autofocus_pane_g2

0x4be4,	// (0x0005eac0) camera2_autofocus_pane_g3_ParamLimits

0x4be4,	// (0x0005eac0) camera2_autofocus_pane_g3

0x4bf0,	// (0x0005eacc) camera2_autofocus_pane_g4_ParamLimits

0x4bf0,	// (0x0005eacc) camera2_autofocus_pane_g4

0x4bfc,	// (0x0005ead8) camera2_autofocus_pane_g5_ParamLimits

0x4bfc,	// (0x0005ead8) camera2_autofocus_pane_g5

0x0004,

0xf6e4,	// (0x000695c0) camera2_autofocus_pane_g_ParamLimits

0xf6e4,	// (0x000695c0) camera2_autofocus_pane_g

0x4e19,	// (0x0005ecf5) camera2_autofocus_pane_cp_g2

0x4e21,	// (0x0005ecfd) camera2_autofocus_pane_cp_g3

0x4e29,	// (0x0005ed05) camera2_autofocus_pane_cp_g4

0x4e31,	// (0x0005ed0d) camera2_autofocus_pane_cp_g5

0x0004,

0xf738,	// (0x00069614) camera2_autofocus_pane_cp_g

0x5490,	// (0x0005f36c) popup_dialer_spcha_window

0x0df7,	// (0x0005acd3) bg_popup_sub_pane_cp07

0xe59b,	// (0x00068477) list_spcha_pane

0xe5a3,	// (0x0006847f) list_single_spcha_pane_ParamLimits

0xe5a3,	// (0x0006847f) list_single_spcha_pane

0x0df7,	// (0x0005acd3) list_highlight_pane_cp06

0xe5b4,	// (0x00068490) list_single_spcha_pane_t1

0xbac4,	// (0x000659a0) popup_call2_audio_out_window_g4_ParamLimits

0xbac4,	// (0x000659a0) popup_call2_audio_out_window_g4

0x0df7,	// (0x0005acd3) main_imed2_pane

0xc0a3,	// (0x00065f7f) popup_imed_adjust2_window

0x3fb5,	// (0x0005de91) popup_imed_trans_window_ParamLimits

0x3fb5,	// (0x0005de91) popup_imed_trans_window

0xdfda,	// (0x00067eb6) popup_blid_sat_info2_window_t1

0xdfe8,	// (0x00067ec4) popup_blid_sat_info2_window_t2

0x000a,

0x0462,	// (0x0005a33e) popup_blid_sat_info2_window_t

0x580d,	// (0x0005f6e9) aid_size_cell_colour_35

0x582d,	// (0x0005f709) aid_size_cell_colour_112

0x584d,	// (0x0005f729) aid_size_cell_effect

0xc07b,	// (0x00065f57) bg_tb_trans_pane_cp02

0xa709,	// (0x000645e5) heading_imed_pane

0x586d,	// (0x0005f749) listscroll_imed_pane

0xe5c2,	// (0x0006849e) heading_imed_pane_g1

0xe5ca,	// (0x000684a6) heading_imed_pane_t1

0xe5d8,	// (0x000684b4) grid_imed_colour_35_pane_ParamLimits

0xe5d8,	// (0x000684b4) grid_imed_colour_35_pane

0x5879,	// (0x0005f755) grid_imed_effect_pane

0xe5ef,	// (0x000684cb) list_imed_aspect_pane

0x588f,	// (0x0005f76b) scroll_pane_cp027_ParamLimits

0x588f,	// (0x0005f76b) scroll_pane_cp027

0x58a0,	// (0x0005f77c) cell_imed_effect_pane_ParamLimits

0x58a0,	// (0x0005f77c) cell_imed_effect_pane

0xe5f7,	// (0x000684d3) cell_imed_colour_pane_ParamLimits

0xe5f7,	// (0x000684d3) cell_imed_colour_pane

0xe639,	// (0x00068515) cell_imed_colour_pane_g1_ParamLimits

0xe639,	// (0x00068515) cell_imed_colour_pane_g1

0xe64a,	// (0x00068526) hgihlgiht_grid_pane_cp016_ParamLimits

0xe64a,	// (0x00068526) hgihlgiht_grid_pane_cp016

0x58c7,	// (0x0005f7a3) cell_imed_effect_pane_g1

0x58cf,	// (0x0005f7ab) grid_highlight_pane_cp017

0xe65b,	// (0x00068537) list_imed_single_pane_ParamLimits

0xe65b,	// (0x00068537) list_imed_single_pane

0x0df7,	// (0x0005acd3) list_highlight_pane_cp07

0xe670,	// (0x0006854c) list_imed_aspect_pane_comp1_t1

0xc07b,	// (0x00065f57) bg_tb_trans_pane_cp05

0xe692,	// (0x0006856e) popup_imed_adjust2_window_g1

0xe6b9,	// (0x00068595) popup_imed_adjust2_window_t1

0xe6d1,	// (0x000685ad) slider_imed_adjust_pane

0xe6e5,	// (0x000685c1) slider_imed_adjust_pane_g1

0xe6f5,	// (0x000685d1) slider_imed_adjust_pane_g2

0xe705,	// (0x000685e1) slider_imed_adjust_pane_g3

0xe716,	// (0x000685f2) slider_imed_adjust_pane_g4

0x0003,

0x05a1,	// (0x0005a47d) slider_imed_adjust_pane_g

0x58d8,	// (0x0005f7b4) aid_size_cell_clipart2

0x58e4,	// (0x0005f7c0) grid_imed_clipart_pane

0xe727,	// (0x00068603) scroll_pane_cp031

0x58ee,	// (0x0005f7ca) cell_imed_clipart_pane_ParamLimits

0x58ee,	// (0x0005f7ca) cell_imed_clipart_pane

0x5910,	// (0x0005f7ec) cell_imed_clipart_pane_g1

0x0df7,	// (0x0005acd3) grid_highlight_pane_cp014

0x55e6,	// (0x0005f4c2) main_clock2_pane_g1_ParamLimits

0x55e6,	// (0x0005f4c2) main_clock2_pane_g1

0x570e,	// (0x0005f5ea) aid_call2_pane_cp10

0x5720,	// (0x0005f5fc) aid_call_pane_cp10

0xab6e,	// (0x00064a4a) popup_clock_analogue_window_cp10_g1

0xab6e,	// (0x00064a4a) popup_clock_analogue_window_cp10_g2

0x5732,	// (0x0005f60e) popup_clock_analogue_window_cp10_g3

0x5732,	// (0x0005f60e) popup_clock_analogue_window_cp10_g4

0xab6e,	// (0x00064a4a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf788,	// (0x00069664) popup_clock_analogue_window_cp10_g

0x5744,	// (0x0005f620) popup_clock_analogue_window_cp10_t1

0x5775,	// (0x0005f651) clock_digital_number_pane_cp10_ParamLimits

0x5775,	// (0x0005f651) clock_digital_number_pane_cp10

0x578d,	// (0x0005f669) clock_digital_number_pane_cp11_ParamLimits

0x578d,	// (0x0005f669) clock_digital_number_pane_cp11

0x57a5,	// (0x0005f681) clock_digital_number_pane_cp12_ParamLimits

0x57a5,	// (0x0005f681) clock_digital_number_pane_cp12

0x57bd,	// (0x0005f699) clock_digital_number_pane_cp13_ParamLimits

0x57bd,	// (0x0005f699) clock_digital_number_pane_cp13

0x57d5,	// (0x0005f6b1) clock_digital_separator_pane_cp10_ParamLimits

0x57d5,	// (0x0005f6b1) clock_digital_separator_pane_cp10

0x57ed,	// (0x0005f6c9) popup_clock_digital_window_cp02_t1_ParamLimits

0x57ed,	// (0x0005f6c9) popup_clock_digital_window_cp02_t1

0x9eda,	// (0x00063db6) clock_digital_number_pane_cp10_g1

0x9eda,	// (0x00063db6) clock_digital_number_pane_cp10_g2

0x0001,

0xf793,	// (0x0006966f) clock_digital_number_pane_cp10_g

0x9eda,	// (0x00063db6) clock_digital_separator_pane_cp10_g1

0x9eda,	// (0x00063db6) clock_digital_separator_pane_g2_cp10

0xac09,	// (0x00064ae5) navi_pane_vded_g4

0xac12,	// (0x00064aee) navi_pane_vded_g5

0xac1b,	// (0x00064af7) navi_pane_vded_t1

0x0df7,	// (0x0005acd3) main_vded_pane

0x5919,	// (0x0005f7f5) main_vded_pane_g1

0x5923,	// (0x0005f7ff) main_vded_pane_g2

0x592d,	// (0x0005f809) main_vded_pane_g3

0x0002,

0xf798,	// (0x00069674) main_vded_pane_g

0x5937,	// (0x0005f813) main_vded_pane_t1

0x5945,	// (0x0005f821) main_vded_pane_t2

0x0001,

0xf79f,	// (0x0006967b) main_vded_pane_t

0x5953,	// (0x0005f82f) vded_slider_pane

0x595b,	// (0x0005f837) vded_video_pane

0xe72f,	// (0x0006860b) vded_video_pane_g1

0x5963,	// (0x0005f83f) vded_video_pane_g2

0xe19c,	// (0x00068078) vded_video_pane_g3

0x0002,

0xf7a4,	// (0x00069680) vded_video_pane_g

0xe739,	// (0x00068615) vded_slider_pane_g1

0xdede,	// (0x00067dba) vded_slider_pane_g2

0xe742,	// (0x0006861e) vded_slider_pane_g3

0xe74b,	// (0x00068627) vded_slider_pane_g4

0xe754,	// (0x00068630) vded_slider_pane_g5

0x0004,

0xf7ab,	// (0x00069687) vded_slider_pane_g

0x5381,	// (0x0005f25d) mup3_rocker_pane_ParamLimits

0x5381,	// (0x0005f25d) mup3_rocker_pane

0x596c,	// (0x0005f848) mup3_control_keys_pane_g1

0x5974,	// (0x0005f850) mup3_control_keys_pane_g2

0x597c,	// (0x0005f858) mup3_control_keys_pane_g3

0x5984,	// (0x0005f860) mup3_control_keys_pane_g4

0x0003,

0xf7b6,	// (0x00069692) mup3_control_keys_pane_g

0x1035,	// (0x0005af11) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1035,	// (0x0005af11) popup_toolbar2_fixed_window_cp01

0x53b5,	// (0x0005f291) popup_toolbar2_fixed_window_cp02_ParamLimits

0x53b5,	// (0x0005f291) popup_toolbar2_fixed_window_cp02

0xb403,	// (0x000652df) popup_call2_audio_second_window_t4_ParamLimits

0xb403,	// (0x000652df) popup_call2_audio_second_window_t4

0xb931,	// (0x0006580d) popup_call2_audio_first_window_t6_ParamLimits

0xb931,	// (0x0006580d) popup_call2_audio_first_window_t6

0xbbc7,	// (0x00065aa3) popup_call2_audio_out_window_t6_ParamLimits

0xbbc7,	// (0x00065aa3) popup_call2_audio_out_window_t6

0x0df7,	// (0x0005acd3) main_vitu_pane

0x5994,	// (0x0005f870) aid_size_cell_itu_ParamLimits

0x5994,	// (0x0005f870) aid_size_cell_itu

0x9866,	// (0x00063742) bg_popup_window_pane_cp08_ParamLimits

0x9866,	// (0x00063742) bg_popup_window_pane_cp08

0x59aa,	// (0x0005f886) field_vitu_entry_pane_ParamLimits

0x59aa,	// (0x0005f886) field_vitu_entry_pane

0x59c1,	// (0x0005f89d) grid_vitu_function_pane_ParamLimits

0x59c1,	// (0x0005f89d) grid_vitu_function_pane

0x59dc,	// (0x0005f8b8) grid_vitu_itu_pane_ParamLimits

0x59dc,	// (0x0005f8b8) grid_vitu_itu_pane

0x59fa,	// (0x0005f8d6) cell_vitu_itu_pane_ParamLimits

0x59fa,	// (0x0005f8d6) cell_vitu_itu_pane

0x5a1c,	// (0x0005f8f8) cell_vitu_function_pane_ParamLimits

0x5a1c,	// (0x0005f8f8) cell_vitu_function_pane

0x9866,	// (0x00063742) bg_popup_sub_pane_cp08_ParamLimits

0x9866,	// (0x00063742) bg_popup_sub_pane_cp08

0x5a35,	// (0x0005f911) field_vitu_entry_pane_t1_ParamLimits

0x5a35,	// (0x0005f911) field_vitu_entry_pane_t1

0xe775,	// (0x00068651) field_vitu_entry_pane_t2_ParamLimits

0xe775,	// (0x00068651) field_vitu_entry_pane_t2

0x0001,

0xf7bf,	// (0x0006969b) field_vitu_entry_pane_t_ParamLimits

0xf7bf,	// (0x0006969b) field_vitu_entry_pane_t

0xe792,	// (0x0006866e) bg_button_pane_cp05_ParamLimits

0xe792,	// (0x0006866e) bg_button_pane_cp05

0x5a53,	// (0x0005f92f) cell_vitu_itu_pane_g1

0x5a6b,	// (0x0005f947) cell_vitu_itu_pane_t1_ParamLimits

0x5a6b,	// (0x0005f947) cell_vitu_itu_pane_t1

0x5a7d,	// (0x0005f959) cell_vitu_itu_pane_t2_ParamLimits

0x5a7d,	// (0x0005f959) cell_vitu_itu_pane_t2

0x0002,

0xf7c4,	// (0x000696a0) cell_vitu_itu_pane_t_ParamLimits

0xf7c4,	// (0x000696a0) cell_vitu_itu_pane_t

0xe7a0,	// (0x0006867c) bg_button_pane_cp07

0x5ab2,	// (0x0005f98e) cell_vitu_function_pane_g1

0x9f75,	// (0x00063e51) main_calc_pane_g1

0x0e39,	// (0x0005ad15) aid_visual_content_pane

0x0df7,	// (0x0005acd3) main_vradio_pane

0x5abb,	// (0x0005f997) main_vradio_pane_g1_ParamLimits

0x5abb,	// (0x0005f997) main_vradio_pane_g1

0xe7aa,	// (0x00068686) main_vradio_pane_g2_ParamLimits

0xe7aa,	// (0x00068686) main_vradio_pane_g2

0x0001,

0xf7cb,	// (0x000696a7) main_vradio_pane_g_ParamLimits

0xf7cb,	// (0x000696a7) main_vradio_pane_g

0x5ad4,	// (0x0005f9b0) main_vradio_pane_t1_ParamLimits

0x5ad4,	// (0x0005f9b0) main_vradio_pane_t1

0x5ae9,	// (0x0005f9c5) main_vradio_pane_t2_ParamLimits

0x5ae9,	// (0x0005f9c5) main_vradio_pane_t2

0xe7b7,	// (0x00068693) main_vradio_pane_t3_ParamLimits

0xe7b7,	// (0x00068693) main_vradio_pane_t3

0x0002,

0xf7d0,	// (0x000696ac) main_vradio_pane_t_ParamLimits

0xf7d0,	// (0x000696ac) main_vradio_pane_t

0x5afe,	// (0x0005f9da) vradio_rocker_control_pane_ParamLimits

0x5afe,	// (0x0005f9da) vradio_rocker_control_pane

0x5b10,	// (0x0005f9ec) vradio_station_info_pane_ParamLimits

0x5b10,	// (0x0005f9ec) vradio_station_info_pane

0xe7cb,	// (0x000686a7) vradio_frequency_info_pane_ParamLimits

0xe7cb,	// (0x000686a7) vradio_frequency_info_pane

0xe19c,	// (0x00068078) vradio_station_info_pane_g1

0xe7da,	// (0x000686b6) vradio_station_info_pane_t1_ParamLimits

0xe7da,	// (0x000686b6) vradio_station_info_pane_t1

0xe7fc,	// (0x000686d8) vradio_station_info_pane_t2_ParamLimits

0xe7fc,	// (0x000686d8) vradio_station_info_pane_t2

0x0001,

0x05f3,	// (0x0005a4cf) vradio_station_info_pane_t_ParamLimits

0x05f3,	// (0x0005a4cf) vradio_station_info_pane_t

0xe80e,	// (0x000686ea) vradio_tuning_pane

0xe816,	// (0x000686f2) vradio_rocker_control_pane_g1

0xe81e,	// (0x000686fa) vradio_rocker_control_pane_g2

0xe826,	// (0x00068702) vradio_rocker_control_pane_g3

0xe82e,	// (0x0006870a) vradio_rocker_control_pane_g4

0xe836,	// (0x00068712) vradio_rocker_control_pane_g5

0x0004,

0x05f8,	// (0x0005a4d4) vradio_rocker_control_pane_g

0x5b22,	// (0x0005f9fe) vradio_frequency_info_pane_g1

0xe83e,	// (0x0006871a) vradio_frequency_info_pane_t1_ParamLimits

0xe83e,	// (0x0006871a) vradio_frequency_info_pane_t1

0x5b2c,	// (0x0005fa08) vradio_tuning_pane_g1

0x5b37,	// (0x0005fa13) vradio_tuning_pane_t1

0x0e96,	// (0x0005ad72) area_side_right_pane_ParamLimits

0x0e96,	// (0x0005ad72) area_side_right_pane

0xc042,	// (0x00065f1e) status_small_pane_g1

0xc04a,	// (0x00065f26) status_small_pane_g2

0xc053,	// (0x00065f2f) status_small_pane_g3

0xc05c,	// (0x00065f38) status_small_pane_g4

0x0003,

0xf61c,	// (0x000694f8) status_small_pane_g

0xc065,	// (0x00065f41) status_small_pane_t1

0x0df7,	// (0x0005acd3) main_video3_pane

0xe852,	// (0x0006872e) cams_zoom_vslider_pane

0xe85a,	// (0x00068736) image3_wide_pane_ParamLimits

0xe85a,	// (0x00068736) image3_wide_pane

0xe874,	// (0x00068750) image3_wide_small_pane

0xe880,	// (0x0006875c) main_video3_pane_g1_ParamLimits

0xe880,	// (0x0006875c) main_video3_pane_g1

0xe89c,	// (0x00068778) main_video3_pane_g2_ParamLimits

0xe89c,	// (0x00068778) main_video3_pane_g2

0x0001,

0x0603,	// (0x0005a4df) main_video3_pane_g_ParamLimits

0x0603,	// (0x0005a4df) main_video3_pane_g

0xe8b8,	// (0x00068794) main_video3_pane_t1_ParamLimits

0xe8b8,	// (0x00068794) main_video3_pane_t1

0xe8e3,	// (0x000687bf) main_video3_pane_t2_ParamLimits

0xe8e3,	// (0x000687bf) main_video3_pane_t2

0xe90e,	// (0x000687ea) main_video3_pane_t3_ParamLimits

0xe90e,	// (0x000687ea) main_video3_pane_t3

0x0002,

0x0608,	// (0x0005a4e4) main_video3_pane_t_ParamLimits

0x0608,	// (0x0005a4e4) main_video3_pane_t

0xe93b,	// (0x00068817) cams_zoom_vslider_pane_g1

0xe944,	// (0x00068820) cams_zoom_vslider_pane_g2

0x0001,

0x060f,	// (0x0005a4eb) cams_zoom_vslider_pane_g

0xe94c,	// (0x00068828) small_slider_vertical_pane

0xe19c,	// (0x00068078) small_slider_vertical_pane_g1

0xe19c,	// (0x00068078) small_slider_vertical_pane_g2

0xe954,	// (0x00068830) small_slider_vertical_pane_g3

0x0002,

0x0614,	// (0x0005a4f0) small_slider_vertical_pane_g

0x0df7,	// (0x0005acd3) main_hwr_training_pane

0xe95d,	// (0x00068839) hwr_training_instruct_pane_ParamLimits

0xe95d,	// (0x00068839) hwr_training_instruct_pane

0x5b46,	// (0x0005fa22) hwr_training_navi_pane_ParamLimits

0x5b46,	// (0x0005fa22) hwr_training_navi_pane

0x5b65,	// (0x0005fa41) hwr_training_write_pane_ParamLimits

0x5b65,	// (0x0005fa41) hwr_training_write_pane

0x0df7,	// (0x0005acd3) bg_frame_shadow_pane

0xe994,	// (0x00068870) hwr_training_write_pane_g1

0xe99c,	// (0x00068878) hwr_training_write_pane_g2

0xe9a4,	// (0x00068880) hwr_training_write_pane_g3

0xe9ac,	// (0x00068888) hwr_training_write_pane_g4

0xe9b4,	// (0x00068890) hwr_training_write_pane_g5

0xe9bc,	// (0x00068898) hwr_training_write_pane_g6

0xe9c4,	// (0x000688a0) hwr_training_write_pane_g7

0x0006,

0x061b,	// (0x0005a4f7) hwr_training_write_pane_g

0xd9e0,	// (0x000678bc) hwr_training_navi_pane_g1_ParamLimits

0xd9e0,	// (0x000678bc) hwr_training_navi_pane_g1

0xd9f2,	// (0x000678ce) hwr_training_navi_pane_g2_ParamLimits

0xd9f2,	// (0x000678ce) hwr_training_navi_pane_g2

0xda04,	// (0x000678e0) hwr_training_navi_pane_g3_ParamLimits

0xda04,	// (0x000678e0) hwr_training_navi_pane_g3

0xda14,	// (0x000678f0) hwr_training_navi_pane_g4_ParamLimits

0xda14,	// (0x000678f0) hwr_training_navi_pane_g4

0x0004,

0xf7d7,	// (0x000696b3) hwr_training_navi_pane_g_ParamLimits

0xf7d7,	// (0x000696b3) hwr_training_navi_pane_g

0xda21,	// (0x000678fd) hwr_training_navi_pane_t1

0x5bad,	// (0x0005fa89) list_single_hwr_training_instruct_pane_ParamLimits

0x5bad,	// (0x0005fa89) list_single_hwr_training_instruct_pane

0xe9cc,	// (0x000688a8) list_single_hwr_training_instruct_pane_t1

0xe0dc,	// (0x00067fb8) bg_frame_shadow_pane_g1

0xe9db,	// (0x000688b7) bg_frame_shadow_pane_g2

0xe9e3,	// (0x000688bf) bg_frame_shadow_pane_g3

0xe9eb,	// (0x000688c7) bg_frame_shadow_pane_g4

0xe9f3,	// (0x000688cf) bg_frame_shadow_pane_g5

0xe9fb,	// (0x000688d7) bg_frame_shadow_pane_g6

0xea03,	// (0x000688df) bg_frame_shadow_pane_g7

0xa0c2,	// (0x00063f9e) bg_frame_shadow_pane_g8

0x0007,

0xf7e2,	// (0x000696be) bg_frame_shadow_pane_g

0x0df7,	// (0x0005acd3) main_video_tele_dialer_pane

0x5bc2,	// (0x0005fa9e) aid_size_cell_video_keypad_ParamLimits

0x5bc2,	// (0x0005fa9e) aid_size_cell_video_keypad

0x5bdc,	// (0x0005fab8) grid_video_dialer_keypad_pane_ParamLimits

0x5bdc,	// (0x0005fab8) grid_video_dialer_keypad_pane

0x5c26,	// (0x0005fb02) video_down_pane_cp_ParamLimits

0x5c26,	// (0x0005fb02) video_down_pane_cp

0x5c36,	// (0x0005fb12) cell_video_dialer_keypad_pane_ParamLimits

0x5c36,	// (0x0005fb12) cell_video_dialer_keypad_pane

0xea27,	// (0x00068903) bg_button_pane_cp08_ParamLimits

0xea27,	// (0x00068903) bg_button_pane_cp08

0x5c58,	// (0x0005fb34) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5c58,	// (0x0005fb34) cell_video_dialer_keypad_pane_g1

0x536b,	// (0x0005f247) mup3_rocker2_pane_ParamLimits

0x536b,	// (0x0005f247) mup3_rocker2_pane

0xe19c,	// (0x00068078) mup3_rocker2_pane_g1

0x3e96,	// (0x0005dd72) main_dialer2_pane

0x0df7,	// (0x0005acd3) main_mp4_pane

0xda37,	// (0x00067913) main_mp4_pane_g1_ParamLimits

0xda37,	// (0x00067913) main_mp4_pane_g1

0xda37,	// (0x00067913) main_mp4_pane_g2_ParamLimits

0xda37,	// (0x00067913) main_mp4_pane_g2

0x5c92,	// (0x0005fb6e) main_mp4_pane_g3_ParamLimits

0x5c92,	// (0x0005fb6e) main_mp4_pane_g3

0xda45,	// (0x00067921) main_mp4_pane_g4_ParamLimits

0xda45,	// (0x00067921) main_mp4_pane_g4

0xda6d,	// (0x00067949) main_mp4_pane_g5_ParamLimits

0xda6d,	// (0x00067949) main_mp4_pane_g5

0x0005,

0xf7fd,	// (0x000696d9) main_mp4_pane_g_ParamLimits

0xf7fd,	// (0x000696d9) main_mp4_pane_g

0xdabd,	// (0x00067999) main_mp4_pane_t1_ParamLimits

0xdabd,	// (0x00067999) main_mp4_pane_t1

0xdb19,	// (0x000679f5) main_mp4_pane_t2_ParamLimits

0xdb19,	// (0x000679f5) main_mp4_pane_t2

0xea33,	// (0x0006890f) main_mp4_pane_t3_ParamLimits

0xea33,	// (0x0006890f) main_mp4_pane_t3

0xdb6b,	// (0x00067a47) main_mp4_pane_t4_ParamLimits

0xdb6b,	// (0x00067a47) main_mp4_pane_t4

0x0003,

0xf80a,	// (0x000696e6) main_mp4_pane_t_ParamLimits

0xf80a,	// (0x000696e6) main_mp4_pane_t

0xdbaf,	// (0x00067a8b) mp4_progress_pane_ParamLimits

0xdbaf,	// (0x00067a8b) mp4_progress_pane

0xdbf9,	// (0x00067ad5) mp4_rocker_pane_ParamLimits

0xdbf9,	// (0x00067ad5) mp4_rocker_pane

0xea5b,	// (0x00068937) mp4_progress_pane_t1

0xea74,	// (0x00068950) mp4_progress_pane_t2

0x0001,

0x066b,	// (0x0005a547) mp4_progress_pane_t

0xea8d,	// (0x00068969) mup_progress_pane_cp04

0xea99,	// (0x00068975) mp4_rocker_pane_g1

0x5cce,	// (0x0005fbaa) aid_cell_size_keypad2_ParamLimits

0x5cce,	// (0x0005fbaa) aid_cell_size_keypad2

0x5ce4,	// (0x0005fbc0) dialer2_ne_pane_ParamLimits

0x5ce4,	// (0x0005fbc0) dialer2_ne_pane

0x5cfe,	// (0x0005fbda) grid_dialer2_keypad_pane_ParamLimits

0x5cfe,	// (0x0005fbda) grid_dialer2_keypad_pane

0xdf78,	// (0x00067e54) bg_popup_call_pane_cp07_ParamLimits

0xdf78,	// (0x00067e54) bg_popup_call_pane_cp07

0x5d1a,	// (0x0005fbf6) dialer2_ne_pane_t1_ParamLimits

0x5d1a,	// (0x0005fbf6) dialer2_ne_pane_t1

0x5d55,	// (0x0005fc31) cell_dialer2_keypad_pane_ParamLimits

0x5d55,	// (0x0005fc31) cell_dialer2_keypad_pane

0xeab5,	// (0x00068991) bg_button_pane_pane_cp04_ParamLimits

0xeab5,	// (0x00068991) bg_button_pane_pane_cp04

0x5d77,	// (0x0005fc53) cell_dialer2_keypad_pane_g1_ParamLimits

0x5d77,	// (0x0005fc53) cell_dialer2_keypad_pane_g1

0x1ddc,	// (0x0005bcb8) aid_placing_vt_set_content_ParamLimits

0x1ddc,	// (0x0005bcb8) aid_placing_vt_set_content

0x1e02,	// (0x0005bcde) aid_placing_vt_set_title_ParamLimits

0x1e02,	// (0x0005bcde) aid_placing_vt_set_title

0x0df7,	// (0x0005acd3) main_image3_pane

0x5e3d,	// (0x0005fd19) area_side_right_pane_cp01_ParamLimits

0x5e3d,	// (0x0005fd19) area_side_right_pane_cp01

0xda37,	// (0x00067913) main_image3_pane_g1_ParamLimits

0xda37,	// (0x00067913) main_image3_pane_g1

0x5e54,	// (0x0005fd30) main_image3_pane_g2_ParamLimits

0x5e54,	// (0x0005fd30) main_image3_pane_g2

0x5e7c,	// (0x0005fd58) main_image3_pane_g3_ParamLimits

0x5e7c,	// (0x0005fd58) main_image3_pane_g3

0x5ea6,	// (0x0005fd82) main_image3_pane_g4_ParamLimits

0x5ea6,	// (0x0005fd82) main_image3_pane_g4

0x0003,

0xf81d,	// (0x000696f9) main_image3_pane_g_ParamLimits

0xf81d,	// (0x000696f9) main_image3_pane_g

0x5ed0,	// (0x0005fdac) main_image3_pane_t1_ParamLimits

0x5ed0,	// (0x0005fdac) main_image3_pane_t1

0x5f28,	// (0x0005fe04) main_image3_pane_t2_ParamLimits

0x5f28,	// (0x0005fe04) main_image3_pane_t2

0x5f7a,	// (0x0005fe56) main_image3_pane_t3_ParamLimits

0x5f7a,	// (0x0005fe56) main_image3_pane_t3

0x0003,

0xf826,	// (0x00069702) main_image3_pane_t_ParamLimits

0xf826,	// (0x00069702) main_image3_pane_t

0x9866,	// (0x00063742) grid_sctrl_middle_pane_cp01_ParamLimits

0x9866,	// (0x00063742) grid_sctrl_middle_pane_cp01

0x6002,	// (0x0005fede) cell_sctrl_middle_pane_cp01_ParamLimits

0x6002,	// (0x0005fede) cell_sctrl_middle_pane_cp01

0x601f,	// (0x0005fefb) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x601f,	// (0x0005fefb) cell_sctrl_middle_pane_cp01_g1

0x0df7,	// (0x0005acd3) main_call4_pane

0x6035,	// (0x0005ff11) aid_size_button_call4_ParamLimits

0x6035,	// (0x0005ff11) aid_size_button_call4

0x6066,	// (0x0005ff42) call4_windows_pane_ParamLimits

0x6066,	// (0x0005ff42) call4_windows_pane

0x6086,	// (0x0005ff62) grid_call4_button_pane_ParamLimits

0x6086,	// (0x0005ff62) grid_call4_button_pane

0xeac1,	// (0x0006899d) call4_windows_conf_pane

0xead8,	// (0x000689b4) popup_call4_audio_first_window_ParamLimits

0xead8,	// (0x000689b4) popup_call4_audio_first_window

0xeb24,	// (0x00068a00) popup_call4_audio_second_window_ParamLimits

0xeb24,	// (0x00068a00) popup_call4_audio_second_window

0xeb38,	// (0x00068a14) popup_call4_audio_wait_window_ParamLimits

0xeb38,	// (0x00068a14) popup_call4_audio_wait_window

0x60b3,	// (0x0005ff8f) cell_call4_button_pane_ParamLimits

0x60b3,	// (0x0005ff8f) cell_call4_button_pane

0x60dc,	// (0x0005ffb8) bg_button_pane_cp09_ParamLimits

0x60dc,	// (0x0005ffb8) bg_button_pane_cp09

0x60e8,	// (0x0005ffc4) cell_call4_button_pane_g1_ParamLimits

0x60e8,	// (0x0005ffc4) cell_call4_button_pane_g1

0x610e,	// (0x0005ffea) cell_call4_button_pane_t1_ParamLimits

0x610e,	// (0x0005ffea) cell_call4_button_pane_t1

0xeb80,	// (0x00068a5c) popup_call4_audio_conf_window_ParamLimits

0xeb80,	// (0x00068a5c) popup_call4_audio_conf_window

0x53cb,	// (0x0005f2a7) mup3_progress_pane_t1_ParamLimits

0x53e2,	// (0x0005f2be) mup3_progress_pane_t2_ParamLimits

0xe47a,	// (0x00068356) mup3_progress_pane_t3_ParamLimits

0xf761,	// (0x0006963d) mup3_progress_pane_t_ParamLimits

0xe491,	// (0x0006836d) mup_progress_pane_cp03_ParamLimits

0x598c,	// (0x0005f868) mup3_control_keys_pane_g4_copy1

0xdbdd,	// (0x00067ab9) mp4_rocker2_pane_ParamLimits

0xdbdd,	// (0x00067ab9) mp4_rocker2_pane

0xeb94,	// (0x00068a70) mp4_rocker2_pane_g1

0xeb9c,	// (0x00068a78) mp4_rocker2_pane_g2

0xdc4b,	// (0x00067b27) mp4_rocker2_pane_g3

0xdc53,	// (0x00067b2f) mp4_rocker2_pane_g4

0xdc5b,	// (0x00067b37) mp4_rocker2_pane_g5

0x0004,

0xf82f,	// (0x0006970b) mp4_rocker2_pane_g

0x0df7,	// (0x0005acd3) main_camera4_pane

0x0df7,	// (0x0005acd3) main_video4_pane

0x5bf4,	// (0x0005fad0) main_video_tele_dialer_pane_t1_ParamLimits

0x5bf4,	// (0x0005fad0) main_video_tele_dialer_pane_t1

0x5c0d,	// (0x0005fae9) main_video_tele_dialer_pane_t2_ParamLimits

0x5c0d,	// (0x0005fae9) main_video_tele_dialer_pane_t2

0x0001,

0xf7f3,	// (0x000696cf) main_video_tele_dialer_pane_t_ParamLimits

0xf7f3,	// (0x000696cf) main_video_tele_dialer_pane_t

0x614c,	// (0x00060028) cam4_autofocus_pane_ParamLimits

0x614c,	// (0x00060028) cam4_autofocus_pane

0x6162,	// (0x0006003e) cam4_image_uncrop_pane_ParamLimits

0x6162,	// (0x0006003e) cam4_image_uncrop_pane

0x617c,	// (0x00060058) cam4_indicators_pane_ParamLimits

0x617c,	// (0x00060058) cam4_indicators_pane

0x61a7,	// (0x00060083) main_camera4_pane_g1_ParamLimits

0x61a7,	// (0x00060083) main_camera4_pane_g1

0x61ba,	// (0x00060096) main_camera4_pane_g2_ParamLimits

0x61ba,	// (0x00060096) main_camera4_pane_g2

0x61cd,	// (0x000600a9) main_camera4_pane_g3_ParamLimits

0x61cd,	// (0x000600a9) main_camera4_pane_g3

0x61e0,	// (0x000600bc) main_camera4_pane_g4_ParamLimits

0x61e0,	// (0x000600bc) main_camera4_pane_g4

0x61f3,	// (0x000600cf) main_camera4_pane_g5_ParamLimits

0x61f3,	// (0x000600cf) main_camera4_pane_g5

0x0005,

0xf83a,	// (0x00069716) main_camera4_pane_g_ParamLimits

0xf83a,	// (0x00069716) main_camera4_pane_g

0x6217,	// (0x000600f3) main_camera4_pane_t1_ParamLimits

0x6217,	// (0x000600f3) main_camera4_pane_t1

0xdc7f,	// (0x00067b5b) bg_tb_trans_pane_cp06

0xdc95,	// (0x00067b71) cam4_indicators_pane_g1

0xdca6,	// (0x00067b82) cam4_indicators_pane_g2

0x0002,

0xf855,	// (0x00069731) cam4_indicators_pane_g

0xdcc4,	// (0x00067ba0) cam4_indicators_pane_t1

0x627b,	// (0x00060157) main_video4_pane_g1_ParamLimits

0x627b,	// (0x00060157) main_video4_pane_g1

0x628e,	// (0x0006016a) main_video4_pane_g2_ParamLimits

0x628e,	// (0x0006016a) main_video4_pane_g2

0x62a2,	// (0x0006017e) main_video4_pane_g3_ParamLimits

0x62a2,	// (0x0006017e) main_video4_pane_g3

0x62b6,	// (0x00060192) main_video4_pane_g4_ParamLimits

0x62b6,	// (0x00060192) main_video4_pane_g4

0x0004,

0xf85c,	// (0x00069738) main_video4_pane_g_ParamLimits

0xf85c,	// (0x00069738) main_video4_pane_g

0x62de,	// (0x000601ba) vid4_indicators_pane_ParamLimits

0x62de,	// (0x000601ba) vid4_indicators_pane

0x630e,	// (0x000601ea) video4_image_uncrop_cif_pane_ParamLimits

0x630e,	// (0x000601ea) video4_image_uncrop_cif_pane

0x6328,	// (0x00060204) video4_image_uncrop_nhd_pane_ParamLimits

0x6328,	// (0x00060204) video4_image_uncrop_nhd_pane

0x6162,	// (0x0006003e) video4_image_uncrop_vga_pane_ParamLimits

0x6162,	// (0x0006003e) video4_image_uncrop_vga_pane

0xdce6,	// (0x00067bc2) bg_tb_trans_pane_cp07

0x633c,	// (0x00060218) vid4_indicators_pane_g1

0x6349,	// (0x00060225) vid4_indicators_pane_g2

0x6356,	// (0x00060232) vid4_indicators_pane_g3

0x0004,

0xf867,	// (0x00069743) vid4_indicators_pane_g

0x637b,	// (0x00060257) vid4_indicators_pane_t1

0x638d,	// (0x00060269) cam4_autofocus_pane_g1

0x6395,	// (0x00060271) cam4_autofocus_pane_g2

0x639d,	// (0x00060279) cam4_autofocus_pane_g3

0x0002,

0xf872,	// (0x0006974e) cam4_autofocus_pane_g

0x63a5,	// (0x00060281) cam4_autofocus_pane_g3_copy1

0xea0b,	// (0x000688e7) video_down_pane_cp_t1

0xea19,	// (0x000688f5) video_down_pane_cp_t2

0x0001,

0x064b,	// (0x0005a527) video_down_pane_cp_t

0x9866,	// (0x00063742) popup_vitu2_window_ParamLimits

0x9866,	// (0x00063742) popup_vitu2_window

0x63ad,	// (0x00060289) aid_size_cell2_itu2_ParamLimits

0x63ad,	// (0x00060289) aid_size_cell2_itu2

0x63d3,	// (0x000602af) aid_size_cell_itu2_ParamLimits

0x63d3,	// (0x000602af) aid_size_cell_itu2

0x642f,	// (0x0006030b) bg_popup_window_pane_cp09_ParamLimits

0x642f,	// (0x0006030b) bg_popup_window_pane_cp09

0x643d,	// (0x00060319) field_vitu2_entry_pane_ParamLimits

0x643d,	// (0x00060319) field_vitu2_entry_pane

0x6463,	// (0x0006033f) grid_vitu2_function_pane_ParamLimits

0x6463,	// (0x0006033f) grid_vitu2_function_pane

0x64b4,	// (0x00060390) grid_vitu2_itu_pane_ParamLimits

0x64b4,	// (0x00060390) grid_vitu2_itu_pane

0x6547,	// (0x00060423) cell_vitu2_itu_pane_ParamLimits

0x6547,	// (0x00060423) cell_vitu2_itu_pane

0x656b,	// (0x00060447) cell_vitu2_function_pane_ParamLimits

0x656b,	// (0x00060447) cell_vitu2_function_pane

0xeba4,	// (0x00068a80) bg_popup_call_pane_cp08_ParamLimits

0xeba4,	// (0x00068a80) bg_popup_call_pane_cp08

0xebbd,	// (0x00068a99) field_vitu2_entry_pane_g1

0xebc9,	// (0x00068aa5) field_vitu2_entry_pane_g2

0x0002,

0x06d6,	// (0x0005a5b2) field_vitu2_entry_pane_g

0x65aa,	// (0x00060486) field_vitu2_entry_pane_t1_ParamLimits

0x65aa,	// (0x00060486) field_vitu2_entry_pane_t1

0x65d9,	// (0x000604b5) field_vitu2_entry_pane_t2_ParamLimits

0x65d9,	// (0x000604b5) field_vitu2_entry_pane_t2

0x0001,

0xf879,	// (0x00069755) field_vitu2_entry_pane_t_ParamLimits

0xf879,	// (0x00069755) field_vitu2_entry_pane_t

0x65f6,	// (0x000604d2) bg_button_pane_cp010_ParamLimits

0x65f6,	// (0x000604d2) bg_button_pane_cp010

0x6604,	// (0x000604e0) cell_vitu2_itu_pane_g1

0x6622,	// (0x000604fe) cell_vitu2_itu_pane_t1_ParamLimits

0x6622,	// (0x000604fe) cell_vitu2_itu_pane_t1

0x0d03,	// (0x0005abdf) cell_vitu2_itu_pane_t2_ParamLimits

0x0d03,	// (0x0005abdf) cell_vitu2_itu_pane_t2

0x0002,

0xf883,	// (0x0006975f) cell_vitu2_itu_pane_t_ParamLimits

0xf883,	// (0x0006975f) cell_vitu2_itu_pane_t

0xdcfe,	// (0x00067bda) bg_button_pane_cp011

0x6688,	// (0x00060564) cell_vitu2_function_pane_g1

0x0df7,	// (0x0005acd3) main_myfav_hc_pane

0x5fca,	// (0x0005fea6) popup_image3_note_pane_ParamLimits

0x5fca,	// (0x0005fea6) popup_image3_note_pane

0x5fe6,	// (0x0005fec2) popup_image3_tool_bar_pane_ParamLimits

0x5fe6,	// (0x0005fec2) popup_image3_tool_bar_pane

0x0d87,	// (0x0005ac63) cell_vitu2_itu_pane_t3_ParamLimits

0x0d87,	// (0x0005ac63) cell_vitu2_itu_pane_t3

0x0df7,	// (0x0005acd3) bg_popup_trans_pane

0xebeb,	// (0x00068ac7) grid_image3_tool_bar_pane

0xebf5,	// (0x00068ad1) bg_popup_trans_pane_g1

0xa4af,	// (0x0006438b) bg_popup_trans_pane_g2

0xebfd,	// (0x00068ad9) bg_popup_trans_pane_g3

0xec05,	// (0x00068ae1) bg_popup_trans_pane_g4

0xec0d,	// (0x00068ae9) bg_popup_trans_pane_g5

0xec15,	// (0x00068af1) bg_popup_trans_pane_g6

0xec1d,	// (0x00068af9) bg_popup_trans_pane_g7

0xec25,	// (0x00068b01) bg_popup_trans_pane_g8

0xa48f,	// (0x0006436b) bg_popup_trans_pane_g9

0x0008,

0xf88a,	// (0x00069766) bg_popup_trans_pane_g

0xec2d,	// (0x00068b09) cell_image3_tool_bar_pane_ParamLimits

0xec2d,	// (0x00068b09) cell_image3_tool_bar_pane

0xe19c,	// (0x00068078) cell_image3_tool_bar_pane_g1

0x0df7,	// (0x0005acd3) bg_popup_trans_pane_cp1

0xec41,	// (0x00068b1d) popup_image3_note_pane_t1

0xec4f,	// (0x00068b2b) popup_image3_note_pane_t2

0xec5d,	// (0x00068b39) popup_image3_note_pane_t3

0x0002,

0x0701,	// (0x0005a5dd) popup_image3_note_pane_t

0xec6b,	// (0x00068b47) popup_image3_note_pane_t3_copy1

0x669c,	// (0x00060578) bg_myfav_hc_instruction_pane_ParamLimits

0x669c,	// (0x00060578) bg_myfav_hc_instruction_pane

0x66b0,	// (0x0006058c) cell_myfav_contact_pane_ParamLimits

0x66b0,	// (0x0006058c) cell_myfav_contact_pane

0x66ce,	// (0x000605aa) cell_myfav_contact_pane_cp1_ParamLimits

0x66ce,	// (0x000605aa) cell_myfav_contact_pane_cp1

0x66e6,	// (0x000605c2) cell_myfav_contact_pane_cp2_ParamLimits

0x66e6,	// (0x000605c2) cell_myfav_contact_pane_cp2

0x66fe,	// (0x000605da) cell_myfav_contact_pane_cp3_ParamLimits

0x66fe,	// (0x000605da) cell_myfav_contact_pane_cp3

0x6715,	// (0x000605f1) cell_myfav_contact_pane_cp4_ParamLimits

0x6715,	// (0x000605f1) cell_myfav_contact_pane_cp4

0x672d,	// (0x00060609) cell_myfav_contact_pane_cp5_ParamLimits

0x672d,	// (0x00060609) cell_myfav_contact_pane_cp5

0x6741,	// (0x0006061d) cell_myfav_contact_pane_cp6_ParamLimits

0x6741,	// (0x0006061d) cell_myfav_contact_pane_cp6

0x6757,	// (0x00060633) cell_myfav_contact_pane_cp7_ParamLimits

0x6757,	// (0x00060633) cell_myfav_contact_pane_cp7

0xec79,	// (0x00068b55) listscroll_gen_pane_cp05

0x6771,	// (0x0006064d) main_myfav_hc_pane_g1_ParamLimits

0x6771,	// (0x0006064d) main_myfav_hc_pane_g1

0x678b,	// (0x00060667) main_myfav_hc_pane_g2_ParamLimits

0x678b,	// (0x00060667) main_myfav_hc_pane_g2

0x0002,

0xf89d,	// (0x00069779) main_myfav_hc_pane_g_ParamLimits

0xf89d,	// (0x00069779) main_myfav_hc_pane_g

0x67bd,	// (0x00060699) main_myfav_hc_pane_t1_ParamLimits

0x67bd,	// (0x00060699) main_myfav_hc_pane_t1

0xec82,	// (0x00068b5e) main_myfav_hc_pane_t2_ParamLimits

0xec82,	// (0x00068b5e) main_myfav_hc_pane_t2

0xec94,	// (0x00068b70) main_myfav_hc_pane_t3_ParamLimits

0xec94,	// (0x00068b70) main_myfav_hc_pane_t3

0x67d4,	// (0x000606b0) main_myfav_hc_pane_t4_ParamLimits

0x67d4,	// (0x000606b0) main_myfav_hc_pane_t4

0x0004,

0xf8a4,	// (0x00069780) main_myfav_hc_pane_t_ParamLimits

0xf8a4,	// (0x00069780) main_myfav_hc_pane_t

0xe19c,	// (0x00068078) bg_myfav_hc_instruction_pane_g1

0xeca6,	// (0x00068b82) cell_myfav_contact_pane_g1_ParamLimits

0xeca6,	// (0x00068b82) cell_myfav_contact_pane_g1

0xeca6,	// (0x00068b82) cell_myfav_contact_pane_g2_ParamLimits

0xeca6,	// (0x00068b82) cell_myfav_contact_pane_g2

0xecb2,	// (0x00068b8e) cell_myfav_contact_pane_g3_ParamLimits

0xecb2,	// (0x00068b8e) cell_myfav_contact_pane_g3

0xe464,	// (0x00068340) cell_myfav_contact_pane_g4_ParamLimits

0xe464,	// (0x00068340) cell_myfav_contact_pane_g4

0xecbf,	// (0x00068b9b) cell_myfav_contact_pane_g5_ParamLimits

0xecbf,	// (0x00068b9b) cell_myfav_contact_pane_g5

0x0004,

0x071a,	// (0x0005a5f6) cell_myfav_contact_pane_g_ParamLimits

0x071a,	// (0x0005a5f6) cell_myfav_contact_pane_g

0x67a5,	// (0x00060681) main_myfav_hc_pane_g3_ParamLimits

0x67a5,	// (0x00060681) main_myfav_hc_pane_g3

0x0f97,	// (0x0005ae73) popup_adpt_find_window

0x67fc,	// (0x000606d8) afind_page_pane_ParamLimits

0x67fc,	// (0x000606d8) afind_page_pane

0x6811,	// (0x000606ed) aid_size_cell_afind_ParamLimits

0x6811,	// (0x000606ed) aid_size_cell_afind

0x682f,	// (0x0006070b) bg_popup_sub_pane_cp09_ParamLimits

0x682f,	// (0x0006070b) bg_popup_sub_pane_cp09

0x683c,	// (0x00060718) find_pane_cp01_ParamLimits

0x683c,	// (0x00060718) find_pane_cp01

0xeccb,	// (0x00068ba7) grid_afind_control_pane_ParamLimits

0xeccb,	// (0x00068ba7) grid_afind_control_pane

0x6849,	// (0x00060725) grid_afind_pane_ParamLimits

0x6849,	// (0x00060725) grid_afind_pane

0x686b,	// (0x00060747) cell_afind_pane_ParamLimits

0x686b,	// (0x00060747) cell_afind_pane

0xe19c,	// (0x00068078) afind_page_pane_g1

0x68cc,	// (0x000607a8) afind_page_pane_g2

0x68d5,	// (0x000607b1) afind_page_pane_g3

0x0002,

0xf8af,	// (0x0006978b) afind_page_pane_g

0x68de,	// (0x000607ba) afind_page_pane_t1

0xecdf,	// (0x00068bbb) cell_afind_grid_control_pane_ParamLimits

0xecdf,	// (0x00068bbb) cell_afind_grid_control_pane

0xeab5,	// (0x00068991) bg_button_pane_cp69_ParamLimits

0xeab5,	// (0x00068991) bg_button_pane_cp69

0x68fe,	// (0x000607da) cell_afind_pane_g1_ParamLimits

0x68fe,	// (0x000607da) cell_afind_pane_g1

0x690b,	// (0x000607e7) cell_afind_pane_t1_ParamLimits

0x690b,	// (0x000607e7) cell_afind_pane_t1

0xa2aa,	// (0x00064186) bg_button_pane_cp72

0xecee,	// (0x00068bca) cell_afind_grid_control_pane_g1

0x3956,	// (0x0005d832) aid_image_placing_area_ParamLimits

0x3956,	// (0x0005d832) aid_image_placing_area

0xe75d,	// (0x00068639) field_vitu_entry_pane_g1_ParamLimits

0xe75d,	// (0x00068639) field_vitu_entry_pane_g1

0xe769,	// (0x00068645) field_vitu_entry_pane_g2_ParamLimits

0xe769,	// (0x00068645) field_vitu_entry_pane_g2

0x0001,

0x05d6,	// (0x0005a4b2) field_vitu_entry_pane_g_ParamLimits

0x05d6,	// (0x0005a4b2) field_vitu_entry_pane_g

0x5a53,	// (0x0005f92f) cell_vitu_itu_pane_g1_ParamLimits

0x5a95,	// (0x0005f971) cell_vitu_itu_pane_t3_ParamLimits

0x5a95,	// (0x0005f971) cell_vitu_itu_pane_t3

0xea5b,	// (0x00068937) mp4_progress_pane_t1_ParamLimits

0xea74,	// (0x00068950) mp4_progress_pane_t2_ParamLimits

0x066b,	// (0x0005a547) mp4_progress_pane_t_ParamLimits

0xea8d,	// (0x00068969) mup_progress_pane_cp04_ParamLimits

0x67e8,	// (0x000606c4) main_myfav_hc_pane_t5_ParamLimits

0x67e8,	// (0x000606c4) main_myfav_hc_pane_t5

0x0e4d,	// (0x0005ad29) aid_zoom_text_primary

0x0f97,	// (0x0005ae73) popup_adpt_find_window_ParamLimits

0x9866,	// (0x00063742) main_cam_set_pane

0x6193,	// (0x0006006f) cam4_zoom_pane_ParamLimits

0x6193,	// (0x0006006f) cam4_zoom_pane

0x691d,	// (0x000607f9) main_cam_set_pane_g1_ParamLimits

0x691d,	// (0x000607f9) main_cam_set_pane_g1

0x692b,	// (0x00060807) main_cam_set_pane_g2_ParamLimits

0x692b,	// (0x00060807) main_cam_set_pane_g2

0x0001,

0xf8b6,	// (0x00069792) main_cam_set_pane_g_ParamLimits

0xf8b6,	// (0x00069792) main_cam_set_pane_g

0x694c,	// (0x00060828) main_cam_set_pane_t1_ParamLimits

0x694c,	// (0x00060828) main_cam_set_pane_t1

0x6967,	// (0x00060843) main_cset_listscroll_pane_ParamLimits

0x6967,	// (0x00060843) main_cset_listscroll_pane

0x6987,	// (0x00060863) main_cset_slider_pane_ParamLimits

0x6987,	// (0x00060863) main_cset_slider_pane

0xecff,	// (0x00068bdb) main_cset_list_pane_ParamLimits

0xecff,	// (0x00068bdb) main_cset_list_pane

0xed0f,	// (0x00068beb) scroll_pane_cp028

0x69ad,	// (0x00060889) aid_area_touch_slider

0x69c9,	// (0x000608a5) cset_slider_pane

0x69f3,	// (0x000608cf) main_cset_slider_pane_g1

0x6a08,	// (0x000608e4) main_cset_slider_pane_g2

0x0011,

0xf8bb,	// (0x00069797) main_cset_slider_pane_g

0xed48,	// (0x00068c24) main_cset_slider_pane_t1

0x6ac4,	// (0x000609a0) main_cset_slider_pane_t2

0x6ade,	// (0x000609ba) main_cset_slider_pane_t3

0x6af8,	// (0x000609d4) main_cset_slider_pane_t4

0x6b12,	// (0x000609ee) main_cset_slider_pane_t5

0x6b2c,	// (0x00060a08) main_cset_slider_pane_t6

0x6b41,	// (0x00060a1d) main_cset_slider_pane_t7

0x000e,

0xf8e0,	// (0x000697bc) main_cset_slider_pane_t

0x6c45,	// (0x00060b21) cset_list_set_pane_ParamLimits

0x6c45,	// (0x00060b21) cset_list_set_pane

0x6c57,	// (0x00060b33) aid_position_infowindow_above

0x6c5f,	// (0x00060b3b) aid_position_infowindow_below

0x6c67,	// (0x00060b43) cset_list_set_pane_g1_ParamLimits

0x6c67,	// (0x00060b43) cset_list_set_pane_g1

0x6c73,	// (0x00060b4f) cset_list_set_pane_g3_ParamLimits

0x6c73,	// (0x00060b4f) cset_list_set_pane_g3

0x0001,

0xf8ff,	// (0x000697db) cset_list_set_pane_g_ParamLimits

0xf8ff,	// (0x000697db) cset_list_set_pane_g

0x6c82,	// (0x00060b5e) cset_list_set_pane_t1_ParamLimits

0x6c82,	// (0x00060b5e) cset_list_set_pane_t1

0x9866,	// (0x00063742) list_highlight_pane_cp021_ParamLimits

0x9866,	// (0x00063742) list_highlight_pane_cp021

0xad8f,	// (0x00064c6b) cset_slider_pane_g1

0xada1,	// (0x00064c7d) cset_slider_pane_g2

0xad98,	// (0x00064c74) cset_slider_pane_g3

0x0002,

0xf904,	// (0x000697e0) cset_slider_pane_g

0xdd0c,	// (0x00067be8) aid_area_touch_cam4_zoom

0xdd14,	// (0x00067bf0) cam4_zoom_cont_pane

0xdd1c,	// (0x00067bf8) cam4_zoom_pane_g1

0xdd24,	// (0x00067c00) cam4_zoom_pane_g2

0x6c97,	// (0x00060b73) cam4_zoom_pane_g3

0x0002,

0xf90b,	// (0x000697e7) cam4_zoom_pane_g

0xdd2c,	// (0x00067c08) cam4_zoom_cont_pane_g1

0xdd35,	// (0x00067c11) cam4_zoom_cont_pane_g2

0xdd3e,	// (0x00067c1a) cam4_zoom_cont_pane_g3

0x0002,

0xf912,	// (0x000697ee) cam4_zoom_cont_pane_g

0x6053,	// (0x0005ff2f) call4_image_pane_ParamLimits

0x6053,	// (0x0005ff2f) call4_image_pane

0xeac1,	// (0x0006899d) call4_windows_conf_pane_ParamLimits

0xeb02,	// (0x000689de) popup_call4_audio_in_window_ParamLimits

0xeb02,	// (0x000689de) popup_call4_audio_in_window

0x0df7,	// (0x0005acd3) bg_popup_call2_act_pane_cp02

0xeb78,	// (0x00068a54) call4_list_conf_pane

0xe19c,	// (0x00068078) call4_image_pane_g1

0xe19c,	// (0x00068078) call4_image_pane_g2

0x0001,

0x049c,	// (0x0005a378) call4_image_pane_g

0xede8,	// (0x00068cc4) list_single_graphic_popup_conf4_pane_ParamLimits

0xede8,	// (0x00068cc4) list_single_graphic_popup_conf4_pane

0x0df7,	// (0x0005acd3) list_highlight_pane_cp022

0xedfb,	// (0x00068cd7) list_single_graphic_popup_conf4_pane_g1

0xaa4e,	// (0x0006492a) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf919,	// (0x000697f5) list_single_graphic_popup_conf4_pane_g

0xee03,	// (0x00068cdf) list_single_graphic_popup_conf4_pane_t1

0x1f26,	// (0x0005be02) popup_vtel_slider_window_ParamLimits

0x1f26,	// (0x0005be02) popup_vtel_slider_window

0xeaa3,	// (0x0006897f) dialer2_ne_pane_t2_ParamLimits

0xeaa3,	// (0x0006897f) dialer2_ne_pane_t2

0x0001,

0xf813,	// (0x000696ef) dialer2_ne_pane_t_ParamLimits

0xf813,	// (0x000696ef) dialer2_ne_pane_t

0xdf78,	// (0x00067e54) bg_popup_sub_pane_cp010_ParamLimits

0xdf78,	// (0x00067e54) bg_popup_sub_pane_cp010

0x6c9f,	// (0x00060b7b) popup_vtel_slider_window_g1_ParamLimits

0x6c9f,	// (0x00060b7b) popup_vtel_slider_window_g1

0x6cb2,	// (0x00060b8e) popup_vtel_slider_window_g2_ParamLimits

0x6cb2,	// (0x00060b8e) popup_vtel_slider_window_g2

0x0003,

0xf91e,	// (0x000697fa) popup_vtel_slider_window_g_ParamLimits

0xf91e,	// (0x000697fa) popup_vtel_slider_window_g

0x6d08,	// (0x00060be4) vtel_slider_pane_ParamLimits

0x6d08,	// (0x00060be4) vtel_slider_pane

0x6d2a,	// (0x00060c06) vtel_slider_pane_g1_ParamLimits

0x6d2a,	// (0x00060c06) vtel_slider_pane_g1

0x6d3e,	// (0x00060c1a) vtel_slider_pane_g2_ParamLimits

0x6d3e,	// (0x00060c1a) vtel_slider_pane_g2

0x6d56,	// (0x00060c32) vtel_slider_pane_g3_ParamLimits

0x6d56,	// (0x00060c32) vtel_slider_pane_g3

0x6d2a,	// (0x00060c06) vtel_slider_pane_g4_ParamLimits

0x6d2a,	// (0x00060c06) vtel_slider_pane_g4

0x6d6c,	// (0x00060c48) vtel_slider_pane_g5_ParamLimits

0x6d6c,	// (0x00060c48) vtel_slider_pane_g5

0x0004,

0xf927,	// (0x00069803) vtel_slider_pane_g_ParamLimits

0xf927,	// (0x00069803) vtel_slider_pane_g

0x0df7,	// (0x0005acd3) main_gallery2_pane

0x63ff,	// (0x000602db) aid_size_row_itut2_dropdow_list_ParamLimits

0x63ff,	// (0x000602db) aid_size_row_itut2_dropdow_list

0x648b,	// (0x00060367) grid_vitu2_function_top_pane_ParamLimits

0x648b,	// (0x00060367) grid_vitu2_function_top_pane

0x64f0,	// (0x000603cc) popup_vitu2_dropdown_list_window_ParamLimits

0x64f0,	// (0x000603cc) popup_vitu2_dropdown_list_window

0x6519,	// (0x000603f5) popup_vitu2_match_list_window

0x6d90,	// (0x00060c6c) cell_vitu2_function_top_pane_ParamLimits

0x6d90,	// (0x00060c6c) cell_vitu2_function_top_pane

0x6dae,	// (0x00060c8a) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6dae,	// (0x00060c8a) cell_vitu2_function_top_pane_cp01

0x6dcc,	// (0x00060ca8) cell_vitu2_function_top_wide_pane_ParamLimits

0x6dcc,	// (0x00060ca8) cell_vitu2_function_top_wide_pane

0xdcfe,	// (0x00067bda) bg_button_pane_cp012

0x6dea,	// (0x00060cc6) cell_vitu2_function_top_pane_g1

0xdd47,	// (0x00067c23) bg_button_pane_cp013_ParamLimits

0xdd47,	// (0x00067c23) bg_button_pane_cp013

0x6dfe,	// (0x00060cda) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6dfe,	// (0x00060cda) cell_vitu2_function_top_wide_pane_g1

0xdcfe,	// (0x00067bda) bg_popup_sub_pane_cp20

0x6e16,	// (0x00060cf2) list_vitu2_match_list_pane

0xebf5,	// (0x00068ad1) bg_popup_sub_pane_cp20_g1

0xebfd,	// (0x00068ad9) bg_popup_sub_pane_cp20_g2

0xa4af,	// (0x0006438b) bg_popup_sub_pane_cp20_g3

0xec05,	// (0x00068ae1) bg_popup_sub_pane_cp20_g4

0xa48f,	// (0x0006436b) bg_popup_sub_pane_cp20_g5

0xee19,	// (0x00068cf5) bg_popup_sub_pane_cp20_g6

0xec15,	// (0x00068af1) bg_popup_sub_pane_cp20_g7

0xec1d,	// (0x00068af9) bg_popup_sub_pane_cp20_g8

0xec25,	// (0x00068b01) bg_popup_sub_pane_cp20_g9

0x0008,

0xf932,	// (0x0006980e) bg_popup_sub_pane_cp20_g

0xdd63,	// (0x00067c3f) list_vitu2_match_list_item_pane_ParamLimits

0xdd63,	// (0x00067c3f) list_vitu2_match_list_item_pane

0xdd75,	// (0x00067c51) list_vitu2_match_list_item_pane_t1

0x9fc1,	// (0x00063e9d) bg_popup_sub_pane_cp21

0xdd83,	// (0x00067c5f) grid_vitu2_dropdown_list_pane

0x6e81,	// (0x00060d5d) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6e81,	// (0x00060d5d) cell_vitu2_dropdown_list_char_pane

0x6ea2,	// (0x00060d7e) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6ea2,	// (0x00060d7e) cell_vitu2_dropdown_list_ctrl_pane

0xee21,	// (0x00068cfd) cell_vitu2_dropdown_list_char_pane_g1

0xee2a,	// (0x00068d06) cell_vitu2_dropdown_list_char_pane_g2

0xee33,	// (0x00068d0f) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0x07c5,	// (0x0005a6a1) cell_vitu2_dropdown_list_char_pane_g

0x6ece,	// (0x00060daa) cell_vitu2_dropdown_list_char_pane_t1

0x6edc,	// (0x00060db8) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6edc,	// (0x00060db8) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6ee9,	// (0x00060dc5) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6ee9,	// (0x00060dc5) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6ef6,	// (0x00060dd2) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6ef6,	// (0x00060dd2) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6f03,	// (0x00060ddf) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6f03,	// (0x00060ddf) cell_vitu2_dropdown_list_ctrl_pane_g4

0xdc7f,	// (0x00067b5b) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xdc7f,	// (0x00067b5b) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf94f,	// (0x0006982b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf94f,	// (0x0006982b) cell_vitu2_dropdown_list_ctrl_pane_g

0x6f1f,	// (0x00060dfb) aid_size_cell_gallery2_ParamLimits

0x6f1f,	// (0x00060dfb) aid_size_cell_gallery2

0x6f35,	// (0x00060e11) grid_gallery2_pane_ParamLimits

0x6f35,	// (0x00060e11) grid_gallery2_pane

0x6f49,	// (0x00060e25) scroll_pane_cp029_ParamLimits

0x6f49,	// (0x00060e25) scroll_pane_cp029

0x6f55,	// (0x00060e31) cell_gallery2_pane_ParamLimits

0x6f55,	// (0x00060e31) cell_gallery2_pane

0xee3c,	// (0x00068d18) cell_gallery2_pane_g2

0x6f8b,	// (0x00060e67) cell_gallery2_pane_g3

0xee46,	// (0x00068d22) cell_gallery2_pane_g4

0xee4e,	// (0x00068d2a) cell_gallery2_pane_g5

0xac39,	// (0x00064b15) grid_highlight_pane_cp10

0x6519,	// (0x000603f5) popup_vitu2_match_list_window_ParamLimits

0x6530,	// (0x0006040c) popup_vitu2_query_window_ParamLimits

0x6530,	// (0x0006040c) popup_vitu2_query_window

0x9fc1,	// (0x00063e9d) bg_vitu2_candi_button_pane

0xee21,	// (0x00068cfd) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xee2a,	// (0x00068d06) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xee33,	// (0x00068d0f) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6f93,	// (0x00060e6f) bg_button_pane_cp015

0x6fa5,	// (0x00060e81) bg_button_pane_cp016

0x6fb8,	// (0x00060e94) bg_button_pane_cp017

0xc07b,	// (0x00065f57) bg_popup_sub_pane_cp22

0xee56,	// (0x00068d32) popup_vitu2_query_window_g1

0x6ffd,	// (0x00060ed9) popup_vitu2_query_window_g2

0x0002,

0xf95a,	// (0x00069836) popup_vitu2_query_window_g

0x701c,	// (0x00060ef8) popup_vitu2_query_window_t1_ParamLimits

0x701c,	// (0x00060ef8) popup_vitu2_query_window_t1

0x7051,	// (0x00060f2d) popup_vitu2_query_window_t2_ParamLimits

0x7051,	// (0x00060f2d) popup_vitu2_query_window_t2

0x7063,	// (0x00060f3f) popup_vitu2_query_window_t3_ParamLimits

0x7063,	// (0x00060f3f) popup_vitu2_query_window_t3

0x708b,	// (0x00060f67) popup_vitu2_query_window_t4_ParamLimits

0x708b,	// (0x00060f67) popup_vitu2_query_window_t4

0x70ac,	// (0x00060f88) popup_vitu2_query_window_t5_ParamLimits

0x70ac,	// (0x00060f88) popup_vitu2_query_window_t5

0x0006,

0xf961,	// (0x0006983d) popup_vitu2_query_window_t_ParamLimits

0xf961,	// (0x0006983d) popup_vitu2_query_window_t

0xecf7,	// (0x00068bd3) main_cset_text_pane

0x69ad,	// (0x00060889) aid_area_touch_slider_ParamLimits

0x69c9,	// (0x000608a5) cset_slider_pane_ParamLimits

0x69f3,	// (0x000608cf) main_cset_slider_pane_g1_ParamLimits

0x6a08,	// (0x000608e4) main_cset_slider_pane_g2_ParamLimits

0xed18,	// (0x00068bf4) main_cset_slider_pane_g3_ParamLimits

0xed18,	// (0x00068bf4) main_cset_slider_pane_g3

0x6a1d,	// (0x000608f9) main_cset_slider_pane_g4_ParamLimits

0x6a1d,	// (0x000608f9) main_cset_slider_pane_g4

0x6a2c,	// (0x00060908) main_cset_slider_pane_g5_ParamLimits

0x6a2c,	// (0x00060908) main_cset_slider_pane_g5

0x6a38,	// (0x00060914) main_cset_slider_pane_g6_ParamLimits

0x6a38,	// (0x00060914) main_cset_slider_pane_g6

0xf8bb,	// (0x00069797) main_cset_slider_pane_g_ParamLimits

0xed48,	// (0x00068c24) main_cset_slider_pane_t1_ParamLimits

0x6ac4,	// (0x000609a0) main_cset_slider_pane_t2_ParamLimits

0x6ade,	// (0x000609ba) main_cset_slider_pane_t3_ParamLimits

0x6af8,	// (0x000609d4) main_cset_slider_pane_t4_ParamLimits

0x6b12,	// (0x000609ee) main_cset_slider_pane_t5_ParamLimits

0x6b2c,	// (0x00060a08) main_cset_slider_pane_t6_ParamLimits

0x6b41,	// (0x00060a1d) main_cset_slider_pane_t7_ParamLimits

0x6b6b,	// (0x00060a47) main_cset_slider_pane_t8_ParamLimits

0x6b6b,	// (0x00060a47) main_cset_slider_pane_t8

0x6b93,	// (0x00060a6f) main_cset_slider_pane_t9_ParamLimits

0x6b93,	// (0x00060a6f) main_cset_slider_pane_t9

0x6bbb,	// (0x00060a97) main_cset_slider_pane_t10_ParamLimits

0x6bbb,	// (0x00060a97) main_cset_slider_pane_t10

0x6be3,	// (0x00060abf) main_cset_slider_pane_t11_ParamLimits

0x6be3,	// (0x00060abf) main_cset_slider_pane_t11

0x6c0b,	// (0x00060ae7) main_cset_slider_pane_t12_ParamLimits

0x6c0b,	// (0x00060ae7) main_cset_slider_pane_t12

0x6c28,	// (0x00060b04) main_cset_slider_pane_t13_ParamLimits

0x6c28,	// (0x00060b04) main_cset_slider_pane_t13

0xf8e0,	// (0x000697bc) main_cset_slider_pane_t_ParamLimits

0x0df7,	// (0x0005acd3) bg_popup_sub_pane_cp011

0xee62,	// (0x00068d3e) main_cset_text_pane_g1

0xee6a,	// (0x00068d46) main_cset_text_pane_t1

0xee78,	// (0x00068d54) main_cset_text_pane_t2

0xee86,	// (0x00068d62) main_cset_text_pane_t3

0xee94,	// (0x00068d70) main_cset_text_pane_t4

0xeea2,	// (0x00068d7e) main_cset_text_pane_t5

0xeeb0,	// (0x00068d8c) main_cset_text_pane_t6

0xeebe,	// (0x00068d9a) main_cset_text_pane_t7

0x0006,

0x07ed,	// (0x0005a6c9) main_cset_text_pane_t

0x0df7,	// (0x0005acd3) main_cam4_burst_pane

0x0df7,	// (0x0005acd3) main_cam5_pane

0x68ec,	// (0x000607c8) bg_button_pane_cp019

0x68f5,	// (0x000607d1) bg_button_pane_cp020

0xed24,	// (0x00068c00) main_cset_slider_pane_g7_ParamLimits

0xed24,	// (0x00068c00) main_cset_slider_pane_g7

0xed30,	// (0x00068c0c) main_cset_slider_pane_g8_ParamLimits

0xed30,	// (0x00068c0c) main_cset_slider_pane_g8

0x6a4c,	// (0x00060928) main_cset_slider_pane_g9_ParamLimits

0x6a4c,	// (0x00060928) main_cset_slider_pane_g9

0x6a58,	// (0x00060934) main_cset_slider_pane_g10_ParamLimits

0x6a58,	// (0x00060934) main_cset_slider_pane_g10

0x6a64,	// (0x00060940) main_cset_slider_pane_g11_ParamLimits

0x6a64,	// (0x00060940) main_cset_slider_pane_g11

0x6a70,	// (0x0006094c) main_cset_slider_pane_g12_ParamLimits

0x6a70,	// (0x0006094c) main_cset_slider_pane_g12

0x6a7c,	// (0x00060958) main_cset_slider_pane_g13_ParamLimits

0x6a7c,	// (0x00060958) main_cset_slider_pane_g13

0x6a88,	// (0x00060964) main_cset_slider_pane_g14_ParamLimits

0x6a88,	// (0x00060964) main_cset_slider_pane_g14

0x6a94,	// (0x00060970) main_cset_slider_pane_g15_ParamLimits

0x6a94,	// (0x00060970) main_cset_slider_pane_g15

0xed76,	// (0x00068c52) main_cset_slider_pane_t14_ParamLimits

0xed76,	// (0x00068c52) main_cset_slider_pane_t14

0xedaf,	// (0x00068c8b) main_cset_slider_pane_t15_ParamLimits

0xedaf,	// (0x00068c8b) main_cset_slider_pane_t15

0x7123,	// (0x00060fff) aid_cam4_burst_size_cell_ParamLimits

0x7123,	// (0x00060fff) aid_cam4_burst_size_cell

0x7143,	// (0x0006101f) grid_cam4_burst_pane_ParamLimits

0x7143,	// (0x0006101f) grid_cam4_burst_pane

0x717b,	// (0x00061057) linegrid_cam4_burst_pane_ParamLimits

0x717b,	// (0x00061057) linegrid_cam4_burst_pane

0xf084,	// (0x00068f60) scroll_pane_cp30_ParamLimits

0xf084,	// (0x00068f60) scroll_pane_cp30

0x719f,	// (0x0006107b) cell_cam4_burst_pane_ParamLimits

0x719f,	// (0x0006107b) cell_cam4_burst_pane

0xeecc,	// (0x00068da8) linegrid_cam4_burst_pane_g1_ParamLimits

0xeecc,	// (0x00068da8) linegrid_cam4_burst_pane_g1

0x71ec,	// (0x000610c8) linegrid_cam4_burst_pane_g2_ParamLimits

0x71ec,	// (0x000610c8) linegrid_cam4_burst_pane_g2

0xeed9,	// (0x00068db5) linegrid_cam4_burst_pane_g3_ParamLimits

0xeed9,	// (0x00068db5) linegrid_cam4_burst_pane_g3

0x0002,

0xf970,	// (0x0006984c) linegrid_cam4_burst_pane_g_ParamLimits

0xf970,	// (0x0006984c) linegrid_cam4_burst_pane_g

0x71fd,	// (0x000610d9) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x71fd,	// (0x000610d9) linegrid_cam4_burst_pane_g3_copy1

0xeee6,	// (0x00068dc2) linegrid_cam4_burst_pane_g4_ParamLimits

0xeee6,	// (0x00068dc2) linegrid_cam4_burst_pane_g4

0x7217,	// (0x000610f3) linegrid_cam4_burst_pane_g5_ParamLimits

0x7217,	// (0x000610f3) linegrid_cam4_burst_pane_g5

0x7228,	// (0x00061104) linegrid_cam4_burst_pane_g6_ParamLimits

0x7228,	// (0x00061104) linegrid_cam4_burst_pane_g6

0xeef3,	// (0x00068dcf) linegrid_cam4_burst_pane_g7_ParamLimits

0xeef3,	// (0x00068dcf) linegrid_cam4_burst_pane_g7

0x723f,	// (0x0006111b) cell_cam4_burst_pane_g1

0xef0c,	// (0x00068de8) main_cam5_pane_t1_ParamLimits

0xef0c,	// (0x00068de8) main_cam5_pane_t1

0xef1e,	// (0x00068dfa) main_cam5_pane_t2_ParamLimits

0xef1e,	// (0x00068dfa) main_cam5_pane_t2

0xef30,	// (0x00068e0c) main_cam5_pane_t3_ParamLimits

0xef30,	// (0x00068e0c) main_cam5_pane_t3

0xef42,	// (0x00068e1e) main_cam5_pane_t4_ParamLimits

0xef42,	// (0x00068e1e) main_cam5_pane_t4

0xef5a,	// (0x00068e36) main_cam5_pane_t5_ParamLimits

0xef5a,	// (0x00068e36) main_cam5_pane_t5

0xef6e,	// (0x00068e4a) main_cam5_pane_t6_ParamLimits

0xef6e,	// (0x00068e4a) main_cam5_pane_t6

0xef82,	// (0x00068e5e) main_cam5_pane_t7_ParamLimits

0xef82,	// (0x00068e5e) main_cam5_pane_t7

0xef94,	// (0x00068e70) main_cam5_pane_t8_ParamLimits

0xef94,	// (0x00068e70) main_cam5_pane_t8

0xefb0,	// (0x00068e8c) main_cam5_pane_t9_ParamLimits

0xefb0,	// (0x00068e8c) main_cam5_pane_t9

0xefc2,	// (0x00068e9e) main_cam5_pane_t10_ParamLimits

0xefc2,	// (0x00068e9e) main_cam5_pane_t10

0xefd4,	// (0x00068eb0) main_cam5_pane_t11_ParamLimits

0xefd4,	// (0x00068eb0) main_cam5_pane_t11

0xefe6,	// (0x00068ec2) main_cam5_pane_t12_ParamLimits

0xefe6,	// (0x00068ec2) main_cam5_pane_t12

0xeffb,	// (0x00068ed7) main_cam5_pane_t13_ParamLimits

0xeffb,	// (0x00068ed7) main_cam5_pane_t13

0x000c,

0x0808,	// (0x0005a6e4) main_cam5_pane_t_ParamLimits

0x0808,	// (0x0005a6e4) main_cam5_pane_t

0x1019,	// (0x0005aef5) popup_scut_keymap_window_ParamLimits

0x1019,	// (0x0005aef5) popup_scut_keymap_window

0x7252,	// (0x0006112e) aid_size_cell_brow_shortcut

0xac39,	// (0x00064b15) bg_popup_window_pane_cp010

0x725e,	// (0x0006113a) grid_scut_pane

0x726a,	// (0x00061146) cell_scut_pane_ParamLimits

0x726a,	// (0x00061146) cell_scut_pane

0x7281,	// (0x0006115d) cell_scut_pane_g1

0xf018,	// (0x00068ef4) cell_scut_pane_t1

0xf027,	// (0x00068f03) cell_scut_pane_t2

0x728a,	// (0x00061166) cell_scut_pane_t3

0x0002,

0xf97c,	// (0x00069858) cell_scut_pane_t

0x4fb0,	// (0x0005ee8c) main_mup3_pane_g8_ParamLimits

0x4fb0,	// (0x0005ee8c) main_mup3_pane_g8

0x6417,	// (0x000602f3) area_vitu2_query_pane_ParamLimits

0x6417,	// (0x000602f3) area_vitu2_query_pane

0x6fcb,	// (0x00060ea7) input_focus_pane_cp08

0xf036,	// (0x00068f12) area_vitu2_query_pane_g1

0x7298,	// (0x00061174) area_vitu2_query_pane_g2

0x0001,

0xf983,	// (0x0006985f) area_vitu2_query_pane_g

0x72a9,	// (0x00061185) area_vitu2_query_pane_t1_ParamLimits

0x72a9,	// (0x00061185) area_vitu2_query_pane_t1

0x72bd,	// (0x00061199) area_vitu2_query_pane_t2_ParamLimits

0x72bd,	// (0x00061199) area_vitu2_query_pane_t2

0x72d1,	// (0x000611ad) area_vitu2_query_pane_t3_ParamLimits

0x72d1,	// (0x000611ad) area_vitu2_query_pane_t3

0x72f9,	// (0x000611d5) area_vitu2_query_pane_t4_ParamLimits

0x72f9,	// (0x000611d5) area_vitu2_query_pane_t4

0x7321,	// (0x000611fd) area_vitu2_query_pane_t5_ParamLimits

0x7321,	// (0x000611fd) area_vitu2_query_pane_t5

0x7349,	// (0x00061225) area_vitu2_query_pane_t6_ParamLimits

0x7349,	// (0x00061225) area_vitu2_query_pane_t6

0x0006,

0xf988,	// (0x00069864) area_vitu2_query_pane_t_ParamLimits

0xf988,	// (0x00069864) area_vitu2_query_pane_t

0x7395,	// (0x00061271) bg_button_pane_cp018

0x73a3,	// (0x0006127f) bg_button_pane_cp021

0x73af,	// (0x0006128b) bg_button_pane_cp022

0x73be,	// (0x0006129a) input_focus_pane_cp09

0x2f1b,	// (0x0005cdf7) aid_size_touch_mv_arrow_left

0x2f44,	// (0x0005ce20) aid_size_touch_mv_arrow_right

0x6aac,	// (0x00060988) main_cset_slider_pane_g16_ParamLimits

0x6aac,	// (0x00060988) main_cset_slider_pane_g16

0x6ab8,	// (0x00060994) main_cset_slider_pane_g17_ParamLimits

0x6ab8,	// (0x00060994) main_cset_slider_pane_g17

0x723f,	// (0x0006111b) cell_cam4_burst_pane_g1_ParamLimits

0x0df7,	// (0x0005acd3) compa_mode_pane

0x6cc2,	// (0x00060b9e) popup_vtel_slider_window_g3_ParamLimits

0x6cc2,	// (0x00060b9e) popup_vtel_slider_window_g3

0x6cd9,	// (0x00060bb5) popup_vtel_slider_window_g4_ParamLimits

0x6cd9,	// (0x00060bb5) popup_vtel_slider_window_g4

0x6cf0,	// (0x00060bcc) popup_vtel_slider_window_t1_ParamLimits

0x6cf0,	// (0x00060bcc) popup_vtel_slider_window_t1

0x0df7,	// (0x0005acd3) main_cl_pane

0xc0a3,	// (0x00065f7f) popup_imed_adjust2_window_ParamLimits

0xc07b,	// (0x00065f57) bg_tb_trans_pane_cp05_ParamLimits

0xe692,	// (0x0006856e) popup_imed_adjust2_window_g1_ParamLimits

0xe6a1,	// (0x0006857d) popup_imed_adjust2_window_g2_ParamLimits

0xe6a1,	// (0x0006857d) popup_imed_adjust2_window_g2

0xe6ad,	// (0x00068589) popup_imed_adjust2_window_g3_ParamLimits

0xe6ad,	// (0x00068589) popup_imed_adjust2_window_g3

0x0002,

0x059a,	// (0x0005a476) popup_imed_adjust2_window_g_ParamLimits

0x059a,	// (0x0005a476) popup_imed_adjust2_window_g

0xe6b9,	// (0x00068595) popup_imed_adjust2_window_t1_ParamLimits

0xe6d1,	// (0x000685ad) slider_imed_adjust_pane_ParamLimits

0xe6e5,	// (0x000685c1) slider_imed_adjust_pane_g1_ParamLimits

0xe6f5,	// (0x000685d1) slider_imed_adjust_pane_g2_ParamLimits

0xe705,	// (0x000685e1) slider_imed_adjust_pane_g3_ParamLimits

0xe716,	// (0x000685f2) slider_imed_adjust_pane_g4_ParamLimits

0x05a1,	// (0x0005a47d) slider_imed_adjust_pane_g_ParamLimits

0x6134,	// (0x00060010) aid_touch_area_cam4_ParamLimits

0x6134,	// (0x00060010) aid_touch_area_cam4

0xdc63,	// (0x00067b3f) battery_pane_cp01

0x6204,	// (0x000600e0) main_camera4_pane_g6_ParamLimits

0x6204,	// (0x000600e0) main_camera4_pane_g6

0x622e,	// (0x0006010a) main_camera4_pane_t2_ParamLimits

0x622e,	// (0x0006010a) main_camera4_pane_t2

0x0001,

0xf847,	// (0x00069723) main_camera4_pane_t_ParamLimits

0xf847,	// (0x00069723) main_camera4_pane_t

0x6263,	// (0x0006013f) aid_touch_area_vid4_ParamLimits

0x6263,	// (0x0006013f) aid_touch_area_vid4

0x62ca,	// (0x000601a6) main_video4_pane_g5_ParamLimits

0x62ca,	// (0x000601a6) main_video4_pane_g5

0x62f5,	// (0x000601d1) vid4_progress_pane_ParamLimits

0x62f5,	// (0x000601d1) vid4_progress_pane

0xed3c,	// (0x00068c18) main_cset_slider_pane_g18_ParamLimits

0xed3c,	// (0x00068c18) main_cset_slider_pane_g18

0xef00,	// (0x00068ddc) cell_cam4_burst_pane_g2_ParamLimits

0xef00,	// (0x00068ddc) cell_cam4_burst_pane_g2

0x0001,

0xf977,	// (0x00069853) cell_cam4_burst_pane_g_ParamLimits

0xf977,	// (0x00069853) cell_cam4_burst_pane_g

0x9fe5,	// (0x00063ec1) bg_cl_pane_ParamLimits

0x9fe5,	// (0x00063ec1) bg_cl_pane

0x73cd,	// (0x000612a9) cl_header_pane_ParamLimits

0x73cd,	// (0x000612a9) cl_header_pane

0x73e1,	// (0x000612bd) cl_listscroll_pane_ParamLimits

0x73e1,	// (0x000612bd) cl_listscroll_pane

0xf042,	// (0x00068f1e) bg_cl_pane_g1

0xf04a,	// (0x00068f26) bg_cl_pane_g2

0xf052,	// (0x00068f2e) bg_cl_pane_g3

0xf05a,	// (0x00068f36) bg_cl_pane_g4

0xf062,	// (0x00068f3e) bg_cl_pane_g5

0xf06a,	// (0x00068f46) bg_cl_pane_g6

0xf090,	// (0x00068f6c) bg_cl_pane_g7

0xf098,	// (0x00068f74) bg_cl_pane_g8

0xf0a0,	// (0x00068f7c) bg_cl_pane_g9

0x0008,

0xf997,	// (0x00069873) bg_cl_pane_g

0x73f1,	// (0x000612cd) aid_height_cl_leading_ParamLimits

0x73f1,	// (0x000612cd) aid_height_cl_leading

0x73fd,	// (0x000612d9) aid_height_cl_text_ParamLimits

0x73fd,	// (0x000612d9) aid_height_cl_text

0x9866,	// (0x00063742) bg_cl_header_pane_ParamLimits

0x9866,	// (0x00063742) bg_cl_header_pane

0x741c,	// (0x000612f8) cl_header_pane_g1_ParamLimits

0x741c,	// (0x000612f8) cl_header_pane_g1

0x7432,	// (0x0006130e) cl_header_pane_t1_ParamLimits

0x7432,	// (0x0006130e) cl_header_pane_t1

0xf0a8,	// (0x00068f84) cl_list_pane

0xed0f,	// (0x00068beb) hc_scroll_pane_cp01

0xa48f,	// (0x0006436b) bg_cl_header_pane_g1

0xebf5,	// (0x00068ad1) bg_cl_header_pane_g2

0xa4af,	// (0x0006438b) bg_cl_header_pane_g3

0xec05,	// (0x00068ae1) bg_cl_header_pane_g4

0xebfd,	// (0x00068ad9) bg_cl_header_pane_g5

0xee19,	// (0x00068cf5) bg_cl_header_pane_g6

0xec1d,	// (0x00068af9) bg_cl_header_pane_g7

0xec25,	// (0x00068b01) bg_cl_header_pane_g8

0xec15,	// (0x00068af1) bg_cl_header_pane_g9

0x0008,

0xf9aa,	// (0x00069886) bg_cl_header_pane_g

0x744b,	// (0x00061327) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x744b,	// (0x00061327) hc_cl_list_double_graphic_heading_pane

0x745c,	// (0x00061338) hc_cl_list_single_graphic_pane_ParamLimits

0x745c,	// (0x00061338) hc_cl_list_single_graphic_pane

0x7472,	// (0x0006134e) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7472,	// (0x0006134e) hc_cl_list_single_graphic_pane_g1

0x747e,	// (0x0006135a) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x747e,	// (0x0006135a) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9bd,	// (0x00069899) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9bd,	// (0x00069899) hc_cl_list_single_graphic_pane_g

0x7492,	// (0x0006136e) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7492,	// (0x0006136e) hc_cl_list_single_graphic_pane_t1

0x7472,	// (0x0006134e) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7472,	// (0x0006134e) hc_cl_list_double_graphic_heading_pane_g1

0x74a7,	// (0x00061383) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x74a7,	// (0x00061383) hc_cl_list_double_graphic_heading_pane_g2

0x74bb,	// (0x00061397) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x74bb,	// (0x00061397) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9c2,	// (0x0006989e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9c2,	// (0x0006989e) hc_cl_list_double_graphic_heading_pane_g

0x74cf,	// (0x000613ab) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x74cf,	// (0x000613ab) hc_cl_list_double_graphic_heading_pane_t1

0x74e4,	// (0x000613c0) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x74e4,	// (0x000613c0) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9c9,	// (0x000698a5) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9c9,	// (0x000698a5) hc_cl_list_double_graphic_heading_pane_t

0xdd93,	// (0x00067c6f) vid4_progress_pane_g1

0xdda3,	// (0x00067c7f) vid4_progress_pane_g2

0xa782,	// (0x0006465e) vid4_progress_pane_g3

0xddb3,	// (0x00067c8f) vid4_progress_pane_g4

0x0004,

0xf9ce,	// (0x000698aa) vid4_progress_pane_g

0xddd1,	// (0x00067cad) vid4_progress_pane_t1

0xdde6,	// (0x00067cc2) vid4_progress_pane_t2

0x0002,

0xf9d9,	// (0x000698b5) vid4_progress_pane_t

0xde11,	// (0x00067ced) wait_bar_pane_cp07

0xdf86,	// (0x00067e62) blid_firmament_pane_ParamLimits

0xdfd2,	// (0x00067eae) popup_blid_sat_info2_window_g1

0xdff6,	// (0x00067ed2) popup_blid_sat_info2_window_t3

0xe004,	// (0x00067ee0) popup_blid_sat_info2_window_t4

0xe012,	// (0x00067eee) popup_blid_sat_info2_window_t5

0xe020,	// (0x00067efc) popup_blid_sat_info2_window_t6

0xe030,	// (0x00067f0c) popup_blid_sat_info2_window_t7

0xe03e,	// (0x00067f1a) popup_blid_sat_info2_window_t8

0xe04c,	// (0x00067f28) popup_blid_sat_info2_window_t9

0xe05a,	// (0x00067f36) popup_blid_sat_info2_window_t10

0xe11c,	// (0x00067ff8) aid_firma_cardinal_ParamLimits

0xe130,	// (0x0006800c) blid_firmament_pane_t1_ParamLimits

0xe147,	// (0x00068023) blid_firmament_pane_t2_ParamLimits

0xe15e,	// (0x0006803a) blid_firmament_pane_t3_ParamLimits

0xe175,	// (0x00068051) blid_firmament_pane_t4_ParamLimits

0x0493,	// (0x0005a36f) blid_firmament_pane_t_ParamLimits

0xe18c,	// (0x00068068) blid_sat_info_pane_ParamLimits

0x9866,	// (0x00063742) main_cam_set_pane_ParamLimits

0x580d,	// (0x0005f6e9) aid_size_cell_colour_35_ParamLimits

0x582d,	// (0x0005f709) aid_size_cell_colour_112_ParamLimits

0x584d,	// (0x0005f729) aid_size_cell_effect_ParamLimits

0xc07b,	// (0x00065f57) bg_tb_trans_pane_cp02_ParamLimits

0xa709,	// (0x000645e5) heading_imed_pane_ParamLimits

0x586d,	// (0x0005f749) listscroll_imed_pane_ParamLimits

0xb6ad,	// (0x00065589) popup_call2_audio_first_window_g5_ParamLimits

0xb6ad,	// (0x00065589) popup_call2_audio_first_window_g5

0x5ddf,	// (0x0005fcbb) aid_size_touch_image3_arrow_left_ParamLimits

0x5ddf,	// (0x0005fcbb) aid_size_touch_image3_arrow_left

0x5e0b,	// (0x0005fce7) aid_size_touch_image3_arrow_right_ParamLimits

0x5e0b,	// (0x0005fce7) aid_size_touch_image3_arrow_right

0xddfc,	// (0x00067cd8) vid4_progress_pane_t3

0x5b80,	// (0x0005fa5c) main_hwr_training_symbol_option_pane_ParamLimits

0x5b80,	// (0x0005fa5c) main_hwr_training_symbol_option_pane

0xe97f,	// (0x0006885b) popup_hwr_training_preview_window_ParamLimits

0xe97f,	// (0x0006885b) popup_hwr_training_preview_window

0x5ba0,	// (0x0005fa7c) hwr_training_navi_pane_g5_ParamLimits

0x5ba0,	// (0x0005fa7c) hwr_training_navi_pane_g5

0xebe3,	// (0x00068abf) popup_char_count_window

0xdcfe,	// (0x00067bda) bg_popup_sub_pane_cp20_ParamLimits

0x6e16,	// (0x00060cf2) list_vitu2_match_list_pane_ParamLimits

0x6e25,	// (0x00060d01) vitu2_page_scroll_pane_ParamLimits

0x6e25,	// (0x00060d01) vitu2_page_scroll_pane

0xf0b1,	// (0x00068f8d) list_single_hwr_training_symbol_option_pane_ParamLimits

0xf0b1,	// (0x00068f8d) list_single_hwr_training_symbol_option_pane

0xf0c4,	// (0x00068fa0) list_single_hwr_training_symbol_option_pane_g1

0xf0cc,	// (0x00068fa8) list_single_hwr_training_symbol_option_pane_t1

0xf0da,	// (0x00068fb6) bg_button_pane_cp023

0xf0e3,	// (0x00068fbf) bg_button_pane_cp024

0x757d,	// (0x00061459) vitu2_page_scroll_pane_g1

0x7585,	// (0x00061461) vitu2_page_scroll_pane_g2

0x0001,

0xf9e0,	// (0x000698bc) vitu2_page_scroll_pane_g

0x758d,	// (0x00061469) vitu2_page_scroll_pane_t1

0x759c,	// (0x00061478) popup_char_count_window_g1

0x75a5,	// (0x00061481) popup_char_count_window_g2

0x75ae,	// (0x0006148a) popup_char_count_window_g3

0x0002,

0xf9e5,	// (0x000698c1) popup_char_count_window_g

0x75b7,	// (0x00061493) popup_char_count_window_t1

0x0df7,	// (0x0005acd3) main_vded2_pane

0xe67e,	// (0x0006855a) aid_size_cell_imed_line

0xe688,	// (0x00068564) grid_imed_line_width_pane

0x6363,	// (0x0006023f) vid4_indicators_pane_g4

0x75c5,	// (0x000614a1) cell_imed_line_width_pane_ParamLimits

0x75c5,	// (0x000614a1) cell_imed_line_width_pane

0x75d9,	// (0x000614b5) cell_imed_line_width_pane_g1

0xdf60,	// (0x00067e3c) cell_imed_line_width_pane_g2

0x0001,

0xf9ec,	// (0x000698c8) cell_imed_line_width_pane_g

0x75e2,	// (0x000614be) main_vded2_pane_g1_ParamLimits

0x75e2,	// (0x000614be) main_vded2_pane_g1

0x75f8,	// (0x000614d4) main_vded2_pane_g2_ParamLimits

0x75f8,	// (0x000614d4) main_vded2_pane_g2

0x0001,

0xf9f1,	// (0x000698cd) main_vded2_pane_g_ParamLimits

0xf9f1,	// (0x000698cd) main_vded2_pane_g

0x760a,	// (0x000614e6) vded2_slider_pane_ParamLimits

0x760a,	// (0x000614e6) vded2_slider_pane

0x761a,	// (0x000614f6) aid_size_touch_vded2_end

0x7624,	// (0x00061500) aid_size_touch_vded2_playhead

0x762e,	// (0x0006150a) aid_size_touch_vded2_start

0x7636,	// (0x00061512) vded2_slider_bg_pane

0x763f,	// (0x0006151b) vded2_slider_pane_g1

0x7648,	// (0x00061524) vded2_slider_pane_g2

0x7650,	// (0x0006152c) vded2_slider_pane_g3

0x0002,

0xf9f6,	// (0x000698d2) vded2_slider_pane_g

0x765b,	// (0x00061537) vded2_slider_bg_pane_g1

0x7664,	// (0x00061540) vded2_slider_bg_pane_g2

0x766d,	// (0x00061549) vded2_slider_bg_pane_g3

0x0002,

0xf9fd,	// (0x000698d9) vded2_slider_bg_pane_g

0x35c5,	// (0x0005d4a1) aid_postcard_touch_down_pane_ParamLimits

0x35c5,	// (0x0005d4a1) aid_postcard_touch_down_pane

0x35db,	// (0x0005d4b7) aid_postcard_touch_up_pane_ParamLimits

0x35db,	// (0x0005d4b7) aid_postcard_touch_up_pane

0x0df7,	// (0x0005acd3) main_blid2_pane

0xc089,	// (0x00065f65) popup_blid2_search_window

0x0df7,	// (0x0005acd3) blid2_gps_pane

0x0df7,	// (0x0005acd3) blid2_navig_pane

0x0df7,	// (0x0005acd3) blid2_search_pane

0x0df7,	// (0x0005acd3) blid2_tripm_pane

0x7676,	// (0x00061552) blid2_search_pane_g1_ParamLimits

0x7676,	// (0x00061552) blid2_search_pane_g1

0x7690,	// (0x0006156c) blid2_search_pane_t1_ParamLimits

0x7690,	// (0x0006156c) blid2_search_pane_t1

0x76a2,	// (0x0006157e) aid_size_cell_blid2_gps_ParamLimits

0x76a2,	// (0x0006157e) aid_size_cell_blid2_gps

0x76ba,	// (0x00061596) blid2_gps_pane_g1_ParamLimits

0x76ba,	// (0x00061596) blid2_gps_pane_g1

0x76ce,	// (0x000615aa) grid_blid2_satellite_pane_ParamLimits

0x76ce,	// (0x000615aa) grid_blid2_satellite_pane

0x76e8,	// (0x000615c4) blid2_navig_pane_g1_ParamLimits

0x76e8,	// (0x000615c4) blid2_navig_pane_g1

0x76f4,	// (0x000615d0) blid2_navig_pane_t1_ParamLimits

0x76f4,	// (0x000615d0) blid2_navig_pane_t1

0x770f,	// (0x000615eb) blid2_navig_pane_t2_ParamLimits

0x770f,	// (0x000615eb) blid2_navig_pane_t2

0x0001,

0xfa04,	// (0x000698e0) blid2_navig_pane_t_ParamLimits

0xfa04,	// (0x000698e0) blid2_navig_pane_t

0x772a,	// (0x00061606) blid2_navig_ring_pane_ParamLimits

0x772a,	// (0x00061606) blid2_navig_ring_pane

0x7743,	// (0x0006161f) blid2_speed_pane_ParamLimits

0x7743,	// (0x0006161f) blid2_speed_pane

0x774f,	// (0x0006162b) blid2_tripm_pane_g1_ParamLimits

0x774f,	// (0x0006162b) blid2_tripm_pane_g1

0x7768,	// (0x00061644) blid2_tripm_pane_g2_ParamLimits

0x7768,	// (0x00061644) blid2_tripm_pane_g2

0x777c,	// (0x00061658) blid2_tripm_pane_g3_ParamLimits

0x777c,	// (0x00061658) blid2_tripm_pane_g3

0x7790,	// (0x0006166c) blid2_tripm_pane_g4_ParamLimits

0x7790,	// (0x0006166c) blid2_tripm_pane_g4

0x77a4,	// (0x00061680) blid2_tripm_pane_g5_ParamLimits

0x77a4,	// (0x00061680) blid2_tripm_pane_g5

0x0005,

0xfa09,	// (0x000698e5) blid2_tripm_pane_g_ParamLimits

0xfa09,	// (0x000698e5) blid2_tripm_pane_g

0x77ca,	// (0x000616a6) blid2_tripm_pane_t1_ParamLimits

0x77ca,	// (0x000616a6) blid2_tripm_pane_t1

0x77e5,	// (0x000616c1) blid2_tripm_pane_t2_ParamLimits

0x77e5,	// (0x000616c1) blid2_tripm_pane_t2

0x77fe,	// (0x000616da) blid2_tripm_pane_t3_ParamLimits

0x77fe,	// (0x000616da) blid2_tripm_pane_t3

0x0003,

0xfa16,	// (0x000698f2) blid2_tripm_pane_t_ParamLimits

0xfa16,	// (0x000698f2) blid2_tripm_pane_t

0x7845,	// (0x00061721) cell_blid2_satellite_pane_ParamLimits

0x7845,	// (0x00061721) cell_blid2_satellite_pane

0x7863,	// (0x0006173f) cell_blid2_satellite_pane_g1

0x786c,	// (0x00061748) cell_blid2_satellite_pane_t1

0xe19c,	// (0x00068078) blid2_speed_pane_g1

0x787a,	// (0x00061756) blid2_speed_pane_t1

0x7888,	// (0x00061764) blid2_speed_pane_t2

0x0001,

0xfa1f,	// (0x000698fb) blid2_speed_pane_t

0xe19c,	// (0x00068078) blid2_navig_ring_pane_g1

0x7896,	// (0x00061772) blid2_navig_ring_pane_g2

0x789e,	// (0x0006177a) blid2_navig_ring_pane_g3

0x78a6,	// (0x00061782) blid2_navig_ring_pane_g4

0x78ae,	// (0x0006178a) blid2_navig_ring_pane_g5

0x0004,

0xfa24,	// (0x00069900) blid2_navig_ring_pane_g

0x0df7,	// (0x0005acd3) bg_popup_window_pane_cp011

0x78b6,	// (0x00061792) popup_blid2_search_window_g1

0x78be,	// (0x0006179a) popup_blid2_search_window_t1

0x78cc,	// (0x000617a8) popup_blid2_search_window_t2

0x0001,

0xfa2f,	// (0x0006990b) popup_blid2_search_window_t

0xa39e,	// (0x0006427a) main_browser_pane_g1

0x9fe5,	// (0x00063ec1) main_browser_pane_ParamLimits

0xdcfe,	// (0x00067bda) bg_button_pane_cp011_ParamLimits

0x6688,	// (0x00060564) cell_vitu2_function_pane_g1_ParamLimits

0xc07b,	// (0x00065f57) bg_popup_sub_pane_cp22_ParamLimits

0x6fcb,	// (0x00060ea7) input_focus_pane_cp08_ParamLimits

0x6fe2,	// (0x00060ebe) popup_vitu2_query_button_pane_ParamLimits

0x6fe2,	// (0x00060ebe) popup_vitu2_query_button_pane

0x6ff3,	// (0x00060ecf) popup_vitu2_query_input_button_pane

0xee56,	// (0x00068d32) popup_vitu2_query_window_g1_ParamLimits

0x6ffd,	// (0x00060ed9) popup_vitu2_query_window_g2_ParamLimits

0xf95a,	// (0x00069836) popup_vitu2_query_window_g_ParamLimits

0x0df7,	// (0x0005acd3) bg_button_pane_cp026

0x78da,	// (0x000617b6) popup_vitu2_query_input_button_pane_g1

0x0df7,	// (0x0005acd3) bg_button_pane_cp025

0x78e2,	// (0x000617be) popup_vitu2_query_button_pane_t1

0x4c5f,	// (0x0005eb3b) main_mp3_pane_t6

0x4c6d,	// (0x0005eb49) popup_slider_window_cp01

0xdc8d,	// (0x00067b69) cam4_battery_pane

0xdcf4,	// (0x00067bd0) cam4_battery_pane_cp02

0xdd8b,	// (0x00067c67) cam4_battery_pane_cp01

0xdd8b,	// (0x00067c67) cam4_battery_pane_cp03

0xea99,	// (0x00068975) cam4_battery_pane_g1

0xe19c,	// (0x00068078) cam4_battery_pane_g2

0x0001,

0x08db,	// (0x0005a7b7) cam4_battery_pane_g

0xe068,	// (0x00067f44) popup_blid_sat_info2_window_t11

0x2f1b,	// (0x0005cdf7) aid_size_touch_mv_arrow_left_ParamLimits

0x2f44,	// (0x0005ce20) aid_size_touch_mv_arrow_right_ParamLimits

0xab99,	// (0x00064a75) navi_pane_g1_ParamLimits

0x2f6d,	// (0x0005ce49) navi_pane_g2_ParamLimits

0x2f9b,	// (0x0005ce77) navi_pane_g3_ParamLimits

0xf409,	// (0x000692e5) navi_pane_g_ParamLimits

0x2ff3,	// (0x0005cecf) navi_pane_mv_t1_ParamLimits

0x5879,	// (0x0005f755) grid_imed_effect_pane_ParamLimits

0x1e23,	// (0x0005bcff) aid_placing_vt_slider_lsc

0xa2ef,	// (0x000641cb) aid_placing_vt_slider_prt

0x9866,	// (0x00063742) bg_tb_trans_pane_cp01_ParamLimits

0xe31f,	// (0x000681fb) popup_image_details_window_g1_ParamLimits

0xe332,	// (0x0006820e) popup_image_details_window_g2_ParamLimits

0xe347,	// (0x00068223) popup_image_details_window_g3_ParamLimits

0xe347,	// (0x00068223) popup_image_details_window_g3

0x04d8,	// (0x0005a3b4) popup_image_details_window_g_ParamLimits

0xe35b,	// (0x00068237) popup_image_details_window_t1_ParamLimits

0xe36d,	// (0x00068249) popup_image_details_window_t2_ParamLimits

0xe386,	// (0x00068262) popup_image_details_window_t3_ParamLimits

0xe39a,	// (0x00068276) popup_image_details_window_t4_ParamLimits

0xe3b5,	// (0x00068291) popup_image_details_window_t5_ParamLimits

0x04df,	// (0x0005a3bb) popup_image_details_window_t_ParamLimits

0x7409,	// (0x000612e5) cl_header_name_pane_ParamLimits

0x7409,	// (0x000612e5) cl_header_name_pane

0x78f0,	// (0x000617cc) cl_header_name_pane_t1_ParamLimits

0x78f0,	// (0x000617cc) cl_header_name_pane_t1

0x7911,	// (0x000617ed) cl_header_name_pane_t2_ParamLimits

0x7911,	// (0x000617ed) cl_header_name_pane_t2

0x7953,	// (0x0006182f) cl_header_name_pane_t3_ParamLimits

0x7953,	// (0x0006182f) cl_header_name_pane_t3

0x0002,

0xfa34,	// (0x00069910) cl_header_name_pane_t_ParamLimits

0xfa34,	// (0x00069910) cl_header_name_pane_t

0x2fc4,	// (0x0005cea0) navi_pane_mv_g2_ParamLimits

0xebbd,	// (0x00068a99) field_vitu2_entry_pane_g1_ParamLimits

0xebc9,	// (0x00068aa5) field_vitu2_entry_pane_g2_ParamLimits

0xebd5,	// (0x00068ab1) field_vitu2_entry_pane_g3_ParamLimits

0xebd5,	// (0x00068ab1) field_vitu2_entry_pane_g3

0x06d6,	// (0x0005a5b2) field_vitu2_entry_pane_g_ParamLimits

0x6604,	// (0x000604e0) cell_vitu2_itu_pane_g1_ParamLimits

0x6614,	// (0x000604f0) cell_vitu2_itu_pane_g2_ParamLimits

0x6614,	// (0x000604f0) cell_vitu2_itu_pane_g2

0x0001,

0xf87e,	// (0x0006975a) cell_vitu2_itu_pane_g_ParamLimits

0xf87e,	// (0x0006975a) cell_vitu2_itu_pane_g

0xdcfe,	// (0x00067bda) bg_vkb2_func_pane_cp05_ParamLimits

0xdcfe,	// (0x00067bda) bg_vkb2_func_pane_cp05

0xdcfe,	// (0x00067bda) bg_vkb2_func_pane_cp03

0xdcfe,	// (0x00067bda) bg_vkb2_func_pane_cp04

0xdcfe,	// (0x00067bda) bg_vkb2_func_pane_cp10_ParamLimits

0xdcfe,	// (0x00067bda) bg_vkb2_func_pane_cp10

0x73af,	// (0x0006128b) bg_vkb2_func_pane_cp08

0x7395,	// (0x00061271) bg_vkb2_func_pane_cp06

0x73a3,	// (0x0006127f) bg_vkb2_func_pane_cp07

0x7553,	// (0x0006142f) bg_vkb2_func_pane_cp11_ParamLimits

0x7553,	// (0x0006142f) bg_vkb2_func_pane_cp11

0x7568,	// (0x00061444) bg_vkb2_func_pane_cp12_ParamLimits

0x7568,	// (0x00061444) bg_vkb2_func_pane_cp12

0x0df7,	// (0x0005acd3) bg_vkb2_func_pane_cp09

0xebf5,	// (0x00068ad1) bg_vkb2_func_pane_g1

0xa4af,	// (0x0006438b) bg_vkb2_func_pane_g2

0xebfd,	// (0x00068ad9) bg_vkb2_func_pane_g3

0xec05,	// (0x00068ae1) bg_vkb2_func_pane_g4

0xee19,	// (0x00068cf5) bg_vkb2_func_pane_g5

0xec1d,	// (0x00068af9) bg_vkb2_func_pane_g6

0xec25,	// (0x00068b01) bg_vkb2_func_pane_g7

0xec15,	// (0x00068af1) bg_vkb2_func_pane_g8

0xa48f,	// (0x0006436b) bg_vkb2_func_pane_g9

0x0008,

0xfa3b,	// (0x00069917) bg_vkb2_func_pane_g

0x77b8,	// (0x00061694) blid2_tripm_pane_g6_ParamLimits

0x77b8,	// (0x00061694) blid2_tripm_pane_g6

0xea53,	// (0x0006892f) mp4_progress_pane_g1

0x7831,	// (0x0006170d) blid2_tripm_values_pane_ParamLimits

0x7831,	// (0x0006170d) blid2_tripm_values_pane

0x7984,	// (0x00061860) blid2_tripm_values_pane_t1

0x7992,	// (0x0006186e) blid2_tripm_values_pane_t2

0x79a0,	// (0x0006187c) blid2_tripm_values_pane_t3

0x79ae,	// (0x0006188a) blid2_tripm_values_pane_t4

0x79bc,	// (0x00061898) blid2_tripm_values_pane_t5

0x79ca,	// (0x000618a6) blid2_tripm_values_pane_t6

0x79d8,	// (0x000618b4) blid2_tripm_values_pane_t7

0x79e6,	// (0x000618c2) blid2_tripm_values_pane_t8

0x79f4,	// (0x000618d0) blid2_tripm_values_pane_t9

0x0008,

0xfa4e,	// (0x0006992a) blid2_tripm_values_pane_t

0x1e65,	// (0x0005bd41) call_video_pane_t1_ParamLimits

0x1e83,	// (0x0005bd5f) call_video_pane_t2_ParamLimits

0xf292,	// (0x0006916e) call_video_pane_t_ParamLimits

0x34c8,	// (0x0005d3a4) msg_header_pane_g1_ParamLimits

0xadd4,	// (0x00064cb0) msg_header_pane_g2_ParamLimits

0xadd4,	// (0x00064cb0) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x00069388) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x00069388) msg_header_pane_g

0x9fe5,	// (0x00063ec1) main_clock2_pane_ParamLimits

0x55a5,	// (0x0005f481) grid_clock2_toolbar_pane_ParamLimits

0x55a5,	// (0x0005f481) grid_clock2_toolbar_pane

0x55a5,	// (0x0005f481) listscroll_clock2_pane_ParamLimits

0x55a5,	// (0x0005f481) listscroll_clock2_pane

0x5681,	// (0x0005f55d) main_clock2_pane_t3_ParamLimits

0x5681,	// (0x0005f55d) main_clock2_pane_t3

0x569c,	// (0x0005f578) main_clock2_pane_t4_ParamLimits

0x569c,	// (0x0005f578) main_clock2_pane_t4

0x7a02,	// (0x000618de) cell_clock2_toolbar_pane

0x7a0a,	// (0x000618e6) cell_clock2_toolbar_pane_cp01

0x7a0a,	// (0x000618e6) cell_clock2_toolbar_pane_cp02

0x7a12,	// (0x000618ee) cell_clock2_toolbar_pane_cp03

0x7a1a,	// (0x000618f6) list_clock2_pane

0xaaf0,	// (0x000649cc) scroll_pane_cp10

0x7a22,	// (0x000618fe) list_single_clock2_pane_ParamLimits

0x7a22,	// (0x000618fe) list_single_clock2_pane

0xac39,	// (0x00064b15) list_highlight_pane_cp08

0x7a2f,	// (0x0006190b) list_single_clock2_pane_t1

0xc21f,	// (0x000660fb) list_single_clock2_pane_t2

0x0001,

0xfa61,	// (0x0006993d) list_single_clock2_pane_t

0x0df7,	// (0x0005acd3) bg_button_pane_cp10

0xc22d,	// (0x00066109) cell_clock2_toolbar_pane_g1

0x3551,	// (0x0005d42d) aid_main_viewer_pane_g1_ParamLimits

0x3551,	// (0x0005d42d) aid_main_viewer_pane_g1

0x355f,	// (0x0005d43b) aid_main_viewer_pane_g2_ParamLimits

0x355f,	// (0x0005d43b) aid_main_viewer_pane_g2

0x356d,	// (0x0005d449) aid_main_viewer_pane_g3_ParamLimits

0x356d,	// (0x0005d449) aid_main_viewer_pane_g3

0x357c,	// (0x0005d458) aid_main_viewer_pane_g4_ParamLimits

0x357c,	// (0x0005d458) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x00069399) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x00069399) aid_main_viewer_pane_g

0x3e82,	// (0x0005dd5e) main_calc_pane_ParamLimits

0x3e96,	// (0x0005dd72) main_dialer2_pane_ParamLimits

0x0df7,	// (0x0005acd3) main_cam6_pane

0x0df7,	// (0x0005acd3) main_vid6_pane

0x55b1,	// (0x0005f48d) listscroll_gen_pane_cp06_ParamLimits

0x55b1,	// (0x0005f48d) listscroll_gen_pane_cp06

0x56b7,	// (0x0005f593) main_clock2_pane_t5_ParamLimits

0x56b7,	// (0x0005f593) main_clock2_pane_t5

0x570e,	// (0x0005f5ea) aid_call2_pane_cp10_ParamLimits

0x5720,	// (0x0005f5fc) aid_call_pane_cp10_ParamLimits

0xab6e,	// (0x00064a4a) popup_clock_analogue_window_cp10_g1_ParamLimits

0xab6e,	// (0x00064a4a) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5732,	// (0x0005f60e) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5732,	// (0x0005f60e) popup_clock_analogue_window_cp10_g4_ParamLimits

0xab6e,	// (0x00064a4a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf788,	// (0x00069664) popup_clock_analogue_window_cp10_g_ParamLimits

0x5744,	// (0x0005f620) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5d8c,	// (0x0005fc68) cell_dialer2_keypad_pane_g2_ParamLimits

0x5d8c,	// (0x0005fc68) cell_dialer2_keypad_pane_g2

0x0001,

0xf818,	// (0x000696f4) cell_dialer2_keypad_pane_g_ParamLimits

0xf818,	// (0x000696f4) cell_dialer2_keypad_pane_g

0x5da8,	// (0x0005fc84) cell_dialer2_keypad_pane_t1

0x699f,	// (0x0006087b) main_cset_text2_pane_ParamLimits

0x699f,	// (0x0006087b) main_cset_text2_pane

0xf036,	// (0x00068f12) area_vitu2_query_pane_g1_ParamLimits

0x7298,	// (0x00061174) area_vitu2_query_pane_g2_ParamLimits

0xf983,	// (0x0006985f) area_vitu2_query_pane_g_ParamLimits

0x7371,	// (0x0006124d) area_vitu2_query_pane_t7_ParamLimits

0x7371,	// (0x0006124d) area_vitu2_query_pane_t7

0x7395,	// (0x00061271) bg_button_pane_cp018_ParamLimits

0x73a3,	// (0x0006127f) bg_button_pane_cp021_ParamLimits

0x73af,	// (0x0006128b) bg_button_pane_cp022_ParamLimits

0x73af,	// (0x0006128b) bg_vkb2_func_pane_cp08_ParamLimits

0x7395,	// (0x00061271) bg_vkb2_func_pane_cp06_ParamLimits

0x73a3,	// (0x0006127f) bg_vkb2_func_pane_cp07_ParamLimits

0x73be,	// (0x0006129a) input_focus_pane_cp09_ParamLimits

0xde23,	// (0x00067cff) cam6_autofocus_pane_ParamLimits

0xde23,	// (0x00067cff) cam6_autofocus_pane

0x7a3d,	// (0x00061919) cam6_image_uncrop_pane_ParamLimits

0x7a3d,	// (0x00061919) cam6_image_uncrop_pane

0x7a4c,	// (0x00061928) cam6_indi_pane_ParamLimits

0x7a4c,	// (0x00061928) cam6_indi_pane

0x7a62,	// (0x0006193e) cam6_mode_pane_ParamLimits

0x7a62,	// (0x0006193e) cam6_mode_pane

0x7a74,	// (0x00061950) cam6_timer_pane_ParamLimits

0x7a74,	// (0x00061950) cam6_timer_pane

0x7a80,	// (0x0006195c) cam6_zoom_pane_ParamLimits

0x7a80,	// (0x0006195c) cam6_zoom_pane

0x7a8c,	// (0x00061968) cam6_mode_pane_g1_ParamLimits

0x7a8c,	// (0x00061968) cam6_mode_pane_g1

0x7a9c,	// (0x00061978) cam6_mode_pane_g2_ParamLimits

0x7a9c,	// (0x00061978) cam6_mode_pane_g2

0x7aac,	// (0x00061988) cam6_mode_pane_g3_ParamLimits

0x7aac,	// (0x00061988) cam6_mode_pane_g3

0x7abc,	// (0x00061998) cam6_mode_pane_g4_ParamLimits

0x7abc,	// (0x00061998) cam6_mode_pane_g4

0x0003,

0xfa66,	// (0x00069942) cam6_mode_pane_g_ParamLimits

0xfa66,	// (0x00069942) cam6_mode_pane_g

0xc235,	// (0x00066111) bg_tb_trans_pane_cp08_ParamLimits

0xc235,	// (0x00066111) bg_tb_trans_pane_cp08

0xc243,	// (0x0006611f) cam6_battery_pane_ParamLimits

0xc243,	// (0x0006611f) cam6_battery_pane

0xc259,	// (0x00066135) cam6_indi_pane_g1_ParamLimits

0xc259,	// (0x00066135) cam6_indi_pane_g1

0xc26b,	// (0x00066147) cam6_indi_pane_g2_ParamLimits

0xc26b,	// (0x00066147) cam6_indi_pane_g2

0xc27d,	// (0x00066159) cam6_indi_pane_g3_ParamLimits

0xc27d,	// (0x00066159) cam6_indi_pane_g3

0x0002,

0xfa6f,	// (0x0006994b) cam6_indi_pane_g_ParamLimits

0xfa6f,	// (0x0006994b) cam6_indi_pane_g

0xc28f,	// (0x0006616b) cam6_indi_pane_t1_ParamLimits

0xc28f,	// (0x0006616b) cam6_indi_pane_t1

0x7acc,	// (0x000619a8) cam6_autofocus_pane_g1

0x7ad4,	// (0x000619b0) cam6_autofocus_pane_g2

0x7adc,	// (0x000619b8) cam6_autofocus_pane_g3

0x7ae4,	// (0x000619c0) cam6_autofocus_pane_g4

0x0003,

0xfa76,	// (0x00069952) cam6_autofocus_pane_g

0xc2b5,	// (0x00066191) cam6_timer_pane_g1

0xc2bd,	// (0x00066199) cam6_timer_pane_t1

0xc2cb,	// (0x000661a7) cam6_zoom_cont_pane

0xc2d3,	// (0x000661af) cam6_zoom_pane_g1

0xc2db,	// (0x000661b7) cam6_zoom_pane_g2

0x7aec,	// (0x000619c8) cam6_zoom_pane_g3

0x0002,

0xfa7f,	// (0x0006995b) cam6_zoom_pane_g

0xe19c,	// (0x00068078) cam6_battery_pane_g1

0xe19c,	// (0x00068078) cam6_battery_pane_g2

0x0001,

0x049c,	// (0x0005a378) cam6_battery_pane_g

0xc2e3,	// (0x000661bf) cam6_zoom_cont_pane_g1

0xc2ec,	// (0x000661c8) cam6_zoom_cont_pane_g2

0xc2f5,	// (0x000661d1) cam6_zoom_cont_pane_g3

0x0002,

0xfa86,	// (0x00069962) cam6_zoom_cont_pane_g

0x7b09,	// (0x000619e5) cam6_mode_pane_cp_ParamLimits

0x7b09,	// (0x000619e5) cam6_mode_pane_cp

0x7b1b,	// (0x000619f7) cam6_zoom_pane_cp_ParamLimits

0x7b1b,	// (0x000619f7) cam6_zoom_pane_cp

0x7b27,	// (0x00061a03) vid6_image_uncrop_cif_pane_ParamLimits

0x7b27,	// (0x00061a03) vid6_image_uncrop_cif_pane

0x7b37,	// (0x00061a13) vid6_image_uncrop_nhd_pane_ParamLimits

0x7b37,	// (0x00061a13) vid6_image_uncrop_nhd_pane

0x7b46,	// (0x00061a22) vid6_image_uncrop_vga_pane_ParamLimits

0x7b46,	// (0x00061a22) vid6_image_uncrop_vga_pane

0x7b55,	// (0x00061a31) vid6_image_uncrop_wvga_pane_ParamLimits

0x7b55,	// (0x00061a31) vid6_image_uncrop_wvga_pane

0x7b64,	// (0x00061a40) vid6_indi_pane_ParamLimits

0x7b64,	// (0x00061a40) vid6_indi_pane

0xc235,	// (0x00066111) bg_tb_trans_pane_cp09_ParamLimits

0xc235,	// (0x00066111) bg_tb_trans_pane_cp09

0xc30d,	// (0x000661e9) cam6_battery_pane_cp_ParamLimits

0xc30d,	// (0x000661e9) cam6_battery_pane_cp

0xc319,	// (0x000661f5) vid6_indi_pane_g1_ParamLimits

0xc319,	// (0x000661f5) vid6_indi_pane_g1

0xc32b,	// (0x00066207) vid6_indi_pane_g2_ParamLimits

0xc32b,	// (0x00066207) vid6_indi_pane_g2

0xc33d,	// (0x00066219) vid6_indi_pane_g3_ParamLimits

0xc33d,	// (0x00066219) vid6_indi_pane_g3

0xc352,	// (0x0006622e) vid6_indi_pane_g4_ParamLimits

0xc352,	// (0x0006622e) vid6_indi_pane_g4

0xc367,	// (0x00066243) vid6_indi_pane_g5_ParamLimits

0xc367,	// (0x00066243) vid6_indi_pane_g5

0x0004,

0xfa8d,	// (0x00069969) vid6_indi_pane_g_ParamLimits

0xfa8d,	// (0x00069969) vid6_indi_pane_g

0xc381,	// (0x0006625d) vid6_indi_pane_t1_ParamLimits

0xc381,	// (0x0006625d) vid6_indi_pane_t1

0xc397,	// (0x00066273) vid6_indi_pane_t2_ParamLimits

0xc397,	// (0x00066273) vid6_indi_pane_t2

0xc3bf,	// (0x0006629b) vid6_indi_pane_t3_ParamLimits

0xc3bf,	// (0x0006629b) vid6_indi_pane_t3

0xc3e7,	// (0x000662c3) vid6_indi_pane_t4_ParamLimits

0xc3e7,	// (0x000662c3) vid6_indi_pane_t4

0x0003,

0xfa98,	// (0x00069974) vid6_indi_pane_t_ParamLimits

0xfa98,	// (0x00069974) vid6_indi_pane_t

0xc40b,	// (0x000662e7) wait_bar_pane_cp08

0x7b7c,	// (0x00061a58) main_cset_text2_pane_t1_ParamLimits

0x7b7c,	// (0x00061a58) main_cset_text2_pane_t1

0x7af4,	// (0x000619d0) listscroll_gen_pane_cp06_t1_ParamLimits

0x7af4,	// (0x000619d0) listscroll_gen_pane_cp06_t1

0x0df7,	// (0x0005acd3) main_cam6_set_pane

0xdc7f,	// (0x00067b5b) bg_tb_trans_pane_cp06_ParamLimits

0xdc95,	// (0x00067b71) cam4_indicators_pane_g1_ParamLimits

0xdca6,	// (0x00067b82) cam4_indicators_pane_g2_ParamLimits

0xf855,	// (0x00069731) cam4_indicators_pane_g_ParamLimits

0xdcc4,	// (0x00067ba0) cam4_indicators_pane_t1_ParamLimits

0xdce6,	// (0x00067bc2) bg_tb_trans_pane_cp07_ParamLimits

0x633c,	// (0x00060218) vid4_indicators_pane_g1_ParamLimits

0x6349,	// (0x00060225) vid4_indicators_pane_g2_ParamLimits

0x6356,	// (0x00060232) vid4_indicators_pane_g3_ParamLimits

0x6363,	// (0x0006023f) vid4_indicators_pane_g4_ParamLimits

0xf867,	// (0x00069743) vid4_indicators_pane_g_ParamLimits

0x637b,	// (0x00060257) vid4_indicators_pane_t1_ParamLimits

0xdd93,	// (0x00067c6f) vid4_progress_pane_g1_ParamLimits

0xdda3,	// (0x00067c7f) vid4_progress_pane_g2_ParamLimits

0xa782,	// (0x0006465e) vid4_progress_pane_g3_ParamLimits

0xddb3,	// (0x00067c8f) vid4_progress_pane_g4_ParamLimits

0xf9ce,	// (0x000698aa) vid4_progress_pane_g_ParamLimits

0xddd1,	// (0x00067cad) vid4_progress_pane_t1_ParamLimits

0xdde6,	// (0x00067cc2) vid4_progress_pane_t2_ParamLimits

0xddfc,	// (0x00067cd8) vid4_progress_pane_t3_ParamLimits

0xf9d9,	// (0x000698b5) vid4_progress_pane_t_ParamLimits

0xde11,	// (0x00067ced) wait_bar_pane_cp07_ParamLimits

0x7b99,	// (0x00061a75) main_cam6_set_pane_g2_ParamLimits

0x7b99,	// (0x00061a75) main_cam6_set_pane_g2

0x7bbd,	// (0x00061a99) main_cset6_listscroll_pane_ParamLimits

0x7bbd,	// (0x00061a99) main_cset6_listscroll_pane

0x7bdd,	// (0x00061ab9) main_cset6_slider_pane_ParamLimits

0x7bdd,	// (0x00061ab9) main_cset6_slider_pane

0x7bf3,	// (0x00061acf) main_cset6_text2_pane_ParamLimits

0x7bf3,	// (0x00061acf) main_cset6_text2_pane

0xc41a,	// (0x000662f6) main_cset6_text_pane

0xc422,	// (0x000662fe) main_cset_list_pane_copy1_ParamLimits

0xc422,	// (0x000662fe) main_cset_list_pane_copy1

0xc432,	// (0x0006630e) scroll_pane_cp028_copy1

0x7c01,	// (0x00061add) cset_list_set_pane_copy1

0x7c12,	// (0x00061aee) aid_position_infowindow_above_copy1

0x7c1a,	// (0x00061af6) aid_position_infowindow_below_copy1

0x7c22,	// (0x00061afe) cset_list_set_pane_g1_copy1

0x7c2a,	// (0x00061b06) cset_list_set_pane_g3_copy1_ParamLimits

0x7c2a,	// (0x00061b06) cset_list_set_pane_g3_copy1

0x7c39,	// (0x00061b15) cset_list_set_pane_t1_copy1_ParamLimits

0x7c39,	// (0x00061b15) cset_list_set_pane_t1_copy1

0x9866,	// (0x00063742) list_highlight_pane_cp021_copy1_ParamLimits

0x9866,	// (0x00063742) list_highlight_pane_cp021_copy1

0xc43b,	// (0x00066317) cset6_slider_pane_ParamLimits

0xc43b,	// (0x00066317) cset6_slider_pane

0xc467,	// (0x00066343) main_cset6_slider_pane_g1_ParamLimits

0xc467,	// (0x00066343) main_cset6_slider_pane_g1

0x7c4e,	// (0x00061b2a) main_cset6_slider_pane_g2_ParamLimits

0x7c4e,	// (0x00061b2a) main_cset6_slider_pane_g2

0xc48f,	// (0x0006636b) main_cset6_slider_pane_g3_ParamLimits

0xc48f,	// (0x0006636b) main_cset6_slider_pane_g3

0x7c76,	// (0x00061b52) main_cset6_slider_pane_g4_ParamLimits

0x7c76,	// (0x00061b52) main_cset6_slider_pane_g4

0x7c82,	// (0x00061b5e) main_cset6_slider_pane_g5_ParamLimits

0x7c82,	// (0x00061b5e) main_cset6_slider_pane_g5

0xed24,	// (0x00068c00) main_cset6_slider_pane_g7_ParamLimits

0xed24,	// (0x00068c00) main_cset6_slider_pane_g7

0xed30,	// (0x00068c0c) main_cset6_slider_pane_g8_ParamLimits

0xed30,	// (0x00068c0c) main_cset6_slider_pane_g8

0x6a4c,	// (0x00060928) main_cset6_slider_pane_g9_ParamLimits

0x6a4c,	// (0x00060928) main_cset6_slider_pane_g9

0x6a58,	// (0x00060934) main_cset6_slider_pane_g10_ParamLimits

0x6a58,	// (0x00060934) main_cset6_slider_pane_g10

0x6a64,	// (0x00060940) main_cset6_slider_pane_g11_ParamLimits

0x6a64,	// (0x00060940) main_cset6_slider_pane_g11

0x6a70,	// (0x0006094c) main_cset6_slider_pane_g12_ParamLimits

0x6a70,	// (0x0006094c) main_cset6_slider_pane_g12

0x6a7c,	// (0x00060958) main_cset6_slider_pane_g13_ParamLimits

0x6a7c,	// (0x00060958) main_cset6_slider_pane_g13

0x6a88,	// (0x00060964) main_cset6_slider_pane_g14_ParamLimits

0x6a88,	// (0x00060964) main_cset6_slider_pane_g14

0x7c8e,	// (0x00061b6a) main_cset6_slider_pane_g15_ParamLimits

0x7c8e,	// (0x00061b6a) main_cset6_slider_pane_g15

0x6aac,	// (0x00060988) main_cset6_slider_pane_g16_ParamLimits

0x6aac,	// (0x00060988) main_cset6_slider_pane_g16

0x6ab8,	// (0x00060994) main_cset6_slider_pane_g17_ParamLimits

0x6ab8,	// (0x00060994) main_cset6_slider_pane_g17

0x0011,

0xfaa1,	// (0x0006997d) main_cset6_slider_pane_g_ParamLimits

0xfaa1,	// (0x0006997d) main_cset6_slider_pane_g

0xc49b,	// (0x00066377) main_cset6_slider_pane_t1_ParamLimits

0xc49b,	// (0x00066377) main_cset6_slider_pane_t1

0x7cbe,	// (0x00061b9a) main_cset6_slider_pane_t2_ParamLimits

0x7cbe,	// (0x00061b9a) main_cset6_slider_pane_t2

0x7ce9,	// (0x00061bc5) main_cset6_slider_pane_t3_ParamLimits

0x7ce9,	// (0x00061bc5) main_cset6_slider_pane_t3

0x7d14,	// (0x00061bf0) main_cset6_slider_pane_t4_ParamLimits

0x7d14,	// (0x00061bf0) main_cset6_slider_pane_t4

0x7d3f,	// (0x00061c1b) main_cset6_slider_pane_t5_ParamLimits

0x7d3f,	// (0x00061c1b) main_cset6_slider_pane_t5

0xc4dc,	// (0x000663b8) main_cset6_slider_pane_t7_ParamLimits

0xc4dc,	// (0x000663b8) main_cset6_slider_pane_t7

0x7d6a,	// (0x00061c46) main_cset6_slider_pane_t8_ParamLimits

0x7d6a,	// (0x00061c46) main_cset6_slider_pane_t8

0x7d8e,	// (0x00061c6a) main_cset6_slider_pane_t9_ParamLimits

0x7d8e,	// (0x00061c6a) main_cset6_slider_pane_t9

0x7db2,	// (0x00061c8e) main_cset6_slider_pane_t10_ParamLimits

0x7db2,	// (0x00061c8e) main_cset6_slider_pane_t10

0x7dd6,	// (0x00061cb2) main_cset6_slider_pane_t11_ParamLimits

0x7dd6,	// (0x00061cb2) main_cset6_slider_pane_t11

0xc512,	// (0x000663ee) main_cset6_slider_pane_t14_ParamLimits

0xc512,	// (0x000663ee) main_cset6_slider_pane_t14

0xc54b,	// (0x00066427) main_cset6_slider_pane_t15_ParamLimits

0xc54b,	// (0x00066427) main_cset6_slider_pane_t15

0x000b,

0xfac6,	// (0x000699a2) main_cset6_slider_pane_t_ParamLimits

0xfac6,	// (0x000699a2) main_cset6_slider_pane_t

0x7dfa,	// (0x00061cd6) cset_slider_pane_g1_copy1

0x7e03,	// (0x00061cdf) cset_slider_pane_g2_copy1

0x7e0c,	// (0x00061ce8) cset_slider_pane_g3_copy1

0x0df7,	// (0x0005acd3) bg_popup_sub_pane_cp011_copy1

0xee62,	// (0x00068d3e) main_cset_text_pane_g1_copy1

0xee6a,	// (0x00068d46) main_cset_text_pane_t1_copy1

0xee78,	// (0x00068d54) main_cset_text_pane_t2_copy1

0xee86,	// (0x00068d62) main_cset_text_pane_t3_copy1

0xee94,	// (0x00068d70) main_cset_text_pane_t4_copy1

0xeea2,	// (0x00068d7e) main_cset_text_pane_t5_copy1

0xeeb0,	// (0x00068d8c) main_cset_text_pane_t6_copy1

0xeebe,	// (0x00068d9a) main_cset_text_pane_t7_copy1

0x7e15,	// (0x00061cf1) main_cset_text2_pane_t1_copy1

0x0df7,	// (0x0005acd3) main_ncimui_pane

0x40d8,	// (0x0005dfb4) popup_query_ncimui_window_ParamLimits

0x40d8,	// (0x0005dfb4) popup_query_ncimui_window

0x4de1,	// (0x0005ecbd) field_cale_ev2_pane_g4_ParamLimits

0x4de1,	// (0x0005ecbd) field_cale_ev2_pane_g4

0x5c6c,	// (0x0005fb48) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5c6c,	// (0x0005fb48) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7f8,	// (0x000696d4) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7f8,	// (0x000696d4) cell_video_dialer_keypad_pane_g

0x5c84,	// (0x0005fb60) cell_video_dialer_keypad_pane_t1

0x0df7,	// (0x0005acd3) bg_popup_window_pane_cp012

0xa9cd,	// (0x000648a9) heading_pane_cp06

0xc673,	// (0x0006654f) ncim_query_content_pane

0x0df7,	// (0x0005acd3) bg_popup_heading_pane_cp01

0xc67b,	// (0x00066557) ncim_heading_pane_t1

0xc689,	// (0x00066565) ncim_indicator_popup_pane

0xc69b,	// (0x00066577) ncim_query_button_pane

0xc6af,	// (0x0006658b) ncim_query_content_pane_t1

0xc6c1,	// (0x0006659d) ncim_query_content_pane_t2

0x0005,

0xfb05,	// (0x000699e1) ncim_query_content_pane_t

0xc6fb,	// (0x000665d7) ncim_query_list_pane

0xc70d,	// (0x000665e9) ncim_query_popup_pane

0xc689,	// (0x00066565) ncim_indicator_popup_pane_ParamLimits

0x7f2a,	// (0x00061e06) ncim_query_content_pane_g1_ParamLimits

0x7f2a,	// (0x00061e06) ncim_query_content_pane_g1

0xc6af,	// (0x0006658b) ncim_query_content_pane_t1_ParamLimits

0xc6c1,	// (0x0006659d) ncim_query_content_pane_t2_ParamLimits

0x7f36,	// (0x00061e12) ncim_query_content_pane_t3_ParamLimits

0x7f36,	// (0x00061e12) ncim_query_content_pane_t3

0x7f5e,	// (0x00061e3a) ncim_query_content_pane_t4_ParamLimits

0x7f5e,	// (0x00061e3a) ncim_query_content_pane_t4

0x7f86,	// (0x00061e62) ncim_query_content_pane_t5_ParamLimits

0x7f86,	// (0x00061e62) ncim_query_content_pane_t5

0xc6d3,	// (0x000665af) ncim_query_content_pane_t6_ParamLimits

0xc6d3,	// (0x000665af) ncim_query_content_pane_t6

0xfb05,	// (0x000699e1) ncim_query_content_pane_t_ParamLimits

0xc6fb,	// (0x000665d7) ncim_query_list_pane_ParamLimits

0xc70d,	// (0x000665e9) ncim_query_popup_pane_ParamLimits

0xc721,	// (0x000665fd) wait_bar_pane_cp04

0x0df7,	// (0x0005acd3) input_focus_pane_cp011

0xc729,	// (0x00066605) ncim_query_popup_pane_t1

0xc737,	// (0x00066613) ncim_list_query_list_pane_ParamLimits

0xc737,	// (0x00066613) ncim_list_query_list_pane

0x0df7,	// (0x0005acd3) bg_button_pane_cp027

0xc744,	// (0x00066620) ncim_query_button_pane_g1

0x0df7,	// (0x0005acd3) list_highlight_pane_cp012

0xc74e,	// (0x0006662a) ncim_list_query_list_pane_g1

0xc756,	// (0x00066632) ncim_list_query_list_pane_t1

0xdcb5,	// (0x00067b91) cam4_indicators_pane_g3_ParamLimits

0xdcb5,	// (0x00067b91) cam4_indicators_pane_g3

0x636f,	// (0x0006024b) vid4_indicators_pane_g5_ParamLimits

0x636f,	// (0x0006024b) vid4_indicators_pane_g5

0xddc2,	// (0x00067c9e) vid4_progress_pane_g5_ParamLimits

0xddc2,	// (0x00067c9e) vid4_progress_pane_g5

0x7e43,	// (0x00061d1f) main_ncimui_pane_g1

0x7e99,	// (0x00061d75) ncimui_group_query_pane_ParamLimits

0x7e99,	// (0x00061d75) ncimui_group_query_pane

0x7ed5,	// (0x00061db1) ncimui_list_pane_ParamLimits

0x7ed5,	// (0x00061db1) ncimui_list_pane

0x7ef6,	// (0x00061dd2) ncimui_text_pane_ParamLimits

0x7ef6,	// (0x00061dd2) ncimui_text_pane

0x7fae,	// (0x00061e8a) ncimui_text_pane_t1_ParamLimits

0x7fae,	// (0x00061e8a) ncimui_text_pane_t1

0xc764,	// (0x00066640) ncimui_list_single_graphic_pane_ParamLimits

0xc764,	// (0x00066640) ncimui_list_single_graphic_pane

0x7fcc,	// (0x00061ea8) ncimui_query_pane_ParamLimits

0x7fcc,	// (0x00061ea8) ncimui_query_pane

0x0df7,	// (0x0005acd3) list_highlight_pane_cp013

0xc774,	// (0x00066650) ncim_list_query_list_pane_t1_copy1

0xc74e,	// (0x0006662a) ncim_list_single_graphic_pane_g1

0xc782,	// (0x0006665e) ncim_query_button_pane_cp01

0xc78e,	// (0x0006666a) ncim_query_entry_pane_ParamLimits

0xc78e,	// (0x0006666a) ncim_query_entry_pane

0xc7a1,	// (0x0006667d) ncimui_query_pane_g1

0xc7ad,	// (0x00066689) ncimui_query_pane_t1_ParamLimits

0xc7ad,	// (0x00066689) ncimui_query_pane_t1

0x9866,	// (0x00063742) input_focus_pane_cp012

0xc7c6,	// (0x000666a2) ncim_query_entry_pane_t1

0x9fe5,	// (0x00063ec1) main_im_pane_ParamLimits

0x9866,	// (0x00063742) main_mobtv_pane_ParamLimits

0x9866,	// (0x00063742) main_mobtv_pane

0x7ca6,	// (0x00061b82) main_cset6_slider_pane_g18_ParamLimits

0x7ca6,	// (0x00061b82) main_cset6_slider_pane_g18

0x7cb2,	// (0x00061b8e) main_cset6_slider_pane_g19_ParamLimits

0x7cb2,	// (0x00061b8e) main_cset6_slider_pane_g19

0xc7d8,	// (0x000666b4) bg_main_mobtv_pane_ParamLimits

0xc7d8,	// (0x000666b4) bg_main_mobtv_pane

0x7fdf,	// (0x00061ebb) main_mobtv_info_pane

0x7fe8,	// (0x00061ec4) main_mobtv_loading_pane_ParamLimits

0x7fe8,	// (0x00061ec4) main_mobtv_loading_pane

0xc7e6,	// (0x000666c2) main_mobtv_pg_channel_list_pane

0xc7f0,	// (0x000666cc) main_mobtv_pg_hdr_pane

0x7ff5,	// (0x00061ed1) main_mobtv_programe_curr_pane_ParamLimits

0x7ff5,	// (0x00061ed1) main_mobtv_programe_curr_pane

0x8002,	// (0x00061ede) main_mobtv_programe_next_pane_ParamLimits

0x8002,	// (0x00061ede) main_mobtv_programe_next_pane

0xc7f9,	// (0x000666d5) popup_mobtv_noti_window

0xe19c,	// (0x00068078) main_tv_pg_hdr_pane_g1

0xc801,	// (0x000666dd) main_tv_pg_hdr_pane_g2

0xc809,	// (0x000666e5) main_tv_pg_hdr_pane_g3

0xc811,	// (0x000666ed) main_tv_pg_hdr_pane_g4

0xc819,	// (0x000666f5) main_tv_pg_hdr_pane_g5

0xc823,	// (0x000666ff) main_tv_pg_hdr_pane_g6

0xc82d,	// (0x00066709) main_tv_pg_hdr_pane_g7

0xc837,	// (0x00066713) main_tv_pg_hdr_pane_g8

0xc841,	// (0x0006671d) main_tv_pg_hdr_pane_g9

0xc84b,	// (0x00066727) main_tv_pg_hdr_pane_g10

0xc855,	// (0x00066731) main_tv_pg_hdr_pane_g11

0x000a,

0xfb12,	// (0x000699ee) main_tv_pg_hdr_pane_g

0xc85f,	// (0x0006673b) main_tv_pg_hdr_pane_t1

0xc86d,	// (0x00066749) main_tv_pg_hdr_pane_t2

0xc87b,	// (0x00066757) main_tv_pg_hdr_pane_t3

0xc88b,	// (0x00066767) main_tv_pg_hdr_pane_t4

0xc89b,	// (0x00066777) main_tv_pg_hdr_pane_t5

0x0004,

0xfb29,	// (0x00069a05) main_tv_pg_hdr_pane_t

0xc8ab,	// (0x00066787) single_mobtv_pg_channel_pane_ParamLimits

0xc8ab,	// (0x00066787) single_mobtv_pg_channel_pane

0xc8bd,	// (0x00066799) single_mobtv_pg_channel_table_pane

0xc8c6,	// (0x000667a2) single_mobtv_pg_channel_thumb_pane

0xc8cf,	// (0x000667ab) single_tv_pg_channel_pane_g1

0xc8d8,	// (0x000667b4) single_tv_pg_channel_pane_g2

0x0001,

0xfb34,	// (0x00069a10) single_tv_pg_channel_pane_g

0xe3ff,	// (0x000682db) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe3ff,	// (0x000682db) bg_single_mobtv_pg_channel_thumb_pane

0xc8e1,	// (0x000667bd) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc8e1,	// (0x000667bd) single_mobtv_pg_channel_thumb_pane_g1

0xc8ef,	// (0x000667cb) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xc8ef,	// (0x000667cb) single_mobtv_pg_channel_thumb_pane_g2

0xc8fb,	// (0x000667d7) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xc8fb,	// (0x000667d7) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb39,	// (0x00069a15) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb39,	// (0x00069a15) single_mobtv_pg_channel_thumb_pane_g

0xc907,	// (0x000667e3) single_mobtv_pg_channel_thumb_pane_t1

0xc915,	// (0x000667f1) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb40,	// (0x00069a1c) single_mobtv_pg_channel_thumb_pane_t

0xe19c,	// (0x00068078) bg_single_mobtv_pg_channel_table_pane_g1

0xe19c,	// (0x00068078) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x049c,	// (0x0005a378) bg_single_mobtv_pg_channel_table_pane_g

0xc923,	// (0x000667ff) single_mobtv_pg_channel_table_pane_t1

0xc931,	// (0x0006680d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb45,	// (0x00069a21) single_mobtv_pg_channel_table_pane_t

0x8017,	// (0x00061ef3) main_mobtv_info_pane_g1_ParamLimits

0x8017,	// (0x00061ef3) main_mobtv_info_pane_g1

0x8035,	// (0x00061f11) main_mobtv_info_pane_t1_ParamLimits

0x8035,	// (0x00061f11) main_mobtv_info_pane_t1

0x80ad,	// (0x00061f89) main_mobtv_info_pane_t2_ParamLimits

0x80ad,	// (0x00061f89) main_mobtv_info_pane_t2

0x0002,

0xfb4f,	// (0x00069a2b) main_mobtv_info_pane_t_ParamLimits

0xfb4f,	// (0x00069a2b) main_mobtv_info_pane_t

0x813c,	// (0x00062018) wait_bar_pane_cp05

0x814e,	// (0x0006202a) main_mobtv_loading_pane_g1_ParamLimits

0x814e,	// (0x0006202a) main_mobtv_loading_pane_g1

0x8161,	// (0x0006203d) main_mobtv_loading_pane_g2_ParamLimits

0x8161,	// (0x0006203d) main_mobtv_loading_pane_g2

0x816d,	// (0x00062049) main_mobtv_loading_pane_g3_ParamLimits

0x816d,	// (0x00062049) main_mobtv_loading_pane_g3

0x0002,

0xfb56,	// (0x00069a32) main_mobtv_loading_pane_g_ParamLimits

0xfb56,	// (0x00069a32) main_mobtv_loading_pane_g

0xc93f,	// (0x0006681b) main_mobtv_loading_pane_t1_ParamLimits

0xc93f,	// (0x0006681b) main_mobtv_loading_pane_t1

0xc957,	// (0x00066833) main_mobtv_loading_pane_t2_ParamLimits

0xc957,	// (0x00066833) main_mobtv_loading_pane_t2

0x0001,

0xfb5d,	// (0x00069a39) main_mobtv_loading_pane_t_ParamLimits

0xfb5d,	// (0x00069a39) main_mobtv_loading_pane_t

0x8180,	// (0x0006205c) wait_bar_pane_cp06_ParamLimits

0x8180,	// (0x0006205c) wait_bar_pane_cp06

0xc97b,	// (0x00066857) main_mobtv_programe_curr_pane_t1

0xc989,	// (0x00066865) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb62,	// (0x00069a3e) main_mobtv_programe_curr_pane_t

0xc997,	// (0x00066873) main_mobtv_programe_next_pane_t1

0xc9a5,	// (0x00066881) main_mobtv_programe_next_pane_t2

0xc9b3,	// (0x0006688f) main_mobtv_programe_next_pane_t3

0x0002,

0xfb67,	// (0x00069a43) main_mobtv_programe_next_pane_t

0x0df7,	// (0x0005acd3) bg_popup_mobtv_noti_window_pane

0xc9c1,	// (0x0006689d) popup_mobtv_noti_window_g1

0xc9c9,	// (0x000668a5) popup_mobtv_noti_window_t1

0xc9d7,	// (0x000668b3) popup_mobtv_noti_window_t2

0x0001,

0xfb6e,	// (0x00069a4a) popup_mobtv_noti_window_t

0xe19c,	// (0x00068078) bg_popup_mobtv_noti_window_pane_g1

0x0df7,	// (0x0005acd3) sc_clock_pane

0x0df7,	// (0x0005acd3) main_fs_bigclock_pane

0x781b,	// (0x000616f7) blid2_tripm_pane_t4_ParamLimits

0x781b,	// (0x000616f7) blid2_tripm_pane_t4

0x818f,	// (0x0006206b) sc_clock_pane_g1_ParamLimits

0x818f,	// (0x0006206b) sc_clock_pane_g1

0x81a1,	// (0x0006207d) sc_clock_pane_t1_ParamLimits

0x81a1,	// (0x0006207d) sc_clock_pane_t1

0x81c3,	// (0x0006209f) sc_clock_pane_t2_ParamLimits

0x81c3,	// (0x0006209f) sc_clock_pane_t2

0x81db,	// (0x000620b7) sc_clock_pane_t3_ParamLimits

0x81db,	// (0x000620b7) sc_clock_pane_t3

0x0004,

0xfb73,	// (0x00069a4f) sc_clock_pane_t_ParamLimits

0xfb73,	// (0x00069a4f) sc_clock_pane_t

0x8f9d,	// (0x00062e79) main_fs_bigclock_indicator_pane_ParamLimits

0x8f9d,	// (0x00062e79) main_fs_bigclock_indicator_pane

0xe3cf,	// (0x000682ab) main_fs_bigclock_pane_g1_ParamLimits

0xe3cf,	// (0x000682ab) main_fs_bigclock_pane_g1

0x8fa9,	// (0x00062e85) main_fs_bigclock_pane_t1_ParamLimits

0x8fa9,	// (0x00062e85) main_fs_bigclock_pane_t1

0x8fbb,	// (0x00062e97) main_fs_bigclock_pane_t2_ParamLimits

0x8fbb,	// (0x00062e97) main_fs_bigclock_pane_t2

0x8fcf,	// (0x00062eab) main_fs_bigclock_pane_t3_ParamLimits

0x8fcf,	// (0x00062eab) main_fs_bigclock_pane_t3

0x0002,

0xfd72,	// (0x00069c4e) main_fs_bigclock_pane_t_ParamLimits

0xfd72,	// (0x00069c4e) main_fs_bigclock_pane_t

0xd5c9,	// (0x000674a5) main_fs_bigclock_indicator_pane_g1

0xc6a3,	// (0x0006657f) ncim_query_content_pane_g2_ParamLimits

0xc6a3,	// (0x0006657f) ncim_query_content_pane_g2

0x0001,

0xfb00,	// (0x000699dc) ncim_query_content_pane_g_ParamLimits

0xfb00,	// (0x000699dc) ncim_query_content_pane_g

0x81f2,	// (0x000620ce) sc_clock_pane_t4_ParamLimits

0x81f2,	// (0x000620ce) sc_clock_pane_t4

0x9866,	// (0x00063742) main_radioblah_pane

0xeb46,	// (0x00068a22) cell_call4_button_pane_t1_copy1_ParamLimits

0xeb46,	// (0x00068a22) cell_call4_button_pane_t1_copy1

0x7e4b,	// (0x00061d27) main_ncimui_pane_t1_ParamLimits

0x7e4b,	// (0x00061d27) main_ncimui_pane_t1

0x7e65,	// (0x00061d41) main_ncimui_pane_t2_ParamLimits

0x7e65,	// (0x00061d41) main_ncimui_pane_t2

0x0002,

0xfaf9,	// (0x000699d5) main_ncimui_pane_t_ParamLimits

0xfaf9,	// (0x000699d5) main_ncimui_pane_t

0xcb05,	// (0x000669e1) main_radioblah_anim_pane_ParamLimits

0xcb05,	// (0x000669e1) main_radioblah_anim_pane

0xcb16,	// (0x000669f2) main_radioblah_info_pane_ParamLimits

0xcb16,	// (0x000669f2) main_radioblah_info_pane

0xcb2a,	// (0x00066a06) main_radioblah_pane_t1_ParamLimits

0xcb2a,	// (0x00066a06) main_radioblah_pane_t1

0xcb46,	// (0x00066a22) main_radioblah_pane_t2_ParamLimits

0xcb46,	// (0x00066a22) main_radioblah_pane_t2

0x0003,

0xfb94,	// (0x00069a70) main_radioblah_pane_t_ParamLimits

0xfb94,	// (0x00069a70) main_radioblah_pane_t

0x829b,	// (0x00062177) main_radioblah_rocker_ctrl_pane_ParamLimits

0x829b,	// (0x00062177) main_radioblah_rocker_ctrl_pane

0xcb8e,	// (0x00066a6a) main_radioblah_info_pane_t1_ParamLimits

0xcb8e,	// (0x00066a6a) main_radioblah_info_pane_t1

0x82f3,	// (0x000621cf) main_radioblah_info_pane_t2_ParamLimits

0x82f3,	// (0x000621cf) main_radioblah_info_pane_t2

0x0003,

0xfb9d,	// (0x00069a79) main_radioblah_info_pane_t_ParamLimits

0xfb9d,	// (0x00069a79) main_radioblah_info_pane_t

0xe19c,	// (0x00068078) main_radioblah_rocker_ctrl_pane_g1

0x83a3,	// (0x0006227f) main_radioblah_rocker_ctrl_pane_g2

0x83ab,	// (0x00062287) main_radioblah_rocker_ctrl_pane_g3

0x83b3,	// (0x0006228f) main_radioblah_rocker_ctrl_pane_g4

0x83bb,	// (0x00062297) main_radioblah_rocker_ctrl_pane_g5

0x83c3,	// (0x0006229f) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfba6,	// (0x00069a82) main_radioblah_rocker_ctrl_pane_g

0x7e15,	// (0x00061cf1) main_cset_text2_pane_t1_copy1_ParamLimits

0xdc77,	// (0x00067b53) cam4_image_uncrop_qvga_pane

0xdcde,	// (0x00067bba) vid4_image_uncrop_qcif_pane

0xde23,	// (0x00067cff) cam6_image_uncrop_qvga_pane_ParamLimits

0xde23,	// (0x00067cff) cam6_image_uncrop_qvga_pane

0xc2fd,	// (0x000661d9) vid6_image_uncrop_qcif_pane_ParamLimits

0xc2fd,	// (0x000661d9) vid6_image_uncrop_qcif_pane

0x0df7,	// (0x0005acd3) bg_popup_preview_window_pane_cp03

0xc655,	// (0x00066531) list_cset_text2_pane

0xc65d,	// (0x00066539) main_cset6_text2_pane_g1

0xc665,	// (0x00066541) main_cset6_text2_pane_t1

0x83cb,	// (0x000622a7) list_cset_text2_pane_t1_ParamLimits

0x83cb,	// (0x000622a7) list_cset_text2_pane_t1

0x9866,	// (0x00063742) main_radioblah_pane_ParamLimits

0x8128,	// (0x00062004) main_mobtv_info_pane_t3_ParamLimits

0x8128,	// (0x00062004) main_mobtv_info_pane_t3

0x8289,	// (0x00062165) main_radioblah_pane_g1

0x82c3,	// (0x0006219f) main_radioblah_info_pane_g1

0x8348,	// (0x00062224) main_radioblah_info_pane_t3_ParamLimits

0x8348,	// (0x00062224) main_radioblah_info_pane_t3

0x2a41,	// (0x0005c91d) highlight_cell_cale_month_pane_ParamLimits

0x2a41,	// (0x0005c91d) highlight_cell_cale_month_pane

0x0df7,	// (0x0005acd3) main_phob_fisheye_pane

0xe4e1,	// (0x000683bd) scroll_pane_cp0031_ParamLimits

0xe4e1,	// (0x000683bd) scroll_pane_cp0031

0xc40b,	// (0x000662e7) wait_bar_pane_cp08_ParamLimits

0x7c01,	// (0x00061add) cset_list_set_pane_copy1_ParamLimits

0xcbc8,	// (0x00066aa4) highlight_cell_cale_month_pane_g1

0x83e4,	// (0x000622c0) highlight_cell_cale_month_pane_t1

0xf0a8,	// (0x00068f84) list_gen_pane_cp01

0xed0f,	// (0x00068beb) scroll_pane_01

0xcbd0,	// (0x00066aac) list_single_double_fisheye_pane

0x83f2,	// (0x000622ce) list_double_fisheye_pane_g1_ParamLimits

0x83f2,	// (0x000622ce) list_double_fisheye_pane_g1

0x83fe,	// (0x000622da) list_double_fisheye_pane_g2_ParamLimits

0x83fe,	// (0x000622da) list_double_fisheye_pane_g2

0x8412,	// (0x000622ee) list_double_fisheye_pane_g3_ParamLimits

0x8412,	// (0x000622ee) list_double_fisheye_pane_g3

0x0004,

0xfbb3,	// (0x00069a8f) list_double_fisheye_pane_g_ParamLimits

0xfbb3,	// (0x00069a8f) list_double_fisheye_pane_g

0x843b,	// (0x00062317) list_double_fisheye_pane_t1_ParamLimits

0x843b,	// (0x00062317) list_double_fisheye_pane_t1

0x8456,	// (0x00062332) list_double_fisheye_pane_t2_ParamLimits

0x8456,	// (0x00062332) list_double_fisheye_pane_t2

0x0001,

0xfbbe,	// (0x00069a9a) list_double_fisheye_pane_t_ParamLimits

0xfbbe,	// (0x00069a9a) list_double_fisheye_pane_t

0x0df7,	// (0x0005acd3) main_call5_pane

0x821d,	// (0x000620f9) sc_swipe_pane_ParamLimits

0x821d,	// (0x000620f9) sc_swipe_pane

0x848b,	// (0x00062367) call5_image_pane_ParamLimits

0x848b,	// (0x00062367) call5_image_pane

0x84a8,	// (0x00062384) call5_swipe_1_pane_ParamLimits

0x84a8,	// (0x00062384) call5_swipe_1_pane

0x84bb,	// (0x00062397) call5_swipe_2_pane_ParamLimits

0x84bb,	// (0x00062397) call5_swipe_2_pane

0x84e6,	// (0x000623c2) popup_call5_audio_first_window_ParamLimits

0x84e6,	// (0x000623c2) popup_call5_audio_first_window

0xe3ff,	// (0x000682db) call5_swipe_1_pane_g1_ParamLimits

0xe3ff,	// (0x000682db) call5_swipe_1_pane_g1

0xcbd9,	// (0x00066ab5) call5_swipe_1_pane_g2_ParamLimits

0xcbd9,	// (0x00066ab5) call5_swipe_1_pane_g2

0x0001,

0xfbc3,	// (0x00069a9f) call5_swipe_1_pane_g_ParamLimits

0xfbc3,	// (0x00069a9f) call5_swipe_1_pane_g

0xcbe5,	// (0x00066ac1) call5_swipe_1_pane_t1_ParamLimits

0xcbe5,	// (0x00066ac1) call5_swipe_1_pane_t1

0xe3ff,	// (0x000682db) call5_swipe_2_pane_g1_ParamLimits

0xe3ff,	// (0x000682db) call5_swipe_2_pane_g1

0xcbfa,	// (0x00066ad6) call5_swipe_2_pane_g2_ParamLimits

0xcbfa,	// (0x00066ad6) call5_swipe_2_pane_g2

0x0001,

0xfbc8,	// (0x00069aa4) call5_swipe_2_pane_g_ParamLimits

0xfbc8,	// (0x00069aa4) call5_swipe_2_pane_g

0xcc06,	// (0x00066ae2) call5_swipe_2_pane_t1_ParamLimits

0xcc06,	// (0x00066ae2) call5_swipe_2_pane_t1

0xcc1b,	// (0x00066af7) sc_swipe_pane_g1_ParamLimits

0xcc1b,	// (0x00066af7) sc_swipe_pane_g1

0xcc28,	// (0x00066b04) sc_swipe_pane_g2_ParamLimits

0xcc28,	// (0x00066b04) sc_swipe_pane_g2

0x0001,

0xfbcd,	// (0x00069aa9) sc_swipe_pane_g_ParamLimits

0xfbcd,	// (0x00069aa9) sc_swipe_pane_g

0xcc34,	// (0x00066b10) sc_swipe_pane_t1_ParamLimits

0xcc34,	// (0x00066b10) sc_swipe_pane_t1

0x0df7,	// (0x0005acd3) main_cmail_launcher_pane

0x84f7,	// (0x000623d3) aid_size_cell_cmail_l_ParamLimits

0x84f7,	// (0x000623d3) aid_size_cell_cmail_l

0x8511,	// (0x000623ed) grid_cmail_l_pane_ParamLimits

0x8511,	// (0x000623ed) grid_cmail_l_pane

0x852c,	// (0x00062408) cell_cmail_l_pane_ParamLimits

0x852c,	// (0x00062408) cell_cmail_l_pane

0x8552,	// (0x0006242e) cell_cmail_l_pane_g1_ParamLimits

0x8552,	// (0x0006242e) cell_cmail_l_pane_g1

0x855e,	// (0x0006243a) cell_cmail_l_pane_t1_ParamLimits

0x855e,	// (0x0006243a) cell_cmail_l_pane_t1

0xcc49,	// (0x00066b25) cell_cmail_l_pane_t2_ParamLimits

0xcc49,	// (0x00066b25) cell_cmail_l_pane_t2

0x0001,

0xfbd2,	// (0x00069aae) cell_cmail_l_pane_t_ParamLimits

0xfbd2,	// (0x00069aae) cell_cmail_l_pane_t

0x9866,	// (0x00063742) grid_highlight_pane_cp018_ParamLimits

0x9866,	// (0x00063742) grid_highlight_pane_cp018

0x0f17,	// (0x0005adf3) main2_pane_ParamLimits

0x0f17,	// (0x0005adf3) main2_pane

0xa0a2,	// (0x00063f7e) popup_sp_fs_action_menu_bg_pane_g1

0xa0aa,	// (0x00063f86) popup_sp_fs_action_menu_bg_pane_g2

0xa0b2,	// (0x00063f8e) popup_sp_fs_action_menu_bg_pane_g3

0xa0ba,	// (0x00063f96) popup_sp_fs_action_menu_bg_pane_g4

0xa0c2,	// (0x00063f9e) popup_sp_fs_action_menu_bg_pane_g5

0xa0ca,	// (0x00063fa6) popup_sp_fs_action_menu_bg_pane_g6

0xa0d2,	// (0x00063fae) popup_sp_fs_action_menu_bg_pane_g7

0xa0da,	// (0x00063fb6) popup_sp_fs_action_menu_bg_pane_g8

0xa0e2,	// (0x00063fbe) popup_sp_fs_action_menu_bg_pane_g9

0xa0ea,	// (0x00063fc6) popup_sp_fs_action_menu_bg_pane_g10

0xa0ea,	// (0x00063fc6) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00069088) popup_sp_fs_action_menu_bg_pane_g

0x1cbb,	// (0x0005bb97) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1cbb,	// (0x0005bb97) list_medium_line_x2_t3_g3_g1

0x1cc7,	// (0x0005bba3) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1cc7,	// (0x0005bba3) list_medium_line_x2_t3_g3_g2

0x1cd3,	// (0x0005bbaf) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1cd3,	// (0x0005bbaf) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x00069138) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x00069138) list_medium_line_x2_t3_g3_g

0x1cdf,	// (0x0005bbbb) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1cdf,	// (0x0005bbbb) list_medium_line_x2_t3_g3_t1

0x1cf4,	// (0x0005bbd0) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1cf4,	// (0x0005bbd0) list_medium_line_x2_t3_g3_t2

0x1d08,	// (0x0005bbe4) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1d08,	// (0x0005bbe4) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0006913f) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0006913f) list_medium_line_x2_t3_g3_t

0x1cbb,	// (0x0005bb97) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1cbb,	// (0x0005bb97) list_medium_line_x2_t3_g2_g1

0x1cd3,	// (0x0005bbaf) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1cd3,	// (0x0005bbaf) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x00069146) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x00069146) list_medium_line_x2_t3_g2_g

0x1d1d,	// (0x0005bbf9) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1d1d,	// (0x0005bbf9) list_medium_line_x2_t3_g2_t1

0x1d33,	// (0x0005bc0f) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1d33,	// (0x0005bc0f) list_medium_line_x2_t3_g2_t2

0x1d08,	// (0x0005bbe4) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1d08,	// (0x0005bbe4) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0006914b) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0006914b) list_medium_line_x2_t3_g2_t

0x1cbb,	// (0x0005bb97) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1cbb,	// (0x0005bb97) list_medium_line_x2_t4_g4_g1

0x1d45,	// (0x0005bc21) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1d45,	// (0x0005bc21) list_medium_line_x2_t4_g4_g2

0x1cc7,	// (0x0005bba3) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1cc7,	// (0x0005bba3) list_medium_line_x2_t4_g4_g3

0x1d51,	// (0x0005bc2d) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1d51,	// (0x0005bc2d) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x00069152) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x00069152) list_medium_line_x2_t4_g4_g

0x1d5d,	// (0x0005bc39) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1d5d,	// (0x0005bc39) list_medium_line_x2_t4_g4_t1

0x1d77,	// (0x0005bc53) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1d77,	// (0x0005bc53) list_medium_line_x2_t4_g4_t2

0x1d8d,	// (0x0005bc69) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1d8d,	// (0x0005bc69) list_medium_line_x2_t4_g4_t3

0x1da2,	// (0x0005bc7e) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1da2,	// (0x0005bc7e) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0006915b) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0006915b) list_medium_line_x2_t4_g4_t

0x1cbb,	// (0x0005bb97) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1cbb,	// (0x0005bb97) list_medium_line_x2_t2_g4_g1

0x1d45,	// (0x0005bc21) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1d45,	// (0x0005bc21) list_medium_line_x2_t2_g4_g2

0x1cc7,	// (0x0005bba3) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1cc7,	// (0x0005bba3) list_medium_line_x2_t2_g4_g3

0x1cd3,	// (0x0005bbaf) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1cd3,	// (0x0005bbaf) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x000691c2) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x000691c2) list_medium_line_x2_t2_g4_g

0x2a5f,	// (0x0005c93b) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2a5f,	// (0x0005c93b) list_medium_line_x2_t2_g4_t1

0x1d08,	// (0x0005bbe4) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1d08,	// (0x0005bbe4) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x000691cb) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x000691cb) list_medium_line_x2_t2_g4_t

0x1cbb,	// (0x0005bb97) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1cbb,	// (0x0005bb97) list_medium_line_x2_t2_g3_g1

0x1cc7,	// (0x0005bba3) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1cc7,	// (0x0005bba3) list_medium_line_x2_t2_g3_g2

0x1cd3,	// (0x0005bbaf) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1cd3,	// (0x0005bbaf) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x00069138) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x00069138) list_medium_line_x2_t2_g3_g

0x2a74,	// (0x0005c950) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2a74,	// (0x0005c950) list_medium_line_x2_t2_g3_t1

0x1d08,	// (0x0005bbe4) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1d08,	// (0x0005bbe4) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x000691d0) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x000691d0) list_medium_line_x2_t2_g3_t

0x2b9a,	// (0x0005ca76) main_sp_fs_list_pane_ParamLimits

0x2b9a,	// (0x0005ca76) main_sp_fs_list_pane

0x2ba6,	// (0x0005ca82) sp_fs_scroll_pane_ParamLimits

0x2ba6,	// (0x0005ca82) sp_fs_scroll_pane

0x2bb2,	// (0x0005ca8e) list_medium_line_x2_t3_t1

0x2bc2,	// (0x0005ca9e) list_medium_line_x2_t3_t2

0x2bd0,	// (0x0005caac) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x0006921b) list_medium_line_x2_t3_t

0x2bde,	// (0x0005caba) list_medium_line_x3_t4_t1

0x2bee,	// (0x0005caca) list_medium_line_x3_t4_t2

0x2bfc,	// (0x0005cad8) list_medium_line_x3_t4_t3

0x2bd0,	// (0x0005caac) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x00069222) list_medium_line_x3_t4_t

0x2c0a,	// (0x0005cae6) list_medium_line_x4_t5_t1

0x2c1a,	// (0x0005caf6) list_medium_line_x4_t5_t2

0x2bfc,	// (0x0005cad8) list_medium_line_x4_t5_t3

0x2c28,	// (0x0005cb04) list_medium_line_x4_t5_t4

0x2bd0,	// (0x0005caac) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x0006922b) list_medium_line_x4_t5_t

0x1cbb,	// (0x0005bb97) list_medium_line_t4_g4_g1_ParamLimits

0x1cbb,	// (0x0005bb97) list_medium_line_t4_g4_g1

0x1d51,	// (0x0005bc2d) list_medium_line_t4_g4_g2_ParamLimits

0x1d51,	// (0x0005bc2d) list_medium_line_t4_g4_g2

0x2c36,	// (0x0005cb12) list_medium_line_t4_g4_g3_ParamLimits

0x2c36,	// (0x0005cb12) list_medium_line_t4_g4_g3

0x1cd3,	// (0x0005bbaf) list_medium_line_t4_g4_g4_ParamLimits

0x1cd3,	// (0x0005bbaf) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x00069236) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x00069236) list_medium_line_t4_g4_g

0x2c42,	// (0x0005cb1e) list_medium_line_t4_g4_t1_ParamLimits

0x2c42,	// (0x0005cb1e) list_medium_line_t4_g4_t1

0x2c57,	// (0x0005cb33) list_medium_line_t4_g4_t2_ParamLimits

0x2c57,	// (0x0005cb33) list_medium_line_t4_g4_t2

0x2c6c,	// (0x0005cb48) list_medium_line_t4_g4_t3_ParamLimits

0x2c6c,	// (0x0005cb48) list_medium_line_t4_g4_t3

0x1d08,	// (0x0005bbe4) list_medium_line_t4_g4_t4_ParamLimits

0x1d08,	// (0x0005bbe4) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0006923f) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0006923f) list_medium_line_t4_g4_t

0x2d44,	// (0x0005cc20) chi_dic_find_pane_g1

0x3eaa,	// (0x0005dd86) main_tport_pane

0x6d82,	// (0x00060c5e) list_medium_line_plain_t1

0x6e34,	// (0x00060d10) list_medium_line_t2_g2_g1_ParamLimits

0x6e34,	// (0x00060d10) list_medium_line_t2_g2_g1

0x6e40,	// (0x00060d1c) list_medium_line_t2_g2_g2_ParamLimits

0x6e40,	// (0x00060d1c) list_medium_line_t2_g2_g2

0x0001,

0xf945,	// (0x00069821) list_medium_line_t2_g2_g_ParamLimits

0xf945,	// (0x00069821) list_medium_line_t2_g2_g

0x6e4c,	// (0x00060d28) list_medium_line_t2_g2_t1_ParamLimits

0x6e4c,	// (0x00060d28) list_medium_line_t2_g2_t1

0x6e66,	// (0x00060d42) list_medium_line_t2_g2_t2_ParamLimits

0x6e66,	// (0x00060d42) list_medium_line_t2_g2_t2

0x0001,

0xf94a,	// (0x00069826) list_medium_line_t2_g2_t_ParamLimits

0xf94a,	// (0x00069826) list_medium_line_t2_g2_t

0x74f9,	// (0x000613d5) aid_sp_fs_list_icon_a_sm

0x7501,	// (0x000613dd) aid_sp_fs_list_icon_d

0x7509,	// (0x000613e5) aid_sp_fs_text_primary

0x7512,	// (0x000613ee) aid_sp_fs_text_secondary

0x751b,	// (0x000613f7) list_medium_line

0x751b,	// (0x000613f7) list_medium_line_g2

0x751b,	// (0x000613f7) list_medium_line_g3

0x751b,	// (0x000613f7) list_medium_line_plain

0x751b,	// (0x000613f7) list_medium_line_plain_t2

0x751b,	// (0x000613f7) list_medium_line_plain_t3

0x751b,	// (0x000613f7) list_medium_line_right_icon

0x751b,	// (0x000613f7) list_medium_line_right_iconx2

0x751b,	// (0x000613f7) list_medium_line_t2

0x751b,	// (0x000613f7) list_medium_line_t2_g2

0x751b,	// (0x000613f7) list_medium_line_t2_g3

0x751b,	// (0x000613f7) list_medium_line_t2_right_icon

0x751b,	// (0x000613f7) list_medium_line_t2_right_iconx2

0x751b,	// (0x000613f7) list_medium_line_t3

0x751b,	// (0x000613f7) list_medium_line_t3_g2

0x751b,	// (0x000613f7) list_medium_line_t3_g3

0x751b,	// (0x000613f7) list_medium_line_t3_right_iconx2

0x7524,	// (0x00061400) list_medium_line_t4_g4

0x752d,	// (0x00061409) list_medium_line_x2

0x752d,	// (0x00061409) list_medium_line_x2_t2_g2

0x752d,	// (0x00061409) list_medium_line_x2_t2_g3

0x752d,	// (0x00061409) list_medium_line_x2_t2_g4

0x752d,	// (0x00061409) list_medium_line_x2_t3

0x752d,	// (0x00061409) list_medium_line_x2_t3_g2

0x752d,	// (0x00061409) list_medium_line_x2_t3_g3

0x752d,	// (0x00061409) list_medium_line_x2_t3_g4

0x752d,	// (0x00061409) list_medium_line_x2_t4_g2

0x752d,	// (0x00061409) list_medium_line_x2_t4_g4

0x7536,	// (0x00061412) list_medium_line_x3

0x7536,	// (0x00061412) list_medium_line_x3_t4

0x7536,	// (0x00061412) list_medium_line_x3_t4_g4

0x7524,	// (0x00061400) list_medium_line_x4_t4

0x7524,	// (0x00061400) list_medium_line_x4_t4_g7

0x7524,	// (0x00061400) list_medium_line_x4_t5

0x753f,	// (0x0006141b) list_single_fs_dyc_pane_ParamLimits

0x753f,	// (0x0006141b) list_single_fs_dyc_pane

0x1cbb,	// (0x0005bb97) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1cbb,	// (0x0005bb97) list_medium_line_x4_t4_g7_g1

0xc584,	// (0x00066460) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc584,	// (0x00066460) list_medium_line_x4_t4_g7_g2

0xc590,	// (0x0006646c) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc590,	// (0x0006646c) list_medium_line_x4_t4_g7_g3

0xc59f,	// (0x0006647b) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc59f,	// (0x0006647b) list_medium_line_x4_t4_g7_g4

0xc5ab,	// (0x00066487) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc5ab,	// (0x00066487) list_medium_line_x4_t4_g7_g5

0xc5ba,	// (0x00066496) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc5ba,	// (0x00066496) list_medium_line_x4_t4_g7_g6

0xc5c9,	// (0x000664a5) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc5c9,	// (0x000664a5) list_medium_line_x4_t4_g7_g7

0x0006,

0xfadf,	// (0x000699bb) list_medium_line_x4_t4_g7_g_ParamLimits

0xfadf,	// (0x000699bb) list_medium_line_x4_t4_g7_g

0xc5d5,	// (0x000664b1) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc5d5,	// (0x000664b1) list_medium_line_x4_t4_g7_t1

0xc5ea,	// (0x000664c6) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc5ea,	// (0x000664c6) list_medium_line_x4_t4_g7_t2

0xc5ff,	// (0x000664db) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc5ff,	// (0x000664db) list_medium_line_x4_t4_g7_t3

0xc614,	// (0x000664f0) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc614,	// (0x000664f0) list_medium_line_x4_t4_g7_t4

0xc626,	// (0x00066502) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc626,	// (0x00066502) list_medium_line_x4_t4_g7_t5

0x0004,

0xfaee,	// (0x000699ca) list_medium_line_x4_t4_g7_t_ParamLimits

0xfaee,	// (0x000699ca) list_medium_line_x4_t4_g7_t

0xc638,	// (0x00066514) list_single_dyc_row_pane_ParamLimits

0xc638,	// (0x00066514) list_single_dyc_row_pane

0x8478,	// (0x00062354) call5_gesture_pane_ParamLimits

0x8478,	// (0x00062354) call5_gesture_pane

0x84ce,	// (0x000623aa) call5_windows_pane_ParamLimits

0x84ce,	// (0x000623aa) call5_windows_pane

0x8574,	// (0x00062450) call5_swipe_1_pane_cp_ParamLimits

0x8574,	// (0x00062450) call5_swipe_1_pane_cp

0x8580,	// (0x0006245c) call5_swipe_2_pane_cp_ParamLimits

0x8580,	// (0x0006245c) call5_swipe_2_pane_cp

0xac39,	// (0x00064b15) call5_image_pane_cp

0x858c,	// (0x00062468) popup_call5_audio_first_window_cp_ParamLimits

0x858c,	// (0x00062468) popup_call5_audio_first_window_cp

0xcc1b,	// (0x00066af7) call5_swipe_1_pane_g1_cp_ParamLimits

0xcc1b,	// (0x00066af7) call5_swipe_1_pane_g1_cp

0xcc5b,	// (0x00066b37) call5_swipe_1_pane_g2_cp

0xcc34,	// (0x00066b10) call5_swipe_1_pane_t1_cp_ParamLimits

0xcc34,	// (0x00066b10) call5_swipe_1_pane_t1_cp

0xcc1b,	// (0x00066af7) call5_swipe_2_pane_g1_cp_ParamLimits

0xcc1b,	// (0x00066af7) call5_swipe_2_pane_g1_cp

0xcc63,	// (0x00066b3f) call5_swipe_2_pane_g2_cp

0xcc6b,	// (0x00066b47) call5_swipe_2_pane_t1_cp_ParamLimits

0xcc6b,	// (0x00066b47) call5_swipe_2_pane_t1_cp

0x9866,	// (0x00063742) main_sp_fs_email_pane

0xcc80,	// (0x00066b5c) main_sp_fs_listscroll_pane_te

0xcc89,	// (0x00066b65) popup_sp_fs_action_menu_pane_ParamLimits

0xcc89,	// (0x00066b65) popup_sp_fs_action_menu_pane

0xe19c,	// (0x00068078) bg_sp_fs_ctrlbar_pane_g1

0xcccd,	// (0x00066ba9) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xccd6,	// (0x00066bb2) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xccdf,	// (0x00066bbb) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe19c,	// (0x00068078) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbd7,	// (0x00069ab3) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xdf78,	// (0x00067e54) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xdf78,	// (0x00067e54) bg_sp_fs_ctrlbar_ddmenu_pane

0xcce8,	// (0x00066bc4) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xcce8,	// (0x00066bc4) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xccf4,	// (0x00066bd0) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xccf4,	// (0x00066bd0) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbe0,	// (0x00069abc) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbe0,	// (0x00069abc) main_sp_fs_ctrlbar_ddmenu_pane_g

0xcd00,	// (0x00066bdc) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xcd00,	// (0x00066bdc) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xcd1a,	// (0x00066bf6) list_medium_line_t2_right_icon_g1

0x859a,	// (0x00062476) list_medium_line_t2_right_icon_t1

0x85aa,	// (0x00062486) list_medium_line_t2_right_icon_t2

0x0001,

0xfbe5,	// (0x00069ac1) list_medium_line_t2_right_icon_t

0xc07b,	// (0x00065f57) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc07b,	// (0x00065f57) bg_sp_fs_ctrlbar_pane

0x8604,	// (0x000624e0) main_sp_fs_ctrlbar_button_pane_cp01

0x860e,	// (0x000624ea) main_sp_fs_ctrlbar_ddmenu_pane

0xcd5a,	// (0x00066c36) main_sp_fs_ctrlbar_pane_g1

0xcd66,	// (0x00066c42) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfbea,	// (0x00069ac6) main_sp_fs_ctrlbar_pane_g

0xcd72,	// (0x00066c4e) main_sp_fs_ctrlbar_pane_t1

0x8618,	// (0x000624f4) main_sp_fs_ctrlbar_pane

0x863c,	// (0x00062518) main_sp_fs_listscroll_pane_te_cp01

0x865c,	// (0x00062538) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x865c,	// (0x00062538) popup_sp_fs_action_menu_pane_cp01

0x9866,	// (0x00063742) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9866,	// (0x00063742) bg_sp_fs_highlight_list_pane_cp01

0xcd87,	// (0x00066c63) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xcd87,	// (0x00066c63) sp_fs_action_menu_list_gene_pane_g1

0xcd96,	// (0x00066c72) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xcd96,	// (0x00066c72) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbef,	// (0x00069acb) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbef,	// (0x00069acb) sp_fs_action_menu_list_gene_pane_g

0xcda3,	// (0x00066c7f) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xcda3,	// (0x00066c7f) sp_fs_action_menu_list_gene_pane_t1

0xcdbb,	// (0x00066c97) sp_fs_action_menu_list_gene_pane_ParamLimits

0xcdbb,	// (0x00066c97) sp_fs_action_menu_list_gene_pane

0xcdda,	// (0x00066cb6) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xcdda,	// (0x00066cb6) popup_sp_fs_action_menu_bg_pane

0xcde8,	// (0x00066cc4) sp_fs_action_menu_list_pane_ParamLimits

0xcde8,	// (0x00066cc4) sp_fs_action_menu_list_pane

0xce08,	// (0x00066ce4) sp_fs_scroll_pane_cp01_ParamLimits

0xce08,	// (0x00066ce4) sp_fs_scroll_pane_cp01

0x8676,	// (0x00062552) list_medium_line_plain_t2_t1

0x8686,	// (0x00062562) list_medium_line_plain_t2_t2

0x0001,

0xfbf4,	// (0x00069ad0) list_medium_line_plain_t2_t

0x8696,	// (0x00062572) list_medium_line_plain_t3_t1

0x86a6,	// (0x00062582) list_medium_line_plain_t3_t2

0x86b4,	// (0x00062590) list_medium_line_plain_t3_t3

0x0002,

0xfbf9,	// (0x00069ad5) list_medium_line_plain_t3_t

0x1cbb,	// (0x0005bb97) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1cbb,	// (0x0005bb97) list_medium_line_x2_t2_g2_g1

0x1cd3,	// (0x0005bbaf) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1cd3,	// (0x0005bbaf) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x00069146) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x00069146) list_medium_line_x2_t2_g2_g

0x2c42,	// (0x0005cb1e) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2c42,	// (0x0005cb1e) list_medium_line_x2_t2_g2_t1

0x1d08,	// (0x0005bbe4) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1d08,	// (0x0005bbe4) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc00,	// (0x00069adc) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc00,	// (0x00069adc) list_medium_line_x2_t2_g2_t

0x1cbb,	// (0x0005bb97) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1cbb,	// (0x0005bb97) list_medium_line_x2_t4_g2_g1

0xce2e,	// (0x00066d0a) list_medium_line_x2_t4_g2_g2_ParamLimits

0xce2e,	// (0x00066d0a) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc05,	// (0x00069ae1) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc05,	// (0x00069ae1) list_medium_line_x2_t4_g2_g

0x86c2,	// (0x0006259e) list_medium_line_x2_t4_g2_t1_ParamLimits

0x86c2,	// (0x0006259e) list_medium_line_x2_t4_g2_t1

0x86d9,	// (0x000625b5) list_medium_line_x2_t4_g2_t2_ParamLimits

0x86d9,	// (0x000625b5) list_medium_line_x2_t4_g2_t2

0x86ee,	// (0x000625ca) list_medium_line_x2_t4_g2_t3_ParamLimits

0x86ee,	// (0x000625ca) list_medium_line_x2_t4_g2_t3

0x1d08,	// (0x0005bbe4) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1d08,	// (0x0005bbe4) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc0a,	// (0x00069ae6) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc0a,	// (0x00069ae6) list_medium_line_x2_t4_g2_t

0xce40,	// (0x00066d1c) list_medium_line_t3_right_iconx2_g1

0xcd1a,	// (0x00066bf6) list_medium_line_t3_right_iconx2_g2

0x8700,	// (0x000625dc) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc13,	// (0x00069aef) list_medium_line_t3_right_iconx2_g

0x870a,	// (0x000625e6) list_medium_line_t3_right_iconx2_t1

0x871a,	// (0x000625f6) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc1a,	// (0x00069af6) list_medium_line_t3_right_iconx2_t

0x1cbb,	// (0x0005bb97) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1cbb,	// (0x0005bb97) list_medium_line_x3_t4_g4_g1

0x1cc7,	// (0x0005bba3) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1cc7,	// (0x0005bba3) list_medium_line_x3_t4_g4_g2

0x1d51,	// (0x0005bc2d) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1d51,	// (0x0005bc2d) list_medium_line_x3_t4_g4_g3

0xce48,	// (0x00066d24) list_medium_line_x3_t4_g4_g4_ParamLimits

0xce48,	// (0x00066d24) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc1f,	// (0x00069afb) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc1f,	// (0x00069afb) list_medium_line_x3_t4_g4_g

0x8728,	// (0x00062604) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8728,	// (0x00062604) list_medium_line_x3_t4_g4_t1

0x873f,	// (0x0006261b) list_medium_line_x3_t4_g4_t2_ParamLimits

0x873f,	// (0x0006261b) list_medium_line_x3_t4_g4_t2

0x2c57,	// (0x0005cb33) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2c57,	// (0x0005cb33) list_medium_line_x3_t4_g4_t3

0xce54,	// (0x00066d30) list_medium_line_x3_t4_g4_t4_ParamLimits

0xce54,	// (0x00066d30) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc28,	// (0x00069b04) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc28,	// (0x00069b04) list_medium_line_x3_t4_g4_t

0x875a,	// (0x00062636) list_single_dyc_row_text_pane_t1_ParamLimits

0x875a,	// (0x00062636) list_single_dyc_row_text_pane_t1

0x87a3,	// (0x0006267f) list_single_dyc_row_text_pane_t2_ParamLimits

0x87a3,	// (0x0006267f) list_single_dyc_row_text_pane_t2

0xce71,	// (0x00066d4d) list_single_dyc_row_text_pane_t3_ParamLimits

0xce71,	// (0x00066d4d) list_single_dyc_row_text_pane_t3

0x0002,

0xfc31,	// (0x00069b0d) list_single_dyc_row_text_pane_t_ParamLimits

0xfc31,	// (0x00069b0d) list_single_dyc_row_text_pane_t

0xce83,	// (0x00066d5f) list_single_dyc_row_pane_g1_ParamLimits

0xce83,	// (0x00066d5f) list_single_dyc_row_pane_g1

0xce8f,	// (0x00066d6b) list_single_dyc_row_pane_g2_ParamLimits

0xce8f,	// (0x00066d6b) list_single_dyc_row_pane_g2

0xce9b,	// (0x00066d77) list_single_dyc_row_pane_g3_ParamLimits

0xce9b,	// (0x00066d77) list_single_dyc_row_pane_g3

0xcea7,	// (0x00066d83) list_single_dyc_row_pane_g4_ParamLimits

0xcea7,	// (0x00066d83) list_single_dyc_row_pane_g4

0x0003,

0xfc38,	// (0x00069b14) list_single_dyc_row_pane_g_ParamLimits

0xfc38,	// (0x00069b14) list_single_dyc_row_pane_g

0xceb3,	// (0x00066d8f) list_single_dyc_row_text_pane_ParamLimits

0xceb3,	// (0x00066d8f) list_single_dyc_row_text_pane

0x0df7,	// (0x0005acd3) bg_sp_fs_scroll_pane

0xced2,	// (0x00066dae) thumb_sp_fs_scroll_pane

0x6e34,	// (0x00060d10) list_medium_line_g1_ParamLimits

0x6e34,	// (0x00060d10) list_medium_line_g1

0xcedb,	// (0x00066db7) list_medium_line_t1_ParamLimits

0xcedb,	// (0x00066db7) list_medium_line_t1

0x1cbb,	// (0x0005bb97) list_medium_line_x2_g1_ParamLimits

0x1cbb,	// (0x0005bb97) list_medium_line_x2_g1

0x1cc7,	// (0x0005bba3) list_medium_line_x2_g2_ParamLimits

0x1cc7,	// (0x0005bba3) list_medium_line_x2_g2

0x0001,

0xfc41,	// (0x00069b1d) list_medium_line_x2_g_ParamLimits

0xfc41,	// (0x00069b1d) list_medium_line_x2_g

0xcef0,	// (0x00066dcc) list_medium_line_x2_t1_ParamLimits

0xcef0,	// (0x00066dcc) list_medium_line_x2_t1

0x1cbb,	// (0x0005bb97) list_medium_line_x3_g1_ParamLimits

0x1cbb,	// (0x0005bb97) list_medium_line_x3_g1

0x1cc7,	// (0x0005bba3) list_medium_line_x3_g2_ParamLimits

0x1cc7,	// (0x0005bba3) list_medium_line_x3_g2

0x0001,

0xfc41,	// (0x00069b1d) list_medium_line_x3_g_ParamLimits

0xfc41,	// (0x00069b1d) list_medium_line_x3_g

0xcef0,	// (0x00066dcc) list_medium_line_x3_t1_ParamLimits

0xcef0,	// (0x00066dcc) list_medium_line_x3_t1

0xcf06,	// (0x00066de2) thumb_sp_fs_scroll_pane_g1

0xcf0f,	// (0x00066deb) thumb_sp_fs_scroll_pane_g2

0xcf18,	// (0x00066df4) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc46,	// (0x00069b22) thumb_sp_fs_scroll_pane_g

0xcf06,	// (0x00066de2) bg_sp_fs_scroll_pane_g1

0xcf0f,	// (0x00066deb) bg_sp_fs_scroll_pane_g2

0xcf18,	// (0x00066df4) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc46,	// (0x00069b22) bg_sp_fs_scroll_pane_g

0x1cbb,	// (0x0005bb97) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1cbb,	// (0x0005bb97) list_medium_line_x2_t3_g4_g1

0x1d45,	// (0x0005bc21) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1d45,	// (0x0005bc21) list_medium_line_x2_t3_g4_g2

0x1cc7,	// (0x0005bba3) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1cc7,	// (0x0005bba3) list_medium_line_x2_t3_g4_g3

0x1cd3,	// (0x0005bbaf) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1cd3,	// (0x0005bbaf) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x000691c2) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x000691c2) list_medium_line_x2_t3_g4_g

0x87fd,	// (0x000626d9) list_medium_line_x2_t3_g4_t1_ParamLimits

0x87fd,	// (0x000626d9) list_medium_line_x2_t3_g4_t1

0x8817,	// (0x000626f3) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8817,	// (0x000626f3) list_medium_line_x2_t3_g4_t2

0x1d08,	// (0x0005bbe4) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1d08,	// (0x0005bbe4) list_medium_line_x2_t3_g4_t3

0x0002,

0xfc4d,	// (0x00069b29) list_medium_line_x2_t3_g4_t_ParamLimits

0xfc4d,	// (0x00069b29) list_medium_line_x2_t3_g4_t

0x6e34,	// (0x00060d10) list_medium_line_g2_g1_ParamLimits

0x6e34,	// (0x00060d10) list_medium_line_g2_g1

0x6e40,	// (0x00060d1c) list_medium_line_g2_g2_ParamLimits

0x6e40,	// (0x00060d1c) list_medium_line_g2_g2

0x0001,

0xf945,	// (0x00069821) list_medium_line_g2_g_ParamLimits

0xf945,	// (0x00069821) list_medium_line_g2_g

0xcf21,	// (0x00066dfd) list_medium_line_g2_t1_ParamLimits

0xcf21,	// (0x00066dfd) list_medium_line_g2_t1

0x6e34,	// (0x00060d10) list_medium_line_t3_g2_g1_ParamLimits

0x6e34,	// (0x00060d10) list_medium_line_t3_g2_g1

0x6e40,	// (0x00060d1c) list_medium_line_t3_g2_g2_ParamLimits

0x6e40,	// (0x00060d1c) list_medium_line_t3_g2_g2

0x0001,

0xf945,	// (0x00069821) list_medium_line_t3_g2_g_ParamLimits

0xf945,	// (0x00069821) list_medium_line_t3_g2_g

0x8831,	// (0x0006270d) list_medium_line_t3_g2_t1_ParamLimits

0x8831,	// (0x0006270d) list_medium_line_t3_g2_t1

0x884b,	// (0x00062727) list_medium_line_t3_g2_t2_ParamLimits

0x884b,	// (0x00062727) list_medium_line_t3_g2_t2

0x8860,	// (0x0006273c) list_medium_line_t3_g2_t3_ParamLimits

0x8860,	// (0x0006273c) list_medium_line_t3_g2_t3

0x0002,

0xfc54,	// (0x00069b30) list_medium_line_t3_g2_t_ParamLimits

0xfc54,	// (0x00069b30) list_medium_line_t3_g2_t

0xcd1a,	// (0x00066bf6) list_medium_line_right_icon_g1

0xcf36,	// (0x00066e12) list_medium_line_right_icon_t1

0x6e34,	// (0x00060d10) list_medium_line_t2_g1_ParamLimits

0x6e34,	// (0x00060d10) list_medium_line_t2_g1

0x887a,	// (0x00062756) list_medium_line_t2_t1_ParamLimits

0x887a,	// (0x00062756) list_medium_line_t2_t1

0x8894,	// (0x00062770) list_medium_line_t2_t2_ParamLimits

0x8894,	// (0x00062770) list_medium_line_t2_t2

0x0001,

0xfc5b,	// (0x00069b37) list_medium_line_t2_t_ParamLimits

0xfc5b,	// (0x00069b37) list_medium_line_t2_t

0x6e34,	// (0x00060d10) list_medium_line_t3_g1_ParamLimits

0x6e34,	// (0x00060d10) list_medium_line_t3_g1

0x88ad,	// (0x00062789) list_medium_line_t3_t1_ParamLimits

0x88ad,	// (0x00062789) list_medium_line_t3_t1

0x88c4,	// (0x000627a0) list_medium_line_t3_t2_ParamLimits

0x88c4,	// (0x000627a0) list_medium_line_t3_t2

0x88d9,	// (0x000627b5) list_medium_line_t3_t3_ParamLimits

0x88d9,	// (0x000627b5) list_medium_line_t3_t3

0x0002,

0xfc60,	// (0x00069b3c) list_medium_line_t3_t_ParamLimits

0xfc60,	// (0x00069b3c) list_medium_line_t3_t

0x6e34,	// (0x00060d10) list_medium_line_g3_g1_ParamLimits

0x6e34,	// (0x00060d10) list_medium_line_g3_g1

0xcf44,	// (0x00066e20) list_medium_line_g3_g2_ParamLimits

0xcf44,	// (0x00066e20) list_medium_line_g3_g2

0x6e40,	// (0x00060d1c) list_medium_line_g3_g3_ParamLimits

0x6e40,	// (0x00060d1c) list_medium_line_g3_g3

0x0002,

0xfc67,	// (0x00069b43) list_medium_line_g3_g_ParamLimits

0xfc67,	// (0x00069b43) list_medium_line_g3_g

0xcf50,	// (0x00066e2c) list_medium_line_g3_t1_ParamLimits

0xcf50,	// (0x00066e2c) list_medium_line_g3_t1

0x6e34,	// (0x00060d10) list_medium_line_t2_g3_g1_ParamLimits

0x6e34,	// (0x00060d10) list_medium_line_t2_g3_g1

0xcf44,	// (0x00066e20) list_medium_line_t2_g3_g2_ParamLimits

0xcf44,	// (0x00066e20) list_medium_line_t2_g3_g2

0x6e40,	// (0x00060d1c) list_medium_line_t2_g3_g3_ParamLimits

0x6e40,	// (0x00060d1c) list_medium_line_t2_g3_g3

0x0002,

0xfc67,	// (0x00069b43) list_medium_line_t2_g3_g_ParamLimits

0xfc67,	// (0x00069b43) list_medium_line_t2_g3_g

0x88eb,	// (0x000627c7) list_medium_line_t2_g3_t1_ParamLimits

0x88eb,	// (0x000627c7) list_medium_line_t2_g3_t1

0x8905,	// (0x000627e1) list_medium_line_t2_g3_t2_ParamLimits

0x8905,	// (0x000627e1) list_medium_line_t2_g3_t2

0x0001,

0xfc6e,	// (0x00069b4a) list_medium_line_t2_g3_t_ParamLimits

0xfc6e,	// (0x00069b4a) list_medium_line_t2_g3_t

0x6e34,	// (0x00060d10) list_medium_line_t3_g3_g1_ParamLimits

0x6e34,	// (0x00060d10) list_medium_line_t3_g3_g1

0xcf44,	// (0x00066e20) list_medium_line_t3_g3_g2_ParamLimits

0xcf44,	// (0x00066e20) list_medium_line_t3_g3_g2

0x6e40,	// (0x00060d1c) list_medium_line_t3_g3_g3_ParamLimits

0x6e40,	// (0x00060d1c) list_medium_line_t3_g3_g3

0x0002,

0xfc67,	// (0x00069b43) list_medium_line_t3_g3_g_ParamLimits

0xfc67,	// (0x00069b43) list_medium_line_t3_g3_g

0x8920,	// (0x000627fc) list_medium_line_t3_g3_t1_ParamLimits

0x8920,	// (0x000627fc) list_medium_line_t3_g3_t1

0x8934,	// (0x00062810) list_medium_line_t3_g3_t2_ParamLimits

0x8934,	// (0x00062810) list_medium_line_t3_g3_t2

0x8946,	// (0x00062822) list_medium_line_t3_g3_t3_ParamLimits

0x8946,	// (0x00062822) list_medium_line_t3_g3_t3

0x0002,

0xfc73,	// (0x00069b4f) list_medium_line_t3_g3_t_ParamLimits

0xfc73,	// (0x00069b4f) list_medium_line_t3_g3_t

0xce40,	// (0x00066d1c) list_medium_line_right_iconx2_g1

0xcd1a,	// (0x00066bf6) list_medium_line_right_iconx2_g2

0x0001,

0xfc7a,	// (0x00069b56) list_medium_line_right_iconx2_g

0xcf65,	// (0x00066e41) list_medium_line_right_iconx2_t1

0xce40,	// (0x00066d1c) list_medium_line_t2_right_iconx2_g1

0xcd1a,	// (0x00066bf6) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfc7a,	// (0x00069b56) list_medium_line_t2_right_iconx2_g

0x895a,	// (0x00062836) list_medium_line_t2_right_iconx2_t1

0x896a,	// (0x00062846) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc7f,	// (0x00069b5b) list_medium_line_t2_right_iconx2_t

0xcf73,	// (0x00066e4f) list_medium_line_x4_t4_t1

0x897c,	// (0x00062858) list_medium_line_x4_t4_t2

0x898c,	// (0x00062868) list_medium_line_x4_t4_t3

0x899c,	// (0x00062878) list_medium_line_x4_t4_t4

0x0003,

0xfc84,	// (0x00069b60) list_medium_line_x4_t4_t

0x89ef,	// (0x000628cb) tport_appsw_pane_ParamLimits

0x89ef,	// (0x000628cb) tport_appsw_pane

0x8a00,	// (0x000628dc) tport_contact_pane_ParamLimits

0x8a00,	// (0x000628dc) tport_contact_pane

0x8a19,	// (0x000628f5) tport_listscroll_pane_ParamLimits

0x8a19,	// (0x000628f5) tport_listscroll_pane

0x8a34,	// (0x00062910) cell_tport_appsw_pane_ParamLimits

0x8a34,	// (0x00062910) cell_tport_appsw_pane

0xebd5,	// (0x00068ab1) tport_appsw_pane_g1_ParamLimits

0xebd5,	// (0x00068ab1) tport_appsw_pane_g1

0xcf81,	// (0x00066e5d) tport_contact_pane_g1

0xc729,	// (0x00066605) tport_contact_pane_t1

0xcf8a,	// (0x00066e66) tport_contact_pane_t2

0x0001,

0xfc8d,	// (0x00069b69) tport_contact_pane_t

0xcf98,	// (0x00066e74) list_tport_pane

0xcfa1,	// (0x00066e7d) scroll_pane_cp_030

0xcfb2,	// (0x00066e8e) cell_tport_appsw_pane_g1

0xcfc2,	// (0x00066e9e) cell_tport_appsw_pane_t1

0x0df7,	// (0x0005acd3) grid_highlight_pane_cp019

0x8a74,	// (0x00062950) list_tport_double_graphic_pane_ParamLimits

0x8a74,	// (0x00062950) list_tport_double_graphic_pane

0x9866,	// (0x00063742) list_highlight_pane_cp023_ParamLimits

0x9866,	// (0x00063742) list_highlight_pane_cp023

0x8a81,	// (0x0006295d) list_tport_double_graphic_pane_g1_ParamLimits

0x8a81,	// (0x0006295d) list_tport_double_graphic_pane_g1

0x8a8e,	// (0x0006296a) list_tport_double_graphic_pane_t1_ParamLimits

0x8a8e,	// (0x0006296a) list_tport_double_graphic_pane_t1

0x8aa3,	// (0x0006297f) list_tport_double_graphic_pane_t2_ParamLimits

0x8aa3,	// (0x0006297f) list_tport_double_graphic_pane_t2

0x0001,

0xfc99,	// (0x00069b75) list_tport_double_graphic_pane_t_ParamLimits

0xfc99,	// (0x00069b75) list_tport_double_graphic_pane_t

0x0df7,	// (0x0005acd3) main_cale_note_pane

0x6590,	// (0x0006046c) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6590,	// (0x0006046c) cell_vitu2_function_top_wide_pane_cp01

0x813c,	// (0x00062018) wait_bar_pane_cp05_ParamLimits

0x0df7,	// (0x0005acd3) listscroll_cmail_pane

0xcfd8,	// (0x00066eb4) list_cmail_pane

0xede8,	// (0x00068cc4) list_cmail_body_pane

0x8abf,	// (0x0006299b) list_single_cmail_header_caption_pane

0x8ad5,	// (0x000629b1) list_single_cmail_header_detail_pane_ParamLimits

0x8ad5,	// (0x000629b1) list_single_cmail_header_detail_pane

0x8afe,	// (0x000629da) list_single_cmail_header_caption_pane_t1

0x8b0e,	// (0x000629ea) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8b0e,	// (0x000629ea) list_single_cmail_header_detail_pane_g1

0xcff9,	// (0x00066ed5) list_single_cmail_header_detail_pane_g2_ParamLimits

0xcff9,	// (0x00066ed5) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc9e,	// (0x00069b7a) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc9e,	// (0x00069b7a) list_single_cmail_header_detail_pane_g

0xd012,	// (0x00066eee) list_single_cmail_header_detail_pane_t1_ParamLimits

0xd012,	// (0x00066eee) list_single_cmail_header_detail_pane_t1

0xd048,	// (0x00066f24) list_single_cmail_header_editor_pane_bg_ParamLimits

0xd048,	// (0x00066f24) list_single_cmail_header_editor_pane_bg

0xc8d8,	// (0x000667b4) list_cmail_body_pane_g1

0xd05a,	// (0x00066f36) list_cmail_body_pane_t1

0xebf5,	// (0x00068ad1) list_single_cmail_header_editor_pane_bg_g1

0xa4af,	// (0x0006438b) list_single_cmail_header_editor_pane_bg_g1_copy1

0xec05,	// (0x00068ae1) list_single_cmail_header_editor_pane_bg_g1_copy2

0xebfd,	// (0x00068ad9) list_single_cmail_header_editor_pane_bg_g1_copy3

0xee19,	// (0x00068cf5) list_single_cmail_header_editor_pane_bg_g1_copy4

0xec25,	// (0x00068b01) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xec15,	// (0x00068af1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xec1d,	// (0x00068af9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa48f,	// (0x0006436b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8b4c,	// (0x00062a28) calenote_gesture_pane_ParamLimits

0x8b4c,	// (0x00062a28) calenote_gesture_pane

0x8b6c,	// (0x00062a48) calenote_window_pane_ParamLimits

0x8b6c,	// (0x00062a48) calenote_window_pane

0xd068,	// (0x00066f44) popup_note_window_cp01

0x8b88,	// (0x00062a64) calenote_swipe_1_pane_ParamLimits

0x8b88,	// (0x00062a64) calenote_swipe_1_pane

0x8580,	// (0x0006245c) calenote_swipe_2_pane_ParamLimits

0x8580,	// (0x0006245c) calenote_swipe_2_pane

0xcc1b,	// (0x00066af7) calenote_swipe_1_pane_g1_ParamLimits

0xcc1b,	// (0x00066af7) calenote_swipe_1_pane_g1

0xcc28,	// (0x00066b04) calenote_swipe_1_pane_g2_ParamLimits

0xcc28,	// (0x00066b04) calenote_swipe_1_pane_g2

0x0001,

0xfbcd,	// (0x00069aa9) calenote_swipe_1_pane_g_ParamLimits

0xfbcd,	// (0x00069aa9) calenote_swipe_1_pane_g

0xd07a,	// (0x00066f56) calenote_swipe_1_pane_t1_ParamLimits

0xd07a,	// (0x00066f56) calenote_swipe_1_pane_t1

0xcc1b,	// (0x00066af7) calenote_swipe_2_pane_g1_ParamLimits

0xcc1b,	// (0x00066af7) calenote_swipe_2_pane_g1

0xd099,	// (0x00066f75) calenote_swipe_2_pane_g2_ParamLimits

0xd099,	// (0x00066f75) calenote_swipe_2_pane_g2

0x0001,

0xfcaa,	// (0x00069b86) calenote_swipe_2_pane_g_ParamLimits

0xfcaa,	// (0x00069b86) calenote_swipe_2_pane_g

0xd0a5,	// (0x00066f81) calenote_swipe_2_pane_t1_ParamLimits

0xd0a5,	// (0x00066f81) calenote_swipe_2_pane_t1

0x0df7,	// (0x0005acd3) main_mup_navstr_pane

0x5275,	// (0x0005f151) main_mup3_pane_t7_ParamLimits

0x5275,	// (0x0005f151) main_mup3_pane_t7

0xda95,	// (0x00067971) main_mp4_pane_g6_ParamLimits

0xda95,	// (0x00067971) main_mp4_pane_g6

0xdc39,	// (0x00067b15) main_image3_pane_t4_ParamLimits

0xdc39,	// (0x00067b15) main_image3_pane_t4

0x8b9d,	// (0x00062a79) popup_navstr_preview_pane_ParamLimits

0x8b9d,	// (0x00062a79) popup_navstr_preview_pane

0x8bb1,	// (0x00062a8d) scroll_navstr_pane_ParamLimits

0x8bb1,	// (0x00062a8d) scroll_navstr_pane

0x0df7,	// (0x0005acd3) bg_popup_preview_window_pane_cp04

0xd0cc,	// (0x00066fa8) popup_navstr_preview_pane_t1

0x8bc5,	// (0x00062aa1) scroll_navstr_pane_g1_ParamLimits

0x8bc5,	// (0x00062aa1) scroll_navstr_pane_g1

0x8bd9,	// (0x00062ab5) scroll_navstr_pane_t1_ParamLimits

0x8bd9,	// (0x00062ab5) scroll_navstr_pane_t1

0xd071,	// (0x00066f4d) bg_button_pane_cp014

0xd071,	// (0x00066f4d) bg_button_pane_cp030

0x841e,	// (0x000622fa) list_double_fisheye_pane_g4_ParamLimits

0x841e,	// (0x000622fa) list_double_fisheye_pane_g4

0x842a,	// (0x00062306) list_double_fisheye_pane_g5_ParamLimits

0x842a,	// (0x00062306) list_double_fisheye_pane_g5

0xcfe0,	// (0x00066ebc) sp_fs_scroll_pane_cp03

0xcd5a,	// (0x00066c36) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xcd66,	// (0x00066c42) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbea,	// (0x00069ac6) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xcd72,	// (0x00066c4e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8ab5,	// (0x00062991) sp_fs_scroll_pane_cp02

0xa155,	// (0x00064031) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa155,	// (0x00064031) popup_sp_fs_calendar_preview_list_single_pane

0x0df7,	// (0x0005acd3) main_cam6_pano_pane

0x9866,	// (0x00063742) main_mup3_pane_ParamLimits

0x0df7,	// (0x0005acd3) main_phacti_pane

0x800f,	// (0x00061eeb) bg_button_pane_cp11

0x8029,	// (0x00061f05) main_mobtv_info_pane_g2_ParamLimits

0x8029,	// (0x00061f05) main_mobtv_info_pane_g2

0x0001,

0xfb4a,	// (0x00069a26) main_mobtv_info_pane_g_ParamLimits

0xfb4a,	// (0x00069a26) main_mobtv_info_pane_g

0x8204,	// (0x000620e0) sc_clock_pane_t5_ParamLimits

0x8204,	// (0x000620e0) sc_clock_pane_t5

0x8289,	// (0x00062165) main_radioblah_pane_g1_ParamLimits

0xcb5e,	// (0x00066a3a) main_radioblah_pane_t3_ParamLimits

0xcb5e,	// (0x00066a3a) main_radioblah_pane_t3

0xcb76,	// (0x00066a52) main_radioblah_pane_t4_ParamLimits

0xcb76,	// (0x00066a52) main_radioblah_pane_t4

0x82b1,	// (0x0006218d) main_radioblah_text_pane_ParamLimits

0x82b1,	// (0x0006218d) main_radioblah_text_pane

0x82c3,	// (0x0006219f) main_radioblah_info_pane_g1_ParamLimits

0x835c,	// (0x00062238) main_radioblah_info_pane_t4_ParamLimits

0x835c,	// (0x00062238) main_radioblah_info_pane_t4

0x9866,	// (0x00063742) main_sp_fs_calendar_pane

0x8bf0,	// (0x00062acc) main_phacti_pane_g1

0x8bf8,	// (0x00062ad4) phacti_note_pane_ParamLimits

0x8bf8,	// (0x00062ad4) phacti_note_pane

0xd0e3,	// (0x00066fbf) phacti_term_pane_ParamLimits

0xd0e3,	// (0x00066fbf) phacti_term_pane

0xd0f8,	// (0x00066fd4) phacti_note_pane_t1_ParamLimits

0xd0f8,	// (0x00066fd4) phacti_note_pane_t1

0xd10f,	// (0x00066feb) phacti_term_pane_g1

0xd117,	// (0x00066ff3) phacti_term_pane_t1_ParamLimits

0xd117,	// (0x00066ff3) phacti_term_pane_t1

0xd141,	// (0x0006701d) popup_sp_fs_calendar_preview_list_single_pane_g1

0xa2b2,	// (0x0006418e) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcb4,	// (0x00069b90) popup_sp_fs_calendar_preview_list_single_pane_g

0xd149,	// (0x00067025) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xd149,	// (0x00067025) popup_sp_fs_calendar_preview_list_single_pane_t1

0xd15e,	// (0x0006703a) aid_popup_sp_fs_bg_corner_pane

0xe19c,	// (0x00068078) popup_sp_fs_calendar_preview_bg_pane_g1

0x0df7,	// (0x0005acd3) popup_sp_fs_calendar_preview_bg_pane

0xd166,	// (0x00067042) popup_sp_fs_calendar_preview_list_pane

0x9866,	// (0x00063742) bg_main_sp_fs_cale_pane_ParamLimits

0x9866,	// (0x00063742) bg_main_sp_fs_cale_pane

0xd16e,	// (0x0006704a) listscroll_cale_mrui_pane_ParamLimits

0xd16e,	// (0x0006704a) listscroll_cale_mrui_pane

0xd182,	// (0x0006705e) listscroll_sp_fs_schedule_track_pane

0xd18b,	// (0x00067067) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xd18b,	// (0x00067067) main_sp_fs_ctrlbar_pane_cp01

0xd19c,	// (0x00067078) main_sp_fs_ribbon_pane

0xd1a4,	// (0x00067080) popup_sp_fs_cale_preview_window

0x8c4f,	// (0x00062b2b) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8c4f,	// (0x00062b2b) list_single_sp_fs_schedule_track_pane

0x9866,	// (0x00063742) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9866,	// (0x00063742) bg_sp_fs_highlight_list_pane_cp03

0x8c61,	// (0x00062b3d) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8c61,	// (0x00062b3d) list_single_sp_fs_schedule_track_pane_g1

0x8c6d,	// (0x00062b49) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8c6d,	// (0x00062b49) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcb9,	// (0x00069b95) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcb9,	// (0x00069b95) list_single_sp_fs_schedule_track_pane_g

0x8c79,	// (0x00062b55) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8c79,	// (0x00062b55) list_single_sp_fs_schedule_track_pane_t1

0x8c93,	// (0x00062b6f) sp_fs_schedule_track_pane_ParamLimits

0x8c93,	// (0x00062b6f) sp_fs_schedule_track_pane

0xd1b6,	// (0x00067092) sp_fs_schedule_track_pane_g1

0xd1be,	// (0x0006709a) sp_fs_schedule_track_pane_g2

0xd1c6,	// (0x000670a2) sp_fs_schedule_track_pane_g3

0xd1ce,	// (0x000670aa) sp_fs_schedule_track_pane_g4

0xd1d6,	// (0x000670b2) sp_fs_schedule_track_pane_g5

0x0004,

0xfcbe,	// (0x00069b9a) sp_fs_schedule_track_pane_g

0xebf5,	// (0x00068ad1) bg_sp_fs_schedule_viewer_highlight_g1

0xa4af,	// (0x0006438b) bg_sp_fs_schedule_viewer_highlight_g2

0xebfd,	// (0x00068ad9) bg_sp_fs_schedule_viewer_highlight_g3

0xec05,	// (0x00068ae1) bg_sp_fs_schedule_viewer_highlight_g4

0xee19,	// (0x00068cf5) bg_sp_fs_schedule_viewer_highlight_g5

0xec15,	// (0x00068af1) bg_sp_fs_schedule_viewer_highlight_g6

0xec1d,	// (0x00068af9) bg_sp_fs_schedule_viewer_highlight_g7

0xec25,	// (0x00068b01) bg_sp_fs_schedule_viewer_highlight_g8

0xa48f,	// (0x0006436b) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcc9,	// (0x00069ba5) bg_sp_fs_schedule_viewer_highlight_g

0x0df7,	// (0x0005acd3) bg_main_sp_fs_ribbon_pane

0x8ca4,	// (0x00062b80) main_sp_fs_ribbon_pane_g1

0xd1de,	// (0x000670ba) main_sp_fs_ribbon_pane_t1

0x8cad,	// (0x00062b89) main_sp_fs_ribbon_pane_t2

0xd1ed,	// (0x000670c9) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcdc,	// (0x00069bb8) main_sp_fs_ribbon_pane_t

0xd1fc,	// (0x000670d8) main_sp_fs_ribbon_scheduler_pane

0xd204,	// (0x000670e0) bg_main_sp_fs_ribbon_pane_g1

0xd20d,	// (0x000670e9) bg_main_sp_fs_ribbon_pane_g2

0xd216,	// (0x000670f2) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfce3,	// (0x00069bbf) bg_main_sp_fs_ribbon_pane_g

0xd21e,	// (0x000670fa) main_sp_fs_ribbon_scheduler_pane_g1

0xd227,	// (0x00067103) main_sp_fs_ribbon_scheduler_pane_g2

0xd230,	// (0x0006710c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcea,	// (0x00069bc6) main_sp_fs_ribbon_scheduler_pane_g

0xd239,	// (0x00067115) list_cale_mrui_pane

0x8cbc,	// (0x00062b98) sp_fs_scroll_pane_cp07_ParamLimits

0x8cbc,	// (0x00062b98) sp_fs_scroll_pane_cp07

0x8cd0,	// (0x00062bac) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8cd0,	// (0x00062bac) bg_sp_fs_schedule_viewer_highlight

0xd242,	// (0x0006711e) list_single_sp_fs_schedule_track_pane_cp01

0xd24a,	// (0x00067126) list_sp_fs_schedule_track_pane

0xd252,	// (0x0006712e) sp_fs_scroll_pane_cp06_ParamLimits

0xd252,	// (0x0006712e) sp_fs_scroll_pane_cp06

0xe19c,	// (0x00068078) bgmain_sp_fs_calendar_pane_g1

0x8ce0,	// (0x00062bbc) list_single_cale_mrui_pane_ParamLimits

0x8ce0,	// (0x00062bbc) list_single_cale_mrui_pane

0xd264,	// (0x00067140) list_single_cale_mrui_row_pane_ParamLimits

0xd264,	// (0x00067140) list_single_cale_mrui_row_pane

0xd271,	// (0x0006714d) list_single_cale_mrui_row_pane_g1_ParamLimits

0xd271,	// (0x0006714d) list_single_cale_mrui_row_pane_g1

0xd2a9,	// (0x00067185) list_single_cale_mrui_row_pane_t1_ParamLimits

0xd2a9,	// (0x00067185) list_single_cale_mrui_row_pane_t1

0x8d00,	// (0x00062bdc) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8d00,	// (0x00062bdc) list_single_cale_mrui_row_pane_t2

0xd2bb,	// (0x00067197) list_single_cale_mrui_row_pane_t3_ParamLimits

0xd2bb,	// (0x00067197) list_single_cale_mrui_row_pane_t3

0xd2ea,	// (0x000671c6) list_single_cale_mrui_row_pane_t4_ParamLimits

0xd2ea,	// (0x000671c6) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcf6,	// (0x00069bd2) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcf6,	// (0x00069bd2) list_single_cale_mrui_row_pane_t

0x8d68,	// (0x00062c44) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8d68,	// (0x00062c44) list_single_cmail_header_editor_pane_bg_cp01

0x8d8e,	// (0x00062c6a) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8d8e,	// (0x00062c6a) list_single_cmail_header_editor_pane_bg_cp02

0x8dae,	// (0x00062c8a) main_radioblah_text_pane_t1_ParamLimits

0x8dae,	// (0x00062c8a) main_radioblah_text_pane_t1

0xd319,	// (0x000671f5) cam6_indi_pane_cp01

0xd321,	// (0x000671fd) cam6_mode_pane_cp01

0xd329,	// (0x00067205) cam6_pano_pane

0xd332,	// (0x0006720e) cam6_zoom_pane_cp01

0xd33a,	// (0x00067216) cam6_pano_image_pane

0xd345,	// (0x00067221) cam6_pano_pane_g1

0xc8d8,	// (0x000667b4) cam6_pano_pane_g2

0xd34e,	// (0x0006722a) cam6_pano_pane_g3

0xd357,	// (0x00067233) cam6_pano_pane_g4

0xe72f,	// (0x0006860b) cam6_pano_pane_g5

0xd360,	// (0x0006723c) cam6_pano_pane_g6

0xd36a,	// (0x00067246) cam6_pano_pane_g7

0xd372,	// (0x0006724e) cam6_pano_pane_g8

0xd37b,	// (0x00067257) cam6_pano_pane_g9

0x0008,

0xfcff,	// (0x00069bdb) cam6_pano_pane_g

0x0df7,	// (0x0005acd3) main_browser_tag_pane

0xd0c4,	// (0x00066fa0) grid_navstr_albumart_pane

0xd386,	// (0x00067262) cell_navstr_albumart_pane_ParamLimits

0xd386,	// (0x00067262) cell_navstr_albumart_pane

0xd3a9,	// (0x00067285) cell_navstr_albumart_pane_g1

0xbe98,	// (0x00065d74) cell_navstr_albumart_pane_g2

0xbea8,	// (0x00065d84) cell_navstr_albumart_pane_g3

0xbea0,	// (0x00065d7c) cell_navstr_albumart_pane_g4

0x0003,

0xfd12,	// (0x00069bee) cell_navstr_albumart_pane_g

0x8dc8,	// (0x00062ca4) bt_list_pane_ParamLimits

0x8dc8,	// (0x00062ca4) bt_list_pane

0x8ddc,	// (0x00062cb8) bt_list_pane_t1

0x8deb,	// (0x00062cc7) bt_list_pane_t2

0x0001,

0xfd1b,	// (0x00069bf7) bt_list_pane_t

0x0df7,	// (0x0005acd3) main_cale_prevew_pane

0x8dfa,	// (0x00062cd6) popup_cale_preview_window_ParamLimits

0x8dfa,	// (0x00062cd6) popup_cale_preview_window

0x9866,	// (0x00063742) bg_popup_preview_window_pane_cp05_ParamLimits

0x9866,	// (0x00063742) bg_popup_preview_window_pane_cp05

0xd3b1,	// (0x0006728d) list_cale_preview_pane_ParamLimits

0xd3b1,	// (0x0006728d) list_cale_preview_pane

0x8e15,	// (0x00062cf1) list_double_cale_preview_pane_ParamLimits

0x8e15,	// (0x00062cf1) list_double_cale_preview_pane

0x8e27,	// (0x00062d03) list_single_cale_preview_pane_ParamLimits

0x8e27,	// (0x00062d03) list_single_cale_preview_pane

0x8e3d,	// (0x00062d19) list_single_cale_preview_pane_g1

0x8e45,	// (0x00062d21) list_single_cale_preview_pane_t1_ParamLimits

0x8e45,	// (0x00062d21) list_single_cale_preview_pane_t1

0x8e5a,	// (0x00062d36) list_double_cale_preview_pane_g1

0x8e62,	// (0x00062d3e) list_double_cale_preview_pane_t1_ParamLimits

0x8e62,	// (0x00062d3e) list_double_cale_preview_pane_t1

0x8e77,	// (0x00062d53) list_double_cale_preview_pane_t2_ParamLimits

0x8e77,	// (0x00062d53) list_double_cale_preview_pane_t2

0x0001,

0xfd20,	// (0x00069bfc) list_double_cale_preview_pane_t_ParamLimits

0xfd20,	// (0x00069bfc) list_double_cale_preview_pane_t

0x0df7,	// (0x0005acd3) main_ezdial_pane

0x9866,	// (0x00063742) main_sp_fs_email_pane_ParamLimits

0x85bc,	// (0x00062498) cmail_ddmenu_btn01_pane_ParamLimits

0x85bc,	// (0x00062498) cmail_ddmenu_btn01_pane

0x85cf,	// (0x000624ab) cmail_ddmenu_btn02_pane_ParamLimits

0x85cf,	// (0x000624ab) cmail_ddmenu_btn02_pane

0x85f2,	// (0x000624ce) cmail_ddmenu_btn03_pane_ParamLimits

0x85f2,	// (0x000624ce) cmail_ddmenu_btn03_pane

0x8618,	// (0x000624f4) main_sp_fs_ctrlbar_pane_ParamLimits

0x863c,	// (0x00062518) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xede8,	// (0x00068cc4) list_cmail_body_pane_ParamLimits

0xcff0,	// (0x00066ecc) bg_button_pane_cp12

0xd005,	// (0x00066ee1) list_single_cmail_header_detail_pane_g3_ParamLimits

0xd005,	// (0x00066ee1) list_single_cmail_header_detail_pane_g3

0x8b26,	// (0x00062a02) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8b26,	// (0x00062a02) list_single_cmail_header_detail_pane_t2

0x0001,

0xfca5,	// (0x00069b81) list_single_cmail_header_detail_pane_t_ParamLimits

0xfca5,	// (0x00069b81) list_single_cmail_header_detail_pane_t

0xd12c,	// (0x00067008) phacti_term_pane_t2_ParamLimits

0xd12c,	// (0x00067008) phacti_term_pane_t2

0x0001,

0xfcaf,	// (0x00069b8b) phacti_term_pane_t_ParamLimits

0xfcaf,	// (0x00069b8b) phacti_term_pane_t

0xd3bd,	// (0x00067299) aid_size_list_single_double

0x8e8f,	// (0x00062d6b) popup_ezdial_listscroll_window

0x8eab,	// (0x00062d87) popup_number_entry_window_cp01

0xac39,	// (0x00064b15) bg_popup_call_pane_cp09

0xd3c9,	// (0x000672a5) ezdial_list_pane

0xd3d1,	// (0x000672ad) scroll_pane_cp23

0xc07b,	// (0x00065f57) bg_button_pane_cp028_ParamLimits

0xc07b,	// (0x00065f57) bg_button_pane_cp028

0x8eb9,	// (0x00062d95) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8eb9,	// (0x00062d95) cmail_ddmenu_btn01_pane_g1

0x8ec5,	// (0x00062da1) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8ec5,	// (0x00062da1) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd25,	// (0x00069c01) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd25,	// (0x00069c01) cmail_ddmenu_btn01_pane_g

0xd3d9,	// (0x000672b5) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd3d9,	// (0x000672b5) cmail_ddmenu_btn01_pane_t1

0xc07b,	// (0x00065f57) bg_button_pane_cp029_ParamLimits

0xc07b,	// (0x00065f57) bg_button_pane_cp029

0x8ed1,	// (0x00062dad) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8ed1,	// (0x00062dad) cmail_ddmenu_btn02_pane_g1

0x8ee9,	// (0x00062dc5) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8ee9,	// (0x00062dc5) cmail_ddmenu_btn02_pane_t1

0x9866,	// (0x00063742) bg_button_pane_cp031_ParamLimits

0x9866,	// (0x00063742) bg_button_pane_cp031

0x8ed1,	// (0x00062dad) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8ed1,	// (0x00062dad) cmail_ddmenu_btn03_pane_g1

0x8ee9,	// (0x00062dc5) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8ee9,	// (0x00062dc5) cmail_ddmenu_btn03_pane_t1

0x5da8,	// (0x0005fc84) cell_dialer2_keypad_pane_t1_ParamLimits

0x5dc2,	// (0x0005fc9e) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5dc2,	// (0x0005fc9e) cell_dialer2_keypad_pane_t1_copy1

0x7e91,	// (0x00061d6d) ncimui_group_button_pane

0x9866,	// (0x00063742) main_sp_fs_calendar_pane_ParamLimits

0x8abf,	// (0x0006299b) list_single_cmail_header_caption_pane_ParamLimits

0x7512,	// (0x000613ee) aid_recal_txt_sm_pane

0x0df7,	// (0x0005acd3) mian_recal_day_pane

0xd1a4,	// (0x00067080) popup_sp_fs_cale_preview_window_ParamLimits

0x0df7,	// (0x0005acd3) list_recal_day_pane

0xd407,	// (0x000672e3) list_single_recal_day_pane_ParamLimits

0xd407,	// (0x000672e3) list_single_recal_day_pane

0xd419,	// (0x000672f5) list_single_recal_day_pane_g1_ParamLimits

0xd419,	// (0x000672f5) list_single_recal_day_pane_g1

0xd425,	// (0x00067301) list_single_recal_day_pane_g2_ParamLimits

0xd425,	// (0x00067301) list_single_recal_day_pane_g2

0xd434,	// (0x00067310) list_single_recal_day_pane_g3_ParamLimits

0xd434,	// (0x00067310) list_single_recal_day_pane_g3

0x8f0d,	// (0x00062de9) list_single_recal_day_pane_g4_ParamLimits

0x8f0d,	// (0x00062de9) list_single_recal_day_pane_g4

0xd440,	// (0x0006731c) list_single_recal_day_pane_g5_ParamLimits

0xd440,	// (0x0006731c) list_single_recal_day_pane_g5

0xd44f,	// (0x0006732b) list_single_recal_day_pane_g6_ParamLimits

0xd44f,	// (0x0006732b) list_single_recal_day_pane_g6

0x0005,

0xfd34,	// (0x00069c10) list_single_recal_day_pane_g_ParamLimits

0xfd34,	// (0x00069c10) list_single_recal_day_pane_g

0xd45b,	// (0x00067337) list_single_recal_day_pane_t1

0xd469,	// (0x00067345) list_single_recal_day_pane_t2

0x0001,

0xfd41,	// (0x00069c1d) list_single_recal_day_pane_t

0x8f20,	// (0x00062dfc) ncimui_query_button_pane_ParamLimits

0x8f20,	// (0x00062dfc) ncimui_query_button_pane

0x8f30,	// (0x00062e0c) ncimui_query_button_pane_t1_ParamLimits

0x8f30,	// (0x00062e0c) ncimui_query_button_pane_t1

0xd477,	// (0x00067353) ncimui_query_button_pane_t2_ParamLimits

0xd477,	// (0x00067353) ncimui_query_button_pane_t2

0x0001,

0xfd46,	// (0x00069c22) ncimui_query_button_pane_t_ParamLimits

0xfd46,	// (0x00069c22) ncimui_query_button_pane_t

0x8f43,	// (0x00062e1f) query_button_pane_ParamLimits

0x8f43,	// (0x00062e1f) query_button_pane

0x0df7,	// (0x0005acd3) bg_button_pane_cp0028

0xd48a,	// (0x00067366) query_button_pane_t1

0x3eaa,	// (0x0005dd86) main_tport_pane_ParamLimits

0x89ac,	// (0x00062888) bg_popup_window_pane_cp01_ParamLimits

0x89ac,	// (0x00062888) bg_popup_window_pane_cp01

0x89c6,	// (0x000628a2) heading_pane_cp08_ParamLimits

0x89c6,	// (0x000628a2) heading_pane_cp08

0x89da,	// (0x000628b6) heading_pane_cp07_ParamLimits

0x89da,	// (0x000628b6) heading_pane_cp07

0xcfb2,	// (0x00066e8e) cell_tport_appsw_pane_g2

0x0002,

0xfc92,	// (0x00069b6e) cell_tport_appsw_pane_g

0x3453,	// (0x0005d32f) input_candi_list_open_g1

0xa684,	// (0x00064560) list_cale_time_pane_g6_ParamLimits

0xa684,	// (0x00064560) list_cale_time_pane_g6

0x4c77,	// (0x0005eb53) aid_size_touch_calib_1_ParamLimits

0x4c77,	// (0x0005eb53) aid_size_touch_calib_1

0x4c83,	// (0x0005eb5f) aid_size_touch_calib_2_ParamLimits

0x4c83,	// (0x0005eb5f) aid_size_touch_calib_2

0x4c99,	// (0x0005eb75) aid_size_touch_calib_3_ParamLimits

0x4c99,	// (0x0005eb75) aid_size_touch_calib_3

0x4cb7,	// (0x0005eb93) aid_size_touch_calib_4_ParamLimits

0x4cb7,	// (0x0005eb93) aid_size_touch_calib_4

0x4ccd,	// (0x0005eba9) main_touch_calib_button_group_pane_ParamLimits

0x4ccd,	// (0x0005eba9) main_touch_calib_button_group_pane

0x4ce5,	// (0x0005ebc1) main_touch_calib_pane_g1_ParamLimits

0x4cf1,	// (0x0005ebcd) main_touch_calib_pane_g2_ParamLimits

0x4cfd,	// (0x0005ebd9) main_touch_calib_pane_g3_ParamLimits

0x4d09,	// (0x0005ebe5) main_touch_calib_pane_g4_ParamLimits

0xf716,	// (0x000695f2) main_touch_calib_pane_g_ParamLimits

0x4d15,	// (0x0005ebf1) main_touch_calib_pane_t1_ParamLimits

0x4d2f,	// (0x0005ec0b) main_touch_calib_pane_t2_ParamLimits

0x4d49,	// (0x0005ec25) main_touch_calib_pane_t3_ParamLimits

0x4d5d,	// (0x0005ec39) main_touch_calib_pane_t4_ParamLimits

0x4d71,	// (0x0005ec4d) main_touch_calib_pane_t5_ParamLimits

0xf71f,	// (0x000695fb) main_touch_calib_pane_t_ParamLimits

0xe505,	// (0x000683e1) list_single_fp_cale_pane_g3_ParamLimits

0xe505,	// (0x000683e1) list_single_fp_cale_pane_g3

0xdcfe,	// (0x00067bda) bg_button_pane_cp012_ParamLimits

0xdcfe,	// (0x00067bda) bg_vkb2_func_pane_cp03_ParamLimits

0x6dea,	// (0x00060cc6) cell_vitu2_function_top_pane_g1_ParamLimits

0xdcfe,	// (0x00067bda) bg_vkb2_func_pane_cp04_ParamLimits

0x7e31,	// (0x00061d0d) main_ncimui_button_group_pane_ParamLimits

0x7e31,	// (0x00061d0d) main_ncimui_button_group_pane

0x7e7f,	// (0x00061d5b) main_ncimui_pane_t3_ParamLimits

0x7e7f,	// (0x00061d5b) main_ncimui_pane_t3

0xd0da,	// (0x00066fb6) phacti_button_group_pane

0xd3bd,	// (0x00067299) aid_size_list_single_double_ParamLimits

0x8e8f,	// (0x00062d6b) popup_ezdial_listscroll_window_ParamLimits

0x8eab,	// (0x00062d87) popup_number_entry_window_cp01_ParamLimits

0x8f56,	// (0x00062e32) phacti_button_pane_ParamLimits

0x8f56,	// (0x00062e32) phacti_button_pane

0x0df7,	// (0x0005acd3) bg_button_pane_cp14

0xd498,	// (0x00067374) phacti_button_pane_t1

0x8f67,	// (0x00062e43) main_touch_calib_button_pane_ParamLimits

0x8f67,	// (0x00062e43) main_touch_calib_button_pane

0x9fe5,	// (0x00063ec1) bg_button_pane_cp18_ParamLimits

0x9fe5,	// (0x00063ec1) bg_button_pane_cp18

0xd4a6,	// (0x00067382) main_touch_calib_button_pane_t1_ParamLimits

0xd4a6,	// (0x00067382) main_touch_calib_button_pane_t1

0xd4bc,	// (0x00067398) main_touch_calib_button_pane_t2_ParamLimits

0xd4bc,	// (0x00067398) main_touch_calib_button_pane_t2

0x0001,

0xfd4b,	// (0x00069c27) main_touch_calib_button_pane_t_ParamLimits

0xfd4b,	// (0x00069c27) main_touch_calib_button_pane_t

0x0df7,	// (0x0005acd3) cell_ncimui_button_pane

0x0df7,	// (0x0005acd3) bg_button_pane_cp032

0xd4da,	// (0x000673b6) cell_ncimui_button_pane_t1

0xdc19,	// (0x00067af5) image3_infobar_pane_ParamLimits

0xdc19,	// (0x00067af5) image3_infobar_pane

0x8230,	// (0x0006210c) fs_bigclock_status_pane_ParamLimits

0x8230,	// (0x0006210c) fs_bigclock_status_pane

0x823d,	// (0x00062119) main_fs_bigclock_clock_pane_ParamLimits

0x823d,	// (0x00062119) main_fs_bigclock_clock_pane

0x8250,	// (0x0006212c) main_fs_bigclock_indi_pane_ParamLimits

0x8250,	// (0x0006212c) main_fs_bigclock_indi_pane

0x8268,	// (0x00062144) main_fs_bigclock_swipe_pane_ParamLimits

0x8268,	// (0x00062144) main_fs_bigclock_swipe_pane

0x0df7,	// (0x0005acd3) main_fs_clock_dumped_data

0xc9e5,	// (0x000668c1) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc9e5,	// (0x000668c1) list_single_fs_bigclock_indicator_pane_g1

0xca01,	// (0x000668dd) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xca01,	// (0x000668dd) list_single_fs_bigclock_indicator_pane_g2

0xca1b,	// (0x000668f7) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xca1b,	// (0x000668f7) list_single_fs_bigclock_indicator_pane_g3

0xca35,	// (0x00066911) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xca35,	// (0x00066911) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb7e,	// (0x00069a5a) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb7e,	// (0x00069a5a) list_single_fs_bigclock_indicator_pane_g

0xca5b,	// (0x00066937) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xca5b,	// (0x00066937) list_single_fs_bigclock_indicator_pane_t1

0xca83,	// (0x0006695f) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xca83,	// (0x0006695f) list_single_fs_bigclock_indicator_pane_t2

0xcaab,	// (0x00066987) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xcaab,	// (0x00066987) list_single_fs_bigclock_indicator_pane_t3

0xcad3,	// (0x000669af) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xcad3,	// (0x000669af) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb89,	// (0x00069a65) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb89,	// (0x00069a65) list_single_fs_bigclock_indicator_pane_t

0xd4e8,	// (0x000673c4) image3_infobar_fav_pane_ParamLimits

0xd4e8,	// (0x000673c4) image3_infobar_fav_pane

0xd4f8,	// (0x000673d4) image3_infobar_loc_pane_ParamLimits

0xd4f8,	// (0x000673d4) image3_infobar_loc_pane

0xd50c,	// (0x000673e8) image3_infobar_time_pane_ParamLimits

0xd50c,	// (0x000673e8) image3_infobar_time_pane

0xe19c,	// (0x00068078) image3_infobar_time_pane_g1

0xd51c,	// (0x000673f8) image3_infobar_time_pane_t1

0xe19c,	// (0x00068078) image3_infobar_loc_pane_g1

0xd52a,	// (0x00067406) image3_infobar_loc_pane_g2

0x0001,

0xfd50,	// (0x00069c2c) image3_infobar_loc_pane_g

0xd532,	// (0x0006740e) image3_infobar_loc_pane_t1

0xe19c,	// (0x00068078) image3_infobar_fav_pane_g1

0xd540,	// (0x0006741c) image3_infobar_fav_pane_g2

0x0001,

0xfd55,	// (0x00069c31) image3_infobar_fav_pane_g

0xd548,	// (0x00067424) fs_bigclock_status_battery_pane

0xd551,	// (0x0006742d) fs_bigclock_status_signal_pane

0xd55a,	// (0x00067436) fs_bigclock_status_title_pane

0xd563,	// (0x0006743f) fs_bigclock_status_signal_pane_g1

0xd56c,	// (0x00067448) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd5a,	// (0x00069c36) fs_bigclock_status_signal_pane_g

0xd574,	// (0x00067450) fs_bigclock_status_battery_pane_g1

0xd57d,	// (0x00067459) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd5f,	// (0x00069c3b) fs_bigclock_status_battery_pane_g

0xd585,	// (0x00067461) fs_bigclock_status_title_pane_t1

0xe19c,	// (0x00068078) main_fs_bigclock_clock_pane_g1

0xd593,	// (0x0006746f) main_fs_bigclock_clock_pane_g2

0xd593,	// (0x0006746f) main_fs_bigclock_clock_pane_g3

0xd593,	// (0x0006746f) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd64,	// (0x00069c40) main_fs_bigclock_clock_pane_g

0xd59b,	// (0x00067477) main_fs_bigclock_clock_pane_t1

0xd5a9,	// (0x00067485) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd6d,	// (0x00069c49) main_fs_bigclock_clock_pane_t

0xd5b8,	// (0x00067494) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd5b8,	// (0x00067494) list_single_fs_bigclock_indicator_pane

0x8f7c,	// (0x00062e58) list_single_fs_bigclock_pane_ParamLimits

0x8f7c,	// (0x00062e58) list_single_fs_bigclock_pane

0xd5d2,	// (0x000674ae) main_fs_bigclock_indicator_pane_t1

0xd5e1,	// (0x000674bd) list_single_fs_bigclock_pane_g1

0xd5e9,	// (0x000674c5) list_single_fs_bigclock_pane_t1

0xe19c,	// (0x00068078) main_fs_bigclock_swipe_pane_g1

0xd627,	// (0x00067503) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd7e,	// (0x00069c5a) main_fs_bigclock_swipe_pane_g

0xd62f,	// (0x0006750b) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd62f,	// (0x0006750b) main_fs_bigclock_swipe_pane_t1

0x2c81,	// (0x0005cb5d) call_type_pane_ParamLimits

0x0df7,	// (0x0005acd3) main_btmg_pane

0xd29d,	// (0x00067179) list_single_cale_mrui_row_pane_g2_ParamLimits

0xd29d,	// (0x00067179) list_single_cale_mrui_row_pane_g2

0x0001,

0xfcf1,	// (0x00069bcd) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcf1,	// (0x00069bcd) list_single_cale_mrui_row_pane_g

0xd3f7,	// (0x000672d3) list_recal_vselct_arw_lo_pane

0xd3ff,	// (0x000672db) list_recal_vselct_arw_up_pane

0x7509,	// (0x000613e5) list_recal_vselct_pane

0xd64c,	// (0x00067528) btmg_button_pane

0x8fe1,	// (0x00062ebd) main_btmg_pane_g1

0x0df7,	// (0x0005acd3) bg_button_pane_cp044

0xd656,	// (0x00067532) btmg_button_pane_t1

0xc073,	// (0x00065f4f) aid_listscroll_gen

0x9866,	// (0x00063742) main_cntbar_detail_pane

0xcfd0,	// (0x00066eac) list_cmail_folder_pane

0xcfe0,	// (0x00066ebc) sp_fs_scroll_pane_cp03_ParamLimits

0x8feb,	// (0x00062ec7) list_single_fs_dyc_pane_cp01_ParamLimits

0x8feb,	// (0x00062ec7) list_single_fs_dyc_pane_cp01

0xd664,	// (0x00067540) aid_size_cmail_indent

0xd66d,	// (0x00067549) list_single_dyc_row_pane_cp01

0x902d,	// (0x00062f09) cntbar_detail_list_pane_ParamLimits

0x902d,	// (0x00062f09) cntbar_detail_list_pane

0x9079,	// (0x00062f55) main_cntbar_detail_cont_pane_ParamLimits

0x9079,	// (0x00062f55) main_cntbar_detail_cont_pane

0x2ba6,	// (0x0005ca82) scroll_pane_cp032_ParamLimits

0x2ba6,	// (0x0005ca82) scroll_pane_cp032

0x908d,	// (0x00062f69) cntbar_detail_list_event_pane_ParamLimits

0x908d,	// (0x00062f69) cntbar_detail_list_event_pane

0x903d,	// (0x00062f19) cntbar_detail_list_shct_pane

0xa4fd,	// (0x000643d9) aid_list_gen

0xd676,	// (0x00067552) aid_scroll

0xd67f,	// (0x0006755b) aid_size_touch_scroll_bar

0x909d,	// (0x00062f79) aid_list_double

0xd688,	// (0x00067564) aid_list_single

0x90a6,	// (0x00062f82) aid_list_single_lg

0xd691,	// (0x0006756d) aid_list_z_g_a_sm

0xd699,	// (0x00067575) aid_list_z_g_d

0xd6a1,	// (0x0006757d) aid_txt_z_prm

0x90af,	// (0x00062f8b) aid_txt_z_prm_cp01

0x90bd,	// (0x00062f99) aid_txt_z_sec

0x90cb,	// (0x00062fa7) main_cntbar_detail_cont_pane_g1_ParamLimits

0x90cb,	// (0x00062fa7) main_cntbar_detail_cont_pane_g1

0x90df,	// (0x00062fbb) main_cntbar_detail_cont_pane_g2_ParamLimits

0x90df,	// (0x00062fbb) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd83,	// (0x00069c5f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd83,	// (0x00069c5f) main_cntbar_detail_cont_pane_g

0xd6af,	// (0x0006758b) main_cntbar_detail_cont_pane_t1

0xd6bd,	// (0x00067599) main_cntbar_detail_cont_pane_t2

0xd6cb,	// (0x000675a7) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd88,	// (0x00069c64) main_cntbar_detail_cont_pane_t

0x90ef,	// (0x00062fcb) cell_cntbar_detail_list_shct_pane_ParamLimits

0x90ef,	// (0x00062fcb) cell_cntbar_detail_list_shct_pane

0xd6d9,	// (0x000675b5) cntbar_detail_list_shct_pane_g1

0xd6e2,	// (0x000675be) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd8f,	// (0x00069c6b) cntbar_detail_list_shct_pane_g

0x9103,	// (0x00062fdf) cntbar_detail_list_event_pane_g1_ParamLimits

0x9103,	// (0x00062fdf) cntbar_detail_list_event_pane_g1

0x910f,	// (0x00062feb) cntbar_detail_list_event_pane_g2_ParamLimits

0x910f,	// (0x00062feb) cntbar_detail_list_event_pane_g2

0x0005,

0xfd94,	// (0x00069c70) cntbar_detail_list_event_pane_g_ParamLimits

0xfd94,	// (0x00069c70) cntbar_detail_list_event_pane_g

0x917b,	// (0x00063057) cntbar_detail_list_event_pane_t1_ParamLimits

0x917b,	// (0x00063057) cntbar_detail_list_event_pane_t1

0x9190,	// (0x0006306c) cntbar_detail_list_event_pane_t2_ParamLimits

0x9190,	// (0x0006306c) cntbar_detail_list_event_pane_t2

0x0002,

0xfda1,	// (0x00069c7d) cntbar_detail_list_event_pane_t_ParamLimits

0xfda1,	// (0x00069c7d) cntbar_detail_list_event_pane_t

0xe19c,	// (0x00068078) cell_cntbar_detail_list_shct_pane_g1

0x2fe3,	// (0x0005cebf) navi_pane_mv_g3

0x9866,	// (0x00063742) main_cntbar_detail_pane_ParamLimits

0x0df7,	// (0x0005acd3) main_notif_wgt_pane

0xda2f,	// (0x0006790b) aid_tch_main_mp4_pane_g4

0xdc11,	// (0x00067aed) popup_slider_window_cp02

0xd3ee,	// (0x000672ca) list_recal_day_event_pane

0x9001,	// (0x00062edd) cntbar_detail_btn_pane_ParamLimits

0x9001,	// (0x00062edd) cntbar_detail_btn_pane

0x9017,	// (0x00062ef3) cntbar_detail_btn_pane_cp01_ParamLimits

0x9017,	// (0x00062ef3) cntbar_detail_btn_pane_cp01

0x903d,	// (0x00062f19) cntbar_detail_list_shct_pane_ParamLimits

0x904d,	// (0x00062f29) cntbar_detail_pane_g1_ParamLimits

0x904d,	// (0x00062f29) cntbar_detail_pane_g1

0x905d,	// (0x00062f39) cntbar_detail_pane_t1_ParamLimits

0x905d,	// (0x00062f39) cntbar_detail_pane_t1

0x911b,	// (0x00062ff7) cntbar_detail_list_event_pane_g3_ParamLimits

0x911b,	// (0x00062ff7) cntbar_detail_list_event_pane_g3

0x9133,	// (0x0006300f) cntbar_detail_list_event_pane_g4_ParamLimits

0x9133,	// (0x0006300f) cntbar_detail_list_event_pane_g4

0x914b,	// (0x00063027) cntbar_detail_list_event_pane_g5_ParamLimits

0x914b,	// (0x00063027) cntbar_detail_list_event_pane_g5

0x9163,	// (0x0006303f) cntbar_detail_list_event_pane_g6_ParamLimits

0x9163,	// (0x0006303f) cntbar_detail_list_event_pane_g6

0x91a5,	// (0x00063081) cntbar_detail_list_event_pane_t3_ParamLimits

0x91a5,	// (0x00063081) cntbar_detail_list_event_pane_t3

0x91b7,	// (0x00063093) popup_notif_wgt_window_ParamLimits

0x91b7,	// (0x00063093) popup_notif_wgt_window

0x91d0,	// (0x000630ac) popup_submenu_window_cp01_ParamLimits

0x91d0,	// (0x000630ac) popup_submenu_window_cp01

0xac39,	// (0x00064b15) bg_popup_window_pane_cp10

0xd6eb,	// (0x000675c7) listscroll_notif_wgt_pane

0xd6f5,	// (0x000675d1) list_notif_wgt_window

0xd6fe,	// (0x000675da) scroll_pane_cp033

0xd707,	// (0x000675e3) list_notif_wgt_row_pane_ParamLimits

0xd707,	// (0x000675e3) list_notif_wgt_row_pane

0xd719,	// (0x000675f5) aid_size_list_notif_wgt_del

0xd722,	// (0x000675fe) list_notif_wgt_row_pane_g1

0xd72a,	// (0x00067606) list_notif_wgt_row_pane_g2

0xd732,	// (0x0006760e) list_notif_wgt_row_pane_g3

0x0002,

0xfda8,	// (0x00069c84) list_notif_wgt_row_pane_g

0xd73b,	// (0x00067617) list_notif_wgt_row_pane_t1

0xd749,	// (0x00067625) list_notif_wgt_row_pane_t2

0xd757,	// (0x00067633) list_notif_wgt_row_pane_t3

0x0002,

0xfdaf,	// (0x00069c8b) list_notif_wgt_row_pane_t

0xee33,	// (0x00068d0f) list_recal_day_event_pane_g1

0xd765,	// (0x00067641) list_recal_day_event_pane_t1

0x0df7,	// (0x0005acd3) bg_button_pane_cp045

0xd774,	// (0x00067650) cntbar_detail_btn_pane_t1

0xc07b,	// (0x00065f57) main_callh_pane_ParamLimits

0xc07b,	// (0x00065f57) main_callh_pane

0x0df7,	// (0x0005acd3) main_coverflow0_pane

0x0df7,	// (0x0005acd3) main_wgtman_pane

0x8276,	// (0x00062152) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8276,	// (0x00062152) main_fs_bigclock_unlock_btn_pane

0xcfaa,	// (0x00066e86) bg_button_pane_cp16

0xcfba,	// (0x00066e96) cell_tport_appsw_pane_g3

0x91e2,	// (0x000630be) cf0_flow_pane_ParamLimits

0x91e2,	// (0x000630be) cf0_flow_pane

0xd782,	// (0x0006765e) listscroll_cf0_pane

0xd78b,	// (0x00067667) main_cf0_pane_g1

0x91f7,	// (0x000630d3) main_cf0_pane_t1_ParamLimits

0x91f7,	// (0x000630d3) main_cf0_pane_t1

0x920e,	// (0x000630ea) main_cf0_pane_t2_ParamLimits

0x920e,	// (0x000630ea) main_cf0_pane_t2

0x0001,

0xfdb6,	// (0x00069c92) main_cf0_pane_t_ParamLimits

0xfdb6,	// (0x00069c92) main_cf0_pane_t

0xd795,	// (0x00067671) scroll_pane_cp11

0x9225,	// (0x00063101) cf0_flow_pane_g1

0x922d,	// (0x00063109) cf0_flow_pane_g2

0x0001,

0xfdbb,	// (0x00069c97) cf0_flow_pane_g

0x9235,	// (0x00063111) cf0_flow_pane_t1

0x0df7,	// (0x0005acd3) main_call6_pane

0x0df7,	// (0x0005acd3) main_calllock_pane

0x9243,	// (0x0006311f) call6_btn_grp_pane_ParamLimits

0x9243,	// (0x0006311f) call6_btn_grp_pane

0x925d,	// (0x00063139) call6_pane_g1_ParamLimits

0x925d,	// (0x00063139) call6_pane_g1

0x9272,	// (0x0006314e) popup_call6_1st_window_ParamLimits

0x9272,	// (0x0006314e) popup_call6_1st_window

0x9283,	// (0x0006315f) popup_call6_2nd_window_ParamLimits

0x9283,	// (0x0006315f) popup_call6_2nd_window

0x9294,	// (0x00063170) cell_call6_btn_pane_ParamLimits

0x9294,	// (0x00063170) cell_call6_btn_pane

0xac39,	// (0x00064b15) bg_popup_call2_in_pane_cp03

0xd7a0,	// (0x0006767c) popup_call6_1st_window_g1

0xd7a8,	// (0x00067684) popup_call6_1st_window_g2

0xd7b0,	// (0x0006768c) popup_call6_1st_window_g3

0x0002,

0xfdc0,	// (0x00069c9c) popup_call6_1st_window_g

0xd7b8,	// (0x00067694) popup_call6_1st_window_t1

0xd7c7,	// (0x000676a3) popup_call6_1st_window_t2

0xd7d7,	// (0x000676b3) popup_call6_1st_window_t3

0x0002,

0xfdc7,	// (0x00069ca3) popup_call6_1st_window_t

0xac39,	// (0x00064b15) bg_popup_call2_in_pane_cp04

0xd7a0,	// (0x0006767c) popup_call6_2nd_window_g1

0xd7a8,	// (0x00067684) popup_call6_2nd_window_g2

0xd7b0,	// (0x0006768c) popup_call6_2nd_window_g3

0x0002,

0xfdc0,	// (0x00069c9c) popup_call6_2nd_window_g

0xd7b8,	// (0x00067694) popup_call6_2nd_window_t1

0x0df7,	// (0x0005acd3) bg_button_pane_cp15

0xd7e7,	// (0x000676c3) cell_call6_btn_pane_g1

0xd7f0,	// (0x000676cc) cell_call6_btn_pane_t1

0x92a8,	// (0x00063184) listscroll_wgtman_pane_ParamLimits

0x92a8,	// (0x00063184) listscroll_wgtman_pane

0x92cb,	// (0x000631a7) wgtman_btn_pane_ParamLimits

0x92cb,	// (0x000631a7) wgtman_btn_pane

0xaaf0,	// (0x000649cc) aid_scroll_copy1

0xd7ff,	// (0x000676db) list_wgtman_pane

0x930e,	// (0x000631ea) wgtman_btn_pane_g1_ParamLimits

0x930e,	// (0x000631ea) wgtman_btn_pane_g1

0x933a,	// (0x00063216) wgtman_btn_pane_t1_ParamLimits

0x933a,	// (0x00063216) wgtman_btn_pane_t1

0xd809,	// (0x000676e5) wgtman_btn_pane_t2_ParamLimits

0xd809,	// (0x000676e5) wgtman_btn_pane_t2

0x0001,

0xfdce,	// (0x00069caa) wgtman_btn_pane_t_ParamLimits

0xfdce,	// (0x00069caa) wgtman_btn_pane_t

0x9377,	// (0x00063253) listrow_wgtman_pane_ParamLimits

0x9377,	// (0x00063253) listrow_wgtman_pane

0x9389,	// (0x00063265) listrow_wgtman_pane_g1

0x9392,	// (0x0006326e) listrow_wgtman_pane_g2

0x0001,

0xfdd3,	// (0x00069caf) listrow_wgtman_pane_g

0x939c,	// (0x00063278) listrow_wgtman_pane_t1

0x93aa,	// (0x00063286) listrow_wgtman_pane_t2

0x0001,

0xfdd8,	// (0x00069cb4) listrow_wgtman_pane_t

0x93b8,	// (0x00063294) wait_bar_pane_cp09

0xd820,	// (0x000676fc) main_calllock_btn_pane

0xd82a,	// (0x00067706) main_calllock_pane_g1

0x0df7,	// (0x0005acd3) bg_button_pane_cp17

0xd836,	// (0x00067712) main_calllock_btn_pane_g1

0xd83f,	// (0x0006771b) main_calllock_btn_pane_t1

0x0df7,	// (0x0005acd3) main_dialer3_pane

0x0df7,	// (0x0005acd3) main_fmrd2_pane

0xe19c,	// (0x00068078) main_fs_bigclock_unlock_btn_pane_g1

0xd856,	// (0x00067732) main_fs_bigclock_unlock_btn_pane_t1

0x93c0,	// (0x0006329c) area_fmrd2_info_pane_ParamLimits

0x93c0,	// (0x0006329c) area_fmrd2_info_pane

0x93d1,	// (0x000632ad) area_fmrd2_visual_pane_ParamLimits

0x93d1,	// (0x000632ad) area_fmrd2_visual_pane

0x93df,	// (0x000632bb) fmrd2_indi_pane_ParamLimits

0x93df,	// (0x000632bb) fmrd2_indi_pane

0x93ec,	// (0x000632c8) area_fmrd2_visual_pane_g1

0x93f4,	// (0x000632d0) area_fmrd2_visual_pane_t1

0x9404,	// (0x000632e0) area_fmrd2_visual_pane_t2

0x9414,	// (0x000632f0) area_fmrd2_visual_pane_t3

0x0002,

0xfde2,	// (0x00069cbe) area_fmrd2_visual_pane_t

0x9424,	// (0x00063300) area_fmrd2_info_pane_g1

0x942c,	// (0x00063308) area_fmrd2_info_pane_t1

0x943c,	// (0x00063318) area_fmrd2_info_pane_t2

0x944c,	// (0x00063328) area_fmrd2_info_pane_t3

0x945c,	// (0x00063338) area_fmrd2_info_pane_t4

0x0003,

0xfde9,	// (0x00069cc5) area_fmrd2_info_pane_t

0x946a,	// (0x00063346) fmrd2_indi_pane_t1

0x947a,	// (0x00063356) fmrd2_indi_pane_t2

0x948a,	// (0x00063366) fmrd2_indi_pane_t3

0x0002,

0xfdf2,	// (0x00069cce) fmrd2_indi_pane_t

0xca44,	// (0x00066920) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xca44,	// (0x00066920) list_single_fs_bigclock_indicator_pane_g5

0xcae8,	// (0x000669c4) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xcae8,	// (0x000669c4) list_single_fs_bigclock_indicator_pane_t5

0x8c0c,	// (0x00062ae8) aid_cell_bcale_month_pane_ParamLimits

0x8c0c,	// (0x00062ae8) aid_cell_bcale_month_pane

0x8c1e,	// (0x00062afa) bcale_month_pane_ParamLimits

0x8c1e,	// (0x00062afa) bcale_month_pane

0x8c36,	// (0x00062b12) bcale_preview_pane_ParamLimits

0x8c36,	// (0x00062b12) bcale_preview_pane

0xd5e9,	// (0x000674c5) list_single_fs_bigclock_pane_t1_ParamLimits

0xd603,	// (0x000674df) list_single_fs_bigclock_pane_t2_ParamLimits

0xd603,	// (0x000674df) list_single_fs_bigclock_pane_t2

0x0001,

0xfd79,	// (0x00069c55) list_single_fs_bigclock_pane_t_ParamLimits

0xfd79,	// (0x00069c55) list_single_fs_bigclock_pane_t

0xd84e,	// (0x0006772a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfddd,	// (0x00069cb9) main_fs_bigclock_unlock_btn_pane_g

0x949a,	// (0x00063376) aid_dia3_key_size_ParamLimits

0x949a,	// (0x00063376) aid_dia3_key_size

0x94a9,	// (0x00063385) aid_dia3_listrow_size_ParamLimits

0x94a9,	// (0x00063385) aid_dia3_listrow_size

0x94be,	// (0x0006339a) dia3_keypad_fun_pane_ParamLimits

0x94be,	// (0x0006339a) dia3_keypad_fun_pane

0x94da,	// (0x000633b6) dia3_keypad_num_pane_ParamLimits

0x94da,	// (0x000633b6) dia3_keypad_num_pane

0x94f5,	// (0x000633d1) dia3_listscroll_pane_ParamLimits

0x94f5,	// (0x000633d1) dia3_listscroll_pane

0x9508,	// (0x000633e4) dia3_numentry_pane_ParamLimits

0x9508,	// (0x000633e4) dia3_numentry_pane

0xd864,	// (0x00067740) dia3_list_pane

0xd86f,	// (0x0006774b) scroll_pane_cp12

0x0df7,	// (0x0005acd3) bg_dia3_numentry_pane

0x951c,	// (0x000633f8) dia3_numentry_pane_t1

0x952b,	// (0x00063407) cell_dia3_key_num_pane

0x9533,	// (0x0006340f) cell_dia3_key0_fun_pane_ParamLimits

0x9533,	// (0x0006340f) cell_dia3_key0_fun_pane

0x9547,	// (0x00063423) cell_dia3_key1_fun_pane_ParamLimits

0x9547,	// (0x00063423) cell_dia3_key1_fun_pane

0x955f,	// (0x0006343b) dia3_listrow_pane

0xc744,	// (0x00066620) bg_dia3_numentry_pane_g1

0x0df7,	// (0x0005acd3) bg_button_pane_cp21

0xd87a,	// (0x00067756) cell_dia3_key_num_pane_t1

0xd888,	// (0x00067764) cell_dia3_key_num_pane_t2

0xd897,	// (0x00067773) cell_dia3_key_num_pane_t3

0xd8a6,	// (0x00067782) cell_dia3_key_num_pane_t4

0x0003,

0xfdf9,	// (0x00069cd5) cell_dia3_key_num_pane_t

0x0df7,	// (0x0005acd3) bg_button_pane_cp19

0x9571,	// (0x0006344d) cell_dia3_key0_fun_pane_g1

0x0df7,	// (0x0005acd3) bg_button_pane_cp20

0x9579,	// (0x00063455) cell_dia3_key1_fun_pane_g1

0x9581,	// (0x0006345d) area_left_week_number_pane

0x958a,	// (0x00063466) area_top_day_name_pane

0x9593,	// (0x0006346f) frame_month_view_pane

0x959b,	// (0x00063477) grid_month_view_pane

0x95a5,	// (0x00063481) cell_top_day_name_pane_ParamLimits

0x95a5,	// (0x00063481) cell_top_day_name_pane

0x95bb,	// (0x00063497) cell_area_left_week_number_pane_ParamLimits

0x95bb,	// (0x00063497) cell_area_left_week_number_pane

0x95cf,	// (0x000634ab) cell_month_view_pane_ParamLimits

0x95cf,	// (0x000634ab) cell_month_view_pane

0xd8b5,	// (0x00067791) frm_month_g1

0x95ea,	// (0x000634c6) frm_month_g2

0x95f2,	// (0x000634ce) frm_month_g3

0x95fa,	// (0x000634d6) frm_month_g4

0x9602,	// (0x000634de) frm_month_g5

0x960a,	// (0x000634e6) frm_month_g6

0x9612,	// (0x000634ee) frm_month_g7

0xd8be,	// (0x0006779a) frm_month_g8

0x961a,	// (0x000634f6) frm_month_g9

0x9623,	// (0x000634ff) frm_month_g10

0x962c,	// (0x00063508) frm_month_g11

0x9635,	// (0x00063511) frm_month_g12

0x963e,	// (0x0006351a) frm_month_g13

0x9647,	// (0x00063523) frm_month_g14

0x9650,	// (0x0006352c) frm_month_g15

0x9659,	// (0x00063535) frm_month_g16

0x000f,

0xfe02,	// (0x00069cde) frm_month_g

0x9662,	// (0x0006353e) cell_top_day_name_pane_t1

0x9671,	// (0x0006354d) cell_area_left_week_number_pane_g1

0x9662,	// (0x0006353e) cell_area_left_week_number_pane_t1

0xe19c,	// (0x00068078) cell_month_view_pane_g1

0x9679,	// (0x00063555) cell_month_view_pane_t1

0x0df7,	// (0x0005acd3) main_fps_pane

0xcd22,	// (0x00066bfe) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xcd22,	// (0x00066bfe) cmail_ddmenu_btn02_pane_cp1

0xcd3e,	// (0x00066c1a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xcd3e,	// (0x00066c1a) cmail_ddmenu_btn02_pane_cp2

0x8edd,	// (0x00062db9) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8edd,	// (0x00062db9) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd2a,	// (0x00069c06) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd2a,	// (0x00069c06) cmail_ddmenu_btn02_pane_g

0x8efb,	// (0x00062dd7) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8efb,	// (0x00062dd7) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd2f,	// (0x00069c0b) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd2f,	// (0x00069c0b) cmail_ddmenu_btn02_pane_t

0x9688,	// (0x00063564) fps_text_pane_ParamLimits

0x9688,	// (0x00063564) fps_text_pane

0x969f,	// (0x0006357b) main_fps_pane_g1_ParamLimits

0x969f,	// (0x0006357b) main_fps_pane_g1

0x96b9,	// (0x00063595) wait_bar_pane_cp010_ParamLimits

0x96b9,	// (0x00063595) wait_bar_pane_cp010

0x96ca,	// (0x000635a6) fps_text_pane_t1_ParamLimits

0x96ca,	// (0x000635a6) fps_text_pane_t1

0xf072,	// (0x00068f4e) cam4_image_uncrop_pane_g1

0xf07b,	// (0x00068f57) cam4_image_uncrop_pane_g2

0x624f,	// (0x0006012b) cam4_image_uncrop_pane_g3

0x6258,	// (0x00060134) cam4_image_uncrop_pane_g4

0x0003,

0xf84c,	// (0x00069728) cam4_image_uncrop_pane_g

0x955f,	// (0x0006343b) dia3_listrow_pane_ParamLimits

0x0df7,	// (0x0005acd3) main_phob2_pane

0x8a45,	// (0x00062921) cell_tport_appsw_pane_cp02_ParamLimits

0x8a45,	// (0x00062921) cell_tport_appsw_pane_cp02

0x8a59,	// (0x00062935) cell_tport_appsw_pane_cp03_ParamLimits

0x8a59,	// (0x00062935) cell_tport_appsw_pane_cp03

0x0df7,	// (0x0005acd3) phob2_contact_card_pane

0x0df7,	// (0x0005acd3) phob2_listscroll_pane

0xd8c7,	// (0x000677a3) phob2_list_pane

0xd8cf,	// (0x000677ab) scroll_pane_cp034

0x96e2,	// (0x000635be) phob2_cc_data_pane_ParamLimits

0x96e2,	// (0x000635be) phob2_cc_data_pane

0x9701,	// (0x000635dd) phob2_cc_listscroll_pane_ParamLimits

0x9701,	// (0x000635dd) phob2_cc_listscroll_pane

0x971f,	// (0x000635fb) list_double_large_graphic_phob2_pane_ParamLimits

0x971f,	// (0x000635fb) list_double_large_graphic_phob2_pane

0xd8d7,	// (0x000677b3) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd8d7,	// (0x000677b3) list_double_large_graphic_phob2_pane_g1

0xd8e4,	// (0x000677c0) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd8e4,	// (0x000677c0) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe23,	// (0x00069cff) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe23,	// (0x00069cff) list_double_large_graphic_phob2_pane_g

0xd8f0,	// (0x000677cc) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xd8f0,	// (0x000677cc) list_double_large_graphic_phob2_pane_t1

0xd905,	// (0x000677e1) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xd905,	// (0x000677e1) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe28,	// (0x00069d04) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe28,	// (0x00069d04) list_double_large_graphic_phob2_pane_t

0x0df7,	// (0x0005acd3) list_highlight_pane_cp024

0xd917,	// (0x000677f3) phob2_cc_button_pane

0x9731,	// (0x0006360d) phob2_cc_data_pane_g1_ParamLimits

0x9731,	// (0x0006360d) phob2_cc_data_pane_g1

0x9746,	// (0x00063622) phob2_cc_data_pane_g2_ParamLimits

0x9746,	// (0x00063622) phob2_cc_data_pane_g2

0x0001,

0xfe2d,	// (0x00069d09) phob2_cc_data_pane_g_ParamLimits

0xfe2d,	// (0x00069d09) phob2_cc_data_pane_g

0x9758,	// (0x00063634) phob2_cc_data_pane_t1_ParamLimits

0x9758,	// (0x00063634) phob2_cc_data_pane_t1

0x9770,	// (0x0006364c) phob2_cc_data_pane_t2_ParamLimits

0x9770,	// (0x0006364c) phob2_cc_data_pane_t2

0x9788,	// (0x00063664) phob2_cc_data_pane_t3_ParamLimits

0x9788,	// (0x00063664) phob2_cc_data_pane_t3

0x0002,

0xfe32,	// (0x00069d0e) phob2_cc_data_pane_t_ParamLimits

0xfe32,	// (0x00069d0e) phob2_cc_data_pane_t

0xd91f,	// (0x000677fb) phob2_cc_list_pane_ParamLimits

0xd91f,	// (0x000677fb) phob2_cc_list_pane

0xf084,	// (0x00068f60) scroll_pane_cp035_ParamLimits

0xf084,	// (0x00068f60) scroll_pane_cp035

0x9866,	// (0x00063742) bg_button_pane_cp033

0xd92b,	// (0x00067807) phob2_cc_button_pane_g1

0xd937,	// (0x00067813) phob2_cc_button_pane_t1

0xd94c,	// (0x00067828) phob2_cc_button_pane_t2

0x0001,

0xfe39,	// (0x00069d15) phob2_cc_button_pane_t

0x97a0,	// (0x0006367c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x97a0,	// (0x0006367c) list_double_large_graphic_phob2_cc_pane

0x97b2,	// (0x0006368e) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x97b2,	// (0x0006368e) list_double_large_graphic_phob2_cc_pane_g1

0x97be,	// (0x0006369a) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x97be,	// (0x0006369a) list_double_large_graphic_phob2_cc_pane_g2

0x97ca,	// (0x000636a6) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x97ca,	// (0x000636a6) list_double_large_graphic_phob2_cc_pane_g3

0x97d6,	// (0x000636b2) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x97d6,	// (0x000636b2) list_double_large_graphic_phob2_cc_pane_g4

0x97e2,	// (0x000636be) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x97e2,	// (0x000636be) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe3e,	// (0x00069d1a) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe3e,	// (0x00069d1a) list_double_large_graphic_phob2_cc_pane_g

0x97ee,	// (0x000636ca) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x97ee,	// (0x000636ca) list_double_large_graphic_phob2_cc_pane_t1

0x9817,	// (0x000636f3) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9817,	// (0x000636f3) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe49,	// (0x00069d25) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe49,	// (0x00069d25) list_double_large_graphic_phob2_cc_pane_t

0xd95e,	// (0x0006783a) list_highlight_pane_cp025_ParamLimits

0xd95e,	// (0x0006783a) list_highlight_pane_cp025

0x9866,	// (0x00063742) bg_button_pane_cp033_ParamLimits

0xd92b,	// (0x00067807) phob2_cc_button_pane_g1_ParamLimits

0xd937,	// (0x00067813) phob2_cc_button_pane_t1_ParamLimits

0xd94c,	// (0x00067828) phob2_cc_button_pane_t2_ParamLimits

0xfe39,	// (0x00069d15) phob2_cc_button_pane_t_ParamLimits

0x1053,	// (0x0005af2f) popup_wgtman_window

0xed0f,	// (0x00068beb) scroll_pane_cp038

0x92f0,	// (0x000631cc) wgtman_btn_pane_cp_01_ParamLimits

0x92f0,	// (0x000631cc) wgtman_btn_pane_cp_01

0xd96c,	// (0x00067848) wgtman_content_pane

0xd975,	// (0x00067851) wgtman_heading_pane

0x0df7,	// (0x0005acd3) bg_heading_pane_cp02

0xd97e,	// (0x0006785a) wgtman_heading_pane_g1

0xd986,	// (0x00067862) wgtman_heading_pane_t1

0xd994,	// (0x00067870) scroll_pane_cp036

0xd99c,	// (0x00067878) wgtman_list_pane

0xd9a4,	// (0x00067880) wgtman_list_pane_t1_ParamLimits

0xd9a4,	// (0x00067880) wgtman_list_pane_t1

0xdc6b,	// (0x00067b47) cam4_grid_pane

0x6f93,	// (0x00060e6f) bg_button_pane_cp015_ParamLimits

0x6fa5,	// (0x00060e81) bg_button_pane_cp016_ParamLimits

0x6fb8,	// (0x00060e94) bg_button_pane_cp017_ParamLimits

0x7010,	// (0x00060eec) popup_vitu2_query_window_g3_ParamLimits

0x7010,	// (0x00060eec) popup_vitu2_query_window_g3

0x70cd,	// (0x00060fa9) popup_vitu2_query_window_t6_ParamLimits

0x70cd,	// (0x00060fa9) popup_vitu2_query_window_t6

0x70f8,	// (0x00060fd4) popup_vitu2_query_window_t7_ParamLimits

0x70f8,	// (0x00060fd4) popup_vitu2_query_window_t7

0xf072,	// (0x00068f4e) cam4_grid_pane_g1

0xf07b,	// (0x00068f57) cam4_grid_pane_g2

0xd9be,	// (0x0006789a) cam4_grid_pane_g3

0xd9c7,	// (0x000678a3) cam4_grid_pane_g4

0x0003,

0xfe4e,	// (0x00069d2a) cam4_grid_pane_g

0x1e23,	// (0x0005bcff) aid_placing_vt_slider_lsc_ParamLimits

0x212e,	// (0x0005c00a) vidtel_button_pane_ParamLimits

0x212e,	// (0x0005c00a) vidtel_button_pane

0x0df7,	// (0x0005acd3) bg_button_pane_cp034

0x9840,	// (0x0006371c) vidtel_button_pane_g1

0xd9d2,	// (0x000678ae) vidtel_button_pane_t1

0xee11,	// (0x00068ced) aid_size_vtel_slider_touch

0xf084,	// (0x00068f60) scroll_pane_cp039

0xc782,	// (0x0006665e) ncim_query_button_pane_cp01_ParamLimits

0xc7a1,	// (0x0006667d) ncimui_query_pane_g1_ParamLimits

0x9866,	// (0x00063742) input_focus_pane_cp012_ParamLimits

0xc7c6,	// (0x000666a2) ncim_query_entry_pane_t1_ParamLimits

0xf084,	// (0x00068f60) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small
