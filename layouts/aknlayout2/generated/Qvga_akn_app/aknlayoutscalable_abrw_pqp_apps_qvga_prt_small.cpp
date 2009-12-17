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

#include "aknlayoutscalable_abrw_pqp_apps_qvga_prt_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00040a37 };

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
0x6c1f,	// (0x00047656) Screen

0x6c29,	// (0x00047660) application_window

0x6c5b,	// (0x00047692) area_bottom_pane_ParamLimits

0x6c5b,	// (0x00047692) area_bottom_pane

0x6c8a,	// (0x000476c1) area_top_pane_ParamLimits

0x6c8a,	// (0x000476c1) area_top_pane

0xdd01,	// (0x0004e738) call_video_uplink_pane_ParamLimits

0xdd01,	// (0x0004e738) call_video_uplink_pane

0x6d0d,	// (0x00047744) main_pane_ParamLimits

0x6d0d,	// (0x00047744) main_pane

0x3583,	// (0x00043fba) context_pane

0x9644,	// (0x0004a07b) navi_pane

0x965e,	// (0x0004a095) popup_cale_events_window_ParamLimits

0x965e,	// (0x0004a095) popup_cale_events_window

0x3596,	// (0x00043fcd) popup_mup_playback_window

0x9675,	// (0x0004a0ac) signal_pane

0xe458,	// (0x0004ee8f) main_browser_pane

0x20cb,	// (0x00042b02) main_burst_pane

0x42f0,	// (0x00044d27) main_calc_pane

0x20cb,	// (0x00042b02) main_cale_day_pane

0xe580,	// (0x0004efb7) main_cale_month_pane

0x20cb,	// (0x00042b02) main_cale_week_pane

0x20cb,	// (0x00042b02) main_call_pane

0xe12e,	// (0x0004eb65) main_call_poc_pane

0x20cb,	// (0x00042b02) main_camera_pane

0x20cb,	// (0x00042b02) main_chi_dic_pane

0x1eca,	// (0x00042901) main_clock_pane

0xe12e,	// (0x0004eb65) main_fmradio_pane

0x20cb,	// (0x00042b02) main_graph_messa_pane

0xe12e,	// (0x0004eb65) main_help_pane

0xe458,	// (0x0004ee8f) main_im_pane

0xe389,	// (0x0004edc0) main_image_pane_ParamLimits

0xe389,	// (0x0004edc0) main_image_pane

0xe12e,	// (0x0004eb65) main_location2_pane

0x20cb,	// (0x00042b02) main_location_pane

0xe12e,	// (0x0004eb65) main_messa_pane

0xe12e,	// (0x0004eb65) main_mp2_pane

0x20cb,	// (0x00042b02) main_mp_pane

0xe12e,	// (0x0004eb65) main_msg_pane

0xe12e,	// (0x0004eb65) main_mup_eq_pane

0xe12e,	// (0x0004eb65) main_mup_pane

0x20cb,	// (0x00042b02) main_notes_pane

0xe12e,	// (0x0004eb65) main_pec_pane

0xe12e,	// (0x0004eb65) main_phob_pane

0xe12e,	// (0x0004eb65) main_pinb_pane

0xe12e,	// (0x0004eb65) main_postcard_pane

0xe12e,	// (0x0004eb65) main_qdial_pane

0x20cb,	// (0x00042b02) main_skin_pane

0xe12e,	// (0x0004eb65) main_smil2_pane

0x20cb,	// (0x00042b02) main_smil_pane

0x20cb,	// (0x00042b02) main_video_pane

0x20cb,	// (0x00042b02) main_video_tele_pane

0xe389,	// (0x0004edc0) main_viewer_pane_ParamLimits

0xe389,	// (0x0004edc0) main_viewer_pane

0x20cb,	// (0x00042b02) main_vorec_pane

0x9576,	// (0x00049fad) popup_blid_sat_info_window_ParamLimits

0x9576,	// (0x00049fad) popup_blid_sat_info_window

0x958a,	// (0x00049fc1) popup_dyc_status_message_window_ParamLimits

0x958a,	// (0x00049fc1) popup_dyc_status_message_window

0x9596,	// (0x00049fcd) popup_grid_large_graphic_window_ParamLimits

0x9596,	// (0x00049fcd) popup_grid_large_graphic_window

0x95ee,	// (0x0004a025) popup_loc_request_window_ParamLimits

0x95ee,	// (0x0004a025) popup_loc_request_window

0x961e,	// (0x0004a055) popup_wml_address_window_ParamLimits

0x961e,	// (0x0004a055) popup_wml_address_window

0x945b,	// (0x00049e92) call_muted_g1

0x9196,	// (0x00049bcd) popup_call_audio_conf_window_ParamLimits

0x9196,	// (0x00049bcd) popup_call_audio_conf_window

0x946b,	// (0x00049ea2) popup_call_audio_first_window_ParamLimits

0x946b,	// (0x00049ea2) popup_call_audio_first_window

0x949f,	// (0x00049ed6) popup_call_audio_in_window_ParamLimits

0x949f,	// (0x00049ed6) popup_call_audio_in_window

0x94bb,	// (0x00049ef2) popup_call_audio_out_window_ParamLimits

0x94bb,	// (0x00049ef2) popup_call_audio_out_window

0x94d7,	// (0x00049f0e) popup_call_audio_second_window_ParamLimits

0x94d7,	// (0x00049f0e) popup_call_audio_second_window

0x94ff,	// (0x00049f36) popup_call_audio_wait_window_ParamLimits

0x94ff,	// (0x00049f36) popup_call_audio_wait_window

0x951e,	// (0x00049f55) popup_number_entry_window_ParamLimits

0x951e,	// (0x00049f55) popup_number_entry_window

0xdd1d,	// (0x0004e754) bg_popup_call_pane_cp05_ParamLimits

0xdd1d,	// (0x0004e754) bg_popup_call_pane_cp05

0xdd3d,	// (0x0004e774) popup_number_entry_window_t1

0xdd50,	// (0x0004e787) popup_number_entry_window_t2

0xdd62,	// (0x0004e799) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x0004fb66) popup_number_entry_window_t

0xdd74,	// (0x0004e7ab) text_title_cp2

0xdd87,	// (0x0004e7be) bg_popup_call_pane_cp_ParamLimits

0xdd87,	// (0x0004e7be) bg_popup_call_pane_cp

0xdd95,	// (0x0004e7cc) call_thumbnail_pane

0xdd9d,	// (0x0004e7d4) popup_call_audio_in_window_g1_ParamLimits

0xdd9d,	// (0x0004e7d4) popup_call_audio_in_window_g1

0xdda9,	// (0x0004e7e0) popup_call_audio_in_window_g2_ParamLimits

0xdda9,	// (0x0004e7e0) popup_call_audio_in_window_g2

0xddb5,	// (0x0004e7ec) popup_call_audio_in_window_g3_ParamLimits

0xddb5,	// (0x0004e7ec) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x0004fb6f) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x0004fb6f) popup_call_audio_in_window_g

0xddc1,	// (0x0004e7f8) popup_call_audio_in_window_t1_ParamLimits

0xddc1,	// (0x0004e7f8) popup_call_audio_in_window_t1

0xdddc,	// (0x0004e813) popup_call_audio_in_window_t2_ParamLimits

0xdddc,	// (0x0004e813) popup_call_audio_in_window_t2

0xddf7,	// (0x0004e82e) popup_call_audio_in_window_t3_ParamLimits

0xddf7,	// (0x0004e82e) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x0004fb76) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x0004fb76) popup_call_audio_in_window_t

0xdd87,	// (0x0004e7be) bg_popup_call_pane_cp01_ParamLimits

0xdd87,	// (0x0004e7be) bg_popup_call_pane_cp01

0xdd95,	// (0x0004e7cc) call_thumbnail_pane_cp02

0xde0a,	// (0x0004e841) call_type_pane_cp022

0xde12,	// (0x0004e849) popup_call_audio_out_window_g1_ParamLimits

0xde12,	// (0x0004e849) popup_call_audio_out_window_g1

0xde24,	// (0x0004e85b) popup_call_audio_out_window_g2_ParamLimits

0xde24,	// (0x0004e85b) popup_call_audio_out_window_g2

0xde30,	// (0x0004e867) popup_call_audio_out_window_g3_ParamLimits

0xde30,	// (0x0004e867) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x0004fb7d) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x0004fb7d) popup_call_audio_out_window_g

0xde42,	// (0x0004e879) popup_call_audio_out_window_t1_ParamLimits

0xde42,	// (0x0004e879) popup_call_audio_out_window_t1

0xde5a,	// (0x0004e891) popup_call_audio_out_window_t2_ParamLimits

0xde5a,	// (0x0004e891) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x0004fb84) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x0004fb84) popup_call_audio_out_window_t

0xde6f,	// (0x0004e8a6) bg_popup_call_pane_ParamLimits

0xde6f,	// (0x0004e8a6) bg_popup_call_pane

0x6eb6,	// (0x000478ed) call_thumbnail_pane_cp_ParamLimits

0x6eb6,	// (0x000478ed) call_thumbnail_pane_cp

0xdef3,	// (0x0004e92a) call_type_pane_cp01_ParamLimits

0xdef3,	// (0x0004e92a) call_type_pane_cp01

0xdf37,	// (0x0004e96e) popup_call_audio_first_window_g1_ParamLimits

0xdf37,	// (0x0004e96e) popup_call_audio_first_window_g1

0xdf83,	// (0x0004e9ba) popup_call_audio_first_window_g2_ParamLimits

0xdf83,	// (0x0004e9ba) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x0004fb89) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x0004fb89) popup_call_audio_first_window_g

0xdfc7,	// (0x0004e9fe) popup_call_audio_first_window_t1_ParamLimits

0xdfc7,	// (0x0004e9fe) popup_call_audio_first_window_t1

0xe073,	// (0x0004eaaa) popup_call_audio_first_window_t4_ParamLimits

0xe073,	// (0x0004eaaa) popup_call_audio_first_window_t4

0xe0ff,	// (0x0004eb36) popup_call_audio_first_window_t5_ParamLimits

0xe0ff,	// (0x0004eb36) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x0004fb8e) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x0004fb8e) popup_call_audio_first_window_t

0xe12e,	// (0x0004eb65) bg_popup_call_pane_cp02

0xe138,	// (0x0004eb6f) call_type_pane_cp023

0xe140,	// (0x0004eb77) popup_call_audio_wait_window_g1

0xe148,	// (0x0004eb7f) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0004fb95) popup_call_audio_wait_window_g

0xe150,	// (0x0004eb87) popup_call_audio_wait_window_t3

0xe15e,	// (0x0004eb95) bg_popup_call_pane_cp03_ParamLimits

0xe15e,	// (0x0004eb95) bg_popup_call_pane_cp03

0xe1be,	// (0x0004ebf5) call_thumbnail_pane_cp011_ParamLimits

0xe1be,	// (0x0004ebf5) call_thumbnail_pane_cp011

0xe1ca,	// (0x0004ec01) call_type_pane_cp034_ParamLimits

0xe1ca,	// (0x0004ec01) call_type_pane_cp034

0xe206,	// (0x0004ec3d) popup_call_audio_second_window_g1_ParamLimits

0xe206,	// (0x0004ec3d) popup_call_audio_second_window_g1

0xe242,	// (0x0004ec79) popup_call_audio_second_window_g2_ParamLimits

0xe242,	// (0x0004ec79) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x0004fb9a) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x0004fb9a) popup_call_audio_second_window_g

0xe27e,	// (0x0004ecb5) popup_call_audio_second_window_t1_ParamLimits

0xe27e,	// (0x0004ecb5) popup_call_audio_second_window_t1

0xe2ff,	// (0x0004ed36) popup_call_audio_second_window_t2_ParamLimits

0xe2ff,	// (0x0004ed36) popup_call_audio_second_window_t2

0xe335,	// (0x0004ed6c) popup_call_audio_second_window_t3_ParamLimits

0xe335,	// (0x0004ed6c) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x0004fb9f) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x0004fb9f) popup_call_audio_second_window_t

0xe12e,	// (0x0004eb65) bg_popup_call_pane_cp04

0xe36b,	// (0x0004eda2) list_conf_pane

0xe373,	// (0x0004edaa) popup_call_audio_conf_window_t1

0xe381,	// (0x0004edb8) call_thumbnail_pane_g1

0xe389,	// (0x0004edc0) bg_pinb_pane_ParamLimits

0xe389,	// (0x0004edc0) bg_pinb_pane

0xe397,	// (0x0004edce) find_pinb_pane

0xe3a0,	// (0x0004edd7) listscroll_pinb_pane_ParamLimits

0xe3a0,	// (0x0004edd7) listscroll_pinb_pane

0xe3af,	// (0x0004ede6) pinb_bg_pane_g1

0x6eda,	// (0x00047911) pinb_bg_pane_g2

0x6ee4,	// (0x0004791b) pinb_bg_pane_g3

0x6eee,	// (0x00047925) pinb_bg_pane_g4

0x6ef8,	// (0x0004792f) pinb_bg_pane_g5

0x6f02,	// (0x00047939) pinb_bg_pane_g6

0x6f0d,	// (0x00047944) pinb_bg_pane_g7

0x6f18,	// (0x0004794f) pinb_bg_pane_g8

0x6f21,	// (0x00047958) pinb_bg_pane_g9

0x6f29,	// (0x00047960) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x0004fba6) pinb_bg_pane_g

0x6f46,	// (0x0004797d) grid_pinb_pane

0x6f4f,	// (0x00047986) list_pinb_pane

0x6f5a,	// (0x00047991) scroll_pane_cp01_ParamLimits

0x6f5a,	// (0x00047991) scroll_pane_cp01

0xe3b9,	// (0x0004edf0) find_pinb_pane_g1_ParamLimits

0xe3b9,	// (0x0004edf0) find_pinb_pane_g1

0xe3d1,	// (0x0004ee08) find_pinb_pane_t1

0xe3e3,	// (0x0004ee1a) find_pinb_pane_t2

0x0001,

0xf189,	// (0x0004fbc0) find_pinb_pane_t

0xe3f8,	// (0x0004ee2f) input_focus_pane_cp01_ParamLimits

0xe3f8,	// (0x0004ee2f) input_focus_pane_cp01

0x6f6a,	// (0x000479a1) cell_pinb_pane_ParamLimits

0x6f6a,	// (0x000479a1) cell_pinb_pane

0x6f83,	// (0x000479ba) cell_pinb_pane_g1_ParamLimits

0x6f83,	// (0x000479ba) cell_pinb_pane_g1

0x6f97,	// (0x000479ce) cell_pinb_pane_g2_ParamLimits

0x6f97,	// (0x000479ce) cell_pinb_pane_g2

0xe404,	// (0x0004ee3b) cell_pinb_pane_g3_ParamLimits

0xe404,	// (0x0004ee3b) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x0004fbc5) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x0004fbc5) cell_pinb_pane_g

0xe12e,	// (0x0004eb65) grid_highlight_pane_cp01

0x6fa3,	// (0x000479da) list_pinb_item_pane_ParamLimits

0x6fa3,	// (0x000479da) list_pinb_item_pane

0xe12e,	// (0x0004eb65) list_highlight_pane_cp02

0x6fb8,	// (0x000479ef) list_pinb_item_pane_g1_ParamLimits

0x6fb8,	// (0x000479ef) list_pinb_item_pane_g1

0x6fc5,	// (0x000479fc) list_pinb_item_pane_g2_ParamLimits

0x6fc5,	// (0x000479fc) list_pinb_item_pane_g2

0x6fd1,	// (0x00047a08) list_pinb_item_pane_g3_ParamLimits

0x6fd1,	// (0x00047a08) list_pinb_item_pane_g3

0x6fe0,	// (0x00047a17) list_pinb_item_pane_g4_ParamLimits

0x6fe0,	// (0x00047a17) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x0004fbcc) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x0004fbcc) list_pinb_item_pane_g

0x6fec,	// (0x00047a23) list_pinb_item_pane_t1_ParamLimits

0x6fec,	// (0x00047a23) list_pinb_item_pane_t1

0x701d,	// (0x00047a54) calc_display_pane

0x7035,	// (0x00047a6c) calc_paper_pane

0x7051,	// (0x00047a88) grid_calc_pane

0xe12e,	// (0x0004eb65) bg_list_pane_cp01

0x7071,	// (0x00047aa8) clock_g1

0x7079,	// (0x00047ab0) clock_g2

0x0001,

0xf19e,	// (0x0004fbd5) clock_g

0x7081,	// (0x00047ab8) clock_t1_ParamLimits

0x7081,	// (0x00047ab8) clock_t1

0x7096,	// (0x00047acd) clock_t2_ParamLimits

0x7096,	// (0x00047acd) clock_t2

0x70a8,	// (0x00047adf) clock_t3_ParamLimits

0x70a8,	// (0x00047adf) clock_t3

0x70ba,	// (0x00047af1) clock_t4_ParamLimits

0x70ba,	// (0x00047af1) clock_t4

0x70cc,	// (0x00047b03) clock_t5_ParamLimits

0x70cc,	// (0x00047b03) clock_t5

0x70e1,	// (0x00047b18) clock_t6_ParamLimits

0x70e1,	// (0x00047b18) clock_t6

0x70f3,	// (0x00047b2a) clock_t7_ParamLimits

0x70f3,	// (0x00047b2a) clock_t7

0x7105,	// (0x00047b3c) clock_t8_ParamLimits

0x7105,	// (0x00047b3c) clock_t8

0x7117,	// (0x00047b4e) clock_t9_ParamLimits

0x7117,	// (0x00047b4e) clock_t9

0x0008,

0xf1a3,	// (0x0004fbda) clock_t_ParamLimits

0xf1a3,	// (0x0004fbda) clock_t

0xe410,	// (0x0004ee47) popup_clock_analogue_window_cp02

0xe410,	// (0x0004ee47) popup_clock_digital_window_cp01

0xe418,	// (0x0004ee4f) listscroll_help_pane

0xe12e,	// (0x0004eb65) phob_pre_status_pane

0xe422,	// (0x0004ee59) grid_qdial_pane

0xe12e,	// (0x0004eb65) listscroll_mce_pane

0xe42c,	// (0x0004ee63) bg_notes_pane

0xe436,	// (0x0004ee6d) list_notes_pane

0x7129,	// (0x00047b60) scroll_pane_cp06

0xe440,	// (0x0004ee77) bg_calc_paper_pane

0x713c,	// (0x00047b73) list_calc_pane

0xe458,	// (0x0004ee8f) bg_calc_display_pane

0x7156,	// (0x00047b8d) calc_display_pane_t1

0x716b,	// (0x00047ba2) calc_display_pane_t2

0x7180,	// (0x00047bb7) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x0004fbed) calc_display_pane_t

0x7192,	// (0x00047bc9) cell_calc_pane_ParamLimits

0x7192,	// (0x00047bc9) cell_calc_pane

0xe464,	// (0x0004ee9b) bg_calc_paper_pane_g1

0xe470,	// (0x0004eea7) bg_calc_paper_pane_g2

0xe47c,	// (0x0004eeb3) bg_calc_paper_pane_g3

0xe488,	// (0x0004eebf) bg_calc_paper_pane_g4

0xe494,	// (0x0004eecb) bg_calc_paper_pane_g5

0x71b9,	// (0x00047bf0) bg_calc_paper_pane_g6

0x71c8,	// (0x00047bff) bg_calc_paper_pane_g7

0x71d7,	// (0x00047c0e) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x0004fbf4) bg_calc_paper_pane_g

0x71e6,	// (0x00047c1d) calc_bg_paper_pane_g9

0x71f5,	// (0x00047c2c) list_calc_item_pane_ParamLimits

0x71f5,	// (0x00047c2c) list_calc_item_pane

0xe4a0,	// (0x0004eed7) list_calc_item_pane_g1

0x720e,	// (0x00047c45) list_calc_item_pane_t1_ParamLimits

0x720e,	// (0x00047c45) list_calc_item_pane_t1

0x7220,	// (0x00047c57) list_calc_item_pane_t2_ParamLimits

0x7220,	// (0x00047c57) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x0004fc05) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x0004fc05) list_calc_item_pane_t

0xe4ad,	// (0x0004eee4) cell_calc_pane_g1

0xe4b7,	// (0x0004eeee) grid_highlight_pane_cp02

0xe4d9,	// (0x0004ef10) bg_calc_display_pane_g1

0x724e,	// (0x00047c85) bg_calc_display_pane_g2

0xe4e2,	// (0x0004ef19) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x0004fc0f) bg_calc_display_pane_g

0x7258,	// (0x00047c8f) cell_qdial_pane_ParamLimits

0x7258,	// (0x00047c8f) cell_qdial_pane

0x726a,	// (0x00047ca1) cell_qdial_pane_g1_ParamLimits

0x726a,	// (0x00047ca1) cell_qdial_pane_g1

0x7277,	// (0x00047cae) cell_qdial_pane_g2_ParamLimits

0x7277,	// (0x00047cae) cell_qdial_pane_g2

0xe4eb,	// (0x0004ef22) cell_qdial_pane_g3_ParamLimits

0xe4eb,	// (0x0004ef22) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x0004fc16) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x0004fc16) cell_qdial_pane_g

0x7295,	// (0x00047ccc) cell_qdial_pane_t1_ParamLimits

0x7295,	// (0x00047ccc) cell_qdial_pane_t1

0x72ad,	// (0x00047ce4) cell_qdial_pane_t2_ParamLimits

0x72ad,	// (0x00047ce4) cell_qdial_pane_t2

0x72c0,	// (0x00047cf7) cell_qdial_pane_t3_ParamLimits

0x72c0,	// (0x00047cf7) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x0004fc1f) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x0004fc1f) cell_qdial_pane_t

0xe12e,	// (0x0004eb65) grid_highlight_pane_cp04

0xe4f7,	// (0x0004ef2e) thumbnail_qdial_pane_ParamLimits

0xe4f7,	// (0x0004ef2e) thumbnail_qdial_pane

0xe553,	// (0x0004ef8a) list_help_pane

0xe55d,	// (0x0004ef94) scroll_pane_cp02

0x72d3,	// (0x00047d0a) help_list_pane_t1_ParamLimits

0x72d3,	// (0x00047d0a) help_list_pane_t1

0x72f1,	// (0x00047d28) bg_notes_pane_g2

0x72f9,	// (0x00047d30) bg_notes_pane_g3

0x7301,	// (0x00047d38) notes_bg_pane_g1

0x7309,	// (0x00047d40) notes_bg_pane_g4

0x7311,	// (0x00047d48) notes_bg_pane_g5

0x7319,	// (0x00047d50) notes_bg_pane_g6

0x7321,	// (0x00047d58) notes_bg_pane_g7

0x7329,	// (0x00047d60) notes_bg_pane_g8

0x7331,	// (0x00047d68) notes_bg_pane_g9

0x0006,

0xf206,	// (0x0004fc3d) notes_bg_pane_g

0x7339,	// (0x00047d70) list_notes_text_pane_ParamLimits

0x7339,	// (0x00047d70) list_notes_text_pane

0xe566,	// (0x0004ef9d) list_notes_text_pane_g1

0x734f,	// (0x00047d86) list_notes_text_pane_t1

0xe580,	// (0x0004efb7) listscroll_cale_week_pane

0x7378,	// (0x00047daf) bg_cale_heading_pane

0xe58f,	// (0x0004efc6) bg_cale_pane_cp01

0x738c,	// (0x00047dc3) cale_week_corner_pane

0x73a2,	// (0x00047dd9) cale_week_day_heading_pane

0x73b6,	// (0x00047ded) cale_week_scroll_pane_g1

0x73c7,	// (0x00047dfe) cale_week_scroll_pane_g2

0x73d8,	// (0x00047e0f) cale_week_scroll_pane_g3

0x73e9,	// (0x00047e20) cale_week_scroll_pane_g4

0x73fa,	// (0x00047e31) cale_week_scroll_pane_g5

0x740b,	// (0x00047e42) cale_week_scroll_pane_g6

0x741c,	// (0x00047e53) cale_week_scroll_pane_g7

0x742d,	// (0x00047e64) cale_week_scroll_pane_g8

0x743e,	// (0x00047e75) cale_week_scroll_pane_g9

0x744f,	// (0x00047e86) cale_week_scroll_pane_g10

0x7460,	// (0x00047e97) cale_week_scroll_pane_g11

0x7471,	// (0x00047ea8) cale_week_scroll_pane_g12

0x7482,	// (0x00047eb9) cale_week_scroll_pane_g13

0x7493,	// (0x00047eca) cale_week_scroll_pane_g14

0x74a4,	// (0x00047edb) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x0004fc4c) cale_week_scroll_pane_g

0x74b5,	// (0x00047eec) cale_week_time_pane

0x74c6,	// (0x00047efd) grid_cale_week_pane

0x74d9,	// (0x00047f10) scroll_pane_cp08

0x74f1,	// (0x00047f28) cell_cale_week_pane_ParamLimits

0x74f1,	// (0x00047f28) cell_cale_week_pane

0x752d,	// (0x00047f64) cale_week_day_heading_pane_t1

0x7546,	// (0x00047f7d) cale_week_day_heading_pane_t2

0x755f,	// (0x00047f96) cale_week_day_heading_pane_t3

0x7578,	// (0x00047faf) cale_week_day_heading_pane_t4

0x7591,	// (0x00047fc8) cale_week_day_heading_pane_t5

0x75aa,	// (0x00047fe1) cale_week_day_heading_pane_t6

0x75c3,	// (0x00047ffa) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x0004fc6b) cale_week_day_heading_pane_t

0xe5ba,	// (0x0004eff1) bg_cale_side_pane

0x75dc,	// (0x00048013) cale_week_time_pane_t1

0x7608,	// (0x0004803f) cale_week_time_pane_t2

0x7634,	// (0x0004806b) cale_week_time_pane_t3

0x7660,	// (0x00048097) cale_week_time_pane_t4

0x768c,	// (0x000480c3) cale_week_time_pane_t5

0x76b8,	// (0x000480ef) cale_week_time_pane_t6

0x76e4,	// (0x0004811b) cale_week_time_pane_t7

0x7710,	// (0x00048147) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x0004fc7a) cale_week_time_pane_t

0x773c,	// (0x00048173) cell_cale_week_pane_g2

0x7758,	// (0x0004818f) cell_cale_week_pane_g3_ParamLimits

0x7758,	// (0x0004818f) cell_cale_week_pane_g3

0xe5c8,	// (0x0004efff) grid_highlight_pane_cp07

0xe5d0,	// (0x0004f007) listscroll_gms_pane

0xe5da,	// (0x0004f011) grid_gms_pane

0xe5e3,	// (0x0004f01a) listscroll_gms_pane_g1

0xe5eb,	// (0x0004f022) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x0004fc8b) listscroll_gms_pane_g

0x7770,	// (0x000481a7) scroll_pane_cp010

0x7779,	// (0x000481b0) cell_gms_pane_ParamLimits

0x7779,	// (0x000481b0) cell_gms_pane

0x778a,	// (0x000481c1) cell_gms_pane_g1

0xe5f3,	// (0x0004f02a) cell_gms_pane_g2

0xe566,	// (0x0004ef9d) cell_gms_pane_g3

0xe5fb,	// (0x0004f032) cell_gms_pane_g4

0x0003,

0xf259,	// (0x0004fc90) cell_gms_pane_g

0xe604,	// (0x0004f03b) grid_highlight_pane_cp09

0x9409,	// (0x00049e40) phob_pre_status_pane_g1

0x9411,	// (0x00049e48) phob_pre_status_pane_g2

0x9419,	// (0x00049e50) phob_pre_status_pane_g3

0x9421,	// (0x00049e58) phob_pre_status_pane_g4

0x0004,

0xf65b,	// (0x00050092) phob_pre_status_pane_g

0x9431,	// (0x00049e68) phob_pre_status_pane_t1

0x943f,	// (0x00049e76) phob_pre_status_pane_t2

0x944d,	// (0x00049e84) phob_pre_status_pane_t3

0x0002,

0xf666,	// (0x0005009d) phob_pre_status_pane_t

0xe12e,	// (0x0004eb65) bg_list_pane_cp05

0x779a,	// (0x000481d1) grid_vorec_pane

0x77a2,	// (0x000481d9) vorec_t1

0x77b0,	// (0x000481e7) vorec_t2

0x77be,	// (0x000481f5) vorec_t3

0x77cc,	// (0x00048203) vorec_t4

0x77da,	// (0x00048211) vorec_t5

0x77e8,	// (0x0004821f) vorec_t6

0x0006,

0xf262,	// (0x0004fc99) vorec_t

0x7804,	// (0x0004823b) wait_bar_pane_cp01

0x2453,	// (0x00042e8a) cell_vorec_pane_ParamLimits

0x2453,	// (0x00042e8a) cell_vorec_pane

0xe60c,	// (0x0004f043) cell_vorec_pane_g1

0xe12e,	// (0x0004eb65) grid_highlight_pane_cp05

0x7818,	// (0x0004824f) cams_zoom_pane

0x7824,	// (0x0004825b) image_vga_pane

0x7831,	// (0x00048268) main_camera_pane_g1

0x783d,	// (0x00048274) main_camera_pane_g2

0x7849,	// (0x00048280) main_camera_pane_g3

0x7855,	// (0x0004828c) main_camera_pane_g4

0x7861,	// (0x00048298) main_camera_pane_g5

0x786d,	// (0x000482a4) main_camera_pane_g6

0x7879,	// (0x000482b0) main_camera_pane_g7

0x0007,

0xf271,	// (0x0004fca8) main_camera_pane_g

0x7885,	// (0x000482bc) main_camera_pane_t1

0x7897,	// (0x000482ce) main_camera_pane_t2

0x0001,

0xf282,	// (0x0004fcb9) main_camera_pane_t

0x78bb,	// (0x000482f2) cams_zoom_pane_cp_ParamLimits

0x78bb,	// (0x000482f2) cams_zoom_pane_cp

0x78df,	// (0x00048316) image_cif_pane_ParamLimits

0x78df,	// (0x00048316) image_cif_pane

0x78f9,	// (0x00048330) image_subqcif_pane

0x7901,	// (0x00048338) main_video_pane_g1_ParamLimits

0x7901,	// (0x00048338) main_video_pane_g1

0x7921,	// (0x00048358) main_video_pane_g2_ParamLimits

0x7921,	// (0x00048358) main_video_pane_g2

0x794f,	// (0x00048386) main_video_pane_g3_ParamLimits

0x794f,	// (0x00048386) main_video_pane_g3

0x7978,	// (0x000483af) main_video_pane_g4_ParamLimits

0x7978,	// (0x000483af) main_video_pane_g4

0x79a1,	// (0x000483d8) main_video_pane_g5_ParamLimits

0x79a1,	// (0x000483d8) main_video_pane_g5

0xe622,	// (0x0004f059) main_video_pane_g6_ParamLimits

0xe622,	// (0x0004f059) main_video_pane_g6

0x0006,

0xf287,	// (0x0004fcbe) main_video_pane_g_ParamLimits

0xf287,	// (0x0004fcbe) main_video_pane_g

0x79c3,	// (0x000483fa) main_video_pane_t1_ParamLimits

0x79c3,	// (0x000483fa) main_video_pane_t1

0xe63c,	// (0x0004f073) cams_zoom_pane_g1

0xe645,	// (0x0004f07c) cams_zoom_pane_g2

0xe64e,	// (0x0004f085) cams_zoom_pane_g3

0xe657,	// (0x0004f08e) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x0004fccd) cams_zoom_pane_g

0x7a0d,	// (0x00048444) grid_cams_pane

0x7a19,	// (0x00048450) linegrid_cams_pane

0x7a25,	// (0x0004845c) cell_cams_pane_ParamLimits

0x7a25,	// (0x0004845c) cell_cams_pane

0xe660,	// (0x0004f097) cams_burst_image_pane

0xe668,	// (0x0004f09f) cell_cams_pane_g1

0xe12e,	// (0x0004eb65) grid_highlight_pane_cp03

0xe4ad,	// (0x0004eee4) mp_bg_pane_g1

0xe12e,	// (0x0004eb65) bg_list_pane_cp03

0x345f,	// (0x00043e96) bg_mp_pane

0x3467,	// (0x00043e9e) grid_mp_pane

0x346f,	// (0x00043ea6) media_player_g1

0x3477,	// (0x00043eae) media_player_t1

0x3485,	// (0x00043ebc) media_player_t2

0x3493,	// (0x00043eca) media_player_t3

0x34a1,	// (0x00043ed8) media_player_t4

0x34af,	// (0x00043ee6) media_player_t5

0x34bd,	// (0x00043ef4) media_player_t6

0x34cb,	// (0x00043f02) media_player_t7

0x0006,

0xf645,	// (0x0005007c) media_player_t

0x34d9,	// (0x00043f10) wait_bar_pane_cp02

0xf62a,	// (0x00050061) main_usb_pane_t

0x9400,	// (0x00049e37) cell_mp_pane

0xe4ad,	// (0x0004eee4) cell_mp_pane_g1

0xe12e,	// (0x0004eb65) grid_highlight_pane_cp06

0xe670,	// (0x0004f0a7) grid_skin_colour_pane

0xe678,	// (0x0004f0af) list_highlight_pane_cp03

0x7a88,	// (0x000484bf) skin_g1

0xe680,	// (0x0004f0b7) skin_t1

0xe68f,	// (0x0004f0c6) skin_t2

0x0001,

0xf2cb,	// (0x0004fd02) skin_t

0x7a90,	// (0x000484c7) cell_skin_colour_pane_ParamLimits

0x7a90,	// (0x000484c7) cell_skin_colour_pane

0xe69d,	// (0x0004f0d4) cell_skin_colour_pane_g1

0x7ad9,	// (0x00048510) call_video_g1_ParamLimits

0x7ad9,	// (0x00048510) call_video_g1

0x7ae5,	// (0x0004851c) call_video_g2_ParamLimits

0x7ae5,	// (0x0004851c) call_video_g2

0x0001,

0xf2d0,	// (0x0004fd07) call_video_g_ParamLimits

0xf2d0,	// (0x0004fd07) call_video_g

0x7b1d,	// (0x00048554) call_video_uplink_pane_cp1_ParamLimits

0x7b1d,	// (0x00048554) call_video_uplink_pane_cp1

0xe6b7,	// (0x0004f0ee) call_video_uplink_pane_cp2

0x7bac,	// (0x000485e3) video_down_crop_pane_ParamLimits

0x7bac,	// (0x000485e3) video_down_crop_pane

0x7c62,	// (0x00048699) video_down_pane_ParamLimits

0x7c62,	// (0x00048699) video_down_pane

0xe6bf,	// (0x0004f0f6) video_down_subqcif_pane_ParamLimits

0xe6bf,	// (0x0004f0f6) video_down_subqcif_pane

0xe6d7,	// (0x0004f10e) video_down_subqcif_pane_cp_ParamLimits

0xe6d7,	// (0x0004f10e) video_down_subqcif_pane_cp

0xe6fb,	// (0x0004f132) im_reading_pane_ParamLimits

0xe6fb,	// (0x0004f132) im_reading_pane

0x7d00,	// (0x00048737) im_writing_pane_ParamLimits

0x7d00,	// (0x00048737) im_writing_pane

0x7d16,	// (0x0004874d) im_reading_pane_t1

0xe715,	// (0x0004f14c) list_im_pane

0xe726,	// (0x0004f15d) scroll_pane_cp07

0x7d4e,	// (0x00048785) im_writing_pane_t1_ParamLimits

0x7d4e,	// (0x00048785) im_writing_pane_t1

0xe73f,	// (0x0004f176) im_writing_pane_t2_ParamLimits

0xe73f,	// (0x0004f176) im_writing_pane_t2

0x0001,

0xf2da,	// (0x0004fd11) im_writing_pane_t_ParamLimits

0xf2da,	// (0x0004fd11) im_writing_pane_t

0xe12e,	// (0x0004eb65) input_focus_pane_cp04

0xe12e,	// (0x0004eb65) input_focus_pane_cp05

0x7d63,	// (0x0004879a) list_im_single_pane_ParamLimits

0x7d63,	// (0x0004879a) list_im_single_pane

0xe75c,	// (0x0004f193) list_single_im_pane_t1

0x93c6,	// (0x00049dfd) blid_accuracy_pane

0x93ce,	// (0x00049e05) blid_compass_pane

0x93d6,	// (0x00049e0d) main_location_t1

0x93e4,	// (0x00049e1b) main_location_t2

0x93f2,	// (0x00049e29) main_location_t3

0x0002,

0xf654,	// (0x0005008b) main_location_t

0xe12e,	// (0x0004eb65) aid_levels_location

0xe4ad,	// (0x0004eee4) blid_accuracy_pane_g1

0xe4ad,	// (0x0004eee4) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x0004fd73) blid_accuracy_pane_g

0xe796,	// (0x0004f1cd) wml_content_pane

0x1813,	// (0x0004224a) wml_button_pane_ParamLimits

0x1813,	// (0x0004224a) wml_button_pane

0x7d7b,	// (0x000487b2) wml_list_single_large_pane_ParamLimits

0x7d7b,	// (0x000487b2) wml_list_single_large_pane

0x7d92,	// (0x000487c9) wml_list_single_medium_pane_ParamLimits

0x7d92,	// (0x000487c9) wml_list_single_medium_pane

0x7daa,	// (0x000487e1) wml_list_single_small_pane_ParamLimits

0x7daa,	// (0x000487e1) wml_list_single_small_pane

0x1827,	// (0x0004225e) wml_selection_box_pane_ParamLimits

0x1827,	// (0x0004225e) wml_selection_box_pane

0x183a,	// (0x00042271) wml_list_single_pane_t1

0x1849,	// (0x00042280) wml_list_single_medium_pane_t1

0x1858,	// (0x0004228f) wml_list_single_large_pane_t1

0x1867,	// (0x0004229e) input_focus_pane_cp02_ParamLimits

0x1867,	// (0x0004229e) input_focus_pane_cp02

0x187a,	// (0x000422b1) wml_selection_box_pane_g1

0x1883,	// (0x000422ba) wml_selection_box_pane_t1_ParamLimits

0x1883,	// (0x000422ba) wml_selection_box_pane_t1

0xe389,	// (0x0004edc0) bg_wml_button_pane_ParamLimits

0xe389,	// (0x0004edc0) bg_wml_button_pane

0x189b,	// (0x000422d2) wml_button_pane_g1

0x18a3,	// (0x000422da) wml_button_pane_t1

0x189b,	// (0x000422d2) wml_button_bg_pane_g1

0x18b3,	// (0x000422ea) wml_button_bg_pane_g2

0x18bb,	// (0x000422f2) wml_button_bg_pane_g3

0x18c3,	// (0x000422fa) wml_button_bg_pane_g4

0x18cb,	// (0x00042302) wml_button_bg_pane_g5

0x18d3,	// (0x0004230a) wml_button_bg_pane_g6

0x18db,	// (0x00042312) wml_button_bg_pane_g7

0x18e3,	// (0x0004231a) wml_button_bg_pane_g8

0x18eb,	// (0x00042322) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x0004fd16) wml_button_bg_pane_g

0x7dc5,	// (0x000487fc) bg_list_pane_cp02

0x18f3,	// (0x0004232a) mce_header_pane_ParamLimits

0x18f3,	// (0x0004232a) mce_header_pane

0x1907,	// (0x0004233e) mce_icon_pane

0x1907,	// (0x0004233e) mce_image_pane

0x1910,	// (0x00042347) mce_text_pane_ParamLimits

0x1910,	// (0x00042347) mce_text_pane

0x7dce,	// (0x00048805) scroll_pane_cp03

0x7dce,	// (0x00048805) scroll_pane_cp04

0x1924,	// (0x0004235b) scroll_pane_cp05_ParamLimits

0x1924,	// (0x0004235b) scroll_pane_cp05

0x7dd6,	// (0x0004880d) mce_header_field_pane_ParamLimits

0x7dd6,	// (0x0004880d) mce_header_field_pane

0x7df6,	// (0x0004882d) mce_header_field_pane_2_ParamLimits

0x7df6,	// (0x0004882d) mce_header_field_pane_2

0x7e0c,	// (0x00048843) mce_header_field_pane_3

0x7e14,	// (0x0004884b) list_single_mce_message_pane_ParamLimits

0x7e14,	// (0x0004884b) list_single_mce_message_pane

0x7e2b,	// (0x00048862) list_single_mce_smart_pane_ParamLimits

0x7e2b,	// (0x00048862) list_single_mce_smart_pane

0x1930,	// (0x00042367) input_focus_pane_cp03

0x1939,	// (0x00042370) list_header_data_pane

0x7e4d,	// (0x00048884) mce_header_field_pane_t1

0x7e5b,	// (0x00048892) list_single_mce_header_pane_ParamLimits

0x7e5b,	// (0x00048892) list_single_mce_header_pane

0x1941,	// (0x00042378) list_single_mce_header_pane_t1

0x1950,	// (0x00042387) list_single_mce_message_pane_g1

0x1959,	// (0x00042390) list_single_mce_message_pane_t1

0x7e91,	// (0x000488c8) bg_cale_heading_pane_cp01_ParamLimits

0x7e91,	// (0x000488c8) bg_cale_heading_pane_cp01

0x1968,	// (0x0004239f) bg_cale_pane_cp02_ParamLimits

0x1968,	// (0x0004239f) bg_cale_pane_cp02

0x7eb4,	// (0x000488eb) cale_month_corner_pane

0x7eca,	// (0x00048901) cale_month_day_heading_pane_ParamLimits

0x7eca,	// (0x00048901) cale_month_day_heading_pane

0x7eed,	// (0x00048924) cale_month_pane_g1_ParamLimits

0x7eed,	// (0x00048924) cale_month_pane_g1

0x7f09,	// (0x00048940) cale_month_pane_g2_ParamLimits

0x7f09,	// (0x00048940) cale_month_pane_g2

0x7f22,	// (0x00048959) cale_month_pane_g3_ParamLimits

0x7f22,	// (0x00048959) cale_month_pane_g3

0x7f4e,	// (0x00048985) cale_month_pane_g4_ParamLimits

0x7f4e,	// (0x00048985) cale_month_pane_g4

0x7f7a,	// (0x000489b1) cale_month_pane_g5_ParamLimits

0x7f7a,	// (0x000489b1) cale_month_pane_g5

0x7fa6,	// (0x000489dd) cale_month_pane_g6_ParamLimits

0x7fa6,	// (0x000489dd) cale_month_pane_g6

0x7fd2,	// (0x00048a09) cale_month_pane_g7_ParamLimits

0x7fd2,	// (0x00048a09) cale_month_pane_g7

0x7ffe,	// (0x00048a35) cale_month_pane_g8_ParamLimits

0x7ffe,	// (0x00048a35) cale_month_pane_g8

0x802a,	// (0x00048a61) cale_month_pane_g9_ParamLimits

0x802a,	// (0x00048a61) cale_month_pane_g9

0x8054,	// (0x00048a8b) cale_month_pane_g10_ParamLimits

0x8054,	// (0x00048a8b) cale_month_pane_g10

0x807e,	// (0x00048ab5) cale_month_pane_g11_ParamLimits

0x807e,	// (0x00048ab5) cale_month_pane_g11

0x80a8,	// (0x00048adf) cale_month_pane_g12_ParamLimits

0x80a8,	// (0x00048adf) cale_month_pane_g12

0x80d2,	// (0x00048b09) cale_month_pane_g13_ParamLimits

0x80d2,	// (0x00048b09) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x0004fd29) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x0004fd29) cale_month_pane_g

0x80fc,	// (0x00048b33) cale_month_week_pane

0x810d,	// (0x00048b44) grid_cale_month_pane_ParamLimits

0x810d,	// (0x00048b44) grid_cale_month_pane

0x812b,	// (0x00048b62) cale_month_day_heading_pane_t1

0x8189,	// (0x00048bc0) cale_month_day_heading_pane_t2

0x81ee,	// (0x00048c25) cale_month_day_heading_pane_t3

0x8253,	// (0x00048c8a) cale_month_day_heading_pane_t4

0x82b8,	// (0x00048cef) cale_month_day_heading_pane_t5

0x831d,	// (0x00048d54) cale_month_day_heading_pane_t6

0x8382,	// (0x00048db9) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x0004fd44) cale_month_day_heading_pane_t

0xe5ba,	// (0x0004eff1) bg_cale_side_pane_cp01

0x83e7,	// (0x00048e1e) cale_month_week_pane_t1

0x83fe,	// (0x00048e35) cale_month_week_pane_t2

0x8415,	// (0x00048e4c) cale_month_week_pane_t3

0x842c,	// (0x00048e63) cale_month_week_pane_t4

0x8443,	// (0x00048e7a) cale_month_week_pane_t5

0x845a,	// (0x00048e91) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x0004fd53) cale_month_week_pane_t

0x8471,	// (0x00048ea8) cell_cale_month_pane_ParamLimits

0x8471,	// (0x00048ea8) cell_cale_month_pane

0x8517,	// (0x00048f4e) cell_cale_month_pane_g1

0x8523,	// (0x00048f5a) cell_cale_month_pane_t1_ParamLimits

0x8523,	// (0x00048f5a) cell_cale_month_pane_t1

0xe5c8,	// (0x0004efff) grid_highlight_pane_cp08

0xe4ad,	// (0x0004eee4) main_smil_g1

0x853f,	// (0x00048f76) smil_status_pane

0x19c7,	// (0x000423fe) smil_text_pane

0x333f,	// (0x00043d76) bg_popup_call3_rect_pane_g8

0x3347,	// (0x00043d7e) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x0005000c) bg_popup_call3_rect_pane_g

0x3610,	// (0x00044047) smil_status_volume_pane_g1

0x19d1,	// (0x00042408) smil_status_pane_t1

0x9707,	// (0x0004a13e) volume_smil_pane

0x19e8,	// (0x0004241f) list_smil_text_pane

0x8550,	// (0x00048f87) scroll_pane_cp011

0x8559,	// (0x00048f90) smil_text_list_pane_t1_ParamLimits

0x8559,	// (0x00048f90) smil_text_list_pane_t1

0x859e,	// (0x00048fd5) aid_volume_smil_ParamLimits

0x859e,	// (0x00048fd5) aid_volume_smil

0xe4ad,	// (0x0004eee4) smil_volume_pane_g1

0xe4ad,	// (0x0004eee4) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x0004fd73) smil_volume_pane_g

0xe458,	// (0x0004ee8f) listscroll_cale_day_pane

0x19f2,	// (0x00042429) bg_cale_pane

0x1a0a,	// (0x00042441) list_cale_pane

0x1a1b,	// (0x00042452) scroll_pane_cp09

0x1a2c,	// (0x00042463) cale_bg_pane_g1

0x1a34,	// (0x0004246b) cale_bg_pane_g2

0x1a3c,	// (0x00042473) cale_bg_pane_g3

0x1a44,	// (0x0004247b) cale_bg_pane_g4

0x1a4c,	// (0x00042483) cale_bg_pane_g5

0x1a54,	// (0x0004248b) cale_bg_pane_g6

0x1a5c,	// (0x00042493) cale_bg_pane_g7

0x1a64,	// (0x0004249b) cale_bg_pane_g8

0x1a6c,	// (0x000424a3) cale_bg_pane_g9

0x0008,

0xf341,	// (0x0004fd78) cale_bg_pane_g

0x85c0,	// (0x00048ff7) list_cale_time_pane_ParamLimits

0x85c0,	// (0x00048ff7) list_cale_time_pane

0x1a74,	// (0x000424ab) list_cale_time_pane_g1_ParamLimits

0x1a74,	// (0x000424ab) list_cale_time_pane_g1

0x1a80,	// (0x000424b7) list_cale_time_pane_g2_ParamLimits

0x1a80,	// (0x000424b7) list_cale_time_pane_g2

0x85d7,	// (0x0004900e) list_cale_time_pane_g3_ParamLimits

0x85d7,	// (0x0004900e) list_cale_time_pane_g3

0x85e3,	// (0x0004901a) list_cale_time_pane_g4_ParamLimits

0x85e3,	// (0x0004901a) list_cale_time_pane_g4

0x85ef,	// (0x00049026) list_cale_time_pane_g5_ParamLimits

0x85ef,	// (0x00049026) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x0004fd8b) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x0004fd8b) list_cale_time_pane_g

0x1a9a,	// (0x000424d1) list_cale_time_pane_t1_ParamLimits

0x1a9a,	// (0x000424d1) list_cale_time_pane_t1

0x1ac2,	// (0x000424f9) list_cale_time_pane_t2_ParamLimits

0x1ac2,	// (0x000424f9) list_cale_time_pane_t2

0x8906,	// (0x0004933d) aid_blid_cardinal_pane

0x8944,	// (0x0004937b) compass_pane_t4

0x1aea,	// (0x00042521) list_cale_time_pane_t4_ParamLimits

0x1aea,	// (0x00042521) list_cale_time_pane_t4

0x8952,	// (0x00049389) compass_pane_t5

0x8960,	// (0x00049397) compass_pane_t6

0x896e,	// (0x000493a5) compass_pane_t7

0x1fce,	// (0x00042a05) navi_pane_cc_t1

0x2172,	// (0x00042ba9) aid_phob_thumbnail_center_pane

0x8f73,	// (0x000499aa) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x0004fd98) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x0004fd98) list_cale_time_pane_t

0xdd87,	// (0x0004e7be) bg_popup_window_pane_cp02_ParamLimits

0xdd87,	// (0x0004e7be) bg_popup_window_pane_cp02

0x1b12,	// (0x00042549) heading_pane_cp01_ParamLimits

0x1b12,	// (0x00042549) heading_pane_cp01

0x1b1e,	// (0x00042555) loc_req_pane_ParamLimits

0x1b1e,	// (0x00042555) loc_req_pane

0x1b2e,	// (0x00042565) loc_type_pane_ParamLimits

0x1b2e,	// (0x00042565) loc_type_pane

0x1b40,	// (0x00042577) loc_type_pane_t1_ParamLimits

0x1b40,	// (0x00042577) loc_type_pane_t1

0x1b52,	// (0x00042589) loc_type_pane_t2_ParamLimits

0x1b52,	// (0x00042589) loc_type_pane_t2

0x1b64,	// (0x0004259b) loc_type_pane_t3_ParamLimits

0x1b64,	// (0x0004259b) loc_type_pane_t3

0x0002,

0xf368,	// (0x0004fd9f) loc_type_pane_t_ParamLimits

0xf368,	// (0x0004fd9f) loc_type_pane_t

0x1b76,	// (0x000425ad) list_loc_req_pane

0x1b80,	// (0x000425b7) scroll_pane_cp012

0x85fb,	// (0x00049032) list_single_loc_request_popup_menu_pane_ParamLimits

0x85fb,	// (0x00049032) list_single_loc_request_popup_menu_pane

0x1b89,	// (0x000425c0) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x1b89,	// (0x000425c0) list_single_loc_request_popup_menu_pane_g1

0x1b95,	// (0x000425cc) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x1b95,	// (0x000425cc) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x0004fda6) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x0004fda6) list_single_loc_request_popup_menu_pane_g

0x1ba1,	// (0x000425d8) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x1ba1,	// (0x000425d8) list_single_loc_request_popup_menu_pane_t1

0x860d,	// (0x00049044) bg_popup_window_pane_cp03_ParamLimits

0x860d,	// (0x00049044) bg_popup_window_pane_cp03

0x861b,	// (0x00049052) heading_loc_req_pane_ParamLimits

0x861b,	// (0x00049052) heading_loc_req_pane

0x8627,	// (0x0004905e) popup_dyc_status_message_window_g1_ParamLimits

0x8627,	// (0x0004905e) popup_dyc_status_message_window_g1

0x8633,	// (0x0004906a) popup_dyc_status_message_window_t1_ParamLimits

0x8633,	// (0x0004906a) popup_dyc_status_message_window_t1

0x8645,	// (0x0004907c) popup_dyc_status_message_window_t2_ParamLimits

0x8645,	// (0x0004907c) popup_dyc_status_message_window_t2

0x8657,	// (0x0004908e) popup_dyc_status_message_window_t3_ParamLimits

0x8657,	// (0x0004908e) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x0004fdab) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x0004fdab) popup_dyc_status_message_window_t

0xe12e,	// (0x0004eb65) bg_heading_pane_cp01

0x1bc3,	// (0x000425fa) heading_loc_req_pane_g1

0x1bcb,	// (0x00042602) heading_loc_req_pane_g2

0x1bd3,	// (0x0004260a) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x0004fdb2) heading_loc_req_pane_g

0x1bdb,	// (0x00042612) heading_loc_req_pane_t1

0x1c84,	// (0x000426bb) bg_popup_sub_pane_cp01_ParamLimits

0x1c84,	// (0x000426bb) bg_popup_sub_pane_cp01

0x1c92,	// (0x000426c9) popup_cale_events_window_g1_ParamLimits

0x1c92,	// (0x000426c9) popup_cale_events_window_g1

0x1cb2,	// (0x000426e9) popup_cale_events_window_g2_ParamLimits

0x1cb2,	// (0x000426e9) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x0004fde6) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x0004fde6) popup_cale_events_window_g

0x1cd2,	// (0x00042709) popup_cale_events_window_t1_ParamLimits

0x1cd2,	// (0x00042709) popup_cale_events_window_t1

0x1ce4,	// (0x0004271b) popup_cale_events_window_t2_ParamLimits

0x1ce4,	// (0x0004271b) popup_cale_events_window_t2

0x1d22,	// (0x00042759) popup_cale_events_window_t3_ParamLimits

0x1d22,	// (0x00042759) popup_cale_events_window_t3

0x1d5c,	// (0x00042793) popup_cale_events_window_t4_ParamLimits

0x1d5c,	// (0x00042793) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x0004fdeb) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x0004fdeb) popup_cale_events_window_t

0x86dd,	// (0x00049114) call_type_pane

0x218a,	// (0x00042bc1) popup_call_status_window_g1

0x86e9,	// (0x00049120) popup_call_status_window_g2

0x86f5,	// (0x0004912c) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x0004fdf4) popup_call_status_window_g

0x1d92,	// (0x000427c9) call_type_pane_g1

0x1d9b,	// (0x000427d2) call_type_pane_g2

0x0001,

0xf3c4,	// (0x0004fdfb) call_type_pane_g

0xe12e,	// (0x0004eb65) bg_popup_sub_pane_cp02

0x1da4,	// (0x000427db) listscroll_popup_wml_pane

0x1dac,	// (0x000427e3) list_wml_pane

0x1db6,	// (0x000427ed) scroll_pane_cp013

0x8701,	// (0x00049138) list_single_graphic_popup_wml_pane_ParamLimits

0x8701,	// (0x00049138) list_single_graphic_popup_wml_pane

0xe4ad,	// (0x0004eee4) list_single_graphic_popup_wml_pane_g1

0x1dbf,	// (0x000427f6) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x0004fe00) list_single_graphic_popup_wml_pane_g

0x1dc7,	// (0x000427fe) list_single_graphic_popup_wml_pane_t1

0x1dd5,	// (0x0004280c) aid_call_pane

0xe381,	// (0x0004edb8) popup_clock_analogue_window_g1

0xe381,	// (0x0004edb8) popup_clock_analogue_window_g2

0x8715,	// (0x0004914c) popup_clock_analogue_window_g3

0x8715,	// (0x0004914c) popup_clock_analogue_window_g4

0xe4ad,	// (0x0004eee4) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x0004fe05) popup_clock_analogue_window_g

0x871d,	// (0x00049154) popup_clock_analogue_window_t1

0x872b,	// (0x00049162) clock_digital_number_pane_ParamLimits

0x872b,	// (0x00049162) clock_digital_number_pane

0x8737,	// (0x0004916e) clock_digital_number_pane_cp02_ParamLimits

0x8737,	// (0x0004916e) clock_digital_number_pane_cp02

0x8743,	// (0x0004917a) clock_digital_number_pane_cp03_ParamLimits

0x8743,	// (0x0004917a) clock_digital_number_pane_cp03

0x874f,	// (0x00049186) clock_digital_number_pane_cp04_ParamLimits

0x874f,	// (0x00049186) clock_digital_number_pane_cp04

0x875b,	// (0x00049192) clock_digital_separator_pane_ParamLimits

0x875b,	// (0x00049192) clock_digital_separator_pane

0x8767,	// (0x0004919e) popup_clock_digital_window_t1

0xe4ad,	// (0x0004eee4) clock_digital_number_pane_g1

0xe4ad,	// (0x0004eee4) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x0004fd73) clock_digital_number_pane_g

0xe4ad,	// (0x0004eee4) clock_digital_separator_pane_g1

0xe4ad,	// (0x0004eee4) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x0004fd73) clock_digital_separator_pane_g

0xe12e,	// (0x0004eb65) bg_popup_window_pane_cp04

0x1de5,	// (0x0004281c) heading_pane_cp03

0x1ded,	// (0x00042824) listscroll_popup_gms_pane

0x1df5,	// (0x0004282c) grid_large_graphic_popup_pane

0x1dff,	// (0x00042836) listscroll_popup_gms_pane_g1

0x1e07,	// (0x0004283e) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x0004fe10) listscroll_popup_gms_pane_g

0x180b,	// (0x00042242) scroll_pane_cp014

0x8784,	// (0x000491bb) cell_large_graphic_popup_pane_ParamLimits

0x8784,	// (0x000491bb) cell_large_graphic_popup_pane

0x879b,	// (0x000491d2) cell_large_graphic_popup_pane_g1_ParamLimits

0x879b,	// (0x000491d2) cell_large_graphic_popup_pane_g1

0x1e0f,	// (0x00042846) cell_large_graphic_popup_pane_g2_ParamLimits

0x1e0f,	// (0x00042846) cell_large_graphic_popup_pane_g2

0x1e1b,	// (0x00042852) cell_large_graphic_popup_pane_g3_ParamLimits

0x1e1b,	// (0x00042852) cell_large_graphic_popup_pane_g3

0x1e28,	// (0x0004285f) cell_large_graphic_popup_pane_g4_ParamLimits

0x1e28,	// (0x0004285f) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x0004fe15) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x0004fe15) cell_large_graphic_popup_pane_g

0x1e38,	// (0x0004286f) grid_highlight_pane_cp010

0xe4ad,	// (0x0004eee4) bg_popup_call_pane_g1

0x1e42,	// (0x00042879) list_single_graphic_popup_conf_pane_ParamLimits

0x1e42,	// (0x00042879) list_single_graphic_popup_conf_pane

0x1e55,	// (0x0004288c) list_highlight_pane_cp01

0x1e5e,	// (0x00042895) list_single_graphic_popup_conf_pane_g1

0x1e66,	// (0x0004289d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x0004fe1e) list_single_graphic_popup_conf_pane_g

0x1e6e,	// (0x000428a5) list_single_graphic_popup_conf_pane_t1

0x1e7c,	// (0x000428b3) linegrid_cams_pane_g1

0x87a7,	// (0x000491de) linegrid_cams_pane_g2

0xe566,	// (0x0004ef9d) linegrid_cams_pane_g3

0x1e85,	// (0x000428bc) linegrid_cams_pane_g4

0x87b0,	// (0x000491e7) linegrid_cams_pane_g5

0x87b9,	// (0x000491f0) linegrid_cams_pane_g6

0xe5fb,	// (0x0004f032) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x0004fe23) linegrid_cams_pane_g

0x1e8e,	// (0x000428c5) popup_clock_analogue_window

0x1e8e,	// (0x000428c5) popup_clock_digital_window

0xe12e,	// (0x0004eb65) popup_phob_thumbnail_window

0xe4ad,	// (0x0004eee4) call_video_uplink_pane_g1

0x1e97,	// (0x000428ce) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x0004fe32) call_video_uplink_pane_g

0xe5c8,	// (0x0004efff) video_uplink_pane

0x1e9f,	// (0x000428d6) mce_image_pane_g1

0x87c2,	// (0x000491f9) mce_image_pane_g2

0x87ca,	// (0x00049201) mce_image_pane_g3

0x87d2,	// (0x00049209) mce_image_pane_g4

0x87da,	// (0x00049211) mce_image_pane_g5

0x0004,

0xf400,	// (0x0004fe37) mce_image_pane_g

0x1ea9,	// (0x000428e0) control_top_pane_stacon_cp01_ParamLimits

0x1ea9,	// (0x000428e0) control_top_pane_stacon_cp01

0x1eb9,	// (0x000428f0) uni_indicator_pane_stacon_cp01_ParamLimits

0x1eb9,	// (0x000428f0) uni_indicator_pane_stacon_cp01

0x1eca,	// (0x00042901) bg_popup_sub_pane_cp03

0x1ed4,	// (0x0004290b) chi_dic_find_pane

0x87e2,	// (0x00049219) listscroll_chi_dic_pane

0x1edc,	// (0x00042913) main_pane_chidic_g1

0x1ee4,	// (0x0004291b) chi_dic_find_pane_t1

0x1ef2,	// (0x00042929) find_chidic_pane

0x1efb,	// (0x00042932) chi_dic_list_pane_ParamLimits

0x1efb,	// (0x00042932) chi_dic_list_pane

0x1f0c,	// (0x00042943) scroll_pane_cp020

0x1f14,	// (0x0004294b) find_chidic_pane_t1

0xe12e,	// (0x0004eb65) input_focus_pane_cp06

0x87f4,	// (0x0004922b) list_chi_dic_pane_ParamLimits

0x87f4,	// (0x0004922b) list_chi_dic_pane

0x8807,	// (0x0004923e) list_chi_dic_pane_t1_ParamLimits

0x8807,	// (0x0004923e) list_chi_dic_pane_t1

0xe12e,	// (0x0004eb65) list_highlight_pane_cp020

0x1f23,	// (0x0004295a) bg_cale_heading_pane_g1

0x881a,	// (0x00049251) bg_cale_heading_pane_g2

0x8822,	// (0x00049259) bg_cale_heading_pane_g3

0x882a,	// (0x00049261) bg_cale_heading_pane_g4

0x8832,	// (0x00049269) bg_cale_heading_pane_g5

0x883a,	// (0x00049271) bg_cale_heading_pane_g6

0x8842,	// (0x00049279) bg_cale_heading_pane_g7

0x884a,	// (0x00049281) bg_cale_heading_pane_g8

0x8852,	// (0x00049289) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x0004fe42) bg_cale_heading_pane_g

0x1f23,	// (0x0004295a) bg_cale_side_pane_g1

0x885a,	// (0x00049291) bg_cale_side_pane_g2

0x8862,	// (0x00049299) bg_cale_side_pane_g3

0x886a,	// (0x000492a1) bg_cale_side_pane_g4

0x8872,	// (0x000492a9) bg_cale_side_pane_g5

0x887a,	// (0x000492b1) bg_cale_side_pane_g6

0x8882,	// (0x000492b9) bg_cale_side_pane_g7

0x888a,	// (0x000492c1) bg_cale_side_pane_g8

0x8892,	// (0x000492c9) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x0004fe55) bg_cale_side_pane_g

0x889a,	// (0x000492d1) popup_call_status_window_ParamLimits

0x889a,	// (0x000492d1) popup_call_status_window

0x1f2b,	// (0x00042962) stacon_top_pane

0x1f33,	// (0x0004296a) status_pane_ParamLimits

0x1f33,	// (0x0004296a) status_pane

0x1f4d,	// (0x00042984) status_small_pane

0x1f55,	// (0x0004298c) control_pane

0xe12e,	// (0x0004eb65) stacon_bottom_pane

0x1f5d,	// (0x00042994) list_single_mce_smart_pane_t1_ParamLimits

0x1f5d,	// (0x00042994) list_single_mce_smart_pane_t1

0x1f70,	// (0x000429a7) list_single_mce_smart_pane_t2_ParamLimits

0x1f70,	// (0x000429a7) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x0004fe68) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x0004fe68) list_single_mce_smart_pane_t

0x88a9,	// (0x000492e0) compass_pane

0x88b2,	// (0x000492e9) main_location2_pane_t1

0x88c8,	// (0x000492ff) main_location2_pane_t2

0x88de,	// (0x00049315) main_location2_pane_t3

0x0003,

0xf436,	// (0x0004fe6d) main_location2_pane_t

0x1f98,	// (0x000429cf) compass_pane_g1_ParamLimits

0x1f98,	// (0x000429cf) compass_pane_g1

0x8926,	// (0x0004935d) compass_pane_t1

0x8935,	// (0x0004936c) compass_pane_t2

0x0005,

0xf43f,	// (0x0004fe76) compass_pane_t

0x897c,	// (0x000493b3) text_secondary_cp61

0x1fc5,	// (0x000429fc) navi_pane_cams_g5

0x2006,	// (0x00042a3d) navi_pane_im_t1

0x2014,	// (0x00042a4b) navi_pane_mp_g1_ParamLimits

0x2014,	// (0x00042a4b) navi_pane_mp_g1

0x2028,	// (0x00042a5f) navi_pane_mp_g2_ParamLimits

0x2028,	// (0x00042a5f) navi_pane_mp_g2

0x2034,	// (0x00042a6b) navi_pane_mp_g3_ParamLimits

0x2034,	// (0x00042a6b) navi_pane_mp_g3

0x0002,

0xf453,	// (0x0004fe8a) navi_pane_mp_g_ParamLimits

0xf453,	// (0x0004fe8a) navi_pane_mp_g

0x2040,	// (0x00042a77) navi_pane_mp_t1

0x204e,	// (0x00042a85) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x0004fe91) navi_pane_mp_t

0x20bb,	// (0x00042af2) navi_pane_vt_g1

0x2040,	// (0x00042a77) navi_pane_vt_t1

0x20c3,	// (0x00042afa) navi_slider_pane

0x20cb,	// (0x00042b02) zooming_pane

0x20d3,	// (0x00042b0a) navi_slider_pane_g1

0x89f3,	// (0x0004942a) navi_slider_pane_g2

0x0006,

0xf461,	// (0x0004fe98) navi_slider_pane_g

0x20f7,	// (0x00042b2e) aid_levels_zoom

0x20ff,	// (0x00042b36) zooming_pane_g1

0x2107,	// (0x00042b3e) zooming_pane_g2

0x2107,	// (0x00042b3e) zooming_pane_g3

0x0002,

0xf470,	// (0x0004fea7) zooming_pane_g

0x210f,	// (0x00042b46) level_10_zoom

0x2118,	// (0x00042b4f) level_11_zoom

0x2121,	// (0x00042b58) level_1_zoom

0x212a,	// (0x00042b61) level_2_zoom

0x2133,	// (0x00042b6a) level_3_zoom

0x213c,	// (0x00042b73) level_4_zoom

0x2145,	// (0x00042b7c) level_5_zoom

0x214e,	// (0x00042b85) level_6_zoom

0x2157,	// (0x00042b8e) level_7_zoom

0x2160,	// (0x00042b97) level_8_zoom

0x2169,	// (0x00042ba0) level_9_zoom

0x217a,	// (0x00042bb1) popup_phob_thumbnail_window_g1

0x2182,	// (0x00042bb9) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x0004feae) popup_phob_thumbnail_window_g

0x34e1,	// (0x00043f18) level_1_location

0x34e9,	// (0x00043f20) level_2_location

0x34f1,	// (0x00043f28) level_3_location

0x34f9,	// (0x00043f30) level_4_location

0x20cb,	// (0x00042b02) level_5_location

0x8a05,	// (0x0004943c) mce_icon_pane_g1

0x8a0d,	// (0x00049444) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x0004feb3) mce_icon_pane_g

0x8a15,	// (0x0004944c) main_mup_pane_g1_ParamLimits

0x8a15,	// (0x0004944c) main_mup_pane_g1

0x8a2d,	// (0x00049464) main_mup_pane_g2_ParamLimits

0x8a2d,	// (0x00049464) main_mup_pane_g2

0x8a49,	// (0x00049480) main_mup_pane_g3_ParamLimits

0x8a49,	// (0x00049480) main_mup_pane_g3

0x8a65,	// (0x0004949c) main_mup_pane_g4_ParamLimits

0x8a65,	// (0x0004949c) main_mup_pane_g4

0x8a81,	// (0x000494b8) main_mup_pane_g5_ParamLimits

0x8a81,	// (0x000494b8) main_mup_pane_g5

0x8a9e,	// (0x000494d5) main_mup_pane_g6_ParamLimits

0x8a9e,	// (0x000494d5) main_mup_pane_g6

0x8aba,	// (0x000494f1) main_mup_pane_g7_ParamLimits

0x8aba,	// (0x000494f1) main_mup_pane_g7

0x8ad6,	// (0x0004950d) main_mup_pane_g8_ParamLimits

0x8ad6,	// (0x0004950d) main_mup_pane_g8

0x8af2,	// (0x00049529) main_mup_pane_g9_ParamLimits

0x8af2,	// (0x00049529) main_mup_pane_g9

0x8b09,	// (0x00049540) main_mup_pane_g10_ParamLimits

0x8b09,	// (0x00049540) main_mup_pane_g10

0x8b20,	// (0x00049557) main_mup_pane_g11_ParamLimits

0x8b20,	// (0x00049557) main_mup_pane_g11

0x8b34,	// (0x0004956b) main_mup_pane_g12_ParamLimits

0x8b34,	// (0x0004956b) main_mup_pane_g12

0x8b40,	// (0x00049577) main_mup_pane_g13_ParamLimits

0x8b40,	// (0x00049577) main_mup_pane_g13

0x000c,

0xf481,	// (0x0004feb8) main_mup_pane_g_ParamLimits

0xf481,	// (0x0004feb8) main_mup_pane_g

0x8b54,	// (0x0004958b) main_mup_pane_t1_ParamLimits

0x8b54,	// (0x0004958b) main_mup_pane_t1

0x8b71,	// (0x000495a8) main_mup_pane_t2_ParamLimits

0x8b71,	// (0x000495a8) main_mup_pane_t2

0x8b8b,	// (0x000495c2) main_mup_pane_t3_ParamLimits

0x8b8b,	// (0x000495c2) main_mup_pane_t3

0x8ba5,	// (0x000495dc) main_mup_pane_t4_ParamLimits

0x8ba5,	// (0x000495dc) main_mup_pane_t4

0x8bb7,	// (0x000495ee) main_mup_pane_t5_ParamLimits

0x8bb7,	// (0x000495ee) main_mup_pane_t5

0x8bc9,	// (0x00049600) main_mup_pane_t6_ParamLimits

0x8bc9,	// (0x00049600) main_mup_pane_t6

0x0005,

0xf49c,	// (0x0004fed3) main_mup_pane_t_ParamLimits

0xf49c,	// (0x0004fed3) main_mup_pane_t

0x8bdf,	// (0x00049616) mup_progress_pane_ParamLimits

0x8bdf,	// (0x00049616) mup_progress_pane

0x8beb,	// (0x00049622) mup_visualizer_pane_ParamLimits

0x8beb,	// (0x00049622) mup_visualizer_pane

0x8c19,	// (0x00049650) mup_volume_pane_ParamLimits

0x8c19,	// (0x00049650) mup_volume_pane

0x218a,	// (0x00042bc1) mup_visualizer_pane_g1_ParamLimits

0x218a,	// (0x00042bc1) mup_visualizer_pane_g1

0x218a,	// (0x00042bc1) mup_visualizer_pane_g2_ParamLimits

0x218a,	// (0x00042bc1) mup_visualizer_pane_g2

0x1f98,	// (0x000429cf) mup_visualizer_pane_g3_ParamLimits

0x1f98,	// (0x000429cf) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x0004fee0) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x0004fee0) mup_visualizer_pane_g

0xe4ad,	// (0x0004eee4) mup_volume_pane_g1

0x21a0,	// (0x00042bd7) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x0004fee7) mup_volume_pane_g

0xe4ad,	// (0x0004eee4) mup_progress_pane_g1

0x21a9,	// (0x00042be0) mup_progress_pane_g2

0x21b2,	// (0x00042be9) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x0004feec) mup_progress_pane_g

0xe12e,	// (0x0004eb65) bg_popup_window_pane_cp05

0x21bb,	// (0x00042bf2) heading_pane_cp02_ParamLimits

0x21bb,	// (0x00042bf2) heading_pane_cp02

0x21d5,	// (0x00042c0c) list_popup_blid_pane

0x21dd,	// (0x00042c14) list_blid_sat_info_pane_ParamLimits

0x21dd,	// (0x00042c14) list_blid_sat_info_pane

0x21f0,	// (0x00042c27) list_blid_sat_info_pane_g1

0x21f8,	// (0x00042c2f) list_blid_sat_info_pane_t1

0x8d0c,	// (0x00049743) mup_equalizer_pane_ParamLimits

0x8d0c,	// (0x00049743) mup_equalizer_pane

0x8d25,	// (0x0004975c) mup_equalizer_pane_cp1_ParamLimits

0x8d25,	// (0x0004975c) mup_equalizer_pane_cp1

0x8d3e,	// (0x00049775) mup_equalizer_pane_cp2_ParamLimits

0x8d3e,	// (0x00049775) mup_equalizer_pane_cp2

0x8d57,	// (0x0004978e) mup_equalizer_pane_cp3_ParamLimits

0x8d57,	// (0x0004978e) mup_equalizer_pane_cp3

0x8d70,	// (0x000497a7) mup_equalizer_pane_cp4_ParamLimits

0x8d70,	// (0x000497a7) mup_equalizer_pane_cp4

0x8d89,	// (0x000497c0) mup_equalizer_pane_cp5

0x8d9b,	// (0x000497d2) mup_equalizer_pane_cp6

0x8dad,	// (0x000497e4) mup_equalizer_pane_cp7

0x33bf,	// (0x00043df6) bg_popup_call_poc_act_pane_g9

0x33c7,	// (0x00043dfe) bg_popup_call_poc_act_pane_g10

0x33cf,	// (0x00043e06) bg_popup_call_poc_act_pane_g11

0x000a,

0xe389,	// (0x0004edc0) mup_scale_pane

0xe4ad,	// (0x0004eee4) mup_scale_pane_g1

0x2206,	// (0x00042c3d) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x0004ff08) mup_scale_pane_g

0x222a,	// (0x00042c61) msg_data_pane

0x2232,	// (0x00042c69) scroll_pane_cp017

0x8dd1,	// (0x00049808) bg_list_pane_cp04_ParamLimits

0x8dd1,	// (0x00049808) bg_list_pane_cp04

0x223a,	// (0x00042c71) msg_data_pane_g1

0x87c2,	// (0x000491f9) msg_data_pane_g2

0x87ca,	// (0x00049201) msg_data_pane_g3

0x8df1,	// (0x00049828) msg_data_pane_g4

0x87da,	// (0x00049211) msg_data_pane_g5

0x8a05,	// (0x0004943c) msg_data_pane_g6

0x8df9,	// (0x00049830) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x0004ff17) msg_data_pane_g

0x8e01,	// (0x00049838) msg_text_pane_ParamLimits

0x8e01,	// (0x00049838) msg_text_pane

0x8e2a,	// (0x00049861) qrid_highlight_pane_cp011_ParamLimits

0x8e2a,	// (0x00049861) qrid_highlight_pane_cp011

0xe12e,	// (0x0004eb65) msg_body_pane

0xe12e,	// (0x0004eb65) msg_header_pane

0x224b,	// (0x00042c82) input_focus_pane_cp07

0x8e4c,	// (0x00049883) msg_header_pane_t1_ParamLimits

0x8e4c,	// (0x00049883) msg_header_pane_t1

0x2260,	// (0x00042c97) msg_header_pane_t2_ParamLimits

0x2260,	// (0x00042c97) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x0004ff2b) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x0004ff2b) msg_header_pane_t

0x2272,	// (0x00042ca9) msg_body_pane_g1

0x8e5e,	// (0x00049895) msg_body_pane_t1_ParamLimits

0x8e5e,	// (0x00049895) msg_body_pane_t1

0x227a,	// (0x00042cb1) msg_body_pane_t2_ParamLimits

0x227a,	// (0x00042cb1) msg_body_pane_t2

0x228c,	// (0x00042cc3) msg_body_pane_t3_ParamLimits

0x228c,	// (0x00042cc3) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x0004ff30) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x0004ff30) msg_body_pane_t

0x8ed7,	// (0x0004990e) main_viewer_pane_g1_ParamLimits

0x8ed7,	// (0x0004990e) main_viewer_pane_g1

0x8ee3,	// (0x0004991a) main_viewer_pane_g2_ParamLimits

0x8ee3,	// (0x0004991a) main_viewer_pane_g2

0x8eef,	// (0x00049926) main_viewer_pane_g3_ParamLimits

0x8eef,	// (0x00049926) main_viewer_pane_g3

0x8efe,	// (0x00049935) main_viewer_pane_g4_ParamLimits

0x8efe,	// (0x00049935) main_viewer_pane_g4

0x8f0d,	// (0x00049944) main_viewer_pane_g5_ParamLimits

0x8f0d,	// (0x00049944) main_viewer_pane_g5

0x8f0d,	// (0x00049944) main_viewer_pane_g7_ParamLimits

0x8f0d,	// (0x00049944) main_viewer_pane_g7

0x8f1f,	// (0x00049956) main_viewer_pane_g8_ParamLimits

0x8f1f,	// (0x00049956) main_viewer_pane_g8

0x0007,

0xf509,	// (0x0004ff40) main_viewer_pane_g_ParamLimits

0xf509,	// (0x0004ff40) main_viewer_pane_g

0x229e,	// (0x00042cd5) viewer_content_pane_ParamLimits

0x229e,	// (0x00042cd5) viewer_content_pane

0x8f4f,	// (0x00049986) main_postcard_pane_g1_ParamLimits

0x8f4f,	// (0x00049986) main_postcard_pane_g1

0x8f5b,	// (0x00049992) main_postcard_pane_g2_ParamLimits

0x8f5b,	// (0x00049992) main_postcard_pane_g2

0x8f67,	// (0x0004999e) main_postcard_pane_g3_ParamLimits

0x8f67,	// (0x0004999e) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x0004ff51) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x0004ff51) main_postcard_pane_g

0x8f73,	// (0x000499aa) main_postcard_pane_g4

0x35fd,	// (0x00044034) smil_status_volume_pane_g2

0x8f97,	// (0x000499ce) postcard_pane_ParamLimits

0x8f97,	// (0x000499ce) postcard_pane

0x218a,	// (0x00042bc1) postcard_pane_g1_ParamLimits

0x218a,	// (0x00042bc1) postcard_pane_g1

0x8fc7,	// (0x000499fe) postcard_pane_g2_ParamLimits

0x8fc7,	// (0x000499fe) postcard_pane_g2

0x8fd3,	// (0x00049a0a) postcard_pane_g3_ParamLimits

0x8fd3,	// (0x00049a0a) postcard_pane_g3

0x22ba,	// (0x00042cf1) postcard_pane_g4_ParamLimits

0x22ba,	// (0x00042cf1) postcard_pane_g4

0x8fdf,	// (0x00049a16) postcard_pane_g5_ParamLimits

0x8fdf,	// (0x00049a16) postcard_pane_g5

0x8feb,	// (0x00049a22) postcard_pane_g6_ParamLimits

0x8feb,	// (0x00049a22) postcard_pane_g6

0x22ac,	// (0x00042ce3) postcard_pane_g7_ParamLimits

0x22ac,	// (0x00042ce3) postcard_pane_g7

0x0006,

0xf527,	// (0x0004ff5e) postcard_pane_g_ParamLimits

0xf527,	// (0x0004ff5e) postcard_pane_g

0x8ff7,	// (0x00049a2e) main_mp2_pane_g1_ParamLimits

0x8ff7,	// (0x00049a2e) main_mp2_pane_g1

0x9003,	// (0x00049a3a) main_mp2_pane_g2_ParamLimits

0x9003,	// (0x00049a3a) main_mp2_pane_g2

0x900f,	// (0x00049a46) main_mp2_pane_g3_ParamLimits

0x900f,	// (0x00049a46) main_mp2_pane_g3

0x0002,

0xf536,	// (0x0004ff6d) main_mp2_pane_g_ParamLimits

0xf536,	// (0x0004ff6d) main_mp2_pane_g

0x901b,	// (0x00049a52) main_mp2_pane_t1_ParamLimits

0x901b,	// (0x00049a52) main_mp2_pane_t1

0x9030,	// (0x00049a67) main_mp2_pane_t2_ParamLimits

0x9030,	// (0x00049a67) main_mp2_pane_t2

0x9042,	// (0x00049a79) main_mp2_pane_t3_ParamLimits

0x9042,	// (0x00049a79) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x0004ff74) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x0004ff74) main_mp2_pane_t

0x22c8,	// (0x00042cff) pec_content_pane_ParamLimits

0x22c8,	// (0x00042cff) pec_content_pane

0x180b,	// (0x00042242) scroll_pane_cp015

0x22da,	// (0x00042d11) pec_attribute_pane_ParamLimits

0x22da,	// (0x00042d11) pec_attribute_pane

0x9054,	// (0x00049a8b) pec_content_pane_g1_ParamLimits

0x9054,	// (0x00049a8b) pec_content_pane_g1

0x22ea,	// (0x00042d21) pec_content_pane_t1_ParamLimits

0x22ea,	// (0x00042d21) pec_content_pane_t1

0x22fc,	// (0x00042d33) pec_content_pane_t2_ParamLimits

0x22fc,	// (0x00042d33) pec_content_pane_t2

0x0001,

0xf544,	// (0x0004ff7b) pec_content_pane_t_ParamLimits

0xf544,	// (0x0004ff7b) pec_content_pane_t

0x9060,	// (0x00049a97) list_single_graphic_pane_cp01_ParamLimits

0x9060,	// (0x00049a97) list_single_graphic_pane_cp01

0xe389,	// (0x0004edc0) bg_popup_sub_pane_cp04

0x230e,	// (0x00042d45) popup_mup_playback_window_g1

0x231a,	// (0x00042d51) popup_mup_playback_window_t1

0x232f,	// (0x00042d66) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x0004ff80) popup_mup_playback_window_t

0x2366,	// (0x00042d9d) main_image_pane_g1_ParamLimits

0x2366,	// (0x00042d9d) main_image_pane_g1

0x23a9,	// (0x00042de0) scroll_pane_cp018_ParamLimits

0x23a9,	// (0x00042de0) scroll_pane_cp018

0x23c1,	// (0x00042df8) scroll_pane_cp016_ParamLimits

0x23c1,	// (0x00042df8) scroll_pane_cp016

0x90e5,	// (0x00049b1c) smil2_image_pane_ParamLimits

0x90e5,	// (0x00049b1c) smil2_image_pane

0x910d,	// (0x00049b44) smil2_root_pane_ParamLimits

0x910d,	// (0x00049b44) smil2_root_pane

0x9139,	// (0x00049b70) smil2_text_pane_ParamLimits

0x9139,	// (0x00049b70) smil2_text_pane

0xe12e,	// (0x0004eb65) bg_list_pane_cp06

0x23fd,	// (0x00042e34) grid_radio_pane

0xe12e,	// (0x0004eb65) bg_popup_window_pane_cp06

0x2405,	// (0x00042e3c) main_fmradio_pane_t1

0x1de5,	// (0x0004281c) heading_pane_cp04

0x2413,	// (0x00042e4a) main_fmradio_pane_t2

0x3417,	// (0x00043e4e) popup_cale_lunar_info_window_g1

0x2421,	// (0x00042e58) main_fmradio_pane_t3

0x341f,	// (0x00043e56) popup_cale_lunar_info_window_g2

0x242f,	// (0x00042e66) main_fmradio_pane_t4

0x0001,

0x243d,	// (0x00042e74) main_fmradio_pane_t5

0x0004,

0xf637,	// (0x0005006e) popup_cale_lunar_info_window_g

0xf55e,	// (0x0004ff95) main_fmradio_pane_t

0x244b,	// (0x00042e82) wait_bar_pane_cp03

0x2453,	// (0x00042e8a) cell_fmradio_pane_ParamLimits

0x2453,	// (0x00042e8a) cell_fmradio_pane

0x22ac,	// (0x00042ce3) cell_fmradio_pane_g1_ParamLimits

0x22ac,	// (0x00042ce3) cell_fmradio_pane_g1

0xe12e,	// (0x0004eb65) grid_highlight_pane_cp011

0x2466,	// (0x00042e9d) poc_content_pane_ParamLimits

0x2466,	// (0x00042e9d) poc_content_pane

0x2479,	// (0x00042eb0) scroll_pane_cp019

0x916d,	// (0x00049ba4) popup_call_poc_act_window_ParamLimits

0x916d,	// (0x00049ba4) popup_call_poc_act_window

0x917a,	// (0x00049bb1) popup_call_poc_inact_window_ParamLimits

0x917a,	// (0x00049bb1) popup_call_poc_inact_window

0xf5fb,	// (0x00050032) bg_popup_call_poc_act_pane_g

0x33d7,	// (0x00043e0e) bg_popup_call_poc_inact_pane_g1

0x33df,	// (0x00043e16) bg_popup_call_poc_inact_pane_g2

0x2481,	// (0x00042eb8) popup_call_poc_act_window_g2

0x33e7,	// (0x00043e1e) bg_popup_call_poc_inact_pane_g3

0x3367,	// (0x00043d9e) bg_popup_call_poc_inact_pane_g4

0x33ef,	// (0x00043e26) bg_popup_call_poc_inact_pane_g5

0x2489,	// (0x00042ec0) popup_call_poc_act_window_t1_ParamLimits

0x2489,	// (0x00042ec0) popup_call_poc_act_window_t1

0x24b1,	// (0x00042ee8) popup_call_poc_act_window_t2_ParamLimits

0x24b1,	// (0x00042ee8) popup_call_poc_act_window_t2

0x24d9,	// (0x00042f10) popup_call_poc_act_window_t3_ParamLimits

0x24d9,	// (0x00042f10) popup_call_poc_act_window_t3

0x2501,	// (0x00042f38) popup_call_poc_act_window_t4_ParamLimits

0x2501,	// (0x00042f38) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x0004ffa0) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x0004ffa0) popup_call_poc_act_window_t

0x33f7,	// (0x00043e2e) bg_popup_call_poc_inact_pane_g6

0x33ff,	// (0x00043e36) bg_popup_call_poc_inact_pane_g7

0x3407,	// (0x00043e3e) bg_popup_call_poc_inact_pane_g8

0x2513,	// (0x00042f4a) popup_call_poc_inact_window_g2

0x340f,	// (0x00043e46) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf612,	// (0x00050049) bg_popup_call_poc_inact_pane_g

0x251b,	// (0x00042f52) popup_call_poc_inact_window_t1_ParamLimits

0x251b,	// (0x00042f52) popup_call_poc_inact_window_t1

0x2530,	// (0x00042f67) popup_call_poc_inact_window_t2_ParamLimits

0x2530,	// (0x00042f67) popup_call_poc_inact_window_t2

0x2545,	// (0x00042f7c) popup_call_poc_inact_window_t3_ParamLimits

0x2545,	// (0x00042f7c) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x0004ffa9) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x0004ffa9) popup_call_poc_inact_window_t

0x3583,	// (0x00043fba) context_pane_ParamLimits

0x9675,	// (0x0004a0ac) signal_pane_ParamLimits

0x20cb,	// (0x00042b02) main_call2_pane

0x3571,	// (0x00043fa8) popup_phob_thumbnail2_window_ParamLimits

0x3571,	// (0x00043fa8) popup_phob_thumbnail2_window

0x8e89,	// (0x000498c0) aid_hotspot_pointer_arrow_pane

0x8e91,	// (0x000498c8) aid_hotspot_pointer_hand_pane

0x9429,	// (0x00049e60) phob_pre_status_pane_g5

0x7818,	// (0x0004824f) cams_zoom_pane_ParamLimits

0x7824,	// (0x0004825b) image_vga_pane_ParamLimits

0x7831,	// (0x00048268) main_camera_pane_g1_ParamLimits

0x783d,	// (0x00048274) main_camera_pane_g2_ParamLimits

0x7849,	// (0x00048280) main_camera_pane_g3_ParamLimits

0x7855,	// (0x0004828c) main_camera_pane_g4_ParamLimits

0x7861,	// (0x00048298) main_camera_pane_g5_ParamLimits

0x786d,	// (0x000482a4) main_camera_pane_g6_ParamLimits

0x7879,	// (0x000482b0) main_camera_pane_g7_ParamLimits

0xf271,	// (0x0004fca8) main_camera_pane_g_ParamLimits

0x7885,	// (0x000482bc) main_camera_pane_t1_ParamLimits

0x7897,	// (0x000482ce) main_camera_pane_t2_ParamLimits

0xf282,	// (0x0004fcb9) main_camera_pane_t_ParamLimits

0xe389,	// (0x0004edc0) bg_popup_preview_window_pane_cp01_ParamLimits

0xe389,	// (0x0004edc0) bg_popup_preview_window_pane_cp01

0x255a,	// (0x00042f91) popup_phob_thumbnail2_window_g1_ParamLimits

0x255a,	// (0x00042f91) popup_phob_thumbnail2_window_g1

0xe12e,	// (0x0004eb65) call2_cli_visual_pane

0x9196,	// (0x00049bcd) popup_call2_audio_conf_window_ParamLimits

0x9196,	// (0x00049bcd) popup_call2_audio_conf_window

0x91a9,	// (0x00049be0) popup_call2_audio_first_window_ParamLimits

0x91a9,	// (0x00049be0) popup_call2_audio_first_window

0x9225,	// (0x00049c5c) popup_call2_audio_in_window_ParamLimits

0x9225,	// (0x00049c5c) popup_call2_audio_in_window

0x9255,	// (0x00049c8c) popup_call2_audio_out_window_ParamLimits

0x9255,	// (0x00049c8c) popup_call2_audio_out_window

0x92a1,	// (0x00049cd8) popup_call2_audio_second_window_ParamLimits

0x92a1,	// (0x00049cd8) popup_call2_audio_second_window

0x92ed,	// (0x00049d24) popup_call2_audio_wait_window_ParamLimits

0x92ed,	// (0x00049d24) popup_call2_audio_wait_window

0xe12e,	// (0x0004eb65) bg_popup_call2_act_pane_cp03

0xe36b,	// (0x0004eda2) list_conf_pane_cp

0x2566,	// (0x00042f9d) popup_call2_audio_conf_window_t1

0x1e42,	// (0x00042879) list_single_graphic_popup_conf2_pane_ParamLimits

0x1e42,	// (0x00042879) list_single_graphic_popup_conf2_pane

0x1e55,	// (0x0004288c) list_highlight_pane_cp04

0x2574,	// (0x00042fab) list_single_graphic_popup_conf2_pane_g1

0x1e66,	// (0x0004289d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x0004ffb0) list_single_graphic_popup_conf2_pane_g

0x257c,	// (0x00042fb3) list_single_graphic_popup_conf2_pane_t1

0x258a,	// (0x00042fc1) bg_popup_call2_act_pane_cp01_ParamLimits

0x258a,	// (0x00042fc1) bg_popup_call2_act_pane_cp01

0x2614,	// (0x0004304b) call_type_pane_cp05_ParamLimits

0x2614,	// (0x0004304b) call_type_pane_cp05

0x2668,	// (0x0004309f) popup_call2_audio_second_window_g1_ParamLimits

0x2668,	// (0x0004309f) popup_call2_audio_second_window_g1

0x26bc,	// (0x000430f3) popup_call2_audio_second_window_g2_ParamLimits

0x26bc,	// (0x000430f3) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x0004ffb5) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x0004ffb5) popup_call2_audio_second_window_g

0x2721,	// (0x00043158) popup_call2_audio_second_window_t1_ParamLimits

0x2721,	// (0x00043158) popup_call2_audio_second_window_t1

0x27dc,	// (0x00043213) popup_call2_audio_second_window_t2_ParamLimits

0x27dc,	// (0x00043213) popup_call2_audio_second_window_t2

0x282f,	// (0x00043266) popup_call2_audio_second_window_t3_ParamLimits

0x282f,	// (0x00043266) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x0004ffbc) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x0004ffbc) popup_call2_audio_second_window_t

0xe12e,	// (0x0004eb65) bg_popup_call2_in_pane_cp02

0xe138,	// (0x0004eb6f) call_type_pane_cp04

0xe140,	// (0x0004eb77) popup_call2_audio_wait_window_g1

0xe148,	// (0x0004eb7f) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0004fb95) popup_call2_audio_wait_window_g

0xe150,	// (0x0004eb87) popup_call2_audio_wait_window_t3

0x2922,	// (0x00043359) bg_popup_call2_act_pane_ParamLimits

0x2922,	// (0x00043359) bg_popup_call2_act_pane

0x29e2,	// (0x00043419) call_type_pane_cp03_ParamLimits

0x29e2,	// (0x00043419) call_type_pane_cp03

0x2a46,	// (0x0004347d) popup_call2_audio_first_window_g1_ParamLimits

0x2a46,	// (0x0004347d) popup_call2_audio_first_window_g1

0x2ab6,	// (0x000434ed) popup_call2_audio_first_window_g2_ParamLimits

0x2ab6,	// (0x000434ed) popup_call2_audio_first_window_g2

0x218a,	// (0x00042bc1) popup_call2_audio_first_window_g3_ParamLimits

0x218a,	// (0x00042bc1) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x0004ffc5) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x0004ffc5) popup_call2_audio_first_window_g

0x2b94,	// (0x000435cb) popup_call2_audio_first_window_t1_ParamLimits

0x2b94,	// (0x000435cb) popup_call2_audio_first_window_t1

0x2c97,	// (0x000436ce) popup_call2_audio_first_window_t4_ParamLimits

0x2c97,	// (0x000436ce) popup_call2_audio_first_window_t4

0x2d7a,	// (0x000437b1) popup_call2_audio_first_window_t5_ParamLimits

0x2d7a,	// (0x000437b1) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x0004ffd0) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x0004ffd0) popup_call2_audio_first_window_t

0xe381,	// (0x0004edb8) bg_popup_call2_act_pane_g1

0x3427,	// (0x00043e5e) popup_cale_lunar_info_window_t1

0x3435,	// (0x00043e6c) popup_cale_lunar_info_window_t2

0x3443,	// (0x00043e7a) popup_cale_lunar_info_window_t3

0xe12e,	// (0x0004eb65) bg_popup_call2_bubble_pane

0x2e7b,	// (0x000438b2) bg_popup_call2_in_pane_cp01_ParamLimits

0x2e7b,	// (0x000438b2) bg_popup_call2_in_pane_cp01

0xde0a,	// (0x0004e841) call_type_pane_cp02

0x2ec3,	// (0x000438fa) popup_call2_audio_out_window_g1_ParamLimits

0x2ec3,	// (0x000438fa) popup_call2_audio_out_window_g1

0x2eef,	// (0x00043926) popup_call2_audio_out_window_g2_ParamLimits

0x2eef,	// (0x00043926) popup_call2_audio_out_window_g2

0x2f17,	// (0x0004394e) popup_call2_audio_out_window_g3_ParamLimits

0x2f17,	// (0x0004394e) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x0004ffd9) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x0004ffd9) popup_call2_audio_out_window_g

0x2f52,	// (0x00043989) popup_call2_audio_out_window_t1_ParamLimits

0x2f52,	// (0x00043989) popup_call2_audio_out_window_t1

0x2fb1,	// (0x000439e8) popup_call2_audio_out_window_t2_ParamLimits

0x2fb1,	// (0x000439e8) popup_call2_audio_out_window_t2

0x3005,	// (0x00043a3c) popup_call2_audio_out_window_t3_ParamLimits

0x3005,	// (0x00043a3c) popup_call2_audio_out_window_t3

0x301b,	// (0x00043a52) popup_call2_audio_out_window_t4_ParamLimits

0x301b,	// (0x00043a52) popup_call2_audio_out_window_t4

0x3031,	// (0x00043a68) popup_call2_audio_out_window_t5_ParamLimits

0x3031,	// (0x00043a68) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x0004ffe2) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x0004ffe2) popup_call2_audio_out_window_t

0x3095,	// (0x00043acc) bg_popup_call2_in_pane_ParamLimits

0x3095,	// (0x00043acc) bg_popup_call2_in_pane

0x30f1,	// (0x00043b28) popup_call2_audio_in_window_g1_ParamLimits

0x30f1,	// (0x00043b28) popup_call2_audio_in_window_g1

0x3129,	// (0x00043b60) popup_call2_audio_in_window_g2_ParamLimits

0x3129,	// (0x00043b60) popup_call2_audio_in_window_g2

0x3161,	// (0x00043b98) popup_call2_audio_in_window_g3_ParamLimits

0x3161,	// (0x00043b98) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x0004ffef) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x0004ffef) popup_call2_audio_in_window_g

0x31b9,	// (0x00043bf0) popup_call2_audio_in_window_t1_ParamLimits

0x31b9,	// (0x00043bf0) popup_call2_audio_in_window_t1

0x3239,	// (0x00043c70) popup_call2_audio_in_window_t2_ParamLimits

0x3239,	// (0x00043c70) popup_call2_audio_in_window_t2

0x32b9,	// (0x00043cf0) popup_call2_audio_in_window_t3_ParamLimits

0x32b9,	// (0x00043cf0) popup_call2_audio_in_window_t3

0x32d3,	// (0x00043d0a) popup_call2_audio_in_window_t4_ParamLimits

0x32d3,	// (0x00043d0a) popup_call2_audio_in_window_t4

0x32e5,	// (0x00043d1c) popup_call2_audio_in_window_t5_ParamLimits

0x32e5,	// (0x00043d1c) popup_call2_audio_in_window_t5

0x32fa,	// (0x00043d31) popup_call2_audio_in_window_t6_ParamLimits

0x32fa,	// (0x00043d31) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x0004fff8) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x0004fff8) popup_call2_audio_in_window_t

0xe381,	// (0x0004edb8) bg_popup_call2_in_pane_g1

0x3451,	// (0x00043e88) popup_cale_lunar_info_window_t4

0x0003,

0xf63c,	// (0x00050073) popup_cale_lunar_info_window_t

0xe389,	// (0x0004edc0) bg_popup_call2_rect_pane_ParamLimits

0xe389,	// (0x0004edc0) bg_popup_call2_rect_pane

0xe12e,	// (0x0004eb65) call2_cli_visual_graphic_pane

0xe12e,	// (0x0004eb65) call2_cli_visual_text_pane

0x96fa,	// (0x0004a131) smil_status_volume_pane_g3

0x0002,

0xe4ad,	// (0x0004eee4) call2_cli_visual_graphic_pane_g1

0xe4ad,	// (0x0004eee4) call2_cli_visual_graphic_pane_g2

0xe4ad,	// (0x0004eee4) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x00050005) call2_cli_visual_graphic_pane_g

0x330f,	// (0x00043d46) bg_popup_call2_rect_pane_g1

0xe54b,	// (0x0004ef82) bg_popup_call2_rect_pane_g2

0x3317,	// (0x00043d4e) bg_popup_call2_rect_pane_g3

0x331f,	// (0x00043d56) bg_popup_call2_rect_pane_g4

0x3327,	// (0x00043d5e) bg_popup_call2_rect_pane_g5

0x332f,	// (0x00043d66) bg_popup_call2_rect_pane_g6

0x3337,	// (0x00043d6e) bg_popup_call2_rect_pane_g7

0x333f,	// (0x00043d76) bg_popup_call2_rect_pane_g8

0x3347,	// (0x00043d7e) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x0005000c) bg_popup_call2_rect_pane_g

0x334f,	// (0x00043d86) bg_popup_call2_bubble_pane_g1

0x3357,	// (0x00043d8e) bg_popup_call2_bubble_pane_g2

0x335f,	// (0x00043d96) bg_popup_call2_bubble_pane_g3

0x3367,	// (0x00043d9e) bg_popup_call2_bubble_pane_g4

0x336f,	// (0x00043da6) bg_popup_call2_bubble_pane_g5

0x3377,	// (0x00043dae) bg_popup_call2_bubble_pane_g6

0x337f,	// (0x00043db6) bg_popup_call2_bubble_pane_g7

0x3387,	// (0x00043dbe) bg_popup_call2_bubble_pane_g8

0x338f,	// (0x00043dc6) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x0005001f) bg_popup_call2_bubble_pane_g

0x7365,	// (0x00047d9c) aid_cale_week_size_cell_pane

0x78a9,	// (0x000482e0) aid_cams_cif_uncrop_pane_ParamLimits

0x78a9,	// (0x000482e0) aid_cams_cif_uncrop_pane

0x7a01,	// (0x00048438) aid_cams_size_cell_ParamLimits

0x7a01,	// (0x00048438) aid_cams_size_cell

0x7a0d,	// (0x00048444) grid_cams_pane_ParamLimits

0x7a19,	// (0x00048450) linegrid_cams_pane_ParamLimits

0x7af1,	// (0x00048528) call_video_pane_t1

0x7b07,	// (0x0004853e) call_video_pane_t2

0x0001,

0xf2d5,	// (0x0004fd0c) call_video_pane_t

0x7e73,	// (0x000488aa) aid_cale_month_size_cell_pane_ParamLimits

0x7e73,	// (0x000488aa) aid_cale_month_size_cell_pane

0xf685,	// (0x000500bc) smil_status_volume_pane_g

0x9707,	// (0x0004a13e) volume_smil_pane_ParamLimits

0xdce4,	// (0x0004e71b) aid_popup2_width_pane

0x7288,	// (0x00047cbf) cell_qdial_pane_g4_ParamLimits

0x7288,	// (0x00047cbf) cell_qdial_pane_g4

0x8906,	// (0x0004933d) aid_blid_cardinal_pane_ParamLimits

0x8912,	// (0x00049349) aid_blid_destination_pane_ParamLimits

0x8912,	// (0x00049349) aid_blid_destination_pane

0xe389,	// (0x0004edc0) bg_popup_call_poc_act_pane_ParamLimits

0xe389,	// (0x0004edc0) bg_popup_call_poc_act_pane

0xe389,	// (0x0004edc0) bg_popup_call_poc_inact_pane_ParamLimits

0xe389,	// (0x0004edc0) bg_popup_call_poc_inact_pane

0x3397,	// (0x00043dce) bg_popup_call_poc_act_pane_g1

0x339f,	// (0x00043dd6) bg_popup_call_poc_act_pane_g2

0x33a7,	// (0x00043dde) bg_popup_call_poc_act_pane_g3

0x3367,	// (0x00043d9e) bg_popup_call_poc_act_pane_g4

0x336f,	// (0x00043da6) bg_popup_call_poc_act_pane_g5

0x33af,	// (0x00043de6) bg_popup_call_poc_act_pane_g6

0x337f,	// (0x00043db6) bg_popup_call_poc_act_pane_g7

0x33b7,	// (0x00043dee) bg_popup_call_poc_act_pane_g8

0xe12e,	// (0x0004eb65) main_usb_pane

0x3550,	// (0x00043f87) popup_cale_lunar_info_window

0x7d16,	// (0x0004874d) im_reading_pane_t1_ParamLimits

0xe715,	// (0x0004f14c) list_im_pane_ParamLimits

0xe726,	// (0x0004f15d) scroll_pane_cp07_ParamLimits

0xe12e,	// (0x0004eb65) grid_highlight_pane_cp012

0xe389,	// (0x0004edc0) mup_scale_pane_ParamLimits

0x218a,	// (0x00042bc1) main_usb_pane_g1_ParamLimits

0x218a,	// (0x00042bc1) main_usb_pane_g1

0x934e,	// (0x00049d85) main_usb_pane_g2_ParamLimits

0x934e,	// (0x00049d85) main_usb_pane_g2

0x0001,

0xf625,	// (0x0005005c) main_usb_pane_g_ParamLimits

0xf625,	// (0x0005005c) main_usb_pane_g

0x935a,	// (0x00049d91) main_usb_pane_t1_ParamLimits

0x935a,	// (0x00049d91) main_usb_pane_t1

0x936c,	// (0x00049da3) main_usb_pane_t2_ParamLimits

0x936c,	// (0x00049da3) main_usb_pane_t2

0x937e,	// (0x00049db5) main_usb_pane_t3_ParamLimits

0x937e,	// (0x00049db5) main_usb_pane_t3

0x9390,	// (0x00049dc7) main_usb_pane_t4_ParamLimits

0x9390,	// (0x00049dc7) main_usb_pane_t4

0x93a2,	// (0x00049dd9) main_usb_pane_t5_ParamLimits

0x93a2,	// (0x00049dd9) main_usb_pane_t5

0x93b4,	// (0x00049deb) main_usb_pane_t6_ParamLimits

0x93b4,	// (0x00049deb) main_usb_pane_t6

0x0005,

0xf62a,	// (0x00050061) main_usb_pane_t_ParamLimits

0x1f8f,	// (0x000429c6) aid_text_placing

0x88b2,	// (0x000492e9) main_location2_pane_t1_ParamLimits

0x88c8,	// (0x000492ff) main_location2_pane_t2_ParamLimits

0x88de,	// (0x00049315) main_location2_pane_t3_ParamLimits

0x88f4,	// (0x0004932b) main_location2_pane_t4_ParamLimits

0x88f4,	// (0x0004932b) main_location2_pane_t4

0xf436,	// (0x0004fe6d) main_location2_pane_t_ParamLimits

0xe3c5,	// (0x0004edfc) find_pinb_pane_g2_ParamLimits

0xe3c5,	// (0x0004edfc) find_pinb_pane_g2

0x0001,

0xf184,	// (0x0004fbbb) find_pinb_pane_g_ParamLimits

0xf184,	// (0x0004fbbb) find_pinb_pane_g

0xe3d1,	// (0x0004ee08) find_pinb_pane_t1_ParamLimits

0xe3e3,	// (0x0004ee1a) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x0004fbc0) find_pinb_pane_t_ParamLimits

0xe12e,	// (0x0004eb65) main_call3_pane

0x812b,	// (0x00048b62) cale_month_day_heading_pane_t1_ParamLimits

0x8189,	// (0x00048bc0) cale_month_day_heading_pane_t2_ParamLimits

0x81ee,	// (0x00048c25) cale_month_day_heading_pane_t3_ParamLimits

0x8253,	// (0x00048c8a) cale_month_day_heading_pane_t4_ParamLimits

0x82b8,	// (0x00048cef) cale_month_day_heading_pane_t5_ParamLimits

0x831d,	// (0x00048d54) cale_month_day_heading_pane_t6_ParamLimits

0x8382,	// (0x00048db9) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x0004fd44) cale_month_day_heading_pane_t_ParamLimits

0x19df,	// (0x00042416) smil_status_volume_pane

0x8faf,	// (0x000499e6) postcard_address_pane_ParamLimits

0x8faf,	// (0x000499e6) postcard_address_pane

0x8fbb,	// (0x000499f2) postcard_message_pane_ParamLimits

0x8fbb,	// (0x000499f2) postcard_message_pane

0x932a,	// (0x00049d61) call2_cli_visual_pane_t1_ParamLimits

0x932a,	// (0x00049d61) call2_cli_visual_pane_t1

0x9858,	// (0x0004a28f) postcard_message_pane_t1_ParamLimits

0x9858,	// (0x0004a28f) postcard_message_pane_t1

0x9841,	// (0x0004a278) postcard_address_pane_t1_ParamLimits

0x9841,	// (0x0004a278) postcard_address_pane_t1

0x9834,	// (0x0004a26b) popup_call3_audio_in_window_ParamLimits

0x9834,	// (0x0004a26b) popup_call3_audio_in_window

0x971c,	// (0x0004a153) bg_popup_call3_in_pane_ParamLimits

0x971c,	// (0x0004a153) bg_popup_call3_in_pane

0x977a,	// (0x0004a1b1) popup_call3_audio_in_window_g1_ParamLimits

0x977a,	// (0x0004a1b1) popup_call3_audio_in_window_g1

0x9792,	// (0x0004a1c9) popup_call3_audio_in_window_g2_ParamLimits

0x9792,	// (0x0004a1c9) popup_call3_audio_in_window_g2

0x97aa,	// (0x0004a1e1) popup_call3_audio_in_window_g3_ParamLimits

0x97aa,	// (0x0004a1e1) popup_call3_audio_in_window_g3

0x0003,

0xf68c,	// (0x000500c3) popup_call3_audio_in_window_g_ParamLimits

0xf68c,	// (0x000500c3) popup_call3_audio_in_window_g

0x97d2,	// (0x0004a209) popup_call3_audio_in_window_t1_ParamLimits

0x97d2,	// (0x0004a209) popup_call3_audio_in_window_t1

0x97fa,	// (0x0004a231) popup_call3_audio_in_window_t2_ParamLimits

0x97fa,	// (0x0004a231) popup_call3_audio_in_window_t2

0x9822,	// (0x0004a259) popup_call3_audio_in_window_t3_ParamLimits

0x9822,	// (0x0004a259) popup_call3_audio_in_window_t3

0x0002,

0xf695,	// (0x000500cc) popup_call3_audio_in_window_t_ParamLimits

0xf695,	// (0x000500cc) popup_call3_audio_in_window_t

0x20cb,	// (0x00042b02) bg_popup_call3_rect_pane

0x330f,	// (0x00043d46) bg_popup_call3_rect_pane_g1

0xe54b,	// (0x0004ef82) bg_popup_call3_rect_pane_g2

0x3317,	// (0x00043d4e) bg_popup_call3_rect_pane_g3

0x331f,	// (0x00043d56) bg_popup_call3_rect_pane_g4

0x3327,	// (0x00043d5e) bg_popup_call3_rect_pane_g5

0x332f,	// (0x00043d66) bg_popup_call3_rect_pane_g6

0x3337,	// (0x00043d6e) bg_popup_call3_rect_pane_g7

0x8c34,	// (0x0004966b) mup_visualizer_osc_pane

0x2198,	// (0x00042bcf) mup_visualizer_spec_pane

0x973c,	// (0x0004a173) call3_video_qcif_pane_ParamLimits

0x973c,	// (0x0004a173) call3_video_qcif_pane

0x974c,	// (0x0004a183) call3_video_qcif_uncrop_pane_ParamLimits

0x974c,	// (0x0004a183) call3_video_qcif_uncrop_pane

0x9758,	// (0x0004a18f) call3_video_subqcif_pane_ParamLimits

0x9758,	// (0x0004a18f) call3_video_subqcif_pane

0x976a,	// (0x0004a1a1) call3_video_subqcif_uncrop_pane_ParamLimits

0x976a,	// (0x0004a1a1) call3_video_subqcif_uncrop_pane

0x97c2,	// (0x0004a1f9) popup_call3_audio_in_window_g4_ParamLimits

0x97c2,	// (0x0004a1f9) popup_call3_audio_in_window_g4

0x96e9,	// (0x0004a120) mup_spec_half_pane

0x96f2,	// (0x0004a129) mup_spec_half_pane_cp

0x35e3,	// (0x0004401a) mup_osc_middle_pane

0x35ec,	// (0x00044023) mup_visualizer_osc_pane_g1

0x96ca,	// (0x0004a101) mup_spec_bar_pane_ParamLimits

0x96ca,	// (0x0004a101) mup_spec_bar_pane

0x35d0,	// (0x00044007) mup_spec_bar_pane_g1

0x35da,	// (0x00044011) mup_spec_bar_pane_g2

0x0001,

0xf680,	// (0x000500b7) mup_spec_bar_pane_g

0x7365,	// (0x00047d9c) aid_cale_week_size_cell_pane_ParamLimits

0x7378,	// (0x00047daf) bg_cale_heading_pane_ParamLimits

0xe58f,	// (0x0004efc6) bg_cale_pane_cp01_ParamLimits

0x738c,	// (0x00047dc3) cale_week_corner_pane_ParamLimits

0x73a2,	// (0x00047dd9) cale_week_day_heading_pane_ParamLimits

0x73b6,	// (0x00047ded) cale_week_scroll_pane_g1_ParamLimits

0x73c7,	// (0x00047dfe) cale_week_scroll_pane_g2_ParamLimits

0x73d8,	// (0x00047e0f) cale_week_scroll_pane_g3_ParamLimits

0x73e9,	// (0x00047e20) cale_week_scroll_pane_g4_ParamLimits

0x73fa,	// (0x00047e31) cale_week_scroll_pane_g5_ParamLimits

0x740b,	// (0x00047e42) cale_week_scroll_pane_g6_ParamLimits

0x741c,	// (0x00047e53) cale_week_scroll_pane_g7_ParamLimits

0x742d,	// (0x00047e64) cale_week_scroll_pane_g8_ParamLimits

0x743e,	// (0x00047e75) cale_week_scroll_pane_g9_ParamLimits

0x744f,	// (0x00047e86) cale_week_scroll_pane_g10_ParamLimits

0x7460,	// (0x00047e97) cale_week_scroll_pane_g11_ParamLimits

0x7471,	// (0x00047ea8) cale_week_scroll_pane_g12_ParamLimits

0x7482,	// (0x00047eb9) cale_week_scroll_pane_g13_ParamLimits

0x7493,	// (0x00047eca) cale_week_scroll_pane_g14_ParamLimits

0x74a4,	// (0x00047edb) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x0004fc4c) cale_week_scroll_pane_g_ParamLimits

0x74b5,	// (0x00047eec) cale_week_time_pane_ParamLimits

0x74c6,	// (0x00047efd) grid_cale_week_pane_ParamLimits

0xe5a8,	// (0x0004efdf) listscroll_cale_week_pane_t1

0x74d9,	// (0x00047f10) scroll_pane_cp08_ParamLimits

0x7eb4,	// (0x000488eb) cale_month_corner_pane_ParamLimits

0x198b,	// (0x000423c2) cale_month_pane_t1

0x80fc,	// (0x00048b33) cale_month_week_pane_ParamLimits

0x218a,	// (0x00042bc1) popup_call_status_window_g1_ParamLimits

0x86e9,	// (0x00049120) popup_call_status_window_g2_ParamLimits

0x86f5,	// (0x0004912c) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x0004fdf4) popup_call_status_window_g_ParamLimits

0x1ddd,	// (0x00042814) aid_call2_pane

0x8e40,	// (0x00049877) msg_header_pane_g1

0x8faf,	// (0x000499e6) postcard_address2_pane_ParamLimits

0x8faf,	// (0x000499e6) postcard_address2_pane

0x8fbb,	// (0x000499f2) postcard_message2_pane_ParamLimits

0x8fbb,	// (0x000499f2) postcard_message2_pane

0x9681,	// (0x0004a0b8) message2_row_pane_ParamLimits

0x9681,	// (0x0004a0b8) message2_row_pane

0x9699,	// (0x0004a0d0) address2_row_pane_ParamLimits

0x9699,	// (0x0004a0d0) address2_row_pane

0x359e,	// (0x00043fd5) postcard_message2_row_pane_g1

0x35a6,	// (0x00043fdd) postcard_message2_row_pane_t1

0x359e,	// (0x00043fd5) address2_row_pane_g1

0x35a6,	// (0x00043fdd) address2_row_pane_t1

0x7792,	// (0x000481c9) aid_size_cell_vorec

0xe12e,	// (0x0004eb65) main_rss_pane

0x96ac,	// (0x0004a0e3) rss_list_single_pane_ParamLimits

0x96ac,	// (0x0004a0e3) rss_list_single_pane

0x35b4,	// (0x00043feb) rss_list_single_pane_t1

0x35c2,	// (0x00043ff9) rss_list_single_pane_t2

0x0001,

0xf67b,	// (0x000500b2) rss_list_single_pane_t

0xe12e,	// (0x0004eb65) main_camera2_pane

0xe12e,	// (0x0004eb65) main_video2_pane

0x98a8,	// (0x0004a2df) cams_zoom_pane_cp2_ParamLimits

0x98a8,	// (0x0004a2df) cams_zoom_pane_cp2

0x98b4,	// (0x0004a2eb) image2_vga_pane_ParamLimits

0x98b4,	// (0x0004a2eb) image2_vga_pane

0x98c3,	// (0x0004a2fa) main_camera2_pane_g1_ParamLimits

0x98c3,	// (0x0004a2fa) main_camera2_pane_g1

0x98cf,	// (0x0004a306) main_camera2_pane_g2_ParamLimits

0x98cf,	// (0x0004a306) main_camera2_pane_g2

0x98db,	// (0x0004a312) main_camera2_pane_g3_ParamLimits

0x98db,	// (0x0004a312) main_camera2_pane_g3

0x98e7,	// (0x0004a31e) main_camera2_pane_g4_ParamLimits

0x98e7,	// (0x0004a31e) main_camera2_pane_g4

0x98f3,	// (0x0004a32a) main_camera2_pane_g5_ParamLimits

0x98f3,	// (0x0004a32a) main_camera2_pane_g5

0x98ff,	// (0x0004a336) main_camera2_pane_g6_ParamLimits

0x98ff,	// (0x0004a336) main_camera2_pane_g6

0x990b,	// (0x0004a342) main_camera2_pane_g7_ParamLimits

0x990b,	// (0x0004a342) main_camera2_pane_g7

0x9917,	// (0x0004a34e) main_camera2_pane_g8_ParamLimits

0x9917,	// (0x0004a34e) main_camera2_pane_g8

0x0008,

0xf69c,	// (0x000500d3) main_camera2_pane_g_ParamLimits

0xf69c,	// (0x000500d3) main_camera2_pane_g

0x992f,	// (0x0004a366) main_camera2_pane_t1_ParamLimits

0x992f,	// (0x0004a366) main_camera2_pane_t1

0x9941,	// (0x0004a378) main_camera2_pane_t2_ParamLimits

0x9941,	// (0x0004a378) main_camera2_pane_t2

0x9953,	// (0x0004a38a) main_camera2_pane_t3_ParamLimits

0x9953,	// (0x0004a38a) main_camera2_pane_t3

0x9965,	// (0x0004a39c) main_camera2_pane_t4_ParamLimits

0x9965,	// (0x0004a39c) main_camera2_pane_t4

0x0006,

0xf6af,	// (0x000500e6) main_camera2_pane_t_ParamLimits

0xf6af,	// (0x000500e6) main_camera2_pane_t

0x99c0,	// (0x0004a3f7) cams_zoom_pane_cp4_ParamLimits

0x99c0,	// (0x0004a3f7) cams_zoom_pane_cp4

0x99d0,	// (0x0004a407) image2_cif_pane_ParamLimits

0x99d0,	// (0x0004a407) image2_cif_pane

0x99e1,	// (0x0004a418) image2_subqcif_pane_ParamLimits

0x99e1,	// (0x0004a418) image2_subqcif_pane

0x99ee,	// (0x0004a425) main_video2_pane_g1_ParamLimits

0x99ee,	// (0x0004a425) main_video2_pane_g1

0x9a00,	// (0x0004a437) main_video2_pane_g2_ParamLimits

0x9a00,	// (0x0004a437) main_video2_pane_g2

0x9a10,	// (0x0004a447) main_video2_pane_g3_ParamLimits

0x9a10,	// (0x0004a447) main_video2_pane_g3

0x9a20,	// (0x0004a457) main_video2_pane_g4_ParamLimits

0x9a20,	// (0x0004a457) main_video2_pane_g4

0x9a30,	// (0x0004a467) main_video2_pane_g5_ParamLimits

0x9a30,	// (0x0004a467) main_video2_pane_g5

0x9a40,	// (0x0004a477) main_video2_pane_g6_ParamLimits

0x9a40,	// (0x0004a477) main_video2_pane_g6

0x0005,

0xf6be,	// (0x000500f5) main_video2_pane_g_ParamLimits

0xf6be,	// (0x000500f5) main_video2_pane_g

0x9a52,	// (0x0004a489) main_video2_pane_t1_ParamLimits

0x9a52,	// (0x0004a489) main_video2_pane_t1

0x9a6c,	// (0x0004a4a3) main_video2_pane_t2_ParamLimits

0x9a6c,	// (0x0004a4a3) main_video2_pane_t2

0x9a92,	// (0x0004a4c9) main_video2_pane_t3_ParamLimits

0x9a92,	// (0x0004a4c9) main_video2_pane_t3

0x0002,

0xf6cb,	// (0x00050102) main_video2_pane_t_ParamLimits

0xf6cb,	// (0x00050102) main_video2_pane_t

0x9463,	// (0x00049e9a) call_muted_g2

0x0001,

0xf66d,	// (0x000500a4) call_muted_g

0xe12e,	// (0x0004eb65) main_mup2_pane

0x3651,	// (0x00044088) main_mup2_pane_g1_ParamLimits

0x3651,	// (0x00044088) main_mup2_pane_g1

0x9ab8,	// (0x0004a4ef) main_mup2_pane_g2_ParamLimits

0x9ab8,	// (0x0004a4ef) main_mup2_pane_g2

0x9d28,	// (0x0004a75f) main_mup_pane_g13_cp1

0x9d30,	// (0x0004a767) mup_volume_pane_cp1

0x9ad8,	// (0x0004a50f) main_mup2_pane_g4_ParamLimits

0x9ad8,	// (0x0004a50f) main_mup2_pane_g4

0x9ae9,	// (0x0004a520) main_mup2_pane_g5_ParamLimits

0x9ae9,	// (0x0004a520) main_mup2_pane_g5

0x9afa,	// (0x0004a531) main_mup2_pane_g6_ParamLimits

0x9afa,	// (0x0004a531) main_mup2_pane_g6

0x9b0b,	// (0x0004a542) main_mup2_pane_g7_ParamLimits

0x9b0b,	// (0x0004a542) main_mup2_pane_g7

0x0006,

0xf6d2,	// (0x00050109) main_mup2_pane_g_ParamLimits

0xf6d2,	// (0x00050109) main_mup2_pane_g

0x9b27,	// (0x0004a55e) main_mup2_pane_t1_ParamLimits

0x9b27,	// (0x0004a55e) main_mup2_pane_t1

0x9b3e,	// (0x0004a575) main_mup2_pane_t2_ParamLimits

0x9b3e,	// (0x0004a575) main_mup2_pane_t2

0x9b55,	// (0x0004a58c) main_mup2_pane_t3_ParamLimits

0x9b55,	// (0x0004a58c) main_mup2_pane_t3

0x9b6c,	// (0x0004a5a3) main_mup2_pane_t4_ParamLimits

0x9b6c,	// (0x0004a5a3) main_mup2_pane_t4

0x9b86,	// (0x0004a5bd) main_mup2_pane_t5_ParamLimits

0x9b86,	// (0x0004a5bd) main_mup2_pane_t5

0x9ba0,	// (0x0004a5d7) main_mup2_pane_t6_ParamLimits

0x9ba0,	// (0x0004a5d7) main_mup2_pane_t6

0x0005,

0xf6e1,	// (0x00050118) main_mup2_pane_t_ParamLimits

0xf6e1,	// (0x00050118) main_mup2_pane_t

0x9bd8,	// (0x0004a60f) mup2_visualizer_pane_ParamLimits

0x9bd8,	// (0x0004a60f) mup2_visualizer_pane

0x9c0a,	// (0x0004a641) mup_progress_pane_cp_ParamLimits

0x9c0a,	// (0x0004a641) mup_progress_pane_cp

0x9d13,	// (0x0004a74a) mup_volume_pane_cp_ParamLimits

0x9d13,	// (0x0004a74a) mup_volume_pane_cp

0x9c21,	// (0x0004a658) mup2_visualizer_pane_g1_ParamLimits

0x9c21,	// (0x0004a658) mup2_visualizer_pane_g1

0x3623,	// (0x0004405a) mup2_visualizer_pane_g2_ParamLimits

0x3623,	// (0x0004405a) mup2_visualizer_pane_g2

0x9c36,	// (0x0004a66d) mup2_visualizer_pane_g3_ParamLimits

0x9c36,	// (0x0004a66d) mup2_visualizer_pane_g3

0x0002,

0xf6ee,	// (0x00050125) mup2_visualizer_pane_g_ParamLimits

0xf6ee,	// (0x00050125) mup2_visualizer_pane_g

0x23f5,	// (0x00042e2c) aid_size_cell_fmradio

0x9545,	// (0x00049f7c) aid_height_parent_landcape

0x17f2,	// (0x00042229) wml_content_pane_cp

0x17fa,	// (0x00042231) wml_tabs_pane

0x1803,	// (0x0004223a) popup_wml_miniature_window

0x180b,	// (0x00042242) scroll_pane_cp021

0x181f,	// (0x00042256) wml_content_pane_comp8

0xe12e,	// (0x0004eb65) bg_popup_sub_pane_cp05

0x3641,	// (0x00044078) popup_wml_miniature_window_g1

0x3649,	// (0x00044080) wml_miniature_view_pane

0x9c42,	// (0x0004a679) aid_size_wml_view

0x9c4a,	// (0x0004a681) wml_miniature_view_pane_g1

0x9c53,	// (0x0004a68a) wml_miniature_view_pane_g2

0x9c5c,	// (0x0004a693) wml_miniature_view_pane_g3

0x9c64,	// (0x0004a69b) wml_miniature_view_pane_g4

0x9c6c,	// (0x0004a6a3) wml_miniature_view_pane_g5

0x9c74,	// (0x0004a6ab) wml_miniature_view_pane_g6

0x9c7c,	// (0x0004a6b3) wml_miniature_view_pane_g7

0x9c84,	// (0x0004a6bb) wml_miniature_view_pane_g8

0x0007,

0xf6f5,	// (0x0005012c) wml_miniature_view_pane_g

0x3651,	// (0x00044088) background_graphic_ParamLimits

0x3651,	// (0x00044088) background_graphic

0x365d,	// (0x00044094) wml_tabs_2_pane

0x3666,	// (0x0004409d) wml_tabs_3_pane_ParamLimits

0x3666,	// (0x0004409d) wml_tabs_3_pane

0x3678,	// (0x000440af) wml_tabs_4_pane_ParamLimits

0x3678,	// (0x000440af) wml_tabs_4_pane

0x368e,	// (0x000440c5) wml_tabs_5_pane_ParamLimits

0x368e,	// (0x000440c5) wml_tabs_5_pane

0x36a8,	// (0x000440df) wml_tabs_pane_g2_ParamLimits

0x36a8,	// (0x000440df) wml_tabs_pane_g2

0x36bc,	// (0x000440f3) wml_tabs_pane_g3_ParamLimits

0x36bc,	// (0x000440f3) wml_tabs_pane_g3

0x9c8c,	// (0x0004a6c3) wml_tabs_2_active_pane_ParamLimits

0x9c8c,	// (0x0004a6c3) wml_tabs_2_active_pane

0x9c9c,	// (0x0004a6d3) wml_tabs_2_passive_pane_ParamLimits

0x9c9c,	// (0x0004a6d3) wml_tabs_2_passive_pane

0x9cac,	// (0x0004a6e3) wml_tabs_3_active_pane_cp_ParamLimits

0x9cac,	// (0x0004a6e3) wml_tabs_3_active_pane_cp

0x9cbd,	// (0x0004a6f4) wml_tabs_3_passive_pane_ParamLimits

0x9cbd,	// (0x0004a6f4) wml_tabs_3_passive_pane

0x9cce,	// (0x0004a705) wml_tabs_3_passive_pane_cp_ParamLimits

0x9cce,	// (0x0004a705) wml_tabs_3_passive_pane_cp

0x9cdf,	// (0x0004a716) tabs_4_active_pane

0x9ce7,	// (0x0004a71e) tabs_4_passive_pane

0x9cef,	// (0x0004a726) tabs_4_passive_pane_cp

0x9cf7,	// (0x0004a72e) tabs_4_passive_pane_cp2

0x9346,	// (0x00049d7d) aid_height_text

0x8c01,	// (0x00049638) mup_volume_cont_pane_ParamLimits

0x8c01,	// (0x00049638) mup_volume_cont_pane

0x6f34,	// (0x0004796b) aid_size_cell_pinb

0x6f3e,	// (0x00047975) aid_size_list_pinb

0x9bf3,	// (0x0004a62a) mup2_volume_cont_pane_ParamLimits

0x9bf3,	// (0x0004a62a) mup2_volume_cont_pane

0x9cff,	// (0x0004a736) mup2_volume_cont_pane_g1_ParamLimits

0x9cff,	// (0x0004a736) mup2_volume_cont_pane_g1

0x6c33,	// (0x0004766a) aid_size_cell_touch_ParamLimits

0x6c33,	// (0x0004766a) aid_size_cell_touch

0x6e34,	// (0x0004786b) touch_pane_ParamLimits

0x6e34,	// (0x0004786b) touch_pane

0xdcd2,	// (0x0004e709) main_rss2_pane

0x36d9,	// (0x00044110) listscroll_rss2_pane

0x36e2,	// (0x00044119) rss2_navigation_pane

0x36ea,	// (0x00044121) list_rss2_pane

0x1f0c,	// (0x00042943) scroll_pane_cp22

0x36f2,	// (0x00044129) rss2_navigation_pane_g1

0x36fb,	// (0x00044132) rss2_navigation_pane_g2

0x3703,	// (0x0004413a) rss2_navigation_pane_g3

0x0002,

0xf706,	// (0x0005013d) rss2_navigation_pane_g

0x370b,	// (0x00044142) rss2_navigation_pane_t1

0x9d38,	// (0x0004a76f) rss2_list_single_pane_ParamLimits

0x9d38,	// (0x0004a76f) rss2_list_single_pane

0x3719,	// (0x00044150) rss2_list_single_pane_t2

0x3727,	// (0x0004415e) rss2_list_single_pane_t3_ParamLimits

0x3727,	// (0x0004415e) rss2_list_single_pane_t3

0x3744,	// (0x0004417b) rss2_list_single_pane_t4

0x8548,	// (0x00048f7f) smil_status_pane_g1

0xe7b3,	// (0x0004f1ea) main_image2_pane_ParamLimits

0xe7b3,	// (0x0004f1ea) main_image2_pane

0x9923,	// (0x0004a35a) main_camera2_pane_g9_ParamLimits

0x9923,	// (0x0004a35a) main_camera2_pane_g9

0x9977,	// (0x0004a3ae) main_camera2_pane_t5_ParamLimits

0x9977,	// (0x0004a3ae) main_camera2_pane_t5

0x9989,	// (0x0004a3c0) main_camera2_pane_t6_ParamLimits

0x9989,	// (0x0004a3c0) main_camera2_pane_t6

0x9d4f,	// (0x0004a786) main_image2_pane_g1_ParamLimits

0x9d4f,	// (0x0004a786) main_image2_pane_g1

0x915b,	// (0x00049b92) smil2_video_pane_ParamLimits

0x915b,	// (0x00049b92) smil2_video_pane

0x161e,	// (0x00042055) aid_zoom_text_primary_cp

0xdd15,	// (0x0004e74c) popup_preview_fixed_window

0xe70d,	// (0x0004f144) im_reading_pane_g1

0x987f,	// (0x0004a2b6) cams2_bc_adjust_pane_cp_ParamLimits

0x987f,	// (0x0004a2b6) cams2_bc_adjust_pane_cp

0x99b4,	// (0x0004a3eb) cams2_bc_adjust_pane_ParamLimits

0x99b4,	// (0x0004a3eb) cams2_bc_adjust_pane

0x49ed,	// (0x00045424) cams2_bc_adjust_pane_g1

0x9d5b,	// (0x0004a792) cams2_slider_pane

0x9d64,	// (0x0004a79b) cams2_slider_pane_g1

0x9d6d,	// (0x0004a7a4) cams2_slider_pane_g2

0x0006,

0xf70d,	// (0x00050144) cams2_slider_pane_g

0x701d,	// (0x00047a54) calc_display_pane_ParamLimits

0x7035,	// (0x00047a6c) calc_paper_pane_ParamLimits

0x7051,	// (0x00047a88) grid_calc_pane_ParamLimits

0x8767,	// (0x0004919e) popup_clock_digital_window_t1_ParamLimits

0x2392,	// (0x00042dc9) main_image_pane_t1

0x7003,	// (0x00047a3a) aid_size_cell_calc_ParamLimits

0x7003,	// (0x00047a3a) aid_size_cell_calc

0x956a,	// (0x00049fa1) popup_blid_sat_info2_window_ParamLimits

0x956a,	// (0x00049fa1) popup_blid_sat_info2_window

0x375a,	// (0x00044191) aid_size_cell_blid

0x3762,	// (0x00044199) bg_popup_window_pane_cp07

0x3785,	// (0x000441bc) grid_popup_blid_pane

0x378d,	// (0x000441c4) heading_pane_cp05_ParamLimits

0x378d,	// (0x000441c4) heading_pane_cp05

0x3855,	// (0x0004428c) cell_popup_blid_pane_ParamLimits

0x3855,	// (0x0004428c) cell_popup_blid_pane

0x3875,	// (0x000442ac) cell_popup_blid_pane_g1

0x387d,	// (0x000442b4) cell_popup_blid_pane_t1

0x9bbd,	// (0x0004a5f4) mup2_indicator_pane_ParamLimits

0x9bbd,	// (0x0004a5f4) mup2_indicator_pane

0x20cb,	// (0x00042b02) mup2_visualizer_osc_pane

0x362f,	// (0x00044066) mup2_visualizer_spec_pane_ParamLimits

0x362f,	// (0x00044066) mup2_visualizer_spec_pane

0x9d87,	// (0x0004a7be) mup2_spec_half_pane

0x9d90,	// (0x0004a7c7) mup2_spec_half_pane_cp

0x9d98,	// (0x0004a7cf) mup2_spec_bar_pane_ParamLimits

0x9d98,	// (0x0004a7cf) mup2_spec_bar_pane

0x35d0,	// (0x00044007) mup2_spec_bar_pane_g1

0x35da,	// (0x00044011) mup2_spec_bar_pane_g2

0x0001,

0xf680,	// (0x000500b7) mup2_spec_bar_pane_g

0x9db7,	// (0x0004a7ee) mup2_osc_middle_pane

0x35ec,	// (0x00044023) mup2_visualizer_osc_pane_g1

0xdd3d,	// (0x0004e774) popup_number_entry_window_t1_ParamLimits

0xdd50,	// (0x0004e787) popup_number_entry_window_t2_ParamLimits

0xdd62,	// (0x0004e799) popup_number_entry_window_t3_ParamLimits

0x6e81,	// (0x000478b8) popup_number_entry_window_t5_ParamLimits

0x6e81,	// (0x000478b8) popup_number_entry_window_t5

0xf12f,	// (0x0004fb66) popup_number_entry_window_t_ParamLimits

0xdd74,	// (0x0004e7ab) text_title_cp2_ParamLimits

0x8e99,	// (0x000498d0) aid_hotspot_pointer_text2_pane

0x8f2b,	// (0x00049962) main_viewer_pane_g9_ParamLimits

0x8f2b,	// (0x00049962) main_viewer_pane_g9

0x198b,	// (0x000423c2) cale_month_pane_t1_ParamLimits

0x19f2,	// (0x00042429) bg_cale_pane_ParamLimits

0x1a0a,	// (0x00042441) list_cale_pane_ParamLimits

0xe5a8,	// (0x0004efdf) listscroll_cale_day_pane_t1

0x1a1b,	// (0x00042452) scroll_pane_cp09_ParamLimits

0x8c3c,	// (0x00049673) main_mup_eq_pane_t1_ParamLimits

0x8c3c,	// (0x00049673) main_mup_eq_pane_t1

0x8c52,	// (0x00049689) main_mup_eq_pane_t2_ParamLimits

0x8c52,	// (0x00049689) main_mup_eq_pane_t2

0x8c68,	// (0x0004969f) main_mup_eq_pane_t3_ParamLimits

0x8c68,	// (0x0004969f) main_mup_eq_pane_t3

0x8c7e,	// (0x000496b5) main_mup_eq_pane_t4_ParamLimits

0x8c7e,	// (0x000496b5) main_mup_eq_pane_t4

0x8c94,	// (0x000496cb) main_mup_eq_pane_t5_ParamLimits

0x8c94,	// (0x000496cb) main_mup_eq_pane_t5

0x8caa,	// (0x000496e1) main_mup_eq_pane_t6_ParamLimits

0x8caa,	// (0x000496e1) main_mup_eq_pane_t6

0x8cbc,	// (0x000496f3) main_mup_eq_pane_t7_ParamLimits

0x8cbc,	// (0x000496f3) main_mup_eq_pane_t7

0x8cce,	// (0x00049705) main_mup_eq_pane_t8_ParamLimits

0x8cce,	// (0x00049705) main_mup_eq_pane_t8

0x8ce0,	// (0x00049717) main_mup_eq_pane_t9_ParamLimits

0x8ce0,	// (0x00049717) main_mup_eq_pane_t9

0x8cf6,	// (0x0004972d) main_mup_eq_pane_t10_ParamLimits

0x8cf6,	// (0x0004972d) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x0004fef3) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x0004fef3) main_mup_eq_pane_t

0x8d89,	// (0x000497c0) mup_equalizer_pane_cp5_ParamLimits

0x8d9b,	// (0x000497d2) mup_equalizer_pane_cp6_ParamLimits

0x8dad,	// (0x000497e4) mup_equalizer_pane_cp7_ParamLimits

0xdcd2,	// (0x0004e709) main_gallery_pane

0x35f5,	// (0x0004402c) smil2_volume_pane

0x3610,	// (0x00044047) smil_status_volume_pane_g1_ParamLimits

0x35fd,	// (0x00044034) smil_status_volume_pane_g2_ParamLimits

0x96fa,	// (0x0004a131) smil_status_volume_pane_g3_ParamLimits

0xf685,	// (0x000500bc) smil_status_volume_pane_g_ParamLimits

0x3762,	// (0x00044199) bg_popup_window_pane_cp07_ParamLimits

0x3770,	// (0x000441a7) blid_firmament_pane

0x9dc0,	// (0x0004a7f7) aid_size_cell_gallery_ParamLimits

0x9dc0,	// (0x0004a7f7) aid_size_cell_gallery

0x9dce,	// (0x0004a805) grid_gallery_pane_ParamLimits

0x9dce,	// (0x0004a805) grid_gallery_pane

0x9dda,	// (0x0004a811) cell_gallery_pane_ParamLimits

0x9dda,	// (0x0004a811) cell_gallery_pane

0x388b,	// (0x000442c2) bg_cell_gallery_focus_pane_ParamLimits

0x388b,	// (0x000442c2) bg_cell_gallery_focus_pane

0x389d,	// (0x000442d4) cell_gallery_pane_g1_ParamLimits

0x389d,	// (0x000442d4) cell_gallery_pane_g1

0x9e19,	// (0x0004a850) cell_gallery_pane_g2_ParamLimits

0x9e19,	// (0x0004a850) cell_gallery_pane_g2

0x9e26,	// (0x0004a85d) cell_gallery_pane_g3_ParamLimits

0x9e26,	// (0x0004a85d) cell_gallery_pane_g3

0x38a9,	// (0x000442e0) cell_gallery_pane_g4_ParamLimits

0x38a9,	// (0x000442e0) cell_gallery_pane_g4

0x0003,

0xf733,	// (0x0005016a) cell_gallery_pane_g_ParamLimits

0xf733,	// (0x0005016a) cell_gallery_pane_g

0x38b5,	// (0x000442ec) bg_cell_gallery_focus_pane_g1

0x38bd,	// (0x000442f4) bg_cell_gallery_focus_pane_g2

0x38c5,	// (0x000442fc) bg_cell_gallery_focus_pane_g3

0x38cd,	// (0x00044304) bg_cell_gallery_focus_pane_g4

0x38d5,	// (0x0004430c) bg_cell_gallery_focus_pane_g5

0x38dd,	// (0x00044314) bg_cell_gallery_focus_pane_g6

0x38e5,	// (0x0004431c) bg_cell_gallery_focus_pane_g7

0x38ed,	// (0x00044324) bg_cell_gallery_focus_pane_g8

0x0007,

0xf73c,	// (0x00050173) bg_cell_gallery_focus_pane_g

0x38f5,	// (0x0004432c) aid_firma_cardinal

0x3909,	// (0x00044340) blid_firmament_pane_t1

0x3920,	// (0x00044357) blid_firmament_pane_t2

0x3937,	// (0x0004436e) blid_firmament_pane_t3

0x394e,	// (0x00044385) blid_firmament_pane_t4

0x0003,

0xf74d,	// (0x00050184) blid_firmament_pane_t

0x3965,	// (0x0004439c) blid_sat_info_pane

0x3975,	// (0x000443ac) blid_sat_info_pane_g1

0x3975,	// (0x000443ac) blid_sat_info_pane_g2

0x0001,

0xf756,	// (0x0005018d) blid_sat_info_pane_g

0x397f,	// (0x000443b6) blid_sat_info_pane_t1

0x398d,	// (0x000443c4) smil2_volume_content_pane

0x3996,	// (0x000443cd) smil2_volume_pane_g1

0x399e,	// (0x000443d5) smil2_volume_content_pane_g1

0x39a7,	// (0x000443de) smil2_volume_content_pane_g2

0x39b0,	// (0x000443e7) smil2_volume_content_pane_g3

0x39b9,	// (0x000443f0) smil2_volume_content_pane_g4

0x39c2,	// (0x000443f9) smil2_volume_content_pane_g5

0x39cb,	// (0x00044402) smil2_volume_content_pane_g6

0x39d4,	// (0x0004440b) smil2_volume_content_pane_g7

0x39dd,	// (0x00044414) smil2_volume_content_pane_g8

0x39e6,	// (0x0004441d) smil2_volume_content_pane_g9

0x39ef,	// (0x00044426) smil2_volume_content_pane_g10

0x0009,

0xf75b,	// (0x00050192) smil2_volume_content_pane_g

0x752d,	// (0x00047f64) cale_week_day_heading_pane_t1_ParamLimits

0x7546,	// (0x00047f7d) cale_week_day_heading_pane_t2_ParamLimits

0x755f,	// (0x00047f96) cale_week_day_heading_pane_t3_ParamLimits

0x7578,	// (0x00047faf) cale_week_day_heading_pane_t4_ParamLimits

0x7591,	// (0x00047fc8) cale_week_day_heading_pane_t5_ParamLimits

0x75aa,	// (0x00047fe1) cale_week_day_heading_pane_t6_ParamLimits

0x75c3,	// (0x00047ffa) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x0004fc6b) cale_week_day_heading_pane_t_ParamLimits

0xe5ba,	// (0x0004eff1) bg_cale_side_pane_ParamLimits

0x75dc,	// (0x00048013) cale_week_time_pane_t1_ParamLimits

0x7608,	// (0x0004803f) cale_week_time_pane_t2_ParamLimits

0x7634,	// (0x0004806b) cale_week_time_pane_t3_ParamLimits

0x7660,	// (0x00048097) cale_week_time_pane_t4_ParamLimits

0x768c,	// (0x000480c3) cale_week_time_pane_t5_ParamLimits

0x76b8,	// (0x000480ef) cale_week_time_pane_t6_ParamLimits

0x76e4,	// (0x0004811b) cale_week_time_pane_t7_ParamLimits

0x7710,	// (0x00048147) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x0004fc7a) cale_week_time_pane_t_ParamLimits

0x773c,	// (0x00048173) cell_cale_week_pane_g2_ParamLimits

0xe5ba,	// (0x0004eff1) bg_cale_side_pane_cp01_ParamLimits

0x83e7,	// (0x00048e1e) cale_month_week_pane_t1_ParamLimits

0x83fe,	// (0x00048e35) cale_month_week_pane_t2_ParamLimits

0x8415,	// (0x00048e4c) cale_month_week_pane_t3_ParamLimits

0x842c,	// (0x00048e63) cale_month_week_pane_t4_ParamLimits

0x8443,	// (0x00048e7a) cale_month_week_pane_t5_ParamLimits

0x845a,	// (0x00048e91) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x0004fd53) cale_month_week_pane_t_ParamLimits

0x8517,	// (0x00048f4e) cell_cale_month_pane_g1_ParamLimits

0xdcd2,	// (0x0004e709) main_cale_event_viewer_pane

0xdcd2,	// (0x0004e709) listscroll_cale_event_viewer_pane

0x39f8,	// (0x0004442f) list_cale_ev_pane

0x3a00,	// (0x00044437) scroll_pane_cp023

0x9e33,	// (0x0004a86a) field_cale_ev_pane_ParamLimits

0x9e33,	// (0x0004a86a) field_cale_ev_pane

0x3a0c,	// (0x00044443) field_cale_ev_content_pane_ParamLimits

0x3a0c,	// (0x00044443) field_cale_ev_content_pane

0x3a18,	// (0x0004444f) field_cale_ev_pane_g1_ParamLimits

0x3a18,	// (0x0004444f) field_cale_ev_pane_g1

0x3a24,	// (0x0004445b) field_cale_ev_pane_g2_ParamLimits

0x3a24,	// (0x0004445b) field_cale_ev_pane_g2

0x3a3c,	// (0x00044473) field_cale_ev_pane_g3_ParamLimits

0x3a3c,	// (0x00044473) field_cale_ev_pane_g3

0x0002,

0xf770,	// (0x000501a7) field_cale_ev_pane_g_ParamLimits

0xf770,	// (0x000501a7) field_cale_ev_pane_g

0x3a54,	// (0x0004448b) field_cale_ev_pane_t1_ParamLimits

0x3a54,	// (0x0004448b) field_cale_ev_pane_t1

0x9e4d,	// (0x0004a884) field_cale_ev_content_pane_t1_ParamLimits

0x9e4d,	// (0x0004a884) field_cale_ev_content_pane_t1

0x2242,	// (0x00042c79) bg_button_pane_cp01

0xe580,	// (0x0004efb7) listscroll_cale_week_pane_ParamLimits

0x735d,	// (0x00047d94) popup_toolbar_window_cp01

0xe5a8,	// (0x0004efdf) listscroll_cale_week_pane_t1_ParamLimits

0xe458,	// (0x0004ee8f) listscroll_cale_day_pane_ParamLimits

0x735d,	// (0x00047d94) popup_toolbar_window_cp02

0xe5a8,	// (0x0004efdf) listscroll_cale_day_pane_t1_ParamLimits

0xe580,	// (0x0004efb7) main_cale_month_pane_ParamLimits

0x960a,	// (0x0004a041) popup_toolbar_window_cp03_ParamLimits

0x960a,	// (0x0004a041) popup_toolbar_window_cp03

0x9083,	// (0x00049aba) main_image_pane_g2_ParamLimits

0x9083,	// (0x00049aba) main_image_pane_g2

0x908f,	// (0x00049ac6) main_image_pane_g3_ParamLimits

0x908f,	// (0x00049ac6) main_image_pane_g3

0x0002,

0xf54e,	// (0x0004ff85) main_image_pane_g_ParamLimits

0xf54e,	// (0x0004ff85) main_image_pane_g

0x2392,	// (0x00042dc9) main_image_pane_t1_ParamLimits

0x909b,	// (0x00049ad2) main_image_pane_t2_ParamLimits

0x909b,	// (0x00049ad2) main_image_pane_t2

0x90ad,	// (0x00049ae4) main_image_pane_t3_ParamLimits

0x90ad,	// (0x00049ae4) main_image_pane_t3

0x90bf,	// (0x00049af6) main_image_pane_t4_ParamLimits

0x90bf,	// (0x00049af6) main_image_pane_t4

0x0003,

0xf555,	// (0x0004ff8c) main_image_pane_t_ParamLimits

0xf555,	// (0x0004ff8c) main_image_pane_t

0x90d1,	// (0x00049b08) popup_image_details_window_cp01

0x90d9,	// (0x00049b10) popup_toobar_trans_pane_cp01_ParamLimits

0x90d9,	// (0x00049b10) popup_toobar_trans_pane_cp01

0x95a9,	// (0x00049fe0) popup_image_details_window_ParamLimits

0x95a9,	// (0x00049fe0) popup_image_details_window

0x3558,	// (0x00043f8f) popup_image_focus_window

0x9873,	// (0x0004a2aa) camera2_autofocus_pane_ParamLimits

0x9873,	// (0x0004a2aa) camera2_autofocus_pane

0xdcd2,	// (0x0004e709) bg_popup_sub_pane_cp06

0x3a6b,	// (0x000444a2) popup_image_focus_window_g1

0x3a73,	// (0x000444aa) popup_image_focus_window_g2

0x3a7b,	// (0x000444b2) popup_image_focus_window_g3

0x3a83,	// (0x000444ba) popup_image_focus_window_g4

0x0003,

0xf777,	// (0x000501ae) popup_image_focus_window_g

0x3a8b,	// (0x000444c2) popup_image_focus_window_t1

0x3a99,	// (0x000444d0) popup_image_focus_window_t2

0x3aa8,	// (0x000444df) popup_image_focus_window_t3

0x0002,

0xf780,	// (0x000501b7) popup_image_focus_window_t

0x3ab6,	// (0x000444ed) camera2_autofocus_pane_g1

0xe7b3,	// (0x0004f1ea) bg_tb_trans_pane_cp01

0x3ac4,	// (0x000444fb) popup_image_details_window_g1

0x3ad7,	// (0x0004450e) popup_image_details_window_g2

0x0002,

0xf792,	// (0x000501c9) popup_image_details_window_g

0x3b00,	// (0x00044537) popup_image_details_window_t1

0x3b12,	// (0x00044549) popup_image_details_window_t2

0x3b2b,	// (0x00044562) popup_image_details_window_t3

0x3b3f,	// (0x00044576) popup_image_details_window_t4

0x3b5a,	// (0x00044591) popup_image_details_window_t5

0x0004,

0xf799,	// (0x000501d0) popup_image_details_window_t

0xe440,	// (0x0004ee77) bg_calc_paper_pane_ParamLimits

0x7132,	// (0x00047b69) grid_highlight_pane_cp013

0x713c,	// (0x00047b73) list_calc_pane_ParamLimits

0x714e,	// (0x00047b85) scroll_pane_cp024

0xe458,	// (0x0004ee8f) bg_calc_display_pane_ParamLimits

0x7156,	// (0x00047b8d) calc_display_pane_t1_ParamLimits

0x716b,	// (0x00047ba2) calc_display_pane_t2_ParamLimits

0x7180,	// (0x00047bb7) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x0004fbed) calc_display_pane_t_ParamLimits

0x7236,	// (0x00047c6d) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x0004fc0a) cell_calc_pane_g

0x723f,	// (0x00047c76) cell_calc_pane_t1

0xe4b7,	// (0x0004eeee) grid_highlight_pane_cp02_ParamLimits

0xe4cd,	// (0x0004ef04) toolbar_button_pane_cp01_ParamLimits

0xe4cd,	// (0x0004ef04) toolbar_button_pane_cp01

0x23d7,	// (0x00042e0e) temp_image_control_pane_ParamLimits

0x23d7,	// (0x00042e0e) temp_image_control_pane

0xe7b3,	// (0x0004f1ea) main_mp3_pane

0x3b74,	// (0x000445ab) temp_image_control_pane_g1_ParamLimits

0x3b74,	// (0x000445ab) temp_image_control_pane_g1

0x3b82,	// (0x000445b9) temp_image_control_pane_g2_ParamLimits

0x3b82,	// (0x000445b9) temp_image_control_pane_g2

0x3b94,	// (0x000445cb) temp_image_control_pane_g3_ParamLimits

0x3b94,	// (0x000445cb) temp_image_control_pane_g3

0x9e97,	// (0x0004a8ce) temp_image_control_pane_g4_ParamLimits

0x9e97,	// (0x0004a8ce) temp_image_control_pane_g4

0x0003,

0xf7a4,	// (0x000501db) temp_image_control_pane_g_ParamLimits

0xf7a4,	// (0x000501db) temp_image_control_pane_g

0x3b74,	// (0x000445ab) main_mp3_pane_g1

0x9ea8,	// (0x0004a8df) main_mp3_pane_g2

0x0007,

0xf7ad,	// (0x000501e4) main_mp3_pane_g

0x3bd7,	// (0x0004460e) main_mp3_pane_t1

0xe616,	// (0x0004f04d) main_camera_pane_g8_ParamLimits

0xe616,	// (0x0004f04d) main_camera_pane_g8

0x79b7,	// (0x000483ee) main_video_pane_g7_ParamLimits

0x79b7,	// (0x000483ee) main_video_pane_g7

0x99a2,	// (0x0004a3d9) main_camera2_pane_t7_ParamLimits

0x99a2,	// (0x0004a3d9) main_camera2_pane_t7

0xe773,	// (0x0004f1aa) scroll_pane_cp025_ParamLimits

0xe773,	// (0x0004f1aa) scroll_pane_cp025

0xe787,	// (0x0004f1be) scroll_pane_cp026_ParamLimits

0xe787,	// (0x0004f1be) scroll_pane_cp026

0xe796,	// (0x0004f1cd) wml_content_pane_ParamLimits

0xdcd2,	// (0x0004e709) main_touch_calib_pane

0x9f3f,	// (0x0004a976) main_touch_calib_pane_g1

0x9f4b,	// (0x0004a982) main_touch_calib_pane_g2

0x9f57,	// (0x0004a98e) main_touch_calib_pane_g3

0x9f63,	// (0x0004a99a) main_touch_calib_pane_g4

0x0003,

0xf7cb,	// (0x00050202) main_touch_calib_pane_g

0x9f6f,	// (0x0004a9a6) main_touch_calib_pane_t1

0x9f84,	// (0x0004a9bb) main_touch_calib_pane_t2

0x0004,

0xf7d4,	// (0x0005020b) main_touch_calib_pane_t

0x1fbd,	// (0x000429f4) mup_progress_pane_cp02

0x1fdc,	// (0x00042a13) navi_pane_g1

0x205c,	// (0x00042a93) navi_pane_mp_t3

0xe7b3,	// (0x0004f1ea) main_mp3_pane_ParamLimits

0x9644,	// (0x0004a07b) navi_pane_ParamLimits

0x3b74,	// (0x000445ab) main_mp3_pane_g1_ParamLimits

0x9ea8,	// (0x0004a8df) main_mp3_pane_g2_ParamLimits

0x9eb4,	// (0x0004a8eb) main_mp3_pane_g3_ParamLimits

0x9eb4,	// (0x0004a8eb) main_mp3_pane_g3

0x9ec0,	// (0x0004a8f7) main_mp3_pane_g4_ParamLimits

0x9ec0,	// (0x0004a8f7) main_mp3_pane_g4

0x3ba4,	// (0x000445db) main_mp3_pane_g5_ParamLimits

0x3ba4,	// (0x000445db) main_mp3_pane_g5

0x3bb2,	// (0x000445e9) main_mp3_pane_g6_ParamLimits

0x3bb2,	// (0x000445e9) main_mp3_pane_g6

0x3bbf,	// (0x000445f6) main_mp3_pane_g7_ParamLimits

0x3bbf,	// (0x000445f6) main_mp3_pane_g7

0x3bcb,	// (0x00044602) main_mp3_pane_g8_ParamLimits

0x3bcb,	// (0x00044602) main_mp3_pane_g8

0xf7ad,	// (0x000501e4) main_mp3_pane_g_ParamLimits

0x9ecc,	// (0x0004a903) main_mp3_pane_t2

0x9eda,	// (0x0004a911) main_mp3_pane_t3

0x3be5,	// (0x0004461c) main_mp3_pane_t4

0x3bf3,	// (0x0004462a) main_mp3_pane_t5

0x0005,

0xf7be,	// (0x000501f5) main_mp3_pane_t

0x3c01,	// (0x00044638) mup_progress_pane_cp01

0x161e,	// (0x00042055) aid_zoom_text_secondary2

0x39f8,	// (0x0004442f) list_cale_ev2_pane

0x3a00,	// (0x00044437) scroll_pane_cp023_ParamLimits

0x9fcf,	// (0x0004aa06) field_cale_ev2_pane_ParamLimits

0x9fcf,	// (0x0004aa06) field_cale_ev2_pane

0x3c09,	// (0x00044640) field_cale_ev2_pane_g1_ParamLimits

0x3c09,	// (0x00044640) field_cale_ev2_pane_g1

0x3c15,	// (0x0004464c) field_cale_ev2_pane_g2_ParamLimits

0x3c15,	// (0x0004464c) field_cale_ev2_pane_g2

0x3c2d,	// (0x00044664) field_cale_ev2_pane_g3_ParamLimits

0x3c2d,	// (0x00044664) field_cale_ev2_pane_g3

0x0003,

0xf7df,	// (0x00050216) field_cale_ev2_pane_g_ParamLimits

0xf7df,	// (0x00050216) field_cale_ev2_pane_g

0x3c51,	// (0x00044688) field_cale_ev2_pane_t1_ParamLimits

0x3c51,	// (0x00044688) field_cale_ev2_pane_t1

0x3c68,	// (0x0004469f) field_cale_ev2_pane_t2_ParamLimits

0x3c68,	// (0x0004469f) field_cale_ev2_pane_t2

0x0001,

0xf7e8,	// (0x0005021f) field_cale_ev2_pane_t_ParamLimits

0xf7e8,	// (0x0005021f) field_cale_ev2_pane_t

0x8f7f,	// (0x000499b6) main_postcard_pane_g5_ParamLimits

0x8f7f,	// (0x000499b6) main_postcard_pane_g5

0x8f8b,	// (0x000499c2) main_postcard_pane_g6_ParamLimits

0x8f8b,	// (0x000499c2) main_postcard_pane_g6

0x780c,	// (0x00048243) camera2_autofocus_pane_cp_ParamLimits

0x780c,	// (0x00048243) camera2_autofocus_pane_cp

0xe7b3,	// (0x0004f1ea) main_mup3_pane

0xa005,	// (0x0004aa3c) main_mup3_pane_g1_ParamLimits

0xa005,	// (0x0004aa3c) main_mup3_pane_g1

0xa026,	// (0x0004aa5d) main_mup3_pane_g2_ParamLimits

0xa026,	// (0x0004aa5d) main_mup3_pane_g2

0xa089,	// (0x0004aac0) main_mup3_pane_g3_ParamLimits

0xa089,	// (0x0004aac0) main_mup3_pane_g3

0xa0c4,	// (0x0004aafb) main_mup3_pane_g4_ParamLimits

0xa0c4,	// (0x0004aafb) main_mup3_pane_g4

0xa0ff,	// (0x0004ab36) main_mup3_pane_g5_ParamLimits

0xa0ff,	// (0x0004ab36) main_mup3_pane_g5

0xa13a,	// (0x0004ab71) main_mup3_pane_g6_ParamLimits

0xa13a,	// (0x0004ab71) main_mup3_pane_g6

0x3c7d,	// (0x000446b4) main_mup3_pane_g7_ParamLimits

0x3c7d,	// (0x000446b4) main_mup3_pane_g7

0x0007,

0xf7f8,	// (0x0005022f) main_mup3_pane_g_ParamLimits

0xf7f8,	// (0x0005022f) main_mup3_pane_g

0xa1a8,	// (0x0004abdf) main_mup3_pane_t1_ParamLimits

0xa1a8,	// (0x0004abdf) main_mup3_pane_t1

0xa20b,	// (0x0004ac42) main_mup3_pane_t2_ParamLimits

0xa20b,	// (0x0004ac42) main_mup3_pane_t2

0xa2c8,	// (0x0004acff) main_mup3_pane_t4_ParamLimits

0xa2c8,	// (0x0004acff) main_mup3_pane_t4

0xa30e,	// (0x0004ad45) main_mup3_pane_t5_ParamLimits

0xa30e,	// (0x0004ad45) main_mup3_pane_t5

0xa3b2,	// (0x0004ade9) main_mup3_pane_t6_ParamLimits

0xa3b2,	// (0x0004ade9) main_mup3_pane_t6

0x0005,

0xf809,	// (0x00050240) main_mup3_pane_t_ParamLimits

0xf809,	// (0x00050240) main_mup3_pane_t

0xa45a,	// (0x0004ae91) mup3_progress_pane_ParamLimits

0xa45a,	// (0x0004ae91) mup3_progress_pane

0xa4a0,	// (0x0004aed7) popup_mup3_control_window_ParamLimits

0xa4a0,	// (0x0004aed7) popup_mup3_control_window

0x3c8b,	// (0x000446c2) popup_mup3_text_window

0xa4b9,	// (0x0004aef0) mup3_progress_pane_t1

0xa4cf,	// (0x0004af06) mup3_progress_pane_t2

0x3c93,	// (0x000446ca) mup3_progress_pane_t3

0x0002,

0xf816,	// (0x0005024d) mup3_progress_pane_t

0x3caa,	// (0x000446e1) mup_progress_pane_cp03

0xdcd2,	// (0x0004e709) bg_tb_trans_pane_cp04

0xa4e5,	// (0x0004af1c) mup3_volume_pane

0xa4ed,	// (0x0004af24) popup_mup3_control_window_g1

0xa4f6,	// (0x0004af2d) mup3_volume_pane_g1

0xa4ff,	// (0x0004af36) mup3_volume_pane_g2

0xa508,	// (0x0004af3f) mup3_volume_pane_g3

0x0002,

0xf81d,	// (0x00050254) mup3_volume_pane_g

0xdcd2,	// (0x0004e709) bg_tb_trans_pane_cp03

0x3cba,	// (0x000446f1) popup_mup3_text_window_g1

0x3cc2,	// (0x000446f9) popup_mup3_text_window_t1

0xe4a0,	// (0x0004eed7) list_calc_item_pane_g1_ParamLimits

0x36d0,	// (0x00044107) mup_volume_pane_cp_g1

0x9f99,	// (0x0004a9d0) main_touch_calib_pane_t3

0x9fab,	// (0x0004a9e2) main_touch_calib_pane_t4

0x9fbd,	// (0x0004a9f4) main_touch_calib_pane_t5

0xdcdc,	// (0x0004e713) aid_cell_size_toolbar2

0xdce4,	// (0x0004e71b) aid_popup3_width_pane

0x1616,	// (0x0004204d) aid_zoom_text_msg_primary

0x77f6,	// (0x0004822d) vorec_t7

0xe464,	// (0x0004ee9b) bg_calc_paper_pane_g1_ParamLimits

0xe470,	// (0x0004eea7) bg_calc_paper_pane_g2_ParamLimits

0xe47c,	// (0x0004eeb3) bg_calc_paper_pane_g3_ParamLimits

0xe488,	// (0x0004eebf) bg_calc_paper_pane_g4_ParamLimits

0xe494,	// (0x0004eecb) bg_calc_paper_pane_g5_ParamLimits

0x71b9,	// (0x00047bf0) bg_calc_paper_pane_g6_ParamLimits

0x71c8,	// (0x00047bff) bg_calc_paper_pane_g7_ParamLimits

0x71d7,	// (0x00047c0e) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x0004fbf4) bg_calc_paper_pane_g_ParamLimits

0x71e6,	// (0x00047c1d) calc_bg_paper_pane_g9_ParamLimits

0x78ec,	// (0x00048323) image_qvga_pane_ParamLimits

0x78ec,	// (0x00048323) image_qvga_pane

0xe389,	// (0x0004edc0) bg_popup_sub_pane_cp04_ParamLimits

0x230e,	// (0x00042d45) popup_mup_playback_window_g1_ParamLimits

0x231a,	// (0x00042d51) popup_mup_playback_window_t1_ParamLimits

0x232f,	// (0x00042d66) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x0004ff80) popup_mup_playback_window_t_ParamLimits

0x9ac9,	// (0x0004a500) main_mup2_pane_g3_ParamLimits

0x9ac9,	// (0x0004a500) main_mup2_pane_g3

0x7b5a,	// (0x00048591) popup_toolbar_window_cp04

0x2710,	// (0x00043147) popup_call2_audio_second_window_g3_ParamLimits

0x2710,	// (0x00043147) popup_call2_audio_second_window_g3

0x2b1a,	// (0x00043551) popup_call2_audio_first_window_g4_ParamLimits

0x2b1a,	// (0x00043551) popup_call2_audio_first_window_g4

0x3199,	// (0x00043bd0) popup_call2_audio_in_window_g4_ParamLimits

0x3199,	// (0x00043bd0) popup_call2_audio_in_window_g4

0x9076,	// (0x00049aad) aid_area_sk_bg_cut_ParamLimits

0x9076,	// (0x00049aad) aid_area_sk_bg_cut

0x2344,	// (0x00042d7b) aid_area_sk_bg_cut_2_ParamLimits

0x2344,	// (0x00042d7b) aid_area_sk_bg_cut_2

0x9e09,	// (0x0004a840) aid_placing_details_win

0x9e11,	// (0x0004a848) aid_placing_details_win_2

0x3ab6,	// (0x000444ed) camera2_autofocus_pane_g1_ParamLimits

0x6df0,	// (0x00047827) popup_fixed_preview_cale_window_ParamLimits

0x6df0,	// (0x00047827) popup_fixed_preview_cale_window

0x20ee,	// (0x00042b25) navi_slider_pane_g3

0x20e5,	// (0x00042b1c) navi_slider_pane_g4

0x20dc,	// (0x00042b13) navi_slider_pane_g5

0x20ee,	// (0x00042b25) navi_slider_pane_g6

0x89fc,	// (0x00049433) navi_slider_pane_g7

0x220f,	// (0x00042c46) mup_scale_pane_g3

0x2218,	// (0x00042c4f) mup_scale_pane_g4

0x2221,	// (0x00042c58) mup_scale_pane_g5

0x8dbf,	// (0x000497f6) mup_scale_pane_g6

0x8dc8,	// (0x000497ff) mup_scale_pane_g7

0x20ee,	// (0x00042b25) cams2_slider_pane_g3

0x3752,	// (0x00044189) cams2_slider_pane_g4

0x9d76,	// (0x0004a7ad) cams2_slider_pane_g5

0x20ee,	// (0x00042b25) cams2_slider_pane_g6

0x9d7e,	// (0x0004a7b5) cams2_slider_pane_g7

0x3975,	// (0x000443ac) camera2_autofocus_pane_cp_g1

0x3cd0,	// (0x00044707) bg_popup_preview_window_pane_cp02_ParamLimits

0x3cd0,	// (0x00044707) bg_popup_preview_window_pane_cp02

0xa511,	// (0x0004af48) list_fp_cale_pane_ParamLimits

0xa511,	// (0x0004af48) list_fp_cale_pane

0x3cdc,	// (0x00044713) popup_fixed_preview_cale_window_t1_ParamLimits

0x3cdc,	// (0x00044713) popup_fixed_preview_cale_window_t1

0xa521,	// (0x0004af58) popup_fixed_preview_cale_window_t2_ParamLimits

0xa521,	// (0x0004af58) popup_fixed_preview_cale_window_t2

0xa536,	// (0x0004af6d) popup_fixed_preview_cale_window_t3_ParamLimits

0xa536,	// (0x0004af6d) popup_fixed_preview_cale_window_t3

0x0002,

0xf824,	// (0x0005025b) popup_fixed_preview_cale_window_t_ParamLimits

0xf824,	// (0x0005025b) popup_fixed_preview_cale_window_t

0xa548,	// (0x0004af7f) list_single_fp_cale_pane_ParamLimits

0xa548,	// (0x0004af7f) list_single_fp_cale_pane

0xa555,	// (0x0004af8c) list_single_fp_cale_pane_g1_ParamLimits

0xa555,	// (0x0004af8c) list_single_fp_cale_pane_g1

0x3cfa,	// (0x00044731) list_single_fp_cale_pane_g2_ParamLimits

0x3cfa,	// (0x00044731) list_single_fp_cale_pane_g2

0x0002,

0xf82b,	// (0x00050262) list_single_fp_cale_pane_g_ParamLimits

0xf82b,	// (0x00050262) list_single_fp_cale_pane_g

0xa561,	// (0x0004af98) list_single_fp_cale_pane_t1_ParamLimits

0xa561,	// (0x0004af98) list_single_fp_cale_pane_t1

0xa573,	// (0x0004afaa) list_single_fp_cale_pane_t2_ParamLimits

0xa573,	// (0x0004afaa) list_single_fp_cale_pane_t2

0x0001,

0xf832,	// (0x00050269) list_single_fp_cale_pane_t_ParamLimits

0xf832,	// (0x00050269) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xdcd2,	// (0x0004e709) main_dialer_pane

0xa5a6,	// (0x0004afdd) aid_cell_size_keypad

0xa5b0,	// (0x0004afe7) dialer_ne_pane

0xa5b8,	// (0x0004afef) grid_dialer_command_1_pane

0xa5c0,	// (0x0004aff7) grid_dialer_command_2_pane

0xa5c8,	// (0x0004afff) grid_dialer_keypad_pane

0xa5d8,	// (0x0004b00f) bg_popup_call_pane_cp06_ParamLimits

0xa5d8,	// (0x0004b00f) bg_popup_call_pane_cp06

0xa5e4,	// (0x0004b01b) dialer_ne_clear_pane_ParamLimits

0xa5e4,	// (0x0004b01b) dialer_ne_clear_pane

0x3d13,	// (0x0004474a) dialer_ne_pane_g1

0x3d1b,	// (0x00044752) dialer_ne_pane_t1_ParamLimits

0x3d1b,	// (0x00044752) dialer_ne_pane_t1

0xa5f0,	// (0x0004b027) dialer_ne_pane_t2_ParamLimits

0xa5f0,	// (0x0004b027) dialer_ne_pane_t2

0xa60d,	// (0x0004b044) dialer_ne_pane_t3_ParamLimits

0xa60d,	// (0x0004b044) dialer_ne_pane_t3

0x0002,

0xf837,	// (0x0005026e) dialer_ne_pane_t_ParamLimits

0xf837,	// (0x0005026e) dialer_ne_pane_t

0xa631,	// (0x0004b068) dialer_ne_pane_t3_copy1_ParamLimits

0xa631,	// (0x0004b068) dialer_ne_pane_t3_copy1

0xa655,	// (0x0004b08c) cell_dialer_keypad_pane_ParamLimits

0xa655,	// (0x0004b08c) cell_dialer_keypad_pane

0xa66a,	// (0x0004b0a1) cell_dialer_command_1_pane_ParamLimits

0xa66a,	// (0x0004b0a1) cell_dialer_command_1_pane

0xa680,	// (0x0004b0b7) cell_dialer_command_2_pane_ParamLimits

0xa680,	// (0x0004b0b7) cell_dialer_command_2_pane

0x3d2d,	// (0x00044764) bg_button_pane_cp02_ParamLimits

0x3d2d,	// (0x00044764) bg_button_pane_cp02

0xa68f,	// (0x0004b0c6) cell_dialer_keypad_pane_g1_ParamLimits

0xa68f,	// (0x0004b0c6) cell_dialer_keypad_pane_g1

0x3d2d,	// (0x00044764) bg_button_pane_cp03_ParamLimits

0x3d2d,	// (0x00044764) bg_button_pane_cp03

0xa6a4,	// (0x0004b0db) cell_dialer_command_1_pane_g1_ParamLimits

0xa6a4,	// (0x0004b0db) cell_dialer_command_1_pane_g1

0x3d39,	// (0x00044770) bg_button_pane_cp04

0xa6b7,	// (0x0004b0ee) cell_dialer_command_2_pane_g1

0x20cb,	// (0x00042b02) bg_button_pane_cp06

0x3d41,	// (0x00044778) dialer_ne_clear_pane_g1

0x1fe8,	// (0x00042a1f) navi_pane_g2

0x89a4,	// (0x000493db) navi_pane_g3

0x0002,

0xf44c,	// (0x0004fe83) navi_pane_g

0x206a,	// (0x00042aa1) navi_pane_mv_g2

0x2092,	// (0x00042ac9) navi_pane_mv_g5

0x89c9,	// (0x00049400) navi_pane_mv_t1

0xe458,	// (0x0004ee8f) main_clock2_pane

0xa6e6,	// (0x0004b11d) main_clock2_list_pane_ParamLimits

0xa6e6,	// (0x0004b11d) main_clock2_list_pane

0xa70c,	// (0x0004b143) main_clock2_pane_t1_ParamLimits

0xa70c,	// (0x0004b143) main_clock2_pane_t1

0xa736,	// (0x0004b16d) main_clock2_pane_t2_ParamLimits

0xa736,	// (0x0004b16d) main_clock2_pane_t2

0x0004,

0xf83e,	// (0x00050275) main_clock2_pane_t_ParamLimits

0xf83e,	// (0x00050275) main_clock2_pane_t

0xa799,	// (0x0004b1d0) popup_clock_analogue_window_cp03_ParamLimits

0xa799,	// (0x0004b1d0) popup_clock_analogue_window_cp03

0xa7b5,	// (0x0004b1ec) popup_clock_digital_window_cp02_ParamLimits

0xa7b5,	// (0x0004b1ec) popup_clock_digital_window_cp02

0xa803,	// (0x0004b23a) main_clock2_list_single_pane_ParamLimits

0xa803,	// (0x0004b23a) main_clock2_list_single_pane

0x20cb,	// (0x00042b02) list_highlight_pane_cp05

0x3d49,	// (0x00044780) main_clock2_list_single_pane_t1

0x7b5a,	// (0x00048591) popup_toolbar_window_cp04_ParamLimits

0x9e67,	// (0x0004a89e) camera2_autofocus_pane_g2_ParamLimits

0x9e67,	// (0x0004a89e) camera2_autofocus_pane_g2

0x9e73,	// (0x0004a8aa) camera2_autofocus_pane_g3_ParamLimits

0x9e73,	// (0x0004a8aa) camera2_autofocus_pane_g3

0x9e7f,	// (0x0004a8b6) camera2_autofocus_pane_g4_ParamLimits

0x9e7f,	// (0x0004a8b6) camera2_autofocus_pane_g4

0x9e8b,	// (0x0004a8c2) camera2_autofocus_pane_g5_ParamLimits

0x9e8b,	// (0x0004a8c2) camera2_autofocus_pane_g5

0x0004,

0xf787,	// (0x000501be) camera2_autofocus_pane_g_ParamLimits

0xf787,	// (0x000501be) camera2_autofocus_pane_g

0x9fe5,	// (0x0004aa1c) camera2_autofocus_pane_cp_g2

0x9fed,	// (0x0004aa24) camera2_autofocus_pane_cp_g3

0x9ff5,	// (0x0004aa2c) camera2_autofocus_pane_cp_g4

0x9ffd,	// (0x0004aa34) camera2_autofocus_pane_cp_g5

0x0004,

0xf7ed,	// (0x00050224) camera2_autofocus_pane_cp_g

0xa5d0,	// (0x0004b007) popup_dialer_spcha_window

0xdcd2,	// (0x0004e709) bg_popup_sub_pane_cp07

0x3d57,	// (0x0004478e) list_spcha_pane

0x3d5f,	// (0x00044796) list_single_spcha_pane_ParamLimits

0x3d5f,	// (0x00044796) list_single_spcha_pane

0xdcd2,	// (0x0004e709) list_highlight_pane_cp06

0x3d70,	// (0x000447a7) list_single_spcha_pane_t1

0x2f43,	// (0x0004397a) popup_call2_audio_out_window_g4_ParamLimits

0x2f43,	// (0x0004397a) popup_call2_audio_out_window_g4

0xdcd2,	// (0x0004e709) main_imed2_pane

0x3560,	// (0x00043f97) popup_imed_adjust2_window

0x95b5,	// (0x00049fec) popup_imed_trans_window_ParamLimits

0x95b5,	// (0x00049fec) popup_imed_trans_window

0x37b9,	// (0x000441f0) popup_blid_sat_info2_window_t1

0x37c7,	// (0x000441fe) popup_blid_sat_info2_window_t2

0x000a,

0xf71c,	// (0x00050153) popup_blid_sat_info2_window_t

0xa8ab,	// (0x0004b2e2) aid_size_cell_colour_35

0xa8c2,	// (0x0004b2f9) aid_size_cell_colour_112

0xa8d9,	// (0x0004b310) aid_size_cell_effect

0xe7b3,	// (0x0004f1ea) bg_tb_trans_pane_cp02

0x1bb7,	// (0x000425ee) heading_imed_pane

0xa8f3,	// (0x0004b32a) listscroll_imed_pane

0x3d7e,	// (0x000447b5) heading_imed_pane_g1

0x3d86,	// (0x000447bd) heading_imed_pane_t1

0x3d94,	// (0x000447cb) grid_imed_colour_35_pane_ParamLimits

0x3d94,	// (0x000447cb) grid_imed_colour_35_pane

0xa8ff,	// (0x0004b336) grid_imed_effect_pane

0x3da7,	// (0x000447de) list_imed_aspect_pane

0xa90b,	// (0x0004b342) scroll_pane_cp027_ParamLimits

0xa90b,	// (0x0004b342) scroll_pane_cp027

0xa917,	// (0x0004b34e) cell_imed_effect_pane_ParamLimits

0xa917,	// (0x0004b34e) cell_imed_effect_pane

0x3daf,	// (0x000447e6) cell_imed_colour_pane_ParamLimits

0x3daf,	// (0x000447e6) cell_imed_colour_pane

0x3de9,	// (0x00044820) cell_imed_colour_pane_g1_ParamLimits

0x3de9,	// (0x00044820) cell_imed_colour_pane_g1

0x3dfa,	// (0x00044831) hgihlgiht_grid_pane_cp016_ParamLimits

0x3dfa,	// (0x00044831) hgihlgiht_grid_pane_cp016

0xa92d,	// (0x0004b364) cell_imed_effect_pane_g1

0xa935,	// (0x0004b36c) grid_highlight_pane_cp017

0x3e0b,	// (0x00044842) list_imed_single_pane_ParamLimits

0x3e0b,	// (0x00044842) list_imed_single_pane

0xdcd2,	// (0x0004e709) list_highlight_pane_cp07

0x3e1e,	// (0x00044855) list_imed_aspect_pane_comp1_t1

0x353a,	// (0x00043f71) bg_tb_trans_pane_cp05

0x3e3e,	// (0x00044875) popup_imed_adjust2_window_g1

0x3e65,	// (0x0004489c) popup_imed_adjust2_window_t1

0x3e7d,	// (0x000448b4) slider_imed_adjust_pane

0x3e91,	// (0x000448c8) slider_imed_adjust_pane_g1

0x3ea1,	// (0x000448d8) slider_imed_adjust_pane_g2

0x3eb1,	// (0x000448e8) slider_imed_adjust_pane_g3

0x3ec2,	// (0x000448f9) slider_imed_adjust_pane_g4

0x0003,

0xf85b,	// (0x00050292) slider_imed_adjust_pane_g

0xa93e,	// (0x0004b375) aid_size_cell_clipart2

0xa94a,	// (0x0004b381) grid_imed_clipart_pane

0x3ed3,	// (0x0004490a) scroll_pane_cp031

0xa954,	// (0x0004b38b) cell_imed_clipart_pane_ParamLimits

0xa954,	// (0x0004b38b) cell_imed_clipart_pane

0xa96b,	// (0x0004b3a2) cell_imed_clipart_pane_g1

0xdcd2,	// (0x0004e709) grid_highlight_pane_cp014

0xa6f2,	// (0x0004b129) main_clock2_pane_g1_ParamLimits

0xa6f2,	// (0x0004b129) main_clock2_pane_g1

0xa7cd,	// (0x0004b204) aid_call2_pane_cp10

0xa7d9,	// (0x0004b210) aid_call_pane_cp10

0x1f98,	// (0x000429cf) popup_clock_analogue_window_cp10_g1

0x1f98,	// (0x000429cf) popup_clock_analogue_window_cp10_g2

0xa7e5,	// (0x0004b21c) popup_clock_analogue_window_cp10_g3

0xa7e5,	// (0x0004b21c) popup_clock_analogue_window_cp10_g4

0x1f98,	// (0x000429cf) popup_clock_analogue_window_cp10_g5

0x0004,

0xf849,	// (0x00050280) popup_clock_analogue_window_cp10_g

0xa7f1,	// (0x0004b228) popup_clock_analogue_window_cp10_t1

0xa815,	// (0x0004b24c) clock_digital_number_pane_cp10_ParamLimits

0xa815,	// (0x0004b24c) clock_digital_number_pane_cp10

0xa82d,	// (0x0004b264) clock_digital_number_pane_cp11_ParamLimits

0xa82d,	// (0x0004b264) clock_digital_number_pane_cp11

0xa845,	// (0x0004b27c) clock_digital_number_pane_cp12_ParamLimits

0xa845,	// (0x0004b27c) clock_digital_number_pane_cp12

0xa85d,	// (0x0004b294) clock_digital_number_pane_cp13_ParamLimits

0xa85d,	// (0x0004b294) clock_digital_number_pane_cp13

0xa875,	// (0x0004b2ac) clock_digital_separator_pane_cp10_ParamLimits

0xa875,	// (0x0004b2ac) clock_digital_separator_pane_cp10

0xa88d,	// (0x0004b2c4) popup_clock_digital_window_cp02_t1_ParamLimits

0xa88d,	// (0x0004b2c4) popup_clock_digital_window_cp02_t1

0xe381,	// (0x0004edb8) clock_digital_number_pane_cp10_g1

0xe381,	// (0x0004edb8) clock_digital_number_pane_cp10_g2

0x0001,

0xf864,	// (0x0005029b) clock_digital_number_pane_cp10_g

0xe381,	// (0x0004edb8) clock_digital_separator_pane_cp10_g1

0xe381,	// (0x0004edb8) clock_digital_separator_pane_g2_cp10

0x209b,	// (0x00042ad2) navi_pane_vded_g4

0x20a4,	// (0x00042adb) navi_pane_vded_g5

0x20ad,	// (0x00042ae4) navi_pane_vded_t1

0xdcd2,	// (0x0004e709) main_vded_pane

0xa974,	// (0x0004b3ab) main_vded_pane_g1

0xa97c,	// (0x0004b3b3) main_vded_pane_g2

0xa984,	// (0x0004b3bb) main_vded_pane_g3

0x0002,

0xf869,	// (0x000502a0) main_vded_pane_g

0xa98c,	// (0x0004b3c3) main_vded_pane_t1

0xa99a,	// (0x0004b3d1) main_vded_pane_t2

0x0001,

0xf870,	// (0x000502a7) main_vded_pane_t

0xa9a8,	// (0x0004b3df) vded_slider_pane

0xa9b0,	// (0x0004b3e7) vded_video_pane

0x3edb,	// (0x00044912) vded_video_pane_g1

0xa9b8,	// (0x0004b3ef) vded_video_pane_g2

0x3975,	// (0x000443ac) vded_video_pane_g3

0x0002,

0xf875,	// (0x000502ac) vded_video_pane_g

0x3ee5,	// (0x0004491c) vded_slider_pane_g1

0x36d0,	// (0x00044107) vded_slider_pane_g2

0x3eee,	// (0x00044925) vded_slider_pane_g3

0x3ef7,	// (0x0004492e) vded_slider_pane_g4

0x3f00,	// (0x00044937) vded_slider_pane_g5

0x0004,

0xf87c,	// (0x000502b3) vded_slider_pane_g

0xa494,	// (0x0004aecb) mup3_rocker_pane_ParamLimits

0xa494,	// (0x0004aecb) mup3_rocker_pane

0xa9c1,	// (0x0004b3f8) mup3_control_keys_pane_g1

0xa9c9,	// (0x0004b400) mup3_control_keys_pane_g2

0xa9d1,	// (0x0004b408) mup3_control_keys_pane_g3

0xa9d9,	// (0x0004b410) mup3_control_keys_pane_g4

0x0003,

0xf887,	// (0x000502be) mup3_control_keys_pane_g

0x6e0c,	// (0x00047843) popup_toolbar2_fixed_window_cp01_ParamLimits

0x6e0c,	// (0x00047843) popup_toolbar2_fixed_window_cp01

0xa4ac,	// (0x0004aee3) popup_toolbar2_fixed_window_cp02_ParamLimits

0xa4ac,	// (0x0004aee3) popup_toolbar2_fixed_window_cp02

0x2882,	// (0x000432b9) popup_call2_audio_second_window_t4_ParamLimits

0x2882,	// (0x000432b9) popup_call2_audio_second_window_t4

0x2db0,	// (0x000437e7) popup_call2_audio_first_window_t6_ParamLimits

0x2db0,	// (0x000437e7) popup_call2_audio_first_window_t6

0x3046,	// (0x00043a7d) popup_call2_audio_out_window_t6_ParamLimits

0x3046,	// (0x00043a7d) popup_call2_audio_out_window_t6

0xdcd2,	// (0x0004e709) main_vitu_pane

0xa9e9,	// (0x0004b420) aid_size_cell_itu_ParamLimits

0xa9e9,	// (0x0004b420) aid_size_cell_itu

0x42f0,	// (0x00044d27) bg_popup_window_pane_cp08_ParamLimits

0x42f0,	// (0x00044d27) bg_popup_window_pane_cp08

0xa9f7,	// (0x0004b42e) field_vitu_entry_pane_ParamLimits

0xa9f7,	// (0x0004b42e) field_vitu_entry_pane

0xaa04,	// (0x0004b43b) grid_vitu_function_pane_ParamLimits

0xaa04,	// (0x0004b43b) grid_vitu_function_pane

0xaa10,	// (0x0004b447) grid_vitu_itu_pane_ParamLimits

0xaa10,	// (0x0004b447) grid_vitu_itu_pane

0xaa1c,	// (0x0004b453) cell_vitu_itu_pane_ParamLimits

0xaa1c,	// (0x0004b453) cell_vitu_itu_pane

0xaa31,	// (0x0004b468) cell_vitu_function_pane_ParamLimits

0xaa31,	// (0x0004b468) cell_vitu_function_pane

0xe7b3,	// (0x0004f1ea) bg_popup_sub_pane_cp08_ParamLimits

0xe7b3,	// (0x0004f1ea) bg_popup_sub_pane_cp08

0xaa43,	// (0x0004b47a) field_vitu_entry_pane_t1_ParamLimits

0xaa43,	// (0x0004b47a) field_vitu_entry_pane_t1

0x3f21,	// (0x00044958) field_vitu_entry_pane_t2_ParamLimits

0x3f21,	// (0x00044958) field_vitu_entry_pane_t2

0x0001,

0xf895,	// (0x000502cc) field_vitu_entry_pane_t_ParamLimits

0xf895,	// (0x000502cc) field_vitu_entry_pane_t

0x3f3e,	// (0x00044975) bg_button_pane_cp05_ParamLimits

0x3f3e,	// (0x00044975) bg_button_pane_cp05

0xaa5c,	// (0x0004b493) cell_vitu_itu_pane_g1

0xaa74,	// (0x0004b4ab) cell_vitu_itu_pane_t1_ParamLimits

0xaa74,	// (0x0004b4ab) cell_vitu_itu_pane_t1

0xaa86,	// (0x0004b4bd) cell_vitu_itu_pane_t2_ParamLimits

0xaa86,	// (0x0004b4bd) cell_vitu_itu_pane_t2

0x0002,

0xf89a,	// (0x000502d1) cell_vitu_itu_pane_t_ParamLimits

0xf89a,	// (0x000502d1) cell_vitu_itu_pane_t

0x3f4c,	// (0x00044983) bg_button_pane_cp07

0xaabb,	// (0x0004b4f2) cell_vitu_function_pane_g1

0x7069,	// (0x00047aa0) main_calc_pane_g1

0x6c53,	// (0x0004768a) aid_visual_content_pane

0xdcd2,	// (0x0004e709) main_vradio_pane

0xaac4,	// (0x0004b4fb) main_vradio_pane_g1_ParamLimits

0xaac4,	// (0x0004b4fb) main_vradio_pane_g1

0x3f56,	// (0x0004498d) main_vradio_pane_g2_ParamLimits

0x3f56,	// (0x0004498d) main_vradio_pane_g2

0x0001,

0xf8a1,	// (0x000502d8) main_vradio_pane_g_ParamLimits

0xf8a1,	// (0x000502d8) main_vradio_pane_g

0xaad2,	// (0x0004b509) main_vradio_pane_t1_ParamLimits

0xaad2,	// (0x0004b509) main_vradio_pane_t1

0xaae4,	// (0x0004b51b) main_vradio_pane_t2_ParamLimits

0xaae4,	// (0x0004b51b) main_vradio_pane_t2

0x3f63,	// (0x0004499a) main_vradio_pane_t3_ParamLimits

0x3f63,	// (0x0004499a) main_vradio_pane_t3

0x0002,

0xf8a6,	// (0x000502dd) main_vradio_pane_t_ParamLimits

0xf8a6,	// (0x000502dd) main_vradio_pane_t

0xaaf6,	// (0x0004b52d) vradio_rocker_control_pane_ParamLimits

0xaaf6,	// (0x0004b52d) vradio_rocker_control_pane

0xab02,	// (0x0004b539) vradio_station_info_pane_ParamLimits

0xab02,	// (0x0004b539) vradio_station_info_pane

0x3f75,	// (0x000449ac) vradio_frequency_info_pane_ParamLimits

0x3f75,	// (0x000449ac) vradio_frequency_info_pane

0x3975,	// (0x000443ac) vradio_station_info_pane_g1

0x3f84,	// (0x000449bb) vradio_station_info_pane_t1_ParamLimits

0x3f84,	// (0x000449bb) vradio_station_info_pane_t1

0x3fa6,	// (0x000449dd) vradio_station_info_pane_t2_ParamLimits

0x3fa6,	// (0x000449dd) vradio_station_info_pane_t2

0x0001,

0xf8ad,	// (0x000502e4) vradio_station_info_pane_t_ParamLimits

0xf8ad,	// (0x000502e4) vradio_station_info_pane_t

0x3fb8,	// (0x000449ef) vradio_tuning_pane

0x3fc0,	// (0x000449f7) vradio_rocker_control_pane_g1

0x3fc8,	// (0x000449ff) vradio_rocker_control_pane_g2

0x3fd0,	// (0x00044a07) vradio_rocker_control_pane_g3

0x3fd8,	// (0x00044a0f) vradio_rocker_control_pane_g4

0x3fe0,	// (0x00044a17) vradio_rocker_control_pane_g5

0x0004,

0xf8b2,	// (0x000502e9) vradio_rocker_control_pane_g

0xab0f,	// (0x0004b546) vradio_frequency_info_pane_g1

0x3fe8,	// (0x00044a1f) vradio_frequency_info_pane_t1_ParamLimits

0x3fe8,	// (0x00044a1f) vradio_frequency_info_pane_t1

0xab17,	// (0x0004b54e) vradio_tuning_pane_g1

0xab20,	// (0x0004b557) vradio_tuning_pane_t1

0xdcf4,	// (0x0004e72b) area_side_right_pane_ParamLimits

0xdcf4,	// (0x0004e72b) area_side_right_pane

0x3501,	// (0x00043f38) status_small_pane_g1

0x3509,	// (0x00043f40) status_small_pane_g2

0x3512,	// (0x00043f49) status_small_pane_g3

0x351b,	// (0x00043f52) status_small_pane_g4

0x0003,

0xf672,	// (0x000500a9) status_small_pane_g

0x3524,	// (0x00043f5b) status_small_pane_t1

0xdcd2,	// (0x0004e709) main_video3_pane

0x3ffc,	// (0x00044a33) cams_zoom_vslider_pane

0x4004,	// (0x00044a3b) image3_wide_pane_ParamLimits

0x4004,	// (0x00044a3b) image3_wide_pane

0x401e,	// (0x00044a55) image3_wide_small_pane

0x4028,	// (0x00044a5f) main_video3_pane_g1_ParamLimits

0x4028,	// (0x00044a5f) main_video3_pane_g1

0x4044,	// (0x00044a7b) main_video3_pane_g2_ParamLimits

0x4044,	// (0x00044a7b) main_video3_pane_g2

0x0001,

0xf8bd,	// (0x000502f4) main_video3_pane_g_ParamLimits

0xf8bd,	// (0x000502f4) main_video3_pane_g

0x4060,	// (0x00044a97) main_video3_pane_t1_ParamLimits

0x4060,	// (0x00044a97) main_video3_pane_t1

0x408b,	// (0x00044ac2) main_video3_pane_t2_ParamLimits

0x408b,	// (0x00044ac2) main_video3_pane_t2

0x40b6,	// (0x00044aed) main_video3_pane_t3_ParamLimits

0x40b6,	// (0x00044aed) main_video3_pane_t3

0x0002,

0xf8c2,	// (0x000502f9) main_video3_pane_t_ParamLimits

0xf8c2,	// (0x000502f9) main_video3_pane_t

0x40e1,	// (0x00044b18) cams_zoom_vslider_pane_g1

0x40ea,	// (0x00044b21) cams_zoom_vslider_pane_g2

0x0001,

0xf8c9,	// (0x00050300) cams_zoom_vslider_pane_g

0x40f2,	// (0x00044b29) small_slider_vertical_pane

0x3975,	// (0x000443ac) small_slider_vertical_pane_g1

0x3975,	// (0x000443ac) small_slider_vertical_pane_g2

0x40fa,	// (0x00044b31) small_slider_vertical_pane_g3

0x0002,

0xf8ce,	// (0x00050305) small_slider_vertical_pane_g

0xdcd2,	// (0x0004e709) main_hwr_training_pane

0x4103,	// (0x00044b3a) hwr_training_instruct_pane_ParamLimits

0x4103,	// (0x00044b3a) hwr_training_instruct_pane

0xab2f,	// (0x0004b566) hwr_training_navi_pane_ParamLimits

0xab2f,	// (0x0004b566) hwr_training_navi_pane

0xab43,	// (0x0004b57a) hwr_training_write_pane_ParamLimits

0xab43,	// (0x0004b57a) hwr_training_write_pane

0xdcd2,	// (0x0004e709) bg_frame_shadow_pane

0x4132,	// (0x00044b69) hwr_training_write_pane_g1

0x413a,	// (0x00044b71) hwr_training_write_pane_g2

0x4142,	// (0x00044b79) hwr_training_write_pane_g3

0x414a,	// (0x00044b81) hwr_training_write_pane_g4

0x4152,	// (0x00044b89) hwr_training_write_pane_g5

0x415a,	// (0x00044b91) hwr_training_write_pane_g6

0x4162,	// (0x00044b99) hwr_training_write_pane_g7

0x0006,

0xf8d5,	// (0x0005030c) hwr_training_write_pane_g

0xab71,	// (0x0004b5a8) hwr_training_navi_pane_g1_ParamLimits

0xab71,	// (0x0004b5a8) hwr_training_navi_pane_g1

0xab83,	// (0x0004b5ba) hwr_training_navi_pane_g2_ParamLimits

0xab83,	// (0x0004b5ba) hwr_training_navi_pane_g2

0xab95,	// (0x0004b5cc) hwr_training_navi_pane_g3_ParamLimits

0xab95,	// (0x0004b5cc) hwr_training_navi_pane_g3

0xaba5,	// (0x0004b5dc) hwr_training_navi_pane_g4_ParamLimits

0xaba5,	// (0x0004b5dc) hwr_training_navi_pane_g4

0x0004,

0xf8e4,	// (0x0005031b) hwr_training_navi_pane_g_ParamLimits

0xf8e4,	// (0x0005031b) hwr_training_navi_pane_g

0xabbf,	// (0x0004b5f6) hwr_training_navi_pane_t1

0xabcd,	// (0x0004b604) list_single_hwr_training_instruct_pane_ParamLimits

0xabcd,	// (0x0004b604) list_single_hwr_training_instruct_pane

0x416a,	// (0x00044ba1) list_single_hwr_training_instruct_pane_t1

0x38b5,	// (0x000442ec) bg_frame_shadow_pane_g1

0x4179,	// (0x00044bb0) bg_frame_shadow_pane_g2

0x4181,	// (0x00044bb8) bg_frame_shadow_pane_g3

0x4189,	// (0x00044bc0) bg_frame_shadow_pane_g4

0x4191,	// (0x00044bc8) bg_frame_shadow_pane_g5

0x4199,	// (0x00044bd0) bg_frame_shadow_pane_g6

0x41a1,	// (0x00044bd8) bg_frame_shadow_pane_g7

0xe523,	// (0x0004ef5a) bg_frame_shadow_pane_g8

0x0007,

0xf8ef,	// (0x00050326) bg_frame_shadow_pane_g

0xdcd2,	// (0x0004e709) main_video_tele_dialer_pane

0xabe5,	// (0x0004b61c) aid_size_cell_video_keypad_ParamLimits

0xabe5,	// (0x0004b61c) aid_size_cell_video_keypad

0xabf5,	// (0x0004b62c) grid_video_dialer_keypad_pane_ParamLimits

0xabf5,	// (0x0004b62c) grid_video_dialer_keypad_pane

0xac25,	// (0x0004b65c) video_down_pane_cp_ParamLimits

0xac25,	// (0x0004b65c) video_down_pane_cp

0xac4d,	// (0x0004b684) cell_video_dialer_keypad_pane_ParamLimits

0xac4d,	// (0x0004b684) cell_video_dialer_keypad_pane

0x41a9,	// (0x00044be0) bg_button_pane_cp08_ParamLimits

0x41a9,	// (0x00044be0) bg_button_pane_cp08

0xac62,	// (0x0004b699) cell_video_dialer_keypad_pane_g1_ParamLimits

0xac62,	// (0x0004b699) cell_video_dialer_keypad_pane_g1

0xa488,	// (0x0004aebf) mup3_rocker2_pane_ParamLimits

0xa488,	// (0x0004aebf) mup3_rocker2_pane

0x3975,	// (0x000443ac) mup3_rocker2_pane_g1

0x954f,	// (0x00049f86) main_dialer2_pane

0xdcd2,	// (0x0004e709) main_mp4_pane

0xaca1,	// (0x0004b6d8) main_mp4_pane_g1_ParamLimits

0xaca1,	// (0x0004b6d8) main_mp4_pane_g1

0xacaf,	// (0x0004b6e6) main_mp4_pane_g2_ParamLimits

0xacaf,	// (0x0004b6e6) main_mp4_pane_g2

0xacbd,	// (0x0004b6f4) main_mp4_pane_g3_ParamLimits

0xacbd,	// (0x0004b6f4) main_mp4_pane_g3

0xacf2,	// (0x0004b729) main_mp4_pane_g4_ParamLimits

0xacf2,	// (0x0004b729) main_mp4_pane_g4

0xad20,	// (0x0004b757) main_mp4_pane_g5_ParamLimits

0xad20,	// (0x0004b757) main_mp4_pane_g5

0x0005,

0xf90f,	// (0x00050346) main_mp4_pane_g_ParamLimits

0xf90f,	// (0x00050346) main_mp4_pane_g

0xad7c,	// (0x0004b7b3) main_mp4_pane_t1_ParamLimits

0xad7c,	// (0x0004b7b3) main_mp4_pane_t1

0xadd4,	// (0x0004b80b) main_mp4_pane_t2_ParamLimits

0xadd4,	// (0x0004b80b) main_mp4_pane_t2

0x41b5,	// (0x00044bec) main_mp4_pane_t3_ParamLimits

0x41b5,	// (0x00044bec) main_mp4_pane_t3

0xae26,	// (0x0004b85d) main_mp4_pane_t4_ParamLimits

0xae26,	// (0x0004b85d) main_mp4_pane_t4

0x0003,

0xf91c,	// (0x00050353) main_mp4_pane_t_ParamLimits

0xf91c,	// (0x00050353) main_mp4_pane_t

0xae66,	// (0x0004b89d) mp4_progress_pane_ParamLimits

0xae66,	// (0x0004b89d) mp4_progress_pane

0xaeaa,	// (0x0004b8e1) mp4_rocker_pane_ParamLimits

0xaeaa,	// (0x0004b8e1) mp4_rocker_pane

0x41e3,	// (0x00044c1a) mp4_progress_pane_t1

0x41fa,	// (0x00044c31) mp4_progress_pane_t2

0x0001,

0xf925,	// (0x0005035c) mp4_progress_pane_t

0x4211,	// (0x00044c48) mup_progress_pane_cp04

0x4a51,	// (0x00045488) mp4_rocker_pane_g1

0xaec8,	// (0x0004b8ff) aid_cell_size_keypad2_ParamLimits

0xaec8,	// (0x0004b8ff) aid_cell_size_keypad2

0xaed8,	// (0x0004b90f) dialer2_ne_pane_ParamLimits

0xaed8,	// (0x0004b90f) dialer2_ne_pane

0xaee4,	// (0x0004b91b) grid_dialer2_keypad_pane_ParamLimits

0xaee4,	// (0x0004b91b) grid_dialer2_keypad_pane

0x4aac,	// (0x000454e3) bg_popup_call_pane_cp07_ParamLimits

0x4aac,	// (0x000454e3) bg_popup_call_pane_cp07

0xaef0,	// (0x0004b927) dialer2_ne_pane_t1_ParamLimits

0xaef0,	// (0x0004b927) dialer2_ne_pane_t1

0xaf15,	// (0x0004b94c) cell_dialer2_keypad_pane_ParamLimits

0xaf15,	// (0x0004b94c) cell_dialer2_keypad_pane

0x422f,	// (0x00044c66) bg_button_pane_pane_cp04_ParamLimits

0x422f,	// (0x00044c66) bg_button_pane_pane_cp04

0xaf2a,	// (0x0004b961) cell_dialer2_keypad_pane_g1_ParamLimits

0xaf2a,	// (0x0004b961) cell_dialer2_keypad_pane_g1

0x7aa8,	// (0x000484df) aid_placing_vt_set_content_ParamLimits

0x7aa8,	// (0x000484df) aid_placing_vt_set_content

0x7ac2,	// (0x000484f9) aid_placing_vt_set_title_ParamLimits

0x7ac2,	// (0x000484f9) aid_placing_vt_set_title

0xdcd2,	// (0x0004e709) main_image3_pane

0xaf9e,	// (0x0004b9d5) area_side_right_pane_cp01_ParamLimits

0xaf9e,	// (0x0004b9d5) area_side_right_pane_cp01

0xafcb,	// (0x0004ba02) main_image3_pane_g1_ParamLimits

0xafcb,	// (0x0004ba02) main_image3_pane_g1

0xafd9,	// (0x0004ba10) main_image3_pane_g2_ParamLimits

0xafd9,	// (0x0004ba10) main_image3_pane_g2

0xaff0,	// (0x0004ba27) main_image3_pane_g3_ParamLimits

0xaff0,	// (0x0004ba27) main_image3_pane_g3

0xb007,	// (0x0004ba3e) main_image3_pane_g4_ParamLimits

0xb007,	// (0x0004ba3e) main_image3_pane_g4

0x0003,

0xf934,	// (0x0005036b) main_image3_pane_g_ParamLimits

0xf934,	// (0x0005036b) main_image3_pane_g

0xb01e,	// (0x0004ba55) main_image3_pane_t1_ParamLimits

0xb01e,	// (0x0004ba55) main_image3_pane_t1

0xb043,	// (0x0004ba7a) main_image3_pane_t2_ParamLimits

0xb043,	// (0x0004ba7a) main_image3_pane_t2

0xb062,	// (0x0004ba99) main_image3_pane_t3_ParamLimits

0xb062,	// (0x0004ba99) main_image3_pane_t3

0x0003,

0xf93d,	// (0x00050374) main_image3_pane_t_ParamLimits

0xf93d,	// (0x00050374) main_image3_pane_t

0x42f0,	// (0x00044d27) grid_sctrl_middle_pane_cp01_ParamLimits

0x42f0,	// (0x00044d27) grid_sctrl_middle_pane_cp01

0xb0bd,	// (0x0004baf4) cell_sctrl_middle_pane_cp01_ParamLimits

0xb0bd,	// (0x0004baf4) cell_sctrl_middle_pane_cp01

0xb0ce,	// (0x0004bb05) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xb0ce,	// (0x0004bb05) cell_sctrl_middle_pane_cp01_g1

0xdcd2,	// (0x0004e709) main_call4_pane

0xb0db,	// (0x0004bb12) aid_size_button_call4_ParamLimits

0xb0db,	// (0x0004bb12) aid_size_button_call4

0xb105,	// (0x0004bb3c) call4_windows_pane_ParamLimits

0xb105,	// (0x0004bb3c) call4_windows_pane

0xb119,	// (0x0004bb50) grid_call4_button_pane_ParamLimits

0xb119,	// (0x0004bb50) grid_call4_button_pane

0x4253,	// (0x00044c8a) call4_windows_conf_pane

0xb133,	// (0x0004bb6a) popup_call4_audio_first_window_ParamLimits

0xb133,	// (0x0004bb6a) popup_call4_audio_first_window

0xb153,	// (0x0004bb8a) popup_call4_audio_second_window_ParamLimits

0xb153,	// (0x0004bb8a) popup_call4_audio_second_window

0x4286,	// (0x00044cbd) popup_call4_audio_wait_window_ParamLimits

0x4286,	// (0x00044cbd) popup_call4_audio_wait_window

0xb165,	// (0x0004bb9c) cell_call4_button_pane_ParamLimits

0xb165,	// (0x0004bb9c) cell_call4_button_pane

0xe4cd,	// (0x0004ef04) bg_button_pane_cp09_ParamLimits

0xe4cd,	// (0x0004ef04) bg_button_pane_cp09

0xb188,	// (0x0004bbbf) cell_call4_button_pane_g1_ParamLimits

0xb188,	// (0x0004bbbf) cell_call4_button_pane_g1

0xb195,	// (0x0004bbcc) cell_call4_button_pane_t1_ParamLimits

0xb195,	// (0x0004bbcc) cell_call4_button_pane_t1

0x42cc,	// (0x00044d03) popup_call4_audio_conf_window_ParamLimits

0x42cc,	// (0x00044d03) popup_call4_audio_conf_window

0xa4b9,	// (0x0004aef0) mup3_progress_pane_t1_ParamLimits

0xa4cf,	// (0x0004af06) mup3_progress_pane_t2_ParamLimits

0x3c93,	// (0x000446ca) mup3_progress_pane_t3_ParamLimits

0xf816,	// (0x0005024d) mup3_progress_pane_t_ParamLimits

0x3caa,	// (0x000446e1) mup_progress_pane_cp03_ParamLimits

0xa9e1,	// (0x0004b418) mup3_control_keys_pane_g4_copy1

0xae94,	// (0x0004b8cb) mp4_rocker2_pane_ParamLimits

0xae94,	// (0x0004b8cb) mp4_rocker2_pane

0x42e8,	// (0x00044d1f) mp4_rocker2_pane_g1

0x42e0,	// (0x00044d17) mp4_rocker2_pane_g2

0xb1a7,	// (0x0004bbde) mp4_rocker2_pane_g3

0xb1af,	// (0x0004bbe6) mp4_rocker2_pane_g4

0xb1b7,	// (0x0004bbee) mp4_rocker2_pane_g5

0x0004,

0xf946,	// (0x0005037d) mp4_rocker2_pane_g

0xdcd2,	// (0x0004e709) main_camera4_pane

0xdcd2,	// (0x0004e709) main_video4_pane

0xac01,	// (0x0004b638) main_video_tele_dialer_pane_t1_ParamLimits

0xac01,	// (0x0004b638) main_video_tele_dialer_pane_t1

0xac13,	// (0x0004b64a) main_video_tele_dialer_pane_t2_ParamLimits

0xac13,	// (0x0004b64a) main_video_tele_dialer_pane_t2

0x0001,

0xf900,	// (0x00050337) main_video_tele_dialer_pane_t_ParamLimits

0xf900,	// (0x00050337) main_video_tele_dialer_pane_t

0xb1d5,	// (0x0004bc0c) cam4_autofocus_pane_ParamLimits

0xb1d5,	// (0x0004bc0c) cam4_autofocus_pane

0xb1e1,	// (0x0004bc18) cam4_image_uncrop_pane_ParamLimits

0xb1e1,	// (0x0004bc18) cam4_image_uncrop_pane

0xb1f6,	// (0x0004bc2d) cam4_indicators_pane_ParamLimits

0xb1f6,	// (0x0004bc2d) cam4_indicators_pane

0xb210,	// (0x0004bc47) main_camera4_pane_g1_ParamLimits

0xb210,	// (0x0004bc47) main_camera4_pane_g1

0xb21c,	// (0x0004bc53) main_camera4_pane_g2_ParamLimits

0xb21c,	// (0x0004bc53) main_camera4_pane_g2

0xb228,	// (0x0004bc5f) main_camera4_pane_g3_ParamLimits

0xb228,	// (0x0004bc5f) main_camera4_pane_g3

0xb234,	// (0x0004bc6b) main_camera4_pane_g4_ParamLimits

0xb234,	// (0x0004bc6b) main_camera4_pane_g4

0xb240,	// (0x0004bc77) main_camera4_pane_g5_ParamLimits

0xb240,	// (0x0004bc77) main_camera4_pane_g5

0x0005,

0xf951,	// (0x00050388) main_camera4_pane_g_ParamLimits

0xf951,	// (0x00050388) main_camera4_pane_g

0xb25a,	// (0x0004bc91) main_camera4_pane_t1_ParamLimits

0xb25a,	// (0x0004bc91) main_camera4_pane_t1

0xb27e,	// (0x0004bcb5) bg_tb_trans_pane_cp06

0xb294,	// (0x0004bccb) cam4_indicators_pane_g1

0xb2a4,	// (0x0004bcdb) cam4_indicators_pane_g2

0x0002,

0xf963,	// (0x0005039a) cam4_indicators_pane_g

0xb2c4,	// (0x0004bcfb) cam4_indicators_pane_t1

0xb2ec,	// (0x0004bd23) main_video4_pane_g1_ParamLimits

0xb2ec,	// (0x0004bd23) main_video4_pane_g1

0xb2f8,	// (0x0004bd2f) main_video4_pane_g2_ParamLimits

0xb2f8,	// (0x0004bd2f) main_video4_pane_g2

0xb2f8,	// (0x0004bd2f) main_video4_pane_g3_ParamLimits

0xb2f8,	// (0x0004bd2f) main_video4_pane_g3

0xb304,	// (0x0004bd3b) main_video4_pane_g4_ParamLimits

0xb304,	// (0x0004bd3b) main_video4_pane_g4

0x0004,

0xf96a,	// (0x000503a1) main_video4_pane_g_ParamLimits

0xf96a,	// (0x000503a1) main_video4_pane_g

0xb324,	// (0x0004bd5b) vid4_indicators_pane_ParamLimits

0xb324,	// (0x0004bd5b) vid4_indicators_pane

0xb342,	// (0x0004bd79) video4_image_uncrop_cif_pane_ParamLimits

0xb342,	// (0x0004bd79) video4_image_uncrop_cif_pane

0xb34f,	// (0x0004bd86) video4_image_uncrop_nhd_pane_ParamLimits

0xb34f,	// (0x0004bd86) video4_image_uncrop_nhd_pane

0xb1e1,	// (0x0004bc18) video4_image_uncrop_vga_pane_ParamLimits

0xb1e1,	// (0x0004bc18) video4_image_uncrop_vga_pane

0xb35c,	// (0x0004bd93) bg_tb_trans_pane_cp07

0xb294,	// (0x0004bccb) vid4_indicators_pane_g1

0xb36a,	// (0x0004bda1) vid4_indicators_pane_g2

0xb37a,	// (0x0004bdb1) vid4_indicators_pane_g3

0x0004,

0xf975,	// (0x000503ac) vid4_indicators_pane_g

0xb3a7,	// (0x0004bdde) vid4_indicators_pane_t1

0xb3c1,	// (0x0004bdf8) cam4_autofocus_pane_g1

0xb3c9,	// (0x0004be00) cam4_autofocus_pane_g2

0xb3d1,	// (0x0004be08) cam4_autofocus_pane_g3

0x0002,

0xf980,	// (0x000503b7) cam4_autofocus_pane_g

0xb3d9,	// (0x0004be10) cam4_autofocus_pane_g3_copy1

0xac31,	// (0x0004b668) video_down_pane_cp_t1

0xac3f,	// (0x0004b676) video_down_pane_cp_t2

0x0001,

0xf905,	// (0x0005033c) video_down_pane_cp_t

0x42f0,	// (0x00044d27) popup_vitu2_window_ParamLimits

0x42f0,	// (0x00044d27) popup_vitu2_window

0xb3e1,	// (0x0004be18) aid_size_cell2_itu2_ParamLimits

0xb3e1,	// (0x0004be18) aid_size_cell2_itu2

0xb403,	// (0x0004be3a) aid_size_cell_itu2_ParamLimits

0xb403,	// (0x0004be3a) aid_size_cell_itu2

0xb441,	// (0x0004be78) bg_popup_window_pane_cp09_ParamLimits

0xb441,	// (0x0004be78) bg_popup_window_pane_cp09

0xb44f,	// (0x0004be86) field_vitu2_entry_pane_ParamLimits

0xb44f,	// (0x0004be86) field_vitu2_entry_pane

0xb465,	// (0x0004be9c) grid_vitu2_function_pane_ParamLimits

0xb465,	// (0x0004be9c) grid_vitu2_function_pane

0xb497,	// (0x0004bece) grid_vitu2_itu_pane_ParamLimits

0xb497,	// (0x0004bece) grid_vitu2_itu_pane

0xb4ed,	// (0x0004bf24) cell_vitu2_itu_pane_ParamLimits

0xb4ed,	// (0x0004bf24) cell_vitu2_itu_pane

0xb502,	// (0x0004bf39) cell_vitu2_function_pane_ParamLimits

0xb502,	// (0x0004bf39) cell_vitu2_function_pane

0x42fe,	// (0x00044d35) bg_popup_call_pane_cp08_ParamLimits

0x42fe,	// (0x00044d35) bg_popup_call_pane_cp08

0x4317,	// (0x00044d4e) field_vitu2_entry_pane_g1

0x4323,	// (0x00044d5a) field_vitu2_entry_pane_g2

0x0002,

0xf987,	// (0x000503be) field_vitu2_entry_pane_g

0x433d,	// (0x00044d74) field_vitu2_entry_pane_t1_ParamLimits

0x433d,	// (0x00044d74) field_vitu2_entry_pane_t1

0x4359,	// (0x00044d90) field_vitu2_entry_pane_t2_ParamLimits

0x4359,	// (0x00044d90) field_vitu2_entry_pane_t2

0x0001,

0xf98e,	// (0x000503c5) field_vitu2_entry_pane_t_ParamLimits

0xf98e,	// (0x000503c5) field_vitu2_entry_pane_t

0xb541,	// (0x0004bf78) bg_button_pane_cp010_ParamLimits

0xb541,	// (0x0004bf78) bg_button_pane_cp010

0xb54f,	// (0x0004bf86) cell_vitu2_itu_pane_g1

0xb56d,	// (0x0004bfa4) cell_vitu2_itu_pane_t1_ParamLimits

0xb56d,	// (0x0004bfa4) cell_vitu2_itu_pane_t1

0x6b64,	// (0x0004759b) cell_vitu2_itu_pane_t2_ParamLimits

0x6b64,	// (0x0004759b) cell_vitu2_itu_pane_t2

0x0002,

0xf998,	// (0x000503cf) cell_vitu2_itu_pane_t_ParamLimits

0xf998,	// (0x000503cf) cell_vitu2_itu_pane_t

0xb35c,	// (0x0004bd93) bg_button_pane_cp011

0xb5bf,	// (0x0004bff6) cell_vitu2_function_pane_g1

0xdcd2,	// (0x0004e709) main_myfav_hc_pane

0xb0a2,	// (0x0004bad9) popup_image3_note_pane_ParamLimits

0xb0a2,	// (0x0004bad9) popup_image3_note_pane

0xb0ae,	// (0x0004bae5) popup_image3_tool_bar_pane_ParamLimits

0xb0ae,	// (0x0004bae5) popup_image3_tool_bar_pane

0x6bd2,	// (0x00047609) cell_vitu2_itu_pane_t3_ParamLimits

0x6bd2,	// (0x00047609) cell_vitu2_itu_pane_t3

0xdcd2,	// (0x0004e709) bg_popup_trans_pane

0x437e,	// (0x00044db5) grid_image3_tool_bar_pane

0x4388,	// (0x00044dbf) bg_popup_trans_pane_g1

0x18bb,	// (0x000422f2) bg_popup_trans_pane_g2

0x4390,	// (0x00044dc7) bg_popup_trans_pane_g3

0x4398,	// (0x00044dcf) bg_popup_trans_pane_g4

0x43a0,	// (0x00044dd7) bg_popup_trans_pane_g5

0x43a8,	// (0x00044ddf) bg_popup_trans_pane_g6

0x43b0,	// (0x00044de7) bg_popup_trans_pane_g7

0x43b8,	// (0x00044def) bg_popup_trans_pane_g8

0x189b,	// (0x000422d2) bg_popup_trans_pane_g9

0x0008,

0xf99f,	// (0x000503d6) bg_popup_trans_pane_g

0xe7c1,	// (0x0004f1f8) cell_image3_tool_bar_pane_ParamLimits

0xe7c1,	// (0x0004f1f8) cell_image3_tool_bar_pane

0x3975,	// (0x000443ac) cell_image3_tool_bar_pane_g1

0xdcd2,	// (0x0004e709) bg_popup_trans_pane_cp1

0x43c0,	// (0x00044df7) popup_image3_note_pane_t1

0x43ce,	// (0x00044e05) popup_image3_note_pane_t2

0x43dc,	// (0x00044e13) popup_image3_note_pane_t3

0x0002,

0xf9b2,	// (0x000503e9) popup_image3_note_pane_t

0x43ea,	// (0x00044e21) popup_image3_note_pane_t3_copy1

0xb5d3,	// (0x0004c00a) bg_myfav_hc_instruction_pane_ParamLimits

0xb5d3,	// (0x0004c00a) bg_myfav_hc_instruction_pane

0xb5e5,	// (0x0004c01c) cell_myfav_contact_pane_ParamLimits

0xb5e5,	// (0x0004c01c) cell_myfav_contact_pane

0xb5ff,	// (0x0004c036) cell_myfav_contact_pane_cp1_ParamLimits

0xb5ff,	// (0x0004c036) cell_myfav_contact_pane_cp1

0xb615,	// (0x0004c04c) cell_myfav_contact_pane_cp2_ParamLimits

0xb615,	// (0x0004c04c) cell_myfav_contact_pane_cp2

0xb62b,	// (0x0004c062) cell_myfav_contact_pane_cp3_ParamLimits

0xb62b,	// (0x0004c062) cell_myfav_contact_pane_cp3

0xb640,	// (0x0004c077) cell_myfav_contact_pane_cp4_ParamLimits

0xb640,	// (0x0004c077) cell_myfav_contact_pane_cp4

0xb654,	// (0x0004c08b) cell_myfav_contact_pane_cp5_ParamLimits

0xb654,	// (0x0004c08b) cell_myfav_contact_pane_cp5

0xb668,	// (0x0004c09f) cell_myfav_contact_pane_cp6_ParamLimits

0xb668,	// (0x0004c09f) cell_myfav_contact_pane_cp6

0xb67c,	// (0x0004c0b3) cell_myfav_contact_pane_cp7_ParamLimits

0xb67c,	// (0x0004c0b3) cell_myfav_contact_pane_cp7

0x43f8,	// (0x00044e2f) listscroll_gen_pane_cp05

0xb694,	// (0x0004c0cb) main_myfav_hc_pane_g1_ParamLimits

0xb694,	// (0x0004c0cb) main_myfav_hc_pane_g1

0xb6aa,	// (0x0004c0e1) main_myfav_hc_pane_g2_ParamLimits

0xb6aa,	// (0x0004c0e1) main_myfav_hc_pane_g2

0x0002,

0xf9b9,	// (0x000503f0) main_myfav_hc_pane_g_ParamLimits

0xf9b9,	// (0x000503f0) main_myfav_hc_pane_g

0xb6d4,	// (0x0004c10b) main_myfav_hc_pane_t1_ParamLimits

0xb6d4,	// (0x0004c10b) main_myfav_hc_pane_t1

0x4401,	// (0x00044e38) main_myfav_hc_pane_t2_ParamLimits

0x4401,	// (0x00044e38) main_myfav_hc_pane_t2

0x4413,	// (0x00044e4a) main_myfav_hc_pane_t3_ParamLimits

0x4413,	// (0x00044e4a) main_myfav_hc_pane_t3

0xb6e9,	// (0x0004c120) main_myfav_hc_pane_t4_ParamLimits

0xb6e9,	// (0x0004c120) main_myfav_hc_pane_t4

0x0004,

0xf9c0,	// (0x000503f7) main_myfav_hc_pane_t_ParamLimits

0xf9c0,	// (0x000503f7) main_myfav_hc_pane_t

0x3975,	// (0x000443ac) bg_myfav_hc_instruction_pane_g1

0x4425,	// (0x00044e5c) cell_myfav_contact_pane_g1_ParamLimits

0x4425,	// (0x00044e5c) cell_myfav_contact_pane_g1

0x4425,	// (0x00044e5c) cell_myfav_contact_pane_g2_ParamLimits

0x4425,	// (0x00044e5c) cell_myfav_contact_pane_g2

0x4431,	// (0x00044e68) cell_myfav_contact_pane_g3_ParamLimits

0x4431,	// (0x00044e68) cell_myfav_contact_pane_g3

0x3c7d,	// (0x000446b4) cell_myfav_contact_pane_g4_ParamLimits

0x3c7d,	// (0x000446b4) cell_myfav_contact_pane_g4

0x443e,	// (0x00044e75) cell_myfav_contact_pane_g5_ParamLimits

0x443e,	// (0x00044e75) cell_myfav_contact_pane_g5

0x0004,

0xf9cb,	// (0x00050402) cell_myfav_contact_pane_g_ParamLimits

0xf9cb,	// (0x00050402) cell_myfav_contact_pane_g

0xb6c0,	// (0x0004c0f7) main_myfav_hc_pane_g3_ParamLimits

0xb6c0,	// (0x0004c0f7) main_myfav_hc_pane_g3

0x6d8a,	// (0x000477c1) popup_adpt_find_window

0xb70d,	// (0x0004c144) afind_page_pane_ParamLimits

0xb70d,	// (0x0004c144) afind_page_pane

0xb71a,	// (0x0004c151) aid_size_cell_afind_ParamLimits

0xb71a,	// (0x0004c151) aid_size_cell_afind

0xb734,	// (0x0004c16b) bg_popup_sub_pane_cp09_ParamLimits

0xb734,	// (0x0004c16b) bg_popup_sub_pane_cp09

0xb741,	// (0x0004c178) find_pane_cp01_ParamLimits

0xb741,	// (0x0004c178) find_pane_cp01

0x444a,	// (0x00044e81) grid_afind_control_pane_ParamLimits

0x444a,	// (0x00044e81) grid_afind_control_pane

0xb74e,	// (0x0004c185) grid_afind_pane_ParamLimits

0xb74e,	// (0x0004c185) grid_afind_pane

0xb764,	// (0x0004c19b) cell_afind_pane_ParamLimits

0xb764,	// (0x0004c19b) cell_afind_pane

0x3975,	// (0x000443ac) afind_page_pane_g1

0xb79a,	// (0x0004c1d1) afind_page_pane_g2

0xb7a3,	// (0x0004c1da) afind_page_pane_g3

0x0002,

0xf9d6,	// (0x0005040d) afind_page_pane_g

0xb7ac,	// (0x0004c1e3) afind_page_pane_t1

0x445e,	// (0x00044e95) cell_afind_grid_control_pane_ParamLimits

0x445e,	// (0x00044e95) cell_afind_grid_control_pane

0x422f,	// (0x00044c66) bg_button_pane_cp69_ParamLimits

0x422f,	// (0x00044c66) bg_button_pane_cp69

0xb7cc,	// (0x0004c203) cell_afind_pane_g1_ParamLimits

0xb7cc,	// (0x0004c203) cell_afind_pane_g1

0xb7d9,	// (0x0004c210) cell_afind_pane_t1_ParamLimits

0xb7d9,	// (0x0004c210) cell_afind_pane_t1

0xe660,	// (0x0004f097) bg_button_pane_cp72

0x446d,	// (0x00044ea4) cell_afind_grid_control_pane_g1

0x9187,	// (0x00049bbe) aid_image_placing_area_ParamLimits

0x9187,	// (0x00049bbe) aid_image_placing_area

0x3f09,	// (0x00044940) field_vitu_entry_pane_g1_ParamLimits

0x3f09,	// (0x00044940) field_vitu_entry_pane_g1

0x3f15,	// (0x0004494c) field_vitu_entry_pane_g2_ParamLimits

0x3f15,	// (0x0004494c) field_vitu_entry_pane_g2

0x0001,

0xf890,	// (0x000502c7) field_vitu_entry_pane_g_ParamLimits

0xf890,	// (0x000502c7) field_vitu_entry_pane_g

0xaa5c,	// (0x0004b493) cell_vitu_itu_pane_g1_ParamLimits

0xaa9e,	// (0x0004b4d5) cell_vitu_itu_pane_t3_ParamLimits

0xaa9e,	// (0x0004b4d5) cell_vitu_itu_pane_t3

0x41e3,	// (0x00044c1a) mp4_progress_pane_t1_ParamLimits

0x41fa,	// (0x00044c31) mp4_progress_pane_t2_ParamLimits

0xf925,	// (0x0005035c) mp4_progress_pane_t_ParamLimits

0x4211,	// (0x00044c48) mup_progress_pane_cp04_ParamLimits

0xb6fb,	// (0x0004c132) main_myfav_hc_pane_t5_ParamLimits

0xb6fb,	// (0x0004c132) main_myfav_hc_pane_t5

0xdcec,	// (0x0004e723) aid_zoom_text_primary

0x6d8a,	// (0x000477c1) popup_adpt_find_window_ParamLimits

0xe7b3,	// (0x0004f1ea) main_cam_set_pane

0xb204,	// (0x0004bc3b) cam4_zoom_pane_ParamLimits

0xb204,	// (0x0004bc3b) cam4_zoom_pane

0xb7eb,	// (0x0004c222) main_cam_set_pane_g1_ParamLimits

0xb7eb,	// (0x0004c222) main_cam_set_pane_g1

0xb7f9,	// (0x0004c230) main_cam_set_pane_g2_ParamLimits

0xb7f9,	// (0x0004c230) main_cam_set_pane_g2

0x0001,

0xf9dd,	// (0x00050414) main_cam_set_pane_g_ParamLimits

0xf9dd,	// (0x00050414) main_cam_set_pane_g

0xb805,	// (0x0004c23c) main_cam_set_pane_t1_ParamLimits

0xb805,	// (0x0004c23c) main_cam_set_pane_t1

0xb817,	// (0x0004c24e) main_cset_listscroll_pane_ParamLimits

0xb817,	// (0x0004c24e) main_cset_listscroll_pane

0xb840,	// (0x0004c277) main_cset_slider_pane_ParamLimits

0xb840,	// (0x0004c277) main_cset_slider_pane

0x447e,	// (0x00044eb5) main_cset_list_pane_ParamLimits

0x447e,	// (0x00044eb5) main_cset_list_pane

0x448e,	// (0x00044ec5) scroll_pane_cp028

0xb85f,	// (0x0004c296) aid_area_touch_slider

0xb87b,	// (0x0004c2b2) cset_slider_pane

0xb8a5,	// (0x0004c2dc) main_cset_slider_pane_g1

0xb8ba,	// (0x0004c2f1) main_cset_slider_pane_g2

0x0011,

0xf9e2,	// (0x00050419) main_cset_slider_pane_g

0x44c7,	// (0x00044efe) main_cset_slider_pane_t1

0xb976,	// (0x0004c3ad) main_cset_slider_pane_t2

0xb990,	// (0x0004c3c7) main_cset_slider_pane_t3

0xb9aa,	// (0x0004c3e1) main_cset_slider_pane_t4

0xb9c4,	// (0x0004c3fb) main_cset_slider_pane_t5

0xb9de,	// (0x0004c415) main_cset_slider_pane_t6

0xb9f3,	// (0x0004c42a) main_cset_slider_pane_t7

0x000e,

0xfa07,	// (0x0005043e) main_cset_slider_pane_t

0xbaf7,	// (0x0004c52e) cset_list_set_pane_ParamLimits

0xbaf7,	// (0x0004c52e) cset_list_set_pane

0xbb07,	// (0x0004c53e) aid_position_infowindow_above

0xbb0f,	// (0x0004c546) aid_position_infowindow_below

0x4567,	// (0x00044f9e) cset_list_set_pane_g1_ParamLimits

0x4567,	// (0x00044f9e) cset_list_set_pane_g1

0xbb17,	// (0x0004c54e) cset_list_set_pane_g3_ParamLimits

0xbb17,	// (0x0004c54e) cset_list_set_pane_g3

0x0001,

0xfa26,	// (0x0005045d) cset_list_set_pane_g_ParamLimits

0xfa26,	// (0x0005045d) cset_list_set_pane_g

0x4573,	// (0x00044faa) cset_list_set_pane_t1_ParamLimits

0x4573,	// (0x00044faa) cset_list_set_pane_t1

0xe7b3,	// (0x0004f1ea) list_highlight_pane_cp021_ParamLimits

0xe7b3,	// (0x0004f1ea) list_highlight_pane_cp021

0x220f,	// (0x00042c46) cset_slider_pane_g1

0x2221,	// (0x00042c58) cset_slider_pane_g2

0x2218,	// (0x00042c4f) cset_slider_pane_g3

0x0002,

0xfa2b,	// (0x00050462) cset_slider_pane_g

0xbb26,	// (0x0004c55d) aid_area_touch_cam4_zoom

0xbb2e,	// (0x0004c565) cam4_zoom_cont_pane

0xbb36,	// (0x0004c56d) cam4_zoom_pane_g1

0xbb3e,	// (0x0004c575) cam4_zoom_pane_g2

0xbb46,	// (0x0004c57d) cam4_zoom_pane_g3

0x0002,

0xfa32,	// (0x00050469) cam4_zoom_pane_g

0xbb4e,	// (0x0004c585) cam4_zoom_cont_pane_g1

0xbb57,	// (0x0004c58e) cam4_zoom_cont_pane_g2

0xbb60,	// (0x0004c597) cam4_zoom_cont_pane_g3

0x0002,

0xfa39,	// (0x00050470) cam4_zoom_cont_pane_g

0xb0f5,	// (0x0004bb2c) call4_image_pane_ParamLimits

0xb0f5,	// (0x0004bb2c) call4_image_pane

0x4253,	// (0x00044c8a) call4_windows_conf_pane_ParamLimits

0x4266,	// (0x00044c9d) popup_call4_audio_in_window_ParamLimits

0x4266,	// (0x00044c9d) popup_call4_audio_in_window

0xdcd2,	// (0x0004e709) bg_popup_call2_act_pane_cp02

0x42c4,	// (0x00044cfb) call4_list_conf_pane

0x3975,	// (0x000443ac) call4_image_pane_g1

0x3975,	// (0x000443ac) call4_image_pane_g2

0x0001,

0xf756,	// (0x0005018d) call4_image_pane_g

0x45a3,	// (0x00044fda) list_single_graphic_popup_conf4_pane_ParamLimits

0x45a3,	// (0x00044fda) list_single_graphic_popup_conf4_pane

0xdcd2,	// (0x0004e709) list_highlight_pane_cp022

0x45b6,	// (0x00044fed) list_single_graphic_popup_conf4_pane_g1

0x1e66,	// (0x0004289d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa40,	// (0x00050477) list_single_graphic_popup_conf4_pane_g

0x45be,	// (0x00044ff5) list_single_graphic_popup_conf4_pane_t1

0x7ba0,	// (0x000485d7) popup_vtel_slider_window_ParamLimits

0x7ba0,	// (0x000485d7) popup_vtel_slider_window

0x421d,	// (0x00044c54) dialer2_ne_pane_t2_ParamLimits

0x421d,	// (0x00044c54) dialer2_ne_pane_t2

0x0001,

0xf92a,	// (0x00050361) dialer2_ne_pane_t_ParamLimits

0xf92a,	// (0x00050361) dialer2_ne_pane_t

0xe7b3,	// (0x0004f1ea) bg_popup_sub_pane_cp010_ParamLimits

0xe7b3,	// (0x0004f1ea) bg_popup_sub_pane_cp010

0xbb69,	// (0x0004c5a0) popup_vtel_slider_window_g1_ParamLimits

0xbb69,	// (0x0004c5a0) popup_vtel_slider_window_g1

0xbb75,	// (0x0004c5ac) popup_vtel_slider_window_g2_ParamLimits

0xbb75,	// (0x0004c5ac) popup_vtel_slider_window_g2

0x0003,

0xfa45,	// (0x0005047c) popup_vtel_slider_window_g_ParamLimits

0xfa45,	// (0x0005047c) popup_vtel_slider_window_g

0xbbbb,	// (0x0004c5f2) vtel_slider_pane_ParamLimits

0xbbbb,	// (0x0004c5f2) vtel_slider_pane

0xbbca,	// (0x0004c601) vtel_slider_pane_g1_ParamLimits

0xbbca,	// (0x0004c601) vtel_slider_pane_g1

0xbbd7,	// (0x0004c60e) vtel_slider_pane_g2_ParamLimits

0xbbd7,	// (0x0004c60e) vtel_slider_pane_g2

0xbbe4,	// (0x0004c61b) vtel_slider_pane_g3_ParamLimits

0xbbe4,	// (0x0004c61b) vtel_slider_pane_g3

0xbbca,	// (0x0004c601) vtel_slider_pane_g4_ParamLimits

0xbbca,	// (0x0004c601) vtel_slider_pane_g4

0xbbf1,	// (0x0004c628) vtel_slider_pane_g5_ParamLimits

0xbbf1,	// (0x0004c628) vtel_slider_pane_g5

0x0004,

0xfa4e,	// (0x00050485) vtel_slider_pane_g_ParamLimits

0xfa4e,	// (0x00050485) vtel_slider_pane_g

0xdcd2,	// (0x0004e709) main_gallery2_pane

0xb429,	// (0x0004be60) aid_size_row_itut2_dropdow_list_ParamLimits

0xb429,	// (0x0004be60) aid_size_row_itut2_dropdow_list

0xb47d,	// (0x0004beb4) grid_vitu2_function_top_pane_ParamLimits

0xb47d,	// (0x0004beb4) grid_vitu2_function_top_pane

0xb4b7,	// (0x0004beee) popup_vitu2_dropdown_list_window_ParamLimits

0xb4b7,	// (0x0004beee) popup_vitu2_dropdown_list_window

0xb4d1,	// (0x0004bf08) popup_vitu2_match_list_window

0xbbfe,	// (0x0004c635) cell_vitu2_function_top_pane_ParamLimits

0xbbfe,	// (0x0004c635) cell_vitu2_function_top_pane

0xbc1e,	// (0x0004c655) cell_vitu2_function_top_pane_cp01_ParamLimits

0xbc1e,	// (0x0004c655) cell_vitu2_function_top_pane_cp01

0xbc3e,	// (0x0004c675) cell_vitu2_function_top_wide_pane_ParamLimits

0xbc3e,	// (0x0004c675) cell_vitu2_function_top_wide_pane

0xb35c,	// (0x0004bd93) bg_button_pane_cp012

0xbc5c,	// (0x0004c693) cell_vitu2_function_top_pane_g1

0xbc6b,	// (0x0004c6a2) bg_button_pane_cp013_ParamLimits

0xbc6b,	// (0x0004c6a2) bg_button_pane_cp013

0xbc87,	// (0x0004c6be) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xbc87,	// (0x0004c6be) cell_vitu2_function_top_wide_pane_g1

0xbc9f,	// (0x0004c6d6) bg_popup_sub_pane_cp20

0xbcad,	// (0x0004c6e4) list_vitu2_match_list_pane

0x4388,	// (0x00044dbf) bg_popup_sub_pane_cp20_g1

0x4390,	// (0x00044dc7) bg_popup_sub_pane_cp20_g2

0x18bb,	// (0x000422f2) bg_popup_sub_pane_cp20_g3

0x4398,	// (0x00044dcf) bg_popup_sub_pane_cp20_g4

0x189b,	// (0x000422d2) bg_popup_sub_pane_cp20_g5

0x45da,	// (0x00045011) bg_popup_sub_pane_cp20_g6

0x43a8,	// (0x00044ddf) bg_popup_sub_pane_cp20_g7

0x43b0,	// (0x00044de7) bg_popup_sub_pane_cp20_g8

0x43b8,	// (0x00044def) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa59,	// (0x00050490) bg_popup_sub_pane_cp20_g

0xbcc5,	// (0x0004c6fc) list_vitu2_match_list_item_pane_ParamLimits

0xbcc5,	// (0x0004c6fc) list_vitu2_match_list_item_pane

0xbcd7,	// (0x0004c70e) list_vitu2_match_list_item_pane_t1

0x7132,	// (0x00047b69) bg_popup_sub_pane_cp21

0xbd11,	// (0x0004c748) grid_vitu2_dropdown_list_pane

0xbd19,	// (0x0004c750) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xbd19,	// (0x0004c750) cell_vitu2_dropdown_list_char_pane

0xbd3a,	// (0x0004c771) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xbd3a,	// (0x0004c771) cell_vitu2_dropdown_list_ctrl_pane

0x45f4,	// (0x0004502b) cell_vitu2_dropdown_list_char_pane_g1

0x45eb,	// (0x00045022) cell_vitu2_dropdown_list_char_pane_g2

0x45e2,	// (0x00045019) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa76,	// (0x000504ad) cell_vitu2_dropdown_list_char_pane_g

0xbd66,	// (0x0004c79d) cell_vitu2_dropdown_list_char_pane_t1

0xbd74,	// (0x0004c7ab) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xbd74,	// (0x0004c7ab) cell_vitu2_dropdown_list_ctrl_pane_g1

0xbd84,	// (0x0004c7bb) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xbd84,	// (0x0004c7bb) cell_vitu2_dropdown_list_ctrl_pane_g2

0xbd95,	// (0x0004c7cc) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xbd95,	// (0x0004c7cc) cell_vitu2_dropdown_list_ctrl_pane_g3

0xbda5,	// (0x0004c7dc) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xbda5,	// (0x0004c7dc) cell_vitu2_dropdown_list_ctrl_pane_g4

0xb27e,	// (0x0004bcb5) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xb27e,	// (0x0004bcb5) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa7d,	// (0x000504b4) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa7d,	// (0x000504b4) cell_vitu2_dropdown_list_ctrl_pane_g

0xbdbe,	// (0x0004c7f5) aid_size_cell_gallery2_ParamLimits

0xbdbe,	// (0x0004c7f5) aid_size_cell_gallery2

0xbdcc,	// (0x0004c803) grid_gallery2_pane_ParamLimits

0xbdcc,	// (0x0004c803) grid_gallery2_pane

0xbdd9,	// (0x0004c810) scroll_pane_cp029_ParamLimits

0xbdd9,	// (0x0004c810) scroll_pane_cp029

0xbde5,	// (0x0004c81c) cell_gallery2_pane_ParamLimits

0xbde5,	// (0x0004c81c) cell_gallery2_pane

0x45fd,	// (0x00045034) cell_gallery2_pane_g2

0xbe11,	// (0x0004c848) cell_gallery2_pane_g3

0x4607,	// (0x0004503e) cell_gallery2_pane_g4

0x460f,	// (0x00045046) cell_gallery2_pane_g5

0x20cb,	// (0x00042b02) grid_highlight_pane_cp10

0xb4d1,	// (0x0004bf08) popup_vitu2_match_list_window_ParamLimits

0xb4e1,	// (0x0004bf18) popup_vitu2_query_window_ParamLimits

0xb4e1,	// (0x0004bf18) popup_vitu2_query_window

0x7132,	// (0x00047b69) bg_vitu2_candi_button_pane

0x45f4,	// (0x0004502b) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x45eb,	// (0x00045022) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x45e2,	// (0x00045019) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xbe19,	// (0x0004c850) bg_button_pane_cp015

0xbe21,	// (0x0004c858) bg_button_pane_cp016

0xbe2b,	// (0x0004c862) bg_button_pane_cp017

0xe7b3,	// (0x0004f1ea) bg_popup_sub_pane_cp22

0x4617,	// (0x0004504e) popup_vitu2_query_window_g1

0xbe53,	// (0x0004c88a) popup_vitu2_query_window_g2

0x0001,

0xfa88,	// (0x000504bf) popup_vitu2_query_window_g

0xbe5f,	// (0x0004c896) popup_vitu2_query_window_t1_ParamLimits

0xbe5f,	// (0x0004c896) popup_vitu2_query_window_t1

0xbe87,	// (0x0004c8be) popup_vitu2_query_window_t2_ParamLimits

0xbe87,	// (0x0004c8be) popup_vitu2_query_window_t2

0xbe99,	// (0x0004c8d0) popup_vitu2_query_window_t3_ParamLimits

0xbe99,	// (0x0004c8d0) popup_vitu2_query_window_t3

0xbec1,	// (0x0004c8f8) popup_vitu2_query_window_t4_ParamLimits

0xbec1,	// (0x0004c8f8) popup_vitu2_query_window_t4

0xbed3,	// (0x0004c90a) popup_vitu2_query_window_t5_ParamLimits

0xbed3,	// (0x0004c90a) popup_vitu2_query_window_t5

0x0004,

0xfa8d,	// (0x000504c4) popup_vitu2_query_window_t_ParamLimits

0xfa8d,	// (0x000504c4) popup_vitu2_query_window_t

0x4476,	// (0x00044ead) main_cset_text_pane

0xb85f,	// (0x0004c296) aid_area_touch_slider_ParamLimits

0xb87b,	// (0x0004c2b2) cset_slider_pane_ParamLimits

0xb8a5,	// (0x0004c2dc) main_cset_slider_pane_g1_ParamLimits

0xb8ba,	// (0x0004c2f1) main_cset_slider_pane_g2_ParamLimits

0x4497,	// (0x00044ece) main_cset_slider_pane_g3_ParamLimits

0x4497,	// (0x00044ece) main_cset_slider_pane_g3

0xb8cf,	// (0x0004c306) main_cset_slider_pane_g4_ParamLimits

0xb8cf,	// (0x0004c306) main_cset_slider_pane_g4

0xb8de,	// (0x0004c315) main_cset_slider_pane_g5_ParamLimits

0xb8de,	// (0x0004c315) main_cset_slider_pane_g5

0xb8ea,	// (0x0004c321) main_cset_slider_pane_g6_ParamLimits

0xb8ea,	// (0x0004c321) main_cset_slider_pane_g6

0xf9e2,	// (0x00050419) main_cset_slider_pane_g_ParamLimits

0x44c7,	// (0x00044efe) main_cset_slider_pane_t1_ParamLimits

0xb976,	// (0x0004c3ad) main_cset_slider_pane_t2_ParamLimits

0xb990,	// (0x0004c3c7) main_cset_slider_pane_t3_ParamLimits

0xb9aa,	// (0x0004c3e1) main_cset_slider_pane_t4_ParamLimits

0xb9c4,	// (0x0004c3fb) main_cset_slider_pane_t5_ParamLimits

0xb9de,	// (0x0004c415) main_cset_slider_pane_t6_ParamLimits

0xb9f3,	// (0x0004c42a) main_cset_slider_pane_t7_ParamLimits

0xba1d,	// (0x0004c454) main_cset_slider_pane_t8_ParamLimits

0xba1d,	// (0x0004c454) main_cset_slider_pane_t8

0xba45,	// (0x0004c47c) main_cset_slider_pane_t9_ParamLimits

0xba45,	// (0x0004c47c) main_cset_slider_pane_t9

0xba6d,	// (0x0004c4a4) main_cset_slider_pane_t10_ParamLimits

0xba6d,	// (0x0004c4a4) main_cset_slider_pane_t10

0xba95,	// (0x0004c4cc) main_cset_slider_pane_t11_ParamLimits

0xba95,	// (0x0004c4cc) main_cset_slider_pane_t11

0xbabd,	// (0x0004c4f4) main_cset_slider_pane_t12_ParamLimits

0xbabd,	// (0x0004c4f4) main_cset_slider_pane_t12

0xbada,	// (0x0004c511) main_cset_slider_pane_t13_ParamLimits

0xbada,	// (0x0004c511) main_cset_slider_pane_t13

0xfa07,	// (0x0005043e) main_cset_slider_pane_t_ParamLimits

0xdcd2,	// (0x0004e709) bg_popup_sub_pane_cp011

0x4623,	// (0x0004505a) main_cset_text_pane_g1

0x462b,	// (0x00045062) main_cset_text_pane_t1

0x4639,	// (0x00045070) main_cset_text_pane_t2

0x4647,	// (0x0004507e) main_cset_text_pane_t3

0x4655,	// (0x0004508c) main_cset_text_pane_t4

0x4663,	// (0x0004509a) main_cset_text_pane_t5

0x4671,	// (0x000450a8) main_cset_text_pane_t6

0x467f,	// (0x000450b6) main_cset_text_pane_t7

0x0006,

0xfa98,	// (0x000504cf) main_cset_text_pane_t

0xdcd2,	// (0x0004e709) main_cam4_burst_pane

0xdcd2,	// (0x0004e709) main_cam5_pane

0xb7ba,	// (0x0004c1f1) bg_button_pane_cp019

0xb7c3,	// (0x0004c1fa) bg_button_pane_cp020

0x44a3,	// (0x00044eda) main_cset_slider_pane_g7_ParamLimits

0x44a3,	// (0x00044eda) main_cset_slider_pane_g7

0x44af,	// (0x00044ee6) main_cset_slider_pane_g8_ParamLimits

0x44af,	// (0x00044ee6) main_cset_slider_pane_g8

0xb8fe,	// (0x0004c335) main_cset_slider_pane_g9_ParamLimits

0xb8fe,	// (0x0004c335) main_cset_slider_pane_g9

0xb90a,	// (0x0004c341) main_cset_slider_pane_g10_ParamLimits

0xb90a,	// (0x0004c341) main_cset_slider_pane_g10

0xb916,	// (0x0004c34d) main_cset_slider_pane_g11_ParamLimits

0xb916,	// (0x0004c34d) main_cset_slider_pane_g11

0xb922,	// (0x0004c359) main_cset_slider_pane_g12_ParamLimits

0xb922,	// (0x0004c359) main_cset_slider_pane_g12

0xb92e,	// (0x0004c365) main_cset_slider_pane_g13_ParamLimits

0xb92e,	// (0x0004c365) main_cset_slider_pane_g13

0xb93a,	// (0x0004c371) main_cset_slider_pane_g14_ParamLimits

0xb93a,	// (0x0004c371) main_cset_slider_pane_g14

0xb946,	// (0x0004c37d) main_cset_slider_pane_g15_ParamLimits

0xb946,	// (0x0004c37d) main_cset_slider_pane_g15

0x44f5,	// (0x00044f2c) main_cset_slider_pane_t14_ParamLimits

0x44f5,	// (0x00044f2c) main_cset_slider_pane_t14

0x452e,	// (0x00044f65) main_cset_slider_pane_t15_ParamLimits

0x452e,	// (0x00044f65) main_cset_slider_pane_t15

0xbee5,	// (0x0004c91c) aid_cam4_burst_size_cell_ParamLimits

0xbee5,	// (0x0004c91c) aid_cam4_burst_size_cell

0xbf01,	// (0x0004c938) grid_cam4_burst_pane_ParamLimits

0xbf01,	// (0x0004c938) grid_cam4_burst_pane

0xbf23,	// (0x0004c95a) linegrid_cam4_burst_pane_ParamLimits

0xbf23,	// (0x0004c95a) linegrid_cam4_burst_pane

0xbf41,	// (0x0004c978) scroll_pane_cp30_ParamLimits

0xbf41,	// (0x0004c978) scroll_pane_cp30

0xbf4d,	// (0x0004c984) cell_cam4_burst_pane_ParamLimits

0xbf4d,	// (0x0004c984) cell_cam4_burst_pane

0x468d,	// (0x000450c4) linegrid_cam4_burst_pane_g1_ParamLimits

0x468d,	// (0x000450c4) linegrid_cam4_burst_pane_g1

0xbf85,	// (0x0004c9bc) linegrid_cam4_burst_pane_g2_ParamLimits

0xbf85,	// (0x0004c9bc) linegrid_cam4_burst_pane_g2

0x469a,	// (0x000450d1) linegrid_cam4_burst_pane_g3_ParamLimits

0x469a,	// (0x000450d1) linegrid_cam4_burst_pane_g3

0x0002,

0xfaa7,	// (0x000504de) linegrid_cam4_burst_pane_g_ParamLimits

0xfaa7,	// (0x000504de) linegrid_cam4_burst_pane_g

0xbf96,	// (0x0004c9cd) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xbf96,	// (0x0004c9cd) linegrid_cam4_burst_pane_g3_copy1

0x46a7,	// (0x000450de) linegrid_cam4_burst_pane_g4_ParamLimits

0x46a7,	// (0x000450de) linegrid_cam4_burst_pane_g4

0xbfb0,	// (0x0004c9e7) linegrid_cam4_burst_pane_g5_ParamLimits

0xbfb0,	// (0x0004c9e7) linegrid_cam4_burst_pane_g5

0xbfc1,	// (0x0004c9f8) linegrid_cam4_burst_pane_g6_ParamLimits

0xbfc1,	// (0x0004c9f8) linegrid_cam4_burst_pane_g6

0x46b4,	// (0x000450eb) linegrid_cam4_burst_pane_g7_ParamLimits

0x46b4,	// (0x000450eb) linegrid_cam4_burst_pane_g7

0xbfd2,	// (0x0004ca09) cell_cam4_burst_pane_g1

0x46cd,	// (0x00045104) main_cam5_pane_t1_ParamLimits

0x46cd,	// (0x00045104) main_cam5_pane_t1

0x46df,	// (0x00045116) main_cam5_pane_t2_ParamLimits

0x46df,	// (0x00045116) main_cam5_pane_t2

0x46f1,	// (0x00045128) main_cam5_pane_t3_ParamLimits

0x46f1,	// (0x00045128) main_cam5_pane_t3

0x4703,	// (0x0004513a) main_cam5_pane_t4_ParamLimits

0x4703,	// (0x0004513a) main_cam5_pane_t4

0x4719,	// (0x00045150) main_cam5_pane_t5_ParamLimits

0x4719,	// (0x00045150) main_cam5_pane_t5

0x472b,	// (0x00045162) main_cam5_pane_t6_ParamLimits

0x472b,	// (0x00045162) main_cam5_pane_t6

0x473d,	// (0x00045174) main_cam5_pane_t7_ParamLimits

0x473d,	// (0x00045174) main_cam5_pane_t7

0x474f,	// (0x00045186) main_cam5_pane_t8_ParamLimits

0x474f,	// (0x00045186) main_cam5_pane_t8

0x476b,	// (0x000451a2) main_cam5_pane_t9_ParamLimits

0x476b,	// (0x000451a2) main_cam5_pane_t9

0x477d,	// (0x000451b4) main_cam5_pane_t10_ParamLimits

0x477d,	// (0x000451b4) main_cam5_pane_t10

0x478f,	// (0x000451c6) main_cam5_pane_t11_ParamLimits

0x478f,	// (0x000451c6) main_cam5_pane_t11

0x47a1,	// (0x000451d8) main_cam5_pane_t12_ParamLimits

0x47a1,	// (0x000451d8) main_cam5_pane_t12

0x47b6,	// (0x000451ed) main_cam5_pane_t13_ParamLimits

0x47b6,	// (0x000451ed) main_cam5_pane_t13

0x000c,

0xfab3,	// (0x000504ea) main_cam5_pane_t_ParamLimits

0xfab3,	// (0x000504ea) main_cam5_pane_t

0x6dfd,	// (0x00047834) popup_scut_keymap_window_ParamLimits

0x6dfd,	// (0x00047834) popup_scut_keymap_window

0xbfe5,	// (0x0004ca1c) aid_size_cell_brow_shortcut

0x20cb,	// (0x00042b02) bg_popup_window_pane_cp010

0xbff1,	// (0x0004ca28) grid_scut_pane

0xbffb,	// (0x0004ca32) cell_scut_pane_ParamLimits

0xbffb,	// (0x0004ca32) cell_scut_pane

0xc010,	// (0x0004ca47) cell_scut_pane_g1

0x47d3,	// (0x0004520a) cell_scut_pane_t1

0x47e2,	// (0x00045219) cell_scut_pane_t2

0xc019,	// (0x0004ca50) cell_scut_pane_t3

0x0002,

0xface,	// (0x00050505) cell_scut_pane_t

0xa146,	// (0x0004ab7d) main_mup3_pane_g8_ParamLimits

0xa146,	// (0x0004ab7d) main_mup3_pane_g8

0xb435,	// (0x0004be6c) area_vitu2_query_pane_ParamLimits

0xb435,	// (0x0004be6c) area_vitu2_query_pane

0xbe35,	// (0x0004c86c) input_focus_pane_cp08

0x47f1,	// (0x00045228) area_vitu2_query_pane_g1

0xc027,	// (0x0004ca5e) area_vitu2_query_pane_g2

0x0001,

0xfad5,	// (0x0005050c) area_vitu2_query_pane_g

0xc036,	// (0x0004ca6d) area_vitu2_query_pane_t1_ParamLimits

0xc036,	// (0x0004ca6d) area_vitu2_query_pane_t1

0xc048,	// (0x0004ca7f) area_vitu2_query_pane_t2_ParamLimits

0xc048,	// (0x0004ca7f) area_vitu2_query_pane_t2

0xc05a,	// (0x0004ca91) area_vitu2_query_pane_t3_ParamLimits

0xc05a,	// (0x0004ca91) area_vitu2_query_pane_t3

0x47fd,	// (0x00045234) area_vitu2_query_pane_t4_ParamLimits

0x47fd,	// (0x00045234) area_vitu2_query_pane_t4

0x4825,	// (0x0004525c) area_vitu2_query_pane_t5_ParamLimits

0x4825,	// (0x0004525c) area_vitu2_query_pane_t5

0x484d,	// (0x00045284) area_vitu2_query_pane_t6_ParamLimits

0x484d,	// (0x00045284) area_vitu2_query_pane_t6

0x0006,

0xfada,	// (0x00050511) area_vitu2_query_pane_t_ParamLimits

0xfada,	// (0x00050511) area_vitu2_query_pane_t

0xc082,	// (0x0004cab9) bg_button_pane_cp018

0xc08f,	// (0x0004cac6) bg_button_pane_cp021

0xc09b,	// (0x0004cad2) bg_button_pane_cp022

0xc0aa,	// (0x0004cae1) input_focus_pane_cp09

0x898b,	// (0x000493c2) aid_size_touch_mv_arrow_left

0x1fa4,	// (0x000429db) aid_size_touch_mv_arrow_right

0xb95e,	// (0x0004c395) main_cset_slider_pane_g16_ParamLimits

0xb95e,	// (0x0004c395) main_cset_slider_pane_g16

0xb96a,	// (0x0004c3a1) main_cset_slider_pane_g17_ParamLimits

0xb96a,	// (0x0004c3a1) main_cset_slider_pane_g17

0xbfd2,	// (0x0004ca09) cell_cam4_burst_pane_g1_ParamLimits

0xdcd2,	// (0x0004e709) compa_mode_pane

0xbb81,	// (0x0004c5b8) popup_vtel_slider_window_g3_ParamLimits

0xbb81,	// (0x0004c5b8) popup_vtel_slider_window_g3

0xbb95,	// (0x0004c5cc) popup_vtel_slider_window_g4_ParamLimits

0xbb95,	// (0x0004c5cc) popup_vtel_slider_window_g4

0xbba9,	// (0x0004c5e0) popup_vtel_slider_window_t1_ParamLimits

0xbba9,	// (0x0004c5e0) popup_vtel_slider_window_t1

0xdcd2,	// (0x0004e709) main_cl_pane

0x3560,	// (0x00043f97) popup_imed_adjust2_window_ParamLimits

0x353a,	// (0x00043f71) bg_tb_trans_pane_cp05_ParamLimits

0x3e3e,	// (0x00044875) popup_imed_adjust2_window_g1_ParamLimits

0x3e4d,	// (0x00044884) popup_imed_adjust2_window_g2_ParamLimits

0x3e4d,	// (0x00044884) popup_imed_adjust2_window_g2

0x3e59,	// (0x00044890) popup_imed_adjust2_window_g3_ParamLimits

0x3e59,	// (0x00044890) popup_imed_adjust2_window_g3

0x0002,

0xf854,	// (0x0005028b) popup_imed_adjust2_window_g_ParamLimits

0xf854,	// (0x0005028b) popup_imed_adjust2_window_g

0x3e65,	// (0x0004489c) popup_imed_adjust2_window_t1_ParamLimits

0x3e7d,	// (0x000448b4) slider_imed_adjust_pane_ParamLimits

0x3e91,	// (0x000448c8) slider_imed_adjust_pane_g1_ParamLimits

0x3ea1,	// (0x000448d8) slider_imed_adjust_pane_g2_ParamLimits

0x3eb1,	// (0x000448e8) slider_imed_adjust_pane_g3_ParamLimits

0x3ec2,	// (0x000448f9) slider_imed_adjust_pane_g4_ParamLimits

0xf85b,	// (0x00050292) slider_imed_adjust_pane_g_ParamLimits

0xb1bf,	// (0x0004bbf6) aid_touch_area_cam4_ParamLimits

0xb1bf,	// (0x0004bbf6) aid_touch_area_cam4

0xb1cd,	// (0x0004bc04) battery_pane_cp01

0xb24e,	// (0x0004bc85) main_camera4_pane_g6_ParamLimits

0xb24e,	// (0x0004bc85) main_camera4_pane_g6

0xb26c,	// (0x0004bca3) main_camera4_pane_t2_ParamLimits

0xb26c,	// (0x0004bca3) main_camera4_pane_t2

0x0001,

0xf95e,	// (0x00050395) main_camera4_pane_t_ParamLimits

0xf95e,	// (0x00050395) main_camera4_pane_t

0xb2de,	// (0x0004bd15) aid_touch_area_vid4_ParamLimits

0xb2de,	// (0x0004bd15) aid_touch_area_vid4

0xb310,	// (0x0004bd47) main_video4_pane_g5_ParamLimits

0xb310,	// (0x0004bd47) main_video4_pane_g5

0xb332,	// (0x0004bd69) vid4_progress_pane_ParamLimits

0xb332,	// (0x0004bd69) vid4_progress_pane

0x44bb,	// (0x00044ef2) main_cset_slider_pane_g18_ParamLimits

0x44bb,	// (0x00044ef2) main_cset_slider_pane_g18

0x46c1,	// (0x000450f8) cell_cam4_burst_pane_g2_ParamLimits

0x46c1,	// (0x000450f8) cell_cam4_burst_pane_g2

0x0001,

0xfaae,	// (0x000504e5) cell_cam4_burst_pane_g_ParamLimits

0xfaae,	// (0x000504e5) cell_cam4_burst_pane_g

0xc0b9,	// (0x0004caf0) bg_cl_pane_ParamLimits

0xc0b9,	// (0x0004caf0) bg_cl_pane

0xc0c5,	// (0x0004cafc) cl_header_pane_ParamLimits

0xc0c5,	// (0x0004cafc) cl_header_pane

0xc0d1,	// (0x0004cb08) cl_listscroll_pane_ParamLimits

0xc0d1,	// (0x0004cb08) cl_listscroll_pane

0x4899,	// (0x000452d0) bg_cl_pane_g1

0x48a1,	// (0x000452d8) bg_cl_pane_g2

0x48a9,	// (0x000452e0) bg_cl_pane_g3

0x48b1,	// (0x000452e8) bg_cl_pane_g4

0x48b9,	// (0x000452f0) bg_cl_pane_g5

0x48c1,	// (0x000452f8) bg_cl_pane_g6

0x48c9,	// (0x00045300) bg_cl_pane_g7

0x48d1,	// (0x00045308) bg_cl_pane_g8

0x48d9,	// (0x00045310) bg_cl_pane_g9

0x0008,

0xfae9,	// (0x00050520) bg_cl_pane_g

0xc0dd,	// (0x0004cb14) aid_height_cl_leading_ParamLimits

0xc0dd,	// (0x0004cb14) aid_height_cl_leading

0xc0e9,	// (0x0004cb20) aid_height_cl_text_ParamLimits

0xc0e9,	// (0x0004cb20) aid_height_cl_text

0x42f0,	// (0x00044d27) bg_cl_header_pane_ParamLimits

0x42f0,	// (0x00044d27) bg_cl_header_pane

0xc101,	// (0x0004cb38) cl_header_pane_g1_ParamLimits

0xc101,	// (0x0004cb38) cl_header_pane_g1

0xc10e,	// (0x0004cb45) cl_header_pane_t1_ParamLimits

0xc10e,	// (0x0004cb45) cl_header_pane_t1

0x48e1,	// (0x00045318) cl_list_pane

0x48ea,	// (0x00045321) hc_scroll_pane_cp01

0x189b,	// (0x000422d2) bg_cl_header_pane_g1

0x4388,	// (0x00044dbf) bg_cl_header_pane_g2

0x18bb,	// (0x000422f2) bg_cl_header_pane_g3

0x4398,	// (0x00044dcf) bg_cl_header_pane_g4

0x4390,	// (0x00044dc7) bg_cl_header_pane_g5

0x45da,	// (0x00045011) bg_cl_header_pane_g6

0x43b0,	// (0x00044de7) bg_cl_header_pane_g7

0x43b8,	// (0x00044def) bg_cl_header_pane_g8

0x43a8,	// (0x00044ddf) bg_cl_header_pane_g9

0x0008,

0xfafc,	// (0x00050533) bg_cl_header_pane_g

0xc120,	// (0x0004cb57) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xc120,	// (0x0004cb57) hc_cl_list_double_graphic_heading_pane

0xc130,	// (0x0004cb67) hc_cl_list_single_graphic_pane_ParamLimits

0xc130,	// (0x0004cb67) hc_cl_list_single_graphic_pane

0xc142,	// (0x0004cb79) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xc142,	// (0x0004cb79) hc_cl_list_single_graphic_pane_g1

0xc14e,	// (0x0004cb85) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xc14e,	// (0x0004cb85) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfb0f,	// (0x00050546) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfb0f,	// (0x00050546) hc_cl_list_single_graphic_pane_g

0xc162,	// (0x0004cb99) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xc162,	// (0x0004cb99) hc_cl_list_single_graphic_pane_t1

0xc142,	// (0x0004cb79) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xc142,	// (0x0004cb79) hc_cl_list_double_graphic_heading_pane_g1

0xc177,	// (0x0004cbae) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xc177,	// (0x0004cbae) hc_cl_list_double_graphic_heading_pane_g2

0xc18b,	// (0x0004cbc2) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xc18b,	// (0x0004cbc2) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb14,	// (0x0005054b) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb14,	// (0x0005054b) hc_cl_list_double_graphic_heading_pane_g

0xc19f,	// (0x0004cbd6) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xc19f,	// (0x0004cbd6) hc_cl_list_double_graphic_heading_pane_t1

0xc1b4,	// (0x0004cbeb) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xc1b4,	// (0x0004cbeb) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb1b,	// (0x00050552) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb1b,	// (0x00050552) hc_cl_list_double_graphic_heading_pane_t

0xc1c9,	// (0x0004cc00) vid4_progress_pane_g1

0xc1d8,	// (0x0004cc0f) vid4_progress_pane_g2

0xc1e7,	// (0x0004cc1e) vid4_progress_pane_g3

0xc1f6,	// (0x0004cc2d) vid4_progress_pane_g4

0x0004,

0xfb20,	// (0x00050557) vid4_progress_pane_g

0xc20e,	// (0x0004cc45) vid4_progress_pane_t1

0xc224,	// (0x0004cc5b) vid4_progress_pane_t2

0x0002,

0xfb2b,	// (0x00050562) vid4_progress_pane_t

0xc24e,	// (0x0004cc85) wait_bar_pane_cp07

0x3770,	// (0x000441a7) blid_firmament_pane_ParamLimits

0x37b1,	// (0x000441e8) popup_blid_sat_info2_window_g1

0x37d5,	// (0x0004420c) popup_blid_sat_info2_window_t3

0x37e3,	// (0x0004421a) popup_blid_sat_info2_window_t4

0x37f1,	// (0x00044228) popup_blid_sat_info2_window_t5

0x37ff,	// (0x00044236) popup_blid_sat_info2_window_t6

0x380f,	// (0x00044246) popup_blid_sat_info2_window_t7

0x381d,	// (0x00044254) popup_blid_sat_info2_window_t8

0x382b,	// (0x00044262) popup_blid_sat_info2_window_t9

0x3839,	// (0x00044270) popup_blid_sat_info2_window_t10

0x38f5,	// (0x0004432c) aid_firma_cardinal_ParamLimits

0x3909,	// (0x00044340) blid_firmament_pane_t1_ParamLimits

0x3920,	// (0x00044357) blid_firmament_pane_t2_ParamLimits

0x3937,	// (0x0004436e) blid_firmament_pane_t3_ParamLimits

0x394e,	// (0x00044385) blid_firmament_pane_t4_ParamLimits

0xf74d,	// (0x00050184) blid_firmament_pane_t_ParamLimits

0x3965,	// (0x0004439c) blid_sat_info_pane_ParamLimits

0xe7b3,	// (0x0004f1ea) main_cam_set_pane_ParamLimits

0xa8ab,	// (0x0004b2e2) aid_size_cell_colour_35_ParamLimits

0xa8c2,	// (0x0004b2f9) aid_size_cell_colour_112_ParamLimits

0xa8d9,	// (0x0004b310) aid_size_cell_effect_ParamLimits

0xe7b3,	// (0x0004f1ea) bg_tb_trans_pane_cp02_ParamLimits

0x1bb7,	// (0x000425ee) heading_imed_pane_ParamLimits

0xa8f3,	// (0x0004b32a) listscroll_imed_pane_ParamLimits

0x2b2c,	// (0x00043563) popup_call2_audio_first_window_g5_ParamLimits

0x2b2c,	// (0x00043563) popup_call2_audio_first_window_g5

0xaf76,	// (0x0004b9ad) aid_size_touch_image3_arrow_left_ParamLimits

0xaf76,	// (0x0004b9ad) aid_size_touch_image3_arrow_left

0xaf8a,	// (0x0004b9c1) aid_size_touch_image3_arrow_right_ParamLimits

0xaf8a,	// (0x0004b9c1) aid_size_touch_image3_arrow_right

0xc239,	// (0x0004cc70) vid4_progress_pane_t3

0xab57,	// (0x0004b58e) main_hwr_training_symbol_option_pane_ParamLimits

0xab57,	// (0x0004b58e) main_hwr_training_symbol_option_pane

0x411d,	// (0x00044b54) popup_hwr_training_preview_window_ParamLimits

0x411d,	// (0x00044b54) popup_hwr_training_preview_window

0xabb2,	// (0x0004b5e9) hwr_training_navi_pane_g5_ParamLimits

0xabb2,	// (0x0004b5e9) hwr_training_navi_pane_g5

0x4376,	// (0x00044dad) popup_char_count_window

0xbc9f,	// (0x0004c6d6) bg_popup_sub_pane_cp20_ParamLimits

0xbcad,	// (0x0004c6e4) list_vitu2_match_list_pane_ParamLimits

0xbcb9,	// (0x0004c6f0) vitu2_page_scroll_pane_ParamLimits

0xbcb9,	// (0x0004c6f0) vitu2_page_scroll_pane

0x494d,	// (0x00045384) list_single_hwr_training_symbol_option_pane_ParamLimits

0x494d,	// (0x00045384) list_single_hwr_training_symbol_option_pane

0x4960,	// (0x00045397) list_single_hwr_training_symbol_option_pane_g1

0x4968,	// (0x0004539f) list_single_hwr_training_symbol_option_pane_t1

0x4976,	// (0x000453ad) bg_button_pane_cp023

0x497f,	// (0x000453b6) bg_button_pane_cp024

0xc25e,	// (0x0004cc95) vitu2_page_scroll_pane_g1

0xc266,	// (0x0004cc9d) vitu2_page_scroll_pane_g2

0x0001,

0xfb32,	// (0x00050569) vitu2_page_scroll_pane_g

0xc26e,	// (0x0004cca5) vitu2_page_scroll_pane_t1

0x36d0,	// (0x00044107) popup_char_count_window_g1

0x49b2,	// (0x000453e9) popup_char_count_window_g2

0x49bb,	// (0x000453f2) popup_char_count_window_g3

0x0002,

0xfb37,	// (0x0005056e) popup_char_count_window_g

0x49c4,	// (0x000453fb) popup_char_count_window_t1

0xdcd2,	// (0x0004e709) main_vded2_pane

0x3e2c,	// (0x00044863) aid_size_cell_imed_line

0x3e36,	// (0x0004486d) grid_imed_line_width_pane

0xb38b,	// (0x0004bdc2) vid4_indicators_pane_g4

0x49d2,	// (0x00045409) cell_imed_line_width_pane_ParamLimits

0x49d2,	// (0x00045409) cell_imed_line_width_pane

0x49e4,	// (0x0004541b) cell_imed_line_width_pane_g1

0x49ed,	// (0x00045424) cell_imed_line_width_pane_g2

0x0001,

0xfb3e,	// (0x00050575) cell_imed_line_width_pane_g

0xc27d,	// (0x0004ccb4) main_vded2_pane_g1_ParamLimits

0xc27d,	// (0x0004ccb4) main_vded2_pane_g1

0xc28a,	// (0x0004ccc1) main_vded2_pane_g2_ParamLimits

0xc28a,	// (0x0004ccc1) main_vded2_pane_g2

0x0001,

0xfb43,	// (0x0005057a) main_vded2_pane_g_ParamLimits

0xfb43,	// (0x0005057a) main_vded2_pane_g

0xc296,	// (0x0004cccd) vded2_slider_pane_ParamLimits

0xc296,	// (0x0004cccd) vded2_slider_pane

0xc2a3,	// (0x0004ccda) aid_size_touch_vded2_end

0xc2ab,	// (0x0004cce2) aid_size_touch_vded2_playhead

0xc2b3,	// (0x0004ccea) aid_size_touch_vded2_start

0xc2bb,	// (0x0004ccf2) vded2_slider_bg_pane

0xc2c4,	// (0x0004ccfb) vded2_slider_pane_g1

0xc2cd,	// (0x0004cd04) vded2_slider_pane_g2

0xc2d5,	// (0x0004cd0c) vded2_slider_pane_g3

0x0002,

0xfb48,	// (0x0005057f) vded2_slider_pane_g

0xc2de,	// (0x0004cd15) vded2_slider_bg_pane_g1

0xc2e7,	// (0x0004cd1e) vded2_slider_bg_pane_g2

0xc2f0,	// (0x0004cd27) vded2_slider_bg_pane_g3

0x0002,

0xfb4f,	// (0x00050586) vded2_slider_bg_pane_g

0x8f37,	// (0x0004996e) aid_postcard_touch_down_pane_ParamLimits

0x8f37,	// (0x0004996e) aid_postcard_touch_down_pane

0x8f43,	// (0x0004997a) aid_postcard_touch_up_pane_ParamLimits

0x8f43,	// (0x0004997a) aid_postcard_touch_up_pane

0xdcd2,	// (0x0004e709) main_blid2_pane

0x3548,	// (0x00043f7f) popup_blid2_search_window

0xdcd2,	// (0x0004e709) blid2_gps_pane

0xdcd2,	// (0x0004e709) blid2_navig_pane

0xdcd2,	// (0x0004e709) blid2_search_pane

0xdcd2,	// (0x0004e709) blid2_tripm_pane

0xc2f9,	// (0x0004cd30) blid2_search_pane_g1_ParamLimits

0xc2f9,	// (0x0004cd30) blid2_search_pane_g1

0xc305,	// (0x0004cd3c) blid2_search_pane_t1_ParamLimits

0xc305,	// (0x0004cd3c) blid2_search_pane_t1

0xc317,	// (0x0004cd4e) aid_size_cell_blid2_gps_ParamLimits

0xc317,	// (0x0004cd4e) aid_size_cell_blid2_gps

0xc327,	// (0x0004cd5e) blid2_gps_pane_g1_ParamLimits

0xc327,	// (0x0004cd5e) blid2_gps_pane_g1

0xc333,	// (0x0004cd6a) grid_blid2_satellite_pane_ParamLimits

0xc333,	// (0x0004cd6a) grid_blid2_satellite_pane

0xc33f,	// (0x0004cd76) blid2_navig_pane_g1_ParamLimits

0xc33f,	// (0x0004cd76) blid2_navig_pane_g1

0xc34b,	// (0x0004cd82) blid2_navig_pane_t1_ParamLimits

0xc34b,	// (0x0004cd82) blid2_navig_pane_t1

0xc35d,	// (0x0004cd94) blid2_navig_pane_t2_ParamLimits

0xc35d,	// (0x0004cd94) blid2_navig_pane_t2

0x0001,

0xfb56,	// (0x0005058d) blid2_navig_pane_t_ParamLimits

0xfb56,	// (0x0005058d) blid2_navig_pane_t

0xc36f,	// (0x0004cda6) blid2_navig_ring_pane_ParamLimits

0xc36f,	// (0x0004cda6) blid2_navig_ring_pane

0xc37b,	// (0x0004cdb2) blid2_speed_pane_ParamLimits

0xc37b,	// (0x0004cdb2) blid2_speed_pane

0xc387,	// (0x0004cdbe) blid2_tripm_pane_g1_ParamLimits

0xc387,	// (0x0004cdbe) blid2_tripm_pane_g1

0xc393,	// (0x0004cdca) blid2_tripm_pane_g2_ParamLimits

0xc393,	// (0x0004cdca) blid2_tripm_pane_g2

0xc39f,	// (0x0004cdd6) blid2_tripm_pane_g3_ParamLimits

0xc39f,	// (0x0004cdd6) blid2_tripm_pane_g3

0xc3ab,	// (0x0004cde2) blid2_tripm_pane_g4_ParamLimits

0xc3ab,	// (0x0004cde2) blid2_tripm_pane_g4

0xc3b7,	// (0x0004cdee) blid2_tripm_pane_g5_ParamLimits

0xc3b7,	// (0x0004cdee) blid2_tripm_pane_g5

0x0005,

0xfb5b,	// (0x00050592) blid2_tripm_pane_g_ParamLimits

0xfb5b,	// (0x00050592) blid2_tripm_pane_g

0xc3cf,	// (0x0004ce06) blid2_tripm_pane_t1_ParamLimits

0xc3cf,	// (0x0004ce06) blid2_tripm_pane_t1

0xc3e1,	// (0x0004ce18) blid2_tripm_pane_t2_ParamLimits

0xc3e1,	// (0x0004ce18) blid2_tripm_pane_t2

0xc3f3,	// (0x0004ce2a) blid2_tripm_pane_t3_ParamLimits

0xc3f3,	// (0x0004ce2a) blid2_tripm_pane_t3

0x0003,

0xfb68,	// (0x0005059f) blid2_tripm_pane_t_ParamLimits

0xfb68,	// (0x0005059f) blid2_tripm_pane_t

0xc423,	// (0x0004ce5a) cell_blid2_satellite_pane_ParamLimits

0xc423,	// (0x0004ce5a) cell_blid2_satellite_pane

0xc43b,	// (0x0004ce72) cell_blid2_satellite_pane_g1

0x49f5,	// (0x0004542c) cell_blid2_satellite_pane_t1

0x3975,	// (0x000443ac) blid2_speed_pane_g1

0x4a03,	// (0x0004543a) blid2_speed_pane_t1

0x4a11,	// (0x00045448) blid2_speed_pane_t2

0x0001,

0xfb71,	// (0x000505a8) blid2_speed_pane_t

0x3975,	// (0x000443ac) blid2_navig_ring_pane_g1

0xc444,	// (0x0004ce7b) blid2_navig_ring_pane_g2

0xc44c,	// (0x0004ce83) blid2_navig_ring_pane_g3

0xc454,	// (0x0004ce8b) blid2_navig_ring_pane_g4

0xc45c,	// (0x0004ce93) blid2_navig_ring_pane_g5

0x0004,

0xfb76,	// (0x000505ad) blid2_navig_ring_pane_g

0xdcd2,	// (0x0004e709) bg_popup_window_pane_cp011

0x4a1f,	// (0x00045456) popup_blid2_search_window_g1

0x4a27,	// (0x0004545e) popup_blid2_search_window_t1

0x4a35,	// (0x0004546c) popup_blid2_search_window_t2

0x0001,

0xfb81,	// (0x000505b8) popup_blid2_search_window_t

0xe76b,	// (0x0004f1a2) main_browser_pane_g1

0xe458,	// (0x0004ee8f) main_browser_pane_ParamLimits

0xb35c,	// (0x0004bd93) bg_button_pane_cp011_ParamLimits

0xb5bf,	// (0x0004bff6) cell_vitu2_function_pane_g1_ParamLimits

0xe7b3,	// (0x0004f1ea) bg_popup_sub_pane_cp22_ParamLimits

0xbe35,	// (0x0004c86c) input_focus_pane_cp08_ParamLimits

0xbe42,	// (0x0004c879) popup_vitu2_query_button_pane_ParamLimits

0xbe42,	// (0x0004c879) popup_vitu2_query_button_pane

0xbe19,	// (0x0004c850) popup_vitu2_query_input_button_pane

0x4617,	// (0x0004504e) popup_vitu2_query_window_g1_ParamLimits

0xbe53,	// (0x0004c88a) popup_vitu2_query_window_g2_ParamLimits

0xfa88,	// (0x000504bf) popup_vitu2_query_window_g_ParamLimits

0xdcd2,	// (0x0004e709) bg_button_pane_cp026

0xc464,	// (0x0004ce9b) popup_vitu2_query_input_button_pane_g1

0xdcd2,	// (0x0004e709) bg_button_pane_cp025

0x4a43,	// (0x0004547a) popup_vitu2_query_button_pane_t1

0x9ee8,	// (0x0004a91f) main_mp3_pane_t6

0x9ef6,	// (0x0004a92d) popup_slider_window_cp01

0xb28c,	// (0x0004bcc3) cam4_battery_pane

0xb28c,	// (0x0004bcc3) cam4_battery_pane_cp02

0xb28c,	// (0x0004bcc3) cam4_battery_pane_cp01

0xb28c,	// (0x0004bcc3) cam4_battery_pane_cp03

0x4a51,	// (0x00045488) cam4_battery_pane_g1

0x3975,	// (0x000443ac) cam4_battery_pane_g2

0x0001,

0xfb86,	// (0x000505bd) cam4_battery_pane_g

0x3847,	// (0x0004427e) popup_blid_sat_info2_window_t11

0x898b,	// (0x000493c2) aid_size_touch_mv_arrow_left_ParamLimits

0x1fa4,	// (0x000429db) aid_size_touch_mv_arrow_right_ParamLimits

0x1fdc,	// (0x00042a13) navi_pane_g1_ParamLimits

0x1fe8,	// (0x00042a1f) navi_pane_g2_ParamLimits

0x89a4,	// (0x000493db) navi_pane_g3_ParamLimits

0xf44c,	// (0x0004fe83) navi_pane_g_ParamLimits

0x89c9,	// (0x00049400) navi_pane_mv_t1_ParamLimits

0xa8ff,	// (0x0004b336) grid_imed_effect_pane_ParamLimits

0xe6a5,	// (0x0004f0dc) aid_placing_vt_slider_lsc

0xe6ad,	// (0x0004f0e4) aid_placing_vt_slider_prt

0xe7b3,	// (0x0004f1ea) bg_tb_trans_pane_cp01_ParamLimits

0x3ac4,	// (0x000444fb) popup_image_details_window_g1_ParamLimits

0x3ad7,	// (0x0004450e) popup_image_details_window_g2_ParamLimits

0x3aec,	// (0x00044523) popup_image_details_window_g3_ParamLimits

0x3aec,	// (0x00044523) popup_image_details_window_g3

0xf792,	// (0x000501c9) popup_image_details_window_g_ParamLimits

0x3b00,	// (0x00044537) popup_image_details_window_t1_ParamLimits

0x3b12,	// (0x00044549) popup_image_details_window_t2_ParamLimits

0x3b2b,	// (0x00044562) popup_image_details_window_t3_ParamLimits

0x3b3f,	// (0x00044576) popup_image_details_window_t4_ParamLimits

0x3b5a,	// (0x00044591) popup_image_details_window_t5_ParamLimits

0xf799,	// (0x000501d0) popup_image_details_window_t_ParamLimits

0xc0f5,	// (0x0004cb2c) cl_header_name_pane_ParamLimits

0xc0f5,	// (0x0004cb2c) cl_header_name_pane

0xc46c,	// (0x0004cea3) cl_header_name_pane_t1_ParamLimits

0xc46c,	// (0x0004cea3) cl_header_name_pane_t1

0xc483,	// (0x0004ceba) cl_header_name_pane_t2_ParamLimits

0xc483,	// (0x0004ceba) cl_header_name_pane_t2

0xc4ad,	// (0x0004cee4) cl_header_name_pane_t3_ParamLimits

0xc4ad,	// (0x0004cee4) cl_header_name_pane_t3

0x0002,

0xfb8b,	// (0x000505c2) cl_header_name_pane_t_ParamLimits

0xfb8b,	// (0x000505c2) cl_header_name_pane_t

0x206a,	// (0x00042aa1) navi_pane_mv_g2_ParamLimits

0x4317,	// (0x00044d4e) field_vitu2_entry_pane_g1_ParamLimits

0x4323,	// (0x00044d5a) field_vitu2_entry_pane_g2_ParamLimits

0x432f,	// (0x00044d66) field_vitu2_entry_pane_g3_ParamLimits

0x432f,	// (0x00044d66) field_vitu2_entry_pane_g3

0xf987,	// (0x000503be) field_vitu2_entry_pane_g_ParamLimits

0xb54f,	// (0x0004bf86) cell_vitu2_itu_pane_g1_ParamLimits

0xb55f,	// (0x0004bf96) cell_vitu2_itu_pane_g2_ParamLimits

0xb55f,	// (0x0004bf96) cell_vitu2_itu_pane_g2

0x0001,

0xf993,	// (0x000503ca) cell_vitu2_itu_pane_g_ParamLimits

0xf993,	// (0x000503ca) cell_vitu2_itu_pane_g

0xb35c,	// (0x0004bd93) bg_vkb2_func_pane_cp05_ParamLimits

0xb35c,	// (0x0004bd93) bg_vkb2_func_pane_cp05

0xb35c,	// (0x0004bd93) bg_vkb2_func_pane_cp03

0xb35c,	// (0x0004bd93) bg_vkb2_func_pane_cp04

0xb35c,	// (0x0004bd93) bg_vkb2_func_pane_cp10_ParamLimits

0xb35c,	// (0x0004bd93) bg_vkb2_func_pane_cp10

0xc09b,	// (0x0004cad2) bg_vkb2_func_pane_cp08

0xc082,	// (0x0004cab9) bg_vkb2_func_pane_cp06

0xc08f,	// (0x0004cac6) bg_vkb2_func_pane_cp07

0x4988,	// (0x000453bf) bg_vkb2_func_pane_cp11_ParamLimits

0x4988,	// (0x000453bf) bg_vkb2_func_pane_cp11

0x499d,	// (0x000453d4) bg_vkb2_func_pane_cp12_ParamLimits

0x499d,	// (0x000453d4) bg_vkb2_func_pane_cp12

0xdcd2,	// (0x0004e709) bg_vkb2_func_pane_cp09

0x4388,	// (0x00044dbf) bg_vkb2_func_pane_g1

0x18bb,	// (0x000422f2) bg_vkb2_func_pane_g2

0x4390,	// (0x00044dc7) bg_vkb2_func_pane_g3

0x4398,	// (0x00044dcf) bg_vkb2_func_pane_g4

0x45da,	// (0x00045011) bg_vkb2_func_pane_g5

0x43b0,	// (0x00044de7) bg_vkb2_func_pane_g6

0x43b8,	// (0x00044def) bg_vkb2_func_pane_g7

0x43a8,	// (0x00044ddf) bg_vkb2_func_pane_g8

0x189b,	// (0x000422d2) bg_vkb2_func_pane_g9

0x0008,

0xfb92,	// (0x000505c9) bg_vkb2_func_pane_g

0xc3c3,	// (0x0004cdfa) blid2_tripm_pane_g6_ParamLimits

0xc3c3,	// (0x0004cdfa) blid2_tripm_pane_g6

0x41db,	// (0x00044c12) mp4_progress_pane_g1

0xc417,	// (0x0004ce4e) blid2_tripm_values_pane_ParamLimits

0xc417,	// (0x0004ce4e) blid2_tripm_values_pane

0xc4d2,	// (0x0004cf09) blid2_tripm_values_pane_t1

0xc4e0,	// (0x0004cf17) blid2_tripm_values_pane_t2

0xc4ee,	// (0x0004cf25) blid2_tripm_values_pane_t3

0xc4fc,	// (0x0004cf33) blid2_tripm_values_pane_t4

0xc50a,	// (0x0004cf41) blid2_tripm_values_pane_t5

0xc518,	// (0x0004cf4f) blid2_tripm_values_pane_t6

0xc526,	// (0x0004cf5d) blid2_tripm_values_pane_t7

0xc534,	// (0x0004cf6b) blid2_tripm_values_pane_t8

0xc542,	// (0x0004cf79) blid2_tripm_values_pane_t9

0x0008,

0xfba5,	// (0x000505dc) blid2_tripm_values_pane_t

0x7af1,	// (0x00048528) call_video_pane_t1_ParamLimits

0x7b07,	// (0x0004853e) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x0004fd0c) call_video_pane_t_ParamLimits

0x8e40,	// (0x00049877) msg_header_pane_g1_ParamLimits

0x2254,	// (0x00042c8b) msg_header_pane_g2_ParamLimits

0x2254,	// (0x00042c8b) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x0004ff26) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x0004ff26) msg_header_pane_g

0xe458,	// (0x0004ee8f) main_clock2_pane_ParamLimits

0xa6bf,	// (0x0004b0f6) grid_clock2_toolbar_pane_ParamLimits

0xa6bf,	// (0x0004b0f6) grid_clock2_toolbar_pane

0xa6bf,	// (0x0004b0f6) listscroll_clock2_pane_ParamLimits

0xa6bf,	// (0x0004b0f6) listscroll_clock2_pane

0xa762,	// (0x0004b199) main_clock2_pane_t3_ParamLimits

0xa762,	// (0x0004b199) main_clock2_pane_t3

0xa774,	// (0x0004b1ab) main_clock2_pane_t4_ParamLimits

0xa774,	// (0x0004b1ab) main_clock2_pane_t4

0x4a5b,	// (0x00045492) cell_clock2_toolbar_pane

0x4a63,	// (0x0004549a) cell_clock2_toolbar_pane_cp01

0x4a63,	// (0x0004549a) cell_clock2_toolbar_pane_cp02

0x4a6b,	// (0x000454a2) cell_clock2_toolbar_pane_cp03

0x4a73,	// (0x000454aa) list_clock2_pane

0x1f0c,	// (0x00042943) scroll_pane_cp10

0x4a7b,	// (0x000454b2) list_single_clock2_pane_ParamLimits

0x4a7b,	// (0x000454b2) list_single_clock2_pane

0x20cb,	// (0x00042b02) list_highlight_pane_cp08

0x4a88,	// (0x000454bf) list_single_clock2_pane_t1

0x4a96,	// (0x000454cd) list_single_clock2_pane_t2

0x0001,

0xfbb8,	// (0x000505ef) list_single_clock2_pane_t

0xdcd2,	// (0x0004e709) bg_button_pane_cp10

0x4aa4,	// (0x000454db) cell_clock2_toolbar_pane_g1

0x8ea1,	// (0x000498d8) aid_main_viewer_pane_g1_ParamLimits

0x8ea1,	// (0x000498d8) aid_main_viewer_pane_g1

0x8ead,	// (0x000498e4) aid_main_viewer_pane_g2_ParamLimits

0x8ead,	// (0x000498e4) aid_main_viewer_pane_g2

0x8eb9,	// (0x000498f0) aid_main_viewer_pane_g3_ParamLimits

0x8eb9,	// (0x000498f0) aid_main_viewer_pane_g3

0x8ec8,	// (0x000498ff) aid_main_viewer_pane_g4_ParamLimits

0x8ec8,	// (0x000498ff) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x0004ff37) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x0004ff37) aid_main_viewer_pane_g

0x42f0,	// (0x00044d27) main_calc_pane_ParamLimits

0x954f,	// (0x00049f86) main_dialer2_pane_ParamLimits

0xdcd2,	// (0x0004e709) main_cam6_pane

0xdcd2,	// (0x0004e709) main_vid6_pane

0xa6cb,	// (0x0004b102) listscroll_gen_pane_cp06_ParamLimits

0xa6cb,	// (0x0004b102) listscroll_gen_pane_cp06

0xa786,	// (0x0004b1bd) main_clock2_pane_t5_ParamLimits

0xa786,	// (0x0004b1bd) main_clock2_pane_t5

0xa7cd,	// (0x0004b204) aid_call2_pane_cp10_ParamLimits

0xa7d9,	// (0x0004b210) aid_call_pane_cp10_ParamLimits

0x1f98,	// (0x000429cf) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1f98,	// (0x000429cf) popup_clock_analogue_window_cp10_g2_ParamLimits

0xa7e5,	// (0x0004b21c) popup_clock_analogue_window_cp10_g3_ParamLimits

0xa7e5,	// (0x0004b21c) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1f98,	// (0x000429cf) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf849,	// (0x00050280) popup_clock_analogue_window_cp10_g_ParamLimits

0xa7f1,	// (0x0004b228) popup_clock_analogue_window_cp10_t1_ParamLimits

0x423b,	// (0x00044c72) cell_dialer2_keypad_pane_g2_ParamLimits

0x423b,	// (0x00044c72) cell_dialer2_keypad_pane_g2

0x0001,

0xf92f,	// (0x00050366) cell_dialer2_keypad_pane_g_ParamLimits

0xf92f,	// (0x00050366) cell_dialer2_keypad_pane_g

0xaf3f,	// (0x0004b976) cell_dialer2_keypad_pane_t1

0xb84c,	// (0x0004c283) main_cset_text2_pane_ParamLimits

0xb84c,	// (0x0004c283) main_cset_text2_pane

0x47f1,	// (0x00045228) area_vitu2_query_pane_g1_ParamLimits

0xc027,	// (0x0004ca5e) area_vitu2_query_pane_g2_ParamLimits

0xfad5,	// (0x0005050c) area_vitu2_query_pane_g_ParamLimits

0x4875,	// (0x000452ac) area_vitu2_query_pane_t7_ParamLimits

0x4875,	// (0x000452ac) area_vitu2_query_pane_t7

0xc082,	// (0x0004cab9) bg_button_pane_cp018_ParamLimits

0xc08f,	// (0x0004cac6) bg_button_pane_cp021_ParamLimits

0xc09b,	// (0x0004cad2) bg_button_pane_cp022_ParamLimits

0xc09b,	// (0x0004cad2) bg_vkb2_func_pane_cp08_ParamLimits

0xc082,	// (0x0004cab9) bg_vkb2_func_pane_cp06_ParamLimits

0xc08f,	// (0x0004cac6) bg_vkb2_func_pane_cp07_ParamLimits

0xc0aa,	// (0x0004cae1) input_focus_pane_cp09_ParamLimits

0xc550,	// (0x0004cf87) cam6_autofocus_pane_ParamLimits

0xc550,	// (0x0004cf87) cam6_autofocus_pane

0xc56c,	// (0x0004cfa3) cam6_image_uncrop_pane_ParamLimits

0xc56c,	// (0x0004cfa3) cam6_image_uncrop_pane

0xc58f,	// (0x0004cfc6) cam6_indi_pane_ParamLimits

0xc58f,	// (0x0004cfc6) cam6_indi_pane

0xc5a9,	// (0x0004cfe0) cam6_mode_pane_ParamLimits

0xc5a9,	// (0x0004cfe0) cam6_mode_pane

0xc5bd,	// (0x0004cff4) cam6_timer_pane_ParamLimits

0xc5bd,	// (0x0004cff4) cam6_timer_pane

0xc5c9,	// (0x0004d000) cam6_zoom_pane_ParamLimits

0xc5c9,	// (0x0004d000) cam6_zoom_pane

0xc5df,	// (0x0004d016) cam6_mode_pane_g1_ParamLimits

0xc5df,	// (0x0004d016) cam6_mode_pane_g1

0xc5eb,	// (0x0004d022) cam6_mode_pane_g2_ParamLimits

0xc5eb,	// (0x0004d022) cam6_mode_pane_g2

0xc5f7,	// (0x0004d02e) cam6_mode_pane_g3_ParamLimits

0xc5f7,	// (0x0004d02e) cam6_mode_pane_g3

0xc603,	// (0x0004d03a) cam6_mode_pane_g4_ParamLimits

0xc603,	// (0x0004d03a) cam6_mode_pane_g4

0x0003,

0xfbbd,	// (0x000505f4) cam6_mode_pane_g_ParamLimits

0xfbbd,	// (0x000505f4) cam6_mode_pane_g

0x4aac,	// (0x000454e3) bg_tb_trans_pane_cp08_ParamLimits

0x4aac,	// (0x000454e3) bg_tb_trans_pane_cp08

0x4aba,	// (0x000454f1) cam6_battery_pane_ParamLimits

0x4aba,	// (0x000454f1) cam6_battery_pane

0x4ad0,	// (0x00045507) cam6_indi_pane_g1_ParamLimits

0x4ad0,	// (0x00045507) cam6_indi_pane_g1

0x4ae2,	// (0x00045519) cam6_indi_pane_g2_ParamLimits

0x4ae2,	// (0x00045519) cam6_indi_pane_g2

0x4af4,	// (0x0004552b) cam6_indi_pane_g3_ParamLimits

0x4af4,	// (0x0004552b) cam6_indi_pane_g3

0x0002,

0xfbc6,	// (0x000505fd) cam6_indi_pane_g_ParamLimits

0xfbc6,	// (0x000505fd) cam6_indi_pane_g

0x4b06,	// (0x0004553d) cam6_indi_pane_t1_ParamLimits

0x4b06,	// (0x0004553d) cam6_indi_pane_t1

0xb3c9,	// (0x0004be00) cam6_autofocus_pane_g1

0xb3c1,	// (0x0004bdf8) cam6_autofocus_pane_g2

0xb3d9,	// (0x0004be10) cam6_autofocus_pane_g3

0xb3d1,	// (0x0004be08) cam6_autofocus_pane_g4

0x0003,

0xfbcd,	// (0x00050604) cam6_autofocus_pane_g

0x4b2c,	// (0x00045563) cam6_timer_pane_g1

0x4b34,	// (0x0004556b) cam6_timer_pane_t1

0x4b42,	// (0x00045579) cam6_zoom_cont_pane

0x4b4a,	// (0x00045581) cam6_zoom_pane_g1

0x4b52,	// (0x00045589) cam6_zoom_pane_g2

0xc60f,	// (0x0004d046) cam6_zoom_pane_g3

0x0002,

0xfbd6,	// (0x0005060d) cam6_zoom_pane_g

0x3975,	// (0x000443ac) cam6_battery_pane_g1

0x3975,	// (0x000443ac) cam6_battery_pane_g2

0x0001,

0xf756,	// (0x0005018d) cam6_battery_pane_g

0x4b5a,	// (0x00045591) cam6_zoom_cont_pane_g1

0x4b63,	// (0x0004559a) cam6_zoom_cont_pane_g2

0x4b6c,	// (0x000455a3) cam6_zoom_cont_pane_g3

0x0002,

0xfbdd,	// (0x00050614) cam6_zoom_cont_pane_g

0xc62c,	// (0x0004d063) cam6_mode_pane_cp_ParamLimits

0xc62c,	// (0x0004d063) cam6_mode_pane_cp

0xc640,	// (0x0004d077) cam6_zoom_pane_cp_ParamLimits

0xc640,	// (0x0004d077) cam6_zoom_pane_cp

0xc656,	// (0x0004d08d) vid6_image_uncrop_cif_pane_ParamLimits

0xc656,	// (0x0004d08d) vid6_image_uncrop_cif_pane

0xc678,	// (0x0004d0af) vid6_image_uncrop_nhd_pane_ParamLimits

0xc678,	// (0x0004d0af) vid6_image_uncrop_nhd_pane

0xc68f,	// (0x0004d0c6) vid6_image_uncrop_vga_pane_ParamLimits

0xc68f,	// (0x0004d0c6) vid6_image_uncrop_vga_pane

0xc6a6,	// (0x0004d0dd) vid6_image_uncrop_wvga_pane_ParamLimits

0xc6a6,	// (0x0004d0dd) vid6_image_uncrop_wvga_pane

0xc6bd,	// (0x0004d0f4) vid6_indi_pane_ParamLimits

0xc6bd,	// (0x0004d0f4) vid6_indi_pane

0x4aac,	// (0x000454e3) bg_tb_trans_pane_cp09_ParamLimits

0x4aac,	// (0x000454e3) bg_tb_trans_pane_cp09

0x4b80,	// (0x000455b7) cam6_battery_pane_cp_ParamLimits

0x4b80,	// (0x000455b7) cam6_battery_pane_cp

0x4b8c,	// (0x000455c3) vid6_indi_pane_g1_ParamLimits

0x4b8c,	// (0x000455c3) vid6_indi_pane_g1

0x4b9e,	// (0x000455d5) vid6_indi_pane_g2_ParamLimits

0x4b9e,	// (0x000455d5) vid6_indi_pane_g2

0x4bb0,	// (0x000455e7) vid6_indi_pane_g3_ParamLimits

0x4bb0,	// (0x000455e7) vid6_indi_pane_g3

0x4bc5,	// (0x000455fc) vid6_indi_pane_g4_ParamLimits

0x4bc5,	// (0x000455fc) vid6_indi_pane_g4

0x4bda,	// (0x00045611) vid6_indi_pane_g5_ParamLimits

0x4bda,	// (0x00045611) vid6_indi_pane_g5

0x0004,

0xfbe4,	// (0x0005061b) vid6_indi_pane_g_ParamLimits

0xfbe4,	// (0x0005061b) vid6_indi_pane_g

0x4bf4,	// (0x0004562b) vid6_indi_pane_t1_ParamLimits

0x4bf4,	// (0x0004562b) vid6_indi_pane_t1

0x4c0a,	// (0x00045641) vid6_indi_pane_t2_ParamLimits

0x4c0a,	// (0x00045641) vid6_indi_pane_t2

0x4c32,	// (0x00045669) vid6_indi_pane_t3_ParamLimits

0x4c32,	// (0x00045669) vid6_indi_pane_t3

0x4c5a,	// (0x00045691) vid6_indi_pane_t4_ParamLimits

0x4c5a,	// (0x00045691) vid6_indi_pane_t4

0x0003,

0xfbef,	// (0x00050626) vid6_indi_pane_t_ParamLimits

0xfbef,	// (0x00050626) vid6_indi_pane_t

0x4c7e,	// (0x000456b5) wait_bar_pane_cp08

0xc6dd,	// (0x0004d114) main_cset_text2_pane_t1_ParamLimits

0xc6dd,	// (0x0004d114) main_cset_text2_pane_t1

0xc617,	// (0x0004d04e) listscroll_gen_pane_cp06_t1_ParamLimits

0xc617,	// (0x0004d04e) listscroll_gen_pane_cp06_t1

0xdcd2,	// (0x0004e709) main_cam6_set_pane

0xb27e,	// (0x0004bcb5) bg_tb_trans_pane_cp06_ParamLimits

0xb294,	// (0x0004bccb) cam4_indicators_pane_g1_ParamLimits

0xb2a4,	// (0x0004bcdb) cam4_indicators_pane_g2_ParamLimits

0xf963,	// (0x0005039a) cam4_indicators_pane_g_ParamLimits

0xb2c4,	// (0x0004bcfb) cam4_indicators_pane_t1_ParamLimits

0xb35c,	// (0x0004bd93) bg_tb_trans_pane_cp07_ParamLimits

0xb294,	// (0x0004bccb) vid4_indicators_pane_g1_ParamLimits

0xb36a,	// (0x0004bda1) vid4_indicators_pane_g2_ParamLimits

0xb37a,	// (0x0004bdb1) vid4_indicators_pane_g3_ParamLimits

0xb38b,	// (0x0004bdc2) vid4_indicators_pane_g4_ParamLimits

0xf975,	// (0x000503ac) vid4_indicators_pane_g_ParamLimits

0xb3a7,	// (0x0004bdde) vid4_indicators_pane_t1_ParamLimits

0xc1c9,	// (0x0004cc00) vid4_progress_pane_g1_ParamLimits

0xc1d8,	// (0x0004cc0f) vid4_progress_pane_g2_ParamLimits

0xc1e7,	// (0x0004cc1e) vid4_progress_pane_g3_ParamLimits

0xc1f6,	// (0x0004cc2d) vid4_progress_pane_g4_ParamLimits

0xfb20,	// (0x00050557) vid4_progress_pane_g_ParamLimits

0xc20e,	// (0x0004cc45) vid4_progress_pane_t1_ParamLimits

0xc224,	// (0x0004cc5b) vid4_progress_pane_t2_ParamLimits

0xc239,	// (0x0004cc70) vid4_progress_pane_t3_ParamLimits

0xfb2b,	// (0x00050562) vid4_progress_pane_t_ParamLimits

0xc24e,	// (0x0004cc85) wait_bar_pane_cp07_ParamLimits

0xc6f9,	// (0x0004d130) main_cam6_set_pane_g2_ParamLimits

0xc6f9,	// (0x0004d130) main_cam6_set_pane_g2

0xc705,	// (0x0004d13c) main_cset6_listscroll_pane_ParamLimits

0xc705,	// (0x0004d13c) main_cset6_listscroll_pane

0xc72e,	// (0x0004d165) main_cset6_slider_pane_ParamLimits

0xc72e,	// (0x0004d165) main_cset6_slider_pane

0xc73a,	// (0x0004d171) main_cset6_text2_pane_ParamLimits

0xc73a,	// (0x0004d171) main_cset6_text2_pane

0x4c8e,	// (0x000456c5) main_cset6_text_pane

0x447e,	// (0x00044eb5) main_cset_list_pane_copy1_ParamLimits

0x447e,	// (0x00044eb5) main_cset_list_pane_copy1

0x448e,	// (0x00044ec5) scroll_pane_cp028_copy1

0xc74d,	// (0x0004d184) cset_list_set_pane_copy1

0xbb07,	// (0x0004c53e) aid_position_infowindow_above_copy1

0xbb0f,	// (0x0004c546) aid_position_infowindow_below_copy1

0xc75c,	// (0x0004d193) cset_list_set_pane_g1_copy1

0xc764,	// (0x0004d19b) cset_list_set_pane_g3_copy1_ParamLimits

0xc764,	// (0x0004d19b) cset_list_set_pane_g3_copy1

0xc773,	// (0x0004d1aa) cset_list_set_pane_t1_copy1_ParamLimits

0xc773,	// (0x0004d1aa) cset_list_set_pane_t1_copy1

0xe7b3,	// (0x0004f1ea) list_highlight_pane_cp021_copy1_ParamLimits

0xe7b3,	// (0x0004f1ea) list_highlight_pane_cp021_copy1

0x4c96,	// (0x000456cd) cset6_slider_pane_ParamLimits

0x4c96,	// (0x000456cd) cset6_slider_pane

0x4cc2,	// (0x000456f9) main_cset6_slider_pane_g1_ParamLimits

0x4cc2,	// (0x000456f9) main_cset6_slider_pane_g1

0xc788,	// (0x0004d1bf) main_cset6_slider_pane_g2_ParamLimits

0xc788,	// (0x0004d1bf) main_cset6_slider_pane_g2

0x44a3,	// (0x00044eda) main_cset6_slider_pane_g3_ParamLimits

0x44a3,	// (0x00044eda) main_cset6_slider_pane_g3

0xc7b0,	// (0x0004d1e7) main_cset6_slider_pane_g4_ParamLimits

0xc7b0,	// (0x0004d1e7) main_cset6_slider_pane_g4

0xc7bc,	// (0x0004d1f3) main_cset6_slider_pane_g5_ParamLimits

0xc7bc,	// (0x0004d1f3) main_cset6_slider_pane_g5

0x44a3,	// (0x00044eda) main_cset6_slider_pane_g7_ParamLimits

0x44a3,	// (0x00044eda) main_cset6_slider_pane_g7

0x44af,	// (0x00044ee6) main_cset6_slider_pane_g8_ParamLimits

0x44af,	// (0x00044ee6) main_cset6_slider_pane_g8

0xc7c8,	// (0x0004d1ff) main_cset6_slider_pane_g9_ParamLimits

0xc7c8,	// (0x0004d1ff) main_cset6_slider_pane_g9

0xc7d4,	// (0x0004d20b) main_cset6_slider_pane_g10_ParamLimits

0xc7d4,	// (0x0004d20b) main_cset6_slider_pane_g10

0xc7b0,	// (0x0004d1e7) main_cset6_slider_pane_g11_ParamLimits

0xc7b0,	// (0x0004d1e7) main_cset6_slider_pane_g11

0xc7e0,	// (0x0004d217) main_cset6_slider_pane_g12_ParamLimits

0xc7e0,	// (0x0004d217) main_cset6_slider_pane_g12

0xc7ec,	// (0x0004d223) main_cset6_slider_pane_g13_ParamLimits

0xc7ec,	// (0x0004d223) main_cset6_slider_pane_g13

0xc7f8,	// (0x0004d22f) main_cset6_slider_pane_g14_ParamLimits

0xc7f8,	// (0x0004d22f) main_cset6_slider_pane_g14

0xc804,	// (0x0004d23b) main_cset6_slider_pane_g15_ParamLimits

0xc804,	// (0x0004d23b) main_cset6_slider_pane_g15

0xc7bc,	// (0x0004d1f3) main_cset6_slider_pane_g16_ParamLimits

0xc7bc,	// (0x0004d1f3) main_cset6_slider_pane_g16

0xc81c,	// (0x0004d253) main_cset6_slider_pane_g17_ParamLimits

0xc81c,	// (0x0004d253) main_cset6_slider_pane_g17

0x0011,

0xfbf8,	// (0x0005062f) main_cset6_slider_pane_g_ParamLimits

0xfbf8,	// (0x0005062f) main_cset6_slider_pane_g

0x4cea,	// (0x00045721) main_cset6_slider_pane_t1_ParamLimits

0x4cea,	// (0x00045721) main_cset6_slider_pane_t1

0xc828,	// (0x0004d25f) main_cset6_slider_pane_t2_ParamLimits

0xc828,	// (0x0004d25f) main_cset6_slider_pane_t2

0x4d2b,	// (0x00045762) main_cset6_slider_pane_t3_ParamLimits

0x4d2b,	// (0x00045762) main_cset6_slider_pane_t3

0xc853,	// (0x0004d28a) main_cset6_slider_pane_t4_ParamLimits

0xc853,	// (0x0004d28a) main_cset6_slider_pane_t4

0x4d56,	// (0x0004578d) main_cset6_slider_pane_t5_ParamLimits

0x4d56,	// (0x0004578d) main_cset6_slider_pane_t5

0x4d81,	// (0x000457b8) main_cset6_slider_pane_t7_ParamLimits

0x4d81,	// (0x000457b8) main_cset6_slider_pane_t7

0xc87e,	// (0x0004d2b5) main_cset6_slider_pane_t8_ParamLimits

0xc87e,	// (0x0004d2b5) main_cset6_slider_pane_t8

0xc8a2,	// (0x0004d2d9) main_cset6_slider_pane_t9_ParamLimits

0xc8a2,	// (0x0004d2d9) main_cset6_slider_pane_t9

0xc8c6,	// (0x0004d2fd) main_cset6_slider_pane_t10_ParamLimits

0xc8c6,	// (0x0004d2fd) main_cset6_slider_pane_t10

0xc8ea,	// (0x0004d321) main_cset6_slider_pane_t11_ParamLimits

0xc8ea,	// (0x0004d321) main_cset6_slider_pane_t11

0x4db7,	// (0x000457ee) main_cset6_slider_pane_t14_ParamLimits

0x4db7,	// (0x000457ee) main_cset6_slider_pane_t14

0x4df0,	// (0x00045827) main_cset6_slider_pane_t15_ParamLimits

0x4df0,	// (0x00045827) main_cset6_slider_pane_t15

0x000b,

0xfc1d,	// (0x00050654) main_cset6_slider_pane_t_ParamLimits

0xfc1d,	// (0x00050654) main_cset6_slider_pane_t

0x4588,	// (0x00044fbf) cset_slider_pane_g1_copy1

0x4591,	// (0x00044fc8) cset_slider_pane_g2_copy1

0x459a,	// (0x00044fd1) cset_slider_pane_g3_copy1

0xdcd2,	// (0x0004e709) bg_popup_sub_pane_cp011_copy1

0x4623,	// (0x0004505a) main_cset_text_pane_g1_copy1

0x462b,	// (0x00045062) main_cset_text_pane_t1_copy1

0x4639,	// (0x00045070) main_cset_text_pane_t2_copy1

0x4647,	// (0x0004507e) main_cset_text_pane_t3_copy1

0x4655,	// (0x0004508c) main_cset_text_pane_t4_copy1

0x4663,	// (0x0004509a) main_cset_text_pane_t5_copy1

0x4671,	// (0x000450a8) main_cset_text_pane_t6_copy1

0x467f,	// (0x000450b6) main_cset_text_pane_t7_copy1

0xc90e,	// (0x0004d345) main_cset_text2_pane_t1_copy1

0xdcd2,	// (0x0004e709) main_ncimui_pane

0x958a,	// (0x00049fc1) popup_query_ncimui_window_ParamLimits

0x958a,	// (0x00049fc1) popup_query_ncimui_window

0x3c45,	// (0x0004467c) field_cale_ev2_pane_g4_ParamLimits

0x3c45,	// (0x0004467c) field_cale_ev2_pane_g4

0xac73,	// (0x0004b6aa) cell_video_dialer_keypad_pane_g2_ParamLimits

0xac73,	// (0x0004b6aa) cell_video_dialer_keypad_pane_g2

0x0001,

0xf90a,	// (0x00050341) cell_video_dialer_keypad_pane_g_ParamLimits

0xf90a,	// (0x00050341) cell_video_dialer_keypad_pane_g

0xac8b,	// (0x0004b6c2) cell_video_dialer_keypad_pane_t1

0xdcd2,	// (0x0004e709) bg_popup_window_pane_cp012

0x1de5,	// (0x0004281c) heading_pane_cp06

0x4f12,	// (0x00045949) ncim_query_content_pane

0xdcd2,	// (0x0004e709) bg_popup_heading_pane_cp01

0x4f1a,	// (0x00045951) ncim_heading_pane_t1

0x4f28,	// (0x0004595f) ncim_indicator_popup_pane

0x4f3a,	// (0x00045971) ncim_query_button_pane

0x4f4e,	// (0x00045985) ncim_query_content_pane_t1

0x4f60,	// (0x00045997) ncim_query_content_pane_t2

0x0005,

0xfc5c,	// (0x00050693) ncim_query_content_pane_t

0x4f9a,	// (0x000459d1) ncim_query_list_pane

0x4fac,	// (0x000459e3) ncim_query_popup_pane

0x4f28,	// (0x0004595f) ncim_indicator_popup_pane_ParamLimits

0xc9ef,	// (0x0004d426) ncim_query_content_pane_g1_ParamLimits

0xc9ef,	// (0x0004d426) ncim_query_content_pane_g1

0x4f4e,	// (0x00045985) ncim_query_content_pane_t1_ParamLimits

0x4f60,	// (0x00045997) ncim_query_content_pane_t2_ParamLimits

0xc9fb,	// (0x0004d432) ncim_query_content_pane_t3_ParamLimits

0xc9fb,	// (0x0004d432) ncim_query_content_pane_t3

0xca18,	// (0x0004d44f) ncim_query_content_pane_t4_ParamLimits

0xca18,	// (0x0004d44f) ncim_query_content_pane_t4

0xca35,	// (0x0004d46c) ncim_query_content_pane_t5_ParamLimits

0xca35,	// (0x0004d46c) ncim_query_content_pane_t5

0x4f72,	// (0x000459a9) ncim_query_content_pane_t6_ParamLimits

0x4f72,	// (0x000459a9) ncim_query_content_pane_t6

0xfc5c,	// (0x00050693) ncim_query_content_pane_t_ParamLimits

0x4f9a,	// (0x000459d1) ncim_query_list_pane_ParamLimits

0x4fac,	// (0x000459e3) ncim_query_popup_pane_ParamLimits

0x4fc0,	// (0x000459f7) wait_bar_pane_cp04

0xdcd2,	// (0x0004e709) input_focus_pane_cp011

0x4fc8,	// (0x000459ff) ncim_query_popup_pane_t1

0x4fd6,	// (0x00045a0d) ncim_list_query_list_pane_ParamLimits

0x4fd6,	// (0x00045a0d) ncim_list_query_list_pane

0xdcd2,	// (0x0004e709) bg_button_pane_cp027

0x4fe9,	// (0x00045a20) ncim_query_button_pane_g1

0xdcd2,	// (0x0004e709) list_highlight_pane_cp012

0x4ff3,	// (0x00045a2a) ncim_list_query_list_pane_g1

0x4ffb,	// (0x00045a32) ncim_list_query_list_pane_t1

0xb2b4,	// (0x0004bceb) cam4_indicators_pane_g3_ParamLimits

0xb2b4,	// (0x0004bceb) cam4_indicators_pane_g3

0xb397,	// (0x0004bdce) vid4_indicators_pane_g5_ParamLimits

0xb397,	// (0x0004bdce) vid4_indicators_pane_g5

0xc202,	// (0x0004cc39) vid4_progress_pane_g5_ParamLimits

0xc202,	// (0x0004cc39) vid4_progress_pane_g5

0xc939,	// (0x0004d370) main_ncimui_pane_g1

0xc97f,	// (0x0004d3b6) ncimui_group_query_pane_ParamLimits

0xc97f,	// (0x0004d3b6) ncimui_group_query_pane

0xc9b3,	// (0x0004d3ea) ncimui_list_pane_ParamLimits

0xc9b3,	// (0x0004d3ea) ncimui_list_pane

0xc9cb,	// (0x0004d402) ncimui_text_pane_ParamLimits

0xc9cb,	// (0x0004d402) ncimui_text_pane

0xca52,	// (0x0004d489) ncimui_text_pane_t1_ParamLimits

0xca52,	// (0x0004d489) ncimui_text_pane_t1

0x5009,	// (0x00045a40) ncimui_list_single_graphic_pane_ParamLimits

0x5009,	// (0x00045a40) ncimui_list_single_graphic_pane

0xca70,	// (0x0004d4a7) ncimui_query_pane_ParamLimits

0xca70,	// (0x0004d4a7) ncimui_query_pane

0xdcd2,	// (0x0004e709) list_highlight_pane_cp013

0x5016,	// (0x00045a4d) ncim_list_query_list_pane_t1_copy1

0x5024,	// (0x00045a5b) ncim_list_single_graphic_pane_g1

0x502c,	// (0x00045a63) ncim_query_button_pane_cp01

0x5034,	// (0x00045a6b) ncim_query_entry_pane_ParamLimits

0x5034,	// (0x00045a6b) ncim_query_entry_pane

0x5044,	// (0x00045a7b) ncimui_query_pane_g1

0x504c,	// (0x00045a83) ncimui_query_pane_t1_ParamLimits

0x504c,	// (0x00045a83) ncimui_query_pane_t1

0xdcd2,	// (0x0004e709) input_focus_pane_cp012

0x4fc8,	// (0x000459ff) ncim_query_entry_pane_t1

0xe458,	// (0x0004ee8f) main_im_pane_ParamLimits

0xe7b3,	// (0x0004f1ea) main_mobtv_pane_ParamLimits

0xe7b3,	// (0x0004f1ea) main_mobtv_pane

0xc7c8,	// (0x0004d1ff) main_cset6_slider_pane_g18_ParamLimits

0xc7c8,	// (0x0004d1ff) main_cset6_slider_pane_g18

0xc7ec,	// (0x0004d223) main_cset6_slider_pane_g19_ParamLimits

0xc7ec,	// (0x0004d223) main_cset6_slider_pane_g19

0x432f,	// (0x00044d66) bg_main_mobtv_pane_ParamLimits

0x432f,	// (0x00044d66) bg_main_mobtv_pane

0xca80,	// (0x0004d4b7) main_mobtv_info_pane

0xca89,	// (0x0004d4c0) main_mobtv_loading_pane_ParamLimits

0xca89,	// (0x0004d4c0) main_mobtv_loading_pane

0x5070,	// (0x00045aa7) main_mobtv_pg_channel_list_pane

0x507a,	// (0x00045ab1) main_mobtv_pg_hdr_pane

0xca96,	// (0x0004d4cd) main_mobtv_programe_curr_pane_ParamLimits

0xca96,	// (0x0004d4cd) main_mobtv_programe_curr_pane

0xcaa3,	// (0x0004d4da) main_mobtv_programe_next_pane_ParamLimits

0xcaa3,	// (0x0004d4da) main_mobtv_programe_next_pane

0x5083,	// (0x00045aba) popup_mobtv_noti_window

0x3975,	// (0x000443ac) main_tv_pg_hdr_pane_g1

0x508b,	// (0x00045ac2) main_tv_pg_hdr_pane_g2

0x5093,	// (0x00045aca) main_tv_pg_hdr_pane_g3

0x509b,	// (0x00045ad2) main_tv_pg_hdr_pane_g4

0x50a3,	// (0x00045ada) main_tv_pg_hdr_pane_g5

0x50ab,	// (0x00045ae2) main_tv_pg_hdr_pane_g6

0x50b3,	// (0x00045aea) main_tv_pg_hdr_pane_g7

0x50bb,	// (0x00045af2) main_tv_pg_hdr_pane_g8

0x50c3,	// (0x00045afa) main_tv_pg_hdr_pane_g9

0x50cb,	// (0x00045b02) main_tv_pg_hdr_pane_g10

0x50d5,	// (0x00045b0c) main_tv_pg_hdr_pane_g11

0x000a,

0xfc69,	// (0x000506a0) main_tv_pg_hdr_pane_g

0x50df,	// (0x00045b16) main_tv_pg_hdr_pane_t1

0x50ed,	// (0x00045b24) main_tv_pg_hdr_pane_t2

0x50fb,	// (0x00045b32) main_tv_pg_hdr_pane_t3

0x5109,	// (0x00045b40) main_tv_pg_hdr_pane_t4

0x5117,	// (0x00045b4e) main_tv_pg_hdr_pane_t5

0x0004,

0xfc80,	// (0x000506b7) main_tv_pg_hdr_pane_t

0x5125,	// (0x00045b5c) single_mobtv_pg_channel_pane_ParamLimits

0x5125,	// (0x00045b5c) single_mobtv_pg_channel_pane

0x5137,	// (0x00045b6e) single_mobtv_pg_channel_table_pane

0x5140,	// (0x00045b77) single_mobtv_pg_channel_thumb_pane

0x5149,	// (0x00045b80) single_tv_pg_channel_pane_g1

0x5152,	// (0x00045b89) single_tv_pg_channel_pane_g2

0x0001,

0xfc8b,	// (0x000506c2) single_tv_pg_channel_pane_g

0x3ba4,	// (0x000445db) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x3ba4,	// (0x000445db) bg_single_mobtv_pg_channel_thumb_pane

0x515b,	// (0x00045b92) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x515b,	// (0x00045b92) single_mobtv_pg_channel_thumb_pane_g1

0x5169,	// (0x00045ba0) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x5169,	// (0x00045ba0) single_mobtv_pg_channel_thumb_pane_g2

0x5175,	// (0x00045bac) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x5175,	// (0x00045bac) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc90,	// (0x000506c7) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc90,	// (0x000506c7) single_mobtv_pg_channel_thumb_pane_g

0x5181,	// (0x00045bb8) single_mobtv_pg_channel_thumb_pane_t1

0x518f,	// (0x00045bc6) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc97,	// (0x000506ce) single_mobtv_pg_channel_thumb_pane_t

0x3975,	// (0x000443ac) bg_single_mobtv_pg_channel_table_pane_g1

0x3975,	// (0x000443ac) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf756,	// (0x0005018d) bg_single_mobtv_pg_channel_table_pane_g

0x519d,	// (0x00045bd4) single_mobtv_pg_channel_table_pane_t1

0x51ab,	// (0x00045be2) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc9c,	// (0x000506d3) single_mobtv_pg_channel_table_pane_t

0xcab8,	// (0x0004d4ef) main_mobtv_info_pane_g1_ParamLimits

0xcab8,	// (0x0004d4ef) main_mobtv_info_pane_g1

0xcad4,	// (0x0004d50b) main_mobtv_info_pane_t1_ParamLimits

0xcad4,	// (0x0004d50b) main_mobtv_info_pane_t1

0xcb3a,	// (0x0004d571) main_mobtv_info_pane_t2_ParamLimits

0xcb3a,	// (0x0004d571) main_mobtv_info_pane_t2

0x0002,

0xfca6,	// (0x000506dd) main_mobtv_info_pane_t_ParamLimits

0xfca6,	// (0x000506dd) main_mobtv_info_pane_t

0xcbbd,	// (0x0004d5f4) wait_bar_pane_cp05

0xcbcd,	// (0x0004d604) main_mobtv_loading_pane_g1_ParamLimits

0xcbcd,	// (0x0004d604) main_mobtv_loading_pane_g1

0xcbd9,	// (0x0004d610) main_mobtv_loading_pane_g2_ParamLimits

0xcbd9,	// (0x0004d610) main_mobtv_loading_pane_g2

0xcbe5,	// (0x0004d61c) main_mobtv_loading_pane_g3_ParamLimits

0xcbe5,	// (0x0004d61c) main_mobtv_loading_pane_g3

0x0002,

0xfcad,	// (0x000506e4) main_mobtv_loading_pane_g_ParamLimits

0xfcad,	// (0x000506e4) main_mobtv_loading_pane_g

0x51b9,	// (0x00045bf0) main_mobtv_loading_pane_t1_ParamLimits

0x51b9,	// (0x00045bf0) main_mobtv_loading_pane_t1

0x51d1,	// (0x00045c08) main_mobtv_loading_pane_t2_ParamLimits

0x51d1,	// (0x00045c08) main_mobtv_loading_pane_t2

0x0001,

0xfcb4,	// (0x000506eb) main_mobtv_loading_pane_t_ParamLimits

0xfcb4,	// (0x000506eb) main_mobtv_loading_pane_t

0xcbf1,	// (0x0004d628) wait_bar_pane_cp06_ParamLimits

0xcbf1,	// (0x0004d628) wait_bar_pane_cp06

0x51f5,	// (0x00045c2c) main_mobtv_programe_curr_pane_t1

0x5203,	// (0x00045c3a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfcb9,	// (0x000506f0) main_mobtv_programe_curr_pane_t

0x5211,	// (0x00045c48) main_mobtv_programe_next_pane_t1

0x521f,	// (0x00045c56) main_mobtv_programe_next_pane_t2

0x522d,	// (0x00045c64) main_mobtv_programe_next_pane_t3

0x0002,

0xfcbe,	// (0x000506f5) main_mobtv_programe_next_pane_t

0xdcd2,	// (0x0004e709) bg_popup_mobtv_noti_window_pane

0x523b,	// (0x00045c72) popup_mobtv_noti_window_g1

0x5243,	// (0x00045c7a) popup_mobtv_noti_window_t1

0x5251,	// (0x00045c88) popup_mobtv_noti_window_t2

0x0001,

0xfcc5,	// (0x000506fc) popup_mobtv_noti_window_t

0x3975,	// (0x000443ac) bg_popup_mobtv_noti_window_pane_g1

0xdcd2,	// (0x0004e709) sc_clock_pane

0xdcd2,	// (0x0004e709) main_fs_bigclock_pane

0xc405,	// (0x0004ce3c) blid2_tripm_pane_t4_ParamLimits

0xc405,	// (0x0004ce3c) blid2_tripm_pane_t4

0xcbfd,	// (0x0004d634) sc_clock_pane_g1_ParamLimits

0xcbfd,	// (0x0004d634) sc_clock_pane_g1

0xcc0b,	// (0x0004d642) sc_clock_pane_t1_ParamLimits

0xcc0b,	// (0x0004d642) sc_clock_pane_t1

0xcc1e,	// (0x0004d655) sc_clock_pane_t2_ParamLimits

0xcc1e,	// (0x0004d655) sc_clock_pane_t2

0xcc30,	// (0x0004d667) sc_clock_pane_t3_ParamLimits

0xcc30,	// (0x0004d667) sc_clock_pane_t3

0x0004,

0xfcca,	// (0x00050701) sc_clock_pane_t_ParamLimits

0xfcca,	// (0x00050701) sc_clock_pane_t

0xe941,	// (0x0004f378) main_fs_bigclock_indicator_pane_ParamLimits

0xe941,	// (0x0004f378) main_fs_bigclock_indicator_pane

0xcca8,	// (0x0004d6df) main_fs_bigclock_pane_g1_ParamLimits

0xcca8,	// (0x0004d6df) main_fs_bigclock_pane_g1

0xe94d,	// (0x0004f384) main_fs_bigclock_pane_t1_ParamLimits

0xe94d,	// (0x0004f384) main_fs_bigclock_pane_t1

0xe95f,	// (0x0004f396) main_fs_bigclock_pane_t2_ParamLimits

0xe95f,	// (0x0004f396) main_fs_bigclock_pane_t2

0xe971,	// (0x0004f3a8) main_fs_bigclock_pane_t3_ParamLimits

0xe971,	// (0x0004f3a8) main_fs_bigclock_pane_t3

0x0002,

0xfec4,	// (0x000508fb) main_fs_bigclock_pane_t_ParamLimits

0xfec4,	// (0x000508fb) main_fs_bigclock_pane_t

0xe983,	// (0x0004f3ba) main_fs_bigclock_indicator_pane_g1

0x4f42,	// (0x00045979) ncim_query_content_pane_g2_ParamLimits

0x4f42,	// (0x00045979) ncim_query_content_pane_g2

0x0001,

0xfc57,	// (0x0005068e) ncim_query_content_pane_g_ParamLimits

0xfc57,	// (0x0005068e) ncim_query_content_pane_g

0xcc42,	// (0x0004d679) sc_clock_pane_t4_ParamLimits

0xcc42,	// (0x0004d679) sc_clock_pane_t4

0xe7b3,	// (0x0004f1ea) main_radioblah_pane

0x4292,	// (0x00044cc9) cell_call4_button_pane_t1_copy1_ParamLimits

0x4292,	// (0x00044cc9) cell_call4_button_pane_t1_copy1

0xc941,	// (0x0004d378) main_ncimui_pane_t1_ParamLimits

0xc941,	// (0x0004d378) main_ncimui_pane_t1

0xc953,	// (0x0004d38a) main_ncimui_pane_t2_ParamLimits

0xc953,	// (0x0004d38a) main_ncimui_pane_t2

0x0002,

0xfc50,	// (0x00050687) main_ncimui_pane_t_ParamLimits

0xfc50,	// (0x00050687) main_ncimui_pane_t

0x537b,	// (0x00045db2) main_radioblah_anim_pane_ParamLimits

0x537b,	// (0x00045db2) main_radioblah_anim_pane

0x538c,	// (0x00045dc3) main_radioblah_info_pane_ParamLimits

0x538c,	// (0x00045dc3) main_radioblah_info_pane

0x53a0,	// (0x00045dd7) main_radioblah_pane_t1_ParamLimits

0x53a0,	// (0x00045dd7) main_radioblah_pane_t1

0x53bc,	// (0x00045df3) main_radioblah_pane_t2_ParamLimits

0x53bc,	// (0x00045df3) main_radioblah_pane_t2

0x0003,

0xfceb,	// (0x00050722) main_radioblah_pane_t_ParamLimits

0xfceb,	// (0x00050722) main_radioblah_pane_t

0xccf0,	// (0x0004d727) main_radioblah_rocker_ctrl_pane_ParamLimits

0xccf0,	// (0x0004d727) main_radioblah_rocker_ctrl_pane

0x5404,	// (0x00045e3b) main_radioblah_info_pane_t1_ParamLimits

0x5404,	// (0x00045e3b) main_radioblah_info_pane_t1

0xcd35,	// (0x0004d76c) main_radioblah_info_pane_t2_ParamLimits

0xcd35,	// (0x0004d76c) main_radioblah_info_pane_t2

0x0003,

0xfcf4,	// (0x0005072b) main_radioblah_info_pane_t_ParamLimits

0xfcf4,	// (0x0005072b) main_radioblah_info_pane_t

0x3975,	// (0x000443ac) main_radioblah_rocker_ctrl_pane_g1

0xcddd,	// (0x0004d814) main_radioblah_rocker_ctrl_pane_g2

0xcde5,	// (0x0004d81c) main_radioblah_rocker_ctrl_pane_g3

0xcded,	// (0x0004d824) main_radioblah_rocker_ctrl_pane_g4

0xcdf5,	// (0x0004d82c) main_radioblah_rocker_ctrl_pane_g5

0xcdfd,	// (0x0004d834) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcfd,	// (0x00050734) main_radioblah_rocker_ctrl_pane_g

0xc90e,	// (0x0004d345) main_cset_text2_pane_t1_copy1_ParamLimits

0xb1ee,	// (0x0004bc25) cam4_image_uncrop_qvga_pane

0xb31c,	// (0x0004bd53) vid4_image_uncrop_qcif_pane

0xc583,	// (0x0004cfba) cam6_image_uncrop_qvga_pane_ParamLimits

0xc583,	// (0x0004cfba) cam6_image_uncrop_qvga_pane

0x4b74,	// (0x000455ab) vid6_image_uncrop_qcif_pane_ParamLimits

0x4b74,	// (0x000455ab) vid6_image_uncrop_qcif_pane

0xdcd2,	// (0x0004e709) bg_popup_preview_window_pane_cp03

0x4ef4,	// (0x0004592b) list_cset_text2_pane

0x4efc,	// (0x00045933) main_cset6_text2_pane_g1

0x4f04,	// (0x0004593b) main_cset6_text2_pane_t1

0xce05,	// (0x0004d83c) list_cset_text2_pane_t1_ParamLimits

0xce05,	// (0x0004d83c) list_cset_text2_pane_t1

0xe7b3,	// (0x0004f1ea) main_radioblah_pane_ParamLimits

0xcbab,	// (0x0004d5e2) main_mobtv_info_pane_t3_ParamLimits

0xcbab,	// (0x0004d5e2) main_mobtv_info_pane_t3

0xccde,	// (0x0004d715) main_radioblah_pane_g1

0xcd09,	// (0x0004d740) main_radioblah_info_pane_g1

0xcd84,	// (0x0004d7bb) main_radioblah_info_pane_t3_ParamLimits

0xcd84,	// (0x0004d7bb) main_radioblah_info_pane_t3

0x84f9,	// (0x00048f30) highlight_cell_cale_month_pane_ParamLimits

0x84f9,	// (0x00048f30) highlight_cell_cale_month_pane

0xdcd2,	// (0x0004e709) main_phob_fisheye_pane

0x3cee,	// (0x00044725) scroll_pane_cp0031_ParamLimits

0x3cee,	// (0x00044725) scroll_pane_cp0031

0x4c7e,	// (0x000456b5) wait_bar_pane_cp08_ParamLimits

0xc74d,	// (0x0004d184) cset_list_set_pane_copy1_ParamLimits

0x543e,	// (0x00045e75) highlight_cell_cale_month_pane_g1

0xce1c,	// (0x0004d853) highlight_cell_cale_month_pane_t1

0x5446,	// (0x00045e7d) list_gen_pane_cp01

0x448e,	// (0x00044ec5) scroll_pane_01

0x0a60,	// (0x00041497) list_single_double_fisheye_pane

0x544f,	// (0x00045e86) list_double_fisheye_pane_g1_ParamLimits

0x544f,	// (0x00045e86) list_double_fisheye_pane_g1

0x545b,	// (0x00045e92) list_double_fisheye_pane_g2_ParamLimits

0x545b,	// (0x00045e92) list_double_fisheye_pane_g2

0x0a69,	// (0x000414a0) list_double_fisheye_pane_g3_ParamLimits

0x0a69,	// (0x000414a0) list_double_fisheye_pane_g3

0x0004,

0xfd0a,	// (0x00050741) list_double_fisheye_pane_g_ParamLimits

0xfd0a,	// (0x00050741) list_double_fisheye_pane_g

0x548c,	// (0x00045ec3) list_double_fisheye_pane_t1_ParamLimits

0x548c,	// (0x00045ec3) list_double_fisheye_pane_t1

0x54a7,	// (0x00045ede) list_double_fisheye_pane_t2_ParamLimits

0x54a7,	// (0x00045ede) list_double_fisheye_pane_t2

0x0001,

0xfd15,	// (0x0005074c) list_double_fisheye_pane_t_ParamLimits

0xfd15,	// (0x0005074c) list_double_fisheye_pane_t

0xdcd2,	// (0x0004e709) main_call5_pane

0xcc68,	// (0x0004d69f) sc_swipe_pane_ParamLimits

0xcc68,	// (0x0004d69f) sc_swipe_pane

0xce36,	// (0x0004d86d) call5_image_pane_ParamLimits

0xce36,	// (0x0004d86d) call5_image_pane

0xce42,	// (0x0004d879) call5_swipe_1_pane_ParamLimits

0xce42,	// (0x0004d879) call5_swipe_1_pane

0xce4e,	// (0x0004d885) call5_swipe_2_pane_ParamLimits

0xce4e,	// (0x0004d885) call5_swipe_2_pane

0xce66,	// (0x0004d89d) popup_call5_audio_first_window_ParamLimits

0xce66,	// (0x0004d89d) popup_call5_audio_first_window

0x3ba4,	// (0x000445db) call5_swipe_1_pane_g1_ParamLimits

0x3ba4,	// (0x000445db) call5_swipe_1_pane_g1

0xce72,	// (0x0004d8a9) call5_swipe_1_pane_g2_ParamLimits

0xce72,	// (0x0004d8a9) call5_swipe_1_pane_g2

0x0001,

0xfd1a,	// (0x00050751) call5_swipe_1_pane_g_ParamLimits

0xfd1a,	// (0x00050751) call5_swipe_1_pane_g

0xce7e,	// (0x0004d8b5) call5_swipe_1_pane_t1_ParamLimits

0xce7e,	// (0x0004d8b5) call5_swipe_1_pane_t1

0x3ba4,	// (0x000445db) call5_swipe_2_pane_g1_ParamLimits

0x3ba4,	// (0x000445db) call5_swipe_2_pane_g1

0xce93,	// (0x0004d8ca) call5_swipe_2_pane_g2_ParamLimits

0xce93,	// (0x0004d8ca) call5_swipe_2_pane_g2

0x0001,

0xfd1f,	// (0x00050756) call5_swipe_2_pane_g_ParamLimits

0xfd1f,	// (0x00050756) call5_swipe_2_pane_g

0xce9f,	// (0x0004d8d6) call5_swipe_2_pane_t1_ParamLimits

0xce9f,	// (0x0004d8d6) call5_swipe_2_pane_t1

0xceb4,	// (0x0004d8eb) sc_swipe_pane_g1_ParamLimits

0xceb4,	// (0x0004d8eb) sc_swipe_pane_g1

0xcec1,	// (0x0004d8f8) sc_swipe_pane_g2_ParamLimits

0xcec1,	// (0x0004d8f8) sc_swipe_pane_g2

0x0001,

0xfd24,	// (0x0005075b) sc_swipe_pane_g_ParamLimits

0xfd24,	// (0x0005075b) sc_swipe_pane_g

0xcecd,	// (0x0004d904) sc_swipe_pane_t1_ParamLimits

0xcecd,	// (0x0004d904) sc_swipe_pane_t1

0xdcd2,	// (0x0004e709) main_cmail_launcher_pane

0xcee2,	// (0x0004d919) aid_size_cell_cmail_l_ParamLimits

0xcee2,	// (0x0004d919) aid_size_cell_cmail_l

0xcef2,	// (0x0004d929) grid_cmail_l_pane_ParamLimits

0xcef2,	// (0x0004d929) grid_cmail_l_pane

0xcefe,	// (0x0004d935) cell_cmail_l_pane_ParamLimits

0xcefe,	// (0x0004d935) cell_cmail_l_pane

0xcf10,	// (0x0004d947) cell_cmail_l_pane_g1_ParamLimits

0xcf10,	// (0x0004d947) cell_cmail_l_pane_g1

0xcf20,	// (0x0004d957) cell_cmail_l_pane_t1_ParamLimits

0xcf20,	// (0x0004d957) cell_cmail_l_pane_t1

0xcf36,	// (0x0004d96d) cell_cmail_l_pane_t2_ParamLimits

0xcf36,	// (0x0004d96d) cell_cmail_l_pane_t2

0x0001,

0xfd29,	// (0x00050760) cell_cmail_l_pane_t_ParamLimits

0xfd29,	// (0x00050760) cell_cmail_l_pane_t

0xe7b3,	// (0x0004f1ea) grid_highlight_pane_cp018_ParamLimits

0xe7b3,	// (0x0004f1ea) grid_highlight_pane_cp018

0x6ce6,	// (0x0004771d) main2_pane_ParamLimits

0x6ce6,	// (0x0004771d) main2_pane

0xe503,	// (0x0004ef3a) popup_sp_fs_action_menu_bg_pane_g1

0xe50b,	// (0x0004ef42) popup_sp_fs_action_menu_bg_pane_g2

0xe513,	// (0x0004ef4a) popup_sp_fs_action_menu_bg_pane_g3

0xe51b,	// (0x0004ef52) popup_sp_fs_action_menu_bg_pane_g4

0xe523,	// (0x0004ef5a) popup_sp_fs_action_menu_bg_pane_g5

0xe52b,	// (0x0004ef62) popup_sp_fs_action_menu_bg_pane_g6

0xe533,	// (0x0004ef6a) popup_sp_fs_action_menu_bg_pane_g7

0xe53b,	// (0x0004ef72) popup_sp_fs_action_menu_bg_pane_g8

0xe543,	// (0x0004ef7a) popup_sp_fs_action_menu_bg_pane_g9

0xe54b,	// (0x0004ef82) popup_sp_fs_action_menu_bg_pane_g10

0xe54b,	// (0x0004ef82) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x0004fc26) popup_sp_fs_action_menu_bg_pane_g

0x1752,	// (0x00042189) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1752,	// (0x00042189) list_medium_line_x2_t3_g3_g1

0x175e,	// (0x00042195) list_medium_line_x2_t3_g3_g2_ParamLimits

0x175e,	// (0x00042195) list_medium_line_x2_t3_g3_g2

0x176a,	// (0x000421a1) list_medium_line_x2_t3_g3_g3_ParamLimits

0x176a,	// (0x000421a1) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x0004fcd6) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x0004fcd6) list_medium_line_x2_t3_g3_g

0x1776,	// (0x000421ad) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1776,	// (0x000421ad) list_medium_line_x2_t3_g3_t1

0x7a38,	// (0x0004846f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x7a38,	// (0x0004846f) list_medium_line_x2_t3_g3_t2

0x178b,	// (0x000421c2) list_medium_line_x2_t3_g3_t3_ParamLimits

0x178b,	// (0x000421c2) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x0004fcdd) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x0004fcdd) list_medium_line_x2_t3_g3_t

0x1752,	// (0x00042189) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1752,	// (0x00042189) list_medium_line_x2_t3_g2_g1

0x176a,	// (0x000421a1) list_medium_line_x2_t3_g2_g2_ParamLimits

0x176a,	// (0x000421a1) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x0004fce4) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x0004fce4) list_medium_line_x2_t3_g2_g

0x17a0,	// (0x000421d7) list_medium_line_x2_t3_g2_t1_ParamLimits

0x17a0,	// (0x000421d7) list_medium_line_x2_t3_g2_t1

0x17b6,	// (0x000421ed) list_medium_line_x2_t3_g2_t2_ParamLimits

0x17b6,	// (0x000421ed) list_medium_line_x2_t3_g2_t2

0x178b,	// (0x000421c2) list_medium_line_x2_t3_g2_t3_ParamLimits

0x178b,	// (0x000421c2) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x0004fce9) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x0004fce9) list_medium_line_x2_t3_g2_t

0x1752,	// (0x00042189) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1752,	// (0x00042189) list_medium_line_x2_t4_g4_g1

0x17c8,	// (0x000421ff) list_medium_line_x2_t4_g4_g2_ParamLimits

0x17c8,	// (0x000421ff) list_medium_line_x2_t4_g4_g2

0x175e,	// (0x00042195) list_medium_line_x2_t4_g4_g3_ParamLimits

0x175e,	// (0x00042195) list_medium_line_x2_t4_g4_g3

0x17d4,	// (0x0004220b) list_medium_line_x2_t4_g4_g4_ParamLimits

0x17d4,	// (0x0004220b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x0004fcf0) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x0004fcf0) list_medium_line_x2_t4_g4_g

0x7a4a,	// (0x00048481) list_medium_line_x2_t4_g4_t1_ParamLimits

0x7a4a,	// (0x00048481) list_medium_line_x2_t4_g4_t1

0x7a61,	// (0x00048498) list_medium_line_x2_t4_g4_t2_ParamLimits

0x7a61,	// (0x00048498) list_medium_line_x2_t4_g4_t2

0x7a76,	// (0x000484ad) list_medium_line_x2_t4_g4_t3_ParamLimits

0x7a76,	// (0x000484ad) list_medium_line_x2_t4_g4_t3

0x17e0,	// (0x00042217) list_medium_line_x2_t4_g4_t4_ParamLimits

0x17e0,	// (0x00042217) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x0004fcf9) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x0004fcf9) list_medium_line_x2_t4_g4_t

0x1752,	// (0x00042189) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1752,	// (0x00042189) list_medium_line_x2_t2_g4_g1

0x17c8,	// (0x000421ff) list_medium_line_x2_t2_g4_g2_ParamLimits

0x17c8,	// (0x000421ff) list_medium_line_x2_t2_g4_g2

0x175e,	// (0x00042195) list_medium_line_x2_t2_g4_g3_ParamLimits

0x175e,	// (0x00042195) list_medium_line_x2_t2_g4_g3

0x176a,	// (0x000421a1) list_medium_line_x2_t2_g4_g4_ParamLimits

0x176a,	// (0x000421a1) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x0004fd60) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x0004fd60) list_medium_line_x2_t2_g4_g

0x199d,	// (0x000423d4) list_medium_line_x2_t2_g4_t1_ParamLimits

0x199d,	// (0x000423d4) list_medium_line_x2_t2_g4_t1

0x178b,	// (0x000421c2) list_medium_line_x2_t2_g4_t2_ParamLimits

0x178b,	// (0x000421c2) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x0004fd69) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x0004fd69) list_medium_line_x2_t2_g4_t

0x1752,	// (0x00042189) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1752,	// (0x00042189) list_medium_line_x2_t2_g3_g1

0x175e,	// (0x00042195) list_medium_line_x2_t2_g3_g2_ParamLimits

0x175e,	// (0x00042195) list_medium_line_x2_t2_g3_g2

0x176a,	// (0x000421a1) list_medium_line_x2_t2_g3_g3_ParamLimits

0x176a,	// (0x000421a1) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x0004fcd6) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x0004fcd6) list_medium_line_x2_t2_g3_g

0x19b2,	// (0x000423e9) list_medium_line_x2_t2_g3_t1_ParamLimits

0x19b2,	// (0x000423e9) list_medium_line_x2_t2_g3_t1

0x178b,	// (0x000421c2) list_medium_line_x2_t2_g3_t2_ParamLimits

0x178b,	// (0x000421c2) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x0004fd6e) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x0004fd6e) list_medium_line_x2_t2_g3_t

0x8669,	// (0x000490a0) main_sp_fs_list_pane_ParamLimits

0x8669,	// (0x000490a0) main_sp_fs_list_pane

0x8676,	// (0x000490ad) sp_fs_scroll_pane_ParamLimits

0x8676,	// (0x000490ad) sp_fs_scroll_pane

0x8683,	// (0x000490ba) list_medium_line_x2_t3_t1

0x8693,	// (0x000490ca) list_medium_line_x2_t3_t2

0x1bea,	// (0x00042621) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x0004fdb9) list_medium_line_x2_t3_t

0x86a1,	// (0x000490d8) list_medium_line_x3_t4_t1

0x86b1,	// (0x000490e8) list_medium_line_x3_t4_t2

0x1bf8,	// (0x0004262f) list_medium_line_x3_t4_t3

0x1c06,	// (0x0004263d) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x0004fdc0) list_medium_line_x3_t4_t

0x86bf,	// (0x000490f6) list_medium_line_x4_t5_t1

0x86cf,	// (0x00049106) list_medium_line_x4_t5_t2

0x1bf8,	// (0x0004262f) list_medium_line_x4_t5_t3

0x1c14,	// (0x0004264b) list_medium_line_x4_t5_t4

0x1c06,	// (0x0004263d) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x0004fdc9) list_medium_line_x4_t5_t

0x1752,	// (0x00042189) list_medium_line_t4_g4_g1_ParamLimits

0x1752,	// (0x00042189) list_medium_line_t4_g4_g1

0x17d4,	// (0x0004220b) list_medium_line_t4_g4_g2_ParamLimits

0x17d4,	// (0x0004220b) list_medium_line_t4_g4_g2

0x1c22,	// (0x00042659) list_medium_line_t4_g4_g3_ParamLimits

0x1c22,	// (0x00042659) list_medium_line_t4_g4_g3

0x176a,	// (0x000421a1) list_medium_line_t4_g4_g4_ParamLimits

0x176a,	// (0x000421a1) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x0004fdd4) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x0004fdd4) list_medium_line_t4_g4_g

0x1c2e,	// (0x00042665) list_medium_line_t4_g4_t1_ParamLimits

0x1c2e,	// (0x00042665) list_medium_line_t4_g4_t1

0x1c43,	// (0x0004267a) list_medium_line_t4_g4_t2_ParamLimits

0x1c43,	// (0x0004267a) list_medium_line_t4_g4_t2

0x1c59,	// (0x00042690) list_medium_line_t4_g4_t3_ParamLimits

0x1c59,	// (0x00042690) list_medium_line_t4_g4_t3

0x1c6f,	// (0x000426a6) list_medium_line_t4_g4_t4_ParamLimits

0x1c6f,	// (0x000426a6) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x0004fddd) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x0004fddd) list_medium_line_t4_g4_t

0x87eb,	// (0x00049222) chi_dic_find_pane_g1

0x955d,	// (0x00049f94) main_tport_pane

0x45cc,	// (0x00045003) list_medium_line_plain_t1

0x1752,	// (0x00042189) list_medium_line_t2_g2_g1_ParamLimits

0x1752,	// (0x00042189) list_medium_line_t2_g2_g1

0x175e,	// (0x00042195) list_medium_line_t2_g2_g2_ParamLimits

0x175e,	// (0x00042195) list_medium_line_t2_g2_g2

0x0001,

0xfa6c,	// (0x000504a3) list_medium_line_t2_g2_g_ParamLimits

0xfa6c,	// (0x000504a3) list_medium_line_t2_g2_g

0xbce5,	// (0x0004c71c) list_medium_line_t2_g2_t1_ParamLimits

0xbce5,	// (0x0004c71c) list_medium_line_t2_g2_t1

0xbcfc,	// (0x0004c733) list_medium_line_t2_g2_t2_ParamLimits

0xbcfc,	// (0x0004c733) list_medium_line_t2_g2_t2

0x0001,

0xfa71,	// (0x000504a8) list_medium_line_t2_g2_t_ParamLimits

0xfa71,	// (0x000504a8) list_medium_line_t2_g2_t

0x48f3,	// (0x0004532a) aid_sp_fs_list_icon_a_sm

0x48fb,	// (0x00045332) aid_sp_fs_list_icon_d

0x4903,	// (0x0004533a) aid_sp_fs_text_primary

0x490c,	// (0x00045343) aid_sp_fs_text_secondary

0x4915,	// (0x0004534c) list_medium_line

0x4915,	// (0x0004534c) list_medium_line_g2

0x4915,	// (0x0004534c) list_medium_line_g3

0x4915,	// (0x0004534c) list_medium_line_plain

0x4915,	// (0x0004534c) list_medium_line_plain_t2

0x4915,	// (0x0004534c) list_medium_line_plain_t3

0x4915,	// (0x0004534c) list_medium_line_right_icon

0x4915,	// (0x0004534c) list_medium_line_right_iconx2

0x4915,	// (0x0004534c) list_medium_line_t2

0x4915,	// (0x0004534c) list_medium_line_t2_g2

0x4915,	// (0x0004534c) list_medium_line_t2_g3

0x4915,	// (0x0004534c) list_medium_line_t2_right_icon

0x4915,	// (0x0004534c) list_medium_line_t2_right_iconx2

0x4915,	// (0x0004534c) list_medium_line_t3

0x4915,	// (0x0004534c) list_medium_line_t3_g2

0x4915,	// (0x0004534c) list_medium_line_t3_g3

0x4915,	// (0x0004534c) list_medium_line_t3_right_iconx2

0x491e,	// (0x00045355) list_medium_line_t4_g4

0x4927,	// (0x0004535e) list_medium_line_x2

0x4927,	// (0x0004535e) list_medium_line_x2_t2_g2

0x4927,	// (0x0004535e) list_medium_line_x2_t2_g3

0x4927,	// (0x0004535e) list_medium_line_x2_t2_g4

0x4927,	// (0x0004535e) list_medium_line_x2_t3

0x4927,	// (0x0004535e) list_medium_line_x2_t3_g2

0x4927,	// (0x0004535e) list_medium_line_x2_t3_g3

0x4927,	// (0x0004535e) list_medium_line_x2_t3_g4

0x4927,	// (0x0004535e) list_medium_line_x2_t4_g2

0x4927,	// (0x0004535e) list_medium_line_x2_t4_g4

0x4930,	// (0x00045367) list_medium_line_x3

0x4930,	// (0x00045367) list_medium_line_x3_t4

0x4930,	// (0x00045367) list_medium_line_x3_t4_g4

0x491e,	// (0x00045355) list_medium_line_x4_t4

0x491e,	// (0x00045355) list_medium_line_x4_t4_g7

0x491e,	// (0x00045355) list_medium_line_x4_t5

0x4939,	// (0x00045370) list_single_fs_dyc_pane_ParamLimits

0x4939,	// (0x00045370) list_single_fs_dyc_pane

0x1752,	// (0x00042189) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1752,	// (0x00042189) list_medium_line_x4_t4_g7_g1

0x4e29,	// (0x00045860) list_medium_line_x4_t4_g7_g2_ParamLimits

0x4e29,	// (0x00045860) list_medium_line_x4_t4_g7_g2

0x4e35,	// (0x0004586c) list_medium_line_x4_t4_g7_g3_ParamLimits

0x4e35,	// (0x0004586c) list_medium_line_x4_t4_g7_g3

0x4e44,	// (0x0004587b) list_medium_line_x4_t4_g7_g4_ParamLimits

0x4e44,	// (0x0004587b) list_medium_line_x4_t4_g7_g4

0x4e50,	// (0x00045887) list_medium_line_x4_t4_g7_g5_ParamLimits

0x4e50,	// (0x00045887) list_medium_line_x4_t4_g7_g5

0x4e5f,	// (0x00045896) list_medium_line_x4_t4_g7_g6_ParamLimits

0x4e5f,	// (0x00045896) list_medium_line_x4_t4_g7_g6

0x4e6e,	// (0x000458a5) list_medium_line_x4_t4_g7_g7_ParamLimits

0x4e6e,	// (0x000458a5) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc36,	// (0x0005066d) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc36,	// (0x0005066d) list_medium_line_x4_t4_g7_g

0x4e7a,	// (0x000458b1) list_medium_line_x4_t4_g7_t1_ParamLimits

0x4e7a,	// (0x000458b1) list_medium_line_x4_t4_g7_t1

0x4e8f,	// (0x000458c6) list_medium_line_x4_t4_g7_t2_ParamLimits

0x4e8f,	// (0x000458c6) list_medium_line_x4_t4_g7_t2

0x4ea4,	// (0x000458db) list_medium_line_x4_t4_g7_t3_ParamLimits

0x4ea4,	// (0x000458db) list_medium_line_x4_t4_g7_t3

0x4eb9,	// (0x000458f0) list_medium_line_x4_t4_g7_t4_ParamLimits

0x4eb9,	// (0x000458f0) list_medium_line_x4_t4_g7_t4

0x4ecb,	// (0x00045902) list_medium_line_x4_t4_g7_t5_ParamLimits

0x4ecb,	// (0x00045902) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc45,	// (0x0005067c) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc45,	// (0x0005067c) list_medium_line_x4_t4_g7_t

0x4edd,	// (0x00045914) list_single_dyc_row_pane_ParamLimits

0x4edd,	// (0x00045914) list_single_dyc_row_pane

0xce2a,	// (0x0004d861) call5_gesture_pane_ParamLimits

0xce2a,	// (0x0004d861) call5_gesture_pane

0xce5a,	// (0x0004d891) call5_windows_pane_ParamLimits

0xce5a,	// (0x0004d891) call5_windows_pane

0xcf48,	// (0x0004d97f) call5_swipe_1_pane_cp_ParamLimits

0xcf48,	// (0x0004d97f) call5_swipe_1_pane_cp

0xcf54,	// (0x0004d98b) call5_swipe_2_pane_cp_ParamLimits

0xcf54,	// (0x0004d98b) call5_swipe_2_pane_cp

0x20cb,	// (0x00042b02) call5_image_pane_cp

0xcf60,	// (0x0004d997) popup_call5_audio_first_window_cp_ParamLimits

0xcf60,	// (0x0004d997) popup_call5_audio_first_window_cp

0xceb4,	// (0x0004d8eb) call5_swipe_1_pane_g1_cp_ParamLimits

0xceb4,	// (0x0004d8eb) call5_swipe_1_pane_g1_cp

0xcf6c,	// (0x0004d9a3) call5_swipe_1_pane_g2_cp

0xcecd,	// (0x0004d904) call5_swipe_1_pane_t1_cp_ParamLimits

0xcecd,	// (0x0004d904) call5_swipe_1_pane_t1_cp

0xceb4,	// (0x0004d8eb) call5_swipe_2_pane_g1_cp_ParamLimits

0xceb4,	// (0x0004d8eb) call5_swipe_2_pane_g1_cp

0xcf74,	// (0x0004d9ab) call5_swipe_2_pane_g2_cp

0xcf7c,	// (0x0004d9b3) call5_swipe_2_pane_t1_cp_ParamLimits

0xcf7c,	// (0x0004d9b3) call5_swipe_2_pane_t1_cp

0xe7b3,	// (0x0004f1ea) main_sp_fs_email_pane

0xcf91,	// (0x0004d9c8) main_sp_fs_listscroll_pane_te

0xcf9a,	// (0x0004d9d1) popup_sp_fs_action_menu_pane_ParamLimits

0xcf9a,	// (0x0004d9d1) popup_sp_fs_action_menu_pane

0x3975,	// (0x000443ac) bg_sp_fs_ctrlbar_pane_g1

0xcfca,	// (0x0004da01) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xcfd3,	// (0x0004da0a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xcfdc,	// (0x0004da13) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x3975,	// (0x000443ac) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd2e,	// (0x00050765) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x3762,	// (0x00044199) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x3762,	// (0x00044199) bg_sp_fs_ctrlbar_ddmenu_pane

0xcfe5,	// (0x0004da1c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xcfe5,	// (0x0004da1c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x0b7a,	// (0x000415b1) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x0b7a,	// (0x000415b1) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd37,	// (0x0005076e) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd37,	// (0x0005076e) main_sp_fs_ctrlbar_ddmenu_pane_g

0xcff1,	// (0x0004da28) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xcff1,	// (0x0004da28) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x54c9,	// (0x00045f00) list_medium_line_t2_right_icon_g1

0xd00b,	// (0x0004da42) list_medium_line_t2_right_icon_t1

0xd01a,	// (0x0004da51) list_medium_line_t2_right_icon_t2

0x0001,

0xfd3c,	// (0x00050773) list_medium_line_t2_right_icon_t

0x353a,	// (0x00043f71) bg_sp_fs_ctrlbar_pane_ParamLimits

0x353a,	// (0x00043f71) bg_sp_fs_ctrlbar_pane

0xd0b5,	// (0x0004daec) main_sp_fs_ctrlbar_button_pane_cp01

0xd0bd,	// (0x0004daf4) main_sp_fs_ctrlbar_ddmenu_pane

0xd0c7,	// (0x0004dafe) main_sp_fs_ctrlbar_pane_g1

0xd0d3,	// (0x0004db0a) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd41,	// (0x00050778) main_sp_fs_ctrlbar_pane_g

0xd0df,	// (0x0004db16) main_sp_fs_ctrlbar_pane_t1

0xd0f4,	// (0x0004db2b) main_sp_fs_ctrlbar_pane

0xd10c,	// (0x0004db43) main_sp_fs_listscroll_pane_te_cp01

0xd11d,	// (0x0004db54) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xd11d,	// (0x0004db54) popup_sp_fs_action_menu_pane_cp01

0xe7b3,	// (0x0004f1ea) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe7b3,	// (0x0004f1ea) bg_sp_fs_highlight_list_pane_cp01

0xd139,	// (0x0004db70) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xd139,	// (0x0004db70) sp_fs_action_menu_list_gene_pane_g1

0xd148,	// (0x0004db7f) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xd148,	// (0x0004db7f) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd46,	// (0x0005077d) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd46,	// (0x0005077d) sp_fs_action_menu_list_gene_pane_g

0x54e1,	// (0x00045f18) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x54e1,	// (0x00045f18) sp_fs_action_menu_list_gene_pane_t1

0xd155,	// (0x0004db8c) sp_fs_action_menu_list_gene_pane_ParamLimits

0xd155,	// (0x0004db8c) sp_fs_action_menu_list_gene_pane

0xd172,	// (0x0004dba9) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xd172,	// (0x0004dba9) popup_sp_fs_action_menu_bg_pane

0xd180,	// (0x0004dbb7) sp_fs_action_menu_list_pane_ParamLimits

0xd180,	// (0x0004dbb7) sp_fs_action_menu_list_pane

0xd19c,	// (0x0004dbd3) sp_fs_scroll_pane_cp01_ParamLimits

0xd19c,	// (0x0004dbd3) sp_fs_scroll_pane_cp01

0xd1c2,	// (0x0004dbf9) list_medium_line_plain_t2_t1

0xd1d1,	// (0x0004dc08) list_medium_line_plain_t2_t2

0x0001,

0xfd4b,	// (0x00050782) list_medium_line_plain_t2_t

0xd1df,	// (0x0004dc16) list_medium_line_plain_t3_t1

0xd1ef,	// (0x0004dc26) list_medium_line_plain_t3_t2

0xd1fd,	// (0x0004dc34) list_medium_line_plain_t3_t3

0x0002,

0xfd50,	// (0x00050787) list_medium_line_plain_t3_t

0x1752,	// (0x00042189) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1752,	// (0x00042189) list_medium_line_x2_t2_g2_g1

0x176a,	// (0x000421a1) list_medium_line_x2_t2_g2_g2_ParamLimits

0x176a,	// (0x000421a1) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x0004fce4) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x0004fce4) list_medium_line_x2_t2_g2_g

0x1c2e,	// (0x00042665) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1c2e,	// (0x00042665) list_medium_line_x2_t2_g2_t1

0x178b,	// (0x000421c2) list_medium_line_x2_t2_g2_t2_ParamLimits

0x178b,	// (0x000421c2) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd57,	// (0x0005078e) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd57,	// (0x0005078e) list_medium_line_x2_t2_g2_t

0x1752,	// (0x00042189) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1752,	// (0x00042189) list_medium_line_x2_t4_g2_g1

0x54f9,	// (0x00045f30) list_medium_line_x2_t4_g2_g2_ParamLimits

0x54f9,	// (0x00045f30) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd5c,	// (0x00050793) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd5c,	// (0x00050793) list_medium_line_x2_t4_g2_g

0xd20b,	// (0x0004dc42) list_medium_line_x2_t4_g2_t1_ParamLimits

0xd20b,	// (0x0004dc42) list_medium_line_x2_t4_g2_t1

0xd225,	// (0x0004dc5c) list_medium_line_x2_t4_g2_t2_ParamLimits

0xd225,	// (0x0004dc5c) list_medium_line_x2_t4_g2_t2

0xd23a,	// (0x0004dc71) list_medium_line_x2_t4_g2_t3_ParamLimits

0xd23a,	// (0x0004dc71) list_medium_line_x2_t4_g2_t3

0x178b,	// (0x000421c2) list_medium_line_x2_t4_g2_t4_ParamLimits

0x178b,	// (0x000421c2) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd61,	// (0x00050798) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd61,	// (0x00050798) list_medium_line_x2_t4_g2_t

0x550a,	// (0x00045f41) list_medium_line_t3_right_iconx2_g1

0x54c9,	// (0x00045f00) list_medium_line_t3_right_iconx2_g2

0xd24f,	// (0x0004dc86) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd6a,	// (0x000507a1) list_medium_line_t3_right_iconx2_g

0x54d1,	// (0x00045f08) list_medium_line_t3_right_iconx2_t1

0xd257,	// (0x0004dc8e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd71,	// (0x000507a8) list_medium_line_t3_right_iconx2_t

0x1752,	// (0x00042189) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1752,	// (0x00042189) list_medium_line_x3_t4_g4_g1

0x175e,	// (0x00042195) list_medium_line_x3_t4_g4_g2_ParamLimits

0x175e,	// (0x00042195) list_medium_line_x3_t4_g4_g2

0x17d4,	// (0x0004220b) list_medium_line_x3_t4_g4_g3_ParamLimits

0x17d4,	// (0x0004220b) list_medium_line_x3_t4_g4_g3

0x5512,	// (0x00045f49) list_medium_line_x3_t4_g4_g4_ParamLimits

0x5512,	// (0x00045f49) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd76,	// (0x000507ad) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd76,	// (0x000507ad) list_medium_line_x3_t4_g4_g

0xbce5,	// (0x0004c71c) list_medium_line_x3_t4_g4_t1_ParamLimits

0xbce5,	// (0x0004c71c) list_medium_line_x3_t4_g4_t1

0xbcfc,	// (0x0004c733) list_medium_line_x3_t4_g4_t2_ParamLimits

0xbcfc,	// (0x0004c733) list_medium_line_x3_t4_g4_t2

0x551e,	// (0x00045f55) list_medium_line_x3_t4_g4_t3_ParamLimits

0x551e,	// (0x00045f55) list_medium_line_x3_t4_g4_t3

0x5533,	// (0x00045f6a) list_medium_line_x3_t4_g4_t4_ParamLimits

0x5533,	// (0x00045f6a) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd7f,	// (0x000507b6) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd7f,	// (0x000507b6) list_medium_line_x3_t4_g4_t

0xd265,	// (0x0004dc9c) list_single_dyc_row_text_pane_t1_ParamLimits

0xd265,	// (0x0004dc9c) list_single_dyc_row_text_pane_t1

0xd29c,	// (0x0004dcd3) list_single_dyc_row_text_pane_t2_ParamLimits

0xd29c,	// (0x0004dcd3) list_single_dyc_row_text_pane_t2

0x5550,	// (0x00045f87) list_single_dyc_row_text_pane_t3_ParamLimits

0x5550,	// (0x00045f87) list_single_dyc_row_text_pane_t3

0x0002,

0xfd88,	// (0x000507bf) list_single_dyc_row_text_pane_t_ParamLimits

0xfd88,	// (0x000507bf) list_single_dyc_row_text_pane_t

0x5562,	// (0x00045f99) list_single_dyc_row_pane_g1_ParamLimits

0x5562,	// (0x00045f99) list_single_dyc_row_pane_g1

0x556e,	// (0x00045fa5) list_single_dyc_row_pane_g2_ParamLimits

0x556e,	// (0x00045fa5) list_single_dyc_row_pane_g2

0x557a,	// (0x00045fb1) list_single_dyc_row_pane_g3_ParamLimits

0x557a,	// (0x00045fb1) list_single_dyc_row_pane_g3

0x5586,	// (0x00045fbd) list_single_dyc_row_pane_g4_ParamLimits

0x5586,	// (0x00045fbd) list_single_dyc_row_pane_g4

0x0003,

0xfd8f,	// (0x000507c6) list_single_dyc_row_pane_g_ParamLimits

0xfd8f,	// (0x000507c6) list_single_dyc_row_pane_g

0x5592,	// (0x00045fc9) list_single_dyc_row_text_pane_ParamLimits

0x5592,	// (0x00045fc9) list_single_dyc_row_text_pane

0xdcd2,	// (0x0004e709) bg_sp_fs_scroll_pane

0xd2f0,	// (0x0004dd27) thumb_sp_fs_scroll_pane

0x1752,	// (0x00042189) list_medium_line_g1_ParamLimits

0x1752,	// (0x00042189) list_medium_line_g1

0x1c2e,	// (0x00042665) list_medium_line_t1_ParamLimits

0x1c2e,	// (0x00042665) list_medium_line_t1

0x1752,	// (0x00042189) list_medium_line_x2_g1_ParamLimits

0x1752,	// (0x00042189) list_medium_line_x2_g1

0x175e,	// (0x00042195) list_medium_line_x2_g2_ParamLimits

0x175e,	// (0x00042195) list_medium_line_x2_g2

0x0001,

0xfa6c,	// (0x000504a3) list_medium_line_x2_g_ParamLimits

0xfa6c,	// (0x000504a3) list_medium_line_x2_g

0x55b1,	// (0x00045fe8) list_medium_line_x2_t1_ParamLimits

0x55b1,	// (0x00045fe8) list_medium_line_x2_t1

0x1752,	// (0x00042189) list_medium_line_x3_g1_ParamLimits

0x1752,	// (0x00042189) list_medium_line_x3_g1

0x175e,	// (0x00042195) list_medium_line_x3_g2_ParamLimits

0x175e,	// (0x00042195) list_medium_line_x3_g2

0x0001,

0xfa6c,	// (0x000504a3) list_medium_line_x3_g_ParamLimits

0xfa6c,	// (0x000504a3) list_medium_line_x3_g

0x55b1,	// (0x00045fe8) list_medium_line_x3_t1_ParamLimits

0x55b1,	// (0x00045fe8) list_medium_line_x3_t1

0xd2f9,	// (0x0004dd30) thumb_sp_fs_scroll_pane_g1

0xd302,	// (0x0004dd39) thumb_sp_fs_scroll_pane_g2

0xd30b,	// (0x0004dd42) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd98,	// (0x000507cf) thumb_sp_fs_scroll_pane_g

0xd2f9,	// (0x0004dd30) bg_sp_fs_scroll_pane_g1

0xd302,	// (0x0004dd39) bg_sp_fs_scroll_pane_g2

0xd30b,	// (0x0004dd42) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd98,	// (0x000507cf) bg_sp_fs_scroll_pane_g

0x1752,	// (0x00042189) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1752,	// (0x00042189) list_medium_line_x2_t3_g4_g1

0x17c8,	// (0x000421ff) list_medium_line_x2_t3_g4_g2_ParamLimits

0x17c8,	// (0x000421ff) list_medium_line_x2_t3_g4_g2

0x175e,	// (0x00042195) list_medium_line_x2_t3_g4_g3_ParamLimits

0x175e,	// (0x00042195) list_medium_line_x2_t3_g4_g3

0x176a,	// (0x000421a1) list_medium_line_x2_t3_g4_g4_ParamLimits

0x176a,	// (0x000421a1) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x0004fd60) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x0004fd60) list_medium_line_x2_t3_g4_g

0xd314,	// (0x0004dd4b) list_medium_line_x2_t3_g4_t1_ParamLimits

0xd314,	// (0x0004dd4b) list_medium_line_x2_t3_g4_t1

0xd32a,	// (0x0004dd61) list_medium_line_x2_t3_g4_t2_ParamLimits

0xd32a,	// (0x0004dd61) list_medium_line_x2_t3_g4_t2

0x178b,	// (0x000421c2) list_medium_line_x2_t3_g4_t3_ParamLimits

0x178b,	// (0x000421c2) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd9f,	// (0x000507d6) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd9f,	// (0x000507d6) list_medium_line_x2_t3_g4_t

0x1752,	// (0x00042189) list_medium_line_g2_g1_ParamLimits

0x1752,	// (0x00042189) list_medium_line_g2_g1

0x175e,	// (0x00042195) list_medium_line_g2_g2_ParamLimits

0x175e,	// (0x00042195) list_medium_line_g2_g2

0x0001,

0xfa6c,	// (0x000504a3) list_medium_line_g2_g_ParamLimits

0xfa6c,	// (0x000504a3) list_medium_line_g2_g

0x19b2,	// (0x000423e9) list_medium_line_g2_t1_ParamLimits

0x19b2,	// (0x000423e9) list_medium_line_g2_t1

0x1752,	// (0x00042189) list_medium_line_t3_g2_g1_ParamLimits

0x1752,	// (0x00042189) list_medium_line_t3_g2_g1

0x175e,	// (0x00042195) list_medium_line_t3_g2_g2_ParamLimits

0x175e,	// (0x00042195) list_medium_line_t3_g2_g2

0x0001,

0xfa6c,	// (0x000504a3) list_medium_line_t3_g2_g_ParamLimits

0xfa6c,	// (0x000504a3) list_medium_line_t3_g2_g

0xd343,	// (0x0004dd7a) list_medium_line_t3_g2_t1_ParamLimits

0xd343,	// (0x0004dd7a) list_medium_line_t3_g2_t1

0xd35d,	// (0x0004dd94) list_medium_line_t3_g2_t2_ParamLimits

0xd35d,	// (0x0004dd94) list_medium_line_t3_g2_t2

0xd372,	// (0x0004dda9) list_medium_line_t3_g2_t3_ParamLimits

0xd372,	// (0x0004dda9) list_medium_line_t3_g2_t3

0x0002,

0xfda6,	// (0x000507dd) list_medium_line_t3_g2_t_ParamLimits

0xfda6,	// (0x000507dd) list_medium_line_t3_g2_t

0x54c9,	// (0x00045f00) list_medium_line_right_icon_g1

0x55c7,	// (0x00045ffe) list_medium_line_right_icon_t1

0x1752,	// (0x00042189) list_medium_line_t2_g1_ParamLimits

0x1752,	// (0x00042189) list_medium_line_t2_g1

0xd388,	// (0x0004ddbf) list_medium_line_t2_t1_ParamLimits

0xd388,	// (0x0004ddbf) list_medium_line_t2_t1

0xd39e,	// (0x0004ddd5) list_medium_line_t2_t2_ParamLimits

0xd39e,	// (0x0004ddd5) list_medium_line_t2_t2

0x0001,

0xfdad,	// (0x000507e4) list_medium_line_t2_t_ParamLimits

0xfdad,	// (0x000507e4) list_medium_line_t2_t

0x1752,	// (0x00042189) list_medium_line_t3_g1_ParamLimits

0x1752,	// (0x00042189) list_medium_line_t3_g1

0xd3b0,	// (0x0004dde7) list_medium_line_t3_t1_ParamLimits

0xd3b0,	// (0x0004dde7) list_medium_line_t3_t1

0xd3c7,	// (0x0004ddfe) list_medium_line_t3_t2_ParamLimits

0xd3c7,	// (0x0004ddfe) list_medium_line_t3_t2

0xd3dc,	// (0x0004de13) list_medium_line_t3_t3_ParamLimits

0xd3dc,	// (0x0004de13) list_medium_line_t3_t3

0x0002,

0xfdb2,	// (0x000507e9) list_medium_line_t3_t_ParamLimits

0xfdb2,	// (0x000507e9) list_medium_line_t3_t

0x1752,	// (0x00042189) list_medium_line_g3_g1_ParamLimits

0x1752,	// (0x00042189) list_medium_line_g3_g1

0x17c8,	// (0x000421ff) list_medium_line_g3_g2_ParamLimits

0x17c8,	// (0x000421ff) list_medium_line_g3_g2

0x175e,	// (0x00042195) list_medium_line_g3_g3_ParamLimits

0x175e,	// (0x00042195) list_medium_line_g3_g3

0x0002,

0xfdb9,	// (0x000507f0) list_medium_line_g3_g_ParamLimits

0xfdb9,	// (0x000507f0) list_medium_line_g3_g

0x199d,	// (0x000423d4) list_medium_line_g3_t1_ParamLimits

0x199d,	// (0x000423d4) list_medium_line_g3_t1

0x1752,	// (0x00042189) list_medium_line_t2_g3_g1_ParamLimits

0x1752,	// (0x00042189) list_medium_line_t2_g3_g1

0x17c8,	// (0x000421ff) list_medium_line_t2_g3_g2_ParamLimits

0x17c8,	// (0x000421ff) list_medium_line_t2_g3_g2

0x175e,	// (0x00042195) list_medium_line_t2_g3_g3_ParamLimits

0x175e,	// (0x00042195) list_medium_line_t2_g3_g3

0x0002,

0xfdb9,	// (0x000507f0) list_medium_line_t2_g3_g_ParamLimits

0xfdb9,	// (0x000507f0) list_medium_line_t2_g3_g

0xd3ee,	// (0x0004de25) list_medium_line_t2_g3_t1_ParamLimits

0xd3ee,	// (0x0004de25) list_medium_line_t2_g3_t1

0xd408,	// (0x0004de3f) list_medium_line_t2_g3_t2_ParamLimits

0xd408,	// (0x0004de3f) list_medium_line_t2_g3_t2

0x0001,

0xfdc0,	// (0x000507f7) list_medium_line_t2_g3_t_ParamLimits

0xfdc0,	// (0x000507f7) list_medium_line_t2_g3_t

0x1752,	// (0x00042189) list_medium_line_t3_g3_g1_ParamLimits

0x1752,	// (0x00042189) list_medium_line_t3_g3_g1

0x17c8,	// (0x000421ff) list_medium_line_t3_g3_g2_ParamLimits

0x17c8,	// (0x000421ff) list_medium_line_t3_g3_g2

0x175e,	// (0x00042195) list_medium_line_t3_g3_g3_ParamLimits

0x175e,	// (0x00042195) list_medium_line_t3_g3_g3

0x0002,

0xfdb9,	// (0x000507f0) list_medium_line_t3_g3_g_ParamLimits

0xfdb9,	// (0x000507f0) list_medium_line_t3_g3_g

0xd41d,	// (0x0004de54) list_medium_line_t3_g3_t1_ParamLimits

0xd41d,	// (0x0004de54) list_medium_line_t3_g3_t1

0xd436,	// (0x0004de6d) list_medium_line_t3_g3_t2_ParamLimits

0xd436,	// (0x0004de6d) list_medium_line_t3_g3_t2

0xd44c,	// (0x0004de83) list_medium_line_t3_g3_t3_ParamLimits

0xd44c,	// (0x0004de83) list_medium_line_t3_g3_t3

0x0002,

0xfdc5,	// (0x000507fc) list_medium_line_t3_g3_t_ParamLimits

0xfdc5,	// (0x000507fc) list_medium_line_t3_g3_t

0x550a,	// (0x00045f41) list_medium_line_right_iconx2_g1

0x54c9,	// (0x00045f00) list_medium_line_right_iconx2_g2

0x0001,

0xfdcc,	// (0x00050803) list_medium_line_right_iconx2_g

0x55d5,	// (0x0004600c) list_medium_line_right_iconx2_t1

0x550a,	// (0x00045f41) list_medium_line_t2_right_iconx2_g1

0x54c9,	// (0x00045f00) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdcc,	// (0x00050803) list_medium_line_t2_right_iconx2_g

0xd462,	// (0x0004de99) list_medium_line_t2_right_iconx2_t1

0xd472,	// (0x0004dea9) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdd1,	// (0x00050808) list_medium_line_t2_right_iconx2_t

0x45cc,	// (0x00045003) list_medium_line_x4_t4_t1

0xd480,	// (0x0004deb7) list_medium_line_x4_t4_t2

0xd48e,	// (0x0004dec5) list_medium_line_x4_t4_t3

0xd49c,	// (0x0004ded3) list_medium_line_x4_t4_t4

0x0003,

0xfdd6,	// (0x0005080d) list_medium_line_x4_t4_t

0xd4cf,	// (0x0004df06) tport_appsw_pane_ParamLimits

0xd4cf,	// (0x0004df06) tport_appsw_pane

0xd4db,	// (0x0004df12) tport_contact_pane_ParamLimits

0xd4db,	// (0x0004df12) tport_contact_pane

0xd4e9,	// (0x0004df20) tport_listscroll_pane_ParamLimits

0xd4e9,	// (0x0004df20) tport_listscroll_pane

0xd4f7,	// (0x0004df2e) cell_tport_appsw_pane_ParamLimits

0xd4f7,	// (0x0004df2e) cell_tport_appsw_pane

0x3c7d,	// (0x000446b4) tport_appsw_pane_g1_ParamLimits

0x3c7d,	// (0x000446b4) tport_appsw_pane_g1

0xd504,	// (0x0004df3b) tport_contact_pane_g1

0xd50d,	// (0x0004df44) tport_contact_pane_t1

0xd51b,	// (0x0004df52) tport_contact_pane_t2

0x0001,

0xfddf,	// (0x00050816) tport_contact_pane_t

0xd529,	// (0x0004df60) list_tport_pane

0xe55d,	// (0x0004ef94) scroll_pane_cp_030

0xd53a,	// (0x0004df71) cell_tport_appsw_pane_g1

0xd553,	// (0x0004df8a) cell_tport_appsw_pane_t1

0xdcd2,	// (0x0004e709) grid_highlight_pane_cp019

0xd561,	// (0x0004df98) list_tport_double_graphic_pane_ParamLimits

0xd561,	// (0x0004df98) list_tport_double_graphic_pane

0xe7b3,	// (0x0004f1ea) list_highlight_pane_cp023_ParamLimits

0xe7b3,	// (0x0004f1ea) list_highlight_pane_cp023

0xd56e,	// (0x0004dfa5) list_tport_double_graphic_pane_g1_ParamLimits

0xd56e,	// (0x0004dfa5) list_tport_double_graphic_pane_g1

0xd57b,	// (0x0004dfb2) list_tport_double_graphic_pane_t1_ParamLimits

0xd57b,	// (0x0004dfb2) list_tport_double_graphic_pane_t1

0xd590,	// (0x0004dfc7) list_tport_double_graphic_pane_t2_ParamLimits

0xd590,	// (0x0004dfc7) list_tport_double_graphic_pane_t2

0x0001,

0xfdeb,	// (0x00050822) list_tport_double_graphic_pane_t_ParamLimits

0xfdeb,	// (0x00050822) list_tport_double_graphic_pane_t

0xdcd2,	// (0x0004e709) main_cale_note_pane

0xb527,	// (0x0004bf5e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xb527,	// (0x0004bf5e) cell_vitu2_function_top_wide_pane_cp01

0xcbbd,	// (0x0004d5f4) wait_bar_pane_cp05_ParamLimits

0xdcd2,	// (0x0004e709) listscroll_cmail_pane

0xd5a2,	// (0x0004dfd9) list_cmail_pane

0xd5be,	// (0x0004dff5) list_cmail_body_pane

0xd5be,	// (0x0004dff5) list_single_cmail_header_caption_pane

0xd5d6,	// (0x0004e00d) list_single_cmail_header_detail_pane_ParamLimits

0xd5d6,	// (0x0004e00d) list_single_cmail_header_detail_pane

0xd600,	// (0x0004e037) list_single_cmail_header_caption_pane_t1

0xd60e,	// (0x0004e045) list_single_cmail_header_detail_pane_g1_ParamLimits

0xd60e,	// (0x0004e045) list_single_cmail_header_detail_pane_g1

0x175e,	// (0x00042195) list_single_cmail_header_detail_pane_g2_ParamLimits

0x175e,	// (0x00042195) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdf0,	// (0x00050827) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdf0,	// (0x00050827) list_single_cmail_header_detail_pane_g

0x55eb,	// (0x00046022) list_single_cmail_header_detail_pane_t1_ParamLimits

0x55eb,	// (0x00046022) list_single_cmail_header_detail_pane_t1

0x5613,	// (0x0004604a) list_single_cmail_header_editor_pane_bg_ParamLimits

0x5613,	// (0x0004604a) list_single_cmail_header_editor_pane_bg

0xd655,	// (0x0004e08c) list_cmail_body_pane_g1

0xd65e,	// (0x0004e095) list_cmail_body_pane_t1

0x4388,	// (0x00044dbf) list_single_cmail_header_editor_pane_bg_g1

0x18bb,	// (0x000422f2) list_single_cmail_header_editor_pane_bg_g1_copy1

0x4398,	// (0x00044dcf) list_single_cmail_header_editor_pane_bg_g1_copy2

0x4390,	// (0x00044dc7) list_single_cmail_header_editor_pane_bg_g1_copy3

0x45da,	// (0x00045011) list_single_cmail_header_editor_pane_bg_g1_copy4

0x43b8,	// (0x00044def) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x43a8,	// (0x00044ddf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x43b0,	// (0x00044de7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x189b,	// (0x000422d2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd66c,	// (0x0004e0a3) calenote_gesture_pane_ParamLimits

0xd66c,	// (0x0004e0a3) calenote_gesture_pane

0xd684,	// (0x0004e0bb) calenote_window_pane_ParamLimits

0xd684,	// (0x0004e0bb) calenote_window_pane

0xd69c,	// (0x0004e0d3) popup_note_window_cp01

0xd6a5,	// (0x0004e0dc) calenote_swipe_1_pane_ParamLimits

0xd6a5,	// (0x0004e0dc) calenote_swipe_1_pane

0xcf54,	// (0x0004d98b) calenote_swipe_2_pane_ParamLimits

0xcf54,	// (0x0004d98b) calenote_swipe_2_pane

0xceb4,	// (0x0004d8eb) calenote_swipe_1_pane_g1_ParamLimits

0xceb4,	// (0x0004d8eb) calenote_swipe_1_pane_g1

0xcec1,	// (0x0004d8f8) calenote_swipe_1_pane_g2_ParamLimits

0xcec1,	// (0x0004d8f8) calenote_swipe_1_pane_g2

0x0001,

0xfd24,	// (0x0005075b) calenote_swipe_1_pane_g_ParamLimits

0xfd24,	// (0x0005075b) calenote_swipe_1_pane_g

0xd6c1,	// (0x0004e0f8) calenote_swipe_1_pane_t1_ParamLimits

0xd6c1,	// (0x0004e0f8) calenote_swipe_1_pane_t1

0xceb4,	// (0x0004d8eb) calenote_swipe_2_pane_g1_ParamLimits

0xceb4,	// (0x0004d8eb) calenote_swipe_2_pane_g1

0xd6e0,	// (0x0004e117) calenote_swipe_2_pane_g2_ParamLimits

0xd6e0,	// (0x0004e117) calenote_swipe_2_pane_g2

0x0001,

0xfdfc,	// (0x00050833) calenote_swipe_2_pane_g_ParamLimits

0xfdfc,	// (0x00050833) calenote_swipe_2_pane_g

0xd6ec,	// (0x0004e123) calenote_swipe_2_pane_t1_ParamLimits

0xd6ec,	// (0x0004e123) calenote_swipe_2_pane_t1

0xdcd2,	// (0x0004e709) main_mup_navstr_pane

0xa3c4,	// (0x0004adfb) main_mup3_pane_t7_ParamLimits

0xa3c4,	// (0x0004adfb) main_mup3_pane_t7

0xad4e,	// (0x0004b785) main_mp4_pane_g6_ParamLimits

0xad4e,	// (0x0004b785) main_mp4_pane_g6

0xb090,	// (0x0004bac7) main_image3_pane_t4_ParamLimits

0xb090,	// (0x0004bac7) main_image3_pane_t4

0xd713,	// (0x0004e14a) popup_navstr_preview_pane_ParamLimits

0xd713,	// (0x0004e14a) popup_navstr_preview_pane

0xd71f,	// (0x0004e156) scroll_navstr_pane_ParamLimits

0xd71f,	// (0x0004e156) scroll_navstr_pane

0xdcd2,	// (0x0004e709) bg_popup_preview_window_pane_cp04

0xd72b,	// (0x0004e162) popup_navstr_preview_pane_t1

0xd739,	// (0x0004e170) scroll_navstr_pane_g1_ParamLimits

0xd739,	// (0x0004e170) scroll_navstr_pane_g1

0xd746,	// (0x0004e17d) scroll_navstr_pane_t1_ParamLimits

0xd746,	// (0x0004e17d) scroll_navstr_pane_t1

0xd6b8,	// (0x0004e0ef) bg_button_pane_cp014

0xd6b8,	// (0x0004e0ef) bg_button_pane_cp030

0x546f,	// (0x00045ea6) list_double_fisheye_pane_g4_ParamLimits

0x546f,	// (0x00045ea6) list_double_fisheye_pane_g4

0x547b,	// (0x00045eb2) list_double_fisheye_pane_g5_ParamLimits

0x547b,	// (0x00045eb2) list_double_fisheye_pane_g5

0xd5b2,	// (0x0004dfe9) sp_fs_scroll_pane_cp03

0xd0c7,	// (0x0004dafe) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xd0d3,	// (0x0004db0a) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd41,	// (0x00050778) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xd0df,	// (0x0004db16) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xd5aa,	// (0x0004dfe1) sp_fs_scroll_pane_cp02

0xe56f,	// (0x0004efa6) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe56f,	// (0x0004efa6) popup_sp_fs_calendar_preview_list_single_pane

0xdcd2,	// (0x0004e709) main_cam6_pano_pane

0xe7b3,	// (0x0004f1ea) main_mup3_pane_ParamLimits

0xdcd2,	// (0x0004e709) main_phacti_pane

0xcab0,	// (0x0004d4e7) bg_button_pane_cp11

0xcac8,	// (0x0004d4ff) main_mobtv_info_pane_g2_ParamLimits

0xcac8,	// (0x0004d4ff) main_mobtv_info_pane_g2

0x0001,

0xfca1,	// (0x000506d8) main_mobtv_info_pane_g_ParamLimits

0xfca1,	// (0x000506d8) main_mobtv_info_pane_g

0xcc54,	// (0x0004d68b) sc_clock_pane_t5_ParamLimits

0xcc54,	// (0x0004d68b) sc_clock_pane_t5

0xccde,	// (0x0004d715) main_radioblah_pane_g1_ParamLimits

0x53d4,	// (0x00045e0b) main_radioblah_pane_t3_ParamLimits

0x53d4,	// (0x00045e0b) main_radioblah_pane_t3

0x53ec,	// (0x00045e23) main_radioblah_pane_t4_ParamLimits

0x53ec,	// (0x00045e23) main_radioblah_pane_t4

0xccfc,	// (0x0004d733) main_radioblah_text_pane_ParamLimits

0xccfc,	// (0x0004d733) main_radioblah_text_pane

0xcd09,	// (0x0004d740) main_radioblah_info_pane_g1_ParamLimits

0xcd96,	// (0x0004d7cd) main_radioblah_info_pane_t4_ParamLimits

0xcd96,	// (0x0004d7cd) main_radioblah_info_pane_t4

0xe7b3,	// (0x0004f1ea) main_sp_fs_calendar_pane

0xd758,	// (0x0004e18f) main_phacti_pane_g1

0xd769,	// (0x0004e1a0) phacti_note_pane_ParamLimits

0xd769,	// (0x0004e1a0) phacti_note_pane

0xd77d,	// (0x0004e1b4) phacti_term_pane_ParamLimits

0xd77d,	// (0x0004e1b4) phacti_term_pane

0xd792,	// (0x0004e1c9) phacti_note_pane_t1_ParamLimits

0xd792,	// (0x0004e1c9) phacti_note_pane_t1

0x5625,	// (0x0004605c) phacti_term_pane_g1

0x562d,	// (0x00046064) phacti_term_pane_t1_ParamLimits

0x562d,	// (0x00046064) phacti_term_pane_t1

0xd7a9,	// (0x0004e1e0) popup_sp_fs_calendar_preview_list_single_pane_g1

0xd7b1,	// (0x0004e1e8) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfe06,	// (0x0005083d) popup_sp_fs_calendar_preview_list_single_pane_g

0xd7b9,	// (0x0004e1f0) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xd7b9,	// (0x0004e1f0) popup_sp_fs_calendar_preview_list_single_pane_t1

0xd7cf,	// (0x0004e206) aid_popup_sp_fs_bg_corner_pane

0x3975,	// (0x000443ac) popup_sp_fs_calendar_preview_bg_pane_g1

0xdcd2,	// (0x0004e709) popup_sp_fs_calendar_preview_bg_pane

0xd7d7,	// (0x0004e20e) popup_sp_fs_calendar_preview_list_pane

0xe7b3,	// (0x0004f1ea) bg_main_sp_fs_cale_pane_ParamLimits

0xe7b3,	// (0x0004f1ea) bg_main_sp_fs_cale_pane

0x5657,	// (0x0004608e) listscroll_cale_mrui_pane_ParamLimits

0x5657,	// (0x0004608e) listscroll_cale_mrui_pane

0x566b,	// (0x000460a2) listscroll_sp_fs_schedule_track_pane

0x5674,	// (0x000460ab) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x5674,	// (0x000460ab) main_sp_fs_ctrlbar_pane_cp01

0xd806,	// (0x0004e23d) main_sp_fs_ribbon_pane

0x5685,	// (0x000460bc) popup_sp_fs_cale_preview_window

0xd80e,	// (0x0004e245) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd80e,	// (0x0004e245) list_single_sp_fs_schedule_track_pane

0x42f0,	// (0x00044d27) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x42f0,	// (0x00044d27) bg_sp_fs_highlight_list_pane_cp03

0xd823,	// (0x0004e25a) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd823,	// (0x0004e25a) list_single_sp_fs_schedule_track_pane_g1

0xd82f,	// (0x0004e266) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd82f,	// (0x0004e266) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfe0b,	// (0x00050842) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfe0b,	// (0x00050842) list_single_sp_fs_schedule_track_pane_g

0xd83b,	// (0x0004e272) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd83b,	// (0x0004e272) list_single_sp_fs_schedule_track_pane_t1

0xd853,	// (0x0004e28a) sp_fs_schedule_track_pane_ParamLimits

0xd853,	// (0x0004e28a) sp_fs_schedule_track_pane

0xd863,	// (0x0004e29a) sp_fs_schedule_track_pane_g1

0xd86b,	// (0x0004e2a2) sp_fs_schedule_track_pane_g2

0xd873,	// (0x0004e2aa) sp_fs_schedule_track_pane_g3

0xd87b,	// (0x0004e2b2) sp_fs_schedule_track_pane_g4

0xd883,	// (0x0004e2ba) sp_fs_schedule_track_pane_g5

0x0004,

0xfe10,	// (0x00050847) sp_fs_schedule_track_pane_g

0x4388,	// (0x00044dbf) bg_sp_fs_schedule_viewer_highlight_g1

0x18bb,	// (0x000422f2) bg_sp_fs_schedule_viewer_highlight_g2

0x4390,	// (0x00044dc7) bg_sp_fs_schedule_viewer_highlight_g3

0x4398,	// (0x00044dcf) bg_sp_fs_schedule_viewer_highlight_g4

0x45da,	// (0x00045011) bg_sp_fs_schedule_viewer_highlight_g5

0x43a8,	// (0x00044ddf) bg_sp_fs_schedule_viewer_highlight_g6

0x43b0,	// (0x00044de7) bg_sp_fs_schedule_viewer_highlight_g7

0x43b8,	// (0x00044def) bg_sp_fs_schedule_viewer_highlight_g8

0x189b,	// (0x000422d2) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe1b,	// (0x00050852) bg_sp_fs_schedule_viewer_highlight_g

0xdcd2,	// (0x0004e709) bg_main_sp_fs_ribbon_pane

0xd88b,	// (0x0004e2c2) main_sp_fs_ribbon_pane_g1

0xd894,	// (0x0004e2cb) main_sp_fs_ribbon_pane_t1

0xd8a3,	// (0x0004e2da) main_sp_fs_ribbon_pane_t2

0xd8b2,	// (0x0004e2e9) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe2e,	// (0x00050865) main_sp_fs_ribbon_pane_t

0xd8c1,	// (0x0004e2f8) main_sp_fs_ribbon_scheduler_pane

0xd8c9,	// (0x0004e300) bg_main_sp_fs_ribbon_pane_g1

0xd8d2,	// (0x0004e309) bg_main_sp_fs_ribbon_pane_g2

0xd8db,	// (0x0004e312) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe35,	// (0x0005086c) bg_main_sp_fs_ribbon_pane_g

0xd8e3,	// (0x0004e31a) main_sp_fs_ribbon_scheduler_pane_g1

0xd8ec,	// (0x0004e323) main_sp_fs_ribbon_scheduler_pane_g2

0xd8f5,	// (0x0004e32c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe3c,	// (0x00050873) main_sp_fs_ribbon_scheduler_pane_g

0x5446,	// (0x00045e7d) list_cale_mrui_pane

0xd8fe,	// (0x0004e335) sp_fs_scroll_pane_cp07_ParamLimits

0xd8fe,	// (0x0004e335) sp_fs_scroll_pane_cp07

0xd913,	// (0x0004e34a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd913,	// (0x0004e34a) bg_sp_fs_schedule_viewer_highlight

0xd920,	// (0x0004e357) list_single_sp_fs_schedule_track_pane_cp01

0xd928,	// (0x0004e35f) list_sp_fs_schedule_track_pane

0xd930,	// (0x0004e367) sp_fs_scroll_pane_cp06_ParamLimits

0xd930,	// (0x0004e367) sp_fs_scroll_pane_cp06

0x3975,	// (0x000443ac) bgmain_sp_fs_calendar_pane_g1

0xd942,	// (0x0004e379) list_single_cale_mrui_pane_ParamLimits

0xd942,	// (0x0004e379) list_single_cale_mrui_pane

0x5694,	// (0x000460cb) list_single_cale_mrui_row_pane_ParamLimits

0x5694,	// (0x000460cb) list_single_cale_mrui_row_pane

0x56a1,	// (0x000460d8) list_single_cale_mrui_row_pane_g1_ParamLimits

0x56a1,	// (0x000460d8) list_single_cale_mrui_row_pane_g1

0x56d9,	// (0x00046110) list_single_cale_mrui_row_pane_t1_ParamLimits

0x56d9,	// (0x00046110) list_single_cale_mrui_row_pane_t1

0xd968,	// (0x0004e39f) list_single_cale_mrui_row_pane_t2_ParamLimits

0xd968,	// (0x0004e39f) list_single_cale_mrui_row_pane_t2

0x56eb,	// (0x00046122) list_single_cale_mrui_row_pane_t3_ParamLimits

0x56eb,	// (0x00046122) list_single_cale_mrui_row_pane_t3

0x571a,	// (0x00046151) list_single_cale_mrui_row_pane_t4_ParamLimits

0x571a,	// (0x00046151) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe48,	// (0x0005087f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe48,	// (0x0005087f) list_single_cale_mrui_row_pane_t

0xd9ce,	// (0x0004e405) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xd9ce,	// (0x0004e405) list_single_cmail_header_editor_pane_bg_cp01

0xd9f2,	// (0x0004e429) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xd9f2,	// (0x0004e429) list_single_cmail_header_editor_pane_bg_cp02

0xda10,	// (0x0004e447) main_radioblah_text_pane_t1_ParamLimits

0xda10,	// (0x0004e447) main_radioblah_text_pane_t1

0xda29,	// (0x0004e460) cam6_indi_pane_cp01

0xda31,	// (0x0004e468) cam6_mode_pane_cp01

0xda39,	// (0x0004e470) cam6_pano_pane

0xda42,	// (0x0004e479) cam6_zoom_pane_cp01

0xda4a,	// (0x0004e481) cam6_pano_image_pane

0xda53,	// (0x0004e48a) cam6_pano_pane_g1

0x5152,	// (0x00045b89) cam6_pano_pane_g2

0xda5c,	// (0x0004e493) cam6_pano_pane_g3

0xda65,	// (0x0004e49c) cam6_pano_pane_g4

0x3edb,	// (0x00044912) cam6_pano_pane_g5

0xda6e,	// (0x0004e4a5) cam6_pano_pane_g6

0xda76,	// (0x0004e4ad) cam6_pano_pane_g7

0xda7e,	// (0x0004e4b5) cam6_pano_pane_g8

0xda87,	// (0x0004e4be) cam6_pano_pane_g9

0x0008,

0xfe51,	// (0x00050888) cam6_pano_pane_g

0xdcd2,	// (0x0004e709) main_browser_tag_pane

0xd70b,	// (0x0004e142) grid_navstr_albumart_pane

0xda90,	// (0x0004e4c7) cell_navstr_albumart_pane_ParamLimits

0xda90,	// (0x0004e4c7) cell_navstr_albumart_pane

0x223a,	// (0x00042c71) cell_navstr_albumart_pane_g1

0x3317,	// (0x00043d4e) cell_navstr_albumart_pane_g2

0x3327,	// (0x00043d5e) cell_navstr_albumart_pane_g3

0x331f,	// (0x00043d56) cell_navstr_albumart_pane_g4

0x0003,

0xfe64,	// (0x0005089b) cell_navstr_albumart_pane_g

0xdaa7,	// (0x0004e4de) bt_list_pane_ParamLimits

0xdaa7,	// (0x0004e4de) bt_list_pane

0xdabc,	// (0x0004e4f3) bt_list_pane_t1

0xdacb,	// (0x0004e502) bt_list_pane_t2

0x0001,

0xfe6d,	// (0x000508a4) bt_list_pane_t

0xdcd2,	// (0x0004e709) main_cale_prevew_pane

0xdada,	// (0x0004e511) popup_cale_preview_window_ParamLimits

0xdada,	// (0x0004e511) popup_cale_preview_window

0xe7b3,	// (0x0004f1ea) bg_popup_preview_window_pane_cp05_ParamLimits

0xe7b3,	// (0x0004f1ea) bg_popup_preview_window_pane_cp05

0xdaef,	// (0x0004e526) list_cale_preview_pane_ParamLimits

0xdaef,	// (0x0004e526) list_cale_preview_pane

0xdafb,	// (0x0004e532) list_double_cale_preview_pane_ParamLimits

0xdafb,	// (0x0004e532) list_double_cale_preview_pane

0xdb0c,	// (0x0004e543) list_single_cale_preview_pane_ParamLimits

0xdb0c,	// (0x0004e543) list_single_cale_preview_pane

0xdb20,	// (0x0004e557) list_single_cale_preview_pane_g1

0xdb28,	// (0x0004e55f) list_single_cale_preview_pane_t1_ParamLimits

0xdb28,	// (0x0004e55f) list_single_cale_preview_pane_t1

0xdb3d,	// (0x0004e574) list_double_cale_preview_pane_g1

0xdb45,	// (0x0004e57c) list_double_cale_preview_pane_t1_ParamLimits

0xdb45,	// (0x0004e57c) list_double_cale_preview_pane_t1

0xdb5a,	// (0x0004e591) list_double_cale_preview_pane_t2_ParamLimits

0xdb5a,	// (0x0004e591) list_double_cale_preview_pane_t2

0x0001,

0xfe72,	// (0x000508a9) list_double_cale_preview_pane_t_ParamLimits

0xfe72,	// (0x000508a9) list_double_cale_preview_pane_t

0xdcd2,	// (0x0004e709) main_ezdial_pane

0xe7b3,	// (0x0004f1ea) main_sp_fs_email_pane_ParamLimits

0xd028,	// (0x0004da5f) cmail_ddmenu_btn01_pane_ParamLimits

0xd028,	// (0x0004da5f) cmail_ddmenu_btn01_pane

0xd045,	// (0x0004da7c) cmail_ddmenu_btn02_pane_ParamLimits

0xd045,	// (0x0004da7c) cmail_ddmenu_btn02_pane

0xd09b,	// (0x0004dad2) cmail_ddmenu_btn03_pane_ParamLimits

0xd09b,	// (0x0004dad2) cmail_ddmenu_btn03_pane

0xd0f4,	// (0x0004db2b) main_sp_fs_ctrlbar_pane_ParamLimits

0xd10c,	// (0x0004db43) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd5be,	// (0x0004dff5) list_cmail_body_pane_ParamLimits

0x55e3,	// (0x0004601a) bg_button_pane_cp12

0xd624,	// (0x0004e05b) list_single_cmail_header_detail_pane_g3_ParamLimits

0xd624,	// (0x0004e05b) list_single_cmail_header_detail_pane_g3

0xd631,	// (0x0004e068) list_single_cmail_header_detail_pane_t2_ParamLimits

0xd631,	// (0x0004e068) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdf7,	// (0x0005082e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdf7,	// (0x0005082e) list_single_cmail_header_detail_pane_t

0x5642,	// (0x00046079) phacti_term_pane_t2_ParamLimits

0x5642,	// (0x00046079) phacti_term_pane_t2

0x0001,

0xfe01,	// (0x00050838) phacti_term_pane_t_ParamLimits

0xfe01,	// (0x00050838) phacti_term_pane_t

0xdb72,	// (0x0004e5a9) aid_size_list_single_double

0xdb7e,	// (0x0004e5b5) popup_ezdial_listscroll_window

0xdb97,	// (0x0004e5ce) popup_number_entry_window_cp01

0x20cb,	// (0x00042b02) bg_popup_call_pane_cp09

0xdba3,	// (0x0004e5da) ezdial_list_pane

0xdbab,	// (0x0004e5e2) scroll_pane_cp23

0x3762,	// (0x00044199) bg_button_pane_cp028_ParamLimits

0x3762,	// (0x00044199) bg_button_pane_cp028

0xdbb3,	// (0x0004e5ea) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xdbb3,	// (0x0004e5ea) cmail_ddmenu_btn01_pane_g1

0xdbc5,	// (0x0004e5fc) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xdbc5,	// (0x0004e5fc) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe77,	// (0x000508ae) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe77,	// (0x000508ae) cmail_ddmenu_btn01_pane_g

0xdbd1,	// (0x0004e608) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xdbd1,	// (0x0004e608) cmail_ddmenu_btn01_pane_t1

0x353a,	// (0x00043f71) bg_button_pane_cp029_ParamLimits

0x353a,	// (0x00043f71) bg_button_pane_cp029

0xdbc5,	// (0x0004e5fc) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xdbc5,	// (0x0004e5fc) cmail_ddmenu_btn02_pane_g1

0xdbf2,	// (0x0004e629) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xdbf2,	// (0x0004e629) cmail_ddmenu_btn02_pane_t1

0x42f0,	// (0x00044d27) bg_button_pane_cp031_ParamLimits

0x42f0,	// (0x00044d27) bg_button_pane_cp031

0xdbc5,	// (0x0004e5fc) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xdbc5,	// (0x0004e5fc) cmail_ddmenu_btn03_pane_g1

0xdbf2,	// (0x0004e629) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xdbf2,	// (0x0004e629) cmail_ddmenu_btn03_pane_t1

0xaf3f,	// (0x0004b976) cell_dialer2_keypad_pane_t1_ParamLimits

0xaf59,	// (0x0004b990) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xaf59,	// (0x0004b990) cell_dialer2_keypad_pane_t1_copy1

0xc977,	// (0x0004d3ae) ncimui_group_button_pane

0xe7b3,	// (0x0004f1ea) main_sp_fs_calendar_pane_ParamLimits

0xd5be,	// (0x0004dff5) list_single_cmail_header_caption_pane_ParamLimits

0x490c,	// (0x00045343) aid_recal_txt_sm_pane

0xdcd2,	// (0x0004e709) mian_recal_day_pane

0x5685,	// (0x000460bc) popup_sp_fs_cale_preview_window_ParamLimits

0xdcd2,	// (0x0004e709) list_recal_day_pane

0x5752,	// (0x00046189) list_single_recal_day_pane_ParamLimits

0x5752,	// (0x00046189) list_single_recal_day_pane

0xdc26,	// (0x0004e65d) list_single_recal_day_pane_g1_ParamLimits

0xdc26,	// (0x0004e65d) list_single_recal_day_pane_g1

0x5764,	// (0x0004619b) list_single_recal_day_pane_g2_ParamLimits

0x5764,	// (0x0004619b) list_single_recal_day_pane_g2

0x5770,	// (0x000461a7) list_single_recal_day_pane_g3_ParamLimits

0x5770,	// (0x000461a7) list_single_recal_day_pane_g3

0xdc32,	// (0x0004e669) list_single_recal_day_pane_g4_ParamLimits

0xdc32,	// (0x0004e669) list_single_recal_day_pane_g4

0x577c,	// (0x000461b3) list_single_recal_day_pane_g5_ParamLimits

0x577c,	// (0x000461b3) list_single_recal_day_pane_g5

0x5788,	// (0x000461bf) list_single_recal_day_pane_g6_ParamLimits

0x5788,	// (0x000461bf) list_single_recal_day_pane_g6

0x0005,

0xfe86,	// (0x000508bd) list_single_recal_day_pane_g_ParamLimits

0xfe86,	// (0x000508bd) list_single_recal_day_pane_g

0x5794,	// (0x000461cb) list_single_recal_day_pane_t1

0x57a2,	// (0x000461d9) list_single_recal_day_pane_t2

0x0001,

0xfe93,	// (0x000508ca) list_single_recal_day_pane_t

0xdc3e,	// (0x0004e675) ncimui_query_button_pane_ParamLimits

0xdc3e,	// (0x0004e675) ncimui_query_button_pane

0xdc4e,	// (0x0004e685) ncimui_query_button_pane_t1_ParamLimits

0xdc4e,	// (0x0004e685) ncimui_query_button_pane_t1

0xdc61,	// (0x0004e698) ncimui_query_button_pane_t2_ParamLimits

0xdc61,	// (0x0004e698) ncimui_query_button_pane_t2

0x0001,

0xfe98,	// (0x000508cf) ncimui_query_button_pane_t_ParamLimits

0xfe98,	// (0x000508cf) ncimui_query_button_pane_t

0xdc74,	// (0x0004e6ab) query_button_pane_ParamLimits

0xdc74,	// (0x0004e6ab) query_button_pane

0xdcd2,	// (0x0004e709) bg_button_pane_cp0028

0xdc81,	// (0x0004e6b8) query_button_pane_t1

0x955d,	// (0x00049f94) main_tport_pane_ParamLimits

0xd4aa,	// (0x0004dee1) bg_popup_window_pane_cp01_ParamLimits

0xd4aa,	// (0x0004dee1) bg_popup_window_pane_cp01

0xd4b7,	// (0x0004deee) heading_pane_cp08_ParamLimits

0xd4b7,	// (0x0004deee) heading_pane_cp08

0xd4c3,	// (0x0004defa) heading_pane_cp07_ParamLimits

0xd4c3,	// (0x0004defa) heading_pane_cp07

0xd543,	// (0x0004df7a) cell_tport_appsw_pane_g2

0x0002,

0xfde4,	// (0x0005081b) cell_tport_appsw_pane_g

0x8de9,	// (0x00049820) input_candi_list_open_g1

0x1a8d,	// (0x000424c4) list_cale_time_pane_g6_ParamLimits

0x1a8d,	// (0x000424c4) list_cale_time_pane_g6

0x9efe,	// (0x0004a935) aid_size_touch_calib_1_ParamLimits

0x9efe,	// (0x0004a935) aid_size_touch_calib_1

0x9f0a,	// (0x0004a941) aid_size_touch_calib_2_ParamLimits

0x9f0a,	// (0x0004a941) aid_size_touch_calib_2

0x9f16,	// (0x0004a94d) aid_size_touch_calib_3_ParamLimits

0x9f16,	// (0x0004a94d) aid_size_touch_calib_3

0x9f24,	// (0x0004a95b) aid_size_touch_calib_4_ParamLimits

0x9f24,	// (0x0004a95b) aid_size_touch_calib_4

0x9f32,	// (0x0004a969) main_touch_calib_button_group_pane_ParamLimits

0x9f32,	// (0x0004a969) main_touch_calib_button_group_pane

0x9f3f,	// (0x0004a976) main_touch_calib_pane_g1_ParamLimits

0x9f4b,	// (0x0004a982) main_touch_calib_pane_g2_ParamLimits

0x9f57,	// (0x0004a98e) main_touch_calib_pane_g3_ParamLimits

0x9f63,	// (0x0004a99a) main_touch_calib_pane_g4_ParamLimits

0xf7cb,	// (0x00050202) main_touch_calib_pane_g_ParamLimits

0x9f6f,	// (0x0004a9a6) main_touch_calib_pane_t1_ParamLimits

0x9f84,	// (0x0004a9bb) main_touch_calib_pane_t2_ParamLimits

0x9f99,	// (0x0004a9d0) main_touch_calib_pane_t3_ParamLimits

0x9fab,	// (0x0004a9e2) main_touch_calib_pane_t4_ParamLimits

0x9fbd,	// (0x0004a9f4) main_touch_calib_pane_t5_ParamLimits

0xf7d4,	// (0x0005020b) main_touch_calib_pane_t_ParamLimits

0x3d06,	// (0x0004473d) list_single_fp_cale_pane_g3_ParamLimits

0x3d06,	// (0x0004473d) list_single_fp_cale_pane_g3

0xb35c,	// (0x0004bd93) bg_button_pane_cp012_ParamLimits

0xb35c,	// (0x0004bd93) bg_vkb2_func_pane_cp03_ParamLimits

0xbc5c,	// (0x0004c693) cell_vitu2_function_top_pane_g1_ParamLimits

0xb35c,	// (0x0004bd93) bg_vkb2_func_pane_cp04_ParamLimits

0xc92a,	// (0x0004d361) main_ncimui_button_group_pane_ParamLimits

0xc92a,	// (0x0004d361) main_ncimui_button_group_pane

0xc965,	// (0x0004d39c) main_ncimui_pane_t3_ParamLimits

0xc965,	// (0x0004d39c) main_ncimui_pane_t3

0xd760,	// (0x0004e197) phacti_button_group_pane

0xdb72,	// (0x0004e5a9) aid_size_list_single_double_ParamLimits

0xdb7e,	// (0x0004e5b5) popup_ezdial_listscroll_window_ParamLimits

0xdb97,	// (0x0004e5ce) popup_number_entry_window_cp01_ParamLimits

0xe7d5,	// (0x0004f20c) phacti_button_pane_ParamLimits

0xe7d5,	// (0x0004f20c) phacti_button_pane

0xdcd2,	// (0x0004e709) bg_button_pane_cp14

0xe7e4,	// (0x0004f21b) phacti_button_pane_t1

0xe7f2,	// (0x0004f229) main_touch_calib_button_pane_ParamLimits

0xe7f2,	// (0x0004f229) main_touch_calib_button_pane

0xe458,	// (0x0004ee8f) bg_button_pane_cp18_ParamLimits

0xe458,	// (0x0004ee8f) bg_button_pane_cp18

0xe802,	// (0x0004f239) main_touch_calib_button_pane_t1_ParamLimits

0xe802,	// (0x0004f239) main_touch_calib_button_pane_t1

0xe818,	// (0x0004f24f) main_touch_calib_button_pane_t2_ParamLimits

0xe818,	// (0x0004f24f) main_touch_calib_button_pane_t2

0x0001,

0xfe9d,	// (0x000508d4) main_touch_calib_button_pane_t_ParamLimits

0xfe9d,	// (0x000508d4) main_touch_calib_button_pane_t

0xdcd2,	// (0x0004e709) cell_ncimui_button_pane

0xdcd2,	// (0x0004e709) bg_button_pane_cp032

0xe836,	// (0x0004f26d) cell_ncimui_button_pane_t1

0xafab,	// (0x0004b9e2) image3_infobar_pane_ParamLimits

0xafab,	// (0x0004b9e2) image3_infobar_pane

0xcc74,	// (0x0004d6ab) fs_bigclock_status_pane_ParamLimits

0xcc74,	// (0x0004d6ab) fs_bigclock_status_pane

0xcc81,	// (0x0004d6b8) main_fs_bigclock_clock_pane_ParamLimits

0xcc81,	// (0x0004d6b8) main_fs_bigclock_clock_pane

0xcc91,	// (0x0004d6c8) main_fs_bigclock_indi_pane_ParamLimits

0xcc91,	// (0x0004d6c8) main_fs_bigclock_indi_pane

0xccb6,	// (0x0004d6ed) main_fs_bigclock_swipe_pane_ParamLimits

0xccb6,	// (0x0004d6ed) main_fs_bigclock_swipe_pane

0xdcd2,	// (0x0004e709) main_fs_clock_dumped_data

0x525f,	// (0x00045c96) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x525f,	// (0x00045c96) list_single_fs_bigclock_indicator_pane_g1

0x5279,	// (0x00045cb0) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x5279,	// (0x00045cb0) list_single_fs_bigclock_indicator_pane_g2

0x5293,	// (0x00045cca) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x5293,	// (0x00045cca) list_single_fs_bigclock_indicator_pane_g3

0x52ad,	// (0x00045ce4) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x52ad,	// (0x00045ce4) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcd5,	// (0x0005070c) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcd5,	// (0x0005070c) list_single_fs_bigclock_indicator_pane_g

0x52d1,	// (0x00045d08) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x52d1,	// (0x00045d08) list_single_fs_bigclock_indicator_pane_t1

0x52f9,	// (0x00045d30) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x52f9,	// (0x00045d30) list_single_fs_bigclock_indicator_pane_t2

0x5321,	// (0x00045d58) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x5321,	// (0x00045d58) list_single_fs_bigclock_indicator_pane_t3

0x5349,	// (0x00045d80) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x5349,	// (0x00045d80) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfce0,	// (0x00050717) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfce0,	// (0x00050717) list_single_fs_bigclock_indicator_pane_t

0xe844,	// (0x0004f27b) image3_infobar_fav_pane_ParamLimits

0xe844,	// (0x0004f27b) image3_infobar_fav_pane

0xe854,	// (0x0004f28b) image3_infobar_loc_pane_ParamLimits

0xe854,	// (0x0004f28b) image3_infobar_loc_pane

0xe868,	// (0x0004f29f) image3_infobar_time_pane_ParamLimits

0xe868,	// (0x0004f29f) image3_infobar_time_pane

0x3975,	// (0x000443ac) image3_infobar_time_pane_g1

0xe878,	// (0x0004f2af) image3_infobar_time_pane_t1

0x3975,	// (0x000443ac) image3_infobar_loc_pane_g1

0xe886,	// (0x0004f2bd) image3_infobar_loc_pane_g2

0x0001,

0xfea2,	// (0x000508d9) image3_infobar_loc_pane_g

0xe88e,	// (0x0004f2c5) image3_infobar_loc_pane_t1

0x3975,	// (0x000443ac) image3_infobar_fav_pane_g1

0xe89c,	// (0x0004f2d3) image3_infobar_fav_pane_g2

0x0001,

0xfea7,	// (0x000508de) image3_infobar_fav_pane_g

0xe8a4,	// (0x0004f2db) fs_bigclock_status_battery_pane

0xe8ad,	// (0x0004f2e4) fs_bigclock_status_signal_pane

0xe8b6,	// (0x0004f2ed) fs_bigclock_status_title_pane

0xe8bf,	// (0x0004f2f6) fs_bigclock_status_signal_pane_g1

0xe8c8,	// (0x0004f2ff) fs_bigclock_status_signal_pane_g2

0x0001,

0xfeac,	// (0x000508e3) fs_bigclock_status_signal_pane_g

0xe8d0,	// (0x0004f307) fs_bigclock_status_battery_pane_g1

0xe8d9,	// (0x0004f310) fs_bigclock_status_battery_pane_g2

0x0001,

0xfeb1,	// (0x000508e8) fs_bigclock_status_battery_pane_g

0xe8e1,	// (0x0004f318) fs_bigclock_status_title_pane_t1

0x3975,	// (0x000443ac) main_fs_bigclock_clock_pane_g1

0xe8ef,	// (0x0004f326) main_fs_bigclock_clock_pane_g2

0xe8ef,	// (0x0004f326) main_fs_bigclock_clock_pane_g3

0xe8ef,	// (0x0004f326) main_fs_bigclock_clock_pane_g4

0x0003,

0xfeb6,	// (0x000508ed) main_fs_bigclock_clock_pane_g

0xe8f7,	// (0x0004f32e) main_fs_bigclock_clock_pane_t1

0xe905,	// (0x0004f33c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfebf,	// (0x000508f6) main_fs_bigclock_clock_pane_t

0xe914,	// (0x0004f34b) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe914,	// (0x0004f34b) list_single_fs_bigclock_indicator_pane

0xe925,	// (0x0004f35c) list_single_fs_bigclock_pane_ParamLimits

0xe925,	// (0x0004f35c) list_single_fs_bigclock_pane

0xe98c,	// (0x0004f3c3) main_fs_bigclock_indicator_pane_t1

0xe99b,	// (0x0004f3d2) list_single_fs_bigclock_pane_g1

0xe9a3,	// (0x0004f3da) list_single_fs_bigclock_pane_t1

0x3975,	// (0x000443ac) main_fs_bigclock_swipe_pane_g1

0xe9e1,	// (0x0004f418) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfed0,	// (0x00050907) main_fs_bigclock_swipe_pane_g

0xe9e9,	// (0x0004f420) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe9e9,	// (0x0004f420) main_fs_bigclock_swipe_pane_t1

0x86dd,	// (0x00049114) call_type_pane_ParamLimits

0xdcd2,	// (0x0004e709) main_btmg_pane

0x56cd,	// (0x00046104) list_single_cale_mrui_row_pane_g2_ParamLimits

0x56cd,	// (0x00046104) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe43,	// (0x0005087a) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe43,	// (0x0005087a) list_single_cale_mrui_row_pane_g

0xdc16,	// (0x0004e64d) list_recal_vselct_arw_lo_pane

0xdc1e,	// (0x0004e655) list_recal_vselct_arw_up_pane

0x5749,	// (0x00046180) list_recal_vselct_pane

0xea06,	// (0x0004f43d) btmg_button_pane

0xea0e,	// (0x0004f445) main_btmg_pane_g1

0xdcd2,	// (0x0004e709) bg_button_pane_cp044

0xea16,	// (0x0004f44d) btmg_button_pane_t1

0x3532,	// (0x00043f69) aid_listscroll_gen

0xe7b3,	// (0x0004f1ea) main_cntbar_detail_pane

0xd5a2,	// (0x0004dfd9) list_cmail_folder_pane

0xd5b2,	// (0x0004dfe9) sp_fs_scroll_pane_cp03_ParamLimits

0xd5be,	// (0x0004dff5) list_single_fs_dyc_pane_cp01_ParamLimits

0xd5be,	// (0x0004dff5) list_single_fs_dyc_pane_cp01

0xea24,	// (0x0004f45b) aid_size_cmail_indent

0x4915,	// (0x0004534c) list_single_dyc_row_pane_cp01

0xea47,	// (0x0004f47e) cntbar_detail_list_pane_ParamLimits

0xea47,	// (0x0004f47e) cntbar_detail_list_pane

0xea7d,	// (0x0004f4b4) main_cntbar_detail_cont_pane_ParamLimits

0xea7d,	// (0x0004f4b4) main_cntbar_detail_cont_pane

0xea89,	// (0x0004f4c0) scroll_pane_cp032_ParamLimits

0xea89,	// (0x0004f4c0) scroll_pane_cp032

0xea95,	// (0x0004f4cc) cntbar_detail_list_event_pane_ParamLimits

0xea95,	// (0x0004f4cc) cntbar_detail_list_event_pane

0xea53,	// (0x0004f48a) cntbar_detail_list_shct_pane

0xeaa5,	// (0x0004f4dc) aid_list_gen

0xe55d,	// (0x0004ef94) aid_scroll

0x48ea,	// (0x00045321) aid_size_touch_scroll_bar

0x57b0,	// (0x000461e7) aid_list_double

0xdc8f,	// (0x0004e6c6) aid_list_single

0x4976,	// (0x000453ad) aid_list_single_lg

0x57b9,	// (0x000461f0) aid_list_z_g_a_sm

0xdc98,	// (0x0004e6cf) aid_list_z_g_d

0xdca0,	// (0x0004e6d7) aid_txt_z_prm

0x57c1,	// (0x000461f8) aid_txt_z_prm_cp01

0x57cf,	// (0x00046206) aid_txt_z_sec

0xeaae,	// (0x0004f4e5) main_cntbar_detail_cont_pane_g1_ParamLimits

0xeaae,	// (0x0004f4e5) main_cntbar_detail_cont_pane_g1

0xeabb,	// (0x0004f4f2) main_cntbar_detail_cont_pane_g2_ParamLimits

0xeabb,	// (0x0004f4f2) main_cntbar_detail_cont_pane_g2

0x0001,

0xfed5,	// (0x0005090c) main_cntbar_detail_cont_pane_g_ParamLimits

0xfed5,	// (0x0005090c) main_cntbar_detail_cont_pane_g

0xeac7,	// (0x0004f4fe) main_cntbar_detail_cont_pane_t1

0xead5,	// (0x0004f50c) main_cntbar_detail_cont_pane_t2

0xeae3,	// (0x0004f51a) main_cntbar_detail_cont_pane_t3

0x0002,

0xfeda,	// (0x00050911) main_cntbar_detail_cont_pane_t

0xeaf1,	// (0x0004f528) cell_cntbar_detail_list_shct_pane_ParamLimits

0xeaf1,	// (0x0004f528) cell_cntbar_detail_list_shct_pane

0xeb03,	// (0x0004f53a) cntbar_detail_list_shct_pane_g1

0xeb0c,	// (0x0004f543) cntbar_detail_list_shct_pane_g2

0x0001,

0xfee1,	// (0x00050918) cntbar_detail_list_shct_pane_g

0xeb15,	// (0x0004f54c) cntbar_detail_list_event_pane_g1_ParamLimits

0xeb15,	// (0x0004f54c) cntbar_detail_list_event_pane_g1

0xeb21,	// (0x0004f558) cntbar_detail_list_event_pane_g2_ParamLimits

0xeb21,	// (0x0004f558) cntbar_detail_list_event_pane_g2

0x0005,

0xfee6,	// (0x0005091d) cntbar_detail_list_event_pane_g_ParamLimits

0xfee6,	// (0x0005091d) cntbar_detail_list_event_pane_g

0xeb8d,	// (0x0004f5c4) cntbar_detail_list_event_pane_t1_ParamLimits

0xeb8d,	// (0x0004f5c4) cntbar_detail_list_event_pane_t1

0xeba2,	// (0x0004f5d9) cntbar_detail_list_event_pane_t2_ParamLimits

0xeba2,	// (0x0004f5d9) cntbar_detail_list_event_pane_t2

0x0002,

0xfef3,	// (0x0005092a) cntbar_detail_list_event_pane_t_ParamLimits

0xfef3,	// (0x0005092a) cntbar_detail_list_event_pane_t

0x3975,	// (0x000443ac) cell_cntbar_detail_list_shct_pane_g1

0x208a,	// (0x00042ac1) navi_pane_mv_g3

0xe7b3,	// (0x0004f1ea) main_cntbar_detail_pane_ParamLimits

0xdcd2,	// (0x0004e709) main_notif_wgt_pane

0xac99,	// (0x0004b6d0) aid_tch_main_mp4_pane_g4

0xaec0,	// (0x0004b8f7) popup_slider_window_cp02

0x5749,	// (0x00046180) list_recal_day_event_pane

0xea2d,	// (0x0004f464) cntbar_detail_btn_pane_ParamLimits

0xea2d,	// (0x0004f464) cntbar_detail_btn_pane

0xea39,	// (0x0004f470) cntbar_detail_btn_pane_cp01_ParamLimits

0xea39,	// (0x0004f470) cntbar_detail_btn_pane_cp01

0xea53,	// (0x0004f48a) cntbar_detail_list_shct_pane_ParamLimits

0xea5f,	// (0x0004f496) cntbar_detail_pane_g1_ParamLimits

0xea5f,	// (0x0004f496) cntbar_detail_pane_g1

0xea6b,	// (0x0004f4a2) cntbar_detail_pane_t1_ParamLimits

0xea6b,	// (0x0004f4a2) cntbar_detail_pane_t1

0xeb2d,	// (0x0004f564) cntbar_detail_list_event_pane_g3_ParamLimits

0xeb2d,	// (0x0004f564) cntbar_detail_list_event_pane_g3

0xeb45,	// (0x0004f57c) cntbar_detail_list_event_pane_g4_ParamLimits

0xeb45,	// (0x0004f57c) cntbar_detail_list_event_pane_g4

0xeb5d,	// (0x0004f594) cntbar_detail_list_event_pane_g5_ParamLimits

0xeb5d,	// (0x0004f594) cntbar_detail_list_event_pane_g5

0xeb75,	// (0x0004f5ac) cntbar_detail_list_event_pane_g6_ParamLimits

0xeb75,	// (0x0004f5ac) cntbar_detail_list_event_pane_g6

0xebb7,	// (0x0004f5ee) cntbar_detail_list_event_pane_t3_ParamLimits

0xebb7,	// (0x0004f5ee) cntbar_detail_list_event_pane_t3

0xebc9,	// (0x0004f600) popup_notif_wgt_window_ParamLimits

0xebc9,	// (0x0004f600) popup_notif_wgt_window

0xebd7,	// (0x0004f60e) popup_submenu_window_cp01_ParamLimits

0xebd7,	// (0x0004f60e) popup_submenu_window_cp01

0x20cb,	// (0x00042b02) bg_popup_window_pane_cp10

0xebe3,	// (0x0004f61a) listscroll_notif_wgt_pane

0xebeb,	// (0x0004f622) list_notif_wgt_window

0xebf4,	// (0x0004f62b) scroll_pane_cp033

0xebfd,	// (0x0004f634) list_notif_wgt_row_pane_ParamLimits

0xebfd,	// (0x0004f634) list_notif_wgt_row_pane

0xec0f,	// (0x0004f646) aid_size_list_notif_wgt_del

0xec18,	// (0x0004f64f) list_notif_wgt_row_pane_g1

0xec20,	// (0x0004f657) list_notif_wgt_row_pane_g2

0xec28,	// (0x0004f65f) list_notif_wgt_row_pane_g3

0x0002,

0xfefa,	// (0x00050931) list_notif_wgt_row_pane_g

0xec31,	// (0x0004f668) list_notif_wgt_row_pane_t1

0xec3f,	// (0x0004f676) list_notif_wgt_row_pane_t2

0xec4d,	// (0x0004f684) list_notif_wgt_row_pane_t3

0x0002,

0xff01,	// (0x00050938) list_notif_wgt_row_pane_t

0x45e2,	// (0x00045019) list_recal_day_event_pane_g1

0xec5b,	// (0x0004f692) list_recal_day_event_pane_t1

0xdcd2,	// (0x0004e709) bg_button_pane_cp045

0xec6a,	// (0x0004f6a1) cntbar_detail_btn_pane_t1

0x353a,	// (0x00043f71) main_callh_pane_ParamLimits

0x353a,	// (0x00043f71) main_callh_pane

0xdcd2,	// (0x0004e709) main_coverflow0_pane

0xdcd2,	// (0x0004e709) main_wgtman_pane

0xccc8,	// (0x0004d6ff) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xccc8,	// (0x0004d6ff) main_fs_bigclock_unlock_btn_pane

0xd532,	// (0x0004df69) bg_button_pane_cp16

0xd54b,	// (0x0004df82) cell_tport_appsw_pane_g3

0xec78,	// (0x0004f6af) cf0_flow_pane_ParamLimits

0xec78,	// (0x0004f6af) cf0_flow_pane

0xec87,	// (0x0004f6be) listscroll_cf0_pane

0xec90,	// (0x0004f6c7) main_cf0_pane_g1

0xec9a,	// (0x0004f6d1) main_cf0_pane_t1_ParamLimits

0xec9a,	// (0x0004f6d1) main_cf0_pane_t1

0xecac,	// (0x0004f6e3) main_cf0_pane_t2_ParamLimits

0xecac,	// (0x0004f6e3) main_cf0_pane_t2

0x0001,

0xff08,	// (0x0005093f) main_cf0_pane_t_ParamLimits

0xff08,	// (0x0005093f) main_cf0_pane_t

0xecbe,	// (0x0004f6f5) scroll_pane_cp11

0xecc7,	// (0x0004f6fe) cf0_flow_pane_g1

0xeccf,	// (0x0004f706) cf0_flow_pane_g2

0x0001,

0xff0d,	// (0x00050944) cf0_flow_pane_g

0xecd7,	// (0x0004f70e) cf0_flow_pane_t1

0xdcd2,	// (0x0004e709) main_call6_pane

0xdcd2,	// (0x0004e709) main_calllock_pane

0xece5,	// (0x0004f71c) call6_btn_grp_pane_ParamLimits

0xece5,	// (0x0004f71c) call6_btn_grp_pane

0xecf2,	// (0x0004f729) call6_pane_g1_ParamLimits

0xecf2,	// (0x0004f729) call6_pane_g1

0xecff,	// (0x0004f736) popup_call6_1st_window_ParamLimits

0xecff,	// (0x0004f736) popup_call6_1st_window

0xed0b,	// (0x0004f742) popup_call6_2nd_window_ParamLimits

0xed0b,	// (0x0004f742) popup_call6_2nd_window

0xed17,	// (0x0004f74e) cell_call6_btn_pane_ParamLimits

0xed17,	// (0x0004f74e) cell_call6_btn_pane

0x20cb,	// (0x00042b02) bg_popup_call2_in_pane_cp03

0xed26,	// (0x0004f75d) popup_call6_1st_window_g1

0xed2e,	// (0x0004f765) popup_call6_1st_window_g2

0xed36,	// (0x0004f76d) popup_call6_1st_window_g3

0x0002,

0xff12,	// (0x00050949) popup_call6_1st_window_g

0xed3e,	// (0x0004f775) popup_call6_1st_window_t1

0xed4d,	// (0x0004f784) popup_call6_1st_window_t2

0xed5b,	// (0x0004f792) popup_call6_1st_window_t3

0x0002,

0xff19,	// (0x00050950) popup_call6_1st_window_t

0x20cb,	// (0x00042b02) bg_popup_call2_in_pane_cp04

0xed26,	// (0x0004f75d) popup_call6_2nd_window_g1

0xed2e,	// (0x0004f765) popup_call6_2nd_window_g2

0xed36,	// (0x0004f76d) popup_call6_2nd_window_g3

0x0002,

0xff12,	// (0x00050949) popup_call6_2nd_window_g

0xed3e,	// (0x0004f775) popup_call6_2nd_window_t1

0xdcd2,	// (0x0004e709) bg_button_pane_cp15

0xed69,	// (0x0004f7a0) cell_call6_btn_pane_g1

0xed72,	// (0x0004f7a9) cell_call6_btn_pane_t1

0xed81,	// (0x0004f7b8) listscroll_wgtman_pane_ParamLimits

0xed81,	// (0x0004f7b8) listscroll_wgtman_pane

0xed8e,	// (0x0004f7c5) wgtman_btn_pane_ParamLimits

0xed8e,	// (0x0004f7c5) wgtman_btn_pane

0x1f0c,	// (0x00042943) aid_scroll_copy1

0xed9a,	// (0x0004f7d1) list_wgtman_pane

0xeda4,	// (0x0004f7db) wgtman_btn_pane_g1_ParamLimits

0xeda4,	// (0x0004f7db) wgtman_btn_pane_g1

0xedb0,	// (0x0004f7e7) wgtman_btn_pane_t1_ParamLimits

0xedb0,	// (0x0004f7e7) wgtman_btn_pane_t1

0xedc2,	// (0x0004f7f9) wgtman_btn_pane_t2_ParamLimits

0xedc2,	// (0x0004f7f9) wgtman_btn_pane_t2

0x0001,

0xff20,	// (0x00050957) wgtman_btn_pane_t_ParamLimits

0xff20,	// (0x00050957) wgtman_btn_pane_t

0xedd4,	// (0x0004f80b) listrow_wgtman_pane_ParamLimits

0xedd4,	// (0x0004f80b) listrow_wgtman_pane

0xede5,	// (0x0004f81c) listrow_wgtman_pane_g1

0xedee,	// (0x0004f825) listrow_wgtman_pane_g2

0x0001,

0xff25,	// (0x0005095c) listrow_wgtman_pane_g

0xdcae,	// (0x0004e6e5) listrow_wgtman_pane_t1

0xdcbc,	// (0x0004e6f3) listrow_wgtman_pane_t2

0x0001,

0xff2a,	// (0x00050961) listrow_wgtman_pane_t

0xdcca,	// (0x0004e701) wait_bar_pane_cp09

0xedf6,	// (0x0004f82d) main_calllock_btn_pane

0xedfe,	// (0x0004f835) main_calllock_pane_g1

0xdcd2,	// (0x0004e709) bg_button_pane_cp17

0xee07,	// (0x0004f83e) main_calllock_btn_pane_g1

0xee10,	// (0x0004f847) main_calllock_btn_pane_t1

0xdcd2,	// (0x0004e709) main_dialer3_pane

0xdcd2,	// (0x0004e709) main_fmrd2_pane

0x3975,	// (0x000443ac) main_fs_bigclock_unlock_btn_pane_g1

0xee27,	// (0x0004f85e) main_fs_bigclock_unlock_btn_pane_t1

0xee35,	// (0x0004f86c) area_fmrd2_info_pane_ParamLimits

0xee35,	// (0x0004f86c) area_fmrd2_info_pane

0xee42,	// (0x0004f879) area_fmrd2_visual_pane_ParamLimits

0xee42,	// (0x0004f879) area_fmrd2_visual_pane

0xee50,	// (0x0004f887) fmrd2_indi_pane_ParamLimits

0xee50,	// (0x0004f887) fmrd2_indi_pane

0xee5d,	// (0x0004f894) area_fmrd2_visual_pane_g1

0xee65,	// (0x0004f89c) area_fmrd2_visual_pane_t1

0xee73,	// (0x0004f8aa) area_fmrd2_visual_pane_t2

0xee81,	// (0x0004f8b8) area_fmrd2_visual_pane_t3

0x0002,

0xff34,	// (0x0005096b) area_fmrd2_visual_pane_t

0xee8f,	// (0x0004f8c6) area_fmrd2_info_pane_g1

0xee97,	// (0x0004f8ce) area_fmrd2_info_pane_t1

0xeea5,	// (0x0004f8dc) area_fmrd2_info_pane_t2

0xeeb3,	// (0x0004f8ea) area_fmrd2_info_pane_t3

0xeec1,	// (0x0004f8f8) area_fmrd2_info_pane_t4

0x0003,

0xff3b,	// (0x00050972) area_fmrd2_info_pane_t

0xeecf,	// (0x0004f906) fmrd2_indi_pane_t1

0xeedd,	// (0x0004f914) fmrd2_indi_pane_t2

0xeeeb,	// (0x0004f922) fmrd2_indi_pane_t3

0x0002,

0xff44,	// (0x0005097b) fmrd2_indi_pane_t

0x52bc,	// (0x00045cf3) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x52bc,	// (0x00045cf3) list_single_fs_bigclock_indicator_pane_g5

0x535e,	// (0x00045d95) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x535e,	// (0x00045d95) list_single_fs_bigclock_indicator_pane_t5

0xd7df,	// (0x0004e216) aid_cell_bcale_month_pane_ParamLimits

0xd7df,	// (0x0004e216) aid_cell_bcale_month_pane

0xd7eb,	// (0x0004e222) bcale_month_pane_ParamLimits

0xd7eb,	// (0x0004e222) bcale_month_pane

0xd7f7,	// (0x0004e22e) bcale_preview_pane_ParamLimits

0xd7f7,	// (0x0004e22e) bcale_preview_pane

0xe9a3,	// (0x0004f3da) list_single_fs_bigclock_pane_t1_ParamLimits

0xe9bd,	// (0x0004f3f4) list_single_fs_bigclock_pane_t2_ParamLimits

0xe9bd,	// (0x0004f3f4) list_single_fs_bigclock_pane_t2

0x0001,

0xfecb,	// (0x00050902) list_single_fs_bigclock_pane_t_ParamLimits

0xfecb,	// (0x00050902) list_single_fs_bigclock_pane_t

0xee1f,	// (0x0004f856) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff2f,	// (0x00050966) main_fs_bigclock_unlock_btn_pane_g

0xeef9,	// (0x0004f930) aid_dia3_key_size_ParamLimits

0xeef9,	// (0x0004f930) aid_dia3_key_size

0xef05,	// (0x0004f93c) aid_dia3_listrow_size_ParamLimits

0xef05,	// (0x0004f93c) aid_dia3_listrow_size

0xef11,	// (0x0004f948) dia3_keypad_fun_pane_ParamLimits

0xef11,	// (0x0004f948) dia3_keypad_fun_pane

0xef1d,	// (0x0004f954) dia3_keypad_num_pane_ParamLimits

0xef1d,	// (0x0004f954) dia3_keypad_num_pane

0xef29,	// (0x0004f960) dia3_listscroll_pane_ParamLimits

0xef29,	// (0x0004f960) dia3_listscroll_pane

0xef35,	// (0x0004f96c) dia3_numentry_pane_ParamLimits

0xef35,	// (0x0004f96c) dia3_numentry_pane

0xef41,	// (0x0004f978) dia3_list_pane

0xef4a,	// (0x0004f981) scroll_pane_cp12

0xdcd2,	// (0x0004e709) bg_dia3_numentry_pane

0xef53,	// (0x0004f98a) dia3_numentry_pane_t1

0xef62,	// (0x0004f999) cell_dia3_key_num_pane

0xef6a,	// (0x0004f9a1) cell_dia3_key0_fun_pane_ParamLimits

0xef6a,	// (0x0004f9a1) cell_dia3_key0_fun_pane

0xef77,	// (0x0004f9ae) cell_dia3_key1_fun_pane_ParamLimits

0xef77,	// (0x0004f9ae) cell_dia3_key1_fun_pane

0xef84,	// (0x0004f9bb) dia3_listrow_pane

0x4fe9,	// (0x00045a20) bg_dia3_numentry_pane_g1

0xdcd2,	// (0x0004e709) bg_button_pane_cp21

0xef8d,	// (0x0004f9c4) cell_dia3_key_num_pane_t1

0xef9b,	// (0x0004f9d2) cell_dia3_key_num_pane_t2

0xefaa,	// (0x0004f9e1) cell_dia3_key_num_pane_t3

0xefb9,	// (0x0004f9f0) cell_dia3_key_num_pane_t4

0x0003,

0xff4b,	// (0x00050982) cell_dia3_key_num_pane_t

0xdcd2,	// (0x0004e709) bg_button_pane_cp19

0xefc8,	// (0x0004f9ff) cell_dia3_key0_fun_pane_g1

0xdcd2,	// (0x0004e709) bg_button_pane_cp20

0xefd0,	// (0x0004fa07) cell_dia3_key1_fun_pane_g1

0xefd8,	// (0x0004fa0f) area_left_week_number_pane

0xefe1,	// (0x0004fa18) area_top_day_name_pane

0xefea,	// (0x0004fa21) frame_month_view_pane

0xeff2,	// (0x0004fa29) grid_month_view_pane

0xeffc,	// (0x0004fa33) cell_top_day_name_pane_ParamLimits

0xeffc,	// (0x0004fa33) cell_top_day_name_pane

0xf012,	// (0x0004fa49) cell_area_left_week_number_pane_ParamLimits

0xf012,	// (0x0004fa49) cell_area_left_week_number_pane

0xf026,	// (0x0004fa5d) cell_month_view_pane_ParamLimits

0xf026,	// (0x0004fa5d) cell_month_view_pane

0xf041,	// (0x0004fa78) frm_month_g1

0xf04a,	// (0x0004fa81) frm_month_g2

0xf052,	// (0x0004fa89) frm_month_g3

0xf05a,	// (0x0004fa91) frm_month_g4

0xf062,	// (0x0004fa99) frm_month_g5

0xf06a,	// (0x0004faa1) frm_month_g6

0xf072,	// (0x0004faa9) frm_month_g7

0xf07a,	// (0x0004fab1) frm_month_g8

0xf083,	// (0x0004faba) frm_month_g9

0xf08c,	// (0x0004fac3) frm_month_g10

0xf095,	// (0x0004facc) frm_month_g11

0xf09e,	// (0x0004fad5) frm_month_g12

0xf0a7,	// (0x0004fade) frm_month_g13

0xf0b0,	// (0x0004fae7) frm_month_g14

0xf0b9,	// (0x0004faf0) frm_month_g15

0xf0c2,	// (0x0004faf9) frm_month_g16

0x000f,

0xff54,	// (0x0005098b) frm_month_g

0xf0cb,	// (0x0004fb02) cell_top_day_name_pane_t1

0xf0da,	// (0x0004fb11) cell_area_left_week_number_pane_g1

0xf0cb,	// (0x0004fb02) cell_area_left_week_number_pane_t1

0x3975,	// (0x000443ac) cell_month_view_pane_g1

0xf0e2,	// (0x0004fb19) cell_month_view_pane_t1

0xdcd2,	// (0x0004e709) main_fps_pane

0xd063,	// (0x0004da9a) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xd063,	// (0x0004da9a) cmail_ddmenu_btn02_pane_cp1

0xd07f,	// (0x0004dab6) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xd07f,	// (0x0004dab6) cmail_ddmenu_btn02_pane_cp2

0xdbe6,	// (0x0004e61d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xdbe6,	// (0x0004e61d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe7c,	// (0x000508b3) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe7c,	// (0x000508b3) cmail_ddmenu_btn02_pane_g

0xdc04,	// (0x0004e63b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xdc04,	// (0x0004e63b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe81,	// (0x000508b8) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe81,	// (0x000508b8) cmail_ddmenu_btn02_pane_t

0xf0f1,	// (0x0004fb28) fps_text_pane_ParamLimits

0xf0f1,	// (0x0004fb28) fps_text_pane

0xf0fe,	// (0x0004fb35) main_fps_pane_g1_ParamLimits

0xf0fe,	// (0x0004fb35) main_fps_pane_g1

0xf10a,	// (0x0004fb41) wait_bar_pane_cp010_ParamLimits

0xf10a,	// (0x0004fb41) wait_bar_pane_cp010

0xf116,	// (0x0004fb4d) fps_text_pane_t1_ParamLimits

0xf116,	// (0x0004fb4d) fps_text_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Small
