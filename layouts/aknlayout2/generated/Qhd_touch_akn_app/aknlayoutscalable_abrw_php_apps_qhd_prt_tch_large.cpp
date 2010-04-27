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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00094f9c };

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
0x0ed9,	// (0x00095e75) Screen

0x0ee5,	// (0x00095e81) application_window

0x0f41,	// (0x00095edd) area_bottom_pane_ParamLimits

0x0f41,	// (0x00095edd) area_bottom_pane

0x0f9a,	// (0x00095f36) area_top_pane_ParamLimits

0x0f9a,	// (0x00095f36) area_top_pane

0x0ffe,	// (0x00095f9a) call_video_uplink_pane_ParamLimits

0x0ffe,	// (0x00095f9a) call_video_uplink_pane

0x103d,	// (0x00095fd9) main_pane_ParamLimits

0x103d,	// (0x00095fd9) main_pane

0xbbf3,	// (0x000a0b8f) context_pane

0x4667,	// (0x00099603) navi_pane

0x468d,	// (0x00099629) popup_cale_events_window_ParamLimits

0x468d,	// (0x00099629) popup_cale_events_window

0xbc06,	// (0x000a0ba2) popup_mup_playback_window

0x46a5,	// (0x00099641) signal_pane

0xefe7,	// (0x000a3f83) main_browser_pane

0x9d73,	// (0x0009ed0f) main_burst_pane

0x44e5,	// (0x00099481) main_calc_pane

0xbbd9,	// (0x000a0b75) main_cale_day_pane

0x17a0,	// (0x0009673c) main_cale_month_pane

0xbbd9,	// (0x000a0b75) main_cale_week_pane

0x9d73,	// (0x0009ed0f) main_call_pane

0xecc7,	// (0x000a3c63) main_call_poc_pane

0x9d73,	// (0x0009ed0f) main_camera_pane

0x9d73,	// (0x0009ed0f) main_chi_dic_pane

0xa558,	// (0x0009f4f4) main_clock_pane

0xecc7,	// (0x000a3c63) main_fmradio_pane

0x9d73,	// (0x0009ed0f) main_graph_messa_pane

0xecc7,	// (0x000a3c63) main_help_pane

0xefe7,	// (0x000a3f83) main_im_pane

0xef22,	// (0x000a3ebe) main_image_pane_ParamLimits

0xef22,	// (0x000a3ebe) main_image_pane

0xecc7,	// (0x000a3c63) main_location2_pane

0x9d73,	// (0x0009ed0f) main_location_pane

0xef22,	// (0x000a3ebe) main_messa_pane

0xecc7,	// (0x000a3c63) main_mp2_pane

0x9d73,	// (0x0009ed0f) main_mp_pane

0xecc7,	// (0x000a3c63) main_msg_pane

0xecc7,	// (0x000a3c63) main_mup_eq_pane

0xecc7,	// (0x000a3c63) main_mup_pane

0xefe7,	// (0x000a3f83) main_notes_pane

0xecc7,	// (0x000a3c63) main_pec_pane

0xecc7,	// (0x000a3c63) main_phob_pane

0xecc7,	// (0x000a3c63) main_pinb_pane

0xecc7,	// (0x000a3c63) main_postcard_pane

0xecc7,	// (0x000a3c63) main_qdial_pane

0x9d73,	// (0x0009ed0f) main_skin_pane

0xecc7,	// (0x000a3c63) main_smil2_pane

0x9d73,	// (0x0009ed0f) main_smil_pane

0x9d73,	// (0x0009ed0f) main_video_pane

0x9d73,	// (0x0009ed0f) main_video_tele_pane

0xef22,	// (0x000a3ebe) main_viewer_pane_ParamLimits

0xef22,	// (0x000a3ebe) main_viewer_pane

0x9d73,	// (0x0009ed0f) main_vorec_pane

0x4531,	// (0x000994cd) popup_blid_sat_info_window_ParamLimits

0x4531,	// (0x000994cd) popup_blid_sat_info_window

0x4551,	// (0x000994ed) popup_dyc_status_message_window_ParamLimits

0x4551,	// (0x000994ed) popup_dyc_status_message_window

0x4561,	// (0x000994fd) popup_grid_large_graphic_window_ParamLimits

0x4561,	// (0x000994fd) popup_grid_large_graphic_window

0x45f2,	// (0x0009958e) popup_loc_request_window_ParamLimits

0x45f2,	// (0x0009958e) popup_loc_request_window

0x463f,	// (0x000995db) popup_wml_address_window_ParamLimits

0x463f,	// (0x000995db) popup_wml_address_window

0x43bd,	// (0x00099359) call_muted_g1

0x407f,	// (0x0009901b) popup_call_audio_conf_window_ParamLimits

0x407f,	// (0x0009901b) popup_call_audio_conf_window

0x43cd,	// (0x00099369) popup_call_audio_first_window_ParamLimits

0x43cd,	// (0x00099369) popup_call_audio_first_window

0x440d,	// (0x000993a9) popup_call_audio_in_window_ParamLimits

0x440d,	// (0x000993a9) popup_call_audio_in_window

0x4431,	// (0x000993cd) popup_call_audio_out_window_ParamLimits

0x4431,	// (0x000993cd) popup_call_audio_out_window

0x4453,	// (0x000993ef) popup_call_audio_second_window_ParamLimits

0x4453,	// (0x000993ef) popup_call_audio_second_window

0x4483,	// (0x0009941f) popup_call_audio_wait_window_ParamLimits

0x4483,	// (0x0009941f) popup_call_audio_wait_window

0x44a4,	// (0x00099440) popup_number_entry_window_ParamLimits

0x44a4,	// (0x00099440) popup_number_entry_window

0xe79c,	// (0x000a3738) bg_popup_call_pane_cp05_ParamLimits

0xe79c,	// (0x000a3738) bg_popup_call_pane_cp05

0xe7bc,	// (0x000a3758) popup_number_entry_window_t1

0xe7cf,	// (0x000a376b) popup_number_entry_window_t2

0xe7e1,	// (0x000a377d) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x000a4066) popup_number_entry_window_t

0xe7f3,	// (0x000a378f) text_title_cp2

0xe91e,	// (0x000a38ba) bg_popup_call_pane_cp_ParamLimits

0xe91e,	// (0x000a38ba) bg_popup_call_pane_cp

0xe92c,	// (0x000a38c8) call_thumbnail_pane

0xe934,	// (0x000a38d0) popup_call_audio_in_window_g1_ParamLimits

0xe934,	// (0x000a38d0) popup_call_audio_in_window_g1

0xe940,	// (0x000a38dc) popup_call_audio_in_window_g2_ParamLimits

0xe940,	// (0x000a38dc) popup_call_audio_in_window_g2

0xe94c,	// (0x000a38e8) popup_call_audio_in_window_g3_ParamLimits

0xe94c,	// (0x000a38e8) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x000a406f) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x000a406f) popup_call_audio_in_window_g

0xe958,	// (0x000a38f4) popup_call_audio_in_window_t1_ParamLimits

0xe958,	// (0x000a38f4) popup_call_audio_in_window_t1

0xe974,	// (0x000a3910) popup_call_audio_in_window_t2_ParamLimits

0xe974,	// (0x000a3910) popup_call_audio_in_window_t2

0xe990,	// (0x000a392c) popup_call_audio_in_window_t3_ParamLimits

0xe990,	// (0x000a392c) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x000a4076) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x000a4076) popup_call_audio_in_window_t

0xe91e,	// (0x000a38ba) bg_popup_call_pane_cp01_ParamLimits

0xe91e,	// (0x000a38ba) bg_popup_call_pane_cp01

0xe92c,	// (0x000a38c8) call_thumbnail_pane_cp02

0xe9a3,	// (0x000a393f) call_type_pane_cp022

0xe9ab,	// (0x000a3947) popup_call_audio_out_window_g1_ParamLimits

0xe9ab,	// (0x000a3947) popup_call_audio_out_window_g1

0xe9bd,	// (0x000a3959) popup_call_audio_out_window_g2_ParamLimits

0xe9bd,	// (0x000a3959) popup_call_audio_out_window_g2

0xe9c9,	// (0x000a3965) popup_call_audio_out_window_g3_ParamLimits

0xe9c9,	// (0x000a3965) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x000a407d) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x000a407d) popup_call_audio_out_window_g

0xe9db,	// (0x000a3977) popup_call_audio_out_window_t1_ParamLimits

0xe9db,	// (0x000a3977) popup_call_audio_out_window_t1

0xe9f3,	// (0x000a398f) popup_call_audio_out_window_t2_ParamLimits

0xe9f3,	// (0x000a398f) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x000a4084) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x000a4084) popup_call_audio_out_window_t

0xea08,	// (0x000a39a4) bg_popup_call_pane_ParamLimits

0xea08,	// (0x000a39a4) bg_popup_call_pane

0x1256,	// (0x000961f2) call_thumbnail_pane_cp_ParamLimits

0x1256,	// (0x000961f2) call_thumbnail_pane_cp

0xea8c,	// (0x000a3a28) call_type_pane_cp01_ParamLimits

0xea8c,	// (0x000a3a28) call_type_pane_cp01

0xead0,	// (0x000a3a6c) popup_call_audio_first_window_g1_ParamLimits

0xead0,	// (0x000a3a6c) popup_call_audio_first_window_g1

0xeb1c,	// (0x000a3ab8) popup_call_audio_first_window_g2_ParamLimits

0xeb1c,	// (0x000a3ab8) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x000a4089) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x000a4089) popup_call_audio_first_window_g

0xeb60,	// (0x000a3afc) popup_call_audio_first_window_t1_ParamLimits

0xeb60,	// (0x000a3afc) popup_call_audio_first_window_t1

0xec0c,	// (0x000a3ba8) popup_call_audio_first_window_t4_ParamLimits

0xec0c,	// (0x000a3ba8) popup_call_audio_first_window_t4

0xec98,	// (0x000a3c34) popup_call_audio_first_window_t5_ParamLimits

0xec98,	// (0x000a3c34) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x000a408e) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x000a408e) popup_call_audio_first_window_t

0xecc7,	// (0x000a3c63) bg_popup_call_pane_cp02

0xecd1,	// (0x000a3c6d) call_type_pane_cp023

0xecd9,	// (0x000a3c75) popup_call_audio_wait_window_g1

0xece1,	// (0x000a3c7d) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000a4095) popup_call_audio_wait_window_g

0xece9,	// (0x000a3c85) popup_call_audio_wait_window_t3

0xecf7,	// (0x000a3c93) bg_popup_call_pane_cp03_ParamLimits

0xecf7,	// (0x000a3c93) bg_popup_call_pane_cp03

0xed57,	// (0x000a3cf3) call_thumbnail_pane_cp011_ParamLimits

0xed57,	// (0x000a3cf3) call_thumbnail_pane_cp011

0xed63,	// (0x000a3cff) call_type_pane_cp034_ParamLimits

0xed63,	// (0x000a3cff) call_type_pane_cp034

0xed9f,	// (0x000a3d3b) popup_call_audio_second_window_g1_ParamLimits

0xed9f,	// (0x000a3d3b) popup_call_audio_second_window_g1

0xeddb,	// (0x000a3d77) popup_call_audio_second_window_g2_ParamLimits

0xeddb,	// (0x000a3d77) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x000a409a) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x000a409a) popup_call_audio_second_window_g

0xee17,	// (0x000a3db3) popup_call_audio_second_window_t1_ParamLimits

0xee17,	// (0x000a3db3) popup_call_audio_second_window_t1

0xee98,	// (0x000a3e34) popup_call_audio_second_window_t2_ParamLimits

0xee98,	// (0x000a3e34) popup_call_audio_second_window_t2

0xeece,	// (0x000a3e6a) popup_call_audio_second_window_t3_ParamLimits

0xeece,	// (0x000a3e6a) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x000a409f) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x000a409f) popup_call_audio_second_window_t

0xecc7,	// (0x000a3c63) bg_popup_call_pane_cp04

0xef04,	// (0x000a3ea0) list_conf_pane

0xef0c,	// (0x000a3ea8) popup_call_audio_conf_window_t1

0xef1a,	// (0x000a3eb6) call_thumbnail_pane_g1

0xef22,	// (0x000a3ebe) bg_pinb_pane_ParamLimits

0xef22,	// (0x000a3ebe) bg_pinb_pane

0xef30,	// (0x000a3ecc) find_pinb_pane

0xef39,	// (0x000a3ed5) listscroll_pinb_pane_ParamLimits

0xef39,	// (0x000a3ed5) listscroll_pinb_pane

0xef48,	// (0x000a3ee4) pinb_bg_pane_g1

0x127a,	// (0x00096216) pinb_bg_pane_g2

0x1286,	// (0x00096222) pinb_bg_pane_g3

0x1292,	// (0x0009622e) pinb_bg_pane_g4

0x129e,	// (0x0009623a) pinb_bg_pane_g5

0x12aa,	// (0x00096246) pinb_bg_pane_g6

0x12b5,	// (0x00096251) pinb_bg_pane_g7

0x12c0,	// (0x0009625c) pinb_bg_pane_g8

0x12cb,	// (0x00096267) pinb_bg_pane_g9

0x12d5,	// (0x00096271) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x000a40a6) pinb_bg_pane_g

0x12f2,	// (0x0009628e) grid_pinb_pane

0x12fd,	// (0x00096299) list_pinb_pane

0x1308,	// (0x000962a4) scroll_pane_cp01_ParamLimits

0x1308,	// (0x000962a4) scroll_pane_cp01

0xef52,	// (0x000a3eee) find_pinb_pane_g1_ParamLimits

0xef52,	// (0x000a3eee) find_pinb_pane_g1

0xef6a,	// (0x000a3f06) find_pinb_pane_t1

0xef7c,	// (0x000a3f18) find_pinb_pane_t2

0x0001,

0xf124,	// (0x000a40c0) find_pinb_pane_t

0xef91,	// (0x000a3f2d) input_focus_pane_cp01_ParamLimits

0xef91,	// (0x000a3f2d) input_focus_pane_cp01

0x131a,	// (0x000962b6) cell_pinb_pane_ParamLimits

0x131a,	// (0x000962b6) cell_pinb_pane

0x1342,	// (0x000962de) cell_pinb_pane_g1_ParamLimits

0x1342,	// (0x000962de) cell_pinb_pane_g1

0x1357,	// (0x000962f3) cell_pinb_pane_g2_ParamLimits

0x1357,	// (0x000962f3) cell_pinb_pane_g2

0xef9d,	// (0x000a3f39) cell_pinb_pane_g3_ParamLimits

0xef9d,	// (0x000a3f39) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x000a40c5) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x000a40c5) cell_pinb_pane_g

0xecc7,	// (0x000a3c63) grid_highlight_pane_cp01

0x1363,	// (0x000962ff) list_pinb_item_pane_ParamLimits

0x1363,	// (0x000962ff) list_pinb_item_pane

0xecc7,	// (0x000a3c63) list_highlight_pane_cp02

0x1389,	// (0x00096325) list_pinb_item_pane_g1_ParamLimits

0x1389,	// (0x00096325) list_pinb_item_pane_g1

0x1396,	// (0x00096332) list_pinb_item_pane_g2_ParamLimits

0x1396,	// (0x00096332) list_pinb_item_pane_g2

0x13a2,	// (0x0009633e) list_pinb_item_pane_g3_ParamLimits

0x13a2,	// (0x0009633e) list_pinb_item_pane_g3

0x13b3,	// (0x0009634f) list_pinb_item_pane_g4_ParamLimits

0x13b3,	// (0x0009634f) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x000a40cc) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x000a40cc) list_pinb_item_pane_g

0x13bf,	// (0x0009635b) list_pinb_item_pane_t1_ParamLimits

0x13bf,	// (0x0009635b) list_pinb_item_pane_t1

0x13f0,	// (0x0009638c) calc_display_pane

0x140e,	// (0x000963aa) calc_paper_pane

0x142a,	// (0x000963c6) grid_calc_pane

0xecc7,	// (0x000a3c63) bg_list_pane_cp01

0x1456,	// (0x000963f2) clock_g1

0x145e,	// (0x000963fa) clock_g2

0x0001,

0xf139,	// (0x000a40d5) clock_g

0x1468,	// (0x00096404) clock_t1_ParamLimits

0x1468,	// (0x00096404) clock_t1

0x147d,	// (0x00096419) clock_t2_ParamLimits

0x147d,	// (0x00096419) clock_t2

0x148f,	// (0x0009642b) clock_t3_ParamLimits

0x148f,	// (0x0009642b) clock_t3

0x14a1,	// (0x0009643d) clock_t4_ParamLimits

0x14a1,	// (0x0009643d) clock_t4

0x14b3,	// (0x0009644f) clock_t5_ParamLimits

0x14b3,	// (0x0009644f) clock_t5

0x14c8,	// (0x00096464) clock_t6_ParamLimits

0x14c8,	// (0x00096464) clock_t6

0x14da,	// (0x00096476) clock_t7_ParamLimits

0x14da,	// (0x00096476) clock_t7

0x14ec,	// (0x00096488) clock_t8_ParamLimits

0x14ec,	// (0x00096488) clock_t8

0x1502,	// (0x0009649e) clock_t9_ParamLimits

0x1502,	// (0x0009649e) clock_t9

0x0008,

0xf13e,	// (0x000a40da) clock_t_ParamLimits

0xf13e,	// (0x000a40da) clock_t

0xefa9,	// (0x000a3f45) popup_clock_analogue_window_cp02

0xefa9,	// (0x000a3f45) popup_clock_digital_window_cp01

0xefb1,	// (0x000a3f4d) listscroll_help_pane

0xecc7,	// (0x000a3c63) phob_pre_status_pane

0xefbb,	// (0x000a3f57) grid_qdial_pane

0xef22,	// (0x000a3ebe) listscroll_mce_pane

0xef22,	// (0x000a3ebe) bg_notes_pane

0xefc5,	// (0x000a3f61) list_notes_pane

0x1518,	// (0x000964b4) scroll_pane_cp06

0xefd3,	// (0x000a3f6f) bg_calc_paper_pane

0x1527,	// (0x000964c3) list_calc_pane

0xefe7,	// (0x000a3f83) bg_calc_display_pane

0x1541,	// (0x000964dd) calc_display_pane_t1

0x1556,	// (0x000964f2) calc_display_pane_t2

0x156b,	// (0x00096507) calc_display_pane_t3

0x0002,

0xf151,	// (0x000a40ed) calc_display_pane_t

0x157d,	// (0x00096519) cell_calc_pane_ParamLimits

0x157d,	// (0x00096519) cell_calc_pane

0xeff3,	// (0x000a3f8f) bg_calc_paper_pane_g1

0xefff,	// (0x000a3f9b) bg_calc_paper_pane_g2

0xf00b,	// (0x000a3fa7) bg_calc_paper_pane_g3

0xf017,	// (0x000a3fb3) bg_calc_paper_pane_g4

0xf023,	// (0x000a3fbf) bg_calc_paper_pane_g5

0x15aa,	// (0x00096546) bg_calc_paper_pane_g6

0x15bb,	// (0x00096557) bg_calc_paper_pane_g7

0x15cc,	// (0x00096568) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x000a40f4) bg_calc_paper_pane_g

0x15dd,	// (0x00096579) calc_bg_paper_pane_g9

0x15ee,	// (0x0009658a) list_calc_item_pane_ParamLimits

0x15ee,	// (0x0009658a) list_calc_item_pane

0xf02f,	// (0x000a3fcb) list_calc_item_pane_g1

0x161d,	// (0x000965b9) list_calc_item_pane_t1_ParamLimits

0x161d,	// (0x000965b9) list_calc_item_pane_t1

0x162f,	// (0x000965cb) list_calc_item_pane_t2_ParamLimits

0x162f,	// (0x000965cb) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x000a4105) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x000a4105) list_calc_item_pane_t

0xf03c,	// (0x000a3fd8) cell_calc_pane_g1

0xf046,	// (0x000a3fe2) grid_highlight_pane_cp02

0x165f,	// (0x000965fb) bg_calc_display_pane_g1

0x1668,	// (0x00096604) bg_calc_display_pane_g2

0xbe9b,	// (0x000a0e37) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x000a410f) bg_calc_display_pane_g

0x1672,	// (0x0009660e) cell_qdial_pane_ParamLimits

0x1672,	// (0x0009660e) cell_qdial_pane

0x1686,	// (0x00096622) cell_qdial_pane_g1_ParamLimits

0x1686,	// (0x00096622) cell_qdial_pane_g1

0x1693,	// (0x0009662f) cell_qdial_pane_g2_ParamLimits

0x1693,	// (0x0009662f) cell_qdial_pane_g2

0xf068,	// (0x000a4004) cell_qdial_pane_g3_ParamLimits

0xf068,	// (0x000a4004) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x000a4116) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x000a4116) cell_qdial_pane_g

0x16b1,	// (0x0009664d) cell_qdial_pane_t1_ParamLimits

0x16b1,	// (0x0009664d) cell_qdial_pane_t1

0x16c9,	// (0x00096665) cell_qdial_pane_t2_ParamLimits

0x16c9,	// (0x00096665) cell_qdial_pane_t2

0x16dc,	// (0x00096678) cell_qdial_pane_t3_ParamLimits

0x16dc,	// (0x00096678) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x000a411f) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x000a411f) cell_qdial_pane_t

0xecc7,	// (0x000a3c63) grid_highlight_pane_cp04

0xf074,	// (0x000a4010) thumbnail_qdial_pane_ParamLimits

0xf074,	// (0x000a4010) thumbnail_qdial_pane

0x9c97,	// (0x0009ec33) list_help_pane

0x9ca0,	// (0x0009ec3c) scroll_pane_cp02

0x16ef,	// (0x0009668b) help_list_pane_t1_ParamLimits

0x16ef,	// (0x0009668b) help_list_pane_t1

0x1722,	// (0x000966be) bg_notes_pane_g2

0x172a,	// (0x000966c6) bg_notes_pane_g3

0x1732,	// (0x000966ce) notes_bg_pane_g1

0x173a,	// (0x000966d6) notes_bg_pane_g4

0x1742,	// (0x000966de) notes_bg_pane_g5

0x174a,	// (0x000966e6) notes_bg_pane_g6

0x1752,	// (0x000966ee) notes_bg_pane_g7

0x175a,	// (0x000966f6) notes_bg_pane_g8

0x1762,	// (0x000966fe) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x000a413d) notes_bg_pane_g

0x176a,	// (0x00096706) list_notes_text_pane_ParamLimits

0x176a,	// (0x00096706) list_notes_text_pane

0x9ca9,	// (0x0009ec45) list_notes_text_pane_g1

0x1792,	// (0x0009672e) list_notes_text_pane_t1

0x17a0,	// (0x0009673c) listscroll_cale_week_pane

0x17c5,	// (0x00096761) bg_cale_heading_pane

0x9ccc,	// (0x0009ec68) bg_cale_pane_cp01

0x17e7,	// (0x00096783) cale_week_corner_pane

0x1801,	// (0x0009679d) cale_week_day_heading_pane

0x1823,	// (0x000967bf) cale_week_scroll_pane_g1

0x1840,	// (0x000967dc) cale_week_scroll_pane_g2

0x1853,	// (0x000967ef) cale_week_scroll_pane_g3

0x1866,	// (0x00096802) cale_week_scroll_pane_g4

0x1879,	// (0x00096815) cale_week_scroll_pane_g5

0x188c,	// (0x00096828) cale_week_scroll_pane_g6

0x189f,	// (0x0009683b) cale_week_scroll_pane_g7

0x18b2,	// (0x0009684e) cale_week_scroll_pane_g8

0x18c7,	// (0x00096863) cale_week_scroll_pane_g9

0x18da,	// (0x00096876) cale_week_scroll_pane_g10

0x18ed,	// (0x00096889) cale_week_scroll_pane_g11

0x1900,	// (0x0009689c) cale_week_scroll_pane_g12

0x1917,	// (0x000968b3) cale_week_scroll_pane_g13

0x1932,	// (0x000968ce) cale_week_scroll_pane_g14

0x194d,	// (0x000968e9) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x000a414c) cale_week_scroll_pane_g

0x197d,	// (0x00096919) cale_week_time_pane

0x1992,	// (0x0009692e) grid_cale_week_pane

0x9cfb,	// (0x0009ec97) scroll_pane_cp08

0x19b1,	// (0x0009694d) cell_cale_week_pane_ParamLimits

0x19b1,	// (0x0009694d) cell_cale_week_pane

0x1a13,	// (0x000969af) cale_week_day_heading_pane_t1

0x1a4e,	// (0x000969ea) cale_week_day_heading_pane_t2

0x1a89,	// (0x00096a25) cale_week_day_heading_pane_t3

0x1ac4,	// (0x00096a60) cale_week_day_heading_pane_t4

0x1aff,	// (0x00096a9b) cale_week_day_heading_pane_t5

0x1b3a,	// (0x00096ad6) cale_week_day_heading_pane_t6

0x1b75,	// (0x00096b11) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x000a416d) cale_week_day_heading_pane_t

0x9d18,	// (0x0009ecb4) bg_cale_side_pane

0x1bb0,	// (0x00096b4c) cale_week_time_pane_t1

0x1bca,	// (0x00096b66) cale_week_time_pane_t2

0x1be4,	// (0x00096b80) cale_week_time_pane_t3

0x1bfe,	// (0x00096b9a) cale_week_time_pane_t4

0x1c18,	// (0x00096bb4) cale_week_time_pane_t5

0x1c32,	// (0x00096bce) cale_week_time_pane_t6

0x1c52,	// (0x00096bee) cale_week_time_pane_t7

0x1c74,	// (0x00096c10) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x000a417c) cale_week_time_pane_t

0x1c98,	// (0x00096c34) cell_cale_week_pane_g2

0x1cbc,	// (0x00096c58) cell_cale_week_pane_g3_ParamLimits

0x1cbc,	// (0x00096c58) cell_cale_week_pane_g3

0x9d26,	// (0x0009ecc2) grid_highlight_pane_cp07

0x9d2e,	// (0x0009ecca) listscroll_gms_pane

0x9d38,	// (0x0009ecd4) grid_gms_pane

0x9d41,	// (0x0009ecdd) listscroll_gms_pane_g1

0x9d49,	// (0x0009ece5) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x000a418d) listscroll_gms_pane_g

0x1cd4,	// (0x00096c70) scroll_pane_cp010

0x1cdf,	// (0x00096c7b) cell_gms_pane_ParamLimits

0x1cdf,	// (0x00096c7b) cell_gms_pane

0x1cf2,	// (0x00096c8e) cell_gms_pane_g1

0x9d51,	// (0x0009eced) cell_gms_pane_g2

0x9d59,	// (0x0009ecf5) cell_gms_pane_g3

0x9d62,	// (0x0009ecfe) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x000a4192) cell_gms_pane_g

0x9d6b,	// (0x0009ed07) grid_highlight_pane_cp09

0x4365,	// (0x00099301) phob_pre_status_pane_g1

0x436d,	// (0x00099309) phob_pre_status_pane_g2

0x4375,	// (0x00099311) phob_pre_status_pane_g3

0x437d,	// (0x00099319) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x000a457d) phob_pre_status_pane_g

0x438d,	// (0x00099329) phob_pre_status_pane_t1

0x439d,	// (0x00099339) phob_pre_status_pane_t2

0x43ad,	// (0x00099349) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x000a4588) phob_pre_status_pane_t

0x9d73,	// (0x0009ed0f) bg_list_pane_cp05

0x1d02,	// (0x00096c9e) grid_vorec_pane

0x1d0c,	// (0x00096ca8) vorec_t1

0x1d1a,	// (0x00096cb6) vorec_t2

0x1d28,	// (0x00096cc4) vorec_t3

0x1d36,	// (0x00096cd2) vorec_t4

0x9c39,	// (0x0009ebd5) vorec_t5

0x9c47,	// (0x0009ebe3) vorec_t6

0x0004,

0xf1ff,	// (0x000a419b) vorec_t

0x9c55,	// (0x0009ebf1) wait_bar_pane_cp01

0x1d52,	// (0x00096cee) cell_vorec_pane_ParamLimits

0x1d52,	// (0x00096cee) cell_vorec_pane

0x1d65,	// (0x00096d01) cell_vorec_pane_g1

0xecc7,	// (0x000a3c63) grid_highlight_pane_cp05

0x1d7f,	// (0x00096d1b) cams_zoom_pane

0x1d8b,	// (0x00096d27) image_vga_pane

0x1d9a,	// (0x00096d36) main_camera_pane_g1

0x1da8,	// (0x00096d44) main_camera_pane_g2

0x1db4,	// (0x00096d50) main_camera_pane_g3

0x1dc0,	// (0x00096d5c) main_camera_pane_g4

0x1dcc,	// (0x00096d68) main_camera_pane_g5

0x1dd8,	// (0x00096d74) main_camera_pane_g6

0x1de4,	// (0x00096d80) main_camera_pane_g7

0x0007,

0xf20a,	// (0x000a41a6) main_camera_pane_g

0x1df0,	// (0x00096d8c) main_camera_pane_t1

0x1e02,	// (0x00096d9e) main_camera_pane_t2

0x0001,

0xf21b,	// (0x000a41b7) main_camera_pane_t

0x1e23,	// (0x00096dbf) cams_zoom_pane_cp_ParamLimits

0x1e23,	// (0x00096dbf) cams_zoom_pane_cp

0x1e47,	// (0x00096de3) image_cif_pane_ParamLimits

0x1e47,	// (0x00096de3) image_cif_pane

0x1e65,	// (0x00096e01) image_subqcif_pane

0x1e6d,	// (0x00096e09) main_video_pane_g1_ParamLimits

0x1e6d,	// (0x00096e09) main_video_pane_g1

0x1e8d,	// (0x00096e29) main_video_pane_g2_ParamLimits

0x1e8d,	// (0x00096e29) main_video_pane_g2

0x1ebd,	// (0x00096e59) main_video_pane_g3_ParamLimits

0x1ebd,	// (0x00096e59) main_video_pane_g3

0x1ee6,	// (0x00096e82) main_video_pane_g4_ParamLimits

0x1ee6,	// (0x00096e82) main_video_pane_g4

0x1f0f,	// (0x00096eab) main_video_pane_g5_ParamLimits

0x1f0f,	// (0x00096eab) main_video_pane_g5

0x9d87,	// (0x0009ed23) main_video_pane_g6_ParamLimits

0x9d87,	// (0x0009ed23) main_video_pane_g6

0x0006,

0xf220,	// (0x000a41bc) main_video_pane_g_ParamLimits

0xf220,	// (0x000a41bc) main_video_pane_g

0x1f31,	// (0x00096ecd) main_video_pane_t1_ParamLimits

0x1f31,	// (0x00096ecd) main_video_pane_t1

0x9da1,	// (0x0009ed3d) cams_zoom_pane_g1

0x9daa,	// (0x0009ed46) cams_zoom_pane_g2

0x9db3,	// (0x0009ed4f) cams_zoom_pane_g3

0x9dbc,	// (0x0009ed58) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x000a41cb) cams_zoom_pane_g

0x1f7b,	// (0x00096f17) grid_cams_pane

0x1f89,	// (0x00096f25) linegrid_cams_pane

0x1f97,	// (0x00096f33) cell_cams_pane_ParamLimits

0x1f97,	// (0x00096f33) cell_cams_pane

0x9dc5,	// (0x0009ed61) cams_burst_image_pane

0x9dcd,	// (0x0009ed69) cell_cams_pane_g1

0xecc7,	// (0x000a3c63) grid_highlight_pane_cp03

0xf03c,	// (0x000a3fd8) mp_bg_pane_g1

0xecc7,	// (0x000a3c63) bg_list_pane_cp03

0xbafe,	// (0x000a0a9a) bg_mp_pane

0xbb06,	// (0x000a0aa2) grid_mp_pane

0xbb0e,	// (0x000a0aaa) media_player_g1

0xbb16,	// (0x000a0ab2) media_player_t1

0xbb24,	// (0x000a0ac0) media_player_t2

0xbb32,	// (0x000a0ace) media_player_t3

0xbb40,	// (0x000a0adc) media_player_t4

0xbb4e,	// (0x000a0aea) media_player_t5

0xbb5c,	// (0x000a0af8) media_player_t6

0xbb6a,	// (0x000a0b06) media_player_t7

0x0006,

0xf5cb,	// (0x000a4567) media_player_t

0xbb78,	// (0x000a0b14) wait_bar_pane_cp02

0xf5b0,	// (0x000a454c) main_usb_pane_t

0x435c,	// (0x000992f8) cell_mp_pane

0xf03c,	// (0x000a3fd8) cell_mp_pane_g1

0xecc7,	// (0x000a3c63) grid_highlight_pane_cp06

0x9dd5,	// (0x0009ed71) grid_skin_colour_pane

0x9ddd,	// (0x0009ed79) list_highlight_pane_cp03

0x20b7,	// (0x00097053) skin_g1

0x9de5,	// (0x0009ed81) skin_t1

0x9df4,	// (0x0009ed90) skin_t2

0x0001,

0xf264,	// (0x000a4200) skin_t

0x20c1,	// (0x0009705d) cell_skin_colour_pane_ParamLimits

0x20c1,	// (0x0009705d) cell_skin_colour_pane

0x9e02,	// (0x0009ed9e) cell_skin_colour_pane_g1

0x2145,	// (0x000970e1) call_video_g1_ParamLimits

0x2145,	// (0x000970e1) call_video_g1

0x2155,	// (0x000970f1) call_video_g2_ParamLimits

0x2155,	// (0x000970f1) call_video_g2

0x0001,

0xf269,	// (0x000a4205) call_video_g_ParamLimits

0xf269,	// (0x000a4205) call_video_g

0x21af,	// (0x0009714b) call_video_uplink_pane_cp1_ParamLimits

0x21af,	// (0x0009714b) call_video_uplink_pane_cp1

0x9e14,	// (0x0009edb0) call_video_uplink_pane_cp2

0x227b,	// (0x00097217) video_down_crop_pane_ParamLimits

0x227b,	// (0x00097217) video_down_crop_pane

0x2379,	// (0x00097315) video_down_pane_ParamLimits

0x2379,	// (0x00097315) video_down_pane

0x9e1c,	// (0x0009edb8) video_down_subqcif_pane_ParamLimits

0x9e1c,	// (0x0009edb8) video_down_subqcif_pane

0x9e34,	// (0x0009edd0) video_down_subqcif_pane_cp_ParamLimits

0x9e34,	// (0x0009edd0) video_down_subqcif_pane_cp

0x9e5a,	// (0x0009edf6) im_reading_pane_ParamLimits

0x9e5a,	// (0x0009edf6) im_reading_pane

0x249b,	// (0x00097437) im_writing_pane_ParamLimits

0x249b,	// (0x00097437) im_writing_pane

0x24b9,	// (0x00097455) im_reading_pane_t1

0x9e74,	// (0x0009ee10) list_im_pane

0x9e85,	// (0x0009ee21) scroll_pane_cp07

0x250d,	// (0x000974a9) im_writing_pane_t1_ParamLimits

0x250d,	// (0x000974a9) im_writing_pane_t1

0x9e9e,	// (0x0009ee3a) im_writing_pane_t2_ParamLimits

0x9e9e,	// (0x0009ee3a) im_writing_pane_t2

0x0001,

0xf273,	// (0x000a420f) im_writing_pane_t_ParamLimits

0xf273,	// (0x000a420f) im_writing_pane_t

0xecc7,	// (0x000a3c63) input_focus_pane_cp04

0xecc7,	// (0x000a3c63) input_focus_pane_cp05

0x2522,	// (0x000974be) list_im_single_pane_ParamLimits

0x2522,	// (0x000974be) list_im_single_pane

0x2546,	// (0x000974e2) list_single_im_pane_t1

0x4320,	// (0x000992bc) blid_accuracy_pane

0x4328,	// (0x000992c4) blid_compass_pane

0x4332,	// (0x000992ce) main_location_t1

0x4340,	// (0x000992dc) main_location_t2

0x434e,	// (0x000992ea) main_location_t3

0x0002,

0xf5da,	// (0x000a4576) main_location_t

0xecc7,	// (0x000a3c63) aid_levels_location

0xf03c,	// (0x000a3fd8) blid_accuracy_pane_g1

0xf03c,	// (0x000a3fd8) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000a4271) blid_accuracy_pane_g

0x9ee6,	// (0x0009ee82) wml_content_pane

0x9f24,	// (0x0009eec0) wml_button_pane_ParamLimits

0x9f24,	// (0x0009eec0) wml_button_pane

0x2555,	// (0x000974f1) wml_list_single_large_pane_ParamLimits

0x2555,	// (0x000974f1) wml_list_single_large_pane

0x257f,	// (0x0009751b) wml_list_single_medium_pane_ParamLimits

0x257f,	// (0x0009751b) wml_list_single_medium_pane

0x25b0,	// (0x0009754c) wml_list_single_small_pane_ParamLimits

0x25b0,	// (0x0009754c) wml_list_single_small_pane

0x9f38,	// (0x0009eed4) wml_selection_box_pane_ParamLimits

0x9f38,	// (0x0009eed4) wml_selection_box_pane

0x9f4b,	// (0x0009eee7) wml_list_single_pane_t1

0x9f5a,	// (0x0009eef6) wml_list_single_medium_pane_t1

0x9f69,	// (0x0009ef05) wml_list_single_large_pane_t1

0x9f78,	// (0x0009ef14) input_focus_pane_cp02_ParamLimits

0x9f78,	// (0x0009ef14) input_focus_pane_cp02

0x9f8b,	// (0x0009ef27) wml_selection_box_pane_g1

0x9f94,	// (0x0009ef30) wml_selection_box_pane_t1_ParamLimits

0x9f94,	// (0x0009ef30) wml_selection_box_pane_t1

0xef22,	// (0x000a3ebe) bg_wml_button_pane_ParamLimits

0xef22,	// (0x000a3ebe) bg_wml_button_pane

0x9fac,	// (0x0009ef48) wml_button_pane_g1

0x9fb4,	// (0x0009ef50) wml_button_pane_t1

0x9fac,	// (0x0009ef48) wml_button_bg_pane_g1

0x9fc4,	// (0x0009ef60) wml_button_bg_pane_g2

0x9fcc,	// (0x0009ef68) wml_button_bg_pane_g3

0x9fd4,	// (0x0009ef70) wml_button_bg_pane_g4

0x9fdc,	// (0x0009ef78) wml_button_bg_pane_g5

0x9fe4,	// (0x0009ef80) wml_button_bg_pane_g6

0x9fec,	// (0x0009ef88) wml_button_bg_pane_g7

0x9ff4,	// (0x0009ef90) wml_button_bg_pane_g8

0x9ffc,	// (0x0009ef98) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000a4214) wml_button_bg_pane_g

0x25ea,	// (0x00097586) bg_list_pane_cp02

0xa004,	// (0x0009efa0) mce_header_pane_ParamLimits

0xa004,	// (0x0009efa0) mce_header_pane

0xa01a,	// (0x0009efb6) mce_icon_pane

0xa01a,	// (0x0009efb6) mce_image_pane

0xa023,	// (0x0009efbf) mce_text_pane_ParamLimits

0xa023,	// (0x0009efbf) mce_text_pane

0x25f4,	// (0x00097590) scroll_pane_cp03

0x9f1c,	// (0x0009eeb8) scroll_pane_cp04

0xa036,	// (0x0009efd2) scroll_pane_cp05_ParamLimits

0xa036,	// (0x0009efd2) scroll_pane_cp05

0x25fe,	// (0x0009759a) mce_header_field_pane_ParamLimits

0x25fe,	// (0x0009759a) mce_header_field_pane

0x261e,	// (0x000975ba) mce_header_field_pane_2_ParamLimits

0x261e,	// (0x000975ba) mce_header_field_pane_2

0x2634,	// (0x000975d0) mce_header_field_pane_3

0x263c,	// (0x000975d8) list_single_mce_message_pane_ParamLimits

0x263c,	// (0x000975d8) list_single_mce_message_pane

0x2667,	// (0x00097603) list_single_mce_smart_pane_ParamLimits

0x2667,	// (0x00097603) list_single_mce_smart_pane

0xa042,	// (0x0009efde) input_focus_pane_cp03

0xa04b,	// (0x0009efe7) list_header_data_pane

0x269d,	// (0x00097639) mce_header_field_pane_t1

0x26ab,	// (0x00097647) list_single_mce_header_pane_ParamLimits

0x26ab,	// (0x00097647) list_single_mce_header_pane

0xa053,	// (0x0009efef) list_single_mce_header_pane_t1

0xa062,	// (0x0009effe) list_single_mce_message_pane_g1

0xa06a,	// (0x0009f006) list_single_mce_message_pane_t1

0x26fd,	// (0x00097699) bg_cale_heading_pane_cp01_ParamLimits

0x26fd,	// (0x00097699) bg_cale_heading_pane_cp01

0xa078,	// (0x0009f014) bg_cale_pane_cp02_ParamLimits

0xa078,	// (0x0009f014) bg_cale_pane_cp02

0x2740,	// (0x000976dc) cale_month_corner_pane

0x275a,	// (0x000976f6) cale_month_day_heading_pane_ParamLimits

0x275a,	// (0x000976f6) cale_month_day_heading_pane

0x27b5,	// (0x00097751) cale_month_pane_g1_ParamLimits

0x27b5,	// (0x00097751) cale_month_pane_g1

0x27ed,	// (0x00097789) cale_month_pane_g2_ParamLimits

0x27ed,	// (0x00097789) cale_month_pane_g2

0x2816,	// (0x000977b2) cale_month_pane_g3_ParamLimits

0x2816,	// (0x000977b2) cale_month_pane_g3

0x2862,	// (0x000977fe) cale_month_pane_g4_ParamLimits

0x2862,	// (0x000977fe) cale_month_pane_g4

0x28ae,	// (0x0009784a) cale_month_pane_g5_ParamLimits

0x28ae,	// (0x0009784a) cale_month_pane_g5

0x28fa,	// (0x00097896) cale_month_pane_g6_ParamLimits

0x28fa,	// (0x00097896) cale_month_pane_g6

0x2946,	// (0x000978e2) cale_month_pane_g7_ParamLimits

0x2946,	// (0x000978e2) cale_month_pane_g7

0x29aa,	// (0x00097946) cale_month_pane_g8_ParamLimits

0x29aa,	// (0x00097946) cale_month_pane_g8

0x2a0e,	// (0x000979aa) cale_month_pane_g9_ParamLimits

0x2a0e,	// (0x000979aa) cale_month_pane_g9

0x2a6c,	// (0x00097a08) cale_month_pane_g10_ParamLimits

0x2a6c,	// (0x00097a08) cale_month_pane_g10

0x2ac8,	// (0x00097a64) cale_month_pane_g11_ParamLimits

0x2ac8,	// (0x00097a64) cale_month_pane_g11

0x2b1c,	// (0x00097ab8) cale_month_pane_g12_ParamLimits

0x2b1c,	// (0x00097ab8) cale_month_pane_g12

0x2b72,	// (0x00097b0e) cale_month_pane_g13_ParamLimits

0x2b72,	// (0x00097b0e) cale_month_pane_g13

0x000c,

0xf28b,	// (0x000a4227) cale_month_pane_g_ParamLimits

0xf28b,	// (0x000a4227) cale_month_pane_g

0x2bc8,	// (0x00097b64) cale_month_week_pane

0x2bdd,	// (0x00097b79) grid_cale_month_pane_ParamLimits

0x2bdd,	// (0x00097b79) grid_cale_month_pane

0x2c2b,	// (0x00097bc7) cale_month_day_heading_pane_t1

0x2cb1,	// (0x00097c4d) cale_month_day_heading_pane_t2

0x2d42,	// (0x00097cde) cale_month_day_heading_pane_t3

0x2dd3,	// (0x00097d6f) cale_month_day_heading_pane_t4

0x2e64,	// (0x00097e00) cale_month_day_heading_pane_t5

0x2ef5,	// (0x00097e91) cale_month_day_heading_pane_t6

0x2f86,	// (0x00097f22) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000a4242) cale_month_day_heading_pane_t

0x9d18,	// (0x0009ecb4) bg_cale_side_pane_cp01

0x302f,	// (0x00097fcb) cale_month_week_pane_t1

0x3048,	// (0x00097fe4) cale_month_week_pane_t2

0x3061,	// (0x00097ffd) cale_month_week_pane_t3

0x307a,	// (0x00098016) cale_month_week_pane_t4

0x3093,	// (0x0009802f) cale_month_week_pane_t5

0x30b4,	// (0x00098050) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000a4251) cale_month_week_pane_t

0x30d5,	// (0x00098071) cell_cale_month_pane_ParamLimits

0x30d5,	// (0x00098071) cell_cale_month_pane

0x3221,	// (0x000981bd) cell_cale_month_pane_g1

0x322d,	// (0x000981c9) cell_cale_month_pane_t1_ParamLimits

0x322d,	// (0x000981c9) cell_cale_month_pane_t1

0x9d26,	// (0x0009ecc2) grid_highlight_pane_cp08

0xf03c,	// (0x000a3fd8) main_smil_g1

0x324d,	// (0x000981e9) smil_status_pane

0xa0b7,	// (0x0009f053) smil_text_pane

0xba1e,	// (0x000a09ba) bg_popup_call3_rect_pane_g8

0xba26,	// (0x000a09c2) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x000a450a) bg_popup_call3_rect_pane_g

0xbc6d,	// (0x000a0c09) smil_status_volume_pane_g1

0xa0c1,	// (0x0009f05d) smil_status_pane_t1

0x4758,	// (0x000996f4) volume_smil_pane

0xa0d8,	// (0x0009f074) list_smil_text_pane

0x3260,	// (0x000981fc) scroll_pane_cp011

0x326b,	// (0x00098207) smil_text_list_pane_t1_ParamLimits

0x326b,	// (0x00098207) smil_text_list_pane_t1

0x32e3,	// (0x0009827f) aid_volume_smil_ParamLimits

0x32e3,	// (0x0009827f) aid_volume_smil

0xf03c,	// (0x000a3fd8) smil_volume_pane_g1

0xf03c,	// (0x000a3fd8) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000a4271) smil_volume_pane_g

0x17a0,	// (0x0009673c) listscroll_cale_day_pane

0xa0e2,	// (0x0009f07e) bg_cale_pane

0xa0fa,	// (0x0009f096) list_cale_pane

0xa11d,	// (0x0009f0b9) scroll_pane_cp09

0xa12e,	// (0x0009f0ca) cale_bg_pane_g1

0xa136,	// (0x0009f0d2) cale_bg_pane_g2

0xa13e,	// (0x0009f0da) cale_bg_pane_g3

0xa146,	// (0x0009f0e2) cale_bg_pane_g4

0xa14e,	// (0x0009f0ea) cale_bg_pane_g5

0xa156,	// (0x0009f0f2) cale_bg_pane_g6

0xa15e,	// (0x0009f0fa) cale_bg_pane_g7

0xa166,	// (0x0009f102) cale_bg_pane_g8

0xa16e,	// (0x0009f10a) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x000a4276) cale_bg_pane_g

0x330d,	// (0x000982a9) list_cale_time_pane_ParamLimits

0x330d,	// (0x000982a9) list_cale_time_pane

0xa176,	// (0x0009f112) list_cale_time_pane_g1_ParamLimits

0xa176,	// (0x0009f112) list_cale_time_pane_g1

0xa182,	// (0x0009f11e) list_cale_time_pane_g2_ParamLimits

0xa182,	// (0x0009f11e) list_cale_time_pane_g2

0x332f,	// (0x000982cb) list_cale_time_pane_g3_ParamLimits

0x332f,	// (0x000982cb) list_cale_time_pane_g3

0x333d,	// (0x000982d9) list_cale_time_pane_g4_ParamLimits

0x333d,	// (0x000982d9) list_cale_time_pane_g4

0x334b,	// (0x000982e7) list_cale_time_pane_g5_ParamLimits

0x334b,	// (0x000982e7) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000a4289) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000a4289) list_cale_time_pane_g

0xa19c,	// (0x0009f138) list_cale_time_pane_t1_ParamLimits

0xa19c,	// (0x0009f138) list_cale_time_pane_t1

0xa1c4,	// (0x0009f160) list_cale_time_pane_t2_ParamLimits

0xa1c4,	// (0x0009f160) list_cale_time_pane_t2

0x36ed,	// (0x00098689) aid_blid_cardinal_pane

0x372f,	// (0x000986cb) compass_pane_t4

0xa1ec,	// (0x0009f188) list_cale_time_pane_t4_ParamLimits

0xa1ec,	// (0x0009f188) list_cale_time_pane_t4

0x373d,	// (0x000986d9) compass_pane_t5

0x374d,	// (0x000986e9) compass_pane_t6

0x375b,	// (0x000986f7) compass_pane_t7

0xa69d,	// (0x0009f639) navi_pane_cc_t1

0xa87a,	// (0x0009f816) aid_phob_thumbnail_center_pane

0x3e26,	// (0x00098dc2) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x000a4296) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x000a4296) list_cale_time_pane_t

0xe91e,	// (0x000a38ba) bg_popup_window_pane_cp02_ParamLimits

0xe91e,	// (0x000a38ba) bg_popup_window_pane_cp02

0xa214,	// (0x0009f1b0) heading_pane_cp01_ParamLimits

0xa214,	// (0x0009f1b0) heading_pane_cp01

0xa220,	// (0x0009f1bc) loc_req_pane_ParamLimits

0xa220,	// (0x0009f1bc) loc_req_pane

0xa230,	// (0x0009f1cc) loc_type_pane_ParamLimits

0xa230,	// (0x0009f1cc) loc_type_pane

0xa242,	// (0x0009f1de) loc_type_pane_t1_ParamLimits

0xa242,	// (0x0009f1de) loc_type_pane_t1

0xa254,	// (0x0009f1f0) loc_type_pane_t2_ParamLimits

0xa254,	// (0x0009f1f0) loc_type_pane_t2

0xa266,	// (0x0009f202) loc_type_pane_t3_ParamLimits

0xa266,	// (0x0009f202) loc_type_pane_t3

0x0002,

0xf301,	// (0x000a429d) loc_type_pane_t_ParamLimits

0xf301,	// (0x000a429d) loc_type_pane_t

0xa278,	// (0x0009f214) list_loc_req_pane

0xa282,	// (0x0009f21e) scroll_pane_cp012

0x3359,	// (0x000982f5) list_single_loc_request_popup_menu_pane_ParamLimits

0x3359,	// (0x000982f5) list_single_loc_request_popup_menu_pane

0xa28d,	// (0x0009f229) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa28d,	// (0x0009f229) list_single_loc_request_popup_menu_pane_g1

0xa299,	// (0x0009f235) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa299,	// (0x0009f235) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x000a42a4) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x000a42a4) list_single_loc_request_popup_menu_pane_g

0xa2a5,	// (0x0009f241) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa2a5,	// (0x0009f241) list_single_loc_request_popup_menu_pane_t1

0x336b,	// (0x00098307) bg_popup_window_pane_cp03_ParamLimits

0x336b,	// (0x00098307) bg_popup_window_pane_cp03

0x3379,	// (0x00098315) heading_loc_req_pane_ParamLimits

0x3379,	// (0x00098315) heading_loc_req_pane

0x3385,	// (0x00098321) popup_dyc_status_message_window_g1_ParamLimits

0x3385,	// (0x00098321) popup_dyc_status_message_window_g1

0x3391,	// (0x0009832d) popup_dyc_status_message_window_t1_ParamLimits

0x3391,	// (0x0009832d) popup_dyc_status_message_window_t1

0x33a3,	// (0x0009833f) popup_dyc_status_message_window_t2_ParamLimits

0x33a3,	// (0x0009833f) popup_dyc_status_message_window_t2

0x33b5,	// (0x00098351) popup_dyc_status_message_window_t3_ParamLimits

0x33b5,	// (0x00098351) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x000a42a9) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x000a42a9) popup_dyc_status_message_window_t

0xecc7,	// (0x000a3c63) bg_heading_pane_cp01

0xa2bb,	// (0x0009f257) heading_loc_req_pane_g1

0xa2c3,	// (0x0009f25f) heading_loc_req_pane_g2

0xa2cb,	// (0x0009f267) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x000a42b0) heading_loc_req_pane_g

0xa2d3,	// (0x0009f26f) heading_loc_req_pane_t1

0xa2e2,	// (0x0009f27e) bg_popup_sub_pane_cp01_ParamLimits

0xa2e2,	// (0x0009f27e) bg_popup_sub_pane_cp01

0xa2f0,	// (0x0009f28c) popup_cale_events_window_g1_ParamLimits

0xa2f0,	// (0x0009f28c) popup_cale_events_window_g1

0xa310,	// (0x0009f2ac) popup_cale_events_window_g2_ParamLimits

0xa310,	// (0x0009f2ac) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x000a42e4) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x000a42e4) popup_cale_events_window_g

0xa330,	// (0x0009f2cc) popup_cale_events_window_t1_ParamLimits

0xa330,	// (0x0009f2cc) popup_cale_events_window_t1

0xa342,	// (0x0009f2de) popup_cale_events_window_t2_ParamLimits

0xa342,	// (0x0009f2de) popup_cale_events_window_t2

0xa380,	// (0x0009f31c) popup_cale_events_window_t3_ParamLimits

0xa380,	// (0x0009f31c) popup_cale_events_window_t3

0xa3ba,	// (0x0009f356) popup_cale_events_window_t4_ParamLimits

0xa3ba,	// (0x0009f356) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x000a42e9) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x000a42e9) popup_cale_events_window_t

0x34ba,	// (0x00098456) call_type_pane

0xa3f0,	// (0x0009f38c) popup_call_status_window_g1

0x34c6,	// (0x00098462) popup_call_status_window_g2

0x34d2,	// (0x0009846e) popup_call_status_window_g3

0x0002,

0xf356,	// (0x000a42f2) popup_call_status_window_g

0xa3fe,	// (0x0009f39a) call_type_pane_g1

0xa407,	// (0x0009f3a3) call_type_pane_g2

0x0001,

0xf35d,	// (0x000a42f9) call_type_pane_g

0xecc7,	// (0x000a3c63) bg_popup_sub_pane_cp02

0xa410,	// (0x0009f3ac) listscroll_popup_wml_pane

0xa418,	// (0x0009f3b4) list_wml_pane

0xa422,	// (0x0009f3be) scroll_pane_cp013

0xa42d,	// (0x0009f3c9) list_single_graphic_popup_wml_pane_ParamLimits

0xa42d,	// (0x0009f3c9) list_single_graphic_popup_wml_pane

0xf03c,	// (0x000a3fd8) list_single_graphic_popup_wml_pane_g1

0xa441,	// (0x0009f3dd) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x000a42fe) list_single_graphic_popup_wml_pane_g

0xa449,	// (0x0009f3e5) list_single_graphic_popup_wml_pane_t1

0xa45f,	// (0x0009f3fb) aid_call_pane

0xef1a,	// (0x000a3eb6) popup_clock_analogue_window_g1

0xef1a,	// (0x000a3eb6) popup_clock_analogue_window_g2

0x34de,	// (0x0009847a) popup_clock_analogue_window_g3

0x34de,	// (0x0009847a) popup_clock_analogue_window_g4

0xf03c,	// (0x000a3fd8) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x000a4303) popup_clock_analogue_window_g

0x34e6,	// (0x00098482) popup_clock_analogue_window_t1

0x34f4,	// (0x00098490) clock_digital_number_pane_ParamLimits

0x34f4,	// (0x00098490) clock_digital_number_pane

0x3500,	// (0x0009849c) clock_digital_number_pane_cp02_ParamLimits

0x3500,	// (0x0009849c) clock_digital_number_pane_cp02

0x350c,	// (0x000984a8) clock_digital_number_pane_cp03_ParamLimits

0x350c,	// (0x000984a8) clock_digital_number_pane_cp03

0x3518,	// (0x000984b4) clock_digital_number_pane_cp04_ParamLimits

0x3518,	// (0x000984b4) clock_digital_number_pane_cp04

0x3528,	// (0x000984c4) clock_digital_separator_pane_ParamLimits

0x3528,	// (0x000984c4) clock_digital_separator_pane

0x3534,	// (0x000984d0) popup_clock_digital_window_t1

0xf03c,	// (0x000a3fd8) clock_digital_number_pane_g1

0xf03c,	// (0x000a3fd8) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000a4271) clock_digital_number_pane_g

0xf03c,	// (0x000a3fd8) clock_digital_separator_pane_g1

0xf03c,	// (0x000a3fd8) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000a4271) clock_digital_separator_pane_g

0xecc7,	// (0x000a3c63) bg_popup_window_pane_cp04

0xa467,	// (0x0009f403) heading_pane_cp03

0xa46f,	// (0x0009f40b) listscroll_popup_gms_pane

0xa477,	// (0x0009f413) grid_large_graphic_popup_pane

0xa481,	// (0x0009f41d) listscroll_popup_gms_pane_g1

0xa489,	// (0x0009f425) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x000a430e) listscroll_popup_gms_pane_g

0x9f1c,	// (0x0009eeb8) scroll_pane_cp014

0x3551,	// (0x000984ed) cell_large_graphic_popup_pane_ParamLimits

0x3551,	// (0x000984ed) cell_large_graphic_popup_pane

0x3569,	// (0x00098505) cell_large_graphic_popup_pane_g1_ParamLimits

0x3569,	// (0x00098505) cell_large_graphic_popup_pane_g1

0xa491,	// (0x0009f42d) cell_large_graphic_popup_pane_g2_ParamLimits

0xa491,	// (0x0009f42d) cell_large_graphic_popup_pane_g2

0xa49d,	// (0x0009f439) cell_large_graphic_popup_pane_g3_ParamLimits

0xa49d,	// (0x0009f439) cell_large_graphic_popup_pane_g3

0xa4aa,	// (0x0009f446) cell_large_graphic_popup_pane_g4_ParamLimits

0xa4aa,	// (0x0009f446) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x000a4313) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x000a4313) cell_large_graphic_popup_pane_g

0xa4ba,	// (0x0009f456) grid_highlight_pane_cp010

0xf03c,	// (0x000a3fd8) bg_popup_call_pane_g1

0xa4c4,	// (0x0009f460) list_single_graphic_popup_conf_pane_ParamLimits

0xa4c4,	// (0x0009f460) list_single_graphic_popup_conf_pane

0xa4d7,	// (0x0009f473) list_highlight_pane_cp01

0xa4e0,	// (0x0009f47c) list_single_graphic_popup_conf_pane_g1

0xa4e8,	// (0x0009f484) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x000a431c) list_single_graphic_popup_conf_pane_g

0xa4f0,	// (0x0009f48c) list_single_graphic_popup_conf_pane_t1

0xa4fe,	// (0x0009f49a) linegrid_cams_pane_g1

0x3575,	// (0x00098511) linegrid_cams_pane_g2

0x9d59,	// (0x0009ecf5) linegrid_cams_pane_g3

0xa507,	// (0x0009f4a3) linegrid_cams_pane_g4

0x357e,	// (0x0009851a) linegrid_cams_pane_g5

0x3587,	// (0x00098523) linegrid_cams_pane_g6

0x9d62,	// (0x0009ecfe) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x000a4321) linegrid_cams_pane_g

0xa510,	// (0x0009f4ac) popup_clock_analogue_window

0xa510,	// (0x0009f4ac) popup_clock_digital_window

0xecc7,	// (0x000a3c63) popup_phob_thumbnail_window

0xf03c,	// (0x000a3fd8) call_video_uplink_pane_g1

0xa519,	// (0x0009f4b5) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000a4330) call_video_uplink_pane_g

0xa521,	// (0x0009f4bd) video_uplink_pane

0xa529,	// (0x0009f4c5) mce_image_pane_g1

0x3590,	// (0x0009852c) mce_image_pane_g2

0x359a,	// (0x00098536) mce_image_pane_g3

0x35a2,	// (0x0009853e) mce_image_pane_g4

0x35aa,	// (0x00098546) mce_image_pane_g5

0x0004,

0xf399,	// (0x000a4335) mce_image_pane_g

0xa533,	// (0x0009f4cf) control_top_pane_stacon_cp01_ParamLimits

0xa533,	// (0x0009f4cf) control_top_pane_stacon_cp01

0xa547,	// (0x0009f4e3) uni_indicator_pane_stacon_cp01_ParamLimits

0xa547,	// (0x0009f4e3) uni_indicator_pane_stacon_cp01

0xa558,	// (0x0009f4f4) bg_popup_sub_pane_cp03

0xa562,	// (0x0009f4fe) chi_dic_find_pane

0x35b2,	// (0x0009854e) listscroll_chi_dic_pane

0xa56a,	// (0x0009f506) main_pane_chidic_g1

0xa572,	// (0x0009f50e) chi_dic_find_pane_t1

0xa580,	// (0x0009f51c) find_chidic_pane

0xa589,	// (0x0009f525) chi_dic_list_pane_ParamLimits

0xa589,	// (0x0009f525) chi_dic_list_pane

0xa59a,	// (0x0009f536) scroll_pane_cp020

0xa5a2,	// (0x0009f53e) find_chidic_pane_t1

0xecc7,	// (0x000a3c63) input_focus_pane_cp06

0x35c6,	// (0x00098562) list_chi_dic_pane_ParamLimits

0x35c6,	// (0x00098562) list_chi_dic_pane

0x35e0,	// (0x0009857c) list_chi_dic_pane_t1_ParamLimits

0x35e0,	// (0x0009857c) list_chi_dic_pane_t1

0xecc7,	// (0x000a3c63) list_highlight_pane_cp020

0xa5b1,	// (0x0009f54d) bg_cale_heading_pane_g1

0x35f3,	// (0x0009858f) bg_cale_heading_pane_g2

0x35fb,	// (0x00098597) bg_cale_heading_pane_g3

0x3603,	// (0x0009859f) bg_cale_heading_pane_g4

0x360d,	// (0x000985a9) bg_cale_heading_pane_g5

0x3617,	// (0x000985b3) bg_cale_heading_pane_g6

0x361f,	// (0x000985bb) bg_cale_heading_pane_g7

0x3627,	// (0x000985c3) bg_cale_heading_pane_g8

0x3631,	// (0x000985cd) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000a4340) bg_cale_heading_pane_g

0xa5b1,	// (0x0009f54d) bg_cale_side_pane_g1

0x363b,	// (0x000985d7) bg_cale_side_pane_g2

0x3645,	// (0x000985e1) bg_cale_side_pane_g3

0x364f,	// (0x000985eb) bg_cale_side_pane_g4

0x3659,	// (0x000985f5) bg_cale_side_pane_g5

0x3663,	// (0x000985ff) bg_cale_side_pane_g6

0x366d,	// (0x00098609) bg_cale_side_pane_g7

0x3677,	// (0x00098613) bg_cale_side_pane_g8

0x367f,	// (0x0009861b) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000a4353) bg_cale_side_pane_g

0x3687,	// (0x00098623) popup_call_status_window_ParamLimits

0x3687,	// (0x00098623) popup_call_status_window

0xa5b9,	// (0x0009f555) stacon_top_pane

0xa5c1,	// (0x0009f55d) status_pane_ParamLimits

0xa5c1,	// (0x0009f55d) status_pane

0xa5d6,	// (0x0009f572) status_small_pane

0xa5de,	// (0x0009f57a) control_pane

0xecc7,	// (0x000a3c63) stacon_bottom_pane

0xa5e6,	// (0x0009f582) list_single_mce_smart_pane_t1_ParamLimits

0xa5e6,	// (0x0009f582) list_single_mce_smart_pane_t1

0xa5f9,	// (0x0009f595) list_single_mce_smart_pane_t2_ParamLimits

0xa5f9,	// (0x0009f595) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x000a4366) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x000a4366) list_single_mce_smart_pane_t

0x3693,	// (0x0009862f) compass_pane

0x369f,	// (0x0009863b) main_location2_pane_t1

0x36b3,	// (0x0009864f) main_location2_pane_t2

0x36c7,	// (0x00098663) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000a436b) main_location2_pane_t

0xa618,	// (0x0009f5b4) compass_pane_g1_ParamLimits

0xa618,	// (0x0009f5b4) compass_pane_g1

0x3711,	// (0x000986ad) compass_pane_t1

0x3720,	// (0x000986bc) compass_pane_t2

0x0005,

0xf3d8,	// (0x000a4374) compass_pane_t

0x376b,	// (0x00098707) text_secondary_cp61

0xa694,	// (0x0009f630) navi_pane_cams_g5

0xa710,	// (0x0009f6ac) navi_pane_im_t1

0xa71e,	// (0x0009f6ba) navi_pane_mp_g1_ParamLimits

0xa71e,	// (0x0009f6ba) navi_pane_mp_g1

0xa732,	// (0x0009f6ce) navi_pane_mp_g2_ParamLimits

0xa732,	// (0x0009f6ce) navi_pane_mp_g2

0xa73e,	// (0x0009f6da) navi_pane_mp_g3_ParamLimits

0xa73e,	// (0x0009f6da) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x000a4388) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x000a4388) navi_pane_mp_g

0xa74a,	// (0x0009f6e6) navi_pane_mp_t1

0xa758,	// (0x0009f6f4) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x000a438f) navi_pane_mp_t

0xa7c3,	// (0x0009f75f) navi_pane_vt_g1

0xa74a,	// (0x0009f6e6) navi_pane_vt_t1

0xa7cb,	// (0x0009f767) navi_slider_pane

0x9d73,	// (0x0009ed0f) zooming_pane

0xa7db,	// (0x0009f777) navi_slider_pane_g1

0x37a6,	// (0x00098742) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x000a4396) navi_slider_pane_g

0xa7ff,	// (0x0009f79b) aid_levels_zoom

0xa807,	// (0x0009f7a3) zooming_pane_g1

0xa80f,	// (0x0009f7ab) zooming_pane_g2

0xa80f,	// (0x0009f7ab) zooming_pane_g3

0x0002,

0xf409,	// (0x000a43a5) zooming_pane_g

0xa817,	// (0x0009f7b3) level_10_zoom

0xa820,	// (0x0009f7bc) level_11_zoom

0xa829,	// (0x0009f7c5) level_1_zoom

0xa832,	// (0x0009f7ce) level_2_zoom

0xa83b,	// (0x0009f7d7) level_3_zoom

0xa844,	// (0x0009f7e0) level_4_zoom

0xa84d,	// (0x0009f7e9) level_5_zoom

0xa856,	// (0x0009f7f2) level_6_zoom

0xa85f,	// (0x0009f7fb) level_7_zoom

0xa868,	// (0x0009f804) level_8_zoom

0xa871,	// (0x0009f80d) level_9_zoom

0xa882,	// (0x0009f81e) popup_phob_thumbnail_window_g1

0xa88a,	// (0x0009f826) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x000a43ac) popup_phob_thumbnail_window_g

0xbb80,	// (0x000a0b1c) level_1_location

0xbb88,	// (0x000a0b24) level_2_location

0xbb90,	// (0x000a0b2c) level_3_location

0xbb98,	// (0x000a0b34) level_4_location

0x9d73,	// (0x0009ed0f) level_5_location

0x37b8,	// (0x00098754) mce_icon_pane_g1

0x37c0,	// (0x0009875c) mce_icon_pane_g2

0x0001,

0xf415,	// (0x000a43b1) mce_icon_pane_g

0x37c8,	// (0x00098764) main_mup_pane_g1_ParamLimits

0x37c8,	// (0x00098764) main_mup_pane_g1

0x37e0,	// (0x0009877c) main_mup_pane_g2_ParamLimits

0x37e0,	// (0x0009877c) main_mup_pane_g2

0x37fc,	// (0x00098798) main_mup_pane_g3_ParamLimits

0x37fc,	// (0x00098798) main_mup_pane_g3

0x3818,	// (0x000987b4) main_mup_pane_g4_ParamLimits

0x3818,	// (0x000987b4) main_mup_pane_g4

0x3834,	// (0x000987d0) main_mup_pane_g5_ParamLimits

0x3834,	// (0x000987d0) main_mup_pane_g5

0x3855,	// (0x000987f1) main_mup_pane_g6_ParamLimits

0x3855,	// (0x000987f1) main_mup_pane_g6

0x3871,	// (0x0009880d) main_mup_pane_g7_ParamLimits

0x3871,	// (0x0009880d) main_mup_pane_g7

0x388d,	// (0x00098829) main_mup_pane_g8_ParamLimits

0x388d,	// (0x00098829) main_mup_pane_g8

0x38ad,	// (0x00098849) main_mup_pane_g9_ParamLimits

0x38ad,	// (0x00098849) main_mup_pane_g9

0x38cc,	// (0x00098868) main_mup_pane_g10_ParamLimits

0x38cc,	// (0x00098868) main_mup_pane_g10

0x38eb,	// (0x00098887) main_mup_pane_g11_ParamLimits

0x38eb,	// (0x00098887) main_mup_pane_g11

0x3903,	// (0x0009889f) main_mup_pane_g12_ParamLimits

0x3903,	// (0x0009889f) main_mup_pane_g12

0x3911,	// (0x000988ad) main_mup_pane_g13_ParamLimits

0x3911,	// (0x000988ad) main_mup_pane_g13

0x000c,

0xf41a,	// (0x000a43b6) main_mup_pane_g_ParamLimits

0xf41a,	// (0x000a43b6) main_mup_pane_g

0x3927,	// (0x000988c3) main_mup_pane_t1_ParamLimits

0x3927,	// (0x000988c3) main_mup_pane_t1

0x3944,	// (0x000988e0) main_mup_pane_t2_ParamLimits

0x3944,	// (0x000988e0) main_mup_pane_t2

0x395e,	// (0x000988fa) main_mup_pane_t3_ParamLimits

0x395e,	// (0x000988fa) main_mup_pane_t3

0x3978,	// (0x00098914) main_mup_pane_t4_ParamLimits

0x3978,	// (0x00098914) main_mup_pane_t4

0x398a,	// (0x00098926) main_mup_pane_t5_ParamLimits

0x398a,	// (0x00098926) main_mup_pane_t5

0x399c,	// (0x00098938) main_mup_pane_t6_ParamLimits

0x399c,	// (0x00098938) main_mup_pane_t6

0x0005,

0xf435,	// (0x000a43d1) main_mup_pane_t_ParamLimits

0xf435,	// (0x000a43d1) main_mup_pane_t

0x39b2,	// (0x0009894e) mup_progress_pane_ParamLimits

0x39b2,	// (0x0009894e) mup_progress_pane

0x39be,	// (0x0009895a) mup_visualizer_pane_ParamLimits

0x39be,	// (0x0009895a) mup_visualizer_pane

0x39f8,	// (0x00098994) mup_volume_pane_ParamLimits

0x39f8,	// (0x00098994) mup_volume_pane

0xa3f0,	// (0x0009f38c) mup_visualizer_pane_g1_ParamLimits

0xa3f0,	// (0x0009f38c) mup_visualizer_pane_g1

0xa3f0,	// (0x0009f38c) mup_visualizer_pane_g2_ParamLimits

0xa3f0,	// (0x0009f38c) mup_visualizer_pane_g2

0xa618,	// (0x0009f5b4) mup_visualizer_pane_g3_ParamLimits

0xa618,	// (0x0009f5b4) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x000a43de) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x000a43de) mup_visualizer_pane_g

0xf03c,	// (0x000a3fd8) mup_volume_pane_g1

0xa89a,	// (0x0009f836) mup_volume_pane_g2

0x0001,

0xf449,	// (0x000a43e5) mup_volume_pane_g

0xf03c,	// (0x000a3fd8) mup_progress_pane_g1

0xa8a3,	// (0x0009f83f) mup_progress_pane_g2

0xa8ac,	// (0x0009f848) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x000a43ea) mup_progress_pane_g

0xecc7,	// (0x000a3c63) bg_popup_window_pane_cp05

0xa8b5,	// (0x0009f851) heading_pane_cp02_ParamLimits

0xa8b5,	// (0x0009f851) heading_pane_cp02

0xa8cf,	// (0x0009f86b) list_popup_blid_pane

0xa8d7,	// (0x0009f873) list_blid_sat_info_pane_ParamLimits

0xa8d7,	// (0x0009f873) list_blid_sat_info_pane

0xa8ea,	// (0x0009f886) list_blid_sat_info_pane_g1

0xa8f2,	// (0x0009f88e) list_blid_sat_info_pane_t1

0x3b05,	// (0x00098aa1) mup_equalizer_pane_ParamLimits

0x3b05,	// (0x00098aa1) mup_equalizer_pane

0x3b26,	// (0x00098ac2) mup_equalizer_pane_cp1_ParamLimits

0x3b26,	// (0x00098ac2) mup_equalizer_pane_cp1

0x3b47,	// (0x00098ae3) mup_equalizer_pane_cp2_ParamLimits

0x3b47,	// (0x00098ae3) mup_equalizer_pane_cp2

0x3b68,	// (0x00098b04) mup_equalizer_pane_cp3_ParamLimits

0x3b68,	// (0x00098b04) mup_equalizer_pane_cp3

0x3b89,	// (0x00098b25) mup_equalizer_pane_cp4_ParamLimits

0x3b89,	// (0x00098b25) mup_equalizer_pane_cp4

0x3baa,	// (0x00098b46) mup_equalizer_pane_cp5

0x3bc0,	// (0x00098b5c) mup_equalizer_pane_cp6

0x3bd8,	// (0x00098b74) mup_equalizer_pane_cp7

0xba9e,	// (0x000a0a3a) bg_popup_call_poc_act_pane_g9

0xbaa6,	// (0x000a0a42) bg_popup_call_poc_act_pane_g10

0xbaae,	// (0x000a0a4a) bg_popup_call_poc_act_pane_g11

0x000a,

0xef22,	// (0x000a3ebe) mup_scale_pane

0xf03c,	// (0x000a3fd8) mup_scale_pane_g1

0xa900,	// (0x0009f89c) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x000a4406) mup_scale_pane_g

0xa924,	// (0x0009f8c0) msg_data_pane

0xa92c,	// (0x0009f8c8) scroll_pane_cp017

0x3c02,	// (0x00098b9e) bg_list_pane_cp04_ParamLimits

0x3c02,	// (0x00098b9e) bg_list_pane_cp04

0xa934,	// (0x0009f8d0) msg_data_pane_g1

0x3c28,	// (0x00098bc4) msg_data_pane_g2

0x3c32,	// (0x00098bce) msg_data_pane_g3

0x3c3a,	// (0x00098bd6) msg_data_pane_g4

0x3c42,	// (0x00098bde) msg_data_pane_g5

0x3c4a,	// (0x00098be6) msg_data_pane_g6

0x3c52,	// (0x00098bee) msg_data_pane_g7

0x0006,

0xf479,	// (0x000a4415) msg_data_pane_g

0x3c5a,	// (0x00098bf6) msg_text_pane_ParamLimits

0x3c5a,	// (0x00098bf6) msg_text_pane

0x3c91,	// (0x00098c2d) qrid_highlight_pane_cp011_ParamLimits

0x3c91,	// (0x00098c2d) qrid_highlight_pane_cp011

0xecc7,	// (0x000a3c63) msg_body_pane

0xecc7,	// (0x000a3c63) msg_header_pane

0xa945,	// (0x0009f8e1) input_focus_pane_cp07

0x3cb7,	// (0x00098c53) msg_header_pane_t1_ParamLimits

0x3cb7,	// (0x00098c53) msg_header_pane_t1

0x3cc9,	// (0x00098c65) msg_header_pane_t2_ParamLimits

0x3cc9,	// (0x00098c65) msg_header_pane_t2

0x0001,

0xf48d,	// (0x000a4429) msg_header_pane_t_ParamLimits

0xf48d,	// (0x000a4429) msg_header_pane_t

0xa95a,	// (0x0009f8f6) msg_body_pane_g1

0x3cdb,	// (0x00098c77) msg_body_pane_t1_ParamLimits

0x3cdb,	// (0x00098c77) msg_body_pane_t1

0x3d0c,	// (0x00098ca8) msg_body_pane_t2_ParamLimits

0x3d0c,	// (0x00098ca8) msg_body_pane_t2

0x3d1e,	// (0x00098cba) msg_body_pane_t3_ParamLimits

0x3d1e,	// (0x00098cba) msg_body_pane_t3

0x0002,

0xf492,	// (0x000a442e) msg_body_pane_t_ParamLimits

0xf492,	// (0x000a442e) msg_body_pane_t

0x3d82,	// (0x00098d1e) main_viewer_pane_g1_ParamLimits

0x3d82,	// (0x00098d1e) main_viewer_pane_g1

0x3d8e,	// (0x00098d2a) main_viewer_pane_g2_ParamLimits

0x3d8e,	// (0x00098d2a) main_viewer_pane_g2

0x3d9a,	// (0x00098d36) main_viewer_pane_g3_ParamLimits

0x3d9a,	// (0x00098d36) main_viewer_pane_g3

0x3dab,	// (0x00098d47) main_viewer_pane_g4_ParamLimits

0x3dab,	// (0x00098d47) main_viewer_pane_g4

0x3dbc,	// (0x00098d58) main_viewer_pane_g5_ParamLimits

0x3dbc,	// (0x00098d58) main_viewer_pane_g5

0x3dbc,	// (0x00098d58) main_viewer_pane_g7_ParamLimits

0x3dbc,	// (0x00098d58) main_viewer_pane_g7

0xa28d,	// (0x0009f229) main_viewer_pane_g8_ParamLimits

0xa28d,	// (0x0009f229) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x000a443e) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x000a443e) main_viewer_pane_g

0xa962,	// (0x0009f8fe) viewer_content_pane_ParamLimits

0xa962,	// (0x0009f8fe) viewer_content_pane

0x3dfa,	// (0x00098d96) main_postcard_pane_g1_ParamLimits

0x3dfa,	// (0x00098d96) main_postcard_pane_g1

0x3e08,	// (0x00098da4) main_postcard_pane_g2_ParamLimits

0x3e08,	// (0x00098da4) main_postcard_pane_g2

0x3e16,	// (0x00098db2) main_postcard_pane_g3_ParamLimits

0x3e16,	// (0x00098db2) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x000a444f) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x000a444f) main_postcard_pane_g

0x3e26,	// (0x00098dc2) main_postcard_pane_g4

0xbc80,	// (0x000a0c1c) smil_status_volume_pane_g2

0x3e52,	// (0x00098dee) postcard_pane_ParamLimits

0x3e52,	// (0x00098dee) postcard_pane

0xa3f0,	// (0x0009f38c) postcard_pane_g1_ParamLimits

0xa3f0,	// (0x0009f38c) postcard_pane_g1

0x3e84,	// (0x00098e20) postcard_pane_g2_ParamLimits

0x3e84,	// (0x00098e20) postcard_pane_g2

0x3e90,	// (0x00098e2c) postcard_pane_g3_ParamLimits

0x3e90,	// (0x00098e2c) postcard_pane_g3

0xa970,	// (0x0009f90c) postcard_pane_g4_ParamLimits

0xa970,	// (0x0009f90c) postcard_pane_g4

0x3e9c,	// (0x00098e38) postcard_pane_g5_ParamLimits

0x3e9c,	// (0x00098e38) postcard_pane_g5

0x3ea8,	// (0x00098e44) postcard_pane_g6_ParamLimits

0x3ea8,	// (0x00098e44) postcard_pane_g6

0xa97e,	// (0x0009f91a) postcard_pane_g7_ParamLimits

0xa97e,	// (0x0009f91a) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000a445c) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000a445c) postcard_pane_g

0x3eb4,	// (0x00098e50) main_mp2_pane_g1_ParamLimits

0x3eb4,	// (0x00098e50) main_mp2_pane_g1

0x3ec0,	// (0x00098e5c) main_mp2_pane_g2_ParamLimits

0x3ec0,	// (0x00098e5c) main_mp2_pane_g2

0x3ecc,	// (0x00098e68) main_mp2_pane_g3_ParamLimits

0x3ecc,	// (0x00098e68) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000a446b) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000a446b) main_mp2_pane_g

0x3ed8,	// (0x00098e74) main_mp2_pane_t1_ParamLimits

0x3ed8,	// (0x00098e74) main_mp2_pane_t1

0x3eef,	// (0x00098e8b) main_mp2_pane_t2_ParamLimits

0x3eef,	// (0x00098e8b) main_mp2_pane_t2

0x3f03,	// (0x00098e9f) main_mp2_pane_t3_ParamLimits

0x3f03,	// (0x00098e9f) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x000a4472) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x000a4472) main_mp2_pane_t

0xa98c,	// (0x0009f928) pec_content_pane_ParamLimits

0xa98c,	// (0x0009f928) pec_content_pane

0x9f1c,	// (0x0009eeb8) scroll_pane_cp015

0xa99e,	// (0x0009f93a) pec_attribute_pane_ParamLimits

0xa99e,	// (0x0009f93a) pec_attribute_pane

0x3f15,	// (0x00098eb1) pec_content_pane_g1_ParamLimits

0x3f15,	// (0x00098eb1) pec_content_pane_g1

0xa9ae,	// (0x0009f94a) pec_content_pane_t1_ParamLimits

0xa9ae,	// (0x0009f94a) pec_content_pane_t1

0xa9c0,	// (0x0009f95c) pec_content_pane_t2_ParamLimits

0xa9c0,	// (0x0009f95c) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x000a4479) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x000a4479) pec_content_pane_t

0x3f21,	// (0x00098ebd) list_single_graphic_pane_cp01_ParamLimits

0x3f21,	// (0x00098ebd) list_single_graphic_pane_cp01

0xef22,	// (0x000a3ebe) bg_popup_sub_pane_cp04

0xa9d2,	// (0x0009f96e) popup_mup_playback_window_g1

0xa9de,	// (0x0009f97a) popup_mup_playback_window_t1

0xa9f3,	// (0x0009f98f) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x000a447e) popup_mup_playback_window_t

0xaa2a,	// (0x0009f9c6) main_image_pane_g1_ParamLimits

0xaa2a,	// (0x0009f9c6) main_image_pane_g1

0xaa6d,	// (0x0009fa09) scroll_pane_cp018_ParamLimits

0xaa6d,	// (0x0009fa09) scroll_pane_cp018

0xaa85,	// (0x0009fa21) scroll_pane_cp016_ParamLimits

0xaa85,	// (0x0009fa21) scroll_pane_cp016

0x3fba,	// (0x00098f56) smil2_image_pane_ParamLimits

0x3fba,	// (0x00098f56) smil2_image_pane

0x3fea,	// (0x00098f86) smil2_root_pane_ParamLimits

0x3fea,	// (0x00098f86) smil2_root_pane

0x4016,	// (0x00098fb2) smil2_text_pane_ParamLimits

0x4016,	// (0x00098fb2) smil2_text_pane

0xecc7,	// (0x000a3c63) bg_list_pane_cp06

0xaac1,	// (0x0009fa5d) grid_radio_pane

0xecc7,	// (0x000a3c63) bg_popup_window_pane_cp06

0xaac9,	// (0x0009fa65) main_fmradio_pane_t1

0xa467,	// (0x0009f403) heading_pane_cp04

0xaad7,	// (0x0009fa73) main_fmradio_pane_t2

0xbab6,	// (0x000a0a52) popup_cale_lunar_info_window_g1

0xaae5,	// (0x0009fa81) main_fmradio_pane_t3

0xbabe,	// (0x000a0a5a) popup_cale_lunar_info_window_g2

0xaaf3,	// (0x0009fa8f) main_fmradio_pane_t4

0x0001,

0xab01,	// (0x0009fa9d) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x000a4559) popup_cale_lunar_info_window_g

0xf4f7,	// (0x000a4493) main_fmradio_pane_t

0xab0f,	// (0x0009faab) wait_bar_pane_cp03

0xab17,	// (0x0009fab3) cell_fmradio_pane_ParamLimits

0xab17,	// (0x0009fab3) cell_fmradio_pane

0xa97e,	// (0x0009f91a) cell_fmradio_pane_g1_ParamLimits

0xa97e,	// (0x0009f91a) cell_fmradio_pane_g1

0xecc7,	// (0x000a3c63) grid_highlight_pane_cp011

0xab2a,	// (0x0009fac6) poc_content_pane_ParamLimits

0xab2a,	// (0x0009fac6) poc_content_pane

0xab3c,	// (0x0009fad8) scroll_pane_cp019

0x4056,	// (0x00098ff2) popup_call_poc_act_window_ParamLimits

0x4056,	// (0x00098ff2) popup_call_poc_act_window

0x4063,	// (0x00098fff) popup_call_poc_inact_window_ParamLimits

0x4063,	// (0x00098fff) popup_call_poc_inact_window

0xf594,	// (0x000a4530) bg_popup_call_poc_act_pane_g

0xba2e,	// (0x000a09ca) bg_popup_call_poc_inact_pane_g1

0xba36,	// (0x000a09d2) bg_popup_call_poc_inact_pane_g2

0xab44,	// (0x0009fae0) popup_call_poc_act_window_g2

0xba3e,	// (0x000a09da) bg_popup_call_poc_inact_pane_g3

0xba46,	// (0x000a09e2) bg_popup_call_poc_inact_pane_g4

0xba4e,	// (0x000a09ea) bg_popup_call_poc_inact_pane_g5

0xab4c,	// (0x0009fae8) popup_call_poc_act_window_t1_ParamLimits

0xab4c,	// (0x0009fae8) popup_call_poc_act_window_t1

0xab74,	// (0x0009fb10) popup_call_poc_act_window_t2_ParamLimits

0xab74,	// (0x0009fb10) popup_call_poc_act_window_t2

0xab9c,	// (0x0009fb38) popup_call_poc_act_window_t3_ParamLimits

0xab9c,	// (0x0009fb38) popup_call_poc_act_window_t3

0xabc4,	// (0x0009fb60) popup_call_poc_act_window_t4_ParamLimits

0xabc4,	// (0x0009fb60) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x000a449e) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x000a449e) popup_call_poc_act_window_t

0xba56,	// (0x000a09f2) bg_popup_call_poc_inact_pane_g6

0xba5e,	// (0x000a09fa) bg_popup_call_poc_inact_pane_g7

0xba66,	// (0x000a0a02) bg_popup_call_poc_inact_pane_g8

0xabd6,	// (0x0009fb72) popup_call_poc_inact_window_g2

0xba6e,	// (0x000a0a0a) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x000a451d) bg_popup_call_poc_inact_pane_g

0xabde,	// (0x0009fb7a) popup_call_poc_inact_window_t1_ParamLimits

0xabde,	// (0x0009fb7a) popup_call_poc_inact_window_t1

0xabf3,	// (0x0009fb8f) popup_call_poc_inact_window_t2_ParamLimits

0xabf3,	// (0x0009fb8f) popup_call_poc_inact_window_t2

0xac08,	// (0x0009fba4) popup_call_poc_inact_window_t3_ParamLimits

0xac08,	// (0x0009fba4) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x000a44a7) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x000a44a7) popup_call_poc_inact_window_t

0xbbf3,	// (0x000a0b8f) context_pane_ParamLimits

0x46a5,	// (0x00099641) signal_pane_ParamLimits

0x9d73,	// (0x0009ed0f) main_call2_pane

0x4618,	// (0x000995b4) popup_phob_thumbnail2_window_ParamLimits

0x4618,	// (0x000995b4) popup_phob_thumbnail2_window

0x3d30,	// (0x00098ccc) aid_hotspot_pointer_arrow_pane

0x3d38,	// (0x00098cd4) aid_hotspot_pointer_hand_pane

0x4385,	// (0x00099321) phob_pre_status_pane_g5

0x1d7f,	// (0x00096d1b) cams_zoom_pane_ParamLimits

0x1d8b,	// (0x00096d27) image_vga_pane_ParamLimits

0x1d9a,	// (0x00096d36) main_camera_pane_g1_ParamLimits

0x1da8,	// (0x00096d44) main_camera_pane_g2_ParamLimits

0x1db4,	// (0x00096d50) main_camera_pane_g3_ParamLimits

0x1dc0,	// (0x00096d5c) main_camera_pane_g4_ParamLimits

0x1dcc,	// (0x00096d68) main_camera_pane_g5_ParamLimits

0x1dd8,	// (0x00096d74) main_camera_pane_g6_ParamLimits

0x1de4,	// (0x00096d80) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x000a41a6) main_camera_pane_g_ParamLimits

0x1df0,	// (0x00096d8c) main_camera_pane_t1_ParamLimits

0x1e02,	// (0x00096d9e) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x000a41b7) main_camera_pane_t_ParamLimits

0xef22,	// (0x000a3ebe) bg_popup_preview_window_pane_cp01_ParamLimits

0xef22,	// (0x000a3ebe) bg_popup_preview_window_pane_cp01

0xac1d,	// (0x0009fbb9) popup_phob_thumbnail2_window_g1_ParamLimits

0xac1d,	// (0x0009fbb9) popup_phob_thumbnail2_window_g1

0xecc7,	// (0x000a3c63) call2_cli_visual_pane

0x407f,	// (0x0009901b) popup_call2_audio_conf_window_ParamLimits

0x407f,	// (0x0009901b) popup_call2_audio_conf_window

0x4094,	// (0x00099030) popup_call2_audio_first_window_ParamLimits

0x4094,	// (0x00099030) popup_call2_audio_first_window

0x4132,	// (0x000990ce) popup_call2_audio_in_window_ParamLimits

0x4132,	// (0x000990ce) popup_call2_audio_in_window

0x4174,	// (0x00099110) popup_call2_audio_out_window_ParamLimits

0x4174,	// (0x00099110) popup_call2_audio_out_window

0x41d6,	// (0x00099172) popup_call2_audio_second_window_ParamLimits

0x41d6,	// (0x00099172) popup_call2_audio_second_window

0x4234,	// (0x000991d0) popup_call2_audio_wait_window_ParamLimits

0x4234,	// (0x000991d0) popup_call2_audio_wait_window

0xecc7,	// (0x000a3c63) bg_popup_call2_act_pane_cp03

0xef04,	// (0x000a3ea0) list_conf_pane_cp

0xac29,	// (0x0009fbc5) popup_call2_audio_conf_window_t1

0xa4c4,	// (0x0009f460) list_single_graphic_popup_conf2_pane_ParamLimits

0xa4c4,	// (0x0009f460) list_single_graphic_popup_conf2_pane

0xa4d7,	// (0x0009f473) list_highlight_pane_cp04

0xac37,	// (0x0009fbd3) list_single_graphic_popup_conf2_pane_g1

0xa4e8,	// (0x0009f484) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x000a44ae) list_single_graphic_popup_conf2_pane_g

0xac41,	// (0x0009fbdd) list_single_graphic_popup_conf2_pane_t1

0xac4f,	// (0x0009fbeb) bg_popup_call2_act_pane_cp01_ParamLimits

0xac4f,	// (0x0009fbeb) bg_popup_call2_act_pane_cp01

0xacd9,	// (0x0009fc75) call_type_pane_cp05_ParamLimits

0xacd9,	// (0x0009fc75) call_type_pane_cp05

0xad2d,	// (0x0009fcc9) popup_call2_audio_second_window_g1_ParamLimits

0xad2d,	// (0x0009fcc9) popup_call2_audio_second_window_g1

0xad81,	// (0x0009fd1d) popup_call2_audio_second_window_g2_ParamLimits

0xad81,	// (0x0009fd1d) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x000a44b3) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x000a44b3) popup_call2_audio_second_window_g

0xade6,	// (0x0009fd82) popup_call2_audio_second_window_t1_ParamLimits

0xade6,	// (0x0009fd82) popup_call2_audio_second_window_t1

0xaea1,	// (0x0009fe3d) popup_call2_audio_second_window_t2_ParamLimits

0xaea1,	// (0x0009fe3d) popup_call2_audio_second_window_t2

0xaef4,	// (0x0009fe90) popup_call2_audio_second_window_t3_ParamLimits

0xaef4,	// (0x0009fe90) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x000a44ba) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x000a44ba) popup_call2_audio_second_window_t

0xecc7,	// (0x000a3c63) bg_popup_call2_in_pane_cp02

0xecd1,	// (0x000a3c6d) call_type_pane_cp04

0xecd9,	// (0x000a3c75) popup_call2_audio_wait_window_g1

0xece1,	// (0x000a3c7d) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000a4095) popup_call2_audio_wait_window_g

0xece9,	// (0x000a3c85) popup_call2_audio_wait_window_t3

0xafe7,	// (0x0009ff83) bg_popup_call2_act_pane_ParamLimits

0xafe7,	// (0x0009ff83) bg_popup_call2_act_pane

0xb0a7,	// (0x000a0043) call_type_pane_cp03_ParamLimits

0xb0a7,	// (0x000a0043) call_type_pane_cp03

0xb10b,	// (0x000a00a7) popup_call2_audio_first_window_g1_ParamLimits

0xb10b,	// (0x000a00a7) popup_call2_audio_first_window_g1

0xb17b,	// (0x000a0117) popup_call2_audio_first_window_g2_ParamLimits

0xb17b,	// (0x000a0117) popup_call2_audio_first_window_g2

0xa3f0,	// (0x0009f38c) popup_call2_audio_first_window_g3_ParamLimits

0xa3f0,	// (0x0009f38c) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x000a44c3) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x000a44c3) popup_call2_audio_first_window_g

0xb259,	// (0x000a01f5) popup_call2_audio_first_window_t1_ParamLimits

0xb259,	// (0x000a01f5) popup_call2_audio_first_window_t1

0xb35c,	// (0x000a02f8) popup_call2_audio_first_window_t4_ParamLimits

0xb35c,	// (0x000a02f8) popup_call2_audio_first_window_t4

0xb43f,	// (0x000a03db) popup_call2_audio_first_window_t5_ParamLimits

0xb43f,	// (0x000a03db) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x000a44ce) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x000a44ce) popup_call2_audio_first_window_t

0xef1a,	// (0x000a3eb6) bg_popup_call2_act_pane_g1

0xbac6,	// (0x000a0a62) popup_cale_lunar_info_window_t1

0xbad4,	// (0x000a0a70) popup_cale_lunar_info_window_t2

0xbae2,	// (0x000a0a7e) popup_cale_lunar_info_window_t3

0xecc7,	// (0x000a3c63) bg_popup_call2_bubble_pane

0xb540,	// (0x000a04dc) bg_popup_call2_in_pane_cp01_ParamLimits

0xb540,	// (0x000a04dc) bg_popup_call2_in_pane_cp01

0xe9a3,	// (0x000a393f) call_type_pane_cp02

0xb588,	// (0x000a0524) popup_call2_audio_out_window_g1_ParamLimits

0xb588,	// (0x000a0524) popup_call2_audio_out_window_g1

0xb5b4,	// (0x000a0550) popup_call2_audio_out_window_g2_ParamLimits

0xb5b4,	// (0x000a0550) popup_call2_audio_out_window_g2

0xb5dc,	// (0x000a0578) popup_call2_audio_out_window_g3_ParamLimits

0xb5dc,	// (0x000a0578) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x000a44d7) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x000a44d7) popup_call2_audio_out_window_g

0xb617,	// (0x000a05b3) popup_call2_audio_out_window_t1_ParamLimits

0xb617,	// (0x000a05b3) popup_call2_audio_out_window_t1

0xb676,	// (0x000a0612) popup_call2_audio_out_window_t2_ParamLimits

0xb676,	// (0x000a0612) popup_call2_audio_out_window_t2

0xb6ca,	// (0x000a0666) popup_call2_audio_out_window_t3_ParamLimits

0xb6ca,	// (0x000a0666) popup_call2_audio_out_window_t3

0xb6e0,	// (0x000a067c) popup_call2_audio_out_window_t4_ParamLimits

0xb6e0,	// (0x000a067c) popup_call2_audio_out_window_t4

0xb6f6,	// (0x000a0692) popup_call2_audio_out_window_t5_ParamLimits

0xb6f6,	// (0x000a0692) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x000a44e0) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x000a44e0) popup_call2_audio_out_window_t

0xb75a,	// (0x000a06f6) bg_popup_call2_in_pane_ParamLimits

0xb75a,	// (0x000a06f6) bg_popup_call2_in_pane

0xb7b6,	// (0x000a0752) popup_call2_audio_in_window_g1_ParamLimits

0xb7b6,	// (0x000a0752) popup_call2_audio_in_window_g1

0xb7ee,	// (0x000a078a) popup_call2_audio_in_window_g2_ParamLimits

0xb7ee,	// (0x000a078a) popup_call2_audio_in_window_g2

0xb826,	// (0x000a07c2) popup_call2_audio_in_window_g3_ParamLimits

0xb826,	// (0x000a07c2) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x000a44ed) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x000a44ed) popup_call2_audio_in_window_g

0xb87e,	// (0x000a081a) popup_call2_audio_in_window_t1_ParamLimits

0xb87e,	// (0x000a081a) popup_call2_audio_in_window_t1

0xb8fe,	// (0x000a089a) popup_call2_audio_in_window_t2_ParamLimits

0xb8fe,	// (0x000a089a) popup_call2_audio_in_window_t2

0xb998,	// (0x000a0934) popup_call2_audio_in_window_t3_ParamLimits

0xb998,	// (0x000a0934) popup_call2_audio_in_window_t3

0xb9b2,	// (0x000a094e) popup_call2_audio_in_window_t4_ParamLimits

0xb9b2,	// (0x000a094e) popup_call2_audio_in_window_t4

0xb9c4,	// (0x000a0960) popup_call2_audio_in_window_t5_ParamLimits

0xb9c4,	// (0x000a0960) popup_call2_audio_in_window_t5

0xb9d9,	// (0x000a0975) popup_call2_audio_in_window_t6_ParamLimits

0xb9d9,	// (0x000a0975) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x000a44f6) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x000a44f6) popup_call2_audio_in_window_t

0xef1a,	// (0x000a3eb6) bg_popup_call2_in_pane_g1

0xbaf0,	// (0x000a0a8c) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x000a455e) popup_cale_lunar_info_window_t

0xef22,	// (0x000a3ebe) bg_popup_call2_rect_pane_ParamLimits

0xef22,	// (0x000a3ebe) bg_popup_call2_rect_pane

0xecc7,	// (0x000a3c63) call2_cli_visual_graphic_pane

0xecc7,	// (0x000a3c63) call2_cli_visual_text_pane

0x474b,	// (0x000996e7) smil_status_volume_pane_g3

0x0002,

0xf03c,	// (0x000a3fd8) call2_cli_visual_graphic_pane_g1

0xf03c,	// (0x000a3fd8) call2_cli_visual_graphic_pane_g2

0xf03c,	// (0x000a3fd8) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x000a4503) call2_cli_visual_graphic_pane_g

0xb9ee,	// (0x000a098a) bg_popup_call2_rect_pane_g1

0x9c8f,	// (0x0009ec2b) bg_popup_call2_rect_pane_g2

0xb9f6,	// (0x000a0992) bg_popup_call2_rect_pane_g3

0xb9fe,	// (0x000a099a) bg_popup_call2_rect_pane_g4

0xba06,	// (0x000a09a2) bg_popup_call2_rect_pane_g5

0xba0e,	// (0x000a09aa) bg_popup_call2_rect_pane_g6

0xba16,	// (0x000a09b2) bg_popup_call2_rect_pane_g7

0xba1e,	// (0x000a09ba) bg_popup_call2_rect_pane_g8

0xba26,	// (0x000a09c2) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x000a450a) bg_popup_call2_rect_pane_g

0xba2e,	// (0x000a09ca) bg_popup_call2_bubble_pane_g1

0xba36,	// (0x000a09d2) bg_popup_call2_bubble_pane_g2

0xba3e,	// (0x000a09da) bg_popup_call2_bubble_pane_g3

0xba46,	// (0x000a09e2) bg_popup_call2_bubble_pane_g4

0xba4e,	// (0x000a09ea) bg_popup_call2_bubble_pane_g5

0xba56,	// (0x000a09f2) bg_popup_call2_bubble_pane_g6

0xba5e,	// (0x000a09fa) bg_popup_call2_bubble_pane_g7

0xba66,	// (0x000a0a02) bg_popup_call2_bubble_pane_g8

0xba6e,	// (0x000a0a0a) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x000a451d) bg_popup_call2_bubble_pane_g

0x17b0,	// (0x0009674c) aid_cale_week_size_cell_pane

0x1e14,	// (0x00096db0) aid_cams_cif_uncrop_pane_ParamLimits

0x1e14,	// (0x00096db0) aid_cams_cif_uncrop_pane

0x1f6f,	// (0x00096f0b) aid_cams_size_cell_ParamLimits

0x1f6f,	// (0x00096f0b) aid_cams_size_cell

0x1f7b,	// (0x00096f17) grid_cams_pane_ParamLimits

0x1f89,	// (0x00096f25) linegrid_cams_pane_ParamLimits

0x216d,	// (0x00097109) call_video_pane_t1

0x218e,	// (0x0009712a) call_video_pane_t2

0x0001,

0xf26e,	// (0x000a420a) call_video_pane_t

0x26d7,	// (0x00097673) aid_cale_month_size_cell_pane_ParamLimits

0x26d7,	// (0x00097673) aid_cale_month_size_cell_pane

0xf60b,	// (0x000a45a7) smil_status_volume_pane_g

0x4758,	// (0x000996f4) volume_smil_pane_ParamLimits

0x0ef9,	// (0x00095e95) aid_popup2_width_pane

0x16a4,	// (0x00096640) cell_qdial_pane_g4_ParamLimits

0x16a4,	// (0x00096640) cell_qdial_pane_g4

0x36ed,	// (0x00098689) aid_blid_cardinal_pane_ParamLimits

0x36fd,	// (0x00098699) aid_blid_destination_pane_ParamLimits

0x36fd,	// (0x00098699) aid_blid_destination_pane

0xef22,	// (0x000a3ebe) bg_popup_call_poc_act_pane_ParamLimits

0xef22,	// (0x000a3ebe) bg_popup_call_poc_act_pane

0xef22,	// (0x000a3ebe) bg_popup_call_poc_inact_pane_ParamLimits

0xef22,	// (0x000a3ebe) bg_popup_call_poc_inact_pane

0xba76,	// (0x000a0a12) bg_popup_call_poc_act_pane_g1

0xba7e,	// (0x000a0a1a) bg_popup_call_poc_act_pane_g2

0xba86,	// (0x000a0a22) bg_popup_call_poc_act_pane_g3

0xba46,	// (0x000a09e2) bg_popup_call_poc_act_pane_g4

0xba4e,	// (0x000a09ea) bg_popup_call_poc_act_pane_g5

0xba8e,	// (0x000a0a2a) bg_popup_call_poc_act_pane_g6

0xba5e,	// (0x000a09fa) bg_popup_call_poc_act_pane_g7

0xba96,	// (0x000a0a32) bg_popup_call_poc_act_pane_g8

0xecc7,	// (0x000a3c63) main_usb_pane

0x4547,	// (0x000994e3) popup_cale_lunar_info_window

0x24b9,	// (0x00097455) im_reading_pane_t1_ParamLimits

0x9e74,	// (0x0009ee10) list_im_pane_ParamLimits

0x9e85,	// (0x0009ee21) scroll_pane_cp07_ParamLimits

0xecc7,	// (0x000a3c63) grid_highlight_pane_cp012

0xef22,	// (0x000a3ebe) mup_scale_pane_ParamLimits

0xa3f0,	// (0x0009f38c) main_usb_pane_g1_ParamLimits

0xa3f0,	// (0x0009f38c) main_usb_pane_g1

0x42a8,	// (0x00099244) main_usb_pane_g2_ParamLimits

0x42a8,	// (0x00099244) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x000a4547) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x000a4547) main_usb_pane_g

0x42b4,	// (0x00099250) main_usb_pane_t1_ParamLimits

0x42b4,	// (0x00099250) main_usb_pane_t1

0x42c6,	// (0x00099262) main_usb_pane_t2_ParamLimits

0x42c6,	// (0x00099262) main_usb_pane_t2

0x42d8,	// (0x00099274) main_usb_pane_t3_ParamLimits

0x42d8,	// (0x00099274) main_usb_pane_t3

0x42ea,	// (0x00099286) main_usb_pane_t4_ParamLimits

0x42ea,	// (0x00099286) main_usb_pane_t4

0x42fc,	// (0x00099298) main_usb_pane_t5_ParamLimits

0x42fc,	// (0x00099298) main_usb_pane_t5

0x430e,	// (0x000992aa) main_usb_pane_t6_ParamLimits

0x430e,	// (0x000992aa) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x000a454c) main_usb_pane_t_ParamLimits

0x3693,	// (0x0009862f) aid_text_placing

0x369f,	// (0x0009863b) main_location2_pane_t1_ParamLimits

0x36b3,	// (0x0009864f) main_location2_pane_t2_ParamLimits

0x36c7,	// (0x00098663) main_location2_pane_t3_ParamLimits

0x36db,	// (0x00098677) main_location2_pane_t4_ParamLimits

0x36db,	// (0x00098677) main_location2_pane_t4

0xf3cf,	// (0x000a436b) main_location2_pane_t_ParamLimits

0xef5e,	// (0x000a3efa) find_pinb_pane_g2_ParamLimits

0xef5e,	// (0x000a3efa) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x000a40bb) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x000a40bb) find_pinb_pane_g

0xef6a,	// (0x000a3f06) find_pinb_pane_t1_ParamLimits

0xef7c,	// (0x000a3f18) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x000a40c0) find_pinb_pane_t_ParamLimits

0xecc7,	// (0x000a3c63) main_call3_pane

0x2c2b,	// (0x00097bc7) cale_month_day_heading_pane_t1_ParamLimits

0x2cb1,	// (0x00097c4d) cale_month_day_heading_pane_t2_ParamLimits

0x2d42,	// (0x00097cde) cale_month_day_heading_pane_t3_ParamLimits

0x2dd3,	// (0x00097d6f) cale_month_day_heading_pane_t4_ParamLimits

0x2e64,	// (0x00097e00) cale_month_day_heading_pane_t5_ParamLimits

0x2ef5,	// (0x00097e91) cale_month_day_heading_pane_t6_ParamLimits

0x2f86,	// (0x00097f22) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000a4242) cale_month_day_heading_pane_t_ParamLimits

0xa0cf,	// (0x0009f06b) smil_status_volume_pane

0x3e6c,	// (0x00098e08) postcard_address_pane_ParamLimits

0x3e6c,	// (0x00098e08) postcard_address_pane

0x3e78,	// (0x00098e14) postcard_message_pane_ParamLimits

0x3e78,	// (0x00098e14) postcard_message_pane

0x4273,	// (0x0009920f) call2_cli_visual_pane_t1_ParamLimits

0x4273,	// (0x0009920f) call2_cli_visual_pane_t1

0x48af,	// (0x0009984b) postcard_message_pane_t1_ParamLimits

0x48af,	// (0x0009984b) postcard_message_pane_t1

0x4898,	// (0x00099834) postcard_address_pane_t1_ParamLimits

0x4898,	// (0x00099834) postcard_address_pane_t1

0x4889,	// (0x00099825) popup_call3_audio_in_window_ParamLimits

0x4889,	// (0x00099825) popup_call3_audio_in_window

0x476d,	// (0x00099709) bg_popup_call3_in_pane_ParamLimits

0x476d,	// (0x00099709) bg_popup_call3_in_pane

0x47cf,	// (0x0009976b) popup_call3_audio_in_window_g1_ParamLimits

0x47cf,	// (0x0009976b) popup_call3_audio_in_window_g1

0x47e7,	// (0x00099783) popup_call3_audio_in_window_g2_ParamLimits

0x47e7,	// (0x00099783) popup_call3_audio_in_window_g2

0x47ff,	// (0x0009979b) popup_call3_audio_in_window_g3_ParamLimits

0x47ff,	// (0x0009979b) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x000a45ae) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x000a45ae) popup_call3_audio_in_window_g

0x4827,	// (0x000997c3) popup_call3_audio_in_window_t1_ParamLimits

0x4827,	// (0x000997c3) popup_call3_audio_in_window_t1

0x484f,	// (0x000997eb) popup_call3_audio_in_window_t2_ParamLimits

0x484f,	// (0x000997eb) popup_call3_audio_in_window_t2

0x4877,	// (0x00099813) popup_call3_audio_in_window_t3_ParamLimits

0x4877,	// (0x00099813) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x000a45b7) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x000a45b7) popup_call3_audio_in_window_t

0x9d73,	// (0x0009ed0f) bg_popup_call3_rect_pane

0xb9ee,	// (0x000a098a) bg_popup_call3_rect_pane_g1

0x9c8f,	// (0x0009ec2b) bg_popup_call3_rect_pane_g2

0xb9f6,	// (0x000a0992) bg_popup_call3_rect_pane_g3

0xb9fe,	// (0x000a099a) bg_popup_call3_rect_pane_g4

0xba06,	// (0x000a09a2) bg_popup_call3_rect_pane_g5

0xba0e,	// (0x000a09aa) bg_popup_call3_rect_pane_g6

0xba16,	// (0x000a09b2) bg_popup_call3_rect_pane_g7

0x3a13,	// (0x000989af) mup_visualizer_osc_pane

0xa892,	// (0x0009f82e) mup_visualizer_spec_pane

0x478d,	// (0x00099729) call3_video_qcif_pane_ParamLimits

0x478d,	// (0x00099729) call3_video_qcif_pane

0x479f,	// (0x0009973b) call3_video_qcif_uncrop_pane_ParamLimits

0x479f,	// (0x0009973b) call3_video_qcif_uncrop_pane

0x47ad,	// (0x00099749) call3_video_subqcif_pane_ParamLimits

0x47ad,	// (0x00099749) call3_video_subqcif_pane

0x47bf,	// (0x0009975b) call3_video_subqcif_uncrop_pane_ParamLimits

0x47bf,	// (0x0009975b) call3_video_subqcif_uncrop_pane

0x4817,	// (0x000997b3) popup_call3_audio_in_window_g4_ParamLimits

0x4817,	// (0x000997b3) popup_call3_audio_in_window_g4

0x473a,	// (0x000996d6) mup_spec_half_pane

0x4743,	// (0x000996df) mup_spec_half_pane_cp

0xbc53,	// (0x000a0bef) mup_osc_middle_pane

0xbc5c,	// (0x000a0bf8) mup_visualizer_osc_pane_g1

0x471b,	// (0x000996b7) mup_spec_bar_pane_ParamLimits

0x471b,	// (0x000996b7) mup_spec_bar_pane

0xbc40,	// (0x000a0bdc) mup_spec_bar_pane_g1

0xbc4a,	// (0x000a0be6) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000a45a2) mup_spec_bar_pane_g

0x17b0,	// (0x0009674c) aid_cale_week_size_cell_pane_ParamLimits

0x17c5,	// (0x00096761) bg_cale_heading_pane_ParamLimits

0x9ccc,	// (0x0009ec68) bg_cale_pane_cp01_ParamLimits

0x17e7,	// (0x00096783) cale_week_corner_pane_ParamLimits

0x1801,	// (0x0009679d) cale_week_day_heading_pane_ParamLimits

0x1823,	// (0x000967bf) cale_week_scroll_pane_g1_ParamLimits

0x1840,	// (0x000967dc) cale_week_scroll_pane_g2_ParamLimits

0x1853,	// (0x000967ef) cale_week_scroll_pane_g3_ParamLimits

0x1866,	// (0x00096802) cale_week_scroll_pane_g4_ParamLimits

0x1879,	// (0x00096815) cale_week_scroll_pane_g5_ParamLimits

0x188c,	// (0x00096828) cale_week_scroll_pane_g6_ParamLimits

0x189f,	// (0x0009683b) cale_week_scroll_pane_g7_ParamLimits

0x18b2,	// (0x0009684e) cale_week_scroll_pane_g8_ParamLimits

0x18c7,	// (0x00096863) cale_week_scroll_pane_g9_ParamLimits

0x18da,	// (0x00096876) cale_week_scroll_pane_g10_ParamLimits

0x18ed,	// (0x00096889) cale_week_scroll_pane_g11_ParamLimits

0x1900,	// (0x0009689c) cale_week_scroll_pane_g12_ParamLimits

0x1917,	// (0x000968b3) cale_week_scroll_pane_g13_ParamLimits

0x1932,	// (0x000968ce) cale_week_scroll_pane_g14_ParamLimits

0x194d,	// (0x000968e9) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x000a414c) cale_week_scroll_pane_g_ParamLimits

0x197d,	// (0x00096919) cale_week_time_pane_ParamLimits

0x1992,	// (0x0009692e) grid_cale_week_pane_ParamLimits

0x9ce9,	// (0x0009ec85) listscroll_cale_week_pane_t1

0x9cfb,	// (0x0009ec97) scroll_pane_cp08_ParamLimits

0x2740,	// (0x000976dc) cale_month_corner_pane_ParamLimits

0xa0a5,	// (0x0009f041) cale_month_pane_t1

0x2bc8,	// (0x00097b64) cale_month_week_pane_ParamLimits

0xa3f0,	// (0x0009f38c) popup_call_status_window_g1_ParamLimits

0x34c6,	// (0x00098462) popup_call_status_window_g2_ParamLimits

0x34d2,	// (0x0009846e) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x000a42f2) popup_call_status_window_g_ParamLimits

0xa457,	// (0x0009f3f3) aid_call2_pane

0x3cab,	// (0x00098c47) msg_header_pane_g1

0x3e6c,	// (0x00098e08) postcard_address2_pane_ParamLimits

0x3e6c,	// (0x00098e08) postcard_address2_pane

0x3e78,	// (0x00098e14) postcard_message2_pane_ParamLimits

0x3e78,	// (0x00098e14) postcard_message2_pane

0x46b3,	// (0x0009964f) message2_row_pane_ParamLimits

0x46b3,	// (0x0009964f) message2_row_pane

0x46ce,	// (0x0009966a) address2_row_pane_ParamLimits

0x46ce,	// (0x0009966a) address2_row_pane

0xbc0e,	// (0x000a0baa) postcard_message2_row_pane_g1

0xbc16,	// (0x000a0bb2) postcard_message2_row_pane_t1

0xbc0e,	// (0x000a0baa) address2_row_pane_g1

0xbc16,	// (0x000a0bb2) address2_row_pane_t1

0x1cfa,	// (0x00096c96) aid_size_cell_vorec

0xecc7,	// (0x000a3c63) main_rss_pane

0x46e1,	// (0x0009967d) rss_list_single_pane_ParamLimits

0x46e1,	// (0x0009967d) rss_list_single_pane

0xbc24,	// (0x000a0bc0) rss_list_single_pane_t1

0xbc32,	// (0x000a0bce) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x000a459d) rss_list_single_pane_t

0xecc7,	// (0x000a3c63) main_camera2_pane

0xecc7,	// (0x000a3c63) main_video2_pane

0x4913,	// (0x000998af) cams_zoom_pane_cp2_ParamLimits

0x4913,	// (0x000998af) cams_zoom_pane_cp2

0x491f,	// (0x000998bb) image2_vga_pane_ParamLimits

0x491f,	// (0x000998bb) image2_vga_pane

0x492e,	// (0x000998ca) main_camera2_pane_g1_ParamLimits

0x492e,	// (0x000998ca) main_camera2_pane_g1

0x493a,	// (0x000998d6) main_camera2_pane_g2_ParamLimits

0x493a,	// (0x000998d6) main_camera2_pane_g2

0x4946,	// (0x000998e2) main_camera2_pane_g3_ParamLimits

0x4946,	// (0x000998e2) main_camera2_pane_g3

0x4952,	// (0x000998ee) main_camera2_pane_g4_ParamLimits

0x4952,	// (0x000998ee) main_camera2_pane_g4

0x495e,	// (0x000998fa) main_camera2_pane_g5_ParamLimits

0x495e,	// (0x000998fa) main_camera2_pane_g5

0x496a,	// (0x00099906) main_camera2_pane_g6_ParamLimits

0x496a,	// (0x00099906) main_camera2_pane_g6

0x4976,	// (0x00099912) main_camera2_pane_g7_ParamLimits

0x4976,	// (0x00099912) main_camera2_pane_g7

0x4982,	// (0x0009991e) main_camera2_pane_g8_ParamLimits

0x4982,	// (0x0009991e) main_camera2_pane_g8

0x0008,

0xf622,	// (0x000a45be) main_camera2_pane_g_ParamLimits

0xf622,	// (0x000a45be) main_camera2_pane_g

0x499a,	// (0x00099936) main_camera2_pane_t1_ParamLimits

0x499a,	// (0x00099936) main_camera2_pane_t1

0x49ac,	// (0x00099948) main_camera2_pane_t2_ParamLimits

0x49ac,	// (0x00099948) main_camera2_pane_t2

0x49be,	// (0x0009995a) main_camera2_pane_t3_ParamLimits

0x49be,	// (0x0009995a) main_camera2_pane_t3

0x49d0,	// (0x0009996c) main_camera2_pane_t4_ParamLimits

0x49d0,	// (0x0009996c) main_camera2_pane_t4

0x0006,

0xf635,	// (0x000a45d1) main_camera2_pane_t_ParamLimits

0xf635,	// (0x000a45d1) main_camera2_pane_t

0x4a32,	// (0x000999ce) cams_zoom_pane_cp4_ParamLimits

0x4a32,	// (0x000999ce) cams_zoom_pane_cp4

0x4a42,	// (0x000999de) image2_cif_pane_ParamLimits

0x4a42,	// (0x000999de) image2_cif_pane

0x4a57,	// (0x000999f3) image2_subqcif_pane_ParamLimits

0x4a57,	// (0x000999f3) image2_subqcif_pane

0x4a66,	// (0x00099a02) main_video2_pane_g1_ParamLimits

0x4a66,	// (0x00099a02) main_video2_pane_g1

0x4a78,	// (0x00099a14) main_video2_pane_g2_ParamLimits

0x4a78,	// (0x00099a14) main_video2_pane_g2

0x4a88,	// (0x00099a24) main_video2_pane_g3_ParamLimits

0x4a88,	// (0x00099a24) main_video2_pane_g3

0x4a98,	// (0x00099a34) main_video2_pane_g4_ParamLimits

0x4a98,	// (0x00099a34) main_video2_pane_g4

0x4aa8,	// (0x00099a44) main_video2_pane_g5_ParamLimits

0x4aa8,	// (0x00099a44) main_video2_pane_g5

0x4ab8,	// (0x00099a54) main_video2_pane_g6_ParamLimits

0x4ab8,	// (0x00099a54) main_video2_pane_g6

0x0005,

0xf644,	// (0x000a45e0) main_video2_pane_g_ParamLimits

0xf644,	// (0x000a45e0) main_video2_pane_g

0x4aca,	// (0x00099a66) main_video2_pane_t1_ParamLimits

0x4aca,	// (0x00099a66) main_video2_pane_t1

0x4ae4,	// (0x00099a80) main_video2_pane_t2_ParamLimits

0x4ae4,	// (0x00099a80) main_video2_pane_t2

0x4b0a,	// (0x00099aa6) main_video2_pane_t3_ParamLimits

0x4b0a,	// (0x00099aa6) main_video2_pane_t3

0x0002,

0xf651,	// (0x000a45ed) main_video2_pane_t_ParamLimits

0xf651,	// (0x000a45ed) main_video2_pane_t

0x43c5,	// (0x00099361) call_muted_g2

0x0001,

0xf5f3,	// (0x000a458f) call_muted_g

0xecc7,	// (0x000a3c63) main_mup2_pane

0xbc93,	// (0x000a0c2f) main_mup2_pane_g1_ParamLimits

0xbc93,	// (0x000a0c2f) main_mup2_pane_g1

0x4b30,	// (0x00099acc) main_mup2_pane_g2_ParamLimits

0x4b30,	// (0x00099acc) main_mup2_pane_g2

0x4db2,	// (0x00099d4e) main_mup_pane_g13_cp1

0x4dba,	// (0x00099d56) mup_volume_pane_cp1

0x4b50,	// (0x00099aec) main_mup2_pane_g4_ParamLimits

0x4b50,	// (0x00099aec) main_mup2_pane_g4

0x4b65,	// (0x00099b01) main_mup2_pane_g5_ParamLimits

0x4b65,	// (0x00099b01) main_mup2_pane_g5

0x4b7a,	// (0x00099b16) main_mup2_pane_g6_ParamLimits

0x4b7a,	// (0x00099b16) main_mup2_pane_g6

0x4b8f,	// (0x00099b2b) main_mup2_pane_g7_ParamLimits

0x4b8f,	// (0x00099b2b) main_mup2_pane_g7

0x0006,

0xf658,	// (0x000a45f4) main_mup2_pane_g_ParamLimits

0xf658,	// (0x000a45f4) main_mup2_pane_g

0x4bab,	// (0x00099b47) main_mup2_pane_t1_ParamLimits

0x4bab,	// (0x00099b47) main_mup2_pane_t1

0x4bc2,	// (0x00099b5e) main_mup2_pane_t2_ParamLimits

0x4bc2,	// (0x00099b5e) main_mup2_pane_t2

0x4bd9,	// (0x00099b75) main_mup2_pane_t3_ParamLimits

0x4bd9,	// (0x00099b75) main_mup2_pane_t3

0x4bf0,	// (0x00099b8c) main_mup2_pane_t4_ParamLimits

0x4bf0,	// (0x00099b8c) main_mup2_pane_t4

0x4c0a,	// (0x00099ba6) main_mup2_pane_t5_ParamLimits

0x4c0a,	// (0x00099ba6) main_mup2_pane_t5

0x4c24,	// (0x00099bc0) main_mup2_pane_t6_ParamLimits

0x4c24,	// (0x00099bc0) main_mup2_pane_t6

0x0005,

0xf667,	// (0x000a4603) main_mup2_pane_t_ParamLimits

0xf667,	// (0x000a4603) main_mup2_pane_t

0x4c5c,	// (0x00099bf8) mup2_visualizer_pane_ParamLimits

0x4c5c,	// (0x00099bf8) mup2_visualizer_pane

0x4c92,	// (0x00099c2e) mup_progress_pane_cp_ParamLimits

0x4c92,	// (0x00099c2e) mup_progress_pane_cp

0x4d9d,	// (0x00099d39) mup_volume_pane_cp_ParamLimits

0x4d9d,	// (0x00099d39) mup_volume_pane_cp

0x4ca9,	// (0x00099c45) mup2_visualizer_pane_g1_ParamLimits

0x4ca9,	// (0x00099c45) mup2_visualizer_pane_g1

0xbc9f,	// (0x000a0c3b) mup2_visualizer_pane_g2_ParamLimits

0xbc9f,	// (0x000a0c3b) mup2_visualizer_pane_g2

0x4cbe,	// (0x00099c5a) mup2_visualizer_pane_g3_ParamLimits

0x4cbe,	// (0x00099c5a) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x000a4610) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x000a4610) mup2_visualizer_pane_g

0xaab9,	// (0x0009fa55) aid_size_cell_fmradio

0x44db,	// (0x00099477) aid_height_parent_landcape

0x9f03,	// (0x0009ee9f) wml_content_pane_cp

0x9f0b,	// (0x0009eea7) wml_tabs_pane

0x9f14,	// (0x0009eeb0) popup_wml_miniature_window

0x9f1c,	// (0x0009eeb8) scroll_pane_cp021

0x9f30,	// (0x0009eecc) wml_content_pane_comp8

0xecc7,	// (0x000a3c63) bg_popup_sub_pane_cp05

0xbcbd,	// (0x000a0c59) popup_wml_miniature_window_g1

0xbcc5,	// (0x000a0c61) wml_miniature_view_pane

0x4ccc,	// (0x00099c68) aid_size_wml_view

0x4cd4,	// (0x00099c70) wml_miniature_view_pane_g1

0x4cdd,	// (0x00099c79) wml_miniature_view_pane_g2

0x4ce6,	// (0x00099c82) wml_miniature_view_pane_g3

0x4cee,	// (0x00099c8a) wml_miniature_view_pane_g4

0x4cf6,	// (0x00099c92) wml_miniature_view_pane_g5

0x4cfe,	// (0x00099c9a) wml_miniature_view_pane_g6

0x4d06,	// (0x00099ca2) wml_miniature_view_pane_g7

0x4d0e,	// (0x00099caa) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x000a4617) wml_miniature_view_pane_g

0xbc93,	// (0x000a0c2f) background_graphic_ParamLimits

0xbc93,	// (0x000a0c2f) background_graphic

0xbccd,	// (0x000a0c69) wml_tabs_2_pane

0xbcd6,	// (0x000a0c72) wml_tabs_3_pane_ParamLimits

0xbcd6,	// (0x000a0c72) wml_tabs_3_pane

0xbce8,	// (0x000a0c84) wml_tabs_4_pane_ParamLimits

0xbce8,	// (0x000a0c84) wml_tabs_4_pane

0xbcfe,	// (0x000a0c9a) wml_tabs_5_pane_ParamLimits

0xbcfe,	// (0x000a0c9a) wml_tabs_5_pane

0xbd18,	// (0x000a0cb4) wml_tabs_pane_g2_ParamLimits

0xbd18,	// (0x000a0cb4) wml_tabs_pane_g2

0xbd2c,	// (0x000a0cc8) wml_tabs_pane_g3_ParamLimits

0xbd2c,	// (0x000a0cc8) wml_tabs_pane_g3

0x4d16,	// (0x00099cb2) wml_tabs_2_active_pane_ParamLimits

0x4d16,	// (0x00099cb2) wml_tabs_2_active_pane

0x4d26,	// (0x00099cc2) wml_tabs_2_passive_pane_ParamLimits

0x4d26,	// (0x00099cc2) wml_tabs_2_passive_pane

0x4d36,	// (0x00099cd2) wml_tabs_3_active_pane_cp_ParamLimits

0x4d36,	// (0x00099cd2) wml_tabs_3_active_pane_cp

0x4d47,	// (0x00099ce3) wml_tabs_3_passive_pane_ParamLimits

0x4d47,	// (0x00099ce3) wml_tabs_3_passive_pane

0x4d58,	// (0x00099cf4) wml_tabs_3_passive_pane_cp_ParamLimits

0x4d58,	// (0x00099cf4) wml_tabs_3_passive_pane_cp

0x4d69,	// (0x00099d05) tabs_4_active_pane

0x4d71,	// (0x00099d0d) tabs_4_passive_pane

0x4d79,	// (0x00099d15) tabs_4_passive_pane_cp

0x4d81,	// (0x00099d1d) tabs_4_passive_pane_cp2

0x42a0,	// (0x0009923c) aid_height_text

0x39e0,	// (0x0009897c) mup_volume_cont_pane_ParamLimits

0x39e0,	// (0x0009897c) mup_volume_cont_pane

0x12e0,	// (0x0009627c) aid_size_cell_pinb

0x12ea,	// (0x00096286) aid_size_list_pinb

0x4c7b,	// (0x00099c17) mup2_volume_cont_pane_ParamLimits

0x4c7b,	// (0x00099c17) mup2_volume_cont_pane

0x4d89,	// (0x00099d25) mup2_volume_cont_pane_g1_ParamLimits

0x4d89,	// (0x00099d25) mup2_volume_cont_pane_g1

0x0f05,	// (0x00095ea1) aid_size_cell_touch_ParamLimits

0x0f05,	// (0x00095ea1) aid_size_cell_touch

0x11c6,	// (0x00096162) touch_pane_ParamLimits

0x11c6,	// (0x00096162) touch_pane

0x11bc,	// (0x00096158) main_rss2_pane

0xbd49,	// (0x000a0ce5) listscroll_rss2_pane

0xbd52,	// (0x000a0cee) rss2_navigation_pane

0xbd5a,	// (0x000a0cf6) list_rss2_pane

0xa59a,	// (0x0009f536) scroll_pane_cp22

0xbd62,	// (0x000a0cfe) rss2_navigation_pane_g1

0xbd6b,	// (0x000a0d07) rss2_navigation_pane_g2

0xbd73,	// (0x000a0d0f) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x000a4628) rss2_navigation_pane_g

0xbd7b,	// (0x000a0d17) rss2_navigation_pane_t1

0x4dc2,	// (0x00099d5e) rss2_list_single_pane_ParamLimits

0x4dc2,	// (0x00099d5e) rss2_list_single_pane

0xbd89,	// (0x000a0d25) rss2_list_single_pane_t2

0xbd97,	// (0x000a0d33) rss2_list_single_pane_t3_ParamLimits

0xbd97,	// (0x000a0d33) rss2_list_single_pane_t3

0xbdb4,	// (0x000a0d50) rss2_list_single_pane_t4

0x3258,	// (0x000981f4) smil_status_pane_g1

0x44f2,	// (0x0009948e) main_image2_pane_ParamLimits

0x44f2,	// (0x0009948e) main_image2_pane

0x498e,	// (0x0009992a) main_camera2_pane_g9_ParamLimits

0x498e,	// (0x0009992a) main_camera2_pane_g9

0x49e2,	// (0x0009997e) main_camera2_pane_t5_ParamLimits

0x49e2,	// (0x0009997e) main_camera2_pane_t5

0x49f4,	// (0x00099990) main_camera2_pane_t6_ParamLimits

0x49f4,	// (0x00099990) main_camera2_pane_t6

0x4df3,	// (0x00099d8f) main_image2_pane_g1_ParamLimits

0x4df3,	// (0x00099d8f) main_image2_pane_g1

0x4040,	// (0x00098fdc) smil2_video_pane_ParamLimits

0x4040,	// (0x00098fdc) smil2_video_pane

0x0f39,	// (0x00095ed5) aid_zoom_text_primary_cp

0x1157,	// (0x000960f3) popup_preview_fixed_window

0x9e6c,	// (0x0009ee08) im_reading_pane_g1

0x48d8,	// (0x00099874) cams2_bc_adjust_pane_cp_ParamLimits

0x48d8,	// (0x00099874) cams2_bc_adjust_pane_cp

0x4a24,	// (0x000999c0) cams2_bc_adjust_pane_ParamLimits

0x4a24,	// (0x000999c0) cams2_bc_adjust_pane

0xd09a,	// (0x000a2036) cams2_bc_adjust_pane_g1

0x4dff,	// (0x00099d9b) cams2_slider_pane

0x4e08,	// (0x00099da4) cams2_slider_pane_g1

0x4e11,	// (0x00099dad) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x000a462f) cams2_slider_pane_g

0x13f0,	// (0x0009638c) calc_display_pane_ParamLimits

0x140e,	// (0x000963aa) calc_paper_pane_ParamLimits

0x142a,	// (0x000963c6) grid_calc_pane_ParamLimits

0x3534,	// (0x000984d0) popup_clock_digital_window_t1_ParamLimits

0xaa56,	// (0x0009f9f2) main_image_pane_t1

0x13d6,	// (0x00096372) aid_size_cell_calc_ParamLimits

0x13d6,	// (0x00096372) aid_size_cell_calc

0x4523,	// (0x000994bf) popup_blid_sat_info2_window_ParamLimits

0x4523,	// (0x000994bf) popup_blid_sat_info2_window

0xbdca,	// (0x000a0d66) aid_size_cell_blid

0xbdd2,	// (0x000a0d6e) bg_popup_window_pane_cp07

0xbdf5,	// (0x000a0d91) grid_popup_blid_pane

0xbdff,	// (0x000a0d9b) heading_pane_cp05_ParamLimits

0xbdff,	// (0x000a0d9b) heading_pane_cp05

0xbede,	// (0x000a0e7a) cell_popup_blid_pane_ParamLimits

0xbede,	// (0x000a0e7a) cell_popup_blid_pane

0xbf02,	// (0x000a0e9e) cell_popup_blid_pane_g1

0xbf0a,	// (0x000a0ea6) cell_popup_blid_pane_t1

0x4c41,	// (0x00099bdd) mup2_indicator_pane_ParamLimits

0x4c41,	// (0x00099bdd) mup2_indicator_pane

0x9d73,	// (0x0009ed0f) mup2_visualizer_osc_pane

0xbcab,	// (0x000a0c47) mup2_visualizer_spec_pane_ParamLimits

0xbcab,	// (0x000a0c47) mup2_visualizer_spec_pane

0x4e2b,	// (0x00099dc7) mup2_spec_half_pane

0x4e34,	// (0x00099dd0) mup2_spec_half_pane_cp

0x4e3e,	// (0x00099dda) mup2_spec_bar_pane_ParamLimits

0x4e3e,	// (0x00099dda) mup2_spec_bar_pane

0xbc40,	// (0x000a0bdc) mup2_spec_bar_pane_g1

0xbc4a,	// (0x000a0be6) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000a45a2) mup2_spec_bar_pane_g

0x4e5d,	// (0x00099df9) mup2_osc_middle_pane

0xbc5c,	// (0x000a0bf8) mup2_visualizer_osc_pane_g1

0xe7bc,	// (0x000a3758) popup_number_entry_window_t1_ParamLimits

0xe7cf,	// (0x000a376b) popup_number_entry_window_t2_ParamLimits

0xe7e1,	// (0x000a377d) popup_number_entry_window_t3_ParamLimits

0x121d,	// (0x000961b9) popup_number_entry_window_t5_ParamLimits

0x121d,	// (0x000961b9) popup_number_entry_window_t5

0xf0ca,	// (0x000a4066) popup_number_entry_window_t_ParamLimits

0xe7f3,	// (0x000a378f) text_title_cp2_ParamLimits

0x3d40,	// (0x00098cdc) aid_hotspot_pointer_text2_pane

0x3dce,	// (0x00098d6a) main_viewer_pane_g9_ParamLimits

0x3dce,	// (0x00098d6a) main_viewer_pane_g9

0xa0a5,	// (0x0009f041) cale_month_pane_t1_ParamLimits

0xa0e2,	// (0x0009f07e) bg_cale_pane_ParamLimits

0xa0fa,	// (0x0009f096) list_cale_pane_ParamLimits

0xa10b,	// (0x0009f0a7) listscroll_cale_day_pane_t1

0xa11d,	// (0x0009f0b9) scroll_pane_cp09_ParamLimits

0x3a1b,	// (0x000989b7) main_mup_eq_pane_t1_ParamLimits

0x3a1b,	// (0x000989b7) main_mup_eq_pane_t1

0x3a35,	// (0x000989d1) main_mup_eq_pane_t2_ParamLimits

0x3a35,	// (0x000989d1) main_mup_eq_pane_t2

0x3a4f,	// (0x000989eb) main_mup_eq_pane_t3_ParamLimits

0x3a4f,	// (0x000989eb) main_mup_eq_pane_t3

0x3a67,	// (0x00098a03) main_mup_eq_pane_t4_ParamLimits

0x3a67,	// (0x00098a03) main_mup_eq_pane_t4

0x3a7f,	// (0x00098a1b) main_mup_eq_pane_t5_ParamLimits

0x3a7f,	// (0x00098a1b) main_mup_eq_pane_t5

0x3a97,	// (0x00098a33) main_mup_eq_pane_t6_ParamLimits

0x3a97,	// (0x00098a33) main_mup_eq_pane_t6

0x3aab,	// (0x00098a47) main_mup_eq_pane_t7_ParamLimits

0x3aab,	// (0x00098a47) main_mup_eq_pane_t7

0x3abf,	// (0x00098a5b) main_mup_eq_pane_t8_ParamLimits

0x3abf,	// (0x00098a5b) main_mup_eq_pane_t8

0x3ad5,	// (0x00098a71) main_mup_eq_pane_t9_ParamLimits

0x3ad5,	// (0x00098a71) main_mup_eq_pane_t9

0x3aed,	// (0x00098a89) main_mup_eq_pane_t10_ParamLimits

0x3aed,	// (0x00098a89) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x000a43f1) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x000a43f1) main_mup_eq_pane_t

0x3baa,	// (0x00098b46) mup_equalizer_pane_cp5_ParamLimits

0x3bc0,	// (0x00098b5c) mup_equalizer_pane_cp6_ParamLimits

0x3bd8,	// (0x00098b74) mup_equalizer_pane_cp7_ParamLimits

0x11bc,	// (0x00096158) main_gallery_pane

0xbc65,	// (0x000a0c01) smil2_volume_pane

0xbc6d,	// (0x000a0c09) smil_status_volume_pane_g1_ParamLimits

0xbc80,	// (0x000a0c1c) smil_status_volume_pane_g2_ParamLimits

0x474b,	// (0x000996e7) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x000a45a7) smil_status_volume_pane_g_ParamLimits

0xbdd2,	// (0x000a0d6e) bg_popup_window_pane_cp07_ParamLimits

0xbde0,	// (0x000a0d7c) blid_firmament_pane

0x4e66,	// (0x00099e02) aid_size_cell_gallery_ParamLimits

0x4e66,	// (0x00099e02) aid_size_cell_gallery

0x4e74,	// (0x00099e10) grid_gallery_pane_ParamLimits

0x4e74,	// (0x00099e10) grid_gallery_pane

0x4e84,	// (0x00099e20) cell_gallery_pane_ParamLimits

0x4e84,	// (0x00099e20) cell_gallery_pane

0xbf18,	// (0x000a0eb4) bg_cell_gallery_focus_pane_ParamLimits

0xbf18,	// (0x000a0eb4) bg_cell_gallery_focus_pane

0xbf2a,	// (0x000a0ec6) cell_gallery_pane_g1_ParamLimits

0xbf2a,	// (0x000a0ec6) cell_gallery_pane_g1

0x4ed2,	// (0x00099e6e) cell_gallery_pane_g2_ParamLimits

0x4ed2,	// (0x00099e6e) cell_gallery_pane_g2

0x4edf,	// (0x00099e7b) cell_gallery_pane_g3_ParamLimits

0x4edf,	// (0x00099e7b) cell_gallery_pane_g3

0xbf36,	// (0x000a0ed2) cell_gallery_pane_g4_ParamLimits

0xbf36,	// (0x000a0ed2) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x000a4655) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x000a4655) cell_gallery_pane_g

0xbf42,	// (0x000a0ede) bg_cell_gallery_focus_pane_g1

0xbf4a,	// (0x000a0ee6) bg_cell_gallery_focus_pane_g2

0xbf52,	// (0x000a0eee) bg_cell_gallery_focus_pane_g3

0xbf5a,	// (0x000a0ef6) bg_cell_gallery_focus_pane_g4

0xbf62,	// (0x000a0efe) bg_cell_gallery_focus_pane_g5

0xbf6a,	// (0x000a0f06) bg_cell_gallery_focus_pane_g6

0xbf72,	// (0x000a0f0e) bg_cell_gallery_focus_pane_g7

0xbf7a,	// (0x000a0f16) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x000a465e) bg_cell_gallery_focus_pane_g

0xbf82,	// (0x000a0f1e) aid_firma_cardinal

0xbf96,	// (0x000a0f32) blid_firmament_pane_t1

0xbfad,	// (0x000a0f49) blid_firmament_pane_t2

0xbfc4,	// (0x000a0f60) blid_firmament_pane_t3

0xbfdb,	// (0x000a0f77) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x000a466f) blid_firmament_pane_t

0xbff2,	// (0x000a0f8e) blid_sat_info_pane

0xc002,	// (0x000a0f9e) blid_sat_info_pane_g1

0xc002,	// (0x000a0f9e) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x000a4678) blid_sat_info_pane_g

0xc00c,	// (0x000a0fa8) blid_sat_info_pane_t1

0xc01a,	// (0x000a0fb6) smil2_volume_content_pane

0xc023,	// (0x000a0fbf) smil2_volume_pane_g1

0xbe9b,	// (0x000a0e37) smil2_volume_content_pane_g1

0xc02b,	// (0x000a0fc7) smil2_volume_content_pane_g2

0xc034,	// (0x000a0fd0) smil2_volume_content_pane_g3

0xc03d,	// (0x000a0fd9) smil2_volume_content_pane_g4

0xc046,	// (0x000a0fe2) smil2_volume_content_pane_g5

0xc04f,	// (0x000a0feb) smil2_volume_content_pane_g6

0xc058,	// (0x000a0ff4) smil2_volume_content_pane_g7

0xc061,	// (0x000a0ffd) smil2_volume_content_pane_g8

0xc06a,	// (0x000a1006) smil2_volume_content_pane_g9

0xc073,	// (0x000a100f) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x000a467d) smil2_volume_content_pane_g

0x1a13,	// (0x000969af) cale_week_day_heading_pane_t1_ParamLimits

0x1a4e,	// (0x000969ea) cale_week_day_heading_pane_t2_ParamLimits

0x1a89,	// (0x00096a25) cale_week_day_heading_pane_t3_ParamLimits

0x1ac4,	// (0x00096a60) cale_week_day_heading_pane_t4_ParamLimits

0x1aff,	// (0x00096a9b) cale_week_day_heading_pane_t5_ParamLimits

0x1b3a,	// (0x00096ad6) cale_week_day_heading_pane_t6_ParamLimits

0x1b75,	// (0x00096b11) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x000a416d) cale_week_day_heading_pane_t_ParamLimits

0x9d18,	// (0x0009ecb4) bg_cale_side_pane_ParamLimits

0x1bb0,	// (0x00096b4c) cale_week_time_pane_t1_ParamLimits

0x1bca,	// (0x00096b66) cale_week_time_pane_t2_ParamLimits

0x1be4,	// (0x00096b80) cale_week_time_pane_t3_ParamLimits

0x1bfe,	// (0x00096b9a) cale_week_time_pane_t4_ParamLimits

0x1c18,	// (0x00096bb4) cale_week_time_pane_t5_ParamLimits

0x1c32,	// (0x00096bce) cale_week_time_pane_t6_ParamLimits

0x1c52,	// (0x00096bee) cale_week_time_pane_t7_ParamLimits

0x1c74,	// (0x00096c10) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x000a417c) cale_week_time_pane_t_ParamLimits

0x1c98,	// (0x00096c34) cell_cale_week_pane_g2_ParamLimits

0x9d18,	// (0x0009ecb4) bg_cale_side_pane_cp01_ParamLimits

0x302f,	// (0x00097fcb) cale_month_week_pane_t1_ParamLimits

0x3048,	// (0x00097fe4) cale_month_week_pane_t2_ParamLimits

0x3061,	// (0x00097ffd) cale_month_week_pane_t3_ParamLimits

0x307a,	// (0x00098016) cale_month_week_pane_t4_ParamLimits

0x3093,	// (0x0009802f) cale_month_week_pane_t5_ParamLimits

0x30b4,	// (0x00098050) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000a4251) cale_month_week_pane_t_ParamLimits

0x3221,	// (0x000981bd) cell_cale_month_pane_g1_ParamLimits

0x11bc,	// (0x00096158) main_cale_event_viewer_pane

0xe792,	// (0x000a372e) listscroll_cale_event_viewer_pane

0xc07c,	// (0x000a1018) list_cale_ev_pane

0xc084,	// (0x000a1020) scroll_pane_cp023

0xc090,	// (0x000a102c) field_cale_ev_pane_ParamLimits

0xc090,	// (0x000a102c) field_cale_ev_pane

0xc0ae,	// (0x000a104a) field_cale_ev_content_pane_ParamLimits

0xc0ae,	// (0x000a104a) field_cale_ev_content_pane

0xc0ba,	// (0x000a1056) field_cale_ev_pane_g1_ParamLimits

0xc0ba,	// (0x000a1056) field_cale_ev_pane_g1

0xc0c6,	// (0x000a1062) field_cale_ev_pane_g2_ParamLimits

0xc0c6,	// (0x000a1062) field_cale_ev_pane_g2

0xc0de,	// (0x000a107a) field_cale_ev_pane_g3_ParamLimits

0xc0de,	// (0x000a107a) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x000a4692) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x000a4692) field_cale_ev_pane_g

0xc0f6,	// (0x000a1092) field_cale_ev_pane_t1_ParamLimits

0xc0f6,	// (0x000a1092) field_cale_ev_pane_t1

0xc10d,	// (0x000a10a9) field_cale_ev_content_pane_t1_ParamLimits

0xc10d,	// (0x000a10a9) field_cale_ev_content_pane_t1

0xa93c,	// (0x0009f8d8) bg_button_pane_cp01

0x17a0,	// (0x0009673c) listscroll_cale_week_pane_ParamLimits

0x9cc3,	// (0x0009ec5f) popup_toolbar_window_cp01

0x9ce9,	// (0x0009ec85) listscroll_cale_week_pane_t1_ParamLimits

0x17a0,	// (0x0009673c) listscroll_cale_day_pane_ParamLimits

0x9cc3,	// (0x0009ec5f) popup_toolbar_window_cp02

0xa10b,	// (0x0009f0a7) listscroll_cale_day_pane_t1_ParamLimits

0x17a0,	// (0x0009673c) main_cale_month_pane_ParamLimits

0x462a,	// (0x000995c6) popup_toolbar_window_cp03_ParamLimits

0x462a,	// (0x000995c6) popup_toolbar_window_cp03

0x3f56,	// (0x00098ef2) main_image_pane_g2_ParamLimits

0x3f56,	// (0x00098ef2) main_image_pane_g2

0x3f62,	// (0x00098efe) main_image_pane_g3_ParamLimits

0x3f62,	// (0x00098efe) main_image_pane_g3

0x0002,

0xf4e7,	// (0x000a4483) main_image_pane_g_ParamLimits

0xf4e7,	// (0x000a4483) main_image_pane_g

0xaa56,	// (0x0009f9f2) main_image_pane_t1_ParamLimits

0x3f6e,	// (0x00098f0a) main_image_pane_t2_ParamLimits

0x3f6e,	// (0x00098f0a) main_image_pane_t2

0x3f80,	// (0x00098f1c) main_image_pane_t3_ParamLimits

0x3f80,	// (0x00098f1c) main_image_pane_t3

0x3f92,	// (0x00098f2e) main_image_pane_t4_ParamLimits

0x3f92,	// (0x00098f2e) main_image_pane_t4

0x0003,

0xf4ee,	// (0x000a448a) main_image_pane_t_ParamLimits

0xf4ee,	// (0x000a448a) main_image_pane_t

0x3fa4,	// (0x00098f40) popup_image_details_window_cp01

0x3fae,	// (0x00098f4a) popup_toobar_trans_pane_cp01_ParamLimits

0x3fae,	// (0x00098f4a) popup_toobar_trans_pane_cp01

0x457a,	// (0x00099516) popup_image_details_window_ParamLimits

0x457a,	// (0x00099516) popup_image_details_window

0x4588,	// (0x00099524) popup_image_focus_window

0x48ca,	// (0x00099866) camera2_autofocus_pane_ParamLimits

0x48ca,	// (0x00099866) camera2_autofocus_pane

0xe792,	// (0x000a372e) bg_popup_sub_pane_cp06

0xc12b,	// (0x000a10c7) popup_image_focus_window_g1

0xc133,	// (0x000a10cf) popup_image_focus_window_g2

0xc13b,	// (0x000a10d7) popup_image_focus_window_g3

0xc143,	// (0x000a10df) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x000a4699) popup_image_focus_window_g

0xc14b,	// (0x000a10e7) popup_image_focus_window_t1

0xc159,	// (0x000a10f5) popup_image_focus_window_t2

0xc169,	// (0x000a1105) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x000a46a2) popup_image_focus_window_t

0xc177,	// (0x000a1113) camera2_autofocus_pane_g1

0xb97e,	// (0x000a091a) bg_tb_trans_pane_cp01

0xc185,	// (0x000a1121) popup_image_details_window_g1

0xc198,	// (0x000a1134) popup_image_details_window_g2

0x0002,

0xf718,	// (0x000a46b4) popup_image_details_window_g

0xc1c1,	// (0x000a115d) popup_image_details_window_t1

0xc1d3,	// (0x000a116f) popup_image_details_window_t2

0xc1ec,	// (0x000a1188) popup_image_details_window_t3

0xc200,	// (0x000a119c) popup_image_details_window_t4

0xc21b,	// (0x000a11b7) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x000a46bb) popup_image_details_window_t

0xefd3,	// (0x000a3f6f) bg_calc_paper_pane_ParamLimits

0x11bc,	// (0x00096158) grid_highlight_pane_cp013

0x1527,	// (0x000964c3) list_calc_pane_ParamLimits

0x1539,	// (0x000964d5) scroll_pane_cp024

0xefe7,	// (0x000a3f83) bg_calc_display_pane_ParamLimits

0x1541,	// (0x000964dd) calc_display_pane_t1_ParamLimits

0x1556,	// (0x000964f2) calc_display_pane_t2_ParamLimits

0x156b,	// (0x00096507) calc_display_pane_t3_ParamLimits

0xf151,	// (0x000a40ed) calc_display_pane_t_ParamLimits

0x1647,	// (0x000965e3) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x000a410a) cell_calc_pane_g

0x1650,	// (0x000965ec) cell_calc_pane_t1

0xf046,	// (0x000a3fe2) grid_highlight_pane_cp02_ParamLimits

0xf05c,	// (0x000a3ff8) toolbar_button_pane_cp01_ParamLimits

0xf05c,	// (0x000a3ff8) toolbar_button_pane_cp01

0xaa9b,	// (0x0009fa37) temp_image_control_pane_ParamLimits

0xaa9b,	// (0x0009fa37) temp_image_control_pane

0x44f2,	// (0x0009948e) main_mp3_pane

0xc235,	// (0x000a11d1) temp_image_control_pane_g1_ParamLimits

0xc235,	// (0x000a11d1) temp_image_control_pane_g1

0xc243,	// (0x000a11df) temp_image_control_pane_g2_ParamLimits

0xc243,	// (0x000a11df) temp_image_control_pane_g2

0xc255,	// (0x000a11f1) temp_image_control_pane_g3_ParamLimits

0xc255,	// (0x000a11f1) temp_image_control_pane_g3

0x4f1c,	// (0x00099eb8) temp_image_control_pane_g4_ParamLimits

0x4f1c,	// (0x00099eb8) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x000a46c6) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x000a46c6) temp_image_control_pane_g

0xc235,	// (0x000a11d1) main_mp3_pane_g1

0x4f2d,	// (0x00099ec9) main_mp3_pane_g2

0x0007,

0xf733,	// (0x000a46cf) main_mp3_pane_g

0xc298,	// (0x000a1234) main_mp3_pane_t1

0x9d7b,	// (0x0009ed17) main_camera_pane_g8_ParamLimits

0x9d7b,	// (0x0009ed17) main_camera_pane_g8

0x1f25,	// (0x00096ec1) main_video_pane_g7_ParamLimits

0x1f25,	// (0x00096ec1) main_video_pane_g7

0x4a12,	// (0x000999ae) main_camera2_pane_t7_ParamLimits

0x4a12,	// (0x000999ae) main_camera2_pane_t7

0x9ec3,	// (0x0009ee5f) scroll_pane_cp025_ParamLimits

0x9ec3,	// (0x0009ee5f) scroll_pane_cp025

0x9ed7,	// (0x0009ee73) scroll_pane_cp026_ParamLimits

0x9ed7,	// (0x0009ee73) scroll_pane_cp026

0x9ee6,	// (0x0009ee82) wml_content_pane_ParamLimits

0x11bc,	// (0x00096158) main_touch_calib_pane

0x4fd1,	// (0x00099f6d) main_touch_calib_pane_g1

0x4fdd,	// (0x00099f79) main_touch_calib_pane_g2

0x4fe9,	// (0x00099f85) main_touch_calib_pane_g3

0x4ff5,	// (0x00099f91) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x000a46ed) main_touch_calib_pane_g

0x5001,	// (0x00099f9d) main_touch_calib_pane_t1

0x501a,	// (0x00099fb6) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x000a46f6) main_touch_calib_pane_t

0xa676,	// (0x0009f612) mup_progress_pane_cp02

0xa6ab,	// (0x0009f647) navi_pane_g1

0xa766,	// (0x0009f702) navi_pane_mp_t3

0x44f2,	// (0x0009948e) main_mp3_pane_ParamLimits

0x4667,	// (0x00099603) navi_pane_ParamLimits

0xc235,	// (0x000a11d1) main_mp3_pane_g1_ParamLimits

0x4f2d,	// (0x00099ec9) main_mp3_pane_g2_ParamLimits

0x4f39,	// (0x00099ed5) main_mp3_pane_g3_ParamLimits

0x4f39,	// (0x00099ed5) main_mp3_pane_g3

0x4f45,	// (0x00099ee1) main_mp3_pane_g4_ParamLimits

0x4f45,	// (0x00099ee1) main_mp3_pane_g4

0xc265,	// (0x000a1201) main_mp3_pane_g5_ParamLimits

0xc265,	// (0x000a1201) main_mp3_pane_g5

0xc273,	// (0x000a120f) main_mp3_pane_g6_ParamLimits

0xc273,	// (0x000a120f) main_mp3_pane_g6

0xc280,	// (0x000a121c) main_mp3_pane_g7_ParamLimits

0xc280,	// (0x000a121c) main_mp3_pane_g7

0xc28c,	// (0x000a1228) main_mp3_pane_g8_ParamLimits

0xc28c,	// (0x000a1228) main_mp3_pane_g8

0xf733,	// (0x000a46cf) main_mp3_pane_g_ParamLimits

0x4f51,	// (0x00099eed) main_mp3_pane_t2

0x4f61,	// (0x00099efd) main_mp3_pane_t3

0xc2a6,	// (0x000a1242) main_mp3_pane_t4

0xc2b4,	// (0x000a1250) main_mp3_pane_t5

0x0005,

0xf744,	// (0x000a46e0) main_mp3_pane_t

0xc2c2,	// (0x000a125e) mup_progress_pane_cp01

0x0f39,	// (0x00095ed5) aid_zoom_text_secondary2

0xc07c,	// (0x000a1018) list_cale_ev2_pane

0xc084,	// (0x000a1020) scroll_pane_cp023_ParamLimits

0x5075,	// (0x0009a011) field_cale_ev2_pane_ParamLimits

0x5075,	// (0x0009a011) field_cale_ev2_pane

0x509e,	// (0x0009a03a) field_cale_ev2_pane_g1_ParamLimits

0x509e,	// (0x0009a03a) field_cale_ev2_pane_g1

0x50aa,	// (0x0009a046) field_cale_ev2_pane_g2_ParamLimits

0x50aa,	// (0x0009a046) field_cale_ev2_pane_g2

0x50c2,	// (0x0009a05e) field_cale_ev2_pane_g3_ParamLimits

0x50c2,	// (0x0009a05e) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x000a4701) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x000a4701) field_cale_ev2_pane_g

0xc2d6,	// (0x000a1272) field_cale_ev2_pane_t1_ParamLimits

0xc2d6,	// (0x000a1272) field_cale_ev2_pane_t1

0xc2ed,	// (0x000a1289) field_cale_ev2_pane_t2_ParamLimits

0xc2ed,	// (0x000a1289) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x000a470a) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x000a470a) field_cale_ev2_pane_t

0x3e36,	// (0x00098dd2) main_postcard_pane_g5_ParamLimits

0x3e36,	// (0x00098dd2) main_postcard_pane_g5

0x3e44,	// (0x00098de0) main_postcard_pane_g6_ParamLimits

0x3e44,	// (0x00098de0) main_postcard_pane_g6

0x1d6f,	// (0x00096d0b) camera2_autofocus_pane_cp_ParamLimits

0x1d6f,	// (0x00096d0b) camera2_autofocus_pane_cp

0x44f2,	// (0x0009948e) main_mup3_pane

0x50da,	// (0x0009a076) main_mup3_pane_g1_ParamLimits

0x50da,	// (0x0009a076) main_mup3_pane_g1

0x50fb,	// (0x0009a097) main_mup3_pane_g2_ParamLimits

0x50fb,	// (0x0009a097) main_mup3_pane_g2

0x5173,	// (0x0009a10f) main_mup3_pane_g3_ParamLimits

0x5173,	// (0x0009a10f) main_mup3_pane_g3

0x51b6,	// (0x0009a152) main_mup3_pane_g4_ParamLimits

0x51b6,	// (0x0009a152) main_mup3_pane_g4

0x51f9,	// (0x0009a195) main_mup3_pane_g5_ParamLimits

0x51f9,	// (0x0009a195) main_mup3_pane_g5

0x523c,	// (0x0009a1d8) main_mup3_pane_g6_ParamLimits

0x523c,	// (0x0009a1d8) main_mup3_pane_g6

0xc322,	// (0x000a12be) main_mup3_pane_g7_ParamLimits

0xc322,	// (0x000a12be) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x000a471a) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x000a471a) main_mup3_pane_g

0x52b2,	// (0x0009a24e) main_mup3_pane_t1_ParamLimits

0x52b2,	// (0x0009a24e) main_mup3_pane_t1

0x5321,	// (0x0009a2bd) main_mup3_pane_t2_ParamLimits

0x5321,	// (0x0009a2bd) main_mup3_pane_t2

0x53ea,	// (0x0009a386) main_mup3_pane_t4_ParamLimits

0x53ea,	// (0x0009a386) main_mup3_pane_t4

0x5438,	// (0x0009a3d4) main_mup3_pane_t5_ParamLimits

0x5438,	// (0x0009a3d4) main_mup3_pane_t5

0x54e8,	// (0x0009a484) main_mup3_pane_t6_ParamLimits

0x54e8,	// (0x0009a484) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x000a472b) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x000a472b) main_mup3_pane_t

0x5594,	// (0x0009a530) mup3_progress_pane_ParamLimits

0x5594,	// (0x0009a530) mup3_progress_pane

0x5612,	// (0x0009a5ae) popup_mup3_control_window_ParamLimits

0x5612,	// (0x0009a5ae) popup_mup3_control_window

0xc330,	// (0x000a12cc) popup_mup3_text_window

0x562b,	// (0x0009a5c7) mup3_progress_pane_t1

0x564a,	// (0x0009a5e6) mup3_progress_pane_t2

0xc338,	// (0x000a12d4) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x000a4738) mup3_progress_pane_t

0xc355,	// (0x000a12f1) mup_progress_pane_cp03

0xe792,	// (0x000a372e) bg_tb_trans_pane_cp04

0x5669,	// (0x0009a605) mup3_volume_pane

0x5671,	// (0x0009a60d) popup_mup3_control_window_g1

0x567a,	// (0x0009a616) mup3_volume_pane_g1

0x5683,	// (0x0009a61f) mup3_volume_pane_g2

0x568c,	// (0x0009a628) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x000a473f) mup3_volume_pane_g

0xe792,	// (0x000a372e) bg_tb_trans_pane_cp03

0xc365,	// (0x000a1301) popup_mup3_text_window_g1

0xc36d,	// (0x000a1309) popup_mup3_text_window_t1

0xf02f,	// (0x000a3fcb) list_calc_item_pane_g1_ParamLimits

0xbd40,	// (0x000a0cdc) mup_volume_pane_cp_g1

0x5033,	// (0x00099fcf) main_touch_calib_pane_t3

0x5049,	// (0x00099fe5) main_touch_calib_pane_t4

0x505f,	// (0x00099ffb) main_touch_calib_pane_t5

0x0ef1,	// (0x00095e8d) aid_cell_size_toolbar2

0x0ef9,	// (0x00095e95) aid_popup3_width_pane

0x0e01,	// (0x00095d9d) aid_zoom_text_msg_primary

0x1d44,	// (0x00096ce0) vorec_t7

0xeff3,	// (0x000a3f8f) bg_calc_paper_pane_g1_ParamLimits

0xefff,	// (0x000a3f9b) bg_calc_paper_pane_g2_ParamLimits

0xf00b,	// (0x000a3fa7) bg_calc_paper_pane_g3_ParamLimits

0xf017,	// (0x000a3fb3) bg_calc_paper_pane_g4_ParamLimits

0xf023,	// (0x000a3fbf) bg_calc_paper_pane_g5_ParamLimits

0x15aa,	// (0x00096546) bg_calc_paper_pane_g6_ParamLimits

0x15bb,	// (0x00096557) bg_calc_paper_pane_g7_ParamLimits

0x15cc,	// (0x00096568) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x000a40f4) bg_calc_paper_pane_g_ParamLimits

0x15dd,	// (0x00096579) calc_bg_paper_pane_g9_ParamLimits

0x1e56,	// (0x00096df2) image_qvga_pane_ParamLimits

0x1e56,	// (0x00096df2) image_qvga_pane

0xef22,	// (0x000a3ebe) bg_popup_sub_pane_cp04_ParamLimits

0xa9d2,	// (0x0009f96e) popup_mup_playback_window_g1_ParamLimits

0xa9de,	// (0x0009f97a) popup_mup_playback_window_t1_ParamLimits

0xa9f3,	// (0x0009f98f) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x000a447e) popup_mup_playback_window_t_ParamLimits

0x4b41,	// (0x00099add) main_mup2_pane_g3_ParamLimits

0x4b41,	// (0x00099add) main_mup2_pane_g3

0x221b,	// (0x000971b7) popup_toolbar_window_cp04

0xadd5,	// (0x0009fd71) popup_call2_audio_second_window_g3_ParamLimits

0xadd5,	// (0x0009fd71) popup_call2_audio_second_window_g3

0xb1df,	// (0x000a017b) popup_call2_audio_first_window_g4_ParamLimits

0xb1df,	// (0x000a017b) popup_call2_audio_first_window_g4

0xb85e,	// (0x000a07fa) popup_call2_audio_in_window_g4_ParamLimits

0xb85e,	// (0x000a07fa) popup_call2_audio_in_window_g4

0x3f49,	// (0x00098ee5) aid_area_sk_bg_cut_ParamLimits

0x3f49,	// (0x00098ee5) aid_area_sk_bg_cut

0xaa08,	// (0x0009f9a4) aid_area_sk_bg_cut_2_ParamLimits

0xaa08,	// (0x0009f9a4) aid_area_sk_bg_cut_2

0x4ec2,	// (0x00099e5e) aid_placing_details_win

0x4eca,	// (0x00099e66) aid_placing_details_win_2

0xc177,	// (0x000a1113) camera2_autofocus_pane_g1_ParamLimits

0x1148,	// (0x000960e4) popup_fixed_preview_cale_window_ParamLimits

0x1148,	// (0x000960e4) popup_fixed_preview_cale_window

0xa7e4,	// (0x0009f780) navi_slider_pane_g3

0xa7ed,	// (0x0009f789) navi_slider_pane_g4

0xa7f6,	// (0x0009f792) navi_slider_pane_g5

0xa7e4,	// (0x0009f780) navi_slider_pane_g6

0x37af,	// (0x0009874b) navi_slider_pane_g7

0xa909,	// (0x0009f8a5) mup_scale_pane_g3

0xa912,	// (0x0009f8ae) mup_scale_pane_g4

0xa91b,	// (0x0009f8b7) mup_scale_pane_g5

0x3bf0,	// (0x00098b8c) mup_scale_pane_g6

0x3bf9,	// (0x00098b95) mup_scale_pane_g7

0xa7e4,	// (0x0009f780) cams2_slider_pane_g3

0xbdc2,	// (0x000a0d5e) cams2_slider_pane_g4

0x4e1a,	// (0x00099db6) cams2_slider_pane_g5

0xa7e4,	// (0x0009f780) cams2_slider_pane_g6

0x4e22,	// (0x00099dbe) cams2_slider_pane_g7

0xc002,	// (0x000a0f9e) camera2_autofocus_pane_cp_g1

0xbbd9,	// (0x000a0b75) bg_popup_preview_window_pane_cp02_ParamLimits

0xbbd9,	// (0x000a0b75) bg_popup_preview_window_pane_cp02

0xc37b,	// (0x000a1317) list_fp_cale_pane_ParamLimits

0xc37b,	// (0x000a1317) list_fp_cale_pane

0xc387,	// (0x000a1323) popup_fixed_preview_cale_window_t1_ParamLimits

0xc387,	// (0x000a1323) popup_fixed_preview_cale_window_t1

0x5695,	// (0x0009a631) popup_fixed_preview_cale_window_t2_ParamLimits

0x5695,	// (0x0009a631) popup_fixed_preview_cale_window_t2

0x56aa,	// (0x0009a646) popup_fixed_preview_cale_window_t3_ParamLimits

0x56aa,	// (0x0009a646) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x000a4746) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x000a4746) popup_fixed_preview_cale_window_t

0x56bf,	// (0x0009a65b) list_single_fp_cale_pane_ParamLimits

0x56bf,	// (0x0009a65b) list_single_fp_cale_pane

0xc3a5,	// (0x000a1341) list_single_fp_cale_pane_g1_ParamLimits

0xc3a5,	// (0x000a1341) list_single_fp_cale_pane_g1

0xc3b1,	// (0x000a134d) list_single_fp_cale_pane_g2_ParamLimits

0xc3b1,	// (0x000a134d) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x000a474d) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x000a474d) list_single_fp_cale_pane_g

0xc3ca,	// (0x000a1366) list_single_fp_cale_pane_t1_ParamLimits

0xc3ca,	// (0x000a1366) list_single_fp_cale_pane_t1

0xc3dc,	// (0x000a1378) list_single_fp_cale_pane_t2_ParamLimits

0xc3dc,	// (0x000a1378) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x000a4754) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x000a4754) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x11bc,	// (0x00096158) main_dialer_pane

0x56d2,	// (0x0009a66e) aid_cell_size_keypad

0x56dc,	// (0x0009a678) dialer_ne_pane

0x56e6,	// (0x0009a682) grid_dialer_command_1_pane

0x56ee,	// (0x0009a68a) grid_dialer_command_2_pane

0x56f6,	// (0x0009a692) grid_dialer_keypad_pane

0x5708,	// (0x0009a6a4) bg_popup_call_pane_cp06_ParamLimits

0x5708,	// (0x0009a6a4) bg_popup_call_pane_cp06

0x5714,	// (0x0009a6b0) dialer_ne_clear_pane_ParamLimits

0x5714,	// (0x0009a6b0) dialer_ne_clear_pane

0xc40f,	// (0x000a13ab) dialer_ne_pane_g1

0xc417,	// (0x000a13b3) dialer_ne_pane_t1_ParamLimits

0xc417,	// (0x000a13b3) dialer_ne_pane_t1

0x5720,	// (0x0009a6bc) dialer_ne_pane_t2_ParamLimits

0x5720,	// (0x0009a6bc) dialer_ne_pane_t2

0x573d,	// (0x0009a6d9) dialer_ne_pane_t3_ParamLimits

0x573d,	// (0x0009a6d9) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x000a4759) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x000a4759) dialer_ne_pane_t

0x5761,	// (0x0009a6fd) dialer_ne_pane_t3_copy1_ParamLimits

0x5761,	// (0x0009a6fd) dialer_ne_pane_t3_copy1

0x5785,	// (0x0009a721) cell_dialer_keypad_pane_ParamLimits

0x5785,	// (0x0009a721) cell_dialer_keypad_pane

0x579c,	// (0x0009a738) cell_dialer_command_1_pane_ParamLimits

0x579c,	// (0x0009a738) cell_dialer_command_1_pane

0x57b2,	// (0x0009a74e) cell_dialer_command_2_pane_ParamLimits

0x57b2,	// (0x0009a74e) cell_dialer_command_2_pane

0xc429,	// (0x000a13c5) bg_button_pane_cp02_ParamLimits

0xc429,	// (0x000a13c5) bg_button_pane_cp02

0x57c1,	// (0x0009a75d) cell_dialer_keypad_pane_g1_ParamLimits

0x57c1,	// (0x0009a75d) cell_dialer_keypad_pane_g1

0xc429,	// (0x000a13c5) bg_button_pane_cp03_ParamLimits

0xc429,	// (0x000a13c5) bg_button_pane_cp03

0x57d6,	// (0x0009a772) cell_dialer_command_1_pane_g1_ParamLimits

0x57d6,	// (0x0009a772) cell_dialer_command_1_pane_g1

0xc435,	// (0x000a13d1) bg_button_pane_cp04

0x57ea,	// (0x0009a786) cell_dialer_command_2_pane_g1

0x9d73,	// (0x0009ed0f) bg_button_pane_cp06

0xc43d,	// (0x000a13d9) dialer_ne_clear_pane_g1

0xa6b7,	// (0x0009f653) navi_pane_g2

0xa6e5,	// (0x0009f681) navi_pane_g3

0x0002,

0xf3e5,	// (0x000a4381) navi_pane_g

0xa774,	// (0x0009f710) navi_pane_mv_g2

0xa79b,	// (0x0009f737) navi_pane_mv_g5

0x377a,	// (0x00098716) navi_pane_mv_t1

0xefe7,	// (0x000a3f83) main_clock2_pane

0x5828,	// (0x0009a7c4) main_clock2_list_pane_ParamLimits

0x5828,	// (0x0009a7c4) main_clock2_list_pane

0x5850,	// (0x0009a7ec) main_clock2_pane_t1_ParamLimits

0x5850,	// (0x0009a7ec) main_clock2_pane_t1

0x5872,	// (0x0009a80e) main_clock2_pane_t2_ParamLimits

0x5872,	// (0x0009a80e) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x000a4765) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x000a4765) main_clock2_pane_t

0x58cd,	// (0x0009a869) popup_clock_analogue_window_cp03_ParamLimits

0x58cd,	// (0x0009a869) popup_clock_analogue_window_cp03

0x58eb,	// (0x0009a887) popup_clock_digital_window_cp02_ParamLimits

0x58eb,	// (0x0009a887) popup_clock_digital_window_cp02

0x5958,	// (0x0009a8f4) main_clock2_list_single_pane_ParamLimits

0x5958,	// (0x0009a8f4) main_clock2_list_single_pane

0x9d73,	// (0x0009ed0f) list_highlight_pane_cp05

0xc47b,	// (0x000a1417) main_clock2_list_single_pane_t1

0x221b,	// (0x000971b7) popup_toolbar_window_cp04_ParamLimits

0x4eec,	// (0x00099e88) camera2_autofocus_pane_g2_ParamLimits

0x4eec,	// (0x00099e88) camera2_autofocus_pane_g2

0x4ef8,	// (0x00099e94) camera2_autofocus_pane_g3_ParamLimits

0x4ef8,	// (0x00099e94) camera2_autofocus_pane_g3

0x4f04,	// (0x00099ea0) camera2_autofocus_pane_g4_ParamLimits

0x4f04,	// (0x00099ea0) camera2_autofocus_pane_g4

0x4f10,	// (0x00099eac) camera2_autofocus_pane_g5_ParamLimits

0x4f10,	// (0x00099eac) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x000a46a9) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x000a46a9) camera2_autofocus_pane_g

0xc302,	// (0x000a129e) camera2_autofocus_pane_cp_g2

0xc30a,	// (0x000a12a6) camera2_autofocus_pane_cp_g3

0xc312,	// (0x000a12ae) camera2_autofocus_pane_cp_g4

0xc31a,	// (0x000a12b6) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x000a470f) camera2_autofocus_pane_cp_g

0x5700,	// (0x0009a69c) popup_dialer_spcha_window

0xe792,	// (0x000a372e) bg_popup_sub_pane_cp07

0xc489,	// (0x000a1425) list_spcha_pane

0xc491,	// (0x000a142d) list_single_spcha_pane_ParamLimits

0xc491,	// (0x000a142d) list_single_spcha_pane

0xe792,	// (0x000a372e) list_highlight_pane_cp06

0xc4a2,	// (0x000a143e) list_single_spcha_pane_t1

0xb608,	// (0x000a05a4) popup_call2_audio_out_window_g4_ParamLimits

0xb608,	// (0x000a05a4) popup_call2_audio_out_window_g4

0x11bc,	// (0x00096158) main_imed2_pane

0x4590,	// (0x0009952c) popup_imed_adjust2_window

0x45a3,	// (0x0009953f) popup_imed_trans_window_ParamLimits

0x45a3,	// (0x0009953f) popup_imed_trans_window

0xbe2b,	// (0x000a0dc7) popup_blid_sat_info2_window_t1

0xbe39,	// (0x000a0dd5) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x000a463e) popup_blid_sat_info2_window_t

0x5a02,	// (0x0009a99e) aid_size_cell_colour_35

0x5a1c,	// (0x0009a9b8) aid_size_cell_colour_112

0x5a33,	// (0x0009a9cf) aid_size_cell_effect

0xb97e,	// (0x000a091a) bg_tb_trans_pane_cp02

0xb98c,	// (0x000a0928) heading_imed_pane

0x5a4d,	// (0x0009a9e9) listscroll_imed_pane

0xc4b0,	// (0x000a144c) heading_imed_pane_g1

0xc4b8,	// (0x000a1454) heading_imed_pane_t1

0xc4c6,	// (0x000a1462) grid_imed_colour_35_pane_ParamLimits

0xc4c6,	// (0x000a1462) grid_imed_colour_35_pane

0x5a59,	// (0x0009a9f5) grid_imed_effect_pane

0xc4dd,	// (0x000a1479) list_imed_aspect_pane

0x5a69,	// (0x0009aa05) scroll_pane_cp027_ParamLimits

0x5a69,	// (0x0009aa05) scroll_pane_cp027

0x5a75,	// (0x0009aa11) cell_imed_effect_pane_ParamLimits

0x5a75,	// (0x0009aa11) cell_imed_effect_pane

0xc4e5,	// (0x000a1481) cell_imed_colour_pane_ParamLimits

0xc4e5,	// (0x000a1481) cell_imed_colour_pane

0xc527,	// (0x000a14c3) cell_imed_colour_pane_g1_ParamLimits

0xc527,	// (0x000a14c3) cell_imed_colour_pane_g1

0xc538,	// (0x000a14d4) hgihlgiht_grid_pane_cp016_ParamLimits

0xc538,	// (0x000a14d4) hgihlgiht_grid_pane_cp016

0x5a8d,	// (0x0009aa29) cell_imed_effect_pane_g1

0x5a95,	// (0x0009aa31) grid_highlight_pane_cp017

0xc549,	// (0x000a14e5) list_imed_single_pane_ParamLimits

0xc549,	// (0x000a14e5) list_imed_single_pane

0xe792,	// (0x000a372e) list_highlight_pane_cp07

0xc55e,	// (0x000a14fa) list_imed_aspect_pane_comp1_t1

0xbbe5,	// (0x000a0b81) bg_tb_trans_pane_cp05

0xc580,	// (0x000a151c) popup_imed_adjust2_window_g1

0xc5a7,	// (0x000a1543) popup_imed_adjust2_window_t1

0xc5bf,	// (0x000a155b) slider_imed_adjust_pane

0xc5d3,	// (0x000a156f) slider_imed_adjust_pane_g1

0xc5e3,	// (0x000a157f) slider_imed_adjust_pane_g2

0xc5f3,	// (0x000a158f) slider_imed_adjust_pane_g3

0xc604,	// (0x000a15a0) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x000a4782) slider_imed_adjust_pane_g

0x5a9e,	// (0x0009aa3a) aid_size_cell_clipart2

0x5aaa,	// (0x0009aa46) grid_imed_clipart_pane

0xc615,	// (0x000a15b1) scroll_pane_cp031

0x5ab4,	// (0x0009aa50) cell_imed_clipart_pane_ParamLimits

0x5ab4,	// (0x0009aa50) cell_imed_clipart_pane

0x5ad6,	// (0x0009aa72) cell_imed_clipart_pane_g1

0xe792,	// (0x000a372e) grid_highlight_pane_cp014

0x5834,	// (0x0009a7d0) main_clock2_pane_g1_ParamLimits

0x5834,	// (0x0009a7d0) main_clock2_pane_g1

0x5903,	// (0x0009a89f) aid_call2_pane_cp10

0x5915,	// (0x0009a8b1) aid_call_pane_cp10

0xa618,	// (0x0009f5b4) popup_clock_analogue_window_cp10_g1

0xa618,	// (0x0009f5b4) popup_clock_analogue_window_cp10_g2

0x5927,	// (0x0009a8c3) popup_clock_analogue_window_cp10_g3

0x5927,	// (0x0009a8c3) popup_clock_analogue_window_cp10_g4

0xa618,	// (0x0009f5b4) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x000a4770) popup_clock_analogue_window_cp10_g

0x5939,	// (0x0009a8d5) popup_clock_analogue_window_cp10_t1

0x596a,	// (0x0009a906) clock_digital_number_pane_cp10_ParamLimits

0x596a,	// (0x0009a906) clock_digital_number_pane_cp10

0x5982,	// (0x0009a91e) clock_digital_number_pane_cp11_ParamLimits

0x5982,	// (0x0009a91e) clock_digital_number_pane_cp11

0x599a,	// (0x0009a936) clock_digital_number_pane_cp12_ParamLimits

0x599a,	// (0x0009a936) clock_digital_number_pane_cp12

0x59b2,	// (0x0009a94e) clock_digital_number_pane_cp13_ParamLimits

0x59b2,	// (0x0009a94e) clock_digital_number_pane_cp13

0x59ca,	// (0x0009a966) clock_digital_separator_pane_cp10_ParamLimits

0x59ca,	// (0x0009a966) clock_digital_separator_pane_cp10

0x59e2,	// (0x0009a97e) popup_clock_digital_window_cp02_t1_ParamLimits

0x59e2,	// (0x0009a97e) popup_clock_digital_window_cp02_t1

0xef1a,	// (0x000a3eb6) clock_digital_number_pane_cp10_g1

0xef1a,	// (0x000a3eb6) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x000a478b) clock_digital_number_pane_cp10_g

0xef1a,	// (0x000a3eb6) clock_digital_separator_pane_cp10_g1

0xef1a,	// (0x000a3eb6) clock_digital_separator_pane_g2_cp10

0xa7a3,	// (0x0009f73f) navi_pane_vded_g4

0xa7ac,	// (0x0009f748) navi_pane_vded_g5

0xa7b5,	// (0x0009f751) navi_pane_vded_t1

0x11bc,	// (0x00096158) main_vded_pane

0x5adf,	// (0x0009aa7b) main_vded_pane_g1

0x5aeb,	// (0x0009aa87) main_vded_pane_g2

0x5af5,	// (0x0009aa91) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x000a4790) main_vded_pane_g

0x5aff,	// (0x0009aa9b) main_vded_pane_t1

0x5b0d,	// (0x0009aaa9) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x000a4797) main_vded_pane_t

0x5b1b,	// (0x0009aab7) vded_slider_pane

0x5b25,	// (0x0009aac1) vded_video_pane

0xc61d,	// (0x000a15b9) vded_video_pane_g1

0x5b2f,	// (0x0009aacb) vded_video_pane_g2

0xc002,	// (0x000a0f9e) vded_video_pane_g3

0x0002,

0xf800,	// (0x000a479c) vded_video_pane_g

0xc627,	// (0x000a15c3) vded_slider_pane_g1

0xbd40,	// (0x000a0cdc) vded_slider_pane_g2

0xc630,	// (0x000a15cc) vded_slider_pane_g3

0xc639,	// (0x000a15d5) vded_slider_pane_g4

0xc642,	// (0x000a15de) vded_slider_pane_g5

0x0004,

0xf807,	// (0x000a47a3) vded_slider_pane_g

0x5604,	// (0x0009a5a0) mup3_rocker_pane_ParamLimits

0x5604,	// (0x0009a5a0) mup3_rocker_pane

0x5b38,	// (0x0009aad4) mup3_control_keys_pane_g1

0x5b40,	// (0x0009aadc) mup3_control_keys_pane_g2

0x5b48,	// (0x0009aae4) mup3_control_keys_pane_g3

0x5b50,	// (0x0009aaec) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x000a47ae) mup3_control_keys_pane_g

0x1170,	// (0x0009610c) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1170,	// (0x0009610c) popup_toolbar2_fixed_window_cp01

0x561e,	// (0x0009a5ba) popup_toolbar2_fixed_window_cp02_ParamLimits

0x561e,	// (0x0009a5ba) popup_toolbar2_fixed_window_cp02

0xaf47,	// (0x0009fee3) popup_call2_audio_second_window_t4_ParamLimits

0xaf47,	// (0x0009fee3) popup_call2_audio_second_window_t4

0xb475,	// (0x000a0411) popup_call2_audio_first_window_t6_ParamLimits

0xb475,	// (0x000a0411) popup_call2_audio_first_window_t6

0xb70b,	// (0x000a06a7) popup_call2_audio_out_window_t6_ParamLimits

0xb70b,	// (0x000a06a7) popup_call2_audio_out_window_t6

0x11bc,	// (0x00096158) main_vitu_pane

0x5b60,	// (0x0009aafc) aid_size_cell_itu_ParamLimits

0x5b60,	// (0x0009aafc) aid_size_cell_itu

0xe806,	// (0x000a37a2) bg_popup_window_pane_cp08_ParamLimits

0xe806,	// (0x000a37a2) bg_popup_window_pane_cp08

0x5b6e,	// (0x0009ab0a) field_vitu_entry_pane_ParamLimits

0x5b6e,	// (0x0009ab0a) field_vitu_entry_pane

0x5b7d,	// (0x0009ab19) grid_vitu_function_pane_ParamLimits

0x5b7d,	// (0x0009ab19) grid_vitu_function_pane

0x5b8d,	// (0x0009ab29) grid_vitu_itu_pane_ParamLimits

0x5b8d,	// (0x0009ab29) grid_vitu_itu_pane

0x5b9d,	// (0x0009ab39) cell_vitu_itu_pane_ParamLimits

0x5b9d,	// (0x0009ab39) cell_vitu_itu_pane

0x5bb2,	// (0x0009ab4e) cell_vitu_function_pane_ParamLimits

0x5bb2,	// (0x0009ab4e) cell_vitu_function_pane

0xb97e,	// (0x000a091a) bg_popup_sub_pane_cp08_ParamLimits

0xb97e,	// (0x000a091a) bg_popup_sub_pane_cp08

0x5bc4,	// (0x0009ab60) field_vitu_entry_pane_t1_ParamLimits

0x5bc4,	// (0x0009ab60) field_vitu_entry_pane_t1

0xc663,	// (0x000a15ff) field_vitu_entry_pane_t2_ParamLimits

0xc663,	// (0x000a15ff) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x000a47bc) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x000a47bc) field_vitu_entry_pane_t

0xc680,	// (0x000a161c) bg_button_pane_cp05_ParamLimits

0xc680,	// (0x000a161c) bg_button_pane_cp05

0x5be0,	// (0x0009ab7c) cell_vitu_itu_pane_g1

0x5bf8,	// (0x0009ab94) cell_vitu_itu_pane_t1_ParamLimits

0x5bf8,	// (0x0009ab94) cell_vitu_itu_pane_t1

0x5c0a,	// (0x0009aba6) cell_vitu_itu_pane_t2_ParamLimits

0x5c0a,	// (0x0009aba6) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x000a47c1) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x000a47c1) cell_vitu_itu_pane_t

0xc68e,	// (0x000a162a) bg_button_pane_cp07

0x5c3f,	// (0x0009abdb) cell_vitu_function_pane_g1

0x144e,	// (0x000963ea) main_calc_pane_g1

0x0f2d,	// (0x00095ec9) aid_visual_content_pane

0x11bc,	// (0x00096158) main_vradio_pane

0x5c48,	// (0x0009abe4) main_vradio_pane_g1_ParamLimits

0x5c48,	// (0x0009abe4) main_vradio_pane_g1

0xc698,	// (0x000a1634) main_vradio_pane_g2_ParamLimits

0xc698,	// (0x000a1634) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x000a47c8) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x000a47c8) main_vradio_pane_g

0x5c58,	// (0x0009abf4) main_vradio_pane_t1_ParamLimits

0x5c58,	// (0x0009abf4) main_vradio_pane_t1

0x5c6a,	// (0x0009ac06) main_vradio_pane_t2_ParamLimits

0x5c6a,	// (0x0009ac06) main_vradio_pane_t2

0xc6a5,	// (0x000a1641) main_vradio_pane_t3_ParamLimits

0xc6a5,	// (0x000a1641) main_vradio_pane_t3

0x0002,

0xf831,	// (0x000a47cd) main_vradio_pane_t_ParamLimits

0xf831,	// (0x000a47cd) main_vradio_pane_t

0x5c7c,	// (0x0009ac18) vradio_rocker_control_pane_ParamLimits

0x5c7c,	// (0x0009ac18) vradio_rocker_control_pane

0x5c88,	// (0x0009ac24) vradio_station_info_pane_ParamLimits

0x5c88,	// (0x0009ac24) vradio_station_info_pane

0xc6b9,	// (0x000a1655) vradio_frequency_info_pane_ParamLimits

0xc6b9,	// (0x000a1655) vradio_frequency_info_pane

0xc002,	// (0x000a0f9e) vradio_station_info_pane_g1

0xc6c8,	// (0x000a1664) vradio_station_info_pane_t1_ParamLimits

0xc6c8,	// (0x000a1664) vradio_station_info_pane_t1

0xc6ea,	// (0x000a1686) vradio_station_info_pane_t2_ParamLimits

0xc6ea,	// (0x000a1686) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x000a47d4) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x000a47d4) vradio_station_info_pane_t

0xc6fc,	// (0x000a1698) vradio_tuning_pane

0xc704,	// (0x000a16a0) vradio_rocker_control_pane_g1

0xc70c,	// (0x000a16a8) vradio_rocker_control_pane_g2

0xc714,	// (0x000a16b0) vradio_rocker_control_pane_g3

0xc71c,	// (0x000a16b8) vradio_rocker_control_pane_g4

0xc724,	// (0x000a16c0) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x000a47d9) vradio_rocker_control_pane_g

0x5c97,	// (0x0009ac33) vradio_frequency_info_pane_g1

0xc72c,	// (0x000a16c8) vradio_frequency_info_pane_t1_ParamLimits

0xc72c,	// (0x000a16c8) vradio_frequency_info_pane_t1

0x5ca1,	// (0x0009ac3d) vradio_tuning_pane_g1

0x5caa,	// (0x0009ac46) vradio_tuning_pane_t1

0x0f76,	// (0x00095f12) area_side_right_pane_ParamLimits

0x0f76,	// (0x00095f12) area_side_right_pane

0xbba0,	// (0x000a0b3c) status_small_pane_g1

0xbba8,	// (0x000a0b44) status_small_pane_g2

0xbbb1,	// (0x000a0b4d) status_small_pane_g3

0xbbba,	// (0x000a0b56) status_small_pane_g4

0x0003,

0xf5f8,	// (0x000a4594) status_small_pane_g

0xbbc3,	// (0x000a0b5f) status_small_pane_t1

0x11bc,	// (0x00096158) main_video3_pane

0xc740,	// (0x000a16dc) cams_zoom_vslider_pane

0xc748,	// (0x000a16e4) image3_wide_pane_ParamLimits

0xc748,	// (0x000a16e4) image3_wide_pane

0xc762,	// (0x000a16fe) image3_wide_small_pane

0xc76e,	// (0x000a170a) main_video3_pane_g1_ParamLimits

0xc76e,	// (0x000a170a) main_video3_pane_g1

0xc78a,	// (0x000a1726) main_video3_pane_g2_ParamLimits

0xc78a,	// (0x000a1726) main_video3_pane_g2

0x0001,

0xf848,	// (0x000a47e4) main_video3_pane_g_ParamLimits

0xf848,	// (0x000a47e4) main_video3_pane_g

0xc7a6,	// (0x000a1742) main_video3_pane_t1_ParamLimits

0xc7a6,	// (0x000a1742) main_video3_pane_t1

0xc7d1,	// (0x000a176d) main_video3_pane_t2_ParamLimits

0xc7d1,	// (0x000a176d) main_video3_pane_t2

0xc7fc,	// (0x000a1798) main_video3_pane_t3_ParamLimits

0xc7fc,	// (0x000a1798) main_video3_pane_t3

0x0002,

0xf84d,	// (0x000a47e9) main_video3_pane_t_ParamLimits

0xf84d,	// (0x000a47e9) main_video3_pane_t

0xc829,	// (0x000a17c5) cams_zoom_vslider_pane_g1

0xc832,	// (0x000a17ce) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x000a47f0) cams_zoom_vslider_pane_g

0xc83a,	// (0x000a17d6) small_slider_vertical_pane

0xc002,	// (0x000a0f9e) small_slider_vertical_pane_g1

0xc002,	// (0x000a0f9e) small_slider_vertical_pane_g2

0xc842,	// (0x000a17de) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x000a47f5) small_slider_vertical_pane_g

0x11bc,	// (0x00096158) main_hwr_training_pane

0xc84b,	// (0x000a17e7) hwr_training_instruct_pane_ParamLimits

0xc84b,	// (0x000a17e7) hwr_training_instruct_pane

0x5cb9,	// (0x0009ac55) hwr_training_navi_pane_ParamLimits

0x5cb9,	// (0x0009ac55) hwr_training_navi_pane

0x5cd3,	// (0x0009ac6f) hwr_training_write_pane_ParamLimits

0x5cd3,	// (0x0009ac6f) hwr_training_write_pane

0xe792,	// (0x000a372e) bg_frame_shadow_pane

0xc882,	// (0x000a181e) hwr_training_write_pane_g1

0xc88a,	// (0x000a1826) hwr_training_write_pane_g2

0xc892,	// (0x000a182e) hwr_training_write_pane_g3

0xc89a,	// (0x000a1836) hwr_training_write_pane_g4

0xc8a2,	// (0x000a183e) hwr_training_write_pane_g5

0xc8aa,	// (0x000a1846) hwr_training_write_pane_g6

0xc8b2,	// (0x000a184e) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x000a47fc) hwr_training_write_pane_g

0x5d0b,	// (0x0009aca7) hwr_training_navi_pane_g1_ParamLimits

0x5d0b,	// (0x0009aca7) hwr_training_navi_pane_g1

0x5d1d,	// (0x0009acb9) hwr_training_navi_pane_g2_ParamLimits

0x5d1d,	// (0x0009acb9) hwr_training_navi_pane_g2

0x5d2f,	// (0x0009accb) hwr_training_navi_pane_g3_ParamLimits

0x5d2f,	// (0x0009accb) hwr_training_navi_pane_g3

0x5d3f,	// (0x0009acdb) hwr_training_navi_pane_g4_ParamLimits

0x5d3f,	// (0x0009acdb) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x000a480b) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x000a480b) hwr_training_navi_pane_g

0x5d59,	// (0x0009acf5) hwr_training_navi_pane_t1

0x5d67,	// (0x0009ad03) list_single_hwr_training_instruct_pane_ParamLimits

0x5d67,	// (0x0009ad03) list_single_hwr_training_instruct_pane

0xc8ba,	// (0x000a1856) list_single_hwr_training_instruct_pane_t1

0xbf42,	// (0x000a0ede) bg_frame_shadow_pane_g1

0xc8c9,	// (0x000a1865) bg_frame_shadow_pane_g2

0xc8d1,	// (0x000a186d) bg_frame_shadow_pane_g3

0xc8d9,	// (0x000a1875) bg_frame_shadow_pane_g4

0xc8e1,	// (0x000a187d) bg_frame_shadow_pane_g5

0xc8e9,	// (0x000a1885) bg_frame_shadow_pane_g6

0xc8f1,	// (0x000a188d) bg_frame_shadow_pane_g7

0x9c67,	// (0x0009ec03) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x000a4816) bg_frame_shadow_pane_g

0x11bc,	// (0x00096158) main_video_tele_dialer_pane

0x5d8c,	// (0x0009ad28) aid_size_cell_video_keypad_ParamLimits

0x5d8c,	// (0x0009ad28) aid_size_cell_video_keypad

0x5d9c,	// (0x0009ad38) grid_video_dialer_keypad_pane_ParamLimits

0x5d9c,	// (0x0009ad38) grid_video_dialer_keypad_pane

0x5dd0,	// (0x0009ad6c) video_down_pane_cp_ParamLimits

0x5dd0,	// (0x0009ad6c) video_down_pane_cp

0x5dfa,	// (0x0009ad96) cell_video_dialer_keypad_pane_ParamLimits

0x5dfa,	// (0x0009ad96) cell_video_dialer_keypad_pane

0xc8f9,	// (0x000a1895) bg_button_pane_cp08_ParamLimits

0xc8f9,	// (0x000a1895) bg_button_pane_cp08

0x5e0f,	// (0x0009adab) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5e0f,	// (0x0009adab) cell_video_dialer_keypad_pane_g1

0x55f8,	// (0x0009a594) mup3_rocker2_pane_ParamLimits

0x55f8,	// (0x0009a594) mup3_rocker2_pane

0xc002,	// (0x000a0f9e) mup3_rocker2_pane_g1

0x4500,	// (0x0009949c) main_dialer2_pane

0x11bc,	// (0x00096158) main_mp4_pane

0x5e4e,	// (0x0009adea) main_mp4_pane_g1_ParamLimits

0x5e4e,	// (0x0009adea) main_mp4_pane_g1

0x5e5c,	// (0x0009adf8) main_mp4_pane_g2_ParamLimits

0x5e5c,	// (0x0009adf8) main_mp4_pane_g2

0x5e6a,	// (0x0009ae06) main_mp4_pane_g3_ParamLimits

0x5e6a,	// (0x0009ae06) main_mp4_pane_g3

0x5eaf,	// (0x0009ae4b) main_mp4_pane_g4_ParamLimits

0x5eaf,	// (0x0009ae4b) main_mp4_pane_g4

0x5ed7,	// (0x0009ae73) main_mp4_pane_g5_ParamLimits

0x5ed7,	// (0x0009ae73) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x000a4836) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x000a4836) main_mp4_pane_g

0x5f27,	// (0x0009aec3) main_mp4_pane_t1_ParamLimits

0x5f27,	// (0x0009aec3) main_mp4_pane_t1

0x5f83,	// (0x0009af1f) main_mp4_pane_t2_ParamLimits

0x5f83,	// (0x0009af1f) main_mp4_pane_t2

0xc905,	// (0x000a18a1) main_mp4_pane_t3_ParamLimits

0xc905,	// (0x000a18a1) main_mp4_pane_t3

0x5fd5,	// (0x0009af71) main_mp4_pane_t4_ParamLimits

0x5fd5,	// (0x0009af71) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x000a4843) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x000a4843) main_mp4_pane_t

0x6019,	// (0x0009afb5) mp4_progress_pane_ParamLimits

0x6019,	// (0x0009afb5) mp4_progress_pane

0x6063,	// (0x0009afff) mp4_rocker_pane_ParamLimits

0x6063,	// (0x0009afff) mp4_rocker_pane

0xc92d,	// (0x000a18c9) mp4_progress_pane_t1

0xc946,	// (0x000a18e2) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x000a484c) mp4_progress_pane_t

0xc95f,	// (0x000a18fb) mup_progress_pane_cp04

0xd0a2,	// (0x000a203e) mp4_rocker_pane_g1

0x6083,	// (0x0009b01f) aid_cell_size_keypad2_ParamLimits

0x6083,	// (0x0009b01f) aid_cell_size_keypad2

0x6093,	// (0x0009b02f) dialer2_ne_pane_ParamLimits

0x6093,	// (0x0009b02f) dialer2_ne_pane

0x60a1,	// (0x0009b03d) grid_dialer2_keypad_pane_ParamLimits

0x60a1,	// (0x0009b03d) grid_dialer2_keypad_pane

0xd21d,	// (0x000a21b9) bg_popup_call_pane_cp07_ParamLimits

0xd21d,	// (0x000a21b9) bg_popup_call_pane_cp07

0x60b1,	// (0x0009b04d) dialer2_ne_pane_t1_ParamLimits

0x60b1,	// (0x0009b04d) dialer2_ne_pane_t1

0x60d6,	// (0x0009b072) cell_dialer2_keypad_pane_ParamLimits

0x60d6,	// (0x0009b072) cell_dialer2_keypad_pane

0xc97d,	// (0x000a1919) bg_button_pane_pane_cp04_ParamLimits

0xc97d,	// (0x000a1919) bg_button_pane_pane_cp04

0x60eb,	// (0x0009b087) cell_dialer2_keypad_pane_g1_ParamLimits

0x60eb,	// (0x0009b087) cell_dialer2_keypad_pane_g1

0x20dd,	// (0x00097079) aid_placing_vt_set_content_ParamLimits

0x20dd,	// (0x00097079) aid_placing_vt_set_content

0x2109,	// (0x000970a5) aid_placing_vt_set_title_ParamLimits

0x2109,	// (0x000970a5) aid_placing_vt_set_title

0x11bc,	// (0x00096158) main_image3_pane

0x6185,	// (0x0009b121) area_side_right_pane_cp01_ParamLimits

0x6185,	// (0x0009b121) area_side_right_pane_cp01

0x61b2,	// (0x0009b14e) main_image3_pane_g1_ParamLimits

0x61b2,	// (0x0009b14e) main_image3_pane_g1

0x61c0,	// (0x0009b15c) main_image3_pane_g2_ParamLimits

0x61c0,	// (0x0009b15c) main_image3_pane_g2

0x61d9,	// (0x0009b175) main_image3_pane_g3_ParamLimits

0x61d9,	// (0x0009b175) main_image3_pane_g3

0x61f2,	// (0x0009b18e) main_image3_pane_g4_ParamLimits

0x61f2,	// (0x0009b18e) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x000a485b) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x000a485b) main_image3_pane_g

0x620b,	// (0x0009b1a7) main_image3_pane_t1_ParamLimits

0x620b,	// (0x0009b1a7) main_image3_pane_t1

0x6230,	// (0x0009b1cc) main_image3_pane_t2_ParamLimits

0x6230,	// (0x0009b1cc) main_image3_pane_t2

0x624f,	// (0x0009b1eb) main_image3_pane_t3_ParamLimits

0x624f,	// (0x0009b1eb) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x000a4864) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x000a4864) main_image3_pane_t

0xe806,	// (0x000a37a2) grid_sctrl_middle_pane_cp01_ParamLimits

0xe806,	// (0x000a37a2) grid_sctrl_middle_pane_cp01

0x62b0,	// (0x0009b24c) cell_sctrl_middle_pane_cp01_ParamLimits

0x62b0,	// (0x0009b24c) cell_sctrl_middle_pane_cp01

0x62c1,	// (0x0009b25d) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x62c1,	// (0x0009b25d) cell_sctrl_middle_pane_cp01_g1

0x11bc,	// (0x00096158) main_call4_pane

0x62ce,	// (0x0009b26a) aid_size_button_call4_ParamLimits

0x62ce,	// (0x0009b26a) aid_size_button_call4

0x62fe,	// (0x0009b29a) call4_windows_pane_ParamLimits

0x62fe,	// (0x0009b29a) call4_windows_pane

0x6318,	// (0x0009b2b4) grid_call4_button_pane_ParamLimits

0x6318,	// (0x0009b2b4) grid_call4_button_pane

0xc989,	// (0x000a1925) call4_windows_conf_pane

0xc9a0,	// (0x000a193c) popup_call4_audio_first_window_ParamLimits

0xc9a0,	// (0x000a193c) popup_call4_audio_first_window

0xc9ec,	// (0x000a1988) popup_call4_audio_second_window_ParamLimits

0xc9ec,	// (0x000a1988) popup_call4_audio_second_window

0xca00,	// (0x000a199c) popup_call4_audio_wait_window_ParamLimits

0xca00,	// (0x000a199c) popup_call4_audio_wait_window

0x633c,	// (0x0009b2d8) cell_call4_button_pane_ParamLimits

0x633c,	// (0x0009b2d8) cell_call4_button_pane

0x6361,	// (0x0009b2fd) bg_button_pane_cp09_ParamLimits

0x6361,	// (0x0009b2fd) bg_button_pane_cp09

0x636d,	// (0x0009b309) cell_call4_button_pane_g1_ParamLimits

0x636d,	// (0x0009b309) cell_call4_button_pane_g1

0x637a,	// (0x0009b316) cell_call4_button_pane_t1_ParamLimits

0x637a,	// (0x0009b316) cell_call4_button_pane_t1

0xca48,	// (0x000a19e4) popup_call4_audio_conf_window_ParamLimits

0xca48,	// (0x000a19e4) popup_call4_audio_conf_window

0x562b,	// (0x0009a5c7) mup3_progress_pane_t1_ParamLimits

0x564a,	// (0x0009a5e6) mup3_progress_pane_t2_ParamLimits

0xc338,	// (0x000a12d4) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x000a4738) mup3_progress_pane_t_ParamLimits

0xc355,	// (0x000a12f1) mup_progress_pane_cp03_ParamLimits

0x5b58,	// (0x0009aaf4) mup3_control_keys_pane_g4_copy1

0x6047,	// (0x0009afe3) mp4_rocker2_pane_ParamLimits

0x6047,	// (0x0009afe3) mp4_rocker2_pane

0xca5c,	// (0x000a19f8) mp4_rocker2_pane_g1

0xca64,	// (0x000a1a00) mp4_rocker2_pane_g2

0x638c,	// (0x0009b328) mp4_rocker2_pane_g3

0x6394,	// (0x0009b330) mp4_rocker2_pane_g4

0x639c,	// (0x0009b338) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x000a486d) mp4_rocker2_pane_g

0x11bc,	// (0x00096158) main_camera4_pane

0x11bc,	// (0x00096158) main_video4_pane

0x5dac,	// (0x0009ad48) main_video_tele_dialer_pane_t1_ParamLimits

0x5dac,	// (0x0009ad48) main_video_tele_dialer_pane_t1

0x5dbe,	// (0x0009ad5a) main_video_tele_dialer_pane_t2_ParamLimits

0x5dbe,	// (0x0009ad5a) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x000a4827) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x000a4827) main_video_tele_dialer_pane_t

0x63bc,	// (0x0009b358) cam4_autofocus_pane_ParamLimits

0x63bc,	// (0x0009b358) cam4_autofocus_pane

0x63d6,	// (0x0009b372) cam4_image_uncrop_pane_ParamLimits

0x63d6,	// (0x0009b372) cam4_image_uncrop_pane

0x63ed,	// (0x0009b389) cam4_indicators_pane_ParamLimits

0x63ed,	// (0x0009b389) cam4_indicators_pane

0x6409,	// (0x0009b3a5) main_camera4_pane_g1_ParamLimits

0x6409,	// (0x0009b3a5) main_camera4_pane_g1

0x6415,	// (0x0009b3b1) main_camera4_pane_g2_ParamLimits

0x6415,	// (0x0009b3b1) main_camera4_pane_g2

0x6415,	// (0x0009b3b1) main_camera4_pane_g3_ParamLimits

0x6415,	// (0x0009b3b1) main_camera4_pane_g3

0x6421,	// (0x0009b3bd) main_camera4_pane_g4_ParamLimits

0x6421,	// (0x0009b3bd) main_camera4_pane_g4

0x642d,	// (0x0009b3c9) main_camera4_pane_g5_ParamLimits

0x642d,	// (0x0009b3c9) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x000a4878) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x000a4878) main_camera4_pane_g

0x6447,	// (0x0009b3e3) main_camera4_pane_t1_ParamLimits

0x6447,	// (0x0009b3e3) main_camera4_pane_t1

0x648f,	// (0x0009b42b) bg_tb_trans_pane_cp06

0x64a5,	// (0x0009b441) cam4_indicators_pane_g1

0x64b6,	// (0x0009b452) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x000a4893) cam4_indicators_pane_g

0x64d4,	// (0x0009b470) cam4_indicators_pane_t1

0x64fe,	// (0x0009b49a) main_video4_pane_g1_ParamLimits

0x64fe,	// (0x0009b49a) main_video4_pane_g1

0x650a,	// (0x0009b4a6) main_video4_pane_g2_ParamLimits

0x650a,	// (0x0009b4a6) main_video4_pane_g2

0x6516,	// (0x0009b4b2) main_video4_pane_g3_ParamLimits

0x6516,	// (0x0009b4b2) main_video4_pane_g3

0x6522,	// (0x0009b4be) main_video4_pane_g4_ParamLimits

0x6522,	// (0x0009b4be) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x000a489a) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x000a489a) main_video4_pane_g

0x6542,	// (0x0009b4de) vid4_indicators_pane_ParamLimits

0x6542,	// (0x0009b4de) vid4_indicators_pane

0x6561,	// (0x0009b4fd) video4_image_uncrop_cif_pane_ParamLimits

0x6561,	// (0x0009b4fd) video4_image_uncrop_cif_pane

0x6570,	// (0x0009b50c) video4_image_uncrop_nhd_pane_ParamLimits

0x6570,	// (0x0009b50c) video4_image_uncrop_nhd_pane

0x63d6,	// (0x0009b372) video4_image_uncrop_vga_pane_ParamLimits

0x63d6,	// (0x0009b372) video4_image_uncrop_vga_pane

0x44f2,	// (0x0009948e) bg_tb_trans_pane_cp07

0x6587,	// (0x0009b523) vid4_indicators_pane_g1

0x659b,	// (0x0009b537) vid4_indicators_pane_g2

0x65af,	// (0x0009b54b) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x000a48a5) vid4_indicators_pane_g

0x65de,	// (0x0009b57a) vid4_indicators_pane_t1

0x65f5,	// (0x0009b591) cam4_autofocus_pane_g1

0x65fd,	// (0x0009b599) cam4_autofocus_pane_g2

0x6605,	// (0x0009b5a1) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x000a48b0) cam4_autofocus_pane_g

0x660d,	// (0x0009b5a9) cam4_autofocus_pane_g3_copy1

0x5dde,	// (0x0009ad7a) video_down_pane_cp_t1

0x5dec,	// (0x0009ad88) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x000a482c) video_down_pane_cp_t

0x11a2,	// (0x0009613e) popup_vitu2_window_ParamLimits

0x11a2,	// (0x0009613e) popup_vitu2_window

0x6615,	// (0x0009b5b1) aid_size_cell2_itu2_ParamLimits

0x6615,	// (0x0009b5b1) aid_size_cell2_itu2

0x6637,	// (0x0009b5d3) aid_size_cell_itu2_ParamLimits

0x6637,	// (0x0009b5d3) aid_size_cell_itu2

0x667b,	// (0x0009b617) bg_popup_window_pane_cp09_ParamLimits

0x667b,	// (0x0009b617) bg_popup_window_pane_cp09

0x6689,	// (0x0009b625) field_vitu2_entry_pane_ParamLimits

0x6689,	// (0x0009b625) field_vitu2_entry_pane

0x66a9,	// (0x0009b645) grid_vitu2_function_pane_ParamLimits

0x66a9,	// (0x0009b645) grid_vitu2_function_pane

0x66ed,	// (0x0009b689) grid_vitu2_itu_pane_ParamLimits

0x66ed,	// (0x0009b689) grid_vitu2_itu_pane

0x6769,	// (0x0009b705) cell_vitu2_itu_pane_ParamLimits

0x6769,	// (0x0009b705) cell_vitu2_itu_pane

0x6782,	// (0x0009b71e) cell_vitu2_function_pane_ParamLimits

0x6782,	// (0x0009b71e) cell_vitu2_function_pane

0xca7e,	// (0x000a1a1a) bg_popup_call_pane_cp08_ParamLimits

0xca7e,	// (0x000a1a1a) bg_popup_call_pane_cp08

0xca95,	// (0x000a1a31) field_vitu2_entry_pane_g1

0xcaa1,	// (0x000a1a3d) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x000a48b7) field_vitu2_entry_pane_g

0x67c3,	// (0x0009b75f) field_vitu2_entry_pane_t1_ParamLimits

0x67c3,	// (0x0009b75f) field_vitu2_entry_pane_t1

0xcabb,	// (0x000a1a57) field_vitu2_entry_pane_t2_ParamLimits

0xcabb,	// (0x000a1a57) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x000a48be) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x000a48be) field_vitu2_entry_pane_t

0x67f3,	// (0x0009b78f) bg_button_pane_cp010_ParamLimits

0x67f3,	// (0x0009b78f) bg_button_pane_cp010

0x6801,	// (0x0009b79d) cell_vitu2_itu_pane_g1

0x6821,	// (0x0009b7bd) cell_vitu2_itu_pane_t1_ParamLimits

0x6821,	// (0x0009b7bd) cell_vitu2_itu_pane_t1

0x0e11,	// (0x00095dad) cell_vitu2_itu_pane_t2_ParamLimits

0x0e11,	// (0x00095dad) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x000a48c8) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x000a48c8) cell_vitu2_itu_pane_t

0x44f2,	// (0x0009948e) bg_button_pane_cp011

0x686d,	// (0x0009b809) cell_vitu2_function_pane_g1

0x11bc,	// (0x00096158) main_myfav_hc_pane

0x6291,	// (0x0009b22d) popup_image3_note_pane_ParamLimits

0x6291,	// (0x0009b22d) popup_image3_note_pane

0x629f,	// (0x0009b23b) popup_image3_tool_bar_pane_ParamLimits

0x629f,	// (0x0009b23b) popup_image3_tool_bar_pane

0x0e87,	// (0x00095e23) cell_vitu2_itu_pane_t3_ParamLimits

0x0e87,	// (0x00095e23) cell_vitu2_itu_pane_t3

0xe792,	// (0x000a372e) bg_popup_trans_pane

0xcae0,	// (0x000a1a7c) grid_image3_tool_bar_pane

0xcaea,	// (0x000a1a86) bg_popup_trans_pane_g1

0x9fcc,	// (0x0009ef68) bg_popup_trans_pane_g2

0xcaf2,	// (0x000a1a8e) bg_popup_trans_pane_g3

0xcafa,	// (0x000a1a96) bg_popup_trans_pane_g4

0xcb02,	// (0x000a1a9e) bg_popup_trans_pane_g5

0xcb0a,	// (0x000a1aa6) bg_popup_trans_pane_g6

0xcb12,	// (0x000a1aae) bg_popup_trans_pane_g7

0xcb1a,	// (0x000a1ab6) bg_popup_trans_pane_g8

0x9fac,	// (0x0009ef48) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x000a48cf) bg_popup_trans_pane_g

0xcb22,	// (0x000a1abe) cell_image3_tool_bar_pane_ParamLimits

0xcb22,	// (0x000a1abe) cell_image3_tool_bar_pane

0xc002,	// (0x000a0f9e) cell_image3_tool_bar_pane_g1

0xe792,	// (0x000a372e) bg_popup_trans_pane_cp1

0xcb36,	// (0x000a1ad2) popup_image3_note_pane_t1

0xcb44,	// (0x000a1ae0) popup_image3_note_pane_t2

0xcb52,	// (0x000a1aee) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000a48e2) popup_image3_note_pane_t

0xcb60,	// (0x000a1afc) popup_image3_note_pane_t3_copy1

0x6881,	// (0x0009b81d) bg_myfav_hc_instruction_pane_ParamLimits

0x6881,	// (0x0009b81d) bg_myfav_hc_instruction_pane

0x6899,	// (0x0009b835) cell_myfav_contact_pane_ParamLimits

0x6899,	// (0x0009b835) cell_myfav_contact_pane

0x68b3,	// (0x0009b84f) cell_myfav_contact_pane_cp1_ParamLimits

0x68b3,	// (0x0009b84f) cell_myfav_contact_pane_cp1

0x68cb,	// (0x0009b867) cell_myfav_contact_pane_cp2_ParamLimits

0x68cb,	// (0x0009b867) cell_myfav_contact_pane_cp2

0x68e3,	// (0x0009b87f) cell_myfav_contact_pane_cp3_ParamLimits

0x68e3,	// (0x0009b87f) cell_myfav_contact_pane_cp3

0x68fa,	// (0x0009b896) cell_myfav_contact_pane_cp4_ParamLimits

0x68fa,	// (0x0009b896) cell_myfav_contact_pane_cp4

0x6910,	// (0x0009b8ac) cell_myfav_contact_pane_cp5_ParamLimits

0x6910,	// (0x0009b8ac) cell_myfav_contact_pane_cp5

0x6924,	// (0x0009b8c0) cell_myfav_contact_pane_cp6_ParamLimits

0x6924,	// (0x0009b8c0) cell_myfav_contact_pane_cp6

0x6938,	// (0x0009b8d4) cell_myfav_contact_pane_cp7_ParamLimits

0x6938,	// (0x0009b8d4) cell_myfav_contact_pane_cp7

0xcb6e,	// (0x000a1b0a) listscroll_gen_pane_cp05

0x6950,	// (0x0009b8ec) main_myfav_hc_pane_g1_ParamLimits

0x6950,	// (0x0009b8ec) main_myfav_hc_pane_g1

0x6966,	// (0x0009b902) main_myfav_hc_pane_g2_ParamLimits

0x6966,	// (0x0009b902) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x000a48e9) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x000a48e9) main_myfav_hc_pane_g

0x6994,	// (0x0009b930) main_myfav_hc_pane_t1_ParamLimits

0x6994,	// (0x0009b930) main_myfav_hc_pane_t1

0xcb77,	// (0x000a1b13) main_myfav_hc_pane_t2_ParamLimits

0xcb77,	// (0x000a1b13) main_myfav_hc_pane_t2

0xcb89,	// (0x000a1b25) main_myfav_hc_pane_t3_ParamLimits

0xcb89,	// (0x000a1b25) main_myfav_hc_pane_t3

0x69ab,	// (0x0009b947) main_myfav_hc_pane_t4_ParamLimits

0x69ab,	// (0x0009b947) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000a48f0) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000a48f0) main_myfav_hc_pane_t

0xc002,	// (0x000a0f9e) bg_myfav_hc_instruction_pane_g1

0xcb9b,	// (0x000a1b37) cell_myfav_contact_pane_g1_ParamLimits

0xcb9b,	// (0x000a1b37) cell_myfav_contact_pane_g1

0xcb9b,	// (0x000a1b37) cell_myfav_contact_pane_g2_ParamLimits

0xcb9b,	// (0x000a1b37) cell_myfav_contact_pane_g2

0xcba7,	// (0x000a1b43) cell_myfav_contact_pane_g3_ParamLimits

0xcba7,	// (0x000a1b43) cell_myfav_contact_pane_g3

0xc322,	// (0x000a12be) cell_myfav_contact_pane_g4_ParamLimits

0xc322,	// (0x000a12be) cell_myfav_contact_pane_g4

0xcbb4,	// (0x000a1b50) cell_myfav_contact_pane_g5_ParamLimits

0xcbb4,	// (0x000a1b50) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000a48fb) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000a48fb) cell_myfav_contact_pane_g

0x697c,	// (0x0009b918) main_myfav_hc_pane_g3_ParamLimits

0x697c,	// (0x0009b918) main_myfav_hc_pane_g3

0x10ab,	// (0x00096047) popup_adpt_find_window

0x69d5,	// (0x0009b971) afind_page_pane_ParamLimits

0x69d5,	// (0x0009b971) afind_page_pane

0x69e2,	// (0x0009b97e) aid_size_cell_afind_ParamLimits

0x69e2,	// (0x0009b97e) aid_size_cell_afind

0x69fc,	// (0x0009b998) bg_popup_sub_pane_cp09_ParamLimits

0x69fc,	// (0x0009b998) bg_popup_sub_pane_cp09

0x6a09,	// (0x0009b9a5) find_pane_cp01_ParamLimits

0x6a09,	// (0x0009b9a5) find_pane_cp01

0xcbc0,	// (0x000a1b5c) grid_afind_control_pane_ParamLimits

0xcbc0,	// (0x000a1b5c) grid_afind_control_pane

0x6a16,	// (0x0009b9b2) grid_afind_pane_ParamLimits

0x6a16,	// (0x0009b9b2) grid_afind_pane

0x6a32,	// (0x0009b9ce) cell_afind_pane_ParamLimits

0x6a32,	// (0x0009b9ce) cell_afind_pane

0xc002,	// (0x000a0f9e) afind_page_pane_g1

0x6a7a,	// (0x0009ba16) afind_page_pane_g2

0x6a83,	// (0x0009ba1f) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000a4906) afind_page_pane_g

0x6a8c,	// (0x0009ba28) afind_page_pane_t1

0xcbd4,	// (0x000a1b70) cell_afind_grid_control_pane_ParamLimits

0xcbd4,	// (0x000a1b70) cell_afind_grid_control_pane

0xc97d,	// (0x000a1919) bg_button_pane_cp69_ParamLimits

0xc97d,	// (0x000a1919) bg_button_pane_cp69

0x6aac,	// (0x0009ba48) cell_afind_pane_g1_ParamLimits

0x6aac,	// (0x0009ba48) cell_afind_pane_g1

0x6ab9,	// (0x0009ba55) cell_afind_pane_t1_ParamLimits

0x6ab9,	// (0x0009ba55) cell_afind_pane_t1

0x9dc5,	// (0x0009ed61) bg_button_pane_cp72

0xcbe3,	// (0x000a1b7f) cell_afind_grid_control_pane_g1

0x4070,	// (0x0009900c) aid_image_placing_area_ParamLimits

0x4070,	// (0x0009900c) aid_image_placing_area

0xc64b,	// (0x000a15e7) field_vitu_entry_pane_g1_ParamLimits

0xc64b,	// (0x000a15e7) field_vitu_entry_pane_g1

0xc657,	// (0x000a15f3) field_vitu_entry_pane_g2_ParamLimits

0xc657,	// (0x000a15f3) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x000a47b7) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x000a47b7) field_vitu_entry_pane_g

0x5be0,	// (0x0009ab7c) cell_vitu_itu_pane_g1_ParamLimits

0x5c22,	// (0x0009abbe) cell_vitu_itu_pane_t3_ParamLimits

0x5c22,	// (0x0009abbe) cell_vitu_itu_pane_t3

0xc92d,	// (0x000a18c9) mp4_progress_pane_t1_ParamLimits

0xc946,	// (0x000a18e2) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x000a484c) mp4_progress_pane_t_ParamLimits

0xc95f,	// (0x000a18fb) mup_progress_pane_cp04_ParamLimits

0x69bf,	// (0x0009b95b) main_myfav_hc_pane_t5_ParamLimits

0x69bf,	// (0x0009b95b) main_myfav_hc_pane_t5

0x0e09,	// (0x00095da5) aid_zoom_text_primary

0x10ab,	// (0x00096047) popup_adpt_find_window_ParamLimits

0x44f2,	// (0x0009948e) main_cam_set_pane

0x63fb,	// (0x0009b397) cam4_zoom_pane_ParamLimits

0x63fb,	// (0x0009b397) cam4_zoom_pane

0x6acb,	// (0x0009ba67) main_cam_set_pane_g1_ParamLimits

0x6acb,	// (0x0009ba67) main_cam_set_pane_g1

0x6ad9,	// (0x0009ba75) main_cam_set_pane_g2_ParamLimits

0x6ad9,	// (0x0009ba75) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000a490d) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000a490d) main_cam_set_pane_g

0x6ae5,	// (0x0009ba81) main_cam_set_pane_t1_ParamLimits

0x6ae5,	// (0x0009ba81) main_cam_set_pane_t1

0x6b01,	// (0x0009ba9d) main_cset_listscroll_pane_ParamLimits

0x6b01,	// (0x0009ba9d) main_cset_listscroll_pane

0x6b2c,	// (0x0009bac8) main_cset_slider_pane_ParamLimits

0x6b2c,	// (0x0009bac8) main_cset_slider_pane

0xcbf4,	// (0x000a1b90) main_cset_list_pane_ParamLimits

0xcbf4,	// (0x000a1b90) main_cset_list_pane

0xcc04,	// (0x000a1ba0) scroll_pane_cp028

0x6b4b,	// (0x0009bae7) aid_area_touch_slider

0x6b67,	// (0x0009bb03) cset_slider_pane

0x6b91,	// (0x0009bb2d) main_cset_slider_pane_g1

0x6ba6,	// (0x0009bb42) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000a4912) main_cset_slider_pane_g

0xcc3d,	// (0x000a1bd9) main_cset_slider_pane_t1

0x6c68,	// (0x0009bc04) main_cset_slider_pane_t2

0x6c82,	// (0x0009bc1e) main_cset_slider_pane_t3

0x6c9c,	// (0x0009bc38) main_cset_slider_pane_t4

0x6cb6,	// (0x0009bc52) main_cset_slider_pane_t5

0x6cd4,	// (0x0009bc70) main_cset_slider_pane_t6

0x6ceb,	// (0x0009bc87) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000a4937) main_cset_slider_pane_t

0x6df7,	// (0x0009bd93) cset_list_set_pane_ParamLimits

0x6df7,	// (0x0009bd93) cset_list_set_pane

0x6e0d,	// (0x0009bda9) aid_position_infowindow_above

0x6e15,	// (0x0009bdb1) aid_position_infowindow_below

0xf098,	// (0x000a4034) cset_list_set_pane_g1_ParamLimits

0xf098,	// (0x000a4034) cset_list_set_pane_g1

0xccdd,	// (0x000a1c79) cset_list_set_pane_g3_ParamLimits

0xccdd,	// (0x000a1c79) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x000a4956) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x000a4956) cset_list_set_pane_g

0xccec,	// (0x000a1c88) cset_list_set_pane_t1_ParamLimits

0xccec,	// (0x000a1c88) cset_list_set_pane_t1

0xb97e,	// (0x000a091a) list_highlight_pane_cp021_ParamLimits

0xb97e,	// (0x000a091a) list_highlight_pane_cp021

0xa909,	// (0x0009f8a5) cset_slider_pane_g1

0xa91b,	// (0x0009f8b7) cset_slider_pane_g2

0xa912,	// (0x0009f8ae) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x000a495b) cset_slider_pane_g

0x6e1d,	// (0x0009bdb9) aid_area_touch_cam4_zoom

0x6e25,	// (0x0009bdc1) cam4_zoom_cont_pane

0x6e2d,	// (0x0009bdc9) cam4_zoom_pane_g1

0x6e35,	// (0x0009bdd1) cam4_zoom_pane_g2

0x6e3d,	// (0x0009bdd9) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x000a4962) cam4_zoom_pane_g

0x6e45,	// (0x0009bde1) cam4_zoom_cont_pane_g1

0x6e4e,	// (0x0009bdea) cam4_zoom_cont_pane_g2

0x6e57,	// (0x0009bdf3) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x000a4969) cam4_zoom_cont_pane_g

0x62e8,	// (0x0009b284) call4_image_pane_ParamLimits

0x62e8,	// (0x0009b284) call4_image_pane

0xc989,	// (0x000a1925) call4_windows_conf_pane_ParamLimits

0xc9ca,	// (0x000a1966) popup_call4_audio_in_window_ParamLimits

0xc9ca,	// (0x000a1966) popup_call4_audio_in_window

0xe792,	// (0x000a372e) bg_popup_call2_act_pane_cp02

0xca40,	// (0x000a19dc) call4_list_conf_pane

0xc002,	// (0x000a0f9e) call4_image_pane_g1

0xc002,	// (0x000a0f9e) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x000a4678) call4_image_pane_g

0xcd01,	// (0x000a1c9d) list_single_graphic_popup_conf4_pane_ParamLimits

0xcd01,	// (0x000a1c9d) list_single_graphic_popup_conf4_pane

0xe792,	// (0x000a372e) list_highlight_pane_cp022

0xcd14,	// (0x000a1cb0) list_single_graphic_popup_conf4_pane_g1

0xa4e8,	// (0x0009f484) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x000a4970) list_single_graphic_popup_conf4_pane_g

0xcd1c,	// (0x000a1cb8) list_single_graphic_popup_conf4_pane_t1

0x226d,	// (0x00097209) popup_vtel_slider_window_ParamLimits

0x226d,	// (0x00097209) popup_vtel_slider_window

0xc96b,	// (0x000a1907) dialer2_ne_pane_t2_ParamLimits

0xc96b,	// (0x000a1907) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x000a4851) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x000a4851) dialer2_ne_pane_t

0xb97e,	// (0x000a091a) bg_popup_sub_pane_cp010_ParamLimits

0xb97e,	// (0x000a091a) bg_popup_sub_pane_cp010

0x6e60,	// (0x0009bdfc) popup_vtel_slider_window_g1_ParamLimits

0x6e60,	// (0x0009bdfc) popup_vtel_slider_window_g1

0x6e6c,	// (0x0009be08) popup_vtel_slider_window_g2_ParamLimits

0x6e6c,	// (0x0009be08) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x000a4975) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x000a4975) popup_vtel_slider_window_g

0x6eb4,	// (0x0009be50) vtel_slider_pane_ParamLimits

0x6eb4,	// (0x0009be50) vtel_slider_pane

0x6ec3,	// (0x0009be5f) vtel_slider_pane_g1_ParamLimits

0x6ec3,	// (0x0009be5f) vtel_slider_pane_g1

0x6ed0,	// (0x0009be6c) vtel_slider_pane_g2_ParamLimits

0x6ed0,	// (0x0009be6c) vtel_slider_pane_g2

0x6edd,	// (0x0009be79) vtel_slider_pane_g3_ParamLimits

0x6edd,	// (0x0009be79) vtel_slider_pane_g3

0x6ec3,	// (0x0009be5f) vtel_slider_pane_g4_ParamLimits

0x6ec3,	// (0x0009be5f) vtel_slider_pane_g4

0x6eea,	// (0x0009be86) vtel_slider_pane_g5_ParamLimits

0x6eea,	// (0x0009be86) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x000a497e) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x000a497e) vtel_slider_pane_g

0x44f2,	// (0x0009948e) main_gallery2_pane

0x665d,	// (0x0009b5f9) aid_size_row_itut2_dropdow_list_ParamLimits

0x665d,	// (0x0009b5f9) aid_size_row_itut2_dropdow_list

0x66cb,	// (0x0009b667) grid_vitu2_function_top_pane_ParamLimits

0x66cb,	// (0x0009b667) grid_vitu2_function_top_pane

0x6725,	// (0x0009b6c1) popup_vitu2_dropdown_list_window_ParamLimits

0x6725,	// (0x0009b6c1) popup_vitu2_dropdown_list_window

0x6745,	// (0x0009b6e1) popup_vitu2_match_list_window

0x6f05,	// (0x0009bea1) cell_vitu2_function_top_pane_ParamLimits

0x6f05,	// (0x0009bea1) cell_vitu2_function_top_pane

0x6f1f,	// (0x0009bebb) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6f1f,	// (0x0009bebb) cell_vitu2_function_top_pane_cp01

0x6f3b,	// (0x0009bed7) cell_vitu2_function_top_wide_pane_ParamLimits

0x6f3b,	// (0x0009bed7) cell_vitu2_function_top_wide_pane

0x44f2,	// (0x0009948e) bg_button_pane_cp012

0x6f57,	// (0x0009bef3) cell_vitu2_function_top_pane_g1

0x6f6b,	// (0x0009bf07) bg_button_pane_cp013_ParamLimits

0x6f6b,	// (0x0009bf07) bg_button_pane_cp013

0x6f87,	// (0x0009bf23) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6f87,	// (0x0009bf23) cell_vitu2_function_top_wide_pane_g1

0x11a2,	// (0x0009613e) bg_popup_sub_pane_cp20

0x6f9f,	// (0x0009bf3b) list_vitu2_match_list_pane

0xcaea,	// (0x000a1a86) bg_popup_sub_pane_cp20_g1

0xcaf2,	// (0x000a1a8e) bg_popup_sub_pane_cp20_g2

0x9fcc,	// (0x0009ef68) bg_popup_sub_pane_cp20_g3

0xcafa,	// (0x000a1a96) bg_popup_sub_pane_cp20_g4

0x9fac,	// (0x0009ef48) bg_popup_sub_pane_cp20_g5

0xcd32,	// (0x000a1cce) bg_popup_sub_pane_cp20_g6

0xcb0a,	// (0x000a1aa6) bg_popup_sub_pane_cp20_g7

0xcb12,	// (0x000a1aae) bg_popup_sub_pane_cp20_g8

0xcb1a,	// (0x000a1ab6) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x000a4989) bg_popup_sub_pane_cp20_g

0x6fb7,	// (0x0009bf53) list_vitu2_match_list_item_pane_ParamLimits

0x6fb7,	// (0x0009bf53) list_vitu2_match_list_item_pane

0x6fc9,	// (0x0009bf65) list_vitu2_match_list_item_pane_t1

0x11bc,	// (0x00096158) bg_popup_sub_pane_cp21

0x701b,	// (0x0009bfb7) grid_vitu2_dropdown_list_pane

0x7023,	// (0x0009bfbf) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7023,	// (0x0009bfbf) cell_vitu2_dropdown_list_char_pane

0x7044,	// (0x0009bfe0) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7044,	// (0x0009bfe0) cell_vitu2_dropdown_list_ctrl_pane

0xcd3a,	// (0x000a1cd6) cell_vitu2_dropdown_list_char_pane_g1

0xcd43,	// (0x000a1cdf) cell_vitu2_dropdown_list_char_pane_g2

0xcd4c,	// (0x000a1ce8) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x000a49a6) cell_vitu2_dropdown_list_char_pane_g

0x7070,	// (0x0009c00c) cell_vitu2_dropdown_list_char_pane_t1

0x707e,	// (0x0009c01a) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x707e,	// (0x0009c01a) cell_vitu2_dropdown_list_ctrl_pane_g1

0x708e,	// (0x0009c02a) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x708e,	// (0x0009c02a) cell_vitu2_dropdown_list_ctrl_pane_g2

0x709f,	// (0x0009c03b) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x709f,	// (0x0009c03b) cell_vitu2_dropdown_list_ctrl_pane_g3

0x70af,	// (0x0009c04b) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x70af,	// (0x0009c04b) cell_vitu2_dropdown_list_ctrl_pane_g4

0x648f,	// (0x0009b42b) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x648f,	// (0x0009b42b) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x000a49ad) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x000a49ad) cell_vitu2_dropdown_list_ctrl_pane_g

0x70cb,	// (0x0009c067) aid_size_cell_gallery2_ParamLimits

0x70cb,	// (0x0009c067) aid_size_cell_gallery2

0x70e5,	// (0x0009c081) grid_gallery2_pane_ParamLimits

0x70e5,	// (0x0009c081) grid_gallery2_pane

0x5a69,	// (0x0009aa05) scroll_pane_cp029_ParamLimits

0x5a69,	// (0x0009aa05) scroll_pane_cp029

0x70fc,	// (0x0009c098) cell_gallery2_pane_ParamLimits

0x70fc,	// (0x0009c098) cell_gallery2_pane

0xcd55,	// (0x000a1cf1) cell_gallery2_pane_g2

0xe174,	// (0x000a3110) cell_gallery2_pane_g3

0xcd5d,	// (0x000a1cf9) cell_gallery2_pane_g4

0xcd65,	// (0x000a1d01) cell_gallery2_pane_g5

0x9d73,	// (0x0009ed0f) grid_highlight_pane_cp10

0x6745,	// (0x0009b6e1) popup_vitu2_match_list_window_ParamLimits

0x6759,	// (0x0009b6f5) popup_vitu2_query_window_ParamLimits

0x6759,	// (0x0009b6f5) popup_vitu2_query_window

0x11bc,	// (0x00096158) bg_vitu2_candi_button_pane

0xcd3a,	// (0x000a1cd6) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcd43,	// (0x000a1cdf) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcd4c,	// (0x000a1ce8) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7150,	// (0x0009c0ec) bg_button_pane_cp015

0x7162,	// (0x0009c0fe) bg_button_pane_cp016

0x7175,	// (0x0009c111) bg_button_pane_cp017

0xbbe5,	// (0x000a0b81) bg_popup_sub_pane_cp22

0xcd88,	// (0x000a1d24) popup_vitu2_query_window_g1

0x71ba,	// (0x0009c156) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x000a49b8) popup_vitu2_query_window_g

0x71d7,	// (0x0009c173) popup_vitu2_query_window_t1_ParamLimits

0x71d7,	// (0x0009c173) popup_vitu2_query_window_t1

0x720a,	// (0x0009c1a6) popup_vitu2_query_window_t2_ParamLimits

0x720a,	// (0x0009c1a6) popup_vitu2_query_window_t2

0x721c,	// (0x0009c1b8) popup_vitu2_query_window_t3_ParamLimits

0x721c,	// (0x0009c1b8) popup_vitu2_query_window_t3

0x7244,	// (0x0009c1e0) popup_vitu2_query_window_t4_ParamLimits

0x7244,	// (0x0009c1e0) popup_vitu2_query_window_t4

0x7265,	// (0x0009c201) popup_vitu2_query_window_t5_ParamLimits

0x7265,	// (0x0009c201) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x000a49bf) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x000a49bf) popup_vitu2_query_window_t

0xcbec,	// (0x000a1b88) main_cset_text_pane

0x6b4b,	// (0x0009bae7) aid_area_touch_slider_ParamLimits

0x6b67,	// (0x0009bb03) cset_slider_pane_ParamLimits

0x6b91,	// (0x0009bb2d) main_cset_slider_pane_g1_ParamLimits

0x6ba6,	// (0x0009bb42) main_cset_slider_pane_g2_ParamLimits

0xcc0d,	// (0x000a1ba9) main_cset_slider_pane_g3_ParamLimits

0xcc0d,	// (0x000a1ba9) main_cset_slider_pane_g3

0x6bbb,	// (0x0009bb57) main_cset_slider_pane_g4_ParamLimits

0x6bbb,	// (0x0009bb57) main_cset_slider_pane_g4

0x6bca,	// (0x0009bb66) main_cset_slider_pane_g5_ParamLimits

0x6bca,	// (0x0009bb66) main_cset_slider_pane_g5

0x6bd8,	// (0x0009bb74) main_cset_slider_pane_g6_ParamLimits

0x6bd8,	// (0x0009bb74) main_cset_slider_pane_g6

0xf976,	// (0x000a4912) main_cset_slider_pane_g_ParamLimits

0xcc3d,	// (0x000a1bd9) main_cset_slider_pane_t1_ParamLimits

0x6c68,	// (0x0009bc04) main_cset_slider_pane_t2_ParamLimits

0x6c82,	// (0x0009bc1e) main_cset_slider_pane_t3_ParamLimits

0x6c9c,	// (0x0009bc38) main_cset_slider_pane_t4_ParamLimits

0x6cb6,	// (0x0009bc52) main_cset_slider_pane_t5_ParamLimits

0x6cd4,	// (0x0009bc70) main_cset_slider_pane_t6_ParamLimits

0x6ceb,	// (0x0009bc87) main_cset_slider_pane_t7_ParamLimits

0x6d19,	// (0x0009bcb5) main_cset_slider_pane_t8_ParamLimits

0x6d19,	// (0x0009bcb5) main_cset_slider_pane_t8

0x6d41,	// (0x0009bcdd) main_cset_slider_pane_t9_ParamLimits

0x6d41,	// (0x0009bcdd) main_cset_slider_pane_t9

0x6d69,	// (0x0009bd05) main_cset_slider_pane_t10_ParamLimits

0x6d69,	// (0x0009bd05) main_cset_slider_pane_t10

0x6d91,	// (0x0009bd2d) main_cset_slider_pane_t11_ParamLimits

0x6d91,	// (0x0009bd2d) main_cset_slider_pane_t11

0x6dbb,	// (0x0009bd57) main_cset_slider_pane_t12_ParamLimits

0x6dbb,	// (0x0009bd57) main_cset_slider_pane_t12

0x6dd8,	// (0x0009bd74) main_cset_slider_pane_t13_ParamLimits

0x6dd8,	// (0x0009bd74) main_cset_slider_pane_t13

0xf99b,	// (0x000a4937) main_cset_slider_pane_t_ParamLimits

0xe792,	// (0x000a372e) bg_popup_sub_pane_cp011

0xcd94,	// (0x000a1d30) main_cset_text_pane_g1

0xcd9c,	// (0x000a1d38) main_cset_text_pane_t1

0xcdaa,	// (0x000a1d46) main_cset_text_pane_t2

0xcdb8,	// (0x000a1d54) main_cset_text_pane_t3

0xcdc6,	// (0x000a1d62) main_cset_text_pane_t4

0xcdd4,	// (0x000a1d70) main_cset_text_pane_t5

0xcde2,	// (0x000a1d7e) main_cset_text_pane_t6

0xcdf0,	// (0x000a1d8c) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x000a49ce) main_cset_text_pane_t

0x11bc,	// (0x00096158) main_cam4_burst_pane

0x11bc,	// (0x00096158) main_cam5_pane

0x6a9a,	// (0x0009ba36) bg_button_pane_cp019

0x6aa3,	// (0x0009ba3f) bg_button_pane_cp020

0xcc19,	// (0x000a1bb5) main_cset_slider_pane_g7_ParamLimits

0xcc19,	// (0x000a1bb5) main_cset_slider_pane_g7

0xcc25,	// (0x000a1bc1) main_cset_slider_pane_g8_ParamLimits

0xcc25,	// (0x000a1bc1) main_cset_slider_pane_g8

0x6bec,	// (0x0009bb88) main_cset_slider_pane_g9_ParamLimits

0x6bec,	// (0x0009bb88) main_cset_slider_pane_g9

0x6bf8,	// (0x0009bb94) main_cset_slider_pane_g10_ParamLimits

0x6bf8,	// (0x0009bb94) main_cset_slider_pane_g10

0x6c04,	// (0x0009bba0) main_cset_slider_pane_g11_ParamLimits

0x6c04,	// (0x0009bba0) main_cset_slider_pane_g11

0x6c10,	// (0x0009bbac) main_cset_slider_pane_g12_ParamLimits

0x6c10,	// (0x0009bbac) main_cset_slider_pane_g12

0x6c1c,	// (0x0009bbb8) main_cset_slider_pane_g13_ParamLimits

0x6c1c,	// (0x0009bbb8) main_cset_slider_pane_g13

0x6c28,	// (0x0009bbc4) main_cset_slider_pane_g14_ParamLimits

0x6c28,	// (0x0009bbc4) main_cset_slider_pane_g14

0x6c34,	// (0x0009bbd0) main_cset_slider_pane_g15_ParamLimits

0x6c34,	// (0x0009bbd0) main_cset_slider_pane_g15

0xcc6b,	// (0x000a1c07) main_cset_slider_pane_t14_ParamLimits

0xcc6b,	// (0x000a1c07) main_cset_slider_pane_t14

0xcca4,	// (0x000a1c40) main_cset_slider_pane_t15_ParamLimits

0xcca4,	// (0x000a1c40) main_cset_slider_pane_t15

0x72dc,	// (0x0009c278) aid_cam4_burst_size_cell_ParamLimits

0x72dc,	// (0x0009c278) aid_cam4_burst_size_cell

0x72f8,	// (0x0009c294) grid_cam4_burst_pane_ParamLimits

0x72f8,	// (0x0009c294) grid_cam4_burst_pane

0x7328,	// (0x0009c2c4) linegrid_cam4_burst_pane_ParamLimits

0x7328,	// (0x0009c2c4) linegrid_cam4_burst_pane

0x7348,	// (0x0009c2e4) scroll_pane_cp30_ParamLimits

0x7348,	// (0x0009c2e4) scroll_pane_cp30

0x7354,	// (0x0009c2f0) cell_cam4_burst_pane_ParamLimits

0x7354,	// (0x0009c2f0) cell_cam4_burst_pane

0xcdfe,	// (0x000a1d9a) linegrid_cam4_burst_pane_g1_ParamLimits

0xcdfe,	// (0x000a1d9a) linegrid_cam4_burst_pane_g1

0x7390,	// (0x0009c32c) linegrid_cam4_burst_pane_g2_ParamLimits

0x7390,	// (0x0009c32c) linegrid_cam4_burst_pane_g2

0xce0b,	// (0x000a1da7) linegrid_cam4_burst_pane_g3_ParamLimits

0xce0b,	// (0x000a1da7) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x000a49dd) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x000a49dd) linegrid_cam4_burst_pane_g

0x73a1,	// (0x0009c33d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x73a1,	// (0x0009c33d) linegrid_cam4_burst_pane_g3_copy1

0xce18,	// (0x000a1db4) linegrid_cam4_burst_pane_g4_ParamLimits

0xce18,	// (0x000a1db4) linegrid_cam4_burst_pane_g4

0x73bb,	// (0x0009c357) linegrid_cam4_burst_pane_g5_ParamLimits

0x73bb,	// (0x0009c357) linegrid_cam4_burst_pane_g5

0x73cc,	// (0x0009c368) linegrid_cam4_burst_pane_g6_ParamLimits

0x73cc,	// (0x0009c368) linegrid_cam4_burst_pane_g6

0xce25,	// (0x000a1dc1) linegrid_cam4_burst_pane_g7_ParamLimits

0xce25,	// (0x000a1dc1) linegrid_cam4_burst_pane_g7

0x73dd,	// (0x0009c379) cell_cam4_burst_pane_g1

0xce3e,	// (0x000a1dda) main_cam5_pane_t1_ParamLimits

0xce3e,	// (0x000a1dda) main_cam5_pane_t1

0xce50,	// (0x000a1dec) main_cam5_pane_t2_ParamLimits

0xce50,	// (0x000a1dec) main_cam5_pane_t2

0xce62,	// (0x000a1dfe) main_cam5_pane_t3_ParamLimits

0xce62,	// (0x000a1dfe) main_cam5_pane_t3

0xce74,	// (0x000a1e10) main_cam5_pane_t4_ParamLimits

0xce74,	// (0x000a1e10) main_cam5_pane_t4

0xce8c,	// (0x000a1e28) main_cam5_pane_t5_ParamLimits

0xce8c,	// (0x000a1e28) main_cam5_pane_t5

0xcea0,	// (0x000a1e3c) main_cam5_pane_t6_ParamLimits

0xcea0,	// (0x000a1e3c) main_cam5_pane_t6

0xceb4,	// (0x000a1e50) main_cam5_pane_t7_ParamLimits

0xceb4,	// (0x000a1e50) main_cam5_pane_t7

0xcec6,	// (0x000a1e62) main_cam5_pane_t8_ParamLimits

0xcec6,	// (0x000a1e62) main_cam5_pane_t8

0xcee2,	// (0x000a1e7e) main_cam5_pane_t9_ParamLimits

0xcee2,	// (0x000a1e7e) main_cam5_pane_t9

0xcef4,	// (0x000a1e90) main_cam5_pane_t10_ParamLimits

0xcef4,	// (0x000a1e90) main_cam5_pane_t10

0xcf12,	// (0x000a1eae) main_cam5_pane_t11_ParamLimits

0xcf12,	// (0x000a1eae) main_cam5_pane_t11

0xcf24,	// (0x000a1ec0) main_cam5_pane_t12_ParamLimits

0xcf24,	// (0x000a1ec0) main_cam5_pane_t12

0xcf39,	// (0x000a1ed5) main_cam5_pane_t13_ParamLimits

0xcf39,	// (0x000a1ed5) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x000a49e9) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x000a49e9) main_cam5_pane_t

0x1161,	// (0x000960fd) popup_scut_keymap_window_ParamLimits

0x1161,	// (0x000960fd) popup_scut_keymap_window

0x73f0,	// (0x0009c38c) aid_size_cell_brow_shortcut

0x9d73,	// (0x0009ed0f) bg_popup_window_pane_cp010

0x73fc,	// (0x0009c398) grid_scut_pane

0x7408,	// (0x0009c3a4) cell_scut_pane_ParamLimits

0x7408,	// (0x0009c3a4) cell_scut_pane

0x741f,	// (0x0009c3bb) cell_scut_pane_g1

0xcf56,	// (0x000a1ef2) cell_scut_pane_t1

0xcf65,	// (0x000a1f01) cell_scut_pane_t2

0x7428,	// (0x0009c3c4) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x000a4a04) cell_scut_pane_t

0x524a,	// (0x0009a1e6) main_mup3_pane_g8_ParamLimits

0x524a,	// (0x0009a1e6) main_mup3_pane_g8

0x666b,	// (0x0009b607) area_vitu2_query_pane_ParamLimits

0x666b,	// (0x0009b607) area_vitu2_query_pane

0x7188,	// (0x0009c124) input_focus_pane_cp08

0xcf74,	// (0x000a1f10) area_vitu2_query_pane_g1

0x7436,	// (0x0009c3d2) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x000a4a0b) area_vitu2_query_pane_g

0x7447,	// (0x0009c3e3) area_vitu2_query_pane_t1_ParamLimits

0x7447,	// (0x0009c3e3) area_vitu2_query_pane_t1

0x745b,	// (0x0009c3f7) area_vitu2_query_pane_t2_ParamLimits

0x745b,	// (0x0009c3f7) area_vitu2_query_pane_t2

0x746f,	// (0x0009c40b) area_vitu2_query_pane_t3_ParamLimits

0x746f,	// (0x0009c40b) area_vitu2_query_pane_t3

0xcf80,	// (0x000a1f1c) area_vitu2_query_pane_t4_ParamLimits

0xcf80,	// (0x000a1f1c) area_vitu2_query_pane_t4

0xcfa8,	// (0x000a1f44) area_vitu2_query_pane_t5_ParamLimits

0xcfa8,	// (0x000a1f44) area_vitu2_query_pane_t5

0xcfd0,	// (0x000a1f6c) area_vitu2_query_pane_t6_ParamLimits

0xcfd0,	// (0x000a1f6c) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x000a4a10) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x000a4a10) area_vitu2_query_pane_t

0x7497,	// (0x0009c433) bg_button_pane_cp018

0x74a5,	// (0x0009c441) bg_button_pane_cp021

0x74b1,	// (0x0009c44d) bg_button_pane_cp022

0x74c2,	// (0x0009c45e) input_focus_pane_cp09

0xa624,	// (0x0009f5c0) aid_size_touch_mv_arrow_left

0xa64d,	// (0x0009f5e9) aid_size_touch_mv_arrow_right

0x6c4c,	// (0x0009bbe8) main_cset_slider_pane_g16_ParamLimits

0x6c4c,	// (0x0009bbe8) main_cset_slider_pane_g16

0x6c5a,	// (0x0009bbf6) main_cset_slider_pane_g17_ParamLimits

0x6c5a,	// (0x0009bbf6) main_cset_slider_pane_g17

0x73dd,	// (0x0009c379) cell_cam4_burst_pane_g1_ParamLimits

0xe792,	// (0x000a372e) compa_mode_pane

0x6e78,	// (0x0009be14) popup_vtel_slider_window_g3_ParamLimits

0x6e78,	// (0x0009be14) popup_vtel_slider_window_g3

0x6e8c,	// (0x0009be28) popup_vtel_slider_window_g4_ParamLimits

0x6e8c,	// (0x0009be28) popup_vtel_slider_window_g4

0x6ea0,	// (0x0009be3c) popup_vtel_slider_window_t1_ParamLimits

0x6ea0,	// (0x0009be3c) popup_vtel_slider_window_t1

0x11bc,	// (0x00096158) main_cl_pane

0x4590,	// (0x0009952c) popup_imed_adjust2_window_ParamLimits

0xbbe5,	// (0x000a0b81) bg_tb_trans_pane_cp05_ParamLimits

0xc580,	// (0x000a151c) popup_imed_adjust2_window_g1_ParamLimits

0xc58f,	// (0x000a152b) popup_imed_adjust2_window_g2_ParamLimits

0xc58f,	// (0x000a152b) popup_imed_adjust2_window_g2

0xc59b,	// (0x000a1537) popup_imed_adjust2_window_g3_ParamLimits

0xc59b,	// (0x000a1537) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x000a477b) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x000a477b) popup_imed_adjust2_window_g

0xc5a7,	// (0x000a1543) popup_imed_adjust2_window_t1_ParamLimits

0xc5bf,	// (0x000a155b) slider_imed_adjust_pane_ParamLimits

0xc5d3,	// (0x000a156f) slider_imed_adjust_pane_g1_ParamLimits

0xc5e3,	// (0x000a157f) slider_imed_adjust_pane_g2_ParamLimits

0xc5f3,	// (0x000a158f) slider_imed_adjust_pane_g3_ParamLimits

0xc604,	// (0x000a15a0) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x000a4782) slider_imed_adjust_pane_g_ParamLimits

0x63a4,	// (0x0009b340) aid_touch_area_cam4_ParamLimits

0x63a4,	// (0x0009b340) aid_touch_area_cam4

0x63b4,	// (0x0009b350) battery_pane_cp01

0x643b,	// (0x0009b3d7) main_camera4_pane_g6_ParamLimits

0x643b,	// (0x0009b3d7) main_camera4_pane_g6

0x6459,	// (0x0009b3f5) main_camera4_pane_t2_ParamLimits

0x6459,	// (0x0009b3f5) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x000a4885) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x000a4885) main_camera4_pane_t

0x64ee,	// (0x0009b48a) aid_touch_area_vid4_ParamLimits

0x64ee,	// (0x0009b48a) aid_touch_area_vid4

0x652e,	// (0x0009b4ca) main_video4_pane_g5_ParamLimits

0x652e,	// (0x0009b4ca) main_video4_pane_g5

0x6552,	// (0x0009b4ee) vid4_progress_pane_ParamLimits

0x6552,	// (0x0009b4ee) vid4_progress_pane

0xcc31,	// (0x000a1bcd) main_cset_slider_pane_g18_ParamLimits

0xcc31,	// (0x000a1bcd) main_cset_slider_pane_g18

0xce32,	// (0x000a1dce) cell_cam4_burst_pane_g2_ParamLimits

0xce32,	// (0x000a1dce) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x000a49e4) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x000a49e4) cell_cam4_burst_pane_g

0x74d3,	// (0x0009c46f) bg_cl_pane_ParamLimits

0x74d3,	// (0x0009c46f) bg_cl_pane

0x74df,	// (0x0009c47b) cl_header_pane_ParamLimits

0x74df,	// (0x0009c47b) cl_header_pane

0x74eb,	// (0x0009c487) cl_listscroll_pane_ParamLimits

0x74eb,	// (0x0009c487) cl_listscroll_pane

0xd01c,	// (0x000a1fb8) bg_cl_pane_g1

0xd024,	// (0x000a1fc0) bg_cl_pane_g2

0xd02c,	// (0x000a1fc8) bg_cl_pane_g3

0xd034,	// (0x000a1fd0) bg_cl_pane_g4

0xd03c,	// (0x000a1fd8) bg_cl_pane_g5

0xd044,	// (0x000a1fe0) bg_cl_pane_g6

0xd04c,	// (0x000a1fe8) bg_cl_pane_g7

0xd054,	// (0x000a1ff0) bg_cl_pane_g8

0xd05c,	// (0x000a1ff8) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x000a4a1f) bg_cl_pane_g

0x74f7,	// (0x0009c493) aid_height_cl_leading_ParamLimits

0x74f7,	// (0x0009c493) aid_height_cl_leading

0x7503,	// (0x0009c49f) aid_height_cl_text_ParamLimits

0x7503,	// (0x0009c49f) aid_height_cl_text

0xe806,	// (0x000a37a2) bg_cl_header_pane_ParamLimits

0xe806,	// (0x000a37a2) bg_cl_header_pane

0x751b,	// (0x0009c4b7) cl_header_pane_g1_ParamLimits

0x751b,	// (0x0009c4b7) cl_header_pane_g1

0x7528,	// (0x0009c4c4) cl_header_pane_t1_ParamLimits

0x7528,	// (0x0009c4c4) cl_header_pane_t1

0xd064,	// (0x000a2000) cl_list_pane

0xcc04,	// (0x000a1ba0) hc_scroll_pane_cp01

0x9fac,	// (0x0009ef48) bg_cl_header_pane_g1

0xcaea,	// (0x000a1a86) bg_cl_header_pane_g2

0x9fcc,	// (0x0009ef68) bg_cl_header_pane_g3

0xcafa,	// (0x000a1a96) bg_cl_header_pane_g4

0xcaf2,	// (0x000a1a8e) bg_cl_header_pane_g5

0xcd32,	// (0x000a1cce) bg_cl_header_pane_g6

0xcb12,	// (0x000a1aae) bg_cl_header_pane_g7

0xcb1a,	// (0x000a1ab6) bg_cl_header_pane_g8

0xcb0a,	// (0x000a1aa6) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x000a4a32) bg_cl_header_pane_g

0x753a,	// (0x0009c4d6) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x753a,	// (0x0009c4d6) hc_cl_list_double_graphic_heading_pane

0x754b,	// (0x0009c4e7) hc_cl_list_single_graphic_pane_ParamLimits

0x754b,	// (0x0009c4e7) hc_cl_list_single_graphic_pane

0x7564,	// (0x0009c500) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7564,	// (0x0009c500) hc_cl_list_single_graphic_pane_g1

0x7570,	// (0x0009c50c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7570,	// (0x0009c50c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x000a4a45) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x000a4a45) hc_cl_list_single_graphic_pane_g

0x7584,	// (0x0009c520) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7584,	// (0x0009c520) hc_cl_list_single_graphic_pane_t1

0x7564,	// (0x0009c500) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7564,	// (0x0009c500) hc_cl_list_double_graphic_heading_pane_g1

0x7599,	// (0x0009c535) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7599,	// (0x0009c535) hc_cl_list_double_graphic_heading_pane_g2

0x75ad,	// (0x0009c549) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x75ad,	// (0x0009c549) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x000a4a4a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x000a4a4a) hc_cl_list_double_graphic_heading_pane_g

0x75c1,	// (0x0009c55d) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x75c1,	// (0x0009c55d) hc_cl_list_double_graphic_heading_pane_t1

0x75d6,	// (0x0009c572) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x75d6,	// (0x0009c572) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x000a4a51) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x000a4a51) hc_cl_list_double_graphic_heading_pane_t

0x75f3,	// (0x0009c58f) vid4_progress_pane_g1

0x7603,	// (0x0009c59f) vid4_progress_pane_g2

0x7613,	// (0x0009c5af) vid4_progress_pane_g3

0x7625,	// (0x0009c5c1) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x000a4a56) vid4_progress_pane_g

0x763d,	// (0x0009c5d9) vid4_progress_pane_t1

0x7653,	// (0x0009c5ef) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x000a4a61) vid4_progress_pane_t

0x767d,	// (0x0009c619) wait_bar_pane_cp07

0xbde0,	// (0x000a0d7c) blid_firmament_pane_ParamLimits

0xbe23,	// (0x000a0dbf) popup_blid_sat_info2_window_g1

0xbe47,	// (0x000a0de3) popup_blid_sat_info2_window_t3

0xbe55,	// (0x000a0df1) popup_blid_sat_info2_window_t4

0xbe63,	// (0x000a0dff) popup_blid_sat_info2_window_t5

0xbe71,	// (0x000a0e0d) popup_blid_sat_info2_window_t6

0xbe81,	// (0x000a0e1d) popup_blid_sat_info2_window_t7

0xbea4,	// (0x000a0e40) popup_blid_sat_info2_window_t8

0xbeb2,	// (0x000a0e4e) popup_blid_sat_info2_window_t9

0xbec0,	// (0x000a0e5c) popup_blid_sat_info2_window_t10

0xbf82,	// (0x000a0f1e) aid_firma_cardinal_ParamLimits

0xbf96,	// (0x000a0f32) blid_firmament_pane_t1_ParamLimits

0xbfad,	// (0x000a0f49) blid_firmament_pane_t2_ParamLimits

0xbfc4,	// (0x000a0f60) blid_firmament_pane_t3_ParamLimits

0xbfdb,	// (0x000a0f77) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x000a466f) blid_firmament_pane_t_ParamLimits

0xbff2,	// (0x000a0f8e) blid_sat_info_pane_ParamLimits

0x44f2,	// (0x0009948e) main_cam_set_pane_ParamLimits

0x5a02,	// (0x0009a99e) aid_size_cell_colour_35_ParamLimits

0x5a1c,	// (0x0009a9b8) aid_size_cell_colour_112_ParamLimits

0x5a33,	// (0x0009a9cf) aid_size_cell_effect_ParamLimits

0xb97e,	// (0x000a091a) bg_tb_trans_pane_cp02_ParamLimits

0xb98c,	// (0x000a0928) heading_imed_pane_ParamLimits

0x5a4d,	// (0x0009a9e9) listscroll_imed_pane_ParamLimits

0xb1f1,	// (0x000a018d) popup_call2_audio_first_window_g5_ParamLimits

0xb1f1,	// (0x000a018d) popup_call2_audio_first_window_g5

0x6153,	// (0x0009b0ef) aid_size_touch_image3_arrow_left_ParamLimits

0x6153,	// (0x0009b0ef) aid_size_touch_image3_arrow_left

0x6169,	// (0x0009b105) aid_size_touch_image3_arrow_right_ParamLimits

0x6169,	// (0x0009b105) aid_size_touch_image3_arrow_right

0x7668,	// (0x0009c604) vid4_progress_pane_t3

0x5ceb,	// (0x0009ac87) main_hwr_training_symbol_option_pane_ParamLimits

0x5ceb,	// (0x0009ac87) main_hwr_training_symbol_option_pane

0xc86d,	// (0x000a1809) popup_hwr_training_preview_window_ParamLimits

0xc86d,	// (0x000a1809) popup_hwr_training_preview_window

0x5d4c,	// (0x0009ace8) hwr_training_navi_pane_g5_ParamLimits

0x5d4c,	// (0x0009ace8) hwr_training_navi_pane_g5

0xcad8,	// (0x000a1a74) popup_char_count_window

0x11a2,	// (0x0009613e) bg_popup_sub_pane_cp20_ParamLimits

0x6f9f,	// (0x0009bf3b) list_vitu2_match_list_pane_ParamLimits

0x6fab,	// (0x0009bf47) vitu2_page_scroll_pane_ParamLimits

0x6fab,	// (0x0009bf47) vitu2_page_scroll_pane

0xd087,	// (0x000a2023) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd087,	// (0x000a2023) list_single_hwr_training_symbol_option_pane

0xd0ac,	// (0x000a2048) list_single_hwr_training_symbol_option_pane_g1

0xd0b4,	// (0x000a2050) list_single_hwr_training_symbol_option_pane_t1

0xd0c2,	// (0x000a205e) bg_button_pane_cp023

0xd0cb,	// (0x000a2067) bg_button_pane_cp024

0x76bf,	// (0x0009c65b) vitu2_page_scroll_pane_g1

0x76c7,	// (0x0009c663) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x000a4a68) vitu2_page_scroll_pane_g

0x76cf,	// (0x0009c66b) vitu2_page_scroll_pane_t1

0xbd40,	// (0x000a0cdc) popup_char_count_window_g1

0xd0fe,	// (0x000a209a) popup_char_count_window_g2

0xd107,	// (0x000a20a3) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x000a4a6d) popup_char_count_window_g

0xd110,	// (0x000a20ac) popup_char_count_window_t1

0x11bc,	// (0x00096158) main_vded2_pane

0xc56c,	// (0x000a1508) aid_size_cell_imed_line

0xc576,	// (0x000a1512) grid_imed_line_width_pane

0x65c0,	// (0x0009b55c) vid4_indicators_pane_g4

0xd11e,	// (0x000a20ba) cell_imed_line_width_pane_ParamLimits

0xd11e,	// (0x000a20ba) cell_imed_line_width_pane

0xd132,	// (0x000a20ce) cell_imed_line_width_pane_g1

0xd09a,	// (0x000a2036) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x000a4a74) cell_imed_line_width_pane_g

0x76de,	// (0x0009c67a) main_vded2_pane_g1_ParamLimits

0x76de,	// (0x0009c67a) main_vded2_pane_g1

0x76eb,	// (0x0009c687) main_vded2_pane_g2_ParamLimits

0x76eb,	// (0x0009c687) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x000a4a79) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x000a4a79) main_vded2_pane_g

0x76f9,	// (0x0009c695) vded2_slider_pane_ParamLimits

0x76f9,	// (0x0009c695) vded2_slider_pane

0x7706,	// (0x0009c6a2) aid_size_touch_vded2_end

0x7710,	// (0x0009c6ac) aid_size_touch_vded2_playhead

0xd13b,	// (0x000a20d7) aid_size_touch_vded2_start

0xd143,	// (0x000a20df) vded2_slider_bg_pane

0xd14c,	// (0x000a20e8) vded2_slider_pane_g1

0xd155,	// (0x000a20f1) vded2_slider_pane_g2

0x7718,	// (0x0009c6b4) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x000a4a7e) vded2_slider_pane_g

0xd15d,	// (0x000a20f9) vded2_slider_bg_pane_g1

0xd166,	// (0x000a2102) vded2_slider_bg_pane_g2

0xd16f,	// (0x000a210b) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x000a4a85) vded2_slider_bg_pane_g

0x3dda,	// (0x00098d76) aid_postcard_touch_down_pane_ParamLimits

0x3dda,	// (0x00098d76) aid_postcard_touch_down_pane

0x3dea,	// (0x00098d86) aid_postcard_touch_up_pane_ParamLimits

0x3dea,	// (0x00098d86) aid_postcard_touch_up_pane

0x11bc,	// (0x00096158) main_blid2_pane

0x451b,	// (0x000994b7) popup_blid2_search_window

0xe792,	// (0x000a372e) blid2_gps_pane

0xe792,	// (0x000a372e) blid2_navig_pane

0xe792,	// (0x000a372e) blid2_search_pane

0xe792,	// (0x000a372e) blid2_tripm_pane

0x7721,	// (0x0009c6bd) blid2_search_pane_g1_ParamLimits

0x7721,	// (0x0009c6bd) blid2_search_pane_g1

0x7731,	// (0x0009c6cd) blid2_search_pane_t1_ParamLimits

0x7731,	// (0x0009c6cd) blid2_search_pane_t1

0x7743,	// (0x0009c6df) aid_size_cell_blid2_gps_ParamLimits

0x7743,	// (0x0009c6df) aid_size_cell_blid2_gps

0x7753,	// (0x0009c6ef) blid2_gps_pane_g1_ParamLimits

0x7753,	// (0x0009c6ef) blid2_gps_pane_g1

0x775f,	// (0x0009c6fb) grid_blid2_satellite_pane_ParamLimits

0x775f,	// (0x0009c6fb) grid_blid2_satellite_pane

0x776f,	// (0x0009c70b) blid2_navig_pane_g1_ParamLimits

0x776f,	// (0x0009c70b) blid2_navig_pane_g1

0x777b,	// (0x0009c717) blid2_navig_pane_t1_ParamLimits

0x777b,	// (0x0009c717) blid2_navig_pane_t1

0x778d,	// (0x0009c729) blid2_navig_pane_t2_ParamLimits

0x778d,	// (0x0009c729) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x000a4a8c) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x000a4a8c) blid2_navig_pane_t

0x779f,	// (0x0009c73b) blid2_navig_ring_pane_ParamLimits

0x779f,	// (0x0009c73b) blid2_navig_ring_pane

0x77af,	// (0x0009c74b) blid2_speed_pane_ParamLimits

0x77af,	// (0x0009c74b) blid2_speed_pane

0x77bb,	// (0x0009c757) blid2_tripm_pane_g1_ParamLimits

0x77bb,	// (0x0009c757) blid2_tripm_pane_g1

0x77cb,	// (0x0009c767) blid2_tripm_pane_g2_ParamLimits

0x77cb,	// (0x0009c767) blid2_tripm_pane_g2

0x77d7,	// (0x0009c773) blid2_tripm_pane_g3_ParamLimits

0x77d7,	// (0x0009c773) blid2_tripm_pane_g3

0x77e3,	// (0x0009c77f) blid2_tripm_pane_g4_ParamLimits

0x77e3,	// (0x0009c77f) blid2_tripm_pane_g4

0x77ef,	// (0x0009c78b) blid2_tripm_pane_g5_ParamLimits

0x77ef,	// (0x0009c78b) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x000a4a91) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x000a4a91) blid2_tripm_pane_g

0x780b,	// (0x0009c7a7) blid2_tripm_pane_t1_ParamLimits

0x780b,	// (0x0009c7a7) blid2_tripm_pane_t1

0x781f,	// (0x0009c7bb) blid2_tripm_pane_t2_ParamLimits

0x781f,	// (0x0009c7bb) blid2_tripm_pane_t2

0x7831,	// (0x0009c7cd) blid2_tripm_pane_t3_ParamLimits

0x7831,	// (0x0009c7cd) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x000a4a9e) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x000a4a9e) blid2_tripm_pane_t

0x7863,	// (0x0009c7ff) cell_blid2_satellite_pane_ParamLimits

0x7863,	// (0x0009c7ff) cell_blid2_satellite_pane

0x787d,	// (0x0009c819) cell_blid2_satellite_pane_g1

0xd178,	// (0x000a2114) cell_blid2_satellite_pane_t1

0xc002,	// (0x000a0f9e) blid2_speed_pane_g1

0xd186,	// (0x000a2122) blid2_speed_pane_t1

0xd194,	// (0x000a2130) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x000a4aa7) blid2_speed_pane_t

0xc002,	// (0x000a0f9e) blid2_navig_ring_pane_g1

0x7886,	// (0x0009c822) blid2_navig_ring_pane_g2

0x788e,	// (0x0009c82a) blid2_navig_ring_pane_g3

0x7896,	// (0x0009c832) blid2_navig_ring_pane_g4

0x789e,	// (0x0009c83a) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x000a4aac) blid2_navig_ring_pane_g

0xe792,	// (0x000a372e) bg_popup_window_pane_cp011

0xd1a2,	// (0x000a213e) popup_blid2_search_window_g1

0xd1aa,	// (0x000a2146) popup_blid2_search_window_t1

0xd1b8,	// (0x000a2154) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x000a4ab7) popup_blid2_search_window_t

0x9ebb,	// (0x0009ee57) main_browser_pane_g1

0xefe7,	// (0x000a3f83) main_browser_pane_ParamLimits

0x44f2,	// (0x0009948e) bg_button_pane_cp011_ParamLimits

0x686d,	// (0x0009b809) cell_vitu2_function_pane_g1_ParamLimits

0xbbe5,	// (0x000a0b81) bg_popup_sub_pane_cp22_ParamLimits

0x7188,	// (0x0009c124) input_focus_pane_cp08_ParamLimits

0x719f,	// (0x0009c13b) popup_vitu2_query_button_pane_ParamLimits

0x719f,	// (0x0009c13b) popup_vitu2_query_button_pane

0x71b0,	// (0x0009c14c) popup_vitu2_query_input_button_pane

0xcd88,	// (0x000a1d24) popup_vitu2_query_window_g1_ParamLimits

0x71ba,	// (0x0009c156) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x000a49b8) popup_vitu2_query_window_g_ParamLimits

0xe792,	// (0x000a372e) bg_button_pane_cp026

0x78a6,	// (0x0009c842) popup_vitu2_query_input_button_pane_g1

0xe792,	// (0x000a372e) bg_button_pane_cp025

0xd1c6,	// (0x000a2162) popup_vitu2_query_button_pane_t1

0x4f71,	// (0x00099f0d) main_mp3_pane_t6

0x4f81,	// (0x00099f1d) popup_slider_window_cp01

0x649d,	// (0x0009b439) cam4_battery_pane

0x657d,	// (0x0009b519) cam4_battery_pane_cp02

0x75eb,	// (0x0009c587) cam4_battery_pane_cp01

0x75eb,	// (0x0009c587) cam4_battery_pane_cp03

0xd0a2,	// (0x000a203e) cam4_battery_pane_g1

0xc002,	// (0x000a0f9e) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x000a4abc) cam4_battery_pane_g

0xbece,	// (0x000a0e6a) popup_blid_sat_info2_window_t11

0xa624,	// (0x0009f5c0) aid_size_touch_mv_arrow_left_ParamLimits

0xa64d,	// (0x0009f5e9) aid_size_touch_mv_arrow_right_ParamLimits

0xa6ab,	// (0x0009f647) navi_pane_g1_ParamLimits

0xa6b7,	// (0x0009f653) navi_pane_g2_ParamLimits

0xa6e5,	// (0x0009f681) navi_pane_g3_ParamLimits

0xf3e5,	// (0x000a4381) navi_pane_g_ParamLimits

0x377a,	// (0x00098716) navi_pane_mv_t1_ParamLimits

0x5a59,	// (0x0009a9f5) grid_imed_effect_pane_ParamLimits

0x212d,	// (0x000970c9) aid_placing_vt_slider_lsc

0x9e0a,	// (0x0009eda6) aid_placing_vt_slider_prt

0xb97e,	// (0x000a091a) bg_tb_trans_pane_cp01_ParamLimits

0xc185,	// (0x000a1121) popup_image_details_window_g1_ParamLimits

0xc198,	// (0x000a1134) popup_image_details_window_g2_ParamLimits

0xc1ad,	// (0x000a1149) popup_image_details_window_g3_ParamLimits

0xc1ad,	// (0x000a1149) popup_image_details_window_g3

0xf718,	// (0x000a46b4) popup_image_details_window_g_ParamLimits

0xc1c1,	// (0x000a115d) popup_image_details_window_t1_ParamLimits

0xc1d3,	// (0x000a116f) popup_image_details_window_t2_ParamLimits

0xc1ec,	// (0x000a1188) popup_image_details_window_t3_ParamLimits

0xc200,	// (0x000a119c) popup_image_details_window_t4_ParamLimits

0xc21b,	// (0x000a11b7) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x000a46bb) popup_image_details_window_t_ParamLimits

0x750f,	// (0x0009c4ab) cl_header_name_pane_ParamLimits

0x750f,	// (0x0009c4ab) cl_header_name_pane

0x78ae,	// (0x0009c84a) cl_header_name_pane_t1_ParamLimits

0x78ae,	// (0x0009c84a) cl_header_name_pane_t1

0x78c5,	// (0x0009c861) cl_header_name_pane_t2_ParamLimits

0x78c5,	// (0x0009c861) cl_header_name_pane_t2

0x78ef,	// (0x0009c88b) cl_header_name_pane_t3_ParamLimits

0x78ef,	// (0x0009c88b) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x000a4ac1) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x000a4ac1) cl_header_name_pane_t

0xa774,	// (0x0009f710) navi_pane_mv_g2_ParamLimits

0xca95,	// (0x000a1a31) field_vitu2_entry_pane_g1_ParamLimits

0xcaa1,	// (0x000a1a3d) field_vitu2_entry_pane_g2_ParamLimits

0xcaad,	// (0x000a1a49) field_vitu2_entry_pane_g3_ParamLimits

0xcaad,	// (0x000a1a49) field_vitu2_entry_pane_g3

0xf91b,	// (0x000a48b7) field_vitu2_entry_pane_g_ParamLimits

0x6801,	// (0x0009b79d) cell_vitu2_itu_pane_g1_ParamLimits

0x6813,	// (0x0009b7af) cell_vitu2_itu_pane_g2_ParamLimits

0x6813,	// (0x0009b7af) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x000a48c3) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x000a48c3) cell_vitu2_itu_pane_g

0x44f2,	// (0x0009948e) bg_vkb2_func_pane_cp05_ParamLimits

0x44f2,	// (0x0009948e) bg_vkb2_func_pane_cp05

0x44f2,	// (0x0009948e) bg_vkb2_func_pane_cp03

0x44f2,	// (0x0009948e) bg_vkb2_func_pane_cp04

0x44f2,	// (0x0009948e) bg_vkb2_func_pane_cp10_ParamLimits

0x44f2,	// (0x0009948e) bg_vkb2_func_pane_cp10

0x74b1,	// (0x0009c44d) bg_vkb2_func_pane_cp08

0x7497,	// (0x0009c433) bg_vkb2_func_pane_cp06

0x74a5,	// (0x0009c441) bg_vkb2_func_pane_cp07

0xd0d4,	// (0x000a2070) bg_vkb2_func_pane_cp11_ParamLimits

0xd0d4,	// (0x000a2070) bg_vkb2_func_pane_cp11

0xd0e9,	// (0x000a2085) bg_vkb2_func_pane_cp12_ParamLimits

0xd0e9,	// (0x000a2085) bg_vkb2_func_pane_cp12

0xe792,	// (0x000a372e) bg_vkb2_func_pane_cp09

0xcaea,	// (0x000a1a86) bg_vkb2_func_pane_g1

0x9fcc,	// (0x0009ef68) bg_vkb2_func_pane_g2

0xcaf2,	// (0x000a1a8e) bg_vkb2_func_pane_g3

0xcafa,	// (0x000a1a96) bg_vkb2_func_pane_g4

0xcd32,	// (0x000a1cce) bg_vkb2_func_pane_g5

0xcb12,	// (0x000a1aae) bg_vkb2_func_pane_g6

0xcb1a,	// (0x000a1ab6) bg_vkb2_func_pane_g7

0xcb0a,	// (0x000a1aa6) bg_vkb2_func_pane_g8

0x9fac,	// (0x0009ef48) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x000a4ac8) bg_vkb2_func_pane_g

0x77fd,	// (0x0009c799) blid2_tripm_pane_g6_ParamLimits

0x77fd,	// (0x0009c799) blid2_tripm_pane_g6

0xc925,	// (0x000a18c1) mp4_progress_pane_g1

0x7857,	// (0x0009c7f3) blid2_tripm_values_pane_ParamLimits

0x7857,	// (0x0009c7f3) blid2_tripm_values_pane

0x7914,	// (0x0009c8b0) blid2_tripm_values_pane_t1

0x7922,	// (0x0009c8be) blid2_tripm_values_pane_t2

0x7930,	// (0x0009c8cc) blid2_tripm_values_pane_t3

0x793e,	// (0x0009c8da) blid2_tripm_values_pane_t4

0x794c,	// (0x0009c8e8) blid2_tripm_values_pane_t5

0x795a,	// (0x0009c8f6) blid2_tripm_values_pane_t6

0x7968,	// (0x0009c904) blid2_tripm_values_pane_t7

0x7976,	// (0x0009c912) blid2_tripm_values_pane_t8

0x7984,	// (0x0009c920) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x000a4adb) blid2_tripm_values_pane_t

0x216d,	// (0x00097109) call_video_pane_t1_ParamLimits

0x218e,	// (0x0009712a) call_video_pane_t2_ParamLimits

0xf26e,	// (0x000a420a) call_video_pane_t_ParamLimits

0x3cab,	// (0x00098c47) msg_header_pane_g1_ParamLimits

0xa94e,	// (0x0009f8ea) msg_header_pane_g2_ParamLimits

0xa94e,	// (0x0009f8ea) msg_header_pane_g2

0x0001,

0xf488,	// (0x000a4424) msg_header_pane_g_ParamLimits

0xf488,	// (0x000a4424) msg_header_pane_g

0xefe7,	// (0x000a3f83) main_clock2_pane_ParamLimits

0x57f2,	// (0x0009a78e) grid_clock2_toolbar_pane_ParamLimits

0x57f2,	// (0x0009a78e) grid_clock2_toolbar_pane

0x57f2,	// (0x0009a78e) listscroll_clock2_pane_ParamLimits

0x57f2,	// (0x0009a78e) listscroll_clock2_pane

0x5896,	// (0x0009a832) main_clock2_pane_t3_ParamLimits

0x5896,	// (0x0009a832) main_clock2_pane_t3

0x58a8,	// (0x0009a844) main_clock2_pane_t4_ParamLimits

0x58a8,	// (0x0009a844) main_clock2_pane_t4

0xd1d4,	// (0x000a2170) cell_clock2_toolbar_pane

0xd1dc,	// (0x000a2178) cell_clock2_toolbar_pane_cp01

0xd1dc,	// (0x000a2178) cell_clock2_toolbar_pane_cp02

0xd1e4,	// (0x000a2180) cell_clock2_toolbar_pane_cp03

0xd1ec,	// (0x000a2188) list_clock2_pane

0xa59a,	// (0x0009f536) scroll_pane_cp10

0xd1f4,	// (0x000a2190) list_single_clock2_pane_ParamLimits

0xd1f4,	// (0x000a2190) list_single_clock2_pane

0x9d73,	// (0x0009ed0f) list_highlight_pane_cp08

0xd201,	// (0x000a219d) list_single_clock2_pane_t1

0xd20f,	// (0x000a21ab) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x000a4aee) list_single_clock2_pane_t

0xe792,	// (0x000a372e) bg_button_pane_cp10

0xd22b,	// (0x000a21c7) cell_clock2_toolbar_pane_g1

0x3d48,	// (0x00098ce4) aid_main_viewer_pane_g1_ParamLimits

0x3d48,	// (0x00098ce4) aid_main_viewer_pane_g1

0x3d54,	// (0x00098cf0) aid_main_viewer_pane_g2_ParamLimits

0x3d54,	// (0x00098cf0) aid_main_viewer_pane_g2

0x3d60,	// (0x00098cfc) aid_main_viewer_pane_g3_ParamLimits

0x3d60,	// (0x00098cfc) aid_main_viewer_pane_g3

0x3d71,	// (0x00098d0d) aid_main_viewer_pane_g4_ParamLimits

0x3d71,	// (0x00098d0d) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000a4435) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000a4435) aid_main_viewer_pane_g

0x44e5,	// (0x00099481) main_calc_pane_ParamLimits

0x4500,	// (0x0009949c) main_dialer2_pane_ParamLimits

0x11bc,	// (0x00096158) main_cam6_pane

0x11bc,	// (0x00096158) main_vid6_pane

0x57fe,	// (0x0009a79a) listscroll_gen_pane_cp06_ParamLimits

0x57fe,	// (0x0009a79a) listscroll_gen_pane_cp06

0x58ba,	// (0x0009a856) main_clock2_pane_t5_ParamLimits

0x58ba,	// (0x0009a856) main_clock2_pane_t5

0x5903,	// (0x0009a89f) aid_call2_pane_cp10_ParamLimits

0x5915,	// (0x0009a8b1) aid_call_pane_cp10_ParamLimits

0xa618,	// (0x0009f5b4) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa618,	// (0x0009f5b4) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5927,	// (0x0009a8c3) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5927,	// (0x0009a8c3) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa618,	// (0x0009f5b4) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x000a4770) popup_clock_analogue_window_cp10_g_ParamLimits

0x5939,	// (0x0009a8d5) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6100,	// (0x0009b09c) cell_dialer2_keypad_pane_g2_ParamLimits

0x6100,	// (0x0009b09c) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x000a4856) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x000a4856) cell_dialer2_keypad_pane_g

0x611c,	// (0x0009b0b8) cell_dialer2_keypad_pane_t1

0x6b38,	// (0x0009bad4) main_cset_text2_pane_ParamLimits

0x6b38,	// (0x0009bad4) main_cset_text2_pane

0xcf74,	// (0x000a1f10) area_vitu2_query_pane_g1_ParamLimits

0x7436,	// (0x0009c3d2) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x000a4a0b) area_vitu2_query_pane_g_ParamLimits

0xcff8,	// (0x000a1f94) area_vitu2_query_pane_t7_ParamLimits

0xcff8,	// (0x000a1f94) area_vitu2_query_pane_t7

0x7497,	// (0x0009c433) bg_button_pane_cp018_ParamLimits

0x74a5,	// (0x0009c441) bg_button_pane_cp021_ParamLimits

0x74b1,	// (0x0009c44d) bg_button_pane_cp022_ParamLimits

0x74b1,	// (0x0009c44d) bg_vkb2_func_pane_cp08_ParamLimits

0x7497,	// (0x0009c433) bg_vkb2_func_pane_cp06_ParamLimits

0x74a5,	// (0x0009c441) bg_vkb2_func_pane_cp07_ParamLimits

0x74c2,	// (0x0009c45e) input_focus_pane_cp09_ParamLimits

0x7992,	// (0x0009c92e) cam6_autofocus_pane_ParamLimits

0x7992,	// (0x0009c92e) cam6_autofocus_pane

0x79b4,	// (0x0009c950) cam6_image_uncrop_pane_ParamLimits

0x79b4,	// (0x0009c950) cam6_image_uncrop_pane

0x79e1,	// (0x0009c97d) cam6_indi_pane_ParamLimits

0x79e1,	// (0x0009c97d) cam6_indi_pane

0x79fb,	// (0x0009c997) cam6_mode_pane_ParamLimits

0x79fb,	// (0x0009c997) cam6_mode_pane

0x7a0f,	// (0x0009c9ab) cam6_timer_pane_ParamLimits

0x7a0f,	// (0x0009c9ab) cam6_timer_pane

0x7a1b,	// (0x0009c9b7) cam6_zoom_pane_ParamLimits

0x7a1b,	// (0x0009c9b7) cam6_zoom_pane

0x7a33,	// (0x0009c9cf) cam6_mode_pane_g1_ParamLimits

0x7a33,	// (0x0009c9cf) cam6_mode_pane_g1

0x7a3f,	// (0x0009c9db) cam6_mode_pane_g2_ParamLimits

0x7a3f,	// (0x0009c9db) cam6_mode_pane_g2

0x7a4b,	// (0x0009c9e7) cam6_mode_pane_g3_ParamLimits

0x7a4b,	// (0x0009c9e7) cam6_mode_pane_g3

0x7a57,	// (0x0009c9f3) cam6_mode_pane_g4_ParamLimits

0x7a57,	// (0x0009c9f3) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x000a4af3) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x000a4af3) cam6_mode_pane_g

0xd21d,	// (0x000a21b9) bg_tb_trans_pane_cp08_ParamLimits

0xd21d,	// (0x000a21b9) bg_tb_trans_pane_cp08

0xd233,	// (0x000a21cf) cam6_battery_pane_ParamLimits

0xd233,	// (0x000a21cf) cam6_battery_pane

0xd249,	// (0x000a21e5) cam6_indi_pane_g1_ParamLimits

0xd249,	// (0x000a21e5) cam6_indi_pane_g1

0xd25b,	// (0x000a21f7) cam6_indi_pane_g2_ParamLimits

0xd25b,	// (0x000a21f7) cam6_indi_pane_g2

0xd26d,	// (0x000a2209) cam6_indi_pane_g3_ParamLimits

0xd26d,	// (0x000a2209) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x000a4afc) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x000a4afc) cam6_indi_pane_g

0xd27f,	// (0x000a221b) cam6_indi_pane_t1_ParamLimits

0xd27f,	// (0x000a221b) cam6_indi_pane_t1

0x65fd,	// (0x0009b599) cam6_autofocus_pane_g1

0x65f5,	// (0x0009b591) cam6_autofocus_pane_g2

0x660d,	// (0x0009b5a9) cam6_autofocus_pane_g3

0x6605,	// (0x0009b5a1) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x000a4b03) cam6_autofocus_pane_g

0xd2a5,	// (0x000a2241) cam6_timer_pane_g1

0xd2ad,	// (0x000a2249) cam6_timer_pane_t1

0xd2bb,	// (0x000a2257) cam6_zoom_cont_pane

0xd2c3,	// (0x000a225f) cam6_zoom_pane_g1

0xd2cb,	// (0x000a2267) cam6_zoom_pane_g2

0x7a63,	// (0x0009c9ff) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x000a4b0c) cam6_zoom_pane_g

0xc002,	// (0x000a0f9e) cam6_battery_pane_g1

0xc002,	// (0x000a0f9e) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x000a4678) cam6_battery_pane_g

0xd2d3,	// (0x000a226f) cam6_zoom_cont_pane_g1

0xd2dc,	// (0x000a2278) cam6_zoom_cont_pane_g2

0xd2e5,	// (0x000a2281) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x000a4b13) cam6_zoom_cont_pane_g

0x7a80,	// (0x0009ca1c) cam6_mode_pane_cp_ParamLimits

0x7a80,	// (0x0009ca1c) cam6_mode_pane_cp

0x7a94,	// (0x0009ca30) cam6_zoom_pane_cp_ParamLimits

0x7a94,	// (0x0009ca30) cam6_zoom_pane_cp

0x7aac,	// (0x0009ca48) vid6_image_uncrop_cif_pane_ParamLimits

0x7aac,	// (0x0009ca48) vid6_image_uncrop_cif_pane

0x7ad8,	// (0x0009ca74) vid6_image_uncrop_nhd_pane_ParamLimits

0x7ad8,	// (0x0009ca74) vid6_image_uncrop_nhd_pane

0x7af5,	// (0x0009ca91) vid6_image_uncrop_vga_pane_ParamLimits

0x7af5,	// (0x0009ca91) vid6_image_uncrop_vga_pane

0x7b14,	// (0x0009cab0) vid6_image_uncrop_wvga_pane_ParamLimits

0x7b14,	// (0x0009cab0) vid6_image_uncrop_wvga_pane

0x7b31,	// (0x0009cacd) vid6_indi_pane_ParamLimits

0x7b31,	// (0x0009cacd) vid6_indi_pane

0xd21d,	// (0x000a21b9) bg_tb_trans_pane_cp09_ParamLimits

0xd21d,	// (0x000a21b9) bg_tb_trans_pane_cp09

0xd2fd,	// (0x000a2299) cam6_battery_pane_cp_ParamLimits

0xd2fd,	// (0x000a2299) cam6_battery_pane_cp

0xd309,	// (0x000a22a5) vid6_indi_pane_g1_ParamLimits

0xd309,	// (0x000a22a5) vid6_indi_pane_g1

0xd31b,	// (0x000a22b7) vid6_indi_pane_g2_ParamLimits

0xd31b,	// (0x000a22b7) vid6_indi_pane_g2

0xd32d,	// (0x000a22c9) vid6_indi_pane_g3_ParamLimits

0xd32d,	// (0x000a22c9) vid6_indi_pane_g3

0xd342,	// (0x000a22de) vid6_indi_pane_g4_ParamLimits

0xd342,	// (0x000a22de) vid6_indi_pane_g4

0xd357,	// (0x000a22f3) vid6_indi_pane_g5_ParamLimits

0xd357,	// (0x000a22f3) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x000a4b1a) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x000a4b1a) vid6_indi_pane_g

0xd371,	// (0x000a230d) vid6_indi_pane_t1_ParamLimits

0xd371,	// (0x000a230d) vid6_indi_pane_t1

0xd387,	// (0x000a2323) vid6_indi_pane_t2_ParamLimits

0xd387,	// (0x000a2323) vid6_indi_pane_t2

0xd3af,	// (0x000a234b) vid6_indi_pane_t3_ParamLimits

0xd3af,	// (0x000a234b) vid6_indi_pane_t3

0xd3d7,	// (0x000a2373) vid6_indi_pane_t4_ParamLimits

0xd3d7,	// (0x000a2373) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x000a4b25) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x000a4b25) vid6_indi_pane_t

0xd3fb,	// (0x000a2397) wait_bar_pane_cp08

0x7b56,	// (0x0009caf2) main_cset_text2_pane_t1_ParamLimits

0x7b56,	// (0x0009caf2) main_cset_text2_pane_t1

0x7a6b,	// (0x0009ca07) listscroll_gen_pane_cp06_t1_ParamLimits

0x7a6b,	// (0x0009ca07) listscroll_gen_pane_cp06_t1

0x11bc,	// (0x00096158) main_cam6_set_pane

0x648f,	// (0x0009b42b) bg_tb_trans_pane_cp06_ParamLimits

0x64a5,	// (0x0009b441) cam4_indicators_pane_g1_ParamLimits

0x64b6,	// (0x0009b452) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x000a4893) cam4_indicators_pane_g_ParamLimits

0x64d4,	// (0x0009b470) cam4_indicators_pane_t1_ParamLimits

0x44f2,	// (0x0009948e) bg_tb_trans_pane_cp07_ParamLimits

0x6587,	// (0x0009b523) vid4_indicators_pane_g1_ParamLimits

0x659b,	// (0x0009b537) vid4_indicators_pane_g2_ParamLimits

0x65af,	// (0x0009b54b) vid4_indicators_pane_g3_ParamLimits

0x65c0,	// (0x0009b55c) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x000a48a5) vid4_indicators_pane_g_ParamLimits

0x65de,	// (0x0009b57a) vid4_indicators_pane_t1_ParamLimits

0x75f3,	// (0x0009c58f) vid4_progress_pane_g1_ParamLimits

0x7603,	// (0x0009c59f) vid4_progress_pane_g2_ParamLimits

0x7613,	// (0x0009c5af) vid4_progress_pane_g3_ParamLimits

0x7625,	// (0x0009c5c1) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x000a4a56) vid4_progress_pane_g_ParamLimits

0x763d,	// (0x0009c5d9) vid4_progress_pane_t1_ParamLimits

0x7653,	// (0x0009c5ef) vid4_progress_pane_t2_ParamLimits

0x7668,	// (0x0009c604) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x000a4a61) vid4_progress_pane_t_ParamLimits

0x767d,	// (0x0009c619) wait_bar_pane_cp07_ParamLimits

0x7b89,	// (0x0009cb25) main_cam6_set_pane_g2_ParamLimits

0x7b89,	// (0x0009cb25) main_cam6_set_pane_g2

0x7b95,	// (0x0009cb31) main_cset6_listscroll_pane_ParamLimits

0x7b95,	// (0x0009cb31) main_cset6_listscroll_pane

0x7bc0,	// (0x0009cb5c) main_cset6_slider_pane_ParamLimits

0x7bc0,	// (0x0009cb5c) main_cset6_slider_pane

0x7bcc,	// (0x0009cb68) main_cset6_text2_pane_ParamLimits

0x7bcc,	// (0x0009cb68) main_cset6_text2_pane

0xd40a,	// (0x000a23a6) main_cset6_text_pane

0xd412,	// (0x000a23ae) main_cset_list_pane_copy1_ParamLimits

0xd412,	// (0x000a23ae) main_cset_list_pane_copy1

0xd422,	// (0x000a23be) scroll_pane_cp028_copy1

0x7bdf,	// (0x0009cb7b) cset_list_set_pane_copy1

0x7bf2,	// (0x0009cb8e) aid_position_infowindow_above_copy1

0x7bfa,	// (0x0009cb96) aid_position_infowindow_below_copy1

0x7c02,	// (0x0009cb9e) cset_list_set_pane_g1_copy1

0xccdd,	// (0x000a1c79) cset_list_set_pane_g3_copy1_ParamLimits

0xccdd,	// (0x000a1c79) cset_list_set_pane_g3_copy1

0xccec,	// (0x000a1c88) cset_list_set_pane_t1_copy1_ParamLimits

0xccec,	// (0x000a1c88) cset_list_set_pane_t1_copy1

0xb97e,	// (0x000a091a) list_highlight_pane_cp021_copy1_ParamLimits

0xb97e,	// (0x000a091a) list_highlight_pane_cp021_copy1

0xd42b,	// (0x000a23c7) cset6_slider_pane_ParamLimits

0xd42b,	// (0x000a23c7) cset6_slider_pane

0xd457,	// (0x000a23f3) main_cset6_slider_pane_g1_ParamLimits

0xd457,	// (0x000a23f3) main_cset6_slider_pane_g1

0x7c0a,	// (0x0009cba6) main_cset6_slider_pane_g2_ParamLimits

0x7c0a,	// (0x0009cba6) main_cset6_slider_pane_g2

0xd47f,	// (0x000a241b) main_cset6_slider_pane_g3_ParamLimits

0xd47f,	// (0x000a241b) main_cset6_slider_pane_g3

0x7c32,	// (0x0009cbce) main_cset6_slider_pane_g4_ParamLimits

0x7c32,	// (0x0009cbce) main_cset6_slider_pane_g4

0x7c3e,	// (0x0009cbda) main_cset6_slider_pane_g5_ParamLimits

0x7c3e,	// (0x0009cbda) main_cset6_slider_pane_g5

0xcc19,	// (0x000a1bb5) main_cset6_slider_pane_g7_ParamLimits

0xcc19,	// (0x000a1bb5) main_cset6_slider_pane_g7

0xcc25,	// (0x000a1bc1) main_cset6_slider_pane_g8_ParamLimits

0xcc25,	// (0x000a1bc1) main_cset6_slider_pane_g8

0x7c4c,	// (0x0009cbe8) main_cset6_slider_pane_g9_ParamLimits

0x7c4c,	// (0x0009cbe8) main_cset6_slider_pane_g9

0x7c58,	// (0x0009cbf4) main_cset6_slider_pane_g10_ParamLimits

0x7c58,	// (0x0009cbf4) main_cset6_slider_pane_g10

0x7c64,	// (0x0009cc00) main_cset6_slider_pane_g11_ParamLimits

0x7c64,	// (0x0009cc00) main_cset6_slider_pane_g11

0x7c70,	// (0x0009cc0c) main_cset6_slider_pane_g12_ParamLimits

0x7c70,	// (0x0009cc0c) main_cset6_slider_pane_g12

0x7c7c,	// (0x0009cc18) main_cset6_slider_pane_g13_ParamLimits

0x7c7c,	// (0x0009cc18) main_cset6_slider_pane_g13

0x7c88,	// (0x0009cc24) main_cset6_slider_pane_g14_ParamLimits

0x7c88,	// (0x0009cc24) main_cset6_slider_pane_g14

0x7c94,	// (0x0009cc30) main_cset6_slider_pane_g15_ParamLimits

0x7c94,	// (0x0009cc30) main_cset6_slider_pane_g15

0x7cac,	// (0x0009cc48) main_cset6_slider_pane_g16_ParamLimits

0x7cac,	// (0x0009cc48) main_cset6_slider_pane_g16

0x7cba,	// (0x0009cc56) main_cset6_slider_pane_g17_ParamLimits

0x7cba,	// (0x0009cc56) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x000a4b2e) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x000a4b2e) main_cset6_slider_pane_g

0xd48b,	// (0x000a2427) main_cset6_slider_pane_t1_ParamLimits

0xd48b,	// (0x000a2427) main_cset6_slider_pane_t1

0x7ce0,	// (0x0009cc7c) main_cset6_slider_pane_t2_ParamLimits

0x7ce0,	// (0x0009cc7c) main_cset6_slider_pane_t2

0x7d0b,	// (0x0009cca7) main_cset6_slider_pane_t3_ParamLimits

0x7d0b,	// (0x0009cca7) main_cset6_slider_pane_t3

0x7d36,	// (0x0009ccd2) main_cset6_slider_pane_t4_ParamLimits

0x7d36,	// (0x0009ccd2) main_cset6_slider_pane_t4

0x7d61,	// (0x0009ccfd) main_cset6_slider_pane_t5_ParamLimits

0x7d61,	// (0x0009ccfd) main_cset6_slider_pane_t5

0xd4cc,	// (0x000a2468) main_cset6_slider_pane_t7_ParamLimits

0xd4cc,	// (0x000a2468) main_cset6_slider_pane_t7

0x7d8e,	// (0x0009cd2a) main_cset6_slider_pane_t8_ParamLimits

0x7d8e,	// (0x0009cd2a) main_cset6_slider_pane_t8

0x7db2,	// (0x0009cd4e) main_cset6_slider_pane_t9_ParamLimits

0x7db2,	// (0x0009cd4e) main_cset6_slider_pane_t9

0x7dd6,	// (0x0009cd72) main_cset6_slider_pane_t10_ParamLimits

0x7dd6,	// (0x0009cd72) main_cset6_slider_pane_t10

0x7dfa,	// (0x0009cd96) main_cset6_slider_pane_t11_ParamLimits

0x7dfa,	// (0x0009cd96) main_cset6_slider_pane_t11

0xd502,	// (0x000a249e) main_cset6_slider_pane_t14_ParamLimits

0xd502,	// (0x000a249e) main_cset6_slider_pane_t14

0xd53b,	// (0x000a24d7) main_cset6_slider_pane_t15_ParamLimits

0xd53b,	// (0x000a24d7) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x000a4b53) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x000a4b53) main_cset6_slider_pane_t

0xcd6d,	// (0x000a1d09) cset_slider_pane_g1_copy1

0xcd76,	// (0x000a1d12) cset_slider_pane_g2_copy1

0xcd7f,	// (0x000a1d1b) cset_slider_pane_g3_copy1

0xe792,	// (0x000a372e) bg_popup_sub_pane_cp011_copy1

0xd574,	// (0x000a2510) main_cset_text_pane_g1_copy1

0xcd9c,	// (0x000a1d38) main_cset_text_pane_t1_copy1

0xcdaa,	// (0x000a1d46) main_cset_text_pane_t2_copy1

0xcdb8,	// (0x000a1d54) main_cset_text_pane_t3_copy1

0xcdc6,	// (0x000a1d62) main_cset_text_pane_t4_copy1

0xcdd4,	// (0x000a1d70) main_cset_text_pane_t5_copy1

0xd57c,	// (0x000a2518) main_cset_text_pane_t6_copy1

0xcdf0,	// (0x000a1d8c) main_cset_text_pane_t7_copy1

0x7eef,	// (0x0009ce8b) main_cset_text2_pane_t1_copy1

0x44f2,	// (0x0009948e) main_ncimui_pane

0x4551,	// (0x000994ed) popup_query_ncimui_window_ParamLimits

0x4551,	// (0x000994ed) popup_query_ncimui_window

0xc2ca,	// (0x000a1266) field_cale_ev2_pane_g4_ParamLimits

0xc2ca,	// (0x000a1266) field_cale_ev2_pane_g4

0x5e20,	// (0x0009adbc) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5e20,	// (0x0009adbc) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x000a4831) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x000a4831) cell_video_dialer_keypad_pane_g

0x5e38,	// (0x0009add4) cell_video_dialer_keypad_pane_t1

0xe792,	// (0x000a372e) bg_popup_window_pane_cp012

0xa467,	// (0x0009f403) heading_pane_cp06

0xd5a8,	// (0x000a2544) ncim_query_content_pane

0xe792,	// (0x000a372e) bg_popup_heading_pane_cp01

0xd5b0,	// (0x000a254c) ncim_heading_pane_t1

0xd5be,	// (0x000a255a) ncim_indicator_popup_pane

0xd5d0,	// (0x000a256c) ncim_query_button_pane

0xd5e4,	// (0x000a2580) ncim_query_content_pane_t1

0xd5f6,	// (0x000a2592) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x000a4b97) ncim_query_content_pane_t

0xd630,	// (0x000a25cc) ncim_query_list_pane

0xd642,	// (0x000a25de) ncim_query_popup_pane

0xd5be,	// (0x000a255a) ncim_indicator_popup_pane_ParamLimits

0x8042,	// (0x0009cfde) ncim_query_content_pane_g1_ParamLimits

0x8042,	// (0x0009cfde) ncim_query_content_pane_g1

0xd5e4,	// (0x000a2580) ncim_query_content_pane_t1_ParamLimits

0xd5f6,	// (0x000a2592) ncim_query_content_pane_t2_ParamLimits

0x804e,	// (0x0009cfea) ncim_query_content_pane_t3_ParamLimits

0x804e,	// (0x0009cfea) ncim_query_content_pane_t3

0x806b,	// (0x0009d007) ncim_query_content_pane_t4_ParamLimits

0x806b,	// (0x0009d007) ncim_query_content_pane_t4

0x8088,	// (0x0009d024) ncim_query_content_pane_t5_ParamLimits

0x8088,	// (0x0009d024) ncim_query_content_pane_t5

0xd608,	// (0x000a25a4) ncim_query_content_pane_t6_ParamLimits

0xd608,	// (0x000a25a4) ncim_query_content_pane_t6

0xfbfb,	// (0x000a4b97) ncim_query_content_pane_t_ParamLimits

0xd630,	// (0x000a25cc) ncim_query_list_pane_ParamLimits

0xd642,	// (0x000a25de) ncim_query_popup_pane_ParamLimits

0xd656,	// (0x000a25f2) wait_bar_pane_cp04

0xe792,	// (0x000a372e) input_focus_pane_cp011

0xd65e,	// (0x000a25fa) ncim_query_popup_pane_t1

0xd66c,	// (0x000a2608) ncim_list_query_list_pane_ParamLimits

0xd66c,	// (0x000a2608) ncim_list_query_list_pane

0xe792,	// (0x000a372e) bg_button_pane_cp027

0xd679,	// (0x000a2615) ncim_query_button_pane_g1

0xe792,	// (0x000a372e) list_highlight_pane_cp012

0xd683,	// (0x000a261f) ncim_list_query_list_pane_g1

0xd68b,	// (0x000a2627) ncim_list_query_list_pane_t1

0x64c5,	// (0x0009b461) cam4_indicators_pane_g3_ParamLimits

0x64c5,	// (0x0009b461) cam4_indicators_pane_g3

0x65cc,	// (0x0009b568) vid4_indicators_pane_g5_ParamLimits

0x65cc,	// (0x0009b568) vid4_indicators_pane_g5

0x7631,	// (0x0009c5cd) vid4_progress_pane_g5_ParamLimits

0x7631,	// (0x0009c5cd) vid4_progress_pane_g5

0x7f2e,	// (0x0009ceca) main_ncimui_pane_g1

0x7f96,	// (0x0009cf32) ncimui_group_query_pane_ParamLimits

0x7f96,	// (0x0009cf32) ncimui_group_query_pane

0x7fde,	// (0x0009cf7a) ncimui_list_pane_ParamLimits

0x7fde,	// (0x0009cf7a) ncimui_list_pane

0x8005,	// (0x0009cfa1) ncimui_text_pane_ParamLimits

0x8005,	// (0x0009cfa1) ncimui_text_pane

0x80a5,	// (0x0009d041) ncimui_text_pane_t1_ParamLimits

0x80a5,	// (0x0009d041) ncimui_text_pane_t1

0xd699,	// (0x000a2635) ncimui_list_single_graphic_pane_ParamLimits

0xd699,	// (0x000a2635) ncimui_list_single_graphic_pane

0x80c4,	// (0x0009d060) ncimui_query_pane_ParamLimits

0x80c4,	// (0x0009d060) ncimui_query_pane

0xe792,	// (0x000a372e) list_highlight_pane_cp013

0xd6a9,	// (0x000a2645) ncim_list_query_list_pane_t1_copy1

0xd683,	// (0x000a261f) ncim_list_single_graphic_pane_g1

0xd6b7,	// (0x000a2653) ncim_query_button_pane_cp01

0xd6c3,	// (0x000a265f) ncim_query_entry_pane_ParamLimits

0xd6c3,	// (0x000a265f) ncim_query_entry_pane

0xd6d6,	// (0x000a2672) ncimui_query_pane_g1

0xd6e2,	// (0x000a267e) ncimui_query_pane_t1_ParamLimits

0xd6e2,	// (0x000a267e) ncimui_query_pane_t1

0xb97e,	// (0x000a091a) input_focus_pane_cp012

0xd6fb,	// (0x000a2697) ncim_query_entry_pane_t1

0xefe7,	// (0x000a3f83) main_im_pane_ParamLimits

0x44f2,	// (0x0009948e) main_mobtv_pane_ParamLimits

0x44f2,	// (0x0009948e) main_mobtv_pane

0x7cc8,	// (0x0009cc64) main_cset6_slider_pane_g18_ParamLimits

0x7cc8,	// (0x0009cc64) main_cset6_slider_pane_g18

0x7cd4,	// (0x0009cc70) main_cset6_slider_pane_g19_ParamLimits

0x7cd4,	// (0x0009cc70) main_cset6_slider_pane_g19

0xcaad,	// (0x000a1a49) bg_main_mobtv_pane_ParamLimits

0xcaad,	// (0x000a1a49) bg_main_mobtv_pane

0x80d7,	// (0x0009d073) main_mobtv_info_pane

0x80e2,	// (0x0009d07e) main_mobtv_loading_pane_ParamLimits

0x80e2,	// (0x0009d07e) main_mobtv_loading_pane

0xd70d,	// (0x000a26a9) main_mobtv_pg_channel_list_pane

0xd717,	// (0x000a26b3) main_mobtv_pg_hdr_pane

0x80ef,	// (0x0009d08b) main_mobtv_programe_curr_pane_ParamLimits

0x80ef,	// (0x0009d08b) main_mobtv_programe_curr_pane

0x80fc,	// (0x0009d098) main_mobtv_programe_next_pane_ParamLimits

0x80fc,	// (0x0009d098) main_mobtv_programe_next_pane

0xd720,	// (0x000a26bc) popup_mobtv_noti_window

0xc002,	// (0x000a0f9e) main_tv_pg_hdr_pane_g1

0xd728,	// (0x000a26c4) main_tv_pg_hdr_pane_g2

0xd730,	// (0x000a26cc) main_tv_pg_hdr_pane_g3

0xd738,	// (0x000a26d4) main_tv_pg_hdr_pane_g4

0xd740,	// (0x000a26dc) main_tv_pg_hdr_pane_g5

0xd74a,	// (0x000a26e6) main_tv_pg_hdr_pane_g6

0xd754,	// (0x000a26f0) main_tv_pg_hdr_pane_g7

0xd75e,	// (0x000a26fa) main_tv_pg_hdr_pane_g8

0xd768,	// (0x000a2704) main_tv_pg_hdr_pane_g9

0xd772,	// (0x000a270e) main_tv_pg_hdr_pane_g10

0xd77c,	// (0x000a2718) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x000a4ba4) main_tv_pg_hdr_pane_g

0xd786,	// (0x000a2722) main_tv_pg_hdr_pane_t1

0xd794,	// (0x000a2730) main_tv_pg_hdr_pane_t2

0xd7a2,	// (0x000a273e) main_tv_pg_hdr_pane_t3

0xd7b2,	// (0x000a274e) main_tv_pg_hdr_pane_t4

0xd7c2,	// (0x000a275e) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x000a4bbb) main_tv_pg_hdr_pane_t

0xd7d2,	// (0x000a276e) single_mobtv_pg_channel_pane_ParamLimits

0xd7d2,	// (0x000a276e) single_mobtv_pg_channel_pane

0xd7e4,	// (0x000a2780) single_mobtv_pg_channel_table_pane

0xd7ed,	// (0x000a2789) single_mobtv_pg_channel_thumb_pane

0xd7f6,	// (0x000a2792) single_tv_pg_channel_pane_g1

0xd7ff,	// (0x000a279b) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x000a4bc6) single_tv_pg_channel_pane_g

0xc265,	// (0x000a1201) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc265,	// (0x000a1201) bg_single_mobtv_pg_channel_thumb_pane

0xd808,	// (0x000a27a4) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd808,	// (0x000a27a4) single_mobtv_pg_channel_thumb_pane_g1

0xd816,	// (0x000a27b2) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd816,	// (0x000a27b2) single_mobtv_pg_channel_thumb_pane_g2

0xd822,	// (0x000a27be) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd822,	// (0x000a27be) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x000a4bcb) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x000a4bcb) single_mobtv_pg_channel_thumb_pane_g

0xd82e,	// (0x000a27ca) single_mobtv_pg_channel_thumb_pane_t1

0xd83c,	// (0x000a27d8) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x000a4bd2) single_mobtv_pg_channel_thumb_pane_t

0xc002,	// (0x000a0f9e) bg_single_mobtv_pg_channel_table_pane_g1

0xc002,	// (0x000a0f9e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x000a4678) bg_single_mobtv_pg_channel_table_pane_g

0xd84a,	// (0x000a27e6) single_mobtv_pg_channel_table_pane_t1

0xd858,	// (0x000a27f4) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x000a4bd7) single_mobtv_pg_channel_table_pane_t

0x8111,	// (0x0009d0ad) main_mobtv_info_pane_g1_ParamLimits

0x8111,	// (0x0009d0ad) main_mobtv_info_pane_g1

0x812d,	// (0x0009d0c9) main_mobtv_info_pane_t1_ParamLimits

0x812d,	// (0x0009d0c9) main_mobtv_info_pane_t1

0x81a5,	// (0x0009d141) main_mobtv_info_pane_t2_ParamLimits

0x81a5,	// (0x0009d141) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x000a4be1) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x000a4be1) main_mobtv_info_pane_t

0x8234,	// (0x0009d1d0) wait_bar_pane_cp05

0x8246,	// (0x0009d1e2) main_mobtv_loading_pane_g1_ParamLimits

0x8246,	// (0x0009d1e2) main_mobtv_loading_pane_g1

0x8254,	// (0x0009d1f0) main_mobtv_loading_pane_g2_ParamLimits

0x8254,	// (0x0009d1f0) main_mobtv_loading_pane_g2

0x8260,	// (0x0009d1fc) main_mobtv_loading_pane_g3_ParamLimits

0x8260,	// (0x0009d1fc) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x000a4be8) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x000a4be8) main_mobtv_loading_pane_g

0xd866,	// (0x000a2802) main_mobtv_loading_pane_t1_ParamLimits

0xd866,	// (0x000a2802) main_mobtv_loading_pane_t1

0xd87e,	// (0x000a281a) main_mobtv_loading_pane_t2_ParamLimits

0xd87e,	// (0x000a281a) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x000a4bef) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x000a4bef) main_mobtv_loading_pane_t

0x826e,	// (0x0009d20a) wait_bar_pane_cp06_ParamLimits

0x826e,	// (0x0009d20a) wait_bar_pane_cp06

0xd8a2,	// (0x000a283e) main_mobtv_programe_curr_pane_t1

0xd8b0,	// (0x000a284c) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x000a4bf4) main_mobtv_programe_curr_pane_t

0xd8be,	// (0x000a285a) main_mobtv_programe_next_pane_t1

0xd8cc,	// (0x000a2868) main_mobtv_programe_next_pane_t2

0xd8da,	// (0x000a2876) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x000a4bf9) main_mobtv_programe_next_pane_t

0xe792,	// (0x000a372e) bg_popup_mobtv_noti_window_pane

0xd8e8,	// (0x000a2884) popup_mobtv_noti_window_g1

0xd8f0,	// (0x000a288c) popup_mobtv_noti_window_t1

0xd8fe,	// (0x000a289a) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x000a4c00) popup_mobtv_noti_window_t

0xc002,	// (0x000a0f9e) bg_popup_mobtv_noti_window_pane_g1

0x11bc,	// (0x00096158) sc_clock_pane

0x11bc,	// (0x00096158) main_fs_bigclock_pane

0x7845,	// (0x0009c7e1) blid2_tripm_pane_t4_ParamLimits

0x7845,	// (0x0009c7e1) blid2_tripm_pane_t4

0x827a,	// (0x0009d216) sc_clock_pane_g1_ParamLimits

0x827a,	// (0x0009d216) sc_clock_pane_g1

0x8288,	// (0x0009d224) sc_clock_pane_t1_ParamLimits

0x8288,	// (0x0009d224) sc_clock_pane_t1

0x829b,	// (0x0009d237) sc_clock_pane_t2_ParamLimits

0x829b,	// (0x0009d237) sc_clock_pane_t2

0x82ad,	// (0x0009d249) sc_clock_pane_t3_ParamLimits

0x82ad,	// (0x0009d249) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x000a4c05) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x000a4c05) sc_clock_pane_t

0x91e5,	// (0x0009e181) main_fs_bigclock_indicator_pane_ParamLimits

0x91e5,	// (0x0009e181) main_fs_bigclock_indicator_pane

0x8336,	// (0x0009d2d2) main_fs_bigclock_pane_g1_ParamLimits

0x8336,	// (0x0009d2d2) main_fs_bigclock_pane_g1

0x91f1,	// (0x0009e18d) main_fs_bigclock_pane_t1_ParamLimits

0x91f1,	// (0x0009e18d) main_fs_bigclock_pane_t1

0x9203,	// (0x0009e19f) main_fs_bigclock_pane_t2_ParamLimits

0x9203,	// (0x0009e19f) main_fs_bigclock_pane_t2

0x9217,	// (0x0009e1b3) main_fs_bigclock_pane_t3_ParamLimits

0x9217,	// (0x0009e1b3) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x000a4e0f) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x000a4e0f) main_fs_bigclock_pane_t

0xe440,	// (0x000a33dc) main_fs_bigclock_indicator_pane_g1

0xd5d8,	// (0x000a2574) ncim_query_content_pane_g2_ParamLimits

0xd5d8,	// (0x000a2574) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x000a4b92) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x000a4b92) ncim_query_content_pane_g

0x82c1,	// (0x0009d25d) sc_clock_pane_t4_ParamLimits

0x82c1,	// (0x0009d25d) sc_clock_pane_t4

0x44f2,	// (0x0009948e) main_radioblah_pane

0xca0e,	// (0x000a19aa) cell_call4_button_pane_t1_copy1_ParamLimits

0xca0e,	// (0x000a19aa) cell_call4_button_pane_t1_copy1

0x7f48,	// (0x0009cee4) main_ncimui_pane_t1_ParamLimits

0x7f48,	// (0x0009cee4) main_ncimui_pane_t1

0x7f62,	// (0x0009cefe) main_ncimui_pane_t2_ParamLimits

0x7f62,	// (0x0009cefe) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x000a4b8b) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x000a4b8b) main_ncimui_pane_t

0xda42,	// (0x000a29de) main_radioblah_anim_pane_ParamLimits

0xda42,	// (0x000a29de) main_radioblah_anim_pane

0xda53,	// (0x000a29ef) main_radioblah_info_pane_ParamLimits

0xda53,	// (0x000a29ef) main_radioblah_info_pane

0xda67,	// (0x000a2a03) main_radioblah_pane_t1_ParamLimits

0xda67,	// (0x000a2a03) main_radioblah_pane_t1

0xda83,	// (0x000a2a1f) main_radioblah_pane_t2_ParamLimits

0xda83,	// (0x000a2a1f) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x000a4c26) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x000a4c26) main_radioblah_pane_t

0x8388,	// (0x0009d324) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8388,	// (0x0009d324) main_radioblah_rocker_ctrl_pane

0xdacb,	// (0x000a2a67) main_radioblah_info_pane_t1_ParamLimits

0xdacb,	// (0x000a2a67) main_radioblah_info_pane_t1

0x83cd,	// (0x0009d369) main_radioblah_info_pane_t2_ParamLimits

0x83cd,	// (0x0009d369) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x000a4c2f) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x000a4c2f) main_radioblah_info_pane_t

0xc002,	// (0x000a0f9e) main_radioblah_rocker_ctrl_pane_g1

0x847d,	// (0x0009d419) main_radioblah_rocker_ctrl_pane_g2

0x8485,	// (0x0009d421) main_radioblah_rocker_ctrl_pane_g3

0x848d,	// (0x0009d429) main_radioblah_rocker_ctrl_pane_g4

0x8495,	// (0x0009d431) main_radioblah_rocker_ctrl_pane_g5

0x849d,	// (0x0009d439) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x000a4c38) main_radioblah_rocker_ctrl_pane_g

0x7eef,	// (0x0009ce8b) main_cset_text2_pane_t1_copy1_ParamLimits

0x63e5,	// (0x0009b381) cam4_image_uncrop_qvga_pane

0x653a,	// (0x0009b4d6) vid4_image_uncrop_qcif_pane

0x79d3,	// (0x0009c96f) cam6_image_uncrop_qvga_pane_ParamLimits

0x79d3,	// (0x0009c96f) cam6_image_uncrop_qvga_pane

0xd2ed,	// (0x000a2289) vid6_image_uncrop_qcif_pane_ParamLimits

0xd2ed,	// (0x000a2289) vid6_image_uncrop_qcif_pane

0xe792,	// (0x000a372e) bg_popup_preview_window_pane_cp03

0xd58a,	// (0x000a2526) list_cset_text2_pane

0xd592,	// (0x000a252e) main_cset6_text2_pane_g1

0xd59a,	// (0x000a2536) main_cset6_text2_pane_t1

0x84a5,	// (0x0009d441) list_cset_text2_pane_t1_ParamLimits

0x84a5,	// (0x0009d441) list_cset_text2_pane_t1

0x44f2,	// (0x0009948e) main_radioblah_pane_ParamLimits

0x8220,	// (0x0009d1bc) main_mobtv_info_pane_t3_ParamLimits

0x8220,	// (0x0009d1bc) main_mobtv_info_pane_t3

0x8376,	// (0x0009d312) main_radioblah_pane_g1

0x83a1,	// (0x0009d33d) main_radioblah_info_pane_g1

0x8422,	// (0x0009d3be) main_radioblah_info_pane_t3_ParamLimits

0x8422,	// (0x0009d3be) main_radioblah_info_pane_t3

0x31d1,	// (0x0009816d) highlight_cell_cale_month_pane_ParamLimits

0x31d1,	// (0x0009816d) highlight_cell_cale_month_pane

0x11bc,	// (0x00096158) main_phob_fisheye_pane

0xc399,	// (0x000a1335) scroll_pane_cp0031_ParamLimits

0xc399,	// (0x000a1335) scroll_pane_cp0031

0xd3fb,	// (0x000a2397) wait_bar_pane_cp08_ParamLimits

0x7bdf,	// (0x0009cb7b) cset_list_set_pane_copy1_ParamLimits

0xdb05,	// (0x000a2aa1) highlight_cell_cale_month_pane_g1

0x84c2,	// (0x0009d45e) highlight_cell_cale_month_pane_t1

0xd064,	// (0x000a2000) list_gen_pane_cp01

0xcc04,	// (0x000a1ba0) scroll_pane_01

0x84d0,	// (0x0009d46c) list_single_double_fisheye_pane

0x84d9,	// (0x0009d475) list_double_fisheye_pane_g1_ParamLimits

0x84d9,	// (0x0009d475) list_double_fisheye_pane_g1

0x84e5,	// (0x0009d481) list_double_fisheye_pane_g2_ParamLimits

0x84e5,	// (0x0009d481) list_double_fisheye_pane_g2

0x84f9,	// (0x0009d495) list_double_fisheye_pane_g3_ParamLimits

0x84f9,	// (0x0009d495) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x000a4c45) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x000a4c45) list_double_fisheye_pane_g

0x8522,	// (0x0009d4be) list_double_fisheye_pane_t1_ParamLimits

0x8522,	// (0x0009d4be) list_double_fisheye_pane_t1

0x853d,	// (0x0009d4d9) list_double_fisheye_pane_t2_ParamLimits

0x853d,	// (0x0009d4d9) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x000a4c50) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x000a4c50) list_double_fisheye_pane_t

0x11bc,	// (0x00096158) main_call5_pane

0x82e7,	// (0x0009d283) sc_swipe_pane_ParamLimits

0x82e7,	// (0x0009d283) sc_swipe_pane

0x856b,	// (0x0009d507) call5_image_pane_ParamLimits

0x856b,	// (0x0009d507) call5_image_pane

0x857b,	// (0x0009d517) call5_swipe_1_pane_ParamLimits

0x857b,	// (0x0009d517) call5_swipe_1_pane

0x8587,	// (0x0009d523) call5_swipe_2_pane_ParamLimits

0x8587,	// (0x0009d523) call5_swipe_2_pane

0x85a1,	// (0x0009d53d) popup_call5_audio_first_window_ParamLimits

0x85a1,	// (0x0009d53d) popup_call5_audio_first_window

0xc265,	// (0x000a1201) call5_swipe_1_pane_g1_ParamLimits

0xc265,	// (0x000a1201) call5_swipe_1_pane_g1

0xdb0d,	// (0x000a2aa9) call5_swipe_1_pane_g2_ParamLimits

0xdb0d,	// (0x000a2aa9) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x000a4c55) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x000a4c55) call5_swipe_1_pane_g

0xdb19,	// (0x000a2ab5) call5_swipe_1_pane_t1_ParamLimits

0xdb19,	// (0x000a2ab5) call5_swipe_1_pane_t1

0xc265,	// (0x000a1201) call5_swipe_2_pane_g1_ParamLimits

0xc265,	// (0x000a1201) call5_swipe_2_pane_g1

0xdb2e,	// (0x000a2aca) call5_swipe_2_pane_g2_ParamLimits

0xdb2e,	// (0x000a2aca) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x000a4c5a) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x000a4c5a) call5_swipe_2_pane_g

0xdb3a,	// (0x000a2ad6) call5_swipe_2_pane_t1_ParamLimits

0xdb3a,	// (0x000a2ad6) call5_swipe_2_pane_t1

0xdb4f,	// (0x000a2aeb) sc_swipe_pane_g1_ParamLimits

0xdb4f,	// (0x000a2aeb) sc_swipe_pane_g1

0xdb5c,	// (0x000a2af8) sc_swipe_pane_g2_ParamLimits

0xdb5c,	// (0x000a2af8) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x000a4c5f) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x000a4c5f) sc_swipe_pane_g

0xdb68,	// (0x000a2b04) sc_swipe_pane_t1_ParamLimits

0xdb68,	// (0x000a2b04) sc_swipe_pane_t1

0x11bc,	// (0x00096158) main_cmail_launcher_pane

0x85af,	// (0x0009d54b) aid_size_cell_cmail_l_ParamLimits

0x85af,	// (0x0009d54b) aid_size_cell_cmail_l

0x85bf,	// (0x0009d55b) grid_cmail_l_pane_ParamLimits

0x85bf,	// (0x0009d55b) grid_cmail_l_pane

0x85cf,	// (0x0009d56b) cell_cmail_l_pane_ParamLimits

0x85cf,	// (0x0009d56b) cell_cmail_l_pane

0x85e3,	// (0x0009d57f) cell_cmail_l_pane_g1_ParamLimits

0x85e3,	// (0x0009d57f) cell_cmail_l_pane_g1

0x85ef,	// (0x0009d58b) cell_cmail_l_pane_t1_ParamLimits

0x85ef,	// (0x0009d58b) cell_cmail_l_pane_t1

0xdb7d,	// (0x000a2b19) cell_cmail_l_pane_t2_ParamLimits

0xdb7d,	// (0x000a2b19) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x000a4c64) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x000a4c64) cell_cmail_l_pane_t

0xb97e,	// (0x000a091a) grid_highlight_pane_cp018_ParamLimits

0xb97e,	// (0x000a091a) grid_highlight_pane_cp018

0x1012,	// (0x00095fae) main2_pane_ParamLimits

0x1012,	// (0x00095fae) main2_pane

0xf080,	// (0x000a401c) popup_sp_fs_action_menu_bg_pane_g1

0xf088,	// (0x000a4024) popup_sp_fs_action_menu_bg_pane_g2

0xf090,	// (0x000a402c) popup_sp_fs_action_menu_bg_pane_g3

0x9c5f,	// (0x0009ebfb) popup_sp_fs_action_menu_bg_pane_g4

0x9c67,	// (0x0009ec03) popup_sp_fs_action_menu_bg_pane_g5

0x9c6f,	// (0x0009ec0b) popup_sp_fs_action_menu_bg_pane_g6

0x9c77,	// (0x0009ec13) popup_sp_fs_action_menu_bg_pane_g7

0x9c7f,	// (0x0009ec1b) popup_sp_fs_action_menu_bg_pane_g8

0x9c87,	// (0x0009ec23) popup_sp_fs_action_menu_bg_pane_g9

0x9c8f,	// (0x0009ec2b) popup_sp_fs_action_menu_bg_pane_g10

0x9c8f,	// (0x0009ec2b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x000a4126) popup_sp_fs_action_menu_bg_pane_g

0x1faa,	// (0x00096f46) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1faa,	// (0x00096f46) list_medium_line_x2_t3_g3_g1

0x1fb6,	// (0x00096f52) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1fb6,	// (0x00096f52) list_medium_line_x2_t3_g3_g2

0x1fc2,	// (0x00096f5e) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1fc2,	// (0x00096f5e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x000a41d4) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x000a41d4) list_medium_line_x2_t3_g3_g

0x1fce,	// (0x00096f6a) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1fce,	// (0x00096f6a) list_medium_line_x2_t3_g3_t1

0x1fe3,	// (0x00096f7f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1fe3,	// (0x00096f7f) list_medium_line_x2_t3_g3_t2

0x1ff5,	// (0x00096f91) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1ff5,	// (0x00096f91) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x000a41db) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x000a41db) list_medium_line_x2_t3_g3_t

0x1faa,	// (0x00096f46) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1faa,	// (0x00096f46) list_medium_line_x2_t3_g2_g1

0x1fc2,	// (0x00096f5e) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1fc2,	// (0x00096f5e) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x000a41e2) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x000a41e2) list_medium_line_x2_t3_g2_g

0x200a,	// (0x00096fa6) list_medium_line_x2_t3_g2_t1_ParamLimits

0x200a,	// (0x00096fa6) list_medium_line_x2_t3_g2_t1

0x2020,	// (0x00096fbc) list_medium_line_x2_t3_g2_t2_ParamLimits

0x2020,	// (0x00096fbc) list_medium_line_x2_t3_g2_t2

0x2032,	// (0x00096fce) list_medium_line_x2_t3_g2_t3_ParamLimits

0x2032,	// (0x00096fce) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x000a41e7) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x000a41e7) list_medium_line_x2_t3_g2_t

0x1faa,	// (0x00096f46) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1faa,	// (0x00096f46) list_medium_line_x2_t4_g4_g1

0x204f,	// (0x00096feb) list_medium_line_x2_t4_g4_g2_ParamLimits

0x204f,	// (0x00096feb) list_medium_line_x2_t4_g4_g2

0x1fb6,	// (0x00096f52) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1fb6,	// (0x00096f52) list_medium_line_x2_t4_g4_g3

0x205b,	// (0x00096ff7) list_medium_line_x2_t4_g4_g4_ParamLimits

0x205b,	// (0x00096ff7) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x000a41ee) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x000a41ee) list_medium_line_x2_t4_g4_g

0x2067,	// (0x00097003) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2067,	// (0x00097003) list_medium_line_x2_t4_g4_t1

0x207e,	// (0x0009701a) list_medium_line_x2_t4_g4_t2_ParamLimits

0x207e,	// (0x0009701a) list_medium_line_x2_t4_g4_t2

0x2093,	// (0x0009702f) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2093,	// (0x0009702f) list_medium_line_x2_t4_g4_t3

0x20a5,	// (0x00097041) list_medium_line_x2_t4_g4_t4_ParamLimits

0x20a5,	// (0x00097041) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x000a41f7) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x000a41f7) list_medium_line_x2_t4_g4_t

0x1faa,	// (0x00096f46) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1faa,	// (0x00096f46) list_medium_line_x2_t2_g4_g1

0x204f,	// (0x00096feb) list_medium_line_x2_t2_g4_g2_ParamLimits

0x204f,	// (0x00096feb) list_medium_line_x2_t2_g4_g2

0x1fb6,	// (0x00096f52) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1fb6,	// (0x00096f52) list_medium_line_x2_t2_g4_g3

0x1fc2,	// (0x00096f5e) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1fc2,	// (0x00096f5e) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000a425e) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000a425e) list_medium_line_x2_t2_g4_g

0x31f7,	// (0x00098193) list_medium_line_x2_t2_g4_t1_ParamLimits

0x31f7,	// (0x00098193) list_medium_line_x2_t2_g4_t1

0x1ff5,	// (0x00096f91) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1ff5,	// (0x00096f91) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000a4267) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000a4267) list_medium_line_x2_t2_g4_t

0x1faa,	// (0x00096f46) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1faa,	// (0x00096f46) list_medium_line_x2_t2_g3_g1

0x1fb6,	// (0x00096f52) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1fb6,	// (0x00096f52) list_medium_line_x2_t2_g3_g2

0x1fc2,	// (0x00096f5e) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1fc2,	// (0x00096f5e) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x000a41d4) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x000a41d4) list_medium_line_x2_t2_g3_g

0x320c,	// (0x000981a8) list_medium_line_x2_t2_g3_t1_ParamLimits

0x320c,	// (0x000981a8) list_medium_line_x2_t2_g3_t1

0x1ff5,	// (0x00096f91) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1ff5,	// (0x00096f91) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000a426c) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000a426c) list_medium_line_x2_t2_g3_t

0x33c7,	// (0x00098363) main_sp_fs_list_pane_ParamLimits

0x33c7,	// (0x00098363) main_sp_fs_list_pane

0x33d3,	// (0x0009836f) sp_fs_scroll_pane_ParamLimits

0x33d3,	// (0x0009836f) sp_fs_scroll_pane

0x33df,	// (0x0009837b) list_medium_line_x2_t3_t1

0x33ef,	// (0x0009838b) list_medium_line_x2_t3_t2

0x33fd,	// (0x00098399) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x000a42b7) list_medium_line_x2_t3_t

0x340b,	// (0x000983a7) list_medium_line_x3_t4_t1

0x341b,	// (0x000983b7) list_medium_line_x3_t4_t2

0x3429,	// (0x000983c5) list_medium_line_x3_t4_t3

0x33fd,	// (0x00098399) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x000a42be) list_medium_line_x3_t4_t

0x3437,	// (0x000983d3) list_medium_line_x4_t5_t1

0x3447,	// (0x000983e3) list_medium_line_x4_t5_t2

0x3429,	// (0x000983c5) list_medium_line_x4_t5_t3

0x3455,	// (0x000983f1) list_medium_line_x4_t5_t4

0x33fd,	// (0x00098399) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x000a42c7) list_medium_line_x4_t5_t

0x1faa,	// (0x00096f46) list_medium_line_t4_g4_g1_ParamLimits

0x1faa,	// (0x00096f46) list_medium_line_t4_g4_g1

0x3463,	// (0x000983ff) list_medium_line_t4_g4_g2_ParamLimits

0x3463,	// (0x000983ff) list_medium_line_t4_g4_g2

0x346f,	// (0x0009840b) list_medium_line_t4_g4_g3_ParamLimits

0x346f,	// (0x0009840b) list_medium_line_t4_g4_g3

0x1fc2,	// (0x00096f5e) list_medium_line_t4_g4_g4_ParamLimits

0x1fc2,	// (0x00096f5e) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x000a42d2) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x000a42d2) list_medium_line_t4_g4_g

0x347b,	// (0x00098417) list_medium_line_t4_g4_t1_ParamLimits

0x347b,	// (0x00098417) list_medium_line_t4_g4_t1

0x3490,	// (0x0009842c) list_medium_line_t4_g4_t2_ParamLimits

0x3490,	// (0x0009842c) list_medium_line_t4_g4_t2

0x34a5,	// (0x00098441) list_medium_line_t4_g4_t3_ParamLimits

0x34a5,	// (0x00098441) list_medium_line_t4_g4_t3

0x1ff5,	// (0x00096f91) list_medium_line_t4_g4_t4_ParamLimits

0x1ff5,	// (0x00096f91) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x000a42db) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x000a42db) list_medium_line_t4_g4_t

0x35bb,	// (0x00098557) chi_dic_find_pane_g1

0x450e,	// (0x000994aa) main_tport_pane

0x6ef7,	// (0x0009be93) list_medium_line_plain_t1

0x6fd7,	// (0x0009bf73) list_medium_line_t2_g2_g1_ParamLimits

0x6fd7,	// (0x0009bf73) list_medium_line_t2_g2_g1

0x6fe3,	// (0x0009bf7f) list_medium_line_t2_g2_g2_ParamLimits

0x6fe3,	// (0x0009bf7f) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x000a499c) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x000a499c) list_medium_line_t2_g2_g

0x6fef,	// (0x0009bf8b) list_medium_line_t2_g2_t1_ParamLimits

0x6fef,	// (0x0009bf8b) list_medium_line_t2_g2_t1

0x7006,	// (0x0009bfa2) list_medium_line_t2_g2_t2_ParamLimits

0x7006,	// (0x0009bfa2) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x000a49a1) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x000a49a1) list_medium_line_t2_g2_t

0xd06d,	// (0x000a2009) aid_sp_fs_list_icon_a_sm

0xf0a4,	// (0x000a4040) aid_sp_fs_list_icon_d

0xd075,	// (0x000a2011) aid_sp_fs_text_primary

0xd07e,	// (0x000a201a) aid_sp_fs_text_secondary

0x7690,	// (0x0009c62c) list_medium_line

0x7690,	// (0x0009c62c) list_medium_line_g2

0x7690,	// (0x0009c62c) list_medium_line_g3

0x7690,	// (0x0009c62c) list_medium_line_plain

0x7690,	// (0x0009c62c) list_medium_line_plain_t2

0x7690,	// (0x0009c62c) list_medium_line_plain_t3

0x7690,	// (0x0009c62c) list_medium_line_right_icon

0x7690,	// (0x0009c62c) list_medium_line_right_iconx2

0x7690,	// (0x0009c62c) list_medium_line_t2

0x7690,	// (0x0009c62c) list_medium_line_t2_g2

0x7690,	// (0x0009c62c) list_medium_line_t2_g3

0x7690,	// (0x0009c62c) list_medium_line_t2_right_icon

0x7690,	// (0x0009c62c) list_medium_line_t2_right_iconx2

0x7690,	// (0x0009c62c) list_medium_line_t3

0x7690,	// (0x0009c62c) list_medium_line_t3_g2

0x7690,	// (0x0009c62c) list_medium_line_t3_g3

0x7690,	// (0x0009c62c) list_medium_line_t3_right_iconx2

0x7699,	// (0x0009c635) list_medium_line_t4_g4

0xf0ac,	// (0x000a4048) list_medium_line_x2

0xf0ac,	// (0x000a4048) list_medium_line_x2_t2_g2

0xf0ac,	// (0x000a4048) list_medium_line_x2_t2_g3

0xf0ac,	// (0x000a4048) list_medium_line_x2_t2_g4

0xf0ac,	// (0x000a4048) list_medium_line_x2_t3

0xf0ac,	// (0x000a4048) list_medium_line_x2_t3_g2

0xf0ac,	// (0x000a4048) list_medium_line_x2_t3_g3

0xf0ac,	// (0x000a4048) list_medium_line_x2_t3_g4

0xf0ac,	// (0x000a4048) list_medium_line_x2_t4_g2

0xf0ac,	// (0x000a4048) list_medium_line_x2_t4_g4

0x76a2,	// (0x0009c63e) list_medium_line_x3

0x76a2,	// (0x0009c63e) list_medium_line_x3_t4

0x76a2,	// (0x0009c63e) list_medium_line_x3_t4_g4

0x7699,	// (0x0009c635) list_medium_line_x4_t4

0x7699,	// (0x0009c635) list_medium_line_x4_t4_g7

0x7699,	// (0x0009c635) list_medium_line_x4_t5

0x76ab,	// (0x0009c647) list_single_fs_dyc_pane_ParamLimits

0x76ab,	// (0x0009c647) list_single_fs_dyc_pane

0x1faa,	// (0x00096f46) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1faa,	// (0x00096f46) list_medium_line_x4_t4_g7_g1

0x7e1e,	// (0x0009cdba) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7e1e,	// (0x0009cdba) list_medium_line_x4_t4_g7_g2

0x7e2a,	// (0x0009cdc6) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7e2a,	// (0x0009cdc6) list_medium_line_x4_t4_g7_g3

0x7e39,	// (0x0009cdd5) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7e39,	// (0x0009cdd5) list_medium_line_x4_t4_g7_g4

0x7e45,	// (0x0009cde1) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7e45,	// (0x0009cde1) list_medium_line_x4_t4_g7_g5

0x7e54,	// (0x0009cdf0) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7e54,	// (0x0009cdf0) list_medium_line_x4_t4_g7_g6

0x7e63,	// (0x0009cdff) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7e63,	// (0x0009cdff) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x000a4b6c) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x000a4b6c) list_medium_line_x4_t4_g7_g

0x7e6f,	// (0x0009ce0b) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7e6f,	// (0x0009ce0b) list_medium_line_x4_t4_g7_t1

0x7e84,	// (0x0009ce20) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7e84,	// (0x0009ce20) list_medium_line_x4_t4_g7_t2

0x7e99,	// (0x0009ce35) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7e99,	// (0x0009ce35) list_medium_line_x4_t4_g7_t3

0x7eae,	// (0x0009ce4a) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7eae,	// (0x0009ce4a) list_medium_line_x4_t4_g7_t4

0x7ec0,	// (0x0009ce5c) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7ec0,	// (0x0009ce5c) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x000a4b7b) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x000a4b7b) list_medium_line_x4_t4_g7_t

0x7ed2,	// (0x0009ce6e) list_single_dyc_row_pane_ParamLimits

0x7ed2,	// (0x0009ce6e) list_single_dyc_row_pane

0x855f,	// (0x0009d4fb) call5_gesture_pane_ParamLimits

0x855f,	// (0x0009d4fb) call5_gesture_pane

0x8593,	// (0x0009d52f) call5_windows_pane_ParamLimits

0x8593,	// (0x0009d52f) call5_windows_pane

0x8605,	// (0x0009d5a1) call5_swipe_1_pane_cp_ParamLimits

0x8605,	// (0x0009d5a1) call5_swipe_1_pane_cp

0x8611,	// (0x0009d5ad) call5_swipe_2_pane_cp_ParamLimits

0x8611,	// (0x0009d5ad) call5_swipe_2_pane_cp

0x9d73,	// (0x0009ed0f) call5_image_pane_cp

0x861d,	// (0x0009d5b9) popup_call5_audio_first_window_cp_ParamLimits

0x861d,	// (0x0009d5b9) popup_call5_audio_first_window_cp

0xdb4f,	// (0x000a2aeb) call5_swipe_1_pane_g1_cp_ParamLimits

0xdb4f,	// (0x000a2aeb) call5_swipe_1_pane_g1_cp

0xdb8f,	// (0x000a2b2b) call5_swipe_1_pane_g2_cp

0xdb68,	// (0x000a2b04) call5_swipe_1_pane_t1_cp_ParamLimits

0xdb68,	// (0x000a2b04) call5_swipe_1_pane_t1_cp

0xdb4f,	// (0x000a2aeb) call5_swipe_2_pane_g1_cp_ParamLimits

0xdb4f,	// (0x000a2aeb) call5_swipe_2_pane_g1_cp

0xdb97,	// (0x000a2b33) call5_swipe_2_pane_g2_cp

0xdb9f,	// (0x000a2b3b) call5_swipe_2_pane_t1_cp_ParamLimits

0xdb9f,	// (0x000a2b3b) call5_swipe_2_pane_t1_cp

0xb97e,	// (0x000a091a) main_sp_fs_email_pane

0xdbb4,	// (0x000a2b50) main_sp_fs_listscroll_pane_te

0x862b,	// (0x0009d5c7) popup_sp_fs_action_menu_pane_ParamLimits

0x862b,	// (0x0009d5c7) popup_sp_fs_action_menu_pane

0xc002,	// (0x000a0f9e) bg_sp_fs_ctrlbar_pane_g1

0xc630,	// (0x000a15cc) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc642,	// (0x000a15de) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc639,	// (0x000a15d5) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc002,	// (0x000a0f9e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x000a4c69) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbdd2,	// (0x000a0d6e) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbdd2,	// (0x000a0d6e) bg_sp_fs_ctrlbar_ddmenu_pane

0xdbbd,	// (0x000a2b59) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xdbbd,	// (0x000a2b59) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xdbc9,	// (0x000a2b65) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xdbc9,	// (0x000a2b65) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x000a4c72) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x000a4c72) main_sp_fs_ctrlbar_ddmenu_pane_g

0xdbd5,	// (0x000a2b71) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xdbd5,	// (0x000a2b71) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x866f,	// (0x0009d60b) list_medium_line_t2_right_icon_g1

0x8677,	// (0x0009d613) list_medium_line_t2_right_icon_t1

0x8687,	// (0x0009d623) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x000a4c77) list_medium_line_t2_right_icon_t

0xbbe5,	// (0x000a0b81) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbbe5,	// (0x000a0b81) bg_sp_fs_ctrlbar_pane

0x86ec,	// (0x0009d688) main_sp_fs_ctrlbar_button_pane_cp01

0x86f4,	// (0x0009d690) main_sp_fs_ctrlbar_ddmenu_pane

0xdc27,	// (0x000a2bc3) main_sp_fs_ctrlbar_pane_g1

0xdc33,	// (0x000a2bcf) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x000a4c7c) main_sp_fs_ctrlbar_pane_g

0xdc3f,	// (0x000a2bdb) main_sp_fs_ctrlbar_pane_t1

0x86fe,	// (0x0009d69a) main_sp_fs_ctrlbar_pane

0x8714,	// (0x0009d6b0) main_sp_fs_listscroll_pane_te_cp01

0x8725,	// (0x0009d6c1) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8725,	// (0x0009d6c1) popup_sp_fs_action_menu_pane_cp01

0xb97e,	// (0x000a091a) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb97e,	// (0x000a091a) bg_sp_fs_highlight_list_pane_cp01

0xdc6f,	// (0x000a2c0b) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdc6f,	// (0x000a2c0b) sp_fs_action_menu_list_gene_pane_g1

0xdc7e,	// (0x000a2c1a) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdc7e,	// (0x000a2c1a) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x000a4c86) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x000a4c86) sp_fs_action_menu_list_gene_pane_g

0xdc8b,	// (0x000a2c27) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdc8b,	// (0x000a2c27) sp_fs_action_menu_list_gene_pane_t1

0xdca3,	// (0x000a2c3f) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdca3,	// (0x000a2c3f) sp_fs_action_menu_list_gene_pane

0xdcc4,	// (0x000a2c60) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdcc4,	// (0x000a2c60) popup_sp_fs_action_menu_bg_pane

0xdcd2,	// (0x000a2c6e) sp_fs_action_menu_list_pane_ParamLimits

0xdcd2,	// (0x000a2c6e) sp_fs_action_menu_list_pane

0x874f,	// (0x0009d6eb) sp_fs_scroll_pane_cp01_ParamLimits

0x874f,	// (0x0009d6eb) sp_fs_scroll_pane_cp01

0x8775,	// (0x0009d711) list_medium_line_plain_t2_t1

0x8785,	// (0x0009d721) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x000a4c8b) list_medium_line_plain_t2_t

0x8793,	// (0x0009d72f) list_medium_line_plain_t3_t1

0x87a3,	// (0x0009d73f) list_medium_line_plain_t3_t2

0x87b1,	// (0x0009d74d) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x000a4c90) list_medium_line_plain_t3_t

0x1faa,	// (0x00096f46) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1faa,	// (0x00096f46) list_medium_line_x2_t2_g2_g1

0x1fc2,	// (0x00096f5e) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1fc2,	// (0x00096f5e) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x000a41e2) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x000a41e2) list_medium_line_x2_t2_g2_g

0x347b,	// (0x00098417) list_medium_line_x2_t2_g2_t1_ParamLimits

0x347b,	// (0x00098417) list_medium_line_x2_t2_g2_t1

0x1ff5,	// (0x00096f91) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1ff5,	// (0x00096f91) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x000a4c97) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x000a4c97) list_medium_line_x2_t2_g2_t

0x1faa,	// (0x00096f46) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1faa,	// (0x00096f46) list_medium_line_x2_t4_g2_g1

0x87bf,	// (0x0009d75b) list_medium_line_x2_t4_g2_g2_ParamLimits

0x87bf,	// (0x0009d75b) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x000a4c9c) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x000a4c9c) list_medium_line_x2_t4_g2_g

0x87d1,	// (0x0009d76d) list_medium_line_x2_t4_g2_t1_ParamLimits

0x87d1,	// (0x0009d76d) list_medium_line_x2_t4_g2_t1

0x87eb,	// (0x0009d787) list_medium_line_x2_t4_g2_t2_ParamLimits

0x87eb,	// (0x0009d787) list_medium_line_x2_t4_g2_t2

0x8800,	// (0x0009d79c) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8800,	// (0x0009d79c) list_medium_line_x2_t4_g2_t3

0x1ff5,	// (0x00096f91) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1ff5,	// (0x00096f91) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x000a4ca1) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x000a4ca1) list_medium_line_x2_t4_g2_t

0x8815,	// (0x0009d7b1) list_medium_line_t3_right_iconx2_g1

0x866f,	// (0x0009d60b) list_medium_line_t3_right_iconx2_g2

0x881d,	// (0x0009d7b9) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x000a4caa) list_medium_line_t3_right_iconx2_g

0x8825,	// (0x0009d7c1) list_medium_line_t3_right_iconx2_t1

0x8835,	// (0x0009d7d1) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x000a4cb1) list_medium_line_t3_right_iconx2_t

0x1faa,	// (0x00096f46) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1faa,	// (0x00096f46) list_medium_line_x3_t4_g4_g1

0x1fb6,	// (0x00096f52) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1fb6,	// (0x00096f52) list_medium_line_x3_t4_g4_g2

0x3463,	// (0x000983ff) list_medium_line_x3_t4_g4_g3_ParamLimits

0x3463,	// (0x000983ff) list_medium_line_x3_t4_g4_g3

0x8843,	// (0x0009d7df) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8843,	// (0x0009d7df) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x000a4cb6) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x000a4cb6) list_medium_line_x3_t4_g4_g

0x884f,	// (0x0009d7eb) list_medium_line_x3_t4_g4_t1_ParamLimits

0x884f,	// (0x0009d7eb) list_medium_line_x3_t4_g4_t1

0x8866,	// (0x0009d802) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8866,	// (0x0009d802) list_medium_line_x3_t4_g4_t2

0x3490,	// (0x0009842c) list_medium_line_x3_t4_g4_t3_ParamLimits

0x3490,	// (0x0009842c) list_medium_line_x3_t4_g4_t3

0x887b,	// (0x0009d817) list_medium_line_x3_t4_g4_t4_ParamLimits

0x887b,	// (0x0009d817) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x000a4cbf) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x000a4cbf) list_medium_line_x3_t4_g4_t

0x8898,	// (0x0009d834) list_single_dyc_row_text_pane_t1_ParamLimits

0x8898,	// (0x0009d834) list_single_dyc_row_text_pane_t1

0x88cf,	// (0x0009d86b) list_single_dyc_row_text_pane_t2_ParamLimits

0x88cf,	// (0x0009d86b) list_single_dyc_row_text_pane_t2

0xdcf4,	// (0x000a2c90) list_single_dyc_row_text_pane_t3_ParamLimits

0xdcf4,	// (0x000a2c90) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x000a4cc8) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x000a4cc8) list_single_dyc_row_text_pane_t

0xdd18,	// (0x000a2cb4) list_single_dyc_row_pane_g1_ParamLimits

0xdd18,	// (0x000a2cb4) list_single_dyc_row_pane_g1

0xdd24,	// (0x000a2cc0) list_single_dyc_row_pane_g2_ParamLimits

0xdd24,	// (0x000a2cc0) list_single_dyc_row_pane_g2

0xdd30,	// (0x000a2ccc) list_single_dyc_row_pane_g3_ParamLimits

0xdd30,	// (0x000a2ccc) list_single_dyc_row_pane_g3

0xdd3c,	// (0x000a2cd8) list_single_dyc_row_pane_g4_ParamLimits

0xdd3c,	// (0x000a2cd8) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x000a4cd5) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x000a4cd5) list_single_dyc_row_pane_g

0xdd48,	// (0x000a2ce4) list_single_dyc_row_text_pane_ParamLimits

0xdd48,	// (0x000a2ce4) list_single_dyc_row_text_pane

0xe792,	// (0x000a372e) bg_sp_fs_scroll_pane

0xdd67,	// (0x000a2d03) thumb_sp_fs_scroll_pane

0x6fd7,	// (0x0009bf73) list_medium_line_g1_ParamLimits

0x6fd7,	// (0x0009bf73) list_medium_line_g1

0x89f2,	// (0x0009d98e) list_medium_line_t1_ParamLimits

0x89f2,	// (0x0009d98e) list_medium_line_t1

0x1faa,	// (0x00096f46) list_medium_line_x2_g1_ParamLimits

0x1faa,	// (0x00096f46) list_medium_line_x2_g1

0x1fb6,	// (0x00096f52) list_medium_line_x2_g2_ParamLimits

0x1fb6,	// (0x00096f52) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x000a4cde) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x000a4cde) list_medium_line_x2_g

0xdd70,	// (0x000a2d0c) list_medium_line_x2_t1_ParamLimits

0xdd70,	// (0x000a2d0c) list_medium_line_x2_t1

0x1faa,	// (0x00096f46) list_medium_line_x3_g1_ParamLimits

0x1faa,	// (0x00096f46) list_medium_line_x3_g1

0x1fb6,	// (0x00096f52) list_medium_line_x3_g2_ParamLimits

0x1fb6,	// (0x00096f52) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x000a4cde) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x000a4cde) list_medium_line_x3_g

0xdd70,	// (0x000a2d0c) list_medium_line_x3_t1_ParamLimits

0xdd70,	// (0x000a2d0c) list_medium_line_x3_t1

0xdd86,	// (0x000a2d22) thumb_sp_fs_scroll_pane_g1

0xdd8f,	// (0x000a2d2b) thumb_sp_fs_scroll_pane_g2

0xdd98,	// (0x000a2d34) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000a4ce3) thumb_sp_fs_scroll_pane_g

0xdd86,	// (0x000a2d22) bg_sp_fs_scroll_pane_g1

0xdd8f,	// (0x000a2d2b) bg_sp_fs_scroll_pane_g2

0xdd98,	// (0x000a2d34) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000a4ce3) bg_sp_fs_scroll_pane_g

0x1faa,	// (0x00096f46) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1faa,	// (0x00096f46) list_medium_line_x2_t3_g4_g1

0x204f,	// (0x00096feb) list_medium_line_x2_t3_g4_g2_ParamLimits

0x204f,	// (0x00096feb) list_medium_line_x2_t3_g4_g2

0x1fb6,	// (0x00096f52) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1fb6,	// (0x00096f52) list_medium_line_x2_t3_g4_g3

0x1fc2,	// (0x00096f5e) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1fc2,	// (0x00096f5e) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000a425e) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000a425e) list_medium_line_x2_t3_g4_g

0x8a07,	// (0x0009d9a3) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8a07,	// (0x0009d9a3) list_medium_line_x2_t3_g4_t1

0x8a1d,	// (0x0009d9b9) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8a1d,	// (0x0009d9b9) list_medium_line_x2_t3_g4_t2

0x1ff5,	// (0x00096f91) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1ff5,	// (0x00096f91) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x000a4cea) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x000a4cea) list_medium_line_x2_t3_g4_t

0x6fd7,	// (0x0009bf73) list_medium_line_g2_g1_ParamLimits

0x6fd7,	// (0x0009bf73) list_medium_line_g2_g1

0x6fe3,	// (0x0009bf7f) list_medium_line_g2_g2_ParamLimits

0x6fe3,	// (0x0009bf7f) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x000a499c) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x000a499c) list_medium_line_g2_g

0x8a37,	// (0x0009d9d3) list_medium_line_g2_t1_ParamLimits

0x8a37,	// (0x0009d9d3) list_medium_line_g2_t1

0x6fd7,	// (0x0009bf73) list_medium_line_t3_g2_g1_ParamLimits

0x6fd7,	// (0x0009bf73) list_medium_line_t3_g2_g1

0x6fe3,	// (0x0009bf7f) list_medium_line_t3_g2_g2_ParamLimits

0x6fe3,	// (0x0009bf7f) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x000a499c) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x000a499c) list_medium_line_t3_g2_g

0x8a4c,	// (0x0009d9e8) list_medium_line_t3_g2_t1_ParamLimits

0x8a4c,	// (0x0009d9e8) list_medium_line_t3_g2_t1

0x8a63,	// (0x0009d9ff) list_medium_line_t3_g2_t2_ParamLimits

0x8a63,	// (0x0009d9ff) list_medium_line_t3_g2_t2

0x8a78,	// (0x0009da14) list_medium_line_t3_g2_t3_ParamLimits

0x8a78,	// (0x0009da14) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x000a4cf1) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x000a4cf1) list_medium_line_t3_g2_t

0x866f,	// (0x0009d60b) list_medium_line_right_icon_g1

0x8a8d,	// (0x0009da29) list_medium_line_right_icon_t1

0x6fd7,	// (0x0009bf73) list_medium_line_t2_g1_ParamLimits

0x6fd7,	// (0x0009bf73) list_medium_line_t2_g1

0x8a9b,	// (0x0009da37) list_medium_line_t2_t1_ParamLimits

0x8a9b,	// (0x0009da37) list_medium_line_t2_t1

0x8ab5,	// (0x0009da51) list_medium_line_t2_t2_ParamLimits

0x8ab5,	// (0x0009da51) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x000a4cf8) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x000a4cf8) list_medium_line_t2_t

0x6fd7,	// (0x0009bf73) list_medium_line_t3_g1_ParamLimits

0x6fd7,	// (0x0009bf73) list_medium_line_t3_g1

0x8aca,	// (0x0009da66) list_medium_line_t3_t1_ParamLimits

0x8aca,	// (0x0009da66) list_medium_line_t3_t1

0x8ae4,	// (0x0009da80) list_medium_line_t3_t2_ParamLimits

0x8ae4,	// (0x0009da80) list_medium_line_t3_t2

0x8af9,	// (0x0009da95) list_medium_line_t3_t3_ParamLimits

0x8af9,	// (0x0009da95) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x000a4cfd) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x000a4cfd) list_medium_line_t3_t

0x6fd7,	// (0x0009bf73) list_medium_line_g3_g1_ParamLimits

0x6fd7,	// (0x0009bf73) list_medium_line_g3_g1

0x8b0e,	// (0x0009daaa) list_medium_line_g3_g2_ParamLimits

0x8b0e,	// (0x0009daaa) list_medium_line_g3_g2

0x6fe3,	// (0x0009bf7f) list_medium_line_g3_g3_ParamLimits

0x6fe3,	// (0x0009bf7f) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x000a4d04) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x000a4d04) list_medium_line_g3_g

0x8b1a,	// (0x0009dab6) list_medium_line_g3_t1_ParamLimits

0x8b1a,	// (0x0009dab6) list_medium_line_g3_t1

0x6fd7,	// (0x0009bf73) list_medium_line_t2_g3_g1_ParamLimits

0x6fd7,	// (0x0009bf73) list_medium_line_t2_g3_g1

0x8b0e,	// (0x0009daaa) list_medium_line_t2_g3_g2_ParamLimits

0x8b0e,	// (0x0009daaa) list_medium_line_t2_g3_g2

0x6fe3,	// (0x0009bf7f) list_medium_line_t2_g3_g3_ParamLimits

0x6fe3,	// (0x0009bf7f) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x000a4d04) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x000a4d04) list_medium_line_t2_g3_g

0x8b2f,	// (0x0009dacb) list_medium_line_t2_g3_t1_ParamLimits

0x8b2f,	// (0x0009dacb) list_medium_line_t2_g3_t1

0x8b46,	// (0x0009dae2) list_medium_line_t2_g3_t2_ParamLimits

0x8b46,	// (0x0009dae2) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x000a4d0b) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x000a4d0b) list_medium_line_t2_g3_t

0x6fd7,	// (0x0009bf73) list_medium_line_t3_g3_g1_ParamLimits

0x6fd7,	// (0x0009bf73) list_medium_line_t3_g3_g1

0x8b0e,	// (0x0009daaa) list_medium_line_t3_g3_g2_ParamLimits

0x8b0e,	// (0x0009daaa) list_medium_line_t3_g3_g2

0x6fe3,	// (0x0009bf7f) list_medium_line_t3_g3_g3_ParamLimits

0x6fe3,	// (0x0009bf7f) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x000a4d04) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x000a4d04) list_medium_line_t3_g3_g

0x8b5b,	// (0x0009daf7) list_medium_line_t3_g3_t1_ParamLimits

0x8b5b,	// (0x0009daf7) list_medium_line_t3_g3_t1

0x8b74,	// (0x0009db10) list_medium_line_t3_g3_t2_ParamLimits

0x8b74,	// (0x0009db10) list_medium_line_t3_g3_t2

0x8b8a,	// (0x0009db26) list_medium_line_t3_g3_t3_ParamLimits

0x8b8a,	// (0x0009db26) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x000a4d10) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x000a4d10) list_medium_line_t3_g3_t

0x8815,	// (0x0009d7b1) list_medium_line_right_iconx2_g1

0x866f,	// (0x0009d60b) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000a4d17) list_medium_line_right_iconx2_g

0x8ba0,	// (0x0009db3c) list_medium_line_right_iconx2_t1

0x8815,	// (0x0009d7b1) list_medium_line_t2_right_iconx2_g1

0x866f,	// (0x0009d60b) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000a4d17) list_medium_line_t2_right_iconx2_g

0x8bae,	// (0x0009db4a) list_medium_line_t2_right_iconx2_t1

0x8bbe,	// (0x0009db5a) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x000a4d1c) list_medium_line_t2_right_iconx2_t

0x8bcc,	// (0x0009db68) list_medium_line_x4_t4_t1

0x8bda,	// (0x0009db76) list_medium_line_x4_t4_t2

0x8bea,	// (0x0009db86) list_medium_line_x4_t4_t3

0x8bfa,	// (0x0009db96) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x000a4d21) list_medium_line_x4_t4_t

0x8c34,	// (0x0009dbd0) tport_appsw_pane_ParamLimits

0x8c34,	// (0x0009dbd0) tport_appsw_pane

0x8c42,	// (0x0009dbde) tport_contact_pane_ParamLimits

0x8c42,	// (0x0009dbde) tport_contact_pane

0x8c52,	// (0x0009dbee) tport_listscroll_pane_ParamLimits

0x8c52,	// (0x0009dbee) tport_listscroll_pane

0x8c62,	// (0x0009dbfe) cell_tport_appsw_pane_ParamLimits

0x8c62,	// (0x0009dbfe) cell_tport_appsw_pane

0xc322,	// (0x000a12be) tport_appsw_pane_g1_ParamLimits

0xc322,	// (0x000a12be) tport_appsw_pane_g1

0xdda1,	// (0x000a2d3d) tport_contact_pane_g1

0xd65e,	// (0x000a25fa) tport_contact_pane_t1

0xddaa,	// (0x000a2d46) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x000a4d2a) tport_contact_pane_t

0xddb8,	// (0x000a2d54) list_tport_pane

0xddc1,	// (0x000a2d5d) scroll_pane_cp_030

0x8c95,	// (0x0009dc31) cell_tport_appsw_pane_g1

0x8ca5,	// (0x0009dc41) cell_tport_appsw_pane_t1

0x8cb3,	// (0x0009dc4f) grid_highlight_pane_cp019

0x8cbb,	// (0x0009dc57) list_tport_double_graphic_pane_ParamLimits

0x8cbb,	// (0x0009dc57) list_tport_double_graphic_pane

0xb97e,	// (0x000a091a) list_highlight_pane_cp023_ParamLimits

0xb97e,	// (0x000a091a) list_highlight_pane_cp023

0x8ccc,	// (0x0009dc68) list_tport_double_graphic_pane_g1_ParamLimits

0x8ccc,	// (0x0009dc68) list_tport_double_graphic_pane_g1

0x8cd9,	// (0x0009dc75) list_tport_double_graphic_pane_t1_ParamLimits

0x8cd9,	// (0x0009dc75) list_tport_double_graphic_pane_t1

0x8cee,	// (0x0009dc8a) list_tport_double_graphic_pane_t2_ParamLimits

0x8cee,	// (0x0009dc8a) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x000a4d36) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x000a4d36) list_tport_double_graphic_pane_t

0xe792,	// (0x000a372e) main_cale_note_pane

0x67a9,	// (0x0009b745) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x67a9,	// (0x0009b745) cell_vitu2_function_top_wide_pane_cp01

0x8234,	// (0x0009d1d0) wait_bar_pane_cp05_ParamLimits

0xb97e,	// (0x000a091a) listscroll_cmail_pane

0xddca,	// (0x000a2d66) list_cmail_pane

0x8d00,	// (0x0009dc9c) list_cmail_body_pane

0x8d20,	// (0x0009dcbc) list_single_cmail_header_caption_pane

0x8d4c,	// (0x0009dce8) list_single_cmail_header_detail_pane_ParamLimits

0x8d4c,	// (0x0009dce8) list_single_cmail_header_detail_pane

0xddda,	// (0x000a2d76) list_single_cmail_header_caption_pane_t1

0x8d82,	// (0x0009dd1e) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8d82,	// (0x0009dd1e) list_single_cmail_header_detail_pane_g1

0xf0b5,	// (0x000a4051) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf0b5,	// (0x000a4051) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x000a4d3b) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x000a4d3b) list_single_cmail_header_detail_pane_g

0xddfe,	// (0x000a2d9a) list_single_cmail_header_detail_pane_t1_ParamLimits

0xddfe,	// (0x000a2d9a) list_single_cmail_header_detail_pane_t1

0xde5e,	// (0x000a2dfa) list_single_cmail_header_editor_pane_bg_ParamLimits

0xde5e,	// (0x000a2dfa) list_single_cmail_header_editor_pane_bg

0xd7ff,	// (0x000a279b) list_cmail_body_pane_g1

0xde75,	// (0x000a2e11) list_cmail_body_pane_t1

0xcaea,	// (0x000a1a86) list_single_cmail_header_editor_pane_bg_g1

0x9fcc,	// (0x0009ef68) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcafa,	// (0x000a1a96) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcaf2,	// (0x000a1a8e) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcd32,	// (0x000a1cce) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcb1a,	// (0x000a1ab6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcb0a,	// (0x000a1aa6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcb12,	// (0x000a1aae) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x9fac,	// (0x0009ef48) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8d98,	// (0x0009dd34) calenote_gesture_pane_ParamLimits

0x8d98,	// (0x0009dd34) calenote_gesture_pane

0x8db2,	// (0x0009dd4e) calenote_window_pane_ParamLimits

0x8db2,	// (0x0009dd4e) calenote_window_pane

0xde83,	// (0x000a2e1f) popup_note_window_cp01

0x8dca,	// (0x0009dd66) calenote_swipe_1_pane_ParamLimits

0x8dca,	// (0x0009dd66) calenote_swipe_1_pane

0x8611,	// (0x0009d5ad) calenote_swipe_2_pane_ParamLimits

0x8611,	// (0x0009d5ad) calenote_swipe_2_pane

0xdb4f,	// (0x000a2aeb) calenote_swipe_1_pane_g1_ParamLimits

0xdb4f,	// (0x000a2aeb) calenote_swipe_1_pane_g1

0xdb5c,	// (0x000a2af8) calenote_swipe_1_pane_g2_ParamLimits

0xdb5c,	// (0x000a2af8) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x000a4c5f) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x000a4c5f) calenote_swipe_1_pane_g

0xde95,	// (0x000a2e31) calenote_swipe_1_pane_t1_ParamLimits

0xde95,	// (0x000a2e31) calenote_swipe_1_pane_t1

0xdb4f,	// (0x000a2aeb) calenote_swipe_2_pane_g1_ParamLimits

0xdb4f,	// (0x000a2aeb) calenote_swipe_2_pane_g1

0xdeb4,	// (0x000a2e50) calenote_swipe_2_pane_g2_ParamLimits

0xdeb4,	// (0x000a2e50) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x000a4d47) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x000a4d47) calenote_swipe_2_pane_g

0xdec0,	// (0x000a2e5c) calenote_swipe_2_pane_t1_ParamLimits

0xdec0,	// (0x000a2e5c) calenote_swipe_2_pane_t1

0xe792,	// (0x000a372e) main_mup_navstr_pane

0x54fa,	// (0x0009a496) main_mup3_pane_t7_ParamLimits

0x54fa,	// (0x0009a496) main_mup3_pane_t7

0x5eff,	// (0x0009ae9b) main_mp4_pane_g6_ParamLimits

0x5eff,	// (0x0009ae9b) main_mp4_pane_g6

0x627f,	// (0x0009b21b) main_image3_pane_t4_ParamLimits

0x627f,	// (0x0009b21b) main_image3_pane_t4

0x8ddd,	// (0x0009dd79) popup_navstr_preview_pane_ParamLimits

0x8ddd,	// (0x0009dd79) popup_navstr_preview_pane

0x8de9,	// (0x0009dd85) scroll_navstr_pane_ParamLimits

0x8de9,	// (0x0009dd85) scroll_navstr_pane

0xe792,	// (0x000a372e) bg_popup_preview_window_pane_cp04

0xdee7,	// (0x000a2e83) popup_navstr_preview_pane_t1

0x8df5,	// (0x0009dd91) scroll_navstr_pane_g1_ParamLimits

0x8df5,	// (0x0009dd91) scroll_navstr_pane_g1

0x8e02,	// (0x0009dd9e) scroll_navstr_pane_t1_ParamLimits

0x8e02,	// (0x0009dd9e) scroll_navstr_pane_t1

0xde8c,	// (0x000a2e28) bg_button_pane_cp014

0xde8c,	// (0x000a2e28) bg_button_pane_cp030

0x8505,	// (0x0009d4a1) list_double_fisheye_pane_g4_ParamLimits

0x8505,	// (0x0009d4a1) list_double_fisheye_pane_g4

0x8511,	// (0x0009d4ad) list_double_fisheye_pane_g5_ParamLimits

0x8511,	// (0x0009d4ad) list_double_fisheye_pane_g5

0xbe8f,	// (0x000a0e2b) sp_fs_scroll_pane_cp03

0xdc27,	// (0x000a2bc3) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdc33,	// (0x000a2bcf) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x000a4c7c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xdc3f,	// (0x000a2bdb) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xddd2,	// (0x000a2d6e) sp_fs_scroll_pane_cp02

0x9cb2,	// (0x0009ec4e) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9cb2,	// (0x0009ec4e) popup_sp_fs_calendar_preview_list_single_pane

0xe792,	// (0x000a372e) main_cam6_pano_pane

0x44f2,	// (0x0009948e) main_mup3_pane_ParamLimits

0xe792,	// (0x000a372e) main_phacti_pane

0x8109,	// (0x0009d0a5) bg_button_pane_cp11

0x8121,	// (0x0009d0bd) main_mobtv_info_pane_g2_ParamLimits

0x8121,	// (0x0009d0bd) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x000a4bdc) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x000a4bdc) main_mobtv_info_pane_g

0x82d3,	// (0x0009d26f) sc_clock_pane_t5_ParamLimits

0x82d3,	// (0x0009d26f) sc_clock_pane_t5

0x8376,	// (0x0009d312) main_radioblah_pane_g1_ParamLimits

0xda9b,	// (0x000a2a37) main_radioblah_pane_t3_ParamLimits

0xda9b,	// (0x000a2a37) main_radioblah_pane_t3

0xdab3,	// (0x000a2a4f) main_radioblah_pane_t4_ParamLimits

0xdab3,	// (0x000a2a4f) main_radioblah_pane_t4

0x8394,	// (0x0009d330) main_radioblah_text_pane_ParamLimits

0x8394,	// (0x0009d330) main_radioblah_text_pane

0x83a1,	// (0x0009d33d) main_radioblah_info_pane_g1_ParamLimits

0x8436,	// (0x0009d3d2) main_radioblah_info_pane_t4_ParamLimits

0x8436,	// (0x0009d3d2) main_radioblah_info_pane_t4

0xb97e,	// (0x000a091a) main_sp_fs_calendar_pane

0x8e14,	// (0x0009ddb0) main_phacti_pane_g1

0x8e1c,	// (0x0009ddb8) phacti_note_pane_ParamLimits

0x8e1c,	// (0x0009ddb8) phacti_note_pane

0xdefe,	// (0x000a2e9a) phacti_term_pane_ParamLimits

0xdefe,	// (0x000a2e9a) phacti_term_pane

0xdf13,	// (0x000a2eaf) phacti_note_pane_t1_ParamLimits

0xdf13,	// (0x000a2eaf) phacti_note_pane_t1

0xdf2a,	// (0x000a2ec6) phacti_term_pane_g1

0xdf32,	// (0x000a2ece) phacti_term_pane_t1_ParamLimits

0xdf32,	// (0x000a2ece) phacti_term_pane_t1

0xdf5c,	// (0x000a2ef8) popup_sp_fs_calendar_preview_list_single_pane_g1

0x9dcd,	// (0x0009ed69) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x000a4d51) popup_sp_fs_calendar_preview_list_single_pane_g

0xdf64,	// (0x000a2f00) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xdf64,	// (0x000a2f00) popup_sp_fs_calendar_preview_list_single_pane_t1

0xdf79,	// (0x000a2f15) aid_popup_sp_fs_bg_corner_pane

0xc002,	// (0x000a0f9e) popup_sp_fs_calendar_preview_bg_pane_g1

0xe792,	// (0x000a372e) popup_sp_fs_calendar_preview_bg_pane

0xdf81,	// (0x000a2f1d) popup_sp_fs_calendar_preview_list_pane

0xbbe5,	// (0x000a0b81) bg_main_sp_fs_cale_pane_ParamLimits

0xbbe5,	// (0x000a0b81) bg_main_sp_fs_cale_pane

0xdf89,	// (0x000a2f25) listscroll_cale_mrui_pane_ParamLimits

0xdf89,	// (0x000a2f25) listscroll_cale_mrui_pane

0xcb6e,	// (0x000a1b0a) listscroll_sp_fs_schedule_track_pane

0xdf9e,	// (0x000a2f3a) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xdf9e,	// (0x000a2f3a) main_sp_fs_ctrlbar_pane_cp01

0xdfb1,	// (0x000a2f4d) main_sp_fs_ribbon_pane

0xdfb9,	// (0x000a2f55) popup_sp_fs_cale_preview_window

0x8e7f,	// (0x0009de1b) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8e7f,	// (0x0009de1b) list_single_sp_fs_schedule_track_pane

0xe806,	// (0x000a37a2) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe806,	// (0x000a37a2) bg_sp_fs_highlight_list_pane_cp03

0x8ea2,	// (0x0009de3e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8ea2,	// (0x0009de3e) list_single_sp_fs_schedule_track_pane_g1

0x8eae,	// (0x0009de4a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8eae,	// (0x0009de4a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x000a4d56) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x000a4d56) list_single_sp_fs_schedule_track_pane_g

0x8eba,	// (0x0009de56) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8eba,	// (0x0009de56) list_single_sp_fs_schedule_track_pane_t1

0x8ed2,	// (0x0009de6e) sp_fs_schedule_track_pane_ParamLimits

0x8ed2,	// (0x0009de6e) sp_fs_schedule_track_pane

0xdfcb,	// (0x000a2f67) sp_fs_schedule_track_pane_g1

0xdfd3,	// (0x000a2f6f) sp_fs_schedule_track_pane_g2

0xdfdb,	// (0x000a2f77) sp_fs_schedule_track_pane_g3

0xdfe3,	// (0x000a2f7f) sp_fs_schedule_track_pane_g4

0xdfeb,	// (0x000a2f87) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x000a4d5b) sp_fs_schedule_track_pane_g

0xcaea,	// (0x000a1a86) bg_sp_fs_schedule_viewer_highlight_g1

0x9fcc,	// (0x0009ef68) bg_sp_fs_schedule_viewer_highlight_g2

0xcaf2,	// (0x000a1a8e) bg_sp_fs_schedule_viewer_highlight_g3

0xcafa,	// (0x000a1a96) bg_sp_fs_schedule_viewer_highlight_g4

0xcd32,	// (0x000a1cce) bg_sp_fs_schedule_viewer_highlight_g5

0xcb0a,	// (0x000a1aa6) bg_sp_fs_schedule_viewer_highlight_g6

0xcb12,	// (0x000a1aae) bg_sp_fs_schedule_viewer_highlight_g7

0xcb1a,	// (0x000a1ab6) bg_sp_fs_schedule_viewer_highlight_g8

0x9fac,	// (0x0009ef48) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x000a4d66) bg_sp_fs_schedule_viewer_highlight_g

0xe792,	// (0x000a372e) bg_main_sp_fs_ribbon_pane

0x8ee2,	// (0x0009de7e) main_sp_fs_ribbon_pane_g1

0xdff3,	// (0x000a2f8f) main_sp_fs_ribbon_pane_t1

0x8eeb,	// (0x0009de87) main_sp_fs_ribbon_pane_t2

0xe002,	// (0x000a2f9e) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x000a4d79) main_sp_fs_ribbon_pane_t

0xe011,	// (0x000a2fad) main_sp_fs_ribbon_scheduler_pane

0xe019,	// (0x000a2fb5) bg_main_sp_fs_ribbon_pane_g1

0xe022,	// (0x000a2fbe) bg_main_sp_fs_ribbon_pane_g2

0xe02b,	// (0x000a2fc7) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x000a4d80) bg_main_sp_fs_ribbon_pane_g

0xe033,	// (0x000a2fcf) main_sp_fs_ribbon_scheduler_pane_g1

0xe03c,	// (0x000a2fd8) main_sp_fs_ribbon_scheduler_pane_g2

0xe045,	// (0x000a2fe1) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x000a4d87) main_sp_fs_ribbon_scheduler_pane_g

0xe04e,	// (0x000a2fea) list_cale_mrui_pane

0x8efa,	// (0x0009de96) sp_fs_scroll_pane_cp07_ParamLimits

0x8efa,	// (0x0009de96) sp_fs_scroll_pane_cp07

0x8f16,	// (0x0009deb2) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8f16,	// (0x0009deb2) bg_sp_fs_schedule_viewer_highlight

0xe05b,	// (0x000a2ff7) list_single_sp_fs_schedule_track_pane_cp01

0xe063,	// (0x000a2fff) list_sp_fs_schedule_track_pane

0xe06b,	// (0x000a3007) sp_fs_scroll_pane_cp06_ParamLimits

0xe06b,	// (0x000a3007) sp_fs_scroll_pane_cp06

0xc002,	// (0x000a0f9e) bgmain_sp_fs_calendar_pane_g1

0x8f23,	// (0x0009debf) list_single_cale_mrui_pane_ParamLimits

0x8f23,	// (0x0009debf) list_single_cale_mrui_pane

0xe07d,	// (0x000a3019) list_single_cale_mrui_row_pane_ParamLimits

0xe07d,	// (0x000a3019) list_single_cale_mrui_row_pane

0xe08a,	// (0x000a3026) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe08a,	// (0x000a3026) list_single_cale_mrui_row_pane_g1

0xe0cf,	// (0x000a306b) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe0cf,	// (0x000a306b) list_single_cale_mrui_row_pane_t1

0x8f50,	// (0x0009deec) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8f50,	// (0x0009deec) list_single_cale_mrui_row_pane_t2

0xe0e1,	// (0x000a307d) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe0e1,	// (0x000a307d) list_single_cale_mrui_row_pane_t3

0xe110,	// (0x000a30ac) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe110,	// (0x000a30ac) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x000a4d95) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x000a4d95) list_single_cale_mrui_row_pane_t

0x8fb6,	// (0x0009df52) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8fb6,	// (0x0009df52) list_single_cmail_header_editor_pane_bg_cp01

0x8fd6,	// (0x0009df72) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8fd6,	// (0x0009df72) list_single_cmail_header_editor_pane_bg_cp02

0x8ff2,	// (0x0009df8e) main_radioblah_text_pane_t1_ParamLimits

0x8ff2,	// (0x0009df8e) main_radioblah_text_pane_t1

0xe13f,	// (0x000a30db) cam6_indi_pane_cp01

0xe147,	// (0x000a30e3) cam6_mode_pane_cp01

0xe14f,	// (0x000a30eb) cam6_pano_pane

0xe158,	// (0x000a30f4) cam6_zoom_pane_cp01

0xe160,	// (0x000a30fc) cam6_pano_image_pane

0xe16b,	// (0x000a3107) cam6_pano_pane_g1

0xd7ff,	// (0x000a279b) cam6_pano_pane_g2

0xe17c,	// (0x000a3118) cam6_pano_pane_g3

0xe185,	// (0x000a3121) cam6_pano_pane_g4

0xc61d,	// (0x000a15b9) cam6_pano_pane_g5

0xe18e,	// (0x000a312a) cam6_pano_pane_g6

0xe174,	// (0x000a3110) cam6_pano_pane_g7

0xe198,	// (0x000a3134) cam6_pano_pane_g8

0xe1a1,	// (0x000a313d) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x000a4d9e) cam6_pano_pane_g

0xe792,	// (0x000a372e) main_browser_tag_pane

0xdedf,	// (0x000a2e7b) grid_navstr_albumart_pane

0xe1ac,	// (0x000a3148) cell_navstr_albumart_pane_ParamLimits

0xe1ac,	// (0x000a3148) cell_navstr_albumart_pane

0xe1cc,	// (0x000a3168) cell_navstr_albumart_pane_g1

0xb9f6,	// (0x000a0992) cell_navstr_albumart_pane_g2

0xba06,	// (0x000a09a2) cell_navstr_albumart_pane_g3

0xb9fe,	// (0x000a099a) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x000a4db1) cell_navstr_albumart_pane_g

0x900d,	// (0x0009dfa9) bt_list_pane_ParamLimits

0x900d,	// (0x0009dfa9) bt_list_pane

0x902d,	// (0x0009dfc9) bt_list_pane_t1

0x903c,	// (0x0009dfd8) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x000a4dba) bt_list_pane_t

0xe792,	// (0x000a372e) main_cale_prevew_pane

0x904b,	// (0x0009dfe7) popup_cale_preview_window_ParamLimits

0x904b,	// (0x0009dfe7) popup_cale_preview_window

0xb97e,	// (0x000a091a) bg_popup_preview_window_pane_cp05_ParamLimits

0xb97e,	// (0x000a091a) bg_popup_preview_window_pane_cp05

0xe1d4,	// (0x000a3170) list_cale_preview_pane_ParamLimits

0xe1d4,	// (0x000a3170) list_cale_preview_pane

0x9064,	// (0x0009e000) list_double_cale_preview_pane_ParamLimits

0x9064,	// (0x0009e000) list_double_cale_preview_pane

0x9076,	// (0x0009e012) list_single_cale_preview_pane_ParamLimits

0x9076,	// (0x0009e012) list_single_cale_preview_pane

0x908c,	// (0x0009e028) list_single_cale_preview_pane_g1

0x9094,	// (0x0009e030) list_single_cale_preview_pane_t1_ParamLimits

0x9094,	// (0x0009e030) list_single_cale_preview_pane_t1

0x90a9,	// (0x0009e045) list_double_cale_preview_pane_g1

0x90b1,	// (0x0009e04d) list_double_cale_preview_pane_t1_ParamLimits

0x90b1,	// (0x0009e04d) list_double_cale_preview_pane_t1

0x90c6,	// (0x0009e062) list_double_cale_preview_pane_t2_ParamLimits

0x90c6,	// (0x0009e062) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x000a4dbf) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x000a4dbf) list_double_cale_preview_pane_t

0xe792,	// (0x000a372e) main_ezdial_pane

0xb97e,	// (0x000a091a) main_sp_fs_email_pane_ParamLimits

0x8695,	// (0x0009d631) cmail_ddmenu_btn01_pane_ParamLimits

0x8695,	// (0x0009d631) cmail_ddmenu_btn01_pane

0x86b2,	// (0x0009d64e) cmail_ddmenu_btn02_pane_ParamLimits

0x86b2,	// (0x0009d64e) cmail_ddmenu_btn02_pane

0x86d0,	// (0x0009d66c) cmail_ddmenu_btn03_pane_ParamLimits

0x86d0,	// (0x0009d66c) cmail_ddmenu_btn03_pane

0x86fe,	// (0x0009d69a) main_sp_fs_ctrlbar_pane_ParamLimits

0x8714,	// (0x0009d6b0) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8d00,	// (0x0009dc9c) list_cmail_body_pane_ParamLimits

0xdde8,	// (0x000a2d84) bg_button_pane_cp12

0xddf1,	// (0x000a2d8d) list_single_cmail_header_detail_pane_g3_ParamLimits

0xddf1,	// (0x000a2d8d) list_single_cmail_header_detail_pane_g3

0xde3a,	// (0x000a2dd6) list_single_cmail_header_detail_pane_t2_ParamLimits

0xde3a,	// (0x000a2dd6) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x000a4d42) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x000a4d42) list_single_cmail_header_detail_pane_t

0xdf47,	// (0x000a2ee3) phacti_term_pane_t2_ParamLimits

0xdf47,	// (0x000a2ee3) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x000a4d4c) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x000a4d4c) phacti_term_pane_t

0xe1e0,	// (0x000a317c) aid_size_list_single_double

0x90de,	// (0x0009e07a) popup_ezdial_listscroll_window

0x90ff,	// (0x0009e09b) popup_number_entry_window_cp01

0x9d73,	// (0x0009ed0f) bg_popup_call_pane_cp09

0xe1ec,	// (0x000a3188) ezdial_list_pane

0xe1f4,	// (0x000a3190) scroll_pane_cp23

0xbdd2,	// (0x000a0d6e) bg_button_pane_cp028_ParamLimits

0xbdd2,	// (0x000a0d6e) bg_button_pane_cp028

0x910d,	// (0x0009e0a9) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x910d,	// (0x0009e0a9) cmail_ddmenu_btn01_pane_g1

0x911d,	// (0x0009e0b9) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x911d,	// (0x0009e0b9) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x000a4dc4) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x000a4dc4) cmail_ddmenu_btn01_pane_g

0xe1fc,	// (0x000a3198) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe1fc,	// (0x000a3198) cmail_ddmenu_btn01_pane_t1

0xbbe5,	// (0x000a0b81) bg_button_pane_cp029_ParamLimits

0xbbe5,	// (0x000a0b81) bg_button_pane_cp029

0x9129,	// (0x0009e0c5) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9129,	// (0x0009e0c5) cmail_ddmenu_btn02_pane_g1

0x9141,	// (0x0009e0dd) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9141,	// (0x0009e0dd) cmail_ddmenu_btn02_pane_t1

0xe806,	// (0x000a37a2) bg_button_pane_cp031_ParamLimits

0xe806,	// (0x000a37a2) bg_button_pane_cp031

0x9129,	// (0x0009e0c5) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9129,	// (0x0009e0c5) cmail_ddmenu_btn03_pane_g1

0x9141,	// (0x0009e0dd) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9141,	// (0x0009e0dd) cmail_ddmenu_btn03_pane_t1

0x611c,	// (0x0009b0b8) cell_dialer2_keypad_pane_t1_ParamLimits

0x6136,	// (0x0009b0d2) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6136,	// (0x0009b0d2) cell_dialer2_keypad_pane_t1_copy1

0x7f8e,	// (0x0009cf2a) ncimui_group_button_pane

0xb97e,	// (0x000a091a) main_sp_fs_calendar_pane_ParamLimits

0x8d20,	// (0x0009dcbc) list_single_cmail_header_caption_pane_ParamLimits

0xf0c1,	// (0x000a405d) aid_recal_txt_sm_pane

0xe792,	// (0x000a372e) mian_recal_day_pane

0xdfb9,	// (0x000a2f55) popup_sp_fs_cale_preview_window_ParamLimits

0xe212,	// (0x000a31ae) list_recal_day_pane

0xe255,	// (0x000a31f1) list_single_recal_day_pane_ParamLimits

0xe255,	// (0x000a31f1) list_single_recal_day_pane

0xe267,	// (0x000a3203) list_single_recal_day_pane_g1_ParamLimits

0xe267,	// (0x000a3203) list_single_recal_day_pane_g1

0xe273,	// (0x000a320f) list_single_recal_day_pane_g2_ParamLimits

0xe273,	// (0x000a320f) list_single_recal_day_pane_g2

0xe283,	// (0x000a321f) list_single_recal_day_pane_g3_ParamLimits

0xe283,	// (0x000a321f) list_single_recal_day_pane_g3

0x9165,	// (0x0009e101) list_single_recal_day_pane_g4_ParamLimits

0x9165,	// (0x0009e101) list_single_recal_day_pane_g4

0xe28f,	// (0x000a322b) list_single_recal_day_pane_g5_ParamLimits

0xe28f,	// (0x000a322b) list_single_recal_day_pane_g5

0xe29f,	// (0x000a323b) list_single_recal_day_pane_g6_ParamLimits

0xe29f,	// (0x000a323b) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x000a4dd3) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x000a4dd3) list_single_recal_day_pane_g

0xe2b3,	// (0x000a324f) list_single_recal_day_pane_t1

0xe2c5,	// (0x000a3261) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x000a4dde) list_single_recal_day_pane_t

0x9185,	// (0x0009e121) ncimui_query_button_pane_ParamLimits

0x9185,	// (0x0009e121) ncimui_query_button_pane

0x9195,	// (0x0009e131) ncimui_query_button_pane_t1_ParamLimits

0x9195,	// (0x0009e131) ncimui_query_button_pane_t1

0xe2d7,	// (0x000a3273) ncimui_query_button_pane_t2_ParamLimits

0xe2d7,	// (0x000a3273) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x000a4de3) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x000a4de3) ncimui_query_button_pane_t

0x91a8,	// (0x0009e144) query_button_pane_ParamLimits

0x91a8,	// (0x0009e144) query_button_pane

0xe792,	// (0x000a372e) bg_button_pane_cp0028

0xe2ea,	// (0x000a3286) query_button_pane_t1

0x450e,	// (0x000994aa) main_tport_pane_ParamLimits

0x8c0a,	// (0x0009dba6) bg_popup_window_pane_cp01_ParamLimits

0x8c0a,	// (0x0009dba6) bg_popup_window_pane_cp01

0x8c18,	// (0x0009dbb4) heading_pane_cp08_ParamLimits

0x8c18,	// (0x0009dbb4) heading_pane_cp08

0x8c26,	// (0x0009dbc2) heading_pane_cp07_ParamLimits

0x8c26,	// (0x0009dbc2) heading_pane_cp07

0x8c95,	// (0x0009dc31) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x000a4d2f) cell_tport_appsw_pane_g

0x3c20,	// (0x00098bbc) input_candi_list_open_g1

0xa18f,	// (0x0009f12b) list_cale_time_pane_g6_ParamLimits

0xa18f,	// (0x0009f12b) list_cale_time_pane_g6

0x4f8b,	// (0x00099f27) aid_size_touch_calib_1_ParamLimits

0x4f8b,	// (0x00099f27) aid_size_touch_calib_1

0x4f97,	// (0x00099f33) aid_size_touch_calib_2_ParamLimits

0x4f97,	// (0x00099f33) aid_size_touch_calib_2

0x4fa5,	// (0x00099f41) aid_size_touch_calib_3_ParamLimits

0x4fa5,	// (0x00099f41) aid_size_touch_calib_3

0x4fb5,	// (0x00099f51) aid_size_touch_calib_4_ParamLimits

0x4fb5,	// (0x00099f51) aid_size_touch_calib_4

0x4fc3,	// (0x00099f5f) main_touch_calib_button_group_pane_ParamLimits

0x4fc3,	// (0x00099f5f) main_touch_calib_button_group_pane

0x4fd1,	// (0x00099f6d) main_touch_calib_pane_g1_ParamLimits

0x4fdd,	// (0x00099f79) main_touch_calib_pane_g2_ParamLimits

0x4fe9,	// (0x00099f85) main_touch_calib_pane_g3_ParamLimits

0x4ff5,	// (0x00099f91) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x000a46ed) main_touch_calib_pane_g_ParamLimits

0x5001,	// (0x00099f9d) main_touch_calib_pane_t1_ParamLimits

0x501a,	// (0x00099fb6) main_touch_calib_pane_t2_ParamLimits

0x5033,	// (0x00099fcf) main_touch_calib_pane_t3_ParamLimits

0x5049,	// (0x00099fe5) main_touch_calib_pane_t4_ParamLimits

0x505f,	// (0x00099ffb) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x000a46f6) main_touch_calib_pane_t_ParamLimits

0xc3bd,	// (0x000a1359) list_single_fp_cale_pane_g3_ParamLimits

0xc3bd,	// (0x000a1359) list_single_fp_cale_pane_g3

0x44f2,	// (0x0009948e) bg_button_pane_cp012_ParamLimits

0x44f2,	// (0x0009948e) bg_vkb2_func_pane_cp03_ParamLimits

0x6f57,	// (0x0009bef3) cell_vitu2_function_top_pane_g1_ParamLimits

0x44f2,	// (0x0009948e) bg_vkb2_func_pane_cp04_ParamLimits

0x7f16,	// (0x0009ceb2) main_ncimui_button_group_pane_ParamLimits

0x7f16,	// (0x0009ceb2) main_ncimui_button_group_pane

0x7f7c,	// (0x0009cf18) main_ncimui_pane_t3_ParamLimits

0x7f7c,	// (0x0009cf18) main_ncimui_pane_t3

0xdef5,	// (0x000a2e91) phacti_button_group_pane

0xe1e0,	// (0x000a317c) aid_size_list_single_double_ParamLimits

0x90de,	// (0x0009e07a) popup_ezdial_listscroll_window_ParamLimits

0x90ff,	// (0x0009e09b) popup_number_entry_window_cp01_ParamLimits

0x91b5,	// (0x0009e151) phacti_button_pane_ParamLimits

0x91b5,	// (0x0009e151) phacti_button_pane

0xe792,	// (0x000a372e) bg_button_pane_cp14

0xe2f8,	// (0x000a3294) phacti_button_pane_t1

0x91c6,	// (0x0009e162) main_touch_calib_button_pane_ParamLimits

0x91c6,	// (0x0009e162) main_touch_calib_button_pane

0xefe7,	// (0x000a3f83) bg_button_pane_cp18_ParamLimits

0xefe7,	// (0x000a3f83) bg_button_pane_cp18

0xe306,	// (0x000a32a2) main_touch_calib_button_pane_t1_ParamLimits

0xe306,	// (0x000a32a2) main_touch_calib_button_pane_t1

0xe31c,	// (0x000a32b8) main_touch_calib_button_pane_t2_ParamLimits

0xe31c,	// (0x000a32b8) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x000a4de8) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x000a4de8) main_touch_calib_button_pane_t

0xe792,	// (0x000a372e) cell_ncimui_button_pane

0xe792,	// (0x000a372e) bg_button_pane_cp032

0xe33a,	// (0x000a32d6) cell_ncimui_button_pane_t1

0x6192,	// (0x0009b12e) image3_infobar_pane_ParamLimits

0x6192,	// (0x0009b12e) image3_infobar_pane

0x82f5,	// (0x0009d291) fs_bigclock_status_pane_ParamLimits

0x82f5,	// (0x0009d291) fs_bigclock_status_pane

0x8302,	// (0x0009d29e) main_fs_bigclock_clock_pane_ParamLimits

0x8302,	// (0x0009d29e) main_fs_bigclock_clock_pane

0x831c,	// (0x0009d2b8) main_fs_bigclock_indi_pane_ParamLimits

0x831c,	// (0x0009d2b8) main_fs_bigclock_indi_pane

0x8344,	// (0x0009d2e0) main_fs_bigclock_swipe_pane_ParamLimits

0x8344,	// (0x0009d2e0) main_fs_bigclock_swipe_pane

0xe792,	// (0x000a372e) main_fs_clock_dumped_data

0xd90c,	// (0x000a28a8) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd90c,	// (0x000a28a8) list_single_fs_bigclock_indicator_pane_g1

0xd927,	// (0x000a28c3) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd927,	// (0x000a28c3) list_single_fs_bigclock_indicator_pane_g2

0xd941,	// (0x000a28dd) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd941,	// (0x000a28dd) list_single_fs_bigclock_indicator_pane_g3

0xd95b,	// (0x000a28f7) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd95b,	// (0x000a28f7) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x000a4c10) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x000a4c10) list_single_fs_bigclock_indicator_pane_g

0xd986,	// (0x000a2922) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd986,	// (0x000a2922) list_single_fs_bigclock_indicator_pane_t1

0xd9ae,	// (0x000a294a) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd9ae,	// (0x000a294a) list_single_fs_bigclock_indicator_pane_t2

0xd9d6,	// (0x000a2972) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xd9d6,	// (0x000a2972) list_single_fs_bigclock_indicator_pane_t3

0xd9fe,	// (0x000a299a) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xd9fe,	// (0x000a299a) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x000a4c1b) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x000a4c1b) list_single_fs_bigclock_indicator_pane_t

0xe348,	// (0x000a32e4) image3_infobar_fav_pane_ParamLimits

0xe348,	// (0x000a32e4) image3_infobar_fav_pane

0xe358,	// (0x000a32f4) image3_infobar_loc_pane_ParamLimits

0xe358,	// (0x000a32f4) image3_infobar_loc_pane

0xe36c,	// (0x000a3308) image3_infobar_time_pane_ParamLimits

0xe36c,	// (0x000a3308) image3_infobar_time_pane

0xc002,	// (0x000a0f9e) image3_infobar_time_pane_g1

0xe37c,	// (0x000a3318) image3_infobar_time_pane_t1

0xc002,	// (0x000a0f9e) image3_infobar_loc_pane_g1

0xe38a,	// (0x000a3326) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x000a4ded) image3_infobar_loc_pane_g

0xe392,	// (0x000a332e) image3_infobar_loc_pane_t1

0xc002,	// (0x000a0f9e) image3_infobar_fav_pane_g1

0xe3a0,	// (0x000a333c) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x000a4df2) image3_infobar_fav_pane_g

0xe3a8,	// (0x000a3344) fs_bigclock_status_battery_pane

0xe3b1,	// (0x000a334d) fs_bigclock_status_signal_pane

0xe3ba,	// (0x000a3356) fs_bigclock_status_title_pane

0xe3c3,	// (0x000a335f) fs_bigclock_status_signal_pane_g1

0xe3cc,	// (0x000a3368) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x000a4df7) fs_bigclock_status_signal_pane_g

0xe3d4,	// (0x000a3370) fs_bigclock_status_battery_pane_g1

0xe3dd,	// (0x000a3379) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x000a4dfc) fs_bigclock_status_battery_pane_g

0xe3e5,	// (0x000a3381) fs_bigclock_status_title_pane_t1

0xc002,	// (0x000a0f9e) main_fs_bigclock_clock_pane_g1

0xe3f3,	// (0x000a338f) main_fs_bigclock_clock_pane_g2

0xe3fc,	// (0x000a3398) main_fs_bigclock_clock_pane_g3

0xe3fc,	// (0x000a3398) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x000a4e01) main_fs_bigclock_clock_pane_g

0xe404,	// (0x000a33a0) main_fs_bigclock_clock_pane_t1

0x91d6,	// (0x0009e172) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x000a4e0a) main_fs_bigclock_clock_pane_t

0xe412,	// (0x000a33ae) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe412,	// (0x000a33ae) list_single_fs_bigclock_indicator_pane

0xe423,	// (0x000a33bf) list_single_fs_bigclock_pane_ParamLimits

0xe423,	// (0x000a33bf) list_single_fs_bigclock_pane

0xe449,	// (0x000a33e5) main_fs_bigclock_indicator_pane_t1

0xe458,	// (0x000a33f4) list_single_fs_bigclock_pane_g1

0xe460,	// (0x000a33fc) list_single_fs_bigclock_pane_t1

0xc002,	// (0x000a0f9e) main_fs_bigclock_swipe_pane_g1

0xe4a3,	// (0x000a343f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x000a4e1b) main_fs_bigclock_swipe_pane_g

0xe4ab,	// (0x000a3447) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe4ab,	// (0x000a3447) main_fs_bigclock_swipe_pane_t1

0x34ba,	// (0x00098456) call_type_pane_ParamLimits

0xe792,	// (0x000a372e) main_btmg_pane

0xe0b6,	// (0x000a3052) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe0b6,	// (0x000a3052) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x000a4d8e) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x000a4d8e) list_single_cale_mrui_row_pane_g

0xe23b,	// (0x000a31d7) list_recal_vselct_arw_lo_pane

0xe243,	// (0x000a31df) list_recal_vselct_arw_up_pane

0xe24b,	// (0x000a31e7) list_recal_vselct_pane

0x9229,	// (0x0009e1c5) btmg_button_pane

0x9235,	// (0x0009e1d1) main_btmg_pane_g1

0xe792,	// (0x000a372e) bg_button_pane_cp044

0xe4c8,	// (0x000a3464) btmg_button_pane_t1

0xbbd1,	// (0x000a0b6d) aid_listscroll_gen

0xb97e,	// (0x000a091a) main_cntbar_detail_pane

0xddca,	// (0x000a2d66) list_cmail_folder_pane

0xbe8f,	// (0x000a0e2b) sp_fs_scroll_pane_cp03_ParamLimits

0x923d,	// (0x0009e1d9) list_single_fs_dyc_pane_cp01_ParamLimits

0x923d,	// (0x0009e1d9) list_single_fs_dyc_pane_cp01

0xe4d6,	// (0x000a3472) aid_size_cmail_indent

0xe4df,	// (0x000a347b) list_single_dyc_row_pane_cp01

0x9288,	// (0x0009e224) cntbar_detail_list_pane_ParamLimits

0x9288,	// (0x0009e224) cntbar_detail_list_pane

0x92c2,	// (0x0009e25e) main_cntbar_detail_cont_pane_ParamLimits

0x92c2,	// (0x0009e25e) main_cntbar_detail_cont_pane

0x33d3,	// (0x0009836f) scroll_pane_cp032_ParamLimits

0x33d3,	// (0x0009836f) scroll_pane_cp032

0x92ce,	// (0x0009e26a) cntbar_detail_list_event_pane_ParamLimits

0x92ce,	// (0x0009e26a) cntbar_detail_list_event_pane

0x9294,	// (0x0009e230) cntbar_detail_list_shct_pane

0xa01a,	// (0x0009efb6) aid_list_gen

0xe4e8,	// (0x000a3484) aid_scroll

0xe4f1,	// (0x000a348d) aid_size_touch_scroll_bar

0xf0ac,	// (0x000a4048) aid_list_double

0x92e2,	// (0x0009e27e) aid_list_single

0x7690,	// (0x0009c62c) aid_list_single_lg

0x92eb,	// (0x0009e287) aid_list_z_g_a_sm

0x92f3,	// (0x0009e28f) aid_list_z_g_d

0x92fb,	// (0x0009e297) aid_txt_z_prm

0x9309,	// (0x0009e2a5) aid_txt_z_prm_cp01

0x9317,	// (0x0009e2b3) aid_txt_z_sec

0x9325,	// (0x0009e2c1) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9325,	// (0x0009e2c1) main_cntbar_detail_cont_pane_g1

0x9332,	// (0x0009e2ce) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9332,	// (0x0009e2ce) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x000a4e20) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x000a4e20) main_cntbar_detail_cont_pane_g

0xe4fa,	// (0x000a3496) main_cntbar_detail_cont_pane_t1

0xe508,	// (0x000a34a4) main_cntbar_detail_cont_pane_t2

0xe516,	// (0x000a34b2) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x000a4e25) main_cntbar_detail_cont_pane_t

0x933e,	// (0x0009e2da) cell_cntbar_detail_list_shct_pane_ParamLimits

0x933e,	// (0x0009e2da) cell_cntbar_detail_list_shct_pane

0xe524,	// (0x000a34c0) cntbar_detail_list_shct_pane_g1

0xe52d,	// (0x000a34c9) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x000a4e2c) cntbar_detail_list_shct_pane_g

0x9352,	// (0x0009e2ee) cntbar_detail_list_event_pane_g1_ParamLimits

0x9352,	// (0x0009e2ee) cntbar_detail_list_event_pane_g1

0x935e,	// (0x0009e2fa) cntbar_detail_list_event_pane_g2_ParamLimits

0x935e,	// (0x0009e2fa) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x000a4e31) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x000a4e31) cntbar_detail_list_event_pane_g

0x93ca,	// (0x0009e366) cntbar_detail_list_event_pane_t1_ParamLimits

0x93ca,	// (0x0009e366) cntbar_detail_list_event_pane_t1

0x93df,	// (0x0009e37b) cntbar_detail_list_event_pane_t2_ParamLimits

0x93df,	// (0x0009e37b) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x000a4e3e) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x000a4e3e) cntbar_detail_list_event_pane_t

0xc002,	// (0x000a0f9e) cell_cntbar_detail_list_shct_pane_g1

0xa793,	// (0x0009f72f) navi_pane_mv_g3

0xb97e,	// (0x000a091a) main_cntbar_detail_pane_ParamLimits

0xe792,	// (0x000a372e) main_notif_wgt_pane

0x5e46,	// (0x0009ade2) aid_tch_main_mp4_pane_g4

0x607b,	// (0x0009b017) popup_slider_window_cp02

0xe231,	// (0x000a31cd) list_recal_day_event_pane

0x9268,	// (0x0009e204) cntbar_detail_btn_pane_ParamLimits

0x9268,	// (0x0009e204) cntbar_detail_btn_pane

0x9278,	// (0x0009e214) cntbar_detail_btn_pane_cp01_ParamLimits

0x9278,	// (0x0009e214) cntbar_detail_btn_pane_cp01

0x9294,	// (0x0009e230) cntbar_detail_list_shct_pane_ParamLimits

0x92a0,	// (0x0009e23c) cntbar_detail_pane_g1_ParamLimits

0x92a0,	// (0x0009e23c) cntbar_detail_pane_g1

0x92ac,	// (0x0009e248) cntbar_detail_pane_t1_ParamLimits

0x92ac,	// (0x0009e248) cntbar_detail_pane_t1

0x936a,	// (0x0009e306) cntbar_detail_list_event_pane_g3_ParamLimits

0x936a,	// (0x0009e306) cntbar_detail_list_event_pane_g3

0x9382,	// (0x0009e31e) cntbar_detail_list_event_pane_g4_ParamLimits

0x9382,	// (0x0009e31e) cntbar_detail_list_event_pane_g4

0x939a,	// (0x0009e336) cntbar_detail_list_event_pane_g5_ParamLimits

0x939a,	// (0x0009e336) cntbar_detail_list_event_pane_g5

0x93b2,	// (0x0009e34e) cntbar_detail_list_event_pane_g6_ParamLimits

0x93b2,	// (0x0009e34e) cntbar_detail_list_event_pane_g6

0x93f4,	// (0x0009e390) cntbar_detail_list_event_pane_t3_ParamLimits

0x93f4,	// (0x0009e390) cntbar_detail_list_event_pane_t3

0x9406,	// (0x0009e3a2) popup_notif_wgt_window_ParamLimits

0x9406,	// (0x0009e3a2) popup_notif_wgt_window

0x9416,	// (0x0009e3b2) popup_submenu_window_cp01_ParamLimits

0x9416,	// (0x0009e3b2) popup_submenu_window_cp01

0x9d73,	// (0x0009ed0f) bg_popup_window_pane_cp10

0xe536,	// (0x000a34d2) listscroll_notif_wgt_pane

0xe548,	// (0x000a34e4) list_notif_wgt_window

0xe551,	// (0x000a34ed) scroll_pane_cp033

0x9428,	// (0x0009e3c4) list_notif_wgt_row_pane_ParamLimits

0x9428,	// (0x0009e3c4) list_notif_wgt_row_pane

0xe55a,	// (0x000a34f6) aid_size_list_notif_wgt_del

0xe567,	// (0x000a3503) list_notif_wgt_row_pane_g1

0xe573,	// (0x000a350f) list_notif_wgt_row_pane_g2

0xe587,	// (0x000a3523) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x000a4e45) list_notif_wgt_row_pane_g

0xe594,	// (0x000a3530) list_notif_wgt_row_pane_t1

0xe5aa,	// (0x000a3546) list_notif_wgt_row_pane_t2

0xe5bc,	// (0x000a3558) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x000a4e4c) list_notif_wgt_row_pane_t

0xcd4c,	// (0x000a1ce8) list_recal_day_event_pane_g1

0xe5ce,	// (0x000a356a) list_recal_day_event_pane_t1

0xe792,	// (0x000a372e) bg_button_pane_cp045

0x943a,	// (0x0009e3d6) cntbar_detail_btn_pane_t1

0xbbe5,	// (0x000a0b81) main_callh_pane_ParamLimits

0xbbe5,	// (0x000a0b81) main_callh_pane

0xe792,	// (0x000a372e) main_coverflow0_pane

0xe792,	// (0x000a372e) main_wgtman_pane

0x835c,	// (0x0009d2f8) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x835c,	// (0x0009d2f8) main_fs_bigclock_unlock_btn_pane

0x8c8d,	// (0x0009dc29) bg_button_pane_cp16

0x8c9d,	// (0x0009dc39) cell_tport_appsw_pane_g3

0x9448,	// (0x0009e3e4) cf0_flow_pane_ParamLimits

0x9448,	// (0x0009e3e4) cf0_flow_pane

0xe5dd,	// (0x000a3579) listscroll_cf0_pane

0xe5e8,	// (0x000a3584) main_cf0_pane_g1

0x9457,	// (0x0009e3f3) main_cf0_pane_t1_ParamLimits

0x9457,	// (0x0009e3f3) main_cf0_pane_t1

0x946b,	// (0x0009e407) main_cf0_pane_t2_ParamLimits

0x946b,	// (0x0009e407) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x000a4e58) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x000a4e58) main_cf0_pane_t

0xe5fa,	// (0x000a3596) scroll_pane_cp11

0x947f,	// (0x0009e41b) cf0_flow_pane_g1

0x9487,	// (0x0009e423) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x000a4e5d) cf0_flow_pane_g

0x948f,	// (0x0009e42b) cf0_flow_pane_t1

0xe792,	// (0x000a372e) main_call6_pane

0xe792,	// (0x000a372e) main_calllock_pane

0x949d,	// (0x0009e439) call6_btn_grp_pane_ParamLimits

0x949d,	// (0x0009e439) call6_btn_grp_pane

0x94ac,	// (0x0009e448) call6_pane_g1_ParamLimits

0x94ac,	// (0x0009e448) call6_pane_g1

0x94bb,	// (0x0009e457) popup_call6_1st_window_ParamLimits

0x94bb,	// (0x0009e457) popup_call6_1st_window

0x94c9,	// (0x0009e465) popup_call6_2nd_window_ParamLimits

0x94c9,	// (0x0009e465) popup_call6_2nd_window

0x94d7,	// (0x0009e473) cell_call6_btn_pane_ParamLimits

0x94d7,	// (0x0009e473) cell_call6_btn_pane

0x9d73,	// (0x0009ed0f) bg_popup_call2_in_pane_cp03

0xe605,	// (0x000a35a1) popup_call6_1st_window_g1

0xe60d,	// (0x000a35a9) popup_call6_1st_window_g2

0xe615,	// (0x000a35b1) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x000a4e62) popup_call6_1st_window_g

0xe61d,	// (0x000a35b9) popup_call6_1st_window_t1

0xe62c,	// (0x000a35c8) popup_call6_1st_window_t2

0xe63c,	// (0x000a35d8) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x000a4e69) popup_call6_1st_window_t

0x9d73,	// (0x0009ed0f) bg_popup_call2_in_pane_cp04

0xe605,	// (0x000a35a1) popup_call6_2nd_window_g1

0xe60d,	// (0x000a35a9) popup_call6_2nd_window_g2

0xe615,	// (0x000a35b1) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x000a4e62) popup_call6_2nd_window_g

0xe61d,	// (0x000a35b9) popup_call6_2nd_window_t1

0xe792,	// (0x000a372e) bg_button_pane_cp15

0xe64c,	// (0x000a35e8) cell_call6_btn_pane_g1

0xe655,	// (0x000a35f1) cell_call6_btn_pane_t1

0x94e6,	// (0x0009e482) listscroll_wgtman_pane_ParamLimits

0x94e6,	// (0x0009e482) listscroll_wgtman_pane

0x9502,	// (0x0009e49e) wgtman_btn_pane_ParamLimits

0x9502,	// (0x0009e49e) wgtman_btn_pane

0xa59a,	// (0x0009f536) aid_scroll_copy1

0xe664,	// (0x000a3600) list_wgtman_pane

0x9537,	// (0x0009e4d3) wgtman_btn_pane_g1_ParamLimits

0x9537,	// (0x0009e4d3) wgtman_btn_pane_g1

0x955f,	// (0x0009e4fb) wgtman_btn_pane_t1_ParamLimits

0x955f,	// (0x0009e4fb) wgtman_btn_pane_t1

0xe66e,	// (0x000a360a) wgtman_btn_pane_t2_ParamLimits

0xe66e,	// (0x000a360a) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x000a4e70) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x000a4e70) wgtman_btn_pane_t

0x9596,	// (0x0009e532) listrow_wgtman_pane_ParamLimits

0x9596,	// (0x0009e532) listrow_wgtman_pane

0x95b1,	// (0x0009e54d) listrow_wgtman_pane_g1

0x95be,	// (0x0009e55a) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x000a4e75) listrow_wgtman_pane_g

0x95dc,	// (0x0009e578) listrow_wgtman_pane_t1

0x95f4,	// (0x0009e590) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x000a4e7a) listrow_wgtman_pane_t

0x961a,	// (0x0009e5b6) wait_bar_pane_cp09

0xe685,	// (0x000a3621) main_calllock_btn_pane

0xe68f,	// (0x000a362b) main_calllock_pane_g1

0xe792,	// (0x000a372e) bg_button_pane_cp17

0xe69b,	// (0x000a3637) main_calllock_btn_pane_g1

0xe6a4,	// (0x000a3640) main_calllock_btn_pane_t1

0xe792,	// (0x000a372e) main_dialer3_pane

0xe792,	// (0x000a372e) main_fmrd2_pane

0xc002,	// (0x000a0f9e) main_fs_bigclock_unlock_btn_pane_g1

0xe6bb,	// (0x000a3657) main_fs_bigclock_unlock_btn_pane_t1

0x962c,	// (0x0009e5c8) area_fmrd2_info_pane_ParamLimits

0x962c,	// (0x0009e5c8) area_fmrd2_info_pane

0x963a,	// (0x0009e5d6) area_fmrd2_visual_pane_ParamLimits

0x963a,	// (0x0009e5d6) area_fmrd2_visual_pane

0x9648,	// (0x0009e5e4) fmrd2_indi_pane_ParamLimits

0x9648,	// (0x0009e5e4) fmrd2_indi_pane

0x9655,	// (0x0009e5f1) area_fmrd2_visual_pane_g1

0x965d,	// (0x0009e5f9) area_fmrd2_visual_pane_t1

0x966d,	// (0x0009e609) area_fmrd2_visual_pane_t2

0x967d,	// (0x0009e619) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x000a4e84) area_fmrd2_visual_pane_t

0x968d,	// (0x0009e629) area_fmrd2_info_pane_g1

0x9695,	// (0x0009e631) area_fmrd2_info_pane_t1

0x96a5,	// (0x0009e641) area_fmrd2_info_pane_t2

0x96b5,	// (0x0009e651) area_fmrd2_info_pane_t3

0x96c5,	// (0x0009e661) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x000a4e8b) area_fmrd2_info_pane_t

0x96d3,	// (0x0009e66f) fmrd2_indi_pane_t1

0x96e3,	// (0x0009e67f) fmrd2_indi_pane_t2

0x96f3,	// (0x0009e68f) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x000a4e94) fmrd2_indi_pane_t

0xd96a,	// (0x000a2906) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd96a,	// (0x000a2906) list_single_fs_bigclock_indicator_pane_g5

0xda1a,	// (0x000a29b6) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xda1a,	// (0x000a29b6) list_single_fs_bigclock_indicator_pane_t5

0x8e32,	// (0x0009ddce) aid_cell_bcale_month_pane_ParamLimits

0x8e32,	// (0x0009ddce) aid_cell_bcale_month_pane

0x8e50,	// (0x0009ddec) bcale_month_pane_ParamLimits

0x8e50,	// (0x0009ddec) bcale_month_pane

0x8e6e,	// (0x0009de0a) bcale_preview_pane_ParamLimits

0x8e6e,	// (0x0009de0a) bcale_preview_pane

0xe460,	// (0x000a33fc) list_single_fs_bigclock_pane_t1_ParamLimits

0xe47f,	// (0x000a341b) list_single_fs_bigclock_pane_t2_ParamLimits

0xe47f,	// (0x000a341b) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x000a4e16) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x000a4e16) list_single_fs_bigclock_pane_t

0xe6b3,	// (0x000a364f) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x000a4e7f) main_fs_bigclock_unlock_btn_pane_g

0x9701,	// (0x0009e69d) aid_dia3_key_size_ParamLimits

0x9701,	// (0x0009e69d) aid_dia3_key_size

0x970d,	// (0x0009e6a9) aid_dia3_listrow_size_ParamLimits

0x970d,	// (0x0009e6a9) aid_dia3_listrow_size

0x971d,	// (0x0009e6b9) dia3_keypad_fun_pane_ParamLimits

0x971d,	// (0x0009e6b9) dia3_keypad_fun_pane

0x972f,	// (0x0009e6cb) dia3_keypad_num_pane_ParamLimits

0x972f,	// (0x0009e6cb) dia3_keypad_num_pane

0x9741,	// (0x0009e6dd) dia3_listscroll_pane_ParamLimits

0x9741,	// (0x0009e6dd) dia3_listscroll_pane

0x974f,	// (0x0009e6eb) dia3_numentry_pane_ParamLimits

0x974f,	// (0x0009e6eb) dia3_numentry_pane

0xe6c9,	// (0x000a3665) dia3_list_pane

0xe6d4,	// (0x000a3670) scroll_pane_cp12

0xe792,	// (0x000a372e) bg_dia3_numentry_pane

0x975d,	// (0x0009e6f9) dia3_numentry_pane_t1

0x976c,	// (0x0009e708) cell_dia3_key_num_pane

0x9774,	// (0x0009e710) cell_dia3_key0_fun_pane_ParamLimits

0x9774,	// (0x0009e710) cell_dia3_key0_fun_pane

0x9781,	// (0x0009e71d) cell_dia3_key1_fun_pane_ParamLimits

0x9781,	// (0x0009e71d) cell_dia3_key1_fun_pane

0x978e,	// (0x0009e72a) dia3_listrow_pane

0xd679,	// (0x000a2615) bg_dia3_numentry_pane_g1

0xe792,	// (0x000a372e) bg_button_pane_cp21

0xe6df,	// (0x000a367b) cell_dia3_key_num_pane_t1

0xe6ed,	// (0x000a3689) cell_dia3_key_num_pane_t2

0xe6fc,	// (0x000a3698) cell_dia3_key_num_pane_t3

0xe70b,	// (0x000a36a7) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x000a4e9b) cell_dia3_key_num_pane_t

0xe792,	// (0x000a372e) bg_button_pane_cp19

0x979b,	// (0x0009e737) cell_dia3_key0_fun_pane_g1

0xe792,	// (0x000a372e) bg_button_pane_cp20

0x97a3,	// (0x0009e73f) cell_dia3_key1_fun_pane_g1

0x97ab,	// (0x0009e747) area_left_week_number_pane

0x97be,	// (0x0009e75a) area_top_day_name_pane

0x97cc,	// (0x0009e768) frame_month_view_pane

0xe71a,	// (0x000a36b6) grid_month_view_pane

0x97e1,	// (0x0009e77d) cell_top_day_name_pane_ParamLimits

0x97e1,	// (0x0009e77d) cell_top_day_name_pane

0x97fb,	// (0x0009e797) cell_area_left_week_number_pane_ParamLimits

0x97fb,	// (0x0009e797) cell_area_left_week_number_pane

0x981e,	// (0x0009e7ba) cell_month_view_pane_ParamLimits

0x981e,	// (0x0009e7ba) cell_month_view_pane

0xe728,	// (0x000a36c4) frm_month_g1

0x984a,	// (0x0009e7e6) frm_month_g2

0x985b,	// (0x0009e7f7) frm_month_g3

0x986c,	// (0x0009e808) frm_month_g4

0x987d,	// (0x0009e819) frm_month_g5

0x9890,	// (0x0009e82c) frm_month_g6

0x98a3,	// (0x0009e83f) frm_month_g7

0xe735,	// (0x000a36d1) frm_month_g8

0x98b6,	// (0x0009e852) frm_month_g9

0x98c3,	// (0x0009e85f) frm_month_g10

0x98d0,	// (0x0009e86c) frm_month_g11

0x98dd,	// (0x0009e879) frm_month_g12

0x98ea,	// (0x0009e886) frm_month_g13

0x98f7,	// (0x0009e893) frm_month_g14

0x9906,	// (0x0009e8a2) frm_month_g15

0x9915,	// (0x0009e8b1) frm_month_g16

0x000f,

0xff08,	// (0x000a4ea4) frm_month_g

0xe742,	// (0x000a36de) cell_top_day_name_pane_t1

0x9924,	// (0x0009e8c0) cell_area_left_week_number_pane_g1

0x9933,	// (0x0009e8cf) cell_area_left_week_number_pane_t1

0xc265,	// (0x000a1201) cell_month_view_pane_g1

0x9949,	// (0x0009e8e5) cell_month_view_pane_t1

0xe792,	// (0x000a372e) main_fps_pane

0xdbef,	// (0x000a2b8b) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xdbef,	// (0x000a2b8b) cmail_ddmenu_btn02_pane_cp1

0xdc0b,	// (0x000a2ba7) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdc0b,	// (0x000a2ba7) cmail_ddmenu_btn02_pane_cp2

0x9135,	// (0x0009e0d1) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9135,	// (0x0009e0d1) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x000a4dc9) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x000a4dc9) cmail_ddmenu_btn02_pane_g

0x9153,	// (0x0009e0ef) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9153,	// (0x0009e0ef) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x000a4dce) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x000a4dce) cmail_ddmenu_btn02_pane_t

0x995f,	// (0x0009e8fb) fps_text_pane_ParamLimits

0x995f,	// (0x0009e8fb) fps_text_pane

0x996c,	// (0x0009e908) main_fps_pane_g1_ParamLimits

0x996c,	// (0x0009e908) main_fps_pane_g1

0x997a,	// (0x0009e916) wait_bar_pane_cp010_ParamLimits

0x997a,	// (0x0009e916) wait_bar_pane_cp010

0x9986,	// (0x0009e922) fps_text_pane_t1_ParamLimits

0x9986,	// (0x0009e922) fps_text_pane_t1

0x646b,	// (0x0009b407) cam4_image_uncrop_pane_g1

0x6474,	// (0x0009b410) cam4_image_uncrop_pane_g2

0x647d,	// (0x0009b419) cam4_image_uncrop_pane_g3

0x6486,	// (0x0009b422) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x000a488a) cam4_image_uncrop_pane_g

0x978e,	// (0x0009e72a) dia3_listrow_pane_ParamLimits

0xe792,	// (0x000a372e) main_phob2_pane

0x8c6f,	// (0x0009dc0b) cell_tport_appsw_pane_cp02_ParamLimits

0x8c6f,	// (0x0009dc0b) cell_tport_appsw_pane_cp02

0x8c7e,	// (0x0009dc1a) cell_tport_appsw_pane_cp03_ParamLimits

0x8c7e,	// (0x0009dc1a) cell_tport_appsw_pane_cp03

0xe792,	// (0x000a372e) phob2_contact_card_pane

0xe792,	// (0x000a372e) phob2_listscroll_pane

0xe755,	// (0x000a36f1) phob2_list_pane

0xe75d,	// (0x000a36f9) scroll_pane_cp034

0x999f,	// (0x0009e93b) phob2_cc_data_pane_ParamLimits

0x999f,	// (0x0009e93b) phob2_cc_data_pane

0x99b9,	// (0x0009e955) phob2_cc_listscroll_pane_ParamLimits

0x99b9,	// (0x0009e955) phob2_cc_listscroll_pane

0x99d3,	// (0x0009e96f) list_double_large_graphic_phob2_pane_ParamLimits

0x99d3,	// (0x0009e96f) list_double_large_graphic_phob2_pane

0x99f1,	// (0x0009e98d) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x99f1,	// (0x0009e98d) list_double_large_graphic_phob2_pane_g1

0x9a07,	// (0x0009e9a3) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9a07,	// (0x0009e9a3) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x000a4ec5) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x000a4ec5) list_double_large_graphic_phob2_pane_g

0x9a13,	// (0x0009e9af) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9a13,	// (0x0009e9af) list_double_large_graphic_phob2_pane_t1

0x9a28,	// (0x0009e9c4) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9a28,	// (0x0009e9c4) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x000a4eca) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x000a4eca) list_double_large_graphic_phob2_pane_t

0xe792,	// (0x000a372e) list_highlight_pane_cp024

0x9a3a,	// (0x0009e9d6) phob2_cc_button_pane

0x9a42,	// (0x0009e9de) phob2_cc_data_pane_g1_ParamLimits

0x9a42,	// (0x0009e9de) phob2_cc_data_pane_g1

0x9a4e,	// (0x0009e9ea) phob2_cc_data_pane_g2_ParamLimits

0x9a4e,	// (0x0009e9ea) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x000a4ecf) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x000a4ecf) phob2_cc_data_pane_g

0x9a5a,	// (0x0009e9f6) phob2_cc_data_pane_t1_ParamLimits

0x9a5a,	// (0x0009e9f6) phob2_cc_data_pane_t1

0x9a6c,	// (0x0009ea08) phob2_cc_data_pane_t2_ParamLimits

0x9a6c,	// (0x0009ea08) phob2_cc_data_pane_t2

0x9a7e,	// (0x0009ea1a) phob2_cc_data_pane_t3_ParamLimits

0x9a7e,	// (0x0009ea1a) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x000a4ed4) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x000a4ed4) phob2_cc_data_pane_t

0xe765,	// (0x000a3701) phob2_cc_list_pane_ParamLimits

0xe765,	// (0x000a3701) phob2_cc_list_pane

0xcf06,	// (0x000a1ea2) scroll_pane_cp035_ParamLimits

0xcf06,	// (0x000a1ea2) scroll_pane_cp035

0xb97e,	// (0x000a091a) bg_button_pane_cp033

0xe771,	// (0x000a370d) phob2_cc_button_pane_g1

0xe77d,	// (0x000a3719) phob2_cc_button_pane_t1

0xe814,	// (0x000a37b0) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x000a4edb) phob2_cc_button_pane_t

0x9a90,	// (0x0009ea2c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a90,	// (0x0009ea2c) list_double_large_graphic_phob2_cc_pane

0x9ab7,	// (0x0009ea53) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9ab7,	// (0x0009ea53) list_double_large_graphic_phob2_cc_pane_g1

0x9ac8,	// (0x0009ea64) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9ac8,	// (0x0009ea64) list_double_large_graphic_phob2_cc_pane_g2

0x9ad4,	// (0x0009ea70) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9ad4,	// (0x0009ea70) list_double_large_graphic_phob2_cc_pane_g3

0x9ae0,	// (0x0009ea7c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9ae0,	// (0x0009ea7c) list_double_large_graphic_phob2_cc_pane_g4

0x9aec,	// (0x0009ea88) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9aec,	// (0x0009ea88) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x000a4ee0) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x000a4ee0) list_double_large_graphic_phob2_cc_pane_g

0x9af8,	// (0x0009ea94) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9af8,	// (0x0009ea94) list_double_large_graphic_phob2_cc_pane_t1

0x9b21,	// (0x0009eabd) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9b21,	// (0x0009eabd) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x000a4eeb) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x000a4eeb) list_double_large_graphic_phob2_cc_pane_t

0xe826,	// (0x000a37c2) list_highlight_pane_cp025_ParamLimits

0xe826,	// (0x000a37c2) list_highlight_pane_cp025

0xb97e,	// (0x000a091a) bg_button_pane_cp033_ParamLimits

0xe771,	// (0x000a370d) phob2_cc_button_pane_g1_ParamLimits

0xe77d,	// (0x000a3719) phob2_cc_button_pane_t1_ParamLimits

0xe814,	// (0x000a37b0) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x000a4edb) phob2_cc_button_pane_t_ParamLimits

0x11b0,	// (0x0009614c) popup_wgtman_window

0xcc04,	// (0x000a1ba0) scroll_pane_cp038

0x951f,	// (0x0009e4bb) wgtman_btn_pane_cp_01_ParamLimits

0x951f,	// (0x0009e4bb) wgtman_btn_pane_cp_01

0xe834,	// (0x000a37d0) wgtman_content_pane

0xe83d,	// (0x000a37d9) wgtman_heading_pane

0xe792,	// (0x000a372e) bg_heading_pane_cp02

0xe846,	// (0x000a37e2) wgtman_heading_pane_g1

0xe84e,	// (0x000a37ea) wgtman_heading_pane_t1

0xe85c,	// (0x000a37f8) scroll_pane_cp036

0xe864,	// (0x000a3800) wgtman_list_pane

0xe86c,	// (0x000a3808) wgtman_list_pane_t1_ParamLimits

0xe86c,	// (0x000a3808) wgtman_list_pane_t1

0x63ca,	// (0x0009b366) cam4_grid_pane

0x7150,	// (0x0009c0ec) bg_button_pane_cp015_ParamLimits

0x7162,	// (0x0009c0fe) bg_button_pane_cp016_ParamLimits

0x7175,	// (0x0009c111) bg_button_pane_cp017_ParamLimits

0x71cb,	// (0x0009c167) popup_vitu2_query_window_g3_ParamLimits

0x71cb,	// (0x0009c167) popup_vitu2_query_window_g3

0x7286,	// (0x0009c222) popup_vitu2_query_window_t6_ParamLimits

0x7286,	// (0x0009c222) popup_vitu2_query_window_t6

0x72b1,	// (0x0009c24d) popup_vitu2_query_window_t7_ParamLimits

0x72b1,	// (0x0009c24d) popup_vitu2_query_window_t7

0xca6c,	// (0x000a1a08) cam4_grid_pane_g1

0xca75,	// (0x000a1a11) cam4_grid_pane_g2

0xe886,	// (0x000a3822) cam4_grid_pane_g3

0xe88f,	// (0x000a382b) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x000a4ef0) cam4_grid_pane_g

0x212d,	// (0x000970c9) aid_placing_vt_slider_lsc_ParamLimits

0x2479,	// (0x00097415) vidtel_button_pane_ParamLimits

0x2479,	// (0x00097415) vidtel_button_pane

0xe89a,	// (0x000a3836) bg_button_pane_cp034

0x9b4a,	// (0x0009eae6) vidtel_button_pane_g1

0xe8a4,	// (0x000a3840) vidtel_button_pane_t1

0xcd2a,	// (0x000a1cc6) aid_size_vtel_slider_touch

0xcf06,	// (0x000a1ea2) scroll_pane_cp039

0xd6b7,	// (0x000a2653) ncim_query_button_pane_cp01_ParamLimits

0xd6d6,	// (0x000a2672) ncimui_query_pane_g1_ParamLimits

0xb97e,	// (0x000a091a) input_focus_pane_cp012_ParamLimits

0xd6fb,	// (0x000a2697) ncim_query_entry_pane_t1_ParamLimits

0xcf06,	// (0x000a1ea2) scroll_pane_cp039_ParamLimits

0xa67e,	// (0x0009f61a) navi_pane_bcale_mc_g1

0xa686,	// (0x0009f622) navi_pane_bcale_mc_t1

0xdc54,	// (0x000a2bf0) main_sp_fs_email_pane_g1

0xdc60,	// (0x000a2bfc) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x000a4c81) main_sp_fs_email_pane_g

0xe0c2,	// (0x000a305e) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe0c2,	// (0x000a305e) list_single_cale_mrui_row_pane_g3

0x917b,	// (0x0009e117) list_single_recal_day_pane_g5_event_pane

0xe2ab,	// (0x000a3247) list_single_recal_day_pane_g7

0xe8b2,	// (0x000a384e) list_recal_day_event_pane_cp01

0xe8bb,	// (0x000a3857) list_recal_vselct_arw_lo_pane_cp01

0xe8c3,	// (0x000a385f) list_recal_vselct_arw_up_pane_cp01

0xe8cb,	// (0x000a3867) list_recal_vselct_pane_cp01

0xcd4c,	// (0x000a1ce8) list_recal_day_event_pane_cp01_g1

0xe8d5,	// (0x000a3871) list_recal_day_event_pane_cp01_t1

0xe2b3,	// (0x000a324f) list_single_recal_day_pane_t1_ParamLimits

0xe2c5,	// (0x000a3261) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x000a4dde) list_single_recal_day_pane_t_ParamLimits

0xef22,	// (0x000a3ebe) bg_notes_pane_ParamLimits

0xefc5,	// (0x000a3f61) list_notes_pane_ParamLimits

0x1518,	// (0x000964b4) scroll_pane_cp06_ParamLimits

0xefe7,	// (0x000a3f83) main_notes_pane_ParamLimits

0xe792,	// (0x000a372e) main_welc_pane

0x9b52,	// (0x0009eaee) main_welc_body_pane_ParamLimits

0x9b52,	// (0x0009eaee) main_welc_body_pane

0x9b6c,	// (0x0009eb08) main_welc_opti_pane_ParamLimits

0x9b6c,	// (0x0009eb08) main_welc_opti_pane

0x9b9f,	// (0x0009eb3b) main_welc_pane_t1_ParamLimits

0x9b9f,	// (0x0009eb3b) main_welc_pane_t1

0x9bb9,	// (0x0009eb55) main_welc_body_row_pane_ParamLimits

0x9bb9,	// (0x0009eb55) main_welc_body_row_pane

0xe806,	// (0x000a37a2) main_welc_opti_row_pane_ParamLimits

0xe806,	// (0x000a37a2) main_welc_opti_row_pane

0xe8e3,	// (0x000a387f) main_welc_opti_row_pane_g1

0x9bde,	// (0x0009eb7a) main_welc_opti_row_pane_t1

0xe8eb,	// (0x000a3887) main_welc_body_row_pane_t1

0xe540,	// (0x000a34dc) popup_notif_wgt_heading_pane

0xe55a,	// (0x000a34f6) aid_size_list_notif_wgt_del_ParamLimits

0xe567,	// (0x000a3503) list_notif_wgt_row_pane_g1_ParamLimits

0xe573,	// (0x000a350f) list_notif_wgt_row_pane_g2_ParamLimits

0xe587,	// (0x000a3523) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x000a4e45) list_notif_wgt_row_pane_g_ParamLimits

0xe594,	// (0x000a3530) list_notif_wgt_row_pane_t1_ParamLimits

0xe5aa,	// (0x000a3546) list_notif_wgt_row_pane_t2_ParamLimits

0xe5bc,	// (0x000a3558) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x000a4e4c) list_notif_wgt_row_pane_t_ParamLimits

0x95b1,	// (0x0009e54d) listrow_wgtman_pane_g1_ParamLimits

0x95be,	// (0x0009e55a) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x000a4e75) listrow_wgtman_pane_g_ParamLimits

0x95dc,	// (0x0009e578) listrow_wgtman_pane_t1_ParamLimits

0x95f4,	// (0x0009e590) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x000a4e7a) listrow_wgtman_pane_t_ParamLimits

0x961a,	// (0x0009e5b6) wait_bar_pane_cp09_ParamLimits

0xe792,	// (0x000a372e) bg_popup_heading_pane_cp02

0xe8fa,	// (0x000a3896) popup_notif_wgt_heading_pane_g1

0xe902,	// (0x000a389e) popup_notif_wgt_heading_pane_t1

0xe792,	// (0x000a372e) main_vids_pane

0xe792,	// (0x000a372e) vids_listscroll_pane

0x9bed,	// (0x0009eb89) scroll_pane_cp040

0xe792,	// (0x000a372e) vids_list_pane

0x9bf8,	// (0x0009eb94) vids_list_double_pane_ParamLimits

0x9bf8,	// (0x0009eb94) vids_list_double_pane

0x9c12,	// (0x0009ebae) vids_list_double_pane_g1

0x9c1b,	// (0x0009ebb7) vids_list_double_pane_t1

0x9c2b,	// (0x0009ebc7) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x000a4efe) vids_list_double_pane_t

0x44f2,	// (0x0009948e) main_ncimui_pane_ParamLimits

0x7f2e,	// (0x0009ceca) main_ncimui_pane_g1_ParamLimits

0x7f3a,	// (0x0009ced6) main_ncimui_pane_g2_ParamLimits

0x7f3a,	// (0x0009ced6) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x000a4b86) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x000a4b86) main_ncimui_pane_g

0x9b85,	// (0x0009eb21) main_welc_pane_g1_ParamLimits

0x9b85,	// (0x0009eb21) main_welc_pane_g1

0x9b91,	// (0x0009eb2d) main_welc_pane_g2_ParamLimits

0x9b91,	// (0x0009eb2d) main_welc_pane_g2

0x0001,

0xff5d,	// (0x000a4ef9) main_welc_pane_g_ParamLimits

0xff5d,	// (0x000a4ef9) main_welc_pane_g

0xef22,	// (0x000a3ebe) listscroll_mce_pane_ParamLimits

0xa7d3,	// (0x0009f76f) wait_bar_pane_cp10

0xbbd9,	// (0x000a0b75) main_cale_day_pane_ParamLimits

0xbbd9,	// (0x000a0b75) main_cale_week_pane_ParamLimits

0xef22,	// (0x000a3ebe) main_messa_pane_ParamLimits

0x581c,	// (0x0009a7b8) main_clock2_btn_pane_ParamLimits

0x581c,	// (0x0009a7b8) main_clock2_btn_pane

0xc445,	// (0x000a13e1) main_clock2_btn_pane_cp01_ParamLimits

0xc445,	// (0x000a13e1) main_clock2_btn_pane_cp01

0xe04e,	// (0x000a2fea) list_cale_mrui_pane_ParamLimits

0xe5f2,	// (0x000a358e) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x000a4e53) main_cf0_pane_g

0x97ab,	// (0x0009e747) area_left_week_number_pane_ParamLimits

0x97be,	// (0x0009e75a) area_top_day_name_pane_ParamLimits

0x97cc,	// (0x0009e768) frame_month_view_pane_ParamLimits

0xe71a,	// (0x000a36b6) grid_month_view_pane_ParamLimits

0xe728,	// (0x000a36c4) frm_month_g1_ParamLimits

0x984a,	// (0x0009e7e6) frm_month_g2_ParamLimits

0x985b,	// (0x0009e7f7) frm_month_g3_ParamLimits

0x986c,	// (0x0009e808) frm_month_g4_ParamLimits

0x987d,	// (0x0009e819) frm_month_g5_ParamLimits

0x9890,	// (0x0009e82c) frm_month_g6_ParamLimits

0x98a3,	// (0x0009e83f) frm_month_g7_ParamLimits

0xe735,	// (0x000a36d1) frm_month_g8_ParamLimits

0x98b6,	// (0x0009e852) frm_month_g9_ParamLimits

0x98c3,	// (0x0009e85f) frm_month_g10_ParamLimits

0x98d0,	// (0x0009e86c) frm_month_g11_ParamLimits

0x98dd,	// (0x0009e879) frm_month_g12_ParamLimits

0x98ea,	// (0x0009e886) frm_month_g13_ParamLimits

0x98f7,	// (0x0009e893) frm_month_g14_ParamLimits

0x9906,	// (0x0009e8a2) frm_month_g15_ParamLimits

0x9915,	// (0x0009e8b1) frm_month_g16_ParamLimits

0xff08,	// (0x000a4ea4) frm_month_g_ParamLimits

0xe742,	// (0x000a36de) cell_top_day_name_pane_t1_ParamLimits

0x9924,	// (0x0009e8c0) cell_area_left_week_number_pane_g1_ParamLimits

0x9933,	// (0x0009e8cf) cell_area_left_week_number_pane_t1_ParamLimits

0xc265,	// (0x000a1201) cell_month_view_pane_g1_ParamLimits

0x9949,	// (0x0009e8e5) cell_month_view_pane_t1_ParamLimits

0xef1a,	// (0x000a3eb6) main_clock2_btn_pane_g1

0xe910,	// (0x000a38ac) main_clock2_btn_pane_t1

0xb97e,	// (0x000a091a) listscroll_cmail_pane_ParamLimits

0xdc54,	// (0x000a2bf0) main_sp_fs_email_pane_g1_ParamLimits

0xdc60,	// (0x000a2bfc) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x000a4c81) main_sp_fs_email_pane_g_ParamLimits

0xe212,	// (0x000a31ae) list_recal_day_pane_ParamLimits

0xe223,	// (0x000a31bf) mian_recal_day_pane_t1

0x8945,	// (0x0009d8e1) list_single_dyc_row_text_pane_t4_ParamLimits

0x8945,	// (0x0009d8e1) list_single_dyc_row_text_pane_t4

0x897c,	// (0x0009d918) list_single_dyc_row_text_pane_t5_ParamLimits

0x897c,	// (0x0009d918) list_single_dyc_row_text_pane_t5

0xdd06,	// (0x000a2ca2) list_single_dyc_row_text_pane_t6_ParamLimits

0xdd06,	// (0x000a2ca2) list_single_dyc_row_text_pane_t6

0x3305,	// (0x000982a1) aid_mgn_list_cale_time_pane

0x44f2,	// (0x0009948e) main_gallery2_pane_ParamLimits

0xc45b,	// (0x000a13f7) main_clock2_pane_cp01_t1

0xc46b,	// (0x000a1407) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x000a4760) main_clock2_pane_cp01_t

0x1968,	// (0x00096904) cale_week_scroll_pane_g16_ParamLimits

0x1968,	// (0x00096904) cale_week_scroll_pane_g16

0x9d73,	// (0x0009ed0f) vorec_slider_pane
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large
