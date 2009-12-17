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

#include "aknlayoutscalable_abrw_pql_apps_qvga_lsc_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0004d87a };

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
0x320e,	// (0x00050a88) Screen

0x3218,	// (0x00050a92) application_window

0x3247,	// (0x00050ac1) area_bottom_pane_ParamLimits

0x3247,	// (0x00050ac1) area_bottom_pane

0x327a,	// (0x00050af4) area_top_pane_ParamLimits

0x327a,	// (0x00050af4) area_top_pane

0x0ebe,	// (0x0004e738) call_video_uplink_pane_ParamLimits

0x0ebe,	// (0x0004e738) call_video_uplink_pane

0x32eb,	// (0x00050b65) main_pane_ParamLimits

0x32eb,	// (0x00050b65) main_pane

0xc26a,	// (0x00059ae4) context_pane

0x5ea6,	// (0x00053720) navi_pane

0x5ecf,	// (0x00053749) popup_cale_events_window_ParamLimits

0x5ecf,	// (0x00053749) popup_cale_events_window

0xc27d,	// (0x00059af7) popup_mup_playback_window

0x5ee7,	// (0x00053761) signal_pane

0x1615,	// (0x0004ee8f) main_browser_pane

0xadb2,	// (0x0005862c) main_burst_pane

0x1970,	// (0x0004f1ea) main_calc_pane

0xadb2,	// (0x0005862c) main_cale_day_pane

0x173d,	// (0x0004efb7) main_cale_month_pane

0xadb2,	// (0x0005862c) main_cale_week_pane

0xadb2,	// (0x0005862c) main_call_pane

0x12eb,	// (0x0004eb65) main_call_poc_pane

0xadb2,	// (0x0005862c) main_camera_pane

0xadb2,	// (0x0005862c) main_chi_dic_pane

0xabb1,	// (0x0005842b) main_clock_pane

0x12eb,	// (0x0004eb65) main_fmradio_pane

0xadb2,	// (0x0005862c) main_graph_messa_pane

0x12eb,	// (0x0004eb65) main_help_pane

0x1615,	// (0x0004ee8f) main_im_pane

0x1546,	// (0x0004edc0) main_image_pane_ParamLimits

0x1546,	// (0x0004edc0) main_image_pane

0x12eb,	// (0x0004eb65) main_location2_pane

0xadb2,	// (0x0005862c) main_location_pane

0x12eb,	// (0x0004eb65) main_messa_pane

0x12eb,	// (0x0004eb65) main_mp2_pane

0xadb2,	// (0x0005862c) main_mp_pane

0x12eb,	// (0x0004eb65) main_msg_pane

0x12eb,	// (0x0004eb65) main_mup_eq_pane

0x12eb,	// (0x0004eb65) main_mup_pane

0xadb2,	// (0x0005862c) main_notes_pane

0x12eb,	// (0x0004eb65) main_pec_pane

0x12eb,	// (0x0004eb65) main_phob_pane

0x12eb,	// (0x0004eb65) main_pinb_pane

0x12eb,	// (0x0004eb65) main_postcard_pane

0x12eb,	// (0x0004eb65) main_qdial_pane

0xadb2,	// (0x0005862c) main_skin_pane

0x12eb,	// (0x0004eb65) main_smil2_pane

0xadb2,	// (0x0005862c) main_smil_pane

0xadb2,	// (0x0005862c) main_video_pane

0xadb2,	// (0x0005862c) main_video_tele_pane

0x1546,	// (0x0004edc0) main_viewer_pane_ParamLimits

0x1546,	// (0x0004edc0) main_viewer_pane

0xadb2,	// (0x0005862c) main_vorec_pane

0x5c86,	// (0x00053500) popup_blid_sat_info_window_ParamLimits

0x5c86,	// (0x00053500) popup_blid_sat_info_window

0x5cdc,	// (0x00053556) popup_dyc_status_message_window_ParamLimits

0x5cdc,	// (0x00053556) popup_dyc_status_message_window

0x5cf2,	// (0x0005356c) popup_grid_large_graphic_window_ParamLimits

0x5cf2,	// (0x0005356c) popup_grid_large_graphic_window

0x5d88,	// (0x00053602) popup_loc_request_window_ParamLimits

0x5d88,	// (0x00053602) popup_loc_request_window

0x5e80,	// (0x000536fa) popup_wml_address_window_ParamLimits

0x5e80,	// (0x000536fa) popup_wml_address_window

0x5adc,	// (0x00053356) call_muted_g1

0x5801,	// (0x0005307b) popup_call_audio_conf_window_ParamLimits

0x5801,	// (0x0005307b) popup_call_audio_conf_window

0x5aec,	// (0x00053366) popup_call_audio_first_window_ParamLimits

0x5aec,	// (0x00053366) popup_call_audio_first_window

0x5b4a,	// (0x000533c4) popup_call_audio_in_window_ParamLimits

0x5b4a,	// (0x000533c4) popup_call_audio_in_window

0x5b76,	// (0x000533f0) popup_call_audio_out_window_ParamLimits

0x5b76,	// (0x000533f0) popup_call_audio_out_window

0x5ba4,	// (0x0005341e) popup_call_audio_second_window_ParamLimits

0x5ba4,	// (0x0005341e) popup_call_audio_second_window

0x5bea,	// (0x00053464) popup_call_audio_wait_window_ParamLimits

0x5bea,	// (0x00053464) popup_call_audio_wait_window

0x5c1d,	// (0x00053497) popup_number_entry_window_ParamLimits

0x5c1d,	// (0x00053497) popup_number_entry_window

0x0eda,	// (0x0004e754) bg_popup_call_pane_cp05_ParamLimits

0x0eda,	// (0x0004e754) bg_popup_call_pane_cp05

0x0efa,	// (0x0004e774) popup_number_entry_window_t1

0x0f0d,	// (0x0004e787) popup_number_entry_window_t2

0x0f1f,	// (0x0004e799) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x0005c9a9) popup_number_entry_window_t

0x0f31,	// (0x0004e7ab) text_title_cp2

0x0f44,	// (0x0004e7be) bg_popup_call_pane_cp_ParamLimits

0x0f44,	// (0x0004e7be) bg_popup_call_pane_cp

0x0f52,	// (0x0004e7cc) call_thumbnail_pane

0x0f5a,	// (0x0004e7d4) popup_call_audio_in_window_g1_ParamLimits

0x0f5a,	// (0x0004e7d4) popup_call_audio_in_window_g1

0x0f66,	// (0x0004e7e0) popup_call_audio_in_window_g2_ParamLimits

0x0f66,	// (0x0004e7e0) popup_call_audio_in_window_g2

0x0f72,	// (0x0004e7ec) popup_call_audio_in_window_g3_ParamLimits

0x0f72,	// (0x0004e7ec) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x0005c9b2) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x0005c9b2) popup_call_audio_in_window_g

0x0f7e,	// (0x0004e7f8) popup_call_audio_in_window_t1_ParamLimits

0x0f7e,	// (0x0004e7f8) popup_call_audio_in_window_t1

0x0f99,	// (0x0004e813) popup_call_audio_in_window_t2_ParamLimits

0x0f99,	// (0x0004e813) popup_call_audio_in_window_t2

0x0fb4,	// (0x0004e82e) popup_call_audio_in_window_t3_ParamLimits

0x0fb4,	// (0x0004e82e) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x0005c9b9) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x0005c9b9) popup_call_audio_in_window_t

0x0f44,	// (0x0004e7be) bg_popup_call_pane_cp01_ParamLimits

0x0f44,	// (0x0004e7be) bg_popup_call_pane_cp01

0x0f52,	// (0x0004e7cc) call_thumbnail_pane_cp02

0x0fc7,	// (0x0004e841) call_type_pane_cp022

0x0fcf,	// (0x0004e849) popup_call_audio_out_window_g1_ParamLimits

0x0fcf,	// (0x0004e849) popup_call_audio_out_window_g1

0x0fe1,	// (0x0004e85b) popup_call_audio_out_window_g2_ParamLimits

0x0fe1,	// (0x0004e85b) popup_call_audio_out_window_g2

0x0fed,	// (0x0004e867) popup_call_audio_out_window_g3_ParamLimits

0x0fed,	// (0x0004e867) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x0005c9c0) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x0005c9c0) popup_call_audio_out_window_g

0x0fff,	// (0x0004e879) popup_call_audio_out_window_t1_ParamLimits

0x0fff,	// (0x0004e879) popup_call_audio_out_window_t1

0x1017,	// (0x0004e891) popup_call_audio_out_window_t2_ParamLimits

0x1017,	// (0x0004e891) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x0005c9c7) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x0005c9c7) popup_call_audio_out_window_t

0x102c,	// (0x0004e8a6) bg_popup_call_pane_ParamLimits

0x102c,	// (0x0004e8a6) bg_popup_call_pane

0x3475,	// (0x00050cef) call_thumbnail_pane_cp_ParamLimits

0x3475,	// (0x00050cef) call_thumbnail_pane_cp

0x10b0,	// (0x0004e92a) call_type_pane_cp01_ParamLimits

0x10b0,	// (0x0004e92a) call_type_pane_cp01

0x10f4,	// (0x0004e96e) popup_call_audio_first_window_g1_ParamLimits

0x10f4,	// (0x0004e96e) popup_call_audio_first_window_g1

0x1140,	// (0x0004e9ba) popup_call_audio_first_window_g2_ParamLimits

0x1140,	// (0x0004e9ba) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x0005c9cc) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x0005c9cc) popup_call_audio_first_window_g

0x1184,	// (0x0004e9fe) popup_call_audio_first_window_t1_ParamLimits

0x1184,	// (0x0004e9fe) popup_call_audio_first_window_t1

0x1230,	// (0x0004eaaa) popup_call_audio_first_window_t4_ParamLimits

0x1230,	// (0x0004eaaa) popup_call_audio_first_window_t4

0x12bc,	// (0x0004eb36) popup_call_audio_first_window_t5_ParamLimits

0x12bc,	// (0x0004eb36) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x0005c9d1) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x0005c9d1) popup_call_audio_first_window_t

0x12eb,	// (0x0004eb65) bg_popup_call_pane_cp02

0x12f5,	// (0x0004eb6f) call_type_pane_cp023

0x12fd,	// (0x0004eb77) popup_call_audio_wait_window_g1

0x1305,	// (0x0004eb7f) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0005c9d8) popup_call_audio_wait_window_g

0x130d,	// (0x0004eb87) popup_call_audio_wait_window_t3

0x131b,	// (0x0004eb95) bg_popup_call_pane_cp03_ParamLimits

0x131b,	// (0x0004eb95) bg_popup_call_pane_cp03

0x137b,	// (0x0004ebf5) call_thumbnail_pane_cp011_ParamLimits

0x137b,	// (0x0004ebf5) call_thumbnail_pane_cp011

0x1387,	// (0x0004ec01) call_type_pane_cp034_ParamLimits

0x1387,	// (0x0004ec01) call_type_pane_cp034

0x13c3,	// (0x0004ec3d) popup_call_audio_second_window_g1_ParamLimits

0x13c3,	// (0x0004ec3d) popup_call_audio_second_window_g1

0x13ff,	// (0x0004ec79) popup_call_audio_second_window_g2_ParamLimits

0x13ff,	// (0x0004ec79) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x0005c9dd) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x0005c9dd) popup_call_audio_second_window_g

0x143b,	// (0x0004ecb5) popup_call_audio_second_window_t1_ParamLimits

0x143b,	// (0x0004ecb5) popup_call_audio_second_window_t1

0x14bc,	// (0x0004ed36) popup_call_audio_second_window_t2_ParamLimits

0x14bc,	// (0x0004ed36) popup_call_audio_second_window_t2

0x14f2,	// (0x0004ed6c) popup_call_audio_second_window_t3_ParamLimits

0x14f2,	// (0x0004ed6c) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x0005c9e2) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x0005c9e2) popup_call_audio_second_window_t

0x12eb,	// (0x0004eb65) bg_popup_call_pane_cp04

0x1528,	// (0x0004eda2) list_conf_pane

0x1530,	// (0x0004edaa) popup_call_audio_conf_window_t1

0x153e,	// (0x0004edb8) call_thumbnail_pane_g1

0x1546,	// (0x0004edc0) bg_pinb_pane_ParamLimits

0x1546,	// (0x0004edc0) bg_pinb_pane

0x1554,	// (0x0004edce) find_pinb_pane

0x155d,	// (0x0004edd7) listscroll_pinb_pane_ParamLimits

0x155d,	// (0x0004edd7) listscroll_pinb_pane

0x156c,	// (0x0004ede6) pinb_bg_pane_g1

0x3499,	// (0x00050d13) pinb_bg_pane_g2

0x34a3,	// (0x00050d1d) pinb_bg_pane_g3

0x34ad,	// (0x00050d27) pinb_bg_pane_g4

0x34b7,	// (0x00050d31) pinb_bg_pane_g5

0x34c1,	// (0x00050d3b) pinb_bg_pane_g6

0x34ca,	// (0x00050d44) pinb_bg_pane_g7

0x34d3,	// (0x00050d4d) pinb_bg_pane_g8

0x34de,	// (0x00050d58) pinb_bg_pane_g9

0x34e8,	// (0x00050d62) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x0005c9e9) pinb_bg_pane_g

0x3503,	// (0x00050d7d) grid_pinb_pane

0x350c,	// (0x00050d86) list_pinb_pane

0x3515,	// (0x00050d8f) scroll_pane_cp01_ParamLimits

0x3515,	// (0x00050d8f) scroll_pane_cp01

0x1576,	// (0x0004edf0) find_pinb_pane_g1_ParamLimits

0x1576,	// (0x0004edf0) find_pinb_pane_g1

0x158e,	// (0x0004ee08) find_pinb_pane_t1

0x15a0,	// (0x0004ee1a) find_pinb_pane_t2

0x0001,

0xf189,	// (0x0005ca03) find_pinb_pane_t

0x15b5,	// (0x0004ee2f) input_focus_pane_cp01_ParamLimits

0x15b5,	// (0x0004ee2f) input_focus_pane_cp01

0x3527,	// (0x00050da1) cell_pinb_pane_ParamLimits

0x3527,	// (0x00050da1) cell_pinb_pane

0x3542,	// (0x00050dbc) cell_pinb_pane_g1_ParamLimits

0x3542,	// (0x00050dbc) cell_pinb_pane_g1

0x3552,	// (0x00050dcc) cell_pinb_pane_g2_ParamLimits

0x3552,	// (0x00050dcc) cell_pinb_pane_g2

0x15c1,	// (0x0004ee3b) cell_pinb_pane_g3_ParamLimits

0x15c1,	// (0x0004ee3b) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x0005ca08) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x0005ca08) cell_pinb_pane_g

0x12eb,	// (0x0004eb65) grid_highlight_pane_cp01

0x355e,	// (0x00050dd8) list_pinb_item_pane_ParamLimits

0x355e,	// (0x00050dd8) list_pinb_item_pane

0x12eb,	// (0x0004eb65) list_highlight_pane_cp02

0x3570,	// (0x00050dea) list_pinb_item_pane_g1_ParamLimits

0x3570,	// (0x00050dea) list_pinb_item_pane_g1

0x357d,	// (0x00050df7) list_pinb_item_pane_g2_ParamLimits

0x357d,	// (0x00050df7) list_pinb_item_pane_g2

0x3589,	// (0x00050e03) list_pinb_item_pane_g3_ParamLimits

0x3589,	// (0x00050e03) list_pinb_item_pane_g3

0x359a,	// (0x00050e14) list_pinb_item_pane_g4_ParamLimits

0x359a,	// (0x00050e14) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x0005ca0f) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x0005ca0f) list_pinb_item_pane_g

0x35a6,	// (0x00050e20) list_pinb_item_pane_t1_ParamLimits

0x35a6,	// (0x00050e20) list_pinb_item_pane_t1

0x35db,	// (0x00050e55) calc_display_pane

0x35f7,	// (0x00050e71) calc_paper_pane

0x3618,	// (0x00050e92) grid_calc_pane

0x12eb,	// (0x0004eb65) bg_list_pane_cp01

0x3634,	// (0x00050eae) clock_g1

0x363c,	// (0x00050eb6) clock_g2

0x0001,

0xf19e,	// (0x0005ca18) clock_g

0x3644,	// (0x00050ebe) clock_t1_ParamLimits

0x3644,	// (0x00050ebe) clock_t1

0x3659,	// (0x00050ed3) clock_t2_ParamLimits

0x3659,	// (0x00050ed3) clock_t2

0x366b,	// (0x00050ee5) clock_t3_ParamLimits

0x366b,	// (0x00050ee5) clock_t3

0x367d,	// (0x00050ef7) clock_t4_ParamLimits

0x367d,	// (0x00050ef7) clock_t4

0x368f,	// (0x00050f09) clock_t5_ParamLimits

0x368f,	// (0x00050f09) clock_t5

0x36a4,	// (0x00050f1e) clock_t6_ParamLimits

0x36a4,	// (0x00050f1e) clock_t6

0x36b6,	// (0x00050f30) clock_t7_ParamLimits

0x36b6,	// (0x00050f30) clock_t7

0x36c8,	// (0x00050f42) clock_t8_ParamLimits

0x36c8,	// (0x00050f42) clock_t8

0x36da,	// (0x00050f54) clock_t9_ParamLimits

0x36da,	// (0x00050f54) clock_t9

0x0008,

0xf1a3,	// (0x0005ca1d) clock_t_ParamLimits

0xf1a3,	// (0x0005ca1d) clock_t

0x15cd,	// (0x0004ee47) popup_clock_analogue_window_cp02

0x15cd,	// (0x0004ee47) popup_clock_digital_window_cp01

0x15d5,	// (0x0004ee4f) listscroll_help_pane

0x12eb,	// (0x0004eb65) phob_pre_status_pane

0x15df,	// (0x0004ee59) grid_qdial_pane

0x12eb,	// (0x0004eb65) listscroll_mce_pane

0x15e9,	// (0x0004ee63) bg_notes_pane

0x15f3,	// (0x0004ee6d) list_notes_pane

0x36ec,	// (0x00050f66) scroll_pane_cp06

0x15fd,	// (0x0004ee77) bg_calc_paper_pane

0xa315,	// (0x00057b8f) list_calc_pane

0x1615,	// (0x0004ee8f) bg_calc_display_pane

0xa32f,	// (0x00057ba9) calc_display_pane_t1

0xa344,	// (0x00057bbe) calc_display_pane_t2

0xa359,	// (0x00057bd3) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x0005ca30) calc_display_pane_t

0x36f7,	// (0x00050f71) cell_calc_pane_ParamLimits

0x36f7,	// (0x00050f71) cell_calc_pane

0x1621,	// (0x0004ee9b) bg_calc_paper_pane_g1

0x162d,	// (0x0004eea7) bg_calc_paper_pane_g2

0x1639,	// (0x0004eeb3) bg_calc_paper_pane_g3

0x1645,	// (0x0004eebf) bg_calc_paper_pane_g4

0x1651,	// (0x0004eecb) bg_calc_paper_pane_g5

0x372a,	// (0x00050fa4) bg_calc_paper_pane_g6

0x3739,	// (0x00050fb3) bg_calc_paper_pane_g7

0x3748,	// (0x00050fc2) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x0005ca37) bg_calc_paper_pane_g

0x3757,	// (0x00050fd1) calc_bg_paper_pane_g9

0x3766,	// (0x00050fe0) list_calc_item_pane_ParamLimits

0x3766,	// (0x00050fe0) list_calc_item_pane

0x165d,	// (0x0004eed7) list_calc_item_pane_g1

0xa36b,	// (0x00057be5) list_calc_item_pane_t1_ParamLimits

0xa36b,	// (0x00057be5) list_calc_item_pane_t1

0x377a,	// (0x00050ff4) list_calc_item_pane_t2_ParamLimits

0x377a,	// (0x00050ff4) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x0005ca48) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x0005ca48) list_calc_item_pane_t

0x166a,	// (0x0004eee4) cell_calc_pane_g1

0x1674,	// (0x0004eeee) grid_highlight_pane_cp02

0x1696,	// (0x0004ef10) bg_calc_display_pane_g1

0xa37d,	// (0x00057bf7) bg_calc_display_pane_g2

0x169f,	// (0x0004ef19) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x0005ca52) bg_calc_display_pane_g

0x37a8,	// (0x00051022) cell_qdial_pane_ParamLimits

0x37a8,	// (0x00051022) cell_qdial_pane

0x37ba,	// (0x00051034) cell_qdial_pane_g1_ParamLimits

0x37ba,	// (0x00051034) cell_qdial_pane_g1

0x37d0,	// (0x0005104a) cell_qdial_pane_g2_ParamLimits

0x37d0,	// (0x0005104a) cell_qdial_pane_g2

0x16a8,	// (0x0004ef22) cell_qdial_pane_g3_ParamLimits

0x16a8,	// (0x0004ef22) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x0005ca59) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x0005ca59) cell_qdial_pane_g

0x37f7,	// (0x00051071) cell_qdial_pane_t1_ParamLimits

0x37f7,	// (0x00051071) cell_qdial_pane_t1

0x380f,	// (0x00051089) cell_qdial_pane_t2_ParamLimits

0x380f,	// (0x00051089) cell_qdial_pane_t2

0x3822,	// (0x0005109c) cell_qdial_pane_t3_ParamLimits

0x3822,	// (0x0005109c) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x0005ca62) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x0005ca62) cell_qdial_pane_t

0x12eb,	// (0x0004eb65) grid_highlight_pane_cp04

0x16b4,	// (0x0004ef2e) thumbnail_qdial_pane_ParamLimits

0x16b4,	// (0x0004ef2e) thumbnail_qdial_pane

0x1710,	// (0x0004ef8a) list_help_pane

0x171a,	// (0x0004ef94) scroll_pane_cp02

0x3835,	// (0x000510af) help_list_pane_t1_ParamLimits

0x3835,	// (0x000510af) help_list_pane_t1

0xa387,	// (0x00057c01) bg_notes_pane_g2

0xa38f,	// (0x00057c09) bg_notes_pane_g3

0xa397,	// (0x00057c11) notes_bg_pane_g1

0xa39f,	// (0x00057c19) notes_bg_pane_g4

0xa3a7,	// (0x00057c21) notes_bg_pane_g5

0xa3af,	// (0x00057c29) notes_bg_pane_g6

0xa3b7,	// (0x00057c31) notes_bg_pane_g7

0xa3bf,	// (0x00057c39) notes_bg_pane_g8

0xa3c7,	// (0x00057c41) notes_bg_pane_g9

0x0006,

0xf206,	// (0x0005ca80) notes_bg_pane_g

0x197e,	// (0x0004f1f8) list_notes_text_pane_ParamLimits

0x197e,	// (0x0004f1f8) list_notes_text_pane

0x1723,	// (0x0004ef9d) list_notes_text_pane_g1

0x3851,	// (0x000510cb) list_notes_text_pane_t1

0x173d,	// (0x0004efb7) listscroll_cale_week_pane

0x387a,	// (0x000510f4) bg_cale_heading_pane

0x174c,	// (0x0004efc6) bg_cale_pane_cp01

0x388e,	// (0x00051108) cale_week_corner_pane

0x38a4,	// (0x0005111e) cale_week_day_heading_pane

0x38b8,	// (0x00051132) cale_week_scroll_pane_g1

0x38c9,	// (0x00051143) cale_week_scroll_pane_g2

0x38da,	// (0x00051154) cale_week_scroll_pane_g3

0x38eb,	// (0x00051165) cale_week_scroll_pane_g4

0x38fc,	// (0x00051176) cale_week_scroll_pane_g5

0x390d,	// (0x00051187) cale_week_scroll_pane_g6

0x391e,	// (0x00051198) cale_week_scroll_pane_g7

0x392f,	// (0x000511a9) cale_week_scroll_pane_g8

0x3942,	// (0x000511bc) cale_week_scroll_pane_g9

0x3953,	// (0x000511cd) cale_week_scroll_pane_g10

0x3964,	// (0x000511de) cale_week_scroll_pane_g11

0x3975,	// (0x000511ef) cale_week_scroll_pane_g12

0x3986,	// (0x00051200) cale_week_scroll_pane_g13

0x3997,	// (0x00051211) cale_week_scroll_pane_g14

0x39a8,	// (0x00051222) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x0005ca8f) cale_week_scroll_pane_g

0x39b9,	// (0x00051233) cale_week_time_pane

0x39cc,	// (0x00051246) grid_cale_week_pane

0x39df,	// (0x00051259) scroll_pane_cp08

0x39f9,	// (0x00051273) cell_cale_week_pane_ParamLimits

0x39f9,	// (0x00051273) cell_cale_week_pane

0x3a35,	// (0x000512af) cale_week_day_heading_pane_t1

0x3a5f,	// (0x000512d9) cale_week_day_heading_pane_t2

0x3a89,	// (0x00051303) cale_week_day_heading_pane_t3

0x3ab3,	// (0x0005132d) cale_week_day_heading_pane_t4

0x3add,	// (0x00051357) cale_week_day_heading_pane_t5

0x3b07,	// (0x00051381) cale_week_day_heading_pane_t6

0x3b31,	// (0x000513ab) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x0005caae) cale_week_day_heading_pane_t

0x1777,	// (0x0004eff1) bg_cale_side_pane

0x3b5b,	// (0x000513d5) cale_week_time_pane_t1

0x3b87,	// (0x00051401) cale_week_time_pane_t2

0x3bb3,	// (0x0005142d) cale_week_time_pane_t3

0x3bdf,	// (0x00051459) cale_week_time_pane_t4

0x3c0b,	// (0x00051485) cale_week_time_pane_t5

0x3c37,	// (0x000514b1) cale_week_time_pane_t6

0x3c63,	// (0x000514dd) cale_week_time_pane_t7

0x3c8f,	// (0x00051509) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x0005cabd) cale_week_time_pane_t

0x3cbb,	// (0x00051535) cell_cale_week_pane_g2

0x3cd4,	// (0x0005154e) cell_cale_week_pane_g3_ParamLimits

0x3cd4,	// (0x0005154e) cell_cale_week_pane_g3

0x1785,	// (0x0004efff) grid_highlight_pane_cp07

0x178d,	// (0x0004f007) listscroll_gms_pane

0x1797,	// (0x0004f011) grid_gms_pane

0x17a0,	// (0x0004f01a) listscroll_gms_pane_g1

0x17a8,	// (0x0004f022) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x0005cace) listscroll_gms_pane_g

0x3cec,	// (0x00051566) scroll_pane_cp010

0x3cf7,	// (0x00051571) cell_gms_pane_ParamLimits

0x3cf7,	// (0x00051571) cell_gms_pane

0x3d07,	// (0x00051581) cell_gms_pane_g1

0x17b0,	// (0x0004f02a) cell_gms_pane_g2

0x1723,	// (0x0004ef9d) cell_gms_pane_g3

0x17b8,	// (0x0004f032) cell_gms_pane_g4

0x0003,

0xf259,	// (0x0005cad3) cell_gms_pane_g

0x17c1,	// (0x0004f03b) grid_highlight_pane_cp09

0x5a8a,	// (0x00053304) phob_pre_status_pane_g1

0x5a92,	// (0x0005330c) phob_pre_status_pane_g2

0x5a9a,	// (0x00053314) phob_pre_status_pane_g3

0x5aa2,	// (0x0005331c) phob_pre_status_pane_g4

0x0004,

0xf65b,	// (0x0005ced5) phob_pre_status_pane_g

0x5ab2,	// (0x0005332c) phob_pre_status_pane_t1

0x5ac0,	// (0x0005333a) phob_pre_status_pane_t2

0x5ace,	// (0x00053348) phob_pre_status_pane_t3

0x0002,

0xf666,	// (0x0005cee0) phob_pre_status_pane_t

0x12eb,	// (0x0004eb65) bg_list_pane_cp05

0x3d17,	// (0x00051591) grid_vorec_pane

0xa3cf,	// (0x00057c49) vorec_t1

0xa3dd,	// (0x00057c57) vorec_t2

0xa3eb,	// (0x00057c65) vorec_t3

0xa3f9,	// (0x00057c73) vorec_t4

0xa407,	// (0x00057c81) vorec_t5

0xa415,	// (0x00057c8f) vorec_t6

0x0006,

0xf262,	// (0x0005cadc) vorec_t

0xa431,	// (0x00057cab) wait_bar_pane_cp01

0x3d1f,	// (0x00051599) cell_vorec_pane_ParamLimits

0x3d1f,	// (0x00051599) cell_vorec_pane

0x17c9,	// (0x0004f043) cell_vorec_pane_g1

0x12eb,	// (0x0004eb65) grid_highlight_pane_cp05

0x3d44,	// (0x000515be) cams_zoom_pane

0x3d53,	// (0x000515cd) image_vga_pane

0x3d6b,	// (0x000515e5) main_camera_pane_g1

0x3d7b,	// (0x000515f5) main_camera_pane_g2

0x3d8b,	// (0x00051605) main_camera_pane_g3

0x3d9b,	// (0x00051615) main_camera_pane_g4

0x3dab,	// (0x00051625) main_camera_pane_g5

0x3dbb,	// (0x00051635) main_camera_pane_g6

0x3dcb,	// (0x00051645) main_camera_pane_g7

0x0007,

0xf271,	// (0x0005caeb) main_camera_pane_g

0x3ddb,	// (0x00051655) main_camera_pane_t1

0x3df1,	// (0x0005166b) main_camera_pane_t2

0x0001,

0xf282,	// (0x0005cafc) main_camera_pane_t

0x3e23,	// (0x0005169d) cams_zoom_pane_cp_ParamLimits

0x3e23,	// (0x0005169d) cams_zoom_pane_cp

0x3e4b,	// (0x000516c5) image_cif_pane_ParamLimits

0x3e4b,	// (0x000516c5) image_cif_pane

0x3e7c,	// (0x000516f6) image_subqcif_pane

0x3e84,	// (0x000516fe) main_video_pane_g1_ParamLimits

0x3e84,	// (0x000516fe) main_video_pane_g1

0x3ea8,	// (0x00051722) main_video_pane_g2_ParamLimits

0x3ea8,	// (0x00051722) main_video_pane_g2

0x3edc,	// (0x00051756) main_video_pane_g3_ParamLimits

0x3edc,	// (0x00051756) main_video_pane_g3

0x3f0a,	// (0x00051784) main_video_pane_g4_ParamLimits

0x3f0a,	// (0x00051784) main_video_pane_g4

0x3f38,	// (0x000517b2) main_video_pane_g5_ParamLimits

0x3f38,	// (0x000517b2) main_video_pane_g5

0x17df,	// (0x0004f059) main_video_pane_g6_ParamLimits

0x17df,	// (0x0004f059) main_video_pane_g6

0x0006,

0xf287,	// (0x0005cb01) main_video_pane_g_ParamLimits

0xf287,	// (0x0005cb01) main_video_pane_g

0x3f5f,	// (0x000517d9) main_video_pane_t1_ParamLimits

0x3f5f,	// (0x000517d9) main_video_pane_t1

0x17f9,	// (0x0004f073) cams_zoom_pane_g1

0x1802,	// (0x0004f07c) cams_zoom_pane_g2

0x180b,	// (0x0004f085) cams_zoom_pane_g3

0x1814,	// (0x0004f08e) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x0005cb10) cams_zoom_pane_g

0x3fbc,	// (0x00051836) grid_cams_pane

0x3fd1,	// (0x0005184b) linegrid_cams_pane

0x3fe2,	// (0x0005185c) cell_cams_pane_ParamLimits

0x3fe2,	// (0x0005185c) cell_cams_pane

0x181d,	// (0x0004f097) cams_burst_image_pane

0x1825,	// (0x0004f09f) cell_cams_pane_g1

0x12eb,	// (0x0004eb65) grid_highlight_pane_cp03

0x166a,	// (0x0004eee4) mp_bg_pane_g1

0x12eb,	// (0x0004eb65) bg_list_pane_cp03

0xc146,	// (0x000599c0) bg_mp_pane

0xc14e,	// (0x000599c8) grid_mp_pane

0xc156,	// (0x000599d0) media_player_g1

0xc15e,	// (0x000599d8) media_player_t1

0xc16c,	// (0x000599e6) media_player_t2

0xc17a,	// (0x000599f4) media_player_t3

0xc188,	// (0x00059a02) media_player_t4

0xc196,	// (0x00059a10) media_player_t5

0xc1a4,	// (0x00059a1e) media_player_t6

0xc1b2,	// (0x00059a2c) media_player_t7

0x0006,

0xf645,	// (0x0005cebf) media_player_t

0xc1c0,	// (0x00059a3a) wait_bar_pane_cp02

0xf62a,	// (0x0005cea4) main_usb_pane_t

0x5a81,	// (0x000532fb) cell_mp_pane

0x166a,	// (0x0004eee4) cell_mp_pane_g1

0x12eb,	// (0x0004eb65) grid_highlight_pane_cp06

0x182d,	// (0x0004f0a7) grid_skin_colour_pane

0x1835,	// (0x0004f0af) list_highlight_pane_cp03

0x4050,	// (0x000518ca) skin_g1

0x183d,	// (0x0004f0b7) skin_t1

0x184c,	// (0x0004f0c6) skin_t2

0x0001,

0xf2cb,	// (0x0005cb45) skin_t

0x4058,	// (0x000518d2) cell_skin_colour_pane_ParamLimits

0x4058,	// (0x000518d2) cell_skin_colour_pane

0x185a,	// (0x0004f0d4) cell_skin_colour_pane_g1

0x40aa,	// (0x00051924) call_video_g1_ParamLimits

0x40aa,	// (0x00051924) call_video_g1

0x40c0,	// (0x0005193a) call_video_g2_ParamLimits

0x40c0,	// (0x0005193a) call_video_g2

0x0001,

0xf2d0,	// (0x0005cb4a) call_video_g_ParamLimits

0xf2d0,	// (0x0005cb4a) call_video_g

0x40f6,	// (0x00051970) call_video_uplink_pane_cp1_ParamLimits

0x40f6,	// (0x00051970) call_video_uplink_pane_cp1

0x1874,	// (0x0004f0ee) call_video_uplink_pane_cp2

0x415d,	// (0x000519d7) video_down_crop_pane_ParamLimits

0x415d,	// (0x000519d7) video_down_crop_pane

0x4205,	// (0x00051a7f) video_down_pane_ParamLimits

0x4205,	// (0x00051a7f) video_down_pane

0x187c,	// (0x0004f0f6) video_down_subqcif_pane_ParamLimits

0x187c,	// (0x0004f0f6) video_down_subqcif_pane

0x1894,	// (0x0004f10e) video_down_subqcif_pane_cp_ParamLimits

0x1894,	// (0x0004f10e) video_down_subqcif_pane_cp

0x18b8,	// (0x0004f132) im_reading_pane_ParamLimits

0x18b8,	// (0x0004f132) im_reading_pane

0x4295,	// (0x00051b0f) im_writing_pane_ParamLimits

0x4295,	// (0x00051b0f) im_writing_pane

0x42ab,	// (0x00051b25) im_reading_pane_t1

0x18d2,	// (0x0004f14c) list_im_pane

0x18e3,	// (0x0004f15d) scroll_pane_cp07

0x42e1,	// (0x00051b5b) im_writing_pane_t1_ParamLimits

0x42e1,	// (0x00051b5b) im_writing_pane_t1

0x18fc,	// (0x0004f176) im_writing_pane_t2_ParamLimits

0x18fc,	// (0x0004f176) im_writing_pane_t2

0x0001,

0xf2da,	// (0x0005cb54) im_writing_pane_t_ParamLimits

0xf2da,	// (0x0005cb54) im_writing_pane_t

0x12eb,	// (0x0004eb65) input_focus_pane_cp04

0x12eb,	// (0x0004eb65) input_focus_pane_cp05

0x42f6,	// (0x00051b70) list_im_single_pane_ParamLimits

0x42f6,	// (0x00051b70) list_im_single_pane

0x1919,	// (0x0004f193) list_single_im_pane_t1

0x5a47,	// (0x000532c1) blid_accuracy_pane

0x5a4f,	// (0x000532c9) blid_compass_pane

0x5a57,	// (0x000532d1) main_location_t1

0x5a65,	// (0x000532df) main_location_t2

0x5a73,	// (0x000532ed) main_location_t3

0x0002,

0xf654,	// (0x0005cece) main_location_t

0x12eb,	// (0x0004eb65) aid_levels_location

0x166a,	// (0x0004eee4) blid_accuracy_pane_g1

0x166a,	// (0x0004eee4) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x0005cbb6) blid_accuracy_pane_g

0x1953,	// (0x0004f1cd) wml_content_pane

0xa4fa,	// (0x00057d74) wml_button_pane_ParamLimits

0xa4fa,	// (0x00057d74) wml_button_pane

0x430c,	// (0x00051b86) wml_list_single_large_pane_ParamLimits

0x430c,	// (0x00051b86) wml_list_single_large_pane

0x4320,	// (0x00051b9a) wml_list_single_medium_pane_ParamLimits

0x4320,	// (0x00051b9a) wml_list_single_medium_pane

0x4335,	// (0x00051baf) wml_list_single_small_pane_ParamLimits

0x4335,	// (0x00051baf) wml_list_single_small_pane

0xa50e,	// (0x00057d88) wml_selection_box_pane_ParamLimits

0xa50e,	// (0x00057d88) wml_selection_box_pane

0xa521,	// (0x00057d9b) wml_list_single_pane_t1

0xa530,	// (0x00057daa) wml_list_single_medium_pane_t1

0xa53f,	// (0x00057db9) wml_list_single_large_pane_t1

0xa54e,	// (0x00057dc8) input_focus_pane_cp02_ParamLimits

0xa54e,	// (0x00057dc8) input_focus_pane_cp02

0xa561,	// (0x00057ddb) wml_selection_box_pane_g1

0xa56a,	// (0x00057de4) wml_selection_box_pane_t1_ParamLimits

0xa56a,	// (0x00057de4) wml_selection_box_pane_t1

0x1546,	// (0x0004edc0) bg_wml_button_pane_ParamLimits

0x1546,	// (0x0004edc0) bg_wml_button_pane

0xa582,	// (0x00057dfc) wml_button_pane_g1

0xa58a,	// (0x00057e04) wml_button_pane_t1

0xa582,	// (0x00057dfc) wml_button_bg_pane_g1

0xa59a,	// (0x00057e14) wml_button_bg_pane_g2

0xa5a2,	// (0x00057e1c) wml_button_bg_pane_g3

0xa5aa,	// (0x00057e24) wml_button_bg_pane_g4

0xa5b2,	// (0x00057e2c) wml_button_bg_pane_g5

0xa5ba,	// (0x00057e34) wml_button_bg_pane_g6

0xa5c2,	// (0x00057e3c) wml_button_bg_pane_g7

0xa5ca,	// (0x00057e44) wml_button_bg_pane_g8

0xa5d2,	// (0x00057e4c) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x0005cb59) wml_button_bg_pane_g

0x434c,	// (0x00051bc6) bg_list_pane_cp02

0xa5da,	// (0x00057e54) mce_header_pane_ParamLimits

0xa5da,	// (0x00057e54) mce_header_pane

0xa5ee,	// (0x00057e68) mce_icon_pane

0xa5ee,	// (0x00057e68) mce_image_pane

0xa5f7,	// (0x00057e71) mce_text_pane_ParamLimits

0xa5f7,	// (0x00057e71) mce_text_pane

0x4355,	// (0x00051bcf) scroll_pane_cp03

0x4355,	// (0x00051bcf) scroll_pane_cp04

0xa60b,	// (0x00057e85) scroll_pane_cp05_ParamLimits

0xa60b,	// (0x00057e85) scroll_pane_cp05

0x435f,	// (0x00051bd9) mce_header_field_pane_ParamLimits

0x435f,	// (0x00051bd9) mce_header_field_pane

0x4376,	// (0x00051bf0) mce_header_field_pane_2_ParamLimits

0x4376,	// (0x00051bf0) mce_header_field_pane_2

0x438c,	// (0x00051c06) mce_header_field_pane_3

0x4394,	// (0x00051c0e) list_single_mce_message_pane_ParamLimits

0x4394,	// (0x00051c0e) list_single_mce_message_pane

0x43a9,	// (0x00051c23) list_single_mce_smart_pane_ParamLimits

0x43a9,	// (0x00051c23) list_single_mce_smart_pane

0xa617,	// (0x00057e91) input_focus_pane_cp03

0xa620,	// (0x00057e9a) list_header_data_pane

0x43c9,	// (0x00051c43) mce_header_field_pane_t1

0x43d7,	// (0x00051c51) list_single_mce_header_pane_ParamLimits

0x43d7,	// (0x00051c51) list_single_mce_header_pane

0xa628,	// (0x00057ea2) list_single_mce_header_pane_t1

0xa637,	// (0x00057eb1) list_single_mce_message_pane_g1

0xa640,	// (0x00057eba) list_single_mce_message_pane_t1

0x4409,	// (0x00051c83) bg_cale_heading_pane_cp01_ParamLimits

0x4409,	// (0x00051c83) bg_cale_heading_pane_cp01

0xa64f,	// (0x00057ec9) bg_cale_pane_cp02_ParamLimits

0xa64f,	// (0x00057ec9) bg_cale_pane_cp02

0x442c,	// (0x00051ca6) cale_month_corner_pane

0x4442,	// (0x00051cbc) cale_month_day_heading_pane_ParamLimits

0x4442,	// (0x00051cbc) cale_month_day_heading_pane

0x4475,	// (0x00051cef) cale_month_pane_g1_ParamLimits

0x4475,	// (0x00051cef) cale_month_pane_g1

0x4491,	// (0x00051d0b) cale_month_pane_g2_ParamLimits

0x4491,	// (0x00051d0b) cale_month_pane_g2

0x44ac,	// (0x00051d26) cale_month_pane_g3_ParamLimits

0x44ac,	// (0x00051d26) cale_month_pane_g3

0x44d8,	// (0x00051d52) cale_month_pane_g4_ParamLimits

0x44d8,	// (0x00051d52) cale_month_pane_g4

0x4504,	// (0x00051d7e) cale_month_pane_g5_ParamLimits

0x4504,	// (0x00051d7e) cale_month_pane_g5

0x4530,	// (0x00051daa) cale_month_pane_g6_ParamLimits

0x4530,	// (0x00051daa) cale_month_pane_g6

0x455c,	// (0x00051dd6) cale_month_pane_g7_ParamLimits

0x455c,	// (0x00051dd6) cale_month_pane_g7

0x4588,	// (0x00051e02) cale_month_pane_g8_ParamLimits

0x4588,	// (0x00051e02) cale_month_pane_g8

0x45c4,	// (0x00051e3e) cale_month_pane_g9_ParamLimits

0x45c4,	// (0x00051e3e) cale_month_pane_g9

0x45fe,	// (0x00051e78) cale_month_pane_g10_ParamLimits

0x45fe,	// (0x00051e78) cale_month_pane_g10

0x4638,	// (0x00051eb2) cale_month_pane_g11_ParamLimits

0x4638,	// (0x00051eb2) cale_month_pane_g11

0x4672,	// (0x00051eec) cale_month_pane_g12_ParamLimits

0x4672,	// (0x00051eec) cale_month_pane_g12

0x46ac,	// (0x00051f26) cale_month_pane_g13_ParamLimits

0x46ac,	// (0x00051f26) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x0005cb6c) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x0005cb6c) cale_month_pane_g

0x46e6,	// (0x00051f60) cale_month_week_pane

0x46f9,	// (0x00051f73) grid_cale_month_pane_ParamLimits

0x46f9,	// (0x00051f73) grid_cale_month_pane

0x4727,	// (0x00051fa1) cale_month_day_heading_pane_t1

0x4785,	// (0x00051fff) cale_month_day_heading_pane_t2

0x47ea,	// (0x00052064) cale_month_day_heading_pane_t3

0x484f,	// (0x000520c9) cale_month_day_heading_pane_t4

0x48b4,	// (0x0005212e) cale_month_day_heading_pane_t5

0x4919,	// (0x00052193) cale_month_day_heading_pane_t6

0x497e,	// (0x000521f8) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x0005cb87) cale_month_day_heading_pane_t

0x1777,	// (0x0004eff1) bg_cale_side_pane_cp01

0x49eb,	// (0x00052265) cale_month_week_pane_t1

0x4a02,	// (0x0005227c) cale_month_week_pane_t2

0x4a19,	// (0x00052293) cale_month_week_pane_t3

0x4a30,	// (0x000522aa) cale_month_week_pane_t4

0x4a47,	// (0x000522c1) cale_month_week_pane_t5

0x4a5e,	// (0x000522d8) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x0005cb96) cale_month_week_pane_t

0x4a75,	// (0x000522ef) cell_cale_month_pane_ParamLimits

0x4a75,	// (0x000522ef) cell_cale_month_pane

0xeb9d,	// (0x0005c417) cell_cale_month_pane_g1

0x4b23,	// (0x0005239d) cell_cale_month_pane_t1_ParamLimits

0x4b23,	// (0x0005239d) cell_cale_month_pane_t1

0x1785,	// (0x0004efff) grid_highlight_pane_cp08

0x166a,	// (0x0004eee4) main_smil_g1

0x4b3f,	// (0x000523b9) smil_status_pane

0xa6ae,	// (0x00057f28) smil_text_pane

0xc026,	// (0x000598a0) bg_popup_call3_rect_pane_g8

0xc02e,	// (0x000598a8) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x0005ce4f) bg_popup_call3_rect_pane_g

0xc2e4,	// (0x00059b5e) smil_status_volume_pane_g1

0xa6b8,	// (0x00057f32) smil_status_pane_t1

0xec9b,	// (0x0005c515) volume_smil_pane

0xa6cf,	// (0x00057f49) list_smil_text_pane

0x4b50,	// (0x000523ca) scroll_pane_cp011

0x4b5b,	// (0x000523d5) smil_text_list_pane_t1_ParamLimits

0x4b5b,	// (0x000523d5) smil_text_list_pane_t1

0xeba9,	// (0x0005c423) aid_volume_smil_ParamLimits

0xeba9,	// (0x0005c423) aid_volume_smil

0x166a,	// (0x0004eee4) smil_volume_pane_g1

0x166a,	// (0x0004eee4) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x0005cbb6) smil_volume_pane_g

0x1615,	// (0x0004ee8f) listscroll_cale_day_pane

0xa6d9,	// (0x00057f53) bg_cale_pane

0xa6f1,	// (0x00057f6b) list_cale_pane

0xa702,	// (0x00057f7c) scroll_pane_cp09

0xa713,	// (0x00057f8d) cale_bg_pane_g1

0xa71b,	// (0x00057f95) cale_bg_pane_g2

0xa723,	// (0x00057f9d) cale_bg_pane_g3

0xa72b,	// (0x00057fa5) cale_bg_pane_g4

0xa733,	// (0x00057fad) cale_bg_pane_g5

0xa73b,	// (0x00057fb5) cale_bg_pane_g6

0xa743,	// (0x00057fbd) cale_bg_pane_g7

0xa74b,	// (0x00057fc5) cale_bg_pane_g8

0xa753,	// (0x00057fcd) cale_bg_pane_g9

0x0008,

0xf341,	// (0x0005cbbb) cale_bg_pane_g

0x4b99,	// (0x00052413) list_cale_time_pane_ParamLimits

0x4b99,	// (0x00052413) list_cale_time_pane

0xa75b,	// (0x00057fd5) list_cale_time_pane_g1_ParamLimits

0xa75b,	// (0x00057fd5) list_cale_time_pane_g1

0xa767,	// (0x00057fe1) list_cale_time_pane_g2_ParamLimits

0xa767,	// (0x00057fe1) list_cale_time_pane_g2

0x4bae,	// (0x00052428) list_cale_time_pane_g3_ParamLimits

0x4bae,	// (0x00052428) list_cale_time_pane_g3

0x4bbc,	// (0x00052436) list_cale_time_pane_g4_ParamLimits

0x4bbc,	// (0x00052436) list_cale_time_pane_g4

0x4bca,	// (0x00052444) list_cale_time_pane_g5_ParamLimits

0x4bca,	// (0x00052444) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x0005cbce) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x0005cbce) list_cale_time_pane_g

0xa781,	// (0x00057ffb) list_cale_time_pane_t1_ParamLimits

0xa781,	// (0x00057ffb) list_cale_time_pane_t1

0xa7a9,	// (0x00058023) list_cale_time_pane_t2_ParamLimits

0xa7a9,	// (0x00058023) list_cale_time_pane_t2

0x4ece,	// (0x00052748) aid_blid_cardinal_pane

0x4f0c,	// (0x00052786) compass_pane_t4

0xa7d1,	// (0x0005804b) list_cale_time_pane_t4_ParamLimits

0xa7d1,	// (0x0005804b) list_cale_time_pane_t4

0x4f1a,	// (0x00052794) compass_pane_t5

0x4f28,	// (0x000527a2) compass_pane_t6

0x4f36,	// (0x000527b0) compass_pane_t7

0xacb5,	// (0x0005852f) navi_pane_cc_t1

0xae59,	// (0x000586d3) aid_phob_thumbnail_center_pane

0x54f9,	// (0x00052d73) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x0005cbdb) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x0005cbdb) list_cale_time_pane_t

0x0f44,	// (0x0004e7be) bg_popup_window_pane_cp02_ParamLimits

0x0f44,	// (0x0004e7be) bg_popup_window_pane_cp02

0xa7f9,	// (0x00058073) heading_pane_cp01_ParamLimits

0xa7f9,	// (0x00058073) heading_pane_cp01

0xa805,	// (0x0005807f) loc_req_pane_ParamLimits

0xa805,	// (0x0005807f) loc_req_pane

0xa815,	// (0x0005808f) loc_type_pane_ParamLimits

0xa815,	// (0x0005808f) loc_type_pane

0xa827,	// (0x000580a1) loc_type_pane_t1_ParamLimits

0xa827,	// (0x000580a1) loc_type_pane_t1

0xa839,	// (0x000580b3) loc_type_pane_t2_ParamLimits

0xa839,	// (0x000580b3) loc_type_pane_t2

0xa84b,	// (0x000580c5) loc_type_pane_t3_ParamLimits

0xa84b,	// (0x000580c5) loc_type_pane_t3

0x0002,

0xf368,	// (0x0005cbe2) loc_type_pane_t_ParamLimits

0xf368,	// (0x0005cbe2) loc_type_pane_t

0xa85d,	// (0x000580d7) list_loc_req_pane

0xa867,	// (0x000580e1) scroll_pane_cp012

0x4bd6,	// (0x00052450) list_single_loc_request_popup_menu_pane_ParamLimits

0x4bd6,	// (0x00052450) list_single_loc_request_popup_menu_pane

0xa870,	// (0x000580ea) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa870,	// (0x000580ea) list_single_loc_request_popup_menu_pane_g1

0xa87c,	// (0x000580f6) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa87c,	// (0x000580f6) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x0005cbe9) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x0005cbe9) list_single_loc_request_popup_menu_pane_g

0xa888,	// (0x00058102) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa888,	// (0x00058102) list_single_loc_request_popup_menu_pane_t1

0x1546,	// (0x0004edc0) bg_popup_window_pane_cp03_ParamLimits

0x1546,	// (0x0004edc0) bg_popup_window_pane_cp03

0xa89e,	// (0x00058118) heading_loc_req_pane_ParamLimits

0xa89e,	// (0x00058118) heading_loc_req_pane

0x4be3,	// (0x0005245d) popup_dyc_status_message_window_g1_ParamLimits

0x4be3,	// (0x0005245d) popup_dyc_status_message_window_g1

0x4bf7,	// (0x00052471) popup_dyc_status_message_window_t1_ParamLimits

0x4bf7,	// (0x00052471) popup_dyc_status_message_window_t1

0x4c0c,	// (0x00052486) popup_dyc_status_message_window_t2_ParamLimits

0x4c0c,	// (0x00052486) popup_dyc_status_message_window_t2

0x4c21,	// (0x0005249b) popup_dyc_status_message_window_t3_ParamLimits

0x4c21,	// (0x0005249b) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x0005cbee) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x0005cbee) popup_dyc_status_message_window_t

0x12eb,	// (0x0004eb65) bg_heading_pane_cp01

0xa8aa,	// (0x00058124) heading_loc_req_pane_g1

0xa8b2,	// (0x0005812c) heading_loc_req_pane_g2

0xa8ba,	// (0x00058134) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x0005cbf5) heading_loc_req_pane_g

0xa8c2,	// (0x0005813c) heading_loc_req_pane_t1

0xa96b,	// (0x000581e5) bg_popup_sub_pane_cp01_ParamLimits

0xa96b,	// (0x000581e5) bg_popup_sub_pane_cp01

0xa979,	// (0x000581f3) popup_cale_events_window_g1_ParamLimits

0xa979,	// (0x000581f3) popup_cale_events_window_g1

0xa999,	// (0x00058213) popup_cale_events_window_g2_ParamLimits

0xa999,	// (0x00058213) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x0005cc29) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x0005cc29) popup_cale_events_window_g

0xa9b9,	// (0x00058233) popup_cale_events_window_t1_ParamLimits

0xa9b9,	// (0x00058233) popup_cale_events_window_t1

0xa9cb,	// (0x00058245) popup_cale_events_window_t2_ParamLimits

0xa9cb,	// (0x00058245) popup_cale_events_window_t2

0xaa09,	// (0x00058283) popup_cale_events_window_t3_ParamLimits

0xaa09,	// (0x00058283) popup_cale_events_window_t3

0xaa43,	// (0x000582bd) popup_cale_events_window_t4_ParamLimits

0xaa43,	// (0x000582bd) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x0005cc2e) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x0005cc2e) popup_cale_events_window_t

0x4cb1,	// (0x0005252b) call_type_pane

0x4cc1,	// (0x0005253b) popup_call_status_window_g1

0x4cd5,	// (0x0005254f) popup_call_status_window_g2

0x4ce9,	// (0x00052563) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x0005cc37) popup_call_status_window_g

0xaa79,	// (0x000582f3) call_type_pane_g1

0xaa82,	// (0x000582fc) call_type_pane_g2

0x0001,

0xf3c4,	// (0x0005cc3e) call_type_pane_g

0x12eb,	// (0x0004eb65) bg_popup_sub_pane_cp02

0xaa8b,	// (0x00058305) listscroll_popup_wml_pane

0xaa93,	// (0x0005830d) list_wml_pane

0xaa9d,	// (0x00058317) scroll_pane_cp013

0x4cf9,	// (0x00052573) list_single_graphic_popup_wml_pane_ParamLimits

0x4cf9,	// (0x00052573) list_single_graphic_popup_wml_pane

0x166a,	// (0x0004eee4) list_single_graphic_popup_wml_pane_g1

0xaaa6,	// (0x00058320) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x0005cc43) list_single_graphic_popup_wml_pane_g

0xaaae,	// (0x00058328) list_single_graphic_popup_wml_pane_t1

0xaac4,	// (0x0005833e) aid_call_pane

0x153e,	// (0x0004edb8) popup_clock_analogue_window_g1

0x153e,	// (0x0004edb8) popup_clock_analogue_window_g2

0xebcb,	// (0x0005c445) popup_clock_analogue_window_g3

0xebcb,	// (0x0005c445) popup_clock_analogue_window_g4

0x166a,	// (0x0004eee4) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x0005cc48) popup_clock_analogue_window_g

0xebd3,	// (0x0005c44d) popup_clock_analogue_window_t1

0xebe1,	// (0x0005c45b) clock_digital_number_pane_ParamLimits

0xebe1,	// (0x0005c45b) clock_digital_number_pane

0xebed,	// (0x0005c467) clock_digital_number_pane_cp02_ParamLimits

0xebed,	// (0x0005c467) clock_digital_number_pane_cp02

0xebf9,	// (0x0005c473) clock_digital_number_pane_cp03_ParamLimits

0xebf9,	// (0x0005c473) clock_digital_number_pane_cp03

0xec05,	// (0x0005c47f) clock_digital_number_pane_cp04_ParamLimits

0xec05,	// (0x0005c47f) clock_digital_number_pane_cp04

0xec11,	// (0x0005c48b) clock_digital_separator_pane_ParamLimits

0xec11,	// (0x0005c48b) clock_digital_separator_pane

0xec1d,	// (0x0005c497) popup_clock_digital_window_t1

0x166a,	// (0x0004eee4) clock_digital_number_pane_g1

0x166a,	// (0x0004eee4) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x0005cbb6) clock_digital_number_pane_g

0x166a,	// (0x0004eee4) clock_digital_separator_pane_g1

0x166a,	// (0x0004eee4) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x0005cbb6) clock_digital_separator_pane_g

0x12eb,	// (0x0004eb65) bg_popup_window_pane_cp04

0xaacc,	// (0x00058346) heading_pane_cp03

0xaad4,	// (0x0005834e) listscroll_popup_gms_pane

0xaadc,	// (0x00058356) grid_large_graphic_popup_pane

0xaae6,	// (0x00058360) listscroll_popup_gms_pane_g1

0xaaee,	// (0x00058368) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x0005cc53) listscroll_popup_gms_pane_g

0xa4f2,	// (0x00057d6c) scroll_pane_cp014

0x4d0c,	// (0x00052586) cell_large_graphic_popup_pane_ParamLimits

0x4d0c,	// (0x00052586) cell_large_graphic_popup_pane

0x4d22,	// (0x0005259c) cell_large_graphic_popup_pane_g1_ParamLimits

0x4d22,	// (0x0005259c) cell_large_graphic_popup_pane_g1

0xaaf6,	// (0x00058370) cell_large_graphic_popup_pane_g2_ParamLimits

0xaaf6,	// (0x00058370) cell_large_graphic_popup_pane_g2

0xab02,	// (0x0005837c) cell_large_graphic_popup_pane_g3_ParamLimits

0xab02,	// (0x0005837c) cell_large_graphic_popup_pane_g3

0xab0f,	// (0x00058389) cell_large_graphic_popup_pane_g4_ParamLimits

0xab0f,	// (0x00058389) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x0005cc58) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x0005cc58) cell_large_graphic_popup_pane_g

0xab1f,	// (0x00058399) grid_highlight_pane_cp010

0x166a,	// (0x0004eee4) bg_popup_call_pane_g1

0xab29,	// (0x000583a3) list_single_graphic_popup_conf_pane_ParamLimits

0xab29,	// (0x000583a3) list_single_graphic_popup_conf_pane

0xab3c,	// (0x000583b6) list_highlight_pane_cp01

0xab45,	// (0x000583bf) list_single_graphic_popup_conf_pane_g1

0xab4d,	// (0x000583c7) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x0005cc61) list_single_graphic_popup_conf_pane_g

0xab55,	// (0x000583cf) list_single_graphic_popup_conf_pane_t1

0xab63,	// (0x000583dd) linegrid_cams_pane_g1

0x4d2e,	// (0x000525a8) linegrid_cams_pane_g2

0x1723,	// (0x0004ef9d) linegrid_cams_pane_g3

0xab6c,	// (0x000583e6) linegrid_cams_pane_g4

0x4d37,	// (0x000525b1) linegrid_cams_pane_g5

0x4d40,	// (0x000525ba) linegrid_cams_pane_g6

0x17b8,	// (0x0004f032) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x0005cc66) linegrid_cams_pane_g

0xab75,	// (0x000583ef) popup_clock_analogue_window

0xab75,	// (0x000583ef) popup_clock_digital_window

0x12eb,	// (0x0004eb65) popup_phob_thumbnail_window

0x166a,	// (0x0004eee4) call_video_uplink_pane_g1

0xab7e,	// (0x000583f8) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x0005cc75) call_video_uplink_pane_g

0x1785,	// (0x0004efff) video_uplink_pane

0xab86,	// (0x00058400) mce_image_pane_g1

0x4d49,	// (0x000525c3) mce_image_pane_g2

0x4d51,	// (0x000525cb) mce_image_pane_g3

0x4d59,	// (0x000525d3) mce_image_pane_g4

0x4d61,	// (0x000525db) mce_image_pane_g5

0x0004,

0xf400,	// (0x0005cc7a) mce_image_pane_g

0xab90,	// (0x0005840a) control_top_pane_stacon_cp01_ParamLimits

0xab90,	// (0x0005840a) control_top_pane_stacon_cp01

0xaba0,	// (0x0005841a) uni_indicator_pane_stacon_cp01_ParamLimits

0xaba0,	// (0x0005841a) uni_indicator_pane_stacon_cp01

0xabb1,	// (0x0005842b) bg_popup_sub_pane_cp03

0xabbb,	// (0x00058435) chi_dic_find_pane

0x4d69,	// (0x000525e3) listscroll_chi_dic_pane

0xabc3,	// (0x0005843d) main_pane_chidic_g1

0xabcb,	// (0x00058445) chi_dic_find_pane_t1

0xabd9,	// (0x00058453) find_chidic_pane

0xabe2,	// (0x0005845c) chi_dic_list_pane_ParamLimits

0xabe2,	// (0x0005845c) chi_dic_list_pane

0xabf3,	// (0x0005846d) scroll_pane_cp020

0xabfb,	// (0x00058475) find_chidic_pane_t1

0x12eb,	// (0x0004eb65) input_focus_pane_cp06

0x4d7d,	// (0x000525f7) list_chi_dic_pane_ParamLimits

0x4d7d,	// (0x000525f7) list_chi_dic_pane

0x4d8f,	// (0x00052609) list_chi_dic_pane_t1_ParamLimits

0x4d8f,	// (0x00052609) list_chi_dic_pane_t1

0x12eb,	// (0x0004eb65) list_highlight_pane_cp020

0xac0a,	// (0x00058484) bg_cale_heading_pane_g1

0x4da2,	// (0x0005261c) bg_cale_heading_pane_g2

0x4daa,	// (0x00052624) bg_cale_heading_pane_g3

0x4db2,	// (0x0005262c) bg_cale_heading_pane_g4

0x4dbc,	// (0x00052636) bg_cale_heading_pane_g5

0x4dc6,	// (0x00052640) bg_cale_heading_pane_g6

0x4dce,	// (0x00052648) bg_cale_heading_pane_g7

0x4dd6,	// (0x00052650) bg_cale_heading_pane_g8

0x4de0,	// (0x0005265a) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x0005cc85) bg_cale_heading_pane_g

0xac0a,	// (0x00058484) bg_cale_side_pane_g1

0x4dea,	// (0x00052664) bg_cale_side_pane_g2

0x4df2,	// (0x0005266c) bg_cale_side_pane_g3

0x4dfa,	// (0x00052674) bg_cale_side_pane_g4

0x4e02,	// (0x0005267c) bg_cale_side_pane_g5

0x4e0a,	// (0x00052684) bg_cale_side_pane_g6

0x4e12,	// (0x0005268c) bg_cale_side_pane_g7

0x4e1a,	// (0x00052694) bg_cale_side_pane_g8

0x4e22,	// (0x0005269c) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x0005cc98) bg_cale_side_pane_g

0x4e2a,	// (0x000526a4) popup_call_status_window_ParamLimits

0x4e2a,	// (0x000526a4) popup_call_status_window

0xac12,	// (0x0005848c) stacon_top_pane

0xac1a,	// (0x00058494) status_pane_ParamLimits

0xac1a,	// (0x00058494) status_pane

0xac34,	// (0x000584ae) status_small_pane

0xac3c,	// (0x000584b6) control_pane

0x12eb,	// (0x0004eb65) stacon_bottom_pane

0xac44,	// (0x000584be) list_single_mce_smart_pane_t1_ParamLimits

0xac44,	// (0x000584be) list_single_mce_smart_pane_t1

0xac57,	// (0x000584d1) list_single_mce_smart_pane_t2_ParamLimits

0xac57,	// (0x000584d1) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x0005ccab) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x0005ccab) list_single_mce_smart_pane_t

0x4e71,	// (0x000526eb) compass_pane

0x4e7a,	// (0x000526f4) main_location2_pane_t1

0x4e90,	// (0x0005270a) main_location2_pane_t2

0x4ea6,	// (0x00052720) main_location2_pane_t3

0x0003,

0xf436,	// (0x0005ccb0) main_location2_pane_t

0xac7f,	// (0x000584f9) compass_pane_g1_ParamLimits

0xac7f,	// (0x000584f9) compass_pane_g1

0x4eee,	// (0x00052768) compass_pane_t1

0x4efd,	// (0x00052777) compass_pane_t2

0x0005,

0xf43f,	// (0x0005ccb9) compass_pane_t

0x4f44,	// (0x000527be) text_secondary_cp61

0xacac,	// (0x00058526) navi_pane_cams_g5

0xaced,	// (0x00058567) navi_pane_im_t1

0xacfb,	// (0x00058575) navi_pane_mp_g1_ParamLimits

0xacfb,	// (0x00058575) navi_pane_mp_g1

0xad0f,	// (0x00058589) navi_pane_mp_g2_ParamLimits

0xad0f,	// (0x00058589) navi_pane_mp_g2

0xad1b,	// (0x00058595) navi_pane_mp_g3_ParamLimits

0xad1b,	// (0x00058595) navi_pane_mp_g3

0x0002,

0xf453,	// (0x0005cccd) navi_pane_mp_g_ParamLimits

0xf453,	// (0x0005cccd) navi_pane_mp_g

0xad27,	// (0x000585a1) navi_pane_mp_t1

0xad35,	// (0x000585af) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x0005ccd4) navi_pane_mp_t

0xada2,	// (0x0005861c) navi_pane_vt_g1

0xad27,	// (0x000585a1) navi_pane_vt_t1

0xadaa,	// (0x00058624) navi_slider_pane

0xadb2,	// (0x0005862c) zooming_pane

0xadba,	// (0x00058634) navi_slider_pane_g1

0xec3a,	// (0x0005c4b4) navi_slider_pane_g2

0x0006,

0xf461,	// (0x0005ccdb) navi_slider_pane_g

0xadde,	// (0x00058658) aid_levels_zoom

0xade6,	// (0x00058660) zooming_pane_g1

0xadee,	// (0x00058668) zooming_pane_g2

0xadee,	// (0x00058668) zooming_pane_g3

0x0002,

0xf470,	// (0x0005ccea) zooming_pane_g

0xadf6,	// (0x00058670) level_10_zoom

0xadff,	// (0x00058679) level_11_zoom

0xae08,	// (0x00058682) level_1_zoom

0xae11,	// (0x0005868b) level_2_zoom

0xae1a,	// (0x00058694) level_3_zoom

0xae23,	// (0x0005869d) level_4_zoom

0xae2c,	// (0x000586a6) level_5_zoom

0xae35,	// (0x000586af) level_6_zoom

0xae3e,	// (0x000586b8) level_7_zoom

0xae47,	// (0x000586c1) level_8_zoom

0xae50,	// (0x000586ca) level_9_zoom

0xae61,	// (0x000586db) popup_phob_thumbnail_window_g1

0xae69,	// (0x000586e3) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x0005ccf1) popup_phob_thumbnail_window_g

0xc1c8,	// (0x00059a42) level_1_location

0xc1d0,	// (0x00059a4a) level_2_location

0xc1d8,	// (0x00059a52) level_3_location

0xc1e0,	// (0x00059a5a) level_4_location

0xadb2,	// (0x0005862c) level_5_location

0x4fcf,	// (0x00052849) mce_icon_pane_g1

0x4fd7,	// (0x00052851) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x0005ccf6) mce_icon_pane_g

0x4fdf,	// (0x00052859) main_mup_pane_g1_ParamLimits

0x4fdf,	// (0x00052859) main_mup_pane_g1

0x4ff5,	// (0x0005286f) main_mup_pane_g2_ParamLimits

0x4ff5,	// (0x0005286f) main_mup_pane_g2

0x500d,	// (0x00052887) main_mup_pane_g3_ParamLimits

0x500d,	// (0x00052887) main_mup_pane_g3

0x5025,	// (0x0005289f) main_mup_pane_g4_ParamLimits

0x5025,	// (0x0005289f) main_mup_pane_g4

0x503d,	// (0x000528b7) main_mup_pane_g5_ParamLimits

0x503d,	// (0x000528b7) main_mup_pane_g5

0x5057,	// (0x000528d1) main_mup_pane_g6_ParamLimits

0x5057,	// (0x000528d1) main_mup_pane_g6

0x506f,	// (0x000528e9) main_mup_pane_g7_ParamLimits

0x506f,	// (0x000528e9) main_mup_pane_g7

0x5087,	// (0x00052901) main_mup_pane_g8_ParamLimits

0x5087,	// (0x00052901) main_mup_pane_g8

0x509f,	// (0x00052919) main_mup_pane_g9_ParamLimits

0x509f,	// (0x00052919) main_mup_pane_g9

0x50b3,	// (0x0005292d) main_mup_pane_g10_ParamLimits

0x50b3,	// (0x0005292d) main_mup_pane_g10

0x50c7,	// (0x00052941) main_mup_pane_g11_ParamLimits

0x50c7,	// (0x00052941) main_mup_pane_g11

0x50d9,	// (0x00052953) main_mup_pane_g12_ParamLimits

0x50d9,	// (0x00052953) main_mup_pane_g12

0x50ed,	// (0x00052967) main_mup_pane_g13_ParamLimits

0x50ed,	// (0x00052967) main_mup_pane_g13

0x000c,

0xf481,	// (0x0005ccfb) main_mup_pane_g_ParamLimits

0xf481,	// (0x0005ccfb) main_mup_pane_g

0x50ff,	// (0x00052979) main_mup_pane_t1_ParamLimits

0x50ff,	// (0x00052979) main_mup_pane_t1

0x5119,	// (0x00052993) main_mup_pane_t2_ParamLimits

0x5119,	// (0x00052993) main_mup_pane_t2

0x5131,	// (0x000529ab) main_mup_pane_t3_ParamLimits

0x5131,	// (0x000529ab) main_mup_pane_t3

0x5149,	// (0x000529c3) main_mup_pane_t4_ParamLimits

0x5149,	// (0x000529c3) main_mup_pane_t4

0x5167,	// (0x000529e1) main_mup_pane_t5_ParamLimits

0x5167,	// (0x000529e1) main_mup_pane_t5

0x517c,	// (0x000529f6) main_mup_pane_t6_ParamLimits

0x517c,	// (0x000529f6) main_mup_pane_t6

0x0005,

0xf49c,	// (0x0005cd16) main_mup_pane_t_ParamLimits

0xf49c,	// (0x0005cd16) main_mup_pane_t

0x518e,	// (0x00052a08) mup_progress_pane_ParamLimits

0x518e,	// (0x00052a08) mup_progress_pane

0x519a,	// (0x00052a14) mup_visualizer_pane_ParamLimits

0x519a,	// (0x00052a14) mup_visualizer_pane

0x51c2,	// (0x00052a3c) mup_volume_pane_ParamLimits

0x51c2,	// (0x00052a3c) mup_volume_pane

0xae71,	// (0x000586eb) mup_visualizer_pane_g1_ParamLimits

0xae71,	// (0x000586eb) mup_visualizer_pane_g1

0xae71,	// (0x000586eb) mup_visualizer_pane_g2_ParamLimits

0xae71,	// (0x000586eb) mup_visualizer_pane_g2

0xac7f,	// (0x000584f9) mup_visualizer_pane_g3_ParamLimits

0xac7f,	// (0x000584f9) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x0005cd23) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x0005cd23) mup_visualizer_pane_g

0x166a,	// (0x0004eee4) mup_volume_pane_g1

0xae87,	// (0x00058701) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x0005cd2a) mup_volume_pane_g

0x166a,	// (0x0004eee4) mup_progress_pane_g1

0xae90,	// (0x0005870a) mup_progress_pane_g2

0xae99,	// (0x00058713) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x0005cd2f) mup_progress_pane_g

0x12eb,	// (0x0004eb65) bg_popup_window_pane_cp05

0xaea2,	// (0x0005871c) heading_pane_cp02_ParamLimits

0xaea2,	// (0x0005871c) heading_pane_cp02

0xaebc,	// (0x00058736) list_popup_blid_pane

0xaec4,	// (0x0005873e) list_blid_sat_info_pane_ParamLimits

0xaec4,	// (0x0005873e) list_blid_sat_info_pane

0xaed7,	// (0x00058751) list_blid_sat_info_pane_g1

0xaedf,	// (0x00058759) list_blid_sat_info_pane_t1

0x52b2,	// (0x00052b2c) mup_equalizer_pane_ParamLimits

0x52b2,	// (0x00052b2c) mup_equalizer_pane

0x52cb,	// (0x00052b45) mup_equalizer_pane_cp1_ParamLimits

0x52cb,	// (0x00052b45) mup_equalizer_pane_cp1

0x52e4,	// (0x00052b5e) mup_equalizer_pane_cp2_ParamLimits

0x52e4,	// (0x00052b5e) mup_equalizer_pane_cp2

0x52fd,	// (0x00052b77) mup_equalizer_pane_cp3_ParamLimits

0x52fd,	// (0x00052b77) mup_equalizer_pane_cp3

0x5316,	// (0x00052b90) mup_equalizer_pane_cp4_ParamLimits

0x5316,	// (0x00052b90) mup_equalizer_pane_cp4

0x532f,	// (0x00052ba9) mup_equalizer_pane_cp5

0x5341,	// (0x00052bbb) mup_equalizer_pane_cp6

0x5353,	// (0x00052bcd) mup_equalizer_pane_cp7

0xc0a6,	// (0x00059920) bg_popup_call_poc_act_pane_g9

0xc0ae,	// (0x00059928) bg_popup_call_poc_act_pane_g10

0xc0b6,	// (0x00059930) bg_popup_call_poc_act_pane_g11

0x000a,

0x1546,	// (0x0004edc0) mup_scale_pane

0x166a,	// (0x0004eee4) mup_scale_pane_g1

0xaeed,	// (0x00058767) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x0005cd4b) mup_scale_pane_g

0xaf11,	// (0x0005878b) msg_data_pane

0xaf19,	// (0x00058793) scroll_pane_cp017

0x5379,	// (0x00052bf3) bg_list_pane_cp04_ParamLimits

0x5379,	// (0x00052bf3) bg_list_pane_cp04

0xaf21,	// (0x0005879b) msg_data_pane_g1

0x4d49,	// (0x000525c3) msg_data_pane_g2

0x4d51,	// (0x000525cb) msg_data_pane_g3

0x5399,	// (0x00052c13) msg_data_pane_g4

0x4d61,	// (0x000525db) msg_data_pane_g5

0x4fcf,	// (0x00052849) msg_data_pane_g6

0x53a1,	// (0x00052c1b) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x0005cd5a) msg_data_pane_g

0x53a9,	// (0x00052c23) msg_text_pane_ParamLimits

0x53a9,	// (0x00052c23) msg_text_pane

0x53ce,	// (0x00052c48) qrid_highlight_pane_cp011_ParamLimits

0x53ce,	// (0x00052c48) qrid_highlight_pane_cp011

0x12eb,	// (0x0004eb65) msg_body_pane

0x12eb,	// (0x0004eb65) msg_header_pane

0xaf32,	// (0x000587ac) input_focus_pane_cp07

0x53f0,	// (0x00052c6a) msg_header_pane_t1_ParamLimits

0x53f0,	// (0x00052c6a) msg_header_pane_t1

0xaf47,	// (0x000587c1) msg_header_pane_t2_ParamLimits

0xaf47,	// (0x000587c1) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x0005cd6e) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x0005cd6e) msg_header_pane_t

0xaf59,	// (0x000587d3) msg_body_pane_g1

0x5402,	// (0x00052c7c) msg_body_pane_t1_ParamLimits

0x5402,	// (0x00052c7c) msg_body_pane_t1

0xaf61,	// (0x000587db) msg_body_pane_t2_ParamLimits

0xaf61,	// (0x000587db) msg_body_pane_t2

0xaf73,	// (0x000587ed) msg_body_pane_t3_ParamLimits

0xaf73,	// (0x000587ed) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x0005cd73) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x0005cd73) msg_body_pane_t

0x5463,	// (0x00052cdd) main_viewer_pane_g1_ParamLimits

0x5463,	// (0x00052cdd) main_viewer_pane_g1

0x546f,	// (0x00052ce9) main_viewer_pane_g2_ParamLimits

0x546f,	// (0x00052ce9) main_viewer_pane_g2

0x547b,	// (0x00052cf5) main_viewer_pane_g3_ParamLimits

0x547b,	// (0x00052cf5) main_viewer_pane_g3

0x548a,	// (0x00052d04) main_viewer_pane_g4_ParamLimits

0x548a,	// (0x00052d04) main_viewer_pane_g4

0xec64,	// (0x0005c4de) main_viewer_pane_g5_ParamLimits

0xec64,	// (0x0005c4de) main_viewer_pane_g5

0xec64,	// (0x0005c4de) main_viewer_pane_g7_ParamLimits

0xec64,	// (0x0005c4de) main_viewer_pane_g7

0xec76,	// (0x0005c4f0) main_viewer_pane_g8_ParamLimits

0xec76,	// (0x0005c4f0) main_viewer_pane_g8

0x0007,

0xf509,	// (0x0005cd83) main_viewer_pane_g_ParamLimits

0xf509,	// (0x0005cd83) main_viewer_pane_g

0xaf85,	// (0x000587ff) viewer_content_pane_ParamLimits

0xaf85,	// (0x000587ff) viewer_content_pane

0x54be,	// (0x00052d38) main_postcard_pane_g1_ParamLimits

0x54be,	// (0x00052d38) main_postcard_pane_g1

0x54d2,	// (0x00052d4c) main_postcard_pane_g2_ParamLimits

0x54d2,	// (0x00052d4c) main_postcard_pane_g2

0x54e6,	// (0x00052d60) main_postcard_pane_g3_ParamLimits

0x54e6,	// (0x00052d60) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x0005cd94) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x0005cd94) main_postcard_pane_g

0x54f9,	// (0x00052d73) main_postcard_pane_g4

0xc2f7,	// (0x00059b71) smil_status_volume_pane_g2

0x5534,	// (0x00052dae) postcard_pane_ParamLimits

0x5534,	// (0x00052dae) postcard_pane

0xaf93,	// (0x0005880d) postcard_pane_g1_ParamLimits

0xaf93,	// (0x0005880d) postcard_pane_g1

0x5574,	// (0x00052dee) postcard_pane_g2_ParamLimits

0x5574,	// (0x00052dee) postcard_pane_g2

0x5580,	// (0x00052dfa) postcard_pane_g3_ParamLimits

0x5580,	// (0x00052dfa) postcard_pane_g3

0xafa1,	// (0x0005881b) postcard_pane_g4_ParamLimits

0xafa1,	// (0x0005881b) postcard_pane_g4

0x558c,	// (0x00052e06) postcard_pane_g5_ParamLimits

0x558c,	// (0x00052e06) postcard_pane_g5

0x55a1,	// (0x00052e1b) postcard_pane_g6_ParamLimits

0x55a1,	// (0x00052e1b) postcard_pane_g6

0xaf93,	// (0x0005880d) postcard_pane_g7_ParamLimits

0xaf93,	// (0x0005880d) postcard_pane_g7

0x0006,

0xf527,	// (0x0005cda1) postcard_pane_g_ParamLimits

0xf527,	// (0x0005cda1) postcard_pane_g

0x55b5,	// (0x00052e2f) main_mp2_pane_g1_ParamLimits

0x55b5,	// (0x00052e2f) main_mp2_pane_g1

0x55c1,	// (0x00052e3b) main_mp2_pane_g2_ParamLimits

0x55c1,	// (0x00052e3b) main_mp2_pane_g2

0x55cd,	// (0x00052e47) main_mp2_pane_g3_ParamLimits

0x55cd,	// (0x00052e47) main_mp2_pane_g3

0x0002,

0xf536,	// (0x0005cdb0) main_mp2_pane_g_ParamLimits

0xf536,	// (0x0005cdb0) main_mp2_pane_g

0x55d9,	// (0x00052e53) main_mp2_pane_t1_ParamLimits

0x55d9,	// (0x00052e53) main_mp2_pane_t1

0x55ee,	// (0x00052e68) main_mp2_pane_t2_ParamLimits

0x55ee,	// (0x00052e68) main_mp2_pane_t2

0x5600,	// (0x00052e7a) main_mp2_pane_t3_ParamLimits

0x5600,	// (0x00052e7a) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x0005cdb7) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x0005cdb7) main_mp2_pane_t

0xafaf,	// (0x00058829) pec_content_pane_ParamLimits

0xafaf,	// (0x00058829) pec_content_pane

0xa4f2,	// (0x00057d6c) scroll_pane_cp015

0xafc1,	// (0x0005883b) pec_attribute_pane_ParamLimits

0xafc1,	// (0x0005883b) pec_attribute_pane

0x5612,	// (0x00052e8c) pec_content_pane_g1_ParamLimits

0x5612,	// (0x00052e8c) pec_content_pane_g1

0xafd1,	// (0x0005884b) pec_content_pane_t1_ParamLimits

0xafd1,	// (0x0005884b) pec_content_pane_t1

0xafe3,	// (0x0005885d) pec_content_pane_t2_ParamLimits

0xafe3,	// (0x0005885d) pec_content_pane_t2

0x0001,

0xf544,	// (0x0005cdbe) pec_content_pane_t_ParamLimits

0xf544,	// (0x0005cdbe) pec_content_pane_t

0x561e,	// (0x00052e98) list_single_graphic_pane_cp01_ParamLimits

0x561e,	// (0x00052e98) list_single_graphic_pane_cp01

0x1546,	// (0x0004edc0) bg_popup_sub_pane_cp04

0xaff5,	// (0x0005886f) popup_mup_playback_window_g1

0xb001,	// (0x0005887b) popup_mup_playback_window_t1

0xb016,	// (0x00058890) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x0005cdc3) popup_mup_playback_window_t

0xb04d,	// (0x000588c7) main_image_pane_g1_ParamLimits

0xb04d,	// (0x000588c7) main_image_pane_g1

0xb090,	// (0x0005890a) scroll_pane_cp018_ParamLimits

0xb090,	// (0x0005890a) scroll_pane_cp018

0xb0a8,	// (0x00058922) scroll_pane_cp016_ParamLimits

0xb0a8,	// (0x00058922) scroll_pane_cp016

0x56e9,	// (0x00052f63) smil2_image_pane_ParamLimits

0x56e9,	// (0x00052f63) smil2_image_pane

0x5711,	// (0x00052f8b) smil2_root_pane_ParamLimits

0x5711,	// (0x00052f8b) smil2_root_pane

0x5749,	// (0x00052fc3) smil2_text_pane_ParamLimits

0x5749,	// (0x00052fc3) smil2_text_pane

0x12eb,	// (0x0004eb65) bg_list_pane_cp06

0xb0e4,	// (0x0005895e) grid_radio_pane

0x12eb,	// (0x0004eb65) bg_popup_window_pane_cp06

0xb0ec,	// (0x00058966) main_fmradio_pane_t1

0xaacc,	// (0x00058346) heading_pane_cp04

0xb0fa,	// (0x00058974) main_fmradio_pane_t2

0xc0fe,	// (0x00059978) popup_cale_lunar_info_window_g1

0xb108,	// (0x00058982) main_fmradio_pane_t3

0xc106,	// (0x00059980) popup_cale_lunar_info_window_g2

0xb116,	// (0x00058990) main_fmradio_pane_t4

0x0001,

0xb124,	// (0x0005899e) main_fmradio_pane_t5

0x0004,

0xf637,	// (0x0005ceb1) popup_cale_lunar_info_window_g

0xf55e,	// (0x0005cdd8) main_fmradio_pane_t

0xb132,	// (0x000589ac) wait_bar_pane_cp03

0xb13a,	// (0x000589b4) cell_fmradio_pane_ParamLimits

0xb13a,	// (0x000589b4) cell_fmradio_pane

0xaf93,	// (0x0005880d) cell_fmradio_pane_g1_ParamLimits

0xaf93,	// (0x0005880d) cell_fmradio_pane_g1

0x12eb,	// (0x0004eb65) grid_highlight_pane_cp011

0xb14d,	// (0x000589c7) poc_content_pane_ParamLimits

0xb14d,	// (0x000589c7) poc_content_pane

0xb160,	// (0x000589da) scroll_pane_cp019

0x57b5,	// (0x0005302f) popup_call_poc_act_window_ParamLimits

0x57b5,	// (0x0005302f) popup_call_poc_act_window

0x57d5,	// (0x0005304f) popup_call_poc_inact_window_ParamLimits

0x57d5,	// (0x0005304f) popup_call_poc_inact_window

0xf5fb,	// (0x0005ce75) bg_popup_call_poc_act_pane_g

0xc0be,	// (0x00059938) bg_popup_call_poc_inact_pane_g1

0xc0c6,	// (0x00059940) bg_popup_call_poc_inact_pane_g2

0xb168,	// (0x000589e2) popup_call_poc_act_window_g2

0xc0ce,	// (0x00059948) bg_popup_call_poc_inact_pane_g3

0xc04e,	// (0x000598c8) bg_popup_call_poc_inact_pane_g4

0xc0d6,	// (0x00059950) bg_popup_call_poc_inact_pane_g5

0xb170,	// (0x000589ea) popup_call_poc_act_window_t1_ParamLimits

0xb170,	// (0x000589ea) popup_call_poc_act_window_t1

0xb198,	// (0x00058a12) popup_call_poc_act_window_t2_ParamLimits

0xb198,	// (0x00058a12) popup_call_poc_act_window_t2

0xb1c0,	// (0x00058a3a) popup_call_poc_act_window_t3_ParamLimits

0xb1c0,	// (0x00058a3a) popup_call_poc_act_window_t3

0xb1e8,	// (0x00058a62) popup_call_poc_act_window_t4_ParamLimits

0xb1e8,	// (0x00058a62) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x0005cde3) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x0005cde3) popup_call_poc_act_window_t

0xc0de,	// (0x00059958) bg_popup_call_poc_inact_pane_g6

0xc0e6,	// (0x00059960) bg_popup_call_poc_inact_pane_g7

0xc0ee,	// (0x00059968) bg_popup_call_poc_inact_pane_g8

0xb1fa,	// (0x00058a74) popup_call_poc_inact_window_g2

0xc0f6,	// (0x00059970) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf612,	// (0x0005ce8c) bg_popup_call_poc_inact_pane_g

0xb202,	// (0x00058a7c) popup_call_poc_inact_window_t1_ParamLimits

0xb202,	// (0x00058a7c) popup_call_poc_inact_window_t1

0xb217,	// (0x00058a91) popup_call_poc_inact_window_t2_ParamLimits

0xb217,	// (0x00058a91) popup_call_poc_inact_window_t2

0xb22c,	// (0x00058aa6) popup_call_poc_inact_window_t3_ParamLimits

0xb22c,	// (0x00058aa6) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x0005cdec) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x0005cdec) popup_call_poc_inact_window_t

0xc26a,	// (0x00059ae4) context_pane_ParamLimits

0x5ee7,	// (0x00053761) signal_pane_ParamLimits

0xadb2,	// (0x0005862c) main_call2_pane

0xc258,	// (0x00059ad2) popup_phob_thumbnail2_window_ParamLimits

0xc258,	// (0x00059ad2) popup_phob_thumbnail2_window

0xec4c,	// (0x0005c4c6) aid_hotspot_pointer_arrow_pane

0xec54,	// (0x0005c4ce) aid_hotspot_pointer_hand_pane

0x5aaa,	// (0x00053324) phob_pre_status_pane_g5

0x3d44,	// (0x000515be) cams_zoom_pane_ParamLimits

0x3d53,	// (0x000515cd) image_vga_pane_ParamLimits

0x3d6b,	// (0x000515e5) main_camera_pane_g1_ParamLimits

0x3d7b,	// (0x000515f5) main_camera_pane_g2_ParamLimits

0x3d8b,	// (0x00051605) main_camera_pane_g3_ParamLimits

0x3d9b,	// (0x00051615) main_camera_pane_g4_ParamLimits

0x3dab,	// (0x00051625) main_camera_pane_g5_ParamLimits

0x3dbb,	// (0x00051635) main_camera_pane_g6_ParamLimits

0x3dcb,	// (0x00051645) main_camera_pane_g7_ParamLimits

0xf271,	// (0x0005caeb) main_camera_pane_g_ParamLimits

0x3ddb,	// (0x00051655) main_camera_pane_t1_ParamLimits

0x3df1,	// (0x0005166b) main_camera_pane_t2_ParamLimits

0xf282,	// (0x0005cafc) main_camera_pane_t_ParamLimits

0x1546,	// (0x0004edc0) bg_popup_preview_window_pane_cp01_ParamLimits

0x1546,	// (0x0004edc0) bg_popup_preview_window_pane_cp01

0xb241,	// (0x00058abb) popup_phob_thumbnail2_window_g1_ParamLimits

0xb241,	// (0x00058abb) popup_phob_thumbnail2_window_g1

0x12eb,	// (0x0004eb65) call2_cli_visual_pane

0x5801,	// (0x0005307b) popup_call2_audio_conf_window_ParamLimits

0x5801,	// (0x0005307b) popup_call2_audio_conf_window

0x581f,	// (0x00053099) popup_call2_audio_first_window_ParamLimits

0x581f,	// (0x00053099) popup_call2_audio_first_window

0x5895,	// (0x0005310f) popup_call2_audio_in_window_ParamLimits

0x5895,	// (0x0005310f) popup_call2_audio_in_window

0x58c9,	// (0x00053143) popup_call2_audio_out_window_ParamLimits

0x58c9,	// (0x00053143) popup_call2_audio_out_window

0x591b,	// (0x00053195) popup_call2_audio_second_window_ParamLimits

0x591b,	// (0x00053195) popup_call2_audio_second_window

0x596d,	// (0x000531e7) popup_call2_audio_wait_window_ParamLimits

0x596d,	// (0x000531e7) popup_call2_audio_wait_window

0x12eb,	// (0x0004eb65) bg_popup_call2_act_pane_cp03

0x1528,	// (0x0004eda2) list_conf_pane_cp

0xb24d,	// (0x00058ac7) popup_call2_audio_conf_window_t1

0xab29,	// (0x000583a3) list_single_graphic_popup_conf2_pane_ParamLimits

0xab29,	// (0x000583a3) list_single_graphic_popup_conf2_pane

0xab3c,	// (0x000583b6) list_highlight_pane_cp04

0xb25b,	// (0x00058ad5) list_single_graphic_popup_conf2_pane_g1

0xab4d,	// (0x000583c7) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x0005cdf3) list_single_graphic_popup_conf2_pane_g

0xb263,	// (0x00058add) list_single_graphic_popup_conf2_pane_t1

0xb271,	// (0x00058aeb) bg_popup_call2_act_pane_cp01_ParamLimits

0xb271,	// (0x00058aeb) bg_popup_call2_act_pane_cp01

0xb2fb,	// (0x00058b75) call_type_pane_cp05_ParamLimits

0xb2fb,	// (0x00058b75) call_type_pane_cp05

0xb34f,	// (0x00058bc9) popup_call2_audio_second_window_g1_ParamLimits

0xb34f,	// (0x00058bc9) popup_call2_audio_second_window_g1

0xb3a3,	// (0x00058c1d) popup_call2_audio_second_window_g2_ParamLimits

0xb3a3,	// (0x00058c1d) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x0005cdf8) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x0005cdf8) popup_call2_audio_second_window_g

0xb408,	// (0x00058c82) popup_call2_audio_second_window_t1_ParamLimits

0xb408,	// (0x00058c82) popup_call2_audio_second_window_t1

0xb4c3,	// (0x00058d3d) popup_call2_audio_second_window_t2_ParamLimits

0xb4c3,	// (0x00058d3d) popup_call2_audio_second_window_t2

0xb516,	// (0x00058d90) popup_call2_audio_second_window_t3_ParamLimits

0xb516,	// (0x00058d90) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x0005cdff) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x0005cdff) popup_call2_audio_second_window_t

0x12eb,	// (0x0004eb65) bg_popup_call2_in_pane_cp02

0x12f5,	// (0x0004eb6f) call_type_pane_cp04

0x12fd,	// (0x0004eb77) popup_call2_audio_wait_window_g1

0x1305,	// (0x0004eb7f) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0005c9d8) popup_call2_audio_wait_window_g

0x130d,	// (0x0004eb87) popup_call2_audio_wait_window_t3

0xb609,	// (0x00058e83) bg_popup_call2_act_pane_ParamLimits

0xb609,	// (0x00058e83) bg_popup_call2_act_pane

0xb6c9,	// (0x00058f43) call_type_pane_cp03_ParamLimits

0xb6c9,	// (0x00058f43) call_type_pane_cp03

0xb72d,	// (0x00058fa7) popup_call2_audio_first_window_g1_ParamLimits

0xb72d,	// (0x00058fa7) popup_call2_audio_first_window_g1

0xb79d,	// (0x00059017) popup_call2_audio_first_window_g2_ParamLimits

0xb79d,	// (0x00059017) popup_call2_audio_first_window_g2

0xae71,	// (0x000586eb) popup_call2_audio_first_window_g3_ParamLimits

0xae71,	// (0x000586eb) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x0005ce08) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x0005ce08) popup_call2_audio_first_window_g

0xb87b,	// (0x000590f5) popup_call2_audio_first_window_t1_ParamLimits

0xb87b,	// (0x000590f5) popup_call2_audio_first_window_t1

0xb97e,	// (0x000591f8) popup_call2_audio_first_window_t4_ParamLimits

0xb97e,	// (0x000591f8) popup_call2_audio_first_window_t4

0xba61,	// (0x000592db) popup_call2_audio_first_window_t5_ParamLimits

0xba61,	// (0x000592db) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x0005ce13) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x0005ce13) popup_call2_audio_first_window_t

0x153e,	// (0x0004edb8) bg_popup_call2_act_pane_g1

0xc10e,	// (0x00059988) popup_cale_lunar_info_window_t1

0xc11c,	// (0x00059996) popup_cale_lunar_info_window_t2

0xc12a,	// (0x000599a4) popup_cale_lunar_info_window_t3

0x12eb,	// (0x0004eb65) bg_popup_call2_bubble_pane

0xbb62,	// (0x000593dc) bg_popup_call2_in_pane_cp01_ParamLimits

0xbb62,	// (0x000593dc) bg_popup_call2_in_pane_cp01

0x0fc7,	// (0x0004e841) call_type_pane_cp02

0xbbaa,	// (0x00059424) popup_call2_audio_out_window_g1_ParamLimits

0xbbaa,	// (0x00059424) popup_call2_audio_out_window_g1

0xbbd6,	// (0x00059450) popup_call2_audio_out_window_g2_ParamLimits

0xbbd6,	// (0x00059450) popup_call2_audio_out_window_g2

0xbbfe,	// (0x00059478) popup_call2_audio_out_window_g3_ParamLimits

0xbbfe,	// (0x00059478) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x0005ce1c) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x0005ce1c) popup_call2_audio_out_window_g

0xbc39,	// (0x000594b3) popup_call2_audio_out_window_t1_ParamLimits

0xbc39,	// (0x000594b3) popup_call2_audio_out_window_t1

0xbc98,	// (0x00059512) popup_call2_audio_out_window_t2_ParamLimits

0xbc98,	// (0x00059512) popup_call2_audio_out_window_t2

0xbcec,	// (0x00059566) popup_call2_audio_out_window_t3_ParamLimits

0xbcec,	// (0x00059566) popup_call2_audio_out_window_t3

0xbd02,	// (0x0005957c) popup_call2_audio_out_window_t4_ParamLimits

0xbd02,	// (0x0005957c) popup_call2_audio_out_window_t4

0xbd18,	// (0x00059592) popup_call2_audio_out_window_t5_ParamLimits

0xbd18,	// (0x00059592) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x0005ce25) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x0005ce25) popup_call2_audio_out_window_t

0xbd7c,	// (0x000595f6) bg_popup_call2_in_pane_ParamLimits

0xbd7c,	// (0x000595f6) bg_popup_call2_in_pane

0xbdd8,	// (0x00059652) popup_call2_audio_in_window_g1_ParamLimits

0xbdd8,	// (0x00059652) popup_call2_audio_in_window_g1

0xbe10,	// (0x0005968a) popup_call2_audio_in_window_g2_ParamLimits

0xbe10,	// (0x0005968a) popup_call2_audio_in_window_g2

0xbe48,	// (0x000596c2) popup_call2_audio_in_window_g3_ParamLimits

0xbe48,	// (0x000596c2) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x0005ce32) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x0005ce32) popup_call2_audio_in_window_g

0xbea0,	// (0x0005971a) popup_call2_audio_in_window_t1_ParamLimits

0xbea0,	// (0x0005971a) popup_call2_audio_in_window_t1

0xbf20,	// (0x0005979a) popup_call2_audio_in_window_t2_ParamLimits

0xbf20,	// (0x0005979a) popup_call2_audio_in_window_t2

0xbfa0,	// (0x0005981a) popup_call2_audio_in_window_t3_ParamLimits

0xbfa0,	// (0x0005981a) popup_call2_audio_in_window_t3

0xbfba,	// (0x00059834) popup_call2_audio_in_window_t4_ParamLimits

0xbfba,	// (0x00059834) popup_call2_audio_in_window_t4

0xbfcc,	// (0x00059846) popup_call2_audio_in_window_t5_ParamLimits

0xbfcc,	// (0x00059846) popup_call2_audio_in_window_t5

0xbfe1,	// (0x0005985b) popup_call2_audio_in_window_t6_ParamLimits

0xbfe1,	// (0x0005985b) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x0005ce3b) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x0005ce3b) popup_call2_audio_in_window_t

0x153e,	// (0x0004edb8) bg_popup_call2_in_pane_g1

0xc138,	// (0x000599b2) popup_cale_lunar_info_window_t4

0x0003,

0xf63c,	// (0x0005ceb6) popup_cale_lunar_info_window_t

0x1546,	// (0x0004edc0) bg_popup_call2_rect_pane_ParamLimits

0x1546,	// (0x0004edc0) bg_popup_call2_rect_pane

0x12eb,	// (0x0004eb65) call2_cli_visual_graphic_pane

0x12eb,	// (0x0004eb65) call2_cli_visual_text_pane

0xec8e,	// (0x0005c508) smil_status_volume_pane_g3

0x0002,

0x166a,	// (0x0004eee4) call2_cli_visual_graphic_pane_g1

0x166a,	// (0x0004eee4) call2_cli_visual_graphic_pane_g2

0x166a,	// (0x0004eee4) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x0005ce48) call2_cli_visual_graphic_pane_g

0xbff6,	// (0x00059870) bg_popup_call2_rect_pane_g1

0x1708,	// (0x0004ef82) bg_popup_call2_rect_pane_g2

0xbffe,	// (0x00059878) bg_popup_call2_rect_pane_g3

0xc006,	// (0x00059880) bg_popup_call2_rect_pane_g4

0xc00e,	// (0x00059888) bg_popup_call2_rect_pane_g5

0xc016,	// (0x00059890) bg_popup_call2_rect_pane_g6

0xc01e,	// (0x00059898) bg_popup_call2_rect_pane_g7

0xc026,	// (0x000598a0) bg_popup_call2_rect_pane_g8

0xc02e,	// (0x000598a8) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x0005ce4f) bg_popup_call2_rect_pane_g

0xc036,	// (0x000598b0) bg_popup_call2_bubble_pane_g1

0xc03e,	// (0x000598b8) bg_popup_call2_bubble_pane_g2

0xc046,	// (0x000598c0) bg_popup_call2_bubble_pane_g3

0xc04e,	// (0x000598c8) bg_popup_call2_bubble_pane_g4

0xc056,	// (0x000598d0) bg_popup_call2_bubble_pane_g5

0xc05e,	// (0x000598d8) bg_popup_call2_bubble_pane_g6

0xc066,	// (0x000598e0) bg_popup_call2_bubble_pane_g7

0xc06e,	// (0x000598e8) bg_popup_call2_bubble_pane_g8

0xc076,	// (0x000598f0) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x0005ce62) bg_popup_call2_bubble_pane_g

0x3867,	// (0x000510e1) aid_cale_week_size_cell_pane

0x3e07,	// (0x00051681) aid_cams_cif_uncrop_pane_ParamLimits

0x3e07,	// (0x00051681) aid_cams_cif_uncrop_pane

0x3fa8,	// (0x00051822) aid_cams_size_cell_ParamLimits

0x3fa8,	// (0x00051822) aid_cams_size_cell

0x3fbc,	// (0x00051836) grid_cams_pane_ParamLimits

0x3fd1,	// (0x0005184b) linegrid_cams_pane_ParamLimits

0x40d2,	// (0x0005194c) call_video_pane_t1

0x40e4,	// (0x0005195e) call_video_pane_t2

0x0001,

0xf2d5,	// (0x0005cb4f) call_video_pane_t

0x43eb,	// (0x00051c65) aid_cale_month_size_cell_pane_ParamLimits

0x43eb,	// (0x00051c65) aid_cale_month_size_cell_pane

0xf685,	// (0x0005ceff) smil_status_volume_pane_g

0xec9b,	// (0x0005c515) volume_smil_pane_ParamLimits

0x0ea1,	// (0x0004e71b) aid_popup2_width_pane

0x37e1,	// (0x0005105b) cell_qdial_pane_g4_ParamLimits

0x37e1,	// (0x0005105b) cell_qdial_pane_g4

0x4ece,	// (0x00052748) aid_blid_cardinal_pane_ParamLimits

0x4eda,	// (0x00052754) aid_blid_destination_pane_ParamLimits

0x4eda,	// (0x00052754) aid_blid_destination_pane

0x1546,	// (0x0004edc0) bg_popup_call_poc_act_pane_ParamLimits

0x1546,	// (0x0004edc0) bg_popup_call_poc_act_pane

0x1546,	// (0x0004edc0) bg_popup_call_poc_inact_pane_ParamLimits

0x1546,	// (0x0004edc0) bg_popup_call_poc_inact_pane

0xc07e,	// (0x000598f8) bg_popup_call_poc_act_pane_g1

0xc086,	// (0x00059900) bg_popup_call_poc_act_pane_g2

0xc08e,	// (0x00059908) bg_popup_call_poc_act_pane_g3

0xc04e,	// (0x000598c8) bg_popup_call_poc_act_pane_g4

0xc056,	// (0x000598d0) bg_popup_call_poc_act_pane_g5

0xc096,	// (0x00059910) bg_popup_call_poc_act_pane_g6

0xc066,	// (0x000598e0) bg_popup_call_poc_act_pane_g7

0xc09e,	// (0x00059918) bg_popup_call_poc_act_pane_g8

0x12eb,	// (0x0004eb65) main_usb_pane

0xc237,	// (0x00059ab1) popup_cale_lunar_info_window

0x42ab,	// (0x00051b25) im_reading_pane_t1_ParamLimits

0x18d2,	// (0x0004f14c) list_im_pane_ParamLimits

0x18e3,	// (0x0004f15d) scroll_pane_cp07_ParamLimits

0x12eb,	// (0x0004eb65) grid_highlight_pane_cp012

0x1546,	// (0x0004edc0) mup_scale_pane_ParamLimits

0xaf93,	// (0x0005880d) main_usb_pane_g1_ParamLimits

0xaf93,	// (0x0005880d) main_usb_pane_g1

0x59c7,	// (0x00053241) main_usb_pane_g2_ParamLimits

0x59c7,	// (0x00053241) main_usb_pane_g2

0x0001,

0xf625,	// (0x0005ce9f) main_usb_pane_g_ParamLimits

0xf625,	// (0x0005ce9f) main_usb_pane_g

0x59db,	// (0x00053255) main_usb_pane_t1_ParamLimits

0x59db,	// (0x00053255) main_usb_pane_t1

0x59ed,	// (0x00053267) main_usb_pane_t2_ParamLimits

0x59ed,	// (0x00053267) main_usb_pane_t2

0x59ff,	// (0x00053279) main_usb_pane_t3_ParamLimits

0x59ff,	// (0x00053279) main_usb_pane_t3

0x5a11,	// (0x0005328b) main_usb_pane_t4_ParamLimits

0x5a11,	// (0x0005328b) main_usb_pane_t4

0x5a23,	// (0x0005329d) main_usb_pane_t5_ParamLimits

0x5a23,	// (0x0005329d) main_usb_pane_t5

0x5a35,	// (0x000532af) main_usb_pane_t6_ParamLimits

0x5a35,	// (0x000532af) main_usb_pane_t6

0x0005,

0xf62a,	// (0x0005cea4) main_usb_pane_t_ParamLimits

0xac76,	// (0x000584f0) aid_text_placing

0x4e7a,	// (0x000526f4) main_location2_pane_t1_ParamLimits

0x4e90,	// (0x0005270a) main_location2_pane_t2_ParamLimits

0x4ea6,	// (0x00052720) main_location2_pane_t3_ParamLimits

0x4ebc,	// (0x00052736) main_location2_pane_t4_ParamLimits

0x4ebc,	// (0x00052736) main_location2_pane_t4

0xf436,	// (0x0005ccb0) main_location2_pane_t_ParamLimits

0x1582,	// (0x0004edfc) find_pinb_pane_g2_ParamLimits

0x1582,	// (0x0004edfc) find_pinb_pane_g2

0x0001,

0xf184,	// (0x0005c9fe) find_pinb_pane_g_ParamLimits

0xf184,	// (0x0005c9fe) find_pinb_pane_g

0x158e,	// (0x0004ee08) find_pinb_pane_t1_ParamLimits

0x15a0,	// (0x0004ee1a) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x0005ca03) find_pinb_pane_t_ParamLimits

0x12eb,	// (0x0004eb65) main_call3_pane

0x4727,	// (0x00051fa1) cale_month_day_heading_pane_t1_ParamLimits

0x4785,	// (0x00051fff) cale_month_day_heading_pane_t2_ParamLimits

0x47ea,	// (0x00052064) cale_month_day_heading_pane_t3_ParamLimits

0x484f,	// (0x000520c9) cale_month_day_heading_pane_t4_ParamLimits

0x48b4,	// (0x0005212e) cale_month_day_heading_pane_t5_ParamLimits

0x4919,	// (0x00052193) cale_month_day_heading_pane_t6_ParamLimits

0x497e,	// (0x000521f8) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x0005cb87) cale_month_day_heading_pane_t_ParamLimits

0xa6c6,	// (0x00057f40) smil_status_volume_pane

0x5550,	// (0x00052dca) postcard_address_pane_ParamLimits

0x5550,	// (0x00052dca) postcard_address_pane

0x5562,	// (0x00052ddc) postcard_message_pane_ParamLimits

0x5562,	// (0x00052ddc) postcard_message_pane

0x59a5,	// (0x0005321f) call2_cli_visual_pane_t1_ParamLimits

0x59a5,	// (0x0005321f) call2_cli_visual_pane_t1

0x6103,	// (0x0005397d) postcard_message_pane_t1_ParamLimits

0x6103,	// (0x0005397d) postcard_message_pane_t1

0x60ec,	// (0x00053966) postcard_address_pane_t1_ParamLimits

0x60ec,	// (0x00053966) postcard_address_pane_t1

0x60da,	// (0x00053954) popup_call3_audio_in_window_ParamLimits

0x60da,	// (0x00053954) popup_call3_audio_in_window

0x5f69,	// (0x000537e3) bg_popup_call3_in_pane_ParamLimits

0x5f69,	// (0x000537e3) bg_popup_call3_in_pane

0x5fdb,	// (0x00053855) popup_call3_audio_in_window_g1_ParamLimits

0x5fdb,	// (0x00053855) popup_call3_audio_in_window_g1

0x5ffb,	// (0x00053875) popup_call3_audio_in_window_g2_ParamLimits

0x5ffb,	// (0x00053875) popup_call3_audio_in_window_g2

0x601b,	// (0x00053895) popup_call3_audio_in_window_g3_ParamLimits

0x601b,	// (0x00053895) popup_call3_audio_in_window_g3

0x0003,

0xf68c,	// (0x0005cf06) popup_call3_audio_in_window_g_ParamLimits

0xf68c,	// (0x0005cf06) popup_call3_audio_in_window_g

0x604c,	// (0x000538c6) popup_call3_audio_in_window_t1_ParamLimits

0x604c,	// (0x000538c6) popup_call3_audio_in_window_t1

0x608a,	// (0x00053904) popup_call3_audio_in_window_t2_ParamLimits

0x608a,	// (0x00053904) popup_call3_audio_in_window_t2

0x60c8,	// (0x00053942) popup_call3_audio_in_window_t3_ParamLimits

0x60c8,	// (0x00053942) popup_call3_audio_in_window_t3

0x0002,

0xf695,	// (0x0005cf0f) popup_call3_audio_in_window_t_ParamLimits

0xf695,	// (0x0005cf0f) popup_call3_audio_in_window_t

0xadb2,	// (0x0005862c) bg_popup_call3_rect_pane

0xbff6,	// (0x00059870) bg_popup_call3_rect_pane_g1

0x1708,	// (0x0004ef82) bg_popup_call3_rect_pane_g2

0xbffe,	// (0x00059878) bg_popup_call3_rect_pane_g3

0xc006,	// (0x00059880) bg_popup_call3_rect_pane_g4

0xc00e,	// (0x00059888) bg_popup_call3_rect_pane_g5

0xc016,	// (0x00059890) bg_popup_call3_rect_pane_g6

0xc01e,	// (0x00059898) bg_popup_call3_rect_pane_g7

0x51d8,	// (0x00052a52) mup_visualizer_osc_pane

0xae7f,	// (0x000586f9) mup_visualizer_spec_pane

0x5f99,	// (0x00053813) call3_video_qcif_pane_ParamLimits

0x5f99,	// (0x00053813) call3_video_qcif_pane

0x5faa,	// (0x00053824) call3_video_qcif_uncrop_pane_ParamLimits

0x5faa,	// (0x00053824) call3_video_qcif_uncrop_pane

0x5fb6,	// (0x00053830) call3_video_subqcif_pane_ParamLimits

0x5fb6,	// (0x00053830) call3_video_subqcif_pane

0x5fca,	// (0x00053844) call3_video_subqcif_uncrop_pane_ParamLimits

0x5fca,	// (0x00053844) call3_video_subqcif_uncrop_pane

0x603b,	// (0x000538b5) popup_call3_audio_in_window_g4_ParamLimits

0x603b,	// (0x000538b5) popup_call3_audio_in_window_g4

0x5f58,	// (0x000537d2) mup_spec_half_pane

0x5f61,	// (0x000537db) mup_spec_half_pane_cp

0xc2ca,	// (0x00059b44) mup_osc_middle_pane

0xc2d3,	// (0x00059b4d) mup_visualizer_osc_pane_g1

0x5f39,	// (0x000537b3) mup_spec_bar_pane_ParamLimits

0x5f39,	// (0x000537b3) mup_spec_bar_pane

0xc2b7,	// (0x00059b31) mup_spec_bar_pane_g1

0xc2c1,	// (0x00059b3b) mup_spec_bar_pane_g2

0x0001,

0xf680,	// (0x0005cefa) mup_spec_bar_pane_g

0x3867,	// (0x000510e1) aid_cale_week_size_cell_pane_ParamLimits

0x387a,	// (0x000510f4) bg_cale_heading_pane_ParamLimits

0x174c,	// (0x0004efc6) bg_cale_pane_cp01_ParamLimits

0x388e,	// (0x00051108) cale_week_corner_pane_ParamLimits

0x38a4,	// (0x0005111e) cale_week_day_heading_pane_ParamLimits

0x38b8,	// (0x00051132) cale_week_scroll_pane_g1_ParamLimits

0x38c9,	// (0x00051143) cale_week_scroll_pane_g2_ParamLimits

0x38da,	// (0x00051154) cale_week_scroll_pane_g3_ParamLimits

0x38eb,	// (0x00051165) cale_week_scroll_pane_g4_ParamLimits

0x38fc,	// (0x00051176) cale_week_scroll_pane_g5_ParamLimits

0x390d,	// (0x00051187) cale_week_scroll_pane_g6_ParamLimits

0x391e,	// (0x00051198) cale_week_scroll_pane_g7_ParamLimits

0x392f,	// (0x000511a9) cale_week_scroll_pane_g8_ParamLimits

0x3942,	// (0x000511bc) cale_week_scroll_pane_g9_ParamLimits

0x3953,	// (0x000511cd) cale_week_scroll_pane_g10_ParamLimits

0x3964,	// (0x000511de) cale_week_scroll_pane_g11_ParamLimits

0x3975,	// (0x000511ef) cale_week_scroll_pane_g12_ParamLimits

0x3986,	// (0x00051200) cale_week_scroll_pane_g13_ParamLimits

0x3997,	// (0x00051211) cale_week_scroll_pane_g14_ParamLimits

0x39a8,	// (0x00051222) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x0005ca8f) cale_week_scroll_pane_g_ParamLimits

0x39b9,	// (0x00051233) cale_week_time_pane_ParamLimits

0x39cc,	// (0x00051246) grid_cale_week_pane_ParamLimits

0x1765,	// (0x0004efdf) listscroll_cale_week_pane_t1

0x39df,	// (0x00051259) scroll_pane_cp08_ParamLimits

0x442c,	// (0x00051ca6) cale_month_corner_pane_ParamLimits

0xa672,	// (0x00057eec) cale_month_pane_t1

0x46e6,	// (0x00051f60) cale_month_week_pane_ParamLimits

0x4cc1,	// (0x0005253b) popup_call_status_window_g1_ParamLimits

0x4cd5,	// (0x0005254f) popup_call_status_window_g2_ParamLimits

0x4ce9,	// (0x00052563) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x0005cc37) popup_call_status_window_g_ParamLimits

0xaabc,	// (0x00058336) aid_call2_pane

0x53e4,	// (0x00052c5e) msg_header_pane_g1

0x5550,	// (0x00052dca) postcard_address2_pane_ParamLimits

0x5550,	// (0x00052dca) postcard_address2_pane

0x5562,	// (0x00052ddc) postcard_message2_pane_ParamLimits

0x5562,	// (0x00052ddc) postcard_message2_pane

0x5ef5,	// (0x0005376f) message2_row_pane_ParamLimits

0x5ef5,	// (0x0005376f) message2_row_pane

0x5f0f,	// (0x00053789) address2_row_pane_ParamLimits

0x5f0f,	// (0x00053789) address2_row_pane

0xc285,	// (0x00059aff) postcard_message2_row_pane_g1

0xc28d,	// (0x00059b07) postcard_message2_row_pane_t1

0xc285,	// (0x00059aff) address2_row_pane_g1

0xc28d,	// (0x00059b07) address2_row_pane_t1

0x3d0f,	// (0x00051589) aid_size_cell_vorec

0x12eb,	// (0x0004eb65) main_rss_pane

0x5f22,	// (0x0005379c) rss_list_single_pane_ParamLimits

0x5f22,	// (0x0005379c) rss_list_single_pane

0xc29b,	// (0x00059b15) rss_list_single_pane_t1

0xc2a9,	// (0x00059b23) rss_list_single_pane_t2

0x0001,

0xf67b,	// (0x0005cef5) rss_list_single_pane_t

0x12eb,	// (0x0004eb65) main_camera2_pane

0x12eb,	// (0x0004eb65) main_video2_pane

0x615c,	// (0x000539d6) cams_zoom_pane_cp2_ParamLimits

0x615c,	// (0x000539d6) cams_zoom_pane_cp2

0x6173,	// (0x000539ed) image2_vga_pane_ParamLimits

0x6173,	// (0x000539ed) image2_vga_pane

0x61a9,	// (0x00053a23) main_camera2_pane_g1_ParamLimits

0x61a9,	// (0x00053a23) main_camera2_pane_g1

0x61c9,	// (0x00053a43) main_camera2_pane_g2_ParamLimits

0x61c9,	// (0x00053a43) main_camera2_pane_g2

0x61e0,	// (0x00053a5a) main_camera2_pane_g3_ParamLimits

0x61e0,	// (0x00053a5a) main_camera2_pane_g3

0x61f7,	// (0x00053a71) main_camera2_pane_g4_ParamLimits

0x61f7,	// (0x00053a71) main_camera2_pane_g4

0x620e,	// (0x00053a88) main_camera2_pane_g5_ParamLimits

0x620e,	// (0x00053a88) main_camera2_pane_g5

0x6225,	// (0x00053a9f) main_camera2_pane_g6_ParamLimits

0x6225,	// (0x00053a9f) main_camera2_pane_g6

0x623c,	// (0x00053ab6) main_camera2_pane_g7_ParamLimits

0x623c,	// (0x00053ab6) main_camera2_pane_g7

0x6253,	// (0x00053acd) main_camera2_pane_g8_ParamLimits

0x6253,	// (0x00053acd) main_camera2_pane_g8

0x0008,

0xf69c,	// (0x0005cf16) main_camera2_pane_g_ParamLimits

0xf69c,	// (0x0005cf16) main_camera2_pane_g

0x6281,	// (0x00053afb) main_camera2_pane_t1_ParamLimits

0x6281,	// (0x00053afb) main_camera2_pane_t1

0x62b0,	// (0x00053b2a) main_camera2_pane_t2_ParamLimits

0x62b0,	// (0x00053b2a) main_camera2_pane_t2

0x62cd,	// (0x00053b47) main_camera2_pane_t3_ParamLimits

0x62cd,	// (0x00053b47) main_camera2_pane_t3

0x6319,	// (0x00053b93) main_camera2_pane_t4_ParamLimits

0x6319,	// (0x00053b93) main_camera2_pane_t4

0x0006,

0xf6af,	// (0x0005cf29) main_camera2_pane_t_ParamLimits

0xf6af,	// (0x0005cf29) main_camera2_pane_t

0x638e,	// (0x00053c08) cams_zoom_pane_cp4_ParamLimits

0x638e,	// (0x00053c08) cams_zoom_pane_cp4

0x63a4,	// (0x00053c1e) image2_cif_pane_ParamLimits

0x63a4,	// (0x00053c1e) image2_cif_pane

0x63c7,	// (0x00053c41) image2_subqcif_pane_ParamLimits

0x63c7,	// (0x00053c41) image2_subqcif_pane

0x63dd,	// (0x00053c57) main_video2_pane_g1_ParamLimits

0x63dd,	// (0x00053c57) main_video2_pane_g1

0x63f7,	// (0x00053c71) main_video2_pane_g2_ParamLimits

0x63f7,	// (0x00053c71) main_video2_pane_g2

0x640d,	// (0x00053c87) main_video2_pane_g3_ParamLimits

0x640d,	// (0x00053c87) main_video2_pane_g3

0x6423,	// (0x00053c9d) main_video2_pane_g4_ParamLimits

0x6423,	// (0x00053c9d) main_video2_pane_g4

0x6439,	// (0x00053cb3) main_video2_pane_g5_ParamLimits

0x6439,	// (0x00053cb3) main_video2_pane_g5

0x644f,	// (0x00053cc9) main_video2_pane_g6_ParamLimits

0x644f,	// (0x00053cc9) main_video2_pane_g6

0x0005,

0xf6be,	// (0x0005cf38) main_video2_pane_g_ParamLimits

0xf6be,	// (0x0005cf38) main_video2_pane_g

0x6469,	// (0x00053ce3) main_video2_pane_t1_ParamLimits

0x6469,	// (0x00053ce3) main_video2_pane_t1

0x648d,	// (0x00053d07) main_video2_pane_t2_ParamLimits

0x648d,	// (0x00053d07) main_video2_pane_t2

0x64d7,	// (0x00053d51) main_video2_pane_t3_ParamLimits

0x64d7,	// (0x00053d51) main_video2_pane_t3

0x0002,

0xf6cb,	// (0x0005cf45) main_video2_pane_t_ParamLimits

0xf6cb,	// (0x0005cf45) main_video2_pane_t

0x5ae4,	// (0x0005335e) call_muted_g2

0x0001,

0xf66d,	// (0x0005cee7) call_muted_g

0x12eb,	// (0x0004eb65) main_mup2_pane

0x6519,	// (0x00053d93) main_mup2_pane_g1_ParamLimits

0x6519,	// (0x00053d93) main_mup2_pane_g1

0x6525,	// (0x00053d9f) main_mup2_pane_g2_ParamLimits

0x6525,	// (0x00053d9f) main_mup2_pane_g2

0xed04,	// (0x0005c57e) main_mup_pane_g13_cp1

0xed0c,	// (0x0005c586) mup_volume_pane_cp1

0x6541,	// (0x00053dbb) main_mup2_pane_g4_ParamLimits

0x6541,	// (0x00053dbb) main_mup2_pane_g4

0x6551,	// (0x00053dcb) main_mup2_pane_g5_ParamLimits

0x6551,	// (0x00053dcb) main_mup2_pane_g5

0x6561,	// (0x00053ddb) main_mup2_pane_g6_ParamLimits

0x6561,	// (0x00053ddb) main_mup2_pane_g6

0x6571,	// (0x00053deb) main_mup2_pane_g7_ParamLimits

0x6571,	// (0x00053deb) main_mup2_pane_g7

0x0006,

0xf6d2,	// (0x0005cf4c) main_mup2_pane_g_ParamLimits

0xf6d2,	// (0x0005cf4c) main_mup2_pane_g

0x6589,	// (0x00053e03) main_mup2_pane_t1_ParamLimits

0x6589,	// (0x00053e03) main_mup2_pane_t1

0x659f,	// (0x00053e19) main_mup2_pane_t2_ParamLimits

0x659f,	// (0x00053e19) main_mup2_pane_t2

0x65b5,	// (0x00053e2f) main_mup2_pane_t3_ParamLimits

0x65b5,	// (0x00053e2f) main_mup2_pane_t3

0x65cb,	// (0x00053e45) main_mup2_pane_t4_ParamLimits

0x65cb,	// (0x00053e45) main_mup2_pane_t4

0x65e3,	// (0x00053e5d) main_mup2_pane_t5_ParamLimits

0x65e3,	// (0x00053e5d) main_mup2_pane_t5

0x65fb,	// (0x00053e75) main_mup2_pane_t6_ParamLimits

0x65fb,	// (0x00053e75) main_mup2_pane_t6

0x0005,

0xf6e1,	// (0x0005cf5b) main_mup2_pane_t_ParamLimits

0xf6e1,	// (0x0005cf5b) main_mup2_pane_t

0x662b,	// (0x00053ea5) mup2_visualizer_pane_ParamLimits

0x662b,	// (0x00053ea5) mup2_visualizer_pane

0x6656,	// (0x00053ed0) mup_progress_pane_cp_ParamLimits

0x6656,	// (0x00053ed0) mup_progress_pane_cp

0xecef,	// (0x0005c569) mup_volume_pane_cp_ParamLimits

0xecef,	// (0x0005c569) mup_volume_pane_cp

0x666a,	// (0x00053ee4) mup2_visualizer_pane_g1_ParamLimits

0x666a,	// (0x00053ee4) mup2_visualizer_pane_g1

0xc30a,	// (0x00059b84) mup2_visualizer_pane_g2_ParamLimits

0xc30a,	// (0x00059b84) mup2_visualizer_pane_g2

0x667f,	// (0x00053ef9) mup2_visualizer_pane_g3_ParamLimits

0x667f,	// (0x00053ef9) mup2_visualizer_pane_g3

0x0002,

0xf6ee,	// (0x0005cf68) mup2_visualizer_pane_g_ParamLimits

0xf6ee,	// (0x0005cf68) mup2_visualizer_pane_g

0xb0dc,	// (0x00058956) aid_size_cell_fmradio

0x5c40,	// (0x000534ba) aid_height_parent_landcape

0xa4d9,	// (0x00057d53) wml_content_pane_cp

0xa4e1,	// (0x00057d5b) wml_tabs_pane

0xa4ea,	// (0x00057d64) popup_wml_miniature_window

0xa4f2,	// (0x00057d6c) scroll_pane_cp021

0xa506,	// (0x00057d80) wml_content_pane_comp8

0x12eb,	// (0x0004eb65) bg_popup_sub_pane_cp05

0xc328,	// (0x00059ba2) popup_wml_miniature_window_g1

0xc330,	// (0x00059baa) wml_miniature_view_pane

0x668b,	// (0x00053f05) aid_size_wml_view

0x6693,	// (0x00053f0d) wml_miniature_view_pane_g1

0x669c,	// (0x00053f16) wml_miniature_view_pane_g2

0x66a5,	// (0x00053f1f) wml_miniature_view_pane_g3

0x66ad,	// (0x00053f27) wml_miniature_view_pane_g4

0x66b5,	// (0x00053f2f) wml_miniature_view_pane_g5

0x66bd,	// (0x00053f37) wml_miniature_view_pane_g6

0x66c5,	// (0x00053f3f) wml_miniature_view_pane_g7

0x66cd,	// (0x00053f47) wml_miniature_view_pane_g8

0x0007,

0xf6f5,	// (0x0005cf6f) wml_miniature_view_pane_g

0xc338,	// (0x00059bb2) background_graphic_ParamLimits

0xc338,	// (0x00059bb2) background_graphic

0xc344,	// (0x00059bbe) wml_tabs_2_pane

0xc34d,	// (0x00059bc7) wml_tabs_3_pane_ParamLimits

0xc34d,	// (0x00059bc7) wml_tabs_3_pane

0xc35f,	// (0x00059bd9) wml_tabs_4_pane_ParamLimits

0xc35f,	// (0x00059bd9) wml_tabs_4_pane

0xc375,	// (0x00059bef) wml_tabs_5_pane_ParamLimits

0xc375,	// (0x00059bef) wml_tabs_5_pane

0xc38f,	// (0x00059c09) wml_tabs_pane_g2_ParamLimits

0xc38f,	// (0x00059c09) wml_tabs_pane_g2

0xc3a3,	// (0x00059c1d) wml_tabs_pane_g3_ParamLimits

0xc3a3,	// (0x00059c1d) wml_tabs_pane_g3

0x66d5,	// (0x00053f4f) wml_tabs_2_active_pane_ParamLimits

0x66d5,	// (0x00053f4f) wml_tabs_2_active_pane

0x66e5,	// (0x00053f5f) wml_tabs_2_passive_pane_ParamLimits

0x66e5,	// (0x00053f5f) wml_tabs_2_passive_pane

0x66f5,	// (0x00053f6f) wml_tabs_3_active_pane_cp_ParamLimits

0x66f5,	// (0x00053f6f) wml_tabs_3_active_pane_cp

0x6706,	// (0x00053f80) wml_tabs_3_passive_pane_ParamLimits

0x6706,	// (0x00053f80) wml_tabs_3_passive_pane

0x6717,	// (0x00053f91) wml_tabs_3_passive_pane_cp_ParamLimits

0x6717,	// (0x00053f91) wml_tabs_3_passive_pane_cp

0x6728,	// (0x00053fa2) tabs_4_active_pane

0x6730,	// (0x00053faa) tabs_4_passive_pane

0x6738,	// (0x00053fb2) tabs_4_passive_pane_cp

0x6740,	// (0x00053fba) tabs_4_passive_pane_cp2

0x59bf,	// (0x00053239) aid_height_text

0x51ae,	// (0x00052a28) mup_volume_cont_pane_ParamLimits

0x51ae,	// (0x00052a28) mup_volume_cont_pane

0x34f1,	// (0x00050d6b) aid_size_cell_pinb

0x34fb,	// (0x00050d75) aid_size_list_pinb

0x6642,	// (0x00053ebc) mup2_volume_cont_pane_ParamLimits

0x6642,	// (0x00053ebc) mup2_volume_cont_pane

0xecdb,	// (0x0005c555) mup2_volume_cont_pane_g1_ParamLimits

0xecdb,	// (0x0005c555) mup2_volume_cont_pane_g1

0x3222,	// (0x00050a9c) aid_size_cell_touch_ParamLimits

0x3222,	// (0x00050a9c) aid_size_cell_touch

0x33f9,	// (0x00050c73) touch_pane_ParamLimits

0x33f9,	// (0x00050c73) touch_pane

0x0e8f,	// (0x0004e709) main_rss2_pane

0xc3c0,	// (0x00059c3a) listscroll_rss2_pane

0xc3c9,	// (0x00059c43) rss2_navigation_pane

0xc3d1,	// (0x00059c4b) list_rss2_pane

0xabf3,	// (0x0005846d) scroll_pane_cp22

0xc3d9,	// (0x00059c53) rss2_navigation_pane_g1

0xc3e2,	// (0x00059c5c) rss2_navigation_pane_g2

0xc3ea,	// (0x00059c64) rss2_navigation_pane_g3

0x0002,

0xf706,	// (0x0005cf80) rss2_navigation_pane_g

0xc3f2,	// (0x00059c6c) rss2_navigation_pane_t1

0x6748,	// (0x00053fc2) rss2_list_single_pane_ParamLimits

0x6748,	// (0x00053fc2) rss2_list_single_pane

0xc400,	// (0x00059c7a) rss2_list_single_pane_t2

0xc40e,	// (0x00059c88) rss2_list_single_pane_t3_ParamLimits

0xc40e,	// (0x00059c88) rss2_list_single_pane_t3

0xc42b,	// (0x00059ca5) rss2_list_single_pane_t4

0x4b48,	// (0x000523c2) smil_status_pane_g1

0x1970,	// (0x0004f1ea) main_image2_pane_ParamLimits

0x1970,	// (0x0004f1ea) main_image2_pane

0x626a,	// (0x00053ae4) main_camera2_pane_g9_ParamLimits

0x626a,	// (0x00053ae4) main_camera2_pane_g9

0x635c,	// (0x00053bd6) main_camera2_pane_t5_ParamLimits

0x635c,	// (0x00053bd6) main_camera2_pane_t5

0xecb0,	// (0x0005c52a) main_camera2_pane_t6_ParamLimits

0xecb0,	// (0x0005c52a) main_camera2_pane_t6

0x675c,	// (0x00053fd6) main_image2_pane_g1_ParamLimits

0x675c,	// (0x00053fd6) main_image2_pane_g1

0x5777,	// (0x00052ff1) smil2_video_pane_ParamLimits

0x5777,	// (0x00052ff1) smil2_video_pane

0xa2fb,	// (0x00057b75) aid_zoom_text_primary_cp

0x0ed2,	// (0x0004e74c) popup_preview_fixed_window

0x18ca,	// (0x0004f144) im_reading_pane_g1

0x6150,	// (0x000539ca) cams2_bc_adjust_pane_cp_ParamLimits

0x6150,	// (0x000539ca) cams2_bc_adjust_pane_cp

0x6382,	// (0x00053bfc) cams2_bc_adjust_pane_ParamLimits

0x6382,	// (0x00053bfc) cams2_bc_adjust_pane

0xc439,	// (0x00059cb3) cams2_bc_adjust_pane_g1

0xed14,	// (0x0005c58e) cams2_slider_pane

0xed1d,	// (0x0005c597) cams2_slider_pane_g1

0xed26,	// (0x0005c5a0) cams2_slider_pane_g2

0x0006,

0xf70d,	// (0x0005cf87) cams2_slider_pane_g

0x35db,	// (0x00050e55) calc_display_pane_ParamLimits

0x35f7,	// (0x00050e71) calc_paper_pane_ParamLimits

0x3618,	// (0x00050e92) grid_calc_pane_ParamLimits

0xec1d,	// (0x0005c497) popup_clock_digital_window_t1_ParamLimits

0xb079,	// (0x000588f3) main_image_pane_t1

0x35bd,	// (0x00050e37) aid_size_cell_calc_ParamLimits

0x35bd,	// (0x00050e37) aid_size_cell_calc

0x5c70,	// (0x000534ea) popup_blid_sat_info2_window_ParamLimits

0x5c70,	// (0x000534ea) popup_blid_sat_info2_window

0xc449,	// (0x00059cc3) aid_size_cell_blid

0xc451,	// (0x00059ccb) bg_popup_window_pane_cp07

0xc474,	// (0x00059cee) grid_popup_blid_pane

0xc47c,	// (0x00059cf6) heading_pane_cp05_ParamLimits

0xc47c,	// (0x00059cf6) heading_pane_cp05

0xc544,	// (0x00059dbe) cell_popup_blid_pane_ParamLimits

0xc544,	// (0x00059dbe) cell_popup_blid_pane

0xc564,	// (0x00059dde) cell_popup_blid_pane_g1

0xc56c,	// (0x00059de6) cell_popup_blid_pane_t1

0x6615,	// (0x00053e8f) mup2_indicator_pane_ParamLimits

0x6615,	// (0x00053e8f) mup2_indicator_pane

0xadb2,	// (0x0005862c) mup2_visualizer_osc_pane

0xc316,	// (0x00059b90) mup2_visualizer_spec_pane_ParamLimits

0xc316,	// (0x00059b90) mup2_visualizer_spec_pane

0x6770,	// (0x00053fea) mup2_spec_half_pane

0x6779,	// (0x00053ff3) mup2_spec_half_pane_cp

0x6781,	// (0x00053ffb) mup2_spec_bar_pane_ParamLimits

0x6781,	// (0x00053ffb) mup2_spec_bar_pane

0xc2b7,	// (0x00059b31) mup2_spec_bar_pane_g1

0xc2c1,	// (0x00059b3b) mup2_spec_bar_pane_g2

0x0001,

0xf680,	// (0x0005cefa) mup2_spec_bar_pane_g

0x67a0,	// (0x0005401a) mup2_osc_middle_pane

0xc2d3,	// (0x00059b4d) mup2_visualizer_osc_pane_g1

0x0efa,	// (0x0004e774) popup_number_entry_window_t1_ParamLimits

0x0f0d,	// (0x0004e787) popup_number_entry_window_t2_ParamLimits

0x0f1f,	// (0x0004e799) popup_number_entry_window_t3_ParamLimits

0x3441,	// (0x00050cbb) popup_number_entry_window_t5_ParamLimits

0x3441,	// (0x00050cbb) popup_number_entry_window_t5

0xf12f,	// (0x0005c9a9) popup_number_entry_window_t_ParamLimits

0x0f31,	// (0x0004e7ab) text_title_cp2_ParamLimits

0xec5c,	// (0x0005c4d6) aid_hotspot_pointer_text2_pane

0xec82,	// (0x0005c4fc) main_viewer_pane_g9_ParamLimits

0xec82,	// (0x0005c4fc) main_viewer_pane_g9

0xa672,	// (0x00057eec) cale_month_pane_t1_ParamLimits

0xa6d9,	// (0x00057f53) bg_cale_pane_ParamLimits

0xa6f1,	// (0x00057f6b) list_cale_pane_ParamLimits

0x1765,	// (0x0004efdf) listscroll_cale_day_pane_t1

0xa702,	// (0x00057f7c) scroll_pane_cp09_ParamLimits

0x51e0,	// (0x00052a5a) main_mup_eq_pane_t1_ParamLimits

0x51e0,	// (0x00052a5a) main_mup_eq_pane_t1

0x51f8,	// (0x00052a72) main_mup_eq_pane_t2_ParamLimits

0x51f8,	// (0x00052a72) main_mup_eq_pane_t2

0x520e,	// (0x00052a88) main_mup_eq_pane_t3_ParamLimits

0x520e,	// (0x00052a88) main_mup_eq_pane_t3

0x5224,	// (0x00052a9e) main_mup_eq_pane_t4_ParamLimits

0x5224,	// (0x00052a9e) main_mup_eq_pane_t4

0x523a,	// (0x00052ab4) main_mup_eq_pane_t5_ParamLimits

0x523a,	// (0x00052ab4) main_mup_eq_pane_t5

0x5250,	// (0x00052aca) main_mup_eq_pane_t6_ParamLimits

0x5250,	// (0x00052aca) main_mup_eq_pane_t6

0x5262,	// (0x00052adc) main_mup_eq_pane_t7_ParamLimits

0x5262,	// (0x00052adc) main_mup_eq_pane_t7

0x5274,	// (0x00052aee) main_mup_eq_pane_t8_ParamLimits

0x5274,	// (0x00052aee) main_mup_eq_pane_t8

0x5286,	// (0x00052b00) main_mup_eq_pane_t9_ParamLimits

0x5286,	// (0x00052b00) main_mup_eq_pane_t9

0x529c,	// (0x00052b16) main_mup_eq_pane_t10_ParamLimits

0x529c,	// (0x00052b16) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x0005cd36) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x0005cd36) main_mup_eq_pane_t

0x532f,	// (0x00052ba9) mup_equalizer_pane_cp5_ParamLimits

0x5341,	// (0x00052bbb) mup_equalizer_pane_cp6_ParamLimits

0x5353,	// (0x00052bcd) mup_equalizer_pane_cp7_ParamLimits

0x0e8f,	// (0x0004e709) main_gallery_pane

0xc2dc,	// (0x00059b56) smil2_volume_pane

0xc2e4,	// (0x00059b5e) smil_status_volume_pane_g1_ParamLimits

0xc2f7,	// (0x00059b71) smil_status_volume_pane_g2_ParamLimits

0xec8e,	// (0x0005c508) smil_status_volume_pane_g3_ParamLimits

0xf685,	// (0x0005ceff) smil_status_volume_pane_g_ParamLimits

0xc451,	// (0x00059ccb) bg_popup_window_pane_cp07_ParamLimits

0xc45f,	// (0x00059cd9) blid_firmament_pane

0x67a9,	// (0x00054023) aid_size_cell_gallery_ParamLimits

0x67a9,	// (0x00054023) aid_size_cell_gallery

0x67bf,	// (0x00054039) grid_gallery_pane_ParamLimits

0x67bf,	// (0x00054039) grid_gallery_pane

0x67d3,	// (0x0005404d) cell_gallery_pane_ParamLimits

0x67d3,	// (0x0005404d) cell_gallery_pane

0xc57a,	// (0x00059df4) bg_cell_gallery_focus_pane_ParamLimits

0xc57a,	// (0x00059df4) bg_cell_gallery_focus_pane

0xc58c,	// (0x00059e06) cell_gallery_pane_g1_ParamLimits

0xc58c,	// (0x00059e06) cell_gallery_pane_g1

0x681a,	// (0x00054094) cell_gallery_pane_g2_ParamLimits

0x681a,	// (0x00054094) cell_gallery_pane_g2

0x6827,	// (0x000540a1) cell_gallery_pane_g3_ParamLimits

0x6827,	// (0x000540a1) cell_gallery_pane_g3

0xc598,	// (0x00059e12) cell_gallery_pane_g4_ParamLimits

0xc598,	// (0x00059e12) cell_gallery_pane_g4

0x0003,

0xf733,	// (0x0005cfad) cell_gallery_pane_g_ParamLimits

0xf733,	// (0x0005cfad) cell_gallery_pane_g

0xc5a4,	// (0x00059e1e) bg_cell_gallery_focus_pane_g1

0xc5ac,	// (0x00059e26) bg_cell_gallery_focus_pane_g2

0xc5b4,	// (0x00059e2e) bg_cell_gallery_focus_pane_g3

0xc5bc,	// (0x00059e36) bg_cell_gallery_focus_pane_g4

0xc5c4,	// (0x00059e3e) bg_cell_gallery_focus_pane_g5

0xc5cc,	// (0x00059e46) bg_cell_gallery_focus_pane_g6

0xc5d4,	// (0x00059e4e) bg_cell_gallery_focus_pane_g7

0xc5dc,	// (0x00059e56) bg_cell_gallery_focus_pane_g8

0x0007,

0xf73c,	// (0x0005cfb6) bg_cell_gallery_focus_pane_g

0xc5e4,	// (0x00059e5e) aid_firma_cardinal

0xc5f8,	// (0x00059e72) blid_firmament_pane_t1

0xc60f,	// (0x00059e89) blid_firmament_pane_t2

0xc626,	// (0x00059ea0) blid_firmament_pane_t3

0xc63d,	// (0x00059eb7) blid_firmament_pane_t4

0x0003,

0xf74d,	// (0x0005cfc7) blid_firmament_pane_t

0xc654,	// (0x00059ece) blid_sat_info_pane

0xc664,	// (0x00059ede) blid_sat_info_pane_g1

0xc664,	// (0x00059ede) blid_sat_info_pane_g2

0x0001,

0xf756,	// (0x0005cfd0) blid_sat_info_pane_g

0xc66e,	// (0x00059ee8) blid_sat_info_pane_t1

0xc67c,	// (0x00059ef6) smil2_volume_content_pane

0xc685,	// (0x00059eff) smil2_volume_pane_g1

0xc68d,	// (0x00059f07) smil2_volume_content_pane_g1

0xc696,	// (0x00059f10) smil2_volume_content_pane_g2

0xc69f,	// (0x00059f19) smil2_volume_content_pane_g3

0xc6a8,	// (0x00059f22) smil2_volume_content_pane_g4

0xc6b1,	// (0x00059f2b) smil2_volume_content_pane_g5

0xc6ba,	// (0x00059f34) smil2_volume_content_pane_g6

0xc6c3,	// (0x00059f3d) smil2_volume_content_pane_g7

0xc6cc,	// (0x00059f46) smil2_volume_content_pane_g8

0xc6d5,	// (0x00059f4f) smil2_volume_content_pane_g9

0xc6de,	// (0x00059f58) smil2_volume_content_pane_g10

0x0009,

0xf75b,	// (0x0005cfd5) smil2_volume_content_pane_g

0x3a35,	// (0x000512af) cale_week_day_heading_pane_t1_ParamLimits

0x3a5f,	// (0x000512d9) cale_week_day_heading_pane_t2_ParamLimits

0x3a89,	// (0x00051303) cale_week_day_heading_pane_t3_ParamLimits

0x3ab3,	// (0x0005132d) cale_week_day_heading_pane_t4_ParamLimits

0x3add,	// (0x00051357) cale_week_day_heading_pane_t5_ParamLimits

0x3b07,	// (0x00051381) cale_week_day_heading_pane_t6_ParamLimits

0x3b31,	// (0x000513ab) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x0005caae) cale_week_day_heading_pane_t_ParamLimits

0x1777,	// (0x0004eff1) bg_cale_side_pane_ParamLimits

0x3b5b,	// (0x000513d5) cale_week_time_pane_t1_ParamLimits

0x3b87,	// (0x00051401) cale_week_time_pane_t2_ParamLimits

0x3bb3,	// (0x0005142d) cale_week_time_pane_t3_ParamLimits

0x3bdf,	// (0x00051459) cale_week_time_pane_t4_ParamLimits

0x3c0b,	// (0x00051485) cale_week_time_pane_t5_ParamLimits

0x3c37,	// (0x000514b1) cale_week_time_pane_t6_ParamLimits

0x3c63,	// (0x000514dd) cale_week_time_pane_t7_ParamLimits

0x3c8f,	// (0x00051509) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x0005cabd) cale_week_time_pane_t_ParamLimits

0x3cbb,	// (0x00051535) cell_cale_week_pane_g2_ParamLimits

0x1777,	// (0x0004eff1) bg_cale_side_pane_cp01_ParamLimits

0x49eb,	// (0x00052265) cale_month_week_pane_t1_ParamLimits

0x4a02,	// (0x0005227c) cale_month_week_pane_t2_ParamLimits

0x4a19,	// (0x00052293) cale_month_week_pane_t3_ParamLimits

0x4a30,	// (0x000522aa) cale_month_week_pane_t4_ParamLimits

0x4a47,	// (0x000522c1) cale_month_week_pane_t5_ParamLimits

0x4a5e,	// (0x000522d8) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x0005cb96) cale_month_week_pane_t_ParamLimits

0xeb9d,	// (0x0005c417) cell_cale_month_pane_g1_ParamLimits

0x0e8f,	// (0x0004e709) main_cale_event_viewer_pane

0x0e8f,	// (0x0004e709) listscroll_cale_event_viewer_pane

0xc6e7,	// (0x00059f61) list_cale_ev_pane

0xc6ef,	// (0x00059f69) scroll_pane_cp023

0x6834,	// (0x000540ae) field_cale_ev_pane_ParamLimits

0x6834,	// (0x000540ae) field_cale_ev_pane

0xc6fb,	// (0x00059f75) field_cale_ev_content_pane_ParamLimits

0xc6fb,	// (0x00059f75) field_cale_ev_content_pane

0xc707,	// (0x00059f81) field_cale_ev_pane_g1_ParamLimits

0xc707,	// (0x00059f81) field_cale_ev_pane_g1

0xc713,	// (0x00059f8d) field_cale_ev_pane_g2_ParamLimits

0xc713,	// (0x00059f8d) field_cale_ev_pane_g2

0xc72b,	// (0x00059fa5) field_cale_ev_pane_g3_ParamLimits

0xc72b,	// (0x00059fa5) field_cale_ev_pane_g3

0x0002,

0xf770,	// (0x0005cfea) field_cale_ev_pane_g_ParamLimits

0xf770,	// (0x0005cfea) field_cale_ev_pane_g

0xc743,	// (0x00059fbd) field_cale_ev_pane_t1_ParamLimits

0xc743,	// (0x00059fbd) field_cale_ev_pane_t1

0x684e,	// (0x000540c8) field_cale_ev_content_pane_t1_ParamLimits

0x684e,	// (0x000540c8) field_cale_ev_content_pane_t1

0xaf29,	// (0x000587a3) bg_button_pane_cp01

0x173d,	// (0x0004efb7) listscroll_cale_week_pane_ParamLimits

0x385f,	// (0x000510d9) popup_toolbar_window_cp01

0x1765,	// (0x0004efdf) listscroll_cale_week_pane_t1_ParamLimits

0x1615,	// (0x0004ee8f) listscroll_cale_day_pane_ParamLimits

0x385f,	// (0x000510d9) popup_toolbar_window_cp02

0x1765,	// (0x0004efdf) listscroll_cale_day_pane_t1_ParamLimits

0x173d,	// (0x0004efb7) main_cale_month_pane_ParamLimits

0x5e6c,	// (0x000536e6) popup_toolbar_window_cp03_ParamLimits

0x5e6c,	// (0x000536e6) popup_toolbar_window_cp03

0x5651,	// (0x00052ecb) main_image_pane_g2_ParamLimits

0x5651,	// (0x00052ecb) main_image_pane_g2

0x5662,	// (0x00052edc) main_image_pane_g3_ParamLimits

0x5662,	// (0x00052edc) main_image_pane_g3

0x0002,

0xf54e,	// (0x0005cdc8) main_image_pane_g_ParamLimits

0xf54e,	// (0x0005cdc8) main_image_pane_g

0xb079,	// (0x000588f3) main_image_pane_t1_ParamLimits

0x5673,	// (0x00052eed) main_image_pane_t2_ParamLimits

0x5673,	// (0x00052eed) main_image_pane_t2

0x5685,	// (0x00052eff) main_image_pane_t3_ParamLimits

0x5685,	// (0x00052eff) main_image_pane_t3

0x56ad,	// (0x00052f27) main_image_pane_t4_ParamLimits

0x56ad,	// (0x00052f27) main_image_pane_t4

0x0003,

0xf555,	// (0x0005cdcf) main_image_pane_t_ParamLimits

0xf555,	// (0x0005cdcf) main_image_pane_t

0x56cd,	// (0x00052f47) popup_image_details_window_cp01

0x56d5,	// (0x00052f4f) popup_toobar_trans_pane_cp01_ParamLimits

0x56d5,	// (0x00052f4f) popup_toobar_trans_pane_cp01

0x5d39,	// (0x000535b3) popup_image_details_window_ParamLimits

0x5d39,	// (0x000535b3) popup_image_details_window

0xc23f,	// (0x00059ab9) popup_image_focus_window

0x611e,	// (0x00053998) camera2_autofocus_pane_ParamLimits

0x611e,	// (0x00053998) camera2_autofocus_pane

0x0e8f,	// (0x0004e709) bg_popup_sub_pane_cp06

0xc75a,	// (0x00059fd4) popup_image_focus_window_g1

0xc762,	// (0x00059fdc) popup_image_focus_window_g2

0xc76a,	// (0x00059fe4) popup_image_focus_window_g3

0xc772,	// (0x00059fec) popup_image_focus_window_g4

0x0003,

0xf777,	// (0x0005cff1) popup_image_focus_window_g

0xc77a,	// (0x00059ff4) popup_image_focus_window_t1

0xc788,	// (0x0005a002) popup_image_focus_window_t2

0xc797,	// (0x0005a011) popup_image_focus_window_t3

0x0002,

0xf780,	// (0x0005cffa) popup_image_focus_window_t

0xc7a5,	// (0x0005a01f) camera2_autofocus_pane_g1

0x1970,	// (0x0004f1ea) bg_tb_trans_pane_cp01

0xc7b3,	// (0x0005a02d) popup_image_details_window_g1

0xc7c6,	// (0x0005a040) popup_image_details_window_g2

0x0002,

0xf792,	// (0x0005d00c) popup_image_details_window_g

0xc7ef,	// (0x0005a069) popup_image_details_window_t1

0xc801,	// (0x0005a07b) popup_image_details_window_t2

0xc81a,	// (0x0005a094) popup_image_details_window_t3

0xc82e,	// (0x0005a0a8) popup_image_details_window_t4

0xc849,	// (0x0005a0c3) popup_image_details_window_t5

0x0004,

0xf799,	// (0x0005d013) popup_image_details_window_t

0x15fd,	// (0x0004ee77) bg_calc_paper_pane_ParamLimits

0xa30b,	// (0x00057b85) grid_highlight_pane_cp013

0xa315,	// (0x00057b8f) list_calc_pane_ParamLimits

0xa327,	// (0x00057ba1) scroll_pane_cp024

0x1615,	// (0x0004ee8f) bg_calc_display_pane_ParamLimits

0xa32f,	// (0x00057ba9) calc_display_pane_t1_ParamLimits

0xa344,	// (0x00057bbe) calc_display_pane_t2_ParamLimits

0xa359,	// (0x00057bd3) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x0005ca30) calc_display_pane_t_ParamLimits

0x3790,	// (0x0005100a) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x0005ca4d) cell_calc_pane_g

0x3799,	// (0x00051013) cell_calc_pane_t1

0x1674,	// (0x0004eeee) grid_highlight_pane_cp02_ParamLimits

0x168a,	// (0x0004ef04) toolbar_button_pane_cp01_ParamLimits

0x168a,	// (0x0004ef04) toolbar_button_pane_cp01

0xb0be,	// (0x00058938) temp_image_control_pane_ParamLimits

0xb0be,	// (0x00058938) temp_image_control_pane

0x1970,	// (0x0004f1ea) main_mp3_pane

0xc863,	// (0x0005a0dd) temp_image_control_pane_g1_ParamLimits

0xc863,	// (0x0005a0dd) temp_image_control_pane_g1

0xc871,	// (0x0005a0eb) temp_image_control_pane_g2_ParamLimits

0xc871,	// (0x0005a0eb) temp_image_control_pane_g2

0xc883,	// (0x0005a0fd) temp_image_control_pane_g3_ParamLimits

0xc883,	// (0x0005a0fd) temp_image_control_pane_g3

0x689b,	// (0x00054115) temp_image_control_pane_g4_ParamLimits

0x689b,	// (0x00054115) temp_image_control_pane_g4

0x0003,

0xf7a4,	// (0x0005d01e) temp_image_control_pane_g_ParamLimits

0xf7a4,	// (0x0005d01e) temp_image_control_pane_g

0xc863,	// (0x0005a0dd) main_mp3_pane_g1

0x68ac,	// (0x00054126) main_mp3_pane_g2

0x0007,

0xf7ad,	// (0x0005d027) main_mp3_pane_g

0xc8c6,	// (0x0005a140) main_mp3_pane_t1

0x17d3,	// (0x0004f04d) main_camera_pane_g8_ParamLimits

0x17d3,	// (0x0004f04d) main_camera_pane_g8

0x3f50,	// (0x000517ca) main_video_pane_g7_ParamLimits

0x3f50,	// (0x000517ca) main_video_pane_g7

0xecc9,	// (0x0005c543) main_camera2_pane_t7_ParamLimits

0xecc9,	// (0x0005c543) main_camera2_pane_t7

0x1930,	// (0x0004f1aa) scroll_pane_cp025_ParamLimits

0x1930,	// (0x0004f1aa) scroll_pane_cp025

0x1944,	// (0x0004f1be) scroll_pane_cp026_ParamLimits

0x1944,	// (0x0004f1be) scroll_pane_cp026

0x1953,	// (0x0004f1cd) wml_content_pane_ParamLimits

0x0e8f,	// (0x0004e709) main_touch_calib_pane

0x6962,	// (0x000541dc) main_touch_calib_pane_g1

0x696e,	// (0x000541e8) main_touch_calib_pane_g2

0x697a,	// (0x000541f4) main_touch_calib_pane_g3

0x6986,	// (0x00054200) main_touch_calib_pane_g4

0x0003,

0xf7cb,	// (0x0005d045) main_touch_calib_pane_g

0x6992,	// (0x0005420c) main_touch_calib_pane_t1

0x69aa,	// (0x00054224) main_touch_calib_pane_t2

0x0004,

0xf7d4,	// (0x0005d04e) main_touch_calib_pane_t

0xaca4,	// (0x0005851e) mup_progress_pane_cp02

0xacc3,	// (0x0005853d) navi_pane_g1

0xad43,	// (0x000585bd) navi_pane_mp_t3

0x1970,	// (0x0004f1ea) main_mp3_pane_ParamLimits

0x5ea6,	// (0x00053720) navi_pane_ParamLimits

0xc863,	// (0x0005a0dd) main_mp3_pane_g1_ParamLimits

0x68ac,	// (0x00054126) main_mp3_pane_g2_ParamLimits

0x68b8,	// (0x00054132) main_mp3_pane_g3_ParamLimits

0x68b8,	// (0x00054132) main_mp3_pane_g3

0x68c4,	// (0x0005413e) main_mp3_pane_g4_ParamLimits

0x68c4,	// (0x0005413e) main_mp3_pane_g4

0xc893,	// (0x0005a10d) main_mp3_pane_g5_ParamLimits

0xc893,	// (0x0005a10d) main_mp3_pane_g5

0xc8a1,	// (0x0005a11b) main_mp3_pane_g6_ParamLimits

0xc8a1,	// (0x0005a11b) main_mp3_pane_g6

0xc8ae,	// (0x0005a128) main_mp3_pane_g7_ParamLimits

0xc8ae,	// (0x0005a128) main_mp3_pane_g7

0xc8ba,	// (0x0005a134) main_mp3_pane_g8_ParamLimits

0xc8ba,	// (0x0005a134) main_mp3_pane_g8

0xf7ad,	// (0x0005d027) main_mp3_pane_g_ParamLimits

0x68d0,	// (0x0005414a) main_mp3_pane_t2

0x68de,	// (0x00054158) main_mp3_pane_t3

0xc8d4,	// (0x0005a14e) main_mp3_pane_t4

0xc8e2,	// (0x0005a15c) main_mp3_pane_t5

0x0005,

0xf7be,	// (0x0005d038) main_mp3_pane_t

0xc8f0,	// (0x0005a16a) mup_progress_pane_cp01

0xa2fb,	// (0x00057b75) aid_zoom_text_secondary2

0xc6e7,	// (0x00059f61) list_cale_ev2_pane

0xc6ef,	// (0x00059f69) scroll_pane_cp023_ParamLimits

0x69f8,	// (0x00054272) field_cale_ev2_pane_ParamLimits

0x69f8,	// (0x00054272) field_cale_ev2_pane

0xc8f8,	// (0x0005a172) field_cale_ev2_pane_g1_ParamLimits

0xc8f8,	// (0x0005a172) field_cale_ev2_pane_g1

0xc904,	// (0x0005a17e) field_cale_ev2_pane_g2_ParamLimits

0xc904,	// (0x0005a17e) field_cale_ev2_pane_g2

0xc91c,	// (0x0005a196) field_cale_ev2_pane_g3_ParamLimits

0xc91c,	// (0x0005a196) field_cale_ev2_pane_g3

0x0003,

0xf7df,	// (0x0005d059) field_cale_ev2_pane_g_ParamLimits

0xf7df,	// (0x0005d059) field_cale_ev2_pane_g

0xc940,	// (0x0005a1ba) field_cale_ev2_pane_t1_ParamLimits

0xc940,	// (0x0005a1ba) field_cale_ev2_pane_t1

0xc957,	// (0x0005a1d1) field_cale_ev2_pane_t2_ParamLimits

0xc957,	// (0x0005a1d1) field_cale_ev2_pane_t2

0x0001,

0xf7e8,	// (0x0005d062) field_cale_ev2_pane_t_ParamLimits

0xf7e8,	// (0x0005d062) field_cale_ev2_pane_t

0x550c,	// (0x00052d86) main_postcard_pane_g5_ParamLimits

0x550c,	// (0x00052d86) main_postcard_pane_g5

0x5520,	// (0x00052d9a) main_postcard_pane_g6_ParamLimits

0x5520,	// (0x00052d9a) main_postcard_pane_g6

0x3d32,	// (0x000515ac) camera2_autofocus_pane_cp_ParamLimits

0x3d32,	// (0x000515ac) camera2_autofocus_pane_cp

0x1970,	// (0x0004f1ea) main_mup3_pane

0x6a30,	// (0x000542aa) main_mup3_pane_g1_ParamLimits

0x6a30,	// (0x000542aa) main_mup3_pane_g1

0x6a52,	// (0x000542cc) main_mup3_pane_g2_ParamLimits

0x6a52,	// (0x000542cc) main_mup3_pane_g2

0x6aba,	// (0x00054334) main_mup3_pane_g3_ParamLimits

0x6aba,	// (0x00054334) main_mup3_pane_g3

0x6af8,	// (0x00054372) main_mup3_pane_g4_ParamLimits

0x6af8,	// (0x00054372) main_mup3_pane_g4

0x6b36,	// (0x000543b0) main_mup3_pane_g5_ParamLimits

0x6b36,	// (0x000543b0) main_mup3_pane_g5

0x6b74,	// (0x000543ee) main_mup3_pane_g6_ParamLimits

0x6b74,	// (0x000543ee) main_mup3_pane_g6

0xc96c,	// (0x0005a1e6) main_mup3_pane_g7_ParamLimits

0xc96c,	// (0x0005a1e6) main_mup3_pane_g7

0x0007,

0xf7f8,	// (0x0005d072) main_mup3_pane_g_ParamLimits

0xf7f8,	// (0x0005d072) main_mup3_pane_g

0x6bea,	// (0x00054464) main_mup3_pane_t1_ParamLimits

0x6bea,	// (0x00054464) main_mup3_pane_t1

0x6c52,	// (0x000544cc) main_mup3_pane_t2_ParamLimits

0x6c52,	// (0x000544cc) main_mup3_pane_t2

0x6d1a,	// (0x00054594) main_mup3_pane_t4_ParamLimits

0x6d1a,	// (0x00054594) main_mup3_pane_t4

0x6d68,	// (0x000545e2) main_mup3_pane_t5_ParamLimits

0x6d68,	// (0x000545e2) main_mup3_pane_t5

0x6e16,	// (0x00054690) main_mup3_pane_t6_ParamLimits

0x6e16,	// (0x00054690) main_mup3_pane_t6

0x0005,

0xf809,	// (0x0005d083) main_mup3_pane_t_ParamLimits

0xf809,	// (0x0005d083) main_mup3_pane_t

0x6eca,	// (0x00054744) mup3_progress_pane_ParamLimits

0x6eca,	// (0x00054744) mup3_progress_pane

0x6f26,	// (0x000547a0) popup_mup3_control_window_ParamLimits

0x6f26,	// (0x000547a0) popup_mup3_control_window

0xc97a,	// (0x0005a1f4) popup_mup3_text_window

0x6f54,	// (0x000547ce) mup3_progress_pane_t1

0x6f6a,	// (0x000547e4) mup3_progress_pane_t2

0xc982,	// (0x0005a1fc) mup3_progress_pane_t3

0x0002,

0xf816,	// (0x0005d090) mup3_progress_pane_t

0xc999,	// (0x0005a213) mup_progress_pane_cp03

0x0e8f,	// (0x0004e709) bg_tb_trans_pane_cp04

0x6f80,	// (0x000547fa) mup3_volume_pane

0x6f88,	// (0x00054802) popup_mup3_control_window_g1

0x6f91,	// (0x0005480b) mup3_volume_pane_g1

0x6f9a,	// (0x00054814) mup3_volume_pane_g2

0x6fa3,	// (0x0005481d) mup3_volume_pane_g3

0x0002,

0xf81d,	// (0x0005d097) mup3_volume_pane_g

0x0e8f,	// (0x0004e709) bg_tb_trans_pane_cp03

0xc9a9,	// (0x0005a223) popup_mup3_text_window_g1

0xc9b1,	// (0x0005a22b) popup_mup3_text_window_t1

0x165d,	// (0x0004eed7) list_calc_item_pane_g1_ParamLimits

0xc3b7,	// (0x00059c31) mup_volume_pane_cp_g1

0x69c2,	// (0x0005423c) main_touch_calib_pane_t3

0x69d4,	// (0x0005424e) main_touch_calib_pane_t4

0x69e6,	// (0x00054260) main_touch_calib_pane_t5

0x0e99,	// (0x0004e713) aid_cell_size_toolbar2

0x0ea1,	// (0x0004e71b) aid_popup3_width_pane

0xa2f3,	// (0x00057b6d) aid_zoom_text_msg_primary

0xa423,	// (0x00057c9d) vorec_t7

0x1621,	// (0x0004ee9b) bg_calc_paper_pane_g1_ParamLimits

0x162d,	// (0x0004eea7) bg_calc_paper_pane_g2_ParamLimits

0x1639,	// (0x0004eeb3) bg_calc_paper_pane_g3_ParamLimits

0x1645,	// (0x0004eebf) bg_calc_paper_pane_g4_ParamLimits

0x1651,	// (0x0004eecb) bg_calc_paper_pane_g5_ParamLimits

0x372a,	// (0x00050fa4) bg_calc_paper_pane_g6_ParamLimits

0x3739,	// (0x00050fb3) bg_calc_paper_pane_g7_ParamLimits

0x3748,	// (0x00050fc2) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x0005ca37) bg_calc_paper_pane_g_ParamLimits

0x3757,	// (0x00050fd1) calc_bg_paper_pane_g9_ParamLimits

0x3e66,	// (0x000516e0) image_qvga_pane_ParamLimits

0x3e66,	// (0x000516e0) image_qvga_pane

0x1546,	// (0x0004edc0) bg_popup_sub_pane_cp04_ParamLimits

0xaff5,	// (0x0005886f) popup_mup_playback_window_g1_ParamLimits

0xb001,	// (0x0005887b) popup_mup_playback_window_t1_ParamLimits

0xb016,	// (0x00058890) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x0005cdc3) popup_mup_playback_window_t_ParamLimits

0x6535,	// (0x00053daf) main_mup2_pane_g3_ParamLimits

0x6535,	// (0x00053daf) main_mup2_pane_g3

0x412d,	// (0x000519a7) popup_toolbar_window_cp04

0xb3f7,	// (0x00058c71) popup_call2_audio_second_window_g3_ParamLimits

0xb3f7,	// (0x00058c71) popup_call2_audio_second_window_g3

0xb801,	// (0x0005907b) popup_call2_audio_first_window_g4_ParamLimits

0xb801,	// (0x0005907b) popup_call2_audio_first_window_g4

0xbe80,	// (0x000596fa) popup_call2_audio_in_window_g4_ParamLimits

0xbe80,	// (0x000596fa) popup_call2_audio_in_window_g4

0x5633,	// (0x00052ead) aid_area_sk_bg_cut_ParamLimits

0x5633,	// (0x00052ead) aid_area_sk_bg_cut

0xb02b,	// (0x000588a5) aid_area_sk_bg_cut_2_ParamLimits

0xb02b,	// (0x000588a5) aid_area_sk_bg_cut_2

0x680a,	// (0x00054084) aid_placing_details_win

0x6812,	// (0x0005408c) aid_placing_details_win_2

0xc7a5,	// (0x0005a01f) camera2_autofocus_pane_g1_ParamLimits

0x33a8,	// (0x00050c22) popup_fixed_preview_cale_window_ParamLimits

0x33a8,	// (0x00050c22) popup_fixed_preview_cale_window

0xadc3,	// (0x0005863d) navi_slider_pane_g3

0xadcc,	// (0x00058646) navi_slider_pane_g4

0xadd5,	// (0x0005864f) navi_slider_pane_g5

0xadc3,	// (0x0005863d) navi_slider_pane_g6

0xec43,	// (0x0005c4bd) navi_slider_pane_g7

0xaef6,	// (0x00058770) mup_scale_pane_g3

0xaeff,	// (0x00058779) mup_scale_pane_g4

0xaf08,	// (0x00058782) mup_scale_pane_g5

0x5367,	// (0x00052be1) mup_scale_pane_g6

0x5370,	// (0x00052bea) mup_scale_pane_g7

0xadc3,	// (0x0005863d) cams2_slider_pane_g3

0xc441,	// (0x00059cbb) cams2_slider_pane_g4

0xed2f,	// (0x0005c5a9) cams2_slider_pane_g5

0xadc3,	// (0x0005863d) cams2_slider_pane_g6

0xed37,	// (0x0005c5b1) cams2_slider_pane_g7

0xc664,	// (0x00059ede) camera2_autofocus_pane_cp_g1

0xc9bf,	// (0x0005a239) bg_popup_preview_window_pane_cp02_ParamLimits

0xc9bf,	// (0x0005a239) bg_popup_preview_window_pane_cp02

0x6fac,	// (0x00054826) list_fp_cale_pane_ParamLimits

0x6fac,	// (0x00054826) list_fp_cale_pane

0xc9cb,	// (0x0005a245) popup_fixed_preview_cale_window_t1_ParamLimits

0xc9cb,	// (0x0005a245) popup_fixed_preview_cale_window_t1

0x6fb8,	// (0x00054832) popup_fixed_preview_cale_window_t2_ParamLimits

0x6fb8,	// (0x00054832) popup_fixed_preview_cale_window_t2

0x6fcd,	// (0x00054847) popup_fixed_preview_cale_window_t3_ParamLimits

0x6fcd,	// (0x00054847) popup_fixed_preview_cale_window_t3

0x0002,

0xf824,	// (0x0005d09e) popup_fixed_preview_cale_window_t_ParamLimits

0xf824,	// (0x0005d09e) popup_fixed_preview_cale_window_t

0x6fe2,	// (0x0005485c) list_single_fp_cale_pane_ParamLimits

0x6fe2,	// (0x0005485c) list_single_fp_cale_pane

0x6ff6,	// (0x00054870) list_single_fp_cale_pane_g1_ParamLimits

0x6ff6,	// (0x00054870) list_single_fp_cale_pane_g1

0xc9e9,	// (0x0005a263) list_single_fp_cale_pane_g2_ParamLimits

0xc9e9,	// (0x0005a263) list_single_fp_cale_pane_g2

0x0002,

0xf82b,	// (0x0005d0a5) list_single_fp_cale_pane_g_ParamLimits

0xf82b,	// (0x0005d0a5) list_single_fp_cale_pane_g

0x7002,	// (0x0005487c) list_single_fp_cale_pane_t1_ParamLimits

0x7002,	// (0x0005487c) list_single_fp_cale_pane_t1

0x7014,	// (0x0005488e) list_single_fp_cale_pane_t2_ParamLimits

0x7014,	// (0x0005488e) list_single_fp_cale_pane_t2

0x0001,

0xf832,	// (0x0005d0ac) list_single_fp_cale_pane_t_ParamLimits

0xf832,	// (0x0005d0ac) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0e8f,	// (0x0004e709) main_dialer_pane

0x7047,	// (0x000548c1) aid_cell_size_keypad

0x7051,	// (0x000548cb) dialer_ne_pane

0x7059,	// (0x000548d3) grid_dialer_command_1_pane

0x7061,	// (0x000548db) grid_dialer_command_2_pane

0x7069,	// (0x000548e3) grid_dialer_keypad_pane

0x7079,	// (0x000548f3) bg_popup_call_pane_cp06_ParamLimits

0x7079,	// (0x000548f3) bg_popup_call_pane_cp06

0x7085,	// (0x000548ff) dialer_ne_clear_pane_ParamLimits

0x7085,	// (0x000548ff) dialer_ne_clear_pane

0xca02,	// (0x0005a27c) dialer_ne_pane_g1

0xca0a,	// (0x0005a284) dialer_ne_pane_t1_ParamLimits

0xca0a,	// (0x0005a284) dialer_ne_pane_t1

0x7091,	// (0x0005490b) dialer_ne_pane_t2_ParamLimits

0x7091,	// (0x0005490b) dialer_ne_pane_t2

0x70bb,	// (0x00054935) dialer_ne_pane_t3_ParamLimits

0x70bb,	// (0x00054935) dialer_ne_pane_t3

0x0002,

0xf837,	// (0x0005d0b1) dialer_ne_pane_t_ParamLimits

0xf837,	// (0x0005d0b1) dialer_ne_pane_t

0x70eb,	// (0x00054965) dialer_ne_pane_t3_copy1_ParamLimits

0x70eb,	// (0x00054965) dialer_ne_pane_t3_copy1

0x711a,	// (0x00054994) cell_dialer_keypad_pane_ParamLimits

0x711a,	// (0x00054994) cell_dialer_keypad_pane

0x712f,	// (0x000549a9) cell_dialer_command_1_pane_ParamLimits

0x712f,	// (0x000549a9) cell_dialer_command_1_pane

0x7145,	// (0x000549bf) cell_dialer_command_2_pane_ParamLimits

0x7145,	// (0x000549bf) cell_dialer_command_2_pane

0xca1c,	// (0x0005a296) bg_button_pane_cp02_ParamLimits

0xca1c,	// (0x0005a296) bg_button_pane_cp02

0x7154,	// (0x000549ce) cell_dialer_keypad_pane_g1_ParamLimits

0x7154,	// (0x000549ce) cell_dialer_keypad_pane_g1

0xca1c,	// (0x0005a296) bg_button_pane_cp03_ParamLimits

0xca1c,	// (0x0005a296) bg_button_pane_cp03

0x7169,	// (0x000549e3) cell_dialer_command_1_pane_g1_ParamLimits

0x7169,	// (0x000549e3) cell_dialer_command_1_pane_g1

0xca28,	// (0x0005a2a2) bg_button_pane_cp04

0x717d,	// (0x000549f7) cell_dialer_command_2_pane_g1

0xadb2,	// (0x0005862c) bg_button_pane_cp06

0xca30,	// (0x0005a2aa) dialer_ne_clear_pane_g1

0xaccf,	// (0x00058549) navi_pane_g2

0x4f6c,	// (0x000527e6) navi_pane_g3

0x0002,

0xf44c,	// (0x0005ccc6) navi_pane_g

0xad51,	// (0x000585cb) navi_pane_mv_g2

0xad79,	// (0x000585f3) navi_pane_mv_g5

0x4f91,	// (0x0005280b) navi_pane_mv_t1

0x1615,	// (0x0004ee8f) main_clock2_pane

0x71b1,	// (0x00054a2b) main_clock2_list_pane_ParamLimits

0x71b1,	// (0x00054a2b) main_clock2_list_pane

0x71e3,	// (0x00054a5d) main_clock2_pane_t1_ParamLimits

0x71e3,	// (0x00054a5d) main_clock2_pane_t1

0x721a,	// (0x00054a94) main_clock2_pane_t2_ParamLimits

0x721a,	// (0x00054a94) main_clock2_pane_t2

0x0004,

0xf83e,	// (0x0005d0b8) main_clock2_pane_t_ParamLimits

0xf83e,	// (0x0005d0b8) main_clock2_pane_t

0x729c,	// (0x00054b16) popup_clock_analogue_window_cp03_ParamLimits

0x729c,	// (0x00054b16) popup_clock_analogue_window_cp03

0x72bf,	// (0x00054b39) popup_clock_digital_window_cp02_ParamLimits

0x72bf,	// (0x00054b39) popup_clock_digital_window_cp02

0x7330,	// (0x00054baa) main_clock2_list_single_pane_ParamLimits

0x7330,	// (0x00054baa) main_clock2_list_single_pane

0xadb2,	// (0x0005862c) list_highlight_pane_cp05

0xca38,	// (0x0005a2b2) main_clock2_list_single_pane_t1

0x412d,	// (0x000519a7) popup_toolbar_window_cp04_ParamLimits

0x686b,	// (0x000540e5) camera2_autofocus_pane_g2_ParamLimits

0x686b,	// (0x000540e5) camera2_autofocus_pane_g2

0x6877,	// (0x000540f1) camera2_autofocus_pane_g3_ParamLimits

0x6877,	// (0x000540f1) camera2_autofocus_pane_g3

0x6883,	// (0x000540fd) camera2_autofocus_pane_g4_ParamLimits

0x6883,	// (0x000540fd) camera2_autofocus_pane_g4

0x688f,	// (0x00054109) camera2_autofocus_pane_g5_ParamLimits

0x688f,	// (0x00054109) camera2_autofocus_pane_g5

0x0004,

0xf787,	// (0x0005d001) camera2_autofocus_pane_g_ParamLimits

0xf787,	// (0x0005d001) camera2_autofocus_pane_g

0x6a10,	// (0x0005428a) camera2_autofocus_pane_cp_g2

0x6a18,	// (0x00054292) camera2_autofocus_pane_cp_g3

0x6a20,	// (0x0005429a) camera2_autofocus_pane_cp_g4

0x6a28,	// (0x000542a2) camera2_autofocus_pane_cp_g5

0x0004,

0xf7ed,	// (0x0005d067) camera2_autofocus_pane_cp_g

0x7071,	// (0x000548eb) popup_dialer_spcha_window

0x0e8f,	// (0x0004e709) bg_popup_sub_pane_cp07

0xca46,	// (0x0005a2c0) list_spcha_pane

0xca4e,	// (0x0005a2c8) list_single_spcha_pane_ParamLimits

0xca4e,	// (0x0005a2c8) list_single_spcha_pane

0x0e8f,	// (0x0004e709) list_highlight_pane_cp06

0xca5f,	// (0x0005a2d9) list_single_spcha_pane_t1

0xbc2a,	// (0x000594a4) popup_call2_audio_out_window_g4_ParamLimits

0xbc2a,	// (0x000594a4) popup_call2_audio_out_window_g4

0x0e8f,	// (0x0004e709) main_imed2_pane

0xc247,	// (0x00059ac1) popup_imed_adjust2_window

0x5d4f,	// (0x000535c9) popup_imed_trans_window_ParamLimits

0x5d4f,	// (0x000535c9) popup_imed_trans_window

0xc4a8,	// (0x00059d22) popup_blid_sat_info2_window_t1

0xc4b6,	// (0x00059d30) popup_blid_sat_info2_window_t2

0x000a,

0xf71c,	// (0x0005cf96) popup_blid_sat_info2_window_t

0x73da,	// (0x00054c54) aid_size_cell_colour_35

0x73fa,	// (0x00054c74) aid_size_cell_colour_112

0x741a,	// (0x00054c94) aid_size_cell_effect

0xc221,	// (0x00059a9b) bg_tb_trans_pane_cp02

0xa7f9,	// (0x00058073) heading_imed_pane

0x743a,	// (0x00054cb4) listscroll_imed_pane

0xca6d,	// (0x0005a2e7) heading_imed_pane_g1

0xca75,	// (0x0005a2ef) heading_imed_pane_t1

0xca83,	// (0x0005a2fd) grid_imed_colour_35_pane_ParamLimits

0xca83,	// (0x0005a2fd) grid_imed_colour_35_pane

0x7446,	// (0x00054cc0) grid_imed_effect_pane

0xca96,	// (0x0005a310) list_imed_aspect_pane

0x7459,	// (0x00054cd3) scroll_pane_cp027_ParamLimits

0x7459,	// (0x00054cd3) scroll_pane_cp027

0x7465,	// (0x00054cdf) cell_imed_effect_pane_ParamLimits

0x7465,	// (0x00054cdf) cell_imed_effect_pane

0xca9e,	// (0x0005a318) cell_imed_colour_pane_ParamLimits

0xca9e,	// (0x0005a318) cell_imed_colour_pane

0xcad8,	// (0x0005a352) cell_imed_colour_pane_g1_ParamLimits

0xcad8,	// (0x0005a352) cell_imed_colour_pane_g1

0xcae9,	// (0x0005a363) hgihlgiht_grid_pane_cp016_ParamLimits

0xcae9,	// (0x0005a363) hgihlgiht_grid_pane_cp016

0x748a,	// (0x00054d04) cell_imed_effect_pane_g1

0x7492,	// (0x00054d0c) grid_highlight_pane_cp017

0xcafa,	// (0x0005a374) list_imed_single_pane_ParamLimits

0xcafa,	// (0x0005a374) list_imed_single_pane

0x0e8f,	// (0x0004e709) list_highlight_pane_cp07

0xcb0d,	// (0x0005a387) list_imed_aspect_pane_comp1_t1

0xc221,	// (0x00059a9b) bg_tb_trans_pane_cp05

0xcb2d,	// (0x0005a3a7) popup_imed_adjust2_window_g1

0xcb54,	// (0x0005a3ce) popup_imed_adjust2_window_t1

0xcb6c,	// (0x0005a3e6) slider_imed_adjust_pane

0xcb80,	// (0x0005a3fa) slider_imed_adjust_pane_g1

0xcb90,	// (0x0005a40a) slider_imed_adjust_pane_g2

0xcba0,	// (0x0005a41a) slider_imed_adjust_pane_g3

0xcbb1,	// (0x0005a42b) slider_imed_adjust_pane_g4

0x0003,

0xf85b,	// (0x0005d0d5) slider_imed_adjust_pane_g

0x749b,	// (0x00054d15) aid_size_cell_clipart2

0x74a7,	// (0x00054d21) grid_imed_clipart_pane

0xcbc2,	// (0x0005a43c) scroll_pane_cp031

0x74b1,	// (0x00054d2b) cell_imed_clipart_pane_ParamLimits

0x74b1,	// (0x00054d2b) cell_imed_clipart_pane

0x74c9,	// (0x00054d43) cell_imed_clipart_pane_g1

0x0e8f,	// (0x0004e709) grid_highlight_pane_cp014

0x71c4,	// (0x00054a3e) main_clock2_pane_g1_ParamLimits

0x71c4,	// (0x00054a3e) main_clock2_pane_g1

0x72db,	// (0x00054b55) aid_call2_pane_cp10

0x72ed,	// (0x00054b67) aid_call_pane_cp10

0xac7f,	// (0x000584f9) popup_clock_analogue_window_cp10_g1

0xac7f,	// (0x000584f9) popup_clock_analogue_window_cp10_g2

0x72ff,	// (0x00054b79) popup_clock_analogue_window_cp10_g3

0x72ff,	// (0x00054b79) popup_clock_analogue_window_cp10_g4

0xac7f,	// (0x000584f9) popup_clock_analogue_window_cp10_g5

0x0004,

0xf849,	// (0x0005d0c3) popup_clock_analogue_window_cp10_g

0x7311,	// (0x00054b8b) popup_clock_analogue_window_cp10_t1

0x7342,	// (0x00054bbc) clock_digital_number_pane_cp10_ParamLimits

0x7342,	// (0x00054bbc) clock_digital_number_pane_cp10

0x735a,	// (0x00054bd4) clock_digital_number_pane_cp11_ParamLimits

0x735a,	// (0x00054bd4) clock_digital_number_pane_cp11

0x7372,	// (0x00054bec) clock_digital_number_pane_cp12_ParamLimits

0x7372,	// (0x00054bec) clock_digital_number_pane_cp12

0x738a,	// (0x00054c04) clock_digital_number_pane_cp13_ParamLimits

0x738a,	// (0x00054c04) clock_digital_number_pane_cp13

0x73a2,	// (0x00054c1c) clock_digital_separator_pane_cp10_ParamLimits

0x73a2,	// (0x00054c1c) clock_digital_separator_pane_cp10

0x73ba,	// (0x00054c34) popup_clock_digital_window_cp02_t1_ParamLimits

0x73ba,	// (0x00054c34) popup_clock_digital_window_cp02_t1

0x153e,	// (0x0004edb8) clock_digital_number_pane_cp10_g1

0x153e,	// (0x0004edb8) clock_digital_number_pane_cp10_g2

0x0001,

0xf864,	// (0x0005d0de) clock_digital_number_pane_cp10_g

0x153e,	// (0x0004edb8) clock_digital_separator_pane_cp10_g1

0x153e,	// (0x0004edb8) clock_digital_separator_pane_g2_cp10

0xad82,	// (0x000585fc) navi_pane_vded_g4

0xad8b,	// (0x00058605) navi_pane_vded_g5

0xad94,	// (0x0005860e) navi_pane_vded_t1

0x0e8f,	// (0x0004e709) main_vded_pane

0x74d2,	// (0x00054d4c) main_vded_pane_g1

0x74dc,	// (0x00054d56) main_vded_pane_g2

0x74e4,	// (0x00054d5e) main_vded_pane_g3

0x0002,

0xf869,	// (0x0005d0e3) main_vded_pane_g

0x74ec,	// (0x00054d66) main_vded_pane_t1

0x74fa,	// (0x00054d74) main_vded_pane_t2

0x0001,

0xf870,	// (0x0005d0ea) main_vded_pane_t

0x7508,	// (0x00054d82) vded_slider_pane

0x7510,	// (0x00054d8a) vded_video_pane

0xcbca,	// (0x0005a444) vded_video_pane_g1

0x7518,	// (0x00054d92) vded_video_pane_g2

0xc664,	// (0x00059ede) vded_video_pane_g3

0x0002,

0xf875,	// (0x0005d0ef) vded_video_pane_g

0xcbd4,	// (0x0005a44e) vded_slider_pane_g1

0xc3b7,	// (0x00059c31) vded_slider_pane_g2

0xcbdd,	// (0x0005a457) vded_slider_pane_g3

0xcbe6,	// (0x0005a460) vded_slider_pane_g4

0xcbef,	// (0x0005a469) vded_slider_pane_g5

0x0004,

0xf87c,	// (0x0005d0f6) vded_slider_pane_g

0x6f10,	// (0x0005478a) mup3_rocker_pane_ParamLimits

0x6f10,	// (0x0005478a) mup3_rocker_pane

0x7521,	// (0x00054d9b) mup3_control_keys_pane_g1

0x7529,	// (0x00054da3) mup3_control_keys_pane_g2

0x7531,	// (0x00054dab) mup3_control_keys_pane_g3

0x7539,	// (0x00054db3) mup3_control_keys_pane_g4

0x0003,

0xf887,	// (0x0005d101) mup3_control_keys_pane_g

0x33db,	// (0x00050c55) popup_toolbar2_fixed_window_cp01_ParamLimits

0x33db,	// (0x00050c55) popup_toolbar2_fixed_window_cp01

0x6f3e,	// (0x000547b8) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6f3e,	// (0x000547b8) popup_toolbar2_fixed_window_cp02

0xb569,	// (0x00058de3) popup_call2_audio_second_window_t4_ParamLimits

0xb569,	// (0x00058de3) popup_call2_audio_second_window_t4

0xba97,	// (0x00059311) popup_call2_audio_first_window_t6_ParamLimits

0xba97,	// (0x00059311) popup_call2_audio_first_window_t6

0xbd2d,	// (0x000595a7) popup_call2_audio_out_window_t6_ParamLimits

0xbd2d,	// (0x000595a7) popup_call2_audio_out_window_t6

0x0e8f,	// (0x0004e709) main_vitu_pane

0x7549,	// (0x00054dc3) aid_size_cell_itu_ParamLimits

0x7549,	// (0x00054dc3) aid_size_cell_itu

0x1970,	// (0x0004f1ea) bg_popup_window_pane_cp08_ParamLimits

0x1970,	// (0x0004f1ea) bg_popup_window_pane_cp08

0x755f,	// (0x00054dd9) field_vitu_entry_pane_ParamLimits

0x755f,	// (0x00054dd9) field_vitu_entry_pane

0x7572,	// (0x00054dec) grid_vitu_function_pane_ParamLimits

0x7572,	// (0x00054dec) grid_vitu_function_pane

0x7587,	// (0x00054e01) grid_vitu_itu_pane_ParamLimits

0x7587,	// (0x00054e01) grid_vitu_itu_pane

0x759d,	// (0x00054e17) cell_vitu_itu_pane_ParamLimits

0x759d,	// (0x00054e17) cell_vitu_itu_pane

0x75bf,	// (0x00054e39) cell_vitu_function_pane_ParamLimits

0x75bf,	// (0x00054e39) cell_vitu_function_pane

0x1970,	// (0x0004f1ea) bg_popup_sub_pane_cp08_ParamLimits

0x1970,	// (0x0004f1ea) bg_popup_sub_pane_cp08

0x75d8,	// (0x00054e52) field_vitu_entry_pane_t1_ParamLimits

0x75d8,	// (0x00054e52) field_vitu_entry_pane_t1

0xcc10,	// (0x0005a48a) field_vitu_entry_pane_t2_ParamLimits

0xcc10,	// (0x0005a48a) field_vitu_entry_pane_t2

0x0001,

0xf895,	// (0x0005d10f) field_vitu_entry_pane_t_ParamLimits

0xf895,	// (0x0005d10f) field_vitu_entry_pane_t

0xcc2d,	// (0x0005a4a7) bg_button_pane_cp05_ParamLimits

0xcc2d,	// (0x0005a4a7) bg_button_pane_cp05

0x75f4,	// (0x00054e6e) cell_vitu_itu_pane_g1

0x760c,	// (0x00054e86) cell_vitu_itu_pane_t1_ParamLimits

0x760c,	// (0x00054e86) cell_vitu_itu_pane_t1

0x761e,	// (0x00054e98) cell_vitu_itu_pane_t2_ParamLimits

0x761e,	// (0x00054e98) cell_vitu_itu_pane_t2

0x0002,

0xf89a,	// (0x0005d114) cell_vitu_itu_pane_t_ParamLimits

0xf89a,	// (0x0005d114) cell_vitu_itu_pane_t

0xcc3b,	// (0x0005a4b5) bg_button_pane_cp07

0x7653,	// (0x00054ecd) cell_vitu_function_pane_g1

0xa303,	// (0x00057b7d) main_calc_pane_g1

0x323f,	// (0x00050ab9) aid_visual_content_pane

0x0e8f,	// (0x0004e709) main_vradio_pane

0x765c,	// (0x00054ed6) main_vradio_pane_g1_ParamLimits

0x765c,	// (0x00054ed6) main_vradio_pane_g1

0xcc45,	// (0x0005a4bf) main_vradio_pane_g2_ParamLimits

0xcc45,	// (0x0005a4bf) main_vradio_pane_g2

0x0001,

0xf8a1,	// (0x0005d11b) main_vradio_pane_g_ParamLimits

0xf8a1,	// (0x0005d11b) main_vradio_pane_g

0x7672,	// (0x00054eec) main_vradio_pane_t1_ParamLimits

0x7672,	// (0x00054eec) main_vradio_pane_t1

0x7687,	// (0x00054f01) main_vradio_pane_t2_ParamLimits

0x7687,	// (0x00054f01) main_vradio_pane_t2

0xcc52,	// (0x0005a4cc) main_vradio_pane_t3_ParamLimits

0xcc52,	// (0x0005a4cc) main_vradio_pane_t3

0x0002,

0xf8a6,	// (0x0005d120) main_vradio_pane_t_ParamLimits

0xf8a6,	// (0x0005d120) main_vradio_pane_t

0x769c,	// (0x00054f16) vradio_rocker_control_pane_ParamLimits

0x769c,	// (0x00054f16) vradio_rocker_control_pane

0x76ae,	// (0x00054f28) vradio_station_info_pane_ParamLimits

0x76ae,	// (0x00054f28) vradio_station_info_pane

0xcc64,	// (0x0005a4de) vradio_frequency_info_pane_ParamLimits

0xcc64,	// (0x0005a4de) vradio_frequency_info_pane

0xc664,	// (0x00059ede) vradio_station_info_pane_g1

0xcc73,	// (0x0005a4ed) vradio_station_info_pane_t1_ParamLimits

0xcc73,	// (0x0005a4ed) vradio_station_info_pane_t1

0xcc95,	// (0x0005a50f) vradio_station_info_pane_t2_ParamLimits

0xcc95,	// (0x0005a50f) vradio_station_info_pane_t2

0x0001,

0xf8ad,	// (0x0005d127) vradio_station_info_pane_t_ParamLimits

0xf8ad,	// (0x0005d127) vradio_station_info_pane_t

0xcca7,	// (0x0005a521) vradio_tuning_pane

0xccaf,	// (0x0005a529) vradio_rocker_control_pane_g1

0xccb7,	// (0x0005a531) vradio_rocker_control_pane_g2

0xccbf,	// (0x0005a539) vradio_rocker_control_pane_g3

0xccc7,	// (0x0005a541) vradio_rocker_control_pane_g4

0xcccf,	// (0x0005a549) vradio_rocker_control_pane_g5

0x0004,

0xf8b2,	// (0x0005d12c) vradio_rocker_control_pane_g

0x76be,	// (0x00054f38) vradio_frequency_info_pane_g1

0xccd7,	// (0x0005a551) vradio_frequency_info_pane_t1_ParamLimits

0xccd7,	// (0x0005a551) vradio_frequency_info_pane_t1

0x76c8,	// (0x00054f42) vradio_tuning_pane_g1

0x76d1,	// (0x00054f4b) vradio_tuning_pane_t1

0x0eb1,	// (0x0004e72b) area_side_right_pane_ParamLimits

0x0eb1,	// (0x0004e72b) area_side_right_pane

0xc1e8,	// (0x00059a62) status_small_pane_g1

0xc1f0,	// (0x00059a6a) status_small_pane_g2

0xc1f9,	// (0x00059a73) status_small_pane_g3

0xc202,	// (0x00059a7c) status_small_pane_g4

0x0003,

0xf672,	// (0x0005ceec) status_small_pane_g

0xc20b,	// (0x00059a85) status_small_pane_t1

0x0e8f,	// (0x0004e709) main_video3_pane

0xcceb,	// (0x0005a565) cams_zoom_vslider_pane

0xccf3,	// (0x0005a56d) image3_wide_pane_ParamLimits

0xccf3,	// (0x0005a56d) image3_wide_pane

0xcd0d,	// (0x0005a587) image3_wide_small_pane

0xcd17,	// (0x0005a591) main_video3_pane_g1_ParamLimits

0xcd17,	// (0x0005a591) main_video3_pane_g1

0xcd33,	// (0x0005a5ad) main_video3_pane_g2_ParamLimits

0xcd33,	// (0x0005a5ad) main_video3_pane_g2

0x0001,

0xf8bd,	// (0x0005d137) main_video3_pane_g_ParamLimits

0xf8bd,	// (0x0005d137) main_video3_pane_g

0xcd4f,	// (0x0005a5c9) main_video3_pane_t1_ParamLimits

0xcd4f,	// (0x0005a5c9) main_video3_pane_t1

0xcd7a,	// (0x0005a5f4) main_video3_pane_t2_ParamLimits

0xcd7a,	// (0x0005a5f4) main_video3_pane_t2

0xcda5,	// (0x0005a61f) main_video3_pane_t3_ParamLimits

0xcda5,	// (0x0005a61f) main_video3_pane_t3

0x0002,

0xf8c2,	// (0x0005d13c) main_video3_pane_t_ParamLimits

0xf8c2,	// (0x0005d13c) main_video3_pane_t

0xcdd0,	// (0x0005a64a) cams_zoom_vslider_pane_g1

0xcdd9,	// (0x0005a653) cams_zoom_vslider_pane_g2

0x0001,

0xf8c9,	// (0x0005d143) cams_zoom_vslider_pane_g

0xcde1,	// (0x0005a65b) small_slider_vertical_pane

0xc664,	// (0x00059ede) small_slider_vertical_pane_g1

0xc664,	// (0x00059ede) small_slider_vertical_pane_g2

0xcde9,	// (0x0005a663) small_slider_vertical_pane_g3

0x0002,

0xf8ce,	// (0x0005d148) small_slider_vertical_pane_g

0x0e8f,	// (0x0004e709) main_hwr_training_pane

0xcdf2,	// (0x0005a66c) hwr_training_instruct_pane_ParamLimits

0xcdf2,	// (0x0005a66c) hwr_training_instruct_pane

0x76e0,	// (0x00054f5a) hwr_training_navi_pane_ParamLimits

0x76e0,	// (0x00054f5a) hwr_training_navi_pane

0x76f7,	// (0x00054f71) hwr_training_write_pane_ParamLimits

0x76f7,	// (0x00054f71) hwr_training_write_pane

0x0e8f,	// (0x0004e709) bg_frame_shadow_pane

0xce21,	// (0x0005a69b) hwr_training_write_pane_g1

0xce29,	// (0x0005a6a3) hwr_training_write_pane_g2

0xce31,	// (0x0005a6ab) hwr_training_write_pane_g3

0xce39,	// (0x0005a6b3) hwr_training_write_pane_g4

0xce41,	// (0x0005a6bb) hwr_training_write_pane_g5

0xce49,	// (0x0005a6c3) hwr_training_write_pane_g6

0xce51,	// (0x0005a6cb) hwr_training_write_pane_g7

0x0006,

0xf8d5,	// (0x0005d14f) hwr_training_write_pane_g

0xed40,	// (0x0005c5ba) hwr_training_navi_pane_g1_ParamLimits

0xed40,	// (0x0005c5ba) hwr_training_navi_pane_g1

0xed52,	// (0x0005c5cc) hwr_training_navi_pane_g2_ParamLimits

0xed52,	// (0x0005c5cc) hwr_training_navi_pane_g2

0xed64,	// (0x0005c5de) hwr_training_navi_pane_g3_ParamLimits

0xed64,	// (0x0005c5de) hwr_training_navi_pane_g3

0xed74,	// (0x0005c5ee) hwr_training_navi_pane_g4_ParamLimits

0xed74,	// (0x0005c5ee) hwr_training_navi_pane_g4

0x0004,

0xf8e4,	// (0x0005d15e) hwr_training_navi_pane_g_ParamLimits

0xf8e4,	// (0x0005d15e) hwr_training_navi_pane_g

0xed81,	// (0x0005c5fb) hwr_training_navi_pane_t1

0x7737,	// (0x00054fb1) list_single_hwr_training_instruct_pane_ParamLimits

0x7737,	// (0x00054fb1) list_single_hwr_training_instruct_pane

0xce59,	// (0x0005a6d3) list_single_hwr_training_instruct_pane_t1

0xc5a4,	// (0x00059e1e) bg_frame_shadow_pane_g1

0xce68,	// (0x0005a6e2) bg_frame_shadow_pane_g2

0xce70,	// (0x0005a6ea) bg_frame_shadow_pane_g3

0xce78,	// (0x0005a6f2) bg_frame_shadow_pane_g4

0xce80,	// (0x0005a6fa) bg_frame_shadow_pane_g5

0xce88,	// (0x0005a702) bg_frame_shadow_pane_g6

0xce90,	// (0x0005a70a) bg_frame_shadow_pane_g7

0x16e0,	// (0x0004ef5a) bg_frame_shadow_pane_g8

0x0007,

0xf8ef,	// (0x0005d169) bg_frame_shadow_pane_g

0x0e8f,	// (0x0004e709) main_video_tele_dialer_pane

0x774f,	// (0x00054fc9) aid_size_cell_video_keypad_ParamLimits

0x774f,	// (0x00054fc9) aid_size_cell_video_keypad

0x7769,	// (0x00054fe3) grid_video_dialer_keypad_pane_ParamLimits

0x7769,	// (0x00054fe3) grid_video_dialer_keypad_pane

0x77ab,	// (0x00055025) video_down_pane_cp_ParamLimits

0x77ab,	// (0x00055025) video_down_pane_cp

0x77db,	// (0x00055055) cell_video_dialer_keypad_pane_ParamLimits

0x77db,	// (0x00055055) cell_video_dialer_keypad_pane

0xce98,	// (0x0005a712) bg_button_pane_cp08_ParamLimits

0xce98,	// (0x0005a712) bg_button_pane_cp08

0x77fd,	// (0x00055077) cell_video_dialer_keypad_pane_g1_ParamLimits

0x77fd,	// (0x00055077) cell_video_dialer_keypad_pane_g1

0x6efa,	// (0x00054774) mup3_rocker2_pane_ParamLimits

0x6efa,	// (0x00054774) mup3_rocker2_pane

0xc664,	// (0x00059ede) mup3_rocker2_pane_g1

0x5c48,	// (0x000534c2) main_dialer2_pane

0x0e8f,	// (0x0004e709) main_mp4_pane

0xed97,	// (0x0005c611) main_mp4_pane_g1_ParamLimits

0xed97,	// (0x0005c611) main_mp4_pane_g1

0xed97,	// (0x0005c611) main_mp4_pane_g2_ParamLimits

0xed97,	// (0x0005c611) main_mp4_pane_g2

0x7838,	// (0x000550b2) main_mp4_pane_g3_ParamLimits

0x7838,	// (0x000550b2) main_mp4_pane_g3

0xeda5,	// (0x0005c61f) main_mp4_pane_g4_ParamLimits

0xeda5,	// (0x0005c61f) main_mp4_pane_g4

0xedd3,	// (0x0005c64d) main_mp4_pane_g5_ParamLimits

0xedd3,	// (0x0005c64d) main_mp4_pane_g5

0x0005,

0xf90f,	// (0x0005d189) main_mp4_pane_g_ParamLimits

0xf90f,	// (0x0005d189) main_mp4_pane_g

0xee2f,	// (0x0005c6a9) main_mp4_pane_t1_ParamLimits

0xee2f,	// (0x0005c6a9) main_mp4_pane_t1

0xee87,	// (0x0005c701) main_mp4_pane_t2_ParamLimits

0xee87,	// (0x0005c701) main_mp4_pane_t2

0xcea4,	// (0x0005a71e) main_mp4_pane_t3_ParamLimits

0xcea4,	// (0x0005a71e) main_mp4_pane_t3

0xeed9,	// (0x0005c753) main_mp4_pane_t4_ParamLimits

0xeed9,	// (0x0005c753) main_mp4_pane_t4

0x0003,

0xf91c,	// (0x0005d196) main_mp4_pane_t_ParamLimits

0xf91c,	// (0x0005d196) main_mp4_pane_t

0xef19,	// (0x0005c793) mp4_progress_pane_ParamLimits

0xef19,	// (0x0005c793) mp4_progress_pane

0xef5d,	// (0x0005c7d7) mp4_rocker_pane_ParamLimits

0xef5d,	// (0x0005c7d7) mp4_rocker_pane

0xced2,	// (0x0005a74c) mp4_progress_pane_t1

0xcee9,	// (0x0005a763) mp4_progress_pane_t2

0x0001,

0xf925,	// (0x0005d19f) mp4_progress_pane_t

0xcf00,	// (0x0005a77a) mup_progress_pane_cp04

0xcf0c,	// (0x0005a786) mp4_rocker_pane_g1

0x7868,	// (0x000550e2) aid_cell_size_keypad2_ParamLimits

0x7868,	// (0x000550e2) aid_cell_size_keypad2

0x7882,	// (0x000550fc) dialer2_ne_pane_ParamLimits

0x7882,	// (0x000550fc) dialer2_ne_pane

0x7897,	// (0x00055111) grid_dialer2_keypad_pane_ParamLimits

0x7897,	// (0x00055111) grid_dialer2_keypad_pane

0xc451,	// (0x00059ccb) bg_popup_call_pane_cp07_ParamLimits

0xc451,	// (0x00059ccb) bg_popup_call_pane_cp07

0x78ad,	// (0x00055127) dialer2_ne_pane_t1_ParamLimits

0x78ad,	// (0x00055127) dialer2_ne_pane_t1

0x78ea,	// (0x00055164) cell_dialer2_keypad_pane_ParamLimits

0x78ea,	// (0x00055164) cell_dialer2_keypad_pane

0xcf28,	// (0x0005a7a2) bg_button_pane_pane_cp04_ParamLimits

0xcf28,	// (0x0005a7a2) bg_button_pane_pane_cp04

0x790c,	// (0x00055186) cell_dialer2_keypad_pane_g1_ParamLimits

0x790c,	// (0x00055186) cell_dialer2_keypad_pane_g1

0x4072,	// (0x000518ec) aid_placing_vt_set_content_ParamLimits

0x4072,	// (0x000518ec) aid_placing_vt_set_content

0x4090,	// (0x0005190a) aid_placing_vt_set_title_ParamLimits

0x4090,	// (0x0005190a) aid_placing_vt_set_title

0x0e8f,	// (0x0004e709) main_image3_pane

0x799b,	// (0x00055215) area_side_right_pane_cp01_ParamLimits

0x799b,	// (0x00055215) area_side_right_pane_cp01

0xed97,	// (0x0005c611) main_image3_pane_g1_ParamLimits

0xed97,	// (0x0005c611) main_image3_pane_g1

0x79b2,	// (0x0005522c) main_image3_pane_g2_ParamLimits

0x79b2,	// (0x0005522c) main_image3_pane_g2

0x79d8,	// (0x00055252) main_image3_pane_g3_ParamLimits

0x79d8,	// (0x00055252) main_image3_pane_g3

0x79fe,	// (0x00055278) main_image3_pane_g4_ParamLimits

0x79fe,	// (0x00055278) main_image3_pane_g4

0x0003,

0xf934,	// (0x0005d1ae) main_image3_pane_g_ParamLimits

0xf934,	// (0x0005d1ae) main_image3_pane_g

0x7a24,	// (0x0005529e) main_image3_pane_t1_ParamLimits

0x7a24,	// (0x0005529e) main_image3_pane_t1

0x7a7c,	// (0x000552f6) main_image3_pane_t2_ParamLimits

0x7a7c,	// (0x000552f6) main_image3_pane_t2

0x7ace,	// (0x00055348) main_image3_pane_t3_ParamLimits

0x7ace,	// (0x00055348) main_image3_pane_t3

0x0003,

0xf93d,	// (0x0005d1b7) main_image3_pane_t_ParamLimits

0xf93d,	// (0x0005d1b7) main_image3_pane_t

0x1970,	// (0x0004f1ea) grid_sctrl_middle_pane_cp01_ParamLimits

0x1970,	// (0x0004f1ea) grid_sctrl_middle_pane_cp01

0x7b4e,	// (0x000553c8) cell_sctrl_middle_pane_cp01_ParamLimits

0x7b4e,	// (0x000553c8) cell_sctrl_middle_pane_cp01

0x7b6b,	// (0x000553e5) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7b6b,	// (0x000553e5) cell_sctrl_middle_pane_cp01_g1

0x0e8f,	// (0x0004e709) main_call4_pane

0x7b81,	// (0x000553fb) aid_size_button_call4_ParamLimits

0x7b81,	// (0x000553fb) aid_size_button_call4

0x7bae,	// (0x00055428) call4_windows_pane_ParamLimits

0x7bae,	// (0x00055428) call4_windows_pane

0x7bc4,	// (0x0005543e) grid_call4_button_pane_ParamLimits

0x7bc4,	// (0x0005543e) grid_call4_button_pane

0xcf4c,	// (0x0005a7c6) call4_windows_conf_pane

0x7be3,	// (0x0005545d) popup_call4_audio_first_window_ParamLimits

0x7be3,	// (0x0005545d) popup_call4_audio_first_window

0x7c03,	// (0x0005547d) popup_call4_audio_second_window_ParamLimits

0x7c03,	// (0x0005547d) popup_call4_audio_second_window

0xcf7f,	// (0x0005a7f9) popup_call4_audio_wait_window_ParamLimits

0xcf7f,	// (0x0005a7f9) popup_call4_audio_wait_window

0x7c15,	// (0x0005548f) cell_call4_button_pane_ParamLimits

0x7c15,	// (0x0005548f) cell_call4_button_pane

0x7c3a,	// (0x000554b4) bg_button_pane_cp09_ParamLimits

0x7c3a,	// (0x000554b4) bg_button_pane_cp09

0x7c46,	// (0x000554c0) cell_call4_button_pane_g1_ParamLimits

0x7c46,	// (0x000554c0) cell_call4_button_pane_g1

0x7c6c,	// (0x000554e6) cell_call4_button_pane_t1_ParamLimits

0x7c6c,	// (0x000554e6) cell_call4_button_pane_t1

0xcfc5,	// (0x0005a83f) popup_call4_audio_conf_window_ParamLimits

0xcfc5,	// (0x0005a83f) popup_call4_audio_conf_window

0x6f54,	// (0x000547ce) mup3_progress_pane_t1_ParamLimits

0x6f6a,	// (0x000547e4) mup3_progress_pane_t2_ParamLimits

0xc982,	// (0x0005a1fc) mup3_progress_pane_t3_ParamLimits

0xf816,	// (0x0005d090) mup3_progress_pane_t_ParamLimits

0xc999,	// (0x0005a213) mup_progress_pane_cp03_ParamLimits

0x7541,	// (0x00054dbb) mup3_control_keys_pane_g4_copy1

0xef47,	// (0x0005c7c1) mp4_rocker2_pane_ParamLimits

0xef47,	// (0x0005c7c1) mp4_rocker2_pane

0xcfd9,	// (0x0005a853) mp4_rocker2_pane_g1

0xcfe1,	// (0x0005a85b) mp4_rocker2_pane_g2

0xefad,	// (0x0005c827) mp4_rocker2_pane_g3

0xefb5,	// (0x0005c82f) mp4_rocker2_pane_g4

0xefbd,	// (0x0005c837) mp4_rocker2_pane_g5

0x0004,

0xf946,	// (0x0005d1c0) mp4_rocker2_pane_g

0x0e8f,	// (0x0004e709) main_camera4_pane

0x0e8f,	// (0x0004e709) main_video4_pane

0x777d,	// (0x00054ff7) main_video_tele_dialer_pane_t1_ParamLimits

0x777d,	// (0x00054ff7) main_video_tele_dialer_pane_t1

0x7794,	// (0x0005500e) main_video_tele_dialer_pane_t2_ParamLimits

0x7794,	// (0x0005500e) main_video_tele_dialer_pane_t2

0x0001,

0xf900,	// (0x0005d17a) main_video_tele_dialer_pane_t_ParamLimits

0xf900,	// (0x0005d17a) main_video_tele_dialer_pane_t

0x7ca8,	// (0x00055522) cam4_autofocus_pane_ParamLimits

0x7ca8,	// (0x00055522) cam4_autofocus_pane

0x7cbc,	// (0x00055536) cam4_image_uncrop_pane_ParamLimits

0x7cbc,	// (0x00055536) cam4_image_uncrop_pane

0x7cd3,	// (0x0005554d) cam4_indicators_pane_ParamLimits

0x7cd3,	// (0x0005554d) cam4_indicators_pane

0x7cf7,	// (0x00055571) main_camera4_pane_g1_ParamLimits

0x7cf7,	// (0x00055571) main_camera4_pane_g1

0x7d03,	// (0x0005557d) main_camera4_pane_g2_ParamLimits

0x7d03,	// (0x0005557d) main_camera4_pane_g2

0x7d0f,	// (0x00055589) main_camera4_pane_g3_ParamLimits

0x7d0f,	// (0x00055589) main_camera4_pane_g3

0x7d1b,	// (0x00055595) main_camera4_pane_g4_ParamLimits

0x7d1b,	// (0x00055595) main_camera4_pane_g4

0x7d27,	// (0x000555a1) main_camera4_pane_g5_ParamLimits

0x7d27,	// (0x000555a1) main_camera4_pane_g5

0x0005,

0xf951,	// (0x0005d1cb) main_camera4_pane_g_ParamLimits

0xf951,	// (0x0005d1cb) main_camera4_pane_g

0x7d44,	// (0x000555be) main_camera4_pane_t1_ParamLimits

0x7d44,	// (0x000555be) main_camera4_pane_t1

0x7d75,	// (0x000555ef) bg_tb_trans_pane_cp06

0x7d83,	// (0x000555fd) cam4_indicators_pane_g1

0x7d90,	// (0x0005560a) cam4_indicators_pane_g2

0x0002,

0xf963,	// (0x0005d1dd) cam4_indicators_pane_g

0x7da8,	// (0x00055622) cam4_indicators_pane_t1

0x7dcc,	// (0x00055646) main_video4_pane_g1_ParamLimits

0x7dcc,	// (0x00055646) main_video4_pane_g1

0x7dde,	// (0x00055658) main_video4_pane_g2_ParamLimits

0x7dde,	// (0x00055658) main_video4_pane_g2

0x7dde,	// (0x00055658) main_video4_pane_g3_ParamLimits

0x7dde,	// (0x00055658) main_video4_pane_g3

0x7ded,	// (0x00055667) main_video4_pane_g4_ParamLimits

0x7ded,	// (0x00055667) main_video4_pane_g4

0x0004,

0xf96a,	// (0x0005d1e4) main_video4_pane_g_ParamLimits

0xf96a,	// (0x0005d1e4) main_video4_pane_g

0x7e0b,	// (0x00055685) vid4_indicators_pane_ParamLimits

0x7e0b,	// (0x00055685) vid4_indicators_pane

0x7e33,	// (0x000556ad) video4_image_uncrop_cif_pane_ParamLimits

0x7e33,	// (0x000556ad) video4_image_uncrop_cif_pane

0x7e4b,	// (0x000556c5) video4_image_uncrop_nhd_pane_ParamLimits

0x7e4b,	// (0x000556c5) video4_image_uncrop_nhd_pane

0x7e5f,	// (0x000556d9) video4_image_uncrop_vga_pane_ParamLimits

0x7e5f,	// (0x000556d9) video4_image_uncrop_vga_pane

0xefe5,	// (0x0005c85f) bg_tb_trans_pane_cp07

0x7d83,	// (0x000555fd) vid4_indicators_pane_g1

0x7e77,	// (0x000556f1) vid4_indicators_pane_g2

0x7e84,	// (0x000556fe) vid4_indicators_pane_g3

0x0004,

0xf975,	// (0x0005d1ef) vid4_indicators_pane_g

0x7e9d,	// (0x00055717) vid4_indicators_pane_t1

0x7eaf,	// (0x00055729) cam4_autofocus_pane_g1

0x7eb7,	// (0x00055731) cam4_autofocus_pane_g2

0x7ebf,	// (0x00055739) cam4_autofocus_pane_g3

0x0002,

0xf980,	// (0x0005d1fa) cam4_autofocus_pane_g

0x7ec7,	// (0x00055741) cam4_autofocus_pane_g3_copy1

0x77bf,	// (0x00055039) video_down_pane_cp_t1

0x77cd,	// (0x00055047) video_down_pane_cp_t2

0x0001,

0xf905,	// (0x0005d17f) video_down_pane_cp_t

0x1970,	// (0x0004f1ea) popup_vitu2_window_ParamLimits

0x1970,	// (0x0004f1ea) popup_vitu2_window

0x7ecf,	// (0x00055749) aid_size_cell2_itu2_ParamLimits

0x7ecf,	// (0x00055749) aid_size_cell2_itu2

0x7ef5,	// (0x0005576f) aid_size_cell_itu2_ParamLimits

0x7ef5,	// (0x0005576f) aid_size_cell_itu2

0x7f47,	// (0x000557c1) bg_popup_window_pane_cp09_ParamLimits

0x7f47,	// (0x000557c1) bg_popup_window_pane_cp09

0x7f55,	// (0x000557cf) field_vitu2_entry_pane_ParamLimits

0x7f55,	// (0x000557cf) field_vitu2_entry_pane

0x7f6f,	// (0x000557e9) grid_vitu2_function_pane_ParamLimits

0x7f6f,	// (0x000557e9) grid_vitu2_function_pane

0x7faa,	// (0x00055824) grid_vitu2_itu_pane_ParamLimits

0x7faa,	// (0x00055824) grid_vitu2_itu_pane

0x800f,	// (0x00055889) cell_vitu2_itu_pane_ParamLimits

0x800f,	// (0x00055889) cell_vitu2_itu_pane

0x8031,	// (0x000558ab) cell_vitu2_function_pane_ParamLimits

0x8031,	// (0x000558ab) cell_vitu2_function_pane

0xcfe9,	// (0x0005a863) bg_popup_call_pane_cp08_ParamLimits

0xcfe9,	// (0x0005a863) bg_popup_call_pane_cp08

0xd002,	// (0x0005a87c) field_vitu2_entry_pane_g1

0xd00e,	// (0x0005a888) field_vitu2_entry_pane_g2

0x0002,

0xf987,	// (0x0005d201) field_vitu2_entry_pane_g

0xd028,	// (0x0005a8a2) field_vitu2_entry_pane_t1_ParamLimits

0xd028,	// (0x0005a8a2) field_vitu2_entry_pane_t1

0xd044,	// (0x0005a8be) field_vitu2_entry_pane_t2_ParamLimits

0xd044,	// (0x0005a8be) field_vitu2_entry_pane_t2

0x0001,

0xf98e,	// (0x0005d208) field_vitu2_entry_pane_t_ParamLimits

0xf98e,	// (0x0005d208) field_vitu2_entry_pane_t

0x8070,	// (0x000558ea) bg_button_pane_cp010_ParamLimits

0x8070,	// (0x000558ea) bg_button_pane_cp010

0x807e,	// (0x000558f8) cell_vitu2_itu_pane_g1

0x809c,	// (0x00055916) cell_vitu2_itu_pane_t1_ParamLimits

0x809c,	// (0x00055916) cell_vitu2_itu_pane_t1

0x3132,	// (0x000509ac) cell_vitu2_itu_pane_t2_ParamLimits

0x3132,	// (0x000509ac) cell_vitu2_itu_pane_t2

0x0002,

0xf998,	// (0x0005d212) cell_vitu2_itu_pane_t_ParamLimits

0xf998,	// (0x0005d212) cell_vitu2_itu_pane_t

0xeff3,	// (0x0005c86d) bg_button_pane_cp011

0x8102,	// (0x0005597c) cell_vitu2_function_pane_g1

0x0e8f,	// (0x0004e709) main_myfav_hc_pane

0x7b1a,	// (0x00055394) popup_image3_note_pane_ParamLimits

0x7b1a,	// (0x00055394) popup_image3_note_pane

0x7b34,	// (0x000553ae) popup_image3_tool_bar_pane_ParamLimits

0x7b34,	// (0x000553ae) popup_image3_tool_bar_pane

0x31b6,	// (0x00050a30) cell_vitu2_itu_pane_t3_ParamLimits

0x31b6,	// (0x00050a30) cell_vitu2_itu_pane_t3

0x0e8f,	// (0x0004e709) bg_popup_trans_pane

0xd069,	// (0x0005a8e3) grid_image3_tool_bar_pane

0xd073,	// (0x0005a8ed) bg_popup_trans_pane_g1

0xa5a2,	// (0x00057e1c) bg_popup_trans_pane_g2

0xd07b,	// (0x0005a8f5) bg_popup_trans_pane_g3

0xd083,	// (0x0005a8fd) bg_popup_trans_pane_g4

0xd08b,	// (0x0005a905) bg_popup_trans_pane_g5

0xd093,	// (0x0005a90d) bg_popup_trans_pane_g6

0xd09b,	// (0x0005a915) bg_popup_trans_pane_g7

0xd0a3,	// (0x0005a91d) bg_popup_trans_pane_g8

0xa582,	// (0x00057dfc) bg_popup_trans_pane_g9

0x0008,

0xf99f,	// (0x0005d219) bg_popup_trans_pane_g

0x197e,	// (0x0004f1f8) cell_image3_tool_bar_pane_ParamLimits

0x197e,	// (0x0004f1f8) cell_image3_tool_bar_pane

0xc664,	// (0x00059ede) cell_image3_tool_bar_pane_g1

0x0e8f,	// (0x0004e709) bg_popup_trans_pane_cp1

0xd0ab,	// (0x0005a925) popup_image3_note_pane_t1

0xd0b9,	// (0x0005a933) popup_image3_note_pane_t2

0xd0c7,	// (0x0005a941) popup_image3_note_pane_t3

0x0002,

0xf9b2,	// (0x0005d22c) popup_image3_note_pane_t

0xd0d5,	// (0x0005a94f) popup_image3_note_pane_t3_copy1

0x8116,	// (0x00055990) bg_myfav_hc_instruction_pane_ParamLimits

0x8116,	// (0x00055990) bg_myfav_hc_instruction_pane

0x8128,	// (0x000559a2) cell_myfav_contact_pane_ParamLimits

0x8128,	// (0x000559a2) cell_myfav_contact_pane

0x8142,	// (0x000559bc) cell_myfav_contact_pane_cp1_ParamLimits

0x8142,	// (0x000559bc) cell_myfav_contact_pane_cp1

0x8158,	// (0x000559d2) cell_myfav_contact_pane_cp2_ParamLimits

0x8158,	// (0x000559d2) cell_myfav_contact_pane_cp2

0x816e,	// (0x000559e8) cell_myfav_contact_pane_cp3_ParamLimits

0x816e,	// (0x000559e8) cell_myfav_contact_pane_cp3

0x8183,	// (0x000559fd) cell_myfav_contact_pane_cp4_ParamLimits

0x8183,	// (0x000559fd) cell_myfav_contact_pane_cp4

0x8197,	// (0x00055a11) cell_myfav_contact_pane_cp5_ParamLimits

0x8197,	// (0x00055a11) cell_myfav_contact_pane_cp5

0x81ab,	// (0x00055a25) cell_myfav_contact_pane_cp6_ParamLimits

0x81ab,	// (0x00055a25) cell_myfav_contact_pane_cp6

0x81bf,	// (0x00055a39) cell_myfav_contact_pane_cp7_ParamLimits

0x81bf,	// (0x00055a39) cell_myfav_contact_pane_cp7

0xd0e3,	// (0x0005a95d) listscroll_gen_pane_cp05

0x81d7,	// (0x00055a51) main_myfav_hc_pane_g1_ParamLimits

0x81d7,	// (0x00055a51) main_myfav_hc_pane_g1

0x81ed,	// (0x00055a67) main_myfav_hc_pane_g2_ParamLimits

0x81ed,	// (0x00055a67) main_myfav_hc_pane_g2

0x0002,

0xf9b9,	// (0x0005d233) main_myfav_hc_pane_g_ParamLimits

0xf9b9,	// (0x0005d233) main_myfav_hc_pane_g

0x8217,	// (0x00055a91) main_myfav_hc_pane_t1_ParamLimits

0x8217,	// (0x00055a91) main_myfav_hc_pane_t1

0xd0ec,	// (0x0005a966) main_myfav_hc_pane_t2_ParamLimits

0xd0ec,	// (0x0005a966) main_myfav_hc_pane_t2

0xd0fe,	// (0x0005a978) main_myfav_hc_pane_t3_ParamLimits

0xd0fe,	// (0x0005a978) main_myfav_hc_pane_t3

0x822c,	// (0x00055aa6) main_myfav_hc_pane_t4_ParamLimits

0x822c,	// (0x00055aa6) main_myfav_hc_pane_t4

0x0004,

0xf9c0,	// (0x0005d23a) main_myfav_hc_pane_t_ParamLimits

0xf9c0,	// (0x0005d23a) main_myfav_hc_pane_t

0xc664,	// (0x00059ede) bg_myfav_hc_instruction_pane_g1

0xd110,	// (0x0005a98a) cell_myfav_contact_pane_g1_ParamLimits

0xd110,	// (0x0005a98a) cell_myfav_contact_pane_g1

0xd110,	// (0x0005a98a) cell_myfav_contact_pane_g2_ParamLimits

0xd110,	// (0x0005a98a) cell_myfav_contact_pane_g2

0xd11c,	// (0x0005a996) cell_myfav_contact_pane_g3_ParamLimits

0xd11c,	// (0x0005a996) cell_myfav_contact_pane_g3

0xc96c,	// (0x0005a1e6) cell_myfav_contact_pane_g4_ParamLimits

0xc96c,	// (0x0005a1e6) cell_myfav_contact_pane_g4

0xd129,	// (0x0005a9a3) cell_myfav_contact_pane_g5_ParamLimits

0xd129,	// (0x0005a9a3) cell_myfav_contact_pane_g5

0x0004,

0xf9cb,	// (0x0005d245) cell_myfav_contact_pane_g_ParamLimits

0xf9cb,	// (0x0005d245) cell_myfav_contact_pane_g

0x8203,	// (0x00055a7d) main_myfav_hc_pane_g3_ParamLimits

0x8203,	// (0x00055a7d) main_myfav_hc_pane_g3

0x3361,	// (0x00050bdb) popup_adpt_find_window

0x8250,	// (0x00055aca) afind_page_pane_ParamLimits

0x8250,	// (0x00055aca) afind_page_pane

0x8265,	// (0x00055adf) aid_size_cell_afind_ParamLimits

0x8265,	// (0x00055adf) aid_size_cell_afind

0x8283,	// (0x00055afd) bg_popup_sub_pane_cp09_ParamLimits

0x8283,	// (0x00055afd) bg_popup_sub_pane_cp09

0x8290,	// (0x00055b0a) find_pane_cp01_ParamLimits

0x8290,	// (0x00055b0a) find_pane_cp01

0xd135,	// (0x0005a9af) grid_afind_control_pane_ParamLimits

0xd135,	// (0x0005a9af) grid_afind_control_pane

0x829d,	// (0x00055b17) grid_afind_pane_ParamLimits

0x829d,	// (0x00055b17) grid_afind_pane

0x82bb,	// (0x00055b35) cell_afind_pane_ParamLimits

0x82bb,	// (0x00055b35) cell_afind_pane

0xc664,	// (0x00059ede) afind_page_pane_g1

0x8308,	// (0x00055b82) afind_page_pane_g2

0x8311,	// (0x00055b8b) afind_page_pane_g3

0x0002,

0xf9d6,	// (0x0005d250) afind_page_pane_g

0x831a,	// (0x00055b94) afind_page_pane_t1

0xd149,	// (0x0005a9c3) cell_afind_grid_control_pane_ParamLimits

0xd149,	// (0x0005a9c3) cell_afind_grid_control_pane

0xcf28,	// (0x0005a7a2) bg_button_pane_cp69_ParamLimits

0xcf28,	// (0x0005a7a2) bg_button_pane_cp69

0x833a,	// (0x00055bb4) cell_afind_pane_g1_ParamLimits

0x833a,	// (0x00055bb4) cell_afind_pane_g1

0x8347,	// (0x00055bc1) cell_afind_pane_t1_ParamLimits

0x8347,	// (0x00055bc1) cell_afind_pane_t1

0x181d,	// (0x0004f097) bg_button_pane_cp72

0xd158,	// (0x0005a9d2) cell_afind_grid_control_pane_g1

0x57ea,	// (0x00053064) aid_image_placing_area_ParamLimits

0x57ea,	// (0x00053064) aid_image_placing_area

0xcbf8,	// (0x0005a472) field_vitu_entry_pane_g1_ParamLimits

0xcbf8,	// (0x0005a472) field_vitu_entry_pane_g1

0xcc04,	// (0x0005a47e) field_vitu_entry_pane_g2_ParamLimits

0xcc04,	// (0x0005a47e) field_vitu_entry_pane_g2

0x0001,

0xf890,	// (0x0005d10a) field_vitu_entry_pane_g_ParamLimits

0xf890,	// (0x0005d10a) field_vitu_entry_pane_g

0x75f4,	// (0x00054e6e) cell_vitu_itu_pane_g1_ParamLimits

0x7636,	// (0x00054eb0) cell_vitu_itu_pane_t3_ParamLimits

0x7636,	// (0x00054eb0) cell_vitu_itu_pane_t3

0xced2,	// (0x0005a74c) mp4_progress_pane_t1_ParamLimits

0xcee9,	// (0x0005a763) mp4_progress_pane_t2_ParamLimits

0xf925,	// (0x0005d19f) mp4_progress_pane_t_ParamLimits

0xcf00,	// (0x0005a77a) mup_progress_pane_cp04_ParamLimits

0x823e,	// (0x00055ab8) main_myfav_hc_pane_t5_ParamLimits

0x823e,	// (0x00055ab8) main_myfav_hc_pane_t5

0x0ea9,	// (0x0004e723) aid_zoom_text_primary

0x3361,	// (0x00050bdb) popup_adpt_find_window_ParamLimits

0x1970,	// (0x0004f1ea) main_cam_set_pane

0x7ce5,	// (0x0005555f) cam4_zoom_pane_ParamLimits

0x7ce5,	// (0x0005555f) cam4_zoom_pane

0x8359,	// (0x00055bd3) main_cam_set_pane_g1_ParamLimits

0x8359,	// (0x00055bd3) main_cam_set_pane_g1

0x8367,	// (0x00055be1) main_cam_set_pane_g2_ParamLimits

0x8367,	// (0x00055be1) main_cam_set_pane_g2

0x0001,

0xf9dd,	// (0x0005d257) main_cam_set_pane_g_ParamLimits

0xf9dd,	// (0x0005d257) main_cam_set_pane_g

0x8386,	// (0x00055c00) main_cam_set_pane_t1_ParamLimits

0x8386,	// (0x00055c00) main_cam_set_pane_t1

0x8398,	// (0x00055c12) main_cset_listscroll_pane_ParamLimits

0x8398,	// (0x00055c12) main_cset_listscroll_pane

0x83b6,	// (0x00055c30) main_cset_slider_pane_ParamLimits

0x83b6,	// (0x00055c30) main_cset_slider_pane

0xd169,	// (0x0005a9e3) main_cset_list_pane_ParamLimits

0xd169,	// (0x0005a9e3) main_cset_list_pane

0xd179,	// (0x0005a9f3) scroll_pane_cp028

0x83da,	// (0x00055c54) aid_area_touch_slider

0x83f6,	// (0x00055c70) cset_slider_pane

0x8420,	// (0x00055c9a) main_cset_slider_pane_g1

0x8435,	// (0x00055caf) main_cset_slider_pane_g2

0x0011,

0xf9e2,	// (0x0005d25c) main_cset_slider_pane_g

0xd1b2,	// (0x0005aa2c) main_cset_slider_pane_t1

0x84f1,	// (0x00055d6b) main_cset_slider_pane_t2

0x850b,	// (0x00055d85) main_cset_slider_pane_t3

0x8525,	// (0x00055d9f) main_cset_slider_pane_t4

0x853f,	// (0x00055db9) main_cset_slider_pane_t5

0x8559,	// (0x00055dd3) main_cset_slider_pane_t6

0x856e,	// (0x00055de8) main_cset_slider_pane_t7

0x000e,

0xfa07,	// (0x0005d281) main_cset_slider_pane_t

0x8672,	// (0x00055eec) cset_list_set_pane_ParamLimits

0x8672,	// (0x00055eec) cset_list_set_pane

0x8683,	// (0x00055efd) aid_position_infowindow_above

0x868b,	// (0x00055f05) aid_position_infowindow_below

0xd252,	// (0x0005aacc) cset_list_set_pane_g1_ParamLimits

0xd252,	// (0x0005aacc) cset_list_set_pane_g1

0x8693,	// (0x00055f0d) cset_list_set_pane_g3_ParamLimits

0x8693,	// (0x00055f0d) cset_list_set_pane_g3

0x0001,

0xfa26,	// (0x0005d2a0) cset_list_set_pane_g_ParamLimits

0xfa26,	// (0x0005d2a0) cset_list_set_pane_g

0xd25e,	// (0x0005aad8) cset_list_set_pane_t1_ParamLimits

0xd25e,	// (0x0005aad8) cset_list_set_pane_t1

0x1970,	// (0x0004f1ea) list_highlight_pane_cp021_ParamLimits

0x1970,	// (0x0004f1ea) list_highlight_pane_cp021

0xaef6,	// (0x00058770) cset_slider_pane_g1

0xaf08,	// (0x00058782) cset_slider_pane_g2

0xaeff,	// (0x00058779) cset_slider_pane_g3

0x0002,

0xfa2b,	// (0x0005d2a5) cset_slider_pane_g

0xf001,	// (0x0005c87b) aid_area_touch_cam4_zoom

0xf009,	// (0x0005c883) cam4_zoom_cont_pane

0xf011,	// (0x0005c88b) cam4_zoom_pane_g1

0xf019,	// (0x0005c893) cam4_zoom_pane_g2

0x86a2,	// (0x00055f1c) cam4_zoom_pane_g3

0x0002,

0xfa32,	// (0x0005d2ac) cam4_zoom_pane_g

0xf021,	// (0x0005c89b) cam4_zoom_cont_pane_g1

0xf02a,	// (0x0005c8a4) cam4_zoom_cont_pane_g2

0xf033,	// (0x0005c8ad) cam4_zoom_cont_pane_g3

0x0002,

0xfa39,	// (0x0005d2b3) cam4_zoom_cont_pane_g

0x7b9f,	// (0x00055419) call4_image_pane_ParamLimits

0x7b9f,	// (0x00055419) call4_image_pane

0xcf4c,	// (0x0005a7c6) call4_windows_conf_pane_ParamLimits

0xcf5f,	// (0x0005a7d9) popup_call4_audio_in_window_ParamLimits

0xcf5f,	// (0x0005a7d9) popup_call4_audio_in_window

0x0e8f,	// (0x0004e709) bg_popup_call2_act_pane_cp02

0xcfbd,	// (0x0005a837) call4_list_conf_pane

0xc664,	// (0x00059ede) call4_image_pane_g1

0xc664,	// (0x00059ede) call4_image_pane_g2

0x0001,

0xf756,	// (0x0005cfd0) call4_image_pane_g

0xd273,	// (0x0005aaed) list_single_graphic_popup_conf4_pane_ParamLimits

0xd273,	// (0x0005aaed) list_single_graphic_popup_conf4_pane

0x0e8f,	// (0x0004e709) list_highlight_pane_cp022

0xd286,	// (0x0005ab00) list_single_graphic_popup_conf4_pane_g1

0xab4d,	// (0x000583c7) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa40,	// (0x0005d2ba) list_single_graphic_popup_conf4_pane_g

0xd28e,	// (0x0005ab08) list_single_graphic_popup_conf4_pane_t1

0x4147,	// (0x000519c1) popup_vtel_slider_window_ParamLimits

0x4147,	// (0x000519c1) popup_vtel_slider_window

0xcf16,	// (0x0005a790) dialer2_ne_pane_t2_ParamLimits

0xcf16,	// (0x0005a790) dialer2_ne_pane_t2

0x0001,

0xf92a,	// (0x0005d1a4) dialer2_ne_pane_t_ParamLimits

0xf92a,	// (0x0005d1a4) dialer2_ne_pane_t

0xc451,	// (0x00059ccb) bg_popup_sub_pane_cp010_ParamLimits

0xc451,	// (0x00059ccb) bg_popup_sub_pane_cp010

0x86aa,	// (0x00055f24) popup_vtel_slider_window_g1_ParamLimits

0x86aa,	// (0x00055f24) popup_vtel_slider_window_g1

0x86bd,	// (0x00055f37) popup_vtel_slider_window_g2_ParamLimits

0x86bd,	// (0x00055f37) popup_vtel_slider_window_g2

0x0003,

0xfa45,	// (0x0005d2bf) popup_vtel_slider_window_g_ParamLimits

0xfa45,	// (0x0005d2bf) popup_vtel_slider_window_g

0x8711,	// (0x00055f8b) vtel_slider_pane_ParamLimits

0x8711,	// (0x00055f8b) vtel_slider_pane

0x8733,	// (0x00055fad) vtel_slider_pane_g1_ParamLimits

0x8733,	// (0x00055fad) vtel_slider_pane_g1

0x8747,	// (0x00055fc1) vtel_slider_pane_g2_ParamLimits

0x8747,	// (0x00055fc1) vtel_slider_pane_g2

0x875f,	// (0x00055fd9) vtel_slider_pane_g3_ParamLimits

0x875f,	// (0x00055fd9) vtel_slider_pane_g3

0x8733,	// (0x00055fad) vtel_slider_pane_g4_ParamLimits

0x8733,	// (0x00055fad) vtel_slider_pane_g4

0x8775,	// (0x00055fef) vtel_slider_pane_g5_ParamLimits

0x8775,	// (0x00055fef) vtel_slider_pane_g5

0x0004,

0xfa4e,	// (0x0005d2c8) vtel_slider_pane_g_ParamLimits

0xfa4e,	// (0x0005d2c8) vtel_slider_pane_g

0x0e8f,	// (0x0004e709) main_gallery2_pane

0x7f21,	// (0x0005579b) aid_size_row_itut2_dropdow_list_ParamLimits

0x7f21,	// (0x0005579b) aid_size_row_itut2_dropdow_list

0x7f8b,	// (0x00055805) grid_vitu2_function_top_pane_ParamLimits

0x7f8b,	// (0x00055805) grid_vitu2_function_top_pane

0x7fce,	// (0x00055848) popup_vitu2_dropdown_list_window_ParamLimits

0x7fce,	// (0x00055848) popup_vitu2_dropdown_list_window

0x7fed,	// (0x00055867) popup_vitu2_match_list_window

0x878b,	// (0x00056005) cell_vitu2_function_top_pane_ParamLimits

0x878b,	// (0x00056005) cell_vitu2_function_top_pane

0x87ab,	// (0x00056025) cell_vitu2_function_top_pane_cp01_ParamLimits

0x87ab,	// (0x00056025) cell_vitu2_function_top_pane_cp01

0x87cb,	// (0x00056045) cell_vitu2_function_top_wide_pane_ParamLimits

0x87cb,	// (0x00056045) cell_vitu2_function_top_wide_pane

0xeff3,	// (0x0005c86d) bg_button_pane_cp012

0x87e9,	// (0x00056063) cell_vitu2_function_top_pane_g1

0xf03c,	// (0x0005c8b6) bg_button_pane_cp013_ParamLimits

0xf03c,	// (0x0005c8b6) bg_button_pane_cp013

0x87fd,	// (0x00056077) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x87fd,	// (0x00056077) cell_vitu2_function_top_wide_pane_g1

0xeff3,	// (0x0005c86d) bg_popup_sub_pane_cp20

0x8815,	// (0x0005608f) list_vitu2_match_list_pane

0xd073,	// (0x0005a8ed) bg_popup_sub_pane_cp20_g1

0xd07b,	// (0x0005a8f5) bg_popup_sub_pane_cp20_g2

0xa5a2,	// (0x00057e1c) bg_popup_sub_pane_cp20_g3

0xd083,	// (0x0005a8fd) bg_popup_sub_pane_cp20_g4

0xa582,	// (0x00057dfc) bg_popup_sub_pane_cp20_g5

0xd2aa,	// (0x0005ab24) bg_popup_sub_pane_cp20_g6

0xd093,	// (0x0005a90d) bg_popup_sub_pane_cp20_g7

0xd09b,	// (0x0005a915) bg_popup_sub_pane_cp20_g8

0xd0a3,	// (0x0005a91d) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa59,	// (0x0005d2d3) bg_popup_sub_pane_cp20_g

0xf058,	// (0x0005c8d2) list_vitu2_match_list_item_pane_ParamLimits

0xf058,	// (0x0005c8d2) list_vitu2_match_list_item_pane

0xf06a,	// (0x0005c8e4) list_vitu2_match_list_item_pane_t1

0xa30b,	// (0x00057b85) bg_popup_sub_pane_cp21

0xf078,	// (0x0005c8f2) grid_vitu2_dropdown_list_pane

0x885f,	// (0x000560d9) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x885f,	// (0x000560d9) cell_vitu2_dropdown_list_char_pane

0x8880,	// (0x000560fa) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8880,	// (0x000560fa) cell_vitu2_dropdown_list_ctrl_pane

0xd2b2,	// (0x0005ab2c) cell_vitu2_dropdown_list_char_pane_g1

0xd2bb,	// (0x0005ab35) cell_vitu2_dropdown_list_char_pane_g2

0xd2c4,	// (0x0005ab3e) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa76,	// (0x0005d2f0) cell_vitu2_dropdown_list_char_pane_g

0x88ac,	// (0x00056126) cell_vitu2_dropdown_list_char_pane_t1

0x88ba,	// (0x00056134) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x88ba,	// (0x00056134) cell_vitu2_dropdown_list_ctrl_pane_g1

0x88c7,	// (0x00056141) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x88c7,	// (0x00056141) cell_vitu2_dropdown_list_ctrl_pane_g2

0x88d4,	// (0x0005614e) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x88d4,	// (0x0005614e) cell_vitu2_dropdown_list_ctrl_pane_g3

0x88e1,	// (0x0005615b) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x88e1,	// (0x0005615b) cell_vitu2_dropdown_list_ctrl_pane_g4

0xf080,	// (0x0005c8fa) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xf080,	// (0x0005c8fa) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa7d,	// (0x0005d2f7) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa7d,	// (0x0005d2f7) cell_vitu2_dropdown_list_ctrl_pane_g

0x88fd,	// (0x00056177) aid_size_cell_gallery2_ParamLimits

0x88fd,	// (0x00056177) aid_size_cell_gallery2

0x8913,	// (0x0005618d) grid_gallery2_pane_ParamLimits

0x8913,	// (0x0005618d) grid_gallery2_pane

0x8925,	// (0x0005619f) scroll_pane_cp029_ParamLimits

0x8925,	// (0x0005619f) scroll_pane_cp029

0x8931,	// (0x000561ab) cell_gallery2_pane_ParamLimits

0x8931,	// (0x000561ab) cell_gallery2_pane

0xd2cd,	// (0x0005ab47) cell_gallery2_pane_g2

0x8963,	// (0x000561dd) cell_gallery2_pane_g3

0xd2d7,	// (0x0005ab51) cell_gallery2_pane_g4

0xd2df,	// (0x0005ab59) cell_gallery2_pane_g5

0xadb2,	// (0x0005862c) grid_highlight_pane_cp10

0x7fed,	// (0x00055867) popup_vitu2_match_list_window_ParamLimits

0x7ffe,	// (0x00055878) popup_vitu2_query_window_ParamLimits

0x7ffe,	// (0x00055878) popup_vitu2_query_window

0xa30b,	// (0x00057b85) bg_vitu2_candi_button_pane

0xd2b2,	// (0x0005ab2c) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd2bb,	// (0x0005ab35) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd2c4,	// (0x0005ab3e) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x896b,	// (0x000561e5) bg_button_pane_cp015

0x8973,	// (0x000561ed) bg_button_pane_cp016

0x897c,	// (0x000561f6) bg_button_pane_cp017

0x1970,	// (0x0004f1ea) bg_popup_sub_pane_cp22

0xd2e7,	// (0x0005ab61) popup_vitu2_query_window_g1

0x89a2,	// (0x0005621c) popup_vitu2_query_window_g2

0x0001,

0xfa88,	// (0x0005d302) popup_vitu2_query_window_g

0x89ae,	// (0x00056228) popup_vitu2_query_window_t1_ParamLimits

0x89ae,	// (0x00056228) popup_vitu2_query_window_t1

0x89d6,	// (0x00056250) popup_vitu2_query_window_t2_ParamLimits

0x89d6,	// (0x00056250) popup_vitu2_query_window_t2

0x89e8,	// (0x00056262) popup_vitu2_query_window_t3_ParamLimits

0x89e8,	// (0x00056262) popup_vitu2_query_window_t3

0x8a10,	// (0x0005628a) popup_vitu2_query_window_t4_ParamLimits

0x8a10,	// (0x0005628a) popup_vitu2_query_window_t4

0x8a22,	// (0x0005629c) popup_vitu2_query_window_t5_ParamLimits

0x8a22,	// (0x0005629c) popup_vitu2_query_window_t5

0x0004,

0xfa8d,	// (0x0005d307) popup_vitu2_query_window_t_ParamLimits

0xfa8d,	// (0x0005d307) popup_vitu2_query_window_t

0xd161,	// (0x0005a9db) main_cset_text_pane

0x83da,	// (0x00055c54) aid_area_touch_slider_ParamLimits

0x83f6,	// (0x00055c70) cset_slider_pane_ParamLimits

0x8420,	// (0x00055c9a) main_cset_slider_pane_g1_ParamLimits

0x8435,	// (0x00055caf) main_cset_slider_pane_g2_ParamLimits

0xd182,	// (0x0005a9fc) main_cset_slider_pane_g3_ParamLimits

0xd182,	// (0x0005a9fc) main_cset_slider_pane_g3

0x844a,	// (0x00055cc4) main_cset_slider_pane_g4_ParamLimits

0x844a,	// (0x00055cc4) main_cset_slider_pane_g4

0x8459,	// (0x00055cd3) main_cset_slider_pane_g5_ParamLimits

0x8459,	// (0x00055cd3) main_cset_slider_pane_g5

0x8465,	// (0x00055cdf) main_cset_slider_pane_g6_ParamLimits

0x8465,	// (0x00055cdf) main_cset_slider_pane_g6

0xf9e2,	// (0x0005d25c) main_cset_slider_pane_g_ParamLimits

0xd1b2,	// (0x0005aa2c) main_cset_slider_pane_t1_ParamLimits

0x84f1,	// (0x00055d6b) main_cset_slider_pane_t2_ParamLimits

0x850b,	// (0x00055d85) main_cset_slider_pane_t3_ParamLimits

0x8525,	// (0x00055d9f) main_cset_slider_pane_t4_ParamLimits

0x853f,	// (0x00055db9) main_cset_slider_pane_t5_ParamLimits

0x8559,	// (0x00055dd3) main_cset_slider_pane_t6_ParamLimits

0x856e,	// (0x00055de8) main_cset_slider_pane_t7_ParamLimits

0x8598,	// (0x00055e12) main_cset_slider_pane_t8_ParamLimits

0x8598,	// (0x00055e12) main_cset_slider_pane_t8

0x85c0,	// (0x00055e3a) main_cset_slider_pane_t9_ParamLimits

0x85c0,	// (0x00055e3a) main_cset_slider_pane_t9

0x85e8,	// (0x00055e62) main_cset_slider_pane_t10_ParamLimits

0x85e8,	// (0x00055e62) main_cset_slider_pane_t10

0x8610,	// (0x00055e8a) main_cset_slider_pane_t11_ParamLimits

0x8610,	// (0x00055e8a) main_cset_slider_pane_t11

0x8638,	// (0x00055eb2) main_cset_slider_pane_t12_ParamLimits

0x8638,	// (0x00055eb2) main_cset_slider_pane_t12

0x8655,	// (0x00055ecf) main_cset_slider_pane_t13_ParamLimits

0x8655,	// (0x00055ecf) main_cset_slider_pane_t13

0xfa07,	// (0x0005d281) main_cset_slider_pane_t_ParamLimits

0x0e8f,	// (0x0004e709) bg_popup_sub_pane_cp011

0xd2f3,	// (0x0005ab6d) main_cset_text_pane_g1

0xd2fb,	// (0x0005ab75) main_cset_text_pane_t1

0xd309,	// (0x0005ab83) main_cset_text_pane_t2

0xd317,	// (0x0005ab91) main_cset_text_pane_t3

0xd325,	// (0x0005ab9f) main_cset_text_pane_t4

0xd333,	// (0x0005abad) main_cset_text_pane_t5

0xd341,	// (0x0005abbb) main_cset_text_pane_t6

0xd34f,	// (0x0005abc9) main_cset_text_pane_t7

0x0006,

0xfa98,	// (0x0005d312) main_cset_text_pane_t

0x0e8f,	// (0x0004e709) main_cam4_burst_pane

0x0e8f,	// (0x0004e709) main_cam5_pane

0x8328,	// (0x00055ba2) bg_button_pane_cp019

0x8331,	// (0x00055bab) bg_button_pane_cp020

0xd18e,	// (0x0005aa08) main_cset_slider_pane_g7_ParamLimits

0xd18e,	// (0x0005aa08) main_cset_slider_pane_g7

0xd19a,	// (0x0005aa14) main_cset_slider_pane_g8_ParamLimits

0xd19a,	// (0x0005aa14) main_cset_slider_pane_g8

0x8479,	// (0x00055cf3) main_cset_slider_pane_g9_ParamLimits

0x8479,	// (0x00055cf3) main_cset_slider_pane_g9

0x8485,	// (0x00055cff) main_cset_slider_pane_g10_ParamLimits

0x8485,	// (0x00055cff) main_cset_slider_pane_g10

0x8491,	// (0x00055d0b) main_cset_slider_pane_g11_ParamLimits

0x8491,	// (0x00055d0b) main_cset_slider_pane_g11

0x849d,	// (0x00055d17) main_cset_slider_pane_g12_ParamLimits

0x849d,	// (0x00055d17) main_cset_slider_pane_g12

0x84a9,	// (0x00055d23) main_cset_slider_pane_g13_ParamLimits

0x84a9,	// (0x00055d23) main_cset_slider_pane_g13

0x84b5,	// (0x00055d2f) main_cset_slider_pane_g14_ParamLimits

0x84b5,	// (0x00055d2f) main_cset_slider_pane_g14

0x84c1,	// (0x00055d3b) main_cset_slider_pane_g15_ParamLimits

0x84c1,	// (0x00055d3b) main_cset_slider_pane_g15

0xd1e0,	// (0x0005aa5a) main_cset_slider_pane_t14_ParamLimits

0xd1e0,	// (0x0005aa5a) main_cset_slider_pane_t14

0xd219,	// (0x0005aa93) main_cset_slider_pane_t15_ParamLimits

0xd219,	// (0x0005aa93) main_cset_slider_pane_t15

0x8a34,	// (0x000562ae) aid_cam4_burst_size_cell_ParamLimits

0x8a34,	// (0x000562ae) aid_cam4_burst_size_cell

0x8a54,	// (0x000562ce) grid_cam4_burst_pane_ParamLimits

0x8a54,	// (0x000562ce) grid_cam4_burst_pane

0x8a7a,	// (0x000562f4) linegrid_cam4_burst_pane_ParamLimits

0x8a7a,	// (0x000562f4) linegrid_cam4_burst_pane

0x8a9c,	// (0x00056316) scroll_pane_cp30_ParamLimits

0x8a9c,	// (0x00056316) scroll_pane_cp30

0x8aa8,	// (0x00056322) cell_cam4_burst_pane_ParamLimits

0x8aa8,	// (0x00056322) cell_cam4_burst_pane

0xd35d,	// (0x0005abd7) linegrid_cam4_burst_pane_g1_ParamLimits

0xd35d,	// (0x0005abd7) linegrid_cam4_burst_pane_g1

0x8aef,	// (0x00056369) linegrid_cam4_burst_pane_g2_ParamLimits

0x8aef,	// (0x00056369) linegrid_cam4_burst_pane_g2

0xd36a,	// (0x0005abe4) linegrid_cam4_burst_pane_g3_ParamLimits

0xd36a,	// (0x0005abe4) linegrid_cam4_burst_pane_g3

0x0002,

0xfaa7,	// (0x0005d321) linegrid_cam4_burst_pane_g_ParamLimits

0xfaa7,	// (0x0005d321) linegrid_cam4_burst_pane_g

0x8b00,	// (0x0005637a) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8b00,	// (0x0005637a) linegrid_cam4_burst_pane_g3_copy1

0xd377,	// (0x0005abf1) linegrid_cam4_burst_pane_g4_ParamLimits

0xd377,	// (0x0005abf1) linegrid_cam4_burst_pane_g4

0x8b1a,	// (0x00056394) linegrid_cam4_burst_pane_g5_ParamLimits

0x8b1a,	// (0x00056394) linegrid_cam4_burst_pane_g5

0x8b2b,	// (0x000563a5) linegrid_cam4_burst_pane_g6_ParamLimits

0x8b2b,	// (0x000563a5) linegrid_cam4_burst_pane_g6

0xd384,	// (0x0005abfe) linegrid_cam4_burst_pane_g7_ParamLimits

0xd384,	// (0x0005abfe) linegrid_cam4_burst_pane_g7

0x8b3c,	// (0x000563b6) cell_cam4_burst_pane_g1

0xd39d,	// (0x0005ac17) main_cam5_pane_t1_ParamLimits

0xd39d,	// (0x0005ac17) main_cam5_pane_t1

0xd3af,	// (0x0005ac29) main_cam5_pane_t2_ParamLimits

0xd3af,	// (0x0005ac29) main_cam5_pane_t2

0xd3c1,	// (0x0005ac3b) main_cam5_pane_t3_ParamLimits

0xd3c1,	// (0x0005ac3b) main_cam5_pane_t3

0xd3d3,	// (0x0005ac4d) main_cam5_pane_t4_ParamLimits

0xd3d3,	// (0x0005ac4d) main_cam5_pane_t4

0xd3e9,	// (0x0005ac63) main_cam5_pane_t5_ParamLimits

0xd3e9,	// (0x0005ac63) main_cam5_pane_t5

0xd3fb,	// (0x0005ac75) main_cam5_pane_t6_ParamLimits

0xd3fb,	// (0x0005ac75) main_cam5_pane_t6

0xd40d,	// (0x0005ac87) main_cam5_pane_t7_ParamLimits

0xd40d,	// (0x0005ac87) main_cam5_pane_t7

0xd41f,	// (0x0005ac99) main_cam5_pane_t8_ParamLimits

0xd41f,	// (0x0005ac99) main_cam5_pane_t8

0xd43b,	// (0x0005acb5) main_cam5_pane_t9_ParamLimits

0xd43b,	// (0x0005acb5) main_cam5_pane_t9

0xd44d,	// (0x0005acc7) main_cam5_pane_t10_ParamLimits

0xd44d,	// (0x0005acc7) main_cam5_pane_t10

0xd45f,	// (0x0005acd9) main_cam5_pane_t11_ParamLimits

0xd45f,	// (0x0005acd9) main_cam5_pane_t11

0xd471,	// (0x0005aceb) main_cam5_pane_t12_ParamLimits

0xd471,	// (0x0005aceb) main_cam5_pane_t12

0xd486,	// (0x0005ad00) main_cam5_pane_t13_ParamLimits

0xd486,	// (0x0005ad00) main_cam5_pane_t13

0x000c,

0xfab3,	// (0x0005d32d) main_cam5_pane_t_ParamLimits

0xfab3,	// (0x0005d32d) main_cam5_pane_t

0x33bf,	// (0x00050c39) popup_scut_keymap_window_ParamLimits

0x33bf,	// (0x00050c39) popup_scut_keymap_window

0x8b51,	// (0x000563cb) aid_size_cell_brow_shortcut

0xadb2,	// (0x0005862c) bg_popup_window_pane_cp010

0x8b5d,	// (0x000563d7) grid_scut_pane

0x8b67,	// (0x000563e1) cell_scut_pane_ParamLimits

0x8b67,	// (0x000563e1) cell_scut_pane

0x8b7c,	// (0x000563f6) cell_scut_pane_g1

0xd4a3,	// (0x0005ad1d) cell_scut_pane_t1

0xd4b2,	// (0x0005ad2c) cell_scut_pane_t2

0x8b85,	// (0x000563ff) cell_scut_pane_t3

0x0002,

0xface,	// (0x0005d348) cell_scut_pane_t

0x6b83,	// (0x000543fd) main_mup3_pane_g8_ParamLimits

0x6b83,	// (0x000543fd) main_mup3_pane_g8

0x7f35,	// (0x000557af) area_vitu2_query_pane_ParamLimits

0x7f35,	// (0x000557af) area_vitu2_query_pane

0x8985,	// (0x000561ff) input_focus_pane_cp08

0xd4c1,	// (0x0005ad3b) area_vitu2_query_pane_g1

0x8b93,	// (0x0005640d) area_vitu2_query_pane_g2

0x0001,

0xfad5,	// (0x0005d34f) area_vitu2_query_pane_g

0x8ba2,	// (0x0005641c) area_vitu2_query_pane_t1_ParamLimits

0x8ba2,	// (0x0005641c) area_vitu2_query_pane_t1

0x8bb4,	// (0x0005642e) area_vitu2_query_pane_t2_ParamLimits

0x8bb4,	// (0x0005642e) area_vitu2_query_pane_t2

0x8bc6,	// (0x00056440) area_vitu2_query_pane_t3_ParamLimits

0x8bc6,	// (0x00056440) area_vitu2_query_pane_t3

0xd4cd,	// (0x0005ad47) area_vitu2_query_pane_t4_ParamLimits

0xd4cd,	// (0x0005ad47) area_vitu2_query_pane_t4

0xd4f5,	// (0x0005ad6f) area_vitu2_query_pane_t5_ParamLimits

0xd4f5,	// (0x0005ad6f) area_vitu2_query_pane_t5

0xd51d,	// (0x0005ad97) area_vitu2_query_pane_t6_ParamLimits

0xd51d,	// (0x0005ad97) area_vitu2_query_pane_t6

0x0006,

0xfada,	// (0x0005d354) area_vitu2_query_pane_t_ParamLimits

0xfada,	// (0x0005d354) area_vitu2_query_pane_t

0x8bee,	// (0x00056468) bg_button_pane_cp018

0x8bfb,	// (0x00056475) bg_button_pane_cp021

0x8c07,	// (0x00056481) bg_button_pane_cp022

0x8c16,	// (0x00056490) input_focus_pane_cp09

0x4f53,	// (0x000527cd) aid_size_touch_mv_arrow_left

0xac8b,	// (0x00058505) aid_size_touch_mv_arrow_right

0x84d9,	// (0x00055d53) main_cset_slider_pane_g16_ParamLimits

0x84d9,	// (0x00055d53) main_cset_slider_pane_g16

0x84e5,	// (0x00055d5f) main_cset_slider_pane_g17_ParamLimits

0x84e5,	// (0x00055d5f) main_cset_slider_pane_g17

0x8b3c,	// (0x000563b6) cell_cam4_burst_pane_g1_ParamLimits

0x0e8f,	// (0x0004e709) compa_mode_pane

0x86cd,	// (0x00055f47) popup_vtel_slider_window_g3_ParamLimits

0x86cd,	// (0x00055f47) popup_vtel_slider_window_g3

0x86e4,	// (0x00055f5e) popup_vtel_slider_window_g4_ParamLimits

0x86e4,	// (0x00055f5e) popup_vtel_slider_window_g4

0x86fb,	// (0x00055f75) popup_vtel_slider_window_t1_ParamLimits

0x86fb,	// (0x00055f75) popup_vtel_slider_window_t1

0x0e8f,	// (0x0004e709) main_cl_pane

0xc247,	// (0x00059ac1) popup_imed_adjust2_window_ParamLimits

0xc221,	// (0x00059a9b) bg_tb_trans_pane_cp05_ParamLimits

0xcb2d,	// (0x0005a3a7) popup_imed_adjust2_window_g1_ParamLimits

0xcb3c,	// (0x0005a3b6) popup_imed_adjust2_window_g2_ParamLimits

0xcb3c,	// (0x0005a3b6) popup_imed_adjust2_window_g2

0xcb48,	// (0x0005a3c2) popup_imed_adjust2_window_g3_ParamLimits

0xcb48,	// (0x0005a3c2) popup_imed_adjust2_window_g3

0x0002,

0xf854,	// (0x0005d0ce) popup_imed_adjust2_window_g_ParamLimits

0xf854,	// (0x0005d0ce) popup_imed_adjust2_window_g

0xcb54,	// (0x0005a3ce) popup_imed_adjust2_window_t1_ParamLimits

0xcb6c,	// (0x0005a3e6) slider_imed_adjust_pane_ParamLimits

0xcb80,	// (0x0005a3fa) slider_imed_adjust_pane_g1_ParamLimits

0xcb90,	// (0x0005a40a) slider_imed_adjust_pane_g2_ParamLimits

0xcba0,	// (0x0005a41a) slider_imed_adjust_pane_g3_ParamLimits

0xcbb1,	// (0x0005a42b) slider_imed_adjust_pane_g4_ParamLimits

0xf85b,	// (0x0005d0d5) slider_imed_adjust_pane_g_ParamLimits

0x7c96,	// (0x00055510) aid_touch_area_cam4_ParamLimits

0x7c96,	// (0x00055510) aid_touch_area_cam4

0xefc5,	// (0x0005c83f) battery_pane_cp01

0x7d38,	// (0x000555b2) main_camera4_pane_g6_ParamLimits

0x7d38,	// (0x000555b2) main_camera4_pane_g6

0x7d59,	// (0x000555d3) main_camera4_pane_t2_ParamLimits

0x7d59,	// (0x000555d3) main_camera4_pane_t2

0x0001,

0xf95e,	// (0x0005d1d8) main_camera4_pane_t_ParamLimits

0xf95e,	// (0x0005d1d8) main_camera4_pane_t

0x7dba,	// (0x00055634) aid_touch_area_vid4_ParamLimits

0x7dba,	// (0x00055634) aid_touch_area_vid4

0x7dfc,	// (0x00055676) main_video4_pane_g5_ParamLimits

0x7dfc,	// (0x00055676) main_video4_pane_g5

0x7e1d,	// (0x00055697) vid4_progress_pane_ParamLimits

0x7e1d,	// (0x00055697) vid4_progress_pane

0xd1a6,	// (0x0005aa20) main_cset_slider_pane_g18_ParamLimits

0xd1a6,	// (0x0005aa20) main_cset_slider_pane_g18

0xd391,	// (0x0005ac0b) cell_cam4_burst_pane_g2_ParamLimits

0xd391,	// (0x0005ac0b) cell_cam4_burst_pane_g2

0x0001,

0xfaae,	// (0x0005d328) cell_cam4_burst_pane_g_ParamLimits

0xfaae,	// (0x0005d328) cell_cam4_burst_pane_g

0x1615,	// (0x0004ee8f) bg_cl_pane_ParamLimits

0x1615,	// (0x0004ee8f) bg_cl_pane

0x8c25,	// (0x0005649f) cl_header_pane_ParamLimits

0x8c25,	// (0x0005649f) cl_header_pane

0x8c39,	// (0x000564b3) cl_listscroll_pane_ParamLimits

0x8c39,	// (0x000564b3) cl_listscroll_pane

0xd569,	// (0x0005ade3) bg_cl_pane_g1

0xd571,	// (0x0005adeb) bg_cl_pane_g2

0xd579,	// (0x0005adf3) bg_cl_pane_g3

0xd581,	// (0x0005adfb) bg_cl_pane_g4

0xd589,	// (0x0005ae03) bg_cl_pane_g5

0xd591,	// (0x0005ae0b) bg_cl_pane_g6

0xd599,	// (0x0005ae13) bg_cl_pane_g7

0xd5a1,	// (0x0005ae1b) bg_cl_pane_g8

0xd5a9,	// (0x0005ae23) bg_cl_pane_g9

0x0008,

0xfae9,	// (0x0005d363) bg_cl_pane_g

0x8c49,	// (0x000564c3) aid_height_cl_leading_ParamLimits

0x8c49,	// (0x000564c3) aid_height_cl_leading

0x8c55,	// (0x000564cf) aid_height_cl_text_ParamLimits

0x8c55,	// (0x000564cf) aid_height_cl_text

0x1970,	// (0x0004f1ea) bg_cl_header_pane_ParamLimits

0x1970,	// (0x0004f1ea) bg_cl_header_pane

0x8c74,	// (0x000564ee) cl_header_pane_g1_ParamLimits

0x8c74,	// (0x000564ee) cl_header_pane_g1

0x8c8a,	// (0x00056504) cl_header_pane_t1_ParamLimits

0x8c8a,	// (0x00056504) cl_header_pane_t1

0xd5b1,	// (0x0005ae2b) cl_list_pane

0xd5ba,	// (0x0005ae34) hc_scroll_pane_cp01

0xa582,	// (0x00057dfc) bg_cl_header_pane_g1

0xd073,	// (0x0005a8ed) bg_cl_header_pane_g2

0xa5a2,	// (0x00057e1c) bg_cl_header_pane_g3

0xd083,	// (0x0005a8fd) bg_cl_header_pane_g4

0xd07b,	// (0x0005a8f5) bg_cl_header_pane_g5

0xd2aa,	// (0x0005ab24) bg_cl_header_pane_g6

0xd09b,	// (0x0005a915) bg_cl_header_pane_g7

0xd0a3,	// (0x0005a91d) bg_cl_header_pane_g8

0xd093,	// (0x0005a90d) bg_cl_header_pane_g9

0x0008,

0xfafc,	// (0x0005d376) bg_cl_header_pane_g

0x8ca3,	// (0x0005651d) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8ca3,	// (0x0005651d) hc_cl_list_double_graphic_heading_pane

0x8cb3,	// (0x0005652d) hc_cl_list_single_graphic_pane_ParamLimits

0x8cb3,	// (0x0005652d) hc_cl_list_single_graphic_pane

0x8cc6,	// (0x00056540) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8cc6,	// (0x00056540) hc_cl_list_single_graphic_pane_g1

0x8cd2,	// (0x0005654c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8cd2,	// (0x0005654c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfb0f,	// (0x0005d389) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfb0f,	// (0x0005d389) hc_cl_list_single_graphic_pane_g

0x8ce6,	// (0x00056560) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8ce6,	// (0x00056560) hc_cl_list_single_graphic_pane_t1

0x8cc6,	// (0x00056540) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8cc6,	// (0x00056540) hc_cl_list_double_graphic_heading_pane_g1

0x8cfb,	// (0x00056575) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8cfb,	// (0x00056575) hc_cl_list_double_graphic_heading_pane_g2

0x8d0f,	// (0x00056589) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8d0f,	// (0x00056589) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb14,	// (0x0005d38e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb14,	// (0x0005d38e) hc_cl_list_double_graphic_heading_pane_g

0x8d23,	// (0x0005659d) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8d23,	// (0x0005659d) hc_cl_list_double_graphic_heading_pane_t1

0x8d38,	// (0x000565b2) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8d38,	// (0x000565b2) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb1b,	// (0x0005d395) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb1b,	// (0x0005d395) hc_cl_list_double_graphic_heading_pane_t

0xf08e,	// (0x0005c908) vid4_progress_pane_g1

0xf09d,	// (0x0005c917) vid4_progress_pane_g2

0xf0ac,	// (0x0005c926) vid4_progress_pane_g3

0xf0bb,	// (0x0005c935) vid4_progress_pane_g4

0x0004,

0xfb20,	// (0x0005d39a) vid4_progress_pane_g

0xf0d3,	// (0x0005c94d) vid4_progress_pane_t1

0xf0e9,	// (0x0005c963) vid4_progress_pane_t2

0x0002,

0xfb2b,	// (0x0005d3a5) vid4_progress_pane_t

0xf113,	// (0x0005c98d) wait_bar_pane_cp07

0xc45f,	// (0x00059cd9) blid_firmament_pane_ParamLimits

0xc4a0,	// (0x00059d1a) popup_blid_sat_info2_window_g1

0xc4c4,	// (0x00059d3e) popup_blid_sat_info2_window_t3

0xc4d2,	// (0x00059d4c) popup_blid_sat_info2_window_t4

0xc4e0,	// (0x00059d5a) popup_blid_sat_info2_window_t5

0xc4ee,	// (0x00059d68) popup_blid_sat_info2_window_t6

0xc4fe,	// (0x00059d78) popup_blid_sat_info2_window_t7

0xc50c,	// (0x00059d86) popup_blid_sat_info2_window_t8

0xc51a,	// (0x00059d94) popup_blid_sat_info2_window_t9

0xc528,	// (0x00059da2) popup_blid_sat_info2_window_t10

0xc5e4,	// (0x00059e5e) aid_firma_cardinal_ParamLimits

0xc5f8,	// (0x00059e72) blid_firmament_pane_t1_ParamLimits

0xc60f,	// (0x00059e89) blid_firmament_pane_t2_ParamLimits

0xc626,	// (0x00059ea0) blid_firmament_pane_t3_ParamLimits

0xc63d,	// (0x00059eb7) blid_firmament_pane_t4_ParamLimits

0xf74d,	// (0x0005cfc7) blid_firmament_pane_t_ParamLimits

0xc654,	// (0x00059ece) blid_sat_info_pane_ParamLimits

0x1970,	// (0x0004f1ea) main_cam_set_pane_ParamLimits

0x73da,	// (0x00054c54) aid_size_cell_colour_35_ParamLimits

0x73fa,	// (0x00054c74) aid_size_cell_colour_112_ParamLimits

0x741a,	// (0x00054c94) aid_size_cell_effect_ParamLimits

0xc221,	// (0x00059a9b) bg_tb_trans_pane_cp02_ParamLimits

0xa7f9,	// (0x00058073) heading_imed_pane_ParamLimits

0x743a,	// (0x00054cb4) listscroll_imed_pane_ParamLimits

0xb813,	// (0x0005908d) popup_call2_audio_first_window_g5_ParamLimits

0xb813,	// (0x0005908d) popup_call2_audio_first_window_g5

0x7957,	// (0x000551d1) aid_size_touch_image3_arrow_left_ParamLimits

0x7957,	// (0x000551d1) aid_size_touch_image3_arrow_left

0x7977,	// (0x000551f1) aid_size_touch_image3_arrow_right_ParamLimits

0x7977,	// (0x000551f1) aid_size_touch_image3_arrow_right

0xf0fe,	// (0x0005c978) vid4_progress_pane_t3

0x770e,	// (0x00054f88) main_hwr_training_symbol_option_pane_ParamLimits

0x770e,	// (0x00054f88) main_hwr_training_symbol_option_pane

0xce0c,	// (0x0005a686) popup_hwr_training_preview_window_ParamLimits

0xce0c,	// (0x0005a686) popup_hwr_training_preview_window

0x772a,	// (0x00054fa4) hwr_training_navi_pane_g5_ParamLimits

0x772a,	// (0x00054fa4) hwr_training_navi_pane_g5

0xd061,	// (0x0005a8db) popup_char_count_window

0xeff3,	// (0x0005c86d) bg_popup_sub_pane_cp20_ParamLimits

0x8815,	// (0x0005608f) list_vitu2_match_list_pane_ParamLimits

0x8824,	// (0x0005609e) vitu2_page_scroll_pane_ParamLimits

0x8824,	// (0x0005609e) vitu2_page_scroll_pane

0xd61d,	// (0x0005ae97) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd61d,	// (0x0005ae97) list_single_hwr_training_symbol_option_pane

0xd630,	// (0x0005aeaa) list_single_hwr_training_symbol_option_pane_g1

0xd638,	// (0x0005aeb2) list_single_hwr_training_symbol_option_pane_t1

0xd646,	// (0x0005aec0) bg_button_pane_cp023

0xd64f,	// (0x0005aec9) bg_button_pane_cp024

0x8d4d,	// (0x000565c7) vitu2_page_scroll_pane_g1

0x8d55,	// (0x000565cf) vitu2_page_scroll_pane_g2

0x0001,

0xfb32,	// (0x0005d3ac) vitu2_page_scroll_pane_g

0x8d5d,	// (0x000565d7) vitu2_page_scroll_pane_t1

0xc3b7,	// (0x00059c31) popup_char_count_window_g1

0xd682,	// (0x0005aefc) popup_char_count_window_g2

0xd68b,	// (0x0005af05) popup_char_count_window_g3

0x0002,

0xfb37,	// (0x0005d3b1) popup_char_count_window_g

0xd694,	// (0x0005af0e) popup_char_count_window_t1

0x0e8f,	// (0x0004e709) main_vded2_pane

0xcb1b,	// (0x0005a395) aid_size_cell_imed_line

0xcb25,	// (0x0005a39f) grid_imed_line_width_pane

0x7e91,	// (0x0005570b) vid4_indicators_pane_g4

0xd6a2,	// (0x0005af1c) cell_imed_line_width_pane_ParamLimits

0xd6a2,	// (0x0005af1c) cell_imed_line_width_pane

0xd6b4,	// (0x0005af2e) cell_imed_line_width_pane_g1

0xc439,	// (0x00059cb3) cell_imed_line_width_pane_g2

0x0001,

0xfb3e,	// (0x0005d3b8) cell_imed_line_width_pane_g

0x8d6c,	// (0x000565e6) main_vded2_pane_g1_ParamLimits

0x8d6c,	// (0x000565e6) main_vded2_pane_g1

0x8d82,	// (0x000565fc) main_vded2_pane_g2_ParamLimits

0x8d82,	// (0x000565fc) main_vded2_pane_g2

0x0001,

0xfb43,	// (0x0005d3bd) main_vded2_pane_g_ParamLimits

0xfb43,	// (0x0005d3bd) main_vded2_pane_g

0x8d92,	// (0x0005660c) vded2_slider_pane_ParamLimits

0x8d92,	// (0x0005660c) vded2_slider_pane

0x8da5,	// (0x0005661f) aid_size_touch_vded2_end

0x8dad,	// (0x00056627) aid_size_touch_vded2_playhead

0x8db5,	// (0x0005662f) aid_size_touch_vded2_start

0x8dbd,	// (0x00056637) vded2_slider_bg_pane

0x8dc6,	// (0x00056640) vded2_slider_pane_g1

0x8dcf,	// (0x00056649) vded2_slider_pane_g2

0x8dd7,	// (0x00056651) vded2_slider_pane_g3

0x0002,

0xfb48,	// (0x0005d3c2) vded2_slider_pane_g

0x8de0,	// (0x0005665a) vded2_slider_bg_pane_g1

0x8de9,	// (0x00056663) vded2_slider_bg_pane_g2

0x8df2,	// (0x0005666c) vded2_slider_bg_pane_g3

0x0002,

0xfb4f,	// (0x0005d3c9) vded2_slider_bg_pane_g

0x5499,	// (0x00052d13) aid_postcard_touch_down_pane_ParamLimits

0x5499,	// (0x00052d13) aid_postcard_touch_down_pane

0x54ab,	// (0x00052d25) aid_postcard_touch_up_pane_ParamLimits

0x54ab,	// (0x00052d25) aid_postcard_touch_up_pane

0x0e8f,	// (0x0004e709) main_blid2_pane

0xc22f,	// (0x00059aa9) popup_blid2_search_window

0x0e8f,	// (0x0004e709) blid2_gps_pane

0x0e8f,	// (0x0004e709) blid2_navig_pane

0x0e8f,	// (0x0004e709) blid2_search_pane

0x0e8f,	// (0x0004e709) blid2_tripm_pane

0x8dfb,	// (0x00056675) blid2_search_pane_g1_ParamLimits

0x8dfb,	// (0x00056675) blid2_search_pane_g1

0x8e0f,	// (0x00056689) blid2_search_pane_t1_ParamLimits

0x8e0f,	// (0x00056689) blid2_search_pane_t1

0x8e21,	// (0x0005669b) aid_size_cell_blid2_gps_ParamLimits

0x8e21,	// (0x0005669b) aid_size_cell_blid2_gps

0x8e39,	// (0x000566b3) blid2_gps_pane_g1_ParamLimits

0x8e39,	// (0x000566b3) blid2_gps_pane_g1

0x8e4d,	// (0x000566c7) grid_blid2_satellite_pane_ParamLimits

0x8e4d,	// (0x000566c7) grid_blid2_satellite_pane

0x8e61,	// (0x000566db) blid2_navig_pane_g1_ParamLimits

0x8e61,	// (0x000566db) blid2_navig_pane_g1

0x8e6d,	// (0x000566e7) blid2_navig_pane_t1_ParamLimits

0x8e6d,	// (0x000566e7) blid2_navig_pane_t1

0x8e86,	// (0x00056700) blid2_navig_pane_t2_ParamLimits

0x8e86,	// (0x00056700) blid2_navig_pane_t2

0x0001,

0xfb56,	// (0x0005d3d0) blid2_navig_pane_t_ParamLimits

0xfb56,	// (0x0005d3d0) blid2_navig_pane_t

0x8e9f,	// (0x00056719) blid2_navig_ring_pane_ParamLimits

0x8e9f,	// (0x00056719) blid2_navig_ring_pane

0x8eb4,	// (0x0005672e) blid2_speed_pane_ParamLimits

0x8eb4,	// (0x0005672e) blid2_speed_pane

0x8ec0,	// (0x0005673a) blid2_tripm_pane_g1_ParamLimits

0x8ec0,	// (0x0005673a) blid2_tripm_pane_g1

0x8ed5,	// (0x0005674f) blid2_tripm_pane_g2_ParamLimits

0x8ed5,	// (0x0005674f) blid2_tripm_pane_g2

0x8ee9,	// (0x00056763) blid2_tripm_pane_g3_ParamLimits

0x8ee9,	// (0x00056763) blid2_tripm_pane_g3

0x8efd,	// (0x00056777) blid2_tripm_pane_g4_ParamLimits

0x8efd,	// (0x00056777) blid2_tripm_pane_g4

0x8f11,	// (0x0005678b) blid2_tripm_pane_g5_ParamLimits

0x8f11,	// (0x0005678b) blid2_tripm_pane_g5

0x0005,

0xfb5b,	// (0x0005d3d5) blid2_tripm_pane_g_ParamLimits

0xfb5b,	// (0x0005d3d5) blid2_tripm_pane_g

0x8f33,	// (0x000567ad) blid2_tripm_pane_t1_ParamLimits

0x8f33,	// (0x000567ad) blid2_tripm_pane_t1

0x8f4a,	// (0x000567c4) blid2_tripm_pane_t2_ParamLimits

0x8f4a,	// (0x000567c4) blid2_tripm_pane_t2

0x8f61,	// (0x000567db) blid2_tripm_pane_t3_ParamLimits

0x8f61,	// (0x000567db) blid2_tripm_pane_t3

0x0003,

0xfb68,	// (0x0005d3e2) blid2_tripm_pane_t_ParamLimits

0xfb68,	// (0x0005d3e2) blid2_tripm_pane_t

0x8fa4,	// (0x0005681e) cell_blid2_satellite_pane_ParamLimits

0x8fa4,	// (0x0005681e) cell_blid2_satellite_pane

0x8fbc,	// (0x00056836) cell_blid2_satellite_pane_g1

0xd6bd,	// (0x0005af37) cell_blid2_satellite_pane_t1

0xc664,	// (0x00059ede) blid2_speed_pane_g1

0xd6cb,	// (0x0005af45) blid2_speed_pane_t1

0xd6d9,	// (0x0005af53) blid2_speed_pane_t2

0x0001,

0xfb71,	// (0x0005d3eb) blid2_speed_pane_t

0xc664,	// (0x00059ede) blid2_navig_ring_pane_g1

0x8fc5,	// (0x0005683f) blid2_navig_ring_pane_g2

0x8fcd,	// (0x00056847) blid2_navig_ring_pane_g3

0x8fd5,	// (0x0005684f) blid2_navig_ring_pane_g4

0x8fdd,	// (0x00056857) blid2_navig_ring_pane_g5

0x0004,

0xfb76,	// (0x0005d3f0) blid2_navig_ring_pane_g

0x0e8f,	// (0x0004e709) bg_popup_window_pane_cp011

0xd6e7,	// (0x0005af61) popup_blid2_search_window_g1

0xd6ef,	// (0x0005af69) popup_blid2_search_window_t1

0xd6fd,	// (0x0005af77) popup_blid2_search_window_t2

0x0001,

0xfb81,	// (0x0005d3fb) popup_blid2_search_window_t

0x1928,	// (0x0004f1a2) main_browser_pane_g1

0x1615,	// (0x0004ee8f) main_browser_pane_ParamLimits

0xeff3,	// (0x0005c86d) bg_button_pane_cp011_ParamLimits

0x8102,	// (0x0005597c) cell_vitu2_function_pane_g1_ParamLimits

0x1970,	// (0x0004f1ea) bg_popup_sub_pane_cp22_ParamLimits

0x8985,	// (0x000561ff) input_focus_pane_cp08_ParamLimits

0x8992,	// (0x0005620c) popup_vitu2_query_button_pane_ParamLimits

0x8992,	// (0x0005620c) popup_vitu2_query_button_pane

0x896b,	// (0x000561e5) popup_vitu2_query_input_button_pane

0xd2e7,	// (0x0005ab61) popup_vitu2_query_window_g1_ParamLimits

0x89a2,	// (0x0005621c) popup_vitu2_query_window_g2_ParamLimits

0xfa88,	// (0x0005d302) popup_vitu2_query_window_g_ParamLimits

0x0e8f,	// (0x0004e709) bg_button_pane_cp026

0x8fe5,	// (0x0005685f) popup_vitu2_query_input_button_pane_g1

0x0e8f,	// (0x0004e709) bg_button_pane_cp025

0xd70b,	// (0x0005af85) popup_vitu2_query_button_pane_t1

0x68ec,	// (0x00054166) main_mp3_pane_t6

0x68fa,	// (0x00054174) popup_slider_window_cp01

0xefd5,	// (0x0005c84f) cam4_battery_pane

0xefd5,	// (0x0005c84f) cam4_battery_pane_cp02

0xefd5,	// (0x0005c84f) cam4_battery_pane_cp01

0xefd5,	// (0x0005c84f) cam4_battery_pane_cp03

0xcf0c,	// (0x0005a786) cam4_battery_pane_g1

0xc664,	// (0x00059ede) cam4_battery_pane_g2

0x0001,

0xfb86,	// (0x0005d400) cam4_battery_pane_g

0xc536,	// (0x00059db0) popup_blid_sat_info2_window_t11

0x4f53,	// (0x000527cd) aid_size_touch_mv_arrow_left_ParamLimits

0xac8b,	// (0x00058505) aid_size_touch_mv_arrow_right_ParamLimits

0xacc3,	// (0x0005853d) navi_pane_g1_ParamLimits

0xaccf,	// (0x00058549) navi_pane_g2_ParamLimits

0x4f6c,	// (0x000527e6) navi_pane_g3_ParamLimits

0xf44c,	// (0x0005ccc6) navi_pane_g_ParamLimits

0x4f91,	// (0x0005280b) navi_pane_mv_t1_ParamLimits

0x7446,	// (0x00054cc0) grid_imed_effect_pane_ParamLimits

0x1862,	// (0x0004f0dc) aid_placing_vt_slider_lsc

0x186a,	// (0x0004f0e4) aid_placing_vt_slider_prt

0x1970,	// (0x0004f1ea) bg_tb_trans_pane_cp01_ParamLimits

0xc7b3,	// (0x0005a02d) popup_image_details_window_g1_ParamLimits

0xc7c6,	// (0x0005a040) popup_image_details_window_g2_ParamLimits

0xc7db,	// (0x0005a055) popup_image_details_window_g3_ParamLimits

0xc7db,	// (0x0005a055) popup_image_details_window_g3

0xf792,	// (0x0005d00c) popup_image_details_window_g_ParamLimits

0xc7ef,	// (0x0005a069) popup_image_details_window_t1_ParamLimits

0xc801,	// (0x0005a07b) popup_image_details_window_t2_ParamLimits

0xc81a,	// (0x0005a094) popup_image_details_window_t3_ParamLimits

0xc82e,	// (0x0005a0a8) popup_image_details_window_t4_ParamLimits

0xc849,	// (0x0005a0c3) popup_image_details_window_t5_ParamLimits

0xf799,	// (0x0005d013) popup_image_details_window_t_ParamLimits

0x8c61,	// (0x000564db) cl_header_name_pane_ParamLimits

0x8c61,	// (0x000564db) cl_header_name_pane

0x8fed,	// (0x00056867) cl_header_name_pane_t1_ParamLimits

0x8fed,	// (0x00056867) cl_header_name_pane_t1

0x900e,	// (0x00056888) cl_header_name_pane_t2_ParamLimits

0x900e,	// (0x00056888) cl_header_name_pane_t2

0x9050,	// (0x000568ca) cl_header_name_pane_t3_ParamLimits

0x9050,	// (0x000568ca) cl_header_name_pane_t3

0x0002,

0xfb8b,	// (0x0005d405) cl_header_name_pane_t_ParamLimits

0xfb8b,	// (0x0005d405) cl_header_name_pane_t

0xad51,	// (0x000585cb) navi_pane_mv_g2_ParamLimits

0xd002,	// (0x0005a87c) field_vitu2_entry_pane_g1_ParamLimits

0xd00e,	// (0x0005a888) field_vitu2_entry_pane_g2_ParamLimits

0xd01a,	// (0x0005a894) field_vitu2_entry_pane_g3_ParamLimits

0xd01a,	// (0x0005a894) field_vitu2_entry_pane_g3

0xf987,	// (0x0005d201) field_vitu2_entry_pane_g_ParamLimits

0x807e,	// (0x000558f8) cell_vitu2_itu_pane_g1_ParamLimits

0x808e,	// (0x00055908) cell_vitu2_itu_pane_g2_ParamLimits

0x808e,	// (0x00055908) cell_vitu2_itu_pane_g2

0x0001,

0xf993,	// (0x0005d20d) cell_vitu2_itu_pane_g_ParamLimits

0xf993,	// (0x0005d20d) cell_vitu2_itu_pane_g

0xeff3,	// (0x0005c86d) bg_vkb2_func_pane_cp05_ParamLimits

0xeff3,	// (0x0005c86d) bg_vkb2_func_pane_cp05

0xeff3,	// (0x0005c86d) bg_vkb2_func_pane_cp03

0xeff3,	// (0x0005c86d) bg_vkb2_func_pane_cp04

0xeff3,	// (0x0005c86d) bg_vkb2_func_pane_cp10_ParamLimits

0xeff3,	// (0x0005c86d) bg_vkb2_func_pane_cp10

0x8c07,	// (0x00056481) bg_vkb2_func_pane_cp08

0x8bee,	// (0x00056468) bg_vkb2_func_pane_cp06

0x8bfb,	// (0x00056475) bg_vkb2_func_pane_cp07

0xd658,	// (0x0005aed2) bg_vkb2_func_pane_cp11_ParamLimits

0xd658,	// (0x0005aed2) bg_vkb2_func_pane_cp11

0xd66d,	// (0x0005aee7) bg_vkb2_func_pane_cp12_ParamLimits

0xd66d,	// (0x0005aee7) bg_vkb2_func_pane_cp12

0x0e8f,	// (0x0004e709) bg_vkb2_func_pane_cp09

0xd073,	// (0x0005a8ed) bg_vkb2_func_pane_g1

0xa5a2,	// (0x00057e1c) bg_vkb2_func_pane_g2

0xd07b,	// (0x0005a8f5) bg_vkb2_func_pane_g3

0xd083,	// (0x0005a8fd) bg_vkb2_func_pane_g4

0xd2aa,	// (0x0005ab24) bg_vkb2_func_pane_g5

0xd09b,	// (0x0005a915) bg_vkb2_func_pane_g6

0xd0a3,	// (0x0005a91d) bg_vkb2_func_pane_g7

0xd093,	// (0x0005a90d) bg_vkb2_func_pane_g8

0xa582,	// (0x00057dfc) bg_vkb2_func_pane_g9

0x0008,

0xfb92,	// (0x0005d40c) bg_vkb2_func_pane_g

0x8f23,	// (0x0005679d) blid2_tripm_pane_g6_ParamLimits

0x8f23,	// (0x0005679d) blid2_tripm_pane_g6

0xceca,	// (0x0005a744) mp4_progress_pane_g1

0x8f92,	// (0x0005680c) blid2_tripm_values_pane_ParamLimits

0x8f92,	// (0x0005680c) blid2_tripm_values_pane

0x9081,	// (0x000568fb) blid2_tripm_values_pane_t1

0x908f,	// (0x00056909) blid2_tripm_values_pane_t2

0x909d,	// (0x00056917) blid2_tripm_values_pane_t3

0x90ab,	// (0x00056925) blid2_tripm_values_pane_t4

0x90b9,	// (0x00056933) blid2_tripm_values_pane_t5

0x90c7,	// (0x00056941) blid2_tripm_values_pane_t6

0x90d5,	// (0x0005694f) blid2_tripm_values_pane_t7

0x90e3,	// (0x0005695d) blid2_tripm_values_pane_t8

0x90f1,	// (0x0005696b) blid2_tripm_values_pane_t9

0x0008,

0xfba5,	// (0x0005d41f) blid2_tripm_values_pane_t

0x40d2,	// (0x0005194c) call_video_pane_t1_ParamLimits

0x40e4,	// (0x0005195e) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x0005cb4f) call_video_pane_t_ParamLimits

0x53e4,	// (0x00052c5e) msg_header_pane_g1_ParamLimits

0xaf3b,	// (0x000587b5) msg_header_pane_g2_ParamLimits

0xaf3b,	// (0x000587b5) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x0005cd69) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x0005cd69) msg_header_pane_g

0x1615,	// (0x0004ee8f) main_clock2_pane_ParamLimits

0x7185,	// (0x000549ff) grid_clock2_toolbar_pane_ParamLimits

0x7185,	// (0x000549ff) grid_clock2_toolbar_pane

0x7185,	// (0x000549ff) listscroll_clock2_pane_ParamLimits

0x7185,	// (0x000549ff) listscroll_clock2_pane

0x7254,	// (0x00054ace) main_clock2_pane_t3_ParamLimits

0x7254,	// (0x00054ace) main_clock2_pane_t3

0x726d,	// (0x00054ae7) main_clock2_pane_t4_ParamLimits

0x726d,	// (0x00054ae7) main_clock2_pane_t4

0xd719,	// (0x0005af93) cell_clock2_toolbar_pane

0xd721,	// (0x0005af9b) cell_clock2_toolbar_pane_cp01

0xd721,	// (0x0005af9b) cell_clock2_toolbar_pane_cp02

0xd729,	// (0x0005afa3) cell_clock2_toolbar_pane_cp03

0xd731,	// (0x0005afab) list_clock2_pane

0xabf3,	// (0x0005846d) scroll_pane_cp10

0xd739,	// (0x0005afb3) list_single_clock2_pane_ParamLimits

0xd739,	// (0x0005afb3) list_single_clock2_pane

0xadb2,	// (0x0005862c) list_highlight_pane_cp08

0xd746,	// (0x0005afc0) list_single_clock2_pane_t1

0xd754,	// (0x0005afce) list_single_clock2_pane_t2

0x0001,

0xfbb8,	// (0x0005d432) list_single_clock2_pane_t

0x0e8f,	// (0x0004e709) bg_button_pane_cp10

0xd762,	// (0x0005afdc) cell_clock2_toolbar_pane_g1

0x542d,	// (0x00052ca7) aid_main_viewer_pane_g1_ParamLimits

0x542d,	// (0x00052ca7) aid_main_viewer_pane_g1

0x5439,	// (0x00052cb3) aid_main_viewer_pane_g2_ParamLimits

0x5439,	// (0x00052cb3) aid_main_viewer_pane_g2

0x5445,	// (0x00052cbf) aid_main_viewer_pane_g3_ParamLimits

0x5445,	// (0x00052cbf) aid_main_viewer_pane_g3

0x5454,	// (0x00052cce) aid_main_viewer_pane_g4_ParamLimits

0x5454,	// (0x00052cce) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x0005cd7a) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x0005cd7a) aid_main_viewer_pane_g

0x1970,	// (0x0004f1ea) main_calc_pane_ParamLimits

0x5c48,	// (0x000534c2) main_dialer2_pane_ParamLimits

0x0e8f,	// (0x0004e709) main_cam6_pane

0x0e8f,	// (0x0004e709) main_vid6_pane

0x7191,	// (0x00054a0b) listscroll_gen_pane_cp06_ParamLimits

0x7191,	// (0x00054a0b) listscroll_gen_pane_cp06

0x7286,	// (0x00054b00) main_clock2_pane_t5_ParamLimits

0x7286,	// (0x00054b00) main_clock2_pane_t5

0x72db,	// (0x00054b55) aid_call2_pane_cp10_ParamLimits

0x72ed,	// (0x00054b67) aid_call_pane_cp10_ParamLimits

0xac7f,	// (0x000584f9) popup_clock_analogue_window_cp10_g1_ParamLimits

0xac7f,	// (0x000584f9) popup_clock_analogue_window_cp10_g2_ParamLimits

0x72ff,	// (0x00054b79) popup_clock_analogue_window_cp10_g3_ParamLimits

0x72ff,	// (0x00054b79) popup_clock_analogue_window_cp10_g4_ParamLimits

0xac7f,	// (0x000584f9) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf849,	// (0x0005d0c3) popup_clock_analogue_window_cp10_g_ParamLimits

0x7311,	// (0x00054b8b) popup_clock_analogue_window_cp10_t1_ParamLimits

0xcf34,	// (0x0005a7ae) cell_dialer2_keypad_pane_g2_ParamLimits

0xcf34,	// (0x0005a7ae) cell_dialer2_keypad_pane_g2

0x0001,

0xf92f,	// (0x0005d1a9) cell_dialer2_keypad_pane_g_ParamLimits

0xf92f,	// (0x0005d1a9) cell_dialer2_keypad_pane_g

0x7920,	// (0x0005519a) cell_dialer2_keypad_pane_t1

0x83cc,	// (0x00055c46) main_cset_text2_pane_ParamLimits

0x83cc,	// (0x00055c46) main_cset_text2_pane

0xd4c1,	// (0x0005ad3b) area_vitu2_query_pane_g1_ParamLimits

0x8b93,	// (0x0005640d) area_vitu2_query_pane_g2_ParamLimits

0xfad5,	// (0x0005d34f) area_vitu2_query_pane_g_ParamLimits

0xd545,	// (0x0005adbf) area_vitu2_query_pane_t7_ParamLimits

0xd545,	// (0x0005adbf) area_vitu2_query_pane_t7

0x8bee,	// (0x00056468) bg_button_pane_cp018_ParamLimits

0x8bfb,	// (0x00056475) bg_button_pane_cp021_ParamLimits

0x8c07,	// (0x00056481) bg_button_pane_cp022_ParamLimits

0x8c07,	// (0x00056481) bg_vkb2_func_pane_cp08_ParamLimits

0x8bee,	// (0x00056468) bg_vkb2_func_pane_cp06_ParamLimits

0x8bfb,	// (0x00056475) bg_vkb2_func_pane_cp07_ParamLimits

0x8c16,	// (0x00056490) input_focus_pane_cp09_ParamLimits

0xf123,	// (0x0005c99d) cam6_autofocus_pane_ParamLimits

0xf123,	// (0x0005c99d) cam6_autofocus_pane

0x90ff,	// (0x00056979) cam6_image_uncrop_pane_ParamLimits

0x90ff,	// (0x00056979) cam6_image_uncrop_pane

0x910c,	// (0x00056986) cam6_indi_pane_ParamLimits

0x910c,	// (0x00056986) cam6_indi_pane

0x9122,	// (0x0005699c) cam6_mode_pane_ParamLimits

0x9122,	// (0x0005699c) cam6_mode_pane

0x9134,	// (0x000569ae) cam6_timer_pane_ParamLimits

0x9134,	// (0x000569ae) cam6_timer_pane

0x9140,	// (0x000569ba) cam6_zoom_pane_ParamLimits

0x9140,	// (0x000569ba) cam6_zoom_pane

0x914c,	// (0x000569c6) cam6_mode_pane_g1_ParamLimits

0x914c,	// (0x000569c6) cam6_mode_pane_g1

0x915c,	// (0x000569d6) cam6_mode_pane_g2_ParamLimits

0x915c,	// (0x000569d6) cam6_mode_pane_g2

0x916c,	// (0x000569e6) cam6_mode_pane_g3_ParamLimits

0x916c,	// (0x000569e6) cam6_mode_pane_g3

0x917c,	// (0x000569f6) cam6_mode_pane_g4_ParamLimits

0x917c,	// (0x000569f6) cam6_mode_pane_g4

0x0003,

0xfbbd,	// (0x0005d437) cam6_mode_pane_g_ParamLimits

0xfbbd,	// (0x0005d437) cam6_mode_pane_g

0xd76a,	// (0x0005afe4) bg_tb_trans_pane_cp08_ParamLimits

0xd76a,	// (0x0005afe4) bg_tb_trans_pane_cp08

0xd778,	// (0x0005aff2) cam6_battery_pane_ParamLimits

0xd778,	// (0x0005aff2) cam6_battery_pane

0xd78e,	// (0x0005b008) cam6_indi_pane_g1_ParamLimits

0xd78e,	// (0x0005b008) cam6_indi_pane_g1

0xd7a0,	// (0x0005b01a) cam6_indi_pane_g2_ParamLimits

0xd7a0,	// (0x0005b01a) cam6_indi_pane_g2

0xd7b2,	// (0x0005b02c) cam6_indi_pane_g3_ParamLimits

0xd7b2,	// (0x0005b02c) cam6_indi_pane_g3

0x0002,

0xfbc6,	// (0x0005d440) cam6_indi_pane_g_ParamLimits

0xfbc6,	// (0x0005d440) cam6_indi_pane_g

0xd7c4,	// (0x0005b03e) cam6_indi_pane_t1_ParamLimits

0xd7c4,	// (0x0005b03e) cam6_indi_pane_t1

0x7eb7,	// (0x00055731) cam6_autofocus_pane_g1

0x7eaf,	// (0x00055729) cam6_autofocus_pane_g2

0x7ec7,	// (0x00055741) cam6_autofocus_pane_g3

0x7ebf,	// (0x00055739) cam6_autofocus_pane_g4

0x0003,

0xfbcd,	// (0x0005d447) cam6_autofocus_pane_g

0xd7ea,	// (0x0005b064) cam6_timer_pane_g1

0xd7f2,	// (0x0005b06c) cam6_timer_pane_t1

0xd800,	// (0x0005b07a) cam6_zoom_cont_pane

0xd808,	// (0x0005b082) cam6_zoom_pane_g1

0xd810,	// (0x0005b08a) cam6_zoom_pane_g2

0x918c,	// (0x00056a06) cam6_zoom_pane_g3

0x0002,

0xfbd6,	// (0x0005d450) cam6_zoom_pane_g

0xc664,	// (0x00059ede) cam6_battery_pane_g1

0xc664,	// (0x00059ede) cam6_battery_pane_g2

0x0001,

0xf756,	// (0x0005cfd0) cam6_battery_pane_g

0xd818,	// (0x0005b092) cam6_zoom_cont_pane_g1

0xd821,	// (0x0005b09b) cam6_zoom_cont_pane_g2

0xd82a,	// (0x0005b0a4) cam6_zoom_cont_pane_g3

0x0002,

0xfbdd,	// (0x0005d457) cam6_zoom_cont_pane_g

0x91a9,	// (0x00056a23) cam6_mode_pane_cp_ParamLimits

0x91a9,	// (0x00056a23) cam6_mode_pane_cp

0x91bb,	// (0x00056a35) cam6_zoom_pane_cp_ParamLimits

0x91bb,	// (0x00056a35) cam6_zoom_pane_cp

0x91c7,	// (0x00056a41) vid6_image_uncrop_cif_pane_ParamLimits

0x91c7,	// (0x00056a41) vid6_image_uncrop_cif_pane

0x91d5,	// (0x00056a4f) vid6_image_uncrop_nhd_pane_ParamLimits

0x91d5,	// (0x00056a4f) vid6_image_uncrop_nhd_pane

0x91e2,	// (0x00056a5c) vid6_image_uncrop_vga_pane_ParamLimits

0x91e2,	// (0x00056a5c) vid6_image_uncrop_vga_pane

0x91ef,	// (0x00056a69) vid6_image_uncrop_wvga_pane_ParamLimits

0x91ef,	// (0x00056a69) vid6_image_uncrop_wvga_pane

0x91fc,	// (0x00056a76) vid6_indi_pane_ParamLimits

0x91fc,	// (0x00056a76) vid6_indi_pane

0xd76a,	// (0x0005afe4) bg_tb_trans_pane_cp09_ParamLimits

0xd76a,	// (0x0005afe4) bg_tb_trans_pane_cp09

0xd83e,	// (0x0005b0b8) cam6_battery_pane_cp_ParamLimits

0xd83e,	// (0x0005b0b8) cam6_battery_pane_cp

0xd84a,	// (0x0005b0c4) vid6_indi_pane_g1_ParamLimits

0xd84a,	// (0x0005b0c4) vid6_indi_pane_g1

0xd85c,	// (0x0005b0d6) vid6_indi_pane_g2_ParamLimits

0xd85c,	// (0x0005b0d6) vid6_indi_pane_g2

0xd86e,	// (0x0005b0e8) vid6_indi_pane_g3_ParamLimits

0xd86e,	// (0x0005b0e8) vid6_indi_pane_g3

0xd883,	// (0x0005b0fd) vid6_indi_pane_g4_ParamLimits

0xd883,	// (0x0005b0fd) vid6_indi_pane_g4

0xd898,	// (0x0005b112) vid6_indi_pane_g5_ParamLimits

0xd898,	// (0x0005b112) vid6_indi_pane_g5

0x0004,

0xfbe4,	// (0x0005d45e) vid6_indi_pane_g_ParamLimits

0xfbe4,	// (0x0005d45e) vid6_indi_pane_g

0xd8b2,	// (0x0005b12c) vid6_indi_pane_t1_ParamLimits

0xd8b2,	// (0x0005b12c) vid6_indi_pane_t1

0xd8c8,	// (0x0005b142) vid6_indi_pane_t2_ParamLimits

0xd8c8,	// (0x0005b142) vid6_indi_pane_t2

0xd8f0,	// (0x0005b16a) vid6_indi_pane_t3_ParamLimits

0xd8f0,	// (0x0005b16a) vid6_indi_pane_t3

0xd918,	// (0x0005b192) vid6_indi_pane_t4_ParamLimits

0xd918,	// (0x0005b192) vid6_indi_pane_t4

0x0003,

0xfbef,	// (0x0005d469) vid6_indi_pane_t_ParamLimits

0xfbef,	// (0x0005d469) vid6_indi_pane_t

0xd93c,	// (0x0005b1b6) wait_bar_pane_cp08

0x9213,	// (0x00056a8d) main_cset_text2_pane_t1_ParamLimits

0x9213,	// (0x00056a8d) main_cset_text2_pane_t1

0x9194,	// (0x00056a0e) listscroll_gen_pane_cp06_t1_ParamLimits

0x9194,	// (0x00056a0e) listscroll_gen_pane_cp06_t1

0x0e8f,	// (0x0004e709) main_cam6_set_pane

0x7d75,	// (0x000555ef) bg_tb_trans_pane_cp06_ParamLimits

0x7d83,	// (0x000555fd) cam4_indicators_pane_g1_ParamLimits

0x7d90,	// (0x0005560a) cam4_indicators_pane_g2_ParamLimits

0xf963,	// (0x0005d1dd) cam4_indicators_pane_g_ParamLimits

0x7da8,	// (0x00055622) cam4_indicators_pane_t1_ParamLimits

0xefe5,	// (0x0005c85f) bg_tb_trans_pane_cp07_ParamLimits

0x7d83,	// (0x000555fd) vid4_indicators_pane_g1_ParamLimits

0x7e77,	// (0x000556f1) vid4_indicators_pane_g2_ParamLimits

0x7e84,	// (0x000556fe) vid4_indicators_pane_g3_ParamLimits

0x7e91,	// (0x0005570b) vid4_indicators_pane_g4_ParamLimits

0xf975,	// (0x0005d1ef) vid4_indicators_pane_g_ParamLimits

0x7e9d,	// (0x00055717) vid4_indicators_pane_t1_ParamLimits

0xf08e,	// (0x0005c908) vid4_progress_pane_g1_ParamLimits

0xf09d,	// (0x0005c917) vid4_progress_pane_g2_ParamLimits

0xf0ac,	// (0x0005c926) vid4_progress_pane_g3_ParamLimits

0xf0bb,	// (0x0005c935) vid4_progress_pane_g4_ParamLimits

0xfb20,	// (0x0005d39a) vid4_progress_pane_g_ParamLimits

0xf0d3,	// (0x0005c94d) vid4_progress_pane_t1_ParamLimits

0xf0e9,	// (0x0005c963) vid4_progress_pane_t2_ParamLimits

0xf0fe,	// (0x0005c978) vid4_progress_pane_t3_ParamLimits

0xfb2b,	// (0x0005d3a5) vid4_progress_pane_t_ParamLimits

0xf113,	// (0x0005c98d) wait_bar_pane_cp07_ParamLimits

0x922d,	// (0x00056aa7) main_cam6_set_pane_g2_ParamLimits

0x922d,	// (0x00056aa7) main_cam6_set_pane_g2

0x924f,	// (0x00056ac9) main_cset6_listscroll_pane_ParamLimits

0x924f,	// (0x00056ac9) main_cset6_listscroll_pane

0x9269,	// (0x00056ae3) main_cset6_slider_pane_ParamLimits

0x9269,	// (0x00056ae3) main_cset6_slider_pane

0x927f,	// (0x00056af9) main_cset6_text2_pane_ParamLimits

0x927f,	// (0x00056af9) main_cset6_text2_pane

0xd94c,	// (0x0005b1c6) main_cset6_text_pane

0xd169,	// (0x0005a9e3) main_cset_list_pane_copy1_ParamLimits

0xd169,	// (0x0005a9e3) main_cset_list_pane_copy1

0xd179,	// (0x0005a9f3) scroll_pane_cp028_copy1

0x928d,	// (0x00056b07) cset_list_set_pane_copy1

0x929f,	// (0x00056b19) aid_position_infowindow_above_copy1

0x92a7,	// (0x00056b21) aid_position_infowindow_below_copy1

0x92af,	// (0x00056b29) cset_list_set_pane_g1_copy1

0x8693,	// (0x00055f0d) cset_list_set_pane_g3_copy1_ParamLimits

0x8693,	// (0x00055f0d) cset_list_set_pane_g3_copy1

0x92b7,	// (0x00056b31) cset_list_set_pane_t1_copy1_ParamLimits

0x92b7,	// (0x00056b31) cset_list_set_pane_t1_copy1

0x1970,	// (0x0004f1ea) list_highlight_pane_cp021_copy1_ParamLimits

0x1970,	// (0x0004f1ea) list_highlight_pane_cp021_copy1

0xd954,	// (0x0005b1ce) cset6_slider_pane_ParamLimits

0xd954,	// (0x0005b1ce) cset6_slider_pane

0xd980,	// (0x0005b1fa) main_cset6_slider_pane_g1_ParamLimits

0xd980,	// (0x0005b1fa) main_cset6_slider_pane_g1

0x92cc,	// (0x00056b46) main_cset6_slider_pane_g2_ParamLimits

0x92cc,	// (0x00056b46) main_cset6_slider_pane_g2

0xd18e,	// (0x0005aa08) main_cset6_slider_pane_g3_ParamLimits

0xd18e,	// (0x0005aa08) main_cset6_slider_pane_g3

0x8491,	// (0x00055d0b) main_cset6_slider_pane_g4_ParamLimits

0x8491,	// (0x00055d0b) main_cset6_slider_pane_g4

0x84d9,	// (0x00055d53) main_cset6_slider_pane_g5_ParamLimits

0x84d9,	// (0x00055d53) main_cset6_slider_pane_g5

0xd18e,	// (0x0005aa08) main_cset6_slider_pane_g7_ParamLimits

0xd18e,	// (0x0005aa08) main_cset6_slider_pane_g7

0xd19a,	// (0x0005aa14) main_cset6_slider_pane_g8_ParamLimits

0xd19a,	// (0x0005aa14) main_cset6_slider_pane_g8

0x8479,	// (0x00055cf3) main_cset6_slider_pane_g9_ParamLimits

0x8479,	// (0x00055cf3) main_cset6_slider_pane_g9

0x8485,	// (0x00055cff) main_cset6_slider_pane_g10_ParamLimits

0x8485,	// (0x00055cff) main_cset6_slider_pane_g10

0x8491,	// (0x00055d0b) main_cset6_slider_pane_g11_ParamLimits

0x8491,	// (0x00055d0b) main_cset6_slider_pane_g11

0x849d,	// (0x00055d17) main_cset6_slider_pane_g12_ParamLimits

0x849d,	// (0x00055d17) main_cset6_slider_pane_g12

0x84a9,	// (0x00055d23) main_cset6_slider_pane_g13_ParamLimits

0x84a9,	// (0x00055d23) main_cset6_slider_pane_g13

0x84b5,	// (0x00055d2f) main_cset6_slider_pane_g14_ParamLimits

0x84b5,	// (0x00055d2f) main_cset6_slider_pane_g14

0x92f4,	// (0x00056b6e) main_cset6_slider_pane_g15_ParamLimits

0x92f4,	// (0x00056b6e) main_cset6_slider_pane_g15

0x84d9,	// (0x00055d53) main_cset6_slider_pane_g16_ParamLimits

0x84d9,	// (0x00055d53) main_cset6_slider_pane_g16

0x84e5,	// (0x00055d5f) main_cset6_slider_pane_g17_ParamLimits

0x84e5,	// (0x00055d5f) main_cset6_slider_pane_g17

0x0011,

0xfbf8,	// (0x0005d472) main_cset6_slider_pane_g_ParamLimits

0xfbf8,	// (0x0005d472) main_cset6_slider_pane_g

0xd9a8,	// (0x0005b222) main_cset6_slider_pane_t1_ParamLimits

0xd9a8,	// (0x0005b222) main_cset6_slider_pane_t1

0xd9e9,	// (0x0005b263) main_cset6_slider_pane_t2_ParamLimits

0xd9e9,	// (0x0005b263) main_cset6_slider_pane_t2

0xda14,	// (0x0005b28e) main_cset6_slider_pane_t3_ParamLimits

0xda14,	// (0x0005b28e) main_cset6_slider_pane_t3

0x930c,	// (0x00056b86) main_cset6_slider_pane_t4_ParamLimits

0x930c,	// (0x00056b86) main_cset6_slider_pane_t4

0x9337,	// (0x00056bb1) main_cset6_slider_pane_t5_ParamLimits

0x9337,	// (0x00056bb1) main_cset6_slider_pane_t5

0xda3f,	// (0x0005b2b9) main_cset6_slider_pane_t7_ParamLimits

0xda3f,	// (0x0005b2b9) main_cset6_slider_pane_t7

0x9362,	// (0x00056bdc) main_cset6_slider_pane_t8_ParamLimits

0x9362,	// (0x00056bdc) main_cset6_slider_pane_t8

0x9386,	// (0x00056c00) main_cset6_slider_pane_t9_ParamLimits

0x9386,	// (0x00056c00) main_cset6_slider_pane_t9

0x93aa,	// (0x00056c24) main_cset6_slider_pane_t10_ParamLimits

0x93aa,	// (0x00056c24) main_cset6_slider_pane_t10

0x93ce,	// (0x00056c48) main_cset6_slider_pane_t11_ParamLimits

0x93ce,	// (0x00056c48) main_cset6_slider_pane_t11

0xda75,	// (0x0005b2ef) main_cset6_slider_pane_t14_ParamLimits

0xda75,	// (0x0005b2ef) main_cset6_slider_pane_t14

0xdaae,	// (0x0005b328) main_cset6_slider_pane_t15_ParamLimits

0xdaae,	// (0x0005b328) main_cset6_slider_pane_t15

0x000b,

0xfc1d,	// (0x0005d497) main_cset6_slider_pane_t_ParamLimits

0xfc1d,	// (0x0005d497) main_cset6_slider_pane_t

0xdae7,	// (0x0005b361) cset_slider_pane_g1_copy1

0xdaf0,	// (0x0005b36a) cset_slider_pane_g2_copy1

0xdaf9,	// (0x0005b373) cset_slider_pane_g3_copy1

0x0e8f,	// (0x0004e709) bg_popup_sub_pane_cp011_copy1

0xd2f3,	// (0x0005ab6d) main_cset_text_pane_g1_copy1

0xd2fb,	// (0x0005ab75) main_cset_text_pane_t1_copy1

0xd309,	// (0x0005ab83) main_cset_text_pane_t2_copy1

0xd317,	// (0x0005ab91) main_cset_text_pane_t3_copy1

0xd325,	// (0x0005ab9f) main_cset_text_pane_t4_copy1

0xd333,	// (0x0005abad) main_cset_text_pane_t5_copy1

0xd341,	// (0x0005abbb) main_cset_text_pane_t6_copy1

0xd34f,	// (0x0005abc9) main_cset_text_pane_t7_copy1

0x93f2,	// (0x00056c6c) main_cset_text2_pane_t1_copy1

0x0e8f,	// (0x0004e709) main_ncimui_pane

0x5e56,	// (0x000536d0) popup_query_ncimui_window_ParamLimits

0x5e56,	// (0x000536d0) popup_query_ncimui_window

0xc934,	// (0x0005a1ae) field_cale_ev2_pane_g4_ParamLimits

0xc934,	// (0x0005a1ae) field_cale_ev2_pane_g4

0x7812,	// (0x0005508c) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7812,	// (0x0005508c) cell_video_dialer_keypad_pane_g2

0x0001,

0xf90a,	// (0x0005d184) cell_video_dialer_keypad_pane_g_ParamLimits

0xf90a,	// (0x0005d184) cell_video_dialer_keypad_pane_g

0x782a,	// (0x000550a4) cell_video_dialer_keypad_pane_t1

0x0e8f,	// (0x0004e709) bg_popup_window_pane_cp012

0xaacc,	// (0x00058346) heading_pane_cp06

0xdbeb,	// (0x0005b465) ncim_query_content_pane

0x0e8f,	// (0x0004e709) bg_popup_heading_pane_cp01

0xdbf3,	// (0x0005b46d) ncim_heading_pane_t1

0xdc01,	// (0x0005b47b) ncim_indicator_popup_pane

0xdc13,	// (0x0005b48d) ncim_query_button_pane

0xdc27,	// (0x0005b4a1) ncim_query_content_pane_t1

0xdc39,	// (0x0005b4b3) ncim_query_content_pane_t2

0x0005,

0xfc5c,	// (0x0005d4d6) ncim_query_content_pane_t

0xdc73,	// (0x0005b4ed) ncim_query_list_pane

0xdc85,	// (0x0005b4ff) ncim_query_popup_pane

0xdc01,	// (0x0005b47b) ncim_indicator_popup_pane_ParamLimits

0x94d2,	// (0x00056d4c) ncim_query_content_pane_g1_ParamLimits

0x94d2,	// (0x00056d4c) ncim_query_content_pane_g1

0xdc27,	// (0x0005b4a1) ncim_query_content_pane_t1_ParamLimits

0xdc39,	// (0x0005b4b3) ncim_query_content_pane_t2_ParamLimits

0x94de,	// (0x00056d58) ncim_query_content_pane_t3_ParamLimits

0x94de,	// (0x00056d58) ncim_query_content_pane_t3

0x9506,	// (0x00056d80) ncim_query_content_pane_t4_ParamLimits

0x9506,	// (0x00056d80) ncim_query_content_pane_t4

0x952e,	// (0x00056da8) ncim_query_content_pane_t5_ParamLimits

0x952e,	// (0x00056da8) ncim_query_content_pane_t5

0xdc4b,	// (0x0005b4c5) ncim_query_content_pane_t6_ParamLimits

0xdc4b,	// (0x0005b4c5) ncim_query_content_pane_t6

0xfc5c,	// (0x0005d4d6) ncim_query_content_pane_t_ParamLimits

0xdc73,	// (0x0005b4ed) ncim_query_list_pane_ParamLimits

0xdc85,	// (0x0005b4ff) ncim_query_popup_pane_ParamLimits

0xdc99,	// (0x0005b513) wait_bar_pane_cp04

0x0e8f,	// (0x0004e709) input_focus_pane_cp011

0xdca1,	// (0x0005b51b) ncim_query_popup_pane_t1

0xdcaf,	// (0x0005b529) ncim_list_query_list_pane_ParamLimits

0xdcaf,	// (0x0005b529) ncim_list_query_list_pane

0x0e8f,	// (0x0004e709) bg_button_pane_cp027

0xdcc2,	// (0x0005b53c) ncim_query_button_pane_g1

0x0e8f,	// (0x0004e709) list_highlight_pane_cp012

0xdccc,	// (0x0005b546) ncim_list_query_list_pane_g1

0xdcd4,	// (0x0005b54e) ncim_list_query_list_pane_t1

0x7d9c,	// (0x00055616) cam4_indicators_pane_g3_ParamLimits

0x7d9c,	// (0x00055616) cam4_indicators_pane_g3

0x7d9c,	// (0x00055616) vid4_indicators_pane_g5_ParamLimits

0x7d9c,	// (0x00055616) vid4_indicators_pane_g5

0xf0c7,	// (0x0005c941) vid4_progress_pane_g5_ParamLimits

0xf0c7,	// (0x0005c941) vid4_progress_pane_g5

0x941c,	// (0x00056c96) main_ncimui_pane_g1

0x9462,	// (0x00056cdc) ncimui_group_query_pane_ParamLimits

0x9462,	// (0x00056cdc) ncimui_group_query_pane

0x9496,	// (0x00056d10) ncimui_list_pane_ParamLimits

0x9496,	// (0x00056d10) ncimui_list_pane

0x94ae,	// (0x00056d28) ncimui_text_pane_ParamLimits

0x94ae,	// (0x00056d28) ncimui_text_pane

0x9556,	// (0x00056dd0) ncimui_text_pane_t1_ParamLimits

0x9556,	// (0x00056dd0) ncimui_text_pane_t1

0xdce2,	// (0x0005b55c) ncimui_list_single_graphic_pane_ParamLimits

0xdce2,	// (0x0005b55c) ncimui_list_single_graphic_pane

0x9573,	// (0x00056ded) ncimui_query_pane_ParamLimits

0x9573,	// (0x00056ded) ncimui_query_pane

0x0e8f,	// (0x0004e709) list_highlight_pane_cp013

0xdcef,	// (0x0005b569) ncim_list_query_list_pane_t1_copy1

0xdcfd,	// (0x0005b577) ncim_list_single_graphic_pane_g1

0xdd05,	// (0x0005b57f) ncim_query_button_pane_cp01

0xdd0d,	// (0x0005b587) ncim_query_entry_pane_ParamLimits

0xdd0d,	// (0x0005b587) ncim_query_entry_pane

0xdd1d,	// (0x0005b597) ncimui_query_pane_g1

0xdd25,	// (0x0005b59f) ncimui_query_pane_t1_ParamLimits

0xdd25,	// (0x0005b59f) ncimui_query_pane_t1

0x0e8f,	// (0x0004e709) input_focus_pane_cp012

0xdca1,	// (0x0005b51b) ncim_query_entry_pane_t1

0x1615,	// (0x0004ee8f) main_im_pane_ParamLimits

0x1970,	// (0x0004f1ea) main_mobtv_pane_ParamLimits

0x1970,	// (0x0004f1ea) main_mobtv_pane

0x8479,	// (0x00055cf3) main_cset6_slider_pane_g18_ParamLimits

0x8479,	// (0x00055cf3) main_cset6_slider_pane_g18

0x84a9,	// (0x00055d23) main_cset6_slider_pane_g19_ParamLimits

0x84a9,	// (0x00055d23) main_cset6_slider_pane_g19

0xdd3b,	// (0x0005b5b5) bg_main_mobtv_pane_ParamLimits

0xdd3b,	// (0x0005b5b5) bg_main_mobtv_pane

0x9583,	// (0x00056dfd) main_mobtv_info_pane

0x958c,	// (0x00056e06) main_mobtv_loading_pane_ParamLimits

0x958c,	// (0x00056e06) main_mobtv_loading_pane

0xdd49,	// (0x0005b5c3) main_mobtv_pg_channel_list_pane

0xdd53,	// (0x0005b5cd) main_mobtv_pg_hdr_pane

0x9599,	// (0x00056e13) main_mobtv_programe_curr_pane_ParamLimits

0x9599,	// (0x00056e13) main_mobtv_programe_curr_pane

0x95a6,	// (0x00056e20) main_mobtv_programe_next_pane_ParamLimits

0x95a6,	// (0x00056e20) main_mobtv_programe_next_pane

0xdd5c,	// (0x0005b5d6) popup_mobtv_noti_window

0xc664,	// (0x00059ede) main_tv_pg_hdr_pane_g1

0xdd64,	// (0x0005b5de) main_tv_pg_hdr_pane_g2

0xdd6c,	// (0x0005b5e6) main_tv_pg_hdr_pane_g3

0xdd74,	// (0x0005b5ee) main_tv_pg_hdr_pane_g4

0xdd7c,	// (0x0005b5f6) main_tv_pg_hdr_pane_g5

0xdd84,	// (0x0005b5fe) main_tv_pg_hdr_pane_g6

0xdd8c,	// (0x0005b606) main_tv_pg_hdr_pane_g7

0xdd94,	// (0x0005b60e) main_tv_pg_hdr_pane_g8

0xdd9c,	// (0x0005b616) main_tv_pg_hdr_pane_g9

0xdda4,	// (0x0005b61e) main_tv_pg_hdr_pane_g10

0xddae,	// (0x0005b628) main_tv_pg_hdr_pane_g11

0x000a,

0xfc69,	// (0x0005d4e3) main_tv_pg_hdr_pane_g

0xddb8,	// (0x0005b632) main_tv_pg_hdr_pane_t1

0xddc6,	// (0x0005b640) main_tv_pg_hdr_pane_t2

0xddd4,	// (0x0005b64e) main_tv_pg_hdr_pane_t3

0xdde2,	// (0x0005b65c) main_tv_pg_hdr_pane_t4

0xddf0,	// (0x0005b66a) main_tv_pg_hdr_pane_t5

0x0004,

0xfc80,	// (0x0005d4fa) main_tv_pg_hdr_pane_t

0xddfe,	// (0x0005b678) single_mobtv_pg_channel_pane_ParamLimits

0xddfe,	// (0x0005b678) single_mobtv_pg_channel_pane

0xde10,	// (0x0005b68a) single_mobtv_pg_channel_table_pane

0xde19,	// (0x0005b693) single_mobtv_pg_channel_thumb_pane

0xde22,	// (0x0005b69c) single_tv_pg_channel_pane_g1

0xde2b,	// (0x0005b6a5) single_tv_pg_channel_pane_g2

0x0001,

0xfc8b,	// (0x0005d505) single_tv_pg_channel_pane_g

0xc893,	// (0x0005a10d) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc893,	// (0x0005a10d) bg_single_mobtv_pg_channel_thumb_pane

0xde34,	// (0x0005b6ae) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xde34,	// (0x0005b6ae) single_mobtv_pg_channel_thumb_pane_g1

0xde42,	// (0x0005b6bc) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xde42,	// (0x0005b6bc) single_mobtv_pg_channel_thumb_pane_g2

0xde4e,	// (0x0005b6c8) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xde4e,	// (0x0005b6c8) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc90,	// (0x0005d50a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc90,	// (0x0005d50a) single_mobtv_pg_channel_thumb_pane_g

0xde5a,	// (0x0005b6d4) single_mobtv_pg_channel_thumb_pane_t1

0xde68,	// (0x0005b6e2) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc97,	// (0x0005d511) single_mobtv_pg_channel_thumb_pane_t

0xc664,	// (0x00059ede) bg_single_mobtv_pg_channel_table_pane_g1

0xc664,	// (0x00059ede) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf756,	// (0x0005cfd0) bg_single_mobtv_pg_channel_table_pane_g

0xde76,	// (0x0005b6f0) single_mobtv_pg_channel_table_pane_t1

0xde84,	// (0x0005b6fe) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc9c,	// (0x0005d516) single_mobtv_pg_channel_table_pane_t

0x95bb,	// (0x00056e35) main_mobtv_info_pane_g1_ParamLimits

0x95bb,	// (0x00056e35) main_mobtv_info_pane_g1

0x95d7,	// (0x00056e51) main_mobtv_info_pane_t1_ParamLimits

0x95d7,	// (0x00056e51) main_mobtv_info_pane_t1

0x963d,	// (0x00056eb7) main_mobtv_info_pane_t2_ParamLimits

0x963d,	// (0x00056eb7) main_mobtv_info_pane_t2

0x0002,

0xfca6,	// (0x0005d520) main_mobtv_info_pane_t_ParamLimits

0xfca6,	// (0x0005d520) main_mobtv_info_pane_t

0x96c0,	// (0x00056f3a) wait_bar_pane_cp05

0x96d0,	// (0x00056f4a) main_mobtv_loading_pane_g1_ParamLimits

0x96d0,	// (0x00056f4a) main_mobtv_loading_pane_g1

0x96e1,	// (0x00056f5b) main_mobtv_loading_pane_g2_ParamLimits

0x96e1,	// (0x00056f5b) main_mobtv_loading_pane_g2

0x96ed,	// (0x00056f67) main_mobtv_loading_pane_g3_ParamLimits

0x96ed,	// (0x00056f67) main_mobtv_loading_pane_g3

0x0002,

0xfcad,	// (0x0005d527) main_mobtv_loading_pane_g_ParamLimits

0xfcad,	// (0x0005d527) main_mobtv_loading_pane_g

0xde92,	// (0x0005b70c) main_mobtv_loading_pane_t1_ParamLimits

0xde92,	// (0x0005b70c) main_mobtv_loading_pane_t1

0xdeaa,	// (0x0005b724) main_mobtv_loading_pane_t2_ParamLimits

0xdeaa,	// (0x0005b724) main_mobtv_loading_pane_t2

0x0001,

0xfcb4,	// (0x0005d52e) main_mobtv_loading_pane_t_ParamLimits

0xfcb4,	// (0x0005d52e) main_mobtv_loading_pane_t

0x96fe,	// (0x00056f78) wait_bar_pane_cp06_ParamLimits

0x96fe,	// (0x00056f78) wait_bar_pane_cp06

0xdece,	// (0x0005b748) main_mobtv_programe_curr_pane_t1

0xdedc,	// (0x0005b756) main_mobtv_programe_curr_pane_t2

0x0001,

0xfcb9,	// (0x0005d533) main_mobtv_programe_curr_pane_t

0xdeea,	// (0x0005b764) main_mobtv_programe_next_pane_t1

0xdef8,	// (0x0005b772) main_mobtv_programe_next_pane_t2

0xdf06,	// (0x0005b780) main_mobtv_programe_next_pane_t3

0x0002,

0xfcbe,	// (0x0005d538) main_mobtv_programe_next_pane_t

0x0e8f,	// (0x0004e709) bg_popup_mobtv_noti_window_pane

0xdf14,	// (0x0005b78e) popup_mobtv_noti_window_g1

0xdf1c,	// (0x0005b796) popup_mobtv_noti_window_t1

0xdf2a,	// (0x0005b7a4) popup_mobtv_noti_window_t2

0x0001,

0xfcc5,	// (0x0005d53f) popup_mobtv_noti_window_t

0xc664,	// (0x00059ede) bg_popup_mobtv_noti_window_pane_g1

0x0e8f,	// (0x0004e709) sc_clock_pane

0x0e8f,	// (0x0004e709) main_fs_bigclock_pane

0x8f7c,	// (0x000567f6) blid2_tripm_pane_t4_ParamLimits

0x8f7c,	// (0x000567f6) blid2_tripm_pane_t4

0x970d,	// (0x00056f87) sc_clock_pane_g1_ParamLimits

0x970d,	// (0x00056f87) sc_clock_pane_g1

0x971f,	// (0x00056f99) sc_clock_pane_t1_ParamLimits

0x971f,	// (0x00056f99) sc_clock_pane_t1

0x9741,	// (0x00056fbb) sc_clock_pane_t2_ParamLimits

0x9741,	// (0x00056fbb) sc_clock_pane_t2

0x9757,	// (0x00056fd1) sc_clock_pane_t3_ParamLimits

0x9757,	// (0x00056fd1) sc_clock_pane_t3

0x0004,

0xfcca,	// (0x0005d544) sc_clock_pane_t_ParamLimits

0xfcca,	// (0x0005d544) sc_clock_pane_t

0xe56b,	// (0x0005bde5) main_fs_bigclock_indicator_pane_ParamLimits

0xe56b,	// (0x0005bde5) main_fs_bigclock_indicator_pane

0xc863,	// (0x0005a0dd) main_fs_bigclock_pane_g1_ParamLimits

0xc863,	// (0x0005a0dd) main_fs_bigclock_pane_g1

0xe577,	// (0x0005bdf1) main_fs_bigclock_pane_t1_ParamLimits

0xe577,	// (0x0005bdf1) main_fs_bigclock_pane_t1

0xe589,	// (0x0005be03) main_fs_bigclock_pane_t2_ParamLimits

0xe589,	// (0x0005be03) main_fs_bigclock_pane_t2

0xe59b,	// (0x0005be15) main_fs_bigclock_pane_t3_ParamLimits

0xe59b,	// (0x0005be15) main_fs_bigclock_pane_t3

0x0002,

0xfec4,	// (0x0005d73e) main_fs_bigclock_pane_t_ParamLimits

0xfec4,	// (0x0005d73e) main_fs_bigclock_pane_t

0x1b40,	// (0x0004f3ba) main_fs_bigclock_indicator_pane_g1

0xdc1b,	// (0x0005b495) ncim_query_content_pane_g2_ParamLimits

0xdc1b,	// (0x0005b495) ncim_query_content_pane_g2

0x0001,

0xfc57,	// (0x0005d4d1) ncim_query_content_pane_g_ParamLimits

0xfc57,	// (0x0005d4d1) ncim_query_content_pane_g

0x976c,	// (0x00056fe6) sc_clock_pane_t4_ParamLimits

0x976c,	// (0x00056fe6) sc_clock_pane_t4

0x1970,	// (0x0004f1ea) main_radioblah_pane

0xcf8b,	// (0x0005a805) cell_call4_button_pane_t1_copy1_ParamLimits

0xcf8b,	// (0x0005a805) cell_call4_button_pane_t1_copy1

0x9424,	// (0x00056c9e) main_ncimui_pane_t1_ParamLimits

0x9424,	// (0x00056c9e) main_ncimui_pane_t1

0x9436,	// (0x00056cb0) main_ncimui_pane_t2_ParamLimits

0x9436,	// (0x00056cb0) main_ncimui_pane_t2

0x0002,

0xfc50,	// (0x0005d4ca) main_ncimui_pane_t_ParamLimits

0xfc50,	// (0x0005d4ca) main_ncimui_pane_t

0xe054,	// (0x0005b8ce) main_radioblah_anim_pane_ParamLimits

0xe054,	// (0x0005b8ce) main_radioblah_anim_pane

0xe065,	// (0x0005b8df) main_radioblah_info_pane_ParamLimits

0xe065,	// (0x0005b8df) main_radioblah_info_pane

0xe079,	// (0x0005b8f3) main_radioblah_pane_t1_ParamLimits

0xe079,	// (0x0005b8f3) main_radioblah_pane_t1

0xe095,	// (0x0005b90f) main_radioblah_pane_t2_ParamLimits

0xe095,	// (0x0005b90f) main_radioblah_pane_t2

0x0003,

0xfceb,	// (0x0005d565) main_radioblah_pane_t_ParamLimits

0xfceb,	// (0x0005d565) main_radioblah_pane_t

0x9803,	// (0x0005707d) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9803,	// (0x0005707d) main_radioblah_rocker_ctrl_pane

0xe0dd,	// (0x0005b957) main_radioblah_info_pane_t1_ParamLimits

0xe0dd,	// (0x0005b957) main_radioblah_info_pane_t1

0x9857,	// (0x000570d1) main_radioblah_info_pane_t2_ParamLimits

0x9857,	// (0x000570d1) main_radioblah_info_pane_t2

0x0003,

0xfcf4,	// (0x0005d56e) main_radioblah_info_pane_t_ParamLimits

0xfcf4,	// (0x0005d56e) main_radioblah_info_pane_t

0xc664,	// (0x00059ede) main_radioblah_rocker_ctrl_pane_g1

0x9905,	// (0x0005717f) main_radioblah_rocker_ctrl_pane_g2

0x990d,	// (0x00057187) main_radioblah_rocker_ctrl_pane_g3

0x9915,	// (0x0005718f) main_radioblah_rocker_ctrl_pane_g4

0x991d,	// (0x00057197) main_radioblah_rocker_ctrl_pane_g5

0x9925,	// (0x0005719f) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcfd,	// (0x0005d577) main_radioblah_rocker_ctrl_pane_g

0x93f2,	// (0x00056c6c) main_cset_text2_pane_t1_copy1_ParamLimits

0xefcd,	// (0x0005c847) cam4_image_uncrop_qvga_pane

0xefdd,	// (0x0005c857) vid4_image_uncrop_qcif_pane

0xf123,	// (0x0005c99d) cam6_image_uncrop_qvga_pane_ParamLimits

0xf123,	// (0x0005c99d) cam6_image_uncrop_qvga_pane

0xd832,	// (0x0005b0ac) vid6_image_uncrop_qcif_pane_ParamLimits

0xd832,	// (0x0005b0ac) vid6_image_uncrop_qcif_pane

0x0e8f,	// (0x0004e709) bg_popup_preview_window_pane_cp03

0xdbcd,	// (0x0005b447) list_cset_text2_pane

0xdbd5,	// (0x0005b44f) main_cset6_text2_pane_g1

0xdbdd,	// (0x0005b457) main_cset6_text2_pane_t1

0x992d,	// (0x000571a7) list_cset_text2_pane_t1_ParamLimits

0x992d,	// (0x000571a7) list_cset_text2_pane_t1

0x1970,	// (0x0004f1ea) main_radioblah_pane_ParamLimits

0x96ae,	// (0x00056f28) main_mobtv_info_pane_t3_ParamLimits

0x96ae,	// (0x00056f28) main_mobtv_info_pane_t3

0x97f1,	// (0x0005706b) main_radioblah_pane_g1

0x982b,	// (0x000570a5) main_radioblah_info_pane_g1

0x98aa,	// (0x00057124) main_radioblah_info_pane_t3_ParamLimits

0x98aa,	// (0x00057124) main_radioblah_info_pane_t3

0x4b05,	// (0x0005237f) highlight_cell_cale_month_pane_ParamLimits

0x4b05,	// (0x0005237f) highlight_cell_cale_month_pane

0x0e8f,	// (0x0004e709) main_phob_fisheye_pane

0xc9dd,	// (0x0005a257) scroll_pane_cp0031_ParamLimits

0xc9dd,	// (0x0005a257) scroll_pane_cp0031

0xd93c,	// (0x0005b1b6) wait_bar_pane_cp08_ParamLimits

0x928d,	// (0x00056b07) cset_list_set_pane_copy1_ParamLimits

0xe117,	// (0x0005b991) highlight_cell_cale_month_pane_g1

0x9946,	// (0x000571c0) highlight_cell_cale_month_pane_t1

0xe11f,	// (0x0005b999) list_gen_pane_cp01

0xd179,	// (0x0005a9f3) scroll_pane_01

0x9954,	// (0x000571ce) list_single_double_fisheye_pane

0xe128,	// (0x0005b9a2) list_double_fisheye_pane_g1_ParamLimits

0xe128,	// (0x0005b9a2) list_double_fisheye_pane_g1

0xe134,	// (0x0005b9ae) list_double_fisheye_pane_g2_ParamLimits

0xe134,	// (0x0005b9ae) list_double_fisheye_pane_g2

0x995d,	// (0x000571d7) list_double_fisheye_pane_g3_ParamLimits

0x995d,	// (0x000571d7) list_double_fisheye_pane_g3

0x0004,

0xfd0a,	// (0x0005d584) list_double_fisheye_pane_g_ParamLimits

0xfd0a,	// (0x0005d584) list_double_fisheye_pane_g

0xe165,	// (0x0005b9df) list_double_fisheye_pane_t1_ParamLimits

0xe165,	// (0x0005b9df) list_double_fisheye_pane_t1

0xe180,	// (0x0005b9fa) list_double_fisheye_pane_t2_ParamLimits

0xe180,	// (0x0005b9fa) list_double_fisheye_pane_t2

0x0001,

0xfd15,	// (0x0005d58f) list_double_fisheye_pane_t_ParamLimits

0xfd15,	// (0x0005d58f) list_double_fisheye_pane_t

0x0e8f,	// (0x0004e709) main_call5_pane

0x9795,	// (0x0005700f) sc_swipe_pane_ParamLimits

0x9795,	// (0x0005700f) sc_swipe_pane

0x997a,	// (0x000571f4) call5_image_pane_ParamLimits

0x997a,	// (0x000571f4) call5_image_pane

0x998f,	// (0x00057209) call5_swipe_1_pane_ParamLimits

0x998f,	// (0x00057209) call5_swipe_1_pane

0x99a0,	// (0x0005721a) call5_swipe_2_pane_ParamLimits

0x99a0,	// (0x0005721a) call5_swipe_2_pane

0x99c5,	// (0x0005723f) popup_call5_audio_first_window_ParamLimits

0x99c5,	// (0x0005723f) popup_call5_audio_first_window

0xc893,	// (0x0005a10d) call5_swipe_1_pane_g1_ParamLimits

0xc893,	// (0x0005a10d) call5_swipe_1_pane_g1

0x002f,	// (0x0004d8a9) call5_swipe_1_pane_g2_ParamLimits

0x002f,	// (0x0004d8a9) call5_swipe_1_pane_g2

0x0001,

0xfd1a,	// (0x0005d594) call5_swipe_1_pane_g_ParamLimits

0xfd1a,	// (0x0005d594) call5_swipe_1_pane_g

0x003b,	// (0x0004d8b5) call5_swipe_1_pane_t1_ParamLimits

0x003b,	// (0x0004d8b5) call5_swipe_1_pane_t1

0xc893,	// (0x0005a10d) call5_swipe_2_pane_g1_ParamLimits

0xc893,	// (0x0005a10d) call5_swipe_2_pane_g1

0x0050,	// (0x0004d8ca) call5_swipe_2_pane_g2_ParamLimits

0x0050,	// (0x0004d8ca) call5_swipe_2_pane_g2

0x0001,

0xfd1f,	// (0x0005d599) call5_swipe_2_pane_g_ParamLimits

0xfd1f,	// (0x0005d599) call5_swipe_2_pane_g

0x005c,	// (0x0004d8d6) call5_swipe_2_pane_t1_ParamLimits

0x005c,	// (0x0004d8d6) call5_swipe_2_pane_t1

0x0071,	// (0x0004d8eb) sc_swipe_pane_g1_ParamLimits

0x0071,	// (0x0004d8eb) sc_swipe_pane_g1

0x007e,	// (0x0004d8f8) sc_swipe_pane_g2_ParamLimits

0x007e,	// (0x0004d8f8) sc_swipe_pane_g2

0x0001,

0xfd24,	// (0x0005d59e) sc_swipe_pane_g_ParamLimits

0xfd24,	// (0x0005d59e) sc_swipe_pane_g

0x008a,	// (0x0004d904) sc_swipe_pane_t1_ParamLimits

0x008a,	// (0x0004d904) sc_swipe_pane_t1

0x0e8f,	// (0x0004e709) main_cmail_launcher_pane

0x99d4,	// (0x0005724e) aid_size_cell_cmail_l_ParamLimits

0x99d4,	// (0x0005724e) aid_size_cell_cmail_l

0x99ed,	// (0x00057267) grid_cmail_l_pane_ParamLimits

0x99ed,	// (0x00057267) grid_cmail_l_pane

0x9a02,	// (0x0005727c) cell_cmail_l_pane_ParamLimits

0x9a02,	// (0x0005727c) cell_cmail_l_pane

0x9a24,	// (0x0005729e) cell_cmail_l_pane_g1_ParamLimits

0x9a24,	// (0x0005729e) cell_cmail_l_pane_g1

0x9a34,	// (0x000572ae) cell_cmail_l_pane_t1_ParamLimits

0x9a34,	// (0x000572ae) cell_cmail_l_pane_t1

0x00f3,	// (0x0004d96d) cell_cmail_l_pane_t2_ParamLimits

0x00f3,	// (0x0004d96d) cell_cmail_l_pane_t2

0x0001,

0xfd29,	// (0x0005d5a3) cell_cmail_l_pane_t_ParamLimits

0xfd29,	// (0x0005d5a3) cell_cmail_l_pane_t

0x1970,	// (0x0004f1ea) grid_highlight_pane_cp018_ParamLimits

0x1970,	// (0x0004f1ea) grid_highlight_pane_cp018

0x32cf,	// (0x00050b49) main2_pane_ParamLimits

0x32cf,	// (0x00050b49) main2_pane

0x16c0,	// (0x0004ef3a) popup_sp_fs_action_menu_bg_pane_g1

0x16c8,	// (0x0004ef42) popup_sp_fs_action_menu_bg_pane_g2

0x16d0,	// (0x0004ef4a) popup_sp_fs_action_menu_bg_pane_g3

0x16d8,	// (0x0004ef52) popup_sp_fs_action_menu_bg_pane_g4

0x16e0,	// (0x0004ef5a) popup_sp_fs_action_menu_bg_pane_g5

0x16e8,	// (0x0004ef62) popup_sp_fs_action_menu_bg_pane_g6

0x16f0,	// (0x0004ef6a) popup_sp_fs_action_menu_bg_pane_g7

0x16f8,	// (0x0004ef72) popup_sp_fs_action_menu_bg_pane_g8

0x1700,	// (0x0004ef7a) popup_sp_fs_action_menu_bg_pane_g9

0x1708,	// (0x0004ef82) popup_sp_fs_action_menu_bg_pane_g10

0x1708,	// (0x0004ef82) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x0005ca69) popup_sp_fs_action_menu_bg_pane_g

0xa439,	// (0x00057cb3) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa439,	// (0x00057cb3) list_medium_line_x2_t3_g3_g1

0xa445,	// (0x00057cbf) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa445,	// (0x00057cbf) list_medium_line_x2_t3_g3_g2

0xa451,	// (0x00057ccb) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa451,	// (0x00057ccb) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x0005cb19) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x0005cb19) list_medium_line_x2_t3_g3_g

0xa45d,	// (0x00057cd7) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa45d,	// (0x00057cd7) list_medium_line_x2_t3_g3_t1

0x4000,	// (0x0005187a) list_medium_line_x2_t3_g3_t2_ParamLimits

0x4000,	// (0x0005187a) list_medium_line_x2_t3_g3_t2

0xa472,	// (0x00057cec) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa472,	// (0x00057cec) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x0005cb20) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x0005cb20) list_medium_line_x2_t3_g3_t

0xa439,	// (0x00057cb3) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa439,	// (0x00057cb3) list_medium_line_x2_t3_g2_g1

0xa451,	// (0x00057ccb) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa451,	// (0x00057ccb) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x0005cb27) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x0005cb27) list_medium_line_x2_t3_g2_g

0xa487,	// (0x00057d01) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa487,	// (0x00057d01) list_medium_line_x2_t3_g2_t1

0xa49d,	// (0x00057d17) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa49d,	// (0x00057d17) list_medium_line_x2_t3_g2_t2

0xa472,	// (0x00057cec) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa472,	// (0x00057cec) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x0005cb2c) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x0005cb2c) list_medium_line_x2_t3_g2_t

0xa439,	// (0x00057cb3) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa439,	// (0x00057cb3) list_medium_line_x2_t4_g4_g1

0xa4af,	// (0x00057d29) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa4af,	// (0x00057d29) list_medium_line_x2_t4_g4_g2

0xa445,	// (0x00057cbf) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa445,	// (0x00057cbf) list_medium_line_x2_t4_g4_g3

0xa4bb,	// (0x00057d35) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa4bb,	// (0x00057d35) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x0005cb33) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x0005cb33) list_medium_line_x2_t4_g4_g

0x4012,	// (0x0005188c) list_medium_line_x2_t4_g4_t1_ParamLimits

0x4012,	// (0x0005188c) list_medium_line_x2_t4_g4_t1

0x4029,	// (0x000518a3) list_medium_line_x2_t4_g4_t2_ParamLimits

0x4029,	// (0x000518a3) list_medium_line_x2_t4_g4_t2

0x403e,	// (0x000518b8) list_medium_line_x2_t4_g4_t3_ParamLimits

0x403e,	// (0x000518b8) list_medium_line_x2_t4_g4_t3

0xa4c7,	// (0x00057d41) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa4c7,	// (0x00057d41) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x0005cb3c) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x0005cb3c) list_medium_line_x2_t4_g4_t

0xa439,	// (0x00057cb3) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa439,	// (0x00057cb3) list_medium_line_x2_t2_g4_g1

0xa4af,	// (0x00057d29) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa4af,	// (0x00057d29) list_medium_line_x2_t2_g4_g2

0xa445,	// (0x00057cbf) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa445,	// (0x00057cbf) list_medium_line_x2_t2_g4_g3

0xa451,	// (0x00057ccb) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa451,	// (0x00057ccb) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x0005cba3) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x0005cba3) list_medium_line_x2_t2_g4_g

0xa684,	// (0x00057efe) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa684,	// (0x00057efe) list_medium_line_x2_t2_g4_t1

0xa472,	// (0x00057cec) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa472,	// (0x00057cec) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x0005cbac) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x0005cbac) list_medium_line_x2_t2_g4_t

0xa439,	// (0x00057cb3) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa439,	// (0x00057cb3) list_medium_line_x2_t2_g3_g1

0xa445,	// (0x00057cbf) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa445,	// (0x00057cbf) list_medium_line_x2_t2_g3_g2

0xa451,	// (0x00057ccb) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa451,	// (0x00057ccb) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x0005cb19) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x0005cb19) list_medium_line_x2_t2_g3_g

0xa699,	// (0x00057f13) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa699,	// (0x00057f13) list_medium_line_x2_t2_g3_t1

0xa472,	// (0x00057cec) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa472,	// (0x00057cec) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x0005cbb1) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x0005cbb1) list_medium_line_x2_t2_g3_t

0x4c3d,	// (0x000524b7) main_sp_fs_list_pane_ParamLimits

0x4c3d,	// (0x000524b7) main_sp_fs_list_pane

0x4c4a,	// (0x000524c4) sp_fs_scroll_pane_ParamLimits

0x4c4a,	// (0x000524c4) sp_fs_scroll_pane

0x4c57,	// (0x000524d1) list_medium_line_x2_t3_t1

0x4c67,	// (0x000524e1) list_medium_line_x2_t3_t2

0xa8d1,	// (0x0005814b) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x0005cbfc) list_medium_line_x2_t3_t

0x4c75,	// (0x000524ef) list_medium_line_x3_t4_t1

0x4c85,	// (0x000524ff) list_medium_line_x3_t4_t2

0xa8df,	// (0x00058159) list_medium_line_x3_t4_t3

0xa8ed,	// (0x00058167) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x0005cc03) list_medium_line_x3_t4_t

0x4c93,	// (0x0005250d) list_medium_line_x4_t5_t1

0x4ca3,	// (0x0005251d) list_medium_line_x4_t5_t2

0xa8df,	// (0x00058159) list_medium_line_x4_t5_t3

0xa8fb,	// (0x00058175) list_medium_line_x4_t5_t4

0xa8ed,	// (0x00058167) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x0005cc0c) list_medium_line_x4_t5_t

0xa439,	// (0x00057cb3) list_medium_line_t4_g4_g1_ParamLimits

0xa439,	// (0x00057cb3) list_medium_line_t4_g4_g1

0xa4bb,	// (0x00057d35) list_medium_line_t4_g4_g2_ParamLimits

0xa4bb,	// (0x00057d35) list_medium_line_t4_g4_g2

0xa909,	// (0x00058183) list_medium_line_t4_g4_g3_ParamLimits

0xa909,	// (0x00058183) list_medium_line_t4_g4_g3

0xa451,	// (0x00057ccb) list_medium_line_t4_g4_g4_ParamLimits

0xa451,	// (0x00057ccb) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x0005cc17) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x0005cc17) list_medium_line_t4_g4_g

0xa915,	// (0x0005818f) list_medium_line_t4_g4_t1_ParamLimits

0xa915,	// (0x0005818f) list_medium_line_t4_g4_t1

0xa92a,	// (0x000581a4) list_medium_line_t4_g4_t2_ParamLimits

0xa92a,	// (0x000581a4) list_medium_line_t4_g4_t2

0xa940,	// (0x000581ba) list_medium_line_t4_g4_t3_ParamLimits

0xa940,	// (0x000581ba) list_medium_line_t4_g4_t3

0xa956,	// (0x000581d0) list_medium_line_t4_g4_t4_ParamLimits

0xa956,	// (0x000581d0) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x0005cc20) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x0005cc20) list_medium_line_t4_g4_t

0x4d72,	// (0x000525ec) chi_dic_find_pane_g1

0x5c5c,	// (0x000534d6) main_tport_pane

0xd29c,	// (0x0005ab16) list_medium_line_plain_t1

0xa439,	// (0x00057cb3) list_medium_line_t2_g2_g1_ParamLimits

0xa439,	// (0x00057cb3) list_medium_line_t2_g2_g1

0xa445,	// (0x00057cbf) list_medium_line_t2_g2_g2_ParamLimits

0xa445,	// (0x00057cbf) list_medium_line_t2_g2_g2

0x0001,

0xfa6c,	// (0x0005d2e6) list_medium_line_t2_g2_g_ParamLimits

0xfa6c,	// (0x0005d2e6) list_medium_line_t2_g2_g

0x8833,	// (0x000560ad) list_medium_line_t2_g2_t1_ParamLimits

0x8833,	// (0x000560ad) list_medium_line_t2_g2_t1

0x884a,	// (0x000560c4) list_medium_line_t2_g2_t2_ParamLimits

0x884a,	// (0x000560c4) list_medium_line_t2_g2_t2

0x0001,

0xfa71,	// (0x0005d2eb) list_medium_line_t2_g2_t_ParamLimits

0xfa71,	// (0x0005d2eb) list_medium_line_t2_g2_t

0xd5c3,	// (0x0005ae3d) aid_sp_fs_list_icon_a_sm

0xd5cb,	// (0x0005ae45) aid_sp_fs_list_icon_d

0xd5d3,	// (0x0005ae4d) aid_sp_fs_text_primary

0xd5dc,	// (0x0005ae56) aid_sp_fs_text_secondary

0xd5e5,	// (0x0005ae5f) list_medium_line

0xd5e5,	// (0x0005ae5f) list_medium_line_g2

0xd5e5,	// (0x0005ae5f) list_medium_line_g3

0xd5e5,	// (0x0005ae5f) list_medium_line_plain

0xd5e5,	// (0x0005ae5f) list_medium_line_plain_t2

0xd5e5,	// (0x0005ae5f) list_medium_line_plain_t3

0xd5e5,	// (0x0005ae5f) list_medium_line_right_icon

0xd5e5,	// (0x0005ae5f) list_medium_line_right_iconx2

0xd5e5,	// (0x0005ae5f) list_medium_line_t2

0xd5e5,	// (0x0005ae5f) list_medium_line_t2_g2

0xd5e5,	// (0x0005ae5f) list_medium_line_t2_g3

0xd5e5,	// (0x0005ae5f) list_medium_line_t2_right_icon

0xd5e5,	// (0x0005ae5f) list_medium_line_t2_right_iconx2

0xd5e5,	// (0x0005ae5f) list_medium_line_t3

0xd5e5,	// (0x0005ae5f) list_medium_line_t3_g2

0xd5e5,	// (0x0005ae5f) list_medium_line_t3_g3

0xd5e5,	// (0x0005ae5f) list_medium_line_t3_right_iconx2

0xd5ee,	// (0x0005ae68) list_medium_line_t4_g4

0xd5f7,	// (0x0005ae71) list_medium_line_x2

0xd5f7,	// (0x0005ae71) list_medium_line_x2_t2_g2

0xd5f7,	// (0x0005ae71) list_medium_line_x2_t2_g3

0xd5f7,	// (0x0005ae71) list_medium_line_x2_t2_g4

0xd5f7,	// (0x0005ae71) list_medium_line_x2_t3

0xd5f7,	// (0x0005ae71) list_medium_line_x2_t3_g2

0xd5f7,	// (0x0005ae71) list_medium_line_x2_t3_g3

0xd5f7,	// (0x0005ae71) list_medium_line_x2_t3_g4

0xd5f7,	// (0x0005ae71) list_medium_line_x2_t4_g2

0xd5f7,	// (0x0005ae71) list_medium_line_x2_t4_g4

0xd600,	// (0x0005ae7a) list_medium_line_x3

0xd600,	// (0x0005ae7a) list_medium_line_x3_t4

0xd600,	// (0x0005ae7a) list_medium_line_x3_t4_g4

0xd5ee,	// (0x0005ae68) list_medium_line_x4_t4

0xd5ee,	// (0x0005ae68) list_medium_line_x4_t4_g7

0xd5ee,	// (0x0005ae68) list_medium_line_x4_t5

0xd609,	// (0x0005ae83) list_single_fs_dyc_pane_ParamLimits

0xd609,	// (0x0005ae83) list_single_fs_dyc_pane

0xa439,	// (0x00057cb3) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa439,	// (0x00057cb3) list_medium_line_x4_t4_g7_g1

0xdb02,	// (0x0005b37c) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdb02,	// (0x0005b37c) list_medium_line_x4_t4_g7_g2

0xdb0e,	// (0x0005b388) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdb0e,	// (0x0005b388) list_medium_line_x4_t4_g7_g3

0xdb1d,	// (0x0005b397) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdb1d,	// (0x0005b397) list_medium_line_x4_t4_g7_g4

0xdb29,	// (0x0005b3a3) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdb29,	// (0x0005b3a3) list_medium_line_x4_t4_g7_g5

0xdb38,	// (0x0005b3b2) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdb38,	// (0x0005b3b2) list_medium_line_x4_t4_g7_g6

0xdb47,	// (0x0005b3c1) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdb47,	// (0x0005b3c1) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc36,	// (0x0005d4b0) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc36,	// (0x0005d4b0) list_medium_line_x4_t4_g7_g

0xdb53,	// (0x0005b3cd) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdb53,	// (0x0005b3cd) list_medium_line_x4_t4_g7_t1

0xdb68,	// (0x0005b3e2) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdb68,	// (0x0005b3e2) list_medium_line_x4_t4_g7_t2

0xdb7d,	// (0x0005b3f7) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdb7d,	// (0x0005b3f7) list_medium_line_x4_t4_g7_t3

0xdb92,	// (0x0005b40c) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdb92,	// (0x0005b40c) list_medium_line_x4_t4_g7_t4

0xdba4,	// (0x0005b41e) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdba4,	// (0x0005b41e) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc45,	// (0x0005d4bf) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc45,	// (0x0005d4bf) list_medium_line_x4_t4_g7_t

0xdbb6,	// (0x0005b430) list_single_dyc_row_pane_ParamLimits

0xdbb6,	// (0x0005b430) list_single_dyc_row_pane

0x9969,	// (0x000571e3) call5_gesture_pane_ParamLimits

0x9969,	// (0x000571e3) call5_gesture_pane

0x99b1,	// (0x0005722b) call5_windows_pane_ParamLimits

0x99b1,	// (0x0005722b) call5_windows_pane

0x9a4a,	// (0x000572c4) call5_swipe_1_pane_cp_ParamLimits

0x9a4a,	// (0x000572c4) call5_swipe_1_pane_cp

0x9a56,	// (0x000572d0) call5_swipe_2_pane_cp_ParamLimits

0x9a56,	// (0x000572d0) call5_swipe_2_pane_cp

0xadb2,	// (0x0005862c) call5_image_pane_cp

0x9a62,	// (0x000572dc) popup_call5_audio_first_window_cp_ParamLimits

0x9a62,	// (0x000572dc) popup_call5_audio_first_window_cp

0x0071,	// (0x0004d8eb) call5_swipe_1_pane_g1_cp_ParamLimits

0x0071,	// (0x0004d8eb) call5_swipe_1_pane_g1_cp

0x0129,	// (0x0004d9a3) call5_swipe_1_pane_g2_cp

0x008a,	// (0x0004d904) call5_swipe_1_pane_t1_cp_ParamLimits

0x008a,	// (0x0004d904) call5_swipe_1_pane_t1_cp

0x0071,	// (0x0004d8eb) call5_swipe_2_pane_g1_cp_ParamLimits

0x0071,	// (0x0004d8eb) call5_swipe_2_pane_g1_cp

0x0131,	// (0x0004d9ab) call5_swipe_2_pane_g2_cp

0x0139,	// (0x0004d9b3) call5_swipe_2_pane_t1_cp_ParamLimits

0x0139,	// (0x0004d9b3) call5_swipe_2_pane_t1_cp

0x1970,	// (0x0004f1ea) main_sp_fs_email_pane

0x014e,	// (0x0004d9c8) main_sp_fs_listscroll_pane_te

0x9a6e,	// (0x000572e8) popup_sp_fs_action_menu_pane_ParamLimits

0x9a6e,	// (0x000572e8) popup_sp_fs_action_menu_pane

0xc664,	// (0x00059ede) bg_sp_fs_ctrlbar_pane_g1

0x0187,	// (0x0004da01) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x0190,	// (0x0004da0a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x0199,	// (0x0004da13) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc664,	// (0x00059ede) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd2e,	// (0x0005d5a8) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc451,	// (0x00059ccb) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc451,	// (0x00059ccb) bg_sp_fs_ctrlbar_ddmenu_pane

0x01a2,	// (0x0004da1c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x01a2,	// (0x0004da1c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x9a9e,	// (0x00057318) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x9a9e,	// (0x00057318) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd37,	// (0x0005d5b1) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd37,	// (0x0005d5b1) main_sp_fs_ctrlbar_ddmenu_pane_g

0x01ae,	// (0x0004da28) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x01ae,	// (0x0004da28) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe1a2,	// (0x0005ba1c) list_medium_line_t2_right_icon_g1

0xe1aa,	// (0x0005ba24) list_medium_line_t2_right_icon_t1

0x9aaa,	// (0x00057324) list_medium_line_t2_right_icon_t2

0x0001,

0xfd3c,	// (0x0005d5b6) list_medium_line_t2_right_icon_t

0xc221,	// (0x00059a9b) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc221,	// (0x00059a9b) bg_sp_fs_ctrlbar_pane

0x9b01,	// (0x0005737b) main_sp_fs_ctrlbar_button_pane_cp01

0x9b09,	// (0x00057383) main_sp_fs_ctrlbar_ddmenu_pane

0x0284,	// (0x0004dafe) main_sp_fs_ctrlbar_pane_g1

0x0290,	// (0x0004db0a) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd41,	// (0x0005d5bb) main_sp_fs_ctrlbar_pane_g

0x029c,	// (0x0004db16) main_sp_fs_ctrlbar_pane_t1

0x9b13,	// (0x0005738d) main_sp_fs_ctrlbar_pane

0x9b34,	// (0x000573ae) main_sp_fs_listscroll_pane_te_cp01

0x9b54,	// (0x000573ce) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9b54,	// (0x000573ce) popup_sp_fs_action_menu_pane_cp01

0x1970,	// (0x0004f1ea) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x1970,	// (0x0004f1ea) bg_sp_fs_highlight_list_pane_cp01

0x9b73,	// (0x000573ed) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x9b73,	// (0x000573ed) sp_fs_action_menu_list_gene_pane_g1

0x0305,	// (0x0004db7f) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x0305,	// (0x0004db7f) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd46,	// (0x0005d5c0) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd46,	// (0x0005d5c0) sp_fs_action_menu_list_gene_pane_g

0xe1ba,	// (0x0005ba34) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe1ba,	// (0x0005ba34) sp_fs_action_menu_list_gene_pane_t1

0x9b82,	// (0x000573fc) sp_fs_action_menu_list_gene_pane_ParamLimits

0x9b82,	// (0x000573fc) sp_fs_action_menu_list_gene_pane

0x032f,	// (0x0004dba9) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x032f,	// (0x0004dba9) popup_sp_fs_action_menu_bg_pane

0x9b9f,	// (0x00057419) sp_fs_action_menu_list_pane_ParamLimits

0x9b9f,	// (0x00057419) sp_fs_action_menu_list_pane

0x0359,	// (0x0004dbd3) sp_fs_scroll_pane_cp01_ParamLimits

0x0359,	// (0x0004dbd3) sp_fs_scroll_pane_cp01

0x9bbb,	// (0x00057435) list_medium_line_plain_t2_t1

0x9bcb,	// (0x00057445) list_medium_line_plain_t2_t2

0x0001,

0xfd4b,	// (0x0005d5c5) list_medium_line_plain_t2_t

0x9bd9,	// (0x00057453) list_medium_line_plain_t3_t1

0x9be9,	// (0x00057463) list_medium_line_plain_t3_t2

0x9bf7,	// (0x00057471) list_medium_line_plain_t3_t3

0x0002,

0xfd50,	// (0x0005d5ca) list_medium_line_plain_t3_t

0xa439,	// (0x00057cb3) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa439,	// (0x00057cb3) list_medium_line_x2_t2_g2_g1

0xa451,	// (0x00057ccb) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa451,	// (0x00057ccb) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x0005cb27) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x0005cb27) list_medium_line_x2_t2_g2_g

0xa915,	// (0x0005818f) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa915,	// (0x0005818f) list_medium_line_x2_t2_g2_t1

0xa472,	// (0x00057cec) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa472,	// (0x00057cec) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd57,	// (0x0005d5d1) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd57,	// (0x0005d5d1) list_medium_line_x2_t2_g2_t

0xa439,	// (0x00057cb3) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa439,	// (0x00057cb3) list_medium_line_x2_t4_g2_g1

0xe1d2,	// (0x0005ba4c) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe1d2,	// (0x0005ba4c) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd5c,	// (0x0005d5d6) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd5c,	// (0x0005d5d6) list_medium_line_x2_t4_g2_g

0x9c05,	// (0x0005747f) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9c05,	// (0x0005747f) list_medium_line_x2_t4_g2_t1

0x9c1f,	// (0x00057499) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9c1f,	// (0x00057499) list_medium_line_x2_t4_g2_t2

0x9c34,	// (0x000574ae) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9c34,	// (0x000574ae) list_medium_line_x2_t4_g2_t3

0xa472,	// (0x00057cec) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa472,	// (0x00057cec) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd61,	// (0x0005d5db) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd61,	// (0x0005d5db) list_medium_line_x2_t4_g2_t

0xe1e3,	// (0x0005ba5d) list_medium_line_t3_right_iconx2_g1

0xe1a2,	// (0x0005ba1c) list_medium_line_t3_right_iconx2_g2

0x9c49,	// (0x000574c3) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd6a,	// (0x0005d5e4) list_medium_line_t3_right_iconx2_g

0x9c51,	// (0x000574cb) list_medium_line_t3_right_iconx2_t1

0x9c61,	// (0x000574db) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd71,	// (0x0005d5eb) list_medium_line_t3_right_iconx2_t

0xa439,	// (0x00057cb3) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa439,	// (0x00057cb3) list_medium_line_x3_t4_g4_g1

0xa445,	// (0x00057cbf) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa445,	// (0x00057cbf) list_medium_line_x3_t4_g4_g2

0xa4bb,	// (0x00057d35) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa4bb,	// (0x00057d35) list_medium_line_x3_t4_g4_g3

0xe1eb,	// (0x0005ba65) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe1eb,	// (0x0005ba65) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd76,	// (0x0005d5f0) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd76,	// (0x0005d5f0) list_medium_line_x3_t4_g4_g

0x8833,	// (0x000560ad) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8833,	// (0x000560ad) list_medium_line_x3_t4_g4_t1

0x884a,	// (0x000560c4) list_medium_line_x3_t4_g4_t2_ParamLimits

0x884a,	// (0x000560c4) list_medium_line_x3_t4_g4_t2

0xe1f7,	// (0x0005ba71) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe1f7,	// (0x0005ba71) list_medium_line_x3_t4_g4_t3

0xe20c,	// (0x0005ba86) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe20c,	// (0x0005ba86) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd7f,	// (0x0005d5f9) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd7f,	// (0x0005d5f9) list_medium_line_x3_t4_g4_t

0x9c6f,	// (0x000574e9) list_single_dyc_row_text_pane_t1_ParamLimits

0x9c6f,	// (0x000574e9) list_single_dyc_row_text_pane_t1

0x9ca6,	// (0x00057520) list_single_dyc_row_text_pane_t2_ParamLimits

0x9ca6,	// (0x00057520) list_single_dyc_row_text_pane_t2

0xe229,	// (0x0005baa3) list_single_dyc_row_text_pane_t3_ParamLimits

0xe229,	// (0x0005baa3) list_single_dyc_row_text_pane_t3

0x0002,

0xfd88,	// (0x0005d602) list_single_dyc_row_text_pane_t_ParamLimits

0xfd88,	// (0x0005d602) list_single_dyc_row_text_pane_t

0xe23b,	// (0x0005bab5) list_single_dyc_row_pane_g1_ParamLimits

0xe23b,	// (0x0005bab5) list_single_dyc_row_pane_g1

0xe247,	// (0x0005bac1) list_single_dyc_row_pane_g2_ParamLimits

0xe247,	// (0x0005bac1) list_single_dyc_row_pane_g2

0xe253,	// (0x0005bacd) list_single_dyc_row_pane_g3_ParamLimits

0xe253,	// (0x0005bacd) list_single_dyc_row_pane_g3

0xe25f,	// (0x0005bad9) list_single_dyc_row_pane_g4_ParamLimits

0xe25f,	// (0x0005bad9) list_single_dyc_row_pane_g4

0x0003,

0xfd8f,	// (0x0005d609) list_single_dyc_row_pane_g_ParamLimits

0xfd8f,	// (0x0005d609) list_single_dyc_row_pane_g

0xe26b,	// (0x0005bae5) list_single_dyc_row_text_pane_ParamLimits

0xe26b,	// (0x0005bae5) list_single_dyc_row_text_pane

0x0e8f,	// (0x0004e709) bg_sp_fs_scroll_pane

0x04ad,	// (0x0004dd27) thumb_sp_fs_scroll_pane

0xa439,	// (0x00057cb3) list_medium_line_g1_ParamLimits

0xa439,	// (0x00057cb3) list_medium_line_g1

0xa915,	// (0x0005818f) list_medium_line_t1_ParamLimits

0xa915,	// (0x0005818f) list_medium_line_t1

0xa439,	// (0x00057cb3) list_medium_line_x2_g1_ParamLimits

0xa439,	// (0x00057cb3) list_medium_line_x2_g1

0xa445,	// (0x00057cbf) list_medium_line_x2_g2_ParamLimits

0xa445,	// (0x00057cbf) list_medium_line_x2_g2

0x0001,

0xfa6c,	// (0x0005d2e6) list_medium_line_x2_g_ParamLimits

0xfa6c,	// (0x0005d2e6) list_medium_line_x2_g

0xe28a,	// (0x0005bb04) list_medium_line_x2_t1_ParamLimits

0xe28a,	// (0x0005bb04) list_medium_line_x2_t1

0xa439,	// (0x00057cb3) list_medium_line_x3_g1_ParamLimits

0xa439,	// (0x00057cb3) list_medium_line_x3_g1

0xa445,	// (0x00057cbf) list_medium_line_x3_g2_ParamLimits

0xa445,	// (0x00057cbf) list_medium_line_x3_g2

0x0001,

0xfa6c,	// (0x0005d2e6) list_medium_line_x3_g_ParamLimits

0xfa6c,	// (0x0005d2e6) list_medium_line_x3_g

0xe28a,	// (0x0005bb04) list_medium_line_x3_t1_ParamLimits

0xe28a,	// (0x0005bb04) list_medium_line_x3_t1

0x04b6,	// (0x0004dd30) thumb_sp_fs_scroll_pane_g1

0x04bf,	// (0x0004dd39) thumb_sp_fs_scroll_pane_g2

0x04c8,	// (0x0004dd42) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd98,	// (0x0005d612) thumb_sp_fs_scroll_pane_g

0x04b6,	// (0x0004dd30) bg_sp_fs_scroll_pane_g1

0x04bf,	// (0x0004dd39) bg_sp_fs_scroll_pane_g2

0x04c8,	// (0x0004dd42) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd98,	// (0x0005d612) bg_sp_fs_scroll_pane_g

0xa439,	// (0x00057cb3) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa439,	// (0x00057cb3) list_medium_line_x2_t3_g4_g1

0xa4af,	// (0x00057d29) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa4af,	// (0x00057d29) list_medium_line_x2_t3_g4_g2

0xa445,	// (0x00057cbf) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa445,	// (0x00057cbf) list_medium_line_x2_t3_g4_g3

0xa451,	// (0x00057ccb) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa451,	// (0x00057ccb) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x0005cba3) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x0005cba3) list_medium_line_x2_t3_g4_g

0x9d00,	// (0x0005757a) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9d00,	// (0x0005757a) list_medium_line_x2_t3_g4_t1

0x9d16,	// (0x00057590) list_medium_line_x2_t3_g4_t2_ParamLimits

0x9d16,	// (0x00057590) list_medium_line_x2_t3_g4_t2

0xa472,	// (0x00057cec) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa472,	// (0x00057cec) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd9f,	// (0x0005d619) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd9f,	// (0x0005d619) list_medium_line_x2_t3_g4_t

0xa439,	// (0x00057cb3) list_medium_line_g2_g1_ParamLimits

0xa439,	// (0x00057cb3) list_medium_line_g2_g1

0xa445,	// (0x00057cbf) list_medium_line_g2_g2_ParamLimits

0xa445,	// (0x00057cbf) list_medium_line_g2_g2

0x0001,

0xfa6c,	// (0x0005d2e6) list_medium_line_g2_g_ParamLimits

0xfa6c,	// (0x0005d2e6) list_medium_line_g2_g

0xa699,	// (0x00057f13) list_medium_line_g2_t1_ParamLimits

0xa699,	// (0x00057f13) list_medium_line_g2_t1

0xa439,	// (0x00057cb3) list_medium_line_t3_g2_g1_ParamLimits

0xa439,	// (0x00057cb3) list_medium_line_t3_g2_g1

0xa445,	// (0x00057cbf) list_medium_line_t3_g2_g2_ParamLimits

0xa445,	// (0x00057cbf) list_medium_line_t3_g2_g2

0x0001,

0xfa6c,	// (0x0005d2e6) list_medium_line_t3_g2_g_ParamLimits

0xfa6c,	// (0x0005d2e6) list_medium_line_t3_g2_g

0x9d2f,	// (0x000575a9) list_medium_line_t3_g2_t1_ParamLimits

0x9d2f,	// (0x000575a9) list_medium_line_t3_g2_t1

0x9d46,	// (0x000575c0) list_medium_line_t3_g2_t2_ParamLimits

0x9d46,	// (0x000575c0) list_medium_line_t3_g2_t2

0x9d5b,	// (0x000575d5) list_medium_line_t3_g2_t3_ParamLimits

0x9d5b,	// (0x000575d5) list_medium_line_t3_g2_t3

0x0002,

0xfda6,	// (0x0005d620) list_medium_line_t3_g2_t_ParamLimits

0xfda6,	// (0x0005d620) list_medium_line_t3_g2_t

0xe1a2,	// (0x0005ba1c) list_medium_line_right_icon_g1

0xe2a0,	// (0x0005bb1a) list_medium_line_right_icon_t1

0xa439,	// (0x00057cb3) list_medium_line_t2_g1_ParamLimits

0xa439,	// (0x00057cb3) list_medium_line_t2_g1

0x9d70,	// (0x000575ea) list_medium_line_t2_t1_ParamLimits

0x9d70,	// (0x000575ea) list_medium_line_t2_t1

0x9d87,	// (0x00057601) list_medium_line_t2_t2_ParamLimits

0x9d87,	// (0x00057601) list_medium_line_t2_t2

0x0001,

0xfdad,	// (0x0005d627) list_medium_line_t2_t_ParamLimits

0xfdad,	// (0x0005d627) list_medium_line_t2_t

0xa439,	// (0x00057cb3) list_medium_line_t3_g1_ParamLimits

0xa439,	// (0x00057cb3) list_medium_line_t3_g1

0x9c05,	// (0x0005747f) list_medium_line_t3_t1_ParamLimits

0x9c05,	// (0x0005747f) list_medium_line_t3_t1

0x9c1f,	// (0x00057499) list_medium_line_t3_t2_ParamLimits

0x9c1f,	// (0x00057499) list_medium_line_t3_t2

0x9c34,	// (0x000574ae) list_medium_line_t3_t3_ParamLimits

0x9c34,	// (0x000574ae) list_medium_line_t3_t3

0x0002,

0xfdb2,	// (0x0005d62c) list_medium_line_t3_t_ParamLimits

0xfdb2,	// (0x0005d62c) list_medium_line_t3_t

0xa439,	// (0x00057cb3) list_medium_line_g3_g1_ParamLimits

0xa439,	// (0x00057cb3) list_medium_line_g3_g1

0xa4af,	// (0x00057d29) list_medium_line_g3_g2_ParamLimits

0xa4af,	// (0x00057d29) list_medium_line_g3_g2

0xa445,	// (0x00057cbf) list_medium_line_g3_g3_ParamLimits

0xa445,	// (0x00057cbf) list_medium_line_g3_g3

0x0002,

0xfdb9,	// (0x0005d633) list_medium_line_g3_g_ParamLimits

0xfdb9,	// (0x0005d633) list_medium_line_g3_g

0xa684,	// (0x00057efe) list_medium_line_g3_t1_ParamLimits

0xa684,	// (0x00057efe) list_medium_line_g3_t1

0xa439,	// (0x00057cb3) list_medium_line_t2_g3_g1_ParamLimits

0xa439,	// (0x00057cb3) list_medium_line_t2_g3_g1

0xa4af,	// (0x00057d29) list_medium_line_t2_g3_g2_ParamLimits

0xa4af,	// (0x00057d29) list_medium_line_t2_g3_g2

0xa445,	// (0x00057cbf) list_medium_line_t2_g3_g3_ParamLimits

0xa445,	// (0x00057cbf) list_medium_line_t2_g3_g3

0x0002,

0xfdb9,	// (0x0005d633) list_medium_line_t2_g3_g_ParamLimits

0xfdb9,	// (0x0005d633) list_medium_line_t2_g3_g

0x9d99,	// (0x00057613) list_medium_line_t2_g3_t1_ParamLimits

0x9d99,	// (0x00057613) list_medium_line_t2_g3_t1

0x9db3,	// (0x0005762d) list_medium_line_t2_g3_t2_ParamLimits

0x9db3,	// (0x0005762d) list_medium_line_t2_g3_t2

0x0001,

0xfdc0,	// (0x0005d63a) list_medium_line_t2_g3_t_ParamLimits

0xfdc0,	// (0x0005d63a) list_medium_line_t2_g3_t

0xa439,	// (0x00057cb3) list_medium_line_t3_g3_g1_ParamLimits

0xa439,	// (0x00057cb3) list_medium_line_t3_g3_g1

0xa4af,	// (0x00057d29) list_medium_line_t3_g3_g2_ParamLimits

0xa4af,	// (0x00057d29) list_medium_line_t3_g3_g2

0xa445,	// (0x00057cbf) list_medium_line_t3_g3_g3_ParamLimits

0xa445,	// (0x00057cbf) list_medium_line_t3_g3_g3

0x0002,

0xfdb9,	// (0x0005d633) list_medium_line_t3_g3_g_ParamLimits

0xfdb9,	// (0x0005d633) list_medium_line_t3_g3_g

0x9dc8,	// (0x00057642) list_medium_line_t3_g3_t1_ParamLimits

0x9dc8,	// (0x00057642) list_medium_line_t3_g3_t1

0x9ddc,	// (0x00057656) list_medium_line_t3_g3_t2_ParamLimits

0x9ddc,	// (0x00057656) list_medium_line_t3_g3_t2

0x9dee,	// (0x00057668) list_medium_line_t3_g3_t3_ParamLimits

0x9dee,	// (0x00057668) list_medium_line_t3_g3_t3

0x0002,

0xfdc5,	// (0x0005d63f) list_medium_line_t3_g3_t_ParamLimits

0xfdc5,	// (0x0005d63f) list_medium_line_t3_g3_t

0xe1e3,	// (0x0005ba5d) list_medium_line_right_iconx2_g1

0xe1a2,	// (0x0005ba1c) list_medium_line_right_iconx2_g2

0x0001,

0xfdcc,	// (0x0005d646) list_medium_line_right_iconx2_g

0xe2ae,	// (0x0005bb28) list_medium_line_right_iconx2_t1

0xe1e3,	// (0x0005ba5d) list_medium_line_t2_right_iconx2_g1

0xe1a2,	// (0x0005ba1c) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdcc,	// (0x0005d646) list_medium_line_t2_right_iconx2_g

0x9e00,	// (0x0005767a) list_medium_line_t2_right_iconx2_t1

0x9e10,	// (0x0005768a) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdd1,	// (0x0005d64b) list_medium_line_t2_right_iconx2_t

0xd29c,	// (0x0005ab16) list_medium_line_x4_t4_t1

0x9e1e,	// (0x00057698) list_medium_line_x4_t4_t2

0x9e2e,	// (0x000576a8) list_medium_line_x4_t4_t3

0x9e3e,	// (0x000576b8) list_medium_line_x4_t4_t4

0x0003,

0xfdd6,	// (0x0005d650) list_medium_line_x4_t4_t

0x9e89,	// (0x00057703) tport_appsw_pane_ParamLimits

0x9e89,	// (0x00057703) tport_appsw_pane

0x9e9a,	// (0x00057714) tport_contact_pane_ParamLimits

0x9e9a,	// (0x00057714) tport_contact_pane

0x9eaf,	// (0x00057729) tport_listscroll_pane_ParamLimits

0x9eaf,	// (0x00057729) tport_listscroll_pane

0x9ec8,	// (0x00057742) cell_tport_appsw_pane_ParamLimits

0x9ec8,	// (0x00057742) cell_tport_appsw_pane

0xd01a,	// (0x0005a894) tport_appsw_pane_g1_ParamLimits

0xd01a,	// (0x0005a894) tport_appsw_pane_g1

0x06c1,	// (0x0004df3b) tport_contact_pane_g1

0x06ca,	// (0x0004df44) tport_contact_pane_t1

0x06d8,	// (0x0004df52) tport_contact_pane_t2

0x0001,

0xfddf,	// (0x0005d659) tport_contact_pane_t

0x06e6,	// (0x0004df60) list_tport_pane

0x171a,	// (0x0004ef94) scroll_pane_cp_030

0x06f7,	// (0x0004df71) cell_tport_appsw_pane_g1

0x0710,	// (0x0004df8a) cell_tport_appsw_pane_t1

0x0e8f,	// (0x0004e709) grid_highlight_pane_cp019

0x9ede,	// (0x00057758) list_tport_double_graphic_pane_ParamLimits

0x9ede,	// (0x00057758) list_tport_double_graphic_pane

0x1970,	// (0x0004f1ea) list_highlight_pane_cp023_ParamLimits

0x1970,	// (0x0004f1ea) list_highlight_pane_cp023

0x9eeb,	// (0x00057765) list_tport_double_graphic_pane_g1_ParamLimits

0x9eeb,	// (0x00057765) list_tport_double_graphic_pane_g1

0x9ef8,	// (0x00057772) list_tport_double_graphic_pane_t1_ParamLimits

0x9ef8,	// (0x00057772) list_tport_double_graphic_pane_t1

0x9f0d,	// (0x00057787) list_tport_double_graphic_pane_t2_ParamLimits

0x9f0d,	// (0x00057787) list_tport_double_graphic_pane_t2

0x0001,

0xfdeb,	// (0x0005d665) list_tport_double_graphic_pane_t_ParamLimits

0xfdeb,	// (0x0005d665) list_tport_double_graphic_pane_t

0x0e8f,	// (0x0004e709) main_cale_note_pane

0x8056,	// (0x000558d0) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8056,	// (0x000558d0) cell_vitu2_function_top_wide_pane_cp01

0x96c0,	// (0x00056f3a) wait_bar_pane_cp05_ParamLimits

0x0e8f,	// (0x0004e709) listscroll_cmail_pane

0x075f,	// (0x0004dfd9) list_cmail_pane

0x9f1f,	// (0x00057799) list_cmail_body_pane

0x9f1f,	// (0x00057799) list_single_cmail_header_caption_pane

0x9f35,	// (0x000577af) list_single_cmail_header_detail_pane_ParamLimits

0x9f35,	// (0x000577af) list_single_cmail_header_detail_pane

0x07bd,	// (0x0004e037) list_single_cmail_header_caption_pane_t1

0x9f5d,	// (0x000577d7) list_single_cmail_header_detail_pane_g1_ParamLimits

0x9f5d,	// (0x000577d7) list_single_cmail_header_detail_pane_g1

0xa445,	// (0x00057cbf) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa445,	// (0x00057cbf) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdf0,	// (0x0005d66a) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdf0,	// (0x0005d66a) list_single_cmail_header_detail_pane_g

0xe2c4,	// (0x0005bb3e) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe2c4,	// (0x0005bb3e) list_single_cmail_header_detail_pane_t1

0xe2ec,	// (0x0005bb66) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe2ec,	// (0x0005bb66) list_single_cmail_header_editor_pane_bg

0x0812,	// (0x0004e08c) list_cmail_body_pane_g1

0x081b,	// (0x0004e095) list_cmail_body_pane_t1

0xd073,	// (0x0005a8ed) list_single_cmail_header_editor_pane_bg_g1

0xa5a2,	// (0x00057e1c) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd083,	// (0x0005a8fd) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd07b,	// (0x0005a8f5) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd2aa,	// (0x0005ab24) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd0a3,	// (0x0005a91d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd093,	// (0x0005a90d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd09b,	// (0x0005a915) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa582,	// (0x00057dfc) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9f97,	// (0x00057811) calenote_gesture_pane_ParamLimits

0x9f97,	// (0x00057811) calenote_gesture_pane

0x9fb3,	// (0x0005782d) calenote_window_pane_ParamLimits

0x9fb3,	// (0x0005782d) calenote_window_pane

0x0859,	// (0x0004e0d3) popup_note_window_cp01

0x9fcf,	// (0x00057849) calenote_swipe_1_pane_ParamLimits

0x9fcf,	// (0x00057849) calenote_swipe_1_pane

0x9a56,	// (0x000572d0) calenote_swipe_2_pane_ParamLimits

0x9a56,	// (0x000572d0) calenote_swipe_2_pane

0x0071,	// (0x0004d8eb) calenote_swipe_1_pane_g1_ParamLimits

0x0071,	// (0x0004d8eb) calenote_swipe_1_pane_g1

0x007e,	// (0x0004d8f8) calenote_swipe_1_pane_g2_ParamLimits

0x007e,	// (0x0004d8f8) calenote_swipe_1_pane_g2

0x0001,

0xfd24,	// (0x0005d59e) calenote_swipe_1_pane_g_ParamLimits

0xfd24,	// (0x0005d59e) calenote_swipe_1_pane_g

0x087e,	// (0x0004e0f8) calenote_swipe_1_pane_t1_ParamLimits

0x087e,	// (0x0004e0f8) calenote_swipe_1_pane_t1

0x0071,	// (0x0004d8eb) calenote_swipe_2_pane_g1_ParamLimits

0x0071,	// (0x0004d8eb) calenote_swipe_2_pane_g1

0x089d,	// (0x0004e117) calenote_swipe_2_pane_g2_ParamLimits

0x089d,	// (0x0004e117) calenote_swipe_2_pane_g2

0x0001,

0xfdfc,	// (0x0005d676) calenote_swipe_2_pane_g_ParamLimits

0xfdfc,	// (0x0005d676) calenote_swipe_2_pane_g

0x08a9,	// (0x0004e123) calenote_swipe_2_pane_t1_ParamLimits

0x08a9,	// (0x0004e123) calenote_swipe_2_pane_t1

0x0e8f,	// (0x0004e709) main_mup_navstr_pane

0x6e28,	// (0x000546a2) main_mup3_pane_t7_ParamLimits

0x6e28,	// (0x000546a2) main_mup3_pane_t7

0xee01,	// (0x0005c67b) main_mp4_pane_g6_ParamLimits

0xee01,	// (0x0005c67b) main_mp4_pane_g6

0xef9b,	// (0x0005c815) main_image3_pane_t4_ParamLimits

0xef9b,	// (0x0005c815) main_image3_pane_t4

0x9fe4,	// (0x0005785e) popup_navstr_preview_pane_ParamLimits

0x9fe4,	// (0x0005785e) popup_navstr_preview_pane

0x9ff4,	// (0x0005786e) scroll_navstr_pane_ParamLimits

0x9ff4,	// (0x0005786e) scroll_navstr_pane

0x0e8f,	// (0x0004e709) bg_popup_preview_window_pane_cp04

0x08e8,	// (0x0004e162) popup_navstr_preview_pane_t1

0xa008,	// (0x00057882) scroll_navstr_pane_g1_ParamLimits

0xa008,	// (0x00057882) scroll_navstr_pane_g1

0xa01c,	// (0x00057896) scroll_navstr_pane_t1_ParamLimits

0xa01c,	// (0x00057896) scroll_navstr_pane_t1

0x0875,	// (0x0004e0ef) bg_button_pane_cp014

0x0875,	// (0x0004e0ef) bg_button_pane_cp030

0xe148,	// (0x0005b9c2) list_double_fisheye_pane_g4_ParamLimits

0xe148,	// (0x0005b9c2) list_double_fisheye_pane_g4

0xe154,	// (0x0005b9ce) list_double_fisheye_pane_g5_ParamLimits

0xe154,	// (0x0005b9ce) list_double_fisheye_pane_g5

0x076f,	// (0x0004dfe9) sp_fs_scroll_pane_cp03

0x0284,	// (0x0004dafe) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x0290,	// (0x0004db0a) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd41,	// (0x0005d5bb) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x029c,	// (0x0004db16) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x0767,	// (0x0004dfe1) sp_fs_scroll_pane_cp02

0x172c,	// (0x0004efa6) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x172c,	// (0x0004efa6) popup_sp_fs_calendar_preview_list_single_pane

0x0e8f,	// (0x0004e709) main_cam6_pano_pane

0x1970,	// (0x0004f1ea) main_mup3_pane_ParamLimits

0x0e8f,	// (0x0004e709) main_phacti_pane

0x95b3,	// (0x00056e2d) bg_button_pane_cp11

0x95cb,	// (0x00056e45) main_mobtv_info_pane_g2_ParamLimits

0x95cb,	// (0x00056e45) main_mobtv_info_pane_g2

0x0001,

0xfca1,	// (0x0005d51b) main_mobtv_info_pane_g_ParamLimits

0xfca1,	// (0x0005d51b) main_mobtv_info_pane_g

0x977e,	// (0x00056ff8) sc_clock_pane_t5_ParamLimits

0x977e,	// (0x00056ff8) sc_clock_pane_t5

0x97f1,	// (0x0005706b) main_radioblah_pane_g1_ParamLimits

0xe0ad,	// (0x0005b927) main_radioblah_pane_t3_ParamLimits

0xe0ad,	// (0x0005b927) main_radioblah_pane_t3

0xe0c5,	// (0x0005b93f) main_radioblah_pane_t4_ParamLimits

0xe0c5,	// (0x0005b93f) main_radioblah_pane_t4

0x9819,	// (0x00057093) main_radioblah_text_pane_ParamLimits

0x9819,	// (0x00057093) main_radioblah_text_pane

0x982b,	// (0x000570a5) main_radioblah_info_pane_g1_ParamLimits

0x98be,	// (0x00057138) main_radioblah_info_pane_t4_ParamLimits

0x98be,	// (0x00057138) main_radioblah_info_pane_t4

0x1970,	// (0x0004f1ea) main_sp_fs_calendar_pane

0xa032,	// (0x000578ac) main_phacti_pane_g1

0xa03a,	// (0x000578b4) phacti_note_pane_ParamLimits

0xa03a,	// (0x000578b4) phacti_note_pane

0x093a,	// (0x0004e1b4) phacti_term_pane_ParamLimits

0x093a,	// (0x0004e1b4) phacti_term_pane

0x094f,	// (0x0004e1c9) phacti_note_pane_t1_ParamLimits

0x094f,	// (0x0004e1c9) phacti_note_pane_t1

0xe2fe,	// (0x0005bb78) phacti_term_pane_g1

0xe306,	// (0x0005bb80) phacti_term_pane_t1_ParamLimits

0xe306,	// (0x0005bb80) phacti_term_pane_t1

0x0966,	// (0x0004e1e0) popup_sp_fs_calendar_preview_list_single_pane_g1

0x096e,	// (0x0004e1e8) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfe06,	// (0x0005d680) popup_sp_fs_calendar_preview_list_single_pane_g

0x0976,	// (0x0004e1f0) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x0976,	// (0x0004e1f0) popup_sp_fs_calendar_preview_list_single_pane_t1

0x098c,	// (0x0004e206) aid_popup_sp_fs_bg_corner_pane

0xc664,	// (0x00059ede) popup_sp_fs_calendar_preview_bg_pane_g1

0x0e8f,	// (0x0004e709) popup_sp_fs_calendar_preview_bg_pane

0x0994,	// (0x0004e20e) popup_sp_fs_calendar_preview_list_pane

0x1970,	// (0x0004f1ea) bg_main_sp_fs_cale_pane_ParamLimits

0x1970,	// (0x0004f1ea) bg_main_sp_fs_cale_pane

0xe330,	// (0x0005bbaa) listscroll_cale_mrui_pane_ParamLimits

0xe330,	// (0x0005bbaa) listscroll_cale_mrui_pane

0xe344,	// (0x0005bbbe) listscroll_sp_fs_schedule_track_pane

0xe34d,	// (0x0005bbc7) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe34d,	// (0x0005bbc7) main_sp_fs_ctrlbar_pane_cp01

0x09c3,	// (0x0004e23d) main_sp_fs_ribbon_pane

0xe35e,	// (0x0005bbd8) popup_sp_fs_cale_preview_window

0xa089,	// (0x00057903) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa089,	// (0x00057903) list_single_sp_fs_schedule_track_pane

0x1970,	// (0x0004f1ea) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1970,	// (0x0004f1ea) bg_sp_fs_highlight_list_pane_cp03

0xa09c,	// (0x00057916) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa09c,	// (0x00057916) list_single_sp_fs_schedule_track_pane_g1

0xa0a8,	// (0x00057922) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa0a8,	// (0x00057922) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfe0b,	// (0x0005d685) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfe0b,	// (0x0005d685) list_single_sp_fs_schedule_track_pane_g

0xa0b4,	// (0x0005792e) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa0b4,	// (0x0005792e) list_single_sp_fs_schedule_track_pane_t1

0xa0ce,	// (0x00057948) sp_fs_schedule_track_pane_ParamLimits

0xa0ce,	// (0x00057948) sp_fs_schedule_track_pane

0x0a20,	// (0x0004e29a) sp_fs_schedule_track_pane_g1

0x0a28,	// (0x0004e2a2) sp_fs_schedule_track_pane_g2

0x0a30,	// (0x0004e2aa) sp_fs_schedule_track_pane_g3

0x0a38,	// (0x0004e2b2) sp_fs_schedule_track_pane_g4

0x0a40,	// (0x0004e2ba) sp_fs_schedule_track_pane_g5

0x0004,

0xfe10,	// (0x0005d68a) sp_fs_schedule_track_pane_g

0xd073,	// (0x0005a8ed) bg_sp_fs_schedule_viewer_highlight_g1

0xa5a2,	// (0x00057e1c) bg_sp_fs_schedule_viewer_highlight_g2

0xd07b,	// (0x0005a8f5) bg_sp_fs_schedule_viewer_highlight_g3

0xd083,	// (0x0005a8fd) bg_sp_fs_schedule_viewer_highlight_g4

0xd2aa,	// (0x0005ab24) bg_sp_fs_schedule_viewer_highlight_g5

0xd093,	// (0x0005a90d) bg_sp_fs_schedule_viewer_highlight_g6

0xd09b,	// (0x0005a915) bg_sp_fs_schedule_viewer_highlight_g7

0xd0a3,	// (0x0005a91d) bg_sp_fs_schedule_viewer_highlight_g8

0xa582,	// (0x00057dfc) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe1b,	// (0x0005d695) bg_sp_fs_schedule_viewer_highlight_g

0x0e8f,	// (0x0004e709) bg_main_sp_fs_ribbon_pane

0xa0df,	// (0x00057959) main_sp_fs_ribbon_pane_g1

0x0a51,	// (0x0004e2cb) main_sp_fs_ribbon_pane_t1

0xa0e8,	// (0x00057962) main_sp_fs_ribbon_pane_t2

0x0a6f,	// (0x0004e2e9) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe2e,	// (0x0005d6a8) main_sp_fs_ribbon_pane_t

0x0a7e,	// (0x0004e2f8) main_sp_fs_ribbon_scheduler_pane

0x0a86,	// (0x0004e300) bg_main_sp_fs_ribbon_pane_g1

0x0a8f,	// (0x0004e309) bg_main_sp_fs_ribbon_pane_g2

0x0a98,	// (0x0004e312) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe35,	// (0x0005d6af) bg_main_sp_fs_ribbon_pane_g

0x0aa0,	// (0x0004e31a) main_sp_fs_ribbon_scheduler_pane_g1

0x0aa9,	// (0x0004e323) main_sp_fs_ribbon_scheduler_pane_g2

0x0ab2,	// (0x0004e32c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe3c,	// (0x0005d6b6) main_sp_fs_ribbon_scheduler_pane_g

0xe11f,	// (0x0005b999) list_cale_mrui_pane

0x0abb,	// (0x0004e335) sp_fs_scroll_pane_cp07_ParamLimits

0x0abb,	// (0x0004e335) sp_fs_scroll_pane_cp07

0xa0f7,	// (0x00057971) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa0f7,	// (0x00057971) bg_sp_fs_schedule_viewer_highlight

0x0add,	// (0x0004e357) list_single_sp_fs_schedule_track_pane_cp01

0x0ae5,	// (0x0004e35f) list_sp_fs_schedule_track_pane

0x0aed,	// (0x0004e367) sp_fs_scroll_pane_cp06_ParamLimits

0x0aed,	// (0x0004e367) sp_fs_scroll_pane_cp06

0xc664,	// (0x00059ede) bgmain_sp_fs_calendar_pane_g1

0xa107,	// (0x00057981) list_single_cale_mrui_pane_ParamLimits

0xa107,	// (0x00057981) list_single_cale_mrui_pane

0xe36d,	// (0x0005bbe7) list_single_cale_mrui_row_pane_ParamLimits

0xe36d,	// (0x0005bbe7) list_single_cale_mrui_row_pane

0xe37a,	// (0x0005bbf4) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe37a,	// (0x0005bbf4) list_single_cale_mrui_row_pane_g1

0xe3b2,	// (0x0005bc2c) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe3b2,	// (0x0005bc2c) list_single_cale_mrui_row_pane_t1

0xa12b,	// (0x000579a5) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa12b,	// (0x000579a5) list_single_cale_mrui_row_pane_t2

0xe3c4,	// (0x0005bc3e) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe3c4,	// (0x0005bc3e) list_single_cale_mrui_row_pane_t3

0xe3f3,	// (0x0005bc6d) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe3f3,	// (0x0005bc6d) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe48,	// (0x0005d6c2) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe48,	// (0x0005d6c2) list_single_cale_mrui_row_pane_t

0xa191,	// (0x00057a0b) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa191,	// (0x00057a0b) list_single_cmail_header_editor_pane_bg_cp01

0xa1b5,	// (0x00057a2f) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa1b5,	// (0x00057a2f) list_single_cmail_header_editor_pane_bg_cp02

0xa1d3,	// (0x00057a4d) main_radioblah_text_pane_t1_ParamLimits

0xa1d3,	// (0x00057a4d) main_radioblah_text_pane_t1

0x0be6,	// (0x0004e460) cam6_indi_pane_cp01

0x0bee,	// (0x0004e468) cam6_mode_pane_cp01

0x0bf6,	// (0x0004e470) cam6_pano_pane

0x0bff,	// (0x0004e479) cam6_zoom_pane_cp01

0x0c07,	// (0x0004e481) cam6_pano_image_pane

0x0c10,	// (0x0004e48a) cam6_pano_pane_g1

0xde2b,	// (0x0005b6a5) cam6_pano_pane_g2

0x0c19,	// (0x0004e493) cam6_pano_pane_g3

0x0c22,	// (0x0004e49c) cam6_pano_pane_g4

0xcbca,	// (0x0005a444) cam6_pano_pane_g5

0x0c2b,	// (0x0004e4a5) cam6_pano_pane_g6

0x0c33,	// (0x0004e4ad) cam6_pano_pane_g7

0x0c3b,	// (0x0004e4b5) cam6_pano_pane_g8

0x0c44,	// (0x0004e4be) cam6_pano_pane_g9

0x0008,

0xfe51,	// (0x0005d6cb) cam6_pano_pane_g

0x0e8f,	// (0x0004e709) main_browser_tag_pane

0x08c8,	// (0x0004e142) grid_navstr_albumart_pane

0x0c4d,	// (0x0004e4c7) cell_navstr_albumart_pane_ParamLimits

0x0c4d,	// (0x0004e4c7) cell_navstr_albumart_pane

0xaf21,	// (0x0005879b) cell_navstr_albumart_pane_g1

0xbffe,	// (0x00059878) cell_navstr_albumart_pane_g2

0xc00e,	// (0x00059888) cell_navstr_albumart_pane_g3

0xc006,	// (0x00059880) cell_navstr_albumart_pane_g4

0x0003,

0xfe64,	// (0x0005d6de) cell_navstr_albumart_pane_g

0xa1ec,	// (0x00057a66) bt_list_pane_ParamLimits

0xa1ec,	// (0x00057a66) bt_list_pane

0xa1ff,	// (0x00057a79) bt_list_pane_t1

0xa20e,	// (0x00057a88) bt_list_pane_t2

0x0001,

0xfe6d,	// (0x0005d6e7) bt_list_pane_t

0x0e8f,	// (0x0004e709) main_cale_prevew_pane

0xa21d,	// (0x00057a97) popup_cale_preview_window_ParamLimits

0xa21d,	// (0x00057a97) popup_cale_preview_window

0x1970,	// (0x0004f1ea) bg_popup_preview_window_pane_cp05_ParamLimits

0x1970,	// (0x0004f1ea) bg_popup_preview_window_pane_cp05

0x0cac,	// (0x0004e526) list_cale_preview_pane_ParamLimits

0x0cac,	// (0x0004e526) list_cale_preview_pane

0xa232,	// (0x00057aac) list_double_cale_preview_pane_ParamLimits

0xa232,	// (0x00057aac) list_double_cale_preview_pane

0xa243,	// (0x00057abd) list_single_cale_preview_pane_ParamLimits

0xa243,	// (0x00057abd) list_single_cale_preview_pane

0x0cfa,	// (0x0004e574) list_single_cale_preview_pane_g1

0x0d02,	// (0x0004e57c) list_single_cale_preview_pane_t1_ParamLimits

0x0d02,	// (0x0004e57c) list_single_cale_preview_pane_t1

0xa257,	// (0x00057ad1) list_double_cale_preview_pane_g1

0xa25f,	// (0x00057ad9) list_double_cale_preview_pane_t1_ParamLimits

0xa25f,	// (0x00057ad9) list_double_cale_preview_pane_t1

0xa274,	// (0x00057aee) list_double_cale_preview_pane_t2_ParamLimits

0xa274,	// (0x00057aee) list_double_cale_preview_pane_t2

0x0001,

0xfe72,	// (0x0005d6ec) list_double_cale_preview_pane_t_ParamLimits

0xfe72,	// (0x0005d6ec) list_double_cale_preview_pane_t

0x0e8f,	// (0x0004e709) main_ezdial_pane

0x1970,	// (0x0004f1ea) main_sp_fs_email_pane_ParamLimits

0x9ab8,	// (0x00057332) cmail_ddmenu_btn01_pane_ParamLimits

0x9ab8,	// (0x00057332) cmail_ddmenu_btn01_pane

0x9acb,	// (0x00057345) cmail_ddmenu_btn02_pane_ParamLimits

0x9acb,	// (0x00057345) cmail_ddmenu_btn02_pane

0x9aee,	// (0x00057368) cmail_ddmenu_btn03_pane_ParamLimits

0x9aee,	// (0x00057368) cmail_ddmenu_btn03_pane

0x9b13,	// (0x0005738d) main_sp_fs_ctrlbar_pane_ParamLimits

0x9b34,	// (0x000573ae) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9f1f,	// (0x00057799) list_cmail_body_pane_ParamLimits

0xe2bc,	// (0x0005bb36) bg_button_pane_cp12

0x07e1,	// (0x0004e05b) list_single_cmail_header_detail_pane_g3_ParamLimits

0x07e1,	// (0x0004e05b) list_single_cmail_header_detail_pane_g3

0x9f73,	// (0x000577ed) list_single_cmail_header_detail_pane_t2_ParamLimits

0x9f73,	// (0x000577ed) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdf7,	// (0x0005d671) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdf7,	// (0x0005d671) list_single_cmail_header_detail_pane_t

0xe31b,	// (0x0005bb95) phacti_term_pane_t2_ParamLimits

0xe31b,	// (0x0005bb95) phacti_term_pane_t2

0x0001,

0xfe01,	// (0x0005d67b) phacti_term_pane_t_ParamLimits

0xfe01,	// (0x0005d67b) phacti_term_pane_t

0x0d2f,	// (0x0004e5a9) aid_size_list_single_double

0xa28c,	// (0x00057b06) popup_ezdial_listscroll_window

0xe422,	// (0x0005bc9c) popup_number_entry_window_cp01

0xadb2,	// (0x0005862c) bg_popup_call_pane_cp09

0x0d60,	// (0x0004e5da) ezdial_list_pane

0x0d68,	// (0x0004e5e2) scroll_pane_cp23

0xc221,	// (0x00059a9b) bg_button_pane_cp028_ParamLimits

0xc221,	// (0x00059a9b) bg_button_pane_cp028

0xe42e,	// (0x0005bca8) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe42e,	// (0x0005bca8) cmail_ddmenu_btn01_pane_g1

0xe43d,	// (0x0005bcb7) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe43d,	// (0x0005bcb7) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe77,	// (0x0005d6f1) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe77,	// (0x0005d6f1) cmail_ddmenu_btn01_pane_g

0x0d8e,	// (0x0004e608) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x0d8e,	// (0x0004e608) cmail_ddmenu_btn01_pane_t1

0xc221,	// (0x00059a9b) bg_button_pane_cp029_ParamLimits

0xc221,	// (0x00059a9b) bg_button_pane_cp029

0xe44d,	// (0x0005bcc7) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe44d,	// (0x0005bcc7) cmail_ddmenu_btn02_pane_g1

0xe468,	// (0x0005bce2) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe468,	// (0x0005bce2) cmail_ddmenu_btn02_pane_t1

0x1970,	// (0x0004f1ea) bg_button_pane_cp031_ParamLimits

0x1970,	// (0x0004f1ea) bg_button_pane_cp031

0xe44d,	// (0x0005bcc7) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe44d,	// (0x0005bcc7) cmail_ddmenu_btn03_pane_g1

0xe468,	// (0x0005bce2) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe468,	// (0x0005bce2) cmail_ddmenu_btn03_pane_t1

0x7920,	// (0x0005519a) cell_dialer2_keypad_pane_t1_ParamLimits

0x793a,	// (0x000551b4) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x793a,	// (0x000551b4) cell_dialer2_keypad_pane_t1_copy1

0x945a,	// (0x00056cd4) ncimui_group_button_pane

0x1970,	// (0x0004f1ea) main_sp_fs_calendar_pane_ParamLimits

0x9f1f,	// (0x00057799) list_single_cmail_header_caption_pane_ParamLimits

0xd5dc,	// (0x0005ae56) aid_recal_txt_sm_pane

0x0e8f,	// (0x0004e709) mian_recal_day_pane

0xe35e,	// (0x0005bbd8) popup_sp_fs_cale_preview_window_ParamLimits

0x0e8f,	// (0x0004e709) list_recal_day_pane

0xe498,	// (0x0005bd12) list_single_recal_day_pane_ParamLimits

0xe498,	// (0x0005bd12) list_single_recal_day_pane

0x0de3,	// (0x0004e65d) list_single_recal_day_pane_g1_ParamLimits

0x0de3,	// (0x0004e65d) list_single_recal_day_pane_g1

0xe4aa,	// (0x0005bd24) list_single_recal_day_pane_g2_ParamLimits

0xe4aa,	// (0x0005bd24) list_single_recal_day_pane_g2

0xe4b6,	// (0x0005bd30) list_single_recal_day_pane_g3_ParamLimits

0xe4b6,	// (0x0005bd30) list_single_recal_day_pane_g3

0xa2a2,	// (0x00057b1c) list_single_recal_day_pane_g4_ParamLimits

0xa2a2,	// (0x00057b1c) list_single_recal_day_pane_g4

0xe4c2,	// (0x0005bd3c) list_single_recal_day_pane_g5_ParamLimits

0xe4c2,	// (0x0005bd3c) list_single_recal_day_pane_g5

0xe4ce,	// (0x0005bd48) list_single_recal_day_pane_g6_ParamLimits

0xe4ce,	// (0x0005bd48) list_single_recal_day_pane_g6

0x0005,

0xfe86,	// (0x0005d700) list_single_recal_day_pane_g_ParamLimits

0xfe86,	// (0x0005d700) list_single_recal_day_pane_g

0xe4da,	// (0x0005bd54) list_single_recal_day_pane_t1

0xe4e8,	// (0x0005bd62) list_single_recal_day_pane_t2

0x0001,

0xfe93,	// (0x0005d70d) list_single_recal_day_pane_t

0xe4f6,	// (0x0005bd70) ncimui_query_button_pane_ParamLimits

0xe4f6,	// (0x0005bd70) ncimui_query_button_pane

0xe506,	// (0x0005bd80) ncimui_query_button_pane_t1_ParamLimits

0xe506,	// (0x0005bd80) ncimui_query_button_pane_t1

0x0e1e,	// (0x0004e698) ncimui_query_button_pane_t2_ParamLimits

0x0e1e,	// (0x0004e698) ncimui_query_button_pane_t2

0x0001,

0xfe98,	// (0x0005d712) ncimui_query_button_pane_t_ParamLimits

0xfe98,	// (0x0005d712) ncimui_query_button_pane_t

0xe519,	// (0x0005bd93) query_button_pane_ParamLimits

0xe519,	// (0x0005bd93) query_button_pane

0x0e8f,	// (0x0004e709) bg_button_pane_cp0028

0x0e3e,	// (0x0004e6b8) query_button_pane_t1

0x5c5c,	// (0x000534d6) main_tport_pane_ParamLimits

0x9e4e,	// (0x000576c8) bg_popup_window_pane_cp01_ParamLimits

0x9e4e,	// (0x000576c8) bg_popup_window_pane_cp01

0x9e66,	// (0x000576e0) heading_pane_cp08_ParamLimits

0x9e66,	// (0x000576e0) heading_pane_cp08

0x9e78,	// (0x000576f2) heading_pane_cp07_ParamLimits

0x9e78,	// (0x000576f2) heading_pane_cp07

0x0700,	// (0x0004df7a) cell_tport_appsw_pane_g2

0x0002,

0xfde4,	// (0x0005d65e) cell_tport_appsw_pane_g

0x5391,	// (0x00052c0b) input_candi_list_open_g1

0xa774,	// (0x00057fee) list_cale_time_pane_g6_ParamLimits

0xa774,	// (0x00057fee) list_cale_time_pane_g6

0x6902,	// (0x0005417c) aid_size_touch_calib_1_ParamLimits

0x6902,	// (0x0005417c) aid_size_touch_calib_1

0x690e,	// (0x00054188) aid_size_touch_calib_2_ParamLimits

0x690e,	// (0x00054188) aid_size_touch_calib_2

0x6922,	// (0x0005419c) aid_size_touch_calib_3_ParamLimits

0x6922,	// (0x0005419c) aid_size_touch_calib_3

0x693a,	// (0x000541b4) aid_size_touch_calib_4_ParamLimits

0x693a,	// (0x000541b4) aid_size_touch_calib_4

0x694c,	// (0x000541c6) main_touch_calib_button_group_pane_ParamLimits

0x694c,	// (0x000541c6) main_touch_calib_button_group_pane

0x6962,	// (0x000541dc) main_touch_calib_pane_g1_ParamLimits

0x696e,	// (0x000541e8) main_touch_calib_pane_g2_ParamLimits

0x697a,	// (0x000541f4) main_touch_calib_pane_g3_ParamLimits

0x6986,	// (0x00054200) main_touch_calib_pane_g4_ParamLimits

0xf7cb,	// (0x0005d045) main_touch_calib_pane_g_ParamLimits

0x6992,	// (0x0005420c) main_touch_calib_pane_t1_ParamLimits

0x69aa,	// (0x00054224) main_touch_calib_pane_t2_ParamLimits

0x69c2,	// (0x0005423c) main_touch_calib_pane_t3_ParamLimits

0x69d4,	// (0x0005424e) main_touch_calib_pane_t4_ParamLimits

0x69e6,	// (0x00054260) main_touch_calib_pane_t5_ParamLimits

0xf7d4,	// (0x0005d04e) main_touch_calib_pane_t_ParamLimits

0xc9f5,	// (0x0005a26f) list_single_fp_cale_pane_g3_ParamLimits

0xc9f5,	// (0x0005a26f) list_single_fp_cale_pane_g3

0xeff3,	// (0x0005c86d) bg_button_pane_cp012_ParamLimits

0xeff3,	// (0x0005c86d) bg_vkb2_func_pane_cp03_ParamLimits

0x87e9,	// (0x00056063) cell_vitu2_function_top_pane_g1_ParamLimits

0xeff3,	// (0x0005c86d) bg_vkb2_func_pane_cp04_ParamLimits

0x9410,	// (0x00056c8a) main_ncimui_button_group_pane_ParamLimits

0x9410,	// (0x00056c8a) main_ncimui_button_group_pane

0x9448,	// (0x00056cc2) main_ncimui_pane_t3_ParamLimits

0x9448,	// (0x00056cc2) main_ncimui_pane_t3

0x091d,	// (0x0004e197) phacti_button_group_pane

0x0d2f,	// (0x0004e5a9) aid_size_list_single_double_ParamLimits

0xa28c,	// (0x00057b06) popup_ezdial_listscroll_window_ParamLimits

0xe422,	// (0x0005bc9c) popup_number_entry_window_cp01_ParamLimits

0xe52b,	// (0x0005bda5) phacti_button_pane_ParamLimits

0xe52b,	// (0x0005bda5) phacti_button_pane

0x0e8f,	// (0x0004e709) bg_button_pane_cp14

0x19a1,	// (0x0004f21b) phacti_button_pane_t1

0xe53a,	// (0x0005bdb4) main_touch_calib_button_pane_ParamLimits

0xe53a,	// (0x0005bdb4) main_touch_calib_button_pane

0x1615,	// (0x0004ee8f) bg_button_pane_cp18_ParamLimits

0x1615,	// (0x0004ee8f) bg_button_pane_cp18

0x19bf,	// (0x0004f239) main_touch_calib_button_pane_t1_ParamLimits

0x19bf,	// (0x0004f239) main_touch_calib_button_pane_t1

0x19d5,	// (0x0004f24f) main_touch_calib_button_pane_t2_ParamLimits

0x19d5,	// (0x0004f24f) main_touch_calib_button_pane_t2

0x0001,

0xfe9d,	// (0x0005d717) main_touch_calib_button_pane_t_ParamLimits

0xfe9d,	// (0x0005d717) main_touch_calib_button_pane_t

0x0e8f,	// (0x0004e709) cell_ncimui_button_pane

0x0e8f,	// (0x0004e709) bg_button_pane_cp032

0x19f3,	// (0x0004f26d) cell_ncimui_button_pane_t1

0xef7b,	// (0x0005c7f5) image3_infobar_pane_ParamLimits

0xef7b,	// (0x0005c7f5) image3_infobar_pane

0x97a6,	// (0x00057020) fs_bigclock_status_pane_ParamLimits

0x97a6,	// (0x00057020) fs_bigclock_status_pane

0x97b3,	// (0x0005702d) main_fs_bigclock_clock_pane_ParamLimits

0x97b3,	// (0x0005702d) main_fs_bigclock_clock_pane

0x97c2,	// (0x0005703c) main_fs_bigclock_indi_pane_ParamLimits

0x97c2,	// (0x0005703c) main_fs_bigclock_indi_pane

0x97d6,	// (0x00057050) main_fs_bigclock_swipe_pane_ParamLimits

0x97d6,	// (0x00057050) main_fs_bigclock_swipe_pane

0x0e8f,	// (0x0004e709) main_fs_clock_dumped_data

0xdf38,	// (0x0005b7b2) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdf38,	// (0x0005b7b2) list_single_fs_bigclock_indicator_pane_g1

0xdf52,	// (0x0005b7cc) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdf52,	// (0x0005b7cc) list_single_fs_bigclock_indicator_pane_g2

0xdf6c,	// (0x0005b7e6) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdf6c,	// (0x0005b7e6) list_single_fs_bigclock_indicator_pane_g3

0xdf86,	// (0x0005b800) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdf86,	// (0x0005b800) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcd5,	// (0x0005d54f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcd5,	// (0x0005d54f) list_single_fs_bigclock_indicator_pane_g

0xdfaa,	// (0x0005b824) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdfaa,	// (0x0005b824) list_single_fs_bigclock_indicator_pane_t1

0xdfd2,	// (0x0005b84c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdfd2,	// (0x0005b84c) list_single_fs_bigclock_indicator_pane_t2

0xdffa,	// (0x0005b874) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdffa,	// (0x0005b874) list_single_fs_bigclock_indicator_pane_t3

0xe022,	// (0x0005b89c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe022,	// (0x0005b89c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfce0,	// (0x0005d55a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfce0,	// (0x0005d55a) list_single_fs_bigclock_indicator_pane_t

0x1a01,	// (0x0004f27b) image3_infobar_fav_pane_ParamLimits

0x1a01,	// (0x0004f27b) image3_infobar_fav_pane

0x1a11,	// (0x0004f28b) image3_infobar_loc_pane_ParamLimits

0x1a11,	// (0x0004f28b) image3_infobar_loc_pane

0x1a25,	// (0x0004f29f) image3_infobar_time_pane_ParamLimits

0x1a25,	// (0x0004f29f) image3_infobar_time_pane

0xc664,	// (0x00059ede) image3_infobar_time_pane_g1

0x1a35,	// (0x0004f2af) image3_infobar_time_pane_t1

0xc664,	// (0x00059ede) image3_infobar_loc_pane_g1

0x1a43,	// (0x0004f2bd) image3_infobar_loc_pane_g2

0x0001,

0xfea2,	// (0x0005d71c) image3_infobar_loc_pane_g

0x1a4b,	// (0x0004f2c5) image3_infobar_loc_pane_t1

0xc664,	// (0x00059ede) image3_infobar_fav_pane_g1

0x1a59,	// (0x0004f2d3) image3_infobar_fav_pane_g2

0x0001,

0xfea7,	// (0x0005d721) image3_infobar_fav_pane_g

0x1a61,	// (0x0004f2db) fs_bigclock_status_battery_pane

0x1a6a,	// (0x0004f2e4) fs_bigclock_status_signal_pane

0x1a73,	// (0x0004f2ed) fs_bigclock_status_title_pane

0x1a7c,	// (0x0004f2f6) fs_bigclock_status_signal_pane_g1

0x1a85,	// (0x0004f2ff) fs_bigclock_status_signal_pane_g2

0x0001,

0xfeac,	// (0x0005d726) fs_bigclock_status_signal_pane_g

0x1a8d,	// (0x0004f307) fs_bigclock_status_battery_pane_g1

0x1a96,	// (0x0004f310) fs_bigclock_status_battery_pane_g2

0x0001,

0xfeb1,	// (0x0005d72b) fs_bigclock_status_battery_pane_g

0x1a9e,	// (0x0004f318) fs_bigclock_status_title_pane_t1

0xc664,	// (0x00059ede) main_fs_bigclock_clock_pane_g1

0x1aac,	// (0x0004f326) main_fs_bigclock_clock_pane_g2

0x1aac,	// (0x0004f326) main_fs_bigclock_clock_pane_g3

0x1aac,	// (0x0004f326) main_fs_bigclock_clock_pane_g4

0x0003,

0xfeb6,	// (0x0005d730) main_fs_bigclock_clock_pane_g

0x1ab4,	// (0x0004f32e) main_fs_bigclock_clock_pane_t1

0x1ac2,	// (0x0004f33c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfebf,	// (0x0005d739) main_fs_bigclock_clock_pane_t

0x1ad1,	// (0x0004f34b) list_single_fs_bigclock_indicator_pane_ParamLimits

0x1ad1,	// (0x0004f34b) list_single_fs_bigclock_indicator_pane

0xe54d,	// (0x0005bdc7) list_single_fs_bigclock_pane_ParamLimits

0xe54d,	// (0x0005bdc7) list_single_fs_bigclock_pane

0x1b49,	// (0x0004f3c3) main_fs_bigclock_indicator_pane_t1

0x1b58,	// (0x0004f3d2) list_single_fs_bigclock_pane_g1

0x1b60,	// (0x0004f3da) list_single_fs_bigclock_pane_t1

0xc664,	// (0x00059ede) main_fs_bigclock_swipe_pane_g1

0x1b9e,	// (0x0004f418) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfed0,	// (0x0005d74a) main_fs_bigclock_swipe_pane_g

0x1ba6,	// (0x0004f420) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x1ba6,	// (0x0004f420) main_fs_bigclock_swipe_pane_t1

0x4cb1,	// (0x0005252b) call_type_pane_ParamLimits

0x0e8f,	// (0x0004e709) main_btmg_pane

0xe3a6,	// (0x0005bc20) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe3a6,	// (0x0005bc20) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe43,	// (0x0005d6bd) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe43,	// (0x0005d6bd) list_single_cale_mrui_row_pane_g

0x0dd3,	// (0x0004e64d) list_recal_vselct_arw_lo_pane

0x0ddb,	// (0x0004e655) list_recal_vselct_arw_up_pane

0xe48f,	// (0x0005bd09) list_recal_vselct_pane

0x1bc3,	// (0x0004f43d) btmg_button_pane

0xe5ad,	// (0x0005be27) main_btmg_pane_g1

0x0e8f,	// (0x0004e709) bg_button_pane_cp044

0x1bd3,	// (0x0004f44d) btmg_button_pane_t1

0xc219,	// (0x00059a93) aid_listscroll_gen

0x1970,	// (0x0004f1ea) main_cntbar_detail_pane

0x075f,	// (0x0004dfd9) list_cmail_folder_pane

0x076f,	// (0x0004dfe9) sp_fs_scroll_pane_cp03_ParamLimits

0x9f1f,	// (0x00057799) list_single_fs_dyc_pane_cp01_ParamLimits

0x9f1f,	// (0x00057799) list_single_fs_dyc_pane_cp01

0x1be1,	// (0x0004f45b) aid_size_cmail_indent

0xd5e5,	// (0x0005ae5f) list_single_dyc_row_pane_cp01

0xe5dd,	// (0x0005be57) cntbar_detail_list_pane_ParamLimits

0xe5dd,	// (0x0005be57) cntbar_detail_list_pane

0xe623,	// (0x0005be9d) main_cntbar_detail_cont_pane_ParamLimits

0xe623,	// (0x0005be9d) main_cntbar_detail_cont_pane

0xe637,	// (0x0005beb1) scroll_pane_cp032_ParamLimits

0xe637,	// (0x0005beb1) scroll_pane_cp032

0xe643,	// (0x0005bebd) cntbar_detail_list_event_pane_ParamLimits

0xe643,	// (0x0005bebd) cntbar_detail_list_event_pane

0xe5ed,	// (0x0005be67) cntbar_detail_list_shct_pane

0x1c62,	// (0x0004f4dc) aid_list_gen

0x171a,	// (0x0004ef94) aid_scroll

0xd5ba,	// (0x0005ae34) aid_size_touch_scroll_bar

0xe654,	// (0x0005bece) aid_list_double

0xa2b0,	// (0x00057b2a) aid_list_single

0xe654,	// (0x0005bece) aid_list_single_lg

0xe65d,	// (0x0005bed7) aid_list_z_g_a_sm

0xa2b9,	// (0x00057b33) aid_list_z_g_d

0xa2c1,	// (0x00057b3b) aid_txt_z_prm

0xe665,	// (0x0005bedf) aid_txt_z_prm_cp01

0xe673,	// (0x0005beed) aid_txt_z_sec

0xe681,	// (0x0005befb) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe681,	// (0x0005befb) main_cntbar_detail_cont_pane_g1

0xe695,	// (0x0005bf0f) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe695,	// (0x0005bf0f) main_cntbar_detail_cont_pane_g2

0x0001,

0xfed5,	// (0x0005d74f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfed5,	// (0x0005d74f) main_cntbar_detail_cont_pane_g

0x1c84,	// (0x0004f4fe) main_cntbar_detail_cont_pane_t1

0x1c92,	// (0x0004f50c) main_cntbar_detail_cont_pane_t2

0x1ca0,	// (0x0004f51a) main_cntbar_detail_cont_pane_t3

0x0002,

0xfeda,	// (0x0005d754) main_cntbar_detail_cont_pane_t

0xe6a5,	// (0x0005bf1f) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe6a5,	// (0x0005bf1f) cell_cntbar_detail_list_shct_pane

0x1cc0,	// (0x0004f53a) cntbar_detail_list_shct_pane_g1

0x1cc9,	// (0x0004f543) cntbar_detail_list_shct_pane_g2

0x0001,

0xfee1,	// (0x0005d75b) cntbar_detail_list_shct_pane_g

0xe6b7,	// (0x0005bf31) cntbar_detail_list_event_pane_g1_ParamLimits

0xe6b7,	// (0x0005bf31) cntbar_detail_list_event_pane_g1

0xe6c3,	// (0x0005bf3d) cntbar_detail_list_event_pane_g2_ParamLimits

0xe6c3,	// (0x0005bf3d) cntbar_detail_list_event_pane_g2

0x0005,

0xfee6,	// (0x0005d760) cntbar_detail_list_event_pane_g_ParamLimits

0xfee6,	// (0x0005d760) cntbar_detail_list_event_pane_g

0xe72f,	// (0x0005bfa9) cntbar_detail_list_event_pane_t1_ParamLimits

0xe72f,	// (0x0005bfa9) cntbar_detail_list_event_pane_t1

0xe744,	// (0x0005bfbe) cntbar_detail_list_event_pane_t2_ParamLimits

0xe744,	// (0x0005bfbe) cntbar_detail_list_event_pane_t2

0x0002,

0xfef3,	// (0x0005d76d) cntbar_detail_list_event_pane_t_ParamLimits

0xfef3,	// (0x0005d76d) cntbar_detail_list_event_pane_t

0xc664,	// (0x00059ede) cell_cntbar_detail_list_shct_pane_g1

0xad71,	// (0x000585eb) navi_pane_mv_g3

0x1970,	// (0x0004f1ea) main_cntbar_detail_pane_ParamLimits

0x0e8f,	// (0x0004e709) main_notif_wgt_pane

0xed8f,	// (0x0005c609) aid_tch_main_mp4_pane_g4

0xef73,	// (0x0005c7ed) popup_slider_window_cp02

0xe48f,	// (0x0005bd09) list_recal_day_event_pane

0xe5b5,	// (0x0005be2f) cntbar_detail_btn_pane_ParamLimits

0xe5b5,	// (0x0005be2f) cntbar_detail_btn_pane

0xe5c8,	// (0x0005be42) cntbar_detail_btn_pane_cp01_ParamLimits

0xe5c8,	// (0x0005be42) cntbar_detail_btn_pane_cp01

0xe5ed,	// (0x0005be67) cntbar_detail_list_shct_pane_ParamLimits

0xe5fd,	// (0x0005be77) cntbar_detail_pane_g1_ParamLimits

0xe5fd,	// (0x0005be77) cntbar_detail_pane_g1

0xe60d,	// (0x0005be87) cntbar_detail_pane_t1_ParamLimits

0xe60d,	// (0x0005be87) cntbar_detail_pane_t1

0xe6cf,	// (0x0005bf49) cntbar_detail_list_event_pane_g3_ParamLimits

0xe6cf,	// (0x0005bf49) cntbar_detail_list_event_pane_g3

0xe6e7,	// (0x0005bf61) cntbar_detail_list_event_pane_g4_ParamLimits

0xe6e7,	// (0x0005bf61) cntbar_detail_list_event_pane_g4

0xe6ff,	// (0x0005bf79) cntbar_detail_list_event_pane_g5_ParamLimits

0xe6ff,	// (0x0005bf79) cntbar_detail_list_event_pane_g5

0xe717,	// (0x0005bf91) cntbar_detail_list_event_pane_g6_ParamLimits

0xe717,	// (0x0005bf91) cntbar_detail_list_event_pane_g6

0xe759,	// (0x0005bfd3) cntbar_detail_list_event_pane_t3_ParamLimits

0xe759,	// (0x0005bfd3) cntbar_detail_list_event_pane_t3

0xe76b,	// (0x0005bfe5) popup_notif_wgt_window_ParamLimits

0xe76b,	// (0x0005bfe5) popup_notif_wgt_window

0xe780,	// (0x0005bffa) popup_submenu_window_cp01_ParamLimits

0xe780,	// (0x0005bffa) popup_submenu_window_cp01

0xadb2,	// (0x0005862c) bg_popup_window_pane_cp10

0x1da0,	// (0x0004f61a) listscroll_notif_wgt_pane

0x1da8,	// (0x0004f622) list_notif_wgt_window

0x1db1,	// (0x0004f62b) scroll_pane_cp033

0x1dba,	// (0x0004f634) list_notif_wgt_row_pane_ParamLimits

0x1dba,	// (0x0004f634) list_notif_wgt_row_pane

0x1dcc,	// (0x0004f646) aid_size_list_notif_wgt_del

0x1dd5,	// (0x0004f64f) list_notif_wgt_row_pane_g1

0x1ddd,	// (0x0004f657) list_notif_wgt_row_pane_g2

0x1de5,	// (0x0004f65f) list_notif_wgt_row_pane_g3

0x0002,

0xfefa,	// (0x0005d774) list_notif_wgt_row_pane_g

0x1dee,	// (0x0004f668) list_notif_wgt_row_pane_t1

0x1dfc,	// (0x0004f676) list_notif_wgt_row_pane_t2

0x1e0a,	// (0x0004f684) list_notif_wgt_row_pane_t3

0x0002,

0xff01,	// (0x0005d77b) list_notif_wgt_row_pane_t

0xd2c4,	// (0x0005ab3e) list_recal_day_event_pane_g1

0x1e18,	// (0x0004f692) list_recal_day_event_pane_t1

0x0e8f,	// (0x0004e709) bg_button_pane_cp045

0xe790,	// (0x0005c00a) cntbar_detail_btn_pane_t1

0xc221,	// (0x00059a9b) main_callh_pane_ParamLimits

0xc221,	// (0x00059a9b) main_callh_pane

0x0e8f,	// (0x0004e709) main_coverflow0_pane

0x0e8f,	// (0x0004e709) main_wgtman_pane

0x97e2,	// (0x0005705c) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x97e2,	// (0x0005705c) main_fs_bigclock_unlock_btn_pane

0x06ef,	// (0x0004df69) bg_button_pane_cp16

0x0708,	// (0x0004df82) cell_tport_appsw_pane_g3

0xe79e,	// (0x0005c018) cf0_flow_pane_ParamLimits

0xe79e,	// (0x0005c018) cf0_flow_pane

0x1e44,	// (0x0004f6be) listscroll_cf0_pane

0x1e4d,	// (0x0004f6c7) main_cf0_pane_g1

0xe7b3,	// (0x0005c02d) main_cf0_pane_t1_ParamLimits

0xe7b3,	// (0x0005c02d) main_cf0_pane_t1

0xe7c9,	// (0x0005c043) main_cf0_pane_t2_ParamLimits

0xe7c9,	// (0x0005c043) main_cf0_pane_t2

0x0001,

0xff08,	// (0x0005d782) main_cf0_pane_t_ParamLimits

0xff08,	// (0x0005d782) main_cf0_pane_t

0x1e7b,	// (0x0004f6f5) scroll_pane_cp11

0xe7df,	// (0x0005c059) cf0_flow_pane_g1

0xe7e7,	// (0x0005c061) cf0_flow_pane_g2

0x0001,

0xff0d,	// (0x0005d787) cf0_flow_pane_g

0xe7ef,	// (0x0005c069) cf0_flow_pane_t1

0x0e8f,	// (0x0004e709) main_call6_pane

0x0e8f,	// (0x0004e709) main_calllock_pane

0xe7fd,	// (0x0005c077) call6_btn_grp_pane_ParamLimits

0xe7fd,	// (0x0005c077) call6_btn_grp_pane

0xe813,	// (0x0005c08d) call6_pane_g1_ParamLimits

0xe813,	// (0x0005c08d) call6_pane_g1

0xe826,	// (0x0005c0a0) popup_call6_1st_window_ParamLimits

0xe826,	// (0x0005c0a0) popup_call6_1st_window

0xe835,	// (0x0005c0af) popup_call6_2nd_window_ParamLimits

0xe835,	// (0x0005c0af) popup_call6_2nd_window

0xe844,	// (0x0005c0be) cell_call6_btn_pane_ParamLimits

0xe844,	// (0x0005c0be) cell_call6_btn_pane

0xadb2,	// (0x0005862c) bg_popup_call2_in_pane_cp03

0x1ee3,	// (0x0004f75d) popup_call6_1st_window_g1

0x1eeb,	// (0x0004f765) popup_call6_1st_window_g2

0x1ef3,	// (0x0004f76d) popup_call6_1st_window_g3

0x0002,

0xff12,	// (0x0005d78c) popup_call6_1st_window_g

0x1efb,	// (0x0004f775) popup_call6_1st_window_t1

0x1f0a,	// (0x0004f784) popup_call6_1st_window_t2

0x1f18,	// (0x0004f792) popup_call6_1st_window_t3

0x0002,

0xff19,	// (0x0005d793) popup_call6_1st_window_t

0xadb2,	// (0x0005862c) bg_popup_call2_in_pane_cp04

0x1ee3,	// (0x0004f75d) popup_call6_2nd_window_g1

0x1eeb,	// (0x0004f765) popup_call6_2nd_window_g2

0x1ef3,	// (0x0004f76d) popup_call6_2nd_window_g3

0x0002,

0xff12,	// (0x0005d78c) popup_call6_2nd_window_g

0x1efb,	// (0x0004f775) popup_call6_2nd_window_t1

0x0e8f,	// (0x0004e709) bg_button_pane_cp15

0x1f26,	// (0x0004f7a0) cell_call6_btn_pane_g1

0x1f2f,	// (0x0004f7a9) cell_call6_btn_pane_t1

0xe858,	// (0x0005c0d2) listscroll_wgtman_pane_ParamLimits

0xe858,	// (0x0005c0d2) listscroll_wgtman_pane

0xe86e,	// (0x0005c0e8) wgtman_btn_pane_ParamLimits

0xe86e,	// (0x0005c0e8) wgtman_btn_pane

0xabf3,	// (0x0005846d) aid_scroll_copy1

0x1f57,	// (0x0004f7d1) list_wgtman_pane

0xe885,	// (0x0005c0ff) wgtman_btn_pane_g1_ParamLimits

0xe885,	// (0x0005c0ff) wgtman_btn_pane_g1

0xe899,	// (0x0005c113) wgtman_btn_pane_t1_ParamLimits

0xe899,	// (0x0005c113) wgtman_btn_pane_t1

0x1f7f,	// (0x0004f7f9) wgtman_btn_pane_t2_ParamLimits

0x1f7f,	// (0x0004f7f9) wgtman_btn_pane_t2

0x0001,

0xff20,	// (0x0005d79a) wgtman_btn_pane_t_ParamLimits

0xff20,	// (0x0005d79a) wgtman_btn_pane_t

0xe8b4,	// (0x0005c12e) listrow_wgtman_pane_ParamLimits

0xe8b4,	// (0x0005c12e) listrow_wgtman_pane

0xe8c5,	// (0x0005c13f) listrow_wgtman_pane_g1

0xe8ce,	// (0x0005c148) listrow_wgtman_pane_g2

0x0001,

0xff25,	// (0x0005d79f) listrow_wgtman_pane_g

0xa2cf,	// (0x00057b49) listrow_wgtman_pane_t1

0xa2dd,	// (0x00057b57) listrow_wgtman_pane_t2

0x0001,

0xff2a,	// (0x0005d7a4) listrow_wgtman_pane_t

0xa2eb,	// (0x00057b65) wait_bar_pane_cp09

0x1fb3,	// (0x0004f82d) main_calllock_btn_pane

0x1fbb,	// (0x0004f835) main_calllock_pane_g1

0x0e8f,	// (0x0004e709) bg_button_pane_cp17

0x1fc4,	// (0x0004f83e) main_calllock_btn_pane_g1

0x1fcd,	// (0x0004f847) main_calllock_btn_pane_t1

0x0e8f,	// (0x0004e709) main_dialer3_pane

0x0e8f,	// (0x0004e709) main_fmrd2_pane

0xc664,	// (0x00059ede) main_fs_bigclock_unlock_btn_pane_g1

0x1fe4,	// (0x0004f85e) main_fs_bigclock_unlock_btn_pane_t1

0xe8d6,	// (0x0005c150) area_fmrd2_info_pane_ParamLimits

0xe8d6,	// (0x0005c150) area_fmrd2_info_pane

0xe8e6,	// (0x0005c160) area_fmrd2_visual_pane_ParamLimits

0xe8e6,	// (0x0005c160) area_fmrd2_visual_pane

0xe8f4,	// (0x0005c16e) fmrd2_indi_pane_ParamLimits

0xe8f4,	// (0x0005c16e) fmrd2_indi_pane

0xe901,	// (0x0005c17b) area_fmrd2_visual_pane_g1

0xe909,	// (0x0005c183) area_fmrd2_visual_pane_t1

0xe917,	// (0x0005c191) area_fmrd2_visual_pane_t2

0xe925,	// (0x0005c19f) area_fmrd2_visual_pane_t3

0x0002,

0xff34,	// (0x0005d7ae) area_fmrd2_visual_pane_t

0xe933,	// (0x0005c1ad) area_fmrd2_info_pane_g1

0xe93b,	// (0x0005c1b5) area_fmrd2_info_pane_t1

0xe949,	// (0x0005c1c3) area_fmrd2_info_pane_t2

0xe957,	// (0x0005c1d1) area_fmrd2_info_pane_t3

0xe965,	// (0x0005c1df) area_fmrd2_info_pane_t4

0x0003,

0xff3b,	// (0x0005d7b5) area_fmrd2_info_pane_t

0xe973,	// (0x0005c1ed) fmrd2_indi_pane_t1

0xe981,	// (0x0005c1fb) fmrd2_indi_pane_t2

0xe98f,	// (0x0005c209) fmrd2_indi_pane_t3

0x0002,

0xff44,	// (0x0005d7be) fmrd2_indi_pane_t

0xdf95,	// (0x0005b80f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdf95,	// (0x0005b80f) list_single_fs_bigclock_indicator_pane_g5

0xe037,	// (0x0005b8b1) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe037,	// (0x0005b8b1) list_single_fs_bigclock_indicator_pane_t5

0xa04e,	// (0x000578c8) aid_cell_bcale_month_pane_ParamLimits

0xa04e,	// (0x000578c8) aid_cell_bcale_month_pane

0xa060,	// (0x000578da) bcale_month_pane_ParamLimits

0xa060,	// (0x000578da) bcale_month_pane

0xa072,	// (0x000578ec) bcale_preview_pane_ParamLimits

0xa072,	// (0x000578ec) bcale_preview_pane

0x1b60,	// (0x0004f3da) list_single_fs_bigclock_pane_t1_ParamLimits

0x1b7a,	// (0x0004f3f4) list_single_fs_bigclock_pane_t2_ParamLimits

0x1b7a,	// (0x0004f3f4) list_single_fs_bigclock_pane_t2

0x0001,

0xfecb,	// (0x0005d745) list_single_fs_bigclock_pane_t_ParamLimits

0xfecb,	// (0x0005d745) list_single_fs_bigclock_pane_t

0x1fdc,	// (0x0004f856) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff2f,	// (0x0005d7a9) main_fs_bigclock_unlock_btn_pane_g

0xe99d,	// (0x0005c217) aid_dia3_key_size_ParamLimits

0xe99d,	// (0x0005c217) aid_dia3_key_size

0xe9ac,	// (0x0005c226) aid_dia3_listrow_size_ParamLimits

0xe9ac,	// (0x0005c226) aid_dia3_listrow_size

0xe9b8,	// (0x0005c232) dia3_keypad_fun_pane_ParamLimits

0xe9b8,	// (0x0005c232) dia3_keypad_fun_pane

0xe9cc,	// (0x0005c246) dia3_keypad_num_pane_ParamLimits

0xe9cc,	// (0x0005c246) dia3_keypad_num_pane

0xe9dd,	// (0x0005c257) dia3_listscroll_pane_ParamLimits

0xe9dd,	// (0x0005c257) dia3_listscroll_pane

0xe9ee,	// (0x0005c268) dia3_numentry_pane_ParamLimits

0xe9ee,	// (0x0005c268) dia3_numentry_pane

0x20fe,	// (0x0004f978) dia3_list_pane

0x2107,	// (0x0004f981) scroll_pane_cp12

0x0e8f,	// (0x0004e709) bg_dia3_numentry_pane

0x2110,	// (0x0004f98a) dia3_numentry_pane_t1

0xe9fd,	// (0x0005c277) cell_dia3_key_num_pane

0xea05,	// (0x0005c27f) cell_dia3_key0_fun_pane_ParamLimits

0xea05,	// (0x0005c27f) cell_dia3_key0_fun_pane

0xea19,	// (0x0005c293) cell_dia3_key1_fun_pane_ParamLimits

0xea19,	// (0x0005c293) cell_dia3_key1_fun_pane

0xea30,	// (0x0005c2aa) dia3_listrow_pane

0xdcc2,	// (0x0005b53c) bg_dia3_numentry_pane_g1

0x0e8f,	// (0x0004e709) bg_button_pane_cp21

0x214a,	// (0x0004f9c4) cell_dia3_key_num_pane_t1

0x2158,	// (0x0004f9d2) cell_dia3_key_num_pane_t2

0x2167,	// (0x0004f9e1) cell_dia3_key_num_pane_t3

0x2176,	// (0x0004f9f0) cell_dia3_key_num_pane_t4

0x0003,

0xff4b,	// (0x0005d7c5) cell_dia3_key_num_pane_t

0x0e8f,	// (0x0004e709) bg_button_pane_cp19

0x2185,	// (0x0004f9ff) cell_dia3_key0_fun_pane_g1

0x0e8f,	// (0x0004e709) bg_button_pane_cp20

0xea39,	// (0x0005c2b3) cell_dia3_key1_fun_pane_g1

0xea41,	// (0x0005c2bb) area_left_week_number_pane

0xea4a,	// (0x0005c2c4) area_top_day_name_pane

0xea53,	// (0x0005c2cd) frame_month_view_pane

0xea5b,	// (0x0005c2d5) grid_month_view_pane

0xea65,	// (0x0005c2df) cell_top_day_name_pane_ParamLimits

0xea65,	// (0x0005c2df) cell_top_day_name_pane

0xea7b,	// (0x0005c2f5) cell_area_left_week_number_pane_ParamLimits

0xea7b,	// (0x0005c2f5) cell_area_left_week_number_pane

0xea8f,	// (0x0005c309) cell_month_view_pane_ParamLimits

0xea8f,	// (0x0005c309) cell_month_view_pane

0x21fe,	// (0x0004fa78) frm_month_g1

0xeaaa,	// (0x0005c324) frm_month_g2

0xeab2,	// (0x0005c32c) frm_month_g3

0xeaba,	// (0x0005c334) frm_month_g4

0xeac2,	// (0x0005c33c) frm_month_g5

0xeaca,	// (0x0005c344) frm_month_g6

0xead2,	// (0x0005c34c) frm_month_g7

0x2237,	// (0x0004fab1) frm_month_g8

0xeada,	// (0x0005c354) frm_month_g9

0xeae3,	// (0x0005c35d) frm_month_g10

0xeaec,	// (0x0005c366) frm_month_g11

0xeaf5,	// (0x0005c36f) frm_month_g12

0xeafe,	// (0x0005c378) frm_month_g13

0xeb07,	// (0x0005c381) frm_month_g14

0xeb10,	// (0x0005c38a) frm_month_g15

0xeb19,	// (0x0005c393) frm_month_g16

0x000f,

0xff54,	// (0x0005d7ce) frm_month_g

0xeb22,	// (0x0005c39c) cell_top_day_name_pane_t1

0xeb31,	// (0x0005c3ab) cell_area_left_week_number_pane_g1

0xeb22,	// (0x0005c39c) cell_area_left_week_number_pane_t1

0xc664,	// (0x00059ede) cell_month_view_pane_g1

0xeb39,	// (0x0005c3b3) cell_month_view_pane_t1

0x0e8f,	// (0x0004e709) main_fps_pane

0x0220,	// (0x0004da9a) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x0220,	// (0x0004da9a) cmail_ddmenu_btn02_pane_cp1

0x023c,	// (0x0004dab6) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x023c,	// (0x0004dab6) cmail_ddmenu_btn02_pane_cp2

0xe45c,	// (0x0005bcd6) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe45c,	// (0x0005bcd6) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe7c,	// (0x0005d6f6) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe7c,	// (0x0005d6f6) cmail_ddmenu_btn02_pane_g

0xe47d,	// (0x0005bcf7) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe47d,	// (0x0005bcf7) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe81,	// (0x0005d6fb) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe81,	// (0x0005d6fb) cmail_ddmenu_btn02_pane_t

0xeb48,	// (0x0005c3c2) fps_text_pane_ParamLimits

0xeb48,	// (0x0005c3c2) fps_text_pane

0xeb5e,	// (0x0005c3d8) main_fps_pane_g1_ParamLimits

0xeb5e,	// (0x0005c3d8) main_fps_pane_g1

0xeb74,	// (0x0005c3ee) wait_bar_pane_cp010_ParamLimits

0xeb74,	// (0x0005c3ee) wait_bar_pane_cp010

0xeb85,	// (0x0005c3ff) fps_text_pane_t1_ParamLimits

0xeb85,	// (0x0005c3ff) fps_text_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Small
