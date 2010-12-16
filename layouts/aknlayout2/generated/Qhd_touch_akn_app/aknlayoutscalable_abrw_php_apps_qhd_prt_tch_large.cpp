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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x000847fc };

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
0x4590,	// (0x00088d8c) Screen

0x459c,	// (0x00088d98) application_window

0x45f8,	// (0x00088df4) area_bottom_pane_ParamLimits

0x45f8,	// (0x00088df4) area_bottom_pane

0x4650,	// (0x00088e4c) area_top_pane_ParamLimits

0x4650,	// (0x00088e4c) area_top_pane

0x46b4,	// (0x00088eb0) call_video_uplink_pane_ParamLimits

0x46b4,	// (0x00088eb0) call_video_uplink_pane

0x46f3,	// (0x00088eef) main_pane_ParamLimits

0x46f3,	// (0x00088eef) main_pane

0x2c2f,	// (0x0008742b) context_pane

0x7400,	// (0x0008bbfc) navi_pane

0x7426,	// (0x0008bc22) popup_cale_events_window_ParamLimits

0x7426,	// (0x0008bc22) popup_cale_events_window

0x2c42,	// (0x0008743e) popup_mup_playback_window

0x743e,	// (0x0008bc3a) signal_pane

0xe3d8,	// (0x00092bd4) main_browser_pane

0xe5f0,	// (0x00092dec) main_burst_pane

0x727e,	// (0x0008ba7a) main_calc_pane

0x2c23,	// (0x0008741f) main_cale_day_pane

0x4bfb,	// (0x000893f7) main_cale_month_pane

0x2c23,	// (0x0008741f) main_cale_week_pane

0xe5f0,	// (0x00092dec) main_call_pane

0xe066,	// (0x00092862) main_call_poc_pane

0xe5f0,	// (0x00092dec) main_camera_pane

0xe5f0,	// (0x00092dec) main_chi_dic_pane

0xed61,	// (0x0009355d) main_clock_pane

0xe066,	// (0x00092862) main_fmradio_pane

0xe5f0,	// (0x00092dec) main_graph_messa_pane

0xe066,	// (0x00092862) main_help_pane

0xe3d8,	// (0x00092bd4) main_im_pane

0xe2c1,	// (0x00092abd) main_image_pane_ParamLimits

0xe2c1,	// (0x00092abd) main_image_pane

0xe066,	// (0x00092862) main_location2_pane

0xe5f0,	// (0x00092dec) main_location_pane

0xe2c1,	// (0x00092abd) main_messa_pane

0xe066,	// (0x00092862) main_mp2_pane

0xe5f0,	// (0x00092dec) main_mp_pane

0xe066,	// (0x00092862) main_msg_pane

0xe066,	// (0x00092862) main_mup_eq_pane

0xe066,	// (0x00092862) main_mup_pane

0xe3d8,	// (0x00092bd4) main_notes_pane

0xe066,	// (0x00092862) main_pec_pane

0xe066,	// (0x00092862) main_phob_pane

0xe066,	// (0x00092862) main_pinb_pane

0xe066,	// (0x00092862) main_postcard_pane

0xe066,	// (0x00092862) main_qdial_pane

0xe5f0,	// (0x00092dec) main_skin_pane

0xe066,	// (0x00092862) main_smil2_pane

0xe5f0,	// (0x00092dec) main_smil_pane

0xe5f0,	// (0x00092dec) main_video_pane

0xe5f0,	// (0x00092dec) main_video_tele_pane

0xe2c1,	// (0x00092abd) main_viewer_pane_ParamLimits

0xe2c1,	// (0x00092abd) main_viewer_pane

0xe5f0,	// (0x00092dec) main_vorec_pane

0x72ca,	// (0x0008bac6) popup_blid_sat_info_window_ParamLimits

0x72ca,	// (0x0008bac6) popup_blid_sat_info_window

0x72ea,	// (0x0008bae6) popup_dyc_status_message_window_ParamLimits

0x72ea,	// (0x0008bae6) popup_dyc_status_message_window

0x72fa,	// (0x0008baf6) popup_grid_large_graphic_window_ParamLimits

0x72fa,	// (0x0008baf6) popup_grid_large_graphic_window

0x738b,	// (0x0008bb87) popup_loc_request_window_ParamLimits

0x738b,	// (0x0008bb87) popup_loc_request_window

0x73d8,	// (0x0008bbd4) popup_wml_address_window_ParamLimits

0x73d8,	// (0x0008bbd4) popup_wml_address_window

0x714e,	// (0x0008b94a) call_muted_g1

0x6e41,	// (0x0008b63d) popup_call_audio_conf_window_ParamLimits

0x6e41,	// (0x0008b63d) popup_call_audio_conf_window

0x715e,	// (0x0008b95a) popup_call_audio_first_window_ParamLimits

0x715e,	// (0x0008b95a) popup_call_audio_first_window

0x719e,	// (0x0008b99a) popup_call_audio_in_window_ParamLimits

0x719e,	// (0x0008b99a) popup_call_audio_in_window

0x71c2,	// (0x0008b9be) popup_call_audio_out_window_ParamLimits

0x71c2,	// (0x0008b9be) popup_call_audio_out_window

0x71e4,	// (0x0008b9e0) popup_call_audio_second_window_ParamLimits

0x71e4,	// (0x0008b9e0) popup_call_audio_second_window

0x7214,	// (0x0008ba10) popup_call_audio_wait_window_ParamLimits

0x7214,	// (0x0008ba10) popup_call_audio_wait_window

0x7235,	// (0x0008ba31) popup_number_entry_window_ParamLimits

0x7235,	// (0x0008ba31) popup_number_entry_window

0xdc45,	// (0x00092441) bg_popup_call_pane_cp05_ParamLimits

0xdc45,	// (0x00092441) bg_popup_call_pane_cp05

0xdc65,	// (0x00092461) popup_number_entry_window_t1

0xdc78,	// (0x00092474) popup_number_entry_window_t2

0xdc8a,	// (0x00092486) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x00093819) popup_number_entry_window_t

0xdc9c,	// (0x00092498) text_title_cp2

0xdcaf,	// (0x000924ab) bg_popup_call_pane_cp_ParamLimits

0xdcaf,	// (0x000924ab) bg_popup_call_pane_cp

0xdcbd,	// (0x000924b9) call_thumbnail_pane

0xdcc5,	// (0x000924c1) popup_call_audio_in_window_g1_ParamLimits

0xdcc5,	// (0x000924c1) popup_call_audio_in_window_g1

0xdcd1,	// (0x000924cd) popup_call_audio_in_window_g2_ParamLimits

0xdcd1,	// (0x000924cd) popup_call_audio_in_window_g2

0xdcdd,	// (0x000924d9) popup_call_audio_in_window_g3_ParamLimits

0xdcdd,	// (0x000924d9) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x00093822) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x00093822) popup_call_audio_in_window_g

0xdce9,	// (0x000924e5) popup_call_audio_in_window_t1_ParamLimits

0xdce9,	// (0x000924e5) popup_call_audio_in_window_t1

0xdd05,	// (0x00092501) popup_call_audio_in_window_t2_ParamLimits

0xdd05,	// (0x00092501) popup_call_audio_in_window_t2

0xdd21,	// (0x0009251d) popup_call_audio_in_window_t3_ParamLimits

0xdd21,	// (0x0009251d) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x00093829) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x00093829) popup_call_audio_in_window_t

0xdcaf,	// (0x000924ab) bg_popup_call_pane_cp01_ParamLimits

0xdcaf,	// (0x000924ab) bg_popup_call_pane_cp01

0xdcbd,	// (0x000924b9) call_thumbnail_pane_cp02

0xdd34,	// (0x00092530) call_type_pane_cp022

0xdd3c,	// (0x00092538) popup_call_audio_out_window_g1_ParamLimits

0xdd3c,	// (0x00092538) popup_call_audio_out_window_g1

0xdd4e,	// (0x0009254a) popup_call_audio_out_window_g2_ParamLimits

0xdd4e,	// (0x0009254a) popup_call_audio_out_window_g2

0xdd5a,	// (0x00092556) popup_call_audio_out_window_g3_ParamLimits

0xdd5a,	// (0x00092556) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x00093830) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x00093830) popup_call_audio_out_window_g

0xdd6c,	// (0x00092568) popup_call_audio_out_window_t1_ParamLimits

0xdd6c,	// (0x00092568) popup_call_audio_out_window_t1

0xdd84,	// (0x00092580) popup_call_audio_out_window_t2_ParamLimits

0xdd84,	// (0x00092580) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x00093837) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x00093837) popup_call_audio_out_window_t

0xdd99,	// (0x00092595) bg_popup_call_pane_ParamLimits

0xdd99,	// (0x00092595) bg_popup_call_pane

0x490b,	// (0x00089107) call_thumbnail_pane_cp_ParamLimits

0x490b,	// (0x00089107) call_thumbnail_pane_cp

0xde2b,	// (0x00092627) call_type_pane_cp01_ParamLimits

0xde2b,	// (0x00092627) call_type_pane_cp01

0xde6f,	// (0x0009266b) popup_call_audio_first_window_g1_ParamLimits

0xde6f,	// (0x0009266b) popup_call_audio_first_window_g1

0xdebb,	// (0x000926b7) popup_call_audio_first_window_g2_ParamLimits

0xdebb,	// (0x000926b7) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x0009383c) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x0009383c) popup_call_audio_first_window_g

0xdeff,	// (0x000926fb) popup_call_audio_first_window_t1_ParamLimits

0xdeff,	// (0x000926fb) popup_call_audio_first_window_t1

0xdfab,	// (0x000927a7) popup_call_audio_first_window_t4_ParamLimits

0xdfab,	// (0x000927a7) popup_call_audio_first_window_t4

0xe037,	// (0x00092833) popup_call_audio_first_window_t5_ParamLimits

0xe037,	// (0x00092833) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x00093841) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x00093841) popup_call_audio_first_window_t

0xe066,	// (0x00092862) bg_popup_call_pane_cp02

0xe070,	// (0x0009286c) call_type_pane_cp023

0xe078,	// (0x00092874) popup_call_audio_wait_window_g1

0xe080,	// (0x0009287c) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x00093848) popup_call_audio_wait_window_g

0xe088,	// (0x00092884) popup_call_audio_wait_window_t3

0xe096,	// (0x00092892) bg_popup_call_pane_cp03_ParamLimits

0xe096,	// (0x00092892) bg_popup_call_pane_cp03

0xe0f6,	// (0x000928f2) call_thumbnail_pane_cp011_ParamLimits

0xe0f6,	// (0x000928f2) call_thumbnail_pane_cp011

0xe102,	// (0x000928fe) call_type_pane_cp034_ParamLimits

0xe102,	// (0x000928fe) call_type_pane_cp034

0xe13e,	// (0x0009293a) popup_call_audio_second_window_g1_ParamLimits

0xe13e,	// (0x0009293a) popup_call_audio_second_window_g1

0xe17a,	// (0x00092976) popup_call_audio_second_window_g2_ParamLimits

0xe17a,	// (0x00092976) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x0009384d) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x0009384d) popup_call_audio_second_window_g

0xe1b6,	// (0x000929b2) popup_call_audio_second_window_t1_ParamLimits

0xe1b6,	// (0x000929b2) popup_call_audio_second_window_t1

0xe237,	// (0x00092a33) popup_call_audio_second_window_t2_ParamLimits

0xe237,	// (0x00092a33) popup_call_audio_second_window_t2

0xe26d,	// (0x00092a69) popup_call_audio_second_window_t3_ParamLimits

0xe26d,	// (0x00092a69) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x00093852) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x00093852) popup_call_audio_second_window_t

0xe066,	// (0x00092862) bg_popup_call_pane_cp04

0xe2a3,	// (0x00092a9f) list_conf_pane

0xe2ab,	// (0x00092aa7) popup_call_audio_conf_window_t1

0xe2b9,	// (0x00092ab5) call_thumbnail_pane_g1

0xe2c1,	// (0x00092abd) bg_pinb_pane_ParamLimits

0xe2c1,	// (0x00092abd) bg_pinb_pane

0xe2cf,	// (0x00092acb) find_pinb_pane

0xe2c1,	// (0x00092abd) listscroll_pinb_pane_ParamLimits

0xe2c1,	// (0x00092abd) listscroll_pinb_pane

0xe2d9,	// (0x00092ad5) pinb_bg_pane_g1

0xe2d9,	// (0x00092ad5) pinb_bg_pane_g2

0xe2d9,	// (0x00092ad5) pinb_bg_pane_g3

0xe2d9,	// (0x00092ad5) pinb_bg_pane_g4

0xe2d9,	// (0x00092ad5) pinb_bg_pane_g5

0xe2d9,	// (0x00092ad5) pinb_bg_pane_g6

0xe2d9,	// (0x00092ad5) pinb_bg_pane_g7

0xe2d9,	// (0x00092ad5) pinb_bg_pane_g8

0xe2d9,	// (0x00092ad5) pinb_bg_pane_g9

0xe2d9,	// (0x00092ad5) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x00093859) pinb_bg_pane_g

0xdc3b,	// (0x00092437) grid_pinb_pane

0xdc3b,	// (0x00092437) list_pinb_pane

0xde1d,	// (0x00092619) scroll_pane_cp01_ParamLimits

0xde1d,	// (0x00092619) scroll_pane_cp01

0xe2e3,	// (0x00092adf) find_pinb_pane_g1_ParamLimits

0xe2e3,	// (0x00092adf) find_pinb_pane_g1

0xe2fb,	// (0x00092af7) find_pinb_pane_t1

0xe30d,	// (0x00092b09) find_pinb_pane_t2

0x0001,

0xf077,	// (0x00093873) find_pinb_pane_t

0xe322,	// (0x00092b1e) input_focus_pane_cp01_ParamLimits

0xe322,	// (0x00092b1e) input_focus_pane_cp01

0xe32e,	// (0x00092b2a) cell_pinb_pane_ParamLimits

0xe32e,	// (0x00092b2a) cell_pinb_pane

0xe33c,	// (0x00092b38) cell_pinb_pane_g1_ParamLimits

0xe33c,	// (0x00092b38) cell_pinb_pane_g1

0xe34a,	// (0x00092b46) cell_pinb_pane_g2_ParamLimits

0xe34a,	// (0x00092b46) cell_pinb_pane_g2

0xe34a,	// (0x00092b46) cell_pinb_pane_g3_ParamLimits

0xe34a,	// (0x00092b46) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x00093878) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x00093878) cell_pinb_pane_g

0xe066,	// (0x00092862) grid_highlight_pane_cp01

0xe32e,	// (0x00092b2a) list_pinb_item_pane_ParamLimits

0xe32e,	// (0x00092b2a) list_pinb_item_pane

0xdc3b,	// (0x00092437) list_highlight_pane_cp02

0xe358,	// (0x00092b54) list_pinb_item_pane_g1_ParamLimits

0xe358,	// (0x00092b54) list_pinb_item_pane_g1

0xe34a,	// (0x00092b46) list_pinb_item_pane_g2_ParamLimits

0xe34a,	// (0x00092b46) list_pinb_item_pane_g2

0xe33c,	// (0x00092b38) list_pinb_item_pane_g3_ParamLimits

0xe33c,	// (0x00092b38) list_pinb_item_pane_g3

0xe34a,	// (0x00092b46) list_pinb_item_pane_g4_ParamLimits

0xe34a,	// (0x00092b46) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x0009387f) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x0009387f) list_pinb_item_pane_g

0xe366,	// (0x00092b62) list_pinb_item_pane_t1_ParamLimits

0xe366,	// (0x00092b62) list_pinb_item_pane_t1

0x4949,	// (0x00089145) calc_display_pane

0x4967,	// (0x00089163) calc_paper_pane

0x4983,	// (0x0008917f) grid_calc_pane

0xdc3b,	// (0x00092437) bg_list_pane_cp01

0xe37a,	// (0x00092b76) clock_g1

0xe37a,	// (0x00092b76) clock_g2

0x0001,

0xf08c,	// (0x00093888) clock_g

0xe384,	// (0x00092b80) clock_t1_ParamLimits

0xe384,	// (0x00092b80) clock_t1

0xe398,	// (0x00092b94) clock_t2_ParamLimits

0xe398,	// (0x00092b94) clock_t2

0xe398,	// (0x00092b94) clock_t3_ParamLimits

0xe398,	// (0x00092b94) clock_t3

0xe398,	// (0x00092b94) clock_t4_ParamLimits

0xe398,	// (0x00092b94) clock_t4

0xe384,	// (0x00092b80) clock_t5_ParamLimits

0xe384,	// (0x00092b80) clock_t5

0xe398,	// (0x00092b94) clock_t6_ParamLimits

0xe398,	// (0x00092b94) clock_t6

0xe398,	// (0x00092b94) clock_t7_ParamLimits

0xe398,	// (0x00092b94) clock_t7

0xe398,	// (0x00092b94) clock_t8_ParamLimits

0xe398,	// (0x00092b94) clock_t8

0xe398,	// (0x00092b94) clock_t9_ParamLimits

0xe398,	// (0x00092b94) clock_t9

0x0008,

0xf091,	// (0x0009388d) clock_t_ParamLimits

0xf091,	// (0x0009388d) clock_t

0xdc3b,	// (0x00092437) popup_clock_analogue_window_cp02

0xdc3b,	// (0x00092437) popup_clock_digital_window_cp01

0xe066,	// (0x00092862) listscroll_help_pane

0xe066,	// (0x00092862) phob_pre_status_pane

0xe3ac,	// (0x00092ba8) grid_qdial_pane

0xe2c1,	// (0x00092abd) listscroll_mce_pane

0xe2c1,	// (0x00092abd) bg_notes_pane

0xe3b6,	// (0x00092bb2) list_notes_pane

0x49af,	// (0x000891ab) scroll_pane_cp06

0xe3c4,	// (0x00092bc0) bg_calc_paper_pane

0x49be,	// (0x000891ba) list_calc_pane

0xe3d8,	// (0x00092bd4) bg_calc_display_pane

0x49d8,	// (0x000891d4) calc_display_pane_t1

0x49ed,	// (0x000891e9) calc_display_pane_t2

0x4a02,	// (0x000891fe) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x000938a0) calc_display_pane_t

0x4a14,	// (0x00089210) cell_calc_pane_ParamLimits

0x4a14,	// (0x00089210) cell_calc_pane

0xe3e4,	// (0x00092be0) bg_calc_paper_pane_g1

0xe3f0,	// (0x00092bec) bg_calc_paper_pane_g2

0xe3fc,	// (0x00092bf8) bg_calc_paper_pane_g3

0xe408,	// (0x00092c04) bg_calc_paper_pane_g4

0xe414,	// (0x00092c10) bg_calc_paper_pane_g5

0x4a41,	// (0x0008923d) bg_calc_paper_pane_g6

0x4a52,	// (0x0008924e) bg_calc_paper_pane_g7

0x4a63,	// (0x0008925f) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x000938a7) bg_calc_paper_pane_g

0x4a74,	// (0x00089270) calc_bg_paper_pane_g9

0x4a85,	// (0x00089281) list_calc_item_pane_ParamLimits

0x4a85,	// (0x00089281) list_calc_item_pane

0xe420,	// (0x00092c1c) list_calc_item_pane_g1

0x4ab1,	// (0x000892ad) list_calc_item_pane_t1_ParamLimits

0x4ab1,	// (0x000892ad) list_calc_item_pane_t1

0x4ac3,	// (0x000892bf) list_calc_item_pane_t2_ParamLimits

0x4ac3,	// (0x000892bf) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x000938b8) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x000938b8) list_calc_item_pane_t

0xe2d9,	// (0x00092ad5) cell_calc_pane_g1

0xe42d,	// (0x00092c29) grid_highlight_pane_cp02

0x4af3,	// (0x000892ef) bg_calc_display_pane_g1

0x4afc,	// (0x000892f8) bg_calc_display_pane_g2

0x4b06,	// (0x00089302) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x000938c2) bg_calc_display_pane_g

0x4b0f,	// (0x0008930b) cell_qdial_pane_ParamLimits

0x4b0f,	// (0x0008930b) cell_qdial_pane

0x4b23,	// (0x0008931f) cell_qdial_pane_g1_ParamLimits

0x4b23,	// (0x0008931f) cell_qdial_pane_g1

0x4b30,	// (0x0008932c) cell_qdial_pane_g2_ParamLimits

0x4b30,	// (0x0008932c) cell_qdial_pane_g2

0xe44f,	// (0x00092c4b) cell_qdial_pane_g3_ParamLimits

0xe44f,	// (0x00092c4b) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x000938c9) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x000938c9) cell_qdial_pane_g

0x4b4e,	// (0x0008934a) cell_qdial_pane_t1_ParamLimits

0x4b4e,	// (0x0008934a) cell_qdial_pane_t1

0x4b66,	// (0x00089362) cell_qdial_pane_t2_ParamLimits

0x4b66,	// (0x00089362) cell_qdial_pane_t2

0x4b79,	// (0x00089375) cell_qdial_pane_t3_ParamLimits

0x4b79,	// (0x00089375) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x000938d2) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x000938d2) cell_qdial_pane_t

0xe066,	// (0x00092862) grid_highlight_pane_cp04

0xe45b,	// (0x00092c57) thumbnail_qdial_pane_ParamLimits

0xe45b,	// (0x00092c57) thumbnail_qdial_pane

0xe4b7,	// (0x00092cb3) list_help_pane

0xe4c0,	// (0x00092cbc) scroll_pane_cp02

0x4b8c,	// (0x00089388) help_list_pane_t1_ParamLimits

0x4b8c,	// (0x00089388) help_list_pane_t1

0xe4c9,	// (0x00092cc5) bg_notes_pane_g2

0xe4d1,	// (0x00092ccd) bg_notes_pane_g3

0xe4d9,	// (0x00092cd5) notes_bg_pane_g1

0xe4e1,	// (0x00092cdd) notes_bg_pane_g4

0xe4e9,	// (0x00092ce5) notes_bg_pane_g5

0xe4f1,	// (0x00092ced) notes_bg_pane_g6

0xe4f9,	// (0x00092cf5) notes_bg_pane_g7

0xe501,	// (0x00092cfd) notes_bg_pane_g8

0xe509,	// (0x00092d05) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x000938f0) notes_bg_pane_g

0x4bc2,	// (0x000893be) list_notes_text_pane_ParamLimits

0x4bc2,	// (0x000893be) list_notes_text_pane

0xe511,	// (0x00092d0d) list_notes_text_pane_g1

0x4bed,	// (0x000893e9) list_notes_text_pane_t1

0x4bfb,	// (0x000893f7) listscroll_cale_week_pane

0x4c29,	// (0x00089425) bg_cale_heading_pane

0xe552,	// (0x00092d4e) bg_cale_pane_cp01

0x4c49,	// (0x00089445) cale_week_corner_pane

0x4c63,	// (0x0008945f) cale_week_day_heading_pane

0x4c83,	// (0x0008947f) cale_week_scroll_pane_g1

0x4c9e,	// (0x0008949a) cale_week_scroll_pane_g2

0x4cb1,	// (0x000894ad) cale_week_scroll_pane_g3

0x4cc4,	// (0x000894c0) cale_week_scroll_pane_g4

0x4cd7,	// (0x000894d3) cale_week_scroll_pane_g5

0x4cea,	// (0x000894e6) cale_week_scroll_pane_g6

0x4cfd,	// (0x000894f9) cale_week_scroll_pane_g7

0x4d12,	// (0x0008950e) cale_week_scroll_pane_g8

0x4d27,	// (0x00089523) cale_week_scroll_pane_g9

0x4d3a,	// (0x00089536) cale_week_scroll_pane_g10

0x4d4d,	// (0x00089549) cale_week_scroll_pane_g11

0x4d60,	// (0x0008955c) cale_week_scroll_pane_g12

0x4d77,	// (0x00089573) cale_week_scroll_pane_g13

0x4d92,	// (0x0008958e) cale_week_scroll_pane_g14

0x4dad,	// (0x000895a9) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x000938ff) cale_week_scroll_pane_g

0x4ddd,	// (0x000895d9) cale_week_time_pane

0x4df2,	// (0x000895ee) grid_cale_week_pane

0xe581,	// (0x00092d7d) scroll_pane_cp08

0x4e11,	// (0x0008960d) cell_cale_week_pane_ParamLimits

0x4e11,	// (0x0008960d) cell_cale_week_pane

0x4e73,	// (0x0008966f) cale_week_day_heading_pane_t1

0x4e8e,	// (0x0008968a) cale_week_day_heading_pane_t2

0x4ea9,	// (0x000896a5) cale_week_day_heading_pane_t3

0x4ec4,	// (0x000896c0) cale_week_day_heading_pane_t4

0x4edf,	// (0x000896db) cale_week_day_heading_pane_t5

0x4efa,	// (0x000896f6) cale_week_day_heading_pane_t6

0x4f15,	// (0x00089711) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x00093920) cale_week_day_heading_pane_t

0xe59e,	// (0x00092d9a) bg_cale_side_pane

0x4f30,	// (0x0008972c) cale_week_time_pane_t1

0x4f4a,	// (0x00089746) cale_week_time_pane_t2

0x4f64,	// (0x00089760) cale_week_time_pane_t3

0x4f7e,	// (0x0008977a) cale_week_time_pane_t4

0x4f98,	// (0x00089794) cale_week_time_pane_t5

0x4fb2,	// (0x000897ae) cale_week_time_pane_t6

0x4fd0,	// (0x000897cc) cale_week_time_pane_t7

0x4ff2,	// (0x000897ee) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x0009392f) cale_week_time_pane_t

0x5016,	// (0x00089812) cell_cale_week_pane_g2

0x503a,	// (0x00089836) cell_cale_week_pane_g3_ParamLimits

0x503a,	// (0x00089836) cell_cale_week_pane_g3

0xe5ac,	// (0x00092da8) grid_highlight_pane_cp07

0xe5b4,	// (0x00092db0) listscroll_gms_pane

0xe5be,	// (0x00092dba) grid_gms_pane

0xe5c7,	// (0x00092dc3) listscroll_gms_pane_g1

0xe5cf,	// (0x00092dcb) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x00093940) listscroll_gms_pane_g

0x5052,	// (0x0008984e) scroll_pane_cp010

0x505d,	// (0x00089859) cell_gms_pane_ParamLimits

0x505d,	// (0x00089859) cell_gms_pane

0x5070,	// (0x0008986c) cell_gms_pane_g1

0xe5d7,	// (0x00092dd3) cell_gms_pane_g2

0xe511,	// (0x00092d0d) cell_gms_pane_g3

0xe5df,	// (0x00092ddb) cell_gms_pane_g4

0x0003,

0xf149,	// (0x00093945) cell_gms_pane_g

0xe5e8,	// (0x00092de4) grid_highlight_pane_cp09

0x70d2,	// (0x0008b8ce) phob_pre_status_pane_g1

0x70da,	// (0x0008b8d6) phob_pre_status_pane_g2

0x70e2,	// (0x0008b8de) phob_pre_status_pane_g3

0x70ea,	// (0x0008b8e6) phob_pre_status_pane_g4

0x0004,

0xf4ef,	// (0x00093ceb) phob_pre_status_pane_g

0x70fa,	// (0x0008b8f6) phob_pre_status_pane_t1

0x710a,	// (0x0008b906) phob_pre_status_pane_t2

0x711a,	// (0x0008b916) phob_pre_status_pane_t3

0x0002,

0xf4fa,	// (0x00093cf6) phob_pre_status_pane_t

0xe5f0,	// (0x00092dec) bg_list_pane_cp05

0x5080,	// (0x0008987c) grid_vorec_pane

0x508a,	// (0x00089886) vorec_t1

0x5098,	// (0x00089894) vorec_t2

0x50a6,	// (0x000898a2) vorec_t3

0x50b4,	// (0x000898b0) vorec_t4

0xbde5,	// (0x000905e1) vorec_t5

0xbdf3,	// (0x000905ef) vorec_t6

0x0004,

0xf152,	// (0x0009394e) vorec_t

0xbe01,	// (0x000905fd) wait_bar_pane_cp01

0x50d0,	// (0x000898cc) cell_vorec_pane_ParamLimits

0x50d0,	// (0x000898cc) cell_vorec_pane

0x50e3,	// (0x000898df) cell_vorec_pane_g1

0xe066,	// (0x00092862) grid_highlight_pane_cp05

0xe32e,	// (0x00092b2a) cams_zoom_pane

0xe32e,	// (0x00092b2a) image_vga_pane

0xe34a,	// (0x00092b46) main_camera_pane_g1

0xe34a,	// (0x00092b46) main_camera_pane_g2

0xe34a,	// (0x00092b46) main_camera_pane_g3

0xe34a,	// (0x00092b46) main_camera_pane_g4

0xe34a,	// (0x00092b46) main_camera_pane_g5

0xe34a,	// (0x00092b46) main_camera_pane_g6

0xe34a,	// (0x00092b46) main_camera_pane_g7

0x0007,

0xf15d,	// (0x00093959) main_camera_pane_g

0xe398,	// (0x00092b94) main_camera_pane_t1

0xe398,	// (0x00092b94) main_camera_pane_t2

0x0001,

0xf16e,	// (0x0009396a) main_camera_pane_t

0x50ed,	// (0x000898e9) cams_zoom_pane_cp_ParamLimits

0x50ed,	// (0x000898e9) cams_zoom_pane_cp

0x511b,	// (0x00089917) image_cif_pane_ParamLimits

0x511b,	// (0x00089917) image_cif_pane

0xdc3b,	// (0x00092437) image_subqcif_pane

0x5129,	// (0x00089925) main_video_pane_g1_ParamLimits

0x5129,	// (0x00089925) main_video_pane_g1

0x5151,	// (0x0008994d) main_video_pane_g2_ParamLimits

0x5151,	// (0x0008994d) main_video_pane_g2

0x5184,	// (0x00089980) main_video_pane_g3_ParamLimits

0x5184,	// (0x00089980) main_video_pane_g3

0x5184,	// (0x00089980) main_video_pane_g4_ParamLimits

0x5184,	// (0x00089980) main_video_pane_g4

0x51b2,	// (0x000899ae) main_video_pane_g5_ParamLimits

0x51b2,	// (0x000899ae) main_video_pane_g5

0xe5f8,	// (0x00092df4) main_video_pane_g6_ParamLimits

0xe5f8,	// (0x00092df4) main_video_pane_g6

0x0006,

0xf173,	// (0x0009396f) main_video_pane_g_ParamLimits

0xf173,	// (0x0009396f) main_video_pane_g

0x51ce,	// (0x000899ca) main_video_pane_t1_ParamLimits

0x51ce,	// (0x000899ca) main_video_pane_t1

0xe37a,	// (0x00092b76) cams_zoom_pane_g1

0xe37a,	// (0x00092b76) cams_zoom_pane_g2

0xe37a,	// (0x00092b76) cams_zoom_pane_g3

0xe37a,	// (0x00092b76) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x0009397e) cams_zoom_pane_g

0xe32e,	// (0x00092b2a) grid_cams_pane

0xe32e,	// (0x00092b2a) linegrid_cams_pane

0x5208,	// (0x00089a04) cell_cams_pane_ParamLimits

0x5208,	// (0x00089a04) cell_cams_pane

0xdc3b,	// (0x00092437) cams_burst_image_pane

0xe37a,	// (0x00092b76) cell_cams_pane_g1

0xdc3b,	// (0x00092437) grid_highlight_pane_cp03

0xe2d9,	// (0x00092ad5) mp_bg_pane_g1

0xdc3b,	// (0x00092437) bg_list_pane_cp03

0xdc3b,	// (0x00092437) bg_mp_pane

0xdc3b,	// (0x00092437) grid_mp_pane

0xe37a,	// (0x00092b76) media_player_g1

0xeaea,	// (0x000932e6) media_player_t1

0xeaea,	// (0x000932e6) media_player_t2

0xeaea,	// (0x000932e6) media_player_t3

0xeaea,	// (0x000932e6) media_player_t4

0xeaea,	// (0x000932e6) media_player_t5

0xeaea,	// (0x000932e6) media_player_t6

0xeaea,	// (0x000932e6) media_player_t7

0x0006,

0xf4d9,	// (0x00093cd5) media_player_t

0xdc3b,	// (0x00092437) wait_bar_pane_cp02

0xf4be,	// (0x00093cba) main_usb_pane_t

0xed61,	// (0x0009355d) cell_mp_pane

0xe2d9,	// (0x00092ad5) cell_mp_pane_g1

0xe066,	// (0x00092862) grid_highlight_pane_cp06

0xe612,	// (0x00092e0e) grid_skin_colour_pane

0xe61a,	// (0x00092e16) list_highlight_pane_cp03

0x521d,	// (0x00089a19) skin_g1

0xe622,	// (0x00092e1e) skin_t1

0xe631,	// (0x00092e2d) skin_t2

0x0001,

0xf1b0,	// (0x000939ac) skin_t

0x5227,	// (0x00089a23) cell_skin_colour_pane_ParamLimits

0x5227,	// (0x00089a23) cell_skin_colour_pane

0xe63f,	// (0x00092e3b) cell_skin_colour_pane_g1

0x52ab,	// (0x00089aa7) call_video_g1_ParamLimits

0x52ab,	// (0x00089aa7) call_video_g1

0x52bb,	// (0x00089ab7) call_video_g2_ParamLimits

0x52bb,	// (0x00089ab7) call_video_g2

0x0001,

0xf1b5,	// (0x000939b1) call_video_g_ParamLimits

0xf1b5,	// (0x000939b1) call_video_g

0x5315,	// (0x00089b11) call_video_uplink_pane_cp1_ParamLimits

0x5315,	// (0x00089b11) call_video_uplink_pane_cp1

0xe651,	// (0x00092e4d) call_video_uplink_pane_cp2

0x53e1,	// (0x00089bdd) video_down_crop_pane_ParamLimits

0x53e1,	// (0x00089bdd) video_down_crop_pane

0x54df,	// (0x00089cdb) video_down_pane_ParamLimits

0x54df,	// (0x00089cdb) video_down_pane

0xe659,	// (0x00092e55) video_down_subqcif_pane_ParamLimits

0xe659,	// (0x00092e55) video_down_subqcif_pane

0xe671,	// (0x00092e6d) video_down_subqcif_pane_cp_ParamLimits

0xe671,	// (0x00092e6d) video_down_subqcif_pane_cp

0xe697,	// (0x00092e93) im_reading_pane_ParamLimits

0xe697,	// (0x00092e93) im_reading_pane

0x55ff,	// (0x00089dfb) im_writing_pane_ParamLimits

0x55ff,	// (0x00089dfb) im_writing_pane

0x561d,	// (0x00089e19) im_reading_pane_t1

0xe6ba,	// (0x00092eb6) list_im_pane

0xe6cb,	// (0x00092ec7) scroll_pane_cp07

0x5671,	// (0x00089e6d) im_writing_pane_t1_ParamLimits

0x5671,	// (0x00089e6d) im_writing_pane_t1

0xe6e4,	// (0x00092ee0) im_writing_pane_t2_ParamLimits

0xe6e4,	// (0x00092ee0) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x000939bb) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x000939bb) im_writing_pane_t

0xe066,	// (0x00092862) input_focus_pane_cp04

0xe066,	// (0x00092862) input_focus_pane_cp05

0x5686,	// (0x00089e82) list_im_single_pane_ParamLimits

0x5686,	// (0x00089e82) list_im_single_pane

0x56aa,	// (0x00089ea6) list_single_im_pane_t1

0xe5f0,	// (0x00092dec) blid_accuracy_pane

0xe5f0,	// (0x00092dec) blid_compass_pane

0x2bdb,	// (0x000873d7) main_location_t1

0x2bdb,	// (0x000873d7) main_location_t2

0x2bdb,	// (0x000873d7) main_location_t3

0x0002,

0xf4e8,	// (0x00093ce4) main_location_t

0xe066,	// (0x00092862) aid_levels_location

0xe2d9,	// (0x00092ad5) blid_accuracy_pane_g1

0xe2d9,	// (0x00092ad5) blid_accuracy_pane_g2

0x0001,

0xf213,	// (0x00093a0f) blid_accuracy_pane_g

0xe72c,	// (0x00092f28) wml_content_pane

0xe76a,	// (0x00092f66) wml_button_pane_ParamLimits

0xe76a,	// (0x00092f66) wml_button_pane

0x56b9,	// (0x00089eb5) wml_list_single_large_pane_ParamLimits

0x56b9,	// (0x00089eb5) wml_list_single_large_pane

0x56e3,	// (0x00089edf) wml_list_single_medium_pane_ParamLimits

0x56e3,	// (0x00089edf) wml_list_single_medium_pane

0x5714,	// (0x00089f10) wml_list_single_small_pane_ParamLimits

0x5714,	// (0x00089f10) wml_list_single_small_pane

0xe77e,	// (0x00092f7a) wml_selection_box_pane_ParamLimits

0xe77e,	// (0x00092f7a) wml_selection_box_pane

0xe791,	// (0x00092f8d) wml_list_single_pane_t1

0xe7a0,	// (0x00092f9c) wml_list_single_medium_pane_t1

0xe7af,	// (0x00092fab) wml_list_single_large_pane_t1

0xe7be,	// (0x00092fba) input_focus_pane_cp02_ParamLimits

0xe7be,	// (0x00092fba) input_focus_pane_cp02

0xe7d1,	// (0x00092fcd) wml_selection_box_pane_g1

0xe7da,	// (0x00092fd6) wml_selection_box_pane_t1_ParamLimits

0xe7da,	// (0x00092fd6) wml_selection_box_pane_t1

0xe2c1,	// (0x00092abd) bg_wml_button_pane_ParamLimits

0xe2c1,	// (0x00092abd) bg_wml_button_pane

0xe7f2,	// (0x00092fee) wml_button_pane_g1

0xe7fa,	// (0x00092ff6) wml_button_pane_t1

0xe7f2,	// (0x00092fee) wml_button_bg_pane_g1

0xe80a,	// (0x00093006) wml_button_bg_pane_g2

0xe812,	// (0x0009300e) wml_button_bg_pane_g3

0xe81a,	// (0x00093016) wml_button_bg_pane_g4

0xe822,	// (0x0009301e) wml_button_bg_pane_g5

0xe82a,	// (0x00093026) wml_button_bg_pane_g6

0xe832,	// (0x0009302e) wml_button_bg_pane_g7

0xe83a,	// (0x00093036) wml_button_bg_pane_g8

0xe842,	// (0x0009303e) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x000939c0) wml_button_bg_pane_g

0x574e,	// (0x00089f4a) bg_list_pane_cp02

0xe84a,	// (0x00093046) mce_header_pane_ParamLimits

0xe84a,	// (0x00093046) mce_header_pane

0xe860,	// (0x0009305c) mce_icon_pane

0xe860,	// (0x0009305c) mce_image_pane

0xe869,	// (0x00093065) mce_text_pane_ParamLimits

0xe869,	// (0x00093065) mce_text_pane

0x5758,	// (0x00089f54) scroll_pane_cp03

0xe762,	// (0x00092f5e) scroll_pane_cp04

0xe87c,	// (0x00093078) scroll_pane_cp05_ParamLimits

0xe87c,	// (0x00093078) scroll_pane_cp05

0x5762,	// (0x00089f5e) mce_header_field_pane_ParamLimits

0x5762,	// (0x00089f5e) mce_header_field_pane

0x5782,	// (0x00089f7e) mce_header_field_pane_2_ParamLimits

0x5782,	// (0x00089f7e) mce_header_field_pane_2

0x5798,	// (0x00089f94) mce_header_field_pane_3

0x57a0,	// (0x00089f9c) list_single_mce_message_pane_ParamLimits

0x57a0,	// (0x00089f9c) list_single_mce_message_pane

0x57cb,	// (0x00089fc7) list_single_mce_smart_pane_ParamLimits

0x57cb,	// (0x00089fc7) list_single_mce_smart_pane

0xe888,	// (0x00093084) input_focus_pane_cp03

0xe891,	// (0x0009308d) list_header_data_pane

0x5801,	// (0x00089ffd) mce_header_field_pane_t1

0x580f,	// (0x0008a00b) list_single_mce_header_pane_ParamLimits

0x580f,	// (0x0008a00b) list_single_mce_header_pane

0xe899,	// (0x00093095) list_single_mce_header_pane_t1

0xe8a8,	// (0x000930a4) list_single_mce_message_pane_g1

0xe8b0,	// (0x000930ac) list_single_mce_message_pane_t1

0x5861,	// (0x0008a05d) bg_cale_heading_pane_cp01_ParamLimits

0x5861,	// (0x0008a05d) bg_cale_heading_pane_cp01

0xe8be,	// (0x000930ba) bg_cale_pane_cp02_ParamLimits

0xe8be,	// (0x000930ba) bg_cale_pane_cp02

0x58af,	// (0x0008a0ab) cale_month_corner_pane

0x58ce,	// (0x0008a0ca) cale_month_day_heading_pane_ParamLimits

0x58ce,	// (0x0008a0ca) cale_month_day_heading_pane

0x5934,	// (0x0008a130) cale_month_pane_g1_ParamLimits

0x5934,	// (0x0008a130) cale_month_pane_g1

0x5977,	// (0x0008a173) cale_month_pane_g2_ParamLimits

0x5977,	// (0x0008a173) cale_month_pane_g2

0x59af,	// (0x0008a1ab) cale_month_pane_g3_ParamLimits

0x59af,	// (0x0008a1ab) cale_month_pane_g3

0x59fb,	// (0x0008a1f7) cale_month_pane_g4_ParamLimits

0x59fb,	// (0x0008a1f7) cale_month_pane_g4

0x5a47,	// (0x0008a243) cale_month_pane_g5_ParamLimits

0x5a47,	// (0x0008a243) cale_month_pane_g5

0x5a93,	// (0x0008a28f) cale_month_pane_g6_ParamLimits

0x5a93,	// (0x0008a28f) cale_month_pane_g6

0x5adf,	// (0x0008a2db) cale_month_pane_g7_ParamLimits

0x5adf,	// (0x0008a2db) cale_month_pane_g7

0x5b43,	// (0x0008a33f) cale_month_pane_g8_ParamLimits

0x5b43,	// (0x0008a33f) cale_month_pane_g8

0x5ba7,	// (0x0008a3a3) cale_month_pane_g9_ParamLimits

0x5ba7,	// (0x0008a3a3) cale_month_pane_g9

0x5c05,	// (0x0008a401) cale_month_pane_g10_ParamLimits

0x5c05,	// (0x0008a401) cale_month_pane_g10

0x5c61,	// (0x0008a45d) cale_month_pane_g11_ParamLimits

0x5c61,	// (0x0008a45d) cale_month_pane_g11

0x5cb5,	// (0x0008a4b1) cale_month_pane_g12_ParamLimits

0x5cb5,	// (0x0008a4b1) cale_month_pane_g12

0x5d0b,	// (0x0008a507) cale_month_pane_g13_ParamLimits

0x5d0b,	// (0x0008a507) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x000939d3) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x000939d3) cale_month_pane_g

0x5d61,	// (0x0008a55d) cale_month_week_pane

0x5d85,	// (0x0008a581) grid_cale_month_pane_ParamLimits

0x5d85,	// (0x0008a581) grid_cale_month_pane

0x5dde,	// (0x0008a5da) cale_month_day_heading_pane_t1

0x5e64,	// (0x0008a660) cale_month_day_heading_pane_t2

0x5edd,	// (0x0008a6d9) cale_month_day_heading_pane_t3

0x5f56,	// (0x0008a752) cale_month_day_heading_pane_t4

0x5fcf,	// (0x0008a7cb) cale_month_day_heading_pane_t5

0x6048,	// (0x0008a844) cale_month_day_heading_pane_t6

0x60c1,	// (0x0008a8bd) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x000939ee) cale_month_day_heading_pane_t

0xe59e,	// (0x00092d9a) bg_cale_side_pane_cp01

0x6152,	// (0x0008a94e) cale_month_week_pane_t1

0x616b,	// (0x0008a967) cale_month_week_pane_t2

0x6184,	// (0x0008a980) cale_month_week_pane_t3

0x619d,	// (0x0008a999) cale_month_week_pane_t4

0x61b6,	// (0x0008a9b2) cale_month_week_pane_t5

0x61d7,	// (0x0008a9d3) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x000939fd) cale_month_week_pane_t

0x61f8,	// (0x0008a9f4) cell_cale_month_pane_ParamLimits

0x61f8,	// (0x0008a9f4) cell_cale_month_pane

0x631a,	// (0x0008ab16) cell_cale_month_pane_g1

0x6326,	// (0x0008ab22) cell_cale_month_pane_t1_ParamLimits

0x6326,	// (0x0008ab22) cell_cale_month_pane_t1

0xe5ac,	// (0x00092da8) grid_highlight_pane_cp08

0xe2d9,	// (0x00092ad5) main_smil_g1

0x6352,	// (0x0008ab4e) smil_status_pane

0xe8fd,	// (0x000930f9) smil_text_pane

0xe509,	// (0x00092d05) bg_popup_call3_rect_pane_g8

0xe501,	// (0x00092cfd) bg_popup_call3_rect_pane_g9

0x0008,

0xf218,	// (0x00093a14) bg_popup_call3_rect_pane_g

0x2cb7,	// (0x000874b3) smil_status_volume_pane_g1

0xe907,	// (0x00093103) smil_status_pane_t1

0x7487,	// (0x0008bc83) volume_smil_pane

0xe91e,	// (0x0009311a) list_smil_text_pane

0x6365,	// (0x0008ab61) scroll_pane_cp011

0x6370,	// (0x0008ab6c) smil_text_list_pane_t1_ParamLimits

0x6370,	// (0x0008ab6c) smil_text_list_pane_t1

0x63e8,	// (0x0008abe4) aid_volume_smil_ParamLimits

0x63e8,	// (0x0008abe4) aid_volume_smil

0xe2d9,	// (0x00092ad5) smil_volume_pane_g1

0xe2d9,	// (0x00092ad5) smil_volume_pane_g2

0x0001,

0xf213,	// (0x00093a0f) smil_volume_pane_g

0x4bfb,	// (0x000893f7) listscroll_cale_day_pane

0xe928,	// (0x00093124) bg_cale_pane

0xe940,	// (0x0009313c) list_cale_pane

0xe963,	// (0x0009315f) scroll_pane_cp09

0xe4d9,	// (0x00092cd5) cale_bg_pane_g1

0xe4d1,	// (0x00092ccd) cale_bg_pane_g2

0xe4c9,	// (0x00092cc5) cale_bg_pane_g3

0xe4e9,	// (0x00092ce5) cale_bg_pane_g4

0xe4e1,	// (0x00092cdd) cale_bg_pane_g5

0xe4f1,	// (0x00092ced) cale_bg_pane_g6

0xe4f9,	// (0x00092cf5) cale_bg_pane_g7

0xe509,	// (0x00092d05) cale_bg_pane_g8

0xe501,	// (0x00092cfd) cale_bg_pane_g9

0x0008,

0xf218,	// (0x00093a14) cale_bg_pane_g

0x640a,	// (0x0008ac06) list_cale_time_pane_ParamLimits

0x640a,	// (0x0008ac06) list_cale_time_pane

0xe97c,	// (0x00093178) list_cale_time_pane_g1_ParamLimits

0xe97c,	// (0x00093178) list_cale_time_pane_g1

0xe988,	// (0x00093184) list_cale_time_pane_g2_ParamLimits

0xe988,	// (0x00093184) list_cale_time_pane_g2

0x642c,	// (0x0008ac28) list_cale_time_pane_g3_ParamLimits

0x642c,	// (0x0008ac28) list_cale_time_pane_g3

0x643a,	// (0x0008ac36) list_cale_time_pane_g4_ParamLimits

0x643a,	// (0x0008ac36) list_cale_time_pane_g4

0x6448,	// (0x0008ac44) list_cale_time_pane_g5_ParamLimits

0x6448,	// (0x0008ac44) list_cale_time_pane_g5

0x0005,

0xf22b,	// (0x00093a27) list_cale_time_pane_g_ParamLimits

0xf22b,	// (0x00093a27) list_cale_time_pane_g

0xe9a2,	// (0x0009319e) list_cale_time_pane_t1_ParamLimits

0xe9a2,	// (0x0009319e) list_cale_time_pane_t1

0xe9ca,	// (0x000931c6) list_cale_time_pane_t2_ParamLimits

0xe9ca,	// (0x000931c6) list_cale_time_pane_t2

0x66eb,	// (0x0008aee7) aid_blid_cardinal_pane

0x672d,	// (0x0008af29) compass_pane_t4

0xe9f2,	// (0x000931ee) list_cale_time_pane_t4_ParamLimits

0xe9f2,	// (0x000931ee) list_cale_time_pane_t4

0x673b,	// (0x0008af37) compass_pane_t5

0x674b,	// (0x0008af47) compass_pane_t6

0x6759,	// (0x0008af55) compass_pane_t7

0xeea6,	// (0x000936a2) navi_pane_cc_t1

0x197b,	// (0x00086177) aid_phob_thumbnail_center_pane

0x6c1c,	// (0x0008b418) main_postcard_pane_g4_ParamLimits

0x0002,

0xf238,	// (0x00093a34) list_cale_time_pane_t_ParamLimits

0xf238,	// (0x00093a34) list_cale_time_pane_t

0xdcaf,	// (0x000924ab) bg_popup_window_pane_cp02_ParamLimits

0xdcaf,	// (0x000924ab) bg_popup_window_pane_cp02

0xea1a,	// (0x00093216) heading_pane_cp01_ParamLimits

0xea1a,	// (0x00093216) heading_pane_cp01

0xea26,	// (0x00093222) loc_req_pane_ParamLimits

0xea26,	// (0x00093222) loc_req_pane

0xea38,	// (0x00093234) loc_type_pane_ParamLimits

0xea38,	// (0x00093234) loc_type_pane

0xea4a,	// (0x00093246) loc_type_pane_t1_ParamLimits

0xea4a,	// (0x00093246) loc_type_pane_t1

0xea5c,	// (0x00093258) loc_type_pane_t2_ParamLimits

0xea5c,	// (0x00093258) loc_type_pane_t2

0xea6e,	// (0x0009326a) loc_type_pane_t3_ParamLimits

0xea6e,	// (0x0009326a) loc_type_pane_t3

0x0002,

0xf23f,	// (0x00093a3b) loc_type_pane_t_ParamLimits

0xf23f,	// (0x00093a3b) loc_type_pane_t

0xea80,	// (0x0009327c) list_loc_req_pane

0xea8a,	// (0x00093286) scroll_pane_cp012

0x6456,	// (0x0008ac52) list_single_loc_request_popup_menu_pane_ParamLimits

0x6456,	// (0x0008ac52) list_single_loc_request_popup_menu_pane

0xea95,	// (0x00093291) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xea95,	// (0x00093291) list_single_loc_request_popup_menu_pane_g1

0xeaa1,	// (0x0009329d) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xeaa1,	// (0x0009329d) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf246,	// (0x00093a42) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf246,	// (0x00093a42) list_single_loc_request_popup_menu_pane_g

0xeaad,	// (0x000932a9) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xeaad,	// (0x000932a9) list_single_loc_request_popup_menu_pane_t1

0x6468,	// (0x0008ac64) bg_popup_window_pane_cp03_ParamLimits

0x6468,	// (0x0008ac64) bg_popup_window_pane_cp03

0x6476,	// (0x0008ac72) heading_loc_req_pane_ParamLimits

0x6476,	// (0x0008ac72) heading_loc_req_pane

0x6482,	// (0x0008ac7e) popup_dyc_status_message_window_g1_ParamLimits

0x6482,	// (0x0008ac7e) popup_dyc_status_message_window_g1

0x648e,	// (0x0008ac8a) popup_dyc_status_message_window_t1_ParamLimits

0x648e,	// (0x0008ac8a) popup_dyc_status_message_window_t1

0x64a0,	// (0x0008ac9c) popup_dyc_status_message_window_t2_ParamLimits

0x64a0,	// (0x0008ac9c) popup_dyc_status_message_window_t2

0x64b2,	// (0x0008acae) popup_dyc_status_message_window_t3_ParamLimits

0x64b2,	// (0x0008acae) popup_dyc_status_message_window_t3

0x0002,

0xf24b,	// (0x00093a47) popup_dyc_status_message_window_t_ParamLimits

0xf24b,	// (0x00093a47) popup_dyc_status_message_window_t

0xe066,	// (0x00092862) bg_heading_pane_cp01

0xeac3,	// (0x000932bf) heading_loc_req_pane_g1

0xeacb,	// (0x000932c7) heading_loc_req_pane_g2

0xead3,	// (0x000932cf) heading_loc_req_pane_g3

0x0002,

0xf252,	// (0x00093a4e) heading_loc_req_pane_g

0xeadb,	// (0x000932d7) heading_loc_req_pane_t1

0xeafa,	// (0x000932f6) bg_popup_sub_pane_cp01_ParamLimits

0xeafa,	// (0x000932f6) bg_popup_sub_pane_cp01

0xeb08,	// (0x00093304) popup_cale_events_window_g1_ParamLimits

0xeb08,	// (0x00093304) popup_cale_events_window_g1

0xeb28,	// (0x00093324) popup_cale_events_window_g2_ParamLimits

0xeb28,	// (0x00093324) popup_cale_events_window_g2

0x0001,

0xf274,	// (0x00093a70) popup_cale_events_window_g_ParamLimits

0xf274,	// (0x00093a70) popup_cale_events_window_g

0xeb48,	// (0x00093344) popup_cale_events_window_t1_ParamLimits

0xeb48,	// (0x00093344) popup_cale_events_window_t1

0xeb5a,	// (0x00093356) popup_cale_events_window_t2_ParamLimits

0xeb5a,	// (0x00093356) popup_cale_events_window_t2

0xeb98,	// (0x00093394) popup_cale_events_window_t3_ParamLimits

0xeb98,	// (0x00093394) popup_cale_events_window_t3

0xebde,	// (0x000933da) popup_cale_events_window_t4_ParamLimits

0xebde,	// (0x000933da) popup_cale_events_window_t4

0x0003,

0xf279,	// (0x00093a75) popup_cale_events_window_t_ParamLimits

0xf279,	// (0x00093a75) popup_cale_events_window_t

0x64dc,	// (0x0008acd8) call_type_pane

0x1d46,	// (0x00086542) popup_call_status_window_g1

0x64e8,	// (0x0008ace4) popup_call_status_window_g2

0x64f4,	// (0x0008acf0) popup_call_status_window_g3

0x0002,

0xf282,	// (0x00093a7e) popup_call_status_window_g

0xec14,	// (0x00093410) call_type_pane_g1

0xec1d,	// (0x00093419) call_type_pane_g2

0x0001,

0xf289,	// (0x00093a85) call_type_pane_g

0xe066,	// (0x00092862) bg_popup_sub_pane_cp02

0xec26,	// (0x00093422) listscroll_popup_wml_pane

0xec2e,	// (0x0009342a) list_wml_pane

0xec38,	// (0x00093434) scroll_pane_cp013

0xec43,	// (0x0009343f) list_single_graphic_popup_wml_pane_ParamLimits

0xec43,	// (0x0009343f) list_single_graphic_popup_wml_pane

0xe2d9,	// (0x00092ad5) list_single_graphic_popup_wml_pane_g1

0xec57,	// (0x00093453) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf28e,	// (0x00093a8a) list_single_graphic_popup_wml_pane_g

0xec5f,	// (0x0009345b) list_single_graphic_popup_wml_pane_t1

0xec75,	// (0x00093471) aid_call_pane

0xe2b9,	// (0x00092ab5) popup_clock_analogue_window_g1

0xe2b9,	// (0x00092ab5) popup_clock_analogue_window_g2

0x6500,	// (0x0008acfc) popup_clock_analogue_window_g3

0x6500,	// (0x0008acfc) popup_clock_analogue_window_g4

0xe2d9,	// (0x00092ad5) popup_clock_analogue_window_g5

0x0004,

0xf293,	// (0x00093a8f) popup_clock_analogue_window_g

0x6508,	// (0x0008ad04) popup_clock_analogue_window_t1

0x6516,	// (0x0008ad12) clock_digital_number_pane_ParamLimits

0x6516,	// (0x0008ad12) clock_digital_number_pane

0x6522,	// (0x0008ad1e) clock_digital_number_pane_cp02_ParamLimits

0x6522,	// (0x0008ad1e) clock_digital_number_pane_cp02

0x652e,	// (0x0008ad2a) clock_digital_number_pane_cp03_ParamLimits

0x652e,	// (0x0008ad2a) clock_digital_number_pane_cp03

0x653a,	// (0x0008ad36) clock_digital_number_pane_cp04_ParamLimits

0x653a,	// (0x0008ad36) clock_digital_number_pane_cp04

0x654a,	// (0x0008ad46) clock_digital_separator_pane_ParamLimits

0x654a,	// (0x0008ad46) clock_digital_separator_pane

0x6556,	// (0x0008ad52) popup_clock_digital_window_t1

0xe2d9,	// (0x00092ad5) clock_digital_number_pane_g1

0xe2d9,	// (0x00092ad5) clock_digital_number_pane_g2

0x0001,

0xf213,	// (0x00093a0f) clock_digital_number_pane_g

0xe2d9,	// (0x00092ad5) clock_digital_separator_pane_g1

0xe2d9,	// (0x00092ad5) clock_digital_separator_pane_g2

0x0001,

0xf213,	// (0x00093a0f) clock_digital_separator_pane_g

0xe066,	// (0x00092862) bg_popup_window_pane_cp04

0xec7d,	// (0x00093479) heading_pane_cp03

0xe5f0,	// (0x00092dec) listscroll_popup_gms_pane

0xe066,	// (0x00092862) grid_large_graphic_popup_pane

0xec85,	// (0x00093481) listscroll_popup_gms_pane_g1

0xec8e,	// (0x0009348a) listscroll_popup_gms_pane_g2

0x0001,

0xf29e,	// (0x00093a9a) listscroll_popup_gms_pane_g

0xec97,	// (0x00093493) scroll_pane_cp014

0xe32e,	// (0x00092b2a) cell_large_graphic_popup_pane_ParamLimits

0xe32e,	// (0x00092b2a) cell_large_graphic_popup_pane

0xe33c,	// (0x00092b38) cell_large_graphic_popup_pane_g1_ParamLimits

0xe33c,	// (0x00092b38) cell_large_graphic_popup_pane_g1

0xeca0,	// (0x0009349c) cell_large_graphic_popup_pane_g2_ParamLimits

0xeca0,	// (0x0009349c) cell_large_graphic_popup_pane_g2

0xecae,	// (0x000934aa) cell_large_graphic_popup_pane_g3_ParamLimits

0xecae,	// (0x000934aa) cell_large_graphic_popup_pane_g3

0xecbc,	// (0x000934b8) cell_large_graphic_popup_pane_g4_ParamLimits

0xecbc,	// (0x000934b8) cell_large_graphic_popup_pane_g4

0x0003,

0xf2a3,	// (0x00093a9f) cell_large_graphic_popup_pane_g_ParamLimits

0xf2a3,	// (0x00093a9f) cell_large_graphic_popup_pane_g

0xe066,	// (0x00092862) grid_highlight_pane_cp010

0xe2d9,	// (0x00092ad5) bg_popup_call_pane_g1

0xeccd,	// (0x000934c9) list_single_graphic_popup_conf_pane_ParamLimits

0xeccd,	// (0x000934c9) list_single_graphic_popup_conf_pane

0xece0,	// (0x000934dc) list_highlight_pane_cp01

0xece9,	// (0x000934e5) list_single_graphic_popup_conf_pane_g1

0xecf1,	// (0x000934ed) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ac,	// (0x00093aa8) list_single_graphic_popup_conf_pane_g

0xecf9,	// (0x000934f5) list_single_graphic_popup_conf_pane_t1

0xed07,	// (0x00093503) linegrid_cams_pane_g1

0x6573,	// (0x0008ad6f) linegrid_cams_pane_g2

0xe511,	// (0x00092d0d) linegrid_cams_pane_g3

0xed10,	// (0x0009350c) linegrid_cams_pane_g4

0x657c,	// (0x0008ad78) linegrid_cams_pane_g5

0x6585,	// (0x0008ad81) linegrid_cams_pane_g6

0xe5df,	// (0x00092ddb) linegrid_cams_pane_g7

0x0006,

0xf2b1,	// (0x00093aad) linegrid_cams_pane_g

0xed19,	// (0x00093515) popup_clock_analogue_window

0xed19,	// (0x00093515) popup_clock_digital_window

0xe066,	// (0x00092862) popup_phob_thumbnail_window

0xe2d9,	// (0x00092ad5) call_video_uplink_pane_g1

0xed22,	// (0x0009351e) call_video_uplink_pane_g2

0x0001,

0xf2c0,	// (0x00093abc) call_video_uplink_pane_g

0xed2a,	// (0x00093526) video_uplink_pane

0xed32,	// (0x0009352e) mce_image_pane_g1

0x658e,	// (0x0008ad8a) mce_image_pane_g2

0x6598,	// (0x0008ad94) mce_image_pane_g3

0x65a0,	// (0x0008ad9c) mce_image_pane_g4

0x65a8,	// (0x0008ada4) mce_image_pane_g5

0x0004,

0xf2c5,	// (0x00093ac1) mce_image_pane_g

0xed3c,	// (0x00093538) control_top_pane_stacon_cp01_ParamLimits

0xed3c,	// (0x00093538) control_top_pane_stacon_cp01

0xed50,	// (0x0009354c) uni_indicator_pane_stacon_cp01_ParamLimits

0xed50,	// (0x0009354c) uni_indicator_pane_stacon_cp01

0xed61,	// (0x0009355d) bg_popup_sub_pane_cp03

0xed6b,	// (0x00093567) chi_dic_find_pane

0x65b0,	// (0x0008adac) listscroll_chi_dic_pane

0xed73,	// (0x0009356f) main_pane_chidic_g1

0xed7b,	// (0x00093577) chi_dic_find_pane_t1

0xed89,	// (0x00093585) find_chidic_pane

0xed92,	// (0x0009358e) chi_dic_list_pane_ParamLimits

0xed92,	// (0x0009358e) chi_dic_list_pane

0xeda3,	// (0x0009359f) scroll_pane_cp020

0xedab,	// (0x000935a7) find_chidic_pane_t1

0xe066,	// (0x00092862) input_focus_pane_cp06

0x65c4,	// (0x0008adc0) list_chi_dic_pane_ParamLimits

0x65c4,	// (0x0008adc0) list_chi_dic_pane

0x65de,	// (0x0008adda) list_chi_dic_pane_t1_ParamLimits

0x65de,	// (0x0008adda) list_chi_dic_pane_t1

0xe066,	// (0x00092862) list_highlight_pane_cp020

0xedba,	// (0x000935b6) bg_cale_heading_pane_g1

0x65f1,	// (0x0008aded) bg_cale_heading_pane_g2

0x65f9,	// (0x0008adf5) bg_cale_heading_pane_g3

0x6601,	// (0x0008adfd) bg_cale_heading_pane_g4

0x660b,	// (0x0008ae07) bg_cale_heading_pane_g5

0x6615,	// (0x0008ae11) bg_cale_heading_pane_g6

0x661d,	// (0x0008ae19) bg_cale_heading_pane_g7

0x6625,	// (0x0008ae21) bg_cale_heading_pane_g8

0x662f,	// (0x0008ae2b) bg_cale_heading_pane_g9

0x0008,

0xf2d0,	// (0x00093acc) bg_cale_heading_pane_g

0xedba,	// (0x000935b6) bg_cale_side_pane_g1

0x6639,	// (0x0008ae35) bg_cale_side_pane_g2

0x6643,	// (0x0008ae3f) bg_cale_side_pane_g3

0x664d,	// (0x0008ae49) bg_cale_side_pane_g4

0x6657,	// (0x0008ae53) bg_cale_side_pane_g5

0x6661,	// (0x0008ae5d) bg_cale_side_pane_g6

0x666b,	// (0x0008ae67) bg_cale_side_pane_g7

0x6675,	// (0x0008ae71) bg_cale_side_pane_g8

0x667d,	// (0x0008ae79) bg_cale_side_pane_g9

0x0008,

0xf2e3,	// (0x00093adf) bg_cale_side_pane_g

0x6685,	// (0x0008ae81) popup_call_status_window_ParamLimits

0x6685,	// (0x0008ae81) popup_call_status_window

0xedc2,	// (0x000935be) stacon_top_pane

0xedca,	// (0x000935c6) status_pane_ParamLimits

0xedca,	// (0x000935c6) status_pane

0xeddf,	// (0x000935db) status_small_pane

0xede7,	// (0x000935e3) control_pane

0xe066,	// (0x00092862) stacon_bottom_pane

0xedef,	// (0x000935eb) list_single_mce_smart_pane_t1_ParamLimits

0xedef,	// (0x000935eb) list_single_mce_smart_pane_t1

0xee02,	// (0x000935fe) list_single_mce_smart_pane_t2_ParamLimits

0xee02,	// (0x000935fe) list_single_mce_smart_pane_t2

0x0001,

0xf2f6,	// (0x00093af2) list_single_mce_smart_pane_t_ParamLimits

0xf2f6,	// (0x00093af2) list_single_mce_smart_pane_t

0x6691,	// (0x0008ae8d) compass_pane

0x669d,	// (0x0008ae99) main_location2_pane_t1

0x66b1,	// (0x0008aead) main_location2_pane_t2

0x66c5,	// (0x0008aec1) main_location2_pane_t3

0x0003,

0xf2fb,	// (0x00093af7) main_location2_pane_t

0xee21,	// (0x0009361d) compass_pane_g1_ParamLimits

0xee21,	// (0x0009361d) compass_pane_g1

0x670f,	// (0x0008af0b) compass_pane_t1

0x671e,	// (0x0008af1a) compass_pane_t2

0x0005,

0xf304,	// (0x00093b00) compass_pane_t

0x6769,	// (0x0008af65) text_secondary_cp61

0xee9d,	// (0x00093699) navi_pane_cams_g5

0xef19,	// (0x00093715) navi_pane_im_t1

0xef27,	// (0x00093723) navi_pane_mp_g1_ParamLimits

0xef27,	// (0x00093723) navi_pane_mp_g1

0xef3b,	// (0x00093737) navi_pane_mp_g2_ParamLimits

0xef3b,	// (0x00093737) navi_pane_mp_g2

0xef47,	// (0x00093743) navi_pane_mp_g3_ParamLimits

0xef47,	// (0x00093743) navi_pane_mp_g3

0x0002,

0xf318,	// (0x00093b14) navi_pane_mp_g_ParamLimits

0xf318,	// (0x00093b14) navi_pane_mp_g

0xef53,	// (0x0009374f) navi_pane_mp_t1

0xef61,	// (0x0009375d) navi_pane_mp_t2

0x0002,

0xf31f,	// (0x00093b1b) navi_pane_mp_t

0xefcc,	// (0x000937c8) navi_pane_vt_g1

0xef53,	// (0x0009374f) navi_pane_vt_t1

0xefd4,	// (0x000937d0) navi_slider_pane

0xe5f0,	// (0x00092dec) zooming_pane

0xefe4,	// (0x000937e0) navi_slider_pane_g1

0x67a4,	// (0x0008afa0) navi_slider_pane_g2

0x0006,

0xf326,	// (0x00093b22) navi_slider_pane_g

0x1900,	// (0x000860fc) aid_levels_zoom

0x1908,	// (0x00086104) zooming_pane_g1

0x1910,	// (0x0008610c) zooming_pane_g2

0x1910,	// (0x0008610c) zooming_pane_g3

0x0002,

0xf335,	// (0x00093b31) zooming_pane_g

0x1918,	// (0x00086114) level_10_zoom

0x1921,	// (0x0008611d) level_11_zoom

0x192a,	// (0x00086126) level_1_zoom

0x1933,	// (0x0008612f) level_2_zoom

0x193c,	// (0x00086138) level_3_zoom

0x1945,	// (0x00086141) level_4_zoom

0x194e,	// (0x0008614a) level_5_zoom

0x1957,	// (0x00086153) level_6_zoom

0x1960,	// (0x0008615c) level_7_zoom

0x1969,	// (0x00086165) level_8_zoom

0x1972,	// (0x0008616e) level_9_zoom

0x1983,	// (0x0008617f) popup_phob_thumbnail_window_g1

0x198b,	// (0x00086187) popup_phob_thumbnail_window_g2

0x0001,

0xf33c,	// (0x00093b38) popup_phob_thumbnail_window_g

0x712a,	// (0x0008b926) level_1_location

0x7132,	// (0x0008b92e) level_2_location

0x713a,	// (0x0008b936) level_3_location

0x7144,	// (0x0008b940) level_4_location

0xe5f0,	// (0x00092dec) level_5_location

0x67b6,	// (0x0008afb2) mce_icon_pane_g1

0x67be,	// (0x0008afba) mce_icon_pane_g2

0x0001,

0xf341,	// (0x00093b3d) mce_icon_pane_g

0x67c6,	// (0x0008afc2) main_mup_pane_g1_ParamLimits

0x67c6,	// (0x0008afc2) main_mup_pane_g1

0xe358,	// (0x00092b54) main_mup_pane_g2_ParamLimits

0xe358,	// (0x00092b54) main_mup_pane_g2

0xe358,	// (0x00092b54) main_mup_pane_g3_ParamLimits

0xe358,	// (0x00092b54) main_mup_pane_g3

0xe358,	// (0x00092b54) main_mup_pane_g4_ParamLimits

0xe358,	// (0x00092b54) main_mup_pane_g4

0xe358,	// (0x00092b54) main_mup_pane_g5_ParamLimits

0xe358,	// (0x00092b54) main_mup_pane_g5

0xe358,	// (0x00092b54) main_mup_pane_g6_ParamLimits

0xe358,	// (0x00092b54) main_mup_pane_g6

0xe358,	// (0x00092b54) main_mup_pane_g7_ParamLimits

0xe358,	// (0x00092b54) main_mup_pane_g7

0xe358,	// (0x00092b54) main_mup_pane_g8_ParamLimits

0xe358,	// (0x00092b54) main_mup_pane_g8

0xe358,	// (0x00092b54) main_mup_pane_g9_ParamLimits

0xe358,	// (0x00092b54) main_mup_pane_g9

0xe358,	// (0x00092b54) main_mup_pane_g10_ParamLimits

0xe358,	// (0x00092b54) main_mup_pane_g10

0xe358,	// (0x00092b54) main_mup_pane_g11_ParamLimits

0xe358,	// (0x00092b54) main_mup_pane_g11

0xe34a,	// (0x00092b46) main_mup_pane_g12_ParamLimits

0xe34a,	// (0x00092b46) main_mup_pane_g12

0xe358,	// (0x00092b54) main_mup_pane_g13_ParamLimits

0xe358,	// (0x00092b54) main_mup_pane_g13

0x000c,

0xf346,	// (0x00093b42) main_mup_pane_g_ParamLimits

0xf346,	// (0x00093b42) main_mup_pane_g

0xe366,	// (0x00092b62) main_mup_pane_t1_ParamLimits

0xe366,	// (0x00092b62) main_mup_pane_t1

0xe366,	// (0x00092b62) main_mup_pane_t2_ParamLimits

0xe366,	// (0x00092b62) main_mup_pane_t2

0xe366,	// (0x00092b62) main_mup_pane_t3_ParamLimits

0xe366,	// (0x00092b62) main_mup_pane_t3

0xe398,	// (0x00092b94) main_mup_pane_t4_ParamLimits

0xe398,	// (0x00092b94) main_mup_pane_t4

0xe398,	// (0x00092b94) main_mup_pane_t5_ParamLimits

0xe398,	// (0x00092b94) main_mup_pane_t5

0xe384,	// (0x00092b80) main_mup_pane_t6_ParamLimits

0xe384,	// (0x00092b80) main_mup_pane_t6

0x0005,

0xf361,	// (0x00093b5d) main_mup_pane_t_ParamLimits

0xf361,	// (0x00093b5d) main_mup_pane_t

0xde1d,	// (0x00092619) mup_progress_pane_ParamLimits

0xde1d,	// (0x00092619) mup_progress_pane

0x2cfe,	// (0x000874fa) mup_visualizer_pane_ParamLimits

0x2cfe,	// (0x000874fa) mup_visualizer_pane

0x2cfe,	// (0x000874fa) mup_volume_pane_ParamLimits

0x2cfe,	// (0x000874fa) mup_volume_pane

0xe34a,	// (0x00092b46) mup_visualizer_pane_g1_ParamLimits

0xe34a,	// (0x00092b46) mup_visualizer_pane_g1

0x19a1,	// (0x0008619d) mup_visualizer_pane_g2_ParamLimits

0x19a1,	// (0x0008619d) mup_visualizer_pane_g2

0xe33c,	// (0x00092b38) mup_visualizer_pane_g3_ParamLimits

0xe33c,	// (0x00092b38) mup_visualizer_pane_g3

0x0002,

0xf36e,	// (0x00093b6a) mup_visualizer_pane_g_ParamLimits

0xf36e,	// (0x00093b6a) mup_visualizer_pane_g

0xe37a,	// (0x00092b76) mup_volume_pane_g1

0xe37a,	// (0x00092b76) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x00093888) mup_volume_pane_g

0xe37a,	// (0x00092b76) mup_progress_pane_g1

0xe37a,	// (0x00092b76) mup_progress_pane_g2

0xe37a,	// (0x00092b76) mup_progress_pane_g3

0x0002,

0xf375,	// (0x00093b71) mup_progress_pane_g

0xe066,	// (0x00092862) bg_popup_window_pane_cp05

0x19af,	// (0x000861ab) heading_pane_cp02_ParamLimits

0x19af,	// (0x000861ab) heading_pane_cp02

0x19c9,	// (0x000861c5) list_popup_blid_pane

0x19d1,	// (0x000861cd) list_blid_sat_info_pane_ParamLimits

0x19d1,	// (0x000861cd) list_blid_sat_info_pane

0x19e4,	// (0x000861e0) list_blid_sat_info_pane_g1

0x19ec,	// (0x000861e8) list_blid_sat_info_pane_t1

0x68c3,	// (0x0008b0bf) mup_equalizer_pane_ParamLimits

0x68c3,	// (0x0008b0bf) mup_equalizer_pane

0x68e4,	// (0x0008b0e0) mup_equalizer_pane_cp1_ParamLimits

0x68e4,	// (0x0008b0e0) mup_equalizer_pane_cp1

0x6905,	// (0x0008b101) mup_equalizer_pane_cp2_ParamLimits

0x6905,	// (0x0008b101) mup_equalizer_pane_cp2

0x6926,	// (0x0008b122) mup_equalizer_pane_cp3_ParamLimits

0x6926,	// (0x0008b122) mup_equalizer_pane_cp3

0x6947,	// (0x0008b143) mup_equalizer_pane_cp4_ParamLimits

0x6947,	// (0x0008b143) mup_equalizer_pane_cp4

0x6968,	// (0x0008b164) mup_equalizer_pane_cp5

0x697e,	// (0x0008b17a) mup_equalizer_pane_cp6

0x6996,	// (0x0008b192) mup_equalizer_pane_cp7

0x2b7b,	// (0x00087377) bg_popup_call_poc_act_pane_g9

0x2b83,	// (0x0008737f) bg_popup_call_poc_act_pane_g10

0x2b8b,	// (0x00087387) bg_popup_call_poc_act_pane_g11

0x000a,

0xe2c1,	// (0x00092abd) mup_scale_pane

0xe2d9,	// (0x00092ad5) mup_scale_pane_g1

0x19fa,	// (0x000861f6) mup_scale_pane_g2

0x0006,

0xf391,	// (0x00093b8d) mup_scale_pane_g

0x1a1e,	// (0x0008621a) msg_data_pane

0x1a26,	// (0x00086222) scroll_pane_cp017

0x69c0,	// (0x0008b1bc) bg_list_pane_cp04_ParamLimits

0x69c0,	// (0x0008b1bc) bg_list_pane_cp04

0x1a2e,	// (0x0008622a) msg_data_pane_g1

0x69e6,	// (0x0008b1e2) msg_data_pane_g2

0x69f0,	// (0x0008b1ec) msg_data_pane_g3

0x69f8,	// (0x0008b1f4) msg_data_pane_g4

0x6a00,	// (0x0008b1fc) msg_data_pane_g5

0x6a08,	// (0x0008b204) msg_data_pane_g6

0x6a10,	// (0x0008b20c) msg_data_pane_g7

0x0006,

0xf3a0,	// (0x00093b9c) msg_data_pane_g

0x6a18,	// (0x0008b214) msg_text_pane_ParamLimits

0x6a18,	// (0x0008b214) msg_text_pane

0x6a6d,	// (0x0008b269) qrid_highlight_pane_cp011_ParamLimits

0x6a6d,	// (0x0008b269) qrid_highlight_pane_cp011

0xe066,	// (0x00092862) msg_body_pane

0xe2c1,	// (0x00092abd) msg_header_pane

0xf008,	// (0x00093804) input_focus_pane_cp07

0x6a95,	// (0x0008b291) msg_header_pane_t1_ParamLimits

0x6a95,	// (0x0008b291) msg_header_pane_t1

0x6ab1,	// (0x0008b2ad) msg_header_pane_t2_ParamLimits

0x6ab1,	// (0x0008b2ad) msg_header_pane_t2

0x0001,

0xf3b4,	// (0x00093bb0) msg_header_pane_t_ParamLimits

0xf3b4,	// (0x00093bb0) msg_header_pane_t

0x1a56,	// (0x00086252) msg_body_pane_g1

0x6ad1,	// (0x0008b2cd) msg_body_pane_t1_ParamLimits

0x6ad1,	// (0x0008b2cd) msg_body_pane_t1

0x6b02,	// (0x0008b2fe) msg_body_pane_t2_ParamLimits

0x6b02,	// (0x0008b2fe) msg_body_pane_t2

0x6b14,	// (0x0008b310) msg_body_pane_t3_ParamLimits

0x6b14,	// (0x0008b310) msg_body_pane_t3

0x0002,

0xf3b9,	// (0x00093bb5) msg_body_pane_t_ParamLimits

0xf3b9,	// (0x00093bb5) msg_body_pane_t

0x6b78,	// (0x0008b374) main_viewer_pane_g1_ParamLimits

0x6b78,	// (0x0008b374) main_viewer_pane_g1

0x6b84,	// (0x0008b380) main_viewer_pane_g2_ParamLimits

0x6b84,	// (0x0008b380) main_viewer_pane_g2

0x6b90,	// (0x0008b38c) main_viewer_pane_g3_ParamLimits

0x6b90,	// (0x0008b38c) main_viewer_pane_g3

0x6ba1,	// (0x0008b39d) main_viewer_pane_g4_ParamLimits

0x6ba1,	// (0x0008b39d) main_viewer_pane_g4

0x6bb2,	// (0x0008b3ae) main_viewer_pane_g5_ParamLimits

0x6bb2,	// (0x0008b3ae) main_viewer_pane_g5

0x6bb2,	// (0x0008b3ae) main_viewer_pane_g7_ParamLimits

0x6bb2,	// (0x0008b3ae) main_viewer_pane_g7

0xea95,	// (0x00093291) main_viewer_pane_g8_ParamLimits

0xea95,	// (0x00093291) main_viewer_pane_g8

0x0007,

0xf3c9,	// (0x00093bc5) main_viewer_pane_g_ParamLimits

0xf3c9,	// (0x00093bc5) main_viewer_pane_g

0x1a5e,	// (0x0008625a) viewer_content_pane_ParamLimits

0x1a5e,	// (0x0008625a) viewer_content_pane

0x6bf0,	// (0x0008b3ec) main_postcard_pane_g1_ParamLimits

0x6bf0,	// (0x0008b3ec) main_postcard_pane_g1

0x6bfe,	// (0x0008b3fa) main_postcard_pane_g2_ParamLimits

0x6bfe,	// (0x0008b3fa) main_postcard_pane_g2

0x6c0c,	// (0x0008b408) main_postcard_pane_g3_ParamLimits

0x6c0c,	// (0x0008b408) main_postcard_pane_g3

0x0005,

0xf3da,	// (0x00093bd6) main_postcard_pane_g_ParamLimits

0xf3da,	// (0x00093bd6) main_postcard_pane_g

0x6c1c,	// (0x0008b418) main_postcard_pane_g4

0x2ca4,	// (0x000874a0) smil_status_volume_pane_g2

0x6c48,	// (0x0008b444) postcard_pane_ParamLimits

0x6c48,	// (0x0008b444) postcard_pane

0x1d46,	// (0x00086542) postcard_pane_g1_ParamLimits

0x1d46,	// (0x00086542) postcard_pane_g1

0x6c7a,	// (0x0008b476) postcard_pane_g2_ParamLimits

0x6c7a,	// (0x0008b476) postcard_pane_g2

0x6c86,	// (0x0008b482) postcard_pane_g3_ParamLimits

0x6c86,	// (0x0008b482) postcard_pane_g3

0x1a7a,	// (0x00086276) postcard_pane_g4_ParamLimits

0x1a7a,	// (0x00086276) postcard_pane_g4

0x6c92,	// (0x0008b48e) postcard_pane_g5_ParamLimits

0x6c92,	// (0x0008b48e) postcard_pane_g5

0x6c9e,	// (0x0008b49a) postcard_pane_g6_ParamLimits

0x6c9e,	// (0x0008b49a) postcard_pane_g6

0x1a6c,	// (0x00086268) postcard_pane_g7_ParamLimits

0x1a6c,	// (0x00086268) postcard_pane_g7

0x0006,

0xf3e7,	// (0x00093be3) postcard_pane_g_ParamLimits

0xf3e7,	// (0x00093be3) postcard_pane_g

0x6caa,	// (0x0008b4a6) main_mp2_pane_g1_ParamLimits

0x6caa,	// (0x0008b4a6) main_mp2_pane_g1

0x6cb6,	// (0x0008b4b2) main_mp2_pane_g2_ParamLimits

0x6cb6,	// (0x0008b4b2) main_mp2_pane_g2

0x6cc2,	// (0x0008b4be) main_mp2_pane_g3_ParamLimits

0x6cc2,	// (0x0008b4be) main_mp2_pane_g3

0x0002,

0xf3f6,	// (0x00093bf2) main_mp2_pane_g_ParamLimits

0xf3f6,	// (0x00093bf2) main_mp2_pane_g

0x6cce,	// (0x0008b4ca) main_mp2_pane_t1_ParamLimits

0x6cce,	// (0x0008b4ca) main_mp2_pane_t1

0x6ce5,	// (0x0008b4e1) main_mp2_pane_t2_ParamLimits

0x6ce5,	// (0x0008b4e1) main_mp2_pane_t2

0x6cf9,	// (0x0008b4f5) main_mp2_pane_t3_ParamLimits

0x6cf9,	// (0x0008b4f5) main_mp2_pane_t3

0x0002,

0xf3fd,	// (0x00093bf9) main_mp2_pane_t_ParamLimits

0xf3fd,	// (0x00093bf9) main_mp2_pane_t

0xde1d,	// (0x00092619) pec_content_pane_ParamLimits

0xde1d,	// (0x00092619) pec_content_pane

0xdc3b,	// (0x00092437) scroll_pane_cp015

0x1993,	// (0x0008618f) pec_attribute_pane_ParamLimits

0x1993,	// (0x0008618f) pec_attribute_pane

0xe33c,	// (0x00092b38) pec_content_pane_g1_ParamLimits

0xe33c,	// (0x00092b38) pec_content_pane_g1

0x1a88,	// (0x00086284) pec_content_pane_t1_ParamLimits

0x1a88,	// (0x00086284) pec_content_pane_t1

0x1a9c,	// (0x00086298) pec_content_pane_t2_ParamLimits

0x1a9c,	// (0x00086298) pec_content_pane_t2

0x0001,

0xf404,	// (0x00093c00) pec_content_pane_t_ParamLimits

0xf404,	// (0x00093c00) pec_content_pane_t

0xe32e,	// (0x00092b2a) list_single_graphic_pane_cp01_ParamLimits

0xe32e,	// (0x00092b2a) list_single_graphic_pane_cp01

0xe2c1,	// (0x00092abd) bg_popup_sub_pane_cp04

0x1ab0,	// (0x000862ac) popup_mup_playback_window_g1

0x1abc,	// (0x000862b8) popup_mup_playback_window_t1

0x1ad1,	// (0x000862cd) popup_mup_playback_window_t2

0x0001,

0xf409,	// (0x00093c05) popup_mup_playback_window_t

0x1b08,	// (0x00086304) main_image_pane_g1_ParamLimits

0x1b08,	// (0x00086304) main_image_pane_g1

0x1b4b,	// (0x00086347) scroll_pane_cp018_ParamLimits

0x1b4b,	// (0x00086347) scroll_pane_cp018

0x1b63,	// (0x0008635f) scroll_pane_cp016_ParamLimits

0x1b63,	// (0x0008635f) scroll_pane_cp016

0x6d7c,	// (0x0008b578) smil2_image_pane_ParamLimits

0x6d7c,	// (0x0008b578) smil2_image_pane

0x6dac,	// (0x0008b5a8) smil2_root_pane_ParamLimits

0x6dac,	// (0x0008b5a8) smil2_root_pane

0x6dd8,	// (0x0008b5d4) smil2_text_pane_ParamLimits

0x6dd8,	// (0x0008b5d4) smil2_text_pane

0xdc3b,	// (0x00092437) bg_list_pane_cp06

0xdc3b,	// (0x00092437) grid_radio_pane

0xe066,	// (0x00092862) bg_popup_window_pane_cp06

0xeaea,	// (0x000932e6) main_fmradio_pane_t1

0xec7d,	// (0x00093479) heading_pane_cp04

0xeaea,	// (0x000932e6) main_fmradio_pane_t2

0x2b93,	// (0x0008738f) popup_cale_lunar_info_window_g1

0xeaea,	// (0x000932e6) main_fmradio_pane_t3

0x2b9b,	// (0x00087397) popup_cale_lunar_info_window_g2

0xeaea,	// (0x000932e6) main_fmradio_pane_t4

0x0001,

0xeaea,	// (0x000932e6) main_fmradio_pane_t5

0x0004,

0xf4cb,	// (0x00093cc7) popup_cale_lunar_info_window_g

0xf269,	// (0x00093a65) main_fmradio_pane_t

0xdc3b,	// (0x00092437) wait_bar_pane_cp03

0xe32e,	// (0x00092b2a) cell_fmradio_pane_ParamLimits

0xe32e,	// (0x00092b2a) cell_fmradio_pane

0xe33c,	// (0x00092b38) cell_fmradio_pane_g1_ParamLimits

0xe33c,	// (0x00092b38) cell_fmradio_pane_g1

0xdc3b,	// (0x00092437) grid_highlight_pane_cp011

0x1b97,	// (0x00086393) poc_content_pane_ParamLimits

0x1b97,	// (0x00086393) poc_content_pane

0x1ba9,	// (0x000863a5) scroll_pane_cp019

0x6e18,	// (0x0008b614) popup_call_poc_act_window_ParamLimits

0x6e18,	// (0x0008b614) popup_call_poc_act_window

0x6e25,	// (0x0008b621) popup_call_poc_inact_window_ParamLimits

0x6e25,	// (0x0008b621) popup_call_poc_inact_window

0xf4a2,	// (0x00093c9e) bg_popup_call_poc_act_pane_g

0x2b0b,	// (0x00087307) bg_popup_call_poc_inact_pane_g1

0x2b13,	// (0x0008730f) bg_popup_call_poc_inact_pane_g2

0x1bb1,	// (0x000863ad) popup_call_poc_act_window_g2

0x2b1b,	// (0x00087317) bg_popup_call_poc_inact_pane_g3

0x2b23,	// (0x0008731f) bg_popup_call_poc_inact_pane_g4

0x2b2b,	// (0x00087327) bg_popup_call_poc_inact_pane_g5

0x1bb9,	// (0x000863b5) popup_call_poc_act_window_t1_ParamLimits

0x1bb9,	// (0x000863b5) popup_call_poc_act_window_t1

0x1be1,	// (0x000863dd) popup_call_poc_act_window_t2_ParamLimits

0x1be1,	// (0x000863dd) popup_call_poc_act_window_t2

0x1c09,	// (0x00086405) popup_call_poc_act_window_t3_ParamLimits

0x1c09,	// (0x00086405) popup_call_poc_act_window_t3

0x1c31,	// (0x0008642d) popup_call_poc_act_window_t4_ParamLimits

0x1c31,	// (0x0008642d) popup_call_poc_act_window_t4

0x0003,

0xf41e,	// (0x00093c1a) popup_call_poc_act_window_t_ParamLimits

0xf41e,	// (0x00093c1a) popup_call_poc_act_window_t

0x2b33,	// (0x0008732f) bg_popup_call_poc_inact_pane_g6

0x2b3b,	// (0x00087337) bg_popup_call_poc_inact_pane_g7

0x2b43,	// (0x0008733f) bg_popup_call_poc_inact_pane_g8

0x1c43,	// (0x0008643f) popup_call_poc_inact_window_g2

0x2b4b,	// (0x00087347) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf48f,	// (0x00093c8b) bg_popup_call_poc_inact_pane_g

0x1c4b,	// (0x00086447) popup_call_poc_inact_window_t1_ParamLimits

0x1c4b,	// (0x00086447) popup_call_poc_inact_window_t1

0x1c60,	// (0x0008645c) popup_call_poc_inact_window_t2_ParamLimits

0x1c60,	// (0x0008645c) popup_call_poc_inact_window_t2

0x1c75,	// (0x00086471) popup_call_poc_inact_window_t3_ParamLimits

0x1c75,	// (0x00086471) popup_call_poc_inact_window_t3

0x0002,

0xf427,	// (0x00093c23) popup_call_poc_inact_window_t_ParamLimits

0xf427,	// (0x00093c23) popup_call_poc_inact_window_t

0x2c2f,	// (0x0008742b) context_pane_ParamLimits

0x743e,	// (0x0008bc3a) signal_pane_ParamLimits

0xe5f0,	// (0x00092dec) main_call2_pane

0x73b1,	// (0x0008bbad) popup_phob_thumbnail2_window_ParamLimits

0x73b1,	// (0x0008bbad) popup_phob_thumbnail2_window

0x6b26,	// (0x0008b322) aid_hotspot_pointer_arrow_pane

0x6b2e,	// (0x0008b32a) aid_hotspot_pointer_hand_pane

0x70f2,	// (0x0008b8ee) phob_pre_status_pane_g5

0xe32e,	// (0x00092b2a) cams_zoom_pane_ParamLimits

0xe32e,	// (0x00092b2a) image_vga_pane_ParamLimits

0xe34a,	// (0x00092b46) main_camera_pane_g1_ParamLimits

0xe34a,	// (0x00092b46) main_camera_pane_g2_ParamLimits

0xe34a,	// (0x00092b46) main_camera_pane_g3_ParamLimits

0xe34a,	// (0x00092b46) main_camera_pane_g4_ParamLimits

0xe34a,	// (0x00092b46) main_camera_pane_g5_ParamLimits

0xe34a,	// (0x00092b46) main_camera_pane_g6_ParamLimits

0xe34a,	// (0x00092b46) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x00093959) main_camera_pane_g_ParamLimits

0xe398,	// (0x00092b94) main_camera_pane_t1_ParamLimits

0xe398,	// (0x00092b94) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x0009396a) main_camera_pane_t_ParamLimits

0xe2c1,	// (0x00092abd) bg_popup_preview_window_pane_cp01_ParamLimits

0xe2c1,	// (0x00092abd) bg_popup_preview_window_pane_cp01

0x1c8a,	// (0x00086486) popup_phob_thumbnail2_window_g1_ParamLimits

0x1c8a,	// (0x00086486) popup_phob_thumbnail2_window_g1

0xe066,	// (0x00092862) call2_cli_visual_pane

0x6e41,	// (0x0008b63d) popup_call2_audio_conf_window_ParamLimits

0x6e41,	// (0x0008b63d) popup_call2_audio_conf_window

0x6e56,	// (0x0008b652) popup_call2_audio_first_window_ParamLimits

0x6e56,	// (0x0008b652) popup_call2_audio_first_window

0x6ef4,	// (0x0008b6f0) popup_call2_audio_in_window_ParamLimits

0x6ef4,	// (0x0008b6f0) popup_call2_audio_in_window

0x6f36,	// (0x0008b732) popup_call2_audio_out_window_ParamLimits

0x6f36,	// (0x0008b732) popup_call2_audio_out_window

0x6f98,	// (0x0008b794) popup_call2_audio_second_window_ParamLimits

0x6f98,	// (0x0008b794) popup_call2_audio_second_window

0x6ff6,	// (0x0008b7f2) popup_call2_audio_wait_window_ParamLimits

0x6ff6,	// (0x0008b7f2) popup_call2_audio_wait_window

0xe066,	// (0x00092862) bg_popup_call2_act_pane_cp03

0xe2a3,	// (0x00092a9f) list_conf_pane_cp

0x1c96,	// (0x00086492) popup_call2_audio_conf_window_t1

0xeccd,	// (0x000934c9) list_single_graphic_popup_conf2_pane_ParamLimits

0xeccd,	// (0x000934c9) list_single_graphic_popup_conf2_pane

0xece0,	// (0x000934dc) list_highlight_pane_cp04

0x1ca4,	// (0x000864a0) list_single_graphic_popup_conf2_pane_g1

0xecf1,	// (0x000934ed) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf42e,	// (0x00093c2a) list_single_graphic_popup_conf2_pane_g

0x1cae,	// (0x000864aa) list_single_graphic_popup_conf2_pane_t1

0x1cbc,	// (0x000864b8) bg_popup_call2_act_pane_cp01_ParamLimits

0x1cbc,	// (0x000864b8) bg_popup_call2_act_pane_cp01

0x1e3a,	// (0x00086636) call_type_pane_cp05_ParamLimits

0x1e3a,	// (0x00086636) call_type_pane_cp05

0x1e8e,	// (0x0008668a) popup_call2_audio_second_window_g1_ParamLimits

0x1e8e,	// (0x0008668a) popup_call2_audio_second_window_g1

0x1ee2,	// (0x000866de) popup_call2_audio_second_window_g2_ParamLimits

0x1ee2,	// (0x000866de) popup_call2_audio_second_window_g2

0x0002,

0xf433,	// (0x00093c2f) popup_call2_audio_second_window_g_ParamLimits

0xf433,	// (0x00093c2f) popup_call2_audio_second_window_g

0x1f47,	// (0x00086743) popup_call2_audio_second_window_t1_ParamLimits

0x1f47,	// (0x00086743) popup_call2_audio_second_window_t1

0x2002,	// (0x000867fe) popup_call2_audio_second_window_t2_ParamLimits

0x2002,	// (0x000867fe) popup_call2_audio_second_window_t2

0x2055,	// (0x00086851) popup_call2_audio_second_window_t3_ParamLimits

0x2055,	// (0x00086851) popup_call2_audio_second_window_t3

0x0003,

0xf43a,	// (0x00093c36) popup_call2_audio_second_window_t_ParamLimits

0xf43a,	// (0x00093c36) popup_call2_audio_second_window_t

0xe066,	// (0x00092862) bg_popup_call2_in_pane_cp02

0xe070,	// (0x0009286c) call_type_pane_cp04

0x7035,	// (0x0008b831) popup_call2_audio_wait_window_g1

0x703d,	// (0x0008b839) popup_call2_audio_wait_window_g2

0x0001,

0xf443,	// (0x00093c3f) popup_call2_audio_wait_window_g

0xe088,	// (0x00092884) popup_call2_audio_wait_window_t3

0x2148,	// (0x00086944) bg_popup_call2_act_pane_ParamLimits

0x2148,	// (0x00086944) bg_popup_call2_act_pane

0x2208,	// (0x00086a04) call_type_pane_cp03_ParamLimits

0x2208,	// (0x00086a04) call_type_pane_cp03

0x226c,	// (0x00086a68) popup_call2_audio_first_window_g1_ParamLimits

0x226c,	// (0x00086a68) popup_call2_audio_first_window_g1

0x22dc,	// (0x00086ad8) popup_call2_audio_first_window_g2_ParamLimits

0x22dc,	// (0x00086ad8) popup_call2_audio_first_window_g2

0x1d46,	// (0x00086542) popup_call2_audio_first_window_g3_ParamLimits

0x1d46,	// (0x00086542) popup_call2_audio_first_window_g3

0x0004,

0xf448,	// (0x00093c44) popup_call2_audio_first_window_g_ParamLimits

0xf448,	// (0x00093c44) popup_call2_audio_first_window_g

0x23c8,	// (0x00086bc4) popup_call2_audio_first_window_t1_ParamLimits

0x23c8,	// (0x00086bc4) popup_call2_audio_first_window_t1

0x24cb,	// (0x00086cc7) popup_call2_audio_first_window_t4_ParamLimits

0x24cb,	// (0x00086cc7) popup_call2_audio_first_window_t4

0x25ae,	// (0x00086daa) popup_call2_audio_first_window_t5_ParamLimits

0x25ae,	// (0x00086daa) popup_call2_audio_first_window_t5

0x0003,

0xf453,	// (0x00093c4f) popup_call2_audio_first_window_t_ParamLimits

0xf453,	// (0x00093c4f) popup_call2_audio_first_window_t

0xe2b9,	// (0x00092ab5) bg_popup_call2_act_pane_g1

0x2ba3,	// (0x0008739f) popup_cale_lunar_info_window_t1

0x2bb1,	// (0x000873ad) popup_cale_lunar_info_window_t2

0x2bbf,	// (0x000873bb) popup_cale_lunar_info_window_t3

0xe066,	// (0x00092862) bg_popup_call2_bubble_pane

0x26af,	// (0x00086eab) bg_popup_call2_in_pane_cp01_ParamLimits

0x26af,	// (0x00086eab) bg_popup_call2_in_pane_cp01

0xdd34,	// (0x00092530) call_type_pane_cp02

0x7045,	// (0x0008b841) popup_call2_audio_out_window_g1_ParamLimits

0x7045,	// (0x0008b841) popup_call2_audio_out_window_g1

0x26f7,	// (0x00086ef3) popup_call2_audio_out_window_g2_ParamLimits

0x26f7,	// (0x00086ef3) popup_call2_audio_out_window_g2

0x7071,	// (0x0008b86d) popup_call2_audio_out_window_g3_ParamLimits

0x7071,	// (0x0008b86d) popup_call2_audio_out_window_g3

0x0003,

0xf45c,	// (0x00093c58) popup_call2_audio_out_window_g_ParamLimits

0xf45c,	// (0x00093c58) popup_call2_audio_out_window_g

0x272e,	// (0x00086f2a) popup_call2_audio_out_window_t1_ParamLimits

0x272e,	// (0x00086f2a) popup_call2_audio_out_window_t1

0x278d,	// (0x00086f89) popup_call2_audio_out_window_t2_ParamLimits

0x278d,	// (0x00086f89) popup_call2_audio_out_window_t2

0x27e1,	// (0x00086fdd) popup_call2_audio_out_window_t3_ParamLimits

0x27e1,	// (0x00086fdd) popup_call2_audio_out_window_t3

0x27f7,	// (0x00086ff3) popup_call2_audio_out_window_t4_ParamLimits

0x27f7,	// (0x00086ff3) popup_call2_audio_out_window_t4

0x280d,	// (0x00087009) popup_call2_audio_out_window_t5_ParamLimits

0x280d,	// (0x00087009) popup_call2_audio_out_window_t5

0x0005,

0xf465,	// (0x00093c61) popup_call2_audio_out_window_t_ParamLimits

0xf465,	// (0x00093c61) popup_call2_audio_out_window_t

0x2891,	// (0x0008708d) bg_popup_call2_in_pane_ParamLimits

0x2891,	// (0x0008708d) bg_popup_call2_in_pane

0x28ed,	// (0x000870e9) popup_call2_audio_in_window_g1_ParamLimits

0x28ed,	// (0x000870e9) popup_call2_audio_in_window_g1

0x2925,	// (0x00087121) popup_call2_audio_in_window_g2_ParamLimits

0x2925,	// (0x00087121) popup_call2_audio_in_window_g2

0x295d,	// (0x00087159) popup_call2_audio_in_window_g3_ParamLimits

0x295d,	// (0x00087159) popup_call2_audio_in_window_g3

0x0003,

0xf472,	// (0x00093c6e) popup_call2_audio_in_window_g_ParamLimits

0xf472,	// (0x00093c6e) popup_call2_audio_in_window_g

0x29b5,	// (0x000871b1) popup_call2_audio_in_window_t1_ParamLimits

0x29b5,	// (0x000871b1) popup_call2_audio_in_window_t1

0x2a35,	// (0x00087231) popup_call2_audio_in_window_t2_ParamLimits

0x2a35,	// (0x00087231) popup_call2_audio_in_window_t2

0x2ab5,	// (0x000872b1) popup_call2_audio_in_window_t3_ParamLimits

0x2ab5,	// (0x000872b1) popup_call2_audio_in_window_t3

0x2acf,	// (0x000872cb) popup_call2_audio_in_window_t4_ParamLimits

0x2acf,	// (0x000872cb) popup_call2_audio_in_window_t4

0x2ae1,	// (0x000872dd) popup_call2_audio_in_window_t5_ParamLimits

0x2ae1,	// (0x000872dd) popup_call2_audio_in_window_t5

0x2af6,	// (0x000872f2) popup_call2_audio_in_window_t6_ParamLimits

0x2af6,	// (0x000872f2) popup_call2_audio_in_window_t6

0x0005,

0xf47b,	// (0x00093c77) popup_call2_audio_in_window_t_ParamLimits

0xf47b,	// (0x00093c77) popup_call2_audio_in_window_t

0xe2b9,	// (0x00092ab5) bg_popup_call2_in_pane_g1

0x2bcd,	// (0x000873c9) popup_cale_lunar_info_window_t4

0x0003,

0xf4d0,	// (0x00093ccc) popup_cale_lunar_info_window_t

0xe2c1,	// (0x00092abd) bg_popup_call2_rect_pane_ParamLimits

0xe2c1,	// (0x00092abd) bg_popup_call2_rect_pane

0xe066,	// (0x00092862) call2_cli_visual_graphic_pane

0xe066,	// (0x00092862) call2_cli_visual_text_pane

0x747a,	// (0x0008bc76) smil_status_volume_pane_g3

0x0002,

0xe2d9,	// (0x00092ad5) call2_cli_visual_graphic_pane_g1

0xe2d9,	// (0x00092ad5) call2_cli_visual_graphic_pane_g2

0xe2d9,	// (0x00092ad5) call2_cli_visual_graphic_pane_g3

0x0002,

0xf488,	// (0x00093c84) call2_cli_visual_graphic_pane_g

0xe4d9,	// (0x00092cd5) bg_popup_call2_rect_pane_g1

0xe4d1,	// (0x00092ccd) bg_popup_call2_rect_pane_g2

0xe4c9,	// (0x00092cc5) bg_popup_call2_rect_pane_g3

0xe4e9,	// (0x00092ce5) bg_popup_call2_rect_pane_g4

0xe4e1,	// (0x00092cdd) bg_popup_call2_rect_pane_g5

0xe4f1,	// (0x00092ced) bg_popup_call2_rect_pane_g6

0xe4f9,	// (0x00092cf5) bg_popup_call2_rect_pane_g7

0xe509,	// (0x00092d05) bg_popup_call2_rect_pane_g8

0xe501,	// (0x00092cfd) bg_popup_call2_rect_pane_g9

0x0008,

0xf218,	// (0x00093a14) bg_popup_call2_rect_pane_g

0x2b0b,	// (0x00087307) bg_popup_call2_bubble_pane_g1

0x2b13,	// (0x0008730f) bg_popup_call2_bubble_pane_g2

0x2b1b,	// (0x00087317) bg_popup_call2_bubble_pane_g3

0x2b23,	// (0x0008731f) bg_popup_call2_bubble_pane_g4

0x2b2b,	// (0x00087327) bg_popup_call2_bubble_pane_g5

0x2b33,	// (0x0008732f) bg_popup_call2_bubble_pane_g6

0x2b3b,	// (0x00087337) bg_popup_call2_bubble_pane_g7

0x2b43,	// (0x0008733f) bg_popup_call2_bubble_pane_g8

0x2b4b,	// (0x00087347) bg_popup_call2_bubble_pane_g9

0x0008,

0xf48f,	// (0x00093c8b) bg_popup_call2_bubble_pane_g

0x4c14,	// (0x00089410) aid_cale_week_size_cell_pane

0xe2c1,	// (0x00092abd) aid_cams_cif_uncrop_pane_ParamLimits

0xe2c1,	// (0x00092abd) aid_cams_cif_uncrop_pane

0xe32e,	// (0x00092b2a) aid_cams_size_cell_ParamLimits

0xe32e,	// (0x00092b2a) aid_cams_size_cell

0xe32e,	// (0x00092b2a) grid_cams_pane_ParamLimits

0xe32e,	// (0x00092b2a) linegrid_cams_pane_ParamLimits

0x52d3,	// (0x00089acf) call_video_pane_t1

0x52f4,	// (0x00089af0) call_video_pane_t2

0x0001,

0xf1ba,	// (0x000939b6) call_video_pane_t

0x583b,	// (0x0008a037) aid_cale_month_size_cell_pane_ParamLimits

0x583b,	// (0x0008a037) aid_cale_month_size_cell_pane

0xf514,	// (0x00093d10) smil_status_volume_pane_g

0x7487,	// (0x0008bc83) volume_smil_pane_ParamLimits

0x45b0,	// (0x00088dac) aid_popup2_width_pane

0x4b41,	// (0x0008933d) cell_qdial_pane_g4_ParamLimits

0x4b41,	// (0x0008933d) cell_qdial_pane_g4

0x66eb,	// (0x0008aee7) aid_blid_cardinal_pane_ParamLimits

0x66fb,	// (0x0008aef7) aid_blid_destination_pane_ParamLimits

0x66fb,	// (0x0008aef7) aid_blid_destination_pane

0xe2c1,	// (0x00092abd) bg_popup_call_poc_act_pane_ParamLimits

0xe2c1,	// (0x00092abd) bg_popup_call_poc_act_pane

0xe2c1,	// (0x00092abd) bg_popup_call_poc_inact_pane_ParamLimits

0xe2c1,	// (0x00092abd) bg_popup_call_poc_inact_pane

0x2b53,	// (0x0008734f) bg_popup_call_poc_act_pane_g1

0x2b5b,	// (0x00087357) bg_popup_call_poc_act_pane_g2

0x2b63,	// (0x0008735f) bg_popup_call_poc_act_pane_g3

0x2b23,	// (0x0008731f) bg_popup_call_poc_act_pane_g4

0x2b2b,	// (0x00087327) bg_popup_call_poc_act_pane_g5

0x2b6b,	// (0x00087367) bg_popup_call_poc_act_pane_g6

0x2b3b,	// (0x00087337) bg_popup_call_poc_act_pane_g7

0x2b73,	// (0x0008736f) bg_popup_call_poc_act_pane_g8

0xe066,	// (0x00092862) main_usb_pane

0x72e0,	// (0x0008badc) popup_cale_lunar_info_window

0x561d,	// (0x00089e19) im_reading_pane_t1_ParamLimits

0xe6ba,	// (0x00092eb6) list_im_pane_ParamLimits

0xe6cb,	// (0x00092ec7) scroll_pane_cp07_ParamLimits

0xe066,	// (0x00092862) grid_highlight_pane_cp012

0xe2c1,	// (0x00092abd) mup_scale_pane_ParamLimits

0xe34a,	// (0x00092b46) main_usb_pane_g1_ParamLimits

0xe34a,	// (0x00092b46) main_usb_pane_g1

0xe34a,	// (0x00092b46) main_usb_pane_g2_ParamLimits

0xe34a,	// (0x00092b46) main_usb_pane_g2

0x0001,

0xf4b9,	// (0x00093cb5) main_usb_pane_g_ParamLimits

0xf4b9,	// (0x00093cb5) main_usb_pane_g

0xe398,	// (0x00092b94) main_usb_pane_t1_ParamLimits

0xe398,	// (0x00092b94) main_usb_pane_t1

0xe398,	// (0x00092b94) main_usb_pane_t2_ParamLimits

0xe398,	// (0x00092b94) main_usb_pane_t2

0xe398,	// (0x00092b94) main_usb_pane_t3_ParamLimits

0xe398,	// (0x00092b94) main_usb_pane_t3

0xe398,	// (0x00092b94) main_usb_pane_t4_ParamLimits

0xe398,	// (0x00092b94) main_usb_pane_t4

0xe398,	// (0x00092b94) main_usb_pane_t5_ParamLimits

0xe398,	// (0x00092b94) main_usb_pane_t5

0xe398,	// (0x00092b94) main_usb_pane_t6_ParamLimits

0xe398,	// (0x00092b94) main_usb_pane_t6

0x0005,

0xf4be,	// (0x00093cba) main_usb_pane_t_ParamLimits

0x6691,	// (0x0008ae8d) aid_text_placing

0x669d,	// (0x0008ae99) main_location2_pane_t1_ParamLimits

0x66b1,	// (0x0008aead) main_location2_pane_t2_ParamLimits

0x66c5,	// (0x0008aec1) main_location2_pane_t3_ParamLimits

0x66d9,	// (0x0008aed5) main_location2_pane_t4_ParamLimits

0x66d9,	// (0x0008aed5) main_location2_pane_t4

0xf2fb,	// (0x00093af7) main_location2_pane_t_ParamLimits

0xe2ef,	// (0x00092aeb) find_pinb_pane_g2_ParamLimits

0xe2ef,	// (0x00092aeb) find_pinb_pane_g2

0x0001,

0xf072,	// (0x0009386e) find_pinb_pane_g_ParamLimits

0xf072,	// (0x0009386e) find_pinb_pane_g

0xe2fb,	// (0x00092af7) find_pinb_pane_t1_ParamLimits

0xe30d,	// (0x00092b09) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x00093873) find_pinb_pane_t_ParamLimits

0xe066,	// (0x00092862) main_call3_pane

0x5dde,	// (0x0008a5da) cale_month_day_heading_pane_t1_ParamLimits

0x5e64,	// (0x0008a660) cale_month_day_heading_pane_t2_ParamLimits

0x5edd,	// (0x0008a6d9) cale_month_day_heading_pane_t3_ParamLimits

0x5f56,	// (0x0008a752) cale_month_day_heading_pane_t4_ParamLimits

0x5fcf,	// (0x0008a7cb) cale_month_day_heading_pane_t5_ParamLimits

0x6048,	// (0x0008a844) cale_month_day_heading_pane_t6_ParamLimits

0x60c1,	// (0x0008a8bd) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x000939ee) cale_month_day_heading_pane_t_ParamLimits

0xe915,	// (0x00093111) smil_status_volume_pane

0x6c62,	// (0x0008b45e) postcard_address_pane_ParamLimits

0x6c62,	// (0x0008b45e) postcard_address_pane

0x6c6e,	// (0x0008b46a) postcard_message_pane_ParamLimits

0x6c6e,	// (0x0008b46a) postcard_message_pane

0x709d,	// (0x0008b899) call2_cli_visual_pane_t1_ParamLimits

0x709d,	// (0x0008b899) call2_cli_visual_pane_t1

0x2ce2,	// (0x000874de) postcard_message_pane_t1_ParamLimits

0x2ce2,	// (0x000874de) postcard_message_pane_t1

0x2cca,	// (0x000874c6) postcard_address_pane_t1_ParamLimits

0x2cca,	// (0x000874c6) postcard_address_pane_t1

0x75b8,	// (0x0008bdb4) popup_call3_audio_in_window_ParamLimits

0x75b8,	// (0x0008bdb4) popup_call3_audio_in_window

0x749c,	// (0x0008bc98) bg_popup_call3_in_pane_ParamLimits

0x749c,	// (0x0008bc98) bg_popup_call3_in_pane

0x74fe,	// (0x0008bcfa) popup_call3_audio_in_window_g1_ParamLimits

0x74fe,	// (0x0008bcfa) popup_call3_audio_in_window_g1

0x7516,	// (0x0008bd12) popup_call3_audio_in_window_g2_ParamLimits

0x7516,	// (0x0008bd12) popup_call3_audio_in_window_g2

0x752e,	// (0x0008bd2a) popup_call3_audio_in_window_g3_ParamLimits

0x752e,	// (0x0008bd2a) popup_call3_audio_in_window_g3

0x0003,

0xf51b,	// (0x00093d17) popup_call3_audio_in_window_g_ParamLimits

0xf51b,	// (0x00093d17) popup_call3_audio_in_window_g

0x7556,	// (0x0008bd52) popup_call3_audio_in_window_t1_ParamLimits

0x7556,	// (0x0008bd52) popup_call3_audio_in_window_t1

0x757e,	// (0x0008bd7a) popup_call3_audio_in_window_t2_ParamLimits

0x757e,	// (0x0008bd7a) popup_call3_audio_in_window_t2

0x75a6,	// (0x0008bda2) popup_call3_audio_in_window_t3_ParamLimits

0x75a6,	// (0x0008bda2) popup_call3_audio_in_window_t3

0x0002,

0xf524,	// (0x00093d20) popup_call3_audio_in_window_t_ParamLimits

0xf524,	// (0x00093d20) popup_call3_audio_in_window_t

0xe5f0,	// (0x00092dec) bg_popup_call3_rect_pane

0xe4d9,	// (0x00092cd5) bg_popup_call3_rect_pane_g1

0xe4d1,	// (0x00092ccd) bg_popup_call3_rect_pane_g2

0xe4c9,	// (0x00092cc5) bg_popup_call3_rect_pane_g3

0xe4e9,	// (0x00092ce5) bg_popup_call3_rect_pane_g4

0xe4e1,	// (0x00092cdd) bg_popup_call3_rect_pane_g5

0xe4f1,	// (0x00092ced) bg_popup_call3_rect_pane_g6

0xe4f9,	// (0x00092cf5) bg_popup_call3_rect_pane_g7

0xdc3b,	// (0x00092437) mup_visualizer_osc_pane

0xdc3b,	// (0x00092437) mup_visualizer_spec_pane

0x74bc,	// (0x0008bcb8) call3_video_qcif_pane_ParamLimits

0x74bc,	// (0x0008bcb8) call3_video_qcif_pane

0x74ce,	// (0x0008bcca) call3_video_qcif_uncrop_pane_ParamLimits

0x74ce,	// (0x0008bcca) call3_video_qcif_uncrop_pane

0x74dc,	// (0x0008bcd8) call3_video_subqcif_pane_ParamLimits

0x74dc,	// (0x0008bcd8) call3_video_subqcif_pane

0x74ee,	// (0x0008bcea) call3_video_subqcif_uncrop_pane_ParamLimits

0x74ee,	// (0x0008bcea) call3_video_subqcif_uncrop_pane

0x7546,	// (0x0008bd42) popup_call3_audio_in_window_g4_ParamLimits

0x7546,	// (0x0008bd42) popup_call3_audio_in_window_g4

0xdc3b,	// (0x00092437) mup_spec_half_pane

0xdc3b,	// (0x00092437) mup_spec_half_pane_cp

0xdc3b,	// (0x00092437) mup_osc_middle_pane

0xe37a,	// (0x00092b76) mup_visualizer_osc_pane_g1

0x2c7d,	// (0x00087479) mup_spec_bar_pane_ParamLimits

0x2c7d,	// (0x00087479) mup_spec_bar_pane

0xe37a,	// (0x00092b76) mup_spec_bar_pane_g1

0xe37a,	// (0x00092b76) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x00093888) mup_spec_bar_pane_g

0x4c14,	// (0x00089410) aid_cale_week_size_cell_pane_ParamLimits

0x4c29,	// (0x00089425) bg_cale_heading_pane_ParamLimits

0xe552,	// (0x00092d4e) bg_cale_pane_cp01_ParamLimits

0x4c49,	// (0x00089445) cale_week_corner_pane_ParamLimits

0x4c63,	// (0x0008945f) cale_week_day_heading_pane_ParamLimits

0x4c83,	// (0x0008947f) cale_week_scroll_pane_g1_ParamLimits

0x4c9e,	// (0x0008949a) cale_week_scroll_pane_g2_ParamLimits

0x4cb1,	// (0x000894ad) cale_week_scroll_pane_g3_ParamLimits

0x4cc4,	// (0x000894c0) cale_week_scroll_pane_g4_ParamLimits

0x4cd7,	// (0x000894d3) cale_week_scroll_pane_g5_ParamLimits

0x4cea,	// (0x000894e6) cale_week_scroll_pane_g6_ParamLimits

0x4cfd,	// (0x000894f9) cale_week_scroll_pane_g7_ParamLimits

0x4d12,	// (0x0008950e) cale_week_scroll_pane_g8_ParamLimits

0x4d27,	// (0x00089523) cale_week_scroll_pane_g9_ParamLimits

0x4d3a,	// (0x00089536) cale_week_scroll_pane_g10_ParamLimits

0x4d4d,	// (0x00089549) cale_week_scroll_pane_g11_ParamLimits

0x4d60,	// (0x0008955c) cale_week_scroll_pane_g12_ParamLimits

0x4d77,	// (0x00089573) cale_week_scroll_pane_g13_ParamLimits

0x4d92,	// (0x0008958e) cale_week_scroll_pane_g14_ParamLimits

0x4dad,	// (0x000895a9) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x000938ff) cale_week_scroll_pane_g_ParamLimits

0x4ddd,	// (0x000895d9) cale_week_time_pane_ParamLimits

0x4df2,	// (0x000895ee) grid_cale_week_pane_ParamLimits

0xe56f,	// (0x00092d6b) listscroll_cale_week_pane_t1

0xe581,	// (0x00092d7d) scroll_pane_cp08_ParamLimits

0x58af,	// (0x0008a0ab) cale_month_corner_pane_ParamLimits

0xe8eb,	// (0x000930e7) cale_month_pane_t1

0x5d61,	// (0x0008a55d) cale_month_week_pane_ParamLimits

0x1d46,	// (0x00086542) popup_call_status_window_g1_ParamLimits

0x64e8,	// (0x0008ace4) popup_call_status_window_g2_ParamLimits

0x64f4,	// (0x0008acf0) popup_call_status_window_g3_ParamLimits

0xf282,	// (0x00093a7e) popup_call_status_window_g_ParamLimits

0xec6d,	// (0x00093469) aid_call2_pane

0x6a89,	// (0x0008b285) msg_header_pane_g1

0x6c62,	// (0x0008b45e) postcard_address2_pane_ParamLimits

0x6c62,	// (0x0008b45e) postcard_address2_pane

0x6c6e,	// (0x0008b46a) postcard_message2_pane_ParamLimits

0x6c6e,	// (0x0008b46a) postcard_message2_pane

0x744c,	// (0x0008bc48) message2_row_pane_ParamLimits

0x744c,	// (0x0008bc48) message2_row_pane

0x7467,	// (0x0008bc63) address2_row_pane_ParamLimits

0x7467,	// (0x0008bc63) address2_row_pane

0x2c4a,	// (0x00087446) postcard_message2_row_pane_g1

0x2c52,	// (0x0008744e) postcard_message2_row_pane_t1

0x2c4a,	// (0x00087446) address2_row_pane_g1

0x2c52,	// (0x0008744e) address2_row_pane_t1

0x5078,	// (0x00089874) aid_size_cell_vorec

0xe066,	// (0x00092862) main_rss_pane

0x2c60,	// (0x0008745c) rss_list_single_pane_ParamLimits

0x2c60,	// (0x0008745c) rss_list_single_pane

0x2c6e,	// (0x0008746a) rss_list_single_pane_t1

0x2c6e,	// (0x0008746a) rss_list_single_pane_t2

0x0001,

0xf50f,	// (0x00093d0b) rss_list_single_pane_t

0xe066,	// (0x00092862) main_camera2_pane

0xe066,	// (0x00092862) main_video2_pane

0x4857,	// (0x00089053) cams_zoom_pane_cp2_ParamLimits

0x4857,	// (0x00089053) cams_zoom_pane_cp2

0x4857,	// (0x00089053) image2_vga_pane_ParamLimits

0x4857,	// (0x00089053) image2_vga_pane

0xeca0,	// (0x0009349c) main_camera2_pane_g1_ParamLimits

0xeca0,	// (0x0009349c) main_camera2_pane_g1

0xeca0,	// (0x0009349c) main_camera2_pane_g2_ParamLimits

0xeca0,	// (0x0009349c) main_camera2_pane_g2

0xeca0,	// (0x0009349c) main_camera2_pane_g3_ParamLimits

0xeca0,	// (0x0009349c) main_camera2_pane_g3

0xeca0,	// (0x0009349c) main_camera2_pane_g4_ParamLimits

0xeca0,	// (0x0009349c) main_camera2_pane_g4

0xeca0,	// (0x0009349c) main_camera2_pane_g5_ParamLimits

0xeca0,	// (0x0009349c) main_camera2_pane_g5

0xeca0,	// (0x0009349c) main_camera2_pane_g6_ParamLimits

0xeca0,	// (0x0009349c) main_camera2_pane_g6

0xeca0,	// (0x0009349c) main_camera2_pane_g7_ParamLimits

0xeca0,	// (0x0009349c) main_camera2_pane_g7

0xeca0,	// (0x0009349c) main_camera2_pane_g8_ParamLimits

0xeca0,	// (0x0009349c) main_camera2_pane_g8

0x0008,

0xf52b,	// (0x00093d27) main_camera2_pane_g_ParamLimits

0xf52b,	// (0x00093d27) main_camera2_pane_g

0x75d5,	// (0x0008bdd1) main_camera2_pane_t1_ParamLimits

0x75d5,	// (0x0008bdd1) main_camera2_pane_t1

0x75d5,	// (0x0008bdd1) main_camera2_pane_t2_ParamLimits

0x75d5,	// (0x0008bdd1) main_camera2_pane_t2

0x75d5,	// (0x0008bdd1) main_camera2_pane_t3_ParamLimits

0x75d5,	// (0x0008bdd1) main_camera2_pane_t3

0x75d5,	// (0x0008bdd1) main_camera2_pane_t4_ParamLimits

0x75d5,	// (0x0008bdd1) main_camera2_pane_t4

0x0006,

0xf53e,	// (0x00093d3a) main_camera2_pane_t_ParamLimits

0xf53e,	// (0x00093d3a) main_camera2_pane_t

0x75fd,	// (0x0008bdf9) cams_zoom_pane_cp4_ParamLimits

0x75fd,	// (0x0008bdf9) cams_zoom_pane_cp4

0x728b,	// (0x0008ba87) image2_cif_pane_ParamLimits

0x728b,	// (0x0008ba87) image2_cif_pane

0x4857,	// (0x00089053) image2_subqcif_pane_ParamLimits

0x4857,	// (0x00089053) image2_subqcif_pane

0x760b,	// (0x0008be07) main_video2_pane_g1_ParamLimits

0x760b,	// (0x0008be07) main_video2_pane_g1

0x760b,	// (0x0008be07) main_video2_pane_g2_ParamLimits

0x760b,	// (0x0008be07) main_video2_pane_g2

0x760b,	// (0x0008be07) main_video2_pane_g3_ParamLimits

0x760b,	// (0x0008be07) main_video2_pane_g3

0x760b,	// (0x0008be07) main_video2_pane_g4_ParamLimits

0x760b,	// (0x0008be07) main_video2_pane_g4

0x760b,	// (0x0008be07) main_video2_pane_g5_ParamLimits

0x760b,	// (0x0008be07) main_video2_pane_g5

0x760b,	// (0x0008be07) main_video2_pane_g6_ParamLimits

0x760b,	// (0x0008be07) main_video2_pane_g6

0x0005,

0xf54d,	// (0x00093d49) main_video2_pane_g_ParamLimits

0xf54d,	// (0x00093d49) main_video2_pane_g

0x7619,	// (0x0008be15) main_video2_pane_t1_ParamLimits

0x7619,	// (0x0008be15) main_video2_pane_t1

0x7619,	// (0x0008be15) main_video2_pane_t2_ParamLimits

0x7619,	// (0x0008be15) main_video2_pane_t2

0x7619,	// (0x0008be15) main_video2_pane_t3_ParamLimits

0x7619,	// (0x0008be15) main_video2_pane_t3

0x0002,

0xf55a,	// (0x00093d56) main_video2_pane_t_ParamLimits

0xf55a,	// (0x00093d56) main_video2_pane_t

0x7156,	// (0x0008b952) call_muted_g2

0x0001,

0xf501,	// (0x00093cfd) call_muted_g

0xe066,	// (0x00092862) main_mup2_pane

0xe358,	// (0x00092b54) main_mup2_pane_g1_ParamLimits

0xe358,	// (0x00092b54) main_mup2_pane_g1

0xe358,	// (0x00092b54) main_mup2_pane_g2_ParamLimits

0xe358,	// (0x00092b54) main_mup2_pane_g2

0x31f2,	// (0x000879ee) main_mup_pane_g13_cp1

0x4871,	// (0x0008906d) mup_volume_pane_cp1

0xe358,	// (0x00092b54) main_mup2_pane_g4_ParamLimits

0xe358,	// (0x00092b54) main_mup2_pane_g4

0xe358,	// (0x00092b54) main_mup2_pane_g5_ParamLimits

0xe358,	// (0x00092b54) main_mup2_pane_g5

0xe358,	// (0x00092b54) main_mup2_pane_g6_ParamLimits

0xe358,	// (0x00092b54) main_mup2_pane_g6

0xe358,	// (0x00092b54) main_mup2_pane_g7_ParamLimits

0xe358,	// (0x00092b54) main_mup2_pane_g7

0x0006,

0xf561,	// (0x00093d5d) main_mup2_pane_g_ParamLimits

0xf561,	// (0x00093d5d) main_mup2_pane_g

0xe366,	// (0x00092b62) main_mup2_pane_t1_ParamLimits

0xe366,	// (0x00092b62) main_mup2_pane_t1

0xe366,	// (0x00092b62) main_mup2_pane_t2_ParamLimits

0xe366,	// (0x00092b62) main_mup2_pane_t2

0xe366,	// (0x00092b62) main_mup2_pane_t3_ParamLimits

0xe366,	// (0x00092b62) main_mup2_pane_t3

0xe366,	// (0x00092b62) main_mup2_pane_t4_ParamLimits

0xe366,	// (0x00092b62) main_mup2_pane_t4

0xe366,	// (0x00092b62) main_mup2_pane_t5_ParamLimits

0xe366,	// (0x00092b62) main_mup2_pane_t5

0xe366,	// (0x00092b62) main_mup2_pane_t6_ParamLimits

0xe366,	// (0x00092b62) main_mup2_pane_t6

0x0005,

0xf570,	// (0x00093d6c) main_mup2_pane_t_ParamLimits

0xf570,	// (0x00093d6c) main_mup2_pane_t

0x2cfe,	// (0x000874fa) mup2_visualizer_pane_ParamLimits

0x2cfe,	// (0x000874fa) mup2_visualizer_pane

0x2cfe,	// (0x000874fa) mup_progress_pane_cp_ParamLimits

0x2cfe,	// (0x000874fa) mup_progress_pane_cp

0x76e0,	// (0x0008bedc) mup_volume_pane_cp_ParamLimits

0x76e0,	// (0x0008bedc) mup_volume_pane_cp

0xe33c,	// (0x00092b38) mup2_visualizer_pane_g1_ParamLimits

0xe33c,	// (0x00092b38) mup2_visualizer_pane_g1

0xe34a,	// (0x00092b46) mup2_visualizer_pane_g2_ParamLimits

0xe34a,	// (0x00092b46) mup2_visualizer_pane_g2

0xe34a,	// (0x00092b46) mup2_visualizer_pane_g3_ParamLimits

0xe34a,	// (0x00092b46) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x00093878) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x00093878) mup2_visualizer_pane_g

0xdc3b,	// (0x00092437) aid_size_cell_fmradio

0x726c,	// (0x0008ba68) aid_height_parent_landcape

0xe749,	// (0x00092f45) wml_content_pane_cp

0xe751,	// (0x00092f4d) wml_tabs_pane

0xe75a,	// (0x00092f56) popup_wml_miniature_window

0xe762,	// (0x00092f5e) scroll_pane_cp021

0xe776,	// (0x00092f72) wml_content_pane_comp8

0xe066,	// (0x00092862) bg_popup_sub_pane_cp05

0x2d22,	// (0x0008751e) popup_wml_miniature_window_g1

0x2d2a,	// (0x00087526) wml_miniature_view_pane

0x762d,	// (0x0008be29) aid_size_wml_view

0x7635,	// (0x0008be31) wml_miniature_view_pane_g1

0x763e,	// (0x0008be3a) wml_miniature_view_pane_g2

0x7647,	// (0x0008be43) wml_miniature_view_pane_g3

0x764f,	// (0x0008be4b) wml_miniature_view_pane_g4

0x7657,	// (0x0008be53) wml_miniature_view_pane_g5

0x765f,	// (0x0008be5b) wml_miniature_view_pane_g6

0x7667,	// (0x0008be63) wml_miniature_view_pane_g7

0x766f,	// (0x0008be6b) wml_miniature_view_pane_g8

0x0007,

0xf57d,	// (0x00093d79) wml_miniature_view_pane_g

0x2d32,	// (0x0008752e) background_graphic_ParamLimits

0x2d32,	// (0x0008752e) background_graphic

0x2d3e,	// (0x0008753a) wml_tabs_2_pane

0x2d47,	// (0x00087543) wml_tabs_3_pane_ParamLimits

0x2d47,	// (0x00087543) wml_tabs_3_pane

0x2d59,	// (0x00087555) wml_tabs_4_pane_ParamLimits

0x2d59,	// (0x00087555) wml_tabs_4_pane

0x2d6f,	// (0x0008756b) wml_tabs_5_pane_ParamLimits

0x2d6f,	// (0x0008756b) wml_tabs_5_pane

0x2d89,	// (0x00087585) wml_tabs_pane_g2_ParamLimits

0x2d89,	// (0x00087585) wml_tabs_pane_g2

0x2d9e,	// (0x0008759a) wml_tabs_pane_g3_ParamLimits

0x2d9e,	// (0x0008759a) wml_tabs_pane_g3

0x2db3,	// (0x000875af) wml_tabs_2_active_pane_ParamLimits

0x2db3,	// (0x000875af) wml_tabs_2_active_pane

0x2db3,	// (0x000875af) wml_tabs_2_passive_pane_ParamLimits

0x2db3,	// (0x000875af) wml_tabs_2_passive_pane

0x7677,	// (0x0008be73) wml_tabs_3_active_pane_cp_ParamLimits

0x7677,	// (0x0008be73) wml_tabs_3_active_pane_cp

0x7688,	// (0x0008be84) wml_tabs_3_passive_pane_ParamLimits

0x7688,	// (0x0008be84) wml_tabs_3_passive_pane

0x7699,	// (0x0008be95) wml_tabs_3_passive_pane_cp_ParamLimits

0x7699,	// (0x0008be95) wml_tabs_3_passive_pane_cp

0x76aa,	// (0x0008bea6) tabs_4_active_pane

0x76b2,	// (0x0008beae) tabs_4_passive_pane

0x76ba,	// (0x0008beb6) tabs_4_passive_pane_cp

0x76c2,	// (0x0008bebe) tabs_4_passive_pane_cp2

0x70ca,	// (0x0008b8c6) aid_height_text

0x2cfe,	// (0x000874fa) mup_volume_cont_pane_ParamLimits

0x2cfe,	// (0x000874fa) mup_volume_cont_pane

0xdc3b,	// (0x00092437) aid_size_cell_pinb

0xdc3b,	// (0x00092437) aid_size_list_pinb

0x2cfe,	// (0x000874fa) mup2_volume_cont_pane_ParamLimits

0x2cfe,	// (0x000874fa) mup2_volume_cont_pane

0x76ca,	// (0x0008bec6) mup2_volume_cont_pane_g1_ParamLimits

0x76ca,	// (0x0008bec6) mup2_volume_cont_pane_g1

0x45bc,	// (0x00088db8) aid_size_cell_touch_ParamLimits

0x45bc,	// (0x00088db8) aid_size_cell_touch

0x487b,	// (0x00089077) touch_pane_ParamLimits

0x487b,	// (0x00089077) touch_pane

0x4871,	// (0x0008906d) main_rss2_pane

0x2dca,	// (0x000875c6) listscroll_rss2_pane

0x2dd3,	// (0x000875cf) rss2_navigation_pane

0x2ddb,	// (0x000875d7) list_rss2_pane

0xeda3,	// (0x0009359f) scroll_pane_cp22

0x2de3,	// (0x000875df) rss2_navigation_pane_g1

0x2dec,	// (0x000875e8) rss2_navigation_pane_g2

0x2df4,	// (0x000875f0) rss2_navigation_pane_g3

0x0002,

0xf58e,	// (0x00093d8a) rss2_navigation_pane_g

0x2dfc,	// (0x000875f8) rss2_navigation_pane_t1

0x76f6,	// (0x0008bef2) rss2_list_single_pane_ParamLimits

0x76f6,	// (0x0008bef2) rss2_list_single_pane

0x2e0a,	// (0x00087606) rss2_list_single_pane_t2

0x2e18,	// (0x00087614) rss2_list_single_pane_t3_ParamLimits

0x2e18,	// (0x00087614) rss2_list_single_pane_t3

0x2e35,	// (0x00087631) rss2_list_single_pane_t4

0x635d,	// (0x0008ab59) smil_status_pane_g1

0x728b,	// (0x0008ba87) main_image2_pane_ParamLimits

0x728b,	// (0x0008ba87) main_image2_pane

0xeca0,	// (0x0009349c) main_camera2_pane_g9_ParamLimits

0xeca0,	// (0x0009349c) main_camera2_pane_g9

0x75d5,	// (0x0008bdd1) main_camera2_pane_t5_ParamLimits

0x75d5,	// (0x0008bdd1) main_camera2_pane_t5

0x75e9,	// (0x0008bde5) main_camera2_pane_t6_ParamLimits

0x75e9,	// (0x0008bde5) main_camera2_pane_t6

0x7727,	// (0x0008bf23) main_image2_pane_g1_ParamLimits

0x7727,	// (0x0008bf23) main_image2_pane_g1

0x6e02,	// (0x0008b5fe) smil2_video_pane_ParamLimits

0x6e02,	// (0x0008b5fe) smil2_video_pane

0x45f0,	// (0x00088dec) aid_zoom_text_primary_cp

0x480c,	// (0x00089008) popup_preview_fixed_window

0xe6a9,	// (0x00092ea5) im_reading_pane_g1

0x75c7,	// (0x0008bdc3) cams2_bc_adjust_pane_cp_ParamLimits

0x75c7,	// (0x0008bdc3) cams2_bc_adjust_pane_cp

0x4857,	// (0x00089053) cams2_bc_adjust_pane_ParamLimits

0x4857,	// (0x00089053) cams2_bc_adjust_pane

0x31f2,	// (0x000879ee) cams2_bc_adjust_pane_g1

0x4871,	// (0x0008906d) cams2_slider_pane

0x31f2,	// (0x000879ee) cams2_slider_pane_g1

0x31f2,	// (0x000879ee) cams2_slider_pane_g2

0x0006,

0xf595,	// (0x00093d91) cams2_slider_pane_g

0x4949,	// (0x00089145) calc_display_pane_ParamLimits

0x4967,	// (0x00089163) calc_paper_pane_ParamLimits

0x4983,	// (0x0008917f) grid_calc_pane_ParamLimits

0x6556,	// (0x0008ad52) popup_clock_digital_window_t1_ParamLimits

0x1b34,	// (0x00086330) main_image_pane_t1

0x492f,	// (0x0008912b) aid_size_cell_calc_ParamLimits

0x492f,	// (0x0008912b) aid_size_cell_calc

0x72bc,	// (0x0008bab8) popup_blid_sat_info2_window_ParamLimits

0x72bc,	// (0x0008bab8) popup_blid_sat_info2_window

0x2e43,	// (0x0008763f) aid_size_cell_blid

0x2cfe,	// (0x000874fa) bg_popup_window_pane_cp07

0x2e60,	// (0x0008765c) grid_popup_blid_pane

0x2e6a,	// (0x00087666) heading_pane_cp05_ParamLimits

0x2e6a,	// (0x00087666) heading_pane_cp05

0x2f34,	// (0x00087730) cell_popup_blid_pane_ParamLimits

0x2f34,	// (0x00087730) cell_popup_blid_pane

0x2f58,	// (0x00087754) cell_popup_blid_pane_g1

0x2f60,	// (0x0008775c) cell_popup_blid_pane_t1

0x2cfe,	// (0x000874fa) mup2_indicator_pane_ParamLimits

0x2cfe,	// (0x000874fa) mup2_indicator_pane

0xdc3b,	// (0x00092437) mup2_visualizer_osc_pane

0x2d0c,	// (0x00087508) mup2_visualizer_spec_pane_ParamLimits

0x2d0c,	// (0x00087508) mup2_visualizer_spec_pane

0xdc3b,	// (0x00092437) mup2_spec_half_pane

0xdc3b,	// (0x00092437) mup2_spec_half_pane_cp

0x2f6e,	// (0x0008776a) mup2_spec_bar_pane_ParamLimits

0x2f6e,	// (0x0008776a) mup2_spec_bar_pane

0xe37a,	// (0x00092b76) mup2_spec_bar_pane_g1

0x2f8d,	// (0x00087789) mup2_spec_bar_pane_g2

0x0001,

0xf5bb,	// (0x00093db7) mup2_spec_bar_pane_g

0xdc3b,	// (0x00092437) mup2_osc_middle_pane

0xe37a,	// (0x00092b76) mup2_visualizer_osc_pane_g1

0xdc65,	// (0x00092461) popup_number_entry_window_t1_ParamLimits

0xdc78,	// (0x00092474) popup_number_entry_window_t2_ParamLimits

0xdc8a,	// (0x00092486) popup_number_entry_window_t3_ParamLimits

0x48d2,	// (0x000890ce) popup_number_entry_window_t5_ParamLimits

0x48d2,	// (0x000890ce) popup_number_entry_window_t5

0xf01d,	// (0x00093819) popup_number_entry_window_t_ParamLimits

0xdc9c,	// (0x00092498) text_title_cp2_ParamLimits

0x6b36,	// (0x0008b332) aid_hotspot_pointer_text2_pane

0x6bc4,	// (0x0008b3c0) main_viewer_pane_g9_ParamLimits

0x6bc4,	// (0x0008b3c0) main_viewer_pane_g9

0xe8eb,	// (0x000930e7) cale_month_pane_t1_ParamLimits

0xe928,	// (0x00093124) bg_cale_pane_ParamLimits

0xe940,	// (0x0009313c) list_cale_pane_ParamLimits

0xe951,	// (0x0009314d) listscroll_cale_day_pane_t1

0xe963,	// (0x0009315f) scroll_pane_cp09_ParamLimits

0x67d9,	// (0x0008afd5) main_mup_eq_pane_t1_ParamLimits

0x67d9,	// (0x0008afd5) main_mup_eq_pane_t1

0x67f3,	// (0x0008afef) main_mup_eq_pane_t2_ParamLimits

0x67f3,	// (0x0008afef) main_mup_eq_pane_t2

0x680d,	// (0x0008b009) main_mup_eq_pane_t3_ParamLimits

0x680d,	// (0x0008b009) main_mup_eq_pane_t3

0x6825,	// (0x0008b021) main_mup_eq_pane_t4_ParamLimits

0x6825,	// (0x0008b021) main_mup_eq_pane_t4

0x683d,	// (0x0008b039) main_mup_eq_pane_t5_ParamLimits

0x683d,	// (0x0008b039) main_mup_eq_pane_t5

0x6855,	// (0x0008b051) main_mup_eq_pane_t6_ParamLimits

0x6855,	// (0x0008b051) main_mup_eq_pane_t6

0x6869,	// (0x0008b065) main_mup_eq_pane_t7_ParamLimits

0x6869,	// (0x0008b065) main_mup_eq_pane_t7

0x687d,	// (0x0008b079) main_mup_eq_pane_t8_ParamLimits

0x687d,	// (0x0008b079) main_mup_eq_pane_t8

0x6893,	// (0x0008b08f) main_mup_eq_pane_t9_ParamLimits

0x6893,	// (0x0008b08f) main_mup_eq_pane_t9

0x68ab,	// (0x0008b0a7) main_mup_eq_pane_t10_ParamLimits

0x68ab,	// (0x0008b0a7) main_mup_eq_pane_t10

0x0009,

0xf37c,	// (0x00093b78) main_mup_eq_pane_t_ParamLimits

0xf37c,	// (0x00093b78) main_mup_eq_pane_t

0x6968,	// (0x0008b164) mup_equalizer_pane_cp5_ParamLimits

0x697e,	// (0x0008b17a) mup_equalizer_pane_cp6_ParamLimits

0x6996,	// (0x0008b192) mup_equalizer_pane_cp7_ParamLimits

0x4871,	// (0x0008906d) main_gallery_pane

0x2c9c,	// (0x00087498) smil2_volume_pane

0x2cb7,	// (0x000874b3) smil_status_volume_pane_g1_ParamLimits

0x2ca4,	// (0x000874a0) smil_status_volume_pane_g2_ParamLimits

0x747a,	// (0x0008bc76) smil_status_volume_pane_g3_ParamLimits

0xf514,	// (0x00093d10) smil_status_volume_pane_g_ParamLimits

0x2cfe,	// (0x000874fa) bg_popup_window_pane_cp07_ParamLimits

0x2e4b,	// (0x00087647) blid_firmament_pane

0xe32e,	// (0x00092b2a) aid_size_cell_gallery_ParamLimits

0xe32e,	// (0x00092b2a) aid_size_cell_gallery

0xe32e,	// (0x00092b2a) grid_gallery_pane_ParamLimits

0xe32e,	// (0x00092b2a) grid_gallery_pane

0x1993,	// (0x0008618f) cell_gallery_pane_ParamLimits

0x1993,	// (0x0008618f) cell_gallery_pane

0xde1d,	// (0x00092619) bg_cell_gallery_focus_pane_ParamLimits

0xde1d,	// (0x00092619) bg_cell_gallery_focus_pane

0xe33c,	// (0x00092b38) cell_gallery_pane_g1_ParamLimits

0xe33c,	// (0x00092b38) cell_gallery_pane_g1

0xe33c,	// (0x00092b38) cell_gallery_pane_g2_ParamLimits

0xe33c,	// (0x00092b38) cell_gallery_pane_g2

0xe33c,	// (0x00092b38) cell_gallery_pane_g3_ParamLimits

0xe33c,	// (0x00092b38) cell_gallery_pane_g3

0xe34a,	// (0x00092b46) cell_gallery_pane_g4_ParamLimits

0xe34a,	// (0x00092b46) cell_gallery_pane_g4

0x0003,

0xf5c0,	// (0x00093dbc) cell_gallery_pane_g_ParamLimits

0xf5c0,	// (0x00093dbc) cell_gallery_pane_g

0x2f97,	// (0x00087793) bg_cell_gallery_focus_pane_g1

0x2f9f,	// (0x0008779b) bg_cell_gallery_focus_pane_g2

0x2fa7,	// (0x000877a3) bg_cell_gallery_focus_pane_g3

0x2faf,	// (0x000877ab) bg_cell_gallery_focus_pane_g4

0x2fb7,	// (0x000877b3) bg_cell_gallery_focus_pane_g5

0x2fbf,	// (0x000877bb) bg_cell_gallery_focus_pane_g6

0x2fc7,	// (0x000877c3) bg_cell_gallery_focus_pane_g7

0x2fcf,	// (0x000877cb) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5c9,	// (0x00093dc5) bg_cell_gallery_focus_pane_g

0x2fd7,	// (0x000877d3) aid_firma_cardinal

0x2feb,	// (0x000877e7) blid_firmament_pane_t1

0x3002,	// (0x000877fe) blid_firmament_pane_t2

0x3019,	// (0x00087815) blid_firmament_pane_t3

0x3030,	// (0x0008782c) blid_firmament_pane_t4

0x0003,

0xf5da,	// (0x00093dd6) blid_firmament_pane_t

0x3047,	// (0x00087843) blid_sat_info_pane

0xe37a,	// (0x00092b76) blid_sat_info_pane_g1

0xe37a,	// (0x00092b76) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x00093888) blid_sat_info_pane_g

0x3057,	// (0x00087853) blid_sat_info_pane_t1

0x3065,	// (0x00087861) smil2_volume_content_pane

0x306e,	// (0x0008786a) smil2_volume_pane_g1

0xe52b,	// (0x00092d27) smil2_volume_content_pane_g1

0x3076,	// (0x00087872) smil2_volume_content_pane_g2

0x307f,	// (0x0008787b) smil2_volume_content_pane_g3

0x3088,	// (0x00087884) smil2_volume_content_pane_g4

0x3091,	// (0x0008788d) smil2_volume_content_pane_g5

0x309a,	// (0x00087896) smil2_volume_content_pane_g6

0x30a3,	// (0x0008789f) smil2_volume_content_pane_g7

0x30ac,	// (0x000878a8) smil2_volume_content_pane_g8

0x30b5,	// (0x000878b1) smil2_volume_content_pane_g9

0x30be,	// (0x000878ba) smil2_volume_content_pane_g10

0x0009,

0xf5e3,	// (0x00093ddf) smil2_volume_content_pane_g

0x4e73,	// (0x0008966f) cale_week_day_heading_pane_t1_ParamLimits

0x4e8e,	// (0x0008968a) cale_week_day_heading_pane_t2_ParamLimits

0x4ea9,	// (0x000896a5) cale_week_day_heading_pane_t3_ParamLimits

0x4ec4,	// (0x000896c0) cale_week_day_heading_pane_t4_ParamLimits

0x4edf,	// (0x000896db) cale_week_day_heading_pane_t5_ParamLimits

0x4efa,	// (0x000896f6) cale_week_day_heading_pane_t6_ParamLimits

0x4f15,	// (0x00089711) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x00093920) cale_week_day_heading_pane_t_ParamLimits

0xe59e,	// (0x00092d9a) bg_cale_side_pane_ParamLimits

0x4f30,	// (0x0008972c) cale_week_time_pane_t1_ParamLimits

0x4f4a,	// (0x00089746) cale_week_time_pane_t2_ParamLimits

0x4f64,	// (0x00089760) cale_week_time_pane_t3_ParamLimits

0x4f7e,	// (0x0008977a) cale_week_time_pane_t4_ParamLimits

0x4f98,	// (0x00089794) cale_week_time_pane_t5_ParamLimits

0x4fb2,	// (0x000897ae) cale_week_time_pane_t6_ParamLimits

0x4fd0,	// (0x000897cc) cale_week_time_pane_t7_ParamLimits

0x4ff2,	// (0x000897ee) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x0009392f) cale_week_time_pane_t_ParamLimits

0x5016,	// (0x00089812) cell_cale_week_pane_g2_ParamLimits

0xe59e,	// (0x00092d9a) bg_cale_side_pane_cp01_ParamLimits

0x6152,	// (0x0008a94e) cale_month_week_pane_t1_ParamLimits

0x616b,	// (0x0008a967) cale_month_week_pane_t2_ParamLimits

0x6184,	// (0x0008a980) cale_month_week_pane_t3_ParamLimits

0x619d,	// (0x0008a999) cale_month_week_pane_t4_ParamLimits

0x61b6,	// (0x0008a9b2) cale_month_week_pane_t5_ParamLimits

0x61d7,	// (0x0008a9d3) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x000939fd) cale_month_week_pane_t_ParamLimits

0x631a,	// (0x0008ab16) cell_cale_month_pane_g1_ParamLimits

0x4871,	// (0x0008906d) main_cale_event_viewer_pane

0xdc3b,	// (0x00092437) listscroll_cale_event_viewer_pane

0x30c7,	// (0x000878c3) list_cale_ev_pane

0x30cf,	// (0x000878cb) scroll_pane_cp023

0x30db,	// (0x000878d7) field_cale_ev_pane_ParamLimits

0x30db,	// (0x000878d7) field_cale_ev_pane

0x30f9,	// (0x000878f5) field_cale_ev_content_pane_ParamLimits

0x30f9,	// (0x000878f5) field_cale_ev_content_pane

0x3105,	// (0x00087901) field_cale_ev_pane_g1_ParamLimits

0x3105,	// (0x00087901) field_cale_ev_pane_g1

0x3111,	// (0x0008790d) field_cale_ev_pane_g2_ParamLimits

0x3111,	// (0x0008790d) field_cale_ev_pane_g2

0x3129,	// (0x00087925) field_cale_ev_pane_g3_ParamLimits

0x3129,	// (0x00087925) field_cale_ev_pane_g3

0x0002,

0xf5f8,	// (0x00093df4) field_cale_ev_pane_g_ParamLimits

0xf5f8,	// (0x00093df4) field_cale_ev_pane_g

0x3141,	// (0x0008793d) field_cale_ev_pane_t1_ParamLimits

0x3141,	// (0x0008793d) field_cale_ev_pane_t1

0xe534,	// (0x00092d30) field_cale_ev_content_pane_t1_ParamLimits

0xe534,	// (0x00092d30) field_cale_ev_content_pane_t1

0x1a36,	// (0x00086232) bg_button_pane_cp01

0x4bfb,	// (0x000893f7) listscroll_cale_week_pane_ParamLimits

0x4c0b,	// (0x00089407) popup_toolbar_window_cp01

0xe56f,	// (0x00092d6b) listscroll_cale_week_pane_t1_ParamLimits

0x4bfb,	// (0x000893f7) listscroll_cale_day_pane_ParamLimits

0xe6b1,	// (0x00092ead) popup_toolbar_window_cp02

0xe951,	// (0x0009314d) listscroll_cale_day_pane_t1_ParamLimits

0x4bfb,	// (0x000893f7) main_cale_month_pane_ParamLimits

0x73c3,	// (0x0008bbbf) popup_toolbar_window_cp03_ParamLimits

0x73c3,	// (0x0008bbbf) popup_toolbar_window_cp03

0x6d18,	// (0x0008b514) main_image_pane_g2_ParamLimits

0x6d18,	// (0x0008b514) main_image_pane_g2

0x6d24,	// (0x0008b520) main_image_pane_g3_ParamLimits

0x6d24,	// (0x0008b520) main_image_pane_g3

0x0002,

0xf40e,	// (0x00093c0a) main_image_pane_g_ParamLimits

0xf40e,	// (0x00093c0a) main_image_pane_g

0x1b34,	// (0x00086330) main_image_pane_t1_ParamLimits

0x6d30,	// (0x0008b52c) main_image_pane_t2_ParamLimits

0x6d30,	// (0x0008b52c) main_image_pane_t2

0x6d42,	// (0x0008b53e) main_image_pane_t3_ParamLimits

0x6d42,	// (0x0008b53e) main_image_pane_t3

0x6d54,	// (0x0008b550) main_image_pane_t4_ParamLimits

0x6d54,	// (0x0008b550) main_image_pane_t4

0x0003,

0xf415,	// (0x00093c11) main_image_pane_t_ParamLimits

0xf415,	// (0x00093c11) main_image_pane_t

0x6d66,	// (0x0008b562) popup_image_details_window_cp01

0x6d70,	// (0x0008b56c) popup_toobar_trans_pane_cp01_ParamLimits

0x6d70,	// (0x0008b56c) popup_toobar_trans_pane_cp01

0x7313,	// (0x0008bb0f) popup_image_details_window_ParamLimits

0x7313,	// (0x0008bb0f) popup_image_details_window

0x7321,	// (0x0008bb1d) popup_image_focus_window

0x4857,	// (0x00089053) camera2_autofocus_pane_ParamLimits

0x4857,	// (0x00089053) camera2_autofocus_pane

0xdc3b,	// (0x00092437) bg_popup_sub_pane_cp06

0x3158,	// (0x00087954) popup_image_focus_window_g1

0x3160,	// (0x0008795c) popup_image_focus_window_g2

0x3168,	// (0x00087964) popup_image_focus_window_g3

0x3170,	// (0x0008796c) popup_image_focus_window_g4

0x0003,

0xf5ff,	// (0x00093dfb) popup_image_focus_window_g

0x3178,	// (0x00087974) popup_image_focus_window_t1

0x3186,	// (0x00087982) popup_image_focus_window_t2

0x3196,	// (0x00087992) popup_image_focus_window_t3

0x0002,

0xf608,	// (0x00093e04) popup_image_focus_window_t

0xe33c,	// (0x00092b38) camera2_autofocus_pane_g1

0xde1d,	// (0x00092619) bg_tb_trans_pane_cp01

0x31a4,	// (0x000879a0) popup_image_details_window_g1

0x31b7,	// (0x000879b3) popup_image_details_window_g2

0x0002,

0xf61a,	// (0x00093e16) popup_image_details_window_g

0x31e0,	// (0x000879dc) popup_image_details_window_t1

0x31fc,	// (0x000879f8) popup_image_details_window_t2

0x3215,	// (0x00087a11) popup_image_details_window_t3

0x3229,	// (0x00087a25) popup_image_details_window_t4

0x3244,	// (0x00087a40) popup_image_details_window_t5

0x0004,

0xf621,	// (0x00093e1d) popup_image_details_window_t

0xe3c4,	// (0x00092bc0) bg_calc_paper_pane_ParamLimits

0x4871,	// (0x0008906d) grid_highlight_pane_cp013

0x49be,	// (0x000891ba) list_calc_pane_ParamLimits

0x49d0,	// (0x000891cc) scroll_pane_cp024

0xe3d8,	// (0x00092bd4) bg_calc_display_pane_ParamLimits

0x49d8,	// (0x000891d4) calc_display_pane_t1_ParamLimits

0x49ed,	// (0x000891e9) calc_display_pane_t2_ParamLimits

0x4a02,	// (0x000891fe) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x000938a0) calc_display_pane_t_ParamLimits

0x4adb,	// (0x000892d7) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x000938bd) cell_calc_pane_g

0x4ae4,	// (0x000892e0) cell_calc_pane_t1

0xe42d,	// (0x00092c29) grid_highlight_pane_cp02_ParamLimits

0xe443,	// (0x00092c3f) toolbar_button_pane_cp01_ParamLimits

0xe443,	// (0x00092c3f) toolbar_button_pane_cp01

0x1b79,	// (0x00086375) temp_image_control_pane_ParamLimits

0x1b79,	// (0x00086375) temp_image_control_pane

0x728b,	// (0x0008ba87) main_mp3_pane

0x325e,	// (0x00087a5a) temp_image_control_pane_g1_ParamLimits

0x325e,	// (0x00087a5a) temp_image_control_pane_g1

0x326c,	// (0x00087a68) temp_image_control_pane_g2_ParamLimits

0x326c,	// (0x00087a68) temp_image_control_pane_g2

0x327e,	// (0x00087a7a) temp_image_control_pane_g3_ParamLimits

0x327e,	// (0x00087a7a) temp_image_control_pane_g3

0x7733,	// (0x0008bf2f) temp_image_control_pane_g4_ParamLimits

0x7733,	// (0x0008bf2f) temp_image_control_pane_g4

0x0003,

0xf62c,	// (0x00093e28) temp_image_control_pane_g_ParamLimits

0xf62c,	// (0x00093e28) temp_image_control_pane_g

0x325e,	// (0x00087a5a) main_mp3_pane_g1

0x7744,	// (0x0008bf40) main_mp3_pane_g2

0x0007,

0xf635,	// (0x00093e31) main_mp3_pane_g

0x32b3,	// (0x00087aaf) main_mp3_pane_t1

0xe34a,	// (0x00092b46) main_camera_pane_g8_ParamLimits

0xe34a,	// (0x00092b46) main_camera_pane_g8

0x51c0,	// (0x000899bc) main_video_pane_g7_ParamLimits

0x51c0,	// (0x000899bc) main_video_pane_g7

0x75d5,	// (0x0008bdd1) main_camera2_pane_t7_ParamLimits

0x75d5,	// (0x0008bdd1) main_camera2_pane_t7

0xe709,	// (0x00092f05) scroll_pane_cp025_ParamLimits

0xe709,	// (0x00092f05) scroll_pane_cp025

0xe71d,	// (0x00092f19) scroll_pane_cp026_ParamLimits

0xe71d,	// (0x00092f19) scroll_pane_cp026

0xe72c,	// (0x00092f28) wml_content_pane_ParamLimits

0x4871,	// (0x0008906d) main_touch_calib_pane

0x77e8,	// (0x0008bfe4) main_touch_calib_pane_g1

0x77f4,	// (0x0008bff0) main_touch_calib_pane_g2

0x7800,	// (0x0008bffc) main_touch_calib_pane_g3

0x780c,	// (0x0008c008) main_touch_calib_pane_g4

0x0003,

0xf653,	// (0x00093e4f) main_touch_calib_pane_g

0x7818,	// (0x0008c014) main_touch_calib_pane_t1

0x7831,	// (0x0008c02d) main_touch_calib_pane_t2

0x0004,

0xf65c,	// (0x00093e58) main_touch_calib_pane_t

0xee7f,	// (0x0009367b) mup_progress_pane_cp02

0xeeb4,	// (0x000936b0) navi_pane_g1

0xef6f,	// (0x0009376b) navi_pane_mp_t3

0x728b,	// (0x0008ba87) main_mp3_pane_ParamLimits

0x7400,	// (0x0008bbfc) navi_pane_ParamLimits

0x325e,	// (0x00087a5a) main_mp3_pane_g1_ParamLimits

0x7744,	// (0x0008bf40) main_mp3_pane_g2_ParamLimits

0x7750,	// (0x0008bf4c) main_mp3_pane_g3_ParamLimits

0x7750,	// (0x0008bf4c) main_mp3_pane_g3

0x775c,	// (0x0008bf58) main_mp3_pane_g4_ParamLimits

0x775c,	// (0x0008bf58) main_mp3_pane_g4

0xe33c,	// (0x00092b38) main_mp3_pane_g5_ParamLimits

0xe33c,	// (0x00092b38) main_mp3_pane_g5

0x328e,	// (0x00087a8a) main_mp3_pane_g6_ParamLimits

0x328e,	// (0x00087a8a) main_mp3_pane_g6

0x329b,	// (0x00087a97) main_mp3_pane_g7_ParamLimits

0x329b,	// (0x00087a97) main_mp3_pane_g7

0x32a7,	// (0x00087aa3) main_mp3_pane_g8_ParamLimits

0x32a7,	// (0x00087aa3) main_mp3_pane_g8

0xf635,	// (0x00093e31) main_mp3_pane_g_ParamLimits

0x7768,	// (0x0008bf64) main_mp3_pane_t2

0x7778,	// (0x0008bf74) main_mp3_pane_t3

0x32c1,	// (0x00087abd) main_mp3_pane_t4

0x32cf,	// (0x00087acb) main_mp3_pane_t5

0x0005,

0xf646,	// (0x00093e42) main_mp3_pane_t

0x32dd,	// (0x00087ad9) mup_progress_pane_cp01

0x7276,	// (0x0008ba72) aid_zoom_text_secondary2

0x30c7,	// (0x000878c3) list_cale_ev2_pane

0x30cf,	// (0x000878cb) scroll_pane_cp023_ParamLimits

0x788c,	// (0x0008c088) field_cale_ev2_pane_ParamLimits

0x788c,	// (0x0008c088) field_cale_ev2_pane

0x78b5,	// (0x0008c0b1) field_cale_ev2_pane_g1_ParamLimits

0x78b5,	// (0x0008c0b1) field_cale_ev2_pane_g1

0x78c1,	// (0x0008c0bd) field_cale_ev2_pane_g2_ParamLimits

0x78c1,	// (0x0008c0bd) field_cale_ev2_pane_g2

0x78d9,	// (0x0008c0d5) field_cale_ev2_pane_g3_ParamLimits

0x78d9,	// (0x0008c0d5) field_cale_ev2_pane_g3

0x0003,

0xf667,	// (0x00093e63) field_cale_ev2_pane_g_ParamLimits

0xf667,	// (0x00093e63) field_cale_ev2_pane_g

0x004e,	// (0x0008484a) field_cale_ev2_pane_t1_ParamLimits

0x004e,	// (0x0008484a) field_cale_ev2_pane_t1

0x0065,	// (0x00084861) field_cale_ev2_pane_t2_ParamLimits

0x0065,	// (0x00084861) field_cale_ev2_pane_t2

0x0001,

0xf670,	// (0x00093e6c) field_cale_ev2_pane_t_ParamLimits

0xf670,	// (0x00093e6c) field_cale_ev2_pane_t

0x6c2c,	// (0x0008b428) main_postcard_pane_g5_ParamLimits

0x6c2c,	// (0x0008b428) main_postcard_pane_g5

0x6c3a,	// (0x0008b436) main_postcard_pane_g6_ParamLimits

0x6c3a,	// (0x0008b436) main_postcard_pane_g6

0xe32e,	// (0x00092b2a) camera2_autofocus_pane_cp_ParamLimits

0xe32e,	// (0x00092b2a) camera2_autofocus_pane_cp

0x728b,	// (0x0008ba87) main_mup3_pane

0x7930,	// (0x0008c12c) main_mup3_pane_g1_ParamLimits

0x7930,	// (0x0008c12c) main_mup3_pane_g1

0x797f,	// (0x0008c17b) main_mup3_pane_g2_ParamLimits

0x797f,	// (0x0008c17b) main_mup3_pane_g2

0x79e2,	// (0x0008c1de) main_mup3_pane_g3_ParamLimits

0x79e2,	// (0x0008c1de) main_mup3_pane_g3

0x7a41,	// (0x0008c23d) main_mup3_pane_g4_ParamLimits

0x7a41,	// (0x0008c23d) main_mup3_pane_g4

0x7aa0,	// (0x0008c29c) main_mup3_pane_g5_ParamLimits

0x7aa0,	// (0x0008c29c) main_mup3_pane_g5

0x7aff,	// (0x0008c2fb) main_mup3_pane_g6_ParamLimits

0x7aff,	// (0x0008c2fb) main_mup3_pane_g6

0xe34a,	// (0x00092b46) main_mup3_pane_g7_ParamLimits

0xe34a,	// (0x00092b46) main_mup3_pane_g7

0x0007,

0xf680,	// (0x00093e7c) main_mup3_pane_g_ParamLimits

0xf680,	// (0x00093e7c) main_mup3_pane_g

0x7b6f,	// (0x0008c36b) main_mup3_pane_t1_ParamLimits

0x7b6f,	// (0x0008c36b) main_mup3_pane_t1

0x7c50,	// (0x0008c44c) main_mup3_pane_t2_ParamLimits

0x7c50,	// (0x0008c44c) main_mup3_pane_t2

0x7d31,	// (0x0008c52d) main_mup3_pane_t4_ParamLimits

0x7d31,	// (0x0008c52d) main_mup3_pane_t4

0x7d43,	// (0x0008c53f) main_mup3_pane_t5_ParamLimits

0x7d43,	// (0x0008c53f) main_mup3_pane_t5

0x7e09,	// (0x0008c605) main_mup3_pane_t6_ParamLimits

0x7e09,	// (0x0008c605) main_mup3_pane_t6

0x0005,

0xf691,	// (0x00093e8d) main_mup3_pane_t_ParamLimits

0xf691,	// (0x00093e8d) main_mup3_pane_t

0x7ea6,	// (0x0008c6a2) mup3_progress_pane_ParamLimits

0x7ea6,	// (0x0008c6a2) mup3_progress_pane

0x0a78,	// (0x00085274) popup_mup3_control_window_ParamLimits

0x0a78,	// (0x00085274) popup_mup3_control_window

0x32fd,	// (0x00087af9) popup_mup3_text_window

0x7f09,	// (0x0008c705) mup3_progress_pane_t1

0x7f28,	// (0x0008c724) mup3_progress_pane_t2

0x3305,	// (0x00087b01) mup3_progress_pane_t3

0x0002,

0xf69e,	// (0x00093e9a) mup3_progress_pane_t

0x3322,	// (0x00087b1e) mup_progress_pane_cp03

0x3332,	// (0x00087b2e) bg_tb_trans_pane_cp04

0x3332,	// (0x00087b2e) mup3_volume_pane

0x333a,	// (0x00087b36) popup_mup3_control_window_g1

0x333a,	// (0x00087b36) mup3_volume_pane_g1

0x333a,	// (0x00087b36) mup3_volume_pane_g2

0x333a,	// (0x00087b36) mup3_volume_pane_g3

0x0002,

0xf6a5,	// (0x00093ea1) mup3_volume_pane_g

0xdc3b,	// (0x00092437) bg_tb_trans_pane_cp03

0x3342,	// (0x00087b3e) popup_mup3_text_window_g1

0x334a,	// (0x00087b46) popup_mup3_text_window_t1

0xe420,	// (0x00092c1c) list_calc_item_pane_g1_ParamLimits

0x2dc1,	// (0x000875bd) mup_volume_pane_cp_g1

0x784a,	// (0x0008c046) main_touch_calib_pane_t3

0x7860,	// (0x0008c05c) main_touch_calib_pane_t4

0x7876,	// (0x0008c072) main_touch_calib_pane_t5

0x45a8,	// (0x00088da4) aid_cell_size_toolbar2

0x45b0,	// (0x00088dac) aid_popup3_width_pane

0x4580,	// (0x00088d7c) aid_zoom_text_msg_primary

0x50c2,	// (0x000898be) vorec_t7

0xe3e4,	// (0x00092be0) bg_calc_paper_pane_g1_ParamLimits

0xe3f0,	// (0x00092bec) bg_calc_paper_pane_g2_ParamLimits

0xe3fc,	// (0x00092bf8) bg_calc_paper_pane_g3_ParamLimits

0xe408,	// (0x00092c04) bg_calc_paper_pane_g4_ParamLimits

0xe414,	// (0x00092c10) bg_calc_paper_pane_g5_ParamLimits

0x4a41,	// (0x0008923d) bg_calc_paper_pane_g6_ParamLimits

0x4a52,	// (0x0008924e) bg_calc_paper_pane_g7_ParamLimits

0x4a63,	// (0x0008925f) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x000938a7) bg_calc_paper_pane_g_ParamLimits

0x4a74,	// (0x00089270) calc_bg_paper_pane_g9_ParamLimits

0xe32e,	// (0x00092b2a) image_qvga_pane_ParamLimits

0xe32e,	// (0x00092b2a) image_qvga_pane

0xe2c1,	// (0x00092abd) bg_popup_sub_pane_cp04_ParamLimits

0x1ab0,	// (0x000862ac) popup_mup_playback_window_g1_ParamLimits

0x1abc,	// (0x000862b8) popup_mup_playback_window_t1_ParamLimits

0x1ad1,	// (0x000862cd) popup_mup_playback_window_t2_ParamLimits

0xf409,	// (0x00093c05) popup_mup_playback_window_t_ParamLimits

0xe33c,	// (0x00092b38) main_mup2_pane_g3_ParamLimits

0xe33c,	// (0x00092b38) main_mup2_pane_g3

0x5381,	// (0x00089b7d) popup_toolbar_window_cp04

0x1f36,	// (0x00086732) popup_call2_audio_second_window_g3_ParamLimits

0x1f36,	// (0x00086732) popup_call2_audio_second_window_g3

0x234e,	// (0x00086b4a) popup_call2_audio_first_window_g4_ParamLimits

0x234e,	// (0x00086b4a) popup_call2_audio_first_window_g4

0x2995,	// (0x00087191) popup_call2_audio_in_window_g4_ParamLimits

0x2995,	// (0x00087191) popup_call2_audio_in_window_g4

0x6d0b,	// (0x0008b507) aid_area_sk_bg_cut_ParamLimits

0x6d0b,	// (0x0008b507) aid_area_sk_bg_cut

0x1ae6,	// (0x000862e2) aid_area_sk_bg_cut_2_ParamLimits

0x1ae6,	// (0x000862e2) aid_area_sk_bg_cut_2

0xdc3b,	// (0x00092437) aid_placing_details_win

0xdc3b,	// (0x00092437) aid_placing_details_win_2

0xe33c,	// (0x00092b38) camera2_autofocus_pane_g1_ParamLimits

0x47fd,	// (0x00088ff9) popup_fixed_preview_cale_window_ParamLimits

0x47fd,	// (0x00088ff9) popup_fixed_preview_cale_window

0xefed,	// (0x000937e9) navi_slider_pane_g3

0xeff6,	// (0x000937f2) navi_slider_pane_g4

0xefff,	// (0x000937fb) navi_slider_pane_g5

0xefed,	// (0x000937e9) navi_slider_pane_g6

0x67ad,	// (0x0008afa9) navi_slider_pane_g7

0x1a03,	// (0x000861ff) mup_scale_pane_g3

0x1a0c,	// (0x00086208) mup_scale_pane_g4

0x1a15,	// (0x00086211) mup_scale_pane_g5

0x69ae,	// (0x0008b1aa) mup_scale_pane_g6

0x69b7,	// (0x0008b1b3) mup_scale_pane_g7

0x31f2,	// (0x000879ee) cams2_slider_pane_g3

0x31f2,	// (0x000879ee) cams2_slider_pane_g4

0x31f2,	// (0x000879ee) cams2_slider_pane_g5

0x31f2,	// (0x000879ee) cams2_slider_pane_g6

0x31f2,	// (0x000879ee) cams2_slider_pane_g7

0xe37a,	// (0x00092b76) camera2_autofocus_pane_cp_g1

0x2c23,	// (0x0008741f) bg_popup_preview_window_pane_cp02_ParamLimits

0x2c23,	// (0x0008741f) bg_popup_preview_window_pane_cp02

0x3358,	// (0x00087b54) list_fp_cale_pane_ParamLimits

0x3358,	// (0x00087b54) list_fp_cale_pane

0x3364,	// (0x00087b60) popup_fixed_preview_cale_window_t1_ParamLimits

0x3364,	// (0x00087b60) popup_fixed_preview_cale_window_t1

0x7f47,	// (0x0008c743) popup_fixed_preview_cale_window_t2_ParamLimits

0x7f47,	// (0x0008c743) popup_fixed_preview_cale_window_t2

0x7f5c,	// (0x0008c758) popup_fixed_preview_cale_window_t3_ParamLimits

0x7f5c,	// (0x0008c758) popup_fixed_preview_cale_window_t3

0x0002,

0xf6ac,	// (0x00093ea8) popup_fixed_preview_cale_window_t_ParamLimits

0xf6ac,	// (0x00093ea8) popup_fixed_preview_cale_window_t

0x7f71,	// (0x0008c76d) list_single_fp_cale_pane_ParamLimits

0x7f71,	// (0x0008c76d) list_single_fp_cale_pane

0x3382,	// (0x00087b7e) list_single_fp_cale_pane_g1_ParamLimits

0x3382,	// (0x00087b7e) list_single_fp_cale_pane_g1

0x338e,	// (0x00087b8a) list_single_fp_cale_pane_g2_ParamLimits

0x338e,	// (0x00087b8a) list_single_fp_cale_pane_g2

0x0002,

0xf6b3,	// (0x00093eaf) list_single_fp_cale_pane_g_ParamLimits

0xf6b3,	// (0x00093eaf) list_single_fp_cale_pane_g

0x33a7,	// (0x00087ba3) list_single_fp_cale_pane_t1_ParamLimits

0x33a7,	// (0x00087ba3) list_single_fp_cale_pane_t1

0x33b9,	// (0x00087bb5) list_single_fp_cale_pane_t2_ParamLimits

0x33b9,	// (0x00087bb5) list_single_fp_cale_pane_t2

0x0001,

0xf6ba,	// (0x00093eb6) list_single_fp_cale_pane_t_ParamLimits

0xf6ba,	// (0x00093eb6) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4871,	// (0x0008906d) main_dialer_pane

0xdc3b,	// (0x00092437) aid_cell_size_keypad

0xdc3b,	// (0x00092437) dialer_ne_pane

0xdc3b,	// (0x00092437) grid_dialer_command_1_pane

0xdc3b,	// (0x00092437) grid_dialer_command_2_pane

0xdc3b,	// (0x00092437) grid_dialer_keypad_pane

0x2cfe,	// (0x000874fa) bg_popup_call_pane_cp06_ParamLimits

0x2cfe,	// (0x000874fa) bg_popup_call_pane_cp06

0x2cfe,	// (0x000874fa) dialer_ne_clear_pane_ParamLimits

0x2cfe,	// (0x000874fa) dialer_ne_clear_pane

0xe37a,	// (0x00092b76) dialer_ne_pane_g1

0xe398,	// (0x00092b94) dialer_ne_pane_t1_ParamLimits

0xe398,	// (0x00092b94) dialer_ne_pane_t1

0x360b,	// (0x00087e07) dialer_ne_pane_t2_ParamLimits

0x360b,	// (0x00087e07) dialer_ne_pane_t2

0x7f84,	// (0x0008c780) dialer_ne_pane_t3_ParamLimits

0x7f84,	// (0x0008c780) dialer_ne_pane_t3

0x0002,

0xf6bf,	// (0x00093ebb) dialer_ne_pane_t_ParamLimits

0xf6bf,	// (0x00093ebb) dialer_ne_pane_t

0x7f84,	// (0x0008c780) dialer_ne_pane_t3_copy1_ParamLimits

0x7f84,	// (0x0008c780) dialer_ne_pane_t3_copy1

0x33ec,	// (0x00087be8) cell_dialer_keypad_pane_ParamLimits

0x33ec,	// (0x00087be8) cell_dialer_keypad_pane

0xde1d,	// (0x00092619) cell_dialer_command_1_pane_ParamLimits

0xde1d,	// (0x00092619) cell_dialer_command_1_pane

0x3403,	// (0x00087bff) cell_dialer_command_2_pane_ParamLimits

0x3403,	// (0x00087bff) cell_dialer_command_2_pane

0xde1d,	// (0x00092619) bg_button_pane_cp02_ParamLimits

0xde1d,	// (0x00092619) bg_button_pane_cp02

0xe33c,	// (0x00092b38) cell_dialer_keypad_pane_g1_ParamLimits

0xe33c,	// (0x00092b38) cell_dialer_keypad_pane_g1

0xde1d,	// (0x00092619) bg_button_pane_cp03_ParamLimits

0xde1d,	// (0x00092619) bg_button_pane_cp03

0xe33c,	// (0x00092b38) cell_dialer_command_1_pane_g1_ParamLimits

0xe33c,	// (0x00092b38) cell_dialer_command_1_pane_g1

0xdc3b,	// (0x00092437) bg_button_pane_cp04

0xe37a,	// (0x00092b76) cell_dialer_command_2_pane_g1

0xdc3b,	// (0x00092437) bg_button_pane_cp06

0xe37a,	// (0x00092b76) dialer_ne_clear_pane_g1

0xeec0,	// (0x000936bc) navi_pane_g2

0xeeee,	// (0x000936ea) navi_pane_g3

0x0002,

0xf311,	// (0x00093b0d) navi_pane_g

0xef7d,	// (0x00093779) navi_pane_mv_g2

0xefa4,	// (0x000937a0) navi_pane_mv_g5

0x6778,	// (0x0008af74) navi_pane_mv_t1

0xe3d8,	// (0x00092bd4) main_clock2_pane

0xe32e,	// (0x00092b2a) main_clock2_list_pane_ParamLimits

0xe32e,	// (0x00092b2a) main_clock2_list_pane

0x7ffa,	// (0x0008c7f6) main_clock2_pane_t1_ParamLimits

0x7ffa,	// (0x0008c7f6) main_clock2_pane_t1

0x8028,	// (0x0008c824) main_clock2_pane_t2_ParamLimits

0x8028,	// (0x0008c824) main_clock2_pane_t2

0x0004,

0xf6cb,	// (0x00093ec7) main_clock2_pane_t_ParamLimits

0xf6cb,	// (0x00093ec7) main_clock2_pane_t

0x808d,	// (0x0008c889) popup_clock_analogue_window_cp03_ParamLimits

0x808d,	// (0x0008c889) popup_clock_analogue_window_cp03

0x80ab,	// (0x0008c8a7) popup_clock_digital_window_cp02_ParamLimits

0x80ab,	// (0x0008c8a7) popup_clock_digital_window_cp02

0x8120,	// (0x0008c91c) main_clock2_list_single_pane_ParamLimits

0x8120,	// (0x0008c91c) main_clock2_list_single_pane

0xe5f0,	// (0x00092dec) list_highlight_pane_cp05

0x3448,	// (0x00087c44) main_clock2_list_single_pane_t1

0x5381,	// (0x00089b7d) popup_toolbar_window_cp04_ParamLimits

0xe34a,	// (0x00092b46) camera2_autofocus_pane_g2_ParamLimits

0xe34a,	// (0x00092b46) camera2_autofocus_pane_g2

0xe34a,	// (0x00092b46) camera2_autofocus_pane_g3_ParamLimits

0xe34a,	// (0x00092b46) camera2_autofocus_pane_g3

0xe34a,	// (0x00092b46) camera2_autofocus_pane_g4_ParamLimits

0xe34a,	// (0x00092b46) camera2_autofocus_pane_g4

0xe34a,	// (0x00092b46) camera2_autofocus_pane_g5_ParamLimits

0xe34a,	// (0x00092b46) camera2_autofocus_pane_g5

0x0004,

0xf60f,	// (0x00093e0b) camera2_autofocus_pane_g_ParamLimits

0xf60f,	// (0x00093e0b) camera2_autofocus_pane_g

0x78f1,	// (0x0008c0ed) camera2_autofocus_pane_cp_g2

0x78f9,	// (0x0008c0f5) camera2_autofocus_pane_cp_g3

0x7901,	// (0x0008c0fd) camera2_autofocus_pane_cp_g4

0x7909,	// (0x0008c105) camera2_autofocus_pane_cp_g5

0x0004,

0xf675,	// (0x00093e71) camera2_autofocus_pane_cp_g

0xdc3b,	// (0x00092437) popup_dialer_spcha_window

0xdc3b,	// (0x00092437) bg_popup_sub_pane_cp07

0xdc3b,	// (0x00092437) list_spcha_pane

0x3456,	// (0x00087c52) list_single_spcha_pane_ParamLimits

0x3456,	// (0x00087c52) list_single_spcha_pane

0xdc3b,	// (0x00092437) list_highlight_pane_cp06

0xeaea,	// (0x000932e6) list_single_spcha_pane_t1

0x271f,	// (0x00086f1b) popup_call2_audio_out_window_g4_ParamLimits

0x271f,	// (0x00086f1b) popup_call2_audio_out_window_g4

0x4871,	// (0x0008906d) main_imed2_pane

0x7329,	// (0x0008bb25) popup_imed_adjust2_window

0x733c,	// (0x0008bb38) popup_imed_trans_window_ParamLimits

0x733c,	// (0x0008bb38) popup_imed_trans_window

0x2e96,	// (0x00087692) popup_blid_sat_info2_window_t1

0x2ea4,	// (0x000876a0) popup_blid_sat_info2_window_t2

0x000a,

0xf5a4,	// (0x00093da0) popup_blid_sat_info2_window_t

0x81d5,	// (0x0008c9d1) aid_size_cell_colour_35

0x81ef,	// (0x0008c9eb) aid_size_cell_colour_112

0x8206,	// (0x0008ca02) aid_size_cell_effect

0xde1d,	// (0x00092619) bg_tb_trans_pane_cp02

0xebd2,	// (0x000933ce) heading_imed_pane

0x8220,	// (0x0008ca1c) listscroll_imed_pane

0x3468,	// (0x00087c64) heading_imed_pane_g1

0x3470,	// (0x00087c6c) heading_imed_pane_t1

0x347e,	// (0x00087c7a) grid_imed_colour_35_pane_ParamLimits

0x347e,	// (0x00087c7a) grid_imed_colour_35_pane

0x822c,	// (0x0008ca28) grid_imed_effect_pane

0x3495,	// (0x00087c91) list_imed_aspect_pane

0x823c,	// (0x0008ca38) scroll_pane_cp027_ParamLimits

0x823c,	// (0x0008ca38) scroll_pane_cp027

0x8248,	// (0x0008ca44) cell_imed_effect_pane_ParamLimits

0x8248,	// (0x0008ca44) cell_imed_effect_pane

0x349d,	// (0x00087c99) cell_imed_colour_pane_ParamLimits

0x349d,	// (0x00087c99) cell_imed_colour_pane

0x34df,	// (0x00087cdb) cell_imed_colour_pane_g1_ParamLimits

0x34df,	// (0x00087cdb) cell_imed_colour_pane_g1

0x34f0,	// (0x00087cec) hgihlgiht_grid_pane_cp016_ParamLimits

0x34f0,	// (0x00087cec) hgihlgiht_grid_pane_cp016

0x8260,	// (0x0008ca5c) cell_imed_effect_pane_g1

0x8268,	// (0x0008ca64) grid_highlight_pane_cp017

0x3501,	// (0x00087cfd) list_imed_single_pane_ParamLimits

0x3501,	// (0x00087cfd) list_imed_single_pane

0xdc3b,	// (0x00092437) list_highlight_pane_cp07

0x3516,	// (0x00087d12) list_imed_aspect_pane_comp1_t1

0x1993,	// (0x0008618f) bg_tb_trans_pane_cp05

0x3538,	// (0x00087d34) popup_imed_adjust2_window_g1

0x355f,	// (0x00087d5b) popup_imed_adjust2_window_t1

0x3577,	// (0x00087d73) slider_imed_adjust_pane

0x358b,	// (0x00087d87) slider_imed_adjust_pane_g1

0x359b,	// (0x00087d97) slider_imed_adjust_pane_g2

0x35ab,	// (0x00087da7) slider_imed_adjust_pane_g3

0x35bc,	// (0x00087db8) slider_imed_adjust_pane_g4

0x0003,

0xf6e8,	// (0x00093ee4) slider_imed_adjust_pane_g

0x8271,	// (0x0008ca6d) aid_size_cell_clipart2

0x827d,	// (0x0008ca79) grid_imed_clipart_pane

0x1a26,	// (0x00086222) scroll_pane_cp031

0x8287,	// (0x0008ca83) cell_imed_clipart_pane_ParamLimits

0x8287,	// (0x0008ca83) cell_imed_clipart_pane

0x82a9,	// (0x0008caa5) cell_imed_clipart_pane_g1

0xdc3b,	// (0x00092437) grid_highlight_pane_cp014

0x7fdc,	// (0x0008c7d8) main_clock2_pane_g1_ParamLimits

0x7fdc,	// (0x0008c7d8) main_clock2_pane_g1

0x80c7,	// (0x0008c8c3) aid_call2_pane_cp10

0x80d9,	// (0x0008c8d5) aid_call_pane_cp10

0xee21,	// (0x0009361d) popup_clock_analogue_window_cp10_g1

0xee21,	// (0x0009361d) popup_clock_analogue_window_cp10_g2

0x80eb,	// (0x0008c8e7) popup_clock_analogue_window_cp10_g3

0x80eb,	// (0x0008c8e7) popup_clock_analogue_window_cp10_g4

0xee21,	// (0x0009361d) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6d6,	// (0x00093ed2) popup_clock_analogue_window_cp10_g

0x8101,	// (0x0008c8fd) popup_clock_analogue_window_cp10_t1

0x8132,	// (0x0008c92e) clock_digital_number_pane_cp10_ParamLimits

0x8132,	// (0x0008c92e) clock_digital_number_pane_cp10

0x814c,	// (0x0008c948) clock_digital_number_pane_cp11_ParamLimits

0x814c,	// (0x0008c948) clock_digital_number_pane_cp11

0x8166,	// (0x0008c962) clock_digital_number_pane_cp12_ParamLimits

0x8166,	// (0x0008c962) clock_digital_number_pane_cp12

0x8180,	// (0x0008c97c) clock_digital_number_pane_cp13_ParamLimits

0x8180,	// (0x0008c97c) clock_digital_number_pane_cp13

0x819a,	// (0x0008c996) clock_digital_separator_pane_cp10_ParamLimits

0x819a,	// (0x0008c996) clock_digital_separator_pane_cp10

0x81b4,	// (0x0008c9b0) popup_clock_digital_window_cp02_t1_ParamLimits

0x81b4,	// (0x0008c9b0) popup_clock_digital_window_cp02_t1

0xe2b9,	// (0x00092ab5) clock_digital_number_pane_cp10_g1

0xe2b9,	// (0x00092ab5) clock_digital_number_pane_cp10_g2

0x0001,

0xf6f1,	// (0x00093eed) clock_digital_number_pane_cp10_g

0xe2b9,	// (0x00092ab5) clock_digital_separator_pane_cp10_g1

0xe2b9,	// (0x00092ab5) clock_digital_separator_pane_g2_cp10

0xefac,	// (0x000937a8) navi_pane_vded_g4

0xefb5,	// (0x000937b1) navi_pane_vded_g5

0xefbe,	// (0x000937ba) navi_pane_vded_t1

0x4871,	// (0x0008906d) main_vded_pane

0x82b2,	// (0x0008caae) main_vded_pane_g1

0x82be,	// (0x0008caba) main_vded_pane_g2

0x82c8,	// (0x0008cac4) main_vded_pane_g3

0x0002,

0xf6f6,	// (0x00093ef2) main_vded_pane_g

0x82d2,	// (0x0008cace) main_vded_pane_t1

0x82e0,	// (0x0008cadc) main_vded_pane_t2

0x0001,

0xf6fd,	// (0x00093ef9) main_vded_pane_t

0x82ee,	// (0x0008caea) vded_slider_pane

0x82f8,	// (0x0008caf4) vded_video_pane

0x35cd,	// (0x00087dc9) vded_video_pane_g1

0x8302,	// (0x0008cafe) vded_video_pane_g2

0xe37a,	// (0x00092b76) vded_video_pane_g3

0x0002,

0xf702,	// (0x00093efe) vded_video_pane_g

0x35d7,	// (0x00087dd3) vded_slider_pane_g1

0x2dc1,	// (0x000875bd) vded_slider_pane_g2

0x35e0,	// (0x00087ddc) vded_slider_pane_g3

0x35e9,	// (0x00087de5) vded_slider_pane_g4

0x35f2,	// (0x00087dee) vded_slider_pane_g5

0x0004,

0xf709,	// (0x00093f05) vded_slider_pane_g

0x0a78,	// (0x00085274) mup3_rocker_pane_ParamLimits

0x0a78,	// (0x00085274) mup3_rocker_pane

0x333a,	// (0x00087b36) mup3_control_keys_pane_g1

0x35fb,	// (0x00087df7) mup3_control_keys_pane_g2

0x333a,	// (0x00087b36) mup3_control_keys_pane_g3

0x3603,	// (0x00087dff) mup3_control_keys_pane_g4

0x0003,

0xf714,	// (0x00093f10) mup3_control_keys_pane_g

0x4825,	// (0x00089021) popup_toolbar2_fixed_window_cp01_ParamLimits

0x4825,	// (0x00089021) popup_toolbar2_fixed_window_cp01

0x0a78,	// (0x00085274) popup_toolbar2_fixed_window_cp02_ParamLimits

0x0a78,	// (0x00085274) popup_toolbar2_fixed_window_cp02

0x20a8,	// (0x000868a4) popup_call2_audio_second_window_t4_ParamLimits

0x20a8,	// (0x000868a4) popup_call2_audio_second_window_t4

0x25e4,	// (0x00086de0) popup_call2_audio_first_window_t6_ParamLimits

0x25e4,	// (0x00086de0) popup_call2_audio_first_window_t6

0x2842,	// (0x0008703e) popup_call2_audio_out_window_t6_ParamLimits

0x2842,	// (0x0008703e) popup_call2_audio_out_window_t6

0x4871,	// (0x0008906d) main_vitu_pane

0xe32e,	// (0x00092b2a) aid_size_cell_itu_ParamLimits

0xe32e,	// (0x00092b2a) aid_size_cell_itu

0xe32e,	// (0x00092b2a) bg_popup_window_pane_cp08_ParamLimits

0xe32e,	// (0x00092b2a) bg_popup_window_pane_cp08

0xe32e,	// (0x00092b2a) field_vitu_entry_pane_ParamLimits

0xe32e,	// (0x00092b2a) field_vitu_entry_pane

0xe32e,	// (0x00092b2a) grid_vitu_function_pane_ParamLimits

0xe32e,	// (0x00092b2a) grid_vitu_function_pane

0xe32e,	// (0x00092b2a) grid_vitu_itu_pane_ParamLimits

0xe32e,	// (0x00092b2a) grid_vitu_itu_pane

0xe32e,	// (0x00092b2a) cell_vitu_itu_pane_ParamLimits

0xe32e,	// (0x00092b2a) cell_vitu_itu_pane

0xe32e,	// (0x00092b2a) cell_vitu_function_pane_ParamLimits

0xe32e,	// (0x00092b2a) cell_vitu_function_pane

0xde1d,	// (0x00092619) bg_popup_sub_pane_cp08_ParamLimits

0xde1d,	// (0x00092619) bg_popup_sub_pane_cp08

0xe384,	// (0x00092b80) field_vitu_entry_pane_t1_ParamLimits

0xe384,	// (0x00092b80) field_vitu_entry_pane_t1

0x360b,	// (0x00087e07) field_vitu_entry_pane_t2_ParamLimits

0x360b,	// (0x00087e07) field_vitu_entry_pane_t2

0x0001,

0xf71d,	// (0x00093f19) field_vitu_entry_pane_t_ParamLimits

0xf71d,	// (0x00093f19) field_vitu_entry_pane_t

0x2cfe,	// (0x000874fa) bg_button_pane_cp05_ParamLimits

0x2cfe,	// (0x000874fa) bg_button_pane_cp05

0x3628,	// (0x00087e24) cell_vitu_itu_pane_g1

0x282e,	// (0x0008702a) cell_vitu_itu_pane_t1_ParamLimits

0x282e,	// (0x0008702a) cell_vitu_itu_pane_t1

0x282e,	// (0x0008702a) cell_vitu_itu_pane_t2_ParamLimits

0x282e,	// (0x0008702a) cell_vitu_itu_pane_t2

0x0002,

0xf722,	// (0x00093f1e) cell_vitu_itu_pane_t_ParamLimits

0xf722,	// (0x00093f1e) cell_vitu_itu_pane_t

0xdc3b,	// (0x00092437) bg_button_pane_cp07

0xe37a,	// (0x00092b76) cell_vitu_function_pane_g1

0x49a7,	// (0x000891a3) main_calc_pane_g1

0x45e4,	// (0x00088de0) aid_visual_content_pane

0x4871,	// (0x0008906d) main_vradio_pane

0xe34a,	// (0x00092b46) main_vradio_pane_g1_ParamLimits

0xe34a,	// (0x00092b46) main_vradio_pane_g1

0xe34a,	// (0x00092b46) main_vradio_pane_g2_ParamLimits

0xe34a,	// (0x00092b46) main_vradio_pane_g2

0x0001,

0xf4b9,	// (0x00093cb5) main_vradio_pane_g_ParamLimits

0xf4b9,	// (0x00093cb5) main_vradio_pane_g

0xe398,	// (0x00092b94) main_vradio_pane_t1_ParamLimits

0xe398,	// (0x00092b94) main_vradio_pane_t1

0xe398,	// (0x00092b94) main_vradio_pane_t2_ParamLimits

0xe398,	// (0x00092b94) main_vradio_pane_t2

0xe398,	// (0x00092b94) main_vradio_pane_t3_ParamLimits

0xe398,	// (0x00092b94) main_vradio_pane_t3

0x0002,

0xf729,	// (0x00093f25) main_vradio_pane_t_ParamLimits

0xf729,	// (0x00093f25) main_vradio_pane_t

0xe32e,	// (0x00092b2a) vradio_rocker_control_pane_ParamLimits

0xe32e,	// (0x00092b2a) vradio_rocker_control_pane

0xe32e,	// (0x00092b2a) vradio_station_info_pane_ParamLimits

0xe32e,	// (0x00092b2a) vradio_station_info_pane

0xde1d,	// (0x00092619) vradio_frequency_info_pane_ParamLimits

0xde1d,	// (0x00092619) vradio_frequency_info_pane

0xe37a,	// (0x00092b76) vradio_station_info_pane_g1

0x282e,	// (0x0008702a) vradio_station_info_pane_t1_ParamLimits

0x282e,	// (0x0008702a) vradio_station_info_pane_t1

0xe398,	// (0x00092b94) vradio_station_info_pane_t2_ParamLimits

0xe398,	// (0x00092b94) vradio_station_info_pane_t2

0x0001,

0xf730,	// (0x00093f2c) vradio_station_info_pane_t_ParamLimits

0xf730,	// (0x00093f2c) vradio_station_info_pane_t

0xdc3b,	// (0x00092437) vradio_tuning_pane

0x830b,	// (0x0008cb07) vradio_rocker_control_pane_g1

0x3644,	// (0x00087e40) vradio_rocker_control_pane_g2

0x8313,	// (0x0008cb0f) vradio_rocker_control_pane_g3

0x831b,	// (0x0008cb17) vradio_rocker_control_pane_g4

0x8323,	// (0x0008cb1f) vradio_rocker_control_pane_g5

0x0004,

0xf735,	// (0x00093f31) vradio_rocker_control_pane_g

0xe37a,	// (0x00092b76) vradio_frequency_info_pane_g1

0xe384,	// (0x00092b80) vradio_frequency_info_pane_t1_ParamLimits

0xe384,	// (0x00092b80) vradio_frequency_info_pane_t1

0x832b,	// (0x0008cb27) vradio_tuning_pane_g1

0x8338,	// (0x0008cb34) vradio_tuning_pane_t1

0x462d,	// (0x00088e29) area_side_right_pane_ParamLimits

0x462d,	// (0x00088e29) area_side_right_pane

0x2bea,	// (0x000873e6) status_small_pane_g1

0x2bf2,	// (0x000873ee) status_small_pane_g2

0x2bfb,	// (0x000873f7) status_small_pane_g3

0x2c04,	// (0x00087400) status_small_pane_g4

0x0003,

0xf506,	// (0x00093d02) status_small_pane_g

0x2c0d,	// (0x00087409) status_small_pane_t1

0x4871,	// (0x0008906d) main_video3_pane

0xdc3b,	// (0x00092437) cams_zoom_vslider_pane

0x364c,	// (0x00087e48) image3_wide_pane_ParamLimits

0x364c,	// (0x00087e48) image3_wide_pane

0xdc3b,	// (0x00092437) image3_wide_small_pane

0x3666,	// (0x00087e62) main_video3_pane_g1_ParamLimits

0x3666,	// (0x00087e62) main_video3_pane_g1

0x3666,	// (0x00087e62) main_video3_pane_g2_ParamLimits

0x3666,	// (0x00087e62) main_video3_pane_g2

0x0001,

0xf740,	// (0x00093f3c) main_video3_pane_g_ParamLimits

0xf740,	// (0x00093f3c) main_video3_pane_g

0x3684,	// (0x00087e80) main_video3_pane_t1_ParamLimits

0x3684,	// (0x00087e80) main_video3_pane_t1

0x3684,	// (0x00087e80) main_video3_pane_t2_ParamLimits

0x3684,	// (0x00087e80) main_video3_pane_t2

0x3684,	// (0x00087e80) main_video3_pane_t3_ParamLimits

0x3684,	// (0x00087e80) main_video3_pane_t3

0x0002,

0xf745,	// (0x00093f41) main_video3_pane_t_ParamLimits

0xf745,	// (0x00093f41) main_video3_pane_t

0xe37a,	// (0x00092b76) cams_zoom_vslider_pane_g1

0xe37a,	// (0x00092b76) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x00093888) cams_zoom_vslider_pane_g

0xdc3b,	// (0x00092437) small_slider_vertical_pane

0xe37a,	// (0x00092b76) small_slider_vertical_pane_g1

0xe37a,	// (0x00092b76) small_slider_vertical_pane_g2

0x36ab,	// (0x00087ea7) small_slider_vertical_pane_g3

0x0002,

0xf74c,	// (0x00093f48) small_slider_vertical_pane_g

0x4871,	// (0x0008906d) main_hwr_training_pane

0x36b4,	// (0x00087eb0) hwr_training_instruct_pane_ParamLimits

0x36b4,	// (0x00087eb0) hwr_training_instruct_pane

0x8347,	// (0x0008cb43) hwr_training_navi_pane_ParamLimits

0x8347,	// (0x0008cb43) hwr_training_navi_pane

0x8361,	// (0x0008cb5d) hwr_training_write_pane_ParamLimits

0x8361,	// (0x0008cb5d) hwr_training_write_pane

0xdc3b,	// (0x00092437) bg_frame_shadow_pane

0x36eb,	// (0x00087ee7) hwr_training_write_pane_g1

0x36f3,	// (0x00087eef) hwr_training_write_pane_g2

0x36fb,	// (0x00087ef7) hwr_training_write_pane_g3

0x3703,	// (0x00087eff) hwr_training_write_pane_g4

0x370b,	// (0x00087f07) hwr_training_write_pane_g5

0x3713,	// (0x00087f0f) hwr_training_write_pane_g6

0x371b,	// (0x00087f17) hwr_training_write_pane_g7

0x0006,

0xf753,	// (0x00093f4f) hwr_training_write_pane_g

0x8399,	// (0x0008cb95) hwr_training_navi_pane_g1_ParamLimits

0x8399,	// (0x0008cb95) hwr_training_navi_pane_g1

0x83ab,	// (0x0008cba7) hwr_training_navi_pane_g2_ParamLimits

0x83ab,	// (0x0008cba7) hwr_training_navi_pane_g2

0x83bd,	// (0x0008cbb9) hwr_training_navi_pane_g3_ParamLimits

0x83bd,	// (0x0008cbb9) hwr_training_navi_pane_g3

0x83cd,	// (0x0008cbc9) hwr_training_navi_pane_g4_ParamLimits

0x83cd,	// (0x0008cbc9) hwr_training_navi_pane_g4

0x0004,

0xf762,	// (0x00093f5e) hwr_training_navi_pane_g_ParamLimits

0xf762,	// (0x00093f5e) hwr_training_navi_pane_g

0x83e7,	// (0x0008cbe3) hwr_training_navi_pane_t1

0x83f5,	// (0x0008cbf1) list_single_hwr_training_instruct_pane_ParamLimits

0x83f5,	// (0x0008cbf1) list_single_hwr_training_instruct_pane

0x3723,	// (0x00087f1f) list_single_hwr_training_instruct_pane_t1

0x2f97,	// (0x00087793) bg_frame_shadow_pane_g1

0x3732,	// (0x00087f2e) bg_frame_shadow_pane_g2

0x373a,	// (0x00087f36) bg_frame_shadow_pane_g3

0x3742,	// (0x00087f3e) bg_frame_shadow_pane_g4

0x374a,	// (0x00087f46) bg_frame_shadow_pane_g5

0x3752,	// (0x00087f4e) bg_frame_shadow_pane_g6

0x375a,	// (0x00087f56) bg_frame_shadow_pane_g7

0xe487,	// (0x00092c83) bg_frame_shadow_pane_g8

0x0007,

0xf76d,	// (0x00093f69) bg_frame_shadow_pane_g

0x4871,	// (0x0008906d) main_video_tele_dialer_pane

0x841a,	// (0x0008cc16) aid_size_cell_video_keypad_ParamLimits

0x841a,	// (0x0008cc16) aid_size_cell_video_keypad

0x842a,	// (0x0008cc26) grid_video_dialer_keypad_pane_ParamLimits

0x842a,	// (0x0008cc26) grid_video_dialer_keypad_pane

0x845e,	// (0x0008cc5a) video_down_pane_cp_ParamLimits

0x845e,	// (0x0008cc5a) video_down_pane_cp

0x8488,	// (0x0008cc84) cell_video_dialer_keypad_pane_ParamLimits

0x8488,	// (0x0008cc84) cell_video_dialer_keypad_pane

0x3762,	// (0x00087f5e) bg_button_pane_cp08_ParamLimits

0x3762,	// (0x00087f5e) bg_button_pane_cp08

0x849d,	// (0x0008cc99) cell_video_dialer_keypad_pane_g1_ParamLimits

0x849d,	// (0x0008cc99) cell_video_dialer_keypad_pane_g1

0x0a78,	// (0x00085274) mup3_rocker2_pane_ParamLimits

0x0a78,	// (0x00085274) mup3_rocker2_pane

0xe37a,	// (0x00092b76) mup3_rocker2_pane_g1

0x7299,	// (0x0008ba95) main_dialer2_pane

0x4871,	// (0x0008906d) main_mp4_pane

0x84f2,	// (0x0008ccee) main_mp4_pane_g1_ParamLimits

0x84f2,	// (0x0008ccee) main_mp4_pane_g1

0x8514,	// (0x0008cd10) main_mp4_pane_g2_ParamLimits

0x8514,	// (0x0008cd10) main_mp4_pane_g2

0x8532,	// (0x0008cd2e) main_mp4_pane_g3_ParamLimits

0x8532,	// (0x0008cd2e) main_mp4_pane_g3

0x856b,	// (0x0008cd67) main_mp4_pane_g4_ParamLimits

0x856b,	// (0x0008cd67) main_mp4_pane_g4

0x8593,	// (0x0008cd8f) main_mp4_pane_g5_ParamLimits

0x8593,	// (0x0008cd8f) main_mp4_pane_g5

0x0007,

0xf78d,	// (0x00093f89) main_mp4_pane_g_ParamLimits

0xf78d,	// (0x00093f89) main_mp4_pane_g

0x85fb,	// (0x0008cdf7) main_mp4_pane_t1_ParamLimits

0x85fb,	// (0x0008cdf7) main_mp4_pane_t1

0x865d,	// (0x0008ce59) main_mp4_pane_t2_ParamLimits

0x865d,	// (0x0008ce59) main_mp4_pane_t2

0x86c1,	// (0x0008cebd) main_mp4_pane_t3_ParamLimits

0x86c1,	// (0x0008cebd) main_mp4_pane_t3

0x871f,	// (0x0008cf1b) main_mp4_pane_t4_ParamLimits

0x871f,	// (0x0008cf1b) main_mp4_pane_t4

0x0003,

0xf79e,	// (0x00093f9a) main_mp4_pane_t_ParamLimits

0xf79e,	// (0x00093f9a) main_mp4_pane_t

0x877d,	// (0x0008cf79) mp4_progress_pane_ParamLimits

0x877d,	// (0x0008cf79) mp4_progress_pane

0x87b1,	// (0x0008cfad) mp4_rocker_pane_ParamLimits

0x87b1,	// (0x0008cfad) mp4_rocker_pane

0xcb4b,	// (0x00091347) mp4_progress_pane_t1

0xcb6a,	// (0x00091366) mp4_progress_pane_t2

0x0001,

0xf7a7,	// (0x00093fa3) mp4_progress_pane_t

0xcb89,	// (0x00091385) mup_progress_pane_cp04

0x31f2,	// (0x000879ee) mp4_rocker_pane_g1

0x4857,	// (0x00089053) aid_cell_size_keypad2_ParamLimits

0x4857,	// (0x00089053) aid_cell_size_keypad2

0x4857,	// (0x00089053) dialer2_ne_pane_ParamLimits

0x4857,	// (0x00089053) dialer2_ne_pane

0x4857,	// (0x00089053) grid_dialer2_keypad_pane_ParamLimits

0x4857,	// (0x00089053) grid_dialer2_keypad_pane

0xcb9c,	// (0x00091398) bg_popup_call_pane_cp07_ParamLimits

0xcb9c,	// (0x00091398) bg_popup_call_pane_cp07

0x87c5,	// (0x0008cfc1) dialer2_ne_pane_t1_ParamLimits

0x87c5,	// (0x0008cfc1) dialer2_ne_pane_t1

0x87ec,	// (0x0008cfe8) cell_dialer2_keypad_pane_ParamLimits

0x87ec,	// (0x0008cfe8) cell_dialer2_keypad_pane

0x2cfe,	// (0x000874fa) bg_button_pane_pane_cp04_ParamLimits

0x2cfe,	// (0x000874fa) bg_button_pane_pane_cp04

0xe33c,	// (0x00092b38) cell_dialer2_keypad_pane_g1_ParamLimits

0xe33c,	// (0x00092b38) cell_dialer2_keypad_pane_g1

0x5243,	// (0x00089a3f) aid_placing_vt_set_content_ParamLimits

0x5243,	// (0x00089a3f) aid_placing_vt_set_content

0x526f,	// (0x00089a6b) aid_placing_vt_set_title_ParamLimits

0x526f,	// (0x00089a6b) aid_placing_vt_set_title

0x4871,	// (0x0008906d) main_image3_pane

0x8835,	// (0x0008d031) area_side_right_pane_cp01_ParamLimits

0x8835,	// (0x0008d031) area_side_right_pane_cp01

0x8862,	// (0x0008d05e) main_image3_pane_g1_ParamLimits

0x8862,	// (0x0008d05e) main_image3_pane_g1

0x8870,	// (0x0008d06c) main_image3_pane_g2_ParamLimits

0x8870,	// (0x0008d06c) main_image3_pane_g2

0x8889,	// (0x0008d085) main_image3_pane_g3_ParamLimits

0x8889,	// (0x0008d085) main_image3_pane_g3

0x88a2,	// (0x0008d09e) main_image3_pane_g4_ParamLimits

0x88a2,	// (0x0008d09e) main_image3_pane_g4

0x0003,

0xf7b6,	// (0x00093fb2) main_image3_pane_g_ParamLimits

0xf7b6,	// (0x00093fb2) main_image3_pane_g

0x88bb,	// (0x0008d0b7) main_image3_pane_t1_ParamLimits

0x88bb,	// (0x0008d0b7) main_image3_pane_t1

0x88e0,	// (0x0008d0dc) main_image3_pane_t2_ParamLimits

0x88e0,	// (0x0008d0dc) main_image3_pane_t2

0x88ff,	// (0x0008d0fb) main_image3_pane_t3_ParamLimits

0x88ff,	// (0x0008d0fb) main_image3_pane_t3

0x0003,

0xf7bf,	// (0x00093fbb) main_image3_pane_t_ParamLimits

0xf7bf,	// (0x00093fbb) main_image3_pane_t

0xe32e,	// (0x00092b2a) grid_sctrl_middle_pane_cp01_ParamLimits

0xe32e,	// (0x00092b2a) grid_sctrl_middle_pane_cp01

0x8960,	// (0x0008d15c) cell_sctrl_middle_pane_cp01_ParamLimits

0x8960,	// (0x0008d15c) cell_sctrl_middle_pane_cp01

0x8971,	// (0x0008d16d) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x8971,	// (0x0008d16d) cell_sctrl_middle_pane_cp01_g1

0x4871,	// (0x0008906d) main_call4_pane

0x897e,	// (0x0008d17a) aid_size_button_call4_ParamLimits

0x897e,	// (0x0008d17a) aid_size_button_call4

0x89b4,	// (0x0008d1b0) call4_windows_pane_ParamLimits

0x89b4,	// (0x0008d1b0) call4_windows_pane

0x89c9,	// (0x0008d1c5) grid_call4_button_pane_ParamLimits

0x89c9,	// (0x0008d1c5) grid_call4_button_pane

0x89f7,	// (0x0008d1f3) call4_windows_conf_pane

0x8a0e,	// (0x0008d20a) popup_call4_audio_first_window_ParamLimits

0x8a0e,	// (0x0008d20a) popup_call4_audio_first_window

0x8a5e,	// (0x0008d25a) popup_call4_audio_second_window_ParamLimits

0x8a5e,	// (0x0008d25a) popup_call4_audio_second_window

0x8a77,	// (0x0008d273) popup_call4_audio_wait_window_ParamLimits

0x8a77,	// (0x0008d273) popup_call4_audio_wait_window

0x8a85,	// (0x0008d281) cell_call4_button_pane_ParamLimits

0x8a85,	// (0x0008d281) cell_call4_button_pane

0x8aa8,	// (0x0008d2a4) bg_button_pane_cp09_ParamLimits

0x8aa8,	// (0x0008d2a4) bg_button_pane_cp09

0x8ab4,	// (0x0008d2b0) cell_call4_button_pane_g1_ParamLimits

0x8ab4,	// (0x0008d2b0) cell_call4_button_pane_g1

0x8ac1,	// (0x0008d2bd) cell_call4_button_pane_t1_ParamLimits

0x8ac1,	// (0x0008d2bd) cell_call4_button_pane_t1

0xcbe0,	// (0x000913dc) popup_call4_audio_conf_window_ParamLimits

0xcbe0,	// (0x000913dc) popup_call4_audio_conf_window

0x7f09,	// (0x0008c705) mup3_progress_pane_t1_ParamLimits

0x7f28,	// (0x0008c724) mup3_progress_pane_t2_ParamLimits

0x3305,	// (0x00087b01) mup3_progress_pane_t3_ParamLimits

0xf69e,	// (0x00093e9a) mup3_progress_pane_t_ParamLimits

0x3322,	// (0x00087b1e) mup_progress_pane_cp03_ParamLimits

0x333a,	// (0x00087b36) mup3_control_keys_pane_g4_copy1

0x87b1,	// (0x0008cfad) mp4_rocker2_pane_ParamLimits

0x87b1,	// (0x0008cfad) mp4_rocker2_pane

0x35fb,	// (0x00087df7) mp4_rocker2_pane_g1

0x35fb,	// (0x00087df7) mp4_rocker2_pane_g2

0x35fb,	// (0x00087df7) mp4_rocker2_pane_g3

0x35fb,	// (0x00087df7) mp4_rocker2_pane_g4

0x35fb,	// (0x00087df7) mp4_rocker2_pane_g5

0x0004,

0xf7c8,	// (0x00093fc4) mp4_rocker2_pane_g

0x4871,	// (0x0008906d) main_camera4_pane

0x4871,	// (0x0008906d) main_video4_pane

0x843a,	// (0x0008cc36) main_video_tele_dialer_pane_t1_ParamLimits

0x843a,	// (0x0008cc36) main_video_tele_dialer_pane_t1

0x844c,	// (0x0008cc48) main_video_tele_dialer_pane_t2_ParamLimits

0x844c,	// (0x0008cc48) main_video_tele_dialer_pane_t2

0x0001,

0xf77e,	// (0x00093f7a) main_video_tele_dialer_pane_t_ParamLimits

0xf77e,	// (0x00093f7a) main_video_tele_dialer_pane_t

0x8b1d,	// (0x0008d319) cam4_autofocus_pane_ParamLimits

0x8b1d,	// (0x0008d319) cam4_autofocus_pane

0x8b37,	// (0x0008d333) cam4_image_uncrop_pane_ParamLimits

0x8b37,	// (0x0008d333) cam4_image_uncrop_pane

0x8b4e,	// (0x0008d34a) cam4_indicators_pane_ParamLimits

0x8b4e,	// (0x0008d34a) cam4_indicators_pane

0x8b6a,	// (0x0008d366) main_camera4_pane_g1_ParamLimits

0x8b6a,	// (0x0008d366) main_camera4_pane_g1

0x8b76,	// (0x0008d372) main_camera4_pane_g2_ParamLimits

0x8b76,	// (0x0008d372) main_camera4_pane_g2

0x8b76,	// (0x0008d372) main_camera4_pane_g3_ParamLimits

0x8b76,	// (0x0008d372) main_camera4_pane_g3

0x8b82,	// (0x0008d37e) main_camera4_pane_g4_ParamLimits

0x8b82,	// (0x0008d37e) main_camera4_pane_g4

0x8b8e,	// (0x0008d38a) main_camera4_pane_g5_ParamLimits

0x8b8e,	// (0x0008d38a) main_camera4_pane_g5

0x0005,

0xf7d3,	// (0x00093fcf) main_camera4_pane_g_ParamLimits

0xf7d3,	// (0x00093fcf) main_camera4_pane_g

0x8ba8,	// (0x0008d3a4) main_camera4_pane_t1_ParamLimits

0x8ba8,	// (0x0008d3a4) main_camera4_pane_t1

0x0829,	// (0x00085025) bg_tb_trans_pane_cp06

0x8bf8,	// (0x0008d3f4) cam4_indicators_pane_g1

0x8c09,	// (0x0008d405) cam4_indicators_pane_g2

0x0002,

0xf7ee,	// (0x00093fea) cam4_indicators_pane_g

0x8c27,	// (0x0008d423) cam4_indicators_pane_t1

0x8c51,	// (0x0008d44d) main_video4_pane_g1_ParamLimits

0x8c51,	// (0x0008d44d) main_video4_pane_g1

0x8c5d,	// (0x0008d459) main_video4_pane_g2_ParamLimits

0x8c5d,	// (0x0008d459) main_video4_pane_g2

0x8c69,	// (0x0008d465) main_video4_pane_g3_ParamLimits

0x8c69,	// (0x0008d465) main_video4_pane_g3

0x8c75,	// (0x0008d471) main_video4_pane_g4_ParamLimits

0x8c75,	// (0x0008d471) main_video4_pane_g4

0x0004,

0xf7f5,	// (0x00093ff1) main_video4_pane_g_ParamLimits

0xf7f5,	// (0x00093ff1) main_video4_pane_g

0x8c95,	// (0x0008d491) vid4_indicators_pane_ParamLimits

0x8c95,	// (0x0008d491) vid4_indicators_pane

0x8cb4,	// (0x0008d4b0) video4_image_uncrop_cif_pane_ParamLimits

0x8cb4,	// (0x0008d4b0) video4_image_uncrop_cif_pane

0x8cc3,	// (0x0008d4bf) video4_image_uncrop_nhd_pane_ParamLimits

0x8cc3,	// (0x0008d4bf) video4_image_uncrop_nhd_pane

0x8b37,	// (0x0008d333) video4_image_uncrop_vga_pane_ParamLimits

0x8b37,	// (0x0008d333) video4_image_uncrop_vga_pane

0x728b,	// (0x0008ba87) bg_tb_trans_pane_cp07

0x8cda,	// (0x0008d4d6) vid4_indicators_pane_g1

0x8cee,	// (0x0008d4ea) vid4_indicators_pane_g2

0x8d02,	// (0x0008d4fe) vid4_indicators_pane_g3

0x0004,

0xf800,	// (0x00093ffc) vid4_indicators_pane_g

0x8d31,	// (0x0008d52d) vid4_indicators_pane_t1

0x8d48,	// (0x0008d544) cam4_autofocus_pane_g1

0x8d50,	// (0x0008d54c) cam4_autofocus_pane_g2

0x8d58,	// (0x0008d554) cam4_autofocus_pane_g3

0x0002,

0xf80b,	// (0x00094007) cam4_autofocus_pane_g

0x8d60,	// (0x0008d55c) cam4_autofocus_pane_g3_copy1

0x846c,	// (0x0008cc68) video_down_pane_cp_t1

0x847a,	// (0x0008cc76) video_down_pane_cp_t2

0x0001,

0xf783,	// (0x00093f7f) video_down_pane_cp_t

0x4857,	// (0x00089053) popup_vitu2_window_ParamLimits

0x4857,	// (0x00089053) popup_vitu2_window

0x8d68,	// (0x0008d564) aid_size_cell2_itu2_ParamLimits

0x8d68,	// (0x0008d564) aid_size_cell2_itu2

0x8d8a,	// (0x0008d586) aid_size_cell_itu2_ParamLimits

0x8d8a,	// (0x0008d586) aid_size_cell_itu2

0x8dce,	// (0x0008d5ca) bg_popup_window_pane_cp09_ParamLimits

0x8dce,	// (0x0008d5ca) bg_popup_window_pane_cp09

0x8ddc,	// (0x0008d5d8) field_vitu2_entry_pane_ParamLimits

0x8ddc,	// (0x0008d5d8) field_vitu2_entry_pane

0x8dfc,	// (0x0008d5f8) grid_vitu2_function_pane_ParamLimits

0x8dfc,	// (0x0008d5f8) grid_vitu2_function_pane

0x8e40,	// (0x0008d63c) grid_vitu2_itu_pane_ParamLimits

0x8e40,	// (0x0008d63c) grid_vitu2_itu_pane

0x8eb8,	// (0x0008d6b4) cell_vitu2_itu_pane_ParamLimits

0x8eb8,	// (0x0008d6b4) cell_vitu2_itu_pane

0x8ed1,	// (0x0008d6cd) cell_vitu2_function_pane_ParamLimits

0x8ed1,	// (0x0008d6cd) cell_vitu2_function_pane

0xcbf4,	// (0x000913f0) bg_popup_call_pane_cp08_ParamLimits

0xcbf4,	// (0x000913f0) bg_popup_call_pane_cp08

0xcc0b,	// (0x00091407) field_vitu2_entry_pane_g1

0xcc17,	// (0x00091413) field_vitu2_entry_pane_g2

0x0002,

0xf812,	// (0x0009400e) field_vitu2_entry_pane_g

0x8f12,	// (0x0008d70e) field_vitu2_entry_pane_t1_ParamLimits

0x8f12,	// (0x0008d70e) field_vitu2_entry_pane_t1

0xcc23,	// (0x0009141f) field_vitu2_entry_pane_t2_ParamLimits

0xcc23,	// (0x0009141f) field_vitu2_entry_pane_t2

0x0001,

0xf819,	// (0x00094015) field_vitu2_entry_pane_t_ParamLimits

0xf819,	// (0x00094015) field_vitu2_entry_pane_t

0x75c7,	// (0x0008bdc3) bg_button_pane_cp010_ParamLimits

0x75c7,	// (0x0008bdc3) bg_button_pane_cp010

0x8f45,	// (0x0008d741) cell_vitu2_itu_pane_g1

0x8f6b,	// (0x0008d767) cell_vitu2_itu_pane_t1_ParamLimits

0x8f6b,	// (0x0008d767) cell_vitu2_itu_pane_t1

0x8fb7,	// (0x0008d7b3) cell_vitu2_itu_pane_t2_ParamLimits

0x8fb7,	// (0x0008d7b3) cell_vitu2_itu_pane_t2

0x0002,

0xf823,	// (0x0009401f) cell_vitu2_itu_pane_t_ParamLimits

0xf823,	// (0x0009401f) cell_vitu2_itu_pane_t

0x728b,	// (0x0008ba87) bg_button_pane_cp011

0x907f,	// (0x0008d87b) cell_vitu2_function_pane_g1

0x4871,	// (0x0008906d) main_myfav_hc_pane

0x8941,	// (0x0008d13d) popup_image3_note_pane_ParamLimits

0x8941,	// (0x0008d13d) popup_image3_note_pane

0x894f,	// (0x0008d14b) popup_image3_tool_bar_pane_ParamLimits

0x894f,	// (0x0008d14b) popup_image3_tool_bar_pane

0x902d,	// (0x0008d829) cell_vitu2_itu_pane_t3_ParamLimits

0x902d,	// (0x0008d829) cell_vitu2_itu_pane_t3

0xdc3b,	// (0x00092437) bg_popup_trans_pane

0xcc48,	// (0x00091444) grid_image3_tool_bar_pane

0xcc52,	// (0x0009144e) bg_popup_trans_pane_g1

0xe812,	// (0x0009300e) bg_popup_trans_pane_g2

0xcc5a,	// (0x00091456) bg_popup_trans_pane_g3

0xcc62,	// (0x0009145e) bg_popup_trans_pane_g4

0xcc6a,	// (0x00091466) bg_popup_trans_pane_g5

0xcc72,	// (0x0009146e) bg_popup_trans_pane_g6

0xcc7a,	// (0x00091476) bg_popup_trans_pane_g7

0xcc82,	// (0x0009147e) bg_popup_trans_pane_g8

0xe7f2,	// (0x00092fee) bg_popup_trans_pane_g9

0x0008,

0xf82a,	// (0x00094026) bg_popup_trans_pane_g

0xcc8a,	// (0x00091486) cell_image3_tool_bar_pane_ParamLimits

0xcc8a,	// (0x00091486) cell_image3_tool_bar_pane

0xe37a,	// (0x00092b76) cell_image3_tool_bar_pane_g1

0xdc3b,	// (0x00092437) bg_popup_trans_pane_cp1

0xcc9e,	// (0x0009149a) popup_image3_note_pane_t1

0xccac,	// (0x000914a8) popup_image3_note_pane_t2

0xccba,	// (0x000914b6) popup_image3_note_pane_t3

0x0002,

0xf83d,	// (0x00094039) popup_image3_note_pane_t

0xccc8,	// (0x000914c4) popup_image3_note_pane_t3_copy1

0x9093,	// (0x0008d88f) bg_myfav_hc_instruction_pane_ParamLimits

0x9093,	// (0x0008d88f) bg_myfav_hc_instruction_pane

0x90ab,	// (0x0008d8a7) cell_myfav_contact_pane_ParamLimits

0x90ab,	// (0x0008d8a7) cell_myfav_contact_pane

0x90c5,	// (0x0008d8c1) cell_myfav_contact_pane_cp1_ParamLimits

0x90c5,	// (0x0008d8c1) cell_myfav_contact_pane_cp1

0x90dd,	// (0x0008d8d9) cell_myfav_contact_pane_cp2_ParamLimits

0x90dd,	// (0x0008d8d9) cell_myfav_contact_pane_cp2

0x90f5,	// (0x0008d8f1) cell_myfav_contact_pane_cp3_ParamLimits

0x90f5,	// (0x0008d8f1) cell_myfav_contact_pane_cp3

0x910c,	// (0x0008d908) cell_myfav_contact_pane_cp4_ParamLimits

0x910c,	// (0x0008d908) cell_myfav_contact_pane_cp4

0x9122,	// (0x0008d91e) cell_myfav_contact_pane_cp5_ParamLimits

0x9122,	// (0x0008d91e) cell_myfav_contact_pane_cp5

0x9136,	// (0x0008d932) cell_myfav_contact_pane_cp6_ParamLimits

0x9136,	// (0x0008d932) cell_myfav_contact_pane_cp6

0x914a,	// (0x0008d946) cell_myfav_contact_pane_cp7_ParamLimits

0x914a,	// (0x0008d946) cell_myfav_contact_pane_cp7

0xccd6,	// (0x000914d2) listscroll_gen_pane_cp05

0x9162,	// (0x0008d95e) main_myfav_hc_pane_g1_ParamLimits

0x9162,	// (0x0008d95e) main_myfav_hc_pane_g1

0x9178,	// (0x0008d974) main_myfav_hc_pane_g2_ParamLimits

0x9178,	// (0x0008d974) main_myfav_hc_pane_g2

0x0002,

0xf844,	// (0x00094040) main_myfav_hc_pane_g_ParamLimits

0xf844,	// (0x00094040) main_myfav_hc_pane_g

0x91a6,	// (0x0008d9a2) main_myfav_hc_pane_t1_ParamLimits

0x91a6,	// (0x0008d9a2) main_myfav_hc_pane_t1

0xccdf,	// (0x000914db) main_myfav_hc_pane_t2_ParamLimits

0xccdf,	// (0x000914db) main_myfav_hc_pane_t2

0xccf1,	// (0x000914ed) main_myfav_hc_pane_t3_ParamLimits

0xccf1,	// (0x000914ed) main_myfav_hc_pane_t3

0x91bd,	// (0x0008d9b9) main_myfav_hc_pane_t4_ParamLimits

0x91bd,	// (0x0008d9b9) main_myfav_hc_pane_t4

0x0004,

0xf84b,	// (0x00094047) main_myfav_hc_pane_t_ParamLimits

0xf84b,	// (0x00094047) main_myfav_hc_pane_t

0xe37a,	// (0x00092b76) bg_myfav_hc_instruction_pane_g1

0xcd03,	// (0x000914ff) cell_myfav_contact_pane_g1_ParamLimits

0xcd03,	// (0x000914ff) cell_myfav_contact_pane_g1

0xcd03,	// (0x000914ff) cell_myfav_contact_pane_g2_ParamLimits

0xcd03,	// (0x000914ff) cell_myfav_contact_pane_g2

0xcd0f,	// (0x0009150b) cell_myfav_contact_pane_g3_ParamLimits

0xcd0f,	// (0x0009150b) cell_myfav_contact_pane_g3

0xe34a,	// (0x00092b46) cell_myfav_contact_pane_g4_ParamLimits

0xe34a,	// (0x00092b46) cell_myfav_contact_pane_g4

0xcd1c,	// (0x00091518) cell_myfav_contact_pane_g5_ParamLimits

0xcd1c,	// (0x00091518) cell_myfav_contact_pane_g5

0x0004,

0xf856,	// (0x00094052) cell_myfav_contact_pane_g_ParamLimits

0xf856,	// (0x00094052) cell_myfav_contact_pane_g

0x918e,	// (0x0008d98a) main_myfav_hc_pane_g3_ParamLimits

0x918e,	// (0x0008d98a) main_myfav_hc_pane_g3

0x4761,	// (0x00088f5d) popup_adpt_find_window

0x91e7,	// (0x0008d9e3) afind_page_pane_ParamLimits

0x91e7,	// (0x0008d9e3) afind_page_pane

0x91f4,	// (0x0008d9f0) aid_size_cell_afind_ParamLimits

0x91f4,	// (0x0008d9f0) aid_size_cell_afind

0x920e,	// (0x0008da0a) bg_popup_sub_pane_cp09_ParamLimits

0x920e,	// (0x0008da0a) bg_popup_sub_pane_cp09

0x921b,	// (0x0008da17) find_pane_cp01_ParamLimits

0x921b,	// (0x0008da17) find_pane_cp01

0xcd28,	// (0x00091524) grid_afind_control_pane_ParamLimits

0xcd28,	// (0x00091524) grid_afind_control_pane

0x9228,	// (0x0008da24) grid_afind_pane_ParamLimits

0x9228,	// (0x0008da24) grid_afind_pane

0x9244,	// (0x0008da40) cell_afind_pane_ParamLimits

0x9244,	// (0x0008da40) cell_afind_pane

0xe37a,	// (0x00092b76) afind_page_pane_g1

0x928c,	// (0x0008da88) afind_page_pane_g2

0x9294,	// (0x0008da90) afind_page_pane_g3

0x0002,

0xf861,	// (0x0009405d) afind_page_pane_g

0x929c,	// (0x0008da98) afind_page_pane_t1

0xcd4e,	// (0x0009154a) cell_afind_grid_control_pane_ParamLimits

0xcd4e,	// (0x0009154a) cell_afind_grid_control_pane

0xcd5d,	// (0x00091559) bg_button_pane_cp69_ParamLimits

0xcd5d,	// (0x00091559) bg_button_pane_cp69

0x92aa,	// (0x0008daa6) cell_afind_pane_g1_ParamLimits

0x92aa,	// (0x0008daa6) cell_afind_pane_g1

0x92b7,	// (0x0008dab3) cell_afind_pane_t1_ParamLimits

0x92b7,	// (0x0008dab3) cell_afind_pane_t1

0xcd69,	// (0x00091565) bg_button_pane_cp72

0xcd71,	// (0x0009156d) cell_afind_grid_control_pane_g1

0x6e32,	// (0x0008b62e) aid_image_placing_area_ParamLimits

0x6e32,	// (0x0008b62e) aid_image_placing_area

0xe33c,	// (0x00092b38) field_vitu_entry_pane_g1_ParamLimits

0xe33c,	// (0x00092b38) field_vitu_entry_pane_g1

0xe33c,	// (0x00092b38) field_vitu_entry_pane_g2_ParamLimits

0xe33c,	// (0x00092b38) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x00093995) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x00093995) field_vitu_entry_pane_g

0x3628,	// (0x00087e24) cell_vitu_itu_pane_g1_ParamLimits

0x360b,	// (0x00087e07) cell_vitu_itu_pane_t3_ParamLimits

0x360b,	// (0x00087e07) cell_vitu_itu_pane_t3

0xcb4b,	// (0x00091347) mp4_progress_pane_t1_ParamLimits

0xcb6a,	// (0x00091366) mp4_progress_pane_t2_ParamLimits

0xf7a7,	// (0x00093fa3) mp4_progress_pane_t_ParamLimits

0xcb89,	// (0x00091385) mup_progress_pane_cp04_ParamLimits

0x91d1,	// (0x0008d9cd) main_myfav_hc_pane_t5_ParamLimits

0x91d1,	// (0x0008d9cd) main_myfav_hc_pane_t5

0x4588,	// (0x00088d84) aid_zoom_text_primary

0x4761,	// (0x00088f5d) popup_adpt_find_window_ParamLimits

0x728b,	// (0x0008ba87) main_cam_set_pane

0x8b5c,	// (0x0008d358) cam4_zoom_pane_ParamLimits

0x8b5c,	// (0x0008d358) cam4_zoom_pane

0x92c9,	// (0x0008dac5) main_cam_set_pane_g1_ParamLimits

0x92c9,	// (0x0008dac5) main_cam_set_pane_g1

0x92d7,	// (0x0008dad3) main_cam_set_pane_g2_ParamLimits

0x92d7,	// (0x0008dad3) main_cam_set_pane_g2

0x0001,

0xf868,	// (0x00094064) main_cam_set_pane_g_ParamLimits

0xf868,	// (0x00094064) main_cam_set_pane_g

0x92e3,	// (0x0008dadf) main_cam_set_pane_t1_ParamLimits

0x92e3,	// (0x0008dadf) main_cam_set_pane_t1

0x92ff,	// (0x0008dafb) main_cset_listscroll_pane_ParamLimits

0x92ff,	// (0x0008dafb) main_cset_listscroll_pane

0x9331,	// (0x0008db2d) main_cset_slider_pane_ParamLimits

0x9331,	// (0x0008db2d) main_cset_slider_pane

0xcd82,	// (0x0009157e) main_cset_list_pane_ParamLimits

0xcd82,	// (0x0009157e) main_cset_list_pane

0xcd92,	// (0x0009158e) scroll_pane_cp028

0x9350,	// (0x0008db4c) aid_area_touch_slider

0x936c,	// (0x0008db68) cset_slider_pane

0x938f,	// (0x0008db8b) main_cset_slider_pane_g1

0x93a4,	// (0x0008dba0) main_cset_slider_pane_g2

0x0011,

0xf86d,	// (0x00094069) main_cset_slider_pane_g

0xcdcb,	// (0x000915c7) main_cset_slider_pane_t1

0x9466,	// (0x0008dc62) main_cset_slider_pane_t2

0x9480,	// (0x0008dc7c) main_cset_slider_pane_t3

0x949a,	// (0x0008dc96) main_cset_slider_pane_t4

0x94b4,	// (0x0008dcb0) main_cset_slider_pane_t5

0x94d2,	// (0x0008dcce) main_cset_slider_pane_t6

0x94e9,	// (0x0008dce5) main_cset_slider_pane_t7

0x000e,

0xf892,	// (0x0009408e) main_cset_slider_pane_t

0x95f5,	// (0x0008ddf1) cset_list_set_pane_ParamLimits

0x95f5,	// (0x0008ddf1) cset_list_set_pane

0xce65,	// (0x00091661) aid_position_infowindow_above

0xce6d,	// (0x00091669) aid_position_infowindow_below

0x04c2,	// (0x00084cbe) cset_list_set_pane_g1_ParamLimits

0x04c2,	// (0x00084cbe) cset_list_set_pane_g1

0x04ce,	// (0x00084cca) cset_list_set_pane_g3_ParamLimits

0x04ce,	// (0x00084cca) cset_list_set_pane_g3

0x0001,

0xf8b1,	// (0x000940ad) cset_list_set_pane_g_ParamLimits

0xf8b1,	// (0x000940ad) cset_list_set_pane_g

0x04dd,	// (0x00084cd9) cset_list_set_pane_t1_ParamLimits

0x04dd,	// (0x00084cd9) cset_list_set_pane_t1

0xde1d,	// (0x00092619) list_highlight_pane_cp021_ParamLimits

0xde1d,	// (0x00092619) list_highlight_pane_cp021

0x1a03,	// (0x000861ff) cset_slider_pane_g1

0x1a15,	// (0x00086211) cset_slider_pane_g2

0x1a0c,	// (0x00086208) cset_slider_pane_g3

0x0002,

0xf8b6,	// (0x000940b2) cset_slider_pane_g

0x960b,	// (0x0008de07) aid_area_touch_cam4_zoom

0x9613,	// (0x0008de0f) cam4_zoom_cont_pane

0x961b,	// (0x0008de17) cam4_zoom_pane_g1

0x9623,	// (0x0008de1f) cam4_zoom_pane_g2

0x962b,	// (0x0008de27) cam4_zoom_pane_g3

0x0002,

0xf8bd,	// (0x000940b9) cam4_zoom_pane_g

0x9633,	// (0x0008de2f) cam4_zoom_cont_pane_g1

0x963c,	// (0x0008de38) cam4_zoom_cont_pane_g2

0x9645,	// (0x0008de41) cam4_zoom_cont_pane_g3

0x0002,

0xf8c4,	// (0x000940c0) cam4_zoom_cont_pane_g

0x8998,	// (0x0008d194) call4_image_pane_ParamLimits

0x8998,	// (0x0008d194) call4_image_pane

0x89f7,	// (0x0008d1f3) call4_windows_conf_pane_ParamLimits

0x8a3c,	// (0x0008d238) popup_call4_audio_in_window_ParamLimits

0x8a3c,	// (0x0008d238) popup_call4_audio_in_window

0xdc3b,	// (0x00092437) bg_popup_call2_act_pane_cp02

0xcbd8,	// (0x000913d4) call4_list_conf_pane

0xe37a,	// (0x00092b76) call4_image_pane_g1

0xe37a,	// (0x00092b76) call4_image_pane_g2

0x0001,

0xf08c,	// (0x00093888) call4_image_pane_g

0xce75,	// (0x00091671) list_single_graphic_popup_conf4_pane_ParamLimits

0xce75,	// (0x00091671) list_single_graphic_popup_conf4_pane

0xdc3b,	// (0x00092437) list_highlight_pane_cp022

0xce88,	// (0x00091684) list_single_graphic_popup_conf4_pane_g1

0xecf1,	// (0x000934ed) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8cb,	// (0x000940c7) list_single_graphic_popup_conf4_pane_g

0xce90,	// (0x0009168c) list_single_graphic_popup_conf4_pane_t1

0x53d3,	// (0x00089bcf) popup_vtel_slider_window_ParamLimits

0x53d3,	// (0x00089bcf) popup_vtel_slider_window

0xcbaa,	// (0x000913a6) dialer2_ne_pane_t2_ParamLimits

0xcbaa,	// (0x000913a6) dialer2_ne_pane_t2

0x0001,

0xf7ac,	// (0x00093fa8) dialer2_ne_pane_t_ParamLimits

0xf7ac,	// (0x00093fa8) dialer2_ne_pane_t

0xde1d,	// (0x00092619) bg_popup_sub_pane_cp010_ParamLimits

0xde1d,	// (0x00092619) bg_popup_sub_pane_cp010

0x964e,	// (0x0008de4a) popup_vtel_slider_window_g1_ParamLimits

0x964e,	// (0x0008de4a) popup_vtel_slider_window_g1

0x965a,	// (0x0008de56) popup_vtel_slider_window_g2_ParamLimits

0x965a,	// (0x0008de56) popup_vtel_slider_window_g2

0x0003,

0xf8d0,	// (0x000940cc) popup_vtel_slider_window_g_ParamLimits

0xf8d0,	// (0x000940cc) popup_vtel_slider_window_g

0x96a2,	// (0x0008de9e) vtel_slider_pane_ParamLimits

0x96a2,	// (0x0008de9e) vtel_slider_pane

0x96b1,	// (0x0008dead) vtel_slider_pane_g1_ParamLimits

0x96b1,	// (0x0008dead) vtel_slider_pane_g1

0x96be,	// (0x0008deba) vtel_slider_pane_g2_ParamLimits

0x96be,	// (0x0008deba) vtel_slider_pane_g2

0x96cb,	// (0x0008dec7) vtel_slider_pane_g3_ParamLimits

0x96cb,	// (0x0008dec7) vtel_slider_pane_g3

0x96b1,	// (0x0008dead) vtel_slider_pane_g4_ParamLimits

0x96b1,	// (0x0008dead) vtel_slider_pane_g4

0x96d8,	// (0x0008ded4) vtel_slider_pane_g5_ParamLimits

0x96d8,	// (0x0008ded4) vtel_slider_pane_g5

0x0004,

0xf8d9,	// (0x000940d5) vtel_slider_pane_g_ParamLimits

0xf8d9,	// (0x000940d5) vtel_slider_pane_g

0x728b,	// (0x0008ba87) main_gallery2_pane

0x8db0,	// (0x0008d5ac) aid_size_row_itut2_dropdow_list_ParamLimits

0x8db0,	// (0x0008d5ac) aid_size_row_itut2_dropdow_list

0x8e1e,	// (0x0008d61a) grid_vitu2_function_top_pane_ParamLimits

0x8e1e,	// (0x0008d61a) grid_vitu2_function_top_pane

0x8e78,	// (0x0008d674) popup_vitu2_dropdown_list_window_ParamLimits

0x8e78,	// (0x0008d674) popup_vitu2_dropdown_list_window

0x8e96,	// (0x0008d692) popup_vitu2_match_list_window

0x96e5,	// (0x0008dee1) cell_vitu2_function_top_pane_ParamLimits

0x96e5,	// (0x0008dee1) cell_vitu2_function_top_pane

0x96ff,	// (0x0008defb) cell_vitu2_function_top_pane_cp01_ParamLimits

0x96ff,	// (0x0008defb) cell_vitu2_function_top_pane_cp01

0x971b,	// (0x0008df17) cell_vitu2_function_top_wide_pane_ParamLimits

0x971b,	// (0x0008df17) cell_vitu2_function_top_wide_pane

0x728b,	// (0x0008ba87) bg_button_pane_cp012

0x9739,	// (0x0008df35) cell_vitu2_function_top_pane_g1

0x974d,	// (0x0008df49) bg_button_pane_cp013_ParamLimits

0x974d,	// (0x0008df49) bg_button_pane_cp013

0x9769,	// (0x0008df65) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x9769,	// (0x0008df65) cell_vitu2_function_top_wide_pane_g1

0x4857,	// (0x00089053) bg_popup_sub_pane_cp20

0x9781,	// (0x0008df7d) list_vitu2_match_list_pane

0xcc52,	// (0x0009144e) bg_popup_sub_pane_cp20_g1

0xcc5a,	// (0x00091456) bg_popup_sub_pane_cp20_g2

0xe812,	// (0x0009300e) bg_popup_sub_pane_cp20_g3

0xcc62,	// (0x0009145e) bg_popup_sub_pane_cp20_g4

0xe7f2,	// (0x00092fee) bg_popup_sub_pane_cp20_g5

0xcea6,	// (0x000916a2) bg_popup_sub_pane_cp20_g6

0xcc72,	// (0x0009146e) bg_popup_sub_pane_cp20_g7

0xcc7a,	// (0x00091476) bg_popup_sub_pane_cp20_g8

0xcc82,	// (0x0009147e) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8e4,	// (0x000940e0) bg_popup_sub_pane_cp20_g

0x9799,	// (0x0008df95) list_vitu2_match_list_item_pane_ParamLimits

0x9799,	// (0x0008df95) list_vitu2_match_list_item_pane

0x97ab,	// (0x0008dfa7) list_vitu2_match_list_item_pane_t1

0x4871,	// (0x0008906d) bg_popup_sub_pane_cp21

0xe5f0,	// (0x00092dec) grid_vitu2_dropdown_list_pane

0x97b9,	// (0x0008dfb5) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x97b9,	// (0x0008dfb5) cell_vitu2_dropdown_list_char_pane

0x97db,	// (0x0008dfd7) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x97db,	// (0x0008dfd7) cell_vitu2_dropdown_list_ctrl_pane

0xceae,	// (0x000916aa) cell_vitu2_dropdown_list_char_pane_g1

0xceb7,	// (0x000916b3) cell_vitu2_dropdown_list_char_pane_g2

0xcec0,	// (0x000916bc) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf8f7,	// (0x000940f3) cell_vitu2_dropdown_list_char_pane_g

0x9803,	// (0x0008dfff) cell_vitu2_dropdown_list_char_pane_t1

0x9811,	// (0x0008e00d) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x9811,	// (0x0008e00d) cell_vitu2_dropdown_list_ctrl_pane_g1

0x981e,	// (0x0008e01a) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x981e,	// (0x0008e01a) cell_vitu2_dropdown_list_ctrl_pane_g2

0x982b,	// (0x0008e027) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x982b,	// (0x0008e027) cell_vitu2_dropdown_list_ctrl_pane_g3

0x9838,	// (0x0008e034) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x9838,	// (0x0008e034) cell_vitu2_dropdown_list_ctrl_pane_g4

0x0829,	// (0x00085025) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x0829,	// (0x00085025) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8fe,	// (0x000940fa) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8fe,	// (0x000940fa) cell_vitu2_dropdown_list_ctrl_pane_g

0x9854,	// (0x0008e050) aid_size_cell_gallery2_ParamLimits

0x9854,	// (0x0008e050) aid_size_cell_gallery2

0x986e,	// (0x0008e06a) grid_gallery2_pane_ParamLimits

0x986e,	// (0x0008e06a) grid_gallery2_pane

0x9885,	// (0x0008e081) scroll_pane_cp029_ParamLimits

0x9885,	// (0x0008e081) scroll_pane_cp029

0x9895,	// (0x0008e091) cell_gallery2_pane_ParamLimits

0x9895,	// (0x0008e091) cell_gallery2_pane

0xcec9,	// (0x000916c5) cell_gallery2_pane_g2

0x0be0,	// (0x000853dc) cell_gallery2_pane_g3

0xced1,	// (0x000916cd) cell_gallery2_pane_g4

0xced9,	// (0x000916d5) cell_gallery2_pane_g5

0xe5f0,	// (0x00092dec) grid_highlight_pane_cp10

0x8e96,	// (0x0008d692) popup_vitu2_match_list_window_ParamLimits

0x8ea8,	// (0x0008d6a4) popup_vitu2_query_window_ParamLimits

0x8ea8,	// (0x0008d6a4) popup_vitu2_query_window

0x4871,	// (0x0008906d) bg_vitu2_candi_button_pane

0xceae,	// (0x000916aa) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xceb7,	// (0x000916b3) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcec0,	// (0x000916bc) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x98ea,	// (0x0008e0e6) bg_button_pane_cp015

0x98ff,	// (0x0008e0fb) bg_button_pane_cp016

0x990b,	// (0x0008e107) bg_button_pane_cp017

0x1993,	// (0x0008618f) bg_popup_sub_pane_cp22

0xcee1,	// (0x000916dd) popup_vitu2_query_window_g1

0x994b,	// (0x0008e147) popup_vitu2_query_window_g2

0x0002,

0xf909,	// (0x00094105) popup_vitu2_query_window_g

0x996f,	// (0x0008e16b) popup_vitu2_query_window_t1_ParamLimits

0x996f,	// (0x0008e16b) popup_vitu2_query_window_t1

0x99a2,	// (0x0008e19e) popup_vitu2_query_window_t2_ParamLimits

0x99a2,	// (0x0008e19e) popup_vitu2_query_window_t2

0x99b4,	// (0x0008e1b0) popup_vitu2_query_window_t3_ParamLimits

0x99b4,	// (0x0008e1b0) popup_vitu2_query_window_t3

0x99dc,	// (0x0008e1d8) popup_vitu2_query_window_t4_ParamLimits

0x99dc,	// (0x0008e1d8) popup_vitu2_query_window_t4

0x99f0,	// (0x0008e1ec) popup_vitu2_query_window_t5_ParamLimits

0x99f0,	// (0x0008e1ec) popup_vitu2_query_window_t5

0x0006,

0xf910,	// (0x0009410c) popup_vitu2_query_window_t_ParamLimits

0xf910,	// (0x0009410c) popup_vitu2_query_window_t

0xcd7a,	// (0x00091576) main_cset_text_pane

0x9350,	// (0x0008db4c) aid_area_touch_slider_ParamLimits

0x936c,	// (0x0008db68) cset_slider_pane_ParamLimits

0x938f,	// (0x0008db8b) main_cset_slider_pane_g1_ParamLimits

0x93a4,	// (0x0008dba0) main_cset_slider_pane_g2_ParamLimits

0xcd9b,	// (0x00091597) main_cset_slider_pane_g3_ParamLimits

0xcd9b,	// (0x00091597) main_cset_slider_pane_g3

0x93b9,	// (0x0008dbb5) main_cset_slider_pane_g4_ParamLimits

0x93b9,	// (0x0008dbb5) main_cset_slider_pane_g4

0x93c8,	// (0x0008dbc4) main_cset_slider_pane_g5_ParamLimits

0x93c8,	// (0x0008dbc4) main_cset_slider_pane_g5

0x93d6,	// (0x0008dbd2) main_cset_slider_pane_g6_ParamLimits

0x93d6,	// (0x0008dbd2) main_cset_slider_pane_g6

0xf86d,	// (0x00094069) main_cset_slider_pane_g_ParamLimits

0xcdcb,	// (0x000915c7) main_cset_slider_pane_t1_ParamLimits

0x9466,	// (0x0008dc62) main_cset_slider_pane_t2_ParamLimits

0x9480,	// (0x0008dc7c) main_cset_slider_pane_t3_ParamLimits

0x949a,	// (0x0008dc96) main_cset_slider_pane_t4_ParamLimits

0x94b4,	// (0x0008dcb0) main_cset_slider_pane_t5_ParamLimits

0x94d2,	// (0x0008dcce) main_cset_slider_pane_t6_ParamLimits

0x94e9,	// (0x0008dce5) main_cset_slider_pane_t7_ParamLimits

0x9517,	// (0x0008dd13) main_cset_slider_pane_t8_ParamLimits

0x9517,	// (0x0008dd13) main_cset_slider_pane_t8

0x953f,	// (0x0008dd3b) main_cset_slider_pane_t9_ParamLimits

0x953f,	// (0x0008dd3b) main_cset_slider_pane_t9

0x9567,	// (0x0008dd63) main_cset_slider_pane_t10_ParamLimits

0x9567,	// (0x0008dd63) main_cset_slider_pane_t10

0x958f,	// (0x0008dd8b) main_cset_slider_pane_t11_ParamLimits

0x958f,	// (0x0008dd8b) main_cset_slider_pane_t11

0x95b9,	// (0x0008ddb5) main_cset_slider_pane_t12_ParamLimits

0x95b9,	// (0x0008ddb5) main_cset_slider_pane_t12

0x95d6,	// (0x0008ddd2) main_cset_slider_pane_t13_ParamLimits

0x95d6,	// (0x0008ddd2) main_cset_slider_pane_t13

0xf892,	// (0x0009408e) main_cset_slider_pane_t_ParamLimits

0xdc3b,	// (0x00092437) bg_popup_sub_pane_cp011

0xceed,	// (0x000916e9) main_cset_text_pane_g1

0xcef5,	// (0x000916f1) main_cset_text_pane_t1

0xcf03,	// (0x000916ff) main_cset_text_pane_t2

0xcf11,	// (0x0009170d) main_cset_text_pane_t3

0xcf1f,	// (0x0009171b) main_cset_text_pane_t4

0xcf2d,	// (0x00091729) main_cset_text_pane_t5

0xcf3b,	// (0x00091737) main_cset_text_pane_t6

0xcf49,	// (0x00091745) main_cset_text_pane_t7

0x0006,

0xf91f,	// (0x0009411b) main_cset_text_pane_t

0x4871,	// (0x0008906d) main_cam4_burst_pane

0x4871,	// (0x0008906d) main_cam5_pane

0xcd3c,	// (0x00091538) bg_button_pane_cp019

0xcd45,	// (0x00091541) bg_button_pane_cp020

0xcda7,	// (0x000915a3) main_cset_slider_pane_g7_ParamLimits

0xcda7,	// (0x000915a3) main_cset_slider_pane_g7

0xcdb3,	// (0x000915af) main_cset_slider_pane_g8_ParamLimits

0xcdb3,	// (0x000915af) main_cset_slider_pane_g8

0x93ea,	// (0x0008dbe6) main_cset_slider_pane_g9_ParamLimits

0x93ea,	// (0x0008dbe6) main_cset_slider_pane_g9

0x93f6,	// (0x0008dbf2) main_cset_slider_pane_g10_ParamLimits

0x93f6,	// (0x0008dbf2) main_cset_slider_pane_g10

0x9402,	// (0x0008dbfe) main_cset_slider_pane_g11_ParamLimits

0x9402,	// (0x0008dbfe) main_cset_slider_pane_g11

0x940e,	// (0x0008dc0a) main_cset_slider_pane_g12_ParamLimits

0x940e,	// (0x0008dc0a) main_cset_slider_pane_g12

0x941a,	// (0x0008dc16) main_cset_slider_pane_g13_ParamLimits

0x941a,	// (0x0008dc16) main_cset_slider_pane_g13

0x9426,	// (0x0008dc22) main_cset_slider_pane_g14_ParamLimits

0x9426,	// (0x0008dc22) main_cset_slider_pane_g14

0x9432,	// (0x0008dc2e) main_cset_slider_pane_g15_ParamLimits

0x9432,	// (0x0008dc2e) main_cset_slider_pane_g15

0xcdf3,	// (0x000915ef) main_cset_slider_pane_t14_ParamLimits

0xcdf3,	// (0x000915ef) main_cset_slider_pane_t14

0xce2c,	// (0x00091628) main_cset_slider_pane_t15_ParamLimits

0xce2c,	// (0x00091628) main_cset_slider_pane_t15

0x9a5a,	// (0x0008e256) aid_cam4_burst_size_cell_ParamLimits

0x9a5a,	// (0x0008e256) aid_cam4_burst_size_cell

0x9a76,	// (0x0008e272) grid_cam4_burst_pane_ParamLimits

0x9a76,	// (0x0008e272) grid_cam4_burst_pane

0x9aa6,	// (0x0008e2a2) linegrid_cam4_burst_pane_ParamLimits

0x9aa6,	// (0x0008e2a2) linegrid_cam4_burst_pane

0x9ac6,	// (0x0008e2c2) scroll_pane_cp30_ParamLimits

0x9ac6,	// (0x0008e2c2) scroll_pane_cp30

0x9ad2,	// (0x0008e2ce) cell_cam4_burst_pane_ParamLimits

0x9ad2,	// (0x0008e2ce) cell_cam4_burst_pane

0xcf57,	// (0x00091753) linegrid_cam4_burst_pane_g1_ParamLimits

0xcf57,	// (0x00091753) linegrid_cam4_burst_pane_g1

0x9b0e,	// (0x0008e30a) linegrid_cam4_burst_pane_g2_ParamLimits

0x9b0e,	// (0x0008e30a) linegrid_cam4_burst_pane_g2

0xcf64,	// (0x00091760) linegrid_cam4_burst_pane_g3_ParamLimits

0xcf64,	// (0x00091760) linegrid_cam4_burst_pane_g3

0x0002,

0xf92e,	// (0x0009412a) linegrid_cam4_burst_pane_g_ParamLimits

0xf92e,	// (0x0009412a) linegrid_cam4_burst_pane_g

0x9b1f,	// (0x0008e31b) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x9b1f,	// (0x0008e31b) linegrid_cam4_burst_pane_g3_copy1

0xcf71,	// (0x0009176d) linegrid_cam4_burst_pane_g4_ParamLimits

0xcf71,	// (0x0009176d) linegrid_cam4_burst_pane_g4

0x9b39,	// (0x0008e335) linegrid_cam4_burst_pane_g5_ParamLimits

0x9b39,	// (0x0008e335) linegrid_cam4_burst_pane_g5

0x9b4a,	// (0x0008e346) linegrid_cam4_burst_pane_g6_ParamLimits

0x9b4a,	// (0x0008e346) linegrid_cam4_burst_pane_g6

0xcf7e,	// (0x0009177a) linegrid_cam4_burst_pane_g7_ParamLimits

0xcf7e,	// (0x0009177a) linegrid_cam4_burst_pane_g7

0x9b5b,	// (0x0008e357) cell_cam4_burst_pane_g1

0xcf97,	// (0x00091793) main_cam5_pane_t1_ParamLimits

0xcf97,	// (0x00091793) main_cam5_pane_t1

0xcfa9,	// (0x000917a5) main_cam5_pane_t2_ParamLimits

0xcfa9,	// (0x000917a5) main_cam5_pane_t2

0xcfbb,	// (0x000917b7) main_cam5_pane_t3_ParamLimits

0xcfbb,	// (0x000917b7) main_cam5_pane_t3

0xcfcd,	// (0x000917c9) main_cam5_pane_t4_ParamLimits

0xcfcd,	// (0x000917c9) main_cam5_pane_t4

0xcfe5,	// (0x000917e1) main_cam5_pane_t5_ParamLimits

0xcfe5,	// (0x000917e1) main_cam5_pane_t5

0xcff9,	// (0x000917f5) main_cam5_pane_t6_ParamLimits

0xcff9,	// (0x000917f5) main_cam5_pane_t6

0xd00d,	// (0x00091809) main_cam5_pane_t7_ParamLimits

0xd00d,	// (0x00091809) main_cam5_pane_t7

0xd01f,	// (0x0009181b) main_cam5_pane_t8_ParamLimits

0xd01f,	// (0x0009181b) main_cam5_pane_t8

0xd03b,	// (0x00091837) main_cam5_pane_t9_ParamLimits

0xd03b,	// (0x00091837) main_cam5_pane_t9

0xd04d,	// (0x00091849) main_cam5_pane_t10_ParamLimits

0xd04d,	// (0x00091849) main_cam5_pane_t10

0xd05f,	// (0x0009185b) main_cam5_pane_t11_ParamLimits

0xd05f,	// (0x0009185b) main_cam5_pane_t11

0xd071,	// (0x0009186d) main_cam5_pane_t12_ParamLimits

0xd071,	// (0x0009186d) main_cam5_pane_t12

0xd086,	// (0x00091882) main_cam5_pane_t13_ParamLimits

0xd086,	// (0x00091882) main_cam5_pane_t13

0x000c,

0xf93a,	// (0x00094136) main_cam5_pane_t_ParamLimits

0xf93a,	// (0x00094136) main_cam5_pane_t

0x4816,	// (0x00089012) popup_scut_keymap_window_ParamLimits

0x4816,	// (0x00089012) popup_scut_keymap_window

0x9b6e,	// (0x0008e36a) aid_size_cell_brow_shortcut

0xe5f0,	// (0x00092dec) bg_popup_window_pane_cp010

0x9b7a,	// (0x0008e376) grid_scut_pane

0x9b86,	// (0x0008e382) cell_scut_pane_ParamLimits

0x9b86,	// (0x0008e382) cell_scut_pane

0x9b9d,	// (0x0008e399) cell_scut_pane_g1

0xd0a3,	// (0x0009189f) cell_scut_pane_t1

0xd0b2,	// (0x000918ae) cell_scut_pane_t2

0x9ba6,	// (0x0008e3a2) cell_scut_pane_t3

0x0002,

0xf955,	// (0x00094151) cell_scut_pane_t

0x7b0b,	// (0x0008c307) main_mup3_pane_g8_ParamLimits

0x7b0b,	// (0x0008c307) main_mup3_pane_g8

0x8dbe,	// (0x0008d5ba) area_vitu2_query_pane_ParamLimits

0x8dbe,	// (0x0008d5ba) area_vitu2_query_pane

0x9917,	// (0x0008e113) input_focus_pane_cp08

0xd0c1,	// (0x000918bd) area_vitu2_query_pane_g1

0x9bb4,	// (0x0008e3b0) area_vitu2_query_pane_g2

0x0001,

0xf95c,	// (0x00094158) area_vitu2_query_pane_g

0x9bc5,	// (0x0008e3c1) area_vitu2_query_pane_t1_ParamLimits

0x9bc5,	// (0x0008e3c1) area_vitu2_query_pane_t1

0x9bd9,	// (0x0008e3d5) area_vitu2_query_pane_t2_ParamLimits

0x9bd9,	// (0x0008e3d5) area_vitu2_query_pane_t2

0x9bed,	// (0x0008e3e9) area_vitu2_query_pane_t3_ParamLimits

0x9bed,	// (0x0008e3e9) area_vitu2_query_pane_t3

0xd0cd,	// (0x000918c9) area_vitu2_query_pane_t4_ParamLimits

0xd0cd,	// (0x000918c9) area_vitu2_query_pane_t4

0xd0f5,	// (0x000918f1) area_vitu2_query_pane_t5_ParamLimits

0xd0f5,	// (0x000918f1) area_vitu2_query_pane_t5

0xd11d,	// (0x00091919) area_vitu2_query_pane_t6_ParamLimits

0xd11d,	// (0x00091919) area_vitu2_query_pane_t6

0x0006,

0xf961,	// (0x0009415d) area_vitu2_query_pane_t_ParamLimits

0xf961,	// (0x0009415d) area_vitu2_query_pane_t

0x98ff,	// (0x0008e0fb) bg_button_pane_cp018

0x9c15,	// (0x0008e411) bg_button_pane_cp021

0x9c21,	// (0x0008e41d) bg_button_pane_cp022

0x9c44,	// (0x0008e440) input_focus_pane_cp09

0xee2d,	// (0x00093629) aid_size_touch_mv_arrow_left

0xee56,	// (0x00093652) aid_size_touch_mv_arrow_right

0x944a,	// (0x0008dc46) main_cset_slider_pane_g16_ParamLimits

0x944a,	// (0x0008dc46) main_cset_slider_pane_g16

0x9458,	// (0x0008dc54) main_cset_slider_pane_g17_ParamLimits

0x9458,	// (0x0008dc54) main_cset_slider_pane_g17

0x9b5b,	// (0x0008e357) cell_cam4_burst_pane_g1_ParamLimits

0xdc3b,	// (0x00092437) compa_mode_pane

0x9666,	// (0x0008de62) popup_vtel_slider_window_g3_ParamLimits

0x9666,	// (0x0008de62) popup_vtel_slider_window_g3

0x967a,	// (0x0008de76) popup_vtel_slider_window_g4_ParamLimits

0x967a,	// (0x0008de76) popup_vtel_slider_window_g4

0x968e,	// (0x0008de8a) popup_vtel_slider_window_t1_ParamLimits

0x968e,	// (0x0008de8a) popup_vtel_slider_window_t1

0x4871,	// (0x0008906d) main_cl_pane

0x7329,	// (0x0008bb25) popup_imed_adjust2_window_ParamLimits

0x1993,	// (0x0008618f) bg_tb_trans_pane_cp05_ParamLimits

0x3538,	// (0x00087d34) popup_imed_adjust2_window_g1_ParamLimits

0x3547,	// (0x00087d43) popup_imed_adjust2_window_g2_ParamLimits

0x3547,	// (0x00087d43) popup_imed_adjust2_window_g2

0x3553,	// (0x00087d4f) popup_imed_adjust2_window_g3_ParamLimits

0x3553,	// (0x00087d4f) popup_imed_adjust2_window_g3

0x0002,

0xf6e1,	// (0x00093edd) popup_imed_adjust2_window_g_ParamLimits

0xf6e1,	// (0x00093edd) popup_imed_adjust2_window_g

0x355f,	// (0x00087d5b) popup_imed_adjust2_window_t1_ParamLimits

0x3577,	// (0x00087d73) slider_imed_adjust_pane_ParamLimits

0x358b,	// (0x00087d87) slider_imed_adjust_pane_g1_ParamLimits

0x359b,	// (0x00087d97) slider_imed_adjust_pane_g2_ParamLimits

0x35ab,	// (0x00087da7) slider_imed_adjust_pane_g3_ParamLimits

0x35bc,	// (0x00087db8) slider_imed_adjust_pane_g4_ParamLimits

0xf6e8,	// (0x00093ee4) slider_imed_adjust_pane_g_ParamLimits

0x8b05,	// (0x0008d301) aid_touch_area_cam4_ParamLimits

0x8b05,	// (0x0008d301) aid_touch_area_cam4

0x8b15,	// (0x0008d311) battery_pane_cp01

0x8b9c,	// (0x0008d398) main_camera4_pane_g6_ParamLimits

0x8b9c,	// (0x0008d398) main_camera4_pane_g6

0x8bba,	// (0x0008d3b6) main_camera4_pane_t2_ParamLimits

0x8bba,	// (0x0008d3b6) main_camera4_pane_t2

0x0001,

0xf7e0,	// (0x00093fdc) main_camera4_pane_t_ParamLimits

0xf7e0,	// (0x00093fdc) main_camera4_pane_t

0x8c41,	// (0x0008d43d) aid_touch_area_vid4_ParamLimits

0x8c41,	// (0x0008d43d) aid_touch_area_vid4

0x8c81,	// (0x0008d47d) main_video4_pane_g5_ParamLimits

0x8c81,	// (0x0008d47d) main_video4_pane_g5

0x8ca5,	// (0x0008d4a1) vid4_progress_pane_ParamLimits

0x8ca5,	// (0x0008d4a1) vid4_progress_pane

0xcdbf,	// (0x000915bb) main_cset_slider_pane_g18_ParamLimits

0xcdbf,	// (0x000915bb) main_cset_slider_pane_g18

0xcf8b,	// (0x00091787) cell_cam4_burst_pane_g2_ParamLimits

0xcf8b,	// (0x00091787) cell_cam4_burst_pane_g2

0x0001,

0xf935,	// (0x00094131) cell_cam4_burst_pane_g_ParamLimits

0xf935,	// (0x00094131) cell_cam4_burst_pane_g

0x9c54,	// (0x0008e450) bg_cl_pane_ParamLimits

0x9c54,	// (0x0008e450) bg_cl_pane

0x9c60,	// (0x0008e45c) cl_header_pane_ParamLimits

0x9c60,	// (0x0008e45c) cl_header_pane

0x9c6c,	// (0x0008e468) cl_listscroll_pane_ParamLimits

0x9c6c,	// (0x0008e468) cl_listscroll_pane

0xd169,	// (0x00091965) bg_cl_pane_g1

0xd171,	// (0x0009196d) bg_cl_pane_g2

0xd179,	// (0x00091975) bg_cl_pane_g3

0xd181,	// (0x0009197d) bg_cl_pane_g4

0xd189,	// (0x00091985) bg_cl_pane_g5

0xd191,	// (0x0009198d) bg_cl_pane_g6

0xd199,	// (0x00091995) bg_cl_pane_g7

0xd1a1,	// (0x0009199d) bg_cl_pane_g8

0xd1a9,	// (0x000919a5) bg_cl_pane_g9

0x0008,

0xf970,	// (0x0009416c) bg_cl_pane_g

0x9c78,	// (0x0008e474) aid_height_cl_leading_ParamLimits

0x9c78,	// (0x0008e474) aid_height_cl_leading

0x9c84,	// (0x0008e480) aid_height_cl_text_ParamLimits

0x9c84,	// (0x0008e480) aid_height_cl_text

0xe32e,	// (0x00092b2a) bg_cl_header_pane_ParamLimits

0xe32e,	// (0x00092b2a) bg_cl_header_pane

0x9c9c,	// (0x0008e498) cl_header_pane_g1_ParamLimits

0x9c9c,	// (0x0008e498) cl_header_pane_g1

0x9ca9,	// (0x0008e4a5) cl_header_pane_t1_ParamLimits

0x9ca9,	// (0x0008e4a5) cl_header_pane_t1

0xd1b1,	// (0x000919ad) cl_list_pane

0xcd92,	// (0x0009158e) hc_scroll_pane_cp01

0xe7f2,	// (0x00092fee) bg_cl_header_pane_g1

0xcc52,	// (0x0009144e) bg_cl_header_pane_g2

0xe812,	// (0x0009300e) bg_cl_header_pane_g3

0xcc62,	// (0x0009145e) bg_cl_header_pane_g4

0xcc5a,	// (0x00091456) bg_cl_header_pane_g5

0xcea6,	// (0x000916a2) bg_cl_header_pane_g6

0xcc7a,	// (0x00091476) bg_cl_header_pane_g7

0xcc82,	// (0x0009147e) bg_cl_header_pane_g8

0xcc72,	// (0x0009146e) bg_cl_header_pane_g9

0x0008,

0xf983,	// (0x0009417f) bg_cl_header_pane_g

0x9cbb,	// (0x0008e4b7) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x9cbb,	// (0x0008e4b7) hc_cl_list_double_graphic_heading_pane

0x9ccc,	// (0x0008e4c8) hc_cl_list_single_graphic_pane_ParamLimits

0x9ccc,	// (0x0008e4c8) hc_cl_list_single_graphic_pane

0x9ce5,	// (0x0008e4e1) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x9ce5,	// (0x0008e4e1) hc_cl_list_single_graphic_pane_g1

0x9cf1,	// (0x0008e4ed) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x9cf1,	// (0x0008e4ed) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf996,	// (0x00094192) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf996,	// (0x00094192) hc_cl_list_single_graphic_pane_g

0x9d05,	// (0x0008e501) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x9d05,	// (0x0008e501) hc_cl_list_single_graphic_pane_t1

0x9ce5,	// (0x0008e4e1) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x9ce5,	// (0x0008e4e1) hc_cl_list_double_graphic_heading_pane_g1

0x9d1a,	// (0x0008e516) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x9d1a,	// (0x0008e516) hc_cl_list_double_graphic_heading_pane_g2

0x9d2e,	// (0x0008e52a) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9d2e,	// (0x0008e52a) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf99b,	// (0x00094197) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf99b,	// (0x00094197) hc_cl_list_double_graphic_heading_pane_g

0x9d42,	// (0x0008e53e) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x9d42,	// (0x0008e53e) hc_cl_list_double_graphic_heading_pane_t1

0x9d57,	// (0x0008e553) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x9d57,	// (0x0008e553) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9a2,	// (0x0009419e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9a2,	// (0x0009419e) hc_cl_list_double_graphic_heading_pane_t

0x9d74,	// (0x0008e570) vid4_progress_pane_g1

0x9d84,	// (0x0008e580) vid4_progress_pane_g2

0x9d94,	// (0x0008e590) vid4_progress_pane_g3

0x9da6,	// (0x0008e5a2) vid4_progress_pane_g4

0x0004,

0xf9a7,	// (0x000941a3) vid4_progress_pane_g

0x9dbe,	// (0x0008e5ba) vid4_progress_pane_t1

0x9dd4,	// (0x0008e5d0) vid4_progress_pane_t2

0x0002,

0xf9b2,	// (0x000941ae) vid4_progress_pane_t

0x9dfe,	// (0x0008e5fa) wait_bar_pane_cp07

0x2e4b,	// (0x00087647) blid_firmament_pane_ParamLimits

0x2e8e,	// (0x0008768a) popup_blid_sat_info2_window_g1

0x2eb2,	// (0x000876ae) popup_blid_sat_info2_window_t3

0x2ec0,	// (0x000876bc) popup_blid_sat_info2_window_t4

0x2ece,	// (0x000876ca) popup_blid_sat_info2_window_t5

0x2edc,	// (0x000876d8) popup_blid_sat_info2_window_t6

0x2eec,	// (0x000876e8) popup_blid_sat_info2_window_t7

0x2efa,	// (0x000876f6) popup_blid_sat_info2_window_t8

0x2f08,	// (0x00087704) popup_blid_sat_info2_window_t9

0x2f16,	// (0x00087712) popup_blid_sat_info2_window_t10

0x2fd7,	// (0x000877d3) aid_firma_cardinal_ParamLimits

0x2feb,	// (0x000877e7) blid_firmament_pane_t1_ParamLimits

0x3002,	// (0x000877fe) blid_firmament_pane_t2_ParamLimits

0x3019,	// (0x00087815) blid_firmament_pane_t3_ParamLimits

0x3030,	// (0x0008782c) blid_firmament_pane_t4_ParamLimits

0xf5da,	// (0x00093dd6) blid_firmament_pane_t_ParamLimits

0x3047,	// (0x00087843) blid_sat_info_pane_ParamLimits

0x728b,	// (0x0008ba87) main_cam_set_pane_ParamLimits

0x81d5,	// (0x0008c9d1) aid_size_cell_colour_35_ParamLimits

0x81ef,	// (0x0008c9eb) aid_size_cell_colour_112_ParamLimits

0x8206,	// (0x0008ca02) aid_size_cell_effect_ParamLimits

0xde1d,	// (0x00092619) bg_tb_trans_pane_cp02_ParamLimits

0xebd2,	// (0x000933ce) heading_imed_pane_ParamLimits

0x8220,	// (0x0008ca1c) listscroll_imed_pane_ParamLimits

0x2360,	// (0x00086b5c) popup_call2_audio_first_window_g5_ParamLimits

0x2360,	// (0x00086b5c) popup_call2_audio_first_window_g5

0x8803,	// (0x0008cfff) aid_size_touch_image3_arrow_left_ParamLimits

0x8803,	// (0x0008cfff) aid_size_touch_image3_arrow_left

0x8819,	// (0x0008d015) aid_size_touch_image3_arrow_right_ParamLimits

0x8819,	// (0x0008d015) aid_size_touch_image3_arrow_right

0x9de9,	// (0x0008e5e5) vid4_progress_pane_t3

0x8379,	// (0x0008cb75) main_hwr_training_symbol_option_pane_ParamLimits

0x8379,	// (0x0008cb75) main_hwr_training_symbol_option_pane

0x36d6,	// (0x00087ed2) popup_hwr_training_preview_window_ParamLimits

0x36d6,	// (0x00087ed2) popup_hwr_training_preview_window

0x83da,	// (0x0008cbd6) hwr_training_navi_pane_g5_ParamLimits

0x83da,	// (0x0008cbd6) hwr_training_navi_pane_g5

0xcc40,	// (0x0009143c) popup_char_count_window

0x4857,	// (0x00089053) bg_popup_sub_pane_cp20_ParamLimits

0x9781,	// (0x0008df7d) list_vitu2_match_list_pane_ParamLimits

0x978d,	// (0x0008df89) vitu2_page_scroll_pane_ParamLimits

0x978d,	// (0x0008df89) vitu2_page_scroll_pane

0xd1ba,	// (0x000919b6) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd1ba,	// (0x000919b6) list_single_hwr_training_symbol_option_pane

0xd1cd,	// (0x000919c9) list_single_hwr_training_symbol_option_pane_g1

0xd1d5,	// (0x000919d1) list_single_hwr_training_symbol_option_pane_t1

0xd1e3,	// (0x000919df) bg_button_pane_cp023

0xd1ec,	// (0x000919e8) bg_button_pane_cp024

0xd21f,	// (0x00091a1b) vitu2_page_scroll_pane_g1

0xd227,	// (0x00091a23) vitu2_page_scroll_pane_g2

0x0001,

0xf9b9,	// (0x000941b5) vitu2_page_scroll_pane_g

0xd22f,	// (0x00091a2b) vitu2_page_scroll_pane_t1

0x2dc1,	// (0x000875bd) popup_char_count_window_g1

0xd23e,	// (0x00091a3a) popup_char_count_window_g2

0xd247,	// (0x00091a43) popup_char_count_window_g3

0x0002,

0xf9be,	// (0x000941ba) popup_char_count_window_g

0xd250,	// (0x00091a4c) popup_char_count_window_t1

0x4871,	// (0x0008906d) main_vded2_pane

0x3524,	// (0x00087d20) aid_size_cell_imed_line

0x352e,	// (0x00087d2a) grid_imed_line_width_pane

0x8d13,	// (0x0008d50f) vid4_indicators_pane_g4

0xd25e,	// (0x00091a5a) cell_imed_line_width_pane_ParamLimits

0xd25e,	// (0x00091a5a) cell_imed_line_width_pane

0xd272,	// (0x00091a6e) cell_imed_line_width_pane_g1

0xd27b,	// (0x00091a77) cell_imed_line_width_pane_g2

0x0001,

0xf9c5,	// (0x000941c1) cell_imed_line_width_pane_g

0x9e25,	// (0x0008e621) main_vded2_pane_g1_ParamLimits

0x9e25,	// (0x0008e621) main_vded2_pane_g1

0x9e32,	// (0x0008e62e) main_vded2_pane_g2_ParamLimits

0x9e32,	// (0x0008e62e) main_vded2_pane_g2

0x0001,

0xf9ca,	// (0x000941c6) main_vded2_pane_g_ParamLimits

0xf9ca,	// (0x000941c6) main_vded2_pane_g

0x9e40,	// (0x0008e63c) vded2_slider_pane_ParamLimits

0x9e40,	// (0x0008e63c) vded2_slider_pane

0x9e4d,	// (0x0008e649) aid_size_touch_vded2_end

0x9e57,	// (0x0008e653) aid_size_touch_vded2_playhead

0xd283,	// (0x00091a7f) aid_size_touch_vded2_start

0xd28b,	// (0x00091a87) vded2_slider_bg_pane

0xd294,	// (0x00091a90) vded2_slider_pane_g1

0xd29d,	// (0x00091a99) vded2_slider_pane_g2

0x9e5f,	// (0x0008e65b) vded2_slider_pane_g3

0x0002,

0xf9cf,	// (0x000941cb) vded2_slider_pane_g

0xd2a5,	// (0x00091aa1) vded2_slider_bg_pane_g1

0xd2ae,	// (0x00091aaa) vded2_slider_bg_pane_g2

0xd2b7,	// (0x00091ab3) vded2_slider_bg_pane_g3

0x0002,

0xf9d6,	// (0x000941d2) vded2_slider_bg_pane_g

0x6bd0,	// (0x0008b3cc) aid_postcard_touch_down_pane_ParamLimits

0x6bd0,	// (0x0008b3cc) aid_postcard_touch_down_pane

0x6be0,	// (0x0008b3dc) aid_postcard_touch_up_pane_ParamLimits

0x6be0,	// (0x0008b3dc) aid_postcard_touch_up_pane

0x4871,	// (0x0008906d) main_blid2_pane

0x72b4,	// (0x0008bab0) popup_blid2_search_window

0xdc3b,	// (0x00092437) blid2_gps_pane

0xdc3b,	// (0x00092437) blid2_navig_pane

0xdc3b,	// (0x00092437) blid2_search_pane

0xdc3b,	// (0x00092437) blid2_tripm_pane

0x9e68,	// (0x0008e664) blid2_search_pane_g1_ParamLimits

0x9e68,	// (0x0008e664) blid2_search_pane_g1

0x9e78,	// (0x0008e674) blid2_search_pane_t1_ParamLimits

0x9e78,	// (0x0008e674) blid2_search_pane_t1

0x9e8a,	// (0x0008e686) aid_size_cell_blid2_gps_ParamLimits

0x9e8a,	// (0x0008e686) aid_size_cell_blid2_gps

0x9e9a,	// (0x0008e696) blid2_gps_pane_g1_ParamLimits

0x9e9a,	// (0x0008e696) blid2_gps_pane_g1

0x9ea6,	// (0x0008e6a2) grid_blid2_satellite_pane_ParamLimits

0x9ea6,	// (0x0008e6a2) grid_blid2_satellite_pane

0x9eb6,	// (0x0008e6b2) blid2_navig_pane_g1_ParamLimits

0x9eb6,	// (0x0008e6b2) blid2_navig_pane_g1

0x9ec2,	// (0x0008e6be) blid2_navig_pane_t1_ParamLimits

0x9ec2,	// (0x0008e6be) blid2_navig_pane_t1

0x9ed4,	// (0x0008e6d0) blid2_navig_pane_t2_ParamLimits

0x9ed4,	// (0x0008e6d0) blid2_navig_pane_t2

0x0001,

0xf9dd,	// (0x000941d9) blid2_navig_pane_t_ParamLimits

0xf9dd,	// (0x000941d9) blid2_navig_pane_t

0x9ee6,	// (0x0008e6e2) blid2_navig_ring_pane_ParamLimits

0x9ee6,	// (0x0008e6e2) blid2_navig_ring_pane

0x9ef6,	// (0x0008e6f2) blid2_speed_pane_ParamLimits

0x9ef6,	// (0x0008e6f2) blid2_speed_pane

0x9f02,	// (0x0008e6fe) blid2_tripm_pane_g1_ParamLimits

0x9f02,	// (0x0008e6fe) blid2_tripm_pane_g1

0x9f12,	// (0x0008e70e) blid2_tripm_pane_g2_ParamLimits

0x9f12,	// (0x0008e70e) blid2_tripm_pane_g2

0x9f1e,	// (0x0008e71a) blid2_tripm_pane_g3_ParamLimits

0x9f1e,	// (0x0008e71a) blid2_tripm_pane_g3

0x9f2a,	// (0x0008e726) blid2_tripm_pane_g4_ParamLimits

0x9f2a,	// (0x0008e726) blid2_tripm_pane_g4

0x9f36,	// (0x0008e732) blid2_tripm_pane_g5_ParamLimits

0x9f36,	// (0x0008e732) blid2_tripm_pane_g5

0x0005,

0xf9e2,	// (0x000941de) blid2_tripm_pane_g_ParamLimits

0xf9e2,	// (0x000941de) blid2_tripm_pane_g

0x9f52,	// (0x0008e74e) blid2_tripm_pane_t1_ParamLimits

0x9f52,	// (0x0008e74e) blid2_tripm_pane_t1

0x9f66,	// (0x0008e762) blid2_tripm_pane_t2_ParamLimits

0x9f66,	// (0x0008e762) blid2_tripm_pane_t2

0x9f78,	// (0x0008e774) blid2_tripm_pane_t3_ParamLimits

0x9f78,	// (0x0008e774) blid2_tripm_pane_t3

0x0003,

0xf9ef,	// (0x000941eb) blid2_tripm_pane_t_ParamLimits

0xf9ef,	// (0x000941eb) blid2_tripm_pane_t

0x9faa,	// (0x0008e7a6) cell_blid2_satellite_pane_ParamLimits

0x9faa,	// (0x0008e7a6) cell_blid2_satellite_pane

0x9fc4,	// (0x0008e7c0) cell_blid2_satellite_pane_g1

0xd2c0,	// (0x00091abc) cell_blid2_satellite_pane_t1

0xe37a,	// (0x00092b76) blid2_speed_pane_g1

0xd2ce,	// (0x00091aca) blid2_speed_pane_t1

0xd2dc,	// (0x00091ad8) blid2_speed_pane_t2

0x0001,

0xf9f8,	// (0x000941f4) blid2_speed_pane_t

0xe37a,	// (0x00092b76) blid2_navig_ring_pane_g1

0x9fcd,	// (0x0008e7c9) blid2_navig_ring_pane_g2

0x9fd5,	// (0x0008e7d1) blid2_navig_ring_pane_g3

0x9fdd,	// (0x0008e7d9) blid2_navig_ring_pane_g4

0x9fe5,	// (0x0008e7e1) blid2_navig_ring_pane_g5

0x0004,

0xf9fd,	// (0x000941f9) blid2_navig_ring_pane_g

0xdc3b,	// (0x00092437) bg_popup_window_pane_cp011

0xd2ea,	// (0x00091ae6) popup_blid2_search_window_g1

0xd2f2,	// (0x00091aee) popup_blid2_search_window_t1

0xd300,	// (0x00091afc) popup_blid2_search_window_t2

0x0001,

0xfa08,	// (0x00094204) popup_blid2_search_window_t

0xe701,	// (0x00092efd) main_browser_pane_g1

0xe3d8,	// (0x00092bd4) main_browser_pane_ParamLimits

0x728b,	// (0x0008ba87) bg_button_pane_cp011_ParamLimits

0x907f,	// (0x0008d87b) cell_vitu2_function_pane_g1_ParamLimits

0x1993,	// (0x0008618f) bg_popup_sub_pane_cp22_ParamLimits

0x9917,	// (0x0008e113) input_focus_pane_cp08_ParamLimits

0x9932,	// (0x0008e12e) popup_vitu2_query_button_pane_ParamLimits

0x9932,	// (0x0008e12e) popup_vitu2_query_button_pane

0x9941,	// (0x0008e13d) popup_vitu2_query_input_button_pane

0xcee1,	// (0x000916dd) popup_vitu2_query_window_g1_ParamLimits

0x994b,	// (0x0008e147) popup_vitu2_query_window_g2_ParamLimits

0xf909,	// (0x00094105) popup_vitu2_query_window_g_ParamLimits

0xdc3b,	// (0x00092437) bg_button_pane_cp026

0x9fed,	// (0x0008e7e9) popup_vitu2_query_input_button_pane_g1

0xdc3b,	// (0x00092437) bg_button_pane_cp025

0xd30e,	// (0x00091b0a) popup_vitu2_query_button_pane_t1

0x7788,	// (0x0008bf84) main_mp3_pane_t6

0x7798,	// (0x0008bf94) popup_slider_window_cp01

0x8bf0,	// (0x0008d3ec) cam4_battery_pane

0x8cd0,	// (0x0008d4cc) cam4_battery_pane_cp02

0x9d6c,	// (0x0008e568) cam4_battery_pane_cp01

0x9d6c,	// (0x0008e568) cam4_battery_pane_cp03

0x31f2,	// (0x000879ee) cam4_battery_pane_g1

0xe37a,	// (0x00092b76) cam4_battery_pane_g2

0x0001,

0xfa0d,	// (0x00094209) cam4_battery_pane_g

0x2f24,	// (0x00087720) popup_blid_sat_info2_window_t11

0xee2d,	// (0x00093629) aid_size_touch_mv_arrow_left_ParamLimits

0xee56,	// (0x00093652) aid_size_touch_mv_arrow_right_ParamLimits

0xeeb4,	// (0x000936b0) navi_pane_g1_ParamLimits

0xeec0,	// (0x000936bc) navi_pane_g2_ParamLimits

0xeeee,	// (0x000936ea) navi_pane_g3_ParamLimits

0xf311,	// (0x00093b0d) navi_pane_g_ParamLimits

0x6778,	// (0x0008af74) navi_pane_mv_t1_ParamLimits

0x822c,	// (0x0008ca28) grid_imed_effect_pane_ParamLimits

0x5293,	// (0x00089a8f) aid_placing_vt_slider_lsc

0xe647,	// (0x00092e43) aid_placing_vt_slider_prt

0xde1d,	// (0x00092619) bg_tb_trans_pane_cp01_ParamLimits

0x31a4,	// (0x000879a0) popup_image_details_window_g1_ParamLimits

0x31b7,	// (0x000879b3) popup_image_details_window_g2_ParamLimits

0x31cc,	// (0x000879c8) popup_image_details_window_g3_ParamLimits

0x31cc,	// (0x000879c8) popup_image_details_window_g3

0xf61a,	// (0x00093e16) popup_image_details_window_g_ParamLimits

0x31e0,	// (0x000879dc) popup_image_details_window_t1_ParamLimits

0x31fc,	// (0x000879f8) popup_image_details_window_t2_ParamLimits

0x3215,	// (0x00087a11) popup_image_details_window_t3_ParamLimits

0x3229,	// (0x00087a25) popup_image_details_window_t4_ParamLimits

0x3244,	// (0x00087a40) popup_image_details_window_t5_ParamLimits

0xf621,	// (0x00093e1d) popup_image_details_window_t_ParamLimits

0x9c90,	// (0x0008e48c) cl_header_name_pane_ParamLimits

0x9c90,	// (0x0008e48c) cl_header_name_pane

0x9ff5,	// (0x0008e7f1) cl_header_name_pane_t1_ParamLimits

0x9ff5,	// (0x0008e7f1) cl_header_name_pane_t1

0xa00c,	// (0x0008e808) cl_header_name_pane_t2_ParamLimits

0xa00c,	// (0x0008e808) cl_header_name_pane_t2

0xa036,	// (0x0008e832) cl_header_name_pane_t3_ParamLimits

0xa036,	// (0x0008e832) cl_header_name_pane_t3

0x0002,

0xfa12,	// (0x0009420e) cl_header_name_pane_t_ParamLimits

0xfa12,	// (0x0009420e) cl_header_name_pane_t

0xef7d,	// (0x00093779) navi_pane_mv_g2_ParamLimits

0xcc0b,	// (0x00091407) field_vitu2_entry_pane_g1_ParamLimits

0xcc17,	// (0x00091413) field_vitu2_entry_pane_g2_ParamLimits

0x2340,	// (0x00086b3c) field_vitu2_entry_pane_g3_ParamLimits

0x2340,	// (0x00086b3c) field_vitu2_entry_pane_g3

0xf812,	// (0x0009400e) field_vitu2_entry_pane_g_ParamLimits

0x8f45,	// (0x0008d741) cell_vitu2_itu_pane_g1_ParamLimits

0x8f5d,	// (0x0008d759) cell_vitu2_itu_pane_g2_ParamLimits

0x8f5d,	// (0x0008d759) cell_vitu2_itu_pane_g2

0x0001,

0xf81e,	// (0x0009401a) cell_vitu2_itu_pane_g_ParamLimits

0xf81e,	// (0x0009401a) cell_vitu2_itu_pane_g

0x728b,	// (0x0008ba87) bg_vkb2_func_pane_cp05_ParamLimits

0x728b,	// (0x0008ba87) bg_vkb2_func_pane_cp05

0x728b,	// (0x0008ba87) bg_vkb2_func_pane_cp03

0x728b,	// (0x0008ba87) bg_vkb2_func_pane_cp04

0x728b,	// (0x0008ba87) bg_vkb2_func_pane_cp10_ParamLimits

0x728b,	// (0x0008ba87) bg_vkb2_func_pane_cp10

0x9c32,	// (0x0008e42e) bg_vkb2_func_pane_cp08

0x98ff,	// (0x0008e0fb) bg_vkb2_func_pane_cp06

0x9c15,	// (0x0008e411) bg_vkb2_func_pane_cp07

0xd1f5,	// (0x000919f1) bg_vkb2_func_pane_cp11_ParamLimits

0xd1f5,	// (0x000919f1) bg_vkb2_func_pane_cp11

0xd20a,	// (0x00091a06) bg_vkb2_func_pane_cp12_ParamLimits

0xd20a,	// (0x00091a06) bg_vkb2_func_pane_cp12

0xdc3b,	// (0x00092437) bg_vkb2_func_pane_cp09

0xcc52,	// (0x0009144e) bg_vkb2_func_pane_g1

0xe812,	// (0x0009300e) bg_vkb2_func_pane_g2

0xcc5a,	// (0x00091456) bg_vkb2_func_pane_g3

0xcc62,	// (0x0009145e) bg_vkb2_func_pane_g4

0xcea6,	// (0x000916a2) bg_vkb2_func_pane_g5

0xcc7a,	// (0x00091476) bg_vkb2_func_pane_g6

0xcc82,	// (0x0009147e) bg_vkb2_func_pane_g7

0xcc72,	// (0x0009146e) bg_vkb2_func_pane_g8

0xe7f2,	// (0x00092fee) bg_vkb2_func_pane_g9

0x0008,

0xfa19,	// (0x00094215) bg_vkb2_func_pane_g

0x9f44,	// (0x0008e740) blid2_tripm_pane_g6_ParamLimits

0x9f44,	// (0x0008e740) blid2_tripm_pane_g6

0xcb43,	// (0x0009133f) mp4_progress_pane_g1

0x9f9e,	// (0x0008e79a) blid2_tripm_values_pane_ParamLimits

0x9f9e,	// (0x0008e79a) blid2_tripm_values_pane

0xa05b,	// (0x0008e857) blid2_tripm_values_pane_t1

0xa069,	// (0x0008e865) blid2_tripm_values_pane_t2

0xa077,	// (0x0008e873) blid2_tripm_values_pane_t3

0xa085,	// (0x0008e881) blid2_tripm_values_pane_t4

0xa093,	// (0x0008e88f) blid2_tripm_values_pane_t5

0xa0a1,	// (0x0008e89d) blid2_tripm_values_pane_t6

0xa0af,	// (0x0008e8ab) blid2_tripm_values_pane_t7

0xa0bd,	// (0x0008e8b9) blid2_tripm_values_pane_t8

0xa0cb,	// (0x0008e8c7) blid2_tripm_values_pane_t9

0x0008,

0xfa2c,	// (0x00094228) blid2_tripm_values_pane_t

0x52d3,	// (0x00089acf) call_video_pane_t1_ParamLimits

0x52f4,	// (0x00089af0) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x000939b6) call_video_pane_t_ParamLimits

0x6a89,	// (0x0008b285) msg_header_pane_g1_ParamLimits

0x1a4a,	// (0x00086246) msg_header_pane_g2_ParamLimits

0x1a4a,	// (0x00086246) msg_header_pane_g2

0x0001,

0xf3af,	// (0x00093bab) msg_header_pane_g_ParamLimits

0xf3af,	// (0x00093bab) msg_header_pane_g

0xe3d8,	// (0x00092bd4) main_clock2_pane_ParamLimits

0x7fa6,	// (0x0008c7a2) grid_clock2_toolbar_pane_ParamLimits

0x7fa6,	// (0x0008c7a2) grid_clock2_toolbar_pane

0x7fa6,	// (0x0008c7a2) listscroll_clock2_pane_ParamLimits

0x7fa6,	// (0x0008c7a2) listscroll_clock2_pane

0x8056,	// (0x0008c852) main_clock2_pane_t3_ParamLimits

0x8056,	// (0x0008c852) main_clock2_pane_t3

0x8068,	// (0x0008c864) main_clock2_pane_t4_ParamLimits

0x8068,	// (0x0008c864) main_clock2_pane_t4

0xd31c,	// (0x00091b18) cell_clock2_toolbar_pane

0xd324,	// (0x00091b20) cell_clock2_toolbar_pane_cp01

0xd324,	// (0x00091b20) cell_clock2_toolbar_pane_cp02

0xd32c,	// (0x00091b28) cell_clock2_toolbar_pane_cp03

0xd334,	// (0x00091b30) list_clock2_pane

0xeda3,	// (0x0009359f) scroll_pane_cp10

0xd33c,	// (0x00091b38) list_single_clock2_pane_ParamLimits

0xd33c,	// (0x00091b38) list_single_clock2_pane

0xe5f0,	// (0x00092dec) list_highlight_pane_cp08

0xd349,	// (0x00091b45) list_single_clock2_pane_t1

0xd357,	// (0x00091b53) list_single_clock2_pane_t2

0x0001,

0xfa3f,	// (0x0009423b) list_single_clock2_pane_t

0xdc3b,	// (0x00092437) bg_button_pane_cp10

0xd365,	// (0x00091b61) cell_clock2_toolbar_pane_g1

0x6b3e,	// (0x0008b33a) aid_main_viewer_pane_g1_ParamLimits

0x6b3e,	// (0x0008b33a) aid_main_viewer_pane_g1

0x6b4a,	// (0x0008b346) aid_main_viewer_pane_g2_ParamLimits

0x6b4a,	// (0x0008b346) aid_main_viewer_pane_g2

0x6b56,	// (0x0008b352) aid_main_viewer_pane_g3_ParamLimits

0x6b56,	// (0x0008b352) aid_main_viewer_pane_g3

0x6b67,	// (0x0008b363) aid_main_viewer_pane_g4_ParamLimits

0x6b67,	// (0x0008b363) aid_main_viewer_pane_g4

0x0003,

0xf3c0,	// (0x00093bbc) aid_main_viewer_pane_g_ParamLimits

0xf3c0,	// (0x00093bbc) aid_main_viewer_pane_g

0x727e,	// (0x0008ba7a) main_calc_pane_ParamLimits

0x7299,	// (0x0008ba95) main_dialer2_pane_ParamLimits

0x4871,	// (0x0008906d) main_cam6_pane

0x4871,	// (0x0008906d) main_vid6_pane

0x7fb2,	// (0x0008c7ae) listscroll_gen_pane_cp06_ParamLimits

0x7fb2,	// (0x0008c7ae) listscroll_gen_pane_cp06

0x807a,	// (0x0008c876) main_clock2_pane_t5_ParamLimits

0x807a,	// (0x0008c876) main_clock2_pane_t5

0x80c7,	// (0x0008c8c3) aid_call2_pane_cp10_ParamLimits

0x80d9,	// (0x0008c8d5) aid_call_pane_cp10_ParamLimits

0xee21,	// (0x0009361d) popup_clock_analogue_window_cp10_g1_ParamLimits

0xee21,	// (0x0009361d) popup_clock_analogue_window_cp10_g2_ParamLimits

0x80eb,	// (0x0008c8e7) popup_clock_analogue_window_cp10_g3_ParamLimits

0x80eb,	// (0x0008c8e7) popup_clock_analogue_window_cp10_g4_ParamLimits

0xee21,	// (0x0009361d) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6d6,	// (0x00093ed2) popup_clock_analogue_window_cp10_g_ParamLimits

0x8101,	// (0x0008c8fd) popup_clock_analogue_window_cp10_t1_ParamLimits

0xcbbc,	// (0x000913b8) cell_dialer2_keypad_pane_g2_ParamLimits

0xcbbc,	// (0x000913b8) cell_dialer2_keypad_pane_g2

0x0001,

0xf7b1,	// (0x00093fad) cell_dialer2_keypad_pane_g_ParamLimits

0xf7b1,	// (0x00093fad) cell_dialer2_keypad_pane_g

0xe384,	// (0x00092b80) cell_dialer2_keypad_pane_t1

0x933d,	// (0x0008db39) main_cset_text2_pane_ParamLimits

0x933d,	// (0x0008db39) main_cset_text2_pane

0xd0c1,	// (0x000918bd) area_vitu2_query_pane_g1_ParamLimits

0x9bb4,	// (0x0008e3b0) area_vitu2_query_pane_g2_ParamLimits

0xf95c,	// (0x00094158) area_vitu2_query_pane_g_ParamLimits

0xd145,	// (0x00091941) area_vitu2_query_pane_t7_ParamLimits

0xd145,	// (0x00091941) area_vitu2_query_pane_t7

0x98ff,	// (0x0008e0fb) bg_button_pane_cp018_ParamLimits

0x9c15,	// (0x0008e411) bg_button_pane_cp021_ParamLimits

0x9c21,	// (0x0008e41d) bg_button_pane_cp022_ParamLimits

0x9c32,	// (0x0008e42e) bg_vkb2_func_pane_cp08_ParamLimits

0x98ff,	// (0x0008e0fb) bg_vkb2_func_pane_cp06_ParamLimits

0x9c15,	// (0x0008e411) bg_vkb2_func_pane_cp07_ParamLimits

0x9c44,	// (0x0008e440) input_focus_pane_cp09_ParamLimits

0xa0d9,	// (0x0008e8d5) cam6_autofocus_pane_ParamLimits

0xa0d9,	// (0x0008e8d5) cam6_autofocus_pane

0xa0f5,	// (0x0008e8f1) cam6_image_uncrop_pane_ParamLimits

0xa0f5,	// (0x0008e8f1) cam6_image_uncrop_pane

0xa12e,	// (0x0008e92a) cam6_indi_pane_ParamLimits

0xa12e,	// (0x0008e92a) cam6_indi_pane

0xa148,	// (0x0008e944) cam6_mode_pane_ParamLimits

0xa148,	// (0x0008e944) cam6_mode_pane

0xa15c,	// (0x0008e958) cam6_timer_pane_ParamLimits

0xa15c,	// (0x0008e958) cam6_timer_pane

0xa170,	// (0x0008e96c) cam6_zoom_pane_ParamLimits

0xa170,	// (0x0008e96c) cam6_zoom_pane

0xa18b,	// (0x0008e987) cam6_mode_pane_g1_ParamLimits

0xa18b,	// (0x0008e987) cam6_mode_pane_g1

0xa197,	// (0x0008e993) cam6_mode_pane_g2_ParamLimits

0xa197,	// (0x0008e993) cam6_mode_pane_g2

0xa1a3,	// (0x0008e99f) cam6_mode_pane_g3_ParamLimits

0xa1a3,	// (0x0008e99f) cam6_mode_pane_g3

0xa1af,	// (0x0008e9ab) cam6_mode_pane_g4_ParamLimits

0xa1af,	// (0x0008e9ab) cam6_mode_pane_g4

0x0003,

0xfa44,	// (0x00094240) cam6_mode_pane_g_ParamLimits

0xfa44,	// (0x00094240) cam6_mode_pane_g

0xcb9c,	// (0x00091398) bg_tb_trans_pane_cp08_ParamLimits

0xcb9c,	// (0x00091398) bg_tb_trans_pane_cp08

0xd36d,	// (0x00091b69) cam6_battery_pane_ParamLimits

0xd36d,	// (0x00091b69) cam6_battery_pane

0xd383,	// (0x00091b7f) cam6_indi_pane_g1_ParamLimits

0xd383,	// (0x00091b7f) cam6_indi_pane_g1

0xd395,	// (0x00091b91) cam6_indi_pane_g2_ParamLimits

0xd395,	// (0x00091b91) cam6_indi_pane_g2

0xd3a7,	// (0x00091ba3) cam6_indi_pane_g3_ParamLimits

0xd3a7,	// (0x00091ba3) cam6_indi_pane_g3

0x0002,

0xfa4d,	// (0x00094249) cam6_indi_pane_g_ParamLimits

0xfa4d,	// (0x00094249) cam6_indi_pane_g

0xd3b9,	// (0x00091bb5) cam6_indi_pane_t1_ParamLimits

0xd3b9,	// (0x00091bb5) cam6_indi_pane_t1

0x8d50,	// (0x0008d54c) cam6_autofocus_pane_g1

0x8d48,	// (0x0008d544) cam6_autofocus_pane_g2

0x8d60,	// (0x0008d55c) cam6_autofocus_pane_g3

0x8d58,	// (0x0008d554) cam6_autofocus_pane_g4

0x0003,

0xfa54,	// (0x00094250) cam6_autofocus_pane_g

0xd3df,	// (0x00091bdb) cam6_timer_pane_g1

0xd3e7,	// (0x00091be3) cam6_timer_pane_t1

0xd3f5,	// (0x00091bf1) cam6_zoom_cont_pane

0xd3fd,	// (0x00091bf9) cam6_zoom_pane_g1

0xd406,	// (0x00091c02) cam6_zoom_pane_g2

0xa1bb,	// (0x0008e9b7) cam6_zoom_pane_g3

0x0002,

0xfa5d,	// (0x00094259) cam6_zoom_pane_g

0xe37a,	// (0x00092b76) cam6_battery_pane_g1

0xe37a,	// (0x00092b76) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x00093888) cam6_battery_pane_g

0xd3fd,	// (0x00091bf9) cam6_zoom_cont_pane_g1

0xd406,	// (0x00091c02) cam6_zoom_cont_pane_g2

0xd40f,	// (0x00091c0b) cam6_zoom_cont_pane_g3

0x0002,

0xfa64,	// (0x00094260) cam6_zoom_cont_pane_g

0xa1d9,	// (0x0008e9d5) cam6_mode_pane_cp_ParamLimits

0xa1d9,	// (0x0008e9d5) cam6_mode_pane_cp

0xa1ed,	// (0x0008e9e9) cam6_zoom_pane_cp_ParamLimits

0xa1ed,	// (0x0008e9e9) cam6_zoom_pane_cp

0xa205,	// (0x0008ea01) vid6_image_uncrop_cif_pane_ParamLimits

0xa205,	// (0x0008ea01) vid6_image_uncrop_cif_pane

0xa231,	// (0x0008ea2d) vid6_image_uncrop_nhd_pane_ParamLimits

0xa231,	// (0x0008ea2d) vid6_image_uncrop_nhd_pane

0xa24e,	// (0x0008ea4a) vid6_image_uncrop_vga_pane_ParamLimits

0xa24e,	// (0x0008ea4a) vid6_image_uncrop_vga_pane

0xa26d,	// (0x0008ea69) vid6_image_uncrop_wvga_pane_ParamLimits

0xa26d,	// (0x0008ea69) vid6_image_uncrop_wvga_pane

0xa28a,	// (0x0008ea86) vid6_indi_pane_ParamLimits

0xa28a,	// (0x0008ea86) vid6_indi_pane

0xcb9c,	// (0x00091398) bg_tb_trans_pane_cp09_ParamLimits

0xcb9c,	// (0x00091398) bg_tb_trans_pane_cp09

0xd427,	// (0x00091c23) cam6_battery_pane_cp_ParamLimits

0xd427,	// (0x00091c23) cam6_battery_pane_cp

0xd433,	// (0x00091c2f) vid6_indi_pane_g1_ParamLimits

0xd433,	// (0x00091c2f) vid6_indi_pane_g1

0xd445,	// (0x00091c41) vid6_indi_pane_g2_ParamLimits

0xd445,	// (0x00091c41) vid6_indi_pane_g2

0xd457,	// (0x00091c53) vid6_indi_pane_g3_ParamLimits

0xd457,	// (0x00091c53) vid6_indi_pane_g3

0xd46c,	// (0x00091c68) vid6_indi_pane_g4_ParamLimits

0xd46c,	// (0x00091c68) vid6_indi_pane_g4

0xd481,	// (0x00091c7d) vid6_indi_pane_g5_ParamLimits

0xd481,	// (0x00091c7d) vid6_indi_pane_g5

0x0004,

0xfa6b,	// (0x00094267) vid6_indi_pane_g_ParamLimits

0xfa6b,	// (0x00094267) vid6_indi_pane_g

0xd49b,	// (0x00091c97) vid6_indi_pane_t1_ParamLimits

0xd49b,	// (0x00091c97) vid6_indi_pane_t1

0xd4b1,	// (0x00091cad) vid6_indi_pane_t2_ParamLimits

0xd4b1,	// (0x00091cad) vid6_indi_pane_t2

0xd4d9,	// (0x00091cd5) vid6_indi_pane_t3_ParamLimits

0xd4d9,	// (0x00091cd5) vid6_indi_pane_t3

0xd501,	// (0x00091cfd) vid6_indi_pane_t4_ParamLimits

0xd501,	// (0x00091cfd) vid6_indi_pane_t4

0x0003,

0xfa76,	// (0x00094272) vid6_indi_pane_t_ParamLimits

0xfa76,	// (0x00094272) vid6_indi_pane_t

0xd525,	// (0x00091d21) wait_bar_pane_cp08

0xa2af,	// (0x0008eaab) main_cset_text2_pane_t1_ParamLimits

0xa2af,	// (0x0008eaab) main_cset_text2_pane_t1

0xa1c4,	// (0x0008e9c0) listscroll_gen_pane_cp06_t1_ParamLimits

0xa1c4,	// (0x0008e9c0) listscroll_gen_pane_cp06_t1

0x4871,	// (0x0008906d) main_cam6_set_pane

0x0829,	// (0x00085025) bg_tb_trans_pane_cp06_ParamLimits

0x8bf8,	// (0x0008d3f4) cam4_indicators_pane_g1_ParamLimits

0x8c09,	// (0x0008d405) cam4_indicators_pane_g2_ParamLimits

0xf7ee,	// (0x00093fea) cam4_indicators_pane_g_ParamLimits

0x8c27,	// (0x0008d423) cam4_indicators_pane_t1_ParamLimits

0x728b,	// (0x0008ba87) bg_tb_trans_pane_cp07_ParamLimits

0x8cda,	// (0x0008d4d6) vid4_indicators_pane_g1_ParamLimits

0x8cee,	// (0x0008d4ea) vid4_indicators_pane_g2_ParamLimits

0x8d02,	// (0x0008d4fe) vid4_indicators_pane_g3_ParamLimits

0x8d13,	// (0x0008d50f) vid4_indicators_pane_g4_ParamLimits

0xf800,	// (0x00093ffc) vid4_indicators_pane_g_ParamLimits

0x8d31,	// (0x0008d52d) vid4_indicators_pane_t1_ParamLimits

0x9d74,	// (0x0008e570) vid4_progress_pane_g1_ParamLimits

0x9d84,	// (0x0008e580) vid4_progress_pane_g2_ParamLimits

0x9d94,	// (0x0008e590) vid4_progress_pane_g3_ParamLimits

0x9da6,	// (0x0008e5a2) vid4_progress_pane_g4_ParamLimits

0xf9a7,	// (0x000941a3) vid4_progress_pane_g_ParamLimits

0x9dbe,	// (0x0008e5ba) vid4_progress_pane_t1_ParamLimits

0x9dd4,	// (0x0008e5d0) vid4_progress_pane_t2_ParamLimits

0x9de9,	// (0x0008e5e5) vid4_progress_pane_t3_ParamLimits

0xf9b2,	// (0x000941ae) vid4_progress_pane_t_ParamLimits

0x9dfe,	// (0x0008e5fa) wait_bar_pane_cp07_ParamLimits

0xa2e2,	// (0x0008eade) main_cam6_set_pane_g2_ParamLimits

0xa2e2,	// (0x0008eade) main_cam6_set_pane_g2

0xa2ee,	// (0x0008eaea) main_cset6_listscroll_pane_ParamLimits

0xa2ee,	// (0x0008eaea) main_cset6_listscroll_pane

0xa319,	// (0x0008eb15) main_cset6_slider_pane_ParamLimits

0xa319,	// (0x0008eb15) main_cset6_slider_pane

0xa325,	// (0x0008eb21) main_cset6_text2_pane_ParamLimits

0xa325,	// (0x0008eb21) main_cset6_text2_pane

0xd534,	// (0x00091d30) main_cset6_text_pane

0xd53c,	// (0x00091d38) main_cset_list_pane_copy1_ParamLimits

0xd53c,	// (0x00091d38) main_cset_list_pane_copy1

0xd54c,	// (0x00091d48) scroll_pane_cp028_copy1

0xa338,	// (0x0008eb34) cset_list_set_pane_copy1

0xa34b,	// (0x0008eb47) aid_position_infowindow_above_copy1

0xa353,	// (0x0008eb4f) aid_position_infowindow_below_copy1

0xa35b,	// (0x0008eb57) cset_list_set_pane_g1_copy1

0x04ce,	// (0x00084cca) cset_list_set_pane_g3_copy1_ParamLimits

0x04ce,	// (0x00084cca) cset_list_set_pane_g3_copy1

0x04dd,	// (0x00084cd9) cset_list_set_pane_t1_copy1_ParamLimits

0x04dd,	// (0x00084cd9) cset_list_set_pane_t1_copy1

0xde1d,	// (0x00092619) list_highlight_pane_cp021_copy1_ParamLimits

0xde1d,	// (0x00092619) list_highlight_pane_cp021_copy1

0xd555,	// (0x00091d51) cset6_slider_pane_ParamLimits

0xd555,	// (0x00091d51) cset6_slider_pane

0xd581,	// (0x00091d7d) main_cset6_slider_pane_g1_ParamLimits

0xd581,	// (0x00091d7d) main_cset6_slider_pane_g1

0xa363,	// (0x0008eb5f) main_cset6_slider_pane_g2_ParamLimits

0xa363,	// (0x0008eb5f) main_cset6_slider_pane_g2

0xd5a9,	// (0x00091da5) main_cset6_slider_pane_g3_ParamLimits

0xd5a9,	// (0x00091da5) main_cset6_slider_pane_g3

0xa38b,	// (0x0008eb87) main_cset6_slider_pane_g4_ParamLimits

0xa38b,	// (0x0008eb87) main_cset6_slider_pane_g4

0xa397,	// (0x0008eb93) main_cset6_slider_pane_g5_ParamLimits

0xa397,	// (0x0008eb93) main_cset6_slider_pane_g5

0xcda7,	// (0x000915a3) main_cset6_slider_pane_g7_ParamLimits

0xcda7,	// (0x000915a3) main_cset6_slider_pane_g7

0xcdb3,	// (0x000915af) main_cset6_slider_pane_g8_ParamLimits

0xcdb3,	// (0x000915af) main_cset6_slider_pane_g8

0xa3a5,	// (0x0008eba1) main_cset6_slider_pane_g9_ParamLimits

0xa3a5,	// (0x0008eba1) main_cset6_slider_pane_g9

0xa3b1,	// (0x0008ebad) main_cset6_slider_pane_g10_ParamLimits

0xa3b1,	// (0x0008ebad) main_cset6_slider_pane_g10

0xa3bd,	// (0x0008ebb9) main_cset6_slider_pane_g11_ParamLimits

0xa3bd,	// (0x0008ebb9) main_cset6_slider_pane_g11

0xa3c9,	// (0x0008ebc5) main_cset6_slider_pane_g12_ParamLimits

0xa3c9,	// (0x0008ebc5) main_cset6_slider_pane_g12

0xa3d5,	// (0x0008ebd1) main_cset6_slider_pane_g13_ParamLimits

0xa3d5,	// (0x0008ebd1) main_cset6_slider_pane_g13

0xa3e1,	// (0x0008ebdd) main_cset6_slider_pane_g14_ParamLimits

0xa3e1,	// (0x0008ebdd) main_cset6_slider_pane_g14

0xa3ed,	// (0x0008ebe9) main_cset6_slider_pane_g15_ParamLimits

0xa3ed,	// (0x0008ebe9) main_cset6_slider_pane_g15

0xa405,	// (0x0008ec01) main_cset6_slider_pane_g16_ParamLimits

0xa405,	// (0x0008ec01) main_cset6_slider_pane_g16

0xa413,	// (0x0008ec0f) main_cset6_slider_pane_g17_ParamLimits

0xa413,	// (0x0008ec0f) main_cset6_slider_pane_g17

0x0011,

0xfa7f,	// (0x0009427b) main_cset6_slider_pane_g_ParamLimits

0xfa7f,	// (0x0009427b) main_cset6_slider_pane_g

0xd5b5,	// (0x00091db1) main_cset6_slider_pane_t1_ParamLimits

0xd5b5,	// (0x00091db1) main_cset6_slider_pane_t1

0xa439,	// (0x0008ec35) main_cset6_slider_pane_t2_ParamLimits

0xa439,	// (0x0008ec35) main_cset6_slider_pane_t2

0xa464,	// (0x0008ec60) main_cset6_slider_pane_t3_ParamLimits

0xa464,	// (0x0008ec60) main_cset6_slider_pane_t3

0xa48f,	// (0x0008ec8b) main_cset6_slider_pane_t4_ParamLimits

0xa48f,	// (0x0008ec8b) main_cset6_slider_pane_t4

0xa4ba,	// (0x0008ecb6) main_cset6_slider_pane_t5_ParamLimits

0xa4ba,	// (0x0008ecb6) main_cset6_slider_pane_t5

0xd5f6,	// (0x00091df2) main_cset6_slider_pane_t7_ParamLimits

0xd5f6,	// (0x00091df2) main_cset6_slider_pane_t7

0xa4e7,	// (0x0008ece3) main_cset6_slider_pane_t8_ParamLimits

0xa4e7,	// (0x0008ece3) main_cset6_slider_pane_t8

0xa50b,	// (0x0008ed07) main_cset6_slider_pane_t9_ParamLimits

0xa50b,	// (0x0008ed07) main_cset6_slider_pane_t9

0xa52f,	// (0x0008ed2b) main_cset6_slider_pane_t10_ParamLimits

0xa52f,	// (0x0008ed2b) main_cset6_slider_pane_t10

0xa553,	// (0x0008ed4f) main_cset6_slider_pane_t11_ParamLimits

0xa553,	// (0x0008ed4f) main_cset6_slider_pane_t11

0xd62c,	// (0x00091e28) main_cset6_slider_pane_t14_ParamLimits

0xd62c,	// (0x00091e28) main_cset6_slider_pane_t14

0xd665,	// (0x00091e61) main_cset6_slider_pane_t15_ParamLimits

0xd665,	// (0x00091e61) main_cset6_slider_pane_t15

0x000b,

0xfaa4,	// (0x000942a0) main_cset6_slider_pane_t_ParamLimits

0xfaa4,	// (0x000942a0) main_cset6_slider_pane_t

0xd69e,	// (0x00091e9a) cset_slider_pane_g1_copy1

0xd6a7,	// (0x00091ea3) cset_slider_pane_g2_copy1

0xd6b0,	// (0x00091eac) cset_slider_pane_g3_copy1

0xdc3b,	// (0x00092437) bg_popup_sub_pane_cp011_copy1

0xd6b9,	// (0x00091eb5) main_cset_text_pane_g1_copy1

0xcef5,	// (0x000916f1) main_cset_text_pane_t1_copy1

0xcf03,	// (0x000916ff) main_cset_text_pane_t2_copy1

0xcf11,	// (0x0009170d) main_cset_text_pane_t3_copy1

0xcf1f,	// (0x0009171b) main_cset_text_pane_t4_copy1

0xcf2d,	// (0x00091729) main_cset_text_pane_t5_copy1

0xd6c1,	// (0x00091ebd) main_cset_text_pane_t6_copy1

0xd6cf,	// (0x00091ecb) main_cset_text_pane_t7_copy1

0xa594,	// (0x0008ed90) main_cset_text2_pane_t1_copy1

0x728b,	// (0x0008ba87) main_ncimui_pane

0x72ea,	// (0x0008bae6) popup_query_ncimui_window_ParamLimits

0x72ea,	// (0x0008bae6) popup_query_ncimui_window

0x0042,	// (0x0008483e) field_cale_ev2_pane_g4_ParamLimits

0x0042,	// (0x0008483e) field_cale_ev2_pane_g4

0x84ae,	// (0x0008ccaa) cell_video_dialer_keypad_pane_g2_ParamLimits

0x84ae,	// (0x0008ccaa) cell_video_dialer_keypad_pane_g2

0x0001,

0xf788,	// (0x00093f84) cell_video_dialer_keypad_pane_g_ParamLimits

0xf788,	// (0x00093f84) cell_video_dialer_keypad_pane_g

0x84c6,	// (0x0008ccc2) cell_video_dialer_keypad_pane_t1

0xdc3b,	// (0x00092437) bg_popup_window_pane_cp012

0xec7d,	// (0x00093479) heading_pane_cp06

0xd707,	// (0x00091f03) ncim_query_content_pane

0xdc3b,	// (0x00092437) bg_popup_heading_pane_cp01

0xd70f,	// (0x00091f0b) ncim_heading_pane_t1

0xd71d,	// (0x00091f19) ncim_indicator_popup_pane

0xd72f,	// (0x00091f2b) ncim_query_button_pane

0xd743,	// (0x00091f3f) ncim_query_content_pane_t1

0xd755,	// (0x00091f51) ncim_query_content_pane_t2

0x0005,

0xfae8,	// (0x000942e4) ncim_query_content_pane_t

0xd78f,	// (0x00091f8b) ncim_query_list_pane

0xd7a1,	// (0x00091f9d) ncim_query_popup_pane

0xd71d,	// (0x00091f19) ncim_indicator_popup_pane_ParamLimits

0xa6e7,	// (0x0008eee3) ncim_query_content_pane_g1_ParamLimits

0xa6e7,	// (0x0008eee3) ncim_query_content_pane_g1

0xd743,	// (0x00091f3f) ncim_query_content_pane_t1_ParamLimits

0xd755,	// (0x00091f51) ncim_query_content_pane_t2_ParamLimits

0xa6f3,	// (0x0008eeef) ncim_query_content_pane_t3_ParamLimits

0xa6f3,	// (0x0008eeef) ncim_query_content_pane_t3

0xa710,	// (0x0008ef0c) ncim_query_content_pane_t4_ParamLimits

0xa710,	// (0x0008ef0c) ncim_query_content_pane_t4

0xa72d,	// (0x0008ef29) ncim_query_content_pane_t5_ParamLimits

0xa72d,	// (0x0008ef29) ncim_query_content_pane_t5

0xd767,	// (0x00091f63) ncim_query_content_pane_t6_ParamLimits

0xd767,	// (0x00091f63) ncim_query_content_pane_t6

0xfae8,	// (0x000942e4) ncim_query_content_pane_t_ParamLimits

0xd78f,	// (0x00091f8b) ncim_query_list_pane_ParamLimits

0xd7a1,	// (0x00091f9d) ncim_query_popup_pane_ParamLimits

0xd7b5,	// (0x00091fb1) wait_bar_pane_cp04

0xdc3b,	// (0x00092437) input_focus_pane_cp011

0xd7bd,	// (0x00091fb9) ncim_query_popup_pane_t1

0xd7cb,	// (0x00091fc7) ncim_list_query_list_pane_ParamLimits

0xd7cb,	// (0x00091fc7) ncim_list_query_list_pane

0xdc3b,	// (0x00092437) bg_button_pane_cp027

0xd7d8,	// (0x00091fd4) ncim_query_button_pane_g1

0xdc3b,	// (0x00092437) list_highlight_pane_cp012

0xd7e2,	// (0x00091fde) ncim_list_query_list_pane_g1

0xd7ea,	// (0x00091fe6) ncim_list_query_list_pane_t1

0x8c18,	// (0x0008d414) cam4_indicators_pane_g3_ParamLimits

0x8c18,	// (0x0008d414) cam4_indicators_pane_g3

0x8d1f,	// (0x0008d51b) vid4_indicators_pane_g5_ParamLimits

0x8d1f,	// (0x0008d51b) vid4_indicators_pane_g5

0x9db2,	// (0x0008e5ae) vid4_progress_pane_g5_ParamLimits

0x9db2,	// (0x0008e5ae) vid4_progress_pane_g5

0xa5d3,	// (0x0008edcf) main_ncimui_pane_g1

0xa63b,	// (0x0008ee37) ncimui_group_query_pane_ParamLimits

0xa63b,	// (0x0008ee37) ncimui_group_query_pane

0xa683,	// (0x0008ee7f) ncimui_list_pane_ParamLimits

0xa683,	// (0x0008ee7f) ncimui_list_pane

0xa6aa,	// (0x0008eea6) ncimui_text_pane_ParamLimits

0xa6aa,	// (0x0008eea6) ncimui_text_pane

0xa74a,	// (0x0008ef46) ncimui_text_pane_t1_ParamLimits

0xa74a,	// (0x0008ef46) ncimui_text_pane_t1

0xd7f8,	// (0x00091ff4) ncimui_list_single_graphic_pane_ParamLimits

0xd7f8,	// (0x00091ff4) ncimui_list_single_graphic_pane

0xa769,	// (0x0008ef65) ncimui_query_pane_ParamLimits

0xa769,	// (0x0008ef65) ncimui_query_pane

0xdc3b,	// (0x00092437) list_highlight_pane_cp013

0xd808,	// (0x00092004) ncim_list_query_list_pane_t1_copy1

0xd7e2,	// (0x00091fde) ncim_list_single_graphic_pane_g1

0xa77c,	// (0x0008ef78) ncim_query_button_pane_cp01

0xa788,	// (0x0008ef84) ncim_query_entry_pane_ParamLimits

0xa788,	// (0x0008ef84) ncim_query_entry_pane

0xa79b,	// (0x0008ef97) ncimui_query_pane_g1

0xa7a7,	// (0x0008efa3) ncimui_query_pane_t1_ParamLimits

0xa7a7,	// (0x0008efa3) ncimui_query_pane_t1

0xde1d,	// (0x00092619) input_focus_pane_cp012

0xd816,	// (0x00092012) ncim_query_entry_pane_t1

0xe3d8,	// (0x00092bd4) main_im_pane_ParamLimits

0x728b,	// (0x0008ba87) main_mobtv_pane_ParamLimits

0x728b,	// (0x0008ba87) main_mobtv_pane

0xa421,	// (0x0008ec1d) main_cset6_slider_pane_g18_ParamLimits

0xa421,	// (0x0008ec1d) main_cset6_slider_pane_g18

0xa42d,	// (0x0008ec29) main_cset6_slider_pane_g19_ParamLimits

0xa42d,	// (0x0008ec29) main_cset6_slider_pane_g19

0x2340,	// (0x00086b3c) bg_main_mobtv_pane_ParamLimits

0x2340,	// (0x00086b3c) bg_main_mobtv_pane

0xa7c0,	// (0x0008efbc) main_mobtv_info_pane

0xa7cb,	// (0x0008efc7) main_mobtv_loading_pane_ParamLimits

0xa7cb,	// (0x0008efc7) main_mobtv_loading_pane

0xd828,	// (0x00092024) main_mobtv_pg_channel_list_pane

0xd832,	// (0x0009202e) main_mobtv_pg_hdr_pane

0xa7d8,	// (0x0008efd4) main_mobtv_programe_curr_pane_ParamLimits

0xa7d8,	// (0x0008efd4) main_mobtv_programe_curr_pane

0xa7e5,	// (0x0008efe1) main_mobtv_programe_next_pane_ParamLimits

0xa7e5,	// (0x0008efe1) main_mobtv_programe_next_pane

0xd83b,	// (0x00092037) popup_mobtv_noti_window

0xe37a,	// (0x00092b76) main_tv_pg_hdr_pane_g1

0xd843,	// (0x0009203f) main_tv_pg_hdr_pane_g2

0xd84b,	// (0x00092047) main_tv_pg_hdr_pane_g3

0xd853,	// (0x0009204f) main_tv_pg_hdr_pane_g4

0xd85b,	// (0x00092057) main_tv_pg_hdr_pane_g5

0xd865,	// (0x00092061) main_tv_pg_hdr_pane_g6

0xd86f,	// (0x0009206b) main_tv_pg_hdr_pane_g7

0xd879,	// (0x00092075) main_tv_pg_hdr_pane_g8

0xd883,	// (0x0009207f) main_tv_pg_hdr_pane_g9

0xd88d,	// (0x00092089) main_tv_pg_hdr_pane_g10

0xd897,	// (0x00092093) main_tv_pg_hdr_pane_g11

0x000a,

0xfaf5,	// (0x000942f1) main_tv_pg_hdr_pane_g

0xd8a1,	// (0x0009209d) main_tv_pg_hdr_pane_t1

0xd8af,	// (0x000920ab) main_tv_pg_hdr_pane_t2

0xd8bd,	// (0x000920b9) main_tv_pg_hdr_pane_t3

0xd8cd,	// (0x000920c9) main_tv_pg_hdr_pane_t4

0xd8dd,	// (0x000920d9) main_tv_pg_hdr_pane_t5

0x0004,

0xfb0c,	// (0x00094308) main_tv_pg_hdr_pane_t

0xd8ed,	// (0x000920e9) single_mobtv_pg_channel_pane_ParamLimits

0xd8ed,	// (0x000920e9) single_mobtv_pg_channel_pane

0xd8ff,	// (0x000920fb) single_mobtv_pg_channel_table_pane

0xd908,	// (0x00092104) single_mobtv_pg_channel_thumb_pane

0xd911,	// (0x0009210d) single_tv_pg_channel_pane_g1

0xd91a,	// (0x00092116) single_tv_pg_channel_pane_g2

0x0001,

0xfb17,	// (0x00094313) single_tv_pg_channel_pane_g

0xe33c,	// (0x00092b38) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe33c,	// (0x00092b38) bg_single_mobtv_pg_channel_thumb_pane

0xd923,	// (0x0009211f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd923,	// (0x0009211f) single_mobtv_pg_channel_thumb_pane_g1

0xd931,	// (0x0009212d) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd931,	// (0x0009212d) single_mobtv_pg_channel_thumb_pane_g2

0xd93d,	// (0x00092139) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd93d,	// (0x00092139) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb1c,	// (0x00094318) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb1c,	// (0x00094318) single_mobtv_pg_channel_thumb_pane_g

0xd949,	// (0x00092145) single_mobtv_pg_channel_thumb_pane_t1

0xd957,	// (0x00092153) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb23,	// (0x0009431f) single_mobtv_pg_channel_thumb_pane_t

0xe37a,	// (0x00092b76) bg_single_mobtv_pg_channel_table_pane_g1

0xe37a,	// (0x00092b76) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x00093888) bg_single_mobtv_pg_channel_table_pane_g

0xd965,	// (0x00092161) single_mobtv_pg_channel_table_pane_t1

0xd973,	// (0x0009216f) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb28,	// (0x00094324) single_mobtv_pg_channel_table_pane_t

0xa7fa,	// (0x0008eff6) main_mobtv_info_pane_g1_ParamLimits

0xa7fa,	// (0x0008eff6) main_mobtv_info_pane_g1

0xa816,	// (0x0008f012) main_mobtv_info_pane_t1_ParamLimits

0xa816,	// (0x0008f012) main_mobtv_info_pane_t1

0xa88e,	// (0x0008f08a) main_mobtv_info_pane_t2_ParamLimits

0xa88e,	// (0x0008f08a) main_mobtv_info_pane_t2

0x0002,

0xfb32,	// (0x0009432e) main_mobtv_info_pane_t_ParamLimits

0xfb32,	// (0x0009432e) main_mobtv_info_pane_t

0xa91d,	// (0x0008f119) wait_bar_pane_cp05

0xa92f,	// (0x0008f12b) main_mobtv_loading_pane_g1_ParamLimits

0xa92f,	// (0x0008f12b) main_mobtv_loading_pane_g1

0xa93d,	// (0x0008f139) main_mobtv_loading_pane_g2_ParamLimits

0xa93d,	// (0x0008f139) main_mobtv_loading_pane_g2

0xa949,	// (0x0008f145) main_mobtv_loading_pane_g3_ParamLimits

0xa949,	// (0x0008f145) main_mobtv_loading_pane_g3

0x0002,

0xfb39,	// (0x00094335) main_mobtv_loading_pane_g_ParamLimits

0xfb39,	// (0x00094335) main_mobtv_loading_pane_g

0xd981,	// (0x0009217d) main_mobtv_loading_pane_t1_ParamLimits

0xd981,	// (0x0009217d) main_mobtv_loading_pane_t1

0xd999,	// (0x00092195) main_mobtv_loading_pane_t2_ParamLimits

0xd999,	// (0x00092195) main_mobtv_loading_pane_t2

0x0001,

0xfb40,	// (0x0009433c) main_mobtv_loading_pane_t_ParamLimits

0xfb40,	// (0x0009433c) main_mobtv_loading_pane_t

0xa957,	// (0x0008f153) wait_bar_pane_cp06_ParamLimits

0xa957,	// (0x0008f153) wait_bar_pane_cp06

0xd9bd,	// (0x000921b9) main_mobtv_programe_curr_pane_t1

0xd9cb,	// (0x000921c7) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb45,	// (0x00094341) main_mobtv_programe_curr_pane_t

0xd9d9,	// (0x000921d5) main_mobtv_programe_next_pane_t1

0xd9e7,	// (0x000921e3) main_mobtv_programe_next_pane_t2

0xd9f5,	// (0x000921f1) main_mobtv_programe_next_pane_t3

0x0002,

0xfb4a,	// (0x00094346) main_mobtv_programe_next_pane_t

0xdc3b,	// (0x00092437) bg_popup_mobtv_noti_window_pane

0xda03,	// (0x000921ff) popup_mobtv_noti_window_g1

0xda0b,	// (0x00092207) popup_mobtv_noti_window_t1

0xda19,	// (0x00092215) popup_mobtv_noti_window_t2

0x0001,

0xfb51,	// (0x0009434d) popup_mobtv_noti_window_t

0xe37a,	// (0x00092b76) bg_popup_mobtv_noti_window_pane_g1

0x4871,	// (0x0008906d) sc_clock_pane

0x4871,	// (0x0008906d) main_fs_bigclock_pane

0x9f8c,	// (0x0008e788) blid2_tripm_pane_t4_ParamLimits

0x9f8c,	// (0x0008e788) blid2_tripm_pane_t4

0xe34a,	// (0x00092b46) sc_clock_pane_g1_ParamLimits

0xe34a,	// (0x00092b46) sc_clock_pane_g1

0xe398,	// (0x00092b94) sc_clock_pane_t1_ParamLimits

0xe398,	// (0x00092b94) sc_clock_pane_t1

0xe398,	// (0x00092b94) sc_clock_pane_t2_ParamLimits

0xe398,	// (0x00092b94) sc_clock_pane_t2

0xe398,	// (0x00092b94) sc_clock_pane_t3_ParamLimits

0xe398,	// (0x00092b94) sc_clock_pane_t3

0x0004,

0xfb56,	// (0x00094352) sc_clock_pane_t_ParamLimits

0xfb56,	// (0x00094352) sc_clock_pane_t

0xb32d,	// (0x0008fb29) main_fs_bigclock_indicator_pane_ParamLimits

0xb32d,	// (0x0008fb29) main_fs_bigclock_indicator_pane

0xa99e,	// (0x0008f19a) main_fs_bigclock_pane_g1_ParamLimits

0xa99e,	// (0x0008f19a) main_fs_bigclock_pane_g1

0xb339,	// (0x0008fb35) main_fs_bigclock_pane_t1_ParamLimits

0xb339,	// (0x0008fb35) main_fs_bigclock_pane_t1

0xb34b,	// (0x0008fb47) main_fs_bigclock_pane_t2_ParamLimits

0xb34b,	// (0x0008fb47) main_fs_bigclock_pane_t2

0xb35f,	// (0x0008fb5b) main_fs_bigclock_pane_t3_ParamLimits

0xb35f,	// (0x0008fb5b) main_fs_bigclock_pane_t3

0x0002,

0xfce4,	// (0x000944e0) main_fs_bigclock_pane_t_ParamLimits

0xfce4,	// (0x000944e0) main_fs_bigclock_pane_t

0x0e8d,	// (0x00085689) main_fs_bigclock_indicator_pane_g1

0xd737,	// (0x00091f33) ncim_query_content_pane_g2_ParamLimits

0xd737,	// (0x00091f33) ncim_query_content_pane_g2

0x0001,

0xfae3,	// (0x000942df) ncim_query_content_pane_g_ParamLimits

0xfae3,	// (0x000942df) ncim_query_content_pane_g

0xe398,	// (0x00092b94) sc_clock_pane_t4_ParamLimits

0xe398,	// (0x00092b94) sc_clock_pane_t4

0x728b,	// (0x0008ba87) main_radioblah_pane

0x8ad3,	// (0x0008d2cf) cell_call4_button_pane_t1_copy1_ParamLimits

0x8ad3,	// (0x0008d2cf) cell_call4_button_pane_t1_copy1

0xa5ed,	// (0x0008ede9) main_ncimui_pane_t1_ParamLimits

0xa5ed,	// (0x0008ede9) main_ncimui_pane_t1

0xa607,	// (0x0008ee03) main_ncimui_pane_t2_ParamLimits

0xa607,	// (0x0008ee03) main_ncimui_pane_t2

0x0002,

0xfadc,	// (0x000942d8) main_ncimui_pane_t_ParamLimits

0xfadc,	// (0x000942d8) main_ncimui_pane_t

0x1993,	// (0x0008618f) main_radioblah_anim_pane_ParamLimits

0x1993,	// (0x0008618f) main_radioblah_anim_pane

0x1993,	// (0x0008618f) main_radioblah_info_pane_ParamLimits

0x1993,	// (0x0008618f) main_radioblah_info_pane

0x282e,	// (0x0008702a) main_radioblah_pane_t1_ParamLimits

0x282e,	// (0x0008702a) main_radioblah_pane_t1

0x282e,	// (0x0008702a) main_radioblah_pane_t2_ParamLimits

0x282e,	// (0x0008702a) main_radioblah_pane_t2

0x0003,

0xfb77,	// (0x00094373) main_radioblah_pane_t_ParamLimits

0xfb77,	// (0x00094373) main_radioblah_pane_t

0xe32e,	// (0x00092b2a) main_radioblah_rocker_ctrl_pane_ParamLimits

0xe32e,	// (0x00092b2a) main_radioblah_rocker_ctrl_pane

0xdb8e,	// (0x0009238a) main_radioblah_info_pane_t1_ParamLimits

0xdb8e,	// (0x0009238a) main_radioblah_info_pane_t1

0xdba2,	// (0x0009239e) main_radioblah_info_pane_t2_ParamLimits

0xdba2,	// (0x0009239e) main_radioblah_info_pane_t2

0x0003,

0xfb80,	// (0x0009437c) main_radioblah_info_pane_t_ParamLimits

0xfb80,	// (0x0009437c) main_radioblah_info_pane_t

0xe37a,	// (0x00092b76) main_radioblah_rocker_ctrl_pane_g1

0xe37a,	// (0x00092b76) main_radioblah_rocker_ctrl_pane_g2

0xe37a,	// (0x00092b76) main_radioblah_rocker_ctrl_pane_g3

0xe37a,	// (0x00092b76) main_radioblah_rocker_ctrl_pane_g4

0xe37a,	// (0x00092b76) main_radioblah_rocker_ctrl_pane_g5

0xe37a,	// (0x00092b76) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb89,	// (0x00094385) main_radioblah_rocker_ctrl_pane_g

0xa594,	// (0x0008ed90) main_cset_text2_pane_t1_copy1_ParamLimits

0x8b46,	// (0x0008d342) cam4_image_uncrop_qvga_pane

0x8c8d,	// (0x0008d489) vid4_image_uncrop_qcif_pane

0xa120,	// (0x0008e91c) cam6_image_uncrop_qvga_pane_ParamLimits

0xa120,	// (0x0008e91c) cam6_image_uncrop_qvga_pane

0xd417,	// (0x00091c13) vid6_image_uncrop_qcif_pane_ParamLimits

0xd417,	// (0x00091c13) vid6_image_uncrop_qcif_pane

0xdc3b,	// (0x00092437) bg_popup_preview_window_pane_cp03

0xd6dd,	// (0x00091ed9) list_cset_text2_pane

0xd6e5,	// (0x00091ee1) main_cset6_text2_pane_g1

0xd6ed,	// (0x00091ee9) main_cset6_text2_pane_t1

0xa9e2,	// (0x0008f1de) list_cset_text2_pane_t1_ParamLimits

0xa9e2,	// (0x0008f1de) list_cset_text2_pane_t1

0x728b,	// (0x0008ba87) main_radioblah_pane_ParamLimits

0xa909,	// (0x0008f105) main_mobtv_info_pane_t3_ParamLimits

0xa909,	// (0x0008f105) main_mobtv_info_pane_t3

0x2340,	// (0x00086b3c) main_radioblah_pane_g1

0xdb5e,	// (0x0009235a) main_radioblah_info_pane_g1

0xe398,	// (0x00092b94) main_radioblah_info_pane_t3_ParamLimits

0xe398,	// (0x00092b94) main_radioblah_info_pane_t3

0x62f4,	// (0x0008aaf0) highlight_cell_cale_month_pane_ParamLimits

0x62f4,	// (0x0008aaf0) highlight_cell_cale_month_pane

0x4871,	// (0x0008906d) main_phob_fisheye_pane

0x3376,	// (0x00087b72) scroll_pane_cp0031_ParamLimits

0x3376,	// (0x00087b72) scroll_pane_cp0031

0xd525,	// (0x00091d21) wait_bar_pane_cp08_ParamLimits

0xa338,	// (0x0008eb34) cset_list_set_pane_copy1_ParamLimits

0xdbf1,	// (0x000923ed) highlight_cell_cale_month_pane_g1

0xa9ff,	// (0x0008f1fb) highlight_cell_cale_month_pane_t1

0xd1b1,	// (0x000919ad) list_gen_pane_cp01

0xcd92,	// (0x0009158e) scroll_pane_01

0xaa0d,	// (0x0008f209) list_single_double_fisheye_pane

0xaa16,	// (0x0008f212) list_double_fisheye_pane_g1_ParamLimits

0xaa16,	// (0x0008f212) list_double_fisheye_pane_g1

0xaa22,	// (0x0008f21e) list_double_fisheye_pane_g2_ParamLimits

0xaa22,	// (0x0008f21e) list_double_fisheye_pane_g2

0xaa36,	// (0x0008f232) list_double_fisheye_pane_g3_ParamLimits

0xaa36,	// (0x0008f232) list_double_fisheye_pane_g3

0x0004,

0xfb96,	// (0x00094392) list_double_fisheye_pane_g_ParamLimits

0xfb96,	// (0x00094392) list_double_fisheye_pane_g

0xaa5f,	// (0x0008f25b) list_double_fisheye_pane_t1_ParamLimits

0xaa5f,	// (0x0008f25b) list_double_fisheye_pane_t1

0xaa7a,	// (0x0008f276) list_double_fisheye_pane_t2_ParamLimits

0xaa7a,	// (0x0008f276) list_double_fisheye_pane_t2

0x0001,

0xfba1,	// (0x0009439d) list_double_fisheye_pane_t_ParamLimits

0xfba1,	// (0x0009439d) list_double_fisheye_pane_t

0x4871,	// (0x0008906d) main_call5_pane

0xe32e,	// (0x00092b2a) sc_swipe_pane_ParamLimits

0xe32e,	// (0x00092b2a) sc_swipe_pane

0xaaa8,	// (0x0008f2a4) call5_image_pane_ParamLimits

0xaaa8,	// (0x0008f2a4) call5_image_pane

0xaab8,	// (0x0008f2b4) call5_swipe_1_pane_ParamLimits

0xaab8,	// (0x0008f2b4) call5_swipe_1_pane

0xaac4,	// (0x0008f2c0) call5_swipe_2_pane_ParamLimits

0xaac4,	// (0x0008f2c0) call5_swipe_2_pane

0xaade,	// (0x0008f2da) popup_call5_audio_first_window_ParamLimits

0xaade,	// (0x0008f2da) popup_call5_audio_first_window

0xe33c,	// (0x00092b38) call5_swipe_1_pane_g1_ParamLimits

0xe33c,	// (0x00092b38) call5_swipe_1_pane_g1

0xdbf9,	// (0x000923f5) call5_swipe_1_pane_g2_ParamLimits

0xdbf9,	// (0x000923f5) call5_swipe_1_pane_g2

0x0001,

0xfba6,	// (0x000943a2) call5_swipe_1_pane_g_ParamLimits

0xfba6,	// (0x000943a2) call5_swipe_1_pane_g

0xdc05,	// (0x00092401) call5_swipe_1_pane_t1_ParamLimits

0xdc05,	// (0x00092401) call5_swipe_1_pane_t1

0xe33c,	// (0x00092b38) call5_swipe_2_pane_g1_ParamLimits

0xe33c,	// (0x00092b38) call5_swipe_2_pane_g1

0xdc1a,	// (0x00092416) call5_swipe_2_pane_g2_ParamLimits

0xdc1a,	// (0x00092416) call5_swipe_2_pane_g2

0x0001,

0xfbab,	// (0x000943a7) call5_swipe_2_pane_g_ParamLimits

0xfbab,	// (0x000943a7) call5_swipe_2_pane_g

0xdc26,	// (0x00092422) call5_swipe_2_pane_t1_ParamLimits

0xdc26,	// (0x00092422) call5_swipe_2_pane_t1

0xe33c,	// (0x00092b38) sc_swipe_pane_g1_ParamLimits

0xe33c,	// (0x00092b38) sc_swipe_pane_g1

0xe34a,	// (0x00092b46) sc_swipe_pane_g2_ParamLimits

0xe34a,	// (0x00092b46) sc_swipe_pane_g2

0x0001,

0xfbb0,	// (0x000943ac) sc_swipe_pane_g_ParamLimits

0xfbb0,	// (0x000943ac) sc_swipe_pane_g

0xe384,	// (0x00092b80) sc_swipe_pane_t1_ParamLimits

0xe384,	// (0x00092b80) sc_swipe_pane_t1

0x4871,	// (0x0008906d) main_cmail_launcher_pane

0xaaec,	// (0x0008f2e8) aid_size_cell_cmail_l_ParamLimits

0xaaec,	// (0x0008f2e8) aid_size_cell_cmail_l

0xaafa,	// (0x0008f2f6) grid_cmail_l_pane_ParamLimits

0xaafa,	// (0x0008f2f6) grid_cmail_l_pane

0xab0a,	// (0x0008f306) cell_cmail_l_pane_ParamLimits

0xab0a,	// (0x0008f306) cell_cmail_l_pane

0x0568,	// (0x00084d64) cell_cmail_l_pane_g1_ParamLimits

0x0568,	// (0x00084d64) cell_cmail_l_pane_g1

0x0574,	// (0x00084d70) cell_cmail_l_pane_t1_ParamLimits

0x0574,	// (0x00084d70) cell_cmail_l_pane_t1

0x058a,	// (0x00084d86) cell_cmail_l_pane_t2_ParamLimits

0x058a,	// (0x00084d86) cell_cmail_l_pane_t2

0x0001,

0xfbb5,	// (0x000943b1) cell_cmail_l_pane_t_ParamLimits

0xfbb5,	// (0x000943b1) cell_cmail_l_pane_t

0xde1d,	// (0x00092619) grid_highlight_pane_cp018_ParamLimits

0xde1d,	// (0x00092619) grid_highlight_pane_cp018

0x46c8,	// (0x00088ec4) main2_pane_ParamLimits

0x46c8,	// (0x00088ec4) main2_pane

0xe467,	// (0x00092c63) popup_sp_fs_action_menu_bg_pane_g1

0xe46f,	// (0x00092c6b) popup_sp_fs_action_menu_bg_pane_g2

0xe477,	// (0x00092c73) popup_sp_fs_action_menu_bg_pane_g3

0xe47f,	// (0x00092c7b) popup_sp_fs_action_menu_bg_pane_g4

0xe487,	// (0x00092c83) popup_sp_fs_action_menu_bg_pane_g5

0xe48f,	// (0x00092c8b) popup_sp_fs_action_menu_bg_pane_g6

0xe497,	// (0x00092c93) popup_sp_fs_action_menu_bg_pane_g7

0xe49f,	// (0x00092c9b) popup_sp_fs_action_menu_bg_pane_g8

0xe4a7,	// (0x00092ca3) popup_sp_fs_action_menu_bg_pane_g9

0xe4af,	// (0x00092cab) popup_sp_fs_action_menu_bg_pane_g10

0xe4af,	// (0x00092cab) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x000938d9) popup_sp_fs_action_menu_bg_pane_g

0xe33c,	// (0x00092b38) list_medium_line_x2_t3_g3_g1_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x2_t3_g3_g1

0xe33c,	// (0x00092b38) list_medium_line_x2_t3_g3_g2_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x2_t3_g3_g2

0xe33c,	// (0x00092b38) list_medium_line_x2_t3_g3_g3_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x00093987) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x00093987) list_medium_line_x2_t3_g3_g

0xe384,	// (0x00092b80) list_medium_line_x2_t3_g3_t1_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_x2_t3_g3_t1

0xe384,	// (0x00092b80) list_medium_line_x2_t3_g3_t2_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_x2_t3_g3_t2

0xe384,	// (0x00092b80) list_medium_line_x2_t3_g3_t3_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x0009398e) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x0009398e) list_medium_line_x2_t3_g3_t

0xe33c,	// (0x00092b38) list_medium_line_x2_t3_g2_g1_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x2_t3_g2_g1

0xe33c,	// (0x00092b38) list_medium_line_x2_t3_g2_g2_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x00093995) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x00093995) list_medium_line_x2_t3_g2_g

0xe384,	// (0x00092b80) list_medium_line_x2_t3_g2_t1_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_x2_t3_g2_t1

0xe384,	// (0x00092b80) list_medium_line_x2_t3_g2_t2_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_x2_t3_g2_t2

0xe384,	// (0x00092b80) list_medium_line_x2_t3_g2_t3_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x0009398e) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x0009398e) list_medium_line_x2_t3_g2_t

0xe33c,	// (0x00092b38) list_medium_line_x2_t4_g4_g1_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x2_t4_g4_g1

0xe33c,	// (0x00092b38) list_medium_line_x2_t4_g4_g2_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x2_t4_g4_g2

0xe33c,	// (0x00092b38) list_medium_line_x2_t4_g4_g3_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x2_t4_g4_g3

0xe33c,	// (0x00092b38) list_medium_line_x2_t4_g4_g4_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x0009399a) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x0009399a) list_medium_line_x2_t4_g4_g

0xe384,	// (0x00092b80) list_medium_line_x2_t4_g4_t1_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_x2_t4_g4_t1

0xe384,	// (0x00092b80) list_medium_line_x2_t4_g4_t2_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_x2_t4_g4_t2

0xe384,	// (0x00092b80) list_medium_line_x2_t4_g4_t3_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_x2_t4_g4_t3

0xe384,	// (0x00092b80) list_medium_line_x2_t4_g4_t4_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x000939a3) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x000939a3) list_medium_line_x2_t4_g4_t

0xe33c,	// (0x00092b38) list_medium_line_x2_t2_g4_g1_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x2_t2_g4_g1

0xe33c,	// (0x00092b38) list_medium_line_x2_t2_g4_g2_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x2_t2_g4_g2

0xe33c,	// (0x00092b38) list_medium_line_x2_t2_g4_g3_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x2_t2_g4_g3

0xe33c,	// (0x00092b38) list_medium_line_x2_t2_g4_g4_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x0009399a) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x0009399a) list_medium_line_x2_t2_g4_g

0xe384,	// (0x00092b80) list_medium_line_x2_t2_g4_t1_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_x2_t2_g4_t1

0xe384,	// (0x00092b80) list_medium_line_x2_t2_g4_t2_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_x2_t2_g4_t2

0x0001,

0xf20e,	// (0x00093a0a) list_medium_line_x2_t2_g4_t_ParamLimits

0xf20e,	// (0x00093a0a) list_medium_line_x2_t2_g4_t

0xe33c,	// (0x00092b38) list_medium_line_x2_t2_g3_g1_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x2_t2_g3_g1

0xe33c,	// (0x00092b38) list_medium_line_x2_t2_g3_g2_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x2_t2_g3_g2

0xe33c,	// (0x00092b38) list_medium_line_x2_t2_g3_g3_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x00093987) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x00093987) list_medium_line_x2_t2_g3_g

0xe384,	// (0x00092b80) list_medium_line_x2_t2_g3_t1_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_x2_t2_g3_t1

0xe384,	// (0x00092b80) list_medium_line_x2_t2_g3_t2_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_x2_t2_g3_t2

0x0001,

0xf20e,	// (0x00093a0a) list_medium_line_x2_t2_g3_t_ParamLimits

0xf20e,	// (0x00093a0a) list_medium_line_x2_t2_g3_t

0x64c4,	// (0x0008acc0) main_sp_fs_list_pane_ParamLimits

0x64c4,	// (0x0008acc0) main_sp_fs_list_pane

0x64d0,	// (0x0008accc) sp_fs_scroll_pane_ParamLimits

0x64d0,	// (0x0008accc) sp_fs_scroll_pane

0xeaea,	// (0x000932e6) list_medium_line_x2_t3_t1

0xeaea,	// (0x000932e6) list_medium_line_x2_t3_t2

0xeaea,	// (0x000932e6) list_medium_line_x2_t3_t3

0x0002,

0xf259,	// (0x00093a55) list_medium_line_x2_t3_t

0xeaea,	// (0x000932e6) list_medium_line_x3_t4_t1

0xeaea,	// (0x000932e6) list_medium_line_x3_t4_t2

0xeaea,	// (0x000932e6) list_medium_line_x3_t4_t3

0xeaea,	// (0x000932e6) list_medium_line_x3_t4_t4

0x0003,

0xf260,	// (0x00093a5c) list_medium_line_x3_t4_t

0xeaea,	// (0x000932e6) list_medium_line_x4_t5_t1

0xeaea,	// (0x000932e6) list_medium_line_x4_t5_t2

0xeaea,	// (0x000932e6) list_medium_line_x4_t5_t3

0xeaea,	// (0x000932e6) list_medium_line_x4_t5_t4

0xeaea,	// (0x000932e6) list_medium_line_x4_t5_t5

0x0004,

0xf269,	// (0x00093a65) list_medium_line_x4_t5_t

0xe33c,	// (0x00092b38) list_medium_line_t4_g4_g1_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_t4_g4_g1

0xe33c,	// (0x00092b38) list_medium_line_t4_g4_g2_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_t4_g4_g2

0xe33c,	// (0x00092b38) list_medium_line_t4_g4_g3_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_t4_g4_g3

0xe33c,	// (0x00092b38) list_medium_line_t4_g4_g4_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x0009399a) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x0009399a) list_medium_line_t4_g4_g

0xe384,	// (0x00092b80) list_medium_line_t4_g4_t1_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_t4_g4_t1

0xe384,	// (0x00092b80) list_medium_line_t4_g4_t2_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_t4_g4_t2

0xe384,	// (0x00092b80) list_medium_line_t4_g4_t3_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_t4_g4_t3

0xe384,	// (0x00092b80) list_medium_line_t4_g4_t4_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x000939a3) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x000939a3) list_medium_line_t4_g4_t

0x65b9,	// (0x0008adb5) chi_dic_find_pane_g1

0x72a7,	// (0x0008baa3) main_tport_pane

0xeaea,	// (0x000932e6) list_medium_line_plain_t1

0xe33c,	// (0x00092b38) list_medium_line_t2_g2_g1_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_t2_g2_g1

0xe33c,	// (0x00092b38) list_medium_line_t2_g2_g2_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x00093995) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x00093995) list_medium_line_t2_g2_g

0xe384,	// (0x00092b80) list_medium_line_t2_g2_t1_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_t2_g2_t1

0xe384,	// (0x00092b80) list_medium_line_t2_g2_t2_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_t2_g2_t2

0x0001,

0xf20e,	// (0x00093a0a) list_medium_line_t2_g2_t_ParamLimits

0xf20e,	// (0x00093a0a) list_medium_line_t2_g2_t

0x054e,	// (0x00084d4a) aid_sp_fs_list_icon_a_sm

0x1dbe,	// (0x000865ba) aid_sp_fs_list_icon_d

0x0556,	// (0x00084d52) aid_sp_fs_text_primary

0x055f,	// (0x00084d5b) aid_sp_fs_text_secondary

0xdc3b,	// (0x00092437) list_medium_line

0xdc3b,	// (0x00092437) list_medium_line_g2

0xdc3b,	// (0x00092437) list_medium_line_g3

0xdc3b,	// (0x00092437) list_medium_line_plain

0xdc3b,	// (0x00092437) list_medium_line_plain_t2

0xdc3b,	// (0x00092437) list_medium_line_plain_t3

0xdc3b,	// (0x00092437) list_medium_line_right_icon

0xdc3b,	// (0x00092437) list_medium_line_right_iconx2

0xdc3b,	// (0x00092437) list_medium_line_t2

0xdc3b,	// (0x00092437) list_medium_line_t2_g2

0xdc3b,	// (0x00092437) list_medium_line_t2_g3

0xdc3b,	// (0x00092437) list_medium_line_t2_right_icon

0xdc3b,	// (0x00092437) list_medium_line_t2_right_iconx2

0xdc3b,	// (0x00092437) list_medium_line_t3

0xdc3b,	// (0x00092437) list_medium_line_t3_g2

0xdc3b,	// (0x00092437) list_medium_line_t3_g3

0xdc3b,	// (0x00092437) list_medium_line_t3_right_iconx2

0xdc3b,	// (0x00092437) list_medium_line_t4_g4

0xdc3b,	// (0x00092437) list_medium_line_x2

0xdc3b,	// (0x00092437) list_medium_line_x2_t2_g2

0xdc3b,	// (0x00092437) list_medium_line_x2_t2_g3

0xdc3b,	// (0x00092437) list_medium_line_x2_t2_g4

0xdc3b,	// (0x00092437) list_medium_line_x2_t3

0xdc3b,	// (0x00092437) list_medium_line_x2_t3_g2

0xdc3b,	// (0x00092437) list_medium_line_x2_t3_g3

0xdc3b,	// (0x00092437) list_medium_line_x2_t3_g4

0xdc3b,	// (0x00092437) list_medium_line_x2_t4_g2

0xdc3b,	// (0x00092437) list_medium_line_x2_t4_g4

0xdc3b,	// (0x00092437) list_medium_line_x3

0xdc3b,	// (0x00092437) list_medium_line_x3_t4

0xdc3b,	// (0x00092437) list_medium_line_x3_t4_g4

0xdc3b,	// (0x00092437) list_medium_line_x4_t4

0xdc3b,	// (0x00092437) list_medium_line_x4_t4_g7

0xdc3b,	// (0x00092437) list_medium_line_x4_t5

0x9e11,	// (0x0008e60d) list_single_fs_dyc_pane_ParamLimits

0x9e11,	// (0x0008e60d) list_single_fs_dyc_pane

0xe33c,	// (0x00092b38) list_medium_line_x4_t4_g7_g1_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x4_t4_g7_g1

0xe33c,	// (0x00092b38) list_medium_line_x4_t4_g7_g2_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x4_t4_g7_g2

0xe33c,	// (0x00092b38) list_medium_line_x4_t4_g7_g3_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x4_t4_g7_g3

0xe33c,	// (0x00092b38) list_medium_line_x4_t4_g7_g4_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x4_t4_g7_g4

0xe33c,	// (0x00092b38) list_medium_line_x4_t4_g7_g5_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x4_t4_g7_g5

0xe33c,	// (0x00092b38) list_medium_line_x4_t4_g7_g6_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x4_t4_g7_g6

0xe34a,	// (0x00092b46) list_medium_line_x4_t4_g7_g7_ParamLimits

0xe34a,	// (0x00092b46) list_medium_line_x4_t4_g7_g7

0x0006,

0xfabd,	// (0x000942b9) list_medium_line_x4_t4_g7_g_ParamLimits

0xfabd,	// (0x000942b9) list_medium_line_x4_t4_g7_g

0xe384,	// (0x00092b80) list_medium_line_x4_t4_g7_t1_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_x4_t4_g7_t1

0xe384,	// (0x00092b80) list_medium_line_x4_t4_g7_t2_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_x4_t4_g7_t2

0xe384,	// (0x00092b80) list_medium_line_x4_t4_g7_t3_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_x4_t4_g7_t3

0xe398,	// (0x00092b94) list_medium_line_x4_t4_g7_t4_ParamLimits

0xe398,	// (0x00092b94) list_medium_line_x4_t4_g7_t4

0xe398,	// (0x00092b94) list_medium_line_x4_t4_g7_t5_ParamLimits

0xe398,	// (0x00092b94) list_medium_line_x4_t4_g7_t5

0x0004,

0xfacc,	// (0x000942c8) list_medium_line_x4_t4_g7_t_ParamLimits

0xfacc,	// (0x000942c8) list_medium_line_x4_t4_g7_t

0xa577,	// (0x0008ed73) list_single_dyc_row_pane_ParamLimits

0xa577,	// (0x0008ed73) list_single_dyc_row_pane

0xaa9c,	// (0x0008f298) call5_gesture_pane_ParamLimits

0xaa9c,	// (0x0008f298) call5_gesture_pane

0xaad0,	// (0x0008f2cc) call5_windows_pane_ParamLimits

0xaad0,	// (0x0008f2cc) call5_windows_pane

0xab23,	// (0x0008f31f) call5_swipe_1_pane_cp_ParamLimits

0xab23,	// (0x0008f31f) call5_swipe_1_pane_cp

0xab2f,	// (0x0008f32b) call5_swipe_2_pane_cp_ParamLimits

0xab2f,	// (0x0008f32b) call5_swipe_2_pane_cp

0xe5f0,	// (0x00092dec) call5_image_pane_cp

0xab3b,	// (0x0008f337) popup_call5_audio_first_window_cp_ParamLimits

0xab3b,	// (0x0008f337) popup_call5_audio_first_window_cp

0x05a7,	// (0x00084da3) call5_swipe_1_pane_g1_cp_ParamLimits

0x05a7,	// (0x00084da3) call5_swipe_1_pane_g1_cp

0x05b4,	// (0x00084db0) call5_swipe_1_pane_g2_cp

0x05bc,	// (0x00084db8) call5_swipe_1_pane_t1_cp_ParamLimits

0x05bc,	// (0x00084db8) call5_swipe_1_pane_t1_cp

0x05a7,	// (0x00084da3) call5_swipe_2_pane_g1_cp_ParamLimits

0x05a7,	// (0x00084da3) call5_swipe_2_pane_g1_cp

0x05d1,	// (0x00084dcd) call5_swipe_2_pane_g2_cp

0x05d9,	// (0x00084dd5) call5_swipe_2_pane_t1_cp_ParamLimits

0x05d9,	// (0x00084dd5) call5_swipe_2_pane_t1_cp

0xde1d,	// (0x00092619) main_sp_fs_email_pane

0x05ee,	// (0x00084dea) main_sp_fs_listscroll_pane_te

0x1dd4,	// (0x000865d0) popup_sp_fs_action_menu_pane_ParamLimits

0x1dd4,	// (0x000865d0) popup_sp_fs_action_menu_pane

0xe37a,	// (0x00092b76) bg_sp_fs_ctrlbar_pane_g1

0x05f7,	// (0x00084df3) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x0600,	// (0x00084dfc) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x0609,	// (0x00084e05) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe37a,	// (0x00092b76) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbba,	// (0x000943b6) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2cfe,	// (0x000874fa) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2cfe,	// (0x000874fa) bg_sp_fs_ctrlbar_ddmenu_pane

0x0612,	// (0x00084e0e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x0612,	// (0x00084e0e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x061e,	// (0x00084e1a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x061e,	// (0x00084e1a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbc3,	// (0x000943bf) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbc3,	// (0x000943bf) main_sp_fs_ctrlbar_ddmenu_pane_g

0x062a,	// (0x00084e26) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x062a,	// (0x00084e26) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe37a,	// (0x00092b76) list_medium_line_t2_right_icon_g1

0xeaea,	// (0x000932e6) list_medium_line_t2_right_icon_t1

0xeaea,	// (0x000932e6) list_medium_line_t2_right_icon_t2

0x0001,

0xfbc8,	// (0x000943c4) list_medium_line_t2_right_icon_t

0x1993,	// (0x0008618f) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1993,	// (0x0008618f) bg_sp_fs_ctrlbar_pane

0xaba0,	// (0x0008f39c) main_sp_fs_ctrlbar_button_pane_cp01

0xaba8,	// (0x0008f3a4) main_sp_fs_ctrlbar_ddmenu_pane

0x067c,	// (0x00084e78) main_sp_fs_ctrlbar_pane_g1

0x0688,	// (0x00084e84) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbcd,	// (0x000943c9) main_sp_fs_ctrlbar_pane_g

0xabe4,	// (0x0008f3e0) main_sp_fs_ctrlbar_pane_t1

0xac1f,	// (0x0008f41b) main_sp_fs_ctrlbar_pane

0xac35,	// (0x0008f431) main_sp_fs_listscroll_pane_te_cp01

0xac50,	// (0x0008f44c) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xac50,	// (0x0008f44c) popup_sp_fs_action_menu_pane_cp01

0xde1d,	// (0x00092619) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xde1d,	// (0x00092619) bg_sp_fs_highlight_list_pane_cp01

0x06af,	// (0x00084eab) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x06af,	// (0x00084eab) sp_fs_action_menu_list_gene_pane_g1

0x06be,	// (0x00084eba) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x06be,	// (0x00084eba) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbdb,	// (0x000943d7) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbdb,	// (0x000943d7) sp_fs_action_menu_list_gene_pane_g

0x06cb,	// (0x00084ec7) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x06cb,	// (0x00084ec7) sp_fs_action_menu_list_gene_pane_t1

0x06e3,	// (0x00084edf) sp_fs_action_menu_list_gene_pane_ParamLimits

0x06e3,	// (0x00084edf) sp_fs_action_menu_list_gene_pane

0x0704,	// (0x00084f00) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x0704,	// (0x00084f00) popup_sp_fs_action_menu_bg_pane

0x0712,	// (0x00084f0e) sp_fs_action_menu_list_pane_ParamLimits

0x0712,	// (0x00084f0e) sp_fs_action_menu_list_pane

0x0734,	// (0x00084f30) sp_fs_scroll_pane_cp01_ParamLimits

0x0734,	// (0x00084f30) sp_fs_scroll_pane_cp01

0xeaea,	// (0x000932e6) list_medium_line_plain_t2_t1

0xeaea,	// (0x000932e6) list_medium_line_plain_t2_t2

0x0001,

0xfbc8,	// (0x000943c4) list_medium_line_plain_t2_t

0xeaea,	// (0x000932e6) list_medium_line_plain_t3_t1

0xeaea,	// (0x000932e6) list_medium_line_plain_t3_t2

0xeaea,	// (0x000932e6) list_medium_line_plain_t3_t3

0x0002,

0xf259,	// (0x00093a55) list_medium_line_plain_t3_t

0xe33c,	// (0x00092b38) list_medium_line_x2_t2_g2_g1_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x2_t2_g2_g1

0xe33c,	// (0x00092b38) list_medium_line_x2_t2_g2_g2_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x00093995) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x00093995) list_medium_line_x2_t2_g2_g

0xe384,	// (0x00092b80) list_medium_line_x2_t2_g2_t1_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_x2_t2_g2_t1

0xe384,	// (0x00092b80) list_medium_line_x2_t2_g2_t2_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_x2_t2_g2_t2

0x0001,

0xf20e,	// (0x00093a0a) list_medium_line_x2_t2_g2_t_ParamLimits

0xf20e,	// (0x00093a0a) list_medium_line_x2_t2_g2_t

0xe33c,	// (0x00092b38) list_medium_line_x2_t4_g2_g1_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x2_t4_g2_g1

0xe33c,	// (0x00092b38) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x00093995) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x00093995) list_medium_line_x2_t4_g2_g

0xe384,	// (0x00092b80) list_medium_line_x2_t4_g2_t1_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_x2_t4_g2_t1

0xe384,	// (0x00092b80) list_medium_line_x2_t4_g2_t2_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_x2_t4_g2_t2

0xe384,	// (0x00092b80) list_medium_line_x2_t4_g2_t3_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_x2_t4_g2_t3

0xe384,	// (0x00092b80) list_medium_line_x2_t4_g2_t4_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x000939a3) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x000939a3) list_medium_line_x2_t4_g2_t

0xe37a,	// (0x00092b76) list_medium_line_t3_right_iconx2_g1

0xe37a,	// (0x00092b76) list_medium_line_t3_right_iconx2_g2

0xe37a,	// (0x00092b76) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf375,	// (0x00093b71) list_medium_line_t3_right_iconx2_g

0xeaea,	// (0x000932e6) list_medium_line_t3_right_iconx2_t1

0xeaea,	// (0x000932e6) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbc8,	// (0x000943c4) list_medium_line_t3_right_iconx2_t

0xe33c,	// (0x00092b38) list_medium_line_x3_t4_g4_g1_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x3_t4_g4_g1

0xe33c,	// (0x00092b38) list_medium_line_x3_t4_g4_g2_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x3_t4_g4_g2

0xe33c,	// (0x00092b38) list_medium_line_x3_t4_g4_g3_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x3_t4_g4_g3

0xe33c,	// (0x00092b38) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x0009399a) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x0009399a) list_medium_line_x3_t4_g4_g

0xe384,	// (0x00092b80) list_medium_line_x3_t4_g4_t1_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_x3_t4_g4_t1

0xe384,	// (0x00092b80) list_medium_line_x3_t4_g4_t2_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_x3_t4_g4_t2

0xe384,	// (0x00092b80) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_x3_t4_g4_t3

0xe384,	// (0x00092b80) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x000939a3) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x000939a3) list_medium_line_x3_t4_g4_t

0xac70,	// (0x0008f46c) list_single_dyc_row_text_pane_t1_ParamLimits

0xac70,	// (0x0008f46c) list_single_dyc_row_text_pane_t1

0xaca7,	// (0x0008f4a3) list_single_dyc_row_text_pane_t2_ParamLimits

0xaca7,	// (0x0008f4a3) list_single_dyc_row_text_pane_t2

0x075a,	// (0x00084f56) list_single_dyc_row_text_pane_t3_ParamLimits

0x075a,	// (0x00084f56) list_single_dyc_row_text_pane_t3

0x0005,

0xfbe0,	// (0x000943dc) list_single_dyc_row_text_pane_t_ParamLimits

0xfbe0,	// (0x000943dc) list_single_dyc_row_text_pane_t

0x077e,	// (0x00084f7a) list_single_dyc_row_pane_g1_ParamLimits

0x077e,	// (0x00084f7a) list_single_dyc_row_pane_g1

0x078a,	// (0x00084f86) list_single_dyc_row_pane_g2_ParamLimits

0x078a,	// (0x00084f86) list_single_dyc_row_pane_g2

0x0796,	// (0x00084f92) list_single_dyc_row_pane_g3_ParamLimits

0x0796,	// (0x00084f92) list_single_dyc_row_pane_g3

0x07a9,	// (0x00084fa5) list_single_dyc_row_pane_g4_ParamLimits

0x07a9,	// (0x00084fa5) list_single_dyc_row_pane_g4

0x0006,

0xfbed,	// (0x000943e9) list_single_dyc_row_pane_g_ParamLimits

0xfbed,	// (0x000943e9) list_single_dyc_row_pane_g

0x07fb,	// (0x00084ff7) list_single_dyc_row_text_pane_ParamLimits

0x07fb,	// (0x00084ff7) list_single_dyc_row_text_pane

0xdc3b,	// (0x00092437) bg_sp_fs_scroll_pane

0x0820,	// (0x0008501c) thumb_sp_fs_scroll_pane

0xe33c,	// (0x00092b38) list_medium_line_g1_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_g1

0xe384,	// (0x00092b80) list_medium_line_t1_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_t1

0xe33c,	// (0x00092b38) list_medium_line_x2_g1_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x2_g1

0xe33c,	// (0x00092b38) list_medium_line_x2_g2_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x00093995) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x00093995) list_medium_line_x2_g

0xe384,	// (0x00092b80) list_medium_line_x2_t1_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_x2_t1

0xe33c,	// (0x00092b38) list_medium_line_x3_g1_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x3_g1

0x0829,	// (0x00085025) list_medium_line_x3_g2_ParamLimits

0x0829,	// (0x00085025) list_medium_line_x3_g2

0x0001,

0xfbfc,	// (0x000943f8) list_medium_line_x3_g_ParamLimits

0xfbfc,	// (0x000943f8) list_medium_line_x3_g

0x0837,	// (0x00085033) list_medium_line_x3_t1_ParamLimits

0x0837,	// (0x00085033) list_medium_line_x3_t1

0x084b,	// (0x00085047) thumb_sp_fs_scroll_pane_g1

0x0854,	// (0x00085050) thumb_sp_fs_scroll_pane_g2

0x085d,	// (0x00085059) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc01,	// (0x000943fd) thumb_sp_fs_scroll_pane_g

0x084b,	// (0x00085047) bg_sp_fs_scroll_pane_g1

0x0854,	// (0x00085050) bg_sp_fs_scroll_pane_g2

0x085d,	// (0x00085059) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc01,	// (0x000943fd) bg_sp_fs_scroll_pane_g

0xe33c,	// (0x00092b38) list_medium_line_x2_t3_g4_g1_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x2_t3_g4_g1

0xe33c,	// (0x00092b38) list_medium_line_x2_t3_g4_g2_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x2_t3_g4_g2

0xe33c,	// (0x00092b38) list_medium_line_x2_t3_g4_g3_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x2_t3_g4_g3

0xe33c,	// (0x00092b38) list_medium_line_x2_t3_g4_g4_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x0009399a) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x0009399a) list_medium_line_x2_t3_g4_g

0xe384,	// (0x00092b80) list_medium_line_x2_t3_g4_t1_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_x2_t3_g4_t1

0xe384,	// (0x00092b80) list_medium_line_x2_t3_g4_t2_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_x2_t3_g4_t2

0xe384,	// (0x00092b80) list_medium_line_x2_t3_g4_t3_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x0009398e) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x0009398e) list_medium_line_x2_t3_g4_t

0xe33c,	// (0x00092b38) list_medium_line_g2_g1_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_g2_g1

0xe33c,	// (0x00092b38) list_medium_line_g2_g2_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x00093995) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x00093995) list_medium_line_g2_g

0xe384,	// (0x00092b80) list_medium_line_g2_t1_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_g2_t1

0xe33c,	// (0x00092b38) list_medium_line_t3_g2_g1_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_t3_g2_g1

0xe33c,	// (0x00092b38) list_medium_line_t3_g2_g2_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x00093995) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x00093995) list_medium_line_t3_g2_g

0xe384,	// (0x00092b80) list_medium_line_t3_g2_t1_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_t3_g2_t1

0xe384,	// (0x00092b80) list_medium_line_t3_g2_t2_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_t3_g2_t2

0xe384,	// (0x00092b80) list_medium_line_t3_g2_t3_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x0009398e) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x0009398e) list_medium_line_t3_g2_t

0xe37a,	// (0x00092b76) list_medium_line_right_icon_g1

0xeaea,	// (0x000932e6) list_medium_line_right_icon_t1

0xe33c,	// (0x00092b38) list_medium_line_t2_g1_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_t2_g1

0xe384,	// (0x00092b80) list_medium_line_t2_t1_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_t2_t1

0xe384,	// (0x00092b80) list_medium_line_t2_t2_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_t2_t2

0x0001,

0xf20e,	// (0x00093a0a) list_medium_line_t2_t_ParamLimits

0xf20e,	// (0x00093a0a) list_medium_line_t2_t

0xe33c,	// (0x00092b38) list_medium_line_t3_g1_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_t3_g1

0xe384,	// (0x00092b80) list_medium_line_t3_t1_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_t3_t1

0xe384,	// (0x00092b80) list_medium_line_t3_t2_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_t3_t2

0xe384,	// (0x00092b80) list_medium_line_t3_t3_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x0009398e) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x0009398e) list_medium_line_t3_t

0xe33c,	// (0x00092b38) list_medium_line_g3_g1_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_g3_g1

0xe33c,	// (0x00092b38) list_medium_line_g3_g2_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_g3_g2

0xe33c,	// (0x00092b38) list_medium_line_g3_g3_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x00093987) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x00093987) list_medium_line_g3_g

0xe384,	// (0x00092b80) list_medium_line_g3_t1_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_g3_t1

0xe33c,	// (0x00092b38) list_medium_line_t2_g3_g1_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_t2_g3_g1

0xe33c,	// (0x00092b38) list_medium_line_t2_g3_g2_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_t2_g3_g2

0xe33c,	// (0x00092b38) list_medium_line_t2_g3_g3_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x00093987) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x00093987) list_medium_line_t2_g3_g

0xe384,	// (0x00092b80) list_medium_line_t2_g3_t1_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_t2_g3_t1

0xe384,	// (0x00092b80) list_medium_line_t2_g3_t2_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_t2_g3_t2

0x0001,

0xf20e,	// (0x00093a0a) list_medium_line_t2_g3_t_ParamLimits

0xf20e,	// (0x00093a0a) list_medium_line_t2_g3_t

0xe33c,	// (0x00092b38) list_medium_line_t3_g3_g1_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_t3_g3_g1

0xe33c,	// (0x00092b38) list_medium_line_t3_g3_g2_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_t3_g3_g2

0xe33c,	// (0x00092b38) list_medium_line_t3_g3_g3_ParamLimits

0xe33c,	// (0x00092b38) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x00093987) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x00093987) list_medium_line_t3_g3_g

0xe384,	// (0x00092b80) list_medium_line_t3_g3_t1_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_t3_g3_t1

0xe384,	// (0x00092b80) list_medium_line_t3_g3_t2_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_t3_g3_t2

0xe384,	// (0x00092b80) list_medium_line_t3_g3_t3_ParamLimits

0xe384,	// (0x00092b80) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x0009398e) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x0009398e) list_medium_line_t3_g3_t

0xe37a,	// (0x00092b76) list_medium_line_right_iconx2_g1

0xe37a,	// (0x00092b76) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x00093888) list_medium_line_right_iconx2_g

0xeaea,	// (0x000932e6) list_medium_line_right_iconx2_t1

0xe37a,	// (0x00092b76) list_medium_line_t2_right_iconx2_g1

0xe37a,	// (0x00092b76) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x00093888) list_medium_line_t2_right_iconx2_g

0xeaea,	// (0x000932e6) list_medium_line_t2_right_iconx2_t1

0xeaea,	// (0x000932e6) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbc8,	// (0x000943c4) list_medium_line_t2_right_iconx2_t

0xeaea,	// (0x000932e6) list_medium_line_x4_t4_t1

0xeaea,	// (0x000932e6) list_medium_line_x4_t4_t2

0xeaea,	// (0x000932e6) list_medium_line_x4_t4_t3

0xeaea,	// (0x000932e6) list_medium_line_x4_t4_t4

0x0003,

0xf260,	// (0x00093a5c) list_medium_line_x4_t4_t

0xadf4,	// (0x0008f5f0) tport_appsw_pane_ParamLimits

0xadf4,	// (0x0008f5f0) tport_appsw_pane

0xae02,	// (0x0008f5fe) tport_contact_pane_ParamLimits

0xae02,	// (0x0008f5fe) tport_contact_pane

0xae12,	// (0x0008f60e) tport_listscroll_pane_ParamLimits

0xae12,	// (0x0008f60e) tport_listscroll_pane

0xae22,	// (0x0008f61e) cell_tport_appsw_pane_ParamLimits

0xae22,	// (0x0008f61e) cell_tport_appsw_pane

0xe34a,	// (0x00092b46) tport_appsw_pane_g1_ParamLimits

0xe34a,	// (0x00092b46) tport_appsw_pane_g1

0x0866,	// (0x00085062) tport_contact_pane_g1

0xd7bd,	// (0x00091fb9) tport_contact_pane_t1

0x086f,	// (0x0008506b) tport_contact_pane_t2

0x0001,

0xfc08,	// (0x00094404) tport_contact_pane_t

0x087d,	// (0x00085079) list_tport_pane

0x0886,	// (0x00085082) scroll_pane_cp_030

0xae55,	// (0x0008f651) cell_tport_appsw_pane_g1

0xae65,	// (0x0008f661) cell_tport_appsw_pane_t1

0xae73,	// (0x0008f66f) grid_highlight_pane_cp019

0xae7b,	// (0x0008f677) list_tport_double_graphic_pane_ParamLimits

0xae7b,	// (0x0008f677) list_tport_double_graphic_pane

0xde1d,	// (0x00092619) list_highlight_pane_cp023_ParamLimits

0xde1d,	// (0x00092619) list_highlight_pane_cp023

0xae8c,	// (0x0008f688) list_tport_double_graphic_pane_g1_ParamLimits

0xae8c,	// (0x0008f688) list_tport_double_graphic_pane_g1

0xae99,	// (0x0008f695) list_tport_double_graphic_pane_t1_ParamLimits

0xae99,	// (0x0008f695) list_tport_double_graphic_pane_t1

0xaeae,	// (0x0008f6aa) list_tport_double_graphic_pane_t2_ParamLimits

0xaeae,	// (0x0008f6aa) list_tport_double_graphic_pane_t2

0x0001,

0xfc14,	// (0x00094410) list_tport_double_graphic_pane_t_ParamLimits

0xfc14,	// (0x00094410) list_tport_double_graphic_pane_t

0xdc3b,	// (0x00092437) main_cale_note_pane

0x8ef8,	// (0x0008d6f4) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8ef8,	// (0x0008d6f4) cell_vitu2_function_top_wide_pane_cp01

0xa91d,	// (0x0008f119) wait_bar_pane_cp05_ParamLimits

0xde1d,	// (0x00092619) listscroll_cmail_pane

0x0897,	// (0x00085093) list_cmail_pane

0xaec0,	// (0x0008f6bc) list_cmail_body_pane

0xaee7,	// (0x0008f6e3) list_single_cmail_header_caption_pane

0xaf10,	// (0x0008f70c) list_single_cmail_header_detail_pane_ParamLimits

0xaf10,	// (0x0008f70c) list_single_cmail_header_detail_pane

0x08ae,	// (0x000850aa) list_single_cmail_header_caption_pane_t1

0xaf4a,	// (0x0008f746) list_single_cmail_header_detail_pane_g1_ParamLimits

0xaf4a,	// (0x0008f746) list_single_cmail_header_detail_pane_g1

0x1e18,	// (0x00086614) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1e18,	// (0x00086614) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc19,	// (0x00094415) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc19,	// (0x00094415) list_single_cmail_header_detail_pane_g

0xaf60,	// (0x0008f75c) list_single_cmail_header_detail_pane_t1_ParamLimits

0xaf60,	// (0x0008f75c) list_single_cmail_header_detail_pane_t1

0xaf9c,	// (0x0008f798) list_single_cmail_header_editor_pane_bg_ParamLimits

0xaf9c,	// (0x0008f798) list_single_cmail_header_editor_pane_bg

0xd91a,	// (0x00092116) list_cmail_body_pane_g1

0x08f6,	// (0x000850f2) list_cmail_body_pane_t1

0xcc52,	// (0x0009144e) list_single_cmail_header_editor_pane_bg_g1

0xe812,	// (0x0009300e) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcc62,	// (0x0009145e) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcc5a,	// (0x00091456) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcea6,	// (0x000916a2) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcc82,	// (0x0009147e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcc72,	// (0x0009146e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcc7a,	// (0x00091476) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe7f2,	// (0x00092fee) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xafb3,	// (0x0008f7af) calenote_gesture_pane_ParamLimits

0xafb3,	// (0x0008f7af) calenote_gesture_pane

0xafcd,	// (0x0008f7c9) calenote_window_pane_ParamLimits

0xafcd,	// (0x0008f7c9) calenote_window_pane

0x0904,	// (0x00085100) popup_note_window_cp01

0xafe5,	// (0x0008f7e1) calenote_swipe_1_pane_ParamLimits

0xafe5,	// (0x0008f7e1) calenote_swipe_1_pane

0xab2f,	// (0x0008f32b) calenote_swipe_2_pane_ParamLimits

0xab2f,	// (0x0008f32b) calenote_swipe_2_pane

0x05a7,	// (0x00084da3) calenote_swipe_1_pane_g1_ParamLimits

0x05a7,	// (0x00084da3) calenote_swipe_1_pane_g1

0x0916,	// (0x00085112) calenote_swipe_1_pane_g2_ParamLimits

0x0916,	// (0x00085112) calenote_swipe_1_pane_g2

0x0001,

0xfc25,	// (0x00094421) calenote_swipe_1_pane_g_ParamLimits

0xfc25,	// (0x00094421) calenote_swipe_1_pane_g

0x0922,	// (0x0008511e) calenote_swipe_1_pane_t1_ParamLimits

0x0922,	// (0x0008511e) calenote_swipe_1_pane_t1

0x05a7,	// (0x00084da3) calenote_swipe_2_pane_g1_ParamLimits

0x05a7,	// (0x00084da3) calenote_swipe_2_pane_g1

0x0941,	// (0x0008513d) calenote_swipe_2_pane_g2_ParamLimits

0x0941,	// (0x0008513d) calenote_swipe_2_pane_g2

0x0001,

0xfc2a,	// (0x00094426) calenote_swipe_2_pane_g_ParamLimits

0xfc2a,	// (0x00094426) calenote_swipe_2_pane_g

0x094d,	// (0x00085149) calenote_swipe_2_pane_t1_ParamLimits

0x094d,	// (0x00085149) calenote_swipe_2_pane_t1

0xdc3b,	// (0x00092437) main_mup_navstr_pane

0x7e1b,	// (0x0008c617) main_mup3_pane_t7_ParamLimits

0x7e1b,	// (0x0008c617) main_mup3_pane_t7

0x85bb,	// (0x0008cdb7) main_mp4_pane_g6_ParamLimits

0x85bb,	// (0x0008cdb7) main_mp4_pane_g6

0x892f,	// (0x0008d12b) main_image3_pane_t4_ParamLimits

0x892f,	// (0x0008d12b) main_image3_pane_t4

0xaff8,	// (0x0008f7f4) popup_navstr_preview_pane_ParamLimits

0xaff8,	// (0x0008f7f4) popup_navstr_preview_pane

0xb004,	// (0x0008f800) scroll_navstr_pane_ParamLimits

0xb004,	// (0x0008f800) scroll_navstr_pane

0xdc3b,	// (0x00092437) bg_popup_preview_window_pane_cp04

0x0974,	// (0x00085170) popup_navstr_preview_pane_t1

0xb010,	// (0x0008f80c) scroll_navstr_pane_g1_ParamLimits

0xb010,	// (0x0008f80c) scroll_navstr_pane_g1

0xb01d,	// (0x0008f819) scroll_navstr_pane_t1_ParamLimits

0xb01d,	// (0x0008f819) scroll_navstr_pane_t1

0x090d,	// (0x00085109) bg_button_pane_cp014

0x090d,	// (0x00085109) bg_button_pane_cp030

0xaa42,	// (0x0008f23e) list_double_fisheye_pane_g4_ParamLimits

0xaa42,	// (0x0008f23e) list_double_fisheye_pane_g4

0xaa4e,	// (0x0008f24a) list_double_fisheye_pane_g5_ParamLimits

0xaa4e,	// (0x0008f24a) list_double_fisheye_pane_g5

0x2822,	// (0x0008701e) sp_fs_scroll_pane_cp03

0x067c,	// (0x00084e78) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x0688,	// (0x00084e84) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbcd,	// (0x000943c9) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xabe4,	// (0x0008f3e0) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x08a6,	// (0x000850a2) sp_fs_scroll_pane_cp02

0xe51a,	// (0x00092d16) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe51a,	// (0x00092d16) popup_sp_fs_calendar_preview_list_single_pane

0xdc3b,	// (0x00092437) main_cam6_pano_pane

0x728b,	// (0x0008ba87) main_mup3_pane_ParamLimits

0xdc3b,	// (0x00092437) main_phacti_pane

0xa7f2,	// (0x0008efee) bg_button_pane_cp11

0xa80a,	// (0x0008f006) main_mobtv_info_pane_g2_ParamLimits

0xa80a,	// (0x0008f006) main_mobtv_info_pane_g2

0x0001,

0xfb2d,	// (0x00094329) main_mobtv_info_pane_g_ParamLimits

0xfb2d,	// (0x00094329) main_mobtv_info_pane_g

0xe398,	// (0x00092b94) sc_clock_pane_t5_ParamLimits

0xe398,	// (0x00092b94) sc_clock_pane_t5

0x2340,	// (0x00086b3c) main_radioblah_pane_g1_ParamLimits

0x282e,	// (0x0008702a) main_radioblah_pane_t3_ParamLimits

0x282e,	// (0x0008702a) main_radioblah_pane_t3

0x282e,	// (0x0008702a) main_radioblah_pane_t4_ParamLimits

0x282e,	// (0x0008702a) main_radioblah_pane_t4

0xe32e,	// (0x00092b2a) main_radioblah_text_pane_ParamLimits

0xe32e,	// (0x00092b2a) main_radioblah_text_pane

0xdb5e,	// (0x0009235a) main_radioblah_info_pane_g1_ParamLimits

0xdbb6,	// (0x000923b2) main_radioblah_info_pane_t4_ParamLimits

0xdbb6,	// (0x000923b2) main_radioblah_info_pane_t4

0xde1d,	// (0x00092619) main_sp_fs_calendar_pane

0xb02f,	// (0x0008f82b) main_phacti_pane_g1

0xb037,	// (0x0008f833) phacti_note_pane_ParamLimits

0xb037,	// (0x0008f833) phacti_note_pane

0x098b,	// (0x00085187) phacti_term_pane_ParamLimits

0x098b,	// (0x00085187) phacti_term_pane

0x09a0,	// (0x0008519c) phacti_note_pane_t1_ParamLimits

0x09a0,	// (0x0008519c) phacti_note_pane_t1

0x09b7,	// (0x000851b3) phacti_term_pane_g1

0x09bf,	// (0x000851bb) phacti_term_pane_t1_ParamLimits

0x09bf,	// (0x000851bb) phacti_term_pane_t1

0x09e9,	// (0x000851e5) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe5d7,	// (0x00092dd3) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc34,	// (0x00094430) popup_sp_fs_calendar_preview_list_single_pane_g

0x09f1,	// (0x000851ed) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x09f1,	// (0x000851ed) popup_sp_fs_calendar_preview_list_single_pane_t1

0x0a07,	// (0x00085203) aid_popup_sp_fs_bg_corner_pane

0xe37a,	// (0x00092b76) popup_sp_fs_calendar_preview_bg_pane_g1

0xdc3b,	// (0x00092437) popup_sp_fs_calendar_preview_bg_pane

0x0a0f,	// (0x0008520b) popup_sp_fs_calendar_preview_list_pane

0x0a20,	// (0x0008521c) bg_main_sp_fs_cale_pane_ParamLimits

0x0a20,	// (0x0008521c) bg_main_sp_fs_cale_pane

0x0a38,	// (0x00085234) listscroll_cale_mrui_pane_ParamLimits

0x0a38,	// (0x00085234) listscroll_cale_mrui_pane

0x3332,	// (0x00087b2e) listscroll_sp_fs_schedule_track_pane

0x0a50,	// (0x0008524c) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x0a50,	// (0x0008524c) main_sp_fs_ctrlbar_pane_cp01

0x3332,	// (0x00087b2e) main_sp_fs_ribbon_pane

0x0a66,	// (0x00085262) popup_sp_fs_cale_preview_window

0x0a78,	// (0x00085274) list_single_sp_fs_schedule_track_pane_ParamLimits

0x0a78,	// (0x00085274) list_single_sp_fs_schedule_track_pane

0x0a78,	// (0x00085274) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0a78,	// (0x00085274) bg_sp_fs_highlight_list_pane_cp03

0x7aff,	// (0x0008c2fb) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x7aff,	// (0x0008c2fb) list_single_sp_fs_schedule_track_pane_g1

0x7aff,	// (0x0008c2fb) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x7aff,	// (0x0008c2fb) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc39,	// (0x00094435) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc39,	// (0x00094435) list_single_sp_fs_schedule_track_pane_g

0xb04d,	// (0x0008f849) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xb04d,	// (0x0008f849) list_single_sp_fs_schedule_track_pane_t1

0x034b,	// (0x00084b47) sp_fs_schedule_track_pane_ParamLimits

0x034b,	// (0x00084b47) sp_fs_schedule_track_pane

0x333a,	// (0x00087b36) sp_fs_schedule_track_pane_g1

0x333a,	// (0x00087b36) sp_fs_schedule_track_pane_g2

0x333a,	// (0x00087b36) sp_fs_schedule_track_pane_g3

0x333a,	// (0x00087b36) sp_fs_schedule_track_pane_g4

0x333a,	// (0x00087b36) sp_fs_schedule_track_pane_g5

0x0004,

0xfc3e,	// (0x0009443a) sp_fs_schedule_track_pane_g

0x333a,	// (0x00087b36) bg_sp_fs_schedule_viewer_highlight_g1

0x333a,	// (0x00087b36) bg_sp_fs_schedule_viewer_highlight_g2

0x333a,	// (0x00087b36) bg_sp_fs_schedule_viewer_highlight_g3

0x333a,	// (0x00087b36) bg_sp_fs_schedule_viewer_highlight_g4

0x333a,	// (0x00087b36) bg_sp_fs_schedule_viewer_highlight_g5

0x333a,	// (0x00087b36) bg_sp_fs_schedule_viewer_highlight_g6

0x333a,	// (0x00087b36) bg_sp_fs_schedule_viewer_highlight_g7

0x333a,	// (0x00087b36) bg_sp_fs_schedule_viewer_highlight_g8

0x333a,	// (0x00087b36) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc49,	// (0x00094445) bg_sp_fs_schedule_viewer_highlight_g

0x3332,	// (0x00087b2e) bg_main_sp_fs_ribbon_pane

0x333a,	// (0x00087b36) main_sp_fs_ribbon_pane_g1

0x0a84,	// (0x00085280) main_sp_fs_ribbon_pane_t1

0x0a84,	// (0x00085280) main_sp_fs_ribbon_pane_t2

0x0a84,	// (0x00085280) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc5c,	// (0x00094458) main_sp_fs_ribbon_pane_t

0x3332,	// (0x00087b2e) main_sp_fs_ribbon_scheduler_pane

0x333a,	// (0x00087b36) bg_main_sp_fs_ribbon_pane_g1

0x333a,	// (0x00087b36) bg_main_sp_fs_ribbon_pane_g2

0x333a,	// (0x00087b36) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xf6a5,	// (0x00093ea1) bg_main_sp_fs_ribbon_pane_g

0x333a,	// (0x00087b36) main_sp_fs_ribbon_scheduler_pane_g1

0x333a,	// (0x00087b36) main_sp_fs_ribbon_scheduler_pane_g2

0x333a,	// (0x00087b36) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xf6a5,	// (0x00093ea1) main_sp_fs_ribbon_scheduler_pane_g

0x0a92,	// (0x0008528e) list_cale_mrui_pane

0xb05f,	// (0x0008f85b) sp_fs_scroll_pane_cp07_ParamLimits

0xb05f,	// (0x0008f85b) sp_fs_scroll_pane_cp07

0x0a78,	// (0x00085274) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x0a78,	// (0x00085274) bg_sp_fs_schedule_viewer_highlight

0x3332,	// (0x00087b2e) list_single_sp_fs_schedule_track_pane_cp01

0x3332,	// (0x00087b2e) list_sp_fs_schedule_track_pane

0x0a9f,	// (0x0008529b) sp_fs_scroll_pane_cp06_ParamLimits

0x0a9f,	// (0x0008529b) sp_fs_scroll_pane_cp06

0xe37a,	// (0x00092b76) bgmain_sp_fs_calendar_pane_g1

0xb07b,	// (0x0008f877) list_single_cale_mrui_pane_ParamLimits

0xb07b,	// (0x0008f877) list_single_cale_mrui_pane

0x0ab3,	// (0x000852af) list_single_cale_mrui_row_pane_ParamLimits

0x0ab3,	// (0x000852af) list_single_cale_mrui_row_pane

0x0ac0,	// (0x000852bc) list_single_cale_mrui_row_pane_g1_ParamLimits

0x0ac0,	// (0x000852bc) list_single_cale_mrui_row_pane_g1

0x0b05,	// (0x00085301) list_single_cale_mrui_row_pane_t1_ParamLimits

0x0b05,	// (0x00085301) list_single_cale_mrui_row_pane_t1

0xb0a5,	// (0x0008f8a1) list_single_cale_mrui_row_pane_t2_ParamLimits

0xb0a5,	// (0x0008f8a1) list_single_cale_mrui_row_pane_t2

0x0b17,	// (0x00085313) list_single_cale_mrui_row_pane_t3_ParamLimits

0x0b17,	// (0x00085313) list_single_cale_mrui_row_pane_t3

0x0b46,	// (0x00085342) list_single_cale_mrui_row_pane_t4_ParamLimits

0x0b46,	// (0x00085342) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc6a,	// (0x00094466) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc6a,	// (0x00094466) list_single_cale_mrui_row_pane_t

0xb10b,	// (0x0008f907) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xb10b,	// (0x0008f907) list_single_cmail_header_editor_pane_bg_cp01

0xb133,	// (0x0008f92f) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xb133,	// (0x0008f92f) list_single_cmail_header_editor_pane_bg_cp02

0x0b75,	// (0x00085371) main_radioblah_text_pane_t1_ParamLimits

0x0b75,	// (0x00085371) main_radioblah_text_pane_t1

0x0b8f,	// (0x0008538b) cam6_indi_pane_cp01

0x0b97,	// (0x00085393) cam6_mode_pane_cp01

0x0b9f,	// (0x0008539b) cam6_pano_pane

0x0ba8,	// (0x000853a4) cam6_zoom_pane_cp01

0x0bb0,	// (0x000853ac) cam6_pano_image_pane

0x0bbb,	// (0x000853b7) cam6_pano_pane_g1

0xd91a,	// (0x00092116) cam6_pano_pane_g2

0x0bc4,	// (0x000853c0) cam6_pano_pane_g3

0x0bcd,	// (0x000853c9) cam6_pano_pane_g4

0x35cd,	// (0x00087dc9) cam6_pano_pane_g5

0x0bd6,	// (0x000853d2) cam6_pano_pane_g6

0x0be0,	// (0x000853dc) cam6_pano_pane_g7

0x0be8,	// (0x000853e4) cam6_pano_pane_g8

0x0bf1,	// (0x000853ed) cam6_pano_pane_g9

0x0008,

0xfc73,	// (0x0009446f) cam6_pano_pane_g

0xdc3b,	// (0x00092437) main_browser_tag_pane

0x096c,	// (0x00085168) grid_navstr_albumart_pane

0x0bfc,	// (0x000853f8) cell_navstr_albumart_pane_ParamLimits

0x0bfc,	// (0x000853f8) cell_navstr_albumart_pane

0x0c1c,	// (0x00085418) cell_navstr_albumart_pane_g1

0x0c24,	// (0x00085420) cell_navstr_albumart_pane_g2

0x0c2c,	// (0x00085428) cell_navstr_albumart_pane_g3

0x0c34,	// (0x00085430) cell_navstr_albumart_pane_g4

0x0003,

0xfc86,	// (0x00094482) cell_navstr_albumart_pane_g

0xb14f,	// (0x0008f94b) bt_list_pane_ParamLimits

0xb14f,	// (0x0008f94b) bt_list_pane

0xb16f,	// (0x0008f96b) bt_list_pane_t1

0xb17e,	// (0x0008f97a) bt_list_pane_t2

0x0001,

0xfc8f,	// (0x0009448b) bt_list_pane_t

0xdc3b,	// (0x00092437) main_cale_prevew_pane

0xb18d,	// (0x0008f989) popup_cale_preview_window_ParamLimits

0xb18d,	// (0x0008f989) popup_cale_preview_window

0xde1d,	// (0x00092619) bg_popup_preview_window_pane_cp05_ParamLimits

0xde1d,	// (0x00092619) bg_popup_preview_window_pane_cp05

0x0c3c,	// (0x00085438) list_cale_preview_pane_ParamLimits

0x0c3c,	// (0x00085438) list_cale_preview_pane

0xb1a6,	// (0x0008f9a2) list_double_cale_preview_pane_ParamLimits

0xb1a6,	// (0x0008f9a2) list_double_cale_preview_pane

0xb1b8,	// (0x0008f9b4) list_single_cale_preview_pane_ParamLimits

0xb1b8,	// (0x0008f9b4) list_single_cale_preview_pane

0xb1ce,	// (0x0008f9ca) list_single_cale_preview_pane_g1

0xb1d6,	// (0x0008f9d2) list_single_cale_preview_pane_t1_ParamLimits

0xb1d6,	// (0x0008f9d2) list_single_cale_preview_pane_t1

0xb1eb,	// (0x0008f9e7) list_double_cale_preview_pane_g1

0xb1f3,	// (0x0008f9ef) list_double_cale_preview_pane_t1_ParamLimits

0xb1f3,	// (0x0008f9ef) list_double_cale_preview_pane_t1

0xb208,	// (0x0008fa04) list_double_cale_preview_pane_t2_ParamLimits

0xb208,	// (0x0008fa04) list_double_cale_preview_pane_t2

0x0001,

0xfc94,	// (0x00094490) list_double_cale_preview_pane_t_ParamLimits

0xfc94,	// (0x00094490) list_double_cale_preview_pane_t

0xdc3b,	// (0x00092437) main_ezdial_pane

0xde1d,	// (0x00092619) main_sp_fs_email_pane_ParamLimits

0xab49,	// (0x0008f345) cmail_ddmenu_btn01_pane_ParamLimits

0xab49,	// (0x0008f345) cmail_ddmenu_btn01_pane

0xab66,	// (0x0008f362) cmail_ddmenu_btn02_pane_ParamLimits

0xab66,	// (0x0008f362) cmail_ddmenu_btn02_pane

0xab84,	// (0x0008f380) cmail_ddmenu_btn03_pane_ParamLimits

0xab84,	// (0x0008f380) cmail_ddmenu_btn03_pane

0xac1f,	// (0x0008f41b) main_sp_fs_ctrlbar_pane_ParamLimits

0xac35,	// (0x0008f431) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xaec0,	// (0x0008f6bc) list_cmail_body_pane_ParamLimits

0x08bc,	// (0x000850b8) bg_button_pane_cp12

0x08c5,	// (0x000850c1) list_single_cmail_header_detail_pane_g3_ParamLimits

0x08c5,	// (0x000850c1) list_single_cmail_header_detail_pane_g3

0x08d2,	// (0x000850ce) list_single_cmail_header_detail_pane_t2_ParamLimits

0x08d2,	// (0x000850ce) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc20,	// (0x0009441c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc20,	// (0x0009441c) list_single_cmail_header_detail_pane_t

0x09d4,	// (0x000851d0) phacti_term_pane_t2_ParamLimits

0x09d4,	// (0x000851d0) phacti_term_pane_t2

0x0001,

0xfc2f,	// (0x0009442b) phacti_term_pane_t_ParamLimits

0xfc2f,	// (0x0009442b) phacti_term_pane_t

0x0c48,	// (0x00085444) aid_size_list_single_double

0xb220,	// (0x0008fa1c) popup_ezdial_listscroll_window

0x0c54,	// (0x00085450) popup_number_entry_window_cp01

0xe5f0,	// (0x00092dec) bg_popup_call_pane_cp09

0x0c61,	// (0x0008545d) ezdial_list_pane

0x0c69,	// (0x00085465) scroll_pane_cp23

0x2cfe,	// (0x000874fa) bg_button_pane_cp028_ParamLimits

0x2cfe,	// (0x000874fa) bg_button_pane_cp028

0xb239,	// (0x0008fa35) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb239,	// (0x0008fa35) cmail_ddmenu_btn01_pane_g1

0xb249,	// (0x0008fa45) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb249,	// (0x0008fa45) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc99,	// (0x00094495) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc99,	// (0x00094495) cmail_ddmenu_btn01_pane_g

0x0c71,	// (0x0008546d) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x0c71,	// (0x0008546d) cmail_ddmenu_btn01_pane_t1

0x1993,	// (0x0008618f) bg_button_pane_cp029_ParamLimits

0x1993,	// (0x0008618f) bg_button_pane_cp029

0xb255,	// (0x0008fa51) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb255,	// (0x0008fa51) cmail_ddmenu_btn02_pane_g1

0xb26d,	// (0x0008fa69) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb26d,	// (0x0008fa69) cmail_ddmenu_btn02_pane_t1

0xe32e,	// (0x00092b2a) bg_button_pane_cp031_ParamLimits

0xe32e,	// (0x00092b2a) bg_button_pane_cp031

0xb255,	// (0x0008fa51) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb255,	// (0x0008fa51) cmail_ddmenu_btn03_pane_g1

0xb26d,	// (0x0008fa69) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb26d,	// (0x0008fa69) cmail_ddmenu_btn03_pane_t1

0xe384,	// (0x00092b80) cell_dialer2_keypad_pane_t1_ParamLimits

0x360b,	// (0x00087e07) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x360b,	// (0x00087e07) cell_dialer2_keypad_pane_t1_copy1

0xa633,	// (0x0008ee2f) ncimui_group_button_pane

0xde1d,	// (0x00092619) main_sp_fs_calendar_pane_ParamLimits

0xaee7,	// (0x0008f6e3) list_single_cmail_header_caption_pane_ParamLimits

0x0a17,	// (0x00085213) aid_recal_txt_sm_pane

0xdc3b,	// (0x00092437) mian_recal_day_pane

0x0a66,	// (0x00085262) popup_sp_fs_cale_preview_window_ParamLimits

0x0c87,	// (0x00085483) list_recal_day_pane

0x0cc9,	// (0x000854c5) list_single_recal_day_pane_ParamLimits

0x0cc9,	// (0x000854c5) list_single_recal_day_pane

0x0cdb,	// (0x000854d7) list_single_recal_day_pane_g1_ParamLimits

0x0cdb,	// (0x000854d7) list_single_recal_day_pane_g1

0x0ce7,	// (0x000854e3) list_single_recal_day_pane_g2_ParamLimits

0x0ce7,	// (0x000854e3) list_single_recal_day_pane_g2

0x0cf3,	// (0x000854ef) list_single_recal_day_pane_g3_ParamLimits

0x0cf3,	// (0x000854ef) list_single_recal_day_pane_g3

0xb291,	// (0x0008fa8d) list_single_recal_day_pane_g4_ParamLimits

0xb291,	// (0x0008fa8d) list_single_recal_day_pane_g4

0x0cff,	// (0x000854fb) list_single_recal_day_pane_g5_ParamLimits

0x0cff,	// (0x000854fb) list_single_recal_day_pane_g5

0x0d0b,	// (0x00085507) list_single_recal_day_pane_g6_ParamLimits

0x0d0b,	// (0x00085507) list_single_recal_day_pane_g6

0x0004,

0xfca8,	// (0x000944a4) list_single_recal_day_pane_g_ParamLimits

0xfca8,	// (0x000944a4) list_single_recal_day_pane_g

0x0d1f,	// (0x0008551b) list_single_recal_day_pane_t1

0x0d31,	// (0x0008552d) list_single_recal_day_pane_t2

0x0001,

0xfcb3,	// (0x000944af) list_single_recal_day_pane_t

0xb2a9,	// (0x0008faa5) ncimui_query_button_pane_ParamLimits

0xb2a9,	// (0x0008faa5) ncimui_query_button_pane

0xb2b9,	// (0x0008fab5) ncimui_query_button_pane_t1_ParamLimits

0xb2b9,	// (0x0008fab5) ncimui_query_button_pane_t1

0x0d43,	// (0x0008553f) ncimui_query_button_pane_t2_ParamLimits

0x0d43,	// (0x0008553f) ncimui_query_button_pane_t2

0x0001,

0xfcb8,	// (0x000944b4) ncimui_query_button_pane_t_ParamLimits

0xfcb8,	// (0x000944b4) ncimui_query_button_pane_t

0xb2cc,	// (0x0008fac8) query_button_pane_ParamLimits

0xb2cc,	// (0x0008fac8) query_button_pane

0xdc3b,	// (0x00092437) bg_button_pane_cp0028

0x0d56,	// (0x00085552) query_button_pane_t1

0x72a7,	// (0x0008baa3) main_tport_pane_ParamLimits

0xadca,	// (0x0008f5c6) bg_popup_window_pane_cp01_ParamLimits

0xadca,	// (0x0008f5c6) bg_popup_window_pane_cp01

0xadd8,	// (0x0008f5d4) heading_pane_cp08_ParamLimits

0xadd8,	// (0x0008f5d4) heading_pane_cp08

0xade6,	// (0x0008f5e2) heading_pane_cp07_ParamLimits

0xade6,	// (0x0008f5e2) heading_pane_cp07

0xae55,	// (0x0008f651) cell_tport_appsw_pane_g2

0x0002,

0xfc0d,	// (0x00094409) cell_tport_appsw_pane_g

0x69de,	// (0x0008b1da) input_candi_list_open_g1

0xe995,	// (0x00093191) list_cale_time_pane_g6_ParamLimits

0xe995,	// (0x00093191) list_cale_time_pane_g6

0x77a2,	// (0x0008bf9e) aid_size_touch_calib_1_ParamLimits

0x77a2,	// (0x0008bf9e) aid_size_touch_calib_1

0x77ae,	// (0x0008bfaa) aid_size_touch_calib_2_ParamLimits

0x77ae,	// (0x0008bfaa) aid_size_touch_calib_2

0x77bc,	// (0x0008bfb8) aid_size_touch_calib_3_ParamLimits

0x77bc,	// (0x0008bfb8) aid_size_touch_calib_3

0x77cc,	// (0x0008bfc8) aid_size_touch_calib_4_ParamLimits

0x77cc,	// (0x0008bfc8) aid_size_touch_calib_4

0x77da,	// (0x0008bfd6) main_touch_calib_button_group_pane_ParamLimits

0x77da,	// (0x0008bfd6) main_touch_calib_button_group_pane

0x77e8,	// (0x0008bfe4) main_touch_calib_pane_g1_ParamLimits

0x77f4,	// (0x0008bff0) main_touch_calib_pane_g2_ParamLimits

0x7800,	// (0x0008bffc) main_touch_calib_pane_g3_ParamLimits

0x780c,	// (0x0008c008) main_touch_calib_pane_g4_ParamLimits

0xf653,	// (0x00093e4f) main_touch_calib_pane_g_ParamLimits

0x7818,	// (0x0008c014) main_touch_calib_pane_t1_ParamLimits

0x7831,	// (0x0008c02d) main_touch_calib_pane_t2_ParamLimits

0x784a,	// (0x0008c046) main_touch_calib_pane_t3_ParamLimits

0x7860,	// (0x0008c05c) main_touch_calib_pane_t4_ParamLimits

0x7876,	// (0x0008c072) main_touch_calib_pane_t5_ParamLimits

0xf65c,	// (0x00093e58) main_touch_calib_pane_t_ParamLimits

0x339a,	// (0x00087b96) list_single_fp_cale_pane_g3_ParamLimits

0x339a,	// (0x00087b96) list_single_fp_cale_pane_g3

0x728b,	// (0x0008ba87) bg_button_pane_cp012_ParamLimits

0x728b,	// (0x0008ba87) bg_vkb2_func_pane_cp03_ParamLimits

0x9739,	// (0x0008df35) cell_vitu2_function_top_pane_g1_ParamLimits

0x728b,	// (0x0008ba87) bg_vkb2_func_pane_cp04_ParamLimits

0xa5bb,	// (0x0008edb7) main_ncimui_button_group_pane_ParamLimits

0xa5bb,	// (0x0008edb7) main_ncimui_button_group_pane

0xa621,	// (0x0008ee1d) main_ncimui_pane_t3_ParamLimits

0xa621,	// (0x0008ee1d) main_ncimui_pane_t3

0x0982,	// (0x0008517e) phacti_button_group_pane

0x0c48,	// (0x00085444) aid_size_list_single_double_ParamLimits

0xb220,	// (0x0008fa1c) popup_ezdial_listscroll_window_ParamLimits

0x0c54,	// (0x00085450) popup_number_entry_window_cp01_ParamLimits

0xb2d9,	// (0x0008fad5) phacti_button_pane_ParamLimits

0xb2d9,	// (0x0008fad5) phacti_button_pane

0xdc3b,	// (0x00092437) bg_button_pane_cp14

0x0d64,	// (0x00085560) phacti_button_pane_t1

0xb2ea,	// (0x0008fae6) main_touch_calib_button_pane_ParamLimits

0xb2ea,	// (0x0008fae6) main_touch_calib_button_pane

0xe3d8,	// (0x00092bd4) bg_button_pane_cp18_ParamLimits

0xe3d8,	// (0x00092bd4) bg_button_pane_cp18

0x0d72,	// (0x0008556e) main_touch_calib_button_pane_t1_ParamLimits

0x0d72,	// (0x0008556e) main_touch_calib_button_pane_t1

0x0d88,	// (0x00085584) main_touch_calib_button_pane_t2_ParamLimits

0x0d88,	// (0x00085584) main_touch_calib_button_pane_t2

0x0001,

0xfcbd,	// (0x000944b9) main_touch_calib_button_pane_t_ParamLimits

0xfcbd,	// (0x000944b9) main_touch_calib_button_pane_t

0xdc3b,	// (0x00092437) cell_ncimui_button_pane

0xdc3b,	// (0x00092437) bg_button_pane_cp032

0x0da6,	// (0x000855a2) cell_ncimui_button_pane_t1

0x8842,	// (0x0008d03e) image3_infobar_pane_ParamLimits

0x8842,	// (0x0008d03e) image3_infobar_pane

0xa963,	// (0x0008f15f) fs_bigclock_status_pane_ParamLimits

0xa963,	// (0x0008f15f) fs_bigclock_status_pane

0xa970,	// (0x0008f16c) main_fs_bigclock_clock_pane_ParamLimits

0xa970,	// (0x0008f16c) main_fs_bigclock_clock_pane

0xa984,	// (0x0008f180) main_fs_bigclock_indi_pane_ParamLimits

0xa984,	// (0x0008f180) main_fs_bigclock_indi_pane

0xa9ac,	// (0x0008f1a8) main_fs_bigclock_swipe_pane_ParamLimits

0xa9ac,	// (0x0008f1a8) main_fs_bigclock_swipe_pane

0xdc3b,	// (0x00092437) main_fs_clock_dumped_data

0xda27,	// (0x00092223) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xda27,	// (0x00092223) list_single_fs_bigclock_indicator_pane_g1

0xda42,	// (0x0009223e) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xda42,	// (0x0009223e) list_single_fs_bigclock_indicator_pane_g2

0xda5c,	// (0x00092258) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xda5c,	// (0x00092258) list_single_fs_bigclock_indicator_pane_g3

0xda76,	// (0x00092272) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xda76,	// (0x00092272) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb61,	// (0x0009435d) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb61,	// (0x0009435d) list_single_fs_bigclock_indicator_pane_g

0xdaa1,	// (0x0009229d) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdaa1,	// (0x0009229d) list_single_fs_bigclock_indicator_pane_t1

0xdac9,	// (0x000922c5) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdac9,	// (0x000922c5) list_single_fs_bigclock_indicator_pane_t2

0xdaf1,	// (0x000922ed) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdaf1,	// (0x000922ed) list_single_fs_bigclock_indicator_pane_t3

0xdb19,	// (0x00092315) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdb19,	// (0x00092315) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb6c,	// (0x00094368) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb6c,	// (0x00094368) list_single_fs_bigclock_indicator_pane_t

0x0db4,	// (0x000855b0) image3_infobar_fav_pane_ParamLimits

0x0db4,	// (0x000855b0) image3_infobar_fav_pane

0x0dc4,	// (0x000855c0) image3_infobar_loc_pane_ParamLimits

0x0dc4,	// (0x000855c0) image3_infobar_loc_pane

0x0dd8,	// (0x000855d4) image3_infobar_time_pane_ParamLimits

0x0dd8,	// (0x000855d4) image3_infobar_time_pane

0xe37a,	// (0x00092b76) image3_infobar_time_pane_g1

0x0de8,	// (0x000855e4) image3_infobar_time_pane_t1

0xe37a,	// (0x00092b76) image3_infobar_loc_pane_g1

0x0df6,	// (0x000855f2) image3_infobar_loc_pane_g2

0x0001,

0xfcc2,	// (0x000944be) image3_infobar_loc_pane_g

0x0dfe,	// (0x000855fa) image3_infobar_loc_pane_t1

0xe37a,	// (0x00092b76) image3_infobar_fav_pane_g1

0x0e0c,	// (0x00085608) image3_infobar_fav_pane_g2

0x0001,

0xfcc7,	// (0x000944c3) image3_infobar_fav_pane_g

0x0e14,	// (0x00085610) fs_bigclock_status_battery_pane

0x0e1d,	// (0x00085619) fs_bigclock_status_signal_pane

0x0e26,	// (0x00085622) fs_bigclock_status_title_pane

0x0e2f,	// (0x0008562b) fs_bigclock_status_signal_pane_g1

0x0e38,	// (0x00085634) fs_bigclock_status_signal_pane_g2

0x0001,

0xfccc,	// (0x000944c8) fs_bigclock_status_signal_pane_g

0x0e40,	// (0x0008563c) fs_bigclock_status_battery_pane_g1

0x0e49,	// (0x00085645) fs_bigclock_status_battery_pane_g2

0x0001,

0xfcd1,	// (0x000944cd) fs_bigclock_status_battery_pane_g

0x0e51,	// (0x0008564d) fs_bigclock_status_title_pane_t1

0xb2fa,	// (0x0008faf6) main_fs_bigclock_clock_pane_g1

0xb2fa,	// (0x0008faf6) main_fs_bigclock_clock_pane_g2

0xb2fa,	// (0x0008faf6) main_fs_bigclock_clock_pane_g3

0xb2fa,	// (0x0008faf6) main_fs_bigclock_clock_pane_g4

0x0003,

0xfcd6,	// (0x000944d2) main_fs_bigclock_clock_pane_g

0xb306,	// (0x0008fb02) main_fs_bigclock_clock_pane_t1

0xb31a,	// (0x0008fb16) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcdf,	// (0x000944db) main_fs_bigclock_clock_pane_t

0x0e5f,	// (0x0008565b) list_single_fs_bigclock_indicator_pane_ParamLimits

0x0e5f,	// (0x0008565b) list_single_fs_bigclock_indicator_pane

0x0e70,	// (0x0008566c) list_single_fs_bigclock_pane_ParamLimits

0x0e70,	// (0x0008566c) list_single_fs_bigclock_pane

0x0e96,	// (0x00085692) main_fs_bigclock_indicator_pane_t1

0x0ea5,	// (0x000856a1) list_single_fs_bigclock_pane_g1

0x0ead,	// (0x000856a9) list_single_fs_bigclock_pane_t1

0xe37a,	// (0x00092b76) main_fs_bigclock_swipe_pane_g1

0x0ef0,	// (0x000856ec) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfcf0,	// (0x000944ec) main_fs_bigclock_swipe_pane_g

0x0ef8,	// (0x000856f4) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x0ef8,	// (0x000856f4) main_fs_bigclock_swipe_pane_t1

0x64dc,	// (0x0008acd8) call_type_pane_ParamLimits

0xdc3b,	// (0x00092437) main_btmg_pane

0x0aec,	// (0x000852e8) list_single_cale_mrui_row_pane_g2_ParamLimits

0x0aec,	// (0x000852e8) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc63,	// (0x0009445f) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc63,	// (0x0009445f) list_single_cale_mrui_row_pane_g

0x0cb0,	// (0x000854ac) list_recal_vselct_arw_lo_pane

0x0cb8,	// (0x000854b4) list_recal_vselct_arw_up_pane

0x0cc0,	// (0x000854bc) list_recal_vselct_pane

0xb371,	// (0x0008fb6d) btmg_button_pane

0xb37d,	// (0x0008fb79) main_btmg_pane_g1

0xdc3b,	// (0x00092437) bg_button_pane_cp044

0x0f15,	// (0x00085711) btmg_button_pane_t1

0x2c1b,	// (0x00087417) aid_listscroll_gen

0xde1d,	// (0x00092619) main_cntbar_detail_pane

0x088f,	// (0x0008508b) list_cmail_folder_pane

0x2822,	// (0x0008701e) sp_fs_scroll_pane_cp03_ParamLimits

0xb385,	// (0x0008fb81) list_single_fs_dyc_pane_cp01_ParamLimits

0xb385,	// (0x0008fb81) list_single_fs_dyc_pane_cp01

0x0f23,	// (0x0008571f) aid_size_cmail_indent

0x0f2c,	// (0x00085728) list_single_dyc_row_pane_cp01

0xb3cd,	// (0x0008fbc9) cntbar_detail_list_pane_ParamLimits

0xb3cd,	// (0x0008fbc9) cntbar_detail_list_pane

0xb407,	// (0x0008fc03) main_cntbar_detail_cont_pane_ParamLimits

0xb407,	// (0x0008fc03) main_cntbar_detail_cont_pane

0x64d0,	// (0x0008accc) scroll_pane_cp032_ParamLimits

0x64d0,	// (0x0008accc) scroll_pane_cp032

0xb413,	// (0x0008fc0f) cntbar_detail_list_event_pane_ParamLimits

0xb413,	// (0x0008fc0f) cntbar_detail_list_event_pane

0xb3d9,	// (0x0008fbd5) cntbar_detail_list_shct_pane

0xe860,	// (0x0009305c) aid_list_gen

0x0f35,	// (0x00085731) aid_scroll

0x0f3e,	// (0x0008573a) aid_size_touch_scroll_bar

0xb427,	// (0x0008fc23) aid_list_double

0x0f47,	// (0x00085743) aid_list_single

0xb430,	// (0x0008fc2c) aid_list_single_lg

0x0f50,	// (0x0008574c) aid_list_z_g_a_sm

0x1e24,	// (0x00086620) aid_list_z_g_d

0x0f58,	// (0x00085754) aid_txt_z_prm

0xb439,	// (0x0008fc35) aid_txt_z_prm_cp01

0xb447,	// (0x0008fc43) aid_txt_z_sec

0xb455,	// (0x0008fc51) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb455,	// (0x0008fc51) main_cntbar_detail_cont_pane_g1

0xb462,	// (0x0008fc5e) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb462,	// (0x0008fc5e) main_cntbar_detail_cont_pane_g2

0x0001,

0xfcf5,	// (0x000944f1) main_cntbar_detail_cont_pane_g_ParamLimits

0xfcf5,	// (0x000944f1) main_cntbar_detail_cont_pane_g

0x0f66,	// (0x00085762) main_cntbar_detail_cont_pane_t1

0x0f74,	// (0x00085770) main_cntbar_detail_cont_pane_t2

0x0f82,	// (0x0008577e) main_cntbar_detail_cont_pane_t3

0x0002,

0xfcfa,	// (0x000944f6) main_cntbar_detail_cont_pane_t

0xb46e,	// (0x0008fc6a) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb46e,	// (0x0008fc6a) cell_cntbar_detail_list_shct_pane

0x0f90,	// (0x0008578c) cntbar_detail_list_shct_pane_g1

0x0f99,	// (0x00085795) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd01,	// (0x000944fd) cntbar_detail_list_shct_pane_g

0xb482,	// (0x0008fc7e) cntbar_detail_list_event_pane_g1_ParamLimits

0xb482,	// (0x0008fc7e) cntbar_detail_list_event_pane_g1

0xb48e,	// (0x0008fc8a) cntbar_detail_list_event_pane_g2_ParamLimits

0xb48e,	// (0x0008fc8a) cntbar_detail_list_event_pane_g2

0x0005,

0xfd06,	// (0x00094502) cntbar_detail_list_event_pane_g_ParamLimits

0xfd06,	// (0x00094502) cntbar_detail_list_event_pane_g

0xb4fa,	// (0x0008fcf6) cntbar_detail_list_event_pane_t1_ParamLimits

0xb4fa,	// (0x0008fcf6) cntbar_detail_list_event_pane_t1

0xb50f,	// (0x0008fd0b) cntbar_detail_list_event_pane_t2_ParamLimits

0xb50f,	// (0x0008fd0b) cntbar_detail_list_event_pane_t2

0x0002,

0xfd13,	// (0x0009450f) cntbar_detail_list_event_pane_t_ParamLimits

0xfd13,	// (0x0009450f) cntbar_detail_list_event_pane_t

0xe37a,	// (0x00092b76) cell_cntbar_detail_list_shct_pane_g1

0xef9c,	// (0x00093798) navi_pane_mv_g3

0xde1d,	// (0x00092619) main_cntbar_detail_pane_ParamLimits

0xdc3b,	// (0x00092437) main_notif_wgt_pane

0x84ea,	// (0x0008cce6) aid_tch_main_mp4_pane_g4

0x87bd,	// (0x0008cfb9) popup_slider_window_cp02

0x0ca6,	// (0x000854a2) list_recal_day_event_pane

0xb3ad,	// (0x0008fba9) cntbar_detail_btn_pane_ParamLimits

0xb3ad,	// (0x0008fba9) cntbar_detail_btn_pane

0xb3bd,	// (0x0008fbb9) cntbar_detail_btn_pane_cp01_ParamLimits

0xb3bd,	// (0x0008fbb9) cntbar_detail_btn_pane_cp01

0xb3d9,	// (0x0008fbd5) cntbar_detail_list_shct_pane_ParamLimits

0xb3e5,	// (0x0008fbe1) cntbar_detail_pane_g1_ParamLimits

0xb3e5,	// (0x0008fbe1) cntbar_detail_pane_g1

0xb3f1,	// (0x0008fbed) cntbar_detail_pane_t1_ParamLimits

0xb3f1,	// (0x0008fbed) cntbar_detail_pane_t1

0xb49a,	// (0x0008fc96) cntbar_detail_list_event_pane_g3_ParamLimits

0xb49a,	// (0x0008fc96) cntbar_detail_list_event_pane_g3

0xb4b2,	// (0x0008fcae) cntbar_detail_list_event_pane_g4_ParamLimits

0xb4b2,	// (0x0008fcae) cntbar_detail_list_event_pane_g4

0xb4ca,	// (0x0008fcc6) cntbar_detail_list_event_pane_g5_ParamLimits

0xb4ca,	// (0x0008fcc6) cntbar_detail_list_event_pane_g5

0xb4e2,	// (0x0008fcde) cntbar_detail_list_event_pane_g6_ParamLimits

0xb4e2,	// (0x0008fcde) cntbar_detail_list_event_pane_g6

0xb524,	// (0x0008fd20) cntbar_detail_list_event_pane_t3_ParamLimits

0xb524,	// (0x0008fd20) cntbar_detail_list_event_pane_t3

0xb536,	// (0x0008fd32) popup_notif_wgt_window_ParamLimits

0xb536,	// (0x0008fd32) popup_notif_wgt_window

0xb546,	// (0x0008fd42) popup_submenu_window_cp01_ParamLimits

0xb546,	// (0x0008fd42) popup_submenu_window_cp01

0xe5f0,	// (0x00092dec) bg_popup_window_pane_cp10

0x0fa2,	// (0x0008579e) listscroll_notif_wgt_pane

0x0fb4,	// (0x000857b0) list_notif_wgt_window

0x0fbd,	// (0x000857b9) scroll_pane_cp033

0xb558,	// (0x0008fd54) list_notif_wgt_row_pane_ParamLimits

0xb558,	// (0x0008fd54) list_notif_wgt_row_pane

0x0fc6,	// (0x000857c2) aid_size_list_notif_wgt_del

0x0fd3,	// (0x000857cf) list_notif_wgt_row_pane_g1

0x0fdf,	// (0x000857db) list_notif_wgt_row_pane_g2

0x0fee,	// (0x000857ea) list_notif_wgt_row_pane_g3

0x0002,

0xfd1a,	// (0x00094516) list_notif_wgt_row_pane_g

0x0ffb,	// (0x000857f7) list_notif_wgt_row_pane_t1

0x1011,	// (0x0008580d) list_notif_wgt_row_pane_t2

0x1023,	// (0x0008581f) list_notif_wgt_row_pane_t3

0x0002,

0xfd21,	// (0x0009451d) list_notif_wgt_row_pane_t

0xcec0,	// (0x000916bc) list_recal_day_event_pane_g1

0x1035,	// (0x00085831) list_recal_day_event_pane_t1

0xdc3b,	// (0x00092437) bg_button_pane_cp045

0x1044,	// (0x00085840) cntbar_detail_btn_pane_t1

0x1993,	// (0x0008618f) main_callh_pane_ParamLimits

0x1993,	// (0x0008618f) main_callh_pane

0xdc3b,	// (0x00092437) main_coverflow0_pane

0xdc3b,	// (0x00092437) main_wgtman_pane

0xa9c4,	// (0x0008f1c0) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xa9c4,	// (0x0008f1c0) main_fs_bigclock_unlock_btn_pane

0xae4d,	// (0x0008f649) bg_button_pane_cp16

0xae5d,	// (0x0008f659) cell_tport_appsw_pane_g3

0xb56a,	// (0x0008fd66) cf0_flow_pane_ParamLimits

0xb56a,	// (0x0008fd66) cf0_flow_pane

0x1052,	// (0x0008584e) listscroll_cf0_pane

0x105d,	// (0x00085859) main_cf0_pane_g1

0xb579,	// (0x0008fd75) main_cf0_pane_t1_ParamLimits

0xb579,	// (0x0008fd75) main_cf0_pane_t1

0xb58d,	// (0x0008fd89) main_cf0_pane_t2_ParamLimits

0xb58d,	// (0x0008fd89) main_cf0_pane_t2

0x0001,

0xfd2d,	// (0x00094529) main_cf0_pane_t_ParamLimits

0xfd2d,	// (0x00094529) main_cf0_pane_t

0x106f,	// (0x0008586b) scroll_pane_cp11

0xb5a1,	// (0x0008fd9d) cf0_flow_pane_g1

0xb5a9,	// (0x0008fda5) cf0_flow_pane_g2

0x0001,

0xfd32,	// (0x0009452e) cf0_flow_pane_g

0xb5b1,	// (0x0008fdad) cf0_flow_pane_t1

0xdc3b,	// (0x00092437) main_call6_pane

0xdc3b,	// (0x00092437) main_calllock_pane

0xb5bf,	// (0x0008fdbb) call6_btn_grp_pane_ParamLimits

0xb5bf,	// (0x0008fdbb) call6_btn_grp_pane

0xb5ce,	// (0x0008fdca) call6_pane_g1_ParamLimits

0xb5ce,	// (0x0008fdca) call6_pane_g1

0xb5de,	// (0x0008fdda) popup_call6_1st_window_ParamLimits

0xb5de,	// (0x0008fdda) popup_call6_1st_window

0xb5ec,	// (0x0008fde8) popup_call6_2nd_window_ParamLimits

0xb5ec,	// (0x0008fde8) popup_call6_2nd_window

0xb5fa,	// (0x0008fdf6) cell_call6_btn_pane_ParamLimits

0xb5fa,	// (0x0008fdf6) cell_call6_btn_pane

0xe5f0,	// (0x00092dec) bg_popup_call2_in_pane_cp03

0x107a,	// (0x00085876) popup_call6_1st_window_g1

0x1082,	// (0x0008587e) popup_call6_1st_window_g2

0x108a,	// (0x00085886) popup_call6_1st_window_g3

0x0002,

0xfd37,	// (0x00094533) popup_call6_1st_window_g

0x1092,	// (0x0008588e) popup_call6_1st_window_t1

0x10a1,	// (0x0008589d) popup_call6_1st_window_t2

0x10af,	// (0x000858ab) popup_call6_1st_window_t3

0x0002,

0xfd3e,	// (0x0009453a) popup_call6_1st_window_t

0xe5f0,	// (0x00092dec) bg_popup_call2_in_pane_cp04

0x10bd,	// (0x000858b9) popup_call6_2nd_window_g1

0x10c5,	// (0x000858c1) popup_call6_2nd_window_g2

0x10cd,	// (0x000858c9) popup_call6_2nd_window_g3

0x0002,

0xfd45,	// (0x00094541) popup_call6_2nd_window_g

0x10d5,	// (0x000858d1) popup_call6_2nd_window_t1

0x4871,	// (0x0008906d) bg_button_pane_cp15

0xb609,	// (0x0008fe05) cell_call6_btn_pane_g1

0xb612,	// (0x0008fe0e) cell_call6_btn_pane_t1

0xb621,	// (0x0008fe1d) listscroll_wgtman_pane_ParamLimits

0xb621,	// (0x0008fe1d) listscroll_wgtman_pane

0xb63d,	// (0x0008fe39) wgtman_btn_pane_ParamLimits

0xb63d,	// (0x0008fe39) wgtman_btn_pane

0xeda3,	// (0x0009359f) aid_scroll_copy1

0x10fc,	// (0x000858f8) list_wgtman_pane

0xb672,	// (0x0008fe6e) wgtman_btn_pane_g1_ParamLimits

0xb672,	// (0x0008fe6e) wgtman_btn_pane_g1

0xb69a,	// (0x0008fe96) wgtman_btn_pane_t1_ParamLimits

0xb69a,	// (0x0008fe96) wgtman_btn_pane_t1

0x1106,	// (0x00085902) wgtman_btn_pane_t2_ParamLimits

0x1106,	// (0x00085902) wgtman_btn_pane_t2

0x0001,

0xfd4c,	// (0x00094548) wgtman_btn_pane_t_ParamLimits

0xfd4c,	// (0x00094548) wgtman_btn_pane_t

0xb6d1,	// (0x0008fecd) listrow_wgtman_pane_ParamLimits

0xb6d1,	// (0x0008fecd) listrow_wgtman_pane

0xb6ec,	// (0x0008fee8) listrow_wgtman_pane_g1

0xb6f9,	// (0x0008fef5) listrow_wgtman_pane_g2

0x0001,

0xfd51,	// (0x0009454d) listrow_wgtman_pane_g

0xb717,	// (0x0008ff13) listrow_wgtman_pane_t1

0xb72f,	// (0x0008ff2b) listrow_wgtman_pane_t2

0x0001,

0xfd56,	// (0x00094552) listrow_wgtman_pane_t

0xb755,	// (0x0008ff51) wait_bar_pane_cp09

0x111d,	// (0x00085919) main_calllock_btn_pane

0x1127,	// (0x00085923) main_calllock_pane_g1

0xdc3b,	// (0x00092437) bg_button_pane_cp17

0x10e4,	// (0x000858e0) main_calllock_btn_pane_g1

0x112f,	// (0x0008592b) main_calllock_btn_pane_t1

0xdc3b,	// (0x00092437) main_dialer3_pane

0xdc3b,	// (0x00092437) main_fmrd2_pane

0xe37a,	// (0x00092b76) main_fs_bigclock_unlock_btn_pane_g1

0xb76f,	// (0x0008ff6b) main_fs_bigclock_unlock_btn_pane_t1

0xb77d,	// (0x0008ff79) area_fmrd2_info_pane_ParamLimits

0xb77d,	// (0x0008ff79) area_fmrd2_info_pane

0xb78b,	// (0x0008ff87) area_fmrd2_visual_pane_ParamLimits

0xb78b,	// (0x0008ff87) area_fmrd2_visual_pane

0xb799,	// (0x0008ff95) fmrd2_indi_pane_ParamLimits

0xb799,	// (0x0008ff95) fmrd2_indi_pane

0xb7a6,	// (0x0008ffa2) area_fmrd2_visual_pane_g1

0xb7ae,	// (0x0008ffaa) area_fmrd2_visual_pane_t1

0xb7be,	// (0x0008ffba) area_fmrd2_visual_pane_t2

0xb7ce,	// (0x0008ffca) area_fmrd2_visual_pane_t3

0x0002,

0xfd60,	// (0x0009455c) area_fmrd2_visual_pane_t

0xb7de,	// (0x0008ffda) area_fmrd2_info_pane_g1

0xb7e6,	// (0x0008ffe2) area_fmrd2_info_pane_t1

0xb7f6,	// (0x0008fff2) area_fmrd2_info_pane_t2

0xb806,	// (0x00090002) area_fmrd2_info_pane_t3

0xb816,	// (0x00090012) area_fmrd2_info_pane_t4

0x0003,

0xfd67,	// (0x00094563) area_fmrd2_info_pane_t

0xb824,	// (0x00090020) fmrd2_indi_pane_t1

0xb834,	// (0x00090030) fmrd2_indi_pane_t2

0xb844,	// (0x00090040) fmrd2_indi_pane_t3

0x0002,

0xfd70,	// (0x0009456c) fmrd2_indi_pane_t

0xda85,	// (0x00092281) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xda85,	// (0x00092281) list_single_fs_bigclock_indicator_pane_g5

0xdb36,	// (0x00092332) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdb36,	// (0x00092332) list_single_fs_bigclock_indicator_pane_t5

0x034b,	// (0x00084b47) aid_cell_bcale_month_pane_ParamLimits

0x034b,	// (0x00084b47) aid_cell_bcale_month_pane

0x034b,	// (0x00084b47) bcale_month_pane_ParamLimits

0x034b,	// (0x00084b47) bcale_month_pane

0x0a78,	// (0x00085274) bcale_preview_pane_ParamLimits

0x0a78,	// (0x00085274) bcale_preview_pane

0x0ead,	// (0x000856a9) list_single_fs_bigclock_pane_t1_ParamLimits

0x0ecc,	// (0x000856c8) list_single_fs_bigclock_pane_t2_ParamLimits

0x0ecc,	// (0x000856c8) list_single_fs_bigclock_pane_t2

0x0001,

0xfceb,	// (0x000944e7) list_single_fs_bigclock_pane_t_ParamLimits

0xfceb,	// (0x000944e7) list_single_fs_bigclock_pane_t

0xb767,	// (0x0008ff63) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd5b,	// (0x00094557) main_fs_bigclock_unlock_btn_pane_g

0xb852,	// (0x0009004e) aid_dia3_key_size_ParamLimits

0xb852,	// (0x0009004e) aid_dia3_key_size

0xb85e,	// (0x0009005a) aid_dia3_listrow_size_ParamLimits

0xb85e,	// (0x0009005a) aid_dia3_listrow_size

0xb86e,	// (0x0009006a) dia3_keypad_fun_pane_ParamLimits

0xb86e,	// (0x0009006a) dia3_keypad_fun_pane

0xb880,	// (0x0009007c) dia3_keypad_num_pane_ParamLimits

0xb880,	// (0x0009007c) dia3_keypad_num_pane

0xb892,	// (0x0009008e) dia3_listscroll_pane_ParamLimits

0xb892,	// (0x0009008e) dia3_listscroll_pane

0xb8a0,	// (0x0009009c) dia3_numentry_pane_ParamLimits

0xb8a0,	// (0x0009009c) dia3_numentry_pane

0x113e,	// (0x0008593a) dia3_list_pane

0x1149,	// (0x00085945) scroll_pane_cp12

0xdc3b,	// (0x00092437) bg_dia3_numentry_pane

0xb8ae,	// (0x000900aa) dia3_numentry_pane_t1

0xb8bd,	// (0x000900b9) cell_dia3_key_num_pane

0xb8c5,	// (0x000900c1) cell_dia3_key0_fun_pane_ParamLimits

0xb8c5,	// (0x000900c1) cell_dia3_key0_fun_pane

0xb8d2,	// (0x000900ce) cell_dia3_key1_fun_pane_ParamLimits

0xb8d2,	// (0x000900ce) cell_dia3_key1_fun_pane

0xb8df,	// (0x000900db) dia3_listrow_pane

0xd7d8,	// (0x00091fd4) bg_dia3_numentry_pane_g1

0xdc3b,	// (0x00092437) bg_button_pane_cp21

0x1154,	// (0x00085950) cell_dia3_key_num_pane_t1

0x1162,	// (0x0008595e) cell_dia3_key_num_pane_t2

0x1171,	// (0x0008596d) cell_dia3_key_num_pane_t3

0x1180,	// (0x0008597c) cell_dia3_key_num_pane_t4

0x0003,

0xfd77,	// (0x00094573) cell_dia3_key_num_pane_t

0xdc3b,	// (0x00092437) bg_button_pane_cp19

0xb8ec,	// (0x000900e8) cell_dia3_key0_fun_pane_g1

0xdc3b,	// (0x00092437) bg_button_pane_cp20

0xb8f4,	// (0x000900f0) cell_dia3_key1_fun_pane_g1

0x32f1,	// (0x00087aed) area_left_week_number_pane

0x32f1,	// (0x00087aed) area_top_day_name_pane

0x32f1,	// (0x00087aed) frame_month_view_pane

0x32f1,	// (0x00087aed) grid_month_view_pane

0x32f1,	// (0x00087aed) cell_top_day_name_pane_ParamLimits

0x32f1,	// (0x00087aed) cell_top_day_name_pane

0x32f1,	// (0x00087aed) cell_area_left_week_number_pane_ParamLimits

0x32f1,	// (0x00087aed) cell_area_left_week_number_pane

0x32f1,	// (0x00087aed) cell_month_view_pane_ParamLimits

0x32f1,	// (0x00087aed) cell_month_view_pane

0x32e5,	// (0x00087ae1) frm_month_g1

0x32e5,	// (0x00087ae1) frm_month_g2

0x32e5,	// (0x00087ae1) frm_month_g3

0x32e5,	// (0x00087ae1) frm_month_g4

0x32e5,	// (0x00087ae1) frm_month_g5

0x32e5,	// (0x00087ae1) frm_month_g6

0x32e5,	// (0x00087ae1) frm_month_g7

0x32e5,	// (0x00087ae1) frm_month_g8

0x32e5,	// (0x00087ae1) frm_month_g9

0x32e5,	// (0x00087ae1) frm_month_g10

0x32e5,	// (0x00087ae1) frm_month_g11

0x32e5,	// (0x00087ae1) frm_month_g12

0x32e5,	// (0x00087ae1) frm_month_g13

0x32e5,	// (0x00087ae1) frm_month_g14

0x32e5,	// (0x00087ae1) frm_month_g15

0x32e5,	// (0x00087ae1) frm_month_g16

0x000f,

0xfd80,	// (0x0009457c) frm_month_g

0x118f,	// (0x0008598b) cell_top_day_name_pane_t1

0x32e5,	// (0x00087ae1) cell_area_left_week_number_pane_g1

0x118f,	// (0x0008598b) cell_area_left_week_number_pane_t1

0x32e5,	// (0x00087ae1) cell_month_view_pane_g1

0x118f,	// (0x0008598b) cell_month_view_pane_t1

0xdc3b,	// (0x00092437) main_fps_pane

0x0644,	// (0x00084e40) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x0644,	// (0x00084e40) cmail_ddmenu_btn02_pane_cp1

0x0660,	// (0x00084e5c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x0660,	// (0x00084e5c) cmail_ddmenu_btn02_pane_cp2

0xb261,	// (0x0008fa5d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb261,	// (0x0008fa5d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc9e,	// (0x0009449a) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc9e,	// (0x0009449a) cmail_ddmenu_btn02_pane_g

0xb27f,	// (0x0008fa7b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb27f,	// (0x0008fa7b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfca3,	// (0x0009449f) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfca3,	// (0x0009449f) cmail_ddmenu_btn02_pane_t

0xb8fc,	// (0x000900f8) fps_text_pane_ParamLimits

0xb8fc,	// (0x000900f8) fps_text_pane

0xb909,	// (0x00090105) main_fps_pane_g1_ParamLimits

0xb909,	// (0x00090105) main_fps_pane_g1

0xb917,	// (0x00090113) wait_bar_pane_cp010_ParamLimits

0xb917,	// (0x00090113) wait_bar_pane_cp010

0xb923,	// (0x0009011f) fps_text_pane_t1_ParamLimits

0xb923,	// (0x0009011f) fps_text_pane_t1

0x8bcc,	// (0x0008d3c8) cam4_image_uncrop_pane_g1

0x8bd5,	// (0x0008d3d1) cam4_image_uncrop_pane_g2

0x8bde,	// (0x0008d3da) cam4_image_uncrop_pane_g3

0x8be7,	// (0x0008d3e3) cam4_image_uncrop_pane_g4

0x0003,

0xf7e5,	// (0x00093fe1) cam4_image_uncrop_pane_g

0xb8df,	// (0x000900db) dia3_listrow_pane_ParamLimits

0xdc3b,	// (0x00092437) main_phob2_pane

0xae2f,	// (0x0008f62b) cell_tport_appsw_pane_cp02_ParamLimits

0xae2f,	// (0x0008f62b) cell_tport_appsw_pane_cp02

0xae3e,	// (0x0008f63a) cell_tport_appsw_pane_cp03_ParamLimits

0xae3e,	// (0x0008f63a) cell_tport_appsw_pane_cp03

0xdc3b,	// (0x00092437) phob2_contact_card_pane

0xdc3b,	// (0x00092437) phob2_listscroll_pane

0x11a1,	// (0x0008599d) phob2_list_pane

0x0c69,	// (0x00085465) scroll_pane_cp034

0xb93c,	// (0x00090138) phob2_cc_data_pane_ParamLimits

0xb93c,	// (0x00090138) phob2_cc_data_pane

0xb956,	// (0x00090152) phob2_cc_listscroll_pane_ParamLimits

0xb956,	// (0x00090152) phob2_cc_listscroll_pane

0xb6d1,	// (0x0008fecd) list_double_large_graphic_phob2_pane_ParamLimits

0xb6d1,	// (0x0008fecd) list_double_large_graphic_phob2_pane

0xb970,	// (0x0009016c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xb970,	// (0x0009016c) list_double_large_graphic_phob2_pane_g1

0xb97d,	// (0x00090179) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xb97d,	// (0x00090179) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfda1,	// (0x0009459d) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfda1,	// (0x0009459d) list_double_large_graphic_phob2_pane_g

0xb9a3,	// (0x0009019f) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xb9a3,	// (0x0009019f) list_double_large_graphic_phob2_pane_t1

0xb9b8,	// (0x000901b4) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xb9b8,	// (0x000901b4) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdaa,	// (0x000945a6) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdaa,	// (0x000945a6) list_double_large_graphic_phob2_pane_t

0xe32e,	// (0x00092b2a) list_highlight_pane_cp024

0x11a9,	// (0x000859a5) phob2_cc_button_pane

0xb9cd,	// (0x000901c9) phob2_cc_data_pane_g1_ParamLimits

0xb9cd,	// (0x000901c9) phob2_cc_data_pane_g1

0xb9dc,	// (0x000901d8) phob2_cc_data_pane_g2_ParamLimits

0xb9dc,	// (0x000901d8) phob2_cc_data_pane_g2

0x0001,

0xfdaf,	// (0x000945ab) phob2_cc_data_pane_g_ParamLimits

0xfdaf,	// (0x000945ab) phob2_cc_data_pane_g

0xb9eb,	// (0x000901e7) phob2_cc_data_pane_t1_ParamLimits

0xb9eb,	// (0x000901e7) phob2_cc_data_pane_t1

0xba00,	// (0x000901fc) phob2_cc_data_pane_t2_ParamLimits

0xba00,	// (0x000901fc) phob2_cc_data_pane_t2

0xba15,	// (0x00090211) phob2_cc_data_pane_t3_ParamLimits

0xba15,	// (0x00090211) phob2_cc_data_pane_t3

0x0002,

0xfdb4,	// (0x000945b0) phob2_cc_data_pane_t_ParamLimits

0xfdb4,	// (0x000945b0) phob2_cc_data_pane_t

0x11b1,	// (0x000859ad) phob2_cc_list_pane_ParamLimits

0x11b1,	// (0x000859ad) phob2_cc_list_pane

0xd6fb,	// (0x00091ef7) scroll_pane_cp035_ParamLimits

0xd6fb,	// (0x00091ef7) scroll_pane_cp035

0xde1d,	// (0x00092619) bg_button_pane_cp033

0x11bd,	// (0x000859b9) phob2_cc_button_pane_g1

0x11c9,	// (0x000859c5) phob2_cc_button_pane_t1

0x11de,	// (0x000859da) phob2_cc_button_pane_t2

0x0001,

0xfdbb,	// (0x000945b7) phob2_cc_button_pane_t

0xba2a,	// (0x00090226) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xba2a,	// (0x00090226) list_double_large_graphic_phob2_cc_pane

0xba98,	// (0x00090294) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xba98,	// (0x00090294) list_double_large_graphic_phob2_cc_pane_g1

0xbaa9,	// (0x000902a5) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xbaa9,	// (0x000902a5) list_double_large_graphic_phob2_cc_pane_g2

0xbab5,	// (0x000902b1) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xbab5,	// (0x000902b1) list_double_large_graphic_phob2_cc_pane_g3

0xbac1,	// (0x000902bd) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xbac1,	// (0x000902bd) list_double_large_graphic_phob2_cc_pane_g4

0xbacd,	// (0x000902c9) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xbacd,	// (0x000902c9) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdc0,	// (0x000945bc) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdc0,	// (0x000945bc) list_double_large_graphic_phob2_cc_pane_g

0xbad9,	// (0x000902d5) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xbad9,	// (0x000902d5) list_double_large_graphic_phob2_cc_pane_t1

0xbb02,	// (0x000902fe) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xbb02,	// (0x000902fe) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdcb,	// (0x000945c7) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdcb,	// (0x000945c7) list_double_large_graphic_phob2_cc_pane_t

0x11f0,	// (0x000859ec) list_highlight_pane_cp025_ParamLimits

0x11f0,	// (0x000859ec) list_highlight_pane_cp025

0xde1d,	// (0x00092619) bg_button_pane_cp033_ParamLimits

0x11bd,	// (0x000859b9) phob2_cc_button_pane_g1_ParamLimits

0x11c9,	// (0x000859c5) phob2_cc_button_pane_t1_ParamLimits

0x11de,	// (0x000859da) phob2_cc_button_pane_t2_ParamLimits

0xfdbb,	// (0x000945b7) phob2_cc_button_pane_t_ParamLimits

0x4865,	// (0x00089061) popup_wgtman_window

0xcd92,	// (0x0009158e) scroll_pane_cp038

0xb65a,	// (0x0008fe56) wgtman_btn_pane_cp_01_ParamLimits

0xb65a,	// (0x0008fe56) wgtman_btn_pane_cp_01

0x11fe,	// (0x000859fa) wgtman_content_pane

0x1207,	// (0x00085a03) wgtman_heading_pane

0xdc3b,	// (0x00092437) bg_heading_pane_cp02

0x1210,	// (0x00085a0c) wgtman_heading_pane_g1

0x1218,	// (0x00085a14) wgtman_heading_pane_t1

0x1226,	// (0x00085a22) scroll_pane_cp036

0x122e,	// (0x00085a2a) wgtman_list_pane

0x1236,	// (0x00085a32) wgtman_list_pane_t1_ParamLimits

0x1236,	// (0x00085a32) wgtman_list_pane_t1

0x8b2b,	// (0x0008d327) cam4_grid_pane

0x98ea,	// (0x0008e0e6) bg_button_pane_cp015_ParamLimits

0x98ff,	// (0x0008e0fb) bg_button_pane_cp016_ParamLimits

0x990b,	// (0x0008e107) bg_button_pane_cp017_ParamLimits

0x9963,	// (0x0008e15f) popup_vitu2_query_window_g3_ParamLimits

0x9963,	// (0x0008e15f) popup_vitu2_query_window_g3

0x9a04,	// (0x0008e200) popup_vitu2_query_window_t6_ParamLimits

0x9a04,	// (0x0008e200) popup_vitu2_query_window_t6

0x9a2f,	// (0x0008e22b) popup_vitu2_query_window_t7_ParamLimits

0x9a2f,	// (0x0008e22b) popup_vitu2_query_window_t7

0x03df,	// (0x00084bdb) cam4_grid_pane_g1

0x03e8,	// (0x00084be4) cam4_grid_pane_g2

0x1250,	// (0x00085a4c) cam4_grid_pane_g3

0x1259,	// (0x00085a55) cam4_grid_pane_g4

0x0003,

0xfdd0,	// (0x000945cc) cam4_grid_pane_g

0x5293,	// (0x00089a8f) aid_placing_vt_slider_lsc_ParamLimits

0x55df,	// (0x00089ddb) vidtel_button_pane_ParamLimits

0x55df,	// (0x00089ddb) vidtel_button_pane

0xdc3b,	// (0x00092437) bg_button_pane_cp034

0x1264,	// (0x00085a60) vidtel_button_pane_g1

0x126c,	// (0x00085a68) vidtel_button_pane_t1

0xce9e,	// (0x0009169a) aid_size_vtel_slider_touch

0xd6fb,	// (0x00091ef7) scroll_pane_cp039

0xa77c,	// (0x0008ef78) ncim_query_button_pane_cp01_ParamLimits

0xa79b,	// (0x0008ef97) ncimui_query_pane_g1_ParamLimits

0xde1d,	// (0x00092619) input_focus_pane_cp012_ParamLimits

0xd816,	// (0x00092012) ncim_query_entry_pane_t1_ParamLimits

0xd6fb,	// (0x00091ef7) scroll_pane_cp039_ParamLimits

0xee87,	// (0x00093683) navi_pane_bcale_mc_g1

0xee8f,	// (0x0009368b) navi_pane_bcale_mc_t1

0x0694,	// (0x00084e90) main_sp_fs_email_pane_g1

0x06a0,	// (0x00084e9c) main_sp_fs_email_pane_g2

0x0001,

0xfbd6,	// (0x000943d2) main_sp_fs_email_pane_g

0x0af8,	// (0x000852f4) list_single_cale_mrui_row_pane_g3_ParamLimits

0x0af8,	// (0x000852f4) list_single_cale_mrui_row_pane_g3

0xb29f,	// (0x0008fa9b) list_single_recal_day_pane_g5_event_pane

0x0d17,	// (0x00085513) list_single_recal_day_pane_g7

0x1282,	// (0x00085a7e) list_recal_day_event_pane_cp01

0x128b,	// (0x00085a87) list_recal_vselct_arw_lo_pane_cp01

0x1293,	// (0x00085a8f) list_recal_vselct_arw_up_pane_cp01

0x129b,	// (0x00085a97) list_recal_vselct_pane_cp01

0xcec0,	// (0x000916bc) list_recal_day_event_pane_cp01_g1

0x12a5,	// (0x00085aa1) list_recal_day_event_pane_cp01_t1

0x0d1f,	// (0x0008551b) list_single_recal_day_pane_t1_ParamLimits

0x0d31,	// (0x0008552d) list_single_recal_day_pane_t2_ParamLimits

0xfcb3,	// (0x000944af) list_single_recal_day_pane_t_ParamLimits

0xe2c1,	// (0x00092abd) bg_notes_pane_ParamLimits

0xe3b6,	// (0x00092bb2) list_notes_pane_ParamLimits

0x49af,	// (0x000891ab) scroll_pane_cp06_ParamLimits

0xe3d8,	// (0x00092bd4) main_notes_pane_ParamLimits

0xde1d,	// (0x00092619) main_welc_pane

0xbb59,	// (0x00090355) main_welc_body_pane_ParamLimits

0xbb59,	// (0x00090355) main_welc_body_pane

0xbb73,	// (0x0009036f) main_welc_opti_pane_ParamLimits

0xbb73,	// (0x0009036f) main_welc_opti_pane

0xbbc8,	// (0x000903c4) main_welc_pane_t1_ParamLimits

0xbbc8,	// (0x000903c4) main_welc_pane_t1

0xbd68,	// (0x00090564) main_welc_body_row_pane_ParamLimits

0xbd68,	// (0x00090564) main_welc_body_row_pane

0xe32e,	// (0x00092b2a) main_welc_opti_row_pane_ParamLimits

0xe32e,	// (0x00092b2a) main_welc_opti_row_pane

0x12bb,	// (0x00085ab7) main_welc_opti_row_pane_g1

0xbd8d,	// (0x00090589) main_welc_opti_row_pane_t1

0x12c3,	// (0x00085abf) main_welc_body_row_pane_t1

0x0fac,	// (0x000857a8) popup_notif_wgt_heading_pane

0x0fc6,	// (0x000857c2) aid_size_list_notif_wgt_del_ParamLimits

0x0fd3,	// (0x000857cf) list_notif_wgt_row_pane_g1_ParamLimits

0x0fdf,	// (0x000857db) list_notif_wgt_row_pane_g2_ParamLimits

0x0fee,	// (0x000857ea) list_notif_wgt_row_pane_g3_ParamLimits

0xfd1a,	// (0x00094516) list_notif_wgt_row_pane_g_ParamLimits

0x0ffb,	// (0x000857f7) list_notif_wgt_row_pane_t1_ParamLimits

0x1011,	// (0x0008580d) list_notif_wgt_row_pane_t2_ParamLimits

0x1023,	// (0x0008581f) list_notif_wgt_row_pane_t3_ParamLimits

0xfd21,	// (0x0009451d) list_notif_wgt_row_pane_t_ParamLimits

0xb6ec,	// (0x0008fee8) listrow_wgtman_pane_g1_ParamLimits

0xb6f9,	// (0x0008fef5) listrow_wgtman_pane_g2_ParamLimits

0xfd51,	// (0x0009454d) listrow_wgtman_pane_g_ParamLimits

0xb717,	// (0x0008ff13) listrow_wgtman_pane_t1_ParamLimits

0xb72f,	// (0x0008ff2b) listrow_wgtman_pane_t2_ParamLimits

0xfd56,	// (0x00094552) listrow_wgtman_pane_t_ParamLimits

0xb755,	// (0x0008ff51) wait_bar_pane_cp09_ParamLimits

0xdc3b,	// (0x00092437) bg_popup_heading_pane_cp02

0x12d2,	// (0x00085ace) popup_notif_wgt_heading_pane_g1

0x12da,	// (0x00085ad6) popup_notif_wgt_heading_pane_t1

0xdc3b,	// (0x00092437) main_vids_pane

0xdc3b,	// (0x00092437) vids_listscroll_pane

0xbd9c,	// (0x00090598) scroll_pane_cp040

0xdc3b,	// (0x00092437) vids_list_pane

0xbda7,	// (0x000905a3) vids_list_double_pane_ParamLimits

0xbda7,	// (0x000905a3) vids_list_double_pane

0xbdbe,	// (0x000905ba) vids_list_double_pane_g1

0xbdc7,	// (0x000905c3) vids_list_double_pane_t1

0xbdd7,	// (0x000905d3) vids_list_double_pane_t2

0x0001,

0xfdef,	// (0x000945eb) vids_list_double_pane_t

0x728b,	// (0x0008ba87) main_ncimui_pane_ParamLimits

0xa5d3,	// (0x0008edcf) main_ncimui_pane_g1_ParamLimits

0xa5df,	// (0x0008eddb) main_ncimui_pane_g2_ParamLimits

0xa5df,	// (0x0008eddb) main_ncimui_pane_g2

0x0001,

0xfad7,	// (0x000942d3) main_ncimui_pane_g_ParamLimits

0xfad7,	// (0x000942d3) main_ncimui_pane_g

0xbb8c,	// (0x00090388) main_welc_pane_g1_ParamLimits

0xbb8c,	// (0x00090388) main_welc_pane_g1

0xbb98,	// (0x00090394) main_welc_pane_g2_ParamLimits

0xbb98,	// (0x00090394) main_welc_pane_g2

0x0003,

0xfdd9,	// (0x000945d5) main_welc_pane_g_ParamLimits

0xfdd9,	// (0x000945d5) main_welc_pane_g

0xe2c1,	// (0x00092abd) listscroll_mce_pane_ParamLimits

0xefdc,	// (0x000937d8) wait_bar_pane_cp10

0x2c23,	// (0x0008741f) main_cale_day_pane_ParamLimits

0x2c23,	// (0x0008741f) main_cale_week_pane_ParamLimits

0xe2c1,	// (0x00092abd) main_messa_pane_ParamLimits

0x7fd0,	// (0x0008c7cc) main_clock2_btn_pane_ParamLimits

0x7fd0,	// (0x0008c7cc) main_clock2_btn_pane

0x3414,	// (0x00087c10) main_clock2_btn_pane_cp01_ParamLimits

0x3414,	// (0x00087c10) main_clock2_btn_pane_cp01

0x0a92,	// (0x0008528e) list_cale_mrui_pane_ParamLimits

0x1067,	// (0x00085863) main_cf0_pane_g2

0x0001,

0xfd28,	// (0x00094524) main_cf0_pane_g

0x32f1,	// (0x00087aed) area_left_week_number_pane_ParamLimits

0x32f1,	// (0x00087aed) area_top_day_name_pane_ParamLimits

0x32f1,	// (0x00087aed) frame_month_view_pane_ParamLimits

0x32f1,	// (0x00087aed) grid_month_view_pane_ParamLimits

0x32e5,	// (0x00087ae1) frm_month_g1_ParamLimits

0x32e5,	// (0x00087ae1) frm_month_g2_ParamLimits

0x32e5,	// (0x00087ae1) frm_month_g3_ParamLimits

0x32e5,	// (0x00087ae1) frm_month_g4_ParamLimits

0x32e5,	// (0x00087ae1) frm_month_g5_ParamLimits

0x32e5,	// (0x00087ae1) frm_month_g6_ParamLimits

0x32e5,	// (0x00087ae1) frm_month_g7_ParamLimits

0x32e5,	// (0x00087ae1) frm_month_g8_ParamLimits

0x32e5,	// (0x00087ae1) frm_month_g9_ParamLimits

0x32e5,	// (0x00087ae1) frm_month_g10_ParamLimits

0x32e5,	// (0x00087ae1) frm_month_g11_ParamLimits

0x32e5,	// (0x00087ae1) frm_month_g12_ParamLimits

0x32e5,	// (0x00087ae1) frm_month_g13_ParamLimits

0x32e5,	// (0x00087ae1) frm_month_g14_ParamLimits

0x32e5,	// (0x00087ae1) frm_month_g15_ParamLimits

0x32e5,	// (0x00087ae1) frm_month_g16_ParamLimits

0xfd80,	// (0x0009457c) frm_month_g_ParamLimits

0x118f,	// (0x0008598b) cell_top_day_name_pane_t1_ParamLimits

0x32e5,	// (0x00087ae1) cell_area_left_week_number_pane_g1_ParamLimits

0x118f,	// (0x0008598b) cell_area_left_week_number_pane_t1_ParamLimits

0x32e5,	// (0x00087ae1) cell_month_view_pane_g1_ParamLimits

0x118f,	// (0x0008598b) cell_month_view_pane_t1_ParamLimits

0xe2b9,	// (0x00092ab5) main_clock2_btn_pane_g1

0x12e8,	// (0x00085ae4) main_clock2_btn_pane_t1

0xde1d,	// (0x00092619) listscroll_cmail_pane_ParamLimits

0x0694,	// (0x00084e90) main_sp_fs_email_pane_g1_ParamLimits

0x06a0,	// (0x00084e9c) main_sp_fs_email_pane_g2_ParamLimits

0xfbd6,	// (0x000943d2) main_sp_fs_email_pane_g_ParamLimits

0x0c87,	// (0x00085483) list_recal_day_pane_ParamLimits

0x0c98,	// (0x00085494) mian_recal_day_pane_t1

0xad1d,	// (0x0008f519) list_single_dyc_row_text_pane_t4_ParamLimits

0xad1d,	// (0x0008f519) list_single_dyc_row_text_pane_t4

0xad54,	// (0x0008f550) list_single_dyc_row_text_pane_t5_ParamLimits

0xad54,	// (0x0008f550) list_single_dyc_row_text_pane_t5

0x076c,	// (0x00084f68) list_single_dyc_row_text_pane_t6_ParamLimits

0x076c,	// (0x00084f68) list_single_dyc_row_text_pane_t6

0xe974,	// (0x00093170) aid_mgn_list_cale_time_pane

0x728b,	// (0x0008ba87) main_gallery2_pane_ParamLimits

0x342a,	// (0x00087c26) main_clock2_pane_cp01_t1

0x343a,	// (0x00087c36) main_clock2_pane_cp01_t3

0x0001,

0xf6c6,	// (0x00093ec2) main_clock2_pane_cp01_t

0x4dc8,	// (0x000895c4) cale_week_scroll_pane_g16_ParamLimits

0x4dc8,	// (0x000895c4) cale_week_scroll_pane_g16

0xe5f0,	// (0x00092dec) vorec_slider_pane

0x126c,	// (0x00085a68) vidtel_button_pane_t1_ParamLimits

0xb2fa,	// (0x0008faf6) main_fs_bigclock_clock_pane_g1_ParamLimits

0xb2fa,	// (0x0008faf6) main_fs_bigclock_clock_pane_g2_ParamLimits

0xb2fa,	// (0x0008faf6) main_fs_bigclock_clock_pane_g3_ParamLimits

0xb2fa,	// (0x0008faf6) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfcd6,	// (0x000944d2) main_fs_bigclock_clock_pane_g_ParamLimits

0xb306,	// (0x0008fb02) main_fs_bigclock_clock_pane_t1_ParamLimits

0xb31a,	// (0x0008fb16) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfcdf,	// (0x000944db) main_fs_bigclock_clock_pane_t_ParamLimits

0x7911,	// (0x0008c10d) main_mup3_lyrics_pane_ParamLimits

0x7911,	// (0x0008c10d) main_mup3_lyrics_pane

0xbe0a,	// (0x00090606) main_mup3_lyrics_pane_t1_ParamLimits

0xbe0a,	// (0x00090606) main_mup3_lyrics_pane_t1

0x84d4,	// (0x0008ccd0) aid_main_mp4_pane_t1_area

0x84de,	// (0x0008ccda) aid_main_mp4_pane_t2_area

0x85e3,	// (0x0008cddf) main_mp4_pane_g7_ParamLimits

0x85e3,	// (0x0008cddf) main_mp4_pane_g7

0x85ef,	// (0x0008cdeb) main_mp4_pane_g8_ParamLimits

0x85ef,	// (0x0008cdeb) main_mp4_pane_g8

0x89eb,	// (0x0008d1e7) aid_call6_pane_g1_size

0xba6c,	// (0x00090268) list_double_large_graphic_phob2_other_pane_ParamLimits

0xba6c,	// (0x00090268) list_double_large_graphic_phob2_other_pane

0xe4d9,	// (0x00092cd5) list_double_large_graphic_phob2_other_pane_g1

0xdc3b,	// (0x00092437) list_highlight_pane_cp026

0xde1d,	// (0x00092619) main_welc_pane_ParamLimits

0xabb2,	// (0x0008f3ae) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xabb2,	// (0x0008f3ae) main_sp_fs_ctrlbar_pane_g3

0xabca,	// (0x0008f3c6) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xabca,	// (0x0008f3c6) main_sp_fs_ctrlbar_pane_g4

0xabfc,	// (0x0008f3f8) toolbar2_fixed_button_pane_cp01

0xac07,	// (0x0008f403) toolbar2_fixed_button_pane_cp02

0xac12,	// (0x0008f40e) toolbar2_fixed_button_pane_cp03

0xbb3d,	// (0x00090339) list_welc_entry_pane_ParamLimits

0xbb3d,	// (0x00090339) list_welc_entry_pane

0xbba6,	// (0x000903a2) main_welc_pane_g3_ParamLimits

0xbba6,	// (0x000903a2) main_welc_pane_g3

0xbbe2,	// (0x000903de) main_welc_pane_t2_ParamLimits

0xbbe2,	// (0x000903de) main_welc_pane_t2

0xbbf6,	// (0x000903f2) main_welc_pane_t3_ParamLimits

0xbbf6,	// (0x000903f2) main_welc_pane_t3

0x0005,

0xfde2,	// (0x000945de) main_welc_pane_t_ParamLimits

0xfde2,	// (0x000945de) main_welc_pane_t

0xbcfc,	// (0x000904f8) welc_button_pane_ParamLimits

0xbcfc,	// (0x000904f8) welc_button_pane

0xbd5a,	// (0x00090556) welc_service_logo_pane_ParamLimits

0xbd5a,	// (0x00090556) welc_service_logo_pane

0xbe3c,	// (0x00090638) list_single_welc_entry_pane_ParamLimits

0xbe3c,	// (0x00090638) list_single_welc_entry_pane

0xbe4d,	// (0x00090649) list_single_welc_entry_pane_g1

0xbe55,	// (0x00090651) list_single_welc_entry_pane_t1

0xbe63,	// (0x0009065f) list_single_welc_entry_pane_t2

0x0001,

0xfdf4,	// (0x000945f0) list_single_welc_entry_pane_t

0xdc3b,	// (0x00092437) bg_button_pane_cp035

0xbe71,	// (0x0009066d) welc_button_pane_t1

0x12f6,	// (0x00085af2) welc_service_logo_pane_g1

0x12ff,	// (0x00085afb) welc_service_logo_pane_g2

0x0001,

0xfdf9,	// (0x000945f5) welc_service_logo_pane_g

0x4871,	// (0x0008906d) main_int_radio_pane

0xe52b,	// (0x00092d27) list_single_fs_dyc_pane_g1

0xb989,	// (0x00090185) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xb989,	// (0x00090185) list_double_large_graphic_phob2_pane_g3

0xb995,	// (0x00090191) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xb995,	// (0x00090191) list_double_large_graphic_phob2_pane_g4

0xbe7f,	// (0x0009067b) main_int_radio1_pane_ParamLimits

0xbe7f,	// (0x0009067b) main_int_radio1_pane

0x1308,	// (0x00085b04) find_pane_cp02

0xbe91,	// (0x0009068d) input_focus_pane_cp12_ParamLimits

0xbe91,	// (0x0009068d) input_focus_pane_cp12

0xbe9d,	// (0x00090699) input_focus_pane_cp13_ParamLimits

0xbe9d,	// (0x00090699) input_focus_pane_cp13

0xbeb5,	// (0x000906b1) input_focus_pane_cp14_ParamLimits

0xbeb5,	// (0x000906b1) input_focus_pane_cp14

0x1311,	// (0x00085b0d) int_radio1_listscroll_pane

0xbecd,	// (0x000906c9) main_int_radio1_pane_g1_ParamLimits

0xbecd,	// (0x000906c9) main_int_radio1_pane_g1

0xbedd,	// (0x000906d9) main_int_radio1_pane_t1_ParamLimits

0xbedd,	// (0x000906d9) main_int_radio1_pane_t1

0xbef1,	// (0x000906ed) main_int_radio1_pane_t2_ParamLimits

0xbef1,	// (0x000906ed) main_int_radio1_pane_t2

0xbf05,	// (0x00090701) main_int_radio1_pane_t3_ParamLimits

0xbf05,	// (0x00090701) main_int_radio1_pane_t3

0xbf19,	// (0x00090715) main_int_radio1_pane_t4_ParamLimits

0xbf19,	// (0x00090715) main_int_radio1_pane_t4

0x131b,	// (0x00085b17) main_int_radio1_pane_t5_ParamLimits

0x131b,	// (0x00085b17) main_int_radio1_pane_t5

0xbf30,	// (0x0009072c) main_int_radio1_pane_t6_ParamLimits

0xbf30,	// (0x0009072c) main_int_radio1_pane_t6

0xbf42,	// (0x0009073e) main_int_radio1_pane_t7_ParamLimits

0xbf42,	// (0x0009073e) main_int_radio1_pane_t7

0xbf54,	// (0x00090750) main_int_radio1_pane_t8_ParamLimits

0xbf54,	// (0x00090750) main_int_radio1_pane_t8

0xbf68,	// (0x00090764) main_int_radio1_pane_t9_ParamLimits

0xbf68,	// (0x00090764) main_int_radio1_pane_t9

0xbf7a,	// (0x00090776) main_int_radio1_pane_t10_ParamLimits

0xbf7a,	// (0x00090776) main_int_radio1_pane_t10

0xbfab,	// (0x000907a7) main_int_radio1_pane_t11_ParamLimits

0xbfab,	// (0x000907a7) main_int_radio1_pane_t11

0xbfdc,	// (0x000907d8) main_int_radio1_pane_t12_ParamLimits

0xbfdc,	// (0x000907d8) main_int_radio1_pane_t12

0x000b,

0xfdfe,	// (0x000945fa) main_int_radio1_pane_t_ParamLimits

0xfdfe,	// (0x000945fa) main_int_radio1_pane_t

0x132d,	// (0x00085b29) int_radio_list_pane

0x0c69,	// (0x00085465) scroll_pane_cp037

0x1335,	// (0x00085b31) list_double_large_graphic_int_radio_pane_ParamLimits

0x1335,	// (0x00085b31) list_double_large_graphic_int_radio_pane

0x134d,	// (0x00085b49) list_double_large_graphic_int_radio_pane_g1

0x1356,	// (0x00085b52) list_double_large_graphic_int_radio_pane_t1

0x1364,	// (0x00085b60) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe17,	// (0x00094613) list_double_large_graphic_int_radio_pane_t

0xdc3b,	// (0x00092437) list_highlight_pane_cp027

0x12b3,	// (0x00085aaf) main_button_pane_4

0xbbb2,	// (0x000903ae) main_welc_pane_g4_ParamLimits

0xbbb2,	// (0x000903ae) main_welc_pane_g4

0xbc08,	// (0x00090404) main_welc_pane_t4_ParamLimits

0xbc08,	// (0x00090404) main_welc_pane_t4

0xbc1c,	// (0x00090418) main_welc_pane_t5_ParamLimits

0xbc1c,	// (0x00090418) main_welc_pane_t5

0xbc54,	// (0x00090450) main_welc_pane_t6_ParamLimits

0xbc54,	// (0x00090450) main_welc_pane_t6

0xbd0a,	// (0x00090506) welc_button_pane_2_ParamLimits

0xbd0a,	// (0x00090506) welc_button_pane_2

0xbd22,	// (0x0009051e) welc_button_pane_3_ParamLimits

0xbd22,	// (0x0009051e) welc_button_pane_3

0x12b3,	// (0x00085aaf) welc_button_pane_4

0xbd3c,	// (0x00090538) welc_button_pane_5_ParamLimits

0xbd3c,	// (0x00090538) welc_button_pane_5

0x45e4,	// (0x00088de0) main_popup_welc_pane

0x138a,	// (0x00085b86) main_welc_sk_g3

0x1394,	// (0x00085b90) main_welc_sk_g4

0x139e,	// (0x00085b9a) main_welc_sk_t3

0x13ae,	// (0x00085baa) main_welc_sk_t4

0x13be,	// (0x00085bba) popup_welc_pane_t4

0x13cc,	// (0x00085bc8) popup_welc_pane_t5

0x13da,	// (0x00085bd6) popup_welc_pane_t6

0x4871,	// (0x0008906d) main_acti_pane

0xdc3b,	// (0x00092437) main_sso_pane

0xbff3,	// (0x000907ef) sso_body_pane_ParamLimits

0xbff3,	// (0x000907ef) sso_body_pane

0xc00d,	// (0x00090809) sso_logo_pane_ParamLimits

0xc00d,	// (0x00090809) sso_logo_pane

0xc03e,	// (0x0009083a) sso_sk_pane_ParamLimits

0xc03e,	// (0x0009083a) sso_sk_pane

0x1418,	// (0x00085c14) main_sso_logo_pane_g1

0xc04b,	// (0x00090847) sso_sk_pane_t1_ParamLimits

0xc04b,	// (0x00090847) sso_sk_pane_t1

0xc05f,	// (0x0009085b) sso_sk_pane_t2_ParamLimits

0xc05f,	// (0x0009085b) sso_sk_pane_t2

0x0001,

0xfe1c,	// (0x00094618) sso_sk_pane_t_ParamLimits

0xfe1c,	// (0x00094618) sso_sk_pane_t

0x1421,	// (0x00085c1d) aid_sso_gap

0x142a,	// (0x00085c26) aid_sso_txt1

0x1434,	// (0x00085c30) aid_sso_txt2

0x143e,	// (0x00085c3a) aid_sso_txt3

0x0002,

0xfe21,	// (0x0009461d) aid_sso_txt

0x1448,	// (0x00085c44) aid_sso_widget

0xc0bc,	// (0x000908b8) sso_btn_pane_ParamLimits

0xc0bc,	// (0x000908b8) sso_btn_pane

0xc142,	// (0x0009093e) sso_option_pane_ParamLimits

0xc142,	// (0x0009093e) sso_option_pane

0xc1ec,	// (0x000909e8) sso_query_pane_ParamLimits

0xc1ec,	// (0x000909e8) sso_query_pane

0xc23c,	// (0x00090a38) sso_query_pane_cp01_ParamLimits

0xc23c,	// (0x00090a38) sso_query_pane_cp01

0xc28c,	// (0x00090a88) sso_t_hdr_pane_ParamLimits

0xc28c,	// (0x00090a88) sso_t_hdr_pane

0xc2b0,	// (0x00090aac) sso_t_nml_pane_ParamLimits

0xc2b0,	// (0x00090aac) sso_t_nml_pane

0xc300,	// (0x00090afc) sso_t_sub_pane

0xc01a,	// (0x00090816) sso_popup_window_ParamLimits

0xc01a,	// (0x00090816) sso_popup_window

0xc071,	// (0x0009086d) sso_apps_pane_ParamLimits

0xc071,	// (0x0009086d) sso_apps_pane

0xc094,	// (0x00090890) sso_body_pane_g1

0xc09c,	// (0x00090898) sso_body_pane_t1

0xc0ac,	// (0x000908a8) sso_body_pane_t2

0x0001,

0xfe28,	// (0x00094624) sso_body_pane_t

0xc102,	// (0x000908fe) sso_btn_pane_cp01_ParamLimits

0xc102,	// (0x000908fe) sso_btn_pane_cp01

0xc1be,	// (0x000909ba) sso_prog_pane_ParamLimits

0xc1be,	// (0x000909ba) sso_prog_pane

0xc325,	// (0x00090b21) sso_t_hdr_pane_t1_ParamLimits

0xc325,	// (0x00090b21) sso_t_hdr_pane_t1

0x1452,	// (0x00085c4e) input_focus_pane_cp10_ParamLimits

0x1452,	// (0x00085c4e) input_focus_pane_cp10

0x1466,	// (0x00085c62) sso_query_pane_t1_ParamLimits

0x1466,	// (0x00085c62) sso_query_pane_t1

0x1479,	// (0x00085c75) sso_query_pane_t2_ParamLimits

0x1479,	// (0x00085c75) sso_query_pane_t2

0x1492,	// (0x00085c8e) sso_query_pane_t3_ParamLimits

0x1492,	// (0x00085c8e) sso_query_pane_t3

0x14bc,	// (0x00085cb8) sso_query_pane_t4_ParamLimits

0x14bc,	// (0x00085cb8) sso_query_pane_t4

0x0003,

0xfe2d,	// (0x00094629) sso_query_pane_t_ParamLimits

0xfe2d,	// (0x00094629) sso_query_pane_t

0x0f47,	// (0x00085743) bg_button_pane_cp22

0x1372,	// (0x00085b6e) sso_btn_pane_t1

0xc33e,	// (0x00090b3a) sso_t_nml_pane_t1_ParamLimits

0xc33e,	// (0x00090b3a) sso_t_nml_pane_t1

0x14e0,	// (0x00085cdc) sso_option_row_pane_ParamLimits

0x14e0,	// (0x00085cdc) sso_option_row_pane

0x14ed,	// (0x00085ce9) sso_t_sub_pane_t1_ParamLimits

0x14ed,	// (0x00085ce9) sso_t_sub_pane_t1

0xde1d,	// (0x00092619) bg_popup_window_pane_cp11_ParamLimits

0xde1d,	// (0x00092619) bg_popup_window_pane_cp11

0x150a,	// (0x00085d06) popup_sk_window_cp01_ParamLimits

0x150a,	// (0x00085d06) popup_sk_window_cp01

0x1517,	// (0x00085d13) sso_popup_body_pane_ParamLimits

0x1517,	// (0x00085d13) sso_popup_body_pane

0x1524,	// (0x00085d20) scroll_pane_cp21_ParamLimits

0x1524,	// (0x00085d20) scroll_pane_cp21

0x1531,	// (0x00085d2d) sso_popup_body_t_pane_ParamLimits

0x1531,	// (0x00085d2d) sso_popup_body_t_pane

0x153e,	// (0x00085d3a) sso_popup_body_t_hdr_pane_ParamLimits

0x153e,	// (0x00085d3a) sso_popup_body_t_hdr_pane

0xc35b,	// (0x00090b57) sso_popup_body_t_nml_pane_ParamLimits

0xc35b,	// (0x00090b57) sso_popup_body_t_nml_pane

0xc379,	// (0x00090b75) sso_popup_body_t_sub_pane_ParamLimits

0xc379,	// (0x00090b75) sso_popup_body_t_sub_pane

0x1550,	// (0x00085d4c) sso_popup_body_t_hdr_pane_t1

0xc39c,	// (0x00090b98) sso_popup_body_t_nml_pane_t1_ParamLimits

0xc39c,	// (0x00090b98) sso_popup_body_t_nml_pane_t1

0x1560,	// (0x00085d5c) sso_popup_body_t_sub_pane_t1_ParamLimits

0x1560,	// (0x00085d5c) sso_popup_body_t_sub_pane_t1

0xe37a,	// (0x00092b76) sso_prog_pane_g1

0xc3e0,	// (0x00090bdc) sso_apps_pane_comp1_ParamLimits

0xc3e0,	// (0x00090bdc) sso_apps_pane_comp1

0x1585,	// (0x00085d81) sso_apps_pane_comp1_g1

0x158d,	// (0x00085d89) sso_apps_pane_comp1_t1

0x15a9,	// (0x00085da5) sso_option_row_pane_g1

0x15c1,	// (0x00085dbd) sso_option_row_pane_t1

0x0897,	// (0x00085093) list_cmail_pane_ParamLimits

0xdc3b,	// (0x00092437) main_call7_pane

0xbb2b,	// (0x00090327) bg_welc_area_ParamLimits

0xbb2b,	// (0x00090327) bg_welc_area

0xbc8a,	// (0x00090486) sso_t_hdr_pane_a_t1_ParamLimits

0xbc8a,	// (0x00090486) sso_t_hdr_pane_a_t1

0xbc9e,	// (0x0009049a) sso_t_nml_pane_a_t1_ParamLimits

0xbc9e,	// (0x0009049a) sso_t_nml_pane_a_t1

0xbcc8,	// (0x000904c4) sso_t_sub_pane_a_t1_ParamLimits

0xbcc8,	// (0x000904c4) sso_t_sub_pane_a_t1

0xbd4c,	// (0x00090548) welc_button_pane_cp01_ParamLimits

0xbd4c,	// (0x00090548) welc_button_pane_cp01

0x1372,	// (0x00085b6e) sso_btn_pane_t1_copy1

0x1381,	// (0x00085b7d) welc_button_pane_2_comp1

0x13e8,	// (0x00085be4) sso_t_hdr_pane_p_t1

0x13f8,	// (0x00085bf4) sso_t_nml_pane_p_t1

0x1408,	// (0x00085c04) sso_t_sub_pane_p_t1

0xdc3b,	// (0x00092437) main_att_pane

0xdc3b,	// (0x00092437) main_vod_pane

0xc300,	// (0x00090afc) sso_t_sub_pane_ParamLimits

0x159b,	// (0x00085d97) input_focus_pane_cp10_t1

0x15c1,	// (0x00085dbd) sso_option_row_pane_t1_ParamLimits

0xc3fa,	// (0x00090bf6) main_att_body_pane_ParamLimits

0xc3fa,	// (0x00090bf6) main_att_body_pane

0xc40e,	// (0x00090c0a) att_btn_emg_pane_ParamLimits

0xc40e,	// (0x00090c0a) att_btn_emg_pane

0xc426,	// (0x00090c22) att_btn_pane_ParamLimits

0xc426,	// (0x00090c22) att_btn_pane

0xc48c,	// (0x00090c88) att_btn_pane_cp01_ParamLimits

0xc48c,	// (0x00090c88) att_btn_pane_cp01

0xc4be,	// (0x00090cba) att_li_srv_pane_ParamLimits

0xc4be,	// (0x00090cba) att_li_srv_pane

0xc4d0,	// (0x00090ccc) att_opt_pane_ParamLimits

0xc4d0,	// (0x00090ccc) att_opt_pane

0xc514,	// (0x00090d10) att_query_pane_ParamLimits

0xc514,	// (0x00090d10) att_query_pane

0xc584,	// (0x00090d80) att_query_pane_cp01_ParamLimits

0xc584,	// (0x00090d80) att_query_pane_cp01

0xc5c8,	// (0x00090dc4) att_t_hdr_pane_ParamLimits

0xc5c8,	// (0x00090dc4) att_t_hdr_pane

0xc62e,	// (0x00090e2a) att_t_nml_pane_ParamLimits

0xc62e,	// (0x00090e2a) att_t_nml_pane

0xc696,	// (0x00090e92) att_t_nml_pane_cp01_ParamLimits

0xc696,	// (0x00090e92) att_t_nml_pane_cp01

0xc6ba,	// (0x00090eb6) att_t_nmlb_pane_ParamLimits

0xc6ba,	// (0x00090eb6) att_t_nmlb_pane

0xc71e,	// (0x00090f1a) att_term_pane_ParamLimits

0xc71e,	// (0x00090f1a) att_term_pane

0xc760,	// (0x00090f5c) main_att_body_pane_g1_ParamLimits

0xc760,	// (0x00090f5c) main_att_body_pane_g1

0x15dd,	// (0x00085dd9) att_t_hdr_pane_t1_ParamLimits

0x15dd,	// (0x00085dd9) att_t_hdr_pane_t1

0x15f6,	// (0x00085df2) att_t_nml_pane_t1_ParamLimits

0x15f6,	// (0x00085df2) att_t_nml_pane_t1

0x161b,	// (0x00085e17) att_btn_pane_t1

0x0f47,	// (0x00085743) bg_button_pane_cp23

0xb2a9,	// (0x0008faa5) att_li_srv_row_pane_ParamLimits

0xb2a9,	// (0x0008faa5) att_li_srv_row_pane

0x162a,	// (0x00085e26) att_t_nmlb_pane_t1_ParamLimits

0x162a,	// (0x00085e26) att_t_nmlb_pane_t1

0x1646,	// (0x00085e42) att_query_pane_t1

0x1655,	// (0x00085e51) att_query_pane_t2

0x1664,	// (0x00085e60) att_query_pane_t3

0x0002,

0xfe3b,	// (0x00094637) att_query_pane_t

0x1673,	// (0x00085e6f) input_focus_pane_cp11

0x167c,	// (0x00085e78) att_term_pane_t1_ParamLimits

0x167c,	// (0x00085e78) att_term_pane_t1

0xdc3b,	// (0x00092437) att_opt_row_pane

0x1699,	// (0x00085e95) att_opt_row_pane_g1

0x16a1,	// (0x00085e9d) att_opt_row_pane_t1_ParamLimits

0x16a1,	// (0x00085e9d) att_opt_row_pane_t1

0xc78a,	// (0x00090f86) att_li_srv_row_pane_g1

0xc792,	// (0x00090f8e) att_li_srv_row_pane_t1_ParamLimits

0xc792,	// (0x00090f8e) att_li_srv_row_pane_t1

0xc792,	// (0x00090f8e) att_li_srv_row_pane_t2_ParamLimits

0xc792,	// (0x00090f8e) att_li_srv_row_pane_t2

0x0001,

0xfe42,	// (0x0009463e) att_li_srv_row_pane_t_ParamLimits

0xfe42,	// (0x0009463e) att_li_srv_row_pane_t

0x16ba,	// (0x00085eb6) att_btn_close_pane_g1

0xdc3b,	// (0x00092437) bg_button_pane_cp24

0xc7a7,	// (0x00090fa3) main_vod_body_pane_ParamLimits

0xc7a7,	// (0x00090fa3) main_vod_body_pane

0xc7b5,	// (0x00090fb1) main_vod_body_pane_g1_ParamLimits

0xc7b5,	// (0x00090fb1) main_vod_body_pane_g1

0xc7e5,	// (0x00090fe1) scroll_pane_cp24_ParamLimits

0xc7e5,	// (0x00090fe1) scroll_pane_cp24

0xc82d,	// (0x00091029) vod_btn_pane_ParamLimits

0xc82d,	// (0x00091029) vod_btn_pane

0xc86b,	// (0x00091067) vod_det_pane_ParamLimits

0xc86b,	// (0x00091067) vod_det_pane

0xc895,	// (0x00091091) vod_logo_g1_ParamLimits

0xc895,	// (0x00091091) vod_logo_g1

0xc8cf,	// (0x000910cb) vod_opt_pane_ParamLimits

0xc8cf,	// (0x000910cb) vod_opt_pane

0xc8ff,	// (0x000910fb) vod_opt_pane_cp01_ParamLimits

0xc8ff,	// (0x000910fb) vod_opt_pane_cp01

0xc927,	// (0x00091123) vod_query_pane_ParamLimits

0xc927,	// (0x00091123) vod_query_pane

0xc94f,	// (0x0009114b) vod_query_pane_cp01_ParamLimits

0xc94f,	// (0x0009114b) vod_query_pane_cp01

0xc95b,	// (0x00091157) vod_t_nml_pane_ParamLimits

0xc95b,	// (0x00091157) vod_t_nml_pane

0xca01,	// (0x000911fd) vod_t_nml_pane_cp01_ParamLimits

0xca01,	// (0x000911fd) vod_t_nml_pane_cp01

0xca39,	// (0x00091235) vod_t_sub_pane_ParamLimits

0xca39,	// (0x00091235) vod_t_sub_pane

0xca65,	// (0x00091261) vod_t_sub_pane_cp01_ParamLimits

0xca65,	// (0x00091261) vod_t_sub_pane_cp01

0x1673,	// (0x00085e6f) vod_query_field_pane

0x16c2,	// (0x00085ebe) vod_query_pane_t1

0x16d1,	// (0x00085ecd) bg_button_pane_cp25

0x1372,	// (0x00085b6e) sso_btn_pane_t1_copy2

0xca8d,	// (0x00091289) vod_t_nml_pane_t1_ParamLimits

0xca8d,	// (0x00091289) vod_t_nml_pane_t1

0x16da,	// (0x00085ed6) vod_opt_row_pane_ParamLimits

0x16da,	// (0x00085ed6) vod_opt_row_pane

0x16ec,	// (0x00085ee8) vod_t_sub_pane_t1_ParamLimits

0x16ec,	// (0x00085ee8) vod_t_sub_pane_t1

0x1705,	// (0x00085f01) vod_det_cell_pane_ParamLimits

0x1705,	// (0x00085f01) vod_det_cell_pane

0xdc3b,	// (0x00092437) input_focus_pane_cp15

0x1716,	// (0x00085f12) vod_query_field_pane_t1

0x1724,	// (0x00085f20) vod_opt_row_pane_g1_ParamLimits

0x1724,	// (0x00085f20) vod_opt_row_pane_g1

0x1730,	// (0x00085f2c) vod_opt_row_pane_t1_ParamLimits

0x1730,	// (0x00085f2c) vod_opt_row_pane_t1

0x1750,	// (0x00085f4c) vod_det_cell_field_pane

0x1759,	// (0x00085f55) vod_det_cell_pane_g1

0x1761,	// (0x00085f5d) vod_det_cell_pane_t1

0xdc3b,	// (0x00092437) input_focus_pane_cp16

0x1770,	// (0x00085f6c) vod_det_cell_field_pane_t1

0xcac4,	// (0x000912c0) call7_btn_grp_pane_ParamLimits

0xcac4,	// (0x000912c0) call7_btn_grp_pane

0xcad3,	// (0x000912cf) call7_bubble_pane_ParamLimits

0xcad3,	// (0x000912cf) call7_bubble_pane

0xcae1,	// (0x000912dd) cell_call7_btn_pane_ParamLimits

0xcae1,	// (0x000912dd) cell_call7_btn_pane

0xcaf0,	// (0x000912ec) call7_pane_g1_ParamLimits

0xcaf0,	// (0x000912ec) call7_pane_g1

0xcaff,	// (0x000912fb) call7_windows_conf_pane_ParamLimits

0xcaff,	// (0x000912fb) call7_windows_conf_pane

0xcb19,	// (0x00091315) popup_call7_1st_window_ParamLimits

0xcb19,	// (0x00091315) popup_call7_1st_window

0xcb27,	// (0x00091323) popup_call7_2nd_window_ParamLimits

0xcb27,	// (0x00091323) popup_call7_2nd_window

0xcb35,	// (0x00091331) popup_call7_3rd_window_ParamLimits

0xcb35,	// (0x00091331) popup_call7_3rd_window

0xdc3b,	// (0x00092437) bg_button_pane_cp26

0x10e4,	// (0x000858e0) cell_call7_btn_pane_g1

0x10ed,	// (0x000858e9) cell_call7_btn_pane_t1

0xdc3b,	// (0x00092437) bg_popup_window_pane_cp12

0x177e,	// (0x00085f7a) popup_call7_1st_window_g1

0x1786,	// (0x00085f82) popup_call7_1st_window_g2

0x178e,	// (0x00085f8a) popup_call7_1st_window_g3

0x0002,

0xfe47,	// (0x00094643) popup_call7_1st_window_g

0x1796,	// (0x00085f92) popup_call7_1st_window_t1

0x17a5,	// (0x00085fa1) popup_call7_1st_window_t2

0x17b3,	// (0x00085faf) popup_call7_1st_window_t3

0x0002,

0xfe4e,	// (0x0009464a) popup_call7_1st_window_t

0xdc3b,	// (0x00092437) bg_popup_window_pane_cp13

0x17c1,	// (0x00085fbd) popup_call7_2nd_window_g1

0x17c9,	// (0x00085fc5) popup_call7_2nd_window_g2

0x17d1,	// (0x00085fcd) popup_call7_2nd_window_g3

0x0002,

0xfe55,	// (0x00094651) popup_call7_2nd_window_g

0x17d9,	// (0x00085fd5) popup_call7_2nd_window_t1

0xdc3b,	// (0x00092437) bg_popup_window_pane_cp14

0x17e8,	// (0x00085fe4) call7_list_conf_pane

0x17f0,	// (0x00085fec) call7_list_conf_row_pane_ParamLimits

0x17f0,	// (0x00085fec) call7_list_conf_row_pane

0x1803,	// (0x00085fff) call7_list_conf_row_pane_g1

0x180b,	// (0x00086007) call7_list_conf_row_pane_g2

0x0001,

0xfe5c,	// (0x00094658) call7_list_conf_row_pane_g

0x1813,	// (0x0008600f) call7_list_conf_row_pane_t1

0xdc3b,	// (0x00092437) list_highlight_pane_cp22

0xc190,	// (0x0009098c) sso_option_pane_cp01_ParamLimits

0xc190,	// (0x0009098c) sso_option_pane_cp01

0xe2c1,	// (0x00092abd) msg_header_pane_ParamLimits

0x1a36,	// (0x00086232) bg_button_pane_cp01_ParamLimits

0xf008,	// (0x00093804) input_focus_pane_cp07_ParamLimits

0xac46,	// (0x0008f442) popup_email_progress_window

0xe37a,	// (0x00092b76) popup_email_progress_window_g1

0x1821,	// (0x0008601d) popup_email_progress_window_g2

0x0001,

0xfe61,	// (0x0009465d) popup_email_progress_window_g

0x1829,	// (0x00086025) popup_email_progress_window_t1

0xdc3b,	// (0x00092437) cmail_conv_pane

0x07bf,	// (0x00084fbb) list_single_dyc_row_pane_g5_ParamLimits

0x07bf,	// (0x00084fbb) list_single_dyc_row_pane_g5

0x07cb,	// (0x00084fc7) list_single_dyc_row_pane_g6_ParamLimits

0x07cb,	// (0x00084fc7) list_single_dyc_row_pane_g6

0x07e3,	// (0x00084fdf) list_single_dyc_row_pane_g7_ParamLimits

0x07e3,	// (0x00084fdf) list_single_dyc_row_pane_g7

0xbb4d,	// (0x00090349) main_button_pane_5_ParamLimits

0xbb4d,	// (0x00090349) main_button_pane_5

0xc001,	// (0x000907fd) sso_emg_call_btn_pane_ParamLimits

0xc001,	// (0x000907fd) sso_emg_call_btn_pane

0xc315,	// (0x00090b11) sso_t_sub_pane_cp01_ParamLimits

0xc315,	// (0x00090b11) sso_t_sub_pane_cp01

0x15a9,	// (0x00085da5) sso_option_row_pane_g1_ParamLimits

0x15b5,	// (0x00085db1) sso_option_row_pane_g2_ParamLimits

0x15b5,	// (0x00085db1) sso_option_row_pane_g2

0x0001,

0xfe36,	// (0x00094632) sso_option_row_pane_g_ParamLimits

0xfe36,	// (0x00094632) sso_option_row_pane_g

0xc4a4,	// (0x00090ca0) att_btn_pane_cp02_ParamLimits

0xc4a4,	// (0x00090ca0) att_btn_pane_cp02

0x1837,	// (0x00086033) cmail_conv_hdr_pane

0x1840,	// (0x0008603c) list_cmail_conv_pane

0x184a,	// (0x00086046) scroll_pane_cp31

0x1852,	// (0x0008604e) cmail_conv_hdr_pane_t1

0x1860,	// (0x0008605c) cmail_conv_hdr_pane_t2

0x0001,

0xfe66,	// (0x00094662) cmail_conv_hdr_pane_t

0x186e,	// (0x0008606a) bubble_cmail_conv_pane_ParamLimits

0x186e,	// (0x0008606a) bubble_cmail_conv_pane

0x1886,	// (0x00086082) aid_size_colorization_pane

0xe5f0,	// (0x00092dec) bg_bubble_cmail_conv_pane

0x188e,	// (0x0008608a) body_bubble_cmail_conv_pane

0x1896,	// (0x00086092) bubble_cmail_conv_pane_g1

0x189e,	// (0x0008609a) bubble_cmail_conv_pane_g2

0x18a6,	// (0x000860a2) bubble_cmail_conv_pane_g3

0x0002,

0xfe6b,	// (0x00094667) bubble_cmail_conv_pane_g

0x18ae,	// (0x000860aa) bubble_cmail_conv_pane_t1

0x18bc,	// (0x000860b8) bg_bubble_cmail_conv_pane_g1

0x18c5,	// (0x000860c1) bg_bubble_cmail_conv_pane_g2

0x18ce,	// (0x000860ca) bg_bubble_cmail_conv_pane_g3

0x0002,

0xfe72,	// (0x0009466e) bg_bubble_cmail_conv_pane_g

0x18d7,	// (0x000860d3) body_bubble_cmail_conv_pane_t1_ParamLimits

0x18d7,	// (0x000860d3) body_bubble_cmail_conv_pane_t1

0x18ee,	// (0x000860ea) body_bubble_cmail_conv_pane_t2_ParamLimits

0x18ee,	// (0x000860ea) body_bubble_cmail_conv_pane_t2

0x0001,

0xfe79,	// (0x00094675) body_bubble_cmail_conv_pane_t_ParamLimits

0xfe79,	// (0x00094675) body_bubble_cmail_conv_pane_t

0xe32e,	// (0x00092b2a) list_highlight_pane_cp024_ParamLimits
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large
