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

#include "aknlayoutscalable_elaf_pnp4_apps_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0002fe7d };

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
0x6288,	// (0x00036105) Screen

0x6294,	// (0x00036111) application_window

0x62d4,	// (0x00036151) area_bottom_pane_ParamLimits

0x62d4,	// (0x00036151) area_bottom_pane

0x6309,	// (0x00036186) area_top_pane_ParamLimits

0x6309,	// (0x00036186) area_top_pane

0xd97c,	// (0x0003d7f9) call_video_uplink_pane_ParamLimits

0xd97c,	// (0x0003d7f9) call_video_uplink_pane

0x6397,	// (0x00036214) main_pane_ParamLimits

0x6397,	// (0x00036214) main_pane

0x10f8,	// (0x00030f75) context_pane

0x919e,	// (0x0003901b) navi_pane

0x91be,	// (0x0003903b) popup_cale_events_window_ParamLimits

0x91be,	// (0x0003903b) popup_cale_events_window

0x110b,	// (0x00030f88) popup_mup_playback_window

0x91d6,	// (0x00039053) signal_pane

0xe115,	// (0x0003df92) main_browser_pane

0xeba5,	// (0x0003ea22) main_burst_pane

0x9074,	// (0x00038ef1) main_calc_pane

0xeba5,	// (0x0003ea22) main_cale_day_pane

0xe115,	// (0x0003df92) main_cale_month_pane

0xeba5,	// (0x0003ea22) main_cale_week_pane

0xeba5,	// (0x0003ea22) main_call_pane

0xddab,	// (0x0003dc28) main_call_poc_pane

0xeba5,	// (0x0003ea22) main_camera_pane

0xeba5,	// (0x0003ea22) main_chi_dic_pane

0xea34,	// (0x0003e8b1) main_clock_pane

0xddab,	// (0x0003dc28) main_fmradio_pane

0xeba5,	// (0x0003ea22) main_graph_messa_pane

0xddab,	// (0x0003dc28) main_help_pane

0xe115,	// (0x0003df92) main_im_pane

0xe006,	// (0x0003de83) main_image_pane_ParamLimits

0xe006,	// (0x0003de83) main_image_pane

0xddab,	// (0x0003dc28) main_location2_pane

0xeba5,	// (0x0003ea22) main_location_pane

0xddab,	// (0x0003dc28) main_messa_pane

0xddab,	// (0x0003dc28) main_mp2_pane

0xeba5,	// (0x0003ea22) main_mp_pane

0xddab,	// (0x0003dc28) main_msg_pane

0xddab,	// (0x0003dc28) main_mup_eq_pane

0xddab,	// (0x0003dc28) main_mup_pane

0xeba5,	// (0x0003ea22) main_notes_pane

0xddab,	// (0x0003dc28) main_pec_pane

0xddab,	// (0x0003dc28) main_phob_pane

0xddab,	// (0x0003dc28) main_pinb_pane

0xddab,	// (0x0003dc28) main_postcard_pane

0xddab,	// (0x0003dc28) main_qdial_pane

0xeba5,	// (0x0003ea22) main_skin_pane

0xddab,	// (0x0003dc28) main_smil2_pane

0xeba5,	// (0x0003ea22) main_smil_pane

0xeba5,	// (0x0003ea22) main_video_pane

0xeba5,	// (0x0003ea22) main_video_tele_pane

0xe006,	// (0x0003de83) main_viewer_pane_ParamLimits

0xe006,	// (0x0003de83) main_viewer_pane

0xeba5,	// (0x0003ea22) main_vorec_pane

0x90aa,	// (0x00038f27) popup_blid_sat_info_window_ParamLimits

0x90aa,	// (0x00038f27) popup_blid_sat_info_window

0x90c0,	// (0x00038f3d) popup_dyc_status_message_window_ParamLimits

0x90c0,	// (0x00038f3d) popup_dyc_status_message_window

0x90ce,	// (0x00038f4b) popup_grid_large_graphic_window_ParamLimits

0x90ce,	// (0x00038f4b) popup_grid_large_graphic_window

0x9142,	// (0x00038fbf) popup_loc_request_window_ParamLimits

0x9142,	// (0x00038fbf) popup_loc_request_window

0x9176,	// (0x00038ff3) popup_wml_address_window_ParamLimits

0x9176,	// (0x00038ff3) popup_wml_address_window

0x8f4c,	// (0x00038dc9) call_muted_g1

0x8c03,	// (0x00038a80) popup_call_audio_conf_window_ParamLimits

0x8c03,	// (0x00038a80) popup_call_audio_conf_window

0x8f5c,	// (0x00038dd9) popup_call_audio_first_window_ParamLimits

0x8f5c,	// (0x00038dd9) popup_call_audio_first_window

0x8f9c,	// (0x00038e19) popup_call_audio_in_window_ParamLimits

0x8f9c,	// (0x00038e19) popup_call_audio_in_window

0x8fc0,	// (0x00038e3d) popup_call_audio_out_window_ParamLimits

0x8fc0,	// (0x00038e3d) popup_call_audio_out_window

0x8fe2,	// (0x00038e5f) popup_call_audio_second_window_ParamLimits

0x8fe2,	// (0x00038e5f) popup_call_audio_second_window

0x9012,	// (0x00038e8f) popup_call_audio_wait_window_ParamLimits

0x9012,	// (0x00038e8f) popup_call_audio_wait_window

0x9033,	// (0x00038eb0) popup_number_entry_window_ParamLimits

0x9033,	// (0x00038eb0) popup_number_entry_window

0xd99a,	// (0x0003d817) bg_popup_call_pane_cp05_ParamLimits

0xd99a,	// (0x0003d817) bg_popup_call_pane_cp05

0xd9ba,	// (0x0003d837) popup_number_entry_window_t1

0xd9cd,	// (0x0003d84a) popup_number_entry_window_t2

0xd9df,	// (0x0003d85c) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x0003ef78) popup_number_entry_window_t

0xd9f1,	// (0x0003d86e) text_title_cp2

0xda04,	// (0x0003d881) bg_popup_call_pane_cp_ParamLimits

0xda04,	// (0x0003d881) bg_popup_call_pane_cp

0xda12,	// (0x0003d88f) call_thumbnail_pane

0xda1a,	// (0x0003d897) popup_call_audio_in_window_g1_ParamLimits

0xda1a,	// (0x0003d897) popup_call_audio_in_window_g1

0xda26,	// (0x0003d8a3) popup_call_audio_in_window_g2_ParamLimits

0xda26,	// (0x0003d8a3) popup_call_audio_in_window_g2

0xda32,	// (0x0003d8af) popup_call_audio_in_window_g3_ParamLimits

0xda32,	// (0x0003d8af) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x0003ef81) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x0003ef81) popup_call_audio_in_window_g

0xda3e,	// (0x0003d8bb) popup_call_audio_in_window_t1_ParamLimits

0xda3e,	// (0x0003d8bb) popup_call_audio_in_window_t1

0xda59,	// (0x0003d8d6) popup_call_audio_in_window_t2_ParamLimits

0xda59,	// (0x0003d8d6) popup_call_audio_in_window_t2

0xda74,	// (0x0003d8f1) popup_call_audio_in_window_t3_ParamLimits

0xda74,	// (0x0003d8f1) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x0003ef88) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x0003ef88) popup_call_audio_in_window_t

0xda04,	// (0x0003d881) bg_popup_call_pane_cp01_ParamLimits

0xda04,	// (0x0003d881) bg_popup_call_pane_cp01

0xda12,	// (0x0003d88f) call_thumbnail_pane_cp02

0xda87,	// (0x0003d904) call_type_pane_cp022

0xda8f,	// (0x0003d90c) popup_call_audio_out_window_g1_ParamLimits

0xda8f,	// (0x0003d90c) popup_call_audio_out_window_g1

0xdaa1,	// (0x0003d91e) popup_call_audio_out_window_g2_ParamLimits

0xdaa1,	// (0x0003d91e) popup_call_audio_out_window_g2

0xdaad,	// (0x0003d92a) popup_call_audio_out_window_g3_ParamLimits

0xdaad,	// (0x0003d92a) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x0003ef8f) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x0003ef8f) popup_call_audio_out_window_g

0xdabf,	// (0x0003d93c) popup_call_audio_out_window_t1_ParamLimits

0xdabf,	// (0x0003d93c) popup_call_audio_out_window_t1

0xdad7,	// (0x0003d954) popup_call_audio_out_window_t2_ParamLimits

0xdad7,	// (0x0003d954) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x0003ef96) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x0003ef96) popup_call_audio_out_window_t

0xdaec,	// (0x0003d969) bg_popup_call_pane_ParamLimits

0xdaec,	// (0x0003d969) bg_popup_call_pane

0x659d,	// (0x0003641a) call_thumbnail_pane_cp_ParamLimits

0x659d,	// (0x0003641a) call_thumbnail_pane_cp

0xdb70,	// (0x0003d9ed) call_type_pane_cp01_ParamLimits

0xdb70,	// (0x0003d9ed) call_type_pane_cp01

0xdbb4,	// (0x0003da31) popup_call_audio_first_window_g1_ParamLimits

0xdbb4,	// (0x0003da31) popup_call_audio_first_window_g1

0xdc00,	// (0x0003da7d) popup_call_audio_first_window_g2_ParamLimits

0xdc00,	// (0x0003da7d) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x0003ef9b) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x0003ef9b) popup_call_audio_first_window_g

0xdc44,	// (0x0003dac1) popup_call_audio_first_window_t1_ParamLimits

0xdc44,	// (0x0003dac1) popup_call_audio_first_window_t1

0xdcf0,	// (0x0003db6d) popup_call_audio_first_window_t4_ParamLimits

0xdcf0,	// (0x0003db6d) popup_call_audio_first_window_t4

0xdd7c,	// (0x0003dbf9) popup_call_audio_first_window_t5_ParamLimits

0xdd7c,	// (0x0003dbf9) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x0003efa0) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x0003efa0) popup_call_audio_first_window_t

0xddab,	// (0x0003dc28) bg_popup_call_pane_cp02

0xddb5,	// (0x0003dc32) call_type_pane_cp023

0xddbd,	// (0x0003dc3a) popup_call_audio_wait_window_g1

0xddc5,	// (0x0003dc42) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0003efa7) popup_call_audio_wait_window_g

0xddcd,	// (0x0003dc4a) popup_call_audio_wait_window_t3

0xdddb,	// (0x0003dc58) bg_popup_call_pane_cp03_ParamLimits

0xdddb,	// (0x0003dc58) bg_popup_call_pane_cp03

0xde3b,	// (0x0003dcb8) call_thumbnail_pane_cp011_ParamLimits

0xde3b,	// (0x0003dcb8) call_thumbnail_pane_cp011

0xde47,	// (0x0003dcc4) call_type_pane_cp034_ParamLimits

0xde47,	// (0x0003dcc4) call_type_pane_cp034

0xde83,	// (0x0003dd00) popup_call_audio_second_window_g1_ParamLimits

0xde83,	// (0x0003dd00) popup_call_audio_second_window_g1

0xdebf,	// (0x0003dd3c) popup_call_audio_second_window_g2_ParamLimits

0xdebf,	// (0x0003dd3c) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x0003efac) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x0003efac) popup_call_audio_second_window_g

0xdefb,	// (0x0003dd78) popup_call_audio_second_window_t1_ParamLimits

0xdefb,	// (0x0003dd78) popup_call_audio_second_window_t1

0xdf7c,	// (0x0003ddf9) popup_call_audio_second_window_t2_ParamLimits

0xdf7c,	// (0x0003ddf9) popup_call_audio_second_window_t2

0xdfb2,	// (0x0003de2f) popup_call_audio_second_window_t3_ParamLimits

0xdfb2,	// (0x0003de2f) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x0003efb1) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x0003efb1) popup_call_audio_second_window_t

0xddab,	// (0x0003dc28) bg_popup_call_pane_cp04

0xdfe8,	// (0x0003de65) list_conf_pane

0xdff0,	// (0x0003de6d) popup_call_audio_conf_window_t1

0xdffe,	// (0x0003de7b) call_thumbnail_pane_g1

0xe006,	// (0x0003de83) bg_pinb_pane_ParamLimits

0xe006,	// (0x0003de83) bg_pinb_pane

0xe014,	// (0x0003de91) find_pinb_pane

0xe01d,	// (0x0003de9a) listscroll_pinb_pane_ParamLimits

0xe01d,	// (0x0003de9a) listscroll_pinb_pane

0xe02c,	// (0x0003dea9) pinb_bg_pane_g1

0x65c1,	// (0x0003643e) pinb_bg_pane_g2

0x65cd,	// (0x0003644a) pinb_bg_pane_g3

0x65d9,	// (0x00036456) pinb_bg_pane_g4

0x65e5,	// (0x00036462) pinb_bg_pane_g5

0x65f1,	// (0x0003646e) pinb_bg_pane_g6

0x65fc,	// (0x00036479) pinb_bg_pane_g7

0x6607,	// (0x00036484) pinb_bg_pane_g8

0x6612,	// (0x0003648f) pinb_bg_pane_g9

0x661c,	// (0x00036499) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x0003efb8) pinb_bg_pane_g

0x6631,	// (0x000364ae) grid_pinb_pane

0x663c,	// (0x000364b9) list_pinb_pane

0x6647,	// (0x000364c4) scroll_pane_cp01_ParamLimits

0x6647,	// (0x000364c4) scroll_pane_cp01

0xe03e,	// (0x0003debb) find_pinb_pane_g1_ParamLimits

0xe03e,	// (0x0003debb) find_pinb_pane_g1

0xe056,	// (0x0003ded3) find_pinb_pane_t1

0xe068,	// (0x0003dee5) find_pinb_pane_t2

0x0001,

0xf155,	// (0x0003efd2) find_pinb_pane_t

0xe07d,	// (0x0003defa) input_focus_pane_cp01_ParamLimits

0xe07d,	// (0x0003defa) input_focus_pane_cp01

0x6659,	// (0x000364d6) cell_pinb_pane_ParamLimits

0x6659,	// (0x000364d6) cell_pinb_pane

0x6687,	// (0x00036504) cell_pinb_pane_g1_ParamLimits

0x6687,	// (0x00036504) cell_pinb_pane_g1

0x669c,	// (0x00036519) cell_pinb_pane_g2_ParamLimits

0x669c,	// (0x00036519) cell_pinb_pane_g2

0xe089,	// (0x0003df06) cell_pinb_pane_g3_ParamLimits

0xe089,	// (0x0003df06) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x0003efd7) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x0003efd7) cell_pinb_pane_g

0xddab,	// (0x0003dc28) grid_highlight_pane_cp01

0x66a8,	// (0x00036525) list_pinb_item_pane_ParamLimits

0x66a8,	// (0x00036525) list_pinb_item_pane

0xddab,	// (0x0003dc28) list_highlight_pane_cp02

0xe095,	// (0x0003df12) list_pinb_item_pane_g1_ParamLimits

0xe095,	// (0x0003df12) list_pinb_item_pane_g1

0xe0a2,	// (0x0003df1f) list_pinb_item_pane_g2_ParamLimits

0xe0a2,	// (0x0003df1f) list_pinb_item_pane_g2

0x66d2,	// (0x0003654f) list_pinb_item_pane_g3_ParamLimits

0x66d2,	// (0x0003654f) list_pinb_item_pane_g3

0xe0ae,	// (0x0003df2b) list_pinb_item_pane_g4_ParamLimits

0xe0ae,	// (0x0003df2b) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x0003efde) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x0003efde) list_pinb_item_pane_g

0xe0ba,	// (0x0003df37) list_pinb_item_pane_t1_ParamLimits

0xe0ba,	// (0x0003df37) list_pinb_item_pane_t1

0x66fd,	// (0x0003657a) calc_display_pane

0x671b,	// (0x00036598) calc_paper_pane

0x6737,	// (0x000365b4) grid_calc_pane

0xddab,	// (0x0003dc28) bg_list_pane_cp01

0x6763,	// (0x000365e0) clock_g1

0x676b,	// (0x000365e8) clock_g2

0x0001,

0xf16a,	// (0x0003efe7) clock_g

0x6775,	// (0x000365f2) clock_t1_ParamLimits

0x6775,	// (0x000365f2) clock_t1

0x678a,	// (0x00036607) clock_t2_ParamLimits

0x678a,	// (0x00036607) clock_t2

0x679c,	// (0x00036619) clock_t3_ParamLimits

0x679c,	// (0x00036619) clock_t3

0x67ae,	// (0x0003662b) clock_t4_ParamLimits

0x67ae,	// (0x0003662b) clock_t4

0x67c0,	// (0x0003663d) clock_t5_ParamLimits

0x67c0,	// (0x0003663d) clock_t5

0x67d5,	// (0x00036652) clock_t6_ParamLimits

0x67d5,	// (0x00036652) clock_t6

0x67e7,	// (0x00036664) clock_t7_ParamLimits

0x67e7,	// (0x00036664) clock_t7

0x67f9,	// (0x00036676) clock_t8_ParamLimits

0x67f9,	// (0x00036676) clock_t8

0x680f,	// (0x0003668c) clock_t9_ParamLimits

0x680f,	// (0x0003668c) clock_t9

0x0008,

0xf16f,	// (0x0003efec) clock_t_ParamLimits

0xf16f,	// (0x0003efec) clock_t

0xe0d1,	// (0x0003df4e) popup_clock_analogue_window_cp02

0xe0d1,	// (0x0003df4e) popup_clock_digital_window_cp01

0xe0d9,	// (0x0003df56) listscroll_help_pane

0xddab,	// (0x0003dc28) phob_pre_status_pane

0xe0e3,	// (0x0003df60) grid_qdial_pane

0xddab,	// (0x0003dc28) listscroll_mce_pane

0xe0ed,	// (0x0003df6a) bg_notes_pane

0xe0f7,	// (0x0003df74) list_notes_pane

0x6825,	// (0x000366a2) scroll_pane_cp06

0xe101,	// (0x0003df7e) bg_calc_paper_pane

0x6830,	// (0x000366ad) list_calc_pane

0xe115,	// (0x0003df92) bg_calc_display_pane

0x684a,	// (0x000366c7) calc_display_pane_t1

0x685f,	// (0x000366dc) calc_display_pane_t2

0x6874,	// (0x000366f1) calc_display_pane_t3

0x0002,

0xf182,	// (0x0003efff) calc_display_pane_t

0x6886,	// (0x00036703) cell_calc_pane_ParamLimits

0x6886,	// (0x00036703) cell_calc_pane

0xe121,	// (0x0003df9e) bg_calc_paper_pane_g1

0xe12d,	// (0x0003dfaa) bg_calc_paper_pane_g2

0xe139,	// (0x0003dfb6) bg_calc_paper_pane_g3

0xe145,	// (0x0003dfc2) bg_calc_paper_pane_g4

0xe151,	// (0x0003dfce) bg_calc_paper_pane_g5

0x68b3,	// (0x00036730) bg_calc_paper_pane_g6

0x68c4,	// (0x00036741) bg_calc_paper_pane_g7

0x68d5,	// (0x00036752) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x0003f006) bg_calc_paper_pane_g

0x68e6,	// (0x00036763) calc_bg_paper_pane_g9

0x68f7,	// (0x00036774) list_calc_item_pane_ParamLimits

0x68f7,	// (0x00036774) list_calc_item_pane

0xe15d,	// (0x0003dfda) list_calc_item_pane_g1

0x6931,	// (0x000367ae) list_calc_item_pane_t1_ParamLimits

0x6931,	// (0x000367ae) list_calc_item_pane_t1

0x6943,	// (0x000367c0) list_calc_item_pane_t2_ParamLimits

0x6943,	// (0x000367c0) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x0003f017) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x0003f017) list_calc_item_pane_t

0xe16a,	// (0x0003dfe7) cell_calc_pane_g1

0xe174,	// (0x0003dff1) grid_highlight_pane_cp02

0xe196,	// (0x0003e013) bg_calc_display_pane_g1

0x6973,	// (0x000367f0) bg_calc_display_pane_g2

0xe19f,	// (0x0003e01c) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x0003f021) bg_calc_display_pane_g

0x697d,	// (0x000367fa) cell_qdial_pane_ParamLimits

0x697d,	// (0x000367fa) cell_qdial_pane

0x6991,	// (0x0003680e) cell_qdial_pane_g1_ParamLimits

0x6991,	// (0x0003680e) cell_qdial_pane_g1

0x699e,	// (0x0003681b) cell_qdial_pane_g2_ParamLimits

0x699e,	// (0x0003681b) cell_qdial_pane_g2

0xe1a8,	// (0x0003e025) cell_qdial_pane_g3_ParamLimits

0xe1a8,	// (0x0003e025) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x0003f028) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x0003f028) cell_qdial_pane_g

0x69bc,	// (0x00036839) cell_qdial_pane_t1_ParamLimits

0x69bc,	// (0x00036839) cell_qdial_pane_t1

0x69d4,	// (0x00036851) cell_qdial_pane_t2_ParamLimits

0x69d4,	// (0x00036851) cell_qdial_pane_t2

0x69e7,	// (0x00036864) cell_qdial_pane_t3_ParamLimits

0x69e7,	// (0x00036864) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x0003f031) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x0003f031) cell_qdial_pane_t

0xddab,	// (0x0003dc28) grid_highlight_pane_cp04

0xe1b4,	// (0x0003e031) thumbnail_qdial_pane_ParamLimits

0xe1b4,	// (0x0003e031) thumbnail_qdial_pane

0xe210,	// (0x0003e08d) list_help_pane

0xe219,	// (0x0003e096) scroll_pane_cp02

0x69fa,	// (0x00036877) help_list_pane_t1_ParamLimits

0x69fa,	// (0x00036877) help_list_pane_t1

0x6a38,	// (0x000368b5) bg_notes_pane_g2

0x6a40,	// (0x000368bd) bg_notes_pane_g3

0x6a48,	// (0x000368c5) notes_bg_pane_g1

0x6a50,	// (0x000368cd) notes_bg_pane_g4

0x6a58,	// (0x000368d5) notes_bg_pane_g5

0x6a60,	// (0x000368dd) notes_bg_pane_g6

0x6a68,	// (0x000368e5) notes_bg_pane_g7

0x6a70,	// (0x000368ed) notes_bg_pane_g8

0x6a78,	// (0x000368f5) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x0003f04f) notes_bg_pane_g

0x6a80,	// (0x000368fd) list_notes_text_pane_ParamLimits

0x6a80,	// (0x000368fd) list_notes_text_pane

0xe222,	// (0x0003e09f) list_notes_text_pane_g1

0x513e,	// (0x00034fbb) list_notes_text_pane_t1

0xe115,	// (0x0003df92) listscroll_cale_week_pane

0x6acd,	// (0x0003694a) bg_cale_heading_pane

0xe23c,	// (0x0003e0b9) bg_cale_pane_cp01

0x6ae1,	// (0x0003695e) cale_week_corner_pane

0x6af2,	// (0x0003696f) cale_week_day_heading_pane

0x6b06,	// (0x00036983) cale_week_scroll_pane_g1

0x6b17,	// (0x00036994) cale_week_scroll_pane_g2

0x6b28,	// (0x000369a5) cale_week_scroll_pane_g3

0x6b39,	// (0x000369b6) cale_week_scroll_pane_g4

0x6b4a,	// (0x000369c7) cale_week_scroll_pane_g5

0x6b5b,	// (0x000369d8) cale_week_scroll_pane_g6

0x6b6c,	// (0x000369e9) cale_week_scroll_pane_g7

0x6b7f,	// (0x000369fc) cale_week_scroll_pane_g8

0x6b92,	// (0x00036a0f) cale_week_scroll_pane_g9

0x6ba3,	// (0x00036a20) cale_week_scroll_pane_g10

0x6bb4,	// (0x00036a31) cale_week_scroll_pane_g11

0x6bc5,	// (0x00036a42) cale_week_scroll_pane_g12

0x6bd6,	// (0x00036a53) cale_week_scroll_pane_g13

0x6be7,	// (0x00036a64) cale_week_scroll_pane_g14

0x6bf8,	// (0x00036a75) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x0003f05e) cale_week_scroll_pane_g

0x6c09,	// (0x00036a86) cale_week_time_pane

0x6c1c,	// (0x00036a99) grid_cale_week_pane

0x6c31,	// (0x00036aae) scroll_pane_cp08

0x6c4b,	// (0x00036ac8) cell_cale_week_pane_ParamLimits

0x6c4b,	// (0x00036ac8) cell_cale_week_pane

0x6c87,	// (0x00036b04) cale_week_day_heading_pane_t1

0x6c9b,	// (0x00036b18) cale_week_day_heading_pane_t2

0x6caf,	// (0x00036b2c) cale_week_day_heading_pane_t3

0x6cc3,	// (0x00036b40) cale_week_day_heading_pane_t4

0x6cd7,	// (0x00036b54) cale_week_day_heading_pane_t5

0x6ceb,	// (0x00036b68) cale_week_day_heading_pane_t6

0x6cff,	// (0x00036b7c) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x0003f07d) cale_week_day_heading_pane_t

0xe267,	// (0x0003e0e4) bg_cale_side_pane

0x6d13,	// (0x00036b90) cale_week_time_pane_t1

0x6d2b,	// (0x00036ba8) cale_week_time_pane_t2

0x6d43,	// (0x00036bc0) cale_week_time_pane_t3

0x6d5b,	// (0x00036bd8) cale_week_time_pane_t4

0x6d73,	// (0x00036bf0) cale_week_time_pane_t5

0x6d8b,	// (0x00036c08) cale_week_time_pane_t6

0x6da3,	// (0x00036c20) cale_week_time_pane_t7

0x6dbb,	// (0x00036c38) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x0003f08c) cale_week_time_pane_t

0x6dd3,	// (0x00036c50) cell_cale_week_pane_g2

0x6dec,	// (0x00036c69) cell_cale_week_pane_g3_ParamLimits

0x6dec,	// (0x00036c69) cell_cale_week_pane_g3

0xe275,	// (0x0003e0f2) grid_highlight_pane_cp07

0xe27d,	// (0x0003e0fa) listscroll_gms_pane

0xe287,	// (0x0003e104) grid_gms_pane

0xe290,	// (0x0003e10d) listscroll_gms_pane_g1

0xe298,	// (0x0003e115) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x0003f09d) listscroll_gms_pane_g

0x6e04,	// (0x00036c81) scroll_pane_cp010

0x6e0f,	// (0x00036c8c) cell_gms_pane_ParamLimits

0x6e0f,	// (0x00036c8c) cell_gms_pane

0x6e21,	// (0x00036c9e) cell_gms_pane_g1

0xe2a0,	// (0x0003e11d) cell_gms_pane_g2

0xe222,	// (0x0003e09f) cell_gms_pane_g3

0xe2a8,	// (0x0003e125) cell_gms_pane_g4

0x0003,

0xf225,	// (0x0003f0a2) cell_gms_pane_g

0xe2b1,	// (0x0003e12e) grid_highlight_pane_cp09

0x8ef4,	// (0x00038d71) phob_pre_status_pane_g1

0x8efc,	// (0x00038d79) phob_pre_status_pane_g2

0x8f04,	// (0x00038d81) phob_pre_status_pane_g3

0x8f0c,	// (0x00038d89) phob_pre_status_pane_g4

0x0004,

0xf614,	// (0x0003f491) phob_pre_status_pane_g

0x8f1c,	// (0x00038d99) phob_pre_status_pane_t1

0x8f2c,	// (0x00038da9) phob_pre_status_pane_t2

0x8f3c,	// (0x00038db9) phob_pre_status_pane_t3

0x0002,

0xf61f,	// (0x0003f49c) phob_pre_status_pane_t

0xddab,	// (0x0003dc28) bg_list_pane_cp05

0x6e31,	// (0x00036cae) grid_vorec_pane

0x6e39,	// (0x00036cb6) vorec_t1

0x6e47,	// (0x00036cc4) vorec_t2

0x6e55,	// (0x00036cd2) vorec_t3

0x6e63,	// (0x00036ce0) vorec_t4

0x6e71,	// (0x00036cee) vorec_t5

0x6e7f,	// (0x00036cfc) vorec_t6

0x0006,

0xf22e,	// (0x0003f0ab) vorec_t

0x6e9b,	// (0x00036d18) wait_bar_pane_cp01

0xe2b9,	// (0x0003e136) cell_vorec_pane_ParamLimits

0xe2b9,	// (0x0003e136) cell_vorec_pane

0xe2cc,	// (0x0003e149) cell_vorec_pane_g1

0xddab,	// (0x0003dc28) grid_highlight_pane_cp05

0x6eb3,	// (0x00036d30) cams_zoom_pane

0x6ebf,	// (0x00036d3c) image_vga_pane

0x6ece,	// (0x00036d4b) main_camera_pane_g1

0x6edc,	// (0x00036d59) main_camera_pane_g2

0x6eea,	// (0x00036d67) main_camera_pane_g3

0x6ef6,	// (0x00036d73) main_camera_pane_g4

0x6f02,	// (0x00036d7f) main_camera_pane_g5

0x6f0e,	// (0x00036d8b) main_camera_pane_g6

0x6f1a,	// (0x00036d97) main_camera_pane_g7

0x0007,

0xf23d,	// (0x0003f0ba) main_camera_pane_g

0x6f26,	// (0x00036da3) main_camera_pane_t1

0x6f38,	// (0x00036db5) main_camera_pane_t2

0x0001,

0xf24e,	// (0x0003f0cb) main_camera_pane_t

0x6f59,	// (0x00036dd6) cams_zoom_pane_cp_ParamLimits

0x6f59,	// (0x00036dd6) cams_zoom_pane_cp

0x6f7d,	// (0x00036dfa) image_cif_pane_ParamLimits

0x6f7d,	// (0x00036dfa) image_cif_pane

0x6f9b,	// (0x00036e18) image_subqcif_pane

0x6fa3,	// (0x00036e20) main_video_pane_g1_ParamLimits

0x6fa3,	// (0x00036e20) main_video_pane_g1

0x6fc3,	// (0x00036e40) main_video_pane_g2_ParamLimits

0x6fc3,	// (0x00036e40) main_video_pane_g2

0x6ff5,	// (0x00036e72) main_video_pane_g3_ParamLimits

0x6ff5,	// (0x00036e72) main_video_pane_g3

0x7020,	// (0x00036e9d) main_video_pane_g4_ParamLimits

0x7020,	// (0x00036e9d) main_video_pane_g4

0x704b,	// (0x00036ec8) main_video_pane_g5_ParamLimits

0x704b,	// (0x00036ec8) main_video_pane_g5

0xe2e2,	// (0x0003e15f) main_video_pane_g6_ParamLimits

0xe2e2,	// (0x0003e15f) main_video_pane_g6

0x0006,

0xf253,	// (0x0003f0d0) main_video_pane_g_ParamLimits

0xf253,	// (0x0003f0d0) main_video_pane_g

0x706f,	// (0x00036eec) main_video_pane_t1_ParamLimits

0x706f,	// (0x00036eec) main_video_pane_t1

0xe2fc,	// (0x0003e179) cams_zoom_pane_g1

0xe305,	// (0x0003e182) cams_zoom_pane_g2

0xe30e,	// (0x0003e18b) cams_zoom_pane_g3

0xe317,	// (0x0003e194) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x0003f0df) cams_zoom_pane_g

0x70b9,	// (0x00036f36) grid_cams_pane

0x70c7,	// (0x00036f44) linegrid_cams_pane

0x70d5,	// (0x00036f52) cell_cams_pane_ParamLimits

0x70d5,	// (0x00036f52) cell_cams_pane

0xe320,	// (0x0003e19d) cams_burst_image_pane

0xe328,	// (0x0003e1a5) cell_cams_pane_g1

0xddab,	// (0x0003dc28) grid_highlight_pane_cp03

0xe16a,	// (0x0003dfe7) mp_bg_pane_g1

0xddab,	// (0x0003dc28) bg_list_pane_cp03

0x0fd0,	// (0x00030e4d) bg_mp_pane

0x0fd8,	// (0x00030e55) grid_mp_pane

0x0fe0,	// (0x00030e5d) media_player_g1

0x0fe8,	// (0x00030e65) media_player_t1

0x0ff6,	// (0x00030e73) media_player_t2

0x1004,	// (0x00030e81) media_player_t3

0x1012,	// (0x00030e8f) media_player_t4

0x1020,	// (0x00030e9d) media_player_t5

0x102e,	// (0x00030eab) media_player_t6

0x103c,	// (0x00030eb9) media_player_t7

0x0006,

0xf5fe,	// (0x0003f47b) media_player_t

0x104a,	// (0x00030ec7) wait_bar_pane_cp02

0xf5e3,	// (0x0003f460) main_usb_pane_t

0x8eeb,	// (0x00038d68) cell_mp_pane

0xe16a,	// (0x0003dfe7) cell_mp_pane_g1

0xddab,	// (0x0003dc28) grid_highlight_pane_cp06

0xe330,	// (0x0003e1ad) grid_skin_colour_pane

0xe338,	// (0x0003e1b5) list_highlight_pane_cp03

0x70e8,	// (0x00036f65) skin_g1

0xe340,	// (0x0003e1bd) skin_t1

0xe34f,	// (0x0003e1cc) skin_t2

0x0001,

0xf297,	// (0x0003f114) skin_t

0x70f2,	// (0x00036f6f) cell_skin_colour_pane_ParamLimits

0x70f2,	// (0x00036f6f) cell_skin_colour_pane

0xe35d,	// (0x0003e1da) cell_skin_colour_pane_g1

0x7141,	// (0x00036fbe) call_video_g1_ParamLimits

0x7141,	// (0x00036fbe) call_video_g1

0x7151,	// (0x00036fce) call_video_g2_ParamLimits

0x7151,	// (0x00036fce) call_video_g2

0x0001,

0xf29c,	// (0x0003f119) call_video_g_ParamLimits

0xf29c,	// (0x0003f119) call_video_g

0x718f,	// (0x0003700c) call_video_uplink_pane_cp1_ParamLimits

0x718f,	// (0x0003700c) call_video_uplink_pane_cp1

0xe377,	// (0x0003e1f4) call_video_uplink_pane_cp2

0x723b,	// (0x000370b8) video_down_crop_pane_ParamLimits

0x723b,	// (0x000370b8) video_down_crop_pane

0x7313,	// (0x00037190) video_down_pane_ParamLimits

0x7313,	// (0x00037190) video_down_pane

0xe37f,	// (0x0003e1fc) video_down_subqcif_pane_ParamLimits

0xe37f,	// (0x0003e1fc) video_down_subqcif_pane

0xe397,	// (0x0003e214) video_down_subqcif_pane_cp_ParamLimits

0xe397,	// (0x0003e214) video_down_subqcif_pane_cp

0xe3bb,	// (0x0003e238) im_reading_pane_ParamLimits

0xe3bb,	// (0x0003e238) im_reading_pane

0x73f5,	// (0x00037272) im_writing_pane_ParamLimits

0x73f5,	// (0x00037272) im_writing_pane

0x7413,	// (0x00037290) im_reading_pane_t1

0xe3d5,	// (0x0003e252) list_im_pane

0xe3e6,	// (0x0003e263) scroll_pane_cp07

0x7473,	// (0x000372f0) im_writing_pane_t1_ParamLimits

0x7473,	// (0x000372f0) im_writing_pane_t1

0xe3ff,	// (0x0003e27c) im_writing_pane_t2_ParamLimits

0xe3ff,	// (0x0003e27c) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x0003f123) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x0003f123) im_writing_pane_t

0xddab,	// (0x0003dc28) input_focus_pane_cp04

0xddab,	// (0x0003dc28) input_focus_pane_cp05

0x7485,	// (0x00037302) list_im_single_pane_ParamLimits

0x7485,	// (0x00037302) list_im_single_pane

0x74b1,	// (0x0003732e) list_single_im_pane_t1

0x8eaf,	// (0x00038d2c) blid_accuracy_pane

0x8eb7,	// (0x00038d34) blid_compass_pane

0x8ec1,	// (0x00038d3e) main_location_t1

0x8ecf,	// (0x00038d4c) main_location_t2

0x8edd,	// (0x00038d5a) main_location_t3

0x0002,

0xf60d,	// (0x0003f48a) main_location_t

0xddab,	// (0x0003dc28) aid_levels_location

0xe16a,	// (0x0003dfe7) blid_accuracy_pane_g1

0xe16a,	// (0x0003dfe7) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x0003f185) blid_accuracy_pane_g

0xe447,	// (0x0003e2c4) wml_content_pane

0xe485,	// (0x0003e302) wml_button_pane_ParamLimits

0xe485,	// (0x0003e302) wml_button_pane

0x74c0,	// (0x0003733d) wml_list_single_large_pane_ParamLimits

0x74c0,	// (0x0003733d) wml_list_single_large_pane

0x74f2,	// (0x0003736f) wml_list_single_medium_pane_ParamLimits

0x74f2,	// (0x0003736f) wml_list_single_medium_pane

0x752b,	// (0x000373a8) wml_list_single_small_pane_ParamLimits

0x752b,	// (0x000373a8) wml_list_single_small_pane

0xe499,	// (0x0003e316) wml_selection_box_pane_ParamLimits

0xe499,	// (0x0003e316) wml_selection_box_pane

0xe4ac,	// (0x0003e329) wml_list_single_pane_t1

0xe4bb,	// (0x0003e338) wml_list_single_medium_pane_t1

0xe4ca,	// (0x0003e347) wml_list_single_large_pane_t1

0xe4d9,	// (0x0003e356) input_focus_pane_cp02_ParamLimits

0xe4d9,	// (0x0003e356) input_focus_pane_cp02

0xe4ec,	// (0x0003e369) wml_selection_box_pane_g1

0xe4f5,	// (0x0003e372) wml_selection_box_pane_t1_ParamLimits

0xe4f5,	// (0x0003e372) wml_selection_box_pane_t1

0xe006,	// (0x0003de83) bg_wml_button_pane_ParamLimits

0xe006,	// (0x0003de83) bg_wml_button_pane

0xe50d,	// (0x0003e38a) wml_button_pane_g1

0xe515,	// (0x0003e392) wml_button_pane_t1

0xe50d,	// (0x0003e38a) wml_button_bg_pane_g1

0xe525,	// (0x0003e3a2) wml_button_bg_pane_g2

0xe52d,	// (0x0003e3aa) wml_button_bg_pane_g3

0xe535,	// (0x0003e3b2) wml_button_bg_pane_g4

0xe53d,	// (0x0003e3ba) wml_button_bg_pane_g5

0xe545,	// (0x0003e3c2) wml_button_bg_pane_g6

0xe54d,	// (0x0003e3ca) wml_button_bg_pane_g7

0xe555,	// (0x0003e3d2) wml_button_bg_pane_g8

0xe55d,	// (0x0003e3da) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x0003f128) wml_button_bg_pane_g

0x7573,	// (0x000373f0) bg_list_pane_cp02

0xe565,	// (0x0003e3e2) mce_header_pane_ParamLimits

0xe565,	// (0x0003e3e2) mce_header_pane

0xe57b,	// (0x0003e3f8) mce_icon_pane

0xe57b,	// (0x0003e3f8) mce_image_pane

0xe584,	// (0x0003e401) mce_text_pane_ParamLimits

0xe584,	// (0x0003e401) mce_text_pane

0x757d,	// (0x000373fa) scroll_pane_cp03

0xe47d,	// (0x0003e2fa) scroll_pane_cp04

0xe597,	// (0x0003e414) scroll_pane_cp05_ParamLimits

0xe597,	// (0x0003e414) scroll_pane_cp05

0x7587,	// (0x00037404) mce_header_field_pane_ParamLimits

0x7587,	// (0x00037404) mce_header_field_pane

0x75a7,	// (0x00037424) mce_header_field_pane_2_ParamLimits

0x75a7,	// (0x00037424) mce_header_field_pane_2

0x75bd,	// (0x0003743a) mce_header_field_pane_3

0x75c5,	// (0x00037442) list_single_mce_message_pane_ParamLimits

0x75c5,	// (0x00037442) list_single_mce_message_pane

0x75f5,	// (0x00037472) list_single_mce_smart_pane_ParamLimits

0x75f5,	// (0x00037472) list_single_mce_smart_pane

0xe5a3,	// (0x0003e420) input_focus_pane_cp03

0xe5ac,	// (0x0003e429) list_header_data_pane

0x7630,	// (0x000374ad) mce_header_field_pane_t1

0x7640,	// (0x000374bd) list_single_mce_header_pane_ParamLimits

0x7640,	// (0x000374bd) list_single_mce_header_pane

0xe5b4,	// (0x0003e431) list_single_mce_header_pane_t1

0xe5c3,	// (0x0003e440) list_single_mce_message_pane_g1

0xe5cb,	// (0x0003e448) list_single_mce_message_pane_t1

0x7692,	// (0x0003750f) bg_cale_heading_pane_cp01_ParamLimits

0x7692,	// (0x0003750f) bg_cale_heading_pane_cp01

0xe5d9,	// (0x0003e456) bg_cale_pane_cp02_ParamLimits

0xe5d9,	// (0x0003e456) bg_cale_pane_cp02

0x76b5,	// (0x00037532) cale_month_corner_pane

0x76cb,	// (0x00037548) cale_month_day_heading_pane_ParamLimits

0x76cb,	// (0x00037548) cale_month_day_heading_pane

0x76fe,	// (0x0003757b) cale_month_pane_g1_ParamLimits

0x76fe,	// (0x0003757b) cale_month_pane_g1

0x771a,	// (0x00037597) cale_month_pane_g2_ParamLimits

0x771a,	// (0x00037597) cale_month_pane_g2

0x7735,	// (0x000375b2) cale_month_pane_g3_ParamLimits

0x7735,	// (0x000375b2) cale_month_pane_g3

0x7761,	// (0x000375de) cale_month_pane_g4_ParamLimits

0x7761,	// (0x000375de) cale_month_pane_g4

0x778d,	// (0x0003760a) cale_month_pane_g5_ParamLimits

0x778d,	// (0x0003760a) cale_month_pane_g5

0x77b9,	// (0x00037636) cale_month_pane_g6_ParamLimits

0x77b9,	// (0x00037636) cale_month_pane_g6

0x77e5,	// (0x00037662) cale_month_pane_g7_ParamLimits

0x77e5,	// (0x00037662) cale_month_pane_g7

0x7821,	// (0x0003769e) cale_month_pane_g8_ParamLimits

0x7821,	// (0x0003769e) cale_month_pane_g8

0x785d,	// (0x000376da) cale_month_pane_g9_ParamLimits

0x785d,	// (0x000376da) cale_month_pane_g9

0x7897,	// (0x00037714) cale_month_pane_g10_ParamLimits

0x7897,	// (0x00037714) cale_month_pane_g10

0x78d1,	// (0x0003774e) cale_month_pane_g11_ParamLimits

0x78d1,	// (0x0003774e) cale_month_pane_g11

0x790b,	// (0x00037788) cale_month_pane_g12_ParamLimits

0x790b,	// (0x00037788) cale_month_pane_g12

0x7945,	// (0x000377c2) cale_month_pane_g13_ParamLimits

0x7945,	// (0x000377c2) cale_month_pane_g13

0x000c,

0xf2be,	// (0x0003f13b) cale_month_pane_g_ParamLimits

0xf2be,	// (0x0003f13b) cale_month_pane_g

0x797f,	// (0x000377fc) cale_month_week_pane

0x7992,	// (0x0003780f) grid_cale_month_pane_ParamLimits

0x7992,	// (0x0003780f) grid_cale_month_pane

0x79c0,	// (0x0003783d) cale_month_day_heading_pane_t1

0x7a1e,	// (0x0003789b) cale_month_day_heading_pane_t2

0x7a83,	// (0x00037900) cale_month_day_heading_pane_t3

0x7ae8,	// (0x00037965) cale_month_day_heading_pane_t4

0x7b4d,	// (0x000379ca) cale_month_day_heading_pane_t5

0x7bb2,	// (0x00037a2f) cale_month_day_heading_pane_t6

0x7c1f,	// (0x00037a9c) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x0003f156) cale_month_day_heading_pane_t

0xe267,	// (0x0003e0e4) bg_cale_side_pane_cp01

0x7c94,	// (0x00037b11) cale_month_week_pane_t1

0x7cab,	// (0x00037b28) cale_month_week_pane_t2

0x7cc2,	// (0x00037b3f) cale_month_week_pane_t3

0x7cd9,	// (0x00037b56) cale_month_week_pane_t4

0x7cf0,	// (0x00037b6d) cale_month_week_pane_t5

0x7d07,	// (0x00037b84) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x0003f165) cale_month_week_pane_t

0x7d1e,	// (0x00037b9b) cell_cale_month_pane_ParamLimits

0x7d1e,	// (0x00037b9b) cell_cale_month_pane

0x7dd4,	// (0x00037c51) cell_cale_month_pane_g1

0x7de0,	// (0x00037c5d) cell_cale_month_pane_t1_ParamLimits

0x7de0,	// (0x00037c5d) cell_cale_month_pane_t1

0xe275,	// (0x0003e0f2) grid_highlight_pane_cp08

0xe16a,	// (0x0003dfe7) main_smil_g1

0x7dfc,	// (0x00037c79) smil_status_pane

0xe60e,	// (0x0003e48b) smil_text_pane

0x0ef0,	// (0x00030d6d) bg_popup_call3_rect_pane_g8

0x0ef8,	// (0x00030d75) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x0003f41e) bg_popup_call3_rect_pane_g

0x1185,	// (0x00031002) smil_status_volume_pane_g1

0xe618,	// (0x0003e495) smil_status_pane_t1

0x9293,	// (0x00039110) volume_smil_pane

0xe62f,	// (0x0003e4ac) list_smil_text_pane

0x7e0f,	// (0x00037c8c) scroll_pane_cp011

0x7e1a,	// (0x00037c97) smil_text_list_pane_t1_ParamLimits

0x7e1a,	// (0x00037c97) smil_text_list_pane_t1

0x7ec5,	// (0x00037d42) aid_volume_smil_ParamLimits

0x7ec5,	// (0x00037d42) aid_volume_smil

0xe16a,	// (0x0003dfe7) smil_volume_pane_g1

0xe16a,	// (0x0003dfe7) smil_volume_pane_g2

0x0001,

0xf308,	// (0x0003f185) smil_volume_pane_g

0xe115,	// (0x0003df92) listscroll_cale_day_pane

0xe639,	// (0x0003e4b6) bg_cale_pane

0xe651,	// (0x0003e4ce) list_cale_pane

0xe662,	// (0x0003e4df) scroll_pane_cp09

0xe673,	// (0x0003e4f0) cale_bg_pane_g1

0xe67b,	// (0x0003e4f8) cale_bg_pane_g2

0xe683,	// (0x0003e500) cale_bg_pane_g3

0xe68b,	// (0x0003e508) cale_bg_pane_g4

0xe693,	// (0x0003e510) cale_bg_pane_g5

0xe69b,	// (0x0003e518) cale_bg_pane_g6

0xe6a3,	// (0x0003e520) cale_bg_pane_g7

0xe6ab,	// (0x0003e528) cale_bg_pane_g8

0xe6b3,	// (0x0003e530) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x0003f18a) cale_bg_pane_g

0x7ee7,	// (0x00037d64) list_cale_time_pane_ParamLimits

0x7ee7,	// (0x00037d64) list_cale_time_pane

0x7f08,	// (0x00037d85) list_cale_time_pane_g1_ParamLimits

0x7f08,	// (0x00037d85) list_cale_time_pane_g1

0xe6bb,	// (0x0003e538) list_cale_time_pane_g2_ParamLimits

0xe6bb,	// (0x0003e538) list_cale_time_pane_g2

0x7f14,	// (0x00037d91) list_cale_time_pane_g3_ParamLimits

0x7f14,	// (0x00037d91) list_cale_time_pane_g3

0x7f30,	// (0x00037dad) list_cale_time_pane_g4_ParamLimits

0x7f30,	// (0x00037dad) list_cale_time_pane_g4

0x7f3e,	// (0x00037dbb) list_cale_time_pane_g5_ParamLimits

0x7f3e,	// (0x00037dbb) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x0003f19d) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x0003f19d) list_cale_time_pane_g

0x7f4c,	// (0x00037dc9) list_cale_time_pane_t1_ParamLimits

0x7f4c,	// (0x00037dc9) list_cale_time_pane_t1

0x7f74,	// (0x00037df1) list_cale_time_pane_t2_ParamLimits

0x7f74,	// (0x00037df1) list_cale_time_pane_t2

0x8268,	// (0x000380e5) aid_blid_cardinal_pane

0x82aa,	// (0x00038127) compass_pane_t4

0x7f9c,	// (0x00037e19) list_cale_time_pane_t4_ParamLimits

0x7f9c,	// (0x00037e19) list_cale_time_pane_t4

0x82b8,	// (0x00038135) compass_pane_t5

0x82c8,	// (0x00038145) compass_pane_t6

0x82d6,	// (0x00038153) compass_pane_t7

0xeaf7,	// (0x0003e974) navi_pane_cc_t1

0xec4c,	// (0x0003eac9) aid_phob_thumbnail_center_pane

0x899d,	// (0x0003881a) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x0003f1aa) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x0003f1aa) list_cale_time_pane_t

0xda04,	// (0x0003d881) bg_popup_window_pane_cp02_ParamLimits

0xda04,	// (0x0003d881) bg_popup_window_pane_cp02

0xe6d5,	// (0x0003e552) heading_pane_cp01_ParamLimits

0xe6d5,	// (0x0003e552) heading_pane_cp01

0xe6e1,	// (0x0003e55e) loc_req_pane_ParamLimits

0xe6e1,	// (0x0003e55e) loc_req_pane

0xe6f1,	// (0x0003e56e) loc_type_pane_ParamLimits

0xe6f1,	// (0x0003e56e) loc_type_pane

0xe703,	// (0x0003e580) loc_type_pane_t1_ParamLimits

0xe703,	// (0x0003e580) loc_type_pane_t1

0xe715,	// (0x0003e592) loc_type_pane_t2_ParamLimits

0xe715,	// (0x0003e592) loc_type_pane_t2

0xe727,	// (0x0003e5a4) loc_type_pane_t3_ParamLimits

0xe727,	// (0x0003e5a4) loc_type_pane_t3

0x0002,

0xf334,	// (0x0003f1b1) loc_type_pane_t_ParamLimits

0xf334,	// (0x0003f1b1) loc_type_pane_t

0xe739,	// (0x0003e5b6) list_loc_req_pane

0xe743,	// (0x0003e5c0) scroll_pane_cp012

0x7fc4,	// (0x00037e41) list_single_loc_request_popup_menu_pane_ParamLimits

0x7fc4,	// (0x00037e41) list_single_loc_request_popup_menu_pane

0xe74e,	// (0x0003e5cb) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe74e,	// (0x0003e5cb) list_single_loc_request_popup_menu_pane_g1

0xe75a,	// (0x0003e5d7) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe75a,	// (0x0003e5d7) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x0003f1b8) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x0003f1b8) list_single_loc_request_popup_menu_pane_g

0xe766,	// (0x0003e5e3) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe766,	// (0x0003e5e3) list_single_loc_request_popup_menu_pane_t1

0x7fd6,	// (0x00037e53) bg_popup_window_pane_cp03_ParamLimits

0x7fd6,	// (0x00037e53) bg_popup_window_pane_cp03

0x7fe4,	// (0x00037e61) heading_loc_req_pane_ParamLimits

0x7fe4,	// (0x00037e61) heading_loc_req_pane

0x7ff0,	// (0x00037e6d) popup_dyc_status_message_window_g1_ParamLimits

0x7ff0,	// (0x00037e6d) popup_dyc_status_message_window_g1

0x7ffc,	// (0x00037e79) popup_dyc_status_message_window_t1_ParamLimits

0x7ffc,	// (0x00037e79) popup_dyc_status_message_window_t1

0x800e,	// (0x00037e8b) popup_dyc_status_message_window_t2_ParamLimits

0x800e,	// (0x00037e8b) popup_dyc_status_message_window_t2

0x8020,	// (0x00037e9d) popup_dyc_status_message_window_t3_ParamLimits

0x8020,	// (0x00037e9d) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x0003f1bd) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x0003f1bd) popup_dyc_status_message_window_t

0xddab,	// (0x0003dc28) bg_heading_pane_cp01

0xe77c,	// (0x0003e5f9) heading_loc_req_pane_g1

0xe784,	// (0x0003e601) heading_loc_req_pane_g2

0xe78c,	// (0x0003e609) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x0003f1c4) heading_loc_req_pane_g

0xe794,	// (0x0003e611) heading_loc_req_pane_t1

0xe7a3,	// (0x0003e620) bg_popup_sub_pane_cp01_ParamLimits

0xe7a3,	// (0x0003e620) bg_popup_sub_pane_cp01

0xe7b1,	// (0x0003e62e) popup_cale_events_window_g1_ParamLimits

0xe7b1,	// (0x0003e62e) popup_cale_events_window_g1

0xe7d1,	// (0x0003e64e) popup_cale_events_window_g2_ParamLimits

0xe7d1,	// (0x0003e64e) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x0003f1f8) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x0003f1f8) popup_cale_events_window_g

0xe7f1,	// (0x0003e66e) popup_cale_events_window_t1_ParamLimits

0xe7f1,	// (0x0003e66e) popup_cale_events_window_t1

0xe803,	// (0x0003e680) popup_cale_events_window_t2_ParamLimits

0xe803,	// (0x0003e680) popup_cale_events_window_t2

0xe841,	// (0x0003e6be) popup_cale_events_window_t3_ParamLimits

0xe841,	// (0x0003e6be) popup_cale_events_window_t3

0xe87b,	// (0x0003e6f8) popup_cale_events_window_t4_ParamLimits

0xe87b,	// (0x0003e6f8) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x0003f1fd) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x0003f1fd) popup_cale_events_window_t

0x804a,	// (0x00037ec7) call_type_pane

0xe8b1,	// (0x0003e72e) popup_call_status_window_g1

0x8056,	// (0x00037ed3) popup_call_status_window_g2

0x8062,	// (0x00037edf) popup_call_status_window_g3

0x0002,

0xf389,	// (0x0003f206) popup_call_status_window_g

0xe8bf,	// (0x0003e73c) call_type_pane_g1

0xe8c8,	// (0x0003e745) call_type_pane_g2

0x0001,

0xf390,	// (0x0003f20d) call_type_pane_g

0xddab,	// (0x0003dc28) bg_popup_sub_pane_cp02

0xe8d1,	// (0x0003e74e) listscroll_popup_wml_pane

0xe8d9,	// (0x0003e756) list_wml_pane

0xe8e3,	// (0x0003e760) scroll_pane_cp013

0xe8ee,	// (0x0003e76b) list_single_graphic_popup_wml_pane_ParamLimits

0xe8ee,	// (0x0003e76b) list_single_graphic_popup_wml_pane

0xe16a,	// (0x0003dfe7) list_single_graphic_popup_wml_pane_g1

0xe902,	// (0x0003e77f) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x0003f212) list_single_graphic_popup_wml_pane_g

0xe90a,	// (0x0003e787) list_single_graphic_popup_wml_pane_t1

0xe920,	// (0x0003e79d) aid_call_pane

0xdffe,	// (0x0003de7b) popup_clock_analogue_window_g1

0xdffe,	// (0x0003de7b) popup_clock_analogue_window_g2

0x806e,	// (0x00037eeb) popup_clock_analogue_window_g3

0x806e,	// (0x00037eeb) popup_clock_analogue_window_g4

0xe16a,	// (0x0003dfe7) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x0003f217) popup_clock_analogue_window_g

0x8076,	// (0x00037ef3) popup_clock_analogue_window_t1

0x8084,	// (0x00037f01) clock_digital_number_pane_ParamLimits

0x8084,	// (0x00037f01) clock_digital_number_pane

0x8090,	// (0x00037f0d) clock_digital_number_pane_cp02_ParamLimits

0x8090,	// (0x00037f0d) clock_digital_number_pane_cp02

0x809c,	// (0x00037f19) clock_digital_number_pane_cp03_ParamLimits

0x809c,	// (0x00037f19) clock_digital_number_pane_cp03

0x80a8,	// (0x00037f25) clock_digital_number_pane_cp04_ParamLimits

0x80a8,	// (0x00037f25) clock_digital_number_pane_cp04

0x80b4,	// (0x00037f31) clock_digital_separator_pane_ParamLimits

0x80b4,	// (0x00037f31) clock_digital_separator_pane

0x80c0,	// (0x00037f3d) popup_clock_digital_window_t1

0xe16a,	// (0x0003dfe7) clock_digital_number_pane_g1

0xe16a,	// (0x0003dfe7) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x0003f185) clock_digital_number_pane_g

0xe16a,	// (0x0003dfe7) clock_digital_separator_pane_g1

0xe16a,	// (0x0003dfe7) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x0003f185) clock_digital_separator_pane_g

0xddab,	// (0x0003dc28) bg_popup_window_pane_cp04

0xe928,	// (0x0003e7a5) heading_pane_cp03

0xe930,	// (0x0003e7ad) listscroll_popup_gms_pane

0xe938,	// (0x0003e7b5) grid_large_graphic_popup_pane

0xe942,	// (0x0003e7bf) listscroll_popup_gms_pane_g1

0xe94a,	// (0x0003e7c7) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x0003f222) listscroll_popup_gms_pane_g

0xe47d,	// (0x0003e2fa) scroll_pane_cp014

0xe952,	// (0x0003e7cf) cell_large_graphic_popup_pane_ParamLimits

0xe952,	// (0x0003e7cf) cell_large_graphic_popup_pane

0xe96a,	// (0x0003e7e7) cell_large_graphic_popup_pane_g1_ParamLimits

0xe96a,	// (0x0003e7e7) cell_large_graphic_popup_pane_g1

0xe976,	// (0x0003e7f3) cell_large_graphic_popup_pane_g2_ParamLimits

0xe976,	// (0x0003e7f3) cell_large_graphic_popup_pane_g2

0xe982,	// (0x0003e7ff) cell_large_graphic_popup_pane_g3_ParamLimits

0xe982,	// (0x0003e7ff) cell_large_graphic_popup_pane_g3

0xe98f,	// (0x0003e80c) cell_large_graphic_popup_pane_g4_ParamLimits

0xe98f,	// (0x0003e80c) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x0003f227) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x0003f227) cell_large_graphic_popup_pane_g

0xe99f,	// (0x0003e81c) grid_highlight_pane_cp010

0xe16a,	// (0x0003dfe7) bg_popup_call_pane_g1

0xe9a9,	// (0x0003e826) list_single_graphic_popup_conf_pane_ParamLimits

0xe9a9,	// (0x0003e826) list_single_graphic_popup_conf_pane

0xe9bb,	// (0x0003e838) list_highlight_pane_cp01

0xe9c4,	// (0x0003e841) list_single_graphic_popup_conf_pane_g1

0xe9cc,	// (0x0003e849) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x0003f230) list_single_graphic_popup_conf_pane_g

0xe9d4,	// (0x0003e851) list_single_graphic_popup_conf_pane_t1

0xe9e2,	// (0x0003e85f) linegrid_cams_pane_g1

0x80dd,	// (0x00037f5a) linegrid_cams_pane_g2

0xe222,	// (0x0003e09f) linegrid_cams_pane_g3

0xe9eb,	// (0x0003e868) linegrid_cams_pane_g4

0x80e6,	// (0x00037f63) linegrid_cams_pane_g5

0x80ef,	// (0x00037f6c) linegrid_cams_pane_g6

0xe2a8,	// (0x0003e125) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x0003f235) linegrid_cams_pane_g

0xe9f4,	// (0x0003e871) popup_clock_analogue_window

0xe9f4,	// (0x0003e871) popup_clock_digital_window

0xddab,	// (0x0003dc28) popup_phob_thumbnail_window

0xe16a,	// (0x0003dfe7) call_video_uplink_pane_g1

0xe9fd,	// (0x0003e87a) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x0003f244) call_video_uplink_pane_g

0xe275,	// (0x0003e0f2) video_uplink_pane

0xea05,	// (0x0003e882) mce_image_pane_g1

0x80f8,	// (0x00037f75) mce_image_pane_g2

0x8100,	// (0x00037f7d) mce_image_pane_g3

0x8108,	// (0x00037f85) mce_image_pane_g4

0x8110,	// (0x00037f8d) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x0003f249) mce_image_pane_g

0xea0f,	// (0x0003e88c) control_top_pane_stacon_cp01_ParamLimits

0xea0f,	// (0x0003e88c) control_top_pane_stacon_cp01

0xea23,	// (0x0003e8a0) uni_indicator_pane_stacon_cp01_ParamLimits

0xea23,	// (0x0003e8a0) uni_indicator_pane_stacon_cp01

0xea34,	// (0x0003e8b1) bg_popup_sub_pane_cp03

0x8118,	// (0x00037f95) chi_dic_find_pane

0x8120,	// (0x00037f9d) listscroll_chi_dic_pane

0x8129,	// (0x00037fa6) main_pane_chidic_g1

0x813c,	// (0x00037fb9) chi_dic_find_pane_t1

0xea3e,	// (0x0003e8bb) find_chidic_pane

0xea47,	// (0x0003e8c4) chi_dic_list_pane_ParamLimits

0xea47,	// (0x0003e8c4) chi_dic_list_pane

0xea58,	// (0x0003e8d5) scroll_pane_cp020

0x814a,	// (0x00037fc7) find_chidic_pane_t1

0xddab,	// (0x0003dc28) input_focus_pane_cp06

0x8159,	// (0x00037fd6) list_chi_dic_pane_ParamLimits

0x8159,	// (0x00037fd6) list_chi_dic_pane

0xea60,	// (0x0003e8dd) list_chi_dic_pane_t1_ParamLimits

0xea60,	// (0x0003e8dd) list_chi_dic_pane_t1

0xddab,	// (0x0003dc28) list_highlight_pane_cp020

0xea73,	// (0x0003e8f0) bg_cale_heading_pane_g1

0x817a,	// (0x00037ff7) bg_cale_heading_pane_g2

0x8182,	// (0x00037fff) bg_cale_heading_pane_g3

0x818a,	// (0x00038007) bg_cale_heading_pane_g4

0x8194,	// (0x00038011) bg_cale_heading_pane_g5

0x819e,	// (0x0003801b) bg_cale_heading_pane_g6

0x81a6,	// (0x00038023) bg_cale_heading_pane_g7

0x81ae,	// (0x0003802b) bg_cale_heading_pane_g8

0x81b8,	// (0x00038035) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x0003f254) bg_cale_heading_pane_g

0xea73,	// (0x0003e8f0) bg_cale_side_pane_g1

0x81c2,	// (0x0003803f) bg_cale_side_pane_g2

0x81ca,	// (0x00038047) bg_cale_side_pane_g3

0x81d2,	// (0x0003804f) bg_cale_side_pane_g4

0x81da,	// (0x00038057) bg_cale_side_pane_g5

0x81e2,	// (0x0003805f) bg_cale_side_pane_g6

0x81ea,	// (0x00038067) bg_cale_side_pane_g7

0x81f2,	// (0x0003806f) bg_cale_side_pane_g8

0x81fa,	// (0x00038077) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x0003f267) bg_cale_side_pane_g

0x8202,	// (0x0003807f) popup_call_status_window_ParamLimits

0x8202,	// (0x0003807f) popup_call_status_window

0xea7b,	// (0x0003e8f8) stacon_top_pane

0xea83,	// (0x0003e900) status_pane_ParamLimits

0xea83,	// (0x0003e900) status_pane

0xea98,	// (0x0003e915) status_small_pane

0xeaa0,	// (0x0003e91d) control_pane

0xddab,	// (0x0003dc28) stacon_bottom_pane

0xeaa8,	// (0x0003e925) list_single_mce_smart_pane_t1_ParamLimits

0xeaa8,	// (0x0003e925) list_single_mce_smart_pane_t1

0xeabb,	// (0x0003e938) list_single_mce_smart_pane_t2_ParamLimits

0xeabb,	// (0x0003e938) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x0003f27a) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x0003f27a) list_single_mce_smart_pane_t

0x820e,	// (0x0003808b) compass_pane

0x821a,	// (0x00038097) main_location2_pane_t1

0x822e,	// (0x000380ab) main_location2_pane_t2

0x8242,	// (0x000380bf) main_location2_pane_t3

0x0003,

0xf402,	// (0x0003f27f) main_location2_pane_t

0xeada,	// (0x0003e957) compass_pane_g1_ParamLimits

0xeada,	// (0x0003e957) compass_pane_g1

0x828c,	// (0x00038109) compass_pane_t1

0x829b,	// (0x00038118) compass_pane_t2

0x0005,

0xf40b,	// (0x0003f288) compass_pane_t

0x82e6,	// (0x00038163) text_secondary_cp61

0xeaee,	// (0x0003e96b) navi_pane_cams_g5

0xeb11,	// (0x0003e98e) navi_pane_im_t1

0xeb1f,	// (0x0003e99c) navi_pane_mp_g1_ParamLimits

0xeb1f,	// (0x0003e99c) navi_pane_mp_g1

0xeb33,	// (0x0003e9b0) navi_pane_mp_g2_ParamLimits

0xeb33,	// (0x0003e9b0) navi_pane_mp_g2

0xeb3f,	// (0x0003e9bc) navi_pane_mp_g3_ParamLimits

0xeb3f,	// (0x0003e9bc) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x0003f29c) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x0003f29c) navi_pane_mp_g

0xeb4b,	// (0x0003e9c8) navi_pane_mp_t1

0xeb59,	// (0x0003e9d6) navi_pane_mp_t2

0x0002,

0xf426,	// (0x0003f2a3) navi_pane_mp_t

0xeb95,	// (0x0003ea12) navi_pane_vt_g1

0xeb4b,	// (0x0003e9c8) navi_pane_vt_t1

0xeb9d,	// (0x0003ea1a) navi_slider_pane

0xeba5,	// (0x0003ea22) zooming_pane

0xebad,	// (0x0003ea2a) navi_slider_pane_g1

0x83fd,	// (0x0003827a) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x0003f2aa) navi_slider_pane_g

0xebd1,	// (0x0003ea4e) aid_levels_zoom

0xebd9,	// (0x0003ea56) zooming_pane_g1

0xebe1,	// (0x0003ea5e) zooming_pane_g2

0xebe1,	// (0x0003ea5e) zooming_pane_g3

0x0002,

0xf43c,	// (0x0003f2b9) zooming_pane_g

0xebe9,	// (0x0003ea66) level_10_zoom

0xebf2,	// (0x0003ea6f) level_11_zoom

0xebfb,	// (0x0003ea78) level_1_zoom

0xec04,	// (0x0003ea81) level_2_zoom

0xec0d,	// (0x0003ea8a) level_3_zoom

0xec16,	// (0x0003ea93) level_4_zoom

0xec1f,	// (0x0003ea9c) level_5_zoom

0xec28,	// (0x0003eaa5) level_6_zoom

0xec31,	// (0x0003eaae) level_7_zoom

0xec3a,	// (0x0003eab7) level_8_zoom

0xec43,	// (0x0003eac0) level_9_zoom

0xec54,	// (0x0003ead1) popup_phob_thumbnail_window_g1

0xec5c,	// (0x0003ead9) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x0003f2c0) popup_phob_thumbnail_window_g

0x1052,	// (0x00030ecf) level_1_location

0x105a,	// (0x00030ed7) level_2_location

0x1062,	// (0x00030edf) level_3_location

0x106a,	// (0x00030ee7) level_4_location

0xeba5,	// (0x0003ea22) level_5_location

0x840f,	// (0x0003828c) mce_icon_pane_g1

0x8417,	// (0x00038294) mce_icon_pane_g2

0x0001,

0xf448,	// (0x0003f2c5) mce_icon_pane_g

0x841f,	// (0x0003829c) main_mup_pane_g1_ParamLimits

0x841f,	// (0x0003829c) main_mup_pane_g1

0x8437,	// (0x000382b4) main_mup_pane_g2_ParamLimits

0x8437,	// (0x000382b4) main_mup_pane_g2

0x8453,	// (0x000382d0) main_mup_pane_g3_ParamLimits

0x8453,	// (0x000382d0) main_mup_pane_g3

0x846f,	// (0x000382ec) main_mup_pane_g4_ParamLimits

0x846f,	// (0x000382ec) main_mup_pane_g4

0x848b,	// (0x00038308) main_mup_pane_g5_ParamLimits

0x848b,	// (0x00038308) main_mup_pane_g5

0x84ac,	// (0x00038329) main_mup_pane_g6_ParamLimits

0x84ac,	// (0x00038329) main_mup_pane_g6

0x84c8,	// (0x00038345) main_mup_pane_g7_ParamLimits

0x84c8,	// (0x00038345) main_mup_pane_g7

0x84e4,	// (0x00038361) main_mup_pane_g8_ParamLimits

0x84e4,	// (0x00038361) main_mup_pane_g8

0x8500,	// (0x0003837d) main_mup_pane_g9_ParamLimits

0x8500,	// (0x0003837d) main_mup_pane_g9

0x851f,	// (0x0003839c) main_mup_pane_g10_ParamLimits

0x851f,	// (0x0003839c) main_mup_pane_g10

0x853e,	// (0x000383bb) main_mup_pane_g11_ParamLimits

0x853e,	// (0x000383bb) main_mup_pane_g11

0x8556,	// (0x000383d3) main_mup_pane_g12_ParamLimits

0x8556,	// (0x000383d3) main_mup_pane_g12

0x8564,	// (0x000383e1) main_mup_pane_g13_ParamLimits

0x8564,	// (0x000383e1) main_mup_pane_g13

0x000c,

0xf44d,	// (0x0003f2ca) main_mup_pane_g_ParamLimits

0xf44d,	// (0x0003f2ca) main_mup_pane_g

0x857a,	// (0x000383f7) main_mup_pane_t1_ParamLimits

0x857a,	// (0x000383f7) main_mup_pane_t1

0x8597,	// (0x00038414) main_mup_pane_t2_ParamLimits

0x8597,	// (0x00038414) main_mup_pane_t2

0x85b1,	// (0x0003842e) main_mup_pane_t3_ParamLimits

0x85b1,	// (0x0003842e) main_mup_pane_t3

0x85cb,	// (0x00038448) main_mup_pane_t4_ParamLimits

0x85cb,	// (0x00038448) main_mup_pane_t4

0x85dd,	// (0x0003845a) main_mup_pane_t5_ParamLimits

0x85dd,	// (0x0003845a) main_mup_pane_t5

0x85ef,	// (0x0003846c) main_mup_pane_t6_ParamLimits

0x85ef,	// (0x0003846c) main_mup_pane_t6

0x0005,

0xf468,	// (0x0003f2e5) main_mup_pane_t_ParamLimits

0xf468,	// (0x0003f2e5) main_mup_pane_t

0x8605,	// (0x00038482) mup_progress_pane_ParamLimits

0x8605,	// (0x00038482) mup_progress_pane

0x8611,	// (0x0003848e) mup_visualizer_pane_ParamLimits

0x8611,	// (0x0003848e) mup_visualizer_pane

0x864f,	// (0x000384cc) mup_volume_pane_ParamLimits

0x864f,	// (0x000384cc) mup_volume_pane

0xe8b1,	// (0x0003e72e) mup_visualizer_pane_g1_ParamLimits

0xe8b1,	// (0x0003e72e) mup_visualizer_pane_g1

0xe8b1,	// (0x0003e72e) mup_visualizer_pane_g2_ParamLimits

0xe8b1,	// (0x0003e72e) mup_visualizer_pane_g2

0xeada,	// (0x0003e957) mup_visualizer_pane_g3_ParamLimits

0xeada,	// (0x0003e957) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x0003f2f2) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x0003f2f2) mup_visualizer_pane_g

0xe16a,	// (0x0003dfe7) mup_volume_pane_g1

0xec6c,	// (0x0003eae9) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x0003f2f9) mup_volume_pane_g

0xe16a,	// (0x0003dfe7) mup_progress_pane_g1

0xec75,	// (0x0003eaf2) mup_progress_pane_g2

0xec7e,	// (0x0003eafb) mup_progress_pane_g3

0x0002,

0xf481,	// (0x0003f2fe) mup_progress_pane_g

0xddab,	// (0x0003dc28) bg_popup_window_pane_cp05

0xec87,	// (0x0003eb04) heading_pane_cp02_ParamLimits

0xec87,	// (0x0003eb04) heading_pane_cp02

0xeca1,	// (0x0003eb1e) list_popup_blid_pane

0xeca9,	// (0x0003eb26) list_blid_sat_info_pane_ParamLimits

0xeca9,	// (0x0003eb26) list_blid_sat_info_pane

0xecbc,	// (0x0003eb39) list_blid_sat_info_pane_g1

0xecc4,	// (0x0003eb41) list_blid_sat_info_pane_t1

0x875a,	// (0x000385d7) mup_equalizer_pane_ParamLimits

0x875a,	// (0x000385d7) mup_equalizer_pane

0x877b,	// (0x000385f8) mup_equalizer_pane_cp1_ParamLimits

0x877b,	// (0x000385f8) mup_equalizer_pane_cp1

0x879c,	// (0x00038619) mup_equalizer_pane_cp2_ParamLimits

0x879c,	// (0x00038619) mup_equalizer_pane_cp2

0x87bd,	// (0x0003863a) mup_equalizer_pane_cp3_ParamLimits

0x87bd,	// (0x0003863a) mup_equalizer_pane_cp3

0x87de,	// (0x0003865b) mup_equalizer_pane_cp4_ParamLimits

0x87de,	// (0x0003865b) mup_equalizer_pane_cp4

0x87ff,	// (0x0003867c) mup_equalizer_pane_cp5

0x8815,	// (0x00038692) mup_equalizer_pane_cp6

0x882d,	// (0x000386aa) mup_equalizer_pane_cp7

0x0f70,	// (0x00030ded) bg_popup_call_poc_act_pane_g9

0x0f78,	// (0x00030df5) bg_popup_call_poc_act_pane_g10

0x0f80,	// (0x00030dfd) bg_popup_call_poc_act_pane_g11

0x000a,

0xe006,	// (0x0003de83) mup_scale_pane

0xe16a,	// (0x0003dfe7) mup_scale_pane_g1

0xecd2,	// (0x0003eb4f) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x0003f31a) mup_scale_pane_g

0xecf6,	// (0x0003eb73) msg_data_pane

0xecfe,	// (0x0003eb7b) scroll_pane_cp017

0x5337,	// (0x000351b4) bg_list_pane_cp04_ParamLimits

0x5337,	// (0x000351b4) bg_list_pane_cp04

0xed06,	// (0x0003eb83) msg_data_pane_g1

0x8857,	// (0x000386d4) msg_data_pane_g2

0x8100,	// (0x00037f7d) msg_data_pane_g3

0x885f,	// (0x000386dc) msg_data_pane_g4

0x8867,	// (0x000386e4) msg_data_pane_g5

0x886f,	// (0x000386ec) msg_data_pane_g6

0x8877,	// (0x000386f4) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x0003f329) msg_data_pane_g

0x5357,	// (0x000351d4) msg_text_pane_ParamLimits

0x5357,	// (0x000351d4) msg_text_pane

0x887f,	// (0x000386fc) qrid_highlight_pane_cp011_ParamLimits

0x887f,	// (0x000386fc) qrid_highlight_pane_cp011

0xddab,	// (0x0003dc28) msg_body_pane

0xddab,	// (0x0003dc28) msg_header_pane

0xed17,	// (0x0003eb94) input_focus_pane_cp07

0x53b8,	// (0x00035235) msg_header_pane_t1_ParamLimits

0x53b8,	// (0x00035235) msg_header_pane_t1

0x53cc,	// (0x00035249) msg_header_pane_t2_ParamLimits

0x53cc,	// (0x00035249) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x0003f33d) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x0003f33d) msg_header_pane_t

0xed2c,	// (0x0003eba9) msg_body_pane_g1

0x53de,	// (0x0003525b) msg_body_pane_t1_ParamLimits

0x53de,	// (0x0003525b) msg_body_pane_t1

0x540f,	// (0x0003528c) msg_body_pane_t2_ParamLimits

0x540f,	// (0x0003528c) msg_body_pane_t2

0x5421,	// (0x0003529e) msg_body_pane_t3_ParamLimits

0x5421,	// (0x0003529e) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x0003f342) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x0003f342) msg_body_pane_t

0x88ed,	// (0x0003876a) main_viewer_pane_g1_ParamLimits

0x88ed,	// (0x0003876a) main_viewer_pane_g1

0x88f9,	// (0x00038776) main_viewer_pane_g2_ParamLimits

0x88f9,	// (0x00038776) main_viewer_pane_g2

0x8905,	// (0x00038782) main_viewer_pane_g3_ParamLimits

0x8905,	// (0x00038782) main_viewer_pane_g3

0x8916,	// (0x00038793) main_viewer_pane_g4_ParamLimits

0x8916,	// (0x00038793) main_viewer_pane_g4

0x8927,	// (0x000387a4) main_viewer_pane_g5_ParamLimits

0x8927,	// (0x000387a4) main_viewer_pane_g5

0x8927,	// (0x000387a4) main_viewer_pane_g7_ParamLimits

0x8927,	// (0x000387a4) main_viewer_pane_g7

0x8939,	// (0x000387b6) main_viewer_pane_g8_ParamLimits

0x8939,	// (0x000387b6) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x0003f352) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x0003f352) main_viewer_pane_g

0xed34,	// (0x0003ebb1) viewer_content_pane_ParamLimits

0xed34,	// (0x0003ebb1) viewer_content_pane

0x8971,	// (0x000387ee) main_postcard_pane_g1_ParamLimits

0x8971,	// (0x000387ee) main_postcard_pane_g1

0x897f,	// (0x000387fc) main_postcard_pane_g2_ParamLimits

0x897f,	// (0x000387fc) main_postcard_pane_g2

0x898d,	// (0x0003880a) main_postcard_pane_g3_ParamLimits

0x898d,	// (0x0003880a) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x0003f363) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x0003f363) main_postcard_pane_g

0x899d,	// (0x0003881a) main_postcard_pane_g4

0x1172,	// (0x00030fef) smil_status_volume_pane_g2

0x89c9,	// (0x00038846) postcard_pane_ParamLimits

0x89c9,	// (0x00038846) postcard_pane

0xe8b1,	// (0x0003e72e) postcard_pane_g1_ParamLimits

0xe8b1,	// (0x0003e72e) postcard_pane_g1

0x89fb,	// (0x00038878) postcard_pane_g2_ParamLimits

0x89fb,	// (0x00038878) postcard_pane_g2

0x8a07,	// (0x00038884) postcard_pane_g3_ParamLimits

0x8a07,	// (0x00038884) postcard_pane_g3

0xed42,	// (0x0003ebbf) postcard_pane_g4_ParamLimits

0xed42,	// (0x0003ebbf) postcard_pane_g4

0x8a13,	// (0x00038890) postcard_pane_g5_ParamLimits

0x8a13,	// (0x00038890) postcard_pane_g5

0x8a1f,	// (0x0003889c) postcard_pane_g6_ParamLimits

0x8a1f,	// (0x0003889c) postcard_pane_g6

0xed50,	// (0x0003ebcd) postcard_pane_g7_ParamLimits

0xed50,	// (0x0003ebcd) postcard_pane_g7

0x0006,

0xf4f3,	// (0x0003f370) postcard_pane_g_ParamLimits

0xf4f3,	// (0x0003f370) postcard_pane_g

0x8a2b,	// (0x000388a8) main_mp2_pane_g1_ParamLimits

0x8a2b,	// (0x000388a8) main_mp2_pane_g1

0x8a37,	// (0x000388b4) main_mp2_pane_g2_ParamLimits

0x8a37,	// (0x000388b4) main_mp2_pane_g2

0x8a43,	// (0x000388c0) main_mp2_pane_g3_ParamLimits

0x8a43,	// (0x000388c0) main_mp2_pane_g3

0x0002,

0xf502,	// (0x0003f37f) main_mp2_pane_g_ParamLimits

0xf502,	// (0x0003f37f) main_mp2_pane_g

0x8a4f,	// (0x000388cc) main_mp2_pane_t1_ParamLimits

0x8a4f,	// (0x000388cc) main_mp2_pane_t1

0x8a66,	// (0x000388e3) main_mp2_pane_t2_ParamLimits

0x8a66,	// (0x000388e3) main_mp2_pane_t2

0x8a78,	// (0x000388f5) main_mp2_pane_t3_ParamLimits

0x8a78,	// (0x000388f5) main_mp2_pane_t3

0x0002,

0xf509,	// (0x0003f386) main_mp2_pane_t_ParamLimits

0xf509,	// (0x0003f386) main_mp2_pane_t

0xed5e,	// (0x0003ebdb) pec_content_pane_ParamLimits

0xed5e,	// (0x0003ebdb) pec_content_pane

0xe47d,	// (0x0003e2fa) scroll_pane_cp015

0xed70,	// (0x0003ebed) pec_attribute_pane_ParamLimits

0xed70,	// (0x0003ebed) pec_attribute_pane

0x8a8a,	// (0x00038907) pec_content_pane_g1_ParamLimits

0x8a8a,	// (0x00038907) pec_content_pane_g1

0xed80,	// (0x0003ebfd) pec_content_pane_t1_ParamLimits

0xed80,	// (0x0003ebfd) pec_content_pane_t1

0xed92,	// (0x0003ec0f) pec_content_pane_t2_ParamLimits

0xed92,	// (0x0003ec0f) pec_content_pane_t2

0x0001,

0xf510,	// (0x0003f38d) pec_content_pane_t_ParamLimits

0xf510,	// (0x0003f38d) pec_content_pane_t

0x8a96,	// (0x00038913) list_single_graphic_pane_cp01_ParamLimits

0x8a96,	// (0x00038913) list_single_graphic_pane_cp01

0xe006,	// (0x0003de83) bg_popup_sub_pane_cp04

0xeda4,	// (0x0003ec21) popup_mup_playback_window_g1

0xedb0,	// (0x0003ec2d) popup_mup_playback_window_t1

0xedc5,	// (0x0003ec42) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x0003f392) popup_mup_playback_window_t

0xedfc,	// (0x0003ec79) main_image_pane_g1_ParamLimits

0xedfc,	// (0x0003ec79) main_image_pane_g1

0xee3f,	// (0x0003ecbc) scroll_pane_cp018_ParamLimits

0xee3f,	// (0x0003ecbc) scroll_pane_cp018

0xee57,	// (0x0003ecd4) scroll_pane_cp016_ParamLimits

0xee57,	// (0x0003ecd4) scroll_pane_cp016

0x8b3a,	// (0x000389b7) smil2_image_pane_ParamLimits

0x8b3a,	// (0x000389b7) smil2_image_pane

0x8b6e,	// (0x000389eb) smil2_root_pane_ParamLimits

0x8b6e,	// (0x000389eb) smil2_root_pane

0x8b9a,	// (0x00038a17) smil2_text_pane_ParamLimits

0x8b9a,	// (0x00038a17) smil2_text_pane

0xddab,	// (0x0003dc28) bg_list_pane_cp06

0xee93,	// (0x0003ed10) grid_radio_pane

0xddab,	// (0x0003dc28) bg_popup_window_pane_cp06

0xee9b,	// (0x0003ed18) main_fmradio_pane_t1

0xe928,	// (0x0003e7a5) heading_pane_cp04

0xeea9,	// (0x0003ed26) main_fmradio_pane_t2

0x0f88,	// (0x00030e05) popup_cale_lunar_info_window_g1

0xeeb7,	// (0x0003ed34) main_fmradio_pane_t3

0x0f90,	// (0x00030e0d) popup_cale_lunar_info_window_g2

0xeec5,	// (0x0003ed42) main_fmradio_pane_t4

0x0001,

0xeed3,	// (0x0003ed50) main_fmradio_pane_t5

0x0004,

0xf5f0,	// (0x0003f46d) popup_cale_lunar_info_window_g

0xf52a,	// (0x0003f3a7) main_fmradio_pane_t

0xeee1,	// (0x0003ed5e) wait_bar_pane_cp03

0xeee9,	// (0x0003ed66) cell_fmradio_pane_ParamLimits

0xeee9,	// (0x0003ed66) cell_fmradio_pane

0xed50,	// (0x0003ebcd) cell_fmradio_pane_g1_ParamLimits

0xed50,	// (0x0003ebcd) cell_fmradio_pane_g1

0xddab,	// (0x0003dc28) grid_highlight_pane_cp011

0xeefc,	// (0x0003ed79) poc_content_pane_ParamLimits

0xeefc,	// (0x0003ed79) poc_content_pane

0xef0e,	// (0x0003ed8b) scroll_pane_cp019

0x8bda,	// (0x00038a57) popup_call_poc_act_window_ParamLimits

0x8bda,	// (0x00038a57) popup_call_poc_act_window

0x8be7,	// (0x00038a64) popup_call_poc_inact_window_ParamLimits

0x8be7,	// (0x00038a64) popup_call_poc_inact_window

0xf5c7,	// (0x0003f444) bg_popup_call_poc_act_pane_g

0x0f00,	// (0x00030d7d) bg_popup_call_poc_inact_pane_g1

0x0f08,	// (0x00030d85) bg_popup_call_poc_inact_pane_g2

0xef16,	// (0x0003ed93) popup_call_poc_act_window_g2

0x0f10,	// (0x00030d8d) bg_popup_call_poc_inact_pane_g3

0x0f18,	// (0x00030d95) bg_popup_call_poc_inact_pane_g4

0x0f20,	// (0x00030d9d) bg_popup_call_poc_inact_pane_g5

0xef1e,	// (0x0003ed9b) popup_call_poc_act_window_t1_ParamLimits

0xef1e,	// (0x0003ed9b) popup_call_poc_act_window_t1

0xef46,	// (0x0003edc3) popup_call_poc_act_window_t2_ParamLimits

0xef46,	// (0x0003edc3) popup_call_poc_act_window_t2

0xef6e,	// (0x0003edeb) popup_call_poc_act_window_t3_ParamLimits

0xef6e,	// (0x0003edeb) popup_call_poc_act_window_t3

0xef96,	// (0x0003ee13) popup_call_poc_act_window_t4_ParamLimits

0xef96,	// (0x0003ee13) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x0003f3b2) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x0003f3b2) popup_call_poc_act_window_t

0x0f28,	// (0x00030da5) bg_popup_call_poc_inact_pane_g6

0x0f30,	// (0x00030dad) bg_popup_call_poc_inact_pane_g7

0x0f38,	// (0x00030db5) bg_popup_call_poc_inact_pane_g8

0xefa8,	// (0x0003ee25) popup_call_poc_inact_window_g2

0x0f40,	// (0x00030dbd) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5b4,	// (0x0003f431) bg_popup_call_poc_inact_pane_g

0xefb0,	// (0x0003ee2d) popup_call_poc_inact_window_t1_ParamLimits

0xefb0,	// (0x0003ee2d) popup_call_poc_inact_window_t1

0xefc5,	// (0x0003ee42) popup_call_poc_inact_window_t2_ParamLimits

0xefc5,	// (0x0003ee42) popup_call_poc_inact_window_t2

0xefda,	// (0x0003ee57) popup_call_poc_inact_window_t3_ParamLimits

0xefda,	// (0x0003ee57) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x0003f3bb) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x0003f3bb) popup_call_poc_inact_window_t

0x10f8,	// (0x00030f75) context_pane_ParamLimits

0x91d6,	// (0x00039053) signal_pane_ParamLimits

0xeba5,	// (0x0003ea22) main_call2_pane

0x10e6,	// (0x00030f63) popup_phob_thumbnail2_window_ParamLimits

0x10e6,	// (0x00030f63) popup_phob_thumbnail2_window

0x889b,	// (0x00038718) aid_hotspot_pointer_arrow_pane

0x88a3,	// (0x00038720) aid_hotspot_pointer_hand_pane

0x8f14,	// (0x00038d91) phob_pre_status_pane_g5

0x6eb3,	// (0x00036d30) cams_zoom_pane_ParamLimits

0x6ebf,	// (0x00036d3c) image_vga_pane_ParamLimits

0x6ece,	// (0x00036d4b) main_camera_pane_g1_ParamLimits

0x6edc,	// (0x00036d59) main_camera_pane_g2_ParamLimits

0x6eea,	// (0x00036d67) main_camera_pane_g3_ParamLimits

0x6ef6,	// (0x00036d73) main_camera_pane_g4_ParamLimits

0x6f02,	// (0x00036d7f) main_camera_pane_g5_ParamLimits

0x6f0e,	// (0x00036d8b) main_camera_pane_g6_ParamLimits

0x6f1a,	// (0x00036d97) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x0003f0ba) main_camera_pane_g_ParamLimits

0x6f26,	// (0x00036da3) main_camera_pane_t1_ParamLimits

0x6f38,	// (0x00036db5) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x0003f0cb) main_camera_pane_t_ParamLimits

0xe006,	// (0x0003de83) bg_popup_preview_window_pane_cp01_ParamLimits

0xe006,	// (0x0003de83) bg_popup_preview_window_pane_cp01

0xefef,	// (0x0003ee6c) popup_phob_thumbnail2_window_g1_ParamLimits

0xefef,	// (0x0003ee6c) popup_phob_thumbnail2_window_g1

0xddab,	// (0x0003dc28) call2_cli_visual_pane

0x8c03,	// (0x00038a80) popup_call2_audio_conf_window_ParamLimits

0x8c03,	// (0x00038a80) popup_call2_audio_conf_window

0x8c18,	// (0x00038a95) popup_call2_audio_first_window_ParamLimits

0x8c18,	// (0x00038a95) popup_call2_audio_first_window

0x8cb6,	// (0x00038b33) popup_call2_audio_in_window_ParamLimits

0x8cb6,	// (0x00038b33) popup_call2_audio_in_window

0x8cf8,	// (0x00038b75) popup_call2_audio_out_window_ParamLimits

0x8cf8,	// (0x00038b75) popup_call2_audio_out_window

0x8d5a,	// (0x00038bd7) popup_call2_audio_second_window_ParamLimits

0x8d5a,	// (0x00038bd7) popup_call2_audio_second_window

0x8db8,	// (0x00038c35) popup_call2_audio_wait_window_ParamLimits

0x8db8,	// (0x00038c35) popup_call2_audio_wait_window

0xddab,	// (0x0003dc28) bg_popup_call2_act_pane_cp03

0xdfe8,	// (0x0003de65) list_conf_pane_cp

0xeffb,	// (0x0003ee78) popup_call2_audio_conf_window_t1

0xf009,	// (0x0003ee86) list_single_graphic_popup_conf2_pane_ParamLimits

0xf009,	// (0x0003ee86) list_single_graphic_popup_conf2_pane

0xe9bb,	// (0x0003e838) list_highlight_pane_cp04

0xf01c,	// (0x0003ee99) list_single_graphic_popup_conf2_pane_g1

0xe9cc,	// (0x0003e849) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x0003f3c2) list_single_graphic_popup_conf2_pane_g

0xf026,	// (0x0003eea3) list_single_graphic_popup_conf2_pane_t1

0xf034,	// (0x0003eeb1) bg_popup_call2_act_pane_cp01_ParamLimits

0xf034,	// (0x0003eeb1) bg_popup_call2_act_pane_cp01

0x01c5,	// (0x00030042) call_type_pane_cp05_ParamLimits

0x01c5,	// (0x00030042) call_type_pane_cp05

0x0219,	// (0x00030096) popup_call2_audio_second_window_g1_ParamLimits

0x0219,	// (0x00030096) popup_call2_audio_second_window_g1

0x026d,	// (0x000300ea) popup_call2_audio_second_window_g2_ParamLimits

0x026d,	// (0x000300ea) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x0003f3c7) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x0003f3c7) popup_call2_audio_second_window_g

0x02d2,	// (0x0003014f) popup_call2_audio_second_window_t1_ParamLimits

0x02d2,	// (0x0003014f) popup_call2_audio_second_window_t1

0x038d,	// (0x0003020a) popup_call2_audio_second_window_t2_ParamLimits

0x038d,	// (0x0003020a) popup_call2_audio_second_window_t2

0x03e0,	// (0x0003025d) popup_call2_audio_second_window_t3_ParamLimits

0x03e0,	// (0x0003025d) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x0003f3ce) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x0003f3ce) popup_call2_audio_second_window_t

0xddab,	// (0x0003dc28) bg_popup_call2_in_pane_cp02

0xddb5,	// (0x0003dc32) call_type_pane_cp04

0xddbd,	// (0x0003dc3a) popup_call2_audio_wait_window_g1

0xddc5,	// (0x0003dc42) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0003efa7) popup_call2_audio_wait_window_g

0xddcd,	// (0x0003dc4a) popup_call2_audio_wait_window_t3

0x04d3,	// (0x00030350) bg_popup_call2_act_pane_ParamLimits

0x04d3,	// (0x00030350) bg_popup_call2_act_pane

0x0593,	// (0x00030410) call_type_pane_cp03_ParamLimits

0x0593,	// (0x00030410) call_type_pane_cp03

0x05f7,	// (0x00030474) popup_call2_audio_first_window_g1_ParamLimits

0x05f7,	// (0x00030474) popup_call2_audio_first_window_g1

0x0667,	// (0x000304e4) popup_call2_audio_first_window_g2_ParamLimits

0x0667,	// (0x000304e4) popup_call2_audio_first_window_g2

0xe8b1,	// (0x0003e72e) popup_call2_audio_first_window_g3_ParamLimits

0xe8b1,	// (0x0003e72e) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x0003f3d7) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x0003f3d7) popup_call2_audio_first_window_g

0x0745,	// (0x000305c2) popup_call2_audio_first_window_t1_ParamLimits

0x0745,	// (0x000305c2) popup_call2_audio_first_window_t1

0x0848,	// (0x000306c5) popup_call2_audio_first_window_t4_ParamLimits

0x0848,	// (0x000306c5) popup_call2_audio_first_window_t4

0x092b,	// (0x000307a8) popup_call2_audio_first_window_t5_ParamLimits

0x092b,	// (0x000307a8) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x0003f3e2) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x0003f3e2) popup_call2_audio_first_window_t

0xdffe,	// (0x0003de7b) bg_popup_call2_act_pane_g1

0x0f98,	// (0x00030e15) popup_cale_lunar_info_window_t1

0x0fa6,	// (0x00030e23) popup_cale_lunar_info_window_t2

0x0fb4,	// (0x00030e31) popup_cale_lunar_info_window_t3

0xddab,	// (0x0003dc28) bg_popup_call2_bubble_pane

0x0a2c,	// (0x000308a9) bg_popup_call2_in_pane_cp01_ParamLimits

0x0a2c,	// (0x000308a9) bg_popup_call2_in_pane_cp01

0xda87,	// (0x0003d904) call_type_pane_cp02

0x0a74,	// (0x000308f1) popup_call2_audio_out_window_g1_ParamLimits

0x0a74,	// (0x000308f1) popup_call2_audio_out_window_g1

0x0aa0,	// (0x0003091d) popup_call2_audio_out_window_g2_ParamLimits

0x0aa0,	// (0x0003091d) popup_call2_audio_out_window_g2

0x0ac8,	// (0x00030945) popup_call2_audio_out_window_g3_ParamLimits

0x0ac8,	// (0x00030945) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x0003f3eb) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x0003f3eb) popup_call2_audio_out_window_g

0x0b03,	// (0x00030980) popup_call2_audio_out_window_t1_ParamLimits

0x0b03,	// (0x00030980) popup_call2_audio_out_window_t1

0x0b62,	// (0x000309df) popup_call2_audio_out_window_t2_ParamLimits

0x0b62,	// (0x000309df) popup_call2_audio_out_window_t2

0x0bb6,	// (0x00030a33) popup_call2_audio_out_window_t3_ParamLimits

0x0bb6,	// (0x00030a33) popup_call2_audio_out_window_t3

0x0bcc,	// (0x00030a49) popup_call2_audio_out_window_t4_ParamLimits

0x0bcc,	// (0x00030a49) popup_call2_audio_out_window_t4

0x0be2,	// (0x00030a5f) popup_call2_audio_out_window_t5_ParamLimits

0x0be2,	// (0x00030a5f) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x0003f3f4) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x0003f3f4) popup_call2_audio_out_window_t

0x0c46,	// (0x00030ac3) bg_popup_call2_in_pane_ParamLimits

0x0c46,	// (0x00030ac3) bg_popup_call2_in_pane

0x0ca2,	// (0x00030b1f) popup_call2_audio_in_window_g1_ParamLimits

0x0ca2,	// (0x00030b1f) popup_call2_audio_in_window_g1

0x0cda,	// (0x00030b57) popup_call2_audio_in_window_g2_ParamLimits

0x0cda,	// (0x00030b57) popup_call2_audio_in_window_g2

0x0d12,	// (0x00030b8f) popup_call2_audio_in_window_g3_ParamLimits

0x0d12,	// (0x00030b8f) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x0003f401) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x0003f401) popup_call2_audio_in_window_g

0x0d6a,	// (0x00030be7) popup_call2_audio_in_window_t1_ParamLimits

0x0d6a,	// (0x00030be7) popup_call2_audio_in_window_t1

0x0dea,	// (0x00030c67) popup_call2_audio_in_window_t2_ParamLimits

0x0dea,	// (0x00030c67) popup_call2_audio_in_window_t2

0x0e6a,	// (0x00030ce7) popup_call2_audio_in_window_t3_ParamLimits

0x0e6a,	// (0x00030ce7) popup_call2_audio_in_window_t3

0x0e84,	// (0x00030d01) popup_call2_audio_in_window_t4_ParamLimits

0x0e84,	// (0x00030d01) popup_call2_audio_in_window_t4

0x0e96,	// (0x00030d13) popup_call2_audio_in_window_t5_ParamLimits

0x0e96,	// (0x00030d13) popup_call2_audio_in_window_t5

0x0eab,	// (0x00030d28) popup_call2_audio_in_window_t6_ParamLimits

0x0eab,	// (0x00030d28) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x0003f40a) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x0003f40a) popup_call2_audio_in_window_t

0xdffe,	// (0x0003de7b) bg_popup_call2_in_pane_g1

0x0fc2,	// (0x00030e3f) popup_cale_lunar_info_window_t4

0x0003,

0xf5f5,	// (0x0003f472) popup_cale_lunar_info_window_t

0xe006,	// (0x0003de83) bg_popup_call2_rect_pane_ParamLimits

0xe006,	// (0x0003de83) bg_popup_call2_rect_pane

0xddab,	// (0x0003dc28) call2_cli_visual_graphic_pane

0xddab,	// (0x0003dc28) call2_cli_visual_text_pane

0x9286,	// (0x00039103) smil_status_volume_pane_g3

0x0002,

0xe16a,	// (0x0003dfe7) call2_cli_visual_graphic_pane_g1

0xe16a,	// (0x0003dfe7) call2_cli_visual_graphic_pane_g2

0xe16a,	// (0x0003dfe7) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x0003f417) call2_cli_visual_graphic_pane_g

0x0ec0,	// (0x00030d3d) bg_popup_call2_rect_pane_g1

0xe208,	// (0x0003e085) bg_popup_call2_rect_pane_g2

0x0ec8,	// (0x00030d45) bg_popup_call2_rect_pane_g3

0x0ed0,	// (0x00030d4d) bg_popup_call2_rect_pane_g4

0x0ed8,	// (0x00030d55) bg_popup_call2_rect_pane_g5

0x0ee0,	// (0x00030d5d) bg_popup_call2_rect_pane_g6

0x0ee8,	// (0x00030d65) bg_popup_call2_rect_pane_g7

0x0ef0,	// (0x00030d6d) bg_popup_call2_rect_pane_g8

0x0ef8,	// (0x00030d75) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x0003f41e) bg_popup_call2_rect_pane_g

0x0f00,	// (0x00030d7d) bg_popup_call2_bubble_pane_g1

0x0f08,	// (0x00030d85) bg_popup_call2_bubble_pane_g2

0x0f10,	// (0x00030d8d) bg_popup_call2_bubble_pane_g3

0x0f18,	// (0x00030d95) bg_popup_call2_bubble_pane_g4

0x0f20,	// (0x00030d9d) bg_popup_call2_bubble_pane_g5

0x0f28,	// (0x00030da5) bg_popup_call2_bubble_pane_g6

0x0f30,	// (0x00030dad) bg_popup_call2_bubble_pane_g7

0x0f38,	// (0x00030db5) bg_popup_call2_bubble_pane_g8

0x0f40,	// (0x00030dbd) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x0003f431) bg_popup_call2_bubble_pane_g

0x6aba,	// (0x00036937) aid_cale_week_size_cell_pane

0x6f4a,	// (0x00036dc7) aid_cams_cif_uncrop_pane_ParamLimits

0x6f4a,	// (0x00036dc7) aid_cams_cif_uncrop_pane

0x70ad,	// (0x00036f2a) aid_cams_size_cell_ParamLimits

0x70ad,	// (0x00036f2a) aid_cams_size_cell

0x70b9,	// (0x00036f36) grid_cams_pane_ParamLimits

0x70c7,	// (0x00036f44) linegrid_cams_pane_ParamLimits

0x715d,	// (0x00036fda) call_video_pane_t1

0x7176,	// (0x00036ff3) call_video_pane_t2

0x0001,

0xf2a1,	// (0x0003f11e) call_video_pane_t

0x7674,	// (0x000374f1) aid_cale_month_size_cell_pane_ParamLimits

0x7674,	// (0x000374f1) aid_cale_month_size_cell_pane

0xf63e,	// (0x0003f4bb) smil_status_volume_pane_g

0x9293,	// (0x00039110) volume_smil_pane_ParamLimits

0xd944,	// (0x0003d7c1) aid_popup2_width_pane

0x69af,	// (0x0003682c) cell_qdial_pane_g4_ParamLimits

0x69af,	// (0x0003682c) cell_qdial_pane_g4

0x8268,	// (0x000380e5) aid_blid_cardinal_pane_ParamLimits

0x8278,	// (0x000380f5) aid_blid_destination_pane_ParamLimits

0x8278,	// (0x000380f5) aid_blid_destination_pane

0xe006,	// (0x0003de83) bg_popup_call_poc_act_pane_ParamLimits

0xe006,	// (0x0003de83) bg_popup_call_poc_act_pane

0xe006,	// (0x0003de83) bg_popup_call_poc_inact_pane_ParamLimits

0xe006,	// (0x0003de83) bg_popup_call_poc_inact_pane

0x0f48,	// (0x00030dc5) bg_popup_call_poc_act_pane_g1

0x0f50,	// (0x00030dcd) bg_popup_call_poc_act_pane_g2

0x0f58,	// (0x00030dd5) bg_popup_call_poc_act_pane_g3

0x0f18,	// (0x00030d95) bg_popup_call_poc_act_pane_g4

0x0f20,	// (0x00030d9d) bg_popup_call_poc_act_pane_g5

0x0f60,	// (0x00030ddd) bg_popup_call_poc_act_pane_g6

0x0f30,	// (0x00030dad) bg_popup_call_poc_act_pane_g7

0x0f68,	// (0x00030de5) bg_popup_call_poc_act_pane_g8

0xddab,	// (0x0003dc28) main_usb_pane

0x10c1,	// (0x00030f3e) popup_cale_lunar_info_window

0x7413,	// (0x00037290) im_reading_pane_t1_ParamLimits

0xe3d5,	// (0x0003e252) list_im_pane_ParamLimits

0xe3e6,	// (0x0003e263) scroll_pane_cp07_ParamLimits

0xddab,	// (0x0003dc28) grid_highlight_pane_cp012

0xe006,	// (0x0003de83) mup_scale_pane_ParamLimits

0xe8b1,	// (0x0003e72e) main_usb_pane_g1_ParamLimits

0xe8b1,	// (0x0003e72e) main_usb_pane_g1

0x8e37,	// (0x00038cb4) main_usb_pane_g2_ParamLimits

0x8e37,	// (0x00038cb4) main_usb_pane_g2

0x0001,

0xf5de,	// (0x0003f45b) main_usb_pane_g_ParamLimits

0xf5de,	// (0x0003f45b) main_usb_pane_g

0x8e43,	// (0x00038cc0) main_usb_pane_t1_ParamLimits

0x8e43,	// (0x00038cc0) main_usb_pane_t1

0x8e55,	// (0x00038cd2) main_usb_pane_t2_ParamLimits

0x8e55,	// (0x00038cd2) main_usb_pane_t2

0x8e67,	// (0x00038ce4) main_usb_pane_t3_ParamLimits

0x8e67,	// (0x00038ce4) main_usb_pane_t3

0x8e79,	// (0x00038cf6) main_usb_pane_t4_ParamLimits

0x8e79,	// (0x00038cf6) main_usb_pane_t4

0x8e8b,	// (0x00038d08) main_usb_pane_t5_ParamLimits

0x8e8b,	// (0x00038d08) main_usb_pane_t5

0x8e9d,	// (0x00038d1a) main_usb_pane_t6_ParamLimits

0x8e9d,	// (0x00038d1a) main_usb_pane_t6

0x0005,

0xf5e3,	// (0x0003f460) main_usb_pane_t_ParamLimits

0x820e,	// (0x0003808b) aid_text_placing

0x821a,	// (0x00038097) main_location2_pane_t1_ParamLimits

0x822e,	// (0x000380ab) main_location2_pane_t2_ParamLimits

0x8242,	// (0x000380bf) main_location2_pane_t3_ParamLimits

0x8256,	// (0x000380d3) main_location2_pane_t4_ParamLimits

0x8256,	// (0x000380d3) main_location2_pane_t4

0xf402,	// (0x0003f27f) main_location2_pane_t_ParamLimits

0xe04a,	// (0x0003dec7) find_pinb_pane_g2_ParamLimits

0xe04a,	// (0x0003dec7) find_pinb_pane_g2

0x0001,

0xf150,	// (0x0003efcd) find_pinb_pane_g_ParamLimits

0xf150,	// (0x0003efcd) find_pinb_pane_g

0xe056,	// (0x0003ded3) find_pinb_pane_t1_ParamLimits

0xe068,	// (0x0003dee5) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x0003efd2) find_pinb_pane_t_ParamLimits

0xddab,	// (0x0003dc28) main_call3_pane

0x79c0,	// (0x0003783d) cale_month_day_heading_pane_t1_ParamLimits

0x7a1e,	// (0x0003789b) cale_month_day_heading_pane_t2_ParamLimits

0x7a83,	// (0x00037900) cale_month_day_heading_pane_t3_ParamLimits

0x7ae8,	// (0x00037965) cale_month_day_heading_pane_t4_ParamLimits

0x7b4d,	// (0x000379ca) cale_month_day_heading_pane_t5_ParamLimits

0x7bb2,	// (0x00037a2f) cale_month_day_heading_pane_t6_ParamLimits

0x7c1f,	// (0x00037a9c) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x0003f156) cale_month_day_heading_pane_t_ParamLimits

0xe626,	// (0x0003e4a3) smil_status_volume_pane

0x89e3,	// (0x00038860) postcard_address_pane_ParamLimits

0x89e3,	// (0x00038860) postcard_address_pane

0x89ef,	// (0x0003886c) postcard_message_pane_ParamLimits

0x89ef,	// (0x0003886c) postcard_message_pane

0x8df7,	// (0x00038c74) call2_cli_visual_pane_t1_ParamLimits

0x8df7,	// (0x00038c74) call2_cli_visual_pane_t1

0x93e6,	// (0x00039263) postcard_message_pane_t1_ParamLimits

0x93e6,	// (0x00039263) postcard_message_pane_t1

0x93cf,	// (0x0003924c) postcard_address_pane_t1_ParamLimits

0x93cf,	// (0x0003924c) postcard_address_pane_t1

0x93c0,	// (0x0003923d) popup_call3_audio_in_window_ParamLimits

0x93c0,	// (0x0003923d) popup_call3_audio_in_window

0x92a8,	// (0x00039125) bg_popup_call3_in_pane_ParamLimits

0x92a8,	// (0x00039125) bg_popup_call3_in_pane

0x9306,	// (0x00039183) popup_call3_audio_in_window_g1_ParamLimits

0x9306,	// (0x00039183) popup_call3_audio_in_window_g1

0x931e,	// (0x0003919b) popup_call3_audio_in_window_g2_ParamLimits

0x931e,	// (0x0003919b) popup_call3_audio_in_window_g2

0x9336,	// (0x000391b3) popup_call3_audio_in_window_g3_ParamLimits

0x9336,	// (0x000391b3) popup_call3_audio_in_window_g3

0x0003,

0xf645,	// (0x0003f4c2) popup_call3_audio_in_window_g_ParamLimits

0xf645,	// (0x0003f4c2) popup_call3_audio_in_window_g

0x935e,	// (0x000391db) popup_call3_audio_in_window_t1_ParamLimits

0x935e,	// (0x000391db) popup_call3_audio_in_window_t1

0x9386,	// (0x00039203) popup_call3_audio_in_window_t2_ParamLimits

0x9386,	// (0x00039203) popup_call3_audio_in_window_t2

0x93ae,	// (0x0003922b) popup_call3_audio_in_window_t3_ParamLimits

0x93ae,	// (0x0003922b) popup_call3_audio_in_window_t3

0x0002,

0xf64e,	// (0x0003f4cb) popup_call3_audio_in_window_t_ParamLimits

0xf64e,	// (0x0003f4cb) popup_call3_audio_in_window_t

0xeba5,	// (0x0003ea22) bg_popup_call3_rect_pane

0x0ec0,	// (0x00030d3d) bg_popup_call3_rect_pane_g1

0xe208,	// (0x0003e085) bg_popup_call3_rect_pane_g2

0x0ec8,	// (0x00030d45) bg_popup_call3_rect_pane_g3

0x0ed0,	// (0x00030d4d) bg_popup_call3_rect_pane_g4

0x0ed8,	// (0x00030d55) bg_popup_call3_rect_pane_g5

0x0ee0,	// (0x00030d5d) bg_popup_call3_rect_pane_g6

0x0ee8,	// (0x00030d65) bg_popup_call3_rect_pane_g7

0x866a,	// (0x000384e7) mup_visualizer_osc_pane

0xec64,	// (0x0003eae1) mup_visualizer_spec_pane

0x92c8,	// (0x00039145) call3_video_qcif_pane_ParamLimits

0x92c8,	// (0x00039145) call3_video_qcif_pane

0x92d8,	// (0x00039155) call3_video_qcif_uncrop_pane_ParamLimits

0x92d8,	// (0x00039155) call3_video_qcif_uncrop_pane

0x92e4,	// (0x00039161) call3_video_subqcif_pane_ParamLimits

0x92e4,	// (0x00039161) call3_video_subqcif_pane

0x92f6,	// (0x00039173) call3_video_subqcif_uncrop_pane_ParamLimits

0x92f6,	// (0x00039173) call3_video_subqcif_uncrop_pane

0x934e,	// (0x000391cb) popup_call3_audio_in_window_g4_ParamLimits

0x934e,	// (0x000391cb) popup_call3_audio_in_window_g4

0x9275,	// (0x000390f2) mup_spec_half_pane

0x927e,	// (0x000390fb) mup_spec_half_pane_cp

0x1158,	// (0x00030fd5) mup_osc_middle_pane

0x1161,	// (0x00030fde) mup_visualizer_osc_pane_g1

0x9256,	// (0x000390d3) mup_spec_bar_pane_ParamLimits

0x9256,	// (0x000390d3) mup_spec_bar_pane

0x1145,	// (0x00030fc2) mup_spec_bar_pane_g1

0x114f,	// (0x00030fcc) mup_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0003f4b6) mup_spec_bar_pane_g

0x6aba,	// (0x00036937) aid_cale_week_size_cell_pane_ParamLimits

0x6acd,	// (0x0003694a) bg_cale_heading_pane_ParamLimits

0xe23c,	// (0x0003e0b9) bg_cale_pane_cp01_ParamLimits

0x6ae1,	// (0x0003695e) cale_week_corner_pane_ParamLimits

0x6af2,	// (0x0003696f) cale_week_day_heading_pane_ParamLimits

0x6b06,	// (0x00036983) cale_week_scroll_pane_g1_ParamLimits

0x6b17,	// (0x00036994) cale_week_scroll_pane_g2_ParamLimits

0x6b28,	// (0x000369a5) cale_week_scroll_pane_g3_ParamLimits

0x6b39,	// (0x000369b6) cale_week_scroll_pane_g4_ParamLimits

0x6b4a,	// (0x000369c7) cale_week_scroll_pane_g5_ParamLimits

0x6b5b,	// (0x000369d8) cale_week_scroll_pane_g6_ParamLimits

0x6b6c,	// (0x000369e9) cale_week_scroll_pane_g7_ParamLimits

0x6b7f,	// (0x000369fc) cale_week_scroll_pane_g8_ParamLimits

0x6b92,	// (0x00036a0f) cale_week_scroll_pane_g9_ParamLimits

0x6ba3,	// (0x00036a20) cale_week_scroll_pane_g10_ParamLimits

0x6bb4,	// (0x00036a31) cale_week_scroll_pane_g11_ParamLimits

0x6bc5,	// (0x00036a42) cale_week_scroll_pane_g12_ParamLimits

0x6bd6,	// (0x00036a53) cale_week_scroll_pane_g13_ParamLimits

0x6be7,	// (0x00036a64) cale_week_scroll_pane_g14_ParamLimits

0x6bf8,	// (0x00036a75) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x0003f05e) cale_week_scroll_pane_g_ParamLimits

0x6c09,	// (0x00036a86) cale_week_time_pane_ParamLimits

0x6c1c,	// (0x00036a99) grid_cale_week_pane_ParamLimits

0xe255,	// (0x0003e0d2) listscroll_cale_week_pane_t1

0x6c31,	// (0x00036aae) scroll_pane_cp08_ParamLimits

0x76b5,	// (0x00037532) cale_month_corner_pane_ParamLimits

0xe5fc,	// (0x0003e479) cale_month_pane_t1

0x797f,	// (0x000377fc) cale_month_week_pane_ParamLimits

0xe8b1,	// (0x0003e72e) popup_call_status_window_g1_ParamLimits

0x8056,	// (0x00037ed3) popup_call_status_window_g2_ParamLimits

0x8062,	// (0x00037edf) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x0003f206) popup_call_status_window_g_ParamLimits

0xe918,	// (0x0003e795) aid_call2_pane

0x53aa,	// (0x00035227) msg_header_pane_g1

0x89e3,	// (0x00038860) postcard_address2_pane_ParamLimits

0x89e3,	// (0x00038860) postcard_address2_pane

0x89ef,	// (0x0003886c) postcard_message2_pane_ParamLimits

0x89ef,	// (0x0003886c) postcard_message2_pane

0x91e4,	// (0x00039061) message2_row_pane_ParamLimits

0x91e4,	// (0x00039061) message2_row_pane

0x9201,	// (0x0003907e) address2_row_pane_ParamLimits

0x9201,	// (0x0003907e) address2_row_pane

0x1113,	// (0x00030f90) postcard_message2_row_pane_g1

0x111b,	// (0x00030f98) postcard_message2_row_pane_t1

0x1113,	// (0x00030f90) address2_row_pane_g1

0x111b,	// (0x00030f98) address2_row_pane_t1

0x6e29,	// (0x00036ca6) aid_size_cell_vorec

0xddab,	// (0x0003dc28) main_rss_pane

0x9214,	// (0x00039091) rss_list_single_pane_ParamLimits

0x9214,	// (0x00039091) rss_list_single_pane

0x1129,	// (0x00030fa6) rss_list_single_pane_t1

0x1137,	// (0x00030fb4) rss_list_single_pane_t2

0x0001,

0xf634,	// (0x0003f4b1) rss_list_single_pane_t

0xddab,	// (0x0003dc28) main_camera2_pane

0xddab,	// (0x0003dc28) main_video2_pane

0x944a,	// (0x000392c7) cams_zoom_pane_cp2_ParamLimits

0x944a,	// (0x000392c7) cams_zoom_pane_cp2

0x9456,	// (0x000392d3) image2_vga_pane_ParamLimits

0x9456,	// (0x000392d3) image2_vga_pane

0x9465,	// (0x000392e2) main_camera2_pane_g1_ParamLimits

0x9465,	// (0x000392e2) main_camera2_pane_g1

0x9471,	// (0x000392ee) main_camera2_pane_g2_ParamLimits

0x9471,	// (0x000392ee) main_camera2_pane_g2

0x947d,	// (0x000392fa) main_camera2_pane_g3_ParamLimits

0x947d,	// (0x000392fa) main_camera2_pane_g3

0x9489,	// (0x00039306) main_camera2_pane_g4_ParamLimits

0x9489,	// (0x00039306) main_camera2_pane_g4

0x9495,	// (0x00039312) main_camera2_pane_g5_ParamLimits

0x9495,	// (0x00039312) main_camera2_pane_g5

0x94a1,	// (0x0003931e) main_camera2_pane_g6_ParamLimits

0x94a1,	// (0x0003931e) main_camera2_pane_g6

0x94ad,	// (0x0003932a) main_camera2_pane_g7_ParamLimits

0x94ad,	// (0x0003932a) main_camera2_pane_g7

0x94b9,	// (0x00039336) main_camera2_pane_g8_ParamLimits

0x94b9,	// (0x00039336) main_camera2_pane_g8

0x0008,

0xf655,	// (0x0003f4d2) main_camera2_pane_g_ParamLimits

0xf655,	// (0x0003f4d2) main_camera2_pane_g

0x94d1,	// (0x0003934e) main_camera2_pane_t1_ParamLimits

0x94d1,	// (0x0003934e) main_camera2_pane_t1

0x94e3,	// (0x00039360) main_camera2_pane_t2_ParamLimits

0x94e3,	// (0x00039360) main_camera2_pane_t2

0x94f5,	// (0x00039372) main_camera2_pane_t3_ParamLimits

0x94f5,	// (0x00039372) main_camera2_pane_t3

0x9507,	// (0x00039384) main_camera2_pane_t4_ParamLimits

0x9507,	// (0x00039384) main_camera2_pane_t4

0x0006,

0xf668,	// (0x0003f4e5) main_camera2_pane_t_ParamLimits

0xf668,	// (0x0003f4e5) main_camera2_pane_t

0x9569,	// (0x000393e6) cams_zoom_pane_cp4_ParamLimits

0x9569,	// (0x000393e6) cams_zoom_pane_cp4

0x9579,	// (0x000393f6) image2_cif_pane_ParamLimits

0x9579,	// (0x000393f6) image2_cif_pane

0x958e,	// (0x0003940b) image2_subqcif_pane_ParamLimits

0x958e,	// (0x0003940b) image2_subqcif_pane

0x959d,	// (0x0003941a) main_video2_pane_g1_ParamLimits

0x959d,	// (0x0003941a) main_video2_pane_g1

0x95af,	// (0x0003942c) main_video2_pane_g2_ParamLimits

0x95af,	// (0x0003942c) main_video2_pane_g2

0x95bf,	// (0x0003943c) main_video2_pane_g3_ParamLimits

0x95bf,	// (0x0003943c) main_video2_pane_g3

0x95cf,	// (0x0003944c) main_video2_pane_g4_ParamLimits

0x95cf,	// (0x0003944c) main_video2_pane_g4

0x95df,	// (0x0003945c) main_video2_pane_g5_ParamLimits

0x95df,	// (0x0003945c) main_video2_pane_g5

0x95ef,	// (0x0003946c) main_video2_pane_g6_ParamLimits

0x95ef,	// (0x0003946c) main_video2_pane_g6

0x0005,

0xf677,	// (0x0003f4f4) main_video2_pane_g_ParamLimits

0xf677,	// (0x0003f4f4) main_video2_pane_g

0x9601,	// (0x0003947e) main_video2_pane_t1_ParamLimits

0x9601,	// (0x0003947e) main_video2_pane_t1

0x961b,	// (0x00039498) main_video2_pane_t2_ParamLimits

0x961b,	// (0x00039498) main_video2_pane_t2

0x9641,	// (0x000394be) main_video2_pane_t3_ParamLimits

0x9641,	// (0x000394be) main_video2_pane_t3

0x0002,

0xf684,	// (0x0003f501) main_video2_pane_t_ParamLimits

0xf684,	// (0x0003f501) main_video2_pane_t

0x8f54,	// (0x00038dd1) call_muted_g2

0x0001,

0xf626,	// (0x0003f4a3) call_muted_g

0xddab,	// (0x0003dc28) main_mup2_pane

0x1218,	// (0x00031095) main_mup2_pane_g1_ParamLimits

0x1218,	// (0x00031095) main_mup2_pane_g1

0x9667,	// (0x000394e4) main_mup2_pane_g2_ParamLimits

0x9667,	// (0x000394e4) main_mup2_pane_g2

0x98e9,	// (0x00039766) main_mup_pane_g13_cp1

0x98f1,	// (0x0003976e) mup_volume_pane_cp1

0x9687,	// (0x00039504) main_mup2_pane_g4_ParamLimits

0x9687,	// (0x00039504) main_mup2_pane_g4

0x969c,	// (0x00039519) main_mup2_pane_g5_ParamLimits

0x969c,	// (0x00039519) main_mup2_pane_g5

0x96b1,	// (0x0003952e) main_mup2_pane_g6_ParamLimits

0x96b1,	// (0x0003952e) main_mup2_pane_g6

0x96c6,	// (0x00039543) main_mup2_pane_g7_ParamLimits

0x96c6,	// (0x00039543) main_mup2_pane_g7

0x0006,

0xf68b,	// (0x0003f508) main_mup2_pane_g_ParamLimits

0xf68b,	// (0x0003f508) main_mup2_pane_g

0x96e2,	// (0x0003955f) main_mup2_pane_t1_ParamLimits

0x96e2,	// (0x0003955f) main_mup2_pane_t1

0x96f9,	// (0x00039576) main_mup2_pane_t2_ParamLimits

0x96f9,	// (0x00039576) main_mup2_pane_t2

0x9710,	// (0x0003958d) main_mup2_pane_t3_ParamLimits

0x9710,	// (0x0003958d) main_mup2_pane_t3

0x9727,	// (0x000395a4) main_mup2_pane_t4_ParamLimits

0x9727,	// (0x000395a4) main_mup2_pane_t4

0x9741,	// (0x000395be) main_mup2_pane_t5_ParamLimits

0x9741,	// (0x000395be) main_mup2_pane_t5

0x975b,	// (0x000395d8) main_mup2_pane_t6_ParamLimits

0x975b,	// (0x000395d8) main_mup2_pane_t6

0x0005,

0xf69a,	// (0x0003f517) main_mup2_pane_t_ParamLimits

0xf69a,	// (0x0003f517) main_mup2_pane_t

0x9793,	// (0x00039610) mup2_visualizer_pane_ParamLimits

0x9793,	// (0x00039610) mup2_visualizer_pane

0x97c9,	// (0x00039646) mup_progress_pane_cp_ParamLimits

0x97c9,	// (0x00039646) mup_progress_pane_cp

0x98d4,	// (0x00039751) mup_volume_pane_cp_ParamLimits

0x98d4,	// (0x00039751) mup_volume_pane_cp

0x97e0,	// (0x0003965d) mup2_visualizer_pane_g1_ParamLimits

0x97e0,	// (0x0003965d) mup2_visualizer_pane_g1

0x11ea,	// (0x00031067) mup2_visualizer_pane_g2_ParamLimits

0x11ea,	// (0x00031067) mup2_visualizer_pane_g2

0x97f5,	// (0x00039672) mup2_visualizer_pane_g3_ParamLimits

0x97f5,	// (0x00039672) mup2_visualizer_pane_g3

0x0002,

0xf6a7,	// (0x0003f524) mup2_visualizer_pane_g_ParamLimits

0xf6a7,	// (0x0003f524) mup2_visualizer_pane_g

0xee8b,	// (0x0003ed08) aid_size_cell_fmradio

0x906a,	// (0x00038ee7) aid_height_parent_landcape

0xe464,	// (0x0003e2e1) wml_content_pane_cp

0xe46c,	// (0x0003e2e9) wml_tabs_pane

0xe475,	// (0x0003e2f2) popup_wml_miniature_window

0xe47d,	// (0x0003e2fa) scroll_pane_cp021

0xe491,	// (0x0003e30e) wml_content_pane_comp8

0xddab,	// (0x0003dc28) bg_popup_sub_pane_cp05

0x1208,	// (0x00031085) popup_wml_miniature_window_g1

0x1210,	// (0x0003108d) wml_miniature_view_pane

0x9803,	// (0x00039680) aid_size_wml_view

0x980b,	// (0x00039688) wml_miniature_view_pane_g1

0x9814,	// (0x00039691) wml_miniature_view_pane_g2

0x981d,	// (0x0003969a) wml_miniature_view_pane_g3

0x9825,	// (0x000396a2) wml_miniature_view_pane_g4

0x982d,	// (0x000396aa) wml_miniature_view_pane_g5

0x9835,	// (0x000396b2) wml_miniature_view_pane_g6

0x983d,	// (0x000396ba) wml_miniature_view_pane_g7

0x9845,	// (0x000396c2) wml_miniature_view_pane_g8

0x0007,

0xf6ae,	// (0x0003f52b) wml_miniature_view_pane_g

0x1218,	// (0x00031095) background_graphic_ParamLimits

0x1218,	// (0x00031095) background_graphic

0x1224,	// (0x000310a1) wml_tabs_2_pane

0x122d,	// (0x000310aa) wml_tabs_3_pane_ParamLimits

0x122d,	// (0x000310aa) wml_tabs_3_pane

0x123f,	// (0x000310bc) wml_tabs_4_pane_ParamLimits

0x123f,	// (0x000310bc) wml_tabs_4_pane

0x1255,	// (0x000310d2) wml_tabs_5_pane_ParamLimits

0x1255,	// (0x000310d2) wml_tabs_5_pane

0x126f,	// (0x000310ec) wml_tabs_pane_g2_ParamLimits

0x126f,	// (0x000310ec) wml_tabs_pane_g2

0x1283,	// (0x00031100) wml_tabs_pane_g3_ParamLimits

0x1283,	// (0x00031100) wml_tabs_pane_g3

0x984d,	// (0x000396ca) wml_tabs_2_active_pane_ParamLimits

0x984d,	// (0x000396ca) wml_tabs_2_active_pane

0x985d,	// (0x000396da) wml_tabs_2_passive_pane_ParamLimits

0x985d,	// (0x000396da) wml_tabs_2_passive_pane

0x986d,	// (0x000396ea) wml_tabs_3_active_pane_cp_ParamLimits

0x986d,	// (0x000396ea) wml_tabs_3_active_pane_cp

0x987e,	// (0x000396fb) wml_tabs_3_passive_pane_ParamLimits

0x987e,	// (0x000396fb) wml_tabs_3_passive_pane

0x988f,	// (0x0003970c) wml_tabs_3_passive_pane_cp_ParamLimits

0x988f,	// (0x0003970c) wml_tabs_3_passive_pane_cp

0x98a0,	// (0x0003971d) tabs_4_active_pane

0x98a8,	// (0x00039725) tabs_4_passive_pane

0x98b0,	// (0x0003972d) tabs_4_passive_pane_cp

0x98b8,	// (0x00039735) tabs_4_passive_pane_cp2

0x8e2f,	// (0x00038cac) aid_height_text

0x8633,	// (0x000384b0) mup_volume_cont_pane_ParamLimits

0x8633,	// (0x000384b0) mup_volume_cont_pane

0x6627,	// (0x000364a4) aid_size_cell_pinb

0xe036,	// (0x0003deb3) aid_size_list_pinb

0x97b2,	// (0x0003962f) mup2_volume_cont_pane_ParamLimits

0x97b2,	// (0x0003962f) mup2_volume_cont_pane

0x98c0,	// (0x0003973d) mup2_volume_cont_pane_g1_ParamLimits

0x98c0,	// (0x0003973d) mup2_volume_cont_pane_g1

0x62a0,	// (0x0003611d) aid_size_cell_touch_ParamLimits

0x62a0,	// (0x0003611d) aid_size_cell_touch

0x6507,	// (0x00036384) touch_pane_ParamLimits

0x6507,	// (0x00036384) touch_pane

0xd932,	// (0x0003d7af) main_rss2_pane

0x12d9,	// (0x00031156) listscroll_rss2_pane

0x12e2,	// (0x0003115f) rss2_navigation_pane

0x12ea,	// (0x00031167) list_rss2_pane

0xea58,	// (0x0003e8d5) scroll_pane_cp22

0x12f2,	// (0x0003116f) rss2_navigation_pane_g1

0x12fb,	// (0x00031178) rss2_navigation_pane_g2

0x1303,	// (0x00031180) rss2_navigation_pane_g3

0x0002,

0xf6bf,	// (0x0003f53c) rss2_navigation_pane_g

0x130b,	// (0x00031188) rss2_navigation_pane_t1

0x98f9,	// (0x00039776) rss2_list_single_pane_ParamLimits

0x98f9,	// (0x00039776) rss2_list_single_pane

0x1319,	// (0x00031196) rss2_list_single_pane_t2

0x1327,	// (0x000311a4) rss2_list_single_pane_t3_ParamLimits

0x1327,	// (0x000311a4) rss2_list_single_pane_t3

0x1344,	// (0x000311c1) rss2_list_single_pane_t4

0x7e07,	// (0x00037c84) smil_status_pane_g1

0xf0be,	// (0x0003ef3b) main_image2_pane_ParamLimits

0xf0be,	// (0x0003ef3b) main_image2_pane

0x94c5,	// (0x00039342) main_camera2_pane_g9_ParamLimits

0x94c5,	// (0x00039342) main_camera2_pane_g9

0x9519,	// (0x00039396) main_camera2_pane_t5_ParamLimits

0x9519,	// (0x00039396) main_camera2_pane_t5

0x952b,	// (0x000393a8) main_camera2_pane_t6_ParamLimits

0x952b,	// (0x000393a8) main_camera2_pane_t6

0x9935,	// (0x000397b2) main_image2_pane_g1_ParamLimits

0x9935,	// (0x000397b2) main_image2_pane_g1

0x8bc4,	// (0x00038a41) smil2_video_pane_ParamLimits

0x8bc4,	// (0x00038a41) smil2_video_pane

0x5136,	// (0x00034fb3) aid_zoom_text_primary_cp

0xd990,	// (0x0003d80d) popup_preview_fixed_window

0xe3cd,	// (0x0003e24a) im_reading_pane_g1

0x940f,	// (0x0003928c) cams2_bc_adjust_pane_cp_ParamLimits

0x940f,	// (0x0003928c) cams2_bc_adjust_pane_cp

0x955b,	// (0x000393d8) cams2_bc_adjust_pane_ParamLimits

0x955b,	// (0x000393d8) cams2_bc_adjust_pane

0x9941,	// (0x000397be) cams2_bc_adjust_pane_g1

0x9949,	// (0x000397c6) cams2_slider_pane

0x9952,	// (0x000397cf) cams2_slider_pane_g1

0x995b,	// (0x000397d8) cams2_slider_pane_g2

0x0006,

0xf6c6,	// (0x0003f543) cams2_slider_pane_g

0x66fd,	// (0x0003657a) calc_display_pane_ParamLimits

0x671b,	// (0x00036598) calc_paper_pane_ParamLimits

0x6737,	// (0x000365b4) grid_calc_pane_ParamLimits

0x80c0,	// (0x00037f3d) popup_clock_digital_window_t1_ParamLimits

0xee28,	// (0x0003eca5) main_image_pane_t1

0x66e3,	// (0x00036560) aid_size_cell_calc_ParamLimits

0x66e3,	// (0x00036560) aid_size_cell_calc

0x909c,	// (0x00038f19) popup_blid_sat_info2_window_ParamLimits

0x909c,	// (0x00038f19) popup_blid_sat_info2_window

0x138e,	// (0x0003120b) aid_size_cell_blid

0x1396,	// (0x00031213) bg_popup_window_pane_cp07

0x13b9,	// (0x00031236) grid_popup_blid_pane

0x13c3,	// (0x00031240) heading_pane_cp05_ParamLimits

0x13c3,	// (0x00031240) heading_pane_cp05

0x148d,	// (0x0003130a) cell_popup_blid_pane_ParamLimits

0x148d,	// (0x0003130a) cell_popup_blid_pane

0x14b3,	// (0x00031330) cell_popup_blid_pane_g1

0x14bb,	// (0x00031338) cell_popup_blid_pane_t1

0x9778,	// (0x000395f5) mup2_indicator_pane_ParamLimits

0x9778,	// (0x000395f5) mup2_indicator_pane

0xeba5,	// (0x0003ea22) mup2_visualizer_osc_pane

0x11f6,	// (0x00031073) mup2_visualizer_spec_pane_ParamLimits

0x11f6,	// (0x00031073) mup2_visualizer_spec_pane

0x9975,	// (0x000397f2) mup2_spec_half_pane

0x997e,	// (0x000397fb) mup2_spec_half_pane_cp

0x9988,	// (0x00039805) mup2_spec_bar_pane_ParamLimits

0x9988,	// (0x00039805) mup2_spec_bar_pane

0x1145,	// (0x00030fc2) mup2_spec_bar_pane_g1

0x114f,	// (0x00030fcc) mup2_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0003f4b6) mup2_spec_bar_pane_g

0x99a7,	// (0x00039824) mup2_osc_middle_pane

0x1161,	// (0x00030fde) mup2_visualizer_osc_pane_g1

0xd9ba,	// (0x0003d837) popup_number_entry_window_t1_ParamLimits

0xd9cd,	// (0x0003d84a) popup_number_entry_window_t2_ParamLimits

0xd9df,	// (0x0003d85c) popup_number_entry_window_t3_ParamLimits

0x655e,	// (0x000363db) popup_number_entry_window_t5_ParamLimits

0x655e,	// (0x000363db) popup_number_entry_window_t5

0xf0fb,	// (0x0003ef78) popup_number_entry_window_t_ParamLimits

0xd9f1,	// (0x0003d86e) text_title_cp2_ParamLimits

0x88ab,	// (0x00038728) aid_hotspot_pointer_text2_pane

0x8945,	// (0x000387c2) main_viewer_pane_g9_ParamLimits

0x8945,	// (0x000387c2) main_viewer_pane_g9

0xe5fc,	// (0x0003e479) cale_month_pane_t1_ParamLimits

0xe639,	// (0x0003e4b6) bg_cale_pane_ParamLimits

0xe651,	// (0x0003e4ce) list_cale_pane_ParamLimits

0xe255,	// (0x0003e0d2) listscroll_cale_day_pane_t1

0xe662,	// (0x0003e4df) scroll_pane_cp09_ParamLimits

0x8672,	// (0x000384ef) main_mup_eq_pane_t1_ParamLimits

0x8672,	// (0x000384ef) main_mup_eq_pane_t1

0x868c,	// (0x00038509) main_mup_eq_pane_t2_ParamLimits

0x868c,	// (0x00038509) main_mup_eq_pane_t2

0x86a4,	// (0x00038521) main_mup_eq_pane_t3_ParamLimits

0x86a4,	// (0x00038521) main_mup_eq_pane_t3

0x86bc,	// (0x00038539) main_mup_eq_pane_t4_ParamLimits

0x86bc,	// (0x00038539) main_mup_eq_pane_t4

0x86d4,	// (0x00038551) main_mup_eq_pane_t5_ParamLimits

0x86d4,	// (0x00038551) main_mup_eq_pane_t5

0x86ec,	// (0x00038569) main_mup_eq_pane_t6_ParamLimits

0x86ec,	// (0x00038569) main_mup_eq_pane_t6

0x8700,	// (0x0003857d) main_mup_eq_pane_t7_ParamLimits

0x8700,	// (0x0003857d) main_mup_eq_pane_t7

0x8714,	// (0x00038591) main_mup_eq_pane_t8_ParamLimits

0x8714,	// (0x00038591) main_mup_eq_pane_t8

0x872a,	// (0x000385a7) main_mup_eq_pane_t9_ParamLimits

0x872a,	// (0x000385a7) main_mup_eq_pane_t9

0x8742,	// (0x000385bf) main_mup_eq_pane_t10_ParamLimits

0x8742,	// (0x000385bf) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x0003f305) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x0003f305) main_mup_eq_pane_t

0x87ff,	// (0x0003867c) mup_equalizer_pane_cp5_ParamLimits

0x8815,	// (0x00038692) mup_equalizer_pane_cp6_ParamLimits

0x882d,	// (0x000386aa) mup_equalizer_pane_cp7_ParamLimits

0xd932,	// (0x0003d7af) main_gallery_pane

0x116a,	// (0x00030fe7) smil2_volume_pane

0x1185,	// (0x00031002) smil_status_volume_pane_g1_ParamLimits

0x1172,	// (0x00030fef) smil_status_volume_pane_g2_ParamLimits

0x9286,	// (0x00039103) smil_status_volume_pane_g3_ParamLimits

0xf63e,	// (0x0003f4bb) smil_status_volume_pane_g_ParamLimits

0x1396,	// (0x00031213) bg_popup_window_pane_cp07_ParamLimits

0x13a4,	// (0x00031221) blid_firmament_pane

0x99b0,	// (0x0003982d) aid_size_cell_gallery_ParamLimits

0x99b0,	// (0x0003982d) aid_size_cell_gallery

0x99be,	// (0x0003983b) grid_gallery_pane_ParamLimits

0x99be,	// (0x0003983b) grid_gallery_pane

0x99ce,	// (0x0003984b) cell_gallery_pane_ParamLimits

0x99ce,	// (0x0003984b) cell_gallery_pane

0x14c9,	// (0x00031346) bg_cell_gallery_focus_pane_ParamLimits

0x14c9,	// (0x00031346) bg_cell_gallery_focus_pane

0x14db,	// (0x00031358) cell_gallery_pane_g1_ParamLimits

0x14db,	// (0x00031358) cell_gallery_pane_g1

0x9a1c,	// (0x00039899) cell_gallery_pane_g2_ParamLimits

0x9a1c,	// (0x00039899) cell_gallery_pane_g2

0x9a29,	// (0x000398a6) cell_gallery_pane_g3_ParamLimits

0x9a29,	// (0x000398a6) cell_gallery_pane_g3

0x14e7,	// (0x00031364) cell_gallery_pane_g4_ParamLimits

0x14e7,	// (0x00031364) cell_gallery_pane_g4

0x0003,

0xf6ec,	// (0x0003f569) cell_gallery_pane_g_ParamLimits

0xf6ec,	// (0x0003f569) cell_gallery_pane_g

0x14f3,	// (0x00031370) bg_cell_gallery_focus_pane_g1

0x14fb,	// (0x00031378) bg_cell_gallery_focus_pane_g2

0x1503,	// (0x00031380) bg_cell_gallery_focus_pane_g3

0x150b,	// (0x00031388) bg_cell_gallery_focus_pane_g4

0x1513,	// (0x00031390) bg_cell_gallery_focus_pane_g5

0x151b,	// (0x00031398) bg_cell_gallery_focus_pane_g6

0x1523,	// (0x000313a0) bg_cell_gallery_focus_pane_g7

0x152b,	// (0x000313a8) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f5,	// (0x0003f572) bg_cell_gallery_focus_pane_g

0x1533,	// (0x000313b0) aid_firma_cardinal

0x1547,	// (0x000313c4) blid_firmament_pane_t1

0x155e,	// (0x000313db) blid_firmament_pane_t2

0x1575,	// (0x000313f2) blid_firmament_pane_t3

0x158c,	// (0x00031409) blid_firmament_pane_t4

0x0003,

0xf706,	// (0x0003f583) blid_firmament_pane_t

0x15a3,	// (0x00031420) blid_sat_info_pane

0x15b3,	// (0x00031430) blid_sat_info_pane_g1

0x15b3,	// (0x00031430) blid_sat_info_pane_g2

0x0001,

0xf70f,	// (0x0003f58c) blid_sat_info_pane_g

0x15bd,	// (0x0003143a) blid_sat_info_pane_t1

0x15cb,	// (0x00031448) smil2_volume_content_pane

0x15d4,	// (0x00031451) smil2_volume_pane_g1

0x15dc,	// (0x00031459) smil2_volume_content_pane_g1

0x15e5,	// (0x00031462) smil2_volume_content_pane_g2

0x15ee,	// (0x0003146b) smil2_volume_content_pane_g3

0x15f7,	// (0x00031474) smil2_volume_content_pane_g4

0x1600,	// (0x0003147d) smil2_volume_content_pane_g5

0x1609,	// (0x00031486) smil2_volume_content_pane_g6

0x1612,	// (0x0003148f) smil2_volume_content_pane_g7

0x161b,	// (0x00031498) smil2_volume_content_pane_g8

0x1624,	// (0x000314a1) smil2_volume_content_pane_g9

0x162d,	// (0x000314aa) smil2_volume_content_pane_g10

0x0009,

0xf714,	// (0x0003f591) smil2_volume_content_pane_g

0x6c87,	// (0x00036b04) cale_week_day_heading_pane_t1_ParamLimits

0x6c9b,	// (0x00036b18) cale_week_day_heading_pane_t2_ParamLimits

0x6caf,	// (0x00036b2c) cale_week_day_heading_pane_t3_ParamLimits

0x6cc3,	// (0x00036b40) cale_week_day_heading_pane_t4_ParamLimits

0x6cd7,	// (0x00036b54) cale_week_day_heading_pane_t5_ParamLimits

0x6ceb,	// (0x00036b68) cale_week_day_heading_pane_t6_ParamLimits

0x6cff,	// (0x00036b7c) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x0003f07d) cale_week_day_heading_pane_t_ParamLimits

0xe267,	// (0x0003e0e4) bg_cale_side_pane_ParamLimits

0x6d13,	// (0x00036b90) cale_week_time_pane_t1_ParamLimits

0x6d2b,	// (0x00036ba8) cale_week_time_pane_t2_ParamLimits

0x6d43,	// (0x00036bc0) cale_week_time_pane_t3_ParamLimits

0x6d5b,	// (0x00036bd8) cale_week_time_pane_t4_ParamLimits

0x6d73,	// (0x00036bf0) cale_week_time_pane_t5_ParamLimits

0x6d8b,	// (0x00036c08) cale_week_time_pane_t6_ParamLimits

0x6da3,	// (0x00036c20) cale_week_time_pane_t7_ParamLimits

0x6dbb,	// (0x00036c38) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x0003f08c) cale_week_time_pane_t_ParamLimits

0x6dd3,	// (0x00036c50) cell_cale_week_pane_g2_ParamLimits

0xe267,	// (0x0003e0e4) bg_cale_side_pane_cp01_ParamLimits

0x7c94,	// (0x00037b11) cale_month_week_pane_t1_ParamLimits

0x7cab,	// (0x00037b28) cale_month_week_pane_t2_ParamLimits

0x7cc2,	// (0x00037b3f) cale_month_week_pane_t3_ParamLimits

0x7cd9,	// (0x00037b56) cale_month_week_pane_t4_ParamLimits

0x7cf0,	// (0x00037b6d) cale_month_week_pane_t5_ParamLimits

0x7d07,	// (0x00037b84) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x0003f165) cale_month_week_pane_t_ParamLimits

0x7dd4,	// (0x00037c51) cell_cale_month_pane_g1_ParamLimits

0xd932,	// (0x0003d7af) main_cale_event_viewer_pane

0xd932,	// (0x0003d7af) listscroll_cale_event_viewer_pane

0x1636,	// (0x000314b3) list_cale_ev_pane

0x163e,	// (0x000314bb) scroll_pane_cp023

0x164a,	// (0x000314c7) field_cale_ev_pane_ParamLimits

0x164a,	// (0x000314c7) field_cale_ev_pane

0x1664,	// (0x000314e1) field_cale_ev_content_pane_ParamLimits

0x1664,	// (0x000314e1) field_cale_ev_content_pane

0x1670,	// (0x000314ed) field_cale_ev_pane_g1_ParamLimits

0x1670,	// (0x000314ed) field_cale_ev_pane_g1

0x167c,	// (0x000314f9) field_cale_ev_pane_g2_ParamLimits

0x167c,	// (0x000314f9) field_cale_ev_pane_g2

0x1694,	// (0x00031511) field_cale_ev_pane_g3_ParamLimits

0x1694,	// (0x00031511) field_cale_ev_pane_g3

0x0002,

0xf729,	// (0x0003f5a6) field_cale_ev_pane_g_ParamLimits

0xf729,	// (0x0003f5a6) field_cale_ev_pane_g

0x16ac,	// (0x00031529) field_cale_ev_pane_t1_ParamLimits

0x16ac,	// (0x00031529) field_cale_ev_pane_t1

0x16c3,	// (0x00031540) field_cale_ev_content_pane_t1_ParamLimits

0x16c3,	// (0x00031540) field_cale_ev_content_pane_t1

0xed0e,	// (0x0003eb8b) bg_button_pane_cp01

0xe115,	// (0x0003df92) listscroll_cale_week_pane_ParamLimits

0x6ab0,	// (0x0003692d) popup_toolbar_window_cp01

0xe255,	// (0x0003e0d2) listscroll_cale_week_pane_t1_ParamLimits

0xe115,	// (0x0003df92) listscroll_cale_day_pane_ParamLimits

0x6ab0,	// (0x0003692d) popup_toolbar_window_cp02

0xe255,	// (0x0003e0d2) listscroll_cale_day_pane_t1_ParamLimits

0xe115,	// (0x0003df92) main_cale_month_pane_ParamLimits

0x9160,	// (0x00038fdd) popup_toolbar_window_cp03_ParamLimits

0x9160,	// (0x00038fdd) popup_toolbar_window_cp03

0x8ad6,	// (0x00038953) main_image_pane_g2_ParamLimits

0x8ad6,	// (0x00038953) main_image_pane_g2

0x8ae2,	// (0x0003895f) main_image_pane_g3_ParamLimits

0x8ae2,	// (0x0003895f) main_image_pane_g3

0x0002,

0xf51a,	// (0x0003f397) main_image_pane_g_ParamLimits

0xf51a,	// (0x0003f397) main_image_pane_g

0xee28,	// (0x0003eca5) main_image_pane_t1_ParamLimits

0x8aee,	// (0x0003896b) main_image_pane_t2_ParamLimits

0x8aee,	// (0x0003896b) main_image_pane_t2

0x8b00,	// (0x0003897d) main_image_pane_t3_ParamLimits

0x8b00,	// (0x0003897d) main_image_pane_t3

0x8b12,	// (0x0003898f) main_image_pane_t4_ParamLimits

0x8b12,	// (0x0003898f) main_image_pane_t4

0x0003,

0xf521,	// (0x0003f39e) main_image_pane_t_ParamLimits

0xf521,	// (0x0003f39e) main_image_pane_t

0x8b24,	// (0x000389a1) popup_image_details_window_cp01

0x8b2e,	// (0x000389ab) popup_toobar_trans_pane_cp01_ParamLimits

0x8b2e,	// (0x000389ab) popup_toobar_trans_pane_cp01

0x90e5,	// (0x00038f62) popup_image_details_window_ParamLimits

0x90e5,	// (0x00038f62) popup_image_details_window

0x10cb,	// (0x00030f48) popup_image_focus_window

0x9401,	// (0x0003927e) camera2_autofocus_pane_ParamLimits

0x9401,	// (0x0003927e) camera2_autofocus_pane

0xd932,	// (0x0003d7af) bg_popup_sub_pane_cp06

0x16e0,	// (0x0003155d) popup_image_focus_window_g1

0x16e8,	// (0x00031565) popup_image_focus_window_g2

0x16f0,	// (0x0003156d) popup_image_focus_window_g3

0x16f8,	// (0x00031575) popup_image_focus_window_g4

0x0003,

0xf730,	// (0x0003f5ad) popup_image_focus_window_g

0x1700,	// (0x0003157d) popup_image_focus_window_t1

0x170e,	// (0x0003158b) popup_image_focus_window_t2

0x171e,	// (0x0003159b) popup_image_focus_window_t3

0x0002,

0xf739,	// (0x0003f5b6) popup_image_focus_window_t

0x172c,	// (0x000315a9) camera2_autofocus_pane_g1

0xf0be,	// (0x0003ef3b) bg_tb_trans_pane_cp01

0x173a,	// (0x000315b7) popup_image_details_window_g1

0x174d,	// (0x000315ca) popup_image_details_window_g2

0x0002,

0xf74b,	// (0x0003f5c8) popup_image_details_window_g

0x1776,	// (0x000315f3) popup_image_details_window_t1

0x1788,	// (0x00031605) popup_image_details_window_t2

0x17a1,	// (0x0003161e) popup_image_details_window_t3

0x17b5,	// (0x00031632) popup_image_details_window_t4

0x17d0,	// (0x0003164d) popup_image_details_window_t5

0x0004,

0xf752,	// (0x0003f5cf) popup_image_details_window_t

0xe101,	// (0x0003df7e) bg_calc_paper_pane_ParamLimits

0xd932,	// (0x0003d7af) grid_highlight_pane_cp013

0x6830,	// (0x000366ad) list_calc_pane_ParamLimits

0x6842,	// (0x000366bf) scroll_pane_cp024

0xe115,	// (0x0003df92) bg_calc_display_pane_ParamLimits

0x684a,	// (0x000366c7) calc_display_pane_t1_ParamLimits

0x685f,	// (0x000366dc) calc_display_pane_t2_ParamLimits

0x6874,	// (0x000366f1) calc_display_pane_t3_ParamLimits

0xf182,	// (0x0003efff) calc_display_pane_t_ParamLimits

0x695b,	// (0x000367d8) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x0003f01c) cell_calc_pane_g

0x6964,	// (0x000367e1) cell_calc_pane_t1

0xe174,	// (0x0003dff1) grid_highlight_pane_cp02_ParamLimits

0xe18a,	// (0x0003e007) toolbar_button_pane_cp01_ParamLimits

0xe18a,	// (0x0003e007) toolbar_button_pane_cp01

0xee6d,	// (0x0003ecea) temp_image_control_pane_ParamLimits

0xee6d,	// (0x0003ecea) temp_image_control_pane

0xf0be,	// (0x0003ef3b) main_mp3_pane

0x17ea,	// (0x00031667) temp_image_control_pane_g1_ParamLimits

0x17ea,	// (0x00031667) temp_image_control_pane_g1

0x17f8,	// (0x00031675) temp_image_control_pane_g2_ParamLimits

0x17f8,	// (0x00031675) temp_image_control_pane_g2

0x180a,	// (0x00031687) temp_image_control_pane_g3_ParamLimits

0x180a,	// (0x00031687) temp_image_control_pane_g3

0x9a66,	// (0x000398e3) temp_image_control_pane_g4_ParamLimits

0x9a66,	// (0x000398e3) temp_image_control_pane_g4

0x0003,

0xf75d,	// (0x0003f5da) temp_image_control_pane_g_ParamLimits

0xf75d,	// (0x0003f5da) temp_image_control_pane_g

0x17ea,	// (0x00031667) main_mp3_pane_g1

0x9a77,	// (0x000398f4) main_mp3_pane_g2

0x0007,

0xf766,	// (0x0003f5e3) main_mp3_pane_g

0x184d,	// (0x000316ca) main_mp3_pane_t1

0xe2d6,	// (0x0003e153) main_camera_pane_g8_ParamLimits

0xe2d6,	// (0x0003e153) main_camera_pane_g8

0x7063,	// (0x00036ee0) main_video_pane_g7_ParamLimits

0x7063,	// (0x00036ee0) main_video_pane_g7

0x9549,	// (0x000393c6) main_camera2_pane_t7_ParamLimits

0x9549,	// (0x000393c6) main_camera2_pane_t7

0xe424,	// (0x0003e2a1) scroll_pane_cp025_ParamLimits

0xe424,	// (0x0003e2a1) scroll_pane_cp025

0xe438,	// (0x0003e2b5) scroll_pane_cp026_ParamLimits

0xe438,	// (0x0003e2b5) scroll_pane_cp026

0xe447,	// (0x0003e2c4) wml_content_pane_ParamLimits

0xd932,	// (0x0003d7af) main_touch_calib_pane

0x9b1b,	// (0x00039998) main_touch_calib_pane_g1

0x9b27,	// (0x000399a4) main_touch_calib_pane_g2

0x9b33,	// (0x000399b0) main_touch_calib_pane_g3

0x9b3f,	// (0x000399bc) main_touch_calib_pane_g4

0x0003,

0xf784,	// (0x0003f601) main_touch_calib_pane_g

0x9b4b,	// (0x000399c8) main_touch_calib_pane_t1

0x9b62,	// (0x000399df) main_touch_calib_pane_t2

0x0004,

0xf78d,	// (0x0003f60a) main_touch_calib_pane_t

0xeae6,	// (0x0003e963) mup_progress_pane_cp02

0xeb05,	// (0x0003e982) navi_pane_g1

0xeb67,	// (0x0003e9e4) navi_pane_mp_t3

0xf0be,	// (0x0003ef3b) main_mp3_pane_ParamLimits

0x919e,	// (0x0003901b) navi_pane_ParamLimits

0x17ea,	// (0x00031667) main_mp3_pane_g1_ParamLimits

0x9a77,	// (0x000398f4) main_mp3_pane_g2_ParamLimits

0x9a83,	// (0x00039900) main_mp3_pane_g3_ParamLimits

0x9a83,	// (0x00039900) main_mp3_pane_g3

0x9a8f,	// (0x0003990c) main_mp3_pane_g4_ParamLimits

0x9a8f,	// (0x0003990c) main_mp3_pane_g4

0x181a,	// (0x00031697) main_mp3_pane_g5_ParamLimits

0x181a,	// (0x00031697) main_mp3_pane_g5

0x1828,	// (0x000316a5) main_mp3_pane_g6_ParamLimits

0x1828,	// (0x000316a5) main_mp3_pane_g6

0x1835,	// (0x000316b2) main_mp3_pane_g7_ParamLimits

0x1835,	// (0x000316b2) main_mp3_pane_g7

0x1841,	// (0x000316be) main_mp3_pane_g8_ParamLimits

0x1841,	// (0x000316be) main_mp3_pane_g8

0xf766,	// (0x0003f5e3) main_mp3_pane_g_ParamLimits

0x9a9b,	// (0x00039918) main_mp3_pane_t2

0x9aab,	// (0x00039928) main_mp3_pane_t3

0x185b,	// (0x000316d8) main_mp3_pane_t4

0x1869,	// (0x000316e6) main_mp3_pane_t5

0x0005,

0xf777,	// (0x0003f5f4) main_mp3_pane_t

0x1877,	// (0x000316f4) mup_progress_pane_cp01

0x5136,	// (0x00034fb3) aid_zoom_text_secondary2

0x1636,	// (0x000314b3) list_cale_ev2_pane

0x163e,	// (0x000314bb) scroll_pane_cp023_ParamLimits

0x9bb5,	// (0x00039a32) field_cale_ev2_pane_ParamLimits

0x9bb5,	// (0x00039a32) field_cale_ev2_pane

0x5433,	// (0x000352b0) field_cale_ev2_pane_g1_ParamLimits

0x5433,	// (0x000352b0) field_cale_ev2_pane_g1

0x543f,	// (0x000352bc) field_cale_ev2_pane_g2_ParamLimits

0x543f,	// (0x000352bc) field_cale_ev2_pane_g2

0x5457,	// (0x000352d4) field_cale_ev2_pane_g3_ParamLimits

0x5457,	// (0x000352d4) field_cale_ev2_pane_g3

0x0003,

0xf798,	// (0x0003f615) field_cale_ev2_pane_g_ParamLimits

0xf798,	// (0x0003f615) field_cale_ev2_pane_g

0x547b,	// (0x000352f8) field_cale_ev2_pane_t1_ParamLimits

0x547b,	// (0x000352f8) field_cale_ev2_pane_t1

0x5492,	// (0x0003530f) field_cale_ev2_pane_t2_ParamLimits

0x5492,	// (0x0003530f) field_cale_ev2_pane_t2

0x0001,

0xf7a1,	// (0x0003f61e) field_cale_ev2_pane_t_ParamLimits

0xf7a1,	// (0x0003f61e) field_cale_ev2_pane_t

0x89ad,	// (0x0003882a) main_postcard_pane_g5_ParamLimits

0x89ad,	// (0x0003882a) main_postcard_pane_g5

0x89bb,	// (0x00038838) main_postcard_pane_g6_ParamLimits

0x89bb,	// (0x00038838) main_postcard_pane_g6

0x6ea3,	// (0x00036d20) camera2_autofocus_pane_cp_ParamLimits

0x6ea3,	// (0x00036d20) camera2_autofocus_pane_cp

0xf0be,	// (0x0003ef3b) main_mup3_pane

0x9c09,	// (0x00039a86) main_mup3_pane_g1_ParamLimits

0x9c09,	// (0x00039a86) main_mup3_pane_g1

0x9c2a,	// (0x00039aa7) main_mup3_pane_g2_ParamLimits

0x9c2a,	// (0x00039aa7) main_mup3_pane_g2

0x9ca5,	// (0x00039b22) main_mup3_pane_g3_ParamLimits

0x9ca5,	// (0x00039b22) main_mup3_pane_g3

0x9ce4,	// (0x00039b61) main_mup3_pane_g4_ParamLimits

0x9ce4,	// (0x00039b61) main_mup3_pane_g4

0x9d23,	// (0x00039ba0) main_mup3_pane_g5_ParamLimits

0x9d23,	// (0x00039ba0) main_mup3_pane_g5

0x9d64,	// (0x00039be1) main_mup3_pane_g6_ParamLimits

0x9d64,	// (0x00039be1) main_mup3_pane_g6

0x18b7,	// (0x00031734) main_mup3_pane_g7_ParamLimits

0x18b7,	// (0x00031734) main_mup3_pane_g7

0x0007,

0xf7b1,	// (0x0003f62e) main_mup3_pane_g_ParamLimits

0xf7b1,	// (0x0003f62e) main_mup3_pane_g

0x9dd6,	// (0x00039c53) main_mup3_pane_t1_ParamLimits

0x9dd6,	// (0x00039c53) main_mup3_pane_t1

0x9e45,	// (0x00039cc2) main_mup3_pane_t2_ParamLimits

0x9e45,	// (0x00039cc2) main_mup3_pane_t2

0x9f0e,	// (0x00039d8b) main_mup3_pane_t4_ParamLimits

0x9f0e,	// (0x00039d8b) main_mup3_pane_t4

0x9f60,	// (0x00039ddd) main_mup3_pane_t5_ParamLimits

0x9f60,	// (0x00039ddd) main_mup3_pane_t5

0xa008,	// (0x00039e85) main_mup3_pane_t6_ParamLimits

0xa008,	// (0x00039e85) main_mup3_pane_t6

0x0005,

0xf7c2,	// (0x0003f63f) main_mup3_pane_t_ParamLimits

0xf7c2,	// (0x0003f63f) main_mup3_pane_t

0xa0b0,	// (0x00039f2d) mup3_progress_pane_ParamLimits

0xa0b0,	// (0x00039f2d) mup3_progress_pane

0xa115,	// (0x00039f92) popup_mup3_control_window_ParamLimits

0xa115,	// (0x00039f92) popup_mup3_control_window

0x18c5,	// (0x00031742) popup_mup3_text_window

0xa12e,	// (0x00039fab) mup3_progress_pane_t1

0xa145,	// (0x00039fc2) mup3_progress_pane_t2

0x18cd,	// (0x0003174a) mup3_progress_pane_t3

0x0002,

0xf7cf,	// (0x0003f64c) mup3_progress_pane_t

0x18e4,	// (0x00031761) mup_progress_pane_cp03

0xd932,	// (0x0003d7af) bg_tb_trans_pane_cp04

0xa15c,	// (0x00039fd9) mup3_volume_pane

0xa164,	// (0x00039fe1) popup_mup3_control_window_g1

0xa16d,	// (0x00039fea) mup3_volume_pane_g1

0xa176,	// (0x00039ff3) mup3_volume_pane_g2

0xa17f,	// (0x00039ffc) mup3_volume_pane_g3

0x0002,

0xf7d6,	// (0x0003f653) mup3_volume_pane_g

0xd932,	// (0x0003d7af) bg_tb_trans_pane_cp03

0x18f4,	// (0x00031771) popup_mup3_text_window_g1

0x18fc,	// (0x00031779) popup_mup3_text_window_t1

0xe15d,	// (0x0003dfda) list_calc_item_pane_g1_ParamLimits

0x12c0,	// (0x0003113d) mup_volume_pane_cp_g1

0x9b79,	// (0x000399f6) main_touch_calib_pane_t3

0x9b8d,	// (0x00039a0a) main_touch_calib_pane_t4

0x9ba1,	// (0x00039a1e) main_touch_calib_pane_t5

0xd93c,	// (0x0003d7b9) aid_cell_size_toolbar2

0xd944,	// (0x0003d7c1) aid_popup3_width_pane

0x512e,	// (0x00034fab) aid_zoom_text_msg_primary

0x6e8d,	// (0x00036d0a) vorec_t7

0xe121,	// (0x0003df9e) bg_calc_paper_pane_g1_ParamLimits

0xe12d,	// (0x0003dfaa) bg_calc_paper_pane_g2_ParamLimits

0xe139,	// (0x0003dfb6) bg_calc_paper_pane_g3_ParamLimits

0xe145,	// (0x0003dfc2) bg_calc_paper_pane_g4_ParamLimits

0xe151,	// (0x0003dfce) bg_calc_paper_pane_g5_ParamLimits

0x68b3,	// (0x00036730) bg_calc_paper_pane_g6_ParamLimits

0x68c4,	// (0x00036741) bg_calc_paper_pane_g7_ParamLimits

0x68d5,	// (0x00036752) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x0003f006) bg_calc_paper_pane_g_ParamLimits

0x68e6,	// (0x00036763) calc_bg_paper_pane_g9_ParamLimits

0x6f8c,	// (0x00036e09) image_qvga_pane_ParamLimits

0x6f8c,	// (0x00036e09) image_qvga_pane

0xe006,	// (0x0003de83) bg_popup_sub_pane_cp04_ParamLimits

0xeda4,	// (0x0003ec21) popup_mup_playback_window_g1_ParamLimits

0xedb0,	// (0x0003ec2d) popup_mup_playback_window_t1_ParamLimits

0xedc5,	// (0x0003ec42) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x0003f392) popup_mup_playback_window_t_ParamLimits

0x9678,	// (0x000394f5) main_mup2_pane_g3_ParamLimits

0x9678,	// (0x000394f5) main_mup2_pane_g3

0x71db,	// (0x00037058) popup_toolbar_window_cp04

0x02c1,	// (0x0003013e) popup_call2_audio_second_window_g3_ParamLimits

0x02c1,	// (0x0003013e) popup_call2_audio_second_window_g3

0x06cb,	// (0x00030548) popup_call2_audio_first_window_g4_ParamLimits

0x06cb,	// (0x00030548) popup_call2_audio_first_window_g4

0x0d4a,	// (0x00030bc7) popup_call2_audio_in_window_g4_ParamLimits

0x0d4a,	// (0x00030bc7) popup_call2_audio_in_window_g4

0x8ac9,	// (0x00038946) aid_area_sk_bg_cut_ParamLimits

0x8ac9,	// (0x00038946) aid_area_sk_bg_cut

0xedda,	// (0x0003ec57) aid_area_sk_bg_cut_2_ParamLimits

0xedda,	// (0x0003ec57) aid_area_sk_bg_cut_2

0x9a0c,	// (0x00039889) aid_placing_details_win

0x9a14,	// (0x00039891) aid_placing_details_win_2

0x172c,	// (0x000315a9) camera2_autofocus_pane_g1_ParamLimits

0x64a7,	// (0x00036324) popup_fixed_preview_cale_window_ParamLimits

0x64a7,	// (0x00036324) popup_fixed_preview_cale_window

0xebb6,	// (0x0003ea33) navi_slider_pane_g3

0xebbf,	// (0x0003ea3c) navi_slider_pane_g4

0xebc8,	// (0x0003ea45) navi_slider_pane_g5

0xebb6,	// (0x0003ea33) navi_slider_pane_g6

0x8406,	// (0x00038283) navi_slider_pane_g7

0xecdb,	// (0x0003eb58) mup_scale_pane_g3

0xece4,	// (0x0003eb61) mup_scale_pane_g4

0xeced,	// (0x0003eb6a) mup_scale_pane_g5

0x8845,	// (0x000386c2) mup_scale_pane_g6

0x884e,	// (0x000386cb) mup_scale_pane_g7

0xebb6,	// (0x0003ea33) cams2_slider_pane_g3

0x1375,	// (0x000311f2) cams2_slider_pane_g4

0x9964,	// (0x000397e1) cams2_slider_pane_g5

0xebb6,	// (0x0003ea33) cams2_slider_pane_g6

0x996c,	// (0x000397e9) cams2_slider_pane_g7

0x15b3,	// (0x00031430) camera2_autofocus_pane_cp_g1

0x190a,	// (0x00031787) bg_popup_preview_window_pane_cp02_ParamLimits

0x190a,	// (0x00031787) bg_popup_preview_window_pane_cp02

0x1916,	// (0x00031793) list_fp_cale_pane_ParamLimits

0x1916,	// (0x00031793) list_fp_cale_pane

0x1922,	// (0x0003179f) popup_fixed_preview_cale_window_t1_ParamLimits

0x1922,	// (0x0003179f) popup_fixed_preview_cale_window_t1

0xa188,	// (0x0003a005) popup_fixed_preview_cale_window_t2_ParamLimits

0xa188,	// (0x0003a005) popup_fixed_preview_cale_window_t2

0xa19d,	// (0x0003a01a) popup_fixed_preview_cale_window_t3_ParamLimits

0xa19d,	// (0x0003a01a) popup_fixed_preview_cale_window_t3

0x0002,

0xf7dd,	// (0x0003f65a) popup_fixed_preview_cale_window_t_ParamLimits

0xf7dd,	// (0x0003f65a) popup_fixed_preview_cale_window_t

0xa1b2,	// (0x0003a02f) list_single_fp_cale_pane_ParamLimits

0xa1b2,	// (0x0003a02f) list_single_fp_cale_pane

0x1940,	// (0x000317bd) list_single_fp_cale_pane_g1_ParamLimits

0x1940,	// (0x000317bd) list_single_fp_cale_pane_g1

0x194c,	// (0x000317c9) list_single_fp_cale_pane_g2_ParamLimits

0x194c,	// (0x000317c9) list_single_fp_cale_pane_g2

0x0002,

0xf7e4,	// (0x0003f661) list_single_fp_cale_pane_g_ParamLimits

0xf7e4,	// (0x0003f661) list_single_fp_cale_pane_g

0x1965,	// (0x000317e2) list_single_fp_cale_pane_t1_ParamLimits

0x1965,	// (0x000317e2) list_single_fp_cale_pane_t1

0x1977,	// (0x000317f4) list_single_fp_cale_pane_t2_ParamLimits

0x1977,	// (0x000317f4) list_single_fp_cale_pane_t2

0x0001,

0xf7eb,	// (0x0003f668) list_single_fp_cale_pane_t_ParamLimits

0xf7eb,	// (0x0003f668) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd932,	// (0x0003d7af) main_dialer_pane

0xa1c6,	// (0x0003a043) aid_cell_size_keypad

0xa1d0,	// (0x0003a04d) dialer_ne_pane

0xa1da,	// (0x0003a057) grid_dialer_command_1_pane

0xa1e2,	// (0x0003a05f) grid_dialer_command_2_pane

0xa1ea,	// (0x0003a067) grid_dialer_keypad_pane

0xa1fe,	// (0x0003a07b) bg_popup_call_pane_cp06_ParamLimits

0xa1fe,	// (0x0003a07b) bg_popup_call_pane_cp06

0xa20a,	// (0x0003a087) dialer_ne_clear_pane_ParamLimits

0xa20a,	// (0x0003a087) dialer_ne_clear_pane

0x19aa,	// (0x00031827) dialer_ne_pane_g1

0x19b2,	// (0x0003182f) dialer_ne_pane_t1_ParamLimits

0x19b2,	// (0x0003182f) dialer_ne_pane_t1

0xa216,	// (0x0003a093) dialer_ne_pane_t2_ParamLimits

0xa216,	// (0x0003a093) dialer_ne_pane_t2

0xa233,	// (0x0003a0b0) dialer_ne_pane_t3_ParamLimits

0xa233,	// (0x0003a0b0) dialer_ne_pane_t3

0x0002,

0xf7f0,	// (0x0003f66d) dialer_ne_pane_t_ParamLimits

0xf7f0,	// (0x0003f66d) dialer_ne_pane_t

0xa257,	// (0x0003a0d4) dialer_ne_pane_t3_copy1_ParamLimits

0xa257,	// (0x0003a0d4) dialer_ne_pane_t3_copy1

0xa27b,	// (0x0003a0f8) cell_dialer_keypad_pane_ParamLimits

0xa27b,	// (0x0003a0f8) cell_dialer_keypad_pane

0xa292,	// (0x0003a10f) cell_dialer_command_1_pane_ParamLimits

0xa292,	// (0x0003a10f) cell_dialer_command_1_pane

0xa2a8,	// (0x0003a125) cell_dialer_command_2_pane_ParamLimits

0xa2a8,	// (0x0003a125) cell_dialer_command_2_pane

0x19c4,	// (0x00031841) bg_button_pane_cp02_ParamLimits

0x19c4,	// (0x00031841) bg_button_pane_cp02

0xa2b7,	// (0x0003a134) cell_dialer_keypad_pane_g1_ParamLimits

0xa2b7,	// (0x0003a134) cell_dialer_keypad_pane_g1

0x19c4,	// (0x00031841) bg_button_pane_cp03_ParamLimits

0x19c4,	// (0x00031841) bg_button_pane_cp03

0xa2cc,	// (0x0003a149) cell_dialer_command_1_pane_g1_ParamLimits

0xa2cc,	// (0x0003a149) cell_dialer_command_1_pane_g1

0x19d0,	// (0x0003184d) bg_button_pane_cp04

0xa2df,	// (0x0003a15c) cell_dialer_command_2_pane_g1

0xeba5,	// (0x0003ea22) bg_button_pane_cp06

0x19d8,	// (0x00031855) dialer_ne_clear_pane_g1

0x8349,	// (0x000381c6) navi_pane_g2

0x8377,	// (0x000381f4) navi_pane_g3

0x0002,

0xf418,	// (0x0003f295) navi_pane_g

0x83a2,	// (0x0003821f) navi_pane_mv_g2

0x83c9,	// (0x00038246) navi_pane_mv_g5

0x83d1,	// (0x0003824e) navi_pane_mv_t1

0xe115,	// (0x0003df92) main_clock2_pane

0xa30d,	// (0x0003a18a) main_clock2_list_pane_ParamLimits

0xa30d,	// (0x0003a18a) main_clock2_list_pane

0xa335,	// (0x0003a1b2) main_clock2_pane_t1_ParamLimits

0xa335,	// (0x0003a1b2) main_clock2_pane_t1

0xa365,	// (0x0003a1e2) main_clock2_pane_t2_ParamLimits

0xa365,	// (0x0003a1e2) main_clock2_pane_t2

0x0004,

0xf7f7,	// (0x0003f674) main_clock2_pane_t_ParamLimits

0xf7f7,	// (0x0003f674) main_clock2_pane_t

0xa3cc,	// (0x0003a249) popup_clock_analogue_window_cp03_ParamLimits

0xa3cc,	// (0x0003a249) popup_clock_analogue_window_cp03

0xa3ec,	// (0x0003a269) popup_clock_digital_window_cp02_ParamLimits

0xa3ec,	// (0x0003a269) popup_clock_digital_window_cp02

0xa461,	// (0x0003a2de) main_clock2_list_single_pane_ParamLimits

0xa461,	// (0x0003a2de) main_clock2_list_single_pane

0xeba5,	// (0x0003ea22) list_highlight_pane_cp05

0x19e0,	// (0x0003185d) main_clock2_list_single_pane_t1

0x71db,	// (0x00037058) popup_toolbar_window_cp04_ParamLimits

0x9a36,	// (0x000398b3) camera2_autofocus_pane_g2_ParamLimits

0x9a36,	// (0x000398b3) camera2_autofocus_pane_g2

0x9a42,	// (0x000398bf) camera2_autofocus_pane_g3_ParamLimits

0x9a42,	// (0x000398bf) camera2_autofocus_pane_g3

0x9a4e,	// (0x000398cb) camera2_autofocus_pane_g4_ParamLimits

0x9a4e,	// (0x000398cb) camera2_autofocus_pane_g4

0x9a5a,	// (0x000398d7) camera2_autofocus_pane_g5_ParamLimits

0x9a5a,	// (0x000398d7) camera2_autofocus_pane_g5

0x0004,

0xf740,	// (0x0003f5bd) camera2_autofocus_pane_g_ParamLimits

0xf740,	// (0x0003f5bd) camera2_autofocus_pane_g

0x9be9,	// (0x00039a66) camera2_autofocus_pane_cp_g2

0x9bf1,	// (0x00039a6e) camera2_autofocus_pane_cp_g3

0x9bf9,	// (0x00039a76) camera2_autofocus_pane_cp_g4

0x9c01,	// (0x00039a7e) camera2_autofocus_pane_cp_g5

0x0004,

0xf7a6,	// (0x0003f623) camera2_autofocus_pane_cp_g

0xa1f6,	// (0x0003a073) popup_dialer_spcha_window

0xd932,	// (0x0003d7af) bg_popup_sub_pane_cp07

0x19ee,	// (0x0003186b) list_spcha_pane

0x19f6,	// (0x00031873) list_single_spcha_pane_ParamLimits

0x19f6,	// (0x00031873) list_single_spcha_pane

0xd932,	// (0x0003d7af) list_highlight_pane_cp06

0x1a07,	// (0x00031884) list_single_spcha_pane_t1

0x0af4,	// (0x00030971) popup_call2_audio_out_window_g4_ParamLimits

0x0af4,	// (0x00030971) popup_call2_audio_out_window_g4

0xd932,	// (0x0003d7af) main_imed2_pane

0x10d3,	// (0x00030f50) popup_imed_adjust2_window

0x90f3,	// (0x00038f70) popup_imed_trans_window_ParamLimits

0x90f3,	// (0x00038f70) popup_imed_trans_window

0x13ef,	// (0x0003126c) popup_blid_sat_info2_window_t1

0x13fd,	// (0x0003127a) popup_blid_sat_info2_window_t2

0x000a,

0xf6d5,	// (0x0003f552) popup_blid_sat_info2_window_t

0xa50b,	// (0x0003a388) aid_size_cell_colour_35

0xa525,	// (0x0003a3a2) aid_size_cell_colour_112

0xa53c,	// (0x0003a3b9) aid_size_cell_effect

0xf0be,	// (0x0003ef3b) bg_tb_trans_pane_cp02

0xf0cc,	// (0x0003ef49) heading_imed_pane

0xa556,	// (0x0003a3d3) listscroll_imed_pane

0x1a15,	// (0x00031892) heading_imed_pane_g1

0x1a1d,	// (0x0003189a) heading_imed_pane_t1

0x1a2b,	// (0x000318a8) grid_imed_colour_35_pane_ParamLimits

0x1a2b,	// (0x000318a8) grid_imed_colour_35_pane

0xa562,	// (0x0003a3df) grid_imed_effect_pane

0x1a46,	// (0x000318c3) list_imed_aspect_pane

0xa572,	// (0x0003a3ef) scroll_pane_cp027_ParamLimits

0xa572,	// (0x0003a3ef) scroll_pane_cp027

0xa57e,	// (0x0003a3fb) cell_imed_effect_pane_ParamLimits

0xa57e,	// (0x0003a3fb) cell_imed_effect_pane

0x1a4e,	// (0x000318cb) cell_imed_colour_pane_ParamLimits

0x1a4e,	// (0x000318cb) cell_imed_colour_pane

0x1a90,	// (0x0003190d) cell_imed_colour_pane_g1_ParamLimits

0x1a90,	// (0x0003190d) cell_imed_colour_pane_g1

0x1aa1,	// (0x0003191e) hgihlgiht_grid_pane_cp016_ParamLimits

0x1aa1,	// (0x0003191e) hgihlgiht_grid_pane_cp016

0xa596,	// (0x0003a413) cell_imed_effect_pane_g1

0xa59e,	// (0x0003a41b) grid_highlight_pane_cp017

0xf0d8,	// (0x0003ef55) list_imed_single_pane_ParamLimits

0xf0d8,	// (0x0003ef55) list_imed_single_pane

0xd932,	// (0x0003d7af) list_highlight_pane_cp07

0x1ab2,	// (0x0003192f) list_imed_aspect_pane_comp1_t1

0x10ab,	// (0x00030f28) bg_tb_trans_pane_cp05

0x1ad4,	// (0x00031951) popup_imed_adjust2_window_g1

0x1afb,	// (0x00031978) popup_imed_adjust2_window_t1

0x1b13,	// (0x00031990) slider_imed_adjust_pane

0x1b27,	// (0x000319a4) slider_imed_adjust_pane_g1

0x1b37,	// (0x000319b4) slider_imed_adjust_pane_g2

0x1b47,	// (0x000319c4) slider_imed_adjust_pane_g3

0x1b58,	// (0x000319d5) slider_imed_adjust_pane_g4

0x0003,

0xf814,	// (0x0003f691) slider_imed_adjust_pane_g

0xa5a7,	// (0x0003a424) aid_size_cell_clipart2

0xa5b3,	// (0x0003a430) grid_imed_clipart_pane

0x1b69,	// (0x000319e6) scroll_pane_cp031

0xa5bd,	// (0x0003a43a) cell_imed_clipart_pane_ParamLimits

0xa5bd,	// (0x0003a43a) cell_imed_clipart_pane

0xa5e4,	// (0x0003a461) cell_imed_clipart_pane_g1

0xd932,	// (0x0003d7af) grid_highlight_pane_cp014

0xa319,	// (0x0003a196) main_clock2_pane_g1_ParamLimits

0xa319,	// (0x0003a196) main_clock2_pane_g1

0xa408,	// (0x0003a285) aid_call2_pane_cp10

0xa41a,	// (0x0003a297) aid_call_pane_cp10

0xeada,	// (0x0003e957) popup_clock_analogue_window_cp10_g1

0xeada,	// (0x0003e957) popup_clock_analogue_window_cp10_g2

0xa42c,	// (0x0003a2a9) popup_clock_analogue_window_cp10_g3

0xa42c,	// (0x0003a2a9) popup_clock_analogue_window_cp10_g4

0xeada,	// (0x0003e957) popup_clock_analogue_window_cp10_g5

0x0004,

0xf802,	// (0x0003f67f) popup_clock_analogue_window_cp10_g

0xa442,	// (0x0003a2bf) popup_clock_analogue_window_cp10_t1

0xa473,	// (0x0003a2f0) clock_digital_number_pane_cp10_ParamLimits

0xa473,	// (0x0003a2f0) clock_digital_number_pane_cp10

0xa48b,	// (0x0003a308) clock_digital_number_pane_cp11_ParamLimits

0xa48b,	// (0x0003a308) clock_digital_number_pane_cp11

0xa4a3,	// (0x0003a320) clock_digital_number_pane_cp12_ParamLimits

0xa4a3,	// (0x0003a320) clock_digital_number_pane_cp12

0xa4bb,	// (0x0003a338) clock_digital_number_pane_cp13_ParamLimits

0xa4bb,	// (0x0003a338) clock_digital_number_pane_cp13

0xa4d3,	// (0x0003a350) clock_digital_separator_pane_cp10_ParamLimits

0xa4d3,	// (0x0003a350) clock_digital_separator_pane_cp10

0xa4eb,	// (0x0003a368) popup_clock_digital_window_cp02_t1_ParamLimits

0xa4eb,	// (0x0003a368) popup_clock_digital_window_cp02_t1

0xdffe,	// (0x0003de7b) clock_digital_number_pane_cp10_g1

0xdffe,	// (0x0003de7b) clock_digital_number_pane_cp10_g2

0x0001,

0xf81d,	// (0x0003f69a) clock_digital_number_pane_cp10_g

0xdffe,	// (0x0003de7b) clock_digital_separator_pane_cp10_g1

0xdffe,	// (0x0003de7b) clock_digital_separator_pane_g2_cp10

0xeb75,	// (0x0003e9f2) navi_pane_vded_g4

0xeb7e,	// (0x0003e9fb) navi_pane_vded_g5

0xeb87,	// (0x0003ea04) navi_pane_vded_t1

0xd932,	// (0x0003d7af) main_vded_pane

0xa5ed,	// (0x0003a46a) main_vded_pane_g1

0xa5f9,	// (0x0003a476) main_vded_pane_g2

0xa603,	// (0x0003a480) main_vded_pane_g3

0x0002,

0xf822,	// (0x0003f69f) main_vded_pane_g

0xa60d,	// (0x0003a48a) main_vded_pane_t1

0xa61b,	// (0x0003a498) main_vded_pane_t2

0x0001,

0xf829,	// (0x0003f6a6) main_vded_pane_t

0xa629,	// (0x0003a4a6) vded_slider_pane

0xa633,	// (0x0003a4b0) vded_video_pane

0x1b71,	// (0x000319ee) vded_video_pane_g1

0xa63d,	// (0x0003a4ba) vded_video_pane_g2

0x15b3,	// (0x00031430) vded_video_pane_g3

0x0002,

0xf82e,	// (0x0003f6ab) vded_video_pane_g

0x1b7b,	// (0x000319f8) vded_slider_pane_g1

0x12c0,	// (0x0003113d) vded_slider_pane_g2

0x1b84,	// (0x00031a01) vded_slider_pane_g3

0x1b8d,	// (0x00031a0a) vded_slider_pane_g4

0x1b96,	// (0x00031a13) vded_slider_pane_g5

0x0004,

0xf835,	// (0x0003f6b2) vded_slider_pane_g

0xa107,	// (0x00039f84) mup3_rocker_pane_ParamLimits

0xa107,	// (0x00039f84) mup3_rocker_pane

0xa646,	// (0x0003a4c3) mup3_control_keys_pane_g1

0xa64e,	// (0x0003a4cb) mup3_control_keys_pane_g2

0xa656,	// (0x0003a4d3) mup3_control_keys_pane_g3

0xa65e,	// (0x0003a4db) mup3_control_keys_pane_g4

0x0003,

0xf840,	// (0x0003f6bd) mup3_control_keys_pane_g

0x64c5,	// (0x00036342) popup_toolbar2_fixed_window_cp01_ParamLimits

0x64c5,	// (0x00036342) popup_toolbar2_fixed_window_cp01

0xa121,	// (0x00039f9e) popup_toolbar2_fixed_window_cp02_ParamLimits

0xa121,	// (0x00039f9e) popup_toolbar2_fixed_window_cp02

0x0433,	// (0x000302b0) popup_call2_audio_second_window_t4_ParamLimits

0x0433,	// (0x000302b0) popup_call2_audio_second_window_t4

0x0961,	// (0x000307de) popup_call2_audio_first_window_t6_ParamLimits

0x0961,	// (0x000307de) popup_call2_audio_first_window_t6

0x0bf7,	// (0x00030a74) popup_call2_audio_out_window_t6_ParamLimits

0x0bf7,	// (0x00030a74) popup_call2_audio_out_window_t6

0xd932,	// (0x0003d7af) main_vitu_pane

0xa66e,	// (0x0003a4eb) aid_size_cell_itu_ParamLimits

0xa66e,	// (0x0003a4eb) aid_size_cell_itu

0x64ed,	// (0x0003636a) bg_popup_window_pane_cp08_ParamLimits

0x64ed,	// (0x0003636a) bg_popup_window_pane_cp08

0xa67c,	// (0x0003a4f9) field_vitu_entry_pane_ParamLimits

0xa67c,	// (0x0003a4f9) field_vitu_entry_pane

0xa68b,	// (0x0003a508) grid_vitu_function_pane_ParamLimits

0xa68b,	// (0x0003a508) grid_vitu_function_pane

0xa69b,	// (0x0003a518) grid_vitu_itu_pane_ParamLimits

0xa69b,	// (0x0003a518) grid_vitu_itu_pane

0xa6ab,	// (0x0003a528) cell_vitu_itu_pane_ParamLimits

0xa6ab,	// (0x0003a528) cell_vitu_itu_pane

0xa6c0,	// (0x0003a53d) cell_vitu_function_pane_ParamLimits

0xa6c0,	// (0x0003a53d) cell_vitu_function_pane

0xf0be,	// (0x0003ef3b) bg_popup_sub_pane_cp08_ParamLimits

0xf0be,	// (0x0003ef3b) bg_popup_sub_pane_cp08

0xa6d4,	// (0x0003a551) field_vitu_entry_pane_t1_ParamLimits

0xa6d4,	// (0x0003a551) field_vitu_entry_pane_t1

0x1bb7,	// (0x00031a34) field_vitu_entry_pane_t2_ParamLimits

0x1bb7,	// (0x00031a34) field_vitu_entry_pane_t2

0x0001,

0xf84e,	// (0x0003f6cb) field_vitu_entry_pane_t_ParamLimits

0xf84e,	// (0x0003f6cb) field_vitu_entry_pane_t

0x1bd4,	// (0x00031a51) bg_button_pane_cp05_ParamLimits

0x1bd4,	// (0x00031a51) bg_button_pane_cp05

0xa6f1,	// (0x0003a56e) cell_vitu_itu_pane_g1

0xa709,	// (0x0003a586) cell_vitu_itu_pane_t1_ParamLimits

0xa709,	// (0x0003a586) cell_vitu_itu_pane_t1

0xa71b,	// (0x0003a598) cell_vitu_itu_pane_t2_ParamLimits

0xa71b,	// (0x0003a598) cell_vitu_itu_pane_t2

0x0002,

0xf853,	// (0x0003f6d0) cell_vitu_itu_pane_t_ParamLimits

0xf853,	// (0x0003f6d0) cell_vitu_itu_pane_t

0x1be2,	// (0x00031a5f) bg_button_pane_cp07

0xa750,	// (0x0003a5cd) cell_vitu_function_pane_g1

0x675b,	// (0x000365d8) main_calc_pane_g1

0x62c8,	// (0x00036145) aid_visual_content_pane

0xd932,	// (0x0003d7af) main_vradio_pane

0xa759,	// (0x0003a5d6) main_vradio_pane_g1_ParamLimits

0xa759,	// (0x0003a5d6) main_vradio_pane_g1

0x1bec,	// (0x00031a69) main_vradio_pane_g2_ParamLimits

0x1bec,	// (0x00031a69) main_vradio_pane_g2

0x0001,

0xf85a,	// (0x0003f6d7) main_vradio_pane_g_ParamLimits

0xf85a,	// (0x0003f6d7) main_vradio_pane_g

0xa769,	// (0x0003a5e6) main_vradio_pane_t1_ParamLimits

0xa769,	// (0x0003a5e6) main_vradio_pane_t1

0xa77b,	// (0x0003a5f8) main_vradio_pane_t2_ParamLimits

0xa77b,	// (0x0003a5f8) main_vradio_pane_t2

0x1bf9,	// (0x00031a76) main_vradio_pane_t3_ParamLimits

0x1bf9,	// (0x00031a76) main_vradio_pane_t3

0x0002,

0xf85f,	// (0x0003f6dc) main_vradio_pane_t_ParamLimits

0xf85f,	// (0x0003f6dc) main_vradio_pane_t

0xa78d,	// (0x0003a60a) vradio_rocker_control_pane_ParamLimits

0xa78d,	// (0x0003a60a) vradio_rocker_control_pane

0xa799,	// (0x0003a616) vradio_station_info_pane_ParamLimits

0xa799,	// (0x0003a616) vradio_station_info_pane

0x1c0d,	// (0x00031a8a) vradio_frequency_info_pane_ParamLimits

0x1c0d,	// (0x00031a8a) vradio_frequency_info_pane

0x15b3,	// (0x00031430) vradio_station_info_pane_g1

0x1c1c,	// (0x00031a99) vradio_station_info_pane_t1_ParamLimits

0x1c1c,	// (0x00031a99) vradio_station_info_pane_t1

0x1c3e,	// (0x00031abb) vradio_station_info_pane_t2_ParamLimits

0x1c3e,	// (0x00031abb) vradio_station_info_pane_t2

0x0001,

0xf866,	// (0x0003f6e3) vradio_station_info_pane_t_ParamLimits

0xf866,	// (0x0003f6e3) vradio_station_info_pane_t

0x1c50,	// (0x00031acd) vradio_tuning_pane

0x1c58,	// (0x00031ad5) vradio_rocker_control_pane_g1

0x1c60,	// (0x00031add) vradio_rocker_control_pane_g2

0x1c68,	// (0x00031ae5) vradio_rocker_control_pane_g3

0x1c70,	// (0x00031aed) vradio_rocker_control_pane_g4

0x1c78,	// (0x00031af5) vradio_rocker_control_pane_g5

0x0004,

0xf86b,	// (0x0003f6e8) vradio_rocker_control_pane_g

0xa7a8,	// (0x0003a625) vradio_frequency_info_pane_g1

0x1c80,	// (0x00031afd) vradio_frequency_info_pane_t1_ParamLimits

0x1c80,	// (0x00031afd) vradio_frequency_info_pane_t1

0xa7b2,	// (0x0003a62f) vradio_tuning_pane_g1

0xa7bb,	// (0x0003a638) vradio_tuning_pane_t1

0xd958,	// (0x0003d7d5) area_side_right_pane_ParamLimits

0xd958,	// (0x0003d7d5) area_side_right_pane

0x1072,	// (0x00030eef) status_small_pane_g1

0x107a,	// (0x00030ef7) status_small_pane_g2

0x1083,	// (0x00030f00) status_small_pane_g3

0x108c,	// (0x00030f09) status_small_pane_g4

0x0003,

0xf62b,	// (0x0003f4a8) status_small_pane_g

0x1095,	// (0x00030f12) status_small_pane_t1

0xd932,	// (0x0003d7af) main_video3_pane

0x1c94,	// (0x00031b11) cams_zoom_vslider_pane

0x1c9c,	// (0x00031b19) image3_wide_pane_ParamLimits

0x1c9c,	// (0x00031b19) image3_wide_pane

0x1cb6,	// (0x00031b33) image3_wide_small_pane

0x1cc2,	// (0x00031b3f) main_video3_pane_g1_ParamLimits

0x1cc2,	// (0x00031b3f) main_video3_pane_g1

0x1cde,	// (0x00031b5b) main_video3_pane_g2_ParamLimits

0x1cde,	// (0x00031b5b) main_video3_pane_g2

0x0001,

0xf876,	// (0x0003f6f3) main_video3_pane_g_ParamLimits

0xf876,	// (0x0003f6f3) main_video3_pane_g

0x1cfa,	// (0x00031b77) main_video3_pane_t1_ParamLimits

0x1cfa,	// (0x00031b77) main_video3_pane_t1

0x1d25,	// (0x00031ba2) main_video3_pane_t2_ParamLimits

0x1d25,	// (0x00031ba2) main_video3_pane_t2

0x1d50,	// (0x00031bcd) main_video3_pane_t3_ParamLimits

0x1d50,	// (0x00031bcd) main_video3_pane_t3

0x0002,

0xf87b,	// (0x0003f6f8) main_video3_pane_t_ParamLimits

0xf87b,	// (0x0003f6f8) main_video3_pane_t

0x1d7d,	// (0x00031bfa) cams_zoom_vslider_pane_g1

0x1d86,	// (0x00031c03) cams_zoom_vslider_pane_g2

0x0001,

0xf882,	// (0x0003f6ff) cams_zoom_vslider_pane_g

0x1d8e,	// (0x00031c0b) small_slider_vertical_pane

0x15b3,	// (0x00031430) small_slider_vertical_pane_g1

0x15b3,	// (0x00031430) small_slider_vertical_pane_g2

0x1d96,	// (0x00031c13) small_slider_vertical_pane_g3

0x0002,

0xf887,	// (0x0003f704) small_slider_vertical_pane_g

0xd932,	// (0x0003d7af) main_hwr_training_pane

0x1d9f,	// (0x00031c1c) hwr_training_instruct_pane_ParamLimits

0x1d9f,	// (0x00031c1c) hwr_training_instruct_pane

0xa7ca,	// (0x0003a647) hwr_training_navi_pane_ParamLimits

0xa7ca,	// (0x0003a647) hwr_training_navi_pane

0xa7e4,	// (0x0003a661) hwr_training_write_pane_ParamLimits

0xa7e4,	// (0x0003a661) hwr_training_write_pane

0xd932,	// (0x0003d7af) bg_frame_shadow_pane

0x1dd6,	// (0x00031c53) hwr_training_write_pane_g1

0x1dde,	// (0x00031c5b) hwr_training_write_pane_g2

0x1de6,	// (0x00031c63) hwr_training_write_pane_g3

0x1dee,	// (0x00031c6b) hwr_training_write_pane_g4

0x1df6,	// (0x00031c73) hwr_training_write_pane_g5

0x1dfe,	// (0x00031c7b) hwr_training_write_pane_g6

0x1e06,	// (0x00031c83) hwr_training_write_pane_g7

0x0006,

0xf88e,	// (0x0003f70b) hwr_training_write_pane_g

0xa81c,	// (0x0003a699) hwr_training_navi_pane_g1_ParamLimits

0xa81c,	// (0x0003a699) hwr_training_navi_pane_g1

0xa82e,	// (0x0003a6ab) hwr_training_navi_pane_g2_ParamLimits

0xa82e,	// (0x0003a6ab) hwr_training_navi_pane_g2

0xa840,	// (0x0003a6bd) hwr_training_navi_pane_g3_ParamLimits

0xa840,	// (0x0003a6bd) hwr_training_navi_pane_g3

0xa850,	// (0x0003a6cd) hwr_training_navi_pane_g4_ParamLimits

0xa850,	// (0x0003a6cd) hwr_training_navi_pane_g4

0x0004,

0xf89d,	// (0x0003f71a) hwr_training_navi_pane_g_ParamLimits

0xf89d,	// (0x0003f71a) hwr_training_navi_pane_g

0xa86a,	// (0x0003a6e7) hwr_training_navi_pane_t1

0xa878,	// (0x0003a6f5) list_single_hwr_training_instruct_pane_ParamLimits

0xa878,	// (0x0003a6f5) list_single_hwr_training_instruct_pane

0x1e5d,	// (0x00031cda) list_single_hwr_training_instruct_pane_t1

0x14f3,	// (0x00031370) bg_frame_shadow_pane_g1

0x1e6c,	// (0x00031ce9) bg_frame_shadow_pane_g2

0x1e74,	// (0x00031cf1) bg_frame_shadow_pane_g3

0x1e7c,	// (0x00031cf9) bg_frame_shadow_pane_g4

0x1e84,	// (0x00031d01) bg_frame_shadow_pane_g5

0x1e8c,	// (0x00031d09) bg_frame_shadow_pane_g6

0x1e94,	// (0x00031d11) bg_frame_shadow_pane_g7

0xe1e0,	// (0x0003e05d) bg_frame_shadow_pane_g8

0x0007,

0xf8a8,	// (0x0003f725) bg_frame_shadow_pane_g

0xd932,	// (0x0003d7af) main_video_tele_dialer_pane

0xa8ae,	// (0x0003a72b) aid_size_cell_video_keypad_ParamLimits

0xa8ae,	// (0x0003a72b) aid_size_cell_video_keypad

0xa8be,	// (0x0003a73b) grid_video_dialer_keypad_pane_ParamLimits

0xa8be,	// (0x0003a73b) grid_video_dialer_keypad_pane

0xa8f2,	// (0x0003a76f) video_down_pane_cp_ParamLimits

0xa8f2,	// (0x0003a76f) video_down_pane_cp

0xa91c,	// (0x0003a799) cell_video_dialer_keypad_pane_ParamLimits

0xa91c,	// (0x0003a799) cell_video_dialer_keypad_pane

0x1e9c,	// (0x00031d19) bg_button_pane_cp08_ParamLimits

0x1e9c,	// (0x00031d19) bg_button_pane_cp08

0xa931,	// (0x0003a7ae) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa931,	// (0x0003a7ae) cell_video_dialer_keypad_pane_g1

0xa0fb,	// (0x00039f78) mup3_rocker2_pane_ParamLimits

0xa0fb,	// (0x00039f78) mup3_rocker2_pane

0x15b3,	// (0x00031430) mup3_rocker2_pane_g1

0x9081,	// (0x00038efe) main_dialer2_pane

0xd932,	// (0x0003d7af) main_mp4_pane

0xa970,	// (0x0003a7ed) main_mp4_pane_g1_ParamLimits

0xa970,	// (0x0003a7ed) main_mp4_pane_g1

0xa97e,	// (0x0003a7fb) main_mp4_pane_g2_ParamLimits

0xa97e,	// (0x0003a7fb) main_mp4_pane_g2

0xa98c,	// (0x0003a809) main_mp4_pane_g3_ParamLimits

0xa98c,	// (0x0003a809) main_mp4_pane_g3

0xa9d1,	// (0x0003a84e) main_mp4_pane_g4_ParamLimits

0xa9d1,	// (0x0003a84e) main_mp4_pane_g4

0xa9f9,	// (0x0003a876) main_mp4_pane_g5_ParamLimits

0xa9f9,	// (0x0003a876) main_mp4_pane_g5

0x0005,

0xf8c8,	// (0x0003f745) main_mp4_pane_g_ParamLimits

0xf8c8,	// (0x0003f745) main_mp4_pane_g

0xaa49,	// (0x0003a8c6) main_mp4_pane_t1_ParamLimits

0xaa49,	// (0x0003a8c6) main_mp4_pane_t1

0xaaa5,	// (0x0003a922) main_mp4_pane_t2_ParamLimits

0xaaa5,	// (0x0003a922) main_mp4_pane_t2

0x1fe4,	// (0x00031e61) main_mp4_pane_t3_ParamLimits

0x1fe4,	// (0x00031e61) main_mp4_pane_t3

0xaaf7,	// (0x0003a974) main_mp4_pane_t4_ParamLimits

0xaaf7,	// (0x0003a974) main_mp4_pane_t4

0x0003,

0xf8d5,	// (0x0003f752) main_mp4_pane_t_ParamLimits

0xf8d5,	// (0x0003f752) main_mp4_pane_t

0xab3b,	// (0x0003a9b8) mp4_progress_pane_ParamLimits

0xab3b,	// (0x0003a9b8) mp4_progress_pane

0xab85,	// (0x0003aa02) mp4_rocker_pane_ParamLimits

0xab85,	// (0x0003aa02) mp4_rocker_pane

0x20ba,	// (0x00031f37) mp4_progress_pane_t1

0x20d3,	// (0x00031f50) mp4_progress_pane_t2

0x0001,

0xf8de,	// (0x0003f75b) mp4_progress_pane_t

0x20ec,	// (0x00031f69) mup_progress_pane_cp04

0x15b3,	// (0x00031430) mp4_rocker_pane_g1

0xaba5,	// (0x0003aa22) aid_cell_size_keypad2_ParamLimits

0xaba5,	// (0x0003aa22) aid_cell_size_keypad2

0xabb5,	// (0x0003aa32) dialer2_ne_pane_ParamLimits

0xabb5,	// (0x0003aa32) dialer2_ne_pane

0xabc3,	// (0x0003aa40) grid_dialer2_keypad_pane_ParamLimits

0xabc3,	// (0x0003aa40) grid_dialer2_keypad_pane

0x2bc4,	// (0x00032a41) bg_popup_call_pane_cp07_ParamLimits

0x2bc4,	// (0x00032a41) bg_popup_call_pane_cp07

0xabd3,	// (0x0003aa50) dialer2_ne_pane_t1_ParamLimits

0xabd3,	// (0x0003aa50) dialer2_ne_pane_t1

0xabf8,	// (0x0003aa75) cell_dialer2_keypad_pane_ParamLimits

0xabf8,	// (0x0003aa75) cell_dialer2_keypad_pane

0x2114,	// (0x00031f91) bg_button_pane_pane_cp04_ParamLimits

0x2114,	// (0x00031f91) bg_button_pane_pane_cp04

0xac0f,	// (0x0003aa8c) cell_dialer2_keypad_pane_g1_ParamLimits

0xac0f,	// (0x0003aa8c) cell_dialer2_keypad_pane_g1

0x710e,	// (0x00036f8b) aid_placing_vt_set_content_ParamLimits

0x710e,	// (0x00036f8b) aid_placing_vt_set_content

0x712a,	// (0x00036fa7) aid_placing_vt_set_title_ParamLimits

0x712a,	// (0x00036fa7) aid_placing_vt_set_title

0xd932,	// (0x0003d7af) main_image3_pane

0xaca9,	// (0x0003ab26) area_side_right_pane_cp01_ParamLimits

0xaca9,	// (0x0003ab26) area_side_right_pane_cp01

0x3188,	// (0x00033005) main_image3_pane_g1_ParamLimits

0x3188,	// (0x00033005) main_image3_pane_g1

0xacd6,	// (0x0003ab53) main_image3_pane_g2_ParamLimits

0xacd6,	// (0x0003ab53) main_image3_pane_g2

0xacef,	// (0x0003ab6c) main_image3_pane_g3_ParamLimits

0xacef,	// (0x0003ab6c) main_image3_pane_g3

0xad08,	// (0x0003ab85) main_image3_pane_g4_ParamLimits

0xad08,	// (0x0003ab85) main_image3_pane_g4

0x0003,

0xf8ed,	// (0x0003f76a) main_image3_pane_g_ParamLimits

0xf8ed,	// (0x0003f76a) main_image3_pane_g

0xad21,	// (0x0003ab9e) main_image3_pane_t1_ParamLimits

0xad21,	// (0x0003ab9e) main_image3_pane_t1

0xad46,	// (0x0003abc3) main_image3_pane_t2_ParamLimits

0xad46,	// (0x0003abc3) main_image3_pane_t2

0xad65,	// (0x0003abe2) main_image3_pane_t3_ParamLimits

0xad65,	// (0x0003abe2) main_image3_pane_t3

0x0003,

0xf8f6,	// (0x0003f773) main_image3_pane_t_ParamLimits

0xf8f6,	// (0x0003f773) main_image3_pane_t

0x64ed,	// (0x0003636a) grid_sctrl_middle_pane_cp01_ParamLimits

0x64ed,	// (0x0003636a) grid_sctrl_middle_pane_cp01

0xadc6,	// (0x0003ac43) cell_sctrl_middle_pane_cp01_ParamLimits

0xadc6,	// (0x0003ac43) cell_sctrl_middle_pane_cp01

0xadd7,	// (0x0003ac54) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xadd7,	// (0x0003ac54) cell_sctrl_middle_pane_cp01_g1

0xd932,	// (0x0003d7af) main_call4_pane

0xade4,	// (0x0003ac61) aid_size_button_call4_ParamLimits

0xade4,	// (0x0003ac61) aid_size_button_call4

0xae14,	// (0x0003ac91) call4_windows_pane_ParamLimits

0xae14,	// (0x0003ac91) call4_windows_pane

0xae2e,	// (0x0003acab) grid_call4_button_pane_ParamLimits

0xae2e,	// (0x0003acab) grid_call4_button_pane

0x2152,	// (0x00031fcf) call4_windows_conf_pane

0x2167,	// (0x00031fe4) popup_call4_audio_first_window_ParamLimits

0x2167,	// (0x00031fe4) popup_call4_audio_first_window

0x21b3,	// (0x00032030) popup_call4_audio_second_window_ParamLimits

0x21b3,	// (0x00032030) popup_call4_audio_second_window

0x21c7,	// (0x00032044) popup_call4_audio_wait_window_ParamLimits

0x21c7,	// (0x00032044) popup_call4_audio_wait_window

0xae52,	// (0x0003accf) cell_call4_button_pane_ParamLimits

0xae52,	// (0x0003accf) cell_call4_button_pane

0xae77,	// (0x0003acf4) bg_button_pane_cp09_ParamLimits

0xae77,	// (0x0003acf4) bg_button_pane_cp09

0xae83,	// (0x0003ad00) cell_call4_button_pane_g1_ParamLimits

0xae83,	// (0x0003ad00) cell_call4_button_pane_g1

0xae90,	// (0x0003ad0d) cell_call4_button_pane_t1_ParamLimits

0xae90,	// (0x0003ad0d) cell_call4_button_pane_t1

0x220f,	// (0x0003208c) popup_call4_audio_conf_window_ParamLimits

0x220f,	// (0x0003208c) popup_call4_audio_conf_window

0xa12e,	// (0x00039fab) mup3_progress_pane_t1_ParamLimits

0xa145,	// (0x00039fc2) mup3_progress_pane_t2_ParamLimits

0x18cd,	// (0x0003174a) mup3_progress_pane_t3_ParamLimits

0xf7cf,	// (0x0003f64c) mup3_progress_pane_t_ParamLimits

0x18e4,	// (0x00031761) mup_progress_pane_cp03_ParamLimits

0xa666,	// (0x0003a4e3) mup3_control_keys_pane_g4_copy1

0xab69,	// (0x0003a9e6) mp4_rocker2_pane_ParamLimits

0xab69,	// (0x0003a9e6) mp4_rocker2_pane

0x222b,	// (0x000320a8) mp4_rocker2_pane_g1

0x2223,	// (0x000320a0) mp4_rocker2_pane_g2

0xaea2,	// (0x0003ad1f) mp4_rocker2_pane_g3

0xaeaa,	// (0x0003ad27) mp4_rocker2_pane_g4

0xaeb2,	// (0x0003ad2f) mp4_rocker2_pane_g5

0x0004,

0xf8ff,	// (0x0003f77c) mp4_rocker2_pane_g

0xd932,	// (0x0003d7af) main_camera4_pane

0xd932,	// (0x0003d7af) main_video4_pane

0xa8ce,	// (0x0003a74b) main_video_tele_dialer_pane_t1_ParamLimits

0xa8ce,	// (0x0003a74b) main_video_tele_dialer_pane_t1

0xa8e0,	// (0x0003a75d) main_video_tele_dialer_pane_t2_ParamLimits

0xa8e0,	// (0x0003a75d) main_video_tele_dialer_pane_t2

0x0001,

0xf8b9,	// (0x0003f736) main_video_tele_dialer_pane_t_ParamLimits

0xf8b9,	// (0x0003f736) main_video_tele_dialer_pane_t

0xaed2,	// (0x0003ad4f) cam4_autofocus_pane_ParamLimits

0xaed2,	// (0x0003ad4f) cam4_autofocus_pane

0xaee0,	// (0x0003ad5d) cam4_image_uncrop_pane_ParamLimits

0xaee0,	// (0x0003ad5d) cam4_image_uncrop_pane

0xaef7,	// (0x0003ad74) cam4_indicators_pane_ParamLimits

0xaef7,	// (0x0003ad74) cam4_indicators_pane

0xaf13,	// (0x0003ad90) main_camera4_pane_g1_ParamLimits

0xaf13,	// (0x0003ad90) main_camera4_pane_g1

0xaf1f,	// (0x0003ad9c) main_camera4_pane_g2_ParamLimits

0xaf1f,	// (0x0003ad9c) main_camera4_pane_g2

0xaf1f,	// (0x0003ad9c) main_camera4_pane_g3_ParamLimits

0xaf1f,	// (0x0003ad9c) main_camera4_pane_g3

0xaf2b,	// (0x0003ada8) main_camera4_pane_g4_ParamLimits

0xaf2b,	// (0x0003ada8) main_camera4_pane_g4

0xaf37,	// (0x0003adb4) main_camera4_pane_g5_ParamLimits

0xaf37,	// (0x0003adb4) main_camera4_pane_g5

0x0005,

0xf90a,	// (0x0003f787) main_camera4_pane_g_ParamLimits

0xf90a,	// (0x0003f787) main_camera4_pane_g

0xaf51,	// (0x0003adce) main_camera4_pane_t1_ParamLimits

0xaf51,	// (0x0003adce) main_camera4_pane_t1

0x181a,	// (0x00031697) bg_tb_trans_pane_cp06

0xaf98,	// (0x0003ae15) cam4_indicators_pane_g1

0xafa9,	// (0x0003ae26) cam4_indicators_pane_g2

0x0002,

0xf925,	// (0x0003f7a2) cam4_indicators_pane_g

0xafc7,	// (0x0003ae44) cam4_indicators_pane_t1

0xaff1,	// (0x0003ae6e) main_video4_pane_g1_ParamLimits

0xaff1,	// (0x0003ae6e) main_video4_pane_g1

0xaffd,	// (0x0003ae7a) main_video4_pane_g2_ParamLimits

0xaffd,	// (0x0003ae7a) main_video4_pane_g2

0xb009,	// (0x0003ae86) main_video4_pane_g3_ParamLimits

0xb009,	// (0x0003ae86) main_video4_pane_g3

0xb015,	// (0x0003ae92) main_video4_pane_g4_ParamLimits

0xb015,	// (0x0003ae92) main_video4_pane_g4

0x0004,

0xf92c,	// (0x0003f7a9) main_video4_pane_g_ParamLimits

0xf92c,	// (0x0003f7a9) main_video4_pane_g

0xb035,	// (0x0003aeb2) vid4_indicators_pane_ParamLimits

0xb035,	// (0x0003aeb2) vid4_indicators_pane

0xb053,	// (0x0003aed0) video4_image_uncrop_cif_pane_ParamLimits

0xb053,	// (0x0003aed0) video4_image_uncrop_cif_pane

0xb062,	// (0x0003aedf) video4_image_uncrop_nhd_pane_ParamLimits

0xb062,	// (0x0003aedf) video4_image_uncrop_nhd_pane

0xaee0,	// (0x0003ad5d) video4_image_uncrop_vga_pane_ParamLimits

0xaee0,	// (0x0003ad5d) video4_image_uncrop_vga_pane

0xf0be,	// (0x0003ef3b) bg_tb_trans_pane_cp07

0xaf98,	// (0x0003ae15) vid4_indicators_pane_g1

0xb077,	// (0x0003aef4) vid4_indicators_pane_g2

0xb088,	// (0x0003af05) vid4_indicators_pane_g3

0x0004,

0xf937,	// (0x0003f7b4) vid4_indicators_pane_g

0xb0b5,	// (0x0003af32) vid4_indicators_pane_t1

0xb0ce,	// (0x0003af4b) cam4_autofocus_pane_g1

0xb0d6,	// (0x0003af53) cam4_autofocus_pane_g2

0xb0de,	// (0x0003af5b) cam4_autofocus_pane_g3

0x0002,

0xf942,	// (0x0003f7bf) cam4_autofocus_pane_g

0xb0e6,	// (0x0003af63) cam4_autofocus_pane_g3_copy1

0xa900,	// (0x0003a77d) video_down_pane_cp_t1

0xa90e,	// (0x0003a78b) video_down_pane_cp_t2

0x0001,

0xf8be,	// (0x0003f73b) video_down_pane_cp_t

0x64ed,	// (0x0003636a) popup_vitu2_window_ParamLimits

0x64ed,	// (0x0003636a) popup_vitu2_window

0xb0ee,	// (0x0003af6b) aid_size_cell2_itu2_ParamLimits

0xb0ee,	// (0x0003af6b) aid_size_cell2_itu2

0xb110,	// (0x0003af8d) aid_size_cell_itu2_ParamLimits

0xb110,	// (0x0003af8d) aid_size_cell_itu2

0x2bc4,	// (0x00032a41) bg_popup_window_pane_cp09_ParamLimits

0x2bc4,	// (0x00032a41) bg_popup_window_pane_cp09

0xb154,	// (0x0003afd1) field_vitu2_entry_pane_ParamLimits

0xb154,	// (0x0003afd1) field_vitu2_entry_pane

0xb174,	// (0x0003aff1) grid_vitu2_function_pane_ParamLimits

0xb174,	// (0x0003aff1) grid_vitu2_function_pane

0xb1b8,	// (0x0003b035) grid_vitu2_itu_pane_ParamLimits

0xb1b8,	// (0x0003b035) grid_vitu2_itu_pane

0xb22e,	// (0x0003b0ab) cell_vitu2_itu_pane_ParamLimits

0xb22e,	// (0x0003b0ab) cell_vitu2_itu_pane

0xb243,	// (0x0003b0c0) cell_vitu2_function_pane_ParamLimits

0xb243,	// (0x0003b0c0) cell_vitu2_function_pane

0x22d8,	// (0x00032155) bg_popup_call_pane_cp08_ParamLimits

0x22d8,	// (0x00032155) bg_popup_call_pane_cp08

0x22f1,	// (0x0003216e) field_vitu2_entry_pane_g1

0x22fd,	// (0x0003217a) field_vitu2_entry_pane_g2

0x0002,

0xf949,	// (0x0003f7c6) field_vitu2_entry_pane_g

0x54a7,	// (0x00035324) field_vitu2_entry_pane_t1_ParamLimits

0x54a7,	// (0x00035324) field_vitu2_entry_pane_t1

0x54d9,	// (0x00035356) field_vitu2_entry_pane_t2_ParamLimits

0x54d9,	// (0x00035356) field_vitu2_entry_pane_t2

0x0001,

0xf950,	// (0x0003f7cd) field_vitu2_entry_pane_t_ParamLimits

0xf950,	// (0x0003f7cd) field_vitu2_entry_pane_t

0xb284,	// (0x0003b101) bg_button_pane_cp010_ParamLimits

0xb284,	// (0x0003b101) bg_button_pane_cp010

0xb292,	// (0x0003b10f) cell_vitu2_itu_pane_g1

0xb2b0,	// (0x0003b12d) cell_vitu2_itu_pane_t1_ParamLimits

0xb2b0,	// (0x0003b12d) cell_vitu2_itu_pane_t1

0x54f6,	// (0x00035373) cell_vitu2_itu_pane_t2_ParamLimits

0x54f6,	// (0x00035373) cell_vitu2_itu_pane_t2

0x0002,

0xf95a,	// (0x0003f7d7) cell_vitu2_itu_pane_t_ParamLimits

0xf95a,	// (0x0003f7d7) cell_vitu2_itu_pane_t

0xf0be,	// (0x0003ef3b) bg_button_pane_cp011

0xb302,	// (0x0003b17f) cell_vitu2_function_pane_g1

0xd932,	// (0x0003d7af) main_myfav_hc_pane

0xada7,	// (0x0003ac24) popup_image3_note_pane_ParamLimits

0xada7,	// (0x0003ac24) popup_image3_note_pane

0xadb5,	// (0x0003ac32) popup_image3_tool_bar_pane_ParamLimits

0xadb5,	// (0x0003ac32) popup_image3_tool_bar_pane

0x5564,	// (0x000353e1) cell_vitu2_itu_pane_t3_ParamLimits

0x5564,	// (0x000353e1) cell_vitu2_itu_pane_t3

0xd932,	// (0x0003d7af) bg_popup_trans_pane

0x237b,	// (0x000321f8) grid_image3_tool_bar_pane

0x2385,	// (0x00032202) bg_popup_trans_pane_g1

0xe52d,	// (0x0003e3aa) bg_popup_trans_pane_g2

0x238d,	// (0x0003220a) bg_popup_trans_pane_g3

0x2395,	// (0x00032212) bg_popup_trans_pane_g4

0x239d,	// (0x0003221a) bg_popup_trans_pane_g5

0x23a5,	// (0x00032222) bg_popup_trans_pane_g6

0x23ad,	// (0x0003222a) bg_popup_trans_pane_g7

0x23b5,	// (0x00032232) bg_popup_trans_pane_g8

0xe50d,	// (0x0003e38a) bg_popup_trans_pane_g9

0x0008,

0xf961,	// (0x0003f7de) bg_popup_trans_pane_g

0x23bd,	// (0x0003223a) cell_image3_tool_bar_pane_ParamLimits

0x23bd,	// (0x0003223a) cell_image3_tool_bar_pane

0x15b3,	// (0x00031430) cell_image3_tool_bar_pane_g1

0xd932,	// (0x0003d7af) bg_popup_trans_pane_cp1

0x23d1,	// (0x0003224e) popup_image3_note_pane_t1

0x23df,	// (0x0003225c) popup_image3_note_pane_t2

0x23ed,	// (0x0003226a) popup_image3_note_pane_t3

0x0002,

0xf974,	// (0x0003f7f1) popup_image3_note_pane_t

0x23fb,	// (0x00032278) popup_image3_note_pane_t3_copy1

0xb316,	// (0x0003b193) bg_myfav_hc_instruction_pane_ParamLimits

0xb316,	// (0x0003b193) bg_myfav_hc_instruction_pane

0xb32e,	// (0x0003b1ab) cell_myfav_contact_pane_ParamLimits

0xb32e,	// (0x0003b1ab) cell_myfav_contact_pane

0xb348,	// (0x0003b1c5) cell_myfav_contact_pane_cp1_ParamLimits

0xb348,	// (0x0003b1c5) cell_myfav_contact_pane_cp1

0xb360,	// (0x0003b1dd) cell_myfav_contact_pane_cp2_ParamLimits

0xb360,	// (0x0003b1dd) cell_myfav_contact_pane_cp2

0xb378,	// (0x0003b1f5) cell_myfav_contact_pane_cp3_ParamLimits

0xb378,	// (0x0003b1f5) cell_myfav_contact_pane_cp3

0xb38f,	// (0x0003b20c) cell_myfav_contact_pane_cp4_ParamLimits

0xb38f,	// (0x0003b20c) cell_myfav_contact_pane_cp4

0xb3a5,	// (0x0003b222) cell_myfav_contact_pane_cp5_ParamLimits

0xb3a5,	// (0x0003b222) cell_myfav_contact_pane_cp5

0xb3b9,	// (0x0003b236) cell_myfav_contact_pane_cp6_ParamLimits

0xb3b9,	// (0x0003b236) cell_myfav_contact_pane_cp6

0xb3cd,	// (0x0003b24a) cell_myfav_contact_pane_cp7_ParamLimits

0xb3cd,	// (0x0003b24a) cell_myfav_contact_pane_cp7

0x2409,	// (0x00032286) listscroll_gen_pane_cp05

0xb3e5,	// (0x0003b262) main_myfav_hc_pane_g1_ParamLimits

0xb3e5,	// (0x0003b262) main_myfav_hc_pane_g1

0xb3fd,	// (0x0003b27a) main_myfav_hc_pane_g2_ParamLimits

0xb3fd,	// (0x0003b27a) main_myfav_hc_pane_g2

0x0002,

0xf97b,	// (0x0003f7f8) main_myfav_hc_pane_g_ParamLimits

0xf97b,	// (0x0003f7f8) main_myfav_hc_pane_g

0xb42d,	// (0x0003b2aa) main_myfav_hc_pane_t1_ParamLimits

0xb42d,	// (0x0003b2aa) main_myfav_hc_pane_t1

0x2412,	// (0x0003228f) main_myfav_hc_pane_t2_ParamLimits

0x2412,	// (0x0003228f) main_myfav_hc_pane_t2

0x2424,	// (0x000322a1) main_myfav_hc_pane_t3_ParamLimits

0x2424,	// (0x000322a1) main_myfav_hc_pane_t3

0xb444,	// (0x0003b2c1) main_myfav_hc_pane_t4_ParamLimits

0xb444,	// (0x0003b2c1) main_myfav_hc_pane_t4

0x0004,

0xf982,	// (0x0003f7ff) main_myfav_hc_pane_t_ParamLimits

0xf982,	// (0x0003f7ff) main_myfav_hc_pane_t

0x15b3,	// (0x00031430) bg_myfav_hc_instruction_pane_g1

0x2436,	// (0x000322b3) cell_myfav_contact_pane_g1_ParamLimits

0x2436,	// (0x000322b3) cell_myfav_contact_pane_g1

0x2436,	// (0x000322b3) cell_myfav_contact_pane_g2_ParamLimits

0x2436,	// (0x000322b3) cell_myfav_contact_pane_g2

0x2442,	// (0x000322bf) cell_myfav_contact_pane_g3_ParamLimits

0x2442,	// (0x000322bf) cell_myfav_contact_pane_g3

0x18b7,	// (0x00031734) cell_myfav_contact_pane_g4_ParamLimits

0x18b7,	// (0x00031734) cell_myfav_contact_pane_g4

0x244f,	// (0x000322cc) cell_myfav_contact_pane_g5_ParamLimits

0x244f,	// (0x000322cc) cell_myfav_contact_pane_g5

0x0004,

0xf98d,	// (0x0003f80a) cell_myfav_contact_pane_g_ParamLimits

0xf98d,	// (0x0003f80a) cell_myfav_contact_pane_g

0xb415,	// (0x0003b292) main_myfav_hc_pane_g3_ParamLimits

0xb415,	// (0x0003b292) main_myfav_hc_pane_g3

0x6409,	// (0x00036286) popup_adpt_find_window

0xb46e,	// (0x0003b2eb) afind_page_pane_ParamLimits

0xb46e,	// (0x0003b2eb) afind_page_pane

0xb47b,	// (0x0003b2f8) aid_size_cell_afind_ParamLimits

0xb47b,	// (0x0003b2f8) aid_size_cell_afind

0xb495,	// (0x0003b312) bg_popup_sub_pane_cp09_ParamLimits

0xb495,	// (0x0003b312) bg_popup_sub_pane_cp09

0xb4a2,	// (0x0003b31f) find_pane_cp01_ParamLimits

0xb4a2,	// (0x0003b31f) find_pane_cp01

0x245b,	// (0x000322d8) grid_afind_control_pane_ParamLimits

0x245b,	// (0x000322d8) grid_afind_control_pane

0xb4af,	// (0x0003b32c) grid_afind_pane_ParamLimits

0xb4af,	// (0x0003b32c) grid_afind_pane

0xb4cb,	// (0x0003b348) cell_afind_pane_ParamLimits

0xb4cb,	// (0x0003b348) cell_afind_pane

0x15b3,	// (0x00031430) afind_page_pane_g1

0xb513,	// (0x0003b390) afind_page_pane_g2

0xb51c,	// (0x0003b399) afind_page_pane_g3

0x0002,

0xf998,	// (0x0003f815) afind_page_pane_g

0xb525,	// (0x0003b3a2) afind_page_pane_t1

0x246f,	// (0x000322ec) cell_afind_grid_control_pane_ParamLimits

0x246f,	// (0x000322ec) cell_afind_grid_control_pane

0x2114,	// (0x00031f91) bg_button_pane_cp69_ParamLimits

0x2114,	// (0x00031f91) bg_button_pane_cp69

0xb53c,	// (0x0003b3b9) cell_afind_pane_g1_ParamLimits

0xb53c,	// (0x0003b3b9) cell_afind_pane_g1

0xb549,	// (0x0003b3c6) cell_afind_pane_t1_ParamLimits

0xb549,	// (0x0003b3c6) cell_afind_pane_t1

0xe320,	// (0x0003e19d) bg_button_pane_cp72

0x247e,	// (0x000322fb) cell_afind_grid_control_pane_g1

0x8bf4,	// (0x00038a71) aid_image_placing_area_ParamLimits

0x8bf4,	// (0x00038a71) aid_image_placing_area

0x1b9f,	// (0x00031a1c) field_vitu_entry_pane_g1_ParamLimits

0x1b9f,	// (0x00031a1c) field_vitu_entry_pane_g1

0x1bab,	// (0x00031a28) field_vitu_entry_pane_g2_ParamLimits

0x1bab,	// (0x00031a28) field_vitu_entry_pane_g2

0x0001,

0xf849,	// (0x0003f6c6) field_vitu_entry_pane_g_ParamLimits

0xf849,	// (0x0003f6c6) field_vitu_entry_pane_g

0xa6f1,	// (0x0003a56e) cell_vitu_itu_pane_g1_ParamLimits

0xa733,	// (0x0003a5b0) cell_vitu_itu_pane_t3_ParamLimits

0xa733,	// (0x0003a5b0) cell_vitu_itu_pane_t3

0x20ba,	// (0x00031f37) mp4_progress_pane_t1_ParamLimits

0x20d3,	// (0x00031f50) mp4_progress_pane_t2_ParamLimits

0xf8de,	// (0x0003f75b) mp4_progress_pane_t_ParamLimits

0x20ec,	// (0x00031f69) mup_progress_pane_cp04_ParamLimits

0xb458,	// (0x0003b2d5) main_myfav_hc_pane_t5_ParamLimits

0xb458,	// (0x0003b2d5) main_myfav_hc_pane_t5

0xd950,	// (0x0003d7cd) aid_zoom_text_primary

0x6409,	// (0x00036286) popup_adpt_find_window_ParamLimits

0xf0be,	// (0x0003ef3b) main_cam_set_pane

0xaf05,	// (0x0003ad82) cam4_zoom_pane_ParamLimits

0xaf05,	// (0x0003ad82) cam4_zoom_pane

0xb55b,	// (0x0003b3d8) main_cam_set_pane_g1_ParamLimits

0xb55b,	// (0x0003b3d8) main_cam_set_pane_g1

0xb569,	// (0x0003b3e6) main_cam_set_pane_g2_ParamLimits

0xb569,	// (0x0003b3e6) main_cam_set_pane_g2

0x0001,

0xf99f,	// (0x0003f81c) main_cam_set_pane_g_ParamLimits

0xf99f,	// (0x0003f81c) main_cam_set_pane_g

0xb575,	// (0x0003b3f2) main_cam_set_pane_t1_ParamLimits

0xb575,	// (0x0003b3f2) main_cam_set_pane_t1

0xb591,	// (0x0003b40e) main_cset_listscroll_pane_ParamLimits

0xb591,	// (0x0003b40e) main_cset_listscroll_pane

0xb5bc,	// (0x0003b439) main_cset_slider_pane_ParamLimits

0xb5bc,	// (0x0003b439) main_cset_slider_pane

0x248f,	// (0x0003230c) main_cset_list_pane_ParamLimits

0x248f,	// (0x0003230c) main_cset_list_pane

0x249f,	// (0x0003231c) scroll_pane_cp028

0xb5db,	// (0x0003b458) aid_area_touch_slider

0xb5f7,	// (0x0003b474) cset_slider_pane

0xb621,	// (0x0003b49e) main_cset_slider_pane_g1

0xb636,	// (0x0003b4b3) main_cset_slider_pane_g2

0x0011,

0xf9a4,	// (0x0003f821) main_cset_slider_pane_g

0x24d8,	// (0x00032355) main_cset_slider_pane_t1

0xb6fe,	// (0x0003b57b) main_cset_slider_pane_t2

0xb718,	// (0x0003b595) main_cset_slider_pane_t3

0xb732,	// (0x0003b5af) main_cset_slider_pane_t4

0xb750,	// (0x0003b5cd) main_cset_slider_pane_t5

0xb772,	// (0x0003b5ef) main_cset_slider_pane_t6

0xb789,	// (0x0003b606) main_cset_slider_pane_t7

0x000e,

0xf9c9,	// (0x0003f846) main_cset_slider_pane_t

0xb897,	// (0x0003b714) cset_list_set_pane_ParamLimits

0xb897,	// (0x0003b714) cset_list_set_pane

0xb8b4,	// (0x0003b731) aid_position_infowindow_above

0xb8bc,	// (0x0003b739) aid_position_infowindow_below

0x55b1,	// (0x0003542e) cset_list_set_pane_g1_ParamLimits

0x55b1,	// (0x0003542e) cset_list_set_pane_g1

0x55bd,	// (0x0003543a) cset_list_set_pane_g3_ParamLimits

0x55bd,	// (0x0003543a) cset_list_set_pane_g3

0x0001,

0xf9e8,	// (0x0003f865) cset_list_set_pane_g_ParamLimits

0xf9e8,	// (0x0003f865) cset_list_set_pane_g

0x55cc,	// (0x00035449) cset_list_set_pane_t1_ParamLimits

0x55cc,	// (0x00035449) cset_list_set_pane_t1

0xf0be,	// (0x0003ef3b) list_highlight_pane_cp021_ParamLimits

0xf0be,	// (0x0003ef3b) list_highlight_pane_cp021

0xecdb,	// (0x0003eb58) cset_slider_pane_g1

0xeced,	// (0x0003eb6a) cset_slider_pane_g2

0xece4,	// (0x0003eb61) cset_slider_pane_g3

0x0002,

0xf9ed,	// (0x0003f86a) cset_slider_pane_g

0xb8c4,	// (0x0003b741) aid_area_touch_cam4_zoom

0xb8cc,	// (0x0003b749) cam4_zoom_cont_pane

0xb8d4,	// (0x0003b751) cam4_zoom_pane_g1

0xb8dc,	// (0x0003b759) cam4_zoom_pane_g2

0xb8e4,	// (0x0003b761) cam4_zoom_pane_g3

0x0002,

0xf9f4,	// (0x0003f871) cam4_zoom_pane_g

0x2f33,	// (0x00032db0) cam4_zoom_cont_pane_g1

0x2f3c,	// (0x00032db9) cam4_zoom_cont_pane_g2

0x2f45,	// (0x00032dc2) cam4_zoom_cont_pane_g3

0x0002,

0xf9fb,	// (0x0003f878) cam4_zoom_cont_pane_g

0xadfe,	// (0x0003ac7b) call4_image_pane_ParamLimits

0xadfe,	// (0x0003ac7b) call4_image_pane

0x2152,	// (0x00031fcf) call4_windows_conf_pane_ParamLimits

0x2191,	// (0x0003200e) popup_call4_audio_in_window_ParamLimits

0x2191,	// (0x0003200e) popup_call4_audio_in_window

0xd932,	// (0x0003d7af) bg_popup_call2_act_pane_cp02

0x2207,	// (0x00032084) call4_list_conf_pane

0x15b3,	// (0x00031430) call4_image_pane_g1

0x15b3,	// (0x00031430) call4_image_pane_g2

0x0001,

0xf70f,	// (0x0003f58c) call4_image_pane_g

0x25b3,	// (0x00032430) list_single_graphic_popup_conf4_pane_ParamLimits

0x25b3,	// (0x00032430) list_single_graphic_popup_conf4_pane

0xd932,	// (0x0003d7af) list_highlight_pane_cp022

0x25c6,	// (0x00032443) list_single_graphic_popup_conf4_pane_g1

0xe9cc,	// (0x0003e849) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa02,	// (0x0003f87f) list_single_graphic_popup_conf4_pane_g

0x25ce,	// (0x0003244b) list_single_graphic_popup_conf4_pane_t1

0x722d,	// (0x000370aa) popup_vtel_slider_window_ParamLimits

0x722d,	// (0x000370aa) popup_vtel_slider_window

0x2102,	// (0x00031f7f) dialer2_ne_pane_t2_ParamLimits

0x2102,	// (0x00031f7f) dialer2_ne_pane_t2

0x0001,

0xf8e3,	// (0x0003f760) dialer2_ne_pane_t_ParamLimits

0xf8e3,	// (0x0003f760) dialer2_ne_pane_t

0xf0be,	// (0x0003ef3b) bg_popup_sub_pane_cp010_ParamLimits

0xf0be,	// (0x0003ef3b) bg_popup_sub_pane_cp010

0xb8ec,	// (0x0003b769) popup_vtel_slider_window_g1_ParamLimits

0xb8ec,	// (0x0003b769) popup_vtel_slider_window_g1

0xb8f8,	// (0x0003b775) popup_vtel_slider_window_g2_ParamLimits

0xb8f8,	// (0x0003b775) popup_vtel_slider_window_g2

0x0003,

0xfa07,	// (0x0003f884) popup_vtel_slider_window_g_ParamLimits

0xfa07,	// (0x0003f884) popup_vtel_slider_window_g

0xb940,	// (0x0003b7bd) vtel_slider_pane_ParamLimits

0xb940,	// (0x0003b7bd) vtel_slider_pane

0xb94f,	// (0x0003b7cc) vtel_slider_pane_g1_ParamLimits

0xb94f,	// (0x0003b7cc) vtel_slider_pane_g1

0xb95c,	// (0x0003b7d9) vtel_slider_pane_g2_ParamLimits

0xb95c,	// (0x0003b7d9) vtel_slider_pane_g2

0xb969,	// (0x0003b7e6) vtel_slider_pane_g3_ParamLimits

0xb969,	// (0x0003b7e6) vtel_slider_pane_g3

0xb94f,	// (0x0003b7cc) vtel_slider_pane_g4_ParamLimits

0xb94f,	// (0x0003b7cc) vtel_slider_pane_g4

0xb976,	// (0x0003b7f3) vtel_slider_pane_g5_ParamLimits

0xb976,	// (0x0003b7f3) vtel_slider_pane_g5

0x0004,

0xfa10,	// (0x0003f88d) vtel_slider_pane_g_ParamLimits

0xfa10,	// (0x0003f88d) vtel_slider_pane_g

0xd932,	// (0x0003d7af) main_gallery2_pane

0xb136,	// (0x0003afb3) aid_size_row_itut2_dropdow_list_ParamLimits

0xb136,	// (0x0003afb3) aid_size_row_itut2_dropdow_list

0xb196,	// (0x0003b013) grid_vitu2_function_top_pane_ParamLimits

0xb196,	// (0x0003b013) grid_vitu2_function_top_pane

0xb1ec,	// (0x0003b069) popup_vitu2_dropdown_list_window_ParamLimits

0xb1ec,	// (0x0003b069) popup_vitu2_dropdown_list_window

0xb20c,	// (0x0003b089) popup_vitu2_match_list_window

0xb983,	// (0x0003b800) cell_vitu2_function_top_pane_ParamLimits

0xb983,	// (0x0003b800) cell_vitu2_function_top_pane

0xb9a3,	// (0x0003b820) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb9a3,	// (0x0003b820) cell_vitu2_function_top_pane_cp01

0xb9c1,	// (0x0003b83e) cell_vitu2_function_top_wide_pane_ParamLimits

0xb9c1,	// (0x0003b83e) cell_vitu2_function_top_wide_pane

0xf0be,	// (0x0003ef3b) bg_button_pane_cp012

0xb9df,	// (0x0003b85c) cell_vitu2_function_top_pane_g1

0xb9ee,	// (0x0003b86b) bg_button_pane_cp013_ParamLimits

0xb9ee,	// (0x0003b86b) bg_button_pane_cp013

0xba0a,	// (0x0003b887) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xba0a,	// (0x0003b887) cell_vitu2_function_top_wide_pane_g1

0x64ed,	// (0x0003636a) bg_popup_sub_pane_cp20

0xba22,	// (0x0003b89f) list_vitu2_match_list_pane

0x2385,	// (0x00032202) bg_popup_sub_pane_cp20_g1

0x238d,	// (0x0003220a) bg_popup_sub_pane_cp20_g2

0xe52d,	// (0x0003e3aa) bg_popup_sub_pane_cp20_g3

0x2395,	// (0x00032212) bg_popup_sub_pane_cp20_g4

0xe50d,	// (0x0003e38a) bg_popup_sub_pane_cp20_g5

0x2606,	// (0x00032483) bg_popup_sub_pane_cp20_g6

0x23a5,	// (0x00032222) bg_popup_sub_pane_cp20_g7

0x23ad,	// (0x0003222a) bg_popup_sub_pane_cp20_g8

0x23b5,	// (0x00032232) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1b,	// (0x0003f898) bg_popup_sub_pane_cp20_g

0xba3a,	// (0x0003b8b7) list_vitu2_match_list_item_pane_ParamLimits

0xba3a,	// (0x0003b8b7) list_vitu2_match_list_item_pane

0xba4c,	// (0x0003b8c9) list_vitu2_match_list_item_pane_t1

0xd932,	// (0x0003d7af) bg_popup_sub_pane_cp21

0xe8d1,	// (0x0003e74e) grid_vitu2_dropdown_list_pane

0xba5a,	// (0x0003b8d7) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xba5a,	// (0x0003b8d7) cell_vitu2_dropdown_list_char_pane

0xba7b,	// (0x0003b8f8) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xba7b,	// (0x0003b8f8) cell_vitu2_dropdown_list_ctrl_pane

0x2660,	// (0x000324dd) cell_vitu2_dropdown_list_char_pane_g1

0x2657,	// (0x000324d4) cell_vitu2_dropdown_list_char_pane_g2

0x264e,	// (0x000324cb) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa38,	// (0x0003f8b5) cell_vitu2_dropdown_list_char_pane_g

0xbaa7,	// (0x0003b924) cell_vitu2_dropdown_list_char_pane_t1

0xbab5,	// (0x0003b932) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xbab5,	// (0x0003b932) cell_vitu2_dropdown_list_ctrl_pane_g1

0xbac5,	// (0x0003b942) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xbac5,	// (0x0003b942) cell_vitu2_dropdown_list_ctrl_pane_g2

0xbad6,	// (0x0003b953) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xbad6,	// (0x0003b953) cell_vitu2_dropdown_list_ctrl_pane_g3

0xbae6,	// (0x0003b963) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xbae6,	// (0x0003b963) cell_vitu2_dropdown_list_ctrl_pane_g4

0x181a,	// (0x00031697) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x181a,	// (0x00031697) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa3f,	// (0x0003f8bc) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa3f,	// (0x0003f8bc) cell_vitu2_dropdown_list_ctrl_pane_g

0xbb02,	// (0x0003b97f) aid_size_cell_gallery2_ParamLimits

0xbb02,	// (0x0003b97f) aid_size_cell_gallery2

0xbb10,	// (0x0003b98d) grid_gallery2_pane_ParamLimits

0xbb10,	// (0x0003b98d) grid_gallery2_pane

0xbb1f,	// (0x0003b99c) scroll_pane_cp029_ParamLimits

0xbb1f,	// (0x0003b99c) scroll_pane_cp029

0xbb2b,	// (0x0003b9a8) cell_gallery2_pane_ParamLimits

0xbb2b,	// (0x0003b9a8) cell_gallery2_pane

0x2669,	// (0x000324e6) cell_gallery2_pane_g2

0xbb5c,	// (0x0003b9d9) cell_gallery2_pane_g3

0x2673,	// (0x000324f0) cell_gallery2_pane_g4

0x267b,	// (0x000324f8) cell_gallery2_pane_g5

0xeba5,	// (0x0003ea22) grid_highlight_pane_cp10

0xb20c,	// (0x0003b089) popup_vitu2_match_list_window_ParamLimits

0xb21e,	// (0x0003b09b) popup_vitu2_query_window_ParamLimits

0xb21e,	// (0x0003b09b) popup_vitu2_query_window

0xd932,	// (0x0003d7af) bg_vitu2_candi_button_pane

0x2660,	// (0x000324dd) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x2657,	// (0x000324d4) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x264e,	// (0x000324cb) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5636,	// (0x000354b3) bg_button_pane_cp015

0xbb64,	// (0x0003b9e1) bg_button_pane_cp016

0xbb6e,	// (0x0003b9eb) bg_button_pane_cp017

0xf0be,	// (0x0003ef3b) bg_popup_sub_pane_cp22

0x2683,	// (0x00032500) popup_vitu2_query_window_g1

0x564d,	// (0x000354ca) popup_vitu2_query_window_g2

0x0001,

0xfa4a,	// (0x0003f8c7) popup_vitu2_query_window_g

0x565b,	// (0x000354d8) popup_vitu2_query_window_t1_ParamLimits

0x565b,	// (0x000354d8) popup_vitu2_query_window_t1

0x5683,	// (0x00035500) popup_vitu2_query_window_t2_ParamLimits

0x5683,	// (0x00035500) popup_vitu2_query_window_t2

0x5695,	// (0x00035512) popup_vitu2_query_window_t3_ParamLimits

0x5695,	// (0x00035512) popup_vitu2_query_window_t3

0xbb89,	// (0x0003ba06) popup_vitu2_query_window_t4_ParamLimits

0xbb89,	// (0x0003ba06) popup_vitu2_query_window_t4

0xbb9d,	// (0x0003ba1a) popup_vitu2_query_window_t5_ParamLimits

0xbb9d,	// (0x0003ba1a) popup_vitu2_query_window_t5

0x0004,

0xfa4f,	// (0x0003f8cc) popup_vitu2_query_window_t_ParamLimits

0xfa4f,	// (0x0003f8cc) popup_vitu2_query_window_t

0x2487,	// (0x00032304) main_cset_text_pane

0xb5db,	// (0x0003b458) aid_area_touch_slider_ParamLimits

0xb5f7,	// (0x0003b474) cset_slider_pane_ParamLimits

0xb621,	// (0x0003b49e) main_cset_slider_pane_g1_ParamLimits

0xb636,	// (0x0003b4b3) main_cset_slider_pane_g2_ParamLimits

0x24a8,	// (0x00032325) main_cset_slider_pane_g3_ParamLimits

0x24a8,	// (0x00032325) main_cset_slider_pane_g3

0xb64b,	// (0x0003b4c8) main_cset_slider_pane_g4_ParamLimits

0xb64b,	// (0x0003b4c8) main_cset_slider_pane_g4

0xb65a,	// (0x0003b4d7) main_cset_slider_pane_g5_ParamLimits

0xb65a,	// (0x0003b4d7) main_cset_slider_pane_g5

0xb668,	// (0x0003b4e5) main_cset_slider_pane_g6_ParamLimits

0xb668,	// (0x0003b4e5) main_cset_slider_pane_g6

0xf9a4,	// (0x0003f821) main_cset_slider_pane_g_ParamLimits

0x24d8,	// (0x00032355) main_cset_slider_pane_t1_ParamLimits

0xb6fe,	// (0x0003b57b) main_cset_slider_pane_t2_ParamLimits

0xb718,	// (0x0003b595) main_cset_slider_pane_t3_ParamLimits

0xb732,	// (0x0003b5af) main_cset_slider_pane_t4_ParamLimits

0xb750,	// (0x0003b5cd) main_cset_slider_pane_t5_ParamLimits

0xb772,	// (0x0003b5ef) main_cset_slider_pane_t6_ParamLimits

0xb789,	// (0x0003b606) main_cset_slider_pane_t7_ParamLimits

0xb7b7,	// (0x0003b634) main_cset_slider_pane_t8_ParamLimits

0xb7b7,	// (0x0003b634) main_cset_slider_pane_t8

0xb7df,	// (0x0003b65c) main_cset_slider_pane_t9_ParamLimits

0xb7df,	// (0x0003b65c) main_cset_slider_pane_t9

0xb807,	// (0x0003b684) main_cset_slider_pane_t10_ParamLimits

0xb807,	// (0x0003b684) main_cset_slider_pane_t10

0xb82f,	// (0x0003b6ac) main_cset_slider_pane_t11_ParamLimits

0xb82f,	// (0x0003b6ac) main_cset_slider_pane_t11

0xb859,	// (0x0003b6d6) main_cset_slider_pane_t12_ParamLimits

0xb859,	// (0x0003b6d6) main_cset_slider_pane_t12

0xb878,	// (0x0003b6f5) main_cset_slider_pane_t13_ParamLimits

0xb878,	// (0x0003b6f5) main_cset_slider_pane_t13

0xf9c9,	// (0x0003f846) main_cset_slider_pane_t_ParamLimits

0xd932,	// (0x0003d7af) bg_popup_sub_pane_cp011

0x268f,	// (0x0003250c) main_cset_text_pane_g1

0x2697,	// (0x00032514) main_cset_text_pane_t1

0x26a5,	// (0x00032522) main_cset_text_pane_t2

0x26b3,	// (0x00032530) main_cset_text_pane_t3

0x26c1,	// (0x0003253e) main_cset_text_pane_t4

0x26cf,	// (0x0003254c) main_cset_text_pane_t5

0x26dd,	// (0x0003255a) main_cset_text_pane_t6

0x26eb,	// (0x00032568) main_cset_text_pane_t7

0x0006,

0xfa5a,	// (0x0003f8d7) main_cset_text_pane_t

0xd932,	// (0x0003d7af) main_cam4_burst_pane

0xd932,	// (0x0003d7af) main_cam5_pane

0xe626,	// (0x0003e4a3) bg_button_pane_cp019

0xb533,	// (0x0003b3b0) bg_button_pane_cp020

0x24b4,	// (0x00032331) main_cset_slider_pane_g7_ParamLimits

0x24b4,	// (0x00032331) main_cset_slider_pane_g7

0x24c0,	// (0x0003233d) main_cset_slider_pane_g8_ParamLimits

0x24c0,	// (0x0003233d) main_cset_slider_pane_g8

0xb67e,	// (0x0003b4fb) main_cset_slider_pane_g9_ParamLimits

0xb67e,	// (0x0003b4fb) main_cset_slider_pane_g9

0xb68a,	// (0x0003b507) main_cset_slider_pane_g10_ParamLimits

0xb68a,	// (0x0003b507) main_cset_slider_pane_g10

0xb696,	// (0x0003b513) main_cset_slider_pane_g11_ParamLimits

0xb696,	// (0x0003b513) main_cset_slider_pane_g11

0xb6a2,	// (0x0003b51f) main_cset_slider_pane_g12_ParamLimits

0xb6a2,	// (0x0003b51f) main_cset_slider_pane_g12

0xb6ae,	// (0x0003b52b) main_cset_slider_pane_g13_ParamLimits

0xb6ae,	// (0x0003b52b) main_cset_slider_pane_g13

0xb6bc,	// (0x0003b539) main_cset_slider_pane_g14_ParamLimits

0xb6bc,	// (0x0003b539) main_cset_slider_pane_g14

0xb6ca,	// (0x0003b547) main_cset_slider_pane_g15_ParamLimits

0xb6ca,	// (0x0003b547) main_cset_slider_pane_g15

0x2506,	// (0x00032383) main_cset_slider_pane_t14_ParamLimits

0x2506,	// (0x00032383) main_cset_slider_pane_t14

0x253f,	// (0x000323bc) main_cset_slider_pane_t15_ParamLimits

0x253f,	// (0x000323bc) main_cset_slider_pane_t15

0xbbb1,	// (0x0003ba2e) aid_cam4_burst_size_cell_ParamLimits

0xbbb1,	// (0x0003ba2e) aid_cam4_burst_size_cell

0xbbcd,	// (0x0003ba4a) grid_cam4_burst_pane_ParamLimits

0xbbcd,	// (0x0003ba4a) grid_cam4_burst_pane

0xbbfd,	// (0x0003ba7a) linegrid_cam4_burst_pane_ParamLimits

0xbbfd,	// (0x0003ba7a) linegrid_cam4_burst_pane

0xbc1f,	// (0x0003ba9c) scroll_pane_cp30_ParamLimits

0xbc1f,	// (0x0003ba9c) scroll_pane_cp30

0xbc2b,	// (0x0003baa8) cell_cam4_burst_pane_ParamLimits

0xbc2b,	// (0x0003baa8) cell_cam4_burst_pane

0x26f9,	// (0x00032576) linegrid_cam4_burst_pane_g1_ParamLimits

0x26f9,	// (0x00032576) linegrid_cam4_burst_pane_g1

0xbc67,	// (0x0003bae4) linegrid_cam4_burst_pane_g2_ParamLimits

0xbc67,	// (0x0003bae4) linegrid_cam4_burst_pane_g2

0x2706,	// (0x00032583) linegrid_cam4_burst_pane_g3_ParamLimits

0x2706,	// (0x00032583) linegrid_cam4_burst_pane_g3

0x0002,

0xfa69,	// (0x0003f8e6) linegrid_cam4_burst_pane_g_ParamLimits

0xfa69,	// (0x0003f8e6) linegrid_cam4_burst_pane_g

0xbc78,	// (0x0003baf5) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xbc78,	// (0x0003baf5) linegrid_cam4_burst_pane_g3_copy1

0x2713,	// (0x00032590) linegrid_cam4_burst_pane_g4_ParamLimits

0x2713,	// (0x00032590) linegrid_cam4_burst_pane_g4

0xbc92,	// (0x0003bb0f) linegrid_cam4_burst_pane_g5_ParamLimits

0xbc92,	// (0x0003bb0f) linegrid_cam4_burst_pane_g5

0xbca3,	// (0x0003bb20) linegrid_cam4_burst_pane_g6_ParamLimits

0xbca3,	// (0x0003bb20) linegrid_cam4_burst_pane_g6

0x2720,	// (0x0003259d) linegrid_cam4_burst_pane_g7_ParamLimits

0x2720,	// (0x0003259d) linegrid_cam4_burst_pane_g7

0xbcb4,	// (0x0003bb31) cell_cam4_burst_pane_g1

0x2739,	// (0x000325b6) main_cam5_pane_t1_ParamLimits

0x2739,	// (0x000325b6) main_cam5_pane_t1

0x274b,	// (0x000325c8) main_cam5_pane_t2_ParamLimits

0x274b,	// (0x000325c8) main_cam5_pane_t2

0x275d,	// (0x000325da) main_cam5_pane_t3_ParamLimits

0x275d,	// (0x000325da) main_cam5_pane_t3

0x276f,	// (0x000325ec) main_cam5_pane_t4_ParamLimits

0x276f,	// (0x000325ec) main_cam5_pane_t4

0x2785,	// (0x00032602) main_cam5_pane_t5_ParamLimits

0x2785,	// (0x00032602) main_cam5_pane_t5

0x2797,	// (0x00032614) main_cam5_pane_t6_ParamLimits

0x2797,	// (0x00032614) main_cam5_pane_t6

0x27ab,	// (0x00032628) main_cam5_pane_t7_ParamLimits

0x27ab,	// (0x00032628) main_cam5_pane_t7

0x27bd,	// (0x0003263a) main_cam5_pane_t8_ParamLimits

0x27bd,	// (0x0003263a) main_cam5_pane_t8

0x27d9,	// (0x00032656) main_cam5_pane_t9_ParamLimits

0x27d9,	// (0x00032656) main_cam5_pane_t9

0x27eb,	// (0x00032668) main_cam5_pane_t10_ParamLimits

0x27eb,	// (0x00032668) main_cam5_pane_t10

0x27fd,	// (0x0003267a) main_cam5_pane_t11_ParamLimits

0x27fd,	// (0x0003267a) main_cam5_pane_t11

0x280f,	// (0x0003268c) main_cam5_pane_t12_ParamLimits

0x280f,	// (0x0003268c) main_cam5_pane_t12

0x2824,	// (0x000326a1) main_cam5_pane_t13_ParamLimits

0x2824,	// (0x000326a1) main_cam5_pane_t13

0x000c,

0xfa75,	// (0x0003f8f2) main_cam5_pane_t_ParamLimits

0xfa75,	// (0x0003f8f2) main_cam5_pane_t

0x64b6,	// (0x00036333) popup_scut_keymap_window_ParamLimits

0x64b6,	// (0x00036333) popup_scut_keymap_window

0xbcc7,	// (0x0003bb44) aid_size_cell_brow_shortcut

0xeba5,	// (0x0003ea22) bg_popup_window_pane_cp010

0xbcd3,	// (0x0003bb50) grid_scut_pane

0xbcdf,	// (0x0003bb5c) cell_scut_pane_ParamLimits

0xbcdf,	// (0x0003bb5c) cell_scut_pane

0xbcf6,	// (0x0003bb73) cell_scut_pane_g1

0x2841,	// (0x000326be) cell_scut_pane_t1

0x2850,	// (0x000326cd) cell_scut_pane_t2

0xbcff,	// (0x0003bb7c) cell_scut_pane_t3

0x0002,

0xfa90,	// (0x0003f90d) cell_scut_pane_t

0x9d72,	// (0x00039bef) main_mup3_pane_g8_ParamLimits

0x9d72,	// (0x00039bef) main_mup3_pane_g8

0xb144,	// (0x0003afc1) area_vitu2_query_pane_ParamLimits

0xb144,	// (0x0003afc1) area_vitu2_query_pane

0x5640,	// (0x000354bd) input_focus_pane_cp08

0x285f,	// (0x000326dc) area_vitu2_query_pane_g1

0x56bd,	// (0x0003553a) area_vitu2_query_pane_g2

0x0001,

0xfa97,	// (0x0003f914) area_vitu2_query_pane_g

0xbd0d,	// (0x0003bb8a) area_vitu2_query_pane_t1_ParamLimits

0xbd0d,	// (0x0003bb8a) area_vitu2_query_pane_t1

0xbd21,	// (0x0003bb9e) area_vitu2_query_pane_t2_ParamLimits

0xbd21,	// (0x0003bb9e) area_vitu2_query_pane_t2

0x56ce,	// (0x0003554b) area_vitu2_query_pane_t3_ParamLimits

0x56ce,	// (0x0003554b) area_vitu2_query_pane_t3

0x56f6,	// (0x00035573) area_vitu2_query_pane_t4_ParamLimits

0x56f6,	// (0x00035573) area_vitu2_query_pane_t4

0x571e,	// (0x0003559b) area_vitu2_query_pane_t5_ParamLimits

0x571e,	// (0x0003559b) area_vitu2_query_pane_t5

0x5746,	// (0x000355c3) area_vitu2_query_pane_t6_ParamLimits

0x5746,	// (0x000355c3) area_vitu2_query_pane_t6

0x0006,

0xfa9c,	// (0x0003f919) area_vitu2_query_pane_t_ParamLimits

0xfa9c,	// (0x0003f919) area_vitu2_query_pane_t

0xbd35,	// (0x0003bbb2) bg_button_pane_cp018

0xbd43,	// (0x0003bbc0) bg_button_pane_cp021

0x5792,	// (0x0003560f) bg_button_pane_cp022

0x57a3,	// (0x00035620) input_focus_pane_cp09

0x82f5,	// (0x00038172) aid_size_touch_mv_arrow_left

0x8320,	// (0x0003819d) aid_size_touch_mv_arrow_right

0xb6e2,	// (0x0003b55f) main_cset_slider_pane_g16_ParamLimits

0xb6e2,	// (0x0003b55f) main_cset_slider_pane_g16

0xb6f0,	// (0x0003b56d) main_cset_slider_pane_g17_ParamLimits

0xb6f0,	// (0x0003b56d) main_cset_slider_pane_g17

0xbcb4,	// (0x0003bb31) cell_cam4_burst_pane_g1_ParamLimits

0xd932,	// (0x0003d7af) compa_mode_pane

0xb904,	// (0x0003b781) popup_vtel_slider_window_g3_ParamLimits

0xb904,	// (0x0003b781) popup_vtel_slider_window_g3

0xb918,	// (0x0003b795) popup_vtel_slider_window_g4_ParamLimits

0xb918,	// (0x0003b795) popup_vtel_slider_window_g4

0xb92c,	// (0x0003b7a9) popup_vtel_slider_window_t1_ParamLimits

0xb92c,	// (0x0003b7a9) popup_vtel_slider_window_t1

0xd932,	// (0x0003d7af) main_cl_pane

0x10d3,	// (0x00030f50) popup_imed_adjust2_window_ParamLimits

0x10ab,	// (0x00030f28) bg_tb_trans_pane_cp05_ParamLimits

0x1ad4,	// (0x00031951) popup_imed_adjust2_window_g1_ParamLimits

0x1ae3,	// (0x00031960) popup_imed_adjust2_window_g2_ParamLimits

0x1ae3,	// (0x00031960) popup_imed_adjust2_window_g2

0x1aef,	// (0x0003196c) popup_imed_adjust2_window_g3_ParamLimits

0x1aef,	// (0x0003196c) popup_imed_adjust2_window_g3

0x0002,

0xf80d,	// (0x0003f68a) popup_imed_adjust2_window_g_ParamLimits

0xf80d,	// (0x0003f68a) popup_imed_adjust2_window_g

0x1afb,	// (0x00031978) popup_imed_adjust2_window_t1_ParamLimits

0x1b13,	// (0x00031990) slider_imed_adjust_pane_ParamLimits

0x1b27,	// (0x000319a4) slider_imed_adjust_pane_g1_ParamLimits

0x1b37,	// (0x000319b4) slider_imed_adjust_pane_g2_ParamLimits

0x1b47,	// (0x000319c4) slider_imed_adjust_pane_g3_ParamLimits

0x1b58,	// (0x000319d5) slider_imed_adjust_pane_g4_ParamLimits

0xf814,	// (0x0003f691) slider_imed_adjust_pane_g_ParamLimits

0xaeba,	// (0x0003ad37) aid_touch_area_cam4_ParamLimits

0xaeba,	// (0x0003ad37) aid_touch_area_cam4

0xaeca,	// (0x0003ad47) battery_pane_cp01

0xaf45,	// (0x0003adc2) main_camera4_pane_g6_ParamLimits

0xaf45,	// (0x0003adc2) main_camera4_pane_g6

0xaf63,	// (0x0003ade0) main_camera4_pane_t2_ParamLimits

0xaf63,	// (0x0003ade0) main_camera4_pane_t2

0x0001,

0xf917,	// (0x0003f794) main_camera4_pane_t_ParamLimits

0xf917,	// (0x0003f794) main_camera4_pane_t

0xafe1,	// (0x0003ae5e) aid_touch_area_vid4_ParamLimits

0xafe1,	// (0x0003ae5e) aid_touch_area_vid4

0xb021,	// (0x0003ae9e) main_video4_pane_g5_ParamLimits

0xb021,	// (0x0003ae9e) main_video4_pane_g5

0xb043,	// (0x0003aec0) vid4_progress_pane_ParamLimits

0xb043,	// (0x0003aec0) vid4_progress_pane

0x24cc,	// (0x00032349) main_cset_slider_pane_g18_ParamLimits

0x24cc,	// (0x00032349) main_cset_slider_pane_g18

0x272d,	// (0x000325aa) cell_cam4_burst_pane_g2_ParamLimits

0x272d,	// (0x000325aa) cell_cam4_burst_pane_g2

0x0001,

0xfa70,	// (0x0003f8ed) cell_cam4_burst_pane_g_ParamLimits

0xfa70,	// (0x0003f8ed) cell_cam4_burst_pane_g

0xbd4f,	// (0x0003bbcc) bg_cl_pane_ParamLimits

0xbd4f,	// (0x0003bbcc) bg_cl_pane

0xbd5b,	// (0x0003bbd8) cl_header_pane_ParamLimits

0xbd5b,	// (0x0003bbd8) cl_header_pane

0xbd67,	// (0x0003bbe4) cl_listscroll_pane_ParamLimits

0xbd67,	// (0x0003bbe4) cl_listscroll_pane

0x2907,	// (0x00032784) bg_cl_pane_g1

0x290f,	// (0x0003278c) bg_cl_pane_g2

0x2917,	// (0x00032794) bg_cl_pane_g3

0x291f,	// (0x0003279c) bg_cl_pane_g4

0x2927,	// (0x000327a4) bg_cl_pane_g5

0x292f,	// (0x000327ac) bg_cl_pane_g6

0x2937,	// (0x000327b4) bg_cl_pane_g7

0x293f,	// (0x000327bc) bg_cl_pane_g8

0x2947,	// (0x000327c4) bg_cl_pane_g9

0x0008,

0xfaab,	// (0x0003f928) bg_cl_pane_g

0xbd73,	// (0x0003bbf0) aid_height_cl_leading_ParamLimits

0xbd73,	// (0x0003bbf0) aid_height_cl_leading

0xbd7f,	// (0x0003bbfc) aid_height_cl_text_ParamLimits

0xbd7f,	// (0x0003bbfc) aid_height_cl_text

0x64ed,	// (0x0003636a) bg_cl_header_pane_ParamLimits

0x64ed,	// (0x0003636a) bg_cl_header_pane

0xbd97,	// (0x0003bc14) cl_header_pane_g1_ParamLimits

0xbd97,	// (0x0003bc14) cl_header_pane_g1

0xbda4,	// (0x0003bc21) cl_header_pane_t1_ParamLimits

0xbda4,	// (0x0003bc21) cl_header_pane_t1

0x294f,	// (0x000327cc) cl_list_pane

0x249f,	// (0x0003231c) hc_scroll_pane_cp01

0xe50d,	// (0x0003e38a) bg_cl_header_pane_g1

0x2385,	// (0x00032202) bg_cl_header_pane_g2

0xe52d,	// (0x0003e3aa) bg_cl_header_pane_g3

0x2395,	// (0x00032212) bg_cl_header_pane_g4

0x238d,	// (0x0003220a) bg_cl_header_pane_g5

0x2606,	// (0x00032483) bg_cl_header_pane_g6

0x23ad,	// (0x0003222a) bg_cl_header_pane_g7

0x23b5,	// (0x00032232) bg_cl_header_pane_g8

0x23a5,	// (0x00032222) bg_cl_header_pane_g9

0x0008,

0xfabe,	// (0x0003f93b) bg_cl_header_pane_g

0xbdb6,	// (0x0003bc33) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xbdb6,	// (0x0003bc33) hc_cl_list_double_graphic_heading_pane

0xbdcd,	// (0x0003bc4a) hc_cl_list_single_graphic_pane_ParamLimits

0xbdcd,	// (0x0003bc4a) hc_cl_list_single_graphic_pane

0xbded,	// (0x0003bc6a) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xbded,	// (0x0003bc6a) hc_cl_list_single_graphic_pane_g1

0xbdf9,	// (0x0003bc76) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xbdf9,	// (0x0003bc76) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfad1,	// (0x0003f94e) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfad1,	// (0x0003f94e) hc_cl_list_single_graphic_pane_g

0xbe0d,	// (0x0003bc8a) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xbe0d,	// (0x0003bc8a) hc_cl_list_single_graphic_pane_t1

0xbded,	// (0x0003bc6a) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xbded,	// (0x0003bc6a) hc_cl_list_double_graphic_heading_pane_g1

0xbe22,	// (0x0003bc9f) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xbe22,	// (0x0003bc9f) hc_cl_list_double_graphic_heading_pane_g2

0xbe36,	// (0x0003bcb3) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xbe36,	// (0x0003bcb3) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfad6,	// (0x0003f953) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfad6,	// (0x0003f953) hc_cl_list_double_graphic_heading_pane_g

0xbe4a,	// (0x0003bcc7) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xbe4a,	// (0x0003bcc7) hc_cl_list_double_graphic_heading_pane_t1

0xbe5f,	// (0x0003bcdc) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xbe5f,	// (0x0003bcdc) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfadd,	// (0x0003f95a) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfadd,	// (0x0003f95a) hc_cl_list_double_graphic_heading_pane_t

0xbe7c,	// (0x0003bcf9) vid4_progress_pane_g1

0xbe8c,	// (0x0003bd09) vid4_progress_pane_g2

0xbe9c,	// (0x0003bd19) vid4_progress_pane_g3

0xafa9,	// (0x0003ae26) vid4_progress_pane_g4

0x0004,

0xfae2,	// (0x0003f95f) vid4_progress_pane_g

0xbea8,	// (0x0003bd25) vid4_progress_pane_t1

0xbebd,	// (0x0003bd3a) vid4_progress_pane_t2

0x0002,

0xfaed,	// (0x0003f96a) vid4_progress_pane_t

0xbee8,	// (0x0003bd65) wait_bar_pane_cp07

0x13a4,	// (0x00031221) blid_firmament_pane_ParamLimits

0x13e7,	// (0x00031264) popup_blid_sat_info2_window_g1

0x140b,	// (0x00031288) popup_blid_sat_info2_window_t3

0x1419,	// (0x00031296) popup_blid_sat_info2_window_t4

0x1427,	// (0x000312a4) popup_blid_sat_info2_window_t5

0x1435,	// (0x000312b2) popup_blid_sat_info2_window_t6

0x1445,	// (0x000312c2) popup_blid_sat_info2_window_t7

0x1453,	// (0x000312d0) popup_blid_sat_info2_window_t8

0x1461,	// (0x000312de) popup_blid_sat_info2_window_t9

0x146f,	// (0x000312ec) popup_blid_sat_info2_window_t10

0x1533,	// (0x000313b0) aid_firma_cardinal_ParamLimits

0x1547,	// (0x000313c4) blid_firmament_pane_t1_ParamLimits

0x155e,	// (0x000313db) blid_firmament_pane_t2_ParamLimits

0x1575,	// (0x000313f2) blid_firmament_pane_t3_ParamLimits

0x158c,	// (0x00031409) blid_firmament_pane_t4_ParamLimits

0xf706,	// (0x0003f583) blid_firmament_pane_t_ParamLimits

0x15a3,	// (0x00031420) blid_sat_info_pane_ParamLimits

0xf0be,	// (0x0003ef3b) main_cam_set_pane_ParamLimits

0xa50b,	// (0x0003a388) aid_size_cell_colour_35_ParamLimits

0xa525,	// (0x0003a3a2) aid_size_cell_colour_112_ParamLimits

0xa53c,	// (0x0003a3b9) aid_size_cell_effect_ParamLimits

0xf0be,	// (0x0003ef3b) bg_tb_trans_pane_cp02_ParamLimits

0xf0cc,	// (0x0003ef49) heading_imed_pane_ParamLimits

0xa556,	// (0x0003a3d3) listscroll_imed_pane_ParamLimits

0x06dd,	// (0x0003055a) popup_call2_audio_first_window_g5_ParamLimits

0x06dd,	// (0x0003055a) popup_call2_audio_first_window_g5

0xac77,	// (0x0003aaf4) aid_size_touch_image3_arrow_left_ParamLimits

0xac77,	// (0x0003aaf4) aid_size_touch_image3_arrow_left

0xac8d,	// (0x0003ab0a) aid_size_touch_image3_arrow_right_ParamLimits

0xac8d,	// (0x0003ab0a) aid_size_touch_image3_arrow_right

0xbed3,	// (0x0003bd50) vid4_progress_pane_t3

0xa7fc,	// (0x0003a679) main_hwr_training_symbol_option_pane_ParamLimits

0xa7fc,	// (0x0003a679) main_hwr_training_symbol_option_pane

0x1dc1,	// (0x00031c3e) popup_hwr_training_preview_window_ParamLimits

0x1dc1,	// (0x00031c3e) popup_hwr_training_preview_window

0xa85d,	// (0x0003a6da) hwr_training_navi_pane_g5_ParamLimits

0xa85d,	// (0x0003a6da) hwr_training_navi_pane_g5

0x2365,	// (0x000321e2) popup_char_count_window

0x64ed,	// (0x0003636a) bg_popup_sub_pane_cp20_ParamLimits

0xba22,	// (0x0003b89f) list_vitu2_match_list_pane_ParamLimits

0xba2e,	// (0x0003b8ab) vitu2_page_scroll_pane_ParamLimits

0xba2e,	// (0x0003b8ab) vitu2_page_scroll_pane

0x2a2a,	// (0x000328a7) list_single_hwr_training_symbol_option_pane_ParamLimits

0x2a2a,	// (0x000328a7) list_single_hwr_training_symbol_option_pane

0x2a3d,	// (0x000328ba) list_single_hwr_training_symbol_option_pane_g1

0x2a45,	// (0x000328c2) list_single_hwr_training_symbol_option_pane_t1

0x2a53,	// (0x000328d0) bg_button_pane_cp023

0x2a5c,	// (0x000328d9) bg_button_pane_cp024

0xbef8,	// (0x0003bd75) vitu2_page_scroll_pane_g1

0xbf00,	// (0x0003bd7d) vitu2_page_scroll_pane_g2

0x0001,

0xfaf4,	// (0x0003f971) vitu2_page_scroll_pane_g

0xbf08,	// (0x0003bd85) vitu2_page_scroll_pane_t1

0x12c0,	// (0x0003113d) popup_char_count_window_g1

0x2a8f,	// (0x0003290c) popup_char_count_window_g2

0x2a98,	// (0x00032915) popup_char_count_window_g3

0x0002,

0xfaf9,	// (0x0003f976) popup_char_count_window_g

0x2aa1,	// (0x0003291e) popup_char_count_window_t1

0xd932,	// (0x0003d7af) main_vded2_pane

0x1ac0,	// (0x0003193d) aid_size_cell_imed_line

0x1aca,	// (0x00031947) grid_imed_line_width_pane

0xb099,	// (0x0003af16) vid4_indicators_pane_g4

0x2aaf,	// (0x0003292c) cell_imed_line_width_pane_ParamLimits

0x2aaf,	// (0x0003292c) cell_imed_line_width_pane

0x2ac3,	// (0x00032940) cell_imed_line_width_pane_g1

0x1352,	// (0x000311cf) cell_imed_line_width_pane_g2

0x0001,

0xfb00,	// (0x0003f97d) cell_imed_line_width_pane_g

0xbf17,	// (0x0003bd94) main_vded2_pane_g1_ParamLimits

0xbf17,	// (0x0003bd94) main_vded2_pane_g1

0xbf24,	// (0x0003bda1) main_vded2_pane_g2_ParamLimits

0xbf24,	// (0x0003bda1) main_vded2_pane_g2

0x0001,

0xfb05,	// (0x0003f982) main_vded2_pane_g_ParamLimits

0xfb05,	// (0x0003f982) main_vded2_pane_g

0xbf32,	// (0x0003bdaf) vded2_slider_pane_ParamLimits

0xbf32,	// (0x0003bdaf) vded2_slider_pane

0xbf3f,	// (0x0003bdbc) aid_size_touch_vded2_end

0xbf49,	// (0x0003bdc6) aid_size_touch_vded2_playhead

0x2acc,	// (0x00032949) aid_size_touch_vded2_start

0x2ad4,	// (0x00032951) vded2_slider_bg_pane

0x2add,	// (0x0003295a) vded2_slider_pane_g1

0x2ae6,	// (0x00032963) vded2_slider_pane_g2

0xbf51,	// (0x0003bdce) vded2_slider_pane_g3

0x0002,

0xfb0a,	// (0x0003f987) vded2_slider_pane_g

0x2aee,	// (0x0003296b) vded2_slider_bg_pane_g1

0x2af7,	// (0x00032974) vded2_slider_bg_pane_g2

0x2b00,	// (0x0003297d) vded2_slider_bg_pane_g3

0x0002,

0xfb11,	// (0x0003f98e) vded2_slider_bg_pane_g

0x8951,	// (0x000387ce) aid_postcard_touch_down_pane_ParamLimits

0x8951,	// (0x000387ce) aid_postcard_touch_down_pane

0x8961,	// (0x000387de) aid_postcard_touch_up_pane_ParamLimits

0x8961,	// (0x000387de) aid_postcard_touch_up_pane

0xd932,	// (0x0003d7af) main_blid2_pane

0x10b9,	// (0x00030f36) popup_blid2_search_window

0xd932,	// (0x0003d7af) blid2_gps_pane

0xd932,	// (0x0003d7af) blid2_navig_pane

0xd932,	// (0x0003d7af) blid2_search_pane

0xd932,	// (0x0003d7af) blid2_tripm_pane

0xbf5a,	// (0x0003bdd7) blid2_search_pane_g1_ParamLimits

0xbf5a,	// (0x0003bdd7) blid2_search_pane_g1

0xbf6a,	// (0x0003bde7) blid2_search_pane_t1_ParamLimits

0xbf6a,	// (0x0003bde7) blid2_search_pane_t1

0xbf7c,	// (0x0003bdf9) aid_size_cell_blid2_gps_ParamLimits

0xbf7c,	// (0x0003bdf9) aid_size_cell_blid2_gps

0xbf8c,	// (0x0003be09) blid2_gps_pane_g1_ParamLimits

0xbf8c,	// (0x0003be09) blid2_gps_pane_g1

0xbf98,	// (0x0003be15) grid_blid2_satellite_pane_ParamLimits

0xbf98,	// (0x0003be15) grid_blid2_satellite_pane

0xbfa8,	// (0x0003be25) blid2_navig_pane_g1_ParamLimits

0xbfa8,	// (0x0003be25) blid2_navig_pane_g1

0xbfb4,	// (0x0003be31) blid2_navig_pane_t1_ParamLimits

0xbfb4,	// (0x0003be31) blid2_navig_pane_t1

0xbfc6,	// (0x0003be43) blid2_navig_pane_t2_ParamLimits

0xbfc6,	// (0x0003be43) blid2_navig_pane_t2

0x0001,

0xfb18,	// (0x0003f995) blid2_navig_pane_t_ParamLimits

0xfb18,	// (0x0003f995) blid2_navig_pane_t

0xbfd8,	// (0x0003be55) blid2_navig_ring_pane_ParamLimits

0xbfd8,	// (0x0003be55) blid2_navig_ring_pane

0xbfe8,	// (0x0003be65) blid2_speed_pane_ParamLimits

0xbfe8,	// (0x0003be65) blid2_speed_pane

0xbff4,	// (0x0003be71) blid2_tripm_pane_g1_ParamLimits

0xbff4,	// (0x0003be71) blid2_tripm_pane_g1

0xc004,	// (0x0003be81) blid2_tripm_pane_g2_ParamLimits

0xc004,	// (0x0003be81) blid2_tripm_pane_g2

0xc010,	// (0x0003be8d) blid2_tripm_pane_g3_ParamLimits

0xc010,	// (0x0003be8d) blid2_tripm_pane_g3

0xc01c,	// (0x0003be99) blid2_tripm_pane_g4_ParamLimits

0xc01c,	// (0x0003be99) blid2_tripm_pane_g4

0xc028,	// (0x0003bea5) blid2_tripm_pane_g5_ParamLimits

0xc028,	// (0x0003bea5) blid2_tripm_pane_g5

0x0005,

0xfb1d,	// (0x0003f99a) blid2_tripm_pane_g_ParamLimits

0xfb1d,	// (0x0003f99a) blid2_tripm_pane_g

0xc044,	// (0x0003bec1) blid2_tripm_pane_t1_ParamLimits

0xc044,	// (0x0003bec1) blid2_tripm_pane_t1

0xc058,	// (0x0003bed5) blid2_tripm_pane_t2_ParamLimits

0xc058,	// (0x0003bed5) blid2_tripm_pane_t2

0xc06c,	// (0x0003bee9) blid2_tripm_pane_t3_ParamLimits

0xc06c,	// (0x0003bee9) blid2_tripm_pane_t3

0x0003,

0xfb2a,	// (0x0003f9a7) blid2_tripm_pane_t_ParamLimits

0xfb2a,	// (0x0003f9a7) blid2_tripm_pane_t

0xc09e,	// (0x0003bf1b) cell_blid2_satellite_pane_ParamLimits

0xc09e,	// (0x0003bf1b) cell_blid2_satellite_pane

0xc0b8,	// (0x0003bf35) cell_blid2_satellite_pane_g1

0x2b09,	// (0x00032986) cell_blid2_satellite_pane_t1

0x15b3,	// (0x00031430) blid2_speed_pane_g1

0x2b17,	// (0x00032994) blid2_speed_pane_t1

0x2b25,	// (0x000329a2) blid2_speed_pane_t2

0x0001,

0xfb33,	// (0x0003f9b0) blid2_speed_pane_t

0x15b3,	// (0x00031430) blid2_navig_ring_pane_g1

0xc0c1,	// (0x0003bf3e) blid2_navig_ring_pane_g2

0xc0c9,	// (0x0003bf46) blid2_navig_ring_pane_g3

0xc0d1,	// (0x0003bf4e) blid2_navig_ring_pane_g4

0xc0d9,	// (0x0003bf56) blid2_navig_ring_pane_g5

0x0004,

0xfb38,	// (0x0003f9b5) blid2_navig_ring_pane_g

0xd932,	// (0x0003d7af) bg_popup_window_pane_cp011

0x2b33,	// (0x000329b0) popup_blid2_search_window_g1

0x2b3b,	// (0x000329b8) popup_blid2_search_window_t1

0x2b49,	// (0x000329c6) popup_blid2_search_window_t2

0x0001,

0xfb43,	// (0x0003f9c0) popup_blid2_search_window_t

0xe41c,	// (0x0003e299) main_browser_pane_g1

0xe115,	// (0x0003df92) main_browser_pane_ParamLimits

0xf0be,	// (0x0003ef3b) bg_button_pane_cp011_ParamLimits

0xb302,	// (0x0003b17f) cell_vitu2_function_pane_g1_ParamLimits

0xf0be,	// (0x0003ef3b) bg_popup_sub_pane_cp22_ParamLimits

0x5640,	// (0x000354bd) input_focus_pane_cp08_ParamLimits

0xbb78,	// (0x0003b9f5) popup_vitu2_query_button_pane_ParamLimits

0xbb78,	// (0x0003b9f5) popup_vitu2_query_button_pane

0x5636,	// (0x000354b3) popup_vitu2_query_input_button_pane

0x2683,	// (0x00032500) popup_vitu2_query_window_g1_ParamLimits

0x564d,	// (0x000354ca) popup_vitu2_query_window_g2_ParamLimits

0xfa4a,	// (0x0003f8c7) popup_vitu2_query_window_g_ParamLimits

0xd932,	// (0x0003d7af) bg_button_pane_cp026

0xc0e1,	// (0x0003bf5e) popup_vitu2_query_input_button_pane_g1

0xd932,	// (0x0003d7af) bg_button_pane_cp025

0x2b57,	// (0x000329d4) popup_vitu2_query_button_pane_t1

0x9abb,	// (0x00039938) main_mp3_pane_t6

0x9acb,	// (0x00039948) popup_slider_window_cp01

0xaf90,	// (0x0003ae0d) cam4_battery_pane

0xb06f,	// (0x0003aeec) cam4_battery_pane_cp02

0xbe74,	// (0x0003bcf1) cam4_battery_pane_cp01

0xbe74,	// (0x0003bcf1) cam4_battery_pane_cp03

0x15b3,	// (0x00031430) cam4_battery_pane_g1

0x20f8,	// (0x00031f75) cam4_battery_pane_g2

0x0001,

0xfb48,	// (0x0003f9c5) cam4_battery_pane_g

0x147d,	// (0x000312fa) popup_blid_sat_info2_window_t11

0x82f5,	// (0x00038172) aid_size_touch_mv_arrow_left_ParamLimits

0x8320,	// (0x0003819d) aid_size_touch_mv_arrow_right_ParamLimits

0xeb05,	// (0x0003e982) navi_pane_g1_ParamLimits

0x8349,	// (0x000381c6) navi_pane_g2_ParamLimits

0x8377,	// (0x000381f4) navi_pane_g3_ParamLimits

0xf418,	// (0x0003f295) navi_pane_g_ParamLimits

0x83d1,	// (0x0003824e) navi_pane_mv_t1_ParamLimits

0xa562,	// (0x0003a3df) grid_imed_effect_pane_ParamLimits

0xe365,	// (0x0003e1e2) aid_placing_vt_slider_lsc

0xe36d,	// (0x0003e1ea) aid_placing_vt_slider_prt

0xf0be,	// (0x0003ef3b) bg_tb_trans_pane_cp01_ParamLimits

0x173a,	// (0x000315b7) popup_image_details_window_g1_ParamLimits

0x174d,	// (0x000315ca) popup_image_details_window_g2_ParamLimits

0x1762,	// (0x000315df) popup_image_details_window_g3_ParamLimits

0x1762,	// (0x000315df) popup_image_details_window_g3

0xf74b,	// (0x0003f5c8) popup_image_details_window_g_ParamLimits

0x1776,	// (0x000315f3) popup_image_details_window_t1_ParamLimits

0x1788,	// (0x00031605) popup_image_details_window_t2_ParamLimits

0x17a1,	// (0x0003161e) popup_image_details_window_t3_ParamLimits

0x17b5,	// (0x00031632) popup_image_details_window_t4_ParamLimits

0x17d0,	// (0x0003164d) popup_image_details_window_t5_ParamLimits

0xf752,	// (0x0003f5cf) popup_image_details_window_t_ParamLimits

0xbd8b,	// (0x0003bc08) cl_header_name_pane_ParamLimits

0xbd8b,	// (0x0003bc08) cl_header_name_pane

0xc0e9,	// (0x0003bf66) cl_header_name_pane_t1_ParamLimits

0xc0e9,	// (0x0003bf66) cl_header_name_pane_t1

0xc100,	// (0x0003bf7d) cl_header_name_pane_t2_ParamLimits

0xc100,	// (0x0003bf7d) cl_header_name_pane_t2

0xc12a,	// (0x0003bfa7) cl_header_name_pane_t3_ParamLimits

0xc12a,	// (0x0003bfa7) cl_header_name_pane_t3

0x0002,

0xfb4d,	// (0x0003f9ca) cl_header_name_pane_t_ParamLimits

0xfb4d,	// (0x0003f9ca) cl_header_name_pane_t

0x83a2,	// (0x0003821f) navi_pane_mv_g2_ParamLimits

0x22f1,	// (0x0003216e) field_vitu2_entry_pane_g1_ParamLimits

0x22fd,	// (0x0003217a) field_vitu2_entry_pane_g2_ParamLimits

0x2309,	// (0x00032186) field_vitu2_entry_pane_g3_ParamLimits

0x2309,	// (0x00032186) field_vitu2_entry_pane_g3

0xf949,	// (0x0003f7c6) field_vitu2_entry_pane_g_ParamLimits

0xb292,	// (0x0003b10f) cell_vitu2_itu_pane_g1_ParamLimits

0xb2a2,	// (0x0003b11f) cell_vitu2_itu_pane_g2_ParamLimits

0xb2a2,	// (0x0003b11f) cell_vitu2_itu_pane_g2

0x0001,

0xf955,	// (0x0003f7d2) cell_vitu2_itu_pane_g_ParamLimits

0xf955,	// (0x0003f7d2) cell_vitu2_itu_pane_g

0xf0be,	// (0x0003ef3b) bg_vkb2_func_pane_cp05_ParamLimits

0xf0be,	// (0x0003ef3b) bg_vkb2_func_pane_cp05

0xf0be,	// (0x0003ef3b) bg_vkb2_func_pane_cp03

0xf0be,	// (0x0003ef3b) bg_vkb2_func_pane_cp04

0xf0be,	// (0x0003ef3b) bg_vkb2_func_pane_cp10_ParamLimits

0xf0be,	// (0x0003ef3b) bg_vkb2_func_pane_cp10

0x5792,	// (0x0003560f) bg_vkb2_func_pane_cp08

0xbd35,	// (0x0003bbb2) bg_vkb2_func_pane_cp06

0xbd43,	// (0x0003bbc0) bg_vkb2_func_pane_cp07

0x2a65,	// (0x000328e2) bg_vkb2_func_pane_cp11_ParamLimits

0x2a65,	// (0x000328e2) bg_vkb2_func_pane_cp11

0x2a7a,	// (0x000328f7) bg_vkb2_func_pane_cp12_ParamLimits

0x2a7a,	// (0x000328f7) bg_vkb2_func_pane_cp12

0xd932,	// (0x0003d7af) bg_vkb2_func_pane_cp09

0x2385,	// (0x00032202) bg_vkb2_func_pane_g1

0xe52d,	// (0x0003e3aa) bg_vkb2_func_pane_g2

0x238d,	// (0x0003220a) bg_vkb2_func_pane_g3

0x2395,	// (0x00032212) bg_vkb2_func_pane_g4

0x2606,	// (0x00032483) bg_vkb2_func_pane_g5

0x23ad,	// (0x0003222a) bg_vkb2_func_pane_g6

0x23b5,	// (0x00032232) bg_vkb2_func_pane_g7

0x23a5,	// (0x00032222) bg_vkb2_func_pane_g8

0xe50d,	// (0x0003e38a) bg_vkb2_func_pane_g9

0x0008,

0xfb54,	// (0x0003f9d1) bg_vkb2_func_pane_g

0xc036,	// (0x0003beb3) blid2_tripm_pane_g6_ParamLimits

0xc036,	// (0x0003beb3) blid2_tripm_pane_g6

0x20b2,	// (0x00031f2f) mp4_progress_pane_g1

0xc092,	// (0x0003bf0f) blid2_tripm_values_pane_ParamLimits

0xc092,	// (0x0003bf0f) blid2_tripm_values_pane

0xc14f,	// (0x0003bfcc) blid2_tripm_values_pane_t1

0xc15d,	// (0x0003bfda) blid2_tripm_values_pane_t2

0xc16b,	// (0x0003bfe8) blid2_tripm_values_pane_t3

0xc179,	// (0x0003bff6) blid2_tripm_values_pane_t4

0xc187,	// (0x0003c004) blid2_tripm_values_pane_t5

0xc195,	// (0x0003c012) blid2_tripm_values_pane_t6

0xc1a3,	// (0x0003c020) blid2_tripm_values_pane_t7

0xc1b1,	// (0x0003c02e) blid2_tripm_values_pane_t8

0xc1bf,	// (0x0003c03c) blid2_tripm_values_pane_t9

0x0008,

0xfb67,	// (0x0003f9e4) blid2_tripm_values_pane_t

0x715d,	// (0x00036fda) call_video_pane_t1_ParamLimits

0x7176,	// (0x00036ff3) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x0003f11e) call_video_pane_t_ParamLimits

0x53aa,	// (0x00035227) msg_header_pane_g1_ParamLimits

0xed20,	// (0x0003eb9d) msg_header_pane_g2_ParamLimits

0xed20,	// (0x0003eb9d) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x0003f338) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x0003f338) msg_header_pane_g

0xe115,	// (0x0003df92) main_clock2_pane_ParamLimits

0xa2e7,	// (0x0003a164) grid_clock2_toolbar_pane_ParamLimits

0xa2e7,	// (0x0003a164) grid_clock2_toolbar_pane

0xa2e7,	// (0x0003a164) listscroll_clock2_pane_ParamLimits

0xa2e7,	// (0x0003a164) listscroll_clock2_pane

0xa395,	// (0x0003a212) main_clock2_pane_t3_ParamLimits

0xa395,	// (0x0003a212) main_clock2_pane_t3

0xa3a7,	// (0x0003a224) main_clock2_pane_t4_ParamLimits

0xa3a7,	// (0x0003a224) main_clock2_pane_t4

0x2b65,	// (0x000329e2) cell_clock2_toolbar_pane

0x2b6d,	// (0x000329ea) cell_clock2_toolbar_pane_cp01

0x2b6d,	// (0x000329ea) cell_clock2_toolbar_pane_cp02

0x2b75,	// (0x000329f2) cell_clock2_toolbar_pane_cp03

0x2b7d,	// (0x000329fa) list_clock2_pane

0xea58,	// (0x0003e8d5) scroll_pane_cp10

0x2b85,	// (0x00032a02) list_single_clock2_pane_ParamLimits

0x2b85,	// (0x00032a02) list_single_clock2_pane

0xeba5,	// (0x0003ea22) list_highlight_pane_cp08

0x2b92,	// (0x00032a0f) list_single_clock2_pane_t1

0x2ba0,	// (0x00032a1d) list_single_clock2_pane_t2

0x0001,

0xfb7a,	// (0x0003f9f7) list_single_clock2_pane_t

0xd932,	// (0x0003d7af) bg_button_pane_cp10

0x2bae,	// (0x00032a2b) cell_clock2_toolbar_pane_g1

0x88b3,	// (0x00038730) aid_main_viewer_pane_g1_ParamLimits

0x88b3,	// (0x00038730) aid_main_viewer_pane_g1

0x88bf,	// (0x0003873c) aid_main_viewer_pane_g2_ParamLimits

0x88bf,	// (0x0003873c) aid_main_viewer_pane_g2

0x88cb,	// (0x00038748) aid_main_viewer_pane_g3_ParamLimits

0x88cb,	// (0x00038748) aid_main_viewer_pane_g3

0x88dc,	// (0x00038759) aid_main_viewer_pane_g4_ParamLimits

0x88dc,	// (0x00038759) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x0003f349) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x0003f349) aid_main_viewer_pane_g

0x9074,	// (0x00038ef1) main_calc_pane_ParamLimits

0x9081,	// (0x00038efe) main_dialer2_pane_ParamLimits

0xd932,	// (0x0003d7af) main_cam6_pane

0xd932,	// (0x0003d7af) main_vid6_pane

0xa2f3,	// (0x0003a170) listscroll_gen_pane_cp06_ParamLimits

0xa2f3,	// (0x0003a170) listscroll_gen_pane_cp06

0xa3b9,	// (0x0003a236) main_clock2_pane_t5_ParamLimits

0xa3b9,	// (0x0003a236) main_clock2_pane_t5

0xa408,	// (0x0003a285) aid_call2_pane_cp10_ParamLimits

0xa41a,	// (0x0003a297) aid_call_pane_cp10_ParamLimits

0xeada,	// (0x0003e957) popup_clock_analogue_window_cp10_g1_ParamLimits

0xeada,	// (0x0003e957) popup_clock_analogue_window_cp10_g2_ParamLimits

0xa42c,	// (0x0003a2a9) popup_clock_analogue_window_cp10_g3_ParamLimits

0xa42c,	// (0x0003a2a9) popup_clock_analogue_window_cp10_g4_ParamLimits

0xeada,	// (0x0003e957) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf802,	// (0x0003f67f) popup_clock_analogue_window_cp10_g_ParamLimits

0xa442,	// (0x0003a2bf) popup_clock_analogue_window_cp10_t1_ParamLimits

0xac24,	// (0x0003aaa1) cell_dialer2_keypad_pane_g2_ParamLimits

0xac24,	// (0x0003aaa1) cell_dialer2_keypad_pane_g2

0x0001,

0xf8e8,	// (0x0003f765) cell_dialer2_keypad_pane_g_ParamLimits

0xf8e8,	// (0x0003f765) cell_dialer2_keypad_pane_g

0xac40,	// (0x0003aabd) cell_dialer2_keypad_pane_t1

0xb5c8,	// (0x0003b445) main_cset_text2_pane_ParamLimits

0xb5c8,	// (0x0003b445) main_cset_text2_pane

0x285f,	// (0x000326dc) area_vitu2_query_pane_g1_ParamLimits

0x56bd,	// (0x0003553a) area_vitu2_query_pane_g2_ParamLimits

0xfa97,	// (0x0003f914) area_vitu2_query_pane_g_ParamLimits

0x576e,	// (0x000355eb) area_vitu2_query_pane_t7_ParamLimits

0x576e,	// (0x000355eb) area_vitu2_query_pane_t7

0xbd35,	// (0x0003bbb2) bg_button_pane_cp018_ParamLimits

0xbd43,	// (0x0003bbc0) bg_button_pane_cp021_ParamLimits

0x5792,	// (0x0003560f) bg_button_pane_cp022_ParamLimits

0x5792,	// (0x0003560f) bg_vkb2_func_pane_cp08_ParamLimits

0xbd35,	// (0x0003bbb2) bg_vkb2_func_pane_cp06_ParamLimits

0xbd43,	// (0x0003bbc0) bg_vkb2_func_pane_cp07_ParamLimits

0x57a3,	// (0x00035620) input_focus_pane_cp09_ParamLimits

0xc1cd,	// (0x0003c04a) cam6_autofocus_pane_ParamLimits

0xc1cd,	// (0x0003c04a) cam6_autofocus_pane

0xc1ef,	// (0x0003c06c) cam6_image_uncrop_pane_ParamLimits

0xc1ef,	// (0x0003c06c) cam6_image_uncrop_pane

0xc21c,	// (0x0003c099) cam6_indi_pane_ParamLimits

0xc21c,	// (0x0003c099) cam6_indi_pane

0xc236,	// (0x0003c0b3) cam6_mode_pane_ParamLimits

0xc236,	// (0x0003c0b3) cam6_mode_pane

0xc24a,	// (0x0003c0c7) cam6_timer_pane_ParamLimits

0xc24a,	// (0x0003c0c7) cam6_timer_pane

0xc256,	// (0x0003c0d3) cam6_zoom_pane_ParamLimits

0xc256,	// (0x0003c0d3) cam6_zoom_pane

0xaff1,	// (0x0003ae6e) cam6_mode_pane_g1_ParamLimits

0xaff1,	// (0x0003ae6e) cam6_mode_pane_g1

0xb009,	// (0x0003ae86) cam6_mode_pane_g2_ParamLimits

0xb009,	// (0x0003ae86) cam6_mode_pane_g2

0xb015,	// (0x0003ae92) cam6_mode_pane_g3_ParamLimits

0xb015,	// (0x0003ae92) cam6_mode_pane_g3

0xb021,	// (0x0003ae9e) cam6_mode_pane_g4_ParamLimits

0xb021,	// (0x0003ae9e) cam6_mode_pane_g4

0x0003,

0xfb7f,	// (0x0003f9fc) cam6_mode_pane_g_ParamLimits

0xfb7f,	// (0x0003f9fc) cam6_mode_pane_g

0x2bc4,	// (0x00032a41) bg_tb_trans_pane_cp08_ParamLimits

0x2bc4,	// (0x00032a41) bg_tb_trans_pane_cp08

0x2bd2,	// (0x00032a4f) cam6_battery_pane_ParamLimits

0x2bd2,	// (0x00032a4f) cam6_battery_pane

0x2be8,	// (0x00032a65) cam6_indi_pane_g1_ParamLimits

0x2be8,	// (0x00032a65) cam6_indi_pane_g1

0x2bfa,	// (0x00032a77) cam6_indi_pane_g2_ParamLimits

0x2bfa,	// (0x00032a77) cam6_indi_pane_g2

0x2c0c,	// (0x00032a89) cam6_indi_pane_g3_ParamLimits

0x2c0c,	// (0x00032a89) cam6_indi_pane_g3

0x0002,

0xfb88,	// (0x0003fa05) cam6_indi_pane_g_ParamLimits

0xfb88,	// (0x0003fa05) cam6_indi_pane_g

0x2c1e,	// (0x00032a9b) cam6_indi_pane_t1_ParamLimits

0x2c1e,	// (0x00032a9b) cam6_indi_pane_t1

0xb0ce,	// (0x0003af4b) cam6_autofocus_pane_g1

0xb0d6,	// (0x0003af53) cam6_autofocus_pane_g2

0xb0de,	// (0x0003af5b) cam6_autofocus_pane_g3

0xb0e6,	// (0x0003af63) cam6_autofocus_pane_g4

0x0003,

0xfb8f,	// (0x0003fa0c) cam6_autofocus_pane_g

0x2c44,	// (0x00032ac1) cam6_timer_pane_g1

0x2c4c,	// (0x00032ac9) cam6_timer_pane_t1

0x2c5a,	// (0x00032ad7) cam6_zoom_cont_pane

0x2c62,	// (0x00032adf) cam6_zoom_pane_g1

0x2c6a,	// (0x00032ae7) cam6_zoom_pane_g2

0xc26e,	// (0x0003c0eb) cam6_zoom_pane_g3

0x0002,

0xfb98,	// (0x0003fa15) cam6_zoom_pane_g

0x15b3,	// (0x00031430) cam6_battery_pane_g1

0x15b3,	// (0x00031430) cam6_battery_pane_g2

0x0001,

0xf70f,	// (0x0003f58c) cam6_battery_pane_g

0x2c72,	// (0x00032aef) cam6_zoom_cont_pane_g1

0x2c7b,	// (0x00032af8) cam6_zoom_cont_pane_g2

0x2c84,	// (0x00032b01) cam6_zoom_cont_pane_g3

0x0002,

0xfb9f,	// (0x0003fa1c) cam6_zoom_cont_pane_g

0xc288,	// (0x0003c105) cam6_mode_pane_cp_ParamLimits

0xc288,	// (0x0003c105) cam6_mode_pane_cp

0xc256,	// (0x0003c0d3) cam6_zoom_pane_cp_ParamLimits

0xc256,	// (0x0003c0d3) cam6_zoom_pane_cp

0xc29c,	// (0x0003c119) vid6_image_uncrop_cif_pane_ParamLimits

0xc29c,	// (0x0003c119) vid6_image_uncrop_cif_pane

0xc2c8,	// (0x0003c145) vid6_image_uncrop_nhd_pane_ParamLimits

0xc2c8,	// (0x0003c145) vid6_image_uncrop_nhd_pane

0xc1ef,	// (0x0003c06c) vid6_image_uncrop_vga_pane_ParamLimits

0xc1ef,	// (0x0003c06c) vid6_image_uncrop_vga_pane

0xc2e5,	// (0x0003c162) vid6_image_uncrop_wvga_pane_ParamLimits

0xc2e5,	// (0x0003c162) vid6_image_uncrop_wvga_pane

0xc302,	// (0x0003c17f) vid6_indi_pane_ParamLimits

0xc302,	// (0x0003c17f) vid6_indi_pane

0x2bc4,	// (0x00032a41) bg_tb_trans_pane_cp09_ParamLimits

0x2bc4,	// (0x00032a41) bg_tb_trans_pane_cp09

0x2c9c,	// (0x00032b19) cam6_battery_pane_cp_ParamLimits

0x2c9c,	// (0x00032b19) cam6_battery_pane_cp

0x2ca8,	// (0x00032b25) vid6_indi_pane_g1_ParamLimits

0x2ca8,	// (0x00032b25) vid6_indi_pane_g1

0x2cba,	// (0x00032b37) vid6_indi_pane_g2_ParamLimits

0x2cba,	// (0x00032b37) vid6_indi_pane_g2

0x2ccc,	// (0x00032b49) vid6_indi_pane_g3_ParamLimits

0x2ccc,	// (0x00032b49) vid6_indi_pane_g3

0x2ce1,	// (0x00032b5e) vid6_indi_pane_g4_ParamLimits

0x2ce1,	// (0x00032b5e) vid6_indi_pane_g4

0x2cf6,	// (0x00032b73) vid6_indi_pane_g5_ParamLimits

0x2cf6,	// (0x00032b73) vid6_indi_pane_g5

0x0004,

0xfba6,	// (0x0003fa23) vid6_indi_pane_g_ParamLimits

0xfba6,	// (0x0003fa23) vid6_indi_pane_g

0x2d10,	// (0x00032b8d) vid6_indi_pane_t1_ParamLimits

0x2d10,	// (0x00032b8d) vid6_indi_pane_t1

0x2d26,	// (0x00032ba3) vid6_indi_pane_t2_ParamLimits

0x2d26,	// (0x00032ba3) vid6_indi_pane_t2

0x2d4e,	// (0x00032bcb) vid6_indi_pane_t3_ParamLimits

0x2d4e,	// (0x00032bcb) vid6_indi_pane_t3

0x2d76,	// (0x00032bf3) vid6_indi_pane_t4_ParamLimits

0x2d76,	// (0x00032bf3) vid6_indi_pane_t4

0x0003,

0xfbb1,	// (0x0003fa2e) vid6_indi_pane_t_ParamLimits

0xfbb1,	// (0x0003fa2e) vid6_indi_pane_t

0x2d9a,	// (0x00032c17) wait_bar_pane_cp08

0xc325,	// (0x0003c1a2) main_cset_text2_pane_t1_ParamLimits

0xc325,	// (0x0003c1a2) main_cset_text2_pane_t1

0xc276,	// (0x0003c0f3) listscroll_gen_pane_cp06_t1_ParamLimits

0xc276,	// (0x0003c0f3) listscroll_gen_pane_cp06_t1

0xd932,	// (0x0003d7af) main_cam6_set_pane

0x181a,	// (0x00031697) bg_tb_trans_pane_cp06_ParamLimits

0xaf98,	// (0x0003ae15) cam4_indicators_pane_g1_ParamLimits

0xafa9,	// (0x0003ae26) cam4_indicators_pane_g2_ParamLimits

0xf925,	// (0x0003f7a2) cam4_indicators_pane_g_ParamLimits

0xafc7,	// (0x0003ae44) cam4_indicators_pane_t1_ParamLimits

0xf0be,	// (0x0003ef3b) bg_tb_trans_pane_cp07_ParamLimits

0xaf98,	// (0x0003ae15) vid4_indicators_pane_g1_ParamLimits

0xb077,	// (0x0003aef4) vid4_indicators_pane_g2_ParamLimits

0xb088,	// (0x0003af05) vid4_indicators_pane_g3_ParamLimits

0xb099,	// (0x0003af16) vid4_indicators_pane_g4_ParamLimits

0xf937,	// (0x0003f7b4) vid4_indicators_pane_g_ParamLimits

0xb0b5,	// (0x0003af32) vid4_indicators_pane_t1_ParamLimits

0xbe7c,	// (0x0003bcf9) vid4_progress_pane_g1_ParamLimits

0xbe8c,	// (0x0003bd09) vid4_progress_pane_g2_ParamLimits

0xbe9c,	// (0x0003bd19) vid4_progress_pane_g3_ParamLimits

0xafa9,	// (0x0003ae26) vid4_progress_pane_g4_ParamLimits

0xfae2,	// (0x0003f95f) vid4_progress_pane_g_ParamLimits

0xbea8,	// (0x0003bd25) vid4_progress_pane_t1_ParamLimits

0xbebd,	// (0x0003bd3a) vid4_progress_pane_t2_ParamLimits

0xbed3,	// (0x0003bd50) vid4_progress_pane_t3_ParamLimits

0xfaed,	// (0x0003f96a) vid4_progress_pane_t_ParamLimits

0xbee8,	// (0x0003bd65) wait_bar_pane_cp07_ParamLimits

0xc363,	// (0x0003c1e0) main_cam6_set_pane_g2_ParamLimits

0xc363,	// (0x0003c1e0) main_cam6_set_pane_g2

0xc36f,	// (0x0003c1ec) main_cset6_listscroll_pane_ParamLimits

0xc36f,	// (0x0003c1ec) main_cset6_listscroll_pane

0xc39a,	// (0x0003c217) main_cset6_slider_pane_ParamLimits

0xc39a,	// (0x0003c217) main_cset6_slider_pane

0xc3a6,	// (0x0003c223) main_cset6_text2_pane_ParamLimits

0xc3a6,	// (0x0003c223) main_cset6_text2_pane

0x2da9,	// (0x00032c26) main_cset6_text_pane

0x2db1,	// (0x00032c2e) main_cset_list_pane_copy1_ParamLimits

0x2db1,	// (0x00032c2e) main_cset_list_pane_copy1

0x2dc1,	// (0x00032c3e) scroll_pane_cp028_copy1

0xc3b9,	// (0x0003c236) cset_list_set_pane_copy1

0xc3d3,	// (0x0003c250) aid_position_infowindow_above_copy1

0xc3db,	// (0x0003c258) aid_position_infowindow_below_copy1

0x57fc,	// (0x00035679) cset_list_set_pane_g1_copy1

0x55bd,	// (0x0003543a) cset_list_set_pane_g3_copy1_ParamLimits

0x55bd,	// (0x0003543a) cset_list_set_pane_g3_copy1

0x55cc,	// (0x00035449) cset_list_set_pane_t1_copy1_ParamLimits

0x55cc,	// (0x00035449) cset_list_set_pane_t1_copy1

0xf0be,	// (0x0003ef3b) list_highlight_pane_cp021_copy1_ParamLimits

0xf0be,	// (0x0003ef3b) list_highlight_pane_cp021_copy1

0x2df6,	// (0x00032c73) cset6_slider_pane_ParamLimits

0x2df6,	// (0x00032c73) cset6_slider_pane

0x2e22,	// (0x00032c9f) main_cset6_slider_pane_g1_ParamLimits

0x2e22,	// (0x00032c9f) main_cset6_slider_pane_g1

0xc3e3,	// (0x0003c260) main_cset6_slider_pane_g2_ParamLimits

0xc3e3,	// (0x0003c260) main_cset6_slider_pane_g2

0x24b4,	// (0x00032331) main_cset6_slider_pane_g3_ParamLimits

0x24b4,	// (0x00032331) main_cset6_slider_pane_g3

0xc40b,	// (0x0003c288) main_cset6_slider_pane_g4_ParamLimits

0xc40b,	// (0x0003c288) main_cset6_slider_pane_g4

0xc417,	// (0x0003c294) main_cset6_slider_pane_g5_ParamLimits

0xc417,	// (0x0003c294) main_cset6_slider_pane_g5

0x24b4,	// (0x00032331) main_cset6_slider_pane_g7_ParamLimits

0x24b4,	// (0x00032331) main_cset6_slider_pane_g7

0x24c0,	// (0x0003233d) main_cset6_slider_pane_g8_ParamLimits

0x24c0,	// (0x0003233d) main_cset6_slider_pane_g8

0xc425,	// (0x0003c2a2) main_cset6_slider_pane_g9_ParamLimits

0xc425,	// (0x0003c2a2) main_cset6_slider_pane_g9

0xc431,	// (0x0003c2ae) main_cset6_slider_pane_g10_ParamLimits

0xc431,	// (0x0003c2ae) main_cset6_slider_pane_g10

0xc40b,	// (0x0003c288) main_cset6_slider_pane_g11_ParamLimits

0xc40b,	// (0x0003c288) main_cset6_slider_pane_g11

0xc43d,	// (0x0003c2ba) main_cset6_slider_pane_g12_ParamLimits

0xc43d,	// (0x0003c2ba) main_cset6_slider_pane_g12

0xc449,	// (0x0003c2c6) main_cset6_slider_pane_g13_ParamLimits

0xc449,	// (0x0003c2c6) main_cset6_slider_pane_g13

0xc457,	// (0x0003c2d4) main_cset6_slider_pane_g14_ParamLimits

0xc457,	// (0x0003c2d4) main_cset6_slider_pane_g14

0xc465,	// (0x0003c2e2) main_cset6_slider_pane_g15_ParamLimits

0xc465,	// (0x0003c2e2) main_cset6_slider_pane_g15

0xc417,	// (0x0003c294) main_cset6_slider_pane_g16_ParamLimits

0xc417,	// (0x0003c294) main_cset6_slider_pane_g16

0xc47d,	// (0x0003c2fa) main_cset6_slider_pane_g17_ParamLimits

0xc47d,	// (0x0003c2fa) main_cset6_slider_pane_g17

0x0011,

0xfbba,	// (0x0003fa37) main_cset6_slider_pane_g_ParamLimits

0xfbba,	// (0x0003fa37) main_cset6_slider_pane_g

0x2e4a,	// (0x00032cc7) main_cset6_slider_pane_t1_ParamLimits

0x2e4a,	// (0x00032cc7) main_cset6_slider_pane_t1

0xc48b,	// (0x0003c308) main_cset6_slider_pane_t2_ParamLimits

0xc48b,	// (0x0003c308) main_cset6_slider_pane_t2

0xc4b6,	// (0x0003c333) main_cset6_slider_pane_t3_ParamLimits

0xc4b6,	// (0x0003c333) main_cset6_slider_pane_t3

0xc4e1,	// (0x0003c35e) main_cset6_slider_pane_t4_ParamLimits

0xc4e1,	// (0x0003c35e) main_cset6_slider_pane_t4

0xc50e,	// (0x0003c38b) main_cset6_slider_pane_t5_ParamLimits

0xc50e,	// (0x0003c38b) main_cset6_slider_pane_t5

0x2e8b,	// (0x00032d08) main_cset6_slider_pane_t7_ParamLimits

0x2e8b,	// (0x00032d08) main_cset6_slider_pane_t7

0xc53b,	// (0x0003c3b8) main_cset6_slider_pane_t8_ParamLimits

0xc53b,	// (0x0003c3b8) main_cset6_slider_pane_t8

0xc55f,	// (0x0003c3dc) main_cset6_slider_pane_t9_ParamLimits

0xc55f,	// (0x0003c3dc) main_cset6_slider_pane_t9

0xc583,	// (0x0003c400) main_cset6_slider_pane_t10_ParamLimits

0xc583,	// (0x0003c400) main_cset6_slider_pane_t10

0xc5a7,	// (0x0003c424) main_cset6_slider_pane_t11_ParamLimits

0xc5a7,	// (0x0003c424) main_cset6_slider_pane_t11

0x2ec1,	// (0x00032d3e) main_cset6_slider_pane_t14_ParamLimits

0x2ec1,	// (0x00032d3e) main_cset6_slider_pane_t14

0x2efa,	// (0x00032d77) main_cset6_slider_pane_t15_ParamLimits

0x2efa,	// (0x00032d77) main_cset6_slider_pane_t15

0x000b,

0xfbdf,	// (0x0003fa5c) main_cset6_slider_pane_t_ParamLimits

0xfbdf,	// (0x0003fa5c) main_cset6_slider_pane_t

0x2f33,	// (0x00032db0) cset_slider_pane_g1_copy1

0x2f3c,	// (0x00032db9) cset_slider_pane_g2_copy1

0x2f45,	// (0x00032dc2) cset_slider_pane_g3_copy1

0xd932,	// (0x0003d7af) bg_popup_sub_pane_cp011_copy1

0x268f,	// (0x0003250c) main_cset_text_pane_g1_copy1

0x2697,	// (0x00032514) main_cset_text_pane_t1_copy1

0x26a5,	// (0x00032522) main_cset_text_pane_t2_copy1

0x26b3,	// (0x00032530) main_cset_text_pane_t3_copy1

0x26c1,	// (0x0003253e) main_cset_text_pane_t4_copy1

0x26cf,	// (0x0003254c) main_cset_text_pane_t5_copy1

0x26dd,	// (0x0003255a) main_cset_text_pane_t6_copy1

0x26eb,	// (0x00032568) main_cset_text_pane_t7_copy1

0xc5cd,	// (0x0003c44a) main_cset_text2_pane_t1_copy1

0xd932,	// (0x0003d7af) main_ncimui_pane

0x90c0,	// (0x00038f3d) popup_query_ncimui_window_ParamLimits

0x90c0,	// (0x00038f3d) popup_query_ncimui_window

0x546f,	// (0x000352ec) field_cale_ev2_pane_g4_ParamLimits

0x546f,	// (0x000352ec) field_cale_ev2_pane_g4

0xa942,	// (0x0003a7bf) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa942,	// (0x0003a7bf) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c3,	// (0x0003f740) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c3,	// (0x0003f740) cell_video_dialer_keypad_pane_g

0xa95a,	// (0x0003a7d7) cell_video_dialer_keypad_pane_t1

0xd932,	// (0x0003d7af) bg_popup_window_pane_cp012

0xe928,	// (0x0003e7a5) heading_pane_cp06

0x303d,	// (0x00032eba) ncim_query_content_pane

0xd932,	// (0x0003d7af) bg_popup_heading_pane_cp01

0x3045,	// (0x00032ec2) ncim_heading_pane_t1

0x3053,	// (0x00032ed0) ncim_indicator_popup_pane

0x3065,	// (0x00032ee2) ncim_query_button_pane

0x3079,	// (0x00032ef6) ncim_query_content_pane_t1

0x308b,	// (0x00032f08) ncim_query_content_pane_t2

0x0005,

0xfc1e,	// (0x0003fa9b) ncim_query_content_pane_t

0x30c5,	// (0x00032f42) ncim_query_list_pane

0x30d7,	// (0x00032f54) ncim_query_popup_pane

0x3053,	// (0x00032ed0) ncim_indicator_popup_pane_ParamLimits

0xc6c8,	// (0x0003c545) ncim_query_content_pane_g1_ParamLimits

0xc6c8,	// (0x0003c545) ncim_query_content_pane_g1

0x3079,	// (0x00032ef6) ncim_query_content_pane_t1_ParamLimits

0x308b,	// (0x00032f08) ncim_query_content_pane_t2_ParamLimits

0xc6d4,	// (0x0003c551) ncim_query_content_pane_t3_ParamLimits

0xc6d4,	// (0x0003c551) ncim_query_content_pane_t3

0xc6f1,	// (0x0003c56e) ncim_query_content_pane_t4_ParamLimits

0xc6f1,	// (0x0003c56e) ncim_query_content_pane_t4

0xc70e,	// (0x0003c58b) ncim_query_content_pane_t5_ParamLimits

0xc70e,	// (0x0003c58b) ncim_query_content_pane_t5

0x309d,	// (0x00032f1a) ncim_query_content_pane_t6_ParamLimits

0x309d,	// (0x00032f1a) ncim_query_content_pane_t6

0xfc1e,	// (0x0003fa9b) ncim_query_content_pane_t_ParamLimits

0x30c5,	// (0x00032f42) ncim_query_list_pane_ParamLimits

0x30d7,	// (0x00032f54) ncim_query_popup_pane_ParamLimits

0x30eb,	// (0x00032f68) wait_bar_pane_cp04

0xd932,	// (0x0003d7af) input_focus_pane_cp011

0x30f3,	// (0x00032f70) ncim_query_popup_pane_t1

0x3101,	// (0x00032f7e) ncim_list_query_list_pane_ParamLimits

0x3101,	// (0x00032f7e) ncim_list_query_list_pane

0xd932,	// (0x0003d7af) bg_button_pane_cp027

0x3114,	// (0x00032f91) ncim_query_button_pane_g1

0xd932,	// (0x0003d7af) list_highlight_pane_cp012

0x311e,	// (0x00032f9b) ncim_list_query_list_pane_g1

0x3126,	// (0x00032fa3) ncim_list_query_list_pane_t1

0xafb8,	// (0x0003ae35) cam4_indicators_pane_g3_ParamLimits

0xafb8,	// (0x0003ae35) cam4_indicators_pane_g3

0xb0a5,	// (0x0003af22) vid4_indicators_pane_g5_ParamLimits

0xb0a5,	// (0x0003af22) vid4_indicators_pane_g5

0xafb8,	// (0x0003ae35) vid4_progress_pane_g5_ParamLimits

0xafb8,	// (0x0003ae35) vid4_progress_pane_g5

0xc610,	// (0x0003c48d) main_ncimui_pane_g1

0xc656,	// (0x0003c4d3) ncimui_group_query_pane_ParamLimits

0xc656,	// (0x0003c4d3) ncimui_group_query_pane

0xc68a,	// (0x0003c507) ncimui_list_pane_ParamLimits

0xc68a,	// (0x0003c507) ncimui_list_pane

0xc6a4,	// (0x0003c521) ncimui_text_pane_ParamLimits

0xc6a4,	// (0x0003c521) ncimui_text_pane

0xc72b,	// (0x0003c5a8) ncimui_text_pane_t1_ParamLimits

0xc72b,	// (0x0003c5a8) ncimui_text_pane_t1

0x3134,	// (0x00032fb1) ncimui_list_single_graphic_pane_ParamLimits

0x3134,	// (0x00032fb1) ncimui_list_single_graphic_pane

0xc74a,	// (0x0003c5c7) ncimui_query_pane_ParamLimits

0xc74a,	// (0x0003c5c7) ncimui_query_pane

0xd932,	// (0x0003d7af) list_highlight_pane_cp013

0x3144,	// (0x00032fc1) ncim_list_query_list_pane_t1_copy1

0x311e,	// (0x00032f9b) ncim_list_single_graphic_pane_g1

0x3152,	// (0x00032fcf) ncim_query_button_pane_cp01

0x315a,	// (0x00032fd7) ncim_query_entry_pane_ParamLimits

0x315a,	// (0x00032fd7) ncim_query_entry_pane

0x316a,	// (0x00032fe7) ncimui_query_pane_g1

0x3172,	// (0x00032fef) ncimui_query_pane_t1_ParamLimits

0x3172,	// (0x00032fef) ncimui_query_pane_t1

0xd932,	// (0x0003d7af) input_focus_pane_cp012

0x30f3,	// (0x00032f70) ncim_query_entry_pane_t1

0xe115,	// (0x0003df92) main_im_pane_ParamLimits

0xf0be,	// (0x0003ef3b) main_mobtv_pane_ParamLimits

0xf0be,	// (0x0003ef3b) main_mobtv_pane

0xc425,	// (0x0003c2a2) main_cset6_slider_pane_g18_ParamLimits

0xc425,	// (0x0003c2a2) main_cset6_slider_pane_g18

0xc449,	// (0x0003c2c6) main_cset6_slider_pane_g19_ParamLimits

0xc449,	// (0x0003c2c6) main_cset6_slider_pane_g19

0x2309,	// (0x00032186) bg_main_mobtv_pane_ParamLimits

0x2309,	// (0x00032186) bg_main_mobtv_pane

0xc75a,	// (0x0003c5d7) main_mobtv_info_pane

0xc765,	// (0x0003c5e2) main_mobtv_loading_pane_ParamLimits

0xc765,	// (0x0003c5e2) main_mobtv_loading_pane

0x3196,	// (0x00033013) main_mobtv_pg_channel_list_pane

0x31a0,	// (0x0003301d) main_mobtv_pg_hdr_pane

0xc772,	// (0x0003c5ef) main_mobtv_programe_curr_pane_ParamLimits

0xc772,	// (0x0003c5ef) main_mobtv_programe_curr_pane

0xc77f,	// (0x0003c5fc) main_mobtv_programe_next_pane_ParamLimits

0xc77f,	// (0x0003c5fc) main_mobtv_programe_next_pane

0x31a9,	// (0x00033026) popup_mobtv_noti_window

0x15b3,	// (0x00031430) main_tv_pg_hdr_pane_g1

0x31b1,	// (0x0003302e) main_tv_pg_hdr_pane_g2

0x31b9,	// (0x00033036) main_tv_pg_hdr_pane_g3

0x31c1,	// (0x0003303e) main_tv_pg_hdr_pane_g4

0x31c9,	// (0x00033046) main_tv_pg_hdr_pane_g5

0x31d3,	// (0x00033050) main_tv_pg_hdr_pane_g6

0x31dd,	// (0x0003305a) main_tv_pg_hdr_pane_g7

0x31e7,	// (0x00033064) main_tv_pg_hdr_pane_g8

0x31f1,	// (0x0003306e) main_tv_pg_hdr_pane_g9

0x31fb,	// (0x00033078) main_tv_pg_hdr_pane_g10

0x3205,	// (0x00033082) main_tv_pg_hdr_pane_g11

0x000a,

0xfc2b,	// (0x0003faa8) main_tv_pg_hdr_pane_g

0x320f,	// (0x0003308c) main_tv_pg_hdr_pane_t1

0x321d,	// (0x0003309a) main_tv_pg_hdr_pane_t2

0x322b,	// (0x000330a8) main_tv_pg_hdr_pane_t3

0x323b,	// (0x000330b8) main_tv_pg_hdr_pane_t4

0x324b,	// (0x000330c8) main_tv_pg_hdr_pane_t5

0x0004,

0xfc42,	// (0x0003fabf) main_tv_pg_hdr_pane_t

0x325b,	// (0x000330d8) single_mobtv_pg_channel_pane_ParamLimits

0x325b,	// (0x000330d8) single_mobtv_pg_channel_pane

0x326d,	// (0x000330ea) single_mobtv_pg_channel_table_pane

0x3276,	// (0x000330f3) single_mobtv_pg_channel_thumb_pane

0x327f,	// (0x000330fc) single_tv_pg_channel_pane_g1

0x3288,	// (0x00033105) single_tv_pg_channel_pane_g2

0x0001,

0xfc4d,	// (0x0003faca) single_tv_pg_channel_pane_g

0x181a,	// (0x00031697) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x181a,	// (0x00031697) bg_single_mobtv_pg_channel_thumb_pane

0x3291,	// (0x0003310e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x3291,	// (0x0003310e) single_mobtv_pg_channel_thumb_pane_g1

0x329f,	// (0x0003311c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x329f,	// (0x0003311c) single_mobtv_pg_channel_thumb_pane_g2

0x32ab,	// (0x00033128) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x32ab,	// (0x00033128) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc52,	// (0x0003facf) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc52,	// (0x0003facf) single_mobtv_pg_channel_thumb_pane_g

0x32b7,	// (0x00033134) single_mobtv_pg_channel_thumb_pane_t1

0x32c5,	// (0x00033142) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc59,	// (0x0003fad6) single_mobtv_pg_channel_thumb_pane_t

0x15b3,	// (0x00031430) bg_single_mobtv_pg_channel_table_pane_g1

0x15b3,	// (0x00031430) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf70f,	// (0x0003f58c) bg_single_mobtv_pg_channel_table_pane_g

0x32d3,	// (0x00033150) single_mobtv_pg_channel_table_pane_t1

0x32e1,	// (0x0003315e) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc5e,	// (0x0003fadb) single_mobtv_pg_channel_table_pane_t

0xc794,	// (0x0003c611) main_mobtv_info_pane_g1_ParamLimits

0xc794,	// (0x0003c611) main_mobtv_info_pane_g1

0xc7b0,	// (0x0003c62d) main_mobtv_info_pane_t1_ParamLimits

0xc7b0,	// (0x0003c62d) main_mobtv_info_pane_t1

0xc828,	// (0x0003c6a5) main_mobtv_info_pane_t2_ParamLimits

0xc828,	// (0x0003c6a5) main_mobtv_info_pane_t2

0x0002,

0xfc68,	// (0x0003fae5) main_mobtv_info_pane_t_ParamLimits

0xfc68,	// (0x0003fae5) main_mobtv_info_pane_t

0xc8b7,	// (0x0003c734) wait_bar_pane_cp05

0xc8c9,	// (0x0003c746) main_mobtv_loading_pane_g1_ParamLimits

0xc8c9,	// (0x0003c746) main_mobtv_loading_pane_g1

0xc8d7,	// (0x0003c754) main_mobtv_loading_pane_g2_ParamLimits

0xc8d7,	// (0x0003c754) main_mobtv_loading_pane_g2

0xc8e3,	// (0x0003c760) main_mobtv_loading_pane_g3_ParamLimits

0xc8e3,	// (0x0003c760) main_mobtv_loading_pane_g3

0x0002,

0xfc6f,	// (0x0003faec) main_mobtv_loading_pane_g_ParamLimits

0xfc6f,	// (0x0003faec) main_mobtv_loading_pane_g

0x32ef,	// (0x0003316c) main_mobtv_loading_pane_t1_ParamLimits

0x32ef,	// (0x0003316c) main_mobtv_loading_pane_t1

0x3307,	// (0x00033184) main_mobtv_loading_pane_t2_ParamLimits

0x3307,	// (0x00033184) main_mobtv_loading_pane_t2

0x0001,

0xfc76,	// (0x0003faf3) main_mobtv_loading_pane_t_ParamLimits

0xfc76,	// (0x0003faf3) main_mobtv_loading_pane_t

0xc8f1,	// (0x0003c76e) wait_bar_pane_cp06_ParamLimits

0xc8f1,	// (0x0003c76e) wait_bar_pane_cp06

0x332b,	// (0x000331a8) main_mobtv_programe_curr_pane_t1

0x3339,	// (0x000331b6) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc7b,	// (0x0003faf8) main_mobtv_programe_curr_pane_t

0x3347,	// (0x000331c4) main_mobtv_programe_next_pane_t1

0x3355,	// (0x000331d2) main_mobtv_programe_next_pane_t2

0x3363,	// (0x000331e0) main_mobtv_programe_next_pane_t3

0x0002,

0xfc80,	// (0x0003fafd) main_mobtv_programe_next_pane_t

0xd932,	// (0x0003d7af) bg_popup_mobtv_noti_window_pane

0x3371,	// (0x000331ee) popup_mobtv_noti_window_g1

0x3379,	// (0x000331f6) popup_mobtv_noti_window_t1

0x3387,	// (0x00033204) popup_mobtv_noti_window_t2

0x0001,

0xfc87,	// (0x0003fb04) popup_mobtv_noti_window_t

0x15b3,	// (0x00031430) bg_popup_mobtv_noti_window_pane_g1

0xd932,	// (0x0003d7af) sc_clock_pane

0xd932,	// (0x0003d7af) main_fs_bigclock_pane

0xc080,	// (0x0003befd) blid2_tripm_pane_t4_ParamLimits

0xc080,	// (0x0003befd) blid2_tripm_pane_t4

0xc8fd,	// (0x0003c77a) sc_clock_pane_g1_ParamLimits

0xc8fd,	// (0x0003c77a) sc_clock_pane_g1

0xc90b,	// (0x0003c788) sc_clock_pane_t1_ParamLimits

0xc90b,	// (0x0003c788) sc_clock_pane_t1

0xc91e,	// (0x0003c79b) sc_clock_pane_t2_ParamLimits

0xc91e,	// (0x0003c79b) sc_clock_pane_t2

0xc930,	// (0x0003c7ad) sc_clock_pane_t3_ParamLimits

0xc930,	// (0x0003c7ad) sc_clock_pane_t3

0x0004,

0xfc8c,	// (0x0003fb09) sc_clock_pane_t_ParamLimits

0xfc8c,	// (0x0003fb09) sc_clock_pane_t

0xd156,	// (0x0003cfd3) main_fs_bigclock_indicator_pane_ParamLimits

0xd156,	// (0x0003cfd3) main_fs_bigclock_indicator_pane

0xc9b8,	// (0x0003c835) main_fs_bigclock_pane_g1_ParamLimits

0xc9b8,	// (0x0003c835) main_fs_bigclock_pane_g1

0xd162,	// (0x0003cfdf) main_fs_bigclock_pane_t1_ParamLimits

0xd162,	// (0x0003cfdf) main_fs_bigclock_pane_t1

0xd174,	// (0x0003cff1) main_fs_bigclock_pane_t2_ParamLimits

0xd174,	// (0x0003cff1) main_fs_bigclock_pane_t2

0xd186,	// (0x0003d003) main_fs_bigclock_pane_t3_ParamLimits

0xd186,	// (0x0003d003) main_fs_bigclock_pane_t3

0x0002,

0xfe8b,	// (0x0003fd08) main_fs_bigclock_pane_t_ParamLimits

0xfe8b,	// (0x0003fd08) main_fs_bigclock_pane_t

0x3fb6,	// (0x00033e33) main_fs_bigclock_indicator_pane_g1

0x306d,	// (0x00032eea) ncim_query_content_pane_g2_ParamLimits

0x306d,	// (0x00032eea) ncim_query_content_pane_g2

0x0001,

0xfc19,	// (0x0003fa96) ncim_query_content_pane_g_ParamLimits

0xfc19,	// (0x0003fa96) ncim_query_content_pane_g

0xc944,	// (0x0003c7c1) sc_clock_pane_t4_ParamLimits

0xc944,	// (0x0003c7c1) sc_clock_pane_t4

0xf0be,	// (0x0003ef3b) main_radioblah_pane

0x21d5,	// (0x00032052) cell_call4_button_pane_t1_copy1_ParamLimits

0x21d5,	// (0x00032052) cell_call4_button_pane_t1_copy1

0xc618,	// (0x0003c495) main_ncimui_pane_t1_ParamLimits

0xc618,	// (0x0003c495) main_ncimui_pane_t1

0xc62a,	// (0x0003c4a7) main_ncimui_pane_t2_ParamLimits

0xc62a,	// (0x0003c4a7) main_ncimui_pane_t2

0x0002,

0xfc12,	// (0x0003fa8f) main_ncimui_pane_t_ParamLimits

0xfc12,	// (0x0003fa8f) main_ncimui_pane_t

0x34b7,	// (0x00033334) main_radioblah_anim_pane_ParamLimits

0x34b7,	// (0x00033334) main_radioblah_anim_pane

0x34c8,	// (0x00033345) main_radioblah_info_pane_ParamLimits

0x34c8,	// (0x00033345) main_radioblah_info_pane

0x34dc,	// (0x00033359) main_radioblah_pane_t1_ParamLimits

0x34dc,	// (0x00033359) main_radioblah_pane_t1

0x34f8,	// (0x00033375) main_radioblah_pane_t2_ParamLimits

0x34f8,	// (0x00033375) main_radioblah_pane_t2

0x0003,

0xfcad,	// (0x0003fb2a) main_radioblah_pane_t_ParamLimits

0xfcad,	// (0x0003fb2a) main_radioblah_pane_t

0xca0a,	// (0x0003c887) main_radioblah_rocker_ctrl_pane_ParamLimits

0xca0a,	// (0x0003c887) main_radioblah_rocker_ctrl_pane

0x3540,	// (0x000333bd) main_radioblah_info_pane_t1_ParamLimits

0x3540,	// (0x000333bd) main_radioblah_info_pane_t1

0xca4f,	// (0x0003c8cc) main_radioblah_info_pane_t2_ParamLimits

0xca4f,	// (0x0003c8cc) main_radioblah_info_pane_t2

0x0003,

0xfcb6,	// (0x0003fb33) main_radioblah_info_pane_t_ParamLimits

0xfcb6,	// (0x0003fb33) main_radioblah_info_pane_t

0x15b3,	// (0x00031430) main_radioblah_rocker_ctrl_pane_g1

0xcaff,	// (0x0003c97c) main_radioblah_rocker_ctrl_pane_g2

0xcb07,	// (0x0003c984) main_radioblah_rocker_ctrl_pane_g3

0xcb0f,	// (0x0003c98c) main_radioblah_rocker_ctrl_pane_g4

0xcb17,	// (0x0003c994) main_radioblah_rocker_ctrl_pane_g5

0xcb1f,	// (0x0003c99c) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcbf,	// (0x0003fb3c) main_radioblah_rocker_ctrl_pane_g

0xc5cd,	// (0x0003c44a) main_cset_text2_pane_t1_copy1_ParamLimits

0xaeef,	// (0x0003ad6c) cam4_image_uncrop_qvga_pane

0xb02d,	// (0x0003aeaa) vid4_image_uncrop_qcif_pane

0xc20e,	// (0x0003c08b) cam6_image_uncrop_qvga_pane_ParamLimits

0xc20e,	// (0x0003c08b) cam6_image_uncrop_qvga_pane

0x2c8c,	// (0x00032b09) vid6_image_uncrop_qcif_pane_ParamLimits

0x2c8c,	// (0x00032b09) vid6_image_uncrop_qcif_pane

0xd932,	// (0x0003d7af) bg_popup_preview_window_pane_cp03

0x301f,	// (0x00032e9c) list_cset_text2_pane

0x3027,	// (0x00032ea4) main_cset6_text2_pane_g1

0x302f,	// (0x00032eac) main_cset6_text2_pane_t1

0xcb27,	// (0x0003c9a4) list_cset_text2_pane_t1_ParamLimits

0xcb27,	// (0x0003c9a4) list_cset_text2_pane_t1

0xf0be,	// (0x0003ef3b) main_radioblah_pane_ParamLimits

0xc8a3,	// (0x0003c720) main_mobtv_info_pane_t3_ParamLimits

0xc8a3,	// (0x0003c720) main_mobtv_info_pane_t3

0xc9f8,	// (0x0003c875) main_radioblah_pane_g1

0xca23,	// (0x0003c8a0) main_radioblah_info_pane_g1

0xcaa4,	// (0x0003c921) main_radioblah_info_pane_t3_ParamLimits

0xcaa4,	// (0x0003c921) main_radioblah_info_pane_t3

0x7db6,	// (0x00037c33) highlight_cell_cale_month_pane_ParamLimits

0x7db6,	// (0x00037c33) highlight_cell_cale_month_pane

0xd932,	// (0x0003d7af) main_phob_fisheye_pane

0x1934,	// (0x000317b1) scroll_pane_cp0031_ParamLimits

0x1934,	// (0x000317b1) scroll_pane_cp0031

0x2d9a,	// (0x00032c17) wait_bar_pane_cp08_ParamLimits

0xc3b9,	// (0x0003c236) cset_list_set_pane_copy1_ParamLimits

0x357a,	// (0x000333f7) highlight_cell_cale_month_pane_g1

0xcb52,	// (0x0003c9cf) highlight_cell_cale_month_pane_t1

0x294f,	// (0x000327cc) list_gen_pane_cp01

0x249f,	// (0x0003231c) scroll_pane_01

0x58d5,	// (0x00035752) list_single_double_fisheye_pane

0x58de,	// (0x0003575b) list_double_fisheye_pane_g1_ParamLimits

0x58de,	// (0x0003575b) list_double_fisheye_pane_g1

0x58ea,	// (0x00035767) list_double_fisheye_pane_g2_ParamLimits

0x58ea,	// (0x00035767) list_double_fisheye_pane_g2

0x58fe,	// (0x0003577b) list_double_fisheye_pane_g3_ParamLimits

0x58fe,	// (0x0003577b) list_double_fisheye_pane_g3

0x0004,

0xfccc,	// (0x0003fb49) list_double_fisheye_pane_g_ParamLimits

0xfccc,	// (0x0003fb49) list_double_fisheye_pane_g

0x5927,	// (0x000357a4) list_double_fisheye_pane_t1_ParamLimits

0x5927,	// (0x000357a4) list_double_fisheye_pane_t1

0x5942,	// (0x000357bf) list_double_fisheye_pane_t2_ParamLimits

0x5942,	// (0x000357bf) list_double_fisheye_pane_t2

0x0001,

0xfcd7,	// (0x0003fb54) list_double_fisheye_pane_t_ParamLimits

0xfcd7,	// (0x0003fb54) list_double_fisheye_pane_t

0xd932,	// (0x0003d7af) main_call5_pane

0xc96a,	// (0x0003c7e7) sc_swipe_pane_ParamLimits

0xc96a,	// (0x0003c7e7) sc_swipe_pane

0xcb6c,	// (0x0003c9e9) call5_image_pane_ParamLimits

0xcb6c,	// (0x0003c9e9) call5_image_pane

0xcb7c,	// (0x0003c9f9) call5_swipe_1_pane_ParamLimits

0xcb7c,	// (0x0003c9f9) call5_swipe_1_pane

0xcb88,	// (0x0003ca05) call5_swipe_2_pane_ParamLimits

0xcb88,	// (0x0003ca05) call5_swipe_2_pane

0xcba2,	// (0x0003ca1f) popup_call5_audio_first_window_ParamLimits

0xcba2,	// (0x0003ca1f) popup_call5_audio_first_window

0x181a,	// (0x00031697) call5_swipe_1_pane_g1_ParamLimits

0x181a,	// (0x00031697) call5_swipe_1_pane_g1

0x35c8,	// (0x00033445) call5_swipe_1_pane_g2_ParamLimits

0x35c8,	// (0x00033445) call5_swipe_1_pane_g2

0x0001,

0xfcdc,	// (0x0003fb59) call5_swipe_1_pane_g_ParamLimits

0xfcdc,	// (0x0003fb59) call5_swipe_1_pane_g

0x35d4,	// (0x00033451) call5_swipe_1_pane_t1_ParamLimits

0x35d4,	// (0x00033451) call5_swipe_1_pane_t1

0x181a,	// (0x00031697) call5_swipe_2_pane_g1_ParamLimits

0x181a,	// (0x00031697) call5_swipe_2_pane_g1

0x35e9,	// (0x00033466) call5_swipe_2_pane_g2_ParamLimits

0x35e9,	// (0x00033466) call5_swipe_2_pane_g2

0x0001,

0xfce1,	// (0x0003fb5e) call5_swipe_2_pane_g_ParamLimits

0xfce1,	// (0x0003fb5e) call5_swipe_2_pane_g

0x35f5,	// (0x00033472) call5_swipe_2_pane_t1_ParamLimits

0x35f5,	// (0x00033472) call5_swipe_2_pane_t1

0x360a,	// (0x00033487) sc_swipe_pane_g1_ParamLimits

0x360a,	// (0x00033487) sc_swipe_pane_g1

0x3617,	// (0x00033494) sc_swipe_pane_g2_ParamLimits

0x3617,	// (0x00033494) sc_swipe_pane_g2

0x0001,

0xfce6,	// (0x0003fb63) sc_swipe_pane_g_ParamLimits

0xfce6,	// (0x0003fb63) sc_swipe_pane_g

0x3623,	// (0x000334a0) sc_swipe_pane_t1_ParamLimits

0x3623,	// (0x000334a0) sc_swipe_pane_t1

0xd932,	// (0x0003d7af) main_cmail_launcher_pane

0xcbb0,	// (0x0003ca2d) aid_size_cell_cmail_l_ParamLimits

0xcbb0,	// (0x0003ca2d) aid_size_cell_cmail_l

0xcbc0,	// (0x0003ca3d) grid_cmail_l_pane_ParamLimits

0xcbc0,	// (0x0003ca3d) grid_cmail_l_pane

0xcbd0,	// (0x0003ca4d) cell_cmail_l_pane_ParamLimits

0xcbd0,	// (0x0003ca4d) cell_cmail_l_pane

0xcbe4,	// (0x0003ca61) cell_cmail_l_pane_g1_ParamLimits

0xcbe4,	// (0x0003ca61) cell_cmail_l_pane_g1

0xcbf0,	// (0x0003ca6d) cell_cmail_l_pane_t1_ParamLimits

0xcbf0,	// (0x0003ca6d) cell_cmail_l_pane_t1

0x3638,	// (0x000334b5) cell_cmail_l_pane_t2_ParamLimits

0x3638,	// (0x000334b5) cell_cmail_l_pane_t2

0x0001,

0xfceb,	// (0x0003fb68) cell_cmail_l_pane_t_ParamLimits

0xfceb,	// (0x0003fb68) cell_cmail_l_pane_t

0xf0be,	// (0x0003ef3b) grid_highlight_pane_cp018_ParamLimits

0xf0be,	// (0x0003ef3b) grid_highlight_pane_cp018

0x636d,	// (0x000361ea) main2_pane_ParamLimits

0x636d,	// (0x000361ea) main2_pane

0xe1c0,	// (0x0003e03d) popup_sp_fs_action_menu_bg_pane_g1

0xe1c8,	// (0x0003e045) popup_sp_fs_action_menu_bg_pane_g2

0xe1d0,	// (0x0003e04d) popup_sp_fs_action_menu_bg_pane_g3

0xe1d8,	// (0x0003e055) popup_sp_fs_action_menu_bg_pane_g4

0xe1e0,	// (0x0003e05d) popup_sp_fs_action_menu_bg_pane_g5

0xe1e8,	// (0x0003e065) popup_sp_fs_action_menu_bg_pane_g6

0xe1f0,	// (0x0003e06d) popup_sp_fs_action_menu_bg_pane_g7

0xe1f8,	// (0x0003e075) popup_sp_fs_action_menu_bg_pane_g8

0xe200,	// (0x0003e07d) popup_sp_fs_action_menu_bg_pane_g9

0xe208,	// (0x0003e085) popup_sp_fs_action_menu_bg_pane_g10

0xe208,	// (0x0003e085) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x0003f038) popup_sp_fs_action_menu_bg_pane_g

0x514c,	// (0x00034fc9) list_medium_line_x2_t3_g3_g1_ParamLimits

0x514c,	// (0x00034fc9) list_medium_line_x2_t3_g3_g1

0x5158,	// (0x00034fd5) list_medium_line_x2_t3_g3_g2_ParamLimits

0x5158,	// (0x00034fd5) list_medium_line_x2_t3_g3_g2

0x5164,	// (0x00034fe1) list_medium_line_x2_t3_g3_g3_ParamLimits

0x5164,	// (0x00034fe1) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x0003f0e8) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x0003f0e8) list_medium_line_x2_t3_g3_g

0x5170,	// (0x00034fed) list_medium_line_x2_t3_g3_t1_ParamLimits

0x5170,	// (0x00034fed) list_medium_line_x2_t3_g3_t1

0x5185,	// (0x00035002) list_medium_line_x2_t3_g3_t2_ParamLimits

0x5185,	// (0x00035002) list_medium_line_x2_t3_g3_t2

0x5199,	// (0x00035016) list_medium_line_x2_t3_g3_t3_ParamLimits

0x5199,	// (0x00035016) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x0003f0ef) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x0003f0ef) list_medium_line_x2_t3_g3_t

0x514c,	// (0x00034fc9) list_medium_line_x2_t3_g2_g1_ParamLimits

0x514c,	// (0x00034fc9) list_medium_line_x2_t3_g2_g1

0x5164,	// (0x00034fe1) list_medium_line_x2_t3_g2_g2_ParamLimits

0x5164,	// (0x00034fe1) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x0003f0f6) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x0003f0f6) list_medium_line_x2_t3_g2_g

0x51ae,	// (0x0003502b) list_medium_line_x2_t3_g2_t1_ParamLimits

0x51ae,	// (0x0003502b) list_medium_line_x2_t3_g2_t1

0x51c4,	// (0x00035041) list_medium_line_x2_t3_g2_t2_ParamLimits

0x51c4,	// (0x00035041) list_medium_line_x2_t3_g2_t2

0x5199,	// (0x00035016) list_medium_line_x2_t3_g2_t3_ParamLimits

0x5199,	// (0x00035016) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x0003f0fb) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x0003f0fb) list_medium_line_x2_t3_g2_t

0x514c,	// (0x00034fc9) list_medium_line_x2_t4_g4_g1_ParamLimits

0x514c,	// (0x00034fc9) list_medium_line_x2_t4_g4_g1

0x51d6,	// (0x00035053) list_medium_line_x2_t4_g4_g2_ParamLimits

0x51d6,	// (0x00035053) list_medium_line_x2_t4_g4_g2

0x5158,	// (0x00034fd5) list_medium_line_x2_t4_g4_g3_ParamLimits

0x5158,	// (0x00034fd5) list_medium_line_x2_t4_g4_g3

0x51e2,	// (0x0003505f) list_medium_line_x2_t4_g4_g4_ParamLimits

0x51e2,	// (0x0003505f) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x0003f102) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x0003f102) list_medium_line_x2_t4_g4_g

0x51ee,	// (0x0003506b) list_medium_line_x2_t4_g4_t1_ParamLimits

0x51ee,	// (0x0003506b) list_medium_line_x2_t4_g4_t1

0x5205,	// (0x00035082) list_medium_line_x2_t4_g4_t2_ParamLimits

0x5205,	// (0x00035082) list_medium_line_x2_t4_g4_t2

0x521a,	// (0x00035097) list_medium_line_x2_t4_g4_t3_ParamLimits

0x521a,	// (0x00035097) list_medium_line_x2_t4_g4_t3

0x522c,	// (0x000350a9) list_medium_line_x2_t4_g4_t4_ParamLimits

0x522c,	// (0x000350a9) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x0003f10b) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x0003f10b) list_medium_line_x2_t4_g4_t

0x514c,	// (0x00034fc9) list_medium_line_x2_t2_g4_g1_ParamLimits

0x514c,	// (0x00034fc9) list_medium_line_x2_t2_g4_g1

0x51d6,	// (0x00035053) list_medium_line_x2_t2_g4_g2_ParamLimits

0x51d6,	// (0x00035053) list_medium_line_x2_t2_g4_g2

0x5158,	// (0x00034fd5) list_medium_line_x2_t2_g4_g3_ParamLimits

0x5158,	// (0x00034fd5) list_medium_line_x2_t2_g4_g3

0x5164,	// (0x00034fe1) list_medium_line_x2_t2_g4_g4_ParamLimits

0x5164,	// (0x00034fe1) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x0003f172) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x0003f172) list_medium_line_x2_t2_g4_g

0x523e,	// (0x000350bb) list_medium_line_x2_t2_g4_t1_ParamLimits

0x523e,	// (0x000350bb) list_medium_line_x2_t2_g4_t1

0x5199,	// (0x00035016) list_medium_line_x2_t2_g4_t2_ParamLimits

0x5199,	// (0x00035016) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x0003f17b) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x0003f17b) list_medium_line_x2_t2_g4_t

0x514c,	// (0x00034fc9) list_medium_line_x2_t2_g3_g1_ParamLimits

0x514c,	// (0x00034fc9) list_medium_line_x2_t2_g3_g1

0x5158,	// (0x00034fd5) list_medium_line_x2_t2_g3_g2_ParamLimits

0x5158,	// (0x00034fd5) list_medium_line_x2_t2_g3_g2

0x5164,	// (0x00034fe1) list_medium_line_x2_t2_g3_g3_ParamLimits

0x5164,	// (0x00034fe1) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x0003f0e8) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x0003f0e8) list_medium_line_x2_t2_g3_g

0x5253,	// (0x000350d0) list_medium_line_x2_t2_g3_t1_ParamLimits

0x5253,	// (0x000350d0) list_medium_line_x2_t2_g3_t1

0x5199,	// (0x00035016) list_medium_line_x2_t2_g3_t2_ParamLimits

0x5199,	// (0x00035016) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x0003f180) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x0003f180) list_medium_line_x2_t2_g3_t

0x8032,	// (0x00037eaf) main_sp_fs_list_pane_ParamLimits

0x8032,	// (0x00037eaf) main_sp_fs_list_pane

0x803e,	// (0x00037ebb) sp_fs_scroll_pane_ParamLimits

0x803e,	// (0x00037ebb) sp_fs_scroll_pane

0x5268,	// (0x000350e5) list_medium_line_x2_t3_t1

0x5278,	// (0x000350f5) list_medium_line_x2_t3_t2

0x5286,	// (0x00035103) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x0003f1cb) list_medium_line_x2_t3_t

0x5294,	// (0x00035111) list_medium_line_x3_t4_t1

0x52a4,	// (0x00035121) list_medium_line_x3_t4_t2

0x52b2,	// (0x0003512f) list_medium_line_x3_t4_t3

0x5286,	// (0x00035103) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x0003f1d2) list_medium_line_x3_t4_t

0x52c0,	// (0x0003513d) list_medium_line_x4_t5_t1

0x52d0,	// (0x0003514d) list_medium_line_x4_t5_t2

0x52b2,	// (0x0003512f) list_medium_line_x4_t5_t3

0x52de,	// (0x0003515b) list_medium_line_x4_t5_t4

0x5286,	// (0x00035103) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x0003f1db) list_medium_line_x4_t5_t

0x514c,	// (0x00034fc9) list_medium_line_t4_g4_g1_ParamLimits

0x514c,	// (0x00034fc9) list_medium_line_t4_g4_g1

0x51e2,	// (0x0003505f) list_medium_line_t4_g4_g2_ParamLimits

0x51e2,	// (0x0003505f) list_medium_line_t4_g4_g2

0x52ec,	// (0x00035169) list_medium_line_t4_g4_g3_ParamLimits

0x52ec,	// (0x00035169) list_medium_line_t4_g4_g3

0x5164,	// (0x00034fe1) list_medium_line_t4_g4_g4_ParamLimits

0x5164,	// (0x00034fe1) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x0003f1e6) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x0003f1e6) list_medium_line_t4_g4_g

0x52f8,	// (0x00035175) list_medium_line_t4_g4_t1_ParamLimits

0x52f8,	// (0x00035175) list_medium_line_t4_g4_t1

0x530d,	// (0x0003518a) list_medium_line_t4_g4_t2_ParamLimits

0x530d,	// (0x0003518a) list_medium_line_t4_g4_t2

0x5322,	// (0x0003519f) list_medium_line_t4_g4_t3_ParamLimits

0x5322,	// (0x0003519f) list_medium_line_t4_g4_t3

0x5199,	// (0x00035016) list_medium_line_t4_g4_t4_ParamLimits

0x5199,	// (0x00035016) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x0003f1ef) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x0003f1ef) list_medium_line_t4_g4_t

0x8131,	// (0x00037fae) chi_dic_find_pane_g1

0x908f,	// (0x00038f0c) main_tport_pane

0x55e1,	// (0x0003545e) list_medium_line_plain_t1

0x55ef,	// (0x0003546c) list_medium_line_t2_g2_g1_ParamLimits

0x55ef,	// (0x0003546c) list_medium_line_t2_g2_g1

0x55fb,	// (0x00035478) list_medium_line_t2_g2_g2_ParamLimits

0x55fb,	// (0x00035478) list_medium_line_t2_g2_g2

0x0001,

0xfa2e,	// (0x0003f8ab) list_medium_line_t2_g2_g_ParamLimits

0xfa2e,	// (0x0003f8ab) list_medium_line_t2_g2_g

0x5607,	// (0x00035484) list_medium_line_t2_g2_t1_ParamLimits

0x5607,	// (0x00035484) list_medium_line_t2_g2_t1

0x5621,	// (0x0003549e) list_medium_line_t2_g2_t2_ParamLimits

0x5621,	// (0x0003549e) list_medium_line_t2_g2_t2

0x0001,

0xfa33,	// (0x0003f8b0) list_medium_line_t2_g2_t_ParamLimits

0xfa33,	// (0x0003f8b0) list_medium_line_t2_g2_t

0x57b4,	// (0x00035631) aid_sp_fs_list_icon_a_sm

0x57bc,	// (0x00035639) aid_sp_fs_list_icon_d

0x3deb,	// (0x00033c68) aid_sp_fs_text_primary

0x3b52,	// (0x000339cf) aid_sp_fs_text_secondary

0x57c4,	// (0x00035641) list_medium_line

0x57c4,	// (0x00035641) list_medium_line_g2

0x57c4,	// (0x00035641) list_medium_line_g3

0x57c4,	// (0x00035641) list_medium_line_plain

0x57c4,	// (0x00035641) list_medium_line_plain_t2

0x57c4,	// (0x00035641) list_medium_line_plain_t3

0x57c4,	// (0x00035641) list_medium_line_right_icon

0x57c4,	// (0x00035641) list_medium_line_right_iconx2

0x57c4,	// (0x00035641) list_medium_line_t2

0x57c4,	// (0x00035641) list_medium_line_t2_g2

0x57c4,	// (0x00035641) list_medium_line_t2_g3

0x57c4,	// (0x00035641) list_medium_line_t2_right_icon

0x57c4,	// (0x00035641) list_medium_line_t2_right_iconx2

0x57c4,	// (0x00035641) list_medium_line_t3

0x57c4,	// (0x00035641) list_medium_line_t3_g2

0x57c4,	// (0x00035641) list_medium_line_t3_g3

0x57c4,	// (0x00035641) list_medium_line_t3_right_iconx2

0x57cd,	// (0x0003564a) list_medium_line_t4_g4

0x57d6,	// (0x00035653) list_medium_line_x2

0x57d6,	// (0x00035653) list_medium_line_x2_t2_g2

0x57d6,	// (0x00035653) list_medium_line_x2_t2_g3

0x57d6,	// (0x00035653) list_medium_line_x2_t2_g4

0x57d6,	// (0x00035653) list_medium_line_x2_t3

0x57d6,	// (0x00035653) list_medium_line_x2_t3_g2

0x57d6,	// (0x00035653) list_medium_line_x2_t3_g3

0x57d6,	// (0x00035653) list_medium_line_x2_t3_g4

0x57d6,	// (0x00035653) list_medium_line_x2_t4_g2

0x57d6,	// (0x00035653) list_medium_line_x2_t4_g4

0x57df,	// (0x0003565c) list_medium_line_x3

0x57df,	// (0x0003565c) list_medium_line_x3_t4

0x57df,	// (0x0003565c) list_medium_line_x3_t4_g4

0x57cd,	// (0x0003564a) list_medium_line_x4_t4

0x57cd,	// (0x0003564a) list_medium_line_x4_t4_g7

0x57cd,	// (0x0003564a) list_medium_line_x4_t5

0x57e8,	// (0x00035665) list_single_fs_dyc_pane_ParamLimits

0x57e8,	// (0x00035665) list_single_fs_dyc_pane

0x514c,	// (0x00034fc9) list_medium_line_x4_t4_g7_g1_ParamLimits

0x514c,	// (0x00034fc9) list_medium_line_x4_t4_g7_g1

0x5804,	// (0x00035681) list_medium_line_x4_t4_g7_g2_ParamLimits

0x5804,	// (0x00035681) list_medium_line_x4_t4_g7_g2

0x5810,	// (0x0003568d) list_medium_line_x4_t4_g7_g3_ParamLimits

0x5810,	// (0x0003568d) list_medium_line_x4_t4_g7_g3

0x581f,	// (0x0003569c) list_medium_line_x4_t4_g7_g4_ParamLimits

0x581f,	// (0x0003569c) list_medium_line_x4_t4_g7_g4

0x582b,	// (0x000356a8) list_medium_line_x4_t4_g7_g5_ParamLimits

0x582b,	// (0x000356a8) list_medium_line_x4_t4_g7_g5

0x583a,	// (0x000356b7) list_medium_line_x4_t4_g7_g6_ParamLimits

0x583a,	// (0x000356b7) list_medium_line_x4_t4_g7_g6

0x5849,	// (0x000356c6) list_medium_line_x4_t4_g7_g7_ParamLimits

0x5849,	// (0x000356c6) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbf8,	// (0x0003fa75) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbf8,	// (0x0003fa75) list_medium_line_x4_t4_g7_g

0x5855,	// (0x000356d2) list_medium_line_x4_t4_g7_t1_ParamLimits

0x5855,	// (0x000356d2) list_medium_line_x4_t4_g7_t1

0x586a,	// (0x000356e7) list_medium_line_x4_t4_g7_t2_ParamLimits

0x586a,	// (0x000356e7) list_medium_line_x4_t4_g7_t2

0x587f,	// (0x000356fc) list_medium_line_x4_t4_g7_t3_ParamLimits

0x587f,	// (0x000356fc) list_medium_line_x4_t4_g7_t3

0x5894,	// (0x00035711) list_medium_line_x4_t4_g7_t4_ParamLimits

0x5894,	// (0x00035711) list_medium_line_x4_t4_g7_t4

0x58a6,	// (0x00035723) list_medium_line_x4_t4_g7_t5_ParamLimits

0x58a6,	// (0x00035723) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc07,	// (0x0003fa84) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc07,	// (0x0003fa84) list_medium_line_x4_t4_g7_t

0x58b8,	// (0x00035735) list_single_dyc_row_pane_ParamLimits

0x58b8,	// (0x00035735) list_single_dyc_row_pane

0xcb60,	// (0x0003c9dd) call5_gesture_pane_ParamLimits

0xcb60,	// (0x0003c9dd) call5_gesture_pane

0xcb94,	// (0x0003ca11) call5_windows_pane_ParamLimits

0xcb94,	// (0x0003ca11) call5_windows_pane

0xcc06,	// (0x0003ca83) call5_swipe_1_pane_cp_ParamLimits

0xcc06,	// (0x0003ca83) call5_swipe_1_pane_cp

0xcc12,	// (0x0003ca8f) call5_swipe_2_pane_cp_ParamLimits

0xcc12,	// (0x0003ca8f) call5_swipe_2_pane_cp

0xeba5,	// (0x0003ea22) call5_image_pane_cp

0xcc1e,	// (0x0003ca9b) popup_call5_audio_first_window_cp_ParamLimits

0xcc1e,	// (0x0003ca9b) popup_call5_audio_first_window_cp

0x360a,	// (0x00033487) call5_swipe_1_pane_g1_cp_ParamLimits

0x360a,	// (0x00033487) call5_swipe_1_pane_g1_cp

0x364a,	// (0x000334c7) call5_swipe_1_pane_g2_cp

0x3623,	// (0x000334a0) call5_swipe_1_pane_t1_cp_ParamLimits

0x3623,	// (0x000334a0) call5_swipe_1_pane_t1_cp

0x360a,	// (0x00033487) call5_swipe_2_pane_g1_cp_ParamLimits

0x360a,	// (0x00033487) call5_swipe_2_pane_g1_cp

0x3652,	// (0x000334cf) call5_swipe_2_pane_g2_cp

0x365a,	// (0x000334d7) call5_swipe_2_pane_t1_cp_ParamLimits

0x365a,	// (0x000334d7) call5_swipe_2_pane_t1_cp

0xf0be,	// (0x0003ef3b) main_sp_fs_email_pane

0x366f,	// (0x000334ec) main_sp_fs_listscroll_pane_te

0x5964,	// (0x000357e1) popup_sp_fs_action_menu_pane_ParamLimits

0x5964,	// (0x000357e1) popup_sp_fs_action_menu_pane

0x15b3,	// (0x00031430) bg_sp_fs_ctrlbar_pane_g1

0x36b8,	// (0x00033535) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x36c1,	// (0x0003353e) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x36ca,	// (0x00033547) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x15b3,	// (0x00031430) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcf0,	// (0x0003fb6d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x1396,	// (0x00031213) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x1396,	// (0x00031213) bg_sp_fs_ctrlbar_ddmenu_pane

0x36d3,	// (0x00033550) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x36d3,	// (0x00033550) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x36df,	// (0x0003355c) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x36df,	// (0x0003355c) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf9,	// (0x0003fb76) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf9,	// (0x0003fb76) main_sp_fs_ctrlbar_ddmenu_pane_g

0x36eb,	// (0x00033568) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x36eb,	// (0x00033568) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x59a4,	// (0x00035821) list_medium_line_t2_right_icon_g1

0x59ac,	// (0x00035829) list_medium_line_t2_right_icon_t1

0x59bc,	// (0x00035839) list_medium_line_t2_right_icon_t2

0x0001,

0xfcfe,	// (0x0003fb7b) list_medium_line_t2_right_icon_t

0x10ab,	// (0x00030f28) bg_sp_fs_ctrlbar_pane_ParamLimits

0x10ab,	// (0x00030f28) bg_sp_fs_ctrlbar_pane

0xcc81,	// (0x0003cafe) main_sp_fs_ctrlbar_button_pane_cp01

0xcc89,	// (0x0003cb06) main_sp_fs_ctrlbar_ddmenu_pane

0xf0ef,	// (0x0003ef6c) main_sp_fs_ctrlbar_pane_g1

0x3745,	// (0x000335c2) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd03,	// (0x0003fb80) main_sp_fs_ctrlbar_pane_g

0x3751,	// (0x000335ce) main_sp_fs_ctrlbar_pane_t1

0x59ca,	// (0x00035847) main_sp_fs_ctrlbar_pane

0x59e6,	// (0x00035863) main_sp_fs_listscroll_pane_te_cp01

0x59f7,	// (0x00035874) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x59f7,	// (0x00035874) popup_sp_fs_action_menu_pane_cp01

0xf0be,	// (0x0003ef3b) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf0be,	// (0x0003ef3b) bg_sp_fs_highlight_list_pane_cp01

0x5a0f,	// (0x0003588c) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x5a0f,	// (0x0003588c) sp_fs_action_menu_list_gene_pane_g1

0x3775,	// (0x000335f2) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x3775,	// (0x000335f2) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd08,	// (0x0003fb85) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd08,	// (0x0003fb85) sp_fs_action_menu_list_gene_pane_g

0x5a1e,	// (0x0003589b) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x5a1e,	// (0x0003589b) sp_fs_action_menu_list_gene_pane_t1

0x5a36,	// (0x000358b3) sp_fs_action_menu_list_gene_pane_ParamLimits

0x5a36,	// (0x000358b3) sp_fs_action_menu_list_gene_pane

0x37b7,	// (0x00033634) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x37b7,	// (0x00033634) popup_sp_fs_action_menu_bg_pane

0x5a53,	// (0x000358d0) sp_fs_action_menu_list_pane_ParamLimits

0x5a53,	// (0x000358d0) sp_fs_action_menu_list_pane

0x37e3,	// (0x00033660) sp_fs_scroll_pane_cp01_ParamLimits

0x37e3,	// (0x00033660) sp_fs_scroll_pane_cp01

0x5a71,	// (0x000358ee) list_medium_line_plain_t2_t1

0x5a81,	// (0x000358fe) list_medium_line_plain_t2_t2

0x0001,

0xfd0d,	// (0x0003fb8a) list_medium_line_plain_t2_t

0x5a8f,	// (0x0003590c) list_medium_line_plain_t3_t1

0x5a9f,	// (0x0003591c) list_medium_line_plain_t3_t2

0x5aad,	// (0x0003592a) list_medium_line_plain_t3_t3

0x0002,

0xfd12,	// (0x0003fb8f) list_medium_line_plain_t3_t

0x514c,	// (0x00034fc9) list_medium_line_x2_t2_g2_g1_ParamLimits

0x514c,	// (0x00034fc9) list_medium_line_x2_t2_g2_g1

0x5164,	// (0x00034fe1) list_medium_line_x2_t2_g2_g2_ParamLimits

0x5164,	// (0x00034fe1) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x0003f0f6) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x0003f0f6) list_medium_line_x2_t2_g2_g

0x52f8,	// (0x00035175) list_medium_line_x2_t2_g2_t1_ParamLimits

0x52f8,	// (0x00035175) list_medium_line_x2_t2_g2_t1

0x5199,	// (0x00035016) list_medium_line_x2_t2_g2_t2_ParamLimits

0x5199,	// (0x00035016) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd19,	// (0x0003fb96) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd19,	// (0x0003fb96) list_medium_line_x2_t2_g2_t

0x514c,	// (0x00034fc9) list_medium_line_x2_t4_g2_g1_ParamLimits

0x514c,	// (0x00034fc9) list_medium_line_x2_t4_g2_g1

0x5abb,	// (0x00035938) list_medium_line_x2_t4_g2_g2_ParamLimits

0x5abb,	// (0x00035938) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd1e,	// (0x0003fb9b) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd1e,	// (0x0003fb9b) list_medium_line_x2_t4_g2_g

0x5acd,	// (0x0003594a) list_medium_line_x2_t4_g2_t1_ParamLimits

0x5acd,	// (0x0003594a) list_medium_line_x2_t4_g2_t1

0x5ae7,	// (0x00035964) list_medium_line_x2_t4_g2_t2_ParamLimits

0x5ae7,	// (0x00035964) list_medium_line_x2_t4_g2_t2

0x5afc,	// (0x00035979) list_medium_line_x2_t4_g2_t3_ParamLimits

0x5afc,	// (0x00035979) list_medium_line_x2_t4_g2_t3

0x5199,	// (0x00035016) list_medium_line_x2_t4_g2_t4_ParamLimits

0x5199,	// (0x00035016) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd23,	// (0x0003fba0) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd23,	// (0x0003fba0) list_medium_line_x2_t4_g2_t

0x5b11,	// (0x0003598e) list_medium_line_t3_right_iconx2_g1

0x59a4,	// (0x00035821) list_medium_line_t3_right_iconx2_g2

0x5b19,	// (0x00035996) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd2c,	// (0x0003fba9) list_medium_line_t3_right_iconx2_g

0x5b21,	// (0x0003599e) list_medium_line_t3_right_iconx2_t1

0x5b31,	// (0x000359ae) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd33,	// (0x0003fbb0) list_medium_line_t3_right_iconx2_t

0x514c,	// (0x00034fc9) list_medium_line_x3_t4_g4_g1_ParamLimits

0x514c,	// (0x00034fc9) list_medium_line_x3_t4_g4_g1

0x5158,	// (0x00034fd5) list_medium_line_x3_t4_g4_g2_ParamLimits

0x5158,	// (0x00034fd5) list_medium_line_x3_t4_g4_g2

0x51e2,	// (0x0003505f) list_medium_line_x3_t4_g4_g3_ParamLimits

0x51e2,	// (0x0003505f) list_medium_line_x3_t4_g4_g3

0x5b3f,	// (0x000359bc) list_medium_line_x3_t4_g4_g4_ParamLimits

0x5b3f,	// (0x000359bc) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd38,	// (0x0003fbb5) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd38,	// (0x0003fbb5) list_medium_line_x3_t4_g4_g

0x5b4b,	// (0x000359c8) list_medium_line_x3_t4_g4_t1_ParamLimits

0x5b4b,	// (0x000359c8) list_medium_line_x3_t4_g4_t1

0x5b62,	// (0x000359df) list_medium_line_x3_t4_g4_t2_ParamLimits

0x5b62,	// (0x000359df) list_medium_line_x3_t4_g4_t2

0x530d,	// (0x0003518a) list_medium_line_x3_t4_g4_t3_ParamLimits

0x530d,	// (0x0003518a) list_medium_line_x3_t4_g4_t3

0x5b77,	// (0x000359f4) list_medium_line_x3_t4_g4_t4_ParamLimits

0x5b77,	// (0x000359f4) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd41,	// (0x0003fbbe) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd41,	// (0x0003fbbe) list_medium_line_x3_t4_g4_t

0x5b94,	// (0x00035a11) list_single_dyc_row_text_pane_t1_ParamLimits

0x5b94,	// (0x00035a11) list_single_dyc_row_text_pane_t1

0x5bcb,	// (0x00035a48) list_single_dyc_row_text_pane_t2_ParamLimits

0x5bcb,	// (0x00035a48) list_single_dyc_row_text_pane_t2

0x5c25,	// (0x00035aa2) list_single_dyc_row_text_pane_t3_ParamLimits

0x5c25,	// (0x00035aa2) list_single_dyc_row_text_pane_t3

0x0002,

0xfd4a,	// (0x0003fbc7) list_single_dyc_row_text_pane_t_ParamLimits

0xfd4a,	// (0x0003fbc7) list_single_dyc_row_text_pane_t

0x5c37,	// (0x00035ab4) list_single_dyc_row_pane_g1_ParamLimits

0x5c37,	// (0x00035ab4) list_single_dyc_row_pane_g1

0x5c43,	// (0x00035ac0) list_single_dyc_row_pane_g2_ParamLimits

0x5c43,	// (0x00035ac0) list_single_dyc_row_pane_g2

0x5c4f,	// (0x00035acc) list_single_dyc_row_pane_g3_ParamLimits

0x5c4f,	// (0x00035acc) list_single_dyc_row_pane_g3

0x5c5b,	// (0x00035ad8) list_single_dyc_row_pane_g4_ParamLimits

0x5c5b,	// (0x00035ad8) list_single_dyc_row_pane_g4

0x0003,

0xfd51,	// (0x0003fbce) list_single_dyc_row_pane_g_ParamLimits

0xfd51,	// (0x0003fbce) list_single_dyc_row_pane_g

0x5c67,	// (0x00035ae4) list_single_dyc_row_text_pane_ParamLimits

0x5c67,	// (0x00035ae4) list_single_dyc_row_text_pane

0xd932,	// (0x0003d7af) bg_sp_fs_scroll_pane

0x389b,	// (0x00033718) thumb_sp_fs_scroll_pane

0x55ef,	// (0x0003546c) list_medium_line_g1_ParamLimits

0x55ef,	// (0x0003546c) list_medium_line_g1

0x5c86,	// (0x00035b03) list_medium_line_t1_ParamLimits

0x5c86,	// (0x00035b03) list_medium_line_t1

0x514c,	// (0x00034fc9) list_medium_line_x2_g1_ParamLimits

0x514c,	// (0x00034fc9) list_medium_line_x2_g1

0x5158,	// (0x00034fd5) list_medium_line_x2_g2_ParamLimits

0x5158,	// (0x00034fd5) list_medium_line_x2_g2

0x0001,

0xfd5a,	// (0x0003fbd7) list_medium_line_x2_g_ParamLimits

0xfd5a,	// (0x0003fbd7) list_medium_line_x2_g

0x5c9b,	// (0x00035b18) list_medium_line_x2_t1_ParamLimits

0x5c9b,	// (0x00035b18) list_medium_line_x2_t1

0x514c,	// (0x00034fc9) list_medium_line_x3_g1_ParamLimits

0x514c,	// (0x00034fc9) list_medium_line_x3_g1

0x5158,	// (0x00034fd5) list_medium_line_x3_g2_ParamLimits

0x5158,	// (0x00034fd5) list_medium_line_x3_g2

0x0001,

0xfd5a,	// (0x0003fbd7) list_medium_line_x3_g_ParamLimits

0xfd5a,	// (0x0003fbd7) list_medium_line_x3_g

0x5c9b,	// (0x00035b18) list_medium_line_x3_t1_ParamLimits

0x5c9b,	// (0x00035b18) list_medium_line_x3_t1

0x38cf,	// (0x0003374c) thumb_sp_fs_scroll_pane_g1

0x38d8,	// (0x00033755) thumb_sp_fs_scroll_pane_g2

0x38e1,	// (0x0003375e) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x0003fbdc) thumb_sp_fs_scroll_pane_g

0x38cf,	// (0x0003374c) bg_sp_fs_scroll_pane_g1

0x38d8,	// (0x00033755) bg_sp_fs_scroll_pane_g2

0x38e1,	// (0x0003375e) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x0003fbdc) bg_sp_fs_scroll_pane_g

0x514c,	// (0x00034fc9) list_medium_line_x2_t3_g4_g1_ParamLimits

0x514c,	// (0x00034fc9) list_medium_line_x2_t3_g4_g1

0x51d6,	// (0x00035053) list_medium_line_x2_t3_g4_g2_ParamLimits

0x51d6,	// (0x00035053) list_medium_line_x2_t3_g4_g2

0x5158,	// (0x00034fd5) list_medium_line_x2_t3_g4_g3_ParamLimits

0x5158,	// (0x00034fd5) list_medium_line_x2_t3_g4_g3

0x5164,	// (0x00034fe1) list_medium_line_x2_t3_g4_g4_ParamLimits

0x5164,	// (0x00034fe1) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x0003f172) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x0003f172) list_medium_line_x2_t3_g4_g

0x5cb1,	// (0x00035b2e) list_medium_line_x2_t3_g4_t1_ParamLimits

0x5cb1,	// (0x00035b2e) list_medium_line_x2_t3_g4_t1

0x5cc7,	// (0x00035b44) list_medium_line_x2_t3_g4_t2_ParamLimits

0x5cc7,	// (0x00035b44) list_medium_line_x2_t3_g4_t2

0x5199,	// (0x00035016) list_medium_line_x2_t3_g4_t3_ParamLimits

0x5199,	// (0x00035016) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd66,	// (0x0003fbe3) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd66,	// (0x0003fbe3) list_medium_line_x2_t3_g4_t

0x55ef,	// (0x0003546c) list_medium_line_g2_g1_ParamLimits

0x55ef,	// (0x0003546c) list_medium_line_g2_g1

0x55fb,	// (0x00035478) list_medium_line_g2_g2_ParamLimits

0x55fb,	// (0x00035478) list_medium_line_g2_g2

0x0001,

0xfa2e,	// (0x0003f8ab) list_medium_line_g2_g_ParamLimits

0xfa2e,	// (0x0003f8ab) list_medium_line_g2_g

0x5ce0,	// (0x00035b5d) list_medium_line_g2_t1_ParamLimits

0x5ce0,	// (0x00035b5d) list_medium_line_g2_t1

0x55ef,	// (0x0003546c) list_medium_line_t3_g2_g1_ParamLimits

0x55ef,	// (0x0003546c) list_medium_line_t3_g2_g1

0x55fb,	// (0x00035478) list_medium_line_t3_g2_g2_ParamLimits

0x55fb,	// (0x00035478) list_medium_line_t3_g2_g2

0x0001,

0xfa2e,	// (0x0003f8ab) list_medium_line_t3_g2_g_ParamLimits

0xfa2e,	// (0x0003f8ab) list_medium_line_t3_g2_g

0x5cf5,	// (0x00035b72) list_medium_line_t3_g2_t1_ParamLimits

0x5cf5,	// (0x00035b72) list_medium_line_t3_g2_t1

0x5d0f,	// (0x00035b8c) list_medium_line_t3_g2_t2_ParamLimits

0x5d0f,	// (0x00035b8c) list_medium_line_t3_g2_t2

0x5d24,	// (0x00035ba1) list_medium_line_t3_g2_t3_ParamLimits

0x5d24,	// (0x00035ba1) list_medium_line_t3_g2_t3

0x0002,

0xfd6d,	// (0x0003fbea) list_medium_line_t3_g2_t_ParamLimits

0xfd6d,	// (0x0003fbea) list_medium_line_t3_g2_t

0x59a4,	// (0x00035821) list_medium_line_right_icon_g1

0x5d3a,	// (0x00035bb7) list_medium_line_right_icon_t1

0x55ef,	// (0x0003546c) list_medium_line_t2_g1_ParamLimits

0x55ef,	// (0x0003546c) list_medium_line_t2_g1

0x5d48,	// (0x00035bc5) list_medium_line_t2_t1_ParamLimits

0x5d48,	// (0x00035bc5) list_medium_line_t2_t1

0x5d5f,	// (0x00035bdc) list_medium_line_t2_t2_ParamLimits

0x5d5f,	// (0x00035bdc) list_medium_line_t2_t2

0x0001,

0xfd74,	// (0x0003fbf1) list_medium_line_t2_t_ParamLimits

0xfd74,	// (0x0003fbf1) list_medium_line_t2_t

0x55ef,	// (0x0003546c) list_medium_line_t3_g1_ParamLimits

0x55ef,	// (0x0003546c) list_medium_line_t3_g1

0x5d71,	// (0x00035bee) list_medium_line_t3_t1_ParamLimits

0x5d71,	// (0x00035bee) list_medium_line_t3_t1

0x5d88,	// (0x00035c05) list_medium_line_t3_t2_ParamLimits

0x5d88,	// (0x00035c05) list_medium_line_t3_t2

0x5d9d,	// (0x00035c1a) list_medium_line_t3_t3_ParamLimits

0x5d9d,	// (0x00035c1a) list_medium_line_t3_t3

0x0002,

0xfd79,	// (0x0003fbf6) list_medium_line_t3_t_ParamLimits

0xfd79,	// (0x0003fbf6) list_medium_line_t3_t

0x55ef,	// (0x0003546c) list_medium_line_g3_g1_ParamLimits

0x55ef,	// (0x0003546c) list_medium_line_g3_g1

0x5daf,	// (0x00035c2c) list_medium_line_g3_g2_ParamLimits

0x5daf,	// (0x00035c2c) list_medium_line_g3_g2

0x55fb,	// (0x00035478) list_medium_line_g3_g3_ParamLimits

0x55fb,	// (0x00035478) list_medium_line_g3_g3

0x0002,

0xfd80,	// (0x0003fbfd) list_medium_line_g3_g_ParamLimits

0xfd80,	// (0x0003fbfd) list_medium_line_g3_g

0x5dbb,	// (0x00035c38) list_medium_line_g3_t1_ParamLimits

0x5dbb,	// (0x00035c38) list_medium_line_g3_t1

0x55ef,	// (0x0003546c) list_medium_line_t2_g3_g1_ParamLimits

0x55ef,	// (0x0003546c) list_medium_line_t2_g3_g1

0x5daf,	// (0x00035c2c) list_medium_line_t2_g3_g2_ParamLimits

0x5daf,	// (0x00035c2c) list_medium_line_t2_g3_g2

0x55fb,	// (0x00035478) list_medium_line_t2_g3_g3_ParamLimits

0x55fb,	// (0x00035478) list_medium_line_t2_g3_g3

0x0002,

0xfd80,	// (0x0003fbfd) list_medium_line_t2_g3_g_ParamLimits

0xfd80,	// (0x0003fbfd) list_medium_line_t2_g3_g

0x5dd0,	// (0x00035c4d) list_medium_line_t2_g3_t1_ParamLimits

0x5dd0,	// (0x00035c4d) list_medium_line_t2_g3_t1

0x5dea,	// (0x00035c67) list_medium_line_t2_g3_t2_ParamLimits

0x5dea,	// (0x00035c67) list_medium_line_t2_g3_t2

0x0001,

0xfd87,	// (0x0003fc04) list_medium_line_t2_g3_t_ParamLimits

0xfd87,	// (0x0003fc04) list_medium_line_t2_g3_t

0x55ef,	// (0x0003546c) list_medium_line_t3_g3_g1_ParamLimits

0x55ef,	// (0x0003546c) list_medium_line_t3_g3_g1

0x5daf,	// (0x00035c2c) list_medium_line_t3_g3_g2_ParamLimits

0x5daf,	// (0x00035c2c) list_medium_line_t3_g3_g2

0x55fb,	// (0x00035478) list_medium_line_t3_g3_g3_ParamLimits

0x55fb,	// (0x00035478) list_medium_line_t3_g3_g3

0x0002,

0xfd80,	// (0x0003fbfd) list_medium_line_t3_g3_g_ParamLimits

0xfd80,	// (0x0003fbfd) list_medium_line_t3_g3_g

0x5dff,	// (0x00035c7c) list_medium_line_t3_g3_t1_ParamLimits

0x5dff,	// (0x00035c7c) list_medium_line_t3_g3_t1

0x5e18,	// (0x00035c95) list_medium_line_t3_g3_t2_ParamLimits

0x5e18,	// (0x00035c95) list_medium_line_t3_g3_t2

0x5e2e,	// (0x00035cab) list_medium_line_t3_g3_t3_ParamLimits

0x5e2e,	// (0x00035cab) list_medium_line_t3_g3_t3

0x0002,

0xfd8c,	// (0x0003fc09) list_medium_line_t3_g3_t_ParamLimits

0xfd8c,	// (0x0003fc09) list_medium_line_t3_g3_t

0x5b11,	// (0x0003598e) list_medium_line_right_iconx2_g1

0x59a4,	// (0x00035821) list_medium_line_right_iconx2_g2

0x0001,

0xfd93,	// (0x0003fc10) list_medium_line_right_iconx2_g

0x5e44,	// (0x00035cc1) list_medium_line_right_iconx2_t1

0x5b11,	// (0x0003598e) list_medium_line_t2_right_iconx2_g1

0x59a4,	// (0x00035821) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd93,	// (0x0003fc10) list_medium_line_t2_right_iconx2_g

0x5e52,	// (0x00035ccf) list_medium_line_t2_right_iconx2_t1

0x5e62,	// (0x00035cdf) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd98,	// (0x0003fc15) list_medium_line_t2_right_iconx2_t

0x5e70,	// (0x00035ced) list_medium_line_x4_t4_t1

0x5e7e,	// (0x00035cfb) list_medium_line_x4_t4_t2

0x5e8e,	// (0x00035d0b) list_medium_line_x4_t4_t3

0x5e9e,	// (0x00035d1b) list_medium_line_x4_t4_t4

0x0003,

0xfd9d,	// (0x0003fc1a) list_medium_line_x4_t4_t

0xccbc,	// (0x0003cb39) tport_appsw_pane_ParamLimits

0xccbc,	// (0x0003cb39) tport_appsw_pane

0xccc8,	// (0x0003cb45) tport_contact_pane_ParamLimits

0xccc8,	// (0x0003cb45) tport_contact_pane

0xccd8,	// (0x0003cb55) tport_listscroll_pane_ParamLimits

0xccd8,	// (0x0003cb55) tport_listscroll_pane

0xcce8,	// (0x0003cb65) cell_tport_appsw_pane_ParamLimits

0xcce8,	// (0x0003cb65) cell_tport_appsw_pane

0x18b7,	// (0x00031734) tport_appsw_pane_g1_ParamLimits

0x18b7,	// (0x00031734) tport_appsw_pane_g1

0x394a,	// (0x000337c7) tport_contact_pane_g1

0x3953,	// (0x000337d0) tport_contact_pane_t1

0x3961,	// (0x000337de) tport_contact_pane_t2

0x0001,

0xfda6,	// (0x0003fc23) tport_contact_pane_t

0x396f,	// (0x000337ec) list_tport_pane

0x3978,	// (0x000337f5) scroll_pane_cp_030

0x3989,	// (0x00033806) cell_tport_appsw_pane_g1

0x3999,	// (0x00033816) cell_tport_appsw_pane_t1

0xd932,	// (0x0003d7af) grid_highlight_pane_cp019

0xcd13,	// (0x0003cb90) list_tport_double_graphic_pane_ParamLimits

0xcd13,	// (0x0003cb90) list_tport_double_graphic_pane

0xf0be,	// (0x0003ef3b) list_highlight_pane_cp023_ParamLimits

0xf0be,	// (0x0003ef3b) list_highlight_pane_cp023

0xcd26,	// (0x0003cba3) list_tport_double_graphic_pane_g1_ParamLimits

0xcd26,	// (0x0003cba3) list_tport_double_graphic_pane_g1

0xcd33,	// (0x0003cbb0) list_tport_double_graphic_pane_t1_ParamLimits

0xcd33,	// (0x0003cbb0) list_tport_double_graphic_pane_t1

0xcd48,	// (0x0003cbc5) list_tport_double_graphic_pane_t2_ParamLimits

0xcd48,	// (0x0003cbc5) list_tport_double_graphic_pane_t2

0x0001,

0xfdb2,	// (0x0003fc2f) list_tport_double_graphic_pane_t_ParamLimits

0xfdb2,	// (0x0003fc2f) list_tport_double_graphic_pane_t

0xd932,	// (0x0003d7af) main_cale_note_pane

0xb26a,	// (0x0003b0e7) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xb26a,	// (0x0003b0e7) cell_vitu2_function_top_wide_pane_cp01

0xc8b7,	// (0x0003c734) wait_bar_pane_cp05_ParamLimits

0xd932,	// (0x0003d7af) listscroll_cmail_pane

0x39af,	// (0x0003382c) list_cmail_pane

0xcd64,	// (0x0003cbe1) list_cmail_body_pane

0xcd88,	// (0x0003cc05) list_single_cmail_header_caption_pane

0xcdb6,	// (0x0003cc33) list_single_cmail_header_detail_pane_ParamLimits

0xcdb6,	// (0x0003cc33) list_single_cmail_header_detail_pane

0xcdee,	// (0x0003cc6b) list_single_cmail_header_caption_pane_t1

0x5eae,	// (0x00035d2b) list_single_cmail_header_detail_pane_g1_ParamLimits

0x5eae,	// (0x00035d2b) list_single_cmail_header_detail_pane_g1

0x5ec6,	// (0x00035d43) list_single_cmail_header_detail_pane_g2_ParamLimits

0x5ec6,	// (0x00035d43) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb7,	// (0x0003fc34) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb7,	// (0x0003fc34) list_single_cmail_header_detail_pane_g

0x5ed2,	// (0x00035d4f) list_single_cmail_header_detail_pane_t1_ParamLimits

0x5ed2,	// (0x00035d4f) list_single_cmail_header_detail_pane_t1

0x5f2a,	// (0x00035da7) list_single_cmail_header_editor_pane_bg_ParamLimits

0x5f2a,	// (0x00035da7) list_single_cmail_header_editor_pane_bg

0x3a2c,	// (0x000338a9) list_cmail_body_pane_g1

0x3a35,	// (0x000338b2) list_cmail_body_pane_t1

0x2385,	// (0x00032202) list_single_cmail_header_editor_pane_bg_g1

0xe52d,	// (0x0003e3aa) list_single_cmail_header_editor_pane_bg_g1_copy1

0x2395,	// (0x00032212) list_single_cmail_header_editor_pane_bg_g1_copy2

0x238d,	// (0x0003220a) list_single_cmail_header_editor_pane_bg_g1_copy3

0x2606,	// (0x00032483) list_single_cmail_header_editor_pane_bg_g1_copy4

0x23b5,	// (0x00032232) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x23a5,	// (0x00032222) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x23ad,	// (0x0003222a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe50d,	// (0x0003e38a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xcdfe,	// (0x0003cc7b) calenote_gesture_pane_ParamLimits

0xcdfe,	// (0x0003cc7b) calenote_gesture_pane

0xce18,	// (0x0003cc95) calenote_window_pane_ParamLimits

0xce18,	// (0x0003cc95) calenote_window_pane

0x3a43,	// (0x000338c0) popup_note_window_cp01

0xce30,	// (0x0003ccad) calenote_swipe_1_pane_ParamLimits

0xce30,	// (0x0003ccad) calenote_swipe_1_pane

0xcc12,	// (0x0003ca8f) calenote_swipe_2_pane_ParamLimits

0xcc12,	// (0x0003ca8f) calenote_swipe_2_pane

0x360a,	// (0x00033487) calenote_swipe_1_pane_g1_ParamLimits

0x360a,	// (0x00033487) calenote_swipe_1_pane_g1

0x3617,	// (0x00033494) calenote_swipe_1_pane_g2_ParamLimits

0x3617,	// (0x00033494) calenote_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x0003fb63) calenote_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x0003fb63) calenote_swipe_1_pane_g

0x3a55,	// (0x000338d2) calenote_swipe_1_pane_t1_ParamLimits

0x3a55,	// (0x000338d2) calenote_swipe_1_pane_t1

0x360a,	// (0x00033487) calenote_swipe_2_pane_g1_ParamLimits

0x360a,	// (0x00033487) calenote_swipe_2_pane_g1

0x3a74,	// (0x000338f1) calenote_swipe_2_pane_g2_ParamLimits

0x3a74,	// (0x000338f1) calenote_swipe_2_pane_g2

0x0001,

0xfdc3,	// (0x0003fc40) calenote_swipe_2_pane_g_ParamLimits

0xfdc3,	// (0x0003fc40) calenote_swipe_2_pane_g

0x3a80,	// (0x000338fd) calenote_swipe_2_pane_t1_ParamLimits

0x3a80,	// (0x000338fd) calenote_swipe_2_pane_t1

0xd932,	// (0x0003d7af) main_mup_navstr_pane

0xa01a,	// (0x00039e97) main_mup3_pane_t7_ParamLimits

0xa01a,	// (0x00039e97) main_mup3_pane_t7

0xaa21,	// (0x0003a89e) main_mp4_pane_g6_ParamLimits

0xaa21,	// (0x0003a89e) main_mp4_pane_g6

0xad95,	// (0x0003ac12) main_image3_pane_t4_ParamLimits

0xad95,	// (0x0003ac12) main_image3_pane_t4

0xce43,	// (0x0003ccc0) popup_navstr_preview_pane_ParamLimits

0xce43,	// (0x0003ccc0) popup_navstr_preview_pane

0xce4f,	// (0x0003cccc) scroll_navstr_pane_ParamLimits

0xce4f,	// (0x0003cccc) scroll_navstr_pane

0xd932,	// (0x0003d7af) bg_popup_preview_window_pane_cp04

0x3aa7,	// (0x00033924) popup_navstr_preview_pane_t1

0xce5b,	// (0x0003ccd8) scroll_navstr_pane_g1_ParamLimits

0xce5b,	// (0x0003ccd8) scroll_navstr_pane_g1

0xce68,	// (0x0003cce5) scroll_navstr_pane_t1_ParamLimits

0xce68,	// (0x0003cce5) scroll_navstr_pane_t1

0x3a4c,	// (0x000338c9) bg_button_pane_cp014

0x3a4c,	// (0x000338c9) bg_button_pane_cp030

0x590a,	// (0x00035787) list_double_fisheye_pane_g4_ParamLimits

0x590a,	// (0x00035787) list_double_fisheye_pane_g4

0x5916,	// (0x00035793) list_double_fisheye_pane_g5_ParamLimits

0x5916,	// (0x00035793) list_double_fisheye_pane_g5

0x39b7,	// (0x00033834) sp_fs_scroll_pane_cp03

0xf0ef,	// (0x0003ef6c) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x3745,	// (0x000335c2) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd03,	// (0x0003fb80) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x3751,	// (0x000335ce) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xcd5a,	// (0x0003cbd7) sp_fs_scroll_pane_cp02

0xe22b,	// (0x0003e0a8) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe22b,	// (0x0003e0a8) popup_sp_fs_calendar_preview_list_single_pane

0xd932,	// (0x0003d7af) main_cam6_pano_pane

0xf0be,	// (0x0003ef3b) main_mup3_pane_ParamLimits

0xd932,	// (0x0003d7af) main_phacti_pane

0xc78c,	// (0x0003c609) bg_button_pane_cp11

0xc7a4,	// (0x0003c621) main_mobtv_info_pane_g2_ParamLimits

0xc7a4,	// (0x0003c621) main_mobtv_info_pane_g2

0x0001,

0xfc63,	// (0x0003fae0) main_mobtv_info_pane_g_ParamLimits

0xfc63,	// (0x0003fae0) main_mobtv_info_pane_g

0xc956,	// (0x0003c7d3) sc_clock_pane_t5_ParamLimits

0xc956,	// (0x0003c7d3) sc_clock_pane_t5

0xc9f8,	// (0x0003c875) main_radioblah_pane_g1_ParamLimits

0x3510,	// (0x0003338d) main_radioblah_pane_t3_ParamLimits

0x3510,	// (0x0003338d) main_radioblah_pane_t3

0x3528,	// (0x000333a5) main_radioblah_pane_t4_ParamLimits

0x3528,	// (0x000333a5) main_radioblah_pane_t4

0xca16,	// (0x0003c893) main_radioblah_text_pane_ParamLimits

0xca16,	// (0x0003c893) main_radioblah_text_pane

0xca23,	// (0x0003c8a0) main_radioblah_info_pane_g1_ParamLimits

0xcab8,	// (0x0003c935) main_radioblah_info_pane_t4_ParamLimits

0xcab8,	// (0x0003c935) main_radioblah_info_pane_t4

0xf0be,	// (0x0003ef3b) main_sp_fs_calendar_pane

0xce7a,	// (0x0003ccf7) main_phacti_pane_g1

0xce82,	// (0x0003ccff) phacti_note_pane_ParamLimits

0xce82,	// (0x0003ccff) phacti_note_pane

0x3abe,	// (0x0003393b) phacti_term_pane_ParamLimits

0x3abe,	// (0x0003393b) phacti_term_pane

0x3ad3,	// (0x00033950) phacti_note_pane_t1_ParamLimits

0x3ad3,	// (0x00033950) phacti_note_pane_t1

0x5f3c,	// (0x00035db9) phacti_term_pane_g1

0x5f44,	// (0x00035dc1) phacti_term_pane_t1_ParamLimits

0x5f44,	// (0x00035dc1) phacti_term_pane_t1

0x3b1c,	// (0x00033999) popup_sp_fs_calendar_preview_list_single_pane_g1

0x3b24,	// (0x000339a1) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdcd,	// (0x0003fc4a) popup_sp_fs_calendar_preview_list_single_pane_g

0x3b2c,	// (0x000339a9) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x3b2c,	// (0x000339a9) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3b42,	// (0x000339bf) aid_popup_sp_fs_bg_corner_pane

0x15b3,	// (0x00031430) popup_sp_fs_calendar_preview_bg_pane_g1

0xd932,	// (0x0003d7af) popup_sp_fs_calendar_preview_bg_pane

0x3b4a,	// (0x000339c7) popup_sp_fs_calendar_preview_list_pane

0xf0be,	// (0x0003ef3b) bg_main_sp_fs_cale_pane_ParamLimits

0xf0be,	// (0x0003ef3b) bg_main_sp_fs_cale_pane

0x5f6e,	// (0x00035deb) listscroll_cale_mrui_pane_ParamLimits

0x5f6e,	// (0x00035deb) listscroll_cale_mrui_pane

0x5f82,	// (0x00035dff) listscroll_sp_fs_schedule_track_pane

0x5f8b,	// (0x00035e08) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x5f8b,	// (0x00035e08) main_sp_fs_ctrlbar_pane_cp01

0x3b89,	// (0x00033a06) main_sp_fs_ribbon_pane

0x3b91,	// (0x00033a0e) popup_sp_fs_cale_preview_window

0xcec5,	// (0x0003cd42) list_single_sp_fs_schedule_track_pane_ParamLimits

0xcec5,	// (0x0003cd42) list_single_sp_fs_schedule_track_pane

0x64ed,	// (0x0003636a) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x64ed,	// (0x0003636a) bg_sp_fs_highlight_list_pane_cp03

0xcee7,	// (0x0003cd64) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xcee7,	// (0x0003cd64) list_single_sp_fs_schedule_track_pane_g1

0xcef3,	// (0x0003cd70) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xcef3,	// (0x0003cd70) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdd2,	// (0x0003fc4f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdd2,	// (0x0003fc4f) list_single_sp_fs_schedule_track_pane_g

0xceff,	// (0x0003cd7c) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xceff,	// (0x0003cd7c) list_single_sp_fs_schedule_track_pane_t1

0xcf17,	// (0x0003cd94) sp_fs_schedule_track_pane_ParamLimits

0xcf17,	// (0x0003cd94) sp_fs_schedule_track_pane

0x3ba3,	// (0x00033a20) sp_fs_schedule_track_pane_g1

0x3bab,	// (0x00033a28) sp_fs_schedule_track_pane_g2

0x3bb3,	// (0x00033a30) sp_fs_schedule_track_pane_g3

0x3bbb,	// (0x00033a38) sp_fs_schedule_track_pane_g4

0x3bc3,	// (0x00033a40) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd7,	// (0x0003fc54) sp_fs_schedule_track_pane_g

0x2385,	// (0x00032202) bg_sp_fs_schedule_viewer_highlight_g1

0xe52d,	// (0x0003e3aa) bg_sp_fs_schedule_viewer_highlight_g2

0x238d,	// (0x0003220a) bg_sp_fs_schedule_viewer_highlight_g3

0x2395,	// (0x00032212) bg_sp_fs_schedule_viewer_highlight_g4

0x2606,	// (0x00032483) bg_sp_fs_schedule_viewer_highlight_g5

0x23a5,	// (0x00032222) bg_sp_fs_schedule_viewer_highlight_g6

0x23ad,	// (0x0003222a) bg_sp_fs_schedule_viewer_highlight_g7

0x23b5,	// (0x00032232) bg_sp_fs_schedule_viewer_highlight_g8

0xe50d,	// (0x0003e38a) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfde2,	// (0x0003fc5f) bg_sp_fs_schedule_viewer_highlight_g

0xd932,	// (0x0003d7af) bg_main_sp_fs_ribbon_pane

0xcf27,	// (0x0003cda4) main_sp_fs_ribbon_pane_g1

0x3bcb,	// (0x00033a48) main_sp_fs_ribbon_pane_t1

0xcf30,	// (0x0003cdad) main_sp_fs_ribbon_pane_t2

0x3bda,	// (0x00033a57) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf5,	// (0x0003fc72) main_sp_fs_ribbon_pane_t

0x3be9,	// (0x00033a66) main_sp_fs_ribbon_scheduler_pane

0x3bf1,	// (0x00033a6e) bg_main_sp_fs_ribbon_pane_g1

0x3bfa,	// (0x00033a77) bg_main_sp_fs_ribbon_pane_g2

0x3c03,	// (0x00033a80) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdfc,	// (0x0003fc79) bg_main_sp_fs_ribbon_pane_g

0x3c0b,	// (0x00033a88) main_sp_fs_ribbon_scheduler_pane_g1

0x3c14,	// (0x00033a91) main_sp_fs_ribbon_scheduler_pane_g2

0x3c1d,	// (0x00033a9a) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe03,	// (0x0003fc80) main_sp_fs_ribbon_scheduler_pane_g

0x3c26,	// (0x00033aa3) list_cale_mrui_pane

0xcf3f,	// (0x0003cdbc) sp_fs_scroll_pane_cp07_ParamLimits

0xcf3f,	// (0x0003cdbc) sp_fs_scroll_pane_cp07

0xcf55,	// (0x0003cdd2) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xcf55,	// (0x0003cdd2) bg_sp_fs_schedule_viewer_highlight

0x3c2f,	// (0x00033aac) list_single_sp_fs_schedule_track_pane_cp01

0x3c37,	// (0x00033ab4) list_sp_fs_schedule_track_pane

0x3c3f,	// (0x00033abc) sp_fs_scroll_pane_cp06_ParamLimits

0x3c3f,	// (0x00033abc) sp_fs_scroll_pane_cp06

0x15b3,	// (0x00031430) bgmain_sp_fs_calendar_pane_g1

0x5f9c,	// (0x00035e19) list_single_cale_mrui_pane_ParamLimits

0x5f9c,	// (0x00035e19) list_single_cale_mrui_pane

0x5fcb,	// (0x00035e48) list_single_cale_mrui_row_pane_ParamLimits

0x5fcb,	// (0x00035e48) list_single_cale_mrui_row_pane

0x5fd8,	// (0x00035e55) list_single_cale_mrui_row_pane_g1_ParamLimits

0x5fd8,	// (0x00035e55) list_single_cale_mrui_row_pane_g1

0x6010,	// (0x00035e8d) list_single_cale_mrui_row_pane_t1_ParamLimits

0x6010,	// (0x00035e8d) list_single_cale_mrui_row_pane_t1

0x6022,	// (0x00035e9f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x6022,	// (0x00035e9f) list_single_cale_mrui_row_pane_t2

0x6088,	// (0x00035f05) list_single_cale_mrui_row_pane_t3_ParamLimits

0x6088,	// (0x00035f05) list_single_cale_mrui_row_pane_t3

0x60b7,	// (0x00035f34) list_single_cale_mrui_row_pane_t4_ParamLimits

0x60b7,	// (0x00035f34) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0f,	// (0x0003fc8c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0f,	// (0x0003fc8c) list_single_cale_mrui_row_pane_t

0x60e6,	// (0x00035f63) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x60e6,	// (0x00035f63) list_single_cmail_header_editor_pane_bg_cp01

0x6108,	// (0x00035f85) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x6108,	// (0x00035f85) list_single_cmail_header_editor_pane_bg_cp02

0xcf62,	// (0x0003cddf) main_radioblah_text_pane_t1_ParamLimits

0xcf62,	// (0x0003cddf) main_radioblah_text_pane_t1

0x3d06,	// (0x00033b83) cam6_indi_pane_cp01

0x3d0e,	// (0x00033b8b) cam6_mode_pane_cp01

0x3d16,	// (0x00033b93) cam6_pano_pane

0x3d1f,	// (0x00033b9c) cam6_zoom_pane_cp01

0x3d27,	// (0x00033ba4) cam6_pano_image_pane

0x3d32,	// (0x00033baf) cam6_pano_pane_g1

0x3288,	// (0x00033105) cam6_pano_pane_g2

0x3d3b,	// (0x00033bb8) cam6_pano_pane_g3

0x3d44,	// (0x00033bc1) cam6_pano_pane_g4

0x1b71,	// (0x000319ee) cam6_pano_pane_g5

0x3d4d,	// (0x00033bca) cam6_pano_pane_g6

0x3d57,	// (0x00033bd4) cam6_pano_pane_g7

0x3d5f,	// (0x00033bdc) cam6_pano_pane_g8

0x3d68,	// (0x00033be5) cam6_pano_pane_g9

0x0008,

0xfe18,	// (0x0003fc95) cam6_pano_pane_g

0xd932,	// (0x0003d7af) main_browser_tag_pane

0x3a9f,	// (0x0003391c) grid_navstr_albumart_pane

0x3d73,	// (0x00033bf0) cell_navstr_albumart_pane_ParamLimits

0x3d73,	// (0x00033bf0) cell_navstr_albumart_pane

0xed06,	// (0x0003eb83) cell_navstr_albumart_pane_g1

0x0ec8,	// (0x00030d45) cell_navstr_albumart_pane_g2

0x0ed8,	// (0x00030d55) cell_navstr_albumart_pane_g3

0x0ed0,	// (0x00030d4d) cell_navstr_albumart_pane_g4

0x0003,

0xfe2b,	// (0x0003fca8) cell_navstr_albumart_pane_g

0xcf7f,	// (0x0003cdfc) bt_list_pane_ParamLimits

0xcf7f,	// (0x0003cdfc) bt_list_pane

0xcfa6,	// (0x0003ce23) bt_list_pane_t1

0xcfb5,	// (0x0003ce32) bt_list_pane_t2

0x0001,

0xfe34,	// (0x0003fcb1) bt_list_pane_t

0xd932,	// (0x0003d7af) main_cale_prevew_pane

0xcfc4,	// (0x0003ce41) popup_cale_preview_window_ParamLimits

0xcfc4,	// (0x0003ce41) popup_cale_preview_window

0xf0be,	// (0x0003ef3b) bg_popup_preview_window_pane_cp05_ParamLimits

0xf0be,	// (0x0003ef3b) bg_popup_preview_window_pane_cp05

0x3d95,	// (0x00033c12) list_cale_preview_pane_ParamLimits

0x3d95,	// (0x00033c12) list_cale_preview_pane

0xcfdb,	// (0x0003ce58) list_double_cale_preview_pane_ParamLimits

0xcfdb,	// (0x0003ce58) list_double_cale_preview_pane

0xcfed,	// (0x0003ce6a) list_single_cale_preview_pane_ParamLimits

0xcfed,	// (0x0003ce6a) list_single_cale_preview_pane

0xd001,	// (0x0003ce7e) list_single_cale_preview_pane_g1

0xd009,	// (0x0003ce86) list_single_cale_preview_pane_t1_ParamLimits

0xd009,	// (0x0003ce86) list_single_cale_preview_pane_t1

0xd01e,	// (0x0003ce9b) list_double_cale_preview_pane_g1

0xd026,	// (0x0003cea3) list_double_cale_preview_pane_t1_ParamLimits

0xd026,	// (0x0003cea3) list_double_cale_preview_pane_t1

0xd03b,	// (0x0003ceb8) list_double_cale_preview_pane_t2_ParamLimits

0xd03b,	// (0x0003ceb8) list_double_cale_preview_pane_t2

0x0001,

0xfe39,	// (0x0003fcb6) list_double_cale_preview_pane_t_ParamLimits

0xfe39,	// (0x0003fcb6) list_double_cale_preview_pane_t

0xd932,	// (0x0003d7af) main_ezdial_pane

0xf0be,	// (0x0003ef3b) main_sp_fs_email_pane_ParamLimits

0xcc2a,	// (0x0003caa7) cmail_ddmenu_btn01_pane_ParamLimits

0xcc2a,	// (0x0003caa7) cmail_ddmenu_btn01_pane

0xcc47,	// (0x0003cac4) cmail_ddmenu_btn02_pane_ParamLimits

0xcc47,	// (0x0003cac4) cmail_ddmenu_btn02_pane

0xcc65,	// (0x0003cae2) cmail_ddmenu_btn03_pane_ParamLimits

0xcc65,	// (0x0003cae2) cmail_ddmenu_btn03_pane

0x59ca,	// (0x00035847) main_sp_fs_ctrlbar_pane_ParamLimits

0x59e6,	// (0x00035863) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcd64,	// (0x0003cbe1) list_cmail_body_pane_ParamLimits

0x39c6,	// (0x00033843) bg_button_pane_cp12

0x39db,	// (0x00033858) list_single_cmail_header_detail_pane_g3_ParamLimits

0x39db,	// (0x00033858) list_single_cmail_header_detail_pane_g3

0x5f04,	// (0x00035d81) list_single_cmail_header_detail_pane_t2_ParamLimits

0x5f04,	// (0x00035d81) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdbe,	// (0x0003fc3b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdbe,	// (0x0003fc3b) list_single_cmail_header_detail_pane_t

0x5f59,	// (0x00035dd6) phacti_term_pane_t2_ParamLimits

0x5f59,	// (0x00035dd6) phacti_term_pane_t2

0x0001,

0xfdc8,	// (0x0003fc45) phacti_term_pane_t_ParamLimits

0xfdc8,	// (0x0003fc45) phacti_term_pane_t

0x3da1,	// (0x00033c1e) aid_size_list_single_double

0xd053,	// (0x0003ced0) popup_ezdial_listscroll_window

0xd074,	// (0x0003cef1) popup_number_entry_window_cp01

0xeba5,	// (0x0003ea22) bg_popup_call_pane_cp09

0x3dad,	// (0x00033c2a) ezdial_list_pane

0x3db5,	// (0x00033c32) scroll_pane_cp23

0x1396,	// (0x00031213) bg_button_pane_cp028_ParamLimits

0x1396,	// (0x00031213) bg_button_pane_cp028

0xd082,	// (0x0003ceff) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd082,	// (0x0003ceff) cmail_ddmenu_btn01_pane_g1

0xd094,	// (0x0003cf11) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd094,	// (0x0003cf11) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3e,	// (0x0003fcbb) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3e,	// (0x0003fcbb) cmail_ddmenu_btn01_pane_g

0x3dbd,	// (0x00033c3a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3dbd,	// (0x00033c3a) cmail_ddmenu_btn01_pane_t1

0x10ab,	// (0x00030f28) bg_button_pane_cp029_ParamLimits

0x10ab,	// (0x00030f28) bg_button_pane_cp029

0xd094,	// (0x0003cf11) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd094,	// (0x0003cf11) cmail_ddmenu_btn02_pane_g1

0xd0ac,	// (0x0003cf29) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd0ac,	// (0x0003cf29) cmail_ddmenu_btn02_pane_t1

0x64ed,	// (0x0003636a) bg_button_pane_cp031_ParamLimits

0x64ed,	// (0x0003636a) bg_button_pane_cp031

0xd094,	// (0x0003cf11) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd094,	// (0x0003cf11) cmail_ddmenu_btn03_pane_g1

0xd0ac,	// (0x0003cf29) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd0ac,	// (0x0003cf29) cmail_ddmenu_btn03_pane_t1

0xac40,	// (0x0003aabd) cell_dialer2_keypad_pane_t1_ParamLimits

0xac5a,	// (0x0003aad7) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xac5a,	// (0x0003aad7) cell_dialer2_keypad_pane_t1_copy1

0xc64e,	// (0x0003c4cb) ncimui_group_button_pane

0xf0be,	// (0x0003ef3b) main_sp_fs_calendar_pane_ParamLimits

0xcd88,	// (0x0003cc05) list_single_cmail_header_caption_pane_ParamLimits

0x3b52,	// (0x000339cf) aid_recal_txt_sm_pane

0xd932,	// (0x0003d7af) mian_recal_day_pane

0x3b91,	// (0x00033a0e) popup_sp_fs_cale_preview_window_ParamLimits

0xd932,	// (0x0003d7af) list_recal_day_pane

0x3df4,	// (0x00033c71) list_single_recal_day_pane_ParamLimits

0x3df4,	// (0x00033c71) list_single_recal_day_pane

0x3e06,	// (0x00033c83) list_single_recal_day_pane_g1_ParamLimits

0x3e06,	// (0x00033c83) list_single_recal_day_pane_g1

0x3e12,	// (0x00033c8f) list_single_recal_day_pane_g2_ParamLimits

0x3e12,	// (0x00033c8f) list_single_recal_day_pane_g2

0x3e21,	// (0x00033c9e) list_single_recal_day_pane_g3_ParamLimits

0x3e21,	// (0x00033c9e) list_single_recal_day_pane_g3

0xd0d0,	// (0x0003cf4d) list_single_recal_day_pane_g4_ParamLimits

0xd0d0,	// (0x0003cf4d) list_single_recal_day_pane_g4

0x3e2d,	// (0x00033caa) list_single_recal_day_pane_g5_ParamLimits

0x3e2d,	// (0x00033caa) list_single_recal_day_pane_g5

0x3e3c,	// (0x00033cb9) list_single_recal_day_pane_g6_ParamLimits

0x3e3c,	// (0x00033cb9) list_single_recal_day_pane_g6

0x0005,

0xfe4d,	// (0x0003fcca) list_single_recal_day_pane_g_ParamLimits

0xfe4d,	// (0x0003fcca) list_single_recal_day_pane_g

0x3e48,	// (0x00033cc5) list_single_recal_day_pane_t1

0x3e56,	// (0x00033cd3) list_single_recal_day_pane_t2

0x0001,

0xfe5a,	// (0x0003fcd7) list_single_recal_day_pane_t

0xd0e3,	// (0x0003cf60) ncimui_query_button_pane_ParamLimits

0xd0e3,	// (0x0003cf60) ncimui_query_button_pane

0xd0f3,	// (0x0003cf70) ncimui_query_button_pane_t1_ParamLimits

0xd0f3,	// (0x0003cf70) ncimui_query_button_pane_t1

0x3e64,	// (0x00033ce1) ncimui_query_button_pane_t2_ParamLimits

0x3e64,	// (0x00033ce1) ncimui_query_button_pane_t2

0x0001,

0xfe5f,	// (0x0003fcdc) ncimui_query_button_pane_t_ParamLimits

0xfe5f,	// (0x0003fcdc) ncimui_query_button_pane_t

0xd106,	// (0x0003cf83) query_button_pane_ParamLimits

0xd106,	// (0x0003cf83) query_button_pane

0xd932,	// (0x0003d7af) bg_button_pane_cp0028

0x3e77,	// (0x00033cf4) query_button_pane_t1

0x908f,	// (0x00038f0c) main_tport_pane_ParamLimits

0xcc93,	// (0x0003cb10) bg_popup_window_pane_cp01_ParamLimits

0xcc93,	// (0x0003cb10) bg_popup_window_pane_cp01

0xcca0,	// (0x0003cb1d) heading_pane_cp08_ParamLimits

0xcca0,	// (0x0003cb1d) heading_pane_cp08

0xccae,	// (0x0003cb2b) heading_pane_cp07_ParamLimits

0xccae,	// (0x0003cb2b) heading_pane_cp07

0x3989,	// (0x00033806) cell_tport_appsw_pane_g2

0x0002,

0xfdab,	// (0x0003fc28) cell_tport_appsw_pane_g

0x534f,	// (0x000351cc) input_candi_list_open_g1

0xe6c8,	// (0x0003e545) list_cale_time_pane_g6_ParamLimits

0xe6c8,	// (0x0003e545) list_cale_time_pane_g6

0x9ad5,	// (0x00039952) aid_size_touch_calib_1_ParamLimits

0x9ad5,	// (0x00039952) aid_size_touch_calib_1

0x9ae1,	// (0x0003995e) aid_size_touch_calib_2_ParamLimits

0x9ae1,	// (0x0003995e) aid_size_touch_calib_2

0x9aef,	// (0x0003996c) aid_size_touch_calib_3_ParamLimits

0x9aef,	// (0x0003996c) aid_size_touch_calib_3

0x9aff,	// (0x0003997c) aid_size_touch_calib_4_ParamLimits

0x9aff,	// (0x0003997c) aid_size_touch_calib_4

0x9b0d,	// (0x0003998a) main_touch_calib_button_group_pane_ParamLimits

0x9b0d,	// (0x0003998a) main_touch_calib_button_group_pane

0x9b1b,	// (0x00039998) main_touch_calib_pane_g1_ParamLimits

0x9b27,	// (0x000399a4) main_touch_calib_pane_g2_ParamLimits

0x9b33,	// (0x000399b0) main_touch_calib_pane_g3_ParamLimits

0x9b3f,	// (0x000399bc) main_touch_calib_pane_g4_ParamLimits

0xf784,	// (0x0003f601) main_touch_calib_pane_g_ParamLimits

0x9b4b,	// (0x000399c8) main_touch_calib_pane_t1_ParamLimits

0x9b62,	// (0x000399df) main_touch_calib_pane_t2_ParamLimits

0x9b79,	// (0x000399f6) main_touch_calib_pane_t3_ParamLimits

0x9b8d,	// (0x00039a0a) main_touch_calib_pane_t4_ParamLimits

0x9ba1,	// (0x00039a1e) main_touch_calib_pane_t5_ParamLimits

0xf78d,	// (0x0003f60a) main_touch_calib_pane_t_ParamLimits

0x1958,	// (0x000317d5) list_single_fp_cale_pane_g3_ParamLimits

0x1958,	// (0x000317d5) list_single_fp_cale_pane_g3

0xf0be,	// (0x0003ef3b) bg_button_pane_cp012_ParamLimits

0xf0be,	// (0x0003ef3b) bg_vkb2_func_pane_cp03_ParamLimits

0xb9df,	// (0x0003b85c) cell_vitu2_function_top_pane_g1_ParamLimits

0xf0be,	// (0x0003ef3b) bg_vkb2_func_pane_cp04_ParamLimits

0xc5ff,	// (0x0003c47c) main_ncimui_button_group_pane_ParamLimits

0xc5ff,	// (0x0003c47c) main_ncimui_button_group_pane

0xc63c,	// (0x0003c4b9) main_ncimui_pane_t3_ParamLimits

0xc63c,	// (0x0003c4b9) main_ncimui_pane_t3

0x3ab5,	// (0x00033932) phacti_button_group_pane

0x3da1,	// (0x00033c1e) aid_size_list_single_double_ParamLimits

0xd053,	// (0x0003ced0) popup_ezdial_listscroll_window_ParamLimits

0xd074,	// (0x0003cef1) popup_number_entry_window_cp01_ParamLimits

0xd113,	// (0x0003cf90) phacti_button_pane_ParamLimits

0xd113,	// (0x0003cf90) phacti_button_pane

0xd932,	// (0x0003d7af) bg_button_pane_cp14

0x3e85,	// (0x00033d02) phacti_button_pane_t1

0xd124,	// (0x0003cfa1) main_touch_calib_button_pane_ParamLimits

0xd124,	// (0x0003cfa1) main_touch_calib_button_pane

0xe115,	// (0x0003df92) bg_button_pane_cp18_ParamLimits

0xe115,	// (0x0003df92) bg_button_pane_cp18

0x3e93,	// (0x00033d10) main_touch_calib_button_pane_t1_ParamLimits

0x3e93,	// (0x00033d10) main_touch_calib_button_pane_t1

0x3ea9,	// (0x00033d26) main_touch_calib_button_pane_t2_ParamLimits

0x3ea9,	// (0x00033d26) main_touch_calib_button_pane_t2

0x0001,

0xfe64,	// (0x0003fce1) main_touch_calib_button_pane_t_ParamLimits

0xfe64,	// (0x0003fce1) main_touch_calib_button_pane_t

0xd932,	// (0x0003d7af) cell_ncimui_button_pane

0xd932,	// (0x0003d7af) bg_button_pane_cp032

0x3ec7,	// (0x00033d44) cell_ncimui_button_pane_t1

0xacb6,	// (0x0003ab33) image3_infobar_pane_ParamLimits

0xacb6,	// (0x0003ab33) image3_infobar_pane

0xc978,	// (0x0003c7f5) fs_bigclock_status_pane_ParamLimits

0xc978,	// (0x0003c7f5) fs_bigclock_status_pane

0xc985,	// (0x0003c802) main_fs_bigclock_clock_pane_ParamLimits

0xc985,	// (0x0003c802) main_fs_bigclock_clock_pane

0xc999,	// (0x0003c816) main_fs_bigclock_indi_pane_ParamLimits

0xc999,	// (0x0003c816) main_fs_bigclock_indi_pane

0xc9c6,	// (0x0003c843) main_fs_bigclock_swipe_pane_ParamLimits

0xc9c6,	// (0x0003c843) main_fs_bigclock_swipe_pane

0xd932,	// (0x0003d7af) main_fs_clock_dumped_data

0x3395,	// (0x00033212) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x3395,	// (0x00033212) list_single_fs_bigclock_indicator_pane_g1

0x33b3,	// (0x00033230) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x33b3,	// (0x00033230) list_single_fs_bigclock_indicator_pane_g2

0x33cd,	// (0x0003324a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x33cd,	// (0x0003324a) list_single_fs_bigclock_indicator_pane_g3

0x33e7,	// (0x00033264) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x33e7,	// (0x00033264) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc97,	// (0x0003fb14) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc97,	// (0x0003fb14) list_single_fs_bigclock_indicator_pane_g

0x340d,	// (0x0003328a) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x340d,	// (0x0003328a) list_single_fs_bigclock_indicator_pane_t1

0x3435,	// (0x000332b2) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x3435,	// (0x000332b2) list_single_fs_bigclock_indicator_pane_t2

0x345d,	// (0x000332da) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x345d,	// (0x000332da) list_single_fs_bigclock_indicator_pane_t3

0x3485,	// (0x00033302) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x3485,	// (0x00033302) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfca2,	// (0x0003fb1f) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfca2,	// (0x0003fb1f) list_single_fs_bigclock_indicator_pane_t

0x3ed5,	// (0x00033d52) image3_infobar_fav_pane_ParamLimits

0x3ed5,	// (0x00033d52) image3_infobar_fav_pane

0x3ee5,	// (0x00033d62) image3_infobar_loc_pane_ParamLimits

0x3ee5,	// (0x00033d62) image3_infobar_loc_pane

0x3ef9,	// (0x00033d76) image3_infobar_time_pane_ParamLimits

0x3ef9,	// (0x00033d76) image3_infobar_time_pane

0x15b3,	// (0x00031430) image3_infobar_time_pane_g1

0x3f09,	// (0x00033d86) image3_infobar_time_pane_t1

0x15b3,	// (0x00031430) image3_infobar_loc_pane_g1

0x3f17,	// (0x00033d94) image3_infobar_loc_pane_g2

0x0001,

0xfe69,	// (0x0003fce6) image3_infobar_loc_pane_g

0x3f1f,	// (0x00033d9c) image3_infobar_loc_pane_t1

0x15b3,	// (0x00031430) image3_infobar_fav_pane_g1

0x3f2d,	// (0x00033daa) image3_infobar_fav_pane_g2

0x0001,

0xfe6e,	// (0x0003fceb) image3_infobar_fav_pane_g

0x3f35,	// (0x00033db2) fs_bigclock_status_battery_pane

0x3f3e,	// (0x00033dbb) fs_bigclock_status_signal_pane

0x3f47,	// (0x00033dc4) fs_bigclock_status_title_pane

0x3f50,	// (0x00033dcd) fs_bigclock_status_signal_pane_g1

0x3f59,	// (0x00033dd6) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe73,	// (0x0003fcf0) fs_bigclock_status_signal_pane_g

0x3f61,	// (0x00033dde) fs_bigclock_status_battery_pane_g1

0x3f6a,	// (0x00033de7) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe78,	// (0x0003fcf5) fs_bigclock_status_battery_pane_g

0x3f72,	// (0x00033def) fs_bigclock_status_title_pane_t1

0x15b3,	// (0x00031430) main_fs_bigclock_clock_pane_g1

0x3f80,	// (0x00033dfd) main_fs_bigclock_clock_pane_g2

0x3f80,	// (0x00033dfd) main_fs_bigclock_clock_pane_g3

0x3f80,	// (0x00033dfd) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe7d,	// (0x0003fcfa) main_fs_bigclock_clock_pane_g

0x3f88,	// (0x00033e05) main_fs_bigclock_clock_pane_t1

0x3f96,	// (0x00033e13) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe86,	// (0x0003fd03) main_fs_bigclock_clock_pane_t

0x3fa5,	// (0x00033e22) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3fa5,	// (0x00033e22) list_single_fs_bigclock_indicator_pane

0xd134,	// (0x0003cfb1) list_single_fs_bigclock_pane_ParamLimits

0xd134,	// (0x0003cfb1) list_single_fs_bigclock_pane

0x3fbf,	// (0x00033e3c) main_fs_bigclock_indicator_pane_t1

0x3fce,	// (0x00033e4b) list_single_fs_bigclock_pane_g1

0x3fd6,	// (0x00033e53) list_single_fs_bigclock_pane_t1

0x15b3,	// (0x00031430) main_fs_bigclock_swipe_pane_g1

0x4014,	// (0x00033e91) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe97,	// (0x0003fd14) main_fs_bigclock_swipe_pane_g

0x401c,	// (0x00033e99) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x401c,	// (0x00033e99) main_fs_bigclock_swipe_pane_t1

0x804a,	// (0x00037ec7) call_type_pane_ParamLimits

0xd932,	// (0x0003d7af) main_btmg_pane

0x6004,	// (0x00035e81) list_single_cale_mrui_row_pane_g2_ParamLimits

0x6004,	// (0x00035e81) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe0a,	// (0x0003fc87) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe0a,	// (0x0003fc87) list_single_cale_mrui_row_pane_g

0x3ddb,	// (0x00033c58) list_recal_vselct_arw_lo_pane

0x3de3,	// (0x00033c60) list_recal_vselct_arw_up_pane

0x3deb,	// (0x00033c68) list_recal_vselct_pane

0x4039,	// (0x00033eb6) btmg_button_pane

0xd198,	// (0x0003d015) main_btmg_pane_g1

0xd932,	// (0x0003d7af) bg_button_pane_cp044

0x4043,	// (0x00033ec0) btmg_button_pane_t1

0x10a3,	// (0x00030f20) aid_listscroll_gen

0xf0be,	// (0x0003ef3b) main_cntbar_detail_pane

0x39a7,	// (0x00033824) list_cmail_folder_pane

0x39b7,	// (0x00033834) sp_fs_scroll_pane_cp03_ParamLimits

0x6124,	// (0x00035fa1) list_single_fs_dyc_pane_cp01_ParamLimits

0x6124,	// (0x00035fa1) list_single_fs_dyc_pane_cp01

0x4051,	// (0x00033ece) aid_size_cmail_indent

0x6155,	// (0x00035fd2) list_single_dyc_row_pane_cp01

0xd1c0,	// (0x0003d03d) cntbar_detail_list_pane_ParamLimits

0xd1c0,	// (0x0003d03d) cntbar_detail_list_pane

0xd1fa,	// (0x0003d077) main_cntbar_detail_cont_pane_ParamLimits

0xd1fa,	// (0x0003d077) main_cntbar_detail_cont_pane

0x803e,	// (0x00037ebb) scroll_pane_cp032_ParamLimits

0x803e,	// (0x00037ebb) scroll_pane_cp032

0xd206,	// (0x0003d083) cntbar_detail_list_event_pane_ParamLimits

0xd206,	// (0x0003d083) cntbar_detail_list_event_pane

0xd1cc,	// (0x0003d049) cntbar_detail_list_shct_pane

0xe57b,	// (0x0003e3f8) aid_list_gen

0x4063,	// (0x00033ee0) aid_scroll

0x406c,	// (0x00033ee9) aid_size_touch_scroll_bar

0x2a04,	// (0x00032881) aid_list_double

0x4075,	// (0x00033ef2) aid_list_single

0x615e,	// (0x00035fdb) aid_list_single_lg

0x6167,	// (0x00035fe4) aid_list_z_g_a_sm

0x616f,	// (0x00035fec) aid_list_z_g_d

0x6177,	// (0x00035ff4) aid_txt_z_prm

0x6185,	// (0x00036002) aid_txt_z_prm_cp01

0x6193,	// (0x00036010) aid_txt_z_sec

0xd21a,	// (0x0003d097) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd21a,	// (0x0003d097) main_cntbar_detail_cont_pane_g1

0xd227,	// (0x0003d0a4) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd227,	// (0x0003d0a4) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe9c,	// (0x0003fd19) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe9c,	// (0x0003fd19) main_cntbar_detail_cont_pane_g

0x40a5,	// (0x00033f22) main_cntbar_detail_cont_pane_t1

0x40b3,	// (0x00033f30) main_cntbar_detail_cont_pane_t2

0x40c1,	// (0x00033f3e) main_cntbar_detail_cont_pane_t3

0x0002,

0xfea1,	// (0x0003fd1e) main_cntbar_detail_cont_pane_t

0xd233,	// (0x0003d0b0) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd233,	// (0x0003d0b0) cell_cntbar_detail_list_shct_pane

0x40cf,	// (0x00033f4c) cntbar_detail_list_shct_pane_g1

0x40d8,	// (0x00033f55) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea8,	// (0x0003fd25) cntbar_detail_list_shct_pane_g

0xd247,	// (0x0003d0c4) cntbar_detail_list_event_pane_g1_ParamLimits

0xd247,	// (0x0003d0c4) cntbar_detail_list_event_pane_g1

0xd253,	// (0x0003d0d0) cntbar_detail_list_event_pane_g2_ParamLimits

0xd253,	// (0x0003d0d0) cntbar_detail_list_event_pane_g2

0x0005,

0xfead,	// (0x0003fd2a) cntbar_detail_list_event_pane_g_ParamLimits

0xfead,	// (0x0003fd2a) cntbar_detail_list_event_pane_g

0xd2bf,	// (0x0003d13c) cntbar_detail_list_event_pane_t1_ParamLimits

0xd2bf,	// (0x0003d13c) cntbar_detail_list_event_pane_t1

0xd2d4,	// (0x0003d151) cntbar_detail_list_event_pane_t2_ParamLimits

0xd2d4,	// (0x0003d151) cntbar_detail_list_event_pane_t2

0x0002,

0xfeba,	// (0x0003fd37) cntbar_detail_list_event_pane_t_ParamLimits

0xfeba,	// (0x0003fd37) cntbar_detail_list_event_pane_t

0x15b3,	// (0x00031430) cell_cntbar_detail_list_shct_pane_g1

0x83c1,	// (0x0003823e) navi_pane_mv_g3

0xf0be,	// (0x0003ef3b) main_cntbar_detail_pane_ParamLimits

0xd932,	// (0x0003d7af) main_notif_wgt_pane

0xa968,	// (0x0003a7e5) aid_tch_main_mp4_pane_g4

0xab9d,	// (0x0003aa1a) popup_slider_window_cp02

0x3dd2,	// (0x00033c4f) list_recal_day_event_pane

0xd1a0,	// (0x0003d01d) cntbar_detail_btn_pane_ParamLimits

0xd1a0,	// (0x0003d01d) cntbar_detail_btn_pane

0xd1b0,	// (0x0003d02d) cntbar_detail_btn_pane_cp01_ParamLimits

0xd1b0,	// (0x0003d02d) cntbar_detail_btn_pane_cp01

0xd1cc,	// (0x0003d049) cntbar_detail_list_shct_pane_ParamLimits

0xd1d8,	// (0x0003d055) cntbar_detail_pane_g1_ParamLimits

0xd1d8,	// (0x0003d055) cntbar_detail_pane_g1

0xd1e4,	// (0x0003d061) cntbar_detail_pane_t1_ParamLimits

0xd1e4,	// (0x0003d061) cntbar_detail_pane_t1

0xd25f,	// (0x0003d0dc) cntbar_detail_list_event_pane_g3_ParamLimits

0xd25f,	// (0x0003d0dc) cntbar_detail_list_event_pane_g3

0xd277,	// (0x0003d0f4) cntbar_detail_list_event_pane_g4_ParamLimits

0xd277,	// (0x0003d0f4) cntbar_detail_list_event_pane_g4

0xd28f,	// (0x0003d10c) cntbar_detail_list_event_pane_g5_ParamLimits

0xd28f,	// (0x0003d10c) cntbar_detail_list_event_pane_g5

0xd2a7,	// (0x0003d124) cntbar_detail_list_event_pane_g6_ParamLimits

0xd2a7,	// (0x0003d124) cntbar_detail_list_event_pane_g6

0xd2e9,	// (0x0003d166) cntbar_detail_list_event_pane_t3_ParamLimits

0xd2e9,	// (0x0003d166) cntbar_detail_list_event_pane_t3

0xd2fb,	// (0x0003d178) popup_notif_wgt_window_ParamLimits

0xd2fb,	// (0x0003d178) popup_notif_wgt_window

0xd30b,	// (0x0003d188) popup_submenu_window_cp01_ParamLimits

0xd30b,	// (0x0003d188) popup_submenu_window_cp01

0xeba5,	// (0x0003ea22) bg_popup_window_pane_cp10

0x40e1,	// (0x00033f5e) listscroll_notif_wgt_pane

0x40eb,	// (0x00033f68) list_notif_wgt_window

0x40f4,	// (0x00033f71) scroll_pane_cp033

0x40fd,	// (0x00033f7a) list_notif_wgt_row_pane_ParamLimits

0x40fd,	// (0x00033f7a) list_notif_wgt_row_pane

0x4111,	// (0x00033f8e) aid_size_list_notif_wgt_del

0x411a,	// (0x00033f97) list_notif_wgt_row_pane_g1

0x4122,	// (0x00033f9f) list_notif_wgt_row_pane_g2

0x412a,	// (0x00033fa7) list_notif_wgt_row_pane_g3

0x0002,

0xfec1,	// (0x0003fd3e) list_notif_wgt_row_pane_g

0x4133,	// (0x00033fb0) list_notif_wgt_row_pane_t1

0x4141,	// (0x00033fbe) list_notif_wgt_row_pane_t2

0x414f,	// (0x00033fcc) list_notif_wgt_row_pane_t3

0x0002,

0xfec8,	// (0x0003fd45) list_notif_wgt_row_pane_t

0x2660,	// (0x000324dd) list_recal_day_event_pane_g1

0x415d,	// (0x00033fda) list_recal_day_event_pane_t1

0xd932,	// (0x0003d7af) bg_button_pane_cp045

0x416c,	// (0x00033fe9) cntbar_detail_btn_pane_t1

0x10ab,	// (0x00030f28) main_callh_pane_ParamLimits

0x10ab,	// (0x00030f28) main_callh_pane

0xd932,	// (0x0003d7af) main_coverflow0_pane

0xd932,	// (0x0003d7af) main_wgtman_pane

0xc9de,	// (0x0003c85b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc9de,	// (0x0003c85b) main_fs_bigclock_unlock_btn_pane

0x3981,	// (0x000337fe) bg_button_pane_cp16

0x3991,	// (0x0003380e) cell_tport_appsw_pane_g3

0xd319,	// (0x0003d196) cf0_flow_pane_ParamLimits

0xd319,	// (0x0003d196) cf0_flow_pane

0x417a,	// (0x00033ff7) listscroll_cf0_pane

0x4183,	// (0x00034000) main_cf0_pane_g1

0xd328,	// (0x0003d1a5) main_cf0_pane_t1_ParamLimits

0xd328,	// (0x0003d1a5) main_cf0_pane_t1

0xd33c,	// (0x0003d1b9) main_cf0_pane_t2_ParamLimits

0xd33c,	// (0x0003d1b9) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x0003fd4c) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x0003fd4c) main_cf0_pane_t

0x418d,	// (0x0003400a) scroll_pane_cp11

0xd350,	// (0x0003d1cd) cf0_flow_pane_g1

0xd358,	// (0x0003d1d5) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x0003fd51) cf0_flow_pane_g

0xd360,	// (0x0003d1dd) cf0_flow_pane_t1

0xd932,	// (0x0003d7af) main_call6_pane

0xd932,	// (0x0003d7af) main_calllock_pane

0xd36e,	// (0x0003d1eb) call6_btn_grp_pane_ParamLimits

0xd36e,	// (0x0003d1eb) call6_btn_grp_pane

0xd37d,	// (0x0003d1fa) call6_pane_g1_ParamLimits

0xd37d,	// (0x0003d1fa) call6_pane_g1

0xd38c,	// (0x0003d209) popup_call6_1st_window_ParamLimits

0xd38c,	// (0x0003d209) popup_call6_1st_window

0xd39a,	// (0x0003d217) popup_call6_2nd_window_ParamLimits

0xd39a,	// (0x0003d217) popup_call6_2nd_window

0xd3a8,	// (0x0003d225) cell_call6_btn_pane_ParamLimits

0xd3a8,	// (0x0003d225) cell_call6_btn_pane

0xeba5,	// (0x0003ea22) bg_popup_call2_in_pane_cp03

0x4198,	// (0x00034015) popup_call6_1st_window_g1

0x41a0,	// (0x0003401d) popup_call6_1st_window_g2

0x41a8,	// (0x00034025) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x0003fd56) popup_call6_1st_window_g

0x41b0,	// (0x0003402d) popup_call6_1st_window_t1

0x41bf,	// (0x0003403c) popup_call6_1st_window_t2

0x41cf,	// (0x0003404c) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x0003fd5d) popup_call6_1st_window_t

0xeba5,	// (0x0003ea22) bg_popup_call2_in_pane_cp04

0x4198,	// (0x00034015) popup_call6_2nd_window_g1

0x41a0,	// (0x0003401d) popup_call6_2nd_window_g2

0x41a8,	// (0x00034025) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x0003fd56) popup_call6_2nd_window_g

0x41b0,	// (0x0003402d) popup_call6_2nd_window_t1

0xd932,	// (0x0003d7af) bg_button_pane_cp15

0x41df,	// (0x0003405c) cell_call6_btn_pane_g1

0x41e8,	// (0x00034065) cell_call6_btn_pane_t1

0xd3b7,	// (0x0003d234) listscroll_wgtman_pane_ParamLimits

0xd3b7,	// (0x0003d234) listscroll_wgtman_pane

0xd3d5,	// (0x0003d252) wgtman_btn_pane_ParamLimits

0xd3d5,	// (0x0003d252) wgtman_btn_pane

0xea58,	// (0x0003e8d5) aid_scroll_copy1

0x41f7,	// (0x00034074) list_wgtman_pane

0xd40a,	// (0x0003d287) wgtman_btn_pane_g1_ParamLimits

0xd40a,	// (0x0003d287) wgtman_btn_pane_g1

0xd432,	// (0x0003d2af) wgtman_btn_pane_t1_ParamLimits

0xd432,	// (0x0003d2af) wgtman_btn_pane_t1

0x4201,	// (0x0003407e) wgtman_btn_pane_t2_ParamLimits

0x4201,	// (0x0003407e) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x0003fd64) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x0003fd64) wgtman_btn_pane_t

0xd469,	// (0x0003d2e6) listrow_wgtman_pane_ParamLimits

0xd469,	// (0x0003d2e6) listrow_wgtman_pane

0xd485,	// (0x0003d302) listrow_wgtman_pane_g1

0xd48e,	// (0x0003d30b) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x0003fd69) listrow_wgtman_pane_g

0x61a1,	// (0x0003601e) listrow_wgtman_pane_t1

0x61af,	// (0x0003602c) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x0003fd6e) listrow_wgtman_pane_t

0x61bd,	// (0x0003603a) wait_bar_pane_cp09

0x4218,	// (0x00034095) main_calllock_btn_pane

0x4222,	// (0x0003409f) main_calllock_pane_g1

0xd932,	// (0x0003d7af) bg_button_pane_cp17

0x422d,	// (0x000340aa) main_calllock_btn_pane_g1

0x4236,	// (0x000340b3) main_calllock_btn_pane_t1

0xd932,	// (0x0003d7af) main_dialer3_pane

0xd932,	// (0x0003d7af) main_fmrd2_pane

0x15b3,	// (0x00031430) main_fs_bigclock_unlock_btn_pane_g1

0x424d,	// (0x000340ca) main_fs_bigclock_unlock_btn_pane_t1

0xd498,	// (0x0003d315) area_fmrd2_info_pane_ParamLimits

0xd498,	// (0x0003d315) area_fmrd2_info_pane

0xd4a6,	// (0x0003d323) area_fmrd2_visual_pane_ParamLimits

0xd4a6,	// (0x0003d323) area_fmrd2_visual_pane

0xd4b4,	// (0x0003d331) fmrd2_indi_pane_ParamLimits

0xd4b4,	// (0x0003d331) fmrd2_indi_pane

0xd4c1,	// (0x0003d33e) area_fmrd2_visual_pane_g1

0xd4c9,	// (0x0003d346) area_fmrd2_visual_pane_t1

0xd4d9,	// (0x0003d356) area_fmrd2_visual_pane_t2

0xd4e9,	// (0x0003d366) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x0003fd78) area_fmrd2_visual_pane_t

0xd4f9,	// (0x0003d376) area_fmrd2_info_pane_g1

0xd501,	// (0x0003d37e) area_fmrd2_info_pane_t1

0xd511,	// (0x0003d38e) area_fmrd2_info_pane_t2

0xd521,	// (0x0003d39e) area_fmrd2_info_pane_t3

0xd531,	// (0x0003d3ae) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x0003fd7f) area_fmrd2_info_pane_t

0xd53f,	// (0x0003d3bc) fmrd2_indi_pane_t1

0xd54f,	// (0x0003d3cc) fmrd2_indi_pane_t2

0xd55f,	// (0x0003d3dc) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x0003fd88) fmrd2_indi_pane_t

0x33f6,	// (0x00033273) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x33f6,	// (0x00033273) list_single_fs_bigclock_indicator_pane_g5

0x349a,	// (0x00033317) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x349a,	// (0x00033317) list_single_fs_bigclock_indicator_pane_t5

0xce98,	// (0x0003cd15) aid_cell_bcale_month_pane_ParamLimits

0xce98,	// (0x0003cd15) aid_cell_bcale_month_pane

0xcea4,	// (0x0003cd21) bcale_month_pane_ParamLimits

0xcea4,	// (0x0003cd21) bcale_month_pane

0xceb4,	// (0x0003cd31) bcale_preview_pane_ParamLimits

0xceb4,	// (0x0003cd31) bcale_preview_pane

0x3fd6,	// (0x00033e53) list_single_fs_bigclock_pane_t1_ParamLimits

0x3ff0,	// (0x00033e6d) list_single_fs_bigclock_pane_t2_ParamLimits

0x3ff0,	// (0x00033e6d) list_single_fs_bigclock_pane_t2

0x0001,

0xfe92,	// (0x0003fd0f) list_single_fs_bigclock_pane_t_ParamLimits

0xfe92,	// (0x0003fd0f) list_single_fs_bigclock_pane_t

0x4245,	// (0x000340c2) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x0003fd73) main_fs_bigclock_unlock_btn_pane_g

0xd56f,	// (0x0003d3ec) aid_dia3_key_size_ParamLimits

0xd56f,	// (0x0003d3ec) aid_dia3_key_size

0xd57b,	// (0x0003d3f8) aid_dia3_listrow_size_ParamLimits

0xd57b,	// (0x0003d3f8) aid_dia3_listrow_size

0xd58b,	// (0x0003d408) dia3_keypad_fun_pane_ParamLimits

0xd58b,	// (0x0003d408) dia3_keypad_fun_pane

0xd59d,	// (0x0003d41a) dia3_keypad_num_pane_ParamLimits

0xd59d,	// (0x0003d41a) dia3_keypad_num_pane

0xd5af,	// (0x0003d42c) dia3_listscroll_pane_ParamLimits

0xd5af,	// (0x0003d42c) dia3_listscroll_pane

0xd5bd,	// (0x0003d43a) dia3_numentry_pane_ParamLimits

0xd5bd,	// (0x0003d43a) dia3_numentry_pane

0x425b,	// (0x000340d8) dia3_list_pane

0x4266,	// (0x000340e3) scroll_pane_cp12

0xd932,	// (0x0003d7af) bg_dia3_numentry_pane

0xd5cb,	// (0x0003d448) dia3_numentry_pane_t1

0xd5da,	// (0x0003d457) cell_dia3_key_num_pane

0xd5e2,	// (0x0003d45f) cell_dia3_key0_fun_pane_ParamLimits

0xd5e2,	// (0x0003d45f) cell_dia3_key0_fun_pane

0xd5ef,	// (0x0003d46c) cell_dia3_key1_fun_pane_ParamLimits

0xd5ef,	// (0x0003d46c) cell_dia3_key1_fun_pane

0xd5fc,	// (0x0003d479) dia3_listrow_pane

0x3114,	// (0x00032f91) bg_dia3_numentry_pane_g1

0xd932,	// (0x0003d7af) bg_button_pane_cp21

0x4271,	// (0x000340ee) cell_dia3_key_num_pane_t1

0x427f,	// (0x000340fc) cell_dia3_key_num_pane_t2

0x428e,	// (0x0003410b) cell_dia3_key_num_pane_t3

0x429d,	// (0x0003411a) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x0003fd8f) cell_dia3_key_num_pane_t

0xd932,	// (0x0003d7af) bg_button_pane_cp19

0xd609,	// (0x0003d486) cell_dia3_key0_fun_pane_g1

0xd932,	// (0x0003d7af) bg_button_pane_cp20

0xd611,	// (0x0003d48e) cell_dia3_key1_fun_pane_g1

0xd619,	// (0x0003d496) area_left_week_number_pane

0xd622,	// (0x0003d49f) area_top_day_name_pane

0xd62b,	// (0x0003d4a8) frame_month_view_pane

0xd635,	// (0x0003d4b2) grid_month_view_pane

0xd63f,	// (0x0003d4bc) cell_top_day_name_pane_ParamLimits

0xd63f,	// (0x0003d4bc) cell_top_day_name_pane

0xd659,	// (0x0003d4d6) cell_area_left_week_number_pane_ParamLimits

0xd659,	// (0x0003d4d6) cell_area_left_week_number_pane

0xd66d,	// (0x0003d4ea) cell_month_view_pane_ParamLimits

0xd66d,	// (0x0003d4ea) cell_month_view_pane

0x42ac,	// (0x00034129) frm_month_g1

0xd68a,	// (0x0003d507) frm_month_g2

0xd694,	// (0x0003d511) frm_month_g3

0xd69e,	// (0x0003d51b) frm_month_g4

0xd6a8,	// (0x0003d525) frm_month_g5

0xd6b2,	// (0x0003d52f) frm_month_g6

0xd6bc,	// (0x0003d539) frm_month_g7

0x42b5,	// (0x00034132) frm_month_g8

0xd6c6,	// (0x0003d543) frm_month_g9

0xd6cf,	// (0x0003d54c) frm_month_g10

0xd6d8,	// (0x0003d555) frm_month_g11

0xd6e1,	// (0x0003d55e) frm_month_g12

0xd6ea,	// (0x0003d567) frm_month_g13

0xd6f3,	// (0x0003d570) frm_month_g14

0xd6fc,	// (0x0003d579) frm_month_g15

0xd707,	// (0x0003d584) frm_month_g16

0x000f,

0xff1b,	// (0x0003fd98) frm_month_g

0xd712,	// (0x0003d58f) cell_top_day_name_pane_t1

0xd721,	// (0x0003d59e) cell_area_left_week_number_pane_g1

0xd712,	// (0x0003d58f) cell_area_left_week_number_pane_t1

0x15b3,	// (0x00031430) cell_month_view_pane_g1

0xd729,	// (0x0003d5a6) cell_month_view_pane_t1

0xd932,	// (0x0003d7af) main_fps_pane

0x370d,	// (0x0003358a) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x370d,	// (0x0003358a) cmail_ddmenu_btn02_pane_cp1

0x3729,	// (0x000335a6) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x3729,	// (0x000335a6) cmail_ddmenu_btn02_pane_cp2

0xd0a0,	// (0x0003cf1d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd0a0,	// (0x0003cf1d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe43,	// (0x0003fcc0) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe43,	// (0x0003fcc0) cmail_ddmenu_btn02_pane_g

0xd0be,	// (0x0003cf3b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd0be,	// (0x0003cf3b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe48,	// (0x0003fcc5) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe48,	// (0x0003fcc5) cmail_ddmenu_btn02_pane_t

0xd738,	// (0x0003d5b5) fps_text_pane_ParamLimits

0xd738,	// (0x0003d5b5) fps_text_pane

0xd745,	// (0x0003d5c2) main_fps_pane_g1_ParamLimits

0xd745,	// (0x0003d5c2) main_fps_pane_g1

0xd753,	// (0x0003d5d0) wait_bar_pane_cp010_ParamLimits

0xd753,	// (0x0003d5d0) wait_bar_pane_cp010

0xd75f,	// (0x0003d5dc) fps_text_pane_t1_ParamLimits

0xd75f,	// (0x0003d5dc) fps_text_pane_t1

0xaf75,	// (0x0003adf2) cam4_image_uncrop_pane_g1

0xaf7e,	// (0x0003adfb) cam4_image_uncrop_pane_g2

0xaf87,	// (0x0003ae04) cam4_image_uncrop_pane_g3

0x42be,	// (0x0003413b) cam4_image_uncrop_pane_g4

0x0003,

0xf91c,	// (0x0003f799) cam4_image_uncrop_pane_g

0xd5fc,	// (0x0003d479) dia3_listrow_pane_ParamLimits

0xd932,	// (0x0003d7af) main_phob2_pane

0xccf5,	// (0x0003cb72) cell_tport_appsw_pane_cp02_ParamLimits

0xccf5,	// (0x0003cb72) cell_tport_appsw_pane_cp02

0xcd04,	// (0x0003cb81) cell_tport_appsw_pane_cp03_ParamLimits

0xcd04,	// (0x0003cb81) cell_tport_appsw_pane_cp03

0xd932,	// (0x0003d7af) phob2_contact_card_pane

0xd932,	// (0x0003d7af) phob2_listscroll_pane

0xd778,	// (0x0003d5f5) phob2_list_pane

0xd780,	// (0x0003d5fd) scroll_pane_cp034

0xd788,	// (0x0003d605) phob2_cc_data_pane_ParamLimits

0xd788,	// (0x0003d605) phob2_cc_data_pane

0xd7a2,	// (0x0003d61f) phob2_cc_listscroll_pane_ParamLimits

0xd7a2,	// (0x0003d61f) phob2_cc_listscroll_pane

0xd7bc,	// (0x0003d639) list_double_large_graphic_phob2_pane_ParamLimits

0xd7bc,	// (0x0003d639) list_double_large_graphic_phob2_pane

0xd7df,	// (0x0003d65c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd7df,	// (0x0003d65c) list_double_large_graphic_phob2_pane_g1

0x61c5,	// (0x00036042) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x61c5,	// (0x00036042) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x0003fdb9) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x0003fdb9) list_double_large_graphic_phob2_pane_g

0x61d1,	// (0x0003604e) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x61d1,	// (0x0003604e) list_double_large_graphic_phob2_pane_t1

0x61e6,	// (0x00036063) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x61e6,	// (0x00036063) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x0003fdbe) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x0003fdbe) list_double_large_graphic_phob2_pane_t

0xd932,	// (0x0003d7af) list_highlight_pane_cp024

0xd7ec,	// (0x0003d669) phob2_cc_button_pane

0xd7f4,	// (0x0003d671) phob2_cc_data_pane_g1_ParamLimits

0xd7f4,	// (0x0003d671) phob2_cc_data_pane_g1

0xd800,	// (0x0003d67d) phob2_cc_data_pane_g2_ParamLimits

0xd800,	// (0x0003d67d) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x0003fdc3) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x0003fdc3) phob2_cc_data_pane_g

0xd80c,	// (0x0003d689) phob2_cc_data_pane_t1_ParamLimits

0xd80c,	// (0x0003d689) phob2_cc_data_pane_t1

0xd81e,	// (0x0003d69b) phob2_cc_data_pane_t2_ParamLimits

0xd81e,	// (0x0003d69b) phob2_cc_data_pane_t2

0xd830,	// (0x0003d6ad) phob2_cc_data_pane_t3_ParamLimits

0xd830,	// (0x0003d6ad) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x0003fdc8) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x0003fdc8) phob2_cc_data_pane_t

0xd842,	// (0x0003d6bf) phob2_cc_list_pane_ParamLimits

0xd842,	// (0x0003d6bf) phob2_cc_list_pane

0xd84e,	// (0x0003d6cb) scroll_pane_cp035_ParamLimits

0xd84e,	// (0x0003d6cb) scroll_pane_cp035

0xf0be,	// (0x0003ef3b) bg_button_pane_cp033

0xd85a,	// (0x0003d6d7) phob2_cc_button_pane_g1

0xd866,	// (0x0003d6e3) phob2_cc_button_pane_t1

0xd87b,	// (0x0003d6f8) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x0003fdcf) phob2_cc_button_pane_t

0xd88d,	// (0x0003d70a) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd88d,	// (0x0003d70a) list_double_large_graphic_phob2_cc_pane

0xd8bd,	// (0x0003d73a) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd8bd,	// (0x0003d73a) list_double_large_graphic_phob2_cc_pane_g1

0x61f8,	// (0x00036075) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x61f8,	// (0x00036075) list_double_large_graphic_phob2_cc_pane_g2

0x6207,	// (0x00036084) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x6207,	// (0x00036084) list_double_large_graphic_phob2_cc_pane_g3

0x6216,	// (0x00036093) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x6216,	// (0x00036093) list_double_large_graphic_phob2_cc_pane_g4

0x6227,	// (0x000360a4) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x6227,	// (0x000360a4) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x0003fdd4) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x0003fdd4) list_double_large_graphic_phob2_cc_pane_g

0x6236,	// (0x000360b3) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x6236,	// (0x000360b3) list_double_large_graphic_phob2_cc_pane_t1

0x625f,	// (0x000360dc) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x625f,	// (0x000360dc) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x0003fddf) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x0003fddf) list_double_large_graphic_phob2_cc_pane_t

0xd8ce,	// (0x0003d74b) list_highlight_pane_cp025_ParamLimits

0xd8ce,	// (0x0003d74b) list_highlight_pane_cp025

0xf0be,	// (0x0003ef3b) bg_button_pane_cp033_ParamLimits

0xd85a,	// (0x0003d6d7) phob2_cc_button_pane_g1_ParamLimits

0xd866,	// (0x0003d6e3) phob2_cc_button_pane_t1_ParamLimits

0xd87b,	// (0x0003d6f8) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x0003fdcf) phob2_cc_button_pane_t_ParamLimits

0x64fb,	// (0x00036378) popup_wgtman_window

0x249f,	// (0x0003231c) scroll_pane_cp038

0xd3f2,	// (0x0003d26f) wgtman_btn_pane_cp_01_ParamLimits

0xd3f2,	// (0x0003d26f) wgtman_btn_pane_cp_01

0xd8dc,	// (0x0003d759) wgtman_content_pane

0xd8e5,	// (0x0003d762) wgtman_heading_pane

0xd932,	// (0x0003d7af) bg_heading_pane_cp02

0xd8ee,	// (0x0003d76b) wgtman_heading_pane_g1

0xd8f6,	// (0x0003d773) wgtman_heading_pane_t1

0xd904,	// (0x0003d781) scroll_pane_cp036

0xd90c,	// (0x0003d789) wgtman_list_pane

0xd914,	// (0x0003d791) wgtman_list_pane_t1_ParamLimits

0xd914,	// (0x0003d791) wgtman_list_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small
