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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0005b6cd };

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
0x0eec,	// (0x0005c5b9) Screen

0x0ef8,	// (0x0005c5c5) application_window

0x0f54,	// (0x0005c621) area_bottom_pane_ParamLimits

0x0f54,	// (0x0005c621) area_bottom_pane

0x0fad,	// (0x0005c67a) area_top_pane_ParamLimits

0x0fad,	// (0x0005c67a) area_top_pane

0x1011,	// (0x0005c6de) call_video_uplink_pane_ParamLimits

0x1011,	// (0x0005c6de) call_video_uplink_pane

0x1050,	// (0x0005c71d) main_pane_ParamLimits

0x1050,	// (0x0005c71d) main_pane

0xcbde,	// (0x000682ab) context_pane

0x4779,	// (0x0005fe46) navi_pane

0x4799,	// (0x0005fe66) popup_cale_events_window_ParamLimits

0x4799,	// (0x0005fe66) popup_cale_events_window

0xcbf1,	// (0x000682be) popup_mup_playback_window

0x47b1,	// (0x0005fe7e) signal_pane

0xace4,	// (0x000663b1) main_browser_pane

0xb7c0,	// (0x00066e8d) main_burst_pane

0x4601,	// (0x0005fcce) main_calc_pane

0xcbc4,	// (0x00068291) main_cale_day_pane

0x179b,	// (0x0005ce68) main_cale_month_pane

0xcbc4,	// (0x00068291) main_cale_week_pane

0xb7c0,	// (0x00066e8d) main_call_pane

0xa9a5,	// (0x00066072) main_call_poc_pane

0xb7c0,	// (0x00066e8d) main_camera_pane

0xb7c0,	// (0x00066e8d) main_chi_dic_pane

0xb645,	// (0x00066d12) main_clock_pane

0xa9a5,	// (0x00066072) main_fmradio_pane

0xb7c0,	// (0x00066e8d) main_graph_messa_pane

0xa9a5,	// (0x00066072) main_help_pane

0xace4,	// (0x000663b1) main_im_pane

0xac00,	// (0x000662cd) main_image_pane_ParamLimits

0xac00,	// (0x000662cd) main_image_pane

0xa9a5,	// (0x00066072) main_location2_pane

0xb7c0,	// (0x00066e8d) main_location_pane

0xac00,	// (0x000662cd) main_messa_pane

0xa9a5,	// (0x00066072) main_mp2_pane

0xb7c0,	// (0x00066e8d) main_mp_pane

0xa9a5,	// (0x00066072) main_msg_pane

0xa9a5,	// (0x00066072) main_mup_eq_pane

0xa9a5,	// (0x00066072) main_mup_pane

0xace4,	// (0x000663b1) main_notes_pane

0xa9a5,	// (0x00066072) main_pec_pane

0xa9a5,	// (0x00066072) main_phob_pane

0xa9a5,	// (0x00066072) main_pinb_pane

0xa9a5,	// (0x00066072) main_postcard_pane

0xa9a5,	// (0x00066072) main_qdial_pane

0xb7c0,	// (0x00066e8d) main_skin_pane

0xa9a5,	// (0x00066072) main_smil2_pane

0xb7c0,	// (0x00066e8d) main_smil_pane

0xb7c0,	// (0x00066e8d) main_video_pane

0xb7c0,	// (0x00066e8d) main_video_tele_pane

0xac00,	// (0x000662cd) main_viewer_pane_ParamLimits

0xac00,	// (0x000662cd) main_viewer_pane

0xb7c0,	// (0x00066e8d) main_vorec_pane

0x464d,	// (0x0005fd1a) popup_blid_sat_info_window_ParamLimits

0x464d,	// (0x0005fd1a) popup_blid_sat_info_window

0x466d,	// (0x0005fd3a) popup_dyc_status_message_window_ParamLimits

0x466d,	// (0x0005fd3a) popup_dyc_status_message_window

0x467b,	// (0x0005fd48) popup_grid_large_graphic_window_ParamLimits

0x467b,	// (0x0005fd48) popup_grid_large_graphic_window

0x470a,	// (0x0005fdd7) popup_loc_request_window_ParamLimits

0x470a,	// (0x0005fdd7) popup_loc_request_window

0x4751,	// (0x0005fe1e) popup_wml_address_window_ParamLimits

0x4751,	// (0x0005fe1e) popup_wml_address_window

0x44d9,	// (0x0005fba6) call_muted_g1

0x4197,	// (0x0005f864) popup_call_audio_conf_window_ParamLimits

0x4197,	// (0x0005f864) popup_call_audio_conf_window

0x44e9,	// (0x0005fbb6) popup_call_audio_first_window_ParamLimits

0x44e9,	// (0x0005fbb6) popup_call_audio_first_window

0x4529,	// (0x0005fbf6) popup_call_audio_in_window_ParamLimits

0x4529,	// (0x0005fbf6) popup_call_audio_in_window

0x454d,	// (0x0005fc1a) popup_call_audio_out_window_ParamLimits

0x454d,	// (0x0005fc1a) popup_call_audio_out_window

0x456f,	// (0x0005fc3c) popup_call_audio_second_window_ParamLimits

0x456f,	// (0x0005fc3c) popup_call_audio_second_window

0x459f,	// (0x0005fc6c) popup_call_audio_wait_window_ParamLimits

0x459f,	// (0x0005fc6c) popup_call_audio_wait_window

0x45c0,	// (0x0005fc8d) popup_number_entry_window_ParamLimits

0x45c0,	// (0x0005fc8d) popup_number_entry_window

0x9b47,	// (0x00065214) bg_popup_call_pane_cp05_ParamLimits

0x9b47,	// (0x00065214) bg_popup_call_pane_cp05

0x9b67,	// (0x00065234) popup_number_entry_window_t1

0x9b7a,	// (0x00065247) popup_number_entry_window_t2

0x9b8c,	// (0x00065259) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x0006a7a0) popup_number_entry_window_t

0x9b9e,	// (0x0006526b) text_title_cp2

0x9bb1,	// (0x0006527e) bg_popup_call_pane_cp_ParamLimits

0x9bb1,	// (0x0006527e) bg_popup_call_pane_cp

0x9bbf,	// (0x0006528c) call_thumbnail_pane

0x9bc7,	// (0x00065294) popup_call_audio_in_window_g1_ParamLimits

0x9bc7,	// (0x00065294) popup_call_audio_in_window_g1

0x9bd3,	// (0x000652a0) popup_call_audio_in_window_g2_ParamLimits

0x9bd3,	// (0x000652a0) popup_call_audio_in_window_g2

0xa274,	// (0x00065941) popup_call_audio_in_window_g3_ParamLimits

0xa274,	// (0x00065941) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x0006a7a9) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x0006a7a9) popup_call_audio_in_window_g

0xa280,	// (0x0006594d) popup_call_audio_in_window_t1_ParamLimits

0xa280,	// (0x0006594d) popup_call_audio_in_window_t1

0xa29c,	// (0x00065969) popup_call_audio_in_window_t2_ParamLimits

0xa29c,	// (0x00065969) popup_call_audio_in_window_t2

0xa2b8,	// (0x00065985) popup_call_audio_in_window_t3_ParamLimits

0xa2b8,	// (0x00065985) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x0006a7b0) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x0006a7b0) popup_call_audio_in_window_t

0x9bb1,	// (0x0006527e) bg_popup_call_pane_cp01_ParamLimits

0x9bb1,	// (0x0006527e) bg_popup_call_pane_cp01

0x9bbf,	// (0x0006528c) call_thumbnail_pane_cp02

0xa2cb,	// (0x00065998) call_type_pane_cp022

0xa2d3,	// (0x000659a0) popup_call_audio_out_window_g1_ParamLimits

0xa2d3,	// (0x000659a0) popup_call_audio_out_window_g1

0xa2e5,	// (0x000659b2) popup_call_audio_out_window_g2_ParamLimits

0xa2e5,	// (0x000659b2) popup_call_audio_out_window_g2

0xa2f1,	// (0x000659be) popup_call_audio_out_window_g3_ParamLimits

0xa2f1,	// (0x000659be) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x0006a7b7) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x0006a7b7) popup_call_audio_out_window_g

0xa303,	// (0x000659d0) popup_call_audio_out_window_t1_ParamLimits

0xa303,	// (0x000659d0) popup_call_audio_out_window_t1

0xa31b,	// (0x000659e8) popup_call_audio_out_window_t2_ParamLimits

0xa31b,	// (0x000659e8) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x0006a7be) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x0006a7be) popup_call_audio_out_window_t

0xa330,	// (0x000659fd) bg_popup_call_pane_ParamLimits

0xa330,	// (0x000659fd) bg_popup_call_pane

0x126c,	// (0x0005c939) call_thumbnail_pane_cp_ParamLimits

0x126c,	// (0x0005c939) call_thumbnail_pane_cp

0xa76a,	// (0x00065e37) call_type_pane_cp01_ParamLimits

0xa76a,	// (0x00065e37) call_type_pane_cp01

0xa7ae,	// (0x00065e7b) popup_call_audio_first_window_g1_ParamLimits

0xa7ae,	// (0x00065e7b) popup_call_audio_first_window_g1

0xa7fa,	// (0x00065ec7) popup_call_audio_first_window_g2_ParamLimits

0xa7fa,	// (0x00065ec7) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x0006a7c3) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x0006a7c3) popup_call_audio_first_window_g

0xa83e,	// (0x00065f0b) popup_call_audio_first_window_t1_ParamLimits

0xa83e,	// (0x00065f0b) popup_call_audio_first_window_t1

0xa8ea,	// (0x00065fb7) popup_call_audio_first_window_t4_ParamLimits

0xa8ea,	// (0x00065fb7) popup_call_audio_first_window_t4

0xa976,	// (0x00066043) popup_call_audio_first_window_t5_ParamLimits

0xa976,	// (0x00066043) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x0006a7c8) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x0006a7c8) popup_call_audio_first_window_t

0xa9a5,	// (0x00066072) bg_popup_call_pane_cp02

0xa9af,	// (0x0006607c) call_type_pane_cp023

0xa9b7,	// (0x00066084) popup_call_audio_wait_window_g1

0xa9bf,	// (0x0006608c) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x0006a7cf) popup_call_audio_wait_window_g

0xa9c7,	// (0x00066094) popup_call_audio_wait_window_t3

0xa9d5,	// (0x000660a2) bg_popup_call_pane_cp03_ParamLimits

0xa9d5,	// (0x000660a2) bg_popup_call_pane_cp03

0xaa35,	// (0x00066102) call_thumbnail_pane_cp011_ParamLimits

0xaa35,	// (0x00066102) call_thumbnail_pane_cp011

0xaa41,	// (0x0006610e) call_type_pane_cp034_ParamLimits

0xaa41,	// (0x0006610e) call_type_pane_cp034

0xaa7d,	// (0x0006614a) popup_call_audio_second_window_g1_ParamLimits

0xaa7d,	// (0x0006614a) popup_call_audio_second_window_g1

0xaab9,	// (0x00066186) popup_call_audio_second_window_g2_ParamLimits

0xaab9,	// (0x00066186) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x0006a7d4) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x0006a7d4) popup_call_audio_second_window_g

0xaaf5,	// (0x000661c2) popup_call_audio_second_window_t1_ParamLimits

0xaaf5,	// (0x000661c2) popup_call_audio_second_window_t1

0xab76,	// (0x00066243) popup_call_audio_second_window_t2_ParamLimits

0xab76,	// (0x00066243) popup_call_audio_second_window_t2

0xabac,	// (0x00066279) popup_call_audio_second_window_t3_ParamLimits

0xabac,	// (0x00066279) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x0006a7d9) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x0006a7d9) popup_call_audio_second_window_t

0xa9a5,	// (0x00066072) bg_popup_call_pane_cp04

0xabe2,	// (0x000662af) list_conf_pane

0xabea,	// (0x000662b7) popup_call_audio_conf_window_t1

0xabf8,	// (0x000662c5) call_thumbnail_pane_g1

0xac00,	// (0x000662cd) bg_pinb_pane_ParamLimits

0xac00,	// (0x000662cd) bg_pinb_pane

0xac0e,	// (0x000662db) find_pinb_pane

0xac17,	// (0x000662e4) listscroll_pinb_pane_ParamLimits

0xac17,	// (0x000662e4) listscroll_pinb_pane

0xac26,	// (0x000662f3) pinb_bg_pane_g1

0x1290,	// (0x0005c95d) pinb_bg_pane_g2

0x129c,	// (0x0005c969) pinb_bg_pane_g3

0x12a8,	// (0x0005c975) pinb_bg_pane_g4

0x12b4,	// (0x0005c981) pinb_bg_pane_g5

0x12c0,	// (0x0005c98d) pinb_bg_pane_g6

0x12cb,	// (0x0005c998) pinb_bg_pane_g7

0x12d6,	// (0x0005c9a3) pinb_bg_pane_g8

0x12e1,	// (0x0005c9ae) pinb_bg_pane_g9

0x12eb,	// (0x0005c9b8) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x0006a7e0) pinb_bg_pane_g

0x1308,	// (0x0005c9d5) grid_pinb_pane

0x1313,	// (0x0005c9e0) list_pinb_pane

0x131e,	// (0x0005c9eb) scroll_pane_cp01_ParamLimits

0x131e,	// (0x0005c9eb) scroll_pane_cp01

0xac30,	// (0x000662fd) find_pinb_pane_g1_ParamLimits

0xac30,	// (0x000662fd) find_pinb_pane_g1

0xac48,	// (0x00066315) find_pinb_pane_t1

0xac5a,	// (0x00066327) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x0006a7fa) find_pinb_pane_t

0xac6f,	// (0x0006633c) input_focus_pane_cp01_ParamLimits

0xac6f,	// (0x0006633c) input_focus_pane_cp01

0x1330,	// (0x0005c9fd) cell_pinb_pane_ParamLimits

0x1330,	// (0x0005c9fd) cell_pinb_pane

0xac7b,	// (0x00066348) cell_pinb_pane_g1_ParamLimits

0xac7b,	// (0x00066348) cell_pinb_pane_g1

0xac8e,	// (0x0006635b) cell_pinb_pane_g2_ParamLimits

0xac8e,	// (0x0006635b) cell_pinb_pane_g2

0xac9a,	// (0x00066367) cell_pinb_pane_g3_ParamLimits

0xac9a,	// (0x00066367) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x0006a7ff) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x0006a7ff) cell_pinb_pane_g

0xa9a5,	// (0x00066072) grid_highlight_pane_cp01

0x135f,	// (0x0005ca2c) list_pinb_item_pane_ParamLimits

0x135f,	// (0x0005ca2c) list_pinb_item_pane

0xa9a5,	// (0x00066072) list_highlight_pane_cp02

0x1389,	// (0x0005ca56) list_pinb_item_pane_g1_ParamLimits

0x1389,	// (0x0005ca56) list_pinb_item_pane_g1

0x1396,	// (0x0005ca63) list_pinb_item_pane_g2_ParamLimits

0x1396,	// (0x0005ca63) list_pinb_item_pane_g2

0x13a2,	// (0x0005ca6f) list_pinb_item_pane_g3_ParamLimits

0x13a2,	// (0x0005ca6f) list_pinb_item_pane_g3

0x13b3,	// (0x0005ca80) list_pinb_item_pane_g4_ParamLimits

0x13b3,	// (0x0005ca80) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x0006a806) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x0006a806) list_pinb_item_pane_g

0x13bf,	// (0x0005ca8c) list_pinb_item_pane_t1_ParamLimits

0x13bf,	// (0x0005ca8c) list_pinb_item_pane_t1

0x13f0,	// (0x0005cabd) calc_display_pane

0x140e,	// (0x0005cadb) calc_paper_pane

0x142a,	// (0x0005caf7) grid_calc_pane

0xa9a5,	// (0x00066072) bg_list_pane_cp01

0x1456,	// (0x0005cb23) clock_g1

0x145e,	// (0x0005cb2b) clock_g2

0x0001,

0xf142,	// (0x0006a80f) clock_g

0x1468,	// (0x0005cb35) clock_t1_ParamLimits

0x1468,	// (0x0005cb35) clock_t1

0x147d,	// (0x0005cb4a) clock_t2_ParamLimits

0x147d,	// (0x0005cb4a) clock_t2

0x148f,	// (0x0005cb5c) clock_t3_ParamLimits

0x148f,	// (0x0005cb5c) clock_t3

0x14a1,	// (0x0005cb6e) clock_t4_ParamLimits

0x14a1,	// (0x0005cb6e) clock_t4

0x14b3,	// (0x0005cb80) clock_t5_ParamLimits

0x14b3,	// (0x0005cb80) clock_t5

0x14c8,	// (0x0005cb95) clock_t6_ParamLimits

0x14c8,	// (0x0005cb95) clock_t6

0x14da,	// (0x0005cba7) clock_t7_ParamLimits

0x14da,	// (0x0005cba7) clock_t7

0x14ec,	// (0x0005cbb9) clock_t8_ParamLimits

0x14ec,	// (0x0005cbb9) clock_t8

0x1502,	// (0x0005cbcf) clock_t9_ParamLimits

0x1502,	// (0x0005cbcf) clock_t9

0x0008,

0xf147,	// (0x0006a814) clock_t_ParamLimits

0xf147,	// (0x0006a814) clock_t

0xaca6,	// (0x00066373) popup_clock_analogue_window_cp02

0xaca6,	// (0x00066373) popup_clock_digital_window_cp01

0xacae,	// (0x0006637b) listscroll_help_pane

0xa9a5,	// (0x00066072) phob_pre_status_pane

0xacb8,	// (0x00066385) grid_qdial_pane

0xac00,	// (0x000662cd) listscroll_mce_pane

0xac00,	// (0x000662cd) bg_notes_pane

0xacc2,	// (0x0006638f) list_notes_pane

0x1518,	// (0x0005cbe5) scroll_pane_cp06

0xacd0,	// (0x0006639d) bg_calc_paper_pane

0x1527,	// (0x0005cbf4) list_calc_pane

0xace4,	// (0x000663b1) bg_calc_display_pane

0x1541,	// (0x0005cc0e) calc_display_pane_t1

0x1556,	// (0x0005cc23) calc_display_pane_t2

0x156b,	// (0x0005cc38) calc_display_pane_t3

0x0002,

0xf15a,	// (0x0006a827) calc_display_pane_t

0x157d,	// (0x0005cc4a) cell_calc_pane_ParamLimits

0x157d,	// (0x0005cc4a) cell_calc_pane

0xacf0,	// (0x000663bd) bg_calc_paper_pane_g1

0xad08,	// (0x000663d5) bg_calc_paper_pane_g2

0xacfc,	// (0x000663c9) bg_calc_paper_pane_g3

0xad14,	// (0x000663e1) bg_calc_paper_pane_g4

0xad20,	// (0x000663ed) bg_calc_paper_pane_g5

0x15aa,	// (0x0005cc77) bg_calc_paper_pane_g6

0x15bb,	// (0x0005cc88) bg_calc_paper_pane_g7

0x15cc,	// (0x0005cc99) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x0006a82e) bg_calc_paper_pane_g

0x15dd,	// (0x0005ccaa) calc_bg_paper_pane_g9

0x15ee,	// (0x0005ccbb) list_calc_item_pane_ParamLimits

0x15ee,	// (0x0005ccbb) list_calc_item_pane

0xad2c,	// (0x000663f9) list_calc_item_pane_g1

0x1622,	// (0x0005ccef) list_calc_item_pane_t1_ParamLimits

0x1622,	// (0x0005ccef) list_calc_item_pane_t1

0x1634,	// (0x0005cd01) list_calc_item_pane_t2_ParamLimits

0x1634,	// (0x0005cd01) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x0006a83f) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x0006a83f) list_calc_item_pane_t

0xad39,	// (0x00066406) cell_calc_pane_g1

0xad43,	// (0x00066410) grid_highlight_pane_cp02

0xad65,	// (0x00066432) bg_calc_display_pane_g1

0x1664,	// (0x0005cd31) bg_calc_display_pane_g2

0xad6e,	// (0x0006643b) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x0006a849) bg_calc_display_pane_g

0x166e,	// (0x0005cd3b) cell_qdial_pane_ParamLimits

0x166e,	// (0x0005cd3b) cell_qdial_pane

0x1682,	// (0x0005cd4f) cell_qdial_pane_g1_ParamLimits

0x1682,	// (0x0005cd4f) cell_qdial_pane_g1

0x168f,	// (0x0005cd5c) cell_qdial_pane_g2_ParamLimits

0x168f,	// (0x0005cd5c) cell_qdial_pane_g2

0xad77,	// (0x00066444) cell_qdial_pane_g3_ParamLimits

0xad77,	// (0x00066444) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x0006a850) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x0006a850) cell_qdial_pane_g

0x16ac,	// (0x0005cd79) cell_qdial_pane_t1_ParamLimits

0x16ac,	// (0x0005cd79) cell_qdial_pane_t1

0x16c4,	// (0x0005cd91) cell_qdial_pane_t2_ParamLimits

0x16c4,	// (0x0005cd91) cell_qdial_pane_t2

0x16d7,	// (0x0005cda4) cell_qdial_pane_t3_ParamLimits

0x16d7,	// (0x0005cda4) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x0006a859) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x0006a859) cell_qdial_pane_t

0xa9a5,	// (0x00066072) grid_highlight_pane_cp04

0xad83,	// (0x00066450) thumbnail_qdial_pane_ParamLimits

0xad83,	// (0x00066450) thumbnail_qdial_pane

0xaddf,	// (0x000664ac) list_help_pane

0xade8,	// (0x000664b5) scroll_pane_cp02

0x16ea,	// (0x0005cdb7) help_list_pane_t1_ParamLimits

0x16ea,	// (0x0005cdb7) help_list_pane_t1

0x1724,	// (0x0005cdf1) bg_notes_pane_g2

0x172c,	// (0x0005cdf9) bg_notes_pane_g3

0x1734,	// (0x0005ce01) notes_bg_pane_g1

0x173c,	// (0x0005ce09) notes_bg_pane_g4

0x1744,	// (0x0005ce11) notes_bg_pane_g5

0x174c,	// (0x0005ce19) notes_bg_pane_g6

0x1754,	// (0x0005ce21) notes_bg_pane_g7

0x175c,	// (0x0005ce29) notes_bg_pane_g8

0x1764,	// (0x0005ce31) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x0006a877) notes_bg_pane_g

0x176c,	// (0x0005ce39) list_notes_text_pane_ParamLimits

0x176c,	// (0x0005ce39) list_notes_text_pane

0xadf1,	// (0x000664be) list_notes_text_pane_g1

0x9bdf,	// (0x000652ac) list_notes_text_pane_t1

0x179b,	// (0x0005ce68) listscroll_cale_week_pane

0x17c0,	// (0x0005ce8d) bg_cale_heading_pane

0xae14,	// (0x000664e1) bg_cale_pane_cp01

0x17e2,	// (0x0005ceaf) cale_week_corner_pane

0x17fc,	// (0x0005cec9) cale_week_day_heading_pane

0x181e,	// (0x0005ceeb) cale_week_scroll_pane_g1

0x183b,	// (0x0005cf08) cale_week_scroll_pane_g2

0x184e,	// (0x0005cf1b) cale_week_scroll_pane_g3

0x1861,	// (0x0005cf2e) cale_week_scroll_pane_g4

0x1874,	// (0x0005cf41) cale_week_scroll_pane_g5

0x1887,	// (0x0005cf54) cale_week_scroll_pane_g6

0x189a,	// (0x0005cf67) cale_week_scroll_pane_g7

0x18ad,	// (0x0005cf7a) cale_week_scroll_pane_g8

0x18c2,	// (0x0005cf8f) cale_week_scroll_pane_g9

0x18d5,	// (0x0005cfa2) cale_week_scroll_pane_g10

0x18e8,	// (0x0005cfb5) cale_week_scroll_pane_g11

0x18fb,	// (0x0005cfc8) cale_week_scroll_pane_g12

0x1912,	// (0x0005cfdf) cale_week_scroll_pane_g13

0x192d,	// (0x0005cffa) cale_week_scroll_pane_g14

0x1948,	// (0x0005d015) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x0006a886) cale_week_scroll_pane_g

0x1963,	// (0x0005d030) cale_week_time_pane

0x1978,	// (0x0005d045) grid_cale_week_pane

0xae44,	// (0x00066511) scroll_pane_cp08

0x1999,	// (0x0005d066) cell_cale_week_pane_ParamLimits

0x1999,	// (0x0005d066) cell_cale_week_pane

0x19fd,	// (0x0005d0ca) cale_week_day_heading_pane_t1

0x1a38,	// (0x0005d105) cale_week_day_heading_pane_t2

0x1a73,	// (0x0005d140) cale_week_day_heading_pane_t3

0x1aae,	// (0x0005d17b) cale_week_day_heading_pane_t4

0x1ae9,	// (0x0005d1b6) cale_week_day_heading_pane_t5

0x1b24,	// (0x0005d1f1) cale_week_day_heading_pane_t6

0x1b5f,	// (0x0005d22c) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x0006a8a5) cale_week_day_heading_pane_t

0xae61,	// (0x0006652e) bg_cale_side_pane

0x1b9a,	// (0x0005d267) cale_week_time_pane_t1

0x1bb4,	// (0x0005d281) cale_week_time_pane_t2

0x1bce,	// (0x0005d29b) cale_week_time_pane_t3

0x1be8,	// (0x0005d2b5) cale_week_time_pane_t4

0x1c02,	// (0x0005d2cf) cale_week_time_pane_t5

0x1c1e,	// (0x0005d2eb) cale_week_time_pane_t6

0x1c40,	// (0x0005d30d) cale_week_time_pane_t7

0x1c64,	// (0x0005d331) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x0006a8b4) cale_week_time_pane_t

0x1c8a,	// (0x0005d357) cell_cale_week_pane_g2

0x1c9d,	// (0x0005d36a) cell_cale_week_pane_g3_ParamLimits

0x1c9d,	// (0x0005d36a) cell_cale_week_pane_g3

0xae6f,	// (0x0006653c) grid_highlight_pane_cp07

0xae77,	// (0x00066544) listscroll_gms_pane

0xae81,	// (0x0006654e) grid_gms_pane

0xae8a,	// (0x00066557) listscroll_gms_pane_g1

0xae92,	// (0x0006655f) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x0006a8c5) listscroll_gms_pane_g

0x1cb5,	// (0x0005d382) scroll_pane_cp010

0x1cc0,	// (0x0005d38d) cell_gms_pane_ParamLimits

0x1cc0,	// (0x0005d38d) cell_gms_pane

0x1cd0,	// (0x0005d39d) cell_gms_pane_g1

0xae9a,	// (0x00066567) cell_gms_pane_g2

0xadf1,	// (0x000664be) cell_gms_pane_g3

0xaea2,	// (0x0006656f) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x0006a8ca) cell_gms_pane_g

0xaeab,	// (0x00066578) grid_highlight_pane_cp09

0x4481,	// (0x0005fb4e) phob_pre_status_pane_g1

0x4489,	// (0x0005fb56) phob_pre_status_pane_g2

0x4491,	// (0x0005fb5e) phob_pre_status_pane_g3

0x4499,	// (0x0005fb66) phob_pre_status_pane_g4

0x0004,

0xf4f6,	// (0x0006abc3) phob_pre_status_pane_g

0x44a9,	// (0x0005fb76) phob_pre_status_pane_t1

0x44b9,	// (0x0005fb86) phob_pre_status_pane_t2

0x44c9,	// (0x0005fb96) phob_pre_status_pane_t3

0x0002,

0xf501,	// (0x0006abce) phob_pre_status_pane_t

0xa9a5,	// (0x00066072) bg_list_pane_cp05

0x1ce0,	// (0x0005d3ad) grid_vorec_pane

0x1cec,	// (0x0005d3b9) vorec_t1

0x1cfa,	// (0x0005d3c7) vorec_t2

0x1d08,	// (0x0005d3d5) vorec_t3

0x1d16,	// (0x0005d3e3) vorec_t4

0x1d24,	// (0x0005d3f1) vorec_t5

0x1d32,	// (0x0005d3ff) vorec_t6

0x0006,

0xf206,	// (0x0006a8d3) vorec_t

0x1d4e,	// (0x0005d41b) wait_bar_pane_cp01

0x1d56,	// (0x0005d423) cell_vorec_pane_ParamLimits

0x1d56,	// (0x0005d423) cell_vorec_pane

0xaeb3,	// (0x00066580) cell_vorec_pane_g1

0xa9a5,	// (0x00066072) grid_highlight_pane_cp05

0x1d79,	// (0x0005d446) cams_zoom_pane

0x1d85,	// (0x0005d452) image_vga_pane

0x1d94,	// (0x0005d461) main_camera_pane_g1

0x1da2,	// (0x0005d46f) main_camera_pane_g2

0x1dae,	// (0x0005d47b) main_camera_pane_g3

0x1dba,	// (0x0005d487) main_camera_pane_g4

0x1dc6,	// (0x0005d493) main_camera_pane_g5

0x1dd2,	// (0x0005d49f) main_camera_pane_g6

0x1dde,	// (0x0005d4ab) main_camera_pane_g7

0x0007,

0xf215,	// (0x0006a8e2) main_camera_pane_g

0x1dea,	// (0x0005d4b7) main_camera_pane_t1

0x1dfc,	// (0x0005d4c9) main_camera_pane_t2

0x0001,

0xf226,	// (0x0006a8f3) main_camera_pane_t

0x1e1d,	// (0x0005d4ea) cams_zoom_pane_cp_ParamLimits

0x1e1d,	// (0x0005d4ea) cams_zoom_pane_cp

0x1e41,	// (0x0005d50e) image_cif_pane_ParamLimits

0x1e41,	// (0x0005d50e) image_cif_pane

0x1e5f,	// (0x0005d52c) image_subqcif_pane

0x1e67,	// (0x0005d534) main_video_pane_g1_ParamLimits

0x1e67,	// (0x0005d534) main_video_pane_g1

0x1e87,	// (0x0005d554) main_video_pane_g2_ParamLimits

0x1e87,	// (0x0005d554) main_video_pane_g2

0x1eb7,	// (0x0005d584) main_video_pane_g3_ParamLimits

0x1eb7,	// (0x0005d584) main_video_pane_g3

0x1ee0,	// (0x0005d5ad) main_video_pane_g4_ParamLimits

0x1ee0,	// (0x0005d5ad) main_video_pane_g4

0x1f09,	// (0x0005d5d6) main_video_pane_g5_ParamLimits

0x1f09,	// (0x0005d5d6) main_video_pane_g5

0xaec9,	// (0x00066596) main_video_pane_g6_ParamLimits

0xaec9,	// (0x00066596) main_video_pane_g6

0x0006,

0xf22b,	// (0x0006a8f8) main_video_pane_g_ParamLimits

0xf22b,	// (0x0006a8f8) main_video_pane_g

0x1f2b,	// (0x0005d5f8) main_video_pane_t1_ParamLimits

0x1f2b,	// (0x0005d5f8) main_video_pane_t1

0xaee3,	// (0x000665b0) cams_zoom_pane_g1

0xaeec,	// (0x000665b9) cams_zoom_pane_g2

0xaef5,	// (0x000665c2) cams_zoom_pane_g3

0xaefe,	// (0x000665cb) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x0006a907) cams_zoom_pane_g

0x1f75,	// (0x0005d642) grid_cams_pane

0x1f83,	// (0x0005d650) linegrid_cams_pane

0x1f91,	// (0x0005d65e) cell_cams_pane_ParamLimits

0x1f91,	// (0x0005d65e) cell_cams_pane

0xaf07,	// (0x000665d4) cams_burst_image_pane

0xaf0f,	// (0x000665dc) cell_cams_pane_g1

0xa9a5,	// (0x00066072) grid_highlight_pane_cp03

0xad39,	// (0x00066406) mp_bg_pane_g1

0xa9a5,	// (0x00066072) bg_list_pane_cp03

0xcae9,	// (0x000681b6) bg_mp_pane

0xcaf1,	// (0x000681be) grid_mp_pane

0xcaf9,	// (0x000681c6) media_player_g1

0xcb01,	// (0x000681ce) media_player_t1

0xcb0f,	// (0x000681dc) media_player_t2

0xcb1d,	// (0x000681ea) media_player_t3

0xcb2b,	// (0x000681f8) media_player_t4

0xcb39,	// (0x00068206) media_player_t5

0xcb47,	// (0x00068214) media_player_t6

0xcb55,	// (0x00068222) media_player_t7

0x0006,

0x04dc,	// (0x0005bba9) media_player_t

0xcb63,	// (0x00068230) wait_bar_pane_cp02

0xf4e2,	// (0x0006abaf) main_usb_pane_t

0x4478,	// (0x0005fb45) cell_mp_pane

0xad39,	// (0x00066406) cell_mp_pane_g1

0xa9a5,	// (0x00066072) grid_highlight_pane_cp06

0xaf17,	// (0x000665e4) grid_skin_colour_pane

0xaf1f,	// (0x000665ec) list_highlight_pane_cp03

0x207c,	// (0x0005d749) skin_g1

0xaf27,	// (0x000665f4) skin_t1

0xaf36,	// (0x00066603) skin_t2

0x0001,

0xf26f,	// (0x0006a93c) skin_t

0x2086,	// (0x0005d753) cell_skin_colour_pane_ParamLimits

0x2086,	// (0x0005d753) cell_skin_colour_pane

0xaf44,	// (0x00066611) cell_skin_colour_pane_g1

0x210a,	// (0x0005d7d7) call_video_g1_ParamLimits

0x210a,	// (0x0005d7d7) call_video_g1

0x211a,	// (0x0005d7e7) call_video_g2_ParamLimits

0x211a,	// (0x0005d7e7) call_video_g2

0x0001,

0xf274,	// (0x0006a941) call_video_g_ParamLimits

0xf274,	// (0x0006a941) call_video_g

0x2174,	// (0x0005d841) call_video_uplink_pane_cp1_ParamLimits

0x2174,	// (0x0005d841) call_video_uplink_pane_cp1

0xaf56,	// (0x00066623) call_video_uplink_pane_cp2

0x2240,	// (0x0005d90d) video_down_crop_pane_ParamLimits

0x2240,	// (0x0005d90d) video_down_crop_pane

0x2332,	// (0x0005d9ff) video_down_pane_ParamLimits

0x2332,	// (0x0005d9ff) video_down_pane

0xaf5e,	// (0x0006662b) video_down_subqcif_pane_ParamLimits

0xaf5e,	// (0x0006662b) video_down_subqcif_pane

0xaf76,	// (0x00066643) video_down_subqcif_pane_cp_ParamLimits

0xaf76,	// (0x00066643) video_down_subqcif_pane_cp

0xaf9c,	// (0x00066669) im_reading_pane_ParamLimits

0xaf9c,	// (0x00066669) im_reading_pane

0x2454,	// (0x0005db21) im_writing_pane_ParamLimits

0x2454,	// (0x0005db21) im_writing_pane

0x2472,	// (0x0005db3f) im_reading_pane_t1

0xafb6,	// (0x00066683) list_im_pane

0xafc7,	// (0x00066694) scroll_pane_cp07

0x24cd,	// (0x0005db9a) im_writing_pane_t1_ParamLimits

0x24cd,	// (0x0005db9a) im_writing_pane_t1

0xafe0,	// (0x000666ad) im_writing_pane_t2_ParamLimits

0xafe0,	// (0x000666ad) im_writing_pane_t2

0x0001,

0xf27e,	// (0x0006a94b) im_writing_pane_t_ParamLimits

0xf27e,	// (0x0006a94b) im_writing_pane_t

0xa9a5,	// (0x00066072) input_focus_pane_cp04

0xa9a5,	// (0x00066072) input_focus_pane_cp05

0x24df,	// (0x0005dbac) list_im_single_pane_ParamLimits

0x24df,	// (0x0005dbac) list_im_single_pane

0x2507,	// (0x0005dbd4) list_single_im_pane_t1

0x443c,	// (0x0005fb09) blid_accuracy_pane

0x4444,	// (0x0005fb11) blid_compass_pane

0x444e,	// (0x0005fb1b) main_location_t1

0x445c,	// (0x0005fb29) main_location_t2

0x446a,	// (0x0005fb37) main_location_t3

0x0002,

0xf4ef,	// (0x0006abbc) main_location_t

0xa9a5,	// (0x00066072) aid_levels_location

0xad39,	// (0x00066406) blid_accuracy_pane_g1

0xad39,	// (0x00066406) blid_accuracy_pane_g2

0x0001,

0xf2e0,	// (0x0006a9ad) blid_accuracy_pane_g

0xb028,	// (0x000666f5) wml_content_pane

0xb066,	// (0x00066733) wml_button_pane_ParamLimits

0xb066,	// (0x00066733) wml_button_pane

0x2516,	// (0x0005dbe3) wml_list_single_large_pane_ParamLimits

0x2516,	// (0x0005dbe3) wml_list_single_large_pane

0x2547,	// (0x0005dc14) wml_list_single_medium_pane_ParamLimits

0x2547,	// (0x0005dc14) wml_list_single_medium_pane

0x257f,	// (0x0005dc4c) wml_list_single_small_pane_ParamLimits

0x257f,	// (0x0005dc4c) wml_list_single_small_pane

0xb07a,	// (0x00066747) wml_selection_box_pane_ParamLimits

0xb07a,	// (0x00066747) wml_selection_box_pane

0xb08d,	// (0x0006675a) wml_list_single_pane_t1

0xb09c,	// (0x00066769) wml_list_single_medium_pane_t1

0xb0ab,	// (0x00066778) wml_list_single_large_pane_t1

0xb0ba,	// (0x00066787) input_focus_pane_cp02_ParamLimits

0xb0ba,	// (0x00066787) input_focus_pane_cp02

0xb0cd,	// (0x0006679a) wml_selection_box_pane_g1

0xb0d6,	// (0x000667a3) wml_selection_box_pane_t1_ParamLimits

0xb0d6,	// (0x000667a3) wml_selection_box_pane_t1

0xac00,	// (0x000662cd) bg_wml_button_pane_ParamLimits

0xac00,	// (0x000662cd) bg_wml_button_pane

0xb0ee,	// (0x000667bb) wml_button_pane_g1

0xb0f6,	// (0x000667c3) wml_button_pane_t1

0xb0ee,	// (0x000667bb) wml_button_bg_pane_g1

0xb106,	// (0x000667d3) wml_button_bg_pane_g2

0xb10e,	// (0x000667db) wml_button_bg_pane_g3

0xb116,	// (0x000667e3) wml_button_bg_pane_g4

0xb11e,	// (0x000667eb) wml_button_bg_pane_g5

0xb126,	// (0x000667f3) wml_button_bg_pane_g6

0xb12e,	// (0x000667fb) wml_button_bg_pane_g7

0xb136,	// (0x00066803) wml_button_bg_pane_g8

0xb13e,	// (0x0006680b) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x0006a950) wml_button_bg_pane_g

0x25c0,	// (0x0005dc8d) bg_list_pane_cp02

0xb146,	// (0x00066813) mce_header_pane_ParamLimits

0xb146,	// (0x00066813) mce_header_pane

0xb15c,	// (0x00066829) mce_icon_pane

0xb15c,	// (0x00066829) mce_image_pane

0xb165,	// (0x00066832) mce_text_pane_ParamLimits

0xb165,	// (0x00066832) mce_text_pane

0x25ca,	// (0x0005dc97) scroll_pane_cp03

0xb05e,	// (0x0006672b) scroll_pane_cp04

0xb178,	// (0x00066845) scroll_pane_cp05_ParamLimits

0xb178,	// (0x00066845) scroll_pane_cp05

0x25d4,	// (0x0005dca1) mce_header_field_pane_ParamLimits

0x25d4,	// (0x0005dca1) mce_header_field_pane

0x25f4,	// (0x0005dcc1) mce_header_field_pane_2_ParamLimits

0x25f4,	// (0x0005dcc1) mce_header_field_pane_2

0x260a,	// (0x0005dcd7) mce_header_field_pane_3

0x2612,	// (0x0005dcdf) list_single_mce_message_pane_ParamLimits

0x2612,	// (0x0005dcdf) list_single_mce_message_pane

0x2644,	// (0x0005dd11) list_single_mce_smart_pane_ParamLimits

0x2644,	// (0x0005dd11) list_single_mce_smart_pane

0xb184,	// (0x00066851) input_focus_pane_cp03

0xb18d,	// (0x0006685a) list_header_data_pane

0x2681,	// (0x0005dd4e) mce_header_field_pane_t1

0x2691,	// (0x0005dd5e) list_single_mce_header_pane_ParamLimits

0x2691,	// (0x0005dd5e) list_single_mce_header_pane

0xb195,	// (0x00066862) list_single_mce_header_pane_t1

0xb1a4,	// (0x00066871) list_single_mce_message_pane_g1

0xb1ac,	// (0x00066879) list_single_mce_message_pane_t1

0x26e8,	// (0x0005ddb5) bg_cale_heading_pane_cp01_ParamLimits

0x26e8,	// (0x0005ddb5) bg_cale_heading_pane_cp01

0xb1ba,	// (0x00066887) bg_cale_pane_cp02_ParamLimits

0xb1ba,	// (0x00066887) bg_cale_pane_cp02

0x272b,	// (0x0005ddf8) cale_month_corner_pane

0x2745,	// (0x0005de12) cale_month_day_heading_pane_ParamLimits

0x2745,	// (0x0005de12) cale_month_day_heading_pane

0x27a0,	// (0x0005de6d) cale_month_pane_g1_ParamLimits

0x27a0,	// (0x0005de6d) cale_month_pane_g1

0x27d8,	// (0x0005dea5) cale_month_pane_g2_ParamLimits

0x27d8,	// (0x0005dea5) cale_month_pane_g2

0x2803,	// (0x0005ded0) cale_month_pane_g3_ParamLimits

0x2803,	// (0x0005ded0) cale_month_pane_g3

0x2853,	// (0x0005df20) cale_month_pane_g4_ParamLimits

0x2853,	// (0x0005df20) cale_month_pane_g4

0x28a3,	// (0x0005df70) cale_month_pane_g5_ParamLimits

0x28a3,	// (0x0005df70) cale_month_pane_g5

0x28f3,	// (0x0005dfc0) cale_month_pane_g6_ParamLimits

0x28f3,	// (0x0005dfc0) cale_month_pane_g6

0x2943,	// (0x0005e010) cale_month_pane_g7_ParamLimits

0x2943,	// (0x0005e010) cale_month_pane_g7

0x29ab,	// (0x0005e078) cale_month_pane_g8_ParamLimits

0x29ab,	// (0x0005e078) cale_month_pane_g8

0x2a13,	// (0x0005e0e0) cale_month_pane_g9_ParamLimits

0x2a13,	// (0x0005e0e0) cale_month_pane_g9

0x2a71,	// (0x0005e13e) cale_month_pane_g10_ParamLimits

0x2a71,	// (0x0005e13e) cale_month_pane_g10

0x2acf,	// (0x0005e19c) cale_month_pane_g11_ParamLimits

0x2acf,	// (0x0005e19c) cale_month_pane_g11

0x2b23,	// (0x0005e1f0) cale_month_pane_g12_ParamLimits

0x2b23,	// (0x0005e1f0) cale_month_pane_g12

0x2b79,	// (0x0005e246) cale_month_pane_g13_ParamLimits

0x2b79,	// (0x0005e246) cale_month_pane_g13

0x000c,

0xf296,	// (0x0006a963) cale_month_pane_g_ParamLimits

0xf296,	// (0x0006a963) cale_month_pane_g

0x2bcf,	// (0x0005e29c) cale_month_week_pane

0x2be4,	// (0x0005e2b1) grid_cale_month_pane_ParamLimits

0x2be4,	// (0x0005e2b1) grid_cale_month_pane

0x2c36,	// (0x0005e303) cale_month_day_heading_pane_t1

0x2cbc,	// (0x0005e389) cale_month_day_heading_pane_t2

0x2d4d,	// (0x0005e41a) cale_month_day_heading_pane_t3

0x2dde,	// (0x0005e4ab) cale_month_day_heading_pane_t4

0x2e6f,	// (0x0005e53c) cale_month_day_heading_pane_t5

0x2f00,	// (0x0005e5cd) cale_month_day_heading_pane_t6

0x2f9d,	// (0x0005e66a) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x0006a97e) cale_month_day_heading_pane_t

0xae61,	// (0x0006652e) bg_cale_side_pane_cp01

0x3046,	// (0x0005e713) cale_month_week_pane_t1

0x305f,	// (0x0005e72c) cale_month_week_pane_t2

0x3078,	// (0x0005e745) cale_month_week_pane_t3

0x3091,	// (0x0005e75e) cale_month_week_pane_t4

0x30ae,	// (0x0005e77b) cale_month_week_pane_t5

0x30cf,	// (0x0005e79c) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x0006a98d) cale_month_week_pane_t

0x30f0,	// (0x0005e7bd) cell_cale_month_pane_ParamLimits

0x30f0,	// (0x0005e7bd) cell_cale_month_pane

0x3240,	// (0x0005e90d) cell_cale_month_pane_g1

0x324c,	// (0x0005e919) cell_cale_month_pane_t1_ParamLimits

0x324c,	// (0x0005e919) cell_cale_month_pane_t1

0xae6f,	// (0x0006653c) grid_highlight_pane_cp08

0xad39,	// (0x00066406) main_smil_g1

0x326c,	// (0x0005e939) smil_status_pane

0xb1f9,	// (0x000668c6) smil_text_pane

0xca09,	// (0x000680d6) bg_popup_call3_rect_pane_g8

0xca11,	// (0x000680de) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ca,	// (0x0006ab97) bg_popup_call3_rect_pane_g

0xcc6b,	// (0x00068338) smil_status_volume_pane_g1

0xb203,	// (0x000668d0) smil_status_pane_t1

0x486c,	// (0x0005ff39) volume_smil_pane

0xb21a,	// (0x000668e7) list_smil_text_pane

0x327f,	// (0x0005e94c) scroll_pane_cp011

0x328a,	// (0x0005e957) smil_text_list_pane_t1_ParamLimits

0x328a,	// (0x0005e957) smil_text_list_pane_t1

0x331e,	// (0x0005e9eb) aid_volume_smil_ParamLimits

0x331e,	// (0x0005e9eb) aid_volume_smil

0xad39,	// (0x00066406) smil_volume_pane_g1

0xad39,	// (0x00066406) smil_volume_pane_g2

0x0001,

0xf2e0,	// (0x0006a9ad) smil_volume_pane_g

0x179b,	// (0x0005ce68) listscroll_cale_day_pane

0xb224,	// (0x000668f1) bg_cale_pane

0xb23c,	// (0x00066909) list_cale_pane

0xb25f,	// (0x0006692c) scroll_pane_cp09

0xb270,	// (0x0006693d) cale_bg_pane_g1

0xb278,	// (0x00066945) cale_bg_pane_g2

0xb280,	// (0x0006694d) cale_bg_pane_g3

0xb288,	// (0x00066955) cale_bg_pane_g4

0xb290,	// (0x0006695d) cale_bg_pane_g5

0xb298,	// (0x00066965) cale_bg_pane_g6

0xb2a0,	// (0x0006696d) cale_bg_pane_g7

0xb2a8,	// (0x00066975) cale_bg_pane_g8

0xb2b0,	// (0x0006697d) cale_bg_pane_g9

0x0008,

0xf2e5,	// (0x0006a9b2) cale_bg_pane_g

0x3340,	// (0x0005ea0d) list_cale_time_pane_ParamLimits

0x3340,	// (0x0005ea0d) list_cale_time_pane

0x3360,	// (0x0005ea2d) list_cale_time_pane_g1_ParamLimits

0x3360,	// (0x0005ea2d) list_cale_time_pane_g1

0xb2b8,	// (0x00066985) list_cale_time_pane_g2_ParamLimits

0xb2b8,	// (0x00066985) list_cale_time_pane_g2

0x336c,	// (0x0005ea39) list_cale_time_pane_g3_ParamLimits

0x336c,	// (0x0005ea39) list_cale_time_pane_g3

0x337a,	// (0x0005ea47) list_cale_time_pane_g4_ParamLimits

0x337a,	// (0x0005ea47) list_cale_time_pane_g4

0x3388,	// (0x0005ea55) list_cale_time_pane_g5_ParamLimits

0x3388,	// (0x0005ea55) list_cale_time_pane_g5

0x0005,

0xf2f8,	// (0x0006a9c5) list_cale_time_pane_g_ParamLimits

0xf2f8,	// (0x0006a9c5) list_cale_time_pane_g

0x3396,	// (0x0005ea63) list_cale_time_pane_t1_ParamLimits

0x3396,	// (0x0005ea63) list_cale_time_pane_t1

0x33be,	// (0x0005ea8b) list_cale_time_pane_t2_ParamLimits

0x33be,	// (0x0005ea8b) list_cale_time_pane_t2

0x378a,	// (0x0005ee57) aid_blid_cardinal_pane

0x37cc,	// (0x0005ee99) compass_pane_t4

0x33e6,	// (0x0005eab3) list_cale_time_pane_t4_ParamLimits

0x33e6,	// (0x0005eab3) list_cale_time_pane_t4

0x37da,	// (0x0005eea7) compass_pane_t5

0x37ea,	// (0x0005eeb7) compass_pane_t6

0x37f8,	// (0x0005eec5) compass_pane_t7

0xb712,	// (0x00066ddf) navi_pane_cc_t1

0xb875,	// (0x00066f42) aid_phob_thumbnail_center_pane

0x3f35,	// (0x0005f602) main_postcard_pane_g4_ParamLimits

0x0002,

0xf305,	// (0x0006a9d2) list_cale_time_pane_t_ParamLimits

0xf305,	// (0x0006a9d2) list_cale_time_pane_t

0x9bb1,	// (0x0006527e) bg_popup_window_pane_cp02_ParamLimits

0x9bb1,	// (0x0006527e) bg_popup_window_pane_cp02

0xb2d2,	// (0x0006699f) heading_pane_cp01_ParamLimits

0xb2d2,	// (0x0006699f) heading_pane_cp01

0xb2de,	// (0x000669ab) loc_req_pane_ParamLimits

0xb2de,	// (0x000669ab) loc_req_pane

0xb2ee,	// (0x000669bb) loc_type_pane_ParamLimits

0xb2ee,	// (0x000669bb) loc_type_pane

0xb300,	// (0x000669cd) loc_type_pane_t1_ParamLimits

0xb300,	// (0x000669cd) loc_type_pane_t1

0xb312,	// (0x000669df) loc_type_pane_t2_ParamLimits

0xb312,	// (0x000669df) loc_type_pane_t2

0xb324,	// (0x000669f1) loc_type_pane_t3_ParamLimits

0xb324,	// (0x000669f1) loc_type_pane_t3

0x0002,

0xf30c,	// (0x0006a9d9) loc_type_pane_t_ParamLimits

0xf30c,	// (0x0006a9d9) loc_type_pane_t

0xb336,	// (0x00066a03) list_loc_req_pane

0xb340,	// (0x00066a0d) scroll_pane_cp012

0x340e,	// (0x0005eadb) list_single_loc_request_popup_menu_pane_ParamLimits

0x340e,	// (0x0005eadb) list_single_loc_request_popup_menu_pane

0xb34b,	// (0x00066a18) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb34b,	// (0x00066a18) list_single_loc_request_popup_menu_pane_g1

0xb357,	// (0x00066a24) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb357,	// (0x00066a24) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf313,	// (0x0006a9e0) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf313,	// (0x0006a9e0) list_single_loc_request_popup_menu_pane_g

0xb363,	// (0x00066a30) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb363,	// (0x00066a30) list_single_loc_request_popup_menu_pane_t1

0x3427,	// (0x0005eaf4) bg_popup_window_pane_cp03_ParamLimits

0x3427,	// (0x0005eaf4) bg_popup_window_pane_cp03

0x3435,	// (0x0005eb02) heading_loc_req_pane_ParamLimits

0x3435,	// (0x0005eb02) heading_loc_req_pane

0x3441,	// (0x0005eb0e) popup_dyc_status_message_window_g1_ParamLimits

0x3441,	// (0x0005eb0e) popup_dyc_status_message_window_g1

0x344d,	// (0x0005eb1a) popup_dyc_status_message_window_t1_ParamLimits

0x344d,	// (0x0005eb1a) popup_dyc_status_message_window_t1

0x345f,	// (0x0005eb2c) popup_dyc_status_message_window_t2_ParamLimits

0x345f,	// (0x0005eb2c) popup_dyc_status_message_window_t2

0x3471,	// (0x0005eb3e) popup_dyc_status_message_window_t3_ParamLimits

0x3471,	// (0x0005eb3e) popup_dyc_status_message_window_t3

0x0002,

0xf318,	// (0x0006a9e5) popup_dyc_status_message_window_t_ParamLimits

0xf318,	// (0x0006a9e5) popup_dyc_status_message_window_t

0xa9a5,	// (0x00066072) bg_heading_pane_cp01

0xb379,	// (0x00066a46) heading_loc_req_pane_g1

0xb381,	// (0x00066a4e) heading_loc_req_pane_g2

0xb389,	// (0x00066a56) heading_loc_req_pane_g3

0x0002,

0xf31f,	// (0x0006a9ec) heading_loc_req_pane_g

0xb391,	// (0x00066a5e) heading_loc_req_pane_t1

0xb3a0,	// (0x00066a6d) bg_popup_sub_pane_cp01_ParamLimits

0xb3a0,	// (0x00066a6d) bg_popup_sub_pane_cp01

0xb3cf,	// (0x00066a9c) popup_cale_events_window_g1_ParamLimits

0xb3cf,	// (0x00066a9c) popup_cale_events_window_g1

0xb3ef,	// (0x00066abc) popup_cale_events_window_g2_ParamLimits

0xb3ef,	// (0x00066abc) popup_cale_events_window_g2

0x0001,

0x0259,	// (0x0005b926) popup_cale_events_window_g_ParamLimits

0x0259,	// (0x0005b926) popup_cale_events_window_g

0xb40f,	// (0x00066adc) popup_cale_events_window_t1_ParamLimits

0xb40f,	// (0x00066adc) popup_cale_events_window_t1

0xb421,	// (0x00066aee) popup_cale_events_window_t2_ParamLimits

0xb421,	// (0x00066aee) popup_cale_events_window_t2

0xb45f,	// (0x00066b2c) popup_cale_events_window_t3_ParamLimits

0xb45f,	// (0x00066b2c) popup_cale_events_window_t3

0xb499,	// (0x00066b66) popup_cale_events_window_t4_ParamLimits

0xb499,	// (0x00066b66) popup_cale_events_window_t4

0x0003,

0x025e,	// (0x0005b92b) popup_cale_events_window_t_ParamLimits

0x025e,	// (0x0005b92b) popup_cale_events_window_t

0x356a,	// (0x0005ec37) call_type_pane

0xb85e,	// (0x00066f2b) popup_call_status_window_g1

0x3576,	// (0x0005ec43) popup_call_status_window_g2

0x3582,	// (0x0005ec4f) popup_call_status_window_g3

0x0002,

0xf353,	// (0x0006aa20) popup_call_status_window_g

0xb4cf,	// (0x00066b9c) call_type_pane_g1

0xb4d8,	// (0x00066ba5) call_type_pane_g2

0x0001,

0x026e,	// (0x0005b93b) call_type_pane_g

0xa9a5,	// (0x00066072) bg_popup_sub_pane_cp02

0xb4e1,	// (0x00066bae) listscroll_popup_wml_pane

0xb4e9,	// (0x00066bb6) list_wml_pane

0xb4f3,	// (0x00066bc0) scroll_pane_cp013

0xb4fe,	// (0x00066bcb) list_single_graphic_popup_wml_pane_ParamLimits

0xb4fe,	// (0x00066bcb) list_single_graphic_popup_wml_pane

0xad39,	// (0x00066406) list_single_graphic_popup_wml_pane_g1

0xb512,	// (0x00066bdf) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35a,	// (0x0006aa27) list_single_graphic_popup_wml_pane_g

0xb51a,	// (0x00066be7) list_single_graphic_popup_wml_pane_t1

0xb530,	// (0x00066bfd) aid_call_pane

0xabf8,	// (0x000662c5) popup_clock_analogue_window_g1

0xabf8,	// (0x000662c5) popup_clock_analogue_window_g2

0x358e,	// (0x0005ec5b) popup_clock_analogue_window_g3

0x358e,	// (0x0005ec5b) popup_clock_analogue_window_g4

0xad39,	// (0x00066406) popup_clock_analogue_window_g5

0x0004,

0xf35f,	// (0x0006aa2c) popup_clock_analogue_window_g

0x3596,	// (0x0005ec63) popup_clock_analogue_window_t1

0x35a4,	// (0x0005ec71) clock_digital_number_pane_ParamLimits

0x35a4,	// (0x0005ec71) clock_digital_number_pane

0x35b0,	// (0x0005ec7d) clock_digital_number_pane_cp02_ParamLimits

0x35b0,	// (0x0005ec7d) clock_digital_number_pane_cp02

0x35bc,	// (0x0005ec89) clock_digital_number_pane_cp03_ParamLimits

0x35bc,	// (0x0005ec89) clock_digital_number_pane_cp03

0x35c8,	// (0x0005ec95) clock_digital_number_pane_cp04_ParamLimits

0x35c8,	// (0x0005ec95) clock_digital_number_pane_cp04

0x35d8,	// (0x0005eca5) clock_digital_separator_pane_ParamLimits

0x35d8,	// (0x0005eca5) clock_digital_separator_pane

0x35e4,	// (0x0005ecb1) popup_clock_digital_window_t1

0xad39,	// (0x00066406) clock_digital_number_pane_g1

0xad39,	// (0x00066406) clock_digital_number_pane_g2

0x0001,

0xf2e0,	// (0x0006a9ad) clock_digital_number_pane_g

0xad39,	// (0x00066406) clock_digital_separator_pane_g1

0xad39,	// (0x00066406) clock_digital_separator_pane_g2

0x0001,

0xf2e0,	// (0x0006a9ad) clock_digital_separator_pane_g

0xa9a5,	// (0x00066072) bg_popup_window_pane_cp04

0xb538,	// (0x00066c05) heading_pane_cp03

0xb540,	// (0x00066c0d) listscroll_popup_gms_pane

0xb548,	// (0x00066c15) grid_large_graphic_popup_pane

0xb552,	// (0x00066c1f) listscroll_popup_gms_pane_g1

0xb55a,	// (0x00066c27) listscroll_popup_gms_pane_g2

0x0001,

0x0283,	// (0x0005b950) listscroll_popup_gms_pane_g

0xb05e,	// (0x0006672b) scroll_pane_cp014

0xb562,	// (0x00066c2f) cell_large_graphic_popup_pane_ParamLimits

0xb562,	// (0x00066c2f) cell_large_graphic_popup_pane

0xb57a,	// (0x00066c47) cell_large_graphic_popup_pane_g1_ParamLimits

0xb57a,	// (0x00066c47) cell_large_graphic_popup_pane_g1

0xb586,	// (0x00066c53) cell_large_graphic_popup_pane_g2_ParamLimits

0xb586,	// (0x00066c53) cell_large_graphic_popup_pane_g2

0xb592,	// (0x00066c5f) cell_large_graphic_popup_pane_g3_ParamLimits

0xb592,	// (0x00066c5f) cell_large_graphic_popup_pane_g3

0xb59f,	// (0x00066c6c) cell_large_graphic_popup_pane_g4_ParamLimits

0xb59f,	// (0x00066c6c) cell_large_graphic_popup_pane_g4

0x0003,

0x0288,	// (0x0005b955) cell_large_graphic_popup_pane_g_ParamLimits

0x0288,	// (0x0005b955) cell_large_graphic_popup_pane_g

0xb5af,	// (0x00066c7c) grid_highlight_pane_cp010

0xad39,	// (0x00066406) bg_popup_call_pane_g1

0xb5b9,	// (0x00066c86) list_single_graphic_popup_conf_pane_ParamLimits

0xb5b9,	// (0x00066c86) list_single_graphic_popup_conf_pane

0xb5cc,	// (0x00066c99) list_highlight_pane_cp01

0xb5d5,	// (0x00066ca2) list_single_graphic_popup_conf_pane_g1

0xb5dd,	// (0x00066caa) list_single_graphic_popup_conf_pane_g2

0x0001,

0x0291,	// (0x0005b95e) list_single_graphic_popup_conf_pane_g

0xb5e5,	// (0x00066cb2) list_single_graphic_popup_conf_pane_t1

0xb5f3,	// (0x00066cc0) linegrid_cams_pane_g1

0x3601,	// (0x0005ecce) linegrid_cams_pane_g2

0xadf1,	// (0x000664be) linegrid_cams_pane_g3

0xb5fc,	// (0x00066cc9) linegrid_cams_pane_g4

0x360a,	// (0x0005ecd7) linegrid_cams_pane_g5

0x3613,	// (0x0005ece0) linegrid_cams_pane_g6

0xaea2,	// (0x0006656f) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x0006aa37) linegrid_cams_pane_g

0xb605,	// (0x00066cd2) popup_clock_analogue_window

0xb605,	// (0x00066cd2) popup_clock_digital_window

0xa9a5,	// (0x00066072) popup_phob_thumbnail_window

0xad39,	// (0x00066406) call_video_uplink_pane_g1

0xb60e,	// (0x00066cdb) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x0006aa46) call_video_uplink_pane_g

0xae6f,	// (0x0006653c) video_uplink_pane

0xb616,	// (0x00066ce3) mce_image_pane_g1

0x361c,	// (0x0005ece9) mce_image_pane_g2

0x3624,	// (0x0005ecf1) mce_image_pane_g3

0x362c,	// (0x0005ecf9) mce_image_pane_g4

0x3634,	// (0x0005ed01) mce_image_pane_g5

0x0004,

0xf37e,	// (0x0006aa4b) mce_image_pane_g

0xb620,	// (0x00066ced) control_top_pane_stacon_cp01_ParamLimits

0xb620,	// (0x00066ced) control_top_pane_stacon_cp01

0xb634,	// (0x00066d01) uni_indicator_pane_stacon_cp01_ParamLimits

0xb634,	// (0x00066d01) uni_indicator_pane_stacon_cp01

0xb645,	// (0x00066d12) bg_popup_sub_pane_cp03

0x363c,	// (0x0005ed09) chi_dic_find_pane

0x3644,	// (0x0005ed11) listscroll_chi_dic_pane

0x364d,	// (0x0005ed1a) main_pane_chidic_g1

0xb64f,	// (0x00066d1c) chi_dic_find_pane_t1

0xb65d,	// (0x00066d2a) find_chidic_pane

0xb666,	// (0x00066d33) chi_dic_list_pane_ParamLimits

0xb666,	// (0x00066d33) chi_dic_list_pane

0xb677,	// (0x00066d44) scroll_pane_cp020

0xb67f,	// (0x00066d4c) find_chidic_pane_t1

0xa9a5,	// (0x00066072) input_focus_pane_cp06

0x3660,	// (0x0005ed2d) list_chi_dic_pane_ParamLimits

0x3660,	// (0x0005ed2d) list_chi_dic_pane

0x367d,	// (0x0005ed4a) list_chi_dic_pane_t1_ParamLimits

0x367d,	// (0x0005ed4a) list_chi_dic_pane_t1

0xa9a5,	// (0x00066072) list_highlight_pane_cp020

0xb68e,	// (0x00066d5b) bg_cale_heading_pane_g1

0x3690,	// (0x0005ed5d) bg_cale_heading_pane_g2

0x3698,	// (0x0005ed65) bg_cale_heading_pane_g3

0x36a0,	// (0x0005ed6d) bg_cale_heading_pane_g4

0x36aa,	// (0x0005ed77) bg_cale_heading_pane_g5

0x36b4,	// (0x0005ed81) bg_cale_heading_pane_g6

0x36bc,	// (0x0005ed89) bg_cale_heading_pane_g7

0x36c4,	// (0x0005ed91) bg_cale_heading_pane_g8

0x36ce,	// (0x0005ed9b) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x0006aa56) bg_cale_heading_pane_g

0xb68e,	// (0x00066d5b) bg_cale_side_pane_g1

0x36d8,	// (0x0005eda5) bg_cale_side_pane_g2

0x36e2,	// (0x0005edaf) bg_cale_side_pane_g3

0x36ec,	// (0x0005edb9) bg_cale_side_pane_g4

0x36f6,	// (0x0005edc3) bg_cale_side_pane_g5

0x3700,	// (0x0005edcd) bg_cale_side_pane_g6

0x370a,	// (0x0005edd7) bg_cale_side_pane_g7

0x3714,	// (0x0005ede1) bg_cale_side_pane_g8

0x371c,	// (0x0005ede9) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x0006aa69) bg_cale_side_pane_g

0x3724,	// (0x0005edf1) popup_call_status_window_ParamLimits

0x3724,	// (0x0005edf1) popup_call_status_window

0xb696,	// (0x00066d63) stacon_top_pane

0xb69e,	// (0x00066d6b) status_pane_ParamLimits

0xb69e,	// (0x00066d6b) status_pane

0xb6b3,	// (0x00066d80) status_small_pane

0xb6bb,	// (0x00066d88) control_pane

0xa9a5,	// (0x00066072) stacon_bottom_pane

0xb6c3,	// (0x00066d90) list_single_mce_smart_pane_t1_ParamLimits

0xb6c3,	// (0x00066d90) list_single_mce_smart_pane_t1

0xb6d6,	// (0x00066da3) list_single_mce_smart_pane_t2_ParamLimits

0xb6d6,	// (0x00066da3) list_single_mce_smart_pane_t2

0x0001,

0x02db,	// (0x0005b9a8) list_single_mce_smart_pane_t_ParamLimits

0x02db,	// (0x0005b9a8) list_single_mce_smart_pane_t

0x3730,	// (0x0005edfd) compass_pane

0x373c,	// (0x0005ee09) main_location2_pane_t1

0x3750,	// (0x0005ee1d) main_location2_pane_t2

0x3764,	// (0x0005ee31) main_location2_pane_t3

0x0003,

0xf3af,	// (0x0006aa7c) main_location2_pane_t

0xb6f5,	// (0x00066dc2) compass_pane_g1_ParamLimits

0xb6f5,	// (0x00066dc2) compass_pane_g1

0x37ae,	// (0x0005ee7b) compass_pane_t1

0x37bd,	// (0x0005ee8a) compass_pane_t2

0x0005,

0xf3b8,	// (0x0006aa85) compass_pane_t

0x3808,	// (0x0005eed5) text_secondary_cp61

0xb709,	// (0x00066dd6) navi_pane_cams_g5

0xb72c,	// (0x00066df9) navi_pane_im_t1

0xb73a,	// (0x00066e07) navi_pane_mp_g1_ParamLimits

0xb73a,	// (0x00066e07) navi_pane_mp_g1

0xb74e,	// (0x00066e1b) navi_pane_mp_g2_ParamLimits

0xb74e,	// (0x00066e1b) navi_pane_mp_g2

0xb75a,	// (0x00066e27) navi_pane_mp_g3_ParamLimits

0xb75a,	// (0x00066e27) navi_pane_mp_g3

0x0002,

0x02fd,	// (0x0005b9ca) navi_pane_mp_g_ParamLimits

0x02fd,	// (0x0005b9ca) navi_pane_mp_g

0xb766,	// (0x00066e33) navi_pane_mp_t1

0xb774,	// (0x00066e41) navi_pane_mp_t2

0x0002,

0x0304,	// (0x0005b9d1) navi_pane_mp_t

0xb7b0,	// (0x00066e7d) navi_pane_vt_g1

0xb766,	// (0x00066e33) navi_pane_vt_t1

0xb7b8,	// (0x00066e85) navi_slider_pane

0xb7c0,	// (0x00066e8d) zooming_pane

0xb7c8,	// (0x00066e95) navi_slider_pane_g1

0x393d,	// (0x0005f00a) navi_slider_pane_g2

0x0006,

0xf3cc,	// (0x0006aa99) navi_slider_pane_g

0xb7ec,	// (0x00066eb9) aid_levels_zoom

0xb7f4,	// (0x00066ec1) zooming_pane_g1

0xb7fc,	// (0x00066ec9) zooming_pane_g2

0xb7fc,	// (0x00066ec9) zooming_pane_g3

0x0002,

0x031a,	// (0x0005b9e7) zooming_pane_g

0xb804,	// (0x00066ed1) level_10_zoom

0xb80d,	// (0x00066eda) level_11_zoom

0xb816,	// (0x00066ee3) level_1_zoom

0xb81f,	// (0x00066eec) level_2_zoom

0xb828,	// (0x00066ef5) level_3_zoom

0xb831,	// (0x00066efe) level_4_zoom

0xb83a,	// (0x00066f07) level_5_zoom

0xb843,	// (0x00066f10) level_6_zoom

0xb84c,	// (0x00066f19) level_7_zoom

0xb855,	// (0x00066f22) level_8_zoom

0xb86c,	// (0x00066f39) level_9_zoom

0xb87d,	// (0x00066f4a) popup_phob_thumbnail_window_g1

0xb885,	// (0x00066f52) popup_phob_thumbnail_window_g2

0x0001,

0xf3db,	// (0x0006aaa8) popup_phob_thumbnail_window_g

0xcb6b,	// (0x00068238) level_1_location

0xcb73,	// (0x00068240) level_2_location

0xcb7b,	// (0x00068248) level_3_location

0xcb83,	// (0x00068250) level_4_location

0xb7c0,	// (0x00066e8d) level_5_location

0x394f,	// (0x0005f01c) mce_icon_pane_g1

0x3957,	// (0x0005f024) mce_icon_pane_g2

0x0001,

0xf3e0,	// (0x0006aaad) mce_icon_pane_g

0x395f,	// (0x0005f02c) main_mup_pane_g1_ParamLimits

0x395f,	// (0x0005f02c) main_mup_pane_g1

0x3977,	// (0x0005f044) main_mup_pane_g2_ParamLimits

0x3977,	// (0x0005f044) main_mup_pane_g2

0x3993,	// (0x0005f060) main_mup_pane_g3_ParamLimits

0x3993,	// (0x0005f060) main_mup_pane_g3

0x39af,	// (0x0005f07c) main_mup_pane_g4_ParamLimits

0x39af,	// (0x0005f07c) main_mup_pane_g4

0x39cb,	// (0x0005f098) main_mup_pane_g5_ParamLimits

0x39cb,	// (0x0005f098) main_mup_pane_g5

0x39ec,	// (0x0005f0b9) main_mup_pane_g6_ParamLimits

0x39ec,	// (0x0005f0b9) main_mup_pane_g6

0x3a08,	// (0x0005f0d5) main_mup_pane_g7_ParamLimits

0x3a08,	// (0x0005f0d5) main_mup_pane_g7

0x3a24,	// (0x0005f0f1) main_mup_pane_g8_ParamLimits

0x3a24,	// (0x0005f0f1) main_mup_pane_g8

0x3a40,	// (0x0005f10d) main_mup_pane_g9_ParamLimits

0x3a40,	// (0x0005f10d) main_mup_pane_g9

0x3a5f,	// (0x0005f12c) main_mup_pane_g10_ParamLimits

0x3a5f,	// (0x0005f12c) main_mup_pane_g10

0x3a7e,	// (0x0005f14b) main_mup_pane_g11_ParamLimits

0x3a7e,	// (0x0005f14b) main_mup_pane_g11

0x3a96,	// (0x0005f163) main_mup_pane_g12_ParamLimits

0x3a96,	// (0x0005f163) main_mup_pane_g12

0x3aa4,	// (0x0005f171) main_mup_pane_g13_ParamLimits

0x3aa4,	// (0x0005f171) main_mup_pane_g13

0x000c,

0xf3e5,	// (0x0006aab2) main_mup_pane_g_ParamLimits

0xf3e5,	// (0x0006aab2) main_mup_pane_g

0x3aba,	// (0x0005f187) main_mup_pane_t1_ParamLimits

0x3aba,	// (0x0005f187) main_mup_pane_t1

0x3ad7,	// (0x0005f1a4) main_mup_pane_t2_ParamLimits

0x3ad7,	// (0x0005f1a4) main_mup_pane_t2

0x3af1,	// (0x0005f1be) main_mup_pane_t3_ParamLimits

0x3af1,	// (0x0005f1be) main_mup_pane_t3

0x3b0b,	// (0x0005f1d8) main_mup_pane_t4_ParamLimits

0x3b0b,	// (0x0005f1d8) main_mup_pane_t4

0x3b1d,	// (0x0005f1ea) main_mup_pane_t5_ParamLimits

0x3b1d,	// (0x0005f1ea) main_mup_pane_t5

0x3b2f,	// (0x0005f1fc) main_mup_pane_t6_ParamLimits

0x3b2f,	// (0x0005f1fc) main_mup_pane_t6

0x0005,

0xf400,	// (0x0006aacd) main_mup_pane_t_ParamLimits

0xf400,	// (0x0006aacd) main_mup_pane_t

0x3b45,	// (0x0005f212) mup_progress_pane_ParamLimits

0x3b45,	// (0x0005f212) mup_progress_pane

0x3b51,	// (0x0005f21e) mup_visualizer_pane_ParamLimits

0x3b51,	// (0x0005f21e) mup_visualizer_pane

0x3b8f,	// (0x0005f25c) mup_volume_pane_ParamLimits

0x3b8f,	// (0x0005f25c) mup_volume_pane

0xb85e,	// (0x00066f2b) mup_visualizer_pane_g1_ParamLimits

0xb85e,	// (0x00066f2b) mup_visualizer_pane_g1

0xb85e,	// (0x00066f2b) mup_visualizer_pane_g2_ParamLimits

0xb85e,	// (0x00066f2b) mup_visualizer_pane_g2

0xb6f5,	// (0x00066dc2) mup_visualizer_pane_g3_ParamLimits

0xb6f5,	// (0x00066dc2) mup_visualizer_pane_g3

0x0002,

0xf40d,	// (0x0006aada) mup_visualizer_pane_g_ParamLimits

0xf40d,	// (0x0006aada) mup_visualizer_pane_g

0xad39,	// (0x00066406) mup_volume_pane_g1

0xb895,	// (0x00066f62) mup_volume_pane_g2

0x0001,

0xf414,	// (0x0006aae1) mup_volume_pane_g

0xad39,	// (0x00066406) mup_progress_pane_g1

0xb89e,	// (0x00066f6b) mup_progress_pane_g2

0xb8a7,	// (0x00066f74) mup_progress_pane_g3

0x0002,

0xf419,	// (0x0006aae6) mup_progress_pane_g

0xa9a5,	// (0x00066072) bg_popup_window_pane_cp05

0xb8b0,	// (0x00066f7d) heading_pane_cp02_ParamLimits

0xb8b0,	// (0x00066f7d) heading_pane_cp02

0xb8ca,	// (0x00066f97) list_popup_blid_pane

0xb8d2,	// (0x00066f9f) list_blid_sat_info_pane_ParamLimits

0xb8d2,	// (0x00066f9f) list_blid_sat_info_pane

0xb8e5,	// (0x00066fb2) list_blid_sat_info_pane_g1

0xb8ed,	// (0x00066fba) list_blid_sat_info_pane_t1

0x3c9a,	// (0x0005f367) mup_equalizer_pane_ParamLimits

0x3c9a,	// (0x0005f367) mup_equalizer_pane

0x3cbb,	// (0x0005f388) mup_equalizer_pane_cp1_ParamLimits

0x3cbb,	// (0x0005f388) mup_equalizer_pane_cp1

0x3cdc,	// (0x0005f3a9) mup_equalizer_pane_cp2_ParamLimits

0x3cdc,	// (0x0005f3a9) mup_equalizer_pane_cp2

0x3cfd,	// (0x0005f3ca) mup_equalizer_pane_cp3_ParamLimits

0x3cfd,	// (0x0005f3ca) mup_equalizer_pane_cp3

0x3d1e,	// (0x0005f3eb) mup_equalizer_pane_cp4_ParamLimits

0x3d1e,	// (0x0005f3eb) mup_equalizer_pane_cp4

0x3d3f,	// (0x0005f40c) mup_equalizer_pane_cp5

0x3d55,	// (0x0005f422) mup_equalizer_pane_cp6

0x3d6d,	// (0x0005f43a) mup_equalizer_pane_cp7

0xca89,	// (0x00068156) bg_popup_call_poc_act_pane_g9

0xca91,	// (0x0006815e) bg_popup_call_poc_act_pane_g10

0xca99,	// (0x00068166) bg_popup_call_poc_act_pane_g11

0x000a,

0xac00,	// (0x000662cd) mup_scale_pane

0xad39,	// (0x00066406) mup_scale_pane_g1

0xb8fb,	// (0x00066fc8) mup_scale_pane_g2

0x0006,

0xf435,	// (0x0006ab02) mup_scale_pane_g

0xb91f,	// (0x00066fec) msg_data_pane

0xb927,	// (0x00066ff4) scroll_pane_cp017

0x9c05,	// (0x000652d2) bg_list_pane_cp04_ParamLimits

0x9c05,	// (0x000652d2) bg_list_pane_cp04

0xb92f,	// (0x00066ffc) msg_data_pane_g1

0x3d97,	// (0x0005f464) msg_data_pane_g2

0x3624,	// (0x0005ecf1) msg_data_pane_g3

0x3d9f,	// (0x0005f46c) msg_data_pane_g4

0x3da7,	// (0x0005f474) msg_data_pane_g5

0x3daf,	// (0x0005f47c) msg_data_pane_g6

0x3db7,	// (0x0005f484) msg_data_pane_g7

0x0006,

0xf444,	// (0x0006ab11) msg_data_pane_g

0x3dbf,	// (0x0005f48c) msg_text_pane_ParamLimits

0x3dbf,	// (0x0005f48c) msg_text_pane

0x3e0c,	// (0x0005f4d9) qrid_highlight_pane_cp011_ParamLimits

0x3e0c,	// (0x0005f4d9) qrid_highlight_pane_cp011

0xa9a5,	// (0x00066072) msg_body_pane

0xa9a5,	// (0x00066072) msg_header_pane

0xb937,	// (0x00067004) input_focus_pane_cp07

0x9c25,	// (0x000652f2) msg_header_pane_t1_ParamLimits

0x9c25,	// (0x000652f2) msg_header_pane_t1

0x9c37,	// (0x00065304) msg_header_pane_t2_ParamLimits

0x9c37,	// (0x00065304) msg_header_pane_t2

0x0001,

0xf458,	// (0x0006ab25) msg_header_pane_t_ParamLimits

0xf458,	// (0x0006ab25) msg_header_pane_t

0xb94c,	// (0x00067019) msg_body_pane_g1

0x9c49,	// (0x00065316) msg_body_pane_t1_ParamLimits

0x9c49,	// (0x00065316) msg_body_pane_t1

0x9c7a,	// (0x00065347) msg_body_pane_t2_ParamLimits

0x9c7a,	// (0x00065347) msg_body_pane_t2

0x9c8c,	// (0x00065359) msg_body_pane_t3_ParamLimits

0x9c8c,	// (0x00065359) msg_body_pane_t3

0x0002,

0xf45d,	// (0x0006ab2a) msg_body_pane_t_ParamLimits

0xf45d,	// (0x0006ab2a) msg_body_pane_t

0x3e91,	// (0x0005f55e) main_viewer_pane_g1_ParamLimits

0x3e91,	// (0x0005f55e) main_viewer_pane_g1

0x3e9d,	// (0x0005f56a) main_viewer_pane_g2_ParamLimits

0x3e9d,	// (0x0005f56a) main_viewer_pane_g2

0x3ea9,	// (0x0005f576) main_viewer_pane_g3_ParamLimits

0x3ea9,	// (0x0005f576) main_viewer_pane_g3

0x3eba,	// (0x0005f587) main_viewer_pane_g4_ParamLimits

0x3eba,	// (0x0005f587) main_viewer_pane_g4

0x3ecb,	// (0x0005f598) main_viewer_pane_g5_ParamLimits

0x3ecb,	// (0x0005f598) main_viewer_pane_g5

0x3ecb,	// (0x0005f598) main_viewer_pane_g7_ParamLimits

0x3ecb,	// (0x0005f598) main_viewer_pane_g7

0xb34b,	// (0x00066a18) main_viewer_pane_g8_ParamLimits

0xb34b,	// (0x00066a18) main_viewer_pane_g8

0x0007,

0xf46d,	// (0x0006ab3a) main_viewer_pane_g_ParamLimits

0xf46d,	// (0x0006ab3a) main_viewer_pane_g

0xb954,	// (0x00067021) viewer_content_pane_ParamLimits

0xb954,	// (0x00067021) viewer_content_pane

0x3f09,	// (0x0005f5d6) main_postcard_pane_g1_ParamLimits

0x3f09,	// (0x0005f5d6) main_postcard_pane_g1

0x3f17,	// (0x0005f5e4) main_postcard_pane_g2_ParamLimits

0x3f17,	// (0x0005f5e4) main_postcard_pane_g2

0x3f25,	// (0x0005f5f2) main_postcard_pane_g3_ParamLimits

0x3f25,	// (0x0005f5f2) main_postcard_pane_g3

0x0005,

0xf47e,	// (0x0006ab4b) main_postcard_pane_g_ParamLimits

0xf47e,	// (0x0006ab4b) main_postcard_pane_g

0x3f35,	// (0x0005f602) main_postcard_pane_g4

0xcc58,	// (0x00068325) smil_status_volume_pane_g2

0x3f61,	// (0x0005f62e) postcard_pane_ParamLimits

0x3f61,	// (0x0005f62e) postcard_pane

0xb85e,	// (0x00066f2b) postcard_pane_g1_ParamLimits

0xb85e,	// (0x00066f2b) postcard_pane_g1

0x3f93,	// (0x0005f660) postcard_pane_g2_ParamLimits

0x3f93,	// (0x0005f660) postcard_pane_g2

0x3f9f,	// (0x0005f66c) postcard_pane_g3_ParamLimits

0x3f9f,	// (0x0005f66c) postcard_pane_g3

0xb962,	// (0x0006702f) postcard_pane_g4_ParamLimits

0xb962,	// (0x0006702f) postcard_pane_g4

0x3fab,	// (0x0005f678) postcard_pane_g5_ParamLimits

0x3fab,	// (0x0005f678) postcard_pane_g5

0x3fb7,	// (0x0005f684) postcard_pane_g6_ParamLimits

0x3fb7,	// (0x0005f684) postcard_pane_g6

0xb970,	// (0x0006703d) postcard_pane_g7_ParamLimits

0xb970,	// (0x0006703d) postcard_pane_g7

0x0006,

0xf48b,	// (0x0006ab58) postcard_pane_g_ParamLimits

0xf48b,	// (0x0006ab58) postcard_pane_g

0x3fc3,	// (0x0005f690) main_mp2_pane_g1_ParamLimits

0x3fc3,	// (0x0005f690) main_mp2_pane_g1

0x3fcf,	// (0x0005f69c) main_mp2_pane_g2_ParamLimits

0x3fcf,	// (0x0005f69c) main_mp2_pane_g2

0x3fdb,	// (0x0005f6a8) main_mp2_pane_g3_ParamLimits

0x3fdb,	// (0x0005f6a8) main_mp2_pane_g3

0x0002,

0xf49a,	// (0x0006ab67) main_mp2_pane_g_ParamLimits

0xf49a,	// (0x0006ab67) main_mp2_pane_g

0x3fe7,	// (0x0005f6b4) main_mp2_pane_t1_ParamLimits

0x3fe7,	// (0x0005f6b4) main_mp2_pane_t1

0x3ffe,	// (0x0005f6cb) main_mp2_pane_t2_ParamLimits

0x3ffe,	// (0x0005f6cb) main_mp2_pane_t2

0x4010,	// (0x0005f6dd) main_mp2_pane_t3_ParamLimits

0x4010,	// (0x0005f6dd) main_mp2_pane_t3

0x0002,

0xf4a1,	// (0x0006ab6e) main_mp2_pane_t_ParamLimits

0xf4a1,	// (0x0006ab6e) main_mp2_pane_t

0xb97e,	// (0x0006704b) pec_content_pane_ParamLimits

0xb97e,	// (0x0006704b) pec_content_pane

0xb05e,	// (0x0006672b) scroll_pane_cp015

0xb990,	// (0x0006705d) pec_attribute_pane_ParamLimits

0xb990,	// (0x0006705d) pec_attribute_pane

0x4022,	// (0x0005f6ef) pec_content_pane_g1_ParamLimits

0x4022,	// (0x0005f6ef) pec_content_pane_g1

0xb9a0,	// (0x0006706d) pec_content_pane_t1_ParamLimits

0xb9a0,	// (0x0006706d) pec_content_pane_t1

0xb9b2,	// (0x0006707f) pec_content_pane_t2_ParamLimits

0xb9b2,	// (0x0006707f) pec_content_pane_t2

0x0001,

0x03ee,	// (0x0005babb) pec_content_pane_t_ParamLimits

0x03ee,	// (0x0005babb) pec_content_pane_t

0x402e,	// (0x0005f6fb) list_single_graphic_pane_cp01_ParamLimits

0x402e,	// (0x0005f6fb) list_single_graphic_pane_cp01

0xac00,	// (0x000662cd) bg_popup_sub_pane_cp04

0xb9c4,	// (0x00067091) popup_mup_playback_window_g1

0xb9d0,	// (0x0006709d) popup_mup_playback_window_t1

0xb9e5,	// (0x000670b2) popup_mup_playback_window_t2

0x0001,

0x03f3,	// (0x0005bac0) popup_mup_playback_window_t

0xba1c,	// (0x000670e9) main_image_pane_g1_ParamLimits

0xba1c,	// (0x000670e9) main_image_pane_g1

0xba5f,	// (0x0006712c) scroll_pane_cp018_ParamLimits

0xba5f,	// (0x0006712c) scroll_pane_cp018

0xba77,	// (0x00067144) scroll_pane_cp016_ParamLimits

0xba77,	// (0x00067144) scroll_pane_cp016

0x40ce,	// (0x0005f79b) smil2_image_pane_ParamLimits

0x40ce,	// (0x0005f79b) smil2_image_pane

0x4102,	// (0x0005f7cf) smil2_root_pane_ParamLimits

0x4102,	// (0x0005f7cf) smil2_root_pane

0x412e,	// (0x0005f7fb) smil2_text_pane_ParamLimits

0x412e,	// (0x0005f7fb) smil2_text_pane

0xa9a5,	// (0x00066072) bg_list_pane_cp06

0xbab3,	// (0x00067180) grid_radio_pane

0xa9a5,	// (0x00066072) bg_popup_window_pane_cp06

0xbabb,	// (0x00067188) main_fmradio_pane_t1

0xb538,	// (0x00066c05) heading_pane_cp04

0xbac9,	// (0x00067196) main_fmradio_pane_t2

0xcaa1,	// (0x0006816e) popup_cale_lunar_info_window_g1

0xbad7,	// (0x000671a4) main_fmradio_pane_t3

0xcaa9,	// (0x00068176) popup_cale_lunar_info_window_g2

0xbae5,	// (0x000671b2) main_fmradio_pane_t4

0x0001,

0xbaf3,	// (0x000671c0) main_fmradio_pane_t5

0x0004,

0x04ce,	// (0x0005bb9b) popup_cale_lunar_info_window_g

0x0408,	// (0x0005bad5) main_fmradio_pane_t

0xbb01,	// (0x000671ce) wait_bar_pane_cp03

0xbb09,	// (0x000671d6) cell_fmradio_pane_ParamLimits

0xbb09,	// (0x000671d6) cell_fmradio_pane

0xb970,	// (0x0006703d) cell_fmradio_pane_g1_ParamLimits

0xb970,	// (0x0006703d) cell_fmradio_pane_g1

0xa9a5,	// (0x00066072) grid_highlight_pane_cp011

0xbb1c,	// (0x000671e9) poc_content_pane_ParamLimits

0xbb1c,	// (0x000671e9) poc_content_pane

0xbb2e,	// (0x000671fb) scroll_pane_cp019

0x416e,	// (0x0005f83b) popup_call_poc_act_window_ParamLimits

0x416e,	// (0x0005f83b) popup_call_poc_act_window

0x417b,	// (0x0005f848) popup_call_poc_inact_window_ParamLimits

0x417b,	// (0x0005f848) popup_call_poc_inact_window

0x04a5,	// (0x0005bb72) bg_popup_call_poc_act_pane_g

0xca19,	// (0x000680e6) bg_popup_call_poc_inact_pane_g1

0xca21,	// (0x000680ee) bg_popup_call_poc_inact_pane_g2

0xbb36,	// (0x00067203) popup_call_poc_act_window_g2

0xca29,	// (0x000680f6) bg_popup_call_poc_inact_pane_g3

0xca31,	// (0x000680fe) bg_popup_call_poc_inact_pane_g4

0xca39,	// (0x00068106) bg_popup_call_poc_inact_pane_g5

0xbb3e,	// (0x0006720b) popup_call_poc_act_window_t1_ParamLimits

0xbb3e,	// (0x0006720b) popup_call_poc_act_window_t1

0xbb66,	// (0x00067233) popup_call_poc_act_window_t2_ParamLimits

0xbb66,	// (0x00067233) popup_call_poc_act_window_t2

0xbb8e,	// (0x0006725b) popup_call_poc_act_window_t3_ParamLimits

0xbb8e,	// (0x0006725b) popup_call_poc_act_window_t3

0xbbb6,	// (0x00067283) popup_call_poc_act_window_t4_ParamLimits

0xbbb6,	// (0x00067283) popup_call_poc_act_window_t4

0x0003,

0x0413,	// (0x0005bae0) popup_call_poc_act_window_t_ParamLimits

0x0413,	// (0x0005bae0) popup_call_poc_act_window_t

0xca41,	// (0x0006810e) bg_popup_call_poc_inact_pane_g6

0xca49,	// (0x00068116) bg_popup_call_poc_inact_pane_g7

0xca51,	// (0x0006811e) bg_popup_call_poc_inact_pane_g8

0xbbc8,	// (0x00067295) popup_call_poc_inact_window_g2

0xca59,	// (0x00068126) bg_popup_call_poc_inact_pane_g9

0x0008,

0x0492,	// (0x0005bb5f) bg_popup_call_poc_inact_pane_g

0xbbd0,	// (0x0006729d) popup_call_poc_inact_window_t1_ParamLimits

0xbbd0,	// (0x0006729d) popup_call_poc_inact_window_t1

0xbbe5,	// (0x000672b2) popup_call_poc_inact_window_t2_ParamLimits

0xbbe5,	// (0x000672b2) popup_call_poc_inact_window_t2

0xbbfa,	// (0x000672c7) popup_call_poc_inact_window_t3_ParamLimits

0xbbfa,	// (0x000672c7) popup_call_poc_inact_window_t3

0x0002,

0x041c,	// (0x0005bae9) popup_call_poc_inact_window_t_ParamLimits

0x041c,	// (0x0005bae9) popup_call_poc_inact_window_t

0xcbde,	// (0x000682ab) context_pane_ParamLimits

0x47b1,	// (0x0005fe7e) signal_pane_ParamLimits

0xb7c0,	// (0x00066e8d) main_call2_pane

0x472a,	// (0x0005fdf7) popup_phob_thumbnail2_window_ParamLimits

0x472a,	// (0x0005fdf7) popup_phob_thumbnail2_window

0x3e3f,	// (0x0005f50c) aid_hotspot_pointer_arrow_pane

0x3e47,	// (0x0005f514) aid_hotspot_pointer_hand_pane

0x44a1,	// (0x0005fb6e) phob_pre_status_pane_g5

0x1d79,	// (0x0005d446) cams_zoom_pane_ParamLimits

0x1d85,	// (0x0005d452) image_vga_pane_ParamLimits

0x1d94,	// (0x0005d461) main_camera_pane_g1_ParamLimits

0x1da2,	// (0x0005d46f) main_camera_pane_g2_ParamLimits

0x1dae,	// (0x0005d47b) main_camera_pane_g3_ParamLimits

0x1dba,	// (0x0005d487) main_camera_pane_g4_ParamLimits

0x1dc6,	// (0x0005d493) main_camera_pane_g5_ParamLimits

0x1dd2,	// (0x0005d49f) main_camera_pane_g6_ParamLimits

0x1dde,	// (0x0005d4ab) main_camera_pane_g7_ParamLimits

0xf215,	// (0x0006a8e2) main_camera_pane_g_ParamLimits

0x1dea,	// (0x0005d4b7) main_camera_pane_t1_ParamLimits

0x1dfc,	// (0x0005d4c9) main_camera_pane_t2_ParamLimits

0xf226,	// (0x0006a8f3) main_camera_pane_t_ParamLimits

0xac00,	// (0x000662cd) bg_popup_preview_window_pane_cp01_ParamLimits

0xac00,	// (0x000662cd) bg_popup_preview_window_pane_cp01

0xbc0f,	// (0x000672dc) popup_phob_thumbnail2_window_g1_ParamLimits

0xbc0f,	// (0x000672dc) popup_phob_thumbnail2_window_g1

0xa9a5,	// (0x00066072) call2_cli_visual_pane

0x4197,	// (0x0005f864) popup_call2_audio_conf_window_ParamLimits

0x4197,	// (0x0005f864) popup_call2_audio_conf_window

0x41ac,	// (0x0005f879) popup_call2_audio_first_window_ParamLimits

0x41ac,	// (0x0005f879) popup_call2_audio_first_window

0x424a,	// (0x0005f917) popup_call2_audio_in_window_ParamLimits

0x424a,	// (0x0005f917) popup_call2_audio_in_window

0x428c,	// (0x0005f959) popup_call2_audio_out_window_ParamLimits

0x428c,	// (0x0005f959) popup_call2_audio_out_window

0x42ee,	// (0x0005f9bb) popup_call2_audio_second_window_ParamLimits

0x42ee,	// (0x0005f9bb) popup_call2_audio_second_window

0x434c,	// (0x0005fa19) popup_call2_audio_wait_window_ParamLimits

0x434c,	// (0x0005fa19) popup_call2_audio_wait_window

0xa9a5,	// (0x00066072) bg_popup_call2_act_pane_cp03

0xabe2,	// (0x000662af) list_conf_pane_cp

0xbc1b,	// (0x000672e8) popup_call2_audio_conf_window_t1

0xbc29,	// (0x000672f6) list_single_graphic_popup_conf2_pane_ParamLimits

0xbc29,	// (0x000672f6) list_single_graphic_popup_conf2_pane

0xb5cc,	// (0x00066c99) list_highlight_pane_cp04

0xbc3c,	// (0x00067309) list_single_graphic_popup_conf2_pane_g1

0xb5dd,	// (0x00066caa) list_single_graphic_popup_conf2_pane_g2

0x0001,

0x0423,	// (0x0005baf0) list_single_graphic_popup_conf2_pane_g

0xbc46,	// (0x00067313) list_single_graphic_popup_conf2_pane_t1

0xbc54,	// (0x00067321) bg_popup_call2_act_pane_cp01_ParamLimits

0xbc54,	// (0x00067321) bg_popup_call2_act_pane_cp01

0xbcde,	// (0x000673ab) call_type_pane_cp05_ParamLimits

0xbcde,	// (0x000673ab) call_type_pane_cp05

0xbd32,	// (0x000673ff) popup_call2_audio_second_window_g1_ParamLimits

0xbd32,	// (0x000673ff) popup_call2_audio_second_window_g1

0xbd86,	// (0x00067453) popup_call2_audio_second_window_g2_ParamLimits

0xbd86,	// (0x00067453) popup_call2_audio_second_window_g2

0x0002,

0x0428,	// (0x0005baf5) popup_call2_audio_second_window_g_ParamLimits

0x0428,	// (0x0005baf5) popup_call2_audio_second_window_g

0xbdeb,	// (0x000674b8) popup_call2_audio_second_window_t1_ParamLimits

0xbdeb,	// (0x000674b8) popup_call2_audio_second_window_t1

0xbea6,	// (0x00067573) popup_call2_audio_second_window_t2_ParamLimits

0xbea6,	// (0x00067573) popup_call2_audio_second_window_t2

0xbef9,	// (0x000675c6) popup_call2_audio_second_window_t3_ParamLimits

0xbef9,	// (0x000675c6) popup_call2_audio_second_window_t3

0x0003,

0x042f,	// (0x0005bafc) popup_call2_audio_second_window_t_ParamLimits

0x042f,	// (0x0005bafc) popup_call2_audio_second_window_t

0xa9a5,	// (0x00066072) bg_popup_call2_in_pane_cp02

0xa9af,	// (0x0006607c) call_type_pane_cp04

0xa9b7,	// (0x00066084) popup_call2_audio_wait_window_g1

0xa9bf,	// (0x0006608c) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x0006a7cf) popup_call2_audio_wait_window_g

0xa9c7,	// (0x00066094) popup_call2_audio_wait_window_t3

0xbfec,	// (0x000676b9) bg_popup_call2_act_pane_ParamLimits

0xbfec,	// (0x000676b9) bg_popup_call2_act_pane

0xc0ac,	// (0x00067779) call_type_pane_cp03_ParamLimits

0xc0ac,	// (0x00067779) call_type_pane_cp03

0xc110,	// (0x000677dd) popup_call2_audio_first_window_g1_ParamLimits

0xc110,	// (0x000677dd) popup_call2_audio_first_window_g1

0xc180,	// (0x0006784d) popup_call2_audio_first_window_g2_ParamLimits

0xc180,	// (0x0006784d) popup_call2_audio_first_window_g2

0xb85e,	// (0x00066f2b) popup_call2_audio_first_window_g3_ParamLimits

0xb85e,	// (0x00066f2b) popup_call2_audio_first_window_g3

0x0004,

0xf4b8,	// (0x0006ab85) popup_call2_audio_first_window_g_ParamLimits

0xf4b8,	// (0x0006ab85) popup_call2_audio_first_window_g

0xc25e,	// (0x0006792b) popup_call2_audio_first_window_t1_ParamLimits

0xc25e,	// (0x0006792b) popup_call2_audio_first_window_t1

0xc361,	// (0x00067a2e) popup_call2_audio_first_window_t4_ParamLimits

0xc361,	// (0x00067a2e) popup_call2_audio_first_window_t4

0xc444,	// (0x00067b11) popup_call2_audio_first_window_t5_ParamLimits

0xc444,	// (0x00067b11) popup_call2_audio_first_window_t5

0x0003,

0x0443,	// (0x0005bb10) popup_call2_audio_first_window_t_ParamLimits

0x0443,	// (0x0005bb10) popup_call2_audio_first_window_t

0xabf8,	// (0x000662c5) bg_popup_call2_act_pane_g1

0xcab1,	// (0x0006817e) popup_cale_lunar_info_window_t1

0xcabf,	// (0x0006818c) popup_cale_lunar_info_window_t2

0xcacd,	// (0x0006819a) popup_cale_lunar_info_window_t3

0xa9a5,	// (0x00066072) bg_popup_call2_bubble_pane

0xc545,	// (0x00067c12) bg_popup_call2_in_pane_cp01_ParamLimits

0xc545,	// (0x00067c12) bg_popup_call2_in_pane_cp01

0xa2cb,	// (0x00065998) call_type_pane_cp02

0xc58d,	// (0x00067c5a) popup_call2_audio_out_window_g1_ParamLimits

0xc58d,	// (0x00067c5a) popup_call2_audio_out_window_g1

0xc5b9,	// (0x00067c86) popup_call2_audio_out_window_g2_ParamLimits

0xc5b9,	// (0x00067c86) popup_call2_audio_out_window_g2

0xc5e1,	// (0x00067cae) popup_call2_audio_out_window_g3_ParamLimits

0xc5e1,	// (0x00067cae) popup_call2_audio_out_window_g3

0x0003,

0x044c,	// (0x0005bb19) popup_call2_audio_out_window_g_ParamLimits

0x044c,	// (0x0005bb19) popup_call2_audio_out_window_g

0xc61c,	// (0x00067ce9) popup_call2_audio_out_window_t1_ParamLimits

0xc61c,	// (0x00067ce9) popup_call2_audio_out_window_t1

0xc67b,	// (0x00067d48) popup_call2_audio_out_window_t2_ParamLimits

0xc67b,	// (0x00067d48) popup_call2_audio_out_window_t2

0xc6cf,	// (0x00067d9c) popup_call2_audio_out_window_t3_ParamLimits

0xc6cf,	// (0x00067d9c) popup_call2_audio_out_window_t3

0xc6e5,	// (0x00067db2) popup_call2_audio_out_window_t4_ParamLimits

0xc6e5,	// (0x00067db2) popup_call2_audio_out_window_t4

0xc6fb,	// (0x00067dc8) popup_call2_audio_out_window_t5_ParamLimits

0xc6fb,	// (0x00067dc8) popup_call2_audio_out_window_t5

0x0005,

0x0455,	// (0x0005bb22) popup_call2_audio_out_window_t_ParamLimits

0x0455,	// (0x0005bb22) popup_call2_audio_out_window_t

0xc75f,	// (0x00067e2c) bg_popup_call2_in_pane_ParamLimits

0xc75f,	// (0x00067e2c) bg_popup_call2_in_pane

0xc7bb,	// (0x00067e88) popup_call2_audio_in_window_g1_ParamLimits

0xc7bb,	// (0x00067e88) popup_call2_audio_in_window_g1

0xc7f3,	// (0x00067ec0) popup_call2_audio_in_window_g2_ParamLimits

0xc7f3,	// (0x00067ec0) popup_call2_audio_in_window_g2

0xc82b,	// (0x00067ef8) popup_call2_audio_in_window_g3_ParamLimits

0xc82b,	// (0x00067ef8) popup_call2_audio_in_window_g3

0x0003,

0x0462,	// (0x0005bb2f) popup_call2_audio_in_window_g_ParamLimits

0x0462,	// (0x0005bb2f) popup_call2_audio_in_window_g

0xc883,	// (0x00067f50) popup_call2_audio_in_window_t1_ParamLimits

0xc883,	// (0x00067f50) popup_call2_audio_in_window_t1

0xc903,	// (0x00067fd0) popup_call2_audio_in_window_t2_ParamLimits

0xc903,	// (0x00067fd0) popup_call2_audio_in_window_t2

0xc983,	// (0x00068050) popup_call2_audio_in_window_t3_ParamLimits

0xc983,	// (0x00068050) popup_call2_audio_in_window_t3

0xc99d,	// (0x0006806a) popup_call2_audio_in_window_t4_ParamLimits

0xc99d,	// (0x0006806a) popup_call2_audio_in_window_t4

0xc9af,	// (0x0006807c) popup_call2_audio_in_window_t5_ParamLimits

0xc9af,	// (0x0006807c) popup_call2_audio_in_window_t5

0xc9c4,	// (0x00068091) popup_call2_audio_in_window_t6_ParamLimits

0xc9c4,	// (0x00068091) popup_call2_audio_in_window_t6

0x0005,

0x046b,	// (0x0005bb38) popup_call2_audio_in_window_t_ParamLimits

0x046b,	// (0x0005bb38) popup_call2_audio_in_window_t

0xabf8,	// (0x000662c5) bg_popup_call2_in_pane_g1

0xcadb,	// (0x000681a8) popup_cale_lunar_info_window_t4

0x0003,

0x04d3,	// (0x0005bba0) popup_cale_lunar_info_window_t

0xac00,	// (0x000662cd) bg_popup_call2_rect_pane_ParamLimits

0xac00,	// (0x000662cd) bg_popup_call2_rect_pane

0xa9a5,	// (0x00066072) call2_cli_visual_graphic_pane

0xa9a5,	// (0x00066072) call2_cli_visual_text_pane

0x485f,	// (0x0005ff2c) smil_status_volume_pane_g3

0x0002,

0xad39,	// (0x00066406) call2_cli_visual_graphic_pane_g1

0xad39,	// (0x00066406) call2_cli_visual_graphic_pane_g2

0xad39,	// (0x00066406) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4c3,	// (0x0006ab90) call2_cli_visual_graphic_pane_g

0xc9d9,	// (0x000680a6) bg_popup_call2_rect_pane_g1

0xadd7,	// (0x000664a4) bg_popup_call2_rect_pane_g2

0xc9e1,	// (0x000680ae) bg_popup_call2_rect_pane_g3

0xc9e9,	// (0x000680b6) bg_popup_call2_rect_pane_g4

0xc9f1,	// (0x000680be) bg_popup_call2_rect_pane_g5

0xc9f9,	// (0x000680c6) bg_popup_call2_rect_pane_g6

0xca01,	// (0x000680ce) bg_popup_call2_rect_pane_g7

0xca09,	// (0x000680d6) bg_popup_call2_rect_pane_g8

0xca11,	// (0x000680de) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ca,	// (0x0006ab97) bg_popup_call2_rect_pane_g

0xca19,	// (0x000680e6) bg_popup_call2_bubble_pane_g1

0xca21,	// (0x000680ee) bg_popup_call2_bubble_pane_g2

0xca29,	// (0x000680f6) bg_popup_call2_bubble_pane_g3

0xca31,	// (0x000680fe) bg_popup_call2_bubble_pane_g4

0xca39,	// (0x00068106) bg_popup_call2_bubble_pane_g5

0xca41,	// (0x0006810e) bg_popup_call2_bubble_pane_g6

0xca49,	// (0x00068116) bg_popup_call2_bubble_pane_g7

0xca51,	// (0x0006811e) bg_popup_call2_bubble_pane_g8

0xca59,	// (0x00068126) bg_popup_call2_bubble_pane_g9

0x0008,

0x0492,	// (0x0005bb5f) bg_popup_call2_bubble_pane_g

0x17ab,	// (0x0005ce78) aid_cale_week_size_cell_pane

0x1e0e,	// (0x0005d4db) aid_cams_cif_uncrop_pane_ParamLimits

0x1e0e,	// (0x0005d4db) aid_cams_cif_uncrop_pane

0x1f69,	// (0x0005d636) aid_cams_size_cell_ParamLimits

0x1f69,	// (0x0005d636) aid_cams_size_cell

0x1f75,	// (0x0005d642) grid_cams_pane_ParamLimits

0x1f83,	// (0x0005d650) linegrid_cams_pane_ParamLimits

0x2132,	// (0x0005d7ff) call_video_pane_t1

0x2153,	// (0x0005d820) call_video_pane_t2

0x0001,

0xf279,	// (0x0006a946) call_video_pane_t

0x26c2,	// (0x0005dd8f) aid_cale_month_size_cell_pane_ParamLimits

0x26c2,	// (0x0005dd8f) aid_cale_month_size_cell_pane

0xf50d,	// (0x0006abda) smil_status_volume_pane_g

0x486c,	// (0x0005ff39) volume_smil_pane_ParamLimits

0x0f0c,	// (0x0005c5d9) aid_popup2_width_pane

0x169f,	// (0x0005cd6c) cell_qdial_pane_g4_ParamLimits

0x169f,	// (0x0005cd6c) cell_qdial_pane_g4

0x378a,	// (0x0005ee57) aid_blid_cardinal_pane_ParamLimits

0x379a,	// (0x0005ee67) aid_blid_destination_pane_ParamLimits

0x379a,	// (0x0005ee67) aid_blid_destination_pane

0xac00,	// (0x000662cd) bg_popup_call_poc_act_pane_ParamLimits

0xac00,	// (0x000662cd) bg_popup_call_poc_act_pane

0xac00,	// (0x000662cd) bg_popup_call_poc_inact_pane_ParamLimits

0xac00,	// (0x000662cd) bg_popup_call_poc_inact_pane

0xca61,	// (0x0006812e) bg_popup_call_poc_act_pane_g1

0xca69,	// (0x00068136) bg_popup_call_poc_act_pane_g2

0xca71,	// (0x0006813e) bg_popup_call_poc_act_pane_g3

0xca31,	// (0x000680fe) bg_popup_call_poc_act_pane_g4

0xca39,	// (0x00068106) bg_popup_call_poc_act_pane_g5

0xca79,	// (0x00068146) bg_popup_call_poc_act_pane_g6

0xca49,	// (0x00068116) bg_popup_call_poc_act_pane_g7

0xca81,	// (0x0006814e) bg_popup_call_poc_act_pane_g8

0xa9a5,	// (0x00066072) main_usb_pane

0x4663,	// (0x0005fd30) popup_cale_lunar_info_window

0x2472,	// (0x0005db3f) im_reading_pane_t1_ParamLimits

0xafb6,	// (0x00066683) list_im_pane_ParamLimits

0xafc7,	// (0x00066694) scroll_pane_cp07_ParamLimits

0xa9a5,	// (0x00066072) grid_highlight_pane_cp012

0xac00,	// (0x000662cd) mup_scale_pane_ParamLimits

0xb85e,	// (0x00066f2b) main_usb_pane_g1_ParamLimits

0xb85e,	// (0x00066f2b) main_usb_pane_g1

0x43c4,	// (0x0005fa91) main_usb_pane_g2_ParamLimits

0x43c4,	// (0x0005fa91) main_usb_pane_g2

0x0001,

0xf4dd,	// (0x0006abaa) main_usb_pane_g_ParamLimits

0xf4dd,	// (0x0006abaa) main_usb_pane_g

0x43d0,	// (0x0005fa9d) main_usb_pane_t1_ParamLimits

0x43d0,	// (0x0005fa9d) main_usb_pane_t1

0x43e2,	// (0x0005faaf) main_usb_pane_t2_ParamLimits

0x43e2,	// (0x0005faaf) main_usb_pane_t2

0x43f4,	// (0x0005fac1) main_usb_pane_t3_ParamLimits

0x43f4,	// (0x0005fac1) main_usb_pane_t3

0x4406,	// (0x0005fad3) main_usb_pane_t4_ParamLimits

0x4406,	// (0x0005fad3) main_usb_pane_t4

0x4418,	// (0x0005fae5) main_usb_pane_t5_ParamLimits

0x4418,	// (0x0005fae5) main_usb_pane_t5

0x442a,	// (0x0005faf7) main_usb_pane_t6_ParamLimits

0x442a,	// (0x0005faf7) main_usb_pane_t6

0x0005,

0xf4e2,	// (0x0006abaf) main_usb_pane_t_ParamLimits

0x3730,	// (0x0005edfd) aid_text_placing

0x373c,	// (0x0005ee09) main_location2_pane_t1_ParamLimits

0x3750,	// (0x0005ee1d) main_location2_pane_t2_ParamLimits

0x3764,	// (0x0005ee31) main_location2_pane_t3_ParamLimits

0x3778,	// (0x0005ee45) main_location2_pane_t4_ParamLimits

0x3778,	// (0x0005ee45) main_location2_pane_t4

0xf3af,	// (0x0006aa7c) main_location2_pane_t_ParamLimits

0xac3c,	// (0x00066309) find_pinb_pane_g2_ParamLimits

0xac3c,	// (0x00066309) find_pinb_pane_g2

0x0001,

0xf128,	// (0x0006a7f5) find_pinb_pane_g_ParamLimits

0xf128,	// (0x0006a7f5) find_pinb_pane_g

0xac48,	// (0x00066315) find_pinb_pane_t1_ParamLimits

0xac5a,	// (0x00066327) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x0006a7fa) find_pinb_pane_t_ParamLimits

0xa9a5,	// (0x00066072) main_call3_pane

0x2c36,	// (0x0005e303) cale_month_day_heading_pane_t1_ParamLimits

0x2cbc,	// (0x0005e389) cale_month_day_heading_pane_t2_ParamLimits

0x2d4d,	// (0x0005e41a) cale_month_day_heading_pane_t3_ParamLimits

0x2dde,	// (0x0005e4ab) cale_month_day_heading_pane_t4_ParamLimits

0x2e6f,	// (0x0005e53c) cale_month_day_heading_pane_t5_ParamLimits

0x2f00,	// (0x0005e5cd) cale_month_day_heading_pane_t6_ParamLimits

0x2f9d,	// (0x0005e66a) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x0006a97e) cale_month_day_heading_pane_t_ParamLimits

0xb211,	// (0x000668de) smil_status_volume_pane

0x3f7b,	// (0x0005f648) postcard_address_pane_ParamLimits

0x3f7b,	// (0x0005f648) postcard_address_pane

0x3f87,	// (0x0005f654) postcard_message_pane_ParamLimits

0x3f87,	// (0x0005f654) postcard_message_pane

0x438b,	// (0x0005fa58) call2_cli_visual_pane_t1_ParamLimits

0x438b,	// (0x0005fa58) call2_cli_visual_pane_t1

0x49c1,	// (0x0006008e) postcard_message_pane_t1_ParamLimits

0x49c1,	// (0x0006008e) postcard_message_pane_t1

0x49aa,	// (0x00060077) postcard_address_pane_t1_ParamLimits

0x49aa,	// (0x00060077) postcard_address_pane_t1

0x499b,	// (0x00060068) popup_call3_audio_in_window_ParamLimits

0x499b,	// (0x00060068) popup_call3_audio_in_window

0x4881,	// (0x0005ff4e) bg_popup_call3_in_pane_ParamLimits

0x4881,	// (0x0005ff4e) bg_popup_call3_in_pane

0x48e1,	// (0x0005ffae) popup_call3_audio_in_window_g1_ParamLimits

0x48e1,	// (0x0005ffae) popup_call3_audio_in_window_g1

0x48f9,	// (0x0005ffc6) popup_call3_audio_in_window_g2_ParamLimits

0x48f9,	// (0x0005ffc6) popup_call3_audio_in_window_g2

0x4911,	// (0x0005ffde) popup_call3_audio_in_window_g3_ParamLimits

0x4911,	// (0x0005ffde) popup_call3_audio_in_window_g3

0x0003,

0xf514,	// (0x0006abe1) popup_call3_audio_in_window_g_ParamLimits

0xf514,	// (0x0006abe1) popup_call3_audio_in_window_g

0x4939,	// (0x00060006) popup_call3_audio_in_window_t1_ParamLimits

0x4939,	// (0x00060006) popup_call3_audio_in_window_t1

0x4961,	// (0x0006002e) popup_call3_audio_in_window_t2_ParamLimits

0x4961,	// (0x0006002e) popup_call3_audio_in_window_t2

0x4989,	// (0x00060056) popup_call3_audio_in_window_t3_ParamLimits

0x4989,	// (0x00060056) popup_call3_audio_in_window_t3

0x0002,

0xf51d,	// (0x0006abea) popup_call3_audio_in_window_t_ParamLimits

0xf51d,	// (0x0006abea) popup_call3_audio_in_window_t

0xb7c0,	// (0x00066e8d) bg_popup_call3_rect_pane

0xc9d9,	// (0x000680a6) bg_popup_call3_rect_pane_g1

0xadd7,	// (0x000664a4) bg_popup_call3_rect_pane_g2

0xc9e1,	// (0x000680ae) bg_popup_call3_rect_pane_g3

0xc9e9,	// (0x000680b6) bg_popup_call3_rect_pane_g4

0xc9f1,	// (0x000680be) bg_popup_call3_rect_pane_g5

0xc9f9,	// (0x000680c6) bg_popup_call3_rect_pane_g6

0xca01,	// (0x000680ce) bg_popup_call3_rect_pane_g7

0x3baa,	// (0x0005f277) mup_visualizer_osc_pane

0xb88d,	// (0x00066f5a) mup_visualizer_spec_pane

0x48a1,	// (0x0005ff6e) call3_video_qcif_pane_ParamLimits

0x48a1,	// (0x0005ff6e) call3_video_qcif_pane

0x48b1,	// (0x0005ff7e) call3_video_qcif_uncrop_pane_ParamLimits

0x48b1,	// (0x0005ff7e) call3_video_qcif_uncrop_pane

0x48bf,	// (0x0005ff8c) call3_video_subqcif_pane_ParamLimits

0x48bf,	// (0x0005ff8c) call3_video_subqcif_pane

0x48d1,	// (0x0005ff9e) call3_video_subqcif_uncrop_pane_ParamLimits

0x48d1,	// (0x0005ff9e) call3_video_subqcif_uncrop_pane

0x4929,	// (0x0005fff6) popup_call3_audio_in_window_g4_ParamLimits

0x4929,	// (0x0005fff6) popup_call3_audio_in_window_g4

0x484c,	// (0x0005ff19) mup_spec_half_pane

0x4855,	// (0x0005ff22) mup_spec_half_pane_cp

0xcc3e,	// (0x0006830b) mup_osc_middle_pane

0xcc47,	// (0x00068314) mup_visualizer_osc_pane_g1

0x482d,	// (0x0005fefa) mup_spec_bar_pane_ParamLimits

0x482d,	// (0x0005fefa) mup_spec_bar_pane

0xcc2b,	// (0x000682f8) mup_spec_bar_pane_g1

0xcc35,	// (0x00068302) mup_spec_bar_pane_g2

0x0001,

0x0517,	// (0x0005bbe4) mup_spec_bar_pane_g

0x17ab,	// (0x0005ce78) aid_cale_week_size_cell_pane_ParamLimits

0x17c0,	// (0x0005ce8d) bg_cale_heading_pane_ParamLimits

0xae14,	// (0x000664e1) bg_cale_pane_cp01_ParamLimits

0x17e2,	// (0x0005ceaf) cale_week_corner_pane_ParamLimits

0x17fc,	// (0x0005cec9) cale_week_day_heading_pane_ParamLimits

0x181e,	// (0x0005ceeb) cale_week_scroll_pane_g1_ParamLimits

0x183b,	// (0x0005cf08) cale_week_scroll_pane_g2_ParamLimits

0x184e,	// (0x0005cf1b) cale_week_scroll_pane_g3_ParamLimits

0x1861,	// (0x0005cf2e) cale_week_scroll_pane_g4_ParamLimits

0x1874,	// (0x0005cf41) cale_week_scroll_pane_g5_ParamLimits

0x1887,	// (0x0005cf54) cale_week_scroll_pane_g6_ParamLimits

0x189a,	// (0x0005cf67) cale_week_scroll_pane_g7_ParamLimits

0x18ad,	// (0x0005cf7a) cale_week_scroll_pane_g8_ParamLimits

0x18c2,	// (0x0005cf8f) cale_week_scroll_pane_g9_ParamLimits

0x18d5,	// (0x0005cfa2) cale_week_scroll_pane_g10_ParamLimits

0x18e8,	// (0x0005cfb5) cale_week_scroll_pane_g11_ParamLimits

0x18fb,	// (0x0005cfc8) cale_week_scroll_pane_g12_ParamLimits

0x1912,	// (0x0005cfdf) cale_week_scroll_pane_g13_ParamLimits

0x192d,	// (0x0005cffa) cale_week_scroll_pane_g14_ParamLimits

0x1948,	// (0x0005d015) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x0006a886) cale_week_scroll_pane_g_ParamLimits

0x1963,	// (0x0005d030) cale_week_time_pane_ParamLimits

0x1978,	// (0x0005d045) grid_cale_week_pane_ParamLimits

0xae32,	// (0x000664ff) listscroll_cale_week_pane_t1

0xae44,	// (0x00066511) scroll_pane_cp08_ParamLimits

0x272b,	// (0x0005ddf8) cale_month_corner_pane_ParamLimits

0xb1e7,	// (0x000668b4) cale_month_pane_t1

0x2bcf,	// (0x0005e29c) cale_month_week_pane_ParamLimits

0xb85e,	// (0x00066f2b) popup_call_status_window_g1_ParamLimits

0x3576,	// (0x0005ec43) popup_call_status_window_g2_ParamLimits

0x3582,	// (0x0005ec4f) popup_call_status_window_g3_ParamLimits

0xf353,	// (0x0006aa20) popup_call_status_window_g_ParamLimits

0xb528,	// (0x00066bf5) aid_call2_pane

0x3e31,	// (0x0005f4fe) msg_header_pane_g1

0x3f7b,	// (0x0005f648) postcard_address2_pane_ParamLimits

0x3f7b,	// (0x0005f648) postcard_address2_pane

0x3f87,	// (0x0005f654) postcard_message2_pane_ParamLimits

0x3f87,	// (0x0005f654) postcard_message2_pane

0x47bf,	// (0x0005fe8c) message2_row_pane_ParamLimits

0x47bf,	// (0x0005fe8c) message2_row_pane

0x47dc,	// (0x0005fea9) address2_row_pane_ParamLimits

0x47dc,	// (0x0005fea9) address2_row_pane

0xcbf9,	// (0x000682c6) postcard_message2_row_pane_g1

0xcc01,	// (0x000682ce) postcard_message2_row_pane_t1

0xcbf9,	// (0x000682c6) address2_row_pane_g1

0xcc01,	// (0x000682ce) address2_row_pane_t1

0x1cd8,	// (0x0005d3a5) aid_size_cell_vorec

0xa9a5,	// (0x00066072) main_rss_pane

0x47ef,	// (0x0005febc) rss_list_single_pane_ParamLimits

0x47ef,	// (0x0005febc) rss_list_single_pane

0xcc0f,	// (0x000682dc) rss_list_single_pane_t1

0xcc1d,	// (0x000682ea) rss_list_single_pane_t2

0x0001,

0x0512,	// (0x0005bbdf) rss_list_single_pane_t

0xa9a5,	// (0x00066072) main_camera2_pane

0xa9a5,	// (0x00066072) main_video2_pane

0x4a25,	// (0x000600f2) cams_zoom_pane_cp2_ParamLimits

0x4a25,	// (0x000600f2) cams_zoom_pane_cp2

0x4a31,	// (0x000600fe) image2_vga_pane_ParamLimits

0x4a31,	// (0x000600fe) image2_vga_pane

0x4a40,	// (0x0006010d) main_camera2_pane_g1_ParamLimits

0x4a40,	// (0x0006010d) main_camera2_pane_g1

0x4a4c,	// (0x00060119) main_camera2_pane_g2_ParamLimits

0x4a4c,	// (0x00060119) main_camera2_pane_g2

0x4a58,	// (0x00060125) main_camera2_pane_g3_ParamLimits

0x4a58,	// (0x00060125) main_camera2_pane_g3

0x4a64,	// (0x00060131) main_camera2_pane_g4_ParamLimits

0x4a64,	// (0x00060131) main_camera2_pane_g4

0x4a70,	// (0x0006013d) main_camera2_pane_g5_ParamLimits

0x4a70,	// (0x0006013d) main_camera2_pane_g5

0x4a7c,	// (0x00060149) main_camera2_pane_g6_ParamLimits

0x4a7c,	// (0x00060149) main_camera2_pane_g6

0x4a88,	// (0x00060155) main_camera2_pane_g7_ParamLimits

0x4a88,	// (0x00060155) main_camera2_pane_g7

0x4a94,	// (0x00060161) main_camera2_pane_g8_ParamLimits

0x4a94,	// (0x00060161) main_camera2_pane_g8

0x0008,

0xf524,	// (0x0006abf1) main_camera2_pane_g_ParamLimits

0xf524,	// (0x0006abf1) main_camera2_pane_g

0x4aac,	// (0x00060179) main_camera2_pane_t1_ParamLimits

0x4aac,	// (0x00060179) main_camera2_pane_t1

0x4abe,	// (0x0006018b) main_camera2_pane_t2_ParamLimits

0x4abe,	// (0x0006018b) main_camera2_pane_t2

0x4ad0,	// (0x0006019d) main_camera2_pane_t3_ParamLimits

0x4ad0,	// (0x0006019d) main_camera2_pane_t3

0x4ae2,	// (0x000601af) main_camera2_pane_t4_ParamLimits

0x4ae2,	// (0x000601af) main_camera2_pane_t4

0x0006,

0xf537,	// (0x0006ac04) main_camera2_pane_t_ParamLimits

0xf537,	// (0x0006ac04) main_camera2_pane_t

0x4b44,	// (0x00060211) cams_zoom_pane_cp4_ParamLimits

0x4b44,	// (0x00060211) cams_zoom_pane_cp4

0x4b54,	// (0x00060221) image2_cif_pane_ParamLimits

0x4b54,	// (0x00060221) image2_cif_pane

0x4b69,	// (0x00060236) image2_subqcif_pane_ParamLimits

0x4b69,	// (0x00060236) image2_subqcif_pane

0x4b78,	// (0x00060245) main_video2_pane_g1_ParamLimits

0x4b78,	// (0x00060245) main_video2_pane_g1

0x4b8a,	// (0x00060257) main_video2_pane_g2_ParamLimits

0x4b8a,	// (0x00060257) main_video2_pane_g2

0x4b9a,	// (0x00060267) main_video2_pane_g3_ParamLimits

0x4b9a,	// (0x00060267) main_video2_pane_g3

0x4baa,	// (0x00060277) main_video2_pane_g4_ParamLimits

0x4baa,	// (0x00060277) main_video2_pane_g4

0x4bba,	// (0x00060287) main_video2_pane_g5_ParamLimits

0x4bba,	// (0x00060287) main_video2_pane_g5

0x4bca,	// (0x00060297) main_video2_pane_g6_ParamLimits

0x4bca,	// (0x00060297) main_video2_pane_g6

0x0005,

0xf546,	// (0x0006ac13) main_video2_pane_g_ParamLimits

0xf546,	// (0x0006ac13) main_video2_pane_g

0x4bdc,	// (0x000602a9) main_video2_pane_t1_ParamLimits

0x4bdc,	// (0x000602a9) main_video2_pane_t1

0x4bf6,	// (0x000602c3) main_video2_pane_t2_ParamLimits

0x4bf6,	// (0x000602c3) main_video2_pane_t2

0x4c1c,	// (0x000602e9) main_video2_pane_t3_ParamLimits

0x4c1c,	// (0x000602e9) main_video2_pane_t3

0x0002,

0xf553,	// (0x0006ac20) main_video2_pane_t_ParamLimits

0xf553,	// (0x0006ac20) main_video2_pane_t

0x44e1,	// (0x0005fbae) call_muted_g2

0x0001,

0xf508,	// (0x0006abd5) call_muted_g

0xa9a5,	// (0x00066072) main_mup2_pane

0xcc9c,	// (0x00068369) main_mup2_pane_g1_ParamLimits

0xcc9c,	// (0x00068369) main_mup2_pane_g1

0x4c42,	// (0x0006030f) main_mup2_pane_g2_ParamLimits

0x4c42,	// (0x0006030f) main_mup2_pane_g2

0x4ec4,	// (0x00060591) main_mup_pane_g13_cp1

0x4ecc,	// (0x00060599) mup_volume_pane_cp1

0x4c62,	// (0x0006032f) main_mup2_pane_g4_ParamLimits

0x4c62,	// (0x0006032f) main_mup2_pane_g4

0x4c77,	// (0x00060344) main_mup2_pane_g5_ParamLimits

0x4c77,	// (0x00060344) main_mup2_pane_g5

0x4c8c,	// (0x00060359) main_mup2_pane_g6_ParamLimits

0x4c8c,	// (0x00060359) main_mup2_pane_g6

0x4ca1,	// (0x0006036e) main_mup2_pane_g7_ParamLimits

0x4ca1,	// (0x0006036e) main_mup2_pane_g7

0x0006,

0xf55a,	// (0x0006ac27) main_mup2_pane_g_ParamLimits

0xf55a,	// (0x0006ac27) main_mup2_pane_g

0x4cbd,	// (0x0006038a) main_mup2_pane_t1_ParamLimits

0x4cbd,	// (0x0006038a) main_mup2_pane_t1

0x4cd4,	// (0x000603a1) main_mup2_pane_t2_ParamLimits

0x4cd4,	// (0x000603a1) main_mup2_pane_t2

0x4ceb,	// (0x000603b8) main_mup2_pane_t3_ParamLimits

0x4ceb,	// (0x000603b8) main_mup2_pane_t3

0x4d02,	// (0x000603cf) main_mup2_pane_t4_ParamLimits

0x4d02,	// (0x000603cf) main_mup2_pane_t4

0x4d1c,	// (0x000603e9) main_mup2_pane_t5_ParamLimits

0x4d1c,	// (0x000603e9) main_mup2_pane_t5

0x4d36,	// (0x00060403) main_mup2_pane_t6_ParamLimits

0x4d36,	// (0x00060403) main_mup2_pane_t6

0x0005,

0xf569,	// (0x0006ac36) main_mup2_pane_t_ParamLimits

0xf569,	// (0x0006ac36) main_mup2_pane_t

0x4d6e,	// (0x0006043b) mup2_visualizer_pane_ParamLimits

0x4d6e,	// (0x0006043b) mup2_visualizer_pane

0x4da4,	// (0x00060471) mup_progress_pane_cp_ParamLimits

0x4da4,	// (0x00060471) mup_progress_pane_cp

0x4eaf,	// (0x0006057c) mup_volume_pane_cp_ParamLimits

0x4eaf,	// (0x0006057c) mup_volume_pane_cp

0x4dbb,	// (0x00060488) mup2_visualizer_pane_g1_ParamLimits

0x4dbb,	// (0x00060488) mup2_visualizer_pane_g1

0xcc7e,	// (0x0006834b) mup2_visualizer_pane_g2_ParamLimits

0xcc7e,	// (0x0006834b) mup2_visualizer_pane_g2

0x4dd0,	// (0x0006049d) mup2_visualizer_pane_g3_ParamLimits

0x4dd0,	// (0x0006049d) mup2_visualizer_pane_g3

0x0002,

0xf576,	// (0x0006ac43) mup2_visualizer_pane_g_ParamLimits

0xf576,	// (0x0006ac43) mup2_visualizer_pane_g

0xbaab,	// (0x00067178) aid_size_cell_fmradio

0x45f7,	// (0x0005fcc4) aid_height_parent_landcape

0xb045,	// (0x00066712) wml_content_pane_cp

0xb04d,	// (0x0006671a) wml_tabs_pane

0xb056,	// (0x00066723) popup_wml_miniature_window

0xb05e,	// (0x0006672b) scroll_pane_cp021

0xb072,	// (0x0006673f) wml_content_pane_comp8

0xa9a5,	// (0x00066072) bg_popup_sub_pane_cp05

0xcca8,	// (0x00068375) popup_wml_miniature_window_g1

0xccb0,	// (0x0006837d) wml_miniature_view_pane

0x4dde,	// (0x000604ab) aid_size_wml_view

0x4de6,	// (0x000604b3) wml_miniature_view_pane_g1

0x4def,	// (0x000604bc) wml_miniature_view_pane_g2

0x4df8,	// (0x000604c5) wml_miniature_view_pane_g3

0x4e00,	// (0x000604cd) wml_miniature_view_pane_g4

0x4e08,	// (0x000604d5) wml_miniature_view_pane_g5

0x4e10,	// (0x000604dd) wml_miniature_view_pane_g6

0x4e18,	// (0x000604e5) wml_miniature_view_pane_g7

0x4e20,	// (0x000604ed) wml_miniature_view_pane_g8

0x0007,

0xf57d,	// (0x0006ac4a) wml_miniature_view_pane_g

0xcc9c,	// (0x00068369) background_graphic_ParamLimits

0xcc9c,	// (0x00068369) background_graphic

0xccb8,	// (0x00068385) wml_tabs_2_pane

0xccc1,	// (0x0006838e) wml_tabs_3_pane_ParamLimits

0xccc1,	// (0x0006838e) wml_tabs_3_pane

0xccd3,	// (0x000683a0) wml_tabs_4_pane_ParamLimits

0xccd3,	// (0x000683a0) wml_tabs_4_pane

0xcce9,	// (0x000683b6) wml_tabs_5_pane_ParamLimits

0xcce9,	// (0x000683b6) wml_tabs_5_pane

0xcd03,	// (0x000683d0) wml_tabs_pane_g2_ParamLimits

0xcd03,	// (0x000683d0) wml_tabs_pane_g2

0xcd17,	// (0x000683e4) wml_tabs_pane_g3_ParamLimits

0xcd17,	// (0x000683e4) wml_tabs_pane_g3

0x4e28,	// (0x000604f5) wml_tabs_2_active_pane_ParamLimits

0x4e28,	// (0x000604f5) wml_tabs_2_active_pane

0x4e38,	// (0x00060505) wml_tabs_2_passive_pane_ParamLimits

0x4e38,	// (0x00060505) wml_tabs_2_passive_pane

0x4e48,	// (0x00060515) wml_tabs_3_active_pane_cp_ParamLimits

0x4e48,	// (0x00060515) wml_tabs_3_active_pane_cp

0x4e59,	// (0x00060526) wml_tabs_3_passive_pane_ParamLimits

0x4e59,	// (0x00060526) wml_tabs_3_passive_pane

0x4e6a,	// (0x00060537) wml_tabs_3_passive_pane_cp_ParamLimits

0x4e6a,	// (0x00060537) wml_tabs_3_passive_pane_cp

0x4e7b,	// (0x00060548) tabs_4_active_pane

0x4e83,	// (0x00060550) tabs_4_passive_pane

0x4e8b,	// (0x00060558) tabs_4_passive_pane_cp

0x4e93,	// (0x00060560) tabs_4_passive_pane_cp2

0x43bc,	// (0x0005fa89) aid_height_text

0x3b73,	// (0x0005f240) mup_volume_cont_pane_ParamLimits

0x3b73,	// (0x0005f240) mup_volume_cont_pane

0x12f6,	// (0x0005c9c3) aid_size_cell_pinb

0x1300,	// (0x0005c9cd) aid_size_list_pinb

0x4d8d,	// (0x0006045a) mup2_volume_cont_pane_ParamLimits

0x4d8d,	// (0x0006045a) mup2_volume_cont_pane

0x4e9b,	// (0x00060568) mup2_volume_cont_pane_g1_ParamLimits

0x4e9b,	// (0x00060568) mup2_volume_cont_pane_g1

0x0f18,	// (0x0005c5e5) aid_size_cell_touch_ParamLimits

0x0f18,	// (0x0005c5e5) aid_size_cell_touch

0x11d9,	// (0x0005c8a6) touch_pane_ParamLimits

0x11d9,	// (0x0005c8a6) touch_pane

0x11cf,	// (0x0005c89c) main_rss2_pane

0xcd40,	// (0x0006840d) listscroll_rss2_pane

0xcd49,	// (0x00068416) rss2_navigation_pane

0xcd51,	// (0x0006841e) list_rss2_pane

0xb677,	// (0x00066d44) scroll_pane_cp22

0xcd59,	// (0x00068426) rss2_navigation_pane_g1

0xcd62,	// (0x0006842f) rss2_navigation_pane_g2

0xcd6a,	// (0x00068437) rss2_navigation_pane_g3

0x0002,

0x059d,	// (0x0005bc6a) rss2_navigation_pane_g

0xcd72,	// (0x0006843f) rss2_navigation_pane_t1

0x4ed4,	// (0x000605a1) rss2_list_single_pane_ParamLimits

0x4ed4,	// (0x000605a1) rss2_list_single_pane

0xcd80,	// (0x0006844d) rss2_list_single_pane_t2

0xcd8e,	// (0x0006845b) rss2_list_single_pane_t3_ParamLimits

0xcd8e,	// (0x0006845b) rss2_list_single_pane_t3

0xcdab,	// (0x00068478) rss2_list_single_pane_t4

0x3277,	// (0x0005e944) smil_status_pane_g1

0x460e,	// (0x0005fcdb) main_image2_pane_ParamLimits

0x460e,	// (0x0005fcdb) main_image2_pane

0x4aa0,	// (0x0006016d) main_camera2_pane_g9_ParamLimits

0x4aa0,	// (0x0006016d) main_camera2_pane_g9

0x4af4,	// (0x000601c1) main_camera2_pane_t5_ParamLimits

0x4af4,	// (0x000601c1) main_camera2_pane_t5

0x4b06,	// (0x000601d3) main_camera2_pane_t6_ParamLimits

0x4b06,	// (0x000601d3) main_camera2_pane_t6

0x4f0c,	// (0x000605d9) main_image2_pane_g1_ParamLimits

0x4f0c,	// (0x000605d9) main_image2_pane_g1

0x4158,	// (0x0005f825) smil2_video_pane_ParamLimits

0x4158,	// (0x0005f825) smil2_video_pane

0x0e29,	// (0x0005c4f6) aid_zoom_text_primary_cp

0x116a,	// (0x0005c837) popup_preview_fixed_window

0xafae,	// (0x0006667b) im_reading_pane_g1

0x49ea,	// (0x000600b7) cams2_bc_adjust_pane_cp_ParamLimits

0x49ea,	// (0x000600b7) cams2_bc_adjust_pane_cp

0x4b36,	// (0x00060203) cams2_bc_adjust_pane_ParamLimits

0x4b36,	// (0x00060203) cams2_bc_adjust_pane

0xdf96,	// (0x00069663) cams2_bc_adjust_pane_g1

0x4f18,	// (0x000605e5) cams2_slider_pane

0x4f21,	// (0x000605ee) cams2_slider_pane_g1

0x4f2a,	// (0x000605f7) cams2_slider_pane_g2

0x0006,

0xf58e,	// (0x0006ac5b) cams2_slider_pane_g

0x13f0,	// (0x0005cabd) calc_display_pane_ParamLimits

0x140e,	// (0x0005cadb) calc_paper_pane_ParamLimits

0x142a,	// (0x0005caf7) grid_calc_pane_ParamLimits

0x35e4,	// (0x0005ecb1) popup_clock_digital_window_t1_ParamLimits

0xba48,	// (0x00067115) main_image_pane_t1

0x13d6,	// (0x0005caa3) aid_size_cell_calc_ParamLimits

0x13d6,	// (0x0005caa3) aid_size_cell_calc

0x463f,	// (0x0005fd0c) popup_blid_sat_info2_window_ParamLimits

0x463f,	// (0x0005fd0c) popup_blid_sat_info2_window

0xcdc1,	// (0x0006848e) aid_size_cell_blid

0xcdc9,	// (0x00068496) bg_popup_window_pane_cp07

0xcdec,	// (0x000684b9) grid_popup_blid_pane

0xcdf6,	// (0x000684c3) heading_pane_cp05_ParamLimits

0xcdf6,	// (0x000684c3) heading_pane_cp05

0xcec0,	// (0x0006858d) cell_popup_blid_pane_ParamLimits

0xcec0,	// (0x0006858d) cell_popup_blid_pane

0xcee6,	// (0x000685b3) cell_popup_blid_pane_g1

0xceee,	// (0x000685bb) cell_popup_blid_pane_t1

0x4d53,	// (0x00060420) mup2_indicator_pane_ParamLimits

0x4d53,	// (0x00060420) mup2_indicator_pane

0xb7c0,	// (0x00066e8d) mup2_visualizer_osc_pane

0xcc8a,	// (0x00068357) mup2_visualizer_spec_pane_ParamLimits

0xcc8a,	// (0x00068357) mup2_visualizer_spec_pane

0x4f44,	// (0x00060611) mup2_spec_half_pane

0x4f4d,	// (0x0006061a) mup2_spec_half_pane_cp

0x4f57,	// (0x00060624) mup2_spec_bar_pane_ParamLimits

0x4f57,	// (0x00060624) mup2_spec_bar_pane

0xcc2b,	// (0x000682f8) mup2_spec_bar_pane_g1

0xcc35,	// (0x00068302) mup2_spec_bar_pane_g2

0x0001,

0x0517,	// (0x0005bbe4) mup2_spec_bar_pane_g

0x4f76,	// (0x00060643) mup2_osc_middle_pane

0xcc47,	// (0x00068314) mup2_visualizer_osc_pane_g1

0x9b67,	// (0x00065234) popup_number_entry_window_t1_ParamLimits

0x9b7a,	// (0x00065247) popup_number_entry_window_t2_ParamLimits

0x9b8c,	// (0x00065259) popup_number_entry_window_t3_ParamLimits

0x1230,	// (0x0005c8fd) popup_number_entry_window_t5_ParamLimits

0x1230,	// (0x0005c8fd) popup_number_entry_window_t5

0xf0d3,	// (0x0006a7a0) popup_number_entry_window_t_ParamLimits

0x9b9e,	// (0x0006526b) text_title_cp2_ParamLimits

0x3e4f,	// (0x0005f51c) aid_hotspot_pointer_text2_pane

0x3edd,	// (0x0005f5aa) main_viewer_pane_g9_ParamLimits

0x3edd,	// (0x0005f5aa) main_viewer_pane_g9

0xb1e7,	// (0x000668b4) cale_month_pane_t1_ParamLimits

0xb224,	// (0x000668f1) bg_cale_pane_ParamLimits

0xb23c,	// (0x00066909) list_cale_pane_ParamLimits

0xb24d,	// (0x0006691a) listscroll_cale_day_pane_t1

0xb25f,	// (0x0006692c) scroll_pane_cp09_ParamLimits

0x3bb2,	// (0x0005f27f) main_mup_eq_pane_t1_ParamLimits

0x3bb2,	// (0x0005f27f) main_mup_eq_pane_t1

0x3bcc,	// (0x0005f299) main_mup_eq_pane_t2_ParamLimits

0x3bcc,	// (0x0005f299) main_mup_eq_pane_t2

0x3be4,	// (0x0005f2b1) main_mup_eq_pane_t3_ParamLimits

0x3be4,	// (0x0005f2b1) main_mup_eq_pane_t3

0x3bfc,	// (0x0005f2c9) main_mup_eq_pane_t4_ParamLimits

0x3bfc,	// (0x0005f2c9) main_mup_eq_pane_t4

0x3c14,	// (0x0005f2e1) main_mup_eq_pane_t5_ParamLimits

0x3c14,	// (0x0005f2e1) main_mup_eq_pane_t5

0x3c2c,	// (0x0005f2f9) main_mup_eq_pane_t6_ParamLimits

0x3c2c,	// (0x0005f2f9) main_mup_eq_pane_t6

0x3c40,	// (0x0005f30d) main_mup_eq_pane_t7_ParamLimits

0x3c40,	// (0x0005f30d) main_mup_eq_pane_t7

0x3c54,	// (0x0005f321) main_mup_eq_pane_t8_ParamLimits

0x3c54,	// (0x0005f321) main_mup_eq_pane_t8

0x3c6a,	// (0x0005f337) main_mup_eq_pane_t9_ParamLimits

0x3c6a,	// (0x0005f337) main_mup_eq_pane_t9

0x3c82,	// (0x0005f34f) main_mup_eq_pane_t10_ParamLimits

0x3c82,	// (0x0005f34f) main_mup_eq_pane_t10

0x0009,

0xf420,	// (0x0006aaed) main_mup_eq_pane_t_ParamLimits

0xf420,	// (0x0006aaed) main_mup_eq_pane_t

0x3d3f,	// (0x0005f40c) mup_equalizer_pane_cp5_ParamLimits

0x3d55,	// (0x0005f422) mup_equalizer_pane_cp6_ParamLimits

0x3d6d,	// (0x0005f43a) mup_equalizer_pane_cp7_ParamLimits

0x11cf,	// (0x0005c89c) main_gallery_pane

0xcc50,	// (0x0006831d) smil2_volume_pane

0xcc6b,	// (0x00068338) smil_status_volume_pane_g1_ParamLimits

0xcc58,	// (0x00068325) smil_status_volume_pane_g2_ParamLimits

0x485f,	// (0x0005ff2c) smil_status_volume_pane_g3_ParamLimits

0xf50d,	// (0x0006abda) smil_status_volume_pane_g_ParamLimits

0xcdc9,	// (0x00068496) bg_popup_window_pane_cp07_ParamLimits

0xcdd7,	// (0x000684a4) blid_firmament_pane

0x4f7f,	// (0x0006064c) aid_size_cell_gallery_ParamLimits

0x4f7f,	// (0x0006064c) aid_size_cell_gallery

0x4f8d,	// (0x0006065a) grid_gallery_pane_ParamLimits

0x4f8d,	// (0x0006065a) grid_gallery_pane

0x4f9d,	// (0x0006066a) cell_gallery_pane_ParamLimits

0x4f9d,	// (0x0006066a) cell_gallery_pane

0xcefc,	// (0x000685c9) bg_cell_gallery_focus_pane_ParamLimits

0xcefc,	// (0x000685c9) bg_cell_gallery_focus_pane

0xcf0e,	// (0x000685db) cell_gallery_pane_g1_ParamLimits

0xcf0e,	// (0x000685db) cell_gallery_pane_g1

0x4feb,	// (0x000606b8) cell_gallery_pane_g2_ParamLimits

0x4feb,	// (0x000606b8) cell_gallery_pane_g2

0x4ff8,	// (0x000606c5) cell_gallery_pane_g3_ParamLimits

0x4ff8,	// (0x000606c5) cell_gallery_pane_g3

0xcf1a,	// (0x000685e7) cell_gallery_pane_g4_ParamLimits

0xcf1a,	// (0x000685e7) cell_gallery_pane_g4

0x0003,

0xf59d,	// (0x0006ac6a) cell_gallery_pane_g_ParamLimits

0xf59d,	// (0x0006ac6a) cell_gallery_pane_g

0xcf26,	// (0x000685f3) bg_cell_gallery_focus_pane_g1

0xcf2e,	// (0x000685fb) bg_cell_gallery_focus_pane_g2

0xcf36,	// (0x00068603) bg_cell_gallery_focus_pane_g3

0xcf3e,	// (0x0006860b) bg_cell_gallery_focus_pane_g4

0xcf46,	// (0x00068613) bg_cell_gallery_focus_pane_g5

0xcf4e,	// (0x0006861b) bg_cell_gallery_focus_pane_g6

0xcf56,	// (0x00068623) bg_cell_gallery_focus_pane_g7

0xcf5e,	// (0x0006862b) bg_cell_gallery_focus_pane_g8

0x0007,

0x05d3,	// (0x0005bca0) bg_cell_gallery_focus_pane_g

0xcf66,	// (0x00068633) aid_firma_cardinal

0xcf7a,	// (0x00068647) blid_firmament_pane_t1

0xcf91,	// (0x0006865e) blid_firmament_pane_t2

0xcfa8,	// (0x00068675) blid_firmament_pane_t3

0xcfbf,	// (0x0006868c) blid_firmament_pane_t4

0x0003,

0x05e4,	// (0x0005bcb1) blid_firmament_pane_t

0xcfd6,	// (0x000686a3) blid_sat_info_pane

0xcfe6,	// (0x000686b3) blid_sat_info_pane_g1

0xcfe6,	// (0x000686b3) blid_sat_info_pane_g2

0x0001,

0x05ed,	// (0x0005bcba) blid_sat_info_pane_g

0xcff0,	// (0x000686bd) blid_sat_info_pane_t1

0xcffe,	// (0x000686cb) smil2_volume_content_pane

0xd007,	// (0x000686d4) smil2_volume_pane_g1

0xad6e,	// (0x0006643b) smil2_volume_content_pane_g1

0xd00f,	// (0x000686dc) smil2_volume_content_pane_g2

0xd018,	// (0x000686e5) smil2_volume_content_pane_g3

0xd021,	// (0x000686ee) smil2_volume_content_pane_g4

0xd02a,	// (0x000686f7) smil2_volume_content_pane_g5

0xd033,	// (0x00068700) smil2_volume_content_pane_g6

0xd03c,	// (0x00068709) smil2_volume_content_pane_g7

0xd045,	// (0x00068712) smil2_volume_content_pane_g8

0xd04e,	// (0x0006871b) smil2_volume_content_pane_g9

0xd057,	// (0x00068724) smil2_volume_content_pane_g10

0x0009,

0xf5a6,	// (0x0006ac73) smil2_volume_content_pane_g

0x19fd,	// (0x0005d0ca) cale_week_day_heading_pane_t1_ParamLimits

0x1a38,	// (0x0005d105) cale_week_day_heading_pane_t2_ParamLimits

0x1a73,	// (0x0005d140) cale_week_day_heading_pane_t3_ParamLimits

0x1aae,	// (0x0005d17b) cale_week_day_heading_pane_t4_ParamLimits

0x1ae9,	// (0x0005d1b6) cale_week_day_heading_pane_t5_ParamLimits

0x1b24,	// (0x0005d1f1) cale_week_day_heading_pane_t6_ParamLimits

0x1b5f,	// (0x0005d22c) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x0006a8a5) cale_week_day_heading_pane_t_ParamLimits

0xae61,	// (0x0006652e) bg_cale_side_pane_ParamLimits

0x1b9a,	// (0x0005d267) cale_week_time_pane_t1_ParamLimits

0x1bb4,	// (0x0005d281) cale_week_time_pane_t2_ParamLimits

0x1bce,	// (0x0005d29b) cale_week_time_pane_t3_ParamLimits

0x1be8,	// (0x0005d2b5) cale_week_time_pane_t4_ParamLimits

0x1c02,	// (0x0005d2cf) cale_week_time_pane_t5_ParamLimits

0x1c1e,	// (0x0005d2eb) cale_week_time_pane_t6_ParamLimits

0x1c40,	// (0x0005d30d) cale_week_time_pane_t7_ParamLimits

0x1c64,	// (0x0005d331) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x0006a8b4) cale_week_time_pane_t_ParamLimits

0x1c8a,	// (0x0005d357) cell_cale_week_pane_g2_ParamLimits

0xae61,	// (0x0006652e) bg_cale_side_pane_cp01_ParamLimits

0x3046,	// (0x0005e713) cale_month_week_pane_t1_ParamLimits

0x305f,	// (0x0005e72c) cale_month_week_pane_t2_ParamLimits

0x3078,	// (0x0005e745) cale_month_week_pane_t3_ParamLimits

0x3091,	// (0x0005e75e) cale_month_week_pane_t4_ParamLimits

0x30ae,	// (0x0005e77b) cale_month_week_pane_t5_ParamLimits

0x30cf,	// (0x0005e79c) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x0006a98d) cale_month_week_pane_t_ParamLimits

0x3240,	// (0x0005e90d) cell_cale_month_pane_g1_ParamLimits

0x11cf,	// (0x0005c89c) main_cale_event_viewer_pane

0x9b3d,	// (0x0006520a) listscroll_cale_event_viewer_pane

0xd060,	// (0x0006872d) list_cale_ev_pane

0xd068,	// (0x00068735) scroll_pane_cp023

0xd074,	// (0x00068741) field_cale_ev_pane_ParamLimits

0xd074,	// (0x00068741) field_cale_ev_pane

0xd090,	// (0x0006875d) field_cale_ev_content_pane_ParamLimits

0xd090,	// (0x0006875d) field_cale_ev_content_pane

0xd09c,	// (0x00068769) field_cale_ev_pane_g1_ParamLimits

0xd09c,	// (0x00068769) field_cale_ev_pane_g1

0xd0a8,	// (0x00068775) field_cale_ev_pane_g2_ParamLimits

0xd0a8,	// (0x00068775) field_cale_ev_pane_g2

0xd0c0,	// (0x0006878d) field_cale_ev_pane_g3_ParamLimits

0xd0c0,	// (0x0006878d) field_cale_ev_pane_g3

0x0002,

0x0607,	// (0x0005bcd4) field_cale_ev_pane_g_ParamLimits

0x0607,	// (0x0005bcd4) field_cale_ev_pane_g

0xd0d8,	// (0x000687a5) field_cale_ev_pane_t1_ParamLimits

0xd0d8,	// (0x000687a5) field_cale_ev_pane_t1

0xd0ef,	// (0x000687bc) field_cale_ev_content_pane_t1_ParamLimits

0xd0ef,	// (0x000687bc) field_cale_ev_content_pane_t1

0x3e28,	// (0x0005f4f5) bg_button_pane_cp01

0x179b,	// (0x0005ce68) listscroll_cale_week_pane_ParamLimits

0xae0b,	// (0x000664d8) popup_toolbar_window_cp01

0xae32,	// (0x000664ff) listscroll_cale_week_pane_t1_ParamLimits

0x179b,	// (0x0005ce68) listscroll_cale_day_pane_ParamLimits

0xae0b,	// (0x000664d8) popup_toolbar_window_cp02

0xb24d,	// (0x0006691a) listscroll_cale_day_pane_t1_ParamLimits

0x179b,	// (0x0005ce68) main_cale_month_pane_ParamLimits

0x473c,	// (0x0005fe09) popup_toolbar_window_cp03_ParamLimits

0x473c,	// (0x0005fe09) popup_toolbar_window_cp03

0x406a,	// (0x0005f737) main_image_pane_g2_ParamLimits

0x406a,	// (0x0005f737) main_image_pane_g2

0x4076,	// (0x0005f743) main_image_pane_g3_ParamLimits

0x4076,	// (0x0005f743) main_image_pane_g3

0x0002,

0xf4a8,	// (0x0006ab75) main_image_pane_g_ParamLimits

0xf4a8,	// (0x0006ab75) main_image_pane_g

0xba48,	// (0x00067115) main_image_pane_t1_ParamLimits

0x4082,	// (0x0005f74f) main_image_pane_t2_ParamLimits

0x4082,	// (0x0005f74f) main_image_pane_t2

0x4094,	// (0x0005f761) main_image_pane_t3_ParamLimits

0x4094,	// (0x0005f761) main_image_pane_t3

0x40a6,	// (0x0005f773) main_image_pane_t4_ParamLimits

0x40a6,	// (0x0005f773) main_image_pane_t4

0x0003,

0xf4af,	// (0x0006ab7c) main_image_pane_t_ParamLimits

0xf4af,	// (0x0006ab7c) main_image_pane_t

0x40b8,	// (0x0005f785) popup_image_details_window_cp01

0x40c2,	// (0x0005f78f) popup_toobar_trans_pane_cp01_ParamLimits

0x40c2,	// (0x0005f78f) popup_toobar_trans_pane_cp01

0x4692,	// (0x0005fd5f) popup_image_details_window_ParamLimits

0x4692,	// (0x0005fd5f) popup_image_details_window

0x46a0,	// (0x0005fd6d) popup_image_focus_window

0x49dc,	// (0x000600a9) camera2_autofocus_pane_ParamLimits

0x49dc,	// (0x000600a9) camera2_autofocus_pane

0x9b3d,	// (0x0006520a) bg_popup_sub_pane_cp06

0xd10c,	// (0x000687d9) popup_image_focus_window_g1

0xd114,	// (0x000687e1) popup_image_focus_window_g2

0xd11c,	// (0x000687e9) popup_image_focus_window_g3

0xd124,	// (0x000687f1) popup_image_focus_window_g4

0x0003,

0x060e,	// (0x0005bcdb) popup_image_focus_window_g

0xd12c,	// (0x000687f9) popup_image_focus_window_t1

0xd13a,	// (0x00068807) popup_image_focus_window_t2

0xd14a,	// (0x00068817) popup_image_focus_window_t3

0x0002,

0x0617,	// (0x0005bce4) popup_image_focus_window_t

0xd158,	// (0x00068825) camera2_autofocus_pane_g1

0xa733,	// (0x00065e00) bg_tb_trans_pane_cp01

0xd166,	// (0x00068833) popup_image_details_window_g1

0xd179,	// (0x00068846) popup_image_details_window_g2

0x0002,

0x0629,	// (0x0005bcf6) popup_image_details_window_g

0xd1a2,	// (0x0006886f) popup_image_details_window_t1

0xd1b4,	// (0x00068881) popup_image_details_window_t2

0xd1cd,	// (0x0006889a) popup_image_details_window_t3

0xd1e1,	// (0x000688ae) popup_image_details_window_t4

0xd1fc,	// (0x000688c9) popup_image_details_window_t5

0x0004,

0x0630,	// (0x0005bcfd) popup_image_details_window_t

0xacd0,	// (0x0006639d) bg_calc_paper_pane_ParamLimits

0x11cf,	// (0x0005c89c) grid_highlight_pane_cp013

0x1527,	// (0x0005cbf4) list_calc_pane_ParamLimits

0x1539,	// (0x0005cc06) scroll_pane_cp024

0xace4,	// (0x000663b1) bg_calc_display_pane_ParamLimits

0x1541,	// (0x0005cc0e) calc_display_pane_t1_ParamLimits

0x1556,	// (0x0005cc23) calc_display_pane_t2_ParamLimits

0x156b,	// (0x0005cc38) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x0006a827) calc_display_pane_t_ParamLimits

0x164c,	// (0x0005cd19) cell_calc_pane_g2

0x0001,

0xf177,	// (0x0006a844) cell_calc_pane_g

0x1655,	// (0x0005cd22) cell_calc_pane_t1

0xad43,	// (0x00066410) grid_highlight_pane_cp02_ParamLimits

0xad59,	// (0x00066426) toolbar_button_pane_cp01_ParamLimits

0xad59,	// (0x00066426) toolbar_button_pane_cp01

0xba8d,	// (0x0006715a) temp_image_control_pane_ParamLimits

0xba8d,	// (0x0006715a) temp_image_control_pane

0x460e,	// (0x0005fcdb) main_mp3_pane

0xd216,	// (0x000688e3) temp_image_control_pane_g1_ParamLimits

0xd216,	// (0x000688e3) temp_image_control_pane_g1

0xd224,	// (0x000688f1) temp_image_control_pane_g2_ParamLimits

0xd224,	// (0x000688f1) temp_image_control_pane_g2

0xd236,	// (0x00068903) temp_image_control_pane_g3_ParamLimits

0xd236,	// (0x00068903) temp_image_control_pane_g3

0x5035,	// (0x00060702) temp_image_control_pane_g4_ParamLimits

0x5035,	// (0x00060702) temp_image_control_pane_g4

0x0003,

0xf5c6,	// (0x0006ac93) temp_image_control_pane_g_ParamLimits

0xf5c6,	// (0x0006ac93) temp_image_control_pane_g

0xd216,	// (0x000688e3) main_mp3_pane_g1

0x5046,	// (0x00060713) main_mp3_pane_g2

0x0007,

0xf5cf,	// (0x0006ac9c) main_mp3_pane_g

0xd279,	// (0x00068946) main_mp3_pane_t1

0xaebd,	// (0x0006658a) main_camera_pane_g8_ParamLimits

0xaebd,	// (0x0006658a) main_camera_pane_g8

0x1f1f,	// (0x0005d5ec) main_video_pane_g7_ParamLimits

0x1f1f,	// (0x0005d5ec) main_video_pane_g7

0x4b24,	// (0x000601f1) main_camera2_pane_t7_ParamLimits

0x4b24,	// (0x000601f1) main_camera2_pane_t7

0xb005,	// (0x000666d2) scroll_pane_cp025_ParamLimits

0xb005,	// (0x000666d2) scroll_pane_cp025

0xb019,	// (0x000666e6) scroll_pane_cp026_ParamLimits

0xb019,	// (0x000666e6) scroll_pane_cp026

0xb028,	// (0x000666f5) wml_content_pane_ParamLimits

0x11cf,	// (0x0005c89c) main_touch_calib_pane

0x50ea,	// (0x000607b7) main_touch_calib_pane_g1

0x50f6,	// (0x000607c3) main_touch_calib_pane_g2

0x5102,	// (0x000607cf) main_touch_calib_pane_g3

0x510e,	// (0x000607db) main_touch_calib_pane_g4

0x0003,

0xf5ed,	// (0x0006acba) main_touch_calib_pane_g

0x511a,	// (0x000607e7) main_touch_calib_pane_t1

0x5133,	// (0x00060800) main_touch_calib_pane_t2

0x0004,

0xf5f6,	// (0x0006acc3) main_touch_calib_pane_t

0xb701,	// (0x00066dce) mup_progress_pane_cp02

0xb720,	// (0x00066ded) navi_pane_g1

0xb782,	// (0x00066e4f) navi_pane_mp_t3

0x460e,	// (0x0005fcdb) main_mp3_pane_ParamLimits

0x4779,	// (0x0005fe46) navi_pane_ParamLimits

0xd216,	// (0x000688e3) main_mp3_pane_g1_ParamLimits

0x5046,	// (0x00060713) main_mp3_pane_g2_ParamLimits

0x5052,	// (0x0006071f) main_mp3_pane_g3_ParamLimits

0x5052,	// (0x0006071f) main_mp3_pane_g3

0x505e,	// (0x0006072b) main_mp3_pane_g4_ParamLimits

0x505e,	// (0x0006072b) main_mp3_pane_g4

0xd246,	// (0x00068913) main_mp3_pane_g5_ParamLimits

0xd246,	// (0x00068913) main_mp3_pane_g5

0xd254,	// (0x00068921) main_mp3_pane_g6_ParamLimits

0xd254,	// (0x00068921) main_mp3_pane_g6

0xd261,	// (0x0006892e) main_mp3_pane_g7_ParamLimits

0xd261,	// (0x0006892e) main_mp3_pane_g7

0xd26d,	// (0x0006893a) main_mp3_pane_g8_ParamLimits

0xd26d,	// (0x0006893a) main_mp3_pane_g8

0xf5cf,	// (0x0006ac9c) main_mp3_pane_g_ParamLimits

0x506a,	// (0x00060737) main_mp3_pane_t2

0x507a,	// (0x00060747) main_mp3_pane_t3

0xd287,	// (0x00068954) main_mp3_pane_t4

0xd295,	// (0x00068962) main_mp3_pane_t5

0x0005,

0xf5e0,	// (0x0006acad) main_mp3_pane_t

0xd2a3,	// (0x00068970) mup_progress_pane_cp01

0x0e29,	// (0x0005c4f6) aid_zoom_text_secondary2

0xd060,	// (0x0006872d) list_cale_ev2_pane

0xd068,	// (0x00068735) scroll_pane_cp023_ParamLimits

0x518e,	// (0x0006085b) field_cale_ev2_pane_ParamLimits

0x518e,	// (0x0006085b) field_cale_ev2_pane

0x9c9e,	// (0x0006536b) field_cale_ev2_pane_g1_ParamLimits

0x9c9e,	// (0x0006536b) field_cale_ev2_pane_g1

0x9caa,	// (0x00065377) field_cale_ev2_pane_g2_ParamLimits

0x9caa,	// (0x00065377) field_cale_ev2_pane_g2

0x9cc2,	// (0x0006538f) field_cale_ev2_pane_g3_ParamLimits

0x9cc2,	// (0x0006538f) field_cale_ev2_pane_g3

0x0003,

0xf601,	// (0x0006acce) field_cale_ev2_pane_g_ParamLimits

0xf601,	// (0x0006acce) field_cale_ev2_pane_g

0x9ce6,	// (0x000653b3) field_cale_ev2_pane_t1_ParamLimits

0x9ce6,	// (0x000653b3) field_cale_ev2_pane_t1

0x9cfd,	// (0x000653ca) field_cale_ev2_pane_t2_ParamLimits

0x9cfd,	// (0x000653ca) field_cale_ev2_pane_t2

0x0001,

0xf60a,	// (0x0006acd7) field_cale_ev2_pane_t_ParamLimits

0xf60a,	// (0x0006acd7) field_cale_ev2_pane_t

0x3f45,	// (0x0005f612) main_postcard_pane_g5_ParamLimits

0x3f45,	// (0x0005f612) main_postcard_pane_g5

0x3f53,	// (0x0005f620) main_postcard_pane_g6_ParamLimits

0x3f53,	// (0x0005f620) main_postcard_pane_g6

0x1d69,	// (0x0005d436) camera2_autofocus_pane_cp_ParamLimits

0x1d69,	// (0x0005d436) camera2_autofocus_pane_cp

0x460e,	// (0x0005fcdb) main_mup3_pane

0x51dc,	// (0x000608a9) main_mup3_pane_g1_ParamLimits

0x51dc,	// (0x000608a9) main_mup3_pane_g1

0x51fd,	// (0x000608ca) main_mup3_pane_g2_ParamLimits

0x51fd,	// (0x000608ca) main_mup3_pane_g2

0x5279,	// (0x00060946) main_mup3_pane_g3_ParamLimits

0x5279,	// (0x00060946) main_mup3_pane_g3

0x52bc,	// (0x00060989) main_mup3_pane_g4_ParamLimits

0x52bc,	// (0x00060989) main_mup3_pane_g4

0x52ff,	// (0x000609cc) main_mup3_pane_g5_ParamLimits

0x52ff,	// (0x000609cc) main_mup3_pane_g5

0x5344,	// (0x00060a11) main_mup3_pane_g6_ParamLimits

0x5344,	// (0x00060a11) main_mup3_pane_g6

0xd2ab,	// (0x00068978) main_mup3_pane_g7_ParamLimits

0xd2ab,	// (0x00068978) main_mup3_pane_g7

0x0007,

0xf61a,	// (0x0006ace7) main_mup3_pane_g_ParamLimits

0xf61a,	// (0x0006ace7) main_mup3_pane_g

0x53ba,	// (0x00060a87) main_mup3_pane_t1_ParamLimits

0x53ba,	// (0x00060a87) main_mup3_pane_t1

0x5429,	// (0x00060af6) main_mup3_pane_t2_ParamLimits

0x5429,	// (0x00060af6) main_mup3_pane_t2

0x54f2,	// (0x00060bbf) main_mup3_pane_t4_ParamLimits

0x54f2,	// (0x00060bbf) main_mup3_pane_t4

0x5540,	// (0x00060c0d) main_mup3_pane_t5_ParamLimits

0x5540,	// (0x00060c0d) main_mup3_pane_t5

0x55f0,	// (0x00060cbd) main_mup3_pane_t6_ParamLimits

0x55f0,	// (0x00060cbd) main_mup3_pane_t6

0x0005,

0xf62b,	// (0x0006acf8) main_mup3_pane_t_ParamLimits

0xf62b,	// (0x0006acf8) main_mup3_pane_t

0x569c,	// (0x00060d69) mup3_progress_pane_ParamLimits

0x569c,	// (0x00060d69) mup3_progress_pane

0x5710,	// (0x00060ddd) popup_mup3_control_window_ParamLimits

0x5710,	// (0x00060ddd) popup_mup3_control_window

0xd2b9,	// (0x00068986) popup_mup3_text_window

0x5729,	// (0x00060df6) mup3_progress_pane_t1

0x5748,	// (0x00060e15) mup3_progress_pane_t2

0xd2c1,	// (0x0006898e) mup3_progress_pane_t3

0x0002,

0xf638,	// (0x0006ad05) mup3_progress_pane_t

0xd2de,	// (0x000689ab) mup_progress_pane_cp03

0x9b3d,	// (0x0006520a) bg_tb_trans_pane_cp04

0x5767,	// (0x00060e34) mup3_volume_pane

0x576f,	// (0x00060e3c) popup_mup3_control_window_g1

0x5778,	// (0x00060e45) mup3_volume_pane_g1

0x5781,	// (0x00060e4e) mup3_volume_pane_g2

0x578a,	// (0x00060e57) mup3_volume_pane_g3

0x0002,

0xf63f,	// (0x0006ad0c) mup3_volume_pane_g

0x9b3d,	// (0x0006520a) bg_tb_trans_pane_cp03

0xd2ee,	// (0x000689bb) popup_mup3_text_window_g1

0xd2f6,	// (0x000689c3) popup_mup3_text_window_t1

0xad2c,	// (0x000663f9) list_calc_item_pane_g1_ParamLimits

0xcd37,	// (0x00068404) mup_volume_pane_cp_g1

0x514c,	// (0x00060819) main_touch_calib_pane_t3

0x5162,	// (0x0006082f) main_touch_calib_pane_t4

0x5178,	// (0x00060845) main_touch_calib_pane_t5

0x0f04,	// (0x0005c5d1) aid_cell_size_toolbar2

0x0f0c,	// (0x0005c5d9) aid_popup3_width_pane

0x0e21,	// (0x0005c4ee) aid_zoom_text_msg_primary

0x1d40,	// (0x0005d40d) vorec_t7

0xacf0,	// (0x000663bd) bg_calc_paper_pane_g1_ParamLimits

0xad08,	// (0x000663d5) bg_calc_paper_pane_g2_ParamLimits

0xacfc,	// (0x000663c9) bg_calc_paper_pane_g3_ParamLimits

0xad14,	// (0x000663e1) bg_calc_paper_pane_g4_ParamLimits

0xad20,	// (0x000663ed) bg_calc_paper_pane_g5_ParamLimits

0x15aa,	// (0x0005cc77) bg_calc_paper_pane_g6_ParamLimits

0x15bb,	// (0x0005cc88) bg_calc_paper_pane_g7_ParamLimits

0x15cc,	// (0x0005cc99) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x0006a82e) bg_calc_paper_pane_g_ParamLimits

0x15dd,	// (0x0005ccaa) calc_bg_paper_pane_g9_ParamLimits

0x1e50,	// (0x0005d51d) image_qvga_pane_ParamLimits

0x1e50,	// (0x0005d51d) image_qvga_pane

0xac00,	// (0x000662cd) bg_popup_sub_pane_cp04_ParamLimits

0xb9c4,	// (0x00067091) popup_mup_playback_window_g1_ParamLimits

0xb9d0,	// (0x0006709d) popup_mup_playback_window_t1_ParamLimits

0xb9e5,	// (0x000670b2) popup_mup_playback_window_t2_ParamLimits

0x03f3,	// (0x0005bac0) popup_mup_playback_window_t_ParamLimits

0x4c53,	// (0x00060320) main_mup2_pane_g3_ParamLimits

0x4c53,	// (0x00060320) main_mup2_pane_g3

0x21e0,	// (0x0005d8ad) popup_toolbar_window_cp04

0xbdda,	// (0x000674a7) popup_call2_audio_second_window_g3_ParamLimits

0xbdda,	// (0x000674a7) popup_call2_audio_second_window_g3

0xc1e4,	// (0x000678b1) popup_call2_audio_first_window_g4_ParamLimits

0xc1e4,	// (0x000678b1) popup_call2_audio_first_window_g4

0xc863,	// (0x00067f30) popup_call2_audio_in_window_g4_ParamLimits

0xc863,	// (0x00067f30) popup_call2_audio_in_window_g4

0x405d,	// (0x0005f72a) aid_area_sk_bg_cut_ParamLimits

0x405d,	// (0x0005f72a) aid_area_sk_bg_cut

0xb9fa,	// (0x000670c7) aid_area_sk_bg_cut_2_ParamLimits

0xb9fa,	// (0x000670c7) aid_area_sk_bg_cut_2

0x4fdb,	// (0x000606a8) aid_placing_details_win

0x4fe3,	// (0x000606b0) aid_placing_details_win_2

0xd158,	// (0x00068825) camera2_autofocus_pane_g1_ParamLimits

0x115b,	// (0x0005c828) popup_fixed_preview_cale_window_ParamLimits

0x115b,	// (0x0005c828) popup_fixed_preview_cale_window

0xb7da,	// (0x00066ea7) navi_slider_pane_g3

0xb7e3,	// (0x00066eb0) navi_slider_pane_g4

0xb7d1,	// (0x00066e9e) navi_slider_pane_g5

0xb7da,	// (0x00066ea7) navi_slider_pane_g6

0x3946,	// (0x0005f013) navi_slider_pane_g7

0xb904,	// (0x00066fd1) mup_scale_pane_g3

0xb90d,	// (0x00066fda) mup_scale_pane_g4

0xb916,	// (0x00066fe3) mup_scale_pane_g5

0x3d85,	// (0x0005f452) mup_scale_pane_g6

0x3d8e,	// (0x0005f45b) mup_scale_pane_g7

0xb7da,	// (0x00066ea7) cams2_slider_pane_g3

0xcdb9,	// (0x00068486) cams2_slider_pane_g4

0x4f33,	// (0x00060600) cams2_slider_pane_g5

0xb7da,	// (0x00066ea7) cams2_slider_pane_g6

0x4f3b,	// (0x00060608) cams2_slider_pane_g7

0xcfe6,	// (0x000686b3) camera2_autofocus_pane_cp_g1

0xcbc4,	// (0x00068291) bg_popup_preview_window_pane_cp02_ParamLimits

0xcbc4,	// (0x00068291) bg_popup_preview_window_pane_cp02

0xd304,	// (0x000689d1) list_fp_cale_pane_ParamLimits

0xd304,	// (0x000689d1) list_fp_cale_pane

0xd310,	// (0x000689dd) popup_fixed_preview_cale_window_t1_ParamLimits

0xd310,	// (0x000689dd) popup_fixed_preview_cale_window_t1

0x5793,	// (0x00060e60) popup_fixed_preview_cale_window_t2_ParamLimits

0x5793,	// (0x00060e60) popup_fixed_preview_cale_window_t2

0x57a8,	// (0x00060e75) popup_fixed_preview_cale_window_t3_ParamLimits

0x57a8,	// (0x00060e75) popup_fixed_preview_cale_window_t3

0x0002,

0xf646,	// (0x0006ad13) popup_fixed_preview_cale_window_t_ParamLimits

0xf646,	// (0x0006ad13) popup_fixed_preview_cale_window_t

0x57bd,	// (0x00060e8a) list_single_fp_cale_pane_ParamLimits

0x57bd,	// (0x00060e8a) list_single_fp_cale_pane

0xd32e,	// (0x000689fb) list_single_fp_cale_pane_g1_ParamLimits

0xd32e,	// (0x000689fb) list_single_fp_cale_pane_g1

0xd33a,	// (0x00068a07) list_single_fp_cale_pane_g2_ParamLimits

0xd33a,	// (0x00068a07) list_single_fp_cale_pane_g2

0x0002,

0x06c2,	// (0x0005bd8f) list_single_fp_cale_pane_g_ParamLimits

0x06c2,	// (0x0005bd8f) list_single_fp_cale_pane_g

0xd353,	// (0x00068a20) list_single_fp_cale_pane_t1_ParamLimits

0xd353,	// (0x00068a20) list_single_fp_cale_pane_t1

0xd365,	// (0x00068a32) list_single_fp_cale_pane_t2_ParamLimits

0xd365,	// (0x00068a32) list_single_fp_cale_pane_t2

0x0001,

0x06c9,	// (0x0005bd96) list_single_fp_cale_pane_t_ParamLimits

0x06c9,	// (0x0005bd96) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x11cf,	// (0x0005c89c) main_dialer_pane

0x57d1,	// (0x00060e9e) aid_cell_size_keypad

0x57db,	// (0x00060ea8) dialer_ne_pane

0x57e5,	// (0x00060eb2) grid_dialer_command_1_pane

0x57ed,	// (0x00060eba) grid_dialer_command_2_pane

0x57f5,	// (0x00060ec2) grid_dialer_keypad_pane

0x5809,	// (0x00060ed6) bg_popup_call_pane_cp06_ParamLimits

0x5809,	// (0x00060ed6) bg_popup_call_pane_cp06

0x5815,	// (0x00060ee2) dialer_ne_clear_pane_ParamLimits

0x5815,	// (0x00060ee2) dialer_ne_clear_pane

0xd398,	// (0x00068a65) dialer_ne_pane_g1

0xd3a0,	// (0x00068a6d) dialer_ne_pane_t1_ParamLimits

0xd3a0,	// (0x00068a6d) dialer_ne_pane_t1

0x5821,	// (0x00060eee) dialer_ne_pane_t2_ParamLimits

0x5821,	// (0x00060eee) dialer_ne_pane_t2

0x583e,	// (0x00060f0b) dialer_ne_pane_t3_ParamLimits

0x583e,	// (0x00060f0b) dialer_ne_pane_t3

0x0002,

0xf64d,	// (0x0006ad1a) dialer_ne_pane_t_ParamLimits

0xf64d,	// (0x0006ad1a) dialer_ne_pane_t

0x5862,	// (0x00060f2f) dialer_ne_pane_t3_copy1_ParamLimits

0x5862,	// (0x00060f2f) dialer_ne_pane_t3_copy1

0x5886,	// (0x00060f53) cell_dialer_keypad_pane_ParamLimits

0x5886,	// (0x00060f53) cell_dialer_keypad_pane

0x589d,	// (0x00060f6a) cell_dialer_command_1_pane_ParamLimits

0x589d,	// (0x00060f6a) cell_dialer_command_1_pane

0x58b3,	// (0x00060f80) cell_dialer_command_2_pane_ParamLimits

0x58b3,	// (0x00060f80) cell_dialer_command_2_pane

0xd3b2,	// (0x00068a7f) bg_button_pane_cp02_ParamLimits

0xd3b2,	// (0x00068a7f) bg_button_pane_cp02

0x58c2,	// (0x00060f8f) cell_dialer_keypad_pane_g1_ParamLimits

0x58c2,	// (0x00060f8f) cell_dialer_keypad_pane_g1

0xd3b2,	// (0x00068a7f) bg_button_pane_cp03_ParamLimits

0xd3b2,	// (0x00068a7f) bg_button_pane_cp03

0x58d7,	// (0x00060fa4) cell_dialer_command_1_pane_g1_ParamLimits

0x58d7,	// (0x00060fa4) cell_dialer_command_1_pane_g1

0xd3be,	// (0x00068a8b) bg_button_pane_cp04

0x58eb,	// (0x00060fb8) cell_dialer_command_2_pane_g1

0xb7c0,	// (0x00066e8d) bg_button_pane_cp06

0xd3c6,	// (0x00068a93) dialer_ne_clear_pane_g1

0x3881,	// (0x0005ef4e) navi_pane_g2

0x38af,	// (0x0005ef7c) navi_pane_g3

0x0002,

0xf3c5,	// (0x0006aa92) navi_pane_g

0x38da,	// (0x0005efa7) navi_pane_mv_g2

0x3901,	// (0x0005efce) navi_pane_mv_g5

0x3909,	// (0x0005efd6) navi_pane_mv_t1

0xace4,	// (0x000663b1) main_clock2_pane

0x592b,	// (0x00060ff8) main_clock2_list_pane_ParamLimits

0x592b,	// (0x00060ff8) main_clock2_list_pane

0x5955,	// (0x00061022) main_clock2_pane_t1_ParamLimits

0x5955,	// (0x00061022) main_clock2_pane_t1

0x5979,	// (0x00061046) main_clock2_pane_t2_ParamLimits

0x5979,	// (0x00061046) main_clock2_pane_t2

0x0004,

0xf654,	// (0x0006ad21) main_clock2_pane_t_ParamLimits

0xf654,	// (0x0006ad21) main_clock2_pane_t

0x59d4,	// (0x000610a1) popup_clock_analogue_window_cp03_ParamLimits

0x59d4,	// (0x000610a1) popup_clock_analogue_window_cp03

0x59f2,	// (0x000610bf) popup_clock_digital_window_cp02_ParamLimits

0x59f2,	// (0x000610bf) popup_clock_digital_window_cp02

0x5a61,	// (0x0006112e) main_clock2_list_single_pane_ParamLimits

0x5a61,	// (0x0006112e) main_clock2_list_single_pane

0xb7c0,	// (0x00066e8d) list_highlight_pane_cp05

0xd3e4,	// (0x00068ab1) main_clock2_list_single_pane_t1

0x21e0,	// (0x0005d8ad) popup_toolbar_window_cp04_ParamLimits

0x5005,	// (0x000606d2) camera2_autofocus_pane_g2_ParamLimits

0x5005,	// (0x000606d2) camera2_autofocus_pane_g2

0x5011,	// (0x000606de) camera2_autofocus_pane_g3_ParamLimits

0x5011,	// (0x000606de) camera2_autofocus_pane_g3

0x501d,	// (0x000606ea) camera2_autofocus_pane_g4_ParamLimits

0x501d,	// (0x000606ea) camera2_autofocus_pane_g4

0x5029,	// (0x000606f6) camera2_autofocus_pane_g5_ParamLimits

0x5029,	// (0x000606f6) camera2_autofocus_pane_g5

0x0004,

0xf5bb,	// (0x0006ac88) camera2_autofocus_pane_g_ParamLimits

0xf5bb,	// (0x0006ac88) camera2_autofocus_pane_g

0x51bc,	// (0x00060889) camera2_autofocus_pane_cp_g2

0x51c4,	// (0x00060891) camera2_autofocus_pane_cp_g3

0x51cc,	// (0x00060899) camera2_autofocus_pane_cp_g4

0x51d4,	// (0x000608a1) camera2_autofocus_pane_cp_g5

0x0004,

0xf60f,	// (0x0006acdc) camera2_autofocus_pane_cp_g

0x5801,	// (0x00060ece) popup_dialer_spcha_window

0x9b3d,	// (0x0006520a) bg_popup_sub_pane_cp07

0xd3f2,	// (0x00068abf) list_spcha_pane

0xd3fa,	// (0x00068ac7) list_single_spcha_pane_ParamLimits

0xd3fa,	// (0x00068ac7) list_single_spcha_pane

0x9b3d,	// (0x0006520a) list_highlight_pane_cp06

0xd40b,	// (0x00068ad8) list_single_spcha_pane_t1

0xc60d,	// (0x00067cda) popup_call2_audio_out_window_g4_ParamLimits

0xc60d,	// (0x00067cda) popup_call2_audio_out_window_g4

0x11cf,	// (0x0005c89c) main_imed2_pane

0x46a8,	// (0x0005fd75) popup_imed_adjust2_window

0x46bb,	// (0x0005fd88) popup_imed_trans_window_ParamLimits

0x46bb,	// (0x0005fd88) popup_imed_trans_window

0xce22,	// (0x000684ef) popup_blid_sat_info2_window_t1

0xce30,	// (0x000684fd) popup_blid_sat_info2_window_t2

0x000a,

0x05b3,	// (0x0005bc80) popup_blid_sat_info2_window_t

0x5b0b,	// (0x000611d8) aid_size_cell_colour_35

0x5b25,	// (0x000611f2) aid_size_cell_colour_112

0x5b3c,	// (0x00061209) aid_size_cell_effect

0xa733,	// (0x00065e00) bg_tb_trans_pane_cp02

0xb3ae,	// (0x00066a7b) heading_imed_pane

0x5b56,	// (0x00061223) listscroll_imed_pane

0xd419,	// (0x00068ae6) heading_imed_pane_g1

0xd421,	// (0x00068aee) heading_imed_pane_t1

0xd42f,	// (0x00068afc) grid_imed_colour_35_pane_ParamLimits

0xd42f,	// (0x00068afc) grid_imed_colour_35_pane

0x5b62,	// (0x0006122f) grid_imed_effect_pane

0xd447,	// (0x00068b14) list_imed_aspect_pane

0x5b72,	// (0x0006123f) scroll_pane_cp027_ParamLimits

0x5b72,	// (0x0006123f) scroll_pane_cp027

0x5b7e,	// (0x0006124b) cell_imed_effect_pane_ParamLimits

0x5b7e,	// (0x0006124b) cell_imed_effect_pane

0xd44f,	// (0x00068b1c) cell_imed_colour_pane_ParamLimits

0xd44f,	// (0x00068b1c) cell_imed_colour_pane

0xd491,	// (0x00068b5e) cell_imed_colour_pane_g1_ParamLimits

0xd491,	// (0x00068b5e) cell_imed_colour_pane_g1

0xd4a2,	// (0x00068b6f) hgihlgiht_grid_pane_cp016_ParamLimits

0xd4a2,	// (0x00068b6f) hgihlgiht_grid_pane_cp016

0x5b96,	// (0x00061263) cell_imed_effect_pane_g1

0x5b9e,	// (0x0006126b) grid_highlight_pane_cp017

0xd4b3,	// (0x00068b80) list_imed_single_pane_ParamLimits

0xd4b3,	// (0x00068b80) list_imed_single_pane

0x9b3d,	// (0x0006520a) list_highlight_pane_cp07

0xd4c9,	// (0x00068b96) list_imed_aspect_pane_comp1_t1

0xcbd0,	// (0x0006829d) bg_tb_trans_pane_cp05

0xd4eb,	// (0x00068bb8) popup_imed_adjust2_window_g1

0xd512,	// (0x00068bdf) popup_imed_adjust2_window_t1

0xd52a,	// (0x00068bf7) slider_imed_adjust_pane

0xd53e,	// (0x00068c0b) slider_imed_adjust_pane_g1

0xd54e,	// (0x00068c1b) slider_imed_adjust_pane_g2

0xd55e,	// (0x00068c2b) slider_imed_adjust_pane_g3

0xd56f,	// (0x00068c3c) slider_imed_adjust_pane_g4

0x0003,

0x06f2,	// (0x0005bdbf) slider_imed_adjust_pane_g

0x5ba7,	// (0x00061274) aid_size_cell_clipart2

0x5bb3,	// (0x00061280) grid_imed_clipart_pane

0xd580,	// (0x00068c4d) scroll_pane_cp031

0x5bbd,	// (0x0006128a) cell_imed_clipart_pane_ParamLimits

0x5bbd,	// (0x0006128a) cell_imed_clipart_pane

0x5be4,	// (0x000612b1) cell_imed_clipart_pane_g1

0x9b3d,	// (0x0006520a) grid_highlight_pane_cp014

0x5937,	// (0x00061004) main_clock2_pane_g1_ParamLimits

0x5937,	// (0x00061004) main_clock2_pane_g1

0x5a0c,	// (0x000610d9) aid_call2_pane_cp10

0x5a1e,	// (0x000610eb) aid_call_pane_cp10

0xb6f5,	// (0x00066dc2) popup_clock_analogue_window_cp10_g1

0xb6f5,	// (0x00066dc2) popup_clock_analogue_window_cp10_g2

0x5a30,	// (0x000610fd) popup_clock_analogue_window_cp10_g3

0x5a30,	// (0x000610fd) popup_clock_analogue_window_cp10_g4

0xb6f5,	// (0x00066dc2) popup_clock_analogue_window_cp10_g5

0x0004,

0xf65f,	// (0x0006ad2c) popup_clock_analogue_window_cp10_g

0x5a42,	// (0x0006110f) popup_clock_analogue_window_cp10_t1

0x5a73,	// (0x00061140) clock_digital_number_pane_cp10_ParamLimits

0x5a73,	// (0x00061140) clock_digital_number_pane_cp10

0x5a8b,	// (0x00061158) clock_digital_number_pane_cp11_ParamLimits

0x5a8b,	// (0x00061158) clock_digital_number_pane_cp11

0x5aa3,	// (0x00061170) clock_digital_number_pane_cp12_ParamLimits

0x5aa3,	// (0x00061170) clock_digital_number_pane_cp12

0x5abb,	// (0x00061188) clock_digital_number_pane_cp13_ParamLimits

0x5abb,	// (0x00061188) clock_digital_number_pane_cp13

0x5ad3,	// (0x000611a0) clock_digital_separator_pane_cp10_ParamLimits

0x5ad3,	// (0x000611a0) clock_digital_separator_pane_cp10

0x5aeb,	// (0x000611b8) popup_clock_digital_window_cp02_t1_ParamLimits

0x5aeb,	// (0x000611b8) popup_clock_digital_window_cp02_t1

0xabf8,	// (0x000662c5) clock_digital_number_pane_cp10_g1

0xabf8,	// (0x000662c5) clock_digital_number_pane_cp10_g2

0x0001,

0xf66a,	// (0x0006ad37) clock_digital_number_pane_cp10_g

0xabf8,	// (0x000662c5) clock_digital_separator_pane_cp10_g1

0xabf8,	// (0x000662c5) clock_digital_separator_pane_g2_cp10

0xb790,	// (0x00066e5d) navi_pane_vded_g4

0xb799,	// (0x00066e66) navi_pane_vded_g5

0xb7a2,	// (0x00066e6f) navi_pane_vded_t1

0x11cf,	// (0x0005c89c) main_vded_pane

0x5bed,	// (0x000612ba) main_vded_pane_g1

0x5bf9,	// (0x000612c6) main_vded_pane_g2

0x5c03,	// (0x000612d0) main_vded_pane_g3

0x0002,

0xf66f,	// (0x0006ad3c) main_vded_pane_g

0x5c0d,	// (0x000612da) main_vded_pane_t1

0x5c1b,	// (0x000612e8) main_vded_pane_t2

0x0001,

0xf676,	// (0x0006ad43) main_vded_pane_t

0x5c29,	// (0x000612f6) vded_slider_pane

0x5c33,	// (0x00061300) vded_video_pane

0xd588,	// (0x00068c55) vded_video_pane_g1

0x5c3d,	// (0x0006130a) vded_video_pane_g2

0xcfe6,	// (0x000686b3) vded_video_pane_g3

0x0002,

0xf67b,	// (0x0006ad48) vded_video_pane_g

0xd592,	// (0x00068c5f) vded_slider_pane_g1

0xd59b,	// (0x00068c68) vded_slider_pane_g2

0xd5a4,	// (0x00068c71) vded_slider_pane_g3

0xd5ad,	// (0x00068c7a) vded_slider_pane_g4

0xd5b6,	// (0x00068c83) vded_slider_pane_g5

0x0004,

0x0713,	// (0x0005bde0) vded_slider_pane_g

0x5702,	// (0x00060dcf) mup3_rocker_pane_ParamLimits

0x5702,	// (0x00060dcf) mup3_rocker_pane

0x5c46,	// (0x00061313) mup3_control_keys_pane_g1

0x5c4e,	// (0x0006131b) mup3_control_keys_pane_g2

0x5c56,	// (0x00061323) mup3_control_keys_pane_g3

0x5c5e,	// (0x0006132b) mup3_control_keys_pane_g4

0x0003,

0xf682,	// (0x0006ad4f) mup3_control_keys_pane_g

0x1183,	// (0x0005c850) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1183,	// (0x0005c850) popup_toolbar2_fixed_window_cp01

0x571c,	// (0x00060de9) popup_toolbar2_fixed_window_cp02_ParamLimits

0x571c,	// (0x00060de9) popup_toolbar2_fixed_window_cp02

0xbf4c,	// (0x00067619) popup_call2_audio_second_window_t4_ParamLimits

0xbf4c,	// (0x00067619) popup_call2_audio_second_window_t4

0xc47a,	// (0x00067b47) popup_call2_audio_first_window_t6_ParamLimits

0xc47a,	// (0x00067b47) popup_call2_audio_first_window_t6

0xc710,	// (0x00067ddd) popup_call2_audio_out_window_t6_ParamLimits

0xc710,	// (0x00067ddd) popup_call2_audio_out_window_t6

0x11cf,	// (0x0005c89c) main_vitu_pane

0x5c6e,	// (0x0006133b) aid_size_cell_itu_ParamLimits

0x5c6e,	// (0x0006133b) aid_size_cell_itu

0xe5b9,	// (0x00069c86) bg_popup_window_pane_cp08_ParamLimits

0xe5b9,	// (0x00069c86) bg_popup_window_pane_cp08

0x5c7c,	// (0x00061349) field_vitu_entry_pane_ParamLimits

0x5c7c,	// (0x00061349) field_vitu_entry_pane

0x5c8b,	// (0x00061358) grid_vitu_function_pane_ParamLimits

0x5c8b,	// (0x00061358) grid_vitu_function_pane

0x5c9b,	// (0x00061368) grid_vitu_itu_pane_ParamLimits

0x5c9b,	// (0x00061368) grid_vitu_itu_pane

0x5cab,	// (0x00061378) cell_vitu_itu_pane_ParamLimits

0x5cab,	// (0x00061378) cell_vitu_itu_pane

0x5cc0,	// (0x0006138d) cell_vitu_function_pane_ParamLimits

0x5cc0,	// (0x0006138d) cell_vitu_function_pane

0xa733,	// (0x00065e00) bg_popup_sub_pane_cp08_ParamLimits

0xa733,	// (0x00065e00) bg_popup_sub_pane_cp08

0x5cd4,	// (0x000613a1) field_vitu_entry_pane_t1_ParamLimits

0x5cd4,	// (0x000613a1) field_vitu_entry_pane_t1

0xd5d7,	// (0x00068ca4) field_vitu_entry_pane_t2_ParamLimits

0xd5d7,	// (0x00068ca4) field_vitu_entry_pane_t2

0x0001,

0xf68b,	// (0x0006ad58) field_vitu_entry_pane_t_ParamLimits

0xf68b,	// (0x0006ad58) field_vitu_entry_pane_t

0xd5f4,	// (0x00068cc1) bg_button_pane_cp05_ParamLimits

0xd5f4,	// (0x00068cc1) bg_button_pane_cp05

0x5cf1,	// (0x000613be) cell_vitu_itu_pane_g1

0x5d09,	// (0x000613d6) cell_vitu_itu_pane_t1_ParamLimits

0x5d09,	// (0x000613d6) cell_vitu_itu_pane_t1

0x5d1b,	// (0x000613e8) cell_vitu_itu_pane_t2_ParamLimits

0x5d1b,	// (0x000613e8) cell_vitu_itu_pane_t2

0x0002,

0xf690,	// (0x0006ad5d) cell_vitu_itu_pane_t_ParamLimits

0xf690,	// (0x0006ad5d) cell_vitu_itu_pane_t

0xd602,	// (0x00068ccf) bg_button_pane_cp07

0x5d5e,	// (0x0006142b) cell_vitu_function_pane_g1

0x144e,	// (0x0005cb1b) main_calc_pane_g1

0x0f40,	// (0x0005c60d) aid_visual_content_pane

0x11cf,	// (0x0005c89c) main_vradio_pane

0x5d67,	// (0x00061434) main_vradio_pane_g1_ParamLimits

0x5d67,	// (0x00061434) main_vradio_pane_g1

0xd60c,	// (0x00068cd9) main_vradio_pane_g2_ParamLimits

0xd60c,	// (0x00068cd9) main_vradio_pane_g2

0x0001,

0xf697,	// (0x0006ad64) main_vradio_pane_g_ParamLimits

0xf697,	// (0x0006ad64) main_vradio_pane_g

0x5d77,	// (0x00061444) main_vradio_pane_t1_ParamLimits

0x5d77,	// (0x00061444) main_vradio_pane_t1

0x5d89,	// (0x00061456) main_vradio_pane_t2_ParamLimits

0x5d89,	// (0x00061456) main_vradio_pane_t2

0xd619,	// (0x00068ce6) main_vradio_pane_t3_ParamLimits

0xd619,	// (0x00068ce6) main_vradio_pane_t3

0x0002,

0xf69c,	// (0x0006ad69) main_vradio_pane_t_ParamLimits

0xf69c,	// (0x0006ad69) main_vradio_pane_t

0x5d9b,	// (0x00061468) vradio_rocker_control_pane_ParamLimits

0x5d9b,	// (0x00061468) vradio_rocker_control_pane

0x5da7,	// (0x00061474) vradio_station_info_pane_ParamLimits

0x5da7,	// (0x00061474) vradio_station_info_pane

0xd62d,	// (0x00068cfa) vradio_frequency_info_pane_ParamLimits

0xd62d,	// (0x00068cfa) vradio_frequency_info_pane

0xcfe6,	// (0x000686b3) vradio_station_info_pane_g1

0xd63c,	// (0x00068d09) vradio_station_info_pane_t1_ParamLimits

0xd63c,	// (0x00068d09) vradio_station_info_pane_t1

0xd65e,	// (0x00068d2b) vradio_station_info_pane_t2_ParamLimits

0xd65e,	// (0x00068d2b) vradio_station_info_pane_t2

0x0001,

0x0744,	// (0x0005be11) vradio_station_info_pane_t_ParamLimits

0x0744,	// (0x0005be11) vradio_station_info_pane_t

0xd670,	// (0x00068d3d) vradio_tuning_pane

0xd678,	// (0x00068d45) vradio_rocker_control_pane_g1

0xd680,	// (0x00068d4d) vradio_rocker_control_pane_g2

0xd688,	// (0x00068d55) vradio_rocker_control_pane_g3

0xd690,	// (0x00068d5d) vradio_rocker_control_pane_g4

0xd698,	// (0x00068d65) vradio_rocker_control_pane_g5

0x0004,

0x0749,	// (0x0005be16) vradio_rocker_control_pane_g

0x5db6,	// (0x00061483) vradio_frequency_info_pane_g1

0xd6a0,	// (0x00068d6d) vradio_frequency_info_pane_t1_ParamLimits

0xd6a0,	// (0x00068d6d) vradio_frequency_info_pane_t1

0x5dc0,	// (0x0006148d) vradio_tuning_pane_g1

0x5dc9,	// (0x00061496) vradio_tuning_pane_t1

0x0f89,	// (0x0005c656) area_side_right_pane_ParamLimits

0x0f89,	// (0x0005c656) area_side_right_pane

0xcb8b,	// (0x00068258) status_small_pane_g1

0xcb93,	// (0x00068260) status_small_pane_g2

0xcb9c,	// (0x00068269) status_small_pane_g3

0xcba5,	// (0x00068272) status_small_pane_g4

0x0003,

0x0509,	// (0x0005bbd6) status_small_pane_g

0xcbae,	// (0x0006827b) status_small_pane_t1

0x11cf,	// (0x0005c89c) main_video3_pane

0xd6b4,	// (0x00068d81) cams_zoom_vslider_pane

0xd6bc,	// (0x00068d89) image3_wide_pane_ParamLimits

0xd6bc,	// (0x00068d89) image3_wide_pane

0xd6d6,	// (0x00068da3) image3_wide_small_pane

0xd6e2,	// (0x00068daf) main_video3_pane_g1_ParamLimits

0xd6e2,	// (0x00068daf) main_video3_pane_g1

0xd6fe,	// (0x00068dcb) main_video3_pane_g2_ParamLimits

0xd6fe,	// (0x00068dcb) main_video3_pane_g2

0x0001,

0x0754,	// (0x0005be21) main_video3_pane_g_ParamLimits

0x0754,	// (0x0005be21) main_video3_pane_g

0xd71a,	// (0x00068de7) main_video3_pane_t1_ParamLimits

0xd71a,	// (0x00068de7) main_video3_pane_t1

0xd745,	// (0x00068e12) main_video3_pane_t2_ParamLimits

0xd745,	// (0x00068e12) main_video3_pane_t2

0xd770,	// (0x00068e3d) main_video3_pane_t3_ParamLimits

0xd770,	// (0x00068e3d) main_video3_pane_t3

0x0002,

0x0759,	// (0x0005be26) main_video3_pane_t_ParamLimits

0x0759,	// (0x0005be26) main_video3_pane_t

0xd79d,	// (0x00068e6a) cams_zoom_vslider_pane_g1

0xd7a6,	// (0x00068e73) cams_zoom_vslider_pane_g2

0x0001,

0x0760,	// (0x0005be2d) cams_zoom_vslider_pane_g

0xd7ae,	// (0x00068e7b) small_slider_vertical_pane

0xcfe6,	// (0x000686b3) small_slider_vertical_pane_g1

0xcfe6,	// (0x000686b3) small_slider_vertical_pane_g2

0xd7b6,	// (0x00068e83) small_slider_vertical_pane_g3

0x0002,

0x0765,	// (0x0005be32) small_slider_vertical_pane_g

0x11cf,	// (0x0005c89c) main_hwr_training_pane

0xd7bf,	// (0x00068e8c) hwr_training_instruct_pane_ParamLimits

0xd7bf,	// (0x00068e8c) hwr_training_instruct_pane

0x5dd8,	// (0x000614a5) hwr_training_navi_pane_ParamLimits

0x5dd8,	// (0x000614a5) hwr_training_navi_pane

0x5df2,	// (0x000614bf) hwr_training_write_pane_ParamLimits

0x5df2,	// (0x000614bf) hwr_training_write_pane

0x9b3d,	// (0x0006520a) bg_frame_shadow_pane

0xd7f6,	// (0x00068ec3) hwr_training_write_pane_g1

0xd7fe,	// (0x00068ecb) hwr_training_write_pane_g2

0xd806,	// (0x00068ed3) hwr_training_write_pane_g3

0xd80e,	// (0x00068edb) hwr_training_write_pane_g4

0xd816,	// (0x00068ee3) hwr_training_write_pane_g5

0xd81e,	// (0x00068eeb) hwr_training_write_pane_g6

0xd826,	// (0x00068ef3) hwr_training_write_pane_g7

0x0006,

0x076c,	// (0x0005be39) hwr_training_write_pane_g

0x5e2a,	// (0x000614f7) hwr_training_navi_pane_g1_ParamLimits

0x5e2a,	// (0x000614f7) hwr_training_navi_pane_g1

0x5e3c,	// (0x00061509) hwr_training_navi_pane_g2_ParamLimits

0x5e3c,	// (0x00061509) hwr_training_navi_pane_g2

0x5e4e,	// (0x0006151b) hwr_training_navi_pane_g3_ParamLimits

0x5e4e,	// (0x0006151b) hwr_training_navi_pane_g3

0x5e5e,	// (0x0006152b) hwr_training_navi_pane_g4_ParamLimits

0x5e5e,	// (0x0006152b) hwr_training_navi_pane_g4

0x0004,

0xf6a3,	// (0x0006ad70) hwr_training_navi_pane_g_ParamLimits

0xf6a3,	// (0x0006ad70) hwr_training_navi_pane_g

0x5e78,	// (0x00061545) hwr_training_navi_pane_t1

0x5e86,	// (0x00061553) list_single_hwr_training_instruct_pane_ParamLimits

0x5e86,	// (0x00061553) list_single_hwr_training_instruct_pane

0xd82e,	// (0x00068efb) list_single_hwr_training_instruct_pane_t1

0xcf26,	// (0x000685f3) bg_frame_shadow_pane_g1

0xd83d,	// (0x00068f0a) bg_frame_shadow_pane_g2

0xd845,	// (0x00068f12) bg_frame_shadow_pane_g3

0xd84d,	// (0x00068f1a) bg_frame_shadow_pane_g4

0xd855,	// (0x00068f22) bg_frame_shadow_pane_g5

0xd85d,	// (0x00068f2a) bg_frame_shadow_pane_g6

0xd865,	// (0x00068f32) bg_frame_shadow_pane_g7

0xadaf,	// (0x0006647c) bg_frame_shadow_pane_g8

0x0007,

0xf6ae,	// (0x0006ad7b) bg_frame_shadow_pane_g

0x11cf,	// (0x0005c89c) main_video_tele_dialer_pane

0x5eb5,	// (0x00061582) aid_size_cell_video_keypad_ParamLimits

0x5eb5,	// (0x00061582) aid_size_cell_video_keypad

0x5ec5,	// (0x00061592) grid_video_dialer_keypad_pane_ParamLimits

0x5ec5,	// (0x00061592) grid_video_dialer_keypad_pane

0x5ef9,	// (0x000615c6) video_down_pane_cp_ParamLimits

0x5ef9,	// (0x000615c6) video_down_pane_cp

0x5f23,	// (0x000615f0) cell_video_dialer_keypad_pane_ParamLimits

0x5f23,	// (0x000615f0) cell_video_dialer_keypad_pane

0xd86d,	// (0x00068f3a) bg_button_pane_cp08_ParamLimits

0xd86d,	// (0x00068f3a) bg_button_pane_cp08

0x5f38,	// (0x00061605) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5f38,	// (0x00061605) cell_video_dialer_keypad_pane_g1

0x56f6,	// (0x00060dc3) mup3_rocker2_pane_ParamLimits

0x56f6,	// (0x00060dc3) mup3_rocker2_pane

0xcfe6,	// (0x000686b3) mup3_rocker2_pane_g1

0x461c,	// (0x0005fce9) main_dialer2_pane

0x11cf,	// (0x0005c89c) main_mp4_pane

0x5f7b,	// (0x00061648) main_mp4_pane_g1_ParamLimits

0x5f7b,	// (0x00061648) main_mp4_pane_g1

0x5f89,	// (0x00061656) main_mp4_pane_g2_ParamLimits

0x5f89,	// (0x00061656) main_mp4_pane_g2

0x5f97,	// (0x00061664) main_mp4_pane_g3_ParamLimits

0x5f97,	// (0x00061664) main_mp4_pane_g3

0x5fdc,	// (0x000616a9) main_mp4_pane_g4_ParamLimits

0x5fdc,	// (0x000616a9) main_mp4_pane_g4

0x6004,	// (0x000616d1) main_mp4_pane_g5_ParamLimits

0x6004,	// (0x000616d1) main_mp4_pane_g5

0x0005,

0xf6ce,	// (0x0006ad9b) main_mp4_pane_g_ParamLimits

0xf6ce,	// (0x0006ad9b) main_mp4_pane_g

0x6054,	// (0x00061721) main_mp4_pane_t1_ParamLimits

0x6054,	// (0x00061721) main_mp4_pane_t1

0x60b0,	// (0x0006177d) main_mp4_pane_t2_ParamLimits

0x60b0,	// (0x0006177d) main_mp4_pane_t2

0xd879,	// (0x00068f46) main_mp4_pane_t3_ParamLimits

0xd879,	// (0x00068f46) main_mp4_pane_t3

0x6102,	// (0x000617cf) main_mp4_pane_t4_ParamLimits

0x6102,	// (0x000617cf) main_mp4_pane_t4

0x0003,

0xf6db,	// (0x0006ada8) main_mp4_pane_t_ParamLimits

0xf6db,	// (0x0006ada8) main_mp4_pane_t

0x6146,	// (0x00061813) mp4_progress_pane_ParamLimits

0x6146,	// (0x00061813) mp4_progress_pane

0x6190,	// (0x0006185d) mp4_rocker_pane_ParamLimits

0x6190,	// (0x0006185d) mp4_rocker_pane

0xd8a1,	// (0x00068f6e) mp4_progress_pane_t1

0xd8ba,	// (0x00068f87) mp4_progress_pane_t2

0x0001,

0x07bc,	// (0x0005be89) mp4_progress_pane_t

0xd8d3,	// (0x00068fa0) mup_progress_pane_cp04

0xe01b,	// (0x000696e8) mp4_rocker_pane_g1

0x61b0,	// (0x0006187d) aid_cell_size_keypad2_ParamLimits

0x61b0,	// (0x0006187d) aid_cell_size_keypad2

0x61c0,	// (0x0006188d) dialer2_ne_pane_ParamLimits

0x61c0,	// (0x0006188d) dialer2_ne_pane

0x61ce,	// (0x0006189b) grid_dialer2_keypad_pane_ParamLimits

0x61ce,	// (0x0006189b) grid_dialer2_keypad_pane

0xe07c,	// (0x00069749) bg_popup_call_pane_cp07_ParamLimits

0xe07c,	// (0x00069749) bg_popup_call_pane_cp07

0x61de,	// (0x000618ab) dialer2_ne_pane_t1_ParamLimits

0x61de,	// (0x000618ab) dialer2_ne_pane_t1

0x6203,	// (0x000618d0) cell_dialer2_keypad_pane_ParamLimits

0x6203,	// (0x000618d0) cell_dialer2_keypad_pane

0xd8f1,	// (0x00068fbe) bg_button_pane_pane_cp04_ParamLimits

0xd8f1,	// (0x00068fbe) bg_button_pane_pane_cp04

0x6218,	// (0x000618e5) cell_dialer2_keypad_pane_g1_ParamLimits

0x6218,	// (0x000618e5) cell_dialer2_keypad_pane_g1

0x20a2,	// (0x0005d76f) aid_placing_vt_set_content_ParamLimits

0x20a2,	// (0x0005d76f) aid_placing_vt_set_content

0x20ce,	// (0x0005d79b) aid_placing_vt_set_title_ParamLimits

0x20ce,	// (0x0005d79b) aid_placing_vt_set_title

0x11cf,	// (0x0005c89c) main_image3_pane

0x62b2,	// (0x0006197f) area_side_right_pane_cp01_ParamLimits

0x62b2,	// (0x0006197f) area_side_right_pane_cp01

0x62df,	// (0x000619ac) main_image3_pane_g1_ParamLimits

0x62df,	// (0x000619ac) main_image3_pane_g1

0x62ed,	// (0x000619ba) main_image3_pane_g2_ParamLimits

0x62ed,	// (0x000619ba) main_image3_pane_g2

0x6306,	// (0x000619d3) main_image3_pane_g3_ParamLimits

0x6306,	// (0x000619d3) main_image3_pane_g3

0x631f,	// (0x000619ec) main_image3_pane_g4_ParamLimits

0x631f,	// (0x000619ec) main_image3_pane_g4

0x0003,

0xf6ee,	// (0x0006adbb) main_image3_pane_g_ParamLimits

0xf6ee,	// (0x0006adbb) main_image3_pane_g

0x6338,	// (0x00061a05) main_image3_pane_t1_ParamLimits

0x6338,	// (0x00061a05) main_image3_pane_t1

0x635d,	// (0x00061a2a) main_image3_pane_t2_ParamLimits

0x635d,	// (0x00061a2a) main_image3_pane_t2

0x637c,	// (0x00061a49) main_image3_pane_t3_ParamLimits

0x637c,	// (0x00061a49) main_image3_pane_t3

0x0003,

0xf6f7,	// (0x0006adc4) main_image3_pane_t_ParamLimits

0xf6f7,	// (0x0006adc4) main_image3_pane_t

0xe5b9,	// (0x00069c86) grid_sctrl_middle_pane_cp01_ParamLimits

0xe5b9,	// (0x00069c86) grid_sctrl_middle_pane_cp01

0x63dd,	// (0x00061aaa) cell_sctrl_middle_pane_cp01_ParamLimits

0x63dd,	// (0x00061aaa) cell_sctrl_middle_pane_cp01

0x63ee,	// (0x00061abb) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x63ee,	// (0x00061abb) cell_sctrl_middle_pane_cp01_g1

0x11cf,	// (0x0005c89c) main_call4_pane

0x63fb,	// (0x00061ac8) aid_size_button_call4_ParamLimits

0x63fb,	// (0x00061ac8) aid_size_button_call4

0x642b,	// (0x00061af8) call4_windows_pane_ParamLimits

0x642b,	// (0x00061af8) call4_windows_pane

0x6445,	// (0x00061b12) grid_call4_button_pane_ParamLimits

0x6445,	// (0x00061b12) grid_call4_button_pane

0xd8fd,	// (0x00068fca) call4_windows_conf_pane

0xd912,	// (0x00068fdf) popup_call4_audio_first_window_ParamLimits

0xd912,	// (0x00068fdf) popup_call4_audio_first_window

0xd95e,	// (0x0006902b) popup_call4_audio_second_window_ParamLimits

0xd95e,	// (0x0006902b) popup_call4_audio_second_window

0xd972,	// (0x0006903f) popup_call4_audio_wait_window_ParamLimits

0xd972,	// (0x0006903f) popup_call4_audio_wait_window

0x6469,	// (0x00061b36) cell_call4_button_pane_ParamLimits

0x6469,	// (0x00061b36) cell_call4_button_pane

0x648e,	// (0x00061b5b) bg_button_pane_cp09_ParamLimits

0x648e,	// (0x00061b5b) bg_button_pane_cp09

0x649a,	// (0x00061b67) cell_call4_button_pane_g1_ParamLimits

0x649a,	// (0x00061b67) cell_call4_button_pane_g1

0x64a7,	// (0x00061b74) cell_call4_button_pane_t1_ParamLimits

0x64a7,	// (0x00061b74) cell_call4_button_pane_t1

0xd9ba,	// (0x00069087) popup_call4_audio_conf_window_ParamLimits

0xd9ba,	// (0x00069087) popup_call4_audio_conf_window

0x5729,	// (0x00060df6) mup3_progress_pane_t1_ParamLimits

0x5748,	// (0x00060e15) mup3_progress_pane_t2_ParamLimits

0xd2c1,	// (0x0006898e) mup3_progress_pane_t3_ParamLimits

0xf638,	// (0x0006ad05) mup3_progress_pane_t_ParamLimits

0xd2de,	// (0x000689ab) mup_progress_pane_cp03_ParamLimits

0x5c66,	// (0x00061333) mup3_control_keys_pane_g4_copy1

0x6174,	// (0x00061841) mp4_rocker2_pane_ParamLimits

0x6174,	// (0x00061841) mp4_rocker2_pane

0xd9ce,	// (0x0006909b) mp4_rocker2_pane_g1

0xd9d6,	// (0x000690a3) mp4_rocker2_pane_g2

0x64b9,	// (0x00061b86) mp4_rocker2_pane_g3

0x64c1,	// (0x00061b8e) mp4_rocker2_pane_g4

0x64c9,	// (0x00061b96) mp4_rocker2_pane_g5

0x0004,

0xf700,	// (0x0006adcd) mp4_rocker2_pane_g

0x11cf,	// (0x0005c89c) main_camera4_pane

0x11cf,	// (0x0005c89c) main_video4_pane

0x5ed5,	// (0x000615a2) main_video_tele_dialer_pane_t1_ParamLimits

0x5ed5,	// (0x000615a2) main_video_tele_dialer_pane_t1

0x5ee7,	// (0x000615b4) main_video_tele_dialer_pane_t2_ParamLimits

0x5ee7,	// (0x000615b4) main_video_tele_dialer_pane_t2

0x0001,

0xf6bf,	// (0x0006ad8c) main_video_tele_dialer_pane_t_ParamLimits

0xf6bf,	// (0x0006ad8c) main_video_tele_dialer_pane_t

0x64e9,	// (0x00061bb6) cam4_autofocus_pane_ParamLimits

0x64e9,	// (0x00061bb6) cam4_autofocus_pane

0x6503,	// (0x00061bd0) cam4_image_uncrop_pane_ParamLimits

0x6503,	// (0x00061bd0) cam4_image_uncrop_pane

0x651a,	// (0x00061be7) cam4_indicators_pane_ParamLimits

0x651a,	// (0x00061be7) cam4_indicators_pane

0x6536,	// (0x00061c03) main_camera4_pane_g1_ParamLimits

0x6536,	// (0x00061c03) main_camera4_pane_g1

0x6542,	// (0x00061c0f) main_camera4_pane_g2_ParamLimits

0x6542,	// (0x00061c0f) main_camera4_pane_g2

0x6542,	// (0x00061c0f) main_camera4_pane_g3_ParamLimits

0x6542,	// (0x00061c0f) main_camera4_pane_g3

0x654e,	// (0x00061c1b) main_camera4_pane_g4_ParamLimits

0x654e,	// (0x00061c1b) main_camera4_pane_g4

0x655a,	// (0x00061c27) main_camera4_pane_g5_ParamLimits

0x655a,	// (0x00061c27) main_camera4_pane_g5

0x0005,

0xf70b,	// (0x0006add8) main_camera4_pane_g_ParamLimits

0xf70b,	// (0x0006add8) main_camera4_pane_g

0x6574,	// (0x00061c41) main_camera4_pane_t1_ParamLimits

0x6574,	// (0x00061c41) main_camera4_pane_t1

0x65bc,	// (0x00061c89) bg_tb_trans_pane_cp06

0x65d2,	// (0x00061c9f) cam4_indicators_pane_g1

0x65e3,	// (0x00061cb0) cam4_indicators_pane_g2

0x0002,

0xf726,	// (0x0006adf3) cam4_indicators_pane_g

0x6601,	// (0x00061cce) cam4_indicators_pane_t1

0x662b,	// (0x00061cf8) main_video4_pane_g1_ParamLimits

0x662b,	// (0x00061cf8) main_video4_pane_g1

0x6637,	// (0x00061d04) main_video4_pane_g2_ParamLimits

0x6637,	// (0x00061d04) main_video4_pane_g2

0x6643,	// (0x00061d10) main_video4_pane_g3_ParamLimits

0x6643,	// (0x00061d10) main_video4_pane_g3

0x664f,	// (0x00061d1c) main_video4_pane_g4_ParamLimits

0x664f,	// (0x00061d1c) main_video4_pane_g4

0x0004,

0xf72d,	// (0x0006adfa) main_video4_pane_g_ParamLimits

0xf72d,	// (0x0006adfa) main_video4_pane_g

0x666f,	// (0x00061d3c) vid4_indicators_pane_ParamLimits

0x666f,	// (0x00061d3c) vid4_indicators_pane

0x668e,	// (0x00061d5b) video4_image_uncrop_cif_pane_ParamLimits

0x668e,	// (0x00061d5b) video4_image_uncrop_cif_pane

0x669d,	// (0x00061d6a) video4_image_uncrop_nhd_pane_ParamLimits

0x669d,	// (0x00061d6a) video4_image_uncrop_nhd_pane

0x6503,	// (0x00061bd0) video4_image_uncrop_vga_pane_ParamLimits

0x6503,	// (0x00061bd0) video4_image_uncrop_vga_pane

0x460e,	// (0x0005fcdb) bg_tb_trans_pane_cp07

0x66b2,	// (0x00061d7f) vid4_indicators_pane_g1

0x66c6,	// (0x00061d93) vid4_indicators_pane_g2

0x66da,	// (0x00061da7) vid4_indicators_pane_g3

0x0004,

0xf738,	// (0x0006ae05) vid4_indicators_pane_g

0x6707,	// (0x00061dd4) vid4_indicators_pane_t1

0x671e,	// (0x00061deb) cam4_autofocus_pane_g1

0x6726,	// (0x00061df3) cam4_autofocus_pane_g2

0x672e,	// (0x00061dfb) cam4_autofocus_pane_g3

0x0002,

0xf743,	// (0x0006ae10) cam4_autofocus_pane_g

0x6736,	// (0x00061e03) cam4_autofocus_pane_g3_copy1

0x5f07,	// (0x000615d4) video_down_pane_cp_t1

0x5f15,	// (0x000615e2) video_down_pane_cp_t2

0x0001,

0xf6c4,	// (0x0006ad91) video_down_pane_cp_t

0x11b5,	// (0x0005c882) popup_vitu2_window_ParamLimits

0x11b5,	// (0x0005c882) popup_vitu2_window

0x673e,	// (0x00061e0b) aid_size_cell2_itu2_ParamLimits

0x673e,	// (0x00061e0b) aid_size_cell2_itu2

0x6760,	// (0x00061e2d) aid_size_cell_itu2_ParamLimits

0x6760,	// (0x00061e2d) aid_size_cell_itu2

0x67a4,	// (0x00061e71) bg_popup_window_pane_cp09_ParamLimits

0x67a4,	// (0x00061e71) bg_popup_window_pane_cp09

0x67b2,	// (0x00061e7f) field_vitu2_entry_pane_ParamLimits

0x67b2,	// (0x00061e7f) field_vitu2_entry_pane

0x67d2,	// (0x00061e9f) grid_vitu2_function_pane_ParamLimits

0x67d2,	// (0x00061e9f) grid_vitu2_function_pane

0x6816,	// (0x00061ee3) grid_vitu2_itu_pane_ParamLimits

0x6816,	// (0x00061ee3) grid_vitu2_itu_pane

0x688c,	// (0x00061f59) cell_vitu2_itu_pane_ParamLimits

0x688c,	// (0x00061f59) cell_vitu2_itu_pane

0x68a1,	// (0x00061f6e) cell_vitu2_function_pane_ParamLimits

0x68a1,	// (0x00061f6e) cell_vitu2_function_pane

0xd9de,	// (0x000690ab) bg_popup_call_pane_cp08_ParamLimits

0xd9de,	// (0x000690ab) bg_popup_call_pane_cp08

0xd9f7,	// (0x000690c4) field_vitu2_entry_pane_g1

0xda03,	// (0x000690d0) field_vitu2_entry_pane_g2

0x0002,

0x0827,	// (0x0005bef4) field_vitu2_entry_pane_g

0x68e2,	// (0x00061faf) field_vitu2_entry_pane_t1_ParamLimits

0x68e2,	// (0x00061faf) field_vitu2_entry_pane_t1

0x9d12,	// (0x000653df) field_vitu2_entry_pane_t2_ParamLimits

0x9d12,	// (0x000653df) field_vitu2_entry_pane_t2

0x0001,

0xf74a,	// (0x0006ae17) field_vitu2_entry_pane_t_ParamLimits

0xf74a,	// (0x0006ae17) field_vitu2_entry_pane_t

0x6914,	// (0x00061fe1) bg_button_pane_cp010_ParamLimits

0x6914,	// (0x00061fe1) bg_button_pane_cp010

0x6922,	// (0x00061fef) cell_vitu2_itu_pane_g1

0x6940,	// (0x0006200d) cell_vitu2_itu_pane_t1_ParamLimits

0x6940,	// (0x0006200d) cell_vitu2_itu_pane_t1

0x0e31,	// (0x0005c4fe) cell_vitu2_itu_pane_t2_ParamLimits

0x0e31,	// (0x0005c4fe) cell_vitu2_itu_pane_t2

0x0002,

0xf754,	// (0x0006ae21) cell_vitu2_itu_pane_t_ParamLimits

0xf754,	// (0x0006ae21) cell_vitu2_itu_pane_t

0x460e,	// (0x0005fcdb) bg_button_pane_cp011

0x6992,	// (0x0006205f) cell_vitu2_function_pane_g1

0x11cf,	// (0x0005c89c) main_myfav_hc_pane

0x63be,	// (0x00061a8b) popup_image3_note_pane_ParamLimits

0x63be,	// (0x00061a8b) popup_image3_note_pane

0x63cc,	// (0x00061a99) popup_image3_tool_bar_pane_ParamLimits

0x63cc,	// (0x00061a99) popup_image3_tool_bar_pane

0x0e9f,	// (0x0005c56c) cell_vitu2_itu_pane_t3_ParamLimits

0x0e9f,	// (0x0005c56c) cell_vitu2_itu_pane_t3

0x9b3d,	// (0x0006520a) bg_popup_trans_pane

0xda25,	// (0x000690f2) grid_image3_tool_bar_pane

0xda2f,	// (0x000690fc) bg_popup_trans_pane_g1

0xb10e,	// (0x000667db) bg_popup_trans_pane_g2

0xda37,	// (0x00069104) bg_popup_trans_pane_g3

0xda3f,	// (0x0006910c) bg_popup_trans_pane_g4

0xda47,	// (0x00069114) bg_popup_trans_pane_g5

0xda4f,	// (0x0006911c) bg_popup_trans_pane_g6

0xda57,	// (0x00069124) bg_popup_trans_pane_g7

0xda5f,	// (0x0006912c) bg_popup_trans_pane_g8

0xb0ee,	// (0x000667bb) bg_popup_trans_pane_g9

0x0008,

0xf75b,	// (0x0006ae28) bg_popup_trans_pane_g

0xda67,	// (0x00069134) cell_image3_tool_bar_pane_ParamLimits

0xda67,	// (0x00069134) cell_image3_tool_bar_pane

0xcfe6,	// (0x000686b3) cell_image3_tool_bar_pane_g1

0x9b3d,	// (0x0006520a) bg_popup_trans_pane_cp1

0xda7b,	// (0x00069148) popup_image3_note_pane_t1

0xda89,	// (0x00069156) popup_image3_note_pane_t2

0xda97,	// (0x00069164) popup_image3_note_pane_t3

0x0002,

0x0852,	// (0x0005bf1f) popup_image3_note_pane_t

0xdaa5,	// (0x00069172) popup_image3_note_pane_t3_copy1

0x69a6,	// (0x00062073) bg_myfav_hc_instruction_pane_ParamLimits

0x69a6,	// (0x00062073) bg_myfav_hc_instruction_pane

0x69be,	// (0x0006208b) cell_myfav_contact_pane_ParamLimits

0x69be,	// (0x0006208b) cell_myfav_contact_pane

0x69d8,	// (0x000620a5) cell_myfav_contact_pane_cp1_ParamLimits

0x69d8,	// (0x000620a5) cell_myfav_contact_pane_cp1

0x69f0,	// (0x000620bd) cell_myfav_contact_pane_cp2_ParamLimits

0x69f0,	// (0x000620bd) cell_myfav_contact_pane_cp2

0x6a08,	// (0x000620d5) cell_myfav_contact_pane_cp3_ParamLimits

0x6a08,	// (0x000620d5) cell_myfav_contact_pane_cp3

0x6a1f,	// (0x000620ec) cell_myfav_contact_pane_cp4_ParamLimits

0x6a1f,	// (0x000620ec) cell_myfav_contact_pane_cp4

0x6a35,	// (0x00062102) cell_myfav_contact_pane_cp5_ParamLimits

0x6a35,	// (0x00062102) cell_myfav_contact_pane_cp5

0x6a49,	// (0x00062116) cell_myfav_contact_pane_cp6_ParamLimits

0x6a49,	// (0x00062116) cell_myfav_contact_pane_cp6

0x6a5d,	// (0x0006212a) cell_myfav_contact_pane_cp7_ParamLimits

0x6a5d,	// (0x0006212a) cell_myfav_contact_pane_cp7

0xdab3,	// (0x00069180) listscroll_gen_pane_cp05

0x6a75,	// (0x00062142) main_myfav_hc_pane_g1_ParamLimits

0x6a75,	// (0x00062142) main_myfav_hc_pane_g1

0x6a8d,	// (0x0006215a) main_myfav_hc_pane_g2_ParamLimits

0x6a8d,	// (0x0006215a) main_myfav_hc_pane_g2

0x0002,

0xf76e,	// (0x0006ae3b) main_myfav_hc_pane_g_ParamLimits

0xf76e,	// (0x0006ae3b) main_myfav_hc_pane_g

0x6abd,	// (0x0006218a) main_myfav_hc_pane_t1_ParamLimits

0x6abd,	// (0x0006218a) main_myfav_hc_pane_t1

0xdabc,	// (0x00069189) main_myfav_hc_pane_t2_ParamLimits

0xdabc,	// (0x00069189) main_myfav_hc_pane_t2

0xdace,	// (0x0006919b) main_myfav_hc_pane_t3_ParamLimits

0xdace,	// (0x0006919b) main_myfav_hc_pane_t3

0x6ad4,	// (0x000621a1) main_myfav_hc_pane_t4_ParamLimits

0x6ad4,	// (0x000621a1) main_myfav_hc_pane_t4

0x0004,

0xf775,	// (0x0006ae42) main_myfav_hc_pane_t_ParamLimits

0xf775,	// (0x0006ae42) main_myfav_hc_pane_t

0xcfe6,	// (0x000686b3) bg_myfav_hc_instruction_pane_g1

0xdae0,	// (0x000691ad) cell_myfav_contact_pane_g1_ParamLimits

0xdae0,	// (0x000691ad) cell_myfav_contact_pane_g1

0xdae0,	// (0x000691ad) cell_myfav_contact_pane_g2_ParamLimits

0xdae0,	// (0x000691ad) cell_myfav_contact_pane_g2

0xdaec,	// (0x000691b9) cell_myfav_contact_pane_g3_ParamLimits

0xdaec,	// (0x000691b9) cell_myfav_contact_pane_g3

0xd2ab,	// (0x00068978) cell_myfav_contact_pane_g4_ParamLimits

0xd2ab,	// (0x00068978) cell_myfav_contact_pane_g4

0xdaf9,	// (0x000691c6) cell_myfav_contact_pane_g5_ParamLimits

0xdaf9,	// (0x000691c6) cell_myfav_contact_pane_g5

0x0004,

0x086b,	// (0x0005bf38) cell_myfav_contact_pane_g_ParamLimits

0x086b,	// (0x0005bf38) cell_myfav_contact_pane_g

0x6aa5,	// (0x00062172) main_myfav_hc_pane_g3_ParamLimits

0x6aa5,	// (0x00062172) main_myfav_hc_pane_g3

0x10be,	// (0x0005c78b) popup_adpt_find_window

0x6afe,	// (0x000621cb) afind_page_pane_ParamLimits

0x6afe,	// (0x000621cb) afind_page_pane

0x6b0b,	// (0x000621d8) aid_size_cell_afind_ParamLimits

0x6b0b,	// (0x000621d8) aid_size_cell_afind

0x6b25,	// (0x000621f2) bg_popup_sub_pane_cp09_ParamLimits

0x6b25,	// (0x000621f2) bg_popup_sub_pane_cp09

0x6b32,	// (0x000621ff) find_pane_cp01_ParamLimits

0x6b32,	// (0x000621ff) find_pane_cp01

0xdb05,	// (0x000691d2) grid_afind_control_pane_ParamLimits

0xdb05,	// (0x000691d2) grid_afind_control_pane

0x6b3f,	// (0x0006220c) grid_afind_pane_ParamLimits

0x6b3f,	// (0x0006220c) grid_afind_pane

0x6b59,	// (0x00062226) cell_afind_pane_ParamLimits

0x6b59,	// (0x00062226) cell_afind_pane

0xcfe6,	// (0x000686b3) afind_page_pane_g1

0x6ba1,	// (0x0006226e) afind_page_pane_g2

0x6baa,	// (0x00062277) afind_page_pane_g3

0x0002,

0xf780,	// (0x0006ae4d) afind_page_pane_g

0x6bb3,	// (0x00062280) afind_page_pane_t1

0xdb19,	// (0x000691e6) cell_afind_grid_control_pane_ParamLimits

0xdb19,	// (0x000691e6) cell_afind_grid_control_pane

0xd8f1,	// (0x00068fbe) bg_button_pane_cp69_ParamLimits

0xd8f1,	// (0x00068fbe) bg_button_pane_cp69

0x6bd3,	// (0x000622a0) cell_afind_pane_g1_ParamLimits

0x6bd3,	// (0x000622a0) cell_afind_pane_g1

0x6be0,	// (0x000622ad) cell_afind_pane_t1_ParamLimits

0x6be0,	// (0x000622ad) cell_afind_pane_t1

0xaf07,	// (0x000665d4) bg_button_pane_cp72

0xdb28,	// (0x000691f5) cell_afind_grid_control_pane_g1

0x4188,	// (0x0005f855) aid_image_placing_area_ParamLimits

0x4188,	// (0x0005f855) aid_image_placing_area

0xd5bf,	// (0x00068c8c) field_vitu_entry_pane_g1_ParamLimits

0xd5bf,	// (0x00068c8c) field_vitu_entry_pane_g1

0xd5cb,	// (0x00068c98) field_vitu_entry_pane_g2_ParamLimits

0xd5cb,	// (0x00068c98) field_vitu_entry_pane_g2

0x0001,

0x0727,	// (0x0005bdf4) field_vitu_entry_pane_g_ParamLimits

0x0727,	// (0x0005bdf4) field_vitu_entry_pane_g

0x5cf1,	// (0x000613be) cell_vitu_itu_pane_g1_ParamLimits

0x5d41,	// (0x0006140e) cell_vitu_itu_pane_t3_ParamLimits

0x5d41,	// (0x0006140e) cell_vitu_itu_pane_t3

0xd8a1,	// (0x00068f6e) mp4_progress_pane_t1_ParamLimits

0xd8ba,	// (0x00068f87) mp4_progress_pane_t2_ParamLimits

0x07bc,	// (0x0005be89) mp4_progress_pane_t_ParamLimits

0xd8d3,	// (0x00068fa0) mup_progress_pane_cp04_ParamLimits

0x6ae8,	// (0x000621b5) main_myfav_hc_pane_t5_ParamLimits

0x6ae8,	// (0x000621b5) main_myfav_hc_pane_t5

0x0f4c,	// (0x0005c619) aid_zoom_text_primary

0x10be,	// (0x0005c78b) popup_adpt_find_window_ParamLimits

0x460e,	// (0x0005fcdb) main_cam_set_pane

0x6528,	// (0x00061bf5) cam4_zoom_pane_ParamLimits

0x6528,	// (0x00061bf5) cam4_zoom_pane

0x6bf2,	// (0x000622bf) main_cam_set_pane_g1_ParamLimits

0x6bf2,	// (0x000622bf) main_cam_set_pane_g1

0x6c00,	// (0x000622cd) main_cam_set_pane_g2_ParamLimits

0x6c00,	// (0x000622cd) main_cam_set_pane_g2

0x0001,

0xf787,	// (0x0006ae54) main_cam_set_pane_g_ParamLimits

0xf787,	// (0x0006ae54) main_cam_set_pane_g

0x6c0c,	// (0x000622d9) main_cam_set_pane_t1_ParamLimits

0x6c0c,	// (0x000622d9) main_cam_set_pane_t1

0x6c28,	// (0x000622f5) main_cset_listscroll_pane_ParamLimits

0x6c28,	// (0x000622f5) main_cset_listscroll_pane

0x6c53,	// (0x00062320) main_cset_slider_pane_ParamLimits

0x6c53,	// (0x00062320) main_cset_slider_pane

0xdb39,	// (0x00069206) main_cset_list_pane_ParamLimits

0xdb39,	// (0x00069206) main_cset_list_pane

0xdb49,	// (0x00069216) scroll_pane_cp028

0x6c72,	// (0x0006233f) aid_area_touch_slider

0x6c8e,	// (0x0006235b) cset_slider_pane

0x6cb8,	// (0x00062385) main_cset_slider_pane_g1

0x6ccd,	// (0x0006239a) main_cset_slider_pane_g2

0x0011,

0xf78c,	// (0x0006ae59) main_cset_slider_pane_g

0xdb82,	// (0x0006924f) main_cset_slider_pane_t1

0x6d93,	// (0x00062460) main_cset_slider_pane_t2

0x6dad,	// (0x0006247a) main_cset_slider_pane_t3

0x6dc7,	// (0x00062494) main_cset_slider_pane_t4

0x6de5,	// (0x000624b2) main_cset_slider_pane_t5

0x6e03,	// (0x000624d0) main_cset_slider_pane_t6

0x6e1a,	// (0x000624e7) main_cset_slider_pane_t7

0x000e,

0xf7b1,	// (0x0006ae7e) main_cset_slider_pane_t

0x6f28,	// (0x000625f5) cset_list_set_pane_ParamLimits

0x6f28,	// (0x000625f5) cset_list_set_pane

0x6f44,	// (0x00062611) aid_position_infowindow_above

0x6f4c,	// (0x00062619) aid_position_infowindow_below

0x9d2f,	// (0x000653fc) cset_list_set_pane_g1_ParamLimits

0x9d2f,	// (0x000653fc) cset_list_set_pane_g1

0x6f54,	// (0x00062621) cset_list_set_pane_g3_ParamLimits

0x6f54,	// (0x00062621) cset_list_set_pane_g3

0x0001,

0xf7d0,	// (0x0006ae9d) cset_list_set_pane_g_ParamLimits

0xf7d0,	// (0x0006ae9d) cset_list_set_pane_g

0x9d3b,	// (0x00065408) cset_list_set_pane_t1_ParamLimits

0x9d3b,	// (0x00065408) cset_list_set_pane_t1

0xa733,	// (0x00065e00) list_highlight_pane_cp021_ParamLimits

0xa733,	// (0x00065e00) list_highlight_pane_cp021

0xb904,	// (0x00066fd1) cset_slider_pane_g1

0xb916,	// (0x00066fe3) cset_slider_pane_g2

0xb90d,	// (0x00066fda) cset_slider_pane_g3

0x0002,

0x08cb,	// (0x0005bf98) cset_slider_pane_g

0x6f63,	// (0x00062630) aid_area_touch_cam4_zoom

0x6f6b,	// (0x00062638) cam4_zoom_cont_pane

0x6f73,	// (0x00062640) cam4_zoom_pane_g1

0x6f7b,	// (0x00062648) cam4_zoom_pane_g2

0x6f83,	// (0x00062650) cam4_zoom_pane_g3

0x0002,

0xf7d5,	// (0x0006aea2) cam4_zoom_pane_g

0x6f8b,	// (0x00062658) cam4_zoom_cont_pane_g1

0x6f94,	// (0x00062661) cam4_zoom_cont_pane_g2

0x6f9d,	// (0x0006266a) cam4_zoom_cont_pane_g3

0x0002,

0xf7dc,	// (0x0006aea9) cam4_zoom_cont_pane_g

0x6415,	// (0x00061ae2) call4_image_pane_ParamLimits

0x6415,	// (0x00061ae2) call4_image_pane

0xd8fd,	// (0x00068fca) call4_windows_conf_pane_ParamLimits

0xd93c,	// (0x00069009) popup_call4_audio_in_window_ParamLimits

0xd93c,	// (0x00069009) popup_call4_audio_in_window

0x9b3d,	// (0x0006520a) bg_popup_call2_act_pane_cp02

0xd9b2,	// (0x0006907f) call4_list_conf_pane

0xcfe6,	// (0x000686b3) call4_image_pane_g1

0xcfe6,	// (0x000686b3) call4_image_pane_g2

0x0001,

0x05ed,	// (0x0005bcba) call4_image_pane_g

0xdc22,	// (0x000692ef) list_single_graphic_popup_conf4_pane_ParamLimits

0xdc22,	// (0x000692ef) list_single_graphic_popup_conf4_pane

0x9b3d,	// (0x0006520a) list_highlight_pane_cp022

0xdc50,	// (0x0006931d) list_single_graphic_popup_conf4_pane_g1

0xb5dd,	// (0x00066caa) list_single_graphic_popup_conf4_pane_g2

0x0001,

0x08e0,	// (0x0005bfad) list_single_graphic_popup_conf4_pane_g

0xdc58,	// (0x00069325) list_single_graphic_popup_conf4_pane_t1

0x2232,	// (0x0005d8ff) popup_vtel_slider_window_ParamLimits

0x2232,	// (0x0005d8ff) popup_vtel_slider_window

0xd8df,	// (0x00068fac) dialer2_ne_pane_t2_ParamLimits

0xd8df,	// (0x00068fac) dialer2_ne_pane_t2

0x0001,

0xf6e4,	// (0x0006adb1) dialer2_ne_pane_t_ParamLimits

0xf6e4,	// (0x0006adb1) dialer2_ne_pane_t

0xa733,	// (0x00065e00) bg_popup_sub_pane_cp010_ParamLimits

0xa733,	// (0x00065e00) bg_popup_sub_pane_cp010

0x6fa6,	// (0x00062673) popup_vtel_slider_window_g1_ParamLimits

0x6fa6,	// (0x00062673) popup_vtel_slider_window_g1

0x6fb2,	// (0x0006267f) popup_vtel_slider_window_g2_ParamLimits

0x6fb2,	// (0x0006267f) popup_vtel_slider_window_g2

0x0003,

0xf7e3,	// (0x0006aeb0) popup_vtel_slider_window_g_ParamLimits

0xf7e3,	// (0x0006aeb0) popup_vtel_slider_window_g

0x6ffa,	// (0x000626c7) vtel_slider_pane_ParamLimits

0x6ffa,	// (0x000626c7) vtel_slider_pane

0x7009,	// (0x000626d6) vtel_slider_pane_g1_ParamLimits

0x7009,	// (0x000626d6) vtel_slider_pane_g1

0x7016,	// (0x000626e3) vtel_slider_pane_g2_ParamLimits

0x7016,	// (0x000626e3) vtel_slider_pane_g2

0x7023,	// (0x000626f0) vtel_slider_pane_g3_ParamLimits

0x7023,	// (0x000626f0) vtel_slider_pane_g3

0x7009,	// (0x000626d6) vtel_slider_pane_g4_ParamLimits

0x7009,	// (0x000626d6) vtel_slider_pane_g4

0x7030,	// (0x000626fd) vtel_slider_pane_g5_ParamLimits

0x7030,	// (0x000626fd) vtel_slider_pane_g5

0x0004,

0xf7ec,	// (0x0006aeb9) vtel_slider_pane_g_ParamLimits

0xf7ec,	// (0x0006aeb9) vtel_slider_pane_g

0x11cf,	// (0x0005c89c) main_gallery2_pane

0x6786,	// (0x00061e53) aid_size_row_itut2_dropdow_list_ParamLimits

0x6786,	// (0x00061e53) aid_size_row_itut2_dropdow_list

0x67f4,	// (0x00061ec1) grid_vitu2_function_top_pane_ParamLimits

0x67f4,	// (0x00061ec1) grid_vitu2_function_top_pane

0x684a,	// (0x00061f17) popup_vitu2_dropdown_list_window_ParamLimits

0x684a,	// (0x00061f17) popup_vitu2_dropdown_list_window

0x686a,	// (0x00061f37) popup_vitu2_match_list_window

0x703d,	// (0x0006270a) cell_vitu2_function_top_pane_ParamLimits

0x703d,	// (0x0006270a) cell_vitu2_function_top_pane

0x705d,	// (0x0006272a) cell_vitu2_function_top_pane_cp01_ParamLimits

0x705d,	// (0x0006272a) cell_vitu2_function_top_pane_cp01

0x707b,	// (0x00062748) cell_vitu2_function_top_wide_pane_ParamLimits

0x707b,	// (0x00062748) cell_vitu2_function_top_wide_pane

0x460e,	// (0x0005fcdb) bg_button_pane_cp012

0x7099,	// (0x00062766) cell_vitu2_function_top_pane_g1

0x70a8,	// (0x00062775) bg_button_pane_cp013_ParamLimits

0x70a8,	// (0x00062775) bg_button_pane_cp013

0x70c4,	// (0x00062791) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x70c4,	// (0x00062791) cell_vitu2_function_top_wide_pane_g1

0x11b5,	// (0x0005c882) bg_popup_sub_pane_cp20

0x70dc,	// (0x000627a9) list_vitu2_match_list_pane

0xda2f,	// (0x000690fc) bg_popup_sub_pane_cp20_g1

0xda37,	// (0x00069104) bg_popup_sub_pane_cp20_g2

0xb10e,	// (0x000667db) bg_popup_sub_pane_cp20_g3

0xda3f,	// (0x0006910c) bg_popup_sub_pane_cp20_g4

0xb0ee,	// (0x000667bb) bg_popup_sub_pane_cp20_g5

0xdc6e,	// (0x0006933b) bg_popup_sub_pane_cp20_g6

0xda4f,	// (0x0006911c) bg_popup_sub_pane_cp20_g7

0xda57,	// (0x00069124) bg_popup_sub_pane_cp20_g8

0xda5f,	// (0x0006912c) bg_popup_sub_pane_cp20_g9

0x0008,

0xf7f7,	// (0x0006aec4) bg_popup_sub_pane_cp20_g

0x70f4,	// (0x000627c1) list_vitu2_match_list_item_pane_ParamLimits

0x70f4,	// (0x000627c1) list_vitu2_match_list_item_pane

0x7106,	// (0x000627d3) list_vitu2_match_list_item_pane_t1

0x11cf,	// (0x0005c89c) bg_popup_sub_pane_cp21

0x7143,	// (0x00062810) grid_vitu2_dropdown_list_pane

0x714b,	// (0x00062818) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x714b,	// (0x00062818) cell_vitu2_dropdown_list_char_pane

0x716c,	// (0x00062839) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x716c,	// (0x00062839) cell_vitu2_dropdown_list_ctrl_pane

0xdc7f,	// (0x0006934c) cell_vitu2_dropdown_list_char_pane_g1

0xdc88,	// (0x00069355) cell_vitu2_dropdown_list_char_pane_g2

0xdc76,	// (0x00069343) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf814,	// (0x0006aee1) cell_vitu2_dropdown_list_char_pane_g

0x7198,	// (0x00062865) cell_vitu2_dropdown_list_char_pane_t1

0x71a6,	// (0x00062873) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x71a6,	// (0x00062873) cell_vitu2_dropdown_list_ctrl_pane_g1

0x71b3,	// (0x00062880) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x71b3,	// (0x00062880) cell_vitu2_dropdown_list_ctrl_pane_g2

0x71c0,	// (0x0006288d) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x71c0,	// (0x0006288d) cell_vitu2_dropdown_list_ctrl_pane_g3

0x71cd,	// (0x0006289a) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x71cd,	// (0x0006289a) cell_vitu2_dropdown_list_ctrl_pane_g4

0x65bc,	// (0x00061c89) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x65bc,	// (0x00061c89) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf81b,	// (0x0006aee8) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf81b,	// (0x0006aee8) cell_vitu2_dropdown_list_ctrl_pane_g

0x71e9,	// (0x000628b6) aid_size_cell_gallery2_ParamLimits

0x71e9,	// (0x000628b6) aid_size_cell_gallery2

0x71f7,	// (0x000628c4) grid_gallery2_pane_ParamLimits

0x71f7,	// (0x000628c4) grid_gallery2_pane

0x7206,	// (0x000628d3) scroll_pane_cp029_ParamLimits

0x7206,	// (0x000628d3) scroll_pane_cp029

0x7212,	// (0x000628df) cell_gallery2_pane_ParamLimits

0x7212,	// (0x000628df) cell_gallery2_pane

0xdc91,	// (0x0006935e) cell_gallery2_pane_g2

0x7240,	// (0x0006290d) cell_gallery2_pane_g3

0xdc9b,	// (0x00069368) cell_gallery2_pane_g4

0xdca3,	// (0x00069370) cell_gallery2_pane_g5

0xb7c0,	// (0x00066e8d) grid_highlight_pane_cp10

0x686a,	// (0x00061f37) popup_vitu2_match_list_window_ParamLimits

0x687c,	// (0x00061f49) popup_vitu2_query_window_ParamLimits

0x687c,	// (0x00061f49) popup_vitu2_query_window

0x11cf,	// (0x0005c89c) bg_vitu2_candi_button_pane

0xdc7f,	// (0x0006934c) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xdc88,	// (0x00069355) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xdc76,	// (0x00069343) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7248,	// (0x00062915) bg_button_pane_cp015

0x725a,	// (0x00062927) bg_button_pane_cp016

0x726d,	// (0x0006293a) bg_button_pane_cp017

0xcbd0,	// (0x0006829d) bg_popup_sub_pane_cp22

0xdcab,	// (0x00069378) popup_vitu2_query_window_g1

0x72b2,	// (0x0006297f) popup_vitu2_query_window_g2

0x0002,

0xf826,	// (0x0006aef3) popup_vitu2_query_window_g

0x72cf,	// (0x0006299c) popup_vitu2_query_window_t1_ParamLimits

0x72cf,	// (0x0006299c) popup_vitu2_query_window_t1

0x7302,	// (0x000629cf) popup_vitu2_query_window_t2_ParamLimits

0x7302,	// (0x000629cf) popup_vitu2_query_window_t2

0x7314,	// (0x000629e1) popup_vitu2_query_window_t3_ParamLimits

0x7314,	// (0x000629e1) popup_vitu2_query_window_t3

0x733c,	// (0x00062a09) popup_vitu2_query_window_t4_ParamLimits

0x733c,	// (0x00062a09) popup_vitu2_query_window_t4

0x735d,	// (0x00062a2a) popup_vitu2_query_window_t5_ParamLimits

0x735d,	// (0x00062a2a) popup_vitu2_query_window_t5

0x0006,

0xf82d,	// (0x0006aefa) popup_vitu2_query_window_t_ParamLimits

0xf82d,	// (0x0006aefa) popup_vitu2_query_window_t

0xdb31,	// (0x000691fe) main_cset_text_pane

0x6c72,	// (0x0006233f) aid_area_touch_slider_ParamLimits

0x6c8e,	// (0x0006235b) cset_slider_pane_ParamLimits

0x6cb8,	// (0x00062385) main_cset_slider_pane_g1_ParamLimits

0x6ccd,	// (0x0006239a) main_cset_slider_pane_g2_ParamLimits

0xdb52,	// (0x0006921f) main_cset_slider_pane_g3_ParamLimits

0xdb52,	// (0x0006921f) main_cset_slider_pane_g3

0x6ce2,	// (0x000623af) main_cset_slider_pane_g4_ParamLimits

0x6ce2,	// (0x000623af) main_cset_slider_pane_g4

0x6cf1,	// (0x000623be) main_cset_slider_pane_g5_ParamLimits

0x6cf1,	// (0x000623be) main_cset_slider_pane_g5

0x6cff,	// (0x000623cc) main_cset_slider_pane_g6_ParamLimits

0x6cff,	// (0x000623cc) main_cset_slider_pane_g6

0xf78c,	// (0x0006ae59) main_cset_slider_pane_g_ParamLimits

0xdb82,	// (0x0006924f) main_cset_slider_pane_t1_ParamLimits

0x6d93,	// (0x00062460) main_cset_slider_pane_t2_ParamLimits

0x6dad,	// (0x0006247a) main_cset_slider_pane_t3_ParamLimits

0x6dc7,	// (0x00062494) main_cset_slider_pane_t4_ParamLimits

0x6de5,	// (0x000624b2) main_cset_slider_pane_t5_ParamLimits

0x6e03,	// (0x000624d0) main_cset_slider_pane_t6_ParamLimits

0x6e1a,	// (0x000624e7) main_cset_slider_pane_t7_ParamLimits

0x6e48,	// (0x00062515) main_cset_slider_pane_t8_ParamLimits

0x6e48,	// (0x00062515) main_cset_slider_pane_t8

0x6e70,	// (0x0006253d) main_cset_slider_pane_t9_ParamLimits

0x6e70,	// (0x0006253d) main_cset_slider_pane_t9

0x6e98,	// (0x00062565) main_cset_slider_pane_t10_ParamLimits

0x6e98,	// (0x00062565) main_cset_slider_pane_t10

0x6ec0,	// (0x0006258d) main_cset_slider_pane_t11_ParamLimits

0x6ec0,	// (0x0006258d) main_cset_slider_pane_t11

0x6eea,	// (0x000625b7) main_cset_slider_pane_t12_ParamLimits

0x6eea,	// (0x000625b7) main_cset_slider_pane_t12

0x6f09,	// (0x000625d6) main_cset_slider_pane_t13_ParamLimits

0x6f09,	// (0x000625d6) main_cset_slider_pane_t13

0xf7b1,	// (0x0006ae7e) main_cset_slider_pane_t_ParamLimits

0x9b3d,	// (0x0006520a) bg_popup_sub_pane_cp011

0xdcb7,	// (0x00069384) main_cset_text_pane_g1

0xdcbf,	// (0x0006938c) main_cset_text_pane_t1

0xdccd,	// (0x0006939a) main_cset_text_pane_t2

0xdcdb,	// (0x000693a8) main_cset_text_pane_t3

0xdce9,	// (0x000693b6) main_cset_text_pane_t4

0xdcf7,	// (0x000693c4) main_cset_text_pane_t5

0xdd05,	// (0x000693d2) main_cset_text_pane_t6

0xdd13,	// (0x000693e0) main_cset_text_pane_t7

0x0006,

0x093e,	// (0x0005c00b) main_cset_text_pane_t

0x11cf,	// (0x0005c89c) main_cam4_burst_pane

0x11cf,	// (0x0005c89c) main_cam5_pane

0x6bc1,	// (0x0006228e) bg_button_pane_cp019

0x6bca,	// (0x00062297) bg_button_pane_cp020

0xdb5e,	// (0x0006922b) main_cset_slider_pane_g7_ParamLimits

0xdb5e,	// (0x0006922b) main_cset_slider_pane_g7

0xdb6a,	// (0x00069237) main_cset_slider_pane_g8_ParamLimits

0xdb6a,	// (0x00069237) main_cset_slider_pane_g8

0x6d13,	// (0x000623e0) main_cset_slider_pane_g9_ParamLimits

0x6d13,	// (0x000623e0) main_cset_slider_pane_g9

0x6d1f,	// (0x000623ec) main_cset_slider_pane_g10_ParamLimits

0x6d1f,	// (0x000623ec) main_cset_slider_pane_g10

0x6d2b,	// (0x000623f8) main_cset_slider_pane_g11_ParamLimits

0x6d2b,	// (0x000623f8) main_cset_slider_pane_g11

0x6d37,	// (0x00062404) main_cset_slider_pane_g12_ParamLimits

0x6d37,	// (0x00062404) main_cset_slider_pane_g12

0x6d43,	// (0x00062410) main_cset_slider_pane_g13_ParamLimits

0x6d43,	// (0x00062410) main_cset_slider_pane_g13

0x6d51,	// (0x0006241e) main_cset_slider_pane_g14_ParamLimits

0x6d51,	// (0x0006241e) main_cset_slider_pane_g14

0x6d5f,	// (0x0006242c) main_cset_slider_pane_g15_ParamLimits

0x6d5f,	// (0x0006242c) main_cset_slider_pane_g15

0xdbb0,	// (0x0006927d) main_cset_slider_pane_t14_ParamLimits

0xdbb0,	// (0x0006927d) main_cset_slider_pane_t14

0xdbe9,	// (0x000692b6) main_cset_slider_pane_t15_ParamLimits

0xdbe9,	// (0x000692b6) main_cset_slider_pane_t15

0x73d4,	// (0x00062aa1) aid_cam4_burst_size_cell_ParamLimits

0x73d4,	// (0x00062aa1) aid_cam4_burst_size_cell

0x73f0,	// (0x00062abd) grid_cam4_burst_pane_ParamLimits

0x73f0,	// (0x00062abd) grid_cam4_burst_pane

0x7420,	// (0x00062aed) linegrid_cam4_burst_pane_ParamLimits

0x7420,	// (0x00062aed) linegrid_cam4_burst_pane

0x7442,	// (0x00062b0f) scroll_pane_cp30_ParamLimits

0x7442,	// (0x00062b0f) scroll_pane_cp30

0x744e,	// (0x00062b1b) cell_cam4_burst_pane_ParamLimits

0x744e,	// (0x00062b1b) cell_cam4_burst_pane

0xdd2d,	// (0x000693fa) linegrid_cam4_burst_pane_g1_ParamLimits

0xdd2d,	// (0x000693fa) linegrid_cam4_burst_pane_g1

0x748a,	// (0x00062b57) linegrid_cam4_burst_pane_g2_ParamLimits

0x748a,	// (0x00062b57) linegrid_cam4_burst_pane_g2

0xdd3a,	// (0x00069407) linegrid_cam4_burst_pane_g3_ParamLimits

0xdd3a,	// (0x00069407) linegrid_cam4_burst_pane_g3

0x0002,

0xf83c,	// (0x0006af09) linegrid_cam4_burst_pane_g_ParamLimits

0xf83c,	// (0x0006af09) linegrid_cam4_burst_pane_g

0x749b,	// (0x00062b68) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x749b,	// (0x00062b68) linegrid_cam4_burst_pane_g3_copy1

0xdd47,	// (0x00069414) linegrid_cam4_burst_pane_g4_ParamLimits

0xdd47,	// (0x00069414) linegrid_cam4_burst_pane_g4

0x74b5,	// (0x00062b82) linegrid_cam4_burst_pane_g5_ParamLimits

0x74b5,	// (0x00062b82) linegrid_cam4_burst_pane_g5

0x74c6,	// (0x00062b93) linegrid_cam4_burst_pane_g6_ParamLimits

0x74c6,	// (0x00062b93) linegrid_cam4_burst_pane_g6

0xdd54,	// (0x00069421) linegrid_cam4_burst_pane_g7_ParamLimits

0xdd54,	// (0x00069421) linegrid_cam4_burst_pane_g7

0x74d7,	// (0x00062ba4) cell_cam4_burst_pane_g1

0xdd6d,	// (0x0006943a) main_cam5_pane_t1_ParamLimits

0xdd6d,	// (0x0006943a) main_cam5_pane_t1

0xdd7f,	// (0x0006944c) main_cam5_pane_t2_ParamLimits

0xdd7f,	// (0x0006944c) main_cam5_pane_t2

0xdd91,	// (0x0006945e) main_cam5_pane_t3_ParamLimits

0xdd91,	// (0x0006945e) main_cam5_pane_t3

0xdda3,	// (0x00069470) main_cam5_pane_t4_ParamLimits

0xdda3,	// (0x00069470) main_cam5_pane_t4

0xddbb,	// (0x00069488) main_cam5_pane_t5_ParamLimits

0xddbb,	// (0x00069488) main_cam5_pane_t5

0xddcf,	// (0x0006949c) main_cam5_pane_t6_ParamLimits

0xddcf,	// (0x0006949c) main_cam5_pane_t6

0xdde3,	// (0x000694b0) main_cam5_pane_t7_ParamLimits

0xdde3,	// (0x000694b0) main_cam5_pane_t7

0xddf5,	// (0x000694c2) main_cam5_pane_t8_ParamLimits

0xddf5,	// (0x000694c2) main_cam5_pane_t8

0xde11,	// (0x000694de) main_cam5_pane_t9_ParamLimits

0xde11,	// (0x000694de) main_cam5_pane_t9

0xde23,	// (0x000694f0) main_cam5_pane_t10_ParamLimits

0xde23,	// (0x000694f0) main_cam5_pane_t10

0xde35,	// (0x00069502) main_cam5_pane_t11_ParamLimits

0xde35,	// (0x00069502) main_cam5_pane_t11

0xde47,	// (0x00069514) main_cam5_pane_t12_ParamLimits

0xde47,	// (0x00069514) main_cam5_pane_t12

0xde5c,	// (0x00069529) main_cam5_pane_t13_ParamLimits

0xde5c,	// (0x00069529) main_cam5_pane_t13

0x000c,

0x0959,	// (0x0005c026) main_cam5_pane_t_ParamLimits

0x0959,	// (0x0005c026) main_cam5_pane_t

0x1174,	// (0x0005c841) popup_scut_keymap_window_ParamLimits

0x1174,	// (0x0005c841) popup_scut_keymap_window

0x74ec,	// (0x00062bb9) aid_size_cell_brow_shortcut

0xb7c0,	// (0x00066e8d) bg_popup_window_pane_cp010

0x74f8,	// (0x00062bc5) grid_scut_pane

0x7504,	// (0x00062bd1) cell_scut_pane_ParamLimits

0x7504,	// (0x00062bd1) cell_scut_pane

0x751b,	// (0x00062be8) cell_scut_pane_g1

0xde79,	// (0x00069546) cell_scut_pane_t1

0xde88,	// (0x00069555) cell_scut_pane_t2

0x7524,	// (0x00062bf1) cell_scut_pane_t3

0x0002,

0xf848,	// (0x0006af15) cell_scut_pane_t

0x5352,	// (0x00060a1f) main_mup3_pane_g8_ParamLimits

0x5352,	// (0x00060a1f) main_mup3_pane_g8

0x6794,	// (0x00061e61) area_vitu2_query_pane_ParamLimits

0x6794,	// (0x00061e61) area_vitu2_query_pane

0x7280,	// (0x0006294d) input_focus_pane_cp08

0xde97,	// (0x00069564) area_vitu2_query_pane_g1

0x7532,	// (0x00062bff) area_vitu2_query_pane_g2

0x0001,

0xf84f,	// (0x0006af1c) area_vitu2_query_pane_g

0x7543,	// (0x00062c10) area_vitu2_query_pane_t1_ParamLimits

0x7543,	// (0x00062c10) area_vitu2_query_pane_t1

0x7557,	// (0x00062c24) area_vitu2_query_pane_t2_ParamLimits

0x7557,	// (0x00062c24) area_vitu2_query_pane_t2

0x756b,	// (0x00062c38) area_vitu2_query_pane_t3_ParamLimits

0x756b,	// (0x00062c38) area_vitu2_query_pane_t3

0x9d76,	// (0x00065443) area_vitu2_query_pane_t4_ParamLimits

0x9d76,	// (0x00065443) area_vitu2_query_pane_t4

0x9d9e,	// (0x0006546b) area_vitu2_query_pane_t5_ParamLimits

0x9d9e,	// (0x0006546b) area_vitu2_query_pane_t5

0x9dc6,	// (0x00065493) area_vitu2_query_pane_t6_ParamLimits

0x9dc6,	// (0x00065493) area_vitu2_query_pane_t6

0x0006,

0xf854,	// (0x0006af21) area_vitu2_query_pane_t_ParamLimits

0xf854,	// (0x0006af21) area_vitu2_query_pane_t

0x7593,	// (0x00062c60) bg_button_pane_cp018

0x75a1,	// (0x00062c6e) bg_button_pane_cp021

0x75ad,	// (0x00062c7a) bg_button_pane_cp022

0x75be,	// (0x00062c8b) input_focus_pane_cp09

0x3817,	// (0x0005eee4) aid_size_touch_mv_arrow_left

0x3842,	// (0x0005ef0f) aid_size_touch_mv_arrow_right

0x6d77,	// (0x00062444) main_cset_slider_pane_g16_ParamLimits

0x6d77,	// (0x00062444) main_cset_slider_pane_g16

0x6d85,	// (0x00062452) main_cset_slider_pane_g17_ParamLimits

0x6d85,	// (0x00062452) main_cset_slider_pane_g17

0x74d7,	// (0x00062ba4) cell_cam4_burst_pane_g1_ParamLimits

0x9b3d,	// (0x0006520a) compa_mode_pane

0x6fbe,	// (0x0006268b) popup_vtel_slider_window_g3_ParamLimits

0x6fbe,	// (0x0006268b) popup_vtel_slider_window_g3

0x6fd2,	// (0x0006269f) popup_vtel_slider_window_g4_ParamLimits

0x6fd2,	// (0x0006269f) popup_vtel_slider_window_g4

0x6fe6,	// (0x000626b3) popup_vtel_slider_window_t1_ParamLimits

0x6fe6,	// (0x000626b3) popup_vtel_slider_window_t1

0x11cf,	// (0x0005c89c) main_cl_pane

0x46a8,	// (0x0005fd75) popup_imed_adjust2_window_ParamLimits

0xcbd0,	// (0x0006829d) bg_tb_trans_pane_cp05_ParamLimits

0xd4eb,	// (0x00068bb8) popup_imed_adjust2_window_g1_ParamLimits

0xd4fa,	// (0x00068bc7) popup_imed_adjust2_window_g2_ParamLimits

0xd4fa,	// (0x00068bc7) popup_imed_adjust2_window_g2

0xd506,	// (0x00068bd3) popup_imed_adjust2_window_g3_ParamLimits

0xd506,	// (0x00068bd3) popup_imed_adjust2_window_g3

0x0002,

0x06eb,	// (0x0005bdb8) popup_imed_adjust2_window_g_ParamLimits

0x06eb,	// (0x0005bdb8) popup_imed_adjust2_window_g

0xd512,	// (0x00068bdf) popup_imed_adjust2_window_t1_ParamLimits

0xd52a,	// (0x00068bf7) slider_imed_adjust_pane_ParamLimits

0xd53e,	// (0x00068c0b) slider_imed_adjust_pane_g1_ParamLimits

0xd54e,	// (0x00068c1b) slider_imed_adjust_pane_g2_ParamLimits

0xd55e,	// (0x00068c2b) slider_imed_adjust_pane_g3_ParamLimits

0xd56f,	// (0x00068c3c) slider_imed_adjust_pane_g4_ParamLimits

0x06f2,	// (0x0005bdbf) slider_imed_adjust_pane_g_ParamLimits

0x64d1,	// (0x00061b9e) aid_touch_area_cam4_ParamLimits

0x64d1,	// (0x00061b9e) aid_touch_area_cam4

0x64e1,	// (0x00061bae) battery_pane_cp01

0x6568,	// (0x00061c35) main_camera4_pane_g6_ParamLimits

0x6568,	// (0x00061c35) main_camera4_pane_g6

0x6586,	// (0x00061c53) main_camera4_pane_t2_ParamLimits

0x6586,	// (0x00061c53) main_camera4_pane_t2

0x0001,

0xf718,	// (0x0006ade5) main_camera4_pane_t_ParamLimits

0xf718,	// (0x0006ade5) main_camera4_pane_t

0x661b,	// (0x00061ce8) aid_touch_area_vid4_ParamLimits

0x661b,	// (0x00061ce8) aid_touch_area_vid4

0x665b,	// (0x00061d28) main_video4_pane_g5_ParamLimits

0x665b,	// (0x00061d28) main_video4_pane_g5

0x667f,	// (0x00061d4c) vid4_progress_pane_ParamLimits

0x667f,	// (0x00061d4c) vid4_progress_pane

0xdb76,	// (0x00069243) main_cset_slider_pane_g18_ParamLimits

0xdb76,	// (0x00069243) main_cset_slider_pane_g18

0xdd61,	// (0x0006942e) cell_cam4_burst_pane_g2_ParamLimits

0xdd61,	// (0x0006942e) cell_cam4_burst_pane_g2

0x0001,

0xf843,	// (0x0006af10) cell_cam4_burst_pane_g_ParamLimits

0xf843,	// (0x0006af10) cell_cam4_burst_pane_g

0x75cf,	// (0x00062c9c) bg_cl_pane_ParamLimits

0x75cf,	// (0x00062c9c) bg_cl_pane

0x75db,	// (0x00062ca8) cl_header_pane_ParamLimits

0x75db,	// (0x00062ca8) cl_header_pane

0x75e7,	// (0x00062cb4) cl_listscroll_pane_ParamLimits

0x75e7,	// (0x00062cb4) cl_listscroll_pane

0xdea3,	// (0x00069570) bg_cl_pane_g1

0xdeab,	// (0x00069578) bg_cl_pane_g2

0xdeb3,	// (0x00069580) bg_cl_pane_g3

0xdebb,	// (0x00069588) bg_cl_pane_g4

0xdec3,	// (0x00069590) bg_cl_pane_g5

0xdecb,	// (0x00069598) bg_cl_pane_g6

0xded3,	// (0x000695a0) bg_cl_pane_g7

0xdedb,	// (0x000695a8) bg_cl_pane_g8

0xdee3,	// (0x000695b0) bg_cl_pane_g9

0x0008,

0x098f,	// (0x0005c05c) bg_cl_pane_g

0x75f3,	// (0x00062cc0) aid_height_cl_leading_ParamLimits

0x75f3,	// (0x00062cc0) aid_height_cl_leading

0x75ff,	// (0x00062ccc) aid_height_cl_text_ParamLimits

0x75ff,	// (0x00062ccc) aid_height_cl_text

0xe5b9,	// (0x00069c86) bg_cl_header_pane_ParamLimits

0xe5b9,	// (0x00069c86) bg_cl_header_pane

0x7617,	// (0x00062ce4) cl_header_pane_g1_ParamLimits

0x7617,	// (0x00062ce4) cl_header_pane_g1

0x7624,	// (0x00062cf1) cl_header_pane_t1_ParamLimits

0x7624,	// (0x00062cf1) cl_header_pane_t1

0xdeeb,	// (0x000695b8) cl_list_pane

0xdb49,	// (0x00069216) hc_scroll_pane_cp01

0xb0ee,	// (0x000667bb) bg_cl_header_pane_g1

0xda2f,	// (0x000690fc) bg_cl_header_pane_g2

0xb10e,	// (0x000667db) bg_cl_header_pane_g3

0xda3f,	// (0x0006910c) bg_cl_header_pane_g4

0xda37,	// (0x00069104) bg_cl_header_pane_g5

0xdc6e,	// (0x0006933b) bg_cl_header_pane_g6

0xda57,	// (0x00069124) bg_cl_header_pane_g7

0xda5f,	// (0x0006912c) bg_cl_header_pane_g8

0xda4f,	// (0x0006911c) bg_cl_header_pane_g9

0x0008,

0xf863,	// (0x0006af30) bg_cl_header_pane_g

0x7636,	// (0x00062d03) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7636,	// (0x00062d03) hc_cl_list_double_graphic_heading_pane

0x764a,	// (0x00062d17) hc_cl_list_single_graphic_pane_ParamLimits

0x764a,	// (0x00062d17) hc_cl_list_single_graphic_pane

0x7664,	// (0x00062d31) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7664,	// (0x00062d31) hc_cl_list_single_graphic_pane_g1

0x7670,	// (0x00062d3d) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7670,	// (0x00062d3d) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf876,	// (0x0006af43) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf876,	// (0x0006af43) hc_cl_list_single_graphic_pane_g

0x7684,	// (0x00062d51) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7684,	// (0x00062d51) hc_cl_list_single_graphic_pane_t1

0x7664,	// (0x00062d31) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7664,	// (0x00062d31) hc_cl_list_double_graphic_heading_pane_g1

0x7699,	// (0x00062d66) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7699,	// (0x00062d66) hc_cl_list_double_graphic_heading_pane_g2

0x76ad,	// (0x00062d7a) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x76ad,	// (0x00062d7a) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf87b,	// (0x0006af48) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf87b,	// (0x0006af48) hc_cl_list_double_graphic_heading_pane_g

0x76c1,	// (0x00062d8e) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x76c1,	// (0x00062d8e) hc_cl_list_double_graphic_heading_pane_t1

0x76d6,	// (0x00062da3) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x76d6,	// (0x00062da3) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf882,	// (0x0006af4f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf882,	// (0x0006af4f) hc_cl_list_double_graphic_heading_pane_t

0x76f3,	// (0x00062dc0) vid4_progress_pane_g1

0x7705,	// (0x00062dd2) vid4_progress_pane_g2

0xb34b,	// (0x00066a18) vid4_progress_pane_g3

0x7715,	// (0x00062de2) vid4_progress_pane_g4

0x0004,

0xf887,	// (0x0006af54) vid4_progress_pane_g

0x7733,	// (0x00062e00) vid4_progress_pane_t1

0x7748,	// (0x00062e15) vid4_progress_pane_t2

0x0002,

0xf892,	// (0x0006af5f) vid4_progress_pane_t

0x7774,	// (0x00062e41) wait_bar_pane_cp07

0xcdd7,	// (0x000684a4) blid_firmament_pane_ParamLimits

0xce1a,	// (0x000684e7) popup_blid_sat_info2_window_g1

0xce3e,	// (0x0006850b) popup_blid_sat_info2_window_t3

0xce4c,	// (0x00068519) popup_blid_sat_info2_window_t4

0xce5a,	// (0x00068527) popup_blid_sat_info2_window_t5

0xce68,	// (0x00068535) popup_blid_sat_info2_window_t6

0xce78,	// (0x00068545) popup_blid_sat_info2_window_t7

0xce86,	// (0x00068553) popup_blid_sat_info2_window_t8

0xce94,	// (0x00068561) popup_blid_sat_info2_window_t9

0xcea2,	// (0x0006856f) popup_blid_sat_info2_window_t10

0xcf66,	// (0x00068633) aid_firma_cardinal_ParamLimits

0xcf7a,	// (0x00068647) blid_firmament_pane_t1_ParamLimits

0xcf91,	// (0x0006865e) blid_firmament_pane_t2_ParamLimits

0xcfa8,	// (0x00068675) blid_firmament_pane_t3_ParamLimits

0xcfbf,	// (0x0006868c) blid_firmament_pane_t4_ParamLimits

0x05e4,	// (0x0005bcb1) blid_firmament_pane_t_ParamLimits

0xcfd6,	// (0x000686a3) blid_sat_info_pane_ParamLimits

0x460e,	// (0x0005fcdb) main_cam_set_pane_ParamLimits

0x5b0b,	// (0x000611d8) aid_size_cell_colour_35_ParamLimits

0x5b25,	// (0x000611f2) aid_size_cell_colour_112_ParamLimits

0x5b3c,	// (0x00061209) aid_size_cell_effect_ParamLimits

0xa733,	// (0x00065e00) bg_tb_trans_pane_cp02_ParamLimits

0xb3ae,	// (0x00066a7b) heading_imed_pane_ParamLimits

0x5b56,	// (0x00061223) listscroll_imed_pane_ParamLimits

0xc1f6,	// (0x000678c3) popup_call2_audio_first_window_g5_ParamLimits

0xc1f6,	// (0x000678c3) popup_call2_audio_first_window_g5

0x6280,	// (0x0006194d) aid_size_touch_image3_arrow_left_ParamLimits

0x6280,	// (0x0006194d) aid_size_touch_image3_arrow_left

0x6296,	// (0x00061963) aid_size_touch_image3_arrow_right_ParamLimits

0x6296,	// (0x00061963) aid_size_touch_image3_arrow_right

0x775e,	// (0x00062e2b) vid4_progress_pane_t3

0x5e0a,	// (0x000614d7) main_hwr_training_symbol_option_pane_ParamLimits

0x5e0a,	// (0x000614d7) main_hwr_training_symbol_option_pane

0xd7e1,	// (0x00068eae) popup_hwr_training_preview_window_ParamLimits

0xd7e1,	// (0x00068eae) popup_hwr_training_preview_window

0x5e6b,	// (0x00061538) hwr_training_navi_pane_g5_ParamLimits

0x5e6b,	// (0x00061538) hwr_training_navi_pane_g5

0xda1d,	// (0x000690ea) popup_char_count_window

0x11b5,	// (0x0005c882) bg_popup_sub_pane_cp20_ParamLimits

0x70dc,	// (0x000627a9) list_vitu2_match_list_pane_ParamLimits

0x70e8,	// (0x000627b5) vitu2_page_scroll_pane_ParamLimits

0x70e8,	// (0x000627b5) vitu2_page_scroll_pane

0xdef4,	// (0x000695c1) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdef4,	// (0x000695c1) list_single_hwr_training_symbol_option_pane

0xdf07,	// (0x000695d4) list_single_hwr_training_symbol_option_pane_g1

0xdf0f,	// (0x000695dc) list_single_hwr_training_symbol_option_pane_t1

0xdf1d,	// (0x000695ea) bg_button_pane_cp023

0xdf26,	// (0x000695f3) bg_button_pane_cp024

0x77b3,	// (0x00062e80) vitu2_page_scroll_pane_g1

0x77bb,	// (0x00062e88) vitu2_page_scroll_pane_g2

0x0001,

0xf899,	// (0x0006af66) vitu2_page_scroll_pane_g

0x77c3,	// (0x00062e90) vitu2_page_scroll_pane_t1

0xd59b,	// (0x00068c68) popup_char_count_window_g1

0xdf59,	// (0x00069626) popup_char_count_window_g2

0xdf62,	// (0x0006962f) popup_char_count_window_g3

0x0002,

0x09dd,	// (0x0005c0aa) popup_char_count_window_g

0xdf6b,	// (0x00069638) popup_char_count_window_t1

0x11cf,	// (0x0005c89c) main_vded2_pane

0xd4d7,	// (0x00068ba4) aid_size_cell_imed_line

0xd4e1,	// (0x00068bae) grid_imed_line_width_pane

0x66eb,	// (0x00061db8) vid4_indicators_pane_g4

0xdf79,	// (0x00069646) cell_imed_line_width_pane_ParamLimits

0xdf79,	// (0x00069646) cell_imed_line_width_pane

0xdf8d,	// (0x0006965a) cell_imed_line_width_pane_g1

0xdf96,	// (0x00069663) cell_imed_line_width_pane_g2

0x0001,

0x09e4,	// (0x0005c0b1) cell_imed_line_width_pane_g

0x77d2,	// (0x00062e9f) main_vded2_pane_g1_ParamLimits

0x77d2,	// (0x00062e9f) main_vded2_pane_g1

0x77df,	// (0x00062eac) main_vded2_pane_g2_ParamLimits

0x77df,	// (0x00062eac) main_vded2_pane_g2

0x0001,

0xf89e,	// (0x0006af6b) main_vded2_pane_g_ParamLimits

0xf89e,	// (0x0006af6b) main_vded2_pane_g

0x77ed,	// (0x00062eba) vded2_slider_pane_ParamLimits

0x77ed,	// (0x00062eba) vded2_slider_pane

0x77fa,	// (0x00062ec7) aid_size_touch_vded2_end

0x7804,	// (0x00062ed1) aid_size_touch_vded2_playhead

0xdf9e,	// (0x0006966b) aid_size_touch_vded2_start

0xdfa6,	// (0x00069673) vded2_slider_bg_pane

0xdfaf,	// (0x0006967c) vded2_slider_pane_g1

0xdfb8,	// (0x00069685) vded2_slider_pane_g2

0x780c,	// (0x00062ed9) vded2_slider_pane_g3

0x0002,

0xf8a3,	// (0x0006af70) vded2_slider_pane_g

0xdfc0,	// (0x0006968d) vded2_slider_bg_pane_g1

0xdfc9,	// (0x00069696) vded2_slider_bg_pane_g2

0xdfd2,	// (0x0006969f) vded2_slider_bg_pane_g3

0x0002,

0x09f5,	// (0x0005c0c2) vded2_slider_bg_pane_g

0x3ee9,	// (0x0005f5b6) aid_postcard_touch_down_pane_ParamLimits

0x3ee9,	// (0x0005f5b6) aid_postcard_touch_down_pane

0x3ef9,	// (0x0005f5c6) aid_postcard_touch_up_pane_ParamLimits

0x3ef9,	// (0x0005f5c6) aid_postcard_touch_up_pane

0x11cf,	// (0x0005c89c) main_blid2_pane

0x4637,	// (0x0005fd04) popup_blid2_search_window

0x9b3d,	// (0x0006520a) blid2_gps_pane

0x9b3d,	// (0x0006520a) blid2_navig_pane

0x9b3d,	// (0x0006520a) blid2_search_pane

0x9b3d,	// (0x0006520a) blid2_tripm_pane

0x7815,	// (0x00062ee2) blid2_search_pane_g1_ParamLimits

0x7815,	// (0x00062ee2) blid2_search_pane_g1

0x7825,	// (0x00062ef2) blid2_search_pane_t1_ParamLimits

0x7825,	// (0x00062ef2) blid2_search_pane_t1

0x7837,	// (0x00062f04) aid_size_cell_blid2_gps_ParamLimits

0x7837,	// (0x00062f04) aid_size_cell_blid2_gps

0x7847,	// (0x00062f14) blid2_gps_pane_g1_ParamLimits

0x7847,	// (0x00062f14) blid2_gps_pane_g1

0x7853,	// (0x00062f20) grid_blid2_satellite_pane_ParamLimits

0x7853,	// (0x00062f20) grid_blid2_satellite_pane

0x7863,	// (0x00062f30) blid2_navig_pane_g1_ParamLimits

0x7863,	// (0x00062f30) blid2_navig_pane_g1

0x786f,	// (0x00062f3c) blid2_navig_pane_t1_ParamLimits

0x786f,	// (0x00062f3c) blid2_navig_pane_t1

0x7881,	// (0x00062f4e) blid2_navig_pane_t2_ParamLimits

0x7881,	// (0x00062f4e) blid2_navig_pane_t2

0x0001,

0xf8aa,	// (0x0006af77) blid2_navig_pane_t_ParamLimits

0xf8aa,	// (0x0006af77) blid2_navig_pane_t

0x7893,	// (0x00062f60) blid2_navig_ring_pane_ParamLimits

0x7893,	// (0x00062f60) blid2_navig_ring_pane

0x78a3,	// (0x00062f70) blid2_speed_pane_ParamLimits

0x78a3,	// (0x00062f70) blid2_speed_pane

0x78af,	// (0x00062f7c) blid2_tripm_pane_g1_ParamLimits

0x78af,	// (0x00062f7c) blid2_tripm_pane_g1

0x78bf,	// (0x00062f8c) blid2_tripm_pane_g2_ParamLimits

0x78bf,	// (0x00062f8c) blid2_tripm_pane_g2

0x78cb,	// (0x00062f98) blid2_tripm_pane_g3_ParamLimits

0x78cb,	// (0x00062f98) blid2_tripm_pane_g3

0x78d7,	// (0x00062fa4) blid2_tripm_pane_g4_ParamLimits

0x78d7,	// (0x00062fa4) blid2_tripm_pane_g4

0x78e3,	// (0x00062fb0) blid2_tripm_pane_g5_ParamLimits

0x78e3,	// (0x00062fb0) blid2_tripm_pane_g5

0x0005,

0xf8af,	// (0x0006af7c) blid2_tripm_pane_g_ParamLimits

0xf8af,	// (0x0006af7c) blid2_tripm_pane_g

0x78ff,	// (0x00062fcc) blid2_tripm_pane_t1_ParamLimits

0x78ff,	// (0x00062fcc) blid2_tripm_pane_t1

0x7913,	// (0x00062fe0) blid2_tripm_pane_t2_ParamLimits

0x7913,	// (0x00062fe0) blid2_tripm_pane_t2

0x7925,	// (0x00062ff2) blid2_tripm_pane_t3_ParamLimits

0x7925,	// (0x00062ff2) blid2_tripm_pane_t3

0x0003,

0xf8bc,	// (0x0006af89) blid2_tripm_pane_t_ParamLimits

0xf8bc,	// (0x0006af89) blid2_tripm_pane_t

0x7957,	// (0x00063024) cell_blid2_satellite_pane_ParamLimits

0x7957,	// (0x00063024) cell_blid2_satellite_pane

0x7971,	// (0x0006303e) cell_blid2_satellite_pane_g1

0xdfdb,	// (0x000696a8) cell_blid2_satellite_pane_t1

0xcfe6,	// (0x000686b3) blid2_speed_pane_g1

0xdfe9,	// (0x000696b6) blid2_speed_pane_t1

0xdff7,	// (0x000696c4) blid2_speed_pane_t2

0x0001,

0x0a17,	// (0x0005c0e4) blid2_speed_pane_t

0xcfe6,	// (0x000686b3) blid2_navig_ring_pane_g1

0x797a,	// (0x00063047) blid2_navig_ring_pane_g2

0x7982,	// (0x0006304f) blid2_navig_ring_pane_g3

0x798a,	// (0x00063057) blid2_navig_ring_pane_g4

0x7992,	// (0x0006305f) blid2_navig_ring_pane_g5

0x0004,

0xf8c5,	// (0x0006af92) blid2_navig_ring_pane_g

0x9b3d,	// (0x0006520a) bg_popup_window_pane_cp011

0xe005,	// (0x000696d2) popup_blid2_search_window_g1

0xe00d,	// (0x000696da) popup_blid2_search_window_t1

0xe025,	// (0x000696f2) popup_blid2_search_window_t2

0x0001,

0xf8d0,	// (0x0006af9d) popup_blid2_search_window_t

0xaffd,	// (0x000666ca) main_browser_pane_g1

0xace4,	// (0x000663b1) main_browser_pane_ParamLimits

0x460e,	// (0x0005fcdb) bg_button_pane_cp011_ParamLimits

0x6992,	// (0x0006205f) cell_vitu2_function_pane_g1_ParamLimits

0xcbd0,	// (0x0006829d) bg_popup_sub_pane_cp22_ParamLimits

0x7280,	// (0x0006294d) input_focus_pane_cp08_ParamLimits

0x7297,	// (0x00062964) popup_vitu2_query_button_pane_ParamLimits

0x7297,	// (0x00062964) popup_vitu2_query_button_pane

0x72a8,	// (0x00062975) popup_vitu2_query_input_button_pane

0xdcab,	// (0x00069378) popup_vitu2_query_window_g1_ParamLimits

0x72b2,	// (0x0006297f) popup_vitu2_query_window_g2_ParamLimits

0xf826,	// (0x0006aef3) popup_vitu2_query_window_g_ParamLimits

0x9b3d,	// (0x0006520a) bg_button_pane_cp026

0x799a,	// (0x00063067) popup_vitu2_query_input_button_pane_g1

0x9b3d,	// (0x0006520a) bg_button_pane_cp025

0xe033,	// (0x00069700) popup_vitu2_query_button_pane_t1

0x508a,	// (0x00060757) main_mp3_pane_t6

0x509a,	// (0x00060767) popup_slider_window_cp01

0x65ca,	// (0x00061c97) cam4_battery_pane

0x66aa,	// (0x00061d77) cam4_battery_pane_cp02

0x76eb,	// (0x00062db8) cam4_battery_pane_cp01

0x76eb,	// (0x00062db8) cam4_battery_pane_cp03

0xe01b,	// (0x000696e8) cam4_battery_pane_g1

0xcfe6,	// (0x000686b3) cam4_battery_pane_g2

0x0001,

0xf8d5,	// (0x0006afa2) cam4_battery_pane_g

0xceb0,	// (0x0006857d) popup_blid_sat_info2_window_t11

0x3817,	// (0x0005eee4) aid_size_touch_mv_arrow_left_ParamLimits

0x3842,	// (0x0005ef0f) aid_size_touch_mv_arrow_right_ParamLimits

0xb720,	// (0x00066ded) navi_pane_g1_ParamLimits

0x3881,	// (0x0005ef4e) navi_pane_g2_ParamLimits

0x38af,	// (0x0005ef7c) navi_pane_g3_ParamLimits

0xf3c5,	// (0x0006aa92) navi_pane_g_ParamLimits

0x3909,	// (0x0005efd6) navi_pane_mv_t1_ParamLimits

0x5b62,	// (0x0006122f) grid_imed_effect_pane_ParamLimits

0x20f2,	// (0x0005d7bf) aid_placing_vt_slider_lsc

0xaf4c,	// (0x00066619) aid_placing_vt_slider_prt

0xa733,	// (0x00065e00) bg_tb_trans_pane_cp01_ParamLimits

0xd166,	// (0x00068833) popup_image_details_window_g1_ParamLimits

0xd179,	// (0x00068846) popup_image_details_window_g2_ParamLimits

0xd18e,	// (0x0006885b) popup_image_details_window_g3_ParamLimits

0xd18e,	// (0x0006885b) popup_image_details_window_g3

0x0629,	// (0x0005bcf6) popup_image_details_window_g_ParamLimits

0xd1a2,	// (0x0006886f) popup_image_details_window_t1_ParamLimits

0xd1b4,	// (0x00068881) popup_image_details_window_t2_ParamLimits

0xd1cd,	// (0x0006889a) popup_image_details_window_t3_ParamLimits

0xd1e1,	// (0x000688ae) popup_image_details_window_t4_ParamLimits

0xd1fc,	// (0x000688c9) popup_image_details_window_t5_ParamLimits

0x0630,	// (0x0005bcfd) popup_image_details_window_t_ParamLimits

0x760b,	// (0x00062cd8) cl_header_name_pane_ParamLimits

0x760b,	// (0x00062cd8) cl_header_name_pane

0x79a2,	// (0x0006306f) cl_header_name_pane_t1_ParamLimits

0x79a2,	// (0x0006306f) cl_header_name_pane_t1

0x79b9,	// (0x00063086) cl_header_name_pane_t2_ParamLimits

0x79b9,	// (0x00063086) cl_header_name_pane_t2

0x79e3,	// (0x000630b0) cl_header_name_pane_t3_ParamLimits

0x79e3,	// (0x000630b0) cl_header_name_pane_t3

0x0002,

0xf8da,	// (0x0006afa7) cl_header_name_pane_t_ParamLimits

0xf8da,	// (0x0006afa7) cl_header_name_pane_t

0x38da,	// (0x0005efa7) navi_pane_mv_g2_ParamLimits

0xd9f7,	// (0x000690c4) field_vitu2_entry_pane_g1_ParamLimits

0xda03,	// (0x000690d0) field_vitu2_entry_pane_g2_ParamLimits

0xda0f,	// (0x000690dc) field_vitu2_entry_pane_g3_ParamLimits

0xda0f,	// (0x000690dc) field_vitu2_entry_pane_g3

0x0827,	// (0x0005bef4) field_vitu2_entry_pane_g_ParamLimits

0x6922,	// (0x00061fef) cell_vitu2_itu_pane_g1_ParamLimits

0x6932,	// (0x00061fff) cell_vitu2_itu_pane_g2_ParamLimits

0x6932,	// (0x00061fff) cell_vitu2_itu_pane_g2

0x0001,

0xf74f,	// (0x0006ae1c) cell_vitu2_itu_pane_g_ParamLimits

0xf74f,	// (0x0006ae1c) cell_vitu2_itu_pane_g

0x460e,	// (0x0005fcdb) bg_vkb2_func_pane_cp05_ParamLimits

0x460e,	// (0x0005fcdb) bg_vkb2_func_pane_cp05

0x460e,	// (0x0005fcdb) bg_vkb2_func_pane_cp03

0x460e,	// (0x0005fcdb) bg_vkb2_func_pane_cp04

0x460e,	// (0x0005fcdb) bg_vkb2_func_pane_cp10_ParamLimits

0x460e,	// (0x0005fcdb) bg_vkb2_func_pane_cp10

0x75ad,	// (0x00062c7a) bg_vkb2_func_pane_cp08

0x7593,	// (0x00062c60) bg_vkb2_func_pane_cp06

0x75a1,	// (0x00062c6e) bg_vkb2_func_pane_cp07

0xdf2f,	// (0x000695fc) bg_vkb2_func_pane_cp11_ParamLimits

0xdf2f,	// (0x000695fc) bg_vkb2_func_pane_cp11

0xdf44,	// (0x00069611) bg_vkb2_func_pane_cp12_ParamLimits

0xdf44,	// (0x00069611) bg_vkb2_func_pane_cp12

0x9b3d,	// (0x0006520a) bg_vkb2_func_pane_cp09

0xda2f,	// (0x000690fc) bg_vkb2_func_pane_g1

0xb10e,	// (0x000667db) bg_vkb2_func_pane_g2

0xda37,	// (0x00069104) bg_vkb2_func_pane_g3

0xda3f,	// (0x0006910c) bg_vkb2_func_pane_g4

0xdc6e,	// (0x0006933b) bg_vkb2_func_pane_g5

0xda57,	// (0x00069124) bg_vkb2_func_pane_g6

0xda5f,	// (0x0006912c) bg_vkb2_func_pane_g7

0xda4f,	// (0x0006911c) bg_vkb2_func_pane_g8

0xb0ee,	// (0x000667bb) bg_vkb2_func_pane_g9

0x0008,

0xf8e1,	// (0x0006afae) bg_vkb2_func_pane_g

0x78f1,	// (0x00062fbe) blid2_tripm_pane_g6_ParamLimits

0x78f1,	// (0x00062fbe) blid2_tripm_pane_g6

0xd899,	// (0x00068f66) mp4_progress_pane_g1

0x794b,	// (0x00063018) blid2_tripm_values_pane_ParamLimits

0x794b,	// (0x00063018) blid2_tripm_values_pane

0x7a08,	// (0x000630d5) blid2_tripm_values_pane_t1

0x7a16,	// (0x000630e3) blid2_tripm_values_pane_t2

0x7a24,	// (0x000630f1) blid2_tripm_values_pane_t3

0x7a32,	// (0x000630ff) blid2_tripm_values_pane_t4

0x7a40,	// (0x0006310d) blid2_tripm_values_pane_t5

0x7a4e,	// (0x0006311b) blid2_tripm_values_pane_t6

0x7a5c,	// (0x00063129) blid2_tripm_values_pane_t7

0x7a6a,	// (0x00063137) blid2_tripm_values_pane_t8

0x7a78,	// (0x00063145) blid2_tripm_values_pane_t9

0x0008,

0xf8f4,	// (0x0006afc1) blid2_tripm_values_pane_t

0x2132,	// (0x0005d7ff) call_video_pane_t1_ParamLimits

0x2153,	// (0x0005d820) call_video_pane_t2_ParamLimits

0xf279,	// (0x0006a946) call_video_pane_t_ParamLimits

0x3e31,	// (0x0005f4fe) msg_header_pane_g1_ParamLimits

0xb940,	// (0x0006700d) msg_header_pane_g2_ParamLimits

0xb940,	// (0x0006700d) msg_header_pane_g2

0x0001,

0xf453,	// (0x0006ab20) msg_header_pane_g_ParamLimits

0xf453,	// (0x0006ab20) msg_header_pane_g

0xace4,	// (0x000663b1) main_clock2_pane_ParamLimits

0x58f3,	// (0x00060fc0) grid_clock2_toolbar_pane_ParamLimits

0x58f3,	// (0x00060fc0) grid_clock2_toolbar_pane

0x58f3,	// (0x00060fc0) listscroll_clock2_pane_ParamLimits

0x58f3,	// (0x00060fc0) listscroll_clock2_pane

0x599d,	// (0x0006106a) main_clock2_pane_t3_ParamLimits

0x599d,	// (0x0006106a) main_clock2_pane_t3

0x59af,	// (0x0006107c) main_clock2_pane_t4_ParamLimits

0x59af,	// (0x0006107c) main_clock2_pane_t4

0xe041,	// (0x0006970e) cell_clock2_toolbar_pane

0xe049,	// (0x00069716) cell_clock2_toolbar_pane_cp01

0xe049,	// (0x00069716) cell_clock2_toolbar_pane_cp02

0xe051,	// (0x0006971e) cell_clock2_toolbar_pane_cp03

0xe059,	// (0x00069726) list_clock2_pane

0xb677,	// (0x00066d44) scroll_pane_cp10

0xe061,	// (0x0006972e) list_single_clock2_pane_ParamLimits

0xe061,	// (0x0006972e) list_single_clock2_pane

0xb7c0,	// (0x00066e8d) list_highlight_pane_cp08

0xe06e,	// (0x0006973b) list_single_clock2_pane_t1

0xe08a,	// (0x00069757) list_single_clock2_pane_t2

0x0001,

0xf907,	// (0x0006afd4) list_single_clock2_pane_t

0x9b3d,	// (0x0006520a) bg_button_pane_cp10

0xe098,	// (0x00069765) cell_clock2_toolbar_pane_g1

0x3e57,	// (0x0005f524) aid_main_viewer_pane_g1_ParamLimits

0x3e57,	// (0x0005f524) aid_main_viewer_pane_g1

0x3e63,	// (0x0005f530) aid_main_viewer_pane_g2_ParamLimits

0x3e63,	// (0x0005f530) aid_main_viewer_pane_g2

0x3e6f,	// (0x0005f53c) aid_main_viewer_pane_g3_ParamLimits

0x3e6f,	// (0x0005f53c) aid_main_viewer_pane_g3

0x3e80,	// (0x0005f54d) aid_main_viewer_pane_g4_ParamLimits

0x3e80,	// (0x0005f54d) aid_main_viewer_pane_g4

0x0003,

0xf464,	// (0x0006ab31) aid_main_viewer_pane_g_ParamLimits

0xf464,	// (0x0006ab31) aid_main_viewer_pane_g

0x4601,	// (0x0005fcce) main_calc_pane_ParamLimits

0x461c,	// (0x0005fce9) main_dialer2_pane_ParamLimits

0x11cf,	// (0x0005c89c) main_cam6_pane

0x11cf,	// (0x0005c89c) main_vid6_pane

0x58ff,	// (0x00060fcc) listscroll_gen_pane_cp06_ParamLimits

0x58ff,	// (0x00060fcc) listscroll_gen_pane_cp06

0x59c1,	// (0x0006108e) main_clock2_pane_t5_ParamLimits

0x59c1,	// (0x0006108e) main_clock2_pane_t5

0x5a0c,	// (0x000610d9) aid_call2_pane_cp10_ParamLimits

0x5a1e,	// (0x000610eb) aid_call_pane_cp10_ParamLimits

0xb6f5,	// (0x00066dc2) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb6f5,	// (0x00066dc2) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5a30,	// (0x000610fd) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5a30,	// (0x000610fd) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb6f5,	// (0x00066dc2) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf65f,	// (0x0006ad2c) popup_clock_analogue_window_cp10_g_ParamLimits

0x5a42,	// (0x0006110f) popup_clock_analogue_window_cp10_t1_ParamLimits

0x622d,	// (0x000618fa) cell_dialer2_keypad_pane_g2_ParamLimits

0x622d,	// (0x000618fa) cell_dialer2_keypad_pane_g2

0x0001,

0xf6e9,	// (0x0006adb6) cell_dialer2_keypad_pane_g_ParamLimits

0xf6e9,	// (0x0006adb6) cell_dialer2_keypad_pane_g

0x6249,	// (0x00061916) cell_dialer2_keypad_pane_t1

0x6c5f,	// (0x0006232c) main_cset_text2_pane_ParamLimits

0x6c5f,	// (0x0006232c) main_cset_text2_pane

0xde97,	// (0x00069564) area_vitu2_query_pane_g1_ParamLimits

0x7532,	// (0x00062bff) area_vitu2_query_pane_g2_ParamLimits

0xf84f,	// (0x0006af1c) area_vitu2_query_pane_g_ParamLimits

0x9dee,	// (0x000654bb) area_vitu2_query_pane_t7_ParamLimits

0x9dee,	// (0x000654bb) area_vitu2_query_pane_t7

0x7593,	// (0x00062c60) bg_button_pane_cp018_ParamLimits

0x75a1,	// (0x00062c6e) bg_button_pane_cp021_ParamLimits

0x75ad,	// (0x00062c7a) bg_button_pane_cp022_ParamLimits

0x75ad,	// (0x00062c7a) bg_vkb2_func_pane_cp08_ParamLimits

0x7593,	// (0x00062c60) bg_vkb2_func_pane_cp06_ParamLimits

0x75a1,	// (0x00062c6e) bg_vkb2_func_pane_cp07_ParamLimits

0x75be,	// (0x00062c8b) input_focus_pane_cp09_ParamLimits

0x7a86,	// (0x00063153) cam6_autofocus_pane_ParamLimits

0x7a86,	// (0x00063153) cam6_autofocus_pane

0x7aa8,	// (0x00063175) cam6_image_uncrop_pane_ParamLimits

0x7aa8,	// (0x00063175) cam6_image_uncrop_pane

0x7ad5,	// (0x000631a2) cam6_indi_pane_ParamLimits

0x7ad5,	// (0x000631a2) cam6_indi_pane

0x7aef,	// (0x000631bc) cam6_mode_pane_ParamLimits

0x7aef,	// (0x000631bc) cam6_mode_pane

0x7b03,	// (0x000631d0) cam6_timer_pane_ParamLimits

0x7b03,	// (0x000631d0) cam6_timer_pane

0x7b0f,	// (0x000631dc) cam6_zoom_pane_ParamLimits

0x7b0f,	// (0x000631dc) cam6_zoom_pane

0x7b27,	// (0x000631f4) cam6_mode_pane_g1_ParamLimits

0x7b27,	// (0x000631f4) cam6_mode_pane_g1

0x7b33,	// (0x00063200) cam6_mode_pane_g2_ParamLimits

0x7b33,	// (0x00063200) cam6_mode_pane_g2

0x7b3f,	// (0x0006320c) cam6_mode_pane_g3_ParamLimits

0x7b3f,	// (0x0006320c) cam6_mode_pane_g3

0x7b4b,	// (0x00063218) cam6_mode_pane_g4_ParamLimits

0x7b4b,	// (0x00063218) cam6_mode_pane_g4

0x0003,

0xf90c,	// (0x0006afd9) cam6_mode_pane_g_ParamLimits

0xf90c,	// (0x0006afd9) cam6_mode_pane_g

0xe07c,	// (0x00069749) bg_tb_trans_pane_cp08_ParamLimits

0xe07c,	// (0x00069749) bg_tb_trans_pane_cp08

0xe0a0,	// (0x0006976d) cam6_battery_pane_ParamLimits

0xe0a0,	// (0x0006976d) cam6_battery_pane

0xe0b6,	// (0x00069783) cam6_indi_pane_g1_ParamLimits

0xe0b6,	// (0x00069783) cam6_indi_pane_g1

0xe0c8,	// (0x00069795) cam6_indi_pane_g2_ParamLimits

0xe0c8,	// (0x00069795) cam6_indi_pane_g2

0xe0da,	// (0x000697a7) cam6_indi_pane_g3_ParamLimits

0xe0da,	// (0x000697a7) cam6_indi_pane_g3

0x0002,

0x0a6c,	// (0x0005c139) cam6_indi_pane_g_ParamLimits

0x0a6c,	// (0x0005c139) cam6_indi_pane_g

0xe0ec,	// (0x000697b9) cam6_indi_pane_t1_ParamLimits

0xe0ec,	// (0x000697b9) cam6_indi_pane_t1

0x6726,	// (0x00061df3) cam6_autofocus_pane_g1

0x671e,	// (0x00061deb) cam6_autofocus_pane_g2

0x6736,	// (0x00061e03) cam6_autofocus_pane_g3

0x672e,	// (0x00061dfb) cam6_autofocus_pane_g4

0x0003,

0xf915,	// (0x0006afe2) cam6_autofocus_pane_g

0xe112,	// (0x000697df) cam6_timer_pane_g1

0xe11a,	// (0x000697e7) cam6_timer_pane_t1

0xe128,	// (0x000697f5) cam6_zoom_cont_pane

0xe130,	// (0x000697fd) cam6_zoom_pane_g1

0xe138,	// (0x00069805) cam6_zoom_pane_g2

0x7b57,	// (0x00063224) cam6_zoom_pane_g3

0x0002,

0xf91e,	// (0x0006afeb) cam6_zoom_pane_g

0xcfe6,	// (0x000686b3) cam6_battery_pane_g1

0xcfe6,	// (0x000686b3) cam6_battery_pane_g2

0x0001,

0x05ed,	// (0x0005bcba) cam6_battery_pane_g

0xe140,	// (0x0006980d) cam6_zoom_cont_pane_g1

0xe149,	// (0x00069816) cam6_zoom_cont_pane_g2

0xe152,	// (0x0006981f) cam6_zoom_cont_pane_g3

0x0002,

0x0a83,	// (0x0005c150) cam6_zoom_cont_pane_g

0x7b74,	// (0x00063241) cam6_mode_pane_cp_ParamLimits

0x7b74,	// (0x00063241) cam6_mode_pane_cp

0x7b88,	// (0x00063255) cam6_zoom_pane_cp_ParamLimits

0x7b88,	// (0x00063255) cam6_zoom_pane_cp

0x7ba0,	// (0x0006326d) vid6_image_uncrop_cif_pane_ParamLimits

0x7ba0,	// (0x0006326d) vid6_image_uncrop_cif_pane

0x7bcc,	// (0x00063299) vid6_image_uncrop_nhd_pane_ParamLimits

0x7bcc,	// (0x00063299) vid6_image_uncrop_nhd_pane

0x7be9,	// (0x000632b6) vid6_image_uncrop_vga_pane_ParamLimits

0x7be9,	// (0x000632b6) vid6_image_uncrop_vga_pane

0x7c08,	// (0x000632d5) vid6_image_uncrop_wvga_pane_ParamLimits

0x7c08,	// (0x000632d5) vid6_image_uncrop_wvga_pane

0x7c25,	// (0x000632f2) vid6_indi_pane_ParamLimits

0x7c25,	// (0x000632f2) vid6_indi_pane

0xe07c,	// (0x00069749) bg_tb_trans_pane_cp09_ParamLimits

0xe07c,	// (0x00069749) bg_tb_trans_pane_cp09

0xe16a,	// (0x00069837) cam6_battery_pane_cp_ParamLimits

0xe16a,	// (0x00069837) cam6_battery_pane_cp

0xe176,	// (0x00069843) vid6_indi_pane_g1_ParamLimits

0xe176,	// (0x00069843) vid6_indi_pane_g1

0xe188,	// (0x00069855) vid6_indi_pane_g2_ParamLimits

0xe188,	// (0x00069855) vid6_indi_pane_g2

0xe19a,	// (0x00069867) vid6_indi_pane_g3_ParamLimits

0xe19a,	// (0x00069867) vid6_indi_pane_g3

0xe1af,	// (0x0006987c) vid6_indi_pane_g4_ParamLimits

0xe1af,	// (0x0006987c) vid6_indi_pane_g4

0xe1c4,	// (0x00069891) vid6_indi_pane_g5_ParamLimits

0xe1c4,	// (0x00069891) vid6_indi_pane_g5

0x0004,

0x0a8a,	// (0x0005c157) vid6_indi_pane_g_ParamLimits

0x0a8a,	// (0x0005c157) vid6_indi_pane_g

0xe1de,	// (0x000698ab) vid6_indi_pane_t1_ParamLimits

0xe1de,	// (0x000698ab) vid6_indi_pane_t1

0xe1f4,	// (0x000698c1) vid6_indi_pane_t2_ParamLimits

0xe1f4,	// (0x000698c1) vid6_indi_pane_t2

0xe21c,	// (0x000698e9) vid6_indi_pane_t3_ParamLimits

0xe21c,	// (0x000698e9) vid6_indi_pane_t3

0xe244,	// (0x00069911) vid6_indi_pane_t4_ParamLimits

0xe244,	// (0x00069911) vid6_indi_pane_t4

0x0003,

0x0a95,	// (0x0005c162) vid6_indi_pane_t_ParamLimits

0x0a95,	// (0x0005c162) vid6_indi_pane_t

0xe268,	// (0x00069935) wait_bar_pane_cp08

0x7c48,	// (0x00063315) main_cset_text2_pane_t1_ParamLimits

0x7c48,	// (0x00063315) main_cset_text2_pane_t1

0x7b5f,	// (0x0006322c) listscroll_gen_pane_cp06_t1_ParamLimits

0x7b5f,	// (0x0006322c) listscroll_gen_pane_cp06_t1

0x11cf,	// (0x0005c89c) main_cam6_set_pane

0x65bc,	// (0x00061c89) bg_tb_trans_pane_cp06_ParamLimits

0x65d2,	// (0x00061c9f) cam4_indicators_pane_g1_ParamLimits

0x65e3,	// (0x00061cb0) cam4_indicators_pane_g2_ParamLimits

0xf726,	// (0x0006adf3) cam4_indicators_pane_g_ParamLimits

0x6601,	// (0x00061cce) cam4_indicators_pane_t1_ParamLimits

0x460e,	// (0x0005fcdb) bg_tb_trans_pane_cp07_ParamLimits

0x66b2,	// (0x00061d7f) vid4_indicators_pane_g1_ParamLimits

0x66c6,	// (0x00061d93) vid4_indicators_pane_g2_ParamLimits

0x66da,	// (0x00061da7) vid4_indicators_pane_g3_ParamLimits

0x66eb,	// (0x00061db8) vid4_indicators_pane_g4_ParamLimits

0xf738,	// (0x0006ae05) vid4_indicators_pane_g_ParamLimits

0x6707,	// (0x00061dd4) vid4_indicators_pane_t1_ParamLimits

0x76f3,	// (0x00062dc0) vid4_progress_pane_g1_ParamLimits

0x7705,	// (0x00062dd2) vid4_progress_pane_g2_ParamLimits

0xb34b,	// (0x00066a18) vid4_progress_pane_g3_ParamLimits

0x7715,	// (0x00062de2) vid4_progress_pane_g4_ParamLimits

0xf887,	// (0x0006af54) vid4_progress_pane_g_ParamLimits

0x7733,	// (0x00062e00) vid4_progress_pane_t1_ParamLimits

0x7748,	// (0x00062e15) vid4_progress_pane_t2_ParamLimits

0x775e,	// (0x00062e2b) vid4_progress_pane_t3_ParamLimits

0xf892,	// (0x0006af5f) vid4_progress_pane_t_ParamLimits

0x7774,	// (0x00062e41) wait_bar_pane_cp07_ParamLimits

0x7c82,	// (0x0006334f) main_cam6_set_pane_g2_ParamLimits

0x7c82,	// (0x0006334f) main_cam6_set_pane_g2

0x7c8e,	// (0x0006335b) main_cset6_listscroll_pane_ParamLimits

0x7c8e,	// (0x0006335b) main_cset6_listscroll_pane

0x7cb9,	// (0x00063386) main_cset6_slider_pane_ParamLimits

0x7cb9,	// (0x00063386) main_cset6_slider_pane

0x7cc5,	// (0x00063392) main_cset6_text2_pane_ParamLimits

0x7cc5,	// (0x00063392) main_cset6_text2_pane

0xe277,	// (0x00069944) main_cset6_text_pane

0xe27f,	// (0x0006994c) main_cset_list_pane_copy1_ParamLimits

0xe27f,	// (0x0006994c) main_cset_list_pane_copy1

0xe28f,	// (0x0006995c) scroll_pane_cp028_copy1

0x7cd8,	// (0x000633a5) cset_list_set_pane_copy1

0x7cf1,	// (0x000633be) aid_position_infowindow_above_copy1

0x7cf9,	// (0x000633c6) aid_position_infowindow_below_copy1

0x7d01,	// (0x000633ce) cset_list_set_pane_g1_copy1

0x6f54,	// (0x00062621) cset_list_set_pane_g3_copy1_ParamLimits

0x6f54,	// (0x00062621) cset_list_set_pane_g3_copy1

0x9d3b,	// (0x00065408) cset_list_set_pane_t1_copy1_ParamLimits

0x9d3b,	// (0x00065408) cset_list_set_pane_t1_copy1

0xa733,	// (0x00065e00) list_highlight_pane_cp021_copy1_ParamLimits

0xa733,	// (0x00065e00) list_highlight_pane_cp021_copy1

0xe298,	// (0x00069965) cset6_slider_pane_ParamLimits

0xe298,	// (0x00069965) cset6_slider_pane

0xe2c4,	// (0x00069991) main_cset6_slider_pane_g1_ParamLimits

0xe2c4,	// (0x00069991) main_cset6_slider_pane_g1

0x7d09,	// (0x000633d6) main_cset6_slider_pane_g2_ParamLimits

0x7d09,	// (0x000633d6) main_cset6_slider_pane_g2

0xe2ec,	// (0x000699b9) main_cset6_slider_pane_g3_ParamLimits

0xe2ec,	// (0x000699b9) main_cset6_slider_pane_g3

0x7d31,	// (0x000633fe) main_cset6_slider_pane_g4_ParamLimits

0x7d31,	// (0x000633fe) main_cset6_slider_pane_g4

0x7d3d,	// (0x0006340a) main_cset6_slider_pane_g5_ParamLimits

0x7d3d,	// (0x0006340a) main_cset6_slider_pane_g5

0xdb5e,	// (0x0006922b) main_cset6_slider_pane_g7_ParamLimits

0xdb5e,	// (0x0006922b) main_cset6_slider_pane_g7

0xdb6a,	// (0x00069237) main_cset6_slider_pane_g8_ParamLimits

0xdb6a,	// (0x00069237) main_cset6_slider_pane_g8

0x7d4b,	// (0x00063418) main_cset6_slider_pane_g9_ParamLimits

0x7d4b,	// (0x00063418) main_cset6_slider_pane_g9

0x7d57,	// (0x00063424) main_cset6_slider_pane_g10_ParamLimits

0x7d57,	// (0x00063424) main_cset6_slider_pane_g10

0x7d63,	// (0x00063430) main_cset6_slider_pane_g11_ParamLimits

0x7d63,	// (0x00063430) main_cset6_slider_pane_g11

0x7d6f,	// (0x0006343c) main_cset6_slider_pane_g12_ParamLimits

0x7d6f,	// (0x0006343c) main_cset6_slider_pane_g12

0x7d7b,	// (0x00063448) main_cset6_slider_pane_g13_ParamLimits

0x7d7b,	// (0x00063448) main_cset6_slider_pane_g13

0x7d87,	// (0x00063454) main_cset6_slider_pane_g14_ParamLimits

0x7d87,	// (0x00063454) main_cset6_slider_pane_g14

0x7d93,	// (0x00063460) main_cset6_slider_pane_g15_ParamLimits

0x7d93,	// (0x00063460) main_cset6_slider_pane_g15

0x7dab,	// (0x00063478) main_cset6_slider_pane_g16_ParamLimits

0x7dab,	// (0x00063478) main_cset6_slider_pane_g16

0x7db9,	// (0x00063486) main_cset6_slider_pane_g17_ParamLimits

0x7db9,	// (0x00063486) main_cset6_slider_pane_g17

0x0011,

0xf925,	// (0x0006aff2) main_cset6_slider_pane_g_ParamLimits

0xf925,	// (0x0006aff2) main_cset6_slider_pane_g

0xe2f8,	// (0x000699c5) main_cset6_slider_pane_t1_ParamLimits

0xe2f8,	// (0x000699c5) main_cset6_slider_pane_t1

0x7ddf,	// (0x000634ac) main_cset6_slider_pane_t2_ParamLimits

0x7ddf,	// (0x000634ac) main_cset6_slider_pane_t2

0x7e0a,	// (0x000634d7) main_cset6_slider_pane_t3_ParamLimits

0x7e0a,	// (0x000634d7) main_cset6_slider_pane_t3

0x7e35,	// (0x00063502) main_cset6_slider_pane_t4_ParamLimits

0x7e35,	// (0x00063502) main_cset6_slider_pane_t4

0x7e60,	// (0x0006352d) main_cset6_slider_pane_t5_ParamLimits

0x7e60,	// (0x0006352d) main_cset6_slider_pane_t5

0xe339,	// (0x00069a06) main_cset6_slider_pane_t7_ParamLimits

0xe339,	// (0x00069a06) main_cset6_slider_pane_t7

0x7e8d,	// (0x0006355a) main_cset6_slider_pane_t8_ParamLimits

0x7e8d,	// (0x0006355a) main_cset6_slider_pane_t8

0x7eb1,	// (0x0006357e) main_cset6_slider_pane_t9_ParamLimits

0x7eb1,	// (0x0006357e) main_cset6_slider_pane_t9

0x7ed5,	// (0x000635a2) main_cset6_slider_pane_t10_ParamLimits

0x7ed5,	// (0x000635a2) main_cset6_slider_pane_t10

0x7ef9,	// (0x000635c6) main_cset6_slider_pane_t11_ParamLimits

0x7ef9,	// (0x000635c6) main_cset6_slider_pane_t11

0xe36f,	// (0x00069a3c) main_cset6_slider_pane_t14_ParamLimits

0xe36f,	// (0x00069a3c) main_cset6_slider_pane_t14

0xe3a8,	// (0x00069a75) main_cset6_slider_pane_t15_ParamLimits

0xe3a8,	// (0x00069a75) main_cset6_slider_pane_t15

0x000b,

0xf94a,	// (0x0006b017) main_cset6_slider_pane_t_ParamLimits

0xf94a,	// (0x0006b017) main_cset6_slider_pane_t

0xdc35,	// (0x00069302) cset_slider_pane_g1_copy1

0xdc3e,	// (0x0006930b) cset_slider_pane_g2_copy1

0xdc47,	// (0x00069314) cset_slider_pane_g3_copy1

0x9b3d,	// (0x0006520a) bg_popup_sub_pane_cp011_copy1

0xe3e1,	// (0x00069aae) main_cset_text_pane_g1_copy1

0xdcbf,	// (0x0006938c) main_cset_text_pane_t1_copy1

0xdccd,	// (0x0006939a) main_cset_text_pane_t2_copy1

0xdcdb,	// (0x000693a8) main_cset_text_pane_t3_copy1

0xdce9,	// (0x000693b6) main_cset_text_pane_t4_copy1

0xdcf7,	// (0x000693c4) main_cset_text_pane_t5_copy1

0xe3e9,	// (0x00069ab6) main_cset_text_pane_t6_copy1

0xe3f7,	// (0x00069ac4) main_cset_text_pane_t7_copy1

0x7fb8,	// (0x00063685) main_cset_text2_pane_t1_copy1

0x460e,	// (0x0005fcdb) main_ncimui_pane

0x466d,	// (0x0005fd3a) popup_query_ncimui_window_ParamLimits

0x466d,	// (0x0005fd3a) popup_query_ncimui_window

0x9cda,	// (0x000653a7) field_cale_ev2_pane_g4_ParamLimits

0x9cda,	// (0x000653a7) field_cale_ev2_pane_g4

0x5f4d,	// (0x0006161a) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5f4d,	// (0x0006161a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf6c9,	// (0x0006ad96) cell_video_dialer_keypad_pane_g_ParamLimits

0xf6c9,	// (0x0006ad96) cell_video_dialer_keypad_pane_g

0x5f65,	// (0x00061632) cell_video_dialer_keypad_pane_t1

0x9b3d,	// (0x0006520a) bg_popup_window_pane_cp012

0xb538,	// (0x00066c05) heading_pane_cp06

0xe423,	// (0x00069af0) ncim_query_content_pane

0x9b3d,	// (0x0006520a) bg_popup_heading_pane_cp01

0xe42b,	// (0x00069af8) ncim_heading_pane_t1

0xe439,	// (0x00069b06) ncim_indicator_popup_pane

0xe44b,	// (0x00069b18) ncim_query_button_pane

0xe45f,	// (0x00069b2c) ncim_query_content_pane_t1

0xe471,	// (0x00069b3e) ncim_query_content_pane_t2

0x0005,

0xf98e,	// (0x0006b05b) ncim_query_content_pane_t

0xe4ab,	// (0x00069b78) ncim_query_list_pane

0xe4bd,	// (0x00069b8a) ncim_query_popup_pane

0xe439,	// (0x00069b06) ncim_indicator_popup_pane_ParamLimits

0x8112,	// (0x000637df) ncim_query_content_pane_g1_ParamLimits

0x8112,	// (0x000637df) ncim_query_content_pane_g1

0xe45f,	// (0x00069b2c) ncim_query_content_pane_t1_ParamLimits

0xe471,	// (0x00069b3e) ncim_query_content_pane_t2_ParamLimits

0x811e,	// (0x000637eb) ncim_query_content_pane_t3_ParamLimits

0x811e,	// (0x000637eb) ncim_query_content_pane_t3

0x813b,	// (0x00063808) ncim_query_content_pane_t4_ParamLimits

0x813b,	// (0x00063808) ncim_query_content_pane_t4

0x8158,	// (0x00063825) ncim_query_content_pane_t5_ParamLimits

0x8158,	// (0x00063825) ncim_query_content_pane_t5

0xe483,	// (0x00069b50) ncim_query_content_pane_t6_ParamLimits

0xe483,	// (0x00069b50) ncim_query_content_pane_t6

0xf98e,	// (0x0006b05b) ncim_query_content_pane_t_ParamLimits

0xe4ab,	// (0x00069b78) ncim_query_list_pane_ParamLimits

0xe4bd,	// (0x00069b8a) ncim_query_popup_pane_ParamLimits

0xe4d1,	// (0x00069b9e) wait_bar_pane_cp04

0x9b3d,	// (0x0006520a) input_focus_pane_cp011

0xe4d9,	// (0x00069ba6) ncim_query_popup_pane_t1

0xe4e7,	// (0x00069bb4) ncim_list_query_list_pane_ParamLimits

0xe4e7,	// (0x00069bb4) ncim_list_query_list_pane

0x9b3d,	// (0x0006520a) bg_button_pane_cp027

0xe4fa,	// (0x00069bc7) ncim_query_button_pane_g1

0x9b3d,	// (0x0006520a) list_highlight_pane_cp012

0xe504,	// (0x00069bd1) ncim_list_query_list_pane_g1

0xe50c,	// (0x00069bd9) ncim_list_query_list_pane_t1

0x65f2,	// (0x00061cbf) cam4_indicators_pane_g3_ParamLimits

0x65f2,	// (0x00061cbf) cam4_indicators_pane_g3

0x66f7,	// (0x00061dc4) vid4_indicators_pane_g5_ParamLimits

0x66f7,	// (0x00061dc4) vid4_indicators_pane_g5

0x7724,	// (0x00062df1) vid4_progress_pane_g5_ParamLimits

0x7724,	// (0x00062df1) vid4_progress_pane_g5

0x7ffe,	// (0x000636cb) main_ncimui_pane_g1

0x8066,	// (0x00063733) ncimui_group_query_pane_ParamLimits

0x8066,	// (0x00063733) ncimui_group_query_pane

0x80ae,	// (0x0006377b) ncimui_list_pane_ParamLimits

0x80ae,	// (0x0006377b) ncimui_list_pane

0x80d5,	// (0x000637a2) ncimui_text_pane_ParamLimits

0x80d5,	// (0x000637a2) ncimui_text_pane

0x8175,	// (0x00063842) ncimui_text_pane_t1_ParamLimits

0x8175,	// (0x00063842) ncimui_text_pane_t1

0xe51a,	// (0x00069be7) ncimui_list_single_graphic_pane_ParamLimits

0xe51a,	// (0x00069be7) ncimui_list_single_graphic_pane

0x8194,	// (0x00063861) ncimui_query_pane_ParamLimits

0x8194,	// (0x00063861) ncimui_query_pane

0x9b3d,	// (0x0006520a) list_highlight_pane_cp013

0xe52a,	// (0x00069bf7) ncim_list_query_list_pane_t1_copy1

0xe504,	// (0x00069bd1) ncim_list_single_graphic_pane_g1

0xe538,	// (0x00069c05) ncim_query_button_pane_cp01

0xe544,	// (0x00069c11) ncim_query_entry_pane_ParamLimits

0xe544,	// (0x00069c11) ncim_query_entry_pane

0xe557,	// (0x00069c24) ncimui_query_pane_g1

0xe563,	// (0x00069c30) ncimui_query_pane_t1_ParamLimits

0xe563,	// (0x00069c30) ncimui_query_pane_t1

0xa733,	// (0x00065e00) input_focus_pane_cp012

0xe57c,	// (0x00069c49) ncim_query_entry_pane_t1

0xace4,	// (0x000663b1) main_im_pane_ParamLimits

0x460e,	// (0x0005fcdb) main_mobtv_pane_ParamLimits

0x460e,	// (0x0005fcdb) main_mobtv_pane

0x7dc7,	// (0x00063494) main_cset6_slider_pane_g18_ParamLimits

0x7dc7,	// (0x00063494) main_cset6_slider_pane_g18

0x7dd3,	// (0x000634a0) main_cset6_slider_pane_g19_ParamLimits

0x7dd3,	// (0x000634a0) main_cset6_slider_pane_g19

0xda0f,	// (0x000690dc) bg_main_mobtv_pane_ParamLimits

0xda0f,	// (0x000690dc) bg_main_mobtv_pane

0x81a7,	// (0x00063874) main_mobtv_info_pane

0x81b2,	// (0x0006387f) main_mobtv_loading_pane_ParamLimits

0x81b2,	// (0x0006387f) main_mobtv_loading_pane

0xe58e,	// (0x00069c5b) main_mobtv_pg_channel_list_pane

0xe598,	// (0x00069c65) main_mobtv_pg_hdr_pane

0x81bf,	// (0x0006388c) main_mobtv_programe_curr_pane_ParamLimits

0x81bf,	// (0x0006388c) main_mobtv_programe_curr_pane

0x81cc,	// (0x00063899) main_mobtv_programe_next_pane_ParamLimits

0x81cc,	// (0x00063899) main_mobtv_programe_next_pane

0xe5a1,	// (0x00069c6e) popup_mobtv_noti_window

0xcfe6,	// (0x000686b3) main_tv_pg_hdr_pane_g1

0xe5a9,	// (0x00069c76) main_tv_pg_hdr_pane_g2

0xe5b1,	// (0x00069c7e) main_tv_pg_hdr_pane_g3

0xe5c7,	// (0x00069c94) main_tv_pg_hdr_pane_g4

0xe5cf,	// (0x00069c9c) main_tv_pg_hdr_pane_g5

0xe5d9,	// (0x00069ca6) main_tv_pg_hdr_pane_g6

0xe5e3,	// (0x00069cb0) main_tv_pg_hdr_pane_g7

0xe5f6,	// (0x00069cc3) main_tv_pg_hdr_pane_g8

0xe600,	// (0x00069ccd) main_tv_pg_hdr_pane_g9

0xe61c,	// (0x00069ce9) main_tv_pg_hdr_pane_g10

0xe626,	// (0x00069cf3) main_tv_pg_hdr_pane_g11

0x000a,

0xf99b,	// (0x0006b068) main_tv_pg_hdr_pane_g

0xe630,	// (0x00069cfd) main_tv_pg_hdr_pane_t1

0xe63e,	// (0x00069d0b) main_tv_pg_hdr_pane_t2

0xe64c,	// (0x00069d19) main_tv_pg_hdr_pane_t3

0xe65c,	// (0x00069d29) main_tv_pg_hdr_pane_t4

0xe66c,	// (0x00069d39) main_tv_pg_hdr_pane_t5

0x0004,

0x0b2b,	// (0x0005c1f8) main_tv_pg_hdr_pane_t

0xe67c,	// (0x00069d49) single_mobtv_pg_channel_pane_ParamLimits

0xe67c,	// (0x00069d49) single_mobtv_pg_channel_pane

0xe68e,	// (0x00069d5b) single_mobtv_pg_channel_table_pane

0xe697,	// (0x00069d64) single_mobtv_pg_channel_thumb_pane

0xe6a0,	// (0x00069d6d) single_tv_pg_channel_pane_g1

0xe6a9,	// (0x00069d76) single_tv_pg_channel_pane_g2

0x0001,

0x0b36,	// (0x0005c203) single_tv_pg_channel_pane_g

0xd246,	// (0x00068913) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd246,	// (0x00068913) bg_single_mobtv_pg_channel_thumb_pane

0xe6b2,	// (0x00069d7f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe6b2,	// (0x00069d7f) single_mobtv_pg_channel_thumb_pane_g1

0xe6c0,	// (0x00069d8d) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe6c0,	// (0x00069d8d) single_mobtv_pg_channel_thumb_pane_g2

0xe6cc,	// (0x00069d99) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe6cc,	// (0x00069d99) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0b3b,	// (0x0005c208) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0b3b,	// (0x0005c208) single_mobtv_pg_channel_thumb_pane_g

0xe6d8,	// (0x00069da5) single_mobtv_pg_channel_thumb_pane_t1

0xe6e6,	// (0x00069db3) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0b42,	// (0x0005c20f) single_mobtv_pg_channel_thumb_pane_t

0xcfe6,	// (0x000686b3) bg_single_mobtv_pg_channel_table_pane_g1

0xcfe6,	// (0x000686b3) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x05ed,	// (0x0005bcba) bg_single_mobtv_pg_channel_table_pane_g

0xe6f4,	// (0x00069dc1) single_mobtv_pg_channel_table_pane_t1

0xe702,	// (0x00069dcf) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0b47,	// (0x0005c214) single_mobtv_pg_channel_table_pane_t

0x81e1,	// (0x000638ae) main_mobtv_info_pane_g1_ParamLimits

0x81e1,	// (0x000638ae) main_mobtv_info_pane_g1

0x81fd,	// (0x000638ca) main_mobtv_info_pane_t1_ParamLimits

0x81fd,	// (0x000638ca) main_mobtv_info_pane_t1

0x8275,	// (0x00063942) main_mobtv_info_pane_t2_ParamLimits

0x8275,	// (0x00063942) main_mobtv_info_pane_t2

0x0002,

0xf9b7,	// (0x0006b084) main_mobtv_info_pane_t_ParamLimits

0xf9b7,	// (0x0006b084) main_mobtv_info_pane_t

0x8304,	// (0x000639d1) wait_bar_pane_cp05

0x8316,	// (0x000639e3) main_mobtv_loading_pane_g1_ParamLimits

0x8316,	// (0x000639e3) main_mobtv_loading_pane_g1

0x8324,	// (0x000639f1) main_mobtv_loading_pane_g2_ParamLimits

0x8324,	// (0x000639f1) main_mobtv_loading_pane_g2

0x8330,	// (0x000639fd) main_mobtv_loading_pane_g3_ParamLimits

0x8330,	// (0x000639fd) main_mobtv_loading_pane_g3

0x0002,

0xf9be,	// (0x0006b08b) main_mobtv_loading_pane_g_ParamLimits

0xf9be,	// (0x0006b08b) main_mobtv_loading_pane_g

0xe710,	// (0x00069ddd) main_mobtv_loading_pane_t1_ParamLimits

0xe710,	// (0x00069ddd) main_mobtv_loading_pane_t1

0xe728,	// (0x00069df5) main_mobtv_loading_pane_t2_ParamLimits

0xe728,	// (0x00069df5) main_mobtv_loading_pane_t2

0x0001,

0x0b5f,	// (0x0005c22c) main_mobtv_loading_pane_t_ParamLimits

0x0b5f,	// (0x0005c22c) main_mobtv_loading_pane_t

0x833e,	// (0x00063a0b) wait_bar_pane_cp06_ParamLimits

0x833e,	// (0x00063a0b) wait_bar_pane_cp06

0xe74c,	// (0x00069e19) main_mobtv_programe_curr_pane_t1

0xe75a,	// (0x00069e27) main_mobtv_programe_curr_pane_t2

0x0001,

0x0b64,	// (0x0005c231) main_mobtv_programe_curr_pane_t

0xe768,	// (0x00069e35) main_mobtv_programe_next_pane_t1

0xe776,	// (0x00069e43) main_mobtv_programe_next_pane_t2

0xe784,	// (0x00069e51) main_mobtv_programe_next_pane_t3

0x0002,

0x0b69,	// (0x0005c236) main_mobtv_programe_next_pane_t

0x9b3d,	// (0x0006520a) bg_popup_mobtv_noti_window_pane

0xe792,	// (0x00069e5f) popup_mobtv_noti_window_g1

0xe79a,	// (0x00069e67) popup_mobtv_noti_window_t1

0xe7a8,	// (0x00069e75) popup_mobtv_noti_window_t2

0x0001,

0x0b70,	// (0x0005c23d) popup_mobtv_noti_window_t

0xcfe6,	// (0x000686b3) bg_popup_mobtv_noti_window_pane_g1

0x11cf,	// (0x0005c89c) sc_clock_pane

0x11cf,	// (0x0005c89c) main_fs_bigclock_pane

0x7939,	// (0x00063006) blid2_tripm_pane_t4_ParamLimits

0x7939,	// (0x00063006) blid2_tripm_pane_t4

0x834a,	// (0x00063a17) sc_clock_pane_g1_ParamLimits

0x834a,	// (0x00063a17) sc_clock_pane_g1

0x8358,	// (0x00063a25) sc_clock_pane_t1_ParamLimits

0x8358,	// (0x00063a25) sc_clock_pane_t1

0x836b,	// (0x00063a38) sc_clock_pane_t2_ParamLimits

0x836b,	// (0x00063a38) sc_clock_pane_t2

0x837d,	// (0x00063a4a) sc_clock_pane_t3_ParamLimits

0x837d,	// (0x00063a4a) sc_clock_pane_t3

0x0004,

0xf9c5,	// (0x0006b092) sc_clock_pane_t_ParamLimits

0xf9c5,	// (0x0006b092) sc_clock_pane_t

0x90e5,	// (0x000647b2) main_fs_bigclock_indicator_pane_ParamLimits

0x90e5,	// (0x000647b2) main_fs_bigclock_indicator_pane

0x8418,	// (0x00063ae5) main_fs_bigclock_pane_g1_ParamLimits

0x8418,	// (0x00063ae5) main_fs_bigclock_pane_g1

0x90f1,	// (0x000647be) main_fs_bigclock_pane_t1_ParamLimits

0x90f1,	// (0x000647be) main_fs_bigclock_pane_t1

0x9103,	// (0x000647d0) main_fs_bigclock_pane_t2_ParamLimits

0x9103,	// (0x000647d0) main_fs_bigclock_pane_t2

0x9115,	// (0x000647e2) main_fs_bigclock_pane_t3_ParamLimits

0x9115,	// (0x000647e2) main_fs_bigclock_pane_t3

0x0002,

0xfb5c,	// (0x0006b229) main_fs_bigclock_pane_t_ParamLimits

0xfb5c,	// (0x0006b229) main_fs_bigclock_pane_t

0xf034,	// (0x0006a701) main_fs_bigclock_indicator_pane_g1

0xe453,	// (0x00069b20) ncim_query_content_pane_g2_ParamLimits

0xe453,	// (0x00069b20) ncim_query_content_pane_g2

0x0001,

0xf989,	// (0x0006b056) ncim_query_content_pane_g_ParamLimits

0xf989,	// (0x0006b056) ncim_query_content_pane_g

0x8391,	// (0x00063a5e) sc_clock_pane_t4_ParamLimits

0x8391,	// (0x00063a5e) sc_clock_pane_t4

0x460e,	// (0x0005fcdb) main_radioblah_pane

0xd980,	// (0x0006904d) cell_call4_button_pane_t1_copy1_ParamLimits

0xd980,	// (0x0006904d) cell_call4_button_pane_t1_copy1

0x8018,	// (0x000636e5) main_ncimui_pane_t1_ParamLimits

0x8018,	// (0x000636e5) main_ncimui_pane_t1

0x8032,	// (0x000636ff) main_ncimui_pane_t2_ParamLimits

0x8032,	// (0x000636ff) main_ncimui_pane_t2

0x0002,

0xf982,	// (0x0006b04f) main_ncimui_pane_t_ParamLimits

0xf982,	// (0x0006b04f) main_ncimui_pane_t

0xe8e3,	// (0x00069fb0) main_radioblah_anim_pane_ParamLimits

0xe8e3,	// (0x00069fb0) main_radioblah_anim_pane

0xe8f4,	// (0x00069fc1) main_radioblah_info_pane_ParamLimits

0xe8f4,	// (0x00069fc1) main_radioblah_info_pane

0xe908,	// (0x00069fd5) main_radioblah_pane_t1_ParamLimits

0xe908,	// (0x00069fd5) main_radioblah_pane_t1

0xe924,	// (0x00069ff1) main_radioblah_pane_t2_ParamLimits

0xe924,	// (0x00069ff1) main_radioblah_pane_t2

0x0003,

0x0b96,	// (0x0005c263) main_radioblah_pane_t_ParamLimits

0x0b96,	// (0x0005c263) main_radioblah_pane_t

0x846a,	// (0x00063b37) main_radioblah_rocker_ctrl_pane_ParamLimits

0x846a,	// (0x00063b37) main_radioblah_rocker_ctrl_pane

0xe96c,	// (0x0006a039) main_radioblah_info_pane_t1_ParamLimits

0xe96c,	// (0x0006a039) main_radioblah_info_pane_t1

0x84af,	// (0x00063b7c) main_radioblah_info_pane_t2_ParamLimits

0x84af,	// (0x00063b7c) main_radioblah_info_pane_t2

0x0003,

0xf9d0,	// (0x0006b09d) main_radioblah_info_pane_t_ParamLimits

0xf9d0,	// (0x0006b09d) main_radioblah_info_pane_t

0xcfe6,	// (0x000686b3) main_radioblah_rocker_ctrl_pane_g1

0x855f,	// (0x00063c2c) main_radioblah_rocker_ctrl_pane_g2

0x8567,	// (0x00063c34) main_radioblah_rocker_ctrl_pane_g3

0x856f,	// (0x00063c3c) main_radioblah_rocker_ctrl_pane_g4

0x8577,	// (0x00063c44) main_radioblah_rocker_ctrl_pane_g5

0x857f,	// (0x00063c4c) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xf9d9,	// (0x0006b0a6) main_radioblah_rocker_ctrl_pane_g

0x7fb8,	// (0x00063685) main_cset_text2_pane_t1_copy1_ParamLimits

0x6512,	// (0x00061bdf) cam4_image_uncrop_qvga_pane

0x6667,	// (0x00061d34) vid4_image_uncrop_qcif_pane

0x7ac7,	// (0x00063194) cam6_image_uncrop_qvga_pane_ParamLimits

0x7ac7,	// (0x00063194) cam6_image_uncrop_qvga_pane

0xe15a,	// (0x00069827) vid6_image_uncrop_qcif_pane_ParamLimits

0xe15a,	// (0x00069827) vid6_image_uncrop_qcif_pane

0x9b3d,	// (0x0006520a) bg_popup_preview_window_pane_cp03

0xe405,	// (0x00069ad2) list_cset_text2_pane

0xe40d,	// (0x00069ada) main_cset6_text2_pane_g1

0xe415,	// (0x00069ae2) main_cset6_text2_pane_t1

0x8587,	// (0x00063c54) list_cset_text2_pane_t1_ParamLimits

0x8587,	// (0x00063c54) list_cset_text2_pane_t1

0x460e,	// (0x0005fcdb) main_radioblah_pane_ParamLimits

0x82f0,	// (0x000639bd) main_mobtv_info_pane_t3_ParamLimits

0x82f0,	// (0x000639bd) main_mobtv_info_pane_t3

0x8458,	// (0x00063b25) main_radioblah_pane_g1

0x8483,	// (0x00063b50) main_radioblah_info_pane_g1

0x8504,	// (0x00063bd1) main_radioblah_info_pane_t3_ParamLimits

0x8504,	// (0x00063bd1) main_radioblah_info_pane_t3

0x31f0,	// (0x0005e8bd) highlight_cell_cale_month_pane_ParamLimits

0x31f0,	// (0x0005e8bd) highlight_cell_cale_month_pane

0x11cf,	// (0x0005c89c) main_phob_fisheye_pane

0xd322,	// (0x000689ef) scroll_pane_cp0031_ParamLimits

0xd322,	// (0x000689ef) scroll_pane_cp0031

0xe268,	// (0x00069935) wait_bar_pane_cp08_ParamLimits

0x7cd8,	// (0x000633a5) cset_list_set_pane_copy1_ParamLimits

0xe9a6,	// (0x0006a073) highlight_cell_cale_month_pane_g1

0x85ae,	// (0x00063c7b) highlight_cell_cale_month_pane_t1

0xdeeb,	// (0x000695b8) list_gen_pane_cp01

0xdb49,	// (0x00069216) scroll_pane_01

0xb3ba,	// (0x00066a87) list_single_double_fisheye_pane

0x9e6c,	// (0x00065539) list_double_fisheye_pane_g1_ParamLimits

0x9e6c,	// (0x00065539) list_double_fisheye_pane_g1

0x9e78,	// (0x00065545) list_double_fisheye_pane_g2_ParamLimits

0x9e78,	// (0x00065545) list_double_fisheye_pane_g2

0xb3c3,	// (0x00066a90) list_double_fisheye_pane_g3_ParamLimits

0xb3c3,	// (0x00066a90) list_double_fisheye_pane_g3

0x0004,

0xf9e6,	// (0x0006b0b3) list_double_fisheye_pane_g_ParamLimits

0xf9e6,	// (0x0006b0b3) list_double_fisheye_pane_g

0xa3b4,	// (0x00065a81) list_double_fisheye_pane_t1_ParamLimits

0xa3b4,	// (0x00065a81) list_double_fisheye_pane_t1

0xa3cf,	// (0x00065a9c) list_double_fisheye_pane_t2_ParamLimits

0xa3cf,	// (0x00065a9c) list_double_fisheye_pane_t2

0x0001,

0xf9f1,	// (0x0006b0be) list_double_fisheye_pane_t_ParamLimits

0xf9f1,	// (0x0006b0be) list_double_fisheye_pane_t

0x11cf,	// (0x0005c89c) main_call5_pane

0x83b7,	// (0x00063a84) sc_swipe_pane_ParamLimits

0x83b7,	// (0x00063a84) sc_swipe_pane

0x85c8,	// (0x00063c95) call5_image_pane_ParamLimits

0x85c8,	// (0x00063c95) call5_image_pane

0x85d8,	// (0x00063ca5) call5_swipe_1_pane_ParamLimits

0x85d8,	// (0x00063ca5) call5_swipe_1_pane

0x85e4,	// (0x00063cb1) call5_swipe_2_pane_ParamLimits

0x85e4,	// (0x00063cb1) call5_swipe_2_pane

0x85fe,	// (0x00063ccb) popup_call5_audio_first_window_ParamLimits

0x85fe,	// (0x00063ccb) popup_call5_audio_first_window

0xd246,	// (0x00068913) call5_swipe_1_pane_g1_ParamLimits

0xd246,	// (0x00068913) call5_swipe_1_pane_g1

0xe9ae,	// (0x0006a07b) call5_swipe_1_pane_g2_ParamLimits

0xe9ae,	// (0x0006a07b) call5_swipe_1_pane_g2

0x0001,

0x0bc5,	// (0x0005c292) call5_swipe_1_pane_g_ParamLimits

0x0bc5,	// (0x0005c292) call5_swipe_1_pane_g

0xe9ba,	// (0x0006a087) call5_swipe_1_pane_t1_ParamLimits

0xe9ba,	// (0x0006a087) call5_swipe_1_pane_t1

0xd246,	// (0x00068913) call5_swipe_2_pane_g1_ParamLimits

0xd246,	// (0x00068913) call5_swipe_2_pane_g1

0xe9cf,	// (0x0006a09c) call5_swipe_2_pane_g2_ParamLimits

0xe9cf,	// (0x0006a09c) call5_swipe_2_pane_g2

0x0001,

0x0bca,	// (0x0005c297) call5_swipe_2_pane_g_ParamLimits

0x0bca,	// (0x0005c297) call5_swipe_2_pane_g

0xe9db,	// (0x0006a0a8) call5_swipe_2_pane_t1_ParamLimits

0xe9db,	// (0x0006a0a8) call5_swipe_2_pane_t1

0xe9f0,	// (0x0006a0bd) sc_swipe_pane_g1_ParamLimits

0xe9f0,	// (0x0006a0bd) sc_swipe_pane_g1

0xe9fd,	// (0x0006a0ca) sc_swipe_pane_g2_ParamLimits

0xe9fd,	// (0x0006a0ca) sc_swipe_pane_g2

0x0001,

0x0bcf,	// (0x0005c29c) sc_swipe_pane_g_ParamLimits

0x0bcf,	// (0x0005c29c) sc_swipe_pane_g

0xea09,	// (0x0006a0d6) sc_swipe_pane_t1_ParamLimits

0xea09,	// (0x0006a0d6) sc_swipe_pane_t1

0x11cf,	// (0x0005c89c) main_cmail_launcher_pane

0x860c,	// (0x00063cd9) aid_size_cell_cmail_l_ParamLimits

0x860c,	// (0x00063cd9) aid_size_cell_cmail_l

0x861c,	// (0x00063ce9) grid_cmail_l_pane_ParamLimits

0x861c,	// (0x00063ce9) grid_cmail_l_pane

0x862c,	// (0x00063cf9) cell_cmail_l_pane_ParamLimits

0x862c,	// (0x00063cf9) cell_cmail_l_pane

0x8640,	// (0x00063d0d) cell_cmail_l_pane_g1_ParamLimits

0x8640,	// (0x00063d0d) cell_cmail_l_pane_g1

0x8651,	// (0x00063d1e) cell_cmail_l_pane_t1_ParamLimits

0x8651,	// (0x00063d1e) cell_cmail_l_pane_t1

0xea1e,	// (0x0006a0eb) cell_cmail_l_pane_t2_ParamLimits

0xea1e,	// (0x0006a0eb) cell_cmail_l_pane_t2

0x0001,

0xf9f6,	// (0x0006b0c3) cell_cmail_l_pane_t_ParamLimits

0xf9f6,	// (0x0006b0c3) cell_cmail_l_pane_t

0xa733,	// (0x00065e00) grid_highlight_pane_cp018_ParamLimits

0xa733,	// (0x00065e00) grid_highlight_pane_cp018

0x1025,	// (0x0005c6f2) main2_pane_ParamLimits

0x1025,	// (0x0005c6f2) main2_pane

0xad8f,	// (0x0006645c) popup_sp_fs_action_menu_bg_pane_g1

0xad97,	// (0x00066464) popup_sp_fs_action_menu_bg_pane_g2

0xad9f,	// (0x0006646c) popup_sp_fs_action_menu_bg_pane_g3

0xada7,	// (0x00066474) popup_sp_fs_action_menu_bg_pane_g4

0xadaf,	// (0x0006647c) popup_sp_fs_action_menu_bg_pane_g5

0xadb7,	// (0x00066484) popup_sp_fs_action_menu_bg_pane_g6

0xadbf,	// (0x0006648c) popup_sp_fs_action_menu_bg_pane_g7

0xadc7,	// (0x00066494) popup_sp_fs_action_menu_bg_pane_g8

0xadcf,	// (0x0006649c) popup_sp_fs_action_menu_bg_pane_g9

0xadd7,	// (0x000664a4) popup_sp_fs_action_menu_bg_pane_g10

0xadd7,	// (0x000664a4) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x0006a860) popup_sp_fs_action_menu_bg_pane_g

0x1fa4,	// (0x0005d671) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1fa4,	// (0x0005d671) list_medium_line_x2_t3_g3_g1

0x9bed,	// (0x000652ba) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9bed,	// (0x000652ba) list_medium_line_x2_t3_g3_g2

0x1fb0,	// (0x0005d67d) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1fb0,	// (0x0005d67d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x0006a910) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x0006a910) list_medium_line_x2_t3_g3_g

0x1fbc,	// (0x0005d689) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1fbc,	// (0x0005d689) list_medium_line_x2_t3_g3_t1

0x1fd1,	// (0x0005d69e) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1fd1,	// (0x0005d69e) list_medium_line_x2_t3_g3_t2

0x1fe3,	// (0x0005d6b0) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1fe3,	// (0x0005d6b0) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x0006a917) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x0006a917) list_medium_line_x2_t3_g3_t

0x1fa4,	// (0x0005d671) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1fa4,	// (0x0005d671) list_medium_line_x2_t3_g2_g1

0x1fb0,	// (0x0005d67d) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1fb0,	// (0x0005d67d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x0006a91e) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x0006a91e) list_medium_line_x2_t3_g2_g

0x1ff8,	// (0x0005d6c5) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1ff8,	// (0x0005d6c5) list_medium_line_x2_t3_g2_t1

0x200e,	// (0x0005d6db) list_medium_line_x2_t3_g2_t2_ParamLimits

0x200e,	// (0x0005d6db) list_medium_line_x2_t3_g2_t2

0x1fe3,	// (0x0005d6b0) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1fe3,	// (0x0005d6b0) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x0006a923) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x0006a923) list_medium_line_x2_t3_g2_t

0x1fa4,	// (0x0005d671) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1fa4,	// (0x0005d671) list_medium_line_x2_t4_g4_g1

0x9bf9,	// (0x000652c6) list_medium_line_x2_t4_g4_g2_ParamLimits

0x9bf9,	// (0x000652c6) list_medium_line_x2_t4_g4_g2

0x9bed,	// (0x000652ba) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9bed,	// (0x000652ba) list_medium_line_x2_t4_g4_g3

0x2020,	// (0x0005d6ed) list_medium_line_x2_t4_g4_g4_ParamLimits

0x2020,	// (0x0005d6ed) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x0006a92a) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x0006a92a) list_medium_line_x2_t4_g4_g

0x202c,	// (0x0005d6f9) list_medium_line_x2_t4_g4_t1_ParamLimits

0x202c,	// (0x0005d6f9) list_medium_line_x2_t4_g4_t1

0x2043,	// (0x0005d710) list_medium_line_x2_t4_g4_t2_ParamLimits

0x2043,	// (0x0005d710) list_medium_line_x2_t4_g4_t2

0x2058,	// (0x0005d725) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2058,	// (0x0005d725) list_medium_line_x2_t4_g4_t3

0x206a,	// (0x0005d737) list_medium_line_x2_t4_g4_t4_ParamLimits

0x206a,	// (0x0005d737) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x0006a933) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x0006a933) list_medium_line_x2_t4_g4_t

0x1fa4,	// (0x0005d671) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1fa4,	// (0x0005d671) list_medium_line_x2_t2_g4_g1

0x9bf9,	// (0x000652c6) list_medium_line_x2_t2_g4_g2_ParamLimits

0x9bf9,	// (0x000652c6) list_medium_line_x2_t2_g4_g2

0x9bed,	// (0x000652ba) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9bed,	// (0x000652ba) list_medium_line_x2_t2_g4_g3

0x1fb0,	// (0x0005d67d) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1fb0,	// (0x0005d67d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x0006a99a) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x0006a99a) list_medium_line_x2_t2_g4_g

0x3216,	// (0x0005e8e3) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3216,	// (0x0005e8e3) list_medium_line_x2_t2_g4_t1

0x1fe3,	// (0x0005d6b0) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1fe3,	// (0x0005d6b0) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x0006a9a3) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x0006a9a3) list_medium_line_x2_t2_g4_t

0x1fa4,	// (0x0005d671) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1fa4,	// (0x0005d671) list_medium_line_x2_t2_g3_g1

0x9bed,	// (0x000652ba) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9bed,	// (0x000652ba) list_medium_line_x2_t2_g3_g2

0x1fb0,	// (0x0005d67d) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1fb0,	// (0x0005d67d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf243,	// (0x0006a910) list_medium_line_x2_t2_g3_g_ParamLimits

0xf243,	// (0x0006a910) list_medium_line_x2_t2_g3_g

0x322b,	// (0x0005e8f8) list_medium_line_x2_t2_g3_t1_ParamLimits

0x322b,	// (0x0005e8f8) list_medium_line_x2_t2_g3_t1

0x1fe3,	// (0x0005d6b0) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1fe3,	// (0x0005d6b0) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2db,	// (0x0006a9a8) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2db,	// (0x0006a9a8) list_medium_line_x2_t2_g3_t

0x3483,	// (0x0005eb50) main_sp_fs_list_pane_ParamLimits

0x3483,	// (0x0005eb50) main_sp_fs_list_pane

0x348f,	// (0x0005eb5c) sp_fs_scroll_pane_ParamLimits

0x348f,	// (0x0005eb5c) sp_fs_scroll_pane

0x349b,	// (0x0005eb68) list_medium_line_x2_t3_t1

0x34ab,	// (0x0005eb78) list_medium_line_x2_t3_t2

0x34b9,	// (0x0005eb86) list_medium_line_x2_t3_t3

0x0002,

0xf326,	// (0x0006a9f3) list_medium_line_x2_t3_t

0x34c7,	// (0x0005eb94) list_medium_line_x3_t4_t1

0x34d7,	// (0x0005eba4) list_medium_line_x3_t4_t2

0x34e5,	// (0x0005ebb2) list_medium_line_x3_t4_t3

0x34b9,	// (0x0005eb86) list_medium_line_x3_t4_t4

0x0003,

0xf32d,	// (0x0006a9fa) list_medium_line_x3_t4_t

0x34f3,	// (0x0005ebc0) list_medium_line_x4_t5_t1

0x3503,	// (0x0005ebd0) list_medium_line_x4_t5_t2

0x34e5,	// (0x0005ebb2) list_medium_line_x4_t5_t3

0x3511,	// (0x0005ebde) list_medium_line_x4_t5_t4

0x34b9,	// (0x0005eb86) list_medium_line_x4_t5_t5

0x0004,

0xf336,	// (0x0006aa03) list_medium_line_x4_t5_t

0x1fa4,	// (0x0005d671) list_medium_line_t4_g4_g1_ParamLimits

0x1fa4,	// (0x0005d671) list_medium_line_t4_g4_g1

0x2020,	// (0x0005d6ed) list_medium_line_t4_g4_g2_ParamLimits

0x2020,	// (0x0005d6ed) list_medium_line_t4_g4_g2

0x351f,	// (0x0005ebec) list_medium_line_t4_g4_g3_ParamLimits

0x351f,	// (0x0005ebec) list_medium_line_t4_g4_g3

0x1fb0,	// (0x0005d67d) list_medium_line_t4_g4_g4_ParamLimits

0x1fb0,	// (0x0005d67d) list_medium_line_t4_g4_g4

0x0003,

0xf341,	// (0x0006aa0e) list_medium_line_t4_g4_g_ParamLimits

0xf341,	// (0x0006aa0e) list_medium_line_t4_g4_g

0x352b,	// (0x0005ebf8) list_medium_line_t4_g4_t1_ParamLimits

0x352b,	// (0x0005ebf8) list_medium_line_t4_g4_t1

0x3540,	// (0x0005ec0d) list_medium_line_t4_g4_t2_ParamLimits

0x3540,	// (0x0005ec0d) list_medium_line_t4_g4_t2

0x3555,	// (0x0005ec22) list_medium_line_t4_g4_t3_ParamLimits

0x3555,	// (0x0005ec22) list_medium_line_t4_g4_t3

0x1fe3,	// (0x0005d6b0) list_medium_line_t4_g4_t4_ParamLimits

0x1fe3,	// (0x0005d6b0) list_medium_line_t4_g4_t4

0x0003,

0xf34a,	// (0x0006aa17) list_medium_line_t4_g4_t_ParamLimits

0xf34a,	// (0x0006aa17) list_medium_line_t4_g4_t

0x3655,	// (0x0005ed22) chi_dic_find_pane_g1

0x462a,	// (0x0005fcf7) main_tport_pane

0x9d50,	// (0x0006541d) list_medium_line_plain_t1

0x9d5e,	// (0x0006542b) list_medium_line_t2_g2_g1_ParamLimits

0x9d5e,	// (0x0006542b) list_medium_line_t2_g2_g1

0x9d6a,	// (0x00065437) list_medium_line_t2_g2_g2_ParamLimits

0x9d6a,	// (0x00065437) list_medium_line_t2_g2_g2

0x0001,

0xf80a,	// (0x0006aed7) list_medium_line_t2_g2_g_ParamLimits

0xf80a,	// (0x0006aed7) list_medium_line_t2_g2_g

0x7114,	// (0x000627e1) list_medium_line_t2_g2_t1_ParamLimits

0x7114,	// (0x000627e1) list_medium_line_t2_g2_t1

0x712e,	// (0x000627fb) list_medium_line_t2_g2_t2_ParamLimits

0x712e,	// (0x000627fb) list_medium_line_t2_g2_t2

0x0001,

0xf80f,	// (0x0006aedc) list_medium_line_t2_g2_t_ParamLimits

0xf80f,	// (0x0006aedc) list_medium_line_t2_g2_t

0x9e12,	// (0x000654df) aid_sp_fs_list_icon_a_sm

0x9e1a,	// (0x000654e7) aid_sp_fs_list_icon_d

0x9e22,	// (0x000654ef) aid_sp_fs_text_primary

0xe5ed,	// (0x00069cba) aid_sp_fs_text_secondary

0x9e2b,	// (0x000654f8) list_medium_line

0x9e2b,	// (0x000654f8) list_medium_line_g2

0x9e2b,	// (0x000654f8) list_medium_line_g3

0x9e2b,	// (0x000654f8) list_medium_line_plain

0x9e2b,	// (0x000654f8) list_medium_line_plain_t2

0x9e2b,	// (0x000654f8) list_medium_line_plain_t3

0x9e2b,	// (0x000654f8) list_medium_line_right_icon

0x9e2b,	// (0x000654f8) list_medium_line_right_iconx2

0x9e2b,	// (0x000654f8) list_medium_line_t2

0x9e2b,	// (0x000654f8) list_medium_line_t2_g2

0x9e2b,	// (0x000654f8) list_medium_line_t2_g3

0x9e2b,	// (0x000654f8) list_medium_line_t2_right_icon

0x9e2b,	// (0x000654f8) list_medium_line_t2_right_iconx2

0x9e2b,	// (0x000654f8) list_medium_line_t3

0x9e2b,	// (0x000654f8) list_medium_line_t3_g2

0x9e2b,	// (0x000654f8) list_medium_line_t3_g3

0x9e2b,	// (0x000654f8) list_medium_line_t3_right_iconx2

0x7784,	// (0x00062e51) list_medium_line_t4_g4

0x778d,	// (0x00062e5a) list_medium_line_x2

0x778d,	// (0x00062e5a) list_medium_line_x2_t2_g2

0x778d,	// (0x00062e5a) list_medium_line_x2_t2_g3

0x778d,	// (0x00062e5a) list_medium_line_x2_t2_g4

0x778d,	// (0x00062e5a) list_medium_line_x2_t3

0x778d,	// (0x00062e5a) list_medium_line_x2_t3_g2

0x778d,	// (0x00062e5a) list_medium_line_x2_t3_g3

0x778d,	// (0x00062e5a) list_medium_line_x2_t3_g4

0x778d,	// (0x00062e5a) list_medium_line_x2_t4_g2

0x778d,	// (0x00062e5a) list_medium_line_x2_t4_g4

0x7796,	// (0x00062e63) list_medium_line_x3

0x7796,	// (0x00062e63) list_medium_line_x3_t4

0x7796,	// (0x00062e63) list_medium_line_x3_t4_g4

0x7784,	// (0x00062e51) list_medium_line_x4_t4

0x7784,	// (0x00062e51) list_medium_line_x4_t4_g7

0x7784,	// (0x00062e51) list_medium_line_x4_t5

0x779f,	// (0x00062e6c) list_single_fs_dyc_pane_ParamLimits

0x779f,	// (0x00062e6c) list_single_fs_dyc_pane

0x1fa4,	// (0x0005d671) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1fa4,	// (0x0005d671) list_medium_line_x4_t4_g7_g1

0x7f1f,	// (0x000635ec) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7f1f,	// (0x000635ec) list_medium_line_x4_t4_g7_g2

0x9e34,	// (0x00065501) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9e34,	// (0x00065501) list_medium_line_x4_t4_g7_g3

0x9e43,	// (0x00065510) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9e43,	// (0x00065510) list_medium_line_x4_t4_g7_g4

0x7f2b,	// (0x000635f8) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7f2b,	// (0x000635f8) list_medium_line_x4_t4_g7_g5

0x7f3a,	// (0x00063607) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7f3a,	// (0x00063607) list_medium_line_x4_t4_g7_g6

0x7f49,	// (0x00063616) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7f49,	// (0x00063616) list_medium_line_x4_t4_g7_g7

0x0006,

0xf963,	// (0x0006b030) list_medium_line_x4_t4_g7_g_ParamLimits

0xf963,	// (0x0006b030) list_medium_line_x4_t4_g7_g

0x7f55,	// (0x00063622) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7f55,	// (0x00063622) list_medium_line_x4_t4_g7_t1

0x7f6a,	// (0x00063637) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7f6a,	// (0x00063637) list_medium_line_x4_t4_g7_t2

0x7f7f,	// (0x0006364c) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7f7f,	// (0x0006364c) list_medium_line_x4_t4_g7_t3

0x7f94,	// (0x00063661) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7f94,	// (0x00063661) list_medium_line_x4_t4_g7_t4

0x7fa6,	// (0x00063673) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7fa6,	// (0x00063673) list_medium_line_x4_t4_g7_t5

0x0004,

0xf972,	// (0x0006b03f) list_medium_line_x4_t4_g7_t_ParamLimits

0xf972,	// (0x0006b03f) list_medium_line_x4_t4_g7_t

0x9e4f,	// (0x0006551c) list_single_dyc_row_pane_ParamLimits

0x9e4f,	// (0x0006551c) list_single_dyc_row_pane

0x85bc,	// (0x00063c89) call5_gesture_pane_ParamLimits

0x85bc,	// (0x00063c89) call5_gesture_pane

0x85f0,	// (0x00063cbd) call5_windows_pane_ParamLimits

0x85f0,	// (0x00063cbd) call5_windows_pane

0x8667,	// (0x00063d34) call5_swipe_1_pane_cp_ParamLimits

0x8667,	// (0x00063d34) call5_swipe_1_pane_cp

0x8673,	// (0x00063d40) call5_swipe_2_pane_cp_ParamLimits

0x8673,	// (0x00063d40) call5_swipe_2_pane_cp

0xb7c0,	// (0x00066e8d) call5_image_pane_cp

0x867f,	// (0x00063d4c) popup_call5_audio_first_window_cp_ParamLimits

0x867f,	// (0x00063d4c) popup_call5_audio_first_window_cp

0xe9f0,	// (0x0006a0bd) call5_swipe_1_pane_g1_cp_ParamLimits

0xe9f0,	// (0x0006a0bd) call5_swipe_1_pane_g1_cp

0xea30,	// (0x0006a0fd) call5_swipe_1_pane_g2_cp

0xea09,	// (0x0006a0d6) call5_swipe_1_pane_t1_cp_ParamLimits

0xea09,	// (0x0006a0d6) call5_swipe_1_pane_t1_cp

0xe9f0,	// (0x0006a0bd) call5_swipe_2_pane_g1_cp_ParamLimits

0xe9f0,	// (0x0006a0bd) call5_swipe_2_pane_g1_cp

0xea38,	// (0x0006a105) call5_swipe_2_pane_g2_cp

0xea40,	// (0x0006a10d) call5_swipe_2_pane_t1_cp_ParamLimits

0xea40,	// (0x0006a10d) call5_swipe_2_pane_t1_cp

0xa733,	// (0x00065e00) main_sp_fs_email_pane

0xea55,	// (0x0006a122) main_sp_fs_listscroll_pane_te

0x868d,	// (0x00063d5a) popup_sp_fs_action_menu_pane_ParamLimits

0x868d,	// (0x00063d5a) popup_sp_fs_action_menu_pane

0xcfe6,	// (0x000686b3) bg_sp_fs_ctrlbar_pane_g1

0xea5e,	// (0x0006a12b) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xea67,	// (0x0006a134) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xea70,	// (0x0006a13d) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcfe6,	// (0x000686b3) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0x0bd9,	// (0x0005c2a6) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcdc9,	// (0x00068496) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcdc9,	// (0x00068496) bg_sp_fs_ctrlbar_ddmenu_pane

0xea79,	// (0x0006a146) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xea79,	// (0x0006a146) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xea85,	// (0x0006a152) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xea85,	// (0x0006a152) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0be2,	// (0x0005c2af) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0be2,	// (0x0005c2af) main_sp_fs_ctrlbar_ddmenu_pane_g

0xea91,	// (0x0006a15e) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xea91,	// (0x0006a15e) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa3f1,	// (0x00065abe) list_medium_line_t2_right_icon_g1

0x86cf,	// (0x00063d9c) list_medium_line_t2_right_icon_t1

0x86df,	// (0x00063dac) list_medium_line_t2_right_icon_t2

0x0001,

0xf9fb,	// (0x0006b0c8) list_medium_line_t2_right_icon_t

0xcbd0,	// (0x0006829d) bg_sp_fs_ctrlbar_pane_ParamLimits

0xcbd0,	// (0x0006829d) bg_sp_fs_ctrlbar_pane

0x8744,	// (0x00063e11) main_sp_fs_ctrlbar_button_pane_cp01

0x874c,	// (0x00063e19) main_sp_fs_ctrlbar_ddmenu_pane

0xeae3,	// (0x0006a1b0) main_sp_fs_ctrlbar_pane_g1

0xeaef,	// (0x0006a1bc) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x0bec,	// (0x0005c2b9) main_sp_fs_ctrlbar_pane_g

0xeafb,	// (0x0006a1c8) main_sp_fs_ctrlbar_pane_t1

0x8756,	// (0x00063e23) main_sp_fs_ctrlbar_pane

0x876c,	// (0x00063e39) main_sp_fs_listscroll_pane_te_cp01

0x877d,	// (0x00063e4a) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x877d,	// (0x00063e4a) popup_sp_fs_action_menu_pane_cp01

0xa733,	// (0x00065e00) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa733,	// (0x00065e00) bg_sp_fs_highlight_list_pane_cp01

0xa3f9,	// (0x00065ac6) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa3f9,	// (0x00065ac6) sp_fs_action_menu_list_gene_pane_g1

0xeb2b,	// (0x0006a1f8) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xeb2b,	// (0x0006a1f8) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfa00,	// (0x0006b0cd) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfa00,	// (0x0006b0cd) sp_fs_action_menu_list_gene_pane_g

0xa408,	// (0x00065ad5) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa408,	// (0x00065ad5) sp_fs_action_menu_list_gene_pane_t1

0xa420,	// (0x00065aed) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa420,	// (0x00065aed) sp_fs_action_menu_list_gene_pane

0xeb38,	// (0x0006a205) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xeb38,	// (0x0006a205) popup_sp_fs_action_menu_bg_pane

0xa43f,	// (0x00065b0c) sp_fs_action_menu_list_pane_ParamLimits

0xa43f,	// (0x00065b0c) sp_fs_action_menu_list_pane

0x87a7,	// (0x00063e74) sp_fs_scroll_pane_cp01_ParamLimits

0x87a7,	// (0x00063e74) sp_fs_scroll_pane_cp01

0x87cd,	// (0x00063e9a) list_medium_line_plain_t2_t1

0x87dd,	// (0x00063eaa) list_medium_line_plain_t2_t2

0x0001,

0xfa05,	// (0x0006b0d2) list_medium_line_plain_t2_t

0x87eb,	// (0x00063eb8) list_medium_line_plain_t3_t1

0x87fb,	// (0x00063ec8) list_medium_line_plain_t3_t2

0x8809,	// (0x00063ed6) list_medium_line_plain_t3_t3

0x0002,

0xfa0a,	// (0x0006b0d7) list_medium_line_plain_t3_t

0x1fa4,	// (0x0005d671) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1fa4,	// (0x0005d671) list_medium_line_x2_t2_g2_g1

0x1fb0,	// (0x0005d67d) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1fb0,	// (0x0005d67d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x0006a91e) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x0006a91e) list_medium_line_x2_t2_g2_g

0x352b,	// (0x0005ebf8) list_medium_line_x2_t2_g2_t1_ParamLimits

0x352b,	// (0x0005ebf8) list_medium_line_x2_t2_g2_t1

0x1fe3,	// (0x0005d6b0) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1fe3,	// (0x0005d6b0) list_medium_line_x2_t2_g2_t2

0x0001,

0xfa11,	// (0x0006b0de) list_medium_line_x2_t2_g2_t_ParamLimits

0xfa11,	// (0x0006b0de) list_medium_line_x2_t2_g2_t

0x1fa4,	// (0x0005d671) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1fa4,	// (0x0005d671) list_medium_line_x2_t4_g2_g1

0x8817,	// (0x00063ee4) list_medium_line_x2_t4_g2_g2_ParamLimits

0x8817,	// (0x00063ee4) list_medium_line_x2_t4_g2_g2

0x0001,

0xfa16,	// (0x0006b0e3) list_medium_line_x2_t4_g2_g_ParamLimits

0xfa16,	// (0x0006b0e3) list_medium_line_x2_t4_g2_g

0x8828,	// (0x00063ef5) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8828,	// (0x00063ef5) list_medium_line_x2_t4_g2_t1

0x883f,	// (0x00063f0c) list_medium_line_x2_t4_g2_t2_ParamLimits

0x883f,	// (0x00063f0c) list_medium_line_x2_t4_g2_t2

0x8854,	// (0x00063f21) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8854,	// (0x00063f21) list_medium_line_x2_t4_g2_t3

0x1fe3,	// (0x0005d6b0) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1fe3,	// (0x0005d6b0) list_medium_line_x2_t4_g2_t4

0x0003,

0xfa1b,	// (0x0006b0e8) list_medium_line_x2_t4_g2_t_ParamLimits

0xfa1b,	// (0x0006b0e8) list_medium_line_x2_t4_g2_t

0xa45f,	// (0x00065b2c) list_medium_line_t3_right_iconx2_g1

0xa3f1,	// (0x00065abe) list_medium_line_t3_right_iconx2_g2

0x8866,	// (0x00063f33) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfa24,	// (0x0006b0f1) list_medium_line_t3_right_iconx2_g

0x886e,	// (0x00063f3b) list_medium_line_t3_right_iconx2_t1

0x887e,	// (0x00063f4b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfa2b,	// (0x0006b0f8) list_medium_line_t3_right_iconx2_t

0x1fa4,	// (0x0005d671) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1fa4,	// (0x0005d671) list_medium_line_x3_t4_g4_g1

0x9bed,	// (0x000652ba) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9bed,	// (0x000652ba) list_medium_line_x3_t4_g4_g2

0x2020,	// (0x0005d6ed) list_medium_line_x3_t4_g4_g3_ParamLimits

0x2020,	// (0x0005d6ed) list_medium_line_x3_t4_g4_g3

0xa467,	// (0x00065b34) list_medium_line_x3_t4_g4_g4_ParamLimits

0xa467,	// (0x00065b34) list_medium_line_x3_t4_g4_g4

0x0003,

0xfa30,	// (0x0006b0fd) list_medium_line_x3_t4_g4_g_ParamLimits

0xfa30,	// (0x0006b0fd) list_medium_line_x3_t4_g4_g

0x888c,	// (0x00063f59) list_medium_line_x3_t4_g4_t1_ParamLimits

0x888c,	// (0x00063f59) list_medium_line_x3_t4_g4_t1

0x88a3,	// (0x00063f70) list_medium_line_x3_t4_g4_t2_ParamLimits

0x88a3,	// (0x00063f70) list_medium_line_x3_t4_g4_t2

0x3540,	// (0x0005ec0d) list_medium_line_x3_t4_g4_t3_ParamLimits

0x3540,	// (0x0005ec0d) list_medium_line_x3_t4_g4_t3

0x88b8,	// (0x00063f85) list_medium_line_x3_t4_g4_t4_ParamLimits

0x88b8,	// (0x00063f85) list_medium_line_x3_t4_g4_t4

0x0003,

0xfa39,	// (0x0006b106) list_medium_line_x3_t4_g4_t_ParamLimits

0xfa39,	// (0x0006b106) list_medium_line_x3_t4_g4_t

0x88d5,	// (0x00063fa2) list_single_dyc_row_text_pane_t1_ParamLimits

0x88d5,	// (0x00063fa2) list_single_dyc_row_text_pane_t1

0x890c,	// (0x00063fd9) list_single_dyc_row_text_pane_t2_ParamLimits

0x890c,	// (0x00063fd9) list_single_dyc_row_text_pane_t2

0xa473,	// (0x00065b40) list_single_dyc_row_text_pane_t3_ParamLimits

0xa473,	// (0x00065b40) list_single_dyc_row_text_pane_t3

0x0002,

0xfa42,	// (0x0006b10f) list_single_dyc_row_text_pane_t_ParamLimits

0xfa42,	// (0x0006b10f) list_single_dyc_row_text_pane_t

0xa485,	// (0x00065b52) list_single_dyc_row_pane_g1_ParamLimits

0xa485,	// (0x00065b52) list_single_dyc_row_pane_g1

0xa491,	// (0x00065b5e) list_single_dyc_row_pane_g2_ParamLimits

0xa491,	// (0x00065b5e) list_single_dyc_row_pane_g2

0xa49d,	// (0x00065b6a) list_single_dyc_row_pane_g3_ParamLimits

0xa49d,	// (0x00065b6a) list_single_dyc_row_pane_g3

0xa4a9,	// (0x00065b76) list_single_dyc_row_pane_g4_ParamLimits

0xa4a9,	// (0x00065b76) list_single_dyc_row_pane_g4

0x0003,

0xfa49,	// (0x0006b116) list_single_dyc_row_pane_g_ParamLimits

0xfa49,	// (0x0006b116) list_single_dyc_row_pane_g

0xa4b5,	// (0x00065b82) list_single_dyc_row_text_pane_ParamLimits

0xa4b5,	// (0x00065b82) list_single_dyc_row_text_pane

0x9b3d,	// (0x0006520a) bg_sp_fs_scroll_pane

0xeb46,	// (0x0006a213) thumb_sp_fs_scroll_pane

0x9d5e,	// (0x0006542b) list_medium_line_g1_ParamLimits

0x9d5e,	// (0x0006542b) list_medium_line_g1

0xa4d4,	// (0x00065ba1) list_medium_line_t1_ParamLimits

0xa4d4,	// (0x00065ba1) list_medium_line_t1

0x1fa4,	// (0x0005d671) list_medium_line_x2_g1_ParamLimits

0x1fa4,	// (0x0005d671) list_medium_line_x2_g1

0x9bed,	// (0x000652ba) list_medium_line_x2_g2_ParamLimits

0x9bed,	// (0x000652ba) list_medium_line_x2_g2

0x0001,

0xfa52,	// (0x0006b11f) list_medium_line_x2_g_ParamLimits

0xfa52,	// (0x0006b11f) list_medium_line_x2_g

0xa4e9,	// (0x00065bb6) list_medium_line_x2_t1_ParamLimits

0xa4e9,	// (0x00065bb6) list_medium_line_x2_t1

0x1fa4,	// (0x0005d671) list_medium_line_x3_g1_ParamLimits

0x1fa4,	// (0x0005d671) list_medium_line_x3_g1

0x9bed,	// (0x000652ba) list_medium_line_x3_g2_ParamLimits

0x9bed,	// (0x000652ba) list_medium_line_x3_g2

0x0001,

0xfa52,	// (0x0006b11f) list_medium_line_x3_g_ParamLimits

0xfa52,	// (0x0006b11f) list_medium_line_x3_g

0xa4e9,	// (0x00065bb6) list_medium_line_x3_t1_ParamLimits

0xa4e9,	// (0x00065bb6) list_medium_line_x3_t1

0xeb4f,	// (0x0006a21c) thumb_sp_fs_scroll_pane_g1

0xeb58,	// (0x0006a225) thumb_sp_fs_scroll_pane_g2

0xeb61,	// (0x0006a22e) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfa57,	// (0x0006b124) thumb_sp_fs_scroll_pane_g

0xeb4f,	// (0x0006a21c) bg_sp_fs_scroll_pane_g1

0xeb58,	// (0x0006a225) bg_sp_fs_scroll_pane_g2

0xeb61,	// (0x0006a22e) bg_sp_fs_scroll_pane_g3

0x0002,

0xfa57,	// (0x0006b124) bg_sp_fs_scroll_pane_g

0x1fa4,	// (0x0005d671) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1fa4,	// (0x0005d671) list_medium_line_x2_t3_g4_g1

0x9bf9,	// (0x000652c6) list_medium_line_x2_t3_g4_g2_ParamLimits

0x9bf9,	// (0x000652c6) list_medium_line_x2_t3_g4_g2

0x9bed,	// (0x000652ba) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9bed,	// (0x000652ba) list_medium_line_x2_t3_g4_g3

0x1fb0,	// (0x0005d67d) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1fb0,	// (0x0005d67d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x0006a99a) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x0006a99a) list_medium_line_x2_t3_g4_g

0x8966,	// (0x00064033) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8966,	// (0x00064033) list_medium_line_x2_t3_g4_t1

0x897c,	// (0x00064049) list_medium_line_x2_t3_g4_t2_ParamLimits

0x897c,	// (0x00064049) list_medium_line_x2_t3_g4_t2

0x1fe3,	// (0x0005d6b0) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1fe3,	// (0x0005d6b0) list_medium_line_x2_t3_g4_t3

0x0002,

0xfa5e,	// (0x0006b12b) list_medium_line_x2_t3_g4_t_ParamLimits

0xfa5e,	// (0x0006b12b) list_medium_line_x2_t3_g4_t

0x9d5e,	// (0x0006542b) list_medium_line_g2_g1_ParamLimits

0x9d5e,	// (0x0006542b) list_medium_line_g2_g1

0x9d6a,	// (0x00065437) list_medium_line_g2_g2_ParamLimits

0x9d6a,	// (0x00065437) list_medium_line_g2_g2

0x0001,

0xf80a,	// (0x0006aed7) list_medium_line_g2_g_ParamLimits

0xf80a,	// (0x0006aed7) list_medium_line_g2_g

0xa4ff,	// (0x00065bcc) list_medium_line_g2_t1_ParamLimits

0xa4ff,	// (0x00065bcc) list_medium_line_g2_t1

0x9d5e,	// (0x0006542b) list_medium_line_t3_g2_g1_ParamLimits

0x9d5e,	// (0x0006542b) list_medium_line_t3_g2_g1

0x9d6a,	// (0x00065437) list_medium_line_t3_g2_g2_ParamLimits

0x9d6a,	// (0x00065437) list_medium_line_t3_g2_g2

0x0001,

0xf80a,	// (0x0006aed7) list_medium_line_t3_g2_g_ParamLimits

0xf80a,	// (0x0006aed7) list_medium_line_t3_g2_g

0x8995,	// (0x00064062) list_medium_line_t3_g2_t1_ParamLimits

0x8995,	// (0x00064062) list_medium_line_t3_g2_t1

0x89af,	// (0x0006407c) list_medium_line_t3_g2_t2_ParamLimits

0x89af,	// (0x0006407c) list_medium_line_t3_g2_t2

0x89c4,	// (0x00064091) list_medium_line_t3_g2_t3_ParamLimits

0x89c4,	// (0x00064091) list_medium_line_t3_g2_t3

0x0002,

0xfa65,	// (0x0006b132) list_medium_line_t3_g2_t_ParamLimits

0xfa65,	// (0x0006b132) list_medium_line_t3_g2_t

0xa3f1,	// (0x00065abe) list_medium_line_right_icon_g1

0xa514,	// (0x00065be1) list_medium_line_right_icon_t1

0x9d5e,	// (0x0006542b) list_medium_line_t2_g1_ParamLimits

0x9d5e,	// (0x0006542b) list_medium_line_t2_g1

0x89da,	// (0x000640a7) list_medium_line_t2_t1_ParamLimits

0x89da,	// (0x000640a7) list_medium_line_t2_t1

0x89f4,	// (0x000640c1) list_medium_line_t2_t2_ParamLimits

0x89f4,	// (0x000640c1) list_medium_line_t2_t2

0x0001,

0xfa6c,	// (0x0006b139) list_medium_line_t2_t_ParamLimits

0xfa6c,	// (0x0006b139) list_medium_line_t2_t

0x9d5e,	// (0x0006542b) list_medium_line_t3_g1_ParamLimits

0x9d5e,	// (0x0006542b) list_medium_line_t3_g1

0x8a09,	// (0x000640d6) list_medium_line_t3_t1_ParamLimits

0x8a09,	// (0x000640d6) list_medium_line_t3_t1

0x8a20,	// (0x000640ed) list_medium_line_t3_t2_ParamLimits

0x8a20,	// (0x000640ed) list_medium_line_t3_t2

0x8a35,	// (0x00064102) list_medium_line_t3_t3_ParamLimits

0x8a35,	// (0x00064102) list_medium_line_t3_t3

0x0002,

0xfa71,	// (0x0006b13e) list_medium_line_t3_t_ParamLimits

0xfa71,	// (0x0006b13e) list_medium_line_t3_t

0x9d5e,	// (0x0006542b) list_medium_line_g3_g1_ParamLimits

0x9d5e,	// (0x0006542b) list_medium_line_g3_g1

0xa522,	// (0x00065bef) list_medium_line_g3_g2_ParamLimits

0xa522,	// (0x00065bef) list_medium_line_g3_g2

0x9d6a,	// (0x00065437) list_medium_line_g3_g3_ParamLimits

0x9d6a,	// (0x00065437) list_medium_line_g3_g3

0x0002,

0xfa78,	// (0x0006b145) list_medium_line_g3_g_ParamLimits

0xfa78,	// (0x0006b145) list_medium_line_g3_g

0xa52e,	// (0x00065bfb) list_medium_line_g3_t1_ParamLimits

0xa52e,	// (0x00065bfb) list_medium_line_g3_t1

0x9d5e,	// (0x0006542b) list_medium_line_t2_g3_g1_ParamLimits

0x9d5e,	// (0x0006542b) list_medium_line_t2_g3_g1

0xa522,	// (0x00065bef) list_medium_line_t2_g3_g2_ParamLimits

0xa522,	// (0x00065bef) list_medium_line_t2_g3_g2

0x9d6a,	// (0x00065437) list_medium_line_t2_g3_g3_ParamLimits

0x9d6a,	// (0x00065437) list_medium_line_t2_g3_g3

0x0002,

0xfa78,	// (0x0006b145) list_medium_line_t2_g3_g_ParamLimits

0xfa78,	// (0x0006b145) list_medium_line_t2_g3_g

0x8a47,	// (0x00064114) list_medium_line_t2_g3_t1_ParamLimits

0x8a47,	// (0x00064114) list_medium_line_t2_g3_t1

0x8a5e,	// (0x0006412b) list_medium_line_t2_g3_t2_ParamLimits

0x8a5e,	// (0x0006412b) list_medium_line_t2_g3_t2

0x0001,

0xfa7f,	// (0x0006b14c) list_medium_line_t2_g3_t_ParamLimits

0xfa7f,	// (0x0006b14c) list_medium_line_t2_g3_t

0x9d5e,	// (0x0006542b) list_medium_line_t3_g3_g1_ParamLimits

0x9d5e,	// (0x0006542b) list_medium_line_t3_g3_g1

0xa522,	// (0x00065bef) list_medium_line_t3_g3_g2_ParamLimits

0xa522,	// (0x00065bef) list_medium_line_t3_g3_g2

0x9d6a,	// (0x00065437) list_medium_line_t3_g3_g3_ParamLimits

0x9d6a,	// (0x00065437) list_medium_line_t3_g3_g3

0x0002,

0xfa78,	// (0x0006b145) list_medium_line_t3_g3_g_ParamLimits

0xfa78,	// (0x0006b145) list_medium_line_t3_g3_g

0x8a73,	// (0x00064140) list_medium_line_t3_g3_t1_ParamLimits

0x8a73,	// (0x00064140) list_medium_line_t3_g3_t1

0x8a87,	// (0x00064154) list_medium_line_t3_g3_t2_ParamLimits

0x8a87,	// (0x00064154) list_medium_line_t3_g3_t2

0x8a99,	// (0x00064166) list_medium_line_t3_g3_t3_ParamLimits

0x8a99,	// (0x00064166) list_medium_line_t3_g3_t3

0x0002,

0xfa84,	// (0x0006b151) list_medium_line_t3_g3_t_ParamLimits

0xfa84,	// (0x0006b151) list_medium_line_t3_g3_t

0xa45f,	// (0x00065b2c) list_medium_line_right_iconx2_g1

0xa3f1,	// (0x00065abe) list_medium_line_right_iconx2_g2

0x0001,

0xfa8b,	// (0x0006b158) list_medium_line_right_iconx2_g

0xa543,	// (0x00065c10) list_medium_line_right_iconx2_t1

0xa45f,	// (0x00065b2c) list_medium_line_t2_right_iconx2_g1

0xa3f1,	// (0x00065abe) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfa8b,	// (0x0006b158) list_medium_line_t2_right_iconx2_g

0x8aab,	// (0x00064178) list_medium_line_t2_right_iconx2_t1

0x8abb,	// (0x00064188) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfa90,	// (0x0006b15d) list_medium_line_t2_right_iconx2_t

0x8ac9,	// (0x00064196) list_medium_line_x4_t4_t1

0x8ad7,	// (0x000641a4) list_medium_line_x4_t4_t2

0x8ae7,	// (0x000641b4) list_medium_line_x4_t4_t3

0x8af7,	// (0x000641c4) list_medium_line_x4_t4_t4

0x0003,

0xfa95,	// (0x0006b162) list_medium_line_x4_t4_t

0x8b31,	// (0x000641fe) tport_appsw_pane_ParamLimits

0x8b31,	// (0x000641fe) tport_appsw_pane

0x8b3f,	// (0x0006420c) tport_contact_pane_ParamLimits

0x8b3f,	// (0x0006420c) tport_contact_pane

0x8b4f,	// (0x0006421c) tport_listscroll_pane_ParamLimits

0x8b4f,	// (0x0006421c) tport_listscroll_pane

0x8b5f,	// (0x0006422c) cell_tport_appsw_pane_ParamLimits

0x8b5f,	// (0x0006422c) cell_tport_appsw_pane

0xd2ab,	// (0x00068978) tport_appsw_pane_g1_ParamLimits

0xd2ab,	// (0x00068978) tport_appsw_pane_g1

0xeb6a,	// (0x0006a237) tport_contact_pane_g1

0xe4d9,	// (0x00069ba6) tport_contact_pane_t1

0xeb73,	// (0x0006a240) tport_contact_pane_t2

0x0001,

0x0c8d,	// (0x0005c35a) tport_contact_pane_t

0xeb81,	// (0x0006a24e) list_tport_pane

0xeb8a,	// (0x0006a257) scroll_pane_cp_030

0x8b92,	// (0x0006425f) cell_tport_appsw_pane_g1

0x8ba2,	// (0x0006426f) cell_tport_appsw_pane_t1

0x9b3d,	// (0x0006520a) grid_highlight_pane_cp019

0x8bb0,	// (0x0006427d) list_tport_double_graphic_pane_ParamLimits

0x8bb0,	// (0x0006427d) list_tport_double_graphic_pane

0xa733,	// (0x00065e00) list_highlight_pane_cp023_ParamLimits

0xa733,	// (0x00065e00) list_highlight_pane_cp023

0x8bc2,	// (0x0006428f) list_tport_double_graphic_pane_g1_ParamLimits

0x8bc2,	// (0x0006428f) list_tport_double_graphic_pane_g1

0x8bcf,	// (0x0006429c) list_tport_double_graphic_pane_t1_ParamLimits

0x8bcf,	// (0x0006429c) list_tport_double_graphic_pane_t1

0x8be4,	// (0x000642b1) list_tport_double_graphic_pane_t2_ParamLimits

0x8be4,	// (0x000642b1) list_tport_double_graphic_pane_t2

0x0001,

0xfaa5,	// (0x0006b172) list_tport_double_graphic_pane_t_ParamLimits

0xfaa5,	// (0x0006b172) list_tport_double_graphic_pane_t

0x9b3d,	// (0x0006520a) main_cale_note_pane

0x68c8,	// (0x00061f95) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x68c8,	// (0x00061f95) cell_vitu2_function_top_wide_pane_cp01

0x8304,	// (0x000639d1) wait_bar_pane_cp05_ParamLimits

0xa733,	// (0x00065e00) listscroll_cmail_pane

0xeb93,	// (0x0006a260) list_cmail_pane

0x8bf6,	// (0x000642c3) list_cmail_body_pane

0x8c1a,	// (0x000642e7) list_single_cmail_header_caption_pane

0x8c4a,	// (0x00064317) list_single_cmail_header_detail_pane_ParamLimits

0x8c4a,	// (0x00064317) list_single_cmail_header_detail_pane

0xeba3,	// (0x0006a270) list_single_cmail_header_caption_pane_t1

0x8c8b,	// (0x00064358) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8c8b,	// (0x00064358) list_single_cmail_header_detail_pane_g1

0xa551,	// (0x00065c1e) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa551,	// (0x00065c1e) list_single_cmail_header_detail_pane_g2

0x0002,

0xfaaa,	// (0x0006b177) list_single_cmail_header_detail_pane_g_ParamLimits

0xfaaa,	// (0x0006b177) list_single_cmail_header_detail_pane_g

0x8ca1,	// (0x0006436e) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8ca1,	// (0x0006436e) list_single_cmail_header_detail_pane_t1

0x8cdd,	// (0x000643aa) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8cdd,	// (0x000643aa) list_single_cmail_header_editor_pane_bg

0xebbe,	// (0x0006a28b) list_cmail_body_pane_g1

0xebc7,	// (0x0006a294) list_cmail_body_pane_t1

0xda2f,	// (0x000690fc) list_single_cmail_header_editor_pane_bg_g1

0xb10e,	// (0x000667db) list_single_cmail_header_editor_pane_bg_g1_copy1

0xda3f,	// (0x0006910c) list_single_cmail_header_editor_pane_bg_g1_copy2

0xda37,	// (0x00069104) list_single_cmail_header_editor_pane_bg_g1_copy3

0xdc6e,	// (0x0006933b) list_single_cmail_header_editor_pane_bg_g1_copy4

0xda5f,	// (0x0006912c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xda4f,	// (0x0006911c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xda57,	// (0x00069124) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xb0ee,	// (0x000667bb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8cf4,	// (0x000643c1) calenote_gesture_pane_ParamLimits

0x8cf4,	// (0x000643c1) calenote_gesture_pane

0x8d0e,	// (0x000643db) calenote_window_pane_ParamLimits

0x8d0e,	// (0x000643db) calenote_window_pane

0xebd5,	// (0x0006a2a2) popup_note_window_cp01

0x8d26,	// (0x000643f3) calenote_swipe_1_pane_ParamLimits

0x8d26,	// (0x000643f3) calenote_swipe_1_pane

0x8673,	// (0x00063d40) calenote_swipe_2_pane_ParamLimits

0x8673,	// (0x00063d40) calenote_swipe_2_pane

0xe9f0,	// (0x0006a0bd) calenote_swipe_1_pane_g1_ParamLimits

0xe9f0,	// (0x0006a0bd) calenote_swipe_1_pane_g1

0xe9fd,	// (0x0006a0ca) calenote_swipe_1_pane_g2_ParamLimits

0xe9fd,	// (0x0006a0ca) calenote_swipe_1_pane_g2

0x0001,

0x0bcf,	// (0x0005c29c) calenote_swipe_1_pane_g_ParamLimits

0x0bcf,	// (0x0005c29c) calenote_swipe_1_pane_g

0xebe7,	// (0x0006a2b4) calenote_swipe_1_pane_t1_ParamLimits

0xebe7,	// (0x0006a2b4) calenote_swipe_1_pane_t1

0xe9f0,	// (0x0006a0bd) calenote_swipe_2_pane_g1_ParamLimits

0xe9f0,	// (0x0006a0bd) calenote_swipe_2_pane_g1

0xec06,	// (0x0006a2d3) calenote_swipe_2_pane_g2_ParamLimits

0xec06,	// (0x0006a2d3) calenote_swipe_2_pane_g2

0x0001,

0x0caa,	// (0x0005c377) calenote_swipe_2_pane_g_ParamLimits

0x0caa,	// (0x0005c377) calenote_swipe_2_pane_g

0xec12,	// (0x0006a2df) calenote_swipe_2_pane_t1_ParamLimits

0xec12,	// (0x0006a2df) calenote_swipe_2_pane_t1

0x9b3d,	// (0x0006520a) main_mup_navstr_pane

0x5602,	// (0x00060ccf) main_mup3_pane_t7_ParamLimits

0x5602,	// (0x00060ccf) main_mup3_pane_t7

0x602c,	// (0x000616f9) main_mp4_pane_g6_ParamLimits

0x602c,	// (0x000616f9) main_mp4_pane_g6

0x63ac,	// (0x00061a79) main_image3_pane_t4_ParamLimits

0x63ac,	// (0x00061a79) main_image3_pane_t4

0x8d39,	// (0x00064406) popup_navstr_preview_pane_ParamLimits

0x8d39,	// (0x00064406) popup_navstr_preview_pane

0x8d45,	// (0x00064412) scroll_navstr_pane_ParamLimits

0x8d45,	// (0x00064412) scroll_navstr_pane

0x9b3d,	// (0x0006520a) bg_popup_preview_window_pane_cp04

0xec39,	// (0x0006a306) popup_navstr_preview_pane_t1

0x8d51,	// (0x0006441e) scroll_navstr_pane_g1_ParamLimits

0x8d51,	// (0x0006441e) scroll_navstr_pane_g1

0x8d5e,	// (0x0006442b) scroll_navstr_pane_t1_ParamLimits

0x8d5e,	// (0x0006442b) scroll_navstr_pane_t1

0xebde,	// (0x0006a2ab) bg_button_pane_cp014

0xebde,	// (0x0006a2ab) bg_button_pane_cp030

0x9e8c,	// (0x00065559) list_double_fisheye_pane_g4_ParamLimits

0x9e8c,	// (0x00065559) list_double_fisheye_pane_g4

0x9e98,	// (0x00065565) list_double_fisheye_pane_g5_ParamLimits

0x9e98,	// (0x00065565) list_double_fisheye_pane_g5

0xcd2b,	// (0x000683f8) sp_fs_scroll_pane_cp03

0xeae3,	// (0x0006a1b0) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xeaef,	// (0x0006a1bc) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x0bec,	// (0x0005c2b9) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xeafb,	// (0x0006a1c8) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xeb9b,	// (0x0006a268) sp_fs_scroll_pane_cp02

0xadfa,	// (0x000664c7) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xadfa,	// (0x000664c7) popup_sp_fs_calendar_preview_list_single_pane

0x9b3d,	// (0x0006520a) main_cam6_pano_pane

0x460e,	// (0x0005fcdb) main_mup3_pane_ParamLimits

0x9b3d,	// (0x0006520a) main_phacti_pane

0x81d9,	// (0x000638a6) bg_button_pane_cp11

0x81f1,	// (0x000638be) main_mobtv_info_pane_g2_ParamLimits

0x81f1,	// (0x000638be) main_mobtv_info_pane_g2

0x0001,

0xf9b2,	// (0x0006b07f) main_mobtv_info_pane_g_ParamLimits

0xf9b2,	// (0x0006b07f) main_mobtv_info_pane_g

0x83a3,	// (0x00063a70) sc_clock_pane_t5_ParamLimits

0x83a3,	// (0x00063a70) sc_clock_pane_t5

0x8458,	// (0x00063b25) main_radioblah_pane_g1_ParamLimits

0xe93c,	// (0x0006a009) main_radioblah_pane_t3_ParamLimits

0xe93c,	// (0x0006a009) main_radioblah_pane_t3

0xe954,	// (0x0006a021) main_radioblah_pane_t4_ParamLimits

0xe954,	// (0x0006a021) main_radioblah_pane_t4

0x8476,	// (0x00063b43) main_radioblah_text_pane_ParamLimits

0x8476,	// (0x00063b43) main_radioblah_text_pane

0x8483,	// (0x00063b50) main_radioblah_info_pane_g1_ParamLimits

0x8518,	// (0x00063be5) main_radioblah_info_pane_t4_ParamLimits

0x8518,	// (0x00063be5) main_radioblah_info_pane_t4

0xa733,	// (0x00065e00) main_sp_fs_calendar_pane

0x8d70,	// (0x0006443d) main_phacti_pane_g1

0x8d78,	// (0x00064445) phacti_note_pane_ParamLimits

0x8d78,	// (0x00064445) phacti_note_pane

0xec50,	// (0x0006a31d) phacti_term_pane_ParamLimits

0xec50,	// (0x0006a31d) phacti_term_pane

0xec65,	// (0x0006a332) phacti_note_pane_t1_ParamLimits

0xec65,	// (0x0006a332) phacti_note_pane_t1

0xa581,	// (0x00065c4e) phacti_term_pane_g1

0xa589,	// (0x00065c56) phacti_term_pane_t1_ParamLimits

0xa589,	// (0x00065c56) phacti_term_pane_t1

0xec7c,	// (0x0006a349) popup_sp_fs_calendar_preview_list_single_pane_g1

0xec84,	// (0x0006a351) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfabb,	// (0x0006b188) popup_sp_fs_calendar_preview_list_single_pane_g

0xec8c,	// (0x0006a359) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xec8c,	// (0x0006a359) popup_sp_fs_calendar_preview_list_single_pane_t1

0xeca2,	// (0x0006a36f) aid_popup_sp_fs_bg_corner_pane

0xcfe6,	// (0x000686b3) popup_sp_fs_calendar_preview_bg_pane_g1

0x9b3d,	// (0x0006520a) popup_sp_fs_calendar_preview_bg_pane

0x9ea9,	// (0x00065576) popup_sp_fs_calendar_preview_list_pane

0xcbd0,	// (0x0006829d) bg_main_sp_fs_cale_pane_ParamLimits

0xcbd0,	// (0x0006829d) bg_main_sp_fs_cale_pane

0xa5bc,	// (0x00065c89) listscroll_cale_mrui_pane_ParamLimits

0xa5bc,	// (0x00065c89) listscroll_cale_mrui_pane

0xa5d1,	// (0x00065c9e) listscroll_sp_fs_schedule_track_pane

0xa5da,	// (0x00065ca7) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa5da,	// (0x00065ca7) main_sp_fs_ctrlbar_pane_cp01

0xecaa,	// (0x0006a377) main_sp_fs_ribbon_pane

0xa5ed,	// (0x00065cba) popup_sp_fs_cale_preview_window

0x8ddb,	// (0x000644a8) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8ddb,	// (0x000644a8) list_single_sp_fs_schedule_track_pane

0xe5b9,	// (0x00069c86) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe5b9,	// (0x00069c86) bg_sp_fs_highlight_list_pane_cp03

0x8e02,	// (0x000644cf) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8e02,	// (0x000644cf) list_single_sp_fs_schedule_track_pane_g1

0x8e0e,	// (0x000644db) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8e0e,	// (0x000644db) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfac0,	// (0x0006b18d) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfac0,	// (0x0006b18d) list_single_sp_fs_schedule_track_pane_g

0x8e1a,	// (0x000644e7) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8e1a,	// (0x000644e7) list_single_sp_fs_schedule_track_pane_t1

0x8e32,	// (0x000644ff) sp_fs_schedule_track_pane_ParamLimits

0x8e32,	// (0x000644ff) sp_fs_schedule_track_pane

0xecb2,	// (0x0006a37f) sp_fs_schedule_track_pane_g1

0xecba,	// (0x0006a387) sp_fs_schedule_track_pane_g2

0xecc2,	// (0x0006a38f) sp_fs_schedule_track_pane_g3

0xecca,	// (0x0006a397) sp_fs_schedule_track_pane_g4

0xecd2,	// (0x0006a39f) sp_fs_schedule_track_pane_g5

0x0004,

0xfac5,	// (0x0006b192) sp_fs_schedule_track_pane_g

0xda2f,	// (0x000690fc) bg_sp_fs_schedule_viewer_highlight_g1

0xb10e,	// (0x000667db) bg_sp_fs_schedule_viewer_highlight_g2

0xda37,	// (0x00069104) bg_sp_fs_schedule_viewer_highlight_g3

0xda3f,	// (0x0006910c) bg_sp_fs_schedule_viewer_highlight_g4

0xdc6e,	// (0x0006933b) bg_sp_fs_schedule_viewer_highlight_g5

0xda4f,	// (0x0006911c) bg_sp_fs_schedule_viewer_highlight_g6

0xda57,	// (0x00069124) bg_sp_fs_schedule_viewer_highlight_g7

0xda5f,	// (0x0006912c) bg_sp_fs_schedule_viewer_highlight_g8

0xb0ee,	// (0x000667bb) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfad0,	// (0x0006b19d) bg_sp_fs_schedule_viewer_highlight_g

0x9b3d,	// (0x0006520a) bg_main_sp_fs_ribbon_pane

0x8e42,	// (0x0006450f) main_sp_fs_ribbon_pane_g1

0xecda,	// (0x0006a3a7) main_sp_fs_ribbon_pane_t1

0x8e4b,	// (0x00064518) main_sp_fs_ribbon_pane_t2

0xece9,	// (0x0006a3b6) main_sp_fs_ribbon_pane_t3

0x0002,

0xfae3,	// (0x0006b1b0) main_sp_fs_ribbon_pane_t

0xecf8,	// (0x0006a3c5) main_sp_fs_ribbon_scheduler_pane

0xed00,	// (0x0006a3cd) bg_main_sp_fs_ribbon_pane_g1

0xed09,	// (0x0006a3d6) bg_main_sp_fs_ribbon_pane_g2

0xed12,	// (0x0006a3df) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfaea,	// (0x0006b1b7) bg_main_sp_fs_ribbon_pane_g

0xed1a,	// (0x0006a3e7) main_sp_fs_ribbon_scheduler_pane_g1

0xed23,	// (0x0006a3f0) main_sp_fs_ribbon_scheduler_pane_g2

0xed2c,	// (0x0006a3f9) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfaf1,	// (0x0006b1be) main_sp_fs_ribbon_scheduler_pane_g

0xed35,	// (0x0006a402) list_cale_mrui_pane

0x8e5c,	// (0x00064529) sp_fs_scroll_pane_cp07_ParamLimits

0x8e5c,	// (0x00064529) sp_fs_scroll_pane_cp07

0x8e78,	// (0x00064545) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8e78,	// (0x00064545) bg_sp_fs_schedule_viewer_highlight

0xed42,	// (0x0006a40f) list_single_sp_fs_schedule_track_pane_cp01

0xed4a,	// (0x0006a417) list_sp_fs_schedule_track_pane

0xed52,	// (0x0006a41f) sp_fs_scroll_pane_cp06_ParamLimits

0xed52,	// (0x0006a41f) sp_fs_scroll_pane_cp06

0xcfe6,	// (0x000686b3) bgmain_sp_fs_calendar_pane_g1

0x8e85,	// (0x00064552) list_single_cale_mrui_pane_ParamLimits

0x8e85,	// (0x00064552) list_single_cale_mrui_pane

0xa5ff,	// (0x00065ccc) list_single_cale_mrui_row_pane_ParamLimits

0xa5ff,	// (0x00065ccc) list_single_cale_mrui_row_pane

0xa60c,	// (0x00065cd9) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa60c,	// (0x00065cd9) list_single_cale_mrui_row_pane_g1

0xa644,	// (0x00065d11) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa644,	// (0x00065d11) list_single_cale_mrui_row_pane_t1

0x8eb7,	// (0x00064584) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8eb7,	// (0x00064584) list_single_cale_mrui_row_pane_t2

0xa656,	// (0x00065d23) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa656,	// (0x00065d23) list_single_cale_mrui_row_pane_t3

0xa685,	// (0x00065d52) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa685,	// (0x00065d52) list_single_cale_mrui_row_pane_t4

0x0003,

0xfaff,	// (0x0006b1cc) list_single_cale_mrui_row_pane_t_ParamLimits

0xfaff,	// (0x0006b1cc) list_single_cale_mrui_row_pane_t

0x8f1d,	// (0x000645ea) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8f1d,	// (0x000645ea) list_single_cmail_header_editor_pane_bg_cp01

0x8f3f,	// (0x0006460c) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8f3f,	// (0x0006460c) list_single_cmail_header_editor_pane_bg_cp02

0x8f5b,	// (0x00064628) main_radioblah_text_pane_t1_ParamLimits

0x8f5b,	// (0x00064628) main_radioblah_text_pane_t1

0xed71,	// (0x0006a43e) cam6_indi_pane_cp01

0xed79,	// (0x0006a446) cam6_mode_pane_cp01

0xed81,	// (0x0006a44e) cam6_pano_pane

0xed8a,	// (0x0006a457) cam6_zoom_pane_cp01

0xed92,	// (0x0006a45f) cam6_pano_image_pane

0xed9d,	// (0x0006a46a) cam6_pano_pane_g1

0xe6a9,	// (0x00069d76) cam6_pano_pane_g2

0xeda6,	// (0x0006a473) cam6_pano_pane_g3

0xedaf,	// (0x0006a47c) cam6_pano_pane_g4

0xd588,	// (0x00068c55) cam6_pano_pane_g5

0xedb8,	// (0x0006a485) cam6_pano_pane_g6

0xedc2,	// (0x0006a48f) cam6_pano_pane_g7

0xedca,	// (0x0006a497) cam6_pano_pane_g8

0xedd3,	// (0x0006a4a0) cam6_pano_pane_g9

0x0008,

0x0ce3,	// (0x0005c3b0) cam6_pano_pane_g

0x9b3d,	// (0x0006520a) main_browser_tag_pane

0xec31,	// (0x0006a2fe) grid_navstr_albumart_pane

0xedde,	// (0x0006a4ab) cell_navstr_albumart_pane_ParamLimits

0xedde,	// (0x0006a4ab) cell_navstr_albumart_pane

0xb92f,	// (0x00066ffc) cell_navstr_albumart_pane_g1

0xc9e1,	// (0x000680ae) cell_navstr_albumart_pane_g2

0xc9f1,	// (0x000680be) cell_navstr_albumart_pane_g3

0xc9e9,	// (0x000680b6) cell_navstr_albumart_pane_g4

0x0003,

0xfb08,	// (0x0006b1d5) cell_navstr_albumart_pane_g

0x8f76,	// (0x00064643) bt_list_pane_ParamLimits

0x8f76,	// (0x00064643) bt_list_pane

0xee00,	// (0x0006a4cd) bt_list_pane_t1

0xee0f,	// (0x0006a4dc) bt_list_pane_t2

0x0001,

0xfb11,	// (0x0006b1de) bt_list_pane_t

0x9b3d,	// (0x0006520a) main_cale_prevew_pane

0x8f9a,	// (0x00064667) popup_cale_preview_window_ParamLimits

0x8f9a,	// (0x00064667) popup_cale_preview_window

0xa733,	// (0x00065e00) bg_popup_preview_window_pane_cp05_ParamLimits

0xa733,	// (0x00065e00) bg_popup_preview_window_pane_cp05

0xee1e,	// (0x0006a4eb) list_cale_preview_pane_ParamLimits

0xee1e,	// (0x0006a4eb) list_cale_preview_pane

0xee2a,	// (0x0006a4f7) list_double_cale_preview_pane_ParamLimits

0xee2a,	// (0x0006a4f7) list_double_cale_preview_pane

0xee3c,	// (0x0006a509) list_single_cale_preview_pane_ParamLimits

0xee3c,	// (0x0006a509) list_single_cale_preview_pane

0xee50,	// (0x0006a51d) list_single_cale_preview_pane_g1

0xee58,	// (0x0006a525) list_single_cale_preview_pane_t1_ParamLimits

0xee58,	// (0x0006a525) list_single_cale_preview_pane_t1

0xee6d,	// (0x0006a53a) list_double_cale_preview_pane_g1

0xee75,	// (0x0006a542) list_double_cale_preview_pane_t1_ParamLimits

0xee75,	// (0x0006a542) list_double_cale_preview_pane_t1

0xee8a,	// (0x0006a557) list_double_cale_preview_pane_t2_ParamLimits

0xee8a,	// (0x0006a557) list_double_cale_preview_pane_t2

0x0001,

0xfb16,	// (0x0006b1e3) list_double_cale_preview_pane_t_ParamLimits

0xfb16,	// (0x0006b1e3) list_double_cale_preview_pane_t

0x9b3d,	// (0x0006520a) main_ezdial_pane

0xa733,	// (0x00065e00) main_sp_fs_email_pane_ParamLimits

0x86ed,	// (0x00063dba) cmail_ddmenu_btn01_pane_ParamLimits

0x86ed,	// (0x00063dba) cmail_ddmenu_btn01_pane

0x870a,	// (0x00063dd7) cmail_ddmenu_btn02_pane_ParamLimits

0x870a,	// (0x00063dd7) cmail_ddmenu_btn02_pane

0x8728,	// (0x00063df5) cmail_ddmenu_btn03_pane_ParamLimits

0x8728,	// (0x00063df5) cmail_ddmenu_btn03_pane

0x8756,	// (0x00063e23) main_sp_fs_ctrlbar_pane_ParamLimits

0x876c,	// (0x00063e39) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8bf6,	// (0x000642c3) list_cmail_body_pane_ParamLimits

0x8c82,	// (0x0006434f) bg_button_pane_cp12

0xebb1,	// (0x0006a27e) list_single_cmail_header_detail_pane_g3_ParamLimits

0xebb1,	// (0x0006a27e) list_single_cmail_header_detail_pane_g3

0xa55d,	// (0x00065c2a) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa55d,	// (0x00065c2a) list_single_cmail_header_detail_pane_t2

0x0001,

0xfab1,	// (0x0006b17e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfab1,	// (0x0006b17e) list_single_cmail_header_detail_pane_t

0xa59e,	// (0x00065c6b) phacti_term_pane_t2_ParamLimits

0xa59e,	// (0x00065c6b) phacti_term_pane_t2

0x0001,

0xfab6,	// (0x0006b183) phacti_term_pane_t_ParamLimits

0xfab6,	// (0x0006b183) phacti_term_pane_t

0xeea2,	// (0x0006a56f) aid_size_list_single_double

0x8fb1,	// (0x0006467e) popup_ezdial_listscroll_window

0x8fd4,	// (0x000646a1) popup_number_entry_window_cp01

0xb7c0,	// (0x00066e8d) bg_popup_call_pane_cp09

0xeeae,	// (0x0006a57b) ezdial_list_pane

0xeeb6,	// (0x0006a583) scroll_pane_cp23

0xcdc9,	// (0x00068496) bg_button_pane_cp028_ParamLimits

0xcdc9,	// (0x00068496) bg_button_pane_cp028

0x8fe2,	// (0x000646af) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8fe2,	// (0x000646af) cmail_ddmenu_btn01_pane_g1

0x8ff4,	// (0x000646c1) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8ff4,	// (0x000646c1) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfb1b,	// (0x0006b1e8) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfb1b,	// (0x0006b1e8) cmail_ddmenu_btn01_pane_g

0xeebe,	// (0x0006a58b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeebe,	// (0x0006a58b) cmail_ddmenu_btn01_pane_t1

0xcbd0,	// (0x0006829d) bg_button_pane_cp029_ParamLimits

0xcbd0,	// (0x0006829d) bg_button_pane_cp029

0x8ff4,	// (0x000646c1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8ff4,	// (0x000646c1) cmail_ddmenu_btn02_pane_g1

0x900c,	// (0x000646d9) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x900c,	// (0x000646d9) cmail_ddmenu_btn02_pane_t1

0xe5b9,	// (0x00069c86) bg_button_pane_cp031_ParamLimits

0xe5b9,	// (0x00069c86) bg_button_pane_cp031

0x8ff4,	// (0x000646c1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8ff4,	// (0x000646c1) cmail_ddmenu_btn03_pane_g1

0x900c,	// (0x000646d9) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x900c,	// (0x000646d9) cmail_ddmenu_btn03_pane_t1

0x6249,	// (0x00061916) cell_dialer2_keypad_pane_t1_ParamLimits

0x6263,	// (0x00061930) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6263,	// (0x00061930) cell_dialer2_keypad_pane_t1_copy1

0x805e,	// (0x0006372b) ncimui_group_button_pane

0xa733,	// (0x00065e00) main_sp_fs_calendar_pane_ParamLimits

0x8c1a,	// (0x000642e7) list_single_cmail_header_caption_pane_ParamLimits

0xa5b3,	// (0x00065c80) aid_recal_txt_sm_pane

0x9b3d,	// (0x0006520a) mian_recal_day_pane

0xa5ed,	// (0x00065cba) popup_sp_fs_cale_preview_window_ParamLimits

0xeed4,	// (0x0006a5a1) list_recal_day_pane

0xa6cf,	// (0x00065d9c) list_single_recal_day_pane_ParamLimits

0xa6cf,	// (0x00065d9c) list_single_recal_day_pane

0xeefb,	// (0x0006a5c8) list_single_recal_day_pane_g1_ParamLimits

0xeefb,	// (0x0006a5c8) list_single_recal_day_pane_g1

0xa6e1,	// (0x00065dae) list_single_recal_day_pane_g2_ParamLimits

0xa6e1,	// (0x00065dae) list_single_recal_day_pane_g2

0xa6f1,	// (0x00065dbe) list_single_recal_day_pane_g3_ParamLimits

0xa6f1,	// (0x00065dbe) list_single_recal_day_pane_g3

0x9030,	// (0x000646fd) list_single_recal_day_pane_g4_ParamLimits

0x9030,	// (0x000646fd) list_single_recal_day_pane_g4

0xa6fd,	// (0x00065dca) list_single_recal_day_pane_g5_ParamLimits

0xa6fd,	// (0x00065dca) list_single_recal_day_pane_g5

0xa70d,	// (0x00065dda) list_single_recal_day_pane_g6_ParamLimits

0xa70d,	// (0x00065dda) list_single_recal_day_pane_g6

0x0004,

0xfb2a,	// (0x0006b1f7) list_single_recal_day_pane_g_ParamLimits

0xfb2a,	// (0x0006b1f7) list_single_recal_day_pane_g

0xa721,	// (0x00065dee) list_single_recal_day_pane_t1

0xa741,	// (0x00065e0e) list_single_recal_day_pane_t2

0x0001,

0xfb35,	// (0x0006b202) list_single_recal_day_pane_t

0x9050,	// (0x0006471d) ncimui_query_button_pane_ParamLimits

0x9050,	// (0x0006471d) ncimui_query_button_pane

0x9060,	// (0x0006472d) ncimui_query_button_pane_t1_ParamLimits

0x9060,	// (0x0006472d) ncimui_query_button_pane_t1

0xef07,	// (0x0006a5d4) ncimui_query_button_pane_t2_ParamLimits

0xef07,	// (0x0006a5d4) ncimui_query_button_pane_t2

0x0001,

0xfb3a,	// (0x0006b207) ncimui_query_button_pane_t_ParamLimits

0xfb3a,	// (0x0006b207) ncimui_query_button_pane_t

0x9073,	// (0x00064740) query_button_pane_ParamLimits

0x9073,	// (0x00064740) query_button_pane

0x9b3d,	// (0x0006520a) bg_button_pane_cp0028

0xef1a,	// (0x0006a5e7) query_button_pane_t1

0x462a,	// (0x0005fcf7) main_tport_pane_ParamLimits

0x8b07,	// (0x000641d4) bg_popup_window_pane_cp01_ParamLimits

0x8b07,	// (0x000641d4) bg_popup_window_pane_cp01

0x8b15,	// (0x000641e2) heading_pane_cp08_ParamLimits

0x8b15,	// (0x000641e2) heading_pane_cp08

0x8b23,	// (0x000641f0) heading_pane_cp07_ParamLimits

0x8b23,	// (0x000641f0) heading_pane_cp07

0x8b92,	// (0x0006425f) cell_tport_appsw_pane_g2

0x0002,

0xfa9e,	// (0x0006b16b) cell_tport_appsw_pane_g

0x9c1d,	// (0x000652ea) input_candi_list_open_g1

0xb2c5,	// (0x00066992) list_cale_time_pane_g6_ParamLimits

0xb2c5,	// (0x00066992) list_cale_time_pane_g6

0x50a4,	// (0x00060771) aid_size_touch_calib_1_ParamLimits

0x50a4,	// (0x00060771) aid_size_touch_calib_1

0x50b0,	// (0x0006077d) aid_size_touch_calib_2_ParamLimits

0x50b0,	// (0x0006077d) aid_size_touch_calib_2

0x50be,	// (0x0006078b) aid_size_touch_calib_3_ParamLimits

0x50be,	// (0x0006078b) aid_size_touch_calib_3

0x50ce,	// (0x0006079b) aid_size_touch_calib_4_ParamLimits

0x50ce,	// (0x0006079b) aid_size_touch_calib_4

0x50dc,	// (0x000607a9) main_touch_calib_button_group_pane_ParamLimits

0x50dc,	// (0x000607a9) main_touch_calib_button_group_pane

0x50ea,	// (0x000607b7) main_touch_calib_pane_g1_ParamLimits

0x50f6,	// (0x000607c3) main_touch_calib_pane_g2_ParamLimits

0x5102,	// (0x000607cf) main_touch_calib_pane_g3_ParamLimits

0x510e,	// (0x000607db) main_touch_calib_pane_g4_ParamLimits

0xf5ed,	// (0x0006acba) main_touch_calib_pane_g_ParamLimits

0x511a,	// (0x000607e7) main_touch_calib_pane_t1_ParamLimits

0x5133,	// (0x00060800) main_touch_calib_pane_t2_ParamLimits

0x514c,	// (0x00060819) main_touch_calib_pane_t3_ParamLimits

0x5162,	// (0x0006082f) main_touch_calib_pane_t4_ParamLimits

0x5178,	// (0x00060845) main_touch_calib_pane_t5_ParamLimits

0xf5f6,	// (0x0006acc3) main_touch_calib_pane_t_ParamLimits

0xd346,	// (0x00068a13) list_single_fp_cale_pane_g3_ParamLimits

0xd346,	// (0x00068a13) list_single_fp_cale_pane_g3

0x460e,	// (0x0005fcdb) bg_button_pane_cp012_ParamLimits

0x460e,	// (0x0005fcdb) bg_vkb2_func_pane_cp03_ParamLimits

0x7099,	// (0x00062766) cell_vitu2_function_top_pane_g1_ParamLimits

0x460e,	// (0x0005fcdb) bg_vkb2_func_pane_cp04_ParamLimits

0x7fe6,	// (0x000636b3) main_ncimui_button_group_pane_ParamLimits

0x7fe6,	// (0x000636b3) main_ncimui_button_group_pane

0x804c,	// (0x00063719) main_ncimui_pane_t3_ParamLimits

0x804c,	// (0x00063719) main_ncimui_pane_t3

0xec47,	// (0x0006a314) phacti_button_group_pane

0xeea2,	// (0x0006a56f) aid_size_list_single_double_ParamLimits

0x8fb1,	// (0x0006467e) popup_ezdial_listscroll_window_ParamLimits

0x8fd4,	// (0x000646a1) popup_number_entry_window_cp01_ParamLimits

0x9080,	// (0x0006474d) phacti_button_pane_ParamLimits

0x9080,	// (0x0006474d) phacti_button_pane

0x9b3d,	// (0x0006520a) bg_button_pane_cp14

0xef28,	// (0x0006a5f5) phacti_button_pane_t1

0x9091,	// (0x0006475e) main_touch_calib_button_pane_ParamLimits

0x9091,	// (0x0006475e) main_touch_calib_button_pane

0xace4,	// (0x000663b1) bg_button_pane_cp18_ParamLimits

0xace4,	// (0x000663b1) bg_button_pane_cp18

0xef36,	// (0x0006a603) main_touch_calib_button_pane_t1_ParamLimits

0xef36,	// (0x0006a603) main_touch_calib_button_pane_t1

0xef4c,	// (0x0006a619) main_touch_calib_button_pane_t2_ParamLimits

0xef4c,	// (0x0006a619) main_touch_calib_button_pane_t2

0x0001,

0xfb3f,	// (0x0006b20c) main_touch_calib_button_pane_t_ParamLimits

0xfb3f,	// (0x0006b20c) main_touch_calib_button_pane_t

0x9b3d,	// (0x0006520a) cell_ncimui_button_pane

0x9b3d,	// (0x0006520a) bg_button_pane_cp032

0xef6a,	// (0x0006a637) cell_ncimui_button_pane_t1

0x62bf,	// (0x0006198c) image3_infobar_pane_ParamLimits

0x62bf,	// (0x0006198c) image3_infobar_pane

0x83c5,	// (0x00063a92) fs_bigclock_status_pane_ParamLimits

0x83c5,	// (0x00063a92) fs_bigclock_status_pane

0x83d2,	// (0x00063a9f) main_fs_bigclock_clock_pane_ParamLimits

0x83d2,	// (0x00063a9f) main_fs_bigclock_clock_pane

0x83f6,	// (0x00063ac3) main_fs_bigclock_indi_pane_ParamLimits

0x83f6,	// (0x00063ac3) main_fs_bigclock_indi_pane

0x8426,	// (0x00063af3) main_fs_bigclock_swipe_pane_ParamLimits

0x8426,	// (0x00063af3) main_fs_bigclock_swipe_pane

0x9b3d,	// (0x0006520a) main_fs_clock_dumped_data

0xe7b6,	// (0x00069e83) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe7b6,	// (0x00069e83) list_single_fs_bigclock_indicator_pane_g1

0xe7d1,	// (0x00069e9e) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe7d1,	// (0x00069e9e) list_single_fs_bigclock_indicator_pane_g2

0xe7eb,	// (0x00069eb8) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe7eb,	// (0x00069eb8) list_single_fs_bigclock_indicator_pane_g3

0xe805,	// (0x00069ed2) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe805,	// (0x00069ed2) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0b80,	// (0x0005c24d) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0b80,	// (0x0005c24d) list_single_fs_bigclock_indicator_pane_g

0xe82e,	// (0x00069efb) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe82e,	// (0x00069efb) list_single_fs_bigclock_indicator_pane_t1

0xe856,	// (0x00069f23) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe856,	// (0x00069f23) list_single_fs_bigclock_indicator_pane_t2

0xe87e,	// (0x00069f4b) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe87e,	// (0x00069f4b) list_single_fs_bigclock_indicator_pane_t3

0xe8a6,	// (0x00069f73) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe8a6,	// (0x00069f73) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0b8b,	// (0x0005c258) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0b8b,	// (0x0005c258) list_single_fs_bigclock_indicator_pane_t

0xef78,	// (0x0006a645) image3_infobar_fav_pane_ParamLimits

0xef78,	// (0x0006a645) image3_infobar_fav_pane

0xef88,	// (0x0006a655) image3_infobar_loc_pane_ParamLimits

0xef88,	// (0x0006a655) image3_infobar_loc_pane

0xef9c,	// (0x0006a669) image3_infobar_time_pane_ParamLimits

0xef9c,	// (0x0006a669) image3_infobar_time_pane

0xcfe6,	// (0x000686b3) image3_infobar_time_pane_g1

0xefac,	// (0x0006a679) image3_infobar_time_pane_t1

0xcfe6,	// (0x000686b3) image3_infobar_loc_pane_g1

0xefba,	// (0x0006a687) image3_infobar_loc_pane_g2

0x0001,

0x0d1a,	// (0x0005c3e7) image3_infobar_loc_pane_g

0xefc2,	// (0x0006a68f) image3_infobar_loc_pane_t1

0xcfe6,	// (0x000686b3) image3_infobar_fav_pane_g1

0xefd0,	// (0x0006a69d) image3_infobar_fav_pane_g2

0x0001,

0x0d1f,	// (0x0005c3ec) image3_infobar_fav_pane_g

0xefd8,	// (0x0006a6a5) fs_bigclock_status_battery_pane

0xefe1,	// (0x0006a6ae) fs_bigclock_status_signal_pane

0xefea,	// (0x0006a6b7) fs_bigclock_status_title_pane

0xeff3,	// (0x0006a6c0) fs_bigclock_status_signal_pane_g1

0xeffc,	// (0x0006a6c9) fs_bigclock_status_signal_pane_g2

0x0001,

0xfb44,	// (0x0006b211) fs_bigclock_status_signal_pane_g

0xf004,	// (0x0006a6d1) fs_bigclock_status_battery_pane_g1

0xf00d,	// (0x0006a6da) fs_bigclock_status_battery_pane_g2

0x0001,

0xfb49,	// (0x0006b216) fs_bigclock_status_battery_pane_g

0xf015,	// (0x0006a6e2) fs_bigclock_status_title_pane_t1

0xcfe6,	// (0x000686b3) main_fs_bigclock_clock_pane_g1

0x90a1,	// (0x0006476e) main_fs_bigclock_clock_pane_g2

0x90a1,	// (0x0006476e) main_fs_bigclock_clock_pane_g3

0x90a1,	// (0x0006476e) main_fs_bigclock_clock_pane_g4

0x0003,

0xfb4e,	// (0x0006b21b) main_fs_bigclock_clock_pane_g

0x90a9,	// (0x00064776) main_fs_bigclock_clock_pane_t1

0x90b7,	// (0x00064784) main_fs_bigclock_clock_pane_t2

0x0001,

0xfb57,	// (0x0006b224) main_fs_bigclock_clock_pane_t

0xf023,	// (0x0006a6f0) list_single_fs_bigclock_indicator_pane_ParamLimits

0xf023,	// (0x0006a6f0) list_single_fs_bigclock_indicator_pane

0x90c6,	// (0x00064793) list_single_fs_bigclock_pane_ParamLimits

0x90c6,	// (0x00064793) list_single_fs_bigclock_pane

0xf03d,	// (0x0006a70a) main_fs_bigclock_indicator_pane_t1

0xf04c,	// (0x0006a719) list_single_fs_bigclock_pane_g1

0xf054,	// (0x0006a721) list_single_fs_bigclock_pane_t1

0xcfe6,	// (0x000686b3) main_fs_bigclock_swipe_pane_g1

0xf097,	// (0x0006a764) main_fs_bigclock_swipe_pane_g2

0x0001,

0x0d39,	// (0x0005c406) main_fs_bigclock_swipe_pane_g

0xf09f,	// (0x0006a76c) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xf09f,	// (0x0006a76c) main_fs_bigclock_swipe_pane_t1

0x356a,	// (0x0005ec37) call_type_pane_ParamLimits

0x9b3d,	// (0x0006520a) main_btmg_pane

0xa638,	// (0x00065d05) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa638,	// (0x00065d05) list_single_cale_mrui_row_pane_g2

0x0002,

0xfaf8,	// (0x0006b1c5) list_single_cale_mrui_row_pane_g_ParamLimits

0xfaf8,	// (0x0006b1c5) list_single_cale_mrui_row_pane_g

0xa6be,	// (0x00065d8b) list_recal_vselct_arw_lo_pane

0xeef3,	// (0x0006a5c0) list_recal_vselct_arw_up_pane

0xa6c6,	// (0x00065d93) list_recal_vselct_pane

0x9127,	// (0x000647f4) btmg_button_pane

0x9133,	// (0x00064800) main_btmg_pane_g1

0x9b3d,	// (0x0006520a) bg_button_pane_cp044

0xf0bc,	// (0x0006a789) btmg_button_pane_t1

0xcbbc,	// (0x00068289) aid_listscroll_gen

0xa733,	// (0x00065e00) main_cntbar_detail_pane

0xeb93,	// (0x0006a260) list_cmail_folder_pane

0xcd2b,	// (0x000683f8) sp_fs_scroll_pane_cp03_ParamLimits

0x913b,	// (0x00064808) list_single_fs_dyc_pane_cp01_ParamLimits

0x913b,	// (0x00064808) list_single_fs_dyc_pane_cp01

0xf0ca,	// (0x0006a797) aid_size_cmail_indent

0xa753,	// (0x00065e20) list_single_dyc_row_pane_cp01

0x918e,	// (0x0006485b) cntbar_detail_list_pane_ParamLimits

0x918e,	// (0x0006485b) cntbar_detail_list_pane

0x91c8,	// (0x00064895) main_cntbar_detail_cont_pane_ParamLimits

0x91c8,	// (0x00064895) main_cntbar_detail_cont_pane

0x348f,	// (0x0005eb5c) scroll_pane_cp032_ParamLimits

0x348f,	// (0x0005eb5c) scroll_pane_cp032

0x91d4,	// (0x000648a1) cntbar_detail_list_event_pane_ParamLimits

0x91d4,	// (0x000648a1) cntbar_detail_list_event_pane

0x919a,	// (0x00064867) cntbar_detail_list_shct_pane

0xb15c,	// (0x00066829) aid_list_gen

0x9eb1,	// (0x0006557e) aid_scroll

0x9eba,	// (0x00065587) aid_size_touch_scroll_bar

0x778d,	// (0x00062e5a) aid_list_double

0x91e8,	// (0x000648b5) aid_list_single

0x9e2b,	// (0x000654f8) aid_list_single_lg

0x91f1,	// (0x000648be) aid_list_z_g_a_sm

0x91f9,	// (0x000648c6) aid_list_z_g_d

0x9201,	// (0x000648ce) aid_txt_z_prm

0x920f,	// (0x000648dc) aid_txt_z_prm_cp01

0x921d,	// (0x000648ea) aid_txt_z_sec

0x922b,	// (0x000648f8) main_cntbar_detail_cont_pane_g1_ParamLimits

0x922b,	// (0x000648f8) main_cntbar_detail_cont_pane_g1

0x9238,	// (0x00064905) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9238,	// (0x00064905) main_cntbar_detail_cont_pane_g2

0x0001,

0xfb68,	// (0x0006b235) main_cntbar_detail_cont_pane_g_ParamLimits

0xfb68,	// (0x0006b235) main_cntbar_detail_cont_pane_g

0x9ec3,	// (0x00065590) main_cntbar_detail_cont_pane_t1

0x9ed1,	// (0x0006559e) main_cntbar_detail_cont_pane_t2

0x9edf,	// (0x000655ac) main_cntbar_detail_cont_pane_t3

0x0002,

0xfb6d,	// (0x0006b23a) main_cntbar_detail_cont_pane_t

0x9244,	// (0x00064911) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9244,	// (0x00064911) cell_cntbar_detail_list_shct_pane

0x9eed,	// (0x000655ba) cntbar_detail_list_shct_pane_g1

0x9ef6,	// (0x000655c3) cntbar_detail_list_shct_pane_g2

0x0001,

0xfb74,	// (0x0006b241) cntbar_detail_list_shct_pane_g

0x9258,	// (0x00064925) cntbar_detail_list_event_pane_g1_ParamLimits

0x9258,	// (0x00064925) cntbar_detail_list_event_pane_g1

0x9264,	// (0x00064931) cntbar_detail_list_event_pane_g2_ParamLimits

0x9264,	// (0x00064931) cntbar_detail_list_event_pane_g2

0x0005,

0xfb79,	// (0x0006b246) cntbar_detail_list_event_pane_g_ParamLimits

0xfb79,	// (0x0006b246) cntbar_detail_list_event_pane_g

0x92d0,	// (0x0006499d) cntbar_detail_list_event_pane_t1_ParamLimits

0x92d0,	// (0x0006499d) cntbar_detail_list_event_pane_t1

0x92e5,	// (0x000649b2) cntbar_detail_list_event_pane_t2_ParamLimits

0x92e5,	// (0x000649b2) cntbar_detail_list_event_pane_t2

0x0002,

0xfb86,	// (0x0006b253) cntbar_detail_list_event_pane_t_ParamLimits

0xfb86,	// (0x0006b253) cntbar_detail_list_event_pane_t

0xcfe6,	// (0x000686b3) cell_cntbar_detail_list_shct_pane_g1

0x38f9,	// (0x0005efc6) navi_pane_mv_g3

0xa733,	// (0x00065e00) main_cntbar_detail_pane_ParamLimits

0x9b3d,	// (0x0006520a) main_notif_wgt_pane

0x5f73,	// (0x00061640) aid_tch_main_mp4_pane_g4

0x61a8,	// (0x00061875) popup_slider_window_cp02

0xa6b4,	// (0x00065d81) list_recal_day_event_pane

0x916e,	// (0x0006483b) cntbar_detail_btn_pane_ParamLimits

0x916e,	// (0x0006483b) cntbar_detail_btn_pane

0x917e,	// (0x0006484b) cntbar_detail_btn_pane_cp01_ParamLimits

0x917e,	// (0x0006484b) cntbar_detail_btn_pane_cp01

0x919a,	// (0x00064867) cntbar_detail_list_shct_pane_ParamLimits

0x91a6,	// (0x00064873) cntbar_detail_pane_g1_ParamLimits

0x91a6,	// (0x00064873) cntbar_detail_pane_g1

0x91b2,	// (0x0006487f) cntbar_detail_pane_t1_ParamLimits

0x91b2,	// (0x0006487f) cntbar_detail_pane_t1

0x9270,	// (0x0006493d) cntbar_detail_list_event_pane_g3_ParamLimits

0x9270,	// (0x0006493d) cntbar_detail_list_event_pane_g3

0x9288,	// (0x00064955) cntbar_detail_list_event_pane_g4_ParamLimits

0x9288,	// (0x00064955) cntbar_detail_list_event_pane_g4

0x92a0,	// (0x0006496d) cntbar_detail_list_event_pane_g5_ParamLimits

0x92a0,	// (0x0006496d) cntbar_detail_list_event_pane_g5

0x92b8,	// (0x00064985) cntbar_detail_list_event_pane_g6_ParamLimits

0x92b8,	// (0x00064985) cntbar_detail_list_event_pane_g6

0x92fa,	// (0x000649c7) cntbar_detail_list_event_pane_t3_ParamLimits

0x92fa,	// (0x000649c7) cntbar_detail_list_event_pane_t3

0x930c,	// (0x000649d9) popup_notif_wgt_window_ParamLimits

0x930c,	// (0x000649d9) popup_notif_wgt_window

0x931c,	// (0x000649e9) popup_submenu_window_cp01_ParamLimits

0x931c,	// (0x000649e9) popup_submenu_window_cp01

0xb7c0,	// (0x00066e8d) bg_popup_window_pane_cp10

0x9eff,	// (0x000655cc) listscroll_notif_wgt_pane

0x9f10,	// (0x000655dd) list_notif_wgt_window

0x9f19,	// (0x000655e6) scroll_pane_cp033

0x932a,	// (0x000649f7) list_notif_wgt_row_pane_ParamLimits

0x932a,	// (0x000649f7) list_notif_wgt_row_pane

0x9f22,	// (0x000655ef) aid_size_list_notif_wgt_del

0x9f2f,	// (0x000655fc) list_notif_wgt_row_pane_g1

0x9f3b,	// (0x00065608) list_notif_wgt_row_pane_g2

0x9f47,	// (0x00065614) list_notif_wgt_row_pane_g3

0x0002,

0xfb8d,	// (0x0006b25a) list_notif_wgt_row_pane_g

0x9f54,	// (0x00065621) list_notif_wgt_row_pane_t1

0x9f69,	// (0x00065636) list_notif_wgt_row_pane_t2

0x9f7b,	// (0x00065648) list_notif_wgt_row_pane_t3

0x0002,

0xfb94,	// (0x0006b261) list_notif_wgt_row_pane_t

0xdc76,	// (0x00069343) list_recal_day_event_pane_g1

0x9f8d,	// (0x0006565a) list_recal_day_event_pane_t1

0x9b3d,	// (0x0006520a) bg_button_pane_cp045

0x9f9c,	// (0x00065669) cntbar_detail_btn_pane_t1

0xcbd0,	// (0x0006829d) main_callh_pane_ParamLimits

0xcbd0,	// (0x0006829d) main_callh_pane

0x9b3d,	// (0x0006520a) main_coverflow0_pane

0x9b3d,	// (0x0006520a) main_wgtman_pane

0x843e,	// (0x00063b0b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x843e,	// (0x00063b0b) main_fs_bigclock_unlock_btn_pane

0x8b8a,	// (0x00064257) bg_button_pane_cp16

0x8b9a,	// (0x00064267) cell_tport_appsw_pane_g3

0x933b,	// (0x00064a08) cf0_flow_pane_ParamLimits

0x933b,	// (0x00064a08) cf0_flow_pane

0x9faa,	// (0x00065677) listscroll_cf0_pane

0x9fb5,	// (0x00065682) main_cf0_pane_g1

0x934a,	// (0x00064a17) main_cf0_pane_t1_ParamLimits

0x934a,	// (0x00064a17) main_cf0_pane_t1

0x935e,	// (0x00064a2b) main_cf0_pane_t2_ParamLimits

0x935e,	// (0x00064a2b) main_cf0_pane_t2

0x0001,

0xfba0,	// (0x0006b26d) main_cf0_pane_t_ParamLimits

0xfba0,	// (0x0006b26d) main_cf0_pane_t

0x9fc7,	// (0x00065694) scroll_pane_cp11

0x9372,	// (0x00064a3f) cf0_flow_pane_g1

0x937a,	// (0x00064a47) cf0_flow_pane_g2

0x0001,

0xfba5,	// (0x0006b272) cf0_flow_pane_g

0x9382,	// (0x00064a4f) cf0_flow_pane_t1

0x9b3d,	// (0x0006520a) main_call6_pane

0x9b3d,	// (0x0006520a) main_calllock_pane

0x9390,	// (0x00064a5d) call6_btn_grp_pane_ParamLimits

0x9390,	// (0x00064a5d) call6_btn_grp_pane

0x939f,	// (0x00064a6c) call6_pane_g1_ParamLimits

0x939f,	// (0x00064a6c) call6_pane_g1

0x93ae,	// (0x00064a7b) popup_call6_1st_window_ParamLimits

0x93ae,	// (0x00064a7b) popup_call6_1st_window

0x93bc,	// (0x00064a89) popup_call6_2nd_window_ParamLimits

0x93bc,	// (0x00064a89) popup_call6_2nd_window

0x93ca,	// (0x00064a97) cell_call6_btn_pane_ParamLimits

0x93ca,	// (0x00064a97) cell_call6_btn_pane

0xb7c0,	// (0x00066e8d) bg_popup_call2_in_pane_cp03

0x9fd2,	// (0x0006569f) popup_call6_1st_window_g1

0x9fda,	// (0x000656a7) popup_call6_1st_window_g2

0x9fe2,	// (0x000656af) popup_call6_1st_window_g3

0x0002,

0xfbaa,	// (0x0006b277) popup_call6_1st_window_g

0x9fea,	// (0x000656b7) popup_call6_1st_window_t1

0x9ff9,	// (0x000656c6) popup_call6_1st_window_t2

0xa009,	// (0x000656d6) popup_call6_1st_window_t3

0x0002,

0xfbb1,	// (0x0006b27e) popup_call6_1st_window_t

0xb7c0,	// (0x00066e8d) bg_popup_call2_in_pane_cp04

0x9fd2,	// (0x0006569f) popup_call6_2nd_window_g1

0x9fda,	// (0x000656a7) popup_call6_2nd_window_g2

0x9fe2,	// (0x000656af) popup_call6_2nd_window_g3

0x0002,

0xfbaa,	// (0x0006b277) popup_call6_2nd_window_g

0x9fea,	// (0x000656b7) popup_call6_2nd_window_t1

0x9b3d,	// (0x0006520a) bg_button_pane_cp15

0xa019,	// (0x000656e6) cell_call6_btn_pane_g1

0xa022,	// (0x000656ef) cell_call6_btn_pane_t1

0x93d9,	// (0x00064aa6) listscroll_wgtman_pane_ParamLimits

0x93d9,	// (0x00064aa6) listscroll_wgtman_pane

0x93f7,	// (0x00064ac4) wgtman_btn_pane_ParamLimits

0x93f7,	// (0x00064ac4) wgtman_btn_pane

0xb677,	// (0x00066d44) aid_scroll_copy1

0xa031,	// (0x000656fe) list_wgtman_pane

0x942c,	// (0x00064af9) wgtman_btn_pane_g1_ParamLimits

0x942c,	// (0x00064af9) wgtman_btn_pane_g1

0x9454,	// (0x00064b21) wgtman_btn_pane_t1_ParamLimits

0x9454,	// (0x00064b21) wgtman_btn_pane_t1

0xa03b,	// (0x00065708) wgtman_btn_pane_t2_ParamLimits

0xa03b,	// (0x00065708) wgtman_btn_pane_t2

0x0001,

0xfbb8,	// (0x0006b285) wgtman_btn_pane_t_ParamLimits

0xfbb8,	// (0x0006b285) wgtman_btn_pane_t

0x948b,	// (0x00064b58) listrow_wgtman_pane_ParamLimits

0x948b,	// (0x00064b58) listrow_wgtman_pane

0x94a4,	// (0x00064b71) listrow_wgtman_pane_g1

0x94b1,	// (0x00064b7e) listrow_wgtman_pane_g2

0x0001,

0xfbbd,	// (0x0006b28a) listrow_wgtman_pane_g

0x94cf,	// (0x00064b9c) listrow_wgtman_pane_t1

0x94e7,	// (0x00064bb4) listrow_wgtman_pane_t2

0x0001,

0xfbc2,	// (0x0006b28f) listrow_wgtman_pane_t

0x950d,	// (0x00064bda) wait_bar_pane_cp09

0xa052,	// (0x0006571f) main_calllock_btn_pane

0xa05c,	// (0x00065729) main_calllock_pane_g1

0x9b3d,	// (0x0006520a) bg_button_pane_cp17

0xa067,	// (0x00065734) main_calllock_btn_pane_g1

0xa070,	// (0x0006573d) main_calllock_btn_pane_t1

0x9b3d,	// (0x0006520a) main_dialer3_pane

0x9b3d,	// (0x0006520a) main_fmrd2_pane

0xcfe6,	// (0x000686b3) main_fs_bigclock_unlock_btn_pane_g1

0xa087,	// (0x00065754) main_fs_bigclock_unlock_btn_pane_t1

0x951f,	// (0x00064bec) area_fmrd2_info_pane_ParamLimits

0x951f,	// (0x00064bec) area_fmrd2_info_pane

0x952d,	// (0x00064bfa) area_fmrd2_visual_pane_ParamLimits

0x952d,	// (0x00064bfa) area_fmrd2_visual_pane

0x953b,	// (0x00064c08) fmrd2_indi_pane_ParamLimits

0x953b,	// (0x00064c08) fmrd2_indi_pane

0x9548,	// (0x00064c15) area_fmrd2_visual_pane_g1

0x9550,	// (0x00064c1d) area_fmrd2_visual_pane_t1

0x9560,	// (0x00064c2d) area_fmrd2_visual_pane_t2

0x9570,	// (0x00064c3d) area_fmrd2_visual_pane_t3

0x0002,

0xfbcc,	// (0x0006b299) area_fmrd2_visual_pane_t

0x9580,	// (0x00064c4d) area_fmrd2_info_pane_g1

0x9588,	// (0x00064c55) area_fmrd2_info_pane_t1

0x9598,	// (0x00064c65) area_fmrd2_info_pane_t2

0x95a8,	// (0x00064c75) area_fmrd2_info_pane_t3

0x95b8,	// (0x00064c85) area_fmrd2_info_pane_t4

0x0003,

0xfbd3,	// (0x0006b2a0) area_fmrd2_info_pane_t

0x95c6,	// (0x00064c93) fmrd2_indi_pane_t1

0x95d6,	// (0x00064ca3) fmrd2_indi_pane_t2

0x95e6,	// (0x00064cb3) fmrd2_indi_pane_t3

0x0002,

0xfbdc,	// (0x0006b2a9) fmrd2_indi_pane_t

0xe814,	// (0x00069ee1) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe814,	// (0x00069ee1) list_single_fs_bigclock_indicator_pane_g5

0xe8bb,	// (0x00069f88) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe8bb,	// (0x00069f88) list_single_fs_bigclock_indicator_pane_t5

0x8d8e,	// (0x0006445b) aid_cell_bcale_month_pane_ParamLimits

0x8d8e,	// (0x0006445b) aid_cell_bcale_month_pane

0x8dac,	// (0x00064479) bcale_month_pane_ParamLimits

0x8dac,	// (0x00064479) bcale_month_pane

0x8dca,	// (0x00064497) bcale_preview_pane_ParamLimits

0x8dca,	// (0x00064497) bcale_preview_pane

0xf054,	// (0x0006a721) list_single_fs_bigclock_pane_t1_ParamLimits

0xf073,	// (0x0006a740) list_single_fs_bigclock_pane_t2_ParamLimits

0xf073,	// (0x0006a740) list_single_fs_bigclock_pane_t2

0x0001,

0xfb63,	// (0x0006b230) list_single_fs_bigclock_pane_t_ParamLimits

0xfb63,	// (0x0006b230) list_single_fs_bigclock_pane_t

0xa07f,	// (0x0006574c) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfbc7,	// (0x0006b294) main_fs_bigclock_unlock_btn_pane_g

0x95f4,	// (0x00064cc1) aid_dia3_key_size_ParamLimits

0x95f4,	// (0x00064cc1) aid_dia3_key_size

0x9600,	// (0x00064ccd) aid_dia3_listrow_size_ParamLimits

0x9600,	// (0x00064ccd) aid_dia3_listrow_size

0x9610,	// (0x00064cdd) dia3_keypad_fun_pane_ParamLimits

0x9610,	// (0x00064cdd) dia3_keypad_fun_pane

0x9622,	// (0x00064cef) dia3_keypad_num_pane_ParamLimits

0x9622,	// (0x00064cef) dia3_keypad_num_pane

0x9634,	// (0x00064d01) dia3_listscroll_pane_ParamLimits

0x9634,	// (0x00064d01) dia3_listscroll_pane

0x9642,	// (0x00064d0f) dia3_numentry_pane_ParamLimits

0x9642,	// (0x00064d0f) dia3_numentry_pane

0xa095,	// (0x00065762) dia3_list_pane

0xa0a0,	// (0x0006576d) scroll_pane_cp12

0x9b3d,	// (0x0006520a) bg_dia3_numentry_pane

0x9650,	// (0x00064d1d) dia3_numentry_pane_t1

0x965f,	// (0x00064d2c) cell_dia3_key_num_pane

0x9667,	// (0x00064d34) cell_dia3_key0_fun_pane_ParamLimits

0x9667,	// (0x00064d34) cell_dia3_key0_fun_pane

0x9674,	// (0x00064d41) cell_dia3_key1_fun_pane_ParamLimits

0x9674,	// (0x00064d41) cell_dia3_key1_fun_pane

0x9681,	// (0x00064d4e) dia3_listrow_pane

0xe4fa,	// (0x00069bc7) bg_dia3_numentry_pane_g1

0x9b3d,	// (0x0006520a) bg_button_pane_cp21

0xa0ab,	// (0x00065778) cell_dia3_key_num_pane_t1

0xa0b9,	// (0x00065786) cell_dia3_key_num_pane_t2

0xa0c8,	// (0x00065795) cell_dia3_key_num_pane_t3

0xa0d7,	// (0x000657a4) cell_dia3_key_num_pane_t4

0x0003,

0xfbe3,	// (0x0006b2b0) cell_dia3_key_num_pane_t

0x9b3d,	// (0x0006520a) bg_button_pane_cp19

0x968e,	// (0x00064d5b) cell_dia3_key0_fun_pane_g1

0x9b3d,	// (0x0006520a) bg_button_pane_cp20

0x9696,	// (0x00064d63) cell_dia3_key1_fun_pane_g1

0x969e,	// (0x00064d6b) area_left_week_number_pane

0x96b1,	// (0x00064d7e) area_top_day_name_pane

0x96bf,	// (0x00064d8c) frame_month_view_pane

0xa0e6,	// (0x000657b3) grid_month_view_pane

0x96d4,	// (0x00064da1) cell_top_day_name_pane_ParamLimits

0x96d4,	// (0x00064da1) cell_top_day_name_pane

0x96ee,	// (0x00064dbb) cell_area_left_week_number_pane_ParamLimits

0x96ee,	// (0x00064dbb) cell_area_left_week_number_pane

0x9711,	// (0x00064dde) cell_month_view_pane_ParamLimits

0x9711,	// (0x00064dde) cell_month_view_pane

0xa0f4,	// (0x000657c1) frm_month_g1

0x973d,	// (0x00064e0a) frm_month_g2

0x974e,	// (0x00064e1b) frm_month_g3

0x975f,	// (0x00064e2c) frm_month_g4

0x9770,	// (0x00064e3d) frm_month_g5

0x9783,	// (0x00064e50) frm_month_g6

0x9796,	// (0x00064e63) frm_month_g7

0xa101,	// (0x000657ce) frm_month_g8

0x97a9,	// (0x00064e76) frm_month_g9

0x97b6,	// (0x00064e83) frm_month_g10

0x97c3,	// (0x00064e90) frm_month_g11

0x97d0,	// (0x00064e9d) frm_month_g12

0x97dd,	// (0x00064eaa) frm_month_g13

0x97ea,	// (0x00064eb7) frm_month_g14

0x97f9,	// (0x00064ec6) frm_month_g15

0x9808,	// (0x00064ed5) frm_month_g16

0x000f,

0xfbec,	// (0x0006b2b9) frm_month_g

0xa10e,	// (0x000657db) cell_top_day_name_pane_t1

0x9817,	// (0x00064ee4) cell_area_left_week_number_pane_g1

0x9826,	// (0x00064ef3) cell_area_left_week_number_pane_t1

0xd246,	// (0x00068913) cell_month_view_pane_g1

0x983c,	// (0x00064f09) cell_month_view_pane_t1

0x9b3d,	// (0x0006520a) main_fps_pane

0xeaab,	// (0x0006a178) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xeaab,	// (0x0006a178) cmail_ddmenu_btn02_pane_cp1

0xeac7,	// (0x0006a194) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xeac7,	// (0x0006a194) cmail_ddmenu_btn02_pane_cp2

0x9000,	// (0x000646cd) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9000,	// (0x000646cd) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfb20,	// (0x0006b1ed) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfb20,	// (0x0006b1ed) cmail_ddmenu_btn02_pane_g

0x901e,	// (0x000646eb) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x901e,	// (0x000646eb) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfb25,	// (0x0006b1f2) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfb25,	// (0x0006b1f2) cmail_ddmenu_btn02_pane_t

0x9852,	// (0x00064f1f) fps_text_pane_ParamLimits

0x9852,	// (0x00064f1f) fps_text_pane

0x985f,	// (0x00064f2c) main_fps_pane_g1_ParamLimits

0x985f,	// (0x00064f2c) main_fps_pane_g1

0x986d,	// (0x00064f3a) wait_bar_pane_cp010_ParamLimits

0x986d,	// (0x00064f3a) wait_bar_pane_cp010

0x9879,	// (0x00064f46) fps_text_pane_t1_ParamLimits

0x9879,	// (0x00064f46) fps_text_pane_t1

0x6598,	// (0x00061c65) cam4_image_uncrop_pane_g1

0x65a1,	// (0x00061c6e) cam4_image_uncrop_pane_g2

0x65aa,	// (0x00061c77) cam4_image_uncrop_pane_g3

0x65b3,	// (0x00061c80) cam4_image_uncrop_pane_g4

0x0003,

0xf71d,	// (0x0006adea) cam4_image_uncrop_pane_g

0x9681,	// (0x00064d4e) dia3_listrow_pane_ParamLimits

0x9b3d,	// (0x0006520a) main_phob2_pane

0x8b6c,	// (0x00064239) cell_tport_appsw_pane_cp02_ParamLimits

0x8b6c,	// (0x00064239) cell_tport_appsw_pane_cp02

0x8b7b,	// (0x00064248) cell_tport_appsw_pane_cp03_ParamLimits

0x8b7b,	// (0x00064248) cell_tport_appsw_pane_cp03

0x9b3d,	// (0x0006520a) phob2_contact_card_pane

0x9b3d,	// (0x0006520a) phob2_listscroll_pane

0xa121,	// (0x000657ee) phob2_list_pane

0xa129,	// (0x000657f6) scroll_pane_cp034

0x9892,	// (0x00064f5f) phob2_cc_data_pane_ParamLimits

0x9892,	// (0x00064f5f) phob2_cc_data_pane

0x98ac,	// (0x00064f79) phob2_cc_listscroll_pane_ParamLimits

0x98ac,	// (0x00064f79) phob2_cc_listscroll_pane

0x98c6,	// (0x00064f93) list_double_large_graphic_phob2_pane_ParamLimits

0x98c6,	// (0x00064f93) list_double_large_graphic_phob2_pane

0x98e8,	// (0x00064fb5) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x98e8,	// (0x00064fb5) list_double_large_graphic_phob2_pane_g1

0x98fe,	// (0x00064fcb) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x98fe,	// (0x00064fcb) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfc0d,	// (0x0006b2da) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfc0d,	// (0x0006b2da) list_double_large_graphic_phob2_pane_g

0x990a,	// (0x00064fd7) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x990a,	// (0x00064fd7) list_double_large_graphic_phob2_pane_t1

0x9920,	// (0x00064fed) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9920,	// (0x00064fed) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfc12,	// (0x0006b2df) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfc12,	// (0x0006b2df) list_double_large_graphic_phob2_pane_t

0x9b3d,	// (0x0006520a) list_highlight_pane_cp024

0xa131,	// (0x000657fe) phob2_cc_button_pane

0x9935,	// (0x00065002) phob2_cc_data_pane_g1_ParamLimits

0x9935,	// (0x00065002) phob2_cc_data_pane_g1

0x9941,	// (0x0006500e) phob2_cc_data_pane_g2_ParamLimits

0x9941,	// (0x0006500e) phob2_cc_data_pane_g2

0x0001,

0xfc17,	// (0x0006b2e4) phob2_cc_data_pane_g_ParamLimits

0xfc17,	// (0x0006b2e4) phob2_cc_data_pane_g

0x994d,	// (0x0006501a) phob2_cc_data_pane_t1_ParamLimits

0x994d,	// (0x0006501a) phob2_cc_data_pane_t1

0x995f,	// (0x0006502c) phob2_cc_data_pane_t2_ParamLimits

0x995f,	// (0x0006502c) phob2_cc_data_pane_t2

0x9971,	// (0x0006503e) phob2_cc_data_pane_t3_ParamLimits

0x9971,	// (0x0006503e) phob2_cc_data_pane_t3

0x0002,

0xfc1c,	// (0x0006b2e9) phob2_cc_data_pane_t_ParamLimits

0xfc1c,	// (0x0006b2e9) phob2_cc_data_pane_t

0xa139,	// (0x00065806) phob2_cc_list_pane_ParamLimits

0xa139,	// (0x00065806) phob2_cc_list_pane

0xdd21,	// (0x000693ee) scroll_pane_cp035_ParamLimits

0xdd21,	// (0x000693ee) scroll_pane_cp035

0xa733,	// (0x00065e00) bg_button_pane_cp033

0xa145,	// (0x00065812) phob2_cc_button_pane_g1

0xa151,	// (0x0006581e) phob2_cc_button_pane_t1

0xa166,	// (0x00065833) phob2_cc_button_pane_t2

0x0001,

0xfc23,	// (0x0006b2f0) phob2_cc_button_pane_t

0x9983,	// (0x00065050) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9983,	// (0x00065050) list_double_large_graphic_phob2_cc_pane

0x99b2,	// (0x0006507f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x99b2,	// (0x0006507f) list_double_large_graphic_phob2_cc_pane_g1

0x99c3,	// (0x00065090) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x99c3,	// (0x00065090) list_double_large_graphic_phob2_cc_pane_g2

0x99d2,	// (0x0006509f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x99d2,	// (0x0006509f) list_double_large_graphic_phob2_cc_pane_g3

0x99e1,	// (0x000650ae) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x99e1,	// (0x000650ae) list_double_large_graphic_phob2_cc_pane_g4

0x99f2,	// (0x000650bf) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x99f2,	// (0x000650bf) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfc28,	// (0x0006b2f5) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfc28,	// (0x0006b2f5) list_double_large_graphic_phob2_cc_pane_g

0x9a01,	// (0x000650ce) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9a01,	// (0x000650ce) list_double_large_graphic_phob2_cc_pane_t1

0x9a2a,	// (0x000650f7) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9a2a,	// (0x000650f7) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfc33,	// (0x0006b300) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfc33,	// (0x0006b300) list_double_large_graphic_phob2_cc_pane_t

0xa178,	// (0x00065845) list_highlight_pane_cp025_ParamLimits

0xa178,	// (0x00065845) list_highlight_pane_cp025

0xa733,	// (0x00065e00) bg_button_pane_cp033_ParamLimits

0xa145,	// (0x00065812) phob2_cc_button_pane_g1_ParamLimits

0xa151,	// (0x0006581e) phob2_cc_button_pane_t1_ParamLimits

0xa166,	// (0x00065833) phob2_cc_button_pane_t2_ParamLimits

0xfc23,	// (0x0006b2f0) phob2_cc_button_pane_t_ParamLimits

0x11c3,	// (0x0005c890) popup_wgtman_window

0xdb49,	// (0x00069216) scroll_pane_cp038

0x9414,	// (0x00064ae1) wgtman_btn_pane_cp_01_ParamLimits

0x9414,	// (0x00064ae1) wgtman_btn_pane_cp_01

0xa186,	// (0x00065853) wgtman_content_pane

0xa18f,	// (0x0006585c) wgtman_heading_pane

0x9b3d,	// (0x0006520a) bg_heading_pane_cp02

0xa198,	// (0x00065865) wgtman_heading_pane_g1

0xa1a0,	// (0x0006586d) wgtman_heading_pane_t1

0xa1ae,	// (0x0006587b) scroll_pane_cp036

0xa1b6,	// (0x00065883) wgtman_list_pane

0xa1be,	// (0x0006588b) wgtman_list_pane_t1_ParamLimits

0xa1be,	// (0x0006588b) wgtman_list_pane_t1

0x64f7,	// (0x00061bc4) cam4_grid_pane

0x7248,	// (0x00062915) bg_button_pane_cp015_ParamLimits

0x725a,	// (0x00062927) bg_button_pane_cp016_ParamLimits

0x726d,	// (0x0006293a) bg_button_pane_cp017_ParamLimits

0x72c3,	// (0x00062990) popup_vitu2_query_window_g3_ParamLimits

0x72c3,	// (0x00062990) popup_vitu2_query_window_g3

0x737e,	// (0x00062a4b) popup_vitu2_query_window_t6_ParamLimits

0x737e,	// (0x00062a4b) popup_vitu2_query_window_t6

0x73a9,	// (0x00062a76) popup_vitu2_query_window_t7_ParamLimits

0x73a9,	// (0x00062a76) popup_vitu2_query_window_t7

0xe60a,	// (0x00069cd7) cam4_grid_pane_g1

0xe613,	// (0x00069ce0) cam4_grid_pane_g2

0xa1da,	// (0x000658a7) cam4_grid_pane_g3

0xa1e3,	// (0x000658b0) cam4_grid_pane_g4

0x0003,

0xfc38,	// (0x0006b305) cam4_grid_pane_g

0x20f2,	// (0x0005d7bf) aid_placing_vt_slider_lsc_ParamLimits

0x2432,	// (0x0005daff) vidtel_button_pane_ParamLimits

0x2432,	// (0x0005daff) vidtel_button_pane

0xa1ee,	// (0x000658bb) bg_button_pane_cp034

0x9a53,	// (0x00065120) vidtel_button_pane_g1

0xa1f8,	// (0x000658c5) vidtel_button_pane_t1

0xdc66,	// (0x00069333) aid_size_vtel_slider_touch

0xdd21,	// (0x000693ee) scroll_pane_cp039

0xe538,	// (0x00069c05) ncim_query_button_pane_cp01_ParamLimits

0xe557,	// (0x00069c24) ncimui_query_pane_g1_ParamLimits

0xa733,	// (0x00065e00) input_focus_pane_cp012_ParamLimits

0xe57c,	// (0x00069c49) ncim_query_entry_pane_t1_ParamLimits

0xdd21,	// (0x000693ee) scroll_pane_cp039_ParamLimits

0x386b,	// (0x0005ef38) navi_pane_bcale_mc_g1

0x3873,	// (0x0005ef40) navi_pane_bcale_mc_t1

0xeb10,	// (0x0006a1dd) main_sp_fs_email_pane_g1

0xeb1c,	// (0x0006a1e9) main_sp_fs_email_pane_g2

0x0001,

0x0bf1,	// (0x0005c2be) main_sp_fs_email_pane_g

0xed64,	// (0x0006a431) list_single_cale_mrui_row_pane_g3_ParamLimits

0xed64,	// (0x0006a431) list_single_cale_mrui_row_pane_g3

0x9046,	// (0x00064713) list_single_recal_day_pane_g5_event_pane

0xa719,	// (0x00065de6) list_single_recal_day_pane_g7

0xa206,	// (0x000658d3) list_recal_day_event_pane_cp01

0xa20f,	// (0x000658dc) list_recal_vselct_arw_lo_pane_cp01

0xa217,	// (0x000658e4) list_recal_vselct_arw_up_pane_cp01

0xa21f,	// (0x000658ec) list_recal_vselct_pane_cp01

0xdc76,	// (0x00069343) list_recal_day_event_pane_cp01_g1

0xa75c,	// (0x00065e29) list_recal_day_event_pane_cp01_t1

0xa721,	// (0x00065dee) list_single_recal_day_pane_t1_ParamLimits

0xa741,	// (0x00065e0e) list_single_recal_day_pane_t2_ParamLimits

0xfb35,	// (0x0006b202) list_single_recal_day_pane_t_ParamLimits

0xac00,	// (0x000662cd) bg_notes_pane_ParamLimits

0xacc2,	// (0x0006638f) list_notes_pane_ParamLimits

0x1518,	// (0x0005cbe5) scroll_pane_cp06_ParamLimits

0xace4,	// (0x000663b1) main_notes_pane_ParamLimits

0x9b3d,	// (0x0006520a) main_welc_pane

0x9a5b,	// (0x00065128) main_welc_body_pane_ParamLimits

0x9a5b,	// (0x00065128) main_welc_body_pane

0x9a74,	// (0x00065141) main_welc_opti_pane_ParamLimits

0x9a74,	// (0x00065141) main_welc_opti_pane

0x9aa9,	// (0x00065176) main_welc_pane_t1_ParamLimits

0x9aa9,	// (0x00065176) main_welc_pane_t1

0x9ac7,	// (0x00065194) main_welc_body_row_pane_ParamLimits

0x9ac7,	// (0x00065194) main_welc_body_row_pane

0xe5b9,	// (0x00069c86) main_welc_opti_row_pane_ParamLimits

0xe5b9,	// (0x00069c86) main_welc_opti_row_pane

0xa229,	// (0x000658f6) main_welc_opti_row_pane_g1

0xa231,	// (0x000658fe) main_welc_opti_row_pane_t1

0xa241,	// (0x0006590e) main_welc_body_row_pane_t1

0x9f08,	// (0x000655d5) popup_notif_wgt_heading_pane

0x9f22,	// (0x000655ef) aid_size_list_notif_wgt_del_ParamLimits

0x9f2f,	// (0x000655fc) list_notif_wgt_row_pane_g1_ParamLimits

0x9f3b,	// (0x00065608) list_notif_wgt_row_pane_g2_ParamLimits

0x9f47,	// (0x00065614) list_notif_wgt_row_pane_g3_ParamLimits

0xfb8d,	// (0x0006b25a) list_notif_wgt_row_pane_g_ParamLimits

0x9f54,	// (0x00065621) list_notif_wgt_row_pane_t1_ParamLimits

0x9f69,	// (0x00065636) list_notif_wgt_row_pane_t2_ParamLimits

0x9f7b,	// (0x00065648) list_notif_wgt_row_pane_t3_ParamLimits

0xfb94,	// (0x0006b261) list_notif_wgt_row_pane_t_ParamLimits

0x94a4,	// (0x00064b71) listrow_wgtman_pane_g1_ParamLimits

0x94b1,	// (0x00064b7e) listrow_wgtman_pane_g2_ParamLimits

0xfbbd,	// (0x0006b28a) listrow_wgtman_pane_g_ParamLimits

0x94cf,	// (0x00064b9c) listrow_wgtman_pane_t1_ParamLimits

0x94e7,	// (0x00064bb4) listrow_wgtman_pane_t2_ParamLimits

0xfbc2,	// (0x0006b28f) listrow_wgtman_pane_t_ParamLimits

0x950d,	// (0x00064bda) wait_bar_pane_cp09_ParamLimits

0x9b3d,	// (0x0006520a) bg_popup_heading_pane_cp02

0xa250,	// (0x0006591d) popup_notif_wgt_heading_pane_g1

0xa258,	// (0x00065925) popup_notif_wgt_heading_pane_t1

0x9b3d,	// (0x0006520a) main_vids_pane

0x9b3d,	// (0x0006520a) vids_listscroll_pane

0x9af3,	// (0x000651c0) scroll_pane_cp040

0x9b3d,	// (0x0006520a) vids_list_pane

0x9afe,	// (0x000651cb) vids_list_double_pane_ParamLimits

0x9afe,	// (0x000651cb) vids_list_double_pane

0x9b16,	// (0x000651e3) vids_list_double_pane_g1

0x9b1f,	// (0x000651ec) vids_list_double_pane_t1

0x9b2f,	// (0x000651fc) vids_list_double_pane_t2

0x0001,

0xfc46,	// (0x0006b313) vids_list_double_pane_t

0x460e,	// (0x0005fcdb) main_ncimui_pane_ParamLimits

0x7ffe,	// (0x000636cb) main_ncimui_pane_g1_ParamLimits

0x800a,	// (0x000636d7) main_ncimui_pane_g2_ParamLimits

0x800a,	// (0x000636d7) main_ncimui_pane_g2

0x0001,

0xf97d,	// (0x0006b04a) main_ncimui_pane_g_ParamLimits

0xf97d,	// (0x0006b04a) main_ncimui_pane_g

0x9a8f,	// (0x0006515c) main_welc_pane_g1_ParamLimits

0x9a8f,	// (0x0006515c) main_welc_pane_g1

0x9a9b,	// (0x00065168) main_welc_pane_g2_ParamLimits

0x9a9b,	// (0x00065168) main_welc_pane_g2

0x0001,

0xfc41,	// (0x0006b30e) main_welc_pane_g_ParamLimits

0xfc41,	// (0x0006b30e) main_welc_pane_g

0xac00,	// (0x000662cd) listscroll_mce_pane_ParamLimits

0x3935,	// (0x0005f002) wait_bar_pane_cp10

0xcbc4,	// (0x00068291) main_cale_day_pane_ParamLimits

0xcbc4,	// (0x00068291) main_cale_week_pane_ParamLimits

0xac00,	// (0x000662cd) main_messa_pane_ParamLimits

0x591d,	// (0x00060fea) main_clock2_btn_pane_ParamLimits

0x591d,	// (0x00060fea) main_clock2_btn_pane

0xd3ce,	// (0x00068a9b) main_clock2_btn_pane_cp01_ParamLimits

0xd3ce,	// (0x00068a9b) main_clock2_btn_pane_cp01

0xed35,	// (0x0006a402) list_cale_mrui_pane_ParamLimits

0x9fbf,	// (0x0006568c) main_cf0_pane_g2

0x0001,

0xfb9b,	// (0x0006b268) main_cf0_pane_g

0x969e,	// (0x00064d6b) area_left_week_number_pane_ParamLimits

0x96b1,	// (0x00064d7e) area_top_day_name_pane_ParamLimits

0x96bf,	// (0x00064d8c) frame_month_view_pane_ParamLimits

0xa0e6,	// (0x000657b3) grid_month_view_pane_ParamLimits

0xa0f4,	// (0x000657c1) frm_month_g1_ParamLimits

0x973d,	// (0x00064e0a) frm_month_g2_ParamLimits

0x974e,	// (0x00064e1b) frm_month_g3_ParamLimits

0x975f,	// (0x00064e2c) frm_month_g4_ParamLimits

0x9770,	// (0x00064e3d) frm_month_g5_ParamLimits

0x9783,	// (0x00064e50) frm_month_g6_ParamLimits

0x9796,	// (0x00064e63) frm_month_g7_ParamLimits

0xa101,	// (0x000657ce) frm_month_g8_ParamLimits

0x97a9,	// (0x00064e76) frm_month_g9_ParamLimits

0x97b6,	// (0x00064e83) frm_month_g10_ParamLimits

0x97c3,	// (0x00064e90) frm_month_g11_ParamLimits

0x97d0,	// (0x00064e9d) frm_month_g12_ParamLimits

0x97dd,	// (0x00064eaa) frm_month_g13_ParamLimits

0x97ea,	// (0x00064eb7) frm_month_g14_ParamLimits

0x97f9,	// (0x00064ec6) frm_month_g15_ParamLimits

0x9808,	// (0x00064ed5) frm_month_g16_ParamLimits

0xfbec,	// (0x0006b2b9) frm_month_g_ParamLimits

0xa10e,	// (0x000657db) cell_top_day_name_pane_t1_ParamLimits

0x9817,	// (0x00064ee4) cell_area_left_week_number_pane_g1_ParamLimits

0x9826,	// (0x00064ef3) cell_area_left_week_number_pane_t1_ParamLimits

0xd246,	// (0x00068913) cell_month_view_pane_g1_ParamLimits

0x983c,	// (0x00064f09) cell_month_view_pane_t1_ParamLimits

0xabf8,	// (0x000662c5) main_clock2_btn_pane_g1

0xa266,	// (0x00065933) main_clock2_btn_pane_t1

0xa733,	// (0x00065e00) listscroll_cmail_pane_ParamLimits

0xeb10,	// (0x0006a1dd) main_sp_fs_email_pane_g1_ParamLimits

0xeb1c,	// (0x0006a1e9) main_sp_fs_email_pane_g2_ParamLimits

0x0bf1,	// (0x0005c2be) main_sp_fs_email_pane_g_ParamLimits

0xeed4,	// (0x0006a5a1) list_recal_day_pane_ParamLimits

0xeee5,	// (0x0006a5b2) mian_recal_day_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
