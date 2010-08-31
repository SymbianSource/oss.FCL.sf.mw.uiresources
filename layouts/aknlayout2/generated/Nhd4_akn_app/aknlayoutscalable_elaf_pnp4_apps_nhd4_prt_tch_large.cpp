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

#include "aknlayoutscalable_elaf_pnp4_apps_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00064f7a };

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
0x6f69,	// (0x0006bee3) Screen

0x6f75,	// (0x0006beef) application_window

0x6fdb,	// (0x0006bf55) area_bottom_pane_ParamLimits

0x6fdb,	// (0x0006bf55) area_bottom_pane

0x7034,	// (0x0006bfae) area_top_pane_ParamLimits

0x7034,	// (0x0006bfae) area_top_pane

0xe945,	// (0x000738bf) call_video_uplink_pane_ParamLimits

0xe945,	// (0x000738bf) call_video_uplink_pane

0x70c1,	// (0x0006c03b) main_pane_ParamLimits

0x70c1,	// (0x0006c03b) main_pane

0x2100,	// (0x0006707a) context_pane

0xa0ea,	// (0x0006f064) navi_pane

0xa10a,	// (0x0006f084) popup_cale_events_window_ParamLimits

0xa10a,	// (0x0006f084) popup_cale_events_window

0x2113,	// (0x0006708d) popup_mup_playback_window

0xa122,	// (0x0006f09c) signal_pane

0x0020,	// (0x00064f9a) main_browser_pane

0x0c4a,	// (0x00065bc4) main_burst_pane

0x9fc0,	// (0x0006ef3a) main_calc_pane

0x0c4a,	// (0x00065bc4) main_cale_day_pane

0x0020,	// (0x00064f9a) main_cale_month_pane

0x0c4a,	// (0x00065bc4) main_cale_week_pane

0x0c4a,	// (0x00065bc4) main_call_pane

0xed82,	// (0x00073cfc) main_call_poc_pane

0x0c4a,	// (0x00065bc4) main_camera_pane

0x0c4a,	// (0x00065bc4) main_chi_dic_pane

0x0ad9,	// (0x00065a53) main_clock_pane

0xed82,	// (0x00073cfc) main_fmradio_pane

0x0c4a,	// (0x00065bc4) main_graph_messa_pane

0xed82,	// (0x00073cfc) main_help_pane

0x0020,	// (0x00064f9a) main_im_pane

0xefdd,	// (0x00073f57) main_image_pane_ParamLimits

0xefdd,	// (0x00073f57) main_image_pane

0xed82,	// (0x00073cfc) main_location2_pane

0x0c4a,	// (0x00065bc4) main_location_pane

0xed82,	// (0x00073cfc) main_messa_pane

0xed82,	// (0x00073cfc) main_mp2_pane

0x0c4a,	// (0x00065bc4) main_mp_pane

0xed82,	// (0x00073cfc) main_msg_pane

0xed82,	// (0x00073cfc) main_mup_eq_pane

0xed82,	// (0x00073cfc) main_mup_pane

0x0c4a,	// (0x00065bc4) main_notes_pane

0xed82,	// (0x00073cfc) main_pec_pane

0xed82,	// (0x00073cfc) main_phob_pane

0xed82,	// (0x00073cfc) main_pinb_pane

0xed82,	// (0x00073cfc) main_postcard_pane

0xed82,	// (0x00073cfc) main_qdial_pane

0x0c4a,	// (0x00065bc4) main_skin_pane

0xed82,	// (0x00073cfc) main_smil2_pane

0x0c4a,	// (0x00065bc4) main_smil_pane

0x0c4a,	// (0x00065bc4) main_video_pane

0x0c4a,	// (0x00065bc4) main_video_tele_pane

0xefdd,	// (0x00073f57) main_viewer_pane_ParamLimits

0xefdd,	// (0x00073f57) main_viewer_pane

0x0c4a,	// (0x00065bc4) main_vorec_pane

0x9ff6,	// (0x0006ef70) popup_blid_sat_info_window_ParamLimits

0x9ff6,	// (0x0006ef70) popup_blid_sat_info_window

0xa00c,	// (0x0006ef86) popup_dyc_status_message_window_ParamLimits

0xa00c,	// (0x0006ef86) popup_dyc_status_message_window

0xa01a,	// (0x0006ef94) popup_grid_large_graphic_window_ParamLimits

0xa01a,	// (0x0006ef94) popup_grid_large_graphic_window

0xa08e,	// (0x0006f008) popup_loc_request_window_ParamLimits

0xa08e,	// (0x0006f008) popup_loc_request_window

0xa0c2,	// (0x0006f03c) popup_wml_address_window_ParamLimits

0xa0c2,	// (0x0006f03c) popup_wml_address_window

0x9e98,	// (0x0006ee12) call_muted_g1

0x9b57,	// (0x0006ead1) popup_call_audio_conf_window_ParamLimits

0x9b57,	// (0x0006ead1) popup_call_audio_conf_window

0x9ea8,	// (0x0006ee22) popup_call_audio_first_window_ParamLimits

0x9ea8,	// (0x0006ee22) popup_call_audio_first_window

0x9ee8,	// (0x0006ee62) popup_call_audio_in_window_ParamLimits

0x9ee8,	// (0x0006ee62) popup_call_audio_in_window

0x9f0c,	// (0x0006ee86) popup_call_audio_out_window_ParamLimits

0x9f0c,	// (0x0006ee86) popup_call_audio_out_window

0x9f2e,	// (0x0006eea8) popup_call_audio_second_window_ParamLimits

0x9f2e,	// (0x0006eea8) popup_call_audio_second_window

0x9f5e,	// (0x0006eed8) popup_call_audio_wait_window_ParamLimits

0x9f5e,	// (0x0006eed8) popup_call_audio_wait_window

0x9f7f,	// (0x0006eef9) popup_number_entry_window_ParamLimits

0x9f7f,	// (0x0006eef9) popup_number_entry_window

0xe971,	// (0x000738eb) bg_popup_call_pane_cp05_ParamLimits

0xe971,	// (0x000738eb) bg_popup_call_pane_cp05

0xe991,	// (0x0007390b) popup_number_entry_window_t1

0xe9a4,	// (0x0007391e) popup_number_entry_window_t2

0xe9b6,	// (0x00073930) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x00074066) popup_number_entry_window_t

0xe9c8,	// (0x00073942) text_title_cp2

0xe9db,	// (0x00073955) bg_popup_call_pane_cp_ParamLimits

0xe9db,	// (0x00073955) bg_popup_call_pane_cp

0xe9e9,	// (0x00073963) call_thumbnail_pane

0xe9f1,	// (0x0007396b) popup_call_audio_in_window_g1_ParamLimits

0xe9f1,	// (0x0007396b) popup_call_audio_in_window_g1

0xe9fd,	// (0x00073977) popup_call_audio_in_window_g2_ParamLimits

0xe9fd,	// (0x00073977) popup_call_audio_in_window_g2

0xea09,	// (0x00073983) popup_call_audio_in_window_g3_ParamLimits

0xea09,	// (0x00073983) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0007406f) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0007406f) popup_call_audio_in_window_g

0xea15,	// (0x0007398f) popup_call_audio_in_window_t1_ParamLimits

0xea15,	// (0x0007398f) popup_call_audio_in_window_t1

0xea30,	// (0x000739aa) popup_call_audio_in_window_t2_ParamLimits

0xea30,	// (0x000739aa) popup_call_audio_in_window_t2

0xea4b,	// (0x000739c5) popup_call_audio_in_window_t3_ParamLimits

0xea4b,	// (0x000739c5) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x00074076) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x00074076) popup_call_audio_in_window_t

0xe9db,	// (0x00073955) bg_popup_call_pane_cp01_ParamLimits

0xe9db,	// (0x00073955) bg_popup_call_pane_cp01

0xe9e9,	// (0x00073963) call_thumbnail_pane_cp02

0xea5e,	// (0x000739d8) call_type_pane_cp022

0xea66,	// (0x000739e0) popup_call_audio_out_window_g1_ParamLimits

0xea66,	// (0x000739e0) popup_call_audio_out_window_g1

0xea78,	// (0x000739f2) popup_call_audio_out_window_g2_ParamLimits

0xea78,	// (0x000739f2) popup_call_audio_out_window_g2

0xea84,	// (0x000739fe) popup_call_audio_out_window_g3_ParamLimits

0xea84,	// (0x000739fe) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0007407d) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0007407d) popup_call_audio_out_window_g

0xea96,	// (0x00073a10) popup_call_audio_out_window_t1_ParamLimits

0xea96,	// (0x00073a10) popup_call_audio_out_window_t1

0xeaae,	// (0x00073a28) popup_call_audio_out_window_t2_ParamLimits

0xeaae,	// (0x00073a28) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x00074084) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x00074084) popup_call_audio_out_window_t

0xeac3,	// (0x00073a3d) bg_popup_call_pane_ParamLimits

0xeac3,	// (0x00073a3d) bg_popup_call_pane

0x72c2,	// (0x0006c23c) call_thumbnail_pane_cp_ParamLimits

0x72c2,	// (0x0006c23c) call_thumbnail_pane_cp

0xeb47,	// (0x00073ac1) call_type_pane_cp01_ParamLimits

0xeb47,	// (0x00073ac1) call_type_pane_cp01

0xeb8b,	// (0x00073b05) popup_call_audio_first_window_g1_ParamLimits

0xeb8b,	// (0x00073b05) popup_call_audio_first_window_g1

0xebd7,	// (0x00073b51) popup_call_audio_first_window_g2_ParamLimits

0xebd7,	// (0x00073b51) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00074089) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00074089) popup_call_audio_first_window_g

0xec1b,	// (0x00073b95) popup_call_audio_first_window_t1_ParamLimits

0xec1b,	// (0x00073b95) popup_call_audio_first_window_t1

0xecc7,	// (0x00073c41) popup_call_audio_first_window_t4_ParamLimits

0xecc7,	// (0x00073c41) popup_call_audio_first_window_t4

0xed53,	// (0x00073ccd) popup_call_audio_first_window_t5_ParamLimits

0xed53,	// (0x00073ccd) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0007408e) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0007408e) popup_call_audio_first_window_t

0xed82,	// (0x00073cfc) bg_popup_call_pane_cp02

0xed8c,	// (0x00073d06) call_type_pane_cp023

0xed94,	// (0x00073d0e) popup_call_audio_wait_window_g1

0xed9c,	// (0x00073d16) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00074095) popup_call_audio_wait_window_g

0xeda4,	// (0x00073d1e) popup_call_audio_wait_window_t3

0xedb2,	// (0x00073d2c) bg_popup_call_pane_cp03_ParamLimits

0xedb2,	// (0x00073d2c) bg_popup_call_pane_cp03

0xee12,	// (0x00073d8c) call_thumbnail_pane_cp011_ParamLimits

0xee12,	// (0x00073d8c) call_thumbnail_pane_cp011

0xee1e,	// (0x00073d98) call_type_pane_cp034_ParamLimits

0xee1e,	// (0x00073d98) call_type_pane_cp034

0xee5a,	// (0x00073dd4) popup_call_audio_second_window_g1_ParamLimits

0xee5a,	// (0x00073dd4) popup_call_audio_second_window_g1

0xee96,	// (0x00073e10) popup_call_audio_second_window_g2_ParamLimits

0xee96,	// (0x00073e10) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0007409a) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0007409a) popup_call_audio_second_window_g

0xeed2,	// (0x00073e4c) popup_call_audio_second_window_t1_ParamLimits

0xeed2,	// (0x00073e4c) popup_call_audio_second_window_t1

0xef53,	// (0x00073ecd) popup_call_audio_second_window_t2_ParamLimits

0xef53,	// (0x00073ecd) popup_call_audio_second_window_t2

0xef89,	// (0x00073f03) popup_call_audio_second_window_t3_ParamLimits

0xef89,	// (0x00073f03) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0007409f) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0007409f) popup_call_audio_second_window_t

0xed82,	// (0x00073cfc) bg_popup_call_pane_cp04

0xefbf,	// (0x00073f39) list_conf_pane

0xefc7,	// (0x00073f41) popup_call_audio_conf_window_t1

0xefd5,	// (0x00073f4f) call_thumbnail_pane_g1

0xefdd,	// (0x00073f57) bg_pinb_pane_ParamLimits

0xefdd,	// (0x00073f57) bg_pinb_pane

0xefeb,	// (0x00073f65) find_pinb_pane

0xeff4,	// (0x00073f6e) listscroll_pinb_pane_ParamLimits

0xeff4,	// (0x00073f6e) listscroll_pinb_pane

0xf003,	// (0x00073f7d) pinb_bg_pane_g1

0x72e6,	// (0x0006c260) pinb_bg_pane_g2

0x72f2,	// (0x0006c26c) pinb_bg_pane_g3

0x72fe,	// (0x0006c278) pinb_bg_pane_g4

0x730a,	// (0x0006c284) pinb_bg_pane_g5

0x7316,	// (0x0006c290) pinb_bg_pane_g6

0x7321,	// (0x0006c29b) pinb_bg_pane_g7

0x732c,	// (0x0006c2a6) pinb_bg_pane_g8

0x7337,	// (0x0006c2b1) pinb_bg_pane_g9

0x7341,	// (0x0006c2bb) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x000740a6) pinb_bg_pane_g

0x7356,	// (0x0006c2d0) grid_pinb_pane

0x7361,	// (0x0006c2db) list_pinb_pane

0x736c,	// (0x0006c2e6) scroll_pane_cp01_ParamLimits

0x736c,	// (0x0006c2e6) scroll_pane_cp01

0xf015,	// (0x00073f8f) find_pinb_pane_g1_ParamLimits

0xf015,	// (0x00073f8f) find_pinb_pane_g1

0xf02d,	// (0x00073fa7) find_pinb_pane_t1

0xf03f,	// (0x00073fb9) find_pinb_pane_t2

0x0001,

0xf146,	// (0x000740c0) find_pinb_pane_t

0xf054,	// (0x00073fce) input_focus_pane_cp01_ParamLimits

0xf054,	// (0x00073fce) input_focus_pane_cp01

0x737e,	// (0x0006c2f8) cell_pinb_pane_ParamLimits

0x737e,	// (0x0006c2f8) cell_pinb_pane

0x73ac,	// (0x0006c326) cell_pinb_pane_g1_ParamLimits

0x73ac,	// (0x0006c326) cell_pinb_pane_g1

0x73c1,	// (0x0006c33b) cell_pinb_pane_g2_ParamLimits

0x73c1,	// (0x0006c33b) cell_pinb_pane_g2

0xf060,	// (0x00073fda) cell_pinb_pane_g3_ParamLimits

0xf060,	// (0x00073fda) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x000740c5) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x000740c5) cell_pinb_pane_g

0xed82,	// (0x00073cfc) grid_highlight_pane_cp01

0x73cd,	// (0x0006c347) list_pinb_item_pane_ParamLimits

0x73cd,	// (0x0006c347) list_pinb_item_pane

0xed82,	// (0x00073cfc) list_highlight_pane_cp02

0xf06c,	// (0x00073fe6) list_pinb_item_pane_g1_ParamLimits

0xf06c,	// (0x00073fe6) list_pinb_item_pane_g1

0xf079,	// (0x00073ff3) list_pinb_item_pane_g2_ParamLimits

0xf079,	// (0x00073ff3) list_pinb_item_pane_g2

0x73f7,	// (0x0006c371) list_pinb_item_pane_g3_ParamLimits

0x73f7,	// (0x0006c371) list_pinb_item_pane_g3

0xf085,	// (0x00073fff) list_pinb_item_pane_g4_ParamLimits

0xf085,	// (0x00073fff) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x000740cc) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x000740cc) list_pinb_item_pane_g

0xf091,	// (0x0007400b) list_pinb_item_pane_t1_ParamLimits

0xf091,	// (0x0007400b) list_pinb_item_pane_t1

0x7422,	// (0x0006c39c) calc_display_pane

0x7440,	// (0x0006c3ba) calc_paper_pane

0x745c,	// (0x0006c3d6) grid_calc_pane

0xed82,	// (0x00073cfc) bg_list_pane_cp01

0x7488,	// (0x0006c402) clock_g1

0x7490,	// (0x0006c40a) clock_g2

0x0001,

0xf15b,	// (0x000740d5) clock_g

0x749a,	// (0x0006c414) clock_t1_ParamLimits

0x749a,	// (0x0006c414) clock_t1

0x74af,	// (0x0006c429) clock_t2_ParamLimits

0x74af,	// (0x0006c429) clock_t2

0x74c1,	// (0x0006c43b) clock_t3_ParamLimits

0x74c1,	// (0x0006c43b) clock_t3

0x74d3,	// (0x0006c44d) clock_t4_ParamLimits

0x74d3,	// (0x0006c44d) clock_t4

0x74e5,	// (0x0006c45f) clock_t5_ParamLimits

0x74e5,	// (0x0006c45f) clock_t5

0x74fa,	// (0x0006c474) clock_t6_ParamLimits

0x74fa,	// (0x0006c474) clock_t6

0x750c,	// (0x0006c486) clock_t7_ParamLimits

0x750c,	// (0x0006c486) clock_t7

0x751e,	// (0x0006c498) clock_t8_ParamLimits

0x751e,	// (0x0006c498) clock_t8

0x7534,	// (0x0006c4ae) clock_t9_ParamLimits

0x7534,	// (0x0006c4ae) clock_t9

0x0008,

0xf160,	// (0x000740da) clock_t_ParamLimits

0xf160,	// (0x000740da) clock_t

0xf0a8,	// (0x00074022) popup_clock_analogue_window_cp02

0xf0a8,	// (0x00074022) popup_clock_digital_window_cp01

0xf0b0,	// (0x0007402a) listscroll_help_pane

0xed82,	// (0x00073cfc) phob_pre_status_pane

0xf0ba,	// (0x00074034) grid_qdial_pane

0xed82,	// (0x00073cfc) listscroll_mce_pane

0xf0c4,	// (0x0007403e) bg_notes_pane

0xf0ce,	// (0x00074048) list_notes_pane

0x754a,	// (0x0006c4c4) scroll_pane_cp06

0xf0d8,	// (0x00074052) bg_calc_paper_pane

0x7555,	// (0x0006c4cf) list_calc_pane

0x0020,	// (0x00064f9a) bg_calc_display_pane

0x756f,	// (0x0006c4e9) calc_display_pane_t1

0x7584,	// (0x0006c4fe) calc_display_pane_t2

0x7599,	// (0x0006c513) calc_display_pane_t3

0x0002,

0xf173,	// (0x000740ed) calc_display_pane_t

0x75ab,	// (0x0006c525) cell_calc_pane_ParamLimits

0x75ab,	// (0x0006c525) cell_calc_pane

0x003e,	// (0x00064fb8) bg_calc_paper_pane_g1

0x0056,	// (0x00064fd0) bg_calc_paper_pane_g2

0x004a,	// (0x00064fc4) bg_calc_paper_pane_g3

0x006e,	// (0x00064fe8) bg_calc_paper_pane_g4

0x0062,	// (0x00064fdc) bg_calc_paper_pane_g5

0x75d8,	// (0x0006c552) bg_calc_paper_pane_g6

0x75e9,	// (0x0006c563) bg_calc_paper_pane_g7

0x75fa,	// (0x0006c574) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x000740f4) bg_calc_paper_pane_g

0x760b,	// (0x0006c585) calc_bg_paper_pane_g9

0x761c,	// (0x0006c596) list_calc_item_pane_ParamLimits

0x761c,	// (0x0006c596) list_calc_item_pane

0x007a,	// (0x00064ff4) list_calc_item_pane_g1

0x7656,	// (0x0006c5d0) list_calc_item_pane_t1_ParamLimits

0x7656,	// (0x0006c5d0) list_calc_item_pane_t1

0x7668,	// (0x0006c5e2) list_calc_item_pane_t2_ParamLimits

0x7668,	// (0x0006c5e2) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00074105) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00074105) list_calc_item_pane_t

0x0099,	// (0x00065013) cell_calc_pane_g1

0x00a3,	// (0x0006501d) grid_highlight_pane_cp02

0x00d8,	// (0x00065052) bg_calc_display_pane_g1

0x7698,	// (0x0006c612) bg_calc_display_pane_g2

0x00c5,	// (0x0006503f) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0007410f) bg_calc_display_pane_g

0x76a2,	// (0x0006c61c) cell_qdial_pane_ParamLimits

0x76a2,	// (0x0006c61c) cell_qdial_pane

0x76b6,	// (0x0006c630) cell_qdial_pane_g1_ParamLimits

0x76b6,	// (0x0006c630) cell_qdial_pane_g1

0x76c3,	// (0x0006c63d) cell_qdial_pane_g2_ParamLimits

0x76c3,	// (0x0006c63d) cell_qdial_pane_g2

0x00e1,	// (0x0006505b) cell_qdial_pane_g3_ParamLimits

0x00e1,	// (0x0006505b) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00074116) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00074116) cell_qdial_pane_g

0x76e1,	// (0x0006c65b) cell_qdial_pane_t1_ParamLimits

0x76e1,	// (0x0006c65b) cell_qdial_pane_t1

0x76f9,	// (0x0006c673) cell_qdial_pane_t2_ParamLimits

0x76f9,	// (0x0006c673) cell_qdial_pane_t2

0x770c,	// (0x0006c686) cell_qdial_pane_t3_ParamLimits

0x770c,	// (0x0006c686) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0007411f) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0007411f) cell_qdial_pane_t

0xed82,	// (0x00073cfc) grid_highlight_pane_cp04

0x00ed,	// (0x00065067) thumbnail_qdial_pane_ParamLimits

0x00ed,	// (0x00065067) thumbnail_qdial_pane

0x0149,	// (0x000650c3) list_help_pane

0x0152,	// (0x000650cc) scroll_pane_cp02

0x771f,	// (0x0006c699) help_list_pane_t1_ParamLimits

0x771f,	// (0x0006c699) help_list_pane_t1

0x775d,	// (0x0006c6d7) bg_notes_pane_g2

0x7765,	// (0x0006c6df) bg_notes_pane_g3

0x776d,	// (0x0006c6e7) notes_bg_pane_g1

0x7775,	// (0x0006c6ef) notes_bg_pane_g4

0x777d,	// (0x0006c6f7) notes_bg_pane_g5

0x7785,	// (0x0006c6ff) notes_bg_pane_g6

0x778d,	// (0x0006c707) notes_bg_pane_g7

0x7795,	// (0x0006c70f) notes_bg_pane_g8

0x779d,	// (0x0006c717) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0007413d) notes_bg_pane_g

0x77a5,	// (0x0006c71f) list_notes_text_pane_ParamLimits

0x77a5,	// (0x0006c71f) list_notes_text_pane

0x01ba,	// (0x00065134) list_notes_text_pane_g1

0x5e73,	// (0x0006aded) list_notes_text_pane_t1

0x0020,	// (0x00064f9a) listscroll_cale_week_pane

0x77f2,	// (0x0006c76c) bg_cale_heading_pane

0x01d4,	// (0x0006514e) bg_cale_pane_cp01

0x780e,	// (0x0006c788) cale_week_corner_pane

0x781f,	// (0x0006c799) cale_week_day_heading_pane

0x783b,	// (0x0006c7b5) cale_week_scroll_pane_g1

0x7854,	// (0x0006c7ce) cale_week_scroll_pane_g2

0x7865,	// (0x0006c7df) cale_week_scroll_pane_g3

0x7876,	// (0x0006c7f0) cale_week_scroll_pane_g4

0x7887,	// (0x0006c801) cale_week_scroll_pane_g5

0x7898,	// (0x0006c812) cale_week_scroll_pane_g6

0x78a9,	// (0x0006c823) cale_week_scroll_pane_g7

0x78bc,	// (0x0006c836) cale_week_scroll_pane_g8

0x78cf,	// (0x0006c849) cale_week_scroll_pane_g9

0x78e0,	// (0x0006c85a) cale_week_scroll_pane_g10

0x78f1,	// (0x0006c86b) cale_week_scroll_pane_g11

0x7902,	// (0x0006c87c) cale_week_scroll_pane_g12

0x791b,	// (0x0006c895) cale_week_scroll_pane_g13

0x7934,	// (0x0006c8ae) cale_week_scroll_pane_g14

0x794d,	// (0x0006c8c7) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0007414c) cale_week_scroll_pane_g

0x7966,	// (0x0006c8e0) cale_week_time_pane

0x7979,	// (0x0006c8f3) grid_cale_week_pane

0x7996,	// (0x0006c910) scroll_pane_cp08

0x79b0,	// (0x0006c92a) cell_cale_week_pane_ParamLimits

0x79b0,	// (0x0006c92a) cell_cale_week_pane

0x7a00,	// (0x0006c97a) cale_week_day_heading_pane_t1

0x7a14,	// (0x0006c98e) cale_week_day_heading_pane_t2

0x7a28,	// (0x0006c9a2) cale_week_day_heading_pane_t3

0x7a3c,	// (0x0006c9b6) cale_week_day_heading_pane_t4

0x7a50,	// (0x0006c9ca) cale_week_day_heading_pane_t5

0x7a64,	// (0x0006c9de) cale_week_day_heading_pane_t6

0x7a78,	// (0x0006c9f2) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0007416b) cale_week_day_heading_pane_t

0x01ff,	// (0x00065179) bg_cale_side_pane

0x7a8c,	// (0x0006ca06) cale_week_time_pane_t1

0x7aa4,	// (0x0006ca1e) cale_week_time_pane_t2

0x7abc,	// (0x0006ca36) cale_week_time_pane_t3

0x7ad4,	// (0x0006ca4e) cale_week_time_pane_t4

0x7aec,	// (0x0006ca66) cale_week_time_pane_t5

0x7b04,	// (0x0006ca7e) cale_week_time_pane_t6

0x7b24,	// (0x0006ca9e) cale_week_time_pane_t7

0x7b44,	// (0x0006cabe) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0007417a) cale_week_time_pane_t

0x7b64,	// (0x0006cade) cell_cale_week_pane_g2

0x7b75,	// (0x0006caef) cell_cale_week_pane_g3_ParamLimits

0x7b75,	// (0x0006caef) cell_cale_week_pane_g3

0x020d,	// (0x00065187) grid_highlight_pane_cp07

0x0215,	// (0x0006518f) listscroll_gms_pane

0x021f,	// (0x00065199) grid_gms_pane

0x0228,	// (0x000651a2) listscroll_gms_pane_g1

0x0230,	// (0x000651aa) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0007418b) listscroll_gms_pane_g

0x7b8d,	// (0x0006cb07) scroll_pane_cp010

0x7b98,	// (0x0006cb12) cell_gms_pane_ParamLimits

0x7b98,	// (0x0006cb12) cell_gms_pane

0x7baa,	// (0x0006cb24) cell_gms_pane_g1

0x0238,	// (0x000651b2) cell_gms_pane_g2

0x01ba,	// (0x00065134) cell_gms_pane_g3

0x0240,	// (0x000651ba) cell_gms_pane_g4

0x0003,

0xf216,	// (0x00074190) cell_gms_pane_g

0x0249,	// (0x000651c3) grid_highlight_pane_cp09

0x9e40,	// (0x0006edba) phob_pre_status_pane_g1

0x9e48,	// (0x0006edc2) phob_pre_status_pane_g2

0x9e50,	// (0x0006edca) phob_pre_status_pane_g3

0x9e58,	// (0x0006edd2) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x0007457f) phob_pre_status_pane_g

0x9e68,	// (0x0006ede2) phob_pre_status_pane_t1

0x9e78,	// (0x0006edf2) phob_pre_status_pane_t2

0x9e88,	// (0x0006ee02) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x0007458a) phob_pre_status_pane_t

0xed82,	// (0x00073cfc) bg_list_pane_cp05

0x7bba,	// (0x0006cb34) grid_vorec_pane

0x7bc2,	// (0x0006cb3c) vorec_t1

0x7bd0,	// (0x0006cb4a) vorec_t2

0x7bde,	// (0x0006cb58) vorec_t3

0x7bec,	// (0x0006cb66) vorec_t4

0x7bfa,	// (0x0006cb74) vorec_t5

0x7c08,	// (0x0006cb82) vorec_t6

0x0006,

0xf21f,	// (0x00074199) vorec_t

0x7c24,	// (0x0006cb9e) wait_bar_pane_cp01

0x02cb,	// (0x00065245) cell_vorec_pane_ParamLimits

0x02cb,	// (0x00065245) cell_vorec_pane

0x02de,	// (0x00065258) cell_vorec_pane_g1

0xed82,	// (0x00073cfc) grid_highlight_pane_cp05

0x7c3c,	// (0x0006cbb6) cams_zoom_pane

0x7c48,	// (0x0006cbc2) image_vga_pane

0x7c57,	// (0x0006cbd1) main_camera_pane_g1

0x7c65,	// (0x0006cbdf) main_camera_pane_g2

0x7c73,	// (0x0006cbed) main_camera_pane_g3

0x7c7f,	// (0x0006cbf9) main_camera_pane_g4

0x7c8b,	// (0x0006cc05) main_camera_pane_g5

0x7c97,	// (0x0006cc11) main_camera_pane_g6

0x7ca3,	// (0x0006cc1d) main_camera_pane_g7

0x0007,

0xf22e,	// (0x000741a8) main_camera_pane_g

0x7caf,	// (0x0006cc29) main_camera_pane_t1

0x7cc1,	// (0x0006cc3b) main_camera_pane_t2

0x0001,

0xf23f,	// (0x000741b9) main_camera_pane_t

0x7ce2,	// (0x0006cc5c) cams_zoom_pane_cp_ParamLimits

0x7ce2,	// (0x0006cc5c) cams_zoom_pane_cp

0x7d06,	// (0x0006cc80) image_cif_pane_ParamLimits

0x7d06,	// (0x0006cc80) image_cif_pane

0x7d24,	// (0x0006cc9e) image_subqcif_pane

0x7d2c,	// (0x0006cca6) main_video_pane_g1_ParamLimits

0x7d2c,	// (0x0006cca6) main_video_pane_g1

0x7d4c,	// (0x0006ccc6) main_video_pane_g2_ParamLimits

0x7d4c,	// (0x0006ccc6) main_video_pane_g2

0x7d7e,	// (0x0006ccf8) main_video_pane_g3_ParamLimits

0x7d7e,	// (0x0006ccf8) main_video_pane_g3

0x7da9,	// (0x0006cd23) main_video_pane_g4_ParamLimits

0x7da9,	// (0x0006cd23) main_video_pane_g4

0x7dd4,	// (0x0006cd4e) main_video_pane_g5_ParamLimits

0x7dd4,	// (0x0006cd4e) main_video_pane_g5

0x02f4,	// (0x0006526e) main_video_pane_g6_ParamLimits

0x02f4,	// (0x0006526e) main_video_pane_g6

0x0006,

0xf244,	// (0x000741be) main_video_pane_g_ParamLimits

0xf244,	// (0x000741be) main_video_pane_g

0x7df8,	// (0x0006cd72) main_video_pane_t1_ParamLimits

0x7df8,	// (0x0006cd72) main_video_pane_t1

0x030e,	// (0x00065288) cams_zoom_pane_g1

0x0317,	// (0x00065291) cams_zoom_pane_g2

0x0320,	// (0x0006529a) cams_zoom_pane_g3

0x0329,	// (0x000652a3) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x000741cd) cams_zoom_pane_g

0x7e42,	// (0x0006cdbc) grid_cams_pane

0x7e50,	// (0x0006cdca) linegrid_cams_pane

0x7e5e,	// (0x0006cdd8) cell_cams_pane_ParamLimits

0x7e5e,	// (0x0006cdd8) cell_cams_pane

0x0332,	// (0x000652ac) cams_burst_image_pane

0x033a,	// (0x000652b4) cell_cams_pane_g1

0xed82,	// (0x00073cfc) grid_highlight_pane_cp03

0x0099,	// (0x00065013) mp_bg_pane_g1

0xed82,	// (0x00073cfc) bg_list_pane_cp03

0x1fd8,	// (0x00066f52) bg_mp_pane

0x1fe0,	// (0x00066f5a) grid_mp_pane

0x1fe8,	// (0x00066f62) media_player_g1

0x1ff0,	// (0x00066f6a) media_player_t1

0x1ffe,	// (0x00066f78) media_player_t2

0x200c,	// (0x00066f86) media_player_t3

0x201a,	// (0x00066f94) media_player_t4

0x2028,	// (0x00066fa2) media_player_t5

0x2036,	// (0x00066fb0) media_player_t6

0x2044,	// (0x00066fbe) media_player_t7

0x0006,

0xf5ef,	// (0x00074569) media_player_t

0x2052,	// (0x00066fcc) wait_bar_pane_cp02

0xf5d4,	// (0x0007454e) main_usb_pane_t

0x9e37,	// (0x0006edb1) cell_mp_pane

0x0099,	// (0x00065013) cell_mp_pane_g1

0xed82,	// (0x00073cfc) grid_highlight_pane_cp06

0x0342,	// (0x000652bc) grid_skin_colour_pane

0x034a,	// (0x000652c4) list_highlight_pane_cp03

0x7e71,	// (0x0006cdeb) skin_g1

0x0352,	// (0x000652cc) skin_t1

0x0361,	// (0x000652db) skin_t2

0x0001,

0xf288,	// (0x00074202) skin_t

0x7e7b,	// (0x0006cdf5) cell_skin_colour_pane_ParamLimits

0x7e7b,	// (0x0006cdf5) cell_skin_colour_pane

0x036f,	// (0x000652e9) cell_skin_colour_pane_g1

0x7eff,	// (0x0006ce79) call_video_g1_ParamLimits

0x7eff,	// (0x0006ce79) call_video_g1

0x7f0f,	// (0x0006ce89) call_video_g2_ParamLimits

0x7f0f,	// (0x0006ce89) call_video_g2

0x0001,

0xf28d,	// (0x00074207) call_video_g_ParamLimits

0xf28d,	// (0x00074207) call_video_g

0x7f69,	// (0x0006cee3) call_video_uplink_pane_cp1_ParamLimits

0x7f69,	// (0x0006cee3) call_video_uplink_pane_cp1

0x0381,	// (0x000652fb) call_video_uplink_pane_cp2

0x8035,	// (0x0006cfaf) video_down_crop_pane_ParamLimits

0x8035,	// (0x0006cfaf) video_down_crop_pane

0x8127,	// (0x0006d0a1) video_down_pane_ParamLimits

0x8127,	// (0x0006d0a1) video_down_pane

0x0389,	// (0x00065303) video_down_subqcif_pane_ParamLimits

0x0389,	// (0x00065303) video_down_subqcif_pane

0x03a1,	// (0x0006531b) video_down_subqcif_pane_cp_ParamLimits

0x03a1,	// (0x0006531b) video_down_subqcif_pane_cp

0x03c5,	// (0x0006533f) im_reading_pane_ParamLimits

0x03c5,	// (0x0006533f) im_reading_pane

0x8249,	// (0x0006d1c3) im_writing_pane_ParamLimits

0x8249,	// (0x0006d1c3) im_writing_pane

0x8267,	// (0x0006d1e1) im_reading_pane_t1

0x03df,	// (0x00065359) list_im_pane

0x03f0,	// (0x0006536a) scroll_pane_cp07

0x82c7,	// (0x0006d241) im_writing_pane_t1_ParamLimits

0x82c7,	// (0x0006d241) im_writing_pane_t1

0x0409,	// (0x00065383) im_writing_pane_t2_ParamLimits

0x0409,	// (0x00065383) im_writing_pane_t2

0x0001,

0xf297,	// (0x00074211) im_writing_pane_t_ParamLimits

0xf297,	// (0x00074211) im_writing_pane_t

0xed82,	// (0x00073cfc) input_focus_pane_cp04

0xed82,	// (0x00073cfc) input_focus_pane_cp05

0x82d9,	// (0x0006d253) list_im_single_pane_ParamLimits

0x82d9,	// (0x0006d253) list_im_single_pane

0x8305,	// (0x0006d27f) list_single_im_pane_t1

0x9dfb,	// (0x0006ed75) blid_accuracy_pane

0x9e03,	// (0x0006ed7d) blid_compass_pane

0x9e0d,	// (0x0006ed87) main_location_t1

0x9e1b,	// (0x0006ed95) main_location_t2

0x9e29,	// (0x0006eda3) main_location_t3

0x0002,

0xf5fe,	// (0x00074578) main_location_t

0xed82,	// (0x00073cfc) aid_levels_location

0x0099,	// (0x00065013) blid_accuracy_pane_g1

0x0099,	// (0x00065013) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x00074273) blid_accuracy_pane_g

0x0451,	// (0x000653cb) wml_content_pane

0x048f,	// (0x00065409) wml_button_pane_ParamLimits

0x048f,	// (0x00065409) wml_button_pane

0x8314,	// (0x0006d28e) wml_list_single_large_pane_ParamLimits

0x8314,	// (0x0006d28e) wml_list_single_large_pane

0x8346,	// (0x0006d2c0) wml_list_single_medium_pane_ParamLimits

0x8346,	// (0x0006d2c0) wml_list_single_medium_pane

0x837f,	// (0x0006d2f9) wml_list_single_small_pane_ParamLimits

0x837f,	// (0x0006d2f9) wml_list_single_small_pane

0x04a3,	// (0x0006541d) wml_selection_box_pane_ParamLimits

0x04a3,	// (0x0006541d) wml_selection_box_pane

0x04b6,	// (0x00065430) wml_list_single_pane_t1

0x04c5,	// (0x0006543f) wml_list_single_medium_pane_t1

0x04d4,	// (0x0006544e) wml_list_single_large_pane_t1

0x04e3,	// (0x0006545d) input_focus_pane_cp02_ParamLimits

0x04e3,	// (0x0006545d) input_focus_pane_cp02

0x04f6,	// (0x00065470) wml_selection_box_pane_g1

0x04ff,	// (0x00065479) wml_selection_box_pane_t1_ParamLimits

0x04ff,	// (0x00065479) wml_selection_box_pane_t1

0xefdd,	// (0x00073f57) bg_wml_button_pane_ParamLimits

0xefdd,	// (0x00073f57) bg_wml_button_pane

0x0517,	// (0x00065491) wml_button_pane_g1

0x051f,	// (0x00065499) wml_button_pane_t1

0x0517,	// (0x00065491) wml_button_bg_pane_g1

0x052f,	// (0x000654a9) wml_button_bg_pane_g2

0x0537,	// (0x000654b1) wml_button_bg_pane_g3

0x053f,	// (0x000654b9) wml_button_bg_pane_g4

0x0547,	// (0x000654c1) wml_button_bg_pane_g5

0x054f,	// (0x000654c9) wml_button_bg_pane_g6

0x0557,	// (0x000654d1) wml_button_bg_pane_g7

0x055f,	// (0x000654d9) wml_button_bg_pane_g8

0x0567,	// (0x000654e1) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x00074216) wml_button_bg_pane_g

0x83c7,	// (0x0006d341) bg_list_pane_cp02

0x056f,	// (0x000654e9) mce_header_pane_ParamLimits

0x056f,	// (0x000654e9) mce_header_pane

0x0585,	// (0x000654ff) mce_icon_pane

0x0585,	// (0x000654ff) mce_image_pane

0x058e,	// (0x00065508) mce_text_pane_ParamLimits

0x058e,	// (0x00065508) mce_text_pane

0x83d1,	// (0x0006d34b) scroll_pane_cp03

0x0487,	// (0x00065401) scroll_pane_cp04

0x05a1,	// (0x0006551b) scroll_pane_cp05_ParamLimits

0x05a1,	// (0x0006551b) scroll_pane_cp05

0x83db,	// (0x0006d355) mce_header_field_pane_ParamLimits

0x83db,	// (0x0006d355) mce_header_field_pane

0x83fb,	// (0x0006d375) mce_header_field_pane_2_ParamLimits

0x83fb,	// (0x0006d375) mce_header_field_pane_2

0x8411,	// (0x0006d38b) mce_header_field_pane_3

0x8419,	// (0x0006d393) list_single_mce_message_pane_ParamLimits

0x8419,	// (0x0006d393) list_single_mce_message_pane

0x8449,	// (0x0006d3c3) list_single_mce_smart_pane_ParamLimits

0x8449,	// (0x0006d3c3) list_single_mce_smart_pane

0x05ad,	// (0x00065527) input_focus_pane_cp03

0x05b6,	// (0x00065530) list_header_data_pane

0x8484,	// (0x0006d3fe) mce_header_field_pane_t1

0x8494,	// (0x0006d40e) list_single_mce_header_pane_ParamLimits

0x8494,	// (0x0006d40e) list_single_mce_header_pane

0x05be,	// (0x00065538) list_single_mce_header_pane_t1

0x05cd,	// (0x00065547) list_single_mce_message_pane_g1

0x05d5,	// (0x0006554f) list_single_mce_message_pane_t1

0x84e6,	// (0x0006d460) bg_cale_heading_pane_cp01_ParamLimits

0x84e6,	// (0x0006d460) bg_cale_heading_pane_cp01

0x05e3,	// (0x0006555d) bg_cale_pane_cp02_ParamLimits

0x05e3,	// (0x0006555d) bg_cale_pane_cp02

0x8519,	// (0x0006d493) cale_month_corner_pane

0x852f,	// (0x0006d4a9) cale_month_day_heading_pane_ParamLimits

0x852f,	// (0x0006d4a9) cale_month_day_heading_pane

0x8572,	// (0x0006d4ec) cale_month_pane_g1_ParamLimits

0x8572,	// (0x0006d4ec) cale_month_pane_g1

0x859e,	// (0x0006d518) cale_month_pane_g2_ParamLimits

0x859e,	// (0x0006d518) cale_month_pane_g2

0x85c1,	// (0x0006d53b) cale_month_pane_g3_ParamLimits

0x85c1,	// (0x0006d53b) cale_month_pane_g3

0x85fd,	// (0x0006d577) cale_month_pane_g4_ParamLimits

0x85fd,	// (0x0006d577) cale_month_pane_g4

0x8639,	// (0x0006d5b3) cale_month_pane_g5_ParamLimits

0x8639,	// (0x0006d5b3) cale_month_pane_g5

0x8675,	// (0x0006d5ef) cale_month_pane_g6_ParamLimits

0x8675,	// (0x0006d5ef) cale_month_pane_g6

0x86b1,	// (0x0006d62b) cale_month_pane_g7_ParamLimits

0x86b1,	// (0x0006d62b) cale_month_pane_g7

0x86fd,	// (0x0006d677) cale_month_pane_g8_ParamLimits

0x86fd,	// (0x0006d677) cale_month_pane_g8

0x8749,	// (0x0006d6c3) cale_month_pane_g9_ParamLimits

0x8749,	// (0x0006d6c3) cale_month_pane_g9

0x878f,	// (0x0006d709) cale_month_pane_g10_ParamLimits

0x878f,	// (0x0006d709) cale_month_pane_g10

0x87d5,	// (0x0006d74f) cale_month_pane_g11_ParamLimits

0x87d5,	// (0x0006d74f) cale_month_pane_g11

0x8813,	// (0x0006d78d) cale_month_pane_g12_ParamLimits

0x8813,	// (0x0006d78d) cale_month_pane_g12

0x8851,	// (0x0006d7cb) cale_month_pane_g13_ParamLimits

0x8851,	// (0x0006d7cb) cale_month_pane_g13

0x000c,

0xf2af,	// (0x00074229) cale_month_pane_g_ParamLimits

0xf2af,	// (0x00074229) cale_month_pane_g

0x888f,	// (0x0006d809) cale_month_week_pane

0x88a2,	// (0x0006d81c) grid_cale_month_pane_ParamLimits

0x88a2,	// (0x0006d81c) grid_cale_month_pane

0x88e0,	// (0x0006d85a) cale_month_day_heading_pane_t1

0x893e,	// (0x0006d8b8) cale_month_day_heading_pane_t2

0x89a3,	// (0x0006d91d) cale_month_day_heading_pane_t3

0x8a08,	// (0x0006d982) cale_month_day_heading_pane_t4

0x8a6d,	// (0x0006d9e7) cale_month_day_heading_pane_t5

0x8ad2,	// (0x0006da4c) cale_month_day_heading_pane_t6

0x8b3f,	// (0x0006dab9) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x00074244) cale_month_day_heading_pane_t

0x01ff,	// (0x00065179) bg_cale_side_pane_cp01

0x8bb4,	// (0x0006db2e) cale_month_week_pane_t1

0x8bcb,	// (0x0006db45) cale_month_week_pane_t2

0x8be2,	// (0x0006db5c) cale_month_week_pane_t3

0x8bf9,	// (0x0006db73) cale_month_week_pane_t4

0x8c10,	// (0x0006db8a) cale_month_week_pane_t5

0x8c2f,	// (0x0006dba9) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x00074253) cale_month_week_pane_t

0x8c4e,	// (0x0006dbc8) cell_cale_month_pane_ParamLimits

0x8c4e,	// (0x0006dbc8) cell_cale_month_pane

0x8d1c,	// (0x0006dc96) cell_cale_month_pane_g1

0x8d28,	// (0x0006dca2) cell_cale_month_pane_t1_ParamLimits

0x8d28,	// (0x0006dca2) cell_cale_month_pane_t1

0x020d,	// (0x00065187) grid_highlight_pane_cp08

0x0099,	// (0x00065013) main_smil_g1

0x8d44,	// (0x0006dcbe) smil_status_pane

0x0624,	// (0x0006559e) smil_text_pane

0x1ef0,	// (0x00066e6a) bg_popup_call3_rect_pane_g8

0x1ef8,	// (0x00066e72) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0007450c) bg_popup_call3_rect_pane_g

0x218d,	// (0x00067107) smil_status_volume_pane_g1

0x062e,	// (0x000655a8) smil_status_pane_t1

0xa1df,	// (0x0006f159) volume_smil_pane

0x0645,	// (0x000655bf) list_smil_text_pane

0x8d57,	// (0x0006dcd1) scroll_pane_cp011

0x8d62,	// (0x0006dcdc) smil_text_list_pane_t1_ParamLimits

0x8d62,	// (0x0006dcdc) smil_text_list_pane_t1

0x8e0d,	// (0x0006dd87) aid_volume_smil_ParamLimits

0x8e0d,	// (0x0006dd87) aid_volume_smil

0x0099,	// (0x00065013) smil_volume_pane_g1

0x0099,	// (0x00065013) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x00074273) smil_volume_pane_g

0x0020,	// (0x00064f9a) listscroll_cale_day_pane

0x0671,	// (0x000655eb) bg_cale_pane

0x0689,	// (0x00065603) list_cale_pane

0x069a,	// (0x00065614) scroll_pane_cp09

0x06ab,	// (0x00065625) cale_bg_pane_g1

0x06b3,	// (0x0006562d) cale_bg_pane_g2

0x06bb,	// (0x00065635) cale_bg_pane_g3

0x06c3,	// (0x0006563d) cale_bg_pane_g4

0x06cb,	// (0x00065645) cale_bg_pane_g5

0x06d3,	// (0x0006564d) cale_bg_pane_g6

0x06db,	// (0x00065655) cale_bg_pane_g7

0x06e3,	// (0x0006565d) cale_bg_pane_g8

0x06eb,	// (0x00065665) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x00074278) cale_bg_pane_g

0x8e2f,	// (0x0006dda9) list_cale_time_pane_ParamLimits

0x8e2f,	// (0x0006dda9) list_cale_time_pane

0x8e50,	// (0x0006ddca) list_cale_time_pane_g1_ParamLimits

0x8e50,	// (0x0006ddca) list_cale_time_pane_g1

0x06f3,	// (0x0006566d) list_cale_time_pane_g2_ParamLimits

0x06f3,	// (0x0006566d) list_cale_time_pane_g2

0x8e5c,	// (0x0006ddd6) list_cale_time_pane_g3_ParamLimits

0x8e5c,	// (0x0006ddd6) list_cale_time_pane_g3

0x8e78,	// (0x0006ddf2) list_cale_time_pane_g4_ParamLimits

0x8e78,	// (0x0006ddf2) list_cale_time_pane_g4

0x8e86,	// (0x0006de00) list_cale_time_pane_g5_ParamLimits

0x8e86,	// (0x0006de00) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x0007428b) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x0007428b) list_cale_time_pane_g

0x8e94,	// (0x0006de0e) list_cale_time_pane_t1_ParamLimits

0x8e94,	// (0x0006de0e) list_cale_time_pane_t1

0x8ebc,	// (0x0006de36) list_cale_time_pane_t2_ParamLimits

0x8ebc,	// (0x0006de36) list_cale_time_pane_t2

0x91bc,	// (0x0006e136) aid_blid_cardinal_pane

0x91fe,	// (0x0006e178) compass_pane_t4

0x8ee4,	// (0x0006de5e) list_cale_time_pane_t4_ParamLimits

0x8ee4,	// (0x0006de5e) list_cale_time_pane_t4

0x920c,	// (0x0006e186) compass_pane_t5

0x921c,	// (0x0006e196) compass_pane_t6

0x922a,	// (0x0006e1a4) compass_pane_t7

0x0b9c,	// (0x00065b16) navi_pane_cc_t1

0x0d03,	// (0x00065c7d) aid_phob_thumbnail_center_pane

0x98f1,	// (0x0006e86b) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x00074298) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x00074298) list_cale_time_pane_t

0xe9db,	// (0x00073955) bg_popup_window_pane_cp02_ParamLimits

0xe9db,	// (0x00073955) bg_popup_window_pane_cp02

0x070d,	// (0x00065687) heading_pane_cp01_ParamLimits

0x070d,	// (0x00065687) heading_pane_cp01

0x0719,	// (0x00065693) loc_req_pane_ParamLimits

0x0719,	// (0x00065693) loc_req_pane

0x0729,	// (0x000656a3) loc_type_pane_ParamLimits

0x0729,	// (0x000656a3) loc_type_pane

0x073b,	// (0x000656b5) loc_type_pane_t1_ParamLimits

0x073b,	// (0x000656b5) loc_type_pane_t1

0x074d,	// (0x000656c7) loc_type_pane_t2_ParamLimits

0x074d,	// (0x000656c7) loc_type_pane_t2

0x075f,	// (0x000656d9) loc_type_pane_t3_ParamLimits

0x075f,	// (0x000656d9) loc_type_pane_t3

0x0002,

0xf325,	// (0x0007429f) loc_type_pane_t_ParamLimits

0xf325,	// (0x0007429f) loc_type_pane_t

0x0771,	// (0x000656eb) list_loc_req_pane

0x077b,	// (0x000656f5) scroll_pane_cp012

0x8f0c,	// (0x0006de86) list_single_loc_request_popup_menu_pane_ParamLimits

0x8f0c,	// (0x0006de86) list_single_loc_request_popup_menu_pane

0x0786,	// (0x00065700) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x0786,	// (0x00065700) list_single_loc_request_popup_menu_pane_g1

0x0792,	// (0x0006570c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x0792,	// (0x0006570c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x000742a6) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x000742a6) list_single_loc_request_popup_menu_pane_g

0x079e,	// (0x00065718) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x079e,	// (0x00065718) list_single_loc_request_popup_menu_pane_t1

0x8f1e,	// (0x0006de98) bg_popup_window_pane_cp03_ParamLimits

0x8f1e,	// (0x0006de98) bg_popup_window_pane_cp03

0x8f2c,	// (0x0006dea6) heading_loc_req_pane_ParamLimits

0x8f2c,	// (0x0006dea6) heading_loc_req_pane

0x8f38,	// (0x0006deb2) popup_dyc_status_message_window_g1_ParamLimits

0x8f38,	// (0x0006deb2) popup_dyc_status_message_window_g1

0x8f44,	// (0x0006debe) popup_dyc_status_message_window_t1_ParamLimits

0x8f44,	// (0x0006debe) popup_dyc_status_message_window_t1

0x8f56,	// (0x0006ded0) popup_dyc_status_message_window_t2_ParamLimits

0x8f56,	// (0x0006ded0) popup_dyc_status_message_window_t2

0x8f68,	// (0x0006dee2) popup_dyc_status_message_window_t3_ParamLimits

0x8f68,	// (0x0006dee2) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x000742ab) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x000742ab) popup_dyc_status_message_window_t

0xed82,	// (0x00073cfc) bg_heading_pane_cp01

0x07c0,	// (0x0006573a) heading_loc_req_pane_g1

0x07c8,	// (0x00065742) heading_loc_req_pane_g2

0x07d0,	// (0x0006574a) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x000742b2) heading_loc_req_pane_g

0x07d8,	// (0x00065752) heading_loc_req_pane_t1

0x07e7,	// (0x00065761) bg_popup_sub_pane_cp01_ParamLimits

0x07e7,	// (0x00065761) bg_popup_sub_pane_cp01

0x07f5,	// (0x0006576f) popup_cale_events_window_g1_ParamLimits

0x07f5,	// (0x0006576f) popup_cale_events_window_g1

0x0815,	// (0x0006578f) popup_cale_events_window_g2_ParamLimits

0x0815,	// (0x0006578f) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x000742e6) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x000742e6) popup_cale_events_window_g

0x0835,	// (0x000657af) popup_cale_events_window_t1_ParamLimits

0x0835,	// (0x000657af) popup_cale_events_window_t1

0x0847,	// (0x000657c1) popup_cale_events_window_t2_ParamLimits

0x0847,	// (0x000657c1) popup_cale_events_window_t2

0x0885,	// (0x000657ff) popup_cale_events_window_t3_ParamLimits

0x0885,	// (0x000657ff) popup_cale_events_window_t3

0x08bf,	// (0x00065839) popup_cale_events_window_t4_ParamLimits

0x08bf,	// (0x00065839) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x000742eb) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x000742eb) popup_cale_events_window_t

0x8f92,	// (0x0006df0c) call_type_pane

0x0d1b,	// (0x00065c95) popup_call_status_window_g1

0x8f9e,	// (0x0006df18) popup_call_status_window_g2

0x8faa,	// (0x0006df24) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x000742f4) popup_call_status_window_g

0x08f5,	// (0x0006586f) call_type_pane_g1

0x08fe,	// (0x00065878) call_type_pane_g2

0x0001,

0xf381,	// (0x000742fb) call_type_pane_g

0xed82,	// (0x00073cfc) bg_popup_sub_pane_cp02

0x0907,	// (0x00065881) listscroll_popup_wml_pane

0x090f,	// (0x00065889) list_wml_pane

0x0919,	// (0x00065893) scroll_pane_cp013

0x0924,	// (0x0006589e) list_single_graphic_popup_wml_pane_ParamLimits

0x0924,	// (0x0006589e) list_single_graphic_popup_wml_pane

0x0099,	// (0x00065013) list_single_graphic_popup_wml_pane_g1

0x0938,	// (0x000658b2) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x00074300) list_single_graphic_popup_wml_pane_g

0x0940,	// (0x000658ba) list_single_graphic_popup_wml_pane_t1

0x094e,	// (0x000658c8) aid_call_pane

0xefd5,	// (0x00073f4f) popup_clock_analogue_window_g1

0xefd5,	// (0x00073f4f) popup_clock_analogue_window_g2

0x8fb6,	// (0x0006df30) popup_clock_analogue_window_g3

0x8fb6,	// (0x0006df30) popup_clock_analogue_window_g4

0x0099,	// (0x00065013) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x00074305) popup_clock_analogue_window_g

0x8fbe,	// (0x0006df38) popup_clock_analogue_window_t1

0x8fcc,	// (0x0006df46) clock_digital_number_pane_ParamLimits

0x8fcc,	// (0x0006df46) clock_digital_number_pane

0x8fd8,	// (0x0006df52) clock_digital_number_pane_cp02_ParamLimits

0x8fd8,	// (0x0006df52) clock_digital_number_pane_cp02

0x8fe4,	// (0x0006df5e) clock_digital_number_pane_cp03_ParamLimits

0x8fe4,	// (0x0006df5e) clock_digital_number_pane_cp03

0x8ff0,	// (0x0006df6a) clock_digital_number_pane_cp04_ParamLimits

0x8ff0,	// (0x0006df6a) clock_digital_number_pane_cp04

0x8ffc,	// (0x0006df76) clock_digital_separator_pane_ParamLimits

0x8ffc,	// (0x0006df76) clock_digital_separator_pane

0x9008,	// (0x0006df82) popup_clock_digital_window_t1

0x0099,	// (0x00065013) clock_digital_number_pane_g1

0x0099,	// (0x00065013) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x00074273) clock_digital_number_pane_g

0x0099,	// (0x00065013) clock_digital_separator_pane_g1

0x0099,	// (0x00065013) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x00074273) clock_digital_separator_pane_g

0xed82,	// (0x00073cfc) bg_popup_window_pane_cp04

0x09cd,	// (0x00065947) heading_pane_cp03

0x09d5,	// (0x0006594f) listscroll_popup_gms_pane

0x09dd,	// (0x00065957) grid_large_graphic_popup_pane

0x09e7,	// (0x00065961) listscroll_popup_gms_pane_g1

0x09ef,	// (0x00065969) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x00074310) listscroll_popup_gms_pane_g

0x0487,	// (0x00065401) scroll_pane_cp014

0x09f7,	// (0x00065971) cell_large_graphic_popup_pane_ParamLimits

0x09f7,	// (0x00065971) cell_large_graphic_popup_pane

0x0a0f,	// (0x00065989) cell_large_graphic_popup_pane_g1_ParamLimits

0x0a0f,	// (0x00065989) cell_large_graphic_popup_pane_g1

0x0a1b,	// (0x00065995) cell_large_graphic_popup_pane_g2_ParamLimits

0x0a1b,	// (0x00065995) cell_large_graphic_popup_pane_g2

0x0a27,	// (0x000659a1) cell_large_graphic_popup_pane_g3_ParamLimits

0x0a27,	// (0x000659a1) cell_large_graphic_popup_pane_g3

0x0a34,	// (0x000659ae) cell_large_graphic_popup_pane_g4_ParamLimits

0x0a34,	// (0x000659ae) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x00074315) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x00074315) cell_large_graphic_popup_pane_g

0x0a44,	// (0x000659be) grid_highlight_pane_cp010

0x0099,	// (0x00065013) bg_popup_call_pane_g1

0x0a4e,	// (0x000659c8) list_single_graphic_popup_conf_pane_ParamLimits

0x0a4e,	// (0x000659c8) list_single_graphic_popup_conf_pane

0x0a60,	// (0x000659da) list_highlight_pane_cp01

0x0a69,	// (0x000659e3) list_single_graphic_popup_conf_pane_g1

0x0a71,	// (0x000659eb) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0007431e) list_single_graphic_popup_conf_pane_g

0x0a79,	// (0x000659f3) list_single_graphic_popup_conf_pane_t1

0x0a87,	// (0x00065a01) linegrid_cams_pane_g1

0x9025,	// (0x0006df9f) linegrid_cams_pane_g2

0x01ba,	// (0x00065134) linegrid_cams_pane_g3

0x0a90,	// (0x00065a0a) linegrid_cams_pane_g4

0x902e,	// (0x0006dfa8) linegrid_cams_pane_g5

0x9037,	// (0x0006dfb1) linegrid_cams_pane_g6

0x0240,	// (0x000651ba) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x00074323) linegrid_cams_pane_g

0x0a99,	// (0x00065a13) popup_clock_analogue_window

0x0a99,	// (0x00065a13) popup_clock_digital_window

0xed82,	// (0x00073cfc) popup_phob_thumbnail_window

0x0099,	// (0x00065013) call_video_uplink_pane_g1

0x0aa2,	// (0x00065a1c) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x00074332) call_video_uplink_pane_g

0x020d,	// (0x00065187) video_uplink_pane

0x0aaa,	// (0x00065a24) mce_image_pane_g1

0x9040,	// (0x0006dfba) mce_image_pane_g2

0x9048,	// (0x0006dfc2) mce_image_pane_g3

0x9050,	// (0x0006dfca) mce_image_pane_g4

0x9058,	// (0x0006dfd2) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x00074337) mce_image_pane_g

0x0ab4,	// (0x00065a2e) control_top_pane_stacon_cp01_ParamLimits

0x0ab4,	// (0x00065a2e) control_top_pane_stacon_cp01

0x0ac8,	// (0x00065a42) uni_indicator_pane_stacon_cp01_ParamLimits

0x0ac8,	// (0x00065a42) uni_indicator_pane_stacon_cp01

0x0ad9,	// (0x00065a53) bg_popup_sub_pane_cp03

0x9060,	// (0x0006dfda) chi_dic_find_pane

0x9068,	// (0x0006dfe2) listscroll_chi_dic_pane

0x9071,	// (0x0006dfeb) main_pane_chidic_g1

0x9084,	// (0x0006dffe) chi_dic_find_pane_t1

0x0ae3,	// (0x00065a5d) find_chidic_pane

0x0aec,	// (0x00065a66) chi_dic_list_pane_ParamLimits

0x0aec,	// (0x00065a66) chi_dic_list_pane

0x0afd,	// (0x00065a77) scroll_pane_cp020

0x9092,	// (0x0006e00c) find_chidic_pane_t1

0xed82,	// (0x00073cfc) input_focus_pane_cp06

0x90a1,	// (0x0006e01b) list_chi_dic_pane_ParamLimits

0x90a1,	// (0x0006e01b) list_chi_dic_pane

0x0b05,	// (0x00065a7f) list_chi_dic_pane_t1_ParamLimits

0x0b05,	// (0x00065a7f) list_chi_dic_pane_t1

0xed82,	// (0x00073cfc) list_highlight_pane_cp020

0x0b18,	// (0x00065a92) bg_cale_heading_pane_g1

0x90c2,	// (0x0006e03c) bg_cale_heading_pane_g2

0x90ca,	// (0x0006e044) bg_cale_heading_pane_g3

0x90d2,	// (0x0006e04c) bg_cale_heading_pane_g4

0x90dc,	// (0x0006e056) bg_cale_heading_pane_g5

0x90e6,	// (0x0006e060) bg_cale_heading_pane_g6

0x90ee,	// (0x0006e068) bg_cale_heading_pane_g7

0x90f6,	// (0x0006e070) bg_cale_heading_pane_g8

0x9100,	// (0x0006e07a) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x00074342) bg_cale_heading_pane_g

0x0b18,	// (0x00065a92) bg_cale_side_pane_g1

0x910a,	// (0x0006e084) bg_cale_side_pane_g2

0x9114,	// (0x0006e08e) bg_cale_side_pane_g3

0x911e,	// (0x0006e098) bg_cale_side_pane_g4

0x9128,	// (0x0006e0a2) bg_cale_side_pane_g5

0x9132,	// (0x0006e0ac) bg_cale_side_pane_g6

0x913c,	// (0x0006e0b6) bg_cale_side_pane_g7

0x9146,	// (0x0006e0c0) bg_cale_side_pane_g8

0x914e,	// (0x0006e0c8) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x00074355) bg_cale_side_pane_g

0x9156,	// (0x0006e0d0) popup_call_status_window_ParamLimits

0x9156,	// (0x0006e0d0) popup_call_status_window

0x0b20,	// (0x00065a9a) stacon_top_pane

0x0b28,	// (0x00065aa2) status_pane_ParamLimits

0x0b28,	// (0x00065aa2) status_pane

0x0b3d,	// (0x00065ab7) status_small_pane

0x0b45,	// (0x00065abf) control_pane

0xed82,	// (0x00073cfc) stacon_bottom_pane

0x0b4d,	// (0x00065ac7) list_single_mce_smart_pane_t1_ParamLimits

0x0b4d,	// (0x00065ac7) list_single_mce_smart_pane_t1

0x0b60,	// (0x00065ada) list_single_mce_smart_pane_t2_ParamLimits

0x0b60,	// (0x00065ada) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x00074368) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x00074368) list_single_mce_smart_pane_t

0x9162,	// (0x0006e0dc) compass_pane

0x916e,	// (0x0006e0e8) main_location2_pane_t1

0x9182,	// (0x0006e0fc) main_location2_pane_t2

0x9196,	// (0x0006e110) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0007436d) main_location2_pane_t

0x0b7f,	// (0x00065af9) compass_pane_g1_ParamLimits

0x0b7f,	// (0x00065af9) compass_pane_g1

0x91e0,	// (0x0006e15a) compass_pane_t1

0x91ef,	// (0x0006e169) compass_pane_t2

0x0005,

0xf3fc,	// (0x00074376) compass_pane_t

0x923a,	// (0x0006e1b4) text_secondary_cp61

0x0b93,	// (0x00065b0d) navi_pane_cams_g5

0x0bb6,	// (0x00065b30) navi_pane_im_t1

0x0bc4,	// (0x00065b3e) navi_pane_mp_g1_ParamLimits

0x0bc4,	// (0x00065b3e) navi_pane_mp_g1

0x0bd8,	// (0x00065b52) navi_pane_mp_g2_ParamLimits

0x0bd8,	// (0x00065b52) navi_pane_mp_g2

0x0be4,	// (0x00065b5e) navi_pane_mp_g3_ParamLimits

0x0be4,	// (0x00065b5e) navi_pane_mp_g3

0x0002,

0xf410,	// (0x0007438a) navi_pane_mp_g_ParamLimits

0xf410,	// (0x0007438a) navi_pane_mp_g

0x0bf0,	// (0x00065b6a) navi_pane_mp_t1

0x0bfe,	// (0x00065b78) navi_pane_mp_t2

0x0002,

0xf417,	// (0x00074391) navi_pane_mp_t

0x0c3a,	// (0x00065bb4) navi_pane_vt_g1

0x0bf0,	// (0x00065b6a) navi_pane_vt_t1

0x0c42,	// (0x00065bbc) navi_slider_pane

0x0c4a,	// (0x00065bc4) zooming_pane

0x0c52,	// (0x00065bcc) navi_slider_pane_g1

0x9351,	// (0x0006e2cb) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x00074398) navi_slider_pane_g

0x0c88,	// (0x00065c02) aid_levels_zoom

0x0c90,	// (0x00065c0a) zooming_pane_g1

0x0c98,	// (0x00065c12) zooming_pane_g2

0x0c98,	// (0x00065c12) zooming_pane_g3

0x0002,

0xf42d,	// (0x000743a7) zooming_pane_g

0x0ca0,	// (0x00065c1a) level_10_zoom

0x0ca9,	// (0x00065c23) level_11_zoom

0x0cb2,	// (0x00065c2c) level_1_zoom

0x0cbb,	// (0x00065c35) level_2_zoom

0x0cc4,	// (0x00065c3e) level_3_zoom

0x0ccd,	// (0x00065c47) level_4_zoom

0x0cd6,	// (0x00065c50) level_5_zoom

0x0cdf,	// (0x00065c59) level_6_zoom

0x0ce8,	// (0x00065c62) level_7_zoom

0x0cf1,	// (0x00065c6b) level_8_zoom

0x0cfa,	// (0x00065c74) level_9_zoom

0x0d0b,	// (0x00065c85) popup_phob_thumbnail_window_g1

0x0d13,	// (0x00065c8d) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x000743ae) popup_phob_thumbnail_window_g

0x205a,	// (0x00066fd4) level_1_location

0x2062,	// (0x00066fdc) level_2_location

0x206a,	// (0x00066fe4) level_3_location

0x2072,	// (0x00066fec) level_4_location

0x0c4a,	// (0x00065bc4) level_5_location

0x9363,	// (0x0006e2dd) mce_icon_pane_g1

0x936b,	// (0x0006e2e5) mce_icon_pane_g2

0x0001,

0xf439,	// (0x000743b3) mce_icon_pane_g

0x9373,	// (0x0006e2ed) main_mup_pane_g1_ParamLimits

0x9373,	// (0x0006e2ed) main_mup_pane_g1

0x938b,	// (0x0006e305) main_mup_pane_g2_ParamLimits

0x938b,	// (0x0006e305) main_mup_pane_g2

0x93a7,	// (0x0006e321) main_mup_pane_g3_ParamLimits

0x93a7,	// (0x0006e321) main_mup_pane_g3

0x93c3,	// (0x0006e33d) main_mup_pane_g4_ParamLimits

0x93c3,	// (0x0006e33d) main_mup_pane_g4

0x93df,	// (0x0006e359) main_mup_pane_g5_ParamLimits

0x93df,	// (0x0006e359) main_mup_pane_g5

0x9400,	// (0x0006e37a) main_mup_pane_g6_ParamLimits

0x9400,	// (0x0006e37a) main_mup_pane_g6

0x941c,	// (0x0006e396) main_mup_pane_g7_ParamLimits

0x941c,	// (0x0006e396) main_mup_pane_g7

0x9438,	// (0x0006e3b2) main_mup_pane_g8_ParamLimits

0x9438,	// (0x0006e3b2) main_mup_pane_g8

0x9454,	// (0x0006e3ce) main_mup_pane_g9_ParamLimits

0x9454,	// (0x0006e3ce) main_mup_pane_g9

0x9473,	// (0x0006e3ed) main_mup_pane_g10_ParamLimits

0x9473,	// (0x0006e3ed) main_mup_pane_g10

0x9492,	// (0x0006e40c) main_mup_pane_g11_ParamLimits

0x9492,	// (0x0006e40c) main_mup_pane_g11

0x94aa,	// (0x0006e424) main_mup_pane_g12_ParamLimits

0x94aa,	// (0x0006e424) main_mup_pane_g12

0x94b8,	// (0x0006e432) main_mup_pane_g13_ParamLimits

0x94b8,	// (0x0006e432) main_mup_pane_g13

0x000c,

0xf43e,	// (0x000743b8) main_mup_pane_g_ParamLimits

0xf43e,	// (0x000743b8) main_mup_pane_g

0x94ce,	// (0x0006e448) main_mup_pane_t1_ParamLimits

0x94ce,	// (0x0006e448) main_mup_pane_t1

0x94eb,	// (0x0006e465) main_mup_pane_t2_ParamLimits

0x94eb,	// (0x0006e465) main_mup_pane_t2

0x9505,	// (0x0006e47f) main_mup_pane_t3_ParamLimits

0x9505,	// (0x0006e47f) main_mup_pane_t3

0x951f,	// (0x0006e499) main_mup_pane_t4_ParamLimits

0x951f,	// (0x0006e499) main_mup_pane_t4

0x9531,	// (0x0006e4ab) main_mup_pane_t5_ParamLimits

0x9531,	// (0x0006e4ab) main_mup_pane_t5

0x9543,	// (0x0006e4bd) main_mup_pane_t6_ParamLimits

0x9543,	// (0x0006e4bd) main_mup_pane_t6

0x0005,

0xf459,	// (0x000743d3) main_mup_pane_t_ParamLimits

0xf459,	// (0x000743d3) main_mup_pane_t

0x9559,	// (0x0006e4d3) mup_progress_pane_ParamLimits

0x9559,	// (0x0006e4d3) mup_progress_pane

0x9565,	// (0x0006e4df) mup_visualizer_pane_ParamLimits

0x9565,	// (0x0006e4df) mup_visualizer_pane

0x95a3,	// (0x0006e51d) mup_volume_pane_ParamLimits

0x95a3,	// (0x0006e51d) mup_volume_pane

0x0d1b,	// (0x00065c95) mup_visualizer_pane_g1_ParamLimits

0x0d1b,	// (0x00065c95) mup_visualizer_pane_g1

0x0d1b,	// (0x00065c95) mup_visualizer_pane_g2_ParamLimits

0x0d1b,	// (0x00065c95) mup_visualizer_pane_g2

0x0b7f,	// (0x00065af9) mup_visualizer_pane_g3_ParamLimits

0x0b7f,	// (0x00065af9) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x000743e0) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x000743e0) mup_visualizer_pane_g

0x0099,	// (0x00065013) mup_volume_pane_g1

0x0d31,	// (0x00065cab) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x000743e7) mup_volume_pane_g

0x0099,	// (0x00065013) mup_progress_pane_g1

0x0d3a,	// (0x00065cb4) mup_progress_pane_g2

0x0d43,	// (0x00065cbd) mup_progress_pane_g3

0x0002,

0xf472,	// (0x000743ec) mup_progress_pane_g

0xed82,	// (0x00073cfc) bg_popup_window_pane_cp05

0x0d4c,	// (0x00065cc6) heading_pane_cp02_ParamLimits

0x0d4c,	// (0x00065cc6) heading_pane_cp02

0x0d66,	// (0x00065ce0) list_popup_blid_pane

0x0d6e,	// (0x00065ce8) list_blid_sat_info_pane_ParamLimits

0x0d6e,	// (0x00065ce8) list_blid_sat_info_pane

0x0d81,	// (0x00065cfb) list_blid_sat_info_pane_g1

0x0d89,	// (0x00065d03) list_blid_sat_info_pane_t1

0x96ae,	// (0x0006e628) mup_equalizer_pane_ParamLimits

0x96ae,	// (0x0006e628) mup_equalizer_pane

0x96cf,	// (0x0006e649) mup_equalizer_pane_cp1_ParamLimits

0x96cf,	// (0x0006e649) mup_equalizer_pane_cp1

0x96f0,	// (0x0006e66a) mup_equalizer_pane_cp2_ParamLimits

0x96f0,	// (0x0006e66a) mup_equalizer_pane_cp2

0x9711,	// (0x0006e68b) mup_equalizer_pane_cp3_ParamLimits

0x9711,	// (0x0006e68b) mup_equalizer_pane_cp3

0x9732,	// (0x0006e6ac) mup_equalizer_pane_cp4_ParamLimits

0x9732,	// (0x0006e6ac) mup_equalizer_pane_cp4

0x9753,	// (0x0006e6cd) mup_equalizer_pane_cp5

0x9769,	// (0x0006e6e3) mup_equalizer_pane_cp6

0x9781,	// (0x0006e6fb) mup_equalizer_pane_cp7

0x1f78,	// (0x00066ef2) bg_popup_call_poc_act_pane_g9

0x1f80,	// (0x00066efa) bg_popup_call_poc_act_pane_g10

0x1f88,	// (0x00066f02) bg_popup_call_poc_act_pane_g11

0x000a,

0xefdd,	// (0x00073f57) mup_scale_pane

0x0099,	// (0x00065013) mup_scale_pane_g1

0x0d97,	// (0x00065d11) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x00074408) mup_scale_pane_g

0x0dbb,	// (0x00065d35) msg_data_pane

0x0dc3,	// (0x00065d3d) scroll_pane_cp017

0x608a,	// (0x0006b004) bg_list_pane_cp04_ParamLimits

0x608a,	// (0x0006b004) bg_list_pane_cp04

0x0dcb,	// (0x00065d45) msg_data_pane_g1

0x97ab,	// (0x0006e725) msg_data_pane_g2

0x9048,	// (0x0006dfc2) msg_data_pane_g3

0x97b3,	// (0x0006e72d) msg_data_pane_g4

0x97bb,	// (0x0006e735) msg_data_pane_g5

0x97c3,	// (0x0006e73d) msg_data_pane_g6

0x97cb,	// (0x0006e745) msg_data_pane_g7

0x0006,

0xf49d,	// (0x00074417) msg_data_pane_g

0x60aa,	// (0x0006b024) msg_text_pane_ParamLimits

0x60aa,	// (0x0006b024) msg_text_pane

0x97d3,	// (0x0006e74d) qrid_highlight_pane_cp011_ParamLimits

0x97d3,	// (0x0006e74d) qrid_highlight_pane_cp011

0xed82,	// (0x00073cfc) msg_body_pane

0xed82,	// (0x00073cfc) msg_header_pane

0x0ddc,	// (0x00065d56) input_focus_pane_cp07

0x6102,	// (0x0006b07c) msg_header_pane_t1_ParamLimits

0x6102,	// (0x0006b07c) msg_header_pane_t1

0x6116,	// (0x0006b090) msg_header_pane_t2_ParamLimits

0x6116,	// (0x0006b090) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0007442b) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0007442b) msg_header_pane_t

0x0df1,	// (0x00065d6b) msg_body_pane_g1

0x6128,	// (0x0006b0a2) msg_body_pane_t1_ParamLimits

0x6128,	// (0x0006b0a2) msg_body_pane_t1

0x6159,	// (0x0006b0d3) msg_body_pane_t2_ParamLimits

0x6159,	// (0x0006b0d3) msg_body_pane_t2

0x616b,	// (0x0006b0e5) msg_body_pane_t3_ParamLimits

0x616b,	// (0x0006b0e5) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x00074430) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x00074430) msg_body_pane_t

0x9841,	// (0x0006e7bb) main_viewer_pane_g1_ParamLimits

0x9841,	// (0x0006e7bb) main_viewer_pane_g1

0x984d,	// (0x0006e7c7) main_viewer_pane_g2_ParamLimits

0x984d,	// (0x0006e7c7) main_viewer_pane_g2

0x9859,	// (0x0006e7d3) main_viewer_pane_g3_ParamLimits

0x9859,	// (0x0006e7d3) main_viewer_pane_g3

0x986a,	// (0x0006e7e4) main_viewer_pane_g4_ParamLimits

0x986a,	// (0x0006e7e4) main_viewer_pane_g4

0x987b,	// (0x0006e7f5) main_viewer_pane_g5_ParamLimits

0x987b,	// (0x0006e7f5) main_viewer_pane_g5

0x987b,	// (0x0006e7f5) main_viewer_pane_g7_ParamLimits

0x987b,	// (0x0006e7f5) main_viewer_pane_g7

0x988d,	// (0x0006e807) main_viewer_pane_g8_ParamLimits

0x988d,	// (0x0006e807) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x00074440) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x00074440) main_viewer_pane_g

0x0e3b,	// (0x00065db5) viewer_content_pane_ParamLimits

0x0e3b,	// (0x00065db5) viewer_content_pane

0x98c5,	// (0x0006e83f) main_postcard_pane_g1_ParamLimits

0x98c5,	// (0x0006e83f) main_postcard_pane_g1

0x98d3,	// (0x0006e84d) main_postcard_pane_g2_ParamLimits

0x98d3,	// (0x0006e84d) main_postcard_pane_g2

0x98e1,	// (0x0006e85b) main_postcard_pane_g3_ParamLimits

0x98e1,	// (0x0006e85b) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x00074451) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x00074451) main_postcard_pane_g

0x98f1,	// (0x0006e86b) main_postcard_pane_g4

0x217a,	// (0x000670f4) smil_status_volume_pane_g2

0x991d,	// (0x0006e897) postcard_pane_ParamLimits

0x991d,	// (0x0006e897) postcard_pane

0x0d1b,	// (0x00065c95) postcard_pane_g1_ParamLimits

0x0d1b,	// (0x00065c95) postcard_pane_g1

0x994f,	// (0x0006e8c9) postcard_pane_g2_ParamLimits

0x994f,	// (0x0006e8c9) postcard_pane_g2

0x995b,	// (0x0006e8d5) postcard_pane_g3_ParamLimits

0x995b,	// (0x0006e8d5) postcard_pane_g3

0x0e57,	// (0x00065dd1) postcard_pane_g4_ParamLimits

0x0e57,	// (0x00065dd1) postcard_pane_g4

0x9967,	// (0x0006e8e1) postcard_pane_g5_ParamLimits

0x9967,	// (0x0006e8e1) postcard_pane_g5

0x9973,	// (0x0006e8ed) postcard_pane_g6_ParamLimits

0x9973,	// (0x0006e8ed) postcard_pane_g6

0x0e49,	// (0x00065dc3) postcard_pane_g7_ParamLimits

0x0e49,	// (0x00065dc3) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0007445e) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0007445e) postcard_pane_g

0x997f,	// (0x0006e8f9) main_mp2_pane_g1_ParamLimits

0x997f,	// (0x0006e8f9) main_mp2_pane_g1

0x998b,	// (0x0006e905) main_mp2_pane_g2_ParamLimits

0x998b,	// (0x0006e905) main_mp2_pane_g2

0x9997,	// (0x0006e911) main_mp2_pane_g3_ParamLimits

0x9997,	// (0x0006e911) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0007446d) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0007446d) main_mp2_pane_g

0x99a3,	// (0x0006e91d) main_mp2_pane_t1_ParamLimits

0x99a3,	// (0x0006e91d) main_mp2_pane_t1

0x99ba,	// (0x0006e934) main_mp2_pane_t2_ParamLimits

0x99ba,	// (0x0006e934) main_mp2_pane_t2

0x99cc,	// (0x0006e946) main_mp2_pane_t3_ParamLimits

0x99cc,	// (0x0006e946) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x00074474) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x00074474) main_mp2_pane_t

0x0e65,	// (0x00065ddf) pec_content_pane_ParamLimits

0x0e65,	// (0x00065ddf) pec_content_pane

0x0487,	// (0x00065401) scroll_pane_cp015

0x0e77,	// (0x00065df1) pec_attribute_pane_ParamLimits

0x0e77,	// (0x00065df1) pec_attribute_pane

0x99de,	// (0x0006e958) pec_content_pane_g1_ParamLimits

0x99de,	// (0x0006e958) pec_content_pane_g1

0x0e87,	// (0x00065e01) pec_content_pane_t1_ParamLimits

0x0e87,	// (0x00065e01) pec_content_pane_t1

0x0e99,	// (0x00065e13) pec_content_pane_t2_ParamLimits

0x0e99,	// (0x00065e13) pec_content_pane_t2

0x0001,

0xf501,	// (0x0007447b) pec_content_pane_t_ParamLimits

0xf501,	// (0x0007447b) pec_content_pane_t

0x99ea,	// (0x0006e964) list_single_graphic_pane_cp01_ParamLimits

0x99ea,	// (0x0006e964) list_single_graphic_pane_cp01

0xefdd,	// (0x00073f57) bg_popup_sub_pane_cp04

0x0eab,	// (0x00065e25) popup_mup_playback_window_g1

0x0eb7,	// (0x00065e31) popup_mup_playback_window_t1

0x0ecc,	// (0x00065e46) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x00074480) popup_mup_playback_window_t

0x0f03,	// (0x00065e7d) main_image_pane_g1_ParamLimits

0x0f03,	// (0x00065e7d) main_image_pane_g1

0x0f46,	// (0x00065ec0) scroll_pane_cp018_ParamLimits

0x0f46,	// (0x00065ec0) scroll_pane_cp018

0x0f5e,	// (0x00065ed8) scroll_pane_cp016_ParamLimits

0x0f5e,	// (0x00065ed8) scroll_pane_cp016

0x9a8e,	// (0x0006ea08) smil2_image_pane_ParamLimits

0x9a8e,	// (0x0006ea08) smil2_image_pane

0x9ac2,	// (0x0006ea3c) smil2_root_pane_ParamLimits

0x9ac2,	// (0x0006ea3c) smil2_root_pane

0x9aee,	// (0x0006ea68) smil2_text_pane_ParamLimits

0x9aee,	// (0x0006ea68) smil2_text_pane

0xed82,	// (0x00073cfc) bg_list_pane_cp06

0x0f9a,	// (0x00065f14) grid_radio_pane

0xed82,	// (0x00073cfc) bg_popup_window_pane_cp06

0x0fa2,	// (0x00065f1c) main_fmradio_pane_t1

0x09cd,	// (0x00065947) heading_pane_cp04

0x0fb0,	// (0x00065f2a) main_fmradio_pane_t2

0x1f90,	// (0x00066f0a) popup_cale_lunar_info_window_g1

0x0fbe,	// (0x00065f38) main_fmradio_pane_t3

0x1f98,	// (0x00066f12) popup_cale_lunar_info_window_g2

0x0fcc,	// (0x00065f46) main_fmradio_pane_t4

0x0001,

0x0fda,	// (0x00065f54) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x0007455b) popup_cale_lunar_info_window_g

0xf51b,	// (0x00074495) main_fmradio_pane_t

0x0fe8,	// (0x00065f62) wait_bar_pane_cp03

0x0ff0,	// (0x00065f6a) cell_fmradio_pane_ParamLimits

0x0ff0,	// (0x00065f6a) cell_fmradio_pane

0x0e49,	// (0x00065dc3) cell_fmradio_pane_g1_ParamLimits

0x0e49,	// (0x00065dc3) cell_fmradio_pane_g1

0xed82,	// (0x00073cfc) grid_highlight_pane_cp011

0x1003,	// (0x00065f7d) poc_content_pane_ParamLimits

0x1003,	// (0x00065f7d) poc_content_pane

0x1015,	// (0x00065f8f) scroll_pane_cp019

0x9b2e,	// (0x0006eaa8) popup_call_poc_act_window_ParamLimits

0x9b2e,	// (0x0006eaa8) popup_call_poc_act_window

0x9b3b,	// (0x0006eab5) popup_call_poc_inact_window_ParamLimits

0x9b3b,	// (0x0006eab5) popup_call_poc_inact_window

0xf5b8,	// (0x00074532) bg_popup_call_poc_act_pane_g

0x1f00,	// (0x00066e7a) bg_popup_call_poc_inact_pane_g1

0x1f08,	// (0x00066e82) bg_popup_call_poc_inact_pane_g2

0x101d,	// (0x00065f97) popup_call_poc_act_window_g2

0x1f10,	// (0x00066e8a) bg_popup_call_poc_inact_pane_g3

0x1f18,	// (0x00066e92) bg_popup_call_poc_inact_pane_g4

0x1f20,	// (0x00066e9a) bg_popup_call_poc_inact_pane_g5

0x1025,	// (0x00065f9f) popup_call_poc_act_window_t1_ParamLimits

0x1025,	// (0x00065f9f) popup_call_poc_act_window_t1

0x104d,	// (0x00065fc7) popup_call_poc_act_window_t2_ParamLimits

0x104d,	// (0x00065fc7) popup_call_poc_act_window_t2

0x1075,	// (0x00065fef) popup_call_poc_act_window_t3_ParamLimits

0x1075,	// (0x00065fef) popup_call_poc_act_window_t3

0x109d,	// (0x00066017) popup_call_poc_act_window_t4_ParamLimits

0x109d,	// (0x00066017) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x000744a0) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x000744a0) popup_call_poc_act_window_t

0x1f28,	// (0x00066ea2) bg_popup_call_poc_inact_pane_g6

0x1f30,	// (0x00066eaa) bg_popup_call_poc_inact_pane_g7

0x1f38,	// (0x00066eb2) bg_popup_call_poc_inact_pane_g8

0x10af,	// (0x00066029) popup_call_poc_inact_window_g2

0x1f40,	// (0x00066eba) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x0007451f) bg_popup_call_poc_inact_pane_g

0x10b7,	// (0x00066031) popup_call_poc_inact_window_t1_ParamLimits

0x10b7,	// (0x00066031) popup_call_poc_inact_window_t1

0x10cc,	// (0x00066046) popup_call_poc_inact_window_t2_ParamLimits

0x10cc,	// (0x00066046) popup_call_poc_inact_window_t2

0x10e1,	// (0x0006605b) popup_call_poc_inact_window_t3_ParamLimits

0x10e1,	// (0x0006605b) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x000744a9) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x000744a9) popup_call_poc_inact_window_t

0x2100,	// (0x0006707a) context_pane_ParamLimits

0xa122,	// (0x0006f09c) signal_pane_ParamLimits

0x0c4a,	// (0x00065bc4) main_call2_pane

0x20ee,	// (0x00067068) popup_phob_thumbnail2_window_ParamLimits

0x20ee,	// (0x00067068) popup_phob_thumbnail2_window

0x97ef,	// (0x0006e769) aid_hotspot_pointer_arrow_pane

0x97f7,	// (0x0006e771) aid_hotspot_pointer_hand_pane

0x9e60,	// (0x0006edda) phob_pre_status_pane_g5

0x7c3c,	// (0x0006cbb6) cams_zoom_pane_ParamLimits

0x7c48,	// (0x0006cbc2) image_vga_pane_ParamLimits

0x7c57,	// (0x0006cbd1) main_camera_pane_g1_ParamLimits

0x7c65,	// (0x0006cbdf) main_camera_pane_g2_ParamLimits

0x7c73,	// (0x0006cbed) main_camera_pane_g3_ParamLimits

0x7c7f,	// (0x0006cbf9) main_camera_pane_g4_ParamLimits

0x7c8b,	// (0x0006cc05) main_camera_pane_g5_ParamLimits

0x7c97,	// (0x0006cc11) main_camera_pane_g6_ParamLimits

0x7ca3,	// (0x0006cc1d) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x000741a8) main_camera_pane_g_ParamLimits

0x7caf,	// (0x0006cc29) main_camera_pane_t1_ParamLimits

0x7cc1,	// (0x0006cc3b) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x000741b9) main_camera_pane_t_ParamLimits

0xefdd,	// (0x00073f57) bg_popup_preview_window_pane_cp01_ParamLimits

0xefdd,	// (0x00073f57) bg_popup_preview_window_pane_cp01

0x10f6,	// (0x00066070) popup_phob_thumbnail2_window_g1_ParamLimits

0x10f6,	// (0x00066070) popup_phob_thumbnail2_window_g1

0xed82,	// (0x00073cfc) call2_cli_visual_pane

0x9b57,	// (0x0006ead1) popup_call2_audio_conf_window_ParamLimits

0x9b57,	// (0x0006ead1) popup_call2_audio_conf_window

0x9b6c,	// (0x0006eae6) popup_call2_audio_first_window_ParamLimits

0x9b6c,	// (0x0006eae6) popup_call2_audio_first_window

0x9c0a,	// (0x0006eb84) popup_call2_audio_in_window_ParamLimits

0x9c0a,	// (0x0006eb84) popup_call2_audio_in_window

0x9c4c,	// (0x0006ebc6) popup_call2_audio_out_window_ParamLimits

0x9c4c,	// (0x0006ebc6) popup_call2_audio_out_window

0x9cae,	// (0x0006ec28) popup_call2_audio_second_window_ParamLimits

0x9cae,	// (0x0006ec28) popup_call2_audio_second_window

0x9d0c,	// (0x0006ec86) popup_call2_audio_wait_window_ParamLimits

0x9d0c,	// (0x0006ec86) popup_call2_audio_wait_window

0xed82,	// (0x00073cfc) bg_popup_call2_act_pane_cp03

0xefbf,	// (0x00073f39) list_conf_pane_cp

0x1102,	// (0x0006607c) popup_call2_audio_conf_window_t1

0x1110,	// (0x0006608a) list_single_graphic_popup_conf2_pane_ParamLimits

0x1110,	// (0x0006608a) list_single_graphic_popup_conf2_pane

0x0a60,	// (0x000659da) list_highlight_pane_cp04

0x1123,	// (0x0006609d) list_single_graphic_popup_conf2_pane_g1

0x0a71,	// (0x000659eb) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x000744b0) list_single_graphic_popup_conf2_pane_g

0x112d,	// (0x000660a7) list_single_graphic_popup_conf2_pane_t1

0x113b,	// (0x000660b5) bg_popup_call2_act_pane_cp01_ParamLimits

0x113b,	// (0x000660b5) bg_popup_call2_act_pane_cp01

0x11c5,	// (0x0006613f) call_type_pane_cp05_ParamLimits

0x11c5,	// (0x0006613f) call_type_pane_cp05

0x1219,	// (0x00066193) popup_call2_audio_second_window_g1_ParamLimits

0x1219,	// (0x00066193) popup_call2_audio_second_window_g1

0x126d,	// (0x000661e7) popup_call2_audio_second_window_g2_ParamLimits

0x126d,	// (0x000661e7) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x000744b5) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x000744b5) popup_call2_audio_second_window_g

0x12d2,	// (0x0006624c) popup_call2_audio_second_window_t1_ParamLimits

0x12d2,	// (0x0006624c) popup_call2_audio_second_window_t1

0x138d,	// (0x00066307) popup_call2_audio_second_window_t2_ParamLimits

0x138d,	// (0x00066307) popup_call2_audio_second_window_t2

0x13e0,	// (0x0006635a) popup_call2_audio_second_window_t3_ParamLimits

0x13e0,	// (0x0006635a) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x000744bc) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x000744bc) popup_call2_audio_second_window_t

0xed82,	// (0x00073cfc) bg_popup_call2_in_pane_cp02

0xed8c,	// (0x00073d06) call_type_pane_cp04

0xed94,	// (0x00073d0e) popup_call2_audio_wait_window_g1

0xed9c,	// (0x00073d16) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00074095) popup_call2_audio_wait_window_g

0xeda4,	// (0x00073d1e) popup_call2_audio_wait_window_t3

0x14d3,	// (0x0006644d) bg_popup_call2_act_pane_ParamLimits

0x14d3,	// (0x0006644d) bg_popup_call2_act_pane

0x1593,	// (0x0006650d) call_type_pane_cp03_ParamLimits

0x1593,	// (0x0006650d) call_type_pane_cp03

0x15f7,	// (0x00066571) popup_call2_audio_first_window_g1_ParamLimits

0x15f7,	// (0x00066571) popup_call2_audio_first_window_g1

0x1667,	// (0x000665e1) popup_call2_audio_first_window_g2_ParamLimits

0x1667,	// (0x000665e1) popup_call2_audio_first_window_g2

0x0d1b,	// (0x00065c95) popup_call2_audio_first_window_g3_ParamLimits

0x0d1b,	// (0x00065c95) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x000744c5) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x000744c5) popup_call2_audio_first_window_g

0x1745,	// (0x000666bf) popup_call2_audio_first_window_t1_ParamLimits

0x1745,	// (0x000666bf) popup_call2_audio_first_window_t1

0x1848,	// (0x000667c2) popup_call2_audio_first_window_t4_ParamLimits

0x1848,	// (0x000667c2) popup_call2_audio_first_window_t4

0x192b,	// (0x000668a5) popup_call2_audio_first_window_t5_ParamLimits

0x192b,	// (0x000668a5) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x000744d0) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x000744d0) popup_call2_audio_first_window_t

0xefd5,	// (0x00073f4f) bg_popup_call2_act_pane_g1

0x1fa0,	// (0x00066f1a) popup_cale_lunar_info_window_t1

0x1fae,	// (0x00066f28) popup_cale_lunar_info_window_t2

0x1fbc,	// (0x00066f36) popup_cale_lunar_info_window_t3

0xed82,	// (0x00073cfc) bg_popup_call2_bubble_pane

0x1a2c,	// (0x000669a6) bg_popup_call2_in_pane_cp01_ParamLimits

0x1a2c,	// (0x000669a6) bg_popup_call2_in_pane_cp01

0xea5e,	// (0x000739d8) call_type_pane_cp02

0x1a74,	// (0x000669ee) popup_call2_audio_out_window_g1_ParamLimits

0x1a74,	// (0x000669ee) popup_call2_audio_out_window_g1

0x1aa0,	// (0x00066a1a) popup_call2_audio_out_window_g2_ParamLimits

0x1aa0,	// (0x00066a1a) popup_call2_audio_out_window_g2

0x1ac8,	// (0x00066a42) popup_call2_audio_out_window_g3_ParamLimits

0x1ac8,	// (0x00066a42) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x000744d9) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x000744d9) popup_call2_audio_out_window_g

0x1b03,	// (0x00066a7d) popup_call2_audio_out_window_t1_ParamLimits

0x1b03,	// (0x00066a7d) popup_call2_audio_out_window_t1

0x1b62,	// (0x00066adc) popup_call2_audio_out_window_t2_ParamLimits

0x1b62,	// (0x00066adc) popup_call2_audio_out_window_t2

0x1bb6,	// (0x00066b30) popup_call2_audio_out_window_t3_ParamLimits

0x1bb6,	// (0x00066b30) popup_call2_audio_out_window_t3

0x1bcc,	// (0x00066b46) popup_call2_audio_out_window_t4_ParamLimits

0x1bcc,	// (0x00066b46) popup_call2_audio_out_window_t4

0x1be2,	// (0x00066b5c) popup_call2_audio_out_window_t5_ParamLimits

0x1be2,	// (0x00066b5c) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x000744e2) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x000744e2) popup_call2_audio_out_window_t

0x1c46,	// (0x00066bc0) bg_popup_call2_in_pane_ParamLimits

0x1c46,	// (0x00066bc0) bg_popup_call2_in_pane

0x1ca2,	// (0x00066c1c) popup_call2_audio_in_window_g1_ParamLimits

0x1ca2,	// (0x00066c1c) popup_call2_audio_in_window_g1

0x1cda,	// (0x00066c54) popup_call2_audio_in_window_g2_ParamLimits

0x1cda,	// (0x00066c54) popup_call2_audio_in_window_g2

0x1d12,	// (0x00066c8c) popup_call2_audio_in_window_g3_ParamLimits

0x1d12,	// (0x00066c8c) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x000744ef) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x000744ef) popup_call2_audio_in_window_g

0x1d6a,	// (0x00066ce4) popup_call2_audio_in_window_t1_ParamLimits

0x1d6a,	// (0x00066ce4) popup_call2_audio_in_window_t1

0x1dea,	// (0x00066d64) popup_call2_audio_in_window_t2_ParamLimits

0x1dea,	// (0x00066d64) popup_call2_audio_in_window_t2

0x1e6a,	// (0x00066de4) popup_call2_audio_in_window_t3_ParamLimits

0x1e6a,	// (0x00066de4) popup_call2_audio_in_window_t3

0x1e84,	// (0x00066dfe) popup_call2_audio_in_window_t4_ParamLimits

0x1e84,	// (0x00066dfe) popup_call2_audio_in_window_t4

0x1e96,	// (0x00066e10) popup_call2_audio_in_window_t5_ParamLimits

0x1e96,	// (0x00066e10) popup_call2_audio_in_window_t5

0x1eab,	// (0x00066e25) popup_call2_audio_in_window_t6_ParamLimits

0x1eab,	// (0x00066e25) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x000744f8) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x000744f8) popup_call2_audio_in_window_t

0xefd5,	// (0x00073f4f) bg_popup_call2_in_pane_g1

0x1fca,	// (0x00066f44) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x00074560) popup_cale_lunar_info_window_t

0xefdd,	// (0x00073f57) bg_popup_call2_rect_pane_ParamLimits

0xefdd,	// (0x00073f57) bg_popup_call2_rect_pane

0xed82,	// (0x00073cfc) call2_cli_visual_graphic_pane

0xed82,	// (0x00073cfc) call2_cli_visual_text_pane

0xa1d2,	// (0x0006f14c) smil_status_volume_pane_g3

0x0002,

0x0099,	// (0x00065013) call2_cli_visual_graphic_pane_g1

0x0099,	// (0x00065013) call2_cli_visual_graphic_pane_g2

0x0099,	// (0x00065013) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x00074505) call2_cli_visual_graphic_pane_g

0x1ec0,	// (0x00066e3a) bg_popup_call2_rect_pane_g1

0x0141,	// (0x000650bb) bg_popup_call2_rect_pane_g2

0x1ec8,	// (0x00066e42) bg_popup_call2_rect_pane_g3

0x1ed0,	// (0x00066e4a) bg_popup_call2_rect_pane_g4

0x1ed8,	// (0x00066e52) bg_popup_call2_rect_pane_g5

0x1ee0,	// (0x00066e5a) bg_popup_call2_rect_pane_g6

0x1ee8,	// (0x00066e62) bg_popup_call2_rect_pane_g7

0x1ef0,	// (0x00066e6a) bg_popup_call2_rect_pane_g8

0x1ef8,	// (0x00066e72) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0007450c) bg_popup_call2_rect_pane_g

0x1f00,	// (0x00066e7a) bg_popup_call2_bubble_pane_g1

0x1f08,	// (0x00066e82) bg_popup_call2_bubble_pane_g2

0x1f10,	// (0x00066e8a) bg_popup_call2_bubble_pane_g3

0x1f18,	// (0x00066e92) bg_popup_call2_bubble_pane_g4

0x1f20,	// (0x00066e9a) bg_popup_call2_bubble_pane_g5

0x1f28,	// (0x00066ea2) bg_popup_call2_bubble_pane_g6

0x1f30,	// (0x00066eaa) bg_popup_call2_bubble_pane_g7

0x1f38,	// (0x00066eb2) bg_popup_call2_bubble_pane_g8

0x1f40,	// (0x00066eba) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x0007451f) bg_popup_call2_bubble_pane_g

0x77df,	// (0x0006c759) aid_cale_week_size_cell_pane

0x7cd3,	// (0x0006cc4d) aid_cams_cif_uncrop_pane_ParamLimits

0x7cd3,	// (0x0006cc4d) aid_cams_cif_uncrop_pane

0x7e36,	// (0x0006cdb0) aid_cams_size_cell_ParamLimits

0x7e36,	// (0x0006cdb0) aid_cams_size_cell

0x7e42,	// (0x0006cdbc) grid_cams_pane_ParamLimits

0x7e50,	// (0x0006cdca) linegrid_cams_pane_ParamLimits

0x7f27,	// (0x0006cea1) call_video_pane_t1

0x7f48,	// (0x0006cec2) call_video_pane_t2

0x0001,

0xf292,	// (0x0007420c) call_video_pane_t

0x84c8,	// (0x0006d442) aid_cale_month_size_cell_pane_ParamLimits

0x84c8,	// (0x0006d442) aid_cale_month_size_cell_pane

0xf62f,	// (0x000745a9) smil_status_volume_pane_g

0xa1df,	// (0x0006f159) volume_smil_pane_ParamLimits

0x6f93,	// (0x0006bf0d) aid_popup2_width_pane

0x76d4,	// (0x0006c64e) cell_qdial_pane_g4_ParamLimits

0x76d4,	// (0x0006c64e) cell_qdial_pane_g4

0x91bc,	// (0x0006e136) aid_blid_cardinal_pane_ParamLimits

0x91cc,	// (0x0006e146) aid_blid_destination_pane_ParamLimits

0x91cc,	// (0x0006e146) aid_blid_destination_pane

0xefdd,	// (0x00073f57) bg_popup_call_poc_act_pane_ParamLimits

0xefdd,	// (0x00073f57) bg_popup_call_poc_act_pane

0xefdd,	// (0x00073f57) bg_popup_call_poc_inact_pane_ParamLimits

0xefdd,	// (0x00073f57) bg_popup_call_poc_inact_pane

0x1f50,	// (0x00066eca) bg_popup_call_poc_act_pane_g1

0x1f58,	// (0x00066ed2) bg_popup_call_poc_act_pane_g2

0x1f60,	// (0x00066eda) bg_popup_call_poc_act_pane_g3

0x1f18,	// (0x00066e92) bg_popup_call_poc_act_pane_g4

0x1f20,	// (0x00066e9a) bg_popup_call_poc_act_pane_g5

0x1f68,	// (0x00066ee2) bg_popup_call_poc_act_pane_g6

0x1f30,	// (0x00066eaa) bg_popup_call_poc_act_pane_g7

0x1f70,	// (0x00066eea) bg_popup_call_poc_act_pane_g8

0xed82,	// (0x00073cfc) main_usb_pane

0x20c9,	// (0x00067043) popup_cale_lunar_info_window

0x8267,	// (0x0006d1e1) im_reading_pane_t1_ParamLimits

0x03df,	// (0x00065359) list_im_pane_ParamLimits

0x03f0,	// (0x0006536a) scroll_pane_cp07_ParamLimits

0xed82,	// (0x00073cfc) grid_highlight_pane_cp012

0xefdd,	// (0x00073f57) mup_scale_pane_ParamLimits

0x0d1b,	// (0x00065c95) main_usb_pane_g1_ParamLimits

0x0d1b,	// (0x00065c95) main_usb_pane_g1

0x9d83,	// (0x0006ecfd) main_usb_pane_g2_ParamLimits

0x9d83,	// (0x0006ecfd) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x00074549) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x00074549) main_usb_pane_g

0x9d8f,	// (0x0006ed09) main_usb_pane_t1_ParamLimits

0x9d8f,	// (0x0006ed09) main_usb_pane_t1

0x9da1,	// (0x0006ed1b) main_usb_pane_t2_ParamLimits

0x9da1,	// (0x0006ed1b) main_usb_pane_t2

0x9db3,	// (0x0006ed2d) main_usb_pane_t3_ParamLimits

0x9db3,	// (0x0006ed2d) main_usb_pane_t3

0x9dc5,	// (0x0006ed3f) main_usb_pane_t4_ParamLimits

0x9dc5,	// (0x0006ed3f) main_usb_pane_t4

0x9dd7,	// (0x0006ed51) main_usb_pane_t5_ParamLimits

0x9dd7,	// (0x0006ed51) main_usb_pane_t5

0x9de9,	// (0x0006ed63) main_usb_pane_t6_ParamLimits

0x9de9,	// (0x0006ed63) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x0007454e) main_usb_pane_t_ParamLimits

0x9162,	// (0x0006e0dc) aid_text_placing

0x916e,	// (0x0006e0e8) main_location2_pane_t1_ParamLimits

0x9182,	// (0x0006e0fc) main_location2_pane_t2_ParamLimits

0x9196,	// (0x0006e110) main_location2_pane_t3_ParamLimits

0x91aa,	// (0x0006e124) main_location2_pane_t4_ParamLimits

0x91aa,	// (0x0006e124) main_location2_pane_t4

0xf3f3,	// (0x0007436d) main_location2_pane_t_ParamLimits

0xf021,	// (0x00073f9b) find_pinb_pane_g2_ParamLimits

0xf021,	// (0x00073f9b) find_pinb_pane_g2

0x0001,

0xf141,	// (0x000740bb) find_pinb_pane_g_ParamLimits

0xf141,	// (0x000740bb) find_pinb_pane_g

0xf02d,	// (0x00073fa7) find_pinb_pane_t1_ParamLimits

0xf03f,	// (0x00073fb9) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x000740c0) find_pinb_pane_t_ParamLimits

0xed82,	// (0x00073cfc) main_call3_pane

0x88e0,	// (0x0006d85a) cale_month_day_heading_pane_t1_ParamLimits

0x893e,	// (0x0006d8b8) cale_month_day_heading_pane_t2_ParamLimits

0x89a3,	// (0x0006d91d) cale_month_day_heading_pane_t3_ParamLimits

0x8a08,	// (0x0006d982) cale_month_day_heading_pane_t4_ParamLimits

0x8a6d,	// (0x0006d9e7) cale_month_day_heading_pane_t5_ParamLimits

0x8ad2,	// (0x0006da4c) cale_month_day_heading_pane_t6_ParamLimits

0x8b3f,	// (0x0006dab9) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x00074244) cale_month_day_heading_pane_t_ParamLimits

0x063c,	// (0x000655b6) smil_status_volume_pane

0x9937,	// (0x0006e8b1) postcard_address_pane_ParamLimits

0x9937,	// (0x0006e8b1) postcard_address_pane

0x9943,	// (0x0006e8bd) postcard_message_pane_ParamLimits

0x9943,	// (0x0006e8bd) postcard_message_pane

0x9d4b,	// (0x0006ecc5) call2_cli_visual_pane_t1_ParamLimits

0x9d4b,	// (0x0006ecc5) call2_cli_visual_pane_t1

0xa332,	// (0x0006f2ac) postcard_message_pane_t1_ParamLimits

0xa332,	// (0x0006f2ac) postcard_message_pane_t1

0xa31b,	// (0x0006f295) postcard_address_pane_t1_ParamLimits

0xa31b,	// (0x0006f295) postcard_address_pane_t1

0xa30c,	// (0x0006f286) popup_call3_audio_in_window_ParamLimits

0xa30c,	// (0x0006f286) popup_call3_audio_in_window

0xa1f4,	// (0x0006f16e) bg_popup_call3_in_pane_ParamLimits

0xa1f4,	// (0x0006f16e) bg_popup_call3_in_pane

0xa252,	// (0x0006f1cc) popup_call3_audio_in_window_g1_ParamLimits

0xa252,	// (0x0006f1cc) popup_call3_audio_in_window_g1

0xa26a,	// (0x0006f1e4) popup_call3_audio_in_window_g2_ParamLimits

0xa26a,	// (0x0006f1e4) popup_call3_audio_in_window_g2

0xa282,	// (0x0006f1fc) popup_call3_audio_in_window_g3_ParamLimits

0xa282,	// (0x0006f1fc) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x000745b0) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x000745b0) popup_call3_audio_in_window_g

0xa2aa,	// (0x0006f224) popup_call3_audio_in_window_t1_ParamLimits

0xa2aa,	// (0x0006f224) popup_call3_audio_in_window_t1

0xa2d2,	// (0x0006f24c) popup_call3_audio_in_window_t2_ParamLimits

0xa2d2,	// (0x0006f24c) popup_call3_audio_in_window_t2

0xa2fa,	// (0x0006f274) popup_call3_audio_in_window_t3_ParamLimits

0xa2fa,	// (0x0006f274) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x000745b9) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x000745b9) popup_call3_audio_in_window_t

0x0c4a,	// (0x00065bc4) bg_popup_call3_rect_pane

0x1ec0,	// (0x00066e3a) bg_popup_call3_rect_pane_g1

0x0141,	// (0x000650bb) bg_popup_call3_rect_pane_g2

0x1ec8,	// (0x00066e42) bg_popup_call3_rect_pane_g3

0x1ed0,	// (0x00066e4a) bg_popup_call3_rect_pane_g4

0x1ed8,	// (0x00066e52) bg_popup_call3_rect_pane_g5

0x1ee0,	// (0x00066e5a) bg_popup_call3_rect_pane_g6

0x1ee8,	// (0x00066e62) bg_popup_call3_rect_pane_g7

0x95be,	// (0x0006e538) mup_visualizer_osc_pane

0x0d29,	// (0x00065ca3) mup_visualizer_spec_pane

0xa214,	// (0x0006f18e) call3_video_qcif_pane_ParamLimits

0xa214,	// (0x0006f18e) call3_video_qcif_pane

0xa224,	// (0x0006f19e) call3_video_qcif_uncrop_pane_ParamLimits

0xa224,	// (0x0006f19e) call3_video_qcif_uncrop_pane

0xa230,	// (0x0006f1aa) call3_video_subqcif_pane_ParamLimits

0xa230,	// (0x0006f1aa) call3_video_subqcif_pane

0xa242,	// (0x0006f1bc) call3_video_subqcif_uncrop_pane_ParamLimits

0xa242,	// (0x0006f1bc) call3_video_subqcif_uncrop_pane

0xa29a,	// (0x0006f214) popup_call3_audio_in_window_g4_ParamLimits

0xa29a,	// (0x0006f214) popup_call3_audio_in_window_g4

0xa1c1,	// (0x0006f13b) mup_spec_half_pane

0xa1ca,	// (0x0006f144) mup_spec_half_pane_cp

0x2160,	// (0x000670da) mup_osc_middle_pane

0x2169,	// (0x000670e3) mup_visualizer_osc_pane_g1

0xa1a2,	// (0x0006f11c) mup_spec_bar_pane_ParamLimits

0xa1a2,	// (0x0006f11c) mup_spec_bar_pane

0x214d,	// (0x000670c7) mup_spec_bar_pane_g1

0x2157,	// (0x000670d1) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x000745a4) mup_spec_bar_pane_g

0x77df,	// (0x0006c759) aid_cale_week_size_cell_pane_ParamLimits

0x77f2,	// (0x0006c76c) bg_cale_heading_pane_ParamLimits

0x01d4,	// (0x0006514e) bg_cale_pane_cp01_ParamLimits

0x780e,	// (0x0006c788) cale_week_corner_pane_ParamLimits

0x781f,	// (0x0006c799) cale_week_day_heading_pane_ParamLimits

0x783b,	// (0x0006c7b5) cale_week_scroll_pane_g1_ParamLimits

0x7854,	// (0x0006c7ce) cale_week_scroll_pane_g2_ParamLimits

0x7865,	// (0x0006c7df) cale_week_scroll_pane_g3_ParamLimits

0x7876,	// (0x0006c7f0) cale_week_scroll_pane_g4_ParamLimits

0x7887,	// (0x0006c801) cale_week_scroll_pane_g5_ParamLimits

0x7898,	// (0x0006c812) cale_week_scroll_pane_g6_ParamLimits

0x78a9,	// (0x0006c823) cale_week_scroll_pane_g7_ParamLimits

0x78bc,	// (0x0006c836) cale_week_scroll_pane_g8_ParamLimits

0x78cf,	// (0x0006c849) cale_week_scroll_pane_g9_ParamLimits

0x78e0,	// (0x0006c85a) cale_week_scroll_pane_g10_ParamLimits

0x78f1,	// (0x0006c86b) cale_week_scroll_pane_g11_ParamLimits

0x7902,	// (0x0006c87c) cale_week_scroll_pane_g12_ParamLimits

0x791b,	// (0x0006c895) cale_week_scroll_pane_g13_ParamLimits

0x7934,	// (0x0006c8ae) cale_week_scroll_pane_g14_ParamLimits

0x794d,	// (0x0006c8c7) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0007414c) cale_week_scroll_pane_g_ParamLimits

0x7966,	// (0x0006c8e0) cale_week_time_pane_ParamLimits

0x7979,	// (0x0006c8f3) grid_cale_week_pane_ParamLimits

0x01ed,	// (0x00065167) listscroll_cale_week_pane_t1

0x7996,	// (0x0006c910) scroll_pane_cp08_ParamLimits

0x8519,	// (0x0006d493) cale_month_corner_pane_ParamLimits

0x0606,	// (0x00065580) cale_month_pane_t1

0x888f,	// (0x0006d809) cale_month_week_pane_ParamLimits

0x0d1b,	// (0x00065c95) popup_call_status_window_g1_ParamLimits

0x8f9e,	// (0x0006df18) popup_call_status_window_g2_ParamLimits

0x8faa,	// (0x0006df24) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x000742f4) popup_call_status_window_g_ParamLimits

0x0956,	// (0x000658d0) aid_call2_pane

0x60f4,	// (0x0006b06e) msg_header_pane_g1

0x9937,	// (0x0006e8b1) postcard_address2_pane_ParamLimits

0x9937,	// (0x0006e8b1) postcard_address2_pane

0x9943,	// (0x0006e8bd) postcard_message2_pane_ParamLimits

0x9943,	// (0x0006e8bd) postcard_message2_pane

0xa130,	// (0x0006f0aa) message2_row_pane_ParamLimits

0xa130,	// (0x0006f0aa) message2_row_pane

0xa14d,	// (0x0006f0c7) address2_row_pane_ParamLimits

0xa14d,	// (0x0006f0c7) address2_row_pane

0x211b,	// (0x00067095) postcard_message2_row_pane_g1

0x2123,	// (0x0006709d) postcard_message2_row_pane_t1

0x211b,	// (0x00067095) address2_row_pane_g1

0x2123,	// (0x0006709d) address2_row_pane_t1

0x7bb2,	// (0x0006cb2c) aid_size_cell_vorec

0xed82,	// (0x00073cfc) main_rss_pane

0xa160,	// (0x0006f0da) rss_list_single_pane_ParamLimits

0xa160,	// (0x0006f0da) rss_list_single_pane

0x2131,	// (0x000670ab) rss_list_single_pane_t1

0x213f,	// (0x000670b9) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x0007459f) rss_list_single_pane_t

0xed82,	// (0x00073cfc) main_camera2_pane

0xed82,	// (0x00073cfc) main_video2_pane

0xa396,	// (0x0006f310) cams_zoom_pane_cp2_ParamLimits

0xa396,	// (0x0006f310) cams_zoom_pane_cp2

0xa3a2,	// (0x0006f31c) image2_vga_pane_ParamLimits

0xa3a2,	// (0x0006f31c) image2_vga_pane

0xa3b1,	// (0x0006f32b) main_camera2_pane_g1_ParamLimits

0xa3b1,	// (0x0006f32b) main_camera2_pane_g1

0xa3bd,	// (0x0006f337) main_camera2_pane_g2_ParamLimits

0xa3bd,	// (0x0006f337) main_camera2_pane_g2

0xa3c9,	// (0x0006f343) main_camera2_pane_g3_ParamLimits

0xa3c9,	// (0x0006f343) main_camera2_pane_g3

0xa3d5,	// (0x0006f34f) main_camera2_pane_g4_ParamLimits

0xa3d5,	// (0x0006f34f) main_camera2_pane_g4

0xa3e1,	// (0x0006f35b) main_camera2_pane_g5_ParamLimits

0xa3e1,	// (0x0006f35b) main_camera2_pane_g5

0xa3ed,	// (0x0006f367) main_camera2_pane_g6_ParamLimits

0xa3ed,	// (0x0006f367) main_camera2_pane_g6

0xa3f9,	// (0x0006f373) main_camera2_pane_g7_ParamLimits

0xa3f9,	// (0x0006f373) main_camera2_pane_g7

0xa405,	// (0x0006f37f) main_camera2_pane_g8_ParamLimits

0xa405,	// (0x0006f37f) main_camera2_pane_g8

0x0008,

0xf646,	// (0x000745c0) main_camera2_pane_g_ParamLimits

0xf646,	// (0x000745c0) main_camera2_pane_g

0xa41d,	// (0x0006f397) main_camera2_pane_t1_ParamLimits

0xa41d,	// (0x0006f397) main_camera2_pane_t1

0xa42f,	// (0x0006f3a9) main_camera2_pane_t2_ParamLimits

0xa42f,	// (0x0006f3a9) main_camera2_pane_t2

0xa441,	// (0x0006f3bb) main_camera2_pane_t3_ParamLimits

0xa441,	// (0x0006f3bb) main_camera2_pane_t3

0xa453,	// (0x0006f3cd) main_camera2_pane_t4_ParamLimits

0xa453,	// (0x0006f3cd) main_camera2_pane_t4

0x0006,

0xf659,	// (0x000745d3) main_camera2_pane_t_ParamLimits

0xf659,	// (0x000745d3) main_camera2_pane_t

0xa4b5,	// (0x0006f42f) cams_zoom_pane_cp4_ParamLimits

0xa4b5,	// (0x0006f42f) cams_zoom_pane_cp4

0xa4c5,	// (0x0006f43f) image2_cif_pane_ParamLimits

0xa4c5,	// (0x0006f43f) image2_cif_pane

0xa4da,	// (0x0006f454) image2_subqcif_pane_ParamLimits

0xa4da,	// (0x0006f454) image2_subqcif_pane

0xa4e9,	// (0x0006f463) main_video2_pane_g1_ParamLimits

0xa4e9,	// (0x0006f463) main_video2_pane_g1

0xa4fb,	// (0x0006f475) main_video2_pane_g2_ParamLimits

0xa4fb,	// (0x0006f475) main_video2_pane_g2

0xa50b,	// (0x0006f485) main_video2_pane_g3_ParamLimits

0xa50b,	// (0x0006f485) main_video2_pane_g3

0xa51b,	// (0x0006f495) main_video2_pane_g4_ParamLimits

0xa51b,	// (0x0006f495) main_video2_pane_g4

0xa52b,	// (0x0006f4a5) main_video2_pane_g5_ParamLimits

0xa52b,	// (0x0006f4a5) main_video2_pane_g5

0xa53b,	// (0x0006f4b5) main_video2_pane_g6_ParamLimits

0xa53b,	// (0x0006f4b5) main_video2_pane_g6

0x0005,

0xf668,	// (0x000745e2) main_video2_pane_g_ParamLimits

0xf668,	// (0x000745e2) main_video2_pane_g

0xa54d,	// (0x0006f4c7) main_video2_pane_t1_ParamLimits

0xa54d,	// (0x0006f4c7) main_video2_pane_t1

0xa567,	// (0x0006f4e1) main_video2_pane_t2_ParamLimits

0xa567,	// (0x0006f4e1) main_video2_pane_t2

0xa58d,	// (0x0006f507) main_video2_pane_t3_ParamLimits

0xa58d,	// (0x0006f507) main_video2_pane_t3

0x0002,

0xf675,	// (0x000745ef) main_video2_pane_t_ParamLimits

0xf675,	// (0x000745ef) main_video2_pane_t

0x9ea0,	// (0x0006ee1a) call_muted_g2

0x0001,

0xf617,	// (0x00074591) call_muted_g

0xed82,	// (0x00073cfc) main_mup2_pane

0x2220,	// (0x0006719a) main_mup2_pane_g1_ParamLimits

0x2220,	// (0x0006719a) main_mup2_pane_g1

0xa5b3,	// (0x0006f52d) main_mup2_pane_g2_ParamLimits

0xa5b3,	// (0x0006f52d) main_mup2_pane_g2

0xa835,	// (0x0006f7af) main_mup_pane_g13_cp1

0xa83d,	// (0x0006f7b7) mup_volume_pane_cp1

0xa5d3,	// (0x0006f54d) main_mup2_pane_g4_ParamLimits

0xa5d3,	// (0x0006f54d) main_mup2_pane_g4

0xa5e8,	// (0x0006f562) main_mup2_pane_g5_ParamLimits

0xa5e8,	// (0x0006f562) main_mup2_pane_g5

0xa5fd,	// (0x0006f577) main_mup2_pane_g6_ParamLimits

0xa5fd,	// (0x0006f577) main_mup2_pane_g6

0xa612,	// (0x0006f58c) main_mup2_pane_g7_ParamLimits

0xa612,	// (0x0006f58c) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x000745f6) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x000745f6) main_mup2_pane_g

0xa62e,	// (0x0006f5a8) main_mup2_pane_t1_ParamLimits

0xa62e,	// (0x0006f5a8) main_mup2_pane_t1

0xa645,	// (0x0006f5bf) main_mup2_pane_t2_ParamLimits

0xa645,	// (0x0006f5bf) main_mup2_pane_t2

0xa65c,	// (0x0006f5d6) main_mup2_pane_t3_ParamLimits

0xa65c,	// (0x0006f5d6) main_mup2_pane_t3

0xa673,	// (0x0006f5ed) main_mup2_pane_t4_ParamLimits

0xa673,	// (0x0006f5ed) main_mup2_pane_t4

0xa68d,	// (0x0006f607) main_mup2_pane_t5_ParamLimits

0xa68d,	// (0x0006f607) main_mup2_pane_t5

0xa6a7,	// (0x0006f621) main_mup2_pane_t6_ParamLimits

0xa6a7,	// (0x0006f621) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x00074605) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x00074605) main_mup2_pane_t

0xa6df,	// (0x0006f659) mup2_visualizer_pane_ParamLimits

0xa6df,	// (0x0006f659) mup2_visualizer_pane

0xa715,	// (0x0006f68f) mup_progress_pane_cp_ParamLimits

0xa715,	// (0x0006f68f) mup_progress_pane_cp

0xa820,	// (0x0006f79a) mup_volume_pane_cp_ParamLimits

0xa820,	// (0x0006f79a) mup_volume_pane_cp

0xa72c,	// (0x0006f6a6) mup2_visualizer_pane_g1_ParamLimits

0xa72c,	// (0x0006f6a6) mup2_visualizer_pane_g1

0x21f2,	// (0x0006716c) mup2_visualizer_pane_g2_ParamLimits

0x21f2,	// (0x0006716c) mup2_visualizer_pane_g2

0xa741,	// (0x0006f6bb) mup2_visualizer_pane_g3_ParamLimits

0xa741,	// (0x0006f6bb) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x00074612) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x00074612) mup2_visualizer_pane_g

0x0f92,	// (0x00065f0c) aid_size_cell_fmradio

0x9fb6,	// (0x0006ef30) aid_height_parent_landcape

0x046e,	// (0x000653e8) wml_content_pane_cp

0x0476,	// (0x000653f0) wml_tabs_pane

0x047f,	// (0x000653f9) popup_wml_miniature_window

0x0487,	// (0x00065401) scroll_pane_cp021

0x049b,	// (0x00065415) wml_content_pane_comp8

0xed82,	// (0x00073cfc) bg_popup_sub_pane_cp05

0x2210,	// (0x0006718a) popup_wml_miniature_window_g1

0x2218,	// (0x00067192) wml_miniature_view_pane

0xa74f,	// (0x0006f6c9) aid_size_wml_view

0xa757,	// (0x0006f6d1) wml_miniature_view_pane_g1

0xa760,	// (0x0006f6da) wml_miniature_view_pane_g2

0xa769,	// (0x0006f6e3) wml_miniature_view_pane_g3

0xa771,	// (0x0006f6eb) wml_miniature_view_pane_g4

0xa779,	// (0x0006f6f3) wml_miniature_view_pane_g5

0xa781,	// (0x0006f6fb) wml_miniature_view_pane_g6

0xa789,	// (0x0006f703) wml_miniature_view_pane_g7

0xa791,	// (0x0006f70b) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x00074619) wml_miniature_view_pane_g

0x2220,	// (0x0006719a) background_graphic_ParamLimits

0x2220,	// (0x0006719a) background_graphic

0x222c,	// (0x000671a6) wml_tabs_2_pane

0x2235,	// (0x000671af) wml_tabs_3_pane_ParamLimits

0x2235,	// (0x000671af) wml_tabs_3_pane

0x2247,	// (0x000671c1) wml_tabs_4_pane_ParamLimits

0x2247,	// (0x000671c1) wml_tabs_4_pane

0x225d,	// (0x000671d7) wml_tabs_5_pane_ParamLimits

0x225d,	// (0x000671d7) wml_tabs_5_pane

0x2277,	// (0x000671f1) wml_tabs_pane_g2_ParamLimits

0x2277,	// (0x000671f1) wml_tabs_pane_g2

0x228b,	// (0x00067205) wml_tabs_pane_g3_ParamLimits

0x228b,	// (0x00067205) wml_tabs_pane_g3

0xa799,	// (0x0006f713) wml_tabs_2_active_pane_ParamLimits

0xa799,	// (0x0006f713) wml_tabs_2_active_pane

0xa7a9,	// (0x0006f723) wml_tabs_2_passive_pane_ParamLimits

0xa7a9,	// (0x0006f723) wml_tabs_2_passive_pane

0xa7b9,	// (0x0006f733) wml_tabs_3_active_pane_cp_ParamLimits

0xa7b9,	// (0x0006f733) wml_tabs_3_active_pane_cp

0xa7ca,	// (0x0006f744) wml_tabs_3_passive_pane_ParamLimits

0xa7ca,	// (0x0006f744) wml_tabs_3_passive_pane

0xa7db,	// (0x0006f755) wml_tabs_3_passive_pane_cp_ParamLimits

0xa7db,	// (0x0006f755) wml_tabs_3_passive_pane_cp

0xa7ec,	// (0x0006f766) tabs_4_active_pane

0xa7f4,	// (0x0006f76e) tabs_4_passive_pane

0xa7fc,	// (0x0006f776) tabs_4_passive_pane_cp

0xa804,	// (0x0006f77e) tabs_4_passive_pane_cp2

0x1f48,	// (0x00066ec2) aid_height_text

0x9587,	// (0x0006e501) mup_volume_cont_pane_ParamLimits

0x9587,	// (0x0006e501) mup_volume_cont_pane

0x734c,	// (0x0006c2c6) aid_size_cell_pinb

0xf00d,	// (0x00073f87) aid_size_list_pinb

0xa6fe,	// (0x0006f678) mup2_volume_cont_pane_ParamLimits

0xa6fe,	// (0x0006f678) mup2_volume_cont_pane

0xa80c,	// (0x0006f786) mup2_volume_cont_pane_g1_ParamLimits

0xa80c,	// (0x0006f786) mup2_volume_cont_pane_g1

0x6f9f,	// (0x0006bf19) aid_size_cell_touch_ParamLimits

0x6f9f,	// (0x0006bf19) aid_size_cell_touch

0x722c,	// (0x0006c1a6) touch_pane_ParamLimits

0x722c,	// (0x0006c1a6) touch_pane

0x6f81,	// (0x0006befb) main_rss2_pane

0x22e1,	// (0x0006725b) listscroll_rss2_pane

0x22ea,	// (0x00067264) rss2_navigation_pane

0x22f2,	// (0x0006726c) list_rss2_pane

0x0afd,	// (0x00065a77) scroll_pane_cp22

0x22fa,	// (0x00067274) rss2_navigation_pane_g1

0x2303,	// (0x0006727d) rss2_navigation_pane_g2

0x230b,	// (0x00067285) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x0007462a) rss2_navigation_pane_g

0x2313,	// (0x0006728d) rss2_navigation_pane_t1

0xa845,	// (0x0006f7bf) rss2_list_single_pane_ParamLimits

0xa845,	// (0x0006f7bf) rss2_list_single_pane

0x2321,	// (0x0006729b) rss2_list_single_pane_t2

0x232f,	// (0x000672a9) rss2_list_single_pane_t3_ParamLimits

0x232f,	// (0x000672a9) rss2_list_single_pane_t3

0x234c,	// (0x000672c6) rss2_list_single_pane_t4

0x8d4f,	// (0x0006dcc9) smil_status_pane_g1

0xe963,	// (0x000738dd) main_image2_pane_ParamLimits

0xe963,	// (0x000738dd) main_image2_pane

0xa411,	// (0x0006f38b) main_camera2_pane_g9_ParamLimits

0xa411,	// (0x0006f38b) main_camera2_pane_g9

0xa465,	// (0x0006f3df) main_camera2_pane_t5_ParamLimits

0xa465,	// (0x0006f3df) main_camera2_pane_t5

0xa477,	// (0x0006f3f1) main_camera2_pane_t6_ParamLimits

0xa477,	// (0x0006f3f1) main_camera2_pane_t6

0xa881,	// (0x0006f7fb) main_image2_pane_g1_ParamLimits

0xa881,	// (0x0006f7fb) main_image2_pane_g1

0x9b18,	// (0x0006ea92) smil2_video_pane_ParamLimits

0x9b18,	// (0x0006ea92) smil2_video_pane

0x5e6b,	// (0x0006ade5) aid_zoom_text_primary_cp

0xe959,	// (0x000738d3) popup_preview_fixed_window

0x03d7,	// (0x00065351) im_reading_pane_g1

0xa35b,	// (0x0006f2d5) cams2_bc_adjust_pane_cp_ParamLimits

0xa35b,	// (0x0006f2d5) cams2_bc_adjust_pane_cp

0xa4a7,	// (0x0006f421) cams2_bc_adjust_pane_ParamLimits

0xa4a7,	// (0x0006f421) cams2_bc_adjust_pane

0xa88d,	// (0x0006f807) cams2_bc_adjust_pane_g1

0xa895,	// (0x0006f80f) cams2_slider_pane

0xa89e,	// (0x0006f818) cams2_slider_pane_g1

0xa8a7,	// (0x0006f821) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x00074631) cams2_slider_pane_g

0x7422,	// (0x0006c39c) calc_display_pane_ParamLimits

0x7440,	// (0x0006c3ba) calc_paper_pane_ParamLimits

0x745c,	// (0x0006c3d6) grid_calc_pane_ParamLimits

0x9008,	// (0x0006df82) popup_clock_digital_window_t1_ParamLimits

0x0f2f,	// (0x00065ea9) main_image_pane_t1

0x7408,	// (0x0006c382) aid_size_cell_calc_ParamLimits

0x7408,	// (0x0006c382) aid_size_cell_calc

0x9fe8,	// (0x0006ef62) popup_blid_sat_info2_window_ParamLimits

0x9fe8,	// (0x0006ef62) popup_blid_sat_info2_window

0x2396,	// (0x00067310) aid_size_cell_blid

0x239e,	// (0x00067318) bg_popup_window_pane_cp07

0x23c1,	// (0x0006733b) grid_popup_blid_pane

0x23cb,	// (0x00067345) heading_pane_cp05_ParamLimits

0x23cb,	// (0x00067345) heading_pane_cp05

0x2495,	// (0x0006740f) cell_popup_blid_pane_ParamLimits

0x2495,	// (0x0006740f) cell_popup_blid_pane

0x24bb,	// (0x00067435) cell_popup_blid_pane_g1

0x24c3,	// (0x0006743d) cell_popup_blid_pane_t1

0xa6c4,	// (0x0006f63e) mup2_indicator_pane_ParamLimits

0xa6c4,	// (0x0006f63e) mup2_indicator_pane

0x0c4a,	// (0x00065bc4) mup2_visualizer_osc_pane

0x21fe,	// (0x00067178) mup2_visualizer_spec_pane_ParamLimits

0x21fe,	// (0x00067178) mup2_visualizer_spec_pane

0xa8c1,	// (0x0006f83b) mup2_spec_half_pane

0xa8ca,	// (0x0006f844) mup2_spec_half_pane_cp

0xa8d4,	// (0x0006f84e) mup2_spec_bar_pane_ParamLimits

0xa8d4,	// (0x0006f84e) mup2_spec_bar_pane

0x214d,	// (0x000670c7) mup2_spec_bar_pane_g1

0x2157,	// (0x000670d1) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x000745a4) mup2_spec_bar_pane_g

0xa8f3,	// (0x0006f86d) mup2_osc_middle_pane

0x2169,	// (0x000670e3) mup2_visualizer_osc_pane_g1

0xe991,	// (0x0007390b) popup_number_entry_window_t1_ParamLimits

0xe9a4,	// (0x0007391e) popup_number_entry_window_t2_ParamLimits

0xe9b6,	// (0x00073930) popup_number_entry_window_t3_ParamLimits

0x7283,	// (0x0006c1fd) popup_number_entry_window_t5_ParamLimits

0x7283,	// (0x0006c1fd) popup_number_entry_window_t5

0xf0ec,	// (0x00074066) popup_number_entry_window_t_ParamLimits

0xe9c8,	// (0x00073942) text_title_cp2_ParamLimits

0x97ff,	// (0x0006e779) aid_hotspot_pointer_text2_pane

0x9899,	// (0x0006e813) main_viewer_pane_g9_ParamLimits

0x9899,	// (0x0006e813) main_viewer_pane_g9

0x0606,	// (0x00065580) cale_month_pane_t1_ParamLimits

0x0671,	// (0x000655eb) bg_cale_pane_ParamLimits

0x0689,	// (0x00065603) list_cale_pane_ParamLimits

0x01ed,	// (0x00065167) listscroll_cale_day_pane_t1

0x069a,	// (0x00065614) scroll_pane_cp09_ParamLimits

0x95c6,	// (0x0006e540) main_mup_eq_pane_t1_ParamLimits

0x95c6,	// (0x0006e540) main_mup_eq_pane_t1

0x95e0,	// (0x0006e55a) main_mup_eq_pane_t2_ParamLimits

0x95e0,	// (0x0006e55a) main_mup_eq_pane_t2

0x95f8,	// (0x0006e572) main_mup_eq_pane_t3_ParamLimits

0x95f8,	// (0x0006e572) main_mup_eq_pane_t3

0x9610,	// (0x0006e58a) main_mup_eq_pane_t4_ParamLimits

0x9610,	// (0x0006e58a) main_mup_eq_pane_t4

0x9628,	// (0x0006e5a2) main_mup_eq_pane_t5_ParamLimits

0x9628,	// (0x0006e5a2) main_mup_eq_pane_t5

0x9640,	// (0x0006e5ba) main_mup_eq_pane_t6_ParamLimits

0x9640,	// (0x0006e5ba) main_mup_eq_pane_t6

0x9654,	// (0x0006e5ce) main_mup_eq_pane_t7_ParamLimits

0x9654,	// (0x0006e5ce) main_mup_eq_pane_t7

0x9668,	// (0x0006e5e2) main_mup_eq_pane_t8_ParamLimits

0x9668,	// (0x0006e5e2) main_mup_eq_pane_t8

0x967e,	// (0x0006e5f8) main_mup_eq_pane_t9_ParamLimits

0x967e,	// (0x0006e5f8) main_mup_eq_pane_t9

0x9696,	// (0x0006e610) main_mup_eq_pane_t10_ParamLimits

0x9696,	// (0x0006e610) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x000743f3) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x000743f3) main_mup_eq_pane_t

0x9753,	// (0x0006e6cd) mup_equalizer_pane_cp5_ParamLimits

0x9769,	// (0x0006e6e3) mup_equalizer_pane_cp6_ParamLimits

0x9781,	// (0x0006e6fb) mup_equalizer_pane_cp7_ParamLimits

0x6f81,	// (0x0006befb) main_gallery_pane

0x2172,	// (0x000670ec) smil2_volume_pane

0x218d,	// (0x00067107) smil_status_volume_pane_g1_ParamLimits

0x217a,	// (0x000670f4) smil_status_volume_pane_g2_ParamLimits

0xa1d2,	// (0x0006f14c) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x000745a9) smil_status_volume_pane_g_ParamLimits

0x239e,	// (0x00067318) bg_popup_window_pane_cp07_ParamLimits

0x23ac,	// (0x00067326) blid_firmament_pane

0xa8fc,	// (0x0006f876) aid_size_cell_gallery_ParamLimits

0xa8fc,	// (0x0006f876) aid_size_cell_gallery

0xa90a,	// (0x0006f884) grid_gallery_pane_ParamLimits

0xa90a,	// (0x0006f884) grid_gallery_pane

0xa91a,	// (0x0006f894) cell_gallery_pane_ParamLimits

0xa91a,	// (0x0006f894) cell_gallery_pane

0x24d1,	// (0x0006744b) bg_cell_gallery_focus_pane_ParamLimits

0x24d1,	// (0x0006744b) bg_cell_gallery_focus_pane

0x24e3,	// (0x0006745d) cell_gallery_pane_g1_ParamLimits

0x24e3,	// (0x0006745d) cell_gallery_pane_g1

0xa968,	// (0x0006f8e2) cell_gallery_pane_g2_ParamLimits

0xa968,	// (0x0006f8e2) cell_gallery_pane_g2

0xa975,	// (0x0006f8ef) cell_gallery_pane_g3_ParamLimits

0xa975,	// (0x0006f8ef) cell_gallery_pane_g3

0x24ef,	// (0x00067469) cell_gallery_pane_g4_ParamLimits

0x24ef,	// (0x00067469) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x00074657) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x00074657) cell_gallery_pane_g

0x24fb,	// (0x00067475) bg_cell_gallery_focus_pane_g1

0x2503,	// (0x0006747d) bg_cell_gallery_focus_pane_g2

0x250b,	// (0x00067485) bg_cell_gallery_focus_pane_g3

0x2513,	// (0x0006748d) bg_cell_gallery_focus_pane_g4

0x251b,	// (0x00067495) bg_cell_gallery_focus_pane_g5

0x2523,	// (0x0006749d) bg_cell_gallery_focus_pane_g6

0x252b,	// (0x000674a5) bg_cell_gallery_focus_pane_g7

0x2533,	// (0x000674ad) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x00074660) bg_cell_gallery_focus_pane_g

0x253b,	// (0x000674b5) aid_firma_cardinal

0x254f,	// (0x000674c9) blid_firmament_pane_t1

0x2566,	// (0x000674e0) blid_firmament_pane_t2

0x257d,	// (0x000674f7) blid_firmament_pane_t3

0x2594,	// (0x0006750e) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x00074671) blid_firmament_pane_t

0x25ab,	// (0x00067525) blid_sat_info_pane

0x25bb,	// (0x00067535) blid_sat_info_pane_g1

0x25bb,	// (0x00067535) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x0007467a) blid_sat_info_pane_g

0x25c5,	// (0x0006753f) blid_sat_info_pane_t1

0x25d3,	// (0x0006754d) smil2_volume_content_pane

0x25dc,	// (0x00067556) smil2_volume_pane_g1

0x25e4,	// (0x0006755e) smil2_volume_content_pane_g1

0x25ed,	// (0x00067567) smil2_volume_content_pane_g2

0x25f6,	// (0x00067570) smil2_volume_content_pane_g3

0x25ff,	// (0x00067579) smil2_volume_content_pane_g4

0x2608,	// (0x00067582) smil2_volume_content_pane_g5

0x2611,	// (0x0006758b) smil2_volume_content_pane_g6

0x261a,	// (0x00067594) smil2_volume_content_pane_g7

0x2623,	// (0x0006759d) smil2_volume_content_pane_g8

0x262c,	// (0x000675a6) smil2_volume_content_pane_g9

0x2635,	// (0x000675af) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x0007467f) smil2_volume_content_pane_g

0x7a00,	// (0x0006c97a) cale_week_day_heading_pane_t1_ParamLimits

0x7a14,	// (0x0006c98e) cale_week_day_heading_pane_t2_ParamLimits

0x7a28,	// (0x0006c9a2) cale_week_day_heading_pane_t3_ParamLimits

0x7a3c,	// (0x0006c9b6) cale_week_day_heading_pane_t4_ParamLimits

0x7a50,	// (0x0006c9ca) cale_week_day_heading_pane_t5_ParamLimits

0x7a64,	// (0x0006c9de) cale_week_day_heading_pane_t6_ParamLimits

0x7a78,	// (0x0006c9f2) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0007416b) cale_week_day_heading_pane_t_ParamLimits

0x01ff,	// (0x00065179) bg_cale_side_pane_ParamLimits

0x7a8c,	// (0x0006ca06) cale_week_time_pane_t1_ParamLimits

0x7aa4,	// (0x0006ca1e) cale_week_time_pane_t2_ParamLimits

0x7abc,	// (0x0006ca36) cale_week_time_pane_t3_ParamLimits

0x7ad4,	// (0x0006ca4e) cale_week_time_pane_t4_ParamLimits

0x7aec,	// (0x0006ca66) cale_week_time_pane_t5_ParamLimits

0x7b04,	// (0x0006ca7e) cale_week_time_pane_t6_ParamLimits

0x7b24,	// (0x0006ca9e) cale_week_time_pane_t7_ParamLimits

0x7b44,	// (0x0006cabe) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0007417a) cale_week_time_pane_t_ParamLimits

0x7b64,	// (0x0006cade) cell_cale_week_pane_g2_ParamLimits

0x01ff,	// (0x00065179) bg_cale_side_pane_cp01_ParamLimits

0x8bb4,	// (0x0006db2e) cale_month_week_pane_t1_ParamLimits

0x8bcb,	// (0x0006db45) cale_month_week_pane_t2_ParamLimits

0x8be2,	// (0x0006db5c) cale_month_week_pane_t3_ParamLimits

0x8bf9,	// (0x0006db73) cale_month_week_pane_t4_ParamLimits

0x8c10,	// (0x0006db8a) cale_month_week_pane_t5_ParamLimits

0x8c2f,	// (0x0006dba9) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x00074253) cale_month_week_pane_t_ParamLimits

0x8d1c,	// (0x0006dc96) cell_cale_month_pane_g1_ParamLimits

0x6f81,	// (0x0006befb) main_cale_event_viewer_pane

0x6f81,	// (0x0006befb) listscroll_cale_event_viewer_pane

0x263e,	// (0x000675b8) list_cale_ev_pane

0x2646,	// (0x000675c0) scroll_pane_cp023

0x2652,	// (0x000675cc) field_cale_ev_pane_ParamLimits

0x2652,	// (0x000675cc) field_cale_ev_pane

0x266c,	// (0x000675e6) field_cale_ev_content_pane_ParamLimits

0x266c,	// (0x000675e6) field_cale_ev_content_pane

0x2678,	// (0x000675f2) field_cale_ev_pane_g1_ParamLimits

0x2678,	// (0x000675f2) field_cale_ev_pane_g1

0x2684,	// (0x000675fe) field_cale_ev_pane_g2_ParamLimits

0x2684,	// (0x000675fe) field_cale_ev_pane_g2

0x269c,	// (0x00067616) field_cale_ev_pane_g3_ParamLimits

0x269c,	// (0x00067616) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x00074694) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x00074694) field_cale_ev_pane_g

0x26b4,	// (0x0006762e) field_cale_ev_pane_t1_ParamLimits

0x26b4,	// (0x0006762e) field_cale_ev_pane_t1

0x26cb,	// (0x00067645) field_cale_ev_content_pane_t1_ParamLimits

0x26cb,	// (0x00067645) field_cale_ev_content_pane_t1

0x0dd3,	// (0x00065d4d) bg_button_pane_cp01

0x0020,	// (0x00064f9a) listscroll_cale_week_pane_ParamLimits

0x77d5,	// (0x0006c74f) popup_toolbar_window_cp01

0x01ed,	// (0x00065167) listscroll_cale_week_pane_t1_ParamLimits

0x0020,	// (0x00064f9a) listscroll_cale_day_pane_ParamLimits

0x77d5,	// (0x0006c74f) popup_toolbar_window_cp02

0x01ed,	// (0x00065167) listscroll_cale_day_pane_t1_ParamLimits

0x0020,	// (0x00064f9a) main_cale_month_pane_ParamLimits

0xa0ac,	// (0x0006f026) popup_toolbar_window_cp03_ParamLimits

0xa0ac,	// (0x0006f026) popup_toolbar_window_cp03

0x9a2a,	// (0x0006e9a4) main_image_pane_g2_ParamLimits

0x9a2a,	// (0x0006e9a4) main_image_pane_g2

0x9a36,	// (0x0006e9b0) main_image_pane_g3_ParamLimits

0x9a36,	// (0x0006e9b0) main_image_pane_g3

0x0002,

0xf50b,	// (0x00074485) main_image_pane_g_ParamLimits

0xf50b,	// (0x00074485) main_image_pane_g

0x0f2f,	// (0x00065ea9) main_image_pane_t1_ParamLimits

0x9a42,	// (0x0006e9bc) main_image_pane_t2_ParamLimits

0x9a42,	// (0x0006e9bc) main_image_pane_t2

0x9a54,	// (0x0006e9ce) main_image_pane_t3_ParamLimits

0x9a54,	// (0x0006e9ce) main_image_pane_t3

0x9a66,	// (0x0006e9e0) main_image_pane_t4_ParamLimits

0x9a66,	// (0x0006e9e0) main_image_pane_t4

0x0003,

0xf512,	// (0x0007448c) main_image_pane_t_ParamLimits

0xf512,	// (0x0007448c) main_image_pane_t

0x9a78,	// (0x0006e9f2) popup_image_details_window_cp01

0x9a82,	// (0x0006e9fc) popup_toobar_trans_pane_cp01_ParamLimits

0x9a82,	// (0x0006e9fc) popup_toobar_trans_pane_cp01

0xa031,	// (0x0006efab) popup_image_details_window_ParamLimits

0xa031,	// (0x0006efab) popup_image_details_window

0x20d3,	// (0x0006704d) popup_image_focus_window

0xa34d,	// (0x0006f2c7) camera2_autofocus_pane_ParamLimits

0xa34d,	// (0x0006f2c7) camera2_autofocus_pane

0x6f81,	// (0x0006befb) bg_popup_sub_pane_cp06

0x26e8,	// (0x00067662) popup_image_focus_window_g1

0x26f0,	// (0x0006766a) popup_image_focus_window_g2

0x26f8,	// (0x00067672) popup_image_focus_window_g3

0x2700,	// (0x0006767a) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x0007469b) popup_image_focus_window_g

0x2708,	// (0x00067682) popup_image_focus_window_t1

0x2716,	// (0x00067690) popup_image_focus_window_t2

0x2726,	// (0x000676a0) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x000746a4) popup_image_focus_window_t

0x2734,	// (0x000676ae) camera2_autofocus_pane_g1

0xe963,	// (0x000738dd) bg_tb_trans_pane_cp01

0x2742,	// (0x000676bc) popup_image_details_window_g1

0x2755,	// (0x000676cf) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x000746b6) popup_image_details_window_g

0x277e,	// (0x000676f8) popup_image_details_window_t1

0x2790,	// (0x0006770a) popup_image_details_window_t2

0x27a9,	// (0x00067723) popup_image_details_window_t3

0x27bd,	// (0x00067737) popup_image_details_window_t4

0x27d8,	// (0x00067752) popup_image_details_window_t5

0x0004,

0xf743,	// (0x000746bd) popup_image_details_window_t

0xf0d8,	// (0x00074052) bg_calc_paper_pane_ParamLimits

0x6f81,	// (0x0006befb) grid_highlight_pane_cp013

0x7555,	// (0x0006c4cf) list_calc_pane_ParamLimits

0x7567,	// (0x0006c4e1) scroll_pane_cp024

0x0020,	// (0x00064f9a) bg_calc_display_pane_ParamLimits

0x756f,	// (0x0006c4e9) calc_display_pane_t1_ParamLimits

0x7584,	// (0x0006c4fe) calc_display_pane_t2_ParamLimits

0x7599,	// (0x0006c513) calc_display_pane_t3_ParamLimits

0xf173,	// (0x000740ed) calc_display_pane_t_ParamLimits

0x7680,	// (0x0006c5fa) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0007410a) cell_calc_pane_g

0x7689,	// (0x0006c603) cell_calc_pane_t1

0x00a3,	// (0x0006501d) grid_highlight_pane_cp02_ParamLimits

0x00b9,	// (0x00065033) toolbar_button_pane_cp01_ParamLimits

0x00b9,	// (0x00065033) toolbar_button_pane_cp01

0x0f74,	// (0x00065eee) temp_image_control_pane_ParamLimits

0x0f74,	// (0x00065eee) temp_image_control_pane

0xe963,	// (0x000738dd) main_mp3_pane

0x27f2,	// (0x0006776c) temp_image_control_pane_g1_ParamLimits

0x27f2,	// (0x0006776c) temp_image_control_pane_g1

0x2800,	// (0x0006777a) temp_image_control_pane_g2_ParamLimits

0x2800,	// (0x0006777a) temp_image_control_pane_g2

0x2812,	// (0x0006778c) temp_image_control_pane_g3_ParamLimits

0x2812,	// (0x0006778c) temp_image_control_pane_g3

0xa9b2,	// (0x0006f92c) temp_image_control_pane_g4_ParamLimits

0xa9b2,	// (0x0006f92c) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x000746c8) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x000746c8) temp_image_control_pane_g

0x27f2,	// (0x0006776c) main_mp3_pane_g1

0xa9c3,	// (0x0006f93d) main_mp3_pane_g2

0x0007,

0xf757,	// (0x000746d1) main_mp3_pane_g

0x2855,	// (0x000677cf) main_mp3_pane_t1

0x02e8,	// (0x00065262) main_camera_pane_g8_ParamLimits

0x02e8,	// (0x00065262) main_camera_pane_g8

0x7dec,	// (0x0006cd66) main_video_pane_g7_ParamLimits

0x7dec,	// (0x0006cd66) main_video_pane_g7

0xa495,	// (0x0006f40f) main_camera2_pane_t7_ParamLimits

0xa495,	// (0x0006f40f) main_camera2_pane_t7

0x042e,	// (0x000653a8) scroll_pane_cp025_ParamLimits

0x042e,	// (0x000653a8) scroll_pane_cp025

0x0442,	// (0x000653bc) scroll_pane_cp026_ParamLimits

0x0442,	// (0x000653bc) scroll_pane_cp026

0x0451,	// (0x000653cb) wml_content_pane_ParamLimits

0x6f81,	// (0x0006befb) main_touch_calib_pane

0xaa67,	// (0x0006f9e1) main_touch_calib_pane_g1

0xaa73,	// (0x0006f9ed) main_touch_calib_pane_g2

0xaa7f,	// (0x0006f9f9) main_touch_calib_pane_g3

0xaa8b,	// (0x0006fa05) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x000746ef) main_touch_calib_pane_g

0xaa97,	// (0x0006fa11) main_touch_calib_pane_t1

0xaaae,	// (0x0006fa28) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x000746f8) main_touch_calib_pane_t

0x0b8b,	// (0x00065b05) mup_progress_pane_cp02

0x0baa,	// (0x00065b24) navi_pane_g1

0x0c0c,	// (0x00065b86) navi_pane_mp_t3

0xe963,	// (0x000738dd) main_mp3_pane_ParamLimits

0xa0ea,	// (0x0006f064) navi_pane_ParamLimits

0x27f2,	// (0x0006776c) main_mp3_pane_g1_ParamLimits

0xa9c3,	// (0x0006f93d) main_mp3_pane_g2_ParamLimits

0xa9cf,	// (0x0006f949) main_mp3_pane_g3_ParamLimits

0xa9cf,	// (0x0006f949) main_mp3_pane_g3

0xa9db,	// (0x0006f955) main_mp3_pane_g4_ParamLimits

0xa9db,	// (0x0006f955) main_mp3_pane_g4

0x2822,	// (0x0006779c) main_mp3_pane_g5_ParamLimits

0x2822,	// (0x0006779c) main_mp3_pane_g5

0x2830,	// (0x000677aa) main_mp3_pane_g6_ParamLimits

0x2830,	// (0x000677aa) main_mp3_pane_g6

0x283d,	// (0x000677b7) main_mp3_pane_g7_ParamLimits

0x283d,	// (0x000677b7) main_mp3_pane_g7

0x2849,	// (0x000677c3) main_mp3_pane_g8_ParamLimits

0x2849,	// (0x000677c3) main_mp3_pane_g8

0xf757,	// (0x000746d1) main_mp3_pane_g_ParamLimits

0xa9e7,	// (0x0006f961) main_mp3_pane_t2

0xa9f7,	// (0x0006f971) main_mp3_pane_t3

0x2863,	// (0x000677dd) main_mp3_pane_t4

0x2871,	// (0x000677eb) main_mp3_pane_t5

0x0005,

0xf768,	// (0x000746e2) main_mp3_pane_t

0x287f,	// (0x000677f9) mup_progress_pane_cp01

0x5e6b,	// (0x0006ade5) aid_zoom_text_secondary2

0x263e,	// (0x000675b8) list_cale_ev2_pane

0x2646,	// (0x000675c0) scroll_pane_cp023_ParamLimits

0xab01,	// (0x0006fa7b) field_cale_ev2_pane_ParamLimits

0xab01,	// (0x0006fa7b) field_cale_ev2_pane

0xab35,	// (0x0006faaf) field_cale_ev2_pane_g1_ParamLimits

0xab35,	// (0x0006faaf) field_cale_ev2_pane_g1

0xab41,	// (0x0006fabb) field_cale_ev2_pane_g2_ParamLimits

0xab41,	// (0x0006fabb) field_cale_ev2_pane_g2

0xab59,	// (0x0006fad3) field_cale_ev2_pane_g3_ParamLimits

0xab59,	// (0x0006fad3) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x00074703) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x00074703) field_cale_ev2_pane_g

0x617d,	// (0x0006b0f7) field_cale_ev2_pane_t1_ParamLimits

0x617d,	// (0x0006b0f7) field_cale_ev2_pane_t1

0x6194,	// (0x0006b10e) field_cale_ev2_pane_t2_ParamLimits

0x6194,	// (0x0006b10e) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x0007470c) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x0007470c) field_cale_ev2_pane_t

0x9901,	// (0x0006e87b) main_postcard_pane_g5_ParamLimits

0x9901,	// (0x0006e87b) main_postcard_pane_g5

0x990f,	// (0x0006e889) main_postcard_pane_g6_ParamLimits

0x990f,	// (0x0006e889) main_postcard_pane_g6

0x7c2c,	// (0x0006cba6) camera2_autofocus_pane_cp_ParamLimits

0x7c2c,	// (0x0006cba6) camera2_autofocus_pane_cp

0xe963,	// (0x000738dd) main_mup3_pane

0xab9d,	// (0x0006fb17) main_mup3_pane_g1_ParamLimits

0xab9d,	// (0x0006fb17) main_mup3_pane_g1

0xabbe,	// (0x0006fb38) main_mup3_pane_g2_ParamLimits

0xabbe,	// (0x0006fb38) main_mup3_pane_g2

0xac39,	// (0x0006fbb3) main_mup3_pane_g3_ParamLimits

0xac39,	// (0x0006fbb3) main_mup3_pane_g3

0xac78,	// (0x0006fbf2) main_mup3_pane_g4_ParamLimits

0xac78,	// (0x0006fbf2) main_mup3_pane_g4

0xacb7,	// (0x0006fc31) main_mup3_pane_g5_ParamLimits

0xacb7,	// (0x0006fc31) main_mup3_pane_g5

0xacf8,	// (0x0006fc72) main_mup3_pane_g6_ParamLimits

0xacf8,	// (0x0006fc72) main_mup3_pane_g6

0x2887,	// (0x00067801) main_mup3_pane_g7_ParamLimits

0x2887,	// (0x00067801) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x0007471c) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x0007471c) main_mup3_pane_g

0xad6a,	// (0x0006fce4) main_mup3_pane_t1_ParamLimits

0xad6a,	// (0x0006fce4) main_mup3_pane_t1

0xadd9,	// (0x0006fd53) main_mup3_pane_t2_ParamLimits

0xadd9,	// (0x0006fd53) main_mup3_pane_t2

0xaea2,	// (0x0006fe1c) main_mup3_pane_t4_ParamLimits

0xaea2,	// (0x0006fe1c) main_mup3_pane_t4

0xaef4,	// (0x0006fe6e) main_mup3_pane_t5_ParamLimits

0xaef4,	// (0x0006fe6e) main_mup3_pane_t5

0xaf9c,	// (0x0006ff16) main_mup3_pane_t6_ParamLimits

0xaf9c,	// (0x0006ff16) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x0007472d) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x0007472d) main_mup3_pane_t

0xb044,	// (0x0006ffbe) mup3_progress_pane_ParamLimits

0xb044,	// (0x0006ffbe) mup3_progress_pane

0xb0a9,	// (0x00070023) popup_mup3_control_window_ParamLimits

0xb0a9,	// (0x00070023) popup_mup3_control_window

0x2895,	// (0x0006780f) popup_mup3_text_window

0xb0c2,	// (0x0007003c) mup3_progress_pane_t1

0xb0d9,	// (0x00070053) mup3_progress_pane_t2

0x289d,	// (0x00067817) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x0007473a) mup3_progress_pane_t

0x28b4,	// (0x0006782e) mup_progress_pane_cp03

0x6f81,	// (0x0006befb) bg_tb_trans_pane_cp04

0xb0f0,	// (0x0007006a) mup3_volume_pane

0xb0f8,	// (0x00070072) popup_mup3_control_window_g1

0xb101,	// (0x0007007b) mup3_volume_pane_g1

0xb10a,	// (0x00070084) mup3_volume_pane_g2

0xb113,	// (0x0007008d) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x00074741) mup3_volume_pane_g

0x6f81,	// (0x0006befb) bg_tb_trans_pane_cp03

0x28c4,	// (0x0006783e) popup_mup3_text_window_g1

0x28cc,	// (0x00067846) popup_mup3_text_window_t1

0x007a,	// (0x00064ff4) list_calc_item_pane_g1_ParamLimits

0x22c8,	// (0x00067242) mup_volume_pane_cp_g1

0xaac5,	// (0x0006fa3f) main_touch_calib_pane_t3

0xaad9,	// (0x0006fa53) main_touch_calib_pane_t4

0xaaed,	// (0x0006fa67) main_touch_calib_pane_t5

0x6f8b,	// (0x0006bf05) aid_cell_size_toolbar2

0x6f93,	// (0x0006bf0d) aid_popup3_width_pane

0x6fd3,	// (0x0006bf4d) aid_zoom_text_msg_primary

0x7c16,	// (0x0006cb90) vorec_t7

0x003e,	// (0x00064fb8) bg_calc_paper_pane_g1_ParamLimits

0x0056,	// (0x00064fd0) bg_calc_paper_pane_g2_ParamLimits

0x004a,	// (0x00064fc4) bg_calc_paper_pane_g3_ParamLimits

0x006e,	// (0x00064fe8) bg_calc_paper_pane_g4_ParamLimits

0x0062,	// (0x00064fdc) bg_calc_paper_pane_g5_ParamLimits

0x75d8,	// (0x0006c552) bg_calc_paper_pane_g6_ParamLimits

0x75e9,	// (0x0006c563) bg_calc_paper_pane_g7_ParamLimits

0x75fa,	// (0x0006c574) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x000740f4) bg_calc_paper_pane_g_ParamLimits

0x760b,	// (0x0006c585) calc_bg_paper_pane_g9_ParamLimits

0x7d15,	// (0x0006cc8f) image_qvga_pane_ParamLimits

0x7d15,	// (0x0006cc8f) image_qvga_pane

0xefdd,	// (0x00073f57) bg_popup_sub_pane_cp04_ParamLimits

0x0eab,	// (0x00065e25) popup_mup_playback_window_g1_ParamLimits

0x0eb7,	// (0x00065e31) popup_mup_playback_window_t1_ParamLimits

0x0ecc,	// (0x00065e46) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x00074480) popup_mup_playback_window_t_ParamLimits

0xa5c4,	// (0x0006f53e) main_mup2_pane_g3_ParamLimits

0xa5c4,	// (0x0006f53e) main_mup2_pane_g3

0x7fd5,	// (0x0006cf4f) popup_toolbar_window_cp04

0x12c1,	// (0x0006623b) popup_call2_audio_second_window_g3_ParamLimits

0x12c1,	// (0x0006623b) popup_call2_audio_second_window_g3

0x16cb,	// (0x00066645) popup_call2_audio_first_window_g4_ParamLimits

0x16cb,	// (0x00066645) popup_call2_audio_first_window_g4

0x1d4a,	// (0x00066cc4) popup_call2_audio_in_window_g4_ParamLimits

0x1d4a,	// (0x00066cc4) popup_call2_audio_in_window_g4

0x9a1d,	// (0x0006e997) aid_area_sk_bg_cut_ParamLimits

0x9a1d,	// (0x0006e997) aid_area_sk_bg_cut

0x0ee1,	// (0x00065e5b) aid_area_sk_bg_cut_2_ParamLimits

0x0ee1,	// (0x00065e5b) aid_area_sk_bg_cut_2

0xa958,	// (0x0006f8d2) aid_placing_details_win

0xa960,	// (0x0006f8da) aid_placing_details_win_2

0x2734,	// (0x000676ae) camera2_autofocus_pane_g1_ParamLimits

0x71cc,	// (0x0006c146) popup_fixed_preview_cale_window_ParamLimits

0x71cc,	// (0x0006c146) popup_fixed_preview_cale_window

0x0c76,	// (0x00065bf0) navi_slider_pane_g3

0x0c6d,	// (0x00065be7) navi_slider_pane_g4

0x0c64,	// (0x00065bde) navi_slider_pane_g5

0x0c76,	// (0x00065bf0) navi_slider_pane_g6

0x935a,	// (0x0006e2d4) navi_slider_pane_g7

0x0da0,	// (0x00065d1a) mup_scale_pane_g3

0x0da9,	// (0x00065d23) mup_scale_pane_g4

0x0db2,	// (0x00065d2c) mup_scale_pane_g5

0x9799,	// (0x0006e713) mup_scale_pane_g6

0x97a2,	// (0x0006e71c) mup_scale_pane_g7

0x0c76,	// (0x00065bf0) cams2_slider_pane_g3

0x237d,	// (0x000672f7) cams2_slider_pane_g4

0xa8b0,	// (0x0006f82a) cams2_slider_pane_g5

0x0c76,	// (0x00065bf0) cams2_slider_pane_g6

0xa8b8,	// (0x0006f832) cams2_slider_pane_g7

0x25bb,	// (0x00067535) camera2_autofocus_pane_cp_g1

0x28da,	// (0x00067854) bg_popup_preview_window_pane_cp02_ParamLimits

0x28da,	// (0x00067854) bg_popup_preview_window_pane_cp02

0x28e6,	// (0x00067860) list_fp_cale_pane_ParamLimits

0x28e6,	// (0x00067860) list_fp_cale_pane

0x28f2,	// (0x0006786c) popup_fixed_preview_cale_window_t1_ParamLimits

0x28f2,	// (0x0006786c) popup_fixed_preview_cale_window_t1

0xb11c,	// (0x00070096) popup_fixed_preview_cale_window_t2_ParamLimits

0xb11c,	// (0x00070096) popup_fixed_preview_cale_window_t2

0xb131,	// (0x000700ab) popup_fixed_preview_cale_window_t3_ParamLimits

0xb131,	// (0x000700ab) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x00074748) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x00074748) popup_fixed_preview_cale_window_t

0xb146,	// (0x000700c0) list_single_fp_cale_pane_ParamLimits

0xb146,	// (0x000700c0) list_single_fp_cale_pane

0x2910,	// (0x0006788a) list_single_fp_cale_pane_g1_ParamLimits

0x2910,	// (0x0006788a) list_single_fp_cale_pane_g1

0x291c,	// (0x00067896) list_single_fp_cale_pane_g2_ParamLimits

0x291c,	// (0x00067896) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0007474f) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0007474f) list_single_fp_cale_pane_g

0x2935,	// (0x000678af) list_single_fp_cale_pane_t1_ParamLimits

0x2935,	// (0x000678af) list_single_fp_cale_pane_t1

0x2947,	// (0x000678c1) list_single_fp_cale_pane_t2_ParamLimits

0x2947,	// (0x000678c1) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x00074756) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x00074756) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x6f81,	// (0x0006befb) main_dialer_pane

0xb15a,	// (0x000700d4) aid_cell_size_keypad

0xb164,	// (0x000700de) dialer_ne_pane

0xb16e,	// (0x000700e8) grid_dialer_command_1_pane

0xb176,	// (0x000700f0) grid_dialer_command_2_pane

0xb17e,	// (0x000700f8) grid_dialer_keypad_pane

0xb192,	// (0x0007010c) bg_popup_call_pane_cp06_ParamLimits

0xb192,	// (0x0007010c) bg_popup_call_pane_cp06

0xb19e,	// (0x00070118) dialer_ne_clear_pane_ParamLimits

0xb19e,	// (0x00070118) dialer_ne_clear_pane

0x297a,	// (0x000678f4) dialer_ne_pane_g1

0x2982,	// (0x000678fc) dialer_ne_pane_t1_ParamLimits

0x2982,	// (0x000678fc) dialer_ne_pane_t1

0xb1aa,	// (0x00070124) dialer_ne_pane_t2_ParamLimits

0xb1aa,	// (0x00070124) dialer_ne_pane_t2

0xb1c7,	// (0x00070141) dialer_ne_pane_t3_ParamLimits

0xb1c7,	// (0x00070141) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x0007475b) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x0007475b) dialer_ne_pane_t

0xb1eb,	// (0x00070165) dialer_ne_pane_t3_copy1_ParamLimits

0xb1eb,	// (0x00070165) dialer_ne_pane_t3_copy1

0xb20f,	// (0x00070189) cell_dialer_keypad_pane_ParamLimits

0xb20f,	// (0x00070189) cell_dialer_keypad_pane

0xb226,	// (0x000701a0) cell_dialer_command_1_pane_ParamLimits

0xb226,	// (0x000701a0) cell_dialer_command_1_pane

0xb23c,	// (0x000701b6) cell_dialer_command_2_pane_ParamLimits

0xb23c,	// (0x000701b6) cell_dialer_command_2_pane

0x2994,	// (0x0006790e) bg_button_pane_cp02_ParamLimits

0x2994,	// (0x0006790e) bg_button_pane_cp02

0xb24b,	// (0x000701c5) cell_dialer_keypad_pane_g1_ParamLimits

0xb24b,	// (0x000701c5) cell_dialer_keypad_pane_g1

0x2994,	// (0x0006790e) bg_button_pane_cp03_ParamLimits

0x2994,	// (0x0006790e) bg_button_pane_cp03

0xb260,	// (0x000701da) cell_dialer_command_1_pane_g1_ParamLimits

0xb260,	// (0x000701da) cell_dialer_command_1_pane_g1

0x29a0,	// (0x0006791a) bg_button_pane_cp04

0xb273,	// (0x000701ed) cell_dialer_command_2_pane_g1

0x0c4a,	// (0x00065bc4) bg_button_pane_cp06

0x29a8,	// (0x00067922) dialer_ne_clear_pane_g1

0x929d,	// (0x0006e217) navi_pane_g2

0x92cb,	// (0x0006e245) navi_pane_g3

0x0002,

0xf409,	// (0x00074383) navi_pane_g

0x92f6,	// (0x0006e270) navi_pane_mv_g2

0x931d,	// (0x0006e297) navi_pane_mv_g5

0x9325,	// (0x0006e29f) navi_pane_mv_t1

0x0020,	// (0x00064f9a) main_clock2_pane

0xb2a1,	// (0x0007021b) main_clock2_list_pane_ParamLimits

0xb2a1,	// (0x0007021b) main_clock2_list_pane

0xb2c9,	// (0x00070243) main_clock2_pane_t1_ParamLimits

0xb2c9,	// (0x00070243) main_clock2_pane_t1

0xb2f9,	// (0x00070273) main_clock2_pane_t2_ParamLimits

0xb2f9,	// (0x00070273) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x00074762) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x00074762) main_clock2_pane_t

0xb360,	// (0x000702da) popup_clock_analogue_window_cp03_ParamLimits

0xb360,	// (0x000702da) popup_clock_analogue_window_cp03

0xb380,	// (0x000702fa) popup_clock_digital_window_cp02_ParamLimits

0xb380,	// (0x000702fa) popup_clock_digital_window_cp02

0xb3f5,	// (0x0007036f) main_clock2_list_single_pane_ParamLimits

0xb3f5,	// (0x0007036f) main_clock2_list_single_pane

0x0c4a,	// (0x00065bc4) list_highlight_pane_cp05

0x29b0,	// (0x0006792a) main_clock2_list_single_pane_t1

0x7fd5,	// (0x0006cf4f) popup_toolbar_window_cp04_ParamLimits

0xa982,	// (0x0006f8fc) camera2_autofocus_pane_g2_ParamLimits

0xa982,	// (0x0006f8fc) camera2_autofocus_pane_g2

0xa98e,	// (0x0006f908) camera2_autofocus_pane_g3_ParamLimits

0xa98e,	// (0x0006f908) camera2_autofocus_pane_g3

0xa99a,	// (0x0006f914) camera2_autofocus_pane_g4_ParamLimits

0xa99a,	// (0x0006f914) camera2_autofocus_pane_g4

0xa9a6,	// (0x0006f920) camera2_autofocus_pane_g5_ParamLimits

0xa9a6,	// (0x0006f920) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x000746ab) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x000746ab) camera2_autofocus_pane_g

0xab7d,	// (0x0006faf7) camera2_autofocus_pane_cp_g2

0xab85,	// (0x0006faff) camera2_autofocus_pane_cp_g3

0xab8d,	// (0x0006fb07) camera2_autofocus_pane_cp_g4

0xab95,	// (0x0006fb0f) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x00074711) camera2_autofocus_pane_cp_g

0xb18a,	// (0x00070104) popup_dialer_spcha_window

0x6f81,	// (0x0006befb) bg_popup_sub_pane_cp07

0x29be,	// (0x00067938) list_spcha_pane

0x29c6,	// (0x00067940) list_single_spcha_pane_ParamLimits

0x29c6,	// (0x00067940) list_single_spcha_pane

0x6f81,	// (0x0006befb) list_highlight_pane_cp06

0x29d7,	// (0x00067951) list_single_spcha_pane_t1

0x1af4,	// (0x00066a6e) popup_call2_audio_out_window_g4_ParamLimits

0x1af4,	// (0x00066a6e) popup_call2_audio_out_window_g4

0x6f81,	// (0x0006befb) main_imed2_pane

0x20db,	// (0x00067055) popup_imed_adjust2_window

0xa03f,	// (0x0006efb9) popup_imed_trans_window_ParamLimits

0xa03f,	// (0x0006efb9) popup_imed_trans_window

0x23f7,	// (0x00067371) popup_blid_sat_info2_window_t1

0x2405,	// (0x0006737f) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x00074640) popup_blid_sat_info2_window_t

0xb49f,	// (0x00070419) aid_size_cell_colour_35

0xb4b9,	// (0x00070433) aid_size_cell_colour_112

0xb4d0,	// (0x0007044a) aid_size_cell_effect

0xe963,	// (0x000738dd) bg_tb_trans_pane_cp02

0x07b4,	// (0x0006572e) heading_imed_pane

0xb4ea,	// (0x00070464) listscroll_imed_pane

0x29e5,	// (0x0006795f) heading_imed_pane_g1

0x29ed,	// (0x00067967) heading_imed_pane_t1

0x29fb,	// (0x00067975) grid_imed_colour_35_pane_ParamLimits

0x29fb,	// (0x00067975) grid_imed_colour_35_pane

0xb4f6,	// (0x00070470) grid_imed_effect_pane

0x2a16,	// (0x00067990) list_imed_aspect_pane

0xb506,	// (0x00070480) scroll_pane_cp027_ParamLimits

0xb506,	// (0x00070480) scroll_pane_cp027

0xb512,	// (0x0007048c) cell_imed_effect_pane_ParamLimits

0xb512,	// (0x0007048c) cell_imed_effect_pane

0x2a1e,	// (0x00067998) cell_imed_colour_pane_ParamLimits

0x2a1e,	// (0x00067998) cell_imed_colour_pane

0x2a60,	// (0x000679da) cell_imed_colour_pane_g1_ParamLimits

0x2a60,	// (0x000679da) cell_imed_colour_pane_g1

0x2a71,	// (0x000679eb) hgihlgiht_grid_pane_cp016_ParamLimits

0x2a71,	// (0x000679eb) hgihlgiht_grid_pane_cp016

0xb52a,	// (0x000704a4) cell_imed_effect_pane_g1

0xb532,	// (0x000704ac) grid_highlight_pane_cp017

0x01a3,	// (0x0006511d) list_imed_single_pane_ParamLimits

0x01a3,	// (0x0006511d) list_imed_single_pane

0x6f81,	// (0x0006befb) list_highlight_pane_cp07

0x2a82,	// (0x000679fc) list_imed_aspect_pane_comp1_t1

0x20b3,	// (0x0006702d) bg_tb_trans_pane_cp05

0x2aa4,	// (0x00067a1e) popup_imed_adjust2_window_g1

0x2acb,	// (0x00067a45) popup_imed_adjust2_window_t1

0x2ae3,	// (0x00067a5d) slider_imed_adjust_pane

0x2af7,	// (0x00067a71) slider_imed_adjust_pane_g1

0x2b07,	// (0x00067a81) slider_imed_adjust_pane_g2

0x2b17,	// (0x00067a91) slider_imed_adjust_pane_g3

0x2b28,	// (0x00067aa2) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x0007477f) slider_imed_adjust_pane_g

0xb53b,	// (0x000704b5) aid_size_cell_clipart2

0xb547,	// (0x000704c1) grid_imed_clipart_pane

0x2b39,	// (0x00067ab3) scroll_pane_cp031

0xb551,	// (0x000704cb) cell_imed_clipart_pane_ParamLimits

0xb551,	// (0x000704cb) cell_imed_clipart_pane

0xb578,	// (0x000704f2) cell_imed_clipart_pane_g1

0x6f81,	// (0x0006befb) grid_highlight_pane_cp014

0xb2ad,	// (0x00070227) main_clock2_pane_g1_ParamLimits

0xb2ad,	// (0x00070227) main_clock2_pane_g1

0xb39c,	// (0x00070316) aid_call2_pane_cp10

0xb3ae,	// (0x00070328) aid_call_pane_cp10

0x0b7f,	// (0x00065af9) popup_clock_analogue_window_cp10_g1

0x0b7f,	// (0x00065af9) popup_clock_analogue_window_cp10_g2

0xb3c0,	// (0x0007033a) popup_clock_analogue_window_cp10_g3

0xb3c0,	// (0x0007033a) popup_clock_analogue_window_cp10_g4

0x0b7f,	// (0x00065af9) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x0007476d) popup_clock_analogue_window_cp10_g

0xb3d6,	// (0x00070350) popup_clock_analogue_window_cp10_t1

0xb407,	// (0x00070381) clock_digital_number_pane_cp10_ParamLimits

0xb407,	// (0x00070381) clock_digital_number_pane_cp10

0xb41f,	// (0x00070399) clock_digital_number_pane_cp11_ParamLimits

0xb41f,	// (0x00070399) clock_digital_number_pane_cp11

0xb437,	// (0x000703b1) clock_digital_number_pane_cp12_ParamLimits

0xb437,	// (0x000703b1) clock_digital_number_pane_cp12

0xb44f,	// (0x000703c9) clock_digital_number_pane_cp13_ParamLimits

0xb44f,	// (0x000703c9) clock_digital_number_pane_cp13

0xb467,	// (0x000703e1) clock_digital_separator_pane_cp10_ParamLimits

0xb467,	// (0x000703e1) clock_digital_separator_pane_cp10

0xb47f,	// (0x000703f9) popup_clock_digital_window_cp02_t1_ParamLimits

0xb47f,	// (0x000703f9) popup_clock_digital_window_cp02_t1

0xefd5,	// (0x00073f4f) clock_digital_number_pane_cp10_g1

0xefd5,	// (0x00073f4f) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x00074788) clock_digital_number_pane_cp10_g

0xefd5,	// (0x00073f4f) clock_digital_separator_pane_cp10_g1

0xefd5,	// (0x00073f4f) clock_digital_separator_pane_g2_cp10

0x0c1a,	// (0x00065b94) navi_pane_vded_g4

0x0c23,	// (0x00065b9d) navi_pane_vded_g5

0x0c2c,	// (0x00065ba6) navi_pane_vded_t1

0x6f81,	// (0x0006befb) main_vded_pane

0xb581,	// (0x000704fb) main_vded_pane_g1

0xb58d,	// (0x00070507) main_vded_pane_g2

0xb597,	// (0x00070511) main_vded_pane_g3

0x0002,

0xf813,	// (0x0007478d) main_vded_pane_g

0xb5a1,	// (0x0007051b) main_vded_pane_t1

0xb5af,	// (0x00070529) main_vded_pane_t2

0x0001,

0xf81a,	// (0x00074794) main_vded_pane_t

0xb5bd,	// (0x00070537) vded_slider_pane

0xb5c7,	// (0x00070541) vded_video_pane

0x2b41,	// (0x00067abb) vded_video_pane_g1

0xb5d1,	// (0x0007054b) vded_video_pane_g2

0x25bb,	// (0x00067535) vded_video_pane_g3

0x0002,

0xf81f,	// (0x00074799) vded_video_pane_g

0x2b4b,	// (0x00067ac5) vded_slider_pane_g1

0x22c8,	// (0x00067242) vded_slider_pane_g2

0x2b54,	// (0x00067ace) vded_slider_pane_g3

0x2b5d,	// (0x00067ad7) vded_slider_pane_g4

0x2b66,	// (0x00067ae0) vded_slider_pane_g5

0x0004,

0xf826,	// (0x000747a0) vded_slider_pane_g

0xb09b,	// (0x00070015) mup3_rocker_pane_ParamLimits

0xb09b,	// (0x00070015) mup3_rocker_pane

0xb5da,	// (0x00070554) mup3_control_keys_pane_g1

0xb5e2,	// (0x0007055c) mup3_control_keys_pane_g2

0xb5ea,	// (0x00070564) mup3_control_keys_pane_g3

0xb5f2,	// (0x0007056c) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x000747ab) mup3_control_keys_pane_g

0x71ea,	// (0x0006c164) popup_toolbar2_fixed_window_cp01_ParamLimits

0x71ea,	// (0x0006c164) popup_toolbar2_fixed_window_cp01

0xb0b5,	// (0x0007002f) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb0b5,	// (0x0007002f) popup_toolbar2_fixed_window_cp02

0x1433,	// (0x000663ad) popup_call2_audio_second_window_t4_ParamLimits

0x1433,	// (0x000663ad) popup_call2_audio_second_window_t4

0x1961,	// (0x000668db) popup_call2_audio_first_window_t6_ParamLimits

0x1961,	// (0x000668db) popup_call2_audio_first_window_t6

0x1bf7,	// (0x00066b71) popup_call2_audio_out_window_t6_ParamLimits

0x1bf7,	// (0x00066b71) popup_call2_audio_out_window_t6

0x6f81,	// (0x0006befb) main_vitu_pane

0xb602,	// (0x0007057c) aid_size_cell_itu_ParamLimits

0xb602,	// (0x0007057c) aid_size_cell_itu

0x7212,	// (0x0006c18c) bg_popup_window_pane_cp08_ParamLimits

0x7212,	// (0x0006c18c) bg_popup_window_pane_cp08

0xb610,	// (0x0007058a) field_vitu_entry_pane_ParamLimits

0xb610,	// (0x0007058a) field_vitu_entry_pane

0xb61f,	// (0x00070599) grid_vitu_function_pane_ParamLimits

0xb61f,	// (0x00070599) grid_vitu_function_pane

0xb62f,	// (0x000705a9) grid_vitu_itu_pane_ParamLimits

0xb62f,	// (0x000705a9) grid_vitu_itu_pane

0xb63f,	// (0x000705b9) cell_vitu_itu_pane_ParamLimits

0xb63f,	// (0x000705b9) cell_vitu_itu_pane

0xb654,	// (0x000705ce) cell_vitu_function_pane_ParamLimits

0xb654,	// (0x000705ce) cell_vitu_function_pane

0xe963,	// (0x000738dd) bg_popup_sub_pane_cp08_ParamLimits

0xe963,	// (0x000738dd) bg_popup_sub_pane_cp08

0xb668,	// (0x000705e2) field_vitu_entry_pane_t1_ParamLimits

0xb668,	// (0x000705e2) field_vitu_entry_pane_t1

0x2b87,	// (0x00067b01) field_vitu_entry_pane_t2_ParamLimits

0x2b87,	// (0x00067b01) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x000747b9) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x000747b9) field_vitu_entry_pane_t

0x2ba4,	// (0x00067b1e) bg_button_pane_cp05_ParamLimits

0x2ba4,	// (0x00067b1e) bg_button_pane_cp05

0xb685,	// (0x000705ff) cell_vitu_itu_pane_g1

0xb69d,	// (0x00070617) cell_vitu_itu_pane_t1_ParamLimits

0xb69d,	// (0x00070617) cell_vitu_itu_pane_t1

0xb6af,	// (0x00070629) cell_vitu_itu_pane_t2_ParamLimits

0xb6af,	// (0x00070629) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x000747be) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x000747be) cell_vitu_itu_pane_t

0x2bb2,	// (0x00067b2c) bg_button_pane_cp07

0xb6e4,	// (0x0007065e) cell_vitu_function_pane_g1

0x7480,	// (0x0006c3fa) main_calc_pane_g1

0x6fc7,	// (0x0006bf41) aid_visual_content_pane

0x6f81,	// (0x0006befb) main_vradio_pane

0xb6ed,	// (0x00070667) main_vradio_pane_g1_ParamLimits

0xb6ed,	// (0x00070667) main_vradio_pane_g1

0x2bbc,	// (0x00067b36) main_vradio_pane_g2_ParamLimits

0x2bbc,	// (0x00067b36) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x000747c5) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x000747c5) main_vradio_pane_g

0xb6fd,	// (0x00070677) main_vradio_pane_t1_ParamLimits

0xb6fd,	// (0x00070677) main_vradio_pane_t1

0xb70f,	// (0x00070689) main_vradio_pane_t2_ParamLimits

0xb70f,	// (0x00070689) main_vradio_pane_t2

0x2bc9,	// (0x00067b43) main_vradio_pane_t3_ParamLimits

0x2bc9,	// (0x00067b43) main_vradio_pane_t3

0x0002,

0xf850,	// (0x000747ca) main_vradio_pane_t_ParamLimits

0xf850,	// (0x000747ca) main_vradio_pane_t

0xb721,	// (0x0007069b) vradio_rocker_control_pane_ParamLimits

0xb721,	// (0x0007069b) vradio_rocker_control_pane

0xb72d,	// (0x000706a7) vradio_station_info_pane_ParamLimits

0xb72d,	// (0x000706a7) vradio_station_info_pane

0x2bdd,	// (0x00067b57) vradio_frequency_info_pane_ParamLimits

0x2bdd,	// (0x00067b57) vradio_frequency_info_pane

0x25bb,	// (0x00067535) vradio_station_info_pane_g1

0x2bec,	// (0x00067b66) vradio_station_info_pane_t1_ParamLimits

0x2bec,	// (0x00067b66) vradio_station_info_pane_t1

0x2c0e,	// (0x00067b88) vradio_station_info_pane_t2_ParamLimits

0x2c0e,	// (0x00067b88) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x000747d1) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x000747d1) vradio_station_info_pane_t

0x2c20,	// (0x00067b9a) vradio_tuning_pane

0x2c28,	// (0x00067ba2) vradio_rocker_control_pane_g1

0x2c30,	// (0x00067baa) vradio_rocker_control_pane_g2

0x2c38,	// (0x00067bb2) vradio_rocker_control_pane_g3

0x2c40,	// (0x00067bba) vradio_rocker_control_pane_g4

0x2c48,	// (0x00067bc2) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x000747d6) vradio_rocker_control_pane_g

0xb73c,	// (0x000706b6) vradio_frequency_info_pane_g1

0x2c50,	// (0x00067bca) vradio_frequency_info_pane_t1_ParamLimits

0x2c50,	// (0x00067bca) vradio_frequency_info_pane_t1

0xb746,	// (0x000706c0) vradio_tuning_pane_g1

0xb74f,	// (0x000706c9) vradio_tuning_pane_t1

0x7010,	// (0x0006bf8a) area_side_right_pane_ParamLimits

0x7010,	// (0x0006bf8a) area_side_right_pane

0x207a,	// (0x00066ff4) status_small_pane_g1

0x2082,	// (0x00066ffc) status_small_pane_g2

0x208b,	// (0x00067005) status_small_pane_g3

0x2094,	// (0x0006700e) status_small_pane_g4

0x0003,

0xf61c,	// (0x00074596) status_small_pane_g

0x209d,	// (0x00067017) status_small_pane_t1

0x6f81,	// (0x0006befb) main_video3_pane

0x2c64,	// (0x00067bde) cams_zoom_vslider_pane

0x2c6c,	// (0x00067be6) image3_wide_pane_ParamLimits

0x2c6c,	// (0x00067be6) image3_wide_pane

0x2c86,	// (0x00067c00) image3_wide_small_pane

0x2c92,	// (0x00067c0c) main_video3_pane_g1_ParamLimits

0x2c92,	// (0x00067c0c) main_video3_pane_g1

0x2cae,	// (0x00067c28) main_video3_pane_g2_ParamLimits

0x2cae,	// (0x00067c28) main_video3_pane_g2

0x0001,

0xf867,	// (0x000747e1) main_video3_pane_g_ParamLimits

0xf867,	// (0x000747e1) main_video3_pane_g

0x2cca,	// (0x00067c44) main_video3_pane_t1_ParamLimits

0x2cca,	// (0x00067c44) main_video3_pane_t1

0x2cf5,	// (0x00067c6f) main_video3_pane_t2_ParamLimits

0x2cf5,	// (0x00067c6f) main_video3_pane_t2

0x2d20,	// (0x00067c9a) main_video3_pane_t3_ParamLimits

0x2d20,	// (0x00067c9a) main_video3_pane_t3

0x0002,

0xf86c,	// (0x000747e6) main_video3_pane_t_ParamLimits

0xf86c,	// (0x000747e6) main_video3_pane_t

0x2d4d,	// (0x00067cc7) cams_zoom_vslider_pane_g1

0x2d56,	// (0x00067cd0) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x000747ed) cams_zoom_vslider_pane_g

0x2d5e,	// (0x00067cd8) small_slider_vertical_pane

0x25bb,	// (0x00067535) small_slider_vertical_pane_g1

0x25bb,	// (0x00067535) small_slider_vertical_pane_g2

0x2d66,	// (0x00067ce0) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x000747f2) small_slider_vertical_pane_g

0x6f81,	// (0x0006befb) main_hwr_training_pane

0x2d6f,	// (0x00067ce9) hwr_training_instruct_pane_ParamLimits

0x2d6f,	// (0x00067ce9) hwr_training_instruct_pane

0xb75e,	// (0x000706d8) hwr_training_navi_pane_ParamLimits

0xb75e,	// (0x000706d8) hwr_training_navi_pane

0xb778,	// (0x000706f2) hwr_training_write_pane_ParamLimits

0xb778,	// (0x000706f2) hwr_training_write_pane

0x6f81,	// (0x0006befb) bg_frame_shadow_pane

0x2da6,	// (0x00067d20) hwr_training_write_pane_g1

0x2dae,	// (0x00067d28) hwr_training_write_pane_g2

0x2db6,	// (0x00067d30) hwr_training_write_pane_g3

0x2dbe,	// (0x00067d38) hwr_training_write_pane_g4

0x2dc6,	// (0x00067d40) hwr_training_write_pane_g5

0x2dce,	// (0x00067d48) hwr_training_write_pane_g6

0x2dd6,	// (0x00067d50) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x000747f9) hwr_training_write_pane_g

0xb7b0,	// (0x0007072a) hwr_training_navi_pane_g1_ParamLimits

0xb7b0,	// (0x0007072a) hwr_training_navi_pane_g1

0xb7c2,	// (0x0007073c) hwr_training_navi_pane_g2_ParamLimits

0xb7c2,	// (0x0007073c) hwr_training_navi_pane_g2

0xb7d4,	// (0x0007074e) hwr_training_navi_pane_g3_ParamLimits

0xb7d4,	// (0x0007074e) hwr_training_navi_pane_g3

0xb7e4,	// (0x0007075e) hwr_training_navi_pane_g4_ParamLimits

0xb7e4,	// (0x0007075e) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x00074808) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x00074808) hwr_training_navi_pane_g

0xb7fe,	// (0x00070778) hwr_training_navi_pane_t1

0xb80c,	// (0x00070786) list_single_hwr_training_instruct_pane_ParamLimits

0xb80c,	// (0x00070786) list_single_hwr_training_instruct_pane

0x2dde,	// (0x00067d58) list_single_hwr_training_instruct_pane_t1

0x24fb,	// (0x00067475) bg_frame_shadow_pane_g1

0x2ded,	// (0x00067d67) bg_frame_shadow_pane_g2

0x2df5,	// (0x00067d6f) bg_frame_shadow_pane_g3

0x2dfd,	// (0x00067d77) bg_frame_shadow_pane_g4

0x2e05,	// (0x00067d7f) bg_frame_shadow_pane_g5

0x2e0d,	// (0x00067d87) bg_frame_shadow_pane_g6

0x2e15,	// (0x00067d8f) bg_frame_shadow_pane_g7

0x0119,	// (0x00065093) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x00074813) bg_frame_shadow_pane_g

0x6f81,	// (0x0006befb) main_video_tele_dialer_pane

0xb842,	// (0x000707bc) aid_size_cell_video_keypad_ParamLimits

0xb842,	// (0x000707bc) aid_size_cell_video_keypad

0xb852,	// (0x000707cc) grid_video_dialer_keypad_pane_ParamLimits

0xb852,	// (0x000707cc) grid_video_dialer_keypad_pane

0xb884,	// (0x000707fe) video_down_pane_cp_ParamLimits

0xb884,	// (0x000707fe) video_down_pane_cp

0xb8ac,	// (0x00070826) cell_video_dialer_keypad_pane_ParamLimits

0xb8ac,	// (0x00070826) cell_video_dialer_keypad_pane

0x2e1d,	// (0x00067d97) bg_button_pane_cp08_ParamLimits

0x2e1d,	// (0x00067d97) bg_button_pane_cp08

0xb8c1,	// (0x0007083b) cell_video_dialer_keypad_pane_g1_ParamLimits

0xb8c1,	// (0x0007083b) cell_video_dialer_keypad_pane_g1

0xb08f,	// (0x00070009) mup3_rocker2_pane_ParamLimits

0xb08f,	// (0x00070009) mup3_rocker2_pane

0x25bb,	// (0x00067535) mup3_rocker2_pane_g1

0x9fcd,	// (0x0006ef47) main_dialer2_pane

0x6f81,	// (0x0006befb) main_mp4_pane

0xb900,	// (0x0007087a) main_mp4_pane_g1_ParamLimits

0xb900,	// (0x0007087a) main_mp4_pane_g1

0xb90e,	// (0x00070888) main_mp4_pane_g2_ParamLimits

0xb90e,	// (0x00070888) main_mp4_pane_g2

0xb91c,	// (0x00070896) main_mp4_pane_g3_ParamLimits

0xb91c,	// (0x00070896) main_mp4_pane_g3

0xb961,	// (0x000708db) main_mp4_pane_g4_ParamLimits

0xb961,	// (0x000708db) main_mp4_pane_g4

0xb989,	// (0x00070903) main_mp4_pane_g5_ParamLimits

0xb989,	// (0x00070903) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x00074833) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x00074833) main_mp4_pane_g

0xb9d9,	// (0x00070953) main_mp4_pane_t1_ParamLimits

0xb9d9,	// (0x00070953) main_mp4_pane_t1

0xba35,	// (0x000709af) main_mp4_pane_t2_ParamLimits

0xba35,	// (0x000709af) main_mp4_pane_t2

0x3e69,	// (0x00068de3) main_mp4_pane_t3_ParamLimits

0x3e69,	// (0x00068de3) main_mp4_pane_t3

0xba87,	// (0x00070a01) main_mp4_pane_t4_ParamLimits

0xba87,	// (0x00070a01) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x00074840) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x00074840) main_mp4_pane_t

0xbacb,	// (0x00070a45) mp4_progress_pane_ParamLimits

0xbacb,	// (0x00070a45) mp4_progress_pane

0xbb15,	// (0x00070a8f) mp4_rocker_pane_ParamLimits

0xbb15,	// (0x00070a8f) mp4_rocker_pane

0x3e91,	// (0x00068e0b) mp4_progress_pane_t1

0x3eaa,	// (0x00068e24) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x00074849) mp4_progress_pane_t

0x3ec3,	// (0x00068e3d) mup_progress_pane_cp04

0x25bb,	// (0x00067535) mp4_rocker_pane_g1

0xbb35,	// (0x00070aaf) aid_cell_size_keypad2_ParamLimits

0xbb35,	// (0x00070aaf) aid_cell_size_keypad2

0xbb45,	// (0x00070abf) dialer2_ne_pane_ParamLimits

0xbb45,	// (0x00070abf) dialer2_ne_pane

0xbb53,	// (0x00070acd) grid_dialer2_keypad_pane_ParamLimits

0xbb53,	// (0x00070acd) grid_dialer2_keypad_pane

0x3f6c,	// (0x00068ee6) bg_popup_call_pane_cp07_ParamLimits

0x3f6c,	// (0x00068ee6) bg_popup_call_pane_cp07

0xbb63,	// (0x00070add) dialer2_ne_pane_t1_ParamLimits

0xbb63,	// (0x00070add) dialer2_ne_pane_t1

0xbb88,	// (0x00070b02) cell_dialer2_keypad_pane_ParamLimits

0xbb88,	// (0x00070b02) cell_dialer2_keypad_pane

0x3eeb,	// (0x00068e65) bg_button_pane_pane_cp04_ParamLimits

0x3eeb,	// (0x00068e65) bg_button_pane_pane_cp04

0xbb9f,	// (0x00070b19) cell_dialer2_keypad_pane_g1_ParamLimits

0xbb9f,	// (0x00070b19) cell_dialer2_keypad_pane_g1

0x7e97,	// (0x0006ce11) aid_placing_vt_set_content_ParamLimits

0x7e97,	// (0x0006ce11) aid_placing_vt_set_content

0x7ec3,	// (0x0006ce3d) aid_placing_vt_set_title_ParamLimits

0x7ec3,	// (0x0006ce3d) aid_placing_vt_set_title

0x6f81,	// (0x0006befb) main_image3_pane

0xbc39,	// (0x00070bb3) area_side_right_pane_cp01_ParamLimits

0xbc39,	// (0x00070bb3) area_side_right_pane_cp01

0xe91c,	// (0x00073896) main_image3_pane_g1_ParamLimits

0xe91c,	// (0x00073896) main_image3_pane_g1

0xbc66,	// (0x00070be0) main_image3_pane_g2_ParamLimits

0xbc66,	// (0x00070be0) main_image3_pane_g2

0xbc7f,	// (0x00070bf9) main_image3_pane_g3_ParamLimits

0xbc7f,	// (0x00070bf9) main_image3_pane_g3

0xbc98,	// (0x00070c12) main_image3_pane_g4_ParamLimits

0xbc98,	// (0x00070c12) main_image3_pane_g4

0x0003,

0xf8de,	// (0x00074858) main_image3_pane_g_ParamLimits

0xf8de,	// (0x00074858) main_image3_pane_g

0xbcb1,	// (0x00070c2b) main_image3_pane_t1_ParamLimits

0xbcb1,	// (0x00070c2b) main_image3_pane_t1

0xbcd6,	// (0x00070c50) main_image3_pane_t2_ParamLimits

0xbcd6,	// (0x00070c50) main_image3_pane_t2

0xbcf5,	// (0x00070c6f) main_image3_pane_t3_ParamLimits

0xbcf5,	// (0x00070c6f) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x00074861) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x00074861) main_image3_pane_t

0x7212,	// (0x0006c18c) grid_sctrl_middle_pane_cp01_ParamLimits

0x7212,	// (0x0006c18c) grid_sctrl_middle_pane_cp01

0xbd56,	// (0x00070cd0) cell_sctrl_middle_pane_cp01_ParamLimits

0xbd56,	// (0x00070cd0) cell_sctrl_middle_pane_cp01

0xbd67,	// (0x00070ce1) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xbd67,	// (0x00070ce1) cell_sctrl_middle_pane_cp01_g1

0x6f81,	// (0x0006befb) main_call4_pane

0xbd74,	// (0x00070cee) aid_size_button_call4_ParamLimits

0xbd74,	// (0x00070cee) aid_size_button_call4

0xbda4,	// (0x00070d1e) call4_windows_pane_ParamLimits

0xbda4,	// (0x00070d1e) call4_windows_pane

0xbdbe,	// (0x00070d38) grid_call4_button_pane_ParamLimits

0xbdbe,	// (0x00070d38) grid_call4_button_pane

0x3ef7,	// (0x00068e71) call4_windows_conf_pane

0x3f0c,	// (0x00068e86) popup_call4_audio_first_window_ParamLimits

0x3f0c,	// (0x00068e86) popup_call4_audio_first_window

0x3f58,	// (0x00068ed2) popup_call4_audio_second_window_ParamLimits

0x3f58,	// (0x00068ed2) popup_call4_audio_second_window

0x3f7a,	// (0x00068ef4) popup_call4_audio_wait_window_ParamLimits

0x3f7a,	// (0x00068ef4) popup_call4_audio_wait_window

0xbde2,	// (0x00070d5c) cell_call4_button_pane_ParamLimits

0xbde2,	// (0x00070d5c) cell_call4_button_pane

0xbe07,	// (0x00070d81) bg_button_pane_cp09_ParamLimits

0xbe07,	// (0x00070d81) bg_button_pane_cp09

0xbe13,	// (0x00070d8d) cell_call4_button_pane_g1_ParamLimits

0xbe13,	// (0x00070d8d) cell_call4_button_pane_g1

0xbe20,	// (0x00070d9a) cell_call4_button_pane_t1_ParamLimits

0xbe20,	// (0x00070d9a) cell_call4_button_pane_t1

0x3fc2,	// (0x00068f3c) popup_call4_audio_conf_window_ParamLimits

0x3fc2,	// (0x00068f3c) popup_call4_audio_conf_window

0xb0c2,	// (0x0007003c) mup3_progress_pane_t1_ParamLimits

0xb0d9,	// (0x00070053) mup3_progress_pane_t2_ParamLimits

0x289d,	// (0x00067817) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x0007473a) mup3_progress_pane_t_ParamLimits

0x28b4,	// (0x0006782e) mup_progress_pane_cp03_ParamLimits

0xb5fa,	// (0x00070574) mup3_control_keys_pane_g4_copy1

0xbaf9,	// (0x00070a73) mp4_rocker2_pane_ParamLimits

0xbaf9,	// (0x00070a73) mp4_rocker2_pane

0x3fde,	// (0x00068f58) mp4_rocker2_pane_g1

0x3fd6,	// (0x00068f50) mp4_rocker2_pane_g2

0xbe32,	// (0x00070dac) mp4_rocker2_pane_g3

0xbe3a,	// (0x00070db4) mp4_rocker2_pane_g4

0xbe42,	// (0x00070dbc) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x0007486a) mp4_rocker2_pane_g

0x6f81,	// (0x0006befb) main_camera4_pane

0x6f81,	// (0x0006befb) main_video4_pane

0xb860,	// (0x000707da) main_video_tele_dialer_pane_t1_ParamLimits

0xb860,	// (0x000707da) main_video_tele_dialer_pane_t1

0xb872,	// (0x000707ec) main_video_tele_dialer_pane_t2_ParamLimits

0xb872,	// (0x000707ec) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x00074824) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x00074824) main_video_tele_dialer_pane_t

0xbe62,	// (0x00070ddc) cam4_autofocus_pane_ParamLimits

0xbe62,	// (0x00070ddc) cam4_autofocus_pane

0xbe7c,	// (0x00070df6) cam4_image_uncrop_pane_ParamLimits

0xbe7c,	// (0x00070df6) cam4_image_uncrop_pane

0xbe93,	// (0x00070e0d) cam4_indicators_pane_ParamLimits

0xbe93,	// (0x00070e0d) cam4_indicators_pane

0xbeaf,	// (0x00070e29) main_camera4_pane_g1_ParamLimits

0xbeaf,	// (0x00070e29) main_camera4_pane_g1

0xbebb,	// (0x00070e35) main_camera4_pane_g2_ParamLimits

0xbebb,	// (0x00070e35) main_camera4_pane_g2

0xbebb,	// (0x00070e35) main_camera4_pane_g3_ParamLimits

0xbebb,	// (0x00070e35) main_camera4_pane_g3

0xbec7,	// (0x00070e41) main_camera4_pane_g4_ParamLimits

0xbec7,	// (0x00070e41) main_camera4_pane_g4

0xbed3,	// (0x00070e4d) main_camera4_pane_g5_ParamLimits

0xbed3,	// (0x00070e4d) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x00074875) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x00074875) main_camera4_pane_g

0xbeed,	// (0x00070e67) main_camera4_pane_t1_ParamLimits

0xbeed,	// (0x00070e67) main_camera4_pane_t1

0x2822,	// (0x0006779c) bg_tb_trans_pane_cp06

0xbf3d,	// (0x00070eb7) cam4_indicators_pane_g1

0xbf4e,	// (0x00070ec8) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x00074890) cam4_indicators_pane_g

0xbf6c,	// (0x00070ee6) cam4_indicators_pane_t1

0xbf96,	// (0x00070f10) main_video4_pane_g1_ParamLimits

0xbf96,	// (0x00070f10) main_video4_pane_g1

0xbfa2,	// (0x00070f1c) main_video4_pane_g2_ParamLimits

0xbfa2,	// (0x00070f1c) main_video4_pane_g2

0xbfae,	// (0x00070f28) main_video4_pane_g3_ParamLimits

0xbfae,	// (0x00070f28) main_video4_pane_g3

0xbfba,	// (0x00070f34) main_video4_pane_g4_ParamLimits

0xbfba,	// (0x00070f34) main_video4_pane_g4

0x0004,

0xf91d,	// (0x00074897) main_video4_pane_g_ParamLimits

0xf91d,	// (0x00074897) main_video4_pane_g

0xbfda,	// (0x00070f54) vid4_indicators_pane_ParamLimits

0xbfda,	// (0x00070f54) vid4_indicators_pane

0xbff8,	// (0x00070f72) video4_image_uncrop_cif_pane_ParamLimits

0xbff8,	// (0x00070f72) video4_image_uncrop_cif_pane

0xc007,	// (0x00070f81) video4_image_uncrop_nhd_pane_ParamLimits

0xc007,	// (0x00070f81) video4_image_uncrop_nhd_pane

0xbe7c,	// (0x00070df6) video4_image_uncrop_vga_pane_ParamLimits

0xbe7c,	// (0x00070df6) video4_image_uncrop_vga_pane

0xe963,	// (0x000738dd) bg_tb_trans_pane_cp07

0xbf3d,	// (0x00070eb7) vid4_indicators_pane_g1

0xc01c,	// (0x00070f96) vid4_indicators_pane_g2

0xc02d,	// (0x00070fa7) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x000748a2) vid4_indicators_pane_g

0xc05a,	// (0x00070fd4) vid4_indicators_pane_t1

0xc073,	// (0x00070fed) cam4_autofocus_pane_g1

0xc07b,	// (0x00070ff5) cam4_autofocus_pane_g2

0xc083,	// (0x00070ffd) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x000748ad) cam4_autofocus_pane_g

0xc08b,	// (0x00071005) cam4_autofocus_pane_g3_copy1

0xb890,	// (0x0007080a) video_down_pane_cp_t1

0xb89e,	// (0x00070818) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x00074829) video_down_pane_cp_t

0x7212,	// (0x0006c18c) popup_vitu2_window_ParamLimits

0x7212,	// (0x0006c18c) popup_vitu2_window

0xc093,	// (0x0007100d) aid_size_cell2_itu2_ParamLimits

0xc093,	// (0x0007100d) aid_size_cell2_itu2

0xc0b5,	// (0x0007102f) aid_size_cell_itu2_ParamLimits

0xc0b5,	// (0x0007102f) aid_size_cell_itu2

0x3f6c,	// (0x00068ee6) bg_popup_window_pane_cp09_ParamLimits

0x3f6c,	// (0x00068ee6) bg_popup_window_pane_cp09

0xc0f9,	// (0x00071073) field_vitu2_entry_pane_ParamLimits

0xc0f9,	// (0x00071073) field_vitu2_entry_pane

0xc119,	// (0x00071093) grid_vitu2_function_pane_ParamLimits

0xc119,	// (0x00071093) grid_vitu2_function_pane

0xc15d,	// (0x000710d7) grid_vitu2_itu_pane_ParamLimits

0xc15d,	// (0x000710d7) grid_vitu2_itu_pane

0xc1d3,	// (0x0007114d) cell_vitu2_itu_pane_ParamLimits

0xc1d3,	// (0x0007114d) cell_vitu2_itu_pane

0xc1e8,	// (0x00071162) cell_vitu2_function_pane_ParamLimits

0xc1e8,	// (0x00071162) cell_vitu2_function_pane

0x3fe6,	// (0x00068f60) bg_popup_call_pane_cp08_ParamLimits

0x3fe6,	// (0x00068f60) bg_popup_call_pane_cp08

0x3fff,	// (0x00068f79) field_vitu2_entry_pane_g1

0x400b,	// (0x00068f85) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x000748b4) field_vitu2_entry_pane_g

0x61a9,	// (0x0006b123) field_vitu2_entry_pane_t1_ParamLimits

0x61a9,	// (0x0006b123) field_vitu2_entry_pane_t1

0x61d9,	// (0x0006b153) field_vitu2_entry_pane_t2_ParamLimits

0x61d9,	// (0x0006b153) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x000748bb) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x000748bb) field_vitu2_entry_pane_t

0xc229,	// (0x000711a3) bg_button_pane_cp010_ParamLimits

0xc229,	// (0x000711a3) bg_button_pane_cp010

0xc237,	// (0x000711b1) cell_vitu2_itu_pane_g1

0xc255,	// (0x000711cf) cell_vitu2_itu_pane_t1_ParamLimits

0xc255,	// (0x000711cf) cell_vitu2_itu_pane_t1

0x61f6,	// (0x0006b170) cell_vitu2_itu_pane_t2_ParamLimits

0x61f6,	// (0x0006b170) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x000748c5) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x000748c5) cell_vitu2_itu_pane_t

0xe963,	// (0x000738dd) bg_button_pane_cp011

0xc2a7,	// (0x00071221) cell_vitu2_function_pane_g1

0x6f81,	// (0x0006befb) main_myfav_hc_pane

0xbd37,	// (0x00070cb1) popup_image3_note_pane_ParamLimits

0xbd37,	// (0x00070cb1) popup_image3_note_pane

0xbd45,	// (0x00070cbf) popup_image3_tool_bar_pane_ParamLimits

0xbd45,	// (0x00070cbf) popup_image3_tool_bar_pane

0x6264,	// (0x0006b1de) cell_vitu2_itu_pane_t3_ParamLimits

0x6264,	// (0x0006b1de) cell_vitu2_itu_pane_t3

0x6f81,	// (0x0006befb) bg_popup_trans_pane

0x402d,	// (0x00068fa7) grid_image3_tool_bar_pane

0x4037,	// (0x00068fb1) bg_popup_trans_pane_g1

0x0537,	// (0x000654b1) bg_popup_trans_pane_g2

0x403f,	// (0x00068fb9) bg_popup_trans_pane_g3

0x4047,	// (0x00068fc1) bg_popup_trans_pane_g4

0x404f,	// (0x00068fc9) bg_popup_trans_pane_g5

0x4057,	// (0x00068fd1) bg_popup_trans_pane_g6

0x405f,	// (0x00068fd9) bg_popup_trans_pane_g7

0x4067,	// (0x00068fe1) bg_popup_trans_pane_g8

0x0517,	// (0x00065491) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x000748cc) bg_popup_trans_pane_g

0x406f,	// (0x00068fe9) cell_image3_tool_bar_pane_ParamLimits

0x406f,	// (0x00068fe9) cell_image3_tool_bar_pane

0x25bb,	// (0x00067535) cell_image3_tool_bar_pane_g1

0x6f81,	// (0x0006befb) bg_popup_trans_pane_cp1

0x4083,	// (0x00068ffd) popup_image3_note_pane_t1

0x4091,	// (0x0006900b) popup_image3_note_pane_t2

0x409f,	// (0x00069019) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x000748df) popup_image3_note_pane_t

0x40ad,	// (0x00069027) popup_image3_note_pane_t3_copy1

0xc2bb,	// (0x00071235) bg_myfav_hc_instruction_pane_ParamLimits

0xc2bb,	// (0x00071235) bg_myfav_hc_instruction_pane

0xc2d3,	// (0x0007124d) cell_myfav_contact_pane_ParamLimits

0xc2d3,	// (0x0007124d) cell_myfav_contact_pane

0xc2ed,	// (0x00071267) cell_myfav_contact_pane_cp1_ParamLimits

0xc2ed,	// (0x00071267) cell_myfav_contact_pane_cp1

0xc305,	// (0x0007127f) cell_myfav_contact_pane_cp2_ParamLimits

0xc305,	// (0x0007127f) cell_myfav_contact_pane_cp2

0xc31d,	// (0x00071297) cell_myfav_contact_pane_cp3_ParamLimits

0xc31d,	// (0x00071297) cell_myfav_contact_pane_cp3

0xc334,	// (0x000712ae) cell_myfav_contact_pane_cp4_ParamLimits

0xc334,	// (0x000712ae) cell_myfav_contact_pane_cp4

0xc34a,	// (0x000712c4) cell_myfav_contact_pane_cp5_ParamLimits

0xc34a,	// (0x000712c4) cell_myfav_contact_pane_cp5

0xc35e,	// (0x000712d8) cell_myfav_contact_pane_cp6_ParamLimits

0xc35e,	// (0x000712d8) cell_myfav_contact_pane_cp6

0xc372,	// (0x000712ec) cell_myfav_contact_pane_cp7_ParamLimits

0xc372,	// (0x000712ec) cell_myfav_contact_pane_cp7

0x40bb,	// (0x00069035) listscroll_gen_pane_cp05

0xc38a,	// (0x00071304) main_myfav_hc_pane_g1_ParamLimits

0xc38a,	// (0x00071304) main_myfav_hc_pane_g1

0xc3a2,	// (0x0007131c) main_myfav_hc_pane_g2_ParamLimits

0xc3a2,	// (0x0007131c) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x000748e6) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x000748e6) main_myfav_hc_pane_g

0xc3d2,	// (0x0007134c) main_myfav_hc_pane_t1_ParamLimits

0xc3d2,	// (0x0007134c) main_myfav_hc_pane_t1

0x40c4,	// (0x0006903e) main_myfav_hc_pane_t2_ParamLimits

0x40c4,	// (0x0006903e) main_myfav_hc_pane_t2

0x40d6,	// (0x00069050) main_myfav_hc_pane_t3_ParamLimits

0x40d6,	// (0x00069050) main_myfav_hc_pane_t3

0xc3e9,	// (0x00071363) main_myfav_hc_pane_t4_ParamLimits

0xc3e9,	// (0x00071363) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x000748ed) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x000748ed) main_myfav_hc_pane_t

0x25bb,	// (0x00067535) bg_myfav_hc_instruction_pane_g1

0x40e8,	// (0x00069062) cell_myfav_contact_pane_g1_ParamLimits

0x40e8,	// (0x00069062) cell_myfav_contact_pane_g1

0x40e8,	// (0x00069062) cell_myfav_contact_pane_g2_ParamLimits

0x40e8,	// (0x00069062) cell_myfav_contact_pane_g2

0x40f4,	// (0x0006906e) cell_myfav_contact_pane_g3_ParamLimits

0x40f4,	// (0x0006906e) cell_myfav_contact_pane_g3

0x2887,	// (0x00067801) cell_myfav_contact_pane_g4_ParamLimits

0x2887,	// (0x00067801) cell_myfav_contact_pane_g4

0x4101,	// (0x0006907b) cell_myfav_contact_pane_g5_ParamLimits

0x4101,	// (0x0006907b) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x000748f8) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x000748f8) cell_myfav_contact_pane_g

0xc3ba,	// (0x00071334) main_myfav_hc_pane_g3_ParamLimits

0xc3ba,	// (0x00071334) main_myfav_hc_pane_g3

0x712f,	// (0x0006c0a9) popup_adpt_find_window

0xc413,	// (0x0007138d) afind_page_pane_ParamLimits

0xc413,	// (0x0007138d) afind_page_pane

0xc420,	// (0x0007139a) aid_size_cell_afind_ParamLimits

0xc420,	// (0x0007139a) aid_size_cell_afind

0xc43a,	// (0x000713b4) bg_popup_sub_pane_cp09_ParamLimits

0xc43a,	// (0x000713b4) bg_popup_sub_pane_cp09

0xc447,	// (0x000713c1) find_pane_cp01_ParamLimits

0xc447,	// (0x000713c1) find_pane_cp01

0x410d,	// (0x00069087) grid_afind_control_pane_ParamLimits

0x410d,	// (0x00069087) grid_afind_control_pane

0xc454,	// (0x000713ce) grid_afind_pane_ParamLimits

0xc454,	// (0x000713ce) grid_afind_pane

0xc470,	// (0x000713ea) cell_afind_pane_ParamLimits

0xc470,	// (0x000713ea) cell_afind_pane

0x25bb,	// (0x00067535) afind_page_pane_g1

0xc4b8,	// (0x00071432) afind_page_pane_g2

0xc4c1,	// (0x0007143b) afind_page_pane_g3

0x0002,

0xf989,	// (0x00074903) afind_page_pane_g

0xc4ca,	// (0x00071444) afind_page_pane_t1

0x4121,	// (0x0006909b) cell_afind_grid_control_pane_ParamLimits

0x4121,	// (0x0006909b) cell_afind_grid_control_pane

0x3eeb,	// (0x00068e65) bg_button_pane_cp69_ParamLimits

0x3eeb,	// (0x00068e65) bg_button_pane_cp69

0xc4e1,	// (0x0007145b) cell_afind_pane_g1_ParamLimits

0xc4e1,	// (0x0007145b) cell_afind_pane_g1

0xc4ee,	// (0x00071468) cell_afind_pane_t1_ParamLimits

0xc4ee,	// (0x00071468) cell_afind_pane_t1

0x0332,	// (0x000652ac) bg_button_pane_cp72

0x4130,	// (0x000690aa) cell_afind_grid_control_pane_g1

0x9b48,	// (0x0006eac2) aid_image_placing_area_ParamLimits

0x9b48,	// (0x0006eac2) aid_image_placing_area

0x2b6f,	// (0x00067ae9) field_vitu_entry_pane_g1_ParamLimits

0x2b6f,	// (0x00067ae9) field_vitu_entry_pane_g1

0x2b7b,	// (0x00067af5) field_vitu_entry_pane_g2_ParamLimits

0x2b7b,	// (0x00067af5) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x000747b4) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x000747b4) field_vitu_entry_pane_g

0xb685,	// (0x000705ff) cell_vitu_itu_pane_g1_ParamLimits

0xb6c7,	// (0x00070641) cell_vitu_itu_pane_t3_ParamLimits

0xb6c7,	// (0x00070641) cell_vitu_itu_pane_t3

0x3e91,	// (0x00068e0b) mp4_progress_pane_t1_ParamLimits

0x3eaa,	// (0x00068e24) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x00074849) mp4_progress_pane_t_ParamLimits

0x3ec3,	// (0x00068e3d) mup_progress_pane_cp04_ParamLimits

0xc3fd,	// (0x00071377) main_myfav_hc_pane_t5_ParamLimits

0xc3fd,	// (0x00071377) main_myfav_hc_pane_t5

0x5e63,	// (0x0006addd) aid_zoom_text_primary

0x712f,	// (0x0006c0a9) popup_adpt_find_window_ParamLimits

0xe963,	// (0x000738dd) main_cam_set_pane

0xbea1,	// (0x00070e1b) cam4_zoom_pane_ParamLimits

0xbea1,	// (0x00070e1b) cam4_zoom_pane

0xc500,	// (0x0007147a) main_cam_set_pane_g1_ParamLimits

0xc500,	// (0x0007147a) main_cam_set_pane_g1

0xc50e,	// (0x00071488) main_cam_set_pane_g2_ParamLimits

0xc50e,	// (0x00071488) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x0007490a) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x0007490a) main_cam_set_pane_g

0xc51a,	// (0x00071494) main_cam_set_pane_t1_ParamLimits

0xc51a,	// (0x00071494) main_cam_set_pane_t1

0xc536,	// (0x000714b0) main_cset_listscroll_pane_ParamLimits

0xc536,	// (0x000714b0) main_cset_listscroll_pane

0xc561,	// (0x000714db) main_cset_slider_pane_ParamLimits

0xc561,	// (0x000714db) main_cset_slider_pane

0x4141,	// (0x000690bb) main_cset_list_pane_ParamLimits

0x4141,	// (0x000690bb) main_cset_list_pane

0x4151,	// (0x000690cb) scroll_pane_cp028

0xc580,	// (0x000714fa) aid_area_touch_slider

0xc59c,	// (0x00071516) cset_slider_pane

0xc5c6,	// (0x00071540) main_cset_slider_pane_g1

0xc5db,	// (0x00071555) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x0007490f) main_cset_slider_pane_g

0x418a,	// (0x00069104) main_cset_slider_pane_t1

0xc6a3,	// (0x0007161d) main_cset_slider_pane_t2

0xc6bd,	// (0x00071637) main_cset_slider_pane_t3

0xc6d7,	// (0x00071651) main_cset_slider_pane_t4

0xc6f5,	// (0x0007166f) main_cset_slider_pane_t5

0xc717,	// (0x00071691) main_cset_slider_pane_t6

0xc72e,	// (0x000716a8) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x00074934) main_cset_slider_pane_t

0xc83c,	// (0x000717b6) cset_list_set_pane_ParamLimits

0xc83c,	// (0x000717b6) cset_list_set_pane

0xc859,	// (0x000717d3) aid_position_infowindow_above

0xc861,	// (0x000717db) aid_position_infowindow_below

0xc869,	// (0x000717e3) cset_list_set_pane_g1_ParamLimits

0xc869,	// (0x000717e3) cset_list_set_pane_g1

0x62b1,	// (0x0006b22b) cset_list_set_pane_g3_ParamLimits

0x62b1,	// (0x0006b22b) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x00074953) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x00074953) cset_list_set_pane_g

0x62c0,	// (0x0006b23a) cset_list_set_pane_t1_ParamLimits

0x62c0,	// (0x0006b23a) cset_list_set_pane_t1

0xe963,	// (0x000738dd) list_highlight_pane_cp021_ParamLimits

0xe963,	// (0x000738dd) list_highlight_pane_cp021

0x0da0,	// (0x00065d1a) cset_slider_pane_g1

0x0db2,	// (0x00065d2c) cset_slider_pane_g2

0x0da9,	// (0x00065d23) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x00074958) cset_slider_pane_g

0xc875,	// (0x000717ef) aid_area_touch_cam4_zoom

0xc87d,	// (0x000717f7) cam4_zoom_cont_pane

0xc885,	// (0x000717ff) cam4_zoom_pane_g1

0xc88d,	// (0x00071807) cam4_zoom_pane_g2

0xc895,	// (0x0007180f) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x0007495f) cam4_zoom_pane_g

0x499e,	// (0x00069918) cam4_zoom_cont_pane_g1

0x49a7,	// (0x00069921) cam4_zoom_cont_pane_g2

0x49b0,	// (0x0006992a) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x00074966) cam4_zoom_cont_pane_g

0xbd8e,	// (0x00070d08) call4_image_pane_ParamLimits

0xbd8e,	// (0x00070d08) call4_image_pane

0x3ef7,	// (0x00068e71) call4_windows_conf_pane_ParamLimits

0x3f36,	// (0x00068eb0) popup_call4_audio_in_window_ParamLimits

0x3f36,	// (0x00068eb0) popup_call4_audio_in_window

0x6f81,	// (0x0006befb) bg_popup_call2_act_pane_cp02

0x3fba,	// (0x00068f34) call4_list_conf_pane

0x25bb,	// (0x00067535) call4_image_pane_g1

0x25bb,	// (0x00067535) call4_image_pane_g2

0x0001,

0xf700,	// (0x0007467a) call4_image_pane_g

0x422a,	// (0x000691a4) list_single_graphic_popup_conf4_pane_ParamLimits

0x422a,	// (0x000691a4) list_single_graphic_popup_conf4_pane

0x6f81,	// (0x0006befb) list_highlight_pane_cp022

0x423d,	// (0x000691b7) list_single_graphic_popup_conf4_pane_g1

0x0a71,	// (0x000659eb) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x0007496d) list_single_graphic_popup_conf4_pane_g

0x4245,	// (0x000691bf) list_single_graphic_popup_conf4_pane_t1

0x8027,	// (0x0006cfa1) popup_vtel_slider_window_ParamLimits

0x8027,	// (0x0006cfa1) popup_vtel_slider_window

0x3ed9,	// (0x00068e53) dialer2_ne_pane_t2_ParamLimits

0x3ed9,	// (0x00068e53) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x0007484e) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x0007484e) dialer2_ne_pane_t

0xe963,	// (0x000738dd) bg_popup_sub_pane_cp010_ParamLimits

0xe963,	// (0x000738dd) bg_popup_sub_pane_cp010

0xc89d,	// (0x00071817) popup_vtel_slider_window_g1_ParamLimits

0xc89d,	// (0x00071817) popup_vtel_slider_window_g1

0xc8a9,	// (0x00071823) popup_vtel_slider_window_g2_ParamLimits

0xc8a9,	// (0x00071823) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x00074972) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x00074972) popup_vtel_slider_window_g

0xc8f1,	// (0x0007186b) vtel_slider_pane_ParamLimits

0xc8f1,	// (0x0007186b) vtel_slider_pane

0xc900,	// (0x0007187a) vtel_slider_pane_g1_ParamLimits

0xc900,	// (0x0007187a) vtel_slider_pane_g1

0xc90d,	// (0x00071887) vtel_slider_pane_g2_ParamLimits

0xc90d,	// (0x00071887) vtel_slider_pane_g2

0xc91a,	// (0x00071894) vtel_slider_pane_g3_ParamLimits

0xc91a,	// (0x00071894) vtel_slider_pane_g3

0xc900,	// (0x0007187a) vtel_slider_pane_g4_ParamLimits

0xc900,	// (0x0007187a) vtel_slider_pane_g4

0xc927,	// (0x000718a1) vtel_slider_pane_g5_ParamLimits

0xc927,	// (0x000718a1) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x0007497b) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x0007497b) vtel_slider_pane_g

0x6f81,	// (0x0006befb) main_gallery2_pane

0xc0db,	// (0x00071055) aid_size_row_itut2_dropdow_list_ParamLimits

0xc0db,	// (0x00071055) aid_size_row_itut2_dropdow_list

0xc13b,	// (0x000710b5) grid_vitu2_function_top_pane_ParamLimits

0xc13b,	// (0x000710b5) grid_vitu2_function_top_pane

0xc191,	// (0x0007110b) popup_vitu2_dropdown_list_window_ParamLimits

0xc191,	// (0x0007110b) popup_vitu2_dropdown_list_window

0xc1b1,	// (0x0007112b) popup_vitu2_match_list_window

0xc934,	// (0x000718ae) cell_vitu2_function_top_pane_ParamLimits

0xc934,	// (0x000718ae) cell_vitu2_function_top_pane

0xc954,	// (0x000718ce) cell_vitu2_function_top_pane_cp01_ParamLimits

0xc954,	// (0x000718ce) cell_vitu2_function_top_pane_cp01

0xc972,	// (0x000718ec) cell_vitu2_function_top_wide_pane_ParamLimits

0xc972,	// (0x000718ec) cell_vitu2_function_top_wide_pane

0xe963,	// (0x000738dd) bg_button_pane_cp012

0xc990,	// (0x0007190a) cell_vitu2_function_top_pane_g1

0xc99f,	// (0x00071919) bg_button_pane_cp013_ParamLimits

0xc99f,	// (0x00071919) bg_button_pane_cp013

0xc9bb,	// (0x00071935) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc9bb,	// (0x00071935) cell_vitu2_function_top_wide_pane_g1

0x7212,	// (0x0006c18c) bg_popup_sub_pane_cp20

0xc9d3,	// (0x0007194d) list_vitu2_match_list_pane

0x4037,	// (0x00068fb1) bg_popup_sub_pane_cp20_g1

0x403f,	// (0x00068fb9) bg_popup_sub_pane_cp20_g2

0x0537,	// (0x000654b1) bg_popup_sub_pane_cp20_g3

0x4047,	// (0x00068fc1) bg_popup_sub_pane_cp20_g4

0x0517,	// (0x00065491) bg_popup_sub_pane_cp20_g5

0x425b,	// (0x000691d5) bg_popup_sub_pane_cp20_g6

0x4057,	// (0x00068fd1) bg_popup_sub_pane_cp20_g7

0x405f,	// (0x00068fd9) bg_popup_sub_pane_cp20_g8

0x4067,	// (0x00068fe1) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x00074986) bg_popup_sub_pane_cp20_g

0xc9eb,	// (0x00071965) list_vitu2_match_list_item_pane_ParamLimits

0xc9eb,	// (0x00071965) list_vitu2_match_list_item_pane

0xc9fd,	// (0x00071977) list_vitu2_match_list_item_pane_t1

0x6f81,	// (0x0006befb) bg_popup_sub_pane_cp21

0x0907,	// (0x00065881) grid_vitu2_dropdown_list_pane

0xca0b,	// (0x00071985) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xca0b,	// (0x00071985) cell_vitu2_dropdown_list_char_pane

0xca2c,	// (0x000719a6) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xca2c,	// (0x000719a6) cell_vitu2_dropdown_list_ctrl_pane

0x4275,	// (0x000691ef) cell_vitu2_dropdown_list_char_pane_g1

0x426c,	// (0x000691e6) cell_vitu2_dropdown_list_char_pane_g2

0x4263,	// (0x000691dd) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x000749a3) cell_vitu2_dropdown_list_char_pane_g

0xca58,	// (0x000719d2) cell_vitu2_dropdown_list_char_pane_t1

0xca66,	// (0x000719e0) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xca66,	// (0x000719e0) cell_vitu2_dropdown_list_ctrl_pane_g1

0xca76,	// (0x000719f0) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xca76,	// (0x000719f0) cell_vitu2_dropdown_list_ctrl_pane_g2

0xca87,	// (0x00071a01) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xca87,	// (0x00071a01) cell_vitu2_dropdown_list_ctrl_pane_g3

0xca97,	// (0x00071a11) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xca97,	// (0x00071a11) cell_vitu2_dropdown_list_ctrl_pane_g4

0x2822,	// (0x0006779c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x2822,	// (0x0006779c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x000749aa) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x000749aa) cell_vitu2_dropdown_list_ctrl_pane_g

0xcab3,	// (0x00071a2d) aid_size_cell_gallery2_ParamLimits

0xcab3,	// (0x00071a2d) aid_size_cell_gallery2

0xcac1,	// (0x00071a3b) grid_gallery2_pane_ParamLimits

0xcac1,	// (0x00071a3b) grid_gallery2_pane

0xcad0,	// (0x00071a4a) scroll_pane_cp029_ParamLimits

0xcad0,	// (0x00071a4a) scroll_pane_cp029

0xcadc,	// (0x00071a56) cell_gallery2_pane_ParamLimits

0xcadc,	// (0x00071a56) cell_gallery2_pane

0x427e,	// (0x000691f8) cell_gallery2_pane_g2

0xcb0d,	// (0x00071a87) cell_gallery2_pane_g3

0x4288,	// (0x00069202) cell_gallery2_pane_g4

0x4290,	// (0x0006920a) cell_gallery2_pane_g5

0x0c4a,	// (0x00065bc4) grid_highlight_pane_cp10

0xc1b1,	// (0x0007112b) popup_vitu2_match_list_window_ParamLimits

0xc1c3,	// (0x0007113d) popup_vitu2_query_window_ParamLimits

0xc1c3,	// (0x0007113d) popup_vitu2_query_window

0x6f81,	// (0x0006befb) bg_vitu2_candi_button_pane

0x4275,	// (0x000691ef) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x426c,	// (0x000691e6) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x4263,	// (0x000691dd) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x632a,	// (0x0006b2a4) bg_button_pane_cp015

0xcb15,	// (0x00071a8f) bg_button_pane_cp016

0xcb28,	// (0x00071aa2) bg_button_pane_cp017

0x20b3,	// (0x0006702d) bg_popup_sub_pane_cp22

0x4298,	// (0x00069212) popup_vitu2_query_window_g1

0xcb4c,	// (0x00071ac6) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x000749b5) popup_vitu2_query_window_g

0x6369,	// (0x0006b2e3) popup_vitu2_query_window_t1_ParamLimits

0x6369,	// (0x0006b2e3) popup_vitu2_query_window_t1

0x639c,	// (0x0006b316) popup_vitu2_query_window_t2_ParamLimits

0x639c,	// (0x0006b316) popup_vitu2_query_window_t2

0x63ae,	// (0x0006b328) popup_vitu2_query_window_t3_ParamLimits

0x63ae,	// (0x0006b328) popup_vitu2_query_window_t3

0xcb5d,	// (0x00071ad7) popup_vitu2_query_window_t4_ParamLimits

0xcb5d,	// (0x00071ad7) popup_vitu2_query_window_t4

0xcb7e,	// (0x00071af8) popup_vitu2_query_window_t5_ParamLimits

0xcb7e,	// (0x00071af8) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x000749bc) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x000749bc) popup_vitu2_query_window_t

0x4139,	// (0x000690b3) main_cset_text_pane

0xc580,	// (0x000714fa) aid_area_touch_slider_ParamLimits

0xc59c,	// (0x00071516) cset_slider_pane_ParamLimits

0xc5c6,	// (0x00071540) main_cset_slider_pane_g1_ParamLimits

0xc5db,	// (0x00071555) main_cset_slider_pane_g2_ParamLimits

0x415a,	// (0x000690d4) main_cset_slider_pane_g3_ParamLimits

0x415a,	// (0x000690d4) main_cset_slider_pane_g3

0xc5f0,	// (0x0007156a) main_cset_slider_pane_g4_ParamLimits

0xc5f0,	// (0x0007156a) main_cset_slider_pane_g4

0xc5ff,	// (0x00071579) main_cset_slider_pane_g5_ParamLimits

0xc5ff,	// (0x00071579) main_cset_slider_pane_g5

0xc60d,	// (0x00071587) main_cset_slider_pane_g6_ParamLimits

0xc60d,	// (0x00071587) main_cset_slider_pane_g6

0xf995,	// (0x0007490f) main_cset_slider_pane_g_ParamLimits

0x418a,	// (0x00069104) main_cset_slider_pane_t1_ParamLimits

0xc6a3,	// (0x0007161d) main_cset_slider_pane_t2_ParamLimits

0xc6bd,	// (0x00071637) main_cset_slider_pane_t3_ParamLimits

0xc6d7,	// (0x00071651) main_cset_slider_pane_t4_ParamLimits

0xc6f5,	// (0x0007166f) main_cset_slider_pane_t5_ParamLimits

0xc717,	// (0x00071691) main_cset_slider_pane_t6_ParamLimits

0xc72e,	// (0x000716a8) main_cset_slider_pane_t7_ParamLimits

0xc75c,	// (0x000716d6) main_cset_slider_pane_t8_ParamLimits

0xc75c,	// (0x000716d6) main_cset_slider_pane_t8

0xc784,	// (0x000716fe) main_cset_slider_pane_t9_ParamLimits

0xc784,	// (0x000716fe) main_cset_slider_pane_t9

0xc7ac,	// (0x00071726) main_cset_slider_pane_t10_ParamLimits

0xc7ac,	// (0x00071726) main_cset_slider_pane_t10

0xc7d4,	// (0x0007174e) main_cset_slider_pane_t11_ParamLimits

0xc7d4,	// (0x0007174e) main_cset_slider_pane_t11

0xc7fe,	// (0x00071778) main_cset_slider_pane_t12_ParamLimits

0xc7fe,	// (0x00071778) main_cset_slider_pane_t12

0xc81d,	// (0x00071797) main_cset_slider_pane_t13_ParamLimits

0xc81d,	// (0x00071797) main_cset_slider_pane_t13

0xf9ba,	// (0x00074934) main_cset_slider_pane_t_ParamLimits

0x6f81,	// (0x0006befb) bg_popup_sub_pane_cp011

0x42a4,	// (0x0006921e) main_cset_text_pane_g1

0x42ac,	// (0x00069226) main_cset_text_pane_t1

0x42ba,	// (0x00069234) main_cset_text_pane_t2

0x42c8,	// (0x00069242) main_cset_text_pane_t3

0x42d6,	// (0x00069250) main_cset_text_pane_t4

0x42e4,	// (0x0006925e) main_cset_text_pane_t5

0x42f2,	// (0x0006926c) main_cset_text_pane_t6

0x4300,	// (0x0006927a) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x000749cb) main_cset_text_pane_t

0x6f81,	// (0x0006befb) main_cam4_burst_pane

0x6f81,	// (0x0006befb) main_cam5_pane

0x063c,	// (0x000655b6) bg_button_pane_cp019

0xc4d8,	// (0x00071452) bg_button_pane_cp020

0x4166,	// (0x000690e0) main_cset_slider_pane_g7_ParamLimits

0x4166,	// (0x000690e0) main_cset_slider_pane_g7

0x4172,	// (0x000690ec) main_cset_slider_pane_g8_ParamLimits

0x4172,	// (0x000690ec) main_cset_slider_pane_g8

0xc623,	// (0x0007159d) main_cset_slider_pane_g9_ParamLimits

0xc623,	// (0x0007159d) main_cset_slider_pane_g9

0xc62f,	// (0x000715a9) main_cset_slider_pane_g10_ParamLimits

0xc62f,	// (0x000715a9) main_cset_slider_pane_g10

0xc63b,	// (0x000715b5) main_cset_slider_pane_g11_ParamLimits

0xc63b,	// (0x000715b5) main_cset_slider_pane_g11

0xc647,	// (0x000715c1) main_cset_slider_pane_g12_ParamLimits

0xc647,	// (0x000715c1) main_cset_slider_pane_g12

0xc653,	// (0x000715cd) main_cset_slider_pane_g13_ParamLimits

0xc653,	// (0x000715cd) main_cset_slider_pane_g13

0xc661,	// (0x000715db) main_cset_slider_pane_g14_ParamLimits

0xc661,	// (0x000715db) main_cset_slider_pane_g14

0xc66f,	// (0x000715e9) main_cset_slider_pane_g15_ParamLimits

0xc66f,	// (0x000715e9) main_cset_slider_pane_g15

0x41b8,	// (0x00069132) main_cset_slider_pane_t14_ParamLimits

0x41b8,	// (0x00069132) main_cset_slider_pane_t14

0x41f1,	// (0x0006916b) main_cset_slider_pane_t15_ParamLimits

0x41f1,	// (0x0006916b) main_cset_slider_pane_t15

0xcb9f,	// (0x00071b19) aid_cam4_burst_size_cell_ParamLimits

0xcb9f,	// (0x00071b19) aid_cam4_burst_size_cell

0xcbbb,	// (0x00071b35) grid_cam4_burst_pane_ParamLimits

0xcbbb,	// (0x00071b35) grid_cam4_burst_pane

0xcbeb,	// (0x00071b65) linegrid_cam4_burst_pane_ParamLimits

0xcbeb,	// (0x00071b65) linegrid_cam4_burst_pane

0xcc0d,	// (0x00071b87) scroll_pane_cp30_ParamLimits

0xcc0d,	// (0x00071b87) scroll_pane_cp30

0xcc19,	// (0x00071b93) cell_cam4_burst_pane_ParamLimits

0xcc19,	// (0x00071b93) cell_cam4_burst_pane

0x430e,	// (0x00069288) linegrid_cam4_burst_pane_g1_ParamLimits

0x430e,	// (0x00069288) linegrid_cam4_burst_pane_g1

0xcc55,	// (0x00071bcf) linegrid_cam4_burst_pane_g2_ParamLimits

0xcc55,	// (0x00071bcf) linegrid_cam4_burst_pane_g2

0x431b,	// (0x00069295) linegrid_cam4_burst_pane_g3_ParamLimits

0x431b,	// (0x00069295) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x000749da) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x000749da) linegrid_cam4_burst_pane_g

0xcc66,	// (0x00071be0) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xcc66,	// (0x00071be0) linegrid_cam4_burst_pane_g3_copy1

0x4328,	// (0x000692a2) linegrid_cam4_burst_pane_g4_ParamLimits

0x4328,	// (0x000692a2) linegrid_cam4_burst_pane_g4

0xcc80,	// (0x00071bfa) linegrid_cam4_burst_pane_g5_ParamLimits

0xcc80,	// (0x00071bfa) linegrid_cam4_burst_pane_g5

0xcc91,	// (0x00071c0b) linegrid_cam4_burst_pane_g6_ParamLimits

0xcc91,	// (0x00071c0b) linegrid_cam4_burst_pane_g6

0x4335,	// (0x000692af) linegrid_cam4_burst_pane_g7_ParamLimits

0x4335,	// (0x000692af) linegrid_cam4_burst_pane_g7

0xcca2,	// (0x00071c1c) cell_cam4_burst_pane_g1

0x434e,	// (0x000692c8) main_cam5_pane_t1_ParamLimits

0x434e,	// (0x000692c8) main_cam5_pane_t1

0x4360,	// (0x000692da) main_cam5_pane_t2_ParamLimits

0x4360,	// (0x000692da) main_cam5_pane_t2

0x4372,	// (0x000692ec) main_cam5_pane_t3_ParamLimits

0x4372,	// (0x000692ec) main_cam5_pane_t3

0x4384,	// (0x000692fe) main_cam5_pane_t4_ParamLimits

0x4384,	// (0x000692fe) main_cam5_pane_t4

0x439a,	// (0x00069314) main_cam5_pane_t5_ParamLimits

0x439a,	// (0x00069314) main_cam5_pane_t5

0x43ac,	// (0x00069326) main_cam5_pane_t6_ParamLimits

0x43ac,	// (0x00069326) main_cam5_pane_t6

0x43c0,	// (0x0006933a) main_cam5_pane_t7_ParamLimits

0x43c0,	// (0x0006933a) main_cam5_pane_t7

0x43d2,	// (0x0006934c) main_cam5_pane_t8_ParamLimits

0x43d2,	// (0x0006934c) main_cam5_pane_t8

0x43ee,	// (0x00069368) main_cam5_pane_t9_ParamLimits

0x43ee,	// (0x00069368) main_cam5_pane_t9

0x4400,	// (0x0006937a) main_cam5_pane_t10_ParamLimits

0x4400,	// (0x0006937a) main_cam5_pane_t10

0x4412,	// (0x0006938c) main_cam5_pane_t11_ParamLimits

0x4412,	// (0x0006938c) main_cam5_pane_t11

0x4424,	// (0x0006939e) main_cam5_pane_t12_ParamLimits

0x4424,	// (0x0006939e) main_cam5_pane_t12

0x4439,	// (0x000693b3) main_cam5_pane_t13_ParamLimits

0x4439,	// (0x000693b3) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x000749e6) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x000749e6) main_cam5_pane_t

0x71db,	// (0x0006c155) popup_scut_keymap_window_ParamLimits

0x71db,	// (0x0006c155) popup_scut_keymap_window

0xccb5,	// (0x00071c2f) aid_size_cell_brow_shortcut

0x0c4a,	// (0x00065bc4) bg_popup_window_pane_cp010

0xccc1,	// (0x00071c3b) grid_scut_pane

0xcccd,	// (0x00071c47) cell_scut_pane_ParamLimits

0xcccd,	// (0x00071c47) cell_scut_pane

0xcce4,	// (0x00071c5e) cell_scut_pane_g1

0x4456,	// (0x000693d0) cell_scut_pane_t1

0x4465,	// (0x000693df) cell_scut_pane_t2

0xcced,	// (0x00071c67) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x00074a01) cell_scut_pane_t

0xad06,	// (0x0006fc80) main_mup3_pane_g8_ParamLimits

0xad06,	// (0x0006fc80) main_mup3_pane_g8

0xc0e9,	// (0x00071063) area_vitu2_query_pane_ParamLimits

0xc0e9,	// (0x00071063) area_vitu2_query_pane

0x633c,	// (0x0006b2b6) input_focus_pane_cp08

0x4474,	// (0x000693ee) area_vitu2_query_pane_g1

0x642c,	// (0x0006b3a6) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x00074a08) area_vitu2_query_pane_g

0xccfb,	// (0x00071c75) area_vitu2_query_pane_t1_ParamLimits

0xccfb,	// (0x00071c75) area_vitu2_query_pane_t1

0xcd0f,	// (0x00071c89) area_vitu2_query_pane_t2_ParamLimits

0xcd0f,	// (0x00071c89) area_vitu2_query_pane_t2

0x643d,	// (0x0006b3b7) area_vitu2_query_pane_t3_ParamLimits

0x643d,	// (0x0006b3b7) area_vitu2_query_pane_t3

0x6465,	// (0x0006b3df) area_vitu2_query_pane_t4_ParamLimits

0x6465,	// (0x0006b3df) area_vitu2_query_pane_t4

0x648d,	// (0x0006b407) area_vitu2_query_pane_t5_ParamLimits

0x648d,	// (0x0006b407) area_vitu2_query_pane_t5

0x64b5,	// (0x0006b42f) area_vitu2_query_pane_t6_ParamLimits

0x64b5,	// (0x0006b42f) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x00074a0d) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x00074a0d) area_vitu2_query_pane_t

0xcd23,	// (0x00071c9d) bg_button_pane_cp018

0xcd31,	// (0x00071cab) bg_button_pane_cp021

0x6501,	// (0x0006b47b) bg_button_pane_cp022

0x6512,	// (0x0006b48c) input_focus_pane_cp09

0x9249,	// (0x0006e1c3) aid_size_touch_mv_arrow_left

0x9274,	// (0x0006e1ee) aid_size_touch_mv_arrow_right

0xc687,	// (0x00071601) main_cset_slider_pane_g16_ParamLimits

0xc687,	// (0x00071601) main_cset_slider_pane_g16

0xc695,	// (0x0007160f) main_cset_slider_pane_g17_ParamLimits

0xc695,	// (0x0007160f) main_cset_slider_pane_g17

0xcca2,	// (0x00071c1c) cell_cam4_burst_pane_g1_ParamLimits

0x6f81,	// (0x0006befb) compa_mode_pane

0xc8b5,	// (0x0007182f) popup_vtel_slider_window_g3_ParamLimits

0xc8b5,	// (0x0007182f) popup_vtel_slider_window_g3

0xc8c9,	// (0x00071843) popup_vtel_slider_window_g4_ParamLimits

0xc8c9,	// (0x00071843) popup_vtel_slider_window_g4

0xc8dd,	// (0x00071857) popup_vtel_slider_window_t1_ParamLimits

0xc8dd,	// (0x00071857) popup_vtel_slider_window_t1

0x6f81,	// (0x0006befb) main_cl_pane

0x20db,	// (0x00067055) popup_imed_adjust2_window_ParamLimits

0x20b3,	// (0x0006702d) bg_tb_trans_pane_cp05_ParamLimits

0x2aa4,	// (0x00067a1e) popup_imed_adjust2_window_g1_ParamLimits

0x2ab3,	// (0x00067a2d) popup_imed_adjust2_window_g2_ParamLimits

0x2ab3,	// (0x00067a2d) popup_imed_adjust2_window_g2

0x2abf,	// (0x00067a39) popup_imed_adjust2_window_g3_ParamLimits

0x2abf,	// (0x00067a39) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x00074778) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x00074778) popup_imed_adjust2_window_g

0x2acb,	// (0x00067a45) popup_imed_adjust2_window_t1_ParamLimits

0x2ae3,	// (0x00067a5d) slider_imed_adjust_pane_ParamLimits

0x2af7,	// (0x00067a71) slider_imed_adjust_pane_g1_ParamLimits

0x2b07,	// (0x00067a81) slider_imed_adjust_pane_g2_ParamLimits

0x2b17,	// (0x00067a91) slider_imed_adjust_pane_g3_ParamLimits

0x2b28,	// (0x00067aa2) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x0007477f) slider_imed_adjust_pane_g_ParamLimits

0xbe4a,	// (0x00070dc4) aid_touch_area_cam4_ParamLimits

0xbe4a,	// (0x00070dc4) aid_touch_area_cam4

0xbe5a,	// (0x00070dd4) battery_pane_cp01

0xbee1,	// (0x00070e5b) main_camera4_pane_g6_ParamLimits

0xbee1,	// (0x00070e5b) main_camera4_pane_g6

0xbeff,	// (0x00070e79) main_camera4_pane_t2_ParamLimits

0xbeff,	// (0x00070e79) main_camera4_pane_t2

0x0001,

0xf908,	// (0x00074882) main_camera4_pane_t_ParamLimits

0xf908,	// (0x00074882) main_camera4_pane_t

0xbf86,	// (0x00070f00) aid_touch_area_vid4_ParamLimits

0xbf86,	// (0x00070f00) aid_touch_area_vid4

0xbfc6,	// (0x00070f40) main_video4_pane_g5_ParamLimits

0xbfc6,	// (0x00070f40) main_video4_pane_g5

0xbfe8,	// (0x00070f62) vid4_progress_pane_ParamLimits

0xbfe8,	// (0x00070f62) vid4_progress_pane

0x417e,	// (0x000690f8) main_cset_slider_pane_g18_ParamLimits

0x417e,	// (0x000690f8) main_cset_slider_pane_g18

0x4342,	// (0x000692bc) cell_cam4_burst_pane_g2_ParamLimits

0x4342,	// (0x000692bc) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x000749e1) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x000749e1) cell_cam4_burst_pane_g

0xcd3d,	// (0x00071cb7) bg_cl_pane_ParamLimits

0xcd3d,	// (0x00071cb7) bg_cl_pane

0xcd49,	// (0x00071cc3) cl_header_pane_ParamLimits

0xcd49,	// (0x00071cc3) cl_header_pane

0xcd55,	// (0x00071ccf) cl_listscroll_pane_ParamLimits

0xcd55,	// (0x00071ccf) cl_listscroll_pane

0x4480,	// (0x000693fa) bg_cl_pane_g1

0x4488,	// (0x00069402) bg_cl_pane_g2

0x4490,	// (0x0006940a) bg_cl_pane_g3

0x4498,	// (0x00069412) bg_cl_pane_g4

0x44a0,	// (0x0006941a) bg_cl_pane_g5

0x44a8,	// (0x00069422) bg_cl_pane_g6

0x44b0,	// (0x0006942a) bg_cl_pane_g7

0x44b8,	// (0x00069432) bg_cl_pane_g8

0x44c0,	// (0x0006943a) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x00074a1c) bg_cl_pane_g

0xcd61,	// (0x00071cdb) aid_height_cl_leading_ParamLimits

0xcd61,	// (0x00071cdb) aid_height_cl_leading

0xcd6d,	// (0x00071ce7) aid_height_cl_text_ParamLimits

0xcd6d,	// (0x00071ce7) aid_height_cl_text

0x7212,	// (0x0006c18c) bg_cl_header_pane_ParamLimits

0x7212,	// (0x0006c18c) bg_cl_header_pane

0xcd85,	// (0x00071cff) cl_header_pane_g1_ParamLimits

0xcd85,	// (0x00071cff) cl_header_pane_g1

0xcd92,	// (0x00071d0c) cl_header_pane_t1_ParamLimits

0xcd92,	// (0x00071d0c) cl_header_pane_t1

0x44c8,	// (0x00069442) cl_list_pane

0x4151,	// (0x000690cb) hc_scroll_pane_cp01

0x0517,	// (0x00065491) bg_cl_header_pane_g1

0x4037,	// (0x00068fb1) bg_cl_header_pane_g2

0x0537,	// (0x000654b1) bg_cl_header_pane_g3

0x4047,	// (0x00068fc1) bg_cl_header_pane_g4

0x403f,	// (0x00068fb9) bg_cl_header_pane_g5

0x425b,	// (0x000691d5) bg_cl_header_pane_g6

0x405f,	// (0x00068fd9) bg_cl_header_pane_g7

0x4067,	// (0x00068fe1) bg_cl_header_pane_g8

0x4057,	// (0x00068fd1) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x00074a2f) bg_cl_header_pane_g

0xcda4,	// (0x00071d1e) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xcda4,	// (0x00071d1e) hc_cl_list_double_graphic_heading_pane

0xcdbb,	// (0x00071d35) hc_cl_list_single_graphic_pane_ParamLimits

0xcdbb,	// (0x00071d35) hc_cl_list_single_graphic_pane

0xcddb,	// (0x00071d55) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xcddb,	// (0x00071d55) hc_cl_list_single_graphic_pane_g1

0xcde7,	// (0x00071d61) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xcde7,	// (0x00071d61) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x00074a42) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x00074a42) hc_cl_list_single_graphic_pane_g

0xcdfb,	// (0x00071d75) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xcdfb,	// (0x00071d75) hc_cl_list_single_graphic_pane_t1

0xcddb,	// (0x00071d55) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xcddb,	// (0x00071d55) hc_cl_list_double_graphic_heading_pane_g1

0xce10,	// (0x00071d8a) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xce10,	// (0x00071d8a) hc_cl_list_double_graphic_heading_pane_g2

0xce24,	// (0x00071d9e) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xce24,	// (0x00071d9e) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x00074a47) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x00074a47) hc_cl_list_double_graphic_heading_pane_g

0xce38,	// (0x00071db2) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xce38,	// (0x00071db2) hc_cl_list_double_graphic_heading_pane_t1

0xce4d,	// (0x00071dc7) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xce4d,	// (0x00071dc7) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x00074a4e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x00074a4e) hc_cl_list_double_graphic_heading_pane_t

0xce6a,	// (0x00071de4) vid4_progress_pane_g1

0xce7a,	// (0x00071df4) vid4_progress_pane_g2

0xce8a,	// (0x00071e04) vid4_progress_pane_g3

0xbf4e,	// (0x00070ec8) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x00074a53) vid4_progress_pane_g

0xce96,	// (0x00071e10) vid4_progress_pane_t1

0xceab,	// (0x00071e25) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x00074a5e) vid4_progress_pane_t

0xced6,	// (0x00071e50) wait_bar_pane_cp07

0x23ac,	// (0x00067326) blid_firmament_pane_ParamLimits

0x23ef,	// (0x00067369) popup_blid_sat_info2_window_g1

0x2413,	// (0x0006738d) popup_blid_sat_info2_window_t3

0x2421,	// (0x0006739b) popup_blid_sat_info2_window_t4

0x242f,	// (0x000673a9) popup_blid_sat_info2_window_t5

0x243d,	// (0x000673b7) popup_blid_sat_info2_window_t6

0x244d,	// (0x000673c7) popup_blid_sat_info2_window_t7

0x245b,	// (0x000673d5) popup_blid_sat_info2_window_t8

0x2469,	// (0x000673e3) popup_blid_sat_info2_window_t9

0x2477,	// (0x000673f1) popup_blid_sat_info2_window_t10

0x253b,	// (0x000674b5) aid_firma_cardinal_ParamLimits

0x254f,	// (0x000674c9) blid_firmament_pane_t1_ParamLimits

0x2566,	// (0x000674e0) blid_firmament_pane_t2_ParamLimits

0x257d,	// (0x000674f7) blid_firmament_pane_t3_ParamLimits

0x2594,	// (0x0006750e) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x00074671) blid_firmament_pane_t_ParamLimits

0x25ab,	// (0x00067525) blid_sat_info_pane_ParamLimits

0xe963,	// (0x000738dd) main_cam_set_pane_ParamLimits

0xb49f,	// (0x00070419) aid_size_cell_colour_35_ParamLimits

0xb4b9,	// (0x00070433) aid_size_cell_colour_112_ParamLimits

0xb4d0,	// (0x0007044a) aid_size_cell_effect_ParamLimits

0xe963,	// (0x000738dd) bg_tb_trans_pane_cp02_ParamLimits

0x07b4,	// (0x0006572e) heading_imed_pane_ParamLimits

0xb4ea,	// (0x00070464) listscroll_imed_pane_ParamLimits

0x16dd,	// (0x00066657) popup_call2_audio_first_window_g5_ParamLimits

0x16dd,	// (0x00066657) popup_call2_audio_first_window_g5

0xbc07,	// (0x00070b81) aid_size_touch_image3_arrow_left_ParamLimits

0xbc07,	// (0x00070b81) aid_size_touch_image3_arrow_left

0xbc1d,	// (0x00070b97) aid_size_touch_image3_arrow_right_ParamLimits

0xbc1d,	// (0x00070b97) aid_size_touch_image3_arrow_right

0xcec1,	// (0x00071e3b) vid4_progress_pane_t3

0xb790,	// (0x0007070a) main_hwr_training_symbol_option_pane_ParamLimits

0xb790,	// (0x0007070a) main_hwr_training_symbol_option_pane

0x2d91,	// (0x00067d0b) popup_hwr_training_preview_window_ParamLimits

0x2d91,	// (0x00067d0b) popup_hwr_training_preview_window

0xb7f1,	// (0x0007076b) hwr_training_navi_pane_g5_ParamLimits

0xb7f1,	// (0x0007076b) hwr_training_navi_pane_g5

0x4025,	// (0x00068f9f) popup_char_count_window

0x7212,	// (0x0006c18c) bg_popup_sub_pane_cp20_ParamLimits

0xc9d3,	// (0x0007194d) list_vitu2_match_list_pane_ParamLimits

0xc9df,	// (0x00071959) vitu2_page_scroll_pane_ParamLimits

0xc9df,	// (0x00071959) vitu2_page_scroll_pane

0x44d1,	// (0x0006944b) list_single_hwr_training_symbol_option_pane_ParamLimits

0x44d1,	// (0x0006944b) list_single_hwr_training_symbol_option_pane

0x44e4,	// (0x0006945e) list_single_hwr_training_symbol_option_pane_g1

0x44ec,	// (0x00069466) list_single_hwr_training_symbol_option_pane_t1

0x44fa,	// (0x00069474) bg_button_pane_cp023

0x4503,	// (0x0006947d) bg_button_pane_cp024

0xceee,	// (0x00071e68) vitu2_page_scroll_pane_g1

0xcef6,	// (0x00071e70) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x00074a65) vitu2_page_scroll_pane_g

0xcefe,	// (0x00071e78) vitu2_page_scroll_pane_t1

0x22c8,	// (0x00067242) popup_char_count_window_g1

0x4536,	// (0x000694b0) popup_char_count_window_g2

0x453f,	// (0x000694b9) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x00074a6a) popup_char_count_window_g

0x4548,	// (0x000694c2) popup_char_count_window_t1

0x6f81,	// (0x0006befb) main_vded2_pane

0x2a90,	// (0x00067a0a) aid_size_cell_imed_line

0x2a9a,	// (0x00067a14) grid_imed_line_width_pane

0xc03e,	// (0x00070fb8) vid4_indicators_pane_g4

0x4556,	// (0x000694d0) cell_imed_line_width_pane_ParamLimits

0x4556,	// (0x000694d0) cell_imed_line_width_pane

0x456a,	// (0x000694e4) cell_imed_line_width_pane_g1

0x235a,	// (0x000672d4) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x00074a71) cell_imed_line_width_pane_g

0xcf0d,	// (0x00071e87) main_vded2_pane_g1_ParamLimits

0xcf0d,	// (0x00071e87) main_vded2_pane_g1

0xcf1a,	// (0x00071e94) main_vded2_pane_g2_ParamLimits

0xcf1a,	// (0x00071e94) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x00074a76) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x00074a76) main_vded2_pane_g

0xcf28,	// (0x00071ea2) vded2_slider_pane_ParamLimits

0xcf28,	// (0x00071ea2) vded2_slider_pane

0xcf35,	// (0x00071eaf) aid_size_touch_vded2_end

0xcf3f,	// (0x00071eb9) aid_size_touch_vded2_playhead

0x4573,	// (0x000694ed) aid_size_touch_vded2_start

0x457b,	// (0x000694f5) vded2_slider_bg_pane

0x4584,	// (0x000694fe) vded2_slider_pane_g1

0x458d,	// (0x00069507) vded2_slider_pane_g2

0xcf47,	// (0x00071ec1) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x00074a7b) vded2_slider_pane_g

0x4595,	// (0x0006950f) vded2_slider_bg_pane_g1

0x459e,	// (0x00069518) vded2_slider_bg_pane_g2

0x45a7,	// (0x00069521) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x00074a82) vded2_slider_bg_pane_g

0x98a5,	// (0x0006e81f) aid_postcard_touch_down_pane_ParamLimits

0x98a5,	// (0x0006e81f) aid_postcard_touch_down_pane

0x98b5,	// (0x0006e82f) aid_postcard_touch_up_pane_ParamLimits

0x98b5,	// (0x0006e82f) aid_postcard_touch_up_pane

0x6f81,	// (0x0006befb) main_blid2_pane

0x20c1,	// (0x0006703b) popup_blid2_search_window

0x6f81,	// (0x0006befb) blid2_gps_pane

0x6f81,	// (0x0006befb) blid2_navig_pane

0x6f81,	// (0x0006befb) blid2_search_pane

0x6f81,	// (0x0006befb) blid2_tripm_pane

0xcf50,	// (0x00071eca) blid2_search_pane_g1_ParamLimits

0xcf50,	// (0x00071eca) blid2_search_pane_g1

0xcf60,	// (0x00071eda) blid2_search_pane_t1_ParamLimits

0xcf60,	// (0x00071eda) blid2_search_pane_t1

0xcf72,	// (0x00071eec) aid_size_cell_blid2_gps_ParamLimits

0xcf72,	// (0x00071eec) aid_size_cell_blid2_gps

0xcf82,	// (0x00071efc) blid2_gps_pane_g1_ParamLimits

0xcf82,	// (0x00071efc) blid2_gps_pane_g1

0xcf8e,	// (0x00071f08) grid_blid2_satellite_pane_ParamLimits

0xcf8e,	// (0x00071f08) grid_blid2_satellite_pane

0xcf9e,	// (0x00071f18) blid2_navig_pane_g1_ParamLimits

0xcf9e,	// (0x00071f18) blid2_navig_pane_g1

0xcfaa,	// (0x00071f24) blid2_navig_pane_t1_ParamLimits

0xcfaa,	// (0x00071f24) blid2_navig_pane_t1

0xcfbc,	// (0x00071f36) blid2_navig_pane_t2_ParamLimits

0xcfbc,	// (0x00071f36) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x00074a89) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x00074a89) blid2_navig_pane_t

0xcfce,	// (0x00071f48) blid2_navig_ring_pane_ParamLimits

0xcfce,	// (0x00071f48) blid2_navig_ring_pane

0xcfde,	// (0x00071f58) blid2_speed_pane_ParamLimits

0xcfde,	// (0x00071f58) blid2_speed_pane

0xcfea,	// (0x00071f64) blid2_tripm_pane_g1_ParamLimits

0xcfea,	// (0x00071f64) blid2_tripm_pane_g1

0xcffa,	// (0x00071f74) blid2_tripm_pane_g2_ParamLimits

0xcffa,	// (0x00071f74) blid2_tripm_pane_g2

0xd006,	// (0x00071f80) blid2_tripm_pane_g3_ParamLimits

0xd006,	// (0x00071f80) blid2_tripm_pane_g3

0xd012,	// (0x00071f8c) blid2_tripm_pane_g4_ParamLimits

0xd012,	// (0x00071f8c) blid2_tripm_pane_g4

0xd01e,	// (0x00071f98) blid2_tripm_pane_g5_ParamLimits

0xd01e,	// (0x00071f98) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x00074a8e) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x00074a8e) blid2_tripm_pane_g

0xd03a,	// (0x00071fb4) blid2_tripm_pane_t1_ParamLimits

0xd03a,	// (0x00071fb4) blid2_tripm_pane_t1

0xd04e,	// (0x00071fc8) blid2_tripm_pane_t2_ParamLimits

0xd04e,	// (0x00071fc8) blid2_tripm_pane_t2

0xd062,	// (0x00071fdc) blid2_tripm_pane_t3_ParamLimits

0xd062,	// (0x00071fdc) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x00074a9b) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x00074a9b) blid2_tripm_pane_t

0xd094,	// (0x0007200e) cell_blid2_satellite_pane_ParamLimits

0xd094,	// (0x0007200e) cell_blid2_satellite_pane

0xd0ae,	// (0x00072028) cell_blid2_satellite_pane_g1

0x45b0,	// (0x0006952a) cell_blid2_satellite_pane_t1

0x25bb,	// (0x00067535) blid2_speed_pane_g1

0x45be,	// (0x00069538) blid2_speed_pane_t1

0x45cc,	// (0x00069546) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x00074aa4) blid2_speed_pane_t

0x25bb,	// (0x00067535) blid2_navig_ring_pane_g1

0xd0b7,	// (0x00072031) blid2_navig_ring_pane_g2

0xd0bf,	// (0x00072039) blid2_navig_ring_pane_g3

0xd0c7,	// (0x00072041) blid2_navig_ring_pane_g4

0xd0cf,	// (0x00072049) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x00074aa9) blid2_navig_ring_pane_g

0x6f81,	// (0x0006befb) bg_popup_window_pane_cp011

0x45da,	// (0x00069554) popup_blid2_search_window_g1

0x45e2,	// (0x0006955c) popup_blid2_search_window_t1

0x45f0,	// (0x0006956a) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x00074ab4) popup_blid2_search_window_t

0x0426,	// (0x000653a0) main_browser_pane_g1

0x0020,	// (0x00064f9a) main_browser_pane_ParamLimits

0xe963,	// (0x000738dd) bg_button_pane_cp011_ParamLimits

0xc2a7,	// (0x00071221) cell_vitu2_function_pane_g1_ParamLimits

0x20b3,	// (0x0006702d) bg_popup_sub_pane_cp22_ParamLimits

0x633c,	// (0x0006b2b6) input_focus_pane_cp08_ParamLimits

0xcb3b,	// (0x00071ab5) popup_vitu2_query_button_pane_ParamLimits

0xcb3b,	// (0x00071ab5) popup_vitu2_query_button_pane

0x6353,	// (0x0006b2cd) popup_vitu2_query_input_button_pane

0x4298,	// (0x00069212) popup_vitu2_query_window_g1_ParamLimits

0xcb4c,	// (0x00071ac6) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x000749b5) popup_vitu2_query_window_g_ParamLimits

0x6f81,	// (0x0006befb) bg_button_pane_cp026

0xd0d7,	// (0x00072051) popup_vitu2_query_input_button_pane_g1

0x6f81,	// (0x0006befb) bg_button_pane_cp025

0x45fe,	// (0x00069578) popup_vitu2_query_button_pane_t1

0xaa07,	// (0x0006f981) main_mp3_pane_t6

0xaa17,	// (0x0006f991) popup_slider_window_cp01

0xbf35,	// (0x00070eaf) cam4_battery_pane

0xc014,	// (0x00070f8e) cam4_battery_pane_cp02

0xce62,	// (0x00071ddc) cam4_battery_pane_cp01

0xce62,	// (0x00071ddc) cam4_battery_pane_cp03

0x25bb,	// (0x00067535) cam4_battery_pane_g1

0x3ecf,	// (0x00068e49) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x00074ab9) cam4_battery_pane_g

0x2485,	// (0x000673ff) popup_blid_sat_info2_window_t11

0x9249,	// (0x0006e1c3) aid_size_touch_mv_arrow_left_ParamLimits

0x9274,	// (0x0006e1ee) aid_size_touch_mv_arrow_right_ParamLimits

0x0baa,	// (0x00065b24) navi_pane_g1_ParamLimits

0x929d,	// (0x0006e217) navi_pane_g2_ParamLimits

0x92cb,	// (0x0006e245) navi_pane_g3_ParamLimits

0xf409,	// (0x00074383) navi_pane_g_ParamLimits

0x9325,	// (0x0006e29f) navi_pane_mv_t1_ParamLimits

0xb4f6,	// (0x00070470) grid_imed_effect_pane_ParamLimits

0x7ee7,	// (0x0006ce61) aid_placing_vt_slider_lsc

0x0377,	// (0x000652f1) aid_placing_vt_slider_prt

0xe963,	// (0x000738dd) bg_tb_trans_pane_cp01_ParamLimits

0x2742,	// (0x000676bc) popup_image_details_window_g1_ParamLimits

0x2755,	// (0x000676cf) popup_image_details_window_g2_ParamLimits

0x276a,	// (0x000676e4) popup_image_details_window_g3_ParamLimits

0x276a,	// (0x000676e4) popup_image_details_window_g3

0xf73c,	// (0x000746b6) popup_image_details_window_g_ParamLimits

0x277e,	// (0x000676f8) popup_image_details_window_t1_ParamLimits

0x2790,	// (0x0006770a) popup_image_details_window_t2_ParamLimits

0x27a9,	// (0x00067723) popup_image_details_window_t3_ParamLimits

0x27bd,	// (0x00067737) popup_image_details_window_t4_ParamLimits

0x27d8,	// (0x00067752) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x000746bd) popup_image_details_window_t_ParamLimits

0xcd79,	// (0x00071cf3) cl_header_name_pane_ParamLimits

0xcd79,	// (0x00071cf3) cl_header_name_pane

0xd0df,	// (0x00072059) cl_header_name_pane_t1_ParamLimits

0xd0df,	// (0x00072059) cl_header_name_pane_t1

0xd0f6,	// (0x00072070) cl_header_name_pane_t2_ParamLimits

0xd0f6,	// (0x00072070) cl_header_name_pane_t2

0xd120,	// (0x0007209a) cl_header_name_pane_t3_ParamLimits

0xd120,	// (0x0007209a) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x00074abe) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x00074abe) cl_header_name_pane_t

0x92f6,	// (0x0006e270) navi_pane_mv_g2_ParamLimits

0x3fff,	// (0x00068f79) field_vitu2_entry_pane_g1_ParamLimits

0x400b,	// (0x00068f85) field_vitu2_entry_pane_g2_ParamLimits

0x4017,	// (0x00068f91) field_vitu2_entry_pane_g3_ParamLimits

0x4017,	// (0x00068f91) field_vitu2_entry_pane_g3

0xf93a,	// (0x000748b4) field_vitu2_entry_pane_g_ParamLimits

0xc237,	// (0x000711b1) cell_vitu2_itu_pane_g1_ParamLimits

0xc247,	// (0x000711c1) cell_vitu2_itu_pane_g2_ParamLimits

0xc247,	// (0x000711c1) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x000748c0) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x000748c0) cell_vitu2_itu_pane_g

0xe963,	// (0x000738dd) bg_vkb2_func_pane_cp05_ParamLimits

0xe963,	// (0x000738dd) bg_vkb2_func_pane_cp05

0xe963,	// (0x000738dd) bg_vkb2_func_pane_cp03

0xe963,	// (0x000738dd) bg_vkb2_func_pane_cp04

0xe963,	// (0x000738dd) bg_vkb2_func_pane_cp10_ParamLimits

0xe963,	// (0x000738dd) bg_vkb2_func_pane_cp10

0x6501,	// (0x0006b47b) bg_vkb2_func_pane_cp08

0xcd23,	// (0x00071c9d) bg_vkb2_func_pane_cp06

0xcd31,	// (0x00071cab) bg_vkb2_func_pane_cp07

0x450c,	// (0x00069486) bg_vkb2_func_pane_cp11_ParamLimits

0x450c,	// (0x00069486) bg_vkb2_func_pane_cp11

0x4521,	// (0x0006949b) bg_vkb2_func_pane_cp12_ParamLimits

0x4521,	// (0x0006949b) bg_vkb2_func_pane_cp12

0x6f81,	// (0x0006befb) bg_vkb2_func_pane_cp09

0x4037,	// (0x00068fb1) bg_vkb2_func_pane_g1

0x0537,	// (0x000654b1) bg_vkb2_func_pane_g2

0x403f,	// (0x00068fb9) bg_vkb2_func_pane_g3

0x4047,	// (0x00068fc1) bg_vkb2_func_pane_g4

0x425b,	// (0x000691d5) bg_vkb2_func_pane_g5

0x405f,	// (0x00068fd9) bg_vkb2_func_pane_g6

0x4067,	// (0x00068fe1) bg_vkb2_func_pane_g7

0x4057,	// (0x00068fd1) bg_vkb2_func_pane_g8

0x0517,	// (0x00065491) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x00074ac5) bg_vkb2_func_pane_g

0xd02c,	// (0x00071fa6) blid2_tripm_pane_g6_ParamLimits

0xd02c,	// (0x00071fa6) blid2_tripm_pane_g6

0x3e89,	// (0x00068e03) mp4_progress_pane_g1

0xd088,	// (0x00072002) blid2_tripm_values_pane_ParamLimits

0xd088,	// (0x00072002) blid2_tripm_values_pane

0xd145,	// (0x000720bf) blid2_tripm_values_pane_t1

0xd153,	// (0x000720cd) blid2_tripm_values_pane_t2

0xd161,	// (0x000720db) blid2_tripm_values_pane_t3

0xd16f,	// (0x000720e9) blid2_tripm_values_pane_t4

0xd17d,	// (0x000720f7) blid2_tripm_values_pane_t5

0xd18b,	// (0x00072105) blid2_tripm_values_pane_t6

0xd199,	// (0x00072113) blid2_tripm_values_pane_t7

0xd1a7,	// (0x00072121) blid2_tripm_values_pane_t8

0xd1b5,	// (0x0007212f) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x00074ad8) blid2_tripm_values_pane_t

0x7f27,	// (0x0006cea1) call_video_pane_t1_ParamLimits

0x7f48,	// (0x0006cec2) call_video_pane_t2_ParamLimits

0xf292,	// (0x0007420c) call_video_pane_t_ParamLimits

0x60f4,	// (0x0006b06e) msg_header_pane_g1_ParamLimits

0x0de5,	// (0x00065d5f) msg_header_pane_g2_ParamLimits

0x0de5,	// (0x00065d5f) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x00074426) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x00074426) msg_header_pane_g

0x0020,	// (0x00064f9a) main_clock2_pane_ParamLimits

0xb27b,	// (0x000701f5) grid_clock2_toolbar_pane_ParamLimits

0xb27b,	// (0x000701f5) grid_clock2_toolbar_pane

0xb27b,	// (0x000701f5) listscroll_clock2_pane_ParamLimits

0xb27b,	// (0x000701f5) listscroll_clock2_pane

0xb329,	// (0x000702a3) main_clock2_pane_t3_ParamLimits

0xb329,	// (0x000702a3) main_clock2_pane_t3

0xb33b,	// (0x000702b5) main_clock2_pane_t4_ParamLimits

0xb33b,	// (0x000702b5) main_clock2_pane_t4

0x460c,	// (0x00069586) cell_clock2_toolbar_pane

0x4614,	// (0x0006958e) cell_clock2_toolbar_pane_cp01

0x4614,	// (0x0006958e) cell_clock2_toolbar_pane_cp02

0x461c,	// (0x00069596) cell_clock2_toolbar_pane_cp03

0x4624,	// (0x0006959e) list_clock2_pane

0x0afd,	// (0x00065a77) scroll_pane_cp10

0x462c,	// (0x000695a6) list_single_clock2_pane_ParamLimits

0x462c,	// (0x000695a6) list_single_clock2_pane

0x0c4a,	// (0x00065bc4) list_highlight_pane_cp08

0x4639,	// (0x000695b3) list_single_clock2_pane_t1

0x4647,	// (0x000695c1) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x00074aeb) list_single_clock2_pane_t

0x6f81,	// (0x0006befb) bg_button_pane_cp10

0x4655,	// (0x000695cf) cell_clock2_toolbar_pane_g1

0x9807,	// (0x0006e781) aid_main_viewer_pane_g1_ParamLimits

0x9807,	// (0x0006e781) aid_main_viewer_pane_g1

0x9813,	// (0x0006e78d) aid_main_viewer_pane_g2_ParamLimits

0x9813,	// (0x0006e78d) aid_main_viewer_pane_g2

0x981f,	// (0x0006e799) aid_main_viewer_pane_g3_ParamLimits

0x981f,	// (0x0006e799) aid_main_viewer_pane_g3

0x9830,	// (0x0006e7aa) aid_main_viewer_pane_g4_ParamLimits

0x9830,	// (0x0006e7aa) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x00074437) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x00074437) aid_main_viewer_pane_g

0x9fc0,	// (0x0006ef3a) main_calc_pane_ParamLimits

0x9fcd,	// (0x0006ef47) main_dialer2_pane_ParamLimits

0x6f81,	// (0x0006befb) main_cam6_pane

0x6f81,	// (0x0006befb) main_vid6_pane

0xb287,	// (0x00070201) listscroll_gen_pane_cp06_ParamLimits

0xb287,	// (0x00070201) listscroll_gen_pane_cp06

0xb34d,	// (0x000702c7) main_clock2_pane_t5_ParamLimits

0xb34d,	// (0x000702c7) main_clock2_pane_t5

0xb39c,	// (0x00070316) aid_call2_pane_cp10_ParamLimits

0xb3ae,	// (0x00070328) aid_call_pane_cp10_ParamLimits

0x0b7f,	// (0x00065af9) popup_clock_analogue_window_cp10_g1_ParamLimits

0x0b7f,	// (0x00065af9) popup_clock_analogue_window_cp10_g2_ParamLimits

0xb3c0,	// (0x0007033a) popup_clock_analogue_window_cp10_g3_ParamLimits

0xb3c0,	// (0x0007033a) popup_clock_analogue_window_cp10_g4_ParamLimits

0x0b7f,	// (0x00065af9) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x0007476d) popup_clock_analogue_window_cp10_g_ParamLimits

0xb3d6,	// (0x00070350) popup_clock_analogue_window_cp10_t1_ParamLimits

0xbbb4,	// (0x00070b2e) cell_dialer2_keypad_pane_g2_ParamLimits

0xbbb4,	// (0x00070b2e) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x00074853) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x00074853) cell_dialer2_keypad_pane_g

0xbbd0,	// (0x00070b4a) cell_dialer2_keypad_pane_t1

0xc56d,	// (0x000714e7) main_cset_text2_pane_ParamLimits

0xc56d,	// (0x000714e7) main_cset_text2_pane

0x4474,	// (0x000693ee) area_vitu2_query_pane_g1_ParamLimits

0x642c,	// (0x0006b3a6) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x00074a08) area_vitu2_query_pane_g_ParamLimits

0x64dd,	// (0x0006b457) area_vitu2_query_pane_t7_ParamLimits

0x64dd,	// (0x0006b457) area_vitu2_query_pane_t7

0xcd23,	// (0x00071c9d) bg_button_pane_cp018_ParamLimits

0xcd31,	// (0x00071cab) bg_button_pane_cp021_ParamLimits

0x6501,	// (0x0006b47b) bg_button_pane_cp022_ParamLimits

0x6501,	// (0x0006b47b) bg_vkb2_func_pane_cp08_ParamLimits

0xcd23,	// (0x00071c9d) bg_vkb2_func_pane_cp06_ParamLimits

0xcd31,	// (0x00071cab) bg_vkb2_func_pane_cp07_ParamLimits

0x6512,	// (0x0006b48c) input_focus_pane_cp09_ParamLimits

0xd1c3,	// (0x0007213d) cam6_autofocus_pane_ParamLimits

0xd1c3,	// (0x0007213d) cam6_autofocus_pane

0xd1e5,	// (0x0007215f) cam6_image_uncrop_pane_ParamLimits

0xd1e5,	// (0x0007215f) cam6_image_uncrop_pane

0xd212,	// (0x0007218c) cam6_indi_pane_ParamLimits

0xd212,	// (0x0007218c) cam6_indi_pane

0xd22c,	// (0x000721a6) cam6_mode_pane_ParamLimits

0xd22c,	// (0x000721a6) cam6_mode_pane

0xd240,	// (0x000721ba) cam6_timer_pane_ParamLimits

0xd240,	// (0x000721ba) cam6_timer_pane

0xd24c,	// (0x000721c6) cam6_zoom_pane_ParamLimits

0xd24c,	// (0x000721c6) cam6_zoom_pane

0xbf96,	// (0x00070f10) cam6_mode_pane_g1_ParamLimits

0xbf96,	// (0x00070f10) cam6_mode_pane_g1

0xbfae,	// (0x00070f28) cam6_mode_pane_g2_ParamLimits

0xbfae,	// (0x00070f28) cam6_mode_pane_g2

0xbfba,	// (0x00070f34) cam6_mode_pane_g3_ParamLimits

0xbfba,	// (0x00070f34) cam6_mode_pane_g3

0xbfc6,	// (0x00070f40) cam6_mode_pane_g4_ParamLimits

0xbfc6,	// (0x00070f40) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x00074af0) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x00074af0) cam6_mode_pane_g

0x3f6c,	// (0x00068ee6) bg_tb_trans_pane_cp08_ParamLimits

0x3f6c,	// (0x00068ee6) bg_tb_trans_pane_cp08

0x465d,	// (0x000695d7) cam6_battery_pane_ParamLimits

0x465d,	// (0x000695d7) cam6_battery_pane

0x4673,	// (0x000695ed) cam6_indi_pane_g1_ParamLimits

0x4673,	// (0x000695ed) cam6_indi_pane_g1

0x4685,	// (0x000695ff) cam6_indi_pane_g2_ParamLimits

0x4685,	// (0x000695ff) cam6_indi_pane_g2

0x4697,	// (0x00069611) cam6_indi_pane_g3_ParamLimits

0x4697,	// (0x00069611) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x00074af9) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x00074af9) cam6_indi_pane_g

0x46a9,	// (0x00069623) cam6_indi_pane_t1_ParamLimits

0x46a9,	// (0x00069623) cam6_indi_pane_t1

0xc073,	// (0x00070fed) cam6_autofocus_pane_g1

0xc07b,	// (0x00070ff5) cam6_autofocus_pane_g2

0xc083,	// (0x00070ffd) cam6_autofocus_pane_g3

0xc08b,	// (0x00071005) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x00074b00) cam6_autofocus_pane_g

0x46cf,	// (0x00069649) cam6_timer_pane_g1

0x46d7,	// (0x00069651) cam6_timer_pane_t1

0x46e5,	// (0x0006965f) cam6_zoom_cont_pane

0x46ed,	// (0x00069667) cam6_zoom_pane_g1

0x46f5,	// (0x0006966f) cam6_zoom_pane_g2

0xd264,	// (0x000721de) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x00074b09) cam6_zoom_pane_g

0x25bb,	// (0x00067535) cam6_battery_pane_g1

0x25bb,	// (0x00067535) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x0007467a) cam6_battery_pane_g

0x46fd,	// (0x00069677) cam6_zoom_cont_pane_g1

0x4706,	// (0x00069680) cam6_zoom_cont_pane_g2

0x470f,	// (0x00069689) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x00074b10) cam6_zoom_cont_pane_g

0xd27e,	// (0x000721f8) cam6_mode_pane_cp_ParamLimits

0xd27e,	// (0x000721f8) cam6_mode_pane_cp

0xd24c,	// (0x000721c6) cam6_zoom_pane_cp_ParamLimits

0xd24c,	// (0x000721c6) cam6_zoom_pane_cp

0xd292,	// (0x0007220c) vid6_image_uncrop_cif_pane_ParamLimits

0xd292,	// (0x0007220c) vid6_image_uncrop_cif_pane

0xd2be,	// (0x00072238) vid6_image_uncrop_nhd_pane_ParamLimits

0xd2be,	// (0x00072238) vid6_image_uncrop_nhd_pane

0xd1e5,	// (0x0007215f) vid6_image_uncrop_vga_pane_ParamLimits

0xd1e5,	// (0x0007215f) vid6_image_uncrop_vga_pane

0xd2db,	// (0x00072255) vid6_image_uncrop_wvga_pane_ParamLimits

0xd2db,	// (0x00072255) vid6_image_uncrop_wvga_pane

0xd2f8,	// (0x00072272) vid6_indi_pane_ParamLimits

0xd2f8,	// (0x00072272) vid6_indi_pane

0x3f6c,	// (0x00068ee6) bg_tb_trans_pane_cp09_ParamLimits

0x3f6c,	// (0x00068ee6) bg_tb_trans_pane_cp09

0x4727,	// (0x000696a1) cam6_battery_pane_cp_ParamLimits

0x4727,	// (0x000696a1) cam6_battery_pane_cp

0x4733,	// (0x000696ad) vid6_indi_pane_g1_ParamLimits

0x4733,	// (0x000696ad) vid6_indi_pane_g1

0x4745,	// (0x000696bf) vid6_indi_pane_g2_ParamLimits

0x4745,	// (0x000696bf) vid6_indi_pane_g2

0x4757,	// (0x000696d1) vid6_indi_pane_g3_ParamLimits

0x4757,	// (0x000696d1) vid6_indi_pane_g3

0x476c,	// (0x000696e6) vid6_indi_pane_g4_ParamLimits

0x476c,	// (0x000696e6) vid6_indi_pane_g4

0x4781,	// (0x000696fb) vid6_indi_pane_g5_ParamLimits

0x4781,	// (0x000696fb) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x00074b17) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x00074b17) vid6_indi_pane_g

0x479b,	// (0x00069715) vid6_indi_pane_t1_ParamLimits

0x479b,	// (0x00069715) vid6_indi_pane_t1

0x47b1,	// (0x0006972b) vid6_indi_pane_t2_ParamLimits

0x47b1,	// (0x0006972b) vid6_indi_pane_t2

0x47d9,	// (0x00069753) vid6_indi_pane_t3_ParamLimits

0x47d9,	// (0x00069753) vid6_indi_pane_t3

0x4801,	// (0x0006977b) vid6_indi_pane_t4_ParamLimits

0x4801,	// (0x0006977b) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x00074b22) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x00074b22) vid6_indi_pane_t

0x4825,	// (0x0006979f) wait_bar_pane_cp08

0xd31b,	// (0x00072295) main_cset_text2_pane_t1_ParamLimits

0xd31b,	// (0x00072295) main_cset_text2_pane_t1

0xd26c,	// (0x000721e6) listscroll_gen_pane_cp06_t1_ParamLimits

0xd26c,	// (0x000721e6) listscroll_gen_pane_cp06_t1

0x6f81,	// (0x0006befb) main_cam6_set_pane

0x2822,	// (0x0006779c) bg_tb_trans_pane_cp06_ParamLimits

0xbf3d,	// (0x00070eb7) cam4_indicators_pane_g1_ParamLimits

0xbf4e,	// (0x00070ec8) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x00074890) cam4_indicators_pane_g_ParamLimits

0xbf6c,	// (0x00070ee6) cam4_indicators_pane_t1_ParamLimits

0xe963,	// (0x000738dd) bg_tb_trans_pane_cp07_ParamLimits

0xbf3d,	// (0x00070eb7) vid4_indicators_pane_g1_ParamLimits

0xc01c,	// (0x00070f96) vid4_indicators_pane_g2_ParamLimits

0xc02d,	// (0x00070fa7) vid4_indicators_pane_g3_ParamLimits

0xc03e,	// (0x00070fb8) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x000748a2) vid4_indicators_pane_g_ParamLimits

0xc05a,	// (0x00070fd4) vid4_indicators_pane_t1_ParamLimits

0xce6a,	// (0x00071de4) vid4_progress_pane_g1_ParamLimits

0xce7a,	// (0x00071df4) vid4_progress_pane_g2_ParamLimits

0xce8a,	// (0x00071e04) vid4_progress_pane_g3_ParamLimits

0xbf4e,	// (0x00070ec8) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x00074a53) vid4_progress_pane_g_ParamLimits

0xce96,	// (0x00071e10) vid4_progress_pane_t1_ParamLimits

0xceab,	// (0x00071e25) vid4_progress_pane_t2_ParamLimits

0xcec1,	// (0x00071e3b) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x00074a5e) vid4_progress_pane_t_ParamLimits

0xced6,	// (0x00071e50) wait_bar_pane_cp07_ParamLimits

0xd359,	// (0x000722d3) main_cam6_set_pane_g2_ParamLimits

0xd359,	// (0x000722d3) main_cam6_set_pane_g2

0xd365,	// (0x000722df) main_cset6_listscroll_pane_ParamLimits

0xd365,	// (0x000722df) main_cset6_listscroll_pane

0xd390,	// (0x0007230a) main_cset6_slider_pane_ParamLimits

0xd390,	// (0x0007230a) main_cset6_slider_pane

0xd39c,	// (0x00072316) main_cset6_text2_pane_ParamLimits

0xd39c,	// (0x00072316) main_cset6_text2_pane

0x4834,	// (0x000697ae) main_cset6_text_pane

0x483c,	// (0x000697b6) main_cset_list_pane_copy1_ParamLimits

0x483c,	// (0x000697b6) main_cset_list_pane_copy1

0x484c,	// (0x000697c6) scroll_pane_cp028_copy1

0xd3af,	// (0x00072329) cset_list_set_pane_copy1

0xd3c9,	// (0x00072343) aid_position_infowindow_above_copy1

0xd3d1,	// (0x0007234b) aid_position_infowindow_below_copy1

0xd3d9,	// (0x00072353) cset_list_set_pane_g1_copy1

0x62b1,	// (0x0006b22b) cset_list_set_pane_g3_copy1_ParamLimits

0x62b1,	// (0x0006b22b) cset_list_set_pane_g3_copy1

0x62c0,	// (0x0006b23a) cset_list_set_pane_t1_copy1_ParamLimits

0x62c0,	// (0x0006b23a) cset_list_set_pane_t1_copy1

0xe963,	// (0x000738dd) list_highlight_pane_cp021_copy1_ParamLimits

0xe963,	// (0x000738dd) list_highlight_pane_cp021_copy1

0x4855,	// (0x000697cf) cset6_slider_pane_ParamLimits

0x4855,	// (0x000697cf) cset6_slider_pane

0x4881,	// (0x000697fb) main_cset6_slider_pane_g1_ParamLimits

0x4881,	// (0x000697fb) main_cset6_slider_pane_g1

0xd3e1,	// (0x0007235b) main_cset6_slider_pane_g2_ParamLimits

0xd3e1,	// (0x0007235b) main_cset6_slider_pane_g2

0x4166,	// (0x000690e0) main_cset6_slider_pane_g3_ParamLimits

0x4166,	// (0x000690e0) main_cset6_slider_pane_g3

0xd409,	// (0x00072383) main_cset6_slider_pane_g4_ParamLimits

0xd409,	// (0x00072383) main_cset6_slider_pane_g4

0xd415,	// (0x0007238f) main_cset6_slider_pane_g5_ParamLimits

0xd415,	// (0x0007238f) main_cset6_slider_pane_g5

0x4166,	// (0x000690e0) main_cset6_slider_pane_g7_ParamLimits

0x4166,	// (0x000690e0) main_cset6_slider_pane_g7

0x4172,	// (0x000690ec) main_cset6_slider_pane_g8_ParamLimits

0x4172,	// (0x000690ec) main_cset6_slider_pane_g8

0xd423,	// (0x0007239d) main_cset6_slider_pane_g9_ParamLimits

0xd423,	// (0x0007239d) main_cset6_slider_pane_g9

0xd42f,	// (0x000723a9) main_cset6_slider_pane_g10_ParamLimits

0xd42f,	// (0x000723a9) main_cset6_slider_pane_g10

0xd409,	// (0x00072383) main_cset6_slider_pane_g11_ParamLimits

0xd409,	// (0x00072383) main_cset6_slider_pane_g11

0xd43b,	// (0x000723b5) main_cset6_slider_pane_g12_ParamLimits

0xd43b,	// (0x000723b5) main_cset6_slider_pane_g12

0xd447,	// (0x000723c1) main_cset6_slider_pane_g13_ParamLimits

0xd447,	// (0x000723c1) main_cset6_slider_pane_g13

0xd455,	// (0x000723cf) main_cset6_slider_pane_g14_ParamLimits

0xd455,	// (0x000723cf) main_cset6_slider_pane_g14

0xd463,	// (0x000723dd) main_cset6_slider_pane_g15_ParamLimits

0xd463,	// (0x000723dd) main_cset6_slider_pane_g15

0xd415,	// (0x0007238f) main_cset6_slider_pane_g16_ParamLimits

0xd415,	// (0x0007238f) main_cset6_slider_pane_g16

0xd47b,	// (0x000723f5) main_cset6_slider_pane_g17_ParamLimits

0xd47b,	// (0x000723f5) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x00074b2b) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x00074b2b) main_cset6_slider_pane_g

0x48a9,	// (0x00069823) main_cset6_slider_pane_t1_ParamLimits

0x48a9,	// (0x00069823) main_cset6_slider_pane_t1

0xd489,	// (0x00072403) main_cset6_slider_pane_t2_ParamLimits

0xd489,	// (0x00072403) main_cset6_slider_pane_t2

0xd4b4,	// (0x0007242e) main_cset6_slider_pane_t3_ParamLimits

0xd4b4,	// (0x0007242e) main_cset6_slider_pane_t3

0xd4df,	// (0x00072459) main_cset6_slider_pane_t4_ParamLimits

0xd4df,	// (0x00072459) main_cset6_slider_pane_t4

0xd50c,	// (0x00072486) main_cset6_slider_pane_t5_ParamLimits

0xd50c,	// (0x00072486) main_cset6_slider_pane_t5

0x48f6,	// (0x00069870) main_cset6_slider_pane_t7_ParamLimits

0x48f6,	// (0x00069870) main_cset6_slider_pane_t7

0xd539,	// (0x000724b3) main_cset6_slider_pane_t8_ParamLimits

0xd539,	// (0x000724b3) main_cset6_slider_pane_t8

0xd55d,	// (0x000724d7) main_cset6_slider_pane_t9_ParamLimits

0xd55d,	// (0x000724d7) main_cset6_slider_pane_t9

0xd581,	// (0x000724fb) main_cset6_slider_pane_t10_ParamLimits

0xd581,	// (0x000724fb) main_cset6_slider_pane_t10

0xd5a5,	// (0x0007251f) main_cset6_slider_pane_t11_ParamLimits

0xd5a5,	// (0x0007251f) main_cset6_slider_pane_t11

0x492c,	// (0x000698a6) main_cset6_slider_pane_t14_ParamLimits

0x492c,	// (0x000698a6) main_cset6_slider_pane_t14

0x4965,	// (0x000698df) main_cset6_slider_pane_t15_ParamLimits

0x4965,	// (0x000698df) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x00074b50) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x00074b50) main_cset6_slider_pane_t

0x499e,	// (0x00069918) cset_slider_pane_g1_copy1

0x49a7,	// (0x00069921) cset_slider_pane_g2_copy1

0x49b0,	// (0x0006992a) cset_slider_pane_g3_copy1

0x6f81,	// (0x0006befb) bg_popup_sub_pane_cp011_copy1

0x42a4,	// (0x0006921e) main_cset_text_pane_g1_copy1

0x42ac,	// (0x00069226) main_cset_text_pane_t1_copy1

0x42ba,	// (0x00069234) main_cset_text_pane_t2_copy1

0x42c8,	// (0x00069242) main_cset_text_pane_t3_copy1

0x42d6,	// (0x00069250) main_cset_text_pane_t4_copy1

0x42e4,	// (0x0006925e) main_cset_text_pane_t5_copy1

0x42f2,	// (0x0006926c) main_cset_text_pane_t6_copy1

0x4300,	// (0x0006927a) main_cset_text_pane_t7_copy1

0xd5cb,	// (0x00072545) main_cset_text2_pane_t1_copy1

0x6f81,	// (0x0006befb) main_ncimui_pane

0xa00c,	// (0x0006ef86) popup_query_ncimui_window_ParamLimits

0xa00c,	// (0x0006ef86) popup_query_ncimui_window

0xab71,	// (0x0006faeb) field_cale_ev2_pane_g4_ParamLimits

0xab71,	// (0x0006faeb) field_cale_ev2_pane_g4

0xb8d2,	// (0x0007084c) cell_video_dialer_keypad_pane_g2_ParamLimits

0xb8d2,	// (0x0007084c) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x0007482e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x0007482e) cell_video_dialer_keypad_pane_g

0xb8ea,	// (0x00070864) cell_video_dialer_keypad_pane_t1

0x6f81,	// (0x0006befb) bg_popup_window_pane_cp012

0x09cd,	// (0x00065947) heading_pane_cp06

0x49d7,	// (0x00069951) ncim_query_content_pane

0x6f81,	// (0x0006befb) bg_popup_heading_pane_cp01

0x49df,	// (0x00069959) ncim_heading_pane_t1

0x49ed,	// (0x00069967) ncim_indicator_popup_pane

0x49ff,	// (0x00069979) ncim_query_button_pane

0x4a13,	// (0x0006998d) ncim_query_content_pane_t1

0x4a25,	// (0x0006999f) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x00074b8f) ncim_query_content_pane_t

0x4a5f,	// (0x000699d9) ncim_query_list_pane

0x4a71,	// (0x000699eb) ncim_query_popup_pane

0x49ed,	// (0x00069967) ncim_indicator_popup_pane_ParamLimits

0xd6f8,	// (0x00072672) ncim_query_content_pane_g1_ParamLimits

0xd6f8,	// (0x00072672) ncim_query_content_pane_g1

0x4a13,	// (0x0006998d) ncim_query_content_pane_t1_ParamLimits

0x4a25,	// (0x0006999f) ncim_query_content_pane_t2_ParamLimits

0xd704,	// (0x0007267e) ncim_query_content_pane_t3_ParamLimits

0xd704,	// (0x0007267e) ncim_query_content_pane_t3

0xd721,	// (0x0007269b) ncim_query_content_pane_t4_ParamLimits

0xd721,	// (0x0007269b) ncim_query_content_pane_t4

0xd73e,	// (0x000726b8) ncim_query_content_pane_t5_ParamLimits

0xd73e,	// (0x000726b8) ncim_query_content_pane_t5

0x4a37,	// (0x000699b1) ncim_query_content_pane_t6_ParamLimits

0x4a37,	// (0x000699b1) ncim_query_content_pane_t6

0xfc15,	// (0x00074b8f) ncim_query_content_pane_t_ParamLimits

0x4a5f,	// (0x000699d9) ncim_query_list_pane_ParamLimits

0x4a71,	// (0x000699eb) ncim_query_popup_pane_ParamLimits

0x4a85,	// (0x000699ff) wait_bar_pane_cp04

0x6f81,	// (0x0006befb) input_focus_pane_cp011

0x4a8d,	// (0x00069a07) ncim_query_popup_pane_t1

0x4a9b,	// (0x00069a15) ncim_list_query_list_pane_ParamLimits

0x4a9b,	// (0x00069a15) ncim_list_query_list_pane

0x6f81,	// (0x0006befb) bg_button_pane_cp027

0x4aae,	// (0x00069a28) ncim_query_button_pane_g1

0x6f81,	// (0x0006befb) list_highlight_pane_cp012

0x4ab8,	// (0x00069a32) ncim_list_query_list_pane_g1

0x4ac0,	// (0x00069a3a) ncim_list_query_list_pane_t1

0xbf5d,	// (0x00070ed7) cam4_indicators_pane_g3_ParamLimits

0xbf5d,	// (0x00070ed7) cam4_indicators_pane_g3

0xc04a,	// (0x00070fc4) vid4_indicators_pane_g5_ParamLimits

0xc04a,	// (0x00070fc4) vid4_indicators_pane_g5

0xbf5d,	// (0x00070ed7) vid4_progress_pane_g5_ParamLimits

0xbf5d,	// (0x00070ed7) vid4_progress_pane_g5

0xd611,	// (0x0007258b) main_ncimui_pane_g1

0xd667,	// (0x000725e1) ncimui_group_query_pane_ParamLimits

0xd667,	// (0x000725e1) ncimui_group_query_pane

0xd6a3,	// (0x0007261d) ncimui_list_pane_ParamLimits

0xd6a3,	// (0x0007261d) ncimui_list_pane

0xd6c4,	// (0x0007263e) ncimui_text_pane_ParamLimits

0xd6c4,	// (0x0007263e) ncimui_text_pane

0xd75b,	// (0x000726d5) ncimui_text_pane_t1_ParamLimits

0xd75b,	// (0x000726d5) ncimui_text_pane_t1

0x4ace,	// (0x00069a48) ncimui_list_single_graphic_pane_ParamLimits

0x4ace,	// (0x00069a48) ncimui_list_single_graphic_pane

0xd77a,	// (0x000726f4) ncimui_query_pane_ParamLimits

0xd77a,	// (0x000726f4) ncimui_query_pane

0x6f81,	// (0x0006befb) list_highlight_pane_cp013

0x4ade,	// (0x00069a58) ncim_list_query_list_pane_t1_copy1

0x4ab8,	// (0x00069a32) ncim_list_single_graphic_pane_g1

0x4aec,	// (0x00069a66) ncim_query_button_pane_cp01

0x4af8,	// (0x00069a72) ncim_query_entry_pane_ParamLimits

0x4af8,	// (0x00069a72) ncim_query_entry_pane

0x4b0b,	// (0x00069a85) ncimui_query_pane_g1

0x4b17,	// (0x00069a91) ncimui_query_pane_t1_ParamLimits

0x4b17,	// (0x00069a91) ncimui_query_pane_t1

0xe963,	// (0x000738dd) input_focus_pane_cp012

0x4b30,	// (0x00069aaa) ncim_query_entry_pane_t1

0x0020,	// (0x00064f9a) main_im_pane_ParamLimits

0xe963,	// (0x000738dd) main_mobtv_pane_ParamLimits

0xe963,	// (0x000738dd) main_mobtv_pane

0xd423,	// (0x0007239d) main_cset6_slider_pane_g18_ParamLimits

0xd423,	// (0x0007239d) main_cset6_slider_pane_g18

0xd447,	// (0x000723c1) main_cset6_slider_pane_g19_ParamLimits

0xd447,	// (0x000723c1) main_cset6_slider_pane_g19

0x4017,	// (0x00068f91) bg_main_mobtv_pane_ParamLimits

0x4017,	// (0x00068f91) bg_main_mobtv_pane

0xd78d,	// (0x00072707) main_mobtv_info_pane

0xd798,	// (0x00072712) main_mobtv_loading_pane_ParamLimits

0xd798,	// (0x00072712) main_mobtv_loading_pane

0x4b42,	// (0x00069abc) main_mobtv_pg_channel_list_pane

0x4b4c,	// (0x00069ac6) main_mobtv_pg_hdr_pane

0xd7a5,	// (0x0007271f) main_mobtv_programe_curr_pane_ParamLimits

0xd7a5,	// (0x0007271f) main_mobtv_programe_curr_pane

0xd7b2,	// (0x0007272c) main_mobtv_programe_next_pane_ParamLimits

0xd7b2,	// (0x0007272c) main_mobtv_programe_next_pane

0x4b55,	// (0x00069acf) popup_mobtv_noti_window

0x25bb,	// (0x00067535) main_tv_pg_hdr_pane_g1

0x4b5d,	// (0x00069ad7) main_tv_pg_hdr_pane_g2

0x4b65,	// (0x00069adf) main_tv_pg_hdr_pane_g3

0x4b6d,	// (0x00069ae7) main_tv_pg_hdr_pane_g4

0x4b75,	// (0x00069aef) main_tv_pg_hdr_pane_g5

0x4b7f,	// (0x00069af9) main_tv_pg_hdr_pane_g6

0x4b89,	// (0x00069b03) main_tv_pg_hdr_pane_g7

0x4b93,	// (0x00069b0d) main_tv_pg_hdr_pane_g8

0x4b9d,	// (0x00069b17) main_tv_pg_hdr_pane_g9

0x4ba7,	// (0x00069b21) main_tv_pg_hdr_pane_g10

0x4bb1,	// (0x00069b2b) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x00074b9c) main_tv_pg_hdr_pane_g

0x4bbb,	// (0x00069b35) main_tv_pg_hdr_pane_t1

0x4bc9,	// (0x00069b43) main_tv_pg_hdr_pane_t2

0x4bd7,	// (0x00069b51) main_tv_pg_hdr_pane_t3

0x4be7,	// (0x00069b61) main_tv_pg_hdr_pane_t4

0x4bf7,	// (0x00069b71) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x00074bb3) main_tv_pg_hdr_pane_t

0x4c19,	// (0x00069b93) single_mobtv_pg_channel_pane_ParamLimits

0x4c19,	// (0x00069b93) single_mobtv_pg_channel_pane

0x4c2b,	// (0x00069ba5) single_mobtv_pg_channel_table_pane

0x4c34,	// (0x00069bae) single_mobtv_pg_channel_thumb_pane

0x4c3d,	// (0x00069bb7) single_tv_pg_channel_pane_g1

0x4c46,	// (0x00069bc0) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x00074bbe) single_tv_pg_channel_pane_g

0x2822,	// (0x0006779c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x2822,	// (0x0006779c) bg_single_mobtv_pg_channel_thumb_pane

0x4c4f,	// (0x00069bc9) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x4c4f,	// (0x00069bc9) single_mobtv_pg_channel_thumb_pane_g1

0x4c5d,	// (0x00069bd7) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x4c5d,	// (0x00069bd7) single_mobtv_pg_channel_thumb_pane_g2

0x4c69,	// (0x00069be3) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x4c69,	// (0x00069be3) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x00074bc3) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x00074bc3) single_mobtv_pg_channel_thumb_pane_g

0x4c75,	// (0x00069bef) single_mobtv_pg_channel_thumb_pane_t1

0x4c83,	// (0x00069bfd) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x00074bca) single_mobtv_pg_channel_thumb_pane_t

0x25bb,	// (0x00067535) bg_single_mobtv_pg_channel_table_pane_g1

0x25bb,	// (0x00067535) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x0007467a) bg_single_mobtv_pg_channel_table_pane_g

0x4c91,	// (0x00069c0b) single_mobtv_pg_channel_table_pane_t1

0x4c9f,	// (0x00069c19) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x00074bcf) single_mobtv_pg_channel_table_pane_t

0xd7c7,	// (0x00072741) main_mobtv_info_pane_g1_ParamLimits

0xd7c7,	// (0x00072741) main_mobtv_info_pane_g1

0xd7e3,	// (0x0007275d) main_mobtv_info_pane_t1_ParamLimits

0xd7e3,	// (0x0007275d) main_mobtv_info_pane_t1

0xd85b,	// (0x000727d5) main_mobtv_info_pane_t2_ParamLimits

0xd85b,	// (0x000727d5) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x00074bd9) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x00074bd9) main_mobtv_info_pane_t

0xd8ea,	// (0x00072864) wait_bar_pane_cp05

0xd8fc,	// (0x00072876) main_mobtv_loading_pane_g1_ParamLimits

0xd8fc,	// (0x00072876) main_mobtv_loading_pane_g1

0xd90a,	// (0x00072884) main_mobtv_loading_pane_g2_ParamLimits

0xd90a,	// (0x00072884) main_mobtv_loading_pane_g2

0xd916,	// (0x00072890) main_mobtv_loading_pane_g3_ParamLimits

0xd916,	// (0x00072890) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x00074be0) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x00074be0) main_mobtv_loading_pane_g

0x4cad,	// (0x00069c27) main_mobtv_loading_pane_t1_ParamLimits

0x4cad,	// (0x00069c27) main_mobtv_loading_pane_t1

0x4cc5,	// (0x00069c3f) main_mobtv_loading_pane_t2_ParamLimits

0x4cc5,	// (0x00069c3f) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x00074be7) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x00074be7) main_mobtv_loading_pane_t

0xd924,	// (0x0007289e) wait_bar_pane_cp06_ParamLimits

0xd924,	// (0x0007289e) wait_bar_pane_cp06

0x4ce9,	// (0x00069c63) main_mobtv_programe_curr_pane_t1

0x4cf7,	// (0x00069c71) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x00074bec) main_mobtv_programe_curr_pane_t

0x4d05,	// (0x00069c7f) main_mobtv_programe_next_pane_t1

0x4d13,	// (0x00069c8d) main_mobtv_programe_next_pane_t2

0x4d21,	// (0x00069c9b) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x00074bf1) main_mobtv_programe_next_pane_t

0x6f81,	// (0x0006befb) bg_popup_mobtv_noti_window_pane

0x4d2f,	// (0x00069ca9) popup_mobtv_noti_window_g1

0x4d37,	// (0x00069cb1) popup_mobtv_noti_window_t1

0x4d45,	// (0x00069cbf) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x00074bf8) popup_mobtv_noti_window_t

0x25bb,	// (0x00067535) bg_popup_mobtv_noti_window_pane_g1

0x6f81,	// (0x0006befb) sc_clock_pane

0x6f81,	// (0x0006befb) main_fs_bigclock_pane

0xd076,	// (0x00071ff0) blid2_tripm_pane_t4_ParamLimits

0xd076,	// (0x00071ff0) blid2_tripm_pane_t4

0xd930,	// (0x000728aa) sc_clock_pane_g1_ParamLimits

0xd930,	// (0x000728aa) sc_clock_pane_g1

0xd93e,	// (0x000728b8) sc_clock_pane_t1_ParamLimits

0xd93e,	// (0x000728b8) sc_clock_pane_t1

0xd951,	// (0x000728cb) sc_clock_pane_t2_ParamLimits

0xd951,	// (0x000728cb) sc_clock_pane_t2

0xd963,	// (0x000728dd) sc_clock_pane_t3_ParamLimits

0xd963,	// (0x000728dd) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x00074bfd) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x00074bfd) sc_clock_pane_t

0xe1cf,	// (0x00073149) main_fs_bigclock_indicator_pane_ParamLimits

0xe1cf,	// (0x00073149) main_fs_bigclock_indicator_pane

0xd9eb,	// (0x00072965) main_fs_bigclock_pane_g1_ParamLimits

0xd9eb,	// (0x00072965) main_fs_bigclock_pane_g1

0xe1db,	// (0x00073155) main_fs_bigclock_pane_t1_ParamLimits

0xe1db,	// (0x00073155) main_fs_bigclock_pane_t1

0xe1ed,	// (0x00073167) main_fs_bigclock_pane_t2_ParamLimits

0xe1ed,	// (0x00073167) main_fs_bigclock_pane_t2

0xe1ff,	// (0x00073179) main_fs_bigclock_pane_t3_ParamLimits

0xe1ff,	// (0x00073179) main_fs_bigclock_pane_t3

0x0002,

0xfe82,	// (0x00074dfc) main_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x00074dfc) main_fs_bigclock_pane_t

0x3655,	// (0x000685cf) main_fs_bigclock_indicator_pane_g1

0x4a07,	// (0x00069981) ncim_query_content_pane_g2_ParamLimits

0x4a07,	// (0x00069981) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x00074b8a) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x00074b8a) ncim_query_content_pane_g

0xd977,	// (0x000728f1) sc_clock_pane_t4_ParamLimits

0xd977,	// (0x000728f1) sc_clock_pane_t4

0xe963,	// (0x000738dd) main_radioblah_pane

0x3f88,	// (0x00068f02) cell_call4_button_pane_t1_copy1_ParamLimits

0x3f88,	// (0x00068f02) cell_call4_button_pane_t1_copy1

0xd619,	// (0x00072593) main_ncimui_pane_t1_ParamLimits

0xd619,	// (0x00072593) main_ncimui_pane_t1

0xd633,	// (0x000725ad) main_ncimui_pane_t2_ParamLimits

0xd633,	// (0x000725ad) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x00074b83) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x00074b83) main_ncimui_pane_t

0x4e75,	// (0x00069def) main_radioblah_anim_pane_ParamLimits

0x4e75,	// (0x00069def) main_radioblah_anim_pane

0x4e86,	// (0x00069e00) main_radioblah_info_pane_ParamLimits

0x4e86,	// (0x00069e00) main_radioblah_info_pane

0x4e9a,	// (0x00069e14) main_radioblah_pane_t1_ParamLimits

0x4e9a,	// (0x00069e14) main_radioblah_pane_t1

0x4eb6,	// (0x00069e30) main_radioblah_pane_t2_ParamLimits

0x4eb6,	// (0x00069e30) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x00074c1e) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x00074c1e) main_radioblah_pane_t

0xda3d,	// (0x000729b7) main_radioblah_rocker_ctrl_pane_ParamLimits

0xda3d,	// (0x000729b7) main_radioblah_rocker_ctrl_pane

0x4efe,	// (0x00069e78) main_radioblah_info_pane_t1_ParamLimits

0x4efe,	// (0x00069e78) main_radioblah_info_pane_t1

0xda82,	// (0x000729fc) main_radioblah_info_pane_t2_ParamLimits

0xda82,	// (0x000729fc) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x00074c27) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x00074c27) main_radioblah_info_pane_t

0x25bb,	// (0x00067535) main_radioblah_rocker_ctrl_pane_g1

0xdb32,	// (0x00072aac) main_radioblah_rocker_ctrl_pane_g2

0xdb3a,	// (0x00072ab4) main_radioblah_rocker_ctrl_pane_g3

0xdb42,	// (0x00072abc) main_radioblah_rocker_ctrl_pane_g4

0xdb4a,	// (0x00072ac4) main_radioblah_rocker_ctrl_pane_g5

0xdb52,	// (0x00072acc) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x00074c30) main_radioblah_rocker_ctrl_pane_g

0xd5cb,	// (0x00072545) main_cset_text2_pane_t1_copy1_ParamLimits

0xbe8b,	// (0x00070e05) cam4_image_uncrop_qvga_pane

0xbfd2,	// (0x00070f4c) vid4_image_uncrop_qcif_pane

0xd204,	// (0x0007217e) cam6_image_uncrop_qvga_pane_ParamLimits

0xd204,	// (0x0007217e) cam6_image_uncrop_qvga_pane

0x4717,	// (0x00069691) vid6_image_uncrop_qcif_pane_ParamLimits

0x4717,	// (0x00069691) vid6_image_uncrop_qcif_pane

0x6f81,	// (0x0006befb) bg_popup_preview_window_pane_cp03

0x49b9,	// (0x00069933) list_cset_text2_pane

0x49c1,	// (0x0006993b) main_cset6_text2_pane_g1

0x49c9,	// (0x00069943) main_cset6_text2_pane_t1

0xdb5a,	// (0x00072ad4) list_cset_text2_pane_t1_ParamLimits

0xdb5a,	// (0x00072ad4) list_cset_text2_pane_t1

0xe963,	// (0x000738dd) main_radioblah_pane_ParamLimits

0xd8d6,	// (0x00072850) main_mobtv_info_pane_t3_ParamLimits

0xd8d6,	// (0x00072850) main_mobtv_info_pane_t3

0xda2b,	// (0x000729a5) main_radioblah_pane_g1

0xda56,	// (0x000729d0) main_radioblah_info_pane_g1

0xdad7,	// (0x00072a51) main_radioblah_info_pane_t3_ParamLimits

0xdad7,	// (0x00072a51) main_radioblah_info_pane_t3

0x8cfe,	// (0x0006dc78) highlight_cell_cale_month_pane_ParamLimits

0x8cfe,	// (0x0006dc78) highlight_cell_cale_month_pane

0x6f81,	// (0x0006befb) main_phob_fisheye_pane

0x2904,	// (0x0006787e) scroll_pane_cp0031_ParamLimits

0x2904,	// (0x0006787e) scroll_pane_cp0031

0x4825,	// (0x0006979f) wait_bar_pane_cp08_ParamLimits

0xd3af,	// (0x00072329) cset_list_set_pane_copy1_ParamLimits

0x4f38,	// (0x00069eb2) highlight_cell_cale_month_pane_g1

0xdb85,	// (0x00072aff) highlight_cell_cale_month_pane_t1

0x44c8,	// (0x00069442) list_gen_pane_cp01

0x4151,	// (0x000690cb) scroll_pane_01

0xdb93,	// (0x00072b0d) list_single_double_fisheye_pane

0x6634,	// (0x0006b5ae) list_double_fisheye_pane_g1_ParamLimits

0x6634,	// (0x0006b5ae) list_double_fisheye_pane_g1

0xdb9c,	// (0x00072b16) list_double_fisheye_pane_g2_ParamLimits

0xdb9c,	// (0x00072b16) list_double_fisheye_pane_g2

0xdbb0,	// (0x00072b2a) list_double_fisheye_pane_g3_ParamLimits

0xdbb0,	// (0x00072b2a) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x00074c3d) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x00074c3d) list_double_fisheye_pane_g

0x664c,	// (0x0006b5c6) list_double_fisheye_pane_t1_ParamLimits

0x664c,	// (0x0006b5c6) list_double_fisheye_pane_t1

0x6667,	// (0x0006b5e1) list_double_fisheye_pane_t2_ParamLimits

0x6667,	// (0x0006b5e1) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x00074c48) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x00074c48) list_double_fisheye_pane_t

0x6f81,	// (0x0006befb) main_call5_pane

0xd99d,	// (0x00072917) sc_swipe_pane_ParamLimits

0xd99d,	// (0x00072917) sc_swipe_pane

0xdbd9,	// (0x00072b53) call5_image_pane_ParamLimits

0xdbd9,	// (0x00072b53) call5_image_pane

0xdbe9,	// (0x00072b63) call5_swipe_1_pane_ParamLimits

0xdbe9,	// (0x00072b63) call5_swipe_1_pane

0xdbf5,	// (0x00072b6f) call5_swipe_2_pane_ParamLimits

0xdbf5,	// (0x00072b6f) call5_swipe_2_pane

0xdc0f,	// (0x00072b89) popup_call5_audio_first_window_ParamLimits

0xdc0f,	// (0x00072b89) popup_call5_audio_first_window

0x2822,	// (0x0006779c) call5_swipe_1_pane_g1_ParamLimits

0x2822,	// (0x0006779c) call5_swipe_1_pane_g1

0x4f40,	// (0x00069eba) call5_swipe_1_pane_g2_ParamLimits

0x4f40,	// (0x00069eba) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x00074c4d) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x00074c4d) call5_swipe_1_pane_g

0x4f4c,	// (0x00069ec6) call5_swipe_1_pane_t1_ParamLimits

0x4f4c,	// (0x00069ec6) call5_swipe_1_pane_t1

0x2822,	// (0x0006779c) call5_swipe_2_pane_g1_ParamLimits

0x2822,	// (0x0006779c) call5_swipe_2_pane_g1

0x4f61,	// (0x00069edb) call5_swipe_2_pane_g2_ParamLimits

0x4f61,	// (0x00069edb) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x00074c52) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x00074c52) call5_swipe_2_pane_g

0x4f6d,	// (0x00069ee7) call5_swipe_2_pane_t1_ParamLimits

0x4f6d,	// (0x00069ee7) call5_swipe_2_pane_t1

0x4f82,	// (0x00069efc) sc_swipe_pane_g1_ParamLimits

0x4f82,	// (0x00069efc) sc_swipe_pane_g1

0x4f8f,	// (0x00069f09) sc_swipe_pane_g2_ParamLimits

0x4f8f,	// (0x00069f09) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x00074c57) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x00074c57) sc_swipe_pane_g

0x4f9b,	// (0x00069f15) sc_swipe_pane_t1_ParamLimits

0x4f9b,	// (0x00069f15) sc_swipe_pane_t1

0x6f81,	// (0x0006befb) main_cmail_launcher_pane

0xdc1d,	// (0x00072b97) aid_size_cell_cmail_l_ParamLimits

0xdc1d,	// (0x00072b97) aid_size_cell_cmail_l

0xdc2d,	// (0x00072ba7) grid_cmail_l_pane_ParamLimits

0xdc2d,	// (0x00072ba7) grid_cmail_l_pane

0xdc3d,	// (0x00072bb7) cell_cmail_l_pane_ParamLimits

0xdc3d,	// (0x00072bb7) cell_cmail_l_pane

0xdc51,	// (0x00072bcb) cell_cmail_l_pane_g1_ParamLimits

0xdc51,	// (0x00072bcb) cell_cmail_l_pane_g1

0xdc5d,	// (0x00072bd7) cell_cmail_l_pane_t1_ParamLimits

0xdc5d,	// (0x00072bd7) cell_cmail_l_pane_t1

0x4fb0,	// (0x00069f2a) cell_cmail_l_pane_t2_ParamLimits

0x4fb0,	// (0x00069f2a) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x00074c5c) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x00074c5c) cell_cmail_l_pane_t

0xe963,	// (0x000738dd) grid_highlight_pane_cp018_ParamLimits

0xe963,	// (0x000738dd) grid_highlight_pane_cp018

0x7098,	// (0x0006c012) main2_pane_ParamLimits

0x7098,	// (0x0006c012) main2_pane

0x00f9,	// (0x00065073) popup_sp_fs_action_menu_bg_pane_g1

0x0101,	// (0x0006507b) popup_sp_fs_action_menu_bg_pane_g2

0x0109,	// (0x00065083) popup_sp_fs_action_menu_bg_pane_g3

0x0111,	// (0x0006508b) popup_sp_fs_action_menu_bg_pane_g4

0x0119,	// (0x00065093) popup_sp_fs_action_menu_bg_pane_g5

0x0121,	// (0x0006509b) popup_sp_fs_action_menu_bg_pane_g6

0x0129,	// (0x000650a3) popup_sp_fs_action_menu_bg_pane_g7

0x0131,	// (0x000650ab) popup_sp_fs_action_menu_bg_pane_g8

0x0139,	// (0x000650b3) popup_sp_fs_action_menu_bg_pane_g9

0x0141,	// (0x000650bb) popup_sp_fs_action_menu_bg_pane_g10

0x0141,	// (0x000650bb) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00074126) popup_sp_fs_action_menu_bg_pane_g

0x5e81,	// (0x0006adfb) list_medium_line_x2_t3_g3_g1_ParamLimits

0x5e81,	// (0x0006adfb) list_medium_line_x2_t3_g3_g1

0x5e8d,	// (0x0006ae07) list_medium_line_x2_t3_g3_g2_ParamLimits

0x5e8d,	// (0x0006ae07) list_medium_line_x2_t3_g3_g2

0x5e99,	// (0x0006ae13) list_medium_line_x2_t3_g3_g3_ParamLimits

0x5e99,	// (0x0006ae13) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x000741d6) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x000741d6) list_medium_line_x2_t3_g3_g

0x5ea5,	// (0x0006ae1f) list_medium_line_x2_t3_g3_t1_ParamLimits

0x5ea5,	// (0x0006ae1f) list_medium_line_x2_t3_g3_t1

0x5eba,	// (0x0006ae34) list_medium_line_x2_t3_g3_t2_ParamLimits

0x5eba,	// (0x0006ae34) list_medium_line_x2_t3_g3_t2

0x5ecc,	// (0x0006ae46) list_medium_line_x2_t3_g3_t3_ParamLimits

0x5ecc,	// (0x0006ae46) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x000741dd) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x000741dd) list_medium_line_x2_t3_g3_t

0x5e81,	// (0x0006adfb) list_medium_line_x2_t3_g2_g1_ParamLimits

0x5e81,	// (0x0006adfb) list_medium_line_x2_t3_g2_g1

0x5e99,	// (0x0006ae13) list_medium_line_x2_t3_g2_g2_ParamLimits

0x5e99,	// (0x0006ae13) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x000741e4) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x000741e4) list_medium_line_x2_t3_g2_g

0x5ee1,	// (0x0006ae5b) list_medium_line_x2_t3_g2_t1_ParamLimits

0x5ee1,	// (0x0006ae5b) list_medium_line_x2_t3_g2_t1

0x5ef7,	// (0x0006ae71) list_medium_line_x2_t3_g2_t2_ParamLimits

0x5ef7,	// (0x0006ae71) list_medium_line_x2_t3_g2_t2

0x5f09,	// (0x0006ae83) list_medium_line_x2_t3_g2_t3_ParamLimits

0x5f09,	// (0x0006ae83) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x000741e9) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x000741e9) list_medium_line_x2_t3_g2_t

0x5e81,	// (0x0006adfb) list_medium_line_x2_t4_g4_g1_ParamLimits

0x5e81,	// (0x0006adfb) list_medium_line_x2_t4_g4_g1

0x5f27,	// (0x0006aea1) list_medium_line_x2_t4_g4_g2_ParamLimits

0x5f27,	// (0x0006aea1) list_medium_line_x2_t4_g4_g2

0x5e8d,	// (0x0006ae07) list_medium_line_x2_t4_g4_g3_ParamLimits

0x5e8d,	// (0x0006ae07) list_medium_line_x2_t4_g4_g3

0x5f33,	// (0x0006aead) list_medium_line_x2_t4_g4_g4_ParamLimits

0x5f33,	// (0x0006aead) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x000741f0) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x000741f0) list_medium_line_x2_t4_g4_g

0x5f3f,	// (0x0006aeb9) list_medium_line_x2_t4_g4_t1_ParamLimits

0x5f3f,	// (0x0006aeb9) list_medium_line_x2_t4_g4_t1

0x5f56,	// (0x0006aed0) list_medium_line_x2_t4_g4_t2_ParamLimits

0x5f56,	// (0x0006aed0) list_medium_line_x2_t4_g4_t2

0x5f6b,	// (0x0006aee5) list_medium_line_x2_t4_g4_t3_ParamLimits

0x5f6b,	// (0x0006aee5) list_medium_line_x2_t4_g4_t3

0x5f7d,	// (0x0006aef7) list_medium_line_x2_t4_g4_t4_ParamLimits

0x5f7d,	// (0x0006aef7) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x000741f9) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x000741f9) list_medium_line_x2_t4_g4_t

0x5e81,	// (0x0006adfb) list_medium_line_x2_t2_g4_g1_ParamLimits

0x5e81,	// (0x0006adfb) list_medium_line_x2_t2_g4_g1

0x5f27,	// (0x0006aea1) list_medium_line_x2_t2_g4_g2_ParamLimits

0x5f27,	// (0x0006aea1) list_medium_line_x2_t2_g4_g2

0x5e8d,	// (0x0006ae07) list_medium_line_x2_t2_g4_g3_ParamLimits

0x5e8d,	// (0x0006ae07) list_medium_line_x2_t2_g4_g3

0x5e99,	// (0x0006ae13) list_medium_line_x2_t2_g4_g4_ParamLimits

0x5e99,	// (0x0006ae13) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x00074260) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x00074260) list_medium_line_x2_t2_g4_g

0x5f8f,	// (0x0006af09) list_medium_line_x2_t2_g4_t1_ParamLimits

0x5f8f,	// (0x0006af09) list_medium_line_x2_t2_g4_t1

0x5ecc,	// (0x0006ae46) list_medium_line_x2_t2_g4_t2_ParamLimits

0x5ecc,	// (0x0006ae46) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x00074269) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x00074269) list_medium_line_x2_t2_g4_t

0x5e81,	// (0x0006adfb) list_medium_line_x2_t2_g3_g1_ParamLimits

0x5e81,	// (0x0006adfb) list_medium_line_x2_t2_g3_g1

0x5e8d,	// (0x0006ae07) list_medium_line_x2_t2_g3_g2_ParamLimits

0x5e8d,	// (0x0006ae07) list_medium_line_x2_t2_g3_g2

0x5e99,	// (0x0006ae13) list_medium_line_x2_t2_g3_g3_ParamLimits

0x5e99,	// (0x0006ae13) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x000741d6) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x000741d6) list_medium_line_x2_t2_g3_g

0x5fa4,	// (0x0006af1e) list_medium_line_x2_t2_g3_t1_ParamLimits

0x5fa4,	// (0x0006af1e) list_medium_line_x2_t2_g3_t1

0x5ecc,	// (0x0006ae46) list_medium_line_x2_t2_g3_t2_ParamLimits

0x5ecc,	// (0x0006ae46) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0007426e) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0007426e) list_medium_line_x2_t2_g3_t

0x8f7a,	// (0x0006def4) main_sp_fs_list_pane_ParamLimits

0x8f7a,	// (0x0006def4) main_sp_fs_list_pane

0x8f86,	// (0x0006df00) sp_fs_scroll_pane_ParamLimits

0x8f86,	// (0x0006df00) sp_fs_scroll_pane

0x5fb9,	// (0x0006af33) list_medium_line_x2_t3_t1

0x5fc9,	// (0x0006af43) list_medium_line_x2_t3_t2

0x5fd7,	// (0x0006af51) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x000742b9) list_medium_line_x2_t3_t

0x5fe5,	// (0x0006af5f) list_medium_line_x3_t4_t1

0x5ff5,	// (0x0006af6f) list_medium_line_x3_t4_t2

0x6003,	// (0x0006af7d) list_medium_line_x3_t4_t3

0x5fd7,	// (0x0006af51) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x000742c0) list_medium_line_x3_t4_t

0x6011,	// (0x0006af8b) list_medium_line_x4_t5_t1

0x6021,	// (0x0006af9b) list_medium_line_x4_t5_t2

0x6003,	// (0x0006af7d) list_medium_line_x4_t5_t3

0x602f,	// (0x0006afa9) list_medium_line_x4_t5_t4

0x5fd7,	// (0x0006af51) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x000742c9) list_medium_line_x4_t5_t

0x5e81,	// (0x0006adfb) list_medium_line_t4_g4_g1_ParamLimits

0x5e81,	// (0x0006adfb) list_medium_line_t4_g4_g1

0x5f33,	// (0x0006aead) list_medium_line_t4_g4_g2_ParamLimits

0x5f33,	// (0x0006aead) list_medium_line_t4_g4_g2

0x603d,	// (0x0006afb7) list_medium_line_t4_g4_g3_ParamLimits

0x603d,	// (0x0006afb7) list_medium_line_t4_g4_g3

0x5e99,	// (0x0006ae13) list_medium_line_t4_g4_g4_ParamLimits

0x5e99,	// (0x0006ae13) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x000742d4) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x000742d4) list_medium_line_t4_g4_g

0x6049,	// (0x0006afc3) list_medium_line_t4_g4_t1_ParamLimits

0x6049,	// (0x0006afc3) list_medium_line_t4_g4_t1

0x605e,	// (0x0006afd8) list_medium_line_t4_g4_t2_ParamLimits

0x605e,	// (0x0006afd8) list_medium_line_t4_g4_t2

0x6074,	// (0x0006afee) list_medium_line_t4_g4_t3_ParamLimits

0x6074,	// (0x0006afee) list_medium_line_t4_g4_t3

0x5ecc,	// (0x0006ae46) list_medium_line_t4_g4_t4_ParamLimits

0x5ecc,	// (0x0006ae46) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x000742dd) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x000742dd) list_medium_line_t4_g4_t

0x9079,	// (0x0006dff3) chi_dic_find_pane_g1

0x9fdb,	// (0x0006ef55) main_tport_pane

0x62d5,	// (0x0006b24f) list_medium_line_plain_t1

0x62e3,	// (0x0006b25d) list_medium_line_t2_g2_g1_ParamLimits

0x62e3,	// (0x0006b25d) list_medium_line_t2_g2_g1

0x62ef,	// (0x0006b269) list_medium_line_t2_g2_g2_ParamLimits

0x62ef,	// (0x0006b269) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x00074999) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x00074999) list_medium_line_t2_g2_g

0x62fb,	// (0x0006b275) list_medium_line_t2_g2_t1_ParamLimits

0x62fb,	// (0x0006b275) list_medium_line_t2_g2_t1

0x6315,	// (0x0006b28f) list_medium_line_t2_g2_t2_ParamLimits

0x6315,	// (0x0006b28f) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x0007499e) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x0007499e) list_medium_line_t2_g2_t

0x6523,	// (0x0006b49d) aid_sp_fs_list_icon_a_sm

0xcee6,	// (0x00071e60) aid_sp_fs_list_icon_d

0x36f9,	// (0x00068673) aid_sp_fs_text_primary

0x652b,	// (0x0006b4a5) aid_sp_fs_text_secondary

0x6534,	// (0x0006b4ae) list_medium_line

0x6534,	// (0x0006b4ae) list_medium_line_g2

0x6534,	// (0x0006b4ae) list_medium_line_g3

0x6534,	// (0x0006b4ae) list_medium_line_plain

0x6534,	// (0x0006b4ae) list_medium_line_plain_t2

0x6534,	// (0x0006b4ae) list_medium_line_plain_t3

0x6534,	// (0x0006b4ae) list_medium_line_right_icon

0x6534,	// (0x0006b4ae) list_medium_line_right_iconx2

0x6534,	// (0x0006b4ae) list_medium_line_t2

0x6534,	// (0x0006b4ae) list_medium_line_t2_g2

0x6534,	// (0x0006b4ae) list_medium_line_t2_g3

0x6534,	// (0x0006b4ae) list_medium_line_t2_right_icon

0x6534,	// (0x0006b4ae) list_medium_line_t2_right_iconx2

0x6534,	// (0x0006b4ae) list_medium_line_t3

0x6534,	// (0x0006b4ae) list_medium_line_t3_g2

0x6534,	// (0x0006b4ae) list_medium_line_t3_g3

0x6534,	// (0x0006b4ae) list_medium_line_t3_right_iconx2

0x653d,	// (0x0006b4b7) list_medium_line_t4_g4

0xe92a,	// (0x000738a4) list_medium_line_x2

0xe92a,	// (0x000738a4) list_medium_line_x2_t2_g2

0xe92a,	// (0x000738a4) list_medium_line_x2_t2_g3

0xe92a,	// (0x000738a4) list_medium_line_x2_t2_g4

0xe92a,	// (0x000738a4) list_medium_line_x2_t3

0xe92a,	// (0x000738a4) list_medium_line_x2_t3_g2

0xe92a,	// (0x000738a4) list_medium_line_x2_t3_g3

0xe92a,	// (0x000738a4) list_medium_line_x2_t3_g4

0xe92a,	// (0x000738a4) list_medium_line_x2_t4_g2

0xe92a,	// (0x000738a4) list_medium_line_x2_t4_g4

0x6546,	// (0x0006b4c0) list_medium_line_x3

0x6546,	// (0x0006b4c0) list_medium_line_x3_t4

0x6546,	// (0x0006b4c0) list_medium_line_x3_t4_g4

0x653d,	// (0x0006b4b7) list_medium_line_x4_t4

0x653d,	// (0x0006b4b7) list_medium_line_x4_t4_g7

0x653d,	// (0x0006b4b7) list_medium_line_x4_t5

0x654f,	// (0x0006b4c9) list_single_fs_dyc_pane_ParamLimits

0x654f,	// (0x0006b4c9) list_single_fs_dyc_pane

0x5e81,	// (0x0006adfb) list_medium_line_x4_t4_g7_g1_ParamLimits

0x5e81,	// (0x0006adfb) list_medium_line_x4_t4_g7_g1

0x6563,	// (0x0006b4dd) list_medium_line_x4_t4_g7_g2_ParamLimits

0x6563,	// (0x0006b4dd) list_medium_line_x4_t4_g7_g2

0x656f,	// (0x0006b4e9) list_medium_line_x4_t4_g7_g3_ParamLimits

0x656f,	// (0x0006b4e9) list_medium_line_x4_t4_g7_g3

0x657e,	// (0x0006b4f8) list_medium_line_x4_t4_g7_g4_ParamLimits

0x657e,	// (0x0006b4f8) list_medium_line_x4_t4_g7_g4

0x658a,	// (0x0006b504) list_medium_line_x4_t4_g7_g5_ParamLimits

0x658a,	// (0x0006b504) list_medium_line_x4_t4_g7_g5

0x6599,	// (0x0006b513) list_medium_line_x4_t4_g7_g6_ParamLimits

0x6599,	// (0x0006b513) list_medium_line_x4_t4_g7_g6

0x65a8,	// (0x0006b522) list_medium_line_x4_t4_g7_g7_ParamLimits

0x65a8,	// (0x0006b522) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x00074b69) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x00074b69) list_medium_line_x4_t4_g7_g

0x65b4,	// (0x0006b52e) list_medium_line_x4_t4_g7_t1_ParamLimits

0x65b4,	// (0x0006b52e) list_medium_line_x4_t4_g7_t1

0x65c9,	// (0x0006b543) list_medium_line_x4_t4_g7_t2_ParamLimits

0x65c9,	// (0x0006b543) list_medium_line_x4_t4_g7_t2

0x65de,	// (0x0006b558) list_medium_line_x4_t4_g7_t3_ParamLimits

0x65de,	// (0x0006b558) list_medium_line_x4_t4_g7_t3

0x65f3,	// (0x0006b56d) list_medium_line_x4_t4_g7_t4_ParamLimits

0x65f3,	// (0x0006b56d) list_medium_line_x4_t4_g7_t4

0x6605,	// (0x0006b57f) list_medium_line_x4_t4_g7_t5_ParamLimits

0x6605,	// (0x0006b57f) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x00074b78) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x00074b78) list_medium_line_x4_t4_g7_t

0x6617,	// (0x0006b591) list_single_dyc_row_pane_ParamLimits

0x6617,	// (0x0006b591) list_single_dyc_row_pane

0xdbcd,	// (0x00072b47) call5_gesture_pane_ParamLimits

0xdbcd,	// (0x00072b47) call5_gesture_pane

0xdc01,	// (0x00072b7b) call5_windows_pane_ParamLimits

0xdc01,	// (0x00072b7b) call5_windows_pane

0xdc73,	// (0x00072bed) call5_swipe_1_pane_cp_ParamLimits

0xdc73,	// (0x00072bed) call5_swipe_1_pane_cp

0xdc7f,	// (0x00072bf9) call5_swipe_2_pane_cp_ParamLimits

0xdc7f,	// (0x00072bf9) call5_swipe_2_pane_cp

0x0c4a,	// (0x00065bc4) call5_image_pane_cp

0xdc8b,	// (0x00072c05) popup_call5_audio_first_window_cp_ParamLimits

0xdc8b,	// (0x00072c05) popup_call5_audio_first_window_cp

0x4f82,	// (0x00069efc) call5_swipe_1_pane_g1_cp_ParamLimits

0x4f82,	// (0x00069efc) call5_swipe_1_pane_g1_cp

0x4fc2,	// (0x00069f3c) call5_swipe_1_pane_g2_cp

0x4f9b,	// (0x00069f15) call5_swipe_1_pane_t1_cp_ParamLimits

0x4f9b,	// (0x00069f15) call5_swipe_1_pane_t1_cp

0x4f82,	// (0x00069efc) call5_swipe_2_pane_g1_cp_ParamLimits

0x4f82,	// (0x00069efc) call5_swipe_2_pane_g1_cp

0x4fca,	// (0x00069f44) call5_swipe_2_pane_g2_cp

0x4fd2,	// (0x00069f4c) call5_swipe_2_pane_t1_cp_ParamLimits

0x4fd2,	// (0x00069f4c) call5_swipe_2_pane_t1_cp

0xe963,	// (0x000738dd) main_sp_fs_email_pane

0x4fe7,	// (0x00069f61) main_sp_fs_listscroll_pane_te

0x6689,	// (0x0006b603) popup_sp_fs_action_menu_pane_ParamLimits

0x6689,	// (0x0006b603) popup_sp_fs_action_menu_pane

0x25bb,	// (0x00067535) bg_sp_fs_ctrlbar_pane_g1

0x4ff0,	// (0x00069f6a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x4ff9,	// (0x00069f73) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x5002,	// (0x00069f7c) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x25bb,	// (0x00067535) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x00074c61) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x239e,	// (0x00067318) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x239e,	// (0x00067318) bg_sp_fs_ctrlbar_ddmenu_pane

0x500b,	// (0x00069f85) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x500b,	// (0x00069f85) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x5017,	// (0x00069f91) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x5017,	// (0x00069f91) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x00074c6a) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x00074c6a) main_sp_fs_ctrlbar_ddmenu_pane_g

0x5023,	// (0x00069f9d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x5023,	// (0x00069f9d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x66cb,	// (0x0006b645) list_medium_line_t2_right_icon_g1

0x66d3,	// (0x0006b64d) list_medium_line_t2_right_icon_t1

0x66e3,	// (0x0006b65d) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x00074c6f) list_medium_line_t2_right_icon_t

0x20b3,	// (0x0006702d) bg_sp_fs_ctrlbar_pane_ParamLimits

0x20b3,	// (0x0006702d) bg_sp_fs_ctrlbar_pane

0xdcee,	// (0x00072c68) main_sp_fs_ctrlbar_button_pane_cp01

0xdcf6,	// (0x00072c70) main_sp_fs_ctrlbar_ddmenu_pane

0x2e3a,	// (0x00067db4) main_sp_fs_ctrlbar_pane_g1

0x5075,	// (0x00069fef) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x00074c74) main_sp_fs_ctrlbar_pane_g

0x5081,	// (0x00069ffb) main_sp_fs_ctrlbar_pane_t1

0x66f1,	// (0x0006b66b) main_sp_fs_ctrlbar_pane

0x670d,	// (0x0006b687) main_sp_fs_listscroll_pane_te_cp01

0x671e,	// (0x0006b698) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x671e,	// (0x0006b698) popup_sp_fs_action_menu_pane_cp01

0xe963,	// (0x000738dd) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe963,	// (0x000738dd) bg_sp_fs_highlight_list_pane_cp01

0x6736,	// (0x0006b6b0) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x6736,	// (0x0006b6b0) sp_fs_action_menu_list_gene_pane_g1

0x5096,	// (0x0006a010) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x5096,	// (0x0006a010) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x00074c79) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x00074c79) sp_fs_action_menu_list_gene_pane_g

0x6745,	// (0x0006b6bf) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x6745,	// (0x0006b6bf) sp_fs_action_menu_list_gene_pane_t1

0x675d,	// (0x0006b6d7) sp_fs_action_menu_list_gene_pane_ParamLimits

0x675d,	// (0x0006b6d7) sp_fs_action_menu_list_gene_pane

0x50a3,	// (0x0006a01d) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x50a3,	// (0x0006a01d) popup_sp_fs_action_menu_bg_pane

0x677c,	// (0x0006b6f6) sp_fs_action_menu_list_pane_ParamLimits

0x677c,	// (0x0006b6f6) sp_fs_action_menu_list_pane

0x50b1,	// (0x0006a02b) sp_fs_scroll_pane_cp01_ParamLimits

0x50b1,	// (0x0006a02b) sp_fs_scroll_pane_cp01

0x679c,	// (0x0006b716) list_medium_line_plain_t2_t1

0x67ac,	// (0x0006b726) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x00074c7e) list_medium_line_plain_t2_t

0x67ba,	// (0x0006b734) list_medium_line_plain_t3_t1

0x67ca,	// (0x0006b744) list_medium_line_plain_t3_t2

0x67d8,	// (0x0006b752) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x00074c83) list_medium_line_plain_t3_t

0x5e81,	// (0x0006adfb) list_medium_line_x2_t2_g2_g1_ParamLimits

0x5e81,	// (0x0006adfb) list_medium_line_x2_t2_g2_g1

0x5e99,	// (0x0006ae13) list_medium_line_x2_t2_g2_g2_ParamLimits

0x5e99,	// (0x0006ae13) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x000741e4) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x000741e4) list_medium_line_x2_t2_g2_g

0x6049,	// (0x0006afc3) list_medium_line_x2_t2_g2_t1_ParamLimits

0x6049,	// (0x0006afc3) list_medium_line_x2_t2_g2_t1

0x5ecc,	// (0x0006ae46) list_medium_line_x2_t2_g2_t2_ParamLimits

0x5ecc,	// (0x0006ae46) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x00074c8a) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x00074c8a) list_medium_line_x2_t2_g2_t

0x5e81,	// (0x0006adfb) list_medium_line_x2_t4_g2_g1_ParamLimits

0x5e81,	// (0x0006adfb) list_medium_line_x2_t4_g2_g1

0x67e6,	// (0x0006b760) list_medium_line_x2_t4_g2_g2_ParamLimits

0x67e6,	// (0x0006b760) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd15,	// (0x00074c8f) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd15,	// (0x00074c8f) list_medium_line_x2_t4_g2_g

0x67f8,	// (0x0006b772) list_medium_line_x2_t4_g2_t1_ParamLimits

0x67f8,	// (0x0006b772) list_medium_line_x2_t4_g2_t1

0x680f,	// (0x0006b789) list_medium_line_x2_t4_g2_t2_ParamLimits

0x680f,	// (0x0006b789) list_medium_line_x2_t4_g2_t2

0x6824,	// (0x0006b79e) list_medium_line_x2_t4_g2_t3_ParamLimits

0x6824,	// (0x0006b79e) list_medium_line_x2_t4_g2_t3

0x5ecc,	// (0x0006ae46) list_medium_line_x2_t4_g2_t4_ParamLimits

0x5ecc,	// (0x0006ae46) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1a,	// (0x00074c94) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1a,	// (0x00074c94) list_medium_line_x2_t4_g2_t

0x6836,	// (0x0006b7b0) list_medium_line_t3_right_iconx2_g1

0x66cb,	// (0x0006b645) list_medium_line_t3_right_iconx2_g2

0x683e,	// (0x0006b7b8) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd23,	// (0x00074c9d) list_medium_line_t3_right_iconx2_g

0x6846,	// (0x0006b7c0) list_medium_line_t3_right_iconx2_t1

0x6856,	// (0x0006b7d0) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2a,	// (0x00074ca4) list_medium_line_t3_right_iconx2_t

0x5e81,	// (0x0006adfb) list_medium_line_x3_t4_g4_g1_ParamLimits

0x5e81,	// (0x0006adfb) list_medium_line_x3_t4_g4_g1

0x5e8d,	// (0x0006ae07) list_medium_line_x3_t4_g4_g2_ParamLimits

0x5e8d,	// (0x0006ae07) list_medium_line_x3_t4_g4_g2

0x5f33,	// (0x0006aead) list_medium_line_x3_t4_g4_g3_ParamLimits

0x5f33,	// (0x0006aead) list_medium_line_x3_t4_g4_g3

0x6864,	// (0x0006b7de) list_medium_line_x3_t4_g4_g4_ParamLimits

0x6864,	// (0x0006b7de) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2f,	// (0x00074ca9) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2f,	// (0x00074ca9) list_medium_line_x3_t4_g4_g

0x6870,	// (0x0006b7ea) list_medium_line_x3_t4_g4_t1_ParamLimits

0x6870,	// (0x0006b7ea) list_medium_line_x3_t4_g4_t1

0x6887,	// (0x0006b801) list_medium_line_x3_t4_g4_t2_ParamLimits

0x6887,	// (0x0006b801) list_medium_line_x3_t4_g4_t2

0x689c,	// (0x0006b816) list_medium_line_x3_t4_g4_t3_ParamLimits

0x689c,	// (0x0006b816) list_medium_line_x3_t4_g4_t3

0x68b1,	// (0x0006b82b) list_medium_line_x3_t4_g4_t4_ParamLimits

0x68b1,	// (0x0006b82b) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd38,	// (0x00074cb2) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd38,	// (0x00074cb2) list_medium_line_x3_t4_g4_t

0x68ce,	// (0x0006b848) list_single_dyc_row_text_pane_t1_ParamLimits

0x68ce,	// (0x0006b848) list_single_dyc_row_text_pane_t1

0x6905,	// (0x0006b87f) list_single_dyc_row_text_pane_t2_ParamLimits

0x6905,	// (0x0006b87f) list_single_dyc_row_text_pane_t2

0x695f,	// (0x0006b8d9) list_single_dyc_row_text_pane_t3_ParamLimits

0x695f,	// (0x0006b8d9) list_single_dyc_row_text_pane_t3

0x0002,

0xfd41,	// (0x00074cbb) list_single_dyc_row_text_pane_t_ParamLimits

0xfd41,	// (0x00074cbb) list_single_dyc_row_text_pane_t

0x6971,	// (0x0006b8eb) list_single_dyc_row_pane_g1_ParamLimits

0x6971,	// (0x0006b8eb) list_single_dyc_row_pane_g1

0x697d,	// (0x0006b8f7) list_single_dyc_row_pane_g2_ParamLimits

0x697d,	// (0x0006b8f7) list_single_dyc_row_pane_g2

0x6989,	// (0x0006b903) list_single_dyc_row_pane_g3_ParamLimits

0x6989,	// (0x0006b903) list_single_dyc_row_pane_g3

0x6995,	// (0x0006b90f) list_single_dyc_row_pane_g4_ParamLimits

0x6995,	// (0x0006b90f) list_single_dyc_row_pane_g4

0x0003,

0xfd48,	// (0x00074cc2) list_single_dyc_row_pane_g_ParamLimits

0xfd48,	// (0x00074cc2) list_single_dyc_row_pane_g

0x69a1,	// (0x0006b91b) list_single_dyc_row_text_pane_ParamLimits

0x69a1,	// (0x0006b91b) list_single_dyc_row_text_pane

0x6f81,	// (0x0006befb) bg_sp_fs_scroll_pane

0x2f4c,	// (0x00067ec6) thumb_sp_fs_scroll_pane

0x62e3,	// (0x0006b25d) list_medium_line_g1_ParamLimits

0x62e3,	// (0x0006b25d) list_medium_line_g1

0x69c0,	// (0x0006b93a) list_medium_line_t1_ParamLimits

0x69c0,	// (0x0006b93a) list_medium_line_t1

0x5e81,	// (0x0006adfb) list_medium_line_x2_g1_ParamLimits

0x5e81,	// (0x0006adfb) list_medium_line_x2_g1

0x5e8d,	// (0x0006ae07) list_medium_line_x2_g2_ParamLimits

0x5e8d,	// (0x0006ae07) list_medium_line_x2_g2

0x0001,

0xfd51,	// (0x00074ccb) list_medium_line_x2_g_ParamLimits

0xfd51,	// (0x00074ccb) list_medium_line_x2_g

0x69d5,	// (0x0006b94f) list_medium_line_x2_t1_ParamLimits

0x69d5,	// (0x0006b94f) list_medium_line_x2_t1

0x5e81,	// (0x0006adfb) list_medium_line_x3_g1_ParamLimits

0x5e81,	// (0x0006adfb) list_medium_line_x3_g1

0x5e8d,	// (0x0006ae07) list_medium_line_x3_g2_ParamLimits

0x5e8d,	// (0x0006ae07) list_medium_line_x3_g2

0x0001,

0xfd51,	// (0x00074ccb) list_medium_line_x3_g_ParamLimits

0xfd51,	// (0x00074ccb) list_medium_line_x3_g

0x69d5,	// (0x0006b94f) list_medium_line_x3_t1_ParamLimits

0x69d5,	// (0x0006b94f) list_medium_line_x3_t1

0x2f80,	// (0x00067efa) thumb_sp_fs_scroll_pane_g1

0x2f89,	// (0x00067f03) thumb_sp_fs_scroll_pane_g2

0x2f92,	// (0x00067f0c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x00074cd0) thumb_sp_fs_scroll_pane_g

0x2f80,	// (0x00067efa) bg_sp_fs_scroll_pane_g1

0x2f89,	// (0x00067f03) bg_sp_fs_scroll_pane_g2

0x2f92,	// (0x00067f0c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x00074cd0) bg_sp_fs_scroll_pane_g

0x5e81,	// (0x0006adfb) list_medium_line_x2_t3_g4_g1_ParamLimits

0x5e81,	// (0x0006adfb) list_medium_line_x2_t3_g4_g1

0x5f27,	// (0x0006aea1) list_medium_line_x2_t3_g4_g2_ParamLimits

0x5f27,	// (0x0006aea1) list_medium_line_x2_t3_g4_g2

0x5e8d,	// (0x0006ae07) list_medium_line_x2_t3_g4_g3_ParamLimits

0x5e8d,	// (0x0006ae07) list_medium_line_x2_t3_g4_g3

0x5e99,	// (0x0006ae13) list_medium_line_x2_t3_g4_g4_ParamLimits

0x5e99,	// (0x0006ae13) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x00074260) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x00074260) list_medium_line_x2_t3_g4_g

0x69eb,	// (0x0006b965) list_medium_line_x2_t3_g4_t1_ParamLimits

0x69eb,	// (0x0006b965) list_medium_line_x2_t3_g4_t1

0x6a01,	// (0x0006b97b) list_medium_line_x2_t3_g4_t2_ParamLimits

0x6a01,	// (0x0006b97b) list_medium_line_x2_t3_g4_t2

0x5ecc,	// (0x0006ae46) list_medium_line_x2_t3_g4_t3_ParamLimits

0x5ecc,	// (0x0006ae46) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5d,	// (0x00074cd7) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5d,	// (0x00074cd7) list_medium_line_x2_t3_g4_t

0x62e3,	// (0x0006b25d) list_medium_line_g2_g1_ParamLimits

0x62e3,	// (0x0006b25d) list_medium_line_g2_g1

0x62ef,	// (0x0006b269) list_medium_line_g2_g2_ParamLimits

0x62ef,	// (0x0006b269) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x00074999) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x00074999) list_medium_line_g2_g

0x6a1a,	// (0x0006b994) list_medium_line_g2_t1_ParamLimits

0x6a1a,	// (0x0006b994) list_medium_line_g2_t1

0x62e3,	// (0x0006b25d) list_medium_line_t3_g2_g1_ParamLimits

0x62e3,	// (0x0006b25d) list_medium_line_t3_g2_g1

0x62ef,	// (0x0006b269) list_medium_line_t3_g2_g2_ParamLimits

0x62ef,	// (0x0006b269) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x00074999) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x00074999) list_medium_line_t3_g2_g

0x6a2f,	// (0x0006b9a9) list_medium_line_t3_g2_t1_ParamLimits

0x6a2f,	// (0x0006b9a9) list_medium_line_t3_g2_t1

0x6a49,	// (0x0006b9c3) list_medium_line_t3_g2_t2_ParamLimits

0x6a49,	// (0x0006b9c3) list_medium_line_t3_g2_t2

0x6a5e,	// (0x0006b9d8) list_medium_line_t3_g2_t3_ParamLimits

0x6a5e,	// (0x0006b9d8) list_medium_line_t3_g2_t3

0x0002,

0xfd64,	// (0x00074cde) list_medium_line_t3_g2_t_ParamLimits

0xfd64,	// (0x00074cde) list_medium_line_t3_g2_t

0x66cb,	// (0x0006b645) list_medium_line_right_icon_g1

0x6a74,	// (0x0006b9ee) list_medium_line_right_icon_t1

0x62e3,	// (0x0006b25d) list_medium_line_t2_g1_ParamLimits

0x62e3,	// (0x0006b25d) list_medium_line_t2_g1

0x6a82,	// (0x0006b9fc) list_medium_line_t2_t1_ParamLimits

0x6a82,	// (0x0006b9fc) list_medium_line_t2_t1

0x6a9c,	// (0x0006ba16) list_medium_line_t2_t2_ParamLimits

0x6a9c,	// (0x0006ba16) list_medium_line_t2_t2

0x0001,

0xfd6b,	// (0x00074ce5) list_medium_line_t2_t_ParamLimits

0xfd6b,	// (0x00074ce5) list_medium_line_t2_t

0x62e3,	// (0x0006b25d) list_medium_line_t3_g1_ParamLimits

0x62e3,	// (0x0006b25d) list_medium_line_t3_g1

0x6ab1,	// (0x0006ba2b) list_medium_line_t3_t1_ParamLimits

0x6ab1,	// (0x0006ba2b) list_medium_line_t3_t1

0x6ac8,	// (0x0006ba42) list_medium_line_t3_t2_ParamLimits

0x6ac8,	// (0x0006ba42) list_medium_line_t3_t2

0x6add,	// (0x0006ba57) list_medium_line_t3_t3_ParamLimits

0x6add,	// (0x0006ba57) list_medium_line_t3_t3

0x0002,

0xfd70,	// (0x00074cea) list_medium_line_t3_t_ParamLimits

0xfd70,	// (0x00074cea) list_medium_line_t3_t

0x62e3,	// (0x0006b25d) list_medium_line_g3_g1_ParamLimits

0x62e3,	// (0x0006b25d) list_medium_line_g3_g1

0x6aef,	// (0x0006ba69) list_medium_line_g3_g2_ParamLimits

0x6aef,	// (0x0006ba69) list_medium_line_g3_g2

0x62ef,	// (0x0006b269) list_medium_line_g3_g3_ParamLimits

0x62ef,	// (0x0006b269) list_medium_line_g3_g3

0x0002,

0xfd77,	// (0x00074cf1) list_medium_line_g3_g_ParamLimits

0xfd77,	// (0x00074cf1) list_medium_line_g3_g

0x6afb,	// (0x0006ba75) list_medium_line_g3_t1_ParamLimits

0x6afb,	// (0x0006ba75) list_medium_line_g3_t1

0x62e3,	// (0x0006b25d) list_medium_line_t2_g3_g1_ParamLimits

0x62e3,	// (0x0006b25d) list_medium_line_t2_g3_g1

0x6aef,	// (0x0006ba69) list_medium_line_t2_g3_g2_ParamLimits

0x6aef,	// (0x0006ba69) list_medium_line_t2_g3_g2

0x62ef,	// (0x0006b269) list_medium_line_t2_g3_g3_ParamLimits

0x62ef,	// (0x0006b269) list_medium_line_t2_g3_g3

0x0002,

0xfd77,	// (0x00074cf1) list_medium_line_t2_g3_g_ParamLimits

0xfd77,	// (0x00074cf1) list_medium_line_t2_g3_g

0x6b10,	// (0x0006ba8a) list_medium_line_t2_g3_t1_ParamLimits

0x6b10,	// (0x0006ba8a) list_medium_line_t2_g3_t1

0x6b27,	// (0x0006baa1) list_medium_line_t2_g3_t2_ParamLimits

0x6b27,	// (0x0006baa1) list_medium_line_t2_g3_t2

0x0001,

0xfd7e,	// (0x00074cf8) list_medium_line_t2_g3_t_ParamLimits

0xfd7e,	// (0x00074cf8) list_medium_line_t2_g3_t

0x62e3,	// (0x0006b25d) list_medium_line_t3_g3_g1_ParamLimits

0x62e3,	// (0x0006b25d) list_medium_line_t3_g3_g1

0x6aef,	// (0x0006ba69) list_medium_line_t3_g3_g2_ParamLimits

0x6aef,	// (0x0006ba69) list_medium_line_t3_g3_g2

0x62ef,	// (0x0006b269) list_medium_line_t3_g3_g3_ParamLimits

0x62ef,	// (0x0006b269) list_medium_line_t3_g3_g3

0x0002,

0xfd77,	// (0x00074cf1) list_medium_line_t3_g3_g_ParamLimits

0xfd77,	// (0x00074cf1) list_medium_line_t3_g3_g

0x6b3c,	// (0x0006bab6) list_medium_line_t3_g3_t1_ParamLimits

0x6b3c,	// (0x0006bab6) list_medium_line_t3_g3_t1

0x6b50,	// (0x0006baca) list_medium_line_t3_g3_t2_ParamLimits

0x6b50,	// (0x0006baca) list_medium_line_t3_g3_t2

0x6b62,	// (0x0006badc) list_medium_line_t3_g3_t3_ParamLimits

0x6b62,	// (0x0006badc) list_medium_line_t3_g3_t3

0x0002,

0xfd83,	// (0x00074cfd) list_medium_line_t3_g3_t_ParamLimits

0xfd83,	// (0x00074cfd) list_medium_line_t3_g3_t

0x6836,	// (0x0006b7b0) list_medium_line_right_iconx2_g1

0x66cb,	// (0x0006b645) list_medium_line_right_iconx2_g2

0x0001,

0xfd8a,	// (0x00074d04) list_medium_line_right_iconx2_g

0x6b74,	// (0x0006baee) list_medium_line_right_iconx2_t1

0x6836,	// (0x0006b7b0) list_medium_line_t2_right_iconx2_g1

0x66cb,	// (0x0006b645) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8a,	// (0x00074d04) list_medium_line_t2_right_iconx2_g

0x6b82,	// (0x0006bafc) list_medium_line_t2_right_iconx2_t1

0x6b92,	// (0x0006bb0c) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8f,	// (0x00074d09) list_medium_line_t2_right_iconx2_t

0x6ba0,	// (0x0006bb1a) list_medium_line_x4_t4_t1

0x6bae,	// (0x0006bb28) list_medium_line_x4_t4_t2

0x6bbe,	// (0x0006bb38) list_medium_line_x4_t4_t3

0x6bce,	// (0x0006bb48) list_medium_line_x4_t4_t4

0x0003,

0xfd94,	// (0x00074d0e) list_medium_line_x4_t4_t

0xdd29,	// (0x00072ca3) tport_appsw_pane_ParamLimits

0xdd29,	// (0x00072ca3) tport_appsw_pane

0xdd35,	// (0x00072caf) tport_contact_pane_ParamLimits

0xdd35,	// (0x00072caf) tport_contact_pane

0xdd45,	// (0x00072cbf) tport_listscroll_pane_ParamLimits

0xdd45,	// (0x00072cbf) tport_listscroll_pane

0xdd55,	// (0x00072ccf) cell_tport_appsw_pane_ParamLimits

0xdd55,	// (0x00072ccf) cell_tport_appsw_pane

0x2887,	// (0x00067801) tport_appsw_pane_g1_ParamLimits

0x2887,	// (0x00067801) tport_appsw_pane_g1

0x2ffb,	// (0x00067f75) tport_contact_pane_g1

0x3004,	// (0x00067f7e) tport_contact_pane_t1

0x3012,	// (0x00067f8c) tport_contact_pane_t2

0x0001,

0xfd9d,	// (0x00074d17) tport_contact_pane_t

0x3020,	// (0x00067f9a) list_tport_pane

0x3029,	// (0x00067fa3) scroll_pane_cp_030

0x303a,	// (0x00067fb4) cell_tport_appsw_pane_g1

0x304a,	// (0x00067fc4) cell_tport_appsw_pane_t1

0x6f81,	// (0x0006befb) grid_highlight_pane_cp019

0xdd80,	// (0x00072cfa) list_tport_double_graphic_pane_ParamLimits

0xdd80,	// (0x00072cfa) list_tport_double_graphic_pane

0xe963,	// (0x000738dd) list_highlight_pane_cp023_ParamLimits

0xe963,	// (0x000738dd) list_highlight_pane_cp023

0xdd93,	// (0x00072d0d) list_tport_double_graphic_pane_g1_ParamLimits

0xdd93,	// (0x00072d0d) list_tport_double_graphic_pane_g1

0xdda0,	// (0x00072d1a) list_tport_double_graphic_pane_t1_ParamLimits

0xdda0,	// (0x00072d1a) list_tport_double_graphic_pane_t1

0xddb5,	// (0x00072d2f) list_tport_double_graphic_pane_t2_ParamLimits

0xddb5,	// (0x00072d2f) list_tport_double_graphic_pane_t2

0x0001,

0xfda9,	// (0x00074d23) list_tport_double_graphic_pane_t_ParamLimits

0xfda9,	// (0x00074d23) list_tport_double_graphic_pane_t

0x6f81,	// (0x0006befb) main_cale_note_pane

0xc20f,	// (0x00071189) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xc20f,	// (0x00071189) cell_vitu2_function_top_wide_pane_cp01

0xd8ea,	// (0x00072864) wait_bar_pane_cp05_ParamLimits

0x6f81,	// (0x0006befb) listscroll_cmail_pane

0x3060,	// (0x00067fda) list_cmail_pane

0xddd1,	// (0x00072d4b) list_cmail_body_pane

0xddf5,	// (0x00072d6f) list_single_cmail_header_caption_pane

0xde23,	// (0x00072d9d) list_single_cmail_header_detail_pane_ParamLimits

0xde23,	// (0x00072d9d) list_single_cmail_header_detail_pane

0xde5b,	// (0x00072dd5) list_single_cmail_header_caption_pane_t1

0x6bde,	// (0x0006bb58) list_single_cmail_header_detail_pane_g1_ParamLimits

0x6bde,	// (0x0006bb58) list_single_cmail_header_detail_pane_g1

0xde6b,	// (0x00072de5) list_single_cmail_header_detail_pane_g2_ParamLimits

0xde6b,	// (0x00072de5) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdae,	// (0x00074d28) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdae,	// (0x00074d28) list_single_cmail_header_detail_pane_g

0x6bf6,	// (0x0006bb70) list_single_cmail_header_detail_pane_t1_ParamLimits

0x6bf6,	// (0x0006bb70) list_single_cmail_header_detail_pane_t1

0x6c4e,	// (0x0006bbc8) list_single_cmail_header_editor_pane_bg_ParamLimits

0x6c4e,	// (0x0006bbc8) list_single_cmail_header_editor_pane_bg

0x30dd,	// (0x00068057) list_cmail_body_pane_g1

0x30e6,	// (0x00068060) list_cmail_body_pane_t1

0x4037,	// (0x00068fb1) list_single_cmail_header_editor_pane_bg_g1

0x0537,	// (0x000654b1) list_single_cmail_header_editor_pane_bg_g1_copy1

0x4047,	// (0x00068fc1) list_single_cmail_header_editor_pane_bg_g1_copy2

0x403f,	// (0x00068fb9) list_single_cmail_header_editor_pane_bg_g1_copy3

0x425b,	// (0x000691d5) list_single_cmail_header_editor_pane_bg_g1_copy4

0x4067,	// (0x00068fe1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x4057,	// (0x00068fd1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x405f,	// (0x00068fd9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0517,	// (0x00065491) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xde77,	// (0x00072df1) calenote_gesture_pane_ParamLimits

0xde77,	// (0x00072df1) calenote_gesture_pane

0xde91,	// (0x00072e0b) calenote_window_pane_ParamLimits

0xde91,	// (0x00072e0b) calenote_window_pane

0x30f4,	// (0x0006806e) popup_note_window_cp01

0xdea9,	// (0x00072e23) calenote_swipe_1_pane_ParamLimits

0xdea9,	// (0x00072e23) calenote_swipe_1_pane

0xdc7f,	// (0x00072bf9) calenote_swipe_2_pane_ParamLimits

0xdc7f,	// (0x00072bf9) calenote_swipe_2_pane

0x4f82,	// (0x00069efc) calenote_swipe_1_pane_g1_ParamLimits

0x4f82,	// (0x00069efc) calenote_swipe_1_pane_g1

0x4f8f,	// (0x00069f09) calenote_swipe_1_pane_g2_ParamLimits

0x4f8f,	// (0x00069f09) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x00074c57) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x00074c57) calenote_swipe_1_pane_g

0x3106,	// (0x00068080) calenote_swipe_1_pane_t1_ParamLimits

0x3106,	// (0x00068080) calenote_swipe_1_pane_t1

0x4f82,	// (0x00069efc) calenote_swipe_2_pane_g1_ParamLimits

0x4f82,	// (0x00069efc) calenote_swipe_2_pane_g1

0x3125,	// (0x0006809f) calenote_swipe_2_pane_g2_ParamLimits

0x3125,	// (0x0006809f) calenote_swipe_2_pane_g2

0x0001,

0xfdba,	// (0x00074d34) calenote_swipe_2_pane_g_ParamLimits

0xfdba,	// (0x00074d34) calenote_swipe_2_pane_g

0x3131,	// (0x000680ab) calenote_swipe_2_pane_t1_ParamLimits

0x3131,	// (0x000680ab) calenote_swipe_2_pane_t1

0x6f81,	// (0x0006befb) main_mup_navstr_pane

0xafae,	// (0x0006ff28) main_mup3_pane_t7_ParamLimits

0xafae,	// (0x0006ff28) main_mup3_pane_t7

0xb9b1,	// (0x0007092b) main_mp4_pane_g6_ParamLimits

0xb9b1,	// (0x0007092b) main_mp4_pane_g6

0xbd25,	// (0x00070c9f) main_image3_pane_t4_ParamLimits

0xbd25,	// (0x00070c9f) main_image3_pane_t4

0xdebc,	// (0x00072e36) popup_navstr_preview_pane_ParamLimits

0xdebc,	// (0x00072e36) popup_navstr_preview_pane

0xdec8,	// (0x00072e42) scroll_navstr_pane_ParamLimits

0xdec8,	// (0x00072e42) scroll_navstr_pane

0x6f81,	// (0x0006befb) bg_popup_preview_window_pane_cp04

0x3158,	// (0x000680d2) popup_navstr_preview_pane_t1

0xded4,	// (0x00072e4e) scroll_navstr_pane_g1_ParamLimits

0xded4,	// (0x00072e4e) scroll_navstr_pane_g1

0xdee1,	// (0x00072e5b) scroll_navstr_pane_t1_ParamLimits

0xdee1,	// (0x00072e5b) scroll_navstr_pane_t1

0x30fd,	// (0x00068077) bg_button_pane_cp014

0x30fd,	// (0x00068077) bg_button_pane_cp030

0x6640,	// (0x0006b5ba) list_double_fisheye_pane_g4_ParamLimits

0x6640,	// (0x0006b5ba) list_double_fisheye_pane_g4

0xdbbc,	// (0x00072b36) list_double_fisheye_pane_g5_ParamLimits

0xdbbc,	// (0x00072b36) list_double_fisheye_pane_g5

0x3068,	// (0x00067fe2) sp_fs_scroll_pane_cp03

0x2e3a,	// (0x00067db4) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x5075,	// (0x00069fef) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x00074c74) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x5081,	// (0x00069ffb) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xddc7,	// (0x00072d41) sp_fs_scroll_pane_cp02

0x01c3,	// (0x0006513d) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x01c3,	// (0x0006513d) popup_sp_fs_calendar_preview_list_single_pane

0x6f81,	// (0x0006befb) main_cam6_pano_pane

0xe963,	// (0x000738dd) main_mup3_pane_ParamLimits

0x6f81,	// (0x0006befb) main_phacti_pane

0xd7bf,	// (0x00072739) bg_button_pane_cp11

0xd7d7,	// (0x00072751) main_mobtv_info_pane_g2_ParamLimits

0xd7d7,	// (0x00072751) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x00074bd4) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x00074bd4) main_mobtv_info_pane_g

0xd989,	// (0x00072903) sc_clock_pane_t5_ParamLimits

0xd989,	// (0x00072903) sc_clock_pane_t5

0xda2b,	// (0x000729a5) main_radioblah_pane_g1_ParamLimits

0x4ece,	// (0x00069e48) main_radioblah_pane_t3_ParamLimits

0x4ece,	// (0x00069e48) main_radioblah_pane_t3

0x4ee6,	// (0x00069e60) main_radioblah_pane_t4_ParamLimits

0x4ee6,	// (0x00069e60) main_radioblah_pane_t4

0xda49,	// (0x000729c3) main_radioblah_text_pane_ParamLimits

0xda49,	// (0x000729c3) main_radioblah_text_pane

0xda56,	// (0x000729d0) main_radioblah_info_pane_g1_ParamLimits

0xdaeb,	// (0x00072a65) main_radioblah_info_pane_t4_ParamLimits

0xdaeb,	// (0x00072a65) main_radioblah_info_pane_t4

0xe963,	// (0x000738dd) main_sp_fs_calendar_pane

0xdef3,	// (0x00072e6d) main_phacti_pane_g1

0xdefb,	// (0x00072e75) phacti_note_pane_ParamLimits

0xdefb,	// (0x00072e75) phacti_note_pane

0x316f,	// (0x000680e9) phacti_term_pane_ParamLimits

0x316f,	// (0x000680e9) phacti_term_pane

0x3184,	// (0x000680fe) phacti_note_pane_t1_ParamLimits

0x3184,	// (0x000680fe) phacti_note_pane_t1

0x6c60,	// (0x0006bbda) phacti_term_pane_g1

0x6c68,	// (0x0006bbe2) phacti_term_pane_t1_ParamLimits

0x6c68,	// (0x0006bbe2) phacti_term_pane_t1

0x31cd,	// (0x00068147) popup_sp_fs_calendar_preview_list_single_pane_g1

0x31d5,	// (0x0006814f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc4,	// (0x00074d3e) popup_sp_fs_calendar_preview_list_single_pane_g

0x31dd,	// (0x00068157) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x31dd,	// (0x00068157) popup_sp_fs_calendar_preview_list_single_pane_t1

0x31f3,	// (0x0006816d) aid_popup_sp_fs_bg_corner_pane

0x25bb,	// (0x00067535) popup_sp_fs_calendar_preview_bg_pane_g1

0x6f81,	// (0x0006befb) popup_sp_fs_calendar_preview_bg_pane

0x31fb,	// (0x00068175) popup_sp_fs_calendar_preview_list_pane

0xe963,	// (0x000738dd) bg_main_sp_fs_cale_pane_ParamLimits

0xe963,	// (0x000738dd) bg_main_sp_fs_cale_pane

0x6c92,	// (0x0006bc0c) listscroll_cale_mrui_pane_ParamLimits

0x6c92,	// (0x0006bc0c) listscroll_cale_mrui_pane

0x6ca6,	// (0x0006bc20) listscroll_sp_fs_schedule_track_pane

0x6caf,	// (0x0006bc29) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x6caf,	// (0x0006bc29) main_sp_fs_ctrlbar_pane_cp01

0x3231,	// (0x000681ab) main_sp_fs_ribbon_pane

0x3239,	// (0x000681b3) popup_sp_fs_cale_preview_window

0xdf3e,	// (0x00072eb8) list_single_sp_fs_schedule_track_pane_ParamLimits

0xdf3e,	// (0x00072eb8) list_single_sp_fs_schedule_track_pane

0x7212,	// (0x0006c18c) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x7212,	// (0x0006c18c) bg_sp_fs_highlight_list_pane_cp03

0xdf60,	// (0x00072eda) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xdf60,	// (0x00072eda) list_single_sp_fs_schedule_track_pane_g1

0xdf6c,	// (0x00072ee6) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xdf6c,	// (0x00072ee6) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc9,	// (0x00074d43) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc9,	// (0x00074d43) list_single_sp_fs_schedule_track_pane_g

0xdf78,	// (0x00072ef2) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xdf78,	// (0x00072ef2) list_single_sp_fs_schedule_track_pane_t1

0xdf90,	// (0x00072f0a) sp_fs_schedule_track_pane_ParamLimits

0xdf90,	// (0x00072f0a) sp_fs_schedule_track_pane

0x324b,	// (0x000681c5) sp_fs_schedule_track_pane_g1

0x3253,	// (0x000681cd) sp_fs_schedule_track_pane_g2

0x325b,	// (0x000681d5) sp_fs_schedule_track_pane_g3

0x3263,	// (0x000681dd) sp_fs_schedule_track_pane_g4

0x326b,	// (0x000681e5) sp_fs_schedule_track_pane_g5

0x0004,

0xfdce,	// (0x00074d48) sp_fs_schedule_track_pane_g

0x4037,	// (0x00068fb1) bg_sp_fs_schedule_viewer_highlight_g1

0x0537,	// (0x000654b1) bg_sp_fs_schedule_viewer_highlight_g2

0x403f,	// (0x00068fb9) bg_sp_fs_schedule_viewer_highlight_g3

0x4047,	// (0x00068fc1) bg_sp_fs_schedule_viewer_highlight_g4

0x425b,	// (0x000691d5) bg_sp_fs_schedule_viewer_highlight_g5

0x4057,	// (0x00068fd1) bg_sp_fs_schedule_viewer_highlight_g6

0x405f,	// (0x00068fd9) bg_sp_fs_schedule_viewer_highlight_g7

0x4067,	// (0x00068fe1) bg_sp_fs_schedule_viewer_highlight_g8

0x0517,	// (0x00065491) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd9,	// (0x00074d53) bg_sp_fs_schedule_viewer_highlight_g

0x6f81,	// (0x0006befb) bg_main_sp_fs_ribbon_pane

0xdfa0,	// (0x00072f1a) main_sp_fs_ribbon_pane_g1

0x3273,	// (0x000681ed) main_sp_fs_ribbon_pane_t1

0xdfa9,	// (0x00072f23) main_sp_fs_ribbon_pane_t2

0x3282,	// (0x000681fc) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdec,	// (0x00074d66) main_sp_fs_ribbon_pane_t

0x3291,	// (0x0006820b) main_sp_fs_ribbon_scheduler_pane

0x3299,	// (0x00068213) bg_main_sp_fs_ribbon_pane_g1

0x32a2,	// (0x0006821c) bg_main_sp_fs_ribbon_pane_g2

0x32ab,	// (0x00068225) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf3,	// (0x00074d6d) bg_main_sp_fs_ribbon_pane_g

0x32b3,	// (0x0006822d) main_sp_fs_ribbon_scheduler_pane_g1

0x32bc,	// (0x00068236) main_sp_fs_ribbon_scheduler_pane_g2

0x32c5,	// (0x0006823f) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfa,	// (0x00074d74) main_sp_fs_ribbon_scheduler_pane_g

0x32ce,	// (0x00068248) list_cale_mrui_pane

0xdfb8,	// (0x00072f32) sp_fs_scroll_pane_cp07_ParamLimits

0xdfb8,	// (0x00072f32) sp_fs_scroll_pane_cp07

0xdfce,	// (0x00072f48) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xdfce,	// (0x00072f48) bg_sp_fs_schedule_viewer_highlight

0x32d7,	// (0x00068251) list_single_sp_fs_schedule_track_pane_cp01

0x32df,	// (0x00068259) list_sp_fs_schedule_track_pane

0x32e7,	// (0x00068261) sp_fs_scroll_pane_cp06_ParamLimits

0x32e7,	// (0x00068261) sp_fs_scroll_pane_cp06

0x25bb,	// (0x00067535) bgmain_sp_fs_calendar_pane_g1

0x6cc0,	// (0x0006bc3a) list_single_cale_mrui_pane_ParamLimits

0x6cc0,	// (0x0006bc3a) list_single_cale_mrui_pane

0x6cec,	// (0x0006bc66) list_single_cale_mrui_row_pane_ParamLimits

0x6cec,	// (0x0006bc66) list_single_cale_mrui_row_pane

0x6cf9,	// (0x0006bc73) list_single_cale_mrui_row_pane_g1_ParamLimits

0x6cf9,	// (0x0006bc73) list_single_cale_mrui_row_pane_g1

0x6d31,	// (0x0006bcab) list_single_cale_mrui_row_pane_t1_ParamLimits

0x6d31,	// (0x0006bcab) list_single_cale_mrui_row_pane_t1

0x6d43,	// (0x0006bcbd) list_single_cale_mrui_row_pane_t2_ParamLimits

0x6d43,	// (0x0006bcbd) list_single_cale_mrui_row_pane_t2

0x6da9,	// (0x0006bd23) list_single_cale_mrui_row_pane_t3_ParamLimits

0x6da9,	// (0x0006bd23) list_single_cale_mrui_row_pane_t3

0x6dd8,	// (0x0006bd52) list_single_cale_mrui_row_pane_t4_ParamLimits

0x6dd8,	// (0x0006bd52) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe06,	// (0x00074d80) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe06,	// (0x00074d80) list_single_cale_mrui_row_pane_t

0x6e07,	// (0x0006bd81) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x6e07,	// (0x0006bd81) list_single_cmail_header_editor_pane_bg_cp01

0x6e29,	// (0x0006bda3) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x6e29,	// (0x0006bda3) list_single_cmail_header_editor_pane_bg_cp02

0xdfdb,	// (0x00072f55) main_radioblah_text_pane_t1_ParamLimits

0xdfdb,	// (0x00072f55) main_radioblah_text_pane_t1

0x33ae,	// (0x00068328) cam6_indi_pane_cp01

0x33b6,	// (0x00068330) cam6_mode_pane_cp01

0x33be,	// (0x00068338) cam6_pano_pane

0x33c7,	// (0x00068341) cam6_zoom_pane_cp01

0x33cf,	// (0x00068349) cam6_pano_image_pane

0x33da,	// (0x00068354) cam6_pano_pane_g1

0x4c46,	// (0x00069bc0) cam6_pano_pane_g2

0x33e3,	// (0x0006835d) cam6_pano_pane_g3

0x33ec,	// (0x00068366) cam6_pano_pane_g4

0x2b41,	// (0x00067abb) cam6_pano_pane_g5

0x33f5,	// (0x0006836f) cam6_pano_pane_g6

0x33ff,	// (0x00068379) cam6_pano_pane_g7

0x3407,	// (0x00068381) cam6_pano_pane_g8

0x3410,	// (0x0006838a) cam6_pano_pane_g9

0x0008,

0xfe0f,	// (0x00074d89) cam6_pano_pane_g

0x6f81,	// (0x0006befb) main_browser_tag_pane

0x3150,	// (0x000680ca) grid_navstr_albumart_pane

0x341b,	// (0x00068395) cell_navstr_albumart_pane_ParamLimits

0x341b,	// (0x00068395) cell_navstr_albumart_pane

0x0dcb,	// (0x00065d45) cell_navstr_albumart_pane_g1

0x1ec8,	// (0x00066e42) cell_navstr_albumart_pane_g2

0x1ed8,	// (0x00066e52) cell_navstr_albumart_pane_g3

0x1ed0,	// (0x00066e4a) cell_navstr_albumart_pane_g4

0x0003,

0xfe22,	// (0x00074d9c) cell_navstr_albumart_pane_g

0xdff8,	// (0x00072f72) bt_list_pane_ParamLimits

0xdff8,	// (0x00072f72) bt_list_pane

0xe01f,	// (0x00072f99) bt_list_pane_t1

0xe02e,	// (0x00072fa8) bt_list_pane_t2

0x0001,

0xfe2b,	// (0x00074da5) bt_list_pane_t

0x6f81,	// (0x0006befb) main_cale_prevew_pane

0xe03d,	// (0x00072fb7) popup_cale_preview_window_ParamLimits

0xe03d,	// (0x00072fb7) popup_cale_preview_window

0xe963,	// (0x000738dd) bg_popup_preview_window_pane_cp05_ParamLimits

0xe963,	// (0x000738dd) bg_popup_preview_window_pane_cp05

0x343d,	// (0x000683b7) list_cale_preview_pane_ParamLimits

0x343d,	// (0x000683b7) list_cale_preview_pane

0xe054,	// (0x00072fce) list_double_cale_preview_pane_ParamLimits

0xe054,	// (0x00072fce) list_double_cale_preview_pane

0xe066,	// (0x00072fe0) list_single_cale_preview_pane_ParamLimits

0xe066,	// (0x00072fe0) list_single_cale_preview_pane

0xe07a,	// (0x00072ff4) list_single_cale_preview_pane_g1

0xe082,	// (0x00072ffc) list_single_cale_preview_pane_t1_ParamLimits

0xe082,	// (0x00072ffc) list_single_cale_preview_pane_t1

0xe097,	// (0x00073011) list_double_cale_preview_pane_g1

0xe09f,	// (0x00073019) list_double_cale_preview_pane_t1_ParamLimits

0xe09f,	// (0x00073019) list_double_cale_preview_pane_t1

0xe0b4,	// (0x0007302e) list_double_cale_preview_pane_t2_ParamLimits

0xe0b4,	// (0x0007302e) list_double_cale_preview_pane_t2

0x0001,

0xfe30,	// (0x00074daa) list_double_cale_preview_pane_t_ParamLimits

0xfe30,	// (0x00074daa) list_double_cale_preview_pane_t

0x6f81,	// (0x0006befb) main_ezdial_pane

0xe963,	// (0x000738dd) main_sp_fs_email_pane_ParamLimits

0xdc97,	// (0x00072c11) cmail_ddmenu_btn01_pane_ParamLimits

0xdc97,	// (0x00072c11) cmail_ddmenu_btn01_pane

0xdcb4,	// (0x00072c2e) cmail_ddmenu_btn02_pane_ParamLimits

0xdcb4,	// (0x00072c2e) cmail_ddmenu_btn02_pane

0xdcd2,	// (0x00072c4c) cmail_ddmenu_btn03_pane_ParamLimits

0xdcd2,	// (0x00072c4c) cmail_ddmenu_btn03_pane

0x66f1,	// (0x0006b66b) main_sp_fs_ctrlbar_pane_ParamLimits

0x670d,	// (0x0006b687) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xddd1,	// (0x00072d4b) list_cmail_body_pane_ParamLimits

0x3077,	// (0x00067ff1) bg_button_pane_cp12

0x308c,	// (0x00068006) list_single_cmail_header_detail_pane_g3_ParamLimits

0x308c,	// (0x00068006) list_single_cmail_header_detail_pane_g3

0x6c28,	// (0x0006bba2) list_single_cmail_header_detail_pane_t2_ParamLimits

0x6c28,	// (0x0006bba2) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb5,	// (0x00074d2f) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb5,	// (0x00074d2f) list_single_cmail_header_detail_pane_t

0x6c7d,	// (0x0006bbf7) phacti_term_pane_t2_ParamLimits

0x6c7d,	// (0x0006bbf7) phacti_term_pane_t2

0x0001,

0xfdbf,	// (0x00074d39) phacti_term_pane_t_ParamLimits

0xfdbf,	// (0x00074d39) phacti_term_pane_t

0x3449,	// (0x000683c3) aid_size_list_single_double

0xe0cc,	// (0x00073046) popup_ezdial_listscroll_window

0xe0ed,	// (0x00073067) popup_number_entry_window_cp01

0x0c4a,	// (0x00065bc4) bg_popup_call_pane_cp09

0x3455,	// (0x000683cf) ezdial_list_pane

0x345d,	// (0x000683d7) scroll_pane_cp23

0x239e,	// (0x00067318) bg_button_pane_cp028_ParamLimits

0x239e,	// (0x00067318) bg_button_pane_cp028

0xe0fb,	// (0x00073075) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe0fb,	// (0x00073075) cmail_ddmenu_btn01_pane_g1

0xe10d,	// (0x00073087) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe10d,	// (0x00073087) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe35,	// (0x00074daf) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe35,	// (0x00074daf) cmail_ddmenu_btn01_pane_g

0x3465,	// (0x000683df) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3465,	// (0x000683df) cmail_ddmenu_btn01_pane_t1

0x20b3,	// (0x0006702d) bg_button_pane_cp029_ParamLimits

0x20b3,	// (0x0006702d) bg_button_pane_cp029

0xe10d,	// (0x00073087) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe10d,	// (0x00073087) cmail_ddmenu_btn02_pane_g1

0xe125,	// (0x0007309f) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe125,	// (0x0007309f) cmail_ddmenu_btn02_pane_t1

0x7212,	// (0x0006c18c) bg_button_pane_cp031_ParamLimits

0x7212,	// (0x0006c18c) bg_button_pane_cp031

0xe10d,	// (0x00073087) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe10d,	// (0x00073087) cmail_ddmenu_btn03_pane_g1

0xe125,	// (0x0007309f) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe125,	// (0x0007309f) cmail_ddmenu_btn03_pane_t1

0xbbd0,	// (0x00070b4a) cell_dialer2_keypad_pane_t1_ParamLimits

0xbbea,	// (0x00070b64) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xbbea,	// (0x00070b64) cell_dialer2_keypad_pane_t1_copy1

0xd65f,	// (0x000725d9) ncimui_group_button_pane

0xe963,	// (0x000738dd) main_sp_fs_calendar_pane_ParamLimits

0xddf5,	// (0x00072d6f) list_single_cmail_header_caption_pane_ParamLimits

0xe933,	// (0x000738ad) aid_recal_txt_sm_pane

0x6f81,	// (0x0006befb) mian_recal_day_pane

0x3239,	// (0x000681b3) popup_sp_fs_cale_preview_window_ParamLimits

0x6f81,	// (0x0006befb) list_recal_day_pane

0x3493,	// (0x0006840d) list_single_recal_day_pane_ParamLimits

0x3493,	// (0x0006840d) list_single_recal_day_pane

0x34a5,	// (0x0006841f) list_single_recal_day_pane_g1_ParamLimits

0x34a5,	// (0x0006841f) list_single_recal_day_pane_g1

0x34b1,	// (0x0006842b) list_single_recal_day_pane_g2_ParamLimits

0x34b1,	// (0x0006842b) list_single_recal_day_pane_g2

0x34c0,	// (0x0006843a) list_single_recal_day_pane_g3_ParamLimits

0x34c0,	// (0x0006843a) list_single_recal_day_pane_g3

0xe149,	// (0x000730c3) list_single_recal_day_pane_g4_ParamLimits

0xe149,	// (0x000730c3) list_single_recal_day_pane_g4

0x34cc,	// (0x00068446) list_single_recal_day_pane_g5_ParamLimits

0x34cc,	// (0x00068446) list_single_recal_day_pane_g5

0x34db,	// (0x00068455) list_single_recal_day_pane_g6_ParamLimits

0x34db,	// (0x00068455) list_single_recal_day_pane_g6

0x0005,

0xfe44,	// (0x00074dbe) list_single_recal_day_pane_g_ParamLimits

0xfe44,	// (0x00074dbe) list_single_recal_day_pane_g

0x34e7,	// (0x00068461) list_single_recal_day_pane_t1

0x34f5,	// (0x0006846f) list_single_recal_day_pane_t2

0x0001,

0xfe51,	// (0x00074dcb) list_single_recal_day_pane_t

0xe15c,	// (0x000730d6) ncimui_query_button_pane_ParamLimits

0xe15c,	// (0x000730d6) ncimui_query_button_pane

0xe16c,	// (0x000730e6) ncimui_query_button_pane_t1_ParamLimits

0xe16c,	// (0x000730e6) ncimui_query_button_pane_t1

0x3503,	// (0x0006847d) ncimui_query_button_pane_t2_ParamLimits

0x3503,	// (0x0006847d) ncimui_query_button_pane_t2

0x0001,

0xfe56,	// (0x00074dd0) ncimui_query_button_pane_t_ParamLimits

0xfe56,	// (0x00074dd0) ncimui_query_button_pane_t

0xe17f,	// (0x000730f9) query_button_pane_ParamLimits

0xe17f,	// (0x000730f9) query_button_pane

0x6f81,	// (0x0006befb) bg_button_pane_cp0028

0x3516,	// (0x00068490) query_button_pane_t1

0x9fdb,	// (0x0006ef55) main_tport_pane_ParamLimits

0xdd00,	// (0x00072c7a) bg_popup_window_pane_cp01_ParamLimits

0xdd00,	// (0x00072c7a) bg_popup_window_pane_cp01

0xdd0d,	// (0x00072c87) heading_pane_cp08_ParamLimits

0xdd0d,	// (0x00072c87) heading_pane_cp08

0xdd1b,	// (0x00072c95) heading_pane_cp07_ParamLimits

0xdd1b,	// (0x00072c95) heading_pane_cp07

0x303a,	// (0x00067fb4) cell_tport_appsw_pane_g2

0x0002,

0xfda2,	// (0x00074d1c) cell_tport_appsw_pane_g

0x60a2,	// (0x0006b01c) input_candi_list_open_g1

0x0700,	// (0x0006567a) list_cale_time_pane_g6_ParamLimits

0x0700,	// (0x0006567a) list_cale_time_pane_g6

0xaa21,	// (0x0006f99b) aid_size_touch_calib_1_ParamLimits

0xaa21,	// (0x0006f99b) aid_size_touch_calib_1

0xaa2d,	// (0x0006f9a7) aid_size_touch_calib_2_ParamLimits

0xaa2d,	// (0x0006f9a7) aid_size_touch_calib_2

0xaa3b,	// (0x0006f9b5) aid_size_touch_calib_3_ParamLimits

0xaa3b,	// (0x0006f9b5) aid_size_touch_calib_3

0xaa4b,	// (0x0006f9c5) aid_size_touch_calib_4_ParamLimits

0xaa4b,	// (0x0006f9c5) aid_size_touch_calib_4

0xaa59,	// (0x0006f9d3) main_touch_calib_button_group_pane_ParamLimits

0xaa59,	// (0x0006f9d3) main_touch_calib_button_group_pane

0xaa67,	// (0x0006f9e1) main_touch_calib_pane_g1_ParamLimits

0xaa73,	// (0x0006f9ed) main_touch_calib_pane_g2_ParamLimits

0xaa7f,	// (0x0006f9f9) main_touch_calib_pane_g3_ParamLimits

0xaa8b,	// (0x0006fa05) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x000746ef) main_touch_calib_pane_g_ParamLimits

0xaa97,	// (0x0006fa11) main_touch_calib_pane_t1_ParamLimits

0xaaae,	// (0x0006fa28) main_touch_calib_pane_t2_ParamLimits

0xaac5,	// (0x0006fa3f) main_touch_calib_pane_t3_ParamLimits

0xaad9,	// (0x0006fa53) main_touch_calib_pane_t4_ParamLimits

0xaaed,	// (0x0006fa67) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x000746f8) main_touch_calib_pane_t_ParamLimits

0x2928,	// (0x000678a2) list_single_fp_cale_pane_g3_ParamLimits

0x2928,	// (0x000678a2) list_single_fp_cale_pane_g3

0xe963,	// (0x000738dd) bg_button_pane_cp012_ParamLimits

0xe963,	// (0x000738dd) bg_vkb2_func_pane_cp03_ParamLimits

0xc990,	// (0x0007190a) cell_vitu2_function_top_pane_g1_ParamLimits

0xe963,	// (0x000738dd) bg_vkb2_func_pane_cp04_ParamLimits

0xd5fd,	// (0x00072577) main_ncimui_button_group_pane_ParamLimits

0xd5fd,	// (0x00072577) main_ncimui_button_group_pane

0xd64d,	// (0x000725c7) main_ncimui_pane_t3_ParamLimits

0xd64d,	// (0x000725c7) main_ncimui_pane_t3

0x3166,	// (0x000680e0) phacti_button_group_pane

0x3449,	// (0x000683c3) aid_size_list_single_double_ParamLimits

0xe0cc,	// (0x00073046) popup_ezdial_listscroll_window_ParamLimits

0xe0ed,	// (0x00073067) popup_number_entry_window_cp01_ParamLimits

0xe18c,	// (0x00073106) phacti_button_pane_ParamLimits

0xe18c,	// (0x00073106) phacti_button_pane

0x6f81,	// (0x0006befb) bg_button_pane_cp14

0x3524,	// (0x0006849e) phacti_button_pane_t1

0xe19d,	// (0x00073117) main_touch_calib_button_pane_ParamLimits

0xe19d,	// (0x00073117) main_touch_calib_button_pane

0x0020,	// (0x00064f9a) bg_button_pane_cp18_ParamLimits

0x0020,	// (0x00064f9a) bg_button_pane_cp18

0x3532,	// (0x000684ac) main_touch_calib_button_pane_t1_ParamLimits

0x3532,	// (0x000684ac) main_touch_calib_button_pane_t1

0x3548,	// (0x000684c2) main_touch_calib_button_pane_t2_ParamLimits

0x3548,	// (0x000684c2) main_touch_calib_button_pane_t2

0x0001,

0xfe5b,	// (0x00074dd5) main_touch_calib_button_pane_t_ParamLimits

0xfe5b,	// (0x00074dd5) main_touch_calib_button_pane_t

0x6f81,	// (0x0006befb) cell_ncimui_button_pane

0x6f81,	// (0x0006befb) bg_button_pane_cp032

0x3566,	// (0x000684e0) cell_ncimui_button_pane_t1

0xbc46,	// (0x00070bc0) image3_infobar_pane_ParamLimits

0xbc46,	// (0x00070bc0) image3_infobar_pane

0xd9ab,	// (0x00072925) fs_bigclock_status_pane_ParamLimits

0xd9ab,	// (0x00072925) fs_bigclock_status_pane

0xd9b8,	// (0x00072932) main_fs_bigclock_clock_pane_ParamLimits

0xd9b8,	// (0x00072932) main_fs_bigclock_clock_pane

0xd9cc,	// (0x00072946) main_fs_bigclock_indi_pane_ParamLimits

0xd9cc,	// (0x00072946) main_fs_bigclock_indi_pane

0xd9f9,	// (0x00072973) main_fs_bigclock_swipe_pane_ParamLimits

0xd9f9,	// (0x00072973) main_fs_bigclock_swipe_pane

0x6f81,	// (0x0006befb) main_fs_clock_dumped_data

0x4d53,	// (0x00069ccd) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x4d53,	// (0x00069ccd) list_single_fs_bigclock_indicator_pane_g1

0x4d71,	// (0x00069ceb) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x4d71,	// (0x00069ceb) list_single_fs_bigclock_indicator_pane_g2

0x4d8b,	// (0x00069d05) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x4d8b,	// (0x00069d05) list_single_fs_bigclock_indicator_pane_g3

0x4da5,	// (0x00069d1f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x4da5,	// (0x00069d1f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x00074c08) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x00074c08) list_single_fs_bigclock_indicator_pane_g

0x4dcb,	// (0x00069d45) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x4dcb,	// (0x00069d45) list_single_fs_bigclock_indicator_pane_t1

0x4df3,	// (0x00069d6d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x4df3,	// (0x00069d6d) list_single_fs_bigclock_indicator_pane_t2

0x4e1b,	// (0x00069d95) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x4e1b,	// (0x00069d95) list_single_fs_bigclock_indicator_pane_t3

0x4e43,	// (0x00069dbd) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x4e43,	// (0x00069dbd) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x00074c13) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x00074c13) list_single_fs_bigclock_indicator_pane_t

0x3574,	// (0x000684ee) image3_infobar_fav_pane_ParamLimits

0x3574,	// (0x000684ee) image3_infobar_fav_pane

0x3584,	// (0x000684fe) image3_infobar_loc_pane_ParamLimits

0x3584,	// (0x000684fe) image3_infobar_loc_pane

0x3598,	// (0x00068512) image3_infobar_time_pane_ParamLimits

0x3598,	// (0x00068512) image3_infobar_time_pane

0x25bb,	// (0x00067535) image3_infobar_time_pane_g1

0x35a8,	// (0x00068522) image3_infobar_time_pane_t1

0x25bb,	// (0x00067535) image3_infobar_loc_pane_g1

0x35b6,	// (0x00068530) image3_infobar_loc_pane_g2

0x0001,

0xfe60,	// (0x00074dda) image3_infobar_loc_pane_g

0x35be,	// (0x00068538) image3_infobar_loc_pane_t1

0x25bb,	// (0x00067535) image3_infobar_fav_pane_g1

0x35cc,	// (0x00068546) image3_infobar_fav_pane_g2

0x0001,

0xfe65,	// (0x00074ddf) image3_infobar_fav_pane_g

0x35d4,	// (0x0006854e) fs_bigclock_status_battery_pane

0x35dd,	// (0x00068557) fs_bigclock_status_signal_pane

0x35e6,	// (0x00068560) fs_bigclock_status_title_pane

0x35ef,	// (0x00068569) fs_bigclock_status_signal_pane_g1

0x35f8,	// (0x00068572) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6a,	// (0x00074de4) fs_bigclock_status_signal_pane_g

0x3600,	// (0x0006857a) fs_bigclock_status_battery_pane_g1

0x3609,	// (0x00068583) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6f,	// (0x00074de9) fs_bigclock_status_battery_pane_g

0x3611,	// (0x0006858b) fs_bigclock_status_title_pane_t1

0x25bb,	// (0x00067535) main_fs_bigclock_clock_pane_g1

0x361f,	// (0x00068599) main_fs_bigclock_clock_pane_g2

0x361f,	// (0x00068599) main_fs_bigclock_clock_pane_g3

0x361f,	// (0x00068599) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe74,	// (0x00074dee) main_fs_bigclock_clock_pane_g

0x3627,	// (0x000685a1) main_fs_bigclock_clock_pane_t1

0x3635,	// (0x000685af) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7d,	// (0x00074df7) main_fs_bigclock_clock_pane_t

0x3644,	// (0x000685be) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3644,	// (0x000685be) list_single_fs_bigclock_indicator_pane

0xe1ad,	// (0x00073127) list_single_fs_bigclock_pane_ParamLimits

0xe1ad,	// (0x00073127) list_single_fs_bigclock_pane

0x365e,	// (0x000685d8) main_fs_bigclock_indicator_pane_t1

0x366d,	// (0x000685e7) list_single_fs_bigclock_pane_g1

0x3675,	// (0x000685ef) list_single_fs_bigclock_pane_t1

0x25bb,	// (0x00067535) main_fs_bigclock_swipe_pane_g1

0x36b3,	// (0x0006862d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8e,	// (0x00074e08) main_fs_bigclock_swipe_pane_g

0x36bb,	// (0x00068635) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x36bb,	// (0x00068635) main_fs_bigclock_swipe_pane_t1

0x8f92,	// (0x0006df0c) call_type_pane_ParamLimits

0x6f81,	// (0x0006befb) main_btmg_pane

0x6d25,	// (0x0006bc9f) list_single_cale_mrui_row_pane_g2_ParamLimits

0x6d25,	// (0x0006bc9f) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe01,	// (0x00074d7b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe01,	// (0x00074d7b) list_single_cale_mrui_row_pane_g

0x3483,	// (0x000683fd) list_recal_vselct_arw_lo_pane

0x348b,	// (0x00068405) list_recal_vselct_arw_up_pane

0xe93c,	// (0x000738b6) list_recal_vselct_pane

0x36d8,	// (0x00068652) btmg_button_pane

0xe211,	// (0x0007318b) main_btmg_pane_g1

0x6f81,	// (0x0006befb) bg_button_pane_cp044

0x36e2,	// (0x0006865c) btmg_button_pane_t1

0x20ab,	// (0x00067025) aid_listscroll_gen

0xe963,	// (0x000738dd) main_cntbar_detail_pane

0x3058,	// (0x00067fd2) list_cmail_folder_pane

0x3068,	// (0x00067fe2) sp_fs_scroll_pane_cp03_ParamLimits

0x6e45,	// (0x0006bdbf) list_single_fs_dyc_pane_cp01_ParamLimits

0x6e45,	// (0x0006bdbf) list_single_fs_dyc_pane_cp01

0x36f0,	// (0x0006866a) aid_size_cmail_indent

0x6e71,	// (0x0006bdeb) list_single_dyc_row_pane_cp01

0xe239,	// (0x000731b3) cntbar_detail_list_pane_ParamLimits

0xe239,	// (0x000731b3) cntbar_detail_list_pane

0xe273,	// (0x000731ed) main_cntbar_detail_cont_pane_ParamLimits

0xe273,	// (0x000731ed) main_cntbar_detail_cont_pane

0x8f86,	// (0x0006df00) scroll_pane_cp032_ParamLimits

0x8f86,	// (0x0006df00) scroll_pane_cp032

0xe27f,	// (0x000731f9) cntbar_detail_list_event_pane_ParamLimits

0xe27f,	// (0x000731f9) cntbar_detail_list_event_pane

0xe245,	// (0x000731bf) cntbar_detail_list_shct_pane

0x0585,	// (0x000654ff) aid_list_gen

0x3702,	// (0x0006867c) aid_scroll

0x370b,	// (0x00068685) aid_size_touch_scroll_bar

0xe92a,	// (0x000738a4) aid_list_double

0x371d,	// (0x00068697) aid_list_single

0x3726,	// (0x000686a0) aid_list_single_lg

0x6e7a,	// (0x0006bdf4) aid_list_z_g_a_sm

0xe293,	// (0x0007320d) aid_list_z_g_d

0x6e82,	// (0x0006bdfc) aid_txt_z_prm

0x6e90,	// (0x0006be0a) aid_txt_z_prm_cp01

0x6e9e,	// (0x0006be18) aid_txt_z_sec

0xe29b,	// (0x00073215) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe29b,	// (0x00073215) main_cntbar_detail_cont_pane_g1

0xe2a8,	// (0x00073222) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe2a8,	// (0x00073222) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe93,	// (0x00074e0d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe93,	// (0x00074e0d) main_cntbar_detail_cont_pane_g

0x374d,	// (0x000686c7) main_cntbar_detail_cont_pane_t1

0x375b,	// (0x000686d5) main_cntbar_detail_cont_pane_t2

0x3769,	// (0x000686e3) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe98,	// (0x00074e12) main_cntbar_detail_cont_pane_t

0xe2b4,	// (0x0007322e) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe2b4,	// (0x0007322e) cell_cntbar_detail_list_shct_pane

0x3777,	// (0x000686f1) cntbar_detail_list_shct_pane_g1

0x3780,	// (0x000686fa) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9f,	// (0x00074e19) cntbar_detail_list_shct_pane_g

0xe2c8,	// (0x00073242) cntbar_detail_list_event_pane_g1_ParamLimits

0xe2c8,	// (0x00073242) cntbar_detail_list_event_pane_g1

0xe2d4,	// (0x0007324e) cntbar_detail_list_event_pane_g2_ParamLimits

0xe2d4,	// (0x0007324e) cntbar_detail_list_event_pane_g2

0x0005,

0xfea4,	// (0x00074e1e) cntbar_detail_list_event_pane_g_ParamLimits

0xfea4,	// (0x00074e1e) cntbar_detail_list_event_pane_g

0xe340,	// (0x000732ba) cntbar_detail_list_event_pane_t1_ParamLimits

0xe340,	// (0x000732ba) cntbar_detail_list_event_pane_t1

0xe355,	// (0x000732cf) cntbar_detail_list_event_pane_t2_ParamLimits

0xe355,	// (0x000732cf) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb1,	// (0x00074e2b) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb1,	// (0x00074e2b) cntbar_detail_list_event_pane_t

0x25bb,	// (0x00067535) cell_cntbar_detail_list_shct_pane_g1

0x9315,	// (0x0006e28f) navi_pane_mv_g3

0xe963,	// (0x000738dd) main_cntbar_detail_pane_ParamLimits

0x6f81,	// (0x0006befb) main_notif_wgt_pane

0xb8f8,	// (0x00070872) aid_tch_main_mp4_pane_g4

0xbb2d,	// (0x00070aa7) popup_slider_window_cp02

0x347a,	// (0x000683f4) list_recal_day_event_pane

0xe219,	// (0x00073193) cntbar_detail_btn_pane_ParamLimits

0xe219,	// (0x00073193) cntbar_detail_btn_pane

0xe229,	// (0x000731a3) cntbar_detail_btn_pane_cp01_ParamLimits

0xe229,	// (0x000731a3) cntbar_detail_btn_pane_cp01

0xe245,	// (0x000731bf) cntbar_detail_list_shct_pane_ParamLimits

0xe251,	// (0x000731cb) cntbar_detail_pane_g1_ParamLimits

0xe251,	// (0x000731cb) cntbar_detail_pane_g1

0xe25d,	// (0x000731d7) cntbar_detail_pane_t1_ParamLimits

0xe25d,	// (0x000731d7) cntbar_detail_pane_t1

0xe2e0,	// (0x0007325a) cntbar_detail_list_event_pane_g3_ParamLimits

0xe2e0,	// (0x0007325a) cntbar_detail_list_event_pane_g3

0xe2f8,	// (0x00073272) cntbar_detail_list_event_pane_g4_ParamLimits

0xe2f8,	// (0x00073272) cntbar_detail_list_event_pane_g4

0xe310,	// (0x0007328a) cntbar_detail_list_event_pane_g5_ParamLimits

0xe310,	// (0x0007328a) cntbar_detail_list_event_pane_g5

0xe328,	// (0x000732a2) cntbar_detail_list_event_pane_g6_ParamLimits

0xe328,	// (0x000732a2) cntbar_detail_list_event_pane_g6

0xe36a,	// (0x000732e4) cntbar_detail_list_event_pane_t3_ParamLimits

0xe36a,	// (0x000732e4) cntbar_detail_list_event_pane_t3

0xe37c,	// (0x000732f6) popup_notif_wgt_window_ParamLimits

0xe37c,	// (0x000732f6) popup_notif_wgt_window

0xe38c,	// (0x00073306) popup_submenu_window_cp01_ParamLimits

0xe38c,	// (0x00073306) popup_submenu_window_cp01

0x0c4a,	// (0x00065bc4) bg_popup_window_pane_cp10

0x3789,	// (0x00068703) listscroll_notif_wgt_pane

0x3793,	// (0x0006870d) list_notif_wgt_window

0x379c,	// (0x00068716) scroll_pane_cp033

0x37a5,	// (0x0006871f) list_notif_wgt_row_pane_ParamLimits

0x37a5,	// (0x0006871f) list_notif_wgt_row_pane

0x37b9,	// (0x00068733) aid_size_list_notif_wgt_del

0x37c2,	// (0x0006873c) list_notif_wgt_row_pane_g1

0x37ca,	// (0x00068744) list_notif_wgt_row_pane_g2

0x37d2,	// (0x0006874c) list_notif_wgt_row_pane_g3

0x0002,

0xfeb8,	// (0x00074e32) list_notif_wgt_row_pane_g

0x37db,	// (0x00068755) list_notif_wgt_row_pane_t1

0x37e9,	// (0x00068763) list_notif_wgt_row_pane_t2

0x37f7,	// (0x00068771) list_notif_wgt_row_pane_t3

0x0002,

0xfebf,	// (0x00074e39) list_notif_wgt_row_pane_t

0x4275,	// (0x000691ef) list_recal_day_event_pane_g1

0x3805,	// (0x0006877f) list_recal_day_event_pane_t1

0x6f81,	// (0x0006befb) bg_button_pane_cp045

0x3814,	// (0x0006878e) cntbar_detail_btn_pane_t1

0x20b3,	// (0x0006702d) main_callh_pane_ParamLimits

0x20b3,	// (0x0006702d) main_callh_pane

0x6f81,	// (0x0006befb) main_coverflow0_pane

0x6f81,	// (0x0006befb) main_wgtman_pane

0xda11,	// (0x0007298b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xda11,	// (0x0007298b) main_fs_bigclock_unlock_btn_pane

0x3032,	// (0x00067fac) bg_button_pane_cp16

0x3042,	// (0x00067fbc) cell_tport_appsw_pane_g3

0xe39a,	// (0x00073314) cf0_flow_pane_ParamLimits

0xe39a,	// (0x00073314) cf0_flow_pane

0x3822,	// (0x0006879c) listscroll_cf0_pane

0x382b,	// (0x000687a5) main_cf0_pane_g1

0xe3a9,	// (0x00073323) main_cf0_pane_t1_ParamLimits

0xe3a9,	// (0x00073323) main_cf0_pane_t1

0xe3bd,	// (0x00073337) main_cf0_pane_t2_ParamLimits

0xe3bd,	// (0x00073337) main_cf0_pane_t2

0x0001,

0xfec6,	// (0x00074e40) main_cf0_pane_t_ParamLimits

0xfec6,	// (0x00074e40) main_cf0_pane_t

0x3835,	// (0x000687af) scroll_pane_cp11

0xe3d1,	// (0x0007334b) cf0_flow_pane_g1

0xe3d9,	// (0x00073353) cf0_flow_pane_g2

0x0001,

0xfecb,	// (0x00074e45) cf0_flow_pane_g

0xe3e1,	// (0x0007335b) cf0_flow_pane_t1

0x6f81,	// (0x0006befb) main_call6_pane

0x6f81,	// (0x0006befb) main_calllock_pane

0xe3ef,	// (0x00073369) call6_btn_grp_pane_ParamLimits

0xe3ef,	// (0x00073369) call6_btn_grp_pane

0xe3fe,	// (0x00073378) call6_pane_g1_ParamLimits

0xe3fe,	// (0x00073378) call6_pane_g1

0xe40d,	// (0x00073387) popup_call6_1st_window_ParamLimits

0xe40d,	// (0x00073387) popup_call6_1st_window

0xe41b,	// (0x00073395) popup_call6_2nd_window_ParamLimits

0xe41b,	// (0x00073395) popup_call6_2nd_window

0xe429,	// (0x000733a3) cell_call6_btn_pane_ParamLimits

0xe429,	// (0x000733a3) cell_call6_btn_pane

0x0c4a,	// (0x00065bc4) bg_popup_call2_in_pane_cp03

0x3840,	// (0x000687ba) popup_call6_1st_window_g1

0x3848,	// (0x000687c2) popup_call6_1st_window_g2

0x3850,	// (0x000687ca) popup_call6_1st_window_g3

0x0002,

0xfed0,	// (0x00074e4a) popup_call6_1st_window_g

0x3858,	// (0x000687d2) popup_call6_1st_window_t1

0x3867,	// (0x000687e1) popup_call6_1st_window_t2

0x3877,	// (0x000687f1) popup_call6_1st_window_t3

0x0002,

0xfed7,	// (0x00074e51) popup_call6_1st_window_t

0x0c4a,	// (0x00065bc4) bg_popup_call2_in_pane_cp04

0x3840,	// (0x000687ba) popup_call6_2nd_window_g1

0x3848,	// (0x000687c2) popup_call6_2nd_window_g2

0x3850,	// (0x000687ca) popup_call6_2nd_window_g3

0x0002,

0xfed0,	// (0x00074e4a) popup_call6_2nd_window_g

0x3858,	// (0x000687d2) popup_call6_2nd_window_t1

0x6f81,	// (0x0006befb) bg_button_pane_cp15

0x3887,	// (0x00068801) cell_call6_btn_pane_g1

0x3890,	// (0x0006880a) cell_call6_btn_pane_t1

0xe438,	// (0x000733b2) listscroll_wgtman_pane_ParamLimits

0xe438,	// (0x000733b2) listscroll_wgtman_pane

0xe456,	// (0x000733d0) wgtman_btn_pane_ParamLimits

0xe456,	// (0x000733d0) wgtman_btn_pane

0x0afd,	// (0x00065a77) aid_scroll_copy1

0x389f,	// (0x00068819) list_wgtman_pane

0xe48b,	// (0x00073405) wgtman_btn_pane_g1_ParamLimits

0xe48b,	// (0x00073405) wgtman_btn_pane_g1

0xe4b3,	// (0x0007342d) wgtman_btn_pane_t1_ParamLimits

0xe4b3,	// (0x0007342d) wgtman_btn_pane_t1

0x38a9,	// (0x00068823) wgtman_btn_pane_t2_ParamLimits

0x38a9,	// (0x00068823) wgtman_btn_pane_t2

0x0001,

0xfede,	// (0x00074e58) wgtman_btn_pane_t_ParamLimits

0xfede,	// (0x00074e58) wgtman_btn_pane_t

0xe4ea,	// (0x00073464) listrow_wgtman_pane_ParamLimits

0xe4ea,	// (0x00073464) listrow_wgtman_pane

0xe506,	// (0x00073480) listrow_wgtman_pane_g1

0xe50f,	// (0x00073489) listrow_wgtman_pane_g2

0x0001,

0xfee3,	// (0x00074e5d) listrow_wgtman_pane_g

0x6eac,	// (0x0006be26) listrow_wgtman_pane_t1

0x6eba,	// (0x0006be34) listrow_wgtman_pane_t2

0x0001,

0xfee8,	// (0x00074e62) listrow_wgtman_pane_t

0x6ec8,	// (0x0006be42) wait_bar_pane_cp09

0x38c0,	// (0x0006883a) main_calllock_btn_pane

0x38ca,	// (0x00068844) main_calllock_pane_g1

0x6f81,	// (0x0006befb) bg_button_pane_cp17

0x38d5,	// (0x0006884f) main_calllock_btn_pane_g1

0x38de,	// (0x00068858) main_calllock_btn_pane_t1

0x6f81,	// (0x0006befb) main_dialer3_pane

0x6f81,	// (0x0006befb) main_fmrd2_pane

0x25bb,	// (0x00067535) main_fs_bigclock_unlock_btn_pane_g1

0x38f5,	// (0x0006886f) main_fs_bigclock_unlock_btn_pane_t1

0xe519,	// (0x00073493) area_fmrd2_info_pane_ParamLimits

0xe519,	// (0x00073493) area_fmrd2_info_pane

0xe527,	// (0x000734a1) area_fmrd2_visual_pane_ParamLimits

0xe527,	// (0x000734a1) area_fmrd2_visual_pane

0xe535,	// (0x000734af) fmrd2_indi_pane_ParamLimits

0xe535,	// (0x000734af) fmrd2_indi_pane

0xe542,	// (0x000734bc) area_fmrd2_visual_pane_g1

0xe54a,	// (0x000734c4) area_fmrd2_visual_pane_t1

0xe55a,	// (0x000734d4) area_fmrd2_visual_pane_t2

0xe56a,	// (0x000734e4) area_fmrd2_visual_pane_t3

0x0002,

0xfef2,	// (0x00074e6c) area_fmrd2_visual_pane_t

0xe57a,	// (0x000734f4) area_fmrd2_info_pane_g1

0xe582,	// (0x000734fc) area_fmrd2_info_pane_t1

0xe592,	// (0x0007350c) area_fmrd2_info_pane_t2

0xe5a2,	// (0x0007351c) area_fmrd2_info_pane_t3

0xe5b2,	// (0x0007352c) area_fmrd2_info_pane_t4

0x0003,

0xfef9,	// (0x00074e73) area_fmrd2_info_pane_t

0xe5c0,	// (0x0007353a) fmrd2_indi_pane_t1

0xe5d0,	// (0x0007354a) fmrd2_indi_pane_t2

0xe5e0,	// (0x0007355a) fmrd2_indi_pane_t3

0x0002,

0xff02,	// (0x00074e7c) fmrd2_indi_pane_t

0x4db4,	// (0x00069d2e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x4db4,	// (0x00069d2e) list_single_fs_bigclock_indicator_pane_g5

0x4e58,	// (0x00069dd2) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x4e58,	// (0x00069dd2) list_single_fs_bigclock_indicator_pane_t5

0xdf11,	// (0x00072e8b) aid_cell_bcale_month_pane_ParamLimits

0xdf11,	// (0x00072e8b) aid_cell_bcale_month_pane

0xdf1d,	// (0x00072e97) bcale_month_pane_ParamLimits

0xdf1d,	// (0x00072e97) bcale_month_pane

0xdf2d,	// (0x00072ea7) bcale_preview_pane_ParamLimits

0xdf2d,	// (0x00072ea7) bcale_preview_pane

0x3675,	// (0x000685ef) list_single_fs_bigclock_pane_t1_ParamLimits

0x368f,	// (0x00068609) list_single_fs_bigclock_pane_t2_ParamLimits

0x368f,	// (0x00068609) list_single_fs_bigclock_pane_t2

0x0001,

0xfe89,	// (0x00074e03) list_single_fs_bigclock_pane_t_ParamLimits

0xfe89,	// (0x00074e03) list_single_fs_bigclock_pane_t

0x38ed,	// (0x00068867) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeed,	// (0x00074e67) main_fs_bigclock_unlock_btn_pane_g

0xe5ee,	// (0x00073568) aid_dia3_key_size_ParamLimits

0xe5ee,	// (0x00073568) aid_dia3_key_size

0xe5fa,	// (0x00073574) aid_dia3_listrow_size_ParamLimits

0xe5fa,	// (0x00073574) aid_dia3_listrow_size

0xe60a,	// (0x00073584) dia3_keypad_fun_pane_ParamLimits

0xe60a,	// (0x00073584) dia3_keypad_fun_pane

0xe61c,	// (0x00073596) dia3_keypad_num_pane_ParamLimits

0xe61c,	// (0x00073596) dia3_keypad_num_pane

0xe62e,	// (0x000735a8) dia3_listscroll_pane_ParamLimits

0xe62e,	// (0x000735a8) dia3_listscroll_pane

0xe63c,	// (0x000735b6) dia3_numentry_pane_ParamLimits

0xe63c,	// (0x000735b6) dia3_numentry_pane

0x3903,	// (0x0006887d) dia3_list_pane

0x390e,	// (0x00068888) scroll_pane_cp12

0x6f81,	// (0x0006befb) bg_dia3_numentry_pane

0xe64a,	// (0x000735c4) dia3_numentry_pane_t1

0xe659,	// (0x000735d3) cell_dia3_key_num_pane

0xe661,	// (0x000735db) cell_dia3_key0_fun_pane_ParamLimits

0xe661,	// (0x000735db) cell_dia3_key0_fun_pane

0xe66e,	// (0x000735e8) cell_dia3_key1_fun_pane_ParamLimits

0xe66e,	// (0x000735e8) cell_dia3_key1_fun_pane

0xe67b,	// (0x000735f5) dia3_listrow_pane

0x4aae,	// (0x00069a28) bg_dia3_numentry_pane_g1

0x6f81,	// (0x0006befb) bg_button_pane_cp21

0x3919,	// (0x00068893) cell_dia3_key_num_pane_t1

0x3927,	// (0x000688a1) cell_dia3_key_num_pane_t2

0x3936,	// (0x000688b0) cell_dia3_key_num_pane_t3

0x3945,	// (0x000688bf) cell_dia3_key_num_pane_t4

0x0003,

0xff09,	// (0x00074e83) cell_dia3_key_num_pane_t

0x6f81,	// (0x0006befb) bg_button_pane_cp19

0xe688,	// (0x00073602) cell_dia3_key0_fun_pane_g1

0x6f81,	// (0x0006befb) bg_button_pane_cp20

0xe690,	// (0x0007360a) cell_dia3_key1_fun_pane_g1

0xe698,	// (0x00073612) area_left_week_number_pane

0xe6a1,	// (0x0007361b) area_top_day_name_pane

0xe6aa,	// (0x00073624) frame_month_view_pane

0xe6b4,	// (0x0007362e) grid_month_view_pane

0xe6be,	// (0x00073638) cell_top_day_name_pane_ParamLimits

0xe6be,	// (0x00073638) cell_top_day_name_pane

0xe6d8,	// (0x00073652) cell_area_left_week_number_pane_ParamLimits

0xe6d8,	// (0x00073652) cell_area_left_week_number_pane

0xe6ec,	// (0x00073666) cell_month_view_pane_ParamLimits

0xe6ec,	// (0x00073666) cell_month_view_pane

0x3954,	// (0x000688ce) frm_month_g1

0xe709,	// (0x00073683) frm_month_g2

0xe713,	// (0x0007368d) frm_month_g3

0xe71d,	// (0x00073697) frm_month_g4

0xe727,	// (0x000736a1) frm_month_g5

0xe731,	// (0x000736ab) frm_month_g6

0xe73b,	// (0x000736b5) frm_month_g7

0x395d,	// (0x000688d7) frm_month_g8

0xe745,	// (0x000736bf) frm_month_g9

0xe74e,	// (0x000736c8) frm_month_g10

0xe757,	// (0x000736d1) frm_month_g11

0xe760,	// (0x000736da) frm_month_g12

0xe769,	// (0x000736e3) frm_month_g13

0xe772,	// (0x000736ec) frm_month_g14

0xe77b,	// (0x000736f5) frm_month_g15

0xe786,	// (0x00073700) frm_month_g16

0x000f,

0xff12,	// (0x00074e8c) frm_month_g

0xe791,	// (0x0007370b) cell_top_day_name_pane_t1

0xe7a0,	// (0x0007371a) cell_area_left_week_number_pane_g1

0xe791,	// (0x0007370b) cell_area_left_week_number_pane_t1

0x25bb,	// (0x00067535) cell_month_view_pane_g1

0xe7a8,	// (0x00073722) cell_month_view_pane_t1

0x6f81,	// (0x0006befb) main_fps_pane

0x503d,	// (0x00069fb7) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x503d,	// (0x00069fb7) cmail_ddmenu_btn02_pane_cp1

0x5059,	// (0x00069fd3) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x5059,	// (0x00069fd3) cmail_ddmenu_btn02_pane_cp2

0xe119,	// (0x00073093) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe119,	// (0x00073093) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3a,	// (0x00074db4) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3a,	// (0x00074db4) cmail_ddmenu_btn02_pane_g

0xe137,	// (0x000730b1) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe137,	// (0x000730b1) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3f,	// (0x00074db9) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3f,	// (0x00074db9) cmail_ddmenu_btn02_pane_t

0xe7b7,	// (0x00073731) fps_text_pane_ParamLimits

0xe7b7,	// (0x00073731) fps_text_pane

0xe7c4,	// (0x0007373e) main_fps_pane_g1_ParamLimits

0xe7c4,	// (0x0007373e) main_fps_pane_g1

0xe7d2,	// (0x0007374c) wait_bar_pane_cp010_ParamLimits

0xe7d2,	// (0x0007374c) wait_bar_pane_cp010

0xe7de,	// (0x00073758) fps_text_pane_t1_ParamLimits

0xe7de,	// (0x00073758) fps_text_pane_t1

0xbf11,	// (0x00070e8b) cam4_image_uncrop_pane_g1

0xbf1a,	// (0x00070e94) cam4_image_uncrop_pane_g2

0xbf23,	// (0x00070e9d) cam4_image_uncrop_pane_g3

0xbf2c,	// (0x00070ea6) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x00074887) cam4_image_uncrop_pane_g

0xe67b,	// (0x000735f5) dia3_listrow_pane_ParamLimits

0x6f81,	// (0x0006befb) main_phob2_pane

0xdd62,	// (0x00072cdc) cell_tport_appsw_pane_cp02_ParamLimits

0xdd62,	// (0x00072cdc) cell_tport_appsw_pane_cp02

0xdd71,	// (0x00072ceb) cell_tport_appsw_pane_cp03_ParamLimits

0xdd71,	// (0x00072ceb) cell_tport_appsw_pane_cp03

0x6f81,	// (0x0006befb) phob2_contact_card_pane

0x6f81,	// (0x0006befb) phob2_listscroll_pane

0x3966,	// (0x000688e0) phob2_list_pane

0x396e,	// (0x000688e8) scroll_pane_cp034

0xe7f7,	// (0x00073771) phob2_cc_data_pane_ParamLimits

0xe7f7,	// (0x00073771) phob2_cc_data_pane

0xe811,	// (0x0007378b) phob2_cc_listscroll_pane_ParamLimits

0xe811,	// (0x0007378b) phob2_cc_listscroll_pane

0xe82b,	// (0x000737a5) list_double_large_graphic_phob2_pane_ParamLimits

0xe82b,	// (0x000737a5) list_double_large_graphic_phob2_pane

0xe84e,	// (0x000737c8) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xe84e,	// (0x000737c8) list_double_large_graphic_phob2_pane_g1

0xe85b,	// (0x000737d5) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xe85b,	// (0x000737d5) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff33,	// (0x00074ead) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff33,	// (0x00074ead) list_double_large_graphic_phob2_pane_g

0x6ed0,	// (0x0006be4a) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x6ed0,	// (0x0006be4a) list_double_large_graphic_phob2_pane_t1

0x6ee5,	// (0x0006be5f) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x6ee5,	// (0x0006be5f) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff38,	// (0x00074eb2) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff38,	// (0x00074eb2) list_double_large_graphic_phob2_pane_t

0x6f81,	// (0x0006befb) list_highlight_pane_cp024

0x3976,	// (0x000688f0) phob2_cc_button_pane

0xe867,	// (0x000737e1) phob2_cc_data_pane_g1_ParamLimits

0xe867,	// (0x000737e1) phob2_cc_data_pane_g1

0xe873,	// (0x000737ed) phob2_cc_data_pane_g2_ParamLimits

0xe873,	// (0x000737ed) phob2_cc_data_pane_g2

0x0001,

0xff3d,	// (0x00074eb7) phob2_cc_data_pane_g_ParamLimits

0xff3d,	// (0x00074eb7) phob2_cc_data_pane_g

0xe87f,	// (0x000737f9) phob2_cc_data_pane_t1_ParamLimits

0xe87f,	// (0x000737f9) phob2_cc_data_pane_t1

0xe891,	// (0x0007380b) phob2_cc_data_pane_t2_ParamLimits

0xe891,	// (0x0007380b) phob2_cc_data_pane_t2

0xe8a3,	// (0x0007381d) phob2_cc_data_pane_t3_ParamLimits

0xe8a3,	// (0x0007381d) phob2_cc_data_pane_t3

0x0002,

0xff42,	// (0x00074ebc) phob2_cc_data_pane_t_ParamLimits

0xff42,	// (0x00074ebc) phob2_cc_data_pane_t

0x397e,	// (0x000688f8) phob2_cc_list_pane_ParamLimits

0x397e,	// (0x000688f8) phob2_cc_list_pane

0x48ea,	// (0x00069864) scroll_pane_cp035_ParamLimits

0x48ea,	// (0x00069864) scroll_pane_cp035

0xe963,	// (0x000738dd) bg_button_pane_cp033

0x398a,	// (0x00068904) phob2_cc_button_pane_g1

0x3996,	// (0x00068910) phob2_cc_button_pane_t1

0x39ab,	// (0x00068925) phob2_cc_button_pane_t2

0x0001,

0xff49,	// (0x00074ec3) phob2_cc_button_pane_t

0xe8b5,	// (0x0007382f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xe8b5,	// (0x0007382f) list_double_large_graphic_phob2_cc_pane

0xe8e5,	// (0x0007385f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xe8e5,	// (0x0007385f) list_double_large_graphic_phob2_cc_pane_g1

0xe8f6,	// (0x00073870) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xe8f6,	// (0x00073870) list_double_large_graphic_phob2_cc_pane_g2

0xe905,	// (0x0007387f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xe905,	// (0x0007387f) list_double_large_graphic_phob2_cc_pane_g3

0x6ef7,	// (0x0006be71) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x6ef7,	// (0x0006be71) list_double_large_graphic_phob2_cc_pane_g4

0x6f08,	// (0x0006be82) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x6f08,	// (0x0006be82) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4e,	// (0x00074ec8) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4e,	// (0x00074ec8) list_double_large_graphic_phob2_cc_pane_g

0x6f17,	// (0x0006be91) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x6f17,	// (0x0006be91) list_double_large_graphic_phob2_cc_pane_t1

0x6f40,	// (0x0006beba) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x6f40,	// (0x0006beba) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff59,	// (0x00074ed3) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff59,	// (0x00074ed3) list_double_large_graphic_phob2_cc_pane_t

0x39bd,	// (0x00068937) list_highlight_pane_cp025_ParamLimits

0x39bd,	// (0x00068937) list_highlight_pane_cp025

0xe963,	// (0x000738dd) bg_button_pane_cp033_ParamLimits

0x398a,	// (0x00068904) phob2_cc_button_pane_g1_ParamLimits

0x3996,	// (0x00068910) phob2_cc_button_pane_t1_ParamLimits

0x39ab,	// (0x00068925) phob2_cc_button_pane_t2_ParamLimits

0xff49,	// (0x00074ec3) phob2_cc_button_pane_t_ParamLimits

0x7220,	// (0x0006c19a) popup_wgtman_window

0x4151,	// (0x000690cb) scroll_pane_cp038

0xe473,	// (0x000733ed) wgtman_btn_pane_cp_01_ParamLimits

0xe473,	// (0x000733ed) wgtman_btn_pane_cp_01

0x39cb,	// (0x00068945) wgtman_content_pane

0x3714,	// (0x0006868e) wgtman_heading_pane

0x6f81,	// (0x0006befb) bg_heading_pane_cp02

0x39d4,	// (0x0006894e) wgtman_heading_pane_g1

0x39dc,	// (0x00068956) wgtman_heading_pane_t1

0x39ea,	// (0x00068964) scroll_pane_cp036

0x39f2,	// (0x0006896c) wgtman_list_pane

0x39fa,	// (0x00068974) wgtman_list_pane_t1_ParamLimits

0x39fa,	// (0x00068974) wgtman_list_pane_t1

0xbe70,	// (0x00070dea) cam4_grid_pane

0x632a,	// (0x0006b2a4) bg_button_pane_cp015_ParamLimits

0xcb15,	// (0x00071a8f) bg_button_pane_cp016_ParamLimits

0xcb28,	// (0x00071aa2) bg_button_pane_cp017_ParamLimits

0x635d,	// (0x0006b2d7) popup_vitu2_query_window_g3_ParamLimits

0x635d,	// (0x0006b2d7) popup_vitu2_query_window_g3

0x63d6,	// (0x0006b350) popup_vitu2_query_window_t6_ParamLimits

0x63d6,	// (0x0006b350) popup_vitu2_query_window_t6

0x6401,	// (0x0006b37b) popup_vitu2_query_window_t7_ParamLimits

0x6401,	// (0x0006b37b) popup_vitu2_query_window_t7

0x4c07,	// (0x00069b81) cam4_grid_pane_g1

0x4c10,	// (0x00069b8a) cam4_grid_pane_g2

0x3a18,	// (0x00068992) cam4_grid_pane_g3

0x3a21,	// (0x0006899b) cam4_grid_pane_g4

0x0003,

0xff5e,	// (0x00074ed8) cam4_grid_pane_g

0x7ee7,	// (0x0006ce61) aid_placing_vt_slider_lsc_ParamLimits

0x8227,	// (0x0006d1a1) vidtel_button_pane_ParamLimits

0x8227,	// (0x0006d1a1) vidtel_button_pane

0x6f81,	// (0x0006befb) bg_button_pane_cp034

0xe914,	// (0x0007388e) vidtel_button_pane_g1

0x3a2c,	// (0x000689a6) vidtel_button_pane_t1

0x4253,	// (0x000691cd) aid_size_vtel_slider_touch

0x48ea,	// (0x00069864) scroll_pane_cp039

0x4aec,	// (0x00069a66) ncim_query_button_pane_cp01_ParamLimits

0x4b0b,	// (0x00069a85) ncimui_query_pane_g1_ParamLimits

0xe963,	// (0x000738dd) input_focus_pane_cp012_ParamLimits

0x4b30,	// (0x00069aaa) ncim_query_entry_pane_t1_ParamLimits

0x48ea,	// (0x00069864) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large
