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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00063701 };

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
0x04b0,	// (0x00063bb1) Screen

0x04bc,	// (0x00063bbd) application_window

0x04f8,	// (0x00063bf9) area_bottom_pane_ParamLimits

0x04f8,	// (0x00063bf9) area_bottom_pane

0x0531,	// (0x00063c32) area_top_pane_ParamLimits

0x0531,	// (0x00063c32) area_top_pane

0xa0e6,	// (0x0006d7e7) call_video_uplink_pane_ParamLimits

0xa0e6,	// (0x0006d7e7) call_video_uplink_pane

0x05bf,	// (0x00063cc0) main_pane_ParamLimits

0x05bf,	// (0x00063cc0) main_pane

0xdd55,	// (0x00071456) context_pane

0x33f1,	// (0x00066af2) navi_pane

0x3423,	// (0x00066b24) popup_cale_events_window_ParamLimits

0x3423,	// (0x00066b24) popup_cale_events_window

0xdd68,	// (0x00071469) popup_mup_playback_window

0x343b,	// (0x00066b3c) signal_pane

0xa8a7,	// (0x0006dfa8) main_browser_pane

0xaaec,	// (0x0006e1ed) main_burst_pane

0x313f,	// (0x00066840) main_calc_pane

0xdd49,	// (0x0007144a) main_cale_day_pane

0x3153,	// (0x00066854) main_cale_month_pane

0xdd49,	// (0x0007144a) main_cale_week_pane

0xaaec,	// (0x0006e1ed) main_call_pane

0xa52f,	// (0x0006dc30) main_call_poc_pane

0xaaec,	// (0x0006e1ed) main_camera_pane

0xaaec,	// (0x0006e1ed) main_chi_dic_pane

0xb374,	// (0x0006ea75) main_clock_pane

0xa52f,	// (0x0006dc30) main_fmradio_pane

0xaaec,	// (0x0006e1ed) main_graph_messa_pane

0xa52f,	// (0x0006dc30) main_help_pane

0xa8a7,	// (0x0006dfa8) main_im_pane

0xa78a,	// (0x0006de8b) main_image_pane_ParamLimits

0xa78a,	// (0x0006de8b) main_image_pane

0xa52f,	// (0x0006dc30) main_location2_pane

0xaaec,	// (0x0006e1ed) main_location_pane

0xa78a,	// (0x0006de8b) main_messa_pane

0xa52f,	// (0x0006dc30) main_mp2_pane

0xaaec,	// (0x0006e1ed) main_mp_pane

0xa52f,	// (0x0006dc30) main_msg_pane

0xa52f,	// (0x0006dc30) main_mup_eq_pane

0xa52f,	// (0x0006dc30) main_mup_pane

0xa8a7,	// (0x0006dfa8) main_notes_pane

0xa52f,	// (0x0006dc30) main_pec_pane

0xa52f,	// (0x0006dc30) main_phob_pane

0xa52f,	// (0x0006dc30) main_pinb_pane

0xa52f,	// (0x0006dc30) main_postcard_pane

0xa52f,	// (0x0006dc30) main_qdial_pane

0xaaec,	// (0x0006e1ed) main_skin_pane

0xa52f,	// (0x0006dc30) main_smil2_pane

0xaaec,	// (0x0006e1ed) main_smil_pane

0xaaec,	// (0x0006e1ed) main_video_pane

0xaaec,	// (0x0006e1ed) main_video_tele_pane

0xa78a,	// (0x0006de8b) main_viewer_pane_ParamLimits

0xa78a,	// (0x0006de8b) main_viewer_pane

0xaaec,	// (0x0006e1ed) main_vorec_pane

0x31a5,	// (0x000668a6) popup_blid_sat_info_window_ParamLimits

0x31a5,	// (0x000668a6) popup_blid_sat_info_window

0x31fd,	// (0x000668fe) popup_dyc_status_message_window_ParamLimits

0x31fd,	// (0x000668fe) popup_dyc_status_message_window

0x3217,	// (0x00066918) popup_grid_large_graphic_window_ParamLimits

0x3217,	// (0x00066918) popup_grid_large_graphic_window

0x32d3,	// (0x000669d4) popup_loc_request_window_ParamLimits

0x32d3,	// (0x000669d4) popup_loc_request_window

0x33c9,	// (0x00066aca) popup_wml_address_window_ParamLimits

0x33c9,	// (0x00066aca) popup_wml_address_window

0x2f79,	// (0x0006667a) call_muted_g1

0x2bed,	// (0x000662ee) popup_call_audio_conf_window_ParamLimits

0x2bed,	// (0x000662ee) popup_call_audio_conf_window

0x2f8d,	// (0x0006668e) popup_call_audio_first_window_ParamLimits

0x2f8d,	// (0x0006668e) popup_call_audio_first_window

0x3003,	// (0x00066704) popup_call_audio_in_window_ParamLimits

0x3003,	// (0x00066704) popup_call_audio_in_window

0x303f,	// (0x00066740) popup_call_audio_out_window_ParamLimits

0x303f,	// (0x00066740) popup_call_audio_out_window

0x3079,	// (0x0006677a) popup_call_audio_second_window_ParamLimits

0x3079,	// (0x0006677a) popup_call_audio_second_window

0x30cf,	// (0x000667d0) popup_call_audio_wait_window_ParamLimits

0x30cf,	// (0x000667d0) popup_call_audio_wait_window

0x3104,	// (0x00066805) popup_number_entry_window_ParamLimits

0x3104,	// (0x00066805) popup_number_entry_window

0xa11c,	// (0x0006d81d) bg_popup_call_pane_cp05_ParamLimits

0xa11c,	// (0x0006d81d) bg_popup_call_pane_cp05

0xa13c,	// (0x0006d83d) popup_number_entry_window_t1

0xa14f,	// (0x0006d850) popup_number_entry_window_t2

0xa161,	// (0x0006d862) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x00072746) popup_number_entry_window_t

0xa173,	// (0x0006d874) text_title_cp2

0xa186,	// (0x0006d887) bg_popup_call_pane_cp_ParamLimits

0xa186,	// (0x0006d887) bg_popup_call_pane_cp

0xa194,	// (0x0006d895) call_thumbnail_pane

0xa19c,	// (0x0006d89d) popup_call_audio_in_window_g1_ParamLimits

0xa19c,	// (0x0006d89d) popup_call_audio_in_window_g1

0xa1a8,	// (0x0006d8a9) popup_call_audio_in_window_g2_ParamLimits

0xa1a8,	// (0x0006d8a9) popup_call_audio_in_window_g2

0xa1b4,	// (0x0006d8b5) popup_call_audio_in_window_g3_ParamLimits

0xa1b4,	// (0x0006d8b5) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x0007274f) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x0007274f) popup_call_audio_in_window_g

0xa1c0,	// (0x0006d8c1) popup_call_audio_in_window_t1_ParamLimits

0xa1c0,	// (0x0006d8c1) popup_call_audio_in_window_t1

0xa1dc,	// (0x0006d8dd) popup_call_audio_in_window_t2_ParamLimits

0xa1dc,	// (0x0006d8dd) popup_call_audio_in_window_t2

0xa1f8,	// (0x0006d8f9) popup_call_audio_in_window_t3_ParamLimits

0xa1f8,	// (0x0006d8f9) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x00072756) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x00072756) popup_call_audio_in_window_t

0xa186,	// (0x0006d887) bg_popup_call_pane_cp01_ParamLimits

0xa186,	// (0x0006d887) bg_popup_call_pane_cp01

0xa194,	// (0x0006d895) call_thumbnail_pane_cp02

0xa20b,	// (0x0006d90c) call_type_pane_cp022

0xa213,	// (0x0006d914) popup_call_audio_out_window_g1_ParamLimits

0xa213,	// (0x0006d914) popup_call_audio_out_window_g1

0xa225,	// (0x0006d926) popup_call_audio_out_window_g2_ParamLimits

0xa225,	// (0x0006d926) popup_call_audio_out_window_g2

0xa231,	// (0x0006d932) popup_call_audio_out_window_g3_ParamLimits

0xa231,	// (0x0006d932) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x0007275d) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x0007275d) popup_call_audio_out_window_g

0xa243,	// (0x0006d944) popup_call_audio_out_window_t1_ParamLimits

0xa243,	// (0x0006d944) popup_call_audio_out_window_t1

0xa25b,	// (0x0006d95c) popup_call_audio_out_window_t2_ParamLimits

0xa25b,	// (0x0006d95c) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x00072764) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x00072764) popup_call_audio_out_window_t

0xa270,	// (0x0006d971) bg_popup_call_pane_ParamLimits

0xa270,	// (0x0006d971) bg_popup_call_pane

0x0714,	// (0x00063e15) call_thumbnail_pane_cp_ParamLimits

0x0714,	// (0x00063e15) call_thumbnail_pane_cp

0xa2f4,	// (0x0006d9f5) call_type_pane_cp01_ParamLimits

0xa2f4,	// (0x0006d9f5) call_type_pane_cp01

0xa338,	// (0x0006da39) popup_call_audio_first_window_g1_ParamLimits

0xa338,	// (0x0006da39) popup_call_audio_first_window_g1

0xa384,	// (0x0006da85) popup_call_audio_first_window_g2_ParamLimits

0xa384,	// (0x0006da85) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x00072769) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x00072769) popup_call_audio_first_window_g

0xa3c8,	// (0x0006dac9) popup_call_audio_first_window_t1_ParamLimits

0xa3c8,	// (0x0006dac9) popup_call_audio_first_window_t1

0xa474,	// (0x0006db75) popup_call_audio_first_window_t4_ParamLimits

0xa474,	// (0x0006db75) popup_call_audio_first_window_t4

0xa500,	// (0x0006dc01) popup_call_audio_first_window_t5_ParamLimits

0xa500,	// (0x0006dc01) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x0007276e) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x0007276e) popup_call_audio_first_window_t

0xa52f,	// (0x0006dc30) bg_popup_call_pane_cp02

0xa539,	// (0x0006dc3a) call_type_pane_cp023

0xa541,	// (0x0006dc42) popup_call_audio_wait_window_g1

0xa549,	// (0x0006dc4a) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x00072775) popup_call_audio_wait_window_g

0xa551,	// (0x0006dc52) popup_call_audio_wait_window_t3

0xa55f,	// (0x0006dc60) bg_popup_call_pane_cp03_ParamLimits

0xa55f,	// (0x0006dc60) bg_popup_call_pane_cp03

0xa5bf,	// (0x0006dcc0) call_thumbnail_pane_cp011_ParamLimits

0xa5bf,	// (0x0006dcc0) call_thumbnail_pane_cp011

0xa5cb,	// (0x0006dccc) call_type_pane_cp034_ParamLimits

0xa5cb,	// (0x0006dccc) call_type_pane_cp034

0xa607,	// (0x0006dd08) popup_call_audio_second_window_g1_ParamLimits

0xa607,	// (0x0006dd08) popup_call_audio_second_window_g1

0xa643,	// (0x0006dd44) popup_call_audio_second_window_g2_ParamLimits

0xa643,	// (0x0006dd44) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x0007277a) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x0007277a) popup_call_audio_second_window_g

0xa67f,	// (0x0006dd80) popup_call_audio_second_window_t1_ParamLimits

0xa67f,	// (0x0006dd80) popup_call_audio_second_window_t1

0xa700,	// (0x0006de01) popup_call_audio_second_window_t2_ParamLimits

0xa700,	// (0x0006de01) popup_call_audio_second_window_t2

0xa736,	// (0x0006de37) popup_call_audio_second_window_t3_ParamLimits

0xa736,	// (0x0006de37) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x0007277f) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x0007277f) popup_call_audio_second_window_t

0xa52f,	// (0x0006dc30) bg_popup_call_pane_cp04

0xa76c,	// (0x0006de6d) list_conf_pane

0xa774,	// (0x0006de75) popup_call_audio_conf_window_t1

0xa782,	// (0x0006de83) call_thumbnail_pane_g1

0xa78a,	// (0x0006de8b) bg_pinb_pane_ParamLimits

0xa78a,	// (0x0006de8b) bg_pinb_pane

0xa798,	// (0x0006de99) find_pinb_pane

0xa78a,	// (0x0006de8b) listscroll_pinb_pane_ParamLimits

0xa78a,	// (0x0006de8b) listscroll_pinb_pane

0xa7a2,	// (0x0006dea3) pinb_bg_pane_g1

0xa7a2,	// (0x0006dea3) pinb_bg_pane_g2

0xa7a2,	// (0x0006dea3) pinb_bg_pane_g3

0xa7a2,	// (0x0006dea3) pinb_bg_pane_g4

0xa7a2,	// (0x0006dea3) pinb_bg_pane_g5

0xa7a2,	// (0x0006dea3) pinb_bg_pane_g6

0xa7a2,	// (0x0006dea3) pinb_bg_pane_g7

0xa7a2,	// (0x0006dea3) pinb_bg_pane_g8

0xa7a2,	// (0x0006dea3) pinb_bg_pane_g9

0xa7a2,	// (0x0006dea3) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x00072786) pinb_bg_pane_g

0xa08d,	// (0x0006d78e) grid_pinb_pane

0xa08d,	// (0x0006d78e) list_pinb_pane

0xa7ac,	// (0x0006dead) scroll_pane_cp01_ParamLimits

0xa7ac,	// (0x0006dead) scroll_pane_cp01

0xa7ba,	// (0x0006debb) find_pinb_pane_g1_ParamLimits

0xa7ba,	// (0x0006debb) find_pinb_pane_g1

0xa7d2,	// (0x0006ded3) find_pinb_pane_t1

0xa7e4,	// (0x0006dee5) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x000727a0) find_pinb_pane_t

0xa7f9,	// (0x0006defa) input_focus_pane_cp01_ParamLimits

0xa7f9,	// (0x0006defa) input_focus_pane_cp01

0xa805,	// (0x0006df06) cell_pinb_pane_ParamLimits

0xa805,	// (0x0006df06) cell_pinb_pane

0xa813,	// (0x0006df14) cell_pinb_pane_g1_ParamLimits

0xa813,	// (0x0006df14) cell_pinb_pane_g1

0xa821,	// (0x0006df22) cell_pinb_pane_g2_ParamLimits

0xa821,	// (0x0006df22) cell_pinb_pane_g2

0xa821,	// (0x0006df22) cell_pinb_pane_g3_ParamLimits

0xa821,	// (0x0006df22) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x000727a5) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x000727a5) cell_pinb_pane_g

0xa52f,	// (0x0006dc30) grid_highlight_pane_cp01

0xa805,	// (0x0006df06) list_pinb_item_pane_ParamLimits

0xa805,	// (0x0006df06) list_pinb_item_pane

0xa08d,	// (0x0006d78e) list_highlight_pane_cp02

0xa82f,	// (0x0006df30) list_pinb_item_pane_g1_ParamLimits

0xa82f,	// (0x0006df30) list_pinb_item_pane_g1

0xa821,	// (0x0006df22) list_pinb_item_pane_g2_ParamLimits

0xa821,	// (0x0006df22) list_pinb_item_pane_g2

0xa813,	// (0x0006df14) list_pinb_item_pane_g3_ParamLimits

0xa813,	// (0x0006df14) list_pinb_item_pane_g3

0xa821,	// (0x0006df22) list_pinb_item_pane_g4_ParamLimits

0xa821,	// (0x0006df22) list_pinb_item_pane_g4

0x0003,

0xf0ab,	// (0x000727ac) list_pinb_item_pane_g_ParamLimits

0xf0ab,	// (0x000727ac) list_pinb_item_pane_g

0xa83d,	// (0x0006df3e) list_pinb_item_pane_t1_ParamLimits

0xa83d,	// (0x0006df3e) list_pinb_item_pane_t1

0x0756,	// (0x00063e57) calc_display_pane

0x077b,	// (0x00063e7c) calc_paper_pane

0x079e,	// (0x00063e9f) grid_calc_pane

0xa52f,	// (0x0006dc30) bg_list_pane_cp01

0x07cc,	// (0x00063ecd) clock_g1

0x07d4,	// (0x00063ed5) clock_g2

0x0001,

0xf0b4,	// (0x000727b5) clock_g

0x07dc,	// (0x00063edd) clock_t1_ParamLimits

0x07dc,	// (0x00063edd) clock_t1

0x07f1,	// (0x00063ef2) clock_t2_ParamLimits

0x07f1,	// (0x00063ef2) clock_t2

0x0803,	// (0x00063f04) clock_t3_ParamLimits

0x0803,	// (0x00063f04) clock_t3

0x0815,	// (0x00063f16) clock_t4_ParamLimits

0x0815,	// (0x00063f16) clock_t4

0x0827,	// (0x00063f28) clock_t5_ParamLimits

0x0827,	// (0x00063f28) clock_t5

0x083c,	// (0x00063f3d) clock_t6_ParamLimits

0x083c,	// (0x00063f3d) clock_t6

0x084e,	// (0x00063f4f) clock_t7_ParamLimits

0x084e,	// (0x00063f4f) clock_t7

0x0860,	// (0x00063f61) clock_t8_ParamLimits

0x0860,	// (0x00063f61) clock_t8

0x0874,	// (0x00063f75) clock_t9_ParamLimits

0x0874,	// (0x00063f75) clock_t9

0x0008,

0xf0b9,	// (0x000727ba) clock_t_ParamLimits

0xf0b9,	// (0x000727ba) clock_t

0xa859,	// (0x0006df5a) popup_clock_analogue_window_cp02

0xa859,	// (0x0006df5a) popup_clock_digital_window_cp01

0xa52f,	// (0x0006dc30) listscroll_help_pane

0xa52f,	// (0x0006dc30) phob_pre_status_pane

0xa861,	// (0x0006df62) grid_qdial_pane

0xa78a,	// (0x0006de8b) listscroll_mce_pane

0xa78a,	// (0x0006de8b) bg_notes_pane

0xa86b,	// (0x0006df6c) list_notes_pane

0x0888,	// (0x00063f89) scroll_pane_cp06

0xa879,	// (0x0006df7a) bg_calc_paper_pane

0xa88d,	// (0x0006df8e) list_calc_pane

0xa8a7,	// (0x0006dfa8) bg_calc_display_pane

0x089c,	// (0x00063f9d) calc_display_pane_t1

0x08b1,	// (0x00063fb2) calc_display_pane_t2

0xa8b3,	// (0x0006dfb4) calc_display_pane_t3

0x0002,

0xf0cc,	// (0x000727cd) calc_display_pane_t

0x08c6,	// (0x00063fc7) cell_calc_pane_ParamLimits

0x08c6,	// (0x00063fc7) cell_calc_pane

0xa8c5,	// (0x0006dfc6) bg_calc_paper_pane_g1

0xa8d1,	// (0x0006dfd2) bg_calc_paper_pane_g2

0xa8dd,	// (0x0006dfde) bg_calc_paper_pane_g3

0xa8e9,	// (0x0006dfea) bg_calc_paper_pane_g4

0xa8f5,	// (0x0006dff6) bg_calc_paper_pane_g5

0x08fb,	// (0x00063ffc) bg_calc_paper_pane_g6

0x090a,	// (0x0006400b) bg_calc_paper_pane_g7

0x0919,	// (0x0006401a) bg_calc_paper_pane_g8

0x0007,

0xf0d3,	// (0x000727d4) bg_calc_paper_pane_g

0x092c,	// (0x0006402d) calc_bg_paper_pane_g9

0x093f,	// (0x00064040) list_calc_item_pane_ParamLimits

0x093f,	// (0x00064040) list_calc_item_pane

0xa901,	// (0x0006e002) list_calc_item_pane_g1

0xa90e,	// (0x0006e00f) list_calc_item_pane_t1_ParamLimits

0xa90e,	// (0x0006e00f) list_calc_item_pane_t1

0x0957,	// (0x00064058) list_calc_item_pane_t2_ParamLimits

0x0957,	// (0x00064058) list_calc_item_pane_t2

0x0001,

0xf0e4,	// (0x000727e5) list_calc_item_pane_t_ParamLimits

0xf0e4,	// (0x000727e5) list_calc_item_pane_t

0xa7a2,	// (0x0006dea3) cell_calc_pane_g1

0xa920,	// (0x0006e021) grid_highlight_pane_cp02

0x0989,	// (0x0006408a) bg_calc_display_pane_g1

0x0992,	// (0x00064093) bg_calc_display_pane_g2

0xa942,	// (0x0006e043) bg_calc_display_pane_g3

0x0002,

0xf0ee,	// (0x000727ef) bg_calc_display_pane_g

0x099c,	// (0x0006409d) cell_qdial_pane_ParamLimits

0x099c,	// (0x0006409d) cell_qdial_pane

0x09b0,	// (0x000640b1) cell_qdial_pane_g1_ParamLimits

0x09b0,	// (0x000640b1) cell_qdial_pane_g1

0x09c6,	// (0x000640c7) cell_qdial_pane_g2_ParamLimits

0x09c6,	// (0x000640c7) cell_qdial_pane_g2

0xa94b,	// (0x0006e04c) cell_qdial_pane_g3_ParamLimits

0xa94b,	// (0x0006e04c) cell_qdial_pane_g3

0x0003,

0xf0f5,	// (0x000727f6) cell_qdial_pane_g_ParamLimits

0xf0f5,	// (0x000727f6) cell_qdial_pane_g

0x09ed,	// (0x000640ee) cell_qdial_pane_t1_ParamLimits

0x09ed,	// (0x000640ee) cell_qdial_pane_t1

0x0a05,	// (0x00064106) cell_qdial_pane_t2_ParamLimits

0x0a05,	// (0x00064106) cell_qdial_pane_t2

0x0a18,	// (0x00064119) cell_qdial_pane_t3_ParamLimits

0x0a18,	// (0x00064119) cell_qdial_pane_t3

0x0002,

0xf0fe,	// (0x000727ff) cell_qdial_pane_t_ParamLimits

0xf0fe,	// (0x000727ff) cell_qdial_pane_t

0xa52f,	// (0x0006dc30) grid_highlight_pane_cp04

0xa957,	// (0x0006e058) thumbnail_qdial_pane_ParamLimits

0xa957,	// (0x0006e058) thumbnail_qdial_pane

0xa9b3,	// (0x0006e0b4) list_help_pane

0xa9bc,	// (0x0006e0bd) scroll_pane_cp02

0xa9c5,	// (0x0006e0c6) help_list_pane_t1_ParamLimits

0xa9c5,	// (0x0006e0c6) help_list_pane_t1

0xa9e3,	// (0x0006e0e4) bg_notes_pane_g2

0xa9eb,	// (0x0006e0ec) bg_notes_pane_g3

0xa9f3,	// (0x0006e0f4) notes_bg_pane_g1

0xa9fb,	// (0x0006e0fc) notes_bg_pane_g4

0xaa03,	// (0x0006e104) notes_bg_pane_g5

0xaa0b,	// (0x0006e10c) notes_bg_pane_g6

0xaa13,	// (0x0006e114) notes_bg_pane_g7

0xaa1b,	// (0x0006e11c) notes_bg_pane_g8

0xaa23,	// (0x0006e124) notes_bg_pane_g9

0x0006,

0xf11c,	// (0x0007281d) notes_bg_pane_g

0x0a2b,	// (0x0006412c) list_notes_text_pane_ParamLimits

0x0a2b,	// (0x0006412c) list_notes_text_pane

0xaa2b,	// (0x0006e12c) list_notes_text_pane_g1

0x0a40,	// (0x00064141) list_notes_text_pane_t1

0x0a4e,	// (0x0006414f) listscroll_cale_week_pane

0x0a7a,	// (0x0006417b) bg_cale_heading_pane

0xaa4e,	// (0x0006e14f) bg_cale_pane_cp01

0x0a92,	// (0x00064193) cale_week_corner_pane

0x0ab1,	// (0x000641b2) cale_week_day_heading_pane

0x0ace,	// (0x000641cf) cale_week_scroll_pane_g1

0x0ae1,	// (0x000641e2) cale_week_scroll_pane_g2

0x0af9,	// (0x000641fa) cale_week_scroll_pane_g3

0x0b11,	// (0x00064212) cale_week_scroll_pane_g4

0x0b29,	// (0x0006422a) cale_week_scroll_pane_g5

0x0b49,	// (0x0006424a) cale_week_scroll_pane_g6

0x0b69,	// (0x0006426a) cale_week_scroll_pane_g7

0x0b89,	// (0x0006428a) cale_week_scroll_pane_g8

0x0bad,	// (0x000642ae) cale_week_scroll_pane_g9

0x0bc5,	// (0x000642c6) cale_week_scroll_pane_g10

0x0bdd,	// (0x000642de) cale_week_scroll_pane_g11

0x0bf5,	// (0x000642f6) cale_week_scroll_pane_g12

0x0c0d,	// (0x0006430e) cale_week_scroll_pane_g13

0x0c0d,	// (0x0006430e) cale_week_scroll_pane_g14

0x0c0d,	// (0x0006430e) cale_week_scroll_pane_g15

0x000f,

0xf12b,	// (0x0007282c) cale_week_scroll_pane_g

0x0c49,	// (0x0006434a) cale_week_time_pane

0x0c6d,	// (0x0006436e) grid_cale_week_pane

0xaa7d,	// (0x0006e17e) scroll_pane_cp08

0x0c93,	// (0x00064394) cell_cale_week_pane_ParamLimits

0x0c93,	// (0x00064394) cell_cale_week_pane

0x0d21,	// (0x00064422) cale_week_day_heading_pane_t1

0x0d4b,	// (0x0006444c) cale_week_day_heading_pane_t2

0x0d7a,	// (0x0006447b) cale_week_day_heading_pane_t3

0x0da9,	// (0x000644aa) cale_week_day_heading_pane_t4

0x0dd8,	// (0x000644d9) cale_week_day_heading_pane_t5

0x0e0f,	// (0x00064510) cale_week_day_heading_pane_t6

0x0e46,	// (0x00064547) cale_week_day_heading_pane_t7

0x0006,

0xf14c,	// (0x0007284d) cale_week_day_heading_pane_t

0xaa9a,	// (0x0006e19b) bg_cale_side_pane

0x0e70,	// (0x00064571) cale_week_time_pane_t1

0x0e8a,	// (0x0006458b) cale_week_time_pane_t2

0x0ea4,	// (0x000645a5) cale_week_time_pane_t3

0x0ebe,	// (0x000645bf) cale_week_time_pane_t4

0x0ed8,	// (0x000645d9) cale_week_time_pane_t5

0x0ef2,	// (0x000645f3) cale_week_time_pane_t6

0x0f0c,	// (0x0006460d) cale_week_time_pane_t7

0x0f26,	// (0x00064627) cale_week_time_pane_t8

0x0007,

0xf15b,	// (0x0007285c) cale_week_time_pane_t

0x0f40,	// (0x00064641) cell_cale_week_pane_g2

0x0f5f,	// (0x00064660) cell_cale_week_pane_g3_ParamLimits

0x0f5f,	// (0x00064660) cell_cale_week_pane_g3

0xaaa8,	// (0x0006e1a9) grid_highlight_pane_cp07

0xaab0,	// (0x0006e1b1) listscroll_gms_pane

0xaaba,	// (0x0006e1bb) grid_gms_pane

0xaac3,	// (0x0006e1c4) listscroll_gms_pane_g1

0xaacb,	// (0x0006e1cc) listscroll_gms_pane_g2

0x0001,

0xf16c,	// (0x0007286d) listscroll_gms_pane_g

0x0f77,	// (0x00064678) scroll_pane_cp010

0x0f82,	// (0x00064683) cell_gms_pane_ParamLimits

0x0f82,	// (0x00064683) cell_gms_pane

0x0f95,	// (0x00064696) cell_gms_pane_g1

0xaad3,	// (0x0006e1d4) cell_gms_pane_g2

0xaa2b,	// (0x0006e12c) cell_gms_pane_g3

0xaadb,	// (0x0006e1dc) cell_gms_pane_g4

0x0003,

0xf171,	// (0x00072872) cell_gms_pane_g

0xaae4,	// (0x0006e1e5) grid_highlight_pane_cp09

0x2f01,	// (0x00066602) phob_pre_status_pane_g1

0x2f09,	// (0x0006660a) phob_pre_status_pane_g2

0x2f11,	// (0x00066612) phob_pre_status_pane_g3

0x2f19,	// (0x0006661a) phob_pre_status_pane_g4

0x0004,

0xf535,	// (0x00072c36) phob_pre_status_pane_g

0x2f29,	// (0x0006662a) phob_pre_status_pane_t1

0x2f37,	// (0x00066638) phob_pre_status_pane_t2

0x2f47,	// (0x00066648) phob_pre_status_pane_t3

0x0002,

0xf540,	// (0x00072c41) phob_pre_status_pane_t

0xaaec,	// (0x0006e1ed) bg_list_pane_cp05

0x0fa5,	// (0x000646a6) grid_vorec_pane

0x0fad,	// (0x000646ae) vorec_t1

0x0fbb,	// (0x000646bc) vorec_t2

0x0fc9,	// (0x000646ca) vorec_t3

0x0fd7,	// (0x000646d8) vorec_t4

0xd69e,	// (0x00070d9f) vorec_t5

0x93b3,	// (0x0006cab4) vorec_t6

0x0004,

0xf17a,	// (0x0007287b) vorec_t

0x93c1,	// (0x0006cac2) wait_bar_pane_cp01

0x0ff3,	// (0x000646f4) cell_vorec_pane_ParamLimits

0x0ff3,	// (0x000646f4) cell_vorec_pane

0xaaf4,	// (0x0006e1f5) cell_vorec_pane_g1

0xa52f,	// (0x0006dc30) grid_highlight_pane_cp05

0xa7ac,	// (0x0006dead) cams_zoom_pane

0xa7ac,	// (0x0006dead) image_vga_pane

0xa813,	// (0x0006df14) main_camera_pane_g1

0xa813,	// (0x0006df14) main_camera_pane_g2

0xa813,	// (0x0006df14) main_camera_pane_g3

0xa813,	// (0x0006df14) main_camera_pane_g4

0xa813,	// (0x0006df14) main_camera_pane_g5

0xa813,	// (0x0006df14) main_camera_pane_g6

0xa813,	// (0x0006df14) main_camera_pane_g7

0x0007,

0xf185,	// (0x00072886) main_camera_pane_g

0xaafe,	// (0x0006e1ff) main_camera_pane_t1

0xaafe,	// (0x0006e1ff) main_camera_pane_t2

0x0001,

0xf196,	// (0x00072897) main_camera_pane_t

0x101a,	// (0x0006471b) cams_zoom_pane_cp_ParamLimits

0x101a,	// (0x0006471b) cams_zoom_pane_cp

0x104e,	// (0x0006474f) image_cif_pane_ParamLimits

0x104e,	// (0x0006474f) image_cif_pane

0xa08d,	// (0x0006d78e) image_subqcif_pane

0x1060,	// (0x00064761) main_video_pane_g1_ParamLimits

0x1060,	// (0x00064761) main_video_pane_g1

0x108e,	// (0x0006478f) main_video_pane_g2_ParamLimits

0x108e,	// (0x0006478f) main_video_pane_g2

0x10c8,	// (0x000647c9) main_video_pane_g3_ParamLimits

0x10c8,	// (0x000647c9) main_video_pane_g3

0x10c8,	// (0x000647c9) main_video_pane_g4_ParamLimits

0x10c8,	// (0x000647c9) main_video_pane_g4

0x10fc,	// (0x000647fd) main_video_pane_g5_ParamLimits

0x10fc,	// (0x000647fd) main_video_pane_g5

0xab12,	// (0x0006e213) main_video_pane_g6_ParamLimits

0xab12,	// (0x0006e213) main_video_pane_g6

0x0006,

0xf19b,	// (0x0007289c) main_video_pane_g_ParamLimits

0xf19b,	// (0x0007289c) main_video_pane_g

0x1118,	// (0x00064819) main_video_pane_t1_ParamLimits

0x1118,	// (0x00064819) main_video_pane_t1

0xab2c,	// (0x0006e22d) cams_zoom_pane_g1

0xab2c,	// (0x0006e22d) cams_zoom_pane_g2

0xab2c,	// (0x0006e22d) cams_zoom_pane_g3

0xab2c,	// (0x0006e22d) cams_zoom_pane_g4

0x0003,

0xf1aa,	// (0x000728ab) cams_zoom_pane_g

0x1170,	// (0x00064871) grid_cams_pane

0x118a,	// (0x0006488b) linegrid_cams_pane

0x119e,	// (0x0006489f) cell_cams_pane_ParamLimits

0x119e,	// (0x0006489f) cell_cams_pane

0xab36,	// (0x0006e237) cams_burst_image_pane

0xab3e,	// (0x0006e23f) cell_cams_pane_g1

0xa52f,	// (0x0006dc30) grid_highlight_pane_cp03

0xa7a2,	// (0x0006dea3) mp_bg_pane_g1

0xa08d,	// (0x0006d78e) bg_list_pane_cp03

0xa08d,	// (0x0006d78e) bg_mp_pane

0xa08d,	// (0x0006d78e) grid_mp_pane

0xab2c,	// (0x0006e22d) media_player_g1

0xb095,	// (0x0006e796) media_player_t1

0xb095,	// (0x0006e796) media_player_t2

0xb095,	// (0x0006e796) media_player_t3

0xb095,	// (0x0006e796) media_player_t4

0xb095,	// (0x0006e796) media_player_t5

0xb095,	// (0x0006e796) media_player_t6

0xb095,	// (0x0006e796) media_player_t7

0x0006,

0xf51f,	// (0x00072c20) media_player_t

0xa08d,	// (0x0006d78e) wait_bar_pane_cp02

0xf504,	// (0x00072c05) main_usb_pane_t

0xb374,	// (0x0006ea75) cell_mp_pane

0xa7a2,	// (0x0006dea3) cell_mp_pane_g1

0xa52f,	// (0x0006dc30) grid_highlight_pane_cp06

0xab46,	// (0x0006e247) grid_skin_colour_pane

0xab4e,	// (0x0006e24f) list_highlight_pane_cp03

0x11be,	// (0x000648bf) skin_g1

0xab56,	// (0x0006e257) skin_t1

0xab65,	// (0x0006e266) skin_t2

0x0001,

0xf1d8,	// (0x000728d9) skin_t

0x11c6,	// (0x000648c7) cell_skin_colour_pane_ParamLimits

0x11c6,	// (0x000648c7) cell_skin_colour_pane

0xab73,	// (0x0006e274) cell_skin_colour_pane_g1

0x123f,	// (0x00064940) call_video_g1_ParamLimits

0x123f,	// (0x00064940) call_video_g1

0x125b,	// (0x0006495c) call_video_g2_ParamLimits

0x125b,	// (0x0006495c) call_video_g2

0x0001,

0xf1dd,	// (0x000728de) call_video_g_ParamLimits

0xf1dd,	// (0x000728de) call_video_g

0x12ad,	// (0x000649ae) call_video_uplink_pane_cp1_ParamLimits

0x12ad,	// (0x000649ae) call_video_uplink_pane_cp1

0xab85,	// (0x0006e286) call_video_uplink_pane_cp2

0x134c,	// (0x00064a4d) video_down_crop_pane_ParamLimits

0x134c,	// (0x00064a4d) video_down_crop_pane

0x1443,	// (0x00064b44) video_down_pane_ParamLimits

0x1443,	// (0x00064b44) video_down_pane

0xab8d,	// (0x0006e28e) video_down_subqcif_pane_ParamLimits

0xab8d,	// (0x0006e28e) video_down_subqcif_pane

0xaba5,	// (0x0006e2a6) video_down_subqcif_pane_cp_ParamLimits

0xaba5,	// (0x0006e2a6) video_down_subqcif_pane_cp

0xabcb,	// (0x0006e2cc) im_reading_pane_ParamLimits

0xabcb,	// (0x0006e2cc) im_reading_pane

0x1553,	// (0x00064c54) im_writing_pane_ParamLimits

0x1553,	// (0x00064c54) im_writing_pane

0x1569,	// (0x00064c6a) im_reading_pane_t1

0xabe5,	// (0x0006e2e6) list_im_pane

0xabf6,	// (0x0006e2f7) scroll_pane_cp07

0x15a2,	// (0x00064ca3) im_writing_pane_t1_ParamLimits

0x15a2,	// (0x00064ca3) im_writing_pane_t1

0xac0f,	// (0x0006e310) im_writing_pane_t2_ParamLimits

0xac0f,	// (0x0006e310) im_writing_pane_t2

0x0001,

0xf1e7,	// (0x000728e8) im_writing_pane_t_ParamLimits

0xf1e7,	// (0x000728e8) im_writing_pane_t

0xa52f,	// (0x0006dc30) input_focus_pane_cp04

0xa52f,	// (0x0006dc30) input_focus_pane_cp05

0x15b7,	// (0x00064cb8) list_im_single_pane_ParamLimits

0x15b7,	// (0x00064cb8) list_im_single_pane

0x15cb,	// (0x00064ccc) list_single_im_pane_t1

0xaaec,	// (0x0006e1ed) blid_accuracy_pane

0xaaec,	// (0x0006e1ed) blid_compass_pane

0xdd01,	// (0x00071402) main_location_t1

0xdd01,	// (0x00071402) main_location_t2

0xdd01,	// (0x00071402) main_location_t3

0x0002,

0xf52e,	// (0x00072c2f) main_location_t

0xa52f,	// (0x0006dc30) aid_levels_location

0xa7a2,	// (0x0006dea3) blid_accuracy_pane_g1

0xa7a2,	// (0x0006dea3) blid_accuracy_pane_g2

0x0001,

0xf236,	// (0x00072937) blid_accuracy_pane_g

0xac57,	// (0x0006e358) wml_content_pane

0xac95,	// (0x0006e396) wml_button_pane_ParamLimits

0xac95,	// (0x0006e396) wml_button_pane

0x15da,	// (0x00064cdb) wml_list_single_large_pane_ParamLimits

0x15da,	// (0x00064cdb) wml_list_single_large_pane

0x15ef,	// (0x00064cf0) wml_list_single_medium_pane_ParamLimits

0x15ef,	// (0x00064cf0) wml_list_single_medium_pane

0x1605,	// (0x00064d06) wml_list_single_small_pane_ParamLimits

0x1605,	// (0x00064d06) wml_list_single_small_pane

0xaca9,	// (0x0006e3aa) wml_selection_box_pane_ParamLimits

0xaca9,	// (0x0006e3aa) wml_selection_box_pane

0xacbc,	// (0x0006e3bd) wml_list_single_pane_t1

0xaccb,	// (0x0006e3cc) wml_list_single_medium_pane_t1

0xacda,	// (0x0006e3db) wml_list_single_large_pane_t1

0xace9,	// (0x0006e3ea) input_focus_pane_cp02_ParamLimits

0xace9,	// (0x0006e3ea) input_focus_pane_cp02

0xacfc,	// (0x0006e3fd) wml_selection_box_pane_g1

0xad05,	// (0x0006e406) wml_selection_box_pane_t1_ParamLimits

0xad05,	// (0x0006e406) wml_selection_box_pane_t1

0xa78a,	// (0x0006de8b) bg_wml_button_pane_ParamLimits

0xa78a,	// (0x0006de8b) bg_wml_button_pane

0xad1d,	// (0x0006e41e) wml_button_pane_g1

0xad25,	// (0x0006e426) wml_button_pane_t1

0xad1d,	// (0x0006e41e) wml_button_bg_pane_g1

0xad35,	// (0x0006e436) wml_button_bg_pane_g2

0xad3d,	// (0x0006e43e) wml_button_bg_pane_g3

0xad45,	// (0x0006e446) wml_button_bg_pane_g4

0xad4d,	// (0x0006e44e) wml_button_bg_pane_g5

0xad55,	// (0x0006e456) wml_button_bg_pane_g6

0xad5d,	// (0x0006e45e) wml_button_bg_pane_g7

0xad65,	// (0x0006e466) wml_button_bg_pane_g8

0xad6d,	// (0x0006e46e) wml_button_bg_pane_g9

0x0008,

0xf1ec,	// (0x000728ed) wml_button_bg_pane_g

0x161d,	// (0x00064d1e) bg_list_pane_cp02

0xad75,	// (0x0006e476) mce_header_pane_ParamLimits

0xad75,	// (0x0006e476) mce_header_pane

0xad8b,	// (0x0006e48c) mce_icon_pane

0xad8b,	// (0x0006e48c) mce_image_pane

0xad94,	// (0x0006e495) mce_text_pane_ParamLimits

0xad94,	// (0x0006e495) mce_text_pane

0x1625,	// (0x00064d26) scroll_pane_cp03

0xac8d,	// (0x0006e38e) scroll_pane_cp04

0xada7,	// (0x0006e4a8) scroll_pane_cp05_ParamLimits

0xada7,	// (0x0006e4a8) scroll_pane_cp05

0x162f,	// (0x00064d30) mce_header_field_pane_ParamLimits

0x162f,	// (0x00064d30) mce_header_field_pane

0x1646,	// (0x00064d47) mce_header_field_pane_2_ParamLimits

0x1646,	// (0x00064d47) mce_header_field_pane_2

0x165c,	// (0x00064d5d) mce_header_field_pane_3

0x1664,	// (0x00064d65) list_single_mce_message_pane_ParamLimits

0x1664,	// (0x00064d65) list_single_mce_message_pane

0x1679,	// (0x00064d7a) list_single_mce_smart_pane_ParamLimits

0x1679,	// (0x00064d7a) list_single_mce_smart_pane

0xadb3,	// (0x0006e4b4) input_focus_pane_cp03

0xadbc,	// (0x0006e4bd) list_header_data_pane

0x1699,	// (0x00064d9a) mce_header_field_pane_t1

0x16a9,	// (0x00064daa) list_single_mce_header_pane_ParamLimits

0x16a9,	// (0x00064daa) list_single_mce_header_pane

0xadc4,	// (0x0006e4c5) list_single_mce_header_pane_t1

0xadd3,	// (0x0006e4d4) list_single_mce_message_pane_g1

0xaddb,	// (0x0006e4dc) list_single_mce_message_pane_t1

0x16e3,	// (0x00064de4) bg_cale_heading_pane_cp01_ParamLimits

0x16e3,	// (0x00064de4) bg_cale_heading_pane_cp01

0xade9,	// (0x0006e4ea) bg_cale_pane_cp02_ParamLimits

0xade9,	// (0x0006e4ea) bg_cale_pane_cp02

0x171d,	// (0x00064e1e) cale_month_corner_pane

0x173c,	// (0x00064e3d) cale_month_day_heading_pane_ParamLimits

0x173c,	// (0x00064e3d) cale_month_day_heading_pane

0x178e,	// (0x00064e8f) cale_month_pane_g1_ParamLimits

0x178e,	// (0x00064e8f) cale_month_pane_g1

0x17bd,	// (0x00064ebe) cale_month_pane_g2_ParamLimits

0x17bd,	// (0x00064ebe) cale_month_pane_g2

0x17ed,	// (0x00064eee) cale_month_pane_g3_ParamLimits

0x17ed,	// (0x00064eee) cale_month_pane_g3

0x1829,	// (0x00064f2a) cale_month_pane_g4_ParamLimits

0x1829,	// (0x00064f2a) cale_month_pane_g4

0x1865,	// (0x00064f66) cale_month_pane_g5_ParamLimits

0x1865,	// (0x00064f66) cale_month_pane_g5

0x18ad,	// (0x00064fae) cale_month_pane_g6_ParamLimits

0x18ad,	// (0x00064fae) cale_month_pane_g6

0x18f9,	// (0x00064ffa) cale_month_pane_g7_ParamLimits

0x18f9,	// (0x00064ffa) cale_month_pane_g7

0x194d,	// (0x0006504e) cale_month_pane_g8_ParamLimits

0x194d,	// (0x0006504e) cale_month_pane_g8

0x19a1,	// (0x000650a2) cale_month_pane_g9_ParamLimits

0x19a1,	// (0x000650a2) cale_month_pane_g9

0x19f3,	// (0x000650f4) cale_month_pane_g10_ParamLimits

0x19f3,	// (0x000650f4) cale_month_pane_g10

0x1a45,	// (0x00065146) cale_month_pane_g11_ParamLimits

0x1a45,	// (0x00065146) cale_month_pane_g11

0x1a97,	// (0x00065198) cale_month_pane_g12_ParamLimits

0x1a97,	// (0x00065198) cale_month_pane_g12

0x1ae9,	// (0x000651ea) cale_month_pane_g13_ParamLimits

0x1ae9,	// (0x000651ea) cale_month_pane_g13

0x000c,

0xf1ff,	// (0x00072900) cale_month_pane_g_ParamLimits

0xf1ff,	// (0x00072900) cale_month_pane_g

0x1b3b,	// (0x0006523c) cale_month_week_pane

0x1b5f,	// (0x00065260) grid_cale_month_pane_ParamLimits

0x1b5f,	// (0x00065260) grid_cale_month_pane

0x1ba8,	// (0x000652a9) cale_month_day_heading_pane_t1

0x1c2e,	// (0x0006532f) cale_month_day_heading_pane_t2

0x1ca7,	// (0x000653a8) cale_month_day_heading_pane_t3

0x1d20,	// (0x00065421) cale_month_day_heading_pane_t4

0x1da1,	// (0x000654a2) cale_month_day_heading_pane_t5

0x1e2a,	// (0x0006552b) cale_month_day_heading_pane_t6

0x1eb3,	// (0x000655b4) cale_month_day_heading_pane_t7

0x0006,

0xf21a,	// (0x0007291b) cale_month_day_heading_pane_t

0xaa9a,	// (0x0006e19b) bg_cale_side_pane_cp01

0x1f44,	// (0x00065645) cale_month_week_pane_t1

0x1f5d,	// (0x0006565e) cale_month_week_pane_t2

0x1f76,	// (0x00065677) cale_month_week_pane_t3

0x1f8f,	// (0x00065690) cale_month_week_pane_t4

0x1fa8,	// (0x000656a9) cale_month_week_pane_t5

0x1fc1,	// (0x000656c2) cale_month_week_pane_t6

0x0005,

0xf229,	// (0x0007292a) cale_month_week_pane_t

0x1fda,	// (0x000656db) cell_cale_month_pane_ParamLimits

0x1fda,	// (0x000656db) cell_cale_month_pane

0xae28,	// (0x0006e529) cell_cale_month_pane_g1

0x2108,	// (0x00065809) cell_cale_month_pane_t1_ParamLimits

0x2108,	// (0x00065809) cell_cale_month_pane_t1

0xaaa8,	// (0x0006e1a9) grid_highlight_pane_cp08

0xa7a2,	// (0x0006dea3) main_smil_g1

0x2134,	// (0x00065835) smil_status_pane

0xae34,	// (0x0006e535) smil_text_pane

0xdc19,	// (0x0007131a) bg_popup_call3_rect_pane_g8

0xdc21,	// (0x00071322) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c2,	// (0x00072bc3) bg_popup_call3_rect_pane_g

0xddca,	// (0x000714cb) smil_status_volume_pane_g1

0xae3e,	// (0x0006e53f) smil_status_pane_t1

0xb856,	// (0x0006ef57) volume_smil_pane

0xae55,	// (0x0006e556) list_smil_text_pane

0x2147,	// (0x00065848) scroll_pane_cp011

0x2152,	// (0x00065853) smil_text_list_pane_t1_ParamLimits

0x2152,	// (0x00065853) smil_text_list_pane_t1

0xae5f,	// (0x0006e560) aid_volume_smil_ParamLimits

0xae5f,	// (0x0006e560) aid_volume_smil

0xa7a2,	// (0x0006dea3) smil_volume_pane_g1

0xa7a2,	// (0x0006dea3) smil_volume_pane_g2

0x0001,

0xf236,	// (0x00072937) smil_volume_pane_g

0x0a4e,	// (0x0006414f) listscroll_cale_day_pane

0xae81,	// (0x0006e582) bg_cale_pane

0xae99,	// (0x0006e59a) list_cale_pane

0xaebc,	// (0x0006e5bd) scroll_pane_cp09

0xaecd,	// (0x0006e5ce) cale_bg_pane_g1

0xaed5,	// (0x0006e5d6) cale_bg_pane_g2

0xaedd,	// (0x0006e5de) cale_bg_pane_g3

0xaee5,	// (0x0006e5e6) cale_bg_pane_g4

0xaeed,	// (0x0006e5ee) cale_bg_pane_g5

0xaef5,	// (0x0006e5f6) cale_bg_pane_g6

0xaefd,	// (0x0006e5fe) cale_bg_pane_g7

0xaf05,	// (0x0006e606) cale_bg_pane_g8

0xaf0d,	// (0x0006e60e) cale_bg_pane_g9

0x0008,

0xf23b,	// (0x0007293c) cale_bg_pane_g

0x218e,	// (0x0006588f) list_cale_time_pane_ParamLimits

0x218e,	// (0x0006588f) list_cale_time_pane

0xaf1d,	// (0x0006e61e) list_cale_time_pane_g1_ParamLimits

0xaf1d,	// (0x0006e61e) list_cale_time_pane_g1

0xaf29,	// (0x0006e62a) list_cale_time_pane_g2_ParamLimits

0xaf29,	// (0x0006e62a) list_cale_time_pane_g2

0x21a3,	// (0x000658a4) list_cale_time_pane_g3_ParamLimits

0x21a3,	// (0x000658a4) list_cale_time_pane_g3

0x21b1,	// (0x000658b2) list_cale_time_pane_g4_ParamLimits

0x21b1,	// (0x000658b2) list_cale_time_pane_g4

0x21bf,	// (0x000658c0) list_cale_time_pane_g5_ParamLimits

0x21bf,	// (0x000658c0) list_cale_time_pane_g5

0x0005,

0xf24e,	// (0x0007294f) list_cale_time_pane_g_ParamLimits

0xf24e,	// (0x0007294f) list_cale_time_pane_g

0xaf43,	// (0x0006e644) list_cale_time_pane_t1_ParamLimits

0xaf43,	// (0x0006e644) list_cale_time_pane_t1

0xaf6b,	// (0x0006e66c) list_cale_time_pane_t2_ParamLimits

0xaf6b,	// (0x0006e66c) list_cale_time_pane_t2

0x2421,	// (0x00065b22) aid_blid_cardinal_pane

0x245f,	// (0x00065b60) compass_pane_t4

0xaf93,	// (0x0006e694) list_cale_time_pane_t4_ParamLimits

0xaf93,	// (0x0006e694) list_cale_time_pane_t4

0x246d,	// (0x00065b6e) compass_pane_t5

0x247b,	// (0x00065b7c) compass_pane_t6

0x2489,	// (0x00065b8a) compass_pane_t7

0xb4b9,	// (0x0006ebba) navi_pane_cc_t1

0xb6a8,	// (0x0006eda9) aid_phob_thumbnail_center_pane

0x28b1,	// (0x00065fb2) main_postcard_pane_g4_ParamLimits

0x0002,

0xf25b,	// (0x0007295c) list_cale_time_pane_t_ParamLimits

0xf25b,	// (0x0007295c) list_cale_time_pane_t

0xa186,	// (0x0006d887) bg_popup_window_pane_cp02_ParamLimits

0xa186,	// (0x0006d887) bg_popup_window_pane_cp02

0xafbb,	// (0x0006e6bc) heading_pane_cp01_ParamLimits

0xafbb,	// (0x0006e6bc) heading_pane_cp01

0xafc7,	// (0x0006e6c8) loc_req_pane_ParamLimits

0xafc7,	// (0x0006e6c8) loc_req_pane

0xafd7,	// (0x0006e6d8) loc_type_pane_ParamLimits

0xafd7,	// (0x0006e6d8) loc_type_pane

0xafe9,	// (0x0006e6ea) loc_type_pane_t1_ParamLimits

0xafe9,	// (0x0006e6ea) loc_type_pane_t1

0xaffb,	// (0x0006e6fc) loc_type_pane_t2_ParamLimits

0xaffb,	// (0x0006e6fc) loc_type_pane_t2

0xb00d,	// (0x0006e70e) loc_type_pane_t3_ParamLimits

0xb00d,	// (0x0006e70e) loc_type_pane_t3

0x0002,

0xf262,	// (0x00072963) loc_type_pane_t_ParamLimits

0xf262,	// (0x00072963) loc_type_pane_t

0xb01f,	// (0x0006e720) list_loc_req_pane

0xb029,	// (0x0006e72a) scroll_pane_cp012

0x21cd,	// (0x000658ce) list_single_loc_request_popup_menu_pane_ParamLimits

0x21cd,	// (0x000658ce) list_single_loc_request_popup_menu_pane

0xb034,	// (0x0006e735) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb034,	// (0x0006e735) list_single_loc_request_popup_menu_pane_g1

0xb040,	// (0x0006e741) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb040,	// (0x0006e741) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf269,	// (0x0007296a) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf269,	// (0x0007296a) list_single_loc_request_popup_menu_pane_g

0xb04c,	// (0x0006e74d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb04c,	// (0x0006e74d) list_single_loc_request_popup_menu_pane_t1

0xa78a,	// (0x0006de8b) bg_popup_window_pane_cp03_ParamLimits

0xa78a,	// (0x0006de8b) bg_popup_window_pane_cp03

0xb062,	// (0x0006e763) heading_loc_req_pane_ParamLimits

0xb062,	// (0x0006e763) heading_loc_req_pane

0x21da,	// (0x000658db) popup_dyc_status_message_window_g1_ParamLimits

0x21da,	// (0x000658db) popup_dyc_status_message_window_g1

0x21ee,	// (0x000658ef) popup_dyc_status_message_window_t1_ParamLimits

0x21ee,	// (0x000658ef) popup_dyc_status_message_window_t1

0x2203,	// (0x00065904) popup_dyc_status_message_window_t2_ParamLimits

0x2203,	// (0x00065904) popup_dyc_status_message_window_t2

0x2218,	// (0x00065919) popup_dyc_status_message_window_t3_ParamLimits

0x2218,	// (0x00065919) popup_dyc_status_message_window_t3

0x0002,

0xf26e,	// (0x0007296f) popup_dyc_status_message_window_t_ParamLimits

0xf26e,	// (0x0007296f) popup_dyc_status_message_window_t

0xa52f,	// (0x0006dc30) bg_heading_pane_cp01

0xb06e,	// (0x0006e76f) heading_loc_req_pane_g1

0xb076,	// (0x0006e777) heading_loc_req_pane_g2

0xb07e,	// (0x0006e77f) heading_loc_req_pane_g3

0x0002,

0xf275,	// (0x00072976) heading_loc_req_pane_g

0xb086,	// (0x0006e787) heading_loc_req_pane_t1

0xb0a5,	// (0x0006e7a6) bg_popup_sub_pane_cp01_ParamLimits

0xb0a5,	// (0x0006e7a6) bg_popup_sub_pane_cp01

0xb0b3,	// (0x0006e7b4) popup_cale_events_window_g1_ParamLimits

0xb0b3,	// (0x0006e7b4) popup_cale_events_window_g1

0xb0d3,	// (0x0006e7d4) popup_cale_events_window_g2_ParamLimits

0xb0d3,	// (0x0006e7d4) popup_cale_events_window_g2

0x0001,

0xf297,	// (0x00072998) popup_cale_events_window_g_ParamLimits

0xf297,	// (0x00072998) popup_cale_events_window_g

0xb0f3,	// (0x0006e7f4) popup_cale_events_window_t1_ParamLimits

0xb0f3,	// (0x0006e7f4) popup_cale_events_window_t1

0xb105,	// (0x0006e806) popup_cale_events_window_t2_ParamLimits

0xb105,	// (0x0006e806) popup_cale_events_window_t2

0xb143,	// (0x0006e844) popup_cale_events_window_t3_ParamLimits

0xb143,	// (0x0006e844) popup_cale_events_window_t3

0xb17d,	// (0x0006e87e) popup_cale_events_window_t4_ParamLimits

0xb17d,	// (0x0006e87e) popup_cale_events_window_t4

0x0003,

0xf29c,	// (0x0007299d) popup_cale_events_window_t_ParamLimits

0xf29c,	// (0x0007299d) popup_cale_events_window_t

0x2240,	// (0x00065941) call_type_pane

0x2250,	// (0x00065951) popup_call_status_window_g1

0x2264,	// (0x00065965) popup_call_status_window_g2

0x2278,	// (0x00065979) popup_call_status_window_g3

0x0002,

0xf2a5,	// (0x000729a6) popup_call_status_window_g

0xb1b3,	// (0x0006e8b4) call_type_pane_g1

0xb1bc,	// (0x0006e8bd) call_type_pane_g2

0x0001,

0xf2ac,	// (0x000729ad) call_type_pane_g

0xa52f,	// (0x0006dc30) bg_popup_sub_pane_cp02

0xb1c5,	// (0x0006e8c6) listscroll_popup_wml_pane

0xb1cd,	// (0x0006e8ce) list_wml_pane

0xb1d7,	// (0x0006e8d8) scroll_pane_cp013

0xb1e2,	// (0x0006e8e3) list_single_graphic_popup_wml_pane_ParamLimits

0xb1e2,	// (0x0006e8e3) list_single_graphic_popup_wml_pane

0xa7a2,	// (0x0006dea3) list_single_graphic_popup_wml_pane_g1

0xb1f6,	// (0x0006e8f7) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b1,	// (0x000729b2) list_single_graphic_popup_wml_pane_g

0xb1fe,	// (0x0006e8ff) list_single_graphic_popup_wml_pane_t1

0xb214,	// (0x0006e915) aid_call_pane

0xa782,	// (0x0006de83) popup_clock_analogue_window_g1

0xa782,	// (0x0006de83) popup_clock_analogue_window_g2

0xb21c,	// (0x0006e91d) popup_clock_analogue_window_g3

0xb21c,	// (0x0006e91d) popup_clock_analogue_window_g4

0xa7a2,	// (0x0006dea3) popup_clock_analogue_window_g5

0x0004,

0xf2b6,	// (0x000729b7) popup_clock_analogue_window_g

0xb224,	// (0x0006e925) popup_clock_analogue_window_t1

0xb232,	// (0x0006e933) clock_digital_number_pane_ParamLimits

0xb232,	// (0x0006e933) clock_digital_number_pane

0xb23e,	// (0x0006e93f) clock_digital_number_pane_cp02_ParamLimits

0xb23e,	// (0x0006e93f) clock_digital_number_pane_cp02

0xb24a,	// (0x0006e94b) clock_digital_number_pane_cp03_ParamLimits

0xb24a,	// (0x0006e94b) clock_digital_number_pane_cp03

0xb256,	// (0x0006e957) clock_digital_number_pane_cp04_ParamLimits

0xb256,	// (0x0006e957) clock_digital_number_pane_cp04

0xb266,	// (0x0006e967) clock_digital_separator_pane_ParamLimits

0xb266,	// (0x0006e967) clock_digital_separator_pane

0xb272,	// (0x0006e973) popup_clock_digital_window_t1

0xa7a2,	// (0x0006dea3) clock_digital_number_pane_g1

0xa7a2,	// (0x0006dea3) clock_digital_number_pane_g2

0x0001,

0xf236,	// (0x00072937) clock_digital_number_pane_g

0xa7a2,	// (0x0006dea3) clock_digital_separator_pane_g1

0xa7a2,	// (0x0006dea3) clock_digital_separator_pane_g2

0x0001,

0xf236,	// (0x00072937) clock_digital_separator_pane_g

0xa52f,	// (0x0006dc30) bg_popup_window_pane_cp04

0xb28f,	// (0x0006e990) heading_pane_cp03

0xaaec,	// (0x0006e1ed) listscroll_popup_gms_pane

0xa52f,	// (0x0006dc30) grid_large_graphic_popup_pane

0xb298,	// (0x0006e999) listscroll_popup_gms_pane_g1

0xb2a1,	// (0x0006e9a2) listscroll_popup_gms_pane_g2

0x0001,

0xf2c1,	// (0x000729c2) listscroll_popup_gms_pane_g

0xb2aa,	// (0x0006e9ab) scroll_pane_cp014

0xa805,	// (0x0006df06) cell_large_graphic_popup_pane_ParamLimits

0xa805,	// (0x0006df06) cell_large_graphic_popup_pane

0xa813,	// (0x0006df14) cell_large_graphic_popup_pane_g1_ParamLimits

0xa813,	// (0x0006df14) cell_large_graphic_popup_pane_g1

0xb2b3,	// (0x0006e9b4) cell_large_graphic_popup_pane_g2_ParamLimits

0xb2b3,	// (0x0006e9b4) cell_large_graphic_popup_pane_g2

0xb2c1,	// (0x0006e9c2) cell_large_graphic_popup_pane_g3_ParamLimits

0xb2c1,	// (0x0006e9c2) cell_large_graphic_popup_pane_g3

0xb2cf,	// (0x0006e9d0) cell_large_graphic_popup_pane_g4_ParamLimits

0xb2cf,	// (0x0006e9d0) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c6,	// (0x000729c7) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c6,	// (0x000729c7) cell_large_graphic_popup_pane_g

0xa52f,	// (0x0006dc30) grid_highlight_pane_cp010

0xa7a2,	// (0x0006dea3) bg_popup_call_pane_g1

0xb2e0,	// (0x0006e9e1) list_single_graphic_popup_conf_pane_ParamLimits

0xb2e0,	// (0x0006e9e1) list_single_graphic_popup_conf_pane

0xb2f3,	// (0x0006e9f4) list_highlight_pane_cp01

0xb2fc,	// (0x0006e9fd) list_single_graphic_popup_conf_pane_g1

0xb304,	// (0x0006ea05) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2cf,	// (0x000729d0) list_single_graphic_popup_conf_pane_g

0xb30c,	// (0x0006ea0d) list_single_graphic_popup_conf_pane_t1

0xb31a,	// (0x0006ea1b) linegrid_cams_pane_g1

0x2287,	// (0x00065988) linegrid_cams_pane_g2

0xaa2b,	// (0x0006e12c) linegrid_cams_pane_g3

0xb323,	// (0x0006ea24) linegrid_cams_pane_g4

0x2290,	// (0x00065991) linegrid_cams_pane_g5

0x2299,	// (0x0006599a) linegrid_cams_pane_g6

0xaadb,	// (0x0006e1dc) linegrid_cams_pane_g7

0x0006,

0xf2d4,	// (0x000729d5) linegrid_cams_pane_g

0xb32c,	// (0x0006ea2d) popup_clock_analogue_window

0xb32c,	// (0x0006ea2d) popup_clock_digital_window

0xa52f,	// (0x0006dc30) popup_phob_thumbnail_window

0xa7a2,	// (0x0006dea3) call_video_uplink_pane_g1

0xb335,	// (0x0006ea36) call_video_uplink_pane_g2

0x0001,

0xf2e3,	// (0x000729e4) call_video_uplink_pane_g

0xb33d,	// (0x0006ea3e) video_uplink_pane

0xb345,	// (0x0006ea46) mce_image_pane_g1

0x22a4,	// (0x000659a5) mce_image_pane_g2

0x22ae,	// (0x000659af) mce_image_pane_g3

0x22b6,	// (0x000659b7) mce_image_pane_g4

0x22be,	// (0x000659bf) mce_image_pane_g5

0x0004,

0xf2e8,	// (0x000729e9) mce_image_pane_g

0xb34f,	// (0x0006ea50) control_top_pane_stacon_cp01_ParamLimits

0xb34f,	// (0x0006ea50) control_top_pane_stacon_cp01

0xb363,	// (0x0006ea64) uni_indicator_pane_stacon_cp01_ParamLimits

0xb363,	// (0x0006ea64) uni_indicator_pane_stacon_cp01

0xb374,	// (0x0006ea75) bg_popup_sub_pane_cp03

0xb37e,	// (0x0006ea7f) chi_dic_find_pane

0x22c6,	// (0x000659c7) listscroll_chi_dic_pane

0xb386,	// (0x0006ea87) main_pane_chidic_g1

0xb38e,	// (0x0006ea8f) chi_dic_find_pane_t1

0xb39c,	// (0x0006ea9d) find_chidic_pane

0xb3a5,	// (0x0006eaa6) chi_dic_list_pane_ParamLimits

0xb3a5,	// (0x0006eaa6) chi_dic_list_pane

0xb3b6,	// (0x0006eab7) scroll_pane_cp020

0xb3be,	// (0x0006eabf) find_chidic_pane_t1

0xa52f,	// (0x0006dc30) input_focus_pane_cp06

0x22da,	// (0x000659db) list_chi_dic_pane_ParamLimits

0x22da,	// (0x000659db) list_chi_dic_pane

0x22ec,	// (0x000659ed) list_chi_dic_pane_t1_ParamLimits

0x22ec,	// (0x000659ed) list_chi_dic_pane_t1

0xa52f,	// (0x0006dc30) list_highlight_pane_cp020

0xb3cd,	// (0x0006eace) bg_cale_heading_pane_g1

0x22ff,	// (0x00065a00) bg_cale_heading_pane_g2

0x2307,	// (0x00065a08) bg_cale_heading_pane_g3

0x230f,	// (0x00065a10) bg_cale_heading_pane_g4

0x2319,	// (0x00065a1a) bg_cale_heading_pane_g5

0x2323,	// (0x00065a24) bg_cale_heading_pane_g6

0x232b,	// (0x00065a2c) bg_cale_heading_pane_g7

0x2333,	// (0x00065a34) bg_cale_heading_pane_g8

0x233d,	// (0x00065a3e) bg_cale_heading_pane_g9

0x0008,

0xf2f3,	// (0x000729f4) bg_cale_heading_pane_g

0xb3cd,	// (0x0006eace) bg_cale_side_pane_g1

0x2347,	// (0x00065a48) bg_cale_side_pane_g2

0x234f,	// (0x00065a50) bg_cale_side_pane_g3

0x2357,	// (0x00065a58) bg_cale_side_pane_g4

0x235f,	// (0x00065a60) bg_cale_side_pane_g5

0x2367,	// (0x00065a68) bg_cale_side_pane_g6

0x236f,	// (0x00065a70) bg_cale_side_pane_g7

0x2377,	// (0x00065a78) bg_cale_side_pane_g8

0x237f,	// (0x00065a80) bg_cale_side_pane_g9

0x0008,

0xf306,	// (0x00072a07) bg_cale_side_pane_g

0x2387,	// (0x00065a88) popup_call_status_window_ParamLimits

0x2387,	// (0x00065a88) popup_call_status_window

0xb3d5,	// (0x0006ead6) stacon_top_pane

0xb3dd,	// (0x0006eade) status_pane_ParamLimits

0xb3dd,	// (0x0006eade) status_pane

0xb3f2,	// (0x0006eaf3) status_small_pane

0xb3fa,	// (0x0006eafb) control_pane

0xa52f,	// (0x0006dc30) stacon_bottom_pane

0xb402,	// (0x0006eb03) list_single_mce_smart_pane_t1_ParamLimits

0xb402,	// (0x0006eb03) list_single_mce_smart_pane_t1

0xb415,	// (0x0006eb16) list_single_mce_smart_pane_t2_ParamLimits

0xb415,	// (0x0006eb16) list_single_mce_smart_pane_t2

0x0001,

0xf319,	// (0x00072a1a) list_single_mce_smart_pane_t_ParamLimits

0xf319,	// (0x00072a1a) list_single_mce_smart_pane_t

0x23d0,	// (0x00065ad1) compass_pane

0x23d9,	// (0x00065ada) main_location2_pane_t1

0x23eb,	// (0x00065aec) main_location2_pane_t2

0x23fd,	// (0x00065afe) main_location2_pane_t3

0x0003,

0xf31e,	// (0x00072a1f) main_location2_pane_t

0xb434,	// (0x0006eb35) compass_pane_g1_ParamLimits

0xb434,	// (0x0006eb35) compass_pane_g1

0x2441,	// (0x00065b42) compass_pane_t1

0x2450,	// (0x00065b51) compass_pane_t2

0x0005,

0xf327,	// (0x00072a28) compass_pane_t

0x2497,	// (0x00065b98) text_secondary_cp61

0xb4b0,	// (0x0006ebb1) navi_pane_cams_g5

0xb52c,	// (0x0006ec2d) navi_pane_im_t1

0xb53a,	// (0x0006ec3b) navi_pane_mp_g1_ParamLimits

0xb53a,	// (0x0006ec3b) navi_pane_mp_g1

0xb54e,	// (0x0006ec4f) navi_pane_mp_g2_ParamLimits

0xb54e,	// (0x0006ec4f) navi_pane_mp_g2

0xb55a,	// (0x0006ec5b) navi_pane_mp_g3_ParamLimits

0xb55a,	// (0x0006ec5b) navi_pane_mp_g3

0x0002,

0xf33b,	// (0x00072a3c) navi_pane_mp_g_ParamLimits

0xf33b,	// (0x00072a3c) navi_pane_mp_g

0xb566,	// (0x0006ec67) navi_pane_mp_t1

0xb574,	// (0x0006ec75) navi_pane_mp_t2

0x0002,

0xf342,	// (0x00072a43) navi_pane_mp_t

0xb5df,	// (0x0006ece0) navi_pane_vt_g1

0xb566,	// (0x0006ec67) navi_pane_vt_t1

0xb5e7,	// (0x0006ece8) navi_slider_pane

0xaaec,	// (0x0006e1ed) zooming_pane

0xb5f7,	// (0x0006ecf8) navi_slider_pane_g1

0xb600,	// (0x0006ed01) navi_slider_pane_g2

0x0006,

0xf349,	// (0x00072a4a) navi_slider_pane_g

0xb62d,	// (0x0006ed2e) aid_levels_zoom

0xb635,	// (0x0006ed36) zooming_pane_g1

0xb63d,	// (0x0006ed3e) zooming_pane_g2

0xb63d,	// (0x0006ed3e) zooming_pane_g3

0x0002,

0xf358,	// (0x00072a59) zooming_pane_g

0xb645,	// (0x0006ed46) level_10_zoom

0xb64e,	// (0x0006ed4f) level_11_zoom

0xb657,	// (0x0006ed58) level_1_zoom

0xb660,	// (0x0006ed61) level_2_zoom

0xb669,	// (0x0006ed6a) level_3_zoom

0xb672,	// (0x0006ed73) level_4_zoom

0xb67b,	// (0x0006ed7c) level_5_zoom

0xb684,	// (0x0006ed85) level_6_zoom

0xb68d,	// (0x0006ed8e) level_7_zoom

0xb696,	// (0x0006ed97) level_8_zoom

0xb69f,	// (0x0006eda0) level_9_zoom

0xb6b0,	// (0x0006edb1) popup_phob_thumbnail_window_g1

0xb6b8,	// (0x0006edb9) popup_phob_thumbnail_window_g2

0x0001,

0xf35f,	// (0x00072a60) popup_phob_thumbnail_window_g

0x2f57,	// (0x00066658) level_1_location

0x2f5f,	// (0x00066660) level_2_location

0x2f67,	// (0x00066668) level_3_location

0x2f6f,	// (0x00066670) level_4_location

0xaaec,	// (0x0006e1ed) level_5_location

0x24e8,	// (0x00065be9) mce_icon_pane_g1

0x24f2,	// (0x00065bf3) mce_icon_pane_g2

0x0001,

0xf364,	// (0x00072a65) mce_icon_pane_g

0xb6c0,	// (0x0006edc1) main_mup_pane_g1_ParamLimits

0xb6c0,	// (0x0006edc1) main_mup_pane_g1

0xb6c0,	// (0x0006edc1) main_mup_pane_g2_ParamLimits

0xb6c0,	// (0x0006edc1) main_mup_pane_g2

0xb6c0,	// (0x0006edc1) main_mup_pane_g3_ParamLimits

0xb6c0,	// (0x0006edc1) main_mup_pane_g3

0xb6c0,	// (0x0006edc1) main_mup_pane_g4_ParamLimits

0xb6c0,	// (0x0006edc1) main_mup_pane_g4

0xb6c0,	// (0x0006edc1) main_mup_pane_g5_ParamLimits

0xb6c0,	// (0x0006edc1) main_mup_pane_g5

0xb6c0,	// (0x0006edc1) main_mup_pane_g6_ParamLimits

0xb6c0,	// (0x0006edc1) main_mup_pane_g6

0xb6c0,	// (0x0006edc1) main_mup_pane_g7_ParamLimits

0xb6c0,	// (0x0006edc1) main_mup_pane_g7

0xb6c0,	// (0x0006edc1) main_mup_pane_g8_ParamLimits

0xb6c0,	// (0x0006edc1) main_mup_pane_g8

0xb6c0,	// (0x0006edc1) main_mup_pane_g9_ParamLimits

0xb6c0,	// (0x0006edc1) main_mup_pane_g9

0xb6c0,	// (0x0006edc1) main_mup_pane_g10_ParamLimits

0xb6c0,	// (0x0006edc1) main_mup_pane_g10

0xb6c0,	// (0x0006edc1) main_mup_pane_g11_ParamLimits

0xb6c0,	// (0x0006edc1) main_mup_pane_g11

0xa813,	// (0x0006df14) main_mup_pane_g12_ParamLimits

0xa813,	// (0x0006df14) main_mup_pane_g12

0xb6c0,	// (0x0006edc1) main_mup_pane_g13_ParamLimits

0xb6c0,	// (0x0006edc1) main_mup_pane_g13

0x000c,

0xf369,	// (0x00072a6a) main_mup_pane_g_ParamLimits

0xf369,	// (0x00072a6a) main_mup_pane_g

0xb6ce,	// (0x0006edcf) main_mup_pane_t1_ParamLimits

0xb6ce,	// (0x0006edcf) main_mup_pane_t1

0xb6ce,	// (0x0006edcf) main_mup_pane_t2_ParamLimits

0xb6ce,	// (0x0006edcf) main_mup_pane_t2

0xb6ce,	// (0x0006edcf) main_mup_pane_t3_ParamLimits

0xb6ce,	// (0x0006edcf) main_mup_pane_t3

0xaafe,	// (0x0006e1ff) main_mup_pane_t4_ParamLimits

0xaafe,	// (0x0006e1ff) main_mup_pane_t4

0xaafe,	// (0x0006e1ff) main_mup_pane_t5_ParamLimits

0xaafe,	// (0x0006e1ff) main_mup_pane_t5

0xb6e2,	// (0x0006ede3) main_mup_pane_t6_ParamLimits

0xb6e2,	// (0x0006ede3) main_mup_pane_t6

0x0005,

0xf384,	// (0x00072a85) main_mup_pane_t_ParamLimits

0xf384,	// (0x00072a85) main_mup_pane_t

0xa805,	// (0x0006df06) mup_progress_pane_ParamLimits

0xa805,	// (0x0006df06) mup_progress_pane

0xb6f6,	// (0x0006edf7) mup_visualizer_pane_ParamLimits

0xb6f6,	// (0x0006edf7) mup_visualizer_pane

0xb6f6,	// (0x0006edf7) mup_volume_pane_ParamLimits

0xb6f6,	// (0x0006edf7) mup_volume_pane

0xa821,	// (0x0006df22) mup_visualizer_pane_g1_ParamLimits

0xa821,	// (0x0006df22) mup_visualizer_pane_g1

0xb704,	// (0x0006ee05) mup_visualizer_pane_g2_ParamLimits

0xb704,	// (0x0006ee05) mup_visualizer_pane_g2

0xa813,	// (0x0006df14) mup_visualizer_pane_g3_ParamLimits

0xa813,	// (0x0006df14) mup_visualizer_pane_g3

0x0002,

0xf391,	// (0x00072a92) mup_visualizer_pane_g_ParamLimits

0xf391,	// (0x00072a92) mup_visualizer_pane_g

0xab2c,	// (0x0006e22d) mup_volume_pane_g1

0xab2c,	// (0x0006e22d) mup_volume_pane_g2

0x0001,

0xf398,	// (0x00072a99) mup_volume_pane_g

0xab2c,	// (0x0006e22d) mup_progress_pane_g1

0xab2c,	// (0x0006e22d) mup_progress_pane_g2

0xab2c,	// (0x0006e22d) mup_progress_pane_g3

0x0002,

0xf39d,	// (0x00072a9e) mup_progress_pane_g

0xa52f,	// (0x0006dc30) bg_popup_window_pane_cp05

0xb712,	// (0x0006ee13) heading_pane_cp02_ParamLimits

0xb712,	// (0x0006ee13) heading_pane_cp02

0xb72c,	// (0x0006ee2d) list_popup_blid_pane

0xb734,	// (0x0006ee35) list_blid_sat_info_pane_ParamLimits

0xb734,	// (0x0006ee35) list_blid_sat_info_pane

0xb747,	// (0x0006ee48) list_blid_sat_info_pane_g1

0xb74f,	// (0x0006ee50) list_blid_sat_info_pane_t1

0x25f2,	// (0x00065cf3) mup_equalizer_pane_ParamLimits

0x25f2,	// (0x00065cf3) mup_equalizer_pane

0x260b,	// (0x00065d0c) mup_equalizer_pane_cp1_ParamLimits

0x260b,	// (0x00065d0c) mup_equalizer_pane_cp1

0x2628,	// (0x00065d29) mup_equalizer_pane_cp2_ParamLimits

0x2628,	// (0x00065d29) mup_equalizer_pane_cp2

0x2645,	// (0x00065d46) mup_equalizer_pane_cp3_ParamLimits

0x2645,	// (0x00065d46) mup_equalizer_pane_cp3

0x2666,	// (0x00065d67) mup_equalizer_pane_cp4_ParamLimits

0x2666,	// (0x00065d67) mup_equalizer_pane_cp4

0x2687,	// (0x00065d88) mup_equalizer_pane_cp5

0x269b,	// (0x00065d9c) mup_equalizer_pane_cp6

0x26af,	// (0x00065db0) mup_equalizer_pane_cp7

0xdc99,	// (0x0007139a) bg_popup_call_poc_act_pane_g9

0xdca1,	// (0x000713a2) bg_popup_call_poc_act_pane_g10

0xdca9,	// (0x000713aa) bg_popup_call_poc_act_pane_g11

0x000a,

0xa78a,	// (0x0006de8b) mup_scale_pane

0xa7a2,	// (0x0006dea3) mup_scale_pane_g1

0xb75d,	// (0x0006ee5e) mup_scale_pane_g2

0x0006,

0xf3b9,	// (0x00072aba) mup_scale_pane_g

0xb781,	// (0x0006ee82) msg_data_pane

0xb789,	// (0x0006ee8a) scroll_pane_cp017

0x26d5,	// (0x00065dd6) bg_list_pane_cp04_ParamLimits

0x26d5,	// (0x00065dd6) bg_list_pane_cp04

0xb791,	// (0x0006ee92) msg_data_pane_g1

0x26ed,	// (0x00065dee) msg_data_pane_g2

0x26f7,	// (0x00065df8) msg_data_pane_g3

0x26ff,	// (0x00065e00) msg_data_pane_g4

0x2707,	// (0x00065e08) msg_data_pane_g5

0x270f,	// (0x00065e10) msg_data_pane_g6

0x2717,	// (0x00065e18) msg_data_pane_g7

0x0006,

0xf3c8,	// (0x00072ac9) msg_data_pane_g

0x271f,	// (0x00065e20) msg_text_pane_ParamLimits

0x271f,	// (0x00065e20) msg_text_pane

0x274b,	// (0x00065e4c) qrid_highlight_pane_cp011_ParamLimits

0x274b,	// (0x00065e4c) qrid_highlight_pane_cp011

0xa52f,	// (0x0006dc30) msg_body_pane

0xa52f,	// (0x0006dc30) msg_header_pane

0xb7a2,	// (0x0006eea3) input_focus_pane_cp07

0x276f,	// (0x00065e70) msg_header_pane_t1_ParamLimits

0x276f,	// (0x00065e70) msg_header_pane_t1

0x2785,	// (0x00065e86) msg_header_pane_t2_ParamLimits

0x2785,	// (0x00065e86) msg_header_pane_t2

0x0001,

0xf3dc,	// (0x00072add) msg_header_pane_t_ParamLimits

0xf3dc,	// (0x00072add) msg_header_pane_t

0xb7b7,	// (0x0006eeb8) msg_body_pane_g1

0x279c,	// (0x00065e9d) msg_body_pane_t1_ParamLimits

0x279c,	// (0x00065e9d) msg_body_pane_t1

0xe1d8,	// (0x000718d9) msg_body_pane_t2_ParamLimits

0xe1d8,	// (0x000718d9) msg_body_pane_t2

0xe1ea,	// (0x000718eb) msg_body_pane_t3_ParamLimits

0xe1ea,	// (0x000718eb) msg_body_pane_t3

0x0002,

0xf3e1,	// (0x00072ae2) msg_body_pane_t_ParamLimits

0xf3e1,	// (0x00072ae2) msg_body_pane_t

0x2807,	// (0x00065f08) main_viewer_pane_g1_ParamLimits

0x2807,	// (0x00065f08) main_viewer_pane_g1

0x2815,	// (0x00065f16) main_viewer_pane_g2_ParamLimits

0x2815,	// (0x00065f16) main_viewer_pane_g2

0x2823,	// (0x00065f24) main_viewer_pane_g3_ParamLimits

0x2823,	// (0x00065f24) main_viewer_pane_g3

0x2832,	// (0x00065f33) main_viewer_pane_g4_ParamLimits

0x2832,	// (0x00065f33) main_viewer_pane_g4

0xb7d7,	// (0x0006eed8) main_viewer_pane_g5_ParamLimits

0xb7d7,	// (0x0006eed8) main_viewer_pane_g5

0xb7d7,	// (0x0006eed8) main_viewer_pane_g7_ParamLimits

0xb7d7,	// (0x0006eed8) main_viewer_pane_g7

0xb034,	// (0x0006e735) main_viewer_pane_g8_ParamLimits

0xb034,	// (0x0006e735) main_viewer_pane_g8

0x0007,

0xf3f1,	// (0x00072af2) main_viewer_pane_g_ParamLimits

0xf3f1,	// (0x00072af2) main_viewer_pane_g

0xcb8d,	// (0x0007028e) viewer_content_pane_ParamLimits

0xcb8d,	// (0x0007028e) viewer_content_pane

0x286e,	// (0x00065f6f) main_postcard_pane_g1_ParamLimits

0x286e,	// (0x00065f6f) main_postcard_pane_g1

0x2884,	// (0x00065f85) main_postcard_pane_g2_ParamLimits

0x2884,	// (0x00065f85) main_postcard_pane_g2

0x289a,	// (0x00065f9b) main_postcard_pane_g3_ParamLimits

0x289a,	// (0x00065f9b) main_postcard_pane_g3

0x0005,

0xf402,	// (0x00072b03) main_postcard_pane_g_ParamLimits

0xf402,	// (0x00072b03) main_postcard_pane_g

0x28b1,	// (0x00065fb2) main_postcard_pane_g4

0xdddd,	// (0x000714de) smil_status_volume_pane_g2

0x28f4,	// (0x00065ff5) postcard_pane_ParamLimits

0x28f4,	// (0x00065ff5) postcard_pane

0xcb9b,	// (0x0007029c) postcard_pane_g1_ParamLimits

0xcb9b,	// (0x0007029c) postcard_pane_g1

0x2936,	// (0x00066037) postcard_pane_g2_ParamLimits

0x2936,	// (0x00066037) postcard_pane_g2

0x2942,	// (0x00066043) postcard_pane_g3_ParamLimits

0x2942,	// (0x00066043) postcard_pane_g3

0xcba9,	// (0x000702aa) postcard_pane_g4_ParamLimits

0xcba9,	// (0x000702aa) postcard_pane_g4

0x294e,	// (0x0006604f) postcard_pane_g5_ParamLimits

0x294e,	// (0x0006604f) postcard_pane_g5

0x2963,	// (0x00066064) postcard_pane_g6_ParamLimits

0x2963,	// (0x00066064) postcard_pane_g6

0xcb9b,	// (0x0007029c) postcard_pane_g7_ParamLimits

0xcb9b,	// (0x0007029c) postcard_pane_g7

0x0006,

0xf40f,	// (0x00072b10) postcard_pane_g_ParamLimits

0xf40f,	// (0x00072b10) postcard_pane_g

0x2977,	// (0x00066078) main_mp2_pane_g1_ParamLimits

0x2977,	// (0x00066078) main_mp2_pane_g1

0x2983,	// (0x00066084) main_mp2_pane_g2_ParamLimits

0x2983,	// (0x00066084) main_mp2_pane_g2

0x298f,	// (0x00066090) main_mp2_pane_g3_ParamLimits

0x298f,	// (0x00066090) main_mp2_pane_g3

0x0002,

0xf41e,	// (0x00072b1f) main_mp2_pane_g_ParamLimits

0xf41e,	// (0x00072b1f) main_mp2_pane_g

0x299b,	// (0x0006609c) main_mp2_pane_t1_ParamLimits

0x299b,	// (0x0006609c) main_mp2_pane_t1

0x29b0,	// (0x000660b1) main_mp2_pane_t2_ParamLimits

0x29b0,	// (0x000660b1) main_mp2_pane_t2

0x29c2,	// (0x000660c3) main_mp2_pane_t3_ParamLimits

0x29c2,	// (0x000660c3) main_mp2_pane_t3

0x0002,

0xf425,	// (0x00072b26) main_mp2_pane_t_ParamLimits

0xf425,	// (0x00072b26) main_mp2_pane_t

0xcbb7,	// (0x000702b8) pec_content_pane_ParamLimits

0xcbb7,	// (0x000702b8) pec_content_pane

0xac8d,	// (0x0006e38e) scroll_pane_cp015

0xcbc9,	// (0x000702ca) pec_attribute_pane_ParamLimits

0xcbc9,	// (0x000702ca) pec_attribute_pane

0x29d4,	// (0x000660d5) pec_content_pane_g1_ParamLimits

0x29d4,	// (0x000660d5) pec_content_pane_g1

0xcbd9,	// (0x000702da) pec_content_pane_t1_ParamLimits

0xcbd9,	// (0x000702da) pec_content_pane_t1

0xcbeb,	// (0x000702ec) pec_content_pane_t2_ParamLimits

0xcbeb,	// (0x000702ec) pec_content_pane_t2

0x0001,

0xf42c,	// (0x00072b2d) pec_content_pane_t_ParamLimits

0xf42c,	// (0x00072b2d) pec_content_pane_t

0x29e0,	// (0x000660e1) list_single_graphic_pane_cp01_ParamLimits

0x29e0,	// (0x000660e1) list_single_graphic_pane_cp01

0xa78a,	// (0x0006de8b) bg_popup_sub_pane_cp04

0xcbfd,	// (0x000702fe) popup_mup_playback_window_g1

0xcc09,	// (0x0007030a) popup_mup_playback_window_t1

0xcc1e,	// (0x0007031f) popup_mup_playback_window_t2

0x0001,

0xf431,	// (0x00072b32) popup_mup_playback_window_t

0xcc55,	// (0x00070356) main_image_pane_g1_ParamLimits

0xcc55,	// (0x00070356) main_image_pane_g1

0xcc98,	// (0x00070399) scroll_pane_cp018_ParamLimits

0xcc98,	// (0x00070399) scroll_pane_cp018

0xccb0,	// (0x000703b1) scroll_pane_cp016_ParamLimits

0xccb0,	// (0x000703b1) scroll_pane_cp016

0x2aad,	// (0x000661ae) smil2_image_pane_ParamLimits

0x2aad,	// (0x000661ae) smil2_image_pane

0x2add,	// (0x000661de) smil2_root_pane_ParamLimits

0x2add,	// (0x000661de) smil2_root_pane

0x2b15,	// (0x00066216) smil2_text_pane_ParamLimits

0x2b15,	// (0x00066216) smil2_text_pane

0xa52f,	// (0x0006dc30) bg_list_pane_cp06

0xccec,	// (0x000703ed) grid_radio_pane

0xa52f,	// (0x0006dc30) bg_popup_window_pane_cp06

0xccf4,	// (0x000703f5) main_fmradio_pane_t1

0xdcb1,	// (0x000713b2) heading_pane_cp04

0xcd02,	// (0x00070403) main_fmradio_pane_t2

0xdcb9,	// (0x000713ba) popup_cale_lunar_info_window_g1

0xcd10,	// (0x00070411) main_fmradio_pane_t3

0xdcc1,	// (0x000713c2) popup_cale_lunar_info_window_g2

0xcd1e,	// (0x0007041f) main_fmradio_pane_t4

0x0001,

0xcd2c,	// (0x0007042d) main_fmradio_pane_t5

0x0004,

0xf511,	// (0x00072c12) popup_cale_lunar_info_window_g

0xf446,	// (0x00072b47) main_fmradio_pane_t

0xcd3a,	// (0x0007043b) wait_bar_pane_cp03

0xcd42,	// (0x00070443) cell_fmradio_pane_ParamLimits

0xcd42,	// (0x00070443) cell_fmradio_pane

0xcb9b,	// (0x0007029c) cell_fmradio_pane_g1_ParamLimits

0xcb9b,	// (0x0007029c) cell_fmradio_pane_g1

0xa52f,	// (0x0006dc30) grid_highlight_pane_cp011

0xcd55,	// (0x00070456) poc_content_pane_ParamLimits

0xcd55,	// (0x00070456) poc_content_pane

0xcd67,	// (0x00070468) scroll_pane_cp019

0x2b95,	// (0x00066296) popup_call_poc_act_window_ParamLimits

0x2b95,	// (0x00066296) popup_call_poc_act_window

0x2bb9,	// (0x000662ba) popup_call_poc_inact_window_ParamLimits

0x2bb9,	// (0x000662ba) popup_call_poc_inact_window

0xf4e8,	// (0x00072be9) bg_popup_call_poc_act_pane_g

0xdc29,	// (0x0007132a) bg_popup_call_poc_inact_pane_g1

0xdc31,	// (0x00071332) bg_popup_call_poc_inact_pane_g2

0xcd6f,	// (0x00070470) popup_call_poc_act_window_g2

0xdc39,	// (0x0007133a) bg_popup_call_poc_inact_pane_g3

0xdc41,	// (0x00071342) bg_popup_call_poc_inact_pane_g4

0xdc49,	// (0x0007134a) bg_popup_call_poc_inact_pane_g5

0xcd77,	// (0x00070478) popup_call_poc_act_window_t1_ParamLimits

0xcd77,	// (0x00070478) popup_call_poc_act_window_t1

0xcd9f,	// (0x000704a0) popup_call_poc_act_window_t2_ParamLimits

0xcd9f,	// (0x000704a0) popup_call_poc_act_window_t2

0xcdc7,	// (0x000704c8) popup_call_poc_act_window_t3_ParamLimits

0xcdc7,	// (0x000704c8) popup_call_poc_act_window_t3

0xcdef,	// (0x000704f0) popup_call_poc_act_window_t4_ParamLimits

0xcdef,	// (0x000704f0) popup_call_poc_act_window_t4

0x0003,

0xf451,	// (0x00072b52) popup_call_poc_act_window_t_ParamLimits

0xf451,	// (0x00072b52) popup_call_poc_act_window_t

0xdc51,	// (0x00071352) bg_popup_call_poc_inact_pane_g6

0xdc59,	// (0x0007135a) bg_popup_call_poc_inact_pane_g7

0xdc61,	// (0x00071362) bg_popup_call_poc_inact_pane_g8

0xce01,	// (0x00070502) popup_call_poc_inact_window_g2

0xdc69,	// (0x0007136a) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4d5,	// (0x00072bd6) bg_popup_call_poc_inact_pane_g

0xce09,	// (0x0007050a) popup_call_poc_inact_window_t1_ParamLimits

0xce09,	// (0x0007050a) popup_call_poc_inact_window_t1

0xce1e,	// (0x0007051f) popup_call_poc_inact_window_t2_ParamLimits

0xce1e,	// (0x0007051f) popup_call_poc_inact_window_t2

0xce33,	// (0x00070534) popup_call_poc_inact_window_t3_ParamLimits

0xce33,	// (0x00070534) popup_call_poc_inact_window_t3

0x0002,

0xf45a,	// (0x00072b5b) popup_call_poc_inact_window_t_ParamLimits

0xf45a,	// (0x00072b5b) popup_call_poc_inact_window_t

0xdd55,	// (0x00071456) context_pane_ParamLimits

0x343b,	// (0x00066b3c) signal_pane_ParamLimits

0xaaec,	// (0x0006e1ed) main_call2_pane

0xb822,	// (0x0006ef23) popup_phob_thumbnail2_window_ParamLimits

0xb822,	// (0x0006ef23) popup_phob_thumbnail2_window

0xb7bf,	// (0x0006eec0) aid_hotspot_pointer_arrow_pane

0xb7c7,	// (0x0006eec8) aid_hotspot_pointer_hand_pane

0x2f21,	// (0x00066622) phob_pre_status_pane_g5

0xa7ac,	// (0x0006dead) cams_zoom_pane_ParamLimits

0xa7ac,	// (0x0006dead) image_vga_pane_ParamLimits

0xa813,	// (0x0006df14) main_camera_pane_g1_ParamLimits

0xa813,	// (0x0006df14) main_camera_pane_g2_ParamLimits

0xa813,	// (0x0006df14) main_camera_pane_g3_ParamLimits

0xa813,	// (0x0006df14) main_camera_pane_g4_ParamLimits

0xa813,	// (0x0006df14) main_camera_pane_g5_ParamLimits

0xa813,	// (0x0006df14) main_camera_pane_g6_ParamLimits

0xa813,	// (0x0006df14) main_camera_pane_g7_ParamLimits

0xf185,	// (0x00072886) main_camera_pane_g_ParamLimits

0xaafe,	// (0x0006e1ff) main_camera_pane_t1_ParamLimits

0xaafe,	// (0x0006e1ff) main_camera_pane_t2_ParamLimits

0xf196,	// (0x00072897) main_camera_pane_t_ParamLimits

0xa78a,	// (0x0006de8b) bg_popup_preview_window_pane_cp01_ParamLimits

0xa78a,	// (0x0006de8b) bg_popup_preview_window_pane_cp01

0xce48,	// (0x00070549) popup_phob_thumbnail2_window_g1_ParamLimits

0xce48,	// (0x00070549) popup_phob_thumbnail2_window_g1

0xa52f,	// (0x0006dc30) call2_cli_visual_pane

0x2bed,	// (0x000662ee) popup_call2_audio_conf_window_ParamLimits

0x2bed,	// (0x000662ee) popup_call2_audio_conf_window

0x2c0d,	// (0x0006630e) popup_call2_audio_first_window_ParamLimits

0x2c0d,	// (0x0006630e) popup_call2_audio_first_window

0x2ca3,	// (0x000663a4) popup_call2_audio_in_window_ParamLimits

0x2ca3,	// (0x000663a4) popup_call2_audio_in_window

0x2ceb,	// (0x000663ec) popup_call2_audio_out_window_ParamLimits

0x2ceb,	// (0x000663ec) popup_call2_audio_out_window

0x2d55,	// (0x00066456) popup_call2_audio_second_window_ParamLimits

0x2d55,	// (0x00066456) popup_call2_audio_second_window

0x2dbb,	// (0x000664bc) popup_call2_audio_wait_window_ParamLimits

0x2dbb,	// (0x000664bc) popup_call2_audio_wait_window

0xa52f,	// (0x0006dc30) bg_popup_call2_act_pane_cp03

0xa76c,	// (0x0006de6d) list_conf_pane_cp

0xce54,	// (0x00070555) popup_call2_audio_conf_window_t1

0xb2e0,	// (0x0006e9e1) list_single_graphic_popup_conf2_pane_ParamLimits

0xb2e0,	// (0x0006e9e1) list_single_graphic_popup_conf2_pane

0xb2f3,	// (0x0006e9f4) list_highlight_pane_cp04

0xce62,	// (0x00070563) list_single_graphic_popup_conf2_pane_g1

0xb304,	// (0x0006ea05) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf461,	// (0x00072b62) list_single_graphic_popup_conf2_pane_g

0xce6c,	// (0x0007056d) list_single_graphic_popup_conf2_pane_t1

0xce7a,	// (0x0007057b) bg_popup_call2_act_pane_cp01_ParamLimits

0xce7a,	// (0x0007057b) bg_popup_call2_act_pane_cp01

0xcf04,	// (0x00070605) call_type_pane_cp05_ParamLimits

0xcf04,	// (0x00070605) call_type_pane_cp05

0xcf58,	// (0x00070659) popup_call2_audio_second_window_g1_ParamLimits

0xcf58,	// (0x00070659) popup_call2_audio_second_window_g1

0xcfac,	// (0x000706ad) popup_call2_audio_second_window_g2_ParamLimits

0xcfac,	// (0x000706ad) popup_call2_audio_second_window_g2

0x0002,

0xf466,	// (0x00072b67) popup_call2_audio_second_window_g_ParamLimits

0xf466,	// (0x00072b67) popup_call2_audio_second_window_g

0xd011,	// (0x00070712) popup_call2_audio_second_window_t1_ParamLimits

0xd011,	// (0x00070712) popup_call2_audio_second_window_t1

0xd0cc,	// (0x000707cd) popup_call2_audio_second_window_t2_ParamLimits

0xd0cc,	// (0x000707cd) popup_call2_audio_second_window_t2

0xd11f,	// (0x00070820) popup_call2_audio_second_window_t3_ParamLimits

0xd11f,	// (0x00070820) popup_call2_audio_second_window_t3

0x0003,

0xf46d,	// (0x00072b6e) popup_call2_audio_second_window_t_ParamLimits

0xf46d,	// (0x00072b6e) popup_call2_audio_second_window_t

0xa52f,	// (0x0006dc30) bg_popup_call2_in_pane_cp02

0xa539,	// (0x0006dc3a) call_type_pane_cp04

0x2df5,	// (0x000664f6) popup_call2_audio_wait_window_g1

0x2dfd,	// (0x000664fe) popup_call2_audio_wait_window_g2

0x0001,

0xf476,	// (0x00072b77) popup_call2_audio_wait_window_g

0xa551,	// (0x0006dc52) popup_call2_audio_wait_window_t3

0xd212,	// (0x00070913) bg_popup_call2_act_pane_ParamLimits

0xd212,	// (0x00070913) bg_popup_call2_act_pane

0xd2d2,	// (0x000709d3) call_type_pane_cp03_ParamLimits

0xd2d2,	// (0x000709d3) call_type_pane_cp03

0xd336,	// (0x00070a37) popup_call2_audio_first_window_g1_ParamLimits

0xd336,	// (0x00070a37) popup_call2_audio_first_window_g1

0xd3a6,	// (0x00070aa7) popup_call2_audio_first_window_g2_ParamLimits

0xd3a6,	// (0x00070aa7) popup_call2_audio_first_window_g2

0xd40a,	// (0x00070b0b) popup_call2_audio_first_window_g3_ParamLimits

0xd40a,	// (0x00070b0b) popup_call2_audio_first_window_g3

0x0004,

0xf47b,	// (0x00072b7c) popup_call2_audio_first_window_g_ParamLimits

0xf47b,	// (0x00072b7c) popup_call2_audio_first_window_g

0xd492,	// (0x00070b93) popup_call2_audio_first_window_t1_ParamLimits

0xd492,	// (0x00070b93) popup_call2_audio_first_window_t1

0xd595,	// (0x00070c96) popup_call2_audio_first_window_t4_ParamLimits

0xd595,	// (0x00070c96) popup_call2_audio_first_window_t4

0xd6ac,	// (0x00070dad) popup_call2_audio_first_window_t5_ParamLimits

0xd6ac,	// (0x00070dad) popup_call2_audio_first_window_t5

0x0003,

0xf486,	// (0x00072b87) popup_call2_audio_first_window_t_ParamLimits

0xf486,	// (0x00072b87) popup_call2_audio_first_window_t

0xa782,	// (0x0006de83) bg_popup_call2_act_pane_g1

0xdcc9,	// (0x000713ca) popup_cale_lunar_info_window_t1

0xdcd7,	// (0x000713d8) popup_cale_lunar_info_window_t2

0xdce5,	// (0x000713e6) popup_cale_lunar_info_window_t3

0xa52f,	// (0x0006dc30) bg_popup_call2_bubble_pane

0xd7ad,	// (0x00070eae) bg_popup_call2_in_pane_cp01_ParamLimits

0xd7ad,	// (0x00070eae) bg_popup_call2_in_pane_cp01

0xa20b,	// (0x0006d90c) call_type_pane_cp02

0x2e05,	// (0x00066506) popup_call2_audio_out_window_g1_ParamLimits

0x2e05,	// (0x00066506) popup_call2_audio_out_window_g1

0xd7f5,	// (0x00070ef6) popup_call2_audio_out_window_g2_ParamLimits

0xd7f5,	// (0x00070ef6) popup_call2_audio_out_window_g2

0x2e31,	// (0x00066532) popup_call2_audio_out_window_g3_ParamLimits

0x2e31,	// (0x00066532) popup_call2_audio_out_window_g3

0x0003,

0xf48f,	// (0x00072b90) popup_call2_audio_out_window_g_ParamLimits

0xf48f,	// (0x00072b90) popup_call2_audio_out_window_g

0xd82c,	// (0x00070f2d) popup_call2_audio_out_window_t1_ParamLimits

0xd82c,	// (0x00070f2d) popup_call2_audio_out_window_t1

0xd88b,	// (0x00070f8c) popup_call2_audio_out_window_t2_ParamLimits

0xd88b,	// (0x00070f8c) popup_call2_audio_out_window_t2

0xd8df,	// (0x00070fe0) popup_call2_audio_out_window_t3_ParamLimits

0xd8df,	// (0x00070fe0) popup_call2_audio_out_window_t3

0xd8f5,	// (0x00070ff6) popup_call2_audio_out_window_t4_ParamLimits

0xd8f5,	// (0x00070ff6) popup_call2_audio_out_window_t4

0xd90b,	// (0x0007100c) popup_call2_audio_out_window_t5_ParamLimits

0xd90b,	// (0x0007100c) popup_call2_audio_out_window_t5

0x0005,

0xf498,	// (0x00072b99) popup_call2_audio_out_window_t_ParamLimits

0xf498,	// (0x00072b99) popup_call2_audio_out_window_t

0xd96f,	// (0x00071070) bg_popup_call2_in_pane_ParamLimits

0xd96f,	// (0x00071070) bg_popup_call2_in_pane

0xd9cb,	// (0x000710cc) popup_call2_audio_in_window_g1_ParamLimits

0xd9cb,	// (0x000710cc) popup_call2_audio_in_window_g1

0xda03,	// (0x00071104) popup_call2_audio_in_window_g2_ParamLimits

0xda03,	// (0x00071104) popup_call2_audio_in_window_g2

0xda3b,	// (0x0007113c) popup_call2_audio_in_window_g3_ParamLimits

0xda3b,	// (0x0007113c) popup_call2_audio_in_window_g3

0x0003,

0xf4a5,	// (0x00072ba6) popup_call2_audio_in_window_g_ParamLimits

0xf4a5,	// (0x00072ba6) popup_call2_audio_in_window_g

0xda93,	// (0x00071194) popup_call2_audio_in_window_t1_ParamLimits

0xda93,	// (0x00071194) popup_call2_audio_in_window_t1

0xdb13,	// (0x00071214) popup_call2_audio_in_window_t2_ParamLimits

0xdb13,	// (0x00071214) popup_call2_audio_in_window_t2

0xdb93,	// (0x00071294) popup_call2_audio_in_window_t3_ParamLimits

0xdb93,	// (0x00071294) popup_call2_audio_in_window_t3

0xdbad,	// (0x000712ae) popup_call2_audio_in_window_t4_ParamLimits

0xdbad,	// (0x000712ae) popup_call2_audio_in_window_t4

0xdbbf,	// (0x000712c0) popup_call2_audio_in_window_t5_ParamLimits

0xdbbf,	// (0x000712c0) popup_call2_audio_in_window_t5

0xdbd4,	// (0x000712d5) popup_call2_audio_in_window_t6_ParamLimits

0xdbd4,	// (0x000712d5) popup_call2_audio_in_window_t6

0x0005,

0xf4ae,	// (0x00072baf) popup_call2_audio_in_window_t_ParamLimits

0xf4ae,	// (0x00072baf) popup_call2_audio_in_window_t

0xa782,	// (0x0006de83) bg_popup_call2_in_pane_g1

0xdcf3,	// (0x000713f4) popup_cale_lunar_info_window_t4

0x0003,

0xf516,	// (0x00072c17) popup_cale_lunar_info_window_t

0xa78a,	// (0x0006de8b) bg_popup_call2_rect_pane_ParamLimits

0xa78a,	// (0x0006de8b) bg_popup_call2_rect_pane

0xa52f,	// (0x0006dc30) call2_cli_visual_graphic_pane

0xa52f,	// (0x0006dc30) call2_cli_visual_text_pane

0xb849,	// (0x0006ef4a) smil_status_volume_pane_g3

0x0002,

0xa7a2,	// (0x0006dea3) call2_cli_visual_graphic_pane_g1

0xa7a2,	// (0x0006dea3) call2_cli_visual_graphic_pane_g2

0xa7a2,	// (0x0006dea3) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4bb,	// (0x00072bbc) call2_cli_visual_graphic_pane_g

0xdbe9,	// (0x000712ea) bg_popup_call2_rect_pane_g1

0xa9ab,	// (0x0006e0ac) bg_popup_call2_rect_pane_g2

0xdbf1,	// (0x000712f2) bg_popup_call2_rect_pane_g3

0xdbf9,	// (0x000712fa) bg_popup_call2_rect_pane_g4

0xdc01,	// (0x00071302) bg_popup_call2_rect_pane_g5

0xdc09,	// (0x0007130a) bg_popup_call2_rect_pane_g6

0xdc11,	// (0x00071312) bg_popup_call2_rect_pane_g7

0xdc19,	// (0x0007131a) bg_popup_call2_rect_pane_g8

0xdc21,	// (0x00071322) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c2,	// (0x00072bc3) bg_popup_call2_rect_pane_g

0xdc29,	// (0x0007132a) bg_popup_call2_bubble_pane_g1

0xdc31,	// (0x00071332) bg_popup_call2_bubble_pane_g2

0xdc39,	// (0x0007133a) bg_popup_call2_bubble_pane_g3

0xdc41,	// (0x00071342) bg_popup_call2_bubble_pane_g4

0xdc49,	// (0x0007134a) bg_popup_call2_bubble_pane_g5

0xdc51,	// (0x00071352) bg_popup_call2_bubble_pane_g6

0xdc59,	// (0x0007135a) bg_popup_call2_bubble_pane_g7

0xdc61,	// (0x00071362) bg_popup_call2_bubble_pane_g8

0xdc69,	// (0x0007136a) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4d5,	// (0x00072bd6) bg_popup_call2_bubble_pane_g

0x0a60,	// (0x00064161) aid_cale_week_size_cell_pane

0x1006,	// (0x00064707) aid_cams_cif_uncrop_pane_ParamLimits

0x1006,	// (0x00064707) aid_cams_cif_uncrop_pane

0x115c,	// (0x0006485d) aid_cams_size_cell_ParamLimits

0x115c,	// (0x0006485d) aid_cams_size_cell

0x1170,	// (0x00064871) grid_cams_pane_ParamLimits

0x118a,	// (0x0006488b) linegrid_cams_pane_ParamLimits

0x1271,	// (0x00064972) call_video_pane_t1

0x128f,	// (0x00064990) call_video_pane_t2

0x0001,

0xf1e2,	// (0x000728e3) call_video_pane_t

0x16bd,	// (0x00064dbe) aid_cale_month_size_cell_pane_ParamLimits

0x16bd,	// (0x00064dbe) aid_cale_month_size_cell_pane

0xf55a,	// (0x00072c5b) smil_status_volume_pane_g

0xb856,	// (0x0006ef57) volume_smil_pane_ParamLimits

0xa09f,	// (0x0006d7a0) aid_popup2_width_pane

0x09d7,	// (0x000640d8) cell_qdial_pane_g4_ParamLimits

0x09d7,	// (0x000640d8) cell_qdial_pane_g4

0x2421,	// (0x00065b22) aid_blid_cardinal_pane_ParamLimits

0x242d,	// (0x00065b2e) aid_blid_destination_pane_ParamLimits

0x242d,	// (0x00065b2e) aid_blid_destination_pane

0xa78a,	// (0x0006de8b) bg_popup_call_poc_act_pane_ParamLimits

0xa78a,	// (0x0006de8b) bg_popup_call_poc_act_pane

0xa78a,	// (0x0006de8b) bg_popup_call_poc_inact_pane_ParamLimits

0xa78a,	// (0x0006de8b) bg_popup_call_poc_inact_pane

0xdc71,	// (0x00071372) bg_popup_call_poc_act_pane_g1

0xdc79,	// (0x0007137a) bg_popup_call_poc_act_pane_g2

0xdc81,	// (0x00071382) bg_popup_call_poc_act_pane_g3

0xdc41,	// (0x00071342) bg_popup_call_poc_act_pane_g4

0xdc49,	// (0x0007134a) bg_popup_call_poc_act_pane_g5

0xdc89,	// (0x0007138a) bg_popup_call_poc_act_pane_g6

0xdc59,	// (0x0007135a) bg_popup_call_poc_act_pane_g7

0xdc91,	// (0x00071392) bg_popup_call_poc_act_pane_g8

0xa52f,	// (0x0006dc30) main_usb_pane

0xb7fd,	// (0x0006eefe) popup_cale_lunar_info_window

0x1569,	// (0x00064c6a) im_reading_pane_t1_ParamLimits

0xabe5,	// (0x0006e2e6) list_im_pane_ParamLimits

0xabf6,	// (0x0006e2f7) scroll_pane_cp07_ParamLimits

0xa52f,	// (0x0006dc30) grid_highlight_pane_cp012

0xa78a,	// (0x0006de8b) mup_scale_pane_ParamLimits

0xcb9b,	// (0x0007029c) main_usb_pane_g1_ParamLimits

0xcb9b,	// (0x0007029c) main_usb_pane_g1

0x2e7f,	// (0x00066580) main_usb_pane_g2_ParamLimits

0x2e7f,	// (0x00066580) main_usb_pane_g2

0x0001,

0xf4ff,	// (0x00072c00) main_usb_pane_g_ParamLimits

0xf4ff,	// (0x00072c00) main_usb_pane_g

0x2e95,	// (0x00066596) main_usb_pane_t1_ParamLimits

0x2e95,	// (0x00066596) main_usb_pane_t1

0x2ea7,	// (0x000665a8) main_usb_pane_t2_ParamLimits

0x2ea7,	// (0x000665a8) main_usb_pane_t2

0x2eb9,	// (0x000665ba) main_usb_pane_t3_ParamLimits

0x2eb9,	// (0x000665ba) main_usb_pane_t3

0x2ecb,	// (0x000665cc) main_usb_pane_t4_ParamLimits

0x2ecb,	// (0x000665cc) main_usb_pane_t4

0x2edd,	// (0x000665de) main_usb_pane_t5_ParamLimits

0x2edd,	// (0x000665de) main_usb_pane_t5

0x2eef,	// (0x000665f0) main_usb_pane_t6_ParamLimits

0x2eef,	// (0x000665f0) main_usb_pane_t6

0x0005,

0xf504,	// (0x00072c05) main_usb_pane_t_ParamLimits

0x23d0,	// (0x00065ad1) aid_text_placing

0x23d9,	// (0x00065ada) main_location2_pane_t1_ParamLimits

0x23eb,	// (0x00065aec) main_location2_pane_t2_ParamLimits

0x23fd,	// (0x00065afe) main_location2_pane_t3_ParamLimits

0x240f,	// (0x00065b10) main_location2_pane_t4_ParamLimits

0x240f,	// (0x00065b10) main_location2_pane_t4

0xf31e,	// (0x00072a1f) main_location2_pane_t_ParamLimits

0xa7c6,	// (0x0006dec7) find_pinb_pane_g2_ParamLimits

0xa7c6,	// (0x0006dec7) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x0007279b) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x0007279b) find_pinb_pane_g

0xa7d2,	// (0x0006ded3) find_pinb_pane_t1_ParamLimits

0xa7e4,	// (0x0006dee5) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x000727a0) find_pinb_pane_t_ParamLimits

0xa52f,	// (0x0006dc30) main_call3_pane

0x1ba8,	// (0x000652a9) cale_month_day_heading_pane_t1_ParamLimits

0x1c2e,	// (0x0006532f) cale_month_day_heading_pane_t2_ParamLimits

0x1ca7,	// (0x000653a8) cale_month_day_heading_pane_t3_ParamLimits

0x1d20,	// (0x00065421) cale_month_day_heading_pane_t4_ParamLimits

0x1da1,	// (0x000654a2) cale_month_day_heading_pane_t5_ParamLimits

0x1e2a,	// (0x0006552b) cale_month_day_heading_pane_t6_ParamLimits

0x1eb3,	// (0x000655b4) cale_month_day_heading_pane_t7_ParamLimits

0xf21a,	// (0x0007291b) cale_month_day_heading_pane_t_ParamLimits

0xae4c,	// (0x0006e54d) smil_status_volume_pane

0x2912,	// (0x00066013) postcard_address_pane_ParamLimits

0x2912,	// (0x00066013) postcard_address_pane

0x2924,	// (0x00066025) postcard_message_pane_ParamLimits

0x2924,	// (0x00066025) postcard_message_pane

0x2e5d,	// (0x0006655e) call2_cli_visual_pane_t1_ParamLimits

0x2e5d,	// (0x0006655e) call2_cli_visual_pane_t1

0xde08,	// (0x00071509) postcard_message_pane_t1_ParamLimits

0xde08,	// (0x00071509) postcard_message_pane_t1

0xddf0,	// (0x000714f1) postcard_address_pane_t1_ParamLimits

0xddf0,	// (0x000714f1) postcard_address_pane_t1

0x35ed,	// (0x00066cee) popup_call3_audio_in_window_ParamLimits

0x35ed,	// (0x00066cee) popup_call3_audio_in_window

0x3478,	// (0x00066b79) bg_popup_call3_in_pane_ParamLimits

0x3478,	// (0x00066b79) bg_popup_call3_in_pane

0x34ee,	// (0x00066bef) popup_call3_audio_in_window_g1_ParamLimits

0x34ee,	// (0x00066bef) popup_call3_audio_in_window_g1

0x350e,	// (0x00066c0f) popup_call3_audio_in_window_g2_ParamLimits

0x350e,	// (0x00066c0f) popup_call3_audio_in_window_g2

0x352e,	// (0x00066c2f) popup_call3_audio_in_window_g3_ParamLimits

0x352e,	// (0x00066c2f) popup_call3_audio_in_window_g3

0x0003,

0xf561,	// (0x00072c62) popup_call3_audio_in_window_g_ParamLimits

0xf561,	// (0x00072c62) popup_call3_audio_in_window_g

0x355f,	// (0x00066c60) popup_call3_audio_in_window_t1_ParamLimits

0x355f,	// (0x00066c60) popup_call3_audio_in_window_t1

0x359d,	// (0x00066c9e) popup_call3_audio_in_window_t2_ParamLimits

0x359d,	// (0x00066c9e) popup_call3_audio_in_window_t2

0x35db,	// (0x00066cdc) popup_call3_audio_in_window_t3_ParamLimits

0x35db,	// (0x00066cdc) popup_call3_audio_in_window_t3

0x0002,

0xf56a,	// (0x00072c6b) popup_call3_audio_in_window_t_ParamLimits

0xf56a,	// (0x00072c6b) popup_call3_audio_in_window_t

0xaaec,	// (0x0006e1ed) bg_popup_call3_rect_pane

0xdbe9,	// (0x000712ea) bg_popup_call3_rect_pane_g1

0xa9ab,	// (0x0006e0ac) bg_popup_call3_rect_pane_g2

0xdbf1,	// (0x000712f2) bg_popup_call3_rect_pane_g3

0xdbf9,	// (0x000712fa) bg_popup_call3_rect_pane_g4

0xdc01,	// (0x00071302) bg_popup_call3_rect_pane_g5

0xdc09,	// (0x0007130a) bg_popup_call3_rect_pane_g6

0xdc11,	// (0x00071312) bg_popup_call3_rect_pane_g7

0xa08d,	// (0x0006d78e) mup_visualizer_osc_pane

0xa08d,	// (0x0006d78e) mup_visualizer_spec_pane

0x34a8,	// (0x00066ba9) call3_video_qcif_pane_ParamLimits

0x34a8,	// (0x00066ba9) call3_video_qcif_pane

0x34bb,	// (0x00066bbc) call3_video_qcif_uncrop_pane_ParamLimits

0x34bb,	// (0x00066bbc) call3_video_qcif_uncrop_pane

0x34c9,	// (0x00066bca) call3_video_subqcif_pane_ParamLimits

0x34c9,	// (0x00066bca) call3_video_subqcif_pane

0x34dd,	// (0x00066bde) call3_video_subqcif_uncrop_pane_ParamLimits

0x34dd,	// (0x00066bde) call3_video_subqcif_uncrop_pane

0x354e,	// (0x00066c4f) popup_call3_audio_in_window_g4_ParamLimits

0x354e,	// (0x00066c4f) popup_call3_audio_in_window_g4

0xa08d,	// (0x0006d78e) mup_spec_half_pane

0xa08d,	// (0x0006d78e) mup_spec_half_pane_cp

0xa08d,	// (0x0006d78e) mup_osc_middle_pane

0xab2c,	// (0x0006e22d) mup_visualizer_osc_pane_g1

0xdda3,	// (0x000714a4) mup_spec_bar_pane_ParamLimits

0xdda3,	// (0x000714a4) mup_spec_bar_pane

0xab2c,	// (0x0006e22d) mup_spec_bar_pane_g1

0xab2c,	// (0x0006e22d) mup_spec_bar_pane_g2

0x0001,

0xf398,	// (0x00072a99) mup_spec_bar_pane_g

0x0a60,	// (0x00064161) aid_cale_week_size_cell_pane_ParamLimits

0x0a7a,	// (0x0006417b) bg_cale_heading_pane_ParamLimits

0xaa4e,	// (0x0006e14f) bg_cale_pane_cp01_ParamLimits

0x0a92,	// (0x00064193) cale_week_corner_pane_ParamLimits

0x0ab1,	// (0x000641b2) cale_week_day_heading_pane_ParamLimits

0x0ace,	// (0x000641cf) cale_week_scroll_pane_g1_ParamLimits

0x0ae1,	// (0x000641e2) cale_week_scroll_pane_g2_ParamLimits

0x0af9,	// (0x000641fa) cale_week_scroll_pane_g3_ParamLimits

0x0b11,	// (0x00064212) cale_week_scroll_pane_g4_ParamLimits

0x0b29,	// (0x0006422a) cale_week_scroll_pane_g5_ParamLimits

0x0b49,	// (0x0006424a) cale_week_scroll_pane_g6_ParamLimits

0x0b69,	// (0x0006426a) cale_week_scroll_pane_g7_ParamLimits

0x0b89,	// (0x0006428a) cale_week_scroll_pane_g8_ParamLimits

0x0bad,	// (0x000642ae) cale_week_scroll_pane_g9_ParamLimits

0x0bc5,	// (0x000642c6) cale_week_scroll_pane_g10_ParamLimits

0x0bdd,	// (0x000642de) cale_week_scroll_pane_g11_ParamLimits

0x0bf5,	// (0x000642f6) cale_week_scroll_pane_g12_ParamLimits

0x0c0d,	// (0x0006430e) cale_week_scroll_pane_g13_ParamLimits

0x0c0d,	// (0x0006430e) cale_week_scroll_pane_g14_ParamLimits

0x0c0d,	// (0x0006430e) cale_week_scroll_pane_g15_ParamLimits

0xf12b,	// (0x0007282c) cale_week_scroll_pane_g_ParamLimits

0x0c49,	// (0x0006434a) cale_week_time_pane_ParamLimits

0x0c6d,	// (0x0006436e) grid_cale_week_pane_ParamLimits

0xaa6b,	// (0x0006e16c) listscroll_cale_week_pane_t1

0xaa7d,	// (0x0006e17e) scroll_pane_cp08_ParamLimits

0x171d,	// (0x00064e1e) cale_month_corner_pane_ParamLimits

0xae16,	// (0x0006e517) cale_month_pane_t1

0x1b3b,	// (0x0006523c) cale_month_week_pane_ParamLimits

0x2250,	// (0x00065951) popup_call_status_window_g1_ParamLimits

0x2264,	// (0x00065965) popup_call_status_window_g2_ParamLimits

0x2278,	// (0x00065979) popup_call_status_window_g3_ParamLimits

0xf2a5,	// (0x000729a6) popup_call_status_window_g_ParamLimits

0xb20c,	// (0x0006e90d) aid_call2_pane

0x2761,	// (0x00065e62) msg_header_pane_g1

0x2912,	// (0x00066013) postcard_address2_pane_ParamLimits

0x2912,	// (0x00066013) postcard_address2_pane

0x2924,	// (0x00066025) postcard_message2_pane_ParamLimits

0x2924,	// (0x00066025) postcard_message2_pane

0x3449,	// (0x00066b4a) message2_row_pane_ParamLimits

0x3449,	// (0x00066b4a) message2_row_pane

0x3465,	// (0x00066b66) address2_row_pane_ParamLimits

0x3465,	// (0x00066b66) address2_row_pane

0xdd70,	// (0x00071471) postcard_message2_row_pane_g1

0xdd78,	// (0x00071479) postcard_message2_row_pane_t1

0xdd70,	// (0x00071471) address2_row_pane_g1

0xdd78,	// (0x00071479) address2_row_pane_t1

0x0f9d,	// (0x0006469e) aid_size_cell_vorec

0xa52f,	// (0x0006dc30) main_rss_pane

0xdd86,	// (0x00071487) rss_list_single_pane_ParamLimits

0xdd86,	// (0x00071487) rss_list_single_pane

0xdd94,	// (0x00071495) rss_list_single_pane_t1

0xdd94,	// (0x00071495) rss_list_single_pane_t2

0x0001,

0xf555,	// (0x00072c56) rss_list_single_pane_t

0xa52f,	// (0x0006dc30) main_camera2_pane

0xa52f,	// (0x0006dc30) main_video2_pane

0xb86b,	// (0x0006ef6c) cams_zoom_pane_cp2_ParamLimits

0xb86b,	// (0x0006ef6c) cams_zoom_pane_cp2

0xb86b,	// (0x0006ef6c) image2_vga_pane_ParamLimits

0xb86b,	// (0x0006ef6c) image2_vga_pane

0xb879,	// (0x0006ef7a) main_camera2_pane_g1_ParamLimits

0xb879,	// (0x0006ef7a) main_camera2_pane_g1

0xb879,	// (0x0006ef7a) main_camera2_pane_g2_ParamLimits

0xb879,	// (0x0006ef7a) main_camera2_pane_g2

0xb879,	// (0x0006ef7a) main_camera2_pane_g3_ParamLimits

0xb879,	// (0x0006ef7a) main_camera2_pane_g3

0xb879,	// (0x0006ef7a) main_camera2_pane_g4_ParamLimits

0xb879,	// (0x0006ef7a) main_camera2_pane_g4

0xb879,	// (0x0006ef7a) main_camera2_pane_g5_ParamLimits

0xb879,	// (0x0006ef7a) main_camera2_pane_g5

0xb879,	// (0x0006ef7a) main_camera2_pane_g6_ParamLimits

0xb879,	// (0x0006ef7a) main_camera2_pane_g6

0xb879,	// (0x0006ef7a) main_camera2_pane_g7_ParamLimits

0xb879,	// (0x0006ef7a) main_camera2_pane_g7

0xb879,	// (0x0006ef7a) main_camera2_pane_g8_ParamLimits

0xb879,	// (0x0006ef7a) main_camera2_pane_g8

0x0008,

0xf571,	// (0x00072c72) main_camera2_pane_g_ParamLimits

0xf571,	// (0x00072c72) main_camera2_pane_g

0x360f,	// (0x00066d10) main_camera2_pane_t1_ParamLimits

0x360f,	// (0x00066d10) main_camera2_pane_t1

0x360f,	// (0x00066d10) main_camera2_pane_t2_ParamLimits

0x360f,	// (0x00066d10) main_camera2_pane_t2

0x360f,	// (0x00066d10) main_camera2_pane_t3_ParamLimits

0x360f,	// (0x00066d10) main_camera2_pane_t3

0x360f,	// (0x00066d10) main_camera2_pane_t4_ParamLimits

0x360f,	// (0x00066d10) main_camera2_pane_t4

0x0006,

0xf584,	// (0x00072c85) main_camera2_pane_t_ParamLimits

0xf584,	// (0x00072c85) main_camera2_pane_t

0xb8bd,	// (0x0006efbe) cams_zoom_pane_cp4_ParamLimits

0xb8bd,	// (0x0006efbe) cams_zoom_pane_cp4

0x3623,	// (0x00066d24) image2_cif_pane_ParamLimits

0x3623,	// (0x00066d24) image2_cif_pane

0xa104,	// (0x0006d805) image2_subqcif_pane_ParamLimits

0xa104,	// (0x0006d805) image2_subqcif_pane

0x3631,	// (0x00066d32) main_video2_pane_g1_ParamLimits

0x3631,	// (0x00066d32) main_video2_pane_g1

0x3631,	// (0x00066d32) main_video2_pane_g2_ParamLimits

0x3631,	// (0x00066d32) main_video2_pane_g2

0x3631,	// (0x00066d32) main_video2_pane_g3_ParamLimits

0x3631,	// (0x00066d32) main_video2_pane_g3

0x3631,	// (0x00066d32) main_video2_pane_g4_ParamLimits

0x3631,	// (0x00066d32) main_video2_pane_g4

0x3631,	// (0x00066d32) main_video2_pane_g5_ParamLimits

0x3631,	// (0x00066d32) main_video2_pane_g5

0x3631,	// (0x00066d32) main_video2_pane_g6_ParamLimits

0x3631,	// (0x00066d32) main_video2_pane_g6

0x0005,

0xf593,	// (0x00072c94) main_video2_pane_g_ParamLimits

0xf593,	// (0x00072c94) main_video2_pane_g

0x363f,	// (0x00066d40) main_video2_pane_t1_ParamLimits

0x363f,	// (0x00066d40) main_video2_pane_t1

0x363f,	// (0x00066d40) main_video2_pane_t2_ParamLimits

0x363f,	// (0x00066d40) main_video2_pane_t2

0x363f,	// (0x00066d40) main_video2_pane_t3_ParamLimits

0x363f,	// (0x00066d40) main_video2_pane_t3

0x0002,

0xf5a0,	// (0x00072ca1) main_video2_pane_t_ParamLimits

0xf5a0,	// (0x00072ca1) main_video2_pane_t

0x2f83,	// (0x00066684) call_muted_g2

0x0001,

0xf547,	// (0x00072c48) call_muted_g

0xa52f,	// (0x0006dc30) main_mup2_pane

0xb6c0,	// (0x0006edc1) main_mup2_pane_g1_ParamLimits

0xb6c0,	// (0x0006edc1) main_mup2_pane_g1

0xb6c0,	// (0x0006edc1) main_mup2_pane_g2_ParamLimits

0xb6c0,	// (0x0006edc1) main_mup2_pane_g2

0x3700,	// (0x00066e01) main_mup_pane_g13_cp1

0xa112,	// (0x0006d813) mup_volume_pane_cp1

0xb6c0,	// (0x0006edc1) main_mup2_pane_g4_ParamLimits

0xb6c0,	// (0x0006edc1) main_mup2_pane_g4

0xb6c0,	// (0x0006edc1) main_mup2_pane_g5_ParamLimits

0xb6c0,	// (0x0006edc1) main_mup2_pane_g5

0xb6c0,	// (0x0006edc1) main_mup2_pane_g6_ParamLimits

0xb6c0,	// (0x0006edc1) main_mup2_pane_g6

0xb6c0,	// (0x0006edc1) main_mup2_pane_g7_ParamLimits

0xb6c0,	// (0x0006edc1) main_mup2_pane_g7

0x0006,

0xf5a7,	// (0x00072ca8) main_mup2_pane_g_ParamLimits

0xf5a7,	// (0x00072ca8) main_mup2_pane_g

0xb6ce,	// (0x0006edcf) main_mup2_pane_t1_ParamLimits

0xb6ce,	// (0x0006edcf) main_mup2_pane_t1

0xb6ce,	// (0x0006edcf) main_mup2_pane_t2_ParamLimits

0xb6ce,	// (0x0006edcf) main_mup2_pane_t2

0xb6ce,	// (0x0006edcf) main_mup2_pane_t3_ParamLimits

0xb6ce,	// (0x0006edcf) main_mup2_pane_t3

0xb6ce,	// (0x0006edcf) main_mup2_pane_t4_ParamLimits

0xb6ce,	// (0x0006edcf) main_mup2_pane_t4

0xb6ce,	// (0x0006edcf) main_mup2_pane_t5_ParamLimits

0xb6ce,	// (0x0006edcf) main_mup2_pane_t5

0xb6ce,	// (0x0006edcf) main_mup2_pane_t6_ParamLimits

0xb6ce,	// (0x0006edcf) main_mup2_pane_t6

0x0005,

0xf5b6,	// (0x00072cb7) main_mup2_pane_t_ParamLimits

0xf5b6,	// (0x00072cb7) main_mup2_pane_t

0xb6f6,	// (0x0006edf7) mup2_visualizer_pane_ParamLimits

0xb6f6,	// (0x0006edf7) mup2_visualizer_pane

0xb6f6,	// (0x0006edf7) mup_progress_pane_cp_ParamLimits

0xb6f6,	// (0x0006edf7) mup_progress_pane_cp

0xb8e1,	// (0x0006efe2) mup_volume_pane_cp_ParamLimits

0xb8e1,	// (0x0006efe2) mup_volume_pane_cp

0xa813,	// (0x0006df14) mup2_visualizer_pane_g1_ParamLimits

0xa813,	// (0x0006df14) mup2_visualizer_pane_g1

0xa821,	// (0x0006df22) mup2_visualizer_pane_g2_ParamLimits

0xa821,	// (0x0006df22) mup2_visualizer_pane_g2

0xa821,	// (0x0006df22) mup2_visualizer_pane_g3_ParamLimits

0xa821,	// (0x0006df22) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x000727a5) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x000727a5) mup2_visualizer_pane_g

0xcce4,	// (0x000703e5) aid_size_cell_fmradio

0x3135,	// (0x00066836) aid_height_parent_landcape

0xac74,	// (0x0006e375) wml_content_pane_cp

0xac7c,	// (0x0006e37d) wml_tabs_pane

0xac85,	// (0x0006e386) popup_wml_miniature_window

0xac8d,	// (0x0006e38e) scroll_pane_cp021

0xaca1,	// (0x0006e3a2) wml_content_pane_comp8

0xa52f,	// (0x0006dc30) bg_popup_sub_pane_cp05

0xde3a,	// (0x0007153b) popup_wml_miniature_window_g1

0xde42,	// (0x00071543) wml_miniature_view_pane

0x3653,	// (0x00066d54) aid_size_wml_view

0x365b,	// (0x00066d5c) wml_miniature_view_pane_g1

0x3664,	// (0x00066d65) wml_miniature_view_pane_g2

0x366d,	// (0x00066d6e) wml_miniature_view_pane_g3

0x3675,	// (0x00066d76) wml_miniature_view_pane_g4

0x367d,	// (0x00066d7e) wml_miniature_view_pane_g5

0x3685,	// (0x00066d86) wml_miniature_view_pane_g6

0x368d,	// (0x00066d8e) wml_miniature_view_pane_g7

0x3695,	// (0x00066d96) wml_miniature_view_pane_g8

0x0007,

0xf5c3,	// (0x00072cc4) wml_miniature_view_pane_g

0xde4a,	// (0x0007154b) background_graphic_ParamLimits

0xde4a,	// (0x0007154b) background_graphic

0xde56,	// (0x00071557) wml_tabs_2_pane

0xde5f,	// (0x00071560) wml_tabs_3_pane_ParamLimits

0xde5f,	// (0x00071560) wml_tabs_3_pane

0xde71,	// (0x00071572) wml_tabs_4_pane_ParamLimits

0xde71,	// (0x00071572) wml_tabs_4_pane

0xde87,	// (0x00071588) wml_tabs_5_pane_ParamLimits

0xde87,	// (0x00071588) wml_tabs_5_pane

0xdea1,	// (0x000715a2) wml_tabs_pane_g2_ParamLimits

0xdea1,	// (0x000715a2) wml_tabs_pane_g2

0xdeb6,	// (0x000715b7) wml_tabs_pane_g3_ParamLimits

0xdeb6,	// (0x000715b7) wml_tabs_pane_g3

0xdecb,	// (0x000715cc) wml_tabs_2_active_pane_ParamLimits

0xdecb,	// (0x000715cc) wml_tabs_2_active_pane

0xdecb,	// (0x000715cc) wml_tabs_2_passive_pane_ParamLimits

0xdecb,	// (0x000715cc) wml_tabs_2_passive_pane

0x369d,	// (0x00066d9e) wml_tabs_3_active_pane_cp_ParamLimits

0x369d,	// (0x00066d9e) wml_tabs_3_active_pane_cp

0x36b2,	// (0x00066db3) wml_tabs_3_passive_pane_ParamLimits

0x36b2,	// (0x00066db3) wml_tabs_3_passive_pane

0x36c5,	// (0x00066dc6) wml_tabs_3_passive_pane_cp_ParamLimits

0x36c5,	// (0x00066dc6) wml_tabs_3_passive_pane_cp

0x36dc,	// (0x00066ddd) tabs_4_active_pane

0x36e4,	// (0x00066de5) tabs_4_passive_pane

0x36ee,	// (0x00066def) tabs_4_passive_pane_cp

0x36f6,	// (0x00066df7) tabs_4_passive_pane_cp2

0x2e77,	// (0x00066578) aid_height_text

0xb6f6,	// (0x0006edf7) mup_volume_cont_pane_ParamLimits

0xb6f6,	// (0x0006edf7) mup_volume_cont_pane

0xa08d,	// (0x0006d78e) aid_size_cell_pinb

0xa08d,	// (0x0006d78e) aid_size_list_pinb

0xb6f6,	// (0x0006edf7) mup2_volume_cont_pane_ParamLimits

0xb6f6,	// (0x0006edf7) mup2_volume_cont_pane

0xb8cb,	// (0x0006efcc) mup2_volume_cont_pane_g1_ParamLimits

0xb8cb,	// (0x0006efcc) mup2_volume_cont_pane_g1

0x04c8,	// (0x00063bc9) aid_size_cell_touch_ParamLimits

0x04c8,	// (0x00063bc9) aid_size_cell_touch

0x068e,	// (0x00063d8f) touch_pane_ParamLimits

0x068e,	// (0x00063d8f) touch_pane

0xa112,	// (0x0006d813) main_rss2_pane

0xdee2,	// (0x000715e3) listscroll_rss2_pane

0xdeeb,	// (0x000715ec) rss2_navigation_pane

0xdef3,	// (0x000715f4) list_rss2_pane

0xb3b6,	// (0x0006eab7) scroll_pane_cp22

0xdefb,	// (0x000715fc) rss2_navigation_pane_g1

0xdf04,	// (0x00071605) rss2_navigation_pane_g2

0xdf0c,	// (0x0007160d) rss2_navigation_pane_g3

0x0002,

0xf5d4,	// (0x00072cd5) rss2_navigation_pane_g

0xdf14,	// (0x00071615) rss2_navigation_pane_t1

0x370a,	// (0x00066e0b) rss2_list_single_pane_ParamLimits

0x370a,	// (0x00066e0b) rss2_list_single_pane

0xdf22,	// (0x00071623) rss2_list_single_pane_t2

0xdf30,	// (0x00071631) rss2_list_single_pane_t3_ParamLimits

0xdf30,	// (0x00071631) rss2_list_single_pane_t3

0xdf4d,	// (0x0007164e) rss2_list_single_pane_t4

0x213d,	// (0x0006583e) smil_status_pane_g1

0xa104,	// (0x0006d805) main_image2_pane_ParamLimits

0xa104,	// (0x0006d805) main_image2_pane

0xb879,	// (0x0006ef7a) main_camera2_pane_g9_ParamLimits

0xb879,	// (0x0006ef7a) main_camera2_pane_g9

0x360f,	// (0x00066d10) main_camera2_pane_t5_ParamLimits

0x360f,	// (0x00066d10) main_camera2_pane_t5

0xb887,	// (0x0006ef88) main_camera2_pane_t6_ParamLimits

0xb887,	// (0x0006ef88) main_camera2_pane_t6

0x371f,	// (0x00066e20) main_image2_pane_g1_ParamLimits

0x371f,	// (0x00066e20) main_image2_pane_g1

0x2b4b,	// (0x0006624c) smil2_video_pane_ParamLimits

0x2b4b,	// (0x0006624c) smil2_video_pane

0xa0bb,	// (0x0006d7bc) aid_zoom_text_primary_cp

0xa0fa,	// (0x0006d7fb) popup_preview_fixed_window

0xabdd,	// (0x0006e2de) im_reading_pane_g1

0x3601,	// (0x00066d02) cams2_bc_adjust_pane_cp_ParamLimits

0x3601,	// (0x00066d02) cams2_bc_adjust_pane_cp

0xb8af,	// (0x0006efb0) cams2_bc_adjust_pane_ParamLimits

0xb8af,	// (0x0006efb0) cams2_bc_adjust_pane

0x3700,	// (0x00066e01) cams2_bc_adjust_pane_g1

0xa112,	// (0x0006d813) cams2_slider_pane

0x3700,	// (0x00066e01) cams2_slider_pane_g1

0x3700,	// (0x00066e01) cams2_slider_pane_g2

0x0006,

0xf5db,	// (0x00072cdc) cams2_slider_pane_g

0x0756,	// (0x00063e57) calc_display_pane_ParamLimits

0x077b,	// (0x00063e7c) calc_paper_pane_ParamLimits

0x079e,	// (0x00063e9f) grid_calc_pane_ParamLimits

0xb272,	// (0x0006e973) popup_clock_digital_window_t1_ParamLimits

0xcc81,	// (0x00070382) main_image_pane_t1

0x0738,	// (0x00063e39) aid_size_cell_calc_ParamLimits

0x0738,	// (0x00063e39) aid_size_cell_calc

0x318d,	// (0x0006688e) popup_blid_sat_info2_window_ParamLimits

0x318d,	// (0x0006688e) popup_blid_sat_info2_window

0xdf5b,	// (0x0007165c) aid_size_cell_blid

0xd678,	// (0x00070d79) bg_popup_window_pane_cp07

0xdf78,	// (0x00071679) grid_popup_blid_pane

0xdf82,	// (0x00071683) heading_pane_cp05_ParamLimits

0xdf82,	// (0x00071683) heading_pane_cp05

0xe04c,	// (0x0007174d) cell_popup_blid_pane_ParamLimits

0xe04c,	// (0x0007174d) cell_popup_blid_pane

0xe070,	// (0x00071771) cell_popup_blid_pane_g1

0xe078,	// (0x00071779) cell_popup_blid_pane_t1

0xb6f6,	// (0x0006edf7) mup2_indicator_pane_ParamLimits

0xb6f6,	// (0x0006edf7) mup2_indicator_pane

0xa08d,	// (0x0006d78e) mup2_visualizer_osc_pane

0xde24,	// (0x00071525) mup2_visualizer_spec_pane_ParamLimits

0xde24,	// (0x00071525) mup2_visualizer_spec_pane

0xa08d,	// (0x0006d78e) mup2_spec_half_pane

0xa08d,	// (0x0006d78e) mup2_spec_half_pane_cp

0xe086,	// (0x00071787) mup2_spec_bar_pane_ParamLimits

0xe086,	// (0x00071787) mup2_spec_bar_pane

0xab2c,	// (0x0006e22d) mup2_spec_bar_pane_g1

0xe0a5,	// (0x000717a6) mup2_spec_bar_pane_g2

0x0001,

0xf601,	// (0x00072d02) mup2_spec_bar_pane_g

0xa08d,	// (0x0006d78e) mup2_osc_middle_pane

0xab2c,	// (0x0006e22d) mup2_visualizer_osc_pane_g1

0xa13c,	// (0x0006d83d) popup_number_entry_window_t1_ParamLimits

0xa14f,	// (0x0006d850) popup_number_entry_window_t2_ParamLimits

0xa161,	// (0x0006d862) popup_number_entry_window_t3_ParamLimits

0x06e0,	// (0x00063de1) popup_number_entry_window_t5_ParamLimits

0x06e0,	// (0x00063de1) popup_number_entry_window_t5

0xf045,	// (0x00072746) popup_number_entry_window_t_ParamLimits

0xa173,	// (0x0006d874) text_title_cp2_ParamLimits

0xb7cf,	// (0x0006eed0) aid_hotspot_pointer_text2_pane

0xb7e9,	// (0x0006eeea) main_viewer_pane_g9_ParamLimits

0xb7e9,	// (0x0006eeea) main_viewer_pane_g9

0xae16,	// (0x0006e517) cale_month_pane_t1_ParamLimits

0xae81,	// (0x0006e582) bg_cale_pane_ParamLimits

0xae99,	// (0x0006e59a) list_cale_pane_ParamLimits

0xaeaa,	// (0x0006e5ab) listscroll_cale_day_pane_t1

0xaebc,	// (0x0006e5bd) scroll_pane_cp09_ParamLimits

0x24fa,	// (0x00065bfb) main_mup_eq_pane_t1_ParamLimits

0x24fa,	// (0x00065bfb) main_mup_eq_pane_t1

0x2514,	// (0x00065c15) main_mup_eq_pane_t2_ParamLimits

0x2514,	// (0x00065c15) main_mup_eq_pane_t2

0x252e,	// (0x00065c2f) main_mup_eq_pane_t3_ParamLimits

0x252e,	// (0x00065c2f) main_mup_eq_pane_t3

0x254a,	// (0x00065c4b) main_mup_eq_pane_t4_ParamLimits

0x254a,	// (0x00065c4b) main_mup_eq_pane_t4

0x2566,	// (0x00065c67) main_mup_eq_pane_t5_ParamLimits

0x2566,	// (0x00065c67) main_mup_eq_pane_t5

0x2582,	// (0x00065c83) main_mup_eq_pane_t6_ParamLimits

0x2582,	// (0x00065c83) main_mup_eq_pane_t6

0x2596,	// (0x00065c97) main_mup_eq_pane_t7_ParamLimits

0x2596,	// (0x00065c97) main_mup_eq_pane_t7

0x25aa,	// (0x00065cab) main_mup_eq_pane_t8_ParamLimits

0x25aa,	// (0x00065cab) main_mup_eq_pane_t8

0x25be,	// (0x00065cbf) main_mup_eq_pane_t9_ParamLimits

0x25be,	// (0x00065cbf) main_mup_eq_pane_t9

0x25d8,	// (0x00065cd9) main_mup_eq_pane_t10_ParamLimits

0x25d8,	// (0x00065cd9) main_mup_eq_pane_t10

0x0009,

0xf3a4,	// (0x00072aa5) main_mup_eq_pane_t_ParamLimits

0xf3a4,	// (0x00072aa5) main_mup_eq_pane_t

0x2687,	// (0x00065d88) mup_equalizer_pane_cp5_ParamLimits

0x269b,	// (0x00065d9c) mup_equalizer_pane_cp6_ParamLimits

0x26af,	// (0x00065db0) mup_equalizer_pane_cp7_ParamLimits

0xa112,	// (0x0006d813) main_gallery_pane

0xddc2,	// (0x000714c3) smil2_volume_pane

0xddca,	// (0x000714cb) smil_status_volume_pane_g1_ParamLimits

0xdddd,	// (0x000714de) smil_status_volume_pane_g2_ParamLimits

0xb849,	// (0x0006ef4a) smil_status_volume_pane_g3_ParamLimits

0xf55a,	// (0x00072c5b) smil_status_volume_pane_g_ParamLimits

0xd678,	// (0x00070d79) bg_popup_window_pane_cp07_ParamLimits

0xdf63,	// (0x00071664) blid_firmament_pane

0xa7ac,	// (0x0006dead) aid_size_cell_gallery_ParamLimits

0xa7ac,	// (0x0006dead) aid_size_cell_gallery

0xa7ac,	// (0x0006dead) grid_gallery_pane_ParamLimits

0xa7ac,	// (0x0006dead) grid_gallery_pane

0xd678,	// (0x00070d79) cell_gallery_pane_ParamLimits

0xd678,	// (0x00070d79) cell_gallery_pane

0xa7ac,	// (0x0006dead) bg_cell_gallery_focus_pane_ParamLimits

0xa7ac,	// (0x0006dead) bg_cell_gallery_focus_pane

0xa813,	// (0x0006df14) cell_gallery_pane_g1_ParamLimits

0xa813,	// (0x0006df14) cell_gallery_pane_g1

0xa813,	// (0x0006df14) cell_gallery_pane_g2_ParamLimits

0xa813,	// (0x0006df14) cell_gallery_pane_g2

0xa813,	// (0x0006df14) cell_gallery_pane_g3_ParamLimits

0xa813,	// (0x0006df14) cell_gallery_pane_g3

0xa821,	// (0x0006df22) cell_gallery_pane_g4_ParamLimits

0xa821,	// (0x0006df22) cell_gallery_pane_g4

0x0003,

0xf606,	// (0x00072d07) cell_gallery_pane_g_ParamLimits

0xf606,	// (0x00072d07) cell_gallery_pane_g

0xe0af,	// (0x000717b0) bg_cell_gallery_focus_pane_g1

0xe0b7,	// (0x000717b8) bg_cell_gallery_focus_pane_g2

0xe0bf,	// (0x000717c0) bg_cell_gallery_focus_pane_g3

0xe0c7,	// (0x000717c8) bg_cell_gallery_focus_pane_g4

0xe0cf,	// (0x000717d0) bg_cell_gallery_focus_pane_g5

0xe0d7,	// (0x000717d8) bg_cell_gallery_focus_pane_g6

0xe0df,	// (0x000717e0) bg_cell_gallery_focus_pane_g7

0xe0e7,	// (0x000717e8) bg_cell_gallery_focus_pane_g8

0x0007,

0xf60f,	// (0x00072d10) bg_cell_gallery_focus_pane_g

0xe0ef,	// (0x000717f0) aid_firma_cardinal

0xe103,	// (0x00071804) blid_firmament_pane_t1

0xe11a,	// (0x0007181b) blid_firmament_pane_t2

0xe131,	// (0x00071832) blid_firmament_pane_t3

0xe148,	// (0x00071849) blid_firmament_pane_t4

0x0003,

0xf620,	// (0x00072d21) blid_firmament_pane_t

0xe15f,	// (0x00071860) blid_sat_info_pane

0xab2c,	// (0x0006e22d) blid_sat_info_pane_g1

0xab2c,	// (0x0006e22d) blid_sat_info_pane_g2

0x0001,

0xf398,	// (0x00072a99) blid_sat_info_pane_g

0xe16f,	// (0x00071870) blid_sat_info_pane_t1

0xe17d,	// (0x0007187e) smil2_volume_content_pane

0xe186,	// (0x00071887) smil2_volume_pane_g1

0xa942,	// (0x0006e043) smil2_volume_content_pane_g1

0xe18e,	// (0x0007188f) smil2_volume_content_pane_g2

0xe197,	// (0x00071898) smil2_volume_content_pane_g3

0xe1a0,	// (0x000718a1) smil2_volume_content_pane_g4

0xe1a9,	// (0x000718aa) smil2_volume_content_pane_g5

0xe1b2,	// (0x000718b3) smil2_volume_content_pane_g6

0xe1bb,	// (0x000718bc) smil2_volume_content_pane_g7

0xe1fc,	// (0x000718fd) smil2_volume_content_pane_g8

0xe205,	// (0x00071906) smil2_volume_content_pane_g9

0xe20e,	// (0x0007190f) smil2_volume_content_pane_g10

0x0009,

0xf629,	// (0x00072d2a) smil2_volume_content_pane_g

0x0d21,	// (0x00064422) cale_week_day_heading_pane_t1_ParamLimits

0x0d4b,	// (0x0006444c) cale_week_day_heading_pane_t2_ParamLimits

0x0d7a,	// (0x0006447b) cale_week_day_heading_pane_t3_ParamLimits

0x0da9,	// (0x000644aa) cale_week_day_heading_pane_t4_ParamLimits

0x0dd8,	// (0x000644d9) cale_week_day_heading_pane_t5_ParamLimits

0x0e0f,	// (0x00064510) cale_week_day_heading_pane_t6_ParamLimits

0x0e46,	// (0x00064547) cale_week_day_heading_pane_t7_ParamLimits

0xf14c,	// (0x0007284d) cale_week_day_heading_pane_t_ParamLimits

0xaa9a,	// (0x0006e19b) bg_cale_side_pane_ParamLimits

0x0e70,	// (0x00064571) cale_week_time_pane_t1_ParamLimits

0x0e8a,	// (0x0006458b) cale_week_time_pane_t2_ParamLimits

0x0ea4,	// (0x000645a5) cale_week_time_pane_t3_ParamLimits

0x0ebe,	// (0x000645bf) cale_week_time_pane_t4_ParamLimits

0x0ed8,	// (0x000645d9) cale_week_time_pane_t5_ParamLimits

0x0ef2,	// (0x000645f3) cale_week_time_pane_t6_ParamLimits

0x0f0c,	// (0x0006460d) cale_week_time_pane_t7_ParamLimits

0x0f26,	// (0x00064627) cale_week_time_pane_t8_ParamLimits

0xf15b,	// (0x0007285c) cale_week_time_pane_t_ParamLimits

0x0f40,	// (0x00064641) cell_cale_week_pane_g2_ParamLimits

0xaa9a,	// (0x0006e19b) bg_cale_side_pane_cp01_ParamLimits

0x1f44,	// (0x00065645) cale_month_week_pane_t1_ParamLimits

0x1f5d,	// (0x0006565e) cale_month_week_pane_t2_ParamLimits

0x1f76,	// (0x00065677) cale_month_week_pane_t3_ParamLimits

0x1f8f,	// (0x00065690) cale_month_week_pane_t4_ParamLimits

0x1fa8,	// (0x000656a9) cale_month_week_pane_t5_ParamLimits

0x1fc1,	// (0x000656c2) cale_month_week_pane_t6_ParamLimits

0xf229,	// (0x0007292a) cale_month_week_pane_t_ParamLimits

0xae28,	// (0x0006e529) cell_cale_month_pane_g1_ParamLimits

0xa112,	// (0x0006d813) main_cale_event_viewer_pane

0xa08d,	// (0x0006d78e) listscroll_cale_event_viewer_pane

0xe217,	// (0x00071918) list_cale_ev_pane

0xe21f,	// (0x00071920) scroll_pane_cp023

0xe22b,	// (0x0007192c) field_cale_ev_pane_ParamLimits

0xe22b,	// (0x0007192c) field_cale_ev_pane

0xe249,	// (0x0007194a) field_cale_ev_content_pane_ParamLimits

0xe249,	// (0x0007194a) field_cale_ev_content_pane

0xe255,	// (0x00071956) field_cale_ev_pane_g1_ParamLimits

0xe255,	// (0x00071956) field_cale_ev_pane_g1

0xe261,	// (0x00071962) field_cale_ev_pane_g2_ParamLimits

0xe261,	// (0x00071962) field_cale_ev_pane_g2

0xe279,	// (0x0007197a) field_cale_ev_pane_g3_ParamLimits

0xe279,	// (0x0007197a) field_cale_ev_pane_g3

0x0002,

0xf63e,	// (0x00072d3f) field_cale_ev_pane_g_ParamLimits

0xf63e,	// (0x00072d3f) field_cale_ev_pane_g

0xe291,	// (0x00071992) field_cale_ev_pane_t1_ParamLimits

0xe291,	// (0x00071992) field_cale_ev_pane_t1

0xa9c5,	// (0x0006e0c6) field_cale_ev_content_pane_t1_ParamLimits

0xa9c5,	// (0x0006e0c6) field_cale_ev_content_pane_t1

0xb799,	// (0x0006ee9a) bg_button_pane_cp01

0x0a4e,	// (0x0006414f) listscroll_cale_week_pane_ParamLimits

0xaa45,	// (0x0006e146) popup_toolbar_window_cp01

0xaa6b,	// (0x0006e16c) listscroll_cale_week_pane_t1_ParamLimits

0x0a4e,	// (0x0006414f) listscroll_cale_day_pane_ParamLimits

0xaa45,	// (0x0006e146) popup_toolbar_window_cp02

0xaeaa,	// (0x0006e5ab) listscroll_cale_day_pane_t1_ParamLimits

0x3153,	// (0x00066854) main_cale_month_pane_ParamLimits

0xb834,	// (0x0006ef35) popup_toolbar_window_cp03_ParamLimits

0xb834,	// (0x0006ef35) popup_toolbar_window_cp03

0x2a13,	// (0x00066114) main_image_pane_g2_ParamLimits

0x2a13,	// (0x00066114) main_image_pane_g2

0x2a24,	// (0x00066125) main_image_pane_g3_ParamLimits

0x2a24,	// (0x00066125) main_image_pane_g3

0x0002,

0xf436,	// (0x00072b37) main_image_pane_g_ParamLimits

0xf436,	// (0x00072b37) main_image_pane_g

0xcc81,	// (0x00070382) main_image_pane_t1_ParamLimits

0x2a35,	// (0x00066136) main_image_pane_t2_ParamLimits

0x2a35,	// (0x00066136) main_image_pane_t2

0x2a47,	// (0x00066148) main_image_pane_t3_ParamLimits

0x2a47,	// (0x00066148) main_image_pane_t3

0x2a6f,	// (0x00066170) main_image_pane_t4_ParamLimits

0x2a6f,	// (0x00066170) main_image_pane_t4

0x0003,

0xf43d,	// (0x00072b3e) main_image_pane_t_ParamLimits

0xf43d,	// (0x00072b3e) main_image_pane_t

0x2a8f,	// (0x00066190) popup_image_details_window_cp01

0x2a99,	// (0x0006619a) popup_toobar_trans_pane_cp01_ParamLimits

0x2a99,	// (0x0006619a) popup_toobar_trans_pane_cp01

0x326c,	// (0x0006696d) popup_image_details_window_ParamLimits

0x326c,	// (0x0006696d) popup_image_details_window

0xb807,	// (0x0006ef08) popup_image_focus_window

0xb86b,	// (0x0006ef6c) camera2_autofocus_pane_ParamLimits

0xb86b,	// (0x0006ef6c) camera2_autofocus_pane

0xa08d,	// (0x0006d78e) bg_popup_sub_pane_cp06

0xe2a8,	// (0x000719a9) popup_image_focus_window_g1

0xe2b0,	// (0x000719b1) popup_image_focus_window_g2

0xe2b8,	// (0x000719b9) popup_image_focus_window_g3

0xe2c0,	// (0x000719c1) popup_image_focus_window_g4

0x0003,

0xf645,	// (0x00072d46) popup_image_focus_window_g

0xe2c8,	// (0x000719c9) popup_image_focus_window_t1

0xe2d6,	// (0x000719d7) popup_image_focus_window_t2

0xe2e6,	// (0x000719e7) popup_image_focus_window_t3

0x0002,

0xf64e,	// (0x00072d4f) popup_image_focus_window_t

0xa813,	// (0x0006df14) camera2_autofocus_pane_g1

0xa7ac,	// (0x0006dead) bg_tb_trans_pane_cp01

0xe2f4,	// (0x000719f5) popup_image_details_window_g1

0xe307,	// (0x00071a08) popup_image_details_window_g2

0x0002,

0xf660,	// (0x00072d61) popup_image_details_window_g

0xe330,	// (0x00071a31) popup_image_details_window_t1

0xe342,	// (0x00071a43) popup_image_details_window_t2

0xe35b,	// (0x00071a5c) popup_image_details_window_t3

0xe36f,	// (0x00071a70) popup_image_details_window_t4

0xe38a,	// (0x00071a8b) popup_image_details_window_t5

0x0004,

0xf667,	// (0x00072d68) popup_image_details_window_t

0xa879,	// (0x0006df7a) bg_calc_paper_pane_ParamLimits

0xa112,	// (0x0006d813) grid_highlight_pane_cp013

0xa88d,	// (0x0006df8e) list_calc_pane_ParamLimits

0xa89f,	// (0x0006dfa0) scroll_pane_cp024

0xa8a7,	// (0x0006dfa8) bg_calc_display_pane_ParamLimits

0x089c,	// (0x00063f9d) calc_display_pane_t1_ParamLimits

0x08b1,	// (0x00063fb2) calc_display_pane_t2_ParamLimits

0xa8b3,	// (0x0006dfb4) calc_display_pane_t3_ParamLimits

0xf0cc,	// (0x000727cd) calc_display_pane_t_ParamLimits

0x0971,	// (0x00064072) cell_calc_pane_g2

0x0001,

0xf0e9,	// (0x000727ea) cell_calc_pane_g

0x097a,	// (0x0006407b) cell_calc_pane_t1

0xa920,	// (0x0006e021) grid_highlight_pane_cp02_ParamLimits

0xa936,	// (0x0006e037) toolbar_button_pane_cp01_ParamLimits

0xa936,	// (0x0006e037) toolbar_button_pane_cp01

0xccc6,	// (0x000703c7) temp_image_control_pane_ParamLimits

0xccc6,	// (0x000703c7) temp_image_control_pane

0xa104,	// (0x0006d805) main_mp3_pane

0xe3a4,	// (0x00071aa5) temp_image_control_pane_g1_ParamLimits

0xe3a4,	// (0x00071aa5) temp_image_control_pane_g1

0xe3b2,	// (0x00071ab3) temp_image_control_pane_g2_ParamLimits

0xe3b2,	// (0x00071ab3) temp_image_control_pane_g2

0xe3c4,	// (0x00071ac5) temp_image_control_pane_g3_ParamLimits

0xe3c4,	// (0x00071ac5) temp_image_control_pane_g3

0x3735,	// (0x00066e36) temp_image_control_pane_g4_ParamLimits

0x3735,	// (0x00066e36) temp_image_control_pane_g4

0x0003,

0xf672,	// (0x00072d73) temp_image_control_pane_g_ParamLimits

0xf672,	// (0x00072d73) temp_image_control_pane_g

0xe3a4,	// (0x00071aa5) main_mp3_pane_g1

0x3748,	// (0x00066e49) main_mp3_pane_g2

0x0007,

0xf67b,	// (0x00072d7c) main_mp3_pane_g

0xe3f9,	// (0x00071afa) main_mp3_pane_t1

0xa821,	// (0x0006df22) main_camera_pane_g8_ParamLimits

0xa821,	// (0x0006df22) main_camera_pane_g8

0x110a,	// (0x0006480b) main_video_pane_g7_ParamLimits

0x110a,	// (0x0006480b) main_video_pane_g7

0xb89b,	// (0x0006ef9c) main_camera2_pane_t7_ParamLimits

0xb89b,	// (0x0006ef9c) main_camera2_pane_t7

0xac34,	// (0x0006e335) scroll_pane_cp025_ParamLimits

0xac34,	// (0x0006e335) scroll_pane_cp025

0xac48,	// (0x0006e349) scroll_pane_cp026_ParamLimits

0xac48,	// (0x0006e349) scroll_pane_cp026

0xac57,	// (0x0006e358) wml_content_pane_ParamLimits

0xa112,	// (0x0006d813) main_touch_calib_pane

0x381c,	// (0x00066f1d) main_touch_calib_pane_g1

0x382e,	// (0x00066f2f) main_touch_calib_pane_g2

0x3840,	// (0x00066f41) main_touch_calib_pane_g3

0x3852,	// (0x00066f53) main_touch_calib_pane_g4

0x0003,

0xf699,	// (0x00072d9a) main_touch_calib_pane_g

0x3864,	// (0x00066f65) main_touch_calib_pane_t1

0x387e,	// (0x00066f7f) main_touch_calib_pane_t2

0x0004,

0xf6a2,	// (0x00072da3) main_touch_calib_pane_t

0xb492,	// (0x0006eb93) mup_progress_pane_cp02

0xb4c7,	// (0x0006ebc8) navi_pane_g1

0xb582,	// (0x0006ec83) navi_pane_mp_t3

0xa104,	// (0x0006d805) main_mp3_pane_ParamLimits

0x33f1,	// (0x00066af2) navi_pane_ParamLimits

0xe3a4,	// (0x00071aa5) main_mp3_pane_g1_ParamLimits

0x3748,	// (0x00066e49) main_mp3_pane_g2_ParamLimits

0x3756,	// (0x00066e57) main_mp3_pane_g3_ParamLimits

0x3756,	// (0x00066e57) main_mp3_pane_g3

0x3764,	// (0x00066e65) main_mp3_pane_g4_ParamLimits

0x3764,	// (0x00066e65) main_mp3_pane_g4

0xa813,	// (0x0006df14) main_mp3_pane_g5_ParamLimits

0xa813,	// (0x0006df14) main_mp3_pane_g5

0xe3d4,	// (0x00071ad5) main_mp3_pane_g6_ParamLimits

0xe3d4,	// (0x00071ad5) main_mp3_pane_g6

0xe3e1,	// (0x00071ae2) main_mp3_pane_g7_ParamLimits

0xe3e1,	// (0x00071ae2) main_mp3_pane_g7

0xe3ed,	// (0x00071aee) main_mp3_pane_g8_ParamLimits

0xe3ed,	// (0x00071aee) main_mp3_pane_g8

0xf67b,	// (0x00072d7c) main_mp3_pane_g_ParamLimits

0x3770,	// (0x00066e71) main_mp3_pane_t2

0x377e,	// (0x00066e7f) main_mp3_pane_t3

0xe407,	// (0x00071b08) main_mp3_pane_t4

0xe415,	// (0x00071b16) main_mp3_pane_t5

0x0005,

0xf68c,	// (0x00072d8d) main_mp3_pane_t

0xe423,	// (0x00071b24) mup_progress_pane_cp01

0xa0bb,	// (0x0006d7bc) aid_zoom_text_secondary2

0xe217,	// (0x00071918) list_cale_ev2_pane

0xe21f,	// (0x00071920) scroll_pane_cp023_ParamLimits

0x38d4,	// (0x00066fd5) field_cale_ev2_pane_ParamLimits

0x38d4,	// (0x00066fd5) field_cale_ev2_pane

0xe42b,	// (0x00071b2c) field_cale_ev2_pane_g1_ParamLimits

0xe42b,	// (0x00071b2c) field_cale_ev2_pane_g1

0xe437,	// (0x00071b38) field_cale_ev2_pane_g2_ParamLimits

0xe437,	// (0x00071b38) field_cale_ev2_pane_g2

0xe44f,	// (0x00071b50) field_cale_ev2_pane_g3_ParamLimits

0xe44f,	// (0x00071b50) field_cale_ev2_pane_g3

0x0003,

0xf6ad,	// (0x00072dae) field_cale_ev2_pane_g_ParamLimits

0xf6ad,	// (0x00072dae) field_cale_ev2_pane_g

0x38f4,	// (0x00066ff5) field_cale_ev2_pane_t1_ParamLimits

0x38f4,	// (0x00066ff5) field_cale_ev2_pane_t1

0x390b,	// (0x0006700c) field_cale_ev2_pane_t2_ParamLimits

0x390b,	// (0x0006700c) field_cale_ev2_pane_t2

0x0001,

0xf6b6,	// (0x00072db7) field_cale_ev2_pane_t_ParamLimits

0xf6b6,	// (0x00072db7) field_cale_ev2_pane_t

0x28c8,	// (0x00065fc9) main_postcard_pane_g5_ParamLimits

0x28c8,	// (0x00065fc9) main_postcard_pane_g5

0x28de,	// (0x00065fdf) main_postcard_pane_g6_ParamLimits

0x28de,	// (0x00065fdf) main_postcard_pane_g6

0xa7ac,	// (0x0006dead) camera2_autofocus_pane_cp_ParamLimits

0xa7ac,	// (0x0006dead) camera2_autofocus_pane_cp

0xa104,	// (0x0006d805) main_mup3_pane

0x3964,	// (0x00067065) main_mup3_pane_g1_ParamLimits

0x3964,	// (0x00067065) main_mup3_pane_g1

0x3986,	// (0x00067087) main_mup3_pane_g2_ParamLimits

0x3986,	// (0x00067087) main_mup3_pane_g2

0x3a04,	// (0x00067105) main_mup3_pane_g3_ParamLimits

0x3a04,	// (0x00067105) main_mup3_pane_g3

0x3a4a,	// (0x0006714b) main_mup3_pane_g4_ParamLimits

0x3a4a,	// (0x0006714b) main_mup3_pane_g4

0x3a90,	// (0x00067191) main_mup3_pane_g5_ParamLimits

0x3a90,	// (0x00067191) main_mup3_pane_g5

0x3ad6,	// (0x000671d7) main_mup3_pane_g6_ParamLimits

0x3ad6,	// (0x000671d7) main_mup3_pane_g6

0xa821,	// (0x0006df22) main_mup3_pane_g7_ParamLimits

0xa821,	// (0x0006df22) main_mup3_pane_g7

0x0007,

0xf6c6,	// (0x00072dc7) main_mup3_pane_g_ParamLimits

0xf6c6,	// (0x00072dc7) main_mup3_pane_g

0x3b54,	// (0x00067255) main_mup3_pane_t1_ParamLimits

0x3b54,	// (0x00067255) main_mup3_pane_t1

0x3bc8,	// (0x000672c9) main_mup3_pane_t2_ParamLimits

0x3bc8,	// (0x000672c9) main_mup3_pane_t2

0x3c9c,	// (0x0006739d) main_mup3_pane_t4_ParamLimits

0x3c9c,	// (0x0006739d) main_mup3_pane_t4

0x3cf2,	// (0x000673f3) main_mup3_pane_t5_ParamLimits

0x3cf2,	// (0x000673f3) main_mup3_pane_t5

0x3dae,	// (0x000674af) main_mup3_pane_t6_ParamLimits

0x3dae,	// (0x000674af) main_mup3_pane_t6

0x0005,

0xf6d7,	// (0x00072dd8) main_mup3_pane_t_ParamLimits

0xf6d7,	// (0x00072dd8) main_mup3_pane_t

0x3e66,	// (0x00067567) mup3_progress_pane_ParamLimits

0x3e66,	// (0x00067567) mup3_progress_pane

0x3efc,	// (0x000675fd) popup_mup3_control_window_ParamLimits

0x3efc,	// (0x000675fd) popup_mup3_control_window

0xe473,	// (0x00071b74) popup_mup3_text_window

0x3f2e,	// (0x0006762f) mup3_progress_pane_t1

0x3f4d,	// (0x0006764e) mup3_progress_pane_t2

0xe47b,	// (0x00071b7c) mup3_progress_pane_t3

0x0002,

0xf6e4,	// (0x00072de5) mup3_progress_pane_t

0xe498,	// (0x00071b99) mup_progress_pane_cp03

0xa08d,	// (0x0006d78e) bg_tb_trans_pane_cp04

0x3f6c,	// (0x0006766d) mup3_volume_pane

0x3f74,	// (0x00067675) popup_mup3_control_window_g1

0x3f7d,	// (0x0006767e) mup3_volume_pane_g1

0x3f86,	// (0x00067687) mup3_volume_pane_g2

0x3f8f,	// (0x00067690) mup3_volume_pane_g3

0x0002,

0xf6eb,	// (0x00072dec) mup3_volume_pane_g

0xa08d,	// (0x0006d78e) bg_tb_trans_pane_cp03

0xe4a8,	// (0x00071ba9) popup_mup3_text_window_g1

0xe4b0,	// (0x00071bb1) popup_mup3_text_window_t1

0xa901,	// (0x0006e002) list_calc_item_pane_g1_ParamLimits

0xded9,	// (0x000715da) mup_volume_pane_cp_g1

0x3898,	// (0x00066f99) main_touch_calib_pane_t3

0x38ac,	// (0x00066fad) main_touch_calib_pane_t4

0x38c0,	// (0x00066fc1) main_touch_calib_pane_t5

0xa097,	// (0x0006d798) aid_cell_size_toolbar2

0xa09f,	// (0x0006d7a0) aid_popup3_width_pane

0xa0ab,	// (0x0006d7ac) aid_zoom_text_msg_primary

0x0fe5,	// (0x000646e6) vorec_t7

0xa8c5,	// (0x0006dfc6) bg_calc_paper_pane_g1_ParamLimits

0xa8d1,	// (0x0006dfd2) bg_calc_paper_pane_g2_ParamLimits

0xa8dd,	// (0x0006dfde) bg_calc_paper_pane_g3_ParamLimits

0xa8e9,	// (0x0006dfea) bg_calc_paper_pane_g4_ParamLimits

0xa8f5,	// (0x0006dff6) bg_calc_paper_pane_g5_ParamLimits

0x08fb,	// (0x00063ffc) bg_calc_paper_pane_g6_ParamLimits

0x090a,	// (0x0006400b) bg_calc_paper_pane_g7_ParamLimits

0x0919,	// (0x0006401a) bg_calc_paper_pane_g8_ParamLimits

0xf0d3,	// (0x000727d4) bg_calc_paper_pane_g_ParamLimits

0x092c,	// (0x0006402d) calc_bg_paper_pane_g9_ParamLimits

0xa7ac,	// (0x0006dead) image_qvga_pane_ParamLimits

0xa7ac,	// (0x0006dead) image_qvga_pane

0xa78a,	// (0x0006de8b) bg_popup_sub_pane_cp04_ParamLimits

0xcbfd,	// (0x000702fe) popup_mup_playback_window_g1_ParamLimits

0xcc09,	// (0x0007030a) popup_mup_playback_window_t1_ParamLimits

0xcc1e,	// (0x0007031f) popup_mup_playback_window_t2_ParamLimits

0xf431,	// (0x00072b32) popup_mup_playback_window_t_ParamLimits

0xa821,	// (0x0006df22) main_mup2_pane_g3_ParamLimits

0xa821,	// (0x0006df22) main_mup2_pane_g3

0x1312,	// (0x00064a13) popup_toolbar_window_cp04

0xd000,	// (0x00070701) popup_call2_audio_second_window_g3_ParamLimits

0xd000,	// (0x00070701) popup_call2_audio_second_window_g3

0xd418,	// (0x00070b19) popup_call2_audio_first_window_g4_ParamLimits

0xd418,	// (0x00070b19) popup_call2_audio_first_window_g4

0xda73,	// (0x00071174) popup_call2_audio_in_window_g4_ParamLimits

0xda73,	// (0x00071174) popup_call2_audio_in_window_g4

0x29f5,	// (0x000660f6) aid_area_sk_bg_cut_ParamLimits

0x29f5,	// (0x000660f6) aid_area_sk_bg_cut

0xcc33,	// (0x00070334) aid_area_sk_bg_cut_2_ParamLimits

0xcc33,	// (0x00070334) aid_area_sk_bg_cut_2

0xa08d,	// (0x0006d78e) aid_placing_details_win

0xa08d,	// (0x0006d78e) aid_placing_details_win_2

0xa813,	// (0x0006df14) camera2_autofocus_pane_g1_ParamLimits

0x0627,	// (0x00063d28) popup_fixed_preview_cale_window_ParamLimits

0x0627,	// (0x00063d28) popup_fixed_preview_cale_window

0xb609,	// (0x0006ed0a) navi_slider_pane_g3

0xb612,	// (0x0006ed13) navi_slider_pane_g4

0xb61b,	// (0x0006ed1c) navi_slider_pane_g5

0xb609,	// (0x0006ed0a) navi_slider_pane_g6

0xb624,	// (0x0006ed25) navi_slider_pane_g7

0xb766,	// (0x0006ee67) mup_scale_pane_g3

0xb76f,	// (0x0006ee70) mup_scale_pane_g4

0xb778,	// (0x0006ee79) mup_scale_pane_g5

0x26c3,	// (0x00065dc4) mup_scale_pane_g6

0x26cc,	// (0x00065dcd) mup_scale_pane_g7

0x3700,	// (0x00066e01) cams2_slider_pane_g3

0x3700,	// (0x00066e01) cams2_slider_pane_g4

0x3700,	// (0x00066e01) cams2_slider_pane_g5

0x3700,	// (0x00066e01) cams2_slider_pane_g6

0x3700,	// (0x00066e01) cams2_slider_pane_g7

0xab2c,	// (0x0006e22d) camera2_autofocus_pane_cp_g1

0xdd49,	// (0x0007144a) bg_popup_preview_window_pane_cp02_ParamLimits

0xdd49,	// (0x0007144a) bg_popup_preview_window_pane_cp02

0xe4be,	// (0x00071bbf) list_fp_cale_pane_ParamLimits

0xe4be,	// (0x00071bbf) list_fp_cale_pane

0xe4ca,	// (0x00071bcb) popup_fixed_preview_cale_window_t1_ParamLimits

0xe4ca,	// (0x00071bcb) popup_fixed_preview_cale_window_t1

0x3f98,	// (0x00067699) popup_fixed_preview_cale_window_t2_ParamLimits

0x3f98,	// (0x00067699) popup_fixed_preview_cale_window_t2

0x3fad,	// (0x000676ae) popup_fixed_preview_cale_window_t3_ParamLimits

0x3fad,	// (0x000676ae) popup_fixed_preview_cale_window_t3

0x0002,

0xf6f2,	// (0x00072df3) popup_fixed_preview_cale_window_t_ParamLimits

0xf6f2,	// (0x00072df3) popup_fixed_preview_cale_window_t

0x3fc2,	// (0x000676c3) list_single_fp_cale_pane_ParamLimits

0x3fc2,	// (0x000676c3) list_single_fp_cale_pane

0xe4e8,	// (0x00071be9) list_single_fp_cale_pane_g1_ParamLimits

0xe4e8,	// (0x00071be9) list_single_fp_cale_pane_g1

0xe4f4,	// (0x00071bf5) list_single_fp_cale_pane_g2_ParamLimits

0xe4f4,	// (0x00071bf5) list_single_fp_cale_pane_g2

0x0002,

0xf6f9,	// (0x00072dfa) list_single_fp_cale_pane_g_ParamLimits

0xf6f9,	// (0x00072dfa) list_single_fp_cale_pane_g

0xe50d,	// (0x00071c0e) list_single_fp_cale_pane_t1_ParamLimits

0xe50d,	// (0x00071c0e) list_single_fp_cale_pane_t1

0xe51f,	// (0x00071c20) list_single_fp_cale_pane_t2_ParamLimits

0xe51f,	// (0x00071c20) list_single_fp_cale_pane_t2

0x0001,

0xf700,	// (0x00072e01) list_single_fp_cale_pane_t_ParamLimits

0xf700,	// (0x00072e01) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa112,	// (0x0006d813) main_dialer_pane

0xa08d,	// (0x0006d78e) aid_cell_size_keypad

0xa08d,	// (0x0006d78e) dialer_ne_pane

0xa08d,	// (0x0006d78e) grid_dialer_command_1_pane

0xa08d,	// (0x0006d78e) grid_dialer_command_2_pane

0xa08d,	// (0x0006d78e) grid_dialer_keypad_pane

0x3fd7,	// (0x000676d8) bg_popup_call_pane_cp06_ParamLimits

0x3fd7,	// (0x000676d8) bg_popup_call_pane_cp06

0x3fd7,	// (0x000676d8) dialer_ne_clear_pane_ParamLimits

0x3fd7,	// (0x000676d8) dialer_ne_clear_pane

0xab2c,	// (0x0006e22d) dialer_ne_pane_g1

0xb6e2,	// (0x0006ede3) dialer_ne_pane_t1_ParamLimits

0xb6e2,	// (0x0006ede3) dialer_ne_pane_t1

0x3fe5,	// (0x000676e6) dialer_ne_pane_t2_ParamLimits

0x3fe5,	// (0x000676e6) dialer_ne_pane_t2

0x400d,	// (0x0006770e) dialer_ne_pane_t3_ParamLimits

0x400d,	// (0x0006770e) dialer_ne_pane_t3

0x0002,

0xf705,	// (0x00072e06) dialer_ne_pane_t_ParamLimits

0xf705,	// (0x00072e06) dialer_ne_pane_t

0x400d,	// (0x0006770e) dialer_ne_pane_t3_copy1_ParamLimits

0x400d,	// (0x0006770e) dialer_ne_pane_t3_copy1

0xe552,	// (0x00071c53) cell_dialer_keypad_pane_ParamLimits

0xe552,	// (0x00071c53) cell_dialer_keypad_pane

0xa7ac,	// (0x0006dead) cell_dialer_command_1_pane_ParamLimits

0xa7ac,	// (0x0006dead) cell_dialer_command_1_pane

0xe569,	// (0x00071c6a) cell_dialer_command_2_pane_ParamLimits

0xe569,	// (0x00071c6a) cell_dialer_command_2_pane

0xa7ac,	// (0x0006dead) bg_button_pane_cp02_ParamLimits

0xa7ac,	// (0x0006dead) bg_button_pane_cp02

0xa813,	// (0x0006df14) cell_dialer_keypad_pane_g1_ParamLimits

0xa813,	// (0x0006df14) cell_dialer_keypad_pane_g1

0xa7ac,	// (0x0006dead) bg_button_pane_cp03_ParamLimits

0xa7ac,	// (0x0006dead) bg_button_pane_cp03

0xa813,	// (0x0006df14) cell_dialer_command_1_pane_g1_ParamLimits

0xa813,	// (0x0006df14) cell_dialer_command_1_pane_g1

0xa08d,	// (0x0006d78e) bg_button_pane_cp04

0xab2c,	// (0x0006e22d) cell_dialer_command_2_pane_g1

0xa08d,	// (0x0006d78e) bg_button_pane_cp06

0xab2c,	// (0x0006e22d) dialer_ne_clear_pane_g1

0xb4d3,	// (0x0006ebd4) navi_pane_g2

0xb501,	// (0x0006ec02) navi_pane_g3

0x0002,

0xf334,	// (0x00072a35) navi_pane_g

0xb590,	// (0x0006ec91) navi_pane_mv_g2

0xb5b7,	// (0x0006ecb8) navi_pane_mv_g5

0x24a6,	// (0x00065ba7) navi_pane_mv_t1

0xa8a7,	// (0x0006dfa8) main_clock2_pane

0xa7ac,	// (0x0006dead) main_clock2_list_pane_ParamLimits

0xa7ac,	// (0x0006dead) main_clock2_list_pane

0x40a3,	// (0x000677a4) main_clock2_pane_t1_ParamLimits

0x40a3,	// (0x000677a4) main_clock2_pane_t1

0x40de,	// (0x000677df) main_clock2_pane_t2_ParamLimits

0x40de,	// (0x000677df) main_clock2_pane_t2

0x0004,

0xf711,	// (0x00072e12) main_clock2_pane_t_ParamLimits

0xf711,	// (0x00072e12) main_clock2_pane_t

0x417e,	// (0x0006787f) popup_clock_analogue_window_cp03_ParamLimits

0x417e,	// (0x0006787f) popup_clock_analogue_window_cp03

0x41a3,	// (0x000678a4) popup_clock_digital_window_cp02_ParamLimits

0x41a3,	// (0x000678a4) popup_clock_digital_window_cp02

0x421c,	// (0x0006791d) main_clock2_list_single_pane_ParamLimits

0x421c,	// (0x0006791d) main_clock2_list_single_pane

0xaaec,	// (0x0006e1ed) list_highlight_pane_cp05

0xe5b0,	// (0x00071cb1) main_clock2_list_single_pane_t1

0x1312,	// (0x00064a13) popup_toolbar_window_cp04_ParamLimits

0xa821,	// (0x0006df22) camera2_autofocus_pane_g2_ParamLimits

0xa821,	// (0x0006df22) camera2_autofocus_pane_g2

0xa821,	// (0x0006df22) camera2_autofocus_pane_g3_ParamLimits

0xa821,	// (0x0006df22) camera2_autofocus_pane_g3

0xa821,	// (0x0006df22) camera2_autofocus_pane_g4_ParamLimits

0xa821,	// (0x0006df22) camera2_autofocus_pane_g4

0xa821,	// (0x0006df22) camera2_autofocus_pane_g5_ParamLimits

0xa821,	// (0x0006df22) camera2_autofocus_pane_g5

0x0004,

0xf655,	// (0x00072d56) camera2_autofocus_pane_g_ParamLimits

0xf655,	// (0x00072d56) camera2_autofocus_pane_g

0x3920,	// (0x00067021) camera2_autofocus_pane_cp_g2

0x3928,	// (0x00067029) camera2_autofocus_pane_cp_g3

0x3930,	// (0x00067031) camera2_autofocus_pane_cp_g4

0x3938,	// (0x00067039) camera2_autofocus_pane_cp_g5

0x0004,

0xf6bb,	// (0x00072dbc) camera2_autofocus_pane_cp_g

0xa08d,	// (0x0006d78e) popup_dialer_spcha_window

0xa08d,	// (0x0006d78e) bg_popup_sub_pane_cp07

0xa08d,	// (0x0006d78e) list_spcha_pane

0xe5be,	// (0x00071cbf) list_single_spcha_pane_ParamLimits

0xe5be,	// (0x00071cbf) list_single_spcha_pane

0xa08d,	// (0x0006d78e) list_highlight_pane_cp06

0xb095,	// (0x0006e796) list_single_spcha_pane_t1

0xd81d,	// (0x00070f1e) popup_call2_audio_out_window_g4_ParamLimits

0xd81d,	// (0x00070f1e) popup_call2_audio_out_window_g4

0xa112,	// (0x0006d813) main_imed2_pane

0xb80f,	// (0x0006ef10) popup_imed_adjust2_window

0x3284,	// (0x00066985) popup_imed_trans_window_ParamLimits

0x3284,	// (0x00066985) popup_imed_trans_window

0xdfae,	// (0x000716af) popup_blid_sat_info2_window_t1

0xdfbc,	// (0x000716bd) popup_blid_sat_info2_window_t2

0x000a,

0xf5ea,	// (0x00072ceb) popup_blid_sat_info2_window_t

0x42cd,	// (0x000679ce) aid_size_cell_colour_35

0x42ed,	// (0x000679ee) aid_size_cell_colour_112

0x430d,	// (0x00067a0e) aid_size_cell_effect

0xb6f6,	// (0x0006edf7) bg_tb_trans_pane_cp02

0xafbb,	// (0x0006e6bc) heading_imed_pane

0x432d,	// (0x00067a2e) listscroll_imed_pane

0xe5d0,	// (0x00071cd1) heading_imed_pane_g1

0xe5d8,	// (0x00071cd9) heading_imed_pane_t1

0xe5e6,	// (0x00071ce7) grid_imed_colour_35_pane_ParamLimits

0xe5e6,	// (0x00071ce7) grid_imed_colour_35_pane

0x4339,	// (0x00067a3a) grid_imed_effect_pane

0xe5fd,	// (0x00071cfe) list_imed_aspect_pane

0x434f,	// (0x00067a50) scroll_pane_cp027_ParamLimits

0x434f,	// (0x00067a50) scroll_pane_cp027

0x4360,	// (0x00067a61) cell_imed_effect_pane_ParamLimits

0x4360,	// (0x00067a61) cell_imed_effect_pane

0xe605,	// (0x00071d06) cell_imed_colour_pane_ParamLimits

0xe605,	// (0x00071d06) cell_imed_colour_pane

0xe647,	// (0x00071d48) cell_imed_colour_pane_g1_ParamLimits

0xe647,	// (0x00071d48) cell_imed_colour_pane_g1

0xe658,	// (0x00071d59) hgihlgiht_grid_pane_cp016_ParamLimits

0xe658,	// (0x00071d59) hgihlgiht_grid_pane_cp016

0x4387,	// (0x00067a88) cell_imed_effect_pane_g1

0x438f,	// (0x00067a90) grid_highlight_pane_cp017

0xe669,	// (0x00071d6a) list_imed_single_pane_ParamLimits

0xe669,	// (0x00071d6a) list_imed_single_pane

0xa08d,	// (0x0006d78e) list_highlight_pane_cp07

0xe67e,	// (0x00071d7f) list_imed_aspect_pane_comp1_t1

0xb6f6,	// (0x0006edf7) bg_tb_trans_pane_cp05

0xe6a0,	// (0x00071da1) popup_imed_adjust2_window_g1

0xe6c7,	// (0x00071dc8) popup_imed_adjust2_window_t1

0xe6df,	// (0x00071de0) slider_imed_adjust_pane

0xe6f3,	// (0x00071df4) slider_imed_adjust_pane_g1

0xe703,	// (0x00071e04) slider_imed_adjust_pane_g2

0xe713,	// (0x00071e14) slider_imed_adjust_pane_g3

0xe724,	// (0x00071e25) slider_imed_adjust_pane_g4

0x0003,

0xf72e,	// (0x00072e2f) slider_imed_adjust_pane_g

0x4398,	// (0x00067a99) aid_size_cell_clipart2

0x43a4,	// (0x00067aa5) grid_imed_clipart_pane

0xe735,	// (0x00071e36) scroll_pane_cp031

0x43ae,	// (0x00067aaf) cell_imed_clipart_pane_ParamLimits

0x43ae,	// (0x00067aaf) cell_imed_clipart_pane

0x43d0,	// (0x00067ad1) cell_imed_clipart_pane_g1

0xa08d,	// (0x0006d78e) grid_highlight_pane_cp014

0x407f,	// (0x00067780) main_clock2_pane_g1_ParamLimits

0x407f,	// (0x00067780) main_clock2_pane_g1

0x41c3,	// (0x000678c4) aid_call2_pane_cp10

0x41d5,	// (0x000678d6) aid_call_pane_cp10

0xb434,	// (0x0006eb35) popup_clock_analogue_window_cp10_g1

0xb434,	// (0x0006eb35) popup_clock_analogue_window_cp10_g2

0x41e7,	// (0x000678e8) popup_clock_analogue_window_cp10_g3

0x41e7,	// (0x000678e8) popup_clock_analogue_window_cp10_g4

0xb434,	// (0x0006eb35) popup_clock_analogue_window_cp10_g5

0x0004,

0xf71c,	// (0x00072e1d) popup_clock_analogue_window_cp10_g

0x41fd,	// (0x000678fe) popup_clock_analogue_window_cp10_t1

0x422e,	// (0x0006792f) clock_digital_number_pane_cp10_ParamLimits

0x422e,	// (0x0006792f) clock_digital_number_pane_cp10

0x4246,	// (0x00067947) clock_digital_number_pane_cp11_ParamLimits

0x4246,	// (0x00067947) clock_digital_number_pane_cp11

0x425e,	// (0x0006795f) clock_digital_number_pane_cp12_ParamLimits

0x425e,	// (0x0006795f) clock_digital_number_pane_cp12

0x4278,	// (0x00067979) clock_digital_number_pane_cp13_ParamLimits

0x4278,	// (0x00067979) clock_digital_number_pane_cp13

0x4292,	// (0x00067993) clock_digital_separator_pane_cp10_ParamLimits

0x4292,	// (0x00067993) clock_digital_separator_pane_cp10

0x42ac,	// (0x000679ad) popup_clock_digital_window_cp02_t1_ParamLimits

0x42ac,	// (0x000679ad) popup_clock_digital_window_cp02_t1

0xa782,	// (0x0006de83) clock_digital_number_pane_cp10_g1

0xa782,	// (0x0006de83) clock_digital_number_pane_cp10_g2

0x0001,

0xf737,	// (0x00072e38) clock_digital_number_pane_cp10_g

0xa782,	// (0x0006de83) clock_digital_separator_pane_cp10_g1

0xa782,	// (0x0006de83) clock_digital_separator_pane_g2_cp10

0xb5bf,	// (0x0006ecc0) navi_pane_vded_g4

0xb5c8,	// (0x0006ecc9) navi_pane_vded_g5

0xb5d1,	// (0x0006ecd2) navi_pane_vded_t1

0xa112,	// (0x0006d813) main_vded_pane

0x43d9,	// (0x00067ada) main_vded_pane_g1

0x43e3,	// (0x00067ae4) main_vded_pane_g2

0x43ed,	// (0x00067aee) main_vded_pane_g3

0x0002,

0xf73c,	// (0x00072e3d) main_vded_pane_g

0x43f7,	// (0x00067af8) main_vded_pane_t1

0x4405,	// (0x00067b06) main_vded_pane_t2

0x0001,

0xf743,	// (0x00072e44) main_vded_pane_t

0x4413,	// (0x00067b14) vded_slider_pane

0x441b,	// (0x00067b1c) vded_video_pane

0xe73d,	// (0x00071e3e) vded_video_pane_g1

0x4423,	// (0x00067b24) vded_video_pane_g2

0xab2c,	// (0x0006e22d) vded_video_pane_g3

0x0002,

0xf748,	// (0x00072e49) vded_video_pane_g

0xe747,	// (0x00071e48) vded_slider_pane_g1

0xded9,	// (0x000715da) vded_slider_pane_g2

0xe750,	// (0x00071e51) vded_slider_pane_g3

0xe759,	// (0x00071e5a) vded_slider_pane_g4

0xe762,	// (0x00071e63) vded_slider_pane_g5

0x0004,

0xf74f,	// (0x00072e50) vded_slider_pane_g

0x3ee4,	// (0x000675e5) mup3_rocker_pane_ParamLimits

0x3ee4,	// (0x000675e5) mup3_rocker_pane

0x442c,	// (0x00067b2d) mup3_control_keys_pane_g1

0x4434,	// (0x00067b35) mup3_control_keys_pane_g2

0x443c,	// (0x00067b3d) mup3_control_keys_pane_g3

0x4444,	// (0x00067b45) mup3_control_keys_pane_g4

0x0003,

0xf75a,	// (0x00072e5b) mup3_control_keys_pane_g

0x065e,	// (0x00063d5f) popup_toolbar2_fixed_window_cp01_ParamLimits

0x065e,	// (0x00063d5f) popup_toolbar2_fixed_window_cp01

0x3f18,	// (0x00067619) popup_toolbar2_fixed_window_cp02_ParamLimits

0x3f18,	// (0x00067619) popup_toolbar2_fixed_window_cp02

0xd172,	// (0x00070873) popup_call2_audio_second_window_t4_ParamLimits

0xd172,	// (0x00070873) popup_call2_audio_second_window_t4

0xd6e2,	// (0x00070de3) popup_call2_audio_first_window_t6_ParamLimits

0xd6e2,	// (0x00070de3) popup_call2_audio_first_window_t6

0xd920,	// (0x00071021) popup_call2_audio_out_window_t6_ParamLimits

0xd920,	// (0x00071021) popup_call2_audio_out_window_t6

0xa112,	// (0x0006d813) main_vitu_pane

0xa7ac,	// (0x0006dead) aid_size_cell_itu_ParamLimits

0xa7ac,	// (0x0006dead) aid_size_cell_itu

0xa7ac,	// (0x0006dead) bg_popup_window_pane_cp08_ParamLimits

0xa7ac,	// (0x0006dead) bg_popup_window_pane_cp08

0xa7ac,	// (0x0006dead) field_vitu_entry_pane_ParamLimits

0xa7ac,	// (0x0006dead) field_vitu_entry_pane

0xa7ac,	// (0x0006dead) grid_vitu_function_pane_ParamLimits

0xa7ac,	// (0x0006dead) grid_vitu_function_pane

0xa7ac,	// (0x0006dead) grid_vitu_itu_pane_ParamLimits

0xa7ac,	// (0x0006dead) grid_vitu_itu_pane

0xa7ac,	// (0x0006dead) cell_vitu_itu_pane_ParamLimits

0xa7ac,	// (0x0006dead) cell_vitu_itu_pane

0xa7ac,	// (0x0006dead) cell_vitu_function_pane_ParamLimits

0xa7ac,	// (0x0006dead) cell_vitu_function_pane

0xa7ac,	// (0x0006dead) bg_popup_sub_pane_cp08_ParamLimits

0xa7ac,	// (0x0006dead) bg_popup_sub_pane_cp08

0xaafe,	// (0x0006e1ff) field_vitu_entry_pane_t1_ParamLimits

0xaafe,	// (0x0006e1ff) field_vitu_entry_pane_t1

0xe76b,	// (0x00071e6c) field_vitu_entry_pane_t2_ParamLimits

0xe76b,	// (0x00071e6c) field_vitu_entry_pane_t2

0x0001,

0xf763,	// (0x00072e64) field_vitu_entry_pane_t_ParamLimits

0xf763,	// (0x00072e64) field_vitu_entry_pane_t

0xd678,	// (0x00070d79) bg_button_pane_cp05_ParamLimits

0xd678,	// (0x00070d79) bg_button_pane_cp05

0xe788,	// (0x00071e89) cell_vitu_itu_pane_g1

0xb6ce,	// (0x0006edcf) cell_vitu_itu_pane_t1_ParamLimits

0xb6ce,	// (0x0006edcf) cell_vitu_itu_pane_t1

0xb6ce,	// (0x0006edcf) cell_vitu_itu_pane_t2_ParamLimits

0xb6ce,	// (0x0006edcf) cell_vitu_itu_pane_t2

0x0002,

0xf768,	// (0x00072e69) cell_vitu_itu_pane_t_ParamLimits

0xf768,	// (0x00072e69) cell_vitu_itu_pane_t

0xa08d,	// (0x0006d78e) bg_button_pane_cp07

0xab2c,	// (0x0006e22d) cell_vitu_function_pane_g1

0xa851,	// (0x0006df52) main_calc_pane_g1

0x04ec,	// (0x00063bed) aid_visual_content_pane

0xa112,	// (0x0006d813) main_vradio_pane

0xa813,	// (0x0006df14) main_vradio_pane_g1_ParamLimits

0xa813,	// (0x0006df14) main_vradio_pane_g1

0xa821,	// (0x0006df22) main_vradio_pane_g2_ParamLimits

0xa821,	// (0x0006df22) main_vradio_pane_g2

0x0001,

0xf76f,	// (0x00072e70) main_vradio_pane_g_ParamLimits

0xf76f,	// (0x00072e70) main_vradio_pane_g

0xaafe,	// (0x0006e1ff) main_vradio_pane_t1_ParamLimits

0xaafe,	// (0x0006e1ff) main_vradio_pane_t1

0xaafe,	// (0x0006e1ff) main_vradio_pane_t2_ParamLimits

0xaafe,	// (0x0006e1ff) main_vradio_pane_t2

0xb6e2,	// (0x0006ede3) main_vradio_pane_t3_ParamLimits

0xb6e2,	// (0x0006ede3) main_vradio_pane_t3

0x0002,

0xf774,	// (0x00072e75) main_vradio_pane_t_ParamLimits

0xf774,	// (0x00072e75) main_vradio_pane_t

0xa7ac,	// (0x0006dead) vradio_rocker_control_pane_ParamLimits

0xa7ac,	// (0x0006dead) vradio_rocker_control_pane

0xa7ac,	// (0x0006dead) vradio_station_info_pane_ParamLimits

0xa7ac,	// (0x0006dead) vradio_station_info_pane

0xa7ac,	// (0x0006dead) vradio_frequency_info_pane_ParamLimits

0xa7ac,	// (0x0006dead) vradio_frequency_info_pane

0xab2c,	// (0x0006e22d) vradio_station_info_pane_g1

0xb6ce,	// (0x0006edcf) vradio_station_info_pane_t1_ParamLimits

0xb6ce,	// (0x0006edcf) vradio_station_info_pane_t1

0xb6e2,	// (0x0006ede3) vradio_station_info_pane_t2_ParamLimits

0xb6e2,	// (0x0006ede3) vradio_station_info_pane_t2

0x0001,

0xf77b,	// (0x00072e7c) vradio_station_info_pane_t_ParamLimits

0xf77b,	// (0x00072e7c) vradio_station_info_pane_t

0xa08d,	// (0x0006d78e) vradio_tuning_pane

0x4454,	// (0x00067b55) vradio_rocker_control_pane_g1

0xe7a4,	// (0x00071ea5) vradio_rocker_control_pane_g2

0x445e,	// (0x00067b5f) vradio_rocker_control_pane_g3

0x4468,	// (0x00067b69) vradio_rocker_control_pane_g4

0x4472,	// (0x00067b73) vradio_rocker_control_pane_g5

0x0004,

0xf780,	// (0x00072e81) vradio_rocker_control_pane_g

0xab2c,	// (0x0006e22d) vradio_frequency_info_pane_g1

0xaafe,	// (0x0006e1ff) vradio_frequency_info_pane_t1_ParamLimits

0xaafe,	// (0x0006e1ff) vradio_frequency_info_pane_t1

0x447c,	// (0x00067b7d) vradio_tuning_pane_g1

0x4489,	// (0x00067b8a) vradio_tuning_pane_t1

0xa0c3,	// (0x0006d7c4) area_side_right_pane_ParamLimits

0xa0c3,	// (0x0006d7c4) area_side_right_pane

0xdd10,	// (0x00071411) status_small_pane_g1

0xdd18,	// (0x00071419) status_small_pane_g2

0xdd21,	// (0x00071422) status_small_pane_g3

0xdd2a,	// (0x0007142b) status_small_pane_g4

0x0003,

0xf54c,	// (0x00072c4d) status_small_pane_g

0xdd33,	// (0x00071434) status_small_pane_t1

0xa112,	// (0x0006d813) main_video3_pane

0xe7ac,	// (0x00071ead) cams_zoom_vslider_pane

0xe7b4,	// (0x00071eb5) image3_wide_pane_ParamLimits

0xe7b4,	// (0x00071eb5) image3_wide_pane

0xe7ce,	// (0x00071ecf) image3_wide_small_pane

0xe7da,	// (0x00071edb) main_video3_pane_g1_ParamLimits

0xe7da,	// (0x00071edb) main_video3_pane_g1

0xe7f6,	// (0x00071ef7) main_video3_pane_g2_ParamLimits

0xe7f6,	// (0x00071ef7) main_video3_pane_g2

0x0001,

0xf78b,	// (0x00072e8c) main_video3_pane_g_ParamLimits

0xf78b,	// (0x00072e8c) main_video3_pane_g

0xe812,	// (0x00071f13) main_video3_pane_t1_ParamLimits

0xe812,	// (0x00071f13) main_video3_pane_t1

0xe83d,	// (0x00071f3e) main_video3_pane_t2_ParamLimits

0xe83d,	// (0x00071f3e) main_video3_pane_t2

0xe868,	// (0x00071f69) main_video3_pane_t3_ParamLimits

0xe868,	// (0x00071f69) main_video3_pane_t3

0x0002,

0xf790,	// (0x00072e91) main_video3_pane_t_ParamLimits

0xf790,	// (0x00072e91) main_video3_pane_t

0xe895,	// (0x00071f96) cams_zoom_vslider_pane_g1

0xe89e,	// (0x00071f9f) cams_zoom_vslider_pane_g2

0x0001,

0xf797,	// (0x00072e98) cams_zoom_vslider_pane_g

0xe8a6,	// (0x00071fa7) small_slider_vertical_pane

0xab2c,	// (0x0006e22d) small_slider_vertical_pane_g1

0xab2c,	// (0x0006e22d) small_slider_vertical_pane_g2

0xe8ae,	// (0x00071faf) small_slider_vertical_pane_g3

0x0002,

0xf79c,	// (0x00072e9d) small_slider_vertical_pane_g

0xa112,	// (0x0006d813) main_hwr_training_pane

0xe8b7,	// (0x00071fb8) hwr_training_instruct_pane_ParamLimits

0xe8b7,	// (0x00071fb8) hwr_training_instruct_pane

0x4498,	// (0x00067b99) hwr_training_navi_pane_ParamLimits

0x4498,	// (0x00067b99) hwr_training_navi_pane

0x44b7,	// (0x00067bb8) hwr_training_write_pane_ParamLimits

0x44b7,	// (0x00067bb8) hwr_training_write_pane

0xa08d,	// (0x0006d78e) bg_frame_shadow_pane

0xe8ee,	// (0x00071fef) hwr_training_write_pane_g1

0xe8f6,	// (0x00071ff7) hwr_training_write_pane_g2

0xe8fe,	// (0x00071fff) hwr_training_write_pane_g3

0xe906,	// (0x00072007) hwr_training_write_pane_g4

0xe90e,	// (0x0007200f) hwr_training_write_pane_g5

0xe916,	// (0x00072017) hwr_training_write_pane_g6

0xe91e,	// (0x0007201f) hwr_training_write_pane_g7

0x0006,

0xf7a3,	// (0x00072ea4) hwr_training_write_pane_g

0xb8f7,	// (0x0006eff8) hwr_training_navi_pane_g1_ParamLimits

0xb8f7,	// (0x0006eff8) hwr_training_navi_pane_g1

0xb909,	// (0x0006f00a) hwr_training_navi_pane_g2_ParamLimits

0xb909,	// (0x0006f00a) hwr_training_navi_pane_g2

0xb91b,	// (0x0006f01c) hwr_training_navi_pane_g3_ParamLimits

0xb91b,	// (0x0006f01c) hwr_training_navi_pane_g3

0xb92b,	// (0x0006f02c) hwr_training_navi_pane_g4_ParamLimits

0xb92b,	// (0x0006f02c) hwr_training_navi_pane_g4

0x0004,

0xf7b2,	// (0x00072eb3) hwr_training_navi_pane_g_ParamLimits

0xf7b2,	// (0x00072eb3) hwr_training_navi_pane_g

0xb938,	// (0x0006f039) hwr_training_navi_pane_t1

0x44ff,	// (0x00067c00) list_single_hwr_training_instruct_pane_ParamLimits

0x44ff,	// (0x00067c00) list_single_hwr_training_instruct_pane

0xe926,	// (0x00072027) list_single_hwr_training_instruct_pane_t1

0xe0af,	// (0x000717b0) bg_frame_shadow_pane_g1

0xe935,	// (0x00072036) bg_frame_shadow_pane_g2

0xe93d,	// (0x0007203e) bg_frame_shadow_pane_g3

0xe945,	// (0x00072046) bg_frame_shadow_pane_g4

0xe94d,	// (0x0007204e) bg_frame_shadow_pane_g5

0xe955,	// (0x00072056) bg_frame_shadow_pane_g6

0xe95d,	// (0x0007205e) bg_frame_shadow_pane_g7

0xa983,	// (0x0006e084) bg_frame_shadow_pane_g8

0x0007,

0xf7bd,	// (0x00072ebe) bg_frame_shadow_pane_g

0xa112,	// (0x0006d813) main_video_tele_dialer_pane

0x4514,	// (0x00067c15) aid_size_cell_video_keypad_ParamLimits

0x4514,	// (0x00067c15) aid_size_cell_video_keypad

0x452e,	// (0x00067c2f) grid_video_dialer_keypad_pane_ParamLimits

0x452e,	// (0x00067c2f) grid_video_dialer_keypad_pane

0x457a,	// (0x00067c7b) video_down_pane_cp_ParamLimits

0x457a,	// (0x00067c7b) video_down_pane_cp

0x45ac,	// (0x00067cad) cell_video_dialer_keypad_pane_ParamLimits

0x45ac,	// (0x00067cad) cell_video_dialer_keypad_pane

0xe965,	// (0x00072066) bg_button_pane_cp08_ParamLimits

0xe965,	// (0x00072066) bg_button_pane_cp08

0x45ce,	// (0x00067ccf) cell_video_dialer_keypad_pane_g1_ParamLimits

0x45ce,	// (0x00067ccf) cell_video_dialer_keypad_pane_g1

0x3ece,	// (0x000675cf) mup3_rocker2_pane_ParamLimits

0x3ece,	// (0x000675cf) mup3_rocker2_pane

0xab2c,	// (0x0006e22d) mup3_rocker2_pane_g1

0x3165,	// (0x00066866) main_dialer2_pane

0xa112,	// (0x0006d813) main_mp4_pane

0xb964,	// (0x0006f065) main_mp4_pane_g1_ParamLimits

0xb964,	// (0x0006f065) main_mp4_pane_g1

0xb964,	// (0x0006f065) main_mp4_pane_g2_ParamLimits

0xb964,	// (0x0006f065) main_mp4_pane_g2

0x4605,	// (0x00067d06) main_mp4_pane_g3_ParamLimits

0x4605,	// (0x00067d06) main_mp4_pane_g3

0xb972,	// (0x0006f073) main_mp4_pane_g4_ParamLimits

0xb972,	// (0x0006f073) main_mp4_pane_g4

0xb9a0,	// (0x0006f0a1) main_mp4_pane_g5_ParamLimits

0xb9a0,	// (0x0006f0a1) main_mp4_pane_g5

0x0007,

0xf7dd,	// (0x00072ede) main_mp4_pane_g_ParamLimits

0xf7dd,	// (0x00072ede) main_mp4_pane_g

0xba14,	// (0x0006f115) main_mp4_pane_t1_ParamLimits

0xba14,	// (0x0006f115) main_mp4_pane_t1

0xba70,	// (0x0006f171) main_mp4_pane_t2_ParamLimits

0xba70,	// (0x0006f171) main_mp4_pane_t2

0xe971,	// (0x00072072) main_mp4_pane_t3_ParamLimits

0xe971,	// (0x00072072) main_mp4_pane_t3

0xbac2,	// (0x0006f1c3) main_mp4_pane_t4_ParamLimits

0xbac2,	// (0x0006f1c3) main_mp4_pane_t4

0x0003,

0xf7ee,	// (0x00072eef) main_mp4_pane_t_ParamLimits

0xf7ee,	// (0x00072eef) main_mp4_pane_t

0xbb06,	// (0x0006f207) mp4_progress_pane_ParamLimits

0xbb06,	// (0x0006f207) mp4_progress_pane

0xbb50,	// (0x0006f251) mp4_rocker_pane_ParamLimits

0xbb50,	// (0x0006f251) mp4_rocker_pane

0xe99f,	// (0x000720a0) mp4_progress_pane_t1

0xe9b8,	// (0x000720b9) mp4_progress_pane_t2

0x0001,

0xf7f7,	// (0x00072ef8) mp4_progress_pane_t

0xe9d1,	// (0x000720d2) mup_progress_pane_cp04

0x3700,	// (0x00066e01) mp4_rocker_pane_g1

0x4641,	// (0x00067d42) aid_cell_size_keypad2_ParamLimits

0x4641,	// (0x00067d42) aid_cell_size_keypad2

0x4657,	// (0x00067d58) dialer2_ne_pane_ParamLimits

0x4657,	// (0x00067d58) dialer2_ne_pane

0x4671,	// (0x00067d72) grid_dialer2_keypad_pane_ParamLimits

0x4671,	// (0x00067d72) grid_dialer2_keypad_pane

0xd678,	// (0x00070d79) bg_popup_call_pane_cp07_ParamLimits

0xd678,	// (0x00070d79) bg_popup_call_pane_cp07

0x468d,	// (0x00067d8e) dialer2_ne_pane_t1_ParamLimits

0x468d,	// (0x00067d8e) dialer2_ne_pane_t1

0x46c8,	// (0x00067dc9) cell_dialer2_keypad_pane_ParamLimits

0x46c8,	// (0x00067dc9) cell_dialer2_keypad_pane

0xe9f6,	// (0x000720f7) bg_button_pane_pane_cp04_ParamLimits

0xe9f6,	// (0x000720f7) bg_button_pane_pane_cp04

0x46ea,	// (0x00067deb) cell_dialer2_keypad_pane_g1_ParamLimits

0x46ea,	// (0x00067deb) cell_dialer2_keypad_pane_g1

0x11e6,	// (0x000648e7) aid_placing_vt_set_content_ParamLimits

0x11e6,	// (0x000648e7) aid_placing_vt_set_content

0x120e,	// (0x0006490f) aid_placing_vt_set_title_ParamLimits

0x120e,	// (0x0006490f) aid_placing_vt_set_title

0xa112,	// (0x0006d813) main_image3_pane

0x47b0,	// (0x00067eb1) area_side_right_pane_cp01_ParamLimits

0x47b0,	// (0x00067eb1) area_side_right_pane_cp01

0xb964,	// (0x0006f065) main_image3_pane_g1_ParamLimits

0xb964,	// (0x0006f065) main_image3_pane_g1

0x47c7,	// (0x00067ec8) main_image3_pane_g2_ParamLimits

0x47c7,	// (0x00067ec8) main_image3_pane_g2

0x47ef,	// (0x00067ef0) main_image3_pane_g3_ParamLimits

0x47ef,	// (0x00067ef0) main_image3_pane_g3

0x4819,	// (0x00067f1a) main_image3_pane_g4_ParamLimits

0x4819,	// (0x00067f1a) main_image3_pane_g4

0x0003,

0xf806,	// (0x00072f07) main_image3_pane_g_ParamLimits

0xf806,	// (0x00072f07) main_image3_pane_g

0x4843,	// (0x00067f44) main_image3_pane_t1_ParamLimits

0x4843,	// (0x00067f44) main_image3_pane_t1

0x489b,	// (0x00067f9c) main_image3_pane_t2_ParamLimits

0x489b,	// (0x00067f9c) main_image3_pane_t2

0x48ed,	// (0x00067fee) main_image3_pane_t3_ParamLimits

0x48ed,	// (0x00067fee) main_image3_pane_t3

0x0003,

0xf80f,	// (0x00072f10) main_image3_pane_t_ParamLimits

0xf80f,	// (0x00072f10) main_image3_pane_t

0xa7ac,	// (0x0006dead) grid_sctrl_middle_pane_cp01_ParamLimits

0xa7ac,	// (0x0006dead) grid_sctrl_middle_pane_cp01

0x4975,	// (0x00068076) cell_sctrl_middle_pane_cp01_ParamLimits

0x4975,	// (0x00068076) cell_sctrl_middle_pane_cp01

0x4992,	// (0x00068093) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x4992,	// (0x00068093) cell_sctrl_middle_pane_cp01_g1

0xa112,	// (0x0006d813) main_call4_pane

0x49a8,	// (0x000680a9) aid_size_button_call4_ParamLimits

0x49a8,	// (0x000680a9) aid_size_button_call4

0x49db,	// (0x000680dc) call4_windows_pane_ParamLimits

0x49db,	// (0x000680dc) call4_windows_pane

0x49fa,	// (0x000680fb) grid_call4_button_pane_ParamLimits

0x49fa,	// (0x000680fb) grid_call4_button_pane

0x4a2d,	// (0x0006812e) call4_windows_conf_pane

0x4a44,	// (0x00068145) popup_call4_audio_first_window_ParamLimits

0x4a44,	// (0x00068145) popup_call4_audio_first_window

0x4a94,	// (0x00068195) popup_call4_audio_second_window_ParamLimits

0x4a94,	// (0x00068195) popup_call4_audio_second_window

0x4aab,	// (0x000681ac) popup_call4_audio_wait_window_ParamLimits

0x4aab,	// (0x000681ac) popup_call4_audio_wait_window

0x4ab9,	// (0x000681ba) cell_call4_button_pane_ParamLimits

0x4ab9,	// (0x000681ba) cell_call4_button_pane

0x4ade,	// (0x000681df) bg_button_pane_cp09_ParamLimits

0x4ade,	// (0x000681df) bg_button_pane_cp09

0x4aea,	// (0x000681eb) cell_call4_button_pane_g1_ParamLimits

0x4aea,	// (0x000681eb) cell_call4_button_pane_g1

0x4b10,	// (0x00068211) cell_call4_button_pane_t1_ParamLimits

0x4b10,	// (0x00068211) cell_call4_button_pane_t1

0xea0a,	// (0x0007210b) popup_call4_audio_conf_window_ParamLimits

0xea0a,	// (0x0007210b) popup_call4_audio_conf_window

0x3f2e,	// (0x0006762f) mup3_progress_pane_t1_ParamLimits

0x3f4d,	// (0x0006764e) mup3_progress_pane_t2_ParamLimits

0xe47b,	// (0x00071b7c) mup3_progress_pane_t3_ParamLimits

0xf6e4,	// (0x00072de5) mup3_progress_pane_t_ParamLimits

0xe498,	// (0x00071b99) mup_progress_pane_cp03_ParamLimits

0x444c,	// (0x00067b4d) mup3_control_keys_pane_g4_copy1

0xbb34,	// (0x0006f235) mp4_rocker2_pane_ParamLimits

0xbb34,	// (0x0006f235) mp4_rocker2_pane

0xea1e,	// (0x0007211f) mp4_rocker2_pane_g1

0xea26,	// (0x00072127) mp4_rocker2_pane_g2

0xbbd4,	// (0x0006f2d5) mp4_rocker2_pane_g3

0xbbdc,	// (0x0006f2dd) mp4_rocker2_pane_g4

0xbbe4,	// (0x0006f2e5) mp4_rocker2_pane_g5

0x0004,

0xf818,	// (0x00072f19) mp4_rocker2_pane_g

0xa112,	// (0x0006d813) main_camera4_pane

0xa112,	// (0x0006d813) main_video4_pane

0x4548,	// (0x00067c49) main_video_tele_dialer_pane_t1_ParamLimits

0x4548,	// (0x00067c49) main_video_tele_dialer_pane_t1

0x4561,	// (0x00067c62) main_video_tele_dialer_pane_t2_ParamLimits

0x4561,	// (0x00067c62) main_video_tele_dialer_pane_t2

0x0001,

0xf7ce,	// (0x00072ecf) main_video_tele_dialer_pane_t_ParamLimits

0xf7ce,	// (0x00072ecf) main_video_tele_dialer_pane_t

0x4b4e,	// (0x0006824f) cam4_autofocus_pane_ParamLimits

0x4b4e,	// (0x0006824f) cam4_autofocus_pane

0x4b64,	// (0x00068265) cam4_image_uncrop_pane_ParamLimits

0x4b64,	// (0x00068265) cam4_image_uncrop_pane

0x4b7e,	// (0x0006827f) cam4_indicators_pane_ParamLimits

0x4b7e,	// (0x0006827f) cam4_indicators_pane

0x4ba9,	// (0x000682aa) main_camera4_pane_g1_ParamLimits

0x4ba9,	// (0x000682aa) main_camera4_pane_g1

0x4bbb,	// (0x000682bc) main_camera4_pane_g2_ParamLimits

0x4bbb,	// (0x000682bc) main_camera4_pane_g2

0x4bce,	// (0x000682cf) main_camera4_pane_g3_ParamLimits

0x4bce,	// (0x000682cf) main_camera4_pane_g3

0x4be1,	// (0x000682e2) main_camera4_pane_g4_ParamLimits

0x4be1,	// (0x000682e2) main_camera4_pane_g4

0x4bf4,	// (0x000682f5) main_camera4_pane_g5_ParamLimits

0x4bf4,	// (0x000682f5) main_camera4_pane_g5

0x0005,

0xf823,	// (0x00072f24) main_camera4_pane_g_ParamLimits

0xf823,	// (0x00072f24) main_camera4_pane_g

0x4c18,	// (0x00068319) main_camera4_pane_t1_ParamLimits

0x4c18,	// (0x00068319) main_camera4_pane_t1

0x4c76,	// (0x00068377) bg_tb_trans_pane_cp06

0xbc10,	// (0x0006f311) cam4_indicators_pane_g1

0xbc21,	// (0x0006f322) cam4_indicators_pane_g2

0x0002,

0xf83e,	// (0x00072f3f) cam4_indicators_pane_g

0xbc3f,	// (0x0006f340) cam4_indicators_pane_t1

0x4c9c,	// (0x0006839d) main_video4_pane_g1_ParamLimits

0x4c9c,	// (0x0006839d) main_video4_pane_g1

0x4cab,	// (0x000683ac) main_video4_pane_g2_ParamLimits

0x4cab,	// (0x000683ac) main_video4_pane_g2

0x4cba,	// (0x000683bb) main_video4_pane_g3_ParamLimits

0x4cba,	// (0x000683bb) main_video4_pane_g3

0x4cc9,	// (0x000683ca) main_video4_pane_g4_ParamLimits

0x4cc9,	// (0x000683ca) main_video4_pane_g4

0x0004,

0xf845,	// (0x00072f46) main_video4_pane_g_ParamLimits

0xf845,	// (0x00072f46) main_video4_pane_g

0x4ce7,	// (0x000683e8) vid4_indicators_pane_ParamLimits

0x4ce7,	// (0x000683e8) vid4_indicators_pane

0x4d15,	// (0x00068416) video4_image_uncrop_cif_pane_ParamLimits

0x4d15,	// (0x00068416) video4_image_uncrop_cif_pane

0x4d2f,	// (0x00068430) video4_image_uncrop_nhd_pane_ParamLimits

0x4d2f,	// (0x00068430) video4_image_uncrop_nhd_pane

0x4b64,	// (0x00068265) video4_image_uncrop_vga_pane_ParamLimits

0x4b64,	// (0x00068265) video4_image_uncrop_vga_pane

0xa104,	// (0x0006d805) bg_tb_trans_pane_cp07

0xbc6b,	// (0x0006f36c) vid4_indicators_pane_g1

0xbc7f,	// (0x0006f380) vid4_indicators_pane_g2

0xbc93,	// (0x0006f394) vid4_indicators_pane_g3

0x0004,

0xf850,	// (0x00072f51) vid4_indicators_pane_g

0xbcc2,	// (0x0006f3c3) vid4_indicators_pane_t1

0x4d43,	// (0x00068444) cam4_autofocus_pane_g1

0x4d4b,	// (0x0006844c) cam4_autofocus_pane_g2

0x4d53,	// (0x00068454) cam4_autofocus_pane_g3

0x0002,

0xf85b,	// (0x00072f5c) cam4_autofocus_pane_g

0x4d5b,	// (0x0006845c) cam4_autofocus_pane_g3_copy1

0x4590,	// (0x00067c91) video_down_pane_cp_t1

0x459e,	// (0x00067c9f) video_down_pane_cp_t2

0x0001,

0xf7d3,	// (0x00072ed4) video_down_pane_cp_t

0xa104,	// (0x0006d805) popup_vitu2_window_ParamLimits

0xa104,	// (0x0006d805) popup_vitu2_window

0x4d63,	// (0x00068464) aid_size_cell2_itu2_ParamLimits

0x4d63,	// (0x00068464) aid_size_cell2_itu2

0x4d89,	// (0x0006848a) aid_size_cell_itu2_ParamLimits

0x4d89,	// (0x0006848a) aid_size_cell_itu2

0x4de5,	// (0x000684e6) bg_popup_window_pane_cp09_ParamLimits

0x4de5,	// (0x000684e6) bg_popup_window_pane_cp09

0x4df3,	// (0x000684f4) field_vitu2_entry_pane_ParamLimits

0x4df3,	// (0x000684f4) field_vitu2_entry_pane

0x4e19,	// (0x0006851a) grid_vitu2_function_pane_ParamLimits

0x4e19,	// (0x0006851a) grid_vitu2_function_pane

0x4e6a,	// (0x0006856b) grid_vitu2_itu_pane_ParamLimits

0x4e6a,	// (0x0006856b) grid_vitu2_itu_pane

0x4f00,	// (0x00068601) cell_vitu2_itu_pane_ParamLimits

0x4f00,	// (0x00068601) cell_vitu2_itu_pane

0x4f2c,	// (0x0006862d) cell_vitu2_function_pane_ParamLimits

0x4f2c,	// (0x0006862d) cell_vitu2_function_pane

0xea2e,	// (0x0007212f) bg_popup_call_pane_cp08_ParamLimits

0xea2e,	// (0x0007212f) bg_popup_call_pane_cp08

0xea45,	// (0x00072146) field_vitu2_entry_pane_g1

0xea51,	// (0x00072152) field_vitu2_entry_pane_g2

0x0002,

0xf862,	// (0x00072f63) field_vitu2_entry_pane_g

0x4f6b,	// (0x0006866c) field_vitu2_entry_pane_t1_ParamLimits

0x4f6b,	// (0x0006866c) field_vitu2_entry_pane_t1

0xea5d,	// (0x0007215e) field_vitu2_entry_pane_t2_ParamLimits

0xea5d,	// (0x0007215e) field_vitu2_entry_pane_t2

0x0001,

0xf869,	// (0x00072f6a) field_vitu2_entry_pane_t_ParamLimits

0xf869,	// (0x00072f6a) field_vitu2_entry_pane_t

0x4f9b,	// (0x0006869c) bg_button_pane_cp010_ParamLimits

0x4f9b,	// (0x0006869c) bg_button_pane_cp010

0x4fa9,	// (0x000686aa) cell_vitu2_itu_pane_g1

0x4fcf,	// (0x000686d0) cell_vitu2_itu_pane_t1_ParamLimits

0x4fcf,	// (0x000686d0) cell_vitu2_itu_pane_t1

0x03c4,	// (0x00063ac5) cell_vitu2_itu_pane_t2_ParamLimits

0x03c4,	// (0x00063ac5) cell_vitu2_itu_pane_t2

0x0002,

0xf873,	// (0x00072f74) cell_vitu2_itu_pane_t_ParamLimits

0xf873,	// (0x00072f74) cell_vitu2_itu_pane_t

0xa104,	// (0x0006d805) bg_button_pane_cp011

0x502d,	// (0x0006872e) cell_vitu2_function_pane_g1

0xa112,	// (0x0006d813) main_myfav_hc_pane

0x493d,	// (0x0006803e) popup_image3_note_pane_ParamLimits

0x493d,	// (0x0006803e) popup_image3_note_pane

0x4959,	// (0x0006805a) popup_image3_tool_bar_pane_ParamLimits

0x4959,	// (0x0006805a) popup_image3_tool_bar_pane

0x0452,	// (0x00063b53) cell_vitu2_itu_pane_t3_ParamLimits

0x0452,	// (0x00063b53) cell_vitu2_itu_pane_t3

0xa08d,	// (0x0006d78e) bg_popup_trans_pane

0xea82,	// (0x00072183) grid_image3_tool_bar_pane

0xea8c,	// (0x0007218d) bg_popup_trans_pane_g1

0xad3d,	// (0x0006e43e) bg_popup_trans_pane_g2

0xea94,	// (0x00072195) bg_popup_trans_pane_g3

0xea9c,	// (0x0007219d) bg_popup_trans_pane_g4

0xeaa4,	// (0x000721a5) bg_popup_trans_pane_g5

0xeaac,	// (0x000721ad) bg_popup_trans_pane_g6

0xeab4,	// (0x000721b5) bg_popup_trans_pane_g7

0xeabc,	// (0x000721bd) bg_popup_trans_pane_g8

0xad1d,	// (0x0006e41e) bg_popup_trans_pane_g9

0x0008,

0xf87a,	// (0x00072f7b) bg_popup_trans_pane_g

0xeac4,	// (0x000721c5) cell_image3_tool_bar_pane_ParamLimits

0xeac4,	// (0x000721c5) cell_image3_tool_bar_pane

0xab2c,	// (0x0006e22d) cell_image3_tool_bar_pane_g1

0xa08d,	// (0x0006d78e) bg_popup_trans_pane_cp1

0xead8,	// (0x000721d9) popup_image3_note_pane_t1

0xeae6,	// (0x000721e7) popup_image3_note_pane_t2

0xeaf4,	// (0x000721f5) popup_image3_note_pane_t3

0x0002,

0xf88d,	// (0x00072f8e) popup_image3_note_pane_t

0xeb02,	// (0x00072203) popup_image3_note_pane_t3_copy1

0x5041,	// (0x00068742) bg_myfav_hc_instruction_pane_ParamLimits

0x5041,	// (0x00068742) bg_myfav_hc_instruction_pane

0x5055,	// (0x00068756) cell_myfav_contact_pane_ParamLimits

0x5055,	// (0x00068756) cell_myfav_contact_pane

0x5073,	// (0x00068774) cell_myfav_contact_pane_cp1_ParamLimits

0x5073,	// (0x00068774) cell_myfav_contact_pane_cp1

0x508b,	// (0x0006878c) cell_myfav_contact_pane_cp2_ParamLimits

0x508b,	// (0x0006878c) cell_myfav_contact_pane_cp2

0x50a3,	// (0x000687a4) cell_myfav_contact_pane_cp3_ParamLimits

0x50a3,	// (0x000687a4) cell_myfav_contact_pane_cp3

0x50ba,	// (0x000687bb) cell_myfav_contact_pane_cp4_ParamLimits

0x50ba,	// (0x000687bb) cell_myfav_contact_pane_cp4

0x50d2,	// (0x000687d3) cell_myfav_contact_pane_cp5_ParamLimits

0x50d2,	// (0x000687d3) cell_myfav_contact_pane_cp5

0x50e6,	// (0x000687e7) cell_myfav_contact_pane_cp6_ParamLimits

0x50e6,	// (0x000687e7) cell_myfav_contact_pane_cp6

0x50fc,	// (0x000687fd) cell_myfav_contact_pane_cp7_ParamLimits

0x50fc,	// (0x000687fd) cell_myfav_contact_pane_cp7

0xeb10,	// (0x00072211) listscroll_gen_pane_cp05

0x5116,	// (0x00068817) main_myfav_hc_pane_g1_ParamLimits

0x5116,	// (0x00068817) main_myfav_hc_pane_g1

0x5130,	// (0x00068831) main_myfav_hc_pane_g2_ParamLimits

0x5130,	// (0x00068831) main_myfav_hc_pane_g2

0x0002,

0xf894,	// (0x00072f95) main_myfav_hc_pane_g_ParamLimits

0xf894,	// (0x00072f95) main_myfav_hc_pane_g

0x5162,	// (0x00068863) main_myfav_hc_pane_t1_ParamLimits

0x5162,	// (0x00068863) main_myfav_hc_pane_t1

0xeb19,	// (0x0007221a) main_myfav_hc_pane_t2_ParamLimits

0xeb19,	// (0x0007221a) main_myfav_hc_pane_t2

0xeb2b,	// (0x0007222c) main_myfav_hc_pane_t3_ParamLimits

0xeb2b,	// (0x0007222c) main_myfav_hc_pane_t3

0x5179,	// (0x0006887a) main_myfav_hc_pane_t4_ParamLimits

0x5179,	// (0x0006887a) main_myfav_hc_pane_t4

0x0004,

0xf89b,	// (0x00072f9c) main_myfav_hc_pane_t_ParamLimits

0xf89b,	// (0x00072f9c) main_myfav_hc_pane_t

0xab2c,	// (0x0006e22d) bg_myfav_hc_instruction_pane_g1

0xeb3d,	// (0x0007223e) cell_myfav_contact_pane_g1_ParamLimits

0xeb3d,	// (0x0007223e) cell_myfav_contact_pane_g1

0xeb3d,	// (0x0007223e) cell_myfav_contact_pane_g2_ParamLimits

0xeb3d,	// (0x0007223e) cell_myfav_contact_pane_g2

0xeb49,	// (0x0007224a) cell_myfav_contact_pane_g3_ParamLimits

0xeb49,	// (0x0007224a) cell_myfav_contact_pane_g3

0xa821,	// (0x0006df22) cell_myfav_contact_pane_g4_ParamLimits

0xa821,	// (0x0006df22) cell_myfav_contact_pane_g4

0xeb56,	// (0x00072257) cell_myfav_contact_pane_g5_ParamLimits

0xeb56,	// (0x00072257) cell_myfav_contact_pane_g5

0x0004,

0xf8a6,	// (0x00072fa7) cell_myfav_contact_pane_g_ParamLimits

0xf8a6,	// (0x00072fa7) cell_myfav_contact_pane_g

0x514a,	// (0x0006884b) main_myfav_hc_pane_g3_ParamLimits

0x514a,	// (0x0006884b) main_myfav_hc_pane_g3

0x035e,	// (0x00063a5f) popup_adpt_find_window

0x51a1,	// (0x000688a2) afind_page_pane_ParamLimits

0x51a1,	// (0x000688a2) afind_page_pane

0x51b6,	// (0x000688b7) aid_size_cell_afind_ParamLimits

0x51b6,	// (0x000688b7) aid_size_cell_afind

0x51d4,	// (0x000688d5) bg_popup_sub_pane_cp09_ParamLimits

0x51d4,	// (0x000688d5) bg_popup_sub_pane_cp09

0x51e1,	// (0x000688e2) find_pane_cp01_ParamLimits

0x51e1,	// (0x000688e2) find_pane_cp01

0xeb62,	// (0x00072263) grid_afind_control_pane_ParamLimits

0xeb62,	// (0x00072263) grid_afind_control_pane

0x51ee,	// (0x000688ef) grid_afind_pane_ParamLimits

0x51ee,	// (0x000688ef) grid_afind_pane

0x5210,	// (0x00068911) cell_afind_pane_ParamLimits

0x5210,	// (0x00068911) cell_afind_pane

0xab2c,	// (0x0006e22d) afind_page_pane_g1

0x5277,	// (0x00068978) afind_page_pane_g2

0x527f,	// (0x00068980) afind_page_pane_g3

0x0002,

0xf8b1,	// (0x00072fb2) afind_page_pane_g

0x5287,	// (0x00068988) afind_page_pane_t1

0xeb88,	// (0x00072289) cell_afind_grid_control_pane_ParamLimits

0xeb88,	// (0x00072289) cell_afind_grid_control_pane

0xe9f6,	// (0x000720f7) bg_button_pane_cp69_ParamLimits

0xe9f6,	// (0x000720f7) bg_button_pane_cp69

0x5295,	// (0x00068996) cell_afind_pane_g1_ParamLimits

0x5295,	// (0x00068996) cell_afind_pane_g1

0x52a2,	// (0x000689a3) cell_afind_pane_t1_ParamLimits

0x52a2,	// (0x000689a3) cell_afind_pane_t1

0xab36,	// (0x0006e237) bg_button_pane_cp72

0xeb97,	// (0x00072298) cell_afind_grid_control_pane_g1

0x2bd2,	// (0x000662d3) aid_image_placing_area_ParamLimits

0x2bd2,	// (0x000662d3) aid_image_placing_area

0xa813,	// (0x0006df14) field_vitu_entry_pane_g1_ParamLimits

0xa813,	// (0x0006df14) field_vitu_entry_pane_g1

0xa813,	// (0x0006df14) field_vitu_entry_pane_g2_ParamLimits

0xa813,	// (0x0006df14) field_vitu_entry_pane_g2

0x0001,

0xf1c1,	// (0x000728c2) field_vitu_entry_pane_g_ParamLimits

0xf1c1,	// (0x000728c2) field_vitu_entry_pane_g

0xe788,	// (0x00071e89) cell_vitu_itu_pane_g1_ParamLimits

0xe76b,	// (0x00071e6c) cell_vitu_itu_pane_t3_ParamLimits

0xe76b,	// (0x00071e6c) cell_vitu_itu_pane_t3

0xe99f,	// (0x000720a0) mp4_progress_pane_t1_ParamLimits

0xe9b8,	// (0x000720b9) mp4_progress_pane_t2_ParamLimits

0xf7f7,	// (0x00072ef8) mp4_progress_pane_t_ParamLimits

0xe9d1,	// (0x000720d2) mup_progress_pane_cp04_ParamLimits

0x518d,	// (0x0006888e) main_myfav_hc_pane_t5_ParamLimits

0x518d,	// (0x0006888e) main_myfav_hc_pane_t5

0xa0b3,	// (0x0006d7b4) aid_zoom_text_primary

0x035e,	// (0x00063a5f) popup_adpt_find_window_ParamLimits

0xa104,	// (0x0006d805) main_cam_set_pane

0x4b95,	// (0x00068296) cam4_zoom_pane_ParamLimits

0x4b95,	// (0x00068296) cam4_zoom_pane

0x52b4,	// (0x000689b5) main_cam_set_pane_g1_ParamLimits

0x52b4,	// (0x000689b5) main_cam_set_pane_g1

0x52c2,	// (0x000689c3) main_cam_set_pane_g2_ParamLimits

0x52c2,	// (0x000689c3) main_cam_set_pane_g2

0x0001,

0xf8b8,	// (0x00072fb9) main_cam_set_pane_g_ParamLimits

0xf8b8,	// (0x00072fb9) main_cam_set_pane_g

0x52e3,	// (0x000689e4) main_cam_set_pane_t1_ParamLimits

0x52e3,	// (0x000689e4) main_cam_set_pane_t1

0x52fe,	// (0x000689ff) main_cset_listscroll_pane_ParamLimits

0x52fe,	// (0x000689ff) main_cset_listscroll_pane

0x5324,	// (0x00068a25) main_cset_slider_pane_ParamLimits

0x5324,	// (0x00068a25) main_cset_slider_pane

0xeba8,	// (0x000722a9) main_cset_list_pane_ParamLimits

0xeba8,	// (0x000722a9) main_cset_list_pane

0xebb8,	// (0x000722b9) scroll_pane_cp028

0x534a,	// (0x00068a4b) aid_area_touch_slider

0x5366,	// (0x00068a67) cset_slider_pane

0x5389,	// (0x00068a8a) main_cset_slider_pane_g1

0x539e,	// (0x00068a9f) main_cset_slider_pane_g2

0x0011,

0xf8bd,	// (0x00072fbe) main_cset_slider_pane_g

0xebf1,	// (0x000722f2) main_cset_slider_pane_t1

0x545a,	// (0x00068b5b) main_cset_slider_pane_t2

0x5474,	// (0x00068b75) main_cset_slider_pane_t3

0x548e,	// (0x00068b8f) main_cset_slider_pane_t4

0x54a8,	// (0x00068ba9) main_cset_slider_pane_t5

0x54c2,	// (0x00068bc3) main_cset_slider_pane_t6

0x54d7,	// (0x00068bd8) main_cset_slider_pane_t7

0x000e,

0xf8e2,	// (0x00072fe3) main_cset_slider_pane_t

0x55db,	// (0x00068cdc) cset_list_set_pane_ParamLimits

0x55db,	// (0x00068cdc) cset_list_set_pane

0xec8b,	// (0x0007238c) aid_position_infowindow_above

0xec93,	// (0x00072394) aid_position_infowindow_below

0xec9b,	// (0x0007239c) cset_list_set_pane_g1_ParamLimits

0xec9b,	// (0x0007239c) cset_list_set_pane_g1

0xeca7,	// (0x000723a8) cset_list_set_pane_g3_ParamLimits

0xeca7,	// (0x000723a8) cset_list_set_pane_g3

0x0001,

0xf901,	// (0x00073002) cset_list_set_pane_g_ParamLimits

0xf901,	// (0x00073002) cset_list_set_pane_g

0xecb6,	// (0x000723b7) cset_list_set_pane_t1_ParamLimits

0xecb6,	// (0x000723b7) cset_list_set_pane_t1

0xa7ac,	// (0x0006dead) list_highlight_pane_cp021_ParamLimits

0xa7ac,	// (0x0006dead) list_highlight_pane_cp021

0xb766,	// (0x0006ee67) cset_slider_pane_g1

0xb778,	// (0x0006ee79) cset_slider_pane_g2

0xb76f,	// (0x0006ee70) cset_slider_pane_g3

0x0002,

0xf906,	// (0x00073007) cset_slider_pane_g

0xbcd9,	// (0x0006f3da) aid_area_touch_cam4_zoom

0xbce1,	// (0x0006f3e2) cam4_zoom_cont_pane

0xbce9,	// (0x0006f3ea) cam4_zoom_pane_g1

0xbcf1,	// (0x0006f3f2) cam4_zoom_pane_g2

0x55ed,	// (0x00068cee) cam4_zoom_pane_g3

0x0002,

0xf90d,	// (0x0007300e) cam4_zoom_pane_g

0xbcf9,	// (0x0006f3fa) cam4_zoom_cont_pane_g1

0xbd02,	// (0x0006f403) cam4_zoom_cont_pane_g2

0xbd0b,	// (0x0006f40c) cam4_zoom_cont_pane_g3

0x0002,

0xf914,	// (0x00073015) cam4_zoom_cont_pane_g

0x49c6,	// (0x000680c7) call4_image_pane_ParamLimits

0x49c6,	// (0x000680c7) call4_image_pane

0x4a2d,	// (0x0006812e) call4_windows_conf_pane_ParamLimits

0x4a72,	// (0x00068173) popup_call4_audio_in_window_ParamLimits

0x4a72,	// (0x00068173) popup_call4_audio_in_window

0xa08d,	// (0x0006d78e) bg_popup_call2_act_pane_cp02

0xea02,	// (0x00072103) call4_list_conf_pane

0xab2c,	// (0x0006e22d) call4_image_pane_g1

0xab2c,	// (0x0006e22d) call4_image_pane_g2

0x0001,

0xf398,	// (0x00072a99) call4_image_pane_g

0xecd9,	// (0x000723da) list_single_graphic_popup_conf4_pane_ParamLimits

0xecd9,	// (0x000723da) list_single_graphic_popup_conf4_pane

0xa08d,	// (0x0006d78e) list_highlight_pane_cp022

0xecec,	// (0x000723ed) list_single_graphic_popup_conf4_pane_g1

0xb304,	// (0x0006ea05) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf91b,	// (0x0007301c) list_single_graphic_popup_conf4_pane_g

0xecf4,	// (0x000723f5) list_single_graphic_popup_conf4_pane_t1

0x1332,	// (0x00064a33) popup_vtel_slider_window_ParamLimits

0x1332,	// (0x00064a33) popup_vtel_slider_window

0xe9e4,	// (0x000720e5) dialer2_ne_pane_t2_ParamLimits

0xe9e4,	// (0x000720e5) dialer2_ne_pane_t2

0x0001,

0xf7fc,	// (0x00072efd) dialer2_ne_pane_t_ParamLimits

0xf7fc,	// (0x00072efd) dialer2_ne_pane_t

0xd678,	// (0x00070d79) bg_popup_sub_pane_cp010_ParamLimits

0xd678,	// (0x00070d79) bg_popup_sub_pane_cp010

0x55f5,	// (0x00068cf6) popup_vtel_slider_window_g1_ParamLimits

0x55f5,	// (0x00068cf6) popup_vtel_slider_window_g1

0x5608,	// (0x00068d09) popup_vtel_slider_window_g2_ParamLimits

0x5608,	// (0x00068d09) popup_vtel_slider_window_g2

0x0003,

0xf920,	// (0x00073021) popup_vtel_slider_window_g_ParamLimits

0xf920,	// (0x00073021) popup_vtel_slider_window_g

0x565e,	// (0x00068d5f) vtel_slider_pane_ParamLimits

0x565e,	// (0x00068d5f) vtel_slider_pane

0x5680,	// (0x00068d81) vtel_slider_pane_g1_ParamLimits

0x5680,	// (0x00068d81) vtel_slider_pane_g1

0x5694,	// (0x00068d95) vtel_slider_pane_g2_ParamLimits

0x5694,	// (0x00068d95) vtel_slider_pane_g2

0x56ac,	// (0x00068dad) vtel_slider_pane_g3_ParamLimits

0x56ac,	// (0x00068dad) vtel_slider_pane_g3

0x5680,	// (0x00068d81) vtel_slider_pane_g4_ParamLimits

0x5680,	// (0x00068d81) vtel_slider_pane_g4

0x56c2,	// (0x00068dc3) vtel_slider_pane_g5_ParamLimits

0x56c2,	// (0x00068dc3) vtel_slider_pane_g5

0x0004,

0xf929,	// (0x0007302a) vtel_slider_pane_g_ParamLimits

0xf929,	// (0x0007302a) vtel_slider_pane_g

0xa104,	// (0x0006d805) main_gallery2_pane

0x4db5,	// (0x000684b6) aid_size_row_itut2_dropdow_list_ParamLimits

0x4db5,	// (0x000684b6) aid_size_row_itut2_dropdow_list

0x4e41,	// (0x00068542) grid_vitu2_function_top_pane_ParamLimits

0x4e41,	// (0x00068542) grid_vitu2_function_top_pane

0x4eab,	// (0x000685ac) popup_vitu2_dropdown_list_window_ParamLimits

0x4eab,	// (0x000685ac) popup_vitu2_dropdown_list_window

0x4ed2,	// (0x000685d3) popup_vitu2_match_list_window

0x56d8,	// (0x00068dd9) cell_vitu2_function_top_pane_ParamLimits

0x56d8,	// (0x00068dd9) cell_vitu2_function_top_pane

0x56f0,	// (0x00068df1) cell_vitu2_function_top_pane_cp01_ParamLimits

0x56f0,	// (0x00068df1) cell_vitu2_function_top_pane_cp01

0x570c,	// (0x00068e0d) cell_vitu2_function_top_wide_pane_ParamLimits

0x570c,	// (0x00068e0d) cell_vitu2_function_top_wide_pane

0xa104,	// (0x0006d805) bg_button_pane_cp012

0x572a,	// (0x00068e2b) cell_vitu2_function_top_pane_g1

0xbd14,	// (0x0006f415) bg_button_pane_cp013_ParamLimits

0xbd14,	// (0x0006f415) bg_button_pane_cp013

0x573e,	// (0x00068e3f) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x573e,	// (0x00068e3f) cell_vitu2_function_top_wide_pane_g1

0xa104,	// (0x0006d805) bg_popup_sub_pane_cp20

0x5756,	// (0x00068e57) list_vitu2_match_list_pane

0xea8c,	// (0x0007218d) bg_popup_sub_pane_cp20_g1

0xea94,	// (0x00072195) bg_popup_sub_pane_cp20_g2

0xad3d,	// (0x0006e43e) bg_popup_sub_pane_cp20_g3

0xea9c,	// (0x0007219d) bg_popup_sub_pane_cp20_g4

0xad1d,	// (0x0006e41e) bg_popup_sub_pane_cp20_g5

0xed0a,	// (0x0007240b) bg_popup_sub_pane_cp20_g6

0xeaac,	// (0x000721ad) bg_popup_sub_pane_cp20_g7

0xeab4,	// (0x000721b5) bg_popup_sub_pane_cp20_g8

0xeabc,	// (0x000721bd) bg_popup_sub_pane_cp20_g9

0x0008,

0xf934,	// (0x00073035) bg_popup_sub_pane_cp20_g

0xbd30,	// (0x0006f431) list_vitu2_match_list_item_pane_ParamLimits

0xbd30,	// (0x0006f431) list_vitu2_match_list_item_pane

0xbd42,	// (0x0006f443) list_vitu2_match_list_item_pane_t1

0xa112,	// (0x0006d813) bg_popup_sub_pane_cp21

0xaaec,	// (0x0006e1ed) grid_vitu2_dropdown_list_pane

0x576e,	// (0x00068e6f) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x576e,	// (0x00068e6f) cell_vitu2_dropdown_list_char_pane

0x578e,	// (0x00068e8f) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x578e,	// (0x00068e8f) cell_vitu2_dropdown_list_ctrl_pane

0xed12,	// (0x00072413) cell_vitu2_dropdown_list_char_pane_g1

0xed1b,	// (0x0007241c) cell_vitu2_dropdown_list_char_pane_g2

0xed24,	// (0x00072425) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf947,	// (0x00073048) cell_vitu2_dropdown_list_char_pane_g

0x57b6,	// (0x00068eb7) cell_vitu2_dropdown_list_char_pane_t1

0x57c4,	// (0x00068ec5) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x57c4,	// (0x00068ec5) cell_vitu2_dropdown_list_ctrl_pane_g1

0x57d1,	// (0x00068ed2) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x57d1,	// (0x00068ed2) cell_vitu2_dropdown_list_ctrl_pane_g2

0x57de,	// (0x00068edf) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x57de,	// (0x00068edf) cell_vitu2_dropdown_list_ctrl_pane_g3

0x57eb,	// (0x00068eec) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x57eb,	// (0x00068eec) cell_vitu2_dropdown_list_ctrl_pane_g4

0x4c76,	// (0x00068377) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x4c76,	// (0x00068377) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf94e,	// (0x0007304f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf94e,	// (0x0007304f) cell_vitu2_dropdown_list_ctrl_pane_g

0x5807,	// (0x00068f08) aid_size_cell_gallery2_ParamLimits

0x5807,	// (0x00068f08) aid_size_cell_gallery2

0x5825,	// (0x00068f26) grid_gallery2_pane_ParamLimits

0x5825,	// (0x00068f26) grid_gallery2_pane

0x583f,	// (0x00068f40) scroll_pane_cp029_ParamLimits

0x583f,	// (0x00068f40) scroll_pane_cp029

0x5850,	// (0x00068f51) cell_gallery2_pane_ParamLimits

0x5850,	// (0x00068f51) cell_gallery2_pane

0xed2d,	// (0x0007242e) cell_gallery2_pane_g2

0x58af,	// (0x00068fb0) cell_gallery2_pane_g3

0xed35,	// (0x00072436) cell_gallery2_pane_g4

0xed3d,	// (0x0007243e) cell_gallery2_pane_g5

0xaaec,	// (0x0006e1ed) grid_highlight_pane_cp10

0x4ed2,	// (0x000685d3) popup_vitu2_match_list_window_ParamLimits

0x4ee7,	// (0x000685e8) popup_vitu2_query_window_ParamLimits

0x4ee7,	// (0x000685e8) popup_vitu2_query_window

0xa112,	// (0x0006d813) bg_vitu2_candi_button_pane

0xed12,	// (0x00072413) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xed1b,	// (0x0007241c) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xed24,	// (0x00072425) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x58b7,	// (0x00068fb8) bg_button_pane_cp015

0x58c8,	// (0x00068fc9) bg_button_pane_cp016

0x58d4,	// (0x00068fd5) bg_button_pane_cp017

0xb6f6,	// (0x0006edf7) bg_popup_sub_pane_cp22

0xed45,	// (0x00072446) popup_vitu2_query_window_g1

0x5912,	// (0x00069013) popup_vitu2_query_window_g2

0x0002,

0xf959,	// (0x0007305a) popup_vitu2_query_window_g

0x5934,	// (0x00069035) popup_vitu2_query_window_t1_ParamLimits

0x5934,	// (0x00069035) popup_vitu2_query_window_t1

0x5967,	// (0x00069068) popup_vitu2_query_window_t2_ParamLimits

0x5967,	// (0x00069068) popup_vitu2_query_window_t2

0x5979,	// (0x0006907a) popup_vitu2_query_window_t3_ParamLimits

0x5979,	// (0x0006907a) popup_vitu2_query_window_t3

0x59a1,	// (0x000690a2) popup_vitu2_query_window_t4_ParamLimits

0x59a1,	// (0x000690a2) popup_vitu2_query_window_t4

0x59b5,	// (0x000690b6) popup_vitu2_query_window_t5_ParamLimits

0x59b5,	// (0x000690b6) popup_vitu2_query_window_t5

0x0006,

0xf960,	// (0x00073061) popup_vitu2_query_window_t_ParamLimits

0xf960,	// (0x00073061) popup_vitu2_query_window_t

0xeba0,	// (0x000722a1) main_cset_text_pane

0x534a,	// (0x00068a4b) aid_area_touch_slider_ParamLimits

0x5366,	// (0x00068a67) cset_slider_pane_ParamLimits

0x5389,	// (0x00068a8a) main_cset_slider_pane_g1_ParamLimits

0x539e,	// (0x00068a9f) main_cset_slider_pane_g2_ParamLimits

0xebc1,	// (0x000722c2) main_cset_slider_pane_g3_ParamLimits

0xebc1,	// (0x000722c2) main_cset_slider_pane_g3

0x53b3,	// (0x00068ab4) main_cset_slider_pane_g4_ParamLimits

0x53b3,	// (0x00068ab4) main_cset_slider_pane_g4

0x53c2,	// (0x00068ac3) main_cset_slider_pane_g5_ParamLimits

0x53c2,	// (0x00068ac3) main_cset_slider_pane_g5

0x53ce,	// (0x00068acf) main_cset_slider_pane_g6_ParamLimits

0x53ce,	// (0x00068acf) main_cset_slider_pane_g6

0xf8bd,	// (0x00072fbe) main_cset_slider_pane_g_ParamLimits

0xebf1,	// (0x000722f2) main_cset_slider_pane_t1_ParamLimits

0x545a,	// (0x00068b5b) main_cset_slider_pane_t2_ParamLimits

0x5474,	// (0x00068b75) main_cset_slider_pane_t3_ParamLimits

0x548e,	// (0x00068b8f) main_cset_slider_pane_t4_ParamLimits

0x54a8,	// (0x00068ba9) main_cset_slider_pane_t5_ParamLimits

0x54c2,	// (0x00068bc3) main_cset_slider_pane_t6_ParamLimits

0x54d7,	// (0x00068bd8) main_cset_slider_pane_t7_ParamLimits

0x5501,	// (0x00068c02) main_cset_slider_pane_t8_ParamLimits

0x5501,	// (0x00068c02) main_cset_slider_pane_t8

0x5529,	// (0x00068c2a) main_cset_slider_pane_t9_ParamLimits

0x5529,	// (0x00068c2a) main_cset_slider_pane_t9

0x5551,	// (0x00068c52) main_cset_slider_pane_t10_ParamLimits

0x5551,	// (0x00068c52) main_cset_slider_pane_t10

0x5579,	// (0x00068c7a) main_cset_slider_pane_t11_ParamLimits

0x5579,	// (0x00068c7a) main_cset_slider_pane_t11

0x55a1,	// (0x00068ca2) main_cset_slider_pane_t12_ParamLimits

0x55a1,	// (0x00068ca2) main_cset_slider_pane_t12

0x55be,	// (0x00068cbf) main_cset_slider_pane_t13_ParamLimits

0x55be,	// (0x00068cbf) main_cset_slider_pane_t13

0xf8e2,	// (0x00072fe3) main_cset_slider_pane_t_ParamLimits

0xa08d,	// (0x0006d78e) bg_popup_sub_pane_cp011

0xed51,	// (0x00072452) main_cset_text_pane_g1

0xed59,	// (0x0007245a) main_cset_text_pane_t1

0xed67,	// (0x00072468) main_cset_text_pane_t2

0xed75,	// (0x00072476) main_cset_text_pane_t3

0xed83,	// (0x00072484) main_cset_text_pane_t4

0xed91,	// (0x00072492) main_cset_text_pane_t5

0xed9f,	// (0x000724a0) main_cset_text_pane_t6

0xedad,	// (0x000724ae) main_cset_text_pane_t7

0x0006,

0xf96f,	// (0x00073070) main_cset_text_pane_t

0xa112,	// (0x0006d813) main_cam4_burst_pane

0xa112,	// (0x0006d813) main_cam5_pane

0xeb76,	// (0x00072277) bg_button_pane_cp019

0xeb7f,	// (0x00072280) bg_button_pane_cp020

0xebcd,	// (0x000722ce) main_cset_slider_pane_g7_ParamLimits

0xebcd,	// (0x000722ce) main_cset_slider_pane_g7

0xebd9,	// (0x000722da) main_cset_slider_pane_g8_ParamLimits

0xebd9,	// (0x000722da) main_cset_slider_pane_g8

0x53e2,	// (0x00068ae3) main_cset_slider_pane_g9_ParamLimits

0x53e2,	// (0x00068ae3) main_cset_slider_pane_g9

0x53ee,	// (0x00068aef) main_cset_slider_pane_g10_ParamLimits

0x53ee,	// (0x00068aef) main_cset_slider_pane_g10

0x53fa,	// (0x00068afb) main_cset_slider_pane_g11_ParamLimits

0x53fa,	// (0x00068afb) main_cset_slider_pane_g11

0x5406,	// (0x00068b07) main_cset_slider_pane_g12_ParamLimits

0x5406,	// (0x00068b07) main_cset_slider_pane_g12

0x5412,	// (0x00068b13) main_cset_slider_pane_g13_ParamLimits

0x5412,	// (0x00068b13) main_cset_slider_pane_g13

0x541e,	// (0x00068b1f) main_cset_slider_pane_g14_ParamLimits

0x541e,	// (0x00068b1f) main_cset_slider_pane_g14

0x542a,	// (0x00068b2b) main_cset_slider_pane_g15_ParamLimits

0x542a,	// (0x00068b2b) main_cset_slider_pane_g15

0xec19,	// (0x0007231a) main_cset_slider_pane_t14_ParamLimits

0xec19,	// (0x0007231a) main_cset_slider_pane_t14

0xec52,	// (0x00072353) main_cset_slider_pane_t15_ParamLimits

0xec52,	// (0x00072353) main_cset_slider_pane_t15

0x5a1f,	// (0x00069120) aid_cam4_burst_size_cell_ParamLimits

0x5a1f,	// (0x00069120) aid_cam4_burst_size_cell

0x5a3f,	// (0x00069140) grid_cam4_burst_pane_ParamLimits

0x5a3f,	// (0x00069140) grid_cam4_burst_pane

0x5a77,	// (0x00069178) linegrid_cam4_burst_pane_ParamLimits

0x5a77,	// (0x00069178) linegrid_cam4_burst_pane

0xedbb,	// (0x000724bc) scroll_pane_cp30_ParamLimits

0xedbb,	// (0x000724bc) scroll_pane_cp30

0x5a9b,	// (0x0006919c) cell_cam4_burst_pane_ParamLimits

0x5a9b,	// (0x0006919c) cell_cam4_burst_pane

0xedc7,	// (0x000724c8) linegrid_cam4_burst_pane_g1_ParamLimits

0xedc7,	// (0x000724c8) linegrid_cam4_burst_pane_g1

0x5ae8,	// (0x000691e9) linegrid_cam4_burst_pane_g2_ParamLimits

0x5ae8,	// (0x000691e9) linegrid_cam4_burst_pane_g2

0xedd4,	// (0x000724d5) linegrid_cam4_burst_pane_g3_ParamLimits

0xedd4,	// (0x000724d5) linegrid_cam4_burst_pane_g3

0x0002,

0xf97e,	// (0x0007307f) linegrid_cam4_burst_pane_g_ParamLimits

0xf97e,	// (0x0007307f) linegrid_cam4_burst_pane_g

0x5af9,	// (0x000691fa) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x5af9,	// (0x000691fa) linegrid_cam4_burst_pane_g3_copy1

0xede1,	// (0x000724e2) linegrid_cam4_burst_pane_g4_ParamLimits

0xede1,	// (0x000724e2) linegrid_cam4_burst_pane_g4

0x5b13,	// (0x00069214) linegrid_cam4_burst_pane_g5_ParamLimits

0x5b13,	// (0x00069214) linegrid_cam4_burst_pane_g5

0x5b24,	// (0x00069225) linegrid_cam4_burst_pane_g6_ParamLimits

0x5b24,	// (0x00069225) linegrid_cam4_burst_pane_g6

0xedee,	// (0x000724ef) linegrid_cam4_burst_pane_g7_ParamLimits

0xedee,	// (0x000724ef) linegrid_cam4_burst_pane_g7

0x5b3b,	// (0x0006923c) cell_cam4_burst_pane_g1

0xee07,	// (0x00072508) main_cam5_pane_t1_ParamLimits

0xee07,	// (0x00072508) main_cam5_pane_t1

0xee19,	// (0x0007251a) main_cam5_pane_t2_ParamLimits

0xee19,	// (0x0007251a) main_cam5_pane_t2

0xee2b,	// (0x0007252c) main_cam5_pane_t3_ParamLimits

0xee2b,	// (0x0007252c) main_cam5_pane_t3

0xee3d,	// (0x0007253e) main_cam5_pane_t4_ParamLimits

0xee3d,	// (0x0007253e) main_cam5_pane_t4

0xee55,	// (0x00072556) main_cam5_pane_t5_ParamLimits

0xee55,	// (0x00072556) main_cam5_pane_t5

0xee69,	// (0x0007256a) main_cam5_pane_t6_ParamLimits

0xee69,	// (0x0007256a) main_cam5_pane_t6

0xee7d,	// (0x0007257e) main_cam5_pane_t7_ParamLimits

0xee7d,	// (0x0007257e) main_cam5_pane_t7

0xee8f,	// (0x00072590) main_cam5_pane_t8_ParamLimits

0xee8f,	// (0x00072590) main_cam5_pane_t8

0xeeab,	// (0x000725ac) main_cam5_pane_t9_ParamLimits

0xeeab,	// (0x000725ac) main_cam5_pane_t9

0xeebd,	// (0x000725be) main_cam5_pane_t10_ParamLimits

0xeebd,	// (0x000725be) main_cam5_pane_t10

0xeecf,	// (0x000725d0) main_cam5_pane_t11_ParamLimits

0xeecf,	// (0x000725d0) main_cam5_pane_t11

0xeee1,	// (0x000725e2) main_cam5_pane_t12_ParamLimits

0xeee1,	// (0x000725e2) main_cam5_pane_t12

0xeef6,	// (0x000725f7) main_cam5_pane_t13_ParamLimits

0xeef6,	// (0x000725f7) main_cam5_pane_t13

0x000c,

0xf98a,	// (0x0007308b) main_cam5_pane_t_ParamLimits

0xf98a,	// (0x0007308b) main_cam5_pane_t

0x0642,	// (0x00063d43) popup_scut_keymap_window_ParamLimits

0x0642,	// (0x00063d43) popup_scut_keymap_window

0x5b4e,	// (0x0006924f) aid_size_cell_brow_shortcut

0xaaec,	// (0x0006e1ed) bg_popup_window_pane_cp010

0x5b5a,	// (0x0006925b) grid_scut_pane

0x5b66,	// (0x00069267) cell_scut_pane_ParamLimits

0x5b66,	// (0x00069267) cell_scut_pane

0x5b7d,	// (0x0006927e) cell_scut_pane_g1

0xef13,	// (0x00072614) cell_scut_pane_t1

0xef22,	// (0x00072623) cell_scut_pane_t2

0x5b86,	// (0x00069287) cell_scut_pane_t3

0x0002,

0xf9a5,	// (0x000730a6) cell_scut_pane_t

0x3ae7,	// (0x000671e8) main_mup3_pane_g8_ParamLimits

0x3ae7,	// (0x000671e8) main_mup3_pane_g8

0x4dcd,	// (0x000684ce) area_vitu2_query_pane_ParamLimits

0x4dcd,	// (0x000684ce) area_vitu2_query_pane

0x58e0,	// (0x00068fe1) input_focus_pane_cp08

0xef31,	// (0x00072632) area_vitu2_query_pane_g1

0x5b94,	// (0x00069295) area_vitu2_query_pane_g2

0x0001,

0xf9ac,	// (0x000730ad) area_vitu2_query_pane_g

0x5ba3,	// (0x000692a4) area_vitu2_query_pane_t1_ParamLimits

0x5ba3,	// (0x000692a4) area_vitu2_query_pane_t1

0x5bb7,	// (0x000692b8) area_vitu2_query_pane_t2_ParamLimits

0x5bb7,	// (0x000692b8) area_vitu2_query_pane_t2

0x5bcb,	// (0x000692cc) area_vitu2_query_pane_t3_ParamLimits

0x5bcb,	// (0x000692cc) area_vitu2_query_pane_t3

0xef3d,	// (0x0007263e) area_vitu2_query_pane_t4_ParamLimits

0xef3d,	// (0x0007263e) area_vitu2_query_pane_t4

0xef65,	// (0x00072666) area_vitu2_query_pane_t5_ParamLimits

0xef65,	// (0x00072666) area_vitu2_query_pane_t5

0xef8d,	// (0x0007268e) area_vitu2_query_pane_t6_ParamLimits

0xef8d,	// (0x0007268e) area_vitu2_query_pane_t6

0x0006,

0xf9b1,	// (0x000730b2) area_vitu2_query_pane_t_ParamLimits

0xf9b1,	// (0x000730b2) area_vitu2_query_pane_t

0x5bf3,	// (0x000692f4) bg_button_pane_cp018

0x5bff,	// (0x00069300) bg_button_pane_cp021

0x5c0b,	// (0x0006930c) bg_button_pane_cp022

0x5c2a,	// (0x0006932b) input_focus_pane_cp09

0xb440,	// (0x0006eb41) aid_size_touch_mv_arrow_left

0xb469,	// (0x0006eb6a) aid_size_touch_mv_arrow_right

0x5442,	// (0x00068b43) main_cset_slider_pane_g16_ParamLimits

0x5442,	// (0x00068b43) main_cset_slider_pane_g16

0x544e,	// (0x00068b4f) main_cset_slider_pane_g17_ParamLimits

0x544e,	// (0x00068b4f) main_cset_slider_pane_g17

0x5b3b,	// (0x0006923c) cell_cam4_burst_pane_g1_ParamLimits

0xa08d,	// (0x0006d78e) compa_mode_pane

0x5618,	// (0x00068d19) popup_vtel_slider_window_g3_ParamLimits

0x5618,	// (0x00068d19) popup_vtel_slider_window_g3

0x562f,	// (0x00068d30) popup_vtel_slider_window_g4_ParamLimits

0x562f,	// (0x00068d30) popup_vtel_slider_window_g4

0x5646,	// (0x00068d47) popup_vtel_slider_window_t1_ParamLimits

0x5646,	// (0x00068d47) popup_vtel_slider_window_t1

0xa112,	// (0x0006d813) main_cl_pane

0xb80f,	// (0x0006ef10) popup_imed_adjust2_window_ParamLimits

0xb6f6,	// (0x0006edf7) bg_tb_trans_pane_cp05_ParamLimits

0xe6a0,	// (0x00071da1) popup_imed_adjust2_window_g1_ParamLimits

0xe6af,	// (0x00071db0) popup_imed_adjust2_window_g2_ParamLimits

0xe6af,	// (0x00071db0) popup_imed_adjust2_window_g2

0xe6bb,	// (0x00071dbc) popup_imed_adjust2_window_g3_ParamLimits

0xe6bb,	// (0x00071dbc) popup_imed_adjust2_window_g3

0x0002,

0xf727,	// (0x00072e28) popup_imed_adjust2_window_g_ParamLimits

0xf727,	// (0x00072e28) popup_imed_adjust2_window_g

0xe6c7,	// (0x00071dc8) popup_imed_adjust2_window_t1_ParamLimits

0xe6df,	// (0x00071de0) slider_imed_adjust_pane_ParamLimits

0xe6f3,	// (0x00071df4) slider_imed_adjust_pane_g1_ParamLimits

0xe703,	// (0x00071e04) slider_imed_adjust_pane_g2_ParamLimits

0xe713,	// (0x00071e14) slider_imed_adjust_pane_g3_ParamLimits

0xe724,	// (0x00071e25) slider_imed_adjust_pane_g4_ParamLimits

0xf72e,	// (0x00072e2f) slider_imed_adjust_pane_g_ParamLimits

0x4b36,	// (0x00068237) aid_touch_area_cam4_ParamLimits

0x4b36,	// (0x00068237) aid_touch_area_cam4

0xbbec,	// (0x0006f2ed) battery_pane_cp01

0x4c05,	// (0x00068306) main_camera4_pane_g6_ParamLimits

0x4c05,	// (0x00068306) main_camera4_pane_g6

0x4c2f,	// (0x00068330) main_camera4_pane_t2_ParamLimits

0x4c2f,	// (0x00068330) main_camera4_pane_t2

0x0001,

0xf830,	// (0x00072f31) main_camera4_pane_t_ParamLimits

0xf830,	// (0x00072f31) main_camera4_pane_t

0x4c84,	// (0x00068385) aid_touch_area_vid4_ParamLimits

0x4c84,	// (0x00068385) aid_touch_area_vid4

0x4cd8,	// (0x000683d9) main_video4_pane_g5_ParamLimits

0x4cd8,	// (0x000683d9) main_video4_pane_g5

0x4cfd,	// (0x000683fe) vid4_progress_pane_ParamLimits

0x4cfd,	// (0x000683fe) vid4_progress_pane

0xebe5,	// (0x000722e6) main_cset_slider_pane_g18_ParamLimits

0xebe5,	// (0x000722e6) main_cset_slider_pane_g18

0xedfb,	// (0x000724fc) cell_cam4_burst_pane_g2_ParamLimits

0xedfb,	// (0x000724fc) cell_cam4_burst_pane_g2

0x0001,

0xf985,	// (0x00073086) cell_cam4_burst_pane_g_ParamLimits

0xf985,	// (0x00073086) cell_cam4_burst_pane_g

0xa8a7,	// (0x0006dfa8) bg_cl_pane_ParamLimits

0xa8a7,	// (0x0006dfa8) bg_cl_pane

0x5c3a,	// (0x0006933b) cl_header_pane_ParamLimits

0x5c3a,	// (0x0006933b) cl_header_pane

0x5c4e,	// (0x0006934f) cl_listscroll_pane_ParamLimits

0x5c4e,	// (0x0006934f) cl_listscroll_pane

0xefd9,	// (0x000726da) bg_cl_pane_g1

0xefe1,	// (0x000726e2) bg_cl_pane_g2

0xefe9,	// (0x000726ea) bg_cl_pane_g3

0xeff1,	// (0x000726f2) bg_cl_pane_g4

0xeff9,	// (0x000726fa) bg_cl_pane_g5

0xf001,	// (0x00072702) bg_cl_pane_g6

0xf009,	// (0x0007270a) bg_cl_pane_g7

0xf011,	// (0x00072712) bg_cl_pane_g8

0xf019,	// (0x0007271a) bg_cl_pane_g9

0x0008,

0xf9c0,	// (0x000730c1) bg_cl_pane_g

0x5c5e,	// (0x0006935f) aid_height_cl_leading_ParamLimits

0x5c5e,	// (0x0006935f) aid_height_cl_leading

0x5c6a,	// (0x0006936b) aid_height_cl_text_ParamLimits

0x5c6a,	// (0x0006936b) aid_height_cl_text

0xa7ac,	// (0x0006dead) bg_cl_header_pane_ParamLimits

0xa7ac,	// (0x0006dead) bg_cl_header_pane

0x5c89,	// (0x0006938a) cl_header_pane_g1_ParamLimits

0x5c89,	// (0x0006938a) cl_header_pane_g1

0x5c9f,	// (0x000693a0) cl_header_pane_t1_ParamLimits

0x5c9f,	// (0x000693a0) cl_header_pane_t1

0xf021,	// (0x00072722) cl_list_pane

0xebb8,	// (0x000722b9) hc_scroll_pane_cp01

0xad1d,	// (0x0006e41e) bg_cl_header_pane_g1

0xea8c,	// (0x0007218d) bg_cl_header_pane_g2

0xad3d,	// (0x0006e43e) bg_cl_header_pane_g3

0xea9c,	// (0x0007219d) bg_cl_header_pane_g4

0xea94,	// (0x00072195) bg_cl_header_pane_g5

0xed0a,	// (0x0007240b) bg_cl_header_pane_g6

0xeab4,	// (0x000721b5) bg_cl_header_pane_g7

0xeabc,	// (0x000721bd) bg_cl_header_pane_g8

0xeaac,	// (0x000721ad) bg_cl_header_pane_g9

0x0008,

0xf9d3,	// (0x000730d4) bg_cl_header_pane_g

0x5cb8,	// (0x000693b9) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x5cb8,	// (0x000693b9) hc_cl_list_double_graphic_heading_pane

0x5cc9,	// (0x000693ca) hc_cl_list_single_graphic_pane_ParamLimits

0x5cc9,	// (0x000693ca) hc_cl_list_single_graphic_pane

0x5cdf,	// (0x000693e0) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x5cdf,	// (0x000693e0) hc_cl_list_single_graphic_pane_g1

0x5ceb,	// (0x000693ec) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x5ceb,	// (0x000693ec) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9e6,	// (0x000730e7) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9e6,	// (0x000730e7) hc_cl_list_single_graphic_pane_g

0x5cff,	// (0x00069400) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x5cff,	// (0x00069400) hc_cl_list_single_graphic_pane_t1

0x5cdf,	// (0x000693e0) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x5cdf,	// (0x000693e0) hc_cl_list_double_graphic_heading_pane_g1

0x5d14,	// (0x00069415) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x5d14,	// (0x00069415) hc_cl_list_double_graphic_heading_pane_g2

0x5d28,	// (0x00069429) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x5d28,	// (0x00069429) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9eb,	// (0x000730ec) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9eb,	// (0x000730ec) hc_cl_list_double_graphic_heading_pane_g

0x5d3c,	// (0x0006943d) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x5d3c,	// (0x0006943d) hc_cl_list_double_graphic_heading_pane_t1

0x5d51,	// (0x00069452) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x5d51,	// (0x00069452) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9f2,	// (0x000730f3) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9f2,	// (0x000730f3) hc_cl_list_double_graphic_heading_pane_t

0xbd58,	// (0x0006f459) vid4_progress_pane_g1

0xbd68,	// (0x0006f469) vid4_progress_pane_g2

0x5d66,	// (0x00069467) vid4_progress_pane_g3

0xbd78,	// (0x0006f479) vid4_progress_pane_g4

0x0004,

0xf9f7,	// (0x000730f8) vid4_progress_pane_g

0x5d78,	// (0x00069479) vid4_progress_pane_t1

0xbd90,	// (0x0006f491) vid4_progress_pane_t2

0x0002,

0xfa02,	// (0x00073103) vid4_progress_pane_t

0x5d90,	// (0x00069491) wait_bar_pane_cp07

0xdf63,	// (0x00071664) blid_firmament_pane_ParamLimits

0xdfa6,	// (0x000716a7) popup_blid_sat_info2_window_g1

0xdfca,	// (0x000716cb) popup_blid_sat_info2_window_t3

0xdfd8,	// (0x000716d9) popup_blid_sat_info2_window_t4

0xdfe6,	// (0x000716e7) popup_blid_sat_info2_window_t5

0xdff4,	// (0x000716f5) popup_blid_sat_info2_window_t6

0xe004,	// (0x00071705) popup_blid_sat_info2_window_t7

0xe012,	// (0x00071713) popup_blid_sat_info2_window_t8

0xe020,	// (0x00071721) popup_blid_sat_info2_window_t9

0xe02e,	// (0x0007172f) popup_blid_sat_info2_window_t10

0xe0ef,	// (0x000717f0) aid_firma_cardinal_ParamLimits

0xe103,	// (0x00071804) blid_firmament_pane_t1_ParamLimits

0xe11a,	// (0x0007181b) blid_firmament_pane_t2_ParamLimits

0xe131,	// (0x00071832) blid_firmament_pane_t3_ParamLimits

0xe148,	// (0x00071849) blid_firmament_pane_t4_ParamLimits

0xf620,	// (0x00072d21) blid_firmament_pane_t_ParamLimits

0xe15f,	// (0x00071860) blid_sat_info_pane_ParamLimits

0xa104,	// (0x0006d805) main_cam_set_pane_ParamLimits

0x42cd,	// (0x000679ce) aid_size_cell_colour_35_ParamLimits

0x42ed,	// (0x000679ee) aid_size_cell_colour_112_ParamLimits

0x430d,	// (0x00067a0e) aid_size_cell_effect_ParamLimits

0xb6f6,	// (0x0006edf7) bg_tb_trans_pane_cp02_ParamLimits

0xafbb,	// (0x0006e6bc) heading_imed_pane_ParamLimits

0x432d,	// (0x00067a2e) listscroll_imed_pane_ParamLimits

0xd42a,	// (0x00070b2b) popup_call2_audio_first_window_g5_ParamLimits

0xd42a,	// (0x00070b2b) popup_call2_audio_first_window_g5

0x4752,	// (0x00067e53) aid_size_touch_image3_arrow_left_ParamLimits

0x4752,	// (0x00067e53) aid_size_touch_image3_arrow_left

0x477e,	// (0x00067e7f) aid_size_touch_image3_arrow_right_ParamLimits

0x477e,	// (0x00067e7f) aid_size_touch_image3_arrow_right

0xbda5,	// (0x0006f4a6) vid4_progress_pane_t3

0x44d2,	// (0x00067bd3) main_hwr_training_symbol_option_pane_ParamLimits

0x44d2,	// (0x00067bd3) main_hwr_training_symbol_option_pane

0xe8d9,	// (0x00071fda) popup_hwr_training_preview_window_ParamLimits

0xe8d9,	// (0x00071fda) popup_hwr_training_preview_window

0x44f2,	// (0x00067bf3) hwr_training_navi_pane_g5_ParamLimits

0x44f2,	// (0x00067bf3) hwr_training_navi_pane_g5

0xea7a,	// (0x0007217b) popup_char_count_window

0xa104,	// (0x0006d805) bg_popup_sub_pane_cp20_ParamLimits

0x5756,	// (0x00068e57) list_vitu2_match_list_pane_ParamLimits

0x5762,	// (0x00068e63) vitu2_page_scroll_pane_ParamLimits

0x5762,	// (0x00068e63) vitu2_page_scroll_pane

0x5dd9,	// (0x000694da) list_single_hwr_training_symbol_option_pane_ParamLimits

0x5dd9,	// (0x000694da) list_single_hwr_training_symbol_option_pane

0x5dec,	// (0x000694ed) list_single_hwr_training_symbol_option_pane_g1

0x5df4,	// (0x000694f5) list_single_hwr_training_symbol_option_pane_t1

0x5e02,	// (0x00069503) bg_button_pane_cp023

0x5e0b,	// (0x0006950c) bg_button_pane_cp024

0x5e3e,	// (0x0006953f) vitu2_page_scroll_pane_g1

0x5e46,	// (0x00069547) vitu2_page_scroll_pane_g2

0x0001,

0xfa09,	// (0x0007310a) vitu2_page_scroll_pane_g

0x5e4e,	// (0x0006954f) vitu2_page_scroll_pane_t1

0xded9,	// (0x000715da) popup_char_count_window_g1

0x5e5d,	// (0x0006955e) popup_char_count_window_g2

0x5e66,	// (0x00069567) popup_char_count_window_g3

0x0002,

0xfa0e,	// (0x0007310f) popup_char_count_window_g

0x5e6f,	// (0x00069570) popup_char_count_window_t1

0xa112,	// (0x0006d813) main_vded2_pane

0xe68c,	// (0x00071d8d) aid_size_cell_imed_line

0xe696,	// (0x00071d97) grid_imed_line_width_pane

0xbca4,	// (0x0006f3a5) vid4_indicators_pane_g4

0x5e7d,	// (0x0006957e) cell_imed_line_width_pane_ParamLimits

0x5e7d,	// (0x0006957e) cell_imed_line_width_pane

0x5e91,	// (0x00069592) cell_imed_line_width_pane_g1

0x5e9a,	// (0x0006959b) cell_imed_line_width_pane_g2

0x0001,

0xfa15,	// (0x00073116) cell_imed_line_width_pane_g

0x5ea2,	// (0x000695a3) main_vded2_pane_g1_ParamLimits

0x5ea2,	// (0x000695a3) main_vded2_pane_g1

0x5eb8,	// (0x000695b9) main_vded2_pane_g2_ParamLimits

0x5eb8,	// (0x000695b9) main_vded2_pane_g2

0x0001,

0xfa1a,	// (0x0007311b) main_vded2_pane_g_ParamLimits

0xfa1a,	// (0x0007311b) main_vded2_pane_g

0x5eca,	// (0x000695cb) vded2_slider_pane_ParamLimits

0x5eca,	// (0x000695cb) vded2_slider_pane

0x5eda,	// (0x000695db) aid_size_touch_vded2_end

0x5ee4,	// (0x000695e5) aid_size_touch_vded2_playhead

0x5eee,	// (0x000695ef) aid_size_touch_vded2_start

0x5ef6,	// (0x000695f7) vded2_slider_bg_pane

0x5eff,	// (0x00069600) vded2_slider_pane_g1

0x5f08,	// (0x00069609) vded2_slider_pane_g2

0x5f10,	// (0x00069611) vded2_slider_pane_g3

0x0002,

0xfa1f,	// (0x00073120) vded2_slider_pane_g

0x5f1b,	// (0x0006961c) vded2_slider_bg_pane_g1

0x5f24,	// (0x00069625) vded2_slider_bg_pane_g2

0x5f2d,	// (0x0006962e) vded2_slider_bg_pane_g3

0x0002,

0xfa26,	// (0x00073127) vded2_slider_bg_pane_g

0x2841,	// (0x00065f42) aid_postcard_touch_down_pane_ParamLimits

0x2841,	// (0x00065f42) aid_postcard_touch_down_pane

0x2857,	// (0x00065f58) aid_postcard_touch_up_pane_ParamLimits

0x2857,	// (0x00065f58) aid_postcard_touch_up_pane

0xa112,	// (0x0006d813) main_blid2_pane

0xb7f5,	// (0x0006eef6) popup_blid2_search_window

0xa08d,	// (0x0006d78e) blid2_gps_pane

0xa08d,	// (0x0006d78e) blid2_navig_pane

0xa08d,	// (0x0006d78e) blid2_search_pane

0xa08d,	// (0x0006d78e) blid2_tripm_pane

0x5f36,	// (0x00069637) blid2_search_pane_g1_ParamLimits

0x5f36,	// (0x00069637) blid2_search_pane_g1

0x5f50,	// (0x00069651) blid2_search_pane_t1_ParamLimits

0x5f50,	// (0x00069651) blid2_search_pane_t1

0x5f62,	// (0x00069663) aid_size_cell_blid2_gps_ParamLimits

0x5f62,	// (0x00069663) aid_size_cell_blid2_gps

0x5f7a,	// (0x0006967b) blid2_gps_pane_g1_ParamLimits

0x5f7a,	// (0x0006967b) blid2_gps_pane_g1

0x5f8e,	// (0x0006968f) grid_blid2_satellite_pane_ParamLimits

0x5f8e,	// (0x0006968f) grid_blid2_satellite_pane

0x5fa8,	// (0x000696a9) blid2_navig_pane_g1_ParamLimits

0x5fa8,	// (0x000696a9) blid2_navig_pane_g1

0x5fb4,	// (0x000696b5) blid2_navig_pane_t1_ParamLimits

0x5fb4,	// (0x000696b5) blid2_navig_pane_t1

0x5fcf,	// (0x000696d0) blid2_navig_pane_t2_ParamLimits

0x5fcf,	// (0x000696d0) blid2_navig_pane_t2

0x0001,

0xfa2d,	// (0x0007312e) blid2_navig_pane_t_ParamLimits

0xfa2d,	// (0x0007312e) blid2_navig_pane_t

0x5fea,	// (0x000696eb) blid2_navig_ring_pane_ParamLimits

0x5fea,	// (0x000696eb) blid2_navig_ring_pane

0x6003,	// (0x00069704) blid2_speed_pane_ParamLimits

0x6003,	// (0x00069704) blid2_speed_pane

0x600f,	// (0x00069710) blid2_tripm_pane_g1_ParamLimits

0x600f,	// (0x00069710) blid2_tripm_pane_g1

0x6028,	// (0x00069729) blid2_tripm_pane_g2_ParamLimits

0x6028,	// (0x00069729) blid2_tripm_pane_g2

0x603c,	// (0x0006973d) blid2_tripm_pane_g3_ParamLimits

0x603c,	// (0x0006973d) blid2_tripm_pane_g3

0x6050,	// (0x00069751) blid2_tripm_pane_g4_ParamLimits

0x6050,	// (0x00069751) blid2_tripm_pane_g4

0x6064,	// (0x00069765) blid2_tripm_pane_g5_ParamLimits

0x6064,	// (0x00069765) blid2_tripm_pane_g5

0x0005,

0xfa32,	// (0x00073133) blid2_tripm_pane_g_ParamLimits

0xfa32,	// (0x00073133) blid2_tripm_pane_g

0x608a,	// (0x0006978b) blid2_tripm_pane_t1_ParamLimits

0x608a,	// (0x0006978b) blid2_tripm_pane_t1

0x60a5,	// (0x000697a6) blid2_tripm_pane_t2_ParamLimits

0x60a5,	// (0x000697a6) blid2_tripm_pane_t2

0x60be,	// (0x000697bf) blid2_tripm_pane_t3_ParamLimits

0x60be,	// (0x000697bf) blid2_tripm_pane_t3

0x0003,

0xfa3f,	// (0x00073140) blid2_tripm_pane_t_ParamLimits

0xfa3f,	// (0x00073140) blid2_tripm_pane_t

0x6105,	// (0x00069806) cell_blid2_satellite_pane_ParamLimits

0x6105,	// (0x00069806) cell_blid2_satellite_pane

0x6123,	// (0x00069824) cell_blid2_satellite_pane_g1

0x612c,	// (0x0006982d) cell_blid2_satellite_pane_t1

0xab2c,	// (0x0006e22d) blid2_speed_pane_g1

0x613a,	// (0x0006983b) blid2_speed_pane_t1

0x6148,	// (0x00069849) blid2_speed_pane_t2

0x0001,

0xfa48,	// (0x00073149) blid2_speed_pane_t

0xab2c,	// (0x0006e22d) blid2_navig_ring_pane_g1

0x6156,	// (0x00069857) blid2_navig_ring_pane_g2

0x615e,	// (0x0006985f) blid2_navig_ring_pane_g3

0x6166,	// (0x00069867) blid2_navig_ring_pane_g4

0x616e,	// (0x0006986f) blid2_navig_ring_pane_g5

0x0004,

0xfa4d,	// (0x0007314e) blid2_navig_ring_pane_g

0xa08d,	// (0x0006d78e) bg_popup_window_pane_cp011

0x6176,	// (0x00069877) popup_blid2_search_window_g1

0x617e,	// (0x0006987f) popup_blid2_search_window_t1

0x618c,	// (0x0006988d) popup_blid2_search_window_t2

0x0001,

0xfa58,	// (0x00073159) popup_blid2_search_window_t

0xac2c,	// (0x0006e32d) main_browser_pane_g1

0xa8a7,	// (0x0006dfa8) main_browser_pane_ParamLimits

0xa104,	// (0x0006d805) bg_button_pane_cp011_ParamLimits

0x502d,	// (0x0006872e) cell_vitu2_function_pane_g1_ParamLimits

0xb6f6,	// (0x0006edf7) bg_popup_sub_pane_cp22_ParamLimits

0x58e0,	// (0x00068fe1) input_focus_pane_cp08_ParamLimits

0x58fb,	// (0x00068ffc) popup_vitu2_query_button_pane_ParamLimits

0x58fb,	// (0x00068ffc) popup_vitu2_query_button_pane

0x590a,	// (0x0006900b) popup_vitu2_query_input_button_pane

0xed45,	// (0x00072446) popup_vitu2_query_window_g1_ParamLimits

0x5912,	// (0x00069013) popup_vitu2_query_window_g2_ParamLimits

0xf959,	// (0x0007305a) popup_vitu2_query_window_g_ParamLimits

0xa08d,	// (0x0006d78e) bg_button_pane_cp026

0x619a,	// (0x0006989b) popup_vitu2_query_input_button_pane_g1

0xa08d,	// (0x0006d78e) bg_button_pane_cp025

0x61a2,	// (0x000698a3) popup_vitu2_query_button_pane_t1

0x378c,	// (0x00066e8d) main_mp3_pane_t6

0x379a,	// (0x00066e9b) popup_slider_window_cp01

0xbc08,	// (0x0006f309) cam4_battery_pane

0xbc61,	// (0x0006f362) cam4_battery_pane_cp02

0xbd50,	// (0x0006f451) cam4_battery_pane_cp01

0xbd50,	// (0x0006f451) cam4_battery_pane_cp03

0x3700,	// (0x00066e01) cam4_battery_pane_g1

0xab2c,	// (0x0006e22d) cam4_battery_pane_g2

0x0001,

0xfa5d,	// (0x0007315e) cam4_battery_pane_g

0xe03c,	// (0x0007173d) popup_blid_sat_info2_window_t11

0xb440,	// (0x0006eb41) aid_size_touch_mv_arrow_left_ParamLimits

0xb469,	// (0x0006eb6a) aid_size_touch_mv_arrow_right_ParamLimits

0xb4c7,	// (0x0006ebc8) navi_pane_g1_ParamLimits

0xb4d3,	// (0x0006ebd4) navi_pane_g2_ParamLimits

0xb501,	// (0x0006ec02) navi_pane_g3_ParamLimits

0xf334,	// (0x00072a35) navi_pane_g_ParamLimits

0x24a6,	// (0x00065ba7) navi_pane_mv_t1_ParamLimits

0x4339,	// (0x00067a3a) grid_imed_effect_pane_ParamLimits

0x122f,	// (0x00064930) aid_placing_vt_slider_lsc

0xab7b,	// (0x0006e27c) aid_placing_vt_slider_prt

0xa7ac,	// (0x0006dead) bg_tb_trans_pane_cp01_ParamLimits

0xe2f4,	// (0x000719f5) popup_image_details_window_g1_ParamLimits

0xe307,	// (0x00071a08) popup_image_details_window_g2_ParamLimits

0xe31c,	// (0x00071a1d) popup_image_details_window_g3_ParamLimits

0xe31c,	// (0x00071a1d) popup_image_details_window_g3

0xf660,	// (0x00072d61) popup_image_details_window_g_ParamLimits

0xe330,	// (0x00071a31) popup_image_details_window_t1_ParamLimits

0xe342,	// (0x00071a43) popup_image_details_window_t2_ParamLimits

0xe35b,	// (0x00071a5c) popup_image_details_window_t3_ParamLimits

0xe36f,	// (0x00071a70) popup_image_details_window_t4_ParamLimits

0xe38a,	// (0x00071a8b) popup_image_details_window_t5_ParamLimits

0xf667,	// (0x00072d68) popup_image_details_window_t_ParamLimits

0x5c76,	// (0x00069377) cl_header_name_pane_ParamLimits

0x5c76,	// (0x00069377) cl_header_name_pane

0x61b0,	// (0x000698b1) cl_header_name_pane_t1_ParamLimits

0x61b0,	// (0x000698b1) cl_header_name_pane_t1

0x61d1,	// (0x000698d2) cl_header_name_pane_t2_ParamLimits

0x61d1,	// (0x000698d2) cl_header_name_pane_t2

0x6213,	// (0x00069914) cl_header_name_pane_t3_ParamLimits

0x6213,	// (0x00069914) cl_header_name_pane_t3

0x0002,

0xfa62,	// (0x00073163) cl_header_name_pane_t_ParamLimits

0xfa62,	// (0x00073163) cl_header_name_pane_t

0xb590,	// (0x0006ec91) navi_pane_mv_g2_ParamLimits

0xea45,	// (0x00072146) field_vitu2_entry_pane_g1_ParamLimits

0xea51,	// (0x00072152) field_vitu2_entry_pane_g2_ParamLimits

0xb6c0,	// (0x0006edc1) field_vitu2_entry_pane_g3_ParamLimits

0xb6c0,	// (0x0006edc1) field_vitu2_entry_pane_g3

0xf862,	// (0x00072f63) field_vitu2_entry_pane_g_ParamLimits

0x4fa9,	// (0x000686aa) cell_vitu2_itu_pane_g1_ParamLimits

0x4fc1,	// (0x000686c2) cell_vitu2_itu_pane_g2_ParamLimits

0x4fc1,	// (0x000686c2) cell_vitu2_itu_pane_g2

0x0001,

0xf86e,	// (0x00072f6f) cell_vitu2_itu_pane_g_ParamLimits

0xf86e,	// (0x00072f6f) cell_vitu2_itu_pane_g

0xa104,	// (0x0006d805) bg_vkb2_func_pane_cp05_ParamLimits

0xa104,	// (0x0006d805) bg_vkb2_func_pane_cp05

0xa104,	// (0x0006d805) bg_vkb2_func_pane_cp03

0xa104,	// (0x0006d805) bg_vkb2_func_pane_cp04

0xa104,	// (0x0006d805) bg_vkb2_func_pane_cp10_ParamLimits

0xa104,	// (0x0006d805) bg_vkb2_func_pane_cp10

0x5c1a,	// (0x0006931b) bg_vkb2_func_pane_cp08

0x5bf3,	// (0x000692f4) bg_vkb2_func_pane_cp06

0x5bff,	// (0x00069300) bg_vkb2_func_pane_cp07

0x5e14,	// (0x00069515) bg_vkb2_func_pane_cp11_ParamLimits

0x5e14,	// (0x00069515) bg_vkb2_func_pane_cp11

0x5e29,	// (0x0006952a) bg_vkb2_func_pane_cp12_ParamLimits

0x5e29,	// (0x0006952a) bg_vkb2_func_pane_cp12

0xa08d,	// (0x0006d78e) bg_vkb2_func_pane_cp09

0xea8c,	// (0x0007218d) bg_vkb2_func_pane_g1

0xad3d,	// (0x0006e43e) bg_vkb2_func_pane_g2

0xea94,	// (0x00072195) bg_vkb2_func_pane_g3

0xea9c,	// (0x0007219d) bg_vkb2_func_pane_g4

0xed0a,	// (0x0007240b) bg_vkb2_func_pane_g5

0xeab4,	// (0x000721b5) bg_vkb2_func_pane_g6

0xeabc,	// (0x000721bd) bg_vkb2_func_pane_g7

0xeaac,	// (0x000721ad) bg_vkb2_func_pane_g8

0xad1d,	// (0x0006e41e) bg_vkb2_func_pane_g9

0x0008,

0xfa69,	// (0x0007316a) bg_vkb2_func_pane_g

0x6078,	// (0x00069779) blid2_tripm_pane_g6_ParamLimits

0x6078,	// (0x00069779) blid2_tripm_pane_g6

0xe997,	// (0x00072098) mp4_progress_pane_g1

0x60f1,	// (0x000697f2) blid2_tripm_values_pane_ParamLimits

0x60f1,	// (0x000697f2) blid2_tripm_values_pane

0x6244,	// (0x00069945) blid2_tripm_values_pane_t1

0x6252,	// (0x00069953) blid2_tripm_values_pane_t2

0x6260,	// (0x00069961) blid2_tripm_values_pane_t3

0x626e,	// (0x0006996f) blid2_tripm_values_pane_t4

0x627c,	// (0x0006997d) blid2_tripm_values_pane_t5

0x628a,	// (0x0006998b) blid2_tripm_values_pane_t6

0x6298,	// (0x00069999) blid2_tripm_values_pane_t7

0x62a6,	// (0x000699a7) blid2_tripm_values_pane_t8

0x62b4,	// (0x000699b5) blid2_tripm_values_pane_t9

0x0008,

0xfa7c,	// (0x0007317d) blid2_tripm_values_pane_t

0x1271,	// (0x00064972) call_video_pane_t1_ParamLimits

0x128f,	// (0x00064990) call_video_pane_t2_ParamLimits

0xf1e2,	// (0x000728e3) call_video_pane_t_ParamLimits

0x2761,	// (0x00065e62) msg_header_pane_g1_ParamLimits

0xb7ab,	// (0x0006eeac) msg_header_pane_g2_ParamLimits

0xb7ab,	// (0x0006eeac) msg_header_pane_g2

0x0001,

0xf3d7,	// (0x00072ad8) msg_header_pane_g_ParamLimits

0xf3d7,	// (0x00072ad8) msg_header_pane_g

0xa8a7,	// (0x0006dfa8) main_clock2_pane_ParamLimits

0x403a,	// (0x0006773b) grid_clock2_toolbar_pane_ParamLimits

0x403a,	// (0x0006773b) grid_clock2_toolbar_pane

0x403a,	// (0x0006773b) listscroll_clock2_pane_ParamLimits

0x403a,	// (0x0006773b) listscroll_clock2_pane

0x411e,	// (0x0006781f) main_clock2_pane_t3_ParamLimits

0x411e,	// (0x0006781f) main_clock2_pane_t3

0x4142,	// (0x00067843) main_clock2_pane_t4_ParamLimits

0x4142,	// (0x00067843) main_clock2_pane_t4

0x62c2,	// (0x000699c3) cell_clock2_toolbar_pane

0x62ca,	// (0x000699cb) cell_clock2_toolbar_pane_cp01

0x62ca,	// (0x000699cb) cell_clock2_toolbar_pane_cp02

0x62d2,	// (0x000699d3) cell_clock2_toolbar_pane_cp03

0x62da,	// (0x000699db) list_clock2_pane

0xb3b6,	// (0x0006eab7) scroll_pane_cp10

0x62e2,	// (0x000699e3) list_single_clock2_pane_ParamLimits

0x62e2,	// (0x000699e3) list_single_clock2_pane

0xaaec,	// (0x0006e1ed) list_highlight_pane_cp08

0x62ef,	// (0x000699f0) list_single_clock2_pane_t1

0x62fd,	// (0x000699fe) list_single_clock2_pane_t2

0x0001,

0xfa8f,	// (0x00073190) list_single_clock2_pane_t

0xa08d,	// (0x0006d78e) bg_button_pane_cp10

0x630b,	// (0x00069a0c) cell_clock2_toolbar_pane_g1

0x27cd,	// (0x00065ece) aid_main_viewer_pane_g1_ParamLimits

0x27cd,	// (0x00065ece) aid_main_viewer_pane_g1

0x27db,	// (0x00065edc) aid_main_viewer_pane_g2_ParamLimits

0x27db,	// (0x00065edc) aid_main_viewer_pane_g2

0x27e9,	// (0x00065eea) aid_main_viewer_pane_g3_ParamLimits

0x27e9,	// (0x00065eea) aid_main_viewer_pane_g3

0x27f8,	// (0x00065ef9) aid_main_viewer_pane_g4_ParamLimits

0x27f8,	// (0x00065ef9) aid_main_viewer_pane_g4

0x0003,

0xf3e8,	// (0x00072ae9) aid_main_viewer_pane_g_ParamLimits

0xf3e8,	// (0x00072ae9) aid_main_viewer_pane_g

0x313f,	// (0x00066840) main_calc_pane_ParamLimits

0x3165,	// (0x00066866) main_dialer2_pane_ParamLimits

0xa112,	// (0x0006d813) main_cam6_pane

0xa112,	// (0x0006d813) main_vid6_pane

0x4046,	// (0x00067747) listscroll_gen_pane_cp06_ParamLimits

0x4046,	// (0x00067747) listscroll_gen_pane_cp06

0x4165,	// (0x00067866) main_clock2_pane_t5_ParamLimits

0x4165,	// (0x00067866) main_clock2_pane_t5

0x41c3,	// (0x000678c4) aid_call2_pane_cp10_ParamLimits

0x41d5,	// (0x000678d6) aid_call_pane_cp10_ParamLimits

0xb434,	// (0x0006eb35) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb434,	// (0x0006eb35) popup_clock_analogue_window_cp10_g2_ParamLimits

0x41e7,	// (0x000678e8) popup_clock_analogue_window_cp10_g3_ParamLimits

0x41e7,	// (0x000678e8) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb434,	// (0x0006eb35) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf71c,	// (0x00072e1d) popup_clock_analogue_window_cp10_g_ParamLimits

0x41fd,	// (0x000678fe) popup_clock_analogue_window_cp10_t1_ParamLimits

0x46ff,	// (0x00067e00) cell_dialer2_keypad_pane_g2_ParamLimits

0x46ff,	// (0x00067e00) cell_dialer2_keypad_pane_g2

0x0001,

0xf801,	// (0x00072f02) cell_dialer2_keypad_pane_g_ParamLimits

0xf801,	// (0x00072f02) cell_dialer2_keypad_pane_g

0x471b,	// (0x00067e1c) cell_dialer2_keypad_pane_t1

0x533c,	// (0x00068a3d) main_cset_text2_pane_ParamLimits

0x533c,	// (0x00068a3d) main_cset_text2_pane

0xef31,	// (0x00072632) area_vitu2_query_pane_g1_ParamLimits

0x5b94,	// (0x00069295) area_vitu2_query_pane_g2_ParamLimits

0xf9ac,	// (0x000730ad) area_vitu2_query_pane_g_ParamLimits

0xefb5,	// (0x000726b6) area_vitu2_query_pane_t7_ParamLimits

0xefb5,	// (0x000726b6) area_vitu2_query_pane_t7

0x5bf3,	// (0x000692f4) bg_button_pane_cp018_ParamLimits

0x5bff,	// (0x00069300) bg_button_pane_cp021_ParamLimits

0x5c0b,	// (0x0006930c) bg_button_pane_cp022_ParamLimits

0x5c1a,	// (0x0006931b) bg_vkb2_func_pane_cp08_ParamLimits

0x5bf3,	// (0x000692f4) bg_vkb2_func_pane_cp06_ParamLimits

0x5bff,	// (0x00069300) bg_vkb2_func_pane_cp07_ParamLimits

0x5c2a,	// (0x0006932b) input_focus_pane_cp09_ParamLimits

0x6313,	// (0x00069a14) cam6_autofocus_pane_ParamLimits

0x6313,	// (0x00069a14) cam6_autofocus_pane

0x631f,	// (0x00069a20) cam6_image_uncrop_pane_ParamLimits

0x631f,	// (0x00069a20) cam6_image_uncrop_pane

0x632f,	// (0x00069a30) cam6_indi_pane_ParamLimits

0x632f,	// (0x00069a30) cam6_indi_pane

0x6345,	// (0x00069a46) cam6_mode_pane_ParamLimits

0x6345,	// (0x00069a46) cam6_mode_pane

0x6357,	// (0x00069a58) cam6_timer_pane_ParamLimits

0x6357,	// (0x00069a58) cam6_timer_pane

0x6363,	// (0x00069a64) cam6_zoom_pane_ParamLimits

0x6363,	// (0x00069a64) cam6_zoom_pane

0x6370,	// (0x00069a71) cam6_mode_pane_g1_ParamLimits

0x6370,	// (0x00069a71) cam6_mode_pane_g1

0x6380,	// (0x00069a81) cam6_mode_pane_g2_ParamLimits

0x6380,	// (0x00069a81) cam6_mode_pane_g2

0x6390,	// (0x00069a91) cam6_mode_pane_g3_ParamLimits

0x6390,	// (0x00069a91) cam6_mode_pane_g3

0x63a0,	// (0x00069aa1) cam6_mode_pane_g4_ParamLimits

0x63a0,	// (0x00069aa1) cam6_mode_pane_g4

0x0003,

0xfa94,	// (0x00073195) cam6_mode_pane_g_ParamLimits

0xfa94,	// (0x00073195) cam6_mode_pane_g

0xeccb,	// (0x000723cc) bg_tb_trans_pane_cp08_ParamLimits

0xeccb,	// (0x000723cc) bg_tb_trans_pane_cp08

0x63b0,	// (0x00069ab1) cam6_battery_pane_ParamLimits

0x63b0,	// (0x00069ab1) cam6_battery_pane

0x63c6,	// (0x00069ac7) cam6_indi_pane_g1_ParamLimits

0x63c6,	// (0x00069ac7) cam6_indi_pane_g1

0x63d8,	// (0x00069ad9) cam6_indi_pane_g2_ParamLimits

0x63d8,	// (0x00069ad9) cam6_indi_pane_g2

0x63ea,	// (0x00069aeb) cam6_indi_pane_g3_ParamLimits

0x63ea,	// (0x00069aeb) cam6_indi_pane_g3

0x0002,

0xfa9d,	// (0x0007319e) cam6_indi_pane_g_ParamLimits

0xfa9d,	// (0x0007319e) cam6_indi_pane_g

0x63fc,	// (0x00069afd) cam6_indi_pane_t1_ParamLimits

0x63fc,	// (0x00069afd) cam6_indi_pane_t1

0x4d4b,	// (0x0006844c) cam6_autofocus_pane_g1

0x4d43,	// (0x00068444) cam6_autofocus_pane_g2

0x4d5b,	// (0x0006845c) cam6_autofocus_pane_g3

0x4d53,	// (0x00068454) cam6_autofocus_pane_g4

0x0003,

0xfaa4,	// (0x000731a5) cam6_autofocus_pane_g

0x6422,	// (0x00069b23) cam6_timer_pane_g1

0x642a,	// (0x00069b2b) cam6_timer_pane_t1

0x6438,	// (0x00069b39) cam6_zoom_cont_pane

0x6440,	// (0x00069b41) cam6_zoom_pane_g1

0x6449,	// (0x00069b4a) cam6_zoom_pane_g2

0x6452,	// (0x00069b53) cam6_zoom_pane_g3

0x0002,

0xfaad,	// (0x000731ae) cam6_zoom_pane_g

0xab2c,	// (0x0006e22d) cam6_battery_pane_g1

0xab2c,	// (0x0006e22d) cam6_battery_pane_g2

0x0001,

0xf398,	// (0x00072a99) cam6_battery_pane_g

0x6440,	// (0x00069b41) cam6_zoom_cont_pane_g1

0x6449,	// (0x00069b4a) cam6_zoom_cont_pane_g2

0x645b,	// (0x00069b5c) cam6_zoom_cont_pane_g3

0x0002,

0xfab4,	// (0x000731b5) cam6_zoom_cont_pane_g

0x6475,	// (0x00069b76) cam6_mode_pane_cp_ParamLimits

0x6475,	// (0x00069b76) cam6_mode_pane_cp

0x6487,	// (0x00069b88) cam6_zoom_pane_cp_ParamLimits

0x6487,	// (0x00069b88) cam6_zoom_pane_cp

0x6493,	// (0x00069b94) vid6_image_uncrop_cif_pane_ParamLimits

0x6493,	// (0x00069b94) vid6_image_uncrop_cif_pane

0x64a3,	// (0x00069ba4) vid6_image_uncrop_nhd_pane_ParamLimits

0x64a3,	// (0x00069ba4) vid6_image_uncrop_nhd_pane

0x64c2,	// (0x00069bc3) vid6_image_uncrop_vga_pane_ParamLimits

0x64c2,	// (0x00069bc3) vid6_image_uncrop_vga_pane

0x64d1,	// (0x00069bd2) vid6_image_uncrop_wvga_pane_ParamLimits

0x64d1,	// (0x00069bd2) vid6_image_uncrop_wvga_pane

0x64e0,	// (0x00069be1) vid6_indi_pane_ParamLimits

0x64e0,	// (0x00069be1) vid6_indi_pane

0xeccb,	// (0x000723cc) bg_tb_trans_pane_cp09_ParamLimits

0xeccb,	// (0x000723cc) bg_tb_trans_pane_cp09

0x64f8,	// (0x00069bf9) cam6_battery_pane_cp_ParamLimits

0x64f8,	// (0x00069bf9) cam6_battery_pane_cp

0x6504,	// (0x00069c05) vid6_indi_pane_g1_ParamLimits

0x6504,	// (0x00069c05) vid6_indi_pane_g1

0x6516,	// (0x00069c17) vid6_indi_pane_g2_ParamLimits

0x6516,	// (0x00069c17) vid6_indi_pane_g2

0x6528,	// (0x00069c29) vid6_indi_pane_g3_ParamLimits

0x6528,	// (0x00069c29) vid6_indi_pane_g3

0x653d,	// (0x00069c3e) vid6_indi_pane_g4_ParamLimits

0x653d,	// (0x00069c3e) vid6_indi_pane_g4

0x6552,	// (0x00069c53) vid6_indi_pane_g5_ParamLimits

0x6552,	// (0x00069c53) vid6_indi_pane_g5

0x0004,

0xfabb,	// (0x000731bc) vid6_indi_pane_g_ParamLimits

0xfabb,	// (0x000731bc) vid6_indi_pane_g

0x656c,	// (0x00069c6d) vid6_indi_pane_t1_ParamLimits

0x656c,	// (0x00069c6d) vid6_indi_pane_t1

0x6582,	// (0x00069c83) vid6_indi_pane_t2_ParamLimits

0x6582,	// (0x00069c83) vid6_indi_pane_t2

0x65aa,	// (0x00069cab) vid6_indi_pane_t3_ParamLimits

0x65aa,	// (0x00069cab) vid6_indi_pane_t3

0x65d2,	// (0x00069cd3) vid6_indi_pane_t4_ParamLimits

0x65d2,	// (0x00069cd3) vid6_indi_pane_t4

0x0003,

0xfac6,	// (0x000731c7) vid6_indi_pane_t_ParamLimits

0xfac6,	// (0x000731c7) vid6_indi_pane_t

0x65f6,	// (0x00069cf7) wait_bar_pane_cp08

0x6605,	// (0x00069d06) main_cset_text2_pane_t1_ParamLimits

0x6605,	// (0x00069d06) main_cset_text2_pane_t1

0x6463,	// (0x00069b64) listscroll_gen_pane_cp06_t1_ParamLimits

0x6463,	// (0x00069b64) listscroll_gen_pane_cp06_t1

0xa112,	// (0x0006d813) main_cam6_set_pane

0x4c76,	// (0x00068377) bg_tb_trans_pane_cp06_ParamLimits

0xbc10,	// (0x0006f311) cam4_indicators_pane_g1_ParamLimits

0xbc21,	// (0x0006f322) cam4_indicators_pane_g2_ParamLimits

0xf83e,	// (0x00072f3f) cam4_indicators_pane_g_ParamLimits

0xbc3f,	// (0x0006f340) cam4_indicators_pane_t1_ParamLimits

0xa104,	// (0x0006d805) bg_tb_trans_pane_cp07_ParamLimits

0xbc6b,	// (0x0006f36c) vid4_indicators_pane_g1_ParamLimits

0xbc7f,	// (0x0006f380) vid4_indicators_pane_g2_ParamLimits

0xbc93,	// (0x0006f394) vid4_indicators_pane_g3_ParamLimits

0xbca4,	// (0x0006f3a5) vid4_indicators_pane_g4_ParamLimits

0xf850,	// (0x00072f51) vid4_indicators_pane_g_ParamLimits

0xbcc2,	// (0x0006f3c3) vid4_indicators_pane_t1_ParamLimits

0xbd58,	// (0x0006f459) vid4_progress_pane_g1_ParamLimits

0xbd68,	// (0x0006f469) vid4_progress_pane_g2_ParamLimits

0x5d66,	// (0x00069467) vid4_progress_pane_g3_ParamLimits

0xbd78,	// (0x0006f479) vid4_progress_pane_g4_ParamLimits

0xf9f7,	// (0x000730f8) vid4_progress_pane_g_ParamLimits

0x5d78,	// (0x00069479) vid4_progress_pane_t1_ParamLimits

0xbd90,	// (0x0006f491) vid4_progress_pane_t2_ParamLimits

0xbda5,	// (0x0006f4a6) vid4_progress_pane_t3_ParamLimits

0xfa02,	// (0x00073103) vid4_progress_pane_t_ParamLimits

0x5d90,	// (0x00069491) wait_bar_pane_cp07_ParamLimits

0x6622,	// (0x00069d23) main_cam6_set_pane_g2_ParamLimits

0x6622,	// (0x00069d23) main_cam6_set_pane_g2

0x6646,	// (0x00069d47) main_cset6_listscroll_pane_ParamLimits

0x6646,	// (0x00069d47) main_cset6_listscroll_pane

0x6666,	// (0x00069d67) main_cset6_slider_pane_ParamLimits

0x6666,	// (0x00069d67) main_cset6_slider_pane

0x667c,	// (0x00069d7d) main_cset6_text2_pane_ParamLimits

0x667c,	// (0x00069d7d) main_cset6_text2_pane

0x668a,	// (0x00069d8b) main_cset6_text_pane

0x6692,	// (0x00069d93) main_cset_list_pane_copy1_ParamLimits

0x6692,	// (0x00069d93) main_cset_list_pane_copy1

0x66a2,	// (0x00069da3) scroll_pane_cp028_copy1

0x66ab,	// (0x00069dac) cset_list_set_pane_copy1

0x66bc,	// (0x00069dbd) aid_position_infowindow_above_copy1

0x66c4,	// (0x00069dc5) aid_position_infowindow_below_copy1

0x66cc,	// (0x00069dcd) cset_list_set_pane_g1_copy1

0x66d4,	// (0x00069dd5) cset_list_set_pane_g3_copy1_ParamLimits

0x66d4,	// (0x00069dd5) cset_list_set_pane_g3_copy1

0x66e3,	// (0x00069de4) cset_list_set_pane_t1_copy1_ParamLimits

0x66e3,	// (0x00069de4) cset_list_set_pane_t1_copy1

0xa7ac,	// (0x0006dead) list_highlight_pane_cp021_copy1_ParamLimits

0xa7ac,	// (0x0006dead) list_highlight_pane_cp021_copy1

0x66f8,	// (0x00069df9) cset6_slider_pane_ParamLimits

0x66f8,	// (0x00069df9) cset6_slider_pane

0x6724,	// (0x00069e25) main_cset6_slider_pane_g1_ParamLimits

0x6724,	// (0x00069e25) main_cset6_slider_pane_g1

0x674c,	// (0x00069e4d) main_cset6_slider_pane_g2_ParamLimits

0x674c,	// (0x00069e4d) main_cset6_slider_pane_g2

0x6774,	// (0x00069e75) main_cset6_slider_pane_g3_ParamLimits

0x6774,	// (0x00069e75) main_cset6_slider_pane_g3

0x6780,	// (0x00069e81) main_cset6_slider_pane_g4_ParamLimits

0x6780,	// (0x00069e81) main_cset6_slider_pane_g4

0x678c,	// (0x00069e8d) main_cset6_slider_pane_g5_ParamLimits

0x678c,	// (0x00069e8d) main_cset6_slider_pane_g5

0xebcd,	// (0x000722ce) main_cset6_slider_pane_g7_ParamLimits

0xebcd,	// (0x000722ce) main_cset6_slider_pane_g7

0xebd9,	// (0x000722da) main_cset6_slider_pane_g8_ParamLimits

0xebd9,	// (0x000722da) main_cset6_slider_pane_g8

0x53e2,	// (0x00068ae3) main_cset6_slider_pane_g9_ParamLimits

0x53e2,	// (0x00068ae3) main_cset6_slider_pane_g9

0x53ee,	// (0x00068aef) main_cset6_slider_pane_g10_ParamLimits

0x53ee,	// (0x00068aef) main_cset6_slider_pane_g10

0x53fa,	// (0x00068afb) main_cset6_slider_pane_g11_ParamLimits

0x53fa,	// (0x00068afb) main_cset6_slider_pane_g11

0x5406,	// (0x00068b07) main_cset6_slider_pane_g12_ParamLimits

0x5406,	// (0x00068b07) main_cset6_slider_pane_g12

0x5412,	// (0x00068b13) main_cset6_slider_pane_g13_ParamLimits

0x5412,	// (0x00068b13) main_cset6_slider_pane_g13

0x541e,	// (0x00068b1f) main_cset6_slider_pane_g14_ParamLimits

0x541e,	// (0x00068b1f) main_cset6_slider_pane_g14

0x6798,	// (0x00069e99) main_cset6_slider_pane_g15_ParamLimits

0x6798,	// (0x00069e99) main_cset6_slider_pane_g15

0x5442,	// (0x00068b43) main_cset6_slider_pane_g16_ParamLimits

0x5442,	// (0x00068b43) main_cset6_slider_pane_g16

0x544e,	// (0x00068b4f) main_cset6_slider_pane_g17_ParamLimits

0x544e,	// (0x00068b4f) main_cset6_slider_pane_g17

0x0011,

0xfacf,	// (0x000731d0) main_cset6_slider_pane_g_ParamLimits

0xfacf,	// (0x000731d0) main_cset6_slider_pane_g

0x67c8,	// (0x00069ec9) main_cset6_slider_pane_t1_ParamLimits

0x67c8,	// (0x00069ec9) main_cset6_slider_pane_t1

0x6809,	// (0x00069f0a) main_cset6_slider_pane_t2_ParamLimits

0x6809,	// (0x00069f0a) main_cset6_slider_pane_t2

0x6834,	// (0x00069f35) main_cset6_slider_pane_t3_ParamLimits

0x6834,	// (0x00069f35) main_cset6_slider_pane_t3

0x685f,	// (0x00069f60) main_cset6_slider_pane_t4_ParamLimits

0x685f,	// (0x00069f60) main_cset6_slider_pane_t4

0x688a,	// (0x00069f8b) main_cset6_slider_pane_t5_ParamLimits

0x688a,	// (0x00069f8b) main_cset6_slider_pane_t5

0x68b5,	// (0x00069fb6) main_cset6_slider_pane_t7_ParamLimits

0x68b5,	// (0x00069fb6) main_cset6_slider_pane_t7

0x68eb,	// (0x00069fec) main_cset6_slider_pane_t8_ParamLimits

0x68eb,	// (0x00069fec) main_cset6_slider_pane_t8

0x690f,	// (0x0006a010) main_cset6_slider_pane_t9_ParamLimits

0x690f,	// (0x0006a010) main_cset6_slider_pane_t9

0x6933,	// (0x0006a034) main_cset6_slider_pane_t10_ParamLimits

0x6933,	// (0x0006a034) main_cset6_slider_pane_t10

0x6957,	// (0x0006a058) main_cset6_slider_pane_t11_ParamLimits

0x6957,	// (0x0006a058) main_cset6_slider_pane_t11

0x697b,	// (0x0006a07c) main_cset6_slider_pane_t14_ParamLimits

0x697b,	// (0x0006a07c) main_cset6_slider_pane_t14

0x69b4,	// (0x0006a0b5) main_cset6_slider_pane_t15_ParamLimits

0x69b4,	// (0x0006a0b5) main_cset6_slider_pane_t15

0x000b,

0xfaf4,	// (0x000731f5) main_cset6_slider_pane_t_ParamLimits

0xfaf4,	// (0x000731f5) main_cset6_slider_pane_t

0xf02a,	// (0x0007272b) cset_slider_pane_g1_copy1

0xf033,	// (0x00072734) cset_slider_pane_g2_copy1

0xf03c,	// (0x0007273d) cset_slider_pane_g3_copy1

0xa08d,	// (0x0006d78e) bg_popup_sub_pane_cp011_copy1

0x6a0a,	// (0x0006a10b) main_cset_text_pane_g1_copy1

0xed59,	// (0x0007245a) main_cset_text_pane_t1_copy1

0xed67,	// (0x00072468) main_cset_text_pane_t2_copy1

0xed75,	// (0x00072476) main_cset_text_pane_t3_copy1

0xed83,	// (0x00072484) main_cset_text_pane_t4_copy1

0xed91,	// (0x00072492) main_cset_text_pane_t5_copy1

0x6a12,	// (0x0006a113) main_cset_text_pane_t6_copy1

0x6a20,	// (0x0006a121) main_cset_text_pane_t7_copy1

0x6605,	// (0x00069d06) main_cset_text2_pane_t1_copy1

0xa104,	// (0x0006d805) main_ncimui_pane

0x33af,	// (0x00066ab0) popup_query_ncimui_window_ParamLimits

0x33af,	// (0x00066ab0) popup_query_ncimui_window

0xe467,	// (0x00071b68) field_cale_ev2_pane_g4_ParamLimits

0xe467,	// (0x00071b68) field_cale_ev2_pane_g4

0x45df,	// (0x00067ce0) cell_video_dialer_keypad_pane_g2_ParamLimits

0x45df,	// (0x00067ce0) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7d8,	// (0x00072ed9) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7d8,	// (0x00072ed9) cell_video_dialer_keypad_pane_g

0x45f7,	// (0x00067cf8) cell_video_dialer_keypad_pane_t1

0xa08d,	// (0x0006d78e) bg_popup_window_pane_cp012

0xdcb1,	// (0x000713b2) heading_pane_cp06

0x6b75,	// (0x0006a276) ncim_query_content_pane

0xa08d,	// (0x0006d78e) bg_popup_heading_pane_cp01

0x6b7d,	// (0x0006a27e) ncim_heading_pane_t1

0x6b8b,	// (0x0006a28c) ncim_indicator_popup_pane

0x6b9d,	// (0x0006a29e) ncim_query_button_pane

0x6bbd,	// (0x0006a2be) ncim_query_content_pane_t1

0x6bcf,	// (0x0006a2d0) ncim_query_content_pane_t2

0x0005,

0xfb38,	// (0x00073239) ncim_query_content_pane_t

0x6c81,	// (0x0006a382) ncim_query_list_pane

0x6c93,	// (0x0006a394) ncim_query_popup_pane

0x6b8b,	// (0x0006a28c) ncim_indicator_popup_pane_ParamLimits

0x6ba5,	// (0x0006a2a6) ncim_query_content_pane_g1_ParamLimits

0x6ba5,	// (0x0006a2a6) ncim_query_content_pane_g1

0x6bbd,	// (0x0006a2be) ncim_query_content_pane_t1_ParamLimits

0x6bcf,	// (0x0006a2d0) ncim_query_content_pane_t2_ParamLimits

0x6be1,	// (0x0006a2e2) ncim_query_content_pane_t3_ParamLimits

0x6be1,	// (0x0006a2e2) ncim_query_content_pane_t3

0x6c09,	// (0x0006a30a) ncim_query_content_pane_t4_ParamLimits

0x6c09,	// (0x0006a30a) ncim_query_content_pane_t4

0x6c31,	// (0x0006a332) ncim_query_content_pane_t5_ParamLimits

0x6c31,	// (0x0006a332) ncim_query_content_pane_t5

0x6c59,	// (0x0006a35a) ncim_query_content_pane_t6_ParamLimits

0x6c59,	// (0x0006a35a) ncim_query_content_pane_t6

0xfb38,	// (0x00073239) ncim_query_content_pane_t_ParamLimits

0x6c81,	// (0x0006a382) ncim_query_list_pane_ParamLimits

0x6c93,	// (0x0006a394) ncim_query_popup_pane_ParamLimits

0x6ca7,	// (0x0006a3a8) wait_bar_pane_cp04

0xa08d,	// (0x0006d78e) input_focus_pane_cp011

0x6caf,	// (0x0006a3b0) ncim_query_popup_pane_t1

0x6cbd,	// (0x0006a3be) ncim_list_query_list_pane_ParamLimits

0x6cbd,	// (0x0006a3be) ncim_list_query_list_pane

0xa08d,	// (0x0006d78e) bg_button_pane_cp027

0x6cca,	// (0x0006a3cb) ncim_query_button_pane_g1

0xa08d,	// (0x0006d78e) list_highlight_pane_cp012

0x6cd4,	// (0x0006a3d5) ncim_list_query_list_pane_g1

0x6cdc,	// (0x0006a3dd) ncim_list_query_list_pane_t1

0xbc30,	// (0x0006f331) cam4_indicators_pane_g3_ParamLimits

0xbc30,	// (0x0006f331) cam4_indicators_pane_g3

0xbcb0,	// (0x0006f3b1) vid4_indicators_pane_g5_ParamLimits

0xbcb0,	// (0x0006f3b1) vid4_indicators_pane_g5

0xbd84,	// (0x0006f485) vid4_progress_pane_g5_ParamLimits

0xbd84,	// (0x0006f485) vid4_progress_pane_g5

0x6a60,	// (0x0006a161) main_ncimui_pane_g1

0x6ac9,	// (0x0006a1ca) ncimui_group_query_pane_ParamLimits

0x6ac9,	// (0x0006a1ca) ncimui_group_query_pane

0x6b11,	// (0x0006a212) ncimui_list_pane_ParamLimits

0x6b11,	// (0x0006a212) ncimui_list_pane

0x6b38,	// (0x0006a239) ncimui_text_pane_ParamLimits

0x6b38,	// (0x0006a239) ncimui_text_pane

0x6cea,	// (0x0006a3eb) ncimui_text_pane_t1_ParamLimits

0x6cea,	// (0x0006a3eb) ncimui_text_pane_t1

0x6d08,	// (0x0006a409) ncimui_list_single_graphic_pane_ParamLimits

0x6d08,	// (0x0006a409) ncimui_list_single_graphic_pane

0x6d18,	// (0x0006a419) ncimui_query_pane_ParamLimits

0x6d18,	// (0x0006a419) ncimui_query_pane

0xa08d,	// (0x0006d78e) list_highlight_pane_cp013

0x6d2b,	// (0x0006a42c) ncim_list_query_list_pane_t1_copy1

0x6cd4,	// (0x0006a3d5) ncim_list_single_graphic_pane_g1

0x6d39,	// (0x0006a43a) ncim_query_button_pane_cp01

0x6d45,	// (0x0006a446) ncim_query_entry_pane_ParamLimits

0x6d45,	// (0x0006a446) ncim_query_entry_pane

0x6d58,	// (0x0006a459) ncimui_query_pane_g1

0x6d64,	// (0x0006a465) ncimui_query_pane_t1_ParamLimits

0x6d64,	// (0x0006a465) ncimui_query_pane_t1

0xa7ac,	// (0x0006dead) input_focus_pane_cp012

0x6d7d,	// (0x0006a47e) ncim_query_entry_pane_t1

0xa8a7,	// (0x0006dfa8) main_im_pane_ParamLimits

0xa104,	// (0x0006d805) main_mobtv_pane_ParamLimits

0xa104,	// (0x0006d805) main_mobtv_pane

0x67b0,	// (0x00069eb1) main_cset6_slider_pane_g18_ParamLimits

0x67b0,	// (0x00069eb1) main_cset6_slider_pane_g18

0x67bc,	// (0x00069ebd) main_cset6_slider_pane_g19_ParamLimits

0x67bc,	// (0x00069ebd) main_cset6_slider_pane_g19

0xa82f,	// (0x0006df30) bg_main_mobtv_pane_ParamLimits

0xa82f,	// (0x0006df30) bg_main_mobtv_pane

0x6d8f,	// (0x0006a490) main_mobtv_info_pane

0x6d98,	// (0x0006a499) main_mobtv_loading_pane_ParamLimits

0x6d98,	// (0x0006a499) main_mobtv_loading_pane

0x6da5,	// (0x0006a4a6) main_mobtv_pg_channel_list_pane

0x6daf,	// (0x0006a4b0) main_mobtv_pg_hdr_pane

0x6db8,	// (0x0006a4b9) main_mobtv_programe_curr_pane_ParamLimits

0x6db8,	// (0x0006a4b9) main_mobtv_programe_curr_pane

0x6dc5,	// (0x0006a4c6) main_mobtv_programe_next_pane_ParamLimits

0x6dc5,	// (0x0006a4c6) main_mobtv_programe_next_pane

0x6dd2,	// (0x0006a4d3) popup_mobtv_noti_window

0xab2c,	// (0x0006e22d) main_tv_pg_hdr_pane_g1

0x6dda,	// (0x0006a4db) main_tv_pg_hdr_pane_g2

0x6de2,	// (0x0006a4e3) main_tv_pg_hdr_pane_g3

0x6dea,	// (0x0006a4eb) main_tv_pg_hdr_pane_g4

0x6df2,	// (0x0006a4f3) main_tv_pg_hdr_pane_g5

0x6dfc,	// (0x0006a4fd) main_tv_pg_hdr_pane_g6

0x6e06,	// (0x0006a507) main_tv_pg_hdr_pane_g7

0x6e10,	// (0x0006a511) main_tv_pg_hdr_pane_g8

0x6e1a,	// (0x0006a51b) main_tv_pg_hdr_pane_g9

0x6e24,	// (0x0006a525) main_tv_pg_hdr_pane_g10

0x6e2e,	// (0x0006a52f) main_tv_pg_hdr_pane_g11

0x000a,

0xfb45,	// (0x00073246) main_tv_pg_hdr_pane_g

0x6e38,	// (0x0006a539) main_tv_pg_hdr_pane_t1

0x6e46,	// (0x0006a547) main_tv_pg_hdr_pane_t2

0x6e54,	// (0x0006a555) main_tv_pg_hdr_pane_t3

0x6e64,	// (0x0006a565) main_tv_pg_hdr_pane_t4

0x6e74,	// (0x0006a575) main_tv_pg_hdr_pane_t5

0x0004,

0xfb5c,	// (0x0007325d) main_tv_pg_hdr_pane_t

0x6e84,	// (0x0006a585) single_mobtv_pg_channel_pane_ParamLimits

0x6e84,	// (0x0006a585) single_mobtv_pg_channel_pane

0x6e96,	// (0x0006a597) single_mobtv_pg_channel_table_pane

0x6e9f,	// (0x0006a5a0) single_mobtv_pg_channel_thumb_pane

0x6ea8,	// (0x0006a5a9) single_tv_pg_channel_pane_g1

0x6eb1,	// (0x0006a5b2) single_tv_pg_channel_pane_g2

0x0001,

0xfb67,	// (0x00073268) single_tv_pg_channel_pane_g

0xa813,	// (0x0006df14) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xa813,	// (0x0006df14) bg_single_mobtv_pg_channel_thumb_pane

0x6eba,	// (0x0006a5bb) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x6eba,	// (0x0006a5bb) single_mobtv_pg_channel_thumb_pane_g1

0x6ec8,	// (0x0006a5c9) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x6ec8,	// (0x0006a5c9) single_mobtv_pg_channel_thumb_pane_g2

0x6ed4,	// (0x0006a5d5) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x6ed4,	// (0x0006a5d5) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb6c,	// (0x0007326d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb6c,	// (0x0007326d) single_mobtv_pg_channel_thumb_pane_g

0x6ee0,	// (0x0006a5e1) single_mobtv_pg_channel_thumb_pane_t1

0x6eee,	// (0x0006a5ef) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb73,	// (0x00073274) single_mobtv_pg_channel_thumb_pane_t

0xab2c,	// (0x0006e22d) bg_single_mobtv_pg_channel_table_pane_g1

0xab2c,	// (0x0006e22d) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf398,	// (0x00072a99) bg_single_mobtv_pg_channel_table_pane_g

0x6efc,	// (0x0006a5fd) single_mobtv_pg_channel_table_pane_t1

0x6f0a,	// (0x0006a60b) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb78,	// (0x00073279) single_mobtv_pg_channel_table_pane_t

0x6f20,	// (0x0006a621) main_mobtv_info_pane_g1_ParamLimits

0x6f20,	// (0x0006a621) main_mobtv_info_pane_g1

0x6f3e,	// (0x0006a63f) main_mobtv_info_pane_t1_ParamLimits

0x6f3e,	// (0x0006a63f) main_mobtv_info_pane_t1

0x6fb6,	// (0x0006a6b7) main_mobtv_info_pane_t2_ParamLimits

0x6fb6,	// (0x0006a6b7) main_mobtv_info_pane_t2

0x0002,

0xfb82,	// (0x00073283) main_mobtv_info_pane_t_ParamLimits

0xfb82,	// (0x00073283) main_mobtv_info_pane_t

0x7045,	// (0x0006a746) wait_bar_pane_cp05

0x7057,	// (0x0006a758) main_mobtv_loading_pane_g1_ParamLimits

0x7057,	// (0x0006a758) main_mobtv_loading_pane_g1

0x706a,	// (0x0006a76b) main_mobtv_loading_pane_g2_ParamLimits

0x706a,	// (0x0006a76b) main_mobtv_loading_pane_g2

0x7076,	// (0x0006a777) main_mobtv_loading_pane_g3_ParamLimits

0x7076,	// (0x0006a777) main_mobtv_loading_pane_g3

0x0002,

0xfb89,	// (0x0007328a) main_mobtv_loading_pane_g_ParamLimits

0xfb89,	// (0x0007328a) main_mobtv_loading_pane_g

0x7089,	// (0x0006a78a) main_mobtv_loading_pane_t1_ParamLimits

0x7089,	// (0x0006a78a) main_mobtv_loading_pane_t1

0x70a1,	// (0x0006a7a2) main_mobtv_loading_pane_t2_ParamLimits

0x70a1,	// (0x0006a7a2) main_mobtv_loading_pane_t2

0x0001,

0xfb90,	// (0x00073291) main_mobtv_loading_pane_t_ParamLimits

0xfb90,	// (0x00073291) main_mobtv_loading_pane_t

0x70c5,	// (0x0006a7c6) wait_bar_pane_cp06_ParamLimits

0x70c5,	// (0x0006a7c6) wait_bar_pane_cp06

0x70d4,	// (0x0006a7d5) main_mobtv_programe_curr_pane_t1

0x70e2,	// (0x0006a7e3) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb95,	// (0x00073296) main_mobtv_programe_curr_pane_t

0x70f0,	// (0x0006a7f1) main_mobtv_programe_next_pane_t1

0x70fe,	// (0x0006a7ff) main_mobtv_programe_next_pane_t2

0x710c,	// (0x0006a80d) main_mobtv_programe_next_pane_t3

0x0002,

0xfb9a,	// (0x0007329b) main_mobtv_programe_next_pane_t

0xa08d,	// (0x0006d78e) bg_popup_mobtv_noti_window_pane

0x711a,	// (0x0006a81b) popup_mobtv_noti_window_g1

0x7122,	// (0x0006a823) popup_mobtv_noti_window_t1

0x7130,	// (0x0006a831) popup_mobtv_noti_window_t2

0x0001,

0xfba1,	// (0x000732a2) popup_mobtv_noti_window_t

0xab2c,	// (0x0006e22d) bg_popup_mobtv_noti_window_pane_g1

0xa112,	// (0x0006d813) sc_clock_pane

0xa112,	// (0x0006d813) main_fs_bigclock_pane

0x60db,	// (0x000697dc) blid2_tripm_pane_t4_ParamLimits

0x60db,	// (0x000697dc) blid2_tripm_pane_t4

0x713e,	// (0x0006a83f) sc_clock_pane_g1_ParamLimits

0x713e,	// (0x0006a83f) sc_clock_pane_g1

0x7150,	// (0x0006a851) sc_clock_pane_t1_ParamLimits

0x7150,	// (0x0006a851) sc_clock_pane_t1

0x7172,	// (0x0006a873) sc_clock_pane_t2_ParamLimits

0x7172,	// (0x0006a873) sc_clock_pane_t2

0x718a,	// (0x0006a88b) sc_clock_pane_t3_ParamLimits

0x718a,	// (0x0006a88b) sc_clock_pane_t3

0x0004,

0xfba6,	// (0x000732a7) sc_clock_pane_t_ParamLimits

0xfba6,	// (0x000732a7) sc_clock_pane_t

0x8608,	// (0x0006bd09) main_fs_bigclock_indicator_pane_ParamLimits

0x8608,	// (0x0006bd09) main_fs_bigclock_indicator_pane

0x7230,	// (0x0006a931) main_fs_bigclock_pane_g1_ParamLimits

0x7230,	// (0x0006a931) main_fs_bigclock_pane_g1

0x8614,	// (0x0006bd15) main_fs_bigclock_pane_t1_ParamLimits

0x8614,	// (0x0006bd15) main_fs_bigclock_pane_t1

0x8626,	// (0x0006bd27) main_fs_bigclock_pane_t2_ParamLimits

0x8626,	// (0x0006bd27) main_fs_bigclock_pane_t2

0x863a,	// (0x0006bd3b) main_fs_bigclock_pane_t3_ParamLimits

0x863a,	// (0x0006bd3b) main_fs_bigclock_pane_t3

0x0002,

0xfd37,	// (0x00073438) main_fs_bigclock_pane_t_ParamLimits

0xfd37,	// (0x00073438) main_fs_bigclock_pane_t

0xc20f,	// (0x0006f910) main_fs_bigclock_indicator_pane_g1

0x6bb1,	// (0x0006a2b2) ncim_query_content_pane_g2_ParamLimits

0x6bb1,	// (0x0006a2b2) ncim_query_content_pane_g2

0x0001,

0xfb33,	// (0x00073234) ncim_query_content_pane_g_ParamLimits

0xfb33,	// (0x00073234) ncim_query_content_pane_g

0x71a3,	// (0x0006a8a4) sc_clock_pane_t4_ParamLimits

0x71a3,	// (0x0006a8a4) sc_clock_pane_t4

0xa104,	// (0x0006d805) main_radioblah_pane

0xbba2,	// (0x0006f2a3) cell_call4_button_pane_t1_copy1_ParamLimits

0xbba2,	// (0x0006f2a3) cell_call4_button_pane_t1_copy1

0x6a78,	// (0x0006a179) main_ncimui_pane_t1_ParamLimits

0x6a78,	// (0x0006a179) main_ncimui_pane_t1

0x6a92,	// (0x0006a193) main_ncimui_pane_t2_ParamLimits

0x6a92,	// (0x0006a193) main_ncimui_pane_t2

0x0002,

0xfb2c,	// (0x0007322d) main_ncimui_pane_t_ParamLimits

0xfb2c,	// (0x0007322d) main_ncimui_pane_t

0x73b4,	// (0x0006aab5) main_radioblah_anim_pane_ParamLimits

0x73b4,	// (0x0006aab5) main_radioblah_anim_pane

0x73c5,	// (0x0006aac6) main_radioblah_info_pane_ParamLimits

0x73c5,	// (0x0006aac6) main_radioblah_info_pane

0x73eb,	// (0x0006aaec) main_radioblah_pane_t1_ParamLimits

0x73eb,	// (0x0006aaec) main_radioblah_pane_t1

0x7407,	// (0x0006ab08) main_radioblah_pane_t2_ParamLimits

0x7407,	// (0x0006ab08) main_radioblah_pane_t2

0x0003,

0xfbc7,	// (0x000732c8) main_radioblah_pane_t_ParamLimits

0xfbc7,	// (0x000732c8) main_radioblah_pane_t

0x744f,	// (0x0006ab50) main_radioblah_rocker_ctrl_pane_ParamLimits

0x744f,	// (0x0006ab50) main_radioblah_rocker_ctrl_pane

0x74a7,	// (0x0006aba8) main_radioblah_info_pane_t1_ParamLimits

0x74a7,	// (0x0006aba8) main_radioblah_info_pane_t1

0x74e1,	// (0x0006abe2) main_radioblah_info_pane_t2_ParamLimits

0x74e1,	// (0x0006abe2) main_radioblah_info_pane_t2

0x0003,

0xfbd0,	// (0x000732d1) main_radioblah_info_pane_t_ParamLimits

0xfbd0,	// (0x000732d1) main_radioblah_info_pane_t

0xab2c,	// (0x0006e22d) main_radioblah_rocker_ctrl_pane_g1

0x7591,	// (0x0006ac92) main_radioblah_rocker_ctrl_pane_g2

0x7599,	// (0x0006ac9a) main_radioblah_rocker_ctrl_pane_g3

0x75a1,	// (0x0006aca2) main_radioblah_rocker_ctrl_pane_g4

0x75a9,	// (0x0006acaa) main_radioblah_rocker_ctrl_pane_g5

0x75b1,	// (0x0006acb2) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbd9,	// (0x000732da) main_radioblah_rocker_ctrl_pane_g

0x6605,	// (0x00069d06) main_cset_text2_pane_t1_copy1_ParamLimits

0xbc00,	// (0x0006f301) cam4_image_uncrop_qvga_pane

0xbc59,	// (0x0006f35a) vid4_image_uncrop_qcif_pane

0xbdba,	// (0x0006f4bb) cam6_image_uncrop_qvga_pane_ParamLimits

0xbdba,	// (0x0006f4bb) cam6_image_uncrop_qvga_pane

0x64b2,	// (0x00069bb3) vid6_image_uncrop_qcif_pane_ParamLimits

0x64b2,	// (0x00069bb3) vid6_image_uncrop_qcif_pane

0xa08d,	// (0x0006d78e) bg_popup_preview_window_pane_cp03

0x6a2e,	// (0x0006a12f) list_cset_text2_pane

0x6a36,	// (0x0006a137) main_cset6_text2_pane_g1

0x6a3e,	// (0x0006a13f) main_cset6_text2_pane_t1

0x75b9,	// (0x0006acba) list_cset_text2_pane_t1_ParamLimits

0x75b9,	// (0x0006acba) list_cset_text2_pane_t1

0xa104,	// (0x0006d805) main_radioblah_pane_ParamLimits

0x7031,	// (0x0006a732) main_mobtv_info_pane_t3_ParamLimits

0x7031,	// (0x0006a732) main_mobtv_info_pane_t3

0x73d9,	// (0x0006aada) main_radioblah_pane_g1

0x7477,	// (0x0006ab78) main_radioblah_info_pane_g1

0x7536,	// (0x0006ac37) main_radioblah_info_pane_t3_ParamLimits

0x7536,	// (0x0006ac37) main_radioblah_info_pane_t3

0x20e2,	// (0x000657e3) highlight_cell_cale_month_pane_ParamLimits

0x20e2,	// (0x000657e3) highlight_cell_cale_month_pane

0xa112,	// (0x0006d813) main_phob_fisheye_pane

0xe4dc,	// (0x00071bdd) scroll_pane_cp0031_ParamLimits

0xe4dc,	// (0x00071bdd) scroll_pane_cp0031

0x65f6,	// (0x00069cf7) wait_bar_pane_cp08_ParamLimits

0x66ab,	// (0x00069dac) cset_list_set_pane_copy1_ParamLimits

0x75d2,	// (0x0006acd3) highlight_cell_cale_month_pane_g1

0x75da,	// (0x0006acdb) highlight_cell_cale_month_pane_t1

0xf021,	// (0x00072722) list_gen_pane_cp01

0xebb8,	// (0x000722b9) scroll_pane_01

0x75e8,	// (0x0006ace9) list_single_double_fisheye_pane

0x75f1,	// (0x0006acf2) list_double_fisheye_pane_g1_ParamLimits

0x75f1,	// (0x0006acf2) list_double_fisheye_pane_g1

0x75fd,	// (0x0006acfe) list_double_fisheye_pane_g2_ParamLimits

0x75fd,	// (0x0006acfe) list_double_fisheye_pane_g2

0x7611,	// (0x0006ad12) list_double_fisheye_pane_g3_ParamLimits

0x7611,	// (0x0006ad12) list_double_fisheye_pane_g3

0x0004,

0xfbe6,	// (0x000732e7) list_double_fisheye_pane_g_ParamLimits

0xfbe6,	// (0x000732e7) list_double_fisheye_pane_g

0x763a,	// (0x0006ad3b) list_double_fisheye_pane_t1_ParamLimits

0x763a,	// (0x0006ad3b) list_double_fisheye_pane_t1

0x7655,	// (0x0006ad56) list_double_fisheye_pane_t2_ParamLimits

0x7655,	// (0x0006ad56) list_double_fisheye_pane_t2

0x0001,

0xfbf1,	// (0x000732f2) list_double_fisheye_pane_t_ParamLimits

0xfbf1,	// (0x000732f2) list_double_fisheye_pane_t

0xa112,	// (0x0006d813) main_call5_pane

0x71ce,	// (0x0006a8cf) sc_swipe_pane_ParamLimits

0x71ce,	// (0x0006a8cf) sc_swipe_pane

0x768a,	// (0x0006ad8b) call5_image_pane_ParamLimits

0x768a,	// (0x0006ad8b) call5_image_pane

0x76a7,	// (0x0006ada8) call5_swipe_1_pane_ParamLimits

0x76a7,	// (0x0006ada8) call5_swipe_1_pane

0x76ba,	// (0x0006adbb) call5_swipe_2_pane_ParamLimits

0x76ba,	// (0x0006adbb) call5_swipe_2_pane

0x76e5,	// (0x0006ade6) popup_call5_audio_first_window_ParamLimits

0x76e5,	// (0x0006ade6) popup_call5_audio_first_window

0xa813,	// (0x0006df14) call5_swipe_1_pane_g1_ParamLimits

0xa813,	// (0x0006df14) call5_swipe_1_pane_g1

0x76f6,	// (0x0006adf7) call5_swipe_1_pane_g2_ParamLimits

0x76f6,	// (0x0006adf7) call5_swipe_1_pane_g2

0x0001,

0xfbf6,	// (0x000732f7) call5_swipe_1_pane_g_ParamLimits

0xfbf6,	// (0x000732f7) call5_swipe_1_pane_g

0x7702,	// (0x0006ae03) call5_swipe_1_pane_t1_ParamLimits

0x7702,	// (0x0006ae03) call5_swipe_1_pane_t1

0xa813,	// (0x0006df14) call5_swipe_2_pane_g1_ParamLimits

0xa813,	// (0x0006df14) call5_swipe_2_pane_g1

0x7717,	// (0x0006ae18) call5_swipe_2_pane_g2_ParamLimits

0x7717,	// (0x0006ae18) call5_swipe_2_pane_g2

0x0001,

0xfbfb,	// (0x000732fc) call5_swipe_2_pane_g_ParamLimits

0xfbfb,	// (0x000732fc) call5_swipe_2_pane_g

0x7723,	// (0x0006ae24) call5_swipe_2_pane_t1_ParamLimits

0x7723,	// (0x0006ae24) call5_swipe_2_pane_t1

0x7738,	// (0x0006ae39) sc_swipe_pane_g1_ParamLimits

0x7738,	// (0x0006ae39) sc_swipe_pane_g1

0x7745,	// (0x0006ae46) sc_swipe_pane_g2_ParamLimits

0x7745,	// (0x0006ae46) sc_swipe_pane_g2

0x0001,

0xfc00,	// (0x00073301) sc_swipe_pane_g_ParamLimits

0xfc00,	// (0x00073301) sc_swipe_pane_g

0x7751,	// (0x0006ae52) sc_swipe_pane_t1_ParamLimits

0x7751,	// (0x0006ae52) sc_swipe_pane_t1

0xa112,	// (0x0006d813) main_cmail_launcher_pane

0x7766,	// (0x0006ae67) aid_size_cell_cmail_l_ParamLimits

0x7766,	// (0x0006ae67) aid_size_cell_cmail_l

0x7774,	// (0x0006ae75) grid_cmail_l_pane_ParamLimits

0x7774,	// (0x0006ae75) grid_cmail_l_pane

0x778e,	// (0x0006ae8f) cell_cmail_l_pane_ParamLimits

0x778e,	// (0x0006ae8f) cell_cmail_l_pane

0x77a8,	// (0x0006aea9) cell_cmail_l_pane_g1_ParamLimits

0x77a8,	// (0x0006aea9) cell_cmail_l_pane_g1

0x77b4,	// (0x0006aeb5) cell_cmail_l_pane_t1_ParamLimits

0x77b4,	// (0x0006aeb5) cell_cmail_l_pane_t1

0x77ca,	// (0x0006aecb) cell_cmail_l_pane_t2_ParamLimits

0x77ca,	// (0x0006aecb) cell_cmail_l_pane_t2

0x0001,

0xfc05,	// (0x00073306) cell_cmail_l_pane_t_ParamLimits

0xfc05,	// (0x00073306) cell_cmail_l_pane_t

0xa7ac,	// (0x0006dead) grid_highlight_pane_cp018_ParamLimits

0xa7ac,	// (0x0006dead) grid_highlight_pane_cp018

0x058e,	// (0x00063c8f) main2_pane_ParamLimits

0x058e,	// (0x00063c8f) main2_pane

0xa963,	// (0x0006e064) popup_sp_fs_action_menu_bg_pane_g1

0xa96b,	// (0x0006e06c) popup_sp_fs_action_menu_bg_pane_g2

0xa973,	// (0x0006e074) popup_sp_fs_action_menu_bg_pane_g3

0xa97b,	// (0x0006e07c) popup_sp_fs_action_menu_bg_pane_g4

0xa983,	// (0x0006e084) popup_sp_fs_action_menu_bg_pane_g5

0xa98b,	// (0x0006e08c) popup_sp_fs_action_menu_bg_pane_g6

0xa993,	// (0x0006e094) popup_sp_fs_action_menu_bg_pane_g7

0xa99b,	// (0x0006e09c) popup_sp_fs_action_menu_bg_pane_g8

0xa9a3,	// (0x0006e0a4) popup_sp_fs_action_menu_bg_pane_g9

0xa9ab,	// (0x0006e0ac) popup_sp_fs_action_menu_bg_pane_g10

0xa9ab,	// (0x0006e0ac) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf105,	// (0x00072806) popup_sp_fs_action_menu_bg_pane_g

0xa813,	// (0x0006df14) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x2_t3_g3_g1

0xa813,	// (0x0006df14) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x2_t3_g3_g2

0xa813,	// (0x0006df14) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1b3,	// (0x000728b4) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1b3,	// (0x000728b4) list_medium_line_x2_t3_g3_g

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t3_g3_t1_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t3_g3_t1

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t3_g3_t2_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t3_g3_t2

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t3_g3_t3_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1ba,	// (0x000728bb) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1ba,	// (0x000728bb) list_medium_line_x2_t3_g3_t

0xa813,	// (0x0006df14) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x2_t3_g2_g1

0xa813,	// (0x0006df14) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1c1,	// (0x000728c2) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1c1,	// (0x000728c2) list_medium_line_x2_t3_g2_g

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t3_g2_t1_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t3_g2_t1

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t3_g2_t2_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t3_g2_t2

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t3_g2_t3_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1ba,	// (0x000728bb) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1ba,	// (0x000728bb) list_medium_line_x2_t3_g2_t

0xa813,	// (0x0006df14) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x2_t4_g4_g1

0xa813,	// (0x0006df14) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x2_t4_g4_g2

0xa813,	// (0x0006df14) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x2_t4_g4_g3

0xa813,	// (0x0006df14) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c6,	// (0x000728c7) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c6,	// (0x000728c7) list_medium_line_x2_t4_g4_g

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t4_g4_t1_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t4_g4_t1

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t4_g4_t2_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t4_g4_t2

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t4_g4_t3_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t4_g4_t3

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t4_g4_t4_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1cf,	// (0x000728d0) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1cf,	// (0x000728d0) list_medium_line_x2_t4_g4_t

0xa813,	// (0x0006df14) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x2_t2_g4_g1

0xa813,	// (0x0006df14) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x2_t2_g4_g2

0xa813,	// (0x0006df14) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x2_t2_g4_g3

0xa813,	// (0x0006df14) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c6,	// (0x000728c7) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c6,	// (0x000728c7) list_medium_line_x2_t2_g4_g

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t2_g4_t1_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t2_g4_t1

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t2_g4_t2_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t2_g4_t2

0x0001,

0xf196,	// (0x00072897) list_medium_line_x2_t2_g4_t_ParamLimits

0xf196,	// (0x00072897) list_medium_line_x2_t2_g4_t

0xa813,	// (0x0006df14) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x2_t2_g3_g1

0xa813,	// (0x0006df14) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x2_t2_g3_g2

0xa813,	// (0x0006df14) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1b3,	// (0x000728b4) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1b3,	// (0x000728b4) list_medium_line_x2_t2_g3_g

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t2_g3_t1_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t2_g3_t1

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t2_g3_t2_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t2_g3_t2

0x0001,

0xf196,	// (0x00072897) list_medium_line_x2_t2_g3_t_ParamLimits

0xf196,	// (0x00072897) list_medium_line_x2_t2_g3_t

0x2234,	// (0x00065935) main_sp_fs_list_pane_ParamLimits

0x2234,	// (0x00065935) main_sp_fs_list_pane

0xe1c4,	// (0x000718c5) sp_fs_scroll_pane_ParamLimits

0xe1c4,	// (0x000718c5) sp_fs_scroll_pane

0xb095,	// (0x0006e796) list_medium_line_x2_t3_t1

0xb095,	// (0x0006e796) list_medium_line_x2_t3_t2

0xb095,	// (0x0006e796) list_medium_line_x2_t3_t3

0x0002,

0xf27c,	// (0x0007297d) list_medium_line_x2_t3_t

0xb095,	// (0x0006e796) list_medium_line_x3_t4_t1

0xb095,	// (0x0006e796) list_medium_line_x3_t4_t2

0xb095,	// (0x0006e796) list_medium_line_x3_t4_t3

0xb095,	// (0x0006e796) list_medium_line_x3_t4_t4

0x0003,

0xf283,	// (0x00072984) list_medium_line_x3_t4_t

0xb095,	// (0x0006e796) list_medium_line_x4_t5_t1

0xb095,	// (0x0006e796) list_medium_line_x4_t5_t2

0xb095,	// (0x0006e796) list_medium_line_x4_t5_t3

0xb095,	// (0x0006e796) list_medium_line_x4_t5_t4

0xb095,	// (0x0006e796) list_medium_line_x4_t5_t5

0x0004,

0xf28c,	// (0x0007298d) list_medium_line_x4_t5_t

0xa813,	// (0x0006df14) list_medium_line_t4_g4_g1_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_t4_g4_g1

0xa813,	// (0x0006df14) list_medium_line_t4_g4_g2_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_t4_g4_g2

0xa813,	// (0x0006df14) list_medium_line_t4_g4_g3_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_t4_g4_g3

0xa813,	// (0x0006df14) list_medium_line_t4_g4_g4_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_t4_g4_g4

0x0003,

0xf1c6,	// (0x000728c7) list_medium_line_t4_g4_g_ParamLimits

0xf1c6,	// (0x000728c7) list_medium_line_t4_g4_g

0xaafe,	// (0x0006e1ff) list_medium_line_t4_g4_t1_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_t4_g4_t1

0xaafe,	// (0x0006e1ff) list_medium_line_t4_g4_t2_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_t4_g4_t2

0xaafe,	// (0x0006e1ff) list_medium_line_t4_g4_t3_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_t4_g4_t3

0xaafe,	// (0x0006e1ff) list_medium_line_t4_g4_t4_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_t4_g4_t4

0x0003,

0xf1cf,	// (0x000728d0) list_medium_line_t4_g4_t_ParamLimits

0xf1cf,	// (0x000728d0) list_medium_line_t4_g4_t

0x22cf,	// (0x000659d0) chi_dic_find_pane_g1

0x3179,	// (0x0006687a) main_tport_pane

0xb095,	// (0x0006e796) list_medium_line_plain_t1

0xa813,	// (0x0006df14) list_medium_line_t2_g2_g1_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_t2_g2_g1

0xa813,	// (0x0006df14) list_medium_line_t2_g2_g2_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_t2_g2_g2

0x0001,

0xf1c1,	// (0x000728c2) list_medium_line_t2_g2_g_ParamLimits

0xf1c1,	// (0x000728c2) list_medium_line_t2_g2_g

0xaafe,	// (0x0006e1ff) list_medium_line_t2_g2_t1_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_t2_g2_t1

0xaafe,	// (0x0006e1ff) list_medium_line_t2_g2_t2_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_t2_g2_t2

0x0001,

0xf196,	// (0x00072897) list_medium_line_t2_g2_t_ParamLimits

0xf196,	// (0x00072897) list_medium_line_t2_g2_t

0x5da3,	// (0x000694a4) aid_sp_fs_list_icon_a_sm

0x5dab,	// (0x000694ac) aid_sp_fs_list_icon_d

0x5db3,	// (0x000694b4) aid_sp_fs_text_primary

0x5dbc,	// (0x000694bd) aid_sp_fs_text_secondary

0xa08d,	// (0x0006d78e) list_medium_line

0xa08d,	// (0x0006d78e) list_medium_line_g2

0xa08d,	// (0x0006d78e) list_medium_line_g3

0xa08d,	// (0x0006d78e) list_medium_line_plain

0xa08d,	// (0x0006d78e) list_medium_line_plain_t2

0xa08d,	// (0x0006d78e) list_medium_line_plain_t3

0xa08d,	// (0x0006d78e) list_medium_line_right_icon

0xa08d,	// (0x0006d78e) list_medium_line_right_iconx2

0xa08d,	// (0x0006d78e) list_medium_line_t2

0xa08d,	// (0x0006d78e) list_medium_line_t2_g2

0xa08d,	// (0x0006d78e) list_medium_line_t2_g3

0xa08d,	// (0x0006d78e) list_medium_line_t2_right_icon

0xa08d,	// (0x0006d78e) list_medium_line_t2_right_iconx2

0xa08d,	// (0x0006d78e) list_medium_line_t3

0xa08d,	// (0x0006d78e) list_medium_line_t3_g2

0xa08d,	// (0x0006d78e) list_medium_line_t3_g3

0xa08d,	// (0x0006d78e) list_medium_line_t3_right_iconx2

0xa08d,	// (0x0006d78e) list_medium_line_t4_g4

0xa08d,	// (0x0006d78e) list_medium_line_x2

0xa08d,	// (0x0006d78e) list_medium_line_x2_t2_g2

0xa08d,	// (0x0006d78e) list_medium_line_x2_t2_g3

0xa08d,	// (0x0006d78e) list_medium_line_x2_t2_g4

0xa08d,	// (0x0006d78e) list_medium_line_x2_t3

0xa08d,	// (0x0006d78e) list_medium_line_x2_t3_g2

0xa08d,	// (0x0006d78e) list_medium_line_x2_t3_g3

0xa08d,	// (0x0006d78e) list_medium_line_x2_t3_g4

0xa08d,	// (0x0006d78e) list_medium_line_x2_t4_g2

0xa08d,	// (0x0006d78e) list_medium_line_x2_t4_g4

0xa08d,	// (0x0006d78e) list_medium_line_x3

0xa08d,	// (0x0006d78e) list_medium_line_x3_t4

0xa08d,	// (0x0006d78e) list_medium_line_x3_t4_g4

0xa08d,	// (0x0006d78e) list_medium_line_x4_t4

0xa08d,	// (0x0006d78e) list_medium_line_x4_t4_g7

0xa08d,	// (0x0006d78e) list_medium_line_x4_t5

0x5dc5,	// (0x000694c6) list_single_fs_dyc_pane_ParamLimits

0x5dc5,	// (0x000694c6) list_single_fs_dyc_pane

0xa813,	// (0x0006df14) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x4_t4_g7_g1

0xa813,	// (0x0006df14) list_medium_line_x4_t4_g7_g2_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x4_t4_g7_g2

0xa813,	// (0x0006df14) list_medium_line_x4_t4_g7_g3_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x4_t4_g7_g3

0xa813,	// (0x0006df14) list_medium_line_x4_t4_g7_g4_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x4_t4_g7_g4

0xa813,	// (0x0006df14) list_medium_line_x4_t4_g7_g5_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x4_t4_g7_g5

0xa813,	// (0x0006df14) list_medium_line_x4_t4_g7_g6_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x4_t4_g7_g6

0xa821,	// (0x0006df22) list_medium_line_x4_t4_g7_g7_ParamLimits

0xa821,	// (0x0006df22) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb0d,	// (0x0007320e) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb0d,	// (0x0007320e) list_medium_line_x4_t4_g7_g

0xaafe,	// (0x0006e1ff) list_medium_line_x4_t4_g7_t1_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_x4_t4_g7_t1

0xaafe,	// (0x0006e1ff) list_medium_line_x4_t4_g7_t2_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_x4_t4_g7_t2

0xaafe,	// (0x0006e1ff) list_medium_line_x4_t4_g7_t3_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_x4_t4_g7_t3

0xb6e2,	// (0x0006ede3) list_medium_line_x4_t4_g7_t4_ParamLimits

0xb6e2,	// (0x0006ede3) list_medium_line_x4_t4_g7_t4

0xb6e2,	// (0x0006ede3) list_medium_line_x4_t4_g7_t5_ParamLimits

0xb6e2,	// (0x0006ede3) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb1c,	// (0x0007321d) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb1c,	// (0x0007321d) list_medium_line_x4_t4_g7_t

0x69ed,	// (0x0006a0ee) list_single_dyc_row_pane_ParamLimits

0x69ed,	// (0x0006a0ee) list_single_dyc_row_pane

0x7677,	// (0x0006ad78) call5_gesture_pane_ParamLimits

0x7677,	// (0x0006ad78) call5_gesture_pane

0x76cd,	// (0x0006adce) call5_windows_pane_ParamLimits

0x76cd,	// (0x0006adce) call5_windows_pane

0x77e7,	// (0x0006aee8) call5_swipe_1_pane_cp_ParamLimits

0x77e7,	// (0x0006aee8) call5_swipe_1_pane_cp

0x77f3,	// (0x0006aef4) call5_swipe_2_pane_cp_ParamLimits

0x77f3,	// (0x0006aef4) call5_swipe_2_pane_cp

0xaaec,	// (0x0006e1ed) call5_image_pane_cp

0x77ff,	// (0x0006af00) popup_call5_audio_first_window_cp_ParamLimits

0x77ff,	// (0x0006af00) popup_call5_audio_first_window_cp

0x7738,	// (0x0006ae39) call5_swipe_1_pane_g1_cp_ParamLimits

0x7738,	// (0x0006ae39) call5_swipe_1_pane_g1_cp

0x780d,	// (0x0006af0e) call5_swipe_1_pane_g2_cp

0x7751,	// (0x0006ae52) call5_swipe_1_pane_t1_cp_ParamLimits

0x7751,	// (0x0006ae52) call5_swipe_1_pane_t1_cp

0x7738,	// (0x0006ae39) call5_swipe_2_pane_g1_cp_ParamLimits

0x7738,	// (0x0006ae39) call5_swipe_2_pane_g1_cp

0x7815,	// (0x0006af16) call5_swipe_2_pane_g2_cp

0x781d,	// (0x0006af1e) call5_swipe_2_pane_t1_cp_ParamLimits

0x781d,	// (0x0006af1e) call5_swipe_2_pane_t1_cp

0xa7ac,	// (0x0006dead) main_sp_fs_email_pane

0x7832,	// (0x0006af33) main_sp_fs_listscroll_pane_te

0x783b,	// (0x0006af3c) popup_sp_fs_action_menu_pane_ParamLimits

0x783b,	// (0x0006af3c) popup_sp_fs_action_menu_pane

0xab2c,	// (0x0006e22d) bg_sp_fs_ctrlbar_pane_g1

0x787d,	// (0x0006af7e) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x7886,	// (0x0006af87) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x788f,	// (0x0006af90) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xab2c,	// (0x0006e22d) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc0a,	// (0x0007330b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xd678,	// (0x00070d79) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xd678,	// (0x00070d79) bg_sp_fs_ctrlbar_ddmenu_pane

0x7898,	// (0x0006af99) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x7898,	// (0x0006af99) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x78a4,	// (0x0006afa5) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x78a4,	// (0x0006afa5) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc13,	// (0x00073314) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc13,	// (0x00073314) main_sp_fs_ctrlbar_ddmenu_pane_g

0x78b0,	// (0x0006afb1) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x78b0,	// (0x0006afb1) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xab2c,	// (0x0006e22d) list_medium_line_t2_right_icon_g1

0xb095,	// (0x0006e796) list_medium_line_t2_right_icon_t1

0xb095,	// (0x0006e796) list_medium_line_t2_right_icon_t2

0x0001,

0xfc18,	// (0x00073319) list_medium_line_t2_right_icon_t

0xb6f6,	// (0x0006edf7) bg_sp_fs_ctrlbar_pane_ParamLimits

0xb6f6,	// (0x0006edf7) bg_sp_fs_ctrlbar_pane

0x794a,	// (0x0006b04b) main_sp_fs_ctrlbar_button_pane_cp01

0x7954,	// (0x0006b055) main_sp_fs_ctrlbar_ddmenu_pane

0x795e,	// (0x0006b05f) main_sp_fs_ctrlbar_pane_g1

0x796a,	// (0x0006b06b) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc1d,	// (0x0007331e) main_sp_fs_ctrlbar_pane_g

0x79aa,	// (0x0006b0ab) main_sp_fs_ctrlbar_pane_t1

0x79e9,	// (0x0006b0ea) main_sp_fs_ctrlbar_pane

0x7a28,	// (0x0006b129) main_sp_fs_listscroll_pane_te_cp01

0x7a48,	// (0x0006b149) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7a48,	// (0x0006b149) popup_sp_fs_action_menu_pane_cp01

0xa7ac,	// (0x0006dead) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa7ac,	// (0x0006dead) bg_sp_fs_highlight_list_pane_cp01

0x7a6d,	// (0x0006b16e) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x7a6d,	// (0x0006b16e) sp_fs_action_menu_list_gene_pane_g1

0x7a7c,	// (0x0006b17d) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x7a7c,	// (0x0006b17d) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc2b,	// (0x0007332c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc2b,	// (0x0007332c) sp_fs_action_menu_list_gene_pane_g

0x7a89,	// (0x0006b18a) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x7a89,	// (0x0006b18a) sp_fs_action_menu_list_gene_pane_t1

0x7aa1,	// (0x0006b1a2) sp_fs_action_menu_list_gene_pane_ParamLimits

0x7aa1,	// (0x0006b1a2) sp_fs_action_menu_list_gene_pane

0x7ac0,	// (0x0006b1c1) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x7ac0,	// (0x0006b1c1) popup_sp_fs_action_menu_bg_pane

0x7ace,	// (0x0006b1cf) sp_fs_action_menu_list_pane_ParamLimits

0x7ace,	// (0x0006b1cf) sp_fs_action_menu_list_pane

0x7aee,	// (0x0006b1ef) sp_fs_scroll_pane_cp01_ParamLimits

0x7aee,	// (0x0006b1ef) sp_fs_scroll_pane_cp01

0xb095,	// (0x0006e796) list_medium_line_plain_t2_t1

0xb095,	// (0x0006e796) list_medium_line_plain_t2_t2

0x0001,

0xfc18,	// (0x00073319) list_medium_line_plain_t2_t

0xb095,	// (0x0006e796) list_medium_line_plain_t3_t1

0xb095,	// (0x0006e796) list_medium_line_plain_t3_t2

0xb095,	// (0x0006e796) list_medium_line_plain_t3_t3

0x0002,

0xf27c,	// (0x0007297d) list_medium_line_plain_t3_t

0xa813,	// (0x0006df14) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x2_t2_g2_g1

0xa813,	// (0x0006df14) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1c1,	// (0x000728c2) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1c1,	// (0x000728c2) list_medium_line_x2_t2_g2_g

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t2_g2_t1_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t2_g2_t1

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t2_g2_t2_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t2_g2_t2

0x0001,

0xf196,	// (0x00072897) list_medium_line_x2_t2_g2_t_ParamLimits

0xf196,	// (0x00072897) list_medium_line_x2_t2_g2_t

0xa813,	// (0x0006df14) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x2_t4_g2_g1

0xa813,	// (0x0006df14) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1c1,	// (0x000728c2) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1c1,	// (0x000728c2) list_medium_line_x2_t4_g2_g

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t4_g2_t1_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t4_g2_t1

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t4_g2_t2_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t4_g2_t2

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t4_g2_t3_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t4_g2_t3

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t4_g2_t4_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1cf,	// (0x000728d0) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1cf,	// (0x000728d0) list_medium_line_x2_t4_g2_t

0xab2c,	// (0x0006e22d) list_medium_line_t3_right_iconx2_g1

0xab2c,	// (0x0006e22d) list_medium_line_t3_right_iconx2_g2

0xab2c,	// (0x0006e22d) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf39d,	// (0x00072a9e) list_medium_line_t3_right_iconx2_g

0xb095,	// (0x0006e796) list_medium_line_t3_right_iconx2_t1

0xb095,	// (0x0006e796) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc18,	// (0x00073319) list_medium_line_t3_right_iconx2_t

0xa813,	// (0x0006df14) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x3_t4_g4_g1

0xa813,	// (0x0006df14) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x3_t4_g4_g2

0xa813,	// (0x0006df14) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x3_t4_g4_g3

0xa813,	// (0x0006df14) list_medium_line_x3_t4_g4_g4_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c6,	// (0x000728c7) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c6,	// (0x000728c7) list_medium_line_x3_t4_g4_g

0xaafe,	// (0x0006e1ff) list_medium_line_x3_t4_g4_t1_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_x3_t4_g4_t1

0xaafe,	// (0x0006e1ff) list_medium_line_x3_t4_g4_t2_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_x3_t4_g4_t2

0xaafe,	// (0x0006e1ff) list_medium_line_x3_t4_g4_t3_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_x3_t4_g4_t3

0xaafe,	// (0x0006e1ff) list_medium_line_x3_t4_g4_t4_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1cf,	// (0x000728d0) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1cf,	// (0x000728d0) list_medium_line_x3_t4_g4_t

0x7b14,	// (0x0006b215) list_single_dyc_row_text_pane_t1_ParamLimits

0x7b14,	// (0x0006b215) list_single_dyc_row_text_pane_t1

0x7b5d,	// (0x0006b25e) list_single_dyc_row_text_pane_t2_ParamLimits

0x7b5d,	// (0x0006b25e) list_single_dyc_row_text_pane_t2

0x7bd3,	// (0x0006b2d4) list_single_dyc_row_text_pane_t3_ParamLimits

0x7bd3,	// (0x0006b2d4) list_single_dyc_row_text_pane_t3

0x0005,

0xfc30,	// (0x00073331) list_single_dyc_row_text_pane_t_ParamLimits

0xfc30,	// (0x00073331) list_single_dyc_row_text_pane_t

0x7cb6,	// (0x0006b3b7) list_single_dyc_row_pane_g1_ParamLimits

0x7cb6,	// (0x0006b3b7) list_single_dyc_row_pane_g1

0x7cc2,	// (0x0006b3c3) list_single_dyc_row_pane_g2_ParamLimits

0x7cc2,	// (0x0006b3c3) list_single_dyc_row_pane_g2

0x7cce,	// (0x0006b3cf) list_single_dyc_row_pane_g3_ParamLimits

0x7cce,	// (0x0006b3cf) list_single_dyc_row_pane_g3

0x7cda,	// (0x0006b3db) list_single_dyc_row_pane_g4_ParamLimits

0x7cda,	// (0x0006b3db) list_single_dyc_row_pane_g4

0x0003,

0xfc3d,	// (0x0007333e) list_single_dyc_row_pane_g_ParamLimits

0xfc3d,	// (0x0007333e) list_single_dyc_row_pane_g

0x7ce6,	// (0x0006b3e7) list_single_dyc_row_text_pane_ParamLimits

0x7ce6,	// (0x0006b3e7) list_single_dyc_row_text_pane

0xa08d,	// (0x0006d78e) bg_sp_fs_scroll_pane

0x7d05,	// (0x0006b406) thumb_sp_fs_scroll_pane

0xa813,	// (0x0006df14) list_medium_line_g1_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_g1

0xaafe,	// (0x0006e1ff) list_medium_line_t1_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_t1

0xa813,	// (0x0006df14) list_medium_line_x2_g1_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x2_g1

0xa813,	// (0x0006df14) list_medium_line_x2_g2_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x2_g2

0x0001,

0xf1c1,	// (0x000728c2) list_medium_line_x2_g_ParamLimits

0xf1c1,	// (0x000728c2) list_medium_line_x2_g

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t1_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t1

0xa813,	// (0x0006df14) list_medium_line_x3_g1_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x3_g1

0x4c76,	// (0x00068377) list_medium_line_x3_g2_ParamLimits

0x4c76,	// (0x00068377) list_medium_line_x3_g2

0x0001,

0xfc46,	// (0x00073347) list_medium_line_x3_g_ParamLimits

0xfc46,	// (0x00073347) list_medium_line_x3_g

0x7d0e,	// (0x0006b40f) list_medium_line_x3_t1_ParamLimits

0x7d0e,	// (0x0006b40f) list_medium_line_x3_t1

0x7d22,	// (0x0006b423) thumb_sp_fs_scroll_pane_g1

0x7d2b,	// (0x0006b42c) thumb_sp_fs_scroll_pane_g2

0x7d34,	// (0x0006b435) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc4b,	// (0x0007334c) thumb_sp_fs_scroll_pane_g

0x7d22,	// (0x0006b423) bg_sp_fs_scroll_pane_g1

0x7d2b,	// (0x0006b42c) bg_sp_fs_scroll_pane_g2

0x7d34,	// (0x0006b435) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc4b,	// (0x0007334c) bg_sp_fs_scroll_pane_g

0xa813,	// (0x0006df14) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x2_t3_g4_g1

0xa813,	// (0x0006df14) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x2_t3_g4_g2

0xa813,	// (0x0006df14) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x2_t3_g4_g3

0xa813,	// (0x0006df14) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c6,	// (0x000728c7) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c6,	// (0x000728c7) list_medium_line_x2_t3_g4_g

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t3_g4_t1_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t3_g4_t1

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t3_g4_t2_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t3_g4_t2

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t3_g4_t3_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1ba,	// (0x000728bb) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1ba,	// (0x000728bb) list_medium_line_x2_t3_g4_t

0xa813,	// (0x0006df14) list_medium_line_g2_g1_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_g2_g1

0xa813,	// (0x0006df14) list_medium_line_g2_g2_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_g2_g2

0x0001,

0xf1c1,	// (0x000728c2) list_medium_line_g2_g_ParamLimits

0xf1c1,	// (0x000728c2) list_medium_line_g2_g

0xaafe,	// (0x0006e1ff) list_medium_line_g2_t1_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_g2_t1

0xa813,	// (0x0006df14) list_medium_line_t3_g2_g1_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_t3_g2_g1

0xa813,	// (0x0006df14) list_medium_line_t3_g2_g2_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_t3_g2_g2

0x0001,

0xf1c1,	// (0x000728c2) list_medium_line_t3_g2_g_ParamLimits

0xf1c1,	// (0x000728c2) list_medium_line_t3_g2_g

0xaafe,	// (0x0006e1ff) list_medium_line_t3_g2_t1_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_t3_g2_t1

0xaafe,	// (0x0006e1ff) list_medium_line_t3_g2_t2_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_t3_g2_t2

0xaafe,	// (0x0006e1ff) list_medium_line_t3_g2_t3_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_t3_g2_t3

0x0002,

0xf1ba,	// (0x000728bb) list_medium_line_t3_g2_t_ParamLimits

0xf1ba,	// (0x000728bb) list_medium_line_t3_g2_t

0xab2c,	// (0x0006e22d) list_medium_line_right_icon_g1

0xb095,	// (0x0006e796) list_medium_line_right_icon_t1

0xa813,	// (0x0006df14) list_medium_line_t2_g1_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_t2_g1

0xaafe,	// (0x0006e1ff) list_medium_line_t2_t1_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_t2_t1

0xaafe,	// (0x0006e1ff) list_medium_line_t2_t2_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_t2_t2

0x0001,

0xf196,	// (0x00072897) list_medium_line_t2_t_ParamLimits

0xf196,	// (0x00072897) list_medium_line_t2_t

0xa813,	// (0x0006df14) list_medium_line_t3_g1_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_t3_g1

0xaafe,	// (0x0006e1ff) list_medium_line_t3_t1_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_t3_t1

0xaafe,	// (0x0006e1ff) list_medium_line_t3_t2_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_t3_t2

0xaafe,	// (0x0006e1ff) list_medium_line_t3_t3_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_t3_t3

0x0002,

0xf1ba,	// (0x000728bb) list_medium_line_t3_t_ParamLimits

0xf1ba,	// (0x000728bb) list_medium_line_t3_t

0xa813,	// (0x0006df14) list_medium_line_g3_g1_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_g3_g1

0xa813,	// (0x0006df14) list_medium_line_g3_g2_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_g3_g2

0xa813,	// (0x0006df14) list_medium_line_g3_g3_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_g3_g3

0x0002,

0xf1b3,	// (0x000728b4) list_medium_line_g3_g_ParamLimits

0xf1b3,	// (0x000728b4) list_medium_line_g3_g

0xaafe,	// (0x0006e1ff) list_medium_line_g3_t1_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_g3_t1

0xa813,	// (0x0006df14) list_medium_line_t2_g3_g1_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_t2_g3_g1

0xa813,	// (0x0006df14) list_medium_line_t2_g3_g2_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_t2_g3_g2

0xa813,	// (0x0006df14) list_medium_line_t2_g3_g3_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_t2_g3_g3

0x0002,

0xf1b3,	// (0x000728b4) list_medium_line_t2_g3_g_ParamLimits

0xf1b3,	// (0x000728b4) list_medium_line_t2_g3_g

0xaafe,	// (0x0006e1ff) list_medium_line_t2_g3_t1_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_t2_g3_t1

0xaafe,	// (0x0006e1ff) list_medium_line_t2_g3_t2_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_t2_g3_t2

0x0001,

0xf196,	// (0x00072897) list_medium_line_t2_g3_t_ParamLimits

0xf196,	// (0x00072897) list_medium_line_t2_g3_t

0xa813,	// (0x0006df14) list_medium_line_t3_g3_g1_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_t3_g3_g1

0xa813,	// (0x0006df14) list_medium_line_t3_g3_g2_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_t3_g3_g2

0xa813,	// (0x0006df14) list_medium_line_t3_g3_g3_ParamLimits

0xa813,	// (0x0006df14) list_medium_line_t3_g3_g3

0x0002,

0xf1b3,	// (0x000728b4) list_medium_line_t3_g3_g_ParamLimits

0xf1b3,	// (0x000728b4) list_medium_line_t3_g3_g

0xaafe,	// (0x0006e1ff) list_medium_line_t3_g3_t1_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_t3_g3_t1

0xaafe,	// (0x0006e1ff) list_medium_line_t3_g3_t2_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_t3_g3_t2

0xaafe,	// (0x0006e1ff) list_medium_line_t3_g3_t3_ParamLimits

0xaafe,	// (0x0006e1ff) list_medium_line_t3_g3_t3

0x0002,

0xf1ba,	// (0x000728bb) list_medium_line_t3_g3_t_ParamLimits

0xf1ba,	// (0x000728bb) list_medium_line_t3_g3_t

0xab2c,	// (0x0006e22d) list_medium_line_right_iconx2_g1

0xab2c,	// (0x0006e22d) list_medium_line_right_iconx2_g2

0x0001,

0xf398,	// (0x00072a99) list_medium_line_right_iconx2_g

0xb095,	// (0x0006e796) list_medium_line_right_iconx2_t1

0xab2c,	// (0x0006e22d) list_medium_line_t2_right_iconx2_g1

0xab2c,	// (0x0006e22d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf398,	// (0x00072a99) list_medium_line_t2_right_iconx2_g

0xb095,	// (0x0006e796) list_medium_line_t2_right_iconx2_t1

0xb095,	// (0x0006e796) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc18,	// (0x00073319) list_medium_line_t2_right_iconx2_t

0xb095,	// (0x0006e796) list_medium_line_x4_t4_t1

0xb095,	// (0x0006e796) list_medium_line_x4_t4_t2

0xb095,	// (0x0006e796) list_medium_line_x4_t4_t3

0xb095,	// (0x0006e796) list_medium_line_x4_t4_t4

0x0003,

0xf283,	// (0x00072984) list_medium_line_x4_t4_t

0x7d80,	// (0x0006b481) tport_appsw_pane_ParamLimits

0x7d80,	// (0x0006b481) tport_appsw_pane

0x7d98,	// (0x0006b499) tport_contact_pane_ParamLimits

0x7d98,	// (0x0006b499) tport_contact_pane

0x7db0,	// (0x0006b4b1) tport_listscroll_pane_ParamLimits

0x7db0,	// (0x0006b4b1) tport_listscroll_pane

0x7dca,	// (0x0006b4cb) cell_tport_appsw_pane_ParamLimits

0x7dca,	// (0x0006b4cb) cell_tport_appsw_pane

0xb6c0,	// (0x0006edc1) tport_appsw_pane_g1_ParamLimits

0xb6c0,	// (0x0006edc1) tport_appsw_pane_g1

0x7e0a,	// (0x0006b50b) tport_contact_pane_g1

0x6caf,	// (0x0006a3b0) tport_contact_pane_t1

0x7e13,	// (0x0006b514) tport_contact_pane_t2

0x0001,

0xfc52,	// (0x00073353) tport_contact_pane_t

0xbdc8,	// (0x0006f4c9) list_tport_pane

0xbdd1,	// (0x0006f4d2) scroll_pane_cp_030

0x7e29,	// (0x0006b52a) cell_tport_appsw_pane_g1

0x7e39,	// (0x0006b53a) cell_tport_appsw_pane_t1

0x7e47,	// (0x0006b548) grid_highlight_pane_cp019

0x7e4f,	// (0x0006b550) list_tport_double_graphic_pane_ParamLimits

0x7e4f,	// (0x0006b550) list_tport_double_graphic_pane

0xa7ac,	// (0x0006dead) list_highlight_pane_cp023_ParamLimits

0xa7ac,	// (0x0006dead) list_highlight_pane_cp023

0x7e5c,	// (0x0006b55d) list_tport_double_graphic_pane_g1_ParamLimits

0x7e5c,	// (0x0006b55d) list_tport_double_graphic_pane_g1

0x7e69,	// (0x0006b56a) list_tport_double_graphic_pane_t1_ParamLimits

0x7e69,	// (0x0006b56a) list_tport_double_graphic_pane_t1

0x7e7e,	// (0x0006b57f) list_tport_double_graphic_pane_t2_ParamLimits

0x7e7e,	// (0x0006b57f) list_tport_double_graphic_pane_t2

0x0001,

0xfc5e,	// (0x0007335f) list_tport_double_graphic_pane_t_ParamLimits

0xfc5e,	// (0x0007335f) list_tport_double_graphic_pane_t

0xa08d,	// (0x0006d78e) main_cale_note_pane

0x4f51,	// (0x00068652) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x4f51,	// (0x00068652) cell_vitu2_function_top_wide_pane_cp01

0x7045,	// (0x0006a746) wait_bar_pane_cp05_ParamLimits

0xa7ac,	// (0x0006dead) listscroll_cmail_pane

0xbde2,	// (0x0006f4e3) list_cmail_pane

0x7e90,	// (0x0006b591) list_cmail_body_pane

0x7ea5,	// (0x0006b5a6) list_single_cmail_header_caption_pane

0x7ebb,	// (0x0006b5bc) list_single_cmail_header_detail_pane_ParamLimits

0x7ebb,	// (0x0006b5bc) list_single_cmail_header_detail_pane

0xbdf9,	// (0x0006f4fa) list_single_cmail_header_caption_pane_t1

0x7ee8,	// (0x0006b5e9) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7ee8,	// (0x0006b5e9) list_single_cmail_header_detail_pane_g1

0x7f00,	// (0x0006b601) list_single_cmail_header_detail_pane_g2_ParamLimits

0x7f00,	// (0x0006b601) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc63,	// (0x00073364) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc63,	// (0x00073364) list_single_cmail_header_detail_pane_g

0x7f0c,	// (0x0006b60d) list_single_cmail_header_detail_pane_t1_ParamLimits

0x7f0c,	// (0x0006b60d) list_single_cmail_header_detail_pane_t1

0x7f6e,	// (0x0006b66f) list_single_cmail_header_editor_pane_bg_ParamLimits

0x7f6e,	// (0x0006b66f) list_single_cmail_header_editor_pane_bg

0x6eb1,	// (0x0006a5b2) list_cmail_body_pane_g1

0xbe1d,	// (0x0006f51e) list_cmail_body_pane_t1

0xea8c,	// (0x0007218d) list_single_cmail_header_editor_pane_bg_g1

0xad3d,	// (0x0006e43e) list_single_cmail_header_editor_pane_bg_g1_copy1

0xea9c,	// (0x0007219d) list_single_cmail_header_editor_pane_bg_g1_copy2

0xea94,	// (0x00072195) list_single_cmail_header_editor_pane_bg_g1_copy3

0xed0a,	// (0x0007240b) list_single_cmail_header_editor_pane_bg_g1_copy4

0xeabc,	// (0x000721bd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xeaac,	// (0x000721ad) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xeab4,	// (0x000721b5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xad1d,	// (0x0006e41e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7f87,	// (0x0006b688) calenote_gesture_pane_ParamLimits

0x7f87,	// (0x0006b688) calenote_gesture_pane

0x7fa7,	// (0x0006b6a8) calenote_window_pane_ParamLimits

0x7fa7,	// (0x0006b6a8) calenote_window_pane

0xbe2b,	// (0x0006f52c) popup_note_window_cp01

0x7fc3,	// (0x0006b6c4) calenote_swipe_1_pane_ParamLimits

0x7fc3,	// (0x0006b6c4) calenote_swipe_1_pane

0x77f3,	// (0x0006aef4) calenote_swipe_2_pane_ParamLimits

0x77f3,	// (0x0006aef4) calenote_swipe_2_pane

0x7738,	// (0x0006ae39) calenote_swipe_1_pane_g1_ParamLimits

0x7738,	// (0x0006ae39) calenote_swipe_1_pane_g1

0x7745,	// (0x0006ae46) calenote_swipe_1_pane_g2_ParamLimits

0x7745,	// (0x0006ae46) calenote_swipe_1_pane_g2

0x0001,

0xfc00,	// (0x00073301) calenote_swipe_1_pane_g_ParamLimits

0xfc00,	// (0x00073301) calenote_swipe_1_pane_g

0xbe3d,	// (0x0006f53e) calenote_swipe_1_pane_t1_ParamLimits

0xbe3d,	// (0x0006f53e) calenote_swipe_1_pane_t1

0x7738,	// (0x0006ae39) calenote_swipe_2_pane_g1_ParamLimits

0x7738,	// (0x0006ae39) calenote_swipe_2_pane_g1

0xbe5c,	// (0x0006f55d) calenote_swipe_2_pane_g2_ParamLimits

0xbe5c,	// (0x0006f55d) calenote_swipe_2_pane_g2

0x0001,

0xfc6f,	// (0x00073370) calenote_swipe_2_pane_g_ParamLimits

0xfc6f,	// (0x00073370) calenote_swipe_2_pane_g

0xbe68,	// (0x0006f569) calenote_swipe_2_pane_t1_ParamLimits

0xbe68,	// (0x0006f569) calenote_swipe_2_pane_t1

0xa08d,	// (0x0006d78e) main_mup_navstr_pane

0x3dc0,	// (0x000674c1) main_mup3_pane_t7_ParamLimits

0x3dc0,	// (0x000674c1) main_mup3_pane_t7

0xb9ce,	// (0x0006f0cf) main_mp4_pane_g6_ParamLimits

0xb9ce,	// (0x0006f0cf) main_mp4_pane_g6

0xbb90,	// (0x0006f291) main_image3_pane_t4_ParamLimits

0xbb90,	// (0x0006f291) main_image3_pane_t4

0x7fd8,	// (0x0006b6d9) popup_navstr_preview_pane_ParamLimits

0x7fd8,	// (0x0006b6d9) popup_navstr_preview_pane

0x7fec,	// (0x0006b6ed) scroll_navstr_pane_ParamLimits

0x7fec,	// (0x0006b6ed) scroll_navstr_pane

0xa08d,	// (0x0006d78e) bg_popup_preview_window_pane_cp04

0xbe8f,	// (0x0006f590) popup_navstr_preview_pane_t1

0x8000,	// (0x0006b701) scroll_navstr_pane_g1_ParamLimits

0x8000,	// (0x0006b701) scroll_navstr_pane_g1

0x8014,	// (0x0006b715) scroll_navstr_pane_t1_ParamLimits

0x8014,	// (0x0006b715) scroll_navstr_pane_t1

0xbe34,	// (0x0006f535) bg_button_pane_cp014

0xbe34,	// (0x0006f535) bg_button_pane_cp030

0x761d,	// (0x0006ad1e) list_double_fisheye_pane_g4_ParamLimits

0x761d,	// (0x0006ad1e) list_double_fisheye_pane_g4

0x7629,	// (0x0006ad2a) list_double_fisheye_pane_g5_ParamLimits

0x7629,	// (0x0006ad2a) list_double_fisheye_pane_g5

0xe1c4,	// (0x000718c5) sp_fs_scroll_pane_cp03

0x795e,	// (0x0006b05f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x796a,	// (0x0006b06b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc1d,	// (0x0007331e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x79aa,	// (0x0006b0ab) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xbdf1,	// (0x0006f4f2) sp_fs_scroll_pane_cp02

0xaa34,	// (0x0006e135) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaa34,	// (0x0006e135) popup_sp_fs_calendar_preview_list_single_pane

0xa08d,	// (0x0006d78e) main_cam6_pano_pane

0xa104,	// (0x0006d805) main_mup3_pane_ParamLimits

0xa08d,	// (0x0006d78e) main_phacti_pane

0x6f18,	// (0x0006a619) bg_button_pane_cp11

0x6f32,	// (0x0006a633) main_mobtv_info_pane_g2_ParamLimits

0x6f32,	// (0x0006a633) main_mobtv_info_pane_g2

0x0001,

0xfb7d,	// (0x0007327e) main_mobtv_info_pane_g_ParamLimits

0xfb7d,	// (0x0007327e) main_mobtv_info_pane_g

0x71b5,	// (0x0006a8b6) sc_clock_pane_t5_ParamLimits

0x71b5,	// (0x0006a8b6) sc_clock_pane_t5

0x73d9,	// (0x0006aada) main_radioblah_pane_g1_ParamLimits

0x741f,	// (0x0006ab20) main_radioblah_pane_t3_ParamLimits

0x741f,	// (0x0006ab20) main_radioblah_pane_t3

0x7437,	// (0x0006ab38) main_radioblah_pane_t4_ParamLimits

0x7437,	// (0x0006ab38) main_radioblah_pane_t4

0x7465,	// (0x0006ab66) main_radioblah_text_pane_ParamLimits

0x7465,	// (0x0006ab66) main_radioblah_text_pane

0x7477,	// (0x0006ab78) main_radioblah_info_pane_g1_ParamLimits

0x754a,	// (0x0006ac4b) main_radioblah_info_pane_t4_ParamLimits

0x754a,	// (0x0006ac4b) main_radioblah_info_pane_t4

0xa7ac,	// (0x0006dead) main_sp_fs_calendar_pane

0x802b,	// (0x0006b72c) main_phacti_pane_g1

0x8033,	// (0x0006b734) phacti_note_pane_ParamLimits

0x8033,	// (0x0006b734) phacti_note_pane

0xbea6,	// (0x0006f5a7) phacti_term_pane_ParamLimits

0xbea6,	// (0x0006f5a7) phacti_term_pane

0xbebb,	// (0x0006f5bc) phacti_note_pane_t1_ParamLimits

0xbebb,	// (0x0006f5bc) phacti_note_pane_t1

0x8047,	// (0x0006b748) phacti_term_pane_g1

0x804f,	// (0x0006b750) phacti_term_pane_t1_ParamLimits

0x804f,	// (0x0006b750) phacti_term_pane_t1

0xbed2,	// (0x0006f5d3) popup_sp_fs_calendar_preview_list_single_pane_g1

0xaad3,	// (0x0006e1d4) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc79,	// (0x0007337a) popup_sp_fs_calendar_preview_list_single_pane_g

0xbeda,	// (0x0006f5db) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xbeda,	// (0x0006f5db) popup_sp_fs_calendar_preview_list_single_pane_t1

0xbef0,	// (0x0006f5f1) aid_popup_sp_fs_bg_corner_pane

0xab2c,	// (0x0006e22d) popup_sp_fs_calendar_preview_bg_pane_g1

0xa08d,	// (0x0006d78e) popup_sp_fs_calendar_preview_bg_pane

0xbef8,	// (0x0006f5f9) popup_sp_fs_calendar_preview_list_pane

0xb6f6,	// (0x0006edf7) bg_main_sp_fs_cale_pane_ParamLimits

0xb6f6,	// (0x0006edf7) bg_main_sp_fs_cale_pane

0x80e3,	// (0x0006b7e4) listscroll_cale_mrui_pane_ParamLimits

0x80e3,	// (0x0006b7e4) listscroll_cale_mrui_pane

0x80f8,	// (0x0006b7f9) listscroll_sp_fs_schedule_track_pane

0x8101,	// (0x0006b802) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x8101,	// (0x0006b802) main_sp_fs_ctrlbar_pane_cp01

0xbf00,	// (0x0006f601) main_sp_fs_ribbon_pane

0x8114,	// (0x0006b815) popup_sp_fs_cale_preview_window

0x8126,	// (0x0006b827) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8126,	// (0x0006b827) list_single_sp_fs_schedule_track_pane

0xa7ac,	// (0x0006dead) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa7ac,	// (0x0006dead) bg_sp_fs_highlight_list_pane_cp03

0x8139,	// (0x0006b83a) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8139,	// (0x0006b83a) list_single_sp_fs_schedule_track_pane_g1

0x8145,	// (0x0006b846) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8145,	// (0x0006b846) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc7e,	// (0x0007337f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc7e,	// (0x0007337f) list_single_sp_fs_schedule_track_pane_g

0x8151,	// (0x0006b852) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8151,	// (0x0006b852) list_single_sp_fs_schedule_track_pane_t1

0x816b,	// (0x0006b86c) sp_fs_schedule_track_pane_ParamLimits

0x816b,	// (0x0006b86c) sp_fs_schedule_track_pane

0xbf08,	// (0x0006f609) sp_fs_schedule_track_pane_g1

0xbf10,	// (0x0006f611) sp_fs_schedule_track_pane_g2

0xbf18,	// (0x0006f619) sp_fs_schedule_track_pane_g3

0xbf20,	// (0x0006f621) sp_fs_schedule_track_pane_g4

0xbf28,	// (0x0006f629) sp_fs_schedule_track_pane_g5

0x0004,

0xfc83,	// (0x00073384) sp_fs_schedule_track_pane_g

0xea8c,	// (0x0007218d) bg_sp_fs_schedule_viewer_highlight_g1

0xad3d,	// (0x0006e43e) bg_sp_fs_schedule_viewer_highlight_g2

0xea94,	// (0x00072195) bg_sp_fs_schedule_viewer_highlight_g3

0xea9c,	// (0x0007219d) bg_sp_fs_schedule_viewer_highlight_g4

0xed0a,	// (0x0007240b) bg_sp_fs_schedule_viewer_highlight_g5

0xeaac,	// (0x000721ad) bg_sp_fs_schedule_viewer_highlight_g6

0xeab4,	// (0x000721b5) bg_sp_fs_schedule_viewer_highlight_g7

0xeabc,	// (0x000721bd) bg_sp_fs_schedule_viewer_highlight_g8

0xad1d,	// (0x0006e41e) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc8e,	// (0x0007338f) bg_sp_fs_schedule_viewer_highlight_g

0xa08d,	// (0x0006d78e) bg_main_sp_fs_ribbon_pane

0x817c,	// (0x0006b87d) main_sp_fs_ribbon_pane_g1

0xbf30,	// (0x0006f631) main_sp_fs_ribbon_pane_t1

0x8185,	// (0x0006b886) main_sp_fs_ribbon_pane_t2

0xbf3f,	// (0x0006f640) main_sp_fs_ribbon_pane_t3

0x0002,

0xfca1,	// (0x000733a2) main_sp_fs_ribbon_pane_t

0xbf4e,	// (0x0006f64f) main_sp_fs_ribbon_scheduler_pane

0xbf56,	// (0x0006f657) bg_main_sp_fs_ribbon_pane_g1

0xbf5f,	// (0x0006f660) bg_main_sp_fs_ribbon_pane_g2

0xbf68,	// (0x0006f669) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfca8,	// (0x000733a9) bg_main_sp_fs_ribbon_pane_g

0xbf70,	// (0x0006f671) main_sp_fs_ribbon_scheduler_pane_g1

0xbf79,	// (0x0006f67a) main_sp_fs_ribbon_scheduler_pane_g2

0xbf82,	// (0x0006f683) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcaf,	// (0x000733b0) main_sp_fs_ribbon_scheduler_pane_g

0xbf8b,	// (0x0006f68c) list_cale_mrui_pane

0x8194,	// (0x0006b895) sp_fs_scroll_pane_cp07_ParamLimits

0x8194,	// (0x0006b895) sp_fs_scroll_pane_cp07

0x81b0,	// (0x0006b8b1) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x81b0,	// (0x0006b8b1) bg_sp_fs_schedule_viewer_highlight

0xbf98,	// (0x0006f699) list_single_sp_fs_schedule_track_pane_cp01

0xbfa0,	// (0x0006f6a1) list_sp_fs_schedule_track_pane

0xbfa8,	// (0x0006f6a9) sp_fs_scroll_pane_cp06_ParamLimits

0xbfa8,	// (0x0006f6a9) sp_fs_scroll_pane_cp06

0xab2c,	// (0x0006e22d) bgmain_sp_fs_calendar_pane_g1

0x81c0,	// (0x0006b8c1) list_single_cale_mrui_pane_ParamLimits

0x81c0,	// (0x0006b8c1) list_single_cale_mrui_pane

0x81e1,	// (0x0006b8e2) list_single_cale_mrui_row_pane_ParamLimits

0x81e1,	// (0x0006b8e2) list_single_cale_mrui_row_pane

0x81ee,	// (0x0006b8ef) list_single_cale_mrui_row_pane_g1_ParamLimits

0x81ee,	// (0x0006b8ef) list_single_cale_mrui_row_pane_g1

0x8226,	// (0x0006b927) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8226,	// (0x0006b927) list_single_cale_mrui_row_pane_t1

0x8238,	// (0x0006b939) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8238,	// (0x0006b939) list_single_cale_mrui_row_pane_t2

0x82a0,	// (0x0006b9a1) list_single_cale_mrui_row_pane_t3_ParamLimits

0x82a0,	// (0x0006b9a1) list_single_cale_mrui_row_pane_t3

0x82cf,	// (0x0006b9d0) list_single_cale_mrui_row_pane_t4_ParamLimits

0x82cf,	// (0x0006b9d0) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcbd,	// (0x000733be) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcbd,	// (0x000733be) list_single_cale_mrui_row_pane_t

0x82fe,	// (0x0006b9ff) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x82fe,	// (0x0006b9ff) list_single_cmail_header_editor_pane_bg_cp01

0x832c,	// (0x0006ba2d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x832c,	// (0x0006ba2d) list_single_cmail_header_editor_pane_bg_cp02

0x834c,	// (0x0006ba4d) main_radioblah_text_pane_t1_ParamLimits

0x834c,	// (0x0006ba4d) main_radioblah_text_pane_t1

0xbfc7,	// (0x0006f6c8) cam6_indi_pane_cp01

0xbfcf,	// (0x0006f6d0) cam6_mode_pane_cp01

0xbfd7,	// (0x0006f6d8) cam6_pano_pane

0xbfe0,	// (0x0006f6e1) cam6_zoom_pane_cp01

0xbfe8,	// (0x0006f6e9) cam6_pano_image_pane

0xbff3,	// (0x0006f6f4) cam6_pano_pane_g1

0x6eb1,	// (0x0006a5b2) cam6_pano_pane_g2

0xbffc,	// (0x0006f6fd) cam6_pano_pane_g3

0xc005,	// (0x0006f706) cam6_pano_pane_g4

0xe73d,	// (0x00071e3e) cam6_pano_pane_g5

0xc00e,	// (0x0006f70f) cam6_pano_pane_g6

0x8366,	// (0x0006ba67) cam6_pano_pane_g7

0xc018,	// (0x0006f719) cam6_pano_pane_g8

0xc021,	// (0x0006f722) cam6_pano_pane_g9

0x0008,

0xfcc6,	// (0x000733c7) cam6_pano_pane_g

0xa08d,	// (0x0006d78e) main_browser_tag_pane

0xbe87,	// (0x0006f588) grid_navstr_albumart_pane

0xc02c,	// (0x0006f72d) cell_navstr_albumart_pane_ParamLimits

0xc02c,	// (0x0006f72d) cell_navstr_albumart_pane

0xc04c,	// (0x0006f74d) cell_navstr_albumart_pane_g1

0xdbf1,	// (0x000712f2) cell_navstr_albumart_pane_g2

0xdc01,	// (0x00071302) cell_navstr_albumart_pane_g3

0xdbf9,	// (0x000712fa) cell_navstr_albumart_pane_g4

0x0003,

0xfcd9,	// (0x000733da) cell_navstr_albumart_pane_g

0x836e,	// (0x0006ba6f) bt_list_pane_ParamLimits

0x836e,	// (0x0006ba6f) bt_list_pane

0x8382,	// (0x0006ba83) bt_list_pane_t1

0x8391,	// (0x0006ba92) bt_list_pane_t2

0x0001,

0xfce2,	// (0x000733e3) bt_list_pane_t

0xa08d,	// (0x0006d78e) main_cale_prevew_pane

0x83a0,	// (0x0006baa1) popup_cale_preview_window_ParamLimits

0x83a0,	// (0x0006baa1) popup_cale_preview_window

0xa7ac,	// (0x0006dead) bg_popup_preview_window_pane_cp05_ParamLimits

0xa7ac,	// (0x0006dead) bg_popup_preview_window_pane_cp05

0xc054,	// (0x0006f755) list_cale_preview_pane_ParamLimits

0xc054,	// (0x0006f755) list_cale_preview_pane

0x83bb,	// (0x0006babc) list_double_cale_preview_pane_ParamLimits

0x83bb,	// (0x0006babc) list_double_cale_preview_pane

0x83cd,	// (0x0006bace) list_single_cale_preview_pane_ParamLimits

0x83cd,	// (0x0006bace) list_single_cale_preview_pane

0x83e3,	// (0x0006bae4) list_single_cale_preview_pane_g1

0x83eb,	// (0x0006baec) list_single_cale_preview_pane_t1_ParamLimits

0x83eb,	// (0x0006baec) list_single_cale_preview_pane_t1

0x8400,	// (0x0006bb01) list_double_cale_preview_pane_g1

0x8408,	// (0x0006bb09) list_double_cale_preview_pane_t1_ParamLimits

0x8408,	// (0x0006bb09) list_double_cale_preview_pane_t1

0x841d,	// (0x0006bb1e) list_double_cale_preview_pane_t2_ParamLimits

0x841d,	// (0x0006bb1e) list_double_cale_preview_pane_t2

0x0001,

0xfce7,	// (0x000733e8) list_double_cale_preview_pane_t_ParamLimits

0xfce7,	// (0x000733e8) list_double_cale_preview_pane_t

0xa08d,	// (0x0006d78e) main_ezdial_pane

0xa7ac,	// (0x0006dead) main_sp_fs_email_pane_ParamLimits

0x78ca,	// (0x0006afcb) cmail_ddmenu_btn01_pane_ParamLimits

0x78ca,	// (0x0006afcb) cmail_ddmenu_btn01_pane

0x78dd,	// (0x0006afde) cmail_ddmenu_btn02_pane_ParamLimits

0x78dd,	// (0x0006afde) cmail_ddmenu_btn02_pane

0x7938,	// (0x0006b039) cmail_ddmenu_btn03_pane_ParamLimits

0x7938,	// (0x0006b039) cmail_ddmenu_btn03_pane

0x79e9,	// (0x0006b0ea) main_sp_fs_ctrlbar_pane_ParamLimits

0x7a28,	// (0x0006b129) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7e90,	// (0x0006b591) list_cmail_body_pane_ParamLimits

0xbe07,	// (0x0006f508) bg_button_pane_cp12

0xbe10,	// (0x0006f511) list_single_cmail_header_detail_pane_g3_ParamLimits

0xbe10,	// (0x0006f511) list_single_cmail_header_detail_pane_g3

0x7f4a,	// (0x0006b64b) list_single_cmail_header_detail_pane_t2_ParamLimits

0x7f4a,	// (0x0006b64b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc6a,	// (0x0007336b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc6a,	// (0x0007336b) list_single_cmail_header_detail_pane_t

0x8064,	// (0x0006b765) phacti_term_pane_t2_ParamLimits

0x8064,	// (0x0006b765) phacti_term_pane_t2

0x0001,

0xfc74,	// (0x00073375) phacti_term_pane_t_ParamLimits

0xfc74,	// (0x00073375) phacti_term_pane_t

0xc060,	// (0x0006f761) aid_size_list_single_double

0x8435,	// (0x0006bb36) popup_ezdial_listscroll_window

0x8451,	// (0x0006bb52) popup_number_entry_window_cp01

0xaaec,	// (0x0006e1ed) bg_popup_call_pane_cp09

0xc06c,	// (0x0006f76d) ezdial_list_pane

0xc074,	// (0x0006f775) scroll_pane_cp23

0xb6f6,	// (0x0006edf7) bg_button_pane_cp028_ParamLimits

0xb6f6,	// (0x0006edf7) bg_button_pane_cp028

0x845f,	// (0x0006bb60) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x845f,	// (0x0006bb60) cmail_ddmenu_btn01_pane_g1

0x846b,	// (0x0006bb6c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x846b,	// (0x0006bb6c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcec,	// (0x000733ed) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcec,	// (0x000733ed) cmail_ddmenu_btn01_pane_g

0xc07c,	// (0x0006f77d) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xc07c,	// (0x0006f77d) cmail_ddmenu_btn01_pane_t1

0xb6f6,	// (0x0006edf7) bg_button_pane_cp029_ParamLimits

0xb6f6,	// (0x0006edf7) bg_button_pane_cp029

0x847f,	// (0x0006bb80) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x847f,	// (0x0006bb80) cmail_ddmenu_btn02_pane_g1

0x8497,	// (0x0006bb98) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8497,	// (0x0006bb98) cmail_ddmenu_btn02_pane_t1

0xa7ac,	// (0x0006dead) bg_button_pane_cp031_ParamLimits

0xa7ac,	// (0x0006dead) bg_button_pane_cp031

0x847f,	// (0x0006bb80) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x847f,	// (0x0006bb80) cmail_ddmenu_btn03_pane_g1

0x8497,	// (0x0006bb98) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8497,	// (0x0006bb98) cmail_ddmenu_btn03_pane_t1

0x471b,	// (0x00067e1c) cell_dialer2_keypad_pane_t1_ParamLimits

0x4735,	// (0x00067e36) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x4735,	// (0x00067e36) cell_dialer2_keypad_pane_t1_copy1

0x6ac1,	// (0x0006a1c2) ncimui_group_button_pane

0xa7ac,	// (0x0006dead) main_sp_fs_calendar_pane_ParamLimits

0x7ea5,	// (0x0006b5a6) list_single_cmail_header_caption_pane_ParamLimits

0x8097,	// (0x0006b798) aid_recal_txt_sm_pane

0xa08d,	// (0x0006d78e) mian_recal_day_pane

0x8114,	// (0x0006b815) popup_sp_fs_cale_preview_window_ParamLimits

0xc092,	// (0x0006f793) list_recal_day_pane

0x84d6,	// (0x0006bbd7) list_single_recal_day_pane_ParamLimits

0x84d6,	// (0x0006bbd7) list_single_recal_day_pane

0xc0b9,	// (0x0006f7ba) list_single_recal_day_pane_g1_ParamLimits

0xc0b9,	// (0x0006f7ba) list_single_recal_day_pane_g1

0x84e8,	// (0x0006bbe9) list_single_recal_day_pane_g2_ParamLimits

0x84e8,	// (0x0006bbe9) list_single_recal_day_pane_g2

0x84f4,	// (0x0006bbf5) list_single_recal_day_pane_g3_ParamLimits

0x84f4,	// (0x0006bbf5) list_single_recal_day_pane_g3

0x8500,	// (0x0006bc01) list_single_recal_day_pane_g4_ParamLimits

0x8500,	// (0x0006bc01) list_single_recal_day_pane_g4

0x850e,	// (0x0006bc0f) list_single_recal_day_pane_g5_ParamLimits

0x850e,	// (0x0006bc0f) list_single_recal_day_pane_g5

0x8524,	// (0x0006bc25) list_single_recal_day_pane_g6_ParamLimits

0x8524,	// (0x0006bc25) list_single_recal_day_pane_g6

0x0004,

0xfcfb,	// (0x000733fc) list_single_recal_day_pane_g_ParamLimits

0xfcfb,	// (0x000733fc) list_single_recal_day_pane_g

0x8538,	// (0x0006bc39) list_single_recal_day_pane_t1

0x854a,	// (0x0006bc4b) list_single_recal_day_pane_t2

0x0001,

0xfd06,	// (0x00073407) list_single_recal_day_pane_t

0x855c,	// (0x0006bc5d) ncimui_query_button_pane_ParamLimits

0x855c,	// (0x0006bc5d) ncimui_query_button_pane

0x856c,	// (0x0006bc6d) ncimui_query_button_pane_t1_ParamLimits

0x856c,	// (0x0006bc6d) ncimui_query_button_pane_t1

0xc0c5,	// (0x0006f7c6) ncimui_query_button_pane_t2_ParamLimits

0xc0c5,	// (0x0006f7c6) ncimui_query_button_pane_t2

0x0001,

0xfd0b,	// (0x0007340c) ncimui_query_button_pane_t_ParamLimits

0xfd0b,	// (0x0007340c) ncimui_query_button_pane_t

0x857f,	// (0x0006bc80) query_button_pane_ParamLimits

0x857f,	// (0x0006bc80) query_button_pane

0xa08d,	// (0x0006d78e) bg_button_pane_cp0028

0xc0d8,	// (0x0006f7d9) query_button_pane_t1

0x3179,	// (0x0006687a) main_tport_pane_ParamLimits

0x7d3d,	// (0x0006b43e) bg_popup_window_pane_cp01_ParamLimits

0x7d3d,	// (0x0006b43e) bg_popup_window_pane_cp01

0x7d58,	// (0x0006b459) heading_pane_cp08_ParamLimits

0x7d58,	// (0x0006b459) heading_pane_cp08

0x7d6b,	// (0x0006b46c) heading_pane_cp07_ParamLimits

0x7d6b,	// (0x0006b46c) heading_pane_cp07

0x7e29,	// (0x0006b52a) cell_tport_appsw_pane_g2

0x0002,

0xfc57,	// (0x00073358) cell_tport_appsw_pane_g

0xe1d0,	// (0x000718d1) input_candi_list_open_g1

0xaf36,	// (0x0006e637) list_cale_time_pane_g6_ParamLimits

0xaf36,	// (0x0006e637) list_cale_time_pane_g6

0x37a4,	// (0x00066ea5) aid_size_touch_calib_1_ParamLimits

0x37a4,	// (0x00066ea5) aid_size_touch_calib_1

0x37b6,	// (0x00066eb7) aid_size_touch_calib_2_ParamLimits

0x37b6,	// (0x00066eb7) aid_size_touch_calib_2

0x37ce,	// (0x00066ecf) aid_size_touch_calib_3_ParamLimits

0x37ce,	// (0x00066ecf) aid_size_touch_calib_3

0x37ec,	// (0x00066eed) aid_size_touch_calib_4_ParamLimits

0x37ec,	// (0x00066eed) aid_size_touch_calib_4

0x3804,	// (0x00066f05) main_touch_calib_button_group_pane_ParamLimits

0x3804,	// (0x00066f05) main_touch_calib_button_group_pane

0x381c,	// (0x00066f1d) main_touch_calib_pane_g1_ParamLimits

0x382e,	// (0x00066f2f) main_touch_calib_pane_g2_ParamLimits

0x3840,	// (0x00066f41) main_touch_calib_pane_g3_ParamLimits

0x3852,	// (0x00066f53) main_touch_calib_pane_g4_ParamLimits

0xf699,	// (0x00072d9a) main_touch_calib_pane_g_ParamLimits

0x3864,	// (0x00066f65) main_touch_calib_pane_t1_ParamLimits

0x387e,	// (0x00066f7f) main_touch_calib_pane_t2_ParamLimits

0x3898,	// (0x00066f99) main_touch_calib_pane_t3_ParamLimits

0x38ac,	// (0x00066fad) main_touch_calib_pane_t4_ParamLimits

0x38c0,	// (0x00066fc1) main_touch_calib_pane_t5_ParamLimits

0xf6a2,	// (0x00072da3) main_touch_calib_pane_t_ParamLimits

0xe500,	// (0x00071c01) list_single_fp_cale_pane_g3_ParamLimits

0xe500,	// (0x00071c01) list_single_fp_cale_pane_g3

0xa104,	// (0x0006d805) bg_button_pane_cp012_ParamLimits

0xa104,	// (0x0006d805) bg_vkb2_func_pane_cp03_ParamLimits

0x572a,	// (0x00068e2b) cell_vitu2_function_top_pane_g1_ParamLimits

0xa104,	// (0x0006d805) bg_vkb2_func_pane_cp04_ParamLimits

0x6a4c,	// (0x0006a14d) main_ncimui_button_group_pane_ParamLimits

0x6a4c,	// (0x0006a14d) main_ncimui_button_group_pane

0x6aac,	// (0x0006a1ad) main_ncimui_pane_t3_ParamLimits

0x6aac,	// (0x0006a1ad) main_ncimui_pane_t3

0xbe9d,	// (0x0006f59e) phacti_button_group_pane

0xc060,	// (0x0006f761) aid_size_list_single_double_ParamLimits

0x8435,	// (0x0006bb36) popup_ezdial_listscroll_window_ParamLimits

0x8451,	// (0x0006bb52) popup_number_entry_window_cp01_ParamLimits

0x8592,	// (0x0006bc93) phacti_button_pane_ParamLimits

0x8592,	// (0x0006bc93) phacti_button_pane

0xa08d,	// (0x0006d78e) bg_button_pane_cp14

0xc0e6,	// (0x0006f7e7) phacti_button_pane_t1

0x85a3,	// (0x0006bca4) main_touch_calib_button_pane_ParamLimits

0x85a3,	// (0x0006bca4) main_touch_calib_button_pane

0xa8a7,	// (0x0006dfa8) bg_button_pane_cp18_ParamLimits

0xa8a7,	// (0x0006dfa8) bg_button_pane_cp18

0xc0f4,	// (0x0006f7f5) main_touch_calib_button_pane_t1_ParamLimits

0xc0f4,	// (0x0006f7f5) main_touch_calib_button_pane_t1

0xc10a,	// (0x0006f80b) main_touch_calib_button_pane_t2_ParamLimits

0xc10a,	// (0x0006f80b) main_touch_calib_button_pane_t2

0x0001,

0xfd10,	// (0x00073411) main_touch_calib_button_pane_t_ParamLimits

0xfd10,	// (0x00073411) main_touch_calib_button_pane_t

0xa08d,	// (0x0006d78e) cell_ncimui_button_pane

0xa08d,	// (0x0006d78e) bg_button_pane_cp032

0xc128,	// (0x0006f829) cell_ncimui_button_pane_t1

0xbb70,	// (0x0006f271) image3_infobar_pane_ParamLimits

0xbb70,	// (0x0006f271) image3_infobar_pane

0x71e1,	// (0x0006a8e2) fs_bigclock_status_pane_ParamLimits

0x71e1,	// (0x0006a8e2) fs_bigclock_status_pane

0x71ee,	// (0x0006a8ef) main_fs_bigclock_clock_pane_ParamLimits

0x71ee,	// (0x0006a8ef) main_fs_bigclock_clock_pane

0x720c,	// (0x0006a90d) main_fs_bigclock_indi_pane_ParamLimits

0x720c,	// (0x0006a90d) main_fs_bigclock_indi_pane

0x723e,	// (0x0006a93f) main_fs_bigclock_swipe_pane_ParamLimits

0x723e,	// (0x0006a93f) main_fs_bigclock_swipe_pane

0xa08d,	// (0x0006d78e) main_fs_clock_dumped_data

0x727d,	// (0x0006a97e) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x727d,	// (0x0006a97e) list_single_fs_bigclock_indicator_pane_g1

0x7298,	// (0x0006a999) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x7298,	// (0x0006a999) list_single_fs_bigclock_indicator_pane_g2

0x72b2,	// (0x0006a9b3) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x72b2,	// (0x0006a9b3) list_single_fs_bigclock_indicator_pane_g3

0x72cc,	// (0x0006a9cd) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x72cc,	// (0x0006a9cd) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbb1,	// (0x000732b2) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbb1,	// (0x000732b2) list_single_fs_bigclock_indicator_pane_g

0x72f7,	// (0x0006a9f8) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x72f7,	// (0x0006a9f8) list_single_fs_bigclock_indicator_pane_t1

0x731f,	// (0x0006aa20) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x731f,	// (0x0006aa20) list_single_fs_bigclock_indicator_pane_t2

0x7347,	// (0x0006aa48) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x7347,	// (0x0006aa48) list_single_fs_bigclock_indicator_pane_t3

0x736f,	// (0x0006aa70) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x736f,	// (0x0006aa70) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbbc,	// (0x000732bd) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbbc,	// (0x000732bd) list_single_fs_bigclock_indicator_pane_t

0xc136,	// (0x0006f837) image3_infobar_fav_pane_ParamLimits

0xc136,	// (0x0006f837) image3_infobar_fav_pane

0xc146,	// (0x0006f847) image3_infobar_loc_pane_ParamLimits

0xc146,	// (0x0006f847) image3_infobar_loc_pane

0xc15a,	// (0x0006f85b) image3_infobar_time_pane_ParamLimits

0xc15a,	// (0x0006f85b) image3_infobar_time_pane

0xab2c,	// (0x0006e22d) image3_infobar_time_pane_g1

0xc16a,	// (0x0006f86b) image3_infobar_time_pane_t1

0xab2c,	// (0x0006e22d) image3_infobar_loc_pane_g1

0xc178,	// (0x0006f879) image3_infobar_loc_pane_g2

0x0001,

0xfd15,	// (0x00073416) image3_infobar_loc_pane_g

0xc180,	// (0x0006f881) image3_infobar_loc_pane_t1

0xab2c,	// (0x0006e22d) image3_infobar_fav_pane_g1

0xc18e,	// (0x0006f88f) image3_infobar_fav_pane_g2

0x0001,

0xfd1a,	// (0x0007341b) image3_infobar_fav_pane_g

0xc196,	// (0x0006f897) fs_bigclock_status_battery_pane

0xc19f,	// (0x0006f8a0) fs_bigclock_status_signal_pane

0xc1a8,	// (0x0006f8a9) fs_bigclock_status_title_pane

0xc1b1,	// (0x0006f8b2) fs_bigclock_status_signal_pane_g1

0xc1ba,	// (0x0006f8bb) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd1f,	// (0x00073420) fs_bigclock_status_signal_pane_g

0xc1c2,	// (0x0006f8c3) fs_bigclock_status_battery_pane_g1

0xc1cb,	// (0x0006f8cc) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd24,	// (0x00073425) fs_bigclock_status_battery_pane_g

0xc1d3,	// (0x0006f8d4) fs_bigclock_status_title_pane_t1

0x85b8,	// (0x0006bcb9) main_fs_bigclock_clock_pane_g1

0x85b8,	// (0x0006bcb9) main_fs_bigclock_clock_pane_g2

0x85c9,	// (0x0006bcca) main_fs_bigclock_clock_pane_g3

0x85c9,	// (0x0006bcca) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd29,	// (0x0007342a) main_fs_bigclock_clock_pane_g

0x85dc,	// (0x0006bcdd) main_fs_bigclock_clock_pane_t1

0x85f2,	// (0x0006bcf3) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd32,	// (0x00073433) main_fs_bigclock_clock_pane_t

0xc1e1,	// (0x0006f8e2) list_single_fs_bigclock_indicator_pane_ParamLimits

0xc1e1,	// (0x0006f8e2) list_single_fs_bigclock_indicator_pane

0xc1f2,	// (0x0006f8f3) list_single_fs_bigclock_pane_ParamLimits

0xc1f2,	// (0x0006f8f3) list_single_fs_bigclock_pane

0xc218,	// (0x0006f919) main_fs_bigclock_indicator_pane_t1

0xc227,	// (0x0006f928) list_single_fs_bigclock_pane_g1

0xc22f,	// (0x0006f930) list_single_fs_bigclock_pane_t1

0xab2c,	// (0x0006e22d) main_fs_bigclock_swipe_pane_g1

0xc272,	// (0x0006f973) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd43,	// (0x00073444) main_fs_bigclock_swipe_pane_g

0xc27a,	// (0x0006f97b) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xc27a,	// (0x0006f97b) main_fs_bigclock_swipe_pane_t1

0x2240,	// (0x00065941) call_type_pane_ParamLimits

0xa08d,	// (0x0006d78e) main_btmg_pane

0x821a,	// (0x0006b91b) list_single_cale_mrui_row_pane_g2_ParamLimits

0x821a,	// (0x0006b91b) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcb6,	// (0x000733b7) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcb6,	// (0x000733b7) list_single_cale_mrui_row_pane_g

0x84c5,	// (0x0006bbc6) list_recal_vselct_arw_lo_pane

0xc0b1,	// (0x0006f7b2) list_recal_vselct_arw_up_pane

0x84cd,	// (0x0006bbce) list_recal_vselct_pane

0x864c,	// (0x0006bd4d) btmg_button_pane

0x8656,	// (0x0006bd57) main_btmg_pane_g1

0xa08d,	// (0x0006d78e) bg_button_pane_cp044

0xc297,	// (0x0006f998) btmg_button_pane_t1

0xdd41,	// (0x00071442) aid_listscroll_gen

0xa7ac,	// (0x0006dead) main_cntbar_detail_pane

0xbdda,	// (0x0006f4db) list_cmail_folder_pane

0xe1c4,	// (0x000718c5) sp_fs_scroll_pane_cp03_ParamLimits

0x8660,	// (0x0006bd61) list_single_fs_dyc_pane_cp01_ParamLimits

0x8660,	// (0x0006bd61) list_single_fs_dyc_pane_cp01

0xc2a5,	// (0x0006f9a6) aid_size_cmail_indent

0x8677,	// (0x0006bd78) list_single_dyc_row_pane_cp01

0x86ac,	// (0x0006bdad) cntbar_detail_list_pane_ParamLimits

0x86ac,	// (0x0006bdad) cntbar_detail_list_pane

0x86f8,	// (0x0006bdf9) main_cntbar_detail_cont_pane_ParamLimits

0x86f8,	// (0x0006bdf9) main_cntbar_detail_cont_pane

0xe1c4,	// (0x000718c5) scroll_pane_cp032_ParamLimits

0xe1c4,	// (0x000718c5) scroll_pane_cp032

0x870c,	// (0x0006be0d) cntbar_detail_list_event_pane_ParamLimits

0x870c,	// (0x0006be0d) cntbar_detail_list_event_pane

0x86bc,	// (0x0006bdbd) cntbar_detail_list_shct_pane

0xad8b,	// (0x0006e48c) aid_list_gen

0xc2ae,	// (0x0006f9af) aid_scroll

0xc2b7,	// (0x0006f9b8) aid_size_touch_scroll_bar

0x75e8,	// (0x0006ace9) aid_list_double

0x871c,	// (0x0006be1d) aid_list_single

0xc2c0,	// (0x0006f9c1) aid_list_single_lg

0x8725,	// (0x0006be26) aid_list_z_g_a_sm

0x872d,	// (0x0006be2e) aid_list_z_g_d

0x8735,	// (0x0006be36) aid_txt_z_prm

0x8743,	// (0x0006be44) aid_txt_z_prm_cp01

0x8751,	// (0x0006be52) aid_txt_z_sec

0x875f,	// (0x0006be60) main_cntbar_detail_cont_pane_g1_ParamLimits

0x875f,	// (0x0006be60) main_cntbar_detail_cont_pane_g1

0x8773,	// (0x0006be74) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8773,	// (0x0006be74) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd48,	// (0x00073449) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd48,	// (0x00073449) main_cntbar_detail_cont_pane_g

0xc2c9,	// (0x0006f9ca) main_cntbar_detail_cont_pane_t1

0xc2d7,	// (0x0006f9d8) main_cntbar_detail_cont_pane_t2

0xc2e5,	// (0x0006f9e6) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd4d,	// (0x0007344e) main_cntbar_detail_cont_pane_t

0x8783,	// (0x0006be84) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8783,	// (0x0006be84) cell_cntbar_detail_list_shct_pane

0xc2f3,	// (0x0006f9f4) cntbar_detail_list_shct_pane_g1

0xc2fc,	// (0x0006f9fd) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd54,	// (0x00073455) cntbar_detail_list_shct_pane_g

0x8797,	// (0x0006be98) cntbar_detail_list_event_pane_g1_ParamLimits

0x8797,	// (0x0006be98) cntbar_detail_list_event_pane_g1

0x87a3,	// (0x0006bea4) cntbar_detail_list_event_pane_g2_ParamLimits

0x87a3,	// (0x0006bea4) cntbar_detail_list_event_pane_g2

0x0005,

0xfd59,	// (0x0007345a) cntbar_detail_list_event_pane_g_ParamLimits

0xfd59,	// (0x0007345a) cntbar_detail_list_event_pane_g

0x880f,	// (0x0006bf10) cntbar_detail_list_event_pane_t1_ParamLimits

0x880f,	// (0x0006bf10) cntbar_detail_list_event_pane_t1

0x8824,	// (0x0006bf25) cntbar_detail_list_event_pane_t2_ParamLimits

0x8824,	// (0x0006bf25) cntbar_detail_list_event_pane_t2

0x0002,

0xfd66,	// (0x00073467) cntbar_detail_list_event_pane_t_ParamLimits

0xfd66,	// (0x00073467) cntbar_detail_list_event_pane_t

0xab2c,	// (0x0006e22d) cell_cntbar_detail_list_shct_pane_g1

0xb5af,	// (0x0006ecb0) navi_pane_mv_g3

0xa7ac,	// (0x0006dead) main_cntbar_detail_pane_ParamLimits

0xa08d,	// (0x0006d78e) main_notif_wgt_pane

0xb95c,	// (0x0006f05d) aid_tch_main_mp4_pane_g4

0xbb68,	// (0x0006f269) popup_slider_window_cp02

0x84bb,	// (0x0006bbbc) list_recal_day_event_pane

0x8680,	// (0x0006bd81) cntbar_detail_btn_pane_ParamLimits

0x8680,	// (0x0006bd81) cntbar_detail_btn_pane

0x8696,	// (0x0006bd97) cntbar_detail_btn_pane_cp01_ParamLimits

0x8696,	// (0x0006bd97) cntbar_detail_btn_pane_cp01

0x86bc,	// (0x0006bdbd) cntbar_detail_list_shct_pane_ParamLimits

0x86cc,	// (0x0006bdcd) cntbar_detail_pane_g1_ParamLimits

0x86cc,	// (0x0006bdcd) cntbar_detail_pane_g1

0x86dc,	// (0x0006bddd) cntbar_detail_pane_t1_ParamLimits

0x86dc,	// (0x0006bddd) cntbar_detail_pane_t1

0x87af,	// (0x0006beb0) cntbar_detail_list_event_pane_g3_ParamLimits

0x87af,	// (0x0006beb0) cntbar_detail_list_event_pane_g3

0x87c7,	// (0x0006bec8) cntbar_detail_list_event_pane_g4_ParamLimits

0x87c7,	// (0x0006bec8) cntbar_detail_list_event_pane_g4

0x87df,	// (0x0006bee0) cntbar_detail_list_event_pane_g5_ParamLimits

0x87df,	// (0x0006bee0) cntbar_detail_list_event_pane_g5

0x87f7,	// (0x0006bef8) cntbar_detail_list_event_pane_g6_ParamLimits

0x87f7,	// (0x0006bef8) cntbar_detail_list_event_pane_g6

0x8839,	// (0x0006bf3a) cntbar_detail_list_event_pane_t3_ParamLimits

0x8839,	// (0x0006bf3a) cntbar_detail_list_event_pane_t3

0x884b,	// (0x0006bf4c) popup_notif_wgt_window_ParamLimits

0x884b,	// (0x0006bf4c) popup_notif_wgt_window

0x8864,	// (0x0006bf65) popup_submenu_window_cp01_ParamLimits

0x8864,	// (0x0006bf65) popup_submenu_window_cp01

0xaaec,	// (0x0006e1ed) bg_popup_window_pane_cp10

0xc305,	// (0x0006fa06) listscroll_notif_wgt_pane

0xc317,	// (0x0006fa18) list_notif_wgt_window

0xc320,	// (0x0006fa21) scroll_pane_cp033

0x887a,	// (0x0006bf7b) list_notif_wgt_row_pane_ParamLimits

0x887a,	// (0x0006bf7b) list_notif_wgt_row_pane

0xc329,	// (0x0006fa2a) aid_size_list_notif_wgt_del

0xc336,	// (0x0006fa37) list_notif_wgt_row_pane_g1

0xc342,	// (0x0006fa43) list_notif_wgt_row_pane_g2

0xc351,	// (0x0006fa52) list_notif_wgt_row_pane_g3

0x0002,

0xfd6d,	// (0x0007346e) list_notif_wgt_row_pane_g

0xc35e,	// (0x0006fa5f) list_notif_wgt_row_pane_t1

0xc374,	// (0x0006fa75) list_notif_wgt_row_pane_t2

0xc386,	// (0x0006fa87) list_notif_wgt_row_pane_t3

0x0002,

0xfd74,	// (0x00073475) list_notif_wgt_row_pane_t

0xed24,	// (0x00072425) list_recal_day_event_pane_g1

0xc398,	// (0x0006fa99) list_recal_day_event_pane_t1

0xa08d,	// (0x0006d78e) bg_button_pane_cp045

0xc3a7,	// (0x0006faa8) cntbar_detail_btn_pane_t1

0xb6f6,	// (0x0006edf7) main_callh_pane_ParamLimits

0xb6f6,	// (0x0006edf7) main_callh_pane

0xa08d,	// (0x0006d78e) main_coverflow0_pane

0xa08d,	// (0x0006d78e) main_wgtman_pane

0x7256,	// (0x0006a957) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7256,	// (0x0006a957) main_fs_bigclock_unlock_btn_pane

0x7e21,	// (0x0006b522) bg_button_pane_cp16

0x7e31,	// (0x0006b532) cell_tport_appsw_pane_g3

0x888a,	// (0x0006bf8b) cf0_flow_pane_ParamLimits

0x888a,	// (0x0006bf8b) cf0_flow_pane

0xc3b5,	// (0x0006fab6) listscroll_cf0_pane

0xc3c0,	// (0x0006fac1) main_cf0_pane_g1

0x889f,	// (0x0006bfa0) main_cf0_pane_t1_ParamLimits

0x889f,	// (0x0006bfa0) main_cf0_pane_t1

0x88b6,	// (0x0006bfb7) main_cf0_pane_t2_ParamLimits

0x88b6,	// (0x0006bfb7) main_cf0_pane_t2

0x0001,

0xfd80,	// (0x00073481) main_cf0_pane_t_ParamLimits

0xfd80,	// (0x00073481) main_cf0_pane_t

0xc3d2,	// (0x0006fad3) scroll_pane_cp11

0x88cd,	// (0x0006bfce) cf0_flow_pane_g1

0x88d5,	// (0x0006bfd6) cf0_flow_pane_g2

0x0001,

0xfd85,	// (0x00073486) cf0_flow_pane_g

0x88dd,	// (0x0006bfde) cf0_flow_pane_t1

0xa08d,	// (0x0006d78e) main_call6_pane

0xa08d,	// (0x0006d78e) main_calllock_pane

0x88eb,	// (0x0006bfec) call6_btn_grp_pane_ParamLimits

0x88eb,	// (0x0006bfec) call6_btn_grp_pane

0x8905,	// (0x0006c006) call6_pane_g1_ParamLimits

0x8905,	// (0x0006c006) call6_pane_g1

0x891b,	// (0x0006c01c) popup_call6_1st_window_ParamLimits

0x891b,	// (0x0006c01c) popup_call6_1st_window

0x892c,	// (0x0006c02d) popup_call6_2nd_window_ParamLimits

0x892c,	// (0x0006c02d) popup_call6_2nd_window

0x893d,	// (0x0006c03e) cell_call6_btn_pane_ParamLimits

0x893d,	// (0x0006c03e) cell_call6_btn_pane

0xaaec,	// (0x0006e1ed) bg_popup_call2_in_pane_cp03

0xc3dd,	// (0x0006fade) popup_call6_1st_window_g1

0xc3e5,	// (0x0006fae6) popup_call6_1st_window_g2

0xc3ed,	// (0x0006faee) popup_call6_1st_window_g3

0x0002,

0xfd8a,	// (0x0007348b) popup_call6_1st_window_g

0xc3f5,	// (0x0006faf6) popup_call6_1st_window_t1

0xc404,	// (0x0006fb05) popup_call6_1st_window_t2

0xc412,	// (0x0006fb13) popup_call6_1st_window_t3

0x0002,

0xfd91,	// (0x00073492) popup_call6_1st_window_t

0xaaec,	// (0x0006e1ed) bg_popup_call2_in_pane_cp04

0xc420,	// (0x0006fb21) popup_call6_2nd_window_g1

0xc428,	// (0x0006fb29) popup_call6_2nd_window_g2

0xc430,	// (0x0006fb31) popup_call6_2nd_window_g3

0x0002,

0xfd98,	// (0x00073499) popup_call6_2nd_window_g

0xc438,	// (0x0006fb39) popup_call6_2nd_window_t1

0xa112,	// (0x0006d813) bg_button_pane_cp15

0xd686,	// (0x00070d87) cell_call6_btn_pane_g1

0xd68f,	// (0x00070d90) cell_call6_btn_pane_t1

0x8950,	// (0x0006c051) listscroll_wgtman_pane_ParamLimits

0x8950,	// (0x0006c051) listscroll_wgtman_pane

0x8971,	// (0x0006c072) wgtman_btn_pane_ParamLimits

0x8971,	// (0x0006c072) wgtman_btn_pane

0xb3b6,	// (0x0006eab7) aid_scroll_copy1

0xc447,	// (0x0006fb48) list_wgtman_pane

0x89b4,	// (0x0006c0b5) wgtman_btn_pane_g1_ParamLimits

0x89b4,	// (0x0006c0b5) wgtman_btn_pane_g1

0x89e0,	// (0x0006c0e1) wgtman_btn_pane_t1_ParamLimits

0x89e0,	// (0x0006c0e1) wgtman_btn_pane_t1

0xc451,	// (0x0006fb52) wgtman_btn_pane_t2_ParamLimits

0xc451,	// (0x0006fb52) wgtman_btn_pane_t2

0x0001,

0xfd9f,	// (0x000734a0) wgtman_btn_pane_t_ParamLimits

0xfd9f,	// (0x000734a0) wgtman_btn_pane_t

0x8a1d,	// (0x0006c11e) listrow_wgtman_pane_ParamLimits

0x8a1d,	// (0x0006c11e) listrow_wgtman_pane

0x8a2f,	// (0x0006c130) listrow_wgtman_pane_g1

0x8a3c,	// (0x0006c13d) listrow_wgtman_pane_g2

0x0001,

0xfda4,	// (0x000734a5) listrow_wgtman_pane_g

0x8a5a,	// (0x0006c15b) listrow_wgtman_pane_t1

0x8a72,	// (0x0006c173) listrow_wgtman_pane_t2

0x0001,

0xfda9,	// (0x000734aa) listrow_wgtman_pane_t

0x8a98,	// (0x0006c199) wait_bar_pane_cp09

0xc468,	// (0x0006fb69) main_calllock_btn_pane

0xc472,	// (0x0006fb73) main_calllock_pane_g1

0xa08d,	// (0x0006d78e) bg_button_pane_cp17

0xc47a,	// (0x0006fb7b) main_calllock_btn_pane_g1

0xc483,	// (0x0006fb84) main_calllock_btn_pane_t1

0xa08d,	// (0x0006d78e) main_dialer3_pane

0xa08d,	// (0x0006d78e) main_fmrd2_pane

0xab2c,	// (0x0006e22d) main_fs_bigclock_unlock_btn_pane_g1

0x8ab2,	// (0x0006c1b3) main_fs_bigclock_unlock_btn_pane_t1

0x8ac0,	// (0x0006c1c1) area_fmrd2_info_pane_ParamLimits

0x8ac0,	// (0x0006c1c1) area_fmrd2_info_pane

0x8ad1,	// (0x0006c1d2) area_fmrd2_visual_pane_ParamLimits

0x8ad1,	// (0x0006c1d2) area_fmrd2_visual_pane

0x8adf,	// (0x0006c1e0) fmrd2_indi_pane_ParamLimits

0x8adf,	// (0x0006c1e0) fmrd2_indi_pane

0x8aec,	// (0x0006c1ed) area_fmrd2_visual_pane_g1

0x8af4,	// (0x0006c1f5) area_fmrd2_visual_pane_t1

0x8b04,	// (0x0006c205) area_fmrd2_visual_pane_t2

0x8b14,	// (0x0006c215) area_fmrd2_visual_pane_t3

0x0002,

0xfdb3,	// (0x000734b4) area_fmrd2_visual_pane_t

0x8b24,	// (0x0006c225) area_fmrd2_info_pane_g1

0x8b2c,	// (0x0006c22d) area_fmrd2_info_pane_t1

0x8b3c,	// (0x0006c23d) area_fmrd2_info_pane_t2

0x8b4c,	// (0x0006c24d) area_fmrd2_info_pane_t3

0x8b5c,	// (0x0006c25d) area_fmrd2_info_pane_t4

0x0003,

0xfdba,	// (0x000734bb) area_fmrd2_info_pane_t

0x8b6a,	// (0x0006c26b) fmrd2_indi_pane_t1

0x8b7a,	// (0x0006c27b) fmrd2_indi_pane_t2

0x8b8a,	// (0x0006c28b) fmrd2_indi_pane_t3

0x0002,

0xfdc3,	// (0x000734c4) fmrd2_indi_pane_t

0x72db,	// (0x0006a9dc) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x72db,	// (0x0006a9dc) list_single_fs_bigclock_indicator_pane_g5

0x738c,	// (0x0006aa8d) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x738c,	// (0x0006aa8d) list_single_fs_bigclock_indicator_pane_t5

0x8079,	// (0x0006b77a) aid_cell_bcale_month_pane_ParamLimits

0x8079,	// (0x0006b77a) aid_cell_bcale_month_pane

0x80a0,	// (0x0006b7a1) bcale_month_pane_ParamLimits

0x80a0,	// (0x0006b7a1) bcale_month_pane

0x80c4,	// (0x0006b7c5) bcale_preview_pane_ParamLimits

0x80c4,	// (0x0006b7c5) bcale_preview_pane

0xc22f,	// (0x0006f930) list_single_fs_bigclock_pane_t1_ParamLimits

0xc24e,	// (0x0006f94f) list_single_fs_bigclock_pane_t2_ParamLimits

0xc24e,	// (0x0006f94f) list_single_fs_bigclock_pane_t2

0x0001,

0xfd3e,	// (0x0007343f) list_single_fs_bigclock_pane_t_ParamLimits

0xfd3e,	// (0x0007343f) list_single_fs_bigclock_pane_t

0x8aaa,	// (0x0006c1ab) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdae,	// (0x000734af) main_fs_bigclock_unlock_btn_pane_g

0x8b9a,	// (0x0006c29b) aid_dia3_key_size_ParamLimits

0x8b9a,	// (0x0006c29b) aid_dia3_key_size

0x8ba9,	// (0x0006c2aa) aid_dia3_listrow_size_ParamLimits

0x8ba9,	// (0x0006c2aa) aid_dia3_listrow_size

0x8bbe,	// (0x0006c2bf) dia3_keypad_fun_pane_ParamLimits

0x8bbe,	// (0x0006c2bf) dia3_keypad_fun_pane

0x8bda,	// (0x0006c2db) dia3_keypad_num_pane_ParamLimits

0x8bda,	// (0x0006c2db) dia3_keypad_num_pane

0x8bf5,	// (0x0006c2f6) dia3_listscroll_pane_ParamLimits

0x8bf5,	// (0x0006c2f6) dia3_listscroll_pane

0x8c08,	// (0x0006c309) dia3_numentry_pane_ParamLimits

0x8c08,	// (0x0006c309) dia3_numentry_pane

0xc492,	// (0x0006fb93) dia3_list_pane

0xc49d,	// (0x0006fb9e) scroll_pane_cp12

0xa08d,	// (0x0006d78e) bg_dia3_numentry_pane

0x8c20,	// (0x0006c321) dia3_numentry_pane_t1

0x8c2f,	// (0x0006c330) cell_dia3_key_num_pane

0x8c37,	// (0x0006c338) cell_dia3_key0_fun_pane_ParamLimits

0x8c37,	// (0x0006c338) cell_dia3_key0_fun_pane

0x8c4b,	// (0x0006c34c) cell_dia3_key1_fun_pane_ParamLimits

0x8c4b,	// (0x0006c34c) cell_dia3_key1_fun_pane

0x8c63,	// (0x0006c364) dia3_listrow_pane

0x6cca,	// (0x0006a3cb) bg_dia3_numentry_pane_g1

0xa08d,	// (0x0006d78e) bg_button_pane_cp21

0xc4a8,	// (0x0006fba9) cell_dia3_key_num_pane_t1

0xc4b6,	// (0x0006fbb7) cell_dia3_key_num_pane_t2

0xc4c5,	// (0x0006fbc6) cell_dia3_key_num_pane_t3

0xc4d4,	// (0x0006fbd5) cell_dia3_key_num_pane_t4

0x0003,

0xfdca,	// (0x000734cb) cell_dia3_key_num_pane_t

0xa08d,	// (0x0006d78e) bg_button_pane_cp19

0x8c75,	// (0x0006c376) cell_dia3_key0_fun_pane_g1

0xa08d,	// (0x0006d78e) bg_button_pane_cp20

0x8c7d,	// (0x0006c37e) cell_dia3_key1_fun_pane_g1

0x8c85,	// (0x0006c386) area_left_week_number_pane

0x8c91,	// (0x0006c392) area_top_day_name_pane

0x8ca4,	// (0x0006c3a5) frame_month_view_pane

0xc4e3,	// (0x0006fbe4) grid_month_view_pane

0x8cb7,	// (0x0006c3b8) cell_top_day_name_pane_ParamLimits

0x8cb7,	// (0x0006c3b8) cell_top_day_name_pane

0x8ce4,	// (0x0006c3e5) cell_area_left_week_number_pane_ParamLimits

0x8ce4,	// (0x0006c3e5) cell_area_left_week_number_pane

0x8cf8,	// (0x0006c3f9) cell_month_view_pane_ParamLimits

0x8cf8,	// (0x0006c3f9) cell_month_view_pane

0xc4f1,	// (0x0006fbf2) frm_month_g1

0x8d25,	// (0x0006c426) frm_month_g2

0x8d38,	// (0x0006c439) frm_month_g3

0x8d4b,	// (0x0006c44c) frm_month_g4

0x8d5e,	// (0x0006c45f) frm_month_g5

0x8d71,	// (0x0006c472) frm_month_g6

0x8d84,	// (0x0006c485) frm_month_g7

0xc4fe,	// (0x0006fbff) frm_month_g8

0x8d97,	// (0x0006c498) frm_month_g9

0x8da7,	// (0x0006c4a8) frm_month_g10

0x8db7,	// (0x0006c4b8) frm_month_g11

0x8dc7,	// (0x0006c4c8) frm_month_g12

0x8dd9,	// (0x0006c4da) frm_month_g13

0x8deb,	// (0x0006c4ec) frm_month_g14

0x8dff,	// (0x0006c500) frm_month_g15

0x8e13,	// (0x0006c514) frm_month_g16

0x000f,

0xfdd3,	// (0x000734d4) frm_month_g

0xc50b,	// (0x0006fc0c) cell_top_day_name_pane_t1

0x8e27,	// (0x0006c528) cell_area_left_week_number_pane_g1

0x8e33,	// (0x0006c534) cell_area_left_week_number_pane_t1

0xa813,	// (0x0006df14) cell_month_view_pane_g1

0x8e46,	// (0x0006c547) cell_month_view_pane_t1

0xa08d,	// (0x0006d78e) main_fps_pane

0x7900,	// (0x0006b001) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x7900,	// (0x0006b001) cmail_ddmenu_btn02_pane_cp1

0x791c,	// (0x0006b01d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x791c,	// (0x0006b01d) cmail_ddmenu_btn02_pane_cp2

0x848b,	// (0x0006bb8c) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x848b,	// (0x0006bb8c) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcf1,	// (0x000733f2) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcf1,	// (0x000733f2) cmail_ddmenu_btn02_pane_g

0x84a9,	// (0x0006bbaa) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x84a9,	// (0x0006bbaa) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcf6,	// (0x000733f7) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcf6,	// (0x000733f7) cmail_ddmenu_btn02_pane_t

0x8e59,	// (0x0006c55a) fps_text_pane_ParamLimits

0x8e59,	// (0x0006c55a) fps_text_pane

0x8e70,	// (0x0006c571) main_fps_pane_g1_ParamLimits

0x8e70,	// (0x0006c571) main_fps_pane_g1

0x8e8a,	// (0x0006c58b) wait_bar_pane_cp010_ParamLimits

0x8e8a,	// (0x0006c58b) wait_bar_pane_cp010

0x8e9b,	// (0x0006c59c) fps_text_pane_t1_ParamLimits

0x8e9b,	// (0x0006c59c) fps_text_pane_t1

0x4c50,	// (0x00068351) cam4_image_uncrop_pane_g1

0x4c59,	// (0x0006835a) cam4_image_uncrop_pane_g2

0x4c62,	// (0x00068363) cam4_image_uncrop_pane_g3

0x4c6b,	// (0x0006836c) cam4_image_uncrop_pane_g4

0x0003,

0xf835,	// (0x00072f36) cam4_image_uncrop_pane_g

0x8c63,	// (0x0006c364) dia3_listrow_pane_ParamLimits

0xa08d,	// (0x0006d78e) main_phob2_pane

0x7ddb,	// (0x0006b4dc) cell_tport_appsw_pane_cp02_ParamLimits

0x7ddb,	// (0x0006b4dc) cell_tport_appsw_pane_cp02

0x7def,	// (0x0006b4f0) cell_tport_appsw_pane_cp03_ParamLimits

0x7def,	// (0x0006b4f0) cell_tport_appsw_pane_cp03

0xa08d,	// (0x0006d78e) phob2_contact_card_pane

0xa08d,	// (0x0006d78e) phob2_listscroll_pane

0xc51e,	// (0x0006fc1f) phob2_list_pane

0xc526,	// (0x0006fc27) scroll_pane_cp034

0x8eb3,	// (0x0006c5b4) phob2_cc_data_pane_ParamLimits

0x8eb3,	// (0x0006c5b4) phob2_cc_data_pane

0x8ed2,	// (0x0006c5d3) phob2_cc_listscroll_pane_ParamLimits

0x8ed2,	// (0x0006c5d3) phob2_cc_listscroll_pane

0x8a1d,	// (0x0006c11e) list_double_large_graphic_phob2_pane_ParamLimits

0x8a1d,	// (0x0006c11e) list_double_large_graphic_phob2_pane

0x8ef0,	// (0x0006c5f1) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8ef0,	// (0x0006c5f1) list_double_large_graphic_phob2_pane_g1

0x8efd,	// (0x0006c5fe) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x8efd,	// (0x0006c5fe) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdf4,	// (0x000734f5) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdf4,	// (0x000734f5) list_double_large_graphic_phob2_pane_g

0x8f23,	// (0x0006c624) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x8f23,	// (0x0006c624) list_double_large_graphic_phob2_pane_t1

0x8f38,	// (0x0006c639) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x8f38,	// (0x0006c639) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdfd,	// (0x000734fe) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdfd,	// (0x000734fe) list_double_large_graphic_phob2_pane_t

0xa08d,	// (0x0006d78e) list_highlight_pane_cp024

0xc52e,	// (0x0006fc2f) phob2_cc_button_pane

0x8f4d,	// (0x0006c64e) phob2_cc_data_pane_g1_ParamLimits

0x8f4d,	// (0x0006c64e) phob2_cc_data_pane_g1

0x8f64,	// (0x0006c665) phob2_cc_data_pane_g2_ParamLimits

0x8f64,	// (0x0006c665) phob2_cc_data_pane_g2

0x0001,

0xfe02,	// (0x00073503) phob2_cc_data_pane_g_ParamLimits

0xfe02,	// (0x00073503) phob2_cc_data_pane_g

0x8f76,	// (0x0006c677) phob2_cc_data_pane_t1_ParamLimits

0x8f76,	// (0x0006c677) phob2_cc_data_pane_t1

0x8f8e,	// (0x0006c68f) phob2_cc_data_pane_t2_ParamLimits

0x8f8e,	// (0x0006c68f) phob2_cc_data_pane_t2

0x8fa6,	// (0x0006c6a7) phob2_cc_data_pane_t3_ParamLimits

0x8fa6,	// (0x0006c6a7) phob2_cc_data_pane_t3

0x0002,

0xfe07,	// (0x00073508) phob2_cc_data_pane_t_ParamLimits

0xfe07,	// (0x00073508) phob2_cc_data_pane_t

0xc536,	// (0x0006fc37) phob2_cc_list_pane_ParamLimits

0xc536,	// (0x0006fc37) phob2_cc_list_pane

0xedbb,	// (0x000724bc) scroll_pane_cp035_ParamLimits

0xedbb,	// (0x000724bc) scroll_pane_cp035

0xa7ac,	// (0x0006dead) bg_button_pane_cp033

0xc542,	// (0x0006fc43) phob2_cc_button_pane_g1

0xc54e,	// (0x0006fc4f) phob2_cc_button_pane_t1

0xc563,	// (0x0006fc64) phob2_cc_button_pane_t2

0x0001,

0xfe0e,	// (0x0007350f) phob2_cc_button_pane_t

0x8fbe,	// (0x0006c6bf) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8fbe,	// (0x0006c6bf) list_double_large_graphic_phob2_cc_pane

0x8fee,	// (0x0006c6ef) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8fee,	// (0x0006c6ef) list_double_large_graphic_phob2_cc_pane_g1

0x8ffa,	// (0x0006c6fb) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x8ffa,	// (0x0006c6fb) list_double_large_graphic_phob2_cc_pane_g2

0x9006,	// (0x0006c707) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9006,	// (0x0006c707) list_double_large_graphic_phob2_cc_pane_g3

0x9012,	// (0x0006c713) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9012,	// (0x0006c713) list_double_large_graphic_phob2_cc_pane_g4

0x901e,	// (0x0006c71f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x901e,	// (0x0006c71f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe13,	// (0x00073514) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe13,	// (0x00073514) list_double_large_graphic_phob2_cc_pane_g

0x902a,	// (0x0006c72b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x902a,	// (0x0006c72b) list_double_large_graphic_phob2_cc_pane_t1

0x9053,	// (0x0006c754) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9053,	// (0x0006c754) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe1e,	// (0x0007351f) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe1e,	// (0x0007351f) list_double_large_graphic_phob2_cc_pane_t

0xc575,	// (0x0006fc76) list_highlight_pane_cp025_ParamLimits

0xc575,	// (0x0006fc76) list_highlight_pane_cp025

0xa7ac,	// (0x0006dead) bg_button_pane_cp033_ParamLimits

0xc542,	// (0x0006fc43) phob2_cc_button_pane_g1_ParamLimits

0xc54e,	// (0x0006fc4f) phob2_cc_button_pane_t1_ParamLimits

0xc563,	// (0x0006fc64) phob2_cc_button_pane_t2_ParamLimits

0xfe0e,	// (0x0007350f) phob2_cc_button_pane_t_ParamLimits

0x0682,	// (0x00063d83) popup_wgtman_window

0xebb8,	// (0x000722b9) scroll_pane_cp038

0x8996,	// (0x0006c097) wgtman_btn_pane_cp_01_ParamLimits

0x8996,	// (0x0006c097) wgtman_btn_pane_cp_01

0xc583,	// (0x0006fc84) wgtman_content_pane

0xc58c,	// (0x0006fc8d) wgtman_heading_pane

0xa08d,	// (0x0006d78e) bg_heading_pane_cp02

0xc595,	// (0x0006fc96) wgtman_heading_pane_g1

0xc59d,	// (0x0006fc9e) wgtman_heading_pane_t1

0xc5ab,	// (0x0006fcac) scroll_pane_cp036

0xc5b3,	// (0x0006fcb4) wgtman_list_pane

0xc5bb,	// (0x0006fcbc) wgtman_list_pane_t1_ParamLimits

0xc5bb,	// (0x0006fcbc) wgtman_list_pane_t1

0xbbf4,	// (0x0006f2f5) cam4_grid_pane

0x58b7,	// (0x00068fb8) bg_button_pane_cp015_ParamLimits

0x58c8,	// (0x00068fc9) bg_button_pane_cp016_ParamLimits

0x58d4,	// (0x00068fd5) bg_button_pane_cp017_ParamLimits

0x5928,	// (0x00069029) popup_vitu2_query_window_g3_ParamLimits

0x5928,	// (0x00069029) popup_vitu2_query_window_g3

0x59c9,	// (0x000690ca) popup_vitu2_query_window_t6_ParamLimits

0x59c9,	// (0x000690ca) popup_vitu2_query_window_t6

0x59f4,	// (0x000690f5) popup_vitu2_query_window_t7_ParamLimits

0x59f4,	// (0x000690f5) popup_vitu2_query_window_t7

0x4c50,	// (0x00068351) cam4_grid_pane_g1

0x4c59,	// (0x0006835a) cam4_grid_pane_g2

0xc5d5,	// (0x0006fcd6) cam4_grid_pane_g3

0xc5de,	// (0x0006fcdf) cam4_grid_pane_g4

0x0003,

0xfe23,	// (0x00073524) cam4_grid_pane_g

0x122f,	// (0x00064930) aid_placing_vt_slider_lsc_ParamLimits

0x153a,	// (0x00064c3b) vidtel_button_pane_ParamLimits

0x153a,	// (0x00064c3b) vidtel_button_pane

0xa08d,	// (0x0006d78e) bg_button_pane_cp034

0xc5e9,	// (0x0006fcea) vidtel_button_pane_g1

0xc5f1,	// (0x0006fcf2) vidtel_button_pane_t1

0xed02,	// (0x00072403) aid_size_vtel_slider_touch

0xedbb,	// (0x000724bc) scroll_pane_cp039

0x6d39,	// (0x0006a43a) ncim_query_button_pane_cp01_ParamLimits

0x6d58,	// (0x0006a459) ncimui_query_pane_g1_ParamLimits

0xa7ac,	// (0x0006dead) input_focus_pane_cp012_ParamLimits

0x6d7d,	// (0x0006a47e) ncim_query_entry_pane_t1_ParamLimits

0xedbb,	// (0x000724bc) scroll_pane_cp039_ParamLimits

0xb49a,	// (0x0006eb9b) navi_pane_bcale_mc_g1

0xb4a2,	// (0x0006eba3) navi_pane_bcale_mc_t1

0x7a0d,	// (0x0006b10e) main_sp_fs_email_pane_g1

0x7a19,	// (0x0006b11a) main_sp_fs_email_pane_g2

0x0001,

0xfc26,	// (0x00073327) main_sp_fs_email_pane_g

0xbfba,	// (0x0006f6bb) list_single_cale_mrui_row_pane_g3_ParamLimits

0xbfba,	// (0x0006f6bb) list_single_cale_mrui_row_pane_g3

0x851a,	// (0x0006bc1b) list_single_recal_day_pane_g5_event_pane

0x8530,	// (0x0006bc31) list_single_recal_day_pane_g7

0xc607,	// (0x0006fd08) list_recal_day_event_pane_cp01

0xc610,	// (0x0006fd11) list_recal_vselct_arw_lo_pane_cp01

0xc618,	// (0x0006fd19) list_recal_vselct_arw_up_pane_cp01

0xc620,	// (0x0006fd21) list_recal_vselct_pane_cp01

0xed24,	// (0x00072425) list_recal_day_event_pane_cp01_g1

0x907c,	// (0x0006c77d) list_recal_day_event_pane_cp01_t1

0x8538,	// (0x0006bc39) list_single_recal_day_pane_t1_ParamLimits

0x854a,	// (0x0006bc4b) list_single_recal_day_pane_t2_ParamLimits

0xfd06,	// (0x00073407) list_single_recal_day_pane_t_ParamLimits

0xa78a,	// (0x0006de8b) bg_notes_pane_ParamLimits

0xa86b,	// (0x0006df6c) list_notes_pane_ParamLimits

0x0888,	// (0x00063f89) scroll_pane_cp06_ParamLimits

0xa8a7,	// (0x0006dfa8) main_notes_pane_ParamLimits

0xa7ac,	// (0x0006dead) main_welc_pane

0x90b7,	// (0x0006c7b8) main_welc_body_pane_ParamLimits

0x90b7,	// (0x0006c7b8) main_welc_body_pane

0x90d5,	// (0x0006c7d6) main_welc_opti_pane_ParamLimits

0x90d5,	// (0x0006c7d6) main_welc_opti_pane

0x9153,	// (0x0006c854) main_welc_pane_t1_ParamLimits

0x9153,	// (0x0006c854) main_welc_pane_t1

0x934b,	// (0x0006ca4c) main_welc_body_row_pane_ParamLimits

0x934b,	// (0x0006ca4c) main_welc_body_row_pane

0xa805,	// (0x0006df06) main_welc_opti_row_pane_ParamLimits

0xa805,	// (0x0006df06) main_welc_opti_row_pane

0xc63a,	// (0x0006fd3b) main_welc_opti_row_pane_g1

0x935f,	// (0x0006ca60) main_welc_opti_row_pane_t1

0xc642,	// (0x0006fd43) main_welc_body_row_pane_t1

0xc30f,	// (0x0006fa10) popup_notif_wgt_heading_pane

0xc329,	// (0x0006fa2a) aid_size_list_notif_wgt_del_ParamLimits

0xc336,	// (0x0006fa37) list_notif_wgt_row_pane_g1_ParamLimits

0xc342,	// (0x0006fa43) list_notif_wgt_row_pane_g2_ParamLimits

0xc351,	// (0x0006fa52) list_notif_wgt_row_pane_g3_ParamLimits

0xfd6d,	// (0x0007346e) list_notif_wgt_row_pane_g_ParamLimits

0xc35e,	// (0x0006fa5f) list_notif_wgt_row_pane_t1_ParamLimits

0xc374,	// (0x0006fa75) list_notif_wgt_row_pane_t2_ParamLimits

0xc386,	// (0x0006fa87) list_notif_wgt_row_pane_t3_ParamLimits

0xfd74,	// (0x00073475) list_notif_wgt_row_pane_t_ParamLimits

0x8a2f,	// (0x0006c130) listrow_wgtman_pane_g1_ParamLimits

0x8a3c,	// (0x0006c13d) listrow_wgtman_pane_g2_ParamLimits

0xfda4,	// (0x000734a5) listrow_wgtman_pane_g_ParamLimits

0x8a5a,	// (0x0006c15b) listrow_wgtman_pane_t1_ParamLimits

0x8a72,	// (0x0006c173) listrow_wgtman_pane_t2_ParamLimits

0xfda9,	// (0x000734aa) listrow_wgtman_pane_t_ParamLimits

0x8a98,	// (0x0006c199) wait_bar_pane_cp09_ParamLimits

0xa08d,	// (0x0006d78e) bg_popup_heading_pane_cp02

0xc651,	// (0x0006fd52) popup_notif_wgt_heading_pane_g1

0xc659,	// (0x0006fd5a) popup_notif_wgt_heading_pane_t1

0xa08d,	// (0x0006d78e) main_vids_pane

0xa08d,	// (0x0006d78e) vids_listscroll_pane

0x936e,	// (0x0006ca6f) scroll_pane_cp040

0xa08d,	// (0x0006d78e) vids_list_pane

0x9379,	// (0x0006ca7a) vids_list_double_pane_ParamLimits

0x9379,	// (0x0006ca7a) vids_list_double_pane

0x938a,	// (0x0006ca8b) vids_list_double_pane_g1

0x9393,	// (0x0006ca94) vids_list_double_pane_t1

0x93a3,	// (0x0006caa4) vids_list_double_pane_t2

0x0001,

0xfe42,	// (0x00073543) vids_list_double_pane_t

0xa104,	// (0x0006d805) main_ncimui_pane_ParamLimits

0x6a60,	// (0x0006a161) main_ncimui_pane_g1_ParamLimits

0x6a6c,	// (0x0006a16d) main_ncimui_pane_g2_ParamLimits

0x6a6c,	// (0x0006a16d) main_ncimui_pane_g2

0x0001,

0xfb27,	// (0x00073228) main_ncimui_pane_g_ParamLimits

0xfb27,	// (0x00073228) main_ncimui_pane_g

0x90f0,	// (0x0006c7f1) main_welc_pane_g1_ParamLimits

0x90f0,	// (0x0006c7f1) main_welc_pane_g1

0x9105,	// (0x0006c806) main_welc_pane_g2_ParamLimits

0x9105,	// (0x0006c806) main_welc_pane_g2

0x0003,

0xfe2c,	// (0x0007352d) main_welc_pane_g_ParamLimits

0xfe2c,	// (0x0007352d) main_welc_pane_g

0xa78a,	// (0x0006de8b) listscroll_mce_pane_ParamLimits

0xb5ef,	// (0x0006ecf0) wait_bar_pane_cp10

0xdd49,	// (0x0007144a) main_cale_day_pane_ParamLimits

0xdd49,	// (0x0007144a) main_cale_week_pane_ParamLimits

0xa78a,	// (0x0006de8b) main_messa_pane_ParamLimits

0x406b,	// (0x0006776c) main_clock2_btn_pane_ParamLimits

0x406b,	// (0x0006776c) main_clock2_btn_pane

0xe57a,	// (0x00071c7b) main_clock2_btn_pane_cp01_ParamLimits

0xe57a,	// (0x00071c7b) main_clock2_btn_pane_cp01

0xbf8b,	// (0x0006f68c) list_cale_mrui_pane_ParamLimits

0xc3ca,	// (0x0006facb) main_cf0_pane_g2

0x0001,

0xfd7b,	// (0x0007347c) main_cf0_pane_g

0x8c85,	// (0x0006c386) area_left_week_number_pane_ParamLimits

0x8c91,	// (0x0006c392) area_top_day_name_pane_ParamLimits

0x8ca4,	// (0x0006c3a5) frame_month_view_pane_ParamLimits

0xc4e3,	// (0x0006fbe4) grid_month_view_pane_ParamLimits

0xc4f1,	// (0x0006fbf2) frm_month_g1_ParamLimits

0x8d25,	// (0x0006c426) frm_month_g2_ParamLimits

0x8d38,	// (0x0006c439) frm_month_g3_ParamLimits

0x8d4b,	// (0x0006c44c) frm_month_g4_ParamLimits

0x8d5e,	// (0x0006c45f) frm_month_g5_ParamLimits

0x8d71,	// (0x0006c472) frm_month_g6_ParamLimits

0x8d84,	// (0x0006c485) frm_month_g7_ParamLimits

0xc4fe,	// (0x0006fbff) frm_month_g8_ParamLimits

0x8d97,	// (0x0006c498) frm_month_g9_ParamLimits

0x8da7,	// (0x0006c4a8) frm_month_g10_ParamLimits

0x8db7,	// (0x0006c4b8) frm_month_g11_ParamLimits

0x8dc7,	// (0x0006c4c8) frm_month_g12_ParamLimits

0x8dd9,	// (0x0006c4da) frm_month_g13_ParamLimits

0x8deb,	// (0x0006c4ec) frm_month_g14_ParamLimits

0x8dff,	// (0x0006c500) frm_month_g15_ParamLimits

0x8e13,	// (0x0006c514) frm_month_g16_ParamLimits

0xfdd3,	// (0x000734d4) frm_month_g_ParamLimits

0xc50b,	// (0x0006fc0c) cell_top_day_name_pane_t1_ParamLimits

0x8e27,	// (0x0006c528) cell_area_left_week_number_pane_g1_ParamLimits

0x8e33,	// (0x0006c534) cell_area_left_week_number_pane_t1_ParamLimits

0xa813,	// (0x0006df14) cell_month_view_pane_g1_ParamLimits

0x8e46,	// (0x0006c547) cell_month_view_pane_t1_ParamLimits

0xa782,	// (0x0006de83) main_clock2_btn_pane_g1

0xc667,	// (0x0006fd68) main_clock2_btn_pane_t1

0xa7ac,	// (0x0006dead) listscroll_cmail_pane_ParamLimits

0x7a0d,	// (0x0006b10e) main_sp_fs_email_pane_g1_ParamLimits

0x7a19,	// (0x0006b11a) main_sp_fs_email_pane_g2_ParamLimits

0xfc26,	// (0x00073327) main_sp_fs_email_pane_g_ParamLimits

0xc092,	// (0x0006f793) list_recal_day_pane_ParamLimits

0xc0a3,	// (0x0006f7a4) mian_recal_day_pane_t1

0x7be5,	// (0x0006b2e6) list_single_dyc_row_text_pane_t4_ParamLimits

0x7be5,	// (0x0006b2e6) list_single_dyc_row_text_pane_t4

0x7c2e,	// (0x0006b32f) list_single_dyc_row_text_pane_t5_ParamLimits

0x7c2e,	// (0x0006b32f) list_single_dyc_row_text_pane_t5

0x7ca4,	// (0x0006b3a5) list_single_dyc_row_text_pane_t6_ParamLimits

0x7ca4,	// (0x0006b3a5) list_single_dyc_row_text_pane_t6

0xaf15,	// (0x0006e616) aid_mgn_list_cale_time_pane

0xa104,	// (0x0006d805) main_gallery2_pane_ParamLimits

0xe590,	// (0x00071c91) main_clock2_pane_cp01_t1

0xe5a0,	// (0x00071ca1) main_clock2_pane_cp01_t3

0x0001,

0xf70c,	// (0x00072e0d) main_clock2_pane_cp01_t

0x0c25,	// (0x00064326) cale_week_scroll_pane_g16_ParamLimits

0x0c25,	// (0x00064326) cale_week_scroll_pane_g16

0xaaec,	// (0x0006e1ed) vorec_slider_pane

0xc5f1,	// (0x0006fcf2) vidtel_button_pane_t1_ParamLimits

0x85b8,	// (0x0006bcb9) main_fs_bigclock_clock_pane_g1_ParamLimits

0x85b8,	// (0x0006bcb9) main_fs_bigclock_clock_pane_g2_ParamLimits

0x85c9,	// (0x0006bcca) main_fs_bigclock_clock_pane_g3_ParamLimits

0x85c9,	// (0x0006bcca) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd29,	// (0x0007342a) main_fs_bigclock_clock_pane_g_ParamLimits

0x85dc,	// (0x0006bcdd) main_fs_bigclock_clock_pane_t1_ParamLimits

0x85f2,	// (0x0006bcf3) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd32,	// (0x00073433) main_fs_bigclock_clock_pane_t_ParamLimits

0x3940,	// (0x00067041) main_mup3_lyrics_pane_ParamLimits

0x3940,	// (0x00067041) main_mup3_lyrics_pane

0x93cb,	// (0x0006cacc) main_mup3_lyrics_pane_t1_ParamLimits

0x93cb,	// (0x0006cacc) main_mup3_lyrics_pane_t1

0xb946,	// (0x0006f047) aid_main_mp4_pane_t1_area

0xb950,	// (0x0006f051) aid_main_mp4_pane_t2_area

0xb9fc,	// (0x0006f0fd) main_mp4_pane_g7_ParamLimits

0xb9fc,	// (0x0006f0fd) main_mp4_pane_g7

0xba08,	// (0x0006f109) main_mp4_pane_g8_ParamLimits

0xba08,	// (0x0006f109) main_mp4_pane_g8

0x4a23,	// (0x00068124) aid_call6_pane_g1_size

0x8fd8,	// (0x0006c6d9) list_double_large_graphic_phob2_other_pane_ParamLimits

0x8fd8,	// (0x0006c6d9) list_double_large_graphic_phob2_other_pane

0xaecd,	// (0x0006e5ce) list_double_large_graphic_phob2_other_pane_g1

0xa08d,	// (0x0006d78e) list_highlight_pane_cp026

0xa7ac,	// (0x0006dead) main_welc_pane_ParamLimits

0x7976,	// (0x0006b077) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7976,	// (0x0006b077) main_sp_fs_ctrlbar_pane_g3

0x7990,	// (0x0006b091) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7990,	// (0x0006b091) main_sp_fs_ctrlbar_pane_g4

0x79c4,	// (0x0006b0c5) toolbar2_fixed_button_pane_cp01

0x79cf,	// (0x0006b0d0) toolbar2_fixed_button_pane_cp02

0x79dc,	// (0x0006b0dd) toolbar2_fixed_button_pane_cp03

0x909d,	// (0x0006c79e) list_welc_entry_pane_ParamLimits

0x909d,	// (0x0006c79e) list_welc_entry_pane

0x911a,	// (0x0006c81b) main_welc_pane_g3_ParamLimits

0x911a,	// (0x0006c81b) main_welc_pane_g3

0x9171,	// (0x0006c872) main_welc_pane_t2_ParamLimits

0x9171,	// (0x0006c872) main_welc_pane_t2

0x918c,	// (0x0006c88d) main_welc_pane_t3_ParamLimits

0x918c,	// (0x0006c88d) main_welc_pane_t3

0x0005,

0xfe35,	// (0x00073536) main_welc_pane_t_ParamLimits

0xfe35,	// (0x00073536) main_welc_pane_t

0x92bc,	// (0x0006c9bd) welc_button_pane_ParamLimits

0x92bc,	// (0x0006c9bd) welc_button_pane

0x9336,	// (0x0006ca37) welc_service_logo_pane_ParamLimits

0x9336,	// (0x0006ca37) welc_service_logo_pane

0x93e7,	// (0x0006cae8) list_single_welc_entry_pane_ParamLimits

0x93e7,	// (0x0006cae8) list_single_welc_entry_pane

0x93f8,	// (0x0006caf9) list_single_welc_entry_pane_g1

0x9400,	// (0x0006cb01) list_single_welc_entry_pane_t1

0x940e,	// (0x0006cb0f) list_single_welc_entry_pane_t2

0x0001,

0xfe47,	// (0x00073548) list_single_welc_entry_pane_t

0xa08d,	// (0x0006d78e) bg_button_pane_cp035

0x941c,	// (0x0006cb1d) welc_button_pane_t1

0xc675,	// (0x0006fd76) welc_service_logo_pane_g1

0xc67e,	// (0x0006fd7f) welc_service_logo_pane_g2

0x0001,

0xfe4c,	// (0x0007354d) welc_service_logo_pane_g

0xa112,	// (0x0006d813) main_int_radio_pane

0xa942,	// (0x0006e043) list_single_fs_dyc_pane_g1

0x8f09,	// (0x0006c60a) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x8f09,	// (0x0006c60a) list_double_large_graphic_phob2_pane_g3

0x8f15,	// (0x0006c616) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x8f15,	// (0x0006c616) list_double_large_graphic_phob2_pane_g4

0x942a,	// (0x0006cb2b) main_int_radio1_pane_ParamLimits

0x942a,	// (0x0006cb2b) main_int_radio1_pane

0xc687,	// (0x0006fd88) find_pane_cp02

0x9447,	// (0x0006cb48) input_focus_pane_cp12_ParamLimits

0x9447,	// (0x0006cb48) input_focus_pane_cp12

0x9457,	// (0x0006cb58) input_focus_pane_cp13_ParamLimits

0x9457,	// (0x0006cb58) input_focus_pane_cp13

0x946b,	// (0x0006cb6c) input_focus_pane_cp14_ParamLimits

0x946b,	// (0x0006cb6c) input_focus_pane_cp14

0xc690,	// (0x0006fd91) int_radio1_listscroll_pane

0x947f,	// (0x0006cb80) main_int_radio1_pane_g1_ParamLimits

0x947f,	// (0x0006cb80) main_int_radio1_pane_g1

0x9497,	// (0x0006cb98) main_int_radio1_pane_t1_ParamLimits

0x9497,	// (0x0006cb98) main_int_radio1_pane_t1

0x94b2,	// (0x0006cbb3) main_int_radio1_pane_t2_ParamLimits

0x94b2,	// (0x0006cbb3) main_int_radio1_pane_t2

0x94cd,	// (0x0006cbce) main_int_radio1_pane_t3_ParamLimits

0x94cd,	// (0x0006cbce) main_int_radio1_pane_t3

0x94e8,	// (0x0006cbe9) main_int_radio1_pane_t4_ParamLimits

0x94e8,	// (0x0006cbe9) main_int_radio1_pane_t4

0xc69a,	// (0x0006fd9b) main_int_radio1_pane_t5_ParamLimits

0xc69a,	// (0x0006fd9b) main_int_radio1_pane_t5

0x94fa,	// (0x0006cbfb) main_int_radio1_pane_t6_ParamLimits

0x94fa,	// (0x0006cbfb) main_int_radio1_pane_t6

0x950f,	// (0x0006cc10) main_int_radio1_pane_t7_ParamLimits

0x950f,	// (0x0006cc10) main_int_radio1_pane_t7

0x9524,	// (0x0006cc25) main_int_radio1_pane_t8_ParamLimits

0x9524,	// (0x0006cc25) main_int_radio1_pane_t8

0x9543,	// (0x0006cc44) main_int_radio1_pane_t9_ParamLimits

0x9543,	// (0x0006cc44) main_int_radio1_pane_t9

0x9555,	// (0x0006cc56) main_int_radio1_pane_t10_ParamLimits

0x9555,	// (0x0006cc56) main_int_radio1_pane_t10

0x957b,	// (0x0006cc7c) main_int_radio1_pane_t11_ParamLimits

0x957b,	// (0x0006cc7c) main_int_radio1_pane_t11

0x95a1,	// (0x0006cca2) main_int_radio1_pane_t12_ParamLimits

0x95a1,	// (0x0006cca2) main_int_radio1_pane_t12

0x000b,

0xfe51,	// (0x00073552) main_int_radio1_pane_t_ParamLimits

0xfe51,	// (0x00073552) main_int_radio1_pane_t

0xc6ac,	// (0x0006fdad) int_radio_list_pane

0xc526,	// (0x0006fc27) scroll_pane_cp037

0xc6b4,	// (0x0006fdb5) list_double_large_graphic_int_radio_pane_ParamLimits

0xc6b4,	// (0x0006fdb5) list_double_large_graphic_int_radio_pane

0xc6cc,	// (0x0006fdcd) list_double_large_graphic_int_radio_pane_g1

0x95b3,	// (0x0006ccb4) list_double_large_graphic_int_radio_pane_t1

0x95c1,	// (0x0006ccc2) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe6a,	// (0x0007356b) list_double_large_graphic_int_radio_pane_t

0xa08d,	// (0x0006d78e) list_highlight_pane_cp027

0xc62a,	// (0x0006fd2b) main_button_pane_4

0x912d,	// (0x0006c82e) main_welc_pane_g4_ParamLimits

0x912d,	// (0x0006c82e) main_welc_pane_g4

0x91a5,	// (0x0006c8a6) main_welc_pane_t4_ParamLimits

0x91a5,	// (0x0006c8a6) main_welc_pane_t4

0x91bc,	// (0x0006c8bd) main_welc_pane_t5_ParamLimits

0x91bc,	// (0x0006c8bd) main_welc_pane_t5

0x91f9,	// (0x0006c8fa) main_welc_pane_t6_ParamLimits

0x91f9,	// (0x0006c8fa) main_welc_pane_t6

0x92d3,	// (0x0006c9d4) welc_button_pane_2_ParamLimits

0x92d3,	// (0x0006c9d4) welc_button_pane_2

0x92ef,	// (0x0006c9f0) welc_button_pane_3_ParamLimits

0x92ef,	// (0x0006c9f0) welc_button_pane_3

0xc632,	// (0x0006fd33) welc_button_pane_4

0x930e,	// (0x0006ca0f) welc_button_pane_5_ParamLimits

0x930e,	// (0x0006ca0f) welc_button_pane_5

0x04ec,	// (0x00063bed) main_popup_welc_pane

0xc6e4,	// (0x0006fde5) main_welc_sk_g3

0xc6ee,	// (0x0006fdef) main_welc_sk_g4

0xc6f8,	// (0x0006fdf9) main_welc_sk_t3

0xc708,	// (0x0006fe09) main_welc_sk_t4

0xc718,	// (0x0006fe19) popup_welc_pane_t4

0xc726,	// (0x0006fe27) popup_welc_pane_t5

0xc734,	// (0x0006fe35) popup_welc_pane_t6

0xa112,	// (0x0006d813) main_acti_pane

0xa08d,	// (0x0006d78e) main_sso_pane

0x95cf,	// (0x0006ccd0) sso_body_pane_ParamLimits

0x95cf,	// (0x0006ccd0) sso_body_pane

0x95e3,	// (0x0006cce4) sso_logo_pane_ParamLimits

0x95e3,	// (0x0006cce4) sso_logo_pane

0x9613,	// (0x0006cd14) sso_sk_pane_ParamLimits

0x9613,	// (0x0006cd14) sso_sk_pane

0xab2c,	// (0x0006e22d) main_sso_logo_pane_g1

0x9625,	// (0x0006cd26) sso_sk_pane_t1_ParamLimits

0x9625,	// (0x0006cd26) sso_sk_pane_t1

0x963f,	// (0x0006cd40) sso_sk_pane_t2_ParamLimits

0x963f,	// (0x0006cd40) sso_sk_pane_t2

0x0001,

0xfe6f,	// (0x00073570) sso_sk_pane_t_ParamLimits

0xfe6f,	// (0x00073570) sso_sk_pane_t

0xc772,	// (0x0006fe73) aid_sso_gap

0xc77b,	// (0x0006fe7c) aid_sso_txt1

0xc785,	// (0x0006fe86) aid_sso_txt2

0xc78f,	// (0x0006fe90) aid_sso_txt3

0x0002,

0xfe74,	// (0x00073575) aid_sso_txt

0xc799,	// (0x0006fe9a) aid_sso_widget

0x96a9,	// (0x0006cdaa) sso_btn_pane_ParamLimits

0x96a9,	// (0x0006cdaa) sso_btn_pane

0x9731,	// (0x0006ce32) sso_option_pane_ParamLimits

0x9731,	// (0x0006ce32) sso_option_pane

0x97b1,	// (0x0006ceb2) sso_query_pane_ParamLimits

0x97b1,	// (0x0006ceb2) sso_query_pane

0x9807,	// (0x0006cf08) sso_query_pane_cp01_ParamLimits

0x9807,	// (0x0006cf08) sso_query_pane_cp01

0x9861,	// (0x0006cf62) sso_t_hdr_pane_ParamLimits

0x9861,	// (0x0006cf62) sso_t_hdr_pane

0x988b,	// (0x0006cf8c) sso_t_nml_pane_ParamLimits

0x988b,	// (0x0006cf8c) sso_t_nml_pane

0xc7a3,	// (0x0006fea4) sso_t_sub_pane

0x95f0,	// (0x0006ccf1) sso_popup_window_ParamLimits

0x95f0,	// (0x0006ccf1) sso_popup_window

0x9655,	// (0x0006cd56) sso_apps_pane_ParamLimits

0x9655,	// (0x0006cd56) sso_apps_pane

0x967f,	// (0x0006cd80) sso_body_pane_g1

0x9689,	// (0x0006cd8a) sso_body_pane_t1

0x9699,	// (0x0006cd9a) sso_body_pane_t2

0x0001,

0xfe7b,	// (0x0007357c) sso_body_pane_t

0x96fb,	// (0x0006cdfc) sso_btn_pane_cp01_ParamLimits

0x96fb,	// (0x0006cdfc) sso_btn_pane_cp01

0x9785,	// (0x0006ce86) sso_prog_pane_ParamLimits

0x9785,	// (0x0006ce86) sso_prog_pane

0x98e1,	// (0x0006cfe2) sso_t_hdr_pane_t1_ParamLimits

0x98e1,	// (0x0006cfe2) sso_t_hdr_pane_t1

0xc7b8,	// (0x0006feb9) input_focus_pane_cp10_ParamLimits

0xc7b8,	// (0x0006feb9) input_focus_pane_cp10

0xc7d2,	// (0x0006fed3) sso_query_pane_t1_ParamLimits

0xc7d2,	// (0x0006fed3) sso_query_pane_t1

0xc7e5,	// (0x0006fee6) sso_query_pane_t2_ParamLimits

0xc7e5,	// (0x0006fee6) sso_query_pane_t2

0xc800,	// (0x0006ff01) sso_query_pane_t3_ParamLimits

0xc800,	// (0x0006ff01) sso_query_pane_t3

0xc82a,	// (0x0006ff2b) sso_query_pane_t4_ParamLimits

0xc82a,	// (0x0006ff2b) sso_query_pane_t4

0x0003,

0xfe80,	// (0x00073581) sso_query_pane_t_ParamLimits

0xfe80,	// (0x00073581) sso_query_pane_t

0xa08d,	// (0x0006d78e) bg_button_pane_cp22

0xc6d5,	// (0x0006fdd6) sso_btn_pane_t1

0x98f4,	// (0x0006cff5) sso_t_nml_pane_t1_ParamLimits

0x98f4,	// (0x0006cff5) sso_t_nml_pane_t1

0xc84e,	// (0x0006ff4f) sso_option_row_pane_ParamLimits

0xc84e,	// (0x0006ff4f) sso_option_row_pane

0xc861,	// (0x0006ff62) sso_t_sub_pane_t1_ParamLimits

0xc861,	// (0x0006ff62) sso_t_sub_pane_t1

0xa7ac,	// (0x0006dead) bg_popup_window_pane_cp11_ParamLimits

0xa7ac,	// (0x0006dead) bg_popup_window_pane_cp11

0xc87e,	// (0x0006ff7f) popup_sk_window_cp01_ParamLimits

0xc87e,	// (0x0006ff7f) popup_sk_window_cp01

0xc88b,	// (0x0006ff8c) sso_popup_body_pane_ParamLimits

0xc88b,	// (0x0006ff8c) sso_popup_body_pane

0xc898,	// (0x0006ff99) scroll_pane_cp21_ParamLimits

0xc898,	// (0x0006ff99) scroll_pane_cp21

0xc8a5,	// (0x0006ffa6) sso_popup_body_t_pane_ParamLimits

0xc8a5,	// (0x0006ffa6) sso_popup_body_t_pane

0xc8b2,	// (0x0006ffb3) sso_popup_body_t_hdr_pane_ParamLimits

0xc8b2,	// (0x0006ffb3) sso_popup_body_t_hdr_pane

0xc8c5,	// (0x0006ffc6) sso_popup_body_t_nml_pane_ParamLimits

0xc8c5,	// (0x0006ffc6) sso_popup_body_t_nml_pane

0xc8e3,	// (0x0006ffe4) sso_popup_body_t_sub_pane_ParamLimits

0xc8e3,	// (0x0006ffe4) sso_popup_body_t_sub_pane

0xc906,	// (0x00070007) sso_popup_body_t_hdr_pane_t1

0x990f,	// (0x0006d010) sso_popup_body_t_nml_pane_t1_ParamLimits

0x990f,	// (0x0006d010) sso_popup_body_t_nml_pane_t1

0xc916,	// (0x00070017) sso_popup_body_t_sub_pane_t1_ParamLimits

0xc916,	// (0x00070017) sso_popup_body_t_sub_pane_t1

0xab2c,	// (0x0006e22d) sso_prog_pane_g1

0x9948,	// (0x0006d049) sso_apps_pane_comp1_ParamLimits

0x9948,	// (0x0006d049) sso_apps_pane_comp1

0xc93b,	// (0x0007003c) sso_apps_pane_comp1_g1

0xc943,	// (0x00070044) sso_apps_pane_comp1_t1

0xc95f,	// (0x00070060) sso_option_row_pane_g1

0xc967,	// (0x00070068) sso_option_row_pane_t1

0x908a,	// (0x0006c78b) bg_welc_area_ParamLimits

0x908a,	// (0x0006c78b) bg_welc_area

0x9237,	// (0x0006c938) sso_t_hdr_pane_a_t1_ParamLimits

0x9237,	// (0x0006c938) sso_t_hdr_pane_a_t1

0x9252,	// (0x0006c953) sso_t_nml_pane_a_t1_ParamLimits

0x9252,	// (0x0006c953) sso_t_nml_pane_a_t1

0x9281,	// (0x0006c982) sso_t_sub_pane_a_t1_ParamLimits

0x9281,	// (0x0006c982) sso_t_sub_pane_a_t1

0xc6d5,	// (0x0006fdd6) sso_btn_pane_t1_copy1

0xa08d,	// (0x0006d78e) welc_button_pane_2_comp1

0xc742,	// (0x0006fe43) sso_t_hdr_pane_p_t1

0xc752,	// (0x0006fe53) sso_t_nml_pane_p_t1

0xc762,	// (0x0006fe63) sso_t_sub_pane_p_t1

0xbde2,	// (0x0006f4e3) list_cmail_pane_ParamLimits

0x9324,	// (0x0006ca25) welc_button_pane_cp01_ParamLimits

0x9324,	// (0x0006ca25) welc_button_pane_cp01

0xa08d,	// (0x0006d78e) main_att_pane

0xc951,	// (0x00070052) input_focus_pane_cp10_t1

0xc967,	// (0x00070068) sso_option_row_pane_t1_ParamLimits

0x9962,	// (0x0006d063) main_att_body_pane_ParamLimits

0x9962,	// (0x0006d063) main_att_body_pane

0x9997,	// (0x0006d098) att_btn_pane_ParamLimits

0x9997,	// (0x0006d098) att_btn_pane

0x99bc,	// (0x0006d0bd) att_btn_pane_cp01_ParamLimits

0x99bc,	// (0x0006d0bd) att_btn_pane_cp01

0x99dc,	// (0x0006d0dd) att_li_srv_pane_ParamLimits

0x99dc,	// (0x0006d0dd) att_li_srv_pane

0x99f9,	// (0x0006d0fa) att_opt_pane_ParamLimits

0x99f9,	// (0x0006d0fa) att_opt_pane

0x9a45,	// (0x0006d146) att_query_pane_ParamLimits

0x9a45,	// (0x0006d146) att_query_pane

0x9a91,	// (0x0006d192) att_query_pane_cp01_ParamLimits

0x9a91,	// (0x0006d192) att_query_pane_cp01

0x9add,	// (0x0006d1de) att_t_hdr_pane_ParamLimits

0x9add,	// (0x0006d1de) att_t_hdr_pane

0x9b35,	// (0x0006d236) att_t_nml_pane_ParamLimits

0x9b35,	// (0x0006d236) att_t_nml_pane

0x9b6e,	// (0x0006d26f) att_t_nml_pane_cp01_ParamLimits

0x9b6e,	// (0x0006d26f) att_t_nml_pane_cp01

0x9b9a,	// (0x0006d29b) att_t_nmlb_pane_ParamLimits

0x9b9a,	// (0x0006d29b) att_t_nmlb_pane

0x9bb7,	// (0x0006d2b8) att_term_pane_ParamLimits

0x9bb7,	// (0x0006d2b8) att_term_pane

0x9c03,	// (0x0006d304) main_att_body_pane_g1_ParamLimits

0x9c03,	// (0x0006d304) main_att_body_pane_g1

0xc97d,	// (0x0007007e) att_t_hdr_pane_t1_ParamLimits

0xc97d,	// (0x0007007e) att_t_hdr_pane_t1

0xc996,	// (0x00070097) att_t_nml_pane_t1_ParamLimits

0xc996,	// (0x00070097) att_t_nml_pane_t1

0xc9bb,	// (0x000700bc) att_btn_pane_t1

0xa08d,	// (0x0006d78e) bg_button_pane_cp23

0x9c3a,	// (0x0006d33b) att_li_srv_row_pane_ParamLimits

0x9c3a,	// (0x0006d33b) att_li_srv_row_pane

0xc9cb,	// (0x000700cc) att_t_nmlb_pane_t1_ParamLimits

0xc9cb,	// (0x000700cc) att_t_nmlb_pane_t1

0xc9e4,	// (0x000700e5) att_query_pane_t1

0xc9f3,	// (0x000700f4) att_query_pane_t2

0xca02,	// (0x00070103) att_query_pane_t3

0x0002,

0xfe89,	// (0x0007358a) att_query_pane_t

0xca11,	// (0x00070112) input_focus_pane_cp11

0xca1a,	// (0x0007011b) att_term_pane_t1_ParamLimits

0xca1a,	// (0x0007011b) att_term_pane_t1

0xa08d,	// (0x0006d78e) att_opt_row_pane

0xca37,	// (0x00070138) att_opt_row_pane_g1

0xca3f,	// (0x00070140) att_opt_row_pane_t1_ParamLimits

0xca3f,	// (0x00070140) att_opt_row_pane_t1

0x9c4a,	// (0x0006d34b) att_li_srv_row_pane_g1

0x9c52,	// (0x0006d353) att_li_srv_row_pane_t1

0x9c67,	// (0x0006d368) att_li_srv_row_pane_t2

0x0001,

0xfe90,	// (0x00073591) att_li_srv_row_pane_t

0xa08d,	// (0x0006d78e) main_call7_pane

0xa08d,	// (0x0006d78e) main_vod_pane

0xc7a3,	// (0x0006fea4) sso_t_sub_pane_ParamLimits

0x9978,	// (0x0006d079) att_btn_emg_pane_ParamLimits

0x9978,	// (0x0006d079) att_btn_emg_pane

0x9c52,	// (0x0006d353) att_li_srv_row_pane_t1_ParamLimits

0x9c67,	// (0x0006d368) att_li_srv_row_pane_t2_ParamLimits

0xfe90,	// (0x00073591) att_li_srv_row_pane_t_ParamLimits

0xca58,	// (0x00070159) att_btn_close_pane_g1

0xa08d,	// (0x0006d78e) bg_button_pane_cp24

0x9c7c,	// (0x0006d37d) main_vod_body_pane_ParamLimits

0x9c7c,	// (0x0006d37d) main_vod_body_pane

0x9c90,	// (0x0006d391) main_vod_body_pane_g1_ParamLimits

0x9c90,	// (0x0006d391) main_vod_body_pane_g1

0x9cc4,	// (0x0006d3c5) scroll_pane_cp24_ParamLimits

0x9cc4,	// (0x0006d3c5) scroll_pane_cp24

0x9d12,	// (0x0006d413) vod_btn_pane_ParamLimits

0x9d12,	// (0x0006d413) vod_btn_pane

0x9d56,	// (0x0006d457) vod_det_pane_ParamLimits

0x9d56,	// (0x0006d457) vod_det_pane

0x9d88,	// (0x0006d489) vod_logo_g1_ParamLimits

0x9d88,	// (0x0006d489) vod_logo_g1

0x9dc6,	// (0x0006d4c7) vod_opt_pane_ParamLimits

0x9dc6,	// (0x0006d4c7) vod_opt_pane

0x9df9,	// (0x0006d4fa) vod_opt_pane_cp01_ParamLimits

0x9df9,	// (0x0006d4fa) vod_opt_pane_cp01

0x9e25,	// (0x0006d526) vod_query_pane_ParamLimits

0x9e25,	// (0x0006d526) vod_query_pane

0x9e52,	// (0x0006d553) vod_query_pane_cp01_ParamLimits

0x9e52,	// (0x0006d553) vod_query_pane_cp01

0x9e5e,	// (0x0006d55f) vod_t_nml_pane_ParamLimits

0x9e5e,	// (0x0006d55f) vod_t_nml_pane

0x9f0b,	// (0x0006d60c) vod_t_nml_pane_cp01_ParamLimits

0x9f0b,	// (0x0006d60c) vod_t_nml_pane_cp01

0x9f47,	// (0x0006d648) vod_t_sub_pane_ParamLimits

0x9f47,	// (0x0006d648) vod_t_sub_pane

0x9f7c,	// (0x0006d67d) vod_t_sub_pane_cp01_ParamLimits

0x9f7c,	// (0x0006d67d) vod_t_sub_pane_cp01

0xca11,	// (0x00070112) vod_query_field_pane

0xc9e4,	// (0x000700e5) vod_query_pane_t1

0xa08d,	// (0x0006d78e) bg_button_pane_cp25

0xc9bb,	// (0x000700bc) sso_btn_pane_t1_copy2

0x9fa8,	// (0x0006d6a9) vod_t_nml_pane_t1_ParamLimits

0x9fa8,	// (0x0006d6a9) vod_t_nml_pane_t1

0xca60,	// (0x00070161) vod_opt_row_pane_ParamLimits

0xca60,	// (0x00070161) vod_opt_row_pane

0xca72,	// (0x00070173) vod_t_sub_pane_t1_ParamLimits

0xca72,	// (0x00070173) vod_t_sub_pane_t1

0x9fd9,	// (0x0006d6da) vod_det_cell_pane_ParamLimits

0x9fd9,	// (0x0006d6da) vod_det_cell_pane

0xa08d,	// (0x0006d78e) input_focus_pane_cp15

0xca8b,	// (0x0007018c) vod_query_field_pane_t1

0xca99,	// (0x0007019a) vod_opt_row_pane_g1_ParamLimits

0xca99,	// (0x0007019a) vod_opt_row_pane_g1

0xcaa5,	// (0x000701a6) vod_opt_row_pane_t1_ParamLimits

0xcaa5,	// (0x000701a6) vod_opt_row_pane_t1

0xcaca,	// (0x000701cb) vod_det_cell_field_pane

0xcad3,	// (0x000701d4) vod_det_cell_pane_g1

0xc9e4,	// (0x000700e5) vod_det_cell_pane_t1

0xa08d,	// (0x0006d78e) input_focus_pane_cp16

0xca8b,	// (0x0007018c) vod_det_cell_field_pane_t1

0x9fed,	// (0x0006d6ee) call7_btn_grp_pane_ParamLimits

0x9fed,	// (0x0006d6ee) call7_btn_grp_pane

0xa007,	// (0x0006d708) call7_bubble_pane_ParamLimits

0xa007,	// (0x0006d708) call7_bubble_pane

0xa01e,	// (0x0006d71f) cell_call7_btn_pane_ParamLimits

0xa01e,	// (0x0006d71f) cell_call7_btn_pane

0xa031,	// (0x0006d732) call7_pane_g1_ParamLimits

0xa031,	// (0x0006d732) call7_pane_g1

0xa040,	// (0x0006d741) call7_windows_conf_pane_ParamLimits

0xa040,	// (0x0006d741) call7_windows_conf_pane

0xa05a,	// (0x0006d75b) popup_call7_1st_window_ParamLimits

0xa05a,	// (0x0006d75b) popup_call7_1st_window

0xa06b,	// (0x0006d76c) popup_call7_2nd_window_ParamLimits

0xa06b,	// (0x0006d76c) popup_call7_2nd_window

0xa07c,	// (0x0006d77d) popup_call7_3rd_window_ParamLimits

0xa07c,	// (0x0006d77d) popup_call7_3rd_window

0xa08d,	// (0x0006d78e) bg_button_pane_cp26

0xc47a,	// (0x0006fb7b) cell_call7_btn_pane_g1

0xcadb,	// (0x000701dc) cell_call7_btn_pane_t1

0xa08d,	// (0x0006d78e) bg_popup_window_pane_cp12

0xcaea,	// (0x000701eb) popup_call7_1st_window_g1

0xcaf2,	// (0x000701f3) popup_call7_1st_window_g2

0xcafa,	// (0x000701fb) popup_call7_1st_window_g3

0x0002,

0xfe95,	// (0x00073596) popup_call7_1st_window_g

0xcb02,	// (0x00070203) popup_call7_1st_window_t1

0xcb11,	// (0x00070212) popup_call7_1st_window_t2

0xcb1f,	// (0x00070220) popup_call7_1st_window_t3

0x0002,

0xfe9c,	// (0x0007359d) popup_call7_1st_window_t

0xa08d,	// (0x0006d78e) bg_popup_window_pane_cp13

0xcb2d,	// (0x0007022e) popup_call7_2nd_window_g1

0xcb35,	// (0x00070236) popup_call7_2nd_window_g2

0xcb3d,	// (0x0007023e) popup_call7_2nd_window_g3

0x0002,

0xfea3,	// (0x000735a4) popup_call7_2nd_window_g

0xcb45,	// (0x00070246) popup_call7_2nd_window_t1

0xa08d,	// (0x0006d78e) bg_popup_window_pane_cp14

0xcb54,	// (0x00070255) call7_list_conf_pane

0xcb5c,	// (0x0007025d) call7_list_conf_row_pane_ParamLimits

0xcb5c,	// (0x0007025d) call7_list_conf_row_pane

0xcb6f,	// (0x00070270) call7_list_conf_row_pane_g1

0xcb77,	// (0x00070278) call7_list_conf_row_pane_g2

0x0001,

0xfeaa,	// (0x000735ab) call7_list_conf_row_pane_g

0xcb7f,	// (0x00070280) call7_list_conf_row_pane_t1

0xa08d,	// (0x0006d78e) list_highlight_pane_cp22
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small
