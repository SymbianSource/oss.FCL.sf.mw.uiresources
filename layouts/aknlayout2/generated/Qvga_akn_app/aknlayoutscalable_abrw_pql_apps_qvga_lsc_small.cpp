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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0005a92c };

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
0x0bb7,	// (0x0005b4e3) Screen

0x0bc1,	// (0x0005b4ed) application_window

0x0c01,	// (0x0005b52d) area_bottom_pane_ParamLimits

0x0c01,	// (0x0005b52d) area_bottom_pane

0x0c34,	// (0x0005b560) area_top_pane_ParamLimits

0x0c34,	// (0x0005b560) area_top_pane

0x99af,	// (0x000642db) call_video_uplink_pane_ParamLimits

0x99af,	// (0x000642db) call_video_uplink_pane

0x0cb4,	// (0x0005b5e0) main_pane_ParamLimits

0x0cb4,	// (0x0005b5e0) main_pane

0xe278,	// (0x00068ba4) context_pane

0x3ec9,	// (0x0005e7f5) navi_pane

0x3ef2,	// (0x0005e81e) popup_cale_events_window_ParamLimits

0x3ef2,	// (0x0005e81e) popup_cale_events_window

0xe28b,	// (0x00068bb7) popup_mup_playback_window

0x3f0a,	// (0x0005e836) signal_pane

0xa11a,	// (0x00064a46) main_browser_pane

0xa389,	// (0x00064cb5) main_burst_pane

0x99cb,	// (0x000642f7) main_calc_pane

0xe254,	// (0x00068b80) main_cale_day_pane

0x3c6f,	// (0x0005e59b) main_cale_month_pane

0xe254,	// (0x00068b80) main_cale_week_pane

0xa389,	// (0x00064cb5) main_call_pane

0x9dd4,	// (0x00064700) main_call_poc_pane

0xa389,	// (0x00064cb5) main_camera_pane

0xa389,	// (0x00064cb5) main_chi_dic_pane

0xac1e,	// (0x0006554a) main_clock_pane

0x9dd4,	// (0x00064700) main_fmradio_pane

0xa389,	// (0x00064cb5) main_graph_messa_pane

0x9dd4,	// (0x00064700) main_help_pane

0xa11a,	// (0x00064a46) main_im_pane

0xa02f,	// (0x0006495b) main_image_pane_ParamLimits

0xa02f,	// (0x0006495b) main_image_pane

0x9dd4,	// (0x00064700) main_location2_pane

0xa389,	// (0x00064cb5) main_location_pane

0xa02f,	// (0x0006495b) main_messa_pane

0x9dd4,	// (0x00064700) main_mp2_pane

0xa389,	// (0x00064cb5) main_mp_pane

0x9dd4,	// (0x00064700) main_msg_pane

0x9dd4,	// (0x00064700) main_mup_eq_pane

0x9dd4,	// (0x00064700) main_mup_pane

0xa11a,	// (0x00064a46) main_notes_pane

0x9dd4,	// (0x00064700) main_pec_pane

0x9dd4,	// (0x00064700) main_phob_pane

0x9dd4,	// (0x00064700) main_pinb_pane

0x9dd4,	// (0x00064700) main_postcard_pane

0x9dd4,	// (0x00064700) main_qdial_pane

0xa389,	// (0x00064cb5) main_skin_pane

0x9dd4,	// (0x00064700) main_smil2_pane

0xa389,	// (0x00064cb5) main_smil_pane

0xa389,	// (0x00064cb5) main_video_pane

0xa389,	// (0x00064cb5) main_video_tele_pane

0xa02f,	// (0x0006495b) main_viewer_pane_ParamLimits

0xa02f,	// (0x0006495b) main_viewer_pane

0xa389,	// (0x00064cb5) main_vorec_pane

0x3cbd,	// (0x0005e5e9) popup_blid_sat_info_window_ParamLimits

0x3cbd,	// (0x0005e5e9) popup_blid_sat_info_window

0x3d13,	// (0x0005e63f) popup_dyc_status_message_window_ParamLimits

0x3d13,	// (0x0005e63f) popup_dyc_status_message_window

0x3d29,	// (0x0005e655) popup_grid_large_graphic_window_ParamLimits

0x3d29,	// (0x0005e655) popup_grid_large_graphic_window

0x3dbf,	// (0x0005e6eb) popup_loc_request_window_ParamLimits

0x3dbf,	// (0x0005e6eb) popup_loc_request_window

0x3ea3,	// (0x0005e7cf) popup_wml_address_window_ParamLimits

0x3ea3,	// (0x0005e7cf) popup_wml_address_window

0x3b03,	// (0x0005e42f) call_muted_g1

0x3828,	// (0x0005e154) popup_call_audio_conf_window_ParamLimits

0x3828,	// (0x0005e154) popup_call_audio_conf_window

0x3b13,	// (0x0005e43f) popup_call_audio_first_window_ParamLimits

0x3b13,	// (0x0005e43f) popup_call_audio_first_window

0x3b71,	// (0x0005e49d) popup_call_audio_in_window_ParamLimits

0x3b71,	// (0x0005e49d) popup_call_audio_in_window

0x3b9d,	// (0x0005e4c9) popup_call_audio_out_window_ParamLimits

0x3b9d,	// (0x0005e4c9) popup_call_audio_out_window

0x3bcb,	// (0x0005e4f7) popup_call_audio_second_window_ParamLimits

0x3bcb,	// (0x0005e4f7) popup_call_audio_second_window

0x3c11,	// (0x0005e53d) popup_call_audio_wait_window_ParamLimits

0x3c11,	// (0x0005e53d) popup_call_audio_wait_window

0x3c44,	// (0x0005e570) popup_number_entry_window_ParamLimits

0x3c44,	// (0x0005e570) popup_number_entry_window

0x0e09,	// (0x0005b735) bg_popup_call_pane_cp05_ParamLimits

0x0e09,	// (0x0005b735) bg_popup_call_pane_cp05

0x99e3,	// (0x0006430f) popup_number_entry_window_t1

0x99f6,	// (0x00064322) popup_number_entry_window_t2

0x9a08,	// (0x00064334) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x000699db) popup_number_entry_window_t

0x9a1a,	// (0x00064346) text_title_cp2

0x9a2d,	// (0x00064359) bg_popup_call_pane_cp_ParamLimits

0x9a2d,	// (0x00064359) bg_popup_call_pane_cp

0x9a3b,	// (0x00064367) call_thumbnail_pane

0x9a43,	// (0x0006436f) popup_call_audio_in_window_g1_ParamLimits

0x9a43,	// (0x0006436f) popup_call_audio_in_window_g1

0x9a4f,	// (0x0006437b) popup_call_audio_in_window_g2_ParamLimits

0x9a4f,	// (0x0006437b) popup_call_audio_in_window_g2

0x9a5b,	// (0x00064387) popup_call_audio_in_window_g3_ParamLimits

0x9a5b,	// (0x00064387) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x000699e4) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x000699e4) popup_call_audio_in_window_g

0x9a67,	// (0x00064393) popup_call_audio_in_window_t1_ParamLimits

0x9a67,	// (0x00064393) popup_call_audio_in_window_t1

0x9a82,	// (0x000643ae) popup_call_audio_in_window_t2_ParamLimits

0x9a82,	// (0x000643ae) popup_call_audio_in_window_t2

0x9a9d,	// (0x000643c9) popup_call_audio_in_window_t3_ParamLimits

0x9a9d,	// (0x000643c9) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x000699eb) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x000699eb) popup_call_audio_in_window_t

0x9a2d,	// (0x00064359) bg_popup_call_pane_cp01_ParamLimits

0x9a2d,	// (0x00064359) bg_popup_call_pane_cp01

0x9a3b,	// (0x00064367) call_thumbnail_pane_cp02

0x9ab0,	// (0x000643dc) call_type_pane_cp022

0x9ab8,	// (0x000643e4) popup_call_audio_out_window_g1_ParamLimits

0x9ab8,	// (0x000643e4) popup_call_audio_out_window_g1

0x9aca,	// (0x000643f6) popup_call_audio_out_window_g2_ParamLimits

0x9aca,	// (0x000643f6) popup_call_audio_out_window_g2

0x9ad6,	// (0x00064402) popup_call_audio_out_window_g3_ParamLimits

0x9ad6,	// (0x00064402) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x000699f2) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x000699f2) popup_call_audio_out_window_g

0x9ae8,	// (0x00064414) popup_call_audio_out_window_t1_ParamLimits

0x9ae8,	// (0x00064414) popup_call_audio_out_window_t1

0x9b00,	// (0x0006442c) popup_call_audio_out_window_t2_ParamLimits

0x9b00,	// (0x0006442c) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x000699f9) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x000699f9) popup_call_audio_out_window_t

0x9b15,	// (0x00064441) bg_popup_call_pane_ParamLimits

0x9b15,	// (0x00064441) bg_popup_call_pane

0x0e5d,	// (0x0005b789) call_thumbnail_pane_cp_ParamLimits

0x0e5d,	// (0x0005b789) call_thumbnail_pane_cp

0x9b99,	// (0x000644c5) call_type_pane_cp01_ParamLimits

0x9b99,	// (0x000644c5) call_type_pane_cp01

0x9bdd,	// (0x00064509) popup_call_audio_first_window_g1_ParamLimits

0x9bdd,	// (0x00064509) popup_call_audio_first_window_g1

0x9c29,	// (0x00064555) popup_call_audio_first_window_g2_ParamLimits

0x9c29,	// (0x00064555) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x000699fe) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x000699fe) popup_call_audio_first_window_g

0x9c6d,	// (0x00064599) popup_call_audio_first_window_t1_ParamLimits

0x9c6d,	// (0x00064599) popup_call_audio_first_window_t1

0x9d19,	// (0x00064645) popup_call_audio_first_window_t4_ParamLimits

0x9d19,	// (0x00064645) popup_call_audio_first_window_t4

0x9da5,	// (0x000646d1) popup_call_audio_first_window_t5_ParamLimits

0x9da5,	// (0x000646d1) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x00069a03) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x00069a03) popup_call_audio_first_window_t

0x9dd4,	// (0x00064700) bg_popup_call_pane_cp02

0x9dde,	// (0x0006470a) call_type_pane_cp023

0x9de6,	// (0x00064712) popup_call_audio_wait_window_g1

0x9dee,	// (0x0006471a) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x00069a0a) popup_call_audio_wait_window_g

0x9df6,	// (0x00064722) popup_call_audio_wait_window_t3

0x9e04,	// (0x00064730) bg_popup_call_pane_cp03_ParamLimits

0x9e04,	// (0x00064730) bg_popup_call_pane_cp03

0x9e64,	// (0x00064790) call_thumbnail_pane_cp011_ParamLimits

0x9e64,	// (0x00064790) call_thumbnail_pane_cp011

0x9e70,	// (0x0006479c) call_type_pane_cp034_ParamLimits

0x9e70,	// (0x0006479c) call_type_pane_cp034

0x9eac,	// (0x000647d8) popup_call_audio_second_window_g1_ParamLimits

0x9eac,	// (0x000647d8) popup_call_audio_second_window_g1

0x9ee8,	// (0x00064814) popup_call_audio_second_window_g2_ParamLimits

0x9ee8,	// (0x00064814) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x00069a0f) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x00069a0f) popup_call_audio_second_window_g

0x9f24,	// (0x00064850) popup_call_audio_second_window_t1_ParamLimits

0x9f24,	// (0x00064850) popup_call_audio_second_window_t1

0x9fa5,	// (0x000648d1) popup_call_audio_second_window_t2_ParamLimits

0x9fa5,	// (0x000648d1) popup_call_audio_second_window_t2

0x9fdb,	// (0x00064907) popup_call_audio_second_window_t3_ParamLimits

0x9fdb,	// (0x00064907) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x00069a14) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x00069a14) popup_call_audio_second_window_t

0x9dd4,	// (0x00064700) bg_popup_call_pane_cp04

0xa011,	// (0x0006493d) list_conf_pane

0xa019,	// (0x00064945) popup_call_audio_conf_window_t1

0xa027,	// (0x00064953) call_thumbnail_pane_g1

0xa02f,	// (0x0006495b) bg_pinb_pane_ParamLimits

0xa02f,	// (0x0006495b) bg_pinb_pane

0xa03d,	// (0x00064969) find_pinb_pane

0xa046,	// (0x00064972) listscroll_pinb_pane_ParamLimits

0xa046,	// (0x00064972) listscroll_pinb_pane

0xa055,	// (0x00064981) pinb_bg_pane_g1

0x0e81,	// (0x0005b7ad) pinb_bg_pane_g2

0x0e8b,	// (0x0005b7b7) pinb_bg_pane_g3

0x0e95,	// (0x0005b7c1) pinb_bg_pane_g4

0x0e9f,	// (0x0005b7cb) pinb_bg_pane_g5

0x0ea9,	// (0x0005b7d5) pinb_bg_pane_g6

0x0eb2,	// (0x0005b7de) pinb_bg_pane_g7

0x0ebb,	// (0x0005b7e7) pinb_bg_pane_g8

0x0ec6,	// (0x0005b7f2) pinb_bg_pane_g9

0x0ed0,	// (0x0005b7fc) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x00069a1b) pinb_bg_pane_g

0x0eeb,	// (0x0005b817) grid_pinb_pane

0x0ef4,	// (0x0005b820) list_pinb_pane

0x0efd,	// (0x0005b829) scroll_pane_cp01_ParamLimits

0x0efd,	// (0x0005b829) scroll_pane_cp01

0xa05f,	// (0x0006498b) find_pinb_pane_g1_ParamLimits

0xa05f,	// (0x0006498b) find_pinb_pane_g1

0xa077,	// (0x000649a3) find_pinb_pane_t1

0xa089,	// (0x000649b5) find_pinb_pane_t2

0x0001,

0xf109,	// (0x00069a35) find_pinb_pane_t

0xa09e,	// (0x000649ca) input_focus_pane_cp01_ParamLimits

0xa09e,	// (0x000649ca) input_focus_pane_cp01

0x0f0f,	// (0x0005b83b) cell_pinb_pane_ParamLimits

0x0f0f,	// (0x0005b83b) cell_pinb_pane

0x0f2a,	// (0x0005b856) cell_pinb_pane_g1_ParamLimits

0x0f2a,	// (0x0005b856) cell_pinb_pane_g1

0x0f3a,	// (0x0005b866) cell_pinb_pane_g2_ParamLimits

0x0f3a,	// (0x0005b866) cell_pinb_pane_g2

0xa0aa,	// (0x000649d6) cell_pinb_pane_g3_ParamLimits

0xa0aa,	// (0x000649d6) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x00069a3a) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x00069a3a) cell_pinb_pane_g

0x9dd4,	// (0x00064700) grid_highlight_pane_cp01

0x0f46,	// (0x0005b872) list_pinb_item_pane_ParamLimits

0x0f46,	// (0x0005b872) list_pinb_item_pane

0x9dd4,	// (0x00064700) list_highlight_pane_cp02

0x0f58,	// (0x0005b884) list_pinb_item_pane_g1_ParamLimits

0x0f58,	// (0x0005b884) list_pinb_item_pane_g1

0x0f65,	// (0x0005b891) list_pinb_item_pane_g2_ParamLimits

0x0f65,	// (0x0005b891) list_pinb_item_pane_g2

0x0f71,	// (0x0005b89d) list_pinb_item_pane_g3_ParamLimits

0x0f71,	// (0x0005b89d) list_pinb_item_pane_g3

0x0f82,	// (0x0005b8ae) list_pinb_item_pane_g4_ParamLimits

0x0f82,	// (0x0005b8ae) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x00069a41) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x00069a41) list_pinb_item_pane_g

0x0f8e,	// (0x0005b8ba) list_pinb_item_pane_t1_ParamLimits

0x0f8e,	// (0x0005b8ba) list_pinb_item_pane_t1

0x0fc3,	// (0x0005b8ef) calc_display_pane

0x0fdf,	// (0x0005b90b) calc_paper_pane

0x1000,	// (0x0005b92c) grid_calc_pane

0x9dd4,	// (0x00064700) bg_list_pane_cp01

0x101c,	// (0x0005b948) clock_g1

0x1024,	// (0x0005b950) clock_g2

0x0001,

0xf11e,	// (0x00069a4a) clock_g

0x102c,	// (0x0005b958) clock_t1_ParamLimits

0x102c,	// (0x0005b958) clock_t1

0x1041,	// (0x0005b96d) clock_t2_ParamLimits

0x1041,	// (0x0005b96d) clock_t2

0x1053,	// (0x0005b97f) clock_t3_ParamLimits

0x1053,	// (0x0005b97f) clock_t3

0x1065,	// (0x0005b991) clock_t4_ParamLimits

0x1065,	// (0x0005b991) clock_t4

0x1077,	// (0x0005b9a3) clock_t5_ParamLimits

0x1077,	// (0x0005b9a3) clock_t5

0x108c,	// (0x0005b9b8) clock_t6_ParamLimits

0x108c,	// (0x0005b9b8) clock_t6

0x109e,	// (0x0005b9ca) clock_t7_ParamLimits

0x109e,	// (0x0005b9ca) clock_t7

0x10b0,	// (0x0005b9dc) clock_t8_ParamLimits

0x10b0,	// (0x0005b9dc) clock_t8

0x10c2,	// (0x0005b9ee) clock_t9_ParamLimits

0x10c2,	// (0x0005b9ee) clock_t9

0x0008,

0xf123,	// (0x00069a4f) clock_t_ParamLimits

0xf123,	// (0x00069a4f) clock_t

0xa0be,	// (0x000649ea) popup_clock_analogue_window_cp02

0xa0be,	// (0x000649ea) popup_clock_digital_window_cp01

0xa0c6,	// (0x000649f2) listscroll_help_pane

0x9dd4,	// (0x00064700) phob_pre_status_pane

0xa0d0,	// (0x000649fc) grid_qdial_pane

0xa02f,	// (0x0006495b) listscroll_mce_pane

0xa02f,	// (0x0006495b) bg_notes_pane

0xa0da,	// (0x00064a06) list_notes_pane

0x10d4,	// (0x0005ba00) scroll_pane_cp06

0xa0e8,	// (0x00064a14) bg_calc_paper_pane

0xa100,	// (0x00064a2c) list_calc_pane

0xa11a,	// (0x00064a46) bg_calc_display_pane

0xa126,	// (0x00064a52) calc_display_pane_t1

0xa13b,	// (0x00064a67) calc_display_pane_t2

0xa150,	// (0x00064a7c) calc_display_pane_t3

0x0002,

0xf136,	// (0x00069a62) calc_display_pane_t

0x10e6,	// (0x0005ba12) cell_calc_pane_ParamLimits

0x10e6,	// (0x0005ba12) cell_calc_pane

0xa162,	// (0x00064a8e) bg_calc_paper_pane_g1

0xa16e,	// (0x00064a9a) bg_calc_paper_pane_g2

0xa17a,	// (0x00064aa6) bg_calc_paper_pane_g3

0xa186,	// (0x00064ab2) bg_calc_paper_pane_g4

0xa192,	// (0x00064abe) bg_calc_paper_pane_g5

0x1119,	// (0x0005ba45) bg_calc_paper_pane_g6

0x1128,	// (0x0005ba54) bg_calc_paper_pane_g7

0x1137,	// (0x0005ba63) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x00069a69) bg_calc_paper_pane_g

0x1146,	// (0x0005ba72) calc_bg_paper_pane_g9

0x1155,	// (0x0005ba81) list_calc_item_pane_ParamLimits

0x1155,	// (0x0005ba81) list_calc_item_pane

0xa19e,	// (0x00064aca) list_calc_item_pane_g1

0xa1ab,	// (0x00064ad7) list_calc_item_pane_t1_ParamLimits

0xa1ab,	// (0x00064ad7) list_calc_item_pane_t1

0x1169,	// (0x0005ba95) list_calc_item_pane_t2_ParamLimits

0x1169,	// (0x0005ba95) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x00069a7a) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x00069a7a) list_calc_item_pane_t

0xa1bd,	// (0x00064ae9) cell_calc_pane_g1

0xa1c7,	// (0x00064af3) grid_highlight_pane_cp02

0xa1e9,	// (0x00064b15) bg_calc_display_pane_g1

0xa1f2,	// (0x00064b1e) bg_calc_display_pane_g2

0xa1fc,	// (0x00064b28) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x00069a84) bg_calc_display_pane_g

0x1197,	// (0x0005bac3) cell_qdial_pane_ParamLimits

0x1197,	// (0x0005bac3) cell_qdial_pane

0x11a9,	// (0x0005bad5) cell_qdial_pane_g1_ParamLimits

0x11a9,	// (0x0005bad5) cell_qdial_pane_g1

0x11bf,	// (0x0005baeb) cell_qdial_pane_g2_ParamLimits

0x11bf,	// (0x0005baeb) cell_qdial_pane_g2

0xa205,	// (0x00064b31) cell_qdial_pane_g3_ParamLimits

0xa205,	// (0x00064b31) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x00069a8b) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x00069a8b) cell_qdial_pane_g

0x11e6,	// (0x0005bb12) cell_qdial_pane_t1_ParamLimits

0x11e6,	// (0x0005bb12) cell_qdial_pane_t1

0x11fe,	// (0x0005bb2a) cell_qdial_pane_t2_ParamLimits

0x11fe,	// (0x0005bb2a) cell_qdial_pane_t2

0x1211,	// (0x0005bb3d) cell_qdial_pane_t3_ParamLimits

0x1211,	// (0x0005bb3d) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x00069a94) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x00069a94) cell_qdial_pane_t

0x9dd4,	// (0x00064700) grid_highlight_pane_cp04

0xa211,	// (0x00064b3d) thumbnail_qdial_pane_ParamLimits

0xa211,	// (0x00064b3d) thumbnail_qdial_pane

0xa26d,	// (0x00064b99) list_help_pane

0xa277,	// (0x00064ba3) scroll_pane_cp02

0x1224,	// (0x0005bb50) help_list_pane_t1_ParamLimits

0x1224,	// (0x0005bb50) help_list_pane_t1

0xa280,	// (0x00064bac) bg_notes_pane_g2

0xa288,	// (0x00064bb4) bg_notes_pane_g3

0xa290,	// (0x00064bbc) notes_bg_pane_g1

0xa298,	// (0x00064bc4) notes_bg_pane_g4

0xa2a0,	// (0x00064bcc) notes_bg_pane_g5

0xa2a8,	// (0x00064bd4) notes_bg_pane_g6

0xa2b0,	// (0x00064bdc) notes_bg_pane_g7

0xa2b8,	// (0x00064be4) notes_bg_pane_g8

0xa2c0,	// (0x00064bec) notes_bg_pane_g9

0x0006,

0xf186,	// (0x00069ab2) notes_bg_pane_g

0x1240,	// (0x0005bb6c) list_notes_text_pane_ParamLimits

0x1240,	// (0x0005bb6c) list_notes_text_pane

0xa2c8,	// (0x00064bf4) list_notes_text_pane_g1

0x1263,	// (0x0005bb8f) list_notes_text_pane_t1

0x1271,	// (0x0005bb9d) listscroll_cale_week_pane

0x129b,	// (0x0005bbc7) bg_cale_heading_pane

0xa2eb,	// (0x00064c17) bg_cale_pane_cp01

0x12b3,	// (0x0005bbdf) cale_week_corner_pane

0x12d2,	// (0x0005bbfe) cale_week_day_heading_pane

0x12ef,	// (0x0005bc1b) cale_week_scroll_pane_g1

0x1302,	// (0x0005bc2e) cale_week_scroll_pane_g2

0x131a,	// (0x0005bc46) cale_week_scroll_pane_g3

0x1332,	// (0x0005bc5e) cale_week_scroll_pane_g4

0x134a,	// (0x0005bc76) cale_week_scroll_pane_g5

0x1362,	// (0x0005bc8e) cale_week_scroll_pane_g6

0x137a,	// (0x0005bca6) cale_week_scroll_pane_g7

0x1392,	// (0x0005bcbe) cale_week_scroll_pane_g8

0x13ae,	// (0x0005bcda) cale_week_scroll_pane_g9

0x13c6,	// (0x0005bcf2) cale_week_scroll_pane_g10

0x13de,	// (0x0005bd0a) cale_week_scroll_pane_g11

0x13f6,	// (0x0005bd22) cale_week_scroll_pane_g12

0x140e,	// (0x0005bd3a) cale_week_scroll_pane_g13

0x1426,	// (0x0005bd52) cale_week_scroll_pane_g14

0x143e,	// (0x0005bd6a) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x00069ac1) cale_week_scroll_pane_g

0x1472,	// (0x0005bd9e) cale_week_time_pane

0x148e,	// (0x0005bdba) grid_cale_week_pane

0xa31a,	// (0x00064c46) scroll_pane_cp08

0x14ac,	// (0x0005bdd8) cell_cale_week_pane_ParamLimits

0x14ac,	// (0x0005bdd8) cell_cale_week_pane

0x1522,	// (0x0005be4e) cale_week_day_heading_pane_t1

0x154c,	// (0x0005be78) cale_week_day_heading_pane_t2

0x157b,	// (0x0005bea7) cale_week_day_heading_pane_t3

0x15aa,	// (0x0005bed6) cale_week_day_heading_pane_t4

0x15d9,	// (0x0005bf05) cale_week_day_heading_pane_t5

0x1608,	// (0x0005bf34) cale_week_day_heading_pane_t6

0x1637,	// (0x0005bf63) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x00069ae2) cale_week_day_heading_pane_t

0xa337,	// (0x00064c63) bg_cale_side_pane

0x1661,	// (0x0005bf8d) cale_week_time_pane_t1

0x169b,	// (0x0005bfc7) cale_week_time_pane_t2

0x16d5,	// (0x0005c001) cale_week_time_pane_t3

0x170f,	// (0x0005c03b) cale_week_time_pane_t4

0x1749,	// (0x0005c075) cale_week_time_pane_t5

0x1783,	// (0x0005c0af) cale_week_time_pane_t6

0x17bd,	// (0x0005c0e9) cale_week_time_pane_t7

0x17f7,	// (0x0005c123) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x00069af1) cale_week_time_pane_t

0x1831,	// (0x0005c15d) cell_cale_week_pane_g2

0x1850,	// (0x0005c17c) cell_cale_week_pane_g3_ParamLimits

0x1850,	// (0x0005c17c) cell_cale_week_pane_g3

0xa345,	// (0x00064c71) grid_highlight_pane_cp07

0xa34d,	// (0x00064c79) listscroll_gms_pane

0xa357,	// (0x00064c83) grid_gms_pane

0xa360,	// (0x00064c8c) listscroll_gms_pane_g1

0xa368,	// (0x00064c94) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x00069b02) listscroll_gms_pane_g

0x1868,	// (0x0005c194) scroll_pane_cp010

0x1873,	// (0x0005c19f) cell_gms_pane_ParamLimits

0x1873,	// (0x0005c19f) cell_gms_pane

0x1883,	// (0x0005c1af) cell_gms_pane_g1

0xa370,	// (0x00064c9c) cell_gms_pane_g2

0xa2c8,	// (0x00064bf4) cell_gms_pane_g3

0xa378,	// (0x00064ca4) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x00069b07) cell_gms_pane_g

0xa381,	// (0x00064cad) grid_highlight_pane_cp09

0x3ab1,	// (0x0005e3dd) phob_pre_status_pane_g1

0x3ab9,	// (0x0005e3e5) phob_pre_status_pane_g2

0x3ac1,	// (0x0005e3ed) phob_pre_status_pane_g3

0x3ac9,	// (0x0005e3f5) phob_pre_status_pane_g4

0x0004,

0xf553,	// (0x00069e7f) phob_pre_status_pane_g

0x3ad9,	// (0x0005e405) phob_pre_status_pane_t1

0x3ae7,	// (0x0005e413) phob_pre_status_pane_t2

0x3af5,	// (0x0005e421) phob_pre_status_pane_t3

0x0002,

0xf55e,	// (0x00069e8a) phob_pre_status_pane_t

0xa389,	// (0x00064cb5) bg_list_pane_cp05

0x1893,	// (0x0005c1bf) grid_vorec_pane

0xa391,	// (0x00064cbd) vorec_t1

0xa39f,	// (0x00064ccb) vorec_t2

0xa3ad,	// (0x00064cd9) vorec_t3

0x189b,	// (0x0005c1c7) vorec_t4

0x9937,	// (0x00064263) vorec_t5

0x9945,	// (0x00064271) vorec_t6

0x0004,

0xf1e4,	// (0x00069b10) vorec_t

0x9953,	// (0x0006427f) wait_bar_pane_cp01

0x18a9,	// (0x0005c1d5) cell_vorec_pane_ParamLimits

0x18a9,	// (0x0005c1d5) cell_vorec_pane

0xa3c9,	// (0x00064cf5) cell_vorec_pane_g1

0x9dd4,	// (0x00064700) grid_highlight_pane_cp05

0x18ce,	// (0x0005c1fa) cams_zoom_pane

0x18dd,	// (0x0005c209) image_vga_pane

0x18f5,	// (0x0005c221) main_camera_pane_g1

0x1905,	// (0x0005c231) main_camera_pane_g2

0x1915,	// (0x0005c241) main_camera_pane_g3

0x1925,	// (0x0005c251) main_camera_pane_g4

0x1935,	// (0x0005c261) main_camera_pane_g5

0x1945,	// (0x0005c271) main_camera_pane_g6

0x1955,	// (0x0005c281) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x00069b1b) main_camera_pane_g

0x1965,	// (0x0005c291) main_camera_pane_t1

0x197b,	// (0x0005c2a7) main_camera_pane_t2

0x0001,

0xf200,	// (0x00069b2c) main_camera_pane_t

0x19ad,	// (0x0005c2d9) cams_zoom_pane_cp_ParamLimits

0x19ad,	// (0x0005c2d9) cams_zoom_pane_cp

0x19d5,	// (0x0005c301) image_cif_pane_ParamLimits

0x19d5,	// (0x0005c301) image_cif_pane

0x1a06,	// (0x0005c332) image_subqcif_pane

0x1a0e,	// (0x0005c33a) main_video_pane_g1_ParamLimits

0x1a0e,	// (0x0005c33a) main_video_pane_g1

0x1a32,	// (0x0005c35e) main_video_pane_g2_ParamLimits

0x1a32,	// (0x0005c35e) main_video_pane_g2

0x1a66,	// (0x0005c392) main_video_pane_g3_ParamLimits

0x1a66,	// (0x0005c392) main_video_pane_g3

0x1a94,	// (0x0005c3c0) main_video_pane_g4_ParamLimits

0x1a94,	// (0x0005c3c0) main_video_pane_g4

0x1ac2,	// (0x0005c3ee) main_video_pane_g5_ParamLimits

0x1ac2,	// (0x0005c3ee) main_video_pane_g5

0xa3df,	// (0x00064d0b) main_video_pane_g6_ParamLimits

0xa3df,	// (0x00064d0b) main_video_pane_g6

0x0006,

0xf205,	// (0x00069b31) main_video_pane_g_ParamLimits

0xf205,	// (0x00069b31) main_video_pane_g

0x1ae9,	// (0x0005c415) main_video_pane_t1_ParamLimits

0x1ae9,	// (0x0005c415) main_video_pane_t1

0xa3f9,	// (0x00064d25) cams_zoom_pane_g1

0xa402,	// (0x00064d2e) cams_zoom_pane_g2

0xa40b,	// (0x00064d37) cams_zoom_pane_g3

0xa414,	// (0x00064d40) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x00069b40) cams_zoom_pane_g

0x1b46,	// (0x0005c472) grid_cams_pane

0x1b5b,	// (0x0005c487) linegrid_cams_pane

0x1b6c,	// (0x0005c498) cell_cams_pane_ParamLimits

0x1b6c,	// (0x0005c498) cell_cams_pane

0xa41d,	// (0x00064d49) cams_burst_image_pane

0xa425,	// (0x00064d51) cell_cams_pane_g1

0x9dd4,	// (0x00064700) grid_highlight_pane_cp03

0xa1bd,	// (0x00064ae9) mp_bg_pane_g1

0x9dd4,	// (0x00064700) bg_list_pane_cp03

0xe179,	// (0x00068aa5) bg_mp_pane

0xe181,	// (0x00068aad) grid_mp_pane

0xe189,	// (0x00068ab5) media_player_g1

0xe191,	// (0x00068abd) media_player_t1

0xe19f,	// (0x00068acb) media_player_t2

0xe1ad,	// (0x00068ad9) media_player_t3

0xe1bb,	// (0x00068ae7) media_player_t4

0xe1c9,	// (0x00068af5) media_player_t5

0xe1d7,	// (0x00068b03) media_player_t6

0xe1e5,	// (0x00068b11) media_player_t7

0x0006,

0x0114,	// (0x0005aa40) media_player_t

0xe1f3,	// (0x00068b1f) wait_bar_pane_cp02

0xf53f,	// (0x00069e6b) main_usb_pane_t

0x3aa8,	// (0x0005e3d4) cell_mp_pane

0xa1bd,	// (0x00064ae9) cell_mp_pane_g1

0x9dd4,	// (0x00064700) grid_highlight_pane_cp06

0xa42d,	// (0x00064d59) grid_skin_colour_pane

0xa435,	// (0x00064d61) list_highlight_pane_cp03

0x1c80,	// (0x0005c5ac) skin_g1

0xa43d,	// (0x00064d69) skin_t1

0xa44c,	// (0x00064d78) skin_t2

0x0001,

0xf249,	// (0x00069b75) skin_t

0x1c88,	// (0x0005c5b4) cell_skin_colour_pane_ParamLimits

0x1c88,	// (0x0005c5b4) cell_skin_colour_pane

0xa45a,	// (0x00064d86) cell_skin_colour_pane_g1

0x1cf1,	// (0x0005c61d) call_video_g1_ParamLimits

0x1cf1,	// (0x0005c61d) call_video_g1

0x1d07,	// (0x0005c633) call_video_g2_ParamLimits

0x1d07,	// (0x0005c633) call_video_g2

0x0001,

0xf24e,	// (0x00069b7a) call_video_g_ParamLimits

0xf24e,	// (0x00069b7a) call_video_g

0x1d4f,	// (0x0005c67b) call_video_uplink_pane_cp1_ParamLimits

0x1d4f,	// (0x0005c67b) call_video_uplink_pane_cp1

0xa46c,	// (0x00064d98) call_video_uplink_pane_cp2

0x1de4,	// (0x0005c710) video_down_crop_pane_ParamLimits

0x1de4,	// (0x0005c710) video_down_crop_pane

0x1ea7,	// (0x0005c7d3) video_down_pane_ParamLimits

0x1ea7,	// (0x0005c7d3) video_down_pane

0xa474,	// (0x00064da0) video_down_subqcif_pane_ParamLimits

0xa474,	// (0x00064da0) video_down_subqcif_pane

0xa48c,	// (0x00064db8) video_down_subqcif_pane_cp_ParamLimits

0xa48c,	// (0x00064db8) video_down_subqcif_pane_cp

0xa4b0,	// (0x00064ddc) im_reading_pane_ParamLimits

0xa4b0,	// (0x00064ddc) im_reading_pane

0x1f64,	// (0x0005c890) im_writing_pane_ParamLimits

0x1f64,	// (0x0005c890) im_writing_pane

0x1f7a,	// (0x0005c8a6) im_reading_pane_t1

0xa4ca,	// (0x00064df6) list_im_pane

0xa4db,	// (0x00064e07) scroll_pane_cp07

0x1fb0,	// (0x0005c8dc) im_writing_pane_t1_ParamLimits

0x1fb0,	// (0x0005c8dc) im_writing_pane_t1

0xa4f4,	// (0x00064e20) im_writing_pane_t2_ParamLimits

0xa4f4,	// (0x00064e20) im_writing_pane_t2

0x0001,

0xf258,	// (0x00069b84) im_writing_pane_t_ParamLimits

0xf258,	// (0x00069b84) im_writing_pane_t

0x9dd4,	// (0x00064700) input_focus_pane_cp04

0x9dd4,	// (0x00064700) input_focus_pane_cp05

0x1fc5,	// (0x0005c8f1) list_im_single_pane_ParamLimits

0x1fc5,	// (0x0005c8f1) list_im_single_pane

0xa511,	// (0x00064e3d) list_single_im_pane_t1

0x3a6e,	// (0x0005e39a) blid_accuracy_pane

0x3a76,	// (0x0005e3a2) blid_compass_pane

0x3a7e,	// (0x0005e3aa) main_location_t1

0x3a8c,	// (0x0005e3b8) main_location_t2

0x3a9a,	// (0x0005e3c6) main_location_t3

0x0002,

0xf54c,	// (0x00069e78) main_location_t

0x9dd4,	// (0x00064700) aid_levels_location

0xa1bd,	// (0x00064ae9) blid_accuracy_pane_g1

0xa1bd,	// (0x00064ae9) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x00069be6) blid_accuracy_pane_g

0xa54b,	// (0x00064e77) wml_content_pane

0xa589,	// (0x00064eb5) wml_button_pane_ParamLimits

0xa589,	// (0x00064eb5) wml_button_pane

0x1fdb,	// (0x0005c907) wml_list_single_large_pane_ParamLimits

0x1fdb,	// (0x0005c907) wml_list_single_large_pane

0x1fef,	// (0x0005c91b) wml_list_single_medium_pane_ParamLimits

0x1fef,	// (0x0005c91b) wml_list_single_medium_pane

0x2004,	// (0x0005c930) wml_list_single_small_pane_ParamLimits

0x2004,	// (0x0005c930) wml_list_single_small_pane

0xa59d,	// (0x00064ec9) wml_selection_box_pane_ParamLimits

0xa59d,	// (0x00064ec9) wml_selection_box_pane

0xa5b0,	// (0x00064edc) wml_list_single_pane_t1

0xa5bf,	// (0x00064eeb) wml_list_single_medium_pane_t1

0xa5ce,	// (0x00064efa) wml_list_single_large_pane_t1

0xa5dd,	// (0x00064f09) input_focus_pane_cp02_ParamLimits

0xa5dd,	// (0x00064f09) input_focus_pane_cp02

0xa5f0,	// (0x00064f1c) wml_selection_box_pane_g1

0xa5f9,	// (0x00064f25) wml_selection_box_pane_t1_ParamLimits

0xa5f9,	// (0x00064f25) wml_selection_box_pane_t1

0xa02f,	// (0x0006495b) bg_wml_button_pane_ParamLimits

0xa02f,	// (0x0006495b) bg_wml_button_pane

0xa611,	// (0x00064f3d) wml_button_pane_g1

0xa619,	// (0x00064f45) wml_button_pane_t1

0xa611,	// (0x00064f3d) wml_button_bg_pane_g1

0xa629,	// (0x00064f55) wml_button_bg_pane_g2

0xa631,	// (0x00064f5d) wml_button_bg_pane_g3

0xa639,	// (0x00064f65) wml_button_bg_pane_g4

0xa641,	// (0x00064f6d) wml_button_bg_pane_g5

0xa649,	// (0x00064f75) wml_button_bg_pane_g6

0xa651,	// (0x00064f7d) wml_button_bg_pane_g7

0xa659,	// (0x00064f85) wml_button_bg_pane_g8

0xa661,	// (0x00064f8d) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x00069b89) wml_button_bg_pane_g

0x201b,	// (0x0005c947) bg_list_pane_cp02

0xa669,	// (0x00064f95) mce_header_pane_ParamLimits

0xa669,	// (0x00064f95) mce_header_pane

0xa67d,	// (0x00064fa9) mce_icon_pane

0xa67d,	// (0x00064fa9) mce_image_pane

0xa686,	// (0x00064fb2) mce_text_pane_ParamLimits

0xa686,	// (0x00064fb2) mce_text_pane

0x2024,	// (0x0005c950) scroll_pane_cp03

0x2024,	// (0x0005c950) scroll_pane_cp04

0xa69a,	// (0x00064fc6) scroll_pane_cp05_ParamLimits

0xa69a,	// (0x00064fc6) scroll_pane_cp05

0x202e,	// (0x0005c95a) mce_header_field_pane_ParamLimits

0x202e,	// (0x0005c95a) mce_header_field_pane

0x2045,	// (0x0005c971) mce_header_field_pane_2_ParamLimits

0x2045,	// (0x0005c971) mce_header_field_pane_2

0x205b,	// (0x0005c987) mce_header_field_pane_3

0x2063,	// (0x0005c98f) list_single_mce_message_pane_ParamLimits

0x2063,	// (0x0005c98f) list_single_mce_message_pane

0x2078,	// (0x0005c9a4) list_single_mce_smart_pane_ParamLimits

0x2078,	// (0x0005c9a4) list_single_mce_smart_pane

0xa6a6,	// (0x00064fd2) input_focus_pane_cp03

0xa6af,	// (0x00064fdb) list_header_data_pane

0x2098,	// (0x0005c9c4) mce_header_field_pane_t1

0x20a6,	// (0x0005c9d2) list_single_mce_header_pane_ParamLimits

0x20a6,	// (0x0005c9d2) list_single_mce_header_pane

0xa6b7,	// (0x00064fe3) list_single_mce_header_pane_t1

0xa6c6,	// (0x00064ff2) list_single_mce_message_pane_g1

0xa6cf,	// (0x00064ffb) list_single_mce_message_pane_t1

0x20e0,	// (0x0005ca0c) bg_cale_heading_pane_cp01_ParamLimits

0x20e0,	// (0x0005ca0c) bg_cale_heading_pane_cp01

0xa6de,	// (0x0006500a) bg_cale_pane_cp02_ParamLimits

0xa6de,	// (0x0006500a) bg_cale_pane_cp02

0x210f,	// (0x0005ca3b) cale_month_corner_pane

0x212e,	// (0x0005ca5a) cale_month_day_heading_pane_ParamLimits

0x212e,	// (0x0005ca5a) cale_month_day_heading_pane

0x2165,	// (0x0005ca91) cale_month_pane_g1_ParamLimits

0x2165,	// (0x0005ca91) cale_month_pane_g1

0x2189,	// (0x0005cab5) cale_month_pane_g2_ParamLimits

0x2189,	// (0x0005cab5) cale_month_pane_g2

0x21b1,	// (0x0005cadd) cale_month_pane_g3_ParamLimits

0x21b1,	// (0x0005cadd) cale_month_pane_g3

0x21ed,	// (0x0005cb19) cale_month_pane_g4_ParamLimits

0x21ed,	// (0x0005cb19) cale_month_pane_g4

0x2229,	// (0x0005cb55) cale_month_pane_g5_ParamLimits

0x2229,	// (0x0005cb55) cale_month_pane_g5

0x2265,	// (0x0005cb91) cale_month_pane_g6_ParamLimits

0x2265,	// (0x0005cb91) cale_month_pane_g6

0x22a1,	// (0x0005cbcd) cale_month_pane_g7_ParamLimits

0x22a1,	// (0x0005cbcd) cale_month_pane_g7

0x22dd,	// (0x0005cc09) cale_month_pane_g8_ParamLimits

0x22dd,	// (0x0005cc09) cale_month_pane_g8

0x2321,	// (0x0005cc4d) cale_month_pane_g9_ParamLimits

0x2321,	// (0x0005cc4d) cale_month_pane_g9

0x2363,	// (0x0005cc8f) cale_month_pane_g10_ParamLimits

0x2363,	// (0x0005cc8f) cale_month_pane_g10

0x23a5,	// (0x0005ccd1) cale_month_pane_g11_ParamLimits

0x23a5,	// (0x0005ccd1) cale_month_pane_g11

0x23e7,	// (0x0005cd13) cale_month_pane_g12_ParamLimits

0x23e7,	// (0x0005cd13) cale_month_pane_g12

0x2429,	// (0x0005cd55) cale_month_pane_g13_ParamLimits

0x2429,	// (0x0005cd55) cale_month_pane_g13

0x000c,

0xf270,	// (0x00069b9c) cale_month_pane_g_ParamLimits

0xf270,	// (0x00069b9c) cale_month_pane_g

0x246b,	// (0x0005cd97) cale_month_week_pane

0x2487,	// (0x0005cdb3) grid_cale_month_pane_ParamLimits

0x2487,	// (0x0005cdb3) grid_cale_month_pane

0x24b5,	// (0x0005cde1) cale_month_day_heading_pane_t1

0x253b,	// (0x0005ce67) cale_month_day_heading_pane_t2

0x25cc,	// (0x0005cef8) cale_month_day_heading_pane_t3

0x265d,	// (0x0005cf89) cale_month_day_heading_pane_t4

0x26ee,	// (0x0005d01a) cale_month_day_heading_pane_t5

0x277f,	// (0x0005d0ab) cale_month_day_heading_pane_t6

0x2810,	// (0x0005d13c) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x00069bb7) cale_month_day_heading_pane_t

0xa337,	// (0x00064c63) bg_cale_side_pane_cp01

0x28a5,	// (0x0005d1d1) cale_month_week_pane_t1

0x28be,	// (0x0005d1ea) cale_month_week_pane_t2

0x28d7,	// (0x0005d203) cale_month_week_pane_t3

0x28f0,	// (0x0005d21c) cale_month_week_pane_t4

0x2909,	// (0x0005d235) cale_month_week_pane_t5

0x2922,	// (0x0005d24e) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x00069bc6) cale_month_week_pane_t

0x293b,	// (0x0005d267) cell_cale_month_pane_ParamLimits

0x293b,	// (0x0005d267) cell_cale_month_pane

0xa71d,	// (0x00065049) cell_cale_month_pane_g1

0x2a57,	// (0x0005d383) cell_cale_month_pane_t1_ParamLimits

0x2a57,	// (0x0005d383) cell_cale_month_pane_t1

0xa345,	// (0x00064c71) grid_highlight_pane_cp08

0xa1bd,	// (0x00064ae9) main_smil_g1

0x2a77,	// (0x0005d3a3) smil_status_pane

0xa729,	// (0x00065055) smil_text_pane

0xe059,	// (0x00068985) bg_popup_call3_rect_pane_g8

0xe061,	// (0x0006898d) bg_popup_call3_rect_pane_g9

0x0008,

0xf527,	// (0x00069e53) bg_popup_call3_rect_pane_g

0xe2f2,	// (0x00068c1e) smil_status_volume_pane_g1

0x2a88,	// (0x0005d3b4) smil_status_pane_t1

0xbc7a,	// (0x000665a6) volume_smil_pane

0xa733,	// (0x0006505f) list_smil_text_pane

0x2a9f,	// (0x0005d3cb) scroll_pane_cp011

0x2aaa,	// (0x0005d3d6) smil_text_list_pane_t1_ParamLimits

0x2aaa,	// (0x0005d3d6) smil_text_list_pane_t1

0xa73d,	// (0x00065069) aid_volume_smil_ParamLimits

0xa73d,	// (0x00065069) aid_volume_smil

0xa1bd,	// (0x00064ae9) smil_volume_pane_g1

0xa1bd,	// (0x00064ae9) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x00069be6) smil_volume_pane_g

0x1271,	// (0x0005bb9d) listscroll_cale_day_pane

0xa75f,	// (0x0006508b) bg_cale_pane

0xa777,	// (0x000650a3) list_cale_pane

0xa79a,	// (0x000650c6) scroll_pane_cp09

0xa7ab,	// (0x000650d7) cale_bg_pane_g1

0xa7b3,	// (0x000650df) cale_bg_pane_g2

0xa7bb,	// (0x000650e7) cale_bg_pane_g3

0xa7c3,	// (0x000650ef) cale_bg_pane_g4

0xa7cb,	// (0x000650f7) cale_bg_pane_g5

0xa7d3,	// (0x000650ff) cale_bg_pane_g6

0xa7db,	// (0x00065107) cale_bg_pane_g7

0xa7e3,	// (0x0006510f) cale_bg_pane_g8

0xa7eb,	// (0x00065117) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x00069beb) cale_bg_pane_g

0x2aee,	// (0x0005d41a) list_cale_time_pane_ParamLimits

0x2aee,	// (0x0005d41a) list_cale_time_pane

0xa7f3,	// (0x0006511f) list_cale_time_pane_g1_ParamLimits

0xa7f3,	// (0x0006511f) list_cale_time_pane_g1

0xa7ff,	// (0x0006512b) list_cale_time_pane_g2_ParamLimits

0xa7ff,	// (0x0006512b) list_cale_time_pane_g2

0x2b03,	// (0x0005d42f) list_cale_time_pane_g3_ParamLimits

0x2b03,	// (0x0005d42f) list_cale_time_pane_g3

0x2b0f,	// (0x0005d43b) list_cale_time_pane_g4_ParamLimits

0x2b0f,	// (0x0005d43b) list_cale_time_pane_g4

0x2b1b,	// (0x0005d447) list_cale_time_pane_g5_ParamLimits

0x2b1b,	// (0x0005d447) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x00069bfe) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x00069bfe) list_cale_time_pane_g

0xa819,	// (0x00065145) list_cale_time_pane_t1_ParamLimits

0xa819,	// (0x00065145) list_cale_time_pane_t1

0xa841,	// (0x0006516d) list_cale_time_pane_t2_ParamLimits

0xa841,	// (0x0006516d) list_cale_time_pane_t2

0x2eb1,	// (0x0005d7dd) aid_blid_cardinal_pane

0x2eef,	// (0x0005d81b) compass_pane_t4

0xa869,	// (0x00065195) list_cale_time_pane_t4_ParamLimits

0xa869,	// (0x00065195) list_cale_time_pane_t4

0x2efd,	// (0x0005d829) compass_pane_t5

0x2f0b,	// (0x0005d837) compass_pane_t6

0x2f19,	// (0x0005d845) compass_pane_t7

0xad43,	// (0x0006566f) navi_pane_cc_t1

0xaefa,	// (0x00065826) aid_phob_thumbnail_center_pane

0x3520,	// (0x0005de4c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x00069c0b) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x00069c0b) list_cale_time_pane_t

0x9a2d,	// (0x00064359) bg_popup_window_pane_cp02_ParamLimits

0x9a2d,	// (0x00064359) bg_popup_window_pane_cp02

0xa891,	// (0x000651bd) heading_pane_cp01_ParamLimits

0xa891,	// (0x000651bd) heading_pane_cp01

0xa89d,	// (0x000651c9) loc_req_pane_ParamLimits

0xa89d,	// (0x000651c9) loc_req_pane

0xa8ad,	// (0x000651d9) loc_type_pane_ParamLimits

0xa8ad,	// (0x000651d9) loc_type_pane

0xa8bf,	// (0x000651eb) loc_type_pane_t1_ParamLimits

0xa8bf,	// (0x000651eb) loc_type_pane_t1

0xa8d1,	// (0x000651fd) loc_type_pane_t2_ParamLimits

0xa8d1,	// (0x000651fd) loc_type_pane_t2

0xa8e3,	// (0x0006520f) loc_type_pane_t3_ParamLimits

0xa8e3,	// (0x0006520f) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x00069c12) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x00069c12) loc_type_pane_t

0xa8f5,	// (0x00065221) list_loc_req_pane

0xa8ff,	// (0x0006522b) scroll_pane_cp012

0x2b27,	// (0x0005d453) list_single_loc_request_popup_menu_pane_ParamLimits

0x2b27,	// (0x0005d453) list_single_loc_request_popup_menu_pane

0xa908,	// (0x00065234) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa908,	// (0x00065234) list_single_loc_request_popup_menu_pane_g1

0xa914,	// (0x00065240) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa914,	// (0x00065240) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x00069c19) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x00069c19) list_single_loc_request_popup_menu_pane_g

0xa920,	// (0x0006524c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa920,	// (0x0006524c) list_single_loc_request_popup_menu_pane_t1

0xa02f,	// (0x0006495b) bg_popup_window_pane_cp03_ParamLimits

0xa02f,	// (0x0006495b) bg_popup_window_pane_cp03

0xa936,	// (0x00065262) heading_loc_req_pane_ParamLimits

0xa936,	// (0x00065262) heading_loc_req_pane

0x2b34,	// (0x0005d460) popup_dyc_status_message_window_g1_ParamLimits

0x2b34,	// (0x0005d460) popup_dyc_status_message_window_g1

0x2b48,	// (0x0005d474) popup_dyc_status_message_window_t1_ParamLimits

0x2b48,	// (0x0005d474) popup_dyc_status_message_window_t1

0x2b5d,	// (0x0005d489) popup_dyc_status_message_window_t2_ParamLimits

0x2b5d,	// (0x0005d489) popup_dyc_status_message_window_t2

0x2b72,	// (0x0005d49e) popup_dyc_status_message_window_t3_ParamLimits

0x2b72,	// (0x0005d49e) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x00069c1e) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x00069c1e) popup_dyc_status_message_window_t

0x9dd4,	// (0x00064700) bg_heading_pane_cp01

0xa942,	// (0x0006526e) heading_loc_req_pane_g1

0xa94a,	// (0x00065276) heading_loc_req_pane_g2

0xa952,	// (0x0006527e) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x00069c25) heading_loc_req_pane_g

0xa95a,	// (0x00065286) heading_loc_req_pane_t1

0xa969,	// (0x00065295) bg_popup_sub_pane_cp01_ParamLimits

0xa969,	// (0x00065295) bg_popup_sub_pane_cp01

0xa977,	// (0x000652a3) popup_cale_events_window_g1_ParamLimits

0xa977,	// (0x000652a3) popup_cale_events_window_g1

0xa997,	// (0x000652c3) popup_cale_events_window_g2_ParamLimits

0xa997,	// (0x000652c3) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x00069c59) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x00069c59) popup_cale_events_window_g

0xa9b7,	// (0x000652e3) popup_cale_events_window_t1_ParamLimits

0xa9b7,	// (0x000652e3) popup_cale_events_window_t1

0xa9c9,	// (0x000652f5) popup_cale_events_window_t2_ParamLimits

0xa9c9,	// (0x000652f5) popup_cale_events_window_t2

0xaa07,	// (0x00065333) popup_cale_events_window_t3_ParamLimits

0xaa07,	// (0x00065333) popup_cale_events_window_t3

0xaa41,	// (0x0006536d) popup_cale_events_window_t4_ParamLimits

0xaa41,	// (0x0006536d) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x00069c5e) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x00069c5e) popup_cale_events_window_t

0x2c9c,	// (0x0005d5c8) call_type_pane

0x2cac,	// (0x0005d5d8) popup_call_status_window_g1

0x2cc0,	// (0x0005d5ec) popup_call_status_window_g2

0x2cd4,	// (0x0005d600) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x00069c67) popup_call_status_window_g

0xaa77,	// (0x000653a3) call_type_pane_g1

0xaa80,	// (0x000653ac) call_type_pane_g2

0x0001,

0xf342,	// (0x00069c6e) call_type_pane_g

0x9dd4,	// (0x00064700) bg_popup_sub_pane_cp02

0xaa89,	// (0x000653b5) listscroll_popup_wml_pane

0xaa91,	// (0x000653bd) list_wml_pane

0xaa9b,	// (0x000653c7) scroll_pane_cp013

0x2ce4,	// (0x0005d610) list_single_graphic_popup_wml_pane_ParamLimits

0x2ce4,	// (0x0005d610) list_single_graphic_popup_wml_pane

0xa1bd,	// (0x00064ae9) list_single_graphic_popup_wml_pane_g1

0xaaa4,	// (0x000653d0) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x00069c73) list_single_graphic_popup_wml_pane_g

0xaaac,	// (0x000653d8) list_single_graphic_popup_wml_pane_t1

0xaac2,	// (0x000653ee) aid_call_pane

0xa027,	// (0x00064953) popup_clock_analogue_window_g1

0xa027,	// (0x00064953) popup_clock_analogue_window_g2

0xaaca,	// (0x000653f6) popup_clock_analogue_window_g3

0xaaca,	// (0x000653f6) popup_clock_analogue_window_g4

0xa1bd,	// (0x00064ae9) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x00069c78) popup_clock_analogue_window_g

0xaad2,	// (0x000653fe) popup_clock_analogue_window_t1

0xaae0,	// (0x0006540c) clock_digital_number_pane_ParamLimits

0xaae0,	// (0x0006540c) clock_digital_number_pane

0xaaec,	// (0x00065418) clock_digital_number_pane_cp02_ParamLimits

0xaaec,	// (0x00065418) clock_digital_number_pane_cp02

0xaaf8,	// (0x00065424) clock_digital_number_pane_cp03_ParamLimits

0xaaf8,	// (0x00065424) clock_digital_number_pane_cp03

0xab04,	// (0x00065430) clock_digital_number_pane_cp04_ParamLimits

0xab04,	// (0x00065430) clock_digital_number_pane_cp04

0xab10,	// (0x0006543c) clock_digital_separator_pane_ParamLimits

0xab10,	// (0x0006543c) clock_digital_separator_pane

0xab1c,	// (0x00065448) popup_clock_digital_window_t1

0xa1bd,	// (0x00064ae9) clock_digital_number_pane_g1

0xa1bd,	// (0x00064ae9) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x00069be6) clock_digital_number_pane_g

0xa1bd,	// (0x00064ae9) clock_digital_separator_pane_g1

0xa1bd,	// (0x00064ae9) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x00069be6) clock_digital_separator_pane_g

0x9dd4,	// (0x00064700) bg_popup_window_pane_cp04

0xab39,	// (0x00065465) heading_pane_cp03

0xab41,	// (0x0006546d) listscroll_popup_gms_pane

0xab49,	// (0x00065475) grid_large_graphic_popup_pane

0xab53,	// (0x0006547f) listscroll_popup_gms_pane_g1

0xab5b,	// (0x00065487) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x00069c83) listscroll_popup_gms_pane_g

0xa581,	// (0x00064ead) scroll_pane_cp014

0x2cf7,	// (0x0005d623) cell_large_graphic_popup_pane_ParamLimits

0x2cf7,	// (0x0005d623) cell_large_graphic_popup_pane

0x2d0d,	// (0x0005d639) cell_large_graphic_popup_pane_g1_ParamLimits

0x2d0d,	// (0x0005d639) cell_large_graphic_popup_pane_g1

0xab63,	// (0x0006548f) cell_large_graphic_popup_pane_g2_ParamLimits

0xab63,	// (0x0006548f) cell_large_graphic_popup_pane_g2

0xab6f,	// (0x0006549b) cell_large_graphic_popup_pane_g3_ParamLimits

0xab6f,	// (0x0006549b) cell_large_graphic_popup_pane_g3

0xab7c,	// (0x000654a8) cell_large_graphic_popup_pane_g4_ParamLimits

0xab7c,	// (0x000654a8) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x00069c88) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x00069c88) cell_large_graphic_popup_pane_g

0xab8c,	// (0x000654b8) grid_highlight_pane_cp010

0xa1bd,	// (0x00064ae9) bg_popup_call_pane_g1

0xab96,	// (0x000654c2) list_single_graphic_popup_conf_pane_ParamLimits

0xab96,	// (0x000654c2) list_single_graphic_popup_conf_pane

0xaba9,	// (0x000654d5) list_highlight_pane_cp01

0xabb2,	// (0x000654de) list_single_graphic_popup_conf_pane_g1

0xabba,	// (0x000654e6) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x00069c91) list_single_graphic_popup_conf_pane_g

0xabc2,	// (0x000654ee) list_single_graphic_popup_conf_pane_t1

0xabd0,	// (0x000654fc) linegrid_cams_pane_g1

0x2d19,	// (0x0005d645) linegrid_cams_pane_g2

0xa2c8,	// (0x00064bf4) linegrid_cams_pane_g3

0xabd9,	// (0x00065505) linegrid_cams_pane_g4

0x2d22,	// (0x0005d64e) linegrid_cams_pane_g5

0x2d2b,	// (0x0005d657) linegrid_cams_pane_g6

0xa378,	// (0x00064ca4) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x00069c96) linegrid_cams_pane_g

0xabe2,	// (0x0006550e) popup_clock_analogue_window

0xabe2,	// (0x0006550e) popup_clock_digital_window

0x9dd4,	// (0x00064700) popup_phob_thumbnail_window

0xa1bd,	// (0x00064ae9) call_video_uplink_pane_g1

0xabeb,	// (0x00065517) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x00069ca5) call_video_uplink_pane_g

0xa345,	// (0x00064c71) video_uplink_pane

0xabf3,	// (0x0006551f) mce_image_pane_g1

0x2d34,	// (0x0005d660) mce_image_pane_g2

0x2d3c,	// (0x0005d668) mce_image_pane_g3

0x2d44,	// (0x0005d670) mce_image_pane_g4

0x2d4c,	// (0x0005d678) mce_image_pane_g5

0x0004,

0xf37e,	// (0x00069caa) mce_image_pane_g

0xabfd,	// (0x00065529) control_top_pane_stacon_cp01_ParamLimits

0xabfd,	// (0x00065529) control_top_pane_stacon_cp01

0xac0d,	// (0x00065539) uni_indicator_pane_stacon_cp01_ParamLimits

0xac0d,	// (0x00065539) uni_indicator_pane_stacon_cp01

0xac1e,	// (0x0006554a) bg_popup_sub_pane_cp03

0xac28,	// (0x00065554) chi_dic_find_pane

0x2d54,	// (0x0005d680) listscroll_chi_dic_pane

0xac30,	// (0x0006555c) main_pane_chidic_g1

0xac38,	// (0x00065564) chi_dic_find_pane_t1

0xac46,	// (0x00065572) find_chidic_pane

0xac4f,	// (0x0006557b) chi_dic_list_pane_ParamLimits

0xac4f,	// (0x0006557b) chi_dic_list_pane

0xac60,	// (0x0006558c) scroll_pane_cp020

0xac68,	// (0x00065594) find_chidic_pane_t1

0x9dd4,	// (0x00064700) input_focus_pane_cp06

0x2d68,	// (0x0005d694) list_chi_dic_pane_ParamLimits

0x2d68,	// (0x0005d694) list_chi_dic_pane

0x2d7a,	// (0x0005d6a6) list_chi_dic_pane_t1_ParamLimits

0x2d7a,	// (0x0005d6a6) list_chi_dic_pane_t1

0x9dd4,	// (0x00064700) list_highlight_pane_cp020

0xac77,	// (0x000655a3) bg_cale_heading_pane_g1

0x2d8d,	// (0x0005d6b9) bg_cale_heading_pane_g2

0x2d95,	// (0x0005d6c1) bg_cale_heading_pane_g3

0x2d9d,	// (0x0005d6c9) bg_cale_heading_pane_g4

0x2da5,	// (0x0005d6d1) bg_cale_heading_pane_g5

0x2dad,	// (0x0005d6d9) bg_cale_heading_pane_g6

0x2db5,	// (0x0005d6e1) bg_cale_heading_pane_g7

0x2dbd,	// (0x0005d6e9) bg_cale_heading_pane_g8

0x2dc5,	// (0x0005d6f1) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x00069cb5) bg_cale_heading_pane_g

0xac77,	// (0x000655a3) bg_cale_side_pane_g1

0x2dcd,	// (0x0005d6f9) bg_cale_side_pane_g2

0x2dd5,	// (0x0005d701) bg_cale_side_pane_g3

0x2ddd,	// (0x0005d709) bg_cale_side_pane_g4

0x2de5,	// (0x0005d711) bg_cale_side_pane_g5

0x2ded,	// (0x0005d719) bg_cale_side_pane_g6

0x2df5,	// (0x0005d721) bg_cale_side_pane_g7

0x2dfd,	// (0x0005d729) bg_cale_side_pane_g8

0x2e05,	// (0x0005d731) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x00069cc8) bg_cale_side_pane_g

0x2e0d,	// (0x0005d739) popup_call_status_window_ParamLimits

0x2e0d,	// (0x0005d739) popup_call_status_window

0xac7f,	// (0x000655ab) stacon_top_pane

0xac87,	// (0x000655b3) status_pane_ParamLimits

0xac87,	// (0x000655b3) status_pane

0xaca1,	// (0x000655cd) status_small_pane

0xaca9,	// (0x000655d5) control_pane

0x9dd4,	// (0x00064700) stacon_bottom_pane

0xacb1,	// (0x000655dd) list_single_mce_smart_pane_t1_ParamLimits

0xacb1,	// (0x000655dd) list_single_mce_smart_pane_t1

0xacc4,	// (0x000655f0) list_single_mce_smart_pane_t2_ParamLimits

0xacc4,	// (0x000655f0) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x00069cdb) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x00069cdb) list_single_mce_smart_pane_t

0x2e54,	// (0x0005d780) compass_pane

0x2e5d,	// (0x0005d789) main_location2_pane_t1

0x2e73,	// (0x0005d79f) main_location2_pane_t2

0x2e89,	// (0x0005d7b5) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x00069ce0) main_location2_pane_t

0xacec,	// (0x00065618) compass_pane_g1_ParamLimits

0xacec,	// (0x00065618) compass_pane_g1

0x2ed1,	// (0x0005d7fd) compass_pane_t1

0x2ee0,	// (0x0005d80c) compass_pane_t2

0x0005,

0xf3bd,	// (0x00069ce9) compass_pane_t

0x2f27,	// (0x0005d853) text_secondary_cp61

0xad3a,	// (0x00065666) navi_pane_cams_g5

0xad86,	// (0x000656b2) navi_pane_im_t1

0xad94,	// (0x000656c0) navi_pane_mp_g1_ParamLimits

0xad94,	// (0x000656c0) navi_pane_mp_g1

0xada8,	// (0x000656d4) navi_pane_mp_g2_ParamLimits

0xada8,	// (0x000656d4) navi_pane_mp_g2

0xadb4,	// (0x000656e0) navi_pane_mp_g3_ParamLimits

0xadb4,	// (0x000656e0) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x00069cfd) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x00069cfd) navi_pane_mp_g

0xadc0,	// (0x000656ec) navi_pane_mp_t1

0xadce,	// (0x000656fa) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x00069d04) navi_pane_mp_t

0xae39,	// (0x00065765) navi_pane_vt_g1

0xadc0,	// (0x000656ec) navi_pane_vt_t1

0xae41,	// (0x0006576d) navi_slider_pane

0xa389,	// (0x00064cb5) zooming_pane

0xae49,	// (0x00065775) navi_slider_pane_g1

0xae52,	// (0x0006577e) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x00069d0b) navi_slider_pane_g

0xae7f,	// (0x000657ab) aid_levels_zoom

0xae87,	// (0x000657b3) zooming_pane_g1

0xae8f,	// (0x000657bb) zooming_pane_g2

0xae8f,	// (0x000657bb) zooming_pane_g3

0x0002,

0xf3ee,	// (0x00069d1a) zooming_pane_g

0xae97,	// (0x000657c3) level_10_zoom

0xaea0,	// (0x000657cc) level_11_zoom

0xaea9,	// (0x000657d5) level_1_zoom

0xaeb2,	// (0x000657de) level_2_zoom

0xaebb,	// (0x000657e7) level_3_zoom

0xaec4,	// (0x000657f0) level_4_zoom

0xaecd,	// (0x000657f9) level_5_zoom

0xaed6,	// (0x00065802) level_6_zoom

0xaedf,	// (0x0006580b) level_7_zoom

0xaee8,	// (0x00065814) level_8_zoom

0xaef1,	// (0x0006581d) level_9_zoom

0xaf02,	// (0x0006582e) popup_phob_thumbnail_window_g1

0xaf0a,	// (0x00065836) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x00069d21) popup_phob_thumbnail_window_g

0xe1fb,	// (0x00068b27) level_1_location

0xe203,	// (0x00068b2f) level_2_location

0xe20b,	// (0x00068b37) level_3_location

0xe213,	// (0x00068b3f) level_4_location

0xa389,	// (0x00064cb5) level_5_location

0x2fbd,	// (0x0005d8e9) mce_icon_pane_g1

0x2fc5,	// (0x0005d8f1) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x00069d26) mce_icon_pane_g

0x2fcd,	// (0x0005d8f9) main_mup_pane_g1_ParamLimits

0x2fcd,	// (0x0005d8f9) main_mup_pane_g1

0x2fe3,	// (0x0005d90f) main_mup_pane_g2_ParamLimits

0x2fe3,	// (0x0005d90f) main_mup_pane_g2

0x2ffb,	// (0x0005d927) main_mup_pane_g3_ParamLimits

0x2ffb,	// (0x0005d927) main_mup_pane_g3

0x3013,	// (0x0005d93f) main_mup_pane_g4_ParamLimits

0x3013,	// (0x0005d93f) main_mup_pane_g4

0x302b,	// (0x0005d957) main_mup_pane_g5_ParamLimits

0x302b,	// (0x0005d957) main_mup_pane_g5

0x3045,	// (0x0005d971) main_mup_pane_g6_ParamLimits

0x3045,	// (0x0005d971) main_mup_pane_g6

0x305d,	// (0x0005d989) main_mup_pane_g7_ParamLimits

0x305d,	// (0x0005d989) main_mup_pane_g7

0x3075,	// (0x0005d9a1) main_mup_pane_g8_ParamLimits

0x3075,	// (0x0005d9a1) main_mup_pane_g8

0x308d,	// (0x0005d9b9) main_mup_pane_g9_ParamLimits

0x308d,	// (0x0005d9b9) main_mup_pane_g9

0x30a1,	// (0x0005d9cd) main_mup_pane_g10_ParamLimits

0x30a1,	// (0x0005d9cd) main_mup_pane_g10

0x30b5,	// (0x0005d9e1) main_mup_pane_g11_ParamLimits

0x30b5,	// (0x0005d9e1) main_mup_pane_g11

0x30c7,	// (0x0005d9f3) main_mup_pane_g12_ParamLimits

0x30c7,	// (0x0005d9f3) main_mup_pane_g12

0x30db,	// (0x0005da07) main_mup_pane_g13_ParamLimits

0x30db,	// (0x0005da07) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x00069d2b) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x00069d2b) main_mup_pane_g

0x30ed,	// (0x0005da19) main_mup_pane_t1_ParamLimits

0x30ed,	// (0x0005da19) main_mup_pane_t1

0x3107,	// (0x0005da33) main_mup_pane_t2_ParamLimits

0x3107,	// (0x0005da33) main_mup_pane_t2

0x311f,	// (0x0005da4b) main_mup_pane_t3_ParamLimits

0x311f,	// (0x0005da4b) main_mup_pane_t3

0x3137,	// (0x0005da63) main_mup_pane_t4_ParamLimits

0x3137,	// (0x0005da63) main_mup_pane_t4

0x3155,	// (0x0005da81) main_mup_pane_t5_ParamLimits

0x3155,	// (0x0005da81) main_mup_pane_t5

0x316a,	// (0x0005da96) main_mup_pane_t6_ParamLimits

0x316a,	// (0x0005da96) main_mup_pane_t6

0x0005,

0xf41a,	// (0x00069d46) main_mup_pane_t_ParamLimits

0xf41a,	// (0x00069d46) main_mup_pane_t

0x317c,	// (0x0005daa8) mup_progress_pane_ParamLimits

0x317c,	// (0x0005daa8) mup_progress_pane

0x3188,	// (0x0005dab4) mup_visualizer_pane_ParamLimits

0x3188,	// (0x0005dab4) mup_visualizer_pane

0x31b0,	// (0x0005dadc) mup_volume_pane_ParamLimits

0x31b0,	// (0x0005dadc) mup_volume_pane

0xaf12,	// (0x0006583e) mup_visualizer_pane_g1_ParamLimits

0xaf12,	// (0x0006583e) mup_visualizer_pane_g1

0xaf12,	// (0x0006583e) mup_visualizer_pane_g2_ParamLimits

0xaf12,	// (0x0006583e) mup_visualizer_pane_g2

0xacec,	// (0x00065618) mup_visualizer_pane_g3_ParamLimits

0xacec,	// (0x00065618) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x00069d53) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x00069d53) mup_visualizer_pane_g

0xa1bd,	// (0x00064ae9) mup_volume_pane_g1

0xaf28,	// (0x00065854) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x00069d5a) mup_volume_pane_g

0xa1bd,	// (0x00064ae9) mup_progress_pane_g1

0xaf31,	// (0x0006585d) mup_progress_pane_g2

0xaf3a,	// (0x00065866) mup_progress_pane_g3

0x0002,

0xf433,	// (0x00069d5f) mup_progress_pane_g

0x9dd4,	// (0x00064700) bg_popup_window_pane_cp05

0xaf43,	// (0x0006586f) heading_pane_cp02_ParamLimits

0xaf43,	// (0x0006586f) heading_pane_cp02

0xaf5d,	// (0x00065889) list_popup_blid_pane

0xaf65,	// (0x00065891) list_blid_sat_info_pane_ParamLimits

0xaf65,	// (0x00065891) list_blid_sat_info_pane

0xaf78,	// (0x000658a4) list_blid_sat_info_pane_g1

0xaf80,	// (0x000658ac) list_blid_sat_info_pane_t1

0x32a0,	// (0x0005dbcc) mup_equalizer_pane_ParamLimits

0x32a0,	// (0x0005dbcc) mup_equalizer_pane

0x32b9,	// (0x0005dbe5) mup_equalizer_pane_cp1_ParamLimits

0x32b9,	// (0x0005dbe5) mup_equalizer_pane_cp1

0x32d2,	// (0x0005dbfe) mup_equalizer_pane_cp2_ParamLimits

0x32d2,	// (0x0005dbfe) mup_equalizer_pane_cp2

0x32eb,	// (0x0005dc17) mup_equalizer_pane_cp3_ParamLimits

0x32eb,	// (0x0005dc17) mup_equalizer_pane_cp3

0x3304,	// (0x0005dc30) mup_equalizer_pane_cp4_ParamLimits

0x3304,	// (0x0005dc30) mup_equalizer_pane_cp4

0x331d,	// (0x0005dc49) mup_equalizer_pane_cp5

0x332f,	// (0x0005dc5b) mup_equalizer_pane_cp6

0x3341,	// (0x0005dc6d) mup_equalizer_pane_cp7

0xe0d9,	// (0x00068a05) bg_popup_call_poc_act_pane_g9

0xe0e1,	// (0x00068a0d) bg_popup_call_poc_act_pane_g10

0xe0e9,	// (0x00068a15) bg_popup_call_poc_act_pane_g11

0x000a,

0xa02f,	// (0x0006495b) mup_scale_pane

0xa1bd,	// (0x00064ae9) mup_scale_pane_g1

0xaf8e,	// (0x000658ba) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x00069d7b) mup_scale_pane_g

0xafb2,	// (0x000658de) msg_data_pane

0xafba,	// (0x000658e6) scroll_pane_cp017

0x3367,	// (0x0005dc93) bg_list_pane_cp04_ParamLimits

0x3367,	// (0x0005dc93) bg_list_pane_cp04

0xafc2,	// (0x000658ee) msg_data_pane_g1

0x2d34,	// (0x0005d660) msg_data_pane_g2

0x2d3c,	// (0x0005d668) msg_data_pane_g3

0x3387,	// (0x0005dcb3) msg_data_pane_g4

0x2d4c,	// (0x0005d678) msg_data_pane_g5

0x2fbd,	// (0x0005d8e9) msg_data_pane_g6

0x338f,	// (0x0005dcbb) msg_data_pane_g7

0x0006,

0xf45e,	// (0x00069d8a) msg_data_pane_g

0x3397,	// (0x0005dcc3) msg_text_pane_ParamLimits

0x3397,	// (0x0005dcc3) msg_text_pane

0x33bf,	// (0x0005dceb) qrid_highlight_pane_cp011_ParamLimits

0x33bf,	// (0x0005dceb) qrid_highlight_pane_cp011

0x9dd4,	// (0x00064700) msg_body_pane

0x9dd4,	// (0x00064700) msg_header_pane

0xafd3,	// (0x000658ff) input_focus_pane_cp07

0x33e1,	// (0x0005dd0d) msg_header_pane_t1_ParamLimits

0x33e1,	// (0x0005dd0d) msg_header_pane_t1

0x33f3,	// (0x0005dd1f) msg_header_pane_t2_ParamLimits

0x33f3,	// (0x0005dd1f) msg_header_pane_t2

0x0001,

0xf472,	// (0x00069d9e) msg_header_pane_t_ParamLimits

0xf472,	// (0x00069d9e) msg_header_pane_t

0xafe8,	// (0x00065914) msg_body_pane_g1

0x3405,	// (0x0005dd31) msg_body_pane_t1_ParamLimits

0x3405,	// (0x0005dd31) msg_body_pane_t1

0x3430,	// (0x0005dd5c) msg_body_pane_t2_ParamLimits

0x3430,	// (0x0005dd5c) msg_body_pane_t2

0x3442,	// (0x0005dd6e) msg_body_pane_t3_ParamLimits

0x3442,	// (0x0005dd6e) msg_body_pane_t3

0x0002,

0xf477,	// (0x00069da3) msg_body_pane_t_ParamLimits

0xf477,	// (0x00069da3) msg_body_pane_t

0x348a,	// (0x0005ddb6) main_viewer_pane_g1_ParamLimits

0x348a,	// (0x0005ddb6) main_viewer_pane_g1

0x3496,	// (0x0005ddc2) main_viewer_pane_g2_ParamLimits

0x3496,	// (0x0005ddc2) main_viewer_pane_g2

0x34a2,	// (0x0005ddce) main_viewer_pane_g3_ParamLimits

0x34a2,	// (0x0005ddce) main_viewer_pane_g3

0x34b1,	// (0x0005dddd) main_viewer_pane_g4_ParamLimits

0x34b1,	// (0x0005dddd) main_viewer_pane_g4

0xb008,	// (0x00065934) main_viewer_pane_g5_ParamLimits

0xb008,	// (0x00065934) main_viewer_pane_g5

0xb008,	// (0x00065934) main_viewer_pane_g7_ParamLimits

0xb008,	// (0x00065934) main_viewer_pane_g7

0xb01a,	// (0x00065946) main_viewer_pane_g8_ParamLimits

0xb01a,	// (0x00065946) main_viewer_pane_g8

0x0007,

0xf487,	// (0x00069db3) main_viewer_pane_g_ParamLimits

0xf487,	// (0x00069db3) main_viewer_pane_g

0xb032,	// (0x0006595e) viewer_content_pane_ParamLimits

0xb032,	// (0x0006595e) viewer_content_pane

0x34e5,	// (0x0005de11) main_postcard_pane_g1_ParamLimits

0x34e5,	// (0x0005de11) main_postcard_pane_g1

0x34f9,	// (0x0005de25) main_postcard_pane_g2_ParamLimits

0x34f9,	// (0x0005de25) main_postcard_pane_g2

0x350d,	// (0x0005de39) main_postcard_pane_g3_ParamLimits

0x350d,	// (0x0005de39) main_postcard_pane_g3

0x0005,

0xf498,	// (0x00069dc4) main_postcard_pane_g_ParamLimits

0xf498,	// (0x00069dc4) main_postcard_pane_g

0x3520,	// (0x0005de4c) main_postcard_pane_g4

0xe305,	// (0x00068c31) smil_status_volume_pane_g2

0x355b,	// (0x0005de87) postcard_pane_ParamLimits

0x355b,	// (0x0005de87) postcard_pane

0xb040,	// (0x0006596c) postcard_pane_g1_ParamLimits

0xb040,	// (0x0006596c) postcard_pane_g1

0x359b,	// (0x0005dec7) postcard_pane_g2_ParamLimits

0x359b,	// (0x0005dec7) postcard_pane_g2

0x35a7,	// (0x0005ded3) postcard_pane_g3_ParamLimits

0x35a7,	// (0x0005ded3) postcard_pane_g3

0xb04e,	// (0x0006597a) postcard_pane_g4_ParamLimits

0xb04e,	// (0x0006597a) postcard_pane_g4

0x35b3,	// (0x0005dedf) postcard_pane_g5_ParamLimits

0x35b3,	// (0x0005dedf) postcard_pane_g5

0x35c8,	// (0x0005def4) postcard_pane_g6_ParamLimits

0x35c8,	// (0x0005def4) postcard_pane_g6

0xb040,	// (0x0006596c) postcard_pane_g7_ParamLimits

0xb040,	// (0x0006596c) postcard_pane_g7

0x0006,

0xf4a5,	// (0x00069dd1) postcard_pane_g_ParamLimits

0xf4a5,	// (0x00069dd1) postcard_pane_g

0x35dc,	// (0x0005df08) main_mp2_pane_g1_ParamLimits

0x35dc,	// (0x0005df08) main_mp2_pane_g1

0x35e8,	// (0x0005df14) main_mp2_pane_g2_ParamLimits

0x35e8,	// (0x0005df14) main_mp2_pane_g2

0x35f4,	// (0x0005df20) main_mp2_pane_g3_ParamLimits

0x35f4,	// (0x0005df20) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x00069de0) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x00069de0) main_mp2_pane_g

0x3600,	// (0x0005df2c) main_mp2_pane_t1_ParamLimits

0x3600,	// (0x0005df2c) main_mp2_pane_t1

0x3615,	// (0x0005df41) main_mp2_pane_t2_ParamLimits

0x3615,	// (0x0005df41) main_mp2_pane_t2

0x3627,	// (0x0005df53) main_mp2_pane_t3_ParamLimits

0x3627,	// (0x0005df53) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x00069de7) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x00069de7) main_mp2_pane_t

0xb05c,	// (0x00065988) pec_content_pane_ParamLimits

0xb05c,	// (0x00065988) pec_content_pane

0xa581,	// (0x00064ead) scroll_pane_cp015

0xb06e,	// (0x0006599a) pec_attribute_pane_ParamLimits

0xb06e,	// (0x0006599a) pec_attribute_pane

0x3639,	// (0x0005df65) pec_content_pane_g1_ParamLimits

0x3639,	// (0x0005df65) pec_content_pane_g1

0xb07e,	// (0x000659aa) pec_content_pane_t1_ParamLimits

0xb07e,	// (0x000659aa) pec_content_pane_t1

0xb090,	// (0x000659bc) pec_content_pane_t2_ParamLimits

0xb090,	// (0x000659bc) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x00069dee) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x00069dee) pec_content_pane_t

0x3645,	// (0x0005df71) list_single_graphic_pane_cp01_ParamLimits

0x3645,	// (0x0005df71) list_single_graphic_pane_cp01

0xa02f,	// (0x0006495b) bg_popup_sub_pane_cp04

0xb0a2,	// (0x000659ce) popup_mup_playback_window_g1

0xb0ae,	// (0x000659da) popup_mup_playback_window_t1

0xb0c3,	// (0x000659ef) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x00069df3) popup_mup_playback_window_t

0xb0fa,	// (0x00065a26) main_image_pane_g1_ParamLimits

0xb0fa,	// (0x00065a26) main_image_pane_g1

0xb13d,	// (0x00065a69) scroll_pane_cp018_ParamLimits

0xb13d,	// (0x00065a69) scroll_pane_cp018

0xb155,	// (0x00065a81) scroll_pane_cp016_ParamLimits

0xb155,	// (0x00065a81) scroll_pane_cp016

0x3710,	// (0x0005e03c) smil2_image_pane_ParamLimits

0x3710,	// (0x0005e03c) smil2_image_pane

0x3738,	// (0x0005e064) smil2_root_pane_ParamLimits

0x3738,	// (0x0005e064) smil2_root_pane

0x3770,	// (0x0005e09c) smil2_text_pane_ParamLimits

0x3770,	// (0x0005e09c) smil2_text_pane

0x9dd4,	// (0x00064700) bg_list_pane_cp06

0xb191,	// (0x00065abd) grid_radio_pane

0x9dd4,	// (0x00064700) bg_popup_window_pane_cp06

0xb199,	// (0x00065ac5) main_fmradio_pane_t1

0xab39,	// (0x00065465) heading_pane_cp04

0xb1a7,	// (0x00065ad3) main_fmradio_pane_t2

0xe131,	// (0x00068a5d) popup_cale_lunar_info_window_g1

0xb1b5,	// (0x00065ae1) main_fmradio_pane_t3

0xe139,	// (0x00068a65) popup_cale_lunar_info_window_g2

0xb1c3,	// (0x00065aef) main_fmradio_pane_t4

0x0001,

0xb1d1,	// (0x00065afd) main_fmradio_pane_t5

0x0004,

0x0106,	// (0x0005aa32) popup_cale_lunar_info_window_g

0xf4dc,	// (0x00069e08) main_fmradio_pane_t

0xb1df,	// (0x00065b0b) wait_bar_pane_cp03

0xb1e7,	// (0x00065b13) cell_fmradio_pane_ParamLimits

0xb1e7,	// (0x00065b13) cell_fmradio_pane

0xb040,	// (0x0006596c) cell_fmradio_pane_g1_ParamLimits

0xb040,	// (0x0006596c) cell_fmradio_pane_g1

0x9dd4,	// (0x00064700) grid_highlight_pane_cp011

0xb1fa,	// (0x00065b26) poc_content_pane_ParamLimits

0xb1fa,	// (0x00065b26) poc_content_pane

0xb20d,	// (0x00065b39) scroll_pane_cp019

0x37dc,	// (0x0005e108) popup_call_poc_act_window_ParamLimits

0x37dc,	// (0x0005e108) popup_call_poc_act_window

0x37fc,	// (0x0005e128) popup_call_poc_inact_window_ParamLimits

0x37fc,	// (0x0005e128) popup_call_poc_inact_window

0x00ca,	// (0x0005a9f6) bg_popup_call_poc_act_pane_g

0xe0f1,	// (0x00068a1d) bg_popup_call_poc_inact_pane_g1

0xe0f9,	// (0x00068a25) bg_popup_call_poc_inact_pane_g2

0xb215,	// (0x00065b41) popup_call_poc_act_window_g2

0xe101,	// (0x00068a2d) bg_popup_call_poc_inact_pane_g3

0xe081,	// (0x000689ad) bg_popup_call_poc_inact_pane_g4

0xe109,	// (0x00068a35) bg_popup_call_poc_inact_pane_g5

0xb21d,	// (0x00065b49) popup_call_poc_act_window_t1_ParamLimits

0xb21d,	// (0x00065b49) popup_call_poc_act_window_t1

0xb245,	// (0x00065b71) popup_call_poc_act_window_t2_ParamLimits

0xb245,	// (0x00065b71) popup_call_poc_act_window_t2

0xb26d,	// (0x00065b99) popup_call_poc_act_window_t3_ParamLimits

0xb26d,	// (0x00065b99) popup_call_poc_act_window_t3

0xb295,	// (0x00065bc1) popup_call_poc_act_window_t4_ParamLimits

0xb295,	// (0x00065bc1) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x00069e13) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x00069e13) popup_call_poc_act_window_t

0xe111,	// (0x00068a3d) bg_popup_call_poc_inact_pane_g6

0xe119,	// (0x00068a45) bg_popup_call_poc_inact_pane_g7

0xe121,	// (0x00068a4d) bg_popup_call_poc_inact_pane_g8

0xb2a7,	// (0x00065bd3) popup_call_poc_inact_window_g2

0xe129,	// (0x00068a55) bg_popup_call_poc_inact_pane_g9

0x0008,

0x00e1,	// (0x0005aa0d) bg_popup_call_poc_inact_pane_g

0xb2af,	// (0x00065bdb) popup_call_poc_inact_window_t1_ParamLimits

0xb2af,	// (0x00065bdb) popup_call_poc_inact_window_t1

0xb2c4,	// (0x00065bf0) popup_call_poc_inact_window_t2_ParamLimits

0xb2c4,	// (0x00065bf0) popup_call_poc_inact_window_t2

0xb2d9,	// (0x00065c05) popup_call_poc_inact_window_t3_ParamLimits

0xb2d9,	// (0x00065c05) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x00069e1c) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x00069e1c) popup_call_poc_inact_window_t

0xe278,	// (0x00068ba4) context_pane_ParamLimits

0x3f0a,	// (0x0005e836) signal_pane_ParamLimits

0xa389,	// (0x00064cb5) main_call2_pane

0xbc46,	// (0x00066572) popup_phob_thumbnail2_window_ParamLimits

0xbc46,	// (0x00066572) popup_phob_thumbnail2_window

0xaff0,	// (0x0006591c) aid_hotspot_pointer_arrow_pane

0xaff8,	// (0x00065924) aid_hotspot_pointer_hand_pane

0x3ad1,	// (0x0005e3fd) phob_pre_status_pane_g5

0x18ce,	// (0x0005c1fa) cams_zoom_pane_ParamLimits

0x18dd,	// (0x0005c209) image_vga_pane_ParamLimits

0x18f5,	// (0x0005c221) main_camera_pane_g1_ParamLimits

0x1905,	// (0x0005c231) main_camera_pane_g2_ParamLimits

0x1915,	// (0x0005c241) main_camera_pane_g3_ParamLimits

0x1925,	// (0x0005c251) main_camera_pane_g4_ParamLimits

0x1935,	// (0x0005c261) main_camera_pane_g5_ParamLimits

0x1945,	// (0x0005c271) main_camera_pane_g6_ParamLimits

0x1955,	// (0x0005c281) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x00069b1b) main_camera_pane_g_ParamLimits

0x1965,	// (0x0005c291) main_camera_pane_t1_ParamLimits

0x197b,	// (0x0005c2a7) main_camera_pane_t2_ParamLimits

0xf200,	// (0x00069b2c) main_camera_pane_t_ParamLimits

0xa02f,	// (0x0006495b) bg_popup_preview_window_pane_cp01_ParamLimits

0xa02f,	// (0x0006495b) bg_popup_preview_window_pane_cp01

0xb2ee,	// (0x00065c1a) popup_phob_thumbnail2_window_g1_ParamLimits

0xb2ee,	// (0x00065c1a) popup_phob_thumbnail2_window_g1

0x9dd4,	// (0x00064700) call2_cli_visual_pane

0x3828,	// (0x0005e154) popup_call2_audio_conf_window_ParamLimits

0x3828,	// (0x0005e154) popup_call2_audio_conf_window

0x3846,	// (0x0005e172) popup_call2_audio_first_window_ParamLimits

0x3846,	// (0x0005e172) popup_call2_audio_first_window

0x38bc,	// (0x0005e1e8) popup_call2_audio_in_window_ParamLimits

0x38bc,	// (0x0005e1e8) popup_call2_audio_in_window

0x38f0,	// (0x0005e21c) popup_call2_audio_out_window_ParamLimits

0x38f0,	// (0x0005e21c) popup_call2_audio_out_window

0x3942,	// (0x0005e26e) popup_call2_audio_second_window_ParamLimits

0x3942,	// (0x0005e26e) popup_call2_audio_second_window

0x3994,	// (0x0005e2c0) popup_call2_audio_wait_window_ParamLimits

0x3994,	// (0x0005e2c0) popup_call2_audio_wait_window

0x9dd4,	// (0x00064700) bg_popup_call2_act_pane_cp03

0xa011,	// (0x0006493d) list_conf_pane_cp

0xb2fa,	// (0x00065c26) popup_call2_audio_conf_window_t1

0xab96,	// (0x000654c2) list_single_graphic_popup_conf2_pane_ParamLimits

0xab96,	// (0x000654c2) list_single_graphic_popup_conf2_pane

0xaba9,	// (0x000654d5) list_highlight_pane_cp04

0xb308,	// (0x00065c34) list_single_graphic_popup_conf2_pane_g1

0xabba,	// (0x000654e6) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x00069e23) list_single_graphic_popup_conf2_pane_g

0xb310,	// (0x00065c3c) list_single_graphic_popup_conf2_pane_t1

0xb31e,	// (0x00065c4a) bg_popup_call2_act_pane_cp01_ParamLimits

0xb31e,	// (0x00065c4a) bg_popup_call2_act_pane_cp01

0xb3a8,	// (0x00065cd4) call_type_pane_cp05_ParamLimits

0xb3a8,	// (0x00065cd4) call_type_pane_cp05

0xb3fc,	// (0x00065d28) popup_call2_audio_second_window_g1_ParamLimits

0xb3fc,	// (0x00065d28) popup_call2_audio_second_window_g1

0xb450,	// (0x00065d7c) popup_call2_audio_second_window_g2_ParamLimits

0xb450,	// (0x00065d7c) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x00069e28) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x00069e28) popup_call2_audio_second_window_g

0xb4b5,	// (0x00065de1) popup_call2_audio_second_window_t1_ParamLimits

0xb4b5,	// (0x00065de1) popup_call2_audio_second_window_t1

0xb570,	// (0x00065e9c) popup_call2_audio_second_window_t2_ParamLimits

0xb570,	// (0x00065e9c) popup_call2_audio_second_window_t2

0xb5c3,	// (0x00065eef) popup_call2_audio_second_window_t3_ParamLimits

0xb5c3,	// (0x00065eef) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x00069e2f) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x00069e2f) popup_call2_audio_second_window_t

0x9dd4,	// (0x00064700) bg_popup_call2_in_pane_cp02

0x9dde,	// (0x0006470a) call_type_pane_cp04

0x9de6,	// (0x00064712) popup_call2_audio_wait_window_g1

0x9dee,	// (0x0006471a) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x00069a0a) popup_call2_audio_wait_window_g

0x9df6,	// (0x00064722) popup_call2_audio_wait_window_t3

0xb6b6,	// (0x00065fe2) bg_popup_call2_act_pane_ParamLimits

0xb6b6,	// (0x00065fe2) bg_popup_call2_act_pane

0xb776,	// (0x000660a2) call_type_pane_cp03_ParamLimits

0xb776,	// (0x000660a2) call_type_pane_cp03

0xb7da,	// (0x00066106) popup_call2_audio_first_window_g1_ParamLimits

0xb7da,	// (0x00066106) popup_call2_audio_first_window_g1

0xb84a,	// (0x00066176) popup_call2_audio_first_window_g2_ParamLimits

0xb84a,	// (0x00066176) popup_call2_audio_first_window_g2

0xaf12,	// (0x0006583e) popup_call2_audio_first_window_g3_ParamLimits

0xaf12,	// (0x0006583e) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x00069e38) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x00069e38) popup_call2_audio_first_window_g

0xb928,	// (0x00066254) popup_call2_audio_first_window_t1_ParamLimits

0xb928,	// (0x00066254) popup_call2_audio_first_window_t1

0xba2b,	// (0x00066357) popup_call2_audio_first_window_t4_ParamLimits

0xba2b,	// (0x00066357) popup_call2_audio_first_window_t4

0xbb0e,	// (0x0006643a) popup_call2_audio_first_window_t5_ParamLimits

0xbb0e,	// (0x0006643a) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x00069e43) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x00069e43) popup_call2_audio_first_window_t

0xa027,	// (0x00064953) bg_popup_call2_act_pane_g1

0xe141,	// (0x00068a6d) popup_cale_lunar_info_window_t1

0xe14f,	// (0x00068a7b) popup_cale_lunar_info_window_t2

0xe15d,	// (0x00068a89) popup_cale_lunar_info_window_t3

0x9dd4,	// (0x00064700) bg_popup_call2_bubble_pane

0xdb95,	// (0x000684c1) bg_popup_call2_in_pane_cp01_ParamLimits

0xdb95,	// (0x000684c1) bg_popup_call2_in_pane_cp01

0x9ab0,	// (0x000643dc) call_type_pane_cp02

0xdbdd,	// (0x00068509) popup_call2_audio_out_window_g1_ParamLimits

0xdbdd,	// (0x00068509) popup_call2_audio_out_window_g1

0xdc09,	// (0x00068535) popup_call2_audio_out_window_g2_ParamLimits

0xdc09,	// (0x00068535) popup_call2_audio_out_window_g2

0xdc31,	// (0x0006855d) popup_call2_audio_out_window_g3_ParamLimits

0xdc31,	// (0x0006855d) popup_call2_audio_out_window_g3

0x0003,

0x0071,	// (0x0005a99d) popup_call2_audio_out_window_g_ParamLimits

0x0071,	// (0x0005a99d) popup_call2_audio_out_window_g

0xdc6c,	// (0x00068598) popup_call2_audio_out_window_t1_ParamLimits

0xdc6c,	// (0x00068598) popup_call2_audio_out_window_t1

0xdccb,	// (0x000685f7) popup_call2_audio_out_window_t2_ParamLimits

0xdccb,	// (0x000685f7) popup_call2_audio_out_window_t2

0xdd1f,	// (0x0006864b) popup_call2_audio_out_window_t3_ParamLimits

0xdd1f,	// (0x0006864b) popup_call2_audio_out_window_t3

0xdd35,	// (0x00068661) popup_call2_audio_out_window_t4_ParamLimits

0xdd35,	// (0x00068661) popup_call2_audio_out_window_t4

0xdd4b,	// (0x00068677) popup_call2_audio_out_window_t5_ParamLimits

0xdd4b,	// (0x00068677) popup_call2_audio_out_window_t5

0x0005,

0x007a,	// (0x0005a9a6) popup_call2_audio_out_window_t_ParamLimits

0x007a,	// (0x0005a9a6) popup_call2_audio_out_window_t

0xddaf,	// (0x000686db) bg_popup_call2_in_pane_ParamLimits

0xddaf,	// (0x000686db) bg_popup_call2_in_pane

0xde0b,	// (0x00068737) popup_call2_audio_in_window_g1_ParamLimits

0xde0b,	// (0x00068737) popup_call2_audio_in_window_g1

0xde43,	// (0x0006876f) popup_call2_audio_in_window_g2_ParamLimits

0xde43,	// (0x0006876f) popup_call2_audio_in_window_g2

0xde7b,	// (0x000687a7) popup_call2_audio_in_window_g3_ParamLimits

0xde7b,	// (0x000687a7) popup_call2_audio_in_window_g3

0x0003,

0x0087,	// (0x0005a9b3) popup_call2_audio_in_window_g_ParamLimits

0x0087,	// (0x0005a9b3) popup_call2_audio_in_window_g

0xded3,	// (0x000687ff) popup_call2_audio_in_window_t1_ParamLimits

0xded3,	// (0x000687ff) popup_call2_audio_in_window_t1

0xdf53,	// (0x0006887f) popup_call2_audio_in_window_t2_ParamLimits

0xdf53,	// (0x0006887f) popup_call2_audio_in_window_t2

0xdfd3,	// (0x000688ff) popup_call2_audio_in_window_t3_ParamLimits

0xdfd3,	// (0x000688ff) popup_call2_audio_in_window_t3

0xdfed,	// (0x00068919) popup_call2_audio_in_window_t4_ParamLimits

0xdfed,	// (0x00068919) popup_call2_audio_in_window_t4

0xdfff,	// (0x0006892b) popup_call2_audio_in_window_t5_ParamLimits

0xdfff,	// (0x0006892b) popup_call2_audio_in_window_t5

0xe014,	// (0x00068940) popup_call2_audio_in_window_t6_ParamLimits

0xe014,	// (0x00068940) popup_call2_audio_in_window_t6

0x0005,

0x0090,	// (0x0005a9bc) popup_call2_audio_in_window_t_ParamLimits

0x0090,	// (0x0005a9bc) popup_call2_audio_in_window_t

0xa027,	// (0x00064953) bg_popup_call2_in_pane_g1

0xe16b,	// (0x00068a97) popup_cale_lunar_info_window_t4

0x0003,

0x010b,	// (0x0005aa37) popup_cale_lunar_info_window_t

0xa02f,	// (0x0006495b) bg_popup_call2_rect_pane_ParamLimits

0xa02f,	// (0x0006495b) bg_popup_call2_rect_pane

0x9dd4,	// (0x00064700) call2_cli_visual_graphic_pane

0x9dd4,	// (0x00064700) call2_cli_visual_text_pane

0xbc6d,	// (0x00066599) smil_status_volume_pane_g3

0x0002,

0xa1bd,	// (0x00064ae9) call2_cli_visual_graphic_pane_g1

0xa1bd,	// (0x00064ae9) call2_cli_visual_graphic_pane_g2

0xa1bd,	// (0x00064ae9) call2_cli_visual_graphic_pane_g3

0x0002,

0xf520,	// (0x00069e4c) call2_cli_visual_graphic_pane_g

0xe029,	// (0x00068955) bg_popup_call2_rect_pane_g1

0xa265,	// (0x00064b91) bg_popup_call2_rect_pane_g2

0xe031,	// (0x0006895d) bg_popup_call2_rect_pane_g3

0xe039,	// (0x00068965) bg_popup_call2_rect_pane_g4

0xe041,	// (0x0006896d) bg_popup_call2_rect_pane_g5

0xe049,	// (0x00068975) bg_popup_call2_rect_pane_g6

0xe051,	// (0x0006897d) bg_popup_call2_rect_pane_g7

0xe059,	// (0x00068985) bg_popup_call2_rect_pane_g8

0xe061,	// (0x0006898d) bg_popup_call2_rect_pane_g9

0x0008,

0xf527,	// (0x00069e53) bg_popup_call2_rect_pane_g

0xe069,	// (0x00068995) bg_popup_call2_bubble_pane_g1

0xe071,	// (0x0006899d) bg_popup_call2_bubble_pane_g2

0xe079,	// (0x000689a5) bg_popup_call2_bubble_pane_g3

0xe081,	// (0x000689ad) bg_popup_call2_bubble_pane_g4

0xe089,	// (0x000689b5) bg_popup_call2_bubble_pane_g5

0xe091,	// (0x000689bd) bg_popup_call2_bubble_pane_g6

0xe099,	// (0x000689c5) bg_popup_call2_bubble_pane_g7

0xe0a1,	// (0x000689cd) bg_popup_call2_bubble_pane_g8

0xe0a9,	// (0x000689d5) bg_popup_call2_bubble_pane_g9

0x0008,

0x00b7,	// (0x0005a9e3) bg_popup_call2_bubble_pane_g

0x1281,	// (0x0005bbad) aid_cale_week_size_cell_pane

0x1991,	// (0x0005c2bd) aid_cams_cif_uncrop_pane_ParamLimits

0x1991,	// (0x0005c2bd) aid_cams_cif_uncrop_pane

0x1b32,	// (0x0005c45e) aid_cams_size_cell_ParamLimits

0x1b32,	// (0x0005c45e) aid_cams_size_cell

0x1b46,	// (0x0005c472) grid_cams_pane_ParamLimits

0x1b5b,	// (0x0005c487) linegrid_cams_pane_ParamLimits

0x1d1b,	// (0x0005c647) call_video_pane_t1

0x1d35,	// (0x0005c661) call_video_pane_t2

0x0001,

0xf253,	// (0x00069b7f) call_video_pane_t

0x20ba,	// (0x0005c9e6) aid_cale_month_size_cell_pane_ParamLimits

0x20ba,	// (0x0005c9e6) aid_cale_month_size_cell_pane

0xf56a,	// (0x00069e96) smil_status_volume_pane_g

0xbc7a,	// (0x000665a6) volume_smil_pane_ParamLimits

0x9982,	// (0x000642ae) aid_popup2_width_pane

0x11d0,	// (0x0005bafc) cell_qdial_pane_g4_ParamLimits

0x11d0,	// (0x0005bafc) cell_qdial_pane_g4

0x2eb1,	// (0x0005d7dd) aid_blid_cardinal_pane_ParamLimits

0x2ebd,	// (0x0005d7e9) aid_blid_destination_pane_ParamLimits

0x2ebd,	// (0x0005d7e9) aid_blid_destination_pane

0xa02f,	// (0x0006495b) bg_popup_call_poc_act_pane_ParamLimits

0xa02f,	// (0x0006495b) bg_popup_call_poc_act_pane

0xa02f,	// (0x0006495b) bg_popup_call_poc_inact_pane_ParamLimits

0xa02f,	// (0x0006495b) bg_popup_call_poc_inact_pane

0xe0b1,	// (0x000689dd) bg_popup_call_poc_act_pane_g1

0xe0b9,	// (0x000689e5) bg_popup_call_poc_act_pane_g2

0xe0c1,	// (0x000689ed) bg_popup_call_poc_act_pane_g3

0xe081,	// (0x000689ad) bg_popup_call_poc_act_pane_g4

0xe089,	// (0x000689b5) bg_popup_call_poc_act_pane_g5

0xe0c9,	// (0x000689f5) bg_popup_call_poc_act_pane_g6

0xe099,	// (0x000689c5) bg_popup_call_poc_act_pane_g7

0xe0d1,	// (0x000689fd) bg_popup_call_poc_act_pane_g8

0x9dd4,	// (0x00064700) main_usb_pane

0xbc25,	// (0x00066551) popup_cale_lunar_info_window

0x1f7a,	// (0x0005c8a6) im_reading_pane_t1_ParamLimits

0xa4ca,	// (0x00064df6) list_im_pane_ParamLimits

0xa4db,	// (0x00064e07) scroll_pane_cp07_ParamLimits

0x9dd4,	// (0x00064700) grid_highlight_pane_cp012

0xa02f,	// (0x0006495b) mup_scale_pane_ParamLimits

0xb040,	// (0x0006596c) main_usb_pane_g1_ParamLimits

0xb040,	// (0x0006596c) main_usb_pane_g1

0x39ee,	// (0x0005e31a) main_usb_pane_g2_ParamLimits

0x39ee,	// (0x0005e31a) main_usb_pane_g2

0x0001,

0xf53a,	// (0x00069e66) main_usb_pane_g_ParamLimits

0xf53a,	// (0x00069e66) main_usb_pane_g

0x3a02,	// (0x0005e32e) main_usb_pane_t1_ParamLimits

0x3a02,	// (0x0005e32e) main_usb_pane_t1

0x3a14,	// (0x0005e340) main_usb_pane_t2_ParamLimits

0x3a14,	// (0x0005e340) main_usb_pane_t2

0x3a26,	// (0x0005e352) main_usb_pane_t3_ParamLimits

0x3a26,	// (0x0005e352) main_usb_pane_t3

0x3a38,	// (0x0005e364) main_usb_pane_t4_ParamLimits

0x3a38,	// (0x0005e364) main_usb_pane_t4

0x3a4a,	// (0x0005e376) main_usb_pane_t5_ParamLimits

0x3a4a,	// (0x0005e376) main_usb_pane_t5

0x3a5c,	// (0x0005e388) main_usb_pane_t6_ParamLimits

0x3a5c,	// (0x0005e388) main_usb_pane_t6

0x0005,

0xf53f,	// (0x00069e6b) main_usb_pane_t_ParamLimits

0xace3,	// (0x0006560f) aid_text_placing

0x2e5d,	// (0x0005d789) main_location2_pane_t1_ParamLimits

0x2e73,	// (0x0005d79f) main_location2_pane_t2_ParamLimits

0x2e89,	// (0x0005d7b5) main_location2_pane_t3_ParamLimits

0x2e9f,	// (0x0005d7cb) main_location2_pane_t4_ParamLimits

0x2e9f,	// (0x0005d7cb) main_location2_pane_t4

0xf3b4,	// (0x00069ce0) main_location2_pane_t_ParamLimits

0xa06b,	// (0x00064997) find_pinb_pane_g2_ParamLimits

0xa06b,	// (0x00064997) find_pinb_pane_g2

0x0001,

0xf104,	// (0x00069a30) find_pinb_pane_g_ParamLimits

0xf104,	// (0x00069a30) find_pinb_pane_g

0xa077,	// (0x000649a3) find_pinb_pane_t1_ParamLimits

0xa089,	// (0x000649b5) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x00069a35) find_pinb_pane_t_ParamLimits

0x9dd4,	// (0x00064700) main_call3_pane

0x24b5,	// (0x0005cde1) cale_month_day_heading_pane_t1_ParamLimits

0x253b,	// (0x0005ce67) cale_month_day_heading_pane_t2_ParamLimits

0x25cc,	// (0x0005cef8) cale_month_day_heading_pane_t3_ParamLimits

0x265d,	// (0x0005cf89) cale_month_day_heading_pane_t4_ParamLimits

0x26ee,	// (0x0005d01a) cale_month_day_heading_pane_t5_ParamLimits

0x277f,	// (0x0005d0ab) cale_month_day_heading_pane_t6_ParamLimits

0x2810,	// (0x0005d13c) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x00069bb7) cale_month_day_heading_pane_t_ParamLimits

0x2a96,	// (0x0005d3c2) smil_status_volume_pane

0x3577,	// (0x0005dea3) postcard_address_pane_ParamLimits

0x3577,	// (0x0005dea3) postcard_address_pane

0x3589,	// (0x0005deb5) postcard_message_pane_ParamLimits

0x3589,	// (0x0005deb5) postcard_message_pane

0x39cc,	// (0x0005e2f8) call2_cli_visual_pane_t1_ParamLimits

0x39cc,	// (0x0005e2f8) call2_cli_visual_pane_t1

0x4126,	// (0x0005ea52) postcard_message_pane_t1_ParamLimits

0x4126,	// (0x0005ea52) postcard_message_pane_t1

0x410f,	// (0x0005ea3b) postcard_address_pane_t1_ParamLimits

0x410f,	// (0x0005ea3b) postcard_address_pane_t1

0x40fd,	// (0x0005ea29) popup_call3_audio_in_window_ParamLimits

0x40fd,	// (0x0005ea29) popup_call3_audio_in_window

0x3f8c,	// (0x0005e8b8) bg_popup_call3_in_pane_ParamLimits

0x3f8c,	// (0x0005e8b8) bg_popup_call3_in_pane

0x3ffe,	// (0x0005e92a) popup_call3_audio_in_window_g1_ParamLimits

0x3ffe,	// (0x0005e92a) popup_call3_audio_in_window_g1

0x401e,	// (0x0005e94a) popup_call3_audio_in_window_g2_ParamLimits

0x401e,	// (0x0005e94a) popup_call3_audio_in_window_g2

0x403e,	// (0x0005e96a) popup_call3_audio_in_window_g3_ParamLimits

0x403e,	// (0x0005e96a) popup_call3_audio_in_window_g3

0x0003,

0xf571,	// (0x00069e9d) popup_call3_audio_in_window_g_ParamLimits

0xf571,	// (0x00069e9d) popup_call3_audio_in_window_g

0x406f,	// (0x0005e99b) popup_call3_audio_in_window_t1_ParamLimits

0x406f,	// (0x0005e99b) popup_call3_audio_in_window_t1

0x40ad,	// (0x0005e9d9) popup_call3_audio_in_window_t2_ParamLimits

0x40ad,	// (0x0005e9d9) popup_call3_audio_in_window_t2

0x40eb,	// (0x0005ea17) popup_call3_audio_in_window_t3_ParamLimits

0x40eb,	// (0x0005ea17) popup_call3_audio_in_window_t3

0x0002,

0xf57a,	// (0x00069ea6) popup_call3_audio_in_window_t_ParamLimits

0xf57a,	// (0x00069ea6) popup_call3_audio_in_window_t

0xa389,	// (0x00064cb5) bg_popup_call3_rect_pane

0xe029,	// (0x00068955) bg_popup_call3_rect_pane_g1

0xa265,	// (0x00064b91) bg_popup_call3_rect_pane_g2

0xe031,	// (0x0006895d) bg_popup_call3_rect_pane_g3

0xe039,	// (0x00068965) bg_popup_call3_rect_pane_g4

0xe041,	// (0x0006896d) bg_popup_call3_rect_pane_g5

0xe049,	// (0x00068975) bg_popup_call3_rect_pane_g6

0xe051,	// (0x0006897d) bg_popup_call3_rect_pane_g7

0x31c6,	// (0x0005daf2) mup_visualizer_osc_pane

0xaf20,	// (0x0006584c) mup_visualizer_spec_pane

0x3fbc,	// (0x0005e8e8) call3_video_qcif_pane_ParamLimits

0x3fbc,	// (0x0005e8e8) call3_video_qcif_pane

0x3fcd,	// (0x0005e8f9) call3_video_qcif_uncrop_pane_ParamLimits

0x3fcd,	// (0x0005e8f9) call3_video_qcif_uncrop_pane

0x3fd9,	// (0x0005e905) call3_video_subqcif_pane_ParamLimits

0x3fd9,	// (0x0005e905) call3_video_subqcif_pane

0x3fed,	// (0x0005e919) call3_video_subqcif_uncrop_pane_ParamLimits

0x3fed,	// (0x0005e919) call3_video_subqcif_uncrop_pane

0x405e,	// (0x0005e98a) popup_call3_audio_in_window_g4_ParamLimits

0x405e,	// (0x0005e98a) popup_call3_audio_in_window_g4

0x3f7b,	// (0x0005e8a7) mup_spec_half_pane

0x3f84,	// (0x0005e8b0) mup_spec_half_pane_cp

0xe2d8,	// (0x00068c04) mup_osc_middle_pane

0xe2e1,	// (0x00068c0d) mup_visualizer_osc_pane_g1

0x3f5c,	// (0x0005e888) mup_spec_bar_pane_ParamLimits

0x3f5c,	// (0x0005e888) mup_spec_bar_pane

0xe2c5,	// (0x00068bf1) mup_spec_bar_pane_g1

0xe2cf,	// (0x00068bfb) mup_spec_bar_pane_g2

0x0001,

0x014f,	// (0x0005aa7b) mup_spec_bar_pane_g

0x1281,	// (0x0005bbad) aid_cale_week_size_cell_pane_ParamLimits

0x129b,	// (0x0005bbc7) bg_cale_heading_pane_ParamLimits

0xa2eb,	// (0x00064c17) bg_cale_pane_cp01_ParamLimits

0x12b3,	// (0x0005bbdf) cale_week_corner_pane_ParamLimits

0x12d2,	// (0x0005bbfe) cale_week_day_heading_pane_ParamLimits

0x12ef,	// (0x0005bc1b) cale_week_scroll_pane_g1_ParamLimits

0x1302,	// (0x0005bc2e) cale_week_scroll_pane_g2_ParamLimits

0x131a,	// (0x0005bc46) cale_week_scroll_pane_g3_ParamLimits

0x1332,	// (0x0005bc5e) cale_week_scroll_pane_g4_ParamLimits

0x134a,	// (0x0005bc76) cale_week_scroll_pane_g5_ParamLimits

0x1362,	// (0x0005bc8e) cale_week_scroll_pane_g6_ParamLimits

0x137a,	// (0x0005bca6) cale_week_scroll_pane_g7_ParamLimits

0x1392,	// (0x0005bcbe) cale_week_scroll_pane_g8_ParamLimits

0x13ae,	// (0x0005bcda) cale_week_scroll_pane_g9_ParamLimits

0x13c6,	// (0x0005bcf2) cale_week_scroll_pane_g10_ParamLimits

0x13de,	// (0x0005bd0a) cale_week_scroll_pane_g11_ParamLimits

0x13f6,	// (0x0005bd22) cale_week_scroll_pane_g12_ParamLimits

0x140e,	// (0x0005bd3a) cale_week_scroll_pane_g13_ParamLimits

0x1426,	// (0x0005bd52) cale_week_scroll_pane_g14_ParamLimits

0x143e,	// (0x0005bd6a) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x00069ac1) cale_week_scroll_pane_g_ParamLimits

0x1472,	// (0x0005bd9e) cale_week_time_pane_ParamLimits

0x148e,	// (0x0005bdba) grid_cale_week_pane_ParamLimits

0xa308,	// (0x00064c34) listscroll_cale_week_pane_t1

0xa31a,	// (0x00064c46) scroll_pane_cp08_ParamLimits

0x210f,	// (0x0005ca3b) cale_month_corner_pane_ParamLimits

0xa70b,	// (0x00065037) cale_month_pane_t1

0x246b,	// (0x0005cd97) cale_month_week_pane_ParamLimits

0x2cac,	// (0x0005d5d8) popup_call_status_window_g1_ParamLimits

0x2cc0,	// (0x0005d5ec) popup_call_status_window_g2_ParamLimits

0x2cd4,	// (0x0005d600) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x00069c67) popup_call_status_window_g_ParamLimits

0xaaba,	// (0x000653e6) aid_call2_pane

0x33d5,	// (0x0005dd01) msg_header_pane_g1

0x3577,	// (0x0005dea3) postcard_address2_pane_ParamLimits

0x3577,	// (0x0005dea3) postcard_address2_pane

0x3589,	// (0x0005deb5) postcard_message2_pane_ParamLimits

0x3589,	// (0x0005deb5) postcard_message2_pane

0x3f18,	// (0x0005e844) message2_row_pane_ParamLimits

0x3f18,	// (0x0005e844) message2_row_pane

0x3f32,	// (0x0005e85e) address2_row_pane_ParamLimits

0x3f32,	// (0x0005e85e) address2_row_pane

0xe293,	// (0x00068bbf) postcard_message2_row_pane_g1

0xe29b,	// (0x00068bc7) postcard_message2_row_pane_t1

0xe293,	// (0x00068bbf) address2_row_pane_g1

0xe29b,	// (0x00068bc7) address2_row_pane_t1

0x188b,	// (0x0005c1b7) aid_size_cell_vorec

0x9dd4,	// (0x00064700) main_rss_pane

0x3f45,	// (0x0005e871) rss_list_single_pane_ParamLimits

0x3f45,	// (0x0005e871) rss_list_single_pane

0xe2a9,	// (0x00068bd5) rss_list_single_pane_t1

0xe2b7,	// (0x00068be3) rss_list_single_pane_t2

0x0001,

0x014a,	// (0x0005aa76) rss_list_single_pane_t

0x9dd4,	// (0x00064700) main_camera2_pane

0x9dd4,	// (0x00064700) main_video2_pane

0x417f,	// (0x0005eaab) cams_zoom_pane_cp2_ParamLimits

0x417f,	// (0x0005eaab) cams_zoom_pane_cp2

0x4196,	// (0x0005eac2) image2_vga_pane_ParamLimits

0x4196,	// (0x0005eac2) image2_vga_pane

0x41cc,	// (0x0005eaf8) main_camera2_pane_g1_ParamLimits

0x41cc,	// (0x0005eaf8) main_camera2_pane_g1

0x41ec,	// (0x0005eb18) main_camera2_pane_g2_ParamLimits

0x41ec,	// (0x0005eb18) main_camera2_pane_g2

0x4203,	// (0x0005eb2f) main_camera2_pane_g3_ParamLimits

0x4203,	// (0x0005eb2f) main_camera2_pane_g3

0x421a,	// (0x0005eb46) main_camera2_pane_g4_ParamLimits

0x421a,	// (0x0005eb46) main_camera2_pane_g4

0x4231,	// (0x0005eb5d) main_camera2_pane_g5_ParamLimits

0x4231,	// (0x0005eb5d) main_camera2_pane_g5

0x4248,	// (0x0005eb74) main_camera2_pane_g6_ParamLimits

0x4248,	// (0x0005eb74) main_camera2_pane_g6

0x425f,	// (0x0005eb8b) main_camera2_pane_g7_ParamLimits

0x425f,	// (0x0005eb8b) main_camera2_pane_g7

0x4276,	// (0x0005eba2) main_camera2_pane_g8_ParamLimits

0x4276,	// (0x0005eba2) main_camera2_pane_g8

0x0008,

0xf581,	// (0x00069ead) main_camera2_pane_g_ParamLimits

0xf581,	// (0x00069ead) main_camera2_pane_g

0x42a4,	// (0x0005ebd0) main_camera2_pane_t1_ParamLimits

0x42a4,	// (0x0005ebd0) main_camera2_pane_t1

0x42d3,	// (0x0005ebff) main_camera2_pane_t2_ParamLimits

0x42d3,	// (0x0005ebff) main_camera2_pane_t2

0x42f0,	// (0x0005ec1c) main_camera2_pane_t3_ParamLimits

0x42f0,	// (0x0005ec1c) main_camera2_pane_t3

0x433c,	// (0x0005ec68) main_camera2_pane_t4_ParamLimits

0x433c,	// (0x0005ec68) main_camera2_pane_t4

0x0006,

0xf594,	// (0x00069ec0) main_camera2_pane_t_ParamLimits

0xf594,	// (0x00069ec0) main_camera2_pane_t

0x43b1,	// (0x0005ecdd) cams_zoom_pane_cp4_ParamLimits

0x43b1,	// (0x0005ecdd) cams_zoom_pane_cp4

0x43c7,	// (0x0005ecf3) image2_cif_pane_ParamLimits

0x43c7,	// (0x0005ecf3) image2_cif_pane

0x43ea,	// (0x0005ed16) image2_subqcif_pane_ParamLimits

0x43ea,	// (0x0005ed16) image2_subqcif_pane

0x4400,	// (0x0005ed2c) main_video2_pane_g1_ParamLimits

0x4400,	// (0x0005ed2c) main_video2_pane_g1

0x441a,	// (0x0005ed46) main_video2_pane_g2_ParamLimits

0x441a,	// (0x0005ed46) main_video2_pane_g2

0x4430,	// (0x0005ed5c) main_video2_pane_g3_ParamLimits

0x4430,	// (0x0005ed5c) main_video2_pane_g3

0x4446,	// (0x0005ed72) main_video2_pane_g4_ParamLimits

0x4446,	// (0x0005ed72) main_video2_pane_g4

0x445c,	// (0x0005ed88) main_video2_pane_g5_ParamLimits

0x445c,	// (0x0005ed88) main_video2_pane_g5

0x4472,	// (0x0005ed9e) main_video2_pane_g6_ParamLimits

0x4472,	// (0x0005ed9e) main_video2_pane_g6

0x0005,

0xf5a3,	// (0x00069ecf) main_video2_pane_g_ParamLimits

0xf5a3,	// (0x00069ecf) main_video2_pane_g

0x448c,	// (0x0005edb8) main_video2_pane_t1_ParamLimits

0x448c,	// (0x0005edb8) main_video2_pane_t1

0x44b0,	// (0x0005eddc) main_video2_pane_t2_ParamLimits

0x44b0,	// (0x0005eddc) main_video2_pane_t2

0x44fa,	// (0x0005ee26) main_video2_pane_t3_ParamLimits

0x44fa,	// (0x0005ee26) main_video2_pane_t3

0x0002,

0xf5b0,	// (0x00069edc) main_video2_pane_t_ParamLimits

0xf5b0,	// (0x00069edc) main_video2_pane_t

0x3b0b,	// (0x0005e437) call_muted_g2

0x0001,

0xf565,	// (0x00069e91) call_muted_g

0x9dd4,	// (0x00064700) main_mup2_pane

0x453c,	// (0x0005ee68) main_mup2_pane_g1_ParamLimits

0x453c,	// (0x0005ee68) main_mup2_pane_g1

0x4548,	// (0x0005ee74) main_mup2_pane_g2_ParamLimits

0x4548,	// (0x0005ee74) main_mup2_pane_g2

0xbce3,	// (0x0006660f) main_mup_pane_g13_cp1

0xbceb,	// (0x00066617) mup_volume_pane_cp1

0x4564,	// (0x0005ee90) main_mup2_pane_g4_ParamLimits

0x4564,	// (0x0005ee90) main_mup2_pane_g4

0x4574,	// (0x0005eea0) main_mup2_pane_g5_ParamLimits

0x4574,	// (0x0005eea0) main_mup2_pane_g5

0x4584,	// (0x0005eeb0) main_mup2_pane_g6_ParamLimits

0x4584,	// (0x0005eeb0) main_mup2_pane_g6

0x4594,	// (0x0005eec0) main_mup2_pane_g7_ParamLimits

0x4594,	// (0x0005eec0) main_mup2_pane_g7

0x0006,

0xf5b7,	// (0x00069ee3) main_mup2_pane_g_ParamLimits

0xf5b7,	// (0x00069ee3) main_mup2_pane_g

0x45ac,	// (0x0005eed8) main_mup2_pane_t1_ParamLimits

0x45ac,	// (0x0005eed8) main_mup2_pane_t1

0x45c2,	// (0x0005eeee) main_mup2_pane_t2_ParamLimits

0x45c2,	// (0x0005eeee) main_mup2_pane_t2

0x45d8,	// (0x0005ef04) main_mup2_pane_t3_ParamLimits

0x45d8,	// (0x0005ef04) main_mup2_pane_t3

0x45ee,	// (0x0005ef1a) main_mup2_pane_t4_ParamLimits

0x45ee,	// (0x0005ef1a) main_mup2_pane_t4

0x4606,	// (0x0005ef32) main_mup2_pane_t5_ParamLimits

0x4606,	// (0x0005ef32) main_mup2_pane_t5

0x461e,	// (0x0005ef4a) main_mup2_pane_t6_ParamLimits

0x461e,	// (0x0005ef4a) main_mup2_pane_t6

0x0005,

0xf5c6,	// (0x00069ef2) main_mup2_pane_t_ParamLimits

0xf5c6,	// (0x00069ef2) main_mup2_pane_t

0x464e,	// (0x0005ef7a) mup2_visualizer_pane_ParamLimits

0x464e,	// (0x0005ef7a) mup2_visualizer_pane

0x4679,	// (0x0005efa5) mup_progress_pane_cp_ParamLimits

0x4679,	// (0x0005efa5) mup_progress_pane_cp

0xbcce,	// (0x000665fa) mup_volume_pane_cp_ParamLimits

0xbcce,	// (0x000665fa) mup_volume_pane_cp

0x468d,	// (0x0005efb9) mup2_visualizer_pane_g1_ParamLimits

0x468d,	// (0x0005efb9) mup2_visualizer_pane_g1

0xe318,	// (0x00068c44) mup2_visualizer_pane_g2_ParamLimits

0xe318,	// (0x00068c44) mup2_visualizer_pane_g2

0x46a2,	// (0x0005efce) mup2_visualizer_pane_g3_ParamLimits

0x46a2,	// (0x0005efce) mup2_visualizer_pane_g3

0x0002,

0xf5d3,	// (0x00069eff) mup2_visualizer_pane_g_ParamLimits

0xf5d3,	// (0x00069eff) mup2_visualizer_pane_g

0xb189,	// (0x00065ab5) aid_size_cell_fmradio

0x3c67,	// (0x0005e593) aid_height_parent_landcape

0xa568,	// (0x00064e94) wml_content_pane_cp

0xa570,	// (0x00064e9c) wml_tabs_pane

0xa579,	// (0x00064ea5) popup_wml_miniature_window

0xa581,	// (0x00064ead) scroll_pane_cp021

0xa595,	// (0x00064ec1) wml_content_pane_comp8

0x9dd4,	// (0x00064700) bg_popup_sub_pane_cp05

0xe336,	// (0x00068c62) popup_wml_miniature_window_g1

0xe33e,	// (0x00068c6a) wml_miniature_view_pane

0x46ae,	// (0x0005efda) aid_size_wml_view

0x46b6,	// (0x0005efe2) wml_miniature_view_pane_g1

0x46bf,	// (0x0005efeb) wml_miniature_view_pane_g2

0x46c8,	// (0x0005eff4) wml_miniature_view_pane_g3

0x46d0,	// (0x0005effc) wml_miniature_view_pane_g4

0x46d8,	// (0x0005f004) wml_miniature_view_pane_g5

0x46e0,	// (0x0005f00c) wml_miniature_view_pane_g6

0x46e8,	// (0x0005f014) wml_miniature_view_pane_g7

0x46f0,	// (0x0005f01c) wml_miniature_view_pane_g8

0x0007,

0xf5da,	// (0x00069f06) wml_miniature_view_pane_g

0xe346,	// (0x00068c72) background_graphic_ParamLimits

0xe346,	// (0x00068c72) background_graphic

0xe352,	// (0x00068c7e) wml_tabs_2_pane

0xe35b,	// (0x00068c87) wml_tabs_3_pane_ParamLimits

0xe35b,	// (0x00068c87) wml_tabs_3_pane

0xe36d,	// (0x00068c99) wml_tabs_4_pane_ParamLimits

0xe36d,	// (0x00068c99) wml_tabs_4_pane

0xe383,	// (0x00068caf) wml_tabs_5_pane_ParamLimits

0xe383,	// (0x00068caf) wml_tabs_5_pane

0xe39d,	// (0x00068cc9) wml_tabs_pane_g2_ParamLimits

0xe39d,	// (0x00068cc9) wml_tabs_pane_g2

0xe3b1,	// (0x00068cdd) wml_tabs_pane_g3_ParamLimits

0xe3b1,	// (0x00068cdd) wml_tabs_pane_g3

0x46f8,	// (0x0005f024) wml_tabs_2_active_pane_ParamLimits

0x46f8,	// (0x0005f024) wml_tabs_2_active_pane

0x4708,	// (0x0005f034) wml_tabs_2_passive_pane_ParamLimits

0x4708,	// (0x0005f034) wml_tabs_2_passive_pane

0x4718,	// (0x0005f044) wml_tabs_3_active_pane_cp_ParamLimits

0x4718,	// (0x0005f044) wml_tabs_3_active_pane_cp

0x4729,	// (0x0005f055) wml_tabs_3_passive_pane_ParamLimits

0x4729,	// (0x0005f055) wml_tabs_3_passive_pane

0x473a,	// (0x0005f066) wml_tabs_3_passive_pane_cp_ParamLimits

0x473a,	// (0x0005f066) wml_tabs_3_passive_pane_cp

0x474b,	// (0x0005f077) tabs_4_active_pane

0x4753,	// (0x0005f07f) tabs_4_passive_pane

0x475b,	// (0x0005f087) tabs_4_passive_pane_cp

0x4763,	// (0x0005f08f) tabs_4_passive_pane_cp2

0x39e6,	// (0x0005e312) aid_height_text

0x319c,	// (0x0005dac8) mup_volume_cont_pane_ParamLimits

0x319c,	// (0x0005dac8) mup_volume_cont_pane

0x0ed9,	// (0x0005b805) aid_size_cell_pinb

0x0ee3,	// (0x0005b80f) aid_size_list_pinb

0x4665,	// (0x0005ef91) mup2_volume_cont_pane_ParamLimits

0x4665,	// (0x0005ef91) mup2_volume_cont_pane

0xbcba,	// (0x000665e6) mup2_volume_cont_pane_g1_ParamLimits

0xbcba,	// (0x000665e6) mup2_volume_cont_pane_g1

0x0bd5,	// (0x0005b501) aid_size_cell_touch_ParamLimits

0x0bd5,	// (0x0005b501) aid_size_cell_touch

0x0dc1,	// (0x0005b6ed) touch_pane_ParamLimits

0x0dc1,	// (0x0005b6ed) touch_pane

0x99d9,	// (0x00064305) main_rss2_pane

0xe3ce,	// (0x00068cfa) listscroll_rss2_pane

0xe3d7,	// (0x00068d03) rss2_navigation_pane

0xe3df,	// (0x00068d0b) list_rss2_pane

0xac60,	// (0x0006558c) scroll_pane_cp22

0xe3e7,	// (0x00068d13) rss2_navigation_pane_g1

0xe3f0,	// (0x00068d1c) rss2_navigation_pane_g2

0xe3f8,	// (0x00068d24) rss2_navigation_pane_g3

0x0002,

0x01d5,	// (0x0005ab01) rss2_navigation_pane_g

0xe400,	// (0x00068d2c) rss2_navigation_pane_t1

0x476b,	// (0x0005f097) rss2_list_single_pane_ParamLimits

0x476b,	// (0x0005f097) rss2_list_single_pane

0xe40e,	// (0x00068d3a) rss2_list_single_pane_t2

0xe41c,	// (0x00068d48) rss2_list_single_pane_t3_ParamLimits

0xe41c,	// (0x00068d48) rss2_list_single_pane_t3

0xe439,	// (0x00068d65) rss2_list_single_pane_t4

0x2a80,	// (0x0005d3ac) smil_status_pane_g1

0x99cb,	// (0x000642f7) main_image2_pane_ParamLimits

0x99cb,	// (0x000642f7) main_image2_pane

0x428d,	// (0x0005ebb9) main_camera2_pane_g9_ParamLimits

0x428d,	// (0x0005ebb9) main_camera2_pane_g9

0x437f,	// (0x0005ecab) main_camera2_pane_t5_ParamLimits

0x437f,	// (0x0005ecab) main_camera2_pane_t5

0xbc8f,	// (0x000665bb) main_camera2_pane_t6_ParamLimits

0xbc8f,	// (0x000665bb) main_camera2_pane_t6

0x477f,	// (0x0005f0ab) main_image2_pane_g1_ParamLimits

0x477f,	// (0x0005f0ab) main_image2_pane_g1

0x379e,	// (0x0005e0ca) smil2_video_pane_ParamLimits

0x379e,	// (0x0005e0ca) smil2_video_pane

0x999a,	// (0x000642c6) aid_zoom_text_primary_cp

0x99c3,	// (0x000642ef) popup_preview_fixed_window

0xa4c2,	// (0x00064dee) im_reading_pane_g1

0x4173,	// (0x0005ea9f) cams2_bc_adjust_pane_cp_ParamLimits

0x4173,	// (0x0005ea9f) cams2_bc_adjust_pane_cp

0x43a5,	// (0x0005ecd1) cams2_bc_adjust_pane_ParamLimits

0x43a5,	// (0x0005ecd1) cams2_bc_adjust_pane

0xe447,	// (0x00068d73) cams2_bc_adjust_pane_g1

0xbcf3,	// (0x0006661f) cams2_slider_pane

0xbcfc,	// (0x00066628) cams2_slider_pane_g1

0xbd05,	// (0x00066631) cams2_slider_pane_g2

0x0006,

0xf5eb,	// (0x00069f17) cams2_slider_pane_g

0x0fc3,	// (0x0005b8ef) calc_display_pane_ParamLimits

0x0fdf,	// (0x0005b90b) calc_paper_pane_ParamLimits

0x1000,	// (0x0005b92c) grid_calc_pane_ParamLimits

0xab1c,	// (0x00065448) popup_clock_digital_window_t1_ParamLimits

0xb126,	// (0x00065a52) main_image_pane_t1

0x0fa5,	// (0x0005b8d1) aid_size_cell_calc_ParamLimits

0x0fa5,	// (0x0005b8d1) aid_size_cell_calc

0x3ca7,	// (0x0005e5d3) popup_blid_sat_info2_window_ParamLimits

0x3ca7,	// (0x0005e5d3) popup_blid_sat_info2_window

0xe457,	// (0x00068d83) aid_size_cell_blid

0xe45f,	// (0x00068d8b) bg_popup_window_pane_cp07

0xe482,	// (0x00068dae) grid_popup_blid_pane

0xe48a,	// (0x00068db6) heading_pane_cp05_ParamLimits

0xe48a,	// (0x00068db6) heading_pane_cp05

0xe552,	// (0x00068e7e) cell_popup_blid_pane_ParamLimits

0xe552,	// (0x00068e7e) cell_popup_blid_pane

0xe572,	// (0x00068e9e) cell_popup_blid_pane_g1

0xe57a,	// (0x00068ea6) cell_popup_blid_pane_t1

0x4638,	// (0x0005ef64) mup2_indicator_pane_ParamLimits

0x4638,	// (0x0005ef64) mup2_indicator_pane

0xa389,	// (0x00064cb5) mup2_visualizer_osc_pane

0xe324,	// (0x00068c50) mup2_visualizer_spec_pane_ParamLimits

0xe324,	// (0x00068c50) mup2_visualizer_spec_pane

0x4793,	// (0x0005f0bf) mup2_spec_half_pane

0x479c,	// (0x0005f0c8) mup2_spec_half_pane_cp

0x47a4,	// (0x0005f0d0) mup2_spec_bar_pane_ParamLimits

0x47a4,	// (0x0005f0d0) mup2_spec_bar_pane

0xe2c5,	// (0x00068bf1) mup2_spec_bar_pane_g1

0xe2cf,	// (0x00068bfb) mup2_spec_bar_pane_g2

0x0001,

0x014f,	// (0x0005aa7b) mup2_spec_bar_pane_g

0x47c3,	// (0x0005f0ef) mup2_osc_middle_pane

0xe2e1,	// (0x00068c0d) mup2_visualizer_osc_pane_g1

0x99e3,	// (0x0006430f) popup_number_entry_window_t1_ParamLimits

0x99f6,	// (0x00064322) popup_number_entry_window_t2_ParamLimits

0x9a08,	// (0x00064334) popup_number_entry_window_t3_ParamLimits

0x0e29,	// (0x0005b755) popup_number_entry_window_t5_ParamLimits

0x0e29,	// (0x0005b755) popup_number_entry_window_t5

0xf0af,	// (0x000699db) popup_number_entry_window_t_ParamLimits

0x9a1a,	// (0x00064346) text_title_cp2_ParamLimits

0xb000,	// (0x0006592c) aid_hotspot_pointer_text2_pane

0xb026,	// (0x00065952) main_viewer_pane_g9_ParamLimits

0xb026,	// (0x00065952) main_viewer_pane_g9

0xa70b,	// (0x00065037) cale_month_pane_t1_ParamLimits

0xa75f,	// (0x0006508b) bg_cale_pane_ParamLimits

0xa777,	// (0x000650a3) list_cale_pane_ParamLimits

0xa788,	// (0x000650b4) listscroll_cale_day_pane_t1

0xa79a,	// (0x000650c6) scroll_pane_cp09_ParamLimits

0x31ce,	// (0x0005dafa) main_mup_eq_pane_t1_ParamLimits

0x31ce,	// (0x0005dafa) main_mup_eq_pane_t1

0x31e6,	// (0x0005db12) main_mup_eq_pane_t2_ParamLimits

0x31e6,	// (0x0005db12) main_mup_eq_pane_t2

0x31fc,	// (0x0005db28) main_mup_eq_pane_t3_ParamLimits

0x31fc,	// (0x0005db28) main_mup_eq_pane_t3

0x3212,	// (0x0005db3e) main_mup_eq_pane_t4_ParamLimits

0x3212,	// (0x0005db3e) main_mup_eq_pane_t4

0x3228,	// (0x0005db54) main_mup_eq_pane_t5_ParamLimits

0x3228,	// (0x0005db54) main_mup_eq_pane_t5

0x323e,	// (0x0005db6a) main_mup_eq_pane_t6_ParamLimits

0x323e,	// (0x0005db6a) main_mup_eq_pane_t6

0x3250,	// (0x0005db7c) main_mup_eq_pane_t7_ParamLimits

0x3250,	// (0x0005db7c) main_mup_eq_pane_t7

0x3262,	// (0x0005db8e) main_mup_eq_pane_t8_ParamLimits

0x3262,	// (0x0005db8e) main_mup_eq_pane_t8

0x3274,	// (0x0005dba0) main_mup_eq_pane_t9_ParamLimits

0x3274,	// (0x0005dba0) main_mup_eq_pane_t9

0x328a,	// (0x0005dbb6) main_mup_eq_pane_t10_ParamLimits

0x328a,	// (0x0005dbb6) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x00069d66) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x00069d66) main_mup_eq_pane_t

0x331d,	// (0x0005dc49) mup_equalizer_pane_cp5_ParamLimits

0x332f,	// (0x0005dc5b) mup_equalizer_pane_cp6_ParamLimits

0x3341,	// (0x0005dc6d) mup_equalizer_pane_cp7_ParamLimits

0x99d9,	// (0x00064305) main_gallery_pane

0xe2ea,	// (0x00068c16) smil2_volume_pane

0xe2f2,	// (0x00068c1e) smil_status_volume_pane_g1_ParamLimits

0xe305,	// (0x00068c31) smil_status_volume_pane_g2_ParamLimits

0xbc6d,	// (0x00066599) smil_status_volume_pane_g3_ParamLimits

0xf56a,	// (0x00069e96) smil_status_volume_pane_g_ParamLimits

0xe45f,	// (0x00068d8b) bg_popup_window_pane_cp07_ParamLimits

0xe46d,	// (0x00068d99) blid_firmament_pane

0x47cc,	// (0x0005f0f8) aid_size_cell_gallery_ParamLimits

0x47cc,	// (0x0005f0f8) aid_size_cell_gallery

0x47e2,	// (0x0005f10e) grid_gallery_pane_ParamLimits

0x47e2,	// (0x0005f10e) grid_gallery_pane

0x47f6,	// (0x0005f122) cell_gallery_pane_ParamLimits

0x47f6,	// (0x0005f122) cell_gallery_pane

0xe588,	// (0x00068eb4) bg_cell_gallery_focus_pane_ParamLimits

0xe588,	// (0x00068eb4) bg_cell_gallery_focus_pane

0xe59a,	// (0x00068ec6) cell_gallery_pane_g1_ParamLimits

0xe59a,	// (0x00068ec6) cell_gallery_pane_g1

0x483d,	// (0x0005f169) cell_gallery_pane_g2_ParamLimits

0x483d,	// (0x0005f169) cell_gallery_pane_g2

0x484a,	// (0x0005f176) cell_gallery_pane_g3_ParamLimits

0x484a,	// (0x0005f176) cell_gallery_pane_g3

0xe5a6,	// (0x00068ed2) cell_gallery_pane_g4_ParamLimits

0xe5a6,	// (0x00068ed2) cell_gallery_pane_g4

0x0003,

0xf5fa,	// (0x00069f26) cell_gallery_pane_g_ParamLimits

0xf5fa,	// (0x00069f26) cell_gallery_pane_g

0xe5b2,	// (0x00068ede) bg_cell_gallery_focus_pane_g1

0xe5ba,	// (0x00068ee6) bg_cell_gallery_focus_pane_g2

0xe5c2,	// (0x00068eee) bg_cell_gallery_focus_pane_g3

0xe5ca,	// (0x00068ef6) bg_cell_gallery_focus_pane_g4

0xe5d2,	// (0x00068efe) bg_cell_gallery_focus_pane_g5

0xe5da,	// (0x00068f06) bg_cell_gallery_focus_pane_g6

0xe5e2,	// (0x00068f0e) bg_cell_gallery_focus_pane_g7

0xe5ea,	// (0x00068f16) bg_cell_gallery_focus_pane_g8

0x0007,

0x020b,	// (0x0005ab37) bg_cell_gallery_focus_pane_g

0xe5f2,	// (0x00068f1e) aid_firma_cardinal

0xe606,	// (0x00068f32) blid_firmament_pane_t1

0xe61d,	// (0x00068f49) blid_firmament_pane_t2

0xe634,	// (0x00068f60) blid_firmament_pane_t3

0xe64b,	// (0x00068f77) blid_firmament_pane_t4

0x0003,

0x021c,	// (0x0005ab48) blid_firmament_pane_t

0xe662,	// (0x00068f8e) blid_sat_info_pane

0xe672,	// (0x00068f9e) blid_sat_info_pane_g1

0xe672,	// (0x00068f9e) blid_sat_info_pane_g2

0x0001,

0x0225,	// (0x0005ab51) blid_sat_info_pane_g

0xe67c,	// (0x00068fa8) blid_sat_info_pane_t1

0xe68a,	// (0x00068fb6) smil2_volume_content_pane

0xe693,	// (0x00068fbf) smil2_volume_pane_g1

0xe69b,	// (0x00068fc7) smil2_volume_content_pane_g1

0xe6a4,	// (0x00068fd0) smil2_volume_content_pane_g2

0xe6ad,	// (0x00068fd9) smil2_volume_content_pane_g3

0xe6b6,	// (0x00068fe2) smil2_volume_content_pane_g4

0xe6bf,	// (0x00068feb) smil2_volume_content_pane_g5

0xe6c8,	// (0x00068ff4) smil2_volume_content_pane_g6

0xe6d1,	// (0x00068ffd) smil2_volume_content_pane_g7

0xe6da,	// (0x00069006) smil2_volume_content_pane_g8

0xe6e3,	// (0x0006900f) smil2_volume_content_pane_g9

0xe6ec,	// (0x00069018) smil2_volume_content_pane_g10

0x0009,

0x022a,	// (0x0005ab56) smil2_volume_content_pane_g

0x1522,	// (0x0005be4e) cale_week_day_heading_pane_t1_ParamLimits

0x154c,	// (0x0005be78) cale_week_day_heading_pane_t2_ParamLimits

0x157b,	// (0x0005bea7) cale_week_day_heading_pane_t3_ParamLimits

0x15aa,	// (0x0005bed6) cale_week_day_heading_pane_t4_ParamLimits

0x15d9,	// (0x0005bf05) cale_week_day_heading_pane_t5_ParamLimits

0x1608,	// (0x0005bf34) cale_week_day_heading_pane_t6_ParamLimits

0x1637,	// (0x0005bf63) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x00069ae2) cale_week_day_heading_pane_t_ParamLimits

0xa337,	// (0x00064c63) bg_cale_side_pane_ParamLimits

0x1661,	// (0x0005bf8d) cale_week_time_pane_t1_ParamLimits

0x169b,	// (0x0005bfc7) cale_week_time_pane_t2_ParamLimits

0x16d5,	// (0x0005c001) cale_week_time_pane_t3_ParamLimits

0x170f,	// (0x0005c03b) cale_week_time_pane_t4_ParamLimits

0x1749,	// (0x0005c075) cale_week_time_pane_t5_ParamLimits

0x1783,	// (0x0005c0af) cale_week_time_pane_t6_ParamLimits

0x17bd,	// (0x0005c0e9) cale_week_time_pane_t7_ParamLimits

0x17f7,	// (0x0005c123) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x00069af1) cale_week_time_pane_t_ParamLimits

0x1831,	// (0x0005c15d) cell_cale_week_pane_g2_ParamLimits

0xa337,	// (0x00064c63) bg_cale_side_pane_cp01_ParamLimits

0x28a5,	// (0x0005d1d1) cale_month_week_pane_t1_ParamLimits

0x28be,	// (0x0005d1ea) cale_month_week_pane_t2_ParamLimits

0x28d7,	// (0x0005d203) cale_month_week_pane_t3_ParamLimits

0x28f0,	// (0x0005d21c) cale_month_week_pane_t4_ParamLimits

0x2909,	// (0x0005d235) cale_month_week_pane_t5_ParamLimits

0x2922,	// (0x0005d24e) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x00069bc6) cale_month_week_pane_t_ParamLimits

0xa71d,	// (0x00065049) cell_cale_month_pane_g1_ParamLimits

0x99d9,	// (0x00064305) main_cale_event_viewer_pane

0x0bcb,	// (0x0005b4f7) listscroll_cale_event_viewer_pane

0xe6f5,	// (0x00069021) list_cale_ev_pane

0xe6fd,	// (0x00069029) scroll_pane_cp023

0x4857,	// (0x0005f183) field_cale_ev_pane_ParamLimits

0x4857,	// (0x0005f183) field_cale_ev_pane

0xe709,	// (0x00069035) field_cale_ev_content_pane_ParamLimits

0xe709,	// (0x00069035) field_cale_ev_content_pane

0xe715,	// (0x00069041) field_cale_ev_pane_g1_ParamLimits

0xe715,	// (0x00069041) field_cale_ev_pane_g1

0xe721,	// (0x0006904d) field_cale_ev_pane_g2_ParamLimits

0xe721,	// (0x0006904d) field_cale_ev_pane_g2

0xe739,	// (0x00069065) field_cale_ev_pane_g3_ParamLimits

0xe739,	// (0x00069065) field_cale_ev_pane_g3

0x0002,

0x023f,	// (0x0005ab6b) field_cale_ev_pane_g_ParamLimits

0x023f,	// (0x0005ab6b) field_cale_ev_pane_g

0xe751,	// (0x0006907d) field_cale_ev_pane_t1_ParamLimits

0xe751,	// (0x0006907d) field_cale_ev_pane_t1

0x4871,	// (0x0005f19d) field_cale_ev_content_pane_t1_ParamLimits

0x4871,	// (0x0005f19d) field_cale_ev_content_pane_t1

0xafca,	// (0x000658f6) bg_button_pane_cp01

0x1271,	// (0x0005bb9d) listscroll_cale_week_pane_ParamLimits

0xa2e2,	// (0x00064c0e) popup_toolbar_window_cp01

0xa308,	// (0x00064c34) listscroll_cale_week_pane_t1_ParamLimits

0x1271,	// (0x0005bb9d) listscroll_cale_day_pane_ParamLimits

0xa2e2,	// (0x00064c0e) popup_toolbar_window_cp02

0xa788,	// (0x000650b4) listscroll_cale_day_pane_t1_ParamLimits

0x3c6f,	// (0x0005e59b) main_cale_month_pane_ParamLimits

0xbc58,	// (0x00066584) popup_toolbar_window_cp03_ParamLimits

0xbc58,	// (0x00066584) popup_toolbar_window_cp03

0x3678,	// (0x0005dfa4) main_image_pane_g2_ParamLimits

0x3678,	// (0x0005dfa4) main_image_pane_g2

0x3689,	// (0x0005dfb5) main_image_pane_g3_ParamLimits

0x3689,	// (0x0005dfb5) main_image_pane_g3

0x0002,

0xf4cc,	// (0x00069df8) main_image_pane_g_ParamLimits

0xf4cc,	// (0x00069df8) main_image_pane_g

0xb126,	// (0x00065a52) main_image_pane_t1_ParamLimits

0x369a,	// (0x0005dfc6) main_image_pane_t2_ParamLimits

0x369a,	// (0x0005dfc6) main_image_pane_t2

0x36ac,	// (0x0005dfd8) main_image_pane_t3_ParamLimits

0x36ac,	// (0x0005dfd8) main_image_pane_t3

0x36d4,	// (0x0005e000) main_image_pane_t4_ParamLimits

0x36d4,	// (0x0005e000) main_image_pane_t4

0x0003,

0xf4d3,	// (0x00069dff) main_image_pane_t_ParamLimits

0xf4d3,	// (0x00069dff) main_image_pane_t

0x36f4,	// (0x0005e020) popup_image_details_window_cp01

0x36fc,	// (0x0005e028) popup_toobar_trans_pane_cp01_ParamLimits

0x36fc,	// (0x0005e028) popup_toobar_trans_pane_cp01

0x3d70,	// (0x0005e69c) popup_image_details_window_ParamLimits

0x3d70,	// (0x0005e69c) popup_image_details_window

0xbc2d,	// (0x00066559) popup_image_focus_window

0x4141,	// (0x0005ea6d) camera2_autofocus_pane_ParamLimits

0x4141,	// (0x0005ea6d) camera2_autofocus_pane

0x0bcb,	// (0x0005b4f7) bg_popup_sub_pane_cp06

0xe768,	// (0x00069094) popup_image_focus_window_g1

0xe770,	// (0x0006909c) popup_image_focus_window_g2

0xe778,	// (0x000690a4) popup_image_focus_window_g3

0xe780,	// (0x000690ac) popup_image_focus_window_g4

0x0003,

0x0246,	// (0x0005ab72) popup_image_focus_window_g

0xe788,	// (0x000690b4) popup_image_focus_window_t1

0xe796,	// (0x000690c2) popup_image_focus_window_t2

0xe7a5,	// (0x000690d1) popup_image_focus_window_t3

0x0002,

0x024f,	// (0x0005ab7b) popup_image_focus_window_t

0xe7b3,	// (0x000690df) camera2_autofocus_pane_g1

0xbc0f,	// (0x0006653b) bg_tb_trans_pane_cp01

0xe7c1,	// (0x000690ed) popup_image_details_window_g1

0xe7d4,	// (0x00069100) popup_image_details_window_g2

0x0002,

0x0261,	// (0x0005ab8d) popup_image_details_window_g

0xe7fd,	// (0x00069129) popup_image_details_window_t1

0xe80f,	// (0x0006913b) popup_image_details_window_t2

0xe828,	// (0x00069154) popup_image_details_window_t3

0xe83c,	// (0x00069168) popup_image_details_window_t4

0xe857,	// (0x00069183) popup_image_details_window_t5

0x0004,

0x0268,	// (0x0005ab94) popup_image_details_window_t

0xa0e8,	// (0x00064a14) bg_calc_paper_pane_ParamLimits

0x99d9,	// (0x00064305) grid_highlight_pane_cp013

0xa100,	// (0x00064a2c) list_calc_pane_ParamLimits

0xa112,	// (0x00064a3e) scroll_pane_cp024

0xa11a,	// (0x00064a46) bg_calc_display_pane_ParamLimits

0xa126,	// (0x00064a52) calc_display_pane_t1_ParamLimits

0xa13b,	// (0x00064a67) calc_display_pane_t2_ParamLimits

0xa150,	// (0x00064a7c) calc_display_pane_t3_ParamLimits

0xf136,	// (0x00069a62) calc_display_pane_t_ParamLimits

0x117f,	// (0x0005baab) cell_calc_pane_g2

0x0001,

0xf153,	// (0x00069a7f) cell_calc_pane_g

0x1188,	// (0x0005bab4) cell_calc_pane_t1

0xa1c7,	// (0x00064af3) grid_highlight_pane_cp02_ParamLimits

0xa1dd,	// (0x00064b09) toolbar_button_pane_cp01_ParamLimits

0xa1dd,	// (0x00064b09) toolbar_button_pane_cp01

0xb16b,	// (0x00065a97) temp_image_control_pane_ParamLimits

0xb16b,	// (0x00065a97) temp_image_control_pane

0x99cb,	// (0x000642f7) main_mp3_pane

0xe871,	// (0x0006919d) temp_image_control_pane_g1_ParamLimits

0xe871,	// (0x0006919d) temp_image_control_pane_g1

0xe87f,	// (0x000691ab) temp_image_control_pane_g2_ParamLimits

0xe87f,	// (0x000691ab) temp_image_control_pane_g2

0xe891,	// (0x000691bd) temp_image_control_pane_g3_ParamLimits

0xe891,	// (0x000691bd) temp_image_control_pane_g3

0x48be,	// (0x0005f1ea) temp_image_control_pane_g4_ParamLimits

0x48be,	// (0x0005f1ea) temp_image_control_pane_g4

0x0003,

0xf60e,	// (0x00069f3a) temp_image_control_pane_g_ParamLimits

0xf60e,	// (0x00069f3a) temp_image_control_pane_g

0xe871,	// (0x0006919d) main_mp3_pane_g1

0x48cf,	// (0x0005f1fb) main_mp3_pane_g2

0x0007,

0xf617,	// (0x00069f43) main_mp3_pane_g

0xe8d4,	// (0x00069200) main_mp3_pane_t1

0xa3d3,	// (0x00064cff) main_camera_pane_g8_ParamLimits

0xa3d3,	// (0x00064cff) main_camera_pane_g8

0x1ada,	// (0x0005c406) main_video_pane_g7_ParamLimits

0x1ada,	// (0x0005c406) main_video_pane_g7

0xbca8,	// (0x000665d4) main_camera2_pane_t7_ParamLimits

0xbca8,	// (0x000665d4) main_camera2_pane_t7

0xa528,	// (0x00064e54) scroll_pane_cp025_ParamLimits

0xa528,	// (0x00064e54) scroll_pane_cp025

0xa53c,	// (0x00064e68) scroll_pane_cp026_ParamLimits

0xa53c,	// (0x00064e68) scroll_pane_cp026

0xa54b,	// (0x00064e77) wml_content_pane_ParamLimits

0x99d9,	// (0x00064305) main_touch_calib_pane

0x4991,	// (0x0005f2bd) main_touch_calib_pane_g1

0x49a3,	// (0x0005f2cf) main_touch_calib_pane_g2

0x49b5,	// (0x0005f2e1) main_touch_calib_pane_g3

0x49c7,	// (0x0005f2f3) main_touch_calib_pane_g4

0x0003,

0xf635,	// (0x00069f61) main_touch_calib_pane_g

0x49d9,	// (0x0005f305) main_touch_calib_pane_t1

0x49f1,	// (0x0005f31d) main_touch_calib_pane_t2

0x0004,

0xf63e,	// (0x00069f6a) main_touch_calib_pane_t

0xad1c,	// (0x00065648) mup_progress_pane_cp02

0xad51,	// (0x0006567d) navi_pane_g1

0xaddc,	// (0x00065708) navi_pane_mp_t3

0x99cb,	// (0x000642f7) main_mp3_pane_ParamLimits

0x3ec9,	// (0x0005e7f5) navi_pane_ParamLimits

0xe871,	// (0x0006919d) main_mp3_pane_g1_ParamLimits

0x48cf,	// (0x0005f1fb) main_mp3_pane_g2_ParamLimits

0x48db,	// (0x0005f207) main_mp3_pane_g3_ParamLimits

0x48db,	// (0x0005f207) main_mp3_pane_g3

0x48e7,	// (0x0005f213) main_mp3_pane_g4_ParamLimits

0x48e7,	// (0x0005f213) main_mp3_pane_g4

0xe8a1,	// (0x000691cd) main_mp3_pane_g5_ParamLimits

0xe8a1,	// (0x000691cd) main_mp3_pane_g5

0xe8af,	// (0x000691db) main_mp3_pane_g6_ParamLimits

0xe8af,	// (0x000691db) main_mp3_pane_g6

0xe8bc,	// (0x000691e8) main_mp3_pane_g7_ParamLimits

0xe8bc,	// (0x000691e8) main_mp3_pane_g7

0xe8c8,	// (0x000691f4) main_mp3_pane_g8_ParamLimits

0xe8c8,	// (0x000691f4) main_mp3_pane_g8

0xf617,	// (0x00069f43) main_mp3_pane_g_ParamLimits

0x48f3,	// (0x0005f21f) main_mp3_pane_t2

0x4901,	// (0x0005f22d) main_mp3_pane_t3

0xe8e2,	// (0x0006920e) main_mp3_pane_t4

0xe8f0,	// (0x0006921c) main_mp3_pane_t5

0x0005,

0xf628,	// (0x00069f54) main_mp3_pane_t

0xe8fe,	// (0x0006922a) mup_progress_pane_cp01

0x999a,	// (0x000642c6) aid_zoom_text_secondary2

0xe6f5,	// (0x00069021) list_cale_ev2_pane

0xe6fd,	// (0x00069029) scroll_pane_cp023_ParamLimits

0x4a3f,	// (0x0005f36b) field_cale_ev2_pane_ParamLimits

0x4a3f,	// (0x0005f36b) field_cale_ev2_pane

0x4a57,	// (0x0005f383) field_cale_ev2_pane_g1_ParamLimits

0x4a57,	// (0x0005f383) field_cale_ev2_pane_g1

0x4a63,	// (0x0005f38f) field_cale_ev2_pane_g2_ParamLimits

0x4a63,	// (0x0005f38f) field_cale_ev2_pane_g2

0x4a7b,	// (0x0005f3a7) field_cale_ev2_pane_g3_ParamLimits

0x4a7b,	// (0x0005f3a7) field_cale_ev2_pane_g3

0x0003,

0xf649,	// (0x00069f75) field_cale_ev2_pane_g_ParamLimits

0xf649,	// (0x00069f75) field_cale_ev2_pane_g

0x4a9f,	// (0x0005f3cb) field_cale_ev2_pane_t1_ParamLimits

0x4a9f,	// (0x0005f3cb) field_cale_ev2_pane_t1

0x4ab6,	// (0x0005f3e2) field_cale_ev2_pane_t2_ParamLimits

0x4ab6,	// (0x0005f3e2) field_cale_ev2_pane_t2

0x0001,

0xf652,	// (0x00069f7e) field_cale_ev2_pane_t_ParamLimits

0xf652,	// (0x00069f7e) field_cale_ev2_pane_t

0x3533,	// (0x0005de5f) main_postcard_pane_g5_ParamLimits

0x3533,	// (0x0005de5f) main_postcard_pane_g5

0x3547,	// (0x0005de73) main_postcard_pane_g6_ParamLimits

0x3547,	// (0x0005de73) main_postcard_pane_g6

0x18bc,	// (0x0005c1e8) camera2_autofocus_pane_cp_ParamLimits

0x18bc,	// (0x0005c1e8) camera2_autofocus_pane_cp

0x99cb,	// (0x000642f7) main_mup3_pane

0x4b09,	// (0x0005f435) main_mup3_pane_g1_ParamLimits

0x4b09,	// (0x0005f435) main_mup3_pane_g1

0x4b2b,	// (0x0005f457) main_mup3_pane_g2_ParamLimits

0x4b2b,	// (0x0005f457) main_mup3_pane_g2

0x4b9e,	// (0x0005f4ca) main_mup3_pane_g3_ParamLimits

0x4b9e,	// (0x0005f4ca) main_mup3_pane_g3

0x4bdc,	// (0x0005f508) main_mup3_pane_g4_ParamLimits

0x4bdc,	// (0x0005f508) main_mup3_pane_g4

0x4c1a,	// (0x0005f546) main_mup3_pane_g5_ParamLimits

0x4c1a,	// (0x0005f546) main_mup3_pane_g5

0x4c58,	// (0x0005f584) main_mup3_pane_g6_ParamLimits

0x4c58,	// (0x0005f584) main_mup3_pane_g6

0xe906,	// (0x00069232) main_mup3_pane_g7_ParamLimits

0xe906,	// (0x00069232) main_mup3_pane_g7

0x0007,

0xf662,	// (0x00069f8e) main_mup3_pane_g_ParamLimits

0xf662,	// (0x00069f8e) main_mup3_pane_g

0x4cce,	// (0x0005f5fa) main_mup3_pane_t1_ParamLimits

0x4cce,	// (0x0005f5fa) main_mup3_pane_t1

0x4d34,	// (0x0005f660) main_mup3_pane_t2_ParamLimits

0x4d34,	// (0x0005f660) main_mup3_pane_t2

0x4dfa,	// (0x0005f726) main_mup3_pane_t4_ParamLimits

0x4dfa,	// (0x0005f726) main_mup3_pane_t4

0x4e48,	// (0x0005f774) main_mup3_pane_t5_ParamLimits

0x4e48,	// (0x0005f774) main_mup3_pane_t5

0x4ef6,	// (0x0005f822) main_mup3_pane_t6_ParamLimits

0x4ef6,	// (0x0005f822) main_mup3_pane_t6

0x0005,

0xf673,	// (0x00069f9f) main_mup3_pane_t_ParamLimits

0xf673,	// (0x00069f9f) main_mup3_pane_t

0x4faa,	// (0x0005f8d6) mup3_progress_pane_ParamLimits

0x4faa,	// (0x0005f8d6) mup3_progress_pane

0x5026,	// (0x0005f952) popup_mup3_control_window_ParamLimits

0x5026,	// (0x0005f952) popup_mup3_control_window

0xe914,	// (0x00069240) popup_mup3_text_window

0x5054,	// (0x0005f980) mup3_progress_pane_t1

0x5072,	// (0x0005f99e) mup3_progress_pane_t2

0xe91c,	// (0x00069248) mup3_progress_pane_t3

0x0002,

0xf680,	// (0x00069fac) mup3_progress_pane_t

0xe939,	// (0x00069265) mup_progress_pane_cp03

0x0bcb,	// (0x0005b4f7) bg_tb_trans_pane_cp04

0x5090,	// (0x0005f9bc) mup3_volume_pane

0x5098,	// (0x0005f9c4) popup_mup3_control_window_g1

0x50a1,	// (0x0005f9cd) mup3_volume_pane_g1

0x50aa,	// (0x0005f9d6) mup3_volume_pane_g2

0x50b3,	// (0x0005f9df) mup3_volume_pane_g3

0x0002,

0xf687,	// (0x00069fb3) mup3_volume_pane_g

0x0bcb,	// (0x0005b4f7) bg_tb_trans_pane_cp03

0xe949,	// (0x00069275) popup_mup3_text_window_g1

0xe951,	// (0x0006927d) popup_mup3_text_window_t1

0xa19e,	// (0x00064aca) list_calc_item_pane_g1_ParamLimits

0xe3c5,	// (0x00068cf1) mup_volume_pane_cp_g1

0x4a09,	// (0x0005f335) main_touch_calib_pane_t3

0x4a1b,	// (0x0005f347) main_touch_calib_pane_t4

0x4a2d,	// (0x0005f359) main_touch_calib_pane_t5

0x997a,	// (0x000642a6) aid_cell_size_toolbar2

0x9982,	// (0x000642ae) aid_popup3_width_pane

0x998a,	// (0x000642b6) aid_zoom_text_msg_primary

0xa3bb,	// (0x00064ce7) vorec_t7

0xa162,	// (0x00064a8e) bg_calc_paper_pane_g1_ParamLimits

0xa16e,	// (0x00064a9a) bg_calc_paper_pane_g2_ParamLimits

0xa17a,	// (0x00064aa6) bg_calc_paper_pane_g3_ParamLimits

0xa186,	// (0x00064ab2) bg_calc_paper_pane_g4_ParamLimits

0xa192,	// (0x00064abe) bg_calc_paper_pane_g5_ParamLimits

0x1119,	// (0x0005ba45) bg_calc_paper_pane_g6_ParamLimits

0x1128,	// (0x0005ba54) bg_calc_paper_pane_g7_ParamLimits

0x1137,	// (0x0005ba63) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x00069a69) bg_calc_paper_pane_g_ParamLimits

0x1146,	// (0x0005ba72) calc_bg_paper_pane_g9_ParamLimits

0x19f0,	// (0x0005c31c) image_qvga_pane_ParamLimits

0x19f0,	// (0x0005c31c) image_qvga_pane

0xa02f,	// (0x0006495b) bg_popup_sub_pane_cp04_ParamLimits

0xb0a2,	// (0x000659ce) popup_mup_playback_window_g1_ParamLimits

0xb0ae,	// (0x000659da) popup_mup_playback_window_t1_ParamLimits

0xb0c3,	// (0x000659ef) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x00069df3) popup_mup_playback_window_t_ParamLimits

0x4558,	// (0x0005ee84) main_mup2_pane_g3_ParamLimits

0x4558,	// (0x0005ee84) main_mup2_pane_g3

0x1db4,	// (0x0005c6e0) popup_toolbar_window_cp04

0xb4a4,	// (0x00065dd0) popup_call2_audio_second_window_g3_ParamLimits

0xb4a4,	// (0x00065dd0) popup_call2_audio_second_window_g3

0xb8ae,	// (0x000661da) popup_call2_audio_first_window_g4_ParamLimits

0xb8ae,	// (0x000661da) popup_call2_audio_first_window_g4

0xdeb3,	// (0x000687df) popup_call2_audio_in_window_g4_ParamLimits

0xdeb3,	// (0x000687df) popup_call2_audio_in_window_g4

0x365a,	// (0x0005df86) aid_area_sk_bg_cut_ParamLimits

0x365a,	// (0x0005df86) aid_area_sk_bg_cut

0xb0d8,	// (0x00065a04) aid_area_sk_bg_cut_2_ParamLimits

0xb0d8,	// (0x00065a04) aid_area_sk_bg_cut_2

0x482d,	// (0x0005f159) aid_placing_details_win

0x4835,	// (0x0005f161) aid_placing_details_win_2

0xe7b3,	// (0x000690df) camera2_autofocus_pane_g1_ParamLimits

0x0d62,	// (0x0005b68e) popup_fixed_preview_cale_window_ParamLimits

0x0d62,	// (0x0005b68e) popup_fixed_preview_cale_window

0xae5b,	// (0x00065787) navi_slider_pane_g3

0xae64,	// (0x00065790) navi_slider_pane_g4

0xae6d,	// (0x00065799) navi_slider_pane_g5

0xae5b,	// (0x00065787) navi_slider_pane_g6

0xae76,	// (0x000657a2) navi_slider_pane_g7

0xaf97,	// (0x000658c3) mup_scale_pane_g3

0xafa0,	// (0x000658cc) mup_scale_pane_g4

0xafa9,	// (0x000658d5) mup_scale_pane_g5

0x3355,	// (0x0005dc81) mup_scale_pane_g6

0x335e,	// (0x0005dc8a) mup_scale_pane_g7

0xae5b,	// (0x00065787) cams2_slider_pane_g3

0xe44f,	// (0x00068d7b) cams2_slider_pane_g4

0xbd0e,	// (0x0006663a) cams2_slider_pane_g5

0xae5b,	// (0x00065787) cams2_slider_pane_g6

0xbd16,	// (0x00066642) cams2_slider_pane_g7

0xe672,	// (0x00068f9e) camera2_autofocus_pane_cp_g1

0xe254,	// (0x00068b80) bg_popup_preview_window_pane_cp02_ParamLimits

0xe254,	// (0x00068b80) bg_popup_preview_window_pane_cp02

0xe95f,	// (0x0006928b) list_fp_cale_pane_ParamLimits

0xe95f,	// (0x0006928b) list_fp_cale_pane

0xe96b,	// (0x00069297) popup_fixed_preview_cale_window_t1_ParamLimits

0xe96b,	// (0x00069297) popup_fixed_preview_cale_window_t1

0x50bc,	// (0x0005f9e8) popup_fixed_preview_cale_window_t2_ParamLimits

0x50bc,	// (0x0005f9e8) popup_fixed_preview_cale_window_t2

0x50d1,	// (0x0005f9fd) popup_fixed_preview_cale_window_t3_ParamLimits

0x50d1,	// (0x0005f9fd) popup_fixed_preview_cale_window_t3

0x0002,

0xf68e,	// (0x00069fba) popup_fixed_preview_cale_window_t_ParamLimits

0xf68e,	// (0x00069fba) popup_fixed_preview_cale_window_t

0x50e6,	// (0x0005fa12) list_single_fp_cale_pane_ParamLimits

0x50e6,	// (0x0005fa12) list_single_fp_cale_pane

0xe989,	// (0x000692b5) list_single_fp_cale_pane_g1_ParamLimits

0xe989,	// (0x000692b5) list_single_fp_cale_pane_g1

0xe995,	// (0x000692c1) list_single_fp_cale_pane_g2_ParamLimits

0xe995,	// (0x000692c1) list_single_fp_cale_pane_g2

0x0002,

0x02fa,	// (0x0005ac26) list_single_fp_cale_pane_g_ParamLimits

0x02fa,	// (0x0005ac26) list_single_fp_cale_pane_g

0xe9ae,	// (0x000692da) list_single_fp_cale_pane_t1_ParamLimits

0xe9ae,	// (0x000692da) list_single_fp_cale_pane_t1

0xe9c0,	// (0x000692ec) list_single_fp_cale_pane_t2_ParamLimits

0xe9c0,	// (0x000692ec) list_single_fp_cale_pane_t2

0x0001,

0x0301,	// (0x0005ac2d) list_single_fp_cale_pane_t_ParamLimits

0x0301,	// (0x0005ac2d) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x99d9,	// (0x00064305) main_dialer_pane

0x50fa,	// (0x0005fa26) aid_cell_size_keypad

0x5104,	// (0x0005fa30) dialer_ne_pane

0x510c,	// (0x0005fa38) grid_dialer_command_1_pane

0x5114,	// (0x0005fa40) grid_dialer_command_2_pane

0x511c,	// (0x0005fa48) grid_dialer_keypad_pane

0x512c,	// (0x0005fa58) bg_popup_call_pane_cp06_ParamLimits

0x512c,	// (0x0005fa58) bg_popup_call_pane_cp06

0x5138,	// (0x0005fa64) dialer_ne_clear_pane_ParamLimits

0x5138,	// (0x0005fa64) dialer_ne_clear_pane

0xe9f3,	// (0x0006931f) dialer_ne_pane_g1

0xe9fb,	// (0x00069327) dialer_ne_pane_t1_ParamLimits

0xe9fb,	// (0x00069327) dialer_ne_pane_t1

0x5144,	// (0x0005fa70) dialer_ne_pane_t2_ParamLimits

0x5144,	// (0x0005fa70) dialer_ne_pane_t2

0x516e,	// (0x0005fa9a) dialer_ne_pane_t3_ParamLimits

0x516e,	// (0x0005fa9a) dialer_ne_pane_t3

0x0002,

0xf695,	// (0x00069fc1) dialer_ne_pane_t_ParamLimits

0xf695,	// (0x00069fc1) dialer_ne_pane_t

0x519e,	// (0x0005faca) dialer_ne_pane_t3_copy1_ParamLimits

0x519e,	// (0x0005faca) dialer_ne_pane_t3_copy1

0x51cd,	// (0x0005faf9) cell_dialer_keypad_pane_ParamLimits

0x51cd,	// (0x0005faf9) cell_dialer_keypad_pane

0x51e2,	// (0x0005fb0e) cell_dialer_command_1_pane_ParamLimits

0x51e2,	// (0x0005fb0e) cell_dialer_command_1_pane

0x51f8,	// (0x0005fb24) cell_dialer_command_2_pane_ParamLimits

0x51f8,	// (0x0005fb24) cell_dialer_command_2_pane

0xea0d,	// (0x00069339) bg_button_pane_cp02_ParamLimits

0xea0d,	// (0x00069339) bg_button_pane_cp02

0x5207,	// (0x0005fb33) cell_dialer_keypad_pane_g1_ParamLimits

0x5207,	// (0x0005fb33) cell_dialer_keypad_pane_g1

0xea0d,	// (0x00069339) bg_button_pane_cp03_ParamLimits

0xea0d,	// (0x00069339) bg_button_pane_cp03

0x521c,	// (0x0005fb48) cell_dialer_command_1_pane_g1_ParamLimits

0x521c,	// (0x0005fb48) cell_dialer_command_1_pane_g1

0xea19,	// (0x00069345) bg_button_pane_cp04

0x5230,	// (0x0005fb5c) cell_dialer_command_2_pane_g1

0xa389,	// (0x00064cb5) bg_button_pane_cp06

0xea21,	// (0x0006934d) dialer_ne_clear_pane_g1

0xad5d,	// (0x00065689) navi_pane_g2

0x2f5a,	// (0x0005d886) navi_pane_g3

0x0002,

0xf3ca,	// (0x00069cf6) navi_pane_g

0xadea,	// (0x00065716) navi_pane_mv_g2

0xae11,	// (0x0006573d) navi_pane_mv_g5

0x2f77,	// (0x0005d8a3) navi_pane_mv_t1

0xa11a,	// (0x00064a46) main_clock2_pane

0x5275,	// (0x0005fba1) main_clock2_list_pane_ParamLimits

0x5275,	// (0x0005fba1) main_clock2_list_pane

0x52a7,	// (0x0005fbd3) main_clock2_pane_t1_ParamLimits

0x52a7,	// (0x0005fbd3) main_clock2_pane_t1

0x52e1,	// (0x0005fc0d) main_clock2_pane_t2_ParamLimits

0x52e1,	// (0x0005fc0d) main_clock2_pane_t2

0x0004,

0xf69c,	// (0x00069fc8) main_clock2_pane_t_ParamLimits

0xf69c,	// (0x00069fc8) main_clock2_pane_t

0x5375,	// (0x0005fca1) popup_clock_analogue_window_cp03_ParamLimits

0x5375,	// (0x0005fca1) popup_clock_analogue_window_cp03

0x539a,	// (0x0005fcc6) popup_clock_digital_window_cp02_ParamLimits

0x539a,	// (0x0005fcc6) popup_clock_digital_window_cp02

0x540b,	// (0x0005fd37) main_clock2_list_single_pane_ParamLimits

0x540b,	// (0x0005fd37) main_clock2_list_single_pane

0xa389,	// (0x00064cb5) list_highlight_pane_cp05

0xea59,	// (0x00069385) main_clock2_list_single_pane_t1

0x1db4,	// (0x0005c6e0) popup_toolbar_window_cp04_ParamLimits

0x488e,	// (0x0005f1ba) camera2_autofocus_pane_g2_ParamLimits

0x488e,	// (0x0005f1ba) camera2_autofocus_pane_g2

0x489a,	// (0x0005f1c6) camera2_autofocus_pane_g3_ParamLimits

0x489a,	// (0x0005f1c6) camera2_autofocus_pane_g3

0x48a6,	// (0x0005f1d2) camera2_autofocus_pane_g4_ParamLimits

0x48a6,	// (0x0005f1d2) camera2_autofocus_pane_g4

0x48b2,	// (0x0005f1de) camera2_autofocus_pane_g5_ParamLimits

0x48b2,	// (0x0005f1de) camera2_autofocus_pane_g5

0x0004,

0xf603,	// (0x00069f2f) camera2_autofocus_pane_g_ParamLimits

0xf603,	// (0x00069f2f) camera2_autofocus_pane_g

0x4acb,	// (0x0005f3f7) camera2_autofocus_pane_cp_g2

0x4ad3,	// (0x0005f3ff) camera2_autofocus_pane_cp_g3

0x4adb,	// (0x0005f407) camera2_autofocus_pane_cp_g4

0x4ae3,	// (0x0005f40f) camera2_autofocus_pane_cp_g5

0x0004,

0xf657,	// (0x00069f83) camera2_autofocus_pane_cp_g

0x5124,	// (0x0005fa50) popup_dialer_spcha_window

0x0bcb,	// (0x0005b4f7) bg_popup_sub_pane_cp07

0xea67,	// (0x00069393) list_spcha_pane

0xea6f,	// (0x0006939b) list_single_spcha_pane_ParamLimits

0xea6f,	// (0x0006939b) list_single_spcha_pane

0x0bcb,	// (0x0005b4f7) list_highlight_pane_cp06

0xea80,	// (0x000693ac) list_single_spcha_pane_t1

0xdc5d,	// (0x00068589) popup_call2_audio_out_window_g4_ParamLimits

0xdc5d,	// (0x00068589) popup_call2_audio_out_window_g4

0x99d9,	// (0x00064305) main_imed2_pane

0xbc35,	// (0x00066561) popup_imed_adjust2_window

0x3d86,	// (0x0005e6b2) popup_imed_trans_window_ParamLimits

0x3d86,	// (0x0005e6b2) popup_imed_trans_window

0xe4b6,	// (0x00068de2) popup_blid_sat_info2_window_t1

0xe4c4,	// (0x00068df0) popup_blid_sat_info2_window_t2

0x000a,

0x01eb,	// (0x0005ab17) popup_blid_sat_info2_window_t

0x54b5,	// (0x0005fde1) aid_size_cell_colour_35

0x54d5,	// (0x0005fe01) aid_size_cell_colour_112

0x54f5,	// (0x0005fe21) aid_size_cell_effect

0xe260,	// (0x00068b8c) bg_tb_trans_pane_cp02

0xa891,	// (0x000651bd) heading_imed_pane

0x5515,	// (0x0005fe41) listscroll_imed_pane

0xea8e,	// (0x000693ba) heading_imed_pane_g1

0xea96,	// (0x000693c2) heading_imed_pane_t1

0xeaa4,	// (0x000693d0) grid_imed_colour_35_pane_ParamLimits

0xeaa4,	// (0x000693d0) grid_imed_colour_35_pane

0x5521,	// (0x0005fe4d) grid_imed_effect_pane

0xeab7,	// (0x000693e3) list_imed_aspect_pane

0x5534,	// (0x0005fe60) scroll_pane_cp027_ParamLimits

0x5534,	// (0x0005fe60) scroll_pane_cp027

0x5540,	// (0x0005fe6c) cell_imed_effect_pane_ParamLimits

0x5540,	// (0x0005fe6c) cell_imed_effect_pane

0xeabf,	// (0x000693eb) cell_imed_colour_pane_ParamLimits

0xeabf,	// (0x000693eb) cell_imed_colour_pane

0xeaf9,	// (0x00069425) cell_imed_colour_pane_g1_ParamLimits

0xeaf9,	// (0x00069425) cell_imed_colour_pane_g1

0xeb0a,	// (0x00069436) hgihlgiht_grid_pane_cp016_ParamLimits

0xeb0a,	// (0x00069436) hgihlgiht_grid_pane_cp016

0x5565,	// (0x0005fe91) cell_imed_effect_pane_g1

0x556d,	// (0x0005fe99) grid_highlight_pane_cp017

0xeb1b,	// (0x00069447) list_imed_single_pane_ParamLimits

0xeb1b,	// (0x00069447) list_imed_single_pane

0x0bcb,	// (0x0005b4f7) list_highlight_pane_cp07

0xeb2e,	// (0x0006945a) list_imed_aspect_pane_comp1_t1

0xe260,	// (0x00068b8c) bg_tb_trans_pane_cp05

0xeb4e,	// (0x0006947a) popup_imed_adjust2_window_g1

0xeb75,	// (0x000694a1) popup_imed_adjust2_window_t1

0xeb8d,	// (0x000694b9) slider_imed_adjust_pane

0xeba1,	// (0x000694cd) slider_imed_adjust_pane_g1

0xebb1,	// (0x000694dd) slider_imed_adjust_pane_g2

0xebc1,	// (0x000694ed) slider_imed_adjust_pane_g3

0xebd2,	// (0x000694fe) slider_imed_adjust_pane_g4

0x0003,

0x032f,	// (0x0005ac5b) slider_imed_adjust_pane_g

0x5576,	// (0x0005fea2) aid_size_cell_clipart2

0x5582,	// (0x0005feae) grid_imed_clipart_pane

0xebe3,	// (0x0006950f) scroll_pane_cp031

0x558c,	// (0x0005feb8) cell_imed_clipart_pane_ParamLimits

0x558c,	// (0x0005feb8) cell_imed_clipart_pane

0x55a4,	// (0x0005fed0) cell_imed_clipart_pane_g1

0x0bcb,	// (0x0005b4f7) grid_highlight_pane_cp014

0x5288,	// (0x0005fbb4) main_clock2_pane_g1_ParamLimits

0x5288,	// (0x0005fbb4) main_clock2_pane_g1

0x53b6,	// (0x0005fce2) aid_call2_pane_cp10

0x53c8,	// (0x0005fcf4) aid_call_pane_cp10

0xacec,	// (0x00065618) popup_clock_analogue_window_cp10_g1

0xacec,	// (0x00065618) popup_clock_analogue_window_cp10_g2

0x53da,	// (0x0005fd06) popup_clock_analogue_window_cp10_g3

0x53da,	// (0x0005fd06) popup_clock_analogue_window_cp10_g4

0xacec,	// (0x00065618) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6a7,	// (0x00069fd3) popup_clock_analogue_window_cp10_g

0x53ec,	// (0x0005fd18) popup_clock_analogue_window_cp10_t1

0x541d,	// (0x0005fd49) clock_digital_number_pane_cp10_ParamLimits

0x541d,	// (0x0005fd49) clock_digital_number_pane_cp10

0x5435,	// (0x0005fd61) clock_digital_number_pane_cp11_ParamLimits

0x5435,	// (0x0005fd61) clock_digital_number_pane_cp11

0x544d,	// (0x0005fd79) clock_digital_number_pane_cp12_ParamLimits

0x544d,	// (0x0005fd79) clock_digital_number_pane_cp12

0x5465,	// (0x0005fd91) clock_digital_number_pane_cp13_ParamLimits

0x5465,	// (0x0005fd91) clock_digital_number_pane_cp13

0x547d,	// (0x0005fda9) clock_digital_separator_pane_cp10_ParamLimits

0x547d,	// (0x0005fda9) clock_digital_separator_pane_cp10

0x5495,	// (0x0005fdc1) popup_clock_digital_window_cp02_t1_ParamLimits

0x5495,	// (0x0005fdc1) popup_clock_digital_window_cp02_t1

0xa027,	// (0x00064953) clock_digital_number_pane_cp10_g1

0xa027,	// (0x00064953) clock_digital_number_pane_cp10_g2

0x0001,

0xf6b2,	// (0x00069fde) clock_digital_number_pane_cp10_g

0xa027,	// (0x00064953) clock_digital_separator_pane_cp10_g1

0xa027,	// (0x00064953) clock_digital_separator_pane_g2_cp10

0xae19,	// (0x00065745) navi_pane_vded_g4

0xae22,	// (0x0006574e) navi_pane_vded_g5

0xae2b,	// (0x00065757) navi_pane_vded_t1

0x99d9,	// (0x00064305) main_vded_pane

0x55ad,	// (0x0005fed9) main_vded_pane_g1

0x55b7,	// (0x0005fee3) main_vded_pane_g2

0x55bf,	// (0x0005feeb) main_vded_pane_g3

0x0002,

0xf6b7,	// (0x00069fe3) main_vded_pane_g

0x55c7,	// (0x0005fef3) main_vded_pane_t1

0x55d5,	// (0x0005ff01) main_vded_pane_t2

0x0001,

0xf6be,	// (0x00069fea) main_vded_pane_t

0x55e3,	// (0x0005ff0f) vded_slider_pane

0x55eb,	// (0x0005ff17) vded_video_pane

0xebeb,	// (0x00069517) vded_video_pane_g1

0x55f3,	// (0x0005ff1f) vded_video_pane_g2

0xe672,	// (0x00068f9e) vded_video_pane_g3

0x0002,

0xf6c3,	// (0x00069fef) vded_video_pane_g

0xebf5,	// (0x00069521) vded_slider_pane_g1

0xe3c5,	// (0x00068cf1) vded_slider_pane_g2

0xebfe,	// (0x0006952a) vded_slider_pane_g3

0xec07,	// (0x00069533) vded_slider_pane_g4

0xec10,	// (0x0006953c) vded_slider_pane_g5

0x0004,

0x0350,	// (0x0005ac7c) vded_slider_pane_g

0x5010,	// (0x0005f93c) mup3_rocker_pane_ParamLimits

0x5010,	// (0x0005f93c) mup3_rocker_pane

0x55fc,	// (0x0005ff28) mup3_control_keys_pane_g1

0x5604,	// (0x0005ff30) mup3_control_keys_pane_g2

0x560c,	// (0x0005ff38) mup3_control_keys_pane_g3

0x5614,	// (0x0005ff40) mup3_control_keys_pane_g4

0x0003,

0xf6ca,	// (0x00069ff6) mup3_control_keys_pane_g

0x0d95,	// (0x0005b6c1) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0d95,	// (0x0005b6c1) popup_toolbar2_fixed_window_cp01

0x503e,	// (0x0005f96a) popup_toolbar2_fixed_window_cp02_ParamLimits

0x503e,	// (0x0005f96a) popup_toolbar2_fixed_window_cp02

0xb616,	// (0x00065f42) popup_call2_audio_second_window_t4_ParamLimits

0xb616,	// (0x00065f42) popup_call2_audio_second_window_t4

0xbb44,	// (0x00066470) popup_call2_audio_first_window_t6_ParamLimits

0xbb44,	// (0x00066470) popup_call2_audio_first_window_t6

0xdd60,	// (0x0006868c) popup_call2_audio_out_window_t6_ParamLimits

0xdd60,	// (0x0006868c) popup_call2_audio_out_window_t6

0x99d9,	// (0x00064305) main_vitu_pane

0x5624,	// (0x0005ff50) aid_size_cell_itu_ParamLimits

0x5624,	// (0x0005ff50) aid_size_cell_itu

0xbc0f,	// (0x0006653b) bg_popup_window_pane_cp08_ParamLimits

0xbc0f,	// (0x0006653b) bg_popup_window_pane_cp08

0x563a,	// (0x0005ff66) field_vitu_entry_pane_ParamLimits

0x563a,	// (0x0005ff66) field_vitu_entry_pane

0x564d,	// (0x0005ff79) grid_vitu_function_pane_ParamLimits

0x564d,	// (0x0005ff79) grid_vitu_function_pane

0x5662,	// (0x0005ff8e) grid_vitu_itu_pane_ParamLimits

0x5662,	// (0x0005ff8e) grid_vitu_itu_pane

0x5678,	// (0x0005ffa4) cell_vitu_itu_pane_ParamLimits

0x5678,	// (0x0005ffa4) cell_vitu_itu_pane

0x569a,	// (0x0005ffc6) cell_vitu_function_pane_ParamLimits

0x569a,	// (0x0005ffc6) cell_vitu_function_pane

0xbc0f,	// (0x0006653b) bg_popup_sub_pane_cp08_ParamLimits

0xbc0f,	// (0x0006653b) bg_popup_sub_pane_cp08

0x56b3,	// (0x0005ffdf) field_vitu_entry_pane_t1_ParamLimits

0x56b3,	// (0x0005ffdf) field_vitu_entry_pane_t1

0xec31,	// (0x0006955d) field_vitu_entry_pane_t2_ParamLimits

0xec31,	// (0x0006955d) field_vitu_entry_pane_t2

0x0001,

0xf6d3,	// (0x00069fff) field_vitu_entry_pane_t_ParamLimits

0xf6d3,	// (0x00069fff) field_vitu_entry_pane_t

0xec4e,	// (0x0006957a) bg_button_pane_cp05_ParamLimits

0xec4e,	// (0x0006957a) bg_button_pane_cp05

0x56cf,	// (0x0005fffb) cell_vitu_itu_pane_g1

0x56e7,	// (0x00060013) cell_vitu_itu_pane_t1_ParamLimits

0x56e7,	// (0x00060013) cell_vitu_itu_pane_t1

0x56f9,	// (0x00060025) cell_vitu_itu_pane_t2_ParamLimits

0x56f9,	// (0x00060025) cell_vitu_itu_pane_t2

0x0002,

0xf6d8,	// (0x0006a004) cell_vitu_itu_pane_t_ParamLimits

0xf6d8,	// (0x0006a004) cell_vitu_itu_pane_t

0xec5c,	// (0x00069588) bg_button_pane_cp07

0x572e,	// (0x0006005a) cell_vitu_function_pane_g1

0xa0b6,	// (0x000649e2) main_calc_pane_g1

0x0bf9,	// (0x0005b525) aid_visual_content_pane

0x99d9,	// (0x00064305) main_vradio_pane

0x5737,	// (0x00060063) main_vradio_pane_g1_ParamLimits

0x5737,	// (0x00060063) main_vradio_pane_g1

0xec66,	// (0x00069592) main_vradio_pane_g2_ParamLimits

0xec66,	// (0x00069592) main_vradio_pane_g2

0x0001,

0xf6df,	// (0x0006a00b) main_vradio_pane_g_ParamLimits

0xf6df,	// (0x0006a00b) main_vradio_pane_g

0x574d,	// (0x00060079) main_vradio_pane_t1_ParamLimits

0x574d,	// (0x00060079) main_vradio_pane_t1

0x5762,	// (0x0006008e) main_vradio_pane_t2_ParamLimits

0x5762,	// (0x0006008e) main_vradio_pane_t2

0xec73,	// (0x0006959f) main_vradio_pane_t3_ParamLimits

0xec73,	// (0x0006959f) main_vradio_pane_t3

0x0002,

0xf6e4,	// (0x0006a010) main_vradio_pane_t_ParamLimits

0xf6e4,	// (0x0006a010) main_vradio_pane_t

0x5777,	// (0x000600a3) vradio_rocker_control_pane_ParamLimits

0x5777,	// (0x000600a3) vradio_rocker_control_pane

0x5789,	// (0x000600b5) vradio_station_info_pane_ParamLimits

0x5789,	// (0x000600b5) vradio_station_info_pane

0xec85,	// (0x000695b1) vradio_frequency_info_pane_ParamLimits

0xec85,	// (0x000695b1) vradio_frequency_info_pane

0xe672,	// (0x00068f9e) vradio_station_info_pane_g1

0xec94,	// (0x000695c0) vradio_station_info_pane_t1_ParamLimits

0xec94,	// (0x000695c0) vradio_station_info_pane_t1

0xecb6,	// (0x000695e2) vradio_station_info_pane_t2_ParamLimits

0xecb6,	// (0x000695e2) vradio_station_info_pane_t2

0x0001,

0x0381,	// (0x0005acad) vradio_station_info_pane_t_ParamLimits

0x0381,	// (0x0005acad) vradio_station_info_pane_t

0xecc8,	// (0x000695f4) vradio_tuning_pane

0xecd0,	// (0x000695fc) vradio_rocker_control_pane_g1

0xecd8,	// (0x00069604) vradio_rocker_control_pane_g2

0xece0,	// (0x0006960c) vradio_rocker_control_pane_g3

0xece8,	// (0x00069614) vradio_rocker_control_pane_g4

0xecf0,	// (0x0006961c) vradio_rocker_control_pane_g5

0x0004,

0x0386,	// (0x0005acb2) vradio_rocker_control_pane_g

0x5799,	// (0x000600c5) vradio_frequency_info_pane_g1

0xecf8,	// (0x00069624) vradio_frequency_info_pane_t1_ParamLimits

0xecf8,	// (0x00069624) vradio_frequency_info_pane_t1

0x57a3,	// (0x000600cf) vradio_tuning_pane_g1

0x57ac,	// (0x000600d8) vradio_tuning_pane_t1

0x99a2,	// (0x000642ce) area_side_right_pane_ParamLimits

0x99a2,	// (0x000642ce) area_side_right_pane

0xe21b,	// (0x00068b47) status_small_pane_g1

0xe223,	// (0x00068b4f) status_small_pane_g2

0xe22c,	// (0x00068b58) status_small_pane_g3

0xe235,	// (0x00068b61) status_small_pane_g4

0x0003,

0x0141,	// (0x0005aa6d) status_small_pane_g

0xe23e,	// (0x00068b6a) status_small_pane_t1

0x99d9,	// (0x00064305) main_video3_pane

0xed0c,	// (0x00069638) cams_zoom_vslider_pane

0xed14,	// (0x00069640) image3_wide_pane_ParamLimits

0xed14,	// (0x00069640) image3_wide_pane

0xed2e,	// (0x0006965a) image3_wide_small_pane

0xed38,	// (0x00069664) main_video3_pane_g1_ParamLimits

0xed38,	// (0x00069664) main_video3_pane_g1

0xed54,	// (0x00069680) main_video3_pane_g2_ParamLimits

0xed54,	// (0x00069680) main_video3_pane_g2

0x0001,

0x0391,	// (0x0005acbd) main_video3_pane_g_ParamLimits

0x0391,	// (0x0005acbd) main_video3_pane_g

0xed70,	// (0x0006969c) main_video3_pane_t1_ParamLimits

0xed70,	// (0x0006969c) main_video3_pane_t1

0xed9b,	// (0x000696c7) main_video3_pane_t2_ParamLimits

0xed9b,	// (0x000696c7) main_video3_pane_t2

0xedc6,	// (0x000696f2) main_video3_pane_t3_ParamLimits

0xedc6,	// (0x000696f2) main_video3_pane_t3

0x0002,

0x0396,	// (0x0005acc2) main_video3_pane_t_ParamLimits

0x0396,	// (0x0005acc2) main_video3_pane_t

0xedf1,	// (0x0006971d) cams_zoom_vslider_pane_g1

0xedfa,	// (0x00069726) cams_zoom_vslider_pane_g2

0x0001,

0x039d,	// (0x0005acc9) cams_zoom_vslider_pane_g

0xee02,	// (0x0006972e) small_slider_vertical_pane

0xe672,	// (0x00068f9e) small_slider_vertical_pane_g1

0xe672,	// (0x00068f9e) small_slider_vertical_pane_g2

0xee0a,	// (0x00069736) small_slider_vertical_pane_g3

0x0002,

0x03a2,	// (0x0005acce) small_slider_vertical_pane_g

0x99d9,	// (0x00064305) main_hwr_training_pane

0xee13,	// (0x0006973f) hwr_training_instruct_pane_ParamLimits

0xee13,	// (0x0006973f) hwr_training_instruct_pane

0x57bb,	// (0x000600e7) hwr_training_navi_pane_ParamLimits

0x57bb,	// (0x000600e7) hwr_training_navi_pane

0x57d2,	// (0x000600fe) hwr_training_write_pane_ParamLimits

0x57d2,	// (0x000600fe) hwr_training_write_pane

0x0bcb,	// (0x0005b4f7) bg_frame_shadow_pane

0xee42,	// (0x0006976e) hwr_training_write_pane_g1

0xee4a,	// (0x00069776) hwr_training_write_pane_g2

0xee52,	// (0x0006977e) hwr_training_write_pane_g3

0xee5a,	// (0x00069786) hwr_training_write_pane_g4

0xee62,	// (0x0006978e) hwr_training_write_pane_g5

0xee6a,	// (0x00069796) hwr_training_write_pane_g6

0xee72,	// (0x0006979e) hwr_training_write_pane_g7

0x0006,

0x03a9,	// (0x0005acd5) hwr_training_write_pane_g

0xd69b,	// (0x00067fc7) hwr_training_navi_pane_g1_ParamLimits

0xd69b,	// (0x00067fc7) hwr_training_navi_pane_g1

0xd6ad,	// (0x00067fd9) hwr_training_navi_pane_g2_ParamLimits

0xd6ad,	// (0x00067fd9) hwr_training_navi_pane_g2

0xd6bf,	// (0x00067feb) hwr_training_navi_pane_g3_ParamLimits

0xd6bf,	// (0x00067feb) hwr_training_navi_pane_g3

0xd6cf,	// (0x00067ffb) hwr_training_navi_pane_g4_ParamLimits

0xd6cf,	// (0x00067ffb) hwr_training_navi_pane_g4

0x0004,

0xf6eb,	// (0x0006a017) hwr_training_navi_pane_g_ParamLimits

0xf6eb,	// (0x0006a017) hwr_training_navi_pane_g

0xd6dc,	// (0x00068008) hwr_training_navi_pane_t1

0x5812,	// (0x0006013e) list_single_hwr_training_instruct_pane_ParamLimits

0x5812,	// (0x0006013e) list_single_hwr_training_instruct_pane

0xee7a,	// (0x000697a6) list_single_hwr_training_instruct_pane_t1

0xe5b2,	// (0x00068ede) bg_frame_shadow_pane_g1

0xee89,	// (0x000697b5) bg_frame_shadow_pane_g2

0xee91,	// (0x000697bd) bg_frame_shadow_pane_g3

0xee99,	// (0x000697c5) bg_frame_shadow_pane_g4

0xeea1,	// (0x000697cd) bg_frame_shadow_pane_g5

0xeea9,	// (0x000697d5) bg_frame_shadow_pane_g6

0xeeb1,	// (0x000697dd) bg_frame_shadow_pane_g7

0xa23d,	// (0x00064b69) bg_frame_shadow_pane_g8

0x0007,

0xf6f6,	// (0x0006a022) bg_frame_shadow_pane_g

0x99d9,	// (0x00064305) main_video_tele_dialer_pane

0x582a,	// (0x00060156) aid_size_cell_video_keypad_ParamLimits

0x582a,	// (0x00060156) aid_size_cell_video_keypad

0x5844,	// (0x00060170) grid_video_dialer_keypad_pane_ParamLimits

0x5844,	// (0x00060170) grid_video_dialer_keypad_pane

0x5886,	// (0x000601b2) video_down_pane_cp_ParamLimits

0x5886,	// (0x000601b2) video_down_pane_cp

0x58b6,	// (0x000601e2) cell_video_dialer_keypad_pane_ParamLimits

0x58b6,	// (0x000601e2) cell_video_dialer_keypad_pane

0xeeb9,	// (0x000697e5) bg_button_pane_cp08_ParamLimits

0xeeb9,	// (0x000697e5) bg_button_pane_cp08

0x58d8,	// (0x00060204) cell_video_dialer_keypad_pane_g1_ParamLimits

0x58d8,	// (0x00060204) cell_video_dialer_keypad_pane_g1

0x4ffa,	// (0x0005f926) mup3_rocker2_pane_ParamLimits

0x4ffa,	// (0x0005f926) mup3_rocker2_pane

0xe672,	// (0x00068f9e) mup3_rocker2_pane_g1

0x3c7f,	// (0x0005e5ab) main_dialer2_pane

0x99d9,	// (0x00064305) main_mp4_pane

0xd6fa,	// (0x00068026) main_mp4_pane_g1_ParamLimits

0xd6fa,	// (0x00068026) main_mp4_pane_g1

0xd6fa,	// (0x00068026) main_mp4_pane_g2_ParamLimits

0xd6fa,	// (0x00068026) main_mp4_pane_g2

0x5913,	// (0x0006023f) main_mp4_pane_g3_ParamLimits

0x5913,	// (0x0006023f) main_mp4_pane_g3

0xd708,	// (0x00068034) main_mp4_pane_g4_ParamLimits

0xd708,	// (0x00068034) main_mp4_pane_g4

0xd736,	// (0x00068062) main_mp4_pane_g5_ParamLimits

0xd736,	// (0x00068062) main_mp4_pane_g5

0x0007,

0xf716,	// (0x0006a042) main_mp4_pane_g_ParamLimits

0xf716,	// (0x0006a042) main_mp4_pane_g

0xd7aa,	// (0x000680d6) main_mp4_pane_t1_ParamLimits

0xd7aa,	// (0x000680d6) main_mp4_pane_t1

0xd802,	// (0x0006812e) main_mp4_pane_t2_ParamLimits

0xd802,	// (0x0006812e) main_mp4_pane_t2

0xeec5,	// (0x000697f1) main_mp4_pane_t3_ParamLimits

0xeec5,	// (0x000697f1) main_mp4_pane_t3

0xd854,	// (0x00068180) main_mp4_pane_t4_ParamLimits

0xd854,	// (0x00068180) main_mp4_pane_t4

0x0003,

0xf727,	// (0x0006a053) main_mp4_pane_t_ParamLimits

0xf727,	// (0x0006a053) main_mp4_pane_t

0xd894,	// (0x000681c0) mp4_progress_pane_ParamLimits

0xd894,	// (0x000681c0) mp4_progress_pane

0xd8d8,	// (0x00068204) mp4_rocker_pane_ParamLimits

0xd8d8,	// (0x00068204) mp4_rocker_pane

0xeef3,	// (0x0006981f) mp4_progress_pane_t1

0xef0a,	// (0x00069836) mp4_progress_pane_t2

0x0001,

0x03fd,	// (0x0005ad29) mp4_progress_pane_t

0xef21,	// (0x0006984d) mup_progress_pane_cp04

0xef2d,	// (0x00069859) mp4_rocker_pane_g1

0x5943,	// (0x0006026f) aid_cell_size_keypad2_ParamLimits

0x5943,	// (0x0006026f) aid_cell_size_keypad2

0x595d,	// (0x00060289) dialer2_ne_pane_ParamLimits

0x595d,	// (0x00060289) dialer2_ne_pane

0x5972,	// (0x0006029e) grid_dialer2_keypad_pane_ParamLimits

0x5972,	// (0x0006029e) grid_dialer2_keypad_pane

0xe45f,	// (0x00068d8b) bg_popup_call_pane_cp07_ParamLimits

0xe45f,	// (0x00068d8b) bg_popup_call_pane_cp07

0x5988,	// (0x000602b4) dialer2_ne_pane_t1_ParamLimits

0x5988,	// (0x000602b4) dialer2_ne_pane_t1

0x59c5,	// (0x000602f1) cell_dialer2_keypad_pane_ParamLimits

0x59c5,	// (0x000602f1) cell_dialer2_keypad_pane

0xef49,	// (0x00069875) bg_button_pane_pane_cp04_ParamLimits

0xef49,	// (0x00069875) bg_button_pane_pane_cp04

0x59e7,	// (0x00060313) cell_dialer2_keypad_pane_g1_ParamLimits

0x59e7,	// (0x00060313) cell_dialer2_keypad_pane_g1

0x1ca2,	// (0x0005c5ce) aid_placing_vt_set_content_ParamLimits

0x1ca2,	// (0x0005c5ce) aid_placing_vt_set_content

0x1cc4,	// (0x0005c5f0) aid_placing_vt_set_title_ParamLimits

0x1cc4,	// (0x0005c5f0) aid_placing_vt_set_title

0x99d9,	// (0x00064305) main_image3_pane

0x5a76,	// (0x000603a2) area_side_right_pane_cp01_ParamLimits

0x5a76,	// (0x000603a2) area_side_right_pane_cp01

0xd6fa,	// (0x00068026) main_image3_pane_g1_ParamLimits

0xd6fa,	// (0x00068026) main_image3_pane_g1

0x5a8d,	// (0x000603b9) main_image3_pane_g2_ParamLimits

0x5a8d,	// (0x000603b9) main_image3_pane_g2

0x5ab3,	// (0x000603df) main_image3_pane_g3_ParamLimits

0x5ab3,	// (0x000603df) main_image3_pane_g3

0x5ad9,	// (0x00060405) main_image3_pane_g4_ParamLimits

0x5ad9,	// (0x00060405) main_image3_pane_g4

0x0003,

0xf73a,	// (0x0006a066) main_image3_pane_g_ParamLimits

0xf73a,	// (0x0006a066) main_image3_pane_g

0x5aff,	// (0x0006042b) main_image3_pane_t1_ParamLimits

0x5aff,	// (0x0006042b) main_image3_pane_t1

0x5b57,	// (0x00060483) main_image3_pane_t2_ParamLimits

0x5b57,	// (0x00060483) main_image3_pane_t2

0x5ba9,	// (0x000604d5) main_image3_pane_t3_ParamLimits

0x5ba9,	// (0x000604d5) main_image3_pane_t3

0x0003,

0xf743,	// (0x0006a06f) main_image3_pane_t_ParamLimits

0xf743,	// (0x0006a06f) main_image3_pane_t

0xbc0f,	// (0x0006653b) grid_sctrl_middle_pane_cp01_ParamLimits

0xbc0f,	// (0x0006653b) grid_sctrl_middle_pane_cp01

0x5c29,	// (0x00060555) cell_sctrl_middle_pane_cp01_ParamLimits

0x5c29,	// (0x00060555) cell_sctrl_middle_pane_cp01

0x5c46,	// (0x00060572) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5c46,	// (0x00060572) cell_sctrl_middle_pane_cp01_g1

0x99d9,	// (0x00064305) main_call4_pane

0x5c5c,	// (0x00060588) aid_size_button_call4_ParamLimits

0x5c5c,	// (0x00060588) aid_size_button_call4

0x5c89,	// (0x000605b5) call4_windows_pane_ParamLimits

0x5c89,	// (0x000605b5) call4_windows_pane

0x5c9f,	// (0x000605cb) grid_call4_button_pane_ParamLimits

0x5c9f,	// (0x000605cb) grid_call4_button_pane

0xef6d,	// (0x00069899) call4_windows_conf_pane

0x5cc6,	// (0x000605f2) popup_call4_audio_first_window_ParamLimits

0x5cc6,	// (0x000605f2) popup_call4_audio_first_window

0x5ce6,	// (0x00060612) popup_call4_audio_second_window_ParamLimits

0x5ce6,	// (0x00060612) popup_call4_audio_second_window

0xefa0,	// (0x000698cc) popup_call4_audio_wait_window_ParamLimits

0xefa0,	// (0x000698cc) popup_call4_audio_wait_window

0x5cf8,	// (0x00060624) cell_call4_button_pane_ParamLimits

0x5cf8,	// (0x00060624) cell_call4_button_pane

0x5d1d,	// (0x00060649) bg_button_pane_cp09_ParamLimits

0x5d1d,	// (0x00060649) bg_button_pane_cp09

0x5d29,	// (0x00060655) cell_call4_button_pane_g1_ParamLimits

0x5d29,	// (0x00060655) cell_call4_button_pane_g1

0x5d4f,	// (0x0006067b) cell_call4_button_pane_t1_ParamLimits

0x5d4f,	// (0x0006067b) cell_call4_button_pane_t1

0xefb4,	// (0x000698e0) popup_call4_audio_conf_window_ParamLimits

0xefb4,	// (0x000698e0) popup_call4_audio_conf_window

0x5054,	// (0x0005f980) mup3_progress_pane_t1_ParamLimits

0x5072,	// (0x0005f99e) mup3_progress_pane_t2_ParamLimits

0xe91c,	// (0x00069248) mup3_progress_pane_t3_ParamLimits

0xf680,	// (0x00069fac) mup3_progress_pane_t_ParamLimits

0xe939,	// (0x00069265) mup_progress_pane_cp03_ParamLimits

0x561c,	// (0x0005ff48) mup3_control_keys_pane_g4_copy1

0xd8c2,	// (0x000681ee) mp4_rocker2_pane_ParamLimits

0xd8c2,	// (0x000681ee) mp4_rocker2_pane

0xefc8,	// (0x000698f4) mp4_rocker2_pane_g1

0xefd0,	// (0x000698fc) mp4_rocker2_pane_g2

0xd95a,	// (0x00068286) mp4_rocker2_pane_g3

0xd962,	// (0x0006828e) mp4_rocker2_pane_g4

0xd96a,	// (0x00068296) mp4_rocker2_pane_g5

0x0004,

0xf74c,	// (0x0006a078) mp4_rocker2_pane_g

0x99d9,	// (0x00064305) main_camera4_pane

0x99d9,	// (0x00064305) main_video4_pane

0x5858,	// (0x00060184) main_video_tele_dialer_pane_t1_ParamLimits

0x5858,	// (0x00060184) main_video_tele_dialer_pane_t1

0x586f,	// (0x0006019b) main_video_tele_dialer_pane_t2_ParamLimits

0x586f,	// (0x0006019b) main_video_tele_dialer_pane_t2

0x0001,

0xf707,	// (0x0006a033) main_video_tele_dialer_pane_t_ParamLimits

0xf707,	// (0x0006a033) main_video_tele_dialer_pane_t

0x5d8d,	// (0x000606b9) cam4_autofocus_pane_ParamLimits

0x5d8d,	// (0x000606b9) cam4_autofocus_pane

0x5da1,	// (0x000606cd) cam4_image_uncrop_pane_ParamLimits

0x5da1,	// (0x000606cd) cam4_image_uncrop_pane

0x5db8,	// (0x000606e4) cam4_indicators_pane_ParamLimits

0x5db8,	// (0x000606e4) cam4_indicators_pane

0x5ddc,	// (0x00060708) main_camera4_pane_g1_ParamLimits

0x5ddc,	// (0x00060708) main_camera4_pane_g1

0x5de8,	// (0x00060714) main_camera4_pane_g2_ParamLimits

0x5de8,	// (0x00060714) main_camera4_pane_g2

0x5de8,	// (0x00060714) main_camera4_pane_g3_ParamLimits

0x5de8,	// (0x00060714) main_camera4_pane_g3

0x5df4,	// (0x00060720) main_camera4_pane_g4_ParamLimits

0x5df4,	// (0x00060720) main_camera4_pane_g4

0x5e00,	// (0x0006072c) main_camera4_pane_g5_ParamLimits

0x5e00,	// (0x0006072c) main_camera4_pane_g5

0x0005,

0xf757,	// (0x0006a083) main_camera4_pane_g_ParamLimits

0xf757,	// (0x0006a083) main_camera4_pane_g

0x5e1d,	// (0x00060749) main_camera4_pane_t1_ParamLimits

0x5e1d,	// (0x00060749) main_camera4_pane_t1

0xd98c,	// (0x000682b8) bg_tb_trans_pane_cp06

0xd9a2,	// (0x000682ce) cam4_indicators_pane_g1

0xd9b2,	// (0x000682de) cam4_indicators_pane_g2

0x0002,

0xf772,	// (0x0006a09e) cam4_indicators_pane_g

0xd9d2,	// (0x000682fe) cam4_indicators_pane_t1

0x5e72,	// (0x0006079e) main_video4_pane_g1_ParamLimits

0x5e72,	// (0x0006079e) main_video4_pane_g1

0x5e84,	// (0x000607b0) main_video4_pane_g2_ParamLimits

0x5e84,	// (0x000607b0) main_video4_pane_g2

0x5e84,	// (0x000607b0) main_video4_pane_g3_ParamLimits

0x5e84,	// (0x000607b0) main_video4_pane_g3

0x5e93,	// (0x000607bf) main_video4_pane_g4_ParamLimits

0x5e93,	// (0x000607bf) main_video4_pane_g4

0x0004,

0xf779,	// (0x0006a0a5) main_video4_pane_g_ParamLimits

0xf779,	// (0x0006a0a5) main_video4_pane_g

0x5eb1,	// (0x000607dd) vid4_indicators_pane_ParamLimits

0x5eb1,	// (0x000607dd) vid4_indicators_pane

0x5ed9,	// (0x00060805) video4_image_uncrop_cif_pane_ParamLimits

0x5ed9,	// (0x00060805) video4_image_uncrop_cif_pane

0x5ef1,	// (0x0006081d) video4_image_uncrop_nhd_pane_ParamLimits

0x5ef1,	// (0x0006081d) video4_image_uncrop_nhd_pane

0x5f05,	// (0x00060831) video4_image_uncrop_vga_pane_ParamLimits

0x5f05,	// (0x00060831) video4_image_uncrop_vga_pane

0x99cb,	// (0x000642f7) bg_tb_trans_pane_cp07

0xd9a2,	// (0x000682ce) vid4_indicators_pane_g1

0xd9f4,	// (0x00068320) vid4_indicators_pane_g2

0xda04,	// (0x00068330) vid4_indicators_pane_g3

0x0004,

0xf784,	// (0x0006a0b0) vid4_indicators_pane_g

0xda31,	// (0x0006835d) vid4_indicators_pane_t1

0x5f1d,	// (0x00060849) cam4_autofocus_pane_g1

0x5f25,	// (0x00060851) cam4_autofocus_pane_g2

0x5f2d,	// (0x00060859) cam4_autofocus_pane_g3

0x0002,

0xf78f,	// (0x0006a0bb) cam4_autofocus_pane_g

0x5f35,	// (0x00060861) cam4_autofocus_pane_g3_copy1

0x589a,	// (0x000601c6) video_down_pane_cp_t1

0x58a8,	// (0x000601d4) video_down_pane_cp_t2

0x0001,

0xf70c,	// (0x0006a038) video_down_pane_cp_t

0x99cb,	// (0x000642f7) popup_vitu2_window_ParamLimits

0x99cb,	// (0x000642f7) popup_vitu2_window

0x5f3d,	// (0x00060869) aid_size_cell2_itu2_ParamLimits

0x5f3d,	// (0x00060869) aid_size_cell2_itu2

0x5f63,	// (0x0006088f) aid_size_cell_itu2_ParamLimits

0x5f63,	// (0x0006088f) aid_size_cell_itu2

0x5fb4,	// (0x000608e0) bg_popup_window_pane_cp09_ParamLimits

0x5fb4,	// (0x000608e0) bg_popup_window_pane_cp09

0x5fc2,	// (0x000608ee) field_vitu2_entry_pane_ParamLimits

0x5fc2,	// (0x000608ee) field_vitu2_entry_pane

0x5fd9,	// (0x00060905) grid_vitu2_function_pane_ParamLimits

0x5fd9,	// (0x00060905) grid_vitu2_function_pane

0x600e,	// (0x0006093a) grid_vitu2_itu_pane_ParamLimits

0x600e,	// (0x0006093a) grid_vitu2_itu_pane

0x6075,	// (0x000609a1) cell_vitu2_itu_pane_ParamLimits

0x6075,	// (0x000609a1) cell_vitu2_itu_pane

0x609d,	// (0x000609c9) cell_vitu2_function_pane_ParamLimits

0x609d,	// (0x000609c9) cell_vitu2_function_pane

0xefd8,	// (0x00069904) bg_popup_call_pane_cp08_ParamLimits

0xefd8,	// (0x00069904) bg_popup_call_pane_cp08

0xf001,	// (0x0006992d) field_vitu2_entry_pane_g1

0xf00d,	// (0x00069939) field_vitu2_entry_pane_g2

0x0002,

0xf796,	// (0x0006a0c2) field_vitu2_entry_pane_g

0x60dc,	// (0x00060a08) field_vitu2_entry_pane_t1_ParamLimits

0x60dc,	// (0x00060a08) field_vitu2_entry_pane_t1

0x610a,	// (0x00060a36) field_vitu2_entry_pane_t2_ParamLimits

0x610a,	// (0x00060a36) field_vitu2_entry_pane_t2

0x0001,

0xf79d,	// (0x0006a0c9) field_vitu2_entry_pane_t_ParamLimits

0xf79d,	// (0x0006a0c9) field_vitu2_entry_pane_t

0x6127,	// (0x00060a53) bg_button_pane_cp010_ParamLimits

0x6127,	// (0x00060a53) bg_button_pane_cp010

0xda4b,	// (0x00068377) cell_vitu2_itu_pane_g1

0x6143,	// (0x00060a6f) cell_vitu2_itu_pane_t1_ParamLimits

0x6143,	// (0x00060a6f) cell_vitu2_itu_pane_t1

0x0acb,	// (0x0005b3f7) cell_vitu2_itu_pane_t2_ParamLimits

0x0acb,	// (0x0005b3f7) cell_vitu2_itu_pane_t2

0x0002,

0xf7a7,	// (0x0006a0d3) cell_vitu2_itu_pane_t_ParamLimits

0xf7a7,	// (0x0006a0d3) cell_vitu2_itu_pane_t

0x99cb,	// (0x000642f7) bg_button_pane_cp011

0x61a1,	// (0x00060acd) cell_vitu2_function_pane_g1

0x99d9,	// (0x00064305) main_myfav_hc_pane

0x5bf5,	// (0x00060521) popup_image3_note_pane_ParamLimits

0x5bf5,	// (0x00060521) popup_image3_note_pane

0x5c0f,	// (0x0006053b) popup_image3_tool_bar_pane_ParamLimits

0x5c0f,	// (0x0006053b) popup_image3_tool_bar_pane

0x0b59,	// (0x0005b485) cell_vitu2_itu_pane_t3_ParamLimits

0x0b59,	// (0x0005b485) cell_vitu2_itu_pane_t3

0x0bcb,	// (0x0005b4f7) bg_popup_trans_pane

0xf02f,	// (0x0006995b) grid_image3_tool_bar_pane

0xf039,	// (0x00069965) bg_popup_trans_pane_g1

0xa631,	// (0x00064f5d) bg_popup_trans_pane_g2

0xf041,	// (0x0006996d) bg_popup_trans_pane_g3

0xf049,	// (0x00069975) bg_popup_trans_pane_g4

0xf051,	// (0x0006997d) bg_popup_trans_pane_g5

0xf059,	// (0x00069985) bg_popup_trans_pane_g6

0xf061,	// (0x0006998d) bg_popup_trans_pane_g7

0xf069,	// (0x00069995) bg_popup_trans_pane_g8

0xa611,	// (0x00064f3d) bg_popup_trans_pane_g9

0x0008,

0xf7ae,	// (0x0006a0da) bg_popup_trans_pane_g

0xf071,	// (0x0006999d) cell_image3_tool_bar_pane_ParamLimits

0xf071,	// (0x0006999d) cell_image3_tool_bar_pane

0xe672,	// (0x00068f9e) cell_image3_tool_bar_pane_g1

0x0bcb,	// (0x0005b4f7) bg_popup_trans_pane_cp1

0xf085,	// (0x000699b1) popup_image3_note_pane_t1

0xf093,	// (0x000699bf) popup_image3_note_pane_t2

0xf0a1,	// (0x000699cd) popup_image3_note_pane_t3

0x0002,

0xf7c1,	// (0x0006a0ed) popup_image3_note_pane_t

0x61b4,	// (0x00060ae0) popup_image3_note_pane_t3_copy1

0x61c2,	// (0x00060aee) bg_myfav_hc_instruction_pane_ParamLimits

0x61c2,	// (0x00060aee) bg_myfav_hc_instruction_pane

0x61d4,	// (0x00060b00) cell_myfav_contact_pane_ParamLimits

0x61d4,	// (0x00060b00) cell_myfav_contact_pane

0x61ee,	// (0x00060b1a) cell_myfav_contact_pane_cp1_ParamLimits

0x61ee,	// (0x00060b1a) cell_myfav_contact_pane_cp1

0x6204,	// (0x00060b30) cell_myfav_contact_pane_cp2_ParamLimits

0x6204,	// (0x00060b30) cell_myfav_contact_pane_cp2

0x621a,	// (0x00060b46) cell_myfav_contact_pane_cp3_ParamLimits

0x621a,	// (0x00060b46) cell_myfav_contact_pane_cp3

0x622f,	// (0x00060b5b) cell_myfav_contact_pane_cp4_ParamLimits

0x622f,	// (0x00060b5b) cell_myfav_contact_pane_cp4

0x6243,	// (0x00060b6f) cell_myfav_contact_pane_cp5_ParamLimits

0x6243,	// (0x00060b6f) cell_myfav_contact_pane_cp5

0x6257,	// (0x00060b83) cell_myfav_contact_pane_cp6_ParamLimits

0x6257,	// (0x00060b83) cell_myfav_contact_pane_cp6

0x626b,	// (0x00060b97) cell_myfav_contact_pane_cp7_ParamLimits

0x626b,	// (0x00060b97) cell_myfav_contact_pane_cp7

0x6283,	// (0x00060baf) listscroll_gen_pane_cp05

0x628c,	// (0x00060bb8) main_myfav_hc_pane_g1_ParamLimits

0x628c,	// (0x00060bb8) main_myfav_hc_pane_g1

0x62a2,	// (0x00060bce) main_myfav_hc_pane_g2_ParamLimits

0x62a2,	// (0x00060bce) main_myfav_hc_pane_g2

0x0002,

0xf7c8,	// (0x0006a0f4) main_myfav_hc_pane_g_ParamLimits

0xf7c8,	// (0x0006a0f4) main_myfav_hc_pane_g

0x62cc,	// (0x00060bf8) main_myfav_hc_pane_t1_ParamLimits

0x62cc,	// (0x00060bf8) main_myfav_hc_pane_t1

0x62e1,	// (0x00060c0d) main_myfav_hc_pane_t2_ParamLimits

0x62e1,	// (0x00060c0d) main_myfav_hc_pane_t2

0x62f3,	// (0x00060c1f) main_myfav_hc_pane_t3_ParamLimits

0x62f3,	// (0x00060c1f) main_myfav_hc_pane_t3

0x6305,	// (0x00060c31) main_myfav_hc_pane_t4_ParamLimits

0x6305,	// (0x00060c31) main_myfav_hc_pane_t4

0x0004,

0xf7cf,	// (0x0006a0fb) main_myfav_hc_pane_t_ParamLimits

0xf7cf,	// (0x0006a0fb) main_myfav_hc_pane_t

0xe672,	// (0x00068f9e) bg_myfav_hc_instruction_pane_g1

0x6329,	// (0x00060c55) cell_myfav_contact_pane_g1_ParamLimits

0x6329,	// (0x00060c55) cell_myfav_contact_pane_g1

0x6329,	// (0x00060c55) cell_myfav_contact_pane_g2_ParamLimits

0x6329,	// (0x00060c55) cell_myfav_contact_pane_g2

0x6335,	// (0x00060c61) cell_myfav_contact_pane_g3_ParamLimits

0x6335,	// (0x00060c61) cell_myfav_contact_pane_g3

0xe906,	// (0x00069232) cell_myfav_contact_pane_g4_ParamLimits

0xe906,	// (0x00069232) cell_myfav_contact_pane_g4

0x6342,	// (0x00060c6e) cell_myfav_contact_pane_g5_ParamLimits

0x6342,	// (0x00060c6e) cell_myfav_contact_pane_g5

0x0004,

0xf7da,	// (0x0006a106) cell_myfav_contact_pane_g_ParamLimits

0xf7da,	// (0x0006a106) cell_myfav_contact_pane_g

0x62b8,	// (0x00060be4) main_myfav_hc_pane_g3_ParamLimits

0x62b8,	// (0x00060be4) main_myfav_hc_pane_g3

0x0d1b,	// (0x0005b647) popup_adpt_find_window

0x634e,	// (0x00060c7a) afind_page_pane_ParamLimits

0x634e,	// (0x00060c7a) afind_page_pane

0x6363,	// (0x00060c8f) aid_size_cell_afind_ParamLimits

0x6363,	// (0x00060c8f) aid_size_cell_afind

0x6381,	// (0x00060cad) bg_popup_sub_pane_cp09_ParamLimits

0x6381,	// (0x00060cad) bg_popup_sub_pane_cp09

0x638e,	// (0x00060cba) find_pane_cp01_ParamLimits

0x638e,	// (0x00060cba) find_pane_cp01

0x639b,	// (0x00060cc7) grid_afind_control_pane_ParamLimits

0x639b,	// (0x00060cc7) grid_afind_control_pane

0x63af,	// (0x00060cdb) grid_afind_pane_ParamLimits

0x63af,	// (0x00060cdb) grid_afind_pane

0x63cd,	// (0x00060cf9) cell_afind_pane_ParamLimits

0x63cd,	// (0x00060cf9) cell_afind_pane

0xe672,	// (0x00068f9e) afind_page_pane_g1

0x641c,	// (0x00060d48) afind_page_pane_g2

0x6425,	// (0x00060d51) afind_page_pane_g3

0x0002,

0xf7e5,	// (0x0006a111) afind_page_pane_g

0x642e,	// (0x00060d5a) afind_page_pane_t1

0x644e,	// (0x00060d7a) cell_afind_grid_control_pane_ParamLimits

0x644e,	// (0x00060d7a) cell_afind_grid_control_pane

0xef49,	// (0x00069875) bg_button_pane_cp69_ParamLimits

0xef49,	// (0x00069875) bg_button_pane_cp69

0x645d,	// (0x00060d89) cell_afind_pane_g1_ParamLimits

0x645d,	// (0x00060d89) cell_afind_pane_g1

0x646a,	// (0x00060d96) cell_afind_pane_t1_ParamLimits

0x646a,	// (0x00060d96) cell_afind_pane_t1

0xa41d,	// (0x00064d49) bg_button_pane_cp72

0x647c,	// (0x00060da8) cell_afind_grid_control_pane_g1

0x3811,	// (0x0005e13d) aid_image_placing_area_ParamLimits

0x3811,	// (0x0005e13d) aid_image_placing_area

0xec19,	// (0x00069545) field_vitu_entry_pane_g1_ParamLimits

0xec19,	// (0x00069545) field_vitu_entry_pane_g1

0xec25,	// (0x00069551) field_vitu_entry_pane_g2_ParamLimits

0xec25,	// (0x00069551) field_vitu_entry_pane_g2

0x0001,

0x0364,	// (0x0005ac90) field_vitu_entry_pane_g_ParamLimits

0x0364,	// (0x0005ac90) field_vitu_entry_pane_g

0x56cf,	// (0x0005fffb) cell_vitu_itu_pane_g1_ParamLimits

0x5711,	// (0x0006003d) cell_vitu_itu_pane_t3_ParamLimits

0x5711,	// (0x0006003d) cell_vitu_itu_pane_t3

0xeef3,	// (0x0006981f) mp4_progress_pane_t1_ParamLimits

0xef0a,	// (0x00069836) mp4_progress_pane_t2_ParamLimits

0x03fd,	// (0x0005ad29) mp4_progress_pane_t_ParamLimits

0xef21,	// (0x0006984d) mup_progress_pane_cp04_ParamLimits

0x6317,	// (0x00060c43) main_myfav_hc_pane_t5_ParamLimits

0x6317,	// (0x00060c43) main_myfav_hc_pane_t5

0x9992,	// (0x000642be) aid_zoom_text_primary

0x0d1b,	// (0x0005b647) popup_adpt_find_window_ParamLimits

0x99cb,	// (0x000642f7) main_cam_set_pane

0x5dca,	// (0x000606f6) cam4_zoom_pane_ParamLimits

0x5dca,	// (0x000606f6) cam4_zoom_pane

0x6485,	// (0x00060db1) main_cam_set_pane_g1_ParamLimits

0x6485,	// (0x00060db1) main_cam_set_pane_g1

0x6493,	// (0x00060dbf) main_cam_set_pane_g2_ParamLimits

0x6493,	// (0x00060dbf) main_cam_set_pane_g2

0x0001,

0xf7ec,	// (0x0006a118) main_cam_set_pane_g_ParamLimits

0xf7ec,	// (0x0006a118) main_cam_set_pane_g

0x64b2,	// (0x00060dde) main_cam_set_pane_t1_ParamLimits

0x64b2,	// (0x00060dde) main_cam_set_pane_t1

0x64c4,	// (0x00060df0) main_cset_listscroll_pane_ParamLimits

0x64c4,	// (0x00060df0) main_cset_listscroll_pane

0x64e2,	// (0x00060e0e) main_cset_slider_pane_ParamLimits

0x64e2,	// (0x00060e0e) main_cset_slider_pane

0x650e,	// (0x00060e3a) main_cset_list_pane_ParamLimits

0x650e,	// (0x00060e3a) main_cset_list_pane

0x651e,	// (0x00060e4a) scroll_pane_cp028

0x6527,	// (0x00060e53) aid_area_touch_slider

0x6543,	// (0x00060e6f) cset_slider_pane

0x656d,	// (0x00060e99) main_cset_slider_pane_g1

0x6582,	// (0x00060eae) main_cset_slider_pane_g2

0x0011,

0xf7f1,	// (0x0006a11d) main_cset_slider_pane_g

0x666e,	// (0x00060f9a) main_cset_slider_pane_t1

0x669c,	// (0x00060fc8) main_cset_slider_pane_t2

0x66b6,	// (0x00060fe2) main_cset_slider_pane_t3

0x66d0,	// (0x00060ffc) main_cset_slider_pane_t4

0x66ea,	// (0x00061016) main_cset_slider_pane_t5

0x6704,	// (0x00061030) main_cset_slider_pane_t6

0x6719,	// (0x00061045) main_cset_slider_pane_t7

0x000e,

0xf816,	// (0x0006a142) main_cset_slider_pane_t

0x688f,	// (0x000611bb) cset_list_set_pane_ParamLimits

0x688f,	// (0x000611bb) cset_list_set_pane

0x68a0,	// (0x000611cc) aid_position_infowindow_above

0x68a8,	// (0x000611d4) aid_position_infowindow_below

0x68b0,	// (0x000611dc) cset_list_set_pane_g1_ParamLimits

0x68b0,	// (0x000611dc) cset_list_set_pane_g1

0x68bc,	// (0x000611e8) cset_list_set_pane_g3_ParamLimits

0x68bc,	// (0x000611e8) cset_list_set_pane_g3

0x0001,

0xf835,	// (0x0006a161) cset_list_set_pane_g_ParamLimits

0xf835,	// (0x0006a161) cset_list_set_pane_g

0x68cb,	// (0x000611f7) cset_list_set_pane_t1_ParamLimits

0x68cb,	// (0x000611f7) cset_list_set_pane_t1

0xbc0f,	// (0x0006653b) list_highlight_pane_cp021_ParamLimits

0xbc0f,	// (0x0006653b) list_highlight_pane_cp021

0xaf97,	// (0x000658c3) cset_slider_pane_g1

0xafa9,	// (0x000658d5) cset_slider_pane_g2

0xafa0,	// (0x000658cc) cset_slider_pane_g3

0x0002,

0xf83a,	// (0x0006a166) cset_slider_pane_g

0xda5d,	// (0x00068389) aid_area_touch_cam4_zoom

0xda65,	// (0x00068391) cam4_zoom_cont_pane

0xda6d,	// (0x00068399) cam4_zoom_pane_g1

0xda75,	// (0x000683a1) cam4_zoom_pane_g2

0x68e0,	// (0x0006120c) cam4_zoom_pane_g3

0x0002,

0xf841,	// (0x0006a16d) cam4_zoom_pane_g

0xda7d,	// (0x000683a9) cam4_zoom_cont_pane_g1

0xda86,	// (0x000683b2) cam4_zoom_cont_pane_g2

0xda8f,	// (0x000683bb) cam4_zoom_cont_pane_g3

0x0002,

0xf848,	// (0x0006a174) cam4_zoom_cont_pane_g

0x5c7a,	// (0x000605a6) call4_image_pane_ParamLimits

0x5c7a,	// (0x000605a6) call4_image_pane

0xef6d,	// (0x00069899) call4_windows_conf_pane_ParamLimits

0xef80,	// (0x000698ac) popup_call4_audio_in_window_ParamLimits

0xef80,	// (0x000698ac) popup_call4_audio_in_window

0x0bcb,	// (0x0005b4f7) bg_popup_call2_act_pane_cp02

0xefac,	// (0x000698d8) call4_list_conf_pane

0xe672,	// (0x00068f9e) call4_image_pane_g1

0xe672,	// (0x00068f9e) call4_image_pane_g2

0x0001,

0x0225,	// (0x0005ab51) call4_image_pane_g

0x68e8,	// (0x00061214) list_single_graphic_popup_conf4_pane_ParamLimits

0x68e8,	// (0x00061214) list_single_graphic_popup_conf4_pane

0x0bcb,	// (0x0005b4f7) list_highlight_pane_cp022

0x68fb,	// (0x00061227) list_single_graphic_popup_conf4_pane_g1

0xabba,	// (0x000654e6) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf84f,	// (0x0006a17b) list_single_graphic_popup_conf4_pane_g

0x6903,	// (0x0006122f) list_single_graphic_popup_conf4_pane_t1

0x1dce,	// (0x0005c6fa) popup_vtel_slider_window_ParamLimits

0x1dce,	// (0x0005c6fa) popup_vtel_slider_window

0xef37,	// (0x00069863) dialer2_ne_pane_t2_ParamLimits

0xef37,	// (0x00069863) dialer2_ne_pane_t2

0x0001,

0xf730,	// (0x0006a05c) dialer2_ne_pane_t_ParamLimits

0xf730,	// (0x0006a05c) dialer2_ne_pane_t

0xe45f,	// (0x00068d8b) bg_popup_sub_pane_cp010_ParamLimits

0xe45f,	// (0x00068d8b) bg_popup_sub_pane_cp010

0x6919,	// (0x00061245) popup_vtel_slider_window_g1_ParamLimits

0x6919,	// (0x00061245) popup_vtel_slider_window_g1

0x692c,	// (0x00061258) popup_vtel_slider_window_g2_ParamLimits

0x692c,	// (0x00061258) popup_vtel_slider_window_g2

0x0003,

0xf854,	// (0x0006a180) popup_vtel_slider_window_g_ParamLimits

0xf854,	// (0x0006a180) popup_vtel_slider_window_g

0x6980,	// (0x000612ac) vtel_slider_pane_ParamLimits

0x6980,	// (0x000612ac) vtel_slider_pane

0x69a2,	// (0x000612ce) vtel_slider_pane_g1_ParamLimits

0x69a2,	// (0x000612ce) vtel_slider_pane_g1

0x69b6,	// (0x000612e2) vtel_slider_pane_g2_ParamLimits

0x69b6,	// (0x000612e2) vtel_slider_pane_g2

0x69ce,	// (0x000612fa) vtel_slider_pane_g3_ParamLimits

0x69ce,	// (0x000612fa) vtel_slider_pane_g3

0x69a2,	// (0x000612ce) vtel_slider_pane_g4_ParamLimits

0x69a2,	// (0x000612ce) vtel_slider_pane_g4

0x69e4,	// (0x00061310) vtel_slider_pane_g5_ParamLimits

0x69e4,	// (0x00061310) vtel_slider_pane_g5

0x0004,

0xf85d,	// (0x0006a189) vtel_slider_pane_g_ParamLimits

0xf85d,	// (0x0006a189) vtel_slider_pane_g

0x99cb,	// (0x000642f7) main_gallery2_pane

0x5f8f,	// (0x000608bb) aid_size_row_itut2_dropdow_list_ParamLimits

0x5f8f,	// (0x000608bb) aid_size_row_itut2_dropdow_list

0x5ff2,	// (0x0006091e) grid_vitu2_function_top_pane_ParamLimits

0x5ff2,	// (0x0006091e) grid_vitu2_function_top_pane

0x6037,	// (0x00060963) popup_vitu2_dropdown_list_window_ParamLimits

0x6037,	// (0x00060963) popup_vitu2_dropdown_list_window

0x6053,	// (0x0006097f) popup_vitu2_match_list_window

0x6a08,	// (0x00061334) cell_vitu2_function_top_pane_ParamLimits

0x6a08,	// (0x00061334) cell_vitu2_function_top_pane

0x6a20,	// (0x0006134c) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6a20,	// (0x0006134c) cell_vitu2_function_top_pane_cp01

0x6a3c,	// (0x00061368) cell_vitu2_function_top_wide_pane_ParamLimits

0x6a3c,	// (0x00061368) cell_vitu2_function_top_wide_pane

0x99cb,	// (0x000642f7) bg_button_pane_cp012

0x6a58,	// (0x00061384) cell_vitu2_function_top_pane_g1

0xda98,	// (0x000683c4) bg_button_pane_cp013_ParamLimits

0xda98,	// (0x000683c4) bg_button_pane_cp013

0x6a6c,	// (0x00061398) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6a6c,	// (0x00061398) cell_vitu2_function_top_wide_pane_g1

0x99cb,	// (0x000642f7) bg_popup_sub_pane_cp20

0x6a84,	// (0x000613b0) list_vitu2_match_list_pane

0xf039,	// (0x00069965) bg_popup_sub_pane_cp20_g1

0xf041,	// (0x0006996d) bg_popup_sub_pane_cp20_g2

0xa631,	// (0x00064f5d) bg_popup_sub_pane_cp20_g3

0xf049,	// (0x00069975) bg_popup_sub_pane_cp20_g4

0xa611,	// (0x00064f3d) bg_popup_sub_pane_cp20_g5

0x6aa2,	// (0x000613ce) bg_popup_sub_pane_cp20_g6

0xf059,	// (0x00069985) bg_popup_sub_pane_cp20_g7

0xf061,	// (0x0006998d) bg_popup_sub_pane_cp20_g8

0xf069,	// (0x00069995) bg_popup_sub_pane_cp20_g9

0x0008,

0xf868,	// (0x0006a194) bg_popup_sub_pane_cp20_g

0xdab4,	// (0x000683e0) list_vitu2_match_list_item_pane_ParamLimits

0xdab4,	// (0x000683e0) list_vitu2_match_list_item_pane

0xdac6,	// (0x000683f2) list_vitu2_match_list_item_pane_t1

0x99d9,	// (0x00064305) bg_popup_sub_pane_cp21

0xdad4,	// (0x00068400) grid_vitu2_dropdown_list_pane

0x6af1,	// (0x0006141d) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6af1,	// (0x0006141d) cell_vitu2_dropdown_list_char_pane

0x6b12,	// (0x0006143e) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6b12,	// (0x0006143e) cell_vitu2_dropdown_list_ctrl_pane

0x6b3e,	// (0x0006146a) cell_vitu2_dropdown_list_char_pane_g1

0x6b47,	// (0x00061473) cell_vitu2_dropdown_list_char_pane_g2

0x6b50,	// (0x0006147c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf885,	// (0x0006a1b1) cell_vitu2_dropdown_list_char_pane_g

0x6b59,	// (0x00061485) cell_vitu2_dropdown_list_char_pane_t1

0x6b67,	// (0x00061493) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6b67,	// (0x00061493) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6b74,	// (0x000614a0) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6b74,	// (0x000614a0) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6b81,	// (0x000614ad) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6b81,	// (0x000614ad) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6b8e,	// (0x000614ba) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6b8e,	// (0x000614ba) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd98c,	// (0x000682b8) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd98c,	// (0x000682b8) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf88c,	// (0x0006a1b8) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf88c,	// (0x0006a1b8) cell_vitu2_dropdown_list_ctrl_pane_g

0x6baa,	// (0x000614d6) aid_size_cell_gallery2_ParamLimits

0x6baa,	// (0x000614d6) aid_size_cell_gallery2

0x6bc8,	// (0x000614f4) grid_gallery2_pane_ParamLimits

0x6bc8,	// (0x000614f4) grid_gallery2_pane

0x5534,	// (0x0005fe60) scroll_pane_cp029_ParamLimits

0x5534,	// (0x0005fe60) scroll_pane_cp029

0x6bdc,	// (0x00061508) cell_gallery2_pane_ParamLimits

0x6bdc,	// (0x00061508) cell_gallery2_pane

0x6c35,	// (0x00061561) cell_gallery2_pane_g2

0x6c3d,	// (0x00061569) cell_gallery2_pane_g3

0x6c45,	// (0x00061571) cell_gallery2_pane_g4

0x6c4d,	// (0x00061579) cell_gallery2_pane_g5

0xa389,	// (0x00064cb5) grid_highlight_pane_cp10

0x6053,	// (0x0006097f) popup_vitu2_match_list_window_ParamLimits

0x6064,	// (0x00060990) popup_vitu2_query_window_ParamLimits

0x6064,	// (0x00060990) popup_vitu2_query_window

0x99d9,	// (0x00064305) bg_vitu2_candi_button_pane

0x6b3e,	// (0x0006146a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x6b47,	// (0x00061473) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x6b50,	// (0x0006147c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6c55,	// (0x00061581) bg_button_pane_cp015

0x6c65,	// (0x00061591) bg_button_pane_cp016

0x6c77,	// (0x000615a3) bg_button_pane_cp017

0xe260,	// (0x00068b8c) bg_popup_sub_pane_cp22

0x6cb8,	// (0x000615e4) popup_vitu2_query_window_g1

0x6cc4,	// (0x000615f0) popup_vitu2_query_window_g2

0x0002,

0xf897,	// (0x0006a1c3) popup_vitu2_query_window_g

0x6cdf,	// (0x0006160b) popup_vitu2_query_window_t1_ParamLimits

0x6cdf,	// (0x0006160b) popup_vitu2_query_window_t1

0x6d12,	// (0x0006163e) popup_vitu2_query_window_t2_ParamLimits

0x6d12,	// (0x0006163e) popup_vitu2_query_window_t2

0x6d24,	// (0x00061650) popup_vitu2_query_window_t3_ParamLimits

0x6d24,	// (0x00061650) popup_vitu2_query_window_t3

0x6d4c,	// (0x00061678) popup_vitu2_query_window_t4_ParamLimits

0x6d4c,	// (0x00061678) popup_vitu2_query_window_t4

0x6d69,	// (0x00061695) popup_vitu2_query_window_t5_ParamLimits

0x6d69,	// (0x00061695) popup_vitu2_query_window_t5

0x0006,

0xf89e,	// (0x0006a1ca) popup_vitu2_query_window_t_ParamLimits

0xf89e,	// (0x0006a1ca) popup_vitu2_query_window_t

0x6506,	// (0x00060e32) main_cset_text_pane

0x6527,	// (0x00060e53) aid_area_touch_slider_ParamLimits

0x6543,	// (0x00060e6f) cset_slider_pane_ParamLimits

0x656d,	// (0x00060e99) main_cset_slider_pane_g1_ParamLimits

0x6582,	// (0x00060eae) main_cset_slider_pane_g2_ParamLimits

0x6597,	// (0x00060ec3) main_cset_slider_pane_g3_ParamLimits

0x6597,	// (0x00060ec3) main_cset_slider_pane_g3

0x65a3,	// (0x00060ecf) main_cset_slider_pane_g4_ParamLimits

0x65a3,	// (0x00060ecf) main_cset_slider_pane_g4

0x65b2,	// (0x00060ede) main_cset_slider_pane_g5_ParamLimits

0x65b2,	// (0x00060ede) main_cset_slider_pane_g5

0x65be,	// (0x00060eea) main_cset_slider_pane_g6_ParamLimits

0x65be,	// (0x00060eea) main_cset_slider_pane_g6

0xf7f1,	// (0x0006a11d) main_cset_slider_pane_g_ParamLimits

0x666e,	// (0x00060f9a) main_cset_slider_pane_t1_ParamLimits

0x669c,	// (0x00060fc8) main_cset_slider_pane_t2_ParamLimits

0x66b6,	// (0x00060fe2) main_cset_slider_pane_t3_ParamLimits

0x66d0,	// (0x00060ffc) main_cset_slider_pane_t4_ParamLimits

0x66ea,	// (0x00061016) main_cset_slider_pane_t5_ParamLimits

0x6704,	// (0x00061030) main_cset_slider_pane_t6_ParamLimits

0x6719,	// (0x00061045) main_cset_slider_pane_t7_ParamLimits

0x6743,	// (0x0006106f) main_cset_slider_pane_t8_ParamLimits

0x6743,	// (0x0006106f) main_cset_slider_pane_t8

0x676b,	// (0x00061097) main_cset_slider_pane_t9_ParamLimits

0x676b,	// (0x00061097) main_cset_slider_pane_t9

0x6793,	// (0x000610bf) main_cset_slider_pane_t10_ParamLimits

0x6793,	// (0x000610bf) main_cset_slider_pane_t10

0x67bb,	// (0x000610e7) main_cset_slider_pane_t11_ParamLimits

0x67bb,	// (0x000610e7) main_cset_slider_pane_t11

0x67e3,	// (0x0006110f) main_cset_slider_pane_t12_ParamLimits

0x67e3,	// (0x0006110f) main_cset_slider_pane_t12

0x6800,	// (0x0006112c) main_cset_slider_pane_t13_ParamLimits

0x6800,	// (0x0006112c) main_cset_slider_pane_t13

0xf816,	// (0x0006a142) main_cset_slider_pane_t_ParamLimits

0x0bcb,	// (0x0005b4f7) bg_popup_sub_pane_cp011

0x6ddc,	// (0x00061708) main_cset_text_pane_g1

0x6de4,	// (0x00061710) main_cset_text_pane_t1

0x6df2,	// (0x0006171e) main_cset_text_pane_t2

0x6e00,	// (0x0006172c) main_cset_text_pane_t3

0x6e0e,	// (0x0006173a) main_cset_text_pane_t4

0x6e1c,	// (0x00061748) main_cset_text_pane_t5

0x6e2a,	// (0x00061756) main_cset_text_pane_t6

0x6e38,	// (0x00061764) main_cset_text_pane_t7

0x0006,

0xf8ad,	// (0x0006a1d9) main_cset_text_pane_t

0x99d9,	// (0x00064305) main_cam4_burst_pane

0x99d9,	// (0x00064305) main_cam5_pane

0x643c,	// (0x00060d68) bg_button_pane_cp019

0x6445,	// (0x00060d71) bg_button_pane_cp020

0x65d2,	// (0x00060efe) main_cset_slider_pane_g7_ParamLimits

0x65d2,	// (0x00060efe) main_cset_slider_pane_g7

0x65de,	// (0x00060f0a) main_cset_slider_pane_g8_ParamLimits

0x65de,	// (0x00060f0a) main_cset_slider_pane_g8

0x65ea,	// (0x00060f16) main_cset_slider_pane_g9_ParamLimits

0x65ea,	// (0x00060f16) main_cset_slider_pane_g9

0x65f6,	// (0x00060f22) main_cset_slider_pane_g10_ParamLimits

0x65f6,	// (0x00060f22) main_cset_slider_pane_g10

0x6602,	// (0x00060f2e) main_cset_slider_pane_g11_ParamLimits

0x6602,	// (0x00060f2e) main_cset_slider_pane_g11

0x660e,	// (0x00060f3a) main_cset_slider_pane_g12_ParamLimits

0x660e,	// (0x00060f3a) main_cset_slider_pane_g12

0x661a,	// (0x00060f46) main_cset_slider_pane_g13_ParamLimits

0x661a,	// (0x00060f46) main_cset_slider_pane_g13

0x6626,	// (0x00060f52) main_cset_slider_pane_g14_ParamLimits

0x6626,	// (0x00060f52) main_cset_slider_pane_g14

0x6632,	// (0x00060f5e) main_cset_slider_pane_g15_ParamLimits

0x6632,	// (0x00060f5e) main_cset_slider_pane_g15

0x681d,	// (0x00061149) main_cset_slider_pane_t14_ParamLimits

0x681d,	// (0x00061149) main_cset_slider_pane_t14

0x6856,	// (0x00061182) main_cset_slider_pane_t15_ParamLimits

0x6856,	// (0x00061182) main_cset_slider_pane_t15

0x6e46,	// (0x00061772) aid_cam4_burst_size_cell_ParamLimits

0x6e46,	// (0x00061772) aid_cam4_burst_size_cell

0x6e66,	// (0x00061792) grid_cam4_burst_pane_ParamLimits

0x6e66,	// (0x00061792) grid_cam4_burst_pane

0x6e8c,	// (0x000617b8) linegrid_cam4_burst_pane_ParamLimits

0x6e8c,	// (0x000617b8) linegrid_cam4_burst_pane

0x6eae,	// (0x000617da) scroll_pane_cp30_ParamLimits

0x6eae,	// (0x000617da) scroll_pane_cp30

0x6eba,	// (0x000617e6) cell_cam4_burst_pane_ParamLimits

0x6eba,	// (0x000617e6) cell_cam4_burst_pane

0x6f01,	// (0x0006182d) linegrid_cam4_burst_pane_g1_ParamLimits

0x6f01,	// (0x0006182d) linegrid_cam4_burst_pane_g1

0x6f0e,	// (0x0006183a) linegrid_cam4_burst_pane_g2_ParamLimits

0x6f0e,	// (0x0006183a) linegrid_cam4_burst_pane_g2

0x6f1f,	// (0x0006184b) linegrid_cam4_burst_pane_g3_ParamLimits

0x6f1f,	// (0x0006184b) linegrid_cam4_burst_pane_g3

0x0002,

0xf8bc,	// (0x0006a1e8) linegrid_cam4_burst_pane_g_ParamLimits

0xf8bc,	// (0x0006a1e8) linegrid_cam4_burst_pane_g

0x6f2c,	// (0x00061858) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6f2c,	// (0x00061858) linegrid_cam4_burst_pane_g3_copy1

0x6f46,	// (0x00061872) linegrid_cam4_burst_pane_g4_ParamLimits

0x6f46,	// (0x00061872) linegrid_cam4_burst_pane_g4

0x6f53,	// (0x0006187f) linegrid_cam4_burst_pane_g5_ParamLimits

0x6f53,	// (0x0006187f) linegrid_cam4_burst_pane_g5

0x6f64,	// (0x00061890) linegrid_cam4_burst_pane_g6_ParamLimits

0x6f64,	// (0x00061890) linegrid_cam4_burst_pane_g6

0x6f75,	// (0x000618a1) linegrid_cam4_burst_pane_g7_ParamLimits

0x6f75,	// (0x000618a1) linegrid_cam4_burst_pane_g7

0x6f82,	// (0x000618ae) cell_cam4_burst_pane_g1

0x6fa3,	// (0x000618cf) main_cam5_pane_t1_ParamLimits

0x6fa3,	// (0x000618cf) main_cam5_pane_t1

0x6fb5,	// (0x000618e1) main_cam5_pane_t2_ParamLimits

0x6fb5,	// (0x000618e1) main_cam5_pane_t2

0x6fc7,	// (0x000618f3) main_cam5_pane_t3_ParamLimits

0x6fc7,	// (0x000618f3) main_cam5_pane_t3

0x6fd9,	// (0x00061905) main_cam5_pane_t4_ParamLimits

0x6fd9,	// (0x00061905) main_cam5_pane_t4

0x6fef,	// (0x0006191b) main_cam5_pane_t5_ParamLimits

0x6fef,	// (0x0006191b) main_cam5_pane_t5

0x7001,	// (0x0006192d) main_cam5_pane_t6_ParamLimits

0x7001,	// (0x0006192d) main_cam5_pane_t6

0x7013,	// (0x0006193f) main_cam5_pane_t7_ParamLimits

0x7013,	// (0x0006193f) main_cam5_pane_t7

0x7025,	// (0x00061951) main_cam5_pane_t8_ParamLimits

0x7025,	// (0x00061951) main_cam5_pane_t8

0x7041,	// (0x0006196d) main_cam5_pane_t9_ParamLimits

0x7041,	// (0x0006196d) main_cam5_pane_t9

0x7053,	// (0x0006197f) main_cam5_pane_t10_ParamLimits

0x7053,	// (0x0006197f) main_cam5_pane_t10

0x7065,	// (0x00061991) main_cam5_pane_t11_ParamLimits

0x7065,	// (0x00061991) main_cam5_pane_t11

0x7077,	// (0x000619a3) main_cam5_pane_t12_ParamLimits

0x7077,	// (0x000619a3) main_cam5_pane_t12

0x708c,	// (0x000619b8) main_cam5_pane_t13_ParamLimits

0x708c,	// (0x000619b8) main_cam5_pane_t13

0x000c,

0xf8c8,	// (0x0006a1f4) main_cam5_pane_t_ParamLimits

0xf8c8,	// (0x0006a1f4) main_cam5_pane_t

0x0d79,	// (0x0005b6a5) popup_scut_keymap_window_ParamLimits

0x0d79,	// (0x0005b6a5) popup_scut_keymap_window

0x70a9,	// (0x000619d5) aid_size_cell_brow_shortcut

0xa389,	// (0x00064cb5) bg_popup_window_pane_cp010

0x70b5,	// (0x000619e1) grid_scut_pane

0x70bf,	// (0x000619eb) cell_scut_pane_ParamLimits

0x70bf,	// (0x000619eb) cell_scut_pane

0x70d4,	// (0x00061a00) cell_scut_pane_g1

0x70dd,	// (0x00061a09) cell_scut_pane_t1

0x70ec,	// (0x00061a18) cell_scut_pane_t2

0x70fb,	// (0x00061a27) cell_scut_pane_t3

0x0002,

0xf8e3,	// (0x0006a20f) cell_scut_pane_t

0x4c67,	// (0x0005f593) main_mup3_pane_g8_ParamLimits

0x4c67,	// (0x0005f593) main_mup3_pane_g8

0x5fa2,	// (0x000608ce) area_vitu2_query_pane_ParamLimits

0x5fa2,	// (0x000608ce) area_vitu2_query_pane

0x6c89,	// (0x000615b5) input_focus_pane_cp08

0x7109,	// (0x00061a35) area_vitu2_query_pane_g1

0x7115,	// (0x00061a41) area_vitu2_query_pane_g2

0x0001,

0xf8ea,	// (0x0006a216) area_vitu2_query_pane_g

0x7124,	// (0x00061a50) area_vitu2_query_pane_t1_ParamLimits

0x7124,	// (0x00061a50) area_vitu2_query_pane_t1

0x7136,	// (0x00061a62) area_vitu2_query_pane_t2_ParamLimits

0x7136,	// (0x00061a62) area_vitu2_query_pane_t2

0x7148,	// (0x00061a74) area_vitu2_query_pane_t3_ParamLimits

0x7148,	// (0x00061a74) area_vitu2_query_pane_t3

0x7170,	// (0x00061a9c) area_vitu2_query_pane_t4_ParamLimits

0x7170,	// (0x00061a9c) area_vitu2_query_pane_t4

0x7198,	// (0x00061ac4) area_vitu2_query_pane_t5_ParamLimits

0x7198,	// (0x00061ac4) area_vitu2_query_pane_t5

0xbd1f,	// (0x0006664b) area_vitu2_query_pane_t6_ParamLimits

0xbd1f,	// (0x0006664b) area_vitu2_query_pane_t6

0x0006,

0xf8ef,	// (0x0006a21b) area_vitu2_query_pane_t_ParamLimits

0xf8ef,	// (0x0006a21b) area_vitu2_query_pane_t

0x71c0,	// (0x00061aec) bg_button_pane_cp018

0x71cd,	// (0x00061af9) bg_button_pane_cp021

0x71d9,	// (0x00061b05) bg_button_pane_cp022

0x71e8,	// (0x00061b14) input_focus_pane_cp09

0x2f36,	// (0x0005d862) aid_size_touch_mv_arrow_left

0xacf8,	// (0x00065624) aid_size_touch_mv_arrow_right

0x664a,	// (0x00060f76) main_cset_slider_pane_g16_ParamLimits

0x664a,	// (0x00060f76) main_cset_slider_pane_g16

0x6656,	// (0x00060f82) main_cset_slider_pane_g17_ParamLimits

0x6656,	// (0x00060f82) main_cset_slider_pane_g17

0x6f82,	// (0x000618ae) cell_cam4_burst_pane_g1_ParamLimits

0x0bcb,	// (0x0005b4f7) compa_mode_pane

0x693c,	// (0x00061268) popup_vtel_slider_window_g3_ParamLimits

0x693c,	// (0x00061268) popup_vtel_slider_window_g3

0x6953,	// (0x0006127f) popup_vtel_slider_window_g4_ParamLimits

0x6953,	// (0x0006127f) popup_vtel_slider_window_g4

0x696a,	// (0x00061296) popup_vtel_slider_window_t1_ParamLimits

0x696a,	// (0x00061296) popup_vtel_slider_window_t1

0x99d9,	// (0x00064305) main_cl_pane

0xbc35,	// (0x00066561) popup_imed_adjust2_window_ParamLimits

0xe260,	// (0x00068b8c) bg_tb_trans_pane_cp05_ParamLimits

0xeb4e,	// (0x0006947a) popup_imed_adjust2_window_g1_ParamLimits

0xeb5d,	// (0x00069489) popup_imed_adjust2_window_g2_ParamLimits

0xeb5d,	// (0x00069489) popup_imed_adjust2_window_g2

0xeb69,	// (0x00069495) popup_imed_adjust2_window_g3_ParamLimits

0xeb69,	// (0x00069495) popup_imed_adjust2_window_g3

0x0002,

0x0328,	// (0x0005ac54) popup_imed_adjust2_window_g_ParamLimits

0x0328,	// (0x0005ac54) popup_imed_adjust2_window_g

0xeb75,	// (0x000694a1) popup_imed_adjust2_window_t1_ParamLimits

0xeb8d,	// (0x000694b9) slider_imed_adjust_pane_ParamLimits

0xeba1,	// (0x000694cd) slider_imed_adjust_pane_g1_ParamLimits

0xebb1,	// (0x000694dd) slider_imed_adjust_pane_g2_ParamLimits

0xebc1,	// (0x000694ed) slider_imed_adjust_pane_g3_ParamLimits

0xebd2,	// (0x000694fe) slider_imed_adjust_pane_g4_ParamLimits

0x032f,	// (0x0005ac5b) slider_imed_adjust_pane_g_ParamLimits

0x5d79,	// (0x000606a5) aid_touch_area_cam4_ParamLimits

0x5d79,	// (0x000606a5) aid_touch_area_cam4

0xd972,	// (0x0006829e) battery_pane_cp01

0x5e11,	// (0x0006073d) main_camera4_pane_g6_ParamLimits

0x5e11,	// (0x0006073d) main_camera4_pane_g6

0x5e32,	// (0x0006075e) main_camera4_pane_t2_ParamLimits

0x5e32,	// (0x0006075e) main_camera4_pane_t2

0x0001,

0xf764,	// (0x0006a090) main_camera4_pane_t_ParamLimits

0xf764,	// (0x0006a090) main_camera4_pane_t

0x5e60,	// (0x0006078c) aid_touch_area_vid4_ParamLimits

0x5e60,	// (0x0006078c) aid_touch_area_vid4

0x5ea2,	// (0x000607ce) main_video4_pane_g5_ParamLimits

0x5ea2,	// (0x000607ce) main_video4_pane_g5

0x5ec3,	// (0x000607ef) vid4_progress_pane_ParamLimits

0x5ec3,	// (0x000607ef) vid4_progress_pane

0x6662,	// (0x00060f8e) main_cset_slider_pane_g18_ParamLimits

0x6662,	// (0x00060f8e) main_cset_slider_pane_g18

0x6f97,	// (0x000618c3) cell_cam4_burst_pane_g2_ParamLimits

0x6f97,	// (0x000618c3) cell_cam4_burst_pane_g2

0x0001,

0xf8c3,	// (0x0006a1ef) cell_cam4_burst_pane_g_ParamLimits

0xf8c3,	// (0x0006a1ef) cell_cam4_burst_pane_g

0xa11a,	// (0x00064a46) bg_cl_pane_ParamLimits

0xa11a,	// (0x00064a46) bg_cl_pane

0x71f7,	// (0x00061b23) cl_header_pane_ParamLimits

0x71f7,	// (0x00061b23) cl_header_pane

0x720b,	// (0x00061b37) cl_listscroll_pane_ParamLimits

0x720b,	// (0x00061b37) cl_listscroll_pane

0xbd6b,	// (0x00066697) bg_cl_pane_g1

0xbd73,	// (0x0006669f) bg_cl_pane_g2

0xbd7b,	// (0x000666a7) bg_cl_pane_g3

0xbd83,	// (0x000666af) bg_cl_pane_g4

0xbd8b,	// (0x000666b7) bg_cl_pane_g5

0xbd93,	// (0x000666bf) bg_cl_pane_g6

0xbd9b,	// (0x000666c7) bg_cl_pane_g7

0xbda3,	// (0x000666cf) bg_cl_pane_g8

0xbdab,	// (0x000666d7) bg_cl_pane_g9

0x0008,

0xf8fe,	// (0x0006a22a) bg_cl_pane_g

0x721b,	// (0x00061b47) aid_height_cl_leading_ParamLimits

0x721b,	// (0x00061b47) aid_height_cl_leading

0x7227,	// (0x00061b53) aid_height_cl_text_ParamLimits

0x7227,	// (0x00061b53) aid_height_cl_text

0xbc0f,	// (0x0006653b) bg_cl_header_pane_ParamLimits

0xbc0f,	// (0x0006653b) bg_cl_header_pane

0x7246,	// (0x00061b72) cl_header_pane_g1_ParamLimits

0x7246,	// (0x00061b72) cl_header_pane_g1

0x725c,	// (0x00061b88) cl_header_pane_t1_ParamLimits

0x725c,	// (0x00061b88) cl_header_pane_t1

0xbdb3,	// (0x000666df) cl_list_pane

0xbdbc,	// (0x000666e8) hc_scroll_pane_cp01

0xa611,	// (0x00064f3d) bg_cl_header_pane_g1

0xf039,	// (0x00069965) bg_cl_header_pane_g2

0xa631,	// (0x00064f5d) bg_cl_header_pane_g3

0xf049,	// (0x00069975) bg_cl_header_pane_g4

0xf041,	// (0x0006996d) bg_cl_header_pane_g5

0x6aa2,	// (0x000613ce) bg_cl_header_pane_g6

0xf061,	// (0x0006998d) bg_cl_header_pane_g7

0xf069,	// (0x00069995) bg_cl_header_pane_g8

0xf059,	// (0x00069985) bg_cl_header_pane_g9

0x0008,

0xf911,	// (0x0006a23d) bg_cl_header_pane_g

0x7275,	// (0x00061ba1) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7275,	// (0x00061ba1) hc_cl_list_double_graphic_heading_pane

0x7285,	// (0x00061bb1) hc_cl_list_single_graphic_pane_ParamLimits

0x7285,	// (0x00061bb1) hc_cl_list_single_graphic_pane

0x7298,	// (0x00061bc4) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7298,	// (0x00061bc4) hc_cl_list_single_graphic_pane_g1

0x72a4,	// (0x00061bd0) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x72a4,	// (0x00061bd0) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf924,	// (0x0006a250) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf924,	// (0x0006a250) hc_cl_list_single_graphic_pane_g

0x72b8,	// (0x00061be4) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x72b8,	// (0x00061be4) hc_cl_list_single_graphic_pane_t1

0x7298,	// (0x00061bc4) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7298,	// (0x00061bc4) hc_cl_list_double_graphic_heading_pane_g1

0x72cd,	// (0x00061bf9) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x72cd,	// (0x00061bf9) hc_cl_list_double_graphic_heading_pane_g2

0x72e1,	// (0x00061c0d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x72e1,	// (0x00061c0d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf929,	// (0x0006a255) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf929,	// (0x0006a255) hc_cl_list_double_graphic_heading_pane_g

0x72f5,	// (0x00061c21) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x72f5,	// (0x00061c21) hc_cl_list_double_graphic_heading_pane_t1

0x730a,	// (0x00061c36) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x730a,	// (0x00061c36) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf930,	// (0x0006a25c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf930,	// (0x0006a25c) hc_cl_list_double_graphic_heading_pane_t

0xdadc,	// (0x00068408) vid4_progress_pane_g1

0xdaeb,	// (0x00068417) vid4_progress_pane_g2

0xdafa,	// (0x00068426) vid4_progress_pane_g3

0xdb09,	// (0x00068435) vid4_progress_pane_g4

0x0004,

0xf935,	// (0x0006a261) vid4_progress_pane_g

0xdb21,	// (0x0006844d) vid4_progress_pane_t1

0xdb37,	// (0x00068463) vid4_progress_pane_t2

0x0002,

0xf940,	// (0x0006a26c) vid4_progress_pane_t

0xdb61,	// (0x0006848d) wait_bar_pane_cp07

0xe46d,	// (0x00068d99) blid_firmament_pane_ParamLimits

0xe4ae,	// (0x00068dda) popup_blid_sat_info2_window_g1

0xe4d2,	// (0x00068dfe) popup_blid_sat_info2_window_t3

0xe4e0,	// (0x00068e0c) popup_blid_sat_info2_window_t4

0xe4ee,	// (0x00068e1a) popup_blid_sat_info2_window_t5

0xe4fc,	// (0x00068e28) popup_blid_sat_info2_window_t6

0xe50c,	// (0x00068e38) popup_blid_sat_info2_window_t7

0xe51a,	// (0x00068e46) popup_blid_sat_info2_window_t8

0xe528,	// (0x00068e54) popup_blid_sat_info2_window_t9

0xe536,	// (0x00068e62) popup_blid_sat_info2_window_t10

0xe5f2,	// (0x00068f1e) aid_firma_cardinal_ParamLimits

0xe606,	// (0x00068f32) blid_firmament_pane_t1_ParamLimits

0xe61d,	// (0x00068f49) blid_firmament_pane_t2_ParamLimits

0xe634,	// (0x00068f60) blid_firmament_pane_t3_ParamLimits

0xe64b,	// (0x00068f77) blid_firmament_pane_t4_ParamLimits

0x021c,	// (0x0005ab48) blid_firmament_pane_t_ParamLimits

0xe662,	// (0x00068f8e) blid_sat_info_pane_ParamLimits

0x99cb,	// (0x000642f7) main_cam_set_pane_ParamLimits

0x54b5,	// (0x0005fde1) aid_size_cell_colour_35_ParamLimits

0x54d5,	// (0x0005fe01) aid_size_cell_colour_112_ParamLimits

0x54f5,	// (0x0005fe21) aid_size_cell_effect_ParamLimits

0xe260,	// (0x00068b8c) bg_tb_trans_pane_cp02_ParamLimits

0xa891,	// (0x000651bd) heading_imed_pane_ParamLimits

0x5515,	// (0x0005fe41) listscroll_imed_pane_ParamLimits

0xb8c0,	// (0x000661ec) popup_call2_audio_first_window_g5_ParamLimits

0xb8c0,	// (0x000661ec) popup_call2_audio_first_window_g5

0x5a32,	// (0x0006035e) aid_size_touch_image3_arrow_left_ParamLimits

0x5a32,	// (0x0006035e) aid_size_touch_image3_arrow_left

0x5a52,	// (0x0006037e) aid_size_touch_image3_arrow_right_ParamLimits

0x5a52,	// (0x0006037e) aid_size_touch_image3_arrow_right

0xdb4c,	// (0x00068478) vid4_progress_pane_t3

0x57e9,	// (0x00060115) main_hwr_training_symbol_option_pane_ParamLimits

0x57e9,	// (0x00060115) main_hwr_training_symbol_option_pane

0xee2d,	// (0x00069759) popup_hwr_training_preview_window_ParamLimits

0xee2d,	// (0x00069759) popup_hwr_training_preview_window

0x5805,	// (0x00060131) hwr_training_navi_pane_g5_ParamLimits

0x5805,	// (0x00060131) hwr_training_navi_pane_g5

0xf027,	// (0x00069953) popup_char_count_window

0x99cb,	// (0x000642f7) bg_popup_sub_pane_cp20_ParamLimits

0x6a84,	// (0x000613b0) list_vitu2_match_list_pane_ParamLimits

0x6a93,	// (0x000613bf) vitu2_page_scroll_pane_ParamLimits

0x6a93,	// (0x000613bf) vitu2_page_scroll_pane

0xbe02,	// (0x0006672e) list_single_hwr_training_symbol_option_pane_ParamLimits

0xbe02,	// (0x0006672e) list_single_hwr_training_symbol_option_pane

0xbe15,	// (0x00066741) list_single_hwr_training_symbol_option_pane_g1

0xbe1d,	// (0x00066749) list_single_hwr_training_symbol_option_pane_t1

0xbe2b,	// (0x00066757) bg_button_pane_cp023

0xbe34,	// (0x00066760) bg_button_pane_cp024

0x7333,	// (0x00061c5f) vitu2_page_scroll_pane_g1

0x733b,	// (0x00061c67) vitu2_page_scroll_pane_g2

0x0001,

0xf947,	// (0x0006a273) vitu2_page_scroll_pane_g

0x7343,	// (0x00061c6f) vitu2_page_scroll_pane_t1

0xe69b,	// (0x00068fc7) popup_char_count_window_g1

0xbe67,	// (0x00066793) popup_char_count_window_g2

0xbe70,	// (0x0006679c) popup_char_count_window_g3

0x0002,

0xf94c,	// (0x0006a278) popup_char_count_window_g

0xbe79,	// (0x000667a5) popup_char_count_window_t1

0x99d9,	// (0x00064305) main_vded2_pane

0xeb3c,	// (0x00069468) aid_size_cell_imed_line

0xeb46,	// (0x00069472) grid_imed_line_width_pane

0xda15,	// (0x00068341) vid4_indicators_pane_g4

0xbe87,	// (0x000667b3) cell_imed_line_width_pane_ParamLimits

0xbe87,	// (0x000667b3) cell_imed_line_width_pane

0xbe99,	// (0x000667c5) cell_imed_line_width_pane_g1

0xe447,	// (0x00068d73) cell_imed_line_width_pane_g2

0x0001,

0xf953,	// (0x0006a27f) cell_imed_line_width_pane_g

0x7352,	// (0x00061c7e) main_vded2_pane_g1_ParamLimits

0x7352,	// (0x00061c7e) main_vded2_pane_g1

0x7368,	// (0x00061c94) main_vded2_pane_g2_ParamLimits

0x7368,	// (0x00061c94) main_vded2_pane_g2

0x0001,

0xf958,	// (0x0006a284) main_vded2_pane_g_ParamLimits

0xf958,	// (0x0006a284) main_vded2_pane_g

0x7378,	// (0x00061ca4) vded2_slider_pane_ParamLimits

0x7378,	// (0x00061ca4) vded2_slider_pane

0x738b,	// (0x00061cb7) aid_size_touch_vded2_end

0x7393,	// (0x00061cbf) aid_size_touch_vded2_playhead

0x739b,	// (0x00061cc7) aid_size_touch_vded2_start

0x73a3,	// (0x00061ccf) vded2_slider_bg_pane

0x73ac,	// (0x00061cd8) vded2_slider_pane_g1

0x73b5,	// (0x00061ce1) vded2_slider_pane_g2

0x73bd,	// (0x00061ce9) vded2_slider_pane_g3

0x0002,

0xf95d,	// (0x0006a289) vded2_slider_pane_g

0x73c6,	// (0x00061cf2) vded2_slider_bg_pane_g1

0x73cf,	// (0x00061cfb) vded2_slider_bg_pane_g2

0x73d8,	// (0x00061d04) vded2_slider_bg_pane_g3

0x0002,

0xf964,	// (0x0006a290) vded2_slider_bg_pane_g

0x34c0,	// (0x0005ddec) aid_postcard_touch_down_pane_ParamLimits

0x34c0,	// (0x0005ddec) aid_postcard_touch_down_pane

0x34d2,	// (0x0005ddfe) aid_postcard_touch_up_pane_ParamLimits

0x34d2,	// (0x0005ddfe) aid_postcard_touch_up_pane

0x99d9,	// (0x00064305) main_blid2_pane

0xbc1d,	// (0x00066549) popup_blid2_search_window

0x0bcb,	// (0x0005b4f7) blid2_gps_pane

0x0bcb,	// (0x0005b4f7) blid2_navig_pane

0x0bcb,	// (0x0005b4f7) blid2_search_pane

0x0bcb,	// (0x0005b4f7) blid2_tripm_pane

0x73e1,	// (0x00061d0d) blid2_search_pane_g1_ParamLimits

0x73e1,	// (0x00061d0d) blid2_search_pane_g1

0x73f5,	// (0x00061d21) blid2_search_pane_t1_ParamLimits

0x73f5,	// (0x00061d21) blid2_search_pane_t1

0x7407,	// (0x00061d33) aid_size_cell_blid2_gps_ParamLimits

0x7407,	// (0x00061d33) aid_size_cell_blid2_gps

0x741f,	// (0x00061d4b) blid2_gps_pane_g1_ParamLimits

0x741f,	// (0x00061d4b) blid2_gps_pane_g1

0x7433,	// (0x00061d5f) grid_blid2_satellite_pane_ParamLimits

0x7433,	// (0x00061d5f) grid_blid2_satellite_pane

0x7447,	// (0x00061d73) blid2_navig_pane_g1_ParamLimits

0x7447,	// (0x00061d73) blid2_navig_pane_g1

0x7453,	// (0x00061d7f) blid2_navig_pane_t1_ParamLimits

0x7453,	// (0x00061d7f) blid2_navig_pane_t1

0x746c,	// (0x00061d98) blid2_navig_pane_t2_ParamLimits

0x746c,	// (0x00061d98) blid2_navig_pane_t2

0x0001,

0xf96b,	// (0x0006a297) blid2_navig_pane_t_ParamLimits

0xf96b,	// (0x0006a297) blid2_navig_pane_t

0x7485,	// (0x00061db1) blid2_navig_ring_pane_ParamLimits

0x7485,	// (0x00061db1) blid2_navig_ring_pane

0x749a,	// (0x00061dc6) blid2_speed_pane_ParamLimits

0x749a,	// (0x00061dc6) blid2_speed_pane

0x74a6,	// (0x00061dd2) blid2_tripm_pane_g1_ParamLimits

0x74a6,	// (0x00061dd2) blid2_tripm_pane_g1

0x74bb,	// (0x00061de7) blid2_tripm_pane_g2_ParamLimits

0x74bb,	// (0x00061de7) blid2_tripm_pane_g2

0x74cf,	// (0x00061dfb) blid2_tripm_pane_g3_ParamLimits

0x74cf,	// (0x00061dfb) blid2_tripm_pane_g3

0x74e3,	// (0x00061e0f) blid2_tripm_pane_g4_ParamLimits

0x74e3,	// (0x00061e0f) blid2_tripm_pane_g4

0x74f7,	// (0x00061e23) blid2_tripm_pane_g5_ParamLimits

0x74f7,	// (0x00061e23) blid2_tripm_pane_g5

0x0005,

0xf970,	// (0x0006a29c) blid2_tripm_pane_g_ParamLimits

0xf970,	// (0x0006a29c) blid2_tripm_pane_g

0x7519,	// (0x00061e45) blid2_tripm_pane_t1_ParamLimits

0x7519,	// (0x00061e45) blid2_tripm_pane_t1

0x7530,	// (0x00061e5c) blid2_tripm_pane_t2_ParamLimits

0x7530,	// (0x00061e5c) blid2_tripm_pane_t2

0x7547,	// (0x00061e73) blid2_tripm_pane_t3_ParamLimits

0x7547,	// (0x00061e73) blid2_tripm_pane_t3

0x0003,

0xf97d,	// (0x0006a2a9) blid2_tripm_pane_t_ParamLimits

0xf97d,	// (0x0006a2a9) blid2_tripm_pane_t

0x758a,	// (0x00061eb6) cell_blid2_satellite_pane_ParamLimits

0x758a,	// (0x00061eb6) cell_blid2_satellite_pane

0x75a2,	// (0x00061ece) cell_blid2_satellite_pane_g1

0xbea2,	// (0x000667ce) cell_blid2_satellite_pane_t1

0xe672,	// (0x00068f9e) blid2_speed_pane_g1

0xbeb0,	// (0x000667dc) blid2_speed_pane_t1

0xbebe,	// (0x000667ea) blid2_speed_pane_t2

0x0001,

0xf986,	// (0x0006a2b2) blid2_speed_pane_t

0xe672,	// (0x00068f9e) blid2_navig_ring_pane_g1

0x75ab,	// (0x00061ed7) blid2_navig_ring_pane_g2

0x75b3,	// (0x00061edf) blid2_navig_ring_pane_g3

0x75bb,	// (0x00061ee7) blid2_navig_ring_pane_g4

0x75c3,	// (0x00061eef) blid2_navig_ring_pane_g5

0x0004,

0xf98b,	// (0x0006a2b7) blid2_navig_ring_pane_g

0x0bcb,	// (0x0005b4f7) bg_popup_window_pane_cp011

0xbecc,	// (0x000667f8) popup_blid2_search_window_g1

0xbed4,	// (0x00066800) popup_blid2_search_window_t1

0xbee2,	// (0x0006680e) popup_blid2_search_window_t2

0x0001,

0xf996,	// (0x0006a2c2) popup_blid2_search_window_t

0xa520,	// (0x00064e4c) main_browser_pane_g1

0xa11a,	// (0x00064a46) main_browser_pane_ParamLimits

0x99cb,	// (0x000642f7) bg_button_pane_cp011_ParamLimits

0x61a1,	// (0x00060acd) cell_vitu2_function_pane_g1_ParamLimits

0xe260,	// (0x00068b8c) bg_popup_sub_pane_cp22_ParamLimits

0x6c89,	// (0x000615b5) input_focus_pane_cp08_ParamLimits

0x6ca0,	// (0x000615cc) popup_vitu2_query_button_pane_ParamLimits

0x6ca0,	// (0x000615cc) popup_vitu2_query_button_pane

0x6cb0,	// (0x000615dc) popup_vitu2_query_input_button_pane

0x6cb8,	// (0x000615e4) popup_vitu2_query_window_g1_ParamLimits

0x6cc4,	// (0x000615f0) popup_vitu2_query_window_g2_ParamLimits

0xf897,	// (0x0006a1c3) popup_vitu2_query_window_g_ParamLimits

0x0bcb,	// (0x0005b4f7) bg_button_pane_cp026

0x75cb,	// (0x00061ef7) popup_vitu2_query_input_button_pane_g1

0x0bcb,	// (0x0005b4f7) bg_button_pane_cp025

0xbef0,	// (0x0006681c) popup_vitu2_query_button_pane_t1

0x490f,	// (0x0005f23b) main_mp3_pane_t6

0x491d,	// (0x0005f249) popup_slider_window_cp01

0xd99a,	// (0x000682c6) cam4_battery_pane

0xd99a,	// (0x000682c6) cam4_battery_pane_cp02

0xd99a,	// (0x000682c6) cam4_battery_pane_cp01

0xd99a,	// (0x000682c6) cam4_battery_pane_cp03

0xef2d,	// (0x00069859) cam4_battery_pane_g1

0xe672,	// (0x00068f9e) cam4_battery_pane_g2

0x0001,

0x066d,	// (0x0005af99) cam4_battery_pane_g

0xe544,	// (0x00068e70) popup_blid_sat_info2_window_t11

0x2f36,	// (0x0005d862) aid_size_touch_mv_arrow_left_ParamLimits

0xacf8,	// (0x00065624) aid_size_touch_mv_arrow_right_ParamLimits

0xad51,	// (0x0006567d) navi_pane_g1_ParamLimits

0xad5d,	// (0x00065689) navi_pane_g2_ParamLimits

0x2f5a,	// (0x0005d886) navi_pane_g3_ParamLimits

0xf3ca,	// (0x00069cf6) navi_pane_g_ParamLimits

0x2f77,	// (0x0005d8a3) navi_pane_mv_t1_ParamLimits

0x5521,	// (0x0005fe4d) grid_imed_effect_pane_ParamLimits

0x1ce1,	// (0x0005c60d) aid_placing_vt_slider_lsc

0xa462,	// (0x00064d8e) aid_placing_vt_slider_prt

0xbc0f,	// (0x0006653b) bg_tb_trans_pane_cp01_ParamLimits

0xe7c1,	// (0x000690ed) popup_image_details_window_g1_ParamLimits

0xe7d4,	// (0x00069100) popup_image_details_window_g2_ParamLimits

0xe7e9,	// (0x00069115) popup_image_details_window_g3_ParamLimits

0xe7e9,	// (0x00069115) popup_image_details_window_g3

0x0261,	// (0x0005ab8d) popup_image_details_window_g_ParamLimits

0xe7fd,	// (0x00069129) popup_image_details_window_t1_ParamLimits

0xe80f,	// (0x0006913b) popup_image_details_window_t2_ParamLimits

0xe828,	// (0x00069154) popup_image_details_window_t3_ParamLimits

0xe83c,	// (0x00069168) popup_image_details_window_t4_ParamLimits

0xe857,	// (0x00069183) popup_image_details_window_t5_ParamLimits

0x0268,	// (0x0005ab94) popup_image_details_window_t_ParamLimits

0x7233,	// (0x00061b5f) cl_header_name_pane_ParamLimits

0x7233,	// (0x00061b5f) cl_header_name_pane

0x75d3,	// (0x00061eff) cl_header_name_pane_t1_ParamLimits

0x75d3,	// (0x00061eff) cl_header_name_pane_t1

0x75f4,	// (0x00061f20) cl_header_name_pane_t2_ParamLimits

0x75f4,	// (0x00061f20) cl_header_name_pane_t2

0x7636,	// (0x00061f62) cl_header_name_pane_t3_ParamLimits

0x7636,	// (0x00061f62) cl_header_name_pane_t3

0x0002,

0xf99b,	// (0x0006a2c7) cl_header_name_pane_t_ParamLimits

0xf99b,	// (0x0006a2c7) cl_header_name_pane_t

0xadea,	// (0x00065716) navi_pane_mv_g2_ParamLimits

0xf001,	// (0x0006992d) field_vitu2_entry_pane_g1_ParamLimits

0xf00d,	// (0x00069939) field_vitu2_entry_pane_g2_ParamLimits

0xf019,	// (0x00069945) field_vitu2_entry_pane_g3_ParamLimits

0xf019,	// (0x00069945) field_vitu2_entry_pane_g3

0xf796,	// (0x0006a0c2) field_vitu2_entry_pane_g_ParamLimits

0xda4b,	// (0x00068377) cell_vitu2_itu_pane_g1_ParamLimits

0x6135,	// (0x00060a61) cell_vitu2_itu_pane_g2_ParamLimits

0x6135,	// (0x00060a61) cell_vitu2_itu_pane_g2

0x0001,

0xf7a2,	// (0x0006a0ce) cell_vitu2_itu_pane_g_ParamLimits

0xf7a2,	// (0x0006a0ce) cell_vitu2_itu_pane_g

0x99cb,	// (0x000642f7) bg_vkb2_func_pane_cp05_ParamLimits

0x99cb,	// (0x000642f7) bg_vkb2_func_pane_cp05

0x99cb,	// (0x000642f7) bg_vkb2_func_pane_cp03

0x99cb,	// (0x000642f7) bg_vkb2_func_pane_cp04

0x99cb,	// (0x000642f7) bg_vkb2_func_pane_cp10_ParamLimits

0x99cb,	// (0x000642f7) bg_vkb2_func_pane_cp10

0x71d9,	// (0x00061b05) bg_vkb2_func_pane_cp08

0x71c0,	// (0x00061aec) bg_vkb2_func_pane_cp06

0x71cd,	// (0x00061af9) bg_vkb2_func_pane_cp07

0xbe3d,	// (0x00066769) bg_vkb2_func_pane_cp11_ParamLimits

0xbe3d,	// (0x00066769) bg_vkb2_func_pane_cp11

0xbe52,	// (0x0006677e) bg_vkb2_func_pane_cp12_ParamLimits

0xbe52,	// (0x0006677e) bg_vkb2_func_pane_cp12

0x0bcb,	// (0x0005b4f7) bg_vkb2_func_pane_cp09

0xf039,	// (0x00069965) bg_vkb2_func_pane_g1

0xa631,	// (0x00064f5d) bg_vkb2_func_pane_g2

0xf041,	// (0x0006996d) bg_vkb2_func_pane_g3

0xf049,	// (0x00069975) bg_vkb2_func_pane_g4

0x6aa2,	// (0x000613ce) bg_vkb2_func_pane_g5

0xf061,	// (0x0006998d) bg_vkb2_func_pane_g6

0xf069,	// (0x00069995) bg_vkb2_func_pane_g7

0xf059,	// (0x00069985) bg_vkb2_func_pane_g8

0xa611,	// (0x00064f3d) bg_vkb2_func_pane_g9

0x0008,

0xf9a2,	// (0x0006a2ce) bg_vkb2_func_pane_g

0x7509,	// (0x00061e35) blid2_tripm_pane_g6_ParamLimits

0x7509,	// (0x00061e35) blid2_tripm_pane_g6

0xeeeb,	// (0x00069817) mp4_progress_pane_g1

0x7578,	// (0x00061ea4) blid2_tripm_values_pane_ParamLimits

0x7578,	// (0x00061ea4) blid2_tripm_values_pane

0x7667,	// (0x00061f93) blid2_tripm_values_pane_t1

0x7675,	// (0x00061fa1) blid2_tripm_values_pane_t2

0x7683,	// (0x00061faf) blid2_tripm_values_pane_t3

0x7691,	// (0x00061fbd) blid2_tripm_values_pane_t4

0x769f,	// (0x00061fcb) blid2_tripm_values_pane_t5

0x76ad,	// (0x00061fd9) blid2_tripm_values_pane_t6

0x76bb,	// (0x00061fe7) blid2_tripm_values_pane_t7

0x76c9,	// (0x00061ff5) blid2_tripm_values_pane_t8

0x76d7,	// (0x00062003) blid2_tripm_values_pane_t9

0x0008,

0xf9b5,	// (0x0006a2e1) blid2_tripm_values_pane_t

0x1d1b,	// (0x0005c647) call_video_pane_t1_ParamLimits

0x1d35,	// (0x0005c661) call_video_pane_t2_ParamLimits

0xf253,	// (0x00069b7f) call_video_pane_t_ParamLimits

0x33d5,	// (0x0005dd01) msg_header_pane_g1_ParamLimits

0xafdc,	// (0x00065908) msg_header_pane_g2_ParamLimits

0xafdc,	// (0x00065908) msg_header_pane_g2

0x0001,

0xf46d,	// (0x00069d99) msg_header_pane_g_ParamLimits

0xf46d,	// (0x00069d99) msg_header_pane_g

0xa11a,	// (0x00064a46) main_clock2_pane_ParamLimits

0x5238,	// (0x0005fb64) grid_clock2_toolbar_pane_ParamLimits

0x5238,	// (0x0005fb64) grid_clock2_toolbar_pane

0x5238,	// (0x0005fb64) listscroll_clock2_pane_ParamLimits

0x5238,	// (0x0005fb64) listscroll_clock2_pane

0x531b,	// (0x0005fc47) main_clock2_pane_t3_ParamLimits

0x531b,	// (0x0005fc47) main_clock2_pane_t3

0x533d,	// (0x0005fc69) main_clock2_pane_t4_ParamLimits

0x533d,	// (0x0005fc69) main_clock2_pane_t4

0xbefe,	// (0x0006682a) cell_clock2_toolbar_pane

0xbf06,	// (0x00066832) cell_clock2_toolbar_pane_cp01

0xbf06,	// (0x00066832) cell_clock2_toolbar_pane_cp02

0xbf0e,	// (0x0006683a) cell_clock2_toolbar_pane_cp03

0xbf16,	// (0x00066842) list_clock2_pane

0xbf1e,	// (0x0006684a) scroll_pane_cp10

0xbf26,	// (0x00066852) list_single_clock2_pane_ParamLimits

0xbf26,	// (0x00066852) list_single_clock2_pane

0xa389,	// (0x00064cb5) list_highlight_pane_cp08

0xbf33,	// (0x0006685f) list_single_clock2_pane_t1

0xbf41,	// (0x0006686d) list_single_clock2_pane_t2

0x0001,

0xf9c8,	// (0x0006a2f4) list_single_clock2_pane_t

0x0bcb,	// (0x0005b4f7) bg_button_pane_cp10

0xbf4f,	// (0x0006687b) cell_clock2_toolbar_pane_g1

0x3454,	// (0x0005dd80) aid_main_viewer_pane_g1_ParamLimits

0x3454,	// (0x0005dd80) aid_main_viewer_pane_g1

0x3460,	// (0x0005dd8c) aid_main_viewer_pane_g2_ParamLimits

0x3460,	// (0x0005dd8c) aid_main_viewer_pane_g2

0x346c,	// (0x0005dd98) aid_main_viewer_pane_g3_ParamLimits

0x346c,	// (0x0005dd98) aid_main_viewer_pane_g3

0x347b,	// (0x0005dda7) aid_main_viewer_pane_g4_ParamLimits

0x347b,	// (0x0005dda7) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x00069daa) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x00069daa) aid_main_viewer_pane_g

0x99cb,	// (0x000642f7) main_calc_pane_ParamLimits

0x3c7f,	// (0x0005e5ab) main_dialer2_pane_ParamLimits

0x99d9,	// (0x00064305) main_cam6_pane

0x99d9,	// (0x00064305) main_vid6_pane

0x5244,	// (0x0005fb70) listscroll_gen_pane_cp06_ParamLimits

0x5244,	// (0x0005fb70) listscroll_gen_pane_cp06

0x535e,	// (0x0005fc8a) main_clock2_pane_t5_ParamLimits

0x535e,	// (0x0005fc8a) main_clock2_pane_t5

0x53b6,	// (0x0005fce2) aid_call2_pane_cp10_ParamLimits

0x53c8,	// (0x0005fcf4) aid_call_pane_cp10_ParamLimits

0xacec,	// (0x00065618) popup_clock_analogue_window_cp10_g1_ParamLimits

0xacec,	// (0x00065618) popup_clock_analogue_window_cp10_g2_ParamLimits

0x53da,	// (0x0005fd06) popup_clock_analogue_window_cp10_g3_ParamLimits

0x53da,	// (0x0005fd06) popup_clock_analogue_window_cp10_g4_ParamLimits

0xacec,	// (0x00065618) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6a7,	// (0x00069fd3) popup_clock_analogue_window_cp10_g_ParamLimits

0x53ec,	// (0x0005fd18) popup_clock_analogue_window_cp10_t1_ParamLimits

0xef55,	// (0x00069881) cell_dialer2_keypad_pane_g2_ParamLimits

0xef55,	// (0x00069881) cell_dialer2_keypad_pane_g2

0x0001,

0xf735,	// (0x0006a061) cell_dialer2_keypad_pane_g_ParamLimits

0xf735,	// (0x0006a061) cell_dialer2_keypad_pane_g

0x59fb,	// (0x00060327) cell_dialer2_keypad_pane_t1

0x64f8,	// (0x00060e24) main_cset_text2_pane_ParamLimits

0x64f8,	// (0x00060e24) main_cset_text2_pane

0x7109,	// (0x00061a35) area_vitu2_query_pane_g1_ParamLimits

0x7115,	// (0x00061a41) area_vitu2_query_pane_g2_ParamLimits

0xf8ea,	// (0x0006a216) area_vitu2_query_pane_g_ParamLimits

0xbd47,	// (0x00066673) area_vitu2_query_pane_t7_ParamLimits

0xbd47,	// (0x00066673) area_vitu2_query_pane_t7

0x71c0,	// (0x00061aec) bg_button_pane_cp018_ParamLimits

0x71cd,	// (0x00061af9) bg_button_pane_cp021_ParamLimits

0x71d9,	// (0x00061b05) bg_button_pane_cp022_ParamLimits

0x71d9,	// (0x00061b05) bg_vkb2_func_pane_cp08_ParamLimits

0x71c0,	// (0x00061aec) bg_vkb2_func_pane_cp06_ParamLimits

0x71cd,	// (0x00061af9) bg_vkb2_func_pane_cp07_ParamLimits

0x71e8,	// (0x00061b14) input_focus_pane_cp09_ParamLimits

0xdb71,	// (0x0006849d) cam6_autofocus_pane_ParamLimits

0xdb71,	// (0x0006849d) cam6_autofocus_pane

0x76e5,	// (0x00062011) cam6_image_uncrop_pane_ParamLimits

0x76e5,	// (0x00062011) cam6_image_uncrop_pane

0x76f2,	// (0x0006201e) cam6_indi_pane_ParamLimits

0x76f2,	// (0x0006201e) cam6_indi_pane

0x7708,	// (0x00062034) cam6_mode_pane_ParamLimits

0x7708,	// (0x00062034) cam6_mode_pane

0x771a,	// (0x00062046) cam6_timer_pane_ParamLimits

0x771a,	// (0x00062046) cam6_timer_pane

0x7726,	// (0x00062052) cam6_zoom_pane_ParamLimits

0x7726,	// (0x00062052) cam6_zoom_pane

0x7732,	// (0x0006205e) cam6_mode_pane_g1_ParamLimits

0x7732,	// (0x0006205e) cam6_mode_pane_g1

0x7742,	// (0x0006206e) cam6_mode_pane_g2_ParamLimits

0x7742,	// (0x0006206e) cam6_mode_pane_g2

0x7752,	// (0x0006207e) cam6_mode_pane_g3_ParamLimits

0x7752,	// (0x0006207e) cam6_mode_pane_g3

0x7762,	// (0x0006208e) cam6_mode_pane_g4_ParamLimits

0x7762,	// (0x0006208e) cam6_mode_pane_g4

0x0003,

0xf9cd,	// (0x0006a2f9) cam6_mode_pane_g_ParamLimits

0xf9cd,	// (0x0006a2f9) cam6_mode_pane_g

0xbf57,	// (0x00066883) bg_tb_trans_pane_cp08_ParamLimits

0xbf57,	// (0x00066883) bg_tb_trans_pane_cp08

0xbf65,	// (0x00066891) cam6_battery_pane_ParamLimits

0xbf65,	// (0x00066891) cam6_battery_pane

0xbf7b,	// (0x000668a7) cam6_indi_pane_g1_ParamLimits

0xbf7b,	// (0x000668a7) cam6_indi_pane_g1

0xbf8d,	// (0x000668b9) cam6_indi_pane_g2_ParamLimits

0xbf8d,	// (0x000668b9) cam6_indi_pane_g2

0xbf9f,	// (0x000668cb) cam6_indi_pane_g3_ParamLimits

0xbf9f,	// (0x000668cb) cam6_indi_pane_g3

0x0002,

0xf9d6,	// (0x0006a302) cam6_indi_pane_g_ParamLimits

0xf9d6,	// (0x0006a302) cam6_indi_pane_g

0xbfb1,	// (0x000668dd) cam6_indi_pane_t1_ParamLimits

0xbfb1,	// (0x000668dd) cam6_indi_pane_t1

0x5f25,	// (0x00060851) cam6_autofocus_pane_g1

0x5f1d,	// (0x00060849) cam6_autofocus_pane_g2

0x5f35,	// (0x00060861) cam6_autofocus_pane_g3

0x5f2d,	// (0x00060859) cam6_autofocus_pane_g4

0x0003,

0xf9dd,	// (0x0006a309) cam6_autofocus_pane_g

0xbfd7,	// (0x00066903) cam6_timer_pane_g1

0xbfdf,	// (0x0006690b) cam6_timer_pane_t1

0xbfed,	// (0x00066919) cam6_zoom_cont_pane

0xbff5,	// (0x00066921) cam6_zoom_pane_g1

0xbffd,	// (0x00066929) cam6_zoom_pane_g2

0x7772,	// (0x0006209e) cam6_zoom_pane_g3

0x0002,

0xf9e6,	// (0x0006a312) cam6_zoom_pane_g

0xe672,	// (0x00068f9e) cam6_battery_pane_g1

0xe672,	// (0x00068f9e) cam6_battery_pane_g2

0x0001,

0x0225,	// (0x0005ab51) cam6_battery_pane_g

0xc005,	// (0x00066931) cam6_zoom_cont_pane_g1

0xc00e,	// (0x0006693a) cam6_zoom_cont_pane_g2

0xc017,	// (0x00066943) cam6_zoom_cont_pane_g3

0x0002,

0xf9ed,	// (0x0006a319) cam6_zoom_cont_pane_g

0x778f,	// (0x000620bb) cam6_mode_pane_cp_ParamLimits

0x778f,	// (0x000620bb) cam6_mode_pane_cp

0x77a1,	// (0x000620cd) cam6_zoom_pane_cp_ParamLimits

0x77a1,	// (0x000620cd) cam6_zoom_pane_cp

0x77ad,	// (0x000620d9) vid6_image_uncrop_cif_pane_ParamLimits

0x77ad,	// (0x000620d9) vid6_image_uncrop_cif_pane

0x77bb,	// (0x000620e7) vid6_image_uncrop_nhd_pane_ParamLimits

0x77bb,	// (0x000620e7) vid6_image_uncrop_nhd_pane

0x77c8,	// (0x000620f4) vid6_image_uncrop_vga_pane_ParamLimits

0x77c8,	// (0x000620f4) vid6_image_uncrop_vga_pane

0x77d5,	// (0x00062101) vid6_image_uncrop_wvga_pane_ParamLimits

0x77d5,	// (0x00062101) vid6_image_uncrop_wvga_pane

0x77e2,	// (0x0006210e) vid6_indi_pane_ParamLimits

0x77e2,	// (0x0006210e) vid6_indi_pane

0xbf57,	// (0x00066883) bg_tb_trans_pane_cp09_ParamLimits

0xbf57,	// (0x00066883) bg_tb_trans_pane_cp09

0xc02b,	// (0x00066957) cam6_battery_pane_cp_ParamLimits

0xc02b,	// (0x00066957) cam6_battery_pane_cp

0xc037,	// (0x00066963) vid6_indi_pane_g1_ParamLimits

0xc037,	// (0x00066963) vid6_indi_pane_g1

0xc049,	// (0x00066975) vid6_indi_pane_g2_ParamLimits

0xc049,	// (0x00066975) vid6_indi_pane_g2

0xc05b,	// (0x00066987) vid6_indi_pane_g3_ParamLimits

0xc05b,	// (0x00066987) vid6_indi_pane_g3

0xc070,	// (0x0006699c) vid6_indi_pane_g4_ParamLimits

0xc070,	// (0x0006699c) vid6_indi_pane_g4

0xc085,	// (0x000669b1) vid6_indi_pane_g5_ParamLimits

0xc085,	// (0x000669b1) vid6_indi_pane_g5

0x0004,

0xf9f4,	// (0x0006a320) vid6_indi_pane_g_ParamLimits

0xf9f4,	// (0x0006a320) vid6_indi_pane_g

0xc09f,	// (0x000669cb) vid6_indi_pane_t1_ParamLimits

0xc09f,	// (0x000669cb) vid6_indi_pane_t1

0xc0b5,	// (0x000669e1) vid6_indi_pane_t2_ParamLimits

0xc0b5,	// (0x000669e1) vid6_indi_pane_t2

0xc0dd,	// (0x00066a09) vid6_indi_pane_t3_ParamLimits

0xc0dd,	// (0x00066a09) vid6_indi_pane_t3

0xc105,	// (0x00066a31) vid6_indi_pane_t4_ParamLimits

0xc105,	// (0x00066a31) vid6_indi_pane_t4

0x0003,

0xf9ff,	// (0x0006a32b) vid6_indi_pane_t_ParamLimits

0xf9ff,	// (0x0006a32b) vid6_indi_pane_t

0xc129,	// (0x00066a55) wait_bar_pane_cp08

0x77f9,	// (0x00062125) main_cset_text2_pane_t1_ParamLimits

0x77f9,	// (0x00062125) main_cset_text2_pane_t1

0x777a,	// (0x000620a6) listscroll_gen_pane_cp06_t1_ParamLimits

0x777a,	// (0x000620a6) listscroll_gen_pane_cp06_t1

0x99d9,	// (0x00064305) main_cam6_set_pane

0xd98c,	// (0x000682b8) bg_tb_trans_pane_cp06_ParamLimits

0xd9a2,	// (0x000682ce) cam4_indicators_pane_g1_ParamLimits

0xd9b2,	// (0x000682de) cam4_indicators_pane_g2_ParamLimits

0xf772,	// (0x0006a09e) cam4_indicators_pane_g_ParamLimits

0xd9d2,	// (0x000682fe) cam4_indicators_pane_t1_ParamLimits

0x99cb,	// (0x000642f7) bg_tb_trans_pane_cp07_ParamLimits

0xd9a2,	// (0x000682ce) vid4_indicators_pane_g1_ParamLimits

0xd9f4,	// (0x00068320) vid4_indicators_pane_g2_ParamLimits

0xda04,	// (0x00068330) vid4_indicators_pane_g3_ParamLimits

0xda15,	// (0x00068341) vid4_indicators_pane_g4_ParamLimits

0xf784,	// (0x0006a0b0) vid4_indicators_pane_g_ParamLimits

0xda31,	// (0x0006835d) vid4_indicators_pane_t1_ParamLimits

0xdadc,	// (0x00068408) vid4_progress_pane_g1_ParamLimits

0xdaeb,	// (0x00068417) vid4_progress_pane_g2_ParamLimits

0xdafa,	// (0x00068426) vid4_progress_pane_g3_ParamLimits

0xdb09,	// (0x00068435) vid4_progress_pane_g4_ParamLimits

0xf935,	// (0x0006a261) vid4_progress_pane_g_ParamLimits

0xdb21,	// (0x0006844d) vid4_progress_pane_t1_ParamLimits

0xdb37,	// (0x00068463) vid4_progress_pane_t2_ParamLimits

0xdb4c,	// (0x00068478) vid4_progress_pane_t3_ParamLimits

0xf940,	// (0x0006a26c) vid4_progress_pane_t_ParamLimits

0xdb61,	// (0x0006848d) wait_bar_pane_cp07_ParamLimits

0x7814,	// (0x00062140) main_cam6_set_pane_g2_ParamLimits

0x7814,	// (0x00062140) main_cam6_set_pane_g2

0x7836,	// (0x00062162) main_cset6_listscroll_pane_ParamLimits

0x7836,	// (0x00062162) main_cset6_listscroll_pane

0x7850,	// (0x0006217c) main_cset6_slider_pane_ParamLimits

0x7850,	// (0x0006217c) main_cset6_slider_pane

0x7866,	// (0x00062192) main_cset6_text2_pane_ParamLimits

0x7866,	// (0x00062192) main_cset6_text2_pane

0xc139,	// (0x00066a65) main_cset6_text_pane

0x650e,	// (0x00060e3a) main_cset_list_pane_copy1_ParamLimits

0x650e,	// (0x00060e3a) main_cset_list_pane_copy1

0x651e,	// (0x00060e4a) scroll_pane_cp028_copy1

0x7874,	// (0x000621a0) cset_list_set_pane_copy1

0x7886,	// (0x000621b2) aid_position_infowindow_above_copy1

0x788e,	// (0x000621ba) aid_position_infowindow_below_copy1

0x7896,	// (0x000621c2) cset_list_set_pane_g1_copy1

0x789e,	// (0x000621ca) cset_list_set_pane_g3_copy1_ParamLimits

0x789e,	// (0x000621ca) cset_list_set_pane_g3_copy1

0x78ad,	// (0x000621d9) cset_list_set_pane_t1_copy1_ParamLimits

0x78ad,	// (0x000621d9) cset_list_set_pane_t1_copy1

0xbc0f,	// (0x0006653b) list_highlight_pane_cp021_copy1_ParamLimits

0xbc0f,	// (0x0006653b) list_highlight_pane_cp021_copy1

0xc141,	// (0x00066a6d) cset6_slider_pane_ParamLimits

0xc141,	// (0x00066a6d) cset6_slider_pane

0xc16d,	// (0x00066a99) main_cset6_slider_pane_g1_ParamLimits

0xc16d,	// (0x00066a99) main_cset6_slider_pane_g1

0x78c2,	// (0x000621ee) main_cset6_slider_pane_g2_ParamLimits

0x78c2,	// (0x000621ee) main_cset6_slider_pane_g2

0x65d2,	// (0x00060efe) main_cset6_slider_pane_g3_ParamLimits

0x65d2,	// (0x00060efe) main_cset6_slider_pane_g3

0x6602,	// (0x00060f2e) main_cset6_slider_pane_g4_ParamLimits

0x6602,	// (0x00060f2e) main_cset6_slider_pane_g4

0x664a,	// (0x00060f76) main_cset6_slider_pane_g5_ParamLimits

0x664a,	// (0x00060f76) main_cset6_slider_pane_g5

0x65d2,	// (0x00060efe) main_cset6_slider_pane_g7_ParamLimits

0x65d2,	// (0x00060efe) main_cset6_slider_pane_g7

0x65de,	// (0x00060f0a) main_cset6_slider_pane_g8_ParamLimits

0x65de,	// (0x00060f0a) main_cset6_slider_pane_g8

0x65ea,	// (0x00060f16) main_cset6_slider_pane_g9_ParamLimits

0x65ea,	// (0x00060f16) main_cset6_slider_pane_g9

0x65f6,	// (0x00060f22) main_cset6_slider_pane_g10_ParamLimits

0x65f6,	// (0x00060f22) main_cset6_slider_pane_g10

0x6602,	// (0x00060f2e) main_cset6_slider_pane_g11_ParamLimits

0x6602,	// (0x00060f2e) main_cset6_slider_pane_g11

0x660e,	// (0x00060f3a) main_cset6_slider_pane_g12_ParamLimits

0x660e,	// (0x00060f3a) main_cset6_slider_pane_g12

0x661a,	// (0x00060f46) main_cset6_slider_pane_g13_ParamLimits

0x661a,	// (0x00060f46) main_cset6_slider_pane_g13

0x6626,	// (0x00060f52) main_cset6_slider_pane_g14_ParamLimits

0x6626,	// (0x00060f52) main_cset6_slider_pane_g14

0x78ea,	// (0x00062216) main_cset6_slider_pane_g15_ParamLimits

0x78ea,	// (0x00062216) main_cset6_slider_pane_g15

0x664a,	// (0x00060f76) main_cset6_slider_pane_g16_ParamLimits

0x664a,	// (0x00060f76) main_cset6_slider_pane_g16

0x6656,	// (0x00060f82) main_cset6_slider_pane_g17_ParamLimits

0x6656,	// (0x00060f82) main_cset6_slider_pane_g17

0x0011,

0xfa08,	// (0x0006a334) main_cset6_slider_pane_g_ParamLimits

0xfa08,	// (0x0006a334) main_cset6_slider_pane_g

0xc195,	// (0x00066ac1) main_cset6_slider_pane_t1_ParamLimits

0xc195,	// (0x00066ac1) main_cset6_slider_pane_t1

0xc1d6,	// (0x00066b02) main_cset6_slider_pane_t2_ParamLimits

0xc1d6,	// (0x00066b02) main_cset6_slider_pane_t2

0xc201,	// (0x00066b2d) main_cset6_slider_pane_t3_ParamLimits

0xc201,	// (0x00066b2d) main_cset6_slider_pane_t3

0x7902,	// (0x0006222e) main_cset6_slider_pane_t4_ParamLimits

0x7902,	// (0x0006222e) main_cset6_slider_pane_t4

0x792d,	// (0x00062259) main_cset6_slider_pane_t5_ParamLimits

0x792d,	// (0x00062259) main_cset6_slider_pane_t5

0xc22c,	// (0x00066b58) main_cset6_slider_pane_t7_ParamLimits

0xc22c,	// (0x00066b58) main_cset6_slider_pane_t7

0x7958,	// (0x00062284) main_cset6_slider_pane_t8_ParamLimits

0x7958,	// (0x00062284) main_cset6_slider_pane_t8

0x797c,	// (0x000622a8) main_cset6_slider_pane_t9_ParamLimits

0x797c,	// (0x000622a8) main_cset6_slider_pane_t9

0x79a0,	// (0x000622cc) main_cset6_slider_pane_t10_ParamLimits

0x79a0,	// (0x000622cc) main_cset6_slider_pane_t10

0x79c4,	// (0x000622f0) main_cset6_slider_pane_t11_ParamLimits

0x79c4,	// (0x000622f0) main_cset6_slider_pane_t11

0xc262,	// (0x00066b8e) main_cset6_slider_pane_t14_ParamLimits

0xc262,	// (0x00066b8e) main_cset6_slider_pane_t14

0xc29b,	// (0x00066bc7) main_cset6_slider_pane_t15_ParamLimits

0xc29b,	// (0x00066bc7) main_cset6_slider_pane_t15

0x000b,

0xfa2d,	// (0x0006a359) main_cset6_slider_pane_t_ParamLimits

0xfa2d,	// (0x0006a359) main_cset6_slider_pane_t

0x79e8,	// (0x00062314) cset_slider_pane_g1_copy1

0x79f1,	// (0x0006231d) cset_slider_pane_g2_copy1

0x79fa,	// (0x00062326) cset_slider_pane_g3_copy1

0x0bcb,	// (0x0005b4f7) bg_popup_sub_pane_cp011_copy1

0x6ddc,	// (0x00061708) main_cset_text_pane_g1_copy1

0x6de4,	// (0x00061710) main_cset_text_pane_t1_copy1

0x6df2,	// (0x0006171e) main_cset_text_pane_t2_copy1

0x6e00,	// (0x0006172c) main_cset_text_pane_t3_copy1

0x6e0e,	// (0x0006173a) main_cset_text_pane_t4_copy1

0x6e1c,	// (0x00061748) main_cset_text_pane_t5_copy1

0x6e2a,	// (0x00061756) main_cset_text_pane_t6_copy1

0x6e38,	// (0x00061764) main_cset_text_pane_t7_copy1

0x7a20,	// (0x0006234c) main_cset_text2_pane_t1_copy1

0x99cb,	// (0x000642f7) main_ncimui_pane

0x3e8d,	// (0x0005e7b9) popup_query_ncimui_window_ParamLimits

0x3e8d,	// (0x0005e7b9) popup_query_ncimui_window

0x4a93,	// (0x0005f3bf) field_cale_ev2_pane_g4_ParamLimits

0x4a93,	// (0x0005f3bf) field_cale_ev2_pane_g4

0x58ed,	// (0x00060219) cell_video_dialer_keypad_pane_g2_ParamLimits

0x58ed,	// (0x00060219) cell_video_dialer_keypad_pane_g2

0x0001,

0xf711,	// (0x0006a03d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf711,	// (0x0006a03d) cell_video_dialer_keypad_pane_g

0x5905,	// (0x00060231) cell_video_dialer_keypad_pane_t1

0x0bcb,	// (0x0005b4f7) bg_popup_window_pane_cp012

0xab39,	// (0x00065465) heading_pane_cp06

0xc3b2,	// (0x00066cde) ncim_query_content_pane

0x0bcb,	// (0x0005b4f7) bg_popup_heading_pane_cp01

0xc3ba,	// (0x00066ce6) ncim_heading_pane_t1

0xc3c8,	// (0x00066cf4) ncim_indicator_popup_pane

0xc3da,	// (0x00066d06) ncim_query_button_pane

0xc3ee,	// (0x00066d1a) ncim_query_content_pane_t1

0xc400,	// (0x00066d2c) ncim_query_content_pane_t2

0x0005,

0xfa71,	// (0x0006a39d) ncim_query_content_pane_t

0xc43a,	// (0x00066d66) ncim_query_list_pane

0xc44c,	// (0x00066d78) ncim_query_popup_pane

0xc3c8,	// (0x00066cf4) ncim_indicator_popup_pane_ParamLimits

0x7b5f,	// (0x0006248b) ncim_query_content_pane_g1_ParamLimits

0x7b5f,	// (0x0006248b) ncim_query_content_pane_g1

0xc3ee,	// (0x00066d1a) ncim_query_content_pane_t1_ParamLimits

0xc400,	// (0x00066d2c) ncim_query_content_pane_t2_ParamLimits

0x7b6b,	// (0x00062497) ncim_query_content_pane_t3_ParamLimits

0x7b6b,	// (0x00062497) ncim_query_content_pane_t3

0x7b93,	// (0x000624bf) ncim_query_content_pane_t4_ParamLimits

0x7b93,	// (0x000624bf) ncim_query_content_pane_t4

0x7bbb,	// (0x000624e7) ncim_query_content_pane_t5_ParamLimits

0x7bbb,	// (0x000624e7) ncim_query_content_pane_t5

0xc412,	// (0x00066d3e) ncim_query_content_pane_t6_ParamLimits

0xc412,	// (0x00066d3e) ncim_query_content_pane_t6

0xfa71,	// (0x0006a39d) ncim_query_content_pane_t_ParamLimits

0xc43a,	// (0x00066d66) ncim_query_list_pane_ParamLimits

0xc44c,	// (0x00066d78) ncim_query_popup_pane_ParamLimits

0xc460,	// (0x00066d8c) wait_bar_pane_cp04

0x0bcb,	// (0x0005b4f7) input_focus_pane_cp011

0xc468,	// (0x00066d94) ncim_query_popup_pane_t1

0xc476,	// (0x00066da2) ncim_list_query_list_pane_ParamLimits

0xc476,	// (0x00066da2) ncim_list_query_list_pane

0x0bcb,	// (0x0005b4f7) bg_button_pane_cp027

0xc489,	// (0x00066db5) ncim_query_button_pane_g1

0x0bcb,	// (0x0005b4f7) list_highlight_pane_cp012

0xc493,	// (0x00066dbf) ncim_list_query_list_pane_g1

0xc49b,	// (0x00066dc7) ncim_list_query_list_pane_t1

0xd9c2,	// (0x000682ee) cam4_indicators_pane_g3_ParamLimits

0xd9c2,	// (0x000682ee) cam4_indicators_pane_g3

0xda21,	// (0x0006834d) vid4_indicators_pane_g5_ParamLimits

0xda21,	// (0x0006834d) vid4_indicators_pane_g5

0xdb15,	// (0x00068441) vid4_progress_pane_g5_ParamLimits

0xdb15,	// (0x00068441) vid4_progress_pane_g5

0x7a4f,	// (0x0006237b) main_ncimui_pane_g1

0x7ab5,	// (0x000623e1) ncimui_group_query_pane_ParamLimits

0x7ab5,	// (0x000623e1) ncimui_group_query_pane

0x7afd,	// (0x00062429) ncimui_list_pane_ParamLimits

0x7afd,	// (0x00062429) ncimui_list_pane

0x7b22,	// (0x0006244e) ncimui_text_pane_ParamLimits

0x7b22,	// (0x0006244e) ncimui_text_pane

0x7be3,	// (0x0006250f) ncimui_text_pane_t1_ParamLimits

0x7be3,	// (0x0006250f) ncimui_text_pane_t1

0xc4b2,	// (0x00066dde) ncimui_list_single_graphic_pane_ParamLimits

0xc4b2,	// (0x00066dde) ncimui_list_single_graphic_pane

0x7c01,	// (0x0006252d) ncimui_query_pane_ParamLimits

0x7c01,	// (0x0006252d) ncimui_query_pane

0x0bcb,	// (0x0005b4f7) list_highlight_pane_cp013

0xc4c2,	// (0x00066dee) ncim_list_query_list_pane_t1_copy1

0xc4d0,	// (0x00066dfc) ncim_list_single_graphic_pane_g1

0xc4d8,	// (0x00066e04) ncim_query_button_pane_cp01

0xc4e4,	// (0x00066e10) ncim_query_entry_pane_ParamLimits

0xc4e4,	// (0x00066e10) ncim_query_entry_pane

0xc4f7,	// (0x00066e23) ncimui_query_pane_g1

0xc503,	// (0x00066e2f) ncimui_query_pane_t1_ParamLimits

0xc503,	// (0x00066e2f) ncimui_query_pane_t1

0xbc0f,	// (0x0006653b) input_focus_pane_cp012

0xc51c,	// (0x00066e48) ncim_query_entry_pane_t1

0xa11a,	// (0x00064a46) main_im_pane_ParamLimits

0x99cb,	// (0x000642f7) main_mobtv_pane_ParamLimits

0x99cb,	// (0x000642f7) main_mobtv_pane

0x65ea,	// (0x00060f16) main_cset6_slider_pane_g18_ParamLimits

0x65ea,	// (0x00060f16) main_cset6_slider_pane_g18

0x661a,	// (0x00060f46) main_cset6_slider_pane_g19_ParamLimits

0x661a,	// (0x00060f46) main_cset6_slider_pane_g19

0xc52e,	// (0x00066e5a) bg_main_mobtv_pane_ParamLimits

0xc52e,	// (0x00066e5a) bg_main_mobtv_pane

0x7c11,	// (0x0006253d) main_mobtv_info_pane

0x7c1a,	// (0x00062546) main_mobtv_loading_pane_ParamLimits

0x7c1a,	// (0x00062546) main_mobtv_loading_pane

0xc53c,	// (0x00066e68) main_mobtv_pg_channel_list_pane

0xc546,	// (0x00066e72) main_mobtv_pg_hdr_pane

0x7c27,	// (0x00062553) main_mobtv_programe_curr_pane_ParamLimits

0x7c27,	// (0x00062553) main_mobtv_programe_curr_pane

0x7c34,	// (0x00062560) main_mobtv_programe_next_pane_ParamLimits

0x7c34,	// (0x00062560) main_mobtv_programe_next_pane

0xc54f,	// (0x00066e7b) popup_mobtv_noti_window

0xe672,	// (0x00068f9e) main_tv_pg_hdr_pane_g1

0xc557,	// (0x00066e83) main_tv_pg_hdr_pane_g2

0xc55f,	// (0x00066e8b) main_tv_pg_hdr_pane_g3

0xc567,	// (0x00066e93) main_tv_pg_hdr_pane_g4

0xc56f,	// (0x00066e9b) main_tv_pg_hdr_pane_g5

0xc577,	// (0x00066ea3) main_tv_pg_hdr_pane_g6

0xc57f,	// (0x00066eab) main_tv_pg_hdr_pane_g7

0xc587,	// (0x00066eb3) main_tv_pg_hdr_pane_g8

0xc58f,	// (0x00066ebb) main_tv_pg_hdr_pane_g9

0xc597,	// (0x00066ec3) main_tv_pg_hdr_pane_g10

0xc5a1,	// (0x00066ecd) main_tv_pg_hdr_pane_g11

0x000a,

0xfa7e,	// (0x0006a3aa) main_tv_pg_hdr_pane_g

0xc5ab,	// (0x00066ed7) main_tv_pg_hdr_pane_t1

0xc5b9,	// (0x00066ee5) main_tv_pg_hdr_pane_t2

0xc5c7,	// (0x00066ef3) main_tv_pg_hdr_pane_t3

0xc5d5,	// (0x00066f01) main_tv_pg_hdr_pane_t4

0xc5e3,	// (0x00066f0f) main_tv_pg_hdr_pane_t5

0x0004,

0xfa95,	// (0x0006a3c1) main_tv_pg_hdr_pane_t

0xc5f1,	// (0x00066f1d) single_mobtv_pg_channel_pane_ParamLimits

0xc5f1,	// (0x00066f1d) single_mobtv_pg_channel_pane

0xc603,	// (0x00066f2f) single_mobtv_pg_channel_table_pane

0xc60c,	// (0x00066f38) single_mobtv_pg_channel_thumb_pane

0xc615,	// (0x00066f41) single_tv_pg_channel_pane_g1

0xc61e,	// (0x00066f4a) single_tv_pg_channel_pane_g2

0x0001,

0xfaa0,	// (0x0006a3cc) single_tv_pg_channel_pane_g

0xe8a1,	// (0x000691cd) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe8a1,	// (0x000691cd) bg_single_mobtv_pg_channel_thumb_pane

0xc627,	// (0x00066f53) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc627,	// (0x00066f53) single_mobtv_pg_channel_thumb_pane_g1

0xc635,	// (0x00066f61) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xc635,	// (0x00066f61) single_mobtv_pg_channel_thumb_pane_g2

0xc641,	// (0x00066f6d) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xc641,	// (0x00066f6d) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfaa5,	// (0x0006a3d1) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfaa5,	// (0x0006a3d1) single_mobtv_pg_channel_thumb_pane_g

0xc64d,	// (0x00066f79) single_mobtv_pg_channel_thumb_pane_t1

0xc65b,	// (0x00066f87) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfaac,	// (0x0006a3d8) single_mobtv_pg_channel_thumb_pane_t

0xe672,	// (0x00068f9e) bg_single_mobtv_pg_channel_table_pane_g1

0xe672,	// (0x00068f9e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x0225,	// (0x0005ab51) bg_single_mobtv_pg_channel_table_pane_g

0xc669,	// (0x00066f95) single_mobtv_pg_channel_table_pane_t1

0xc677,	// (0x00066fa3) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfab1,	// (0x0006a3dd) single_mobtv_pg_channel_table_pane_t

0x7c49,	// (0x00062575) main_mobtv_info_pane_g1_ParamLimits

0x7c49,	// (0x00062575) main_mobtv_info_pane_g1

0x7c65,	// (0x00062591) main_mobtv_info_pane_t1_ParamLimits

0x7c65,	// (0x00062591) main_mobtv_info_pane_t1

0x7ccb,	// (0x000625f7) main_mobtv_info_pane_t2_ParamLimits

0x7ccb,	// (0x000625f7) main_mobtv_info_pane_t2

0x0002,

0xfabb,	// (0x0006a3e7) main_mobtv_info_pane_t_ParamLimits

0xfabb,	// (0x0006a3e7) main_mobtv_info_pane_t

0x7d4e,	// (0x0006267a) wait_bar_pane_cp05

0x7d5e,	// (0x0006268a) main_mobtv_loading_pane_g1_ParamLimits

0x7d5e,	// (0x0006268a) main_mobtv_loading_pane_g1

0x7d6f,	// (0x0006269b) main_mobtv_loading_pane_g2_ParamLimits

0x7d6f,	// (0x0006269b) main_mobtv_loading_pane_g2

0x7d7b,	// (0x000626a7) main_mobtv_loading_pane_g3_ParamLimits

0x7d7b,	// (0x000626a7) main_mobtv_loading_pane_g3

0x0002,

0xfac2,	// (0x0006a3ee) main_mobtv_loading_pane_g_ParamLimits

0xfac2,	// (0x0006a3ee) main_mobtv_loading_pane_g

0xc685,	// (0x00066fb1) main_mobtv_loading_pane_t1_ParamLimits

0xc685,	// (0x00066fb1) main_mobtv_loading_pane_t1

0xc69d,	// (0x00066fc9) main_mobtv_loading_pane_t2_ParamLimits

0xc69d,	// (0x00066fc9) main_mobtv_loading_pane_t2

0x0001,

0xfac9,	// (0x0006a3f5) main_mobtv_loading_pane_t_ParamLimits

0xfac9,	// (0x0006a3f5) main_mobtv_loading_pane_t

0x7d8c,	// (0x000626b8) wait_bar_pane_cp06_ParamLimits

0x7d8c,	// (0x000626b8) wait_bar_pane_cp06

0xc6c1,	// (0x00066fed) main_mobtv_programe_curr_pane_t1

0xc6cf,	// (0x00066ffb) main_mobtv_programe_curr_pane_t2

0x0001,

0xface,	// (0x0006a3fa) main_mobtv_programe_curr_pane_t

0xc6dd,	// (0x00067009) main_mobtv_programe_next_pane_t1

0xc6eb,	// (0x00067017) main_mobtv_programe_next_pane_t2

0xc6f9,	// (0x00067025) main_mobtv_programe_next_pane_t3

0x0002,

0xfad3,	// (0x0006a3ff) main_mobtv_programe_next_pane_t

0x0bcb,	// (0x0005b4f7) bg_popup_mobtv_noti_window_pane

0xc707,	// (0x00067033) popup_mobtv_noti_window_g1

0xc70f,	// (0x0006703b) popup_mobtv_noti_window_t1

0xc71d,	// (0x00067049) popup_mobtv_noti_window_t2

0x0001,

0xfada,	// (0x0006a406) popup_mobtv_noti_window_t

0xe672,	// (0x00068f9e) bg_popup_mobtv_noti_window_pane_g1

0x99d9,	// (0x00064305) sc_clock_pane

0x99d9,	// (0x00064305) main_fs_bigclock_pane

0x7562,	// (0x00061e8e) blid2_tripm_pane_t4_ParamLimits

0x7562,	// (0x00061e8e) blid2_tripm_pane_t4

0x7d9b,	// (0x000626c7) sc_clock_pane_g1_ParamLimits

0x7d9b,	// (0x000626c7) sc_clock_pane_g1

0x7dad,	// (0x000626d9) sc_clock_pane_t1_ParamLimits

0x7dad,	// (0x000626d9) sc_clock_pane_t1

0x7dcf,	// (0x000626fb) sc_clock_pane_t2_ParamLimits

0x7dcf,	// (0x000626fb) sc_clock_pane_t2

0x7de5,	// (0x00062711) sc_clock_pane_t3_ParamLimits

0x7de5,	// (0x00062711) sc_clock_pane_t3

0x0004,

0xfadf,	// (0x0006a40b) sc_clock_pane_t_ParamLimits

0xfadf,	// (0x0006a40b) sc_clock_pane_t

0x8e54,	// (0x00063780) main_fs_bigclock_indicator_pane_ParamLimits

0x8e54,	// (0x00063780) main_fs_bigclock_indicator_pane

0x7e81,	// (0x000627ad) main_fs_bigclock_pane_g1_ParamLimits

0x7e81,	// (0x000627ad) main_fs_bigclock_pane_g1

0x8e60,	// (0x0006378c) main_fs_bigclock_pane_t1_ParamLimits

0x8e60,	// (0x0006378c) main_fs_bigclock_pane_t1

0x8e72,	// (0x0006379e) main_fs_bigclock_pane_t2_ParamLimits

0x8e72,	// (0x0006379e) main_fs_bigclock_pane_t2

0x8e84,	// (0x000637b0) main_fs_bigclock_pane_t3_ParamLimits

0x8e84,	// (0x000637b0) main_fs_bigclock_pane_t3

0x0002,

0xfce4,	// (0x0006a610) main_fs_bigclock_pane_t_ParamLimits

0xfce4,	// (0x0006a610) main_fs_bigclock_pane_t

0xd203,	// (0x00067b2f) main_fs_bigclock_indicator_pane_g1

0xc3e2,	// (0x00066d0e) ncim_query_content_pane_g2_ParamLimits

0xc3e2,	// (0x00066d0e) ncim_query_content_pane_g2

0x0001,

0xfa6c,	// (0x0006a398) ncim_query_content_pane_g_ParamLimits

0xfa6c,	// (0x0006a398) ncim_query_content_pane_g

0x7dfc,	// (0x00062728) sc_clock_pane_t4_ParamLimits

0x7dfc,	// (0x00062728) sc_clock_pane_t4

0x99cb,	// (0x000642f7) main_radioblah_pane

0xd928,	// (0x00068254) cell_call4_button_pane_t1_copy1_ParamLimits

0xd928,	// (0x00068254) cell_call4_button_pane_t1_copy1

0x7a67,	// (0x00062393) main_ncimui_pane_t1_ParamLimits

0x7a67,	// (0x00062393) main_ncimui_pane_t1

0x7a81,	// (0x000623ad) main_ncimui_pane_t2_ParamLimits

0x7a81,	// (0x000623ad) main_ncimui_pane_t2

0x0002,

0xfa65,	// (0x0006a391) main_ncimui_pane_t_ParamLimits

0xfa65,	// (0x0006a391) main_ncimui_pane_t

0xc85e,	// (0x0006718a) main_radioblah_anim_pane_ParamLimits

0xc85e,	// (0x0006718a) main_radioblah_anim_pane

0xc86f,	// (0x0006719b) main_radioblah_info_pane_ParamLimits

0xc86f,	// (0x0006719b) main_radioblah_info_pane

0xc883,	// (0x000671af) main_radioblah_pane_t1_ParamLimits

0xc883,	// (0x000671af) main_radioblah_pane_t1

0xc89f,	// (0x000671cb) main_radioblah_pane_t2_ParamLimits

0xc89f,	// (0x000671cb) main_radioblah_pane_t2

0x0003,

0xfb00,	// (0x0006a42c) main_radioblah_pane_t_ParamLimits

0xfb00,	// (0x0006a42c) main_radioblah_pane_t

0x7ecb,	// (0x000627f7) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7ecb,	// (0x000627f7) main_radioblah_rocker_ctrl_pane

0xc8e7,	// (0x00067213) main_radioblah_info_pane_t1_ParamLimits

0xc8e7,	// (0x00067213) main_radioblah_info_pane_t1

0x7f1f,	// (0x0006284b) main_radioblah_info_pane_t2_ParamLimits

0x7f1f,	// (0x0006284b) main_radioblah_info_pane_t2

0x0003,

0xfb09,	// (0x0006a435) main_radioblah_info_pane_t_ParamLimits

0xfb09,	// (0x0006a435) main_radioblah_info_pane_t

0xe672,	// (0x00068f9e) main_radioblah_rocker_ctrl_pane_g1

0x7fcd,	// (0x000628f9) main_radioblah_rocker_ctrl_pane_g2

0x7fd5,	// (0x00062901) main_radioblah_rocker_ctrl_pane_g3

0x7fdd,	// (0x00062909) main_radioblah_rocker_ctrl_pane_g4

0x7fe5,	// (0x00062911) main_radioblah_rocker_ctrl_pane_g5

0x7fed,	// (0x00062919) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb12,	// (0x0006a43e) main_radioblah_rocker_ctrl_pane_g

0x7a20,	// (0x0006234c) main_cset_text2_pane_t1_copy1_ParamLimits

0xd984,	// (0x000682b0) cam4_image_uncrop_qvga_pane

0xd9ec,	// (0x00068318) vid4_image_uncrop_qcif_pane

0xdb71,	// (0x0006849d) cam6_image_uncrop_qvga_pane_ParamLimits

0xdb71,	// (0x0006849d) cam6_image_uncrop_qvga_pane

0xc01f,	// (0x0006694b) vid6_image_uncrop_qcif_pane_ParamLimits

0xc01f,	// (0x0006694b) vid6_image_uncrop_qcif_pane

0x0bcb,	// (0x0005b4f7) bg_popup_preview_window_pane_cp03

0xc388,	// (0x00066cb4) list_cset_text2_pane

0xc390,	// (0x00066cbc) main_cset6_text2_pane_g1

0xc398,	// (0x00066cc4) main_cset6_text2_pane_t1

0x7ff5,	// (0x00062921) list_cset_text2_pane_t1_ParamLimits

0x7ff5,	// (0x00062921) list_cset_text2_pane_t1

0x99cb,	// (0x000642f7) main_radioblah_pane_ParamLimits

0x7d3c,	// (0x00062668) main_mobtv_info_pane_t3_ParamLimits

0x7d3c,	// (0x00062668) main_mobtv_info_pane_t3

0x7eb9,	// (0x000627e5) main_radioblah_pane_g1

0x7ef3,	// (0x0006281f) main_radioblah_info_pane_g1

0x7f72,	// (0x0006289e) main_radioblah_info_pane_t3_ParamLimits

0x7f72,	// (0x0006289e) main_radioblah_info_pane_t3

0x2a07,	// (0x0005d333) highlight_cell_cale_month_pane_ParamLimits

0x2a07,	// (0x0005d333) highlight_cell_cale_month_pane

0x99d9,	// (0x00064305) main_phob_fisheye_pane

0xe97d,	// (0x000692a9) scroll_pane_cp0031_ParamLimits

0xe97d,	// (0x000692a9) scroll_pane_cp0031

0xc129,	// (0x00066a55) wait_bar_pane_cp08_ParamLimits

0x7874,	// (0x000621a0) cset_list_set_pane_copy1_ParamLimits

0xc921,	// (0x0006724d) highlight_cell_cale_month_pane_g1

0x800e,	// (0x0006293a) highlight_cell_cale_month_pane_t1

0xc929,	// (0x00067255) list_gen_pane_cp01

0x651e,	// (0x00060e4a) scroll_pane_01

0xc932,	// (0x0006725e) list_single_double_fisheye_pane

0xc93b,	// (0x00067267) list_double_fisheye_pane_g1_ParamLimits

0xc93b,	// (0x00067267) list_double_fisheye_pane_g1

0xc947,	// (0x00067273) list_double_fisheye_pane_g2_ParamLimits

0xc947,	// (0x00067273) list_double_fisheye_pane_g2

0xc95b,	// (0x00067287) list_double_fisheye_pane_g3_ParamLimits

0xc95b,	// (0x00067287) list_double_fisheye_pane_g3

0x0004,

0xfb1f,	// (0x0006a44b) list_double_fisheye_pane_g_ParamLimits

0xfb1f,	// (0x0006a44b) list_double_fisheye_pane_g

0xc984,	// (0x000672b0) list_double_fisheye_pane_t1_ParamLimits

0xc984,	// (0x000672b0) list_double_fisheye_pane_t1

0xc99f,	// (0x000672cb) list_double_fisheye_pane_t2_ParamLimits

0xc99f,	// (0x000672cb) list_double_fisheye_pane_t2

0x0001,

0xfb2a,	// (0x0006a456) list_double_fisheye_pane_t_ParamLimits

0xfb2a,	// (0x0006a456) list_double_fisheye_pane_t

0x99d9,	// (0x00064305) main_call5_pane

0x7e25,	// (0x00062751) sc_swipe_pane_ParamLimits

0x7e25,	// (0x00062751) sc_swipe_pane

0x802d,	// (0x00062959) call5_image_pane_ParamLimits

0x802d,	// (0x00062959) call5_image_pane

0x8042,	// (0x0006296e) call5_swipe_1_pane_ParamLimits

0x8042,	// (0x0006296e) call5_swipe_1_pane

0x8053,	// (0x0006297f) call5_swipe_2_pane_ParamLimits

0x8053,	// (0x0006297f) call5_swipe_2_pane

0x8078,	// (0x000629a4) popup_call5_audio_first_window_ParamLimits

0x8078,	// (0x000629a4) popup_call5_audio_first_window

0xe8a1,	// (0x000691cd) call5_swipe_1_pane_g1_ParamLimits

0xe8a1,	// (0x000691cd) call5_swipe_1_pane_g1

0xc9c1,	// (0x000672ed) call5_swipe_1_pane_g2_ParamLimits

0xc9c1,	// (0x000672ed) call5_swipe_1_pane_g2

0x0001,

0xfb2f,	// (0x0006a45b) call5_swipe_1_pane_g_ParamLimits

0xfb2f,	// (0x0006a45b) call5_swipe_1_pane_g

0xc9cd,	// (0x000672f9) call5_swipe_1_pane_t1_ParamLimits

0xc9cd,	// (0x000672f9) call5_swipe_1_pane_t1

0xe8a1,	// (0x000691cd) call5_swipe_2_pane_g1_ParamLimits

0xe8a1,	// (0x000691cd) call5_swipe_2_pane_g1

0xc9e2,	// (0x0006730e) call5_swipe_2_pane_g2_ParamLimits

0xc9e2,	// (0x0006730e) call5_swipe_2_pane_g2

0x0001,

0xfb34,	// (0x0006a460) call5_swipe_2_pane_g_ParamLimits

0xfb34,	// (0x0006a460) call5_swipe_2_pane_g

0xc9ee,	// (0x0006731a) call5_swipe_2_pane_t1_ParamLimits

0xc9ee,	// (0x0006731a) call5_swipe_2_pane_t1

0xca03,	// (0x0006732f) sc_swipe_pane_g1_ParamLimits

0xca03,	// (0x0006732f) sc_swipe_pane_g1

0xca10,	// (0x0006733c) sc_swipe_pane_g2_ParamLimits

0xca10,	// (0x0006733c) sc_swipe_pane_g2

0x0001,

0xfb39,	// (0x0006a465) sc_swipe_pane_g_ParamLimits

0xfb39,	// (0x0006a465) sc_swipe_pane_g

0xca1c,	// (0x00067348) sc_swipe_pane_t1_ParamLimits

0xca1c,	// (0x00067348) sc_swipe_pane_t1

0x99d9,	// (0x00064305) main_cmail_launcher_pane

0x8087,	// (0x000629b3) aid_size_cell_cmail_l_ParamLimits

0x8087,	// (0x000629b3) aid_size_cell_cmail_l

0x80a0,	// (0x000629cc) grid_cmail_l_pane_ParamLimits

0x80a0,	// (0x000629cc) grid_cmail_l_pane

0x80b5,	// (0x000629e1) cell_cmail_l_pane_ParamLimits

0x80b5,	// (0x000629e1) cell_cmail_l_pane

0x80d7,	// (0x00062a03) cell_cmail_l_pane_g1_ParamLimits

0x80d7,	// (0x00062a03) cell_cmail_l_pane_g1

0x80e7,	// (0x00062a13) cell_cmail_l_pane_t1_ParamLimits

0x80e7,	// (0x00062a13) cell_cmail_l_pane_t1

0x80fd,	// (0x00062a29) cell_cmail_l_pane_t2_ParamLimits

0x80fd,	// (0x00062a29) cell_cmail_l_pane_t2

0x0001,

0xfb3e,	// (0x0006a46a) cell_cmail_l_pane_t_ParamLimits

0xfb3e,	// (0x0006a46a) cell_cmail_l_pane_t

0xbc0f,	// (0x0006653b) grid_highlight_pane_cp018_ParamLimits

0xbc0f,	// (0x0006653b) grid_highlight_pane_cp018

0x0c89,	// (0x0005b5b5) main2_pane_ParamLimits

0x0c89,	// (0x0005b5b5) main2_pane

0xa21d,	// (0x00064b49) popup_sp_fs_action_menu_bg_pane_g1

0xa225,	// (0x00064b51) popup_sp_fs_action_menu_bg_pane_g2

0xa22d,	// (0x00064b59) popup_sp_fs_action_menu_bg_pane_g3

0xa235,	// (0x00064b61) popup_sp_fs_action_menu_bg_pane_g4

0xa23d,	// (0x00064b69) popup_sp_fs_action_menu_bg_pane_g5

0xa245,	// (0x00064b71) popup_sp_fs_action_menu_bg_pane_g6

0xa24d,	// (0x00064b79) popup_sp_fs_action_menu_bg_pane_g7

0xa255,	// (0x00064b81) popup_sp_fs_action_menu_bg_pane_g8

0xa25d,	// (0x00064b89) popup_sp_fs_action_menu_bg_pane_g9

0xa265,	// (0x00064b91) popup_sp_fs_action_menu_bg_pane_g10

0xa265,	// (0x00064b91) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x00069a9b) popup_sp_fs_action_menu_bg_pane_g

0x1b8a,	// (0x0005c4b6) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1b8a,	// (0x0005c4b6) list_medium_line_x2_t3_g3_g1

0x1b96,	// (0x0005c4c2) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1b96,	// (0x0005c4c2) list_medium_line_x2_t3_g3_g2

0x1ba2,	// (0x0005c4ce) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1ba2,	// (0x0005c4ce) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x00069b49) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x00069b49) list_medium_line_x2_t3_g3_g

0x1bae,	// (0x0005c4da) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1bae,	// (0x0005c4da) list_medium_line_x2_t3_g3_t1

0x1bc3,	// (0x0005c4ef) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1bc3,	// (0x0005c4ef) list_medium_line_x2_t3_g3_t2

0x1bd5,	// (0x0005c501) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1bd5,	// (0x0005c501) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x00069b50) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x00069b50) list_medium_line_x2_t3_g3_t

0x1b8a,	// (0x0005c4b6) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1b8a,	// (0x0005c4b6) list_medium_line_x2_t3_g2_g1

0x1ba2,	// (0x0005c4ce) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1ba2,	// (0x0005c4ce) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x00069b57) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x00069b57) list_medium_line_x2_t3_g2_g

0x1bea,	// (0x0005c516) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1bea,	// (0x0005c516) list_medium_line_x2_t3_g2_t1

0x1c00,	// (0x0005c52c) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1c00,	// (0x0005c52c) list_medium_line_x2_t3_g2_t2

0x1bd5,	// (0x0005c501) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1bd5,	// (0x0005c501) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x00069b5c) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x00069b5c) list_medium_line_x2_t3_g2_t

0x1b8a,	// (0x0005c4b6) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1b8a,	// (0x0005c4b6) list_medium_line_x2_t4_g4_g1

0x1c12,	// (0x0005c53e) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1c12,	// (0x0005c53e) list_medium_line_x2_t4_g4_g2

0x1b96,	// (0x0005c4c2) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1b96,	// (0x0005c4c2) list_medium_line_x2_t4_g4_g3

0x1c1e,	// (0x0005c54a) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1c1e,	// (0x0005c54a) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x00069b63) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x00069b63) list_medium_line_x2_t4_g4_g

0x1c2a,	// (0x0005c556) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1c2a,	// (0x0005c556) list_medium_line_x2_t4_g4_t1

0x1c44,	// (0x0005c570) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1c44,	// (0x0005c570) list_medium_line_x2_t4_g4_t2

0x1c59,	// (0x0005c585) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1c59,	// (0x0005c585) list_medium_line_x2_t4_g4_t3

0x1c6e,	// (0x0005c59a) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1c6e,	// (0x0005c59a) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x00069b6c) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x00069b6c) list_medium_line_x2_t4_g4_t

0x1b8a,	// (0x0005c4b6) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1b8a,	// (0x0005c4b6) list_medium_line_x2_t2_g4_g1

0x1c12,	// (0x0005c53e) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1c12,	// (0x0005c53e) list_medium_line_x2_t2_g4_g2

0x1b96,	// (0x0005c4c2) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1b96,	// (0x0005c4c2) list_medium_line_x2_t2_g4_g3

0x1ba2,	// (0x0005c4ce) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1ba2,	// (0x0005c4ce) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x00069bd3) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x00069bd3) list_medium_line_x2_t2_g4_g

0x2a2d,	// (0x0005d359) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2a2d,	// (0x0005d359) list_medium_line_x2_t2_g4_t1

0x1bd5,	// (0x0005c501) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1bd5,	// (0x0005c501) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x00069bdc) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x00069bdc) list_medium_line_x2_t2_g4_t

0x1b8a,	// (0x0005c4b6) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1b8a,	// (0x0005c4b6) list_medium_line_x2_t2_g3_g1

0x1b96,	// (0x0005c4c2) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1b96,	// (0x0005c4c2) list_medium_line_x2_t2_g3_g2

0x1ba2,	// (0x0005c4ce) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1ba2,	// (0x0005c4ce) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x00069b49) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x00069b49) list_medium_line_x2_t2_g3_g

0x2a42,	// (0x0005d36e) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2a42,	// (0x0005d36e) list_medium_line_x2_t2_g3_t1

0x1bd5,	// (0x0005c501) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1bd5,	// (0x0005c501) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x00069be1) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x00069be1) list_medium_line_x2_t2_g3_t

0x2b8e,	// (0x0005d4ba) main_sp_fs_list_pane_ParamLimits

0x2b8e,	// (0x0005d4ba) main_sp_fs_list_pane

0x2b9b,	// (0x0005d4c7) sp_fs_scroll_pane_ParamLimits

0x2b9b,	// (0x0005d4c7) sp_fs_scroll_pane

0x2ba8,	// (0x0005d4d4) list_medium_line_x2_t3_t1

0x2bb8,	// (0x0005d4e4) list_medium_line_x2_t3_t2

0x2bc6,	// (0x0005d4f2) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x00069c2c) list_medium_line_x2_t3_t

0x2bd4,	// (0x0005d500) list_medium_line_x3_t4_t1

0x2be4,	// (0x0005d510) list_medium_line_x3_t4_t2

0x2bf2,	// (0x0005d51e) list_medium_line_x3_t4_t3

0x2c00,	// (0x0005d52c) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x00069c33) list_medium_line_x3_t4_t

0x2c0e,	// (0x0005d53a) list_medium_line_x4_t5_t1

0x2c1e,	// (0x0005d54a) list_medium_line_x4_t5_t2

0x2bf2,	// (0x0005d51e) list_medium_line_x4_t5_t3

0x2c2c,	// (0x0005d558) list_medium_line_x4_t5_t4

0x2c00,	// (0x0005d52c) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x00069c3c) list_medium_line_x4_t5_t

0x1b8a,	// (0x0005c4b6) list_medium_line_t4_g4_g1_ParamLimits

0x1b8a,	// (0x0005c4b6) list_medium_line_t4_g4_g1

0x1c1e,	// (0x0005c54a) list_medium_line_t4_g4_g2_ParamLimits

0x1c1e,	// (0x0005c54a) list_medium_line_t4_g4_g2

0x2c3a,	// (0x0005d566) list_medium_line_t4_g4_g3_ParamLimits

0x2c3a,	// (0x0005d566) list_medium_line_t4_g4_g3

0x1ba2,	// (0x0005c4ce) list_medium_line_t4_g4_g4_ParamLimits

0x1ba2,	// (0x0005c4ce) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x00069c47) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x00069c47) list_medium_line_t4_g4_g

0x2c46,	// (0x0005d572) list_medium_line_t4_g4_t1_ParamLimits

0x2c46,	// (0x0005d572) list_medium_line_t4_g4_t1

0x2c5b,	// (0x0005d587) list_medium_line_t4_g4_t2_ParamLimits

0x2c5b,	// (0x0005d587) list_medium_line_t4_g4_t2

0x2c71,	// (0x0005d59d) list_medium_line_t4_g4_t3_ParamLimits

0x2c71,	// (0x0005d59d) list_medium_line_t4_g4_t3

0x2c87,	// (0x0005d5b3) list_medium_line_t4_g4_t4_ParamLimits

0x2c87,	// (0x0005d5b3) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x00069c50) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x00069c50) list_medium_line_t4_g4_t

0x2d5d,	// (0x0005d689) chi_dic_find_pane_g1

0x3c93,	// (0x0005e5bf) main_tport_pane

0x69fa,	// (0x00061326) list_medium_line_plain_t1

0x6aaa,	// (0x000613d6) list_medium_line_t2_g2_g1_ParamLimits

0x6aaa,	// (0x000613d6) list_medium_line_t2_g2_g1

0x6ab6,	// (0x000613e2) list_medium_line_t2_g2_g2_ParamLimits

0x6ab6,	// (0x000613e2) list_medium_line_t2_g2_g2

0x0001,

0xf87b,	// (0x0006a1a7) list_medium_line_t2_g2_g_ParamLimits

0xf87b,	// (0x0006a1a7) list_medium_line_t2_g2_g

0x6ac2,	// (0x000613ee) list_medium_line_t2_g2_t1_ParamLimits

0x6ac2,	// (0x000613ee) list_medium_line_t2_g2_t1

0x6adc,	// (0x00061408) list_medium_line_t2_g2_t2_ParamLimits

0x6adc,	// (0x00061408) list_medium_line_t2_g2_t2

0x0001,

0xf880,	// (0x0006a1ac) list_medium_line_t2_g2_t_ParamLimits

0xf880,	// (0x0006a1ac) list_medium_line_t2_g2_t

0xbdc5,	// (0x000666f1) aid_sp_fs_list_icon_a_sm

0xbdcd,	// (0x000666f9) aid_sp_fs_list_icon_d

0xbdd5,	// (0x00066701) aid_sp_fs_text_primary

0xbdde,	// (0x0006670a) aid_sp_fs_text_secondary

0xbde7,	// (0x00066713) list_medium_line

0xbde7,	// (0x00066713) list_medium_line_g2

0xbde7,	// (0x00066713) list_medium_line_g3

0xbde7,	// (0x00066713) list_medium_line_plain

0xbde7,	// (0x00066713) list_medium_line_plain_t2

0xbde7,	// (0x00066713) list_medium_line_plain_t3

0xbde7,	// (0x00066713) list_medium_line_right_icon

0xbde7,	// (0x00066713) list_medium_line_right_iconx2

0xbde7,	// (0x00066713) list_medium_line_t2

0xbde7,	// (0x00066713) list_medium_line_t2_g2

0xbde7,	// (0x00066713) list_medium_line_t2_g3

0xbde7,	// (0x00066713) list_medium_line_t2_right_icon

0xbde7,	// (0x00066713) list_medium_line_t2_right_iconx2

0xbde7,	// (0x00066713) list_medium_line_t3

0xbde7,	// (0x00066713) list_medium_line_t3_g2

0xbde7,	// (0x00066713) list_medium_line_t3_g3

0xbde7,	// (0x00066713) list_medium_line_t3_right_iconx2

0xbdf0,	// (0x0006671c) list_medium_line_t4_g4

0xbde7,	// (0x00066713) list_medium_line_x2

0xbde7,	// (0x00066713) list_medium_line_x2_t2_g2

0xbde7,	// (0x00066713) list_medium_line_x2_t2_g3

0xbde7,	// (0x00066713) list_medium_line_x2_t2_g4

0xbde7,	// (0x00066713) list_medium_line_x2_t3

0xbde7,	// (0x00066713) list_medium_line_x2_t3_g2

0xbde7,	// (0x00066713) list_medium_line_x2_t3_g3

0xbde7,	// (0x00066713) list_medium_line_x2_t3_g4

0xbde7,	// (0x00066713) list_medium_line_x2_t4_g2

0xbde7,	// (0x00066713) list_medium_line_x2_t4_g4

0xbdf9,	// (0x00066725) list_medium_line_x3

0xbdf9,	// (0x00066725) list_medium_line_x3_t4

0xbdf9,	// (0x00066725) list_medium_line_x3_t4_g4

0xbdf0,	// (0x0006671c) list_medium_line_x4_t4

0xbdf0,	// (0x0006671c) list_medium_line_x4_t4_g7

0xbdf0,	// (0x0006671c) list_medium_line_x4_t5

0x731f,	// (0x00061c4b) list_single_fs_dyc_pane_ParamLimits

0x731f,	// (0x00061c4b) list_single_fs_dyc_pane

0x1b8a,	// (0x0005c4b6) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1b8a,	// (0x0005c4b6) list_medium_line_x4_t4_g7_g1

0xc2d4,	// (0x00066c00) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc2d4,	// (0x00066c00) list_medium_line_x4_t4_g7_g2

0xc2e0,	// (0x00066c0c) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc2e0,	// (0x00066c0c) list_medium_line_x4_t4_g7_g3

0xc2ef,	// (0x00066c1b) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc2ef,	// (0x00066c1b) list_medium_line_x4_t4_g7_g4

0xc2fb,	// (0x00066c27) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc2fb,	// (0x00066c27) list_medium_line_x4_t4_g7_g5

0xc30a,	// (0x00066c36) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc30a,	// (0x00066c36) list_medium_line_x4_t4_g7_g6

0xc319,	// (0x00066c45) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc319,	// (0x00066c45) list_medium_line_x4_t4_g7_g7

0x0006,

0xfa46,	// (0x0006a372) list_medium_line_x4_t4_g7_g_ParamLimits

0xfa46,	// (0x0006a372) list_medium_line_x4_t4_g7_g

0xc325,	// (0x00066c51) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc325,	// (0x00066c51) list_medium_line_x4_t4_g7_t1

0xc33a,	// (0x00066c66) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc33a,	// (0x00066c66) list_medium_line_x4_t4_g7_t2

0xc34f,	// (0x00066c7b) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc34f,	// (0x00066c7b) list_medium_line_x4_t4_g7_t3

0xc364,	// (0x00066c90) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc364,	// (0x00066c90) list_medium_line_x4_t4_g7_t4

0xc376,	// (0x00066ca2) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc376,	// (0x00066ca2) list_medium_line_x4_t4_g7_t5

0x0004,

0xfa55,	// (0x0006a381) list_medium_line_x4_t4_g7_t_ParamLimits

0xfa55,	// (0x0006a381) list_medium_line_x4_t4_g7_t

0x7a03,	// (0x0006232f) list_single_dyc_row_pane_ParamLimits

0x7a03,	// (0x0006232f) list_single_dyc_row_pane

0x801c,	// (0x00062948) call5_gesture_pane_ParamLimits

0x801c,	// (0x00062948) call5_gesture_pane

0x8064,	// (0x00062990) call5_windows_pane_ParamLimits

0x8064,	// (0x00062990) call5_windows_pane

0x8115,	// (0x00062a41) call5_swipe_1_pane_cp_ParamLimits

0x8115,	// (0x00062a41) call5_swipe_1_pane_cp

0x8121,	// (0x00062a4d) call5_swipe_2_pane_cp_ParamLimits

0x8121,	// (0x00062a4d) call5_swipe_2_pane_cp

0xa389,	// (0x00064cb5) call5_image_pane_cp

0x812d,	// (0x00062a59) popup_call5_audio_first_window_cp_ParamLimits

0x812d,	// (0x00062a59) popup_call5_audio_first_window_cp

0xca03,	// (0x0006732f) call5_swipe_1_pane_g1_cp_ParamLimits

0xca03,	// (0x0006732f) call5_swipe_1_pane_g1_cp

0xca31,	// (0x0006735d) call5_swipe_1_pane_g2_cp

0xca1c,	// (0x00067348) call5_swipe_1_pane_t1_cp_ParamLimits

0xca1c,	// (0x00067348) call5_swipe_1_pane_t1_cp

0xca03,	// (0x0006732f) call5_swipe_2_pane_g1_cp_ParamLimits

0xca03,	// (0x0006732f) call5_swipe_2_pane_g1_cp

0xca39,	// (0x00067365) call5_swipe_2_pane_g2_cp

0xca41,	// (0x0006736d) call5_swipe_2_pane_t1_cp_ParamLimits

0xca41,	// (0x0006736d) call5_swipe_2_pane_t1_cp

0xbc0f,	// (0x0006653b) main_sp_fs_email_pane

0xca56,	// (0x00067382) main_sp_fs_listscroll_pane_te

0x8139,	// (0x00062a65) popup_sp_fs_action_menu_pane_ParamLimits

0x8139,	// (0x00062a65) popup_sp_fs_action_menu_pane

0xe672,	// (0x00068f9e) bg_sp_fs_ctrlbar_pane_g1

0xebfe,	// (0x0006952a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xec10,	// (0x0006953c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xec07,	// (0x00069533) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe672,	// (0x00068f9e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0x081a,	// (0x0005b146) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe45f,	// (0x00068d8b) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe45f,	// (0x00068d8b) bg_sp_fs_ctrlbar_ddmenu_pane

0xca5f,	// (0x0006738b) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xca5f,	// (0x0006738b) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xca6b,	// (0x00067397) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xca6b,	// (0x00067397) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfb43,	// (0x0006a46f) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfb43,	// (0x0006a46f) main_sp_fs_ctrlbar_ddmenu_pane_g

0xca77,	// (0x000673a3) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xca77,	// (0x000673a3) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x816b,	// (0x00062a97) list_medium_line_t2_right_icon_g1

0x8173,	// (0x00062a9f) list_medium_line_t2_right_icon_t1

0x8183,	// (0x00062aaf) list_medium_line_t2_right_icon_t2

0x0001,

0xfb48,	// (0x0006a474) list_medium_line_t2_right_icon_t

0xe260,	// (0x00068b8c) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe260,	// (0x00068b8c) bg_sp_fs_ctrlbar_pane

0x81d7,	// (0x00062b03) main_sp_fs_ctrlbar_button_pane_cp01

0x81df,	// (0x00062b0b) main_sp_fs_ctrlbar_ddmenu_pane

0xcac9,	// (0x000673f5) main_sp_fs_ctrlbar_pane_g1

0xcad5,	// (0x00067401) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfb4d,	// (0x0006a479) main_sp_fs_ctrlbar_pane_g

0x821b,	// (0x00062b47) main_sp_fs_ctrlbar_pane_t1

0x8264,	// (0x00062b90) main_sp_fs_ctrlbar_pane

0x8285,	// (0x00062bb1) main_sp_fs_listscroll_pane_te_cp01

0x82a5,	// (0x00062bd1) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x82a5,	// (0x00062bd1) popup_sp_fs_action_menu_pane_cp01

0xbc0f,	// (0x0006653b) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xbc0f,	// (0x0006653b) bg_sp_fs_highlight_list_pane_cp01

0x82c9,	// (0x00062bf5) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x82c9,	// (0x00062bf5) sp_fs_action_menu_list_gene_pane_g1

0xcafc,	// (0x00067428) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xcafc,	// (0x00067428) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfb5b,	// (0x0006a487) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfb5b,	// (0x0006a487) sp_fs_action_menu_list_gene_pane_g

0x82d8,	// (0x00062c04) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x82d8,	// (0x00062c04) sp_fs_action_menu_list_gene_pane_t1

0x82f0,	// (0x00062c1c) sp_fs_action_menu_list_gene_pane_ParamLimits

0x82f0,	// (0x00062c1c) sp_fs_action_menu_list_gene_pane

0xcb09,	// (0x00067435) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xcb09,	// (0x00067435) popup_sp_fs_action_menu_bg_pane

0x830d,	// (0x00062c39) sp_fs_action_menu_list_pane_ParamLimits

0x830d,	// (0x00062c39) sp_fs_action_menu_list_pane

0xcb17,	// (0x00067443) sp_fs_scroll_pane_cp01_ParamLimits

0xcb17,	// (0x00067443) sp_fs_scroll_pane_cp01

0x832b,	// (0x00062c57) list_medium_line_plain_t2_t1

0x833b,	// (0x00062c67) list_medium_line_plain_t2_t2

0x0001,

0xfb60,	// (0x0006a48c) list_medium_line_plain_t2_t

0x8349,	// (0x00062c75) list_medium_line_plain_t3_t1

0x8359,	// (0x00062c85) list_medium_line_plain_t3_t2

0x8367,	// (0x00062c93) list_medium_line_plain_t3_t3

0x0002,

0xfb65,	// (0x0006a491) list_medium_line_plain_t3_t

0x1b8a,	// (0x0005c4b6) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1b8a,	// (0x0005c4b6) list_medium_line_x2_t2_g2_g1

0x1ba2,	// (0x0005c4ce) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1ba2,	// (0x0005c4ce) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x00069b57) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x00069b57) list_medium_line_x2_t2_g2_g

0x2c46,	// (0x0005d572) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2c46,	// (0x0005d572) list_medium_line_x2_t2_g2_t1

0x1bd5,	// (0x0005c501) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1bd5,	// (0x0005c501) list_medium_line_x2_t2_g2_t2

0x0001,

0xfb6c,	// (0x0006a498) list_medium_line_x2_t2_g2_t_ParamLimits

0xfb6c,	// (0x0006a498) list_medium_line_x2_t2_g2_t

0x1b8a,	// (0x0005c4b6) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1b8a,	// (0x0005c4b6) list_medium_line_x2_t4_g2_g1

0xcb3d,	// (0x00067469) list_medium_line_x2_t4_g2_g2_ParamLimits

0xcb3d,	// (0x00067469) list_medium_line_x2_t4_g2_g2

0x0001,

0xfb71,	// (0x0006a49d) list_medium_line_x2_t4_g2_g_ParamLimits

0xfb71,	// (0x0006a49d) list_medium_line_x2_t4_g2_g

0x8375,	// (0x00062ca1) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8375,	// (0x00062ca1) list_medium_line_x2_t4_g2_t1

0x838f,	// (0x00062cbb) list_medium_line_x2_t4_g2_t2_ParamLimits

0x838f,	// (0x00062cbb) list_medium_line_x2_t4_g2_t2

0x83a4,	// (0x00062cd0) list_medium_line_x2_t4_g2_t3_ParamLimits

0x83a4,	// (0x00062cd0) list_medium_line_x2_t4_g2_t3

0x1bd5,	// (0x0005c501) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1bd5,	// (0x0005c501) list_medium_line_x2_t4_g2_t4

0x0003,

0xfb76,	// (0x0006a4a2) list_medium_line_x2_t4_g2_t_ParamLimits

0xfb76,	// (0x0006a4a2) list_medium_line_x2_t4_g2_t

0x83b9,	// (0x00062ce5) list_medium_line_t3_right_iconx2_g1

0x816b,	// (0x00062a97) list_medium_line_t3_right_iconx2_g2

0x83c1,	// (0x00062ced) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfb7f,	// (0x0006a4ab) list_medium_line_t3_right_iconx2_g

0x83c9,	// (0x00062cf5) list_medium_line_t3_right_iconx2_t1

0x83d9,	// (0x00062d05) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfb86,	// (0x0006a4b2) list_medium_line_t3_right_iconx2_t

0x1b8a,	// (0x0005c4b6) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1b8a,	// (0x0005c4b6) list_medium_line_x3_t4_g4_g1

0x1b96,	// (0x0005c4c2) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1b96,	// (0x0005c4c2) list_medium_line_x3_t4_g4_g2

0x1c1e,	// (0x0005c54a) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1c1e,	// (0x0005c54a) list_medium_line_x3_t4_g4_g3

0xcb4f,	// (0x0006747b) list_medium_line_x3_t4_g4_g4_ParamLimits

0xcb4f,	// (0x0006747b) list_medium_line_x3_t4_g4_g4

0x0003,

0xfb8b,	// (0x0006a4b7) list_medium_line_x3_t4_g4_g_ParamLimits

0xfb8b,	// (0x0006a4b7) list_medium_line_x3_t4_g4_g

0x83e7,	// (0x00062d13) list_medium_line_x3_t4_g4_t1_ParamLimits

0x83e7,	// (0x00062d13) list_medium_line_x3_t4_g4_t1

0x83fe,	// (0x00062d2a) list_medium_line_x3_t4_g4_t2_ParamLimits

0x83fe,	// (0x00062d2a) list_medium_line_x3_t4_g4_t2

0xcb5b,	// (0x00067487) list_medium_line_x3_t4_g4_t3_ParamLimits

0xcb5b,	// (0x00067487) list_medium_line_x3_t4_g4_t3

0xcb70,	// (0x0006749c) list_medium_line_x3_t4_g4_t4_ParamLimits

0xcb70,	// (0x0006749c) list_medium_line_x3_t4_g4_t4

0x0003,

0xfb94,	// (0x0006a4c0) list_medium_line_x3_t4_g4_t_ParamLimits

0xfb94,	// (0x0006a4c0) list_medium_line_x3_t4_g4_t

0x8413,	// (0x00062d3f) list_single_dyc_row_text_pane_t1_ParamLimits

0x8413,	// (0x00062d3f) list_single_dyc_row_text_pane_t1

0x844a,	// (0x00062d76) list_single_dyc_row_text_pane_t2_ParamLimits

0x844a,	// (0x00062d76) list_single_dyc_row_text_pane_t2

0xcb8d,	// (0x000674b9) list_single_dyc_row_text_pane_t3_ParamLimits

0xcb8d,	// (0x000674b9) list_single_dyc_row_text_pane_t3

0x0005,

0xfb9d,	// (0x0006a4c9) list_single_dyc_row_text_pane_t_ParamLimits

0xfb9d,	// (0x0006a4c9) list_single_dyc_row_text_pane_t

0xcbb1,	// (0x000674dd) list_single_dyc_row_pane_g1_ParamLimits

0xcbb1,	// (0x000674dd) list_single_dyc_row_pane_g1

0xcbbd,	// (0x000674e9) list_single_dyc_row_pane_g2_ParamLimits

0xcbbd,	// (0x000674e9) list_single_dyc_row_pane_g2

0xcbc9,	// (0x000674f5) list_single_dyc_row_pane_g3_ParamLimits

0xcbc9,	// (0x000674f5) list_single_dyc_row_pane_g3

0xcbd5,	// (0x00067501) list_single_dyc_row_pane_g4_ParamLimits

0xcbd5,	// (0x00067501) list_single_dyc_row_pane_g4

0x0003,

0xfbaa,	// (0x0006a4d6) list_single_dyc_row_pane_g_ParamLimits

0xfbaa,	// (0x0006a4d6) list_single_dyc_row_pane_g

0xcbe1,	// (0x0006750d) list_single_dyc_row_text_pane_ParamLimits

0xcbe1,	// (0x0006750d) list_single_dyc_row_text_pane

0x0bcb,	// (0x0005b4f7) bg_sp_fs_scroll_pane

0xcc00,	// (0x0006752c) thumb_sp_fs_scroll_pane

0x6aaa,	// (0x000613d6) list_medium_line_g1_ParamLimits

0x6aaa,	// (0x000613d6) list_medium_line_g1

0x856d,	// (0x00062e99) list_medium_line_t1_ParamLimits

0x856d,	// (0x00062e99) list_medium_line_t1

0x1b8a,	// (0x0005c4b6) list_medium_line_x2_g1_ParamLimits

0x1b8a,	// (0x0005c4b6) list_medium_line_x2_g1

0x1b96,	// (0x0005c4c2) list_medium_line_x2_g2_ParamLimits

0x1b96,	// (0x0005c4c2) list_medium_line_x2_g2

0x0001,

0xfbb3,	// (0x0006a4df) list_medium_line_x2_g_ParamLimits

0xfbb3,	// (0x0006a4df) list_medium_line_x2_g

0xcc09,	// (0x00067535) list_medium_line_x2_t1_ParamLimits

0xcc09,	// (0x00067535) list_medium_line_x2_t1

0x1b8a,	// (0x0005c4b6) list_medium_line_x3_g1_ParamLimits

0x1b8a,	// (0x0005c4b6) list_medium_line_x3_g1

0x1b96,	// (0x0005c4c2) list_medium_line_x3_g2_ParamLimits

0x1b96,	// (0x0005c4c2) list_medium_line_x3_g2

0x0001,

0xfbb3,	// (0x0006a4df) list_medium_line_x3_g_ParamLimits

0xfbb3,	// (0x0006a4df) list_medium_line_x3_g

0xcc09,	// (0x00067535) list_medium_line_x3_t1_ParamLimits

0xcc09,	// (0x00067535) list_medium_line_x3_t1

0xcc1f,	// (0x0006754b) thumb_sp_fs_scroll_pane_g1

0xcc28,	// (0x00067554) thumb_sp_fs_scroll_pane_g2

0xcc31,	// (0x0006755d) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfbb8,	// (0x0006a4e4) thumb_sp_fs_scroll_pane_g

0xcc1f,	// (0x0006754b) bg_sp_fs_scroll_pane_g1

0xcc28,	// (0x00067554) bg_sp_fs_scroll_pane_g2

0xcc31,	// (0x0006755d) bg_sp_fs_scroll_pane_g3

0x0002,

0xfbb8,	// (0x0006a4e4) bg_sp_fs_scroll_pane_g

0x1b8a,	// (0x0005c4b6) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1b8a,	// (0x0005c4b6) list_medium_line_x2_t3_g4_g1

0x1c12,	// (0x0005c53e) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1c12,	// (0x0005c53e) list_medium_line_x2_t3_g4_g2

0x1b96,	// (0x0005c4c2) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1b96,	// (0x0005c4c2) list_medium_line_x2_t3_g4_g3

0x1ba2,	// (0x0005c4ce) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1ba2,	// (0x0005c4ce) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x00069bd3) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x00069bd3) list_medium_line_x2_t3_g4_g

0x8582,	// (0x00062eae) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8582,	// (0x00062eae) list_medium_line_x2_t3_g4_t1

0x8598,	// (0x00062ec4) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8598,	// (0x00062ec4) list_medium_line_x2_t3_g4_t2

0x1bd5,	// (0x0005c501) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1bd5,	// (0x0005c501) list_medium_line_x2_t3_g4_t3

0x0002,

0xfbbf,	// (0x0006a4eb) list_medium_line_x2_t3_g4_t_ParamLimits

0xfbbf,	// (0x0006a4eb) list_medium_line_x2_t3_g4_t

0x6aaa,	// (0x000613d6) list_medium_line_g2_g1_ParamLimits

0x6aaa,	// (0x000613d6) list_medium_line_g2_g1

0x6ab6,	// (0x000613e2) list_medium_line_g2_g2_ParamLimits

0x6ab6,	// (0x000613e2) list_medium_line_g2_g2

0x0001,

0xf87b,	// (0x0006a1a7) list_medium_line_g2_g_ParamLimits

0xf87b,	// (0x0006a1a7) list_medium_line_g2_g

0x85b1,	// (0x00062edd) list_medium_line_g2_t1_ParamLimits

0x85b1,	// (0x00062edd) list_medium_line_g2_t1

0x6aaa,	// (0x000613d6) list_medium_line_t3_g2_g1_ParamLimits

0x6aaa,	// (0x000613d6) list_medium_line_t3_g2_g1

0x6ab6,	// (0x000613e2) list_medium_line_t3_g2_g2_ParamLimits

0x6ab6,	// (0x000613e2) list_medium_line_t3_g2_g2

0x0001,

0xf87b,	// (0x0006a1a7) list_medium_line_t3_g2_g_ParamLimits

0xf87b,	// (0x0006a1a7) list_medium_line_t3_g2_g

0x85c6,	// (0x00062ef2) list_medium_line_t3_g2_t1_ParamLimits

0x85c6,	// (0x00062ef2) list_medium_line_t3_g2_t1

0x85dd,	// (0x00062f09) list_medium_line_t3_g2_t2_ParamLimits

0x85dd,	// (0x00062f09) list_medium_line_t3_g2_t2

0x85f2,	// (0x00062f1e) list_medium_line_t3_g2_t3_ParamLimits

0x85f2,	// (0x00062f1e) list_medium_line_t3_g2_t3

0x0002,

0xfbc6,	// (0x0006a4f2) list_medium_line_t3_g2_t_ParamLimits

0xfbc6,	// (0x0006a4f2) list_medium_line_t3_g2_t

0x816b,	// (0x00062a97) list_medium_line_right_icon_g1

0x8607,	// (0x00062f33) list_medium_line_right_icon_t1

0x6aaa,	// (0x000613d6) list_medium_line_t2_g1_ParamLimits

0x6aaa,	// (0x000613d6) list_medium_line_t2_g1

0x8615,	// (0x00062f41) list_medium_line_t2_t1_ParamLimits

0x8615,	// (0x00062f41) list_medium_line_t2_t1

0x862c,	// (0x00062f58) list_medium_line_t2_t2_ParamLimits

0x862c,	// (0x00062f58) list_medium_line_t2_t2

0x0001,

0xfbcd,	// (0x0006a4f9) list_medium_line_t2_t_ParamLimits

0xfbcd,	// (0x0006a4f9) list_medium_line_t2_t

0x6aaa,	// (0x000613d6) list_medium_line_t3_g1_ParamLimits

0x6aaa,	// (0x000613d6) list_medium_line_t3_g1

0x863e,	// (0x00062f6a) list_medium_line_t3_t1_ParamLimits

0x863e,	// (0x00062f6a) list_medium_line_t3_t1

0x8655,	// (0x00062f81) list_medium_line_t3_t2_ParamLimits

0x8655,	// (0x00062f81) list_medium_line_t3_t2

0x866a,	// (0x00062f96) list_medium_line_t3_t3_ParamLimits

0x866a,	// (0x00062f96) list_medium_line_t3_t3

0x0002,

0xfbd2,	// (0x0006a4fe) list_medium_line_t3_t_ParamLimits

0xfbd2,	// (0x0006a4fe) list_medium_line_t3_t

0x6aaa,	// (0x000613d6) list_medium_line_g3_g1_ParamLimits

0x6aaa,	// (0x000613d6) list_medium_line_g3_g1

0x867c,	// (0x00062fa8) list_medium_line_g3_g2_ParamLimits

0x867c,	// (0x00062fa8) list_medium_line_g3_g2

0x6ab6,	// (0x000613e2) list_medium_line_g3_g3_ParamLimits

0x6ab6,	// (0x000613e2) list_medium_line_g3_g3

0x0002,

0xfbd9,	// (0x0006a505) list_medium_line_g3_g_ParamLimits

0xfbd9,	// (0x0006a505) list_medium_line_g3_g

0x8688,	// (0x00062fb4) list_medium_line_g3_t1_ParamLimits

0x8688,	// (0x00062fb4) list_medium_line_g3_t1

0x6aaa,	// (0x000613d6) list_medium_line_t2_g3_g1_ParamLimits

0x6aaa,	// (0x000613d6) list_medium_line_t2_g3_g1

0x867c,	// (0x00062fa8) list_medium_line_t2_g3_g2_ParamLimits

0x867c,	// (0x00062fa8) list_medium_line_t2_g3_g2

0x6ab6,	// (0x000613e2) list_medium_line_t2_g3_g3_ParamLimits

0x6ab6,	// (0x000613e2) list_medium_line_t2_g3_g3

0x0002,

0xfbd9,	// (0x0006a505) list_medium_line_t2_g3_g_ParamLimits

0xfbd9,	// (0x0006a505) list_medium_line_t2_g3_g

0x869d,	// (0x00062fc9) list_medium_line_t2_g3_t1_ParamLimits

0x869d,	// (0x00062fc9) list_medium_line_t2_g3_t1

0x86b7,	// (0x00062fe3) list_medium_line_t2_g3_t2_ParamLimits

0x86b7,	// (0x00062fe3) list_medium_line_t2_g3_t2

0x0001,

0xfbe0,	// (0x0006a50c) list_medium_line_t2_g3_t_ParamLimits

0xfbe0,	// (0x0006a50c) list_medium_line_t2_g3_t

0x6aaa,	// (0x000613d6) list_medium_line_t3_g3_g1_ParamLimits

0x6aaa,	// (0x000613d6) list_medium_line_t3_g3_g1

0x867c,	// (0x00062fa8) list_medium_line_t3_g3_g2_ParamLimits

0x867c,	// (0x00062fa8) list_medium_line_t3_g3_g2

0x6ab6,	// (0x000613e2) list_medium_line_t3_g3_g3_ParamLimits

0x6ab6,	// (0x000613e2) list_medium_line_t3_g3_g3

0x0002,

0xfbd9,	// (0x0006a505) list_medium_line_t3_g3_g_ParamLimits

0xfbd9,	// (0x0006a505) list_medium_line_t3_g3_g

0x86cc,	// (0x00062ff8) list_medium_line_t3_g3_t1_ParamLimits

0x86cc,	// (0x00062ff8) list_medium_line_t3_g3_t1

0x86e0,	// (0x0006300c) list_medium_line_t3_g3_t2_ParamLimits

0x86e0,	// (0x0006300c) list_medium_line_t3_g3_t2

0x86f2,	// (0x0006301e) list_medium_line_t3_g3_t3_ParamLimits

0x86f2,	// (0x0006301e) list_medium_line_t3_g3_t3

0x0002,

0xfbe5,	// (0x0006a511) list_medium_line_t3_g3_t_ParamLimits

0xfbe5,	// (0x0006a511) list_medium_line_t3_g3_t

0x83b9,	// (0x00062ce5) list_medium_line_right_iconx2_g1

0x816b,	// (0x00062a97) list_medium_line_right_iconx2_g2

0x0001,

0xfbec,	// (0x0006a518) list_medium_line_right_iconx2_g

0x8704,	// (0x00063030) list_medium_line_right_iconx2_t1

0x83b9,	// (0x00062ce5) list_medium_line_t2_right_iconx2_g1

0x816b,	// (0x00062a97) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfbec,	// (0x0006a518) list_medium_line_t2_right_iconx2_g

0x8712,	// (0x0006303e) list_medium_line_t2_right_iconx2_t1

0x8722,	// (0x0006304e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbf1,	// (0x0006a51d) list_medium_line_t2_right_iconx2_t

0xcc3a,	// (0x00067566) list_medium_line_x4_t4_t1

0x8730,	// (0x0006305c) list_medium_line_x4_t4_t2

0x8740,	// (0x0006306c) list_medium_line_x4_t4_t3

0x8750,	// (0x0006307c) list_medium_line_x4_t4_t4

0x0003,

0xfbf6,	// (0x0006a522) list_medium_line_x4_t4_t

0x8799,	// (0x000630c5) tport_appsw_pane_ParamLimits

0x8799,	// (0x000630c5) tport_appsw_pane

0x87aa,	// (0x000630d6) tport_contact_pane_ParamLimits

0x87aa,	// (0x000630d6) tport_contact_pane

0x87be,	// (0x000630ea) tport_listscroll_pane_ParamLimits

0x87be,	// (0x000630ea) tport_listscroll_pane

0x87d6,	// (0x00063102) cell_tport_appsw_pane_ParamLimits

0x87d6,	// (0x00063102) cell_tport_appsw_pane

0xf019,	// (0x00069945) tport_appsw_pane_g1_ParamLimits

0xf019,	// (0x00069945) tport_appsw_pane_g1

0xcc48,	// (0x00067574) tport_contact_pane_g1

0xcc51,	// (0x0006757d) tport_contact_pane_t1

0xcc5f,	// (0x0006758b) tport_contact_pane_t2

0x0001,

0xfbff,	// (0x0006a52b) tport_contact_pane_t

0xcc6d,	// (0x00067599) list_tport_pane

0xa277,	// (0x00064ba3) scroll_pane_cp_030

0xcc7e,	// (0x000675aa) cell_tport_appsw_pane_g1

0xcc8e,	// (0x000675ba) cell_tport_appsw_pane_t1

0xcc9c,	// (0x000675c8) grid_highlight_pane_cp019

0x880c,	// (0x00063138) list_tport_double_graphic_pane_ParamLimits

0x880c,	// (0x00063138) list_tport_double_graphic_pane

0xbc0f,	// (0x0006653b) list_highlight_pane_cp023_ParamLimits

0xbc0f,	// (0x0006653b) list_highlight_pane_cp023

0x8819,	// (0x00063145) list_tport_double_graphic_pane_g1_ParamLimits

0x8819,	// (0x00063145) list_tport_double_graphic_pane_g1

0x8826,	// (0x00063152) list_tport_double_graphic_pane_t1_ParamLimits

0x8826,	// (0x00063152) list_tport_double_graphic_pane_t1

0x883b,	// (0x00063167) list_tport_double_graphic_pane_t2_ParamLimits

0x883b,	// (0x00063167) list_tport_double_graphic_pane_t2

0x0001,

0xfc0b,	// (0x0006a537) list_tport_double_graphic_pane_t_ParamLimits

0xfc0b,	// (0x0006a537) list_tport_double_graphic_pane_t

0x0bcb,	// (0x0005b4f7) main_cale_note_pane

0x60c2,	// (0x000609ee) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x60c2,	// (0x000609ee) cell_vitu2_function_top_wide_pane_cp01

0x7d4e,	// (0x0006267a) wait_bar_pane_cp05_ParamLimits

0xbc0f,	// (0x0006653b) listscroll_cmail_pane

0xcca4,	// (0x000675d0) list_cmail_pane

0x884d,	// (0x00063179) list_cmail_body_pane

0x884d,	// (0x00063179) list_single_cmail_header_caption_pane

0x8864,	// (0x00063190) list_single_cmail_header_detail_pane_ParamLimits

0x8864,	// (0x00063190) list_single_cmail_header_detail_pane

0xccc0,	// (0x000675ec) list_single_cmail_header_caption_pane_t1

0x888d,	// (0x000631b9) list_single_cmail_header_detail_pane_g1_ParamLimits

0x888d,	// (0x000631b9) list_single_cmail_header_detail_pane_g1

0xccd7,	// (0x00067603) list_single_cmail_header_detail_pane_g2_ParamLimits

0xccd7,	// (0x00067603) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc10,	// (0x0006a53c) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc10,	// (0x0006a53c) list_single_cmail_header_detail_pane_g

0x88a3,	// (0x000631cf) list_single_cmail_header_detail_pane_t1_ParamLimits

0x88a3,	// (0x000631cf) list_single_cmail_header_detail_pane_t1

0xcd14,	// (0x00067640) list_single_cmail_header_editor_pane_bg_ParamLimits

0xcd14,	// (0x00067640) list_single_cmail_header_editor_pane_bg

0xcd2b,	// (0x00067657) list_cmail_body_pane_g1

0xcd34,	// (0x00067660) list_cmail_body_pane_t1

0xf039,	// (0x00069965) list_single_cmail_header_editor_pane_bg_g1

0xa631,	// (0x00064f5d) list_single_cmail_header_editor_pane_bg_g1_copy1

0xf049,	// (0x00069975) list_single_cmail_header_editor_pane_bg_g1_copy2

0xf041,	// (0x0006996d) list_single_cmail_header_editor_pane_bg_g1_copy3

0x6aa2,	// (0x000613ce) list_single_cmail_header_editor_pane_bg_g1_copy4

0xf069,	// (0x00069995) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xf059,	// (0x00069985) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xf061,	// (0x0006998d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa611,	// (0x00064f3d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x88df,	// (0x0006320b) calenote_gesture_pane_ParamLimits

0x88df,	// (0x0006320b) calenote_gesture_pane

0x88fb,	// (0x00063227) calenote_window_pane_ParamLimits

0x88fb,	// (0x00063227) calenote_window_pane

0xcd42,	// (0x0006766e) popup_note_window_cp01

0x8917,	// (0x00063243) calenote_swipe_1_pane_ParamLimits

0x8917,	// (0x00063243) calenote_swipe_1_pane

0x8121,	// (0x00062a4d) calenote_swipe_2_pane_ParamLimits

0x8121,	// (0x00062a4d) calenote_swipe_2_pane

0xca03,	// (0x0006732f) calenote_swipe_1_pane_g1_ParamLimits

0xca03,	// (0x0006732f) calenote_swipe_1_pane_g1

0xca10,	// (0x0006733c) calenote_swipe_1_pane_g2_ParamLimits

0xca10,	// (0x0006733c) calenote_swipe_1_pane_g2

0x0001,

0xfb39,	// (0x0006a465) calenote_swipe_1_pane_g_ParamLimits

0xfb39,	// (0x0006a465) calenote_swipe_1_pane_g

0xcd54,	// (0x00067680) calenote_swipe_1_pane_t1_ParamLimits

0xcd54,	// (0x00067680) calenote_swipe_1_pane_t1

0xca03,	// (0x0006732f) calenote_swipe_2_pane_g1_ParamLimits

0xca03,	// (0x0006732f) calenote_swipe_2_pane_g1

0xcd73,	// (0x0006769f) calenote_swipe_2_pane_g2_ParamLimits

0xcd73,	// (0x0006769f) calenote_swipe_2_pane_g2

0x0001,

0xfc1c,	// (0x0006a548) calenote_swipe_2_pane_g_ParamLimits

0xfc1c,	// (0x0006a548) calenote_swipe_2_pane_g

0xcd7f,	// (0x000676ab) calenote_swipe_2_pane_t1_ParamLimits

0xcd7f,	// (0x000676ab) calenote_swipe_2_pane_t1

0x0bcb,	// (0x0005b4f7) main_mup_navstr_pane

0x4f08,	// (0x0005f834) main_mup3_pane_t7_ParamLimits

0x4f08,	// (0x0005f834) main_mup3_pane_t7

0xd764,	// (0x00068090) main_mp4_pane_g6_ParamLimits

0xd764,	// (0x00068090) main_mp4_pane_g6

0xd916,	// (0x00068242) main_image3_pane_t4_ParamLimits

0xd916,	// (0x00068242) main_image3_pane_t4

0x892c,	// (0x00063258) popup_navstr_preview_pane_ParamLimits

0x892c,	// (0x00063258) popup_navstr_preview_pane

0x893c,	// (0x00063268) scroll_navstr_pane_ParamLimits

0x893c,	// (0x00063268) scroll_navstr_pane

0x0bcb,	// (0x0005b4f7) bg_popup_preview_window_pane_cp04

0xcda6,	// (0x000676d2) popup_navstr_preview_pane_t1

0x8950,	// (0x0006327c) scroll_navstr_pane_g1_ParamLimits

0x8950,	// (0x0006327c) scroll_navstr_pane_g1

0x8964,	// (0x00063290) scroll_navstr_pane_t1_ParamLimits

0x8964,	// (0x00063290) scroll_navstr_pane_t1

0xcd4b,	// (0x00067677) bg_button_pane_cp014

0xcd4b,	// (0x00067677) bg_button_pane_cp030

0xc967,	// (0x00067293) list_double_fisheye_pane_g4_ParamLimits

0xc967,	// (0x00067293) list_double_fisheye_pane_g4

0xc973,	// (0x0006729f) list_double_fisheye_pane_g5_ParamLimits

0xc973,	// (0x0006729f) list_double_fisheye_pane_g5

0xccb4,	// (0x000675e0) sp_fs_scroll_pane_cp03

0xcac9,	// (0x000673f5) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xcad5,	// (0x00067401) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfb4d,	// (0x0006a479) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x821b,	// (0x00062b47) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xccac,	// (0x000675d8) sp_fs_scroll_pane_cp02

0xa2d1,	// (0x00064bfd) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa2d1,	// (0x00064bfd) popup_sp_fs_calendar_preview_list_single_pane

0x0bcb,	// (0x0005b4f7) main_cam6_pano_pane

0x99cb,	// (0x000642f7) main_mup3_pane_ParamLimits

0x0bcb,	// (0x0005b4f7) main_phacti_pane

0x7c41,	// (0x0006256d) bg_button_pane_cp11

0x7c59,	// (0x00062585) main_mobtv_info_pane_g2_ParamLimits

0x7c59,	// (0x00062585) main_mobtv_info_pane_g2

0x0001,

0xfab6,	// (0x0006a3e2) main_mobtv_info_pane_g_ParamLimits

0xfab6,	// (0x0006a3e2) main_mobtv_info_pane_g

0x7e0e,	// (0x0006273a) sc_clock_pane_t5_ParamLimits

0x7e0e,	// (0x0006273a) sc_clock_pane_t5

0x7eb9,	// (0x000627e5) main_radioblah_pane_g1_ParamLimits

0xc8b7,	// (0x000671e3) main_radioblah_pane_t3_ParamLimits

0xc8b7,	// (0x000671e3) main_radioblah_pane_t3

0xc8cf,	// (0x000671fb) main_radioblah_pane_t4_ParamLimits

0xc8cf,	// (0x000671fb) main_radioblah_pane_t4

0x7ee1,	// (0x0006280d) main_radioblah_text_pane_ParamLimits

0x7ee1,	// (0x0006280d) main_radioblah_text_pane

0x7ef3,	// (0x0006281f) main_radioblah_info_pane_g1_ParamLimits

0x7f86,	// (0x000628b2) main_radioblah_info_pane_t4_ParamLimits

0x7f86,	// (0x000628b2) main_radioblah_info_pane_t4

0xbc0f,	// (0x0006653b) main_sp_fs_calendar_pane

0x897a,	// (0x000632a6) main_phacti_pane_g1

0x8982,	// (0x000632ae) phacti_note_pane_ParamLimits

0x8982,	// (0x000632ae) phacti_note_pane

0xcdbd,	// (0x000676e9) phacti_term_pane_ParamLimits

0xcdbd,	// (0x000676e9) phacti_term_pane

0xcdd2,	// (0x000676fe) phacti_note_pane_t1_ParamLimits

0xcdd2,	// (0x000676fe) phacti_note_pane_t1

0xcde9,	// (0x00067715) phacti_term_pane_g1

0xcdf1,	// (0x0006771d) phacti_term_pane_t1_ParamLimits

0xcdf1,	// (0x0006771d) phacti_term_pane_t1

0xce1b,	// (0x00067747) popup_sp_fs_calendar_preview_list_single_pane_g1

0xce23,	// (0x0006774f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc26,	// (0x0006a552) popup_sp_fs_calendar_preview_list_single_pane_g

0xce2b,	// (0x00067757) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xce2b,	// (0x00067757) popup_sp_fs_calendar_preview_list_single_pane_t1

0xce41,	// (0x0006776d) aid_popup_sp_fs_bg_corner_pane

0xe672,	// (0x00068f9e) popup_sp_fs_calendar_preview_bg_pane_g1

0x0bcb,	// (0x0005b4f7) popup_sp_fs_calendar_preview_bg_pane

0xce49,	// (0x00067775) popup_sp_fs_calendar_preview_list_pane

0xe260,	// (0x00068b8c) bg_main_sp_fs_cale_pane_ParamLimits

0xe260,	// (0x00068b8c) bg_main_sp_fs_cale_pane

0xce5a,	// (0x00067786) listscroll_cale_mrui_pane_ParamLimits

0xce5a,	// (0x00067786) listscroll_cale_mrui_pane

0xce6f,	// (0x0006779b) listscroll_sp_fs_schedule_track_pane

0xce78,	// (0x000677a4) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xce78,	// (0x000677a4) main_sp_fs_ctrlbar_pane_cp01

0xce8b,	// (0x000677b7) main_sp_fs_ribbon_pane

0xce93,	// (0x000677bf) popup_sp_fs_cale_preview_window

0x89e5,	// (0x00063311) list_single_sp_fs_schedule_track_pane_ParamLimits

0x89e5,	// (0x00063311) list_single_sp_fs_schedule_track_pane

0xbc0f,	// (0x0006653b) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xbc0f,	// (0x0006653b) bg_sp_fs_highlight_list_pane_cp03

0x89f9,	// (0x00063325) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x89f9,	// (0x00063325) list_single_sp_fs_schedule_track_pane_g1

0x8a05,	// (0x00063331) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8a05,	// (0x00063331) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc2b,	// (0x0006a557) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc2b,	// (0x0006a557) list_single_sp_fs_schedule_track_pane_g

0x8a11,	// (0x0006333d) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8a11,	// (0x0006333d) list_single_sp_fs_schedule_track_pane_t1

0x8a2b,	// (0x00063357) sp_fs_schedule_track_pane_ParamLimits

0x8a2b,	// (0x00063357) sp_fs_schedule_track_pane

0xcea2,	// (0x000677ce) sp_fs_schedule_track_pane_g1

0xceaa,	// (0x000677d6) sp_fs_schedule_track_pane_g2

0xceb2,	// (0x000677de) sp_fs_schedule_track_pane_g3

0xceba,	// (0x000677e6) sp_fs_schedule_track_pane_g4

0xcec2,	// (0x000677ee) sp_fs_schedule_track_pane_g5

0x0004,

0xfc30,	// (0x0006a55c) sp_fs_schedule_track_pane_g

0xf039,	// (0x00069965) bg_sp_fs_schedule_viewer_highlight_g1

0xa631,	// (0x00064f5d) bg_sp_fs_schedule_viewer_highlight_g2

0xf041,	// (0x0006996d) bg_sp_fs_schedule_viewer_highlight_g3

0xf049,	// (0x00069975) bg_sp_fs_schedule_viewer_highlight_g4

0x6aa2,	// (0x000613ce) bg_sp_fs_schedule_viewer_highlight_g5

0xf059,	// (0x00069985) bg_sp_fs_schedule_viewer_highlight_g6

0xf061,	// (0x0006998d) bg_sp_fs_schedule_viewer_highlight_g7

0xf069,	// (0x00069995) bg_sp_fs_schedule_viewer_highlight_g8

0xa611,	// (0x00064f3d) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc3b,	// (0x0006a567) bg_sp_fs_schedule_viewer_highlight_g

0x0bcb,	// (0x0005b4f7) bg_main_sp_fs_ribbon_pane

0x8a3c,	// (0x00063368) main_sp_fs_ribbon_pane_g1

0xceca,	// (0x000677f6) main_sp_fs_ribbon_pane_t1

0x8a45,	// (0x00063371) main_sp_fs_ribbon_pane_t2

0xced9,	// (0x00067805) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc4e,	// (0x0006a57a) main_sp_fs_ribbon_pane_t

0xcee8,	// (0x00067814) main_sp_fs_ribbon_scheduler_pane

0xcef0,	// (0x0006781c) bg_main_sp_fs_ribbon_pane_g1

0xcef9,	// (0x00067825) bg_main_sp_fs_ribbon_pane_g2

0xcf02,	// (0x0006782e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc55,	// (0x0006a581) bg_main_sp_fs_ribbon_pane_g

0xcf0a,	// (0x00067836) main_sp_fs_ribbon_scheduler_pane_g1

0xcf13,	// (0x0006783f) main_sp_fs_ribbon_scheduler_pane_g2

0xcf1c,	// (0x00067848) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc5c,	// (0x0006a588) main_sp_fs_ribbon_scheduler_pane_g

0xcf25,	// (0x00067851) list_cale_mrui_pane

0x8a54,	// (0x00063380) sp_fs_scroll_pane_cp07_ParamLimits

0x8a54,	// (0x00063380) sp_fs_scroll_pane_cp07

0x8a6c,	// (0x00063398) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8a6c,	// (0x00063398) bg_sp_fs_schedule_viewer_highlight

0xcf32,	// (0x0006785e) list_single_sp_fs_schedule_track_pane_cp01

0xcf3a,	// (0x00067866) list_sp_fs_schedule_track_pane

0xcf42,	// (0x0006786e) sp_fs_scroll_pane_cp06_ParamLimits

0xcf42,	// (0x0006786e) sp_fs_scroll_pane_cp06

0xe672,	// (0x00068f9e) bgmain_sp_fs_calendar_pane_g1

0x8a7c,	// (0x000633a8) list_single_cale_mrui_pane_ParamLimits

0x8a7c,	// (0x000633a8) list_single_cale_mrui_pane

0xcf54,	// (0x00067880) list_single_cale_mrui_row_pane_ParamLimits

0xcf54,	// (0x00067880) list_single_cale_mrui_row_pane

0x8a9d,	// (0x000633c9) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8a9d,	// (0x000633c9) list_single_cale_mrui_row_pane_g1

0x8ad5,	// (0x00063401) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8ad5,	// (0x00063401) list_single_cale_mrui_row_pane_t1

0x8ae7,	// (0x00063413) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8ae7,	// (0x00063413) list_single_cale_mrui_row_pane_t2

0x8b4d,	// (0x00063479) list_single_cale_mrui_row_pane_t3_ParamLimits

0x8b4d,	// (0x00063479) list_single_cale_mrui_row_pane_t3

0x8b7c,	// (0x000634a8) list_single_cale_mrui_row_pane_t4_ParamLimits

0x8b7c,	// (0x000634a8) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc6a,	// (0x0006a596) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc6a,	// (0x0006a596) list_single_cale_mrui_row_pane_t

0x8bab,	// (0x000634d7) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8bab,	// (0x000634d7) list_single_cmail_header_editor_pane_bg_cp01

0x8bcf,	// (0x000634fb) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8bcf,	// (0x000634fb) list_single_cmail_header_editor_pane_bg_cp02

0x8bed,	// (0x00063519) main_radioblah_text_pane_t1_ParamLimits

0x8bed,	// (0x00063519) main_radioblah_text_pane_t1

0xcf77,	// (0x000678a3) cam6_indi_pane_cp01

0xcf7f,	// (0x000678ab) cam6_mode_pane_cp01

0xcf87,	// (0x000678b3) cam6_pano_pane

0xcf90,	// (0x000678bc) cam6_zoom_pane_cp01

0xcf98,	// (0x000678c4) cam6_pano_image_pane

0xcfa1,	// (0x000678cd) cam6_pano_pane_g1

0xc61e,	// (0x00066f4a) cam6_pano_pane_g2

0xcfaa,	// (0x000678d6) cam6_pano_pane_g3

0xcfb3,	// (0x000678df) cam6_pano_pane_g4

0xebeb,	// (0x00069517) cam6_pano_pane_g5

0xcfbc,	// (0x000678e8) cam6_pano_pane_g6

0xcfc4,	// (0x000678f0) cam6_pano_pane_g7

0xcfcc,	// (0x000678f8) cam6_pano_pane_g8

0xcfd5,	// (0x00067901) cam6_pano_pane_g9

0x0008,

0xfc73,	// (0x0006a59f) cam6_pano_pane_g

0x0bcb,	// (0x0005b4f7) main_browser_tag_pane

0xcd9e,	// (0x000676ca) grid_navstr_albumart_pane

0xcfde,	// (0x0006790a) cell_navstr_albumart_pane_ParamLimits

0xcfde,	// (0x0006790a) cell_navstr_albumart_pane

0xafc2,	// (0x000658ee) cell_navstr_albumart_pane_g1

0xe031,	// (0x0006895d) cell_navstr_albumart_pane_g2

0xe041,	// (0x0006896d) cell_navstr_albumart_pane_g3

0xe039,	// (0x00068965) cell_navstr_albumart_pane_g4

0x0003,

0xfc86,	// (0x0006a5b2) cell_navstr_albumart_pane_g

0x8c06,	// (0x00063532) bt_list_pane_ParamLimits

0x8c06,	// (0x00063532) bt_list_pane

0x8c19,	// (0x00063545) bt_list_pane_t1

0x8c28,	// (0x00063554) bt_list_pane_t2

0x0001,

0xfc8f,	// (0x0006a5bb) bt_list_pane_t

0x0bcb,	// (0x0005b4f7) main_cale_prevew_pane

0x8c37,	// (0x00063563) popup_cale_preview_window_ParamLimits

0x8c37,	// (0x00063563) popup_cale_preview_window

0xbc0f,	// (0x0006653b) bg_popup_preview_window_pane_cp05_ParamLimits

0xbc0f,	// (0x0006653b) bg_popup_preview_window_pane_cp05

0xcff5,	// (0x00067921) list_cale_preview_pane_ParamLimits

0xcff5,	// (0x00067921) list_cale_preview_pane

0x8c4c,	// (0x00063578) list_double_cale_preview_pane_ParamLimits

0x8c4c,	// (0x00063578) list_double_cale_preview_pane

0x8c5d,	// (0x00063589) list_single_cale_preview_pane_ParamLimits

0x8c5d,	// (0x00063589) list_single_cale_preview_pane

0xd001,	// (0x0006792d) list_single_cale_preview_pane_g1

0xd009,	// (0x00067935) list_single_cale_preview_pane_t1_ParamLimits

0xd009,	// (0x00067935) list_single_cale_preview_pane_t1

0x8c71,	// (0x0006359d) list_double_cale_preview_pane_g1

0x8c79,	// (0x000635a5) list_double_cale_preview_pane_t1_ParamLimits

0x8c79,	// (0x000635a5) list_double_cale_preview_pane_t1

0x8c8e,	// (0x000635ba) list_double_cale_preview_pane_t2_ParamLimits

0x8c8e,	// (0x000635ba) list_double_cale_preview_pane_t2

0x0001,

0xfc94,	// (0x0006a5c0) list_double_cale_preview_pane_t_ParamLimits

0xfc94,	// (0x0006a5c0) list_double_cale_preview_pane_t

0x0bcb,	// (0x0005b4f7) main_ezdial_pane

0xbc0f,	// (0x0006653b) main_sp_fs_email_pane_ParamLimits

0x8191,	// (0x00062abd) cmail_ddmenu_btn01_pane_ParamLimits

0x8191,	// (0x00062abd) cmail_ddmenu_btn01_pane

0x81a4,	// (0x00062ad0) cmail_ddmenu_btn02_pane_ParamLimits

0x81a4,	// (0x00062ad0) cmail_ddmenu_btn02_pane

0x81c7,	// (0x00062af3) cmail_ddmenu_btn03_pane_ParamLimits

0x81c7,	// (0x00062af3) cmail_ddmenu_btn03_pane

0x8264,	// (0x00062b90) main_sp_fs_ctrlbar_pane_ParamLimits

0x8285,	// (0x00062bb1) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x884d,	// (0x00063179) list_cmail_body_pane_ParamLimits

0xccce,	// (0x000675fa) bg_button_pane_cp12

0xcce3,	// (0x0006760f) list_single_cmail_header_detail_pane_g3_ParamLimits

0xcce3,	// (0x0006760f) list_single_cmail_header_detail_pane_g3

0xccf0,	// (0x0006761c) list_single_cmail_header_detail_pane_t2_ParamLimits

0xccf0,	// (0x0006761c) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc17,	// (0x0006a543) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc17,	// (0x0006a543) list_single_cmail_header_detail_pane_t

0xce06,	// (0x00067732) phacti_term_pane_t2_ParamLimits

0xce06,	// (0x00067732) phacti_term_pane_t2

0x0001,

0xfc21,	// (0x0006a54d) phacti_term_pane_t_ParamLimits

0xfc21,	// (0x0006a54d) phacti_term_pane_t

0xd01e,	// (0x0006794a) aid_size_list_single_double

0x8ca6,	// (0x000635d2) popup_ezdial_listscroll_window

0x8cbc,	// (0x000635e8) popup_number_entry_window_cp01

0xa389,	// (0x00064cb5) bg_popup_call_pane_cp09

0xd02a,	// (0x00067956) ezdial_list_pane

0xd032,	// (0x0006795e) scroll_pane_cp23

0xe260,	// (0x00068b8c) bg_button_pane_cp028_ParamLimits

0xe260,	// (0x00068b8c) bg_button_pane_cp028

0x8cc8,	// (0x000635f4) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8cc8,	// (0x000635f4) cmail_ddmenu_btn01_pane_g1

0x8cd4,	// (0x00063600) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8cd4,	// (0x00063600) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc99,	// (0x0006a5c5) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc99,	// (0x0006a5c5) cmail_ddmenu_btn01_pane_g

0xd03a,	// (0x00067966) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd03a,	// (0x00067966) cmail_ddmenu_btn01_pane_t1

0xe260,	// (0x00068b8c) bg_button_pane_cp029_ParamLimits

0xe260,	// (0x00068b8c) bg_button_pane_cp029

0x8ce0,	// (0x0006360c) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8ce0,	// (0x0006360c) cmail_ddmenu_btn02_pane_g1

0x8cf8,	// (0x00063624) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8cf8,	// (0x00063624) cmail_ddmenu_btn02_pane_t1

0xbc0f,	// (0x0006653b) bg_button_pane_cp031_ParamLimits

0xbc0f,	// (0x0006653b) bg_button_pane_cp031

0x8ce0,	// (0x0006360c) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8ce0,	// (0x0006360c) cmail_ddmenu_btn03_pane_g1

0x8cf8,	// (0x00063624) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8cf8,	// (0x00063624) cmail_ddmenu_btn03_pane_t1

0x59fb,	// (0x00060327) cell_dialer2_keypad_pane_t1_ParamLimits

0x5a15,	// (0x00060341) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5a15,	// (0x00060341) cell_dialer2_keypad_pane_t1_copy1

0x7aad,	// (0x000623d9) ncimui_group_button_pane

0xbc0f,	// (0x0006653b) main_sp_fs_calendar_pane_ParamLimits

0x884d,	// (0x00063179) list_single_cmail_header_caption_pane_ParamLimits

0xce51,	// (0x0006777d) aid_recal_txt_sm_pane

0x0bcb,	// (0x0005b4f7) mian_recal_day_pane

0xce93,	// (0x000677bf) popup_sp_fs_cale_preview_window_ParamLimits

0xd04f,	// (0x0006797b) list_recal_day_pane

0xd091,	// (0x000679bd) list_single_recal_day_pane_ParamLimits

0xd091,	// (0x000679bd) list_single_recal_day_pane

0xd0a3,	// (0x000679cf) list_single_recal_day_pane_g1_ParamLimits

0xd0a3,	// (0x000679cf) list_single_recal_day_pane_g1

0xd0af,	// (0x000679db) list_single_recal_day_pane_g2_ParamLimits

0xd0af,	// (0x000679db) list_single_recal_day_pane_g2

0xd0bb,	// (0x000679e7) list_single_recal_day_pane_g3_ParamLimits

0xd0bb,	// (0x000679e7) list_single_recal_day_pane_g3

0x8d1c,	// (0x00063648) list_single_recal_day_pane_g4_ParamLimits

0x8d1c,	// (0x00063648) list_single_recal_day_pane_g4

0xd0c7,	// (0x000679f3) list_single_recal_day_pane_g5_ParamLimits

0xd0c7,	// (0x000679f3) list_single_recal_day_pane_g5

0x8d34,	// (0x00063660) list_single_recal_day_pane_g6_ParamLimits

0x8d34,	// (0x00063660) list_single_recal_day_pane_g6

0x0004,

0xfca8,	// (0x0006a5d4) list_single_recal_day_pane_g_ParamLimits

0xfca8,	// (0x0006a5d4) list_single_recal_day_pane_g

0xd0db,	// (0x00067a07) list_single_recal_day_pane_t1

0x8d40,	// (0x0006366c) list_single_recal_day_pane_t2

0x0001,

0xfcb3,	// (0x0006a5df) list_single_recal_day_pane_t

0x8d52,	// (0x0006367e) ncimui_query_button_pane_ParamLimits

0x8d52,	// (0x0006367e) ncimui_query_button_pane

0x8d62,	// (0x0006368e) ncimui_query_button_pane_t1_ParamLimits

0x8d62,	// (0x0006368e) ncimui_query_button_pane_t1

0xd0ed,	// (0x00067a19) ncimui_query_button_pane_t2_ParamLimits

0xd0ed,	// (0x00067a19) ncimui_query_button_pane_t2

0x0001,

0xfcb8,	// (0x0006a5e4) ncimui_query_button_pane_t_ParamLimits

0xfcb8,	// (0x0006a5e4) ncimui_query_button_pane_t

0x8d75,	// (0x000636a1) query_button_pane_ParamLimits

0x8d75,	// (0x000636a1) query_button_pane

0x0bcb,	// (0x0005b4f7) bg_button_pane_cp0028

0xd100,	// (0x00067a2c) query_button_pane_t1

0x3c93,	// (0x0005e5bf) main_tport_pane_ParamLimits

0x8760,	// (0x0006308c) bg_popup_window_pane_cp01_ParamLimits

0x8760,	// (0x0006308c) bg_popup_window_pane_cp01

0x8777,	// (0x000630a3) heading_pane_cp08_ParamLimits

0x8777,	// (0x000630a3) heading_pane_cp08

0x8788,	// (0x000630b4) heading_pane_cp07_ParamLimits

0x8788,	// (0x000630b4) heading_pane_cp07

0xcc7e,	// (0x000675aa) cell_tport_appsw_pane_g2

0x0002,

0xfc04,	// (0x0006a530) cell_tport_appsw_pane_g

0x337f,	// (0x0005dcab) input_candi_list_open_g1

0xa80c,	// (0x00065138) list_cale_time_pane_g6_ParamLimits

0xa80c,	// (0x00065138) list_cale_time_pane_g6

0x4925,	// (0x0005f251) aid_size_touch_calib_1_ParamLimits

0x4925,	// (0x0005f251) aid_size_touch_calib_1

0x4937,	// (0x0005f263) aid_size_touch_calib_2_ParamLimits

0x4937,	// (0x0005f263) aid_size_touch_calib_2

0x494d,	// (0x0005f279) aid_size_touch_calib_3_ParamLimits

0x494d,	// (0x0005f279) aid_size_touch_calib_3

0x4965,	// (0x0005f291) aid_size_touch_calib_4_ParamLimits

0x4965,	// (0x0005f291) aid_size_touch_calib_4

0x4979,	// (0x0005f2a5) main_touch_calib_button_group_pane_ParamLimits

0x4979,	// (0x0005f2a5) main_touch_calib_button_group_pane

0x4991,	// (0x0005f2bd) main_touch_calib_pane_g1_ParamLimits

0x49a3,	// (0x0005f2cf) main_touch_calib_pane_g2_ParamLimits

0x49b5,	// (0x0005f2e1) main_touch_calib_pane_g3_ParamLimits

0x49c7,	// (0x0005f2f3) main_touch_calib_pane_g4_ParamLimits

0xf635,	// (0x00069f61) main_touch_calib_pane_g_ParamLimits

0x49d9,	// (0x0005f305) main_touch_calib_pane_t1_ParamLimits

0x49f1,	// (0x0005f31d) main_touch_calib_pane_t2_ParamLimits

0x4a09,	// (0x0005f335) main_touch_calib_pane_t3_ParamLimits

0x4a1b,	// (0x0005f347) main_touch_calib_pane_t4_ParamLimits

0x4a2d,	// (0x0005f359) main_touch_calib_pane_t5_ParamLimits

0xf63e,	// (0x00069f6a) main_touch_calib_pane_t_ParamLimits

0xe9a1,	// (0x000692cd) list_single_fp_cale_pane_g3_ParamLimits

0xe9a1,	// (0x000692cd) list_single_fp_cale_pane_g3

0x99cb,	// (0x000642f7) bg_button_pane_cp012_ParamLimits

0x99cb,	// (0x000642f7) bg_vkb2_func_pane_cp03_ParamLimits

0x6a58,	// (0x00061384) cell_vitu2_function_top_pane_g1_ParamLimits

0x99cb,	// (0x000642f7) bg_vkb2_func_pane_cp04_ParamLimits

0x7a3d,	// (0x00062369) main_ncimui_button_group_pane_ParamLimits

0x7a3d,	// (0x00062369) main_ncimui_button_group_pane

0x7a9b,	// (0x000623c7) main_ncimui_pane_t3_ParamLimits

0x7a9b,	// (0x000623c7) main_ncimui_pane_t3

0xcdb4,	// (0x000676e0) phacti_button_group_pane

0xd01e,	// (0x0006794a) aid_size_list_single_double_ParamLimits

0x8ca6,	// (0x000635d2) popup_ezdial_listscroll_window_ParamLimits

0x8cbc,	// (0x000635e8) popup_number_entry_window_cp01_ParamLimits

0x8d87,	// (0x000636b3) phacti_button_pane_ParamLimits

0x8d87,	// (0x000636b3) phacti_button_pane

0x0bcb,	// (0x0005b4f7) bg_button_pane_cp14

0xd10e,	// (0x00067a3a) phacti_button_pane_t1

0x8d96,	// (0x000636c2) main_touch_calib_button_pane_ParamLimits

0x8d96,	// (0x000636c2) main_touch_calib_button_pane

0xa11a,	// (0x00064a46) bg_button_pane_cp18_ParamLimits

0xa11a,	// (0x00064a46) bg_button_pane_cp18

0x8db1,	// (0x000636dd) main_touch_calib_button_pane_t1_ParamLimits

0x8db1,	// (0x000636dd) main_touch_calib_button_pane_t1

0x8dc7,	// (0x000636f3) main_touch_calib_button_pane_t2_ParamLimits

0x8dc7,	// (0x000636f3) main_touch_calib_button_pane_t2

0x0001,

0xfcbd,	// (0x0006a5e9) main_touch_calib_button_pane_t_ParamLimits

0xfcbd,	// (0x0006a5e9) main_touch_calib_button_pane_t

0x0bcb,	// (0x0005b4f7) cell_ncimui_button_pane

0x0bcb,	// (0x0005b4f7) bg_button_pane_cp032

0xd11c,	// (0x00067a48) cell_ncimui_button_pane_t1

0xd8f6,	// (0x00068222) image3_infobar_pane_ParamLimits

0xd8f6,	// (0x00068222) image3_infobar_pane

0x7e36,	// (0x00062762) fs_bigclock_status_pane_ParamLimits

0x7e36,	// (0x00062762) fs_bigclock_status_pane

0x7e43,	// (0x0006276f) main_fs_bigclock_clock_pane_ParamLimits

0x7e43,	// (0x0006276f) main_fs_bigclock_clock_pane

0x7e65,	// (0x00062791) main_fs_bigclock_indi_pane_ParamLimits

0x7e65,	// (0x00062791) main_fs_bigclock_indi_pane

0x7e8f,	// (0x000627bb) main_fs_bigclock_swipe_pane_ParamLimits

0x7e8f,	// (0x000627bb) main_fs_bigclock_swipe_pane

0x0bcb,	// (0x0005b4f7) main_fs_clock_dumped_data

0xc72b,	// (0x00067057) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc72b,	// (0x00067057) list_single_fs_bigclock_indicator_pane_g1

0xc745,	// (0x00067071) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc745,	// (0x00067071) list_single_fs_bigclock_indicator_pane_g2

0xc75f,	// (0x0006708b) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc75f,	// (0x0006708b) list_single_fs_bigclock_indicator_pane_g3

0xc779,	// (0x000670a5) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc779,	// (0x000670a5) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfaea,	// (0x0006a416) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfaea,	// (0x0006a416) list_single_fs_bigclock_indicator_pane_g

0xc7a2,	// (0x000670ce) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc7a2,	// (0x000670ce) list_single_fs_bigclock_indicator_pane_t1

0xc7ca,	// (0x000670f6) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc7ca,	// (0x000670f6) list_single_fs_bigclock_indicator_pane_t2

0xc7f2,	// (0x0006711e) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc7f2,	// (0x0006711e) list_single_fs_bigclock_indicator_pane_t3

0xc81a,	// (0x00067146) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc81a,	// (0x00067146) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfaf5,	// (0x0006a421) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfaf5,	// (0x0006a421) list_single_fs_bigclock_indicator_pane_t

0xd12a,	// (0x00067a56) image3_infobar_fav_pane_ParamLimits

0xd12a,	// (0x00067a56) image3_infobar_fav_pane

0xd13a,	// (0x00067a66) image3_infobar_loc_pane_ParamLimits

0xd13a,	// (0x00067a66) image3_infobar_loc_pane

0xd14e,	// (0x00067a7a) image3_infobar_time_pane_ParamLimits

0xd14e,	// (0x00067a7a) image3_infobar_time_pane

0xe672,	// (0x00068f9e) image3_infobar_time_pane_g1

0xd15e,	// (0x00067a8a) image3_infobar_time_pane_t1

0xe672,	// (0x00068f9e) image3_infobar_loc_pane_g1

0xd16c,	// (0x00067a98) image3_infobar_loc_pane_g2

0x0001,

0xfcc2,	// (0x0006a5ee) image3_infobar_loc_pane_g

0xd174,	// (0x00067aa0) image3_infobar_loc_pane_t1

0xe672,	// (0x00068f9e) image3_infobar_fav_pane_g1

0xd182,	// (0x00067aae) image3_infobar_fav_pane_g2

0x0001,

0xfcc7,	// (0x0006a5f3) image3_infobar_fav_pane_g

0xd18a,	// (0x00067ab6) fs_bigclock_status_battery_pane

0xd193,	// (0x00067abf) fs_bigclock_status_signal_pane

0xd19c,	// (0x00067ac8) fs_bigclock_status_title_pane

0xd1a5,	// (0x00067ad1) fs_bigclock_status_signal_pane_g1

0xd1ae,	// (0x00067ada) fs_bigclock_status_signal_pane_g2

0x0001,

0xfccc,	// (0x0006a5f8) fs_bigclock_status_signal_pane_g

0xd1b6,	// (0x00067ae2) fs_bigclock_status_battery_pane_g1

0xd1bf,	// (0x00067aeb) fs_bigclock_status_battery_pane_g2

0x0001,

0xfcd1,	// (0x0006a5fd) fs_bigclock_status_battery_pane_g

0xd1c7,	// (0x00067af3) fs_bigclock_status_title_pane_t1

0x8de5,	// (0x00063711) main_fs_bigclock_clock_pane_g1

0x8df7,	// (0x00063723) main_fs_bigclock_clock_pane_g2

0x8e08,	// (0x00063734) main_fs_bigclock_clock_pane_g3

0x8e08,	// (0x00063734) main_fs_bigclock_clock_pane_g4

0x0003,

0xfcd6,	// (0x0006a602) main_fs_bigclock_clock_pane_g

0x8e1b,	// (0x00063747) main_fs_bigclock_clock_pane_t1

0x8e36,	// (0x00063762) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcdf,	// (0x0006a60b) main_fs_bigclock_clock_pane_t

0xd1d5,	// (0x00067b01) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd1d5,	// (0x00067b01) list_single_fs_bigclock_indicator_pane

0xd1e6,	// (0x00067b12) list_single_fs_bigclock_pane_ParamLimits

0xd1e6,	// (0x00067b12) list_single_fs_bigclock_pane

0xd20c,	// (0x00067b38) main_fs_bigclock_indicator_pane_t1

0xd21b,	// (0x00067b47) list_single_fs_bigclock_pane_g1

0xd223,	// (0x00067b4f) list_single_fs_bigclock_pane_t1

0xe672,	// (0x00068f9e) main_fs_bigclock_swipe_pane_g1

0xd263,	// (0x00067b8f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfcf0,	// (0x0006a61c) main_fs_bigclock_swipe_pane_g

0xd26b,	// (0x00067b97) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd26b,	// (0x00067b97) main_fs_bigclock_swipe_pane_t1

0x2c9c,	// (0x0005d5c8) call_type_pane_ParamLimits

0x0bcb,	// (0x0005b4f7) main_btmg_pane

0x8ac9,	// (0x000633f5) list_single_cale_mrui_row_pane_g2_ParamLimits

0x8ac9,	// (0x000633f5) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc63,	// (0x0006a58f) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc63,	// (0x0006a58f) list_single_cale_mrui_row_pane_g

0xd078,	// (0x000679a4) list_recal_vselct_arw_lo_pane

0xd080,	// (0x000679ac) list_recal_vselct_arw_up_pane

0xd088,	// (0x000679b4) list_recal_vselct_pane

0xd288,	// (0x00067bb4) btmg_button_pane

0x8e96,	// (0x000637c2) main_btmg_pane_g1

0x0bcb,	// (0x0005b4f7) bg_button_pane_cp044

0xd290,	// (0x00067bbc) btmg_button_pane_t1

0xe24c,	// (0x00068b78) aid_listscroll_gen

0xbc0f,	// (0x0006653b) main_cntbar_detail_pane

0xcca4,	// (0x000675d0) list_cmail_folder_pane

0xccb4,	// (0x000675e0) sp_fs_scroll_pane_cp03_ParamLimits

0x884d,	// (0x00063179) list_single_fs_dyc_pane_cp01_ParamLimits

0x884d,	// (0x00063179) list_single_fs_dyc_pane_cp01

0xd29e,	// (0x00067bca) aid_size_cmail_indent

0xd2a7,	// (0x00067bd3) list_single_dyc_row_pane_cp01

0x8ec6,	// (0x000637f2) cntbar_detail_list_pane_ParamLimits

0x8ec6,	// (0x000637f2) cntbar_detail_list_pane

0x8f0c,	// (0x00063838) main_cntbar_detail_cont_pane_ParamLimits

0x8f0c,	// (0x00063838) main_cntbar_detail_cont_pane

0x8f20,	// (0x0006384c) scroll_pane_cp032_ParamLimits

0x8f20,	// (0x0006384c) scroll_pane_cp032

0x8f2c,	// (0x00063858) cntbar_detail_list_event_pane_ParamLimits

0x8f2c,	// (0x00063858) cntbar_detail_list_event_pane

0x8ed6,	// (0x00063802) cntbar_detail_list_shct_pane

0xd2b0,	// (0x00067bdc) aid_list_gen

0xa277,	// (0x00064ba3) aid_scroll

0xbdbc,	// (0x000666e8) aid_size_touch_scroll_bar

0xbde7,	// (0x00066713) aid_list_double

0x8f3d,	// (0x00063869) aid_list_single

0xbde7,	// (0x00066713) aid_list_single_lg

0x8f46,	// (0x00063872) aid_list_z_g_a_sm

0x8f4e,	// (0x0006387a) aid_list_z_g_d

0x8f56,	// (0x00063882) aid_txt_z_prm

0xd2b9,	// (0x00067be5) aid_txt_z_prm_cp01

0xd2c7,	// (0x00067bf3) aid_txt_z_sec

0x8f64,	// (0x00063890) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8f64,	// (0x00063890) main_cntbar_detail_cont_pane_g1

0x8f78,	// (0x000638a4) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8f78,	// (0x000638a4) main_cntbar_detail_cont_pane_g2

0x0001,

0xfcf5,	// (0x0006a621) main_cntbar_detail_cont_pane_g_ParamLimits

0xfcf5,	// (0x0006a621) main_cntbar_detail_cont_pane_g

0xd2d5,	// (0x00067c01) main_cntbar_detail_cont_pane_t1

0xd2e3,	// (0x00067c0f) main_cntbar_detail_cont_pane_t2

0xd2f1,	// (0x00067c1d) main_cntbar_detail_cont_pane_t3

0x0002,

0xfcfa,	// (0x0006a626) main_cntbar_detail_cont_pane_t

0x8f88,	// (0x000638b4) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8f88,	// (0x000638b4) cell_cntbar_detail_list_shct_pane

0xd2ff,	// (0x00067c2b) cntbar_detail_list_shct_pane_g1

0xd308,	// (0x00067c34) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd01,	// (0x0006a62d) cntbar_detail_list_shct_pane_g

0x8f9a,	// (0x000638c6) cntbar_detail_list_event_pane_g1_ParamLimits

0x8f9a,	// (0x000638c6) cntbar_detail_list_event_pane_g1

0x8fa6,	// (0x000638d2) cntbar_detail_list_event_pane_g2_ParamLimits

0x8fa6,	// (0x000638d2) cntbar_detail_list_event_pane_g2

0x0005,

0xfd06,	// (0x0006a632) cntbar_detail_list_event_pane_g_ParamLimits

0xfd06,	// (0x0006a632) cntbar_detail_list_event_pane_g

0x9012,	// (0x0006393e) cntbar_detail_list_event_pane_t1_ParamLimits

0x9012,	// (0x0006393e) cntbar_detail_list_event_pane_t1

0x9027,	// (0x00063953) cntbar_detail_list_event_pane_t2_ParamLimits

0x9027,	// (0x00063953) cntbar_detail_list_event_pane_t2

0x0002,

0xfd13,	// (0x0006a63f) cntbar_detail_list_event_pane_t_ParamLimits

0xfd13,	// (0x0006a63f) cntbar_detail_list_event_pane_t

0xe672,	// (0x00068f9e) cell_cntbar_detail_list_shct_pane_g1

0xae09,	// (0x00065735) navi_pane_mv_g3

0xbc0f,	// (0x0006653b) main_cntbar_detail_pane_ParamLimits

0x0bcb,	// (0x0005b4f7) main_notif_wgt_pane

0xd6f2,	// (0x0006801e) aid_tch_main_mp4_pane_g4

0xd8ee,	// (0x0006821a) popup_slider_window_cp02

0xd06e,	// (0x0006799a) list_recal_day_event_pane

0x8e9e,	// (0x000637ca) cntbar_detail_btn_pane_ParamLimits

0x8e9e,	// (0x000637ca) cntbar_detail_btn_pane

0x8eb1,	// (0x000637dd) cntbar_detail_btn_pane_cp01_ParamLimits

0x8eb1,	// (0x000637dd) cntbar_detail_btn_pane_cp01

0x8ed6,	// (0x00063802) cntbar_detail_list_shct_pane_ParamLimits

0x8ee6,	// (0x00063812) cntbar_detail_pane_g1_ParamLimits

0x8ee6,	// (0x00063812) cntbar_detail_pane_g1

0x8ef6,	// (0x00063822) cntbar_detail_pane_t1_ParamLimits

0x8ef6,	// (0x00063822) cntbar_detail_pane_t1

0x8fb2,	// (0x000638de) cntbar_detail_list_event_pane_g3_ParamLimits

0x8fb2,	// (0x000638de) cntbar_detail_list_event_pane_g3

0x8fca,	// (0x000638f6) cntbar_detail_list_event_pane_g4_ParamLimits

0x8fca,	// (0x000638f6) cntbar_detail_list_event_pane_g4

0x8fe2,	// (0x0006390e) cntbar_detail_list_event_pane_g5_ParamLimits

0x8fe2,	// (0x0006390e) cntbar_detail_list_event_pane_g5

0x8ffa,	// (0x00063926) cntbar_detail_list_event_pane_g6_ParamLimits

0x8ffa,	// (0x00063926) cntbar_detail_list_event_pane_g6

0x903c,	// (0x00063968) cntbar_detail_list_event_pane_t3_ParamLimits

0x903c,	// (0x00063968) cntbar_detail_list_event_pane_t3

0x904e,	// (0x0006397a) popup_notif_wgt_window_ParamLimits

0x904e,	// (0x0006397a) popup_notif_wgt_window

0x9063,	// (0x0006398f) popup_submenu_window_cp01_ParamLimits

0x9063,	// (0x0006398f) popup_submenu_window_cp01

0xa389,	// (0x00064cb5) bg_popup_window_pane_cp10

0xd311,	// (0x00067c3d) listscroll_notif_wgt_pane

0xd322,	// (0x00067c4e) list_notif_wgt_window

0xd32b,	// (0x00067c57) scroll_pane_cp033

0x9073,	// (0x0006399f) list_notif_wgt_row_pane_ParamLimits

0x9073,	// (0x0006399f) list_notif_wgt_row_pane

0xd334,	// (0x00067c60) aid_size_list_notif_wgt_del

0xd341,	// (0x00067c6d) list_notif_wgt_row_pane_g1

0xd34d,	// (0x00067c79) list_notif_wgt_row_pane_g2

0xd361,	// (0x00067c8d) list_notif_wgt_row_pane_g3

0x0002,

0xfd1a,	// (0x0006a646) list_notif_wgt_row_pane_g

0xd36e,	// (0x00067c9a) list_notif_wgt_row_pane_t1

0xd384,	// (0x00067cb0) list_notif_wgt_row_pane_t2

0xd396,	// (0x00067cc2) list_notif_wgt_row_pane_t3

0x0002,

0xfd21,	// (0x0006a64d) list_notif_wgt_row_pane_t

0x6b50,	// (0x0006147c) list_recal_day_event_pane_g1

0xd3a8,	// (0x00067cd4) list_recal_day_event_pane_t1

0x0bcb,	// (0x0005b4f7) bg_button_pane_cp045

0x9083,	// (0x000639af) cntbar_detail_btn_pane_t1

0xe260,	// (0x00068b8c) main_callh_pane_ParamLimits

0xe260,	// (0x00068b8c) main_callh_pane

0x0bcb,	// (0x0005b4f7) main_coverflow0_pane

0x0bcb,	// (0x0005b4f7) main_wgtman_pane

0x7ea3,	// (0x000627cf) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7ea3,	// (0x000627cf) main_fs_bigclock_unlock_btn_pane

0xcc76,	// (0x000675a2) bg_button_pane_cp16

0xcc86,	// (0x000675b2) cell_tport_appsw_pane_g3

0x9091,	// (0x000639bd) cf0_flow_pane_ParamLimits

0x9091,	// (0x000639bd) cf0_flow_pane

0xd3b7,	// (0x00067ce3) listscroll_cf0_pane

0xd3c0,	// (0x00067cec) main_cf0_pane_g1

0x90a6,	// (0x000639d2) main_cf0_pane_t1_ParamLimits

0x90a6,	// (0x000639d2) main_cf0_pane_t1

0x90bb,	// (0x000639e7) main_cf0_pane_t2_ParamLimits

0x90bb,	// (0x000639e7) main_cf0_pane_t2

0x0001,

0xfd2d,	// (0x0006a659) main_cf0_pane_t_ParamLimits

0xfd2d,	// (0x0006a659) main_cf0_pane_t

0xd3d2,	// (0x00067cfe) scroll_pane_cp11

0x90d0,	// (0x000639fc) cf0_flow_pane_g1

0x90d8,	// (0x00063a04) cf0_flow_pane_g2

0x0001,

0xfd32,	// (0x0006a65e) cf0_flow_pane_g

0x90e0,	// (0x00063a0c) cf0_flow_pane_t1

0x0bcb,	// (0x0005b4f7) main_call6_pane

0x0bcb,	// (0x0005b4f7) main_calllock_pane

0x90ee,	// (0x00063a1a) call6_btn_grp_pane_ParamLimits

0x90ee,	// (0x00063a1a) call6_btn_grp_pane

0x9104,	// (0x00063a30) call6_pane_g1_ParamLimits

0x9104,	// (0x00063a30) call6_pane_g1

0x9117,	// (0x00063a43) popup_call6_1st_window_ParamLimits

0x9117,	// (0x00063a43) popup_call6_1st_window

0x9126,	// (0x00063a52) popup_call6_2nd_window_ParamLimits

0x9126,	// (0x00063a52) popup_call6_2nd_window

0x9135,	// (0x00063a61) cell_call6_btn_pane_ParamLimits

0x9135,	// (0x00063a61) cell_call6_btn_pane

0xa389,	// (0x00064cb5) bg_popup_call2_in_pane_cp03

0xd3db,	// (0x00067d07) popup_call6_1st_window_g1

0xd3e3,	// (0x00067d0f) popup_call6_1st_window_g2

0xd3eb,	// (0x00067d17) popup_call6_1st_window_g3

0x0002,

0xfd37,	// (0x0006a663) popup_call6_1st_window_g

0xd3f3,	// (0x00067d1f) popup_call6_1st_window_t1

0xd402,	// (0x00067d2e) popup_call6_1st_window_t2

0xd410,	// (0x00067d3c) popup_call6_1st_window_t3

0x0002,

0xfd3e,	// (0x0006a66a) popup_call6_1st_window_t

0xa389,	// (0x00064cb5) bg_popup_call2_in_pane_cp04

0xd3db,	// (0x00067d07) popup_call6_2nd_window_g1

0xd3e3,	// (0x00067d0f) popup_call6_2nd_window_g2

0xd3eb,	// (0x00067d17) popup_call6_2nd_window_g3

0x0002,

0xfd37,	// (0x0006a663) popup_call6_2nd_window_g

0xd3f3,	// (0x00067d1f) popup_call6_2nd_window_t1

0x99d9,	// (0x00064305) bg_button_pane_cp15

0xdb7d,	// (0x000684a9) cell_call6_btn_pane_g1

0xdb86,	// (0x000684b2) cell_call6_btn_pane_t1

0x9149,	// (0x00063a75) listscroll_wgtman_pane_ParamLimits

0x9149,	// (0x00063a75) listscroll_wgtman_pane

0x916a,	// (0x00063a96) wgtman_btn_pane_ParamLimits

0x916a,	// (0x00063a96) wgtman_btn_pane

0xac60,	// (0x0006558c) aid_scroll_copy1

0xd41e,	// (0x00067d4a) list_wgtman_pane

0x91aa,	// (0x00063ad6) wgtman_btn_pane_g1_ParamLimits

0x91aa,	// (0x00063ad6) wgtman_btn_pane_g1

0x91d6,	// (0x00063b02) wgtman_btn_pane_t1_ParamLimits

0x91d6,	// (0x00063b02) wgtman_btn_pane_t1

0xd428,	// (0x00067d54) wgtman_btn_pane_t2_ParamLimits

0xd428,	// (0x00067d54) wgtman_btn_pane_t2

0x0001,

0xfd45,	// (0x0006a671) wgtman_btn_pane_t_ParamLimits

0xfd45,	// (0x0006a671) wgtman_btn_pane_t

0x9213,	// (0x00063b3f) listrow_wgtman_pane_ParamLimits

0x9213,	// (0x00063b3f) listrow_wgtman_pane

0x9224,	// (0x00063b50) listrow_wgtman_pane_g1

0x9231,	// (0x00063b5d) listrow_wgtman_pane_g2

0x0001,

0xfd4a,	// (0x0006a676) listrow_wgtman_pane_g

0x9249,	// (0x00063b75) listrow_wgtman_pane_t1

0x9261,	// (0x00063b8d) listrow_wgtman_pane_t2

0x0001,

0xfd4f,	// (0x0006a67b) listrow_wgtman_pane_t

0x9287,	// (0x00063bb3) wait_bar_pane_cp09

0xd43f,	// (0x00067d6b) main_calllock_btn_pane

0xd447,	// (0x00067d73) main_calllock_pane_g1

0x0bcb,	// (0x0005b4f7) bg_button_pane_cp17

0xd450,	// (0x00067d7c) main_calllock_btn_pane_g1

0xd459,	// (0x00067d85) main_calllock_btn_pane_t1

0x0bcb,	// (0x0005b4f7) main_dialer3_pane

0x0bcb,	// (0x0005b4f7) main_fmrd2_pane

0xe672,	// (0x00068f9e) main_fs_bigclock_unlock_btn_pane_g1

0xd470,	// (0x00067d9c) main_fs_bigclock_unlock_btn_pane_t1

0x9299,	// (0x00063bc5) area_fmrd2_info_pane_ParamLimits

0x9299,	// (0x00063bc5) area_fmrd2_info_pane

0x92a8,	// (0x00063bd4) area_fmrd2_visual_pane_ParamLimits

0x92a8,	// (0x00063bd4) area_fmrd2_visual_pane

0x92b6,	// (0x00063be2) fmrd2_indi_pane_ParamLimits

0x92b6,	// (0x00063be2) fmrd2_indi_pane

0x92c3,	// (0x00063bef) area_fmrd2_visual_pane_g1

0x92cb,	// (0x00063bf7) area_fmrd2_visual_pane_t1

0x92d9,	// (0x00063c05) area_fmrd2_visual_pane_t2

0x92e7,	// (0x00063c13) area_fmrd2_visual_pane_t3

0x0002,

0xfd59,	// (0x0006a685) area_fmrd2_visual_pane_t

0x92f5,	// (0x00063c21) area_fmrd2_info_pane_g1

0x92fd,	// (0x00063c29) area_fmrd2_info_pane_t1

0x930b,	// (0x00063c37) area_fmrd2_info_pane_t2

0x9319,	// (0x00063c45) area_fmrd2_info_pane_t3

0x9327,	// (0x00063c53) area_fmrd2_info_pane_t4

0x0003,

0xfd60,	// (0x0006a68c) area_fmrd2_info_pane_t

0x9335,	// (0x00063c61) fmrd2_indi_pane_t1

0x9343,	// (0x00063c6f) fmrd2_indi_pane_t2

0x9351,	// (0x00063c7d) fmrd2_indi_pane_t3

0x0002,

0xfd69,	// (0x0006a695) fmrd2_indi_pane_t

0xc788,	// (0x000670b4) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc788,	// (0x000670b4) list_single_fs_bigclock_indicator_pane_g5

0xc836,	// (0x00067162) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc836,	// (0x00067162) list_single_fs_bigclock_indicator_pane_t5

0x8996,	// (0x000632c2) aid_cell_bcale_month_pane_ParamLimits

0x8996,	// (0x000632c2) aid_cell_bcale_month_pane

0x89b4,	// (0x000632e0) bcale_month_pane_ParamLimits

0x89b4,	// (0x000632e0) bcale_month_pane

0x89cc,	// (0x000632f8) bcale_preview_pane_ParamLimits

0x89cc,	// (0x000632f8) bcale_preview_pane

0xd223,	// (0x00067b4f) list_single_fs_bigclock_pane_t1_ParamLimits

0xd23f,	// (0x00067b6b) list_single_fs_bigclock_pane_t2_ParamLimits

0xd23f,	// (0x00067b6b) list_single_fs_bigclock_pane_t2

0x0001,

0xfceb,	// (0x0006a617) list_single_fs_bigclock_pane_t_ParamLimits

0xfceb,	// (0x0006a617) list_single_fs_bigclock_pane_t

0xd468,	// (0x00067d94) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd54,	// (0x0006a680) main_fs_bigclock_unlock_btn_pane_g

0x935f,	// (0x00063c8b) aid_dia3_key_size_ParamLimits

0x935f,	// (0x00063c8b) aid_dia3_key_size

0x936e,	// (0x00063c9a) aid_dia3_listrow_size_ParamLimits

0x936e,	// (0x00063c9a) aid_dia3_listrow_size

0x9381,	// (0x00063cad) dia3_keypad_fun_pane_ParamLimits

0x9381,	// (0x00063cad) dia3_keypad_fun_pane

0x9395,	// (0x00063cc1) dia3_keypad_num_pane_ParamLimits

0x9395,	// (0x00063cc1) dia3_keypad_num_pane

0x93a6,	// (0x00063cd2) dia3_listscroll_pane_ParamLimits

0x93a6,	// (0x00063cd2) dia3_listscroll_pane

0x93b7,	// (0x00063ce3) dia3_numentry_pane_ParamLimits

0x93b7,	// (0x00063ce3) dia3_numentry_pane

0xd47e,	// (0x00067daa) dia3_list_pane

0xd487,	// (0x00067db3) scroll_pane_cp12

0x0bcb,	// (0x0005b4f7) bg_dia3_numentry_pane

0x93c9,	// (0x00063cf5) dia3_numentry_pane_t1

0x93d8,	// (0x00063d04) cell_dia3_key_num_pane

0x93e0,	// (0x00063d0c) cell_dia3_key0_fun_pane_ParamLimits

0x93e0,	// (0x00063d0c) cell_dia3_key0_fun_pane

0x93f4,	// (0x00063d20) cell_dia3_key1_fun_pane_ParamLimits

0x93f4,	// (0x00063d20) cell_dia3_key1_fun_pane

0x940b,	// (0x00063d37) dia3_listrow_pane

0xc489,	// (0x00066db5) bg_dia3_numentry_pane_g1

0x0bcb,	// (0x0005b4f7) bg_button_pane_cp21

0xd490,	// (0x00067dbc) cell_dia3_key_num_pane_t1

0xd49e,	// (0x00067dca) cell_dia3_key_num_pane_t2

0xd4ad,	// (0x00067dd9) cell_dia3_key_num_pane_t3

0xd4bc,	// (0x00067de8) cell_dia3_key_num_pane_t4

0x0003,

0xfd70,	// (0x0006a69c) cell_dia3_key_num_pane_t

0x0bcb,	// (0x0005b4f7) bg_button_pane_cp19

0xd4cb,	// (0x00067df7) cell_dia3_key0_fun_pane_g1

0x0bcb,	// (0x0005b4f7) bg_button_pane_cp20

0x941d,	// (0x00063d49) cell_dia3_key1_fun_pane_g1

0x9425,	// (0x00063d51) area_left_week_number_pane

0x9431,	// (0x00063d5d) area_top_day_name_pane

0x9442,	// (0x00063d6e) frame_month_view_pane

0xd4d3,	// (0x00067dff) grid_month_view_pane

0x9453,	// (0x00063d7f) cell_top_day_name_pane_ParamLimits

0x9453,	// (0x00063d7f) cell_top_day_name_pane

0x9476,	// (0x00063da2) cell_area_left_week_number_pane_ParamLimits

0x9476,	// (0x00063da2) cell_area_left_week_number_pane

0x948a,	// (0x00063db6) cell_month_view_pane_ParamLimits

0x948a,	// (0x00063db6) cell_month_view_pane

0xd4e1,	// (0x00067e0d) frm_month_g1

0x94af,	// (0x00063ddb) frm_month_g2

0x94c0,	// (0x00063dec) frm_month_g3

0x94d1,	// (0x00063dfd) frm_month_g4

0x94e2,	// (0x00063e0e) frm_month_g5

0x94f3,	// (0x00063e1f) frm_month_g6

0x9504,	// (0x00063e30) frm_month_g7

0xd4ee,	// (0x00067e1a) frm_month_g8

0x9515,	// (0x00063e41) frm_month_g9

0x9525,	// (0x00063e51) frm_month_g10

0x9535,	// (0x00063e61) frm_month_g11

0x9545,	// (0x00063e71) frm_month_g12

0x9555,	// (0x00063e81) frm_month_g13

0x9565,	// (0x00063e91) frm_month_g14

0x9575,	// (0x00063ea1) frm_month_g15

0x9587,	// (0x00063eb3) frm_month_g16

0x000f,

0xfd79,	// (0x0006a6a5) frm_month_g

0xd4fb,	// (0x00067e27) cell_top_day_name_pane_t1

0x9599,	// (0x00063ec5) cell_area_left_week_number_pane_g1

0x95a5,	// (0x00063ed1) cell_area_left_week_number_pane_t1

0xe8a1,	// (0x000691cd) cell_month_view_pane_g1

0x95b8,	// (0x00063ee4) cell_month_view_pane_t1

0x0bcb,	// (0x0005b4f7) main_fps_pane

0xca91,	// (0x000673bd) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xca91,	// (0x000673bd) cmail_ddmenu_btn02_pane_cp1

0xcaad,	// (0x000673d9) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xcaad,	// (0x000673d9) cmail_ddmenu_btn02_pane_cp2

0x8cec,	// (0x00063618) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8cec,	// (0x00063618) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc9e,	// (0x0006a5ca) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc9e,	// (0x0006a5ca) cmail_ddmenu_btn02_pane_g

0x8d0a,	// (0x00063636) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8d0a,	// (0x00063636) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfca3,	// (0x0006a5cf) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfca3,	// (0x0006a5cf) cmail_ddmenu_btn02_pane_t

0x95cb,	// (0x00063ef7) fps_text_pane_ParamLimits

0x95cb,	// (0x00063ef7) fps_text_pane

0x95e1,	// (0x00063f0d) main_fps_pane_g1_ParamLimits

0x95e1,	// (0x00063f0d) main_fps_pane_g1

0x95f7,	// (0x00063f23) wait_bar_pane_cp010_ParamLimits

0x95f7,	// (0x00063f23) wait_bar_pane_cp010

0x9608,	// (0x00063f34) fps_text_pane_t1_ParamLimits

0x9608,	// (0x00063f34) fps_text_pane_t1

0xefef,	// (0x0006991b) cam4_image_uncrop_pane_g1

0xeff8,	// (0x00069924) cam4_image_uncrop_pane_g2

0x5e4e,	// (0x0006077a) cam4_image_uncrop_pane_g3

0x5e57,	// (0x00060783) cam4_image_uncrop_pane_g4

0x0003,

0xf769,	// (0x0006a095) cam4_image_uncrop_pane_g

0x940b,	// (0x00063d37) dia3_listrow_pane_ParamLimits

0x0bcb,	// (0x0005b4f7) main_phob2_pane

0x87e7,	// (0x00063113) cell_tport_appsw_pane_cp02_ParamLimits

0x87e7,	// (0x00063113) cell_tport_appsw_pane_cp02

0x87f7,	// (0x00063123) cell_tport_appsw_pane_cp03_ParamLimits

0x87f7,	// (0x00063123) cell_tport_appsw_pane_cp03

0x0bcb,	// (0x0005b4f7) phob2_contact_card_pane

0x0bcb,	// (0x0005b4f7) phob2_listscroll_pane

0xd50e,	// (0x00067e3a) phob2_list_pane

0xd516,	// (0x00067e42) scroll_pane_cp034

0x9620,	// (0x00063f4c) phob2_cc_data_pane_ParamLimits

0x9620,	// (0x00063f4c) phob2_cc_data_pane

0x963d,	// (0x00063f69) phob2_cc_listscroll_pane_ParamLimits

0x963d,	// (0x00063f69) phob2_cc_listscroll_pane

0x9213,	// (0x00063b3f) list_double_large_graphic_phob2_pane_ParamLimits

0x9213,	// (0x00063b3f) list_double_large_graphic_phob2_pane

0x9659,	// (0x00063f85) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9659,	// (0x00063f85) list_double_large_graphic_phob2_pane_g1

0x966f,	// (0x00063f9b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x966f,	// (0x00063f9b) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfd9a,	// (0x0006a6c6) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd9a,	// (0x0006a6c6) list_double_large_graphic_phob2_pane_g

0x967b,	// (0x00063fa7) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x967b,	// (0x00063fa7) list_double_large_graphic_phob2_pane_t1

0x9691,	// (0x00063fbd) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9691,	// (0x00063fbd) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfd9f,	// (0x0006a6cb) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfd9f,	// (0x0006a6cb) list_double_large_graphic_phob2_pane_t

0x0bcb,	// (0x0005b4f7) list_highlight_pane_cp024

0x96a6,	// (0x00063fd2) phob2_cc_button_pane

0x96ae,	// (0x00063fda) phob2_cc_data_pane_g1_ParamLimits

0x96ae,	// (0x00063fda) phob2_cc_data_pane_g1

0x96c3,	// (0x00063fef) phob2_cc_data_pane_g2_ParamLimits

0x96c3,	// (0x00063fef) phob2_cc_data_pane_g2

0x0001,

0xfda4,	// (0x0006a6d0) phob2_cc_data_pane_g_ParamLimits

0xfda4,	// (0x0006a6d0) phob2_cc_data_pane_g

0x96d3,	// (0x00063fff) phob2_cc_data_pane_t1_ParamLimits

0x96d3,	// (0x00063fff) phob2_cc_data_pane_t1

0x96eb,	// (0x00064017) phob2_cc_data_pane_t2_ParamLimits

0x96eb,	// (0x00064017) phob2_cc_data_pane_t2

0x9703,	// (0x0006402f) phob2_cc_data_pane_t3_ParamLimits

0x9703,	// (0x0006402f) phob2_cc_data_pane_t3

0x0002,

0xfda9,	// (0x0006a6d5) phob2_cc_data_pane_t_ParamLimits

0xfda9,	// (0x0006a6d5) phob2_cc_data_pane_t

0xd51e,	// (0x00067e4a) phob2_cc_list_pane_ParamLimits

0xd51e,	// (0x00067e4a) phob2_cc_list_pane

0xc3a6,	// (0x00066cd2) scroll_pane_cp035_ParamLimits

0xc3a6,	// (0x00066cd2) scroll_pane_cp035

0xbc0f,	// (0x0006653b) bg_button_pane_cp033

0xd52a,	// (0x00067e56) phob2_cc_button_pane_g1

0xd536,	// (0x00067e62) phob2_cc_button_pane_t1

0xd54b,	// (0x00067e77) phob2_cc_button_pane_t2

0x0001,

0xfdb0,	// (0x0006a6dc) phob2_cc_button_pane_t

0x971b,	// (0x00064047) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x971b,	// (0x00064047) list_double_large_graphic_phob2_cc_pane

0x9749,	// (0x00064075) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9749,	// (0x00064075) list_double_large_graphic_phob2_cc_pane_g1

0x9755,	// (0x00064081) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9755,	// (0x00064081) list_double_large_graphic_phob2_cc_pane_g2

0x9761,	// (0x0006408d) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9761,	// (0x0006408d) list_double_large_graphic_phob2_cc_pane_g3

0x976d,	// (0x00064099) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x976d,	// (0x00064099) list_double_large_graphic_phob2_cc_pane_g4

0x9779,	// (0x000640a5) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9779,	// (0x000640a5) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdb5,	// (0x0006a6e1) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdb5,	// (0x0006a6e1) list_double_large_graphic_phob2_cc_pane_g

0x9785,	// (0x000640b1) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9785,	// (0x000640b1) list_double_large_graphic_phob2_cc_pane_t1

0x97ae,	// (0x000640da) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x97ae,	// (0x000640da) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdc0,	// (0x0006a6ec) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdc0,	// (0x0006a6ec) list_double_large_graphic_phob2_cc_pane_t

0xd55d,	// (0x00067e89) list_highlight_pane_cp025_ParamLimits

0xd55d,	// (0x00067e89) list_highlight_pane_cp025

0xbc0f,	// (0x0006653b) bg_button_pane_cp033_ParamLimits

0xd52a,	// (0x00067e56) phob2_cc_button_pane_g1_ParamLimits

0xd536,	// (0x00067e62) phob2_cc_button_pane_t1_ParamLimits

0xd54b,	// (0x00067e77) phob2_cc_button_pane_t2_ParamLimits

0xfdb0,	// (0x0006a6dc) phob2_cc_button_pane_t_ParamLimits

0x0db9,	// (0x0005b6e5) popup_wgtman_window

0xc4a9,	// (0x00066dd5) scroll_pane_cp038

0x918c,	// (0x00063ab8) wgtman_btn_pane_cp_01_ParamLimits

0x918c,	// (0x00063ab8) wgtman_btn_pane_cp_01

0xd56b,	// (0x00067e97) wgtman_content_pane

0xd574,	// (0x00067ea0) wgtman_heading_pane

0x0bcb,	// (0x0005b4f7) bg_heading_pane_cp02

0xd57d,	// (0x00067ea9) wgtman_heading_pane_g1

0xd585,	// (0x00067eb1) wgtman_heading_pane_t1

0xd593,	// (0x00067ebf) scroll_pane_cp036

0xd59b,	// (0x00067ec7) wgtman_list_pane

0xd5a3,	// (0x00067ecf) wgtman_list_pane_t1_ParamLimits

0xd5a3,	// (0x00067ecf) wgtman_list_pane_t1

0xd97a,	// (0x000682a6) cam4_grid_pane

0x6c55,	// (0x00061581) bg_button_pane_cp015_ParamLimits

0x6c65,	// (0x00061591) bg_button_pane_cp016_ParamLimits

0x6c77,	// (0x000615a3) bg_button_pane_cp017_ParamLimits

0x6cd3,	// (0x000615ff) popup_vitu2_query_window_g3_ParamLimits

0x6cd3,	// (0x000615ff) popup_vitu2_query_window_g3

0x6d86,	// (0x000616b2) popup_vitu2_query_window_t6_ParamLimits

0x6d86,	// (0x000616b2) popup_vitu2_query_window_t6

0x6db1,	// (0x000616dd) popup_vitu2_query_window_t7_ParamLimits

0x6db1,	// (0x000616dd) popup_vitu2_query_window_t7

0xefef,	// (0x0006991b) cam4_grid_pane_g1

0xeff8,	// (0x00069924) cam4_grid_pane_g2

0xd5ba,	// (0x00067ee6) cam4_grid_pane_g3

0xd5c3,	// (0x00067eef) cam4_grid_pane_g4

0x0003,

0xfdc5,	// (0x0006a6f1) cam4_grid_pane_g

0x1ce1,	// (0x0005c60d) aid_placing_vt_slider_lsc_ParamLimits

0x1f51,	// (0x0005c87d) vidtel_button_pane_ParamLimits

0x1f51,	// (0x0005c87d) vidtel_button_pane

0x0bcb,	// (0x0005b4f7) bg_button_pane_cp034

0x97d7,	// (0x00064103) vidtel_button_pane_g1

0x97df,	// (0x0006410b) vidtel_button_pane_t1

0x6911,	// (0x0006123d) aid_size_vtel_slider_touch

0xc3a6,	// (0x00066cd2) scroll_pane_cp039

0xc4d8,	// (0x00066e04) ncim_query_button_pane_cp01_ParamLimits

0xc4f7,	// (0x00066e23) ncimui_query_pane_g1_ParamLimits

0xbc0f,	// (0x0006653b) input_focus_pane_cp012_ParamLimits

0xc51c,	// (0x00066e48) ncim_query_entry_pane_t1_ParamLimits

0xc3a6,	// (0x00066cd2) scroll_pane_cp039_ParamLimits

0xad24,	// (0x00065650) navi_pane_bcale_mc_g1

0xad2c,	// (0x00065658) navi_pane_bcale_mc_t1

0xcae1,	// (0x0006740d) main_sp_fs_email_pane_g1

0xcaed,	// (0x00067419) main_sp_fs_email_pane_g2

0x0001,

0xfb56,	// (0x0006a482) main_sp_fs_email_pane_g

0xcf6a,	// (0x00067896) list_single_cale_mrui_row_pane_g3_ParamLimits

0xcf6a,	// (0x00067896) list_single_cale_mrui_row_pane_g3

0x8d2a,	// (0x00063656) list_single_recal_day_pane_g5_event_pane

0xd0d3,	// (0x000679ff) list_single_recal_day_pane_g7

0xd5cc,	// (0x00067ef8) list_recal_day_event_pane_cp01

0xd5d5,	// (0x00067f01) list_recal_vselct_arw_lo_pane_cp01

0xd5dd,	// (0x00067f09) list_recal_vselct_arw_up_pane_cp01

0xd5e5,	// (0x00067f11) list_recal_vselct_pane_cp01

0x6b50,	// (0x0006147c) list_recal_day_event_pane_cp01_g1

0xd5ef,	// (0x00067f1b) list_recal_day_event_pane_cp01_t1

0xd0db,	// (0x00067a07) list_single_recal_day_pane_t1_ParamLimits

0x8d40,	// (0x0006366c) list_single_recal_day_pane_t2_ParamLimits

0xfcb3,	// (0x0006a5df) list_single_recal_day_pane_t_ParamLimits

0xa02f,	// (0x0006495b) bg_notes_pane_ParamLimits

0xa0da,	// (0x00064a06) list_notes_pane_ParamLimits

0x10d4,	// (0x0005ba00) scroll_pane_cp06_ParamLimits

0xa11a,	// (0x00064a46) main_notes_pane_ParamLimits

0xbc0f,	// (0x0006653b) main_welc_pane

0x9808,	// (0x00064134) main_welc_body_pane_ParamLimits

0x9808,	// (0x00064134) main_welc_body_pane

0x9824,	// (0x00064150) main_welc_opti_pane_ParamLimits

0x9824,	// (0x00064150) main_welc_opti_pane

0x9870,	// (0x0006419c) main_welc_pane_t1_ParamLimits

0x9870,	// (0x0006419c) main_welc_pane_t1

0x98d6,	// (0x00064202) main_welc_body_row_pane_ParamLimits

0x98d6,	// (0x00064202) main_welc_body_row_pane

0xd5fd,	// (0x00067f29) main_welc_opti_row_pane_ParamLimits

0xd5fd,	// (0x00067f29) main_welc_opti_row_pane

0xd60b,	// (0x00067f37) main_welc_opti_row_pane_g1

0x98e9,	// (0x00064215) main_welc_opti_row_pane_t1

0xd613,	// (0x00067f3f) main_welc_body_row_pane_t1

0xd31a,	// (0x00067c46) popup_notif_wgt_heading_pane

0xd334,	// (0x00067c60) aid_size_list_notif_wgt_del_ParamLimits

0xd341,	// (0x00067c6d) list_notif_wgt_row_pane_g1_ParamLimits

0xd34d,	// (0x00067c79) list_notif_wgt_row_pane_g2_ParamLimits

0xd361,	// (0x00067c8d) list_notif_wgt_row_pane_g3_ParamLimits

0xfd1a,	// (0x0006a646) list_notif_wgt_row_pane_g_ParamLimits

0xd36e,	// (0x00067c9a) list_notif_wgt_row_pane_t1_ParamLimits

0xd384,	// (0x00067cb0) list_notif_wgt_row_pane_t2_ParamLimits

0xd396,	// (0x00067cc2) list_notif_wgt_row_pane_t3_ParamLimits

0xfd21,	// (0x0006a64d) list_notif_wgt_row_pane_t_ParamLimits

0x9224,	// (0x00063b50) listrow_wgtman_pane_g1_ParamLimits

0x9231,	// (0x00063b5d) listrow_wgtman_pane_g2_ParamLimits

0xfd4a,	// (0x0006a676) listrow_wgtman_pane_g_ParamLimits

0x9249,	// (0x00063b75) listrow_wgtman_pane_t1_ParamLimits

0x9261,	// (0x00063b8d) listrow_wgtman_pane_t2_ParamLimits

0xfd4f,	// (0x0006a67b) listrow_wgtman_pane_t_ParamLimits

0x9287,	// (0x00063bb3) wait_bar_pane_cp09_ParamLimits

0x0bcb,	// (0x0005b4f7) bg_popup_heading_pane_cp02

0xd622,	// (0x00067f4e) popup_notif_wgt_heading_pane_g1

0xd62a,	// (0x00067f56) popup_notif_wgt_heading_pane_t1

0xe26e,	// (0x00068b9a) main_vids_pane

0x0bcb,	// (0x0005b4f7) vids_listscroll_pane

0x98f8,	// (0x00064224) scroll_pane_cp040

0x0bcb,	// (0x0005b4f7) vids_list_pane

0x9903,	// (0x0006422f) vids_list_double_pane_ParamLimits

0x9903,	// (0x0006422f) vids_list_double_pane

0x9910,	// (0x0006423c) vids_list_double_pane_g1

0x9919,	// (0x00064245) vids_list_double_pane_t1

0x9929,	// (0x00064255) vids_list_double_pane_t2

0x0001,

0xfddc,	// (0x0006a708) vids_list_double_pane_t

0x99cb,	// (0x000642f7) main_ncimui_pane_ParamLimits

0x7a4f,	// (0x0006237b) main_ncimui_pane_g1_ParamLimits

0x7a5b,	// (0x00062387) main_ncimui_pane_g2_ParamLimits

0x7a5b,	// (0x00062387) main_ncimui_pane_g2

0x0001,

0xfa60,	// (0x0006a38c) main_ncimui_pane_g_ParamLimits

0xfa60,	// (0x0006a38c) main_ncimui_pane_g

0x983b,	// (0x00064167) main_welc_pane_g1_ParamLimits

0x983b,	// (0x00064167) main_welc_pane_g1

0x984e,	// (0x0006417a) main_welc_pane_g2_ParamLimits

0x984e,	// (0x0006417a) main_welc_pane_g2

0x0002,

0xfdce,	// (0x0006a6fa) main_welc_pane_g_ParamLimits

0xfdce,	// (0x0006a6fa) main_welc_pane_g

0xa02f,	// (0x0006495b) listscroll_mce_pane_ParamLimits

0x2fb5,	// (0x0005d8e1) wait_bar_pane_cp10

0xe254,	// (0x00068b80) main_cale_day_pane_ParamLimits

0xe254,	// (0x00068b80) main_cale_week_pane_ParamLimits

0xa02f,	// (0x0006495b) main_messa_pane_ParamLimits

0x5265,	// (0x0005fb91) main_clock2_btn_pane_ParamLimits

0x5265,	// (0x0005fb91) main_clock2_btn_pane

0xea29,	// (0x00069355) main_clock2_btn_pane_cp01_ParamLimits

0xea29,	// (0x00069355) main_clock2_btn_pane_cp01

0xcf25,	// (0x00067851) list_cale_mrui_pane_ParamLimits

0xd3ca,	// (0x00067cf6) main_cf0_pane_g2

0x0001,

0xfd28,	// (0x0006a654) main_cf0_pane_g

0x9425,	// (0x00063d51) area_left_week_number_pane_ParamLimits

0x9431,	// (0x00063d5d) area_top_day_name_pane_ParamLimits

0x9442,	// (0x00063d6e) frame_month_view_pane_ParamLimits

0xd4d3,	// (0x00067dff) grid_month_view_pane_ParamLimits

0xd4e1,	// (0x00067e0d) frm_month_g1_ParamLimits

0x94af,	// (0x00063ddb) frm_month_g2_ParamLimits

0x94c0,	// (0x00063dec) frm_month_g3_ParamLimits

0x94d1,	// (0x00063dfd) frm_month_g4_ParamLimits

0x94e2,	// (0x00063e0e) frm_month_g5_ParamLimits

0x94f3,	// (0x00063e1f) frm_month_g6_ParamLimits

0x9504,	// (0x00063e30) frm_month_g7_ParamLimits

0xd4ee,	// (0x00067e1a) frm_month_g8_ParamLimits

0x9515,	// (0x00063e41) frm_month_g9_ParamLimits

0x9525,	// (0x00063e51) frm_month_g10_ParamLimits

0x9535,	// (0x00063e61) frm_month_g11_ParamLimits

0x9545,	// (0x00063e71) frm_month_g12_ParamLimits

0x9555,	// (0x00063e81) frm_month_g13_ParamLimits

0x9565,	// (0x00063e91) frm_month_g14_ParamLimits

0x9575,	// (0x00063ea1) frm_month_g15_ParamLimits

0x9587,	// (0x00063eb3) frm_month_g16_ParamLimits

0xfd79,	// (0x0006a6a5) frm_month_g_ParamLimits

0xd4fb,	// (0x00067e27) cell_top_day_name_pane_t1_ParamLimits

0x9599,	// (0x00063ec5) cell_area_left_week_number_pane_g1_ParamLimits

0x95a5,	// (0x00063ed1) cell_area_left_week_number_pane_t1_ParamLimits

0xe8a1,	// (0x000691cd) cell_month_view_pane_g1_ParamLimits

0x95b8,	// (0x00063ee4) cell_month_view_pane_t1_ParamLimits

0xa027,	// (0x00064953) main_clock2_btn_pane_g1

0xd638,	// (0x00067f64) main_clock2_btn_pane_t1

0xbc0f,	// (0x0006653b) listscroll_cmail_pane_ParamLimits

0xcae1,	// (0x0006740d) main_sp_fs_email_pane_g1_ParamLimits

0xcaed,	// (0x00067419) main_sp_fs_email_pane_g2_ParamLimits

0xfb56,	// (0x0006a482) main_sp_fs_email_pane_g_ParamLimits

0xd04f,	// (0x0006797b) list_recal_day_pane_ParamLimits

0xd060,	// (0x0006798c) mian_recal_day_pane_t1

0x84c0,	// (0x00062dec) list_single_dyc_row_text_pane_t4_ParamLimits

0x84c0,	// (0x00062dec) list_single_dyc_row_text_pane_t4

0x84f7,	// (0x00062e23) list_single_dyc_row_text_pane_t5_ParamLimits

0x84f7,	// (0x00062e23) list_single_dyc_row_text_pane_t5

0xcb9f,	// (0x000674cb) list_single_dyc_row_text_pane_t6_ParamLimits

0xcb9f,	// (0x000674cb) list_single_dyc_row_text_pane_t6

0x2ae6,	// (0x0005d412) aid_mgn_list_cale_time_pane

0x99cb,	// (0x000642f7) main_gallery2_pane_ParamLimits

0xea3d,	// (0x00069369) main_clock2_pane_cp01_t1

0xea4b,	// (0x00069377) main_clock2_pane_cp01_t3

0x0001,

0x030d,	// (0x0005ac39) main_clock2_pane_cp01_t

0x1456,	// (0x0005bd82) cale_week_scroll_pane_g16_ParamLimits

0x1456,	// (0x0005bd82) cale_week_scroll_pane_g16

0xa389,	// (0x00064cb5) vorec_slider_pane

0x97df,	// (0x0006410b) vidtel_button_pane_t1_ParamLimits

0x8de5,	// (0x00063711) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8df7,	// (0x00063723) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8e08,	// (0x00063734) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8e08,	// (0x00063734) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfcd6,	// (0x0006a602) main_fs_bigclock_clock_pane_g_ParamLimits

0x8e1b,	// (0x00063747) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8e36,	// (0x00063762) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfcdf,	// (0x0006a60b) main_fs_bigclock_clock_pane_t_ParamLimits

0x4aeb,	// (0x0005f417) main_mup3_lyrics_pane_ParamLimits

0x4aeb,	// (0x0005f417) main_mup3_lyrics_pane

0x995b,	// (0x00064287) main_mup3_lyrics_pane_t1_ParamLimits

0x995b,	// (0x00064287) main_mup3_lyrics_pane_t1

0xd6ea,	// (0x00068016) aid_main_mp4_pane_t1_area

0xd6ea,	// (0x00068016) aid_main_mp4_pane_t2_area

0xd792,	// (0x000680be) main_mp4_pane_g7_ParamLimits

0xd792,	// (0x000680be) main_mp4_pane_g7

0xd79e,	// (0x000680ca) main_mp4_pane_g8_ParamLimits

0xd79e,	// (0x000680ca) main_mp4_pane_g8

0x5cbe,	// (0x000605ea) aid_call6_pane_g1_size

0x9735,	// (0x00064061) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9735,	// (0x00064061) list_double_large_graphic_phob2_other_pane

0xac77,	// (0x000655a3) list_double_large_graphic_phob2_other_pane_g1

0x0bcb,	// (0x0005b4f7) list_highlight_pane_cp026

0xbc0f,	// (0x0006653b) main_welc_pane_ParamLimits

0x81e9,	// (0x00062b15) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x81e9,	// (0x00062b15) main_sp_fs_ctrlbar_pane_g3

0x8201,	// (0x00062b2d) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x8201,	// (0x00062b2d) main_sp_fs_ctrlbar_pane_g4

0x8243,	// (0x00062b6f) toolbar2_fixed_button_pane_cp01

0x824e,	// (0x00062b7a) toolbar2_fixed_button_pane_cp02

0x8259,	// (0x00062b85) toolbar2_fixed_button_pane_cp03

0x97f5,	// (0x00064121) list_welc_entry_pane_ParamLimits

0x97f5,	// (0x00064121) list_welc_entry_pane

0x9861,	// (0x0006418d) main_welc_pane_g3_ParamLimits

0x9861,	// (0x0006418d) main_welc_pane_g3

0x988a,	// (0x000641b6) main_welc_pane_t2_ParamLimits

0x988a,	// (0x000641b6) main_welc_pane_t2

0x98a0,	// (0x000641cc) main_welc_pane_t3_ParamLimits

0x98a0,	// (0x000641cc) main_welc_pane_t3

0x0002,

0xfdd5,	// (0x0006a701) main_welc_pane_t_ParamLimits

0xfdd5,	// (0x0006a701) main_welc_pane_t

0x98b5,	// (0x000641e1) welc_button_pane_ParamLimits

0x98b5,	// (0x000641e1) welc_button_pane

0x98c6,	// (0x000641f2) welc_service_logo_pane_ParamLimits

0x98c6,	// (0x000641f2) welc_service_logo_pane

0xd646,	// (0x00067f72) list_single_welc_entry_pane_ParamLimits

0xd646,	// (0x00067f72) list_single_welc_entry_pane

0xd657,	// (0x00067f83) list_single_welc_entry_pane_g1

0xd65f,	// (0x00067f8b) list_single_welc_entry_pane_t1

0xd66d,	// (0x00067f99) list_single_welc_entry_pane_t2

0x0001,

0xfde1,	// (0x0006a70d) list_single_welc_entry_pane_t

0x0bcb,	// (0x0005b4f7) bg_button_pane_cp035

0xd67b,	// (0x00067fa7) welc_button_pane_t1

0xd689,	// (0x00067fb5) welc_service_logo_pane_g1

0xd692,	// (0x00067fbe) welc_service_logo_pane_g2

0x0001,

0xfde6,	// (0x0006a712) welc_service_logo_pane_g
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
	};

} // end of namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Small
