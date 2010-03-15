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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0001bc8e };

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
0x46d4,	// (0x00020362) Screen

0x46e0,	// (0x0002036e) application_window

0x46ec,	// (0x0002037a) area_bottom_pane_ParamLimits

0x46ec,	// (0x0002037a) area_bottom_pane

0x2e90,	// (0x0001eb1e) area_top_pane_ParamLimits

0x2e90,	// (0x0001eb1e) area_top_pane

0x2ef4,	// (0x0001eb82) call_video_uplink_pane_ParamLimits

0x2ef4,	// (0x0001eb82) call_video_uplink_pane

0x2f33,	// (0x0001ebc1) main_pane_ParamLimits

0x2f33,	// (0x0001ebc1) main_pane

0xe2b2,	// (0x00029f40) context_pane

0x75ea,	// (0x00023278) navi_pane

0x760a,	// (0x00023298) popup_cale_events_window_ParamLimits

0x760a,	// (0x00023298) popup_cale_events_window

0xe2c5,	// (0x00029f53) popup_mup_playback_window

0x7622,	// (0x000232b0) signal_pane

0xc2f0,	// (0x00027f7e) main_browser_pane

0xce34,	// (0x00028ac2) main_burst_pane

0x355b,	// (0x0001f1e9) main_calc_pane

0xe298,	// (0x00029f26) main_cale_day_pane

0x4b05,	// (0x00020793) main_cale_month_pane

0xe298,	// (0x00029f26) main_cale_week_pane

0xce34,	// (0x00028ac2) main_call_pane

0xbfc2,	// (0x00027c50) main_call_poc_pane

0xce34,	// (0x00028ac2) main_camera_pane

0xce34,	// (0x00028ac2) main_chi_dic_pane

0xcca9,	// (0x00028937) main_clock_pane

0xbfc2,	// (0x00027c50) main_fmradio_pane

0xce34,	// (0x00028ac2) main_graph_messa_pane

0xbfc2,	// (0x00027c50) main_help_pane

0xc2f0,	// (0x00027f7e) main_im_pane

0xc22b,	// (0x00027eb9) main_image_pane_ParamLimits

0xc22b,	// (0x00027eb9) main_image_pane

0xbfc2,	// (0x00027c50) main_location2_pane

0xce34,	// (0x00028ac2) main_location_pane

0xc22b,	// (0x00027eb9) main_messa_pane

0xbfc2,	// (0x00027c50) main_mp2_pane

0xce34,	// (0x00028ac2) main_mp_pane

0xbfc2,	// (0x00027c50) main_msg_pane

0xbfc2,	// (0x00027c50) main_mup_eq_pane

0xbfc2,	// (0x00027c50) main_mup_pane

0xc2f0,	// (0x00027f7e) main_notes_pane

0xbfc2,	// (0x00027c50) main_pec_pane

0xbfc2,	// (0x00027c50) main_phob_pane

0xbfc2,	// (0x00027c50) main_pinb_pane

0xbfc2,	// (0x00027c50) main_postcard_pane

0xbfc2,	// (0x00027c50) main_qdial_pane

0xce34,	// (0x00028ac2) main_skin_pane

0xbfc2,	// (0x00027c50) main_smil2_pane

0xce34,	// (0x00028ac2) main_smil_pane

0xce34,	// (0x00028ac2) main_video_pane

0xce34,	// (0x00028ac2) main_video_tele_pane

0xc22b,	// (0x00027eb9) main_viewer_pane_ParamLimits

0xc22b,	// (0x00027eb9) main_viewer_pane

0xce34,	// (0x00028ac2) main_vorec_pane

0x35a7,	// (0x0001f235) popup_blid_sat_info_window_ParamLimits

0x35a7,	// (0x0001f235) popup_blid_sat_info_window

0x35c7,	// (0x0001f255) popup_dyc_status_message_window_ParamLimits

0x35c7,	// (0x0001f255) popup_dyc_status_message_window

0x35d7,	// (0x0001f265) popup_grid_large_graphic_window_ParamLimits

0x35d7,	// (0x0001f265) popup_grid_large_graphic_window

0x3668,	// (0x0001f2f6) popup_loc_request_window_ParamLimits

0x3668,	// (0x0001f2f6) popup_loc_request_window

0x36b5,	// (0x0001f343) popup_wml_address_window_ParamLimits

0x36b5,	// (0x0001f343) popup_wml_address_window

0x74cc,	// (0x0002315a) call_muted_g1

0x718e,	// (0x00022e1c) popup_call_audio_conf_window_ParamLimits

0x718e,	// (0x00022e1c) popup_call_audio_conf_window

0x74dc,	// (0x0002316a) popup_call_audio_first_window_ParamLimits

0x74dc,	// (0x0002316a) popup_call_audio_first_window

0x751c,	// (0x000231aa) popup_call_audio_in_window_ParamLimits

0x751c,	// (0x000231aa) popup_call_audio_in_window

0x7540,	// (0x000231ce) popup_call_audio_out_window_ParamLimits

0x7540,	// (0x000231ce) popup_call_audio_out_window

0x7562,	// (0x000231f0) popup_call_audio_second_window_ParamLimits

0x7562,	// (0x000231f0) popup_call_audio_second_window

0x7592,	// (0x00023220) popup_call_audio_wait_window_ParamLimits

0x7592,	// (0x00023220) popup_call_audio_wait_window

0x75b3,	// (0x00023241) popup_number_entry_window_ParamLimits

0x75b3,	// (0x00023241) popup_number_entry_window

0xbbaf,	// (0x0002783d) bg_popup_call_pane_cp05_ParamLimits

0xbbaf,	// (0x0002783d) bg_popup_call_pane_cp05

0xbbcf,	// (0x0002785d) popup_number_entry_window_t1

0xbbe2,	// (0x00027870) popup_number_entry_window_t2

0xbbf4,	// (0x00027882) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x0002ad61) popup_number_entry_window_t

0xbc06,	// (0x00027894) text_title_cp2

0xbc19,	// (0x000278a7) bg_popup_call_pane_cp_ParamLimits

0xbc19,	// (0x000278a7) bg_popup_call_pane_cp

0xbc27,	// (0x000278b5) call_thumbnail_pane

0xbc2f,	// (0x000278bd) popup_call_audio_in_window_g1_ParamLimits

0xbc2f,	// (0x000278bd) popup_call_audio_in_window_g1

0xbc3b,	// (0x000278c9) popup_call_audio_in_window_g2_ParamLimits

0xbc3b,	// (0x000278c9) popup_call_audio_in_window_g2

0xbc47,	// (0x000278d5) popup_call_audio_in_window_g3_ParamLimits

0xbc47,	// (0x000278d5) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x0002ad6a) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x0002ad6a) popup_call_audio_in_window_g

0xbc53,	// (0x000278e1) popup_call_audio_in_window_t1_ParamLimits

0xbc53,	// (0x000278e1) popup_call_audio_in_window_t1

0xbc6f,	// (0x000278fd) popup_call_audio_in_window_t2_ParamLimits

0xbc6f,	// (0x000278fd) popup_call_audio_in_window_t2

0xbc8b,	// (0x00027919) popup_call_audio_in_window_t3_ParamLimits

0xbc8b,	// (0x00027919) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x0002ad71) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x0002ad71) popup_call_audio_in_window_t

0xbc19,	// (0x000278a7) bg_popup_call_pane_cp01_ParamLimits

0xbc19,	// (0x000278a7) bg_popup_call_pane_cp01

0xbc27,	// (0x000278b5) call_thumbnail_pane_cp02

0xbc9e,	// (0x0002792c) call_type_pane_cp022

0xbca6,	// (0x00027934) popup_call_audio_out_window_g1_ParamLimits

0xbca6,	// (0x00027934) popup_call_audio_out_window_g1

0xbcb8,	// (0x00027946) popup_call_audio_out_window_g2_ParamLimits

0xbcb8,	// (0x00027946) popup_call_audio_out_window_g2

0xbcc4,	// (0x00027952) popup_call_audio_out_window_g3_ParamLimits

0xbcc4,	// (0x00027952) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x0002ad78) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x0002ad78) popup_call_audio_out_window_g

0xbcd6,	// (0x00027964) popup_call_audio_out_window_t1_ParamLimits

0xbcd6,	// (0x00027964) popup_call_audio_out_window_t1

0xbcee,	// (0x0002797c) popup_call_audio_out_window_t2_ParamLimits

0xbcee,	// (0x0002797c) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x0002ad7f) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x0002ad7f) popup_call_audio_out_window_t

0xbd03,	// (0x00027991) bg_popup_call_pane_ParamLimits

0xbd03,	// (0x00027991) bg_popup_call_pane

0x4766,	// (0x000203f4) call_thumbnail_pane_cp_ParamLimits

0x4766,	// (0x000203f4) call_thumbnail_pane_cp

0xbd87,	// (0x00027a15) call_type_pane_cp01_ParamLimits

0xbd87,	// (0x00027a15) call_type_pane_cp01

0xbdcb,	// (0x00027a59) popup_call_audio_first_window_g1_ParamLimits

0xbdcb,	// (0x00027a59) popup_call_audio_first_window_g1

0xbe17,	// (0x00027aa5) popup_call_audio_first_window_g2_ParamLimits

0xbe17,	// (0x00027aa5) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x0002ad84) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x0002ad84) popup_call_audio_first_window_g

0xbe5b,	// (0x00027ae9) popup_call_audio_first_window_t1_ParamLimits

0xbe5b,	// (0x00027ae9) popup_call_audio_first_window_t1

0xbf07,	// (0x00027b95) popup_call_audio_first_window_t4_ParamLimits

0xbf07,	// (0x00027b95) popup_call_audio_first_window_t4

0xbf93,	// (0x00027c21) popup_call_audio_first_window_t5_ParamLimits

0xbf93,	// (0x00027c21) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x0002ad89) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x0002ad89) popup_call_audio_first_window_t

0xbfc2,	// (0x00027c50) bg_popup_call_pane_cp02

0xbfcc,	// (0x00027c5a) call_type_pane_cp023

0xbfd4,	// (0x00027c62) popup_call_audio_wait_window_g1

0xbfdc,	// (0x00027c6a) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x0002ad90) popup_call_audio_wait_window_g

0xbfe4,	// (0x00027c72) popup_call_audio_wait_window_t3

0xbff2,	// (0x00027c80) bg_popup_call_pane_cp03_ParamLimits

0xbff2,	// (0x00027c80) bg_popup_call_pane_cp03

0xc052,	// (0x00027ce0) call_thumbnail_pane_cp011_ParamLimits

0xc052,	// (0x00027ce0) call_thumbnail_pane_cp011

0xc05e,	// (0x00027cec) call_type_pane_cp034_ParamLimits

0xc05e,	// (0x00027cec) call_type_pane_cp034

0xc09a,	// (0x00027d28) popup_call_audio_second_window_g1_ParamLimits

0xc09a,	// (0x00027d28) popup_call_audio_second_window_g1

0xc0d6,	// (0x00027d64) popup_call_audio_second_window_g2_ParamLimits

0xc0d6,	// (0x00027d64) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x0002ad95) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x0002ad95) popup_call_audio_second_window_g

0xc112,	// (0x00027da0) popup_call_audio_second_window_t1_ParamLimits

0xc112,	// (0x00027da0) popup_call_audio_second_window_t1

0xc1a1,	// (0x00027e2f) popup_call_audio_second_window_t2_ParamLimits

0xc1a1,	// (0x00027e2f) popup_call_audio_second_window_t2

0xc1d7,	// (0x00027e65) popup_call_audio_second_window_t3_ParamLimits

0xc1d7,	// (0x00027e65) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x0002ad9a) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x0002ad9a) popup_call_audio_second_window_t

0xbfc2,	// (0x00027c50) bg_popup_call_pane_cp04

0xc20d,	// (0x00027e9b) list_conf_pane

0xc215,	// (0x00027ea3) popup_call_audio_conf_window_t1

0xc223,	// (0x00027eb1) call_thumbnail_pane_g1

0xc22b,	// (0x00027eb9) bg_pinb_pane_ParamLimits

0xc22b,	// (0x00027eb9) bg_pinb_pane

0xc239,	// (0x00027ec7) find_pinb_pane

0xc242,	// (0x00027ed0) listscroll_pinb_pane_ParamLimits

0xc242,	// (0x00027ed0) listscroll_pinb_pane

0xc251,	// (0x00027edf) pinb_bg_pane_g1

0x478a,	// (0x00020418) pinb_bg_pane_g2

0x4796,	// (0x00020424) pinb_bg_pane_g3

0x47a2,	// (0x00020430) pinb_bg_pane_g4

0x47ae,	// (0x0002043c) pinb_bg_pane_g5

0x47ba,	// (0x00020448) pinb_bg_pane_g6

0x47c5,	// (0x00020453) pinb_bg_pane_g7

0x47d0,	// (0x0002045e) pinb_bg_pane_g8

0x47db,	// (0x00020469) pinb_bg_pane_g9

0x47e5,	// (0x00020473) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x0002ada1) pinb_bg_pane_g

0x4802,	// (0x00020490) grid_pinb_pane

0x480d,	// (0x0002049b) list_pinb_pane

0x4818,	// (0x000204a6) scroll_pane_cp01_ParamLimits

0x4818,	// (0x000204a6) scroll_pane_cp01

0xc25b,	// (0x00027ee9) find_pinb_pane_g1_ParamLimits

0xc25b,	// (0x00027ee9) find_pinb_pane_g1

0xc273,	// (0x00027f01) find_pinb_pane_t1

0xc285,	// (0x00027f13) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x0002adbb) find_pinb_pane_t

0xc29a,	// (0x00027f28) input_focus_pane_cp01_ParamLimits

0xc29a,	// (0x00027f28) input_focus_pane_cp01

0x482a,	// (0x000204b8) cell_pinb_pane_ParamLimits

0x482a,	// (0x000204b8) cell_pinb_pane

0x4852,	// (0x000204e0) cell_pinb_pane_g1_ParamLimits

0x4852,	// (0x000204e0) cell_pinb_pane_g1

0x4867,	// (0x000204f5) cell_pinb_pane_g2_ParamLimits

0x4867,	// (0x000204f5) cell_pinb_pane_g2

0xc2a6,	// (0x00027f34) cell_pinb_pane_g3_ParamLimits

0xc2a6,	// (0x00027f34) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x0002adc0) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x0002adc0) cell_pinb_pane_g

0xbfc2,	// (0x00027c50) grid_highlight_pane_cp01

0x4873,	// (0x00020501) list_pinb_item_pane_ParamLimits

0x4873,	// (0x00020501) list_pinb_item_pane

0xbfc2,	// (0x00027c50) list_highlight_pane_cp02

0x4899,	// (0x00020527) list_pinb_item_pane_g1_ParamLimits

0x4899,	// (0x00020527) list_pinb_item_pane_g1

0x48a6,	// (0x00020534) list_pinb_item_pane_g2_ParamLimits

0x48a6,	// (0x00020534) list_pinb_item_pane_g2

0x48b2,	// (0x00020540) list_pinb_item_pane_g3_ParamLimits

0x48b2,	// (0x00020540) list_pinb_item_pane_g3

0x48c3,	// (0x00020551) list_pinb_item_pane_g4_ParamLimits

0x48c3,	// (0x00020551) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x0002adc7) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x0002adc7) list_pinb_item_pane_g

0x48cf,	// (0x0002055d) list_pinb_item_pane_t1_ParamLimits

0x48cf,	// (0x0002055d) list_pinb_item_pane_t1

0x3121,	// (0x0001edaf) calc_display_pane

0x313f,	// (0x0001edcd) calc_paper_pane

0x315b,	// (0x0001ede9) grid_calc_pane

0xbfc2,	// (0x00027c50) bg_list_pane_cp01

0x48e6,	// (0x00020574) clock_g1

0x48ee,	// (0x0002057c) clock_g2

0x0001,

0xf142,	// (0x0002add0) clock_g

0x48f8,	// (0x00020586) clock_t1_ParamLimits

0x48f8,	// (0x00020586) clock_t1

0x490d,	// (0x0002059b) clock_t2_ParamLimits

0x490d,	// (0x0002059b) clock_t2

0x491f,	// (0x000205ad) clock_t3_ParamLimits

0x491f,	// (0x000205ad) clock_t3

0x4931,	// (0x000205bf) clock_t4_ParamLimits

0x4931,	// (0x000205bf) clock_t4

0x4943,	// (0x000205d1) clock_t5_ParamLimits

0x4943,	// (0x000205d1) clock_t5

0x4958,	// (0x000205e6) clock_t6_ParamLimits

0x4958,	// (0x000205e6) clock_t6

0x496a,	// (0x000205f8) clock_t7_ParamLimits

0x496a,	// (0x000205f8) clock_t7

0x497c,	// (0x0002060a) clock_t8_ParamLimits

0x497c,	// (0x0002060a) clock_t8

0x4992,	// (0x00020620) clock_t9_ParamLimits

0x4992,	// (0x00020620) clock_t9

0x0008,

0xf147,	// (0x0002add5) clock_t_ParamLimits

0xf147,	// (0x0002add5) clock_t

0xc2b2,	// (0x00027f40) popup_clock_analogue_window_cp02

0xc2b2,	// (0x00027f40) popup_clock_digital_window_cp01

0xc2ba,	// (0x00027f48) listscroll_help_pane

0xbfc2,	// (0x00027c50) phob_pre_status_pane

0xc2c4,	// (0x00027f52) grid_qdial_pane

0xc22b,	// (0x00027eb9) listscroll_mce_pane

0xc22b,	// (0x00027eb9) bg_notes_pane

0xc2ce,	// (0x00027f5c) list_notes_pane

0x49a8,	// (0x00020636) scroll_pane_cp06

0xc2dc,	// (0x00027f6a) bg_calc_paper_pane

0x3187,	// (0x0001ee15) list_calc_pane

0xc2f0,	// (0x00027f7e) bg_calc_display_pane

0x31a1,	// (0x0001ee2f) calc_display_pane_t1

0x31b6,	// (0x0001ee44) calc_display_pane_t2

0x31cb,	// (0x0001ee59) calc_display_pane_t3

0x0002,

0xf15a,	// (0x0002ade8) calc_display_pane_t

0x31dd,	// (0x0001ee6b) cell_calc_pane_ParamLimits

0x31dd,	// (0x0001ee6b) cell_calc_pane

0xc2fc,	// (0x00027f8a) bg_calc_paper_pane_g1

0xc308,	// (0x00027f96) bg_calc_paper_pane_g2

0xc314,	// (0x00027fa2) bg_calc_paper_pane_g3

0xc320,	// (0x00027fae) bg_calc_paper_pane_g4

0xc32c,	// (0x00027fba) bg_calc_paper_pane_g5

0x49b7,	// (0x00020645) bg_calc_paper_pane_g6

0x49c8,	// (0x00020656) bg_calc_paper_pane_g7

0x49d9,	// (0x00020667) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x0002adef) bg_calc_paper_pane_g

0x49ea,	// (0x00020678) calc_bg_paper_pane_g9

0x49fb,	// (0x00020689) list_calc_item_pane_ParamLimits

0x49fb,	// (0x00020689) list_calc_item_pane

0xc338,	// (0x00027fc6) list_calc_item_pane_g1

0x320a,	// (0x0001ee98) list_calc_item_pane_t1_ParamLimits

0x320a,	// (0x0001ee98) list_calc_item_pane_t1

0x321c,	// (0x0001eeaa) list_calc_item_pane_t2_ParamLimits

0x321c,	// (0x0001eeaa) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x0002ae00) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x0002ae00) list_calc_item_pane_t

0xc345,	// (0x00027fd3) cell_calc_pane_g1

0xc34f,	// (0x00027fdd) grid_highlight_pane_cp02

0x4a2a,	// (0x000206b8) bg_calc_display_pane_g1

0x324c,	// (0x0001eeda) bg_calc_display_pane_g2

0xe456,	// (0x0002a0e4) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x0002ae0a) bg_calc_display_pane_g

0x3256,	// (0x0001eee4) cell_qdial_pane_ParamLimits

0x3256,	// (0x0001eee4) cell_qdial_pane

0x4a33,	// (0x000206c1) cell_qdial_pane_g1_ParamLimits

0x4a33,	// (0x000206c1) cell_qdial_pane_g1

0x4a40,	// (0x000206ce) cell_qdial_pane_g2_ParamLimits

0x4a40,	// (0x000206ce) cell_qdial_pane_g2

0xc371,	// (0x00027fff) cell_qdial_pane_g3_ParamLimits

0xc371,	// (0x00027fff) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x0002ae11) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x0002ae11) cell_qdial_pane_g

0x4a5e,	// (0x000206ec) cell_qdial_pane_t1_ParamLimits

0x4a5e,	// (0x000206ec) cell_qdial_pane_t1

0x4a76,	// (0x00020704) cell_qdial_pane_t2_ParamLimits

0x4a76,	// (0x00020704) cell_qdial_pane_t2

0x4a89,	// (0x00020717) cell_qdial_pane_t3_ParamLimits

0x4a89,	// (0x00020717) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x0002ae1a) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x0002ae1a) cell_qdial_pane_t

0xbfc2,	// (0x00027c50) grid_highlight_pane_cp04

0xc37d,	// (0x0002800b) thumbnail_qdial_pane_ParamLimits

0xc37d,	// (0x0002800b) thumbnail_qdial_pane

0xc3d9,	// (0x00028067) list_help_pane

0xc3e2,	// (0x00028070) scroll_pane_cp02

0x4a9c,	// (0x0002072a) help_list_pane_t1_ParamLimits

0x4a9c,	// (0x0002072a) help_list_pane_t1

0x326a,	// (0x0001eef8) bg_notes_pane_g2

0x3272,	// (0x0001ef00) bg_notes_pane_g3

0x327a,	// (0x0001ef08) notes_bg_pane_g1

0x3282,	// (0x0001ef10) notes_bg_pane_g4

0x328a,	// (0x0001ef18) notes_bg_pane_g5

0x3292,	// (0x0001ef20) notes_bg_pane_g6

0x329a,	// (0x0001ef28) notes_bg_pane_g7

0x32a2,	// (0x0001ef30) notes_bg_pane_g8

0x32aa,	// (0x0001ef38) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x0002ae38) notes_bg_pane_g

0x4acf,	// (0x0002075d) list_notes_text_pane_ParamLimits

0x4acf,	// (0x0002075d) list_notes_text_pane

0xc3eb,	// (0x00028079) list_notes_text_pane_g1

0x4af7,	// (0x00020785) list_notes_text_pane_t1

0x4b05,	// (0x00020793) listscroll_cale_week_pane

0x4b2a,	// (0x000207b8) bg_cale_heading_pane

0xc40e,	// (0x0002809c) bg_cale_pane_cp01

0x4b4c,	// (0x000207da) cale_week_corner_pane

0x4b66,	// (0x000207f4) cale_week_day_heading_pane

0x4b88,	// (0x00020816) cale_week_scroll_pane_g1

0x4ba5,	// (0x00020833) cale_week_scroll_pane_g2

0x4bb8,	// (0x00020846) cale_week_scroll_pane_g3

0x4bcb,	// (0x00020859) cale_week_scroll_pane_g4

0x4bde,	// (0x0002086c) cale_week_scroll_pane_g5

0x4bf1,	// (0x0002087f) cale_week_scroll_pane_g6

0x4c04,	// (0x00020892) cale_week_scroll_pane_g7

0x4c17,	// (0x000208a5) cale_week_scroll_pane_g8

0x4c2c,	// (0x000208ba) cale_week_scroll_pane_g9

0x4c3f,	// (0x000208cd) cale_week_scroll_pane_g10

0x4c52,	// (0x000208e0) cale_week_scroll_pane_g11

0x4c65,	// (0x000208f3) cale_week_scroll_pane_g12

0x4c7c,	// (0x0002090a) cale_week_scroll_pane_g13

0x4c97,	// (0x00020925) cale_week_scroll_pane_g14

0x4cb2,	// (0x00020940) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x0002ae47) cale_week_scroll_pane_g

0x4ccd,	// (0x0002095b) cale_week_time_pane

0x4ce2,	// (0x00020970) grid_cale_week_pane

0xc43e,	// (0x000280cc) scroll_pane_cp08

0x4d01,	// (0x0002098f) cell_cale_week_pane_ParamLimits

0x4d01,	// (0x0002098f) cell_cale_week_pane

0x4d63,	// (0x000209f1) cale_week_day_heading_pane_t1

0x4d9e,	// (0x00020a2c) cale_week_day_heading_pane_t2

0x4dd9,	// (0x00020a67) cale_week_day_heading_pane_t3

0x4e14,	// (0x00020aa2) cale_week_day_heading_pane_t4

0x4e4f,	// (0x00020add) cale_week_day_heading_pane_t5

0x4e8a,	// (0x00020b18) cale_week_day_heading_pane_t6

0x4ec5,	// (0x00020b53) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x0002ae66) cale_week_day_heading_pane_t

0xc45b,	// (0x000280e9) bg_cale_side_pane

0x32b2,	// (0x0001ef40) cale_week_time_pane_t1

0x32cc,	// (0x0001ef5a) cale_week_time_pane_t2

0x32e6,	// (0x0001ef74) cale_week_time_pane_t3

0x3300,	// (0x0001ef8e) cale_week_time_pane_t4

0x331a,	// (0x0001efa8) cale_week_time_pane_t5

0x3334,	// (0x0001efc2) cale_week_time_pane_t6

0x3354,	// (0x0001efe2) cale_week_time_pane_t7

0x3376,	// (0x0001f004) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x0002ae75) cale_week_time_pane_t

0x4f00,	// (0x00020b8e) cell_cale_week_pane_g2

0x4f13,	// (0x00020ba1) cell_cale_week_pane_g3_ParamLimits

0x4f13,	// (0x00020ba1) cell_cale_week_pane_g3

0xc469,	// (0x000280f7) grid_highlight_pane_cp07

0xc471,	// (0x000280ff) listscroll_gms_pane

0xc47b,	// (0x00028109) grid_gms_pane

0xc484,	// (0x00028112) listscroll_gms_pane_g1

0xc48c,	// (0x0002811a) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x0002ae86) listscroll_gms_pane_g

0x4f2b,	// (0x00020bb9) scroll_pane_cp010

0x4f36,	// (0x00020bc4) cell_gms_pane_ParamLimits

0x4f36,	// (0x00020bc4) cell_gms_pane

0x4f49,	// (0x00020bd7) cell_gms_pane_g1

0xc494,	// (0x00028122) cell_gms_pane_g2

0xc49c,	// (0x0002812a) cell_gms_pane_g3

0xc4a5,	// (0x00028133) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x0002ae8b) cell_gms_pane_g

0xc4ae,	// (0x0002813c) grid_highlight_pane_cp09

0x7474,	// (0x00023102) phob_pre_status_pane_g1

0x747c,	// (0x0002310a) phob_pre_status_pane_g2

0x7484,	// (0x00023112) phob_pre_status_pane_g3

0x748c,	// (0x0002311a) phob_pre_status_pane_g4

0x0004,

0xf5ec,	// (0x0002b27a) phob_pre_status_pane_g

0x749c,	// (0x0002312a) phob_pre_status_pane_t1

0x74ac,	// (0x0002313a) phob_pre_status_pane_t2

0x74bc,	// (0x0002314a) phob_pre_status_pane_t3

0x0002,

0xf5f7,	// (0x0002b285) phob_pre_status_pane_t

0xbfc2,	// (0x00027c50) bg_list_pane_cp05

0x33a2,	// (0x0001f030) grid_vorec_pane

0x33ae,	// (0x0001f03c) vorec_t1

0x33bc,	// (0x0001f04a) vorec_t2

0x33ca,	// (0x0001f058) vorec_t3

0x33d8,	// (0x0001f066) vorec_t4

0x33e6,	// (0x0001f074) vorec_t5

0x33f4,	// (0x0001f082) vorec_t6

0x0006,

0xf206,	// (0x0002ae94) vorec_t

0x3410,	// (0x0001f09e) wait_bar_pane_cp01

0x4f51,	// (0x00020bdf) cell_vorec_pane_ParamLimits

0x4f51,	// (0x00020bdf) cell_vorec_pane

0xc4b6,	// (0x00028144) cell_vorec_pane_g1

0xbfc2,	// (0x00027c50) grid_highlight_pane_cp05

0x4f74,	// (0x00020c02) cams_zoom_pane

0x4f80,	// (0x00020c0e) image_vga_pane

0x4f8f,	// (0x00020c1d) main_camera_pane_g1

0x4f9d,	// (0x00020c2b) main_camera_pane_g2

0x4fa9,	// (0x00020c37) main_camera_pane_g3

0x4fb5,	// (0x00020c43) main_camera_pane_g4

0x4fc1,	// (0x00020c4f) main_camera_pane_g5

0x4fcd,	// (0x00020c5b) main_camera_pane_g6

0x4fd9,	// (0x00020c67) main_camera_pane_g7

0x0007,

0xf215,	// (0x0002aea3) main_camera_pane_g

0x4fe5,	// (0x00020c73) main_camera_pane_t1

0x4ff7,	// (0x00020c85) main_camera_pane_t2

0x0001,

0xf226,	// (0x0002aeb4) main_camera_pane_t

0x5018,	// (0x00020ca6) cams_zoom_pane_cp_ParamLimits

0x5018,	// (0x00020ca6) cams_zoom_pane_cp

0x503c,	// (0x00020cca) image_cif_pane_ParamLimits

0x503c,	// (0x00020cca) image_cif_pane

0x505a,	// (0x00020ce8) image_subqcif_pane

0x5062,	// (0x00020cf0) main_video_pane_g1_ParamLimits

0x5062,	// (0x00020cf0) main_video_pane_g1

0x5082,	// (0x00020d10) main_video_pane_g2_ParamLimits

0x5082,	// (0x00020d10) main_video_pane_g2

0x50b2,	// (0x00020d40) main_video_pane_g3_ParamLimits

0x50b2,	// (0x00020d40) main_video_pane_g3

0x50db,	// (0x00020d69) main_video_pane_g4_ParamLimits

0x50db,	// (0x00020d69) main_video_pane_g4

0x5104,	// (0x00020d92) main_video_pane_g5_ParamLimits

0x5104,	// (0x00020d92) main_video_pane_g5

0xc4cc,	// (0x0002815a) main_video_pane_g6_ParamLimits

0xc4cc,	// (0x0002815a) main_video_pane_g6

0x0006,

0xf22b,	// (0x0002aeb9) main_video_pane_g_ParamLimits

0xf22b,	// (0x0002aeb9) main_video_pane_g

0x5126,	// (0x00020db4) main_video_pane_t1_ParamLimits

0x5126,	// (0x00020db4) main_video_pane_t1

0xc4e6,	// (0x00028174) cams_zoom_pane_g1

0xc4ef,	// (0x0002817d) cams_zoom_pane_g2

0xc4f8,	// (0x00028186) cams_zoom_pane_g3

0xc501,	// (0x0002818f) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x0002aec8) cams_zoom_pane_g

0x5170,	// (0x00020dfe) grid_cams_pane

0x517e,	// (0x00020e0c) linegrid_cams_pane

0x518c,	// (0x00020e1a) cell_cams_pane_ParamLimits

0x518c,	// (0x00020e1a) cell_cams_pane

0xc50a,	// (0x00028198) cams_burst_image_pane

0xc512,	// (0x000281a0) cell_cams_pane_g1

0xbfc2,	// (0x00027c50) grid_highlight_pane_cp03

0xc345,	// (0x00027fd3) mp_bg_pane_g1

0xbfc2,	// (0x00027c50) bg_list_pane_cp03

0xe1bd,	// (0x00029e4b) bg_mp_pane

0xe1c5,	// (0x00029e53) grid_mp_pane

0xe1cd,	// (0x00029e5b) media_player_g1

0xe1d5,	// (0x00029e63) media_player_t1

0xe1e3,	// (0x00029e71) media_player_t2

0xe1f1,	// (0x00029e7f) media_player_t3

0xe1ff,	// (0x00029e8d) media_player_t4

0xe20d,	// (0x00029e9b) media_player_t5

0xe21b,	// (0x00029ea9) media_player_t6

0xe229,	// (0x00029eb7) media_player_t7

0x0006,

0xf5d6,	// (0x0002b264) media_player_t

0xe237,	// (0x00029ec5) wait_bar_pane_cp02

0xf5bb,	// (0x0002b249) main_usb_pane_t

0x746b,	// (0x000230f9) cell_mp_pane

0xc345,	// (0x00027fd3) cell_mp_pane_g1

0xbfc2,	// (0x00027c50) grid_highlight_pane_cp06

0xc51a,	// (0x000281a8) grid_skin_colour_pane

0xc522,	// (0x000281b0) list_highlight_pane_cp03

0x5296,	// (0x00020f24) skin_g1

0xc52a,	// (0x000281b8) skin_t1

0xc539,	// (0x000281c7) skin_t2

0x0001,

0xf26f,	// (0x0002aefd) skin_t

0x52a0,	// (0x00020f2e) cell_skin_colour_pane_ParamLimits

0x52a0,	// (0x00020f2e) cell_skin_colour_pane

0xc547,	// (0x000281d5) cell_skin_colour_pane_g1

0x5324,	// (0x00020fb2) call_video_g1_ParamLimits

0x5324,	// (0x00020fb2) call_video_g1

0x5334,	// (0x00020fc2) call_video_g2_ParamLimits

0x5334,	// (0x00020fc2) call_video_g2

0x0001,

0xf274,	// (0x0002af02) call_video_g_ParamLimits

0xf274,	// (0x0002af02) call_video_g

0x538e,	// (0x0002101c) call_video_uplink_pane_cp1_ParamLimits

0x538e,	// (0x0002101c) call_video_uplink_pane_cp1

0xc559,	// (0x000281e7) call_video_uplink_pane_cp2

0x545a,	// (0x000210e8) video_down_crop_pane_ParamLimits

0x545a,	// (0x000210e8) video_down_crop_pane

0x5558,	// (0x000211e6) video_down_pane_ParamLimits

0x5558,	// (0x000211e6) video_down_pane

0xc561,	// (0x000281ef) video_down_subqcif_pane_ParamLimits

0xc561,	// (0x000281ef) video_down_subqcif_pane

0xc579,	// (0x00028207) video_down_subqcif_pane_cp_ParamLimits

0xc579,	// (0x00028207) video_down_subqcif_pane_cp

0xc59f,	// (0x0002822d) im_reading_pane_ParamLimits

0xc59f,	// (0x0002822d) im_reading_pane

0x567a,	// (0x00021308) im_writing_pane_ParamLimits

0x567a,	// (0x00021308) im_writing_pane

0x5698,	// (0x00021326) im_reading_pane_t1

0xc5b9,	// (0x00028247) list_im_pane

0xc5ca,	// (0x00028258) scroll_pane_cp07

0x56ec,	// (0x0002137a) im_writing_pane_t1_ParamLimits

0x56ec,	// (0x0002137a) im_writing_pane_t1

0xc5e3,	// (0x00028271) im_writing_pane_t2_ParamLimits

0xc5e3,	// (0x00028271) im_writing_pane_t2

0x0001,

0xf27e,	// (0x0002af0c) im_writing_pane_t_ParamLimits

0xf27e,	// (0x0002af0c) im_writing_pane_t

0xbfc2,	// (0x00027c50) input_focus_pane_cp04

0xbfc2,	// (0x00027c50) input_focus_pane_cp05

0x5701,	// (0x0002138f) list_im_single_pane_ParamLimits

0x5701,	// (0x0002138f) list_im_single_pane

0x5725,	// (0x000213b3) list_single_im_pane_t1

0x742f,	// (0x000230bd) blid_accuracy_pane

0x7437,	// (0x000230c5) blid_compass_pane

0x7441,	// (0x000230cf) main_location_t1

0x744f,	// (0x000230dd) main_location_t2

0x745d,	// (0x000230eb) main_location_t3

0x0002,

0xf5e5,	// (0x0002b273) main_location_t

0xbfc2,	// (0x00027c50) aid_levels_location

0xc345,	// (0x00027fd3) blid_accuracy_pane_g1

0xc345,	// (0x00027fd3) blid_accuracy_pane_g2

0x0001,

0xf2e0,	// (0x0002af6e) blid_accuracy_pane_g

0xc62b,	// (0x000282b9) wml_content_pane

0xc669,	// (0x000282f7) wml_button_pane_ParamLimits

0xc669,	// (0x000282f7) wml_button_pane

0x5734,	// (0x000213c2) wml_list_single_large_pane_ParamLimits

0x5734,	// (0x000213c2) wml_list_single_large_pane

0x575e,	// (0x000213ec) wml_list_single_medium_pane_ParamLimits

0x575e,	// (0x000213ec) wml_list_single_medium_pane

0x578f,	// (0x0002141d) wml_list_single_small_pane_ParamLimits

0x578f,	// (0x0002141d) wml_list_single_small_pane

0xc67d,	// (0x0002830b) wml_selection_box_pane_ParamLimits

0xc67d,	// (0x0002830b) wml_selection_box_pane

0xc690,	// (0x0002831e) wml_list_single_pane_t1

0xc69f,	// (0x0002832d) wml_list_single_medium_pane_t1

0xc6ae,	// (0x0002833c) wml_list_single_large_pane_t1

0xc6bd,	// (0x0002834b) input_focus_pane_cp02_ParamLimits

0xc6bd,	// (0x0002834b) input_focus_pane_cp02

0xc6d0,	// (0x0002835e) wml_selection_box_pane_g1

0xc6d9,	// (0x00028367) wml_selection_box_pane_t1_ParamLimits

0xc6d9,	// (0x00028367) wml_selection_box_pane_t1

0xc22b,	// (0x00027eb9) bg_wml_button_pane_ParamLimits

0xc22b,	// (0x00027eb9) bg_wml_button_pane

0xc6f1,	// (0x0002837f) wml_button_pane_g1

0xc6f9,	// (0x00028387) wml_button_pane_t1

0xc6f1,	// (0x0002837f) wml_button_bg_pane_g1

0xc709,	// (0x00028397) wml_button_bg_pane_g2

0xc711,	// (0x0002839f) wml_button_bg_pane_g3

0xc719,	// (0x000283a7) wml_button_bg_pane_g4

0xc721,	// (0x000283af) wml_button_bg_pane_g5

0xc729,	// (0x000283b7) wml_button_bg_pane_g6

0xc731,	// (0x000283bf) wml_button_bg_pane_g7

0xc739,	// (0x000283c7) wml_button_bg_pane_g8

0xc741,	// (0x000283cf) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x0002af11) wml_button_bg_pane_g

0x57c9,	// (0x00021457) bg_list_pane_cp02

0xc749,	// (0x000283d7) mce_header_pane_ParamLimits

0xc749,	// (0x000283d7) mce_header_pane

0xc75f,	// (0x000283ed) mce_icon_pane

0xc75f,	// (0x000283ed) mce_image_pane

0xc768,	// (0x000283f6) mce_text_pane_ParamLimits

0xc768,	// (0x000283f6) mce_text_pane

0x57d3,	// (0x00021461) scroll_pane_cp03

0xc661,	// (0x000282ef) scroll_pane_cp04

0xc77b,	// (0x00028409) scroll_pane_cp05_ParamLimits

0xc77b,	// (0x00028409) scroll_pane_cp05

0x57dd,	// (0x0002146b) mce_header_field_pane_ParamLimits

0x57dd,	// (0x0002146b) mce_header_field_pane

0x57fd,	// (0x0002148b) mce_header_field_pane_2_ParamLimits

0x57fd,	// (0x0002148b) mce_header_field_pane_2

0x5813,	// (0x000214a1) mce_header_field_pane_3

0x581b,	// (0x000214a9) list_single_mce_message_pane_ParamLimits

0x581b,	// (0x000214a9) list_single_mce_message_pane

0x5846,	// (0x000214d4) list_single_mce_smart_pane_ParamLimits

0x5846,	// (0x000214d4) list_single_mce_smart_pane

0xc787,	// (0x00028415) input_focus_pane_cp03

0xc790,	// (0x0002841e) list_header_data_pane

0x587c,	// (0x0002150a) mce_header_field_pane_t1

0x588a,	// (0x00021518) list_single_mce_header_pane_ParamLimits

0x588a,	// (0x00021518) list_single_mce_header_pane

0xc798,	// (0x00028426) list_single_mce_header_pane_t1

0xc7a7,	// (0x00028435) list_single_mce_message_pane_g1

0xc7af,	// (0x0002843d) list_single_mce_message_pane_t1

0x58dc,	// (0x0002156a) bg_cale_heading_pane_cp01_ParamLimits

0x58dc,	// (0x0002156a) bg_cale_heading_pane_cp01

0xc7bd,	// (0x0002844b) bg_cale_pane_cp02_ParamLimits

0xc7bd,	// (0x0002844b) bg_cale_pane_cp02

0x591f,	// (0x000215ad) cale_month_corner_pane

0x5939,	// (0x000215c7) cale_month_day_heading_pane_ParamLimits

0x5939,	// (0x000215c7) cale_month_day_heading_pane

0x5994,	// (0x00021622) cale_month_pane_g1_ParamLimits

0x5994,	// (0x00021622) cale_month_pane_g1

0x59cc,	// (0x0002165a) cale_month_pane_g2_ParamLimits

0x59cc,	// (0x0002165a) cale_month_pane_g2

0x59f5,	// (0x00021683) cale_month_pane_g3_ParamLimits

0x59f5,	// (0x00021683) cale_month_pane_g3

0x5a41,	// (0x000216cf) cale_month_pane_g4_ParamLimits

0x5a41,	// (0x000216cf) cale_month_pane_g4

0x5a8d,	// (0x0002171b) cale_month_pane_g5_ParamLimits

0x5a8d,	// (0x0002171b) cale_month_pane_g5

0x5ad9,	// (0x00021767) cale_month_pane_g6_ParamLimits

0x5ad9,	// (0x00021767) cale_month_pane_g6

0x5b25,	// (0x000217b3) cale_month_pane_g7_ParamLimits

0x5b25,	// (0x000217b3) cale_month_pane_g7

0x5b89,	// (0x00021817) cale_month_pane_g8_ParamLimits

0x5b89,	// (0x00021817) cale_month_pane_g8

0x5bed,	// (0x0002187b) cale_month_pane_g9_ParamLimits

0x5bed,	// (0x0002187b) cale_month_pane_g9

0x5c4b,	// (0x000218d9) cale_month_pane_g10_ParamLimits

0x5c4b,	// (0x000218d9) cale_month_pane_g10

0x5ca7,	// (0x00021935) cale_month_pane_g11_ParamLimits

0x5ca7,	// (0x00021935) cale_month_pane_g11

0x5cfb,	// (0x00021989) cale_month_pane_g12_ParamLimits

0x5cfb,	// (0x00021989) cale_month_pane_g12

0x5d51,	// (0x000219df) cale_month_pane_g13_ParamLimits

0x5d51,	// (0x000219df) cale_month_pane_g13

0x000c,

0xf296,	// (0x0002af24) cale_month_pane_g_ParamLimits

0xf296,	// (0x0002af24) cale_month_pane_g

0x5da7,	// (0x00021a35) cale_month_week_pane

0x5dbc,	// (0x00021a4a) grid_cale_month_pane_ParamLimits

0x5dbc,	// (0x00021a4a) grid_cale_month_pane

0x5e0a,	// (0x00021a98) cale_month_day_heading_pane_t1

0x5e90,	// (0x00021b1e) cale_month_day_heading_pane_t2

0x5f21,	// (0x00021baf) cale_month_day_heading_pane_t3

0x5fb2,	// (0x00021c40) cale_month_day_heading_pane_t4

0x6043,	// (0x00021cd1) cale_month_day_heading_pane_t5

0x60d4,	// (0x00021d62) cale_month_day_heading_pane_t6

0x6165,	// (0x00021df3) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x0002af3f) cale_month_day_heading_pane_t

0xc45b,	// (0x000280e9) bg_cale_side_pane_cp01

0x620e,	// (0x00021e9c) cale_month_week_pane_t1

0x6227,	// (0x00021eb5) cale_month_week_pane_t2

0x6240,	// (0x00021ece) cale_month_week_pane_t3

0x6259,	// (0x00021ee7) cale_month_week_pane_t4

0x6272,	// (0x00021f00) cale_month_week_pane_t5

0x6293,	// (0x00021f21) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x0002af4e) cale_month_week_pane_t

0x62b4,	// (0x00021f42) cell_cale_month_pane_ParamLimits

0x62b4,	// (0x00021f42) cell_cale_month_pane

0x3418,	// (0x0001f0a6) cell_cale_month_pane_g1

0x3424,	// (0x0001f0b2) cell_cale_month_pane_t1_ParamLimits

0x3424,	// (0x0001f0b2) cell_cale_month_pane_t1

0xc469,	// (0x000280f7) grid_highlight_pane_cp08

0xc345,	// (0x00027fd3) main_smil_g1

0x6400,	// (0x0002208e) smil_status_pane

0xc7fc,	// (0x0002848a) smil_text_pane

0xe0dd,	// (0x00029d6b) bg_popup_call3_rect_pane_g8

0xe0e5,	// (0x00029d73) bg_popup_call3_rect_pane_g9

0x0008,

0xf579,	// (0x0002b207) bg_popup_call3_rect_pane_g

0xe32c,	// (0x00029fba) smil_status_volume_pane_g1

0xc806,	// (0x00028494) smil_status_pane_t1

0x36ea,	// (0x0001f378) volume_smil_pane

0xc81d,	// (0x000284ab) list_smil_text_pane

0x6413,	// (0x000220a1) scroll_pane_cp011

0x641e,	// (0x000220ac) smil_text_list_pane_t1_ParamLimits

0x641e,	// (0x000220ac) smil_text_list_pane_t1

0x3444,	// (0x0001f0d2) aid_volume_smil_ParamLimits

0x3444,	// (0x0001f0d2) aid_volume_smil

0xc345,	// (0x00027fd3) smil_volume_pane_g1

0xc345,	// (0x00027fd3) smil_volume_pane_g2

0x0001,

0xf2e0,	// (0x0002af6e) smil_volume_pane_g

0x4b05,	// (0x00020793) listscroll_cale_day_pane

0xc827,	// (0x000284b5) bg_cale_pane

0xc83f,	// (0x000284cd) list_cale_pane

0xc862,	// (0x000284f0) scroll_pane_cp09

0xc873,	// (0x00028501) cale_bg_pane_g1

0xc87b,	// (0x00028509) cale_bg_pane_g2

0xc883,	// (0x00028511) cale_bg_pane_g3

0xc88b,	// (0x00028519) cale_bg_pane_g4

0xc893,	// (0x00028521) cale_bg_pane_g5

0xc89b,	// (0x00028529) cale_bg_pane_g6

0xc8a3,	// (0x00028531) cale_bg_pane_g7

0xc8ab,	// (0x00028539) cale_bg_pane_g8

0xc8b3,	// (0x00028541) cale_bg_pane_g9

0x0008,

0xf2e5,	// (0x0002af73) cale_bg_pane_g

0x6496,	// (0x00022124) list_cale_time_pane_ParamLimits

0x6496,	// (0x00022124) list_cale_time_pane

0xc8bb,	// (0x00028549) list_cale_time_pane_g1_ParamLimits

0xc8bb,	// (0x00028549) list_cale_time_pane_g1

0xc8c7,	// (0x00028555) list_cale_time_pane_g2_ParamLimits

0xc8c7,	// (0x00028555) list_cale_time_pane_g2

0x64b2,	// (0x00022140) list_cale_time_pane_g3_ParamLimits

0x64b2,	// (0x00022140) list_cale_time_pane_g3

0x64c0,	// (0x0002214e) list_cale_time_pane_g4_ParamLimits

0x64c0,	// (0x0002214e) list_cale_time_pane_g4

0x64ce,	// (0x0002215c) list_cale_time_pane_g5_ParamLimits

0x64ce,	// (0x0002215c) list_cale_time_pane_g5

0x0005,

0xf2f8,	// (0x0002af86) list_cale_time_pane_g_ParamLimits

0xf2f8,	// (0x0002af86) list_cale_time_pane_g

0xc8e1,	// (0x0002856f) list_cale_time_pane_t1_ParamLimits

0xc8e1,	// (0x0002856f) list_cale_time_pane_t1

0xc909,	// (0x00028597) list_cale_time_pane_t2_ParamLimits

0xc909,	// (0x00028597) list_cale_time_pane_t2

0x67f1,	// (0x0002247f) aid_blid_cardinal_pane

0x6833,	// (0x000224c1) compass_pane_t4

0xc931,	// (0x000285bf) list_cale_time_pane_t4_ParamLimits

0xc931,	// (0x000285bf) list_cale_time_pane_t4

0x6841,	// (0x000224cf) compass_pane_t5

0x6851,	// (0x000224df) compass_pane_t6

0x685f,	// (0x000224ed) compass_pane_t7

0xcd86,	// (0x00028a14) navi_pane_cc_t1

0xcedb,	// (0x00028b69) aid_phob_thumbnail_center_pane

0x6f35,	// (0x00022bc3) main_postcard_pane_g4_ParamLimits

0x0002,

0xf305,	// (0x0002af93) list_cale_time_pane_t_ParamLimits

0xf305,	// (0x0002af93) list_cale_time_pane_t

0xbc19,	// (0x000278a7) bg_popup_window_pane_cp02_ParamLimits

0xbc19,	// (0x000278a7) bg_popup_window_pane_cp02

0xc959,	// (0x000285e7) heading_pane_cp01_ParamLimits

0xc959,	// (0x000285e7) heading_pane_cp01

0xc965,	// (0x000285f3) loc_req_pane_ParamLimits

0xc965,	// (0x000285f3) loc_req_pane

0xc975,	// (0x00028603) loc_type_pane_ParamLimits

0xc975,	// (0x00028603) loc_type_pane

0xc987,	// (0x00028615) loc_type_pane_t1_ParamLimits

0xc987,	// (0x00028615) loc_type_pane_t1

0xc999,	// (0x00028627) loc_type_pane_t2_ParamLimits

0xc999,	// (0x00028627) loc_type_pane_t2

0xc9ab,	// (0x00028639) loc_type_pane_t3_ParamLimits

0xc9ab,	// (0x00028639) loc_type_pane_t3

0x0002,

0xf30c,	// (0x0002af9a) loc_type_pane_t_ParamLimits

0xf30c,	// (0x0002af9a) loc_type_pane_t

0xc9bd,	// (0x0002864b) list_loc_req_pane

0xc9c7,	// (0x00028655) scroll_pane_cp012

0x64dc,	// (0x0002216a) list_single_loc_request_popup_menu_pane_ParamLimits

0x64dc,	// (0x0002216a) list_single_loc_request_popup_menu_pane

0xc9d2,	// (0x00028660) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xc9d2,	// (0x00028660) list_single_loc_request_popup_menu_pane_g1

0xc9de,	// (0x0002866c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xc9de,	// (0x0002866c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf313,	// (0x0002afa1) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf313,	// (0x0002afa1) list_single_loc_request_popup_menu_pane_g

0xc9ea,	// (0x00028678) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xc9ea,	// (0x00028678) list_single_loc_request_popup_menu_pane_t1

0x64ee,	// (0x0002217c) bg_popup_window_pane_cp03_ParamLimits

0x64ee,	// (0x0002217c) bg_popup_window_pane_cp03

0x64fc,	// (0x0002218a) heading_loc_req_pane_ParamLimits

0x64fc,	// (0x0002218a) heading_loc_req_pane

0x6508,	// (0x00022196) popup_dyc_status_message_window_g1_ParamLimits

0x6508,	// (0x00022196) popup_dyc_status_message_window_g1

0x6514,	// (0x000221a2) popup_dyc_status_message_window_t1_ParamLimits

0x6514,	// (0x000221a2) popup_dyc_status_message_window_t1

0x6526,	// (0x000221b4) popup_dyc_status_message_window_t2_ParamLimits

0x6526,	// (0x000221b4) popup_dyc_status_message_window_t2

0x6538,	// (0x000221c6) popup_dyc_status_message_window_t3_ParamLimits

0x6538,	// (0x000221c6) popup_dyc_status_message_window_t3

0x0002,

0xf318,	// (0x0002afa6) popup_dyc_status_message_window_t_ParamLimits

0xf318,	// (0x0002afa6) popup_dyc_status_message_window_t

0xbfc2,	// (0x00027c50) bg_heading_pane_cp01

0xca00,	// (0x0002868e) heading_loc_req_pane_g1

0xca08,	// (0x00028696) heading_loc_req_pane_g2

0xca10,	// (0x0002869e) heading_loc_req_pane_g3

0x0002,

0xf31f,	// (0x0002afad) heading_loc_req_pane_g

0xca18,	// (0x000286a6) heading_loc_req_pane_t1

0xca27,	// (0x000286b5) bg_popup_sub_pane_cp01_ParamLimits

0xca27,	// (0x000286b5) bg_popup_sub_pane_cp01

0xca35,	// (0x000286c3) popup_cale_events_window_g1_ParamLimits

0xca35,	// (0x000286c3) popup_cale_events_window_g1

0xca55,	// (0x000286e3) popup_cale_events_window_g2_ParamLimits

0xca55,	// (0x000286e3) popup_cale_events_window_g2

0x0001,

0xf353,	// (0x0002afe1) popup_cale_events_window_g_ParamLimits

0xf353,	// (0x0002afe1) popup_cale_events_window_g

0xca75,	// (0x00028703) popup_cale_events_window_t1_ParamLimits

0xca75,	// (0x00028703) popup_cale_events_window_t1

0xca87,	// (0x00028715) popup_cale_events_window_t2_ParamLimits

0xca87,	// (0x00028715) popup_cale_events_window_t2

0xcac5,	// (0x00028753) popup_cale_events_window_t3_ParamLimits

0xcac5,	// (0x00028753) popup_cale_events_window_t3

0xcaff,	// (0x0002878d) popup_cale_events_window_t4_ParamLimits

0xcaff,	// (0x0002878d) popup_cale_events_window_t4

0x0003,

0xf358,	// (0x0002afe6) popup_cale_events_window_t_ParamLimits

0xf358,	// (0x0002afe6) popup_cale_events_window_t

0x6631,	// (0x000222bf) call_type_pane

0xcbaa,	// (0x00028838) popup_call_status_window_g1

0x663d,	// (0x000222cb) popup_call_status_window_g2

0x6649,	// (0x000222d7) popup_call_status_window_g3

0x0002,

0xf361,	// (0x0002afef) popup_call_status_window_g

0xcb35,	// (0x000287c3) call_type_pane_g1

0xcb3e,	// (0x000287cc) call_type_pane_g2

0x0001,

0xf368,	// (0x0002aff6) call_type_pane_g

0xbfc2,	// (0x00027c50) bg_popup_sub_pane_cp02

0xcb47,	// (0x000287d5) listscroll_popup_wml_pane

0xcb4f,	// (0x000287dd) list_wml_pane

0xcb59,	// (0x000287e7) scroll_pane_cp013

0xcb64,	// (0x000287f2) list_single_graphic_popup_wml_pane_ParamLimits

0xcb64,	// (0x000287f2) list_single_graphic_popup_wml_pane

0xc345,	// (0x00027fd3) list_single_graphic_popup_wml_pane_g1

0xcb78,	// (0x00028806) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf36d,	// (0x0002affb) list_single_graphic_popup_wml_pane_g

0xcb80,	// (0x0002880e) list_single_graphic_popup_wml_pane_t1

0xcb96,	// (0x00028824) aid_call_pane

0xc223,	// (0x00027eb1) popup_clock_analogue_window_g1

0xc223,	// (0x00027eb1) popup_clock_analogue_window_g2

0x3466,	// (0x0001f0f4) popup_clock_analogue_window_g3

0x3466,	// (0x0001f0f4) popup_clock_analogue_window_g4

0xc345,	// (0x00027fd3) popup_clock_analogue_window_g5

0x0004,

0xf372,	// (0x0002b000) popup_clock_analogue_window_g

0x346e,	// (0x0001f0fc) popup_clock_analogue_window_t1

0x347c,	// (0x0001f10a) clock_digital_number_pane_ParamLimits

0x347c,	// (0x0001f10a) clock_digital_number_pane

0x3488,	// (0x0001f116) clock_digital_number_pane_cp02_ParamLimits

0x3488,	// (0x0001f116) clock_digital_number_pane_cp02

0x3494,	// (0x0001f122) clock_digital_number_pane_cp03_ParamLimits

0x3494,	// (0x0001f122) clock_digital_number_pane_cp03

0x34a0,	// (0x0001f12e) clock_digital_number_pane_cp04_ParamLimits

0x34a0,	// (0x0001f12e) clock_digital_number_pane_cp04

0x34b0,	// (0x0001f13e) clock_digital_separator_pane_ParamLimits

0x34b0,	// (0x0001f13e) clock_digital_separator_pane

0x34bc,	// (0x0001f14a) popup_clock_digital_window_t1

0xc345,	// (0x00027fd3) clock_digital_number_pane_g1

0xc345,	// (0x00027fd3) clock_digital_number_pane_g2

0x0001,

0xf2e0,	// (0x0002af6e) clock_digital_number_pane_g

0xc345,	// (0x00027fd3) clock_digital_separator_pane_g1

0xc345,	// (0x00027fd3) clock_digital_separator_pane_g2

0x0001,

0xf2e0,	// (0x0002af6e) clock_digital_separator_pane_g

0xbfc2,	// (0x00027c50) bg_popup_window_pane_cp04

0xcbb8,	// (0x00028846) heading_pane_cp03

0xcbc0,	// (0x0002884e) listscroll_popup_gms_pane

0xcbc8,	// (0x00028856) grid_large_graphic_popup_pane

0xcbd2,	// (0x00028860) listscroll_popup_gms_pane_g1

0xcbda,	// (0x00028868) listscroll_popup_gms_pane_g2

0x0001,

0xf37d,	// (0x0002b00b) listscroll_popup_gms_pane_g

0xc661,	// (0x000282ef) scroll_pane_cp014

0x6655,	// (0x000222e3) cell_large_graphic_popup_pane_ParamLimits

0x6655,	// (0x000222e3) cell_large_graphic_popup_pane

0x666d,	// (0x000222fb) cell_large_graphic_popup_pane_g1_ParamLimits

0x666d,	// (0x000222fb) cell_large_graphic_popup_pane_g1

0xcbe2,	// (0x00028870) cell_large_graphic_popup_pane_g2_ParamLimits

0xcbe2,	// (0x00028870) cell_large_graphic_popup_pane_g2

0xcbee,	// (0x0002887c) cell_large_graphic_popup_pane_g3_ParamLimits

0xcbee,	// (0x0002887c) cell_large_graphic_popup_pane_g3

0xcbfb,	// (0x00028889) cell_large_graphic_popup_pane_g4_ParamLimits

0xcbfb,	// (0x00028889) cell_large_graphic_popup_pane_g4

0x0003,

0xf382,	// (0x0002b010) cell_large_graphic_popup_pane_g_ParamLimits

0xf382,	// (0x0002b010) cell_large_graphic_popup_pane_g

0xcc0b,	// (0x00028899) grid_highlight_pane_cp010

0xc345,	// (0x00027fd3) bg_popup_call_pane_g1

0xcc15,	// (0x000288a3) list_single_graphic_popup_conf_pane_ParamLimits

0xcc15,	// (0x000288a3) list_single_graphic_popup_conf_pane

0xcc28,	// (0x000288b6) list_highlight_pane_cp01

0xcc31,	// (0x000288bf) list_single_graphic_popup_conf_pane_g1

0xcc39,	// (0x000288c7) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf38b,	// (0x0002b019) list_single_graphic_popup_conf_pane_g

0xcc41,	// (0x000288cf) list_single_graphic_popup_conf_pane_t1

0xcc4f,	// (0x000288dd) linegrid_cams_pane_g1

0x6679,	// (0x00022307) linegrid_cams_pane_g2

0xc49c,	// (0x0002812a) linegrid_cams_pane_g3

0xcc58,	// (0x000288e6) linegrid_cams_pane_g4

0x6682,	// (0x00022310) linegrid_cams_pane_g5

0x668b,	// (0x00022319) linegrid_cams_pane_g6

0xc4a5,	// (0x00028133) linegrid_cams_pane_g7

0x0006,

0xf390,	// (0x0002b01e) linegrid_cams_pane_g

0xcc61,	// (0x000288ef) popup_clock_analogue_window

0xcc61,	// (0x000288ef) popup_clock_digital_window

0xbfc2,	// (0x00027c50) popup_phob_thumbnail_window

0xc345,	// (0x00027fd3) call_video_uplink_pane_g1

0xcc6a,	// (0x000288f8) call_video_uplink_pane_g2

0x0001,

0xf39f,	// (0x0002b02d) call_video_uplink_pane_g

0xcc72,	// (0x00028900) video_uplink_pane

0xcc7a,	// (0x00028908) mce_image_pane_g1

0x6694,	// (0x00022322) mce_image_pane_g2

0x669e,	// (0x0002232c) mce_image_pane_g3

0x66a6,	// (0x00022334) mce_image_pane_g4

0x66ae,	// (0x0002233c) mce_image_pane_g5

0x0004,

0xf3a4,	// (0x0002b032) mce_image_pane_g

0xcc84,	// (0x00028912) control_top_pane_stacon_cp01_ParamLimits

0xcc84,	// (0x00028912) control_top_pane_stacon_cp01

0xcc98,	// (0x00028926) uni_indicator_pane_stacon_cp01_ParamLimits

0xcc98,	// (0x00028926) uni_indicator_pane_stacon_cp01

0xcca9,	// (0x00028937) bg_popup_sub_pane_cp03

0xccb3,	// (0x00028941) chi_dic_find_pane

0x66b6,	// (0x00022344) listscroll_chi_dic_pane

0xccbb,	// (0x00028949) main_pane_chidic_g1

0xccc3,	// (0x00028951) chi_dic_find_pane_t1

0xccd1,	// (0x0002895f) find_chidic_pane

0xccda,	// (0x00028968) chi_dic_list_pane_ParamLimits

0xccda,	// (0x00028968) chi_dic_list_pane

0xcceb,	// (0x00028979) scroll_pane_cp020

0xccf3,	// (0x00028981) find_chidic_pane_t1

0xbfc2,	// (0x00027c50) input_focus_pane_cp06

0x66ca,	// (0x00022358) list_chi_dic_pane_ParamLimits

0x66ca,	// (0x00022358) list_chi_dic_pane

0x66e4,	// (0x00022372) list_chi_dic_pane_t1_ParamLimits

0x66e4,	// (0x00022372) list_chi_dic_pane_t1

0xbfc2,	// (0x00027c50) list_highlight_pane_cp020

0xcd02,	// (0x00028990) bg_cale_heading_pane_g1

0x66f7,	// (0x00022385) bg_cale_heading_pane_g2

0x66ff,	// (0x0002238d) bg_cale_heading_pane_g3

0x6707,	// (0x00022395) bg_cale_heading_pane_g4

0x6711,	// (0x0002239f) bg_cale_heading_pane_g5

0x671b,	// (0x000223a9) bg_cale_heading_pane_g6

0x6723,	// (0x000223b1) bg_cale_heading_pane_g7

0x672b,	// (0x000223b9) bg_cale_heading_pane_g8

0x6735,	// (0x000223c3) bg_cale_heading_pane_g9

0x0008,

0xf3af,	// (0x0002b03d) bg_cale_heading_pane_g

0xcd02,	// (0x00028990) bg_cale_side_pane_g1

0x673f,	// (0x000223cd) bg_cale_side_pane_g2

0x6749,	// (0x000223d7) bg_cale_side_pane_g3

0x6753,	// (0x000223e1) bg_cale_side_pane_g4

0x675d,	// (0x000223eb) bg_cale_side_pane_g5

0x6767,	// (0x000223f5) bg_cale_side_pane_g6

0x6771,	// (0x000223ff) bg_cale_side_pane_g7

0x677b,	// (0x00022409) bg_cale_side_pane_g8

0x6783,	// (0x00022411) bg_cale_side_pane_g9

0x0008,

0xf3c2,	// (0x0002b050) bg_cale_side_pane_g

0x678b,	// (0x00022419) popup_call_status_window_ParamLimits

0x678b,	// (0x00022419) popup_call_status_window

0xcd0a,	// (0x00028998) stacon_top_pane

0xcd12,	// (0x000289a0) status_pane_ParamLimits

0xcd12,	// (0x000289a0) status_pane

0xcd27,	// (0x000289b5) status_small_pane

0xcd2f,	// (0x000289bd) control_pane

0xbfc2,	// (0x00027c50) stacon_bottom_pane

0xcd37,	// (0x000289c5) list_single_mce_smart_pane_t1_ParamLimits

0xcd37,	// (0x000289c5) list_single_mce_smart_pane_t1

0xcd4a,	// (0x000289d8) list_single_mce_smart_pane_t2_ParamLimits

0xcd4a,	// (0x000289d8) list_single_mce_smart_pane_t2

0x0001,

0xf3d5,	// (0x0002b063) list_single_mce_smart_pane_t_ParamLimits

0xf3d5,	// (0x0002b063) list_single_mce_smart_pane_t

0x6797,	// (0x00022425) compass_pane

0x67a3,	// (0x00022431) main_location2_pane_t1

0x67b7,	// (0x00022445) main_location2_pane_t2

0x67cb,	// (0x00022459) main_location2_pane_t3

0x0003,

0xf3da,	// (0x0002b068) main_location2_pane_t

0xcd69,	// (0x000289f7) compass_pane_g1_ParamLimits

0xcd69,	// (0x000289f7) compass_pane_g1

0x6815,	// (0x000224a3) compass_pane_t1

0x6824,	// (0x000224b2) compass_pane_t2

0x0005,

0xf3e3,	// (0x0002b071) compass_pane_t

0x686f,	// (0x000224fd) text_secondary_cp61

0xcd7d,	// (0x00028a0b) navi_pane_cams_g5

0xcda0,	// (0x00028a2e) navi_pane_im_t1

0xcdae,	// (0x00028a3c) navi_pane_mp_g1_ParamLimits

0xcdae,	// (0x00028a3c) navi_pane_mp_g1

0xcdc2,	// (0x00028a50) navi_pane_mp_g2_ParamLimits

0xcdc2,	// (0x00028a50) navi_pane_mp_g2

0xcdce,	// (0x00028a5c) navi_pane_mp_g3_ParamLimits

0xcdce,	// (0x00028a5c) navi_pane_mp_g3

0x0002,

0xf3f7,	// (0x0002b085) navi_pane_mp_g_ParamLimits

0xf3f7,	// (0x0002b085) navi_pane_mp_g

0xcdda,	// (0x00028a68) navi_pane_mp_t1

0xcde8,	// (0x00028a76) navi_pane_mp_t2

0x0002,

0xf3fe,	// (0x0002b08c) navi_pane_mp_t

0xce24,	// (0x00028ab2) navi_pane_vt_g1

0xcdda,	// (0x00028a68) navi_pane_vt_t1

0xce2c,	// (0x00028aba) navi_slider_pane

0xce34,	// (0x00028ac2) zooming_pane

0xce3c,	// (0x00028aca) navi_slider_pane_g1

0x34d9,	// (0x0001f167) navi_slider_pane_g2

0x0006,

0xf405,	// (0x0002b093) navi_slider_pane_g

0xce60,	// (0x00028aee) aid_levels_zoom

0xce68,	// (0x00028af6) zooming_pane_g1

0xce70,	// (0x00028afe) zooming_pane_g2

0xce70,	// (0x00028afe) zooming_pane_g3

0x0002,

0xf414,	// (0x0002b0a2) zooming_pane_g

0xce78,	// (0x00028b06) level_10_zoom

0xce81,	// (0x00028b0f) level_11_zoom

0xce8a,	// (0x00028b18) level_1_zoom

0xce93,	// (0x00028b21) level_2_zoom

0xce9c,	// (0x00028b2a) level_3_zoom

0xcea5,	// (0x00028b33) level_4_zoom

0xceae,	// (0x00028b3c) level_5_zoom

0xceb7,	// (0x00028b45) level_6_zoom

0xcec0,	// (0x00028b4e) level_7_zoom

0xcec9,	// (0x00028b57) level_8_zoom

0xced2,	// (0x00028b60) level_9_zoom

0xcee3,	// (0x00028b71) popup_phob_thumbnail_window_g1

0xceeb,	// (0x00028b79) popup_phob_thumbnail_window_g2

0x0001,

0xf41b,	// (0x0002b0a9) popup_phob_thumbnail_window_g

0xe23f,	// (0x00029ecd) level_1_location

0xe247,	// (0x00029ed5) level_2_location

0xe24f,	// (0x00029edd) level_3_location

0xe257,	// (0x00029ee5) level_4_location

0xce34,	// (0x00028ac2) level_5_location

0x69a2,	// (0x00022630) mce_icon_pane_g1

0x69aa,	// (0x00022638) mce_icon_pane_g2

0x0001,

0xf420,	// (0x0002b0ae) mce_icon_pane_g

0x69b2,	// (0x00022640) main_mup_pane_g1_ParamLimits

0x69b2,	// (0x00022640) main_mup_pane_g1

0x69ca,	// (0x00022658) main_mup_pane_g2_ParamLimits

0x69ca,	// (0x00022658) main_mup_pane_g2

0x69e6,	// (0x00022674) main_mup_pane_g3_ParamLimits

0x69e6,	// (0x00022674) main_mup_pane_g3

0x6a02,	// (0x00022690) main_mup_pane_g4_ParamLimits

0x6a02,	// (0x00022690) main_mup_pane_g4

0x6a1e,	// (0x000226ac) main_mup_pane_g5_ParamLimits

0x6a1e,	// (0x000226ac) main_mup_pane_g5

0x6a3f,	// (0x000226cd) main_mup_pane_g6_ParamLimits

0x6a3f,	// (0x000226cd) main_mup_pane_g6

0x6a5b,	// (0x000226e9) main_mup_pane_g7_ParamLimits

0x6a5b,	// (0x000226e9) main_mup_pane_g7

0x6a77,	// (0x00022705) main_mup_pane_g8_ParamLimits

0x6a77,	// (0x00022705) main_mup_pane_g8

0x6a97,	// (0x00022725) main_mup_pane_g9_ParamLimits

0x6a97,	// (0x00022725) main_mup_pane_g9

0x6ab6,	// (0x00022744) main_mup_pane_g10_ParamLimits

0x6ab6,	// (0x00022744) main_mup_pane_g10

0x6ad5,	// (0x00022763) main_mup_pane_g11_ParamLimits

0x6ad5,	// (0x00022763) main_mup_pane_g11

0x6aed,	// (0x0002277b) main_mup_pane_g12_ParamLimits

0x6aed,	// (0x0002277b) main_mup_pane_g12

0x6afb,	// (0x00022789) main_mup_pane_g13_ParamLimits

0x6afb,	// (0x00022789) main_mup_pane_g13

0x000c,

0xf425,	// (0x0002b0b3) main_mup_pane_g_ParamLimits

0xf425,	// (0x0002b0b3) main_mup_pane_g

0x6b11,	// (0x0002279f) main_mup_pane_t1_ParamLimits

0x6b11,	// (0x0002279f) main_mup_pane_t1

0x6b2e,	// (0x000227bc) main_mup_pane_t2_ParamLimits

0x6b2e,	// (0x000227bc) main_mup_pane_t2

0x6b48,	// (0x000227d6) main_mup_pane_t3_ParamLimits

0x6b48,	// (0x000227d6) main_mup_pane_t3

0x6b62,	// (0x000227f0) main_mup_pane_t4_ParamLimits

0x6b62,	// (0x000227f0) main_mup_pane_t4

0x6b74,	// (0x00022802) main_mup_pane_t5_ParamLimits

0x6b74,	// (0x00022802) main_mup_pane_t5

0x6b86,	// (0x00022814) main_mup_pane_t6_ParamLimits

0x6b86,	// (0x00022814) main_mup_pane_t6

0x0005,

0xf440,	// (0x0002b0ce) main_mup_pane_t_ParamLimits

0xf440,	// (0x0002b0ce) main_mup_pane_t

0x6b9c,	// (0x0002282a) mup_progress_pane_ParamLimits

0x6b9c,	// (0x0002282a) mup_progress_pane

0x6ba8,	// (0x00022836) mup_visualizer_pane_ParamLimits

0x6ba8,	// (0x00022836) mup_visualizer_pane

0x6be2,	// (0x00022870) mup_volume_pane_ParamLimits

0x6be2,	// (0x00022870) mup_volume_pane

0xcbaa,	// (0x00028838) mup_visualizer_pane_g1_ParamLimits

0xcbaa,	// (0x00028838) mup_visualizer_pane_g1

0xcbaa,	// (0x00028838) mup_visualizer_pane_g2_ParamLimits

0xcbaa,	// (0x00028838) mup_visualizer_pane_g2

0xcd69,	// (0x000289f7) mup_visualizer_pane_g3_ParamLimits

0xcd69,	// (0x000289f7) mup_visualizer_pane_g3

0x0002,

0xf44d,	// (0x0002b0db) mup_visualizer_pane_g_ParamLimits

0xf44d,	// (0x0002b0db) mup_visualizer_pane_g

0xc345,	// (0x00027fd3) mup_volume_pane_g1

0xcefb,	// (0x00028b89) mup_volume_pane_g2

0x0001,

0xf454,	// (0x0002b0e2) mup_volume_pane_g

0xc345,	// (0x00027fd3) mup_progress_pane_g1

0xcf04,	// (0x00028b92) mup_progress_pane_g2

0xcf0d,	// (0x00028b9b) mup_progress_pane_g3

0x0002,

0xf459,	// (0x0002b0e7) mup_progress_pane_g

0xbfc2,	// (0x00027c50) bg_popup_window_pane_cp05

0xcf16,	// (0x00028ba4) heading_pane_cp02_ParamLimits

0xcf16,	// (0x00028ba4) heading_pane_cp02

0xcf30,	// (0x00028bbe) list_popup_blid_pane

0xcf38,	// (0x00028bc6) list_blid_sat_info_pane_ParamLimits

0xcf38,	// (0x00028bc6) list_blid_sat_info_pane

0xcf4b,	// (0x00028bd9) list_blid_sat_info_pane_g1

0xcf53,	// (0x00028be1) list_blid_sat_info_pane_t1

0x6cef,	// (0x0002297d) mup_equalizer_pane_ParamLimits

0x6cef,	// (0x0002297d) mup_equalizer_pane

0x6d10,	// (0x0002299e) mup_equalizer_pane_cp1_ParamLimits

0x6d10,	// (0x0002299e) mup_equalizer_pane_cp1

0x6d31,	// (0x000229bf) mup_equalizer_pane_cp2_ParamLimits

0x6d31,	// (0x000229bf) mup_equalizer_pane_cp2

0x6d52,	// (0x000229e0) mup_equalizer_pane_cp3_ParamLimits

0x6d52,	// (0x000229e0) mup_equalizer_pane_cp3

0x6d73,	// (0x00022a01) mup_equalizer_pane_cp4_ParamLimits

0x6d73,	// (0x00022a01) mup_equalizer_pane_cp4

0x6d94,	// (0x00022a22) mup_equalizer_pane_cp5

0x6daa,	// (0x00022a38) mup_equalizer_pane_cp6

0x6dc2,	// (0x00022a50) mup_equalizer_pane_cp7

0xe15d,	// (0x00029deb) bg_popup_call_poc_act_pane_g9

0xe165,	// (0x00029df3) bg_popup_call_poc_act_pane_g10

0xe16d,	// (0x00029dfb) bg_popup_call_poc_act_pane_g11

0x000a,

0xc22b,	// (0x00027eb9) mup_scale_pane

0xc345,	// (0x00027fd3) mup_scale_pane_g1

0xcf61,	// (0x00028bef) mup_scale_pane_g2

0x0006,

0xf475,	// (0x0002b103) mup_scale_pane_g

0xcf85,	// (0x00028c13) msg_data_pane

0xcf8d,	// (0x00028c1b) scroll_pane_cp017

0x6dec,	// (0x00022a7a) bg_list_pane_cp04_ParamLimits

0x6dec,	// (0x00022a7a) bg_list_pane_cp04

0xcf9d,	// (0x00028c2b) msg_data_pane_g1

0x6e08,	// (0x00022a96) msg_data_pane_g2

0x6e12,	// (0x00022aa0) msg_data_pane_g3

0x6e1a,	// (0x00022aa8) msg_data_pane_g4

0x6e22,	// (0x00022ab0) msg_data_pane_g5

0x6e2a,	// (0x00022ab8) msg_data_pane_g6

0x6e32,	// (0x00022ac0) msg_data_pane_g7

0x0006,

0xf484,	// (0x0002b112) msg_data_pane_g

0x6e3a,	// (0x00022ac8) msg_text_pane_ParamLimits

0x6e3a,	// (0x00022ac8) msg_text_pane

0x6e76,	// (0x00022b04) qrid_highlight_pane_cp011_ParamLimits

0x6e76,	// (0x00022b04) qrid_highlight_pane_cp011

0xbfc2,	// (0x00027c50) msg_body_pane

0xbfc2,	// (0x00027c50) msg_header_pane

0xcfa5,	// (0x00028c33) input_focus_pane_cp07

0xcfba,	// (0x00028c48) msg_header_pane_t1_ParamLimits

0xcfba,	// (0x00028c48) msg_header_pane_t1

0xcfcc,	// (0x00028c5a) msg_header_pane_t2_ParamLimits

0xcfcc,	// (0x00028c5a) msg_header_pane_t2

0x0001,

0xf498,	// (0x0002b126) msg_header_pane_t_ParamLimits

0xf498,	// (0x0002b126) msg_header_pane_t

0xcfde,	// (0x00028c6c) msg_body_pane_g1

0xcfe6,	// (0x00028c74) msg_body_pane_t1_ParamLimits

0xcfe6,	// (0x00028c74) msg_body_pane_t1

0xd017,	// (0x00028ca5) msg_body_pane_t2_ParamLimits

0xd017,	// (0x00028ca5) msg_body_pane_t2

0xd029,	// (0x00028cb7) msg_body_pane_t3_ParamLimits

0xd029,	// (0x00028cb7) msg_body_pane_t3

0x0002,

0xf49d,	// (0x0002b12b) msg_body_pane_t_ParamLimits

0xf49d,	// (0x0002b12b) msg_body_pane_t

0x351b,	// (0x0001f1a9) main_viewer_pane_g1_ParamLimits

0x351b,	// (0x0001f1a9) main_viewer_pane_g1

0x3527,	// (0x0001f1b5) main_viewer_pane_g2_ParamLimits

0x3527,	// (0x0001f1b5) main_viewer_pane_g2

0x6ec7,	// (0x00022b55) main_viewer_pane_g3_ParamLimits

0x6ec7,	// (0x00022b55) main_viewer_pane_g3

0x6ed8,	// (0x00022b66) main_viewer_pane_g4_ParamLimits

0x6ed8,	// (0x00022b66) main_viewer_pane_g4

0x3533,	// (0x0001f1c1) main_viewer_pane_g5_ParamLimits

0x3533,	// (0x0001f1c1) main_viewer_pane_g5

0x3533,	// (0x0001f1c1) main_viewer_pane_g7_ParamLimits

0x3533,	// (0x0001f1c1) main_viewer_pane_g7

0xc9d2,	// (0x00028660) main_viewer_pane_g8_ParamLimits

0xc9d2,	// (0x00028660) main_viewer_pane_g8

0x0007,

0xf4ad,	// (0x0002b13b) main_viewer_pane_g_ParamLimits

0xf4ad,	// (0x0002b13b) main_viewer_pane_g

0xd03b,	// (0x00028cc9) viewer_content_pane_ParamLimits

0xd03b,	// (0x00028cc9) viewer_content_pane

0x6f09,	// (0x00022b97) main_postcard_pane_g1_ParamLimits

0x6f09,	// (0x00022b97) main_postcard_pane_g1

0x6f17,	// (0x00022ba5) main_postcard_pane_g2_ParamLimits

0x6f17,	// (0x00022ba5) main_postcard_pane_g2

0x6f25,	// (0x00022bb3) main_postcard_pane_g3_ParamLimits

0x6f25,	// (0x00022bb3) main_postcard_pane_g3

0x0005,

0xf4be,	// (0x0002b14c) main_postcard_pane_g_ParamLimits

0xf4be,	// (0x0002b14c) main_postcard_pane_g

0x6f35,	// (0x00022bc3) main_postcard_pane_g4

0xe33f,	// (0x00029fcd) smil_status_volume_pane_g2

0x6f61,	// (0x00022bef) postcard_pane_ParamLimits

0x6f61,	// (0x00022bef) postcard_pane

0xcbaa,	// (0x00028838) postcard_pane_g1_ParamLimits

0xcbaa,	// (0x00028838) postcard_pane_g1

0x6f93,	// (0x00022c21) postcard_pane_g2_ParamLimits

0x6f93,	// (0x00022c21) postcard_pane_g2

0x6f9f,	// (0x00022c2d) postcard_pane_g3_ParamLimits

0x6f9f,	// (0x00022c2d) postcard_pane_g3

0xd049,	// (0x00028cd7) postcard_pane_g4_ParamLimits

0xd049,	// (0x00028cd7) postcard_pane_g4

0x6fab,	// (0x00022c39) postcard_pane_g5_ParamLimits

0x6fab,	// (0x00022c39) postcard_pane_g5

0x6fb7,	// (0x00022c45) postcard_pane_g6_ParamLimits

0x6fb7,	// (0x00022c45) postcard_pane_g6

0xd057,	// (0x00028ce5) postcard_pane_g7_ParamLimits

0xd057,	// (0x00028ce5) postcard_pane_g7

0x0006,

0xf4cb,	// (0x0002b159) postcard_pane_g_ParamLimits

0xf4cb,	// (0x0002b159) postcard_pane_g

0x6fc3,	// (0x00022c51) main_mp2_pane_g1_ParamLimits

0x6fc3,	// (0x00022c51) main_mp2_pane_g1

0x6fcf,	// (0x00022c5d) main_mp2_pane_g2_ParamLimits

0x6fcf,	// (0x00022c5d) main_mp2_pane_g2

0x6fdb,	// (0x00022c69) main_mp2_pane_g3_ParamLimits

0x6fdb,	// (0x00022c69) main_mp2_pane_g3

0x0002,

0xf4da,	// (0x0002b168) main_mp2_pane_g_ParamLimits

0xf4da,	// (0x0002b168) main_mp2_pane_g

0x6fe7,	// (0x00022c75) main_mp2_pane_t1_ParamLimits

0x6fe7,	// (0x00022c75) main_mp2_pane_t1

0x6ffe,	// (0x00022c8c) main_mp2_pane_t2_ParamLimits

0x6ffe,	// (0x00022c8c) main_mp2_pane_t2

0x7012,	// (0x00022ca0) main_mp2_pane_t3_ParamLimits

0x7012,	// (0x00022ca0) main_mp2_pane_t3

0x0002,

0xf4e1,	// (0x0002b16f) main_mp2_pane_t_ParamLimits

0xf4e1,	// (0x0002b16f) main_mp2_pane_t

0xd065,	// (0x00028cf3) pec_content_pane_ParamLimits

0xd065,	// (0x00028cf3) pec_content_pane

0xc661,	// (0x000282ef) scroll_pane_cp015

0xd077,	// (0x00028d05) pec_attribute_pane_ParamLimits

0xd077,	// (0x00028d05) pec_attribute_pane

0x7024,	// (0x00022cb2) pec_content_pane_g1_ParamLimits

0x7024,	// (0x00022cb2) pec_content_pane_g1

0xd087,	// (0x00028d15) pec_content_pane_t1_ParamLimits

0xd087,	// (0x00028d15) pec_content_pane_t1

0xd099,	// (0x00028d27) pec_content_pane_t2_ParamLimits

0xd099,	// (0x00028d27) pec_content_pane_t2

0x0001,

0xf4e8,	// (0x0002b176) pec_content_pane_t_ParamLimits

0xf4e8,	// (0x0002b176) pec_content_pane_t

0x7030,	// (0x00022cbe) list_single_graphic_pane_cp01_ParamLimits

0x7030,	// (0x00022cbe) list_single_graphic_pane_cp01

0xc22b,	// (0x00027eb9) bg_popup_sub_pane_cp04

0xd0ab,	// (0x00028d39) popup_mup_playback_window_g1

0xd0b7,	// (0x00028d45) popup_mup_playback_window_t1

0xd0cc,	// (0x00028d5a) popup_mup_playback_window_t2

0x0001,

0xf4ed,	// (0x0002b17b) popup_mup_playback_window_t

0xd103,	// (0x00028d91) main_image_pane_g1_ParamLimits

0xd103,	// (0x00028d91) main_image_pane_g1

0xd146,	// (0x00028dd4) scroll_pane_cp018_ParamLimits

0xd146,	// (0x00028dd4) scroll_pane_cp018

0xd15e,	// (0x00028dec) scroll_pane_cp016_ParamLimits

0xd15e,	// (0x00028dec) scroll_pane_cp016

0x70c9,	// (0x00022d57) smil2_image_pane_ParamLimits

0x70c9,	// (0x00022d57) smil2_image_pane

0x70f9,	// (0x00022d87) smil2_root_pane_ParamLimits

0x70f9,	// (0x00022d87) smil2_root_pane

0x7125,	// (0x00022db3) smil2_text_pane_ParamLimits

0x7125,	// (0x00022db3) smil2_text_pane

0xbfc2,	// (0x00027c50) bg_list_pane_cp06

0xd19a,	// (0x00028e28) grid_radio_pane

0xbfc2,	// (0x00027c50) bg_popup_window_pane_cp06

0xd1a2,	// (0x00028e30) main_fmradio_pane_t1

0xcbb8,	// (0x00028846) heading_pane_cp04

0xd1b0,	// (0x00028e3e) main_fmradio_pane_t2

0xe175,	// (0x00029e03) popup_cale_lunar_info_window_g1

0xd1be,	// (0x00028e4c) main_fmradio_pane_t3

0xe17d,	// (0x00029e0b) popup_cale_lunar_info_window_g2

0xd1cc,	// (0x00028e5a) main_fmradio_pane_t4

0x0001,

0xd1da,	// (0x00028e68) main_fmradio_pane_t5

0x0004,

0xf5c8,	// (0x0002b256) popup_cale_lunar_info_window_g

0xf502,	// (0x0002b190) main_fmradio_pane_t

0xd1e8,	// (0x00028e76) wait_bar_pane_cp03

0xd1f0,	// (0x00028e7e) cell_fmradio_pane_ParamLimits

0xd1f0,	// (0x00028e7e) cell_fmradio_pane

0xd057,	// (0x00028ce5) cell_fmradio_pane_g1_ParamLimits

0xd057,	// (0x00028ce5) cell_fmradio_pane_g1

0xbfc2,	// (0x00027c50) grid_highlight_pane_cp011

0xd203,	// (0x00028e91) poc_content_pane_ParamLimits

0xd203,	// (0x00028e91) poc_content_pane

0xd215,	// (0x00028ea3) scroll_pane_cp019

0x7165,	// (0x00022df3) popup_call_poc_act_window_ParamLimits

0x7165,	// (0x00022df3) popup_call_poc_act_window

0x7172,	// (0x00022e00) popup_call_poc_inact_window_ParamLimits

0x7172,	// (0x00022e00) popup_call_poc_inact_window

0xf59f,	// (0x0002b22d) bg_popup_call_poc_act_pane_g

0xe0ed,	// (0x00029d7b) bg_popup_call_poc_inact_pane_g1

0xe0f5,	// (0x00029d83) bg_popup_call_poc_inact_pane_g2

0xd21d,	// (0x00028eab) popup_call_poc_act_window_g2

0xe0fd,	// (0x00029d8b) bg_popup_call_poc_inact_pane_g3

0xe105,	// (0x00029d93) bg_popup_call_poc_inact_pane_g4

0xe10d,	// (0x00029d9b) bg_popup_call_poc_inact_pane_g5

0xd225,	// (0x00028eb3) popup_call_poc_act_window_t1_ParamLimits

0xd225,	// (0x00028eb3) popup_call_poc_act_window_t1

0xd24d,	// (0x00028edb) popup_call_poc_act_window_t2_ParamLimits

0xd24d,	// (0x00028edb) popup_call_poc_act_window_t2

0xd275,	// (0x00028f03) popup_call_poc_act_window_t3_ParamLimits

0xd275,	// (0x00028f03) popup_call_poc_act_window_t3

0xd29d,	// (0x00028f2b) popup_call_poc_act_window_t4_ParamLimits

0xd29d,	// (0x00028f2b) popup_call_poc_act_window_t4

0x0003,

0xf50d,	// (0x0002b19b) popup_call_poc_act_window_t_ParamLimits

0xf50d,	// (0x0002b19b) popup_call_poc_act_window_t

0xe115,	// (0x00029da3) bg_popup_call_poc_inact_pane_g6

0xe11d,	// (0x00029dab) bg_popup_call_poc_inact_pane_g7

0xe125,	// (0x00029db3) bg_popup_call_poc_inact_pane_g8

0xd2af,	// (0x00028f3d) popup_call_poc_inact_window_g2

0xe12d,	// (0x00029dbb) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf58c,	// (0x0002b21a) bg_popup_call_poc_inact_pane_g

0xd2b7,	// (0x00028f45) popup_call_poc_inact_window_t1_ParamLimits

0xd2b7,	// (0x00028f45) popup_call_poc_inact_window_t1

0xd2cc,	// (0x00028f5a) popup_call_poc_inact_window_t2_ParamLimits

0xd2cc,	// (0x00028f5a) popup_call_poc_inact_window_t2

0xd2e1,	// (0x00028f6f) popup_call_poc_inact_window_t3_ParamLimits

0xd2e1,	// (0x00028f6f) popup_call_poc_inact_window_t3

0x0002,

0xf516,	// (0x0002b1a4) popup_call_poc_inact_window_t_ParamLimits

0xf516,	// (0x0002b1a4) popup_call_poc_inact_window_t

0xe2b2,	// (0x00029f40) context_pane_ParamLimits

0x7622,	// (0x000232b0) signal_pane_ParamLimits

0xce34,	// (0x00028ac2) main_call2_pane

0x368e,	// (0x0001f31c) popup_phob_thumbnail2_window_ParamLimits

0x368e,	// (0x0001f31c) popup_phob_thumbnail2_window

0x34eb,	// (0x0001f179) aid_hotspot_pointer_arrow_pane

0x34f3,	// (0x0001f181) aid_hotspot_pointer_hand_pane

0x7494,	// (0x00023122) phob_pre_status_pane_g5

0x4f74,	// (0x00020c02) cams_zoom_pane_ParamLimits

0x4f80,	// (0x00020c0e) image_vga_pane_ParamLimits

0x4f8f,	// (0x00020c1d) main_camera_pane_g1_ParamLimits

0x4f9d,	// (0x00020c2b) main_camera_pane_g2_ParamLimits

0x4fa9,	// (0x00020c37) main_camera_pane_g3_ParamLimits

0x4fb5,	// (0x00020c43) main_camera_pane_g4_ParamLimits

0x4fc1,	// (0x00020c4f) main_camera_pane_g5_ParamLimits

0x4fcd,	// (0x00020c5b) main_camera_pane_g6_ParamLimits

0x4fd9,	// (0x00020c67) main_camera_pane_g7_ParamLimits

0xf215,	// (0x0002aea3) main_camera_pane_g_ParamLimits

0x4fe5,	// (0x00020c73) main_camera_pane_t1_ParamLimits

0x4ff7,	// (0x00020c85) main_camera_pane_t2_ParamLimits

0xf226,	// (0x0002aeb4) main_camera_pane_t_ParamLimits

0xc22b,	// (0x00027eb9) bg_popup_preview_window_pane_cp01_ParamLimits

0xc22b,	// (0x00027eb9) bg_popup_preview_window_pane_cp01

0xd2f6,	// (0x00028f84) popup_phob_thumbnail2_window_g1_ParamLimits

0xd2f6,	// (0x00028f84) popup_phob_thumbnail2_window_g1

0xbfc2,	// (0x00027c50) call2_cli_visual_pane

0x718e,	// (0x00022e1c) popup_call2_audio_conf_window_ParamLimits

0x718e,	// (0x00022e1c) popup_call2_audio_conf_window

0x71a3,	// (0x00022e31) popup_call2_audio_first_window_ParamLimits

0x71a3,	// (0x00022e31) popup_call2_audio_first_window

0x7241,	// (0x00022ecf) popup_call2_audio_in_window_ParamLimits

0x7241,	// (0x00022ecf) popup_call2_audio_in_window

0x7283,	// (0x00022f11) popup_call2_audio_out_window_ParamLimits

0x7283,	// (0x00022f11) popup_call2_audio_out_window

0x72e5,	// (0x00022f73) popup_call2_audio_second_window_ParamLimits

0x72e5,	// (0x00022f73) popup_call2_audio_second_window

0x7343,	// (0x00022fd1) popup_call2_audio_wait_window_ParamLimits

0x7343,	// (0x00022fd1) popup_call2_audio_wait_window

0xbfc2,	// (0x00027c50) bg_popup_call2_act_pane_cp03

0xc20d,	// (0x00027e9b) list_conf_pane_cp

0xd302,	// (0x00028f90) popup_call2_audio_conf_window_t1

0xcc15,	// (0x000288a3) list_single_graphic_popup_conf2_pane_ParamLimits

0xcc15,	// (0x000288a3) list_single_graphic_popup_conf2_pane

0xcc28,	// (0x000288b6) list_highlight_pane_cp04

0xd310,	// (0x00028f9e) list_single_graphic_popup_conf2_pane_g1

0xcc39,	// (0x000288c7) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf51d,	// (0x0002b1ab) list_single_graphic_popup_conf2_pane_g

0xd31a,	// (0x00028fa8) list_single_graphic_popup_conf2_pane_t1

0xd328,	// (0x00028fb6) bg_popup_call2_act_pane_cp01_ParamLimits

0xd328,	// (0x00028fb6) bg_popup_call2_act_pane_cp01

0xd3b2,	// (0x00029040) call_type_pane_cp05_ParamLimits

0xd3b2,	// (0x00029040) call_type_pane_cp05

0xd406,	// (0x00029094) popup_call2_audio_second_window_g1_ParamLimits

0xd406,	// (0x00029094) popup_call2_audio_second_window_g1

0xd45a,	// (0x000290e8) popup_call2_audio_second_window_g2_ParamLimits

0xd45a,	// (0x000290e8) popup_call2_audio_second_window_g2

0x0002,

0xf522,	// (0x0002b1b0) popup_call2_audio_second_window_g_ParamLimits

0xf522,	// (0x0002b1b0) popup_call2_audio_second_window_g

0xd4bf,	// (0x0002914d) popup_call2_audio_second_window_t1_ParamLimits

0xd4bf,	// (0x0002914d) popup_call2_audio_second_window_t1

0xd57a,	// (0x00029208) popup_call2_audio_second_window_t2_ParamLimits

0xd57a,	// (0x00029208) popup_call2_audio_second_window_t2

0xd5cd,	// (0x0002925b) popup_call2_audio_second_window_t3_ParamLimits

0xd5cd,	// (0x0002925b) popup_call2_audio_second_window_t3

0x0003,

0xf529,	// (0x0002b1b7) popup_call2_audio_second_window_t_ParamLimits

0xf529,	// (0x0002b1b7) popup_call2_audio_second_window_t

0xbfc2,	// (0x00027c50) bg_popup_call2_in_pane_cp02

0xbfcc,	// (0x00027c5a) call_type_pane_cp04

0xbfd4,	// (0x00027c62) popup_call2_audio_wait_window_g1

0xbfdc,	// (0x00027c6a) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x0002ad90) popup_call2_audio_wait_window_g

0xbfe4,	// (0x00027c72) popup_call2_audio_wait_window_t3

0xd6c0,	// (0x0002934e) bg_popup_call2_act_pane_ParamLimits

0xd6c0,	// (0x0002934e) bg_popup_call2_act_pane

0xd780,	// (0x0002940e) call_type_pane_cp03_ParamLimits

0xd780,	// (0x0002940e) call_type_pane_cp03

0xd7e4,	// (0x00029472) popup_call2_audio_first_window_g1_ParamLimits

0xd7e4,	// (0x00029472) popup_call2_audio_first_window_g1

0xd854,	// (0x000294e2) popup_call2_audio_first_window_g2_ParamLimits

0xd854,	// (0x000294e2) popup_call2_audio_first_window_g2

0xcbaa,	// (0x00028838) popup_call2_audio_first_window_g3_ParamLimits

0xcbaa,	// (0x00028838) popup_call2_audio_first_window_g3

0x0004,

0xf532,	// (0x0002b1c0) popup_call2_audio_first_window_g_ParamLimits

0xf532,	// (0x0002b1c0) popup_call2_audio_first_window_g

0xd932,	// (0x000295c0) popup_call2_audio_first_window_t1_ParamLimits

0xd932,	// (0x000295c0) popup_call2_audio_first_window_t1

0xda35,	// (0x000296c3) popup_call2_audio_first_window_t4_ParamLimits

0xda35,	// (0x000296c3) popup_call2_audio_first_window_t4

0xdb18,	// (0x000297a6) popup_call2_audio_first_window_t5_ParamLimits

0xdb18,	// (0x000297a6) popup_call2_audio_first_window_t5

0x0003,

0xf53d,	// (0x0002b1cb) popup_call2_audio_first_window_t_ParamLimits

0xf53d,	// (0x0002b1cb) popup_call2_audio_first_window_t

0xc223,	// (0x00027eb1) bg_popup_call2_act_pane_g1

0xe185,	// (0x00029e13) popup_cale_lunar_info_window_t1

0xe193,	// (0x00029e21) popup_cale_lunar_info_window_t2

0xe1a1,	// (0x00029e2f) popup_cale_lunar_info_window_t3

0xbfc2,	// (0x00027c50) bg_popup_call2_bubble_pane

0xdc19,	// (0x000298a7) bg_popup_call2_in_pane_cp01_ParamLimits

0xdc19,	// (0x000298a7) bg_popup_call2_in_pane_cp01

0xbc9e,	// (0x0002792c) call_type_pane_cp02

0xdc61,	// (0x000298ef) popup_call2_audio_out_window_g1_ParamLimits

0xdc61,	// (0x000298ef) popup_call2_audio_out_window_g1

0xdc8d,	// (0x0002991b) popup_call2_audio_out_window_g2_ParamLimits

0xdc8d,	// (0x0002991b) popup_call2_audio_out_window_g2

0xdcb5,	// (0x00029943) popup_call2_audio_out_window_g3_ParamLimits

0xdcb5,	// (0x00029943) popup_call2_audio_out_window_g3

0x0003,

0xf546,	// (0x0002b1d4) popup_call2_audio_out_window_g_ParamLimits

0xf546,	// (0x0002b1d4) popup_call2_audio_out_window_g

0xdcf0,	// (0x0002997e) popup_call2_audio_out_window_t1_ParamLimits

0xdcf0,	// (0x0002997e) popup_call2_audio_out_window_t1

0xdd4f,	// (0x000299dd) popup_call2_audio_out_window_t2_ParamLimits

0xdd4f,	// (0x000299dd) popup_call2_audio_out_window_t2

0xdda3,	// (0x00029a31) popup_call2_audio_out_window_t3_ParamLimits

0xdda3,	// (0x00029a31) popup_call2_audio_out_window_t3

0xddb9,	// (0x00029a47) popup_call2_audio_out_window_t4_ParamLimits

0xddb9,	// (0x00029a47) popup_call2_audio_out_window_t4

0xddcf,	// (0x00029a5d) popup_call2_audio_out_window_t5_ParamLimits

0xddcf,	// (0x00029a5d) popup_call2_audio_out_window_t5

0x0005,

0xf54f,	// (0x0002b1dd) popup_call2_audio_out_window_t_ParamLimits

0xf54f,	// (0x0002b1dd) popup_call2_audio_out_window_t

0xde33,	// (0x00029ac1) bg_popup_call2_in_pane_ParamLimits

0xde33,	// (0x00029ac1) bg_popup_call2_in_pane

0xde8f,	// (0x00029b1d) popup_call2_audio_in_window_g1_ParamLimits

0xde8f,	// (0x00029b1d) popup_call2_audio_in_window_g1

0xdec7,	// (0x00029b55) popup_call2_audio_in_window_g2_ParamLimits

0xdec7,	// (0x00029b55) popup_call2_audio_in_window_g2

0xdeff,	// (0x00029b8d) popup_call2_audio_in_window_g3_ParamLimits

0xdeff,	// (0x00029b8d) popup_call2_audio_in_window_g3

0x0003,

0xf55c,	// (0x0002b1ea) popup_call2_audio_in_window_g_ParamLimits

0xf55c,	// (0x0002b1ea) popup_call2_audio_in_window_g

0xdf57,	// (0x00029be5) popup_call2_audio_in_window_t1_ParamLimits

0xdf57,	// (0x00029be5) popup_call2_audio_in_window_t1

0xdfd7,	// (0x00029c65) popup_call2_audio_in_window_t2_ParamLimits

0xdfd7,	// (0x00029c65) popup_call2_audio_in_window_t2

0xe057,	// (0x00029ce5) popup_call2_audio_in_window_t3_ParamLimits

0xe057,	// (0x00029ce5) popup_call2_audio_in_window_t3

0xe071,	// (0x00029cff) popup_call2_audio_in_window_t4_ParamLimits

0xe071,	// (0x00029cff) popup_call2_audio_in_window_t4

0xe083,	// (0x00029d11) popup_call2_audio_in_window_t5_ParamLimits

0xe083,	// (0x00029d11) popup_call2_audio_in_window_t5

0xe098,	// (0x00029d26) popup_call2_audio_in_window_t6_ParamLimits

0xe098,	// (0x00029d26) popup_call2_audio_in_window_t6

0x0005,

0xf565,	// (0x0002b1f3) popup_call2_audio_in_window_t_ParamLimits

0xf565,	// (0x0002b1f3) popup_call2_audio_in_window_t

0xc223,	// (0x00027eb1) bg_popup_call2_in_pane_g1

0xe1af,	// (0x00029e3d) popup_cale_lunar_info_window_t4

0x0003,

0xf5cd,	// (0x0002b25b) popup_cale_lunar_info_window_t

0xc22b,	// (0x00027eb9) bg_popup_call2_rect_pane_ParamLimits

0xc22b,	// (0x00027eb9) bg_popup_call2_rect_pane

0xbfc2,	// (0x00027c50) call2_cli_visual_graphic_pane

0xbfc2,	// (0x00027c50) call2_cli_visual_text_pane

0x36dd,	// (0x0001f36b) smil_status_volume_pane_g3

0x0002,

0xc345,	// (0x00027fd3) call2_cli_visual_graphic_pane_g1

0xc345,	// (0x00027fd3) call2_cli_visual_graphic_pane_g2

0xc345,	// (0x00027fd3) call2_cli_visual_graphic_pane_g3

0x0002,

0xf572,	// (0x0002b200) call2_cli_visual_graphic_pane_g

0xe0ad,	// (0x00029d3b) bg_popup_call2_rect_pane_g1

0xc3d1,	// (0x0002805f) bg_popup_call2_rect_pane_g2

0xe0b5,	// (0x00029d43) bg_popup_call2_rect_pane_g3

0xe0bd,	// (0x00029d4b) bg_popup_call2_rect_pane_g4

0xe0c5,	// (0x00029d53) bg_popup_call2_rect_pane_g5

0xe0cd,	// (0x00029d5b) bg_popup_call2_rect_pane_g6

0xe0d5,	// (0x00029d63) bg_popup_call2_rect_pane_g7

0xe0dd,	// (0x00029d6b) bg_popup_call2_rect_pane_g8

0xe0e5,	// (0x00029d73) bg_popup_call2_rect_pane_g9

0x0008,

0xf579,	// (0x0002b207) bg_popup_call2_rect_pane_g

0xe0ed,	// (0x00029d7b) bg_popup_call2_bubble_pane_g1

0xe0f5,	// (0x00029d83) bg_popup_call2_bubble_pane_g2

0xe0fd,	// (0x00029d8b) bg_popup_call2_bubble_pane_g3

0xe105,	// (0x00029d93) bg_popup_call2_bubble_pane_g4

0xe10d,	// (0x00029d9b) bg_popup_call2_bubble_pane_g5

0xe115,	// (0x00029da3) bg_popup_call2_bubble_pane_g6

0xe11d,	// (0x00029dab) bg_popup_call2_bubble_pane_g7

0xe125,	// (0x00029db3) bg_popup_call2_bubble_pane_g8

0xe12d,	// (0x00029dbb) bg_popup_call2_bubble_pane_g9

0x0008,

0xf58c,	// (0x0002b21a) bg_popup_call2_bubble_pane_g

0x4b15,	// (0x000207a3) aid_cale_week_size_cell_pane

0x5009,	// (0x00020c97) aid_cams_cif_uncrop_pane_ParamLimits

0x5009,	// (0x00020c97) aid_cams_cif_uncrop_pane

0x5164,	// (0x00020df2) aid_cams_size_cell_ParamLimits

0x5164,	// (0x00020df2) aid_cams_size_cell

0x5170,	// (0x00020dfe) grid_cams_pane_ParamLimits

0x517e,	// (0x00020e0c) linegrid_cams_pane_ParamLimits

0x534c,	// (0x00020fda) call_video_pane_t1

0x536d,	// (0x00020ffb) call_video_pane_t2

0x0001,

0xf279,	// (0x0002af07) call_video_pane_t

0x58b6,	// (0x00021544) aid_cale_month_size_cell_pane_ParamLimits

0x58b6,	// (0x00021544) aid_cale_month_size_cell_pane

0xf616,	// (0x0002b2a4) smil_status_volume_pane_g

0x36ea,	// (0x0001f378) volume_smil_pane_ParamLimits

0x2e1c,	// (0x0001eaaa) aid_popup2_width_pane

0x4a51,	// (0x000206df) cell_qdial_pane_g4_ParamLimits

0x4a51,	// (0x000206df) cell_qdial_pane_g4

0x67f1,	// (0x0002247f) aid_blid_cardinal_pane_ParamLimits

0x6801,	// (0x0002248f) aid_blid_destination_pane_ParamLimits

0x6801,	// (0x0002248f) aid_blid_destination_pane

0xc22b,	// (0x00027eb9) bg_popup_call_poc_act_pane_ParamLimits

0xc22b,	// (0x00027eb9) bg_popup_call_poc_act_pane

0xc22b,	// (0x00027eb9) bg_popup_call_poc_inact_pane_ParamLimits

0xc22b,	// (0x00027eb9) bg_popup_call_poc_inact_pane

0xe135,	// (0x00029dc3) bg_popup_call_poc_act_pane_g1

0xe13d,	// (0x00029dcb) bg_popup_call_poc_act_pane_g2

0xe145,	// (0x00029dd3) bg_popup_call_poc_act_pane_g3

0xe105,	// (0x00029d93) bg_popup_call_poc_act_pane_g4

0xe10d,	// (0x00029d9b) bg_popup_call_poc_act_pane_g5

0xe14d,	// (0x00029ddb) bg_popup_call_poc_act_pane_g6

0xe11d,	// (0x00029dab) bg_popup_call_poc_act_pane_g7

0xe155,	// (0x00029de3) bg_popup_call_poc_act_pane_g8

0xbfc2,	// (0x00027c50) main_usb_pane

0x35bd,	// (0x0001f24b) popup_cale_lunar_info_window

0x5698,	// (0x00021326) im_reading_pane_t1_ParamLimits

0xc5b9,	// (0x00028247) list_im_pane_ParamLimits

0xc5ca,	// (0x00028258) scroll_pane_cp07_ParamLimits

0xbfc2,	// (0x00027c50) grid_highlight_pane_cp012

0xc22b,	// (0x00027eb9) mup_scale_pane_ParamLimits

0xcbaa,	// (0x00028838) main_usb_pane_g1_ParamLimits

0xcbaa,	// (0x00028838) main_usb_pane_g1

0x73b7,	// (0x00023045) main_usb_pane_g2_ParamLimits

0x73b7,	// (0x00023045) main_usb_pane_g2

0x0001,

0xf5b6,	// (0x0002b244) main_usb_pane_g_ParamLimits

0xf5b6,	// (0x0002b244) main_usb_pane_g

0x73c3,	// (0x00023051) main_usb_pane_t1_ParamLimits

0x73c3,	// (0x00023051) main_usb_pane_t1

0x73d5,	// (0x00023063) main_usb_pane_t2_ParamLimits

0x73d5,	// (0x00023063) main_usb_pane_t2

0x73e7,	// (0x00023075) main_usb_pane_t3_ParamLimits

0x73e7,	// (0x00023075) main_usb_pane_t3

0x73f9,	// (0x00023087) main_usb_pane_t4_ParamLimits

0x73f9,	// (0x00023087) main_usb_pane_t4

0x740b,	// (0x00023099) main_usb_pane_t5_ParamLimits

0x740b,	// (0x00023099) main_usb_pane_t5

0x741d,	// (0x000230ab) main_usb_pane_t6_ParamLimits

0x741d,	// (0x000230ab) main_usb_pane_t6

0x0005,

0xf5bb,	// (0x0002b249) main_usb_pane_t_ParamLimits

0x6797,	// (0x00022425) aid_text_placing

0x67a3,	// (0x00022431) main_location2_pane_t1_ParamLimits

0x67b7,	// (0x00022445) main_location2_pane_t2_ParamLimits

0x67cb,	// (0x00022459) main_location2_pane_t3_ParamLimits

0x67df,	// (0x0002246d) main_location2_pane_t4_ParamLimits

0x67df,	// (0x0002246d) main_location2_pane_t4

0xf3da,	// (0x0002b068) main_location2_pane_t_ParamLimits

0xc267,	// (0x00027ef5) find_pinb_pane_g2_ParamLimits

0xc267,	// (0x00027ef5) find_pinb_pane_g2

0x0001,

0xf128,	// (0x0002adb6) find_pinb_pane_g_ParamLimits

0xf128,	// (0x0002adb6) find_pinb_pane_g

0xc273,	// (0x00027f01) find_pinb_pane_t1_ParamLimits

0xc285,	// (0x00027f13) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x0002adbb) find_pinb_pane_t_ParamLimits

0xbfc2,	// (0x00027c50) main_call3_pane

0x5e0a,	// (0x00021a98) cale_month_day_heading_pane_t1_ParamLimits

0x5e90,	// (0x00021b1e) cale_month_day_heading_pane_t2_ParamLimits

0x5f21,	// (0x00021baf) cale_month_day_heading_pane_t3_ParamLimits

0x5fb2,	// (0x00021c40) cale_month_day_heading_pane_t4_ParamLimits

0x6043,	// (0x00021cd1) cale_month_day_heading_pane_t5_ParamLimits

0x60d4,	// (0x00021d62) cale_month_day_heading_pane_t6_ParamLimits

0x6165,	// (0x00021df3) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x0002af3f) cale_month_day_heading_pane_t_ParamLimits

0xc814,	// (0x000284a2) smil_status_volume_pane

0x6f7b,	// (0x00022c09) postcard_address_pane_ParamLimits

0x6f7b,	// (0x00022c09) postcard_address_pane

0x6f87,	// (0x00022c15) postcard_message_pane_ParamLimits

0x6f87,	// (0x00022c15) postcard_message_pane

0x7382,	// (0x00023010) call2_cli_visual_pane_t1_ParamLimits

0x7382,	// (0x00023010) call2_cli_visual_pane_t1

0x780a,	// (0x00023498) postcard_message_pane_t1_ParamLimits

0x780a,	// (0x00023498) postcard_message_pane_t1

0x77f3,	// (0x00023481) postcard_address_pane_t1_ParamLimits

0x77f3,	// (0x00023481) postcard_address_pane_t1

0x77e4,	// (0x00023472) popup_call3_audio_in_window_ParamLimits

0x77e4,	// (0x00023472) popup_call3_audio_in_window

0x76c8,	// (0x00023356) bg_popup_call3_in_pane_ParamLimits

0x76c8,	// (0x00023356) bg_popup_call3_in_pane

0x772a,	// (0x000233b8) popup_call3_audio_in_window_g1_ParamLimits

0x772a,	// (0x000233b8) popup_call3_audio_in_window_g1

0x7742,	// (0x000233d0) popup_call3_audio_in_window_g2_ParamLimits

0x7742,	// (0x000233d0) popup_call3_audio_in_window_g2

0x775a,	// (0x000233e8) popup_call3_audio_in_window_g3_ParamLimits

0x775a,	// (0x000233e8) popup_call3_audio_in_window_g3

0x0003,

0xf61d,	// (0x0002b2ab) popup_call3_audio_in_window_g_ParamLimits

0xf61d,	// (0x0002b2ab) popup_call3_audio_in_window_g

0x7782,	// (0x00023410) popup_call3_audio_in_window_t1_ParamLimits

0x7782,	// (0x00023410) popup_call3_audio_in_window_t1

0x77aa,	// (0x00023438) popup_call3_audio_in_window_t2_ParamLimits

0x77aa,	// (0x00023438) popup_call3_audio_in_window_t2

0x77d2,	// (0x00023460) popup_call3_audio_in_window_t3_ParamLimits

0x77d2,	// (0x00023460) popup_call3_audio_in_window_t3

0x0002,

0xf626,	// (0x0002b2b4) popup_call3_audio_in_window_t_ParamLimits

0xf626,	// (0x0002b2b4) popup_call3_audio_in_window_t

0xce34,	// (0x00028ac2) bg_popup_call3_rect_pane

0xe0ad,	// (0x00029d3b) bg_popup_call3_rect_pane_g1

0xc3d1,	// (0x0002805f) bg_popup_call3_rect_pane_g2

0xe0b5,	// (0x00029d43) bg_popup_call3_rect_pane_g3

0xe0bd,	// (0x00029d4b) bg_popup_call3_rect_pane_g4

0xe0c5,	// (0x00029d53) bg_popup_call3_rect_pane_g5

0xe0cd,	// (0x00029d5b) bg_popup_call3_rect_pane_g6

0xe0d5,	// (0x00029d63) bg_popup_call3_rect_pane_g7

0x6bfd,	// (0x0002288b) mup_visualizer_osc_pane

0xcef3,	// (0x00028b81) mup_visualizer_spec_pane

0x76e8,	// (0x00023376) call3_video_qcif_pane_ParamLimits

0x76e8,	// (0x00023376) call3_video_qcif_pane

0x76fa,	// (0x00023388) call3_video_qcif_uncrop_pane_ParamLimits

0x76fa,	// (0x00023388) call3_video_qcif_uncrop_pane

0x7708,	// (0x00023396) call3_video_subqcif_pane_ParamLimits

0x7708,	// (0x00023396) call3_video_subqcif_pane

0x771a,	// (0x000233a8) call3_video_subqcif_uncrop_pane_ParamLimits

0x771a,	// (0x000233a8) call3_video_subqcif_uncrop_pane

0x7772,	// (0x00023400) popup_call3_audio_in_window_g4_ParamLimits

0x7772,	// (0x00023400) popup_call3_audio_in_window_g4

0x76b7,	// (0x00023345) mup_spec_half_pane

0x76c0,	// (0x0002334e) mup_spec_half_pane_cp

0xe312,	// (0x00029fa0) mup_osc_middle_pane

0xe31b,	// (0x00029fa9) mup_visualizer_osc_pane_g1

0x7698,	// (0x00023326) mup_spec_bar_pane_ParamLimits

0x7698,	// (0x00023326) mup_spec_bar_pane

0xe2ff,	// (0x00029f8d) mup_spec_bar_pane_g1

0xe309,	// (0x00029f97) mup_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0002b29f) mup_spec_bar_pane_g

0x4b15,	// (0x000207a3) aid_cale_week_size_cell_pane_ParamLimits

0x4b2a,	// (0x000207b8) bg_cale_heading_pane_ParamLimits

0xc40e,	// (0x0002809c) bg_cale_pane_cp01_ParamLimits

0x4b4c,	// (0x000207da) cale_week_corner_pane_ParamLimits

0x4b66,	// (0x000207f4) cale_week_day_heading_pane_ParamLimits

0x4b88,	// (0x00020816) cale_week_scroll_pane_g1_ParamLimits

0x4ba5,	// (0x00020833) cale_week_scroll_pane_g2_ParamLimits

0x4bb8,	// (0x00020846) cale_week_scroll_pane_g3_ParamLimits

0x4bcb,	// (0x00020859) cale_week_scroll_pane_g4_ParamLimits

0x4bde,	// (0x0002086c) cale_week_scroll_pane_g5_ParamLimits

0x4bf1,	// (0x0002087f) cale_week_scroll_pane_g6_ParamLimits

0x4c04,	// (0x00020892) cale_week_scroll_pane_g7_ParamLimits

0x4c17,	// (0x000208a5) cale_week_scroll_pane_g8_ParamLimits

0x4c2c,	// (0x000208ba) cale_week_scroll_pane_g9_ParamLimits

0x4c3f,	// (0x000208cd) cale_week_scroll_pane_g10_ParamLimits

0x4c52,	// (0x000208e0) cale_week_scroll_pane_g11_ParamLimits

0x4c65,	// (0x000208f3) cale_week_scroll_pane_g12_ParamLimits

0x4c7c,	// (0x0002090a) cale_week_scroll_pane_g13_ParamLimits

0x4c97,	// (0x00020925) cale_week_scroll_pane_g14_ParamLimits

0x4cb2,	// (0x00020940) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x0002ae47) cale_week_scroll_pane_g_ParamLimits

0x4ccd,	// (0x0002095b) cale_week_time_pane_ParamLimits

0x4ce2,	// (0x00020970) grid_cale_week_pane_ParamLimits

0xc42c,	// (0x000280ba) listscroll_cale_week_pane_t1

0xc43e,	// (0x000280cc) scroll_pane_cp08_ParamLimits

0x591f,	// (0x000215ad) cale_month_corner_pane_ParamLimits

0xc7ea,	// (0x00028478) cale_month_pane_t1

0x5da7,	// (0x00021a35) cale_month_week_pane_ParamLimits

0xcbaa,	// (0x00028838) popup_call_status_window_g1_ParamLimits

0x663d,	// (0x000222cb) popup_call_status_window_g2_ParamLimits

0x6649,	// (0x000222d7) popup_call_status_window_g3_ParamLimits

0xf361,	// (0x0002afef) popup_call_status_window_g_ParamLimits

0xcb8e,	// (0x0002881c) aid_call2_pane

0x6e99,	// (0x00022b27) msg_header_pane_g1

0x6f7b,	// (0x00022c09) postcard_address2_pane_ParamLimits

0x6f7b,	// (0x00022c09) postcard_address2_pane

0x6f87,	// (0x00022c15) postcard_message2_pane_ParamLimits

0x6f87,	// (0x00022c15) postcard_message2_pane

0x7630,	// (0x000232be) message2_row_pane_ParamLimits

0x7630,	// (0x000232be) message2_row_pane

0x764b,	// (0x000232d9) address2_row_pane_ParamLimits

0x764b,	// (0x000232d9) address2_row_pane

0xe2cd,	// (0x00029f5b) postcard_message2_row_pane_g1

0xe2d5,	// (0x00029f63) postcard_message2_row_pane_t1

0xe2cd,	// (0x00029f5b) address2_row_pane_g1

0xe2d5,	// (0x00029f63) address2_row_pane_t1

0x339a,	// (0x0001f028) aid_size_cell_vorec

0xbfc2,	// (0x00027c50) main_rss_pane

0x765e,	// (0x000232ec) rss_list_single_pane_ParamLimits

0x765e,	// (0x000232ec) rss_list_single_pane

0xe2e3,	// (0x00029f71) rss_list_single_pane_t1

0xe2f1,	// (0x00029f7f) rss_list_single_pane_t2

0x0001,

0xf60c,	// (0x0002b29a) rss_list_single_pane_t

0xbfc2,	// (0x00027c50) main_camera2_pane

0xbfc2,	// (0x00027c50) main_video2_pane

0x3748,	// (0x0001f3d6) cams_zoom_pane_cp2_ParamLimits

0x3748,	// (0x0001f3d6) cams_zoom_pane_cp2

0x3754,	// (0x0001f3e2) image2_vga_pane_ParamLimits

0x3754,	// (0x0001f3e2) image2_vga_pane

0x3763,	// (0x0001f3f1) main_camera2_pane_g1_ParamLimits

0x3763,	// (0x0001f3f1) main_camera2_pane_g1

0x376f,	// (0x0001f3fd) main_camera2_pane_g2_ParamLimits

0x376f,	// (0x0001f3fd) main_camera2_pane_g2

0x377b,	// (0x0001f409) main_camera2_pane_g3_ParamLimits

0x377b,	// (0x0001f409) main_camera2_pane_g3

0x3787,	// (0x0001f415) main_camera2_pane_g4_ParamLimits

0x3787,	// (0x0001f415) main_camera2_pane_g4

0x3793,	// (0x0001f421) main_camera2_pane_g5_ParamLimits

0x3793,	// (0x0001f421) main_camera2_pane_g5

0x379f,	// (0x0001f42d) main_camera2_pane_g6_ParamLimits

0x379f,	// (0x0001f42d) main_camera2_pane_g6

0x37ab,	// (0x0001f439) main_camera2_pane_g7_ParamLimits

0x37ab,	// (0x0001f439) main_camera2_pane_g7

0x37b7,	// (0x0001f445) main_camera2_pane_g8_ParamLimits

0x37b7,	// (0x0001f445) main_camera2_pane_g8

0x0008,

0xf62d,	// (0x0002b2bb) main_camera2_pane_g_ParamLimits

0xf62d,	// (0x0002b2bb) main_camera2_pane_g

0x37cf,	// (0x0001f45d) main_camera2_pane_t1_ParamLimits

0x37cf,	// (0x0001f45d) main_camera2_pane_t1

0x37e1,	// (0x0001f46f) main_camera2_pane_t2_ParamLimits

0x37e1,	// (0x0001f46f) main_camera2_pane_t2

0x37f3,	// (0x0001f481) main_camera2_pane_t3_ParamLimits

0x37f3,	// (0x0001f481) main_camera2_pane_t3

0x3805,	// (0x0001f493) main_camera2_pane_t4_ParamLimits

0x3805,	// (0x0001f493) main_camera2_pane_t4

0x0006,

0xf640,	// (0x0002b2ce) main_camera2_pane_t_ParamLimits

0xf640,	// (0x0002b2ce) main_camera2_pane_t

0x3867,	// (0x0001f4f5) cams_zoom_pane_cp4_ParamLimits

0x3867,	// (0x0001f4f5) cams_zoom_pane_cp4

0x3877,	// (0x0001f505) image2_cif_pane_ParamLimits

0x3877,	// (0x0001f505) image2_cif_pane

0x388c,	// (0x0001f51a) image2_subqcif_pane_ParamLimits

0x388c,	// (0x0001f51a) image2_subqcif_pane

0x389b,	// (0x0001f529) main_video2_pane_g1_ParamLimits

0x389b,	// (0x0001f529) main_video2_pane_g1

0x38ad,	// (0x0001f53b) main_video2_pane_g2_ParamLimits

0x38ad,	// (0x0001f53b) main_video2_pane_g2

0x38bd,	// (0x0001f54b) main_video2_pane_g3_ParamLimits

0x38bd,	// (0x0001f54b) main_video2_pane_g3

0x38cd,	// (0x0001f55b) main_video2_pane_g4_ParamLimits

0x38cd,	// (0x0001f55b) main_video2_pane_g4

0x38dd,	// (0x0001f56b) main_video2_pane_g5_ParamLimits

0x38dd,	// (0x0001f56b) main_video2_pane_g5

0x38ed,	// (0x0001f57b) main_video2_pane_g6_ParamLimits

0x38ed,	// (0x0001f57b) main_video2_pane_g6

0x0005,

0xf64f,	// (0x0002b2dd) main_video2_pane_g_ParamLimits

0xf64f,	// (0x0002b2dd) main_video2_pane_g

0x38ff,	// (0x0001f58d) main_video2_pane_t1_ParamLimits

0x38ff,	// (0x0001f58d) main_video2_pane_t1

0x3919,	// (0x0001f5a7) main_video2_pane_t2_ParamLimits

0x3919,	// (0x0001f5a7) main_video2_pane_t2

0x393f,	// (0x0001f5cd) main_video2_pane_t3_ParamLimits

0x393f,	// (0x0001f5cd) main_video2_pane_t3

0x0002,

0xf65c,	// (0x0002b2ea) main_video2_pane_t_ParamLimits

0xf65c,	// (0x0002b2ea) main_video2_pane_t

0x74d4,	// (0x00023162) call_muted_g2

0x0001,

0xf5fe,	// (0x0002b28c) call_muted_g

0xbfc2,	// (0x00027c50) main_mup2_pane

0xe352,	// (0x00029fe0) main_mup2_pane_g1_ParamLimits

0xe352,	// (0x00029fe0) main_mup2_pane_g1

0x7825,	// (0x000234b3) main_mup2_pane_g2_ParamLimits

0x7825,	// (0x000234b3) main_mup2_pane_g2

0x398e,	// (0x0001f61c) main_mup_pane_g13_cp1

0x3996,	// (0x0001f624) mup_volume_pane_cp1

0x7845,	// (0x000234d3) main_mup2_pane_g4_ParamLimits

0x7845,	// (0x000234d3) main_mup2_pane_g4

0x785a,	// (0x000234e8) main_mup2_pane_g5_ParamLimits

0x785a,	// (0x000234e8) main_mup2_pane_g5

0x786f,	// (0x000234fd) main_mup2_pane_g6_ParamLimits

0x786f,	// (0x000234fd) main_mup2_pane_g6

0x7884,	// (0x00023512) main_mup2_pane_g7_ParamLimits

0x7884,	// (0x00023512) main_mup2_pane_g7

0x0006,

0xf663,	// (0x0002b2f1) main_mup2_pane_g_ParamLimits

0xf663,	// (0x0002b2f1) main_mup2_pane_g

0x78a0,	// (0x0002352e) main_mup2_pane_t1_ParamLimits

0x78a0,	// (0x0002352e) main_mup2_pane_t1

0x78b7,	// (0x00023545) main_mup2_pane_t2_ParamLimits

0x78b7,	// (0x00023545) main_mup2_pane_t2

0x78ce,	// (0x0002355c) main_mup2_pane_t3_ParamLimits

0x78ce,	// (0x0002355c) main_mup2_pane_t3

0x78e5,	// (0x00023573) main_mup2_pane_t4_ParamLimits

0x78e5,	// (0x00023573) main_mup2_pane_t4

0x78ff,	// (0x0002358d) main_mup2_pane_t5_ParamLimits

0x78ff,	// (0x0002358d) main_mup2_pane_t5

0x7919,	// (0x000235a7) main_mup2_pane_t6_ParamLimits

0x7919,	// (0x000235a7) main_mup2_pane_t6

0x0005,

0xf672,	// (0x0002b300) main_mup2_pane_t_ParamLimits

0xf672,	// (0x0002b300) main_mup2_pane_t

0x7951,	// (0x000235df) mup2_visualizer_pane_ParamLimits

0x7951,	// (0x000235df) mup2_visualizer_pane

0x7987,	// (0x00023615) mup_progress_pane_cp_ParamLimits

0x7987,	// (0x00023615) mup_progress_pane_cp

0x3979,	// (0x0001f607) mup_volume_pane_cp_ParamLimits

0x3979,	// (0x0001f607) mup_volume_pane_cp

0x799e,	// (0x0002362c) mup2_visualizer_pane_g1_ParamLimits

0x799e,	// (0x0002362c) mup2_visualizer_pane_g1

0xe35e,	// (0x00029fec) mup2_visualizer_pane_g2_ParamLimits

0xe35e,	// (0x00029fec) mup2_visualizer_pane_g2

0x79b3,	// (0x00023641) mup2_visualizer_pane_g3_ParamLimits

0x79b3,	// (0x00023641) mup2_visualizer_pane_g3

0x0002,

0xf67f,	// (0x0002b30d) mup2_visualizer_pane_g_ParamLimits

0xf67f,	// (0x0002b30d) mup2_visualizer_pane_g

0xd192,	// (0x00028e20) aid_size_cell_fmradio

0x3551,	// (0x0001f1df) aid_height_parent_landcape

0xc648,	// (0x000282d6) wml_content_pane_cp

0xc650,	// (0x000282de) wml_tabs_pane

0xc659,	// (0x000282e7) popup_wml_miniature_window

0xc661,	// (0x000282ef) scroll_pane_cp021

0xc675,	// (0x00028303) wml_content_pane_comp8

0xbfc2,	// (0x00027c50) bg_popup_sub_pane_cp05

0xe37c,	// (0x0002a00a) popup_wml_miniature_window_g1

0xe384,	// (0x0002a012) wml_miniature_view_pane

0x79c1,	// (0x0002364f) aid_size_wml_view

0x79c9,	// (0x00023657) wml_miniature_view_pane_g1

0x79d2,	// (0x00023660) wml_miniature_view_pane_g2

0x79db,	// (0x00023669) wml_miniature_view_pane_g3

0x79e3,	// (0x00023671) wml_miniature_view_pane_g4

0x79eb,	// (0x00023679) wml_miniature_view_pane_g5

0x79f3,	// (0x00023681) wml_miniature_view_pane_g6

0x79fb,	// (0x00023689) wml_miniature_view_pane_g7

0x7a03,	// (0x00023691) wml_miniature_view_pane_g8

0x0007,

0xf686,	// (0x0002b314) wml_miniature_view_pane_g

0xe352,	// (0x00029fe0) background_graphic_ParamLimits

0xe352,	// (0x00029fe0) background_graphic

0xe38c,	// (0x0002a01a) wml_tabs_2_pane

0xe395,	// (0x0002a023) wml_tabs_3_pane_ParamLimits

0xe395,	// (0x0002a023) wml_tabs_3_pane

0xe3a7,	// (0x0002a035) wml_tabs_4_pane_ParamLimits

0xe3a7,	// (0x0002a035) wml_tabs_4_pane

0xe3bd,	// (0x0002a04b) wml_tabs_5_pane_ParamLimits

0xe3bd,	// (0x0002a04b) wml_tabs_5_pane

0xe3d7,	// (0x0002a065) wml_tabs_pane_g2_ParamLimits

0xe3d7,	// (0x0002a065) wml_tabs_pane_g2

0xe3eb,	// (0x0002a079) wml_tabs_pane_g3_ParamLimits

0xe3eb,	// (0x0002a079) wml_tabs_pane_g3

0x7a0b,	// (0x00023699) wml_tabs_2_active_pane_ParamLimits

0x7a0b,	// (0x00023699) wml_tabs_2_active_pane

0x7a1b,	// (0x000236a9) wml_tabs_2_passive_pane_ParamLimits

0x7a1b,	// (0x000236a9) wml_tabs_2_passive_pane

0x7a2b,	// (0x000236b9) wml_tabs_3_active_pane_cp_ParamLimits

0x7a2b,	// (0x000236b9) wml_tabs_3_active_pane_cp

0x7a3c,	// (0x000236ca) wml_tabs_3_passive_pane_ParamLimits

0x7a3c,	// (0x000236ca) wml_tabs_3_passive_pane

0x7a4d,	// (0x000236db) wml_tabs_3_passive_pane_cp_ParamLimits

0x7a4d,	// (0x000236db) wml_tabs_3_passive_pane_cp

0x7a5e,	// (0x000236ec) tabs_4_active_pane

0x7a66,	// (0x000236f4) tabs_4_passive_pane

0x7a6e,	// (0x000236fc) tabs_4_passive_pane_cp

0x7a76,	// (0x00023704) tabs_4_passive_pane_cp2

0x73af,	// (0x0002303d) aid_height_text

0x6bca,	// (0x00022858) mup_volume_cont_pane_ParamLimits

0x6bca,	// (0x00022858) mup_volume_cont_pane

0x47f0,	// (0x0002047e) aid_size_cell_pinb

0x47fa,	// (0x00020488) aid_size_list_pinb

0x7970,	// (0x000235fe) mup2_volume_cont_pane_ParamLimits

0x7970,	// (0x000235fe) mup2_volume_cont_pane

0x3965,	// (0x0001f5f3) mup2_volume_cont_pane_g1_ParamLimits

0x3965,	// (0x0001f5f3) mup2_volume_cont_pane_g1

0x2e28,	// (0x0001eab6) aid_size_cell_touch_ParamLimits

0x2e28,	// (0x0001eab6) aid_size_cell_touch

0x30b0,	// (0x0001ed3e) touch_pane_ParamLimits

0x30b0,	// (0x0001ed3e) touch_pane

0x30a6,	// (0x0001ed34) main_rss2_pane

0xe408,	// (0x0002a096) listscroll_rss2_pane

0xe411,	// (0x0002a09f) rss2_navigation_pane

0xe419,	// (0x0002a0a7) list_rss2_pane

0xcceb,	// (0x00028979) scroll_pane_cp22

0xe421,	// (0x0002a0af) rss2_navigation_pane_g1

0xe42a,	// (0x0002a0b8) rss2_navigation_pane_g2

0xe432,	// (0x0002a0c0) rss2_navigation_pane_g3

0x0002,

0xf697,	// (0x0002b325) rss2_navigation_pane_g

0xe43a,	// (0x0002a0c8) rss2_navigation_pane_t1

0x7a7e,	// (0x0002370c) rss2_list_single_pane_ParamLimits

0x7a7e,	// (0x0002370c) rss2_list_single_pane

0xe448,	// (0x0002a0d6) rss2_list_single_pane_t2

0xe45f,	// (0x0002a0ed) rss2_list_single_pane_t3_ParamLimits

0xe45f,	// (0x0002a0ed) rss2_list_single_pane_t3

0xe47c,	// (0x0002a10a) rss2_list_single_pane_t4

0x640b,	// (0x00022099) smil_status_pane_g1

0x3568,	// (0x0001f1f6) main_image2_pane_ParamLimits

0x3568,	// (0x0001f1f6) main_image2_pane

0x37c3,	// (0x0001f451) main_camera2_pane_g9_ParamLimits

0x37c3,	// (0x0001f451) main_camera2_pane_g9

0x3817,	// (0x0001f4a5) main_camera2_pane_t5_ParamLimits

0x3817,	// (0x0001f4a5) main_camera2_pane_t5

0x3829,	// (0x0001f4b7) main_camera2_pane_t6_ParamLimits

0x3829,	// (0x0001f4b7) main_camera2_pane_t6

0x7aaf,	// (0x0002373d) main_image2_pane_g1_ParamLimits

0x7aaf,	// (0x0002373d) main_image2_pane_g1

0x714f,	// (0x00022ddd) smil2_video_pane_ParamLimits

0x714f,	// (0x00022ddd) smil2_video_pane

0x2e5c,	// (0x0001eaea) aid_zoom_text_primary_cp

0x304d,	// (0x0001ecdb) popup_preview_fixed_window

0xc5b1,	// (0x0002823f) im_reading_pane_g1

0x370d,	// (0x0001f39b) cams2_bc_adjust_pane_cp_ParamLimits

0x370d,	// (0x0001f39b) cams2_bc_adjust_pane_cp

0x3859,	// (0x0001f4e7) cams2_bc_adjust_pane_ParamLimits

0x3859,	// (0x0001f4e7) cams2_bc_adjust_pane

0x086e,	// (0x0001c4fc) cams2_bc_adjust_pane_g1

0x399e,	// (0x0001f62c) cams2_slider_pane

0x39a7,	// (0x0001f635) cams2_slider_pane_g1

0x39b0,	// (0x0001f63e) cams2_slider_pane_g2

0x0006,

0xf69e,	// (0x0002b32c) cams2_slider_pane_g

0x3121,	// (0x0001edaf) calc_display_pane_ParamLimits

0x313f,	// (0x0001edcd) calc_paper_pane_ParamLimits

0x315b,	// (0x0001ede9) grid_calc_pane_ParamLimits

0x34bc,	// (0x0001f14a) popup_clock_digital_window_t1_ParamLimits

0xd12f,	// (0x00028dbd) main_image_pane_t1

0x3107,	// (0x0001ed95) aid_size_cell_calc_ParamLimits

0x3107,	// (0x0001ed95) aid_size_cell_calc

0x3599,	// (0x0001f227) popup_blid_sat_info2_window_ParamLimits

0x3599,	// (0x0001f227) popup_blid_sat_info2_window

0xe492,	// (0x0002a120) aid_size_cell_blid

0xe49a,	// (0x0002a128) bg_popup_window_pane_cp07

0xe4bd,	// (0x0002a14b) grid_popup_blid_pane

0xe4c7,	// (0x0002a155) heading_pane_cp05_ParamLimits

0xe4c7,	// (0x0002a155) heading_pane_cp05

0xe591,	// (0x0002a21f) cell_popup_blid_pane_ParamLimits

0xe591,	// (0x0002a21f) cell_popup_blid_pane

0xe5b5,	// (0x0002a243) cell_popup_blid_pane_g1

0xe5bd,	// (0x0002a24b) cell_popup_blid_pane_t1

0x7936,	// (0x000235c4) mup2_indicator_pane_ParamLimits

0x7936,	// (0x000235c4) mup2_indicator_pane

0xce34,	// (0x00028ac2) mup2_visualizer_osc_pane

0xe36a,	// (0x00029ff8) mup2_visualizer_spec_pane_ParamLimits

0xe36a,	// (0x00029ff8) mup2_visualizer_spec_pane

0x7abb,	// (0x00023749) mup2_spec_half_pane

0x7ac4,	// (0x00023752) mup2_spec_half_pane_cp

0x7ace,	// (0x0002375c) mup2_spec_bar_pane_ParamLimits

0x7ace,	// (0x0002375c) mup2_spec_bar_pane

0xe2ff,	// (0x00029f8d) mup2_spec_bar_pane_g1

0xe309,	// (0x00029f97) mup2_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0002b29f) mup2_spec_bar_pane_g

0x7aed,	// (0x0002377b) mup2_osc_middle_pane

0xe31b,	// (0x00029fa9) mup2_visualizer_osc_pane_g1

0xbbcf,	// (0x0002785d) popup_number_entry_window_t1_ParamLimits

0xbbe2,	// (0x00027870) popup_number_entry_window_t2_ParamLimits

0xbbf4,	// (0x00027882) popup_number_entry_window_t3_ParamLimits

0x472d,	// (0x000203bb) popup_number_entry_window_t5_ParamLimits

0x472d,	// (0x000203bb) popup_number_entry_window_t5

0xf0d3,	// (0x0002ad61) popup_number_entry_window_t_ParamLimits

0xbc06,	// (0x00027894) text_title_cp2_ParamLimits

0x34fb,	// (0x0001f189) aid_hotspot_pointer_text2_pane

0x3545,	// (0x0001f1d3) main_viewer_pane_g9_ParamLimits

0x3545,	// (0x0001f1d3) main_viewer_pane_g9

0xc7ea,	// (0x00028478) cale_month_pane_t1_ParamLimits

0xc827,	// (0x000284b5) bg_cale_pane_ParamLimits

0xc83f,	// (0x000284cd) list_cale_pane_ParamLimits

0xc850,	// (0x000284de) listscroll_cale_day_pane_t1

0xc862,	// (0x000284f0) scroll_pane_cp09_ParamLimits

0x6c05,	// (0x00022893) main_mup_eq_pane_t1_ParamLimits

0x6c05,	// (0x00022893) main_mup_eq_pane_t1

0x6c1f,	// (0x000228ad) main_mup_eq_pane_t2_ParamLimits

0x6c1f,	// (0x000228ad) main_mup_eq_pane_t2

0x6c39,	// (0x000228c7) main_mup_eq_pane_t3_ParamLimits

0x6c39,	// (0x000228c7) main_mup_eq_pane_t3

0x6c51,	// (0x000228df) main_mup_eq_pane_t4_ParamLimits

0x6c51,	// (0x000228df) main_mup_eq_pane_t4

0x6c69,	// (0x000228f7) main_mup_eq_pane_t5_ParamLimits

0x6c69,	// (0x000228f7) main_mup_eq_pane_t5

0x6c81,	// (0x0002290f) main_mup_eq_pane_t6_ParamLimits

0x6c81,	// (0x0002290f) main_mup_eq_pane_t6

0x6c95,	// (0x00022923) main_mup_eq_pane_t7_ParamLimits

0x6c95,	// (0x00022923) main_mup_eq_pane_t7

0x6ca9,	// (0x00022937) main_mup_eq_pane_t8_ParamLimits

0x6ca9,	// (0x00022937) main_mup_eq_pane_t8

0x6cbf,	// (0x0002294d) main_mup_eq_pane_t9_ParamLimits

0x6cbf,	// (0x0002294d) main_mup_eq_pane_t9

0x6cd7,	// (0x00022965) main_mup_eq_pane_t10_ParamLimits

0x6cd7,	// (0x00022965) main_mup_eq_pane_t10

0x0009,

0xf460,	// (0x0002b0ee) main_mup_eq_pane_t_ParamLimits

0xf460,	// (0x0002b0ee) main_mup_eq_pane_t

0x6d94,	// (0x00022a22) mup_equalizer_pane_cp5_ParamLimits

0x6daa,	// (0x00022a38) mup_equalizer_pane_cp6_ParamLimits

0x6dc2,	// (0x00022a50) mup_equalizer_pane_cp7_ParamLimits

0x30a6,	// (0x0001ed34) main_gallery_pane

0xe324,	// (0x00029fb2) smil2_volume_pane

0xe32c,	// (0x00029fba) smil_status_volume_pane_g1_ParamLimits

0xe33f,	// (0x00029fcd) smil_status_volume_pane_g2_ParamLimits

0x36dd,	// (0x0001f36b) smil_status_volume_pane_g3_ParamLimits

0xf616,	// (0x0002b2a4) smil_status_volume_pane_g_ParamLimits

0xe49a,	// (0x0002a128) bg_popup_window_pane_cp07_ParamLimits

0xe4a8,	// (0x0002a136) blid_firmament_pane

0x7af6,	// (0x00023784) aid_size_cell_gallery_ParamLimits

0x7af6,	// (0x00023784) aid_size_cell_gallery

0x7b04,	// (0x00023792) grid_gallery_pane_ParamLimits

0x7b04,	// (0x00023792) grid_gallery_pane

0x7b14,	// (0x000237a2) cell_gallery_pane_ParamLimits

0x7b14,	// (0x000237a2) cell_gallery_pane

0xe5cb,	// (0x0002a259) bg_cell_gallery_focus_pane_ParamLimits

0xe5cb,	// (0x0002a259) bg_cell_gallery_focus_pane

0xe5dd,	// (0x0002a26b) cell_gallery_pane_g1_ParamLimits

0xe5dd,	// (0x0002a26b) cell_gallery_pane_g1

0x7b62,	// (0x000237f0) cell_gallery_pane_g2_ParamLimits

0x7b62,	// (0x000237f0) cell_gallery_pane_g2

0x7b6f,	// (0x000237fd) cell_gallery_pane_g3_ParamLimits

0x7b6f,	// (0x000237fd) cell_gallery_pane_g3

0xe5e9,	// (0x0002a277) cell_gallery_pane_g4_ParamLimits

0xe5e9,	// (0x0002a277) cell_gallery_pane_g4

0x0003,

0xf6c4,	// (0x0002b352) cell_gallery_pane_g_ParamLimits

0xf6c4,	// (0x0002b352) cell_gallery_pane_g

0xe5f5,	// (0x0002a283) bg_cell_gallery_focus_pane_g1

0xe5fd,	// (0x0002a28b) bg_cell_gallery_focus_pane_g2

0xe605,	// (0x0002a293) bg_cell_gallery_focus_pane_g3

0xe60d,	// (0x0002a29b) bg_cell_gallery_focus_pane_g4

0xe615,	// (0x0002a2a3) bg_cell_gallery_focus_pane_g5

0xe61d,	// (0x0002a2ab) bg_cell_gallery_focus_pane_g6

0xe625,	// (0x0002a2b3) bg_cell_gallery_focus_pane_g7

0xe62d,	// (0x0002a2bb) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6cd,	// (0x0002b35b) bg_cell_gallery_focus_pane_g

0xe635,	// (0x0002a2c3) aid_firma_cardinal

0xe649,	// (0x0002a2d7) blid_firmament_pane_t1

0xe660,	// (0x0002a2ee) blid_firmament_pane_t2

0xe677,	// (0x0002a305) blid_firmament_pane_t3

0xe68e,	// (0x0002a31c) blid_firmament_pane_t4

0x0003,

0xf6de,	// (0x0002b36c) blid_firmament_pane_t

0xe6a5,	// (0x0002a333) blid_sat_info_pane

0xe6b5,	// (0x0002a343) blid_sat_info_pane_g1

0xe6b5,	// (0x0002a343) blid_sat_info_pane_g2

0x0001,

0xf6e7,	// (0x0002b375) blid_sat_info_pane_g

0xe6bf,	// (0x0002a34d) blid_sat_info_pane_t1

0xe6cd,	// (0x0002a35b) smil2_volume_content_pane

0xe6d6,	// (0x0002a364) smil2_volume_pane_g1

0xe456,	// (0x0002a0e4) smil2_volume_content_pane_g1

0xe6de,	// (0x0002a36c) smil2_volume_content_pane_g2

0xe6e7,	// (0x0002a375) smil2_volume_content_pane_g3

0xe6f0,	// (0x0002a37e) smil2_volume_content_pane_g4

0xe6f9,	// (0x0002a387) smil2_volume_content_pane_g5

0xe702,	// (0x0002a390) smil2_volume_content_pane_g6

0xe70b,	// (0x0002a399) smil2_volume_content_pane_g7

0xe714,	// (0x0002a3a2) smil2_volume_content_pane_g8

0xe71d,	// (0x0002a3ab) smil2_volume_content_pane_g9

0xe726,	// (0x0002a3b4) smil2_volume_content_pane_g10

0x0009,

0xf6ec,	// (0x0002b37a) smil2_volume_content_pane_g

0x4d63,	// (0x000209f1) cale_week_day_heading_pane_t1_ParamLimits

0x4d9e,	// (0x00020a2c) cale_week_day_heading_pane_t2_ParamLimits

0x4dd9,	// (0x00020a67) cale_week_day_heading_pane_t3_ParamLimits

0x4e14,	// (0x00020aa2) cale_week_day_heading_pane_t4_ParamLimits

0x4e4f,	// (0x00020add) cale_week_day_heading_pane_t5_ParamLimits

0x4e8a,	// (0x00020b18) cale_week_day_heading_pane_t6_ParamLimits

0x4ec5,	// (0x00020b53) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x0002ae66) cale_week_day_heading_pane_t_ParamLimits

0xc45b,	// (0x000280e9) bg_cale_side_pane_ParamLimits

0x32b2,	// (0x0001ef40) cale_week_time_pane_t1_ParamLimits

0x32cc,	// (0x0001ef5a) cale_week_time_pane_t2_ParamLimits

0x32e6,	// (0x0001ef74) cale_week_time_pane_t3_ParamLimits

0x3300,	// (0x0001ef8e) cale_week_time_pane_t4_ParamLimits

0x331a,	// (0x0001efa8) cale_week_time_pane_t5_ParamLimits

0x3334,	// (0x0001efc2) cale_week_time_pane_t6_ParamLimits

0x3354,	// (0x0001efe2) cale_week_time_pane_t7_ParamLimits

0x3376,	// (0x0001f004) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x0002ae75) cale_week_time_pane_t_ParamLimits

0x4f00,	// (0x00020b8e) cell_cale_week_pane_g2_ParamLimits

0xc45b,	// (0x000280e9) bg_cale_side_pane_cp01_ParamLimits

0x620e,	// (0x00021e9c) cale_month_week_pane_t1_ParamLimits

0x6227,	// (0x00021eb5) cale_month_week_pane_t2_ParamLimits

0x6240,	// (0x00021ece) cale_month_week_pane_t3_ParamLimits

0x6259,	// (0x00021ee7) cale_month_week_pane_t4_ParamLimits

0x6272,	// (0x00021f00) cale_month_week_pane_t5_ParamLimits

0x6293,	// (0x00021f21) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x0002af4e) cale_month_week_pane_t_ParamLimits

0x3418,	// (0x0001f0a6) cell_cale_month_pane_g1_ParamLimits

0x30a6,	// (0x0001ed34) main_cale_event_viewer_pane

0xbba5,	// (0x00027833) listscroll_cale_event_viewer_pane

0xe72f,	// (0x0002a3bd) list_cale_ev_pane

0xe737,	// (0x0002a3c5) scroll_pane_cp023

0xe743,	// (0x0002a3d1) field_cale_ev_pane_ParamLimits

0xe743,	// (0x0002a3d1) field_cale_ev_pane

0xe761,	// (0x0002a3ef) field_cale_ev_content_pane_ParamLimits

0xe761,	// (0x0002a3ef) field_cale_ev_content_pane

0xe76d,	// (0x0002a3fb) field_cale_ev_pane_g1_ParamLimits

0xe76d,	// (0x0002a3fb) field_cale_ev_pane_g1

0xe779,	// (0x0002a407) field_cale_ev_pane_g2_ParamLimits

0xe779,	// (0x0002a407) field_cale_ev_pane_g2

0xe791,	// (0x0002a41f) field_cale_ev_pane_g3_ParamLimits

0xe791,	// (0x0002a41f) field_cale_ev_pane_g3

0x0002,

0xf701,	// (0x0002b38f) field_cale_ev_pane_g_ParamLimits

0xf701,	// (0x0002b38f) field_cale_ev_pane_g

0xe7a9,	// (0x0002a437) field_cale_ev_pane_t1_ParamLimits

0xe7a9,	// (0x0002a437) field_cale_ev_pane_t1

0xe7c0,	// (0x0002a44e) field_cale_ev_content_pane_t1_ParamLimits

0xe7c0,	// (0x0002a44e) field_cale_ev_content_pane_t1

0x6e90,	// (0x00022b1e) bg_button_pane_cp01

0x4b05,	// (0x00020793) listscroll_cale_week_pane_ParamLimits

0xc405,	// (0x00028093) popup_toolbar_window_cp01

0xc42c,	// (0x000280ba) listscroll_cale_week_pane_t1_ParamLimits

0x4b05,	// (0x00020793) listscroll_cale_day_pane_ParamLimits

0xc405,	// (0x00028093) popup_toolbar_window_cp02

0xc850,	// (0x000284de) listscroll_cale_day_pane_t1_ParamLimits

0x4b05,	// (0x00020793) main_cale_month_pane_ParamLimits

0x36a0,	// (0x0001f32e) popup_toolbar_window_cp03_ParamLimits

0x36a0,	// (0x0001f32e) popup_toolbar_window_cp03

0x7065,	// (0x00022cf3) main_image_pane_g2_ParamLimits

0x7065,	// (0x00022cf3) main_image_pane_g2

0x7071,	// (0x00022cff) main_image_pane_g3_ParamLimits

0x7071,	// (0x00022cff) main_image_pane_g3

0x0002,

0xf4f2,	// (0x0002b180) main_image_pane_g_ParamLimits

0xf4f2,	// (0x0002b180) main_image_pane_g

0xd12f,	// (0x00028dbd) main_image_pane_t1_ParamLimits

0x707d,	// (0x00022d0b) main_image_pane_t2_ParamLimits

0x707d,	// (0x00022d0b) main_image_pane_t2

0x708f,	// (0x00022d1d) main_image_pane_t3_ParamLimits

0x708f,	// (0x00022d1d) main_image_pane_t3

0x70a1,	// (0x00022d2f) main_image_pane_t4_ParamLimits

0x70a1,	// (0x00022d2f) main_image_pane_t4

0x0003,

0xf4f9,	// (0x0002b187) main_image_pane_t_ParamLimits

0xf4f9,	// (0x0002b187) main_image_pane_t

0x70b3,	// (0x00022d41) popup_image_details_window_cp01

0x70bd,	// (0x00022d4b) popup_toobar_trans_pane_cp01_ParamLimits

0x70bd,	// (0x00022d4b) popup_toobar_trans_pane_cp01

0x35f0,	// (0x0001f27e) popup_image_details_window_ParamLimits

0x35f0,	// (0x0001f27e) popup_image_details_window

0x35fe,	// (0x0001f28c) popup_image_focus_window

0x36ff,	// (0x0001f38d) camera2_autofocus_pane_ParamLimits

0x36ff,	// (0x0001f38d) camera2_autofocus_pane

0xbba5,	// (0x00027833) bg_popup_sub_pane_cp06

0xe7de,	// (0x0002a46c) popup_image_focus_window_g1

0xe7e6,	// (0x0002a474) popup_image_focus_window_g2

0xe7ee,	// (0x0002a47c) popup_image_focus_window_g3

0xe7f6,	// (0x0002a484) popup_image_focus_window_g4

0x0003,

0xf708,	// (0x0002b396) popup_image_focus_window_g

0xe7fe,	// (0x0002a48c) popup_image_focus_window_t1

0xe80c,	// (0x0002a49a) popup_image_focus_window_t2

0xe81c,	// (0x0002a4aa) popup_image_focus_window_t3

0x0002,

0xf711,	// (0x0002b39f) popup_image_focus_window_t

0xe82a,	// (0x0002a4b8) camera2_autofocus_pane_g1

0xc193,	// (0x00027e21) bg_tb_trans_pane_cp01

0xe838,	// (0x0002a4c6) popup_image_details_window_g1

0xe84b,	// (0x0002a4d9) popup_image_details_window_g2

0x0002,

0xf723,	// (0x0002b3b1) popup_image_details_window_g

0xe874,	// (0x0002a502) popup_image_details_window_t1

0xe886,	// (0x0002a514) popup_image_details_window_t2

0xe89f,	// (0x0002a52d) popup_image_details_window_t3

0xe8b3,	// (0x0002a541) popup_image_details_window_t4

0xe8ce,	// (0x0002a55c) popup_image_details_window_t5

0x0004,

0xf72a,	// (0x0002b3b8) popup_image_details_window_t

0xc2dc,	// (0x00027f6a) bg_calc_paper_pane_ParamLimits

0x30a6,	// (0x0001ed34) grid_highlight_pane_cp013

0x3187,	// (0x0001ee15) list_calc_pane_ParamLimits

0x3199,	// (0x0001ee27) scroll_pane_cp024

0xc2f0,	// (0x00027f7e) bg_calc_display_pane_ParamLimits

0x31a1,	// (0x0001ee2f) calc_display_pane_t1_ParamLimits

0x31b6,	// (0x0001ee44) calc_display_pane_t2_ParamLimits

0x31cb,	// (0x0001ee59) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x0002ade8) calc_display_pane_t_ParamLimits

0x3234,	// (0x0001eec2) cell_calc_pane_g2

0x0001,

0xf177,	// (0x0002ae05) cell_calc_pane_g

0x323d,	// (0x0001eecb) cell_calc_pane_t1

0xc34f,	// (0x00027fdd) grid_highlight_pane_cp02_ParamLimits

0xc365,	// (0x00027ff3) toolbar_button_pane_cp01_ParamLimits

0xc365,	// (0x00027ff3) toolbar_button_pane_cp01

0xd174,	// (0x00028e02) temp_image_control_pane_ParamLimits

0xd174,	// (0x00028e02) temp_image_control_pane

0x3568,	// (0x0001f1f6) main_mp3_pane

0xe8e8,	// (0x0002a576) temp_image_control_pane_g1_ParamLimits

0xe8e8,	// (0x0002a576) temp_image_control_pane_g1

0xe8f6,	// (0x0002a584) temp_image_control_pane_g2_ParamLimits

0xe8f6,	// (0x0002a584) temp_image_control_pane_g2

0xe908,	// (0x0002a596) temp_image_control_pane_g3_ParamLimits

0xe908,	// (0x0002a596) temp_image_control_pane_g3

0x7bac,	// (0x0002383a) temp_image_control_pane_g4_ParamLimits

0x7bac,	// (0x0002383a) temp_image_control_pane_g4

0x0003,

0xf735,	// (0x0002b3c3) temp_image_control_pane_g_ParamLimits

0xf735,	// (0x0002b3c3) temp_image_control_pane_g

0xe8e8,	// (0x0002a576) main_mp3_pane_g1

0x7bbd,	// (0x0002384b) main_mp3_pane_g2

0x0007,

0xf73e,	// (0x0002b3cc) main_mp3_pane_g

0xe94b,	// (0x0002a5d9) main_mp3_pane_t1

0xc4c0,	// (0x0002814e) main_camera_pane_g8_ParamLimits

0xc4c0,	// (0x0002814e) main_camera_pane_g8

0x511a,	// (0x00020da8) main_video_pane_g7_ParamLimits

0x511a,	// (0x00020da8) main_video_pane_g7

0x3847,	// (0x0001f4d5) main_camera2_pane_t7_ParamLimits

0x3847,	// (0x0001f4d5) main_camera2_pane_t7

0xc608,	// (0x00028296) scroll_pane_cp025_ParamLimits

0xc608,	// (0x00028296) scroll_pane_cp025

0xc61c,	// (0x000282aa) scroll_pane_cp026_ParamLimits

0xc61c,	// (0x000282aa) scroll_pane_cp026

0xc62b,	// (0x000282b9) wml_content_pane_ParamLimits

0x30a6,	// (0x0001ed34) main_touch_calib_pane

0x7c61,	// (0x000238ef) main_touch_calib_pane_g1

0x7c6d,	// (0x000238fb) main_touch_calib_pane_g2

0x7c79,	// (0x00023907) main_touch_calib_pane_g3

0x7c85,	// (0x00023913) main_touch_calib_pane_g4

0x0003,

0xf75c,	// (0x0002b3ea) main_touch_calib_pane_g

0x7c91,	// (0x0002391f) main_touch_calib_pane_t1

0x7caa,	// (0x00023938) main_touch_calib_pane_t2

0x0004,

0xf765,	// (0x0002b3f3) main_touch_calib_pane_t

0xcd75,	// (0x00028a03) mup_progress_pane_cp02

0xcd94,	// (0x00028a22) navi_pane_g1

0xcdf6,	// (0x00028a84) navi_pane_mp_t3

0x3568,	// (0x0001f1f6) main_mp3_pane_ParamLimits

0x75ea,	// (0x00023278) navi_pane_ParamLimits

0xe8e8,	// (0x0002a576) main_mp3_pane_g1_ParamLimits

0x7bbd,	// (0x0002384b) main_mp3_pane_g2_ParamLimits

0x7bc9,	// (0x00023857) main_mp3_pane_g3_ParamLimits

0x7bc9,	// (0x00023857) main_mp3_pane_g3

0x7bd5,	// (0x00023863) main_mp3_pane_g4_ParamLimits

0x7bd5,	// (0x00023863) main_mp3_pane_g4

0xe918,	// (0x0002a5a6) main_mp3_pane_g5_ParamLimits

0xe918,	// (0x0002a5a6) main_mp3_pane_g5

0xe926,	// (0x0002a5b4) main_mp3_pane_g6_ParamLimits

0xe926,	// (0x0002a5b4) main_mp3_pane_g6

0xe933,	// (0x0002a5c1) main_mp3_pane_g7_ParamLimits

0xe933,	// (0x0002a5c1) main_mp3_pane_g7

0xe93f,	// (0x0002a5cd) main_mp3_pane_g8_ParamLimits

0xe93f,	// (0x0002a5cd) main_mp3_pane_g8

0xf73e,	// (0x0002b3cc) main_mp3_pane_g_ParamLimits

0x7be1,	// (0x0002386f) main_mp3_pane_t2

0x7bf1,	// (0x0002387f) main_mp3_pane_t3

0xe959,	// (0x0002a5e7) main_mp3_pane_t4

0xe967,	// (0x0002a5f5) main_mp3_pane_t5

0x0005,

0xf74f,	// (0x0002b3dd) main_mp3_pane_t

0xe975,	// (0x0002a603) mup_progress_pane_cp01

0x2e5c,	// (0x0001eaea) aid_zoom_text_secondary2

0xe72f,	// (0x0002a3bd) list_cale_ev2_pane

0xe737,	// (0x0002a3c5) scroll_pane_cp023_ParamLimits

0x7d05,	// (0x00023993) field_cale_ev2_pane_ParamLimits

0x7d05,	// (0x00023993) field_cale_ev2_pane

0x7d2e,	// (0x000239bc) field_cale_ev2_pane_g1_ParamLimits

0x7d2e,	// (0x000239bc) field_cale_ev2_pane_g1

0x7d3a,	// (0x000239c8) field_cale_ev2_pane_g2_ParamLimits

0x7d3a,	// (0x000239c8) field_cale_ev2_pane_g2

0x7d52,	// (0x000239e0) field_cale_ev2_pane_g3_ParamLimits

0x7d52,	// (0x000239e0) field_cale_ev2_pane_g3

0x0003,

0xf770,	// (0x0002b3fe) field_cale_ev2_pane_g_ParamLimits

0xf770,	// (0x0002b3fe) field_cale_ev2_pane_g

0x7d6a,	// (0x000239f8) field_cale_ev2_pane_t1_ParamLimits

0x7d6a,	// (0x000239f8) field_cale_ev2_pane_t1

0x7d81,	// (0x00023a0f) field_cale_ev2_pane_t2_ParamLimits

0x7d81,	// (0x00023a0f) field_cale_ev2_pane_t2

0x0001,

0xf779,	// (0x0002b407) field_cale_ev2_pane_t_ParamLimits

0xf779,	// (0x0002b407) field_cale_ev2_pane_t

0x6f45,	// (0x00022bd3) main_postcard_pane_g5_ParamLimits

0x6f45,	// (0x00022bd3) main_postcard_pane_g5

0x6f53,	// (0x00022be1) main_postcard_pane_g6_ParamLimits

0x6f53,	// (0x00022be1) main_postcard_pane_g6

0x4f64,	// (0x00020bf2) camera2_autofocus_pane_cp_ParamLimits

0x4f64,	// (0x00020bf2) camera2_autofocus_pane_cp

0x3568,	// (0x0001f1f6) main_mup3_pane

0x7d96,	// (0x00023a24) main_mup3_pane_g1_ParamLimits

0x7d96,	// (0x00023a24) main_mup3_pane_g1

0x7db7,	// (0x00023a45) main_mup3_pane_g2_ParamLimits

0x7db7,	// (0x00023a45) main_mup3_pane_g2

0x7e2f,	// (0x00023abd) main_mup3_pane_g3_ParamLimits

0x7e2f,	// (0x00023abd) main_mup3_pane_g3

0x7e72,	// (0x00023b00) main_mup3_pane_g4_ParamLimits

0x7e72,	// (0x00023b00) main_mup3_pane_g4

0x7eb5,	// (0x00023b43) main_mup3_pane_g5_ParamLimits

0x7eb5,	// (0x00023b43) main_mup3_pane_g5

0x7ef8,	// (0x00023b86) main_mup3_pane_g6_ParamLimits

0x7ef8,	// (0x00023b86) main_mup3_pane_g6

0xe9a9,	// (0x0002a637) main_mup3_pane_g7_ParamLimits

0xe9a9,	// (0x0002a637) main_mup3_pane_g7

0x0007,

0xf789,	// (0x0002b417) main_mup3_pane_g_ParamLimits

0xf789,	// (0x0002b417) main_mup3_pane_g

0x7f6e,	// (0x00023bfc) main_mup3_pane_t1_ParamLimits

0x7f6e,	// (0x00023bfc) main_mup3_pane_t1

0x7fdd,	// (0x00023c6b) main_mup3_pane_t2_ParamLimits

0x7fdd,	// (0x00023c6b) main_mup3_pane_t2

0x80a6,	// (0x00023d34) main_mup3_pane_t4_ParamLimits

0x80a6,	// (0x00023d34) main_mup3_pane_t4

0x80f4,	// (0x00023d82) main_mup3_pane_t5_ParamLimits

0x80f4,	// (0x00023d82) main_mup3_pane_t5

0x81a4,	// (0x00023e32) main_mup3_pane_t6_ParamLimits

0x81a4,	// (0x00023e32) main_mup3_pane_t6

0x0005,

0xf79a,	// (0x0002b428) main_mup3_pane_t_ParamLimits

0xf79a,	// (0x0002b428) main_mup3_pane_t

0x8250,	// (0x00023ede) mup3_progress_pane_ParamLimits

0x8250,	// (0x00023ede) mup3_progress_pane

0x82ce,	// (0x00023f5c) popup_mup3_control_window_ParamLimits

0x82ce,	// (0x00023f5c) popup_mup3_control_window

0xe9b7,	// (0x0002a645) popup_mup3_text_window

0x82e7,	// (0x00023f75) mup3_progress_pane_t1

0x8306,	// (0x00023f94) mup3_progress_pane_t2

0xe9bf,	// (0x0002a64d) mup3_progress_pane_t3

0x0002,

0xf7a7,	// (0x0002b435) mup3_progress_pane_t

0xe9dc,	// (0x0002a66a) mup_progress_pane_cp03

0xbba5,	// (0x00027833) bg_tb_trans_pane_cp04

0x8325,	// (0x00023fb3) mup3_volume_pane

0x832d,	// (0x00023fbb) popup_mup3_control_window_g1

0x8336,	// (0x00023fc4) mup3_volume_pane_g1

0x833f,	// (0x00023fcd) mup3_volume_pane_g2

0x8348,	// (0x00023fd6) mup3_volume_pane_g3

0x0002,

0xf7ae,	// (0x0002b43c) mup3_volume_pane_g

0xbba5,	// (0x00027833) bg_tb_trans_pane_cp03

0xe9ec,	// (0x0002a67a) popup_mup3_text_window_g1

0xe9f4,	// (0x0002a682) popup_mup3_text_window_t1

0xc338,	// (0x00027fc6) list_calc_item_pane_g1_ParamLimits

0xe3ff,	// (0x0002a08d) mup_volume_pane_cp_g1

0x7cc3,	// (0x00023951) main_touch_calib_pane_t3

0x7cd9,	// (0x00023967) main_touch_calib_pane_t4

0x7cef,	// (0x0002397d) main_touch_calib_pane_t5

0x2e14,	// (0x0001eaa2) aid_cell_size_toolbar2

0x2e1c,	// (0x0001eaaa) aid_popup3_width_pane

0x2e5c,	// (0x0001eaea) aid_zoom_text_msg_primary

0x3402,	// (0x0001f090) vorec_t7

0xc2fc,	// (0x00027f8a) bg_calc_paper_pane_g1_ParamLimits

0xc308,	// (0x00027f96) bg_calc_paper_pane_g2_ParamLimits

0xc314,	// (0x00027fa2) bg_calc_paper_pane_g3_ParamLimits

0xc320,	// (0x00027fae) bg_calc_paper_pane_g4_ParamLimits

0xc32c,	// (0x00027fba) bg_calc_paper_pane_g5_ParamLimits

0x49b7,	// (0x00020645) bg_calc_paper_pane_g6_ParamLimits

0x49c8,	// (0x00020656) bg_calc_paper_pane_g7_ParamLimits

0x49d9,	// (0x00020667) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x0002adef) bg_calc_paper_pane_g_ParamLimits

0x49ea,	// (0x00020678) calc_bg_paper_pane_g9_ParamLimits

0x504b,	// (0x00020cd9) image_qvga_pane_ParamLimits

0x504b,	// (0x00020cd9) image_qvga_pane

0xc22b,	// (0x00027eb9) bg_popup_sub_pane_cp04_ParamLimits

0xd0ab,	// (0x00028d39) popup_mup_playback_window_g1_ParamLimits

0xd0b7,	// (0x00028d45) popup_mup_playback_window_t1_ParamLimits

0xd0cc,	// (0x00028d5a) popup_mup_playback_window_t2_ParamLimits

0xf4ed,	// (0x0002b17b) popup_mup_playback_window_t_ParamLimits

0x7836,	// (0x000234c4) main_mup2_pane_g3_ParamLimits

0x7836,	// (0x000234c4) main_mup2_pane_g3

0x53fa,	// (0x00021088) popup_toolbar_window_cp04

0xd4ae,	// (0x0002913c) popup_call2_audio_second_window_g3_ParamLimits

0xd4ae,	// (0x0002913c) popup_call2_audio_second_window_g3

0xd8b8,	// (0x00029546) popup_call2_audio_first_window_g4_ParamLimits

0xd8b8,	// (0x00029546) popup_call2_audio_first_window_g4

0xdf37,	// (0x00029bc5) popup_call2_audio_in_window_g4_ParamLimits

0xdf37,	// (0x00029bc5) popup_call2_audio_in_window_g4

0x7058,	// (0x00022ce6) aid_area_sk_bg_cut_ParamLimits

0x7058,	// (0x00022ce6) aid_area_sk_bg_cut

0xd0e1,	// (0x00028d6f) aid_area_sk_bg_cut_2_ParamLimits

0xd0e1,	// (0x00028d6f) aid_area_sk_bg_cut_2

0x7b52,	// (0x000237e0) aid_placing_details_win

0x7b5a,	// (0x000237e8) aid_placing_details_win_2

0xe82a,	// (0x0002a4b8) camera2_autofocus_pane_g1_ParamLimits

0x303e,	// (0x0001eccc) popup_fixed_preview_cale_window_ParamLimits

0x303e,	// (0x0001eccc) popup_fixed_preview_cale_window

0xce45,	// (0x00028ad3) navi_slider_pane_g3

0xce4e,	// (0x00028adc) navi_slider_pane_g4

0xce57,	// (0x00028ae5) navi_slider_pane_g5

0xce45,	// (0x00028ad3) navi_slider_pane_g6

0x34e2,	// (0x0001f170) navi_slider_pane_g7

0xcf6a,	// (0x00028bf8) mup_scale_pane_g3

0xcf73,	// (0x00028c01) mup_scale_pane_g4

0xcf7c,	// (0x00028c0a) mup_scale_pane_g5

0x6dda,	// (0x00022a68) mup_scale_pane_g6

0x6de3,	// (0x00022a71) mup_scale_pane_g7

0xce45,	// (0x00028ad3) cams2_slider_pane_g3

0xe48a,	// (0x0002a118) cams2_slider_pane_g4

0x39b9,	// (0x0001f647) cams2_slider_pane_g5

0xce45,	// (0x00028ad3) cams2_slider_pane_g6

0x39c1,	// (0x0001f64f) cams2_slider_pane_g7

0xe6b5,	// (0x0002a343) camera2_autofocus_pane_cp_g1

0xe298,	// (0x00029f26) bg_popup_preview_window_pane_cp02_ParamLimits

0xe298,	// (0x00029f26) bg_popup_preview_window_pane_cp02

0xea02,	// (0x0002a690) list_fp_cale_pane_ParamLimits

0xea02,	// (0x0002a690) list_fp_cale_pane

0xea0e,	// (0x0002a69c) popup_fixed_preview_cale_window_t1_ParamLimits

0xea0e,	// (0x0002a69c) popup_fixed_preview_cale_window_t1

0x8351,	// (0x00023fdf) popup_fixed_preview_cale_window_t2_ParamLimits

0x8351,	// (0x00023fdf) popup_fixed_preview_cale_window_t2

0x8366,	// (0x00023ff4) popup_fixed_preview_cale_window_t3_ParamLimits

0x8366,	// (0x00023ff4) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b5,	// (0x0002b443) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b5,	// (0x0002b443) popup_fixed_preview_cale_window_t

0x837b,	// (0x00024009) list_single_fp_cale_pane_ParamLimits

0x837b,	// (0x00024009) list_single_fp_cale_pane

0xea2c,	// (0x0002a6ba) list_single_fp_cale_pane_g1_ParamLimits

0xea2c,	// (0x0002a6ba) list_single_fp_cale_pane_g1

0xea38,	// (0x0002a6c6) list_single_fp_cale_pane_g2_ParamLimits

0xea38,	// (0x0002a6c6) list_single_fp_cale_pane_g2

0x0002,

0xf7bc,	// (0x0002b44a) list_single_fp_cale_pane_g_ParamLimits

0xf7bc,	// (0x0002b44a) list_single_fp_cale_pane_g

0xea51,	// (0x0002a6df) list_single_fp_cale_pane_t1_ParamLimits

0xea51,	// (0x0002a6df) list_single_fp_cale_pane_t1

0xea63,	// (0x0002a6f1) list_single_fp_cale_pane_t2_ParamLimits

0xea63,	// (0x0002a6f1) list_single_fp_cale_pane_t2

0x0001,

0xf7c3,	// (0x0002b451) list_single_fp_cale_pane_t_ParamLimits

0xf7c3,	// (0x0002b451) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x30a6,	// (0x0001ed34) main_dialer_pane

0x838e,	// (0x0002401c) aid_cell_size_keypad

0x8398,	// (0x00024026) dialer_ne_pane

0x83a2,	// (0x00024030) grid_dialer_command_1_pane

0x83aa,	// (0x00024038) grid_dialer_command_2_pane

0x83b2,	// (0x00024040) grid_dialer_keypad_pane

0x83c4,	// (0x00024052) bg_popup_call_pane_cp06_ParamLimits

0x83c4,	// (0x00024052) bg_popup_call_pane_cp06

0x83d0,	// (0x0002405e) dialer_ne_clear_pane_ParamLimits

0x83d0,	// (0x0002405e) dialer_ne_clear_pane

0xea96,	// (0x0002a724) dialer_ne_pane_g1

0xea9e,	// (0x0002a72c) dialer_ne_pane_t1_ParamLimits

0xea9e,	// (0x0002a72c) dialer_ne_pane_t1

0x83dc,	// (0x0002406a) dialer_ne_pane_t2_ParamLimits

0x83dc,	// (0x0002406a) dialer_ne_pane_t2

0x83f9,	// (0x00024087) dialer_ne_pane_t3_ParamLimits

0x83f9,	// (0x00024087) dialer_ne_pane_t3

0x0002,

0xf7c8,	// (0x0002b456) dialer_ne_pane_t_ParamLimits

0xf7c8,	// (0x0002b456) dialer_ne_pane_t

0x841d,	// (0x000240ab) dialer_ne_pane_t3_copy1_ParamLimits

0x841d,	// (0x000240ab) dialer_ne_pane_t3_copy1

0x8441,	// (0x000240cf) cell_dialer_keypad_pane_ParamLimits

0x8441,	// (0x000240cf) cell_dialer_keypad_pane

0x8458,	// (0x000240e6) cell_dialer_command_1_pane_ParamLimits

0x8458,	// (0x000240e6) cell_dialer_command_1_pane

0x846e,	// (0x000240fc) cell_dialer_command_2_pane_ParamLimits

0x846e,	// (0x000240fc) cell_dialer_command_2_pane

0xeab0,	// (0x0002a73e) bg_button_pane_cp02_ParamLimits

0xeab0,	// (0x0002a73e) bg_button_pane_cp02

0x847d,	// (0x0002410b) cell_dialer_keypad_pane_g1_ParamLimits

0x847d,	// (0x0002410b) cell_dialer_keypad_pane_g1

0xeab0,	// (0x0002a73e) bg_button_pane_cp03_ParamLimits

0xeab0,	// (0x0002a73e) bg_button_pane_cp03

0x8492,	// (0x00024120) cell_dialer_command_1_pane_g1_ParamLimits

0x8492,	// (0x00024120) cell_dialer_command_1_pane_g1

0xeabc,	// (0x0002a74a) bg_button_pane_cp04

0x84a6,	// (0x00024134) cell_dialer_command_2_pane_g1

0xce34,	// (0x00028ac2) bg_button_pane_cp06

0xeac4,	// (0x0002a752) dialer_ne_clear_pane_g1

0x68e6,	// (0x00022574) navi_pane_g2

0x6914,	// (0x000225a2) navi_pane_g3

0x0002,

0xf3f0,	// (0x0002b07e) navi_pane_g

0x693f,	// (0x000225cd) navi_pane_mv_g2

0x6966,	// (0x000225f4) navi_pane_mv_g5

0x696e,	// (0x000225fc) navi_pane_mv_t1

0xc2f0,	// (0x00027f7e) main_clock2_pane

0x84e4,	// (0x00024172) main_clock2_list_pane_ParamLimits

0x84e4,	// (0x00024172) main_clock2_list_pane

0x850c,	// (0x0002419a) main_clock2_pane_t1_ParamLimits

0x850c,	// (0x0002419a) main_clock2_pane_t1

0x852e,	// (0x000241bc) main_clock2_pane_t2_ParamLimits

0x852e,	// (0x000241bc) main_clock2_pane_t2

0x0004,

0xf7cf,	// (0x0002b45d) main_clock2_pane_t_ParamLimits

0xf7cf,	// (0x0002b45d) main_clock2_pane_t

0x8589,	// (0x00024217) popup_clock_analogue_window_cp03_ParamLimits

0x8589,	// (0x00024217) popup_clock_analogue_window_cp03

0x85a7,	// (0x00024235) popup_clock_digital_window_cp02_ParamLimits

0x85a7,	// (0x00024235) popup_clock_digital_window_cp02

0x8614,	// (0x000242a2) main_clock2_list_single_pane_ParamLimits

0x8614,	// (0x000242a2) main_clock2_list_single_pane

0xce34,	// (0x00028ac2) list_highlight_pane_cp05

0xeae2,	// (0x0002a770) main_clock2_list_single_pane_t1

0x53fa,	// (0x00021088) popup_toolbar_window_cp04_ParamLimits

0x7b7c,	// (0x0002380a) camera2_autofocus_pane_g2_ParamLimits

0x7b7c,	// (0x0002380a) camera2_autofocus_pane_g2

0x7b88,	// (0x00023816) camera2_autofocus_pane_g3_ParamLimits

0x7b88,	// (0x00023816) camera2_autofocus_pane_g3

0x7b94,	// (0x00023822) camera2_autofocus_pane_g4_ParamLimits

0x7b94,	// (0x00023822) camera2_autofocus_pane_g4

0x7ba0,	// (0x0002382e) camera2_autofocus_pane_g5_ParamLimits

0x7ba0,	// (0x0002382e) camera2_autofocus_pane_g5

0x0004,

0xf718,	// (0x0002b3a6) camera2_autofocus_pane_g_ParamLimits

0xf718,	// (0x0002b3a6) camera2_autofocus_pane_g

0xe989,	// (0x0002a617) camera2_autofocus_pane_cp_g2

0xe991,	// (0x0002a61f) camera2_autofocus_pane_cp_g3

0xe999,	// (0x0002a627) camera2_autofocus_pane_cp_g4

0xe9a1,	// (0x0002a62f) camera2_autofocus_pane_cp_g5

0x0004,

0xf77e,	// (0x0002b40c) camera2_autofocus_pane_cp_g

0x83bc,	// (0x0002404a) popup_dialer_spcha_window

0xbba5,	// (0x00027833) bg_popup_sub_pane_cp07

0xeaf0,	// (0x0002a77e) list_spcha_pane

0xeaf8,	// (0x0002a786) list_single_spcha_pane_ParamLimits

0xeaf8,	// (0x0002a786) list_single_spcha_pane

0xbba5,	// (0x00027833) list_highlight_pane_cp06

0xeb09,	// (0x0002a797) list_single_spcha_pane_t1

0xdce1,	// (0x0002996f) popup_call2_audio_out_window_g4_ParamLimits

0xdce1,	// (0x0002996f) popup_call2_audio_out_window_g4

0x30a6,	// (0x0001ed34) main_imed2_pane

0x3606,	// (0x0001f294) popup_imed_adjust2_window

0x3619,	// (0x0001f2a7) popup_imed_trans_window_ParamLimits

0x3619,	// (0x0001f2a7) popup_imed_trans_window

0xe4f3,	// (0x0002a181) popup_blid_sat_info2_window_t1

0xe501,	// (0x0002a18f) popup_blid_sat_info2_window_t2

0x000a,

0xf6ad,	// (0x0002b33b) popup_blid_sat_info2_window_t

0x8646,	// (0x000242d4) aid_size_cell_colour_35

0x8660,	// (0x000242ee) aid_size_cell_colour_112

0x8677,	// (0x00024305) aid_size_cell_effect

0xc193,	// (0x00027e21) bg_tb_trans_pane_cp02

0xcb9e,	// (0x0002882c) heading_imed_pane

0x8691,	// (0x0002431f) listscroll_imed_pane

0xeb17,	// (0x0002a7a5) heading_imed_pane_g1

0xeb1f,	// (0x0002a7ad) heading_imed_pane_t1

0xeb2d,	// (0x0002a7bb) grid_imed_colour_35_pane_ParamLimits

0xeb2d,	// (0x0002a7bb) grid_imed_colour_35_pane

0x869d,	// (0x0002432b) grid_imed_effect_pane

0xeb44,	// (0x0002a7d2) list_imed_aspect_pane

0x86ad,	// (0x0002433b) scroll_pane_cp027_ParamLimits

0x86ad,	// (0x0002433b) scroll_pane_cp027

0x86b9,	// (0x00024347) cell_imed_effect_pane_ParamLimits

0x86b9,	// (0x00024347) cell_imed_effect_pane

0xeb4c,	// (0x0002a7da) cell_imed_colour_pane_ParamLimits

0xeb4c,	// (0x0002a7da) cell_imed_colour_pane

0xeb8e,	// (0x0002a81c) cell_imed_colour_pane_g1_ParamLimits

0xeb8e,	// (0x0002a81c) cell_imed_colour_pane_g1

0xeb9f,	// (0x0002a82d) hgihlgiht_grid_pane_cp016_ParamLimits

0xeb9f,	// (0x0002a82d) hgihlgiht_grid_pane_cp016

0x86d1,	// (0x0002435f) cell_imed_effect_pane_g1

0x86d9,	// (0x00024367) grid_highlight_pane_cp017

0xebb0,	// (0x0002a83e) list_imed_single_pane_ParamLimits

0xebb0,	// (0x0002a83e) list_imed_single_pane

0xbba5,	// (0x00027833) list_highlight_pane_cp07

0xebc5,	// (0x0002a853) list_imed_aspect_pane_comp1_t1

0xe2a4,	// (0x00029f32) bg_tb_trans_pane_cp05

0xebe7,	// (0x0002a875) popup_imed_adjust2_window_g1

0xec0e,	// (0x0002a89c) popup_imed_adjust2_window_t1

0xec26,	// (0x0002a8b4) slider_imed_adjust_pane

0xec3a,	// (0x0002a8c8) slider_imed_adjust_pane_g1

0xec4a,	// (0x0002a8d8) slider_imed_adjust_pane_g2

0xec5a,	// (0x0002a8e8) slider_imed_adjust_pane_g3

0xec6b,	// (0x0002a8f9) slider_imed_adjust_pane_g4

0x0003,

0xf7ec,	// (0x0002b47a) slider_imed_adjust_pane_g

0x86e2,	// (0x00024370) aid_size_cell_clipart2

0x86ee,	// (0x0002437c) grid_imed_clipart_pane

0xec7c,	// (0x0002a90a) scroll_pane_cp031

0x86f8,	// (0x00024386) cell_imed_clipart_pane_ParamLimits

0x86f8,	// (0x00024386) cell_imed_clipart_pane

0x871a,	// (0x000243a8) cell_imed_clipart_pane_g1

0xbba5,	// (0x00027833) grid_highlight_pane_cp014

0x84f0,	// (0x0002417e) main_clock2_pane_g1_ParamLimits

0x84f0,	// (0x0002417e) main_clock2_pane_g1

0x85bf,	// (0x0002424d) aid_call2_pane_cp10

0x85d1,	// (0x0002425f) aid_call_pane_cp10

0xcd69,	// (0x000289f7) popup_clock_analogue_window_cp10_g1

0xcd69,	// (0x000289f7) popup_clock_analogue_window_cp10_g2

0x85e3,	// (0x00024271) popup_clock_analogue_window_cp10_g3

0x85e3,	// (0x00024271) popup_clock_analogue_window_cp10_g4

0xcd69,	// (0x000289f7) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7da,	// (0x0002b468) popup_clock_analogue_window_cp10_g

0x85f5,	// (0x00024283) popup_clock_analogue_window_cp10_t1

0x39ca,	// (0x0001f658) clock_digital_number_pane_cp10_ParamLimits

0x39ca,	// (0x0001f658) clock_digital_number_pane_cp10

0x39e2,	// (0x0001f670) clock_digital_number_pane_cp11_ParamLimits

0x39e2,	// (0x0001f670) clock_digital_number_pane_cp11

0x39fa,	// (0x0001f688) clock_digital_number_pane_cp12_ParamLimits

0x39fa,	// (0x0001f688) clock_digital_number_pane_cp12

0x3a12,	// (0x0001f6a0) clock_digital_number_pane_cp13_ParamLimits

0x3a12,	// (0x0001f6a0) clock_digital_number_pane_cp13

0x3a2a,	// (0x0001f6b8) clock_digital_separator_pane_cp10_ParamLimits

0x3a2a,	// (0x0001f6b8) clock_digital_separator_pane_cp10

0x8626,	// (0x000242b4) popup_clock_digital_window_cp02_t1_ParamLimits

0x8626,	// (0x000242b4) popup_clock_digital_window_cp02_t1

0xc223,	// (0x00027eb1) clock_digital_number_pane_cp10_g1

0xc223,	// (0x00027eb1) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f5,	// (0x0002b483) clock_digital_number_pane_cp10_g

0xc223,	// (0x00027eb1) clock_digital_separator_pane_cp10_g1

0xc223,	// (0x00027eb1) clock_digital_separator_pane_g2_cp10

0xce04,	// (0x00028a92) navi_pane_vded_g4

0xce0d,	// (0x00028a9b) navi_pane_vded_g5

0xce16,	// (0x00028aa4) navi_pane_vded_t1

0x30a6,	// (0x0001ed34) main_vded_pane

0x8723,	// (0x000243b1) main_vded_pane_g1

0x872f,	// (0x000243bd) main_vded_pane_g2

0x8739,	// (0x000243c7) main_vded_pane_g3

0x0002,

0xf7fa,	// (0x0002b488) main_vded_pane_g

0x8743,	// (0x000243d1) main_vded_pane_t1

0x8751,	// (0x000243df) main_vded_pane_t2

0x0001,

0xf801,	// (0x0002b48f) main_vded_pane_t

0x875f,	// (0x000243ed) vded_slider_pane

0x8769,	// (0x000243f7) vded_video_pane

0xec84,	// (0x0002a912) vded_video_pane_g1

0x8773,	// (0x00024401) vded_video_pane_g2

0xe6b5,	// (0x0002a343) vded_video_pane_g3

0x0002,

0xf806,	// (0x0002b494) vded_video_pane_g

0xec8e,	// (0x0002a91c) vded_slider_pane_g1

0xe3ff,	// (0x0002a08d) vded_slider_pane_g2

0xec97,	// (0x0002a925) vded_slider_pane_g3

0xeca0,	// (0x0002a92e) vded_slider_pane_g4

0xeca9,	// (0x0002a937) vded_slider_pane_g5

0x0004,

0xf80d,	// (0x0002b49b) vded_slider_pane_g

0x82c0,	// (0x00023f4e) mup3_rocker_pane_ParamLimits

0x82c0,	// (0x00023f4e) mup3_rocker_pane

0x877c,	// (0x0002440a) mup3_control_keys_pane_g1

0x8784,	// (0x00024412) mup3_control_keys_pane_g2

0x878c,	// (0x0002441a) mup3_control_keys_pane_g3

0x8794,	// (0x00024422) mup3_control_keys_pane_g4

0x0003,

0xf818,	// (0x0002b4a6) mup3_control_keys_pane_g

0x3066,	// (0x0001ecf4) popup_toolbar2_fixed_window_cp01_ParamLimits

0x3066,	// (0x0001ecf4) popup_toolbar2_fixed_window_cp01

0x82da,	// (0x00023f68) popup_toolbar2_fixed_window_cp02_ParamLimits

0x82da,	// (0x00023f68) popup_toolbar2_fixed_window_cp02

0xd620,	// (0x000292ae) popup_call2_audio_second_window_t4_ParamLimits

0xd620,	// (0x000292ae) popup_call2_audio_second_window_t4

0xdb4e,	// (0x000297dc) popup_call2_audio_first_window_t6_ParamLimits

0xdb4e,	// (0x000297dc) popup_call2_audio_first_window_t6

0xdde4,	// (0x00029a72) popup_call2_audio_out_window_t6_ParamLimits

0xdde4,	// (0x00029a72) popup_call2_audio_out_window_t6

0x30a6,	// (0x0001ed34) main_vitu_pane

0x87a4,	// (0x00024432) aid_size_cell_itu_ParamLimits

0x87a4,	// (0x00024432) aid_size_cell_itu

0x012e,	// (0x0001bdbc) bg_popup_window_pane_cp08_ParamLimits

0x012e,	// (0x0001bdbc) bg_popup_window_pane_cp08

0x87b2,	// (0x00024440) field_vitu_entry_pane_ParamLimits

0x87b2,	// (0x00024440) field_vitu_entry_pane

0x87c1,	// (0x0002444f) grid_vitu_function_pane_ParamLimits

0x87c1,	// (0x0002444f) grid_vitu_function_pane

0x87d1,	// (0x0002445f) grid_vitu_itu_pane_ParamLimits

0x87d1,	// (0x0002445f) grid_vitu_itu_pane

0x87e1,	// (0x0002446f) cell_vitu_itu_pane_ParamLimits

0x87e1,	// (0x0002446f) cell_vitu_itu_pane

0x87f6,	// (0x00024484) cell_vitu_function_pane_ParamLimits

0x87f6,	// (0x00024484) cell_vitu_function_pane

0xc193,	// (0x00027e21) bg_popup_sub_pane_cp08_ParamLimits

0xc193,	// (0x00027e21) bg_popup_sub_pane_cp08

0x8808,	// (0x00024496) field_vitu_entry_pane_t1_ParamLimits

0x8808,	// (0x00024496) field_vitu_entry_pane_t1

0xecca,	// (0x0002a958) field_vitu_entry_pane_t2_ParamLimits

0xecca,	// (0x0002a958) field_vitu_entry_pane_t2

0x0001,

0xf826,	// (0x0002b4b4) field_vitu_entry_pane_t_ParamLimits

0xf826,	// (0x0002b4b4) field_vitu_entry_pane_t

0xece7,	// (0x0002a975) bg_button_pane_cp05_ParamLimits

0xece7,	// (0x0002a975) bg_button_pane_cp05

0x8824,	// (0x000244b2) cell_vitu_itu_pane_g1

0x883c,	// (0x000244ca) cell_vitu_itu_pane_t1_ParamLimits

0x883c,	// (0x000244ca) cell_vitu_itu_pane_t1

0x884e,	// (0x000244dc) cell_vitu_itu_pane_t2_ParamLimits

0x884e,	// (0x000244dc) cell_vitu_itu_pane_t2

0x0002,

0xf82b,	// (0x0002b4b9) cell_vitu_itu_pane_t_ParamLimits

0xf82b,	// (0x0002b4b9) cell_vitu_itu_pane_t

0xecf5,	// (0x0002a983) bg_button_pane_cp07

0x8883,	// (0x00024511) cell_vitu_function_pane_g1

0x317f,	// (0x0001ee0d) main_calc_pane_g1

0x2e50,	// (0x0001eade) aid_visual_content_pane

0x30a6,	// (0x0001ed34) main_vradio_pane

0x888c,	// (0x0002451a) main_vradio_pane_g1_ParamLimits

0x888c,	// (0x0002451a) main_vradio_pane_g1

0xecff,	// (0x0002a98d) main_vradio_pane_g2_ParamLimits

0xecff,	// (0x0002a98d) main_vradio_pane_g2

0x0001,

0xf832,	// (0x0002b4c0) main_vradio_pane_g_ParamLimits

0xf832,	// (0x0002b4c0) main_vradio_pane_g

0x889c,	// (0x0002452a) main_vradio_pane_t1_ParamLimits

0x889c,	// (0x0002452a) main_vradio_pane_t1

0x88ae,	// (0x0002453c) main_vradio_pane_t2_ParamLimits

0x88ae,	// (0x0002453c) main_vradio_pane_t2

0xed0c,	// (0x0002a99a) main_vradio_pane_t3_ParamLimits

0xed0c,	// (0x0002a99a) main_vradio_pane_t3

0x0002,

0xf837,	// (0x0002b4c5) main_vradio_pane_t_ParamLimits

0xf837,	// (0x0002b4c5) main_vradio_pane_t

0x88c0,	// (0x0002454e) vradio_rocker_control_pane_ParamLimits

0x88c0,	// (0x0002454e) vradio_rocker_control_pane

0x88cc,	// (0x0002455a) vradio_station_info_pane_ParamLimits

0x88cc,	// (0x0002455a) vradio_station_info_pane

0xed20,	// (0x0002a9ae) vradio_frequency_info_pane_ParamLimits

0xed20,	// (0x0002a9ae) vradio_frequency_info_pane

0xe6b5,	// (0x0002a343) vradio_station_info_pane_g1

0xed2f,	// (0x0002a9bd) vradio_station_info_pane_t1_ParamLimits

0xed2f,	// (0x0002a9bd) vradio_station_info_pane_t1

0xed51,	// (0x0002a9df) vradio_station_info_pane_t2_ParamLimits

0xed51,	// (0x0002a9df) vradio_station_info_pane_t2

0x0001,

0xf83e,	// (0x0002b4cc) vradio_station_info_pane_t_ParamLimits

0xf83e,	// (0x0002b4cc) vradio_station_info_pane_t

0xed63,	// (0x0002a9f1) vradio_tuning_pane

0xed6b,	// (0x0002a9f9) vradio_rocker_control_pane_g1

0xed73,	// (0x0002aa01) vradio_rocker_control_pane_g2

0xed7b,	// (0x0002aa09) vradio_rocker_control_pane_g3

0xed83,	// (0x0002aa11) vradio_rocker_control_pane_g4

0xed8b,	// (0x0002aa19) vradio_rocker_control_pane_g5

0x0004,

0xf843,	// (0x0002b4d1) vradio_rocker_control_pane_g

0x88db,	// (0x00024569) vradio_frequency_info_pane_g1

0xed93,	// (0x0002aa21) vradio_frequency_info_pane_t1_ParamLimits

0xed93,	// (0x0002aa21) vradio_frequency_info_pane_t1

0x88e5,	// (0x00024573) vradio_tuning_pane_g1

0x88ee,	// (0x0002457c) vradio_tuning_pane_t1

0x2e6c,	// (0x0001eafa) area_side_right_pane_ParamLimits

0x2e6c,	// (0x0001eafa) area_side_right_pane

0xe25f,	// (0x00029eed) status_small_pane_g1

0xe267,	// (0x00029ef5) status_small_pane_g2

0xe270,	// (0x00029efe) status_small_pane_g3

0xe279,	// (0x00029f07) status_small_pane_g4

0x0003,

0xf603,	// (0x0002b291) status_small_pane_g

0xe282,	// (0x00029f10) status_small_pane_t1

0x30a6,	// (0x0001ed34) main_video3_pane

0xeda7,	// (0x0002aa35) cams_zoom_vslider_pane

0xedaf,	// (0x0002aa3d) image3_wide_pane_ParamLimits

0xedaf,	// (0x0002aa3d) image3_wide_pane

0xedc9,	// (0x0002aa57) image3_wide_small_pane

0xedd5,	// (0x0002aa63) main_video3_pane_g1_ParamLimits

0xedd5,	// (0x0002aa63) main_video3_pane_g1

0xedf1,	// (0x0002aa7f) main_video3_pane_g2_ParamLimits

0xedf1,	// (0x0002aa7f) main_video3_pane_g2

0x0001,

0xf84e,	// (0x0002b4dc) main_video3_pane_g_ParamLimits

0xf84e,	// (0x0002b4dc) main_video3_pane_g

0xee0d,	// (0x0002aa9b) main_video3_pane_t1_ParamLimits

0xee0d,	// (0x0002aa9b) main_video3_pane_t1

0xee38,	// (0x0002aac6) main_video3_pane_t2_ParamLimits

0xee38,	// (0x0002aac6) main_video3_pane_t2

0xee63,	// (0x0002aaf1) main_video3_pane_t3_ParamLimits

0xee63,	// (0x0002aaf1) main_video3_pane_t3

0x0002,

0xf853,	// (0x0002b4e1) main_video3_pane_t_ParamLimits

0xf853,	// (0x0002b4e1) main_video3_pane_t

0xee90,	// (0x0002ab1e) cams_zoom_vslider_pane_g1

0xee99,	// (0x0002ab27) cams_zoom_vslider_pane_g2

0x0001,

0xf85a,	// (0x0002b4e8) cams_zoom_vslider_pane_g

0xeea1,	// (0x0002ab2f) small_slider_vertical_pane

0xe6b5,	// (0x0002a343) small_slider_vertical_pane_g1

0xe6b5,	// (0x0002a343) small_slider_vertical_pane_g2

0xeea9,	// (0x0002ab37) small_slider_vertical_pane_g3

0x0002,

0xf85f,	// (0x0002b4ed) small_slider_vertical_pane_g

0x30a6,	// (0x0001ed34) main_hwr_training_pane

0xeeb2,	// (0x0002ab40) hwr_training_instruct_pane_ParamLimits

0xeeb2,	// (0x0002ab40) hwr_training_instruct_pane

0x88fd,	// (0x0002458b) hwr_training_navi_pane_ParamLimits

0x88fd,	// (0x0002458b) hwr_training_navi_pane

0x8917,	// (0x000245a5) hwr_training_write_pane_ParamLimits

0x8917,	// (0x000245a5) hwr_training_write_pane

0xbba5,	// (0x00027833) bg_frame_shadow_pane

0xeee9,	// (0x0002ab77) hwr_training_write_pane_g1

0xeef1,	// (0x0002ab7f) hwr_training_write_pane_g2

0xeef9,	// (0x0002ab87) hwr_training_write_pane_g3

0xef01,	// (0x0002ab8f) hwr_training_write_pane_g4

0xef09,	// (0x0002ab97) hwr_training_write_pane_g5

0xef11,	// (0x0002ab9f) hwr_training_write_pane_g6

0xef19,	// (0x0002aba7) hwr_training_write_pane_g7

0x0006,

0xf866,	// (0x0002b4f4) hwr_training_write_pane_g

0x3a42,	// (0x0001f6d0) hwr_training_navi_pane_g1_ParamLimits

0x3a42,	// (0x0001f6d0) hwr_training_navi_pane_g1

0x3a54,	// (0x0001f6e2) hwr_training_navi_pane_g2_ParamLimits

0x3a54,	// (0x0001f6e2) hwr_training_navi_pane_g2

0x3a66,	// (0x0001f6f4) hwr_training_navi_pane_g3_ParamLimits

0x3a66,	// (0x0001f6f4) hwr_training_navi_pane_g3

0x3a76,	// (0x0001f704) hwr_training_navi_pane_g4_ParamLimits

0x3a76,	// (0x0001f704) hwr_training_navi_pane_g4

0x0004,

0xf875,	// (0x0002b503) hwr_training_navi_pane_g_ParamLimits

0xf875,	// (0x0002b503) hwr_training_navi_pane_g

0x3a90,	// (0x0001f71e) hwr_training_navi_pane_t1

0x894f,	// (0x000245dd) list_single_hwr_training_instruct_pane_ParamLimits

0x894f,	// (0x000245dd) list_single_hwr_training_instruct_pane

0xef21,	// (0x0002abaf) list_single_hwr_training_instruct_pane_t1

0xe5f5,	// (0x0002a283) bg_frame_shadow_pane_g1

0xef30,	// (0x0002abbe) bg_frame_shadow_pane_g2

0xef38,	// (0x0002abc6) bg_frame_shadow_pane_g3

0xef40,	// (0x0002abce) bg_frame_shadow_pane_g4

0xef48,	// (0x0002abd6) bg_frame_shadow_pane_g5

0xef50,	// (0x0002abde) bg_frame_shadow_pane_g6

0xef58,	// (0x0002abe6) bg_frame_shadow_pane_g7

0xc3a9,	// (0x00028037) bg_frame_shadow_pane_g8

0x0007,

0xf880,	// (0x0002b50e) bg_frame_shadow_pane_g

0x30a6,	// (0x0001ed34) main_video_tele_dialer_pane

0x3a9e,	// (0x0001f72c) aid_size_cell_video_keypad_ParamLimits

0x3a9e,	// (0x0001f72c) aid_size_cell_video_keypad

0x3aae,	// (0x0001f73c) grid_video_dialer_keypad_pane_ParamLimits

0x3aae,	// (0x0001f73c) grid_video_dialer_keypad_pane

0x3ae2,	// (0x0001f770) video_down_pane_cp_ParamLimits

0x3ae2,	// (0x0001f770) video_down_pane_cp

0x3af0,	// (0x0001f77e) cell_video_dialer_keypad_pane_ParamLimits

0x3af0,	// (0x0001f77e) cell_video_dialer_keypad_pane

0xef60,	// (0x0002abee) bg_button_pane_cp08_ParamLimits

0xef60,	// (0x0002abee) bg_button_pane_cp08

0x8990,	// (0x0002461e) cell_video_dialer_keypad_pane_g1_ParamLimits

0x8990,	// (0x0002461e) cell_video_dialer_keypad_pane_g1

0x82b4,	// (0x00023f42) mup3_rocker2_pane_ParamLimits

0x82b4,	// (0x00023f42) mup3_rocker2_pane

0xe6b5,	// (0x0002a343) mup3_rocker2_pane_g1

0x3576,	// (0x0001f204) main_dialer2_pane

0x30a6,	// (0x0001ed34) main_mp4_pane

0x3b0d,	// (0x0001f79b) main_mp4_pane_g1_ParamLimits

0x3b0d,	// (0x0001f79b) main_mp4_pane_g1

0x3b1b,	// (0x0001f7a9) main_mp4_pane_g2_ParamLimits

0x3b1b,	// (0x0001f7a9) main_mp4_pane_g2

0x3b29,	// (0x0001f7b7) main_mp4_pane_g3_ParamLimits

0x3b29,	// (0x0001f7b7) main_mp4_pane_g3

0x3b6e,	// (0x0001f7fc) main_mp4_pane_g4_ParamLimits

0x3b6e,	// (0x0001f7fc) main_mp4_pane_g4

0x3b96,	// (0x0001f824) main_mp4_pane_g5_ParamLimits

0x3b96,	// (0x0001f824) main_mp4_pane_g5

0x0005,

0xf8a0,	// (0x0002b52e) main_mp4_pane_g_ParamLimits

0xf8a0,	// (0x0002b52e) main_mp4_pane_g

0x3be6,	// (0x0001f874) main_mp4_pane_t1_ParamLimits

0x3be6,	// (0x0001f874) main_mp4_pane_t1

0x3c42,	// (0x0001f8d0) main_mp4_pane_t2_ParamLimits

0x3c42,	// (0x0001f8d0) main_mp4_pane_t2

0xef6c,	// (0x0002abfa) main_mp4_pane_t3_ParamLimits

0xef6c,	// (0x0002abfa) main_mp4_pane_t3

0x3c94,	// (0x0001f922) main_mp4_pane_t4_ParamLimits

0x3c94,	// (0x0001f922) main_mp4_pane_t4

0x0003,

0xf8ad,	// (0x0002b53b) main_mp4_pane_t_ParamLimits

0xf8ad,	// (0x0002b53b) main_mp4_pane_t

0x3cd8,	// (0x0001f966) mp4_progress_pane_ParamLimits

0x3cd8,	// (0x0001f966) mp4_progress_pane

0x3d22,	// (0x0001f9b0) mp4_rocker_pane_ParamLimits

0x3d22,	// (0x0001f9b0) mp4_rocker_pane

0xef94,	// (0x0002ac22) mp4_progress_pane_t1

0xefad,	// (0x0002ac3b) mp4_progress_pane_t2

0x0001,

0xf8b6,	// (0x0002b544) mp4_progress_pane_t

0xefc6,	// (0x0002ac54) mup_progress_pane_cp04

0x090f,	// (0x0001c59d) mp4_rocker_pane_g1

0x3d42,	// (0x0001f9d0) aid_cell_size_keypad2_ParamLimits

0x3d42,	// (0x0001f9d0) aid_cell_size_keypad2

0x3d52,	// (0x0001f9e0) dialer2_ne_pane_ParamLimits

0x3d52,	// (0x0001f9e0) dialer2_ne_pane

0x3d60,	// (0x0001f9ee) grid_dialer2_keypad_pane_ParamLimits

0x3d60,	// (0x0001f9ee) grid_dialer2_keypad_pane

0x0112,	// (0x0001bda0) bg_popup_call_pane_cp07_ParamLimits

0x0112,	// (0x0001bda0) bg_popup_call_pane_cp07

0x89c7,	// (0x00024655) dialer2_ne_pane_t1_ParamLimits

0x89c7,	// (0x00024655) dialer2_ne_pane_t1

0x3d70,	// (0x0001f9fe) cell_dialer2_keypad_pane_ParamLimits

0x3d70,	// (0x0001f9fe) cell_dialer2_keypad_pane

0xefe4,	// (0x0002ac72) bg_button_pane_pane_cp04_ParamLimits

0xefe4,	// (0x0002ac72) bg_button_pane_pane_cp04

0x89ec,	// (0x0002467a) cell_dialer2_keypad_pane_g1_ParamLimits

0x89ec,	// (0x0002467a) cell_dialer2_keypad_pane_g1

0x52bc,	// (0x00020f4a) aid_placing_vt_set_content_ParamLimits

0x52bc,	// (0x00020f4a) aid_placing_vt_set_content

0x52e8,	// (0x00020f76) aid_placing_vt_set_title_ParamLimits

0x52e8,	// (0x00020f76) aid_placing_vt_set_title

0x30a6,	// (0x0001ed34) main_image3_pane

0x3db7,	// (0x0001fa45) area_side_right_pane_cp01_ParamLimits

0x3db7,	// (0x0001fa45) area_side_right_pane_cp01

0x3de4,	// (0x0001fa72) main_image3_pane_g1_ParamLimits

0x3de4,	// (0x0001fa72) main_image3_pane_g1

0x3df2,	// (0x0001fa80) main_image3_pane_g2_ParamLimits

0x3df2,	// (0x0001fa80) main_image3_pane_g2

0x3e0b,	// (0x0001fa99) main_image3_pane_g3_ParamLimits

0x3e0b,	// (0x0001fa99) main_image3_pane_g3

0x3e24,	// (0x0001fab2) main_image3_pane_g4_ParamLimits

0x3e24,	// (0x0001fab2) main_image3_pane_g4

0x0003,

0xf8c5,	// (0x0002b553) main_image3_pane_g_ParamLimits

0xf8c5,	// (0x0002b553) main_image3_pane_g

0x3e3d,	// (0x0001facb) main_image3_pane_t1_ParamLimits

0x3e3d,	// (0x0001facb) main_image3_pane_t1

0x3e62,	// (0x0001faf0) main_image3_pane_t2_ParamLimits

0x3e62,	// (0x0001faf0) main_image3_pane_t2

0x3e81,	// (0x0001fb0f) main_image3_pane_t3_ParamLimits

0x3e81,	// (0x0001fb0f) main_image3_pane_t3

0x0003,

0xf8ce,	// (0x0002b55c) main_image3_pane_t_ParamLimits

0xf8ce,	// (0x0002b55c) main_image3_pane_t

0x012e,	// (0x0001bdbc) grid_sctrl_middle_pane_cp01_ParamLimits

0x012e,	// (0x0001bdbc) grid_sctrl_middle_pane_cp01

0x8a54,	// (0x000246e2) cell_sctrl_middle_pane_cp01_ParamLimits

0x8a54,	// (0x000246e2) cell_sctrl_middle_pane_cp01

0x8a65,	// (0x000246f3) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x8a65,	// (0x000246f3) cell_sctrl_middle_pane_cp01_g1

0x30a6,	// (0x0001ed34) main_call4_pane

0x8a72,	// (0x00024700) aid_size_button_call4_ParamLimits

0x8a72,	// (0x00024700) aid_size_button_call4

0x8aa2,	// (0x00024730) call4_windows_pane_ParamLimits

0x8aa2,	// (0x00024730) call4_windows_pane

0x8abc,	// (0x0002474a) grid_call4_button_pane_ParamLimits

0x8abc,	// (0x0002474a) grid_call4_button_pane

0xeff0,	// (0x0002ac7e) call4_windows_conf_pane

0xf007,	// (0x0002ac95) popup_call4_audio_first_window_ParamLimits

0xf007,	// (0x0002ac95) popup_call4_audio_first_window

0xf053,	// (0x0002ace1) popup_call4_audio_second_window_ParamLimits

0xf053,	// (0x0002ace1) popup_call4_audio_second_window

0xf067,	// (0x0002acf5) popup_call4_audio_wait_window_ParamLimits

0xf067,	// (0x0002acf5) popup_call4_audio_wait_window

0x8ae0,	// (0x0002476e) cell_call4_button_pane_ParamLimits

0x8ae0,	// (0x0002476e) cell_call4_button_pane

0x8b05,	// (0x00024793) bg_button_pane_cp09_ParamLimits

0x8b05,	// (0x00024793) bg_button_pane_cp09

0x8b11,	// (0x0002479f) cell_call4_button_pane_g1_ParamLimits

0x8b11,	// (0x0002479f) cell_call4_button_pane_g1

0x8b1e,	// (0x000247ac) cell_call4_button_pane_t1_ParamLimits

0x8b1e,	// (0x000247ac) cell_call4_button_pane_t1

0xf0af,	// (0x0002ad3d) popup_call4_audio_conf_window_ParamLimits

0xf0af,	// (0x0002ad3d) popup_call4_audio_conf_window

0x82e7,	// (0x00023f75) mup3_progress_pane_t1_ParamLimits

0x8306,	// (0x00023f94) mup3_progress_pane_t2_ParamLimits

0xe9bf,	// (0x0002a64d) mup3_progress_pane_t3_ParamLimits

0xf7a7,	// (0x0002b435) mup3_progress_pane_t_ParamLimits

0xe9dc,	// (0x0002a66a) mup_progress_pane_cp03_ParamLimits

0x879c,	// (0x0002442a) mup3_control_keys_pane_g4_copy1

0x3d06,	// (0x0001f994) mp4_rocker2_pane_ParamLimits

0x3d06,	// (0x0001f994) mp4_rocker2_pane

0xf0c3,	// (0x0002ad51) mp4_rocker2_pane_g1

0xf0cb,	// (0x0002ad59) mp4_rocker2_pane_g2

0x3ee2,	// (0x0001fb70) mp4_rocker2_pane_g3

0x3eea,	// (0x0001fb78) mp4_rocker2_pane_g4

0x3ef2,	// (0x0001fb80) mp4_rocker2_pane_g5

0x0004,

0xf8d7,	// (0x0002b565) mp4_rocker2_pane_g

0x30a6,	// (0x0001ed34) main_camera4_pane

0x30a6,	// (0x0001ed34) main_video4_pane

0x3abe,	// (0x0001f74c) main_video_tele_dialer_pane_t1_ParamLimits

0x3abe,	// (0x0001f74c) main_video_tele_dialer_pane_t1

0x3ad0,	// (0x0001f75e) main_video_tele_dialer_pane_t2_ParamLimits

0x3ad0,	// (0x0001f75e) main_video_tele_dialer_pane_t2

0x0001,

0xf891,	// (0x0002b51f) main_video_tele_dialer_pane_t_ParamLimits

0xf891,	// (0x0002b51f) main_video_tele_dialer_pane_t

0x3f12,	// (0x0001fba0) cam4_autofocus_pane_ParamLimits

0x3f12,	// (0x0001fba0) cam4_autofocus_pane

0x3f2c,	// (0x0001fbba) cam4_image_uncrop_pane_ParamLimits

0x3f2c,	// (0x0001fbba) cam4_image_uncrop_pane

0x3f43,	// (0x0001fbd1) cam4_indicators_pane_ParamLimits

0x3f43,	// (0x0001fbd1) cam4_indicators_pane

0x3f5f,	// (0x0001fbed) main_camera4_pane_g1_ParamLimits

0x3f5f,	// (0x0001fbed) main_camera4_pane_g1

0x3f6b,	// (0x0001fbf9) main_camera4_pane_g2_ParamLimits

0x3f6b,	// (0x0001fbf9) main_camera4_pane_g2

0x3f6b,	// (0x0001fbf9) main_camera4_pane_g3_ParamLimits

0x3f6b,	// (0x0001fbf9) main_camera4_pane_g3

0x3f77,	// (0x0001fc05) main_camera4_pane_g4_ParamLimits

0x3f77,	// (0x0001fc05) main_camera4_pane_g4

0x3f83,	// (0x0001fc11) main_camera4_pane_g5_ParamLimits

0x3f83,	// (0x0001fc11) main_camera4_pane_g5

0x0005,

0xf8e2,	// (0x0002b570) main_camera4_pane_g_ParamLimits

0xf8e2,	// (0x0002b570) main_camera4_pane_g

0x3f9d,	// (0x0001fc2b) main_camera4_pane_t1_ParamLimits

0x3f9d,	// (0x0001fc2b) main_camera4_pane_t1

0x3fc1,	// (0x0001fc4f) bg_tb_trans_pane_cp06

0x3fd7,	// (0x0001fc65) cam4_indicators_pane_g1

0x3fe8,	// (0x0001fc76) cam4_indicators_pane_g2

0x0002,

0xf8fd,	// (0x0002b58b) cam4_indicators_pane_g

0x4006,	// (0x0001fc94) cam4_indicators_pane_t1

0x4030,	// (0x0001fcbe) main_video4_pane_g1_ParamLimits

0x4030,	// (0x0001fcbe) main_video4_pane_g1

0x403c,	// (0x0001fcca) main_video4_pane_g2_ParamLimits

0x403c,	// (0x0001fcca) main_video4_pane_g2

0x4048,	// (0x0001fcd6) main_video4_pane_g3_ParamLimits

0x4048,	// (0x0001fcd6) main_video4_pane_g3

0x4054,	// (0x0001fce2) main_video4_pane_g4_ParamLimits

0x4054,	// (0x0001fce2) main_video4_pane_g4

0x0004,

0xf904,	// (0x0002b592) main_video4_pane_g_ParamLimits

0xf904,	// (0x0002b592) main_video4_pane_g

0x4074,	// (0x0001fd02) vid4_indicators_pane_ParamLimits

0x4074,	// (0x0001fd02) vid4_indicators_pane

0x4093,	// (0x0001fd21) video4_image_uncrop_cif_pane_ParamLimits

0x4093,	// (0x0001fd21) video4_image_uncrop_cif_pane

0x40a2,	// (0x0001fd30) video4_image_uncrop_nhd_pane_ParamLimits

0x40a2,	// (0x0001fd30) video4_image_uncrop_nhd_pane

0x3f2c,	// (0x0001fbba) video4_image_uncrop_vga_pane_ParamLimits

0x3f2c,	// (0x0001fbba) video4_image_uncrop_vga_pane

0x3568,	// (0x0001f1f6) bg_tb_trans_pane_cp07

0x40b9,	// (0x0001fd47) vid4_indicators_pane_g1

0x40cd,	// (0x0001fd5b) vid4_indicators_pane_g2

0x40e1,	// (0x0001fd6f) vid4_indicators_pane_g3

0x0004,

0xf90f,	// (0x0002b59d) vid4_indicators_pane_g

0x4110,	// (0x0001fd9e) vid4_indicators_pane_t1

0x8b54,	// (0x000247e2) cam4_autofocus_pane_g1

0x8b5c,	// (0x000247ea) cam4_autofocus_pane_g2

0x8b64,	// (0x000247f2) cam4_autofocus_pane_g3

0x0002,

0xf91a,	// (0x0002b5a8) cam4_autofocus_pane_g

0x8b6c,	// (0x000247fa) cam4_autofocus_pane_g3_copy1

0x8974,	// (0x00024602) video_down_pane_cp_t1

0x8982,	// (0x00024610) video_down_pane_cp_t2

0x0001,

0xf896,	// (0x0002b524) video_down_pane_cp_t

0x3098,	// (0x0001ed26) popup_vitu2_window_ParamLimits

0x3098,	// (0x0001ed26) popup_vitu2_window

0x4127,	// (0x0001fdb5) aid_size_cell2_itu2_ParamLimits

0x4127,	// (0x0001fdb5) aid_size_cell2_itu2

0x4149,	// (0x0001fdd7) aid_size_cell_itu2_ParamLimits

0x4149,	// (0x0001fdd7) aid_size_cell_itu2

0x418d,	// (0x0001fe1b) bg_popup_window_pane_cp09_ParamLimits

0x418d,	// (0x0001fe1b) bg_popup_window_pane_cp09

0x419b,	// (0x0001fe29) field_vitu2_entry_pane_ParamLimits

0x419b,	// (0x0001fe29) field_vitu2_entry_pane

0x41bb,	// (0x0001fe49) grid_vitu2_function_pane_ParamLimits

0x41bb,	// (0x0001fe49) grid_vitu2_function_pane

0x41ff,	// (0x0001fe8d) grid_vitu2_itu_pane_ParamLimits

0x41ff,	// (0x0001fe8d) grid_vitu2_itu_pane

0x4277,	// (0x0001ff05) cell_vitu2_itu_pane_ParamLimits

0x4277,	// (0x0001ff05) cell_vitu2_itu_pane

0x428c,	// (0x0001ff1a) cell_vitu2_function_pane_ParamLimits

0x428c,	// (0x0001ff1a) cell_vitu2_function_pane

0x005d,	// (0x0001bceb) bg_popup_call_pane_cp08_ParamLimits

0x005d,	// (0x0001bceb) bg_popup_call_pane_cp08

0x0076,	// (0x0001bd04) field_vitu2_entry_pane_g1

0x0082,	// (0x0001bd10) field_vitu2_entry_pane_g2

0x0002,

0xf921,	// (0x0002b5af) field_vitu2_entry_pane_g

0x009c,	// (0x0001bd2a) field_vitu2_entry_pane_t1_ParamLimits

0x009c,	// (0x0001bd2a) field_vitu2_entry_pane_t1

0x00cb,	// (0x0001bd59) field_vitu2_entry_pane_t2_ParamLimits

0x00cb,	// (0x0001bd59) field_vitu2_entry_pane_t2

0x0001,

0xf928,	// (0x0002b5b6) field_vitu2_entry_pane_t_ParamLimits

0xf928,	// (0x0002b5b6) field_vitu2_entry_pane_t

0x42cb,	// (0x0001ff59) bg_button_pane_cp010_ParamLimits

0x42cb,	// (0x0001ff59) bg_button_pane_cp010

0x42d9,	// (0x0001ff67) cell_vitu2_itu_pane_g1

0x42f7,	// (0x0001ff85) cell_vitu2_itu_pane_t1_ParamLimits

0x42f7,	// (0x0001ff85) cell_vitu2_itu_pane_t1

0x4349,	// (0x0001ffd7) cell_vitu2_itu_pane_t2_ParamLimits

0x4349,	// (0x0001ffd7) cell_vitu2_itu_pane_t2

0x0002,

0xf932,	// (0x0002b5c0) cell_vitu2_itu_pane_t_ParamLimits

0xf932,	// (0x0002b5c0) cell_vitu2_itu_pane_t

0x3568,	// (0x0001f1f6) bg_button_pane_cp011

0x4404,	// (0x00020092) cell_vitu2_function_pane_g1

0x30a6,	// (0x0001ed34) main_myfav_hc_pane

0x3ec3,	// (0x0001fb51) popup_image3_note_pane_ParamLimits

0x3ec3,	// (0x0001fb51) popup_image3_note_pane

0x3ed1,	// (0x0001fb5f) popup_image3_tool_bar_pane_ParamLimits

0x3ed1,	// (0x0001fb5f) popup_image3_tool_bar_pane

0x43b7,	// (0x00020045) cell_vitu2_itu_pane_t3_ParamLimits

0x43b7,	// (0x00020045) cell_vitu2_itu_pane_t3

0xbba5,	// (0x00027833) bg_popup_trans_pane

0x00f0,	// (0x0001bd7e) grid_image3_tool_bar_pane

0x00fa,	// (0x0001bd88) bg_popup_trans_pane_g1

0xc711,	// (0x0002839f) bg_popup_trans_pane_g2

0x0102,	// (0x0001bd90) bg_popup_trans_pane_g3

0x010a,	// (0x0001bd98) bg_popup_trans_pane_g4

0x0154,	// (0x0001bde2) bg_popup_trans_pane_g5

0x015c,	// (0x0001bdea) bg_popup_trans_pane_g6

0x0164,	// (0x0001bdf2) bg_popup_trans_pane_g7

0x016c,	// (0x0001bdfa) bg_popup_trans_pane_g8

0xc6f1,	// (0x0002837f) bg_popup_trans_pane_g9

0x0008,

0xf939,	// (0x0002b5c7) bg_popup_trans_pane_g

0x0174,	// (0x0001be02) cell_image3_tool_bar_pane_ParamLimits

0x0174,	// (0x0001be02) cell_image3_tool_bar_pane

0xe6b5,	// (0x0002a343) cell_image3_tool_bar_pane_g1

0xbba5,	// (0x00027833) bg_popup_trans_pane_cp1

0x0188,	// (0x0001be16) popup_image3_note_pane_t1

0x0196,	// (0x0001be24) popup_image3_note_pane_t2

0x01a4,	// (0x0001be32) popup_image3_note_pane_t3

0x0002,

0xf94c,	// (0x0002b5da) popup_image3_note_pane_t

0x01b2,	// (0x0001be40) popup_image3_note_pane_t3_copy1

0x8b74,	// (0x00024802) bg_myfav_hc_instruction_pane_ParamLimits

0x8b74,	// (0x00024802) bg_myfav_hc_instruction_pane

0x8b8c,	// (0x0002481a) cell_myfav_contact_pane_ParamLimits

0x8b8c,	// (0x0002481a) cell_myfav_contact_pane

0x8ba6,	// (0x00024834) cell_myfav_contact_pane_cp1_ParamLimits

0x8ba6,	// (0x00024834) cell_myfav_contact_pane_cp1

0x8bbe,	// (0x0002484c) cell_myfav_contact_pane_cp2_ParamLimits

0x8bbe,	// (0x0002484c) cell_myfav_contact_pane_cp2

0x8bd6,	// (0x00024864) cell_myfav_contact_pane_cp3_ParamLimits

0x8bd6,	// (0x00024864) cell_myfav_contact_pane_cp3

0x8bed,	// (0x0002487b) cell_myfav_contact_pane_cp4_ParamLimits

0x8bed,	// (0x0002487b) cell_myfav_contact_pane_cp4

0x8c03,	// (0x00024891) cell_myfav_contact_pane_cp5_ParamLimits

0x8c03,	// (0x00024891) cell_myfav_contact_pane_cp5

0x8c17,	// (0x000248a5) cell_myfav_contact_pane_cp6_ParamLimits

0x8c17,	// (0x000248a5) cell_myfav_contact_pane_cp6

0x8c2b,	// (0x000248b9) cell_myfav_contact_pane_cp7_ParamLimits

0x8c2b,	// (0x000248b9) cell_myfav_contact_pane_cp7

0x01c0,	// (0x0001be4e) listscroll_gen_pane_cp05

0x8c43,	// (0x000248d1) main_myfav_hc_pane_g1_ParamLimits

0x8c43,	// (0x000248d1) main_myfav_hc_pane_g1

0x8c59,	// (0x000248e7) main_myfav_hc_pane_g2_ParamLimits

0x8c59,	// (0x000248e7) main_myfav_hc_pane_g2

0x0002,

0xf953,	// (0x0002b5e1) main_myfav_hc_pane_g_ParamLimits

0xf953,	// (0x0002b5e1) main_myfav_hc_pane_g

0x8c87,	// (0x00024915) main_myfav_hc_pane_t1_ParamLimits

0x8c87,	// (0x00024915) main_myfav_hc_pane_t1

0x01c9,	// (0x0001be57) main_myfav_hc_pane_t2_ParamLimits

0x01c9,	// (0x0001be57) main_myfav_hc_pane_t2

0x01db,	// (0x0001be69) main_myfav_hc_pane_t3_ParamLimits

0x01db,	// (0x0001be69) main_myfav_hc_pane_t3

0x8c9e,	// (0x0002492c) main_myfav_hc_pane_t4_ParamLimits

0x8c9e,	// (0x0002492c) main_myfav_hc_pane_t4

0x0004,

0xf95a,	// (0x0002b5e8) main_myfav_hc_pane_t_ParamLimits

0xf95a,	// (0x0002b5e8) main_myfav_hc_pane_t

0xe6b5,	// (0x0002a343) bg_myfav_hc_instruction_pane_g1

0x01ed,	// (0x0001be7b) cell_myfav_contact_pane_g1_ParamLimits

0x01ed,	// (0x0001be7b) cell_myfav_contact_pane_g1

0x01ed,	// (0x0001be7b) cell_myfav_contact_pane_g2_ParamLimits

0x01ed,	// (0x0001be7b) cell_myfav_contact_pane_g2

0x01f9,	// (0x0001be87) cell_myfav_contact_pane_g3_ParamLimits

0x01f9,	// (0x0001be87) cell_myfav_contact_pane_g3

0xe9a9,	// (0x0002a637) cell_myfav_contact_pane_g4_ParamLimits

0xe9a9,	// (0x0002a637) cell_myfav_contact_pane_g4

0x0206,	// (0x0001be94) cell_myfav_contact_pane_g5_ParamLimits

0x0206,	// (0x0001be94) cell_myfav_contact_pane_g5

0x0004,

0xf965,	// (0x0002b5f3) cell_myfav_contact_pane_g_ParamLimits

0xf965,	// (0x0002b5f3) cell_myfav_contact_pane_g

0x8c6f,	// (0x000248fd) main_myfav_hc_pane_g3_ParamLimits

0x8c6f,	// (0x000248fd) main_myfav_hc_pane_g3

0x2fa1,	// (0x0001ec2f) popup_adpt_find_window

0x8cc8,	// (0x00024956) afind_page_pane_ParamLimits

0x8cc8,	// (0x00024956) afind_page_pane

0x8cd5,	// (0x00024963) aid_size_cell_afind_ParamLimits

0x8cd5,	// (0x00024963) aid_size_cell_afind

0x8cef,	// (0x0002497d) bg_popup_sub_pane_cp09_ParamLimits

0x8cef,	// (0x0002497d) bg_popup_sub_pane_cp09

0x8cfc,	// (0x0002498a) find_pane_cp01_ParamLimits

0x8cfc,	// (0x0002498a) find_pane_cp01

0x0212,	// (0x0001bea0) grid_afind_control_pane_ParamLimits

0x0212,	// (0x0001bea0) grid_afind_control_pane

0x8d09,	// (0x00024997) grid_afind_pane_ParamLimits

0x8d09,	// (0x00024997) grid_afind_pane

0x8d25,	// (0x000249b3) cell_afind_pane_ParamLimits

0x8d25,	// (0x000249b3) cell_afind_pane

0xe6b5,	// (0x0002a343) afind_page_pane_g1

0x8d6d,	// (0x000249fb) afind_page_pane_g2

0x8d76,	// (0x00024a04) afind_page_pane_g3

0x0002,

0xf970,	// (0x0002b5fe) afind_page_pane_g

0x8d7f,	// (0x00024a0d) afind_page_pane_t1

0x0226,	// (0x0001beb4) cell_afind_grid_control_pane_ParamLimits

0x0226,	// (0x0001beb4) cell_afind_grid_control_pane

0xefe4,	// (0x0002ac72) bg_button_pane_cp69_ParamLimits

0xefe4,	// (0x0002ac72) bg_button_pane_cp69

0x8d9f,	// (0x00024a2d) cell_afind_pane_g1_ParamLimits

0x8d9f,	// (0x00024a2d) cell_afind_pane_g1

0x8dac,	// (0x00024a3a) cell_afind_pane_t1_ParamLimits

0x8dac,	// (0x00024a3a) cell_afind_pane_t1

0xc50a,	// (0x00028198) bg_button_pane_cp72

0x0235,	// (0x0001bec3) cell_afind_grid_control_pane_g1

0x717f,	// (0x00022e0d) aid_image_placing_area_ParamLimits

0x717f,	// (0x00022e0d) aid_image_placing_area

0xecb2,	// (0x0002a940) field_vitu_entry_pane_g1_ParamLimits

0xecb2,	// (0x0002a940) field_vitu_entry_pane_g1

0xecbe,	// (0x0002a94c) field_vitu_entry_pane_g2_ParamLimits

0xecbe,	// (0x0002a94c) field_vitu_entry_pane_g2

0x0001,

0xf821,	// (0x0002b4af) field_vitu_entry_pane_g_ParamLimits

0xf821,	// (0x0002b4af) field_vitu_entry_pane_g

0x8824,	// (0x000244b2) cell_vitu_itu_pane_g1_ParamLimits

0x8866,	// (0x000244f4) cell_vitu_itu_pane_t3_ParamLimits

0x8866,	// (0x000244f4) cell_vitu_itu_pane_t3

0xef94,	// (0x0002ac22) mp4_progress_pane_t1_ParamLimits

0xefad,	// (0x0002ac3b) mp4_progress_pane_t2_ParamLimits

0xf8b6,	// (0x0002b544) mp4_progress_pane_t_ParamLimits

0xefc6,	// (0x0002ac54) mup_progress_pane_cp04_ParamLimits

0x8cb2,	// (0x00024940) main_myfav_hc_pane_t5_ParamLimits

0x8cb2,	// (0x00024940) main_myfav_hc_pane_t5

0x2e64,	// (0x0001eaf2) aid_zoom_text_primary

0x2fa1,	// (0x0001ec2f) popup_adpt_find_window_ParamLimits

0x3568,	// (0x0001f1f6) main_cam_set_pane

0x3f51,	// (0x0001fbdf) cam4_zoom_pane_ParamLimits

0x3f51,	// (0x0001fbdf) cam4_zoom_pane

0x8dbe,	// (0x00024a4c) main_cam_set_pane_g1_ParamLimits

0x8dbe,	// (0x00024a4c) main_cam_set_pane_g1

0x8dcc,	// (0x00024a5a) main_cam_set_pane_g2_ParamLimits

0x8dcc,	// (0x00024a5a) main_cam_set_pane_g2

0x0001,

0xf977,	// (0x0002b605) main_cam_set_pane_g_ParamLimits

0xf977,	// (0x0002b605) main_cam_set_pane_g

0x8dd8,	// (0x00024a66) main_cam_set_pane_t1_ParamLimits

0x8dd8,	// (0x00024a66) main_cam_set_pane_t1

0x8df4,	// (0x00024a82) main_cset_listscroll_pane_ParamLimits

0x8df4,	// (0x00024a82) main_cset_listscroll_pane

0x8e1f,	// (0x00024aad) main_cset_slider_pane_ParamLimits

0x8e1f,	// (0x00024aad) main_cset_slider_pane

0x0246,	// (0x0001bed4) main_cset_list_pane_ParamLimits

0x0246,	// (0x0001bed4) main_cset_list_pane

0x0256,	// (0x0001bee4) scroll_pane_cp028

0x8e3e,	// (0x00024acc) aid_area_touch_slider

0x8e5a,	// (0x00024ae8) cset_slider_pane

0x8e84,	// (0x00024b12) main_cset_slider_pane_g1

0x8e99,	// (0x00024b27) main_cset_slider_pane_g2

0x0011,

0xf97c,	// (0x0002b60a) main_cset_slider_pane_g

0x028f,	// (0x0001bf1d) main_cset_slider_pane_t1

0x8f5b,	// (0x00024be9) main_cset_slider_pane_t2

0x8f75,	// (0x00024c03) main_cset_slider_pane_t3

0x8f8f,	// (0x00024c1d) main_cset_slider_pane_t4

0x8fa9,	// (0x00024c37) main_cset_slider_pane_t5

0x8fc7,	// (0x00024c55) main_cset_slider_pane_t6

0x8fde,	// (0x00024c6c) main_cset_slider_pane_t7

0x000e,

0xf9a1,	// (0x0002b62f) main_cset_slider_pane_t

0x90ea,	// (0x00024d78) cset_list_set_pane_ParamLimits

0x90ea,	// (0x00024d78) cset_list_set_pane

0x9100,	// (0x00024d8e) aid_position_infowindow_above

0x9108,	// (0x00024d96) aid_position_infowindow_below

0x032f,	// (0x0001bfbd) cset_list_set_pane_g1_ParamLimits

0x032f,	// (0x0001bfbd) cset_list_set_pane_g1

0x033b,	// (0x0001bfc9) cset_list_set_pane_g3_ParamLimits

0x033b,	// (0x0001bfc9) cset_list_set_pane_g3

0x0001,

0xf9c0,	// (0x0002b64e) cset_list_set_pane_g_ParamLimits

0xf9c0,	// (0x0002b64e) cset_list_set_pane_g

0x034a,	// (0x0001bfd8) cset_list_set_pane_t1_ParamLimits

0x034a,	// (0x0001bfd8) cset_list_set_pane_t1

0xc193,	// (0x00027e21) list_highlight_pane_cp021_ParamLimits

0xc193,	// (0x00027e21) list_highlight_pane_cp021

0xcf6a,	// (0x00028bf8) cset_slider_pane_g1

0xcf7c,	// (0x00028c0a) cset_slider_pane_g2

0xcf73,	// (0x00028c01) cset_slider_pane_g3

0x0002,

0xf9c5,	// (0x0002b653) cset_slider_pane_g

0x4418,	// (0x000200a6) aid_area_touch_cam4_zoom

0x4420,	// (0x000200ae) cam4_zoom_cont_pane

0x4428,	// (0x000200b6) cam4_zoom_pane_g1

0x4430,	// (0x000200be) cam4_zoom_pane_g2

0x4438,	// (0x000200c6) cam4_zoom_pane_g3

0x0002,

0xf9cc,	// (0x0002b65a) cam4_zoom_pane_g

0x4440,	// (0x000200ce) cam4_zoom_cont_pane_g1

0x4449,	// (0x000200d7) cam4_zoom_cont_pane_g2

0x4452,	// (0x000200e0) cam4_zoom_cont_pane_g3

0x0002,

0xf9d3,	// (0x0002b661) cam4_zoom_cont_pane_g

0x8a8c,	// (0x0002471a) call4_image_pane_ParamLimits

0x8a8c,	// (0x0002471a) call4_image_pane

0xeff0,	// (0x0002ac7e) call4_windows_conf_pane_ParamLimits

0xf031,	// (0x0002acbf) popup_call4_audio_in_window_ParamLimits

0xf031,	// (0x0002acbf) popup_call4_audio_in_window

0xbba5,	// (0x00027833) bg_popup_call2_act_pane_cp02

0xf0a7,	// (0x0002ad35) call4_list_conf_pane

0xe6b5,	// (0x0002a343) call4_image_pane_g1

0xe6b5,	// (0x0002a343) call4_image_pane_g2

0x0001,

0xf6e7,	// (0x0002b375) call4_image_pane_g

0x039a,	// (0x0001c028) list_single_graphic_popup_conf4_pane_ParamLimits

0x039a,	// (0x0001c028) list_single_graphic_popup_conf4_pane

0xbba5,	// (0x00027833) list_highlight_pane_cp022

0x03ad,	// (0x0001c03b) list_single_graphic_popup_conf4_pane_g1

0xcc39,	// (0x000288c7) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9da,	// (0x0002b668) list_single_graphic_popup_conf4_pane_g

0x03b5,	// (0x0001c043) list_single_graphic_popup_conf4_pane_t1

0x544c,	// (0x000210da) popup_vtel_slider_window_ParamLimits

0x544c,	// (0x000210da) popup_vtel_slider_window

0xefd2,	// (0x0002ac60) dialer2_ne_pane_t2_ParamLimits

0xefd2,	// (0x0002ac60) dialer2_ne_pane_t2

0x0001,

0xf8bb,	// (0x0002b549) dialer2_ne_pane_t_ParamLimits

0xf8bb,	// (0x0002b549) dialer2_ne_pane_t

0xc193,	// (0x00027e21) bg_popup_sub_pane_cp010_ParamLimits

0xc193,	// (0x00027e21) bg_popup_sub_pane_cp010

0x9110,	// (0x00024d9e) popup_vtel_slider_window_g1_ParamLimits

0x9110,	// (0x00024d9e) popup_vtel_slider_window_g1

0x911c,	// (0x00024daa) popup_vtel_slider_window_g2_ParamLimits

0x911c,	// (0x00024daa) popup_vtel_slider_window_g2

0x0003,

0xf9df,	// (0x0002b66d) popup_vtel_slider_window_g_ParamLimits

0xf9df,	// (0x0002b66d) popup_vtel_slider_window_g

0x9164,	// (0x00024df2) vtel_slider_pane_ParamLimits

0x9164,	// (0x00024df2) vtel_slider_pane

0x9173,	// (0x00024e01) vtel_slider_pane_g1_ParamLimits

0x9173,	// (0x00024e01) vtel_slider_pane_g1

0x9180,	// (0x00024e0e) vtel_slider_pane_g2_ParamLimits

0x9180,	// (0x00024e0e) vtel_slider_pane_g2

0x918d,	// (0x00024e1b) vtel_slider_pane_g3_ParamLimits

0x918d,	// (0x00024e1b) vtel_slider_pane_g3

0x9173,	// (0x00024e01) vtel_slider_pane_g4_ParamLimits

0x9173,	// (0x00024e01) vtel_slider_pane_g4

0x919a,	// (0x00024e28) vtel_slider_pane_g5_ParamLimits

0x919a,	// (0x00024e28) vtel_slider_pane_g5

0x0004,

0xf9e8,	// (0x0002b676) vtel_slider_pane_g_ParamLimits

0xf9e8,	// (0x0002b676) vtel_slider_pane_g

0x30a6,	// (0x0001ed34) main_gallery2_pane

0x416f,	// (0x0001fdfd) aid_size_row_itut2_dropdow_list_ParamLimits

0x416f,	// (0x0001fdfd) aid_size_row_itut2_dropdow_list

0x41dd,	// (0x0001fe6b) grid_vitu2_function_top_pane_ParamLimits

0x41dd,	// (0x0001fe6b) grid_vitu2_function_top_pane

0x4233,	// (0x0001fec1) popup_vitu2_dropdown_list_window_ParamLimits

0x4233,	// (0x0001fec1) popup_vitu2_dropdown_list_window

0x4253,	// (0x0001fee1) popup_vitu2_match_list_window

0x445b,	// (0x000200e9) cell_vitu2_function_top_pane_ParamLimits

0x445b,	// (0x000200e9) cell_vitu2_function_top_pane

0x447b,	// (0x00020109) cell_vitu2_function_top_pane_cp01_ParamLimits

0x447b,	// (0x00020109) cell_vitu2_function_top_pane_cp01

0x4499,	// (0x00020127) cell_vitu2_function_top_wide_pane_ParamLimits

0x4499,	// (0x00020127) cell_vitu2_function_top_wide_pane

0x3568,	// (0x0001f1f6) bg_button_pane_cp012

0x44b7,	// (0x00020145) cell_vitu2_function_top_pane_g1

0x44c6,	// (0x00020154) bg_button_pane_cp013_ParamLimits

0x44c6,	// (0x00020154) bg_button_pane_cp013

0x91b5,	// (0x00024e43) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x91b5,	// (0x00024e43) cell_vitu2_function_top_wide_pane_g1

0x3098,	// (0x0001ed26) bg_popup_sub_pane_cp20

0x44e2,	// (0x00020170) list_vitu2_match_list_pane

0x00fa,	// (0x0001bd88) bg_popup_sub_pane_cp20_g1

0x0102,	// (0x0001bd90) bg_popup_sub_pane_cp20_g2

0xc711,	// (0x0002839f) bg_popup_sub_pane_cp20_g3

0x010a,	// (0x0001bd98) bg_popup_sub_pane_cp20_g4

0xc6f1,	// (0x0002837f) bg_popup_sub_pane_cp20_g5

0x03e7,	// (0x0001c075) bg_popup_sub_pane_cp20_g6

0x015c,	// (0x0001bdea) bg_popup_sub_pane_cp20_g7

0x0164,	// (0x0001bdf2) bg_popup_sub_pane_cp20_g8

0x016c,	// (0x0001bdfa) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f3,	// (0x0002b681) bg_popup_sub_pane_cp20_g

0x44fa,	// (0x00020188) list_vitu2_match_list_item_pane_ParamLimits

0x44fa,	// (0x00020188) list_vitu2_match_list_item_pane

0x450c,	// (0x0002019a) list_vitu2_match_list_item_pane_t1

0x30a6,	// (0x0001ed34) bg_popup_sub_pane_cp21

0x451a,	// (0x000201a8) grid_vitu2_dropdown_list_pane

0x4522,	// (0x000201b0) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x4522,	// (0x000201b0) cell_vitu2_dropdown_list_char_pane

0x4543,	// (0x000201d1) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x4543,	// (0x000201d1) cell_vitu2_dropdown_list_ctrl_pane

0x0421,	// (0x0001c0af) cell_vitu2_dropdown_list_char_pane_g1

0x0418,	// (0x0001c0a6) cell_vitu2_dropdown_list_char_pane_g2

0x040f,	// (0x0001c09d) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa10,	// (0x0002b69e) cell_vitu2_dropdown_list_char_pane_g

0x456f,	// (0x000201fd) cell_vitu2_dropdown_list_char_pane_t1

0x9214,	// (0x00024ea2) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x9214,	// (0x00024ea2) cell_vitu2_dropdown_list_ctrl_pane_g1

0x9224,	// (0x00024eb2) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x9224,	// (0x00024eb2) cell_vitu2_dropdown_list_ctrl_pane_g2

0x9235,	// (0x00024ec3) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x9235,	// (0x00024ec3) cell_vitu2_dropdown_list_ctrl_pane_g3

0x457d,	// (0x0002020b) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x457d,	// (0x0002020b) cell_vitu2_dropdown_list_ctrl_pane_g4

0x3fc1,	// (0x0001fc4f) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x3fc1,	// (0x0001fc4f) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa17,	// (0x0002b6a5) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa17,	// (0x0002b6a5) cell_vitu2_dropdown_list_ctrl_pane_g

0x9245,	// (0x00024ed3) aid_size_cell_gallery2_ParamLimits

0x9245,	// (0x00024ed3) aid_size_cell_gallery2

0x9253,	// (0x00024ee1) grid_gallery2_pane_ParamLimits

0x9253,	// (0x00024ee1) grid_gallery2_pane

0x9262,	// (0x00024ef0) scroll_pane_cp029_ParamLimits

0x9262,	// (0x00024ef0) scroll_pane_cp029

0x926e,	// (0x00024efc) cell_gallery2_pane_ParamLimits

0x926e,	// (0x00024efc) cell_gallery2_pane

0x042a,	// (0x0001c0b8) cell_gallery2_pane_g2

0x1839,	// (0x0001d4c7) cell_gallery2_pane_g3

0x0434,	// (0x0001c0c2) cell_gallery2_pane_g4

0x043c,	// (0x0001c0ca) cell_gallery2_pane_g5

0xce34,	// (0x00028ac2) grid_highlight_pane_cp10

0x4253,	// (0x0001fee1) popup_vitu2_match_list_window_ParamLimits

0x4267,	// (0x0001fef5) popup_vitu2_query_window_ParamLimits

0x4267,	// (0x0001fef5) popup_vitu2_query_window

0x30a6,	// (0x0001ed34) bg_vitu2_candi_button_pane

0x0421,	// (0x0001c0af) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x0418,	// (0x0001c0a6) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x040f,	// (0x0001c09d) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x929c,	// (0x00024f2a) bg_button_pane_cp015

0x92ae,	// (0x00024f3c) bg_button_pane_cp016

0x92c1,	// (0x00024f4f) bg_button_pane_cp017

0xe2a4,	// (0x00029f32) bg_popup_sub_pane_cp22

0x0444,	// (0x0001c0d2) popup_vitu2_query_window_g1

0x9306,	// (0x00024f94) popup_vitu2_query_window_g2

0x0002,

0xfa22,	// (0x0002b6b0) popup_vitu2_query_window_g

0x9323,	// (0x00024fb1) popup_vitu2_query_window_t1_ParamLimits

0x9323,	// (0x00024fb1) popup_vitu2_query_window_t1

0x9356,	// (0x00024fe4) popup_vitu2_query_window_t2_ParamLimits

0x9356,	// (0x00024fe4) popup_vitu2_query_window_t2

0x9368,	// (0x00024ff6) popup_vitu2_query_window_t3_ParamLimits

0x9368,	// (0x00024ff6) popup_vitu2_query_window_t3

0x9390,	// (0x0002501e) popup_vitu2_query_window_t4_ParamLimits

0x9390,	// (0x0002501e) popup_vitu2_query_window_t4

0x93b1,	// (0x0002503f) popup_vitu2_query_window_t5_ParamLimits

0x93b1,	// (0x0002503f) popup_vitu2_query_window_t5

0x0006,

0xfa29,	// (0x0002b6b7) popup_vitu2_query_window_t_ParamLimits

0xfa29,	// (0x0002b6b7) popup_vitu2_query_window_t

0x023e,	// (0x0001becc) main_cset_text_pane

0x8e3e,	// (0x00024acc) aid_area_touch_slider_ParamLimits

0x8e5a,	// (0x00024ae8) cset_slider_pane_ParamLimits

0x8e84,	// (0x00024b12) main_cset_slider_pane_g1_ParamLimits

0x8e99,	// (0x00024b27) main_cset_slider_pane_g2_ParamLimits

0x025f,	// (0x0001beed) main_cset_slider_pane_g3_ParamLimits

0x025f,	// (0x0001beed) main_cset_slider_pane_g3

0x8eae,	// (0x00024b3c) main_cset_slider_pane_g4_ParamLimits

0x8eae,	// (0x00024b3c) main_cset_slider_pane_g4

0x8ebd,	// (0x00024b4b) main_cset_slider_pane_g5_ParamLimits

0x8ebd,	// (0x00024b4b) main_cset_slider_pane_g5

0x8ecb,	// (0x00024b59) main_cset_slider_pane_g6_ParamLimits

0x8ecb,	// (0x00024b59) main_cset_slider_pane_g6

0xf97c,	// (0x0002b60a) main_cset_slider_pane_g_ParamLimits

0x028f,	// (0x0001bf1d) main_cset_slider_pane_t1_ParamLimits

0x8f5b,	// (0x00024be9) main_cset_slider_pane_t2_ParamLimits

0x8f75,	// (0x00024c03) main_cset_slider_pane_t3_ParamLimits

0x8f8f,	// (0x00024c1d) main_cset_slider_pane_t4_ParamLimits

0x8fa9,	// (0x00024c37) main_cset_slider_pane_t5_ParamLimits

0x8fc7,	// (0x00024c55) main_cset_slider_pane_t6_ParamLimits

0x8fde,	// (0x00024c6c) main_cset_slider_pane_t7_ParamLimits

0x900c,	// (0x00024c9a) main_cset_slider_pane_t8_ParamLimits

0x900c,	// (0x00024c9a) main_cset_slider_pane_t8

0x9034,	// (0x00024cc2) main_cset_slider_pane_t9_ParamLimits

0x9034,	// (0x00024cc2) main_cset_slider_pane_t9

0x905c,	// (0x00024cea) main_cset_slider_pane_t10_ParamLimits

0x905c,	// (0x00024cea) main_cset_slider_pane_t10

0x9084,	// (0x00024d12) main_cset_slider_pane_t11_ParamLimits

0x9084,	// (0x00024d12) main_cset_slider_pane_t11

0x90ae,	// (0x00024d3c) main_cset_slider_pane_t12_ParamLimits

0x90ae,	// (0x00024d3c) main_cset_slider_pane_t12

0x90cb,	// (0x00024d59) main_cset_slider_pane_t13_ParamLimits

0x90cb,	// (0x00024d59) main_cset_slider_pane_t13

0xf9a1,	// (0x0002b62f) main_cset_slider_pane_t_ParamLimits

0xbba5,	// (0x00027833) bg_popup_sub_pane_cp011

0x0450,	// (0x0001c0de) main_cset_text_pane_g1

0x0458,	// (0x0001c0e6) main_cset_text_pane_t1

0x0466,	// (0x0001c0f4) main_cset_text_pane_t2

0x0474,	// (0x0001c102) main_cset_text_pane_t3

0x0482,	// (0x0001c110) main_cset_text_pane_t4

0x0490,	// (0x0001c11e) main_cset_text_pane_t5

0x049e,	// (0x0001c12c) main_cset_text_pane_t6

0x04ac,	// (0x0001c13a) main_cset_text_pane_t7

0x0006,

0xfa38,	// (0x0002b6c6) main_cset_text_pane_t

0x30a6,	// (0x0001ed34) main_cam4_burst_pane

0x30a6,	// (0x0001ed34) main_cam5_pane

0x8d8d,	// (0x00024a1b) bg_button_pane_cp019

0x8d96,	// (0x00024a24) bg_button_pane_cp020

0x026b,	// (0x0001bef9) main_cset_slider_pane_g7_ParamLimits

0x026b,	// (0x0001bef9) main_cset_slider_pane_g7

0x0277,	// (0x0001bf05) main_cset_slider_pane_g8_ParamLimits

0x0277,	// (0x0001bf05) main_cset_slider_pane_g8

0x8edf,	// (0x00024b6d) main_cset_slider_pane_g9_ParamLimits

0x8edf,	// (0x00024b6d) main_cset_slider_pane_g9

0x8eeb,	// (0x00024b79) main_cset_slider_pane_g10_ParamLimits

0x8eeb,	// (0x00024b79) main_cset_slider_pane_g10

0x8ef7,	// (0x00024b85) main_cset_slider_pane_g11_ParamLimits

0x8ef7,	// (0x00024b85) main_cset_slider_pane_g11

0x8f03,	// (0x00024b91) main_cset_slider_pane_g12_ParamLimits

0x8f03,	// (0x00024b91) main_cset_slider_pane_g12

0x8f0f,	// (0x00024b9d) main_cset_slider_pane_g13_ParamLimits

0x8f0f,	// (0x00024b9d) main_cset_slider_pane_g13

0x8f1b,	// (0x00024ba9) main_cset_slider_pane_g14_ParamLimits

0x8f1b,	// (0x00024ba9) main_cset_slider_pane_g14

0x8f27,	// (0x00024bb5) main_cset_slider_pane_g15_ParamLimits

0x8f27,	// (0x00024bb5) main_cset_slider_pane_g15

0x02bd,	// (0x0001bf4b) main_cset_slider_pane_t14_ParamLimits

0x02bd,	// (0x0001bf4b) main_cset_slider_pane_t14

0x02f6,	// (0x0001bf84) main_cset_slider_pane_t15_ParamLimits

0x02f6,	// (0x0001bf84) main_cset_slider_pane_t15

0x9428,	// (0x000250b6) aid_cam4_burst_size_cell_ParamLimits

0x9428,	// (0x000250b6) aid_cam4_burst_size_cell

0x9444,	// (0x000250d2) grid_cam4_burst_pane_ParamLimits

0x9444,	// (0x000250d2) grid_cam4_burst_pane

0x9474,	// (0x00025102) linegrid_cam4_burst_pane_ParamLimits

0x9474,	// (0x00025102) linegrid_cam4_burst_pane

0x9494,	// (0x00025122) scroll_pane_cp30_ParamLimits

0x9494,	// (0x00025122) scroll_pane_cp30

0x94a0,	// (0x0002512e) cell_cam4_burst_pane_ParamLimits

0x94a0,	// (0x0002512e) cell_cam4_burst_pane

0x04c6,	// (0x0001c154) linegrid_cam4_burst_pane_g1_ParamLimits

0x04c6,	// (0x0001c154) linegrid_cam4_burst_pane_g1

0x94dc,	// (0x0002516a) linegrid_cam4_burst_pane_g2_ParamLimits

0x94dc,	// (0x0002516a) linegrid_cam4_burst_pane_g2

0x04d3,	// (0x0001c161) linegrid_cam4_burst_pane_g3_ParamLimits

0x04d3,	// (0x0001c161) linegrid_cam4_burst_pane_g3

0x0002,

0xfa47,	// (0x0002b6d5) linegrid_cam4_burst_pane_g_ParamLimits

0xfa47,	// (0x0002b6d5) linegrid_cam4_burst_pane_g

0x94ed,	// (0x0002517b) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x94ed,	// (0x0002517b) linegrid_cam4_burst_pane_g3_copy1

0x04e0,	// (0x0001c16e) linegrid_cam4_burst_pane_g4_ParamLimits

0x04e0,	// (0x0001c16e) linegrid_cam4_burst_pane_g4

0x9507,	// (0x00025195) linegrid_cam4_burst_pane_g5_ParamLimits

0x9507,	// (0x00025195) linegrid_cam4_burst_pane_g5

0x9518,	// (0x000251a6) linegrid_cam4_burst_pane_g6_ParamLimits

0x9518,	// (0x000251a6) linegrid_cam4_burst_pane_g6

0x04ed,	// (0x0001c17b) linegrid_cam4_burst_pane_g7_ParamLimits

0x04ed,	// (0x0001c17b) linegrid_cam4_burst_pane_g7

0x9529,	// (0x000251b7) cell_cam4_burst_pane_g1

0x0506,	// (0x0001c194) main_cam5_pane_t1_ParamLimits

0x0506,	// (0x0001c194) main_cam5_pane_t1

0x0518,	// (0x0001c1a6) main_cam5_pane_t2_ParamLimits

0x0518,	// (0x0001c1a6) main_cam5_pane_t2

0x052a,	// (0x0001c1b8) main_cam5_pane_t3_ParamLimits

0x052a,	// (0x0001c1b8) main_cam5_pane_t3

0x053c,	// (0x0001c1ca) main_cam5_pane_t4_ParamLimits

0x053c,	// (0x0001c1ca) main_cam5_pane_t4

0x0554,	// (0x0001c1e2) main_cam5_pane_t5_ParamLimits

0x0554,	// (0x0001c1e2) main_cam5_pane_t5

0x0568,	// (0x0001c1f6) main_cam5_pane_t6_ParamLimits

0x0568,	// (0x0001c1f6) main_cam5_pane_t6

0x057c,	// (0x0001c20a) main_cam5_pane_t7_ParamLimits

0x057c,	// (0x0001c20a) main_cam5_pane_t7

0x058e,	// (0x0001c21c) main_cam5_pane_t8_ParamLimits

0x058e,	// (0x0001c21c) main_cam5_pane_t8

0x05aa,	// (0x0001c238) main_cam5_pane_t9_ParamLimits

0x05aa,	// (0x0001c238) main_cam5_pane_t9

0x05bc,	// (0x0001c24a) main_cam5_pane_t10_ParamLimits

0x05bc,	// (0x0001c24a) main_cam5_pane_t10

0x05ce,	// (0x0001c25c) main_cam5_pane_t11_ParamLimits

0x05ce,	// (0x0001c25c) main_cam5_pane_t11

0x05e0,	// (0x0001c26e) main_cam5_pane_t12_ParamLimits

0x05e0,	// (0x0001c26e) main_cam5_pane_t12

0x05f5,	// (0x0001c283) main_cam5_pane_t13_ParamLimits

0x05f5,	// (0x0001c283) main_cam5_pane_t13

0x000c,

0xfa53,	// (0x0002b6e1) main_cam5_pane_t_ParamLimits

0xfa53,	// (0x0002b6e1) main_cam5_pane_t

0x3057,	// (0x0001ece5) popup_scut_keymap_window_ParamLimits

0x3057,	// (0x0001ece5) popup_scut_keymap_window

0x953c,	// (0x000251ca) aid_size_cell_brow_shortcut

0xce34,	// (0x00028ac2) bg_popup_window_pane_cp010

0x9548,	// (0x000251d6) grid_scut_pane

0x9554,	// (0x000251e2) cell_scut_pane_ParamLimits

0x9554,	// (0x000251e2) cell_scut_pane

0x956b,	// (0x000251f9) cell_scut_pane_g1

0x0612,	// (0x0001c2a0) cell_scut_pane_t1

0x0621,	// (0x0001c2af) cell_scut_pane_t2

0x9574,	// (0x00025202) cell_scut_pane_t3

0x0002,

0xfa6e,	// (0x0002b6fc) cell_scut_pane_t

0x7f06,	// (0x00023b94) main_mup3_pane_g8_ParamLimits

0x7f06,	// (0x00023b94) main_mup3_pane_g8

0x417d,	// (0x0001fe0b) area_vitu2_query_pane_ParamLimits

0x417d,	// (0x0001fe0b) area_vitu2_query_pane

0x92d4,	// (0x00024f62) input_focus_pane_cp08

0x0630,	// (0x0001c2be) area_vitu2_query_pane_g1

0x9582,	// (0x00025210) area_vitu2_query_pane_g2

0x0001,

0xfa75,	// (0x0002b703) area_vitu2_query_pane_g

0x9593,	// (0x00025221) area_vitu2_query_pane_t1_ParamLimits

0x9593,	// (0x00025221) area_vitu2_query_pane_t1

0x95a7,	// (0x00025235) area_vitu2_query_pane_t2_ParamLimits

0x95a7,	// (0x00025235) area_vitu2_query_pane_t2

0x95bb,	// (0x00025249) area_vitu2_query_pane_t3_ParamLimits

0x95bb,	// (0x00025249) area_vitu2_query_pane_t3

0x063c,	// (0x0001c2ca) area_vitu2_query_pane_t4_ParamLimits

0x063c,	// (0x0001c2ca) area_vitu2_query_pane_t4

0x0664,	// (0x0001c2f2) area_vitu2_query_pane_t5_ParamLimits

0x0664,	// (0x0001c2f2) area_vitu2_query_pane_t5

0x068c,	// (0x0001c31a) area_vitu2_query_pane_t6_ParamLimits

0x068c,	// (0x0001c31a) area_vitu2_query_pane_t6

0x0006,

0xfa7a,	// (0x0002b708) area_vitu2_query_pane_t_ParamLimits

0xfa7a,	// (0x0002b708) area_vitu2_query_pane_t

0x95e3,	// (0x00025271) bg_button_pane_cp018

0x95f1,	// (0x0002527f) bg_button_pane_cp021

0x95fd,	// (0x0002528b) bg_button_pane_cp022

0x960e,	// (0x0002529c) input_focus_pane_cp09

0x687e,	// (0x0002250c) aid_size_touch_mv_arrow_left

0x68a7,	// (0x00022535) aid_size_touch_mv_arrow_right

0x8f3f,	// (0x00024bcd) main_cset_slider_pane_g16_ParamLimits

0x8f3f,	// (0x00024bcd) main_cset_slider_pane_g16

0x8f4d,	// (0x00024bdb) main_cset_slider_pane_g17_ParamLimits

0x8f4d,	// (0x00024bdb) main_cset_slider_pane_g17

0x9529,	// (0x000251b7) cell_cam4_burst_pane_g1_ParamLimits

0xbba5,	// (0x00027833) compa_mode_pane

0x9128,	// (0x00024db6) popup_vtel_slider_window_g3_ParamLimits

0x9128,	// (0x00024db6) popup_vtel_slider_window_g3

0x913c,	// (0x00024dca) popup_vtel_slider_window_g4_ParamLimits

0x913c,	// (0x00024dca) popup_vtel_slider_window_g4

0x9150,	// (0x00024dde) popup_vtel_slider_window_t1_ParamLimits

0x9150,	// (0x00024dde) popup_vtel_slider_window_t1

0x30a6,	// (0x0001ed34) main_cl_pane

0x3606,	// (0x0001f294) popup_imed_adjust2_window_ParamLimits

0xe2a4,	// (0x00029f32) bg_tb_trans_pane_cp05_ParamLimits

0xebe7,	// (0x0002a875) popup_imed_adjust2_window_g1_ParamLimits

0xebf6,	// (0x0002a884) popup_imed_adjust2_window_g2_ParamLimits

0xebf6,	// (0x0002a884) popup_imed_adjust2_window_g2

0xec02,	// (0x0002a890) popup_imed_adjust2_window_g3_ParamLimits

0xec02,	// (0x0002a890) popup_imed_adjust2_window_g3

0x0002,

0xf7e5,	// (0x0002b473) popup_imed_adjust2_window_g_ParamLimits

0xf7e5,	// (0x0002b473) popup_imed_adjust2_window_g

0xec0e,	// (0x0002a89c) popup_imed_adjust2_window_t1_ParamLimits

0xec26,	// (0x0002a8b4) slider_imed_adjust_pane_ParamLimits

0xec3a,	// (0x0002a8c8) slider_imed_adjust_pane_g1_ParamLimits

0xec4a,	// (0x0002a8d8) slider_imed_adjust_pane_g2_ParamLimits

0xec5a,	// (0x0002a8e8) slider_imed_adjust_pane_g3_ParamLimits

0xec6b,	// (0x0002a8f9) slider_imed_adjust_pane_g4_ParamLimits

0xf7ec,	// (0x0002b47a) slider_imed_adjust_pane_g_ParamLimits

0x3efa,	// (0x0001fb88) aid_touch_area_cam4_ParamLimits

0x3efa,	// (0x0001fb88) aid_touch_area_cam4

0x3f0a,	// (0x0001fb98) battery_pane_cp01

0x3f91,	// (0x0001fc1f) main_camera4_pane_g6_ParamLimits

0x3f91,	// (0x0001fc1f) main_camera4_pane_g6

0x3faf,	// (0x0001fc3d) main_camera4_pane_t2_ParamLimits

0x3faf,	// (0x0001fc3d) main_camera4_pane_t2

0x0001,

0xf8ef,	// (0x0002b57d) main_camera4_pane_t_ParamLimits

0xf8ef,	// (0x0002b57d) main_camera4_pane_t

0x4020,	// (0x0001fcae) aid_touch_area_vid4_ParamLimits

0x4020,	// (0x0001fcae) aid_touch_area_vid4

0x4060,	// (0x0001fcee) main_video4_pane_g5_ParamLimits

0x4060,	// (0x0001fcee) main_video4_pane_g5

0x4084,	// (0x0001fd12) vid4_progress_pane_ParamLimits

0x4084,	// (0x0001fd12) vid4_progress_pane

0x0283,	// (0x0001bf11) main_cset_slider_pane_g18_ParamLimits

0x0283,	// (0x0001bf11) main_cset_slider_pane_g18

0x04fa,	// (0x0001c188) cell_cam4_burst_pane_g2_ParamLimits

0x04fa,	// (0x0001c188) cell_cam4_burst_pane_g2

0x0001,

0xfa4e,	// (0x0002b6dc) cell_cam4_burst_pane_g_ParamLimits

0xfa4e,	// (0x0002b6dc) cell_cam4_burst_pane_g

0x961f,	// (0x000252ad) bg_cl_pane_ParamLimits

0x961f,	// (0x000252ad) bg_cl_pane

0x962b,	// (0x000252b9) cl_header_pane_ParamLimits

0x962b,	// (0x000252b9) cl_header_pane

0x9637,	// (0x000252c5) cl_listscroll_pane_ParamLimits

0x9637,	// (0x000252c5) cl_listscroll_pane

0x06d8,	// (0x0001c366) bg_cl_pane_g1

0x06e0,	// (0x0001c36e) bg_cl_pane_g2

0x06e8,	// (0x0001c376) bg_cl_pane_g3

0x06f0,	// (0x0001c37e) bg_cl_pane_g4

0x06f8,	// (0x0001c386) bg_cl_pane_g5

0x0700,	// (0x0001c38e) bg_cl_pane_g6

0x0708,	// (0x0001c396) bg_cl_pane_g7

0x0710,	// (0x0001c39e) bg_cl_pane_g8

0x0718,	// (0x0001c3a6) bg_cl_pane_g9

0x0008,

0xfa89,	// (0x0002b717) bg_cl_pane_g

0x9643,	// (0x000252d1) aid_height_cl_leading_ParamLimits

0x9643,	// (0x000252d1) aid_height_cl_leading

0x964f,	// (0x000252dd) aid_height_cl_text_ParamLimits

0x964f,	// (0x000252dd) aid_height_cl_text

0x012e,	// (0x0001bdbc) bg_cl_header_pane_ParamLimits

0x012e,	// (0x0001bdbc) bg_cl_header_pane

0x9667,	// (0x000252f5) cl_header_pane_g1_ParamLimits

0x9667,	// (0x000252f5) cl_header_pane_g1

0x9674,	// (0x00025302) cl_header_pane_t1_ParamLimits

0x9674,	// (0x00025302) cl_header_pane_t1

0x0720,	// (0x0001c3ae) cl_list_pane

0x0256,	// (0x0001bee4) hc_scroll_pane_cp01

0xc6f1,	// (0x0002837f) bg_cl_header_pane_g1

0x00fa,	// (0x0001bd88) bg_cl_header_pane_g2

0xc711,	// (0x0002839f) bg_cl_header_pane_g3

0x010a,	// (0x0001bd98) bg_cl_header_pane_g4

0x0102,	// (0x0001bd90) bg_cl_header_pane_g5

0x03e7,	// (0x0001c075) bg_cl_header_pane_g6

0x0164,	// (0x0001bdf2) bg_cl_header_pane_g7

0x016c,	// (0x0001bdfa) bg_cl_header_pane_g8

0x015c,	// (0x0001bdea) bg_cl_header_pane_g9

0x0008,

0xfa9c,	// (0x0002b72a) bg_cl_header_pane_g

0x9686,	// (0x00025314) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x9686,	// (0x00025314) hc_cl_list_double_graphic_heading_pane

0x9697,	// (0x00025325) hc_cl_list_single_graphic_pane_ParamLimits

0x9697,	// (0x00025325) hc_cl_list_single_graphic_pane

0x96b0,	// (0x0002533e) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x96b0,	// (0x0002533e) hc_cl_list_single_graphic_pane_g1

0x96bc,	// (0x0002534a) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x96bc,	// (0x0002534a) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaaf,	// (0x0002b73d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaaf,	// (0x0002b73d) hc_cl_list_single_graphic_pane_g

0x96d0,	// (0x0002535e) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x96d0,	// (0x0002535e) hc_cl_list_single_graphic_pane_t1

0x96b0,	// (0x0002533e) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x96b0,	// (0x0002533e) hc_cl_list_double_graphic_heading_pane_g1

0x96e5,	// (0x00025373) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x96e5,	// (0x00025373) hc_cl_list_double_graphic_heading_pane_g2

0x96f9,	// (0x00025387) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x96f9,	// (0x00025387) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab4,	// (0x0002b742) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab4,	// (0x0002b742) hc_cl_list_double_graphic_heading_pane_g

0x970d,	// (0x0002539b) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x970d,	// (0x0002539b) hc_cl_list_double_graphic_heading_pane_t1

0x9722,	// (0x000253b0) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x9722,	// (0x000253b0) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabb,	// (0x0002b749) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabb,	// (0x0002b749) hc_cl_list_double_graphic_heading_pane_t

0x45a1,	// (0x0002022f) vid4_progress_pane_g1

0x45b3,	// (0x00020241) vid4_progress_pane_g2

0xc9d2,	// (0x00028660) vid4_progress_pane_g3

0x45c3,	// (0x00020251) vid4_progress_pane_g4

0x0004,

0xfac0,	// (0x0002b74e) vid4_progress_pane_g

0x45e1,	// (0x0002026f) vid4_progress_pane_t1

0x45f6,	// (0x00020284) vid4_progress_pane_t2

0x0002,

0xfacb,	// (0x0002b759) vid4_progress_pane_t

0x4621,	// (0x000202af) wait_bar_pane_cp07

0xe4a8,	// (0x0002a136) blid_firmament_pane_ParamLimits

0xe4eb,	// (0x0002a179) popup_blid_sat_info2_window_g1

0xe50f,	// (0x0002a19d) popup_blid_sat_info2_window_t3

0xe51d,	// (0x0002a1ab) popup_blid_sat_info2_window_t4

0xe52b,	// (0x0002a1b9) popup_blid_sat_info2_window_t5

0xe539,	// (0x0002a1c7) popup_blid_sat_info2_window_t6

0xe549,	// (0x0002a1d7) popup_blid_sat_info2_window_t7

0xe557,	// (0x0002a1e5) popup_blid_sat_info2_window_t8

0xe565,	// (0x0002a1f3) popup_blid_sat_info2_window_t9

0xe573,	// (0x0002a201) popup_blid_sat_info2_window_t10

0xe635,	// (0x0002a2c3) aid_firma_cardinal_ParamLimits

0xe649,	// (0x0002a2d7) blid_firmament_pane_t1_ParamLimits

0xe660,	// (0x0002a2ee) blid_firmament_pane_t2_ParamLimits

0xe677,	// (0x0002a305) blid_firmament_pane_t3_ParamLimits

0xe68e,	// (0x0002a31c) blid_firmament_pane_t4_ParamLimits

0xf6de,	// (0x0002b36c) blid_firmament_pane_t_ParamLimits

0xe6a5,	// (0x0002a333) blid_sat_info_pane_ParamLimits

0x3568,	// (0x0001f1f6) main_cam_set_pane_ParamLimits

0x8646,	// (0x000242d4) aid_size_cell_colour_35_ParamLimits

0x8660,	// (0x000242ee) aid_size_cell_colour_112_ParamLimits

0x8677,	// (0x00024305) aid_size_cell_effect_ParamLimits

0xc193,	// (0x00027e21) bg_tb_trans_pane_cp02_ParamLimits

0xcb9e,	// (0x0002882c) heading_imed_pane_ParamLimits

0x8691,	// (0x0002431f) listscroll_imed_pane_ParamLimits

0xd8ca,	// (0x00029558) popup_call2_audio_first_window_g5_ParamLimits

0xd8ca,	// (0x00029558) popup_call2_audio_first_window_g5

0x3d85,	// (0x0001fa13) aid_size_touch_image3_arrow_left_ParamLimits

0x3d85,	// (0x0001fa13) aid_size_touch_image3_arrow_left

0x3d9b,	// (0x0001fa29) aid_size_touch_image3_arrow_right_ParamLimits

0x3d9b,	// (0x0001fa29) aid_size_touch_image3_arrow_right

0x460c,	// (0x0002029a) vid4_progress_pane_t3

0x892f,	// (0x000245bd) main_hwr_training_symbol_option_pane_ParamLimits

0x892f,	// (0x000245bd) main_hwr_training_symbol_option_pane

0xeed4,	// (0x0002ab62) popup_hwr_training_preview_window_ParamLimits

0xeed4,	// (0x0002ab62) popup_hwr_training_preview_window

0x3a83,	// (0x0001f711) hwr_training_navi_pane_g5_ParamLimits

0x3a83,	// (0x0001f711) hwr_training_navi_pane_g5

0x00e8,	// (0x0001bd76) popup_char_count_window

0x3098,	// (0x0001ed26) bg_popup_sub_pane_cp20_ParamLimits

0x44e2,	// (0x00020170) list_vitu2_match_list_pane_ParamLimits

0x44ee,	// (0x0002017c) vitu2_page_scroll_pane_ParamLimits

0x44ee,	// (0x0002017c) vitu2_page_scroll_pane

0x07c3,	// (0x0001c451) list_single_hwr_training_symbol_option_pane_ParamLimits

0x07c3,	// (0x0001c451) list_single_hwr_training_symbol_option_pane

0x07d6,	// (0x0001c464) list_single_hwr_training_symbol_option_pane_g1

0x07de,	// (0x0001c46c) list_single_hwr_training_symbol_option_pane_t1

0x07ec,	// (0x0001c47a) bg_button_pane_cp023

0x07f5,	// (0x0001c483) bg_button_pane_cp024

0x9766,	// (0x000253f4) vitu2_page_scroll_pane_g1

0x976e,	// (0x000253fc) vitu2_page_scroll_pane_g2

0x0001,

0xfad2,	// (0x0002b760) vitu2_page_scroll_pane_g

0x9776,	// (0x00025404) vitu2_page_scroll_pane_t1

0x0828,	// (0x0001c4b6) popup_char_count_window_g1

0x0831,	// (0x0001c4bf) popup_char_count_window_g2

0x083a,	// (0x0001c4c8) popup_char_count_window_g3

0x0002,

0xfad7,	// (0x0002b765) popup_char_count_window_g

0x0843,	// (0x0001c4d1) popup_char_count_window_t1

0x30a6,	// (0x0001ed34) main_vded2_pane

0xebd3,	// (0x0002a861) aid_size_cell_imed_line

0xebdd,	// (0x0002a86b) grid_imed_line_width_pane

0x40f2,	// (0x0001fd80) vid4_indicators_pane_g4

0x0851,	// (0x0001c4df) cell_imed_line_width_pane_ParamLimits

0x0851,	// (0x0001c4df) cell_imed_line_width_pane

0x0865,	// (0x0001c4f3) cell_imed_line_width_pane_g1

0x086e,	// (0x0001c4fc) cell_imed_line_width_pane_g2

0x0001,

0xfade,	// (0x0002b76c) cell_imed_line_width_pane_g

0x9785,	// (0x00025413) main_vded2_pane_g1_ParamLimits

0x9785,	// (0x00025413) main_vded2_pane_g1

0x9792,	// (0x00025420) main_vded2_pane_g2_ParamLimits

0x9792,	// (0x00025420) main_vded2_pane_g2

0x0001,

0xfae3,	// (0x0002b771) main_vded2_pane_g_ParamLimits

0xfae3,	// (0x0002b771) main_vded2_pane_g

0x97a0,	// (0x0002542e) vded2_slider_pane_ParamLimits

0x97a0,	// (0x0002542e) vded2_slider_pane

0x97ad,	// (0x0002543b) aid_size_touch_vded2_end

0x97b7,	// (0x00025445) aid_size_touch_vded2_playhead

0x0876,	// (0x0001c504) aid_size_touch_vded2_start

0x087e,	// (0x0001c50c) vded2_slider_bg_pane

0x0887,	// (0x0001c515) vded2_slider_pane_g1

0x0890,	// (0x0001c51e) vded2_slider_pane_g2

0x97bf,	// (0x0002544d) vded2_slider_pane_g3

0x0002,

0xfae8,	// (0x0002b776) vded2_slider_pane_g

0x0898,	// (0x0001c526) vded2_slider_bg_pane_g1

0x08a1,	// (0x0001c52f) vded2_slider_bg_pane_g2

0x08aa,	// (0x0001c538) vded2_slider_bg_pane_g3

0x0002,

0xfaef,	// (0x0002b77d) vded2_slider_bg_pane_g

0x6ee9,	// (0x00022b77) aid_postcard_touch_down_pane_ParamLimits

0x6ee9,	// (0x00022b77) aid_postcard_touch_down_pane

0x6ef9,	// (0x00022b87) aid_postcard_touch_up_pane_ParamLimits

0x6ef9,	// (0x00022b87) aid_postcard_touch_up_pane

0x30a6,	// (0x0001ed34) main_blid2_pane

0x3591,	// (0x0001f21f) popup_blid2_search_window

0xbba5,	// (0x00027833) blid2_gps_pane

0xbba5,	// (0x00027833) blid2_navig_pane

0xbba5,	// (0x00027833) blid2_search_pane

0xbba5,	// (0x00027833) blid2_tripm_pane

0x97c8,	// (0x00025456) blid2_search_pane_g1_ParamLimits

0x97c8,	// (0x00025456) blid2_search_pane_g1

0x97d8,	// (0x00025466) blid2_search_pane_t1_ParamLimits

0x97d8,	// (0x00025466) blid2_search_pane_t1

0x97ea,	// (0x00025478) aid_size_cell_blid2_gps_ParamLimits

0x97ea,	// (0x00025478) aid_size_cell_blid2_gps

0x97fa,	// (0x00025488) blid2_gps_pane_g1_ParamLimits

0x97fa,	// (0x00025488) blid2_gps_pane_g1

0x9806,	// (0x00025494) grid_blid2_satellite_pane_ParamLimits

0x9806,	// (0x00025494) grid_blid2_satellite_pane

0x9816,	// (0x000254a4) blid2_navig_pane_g1_ParamLimits

0x9816,	// (0x000254a4) blid2_navig_pane_g1

0x9822,	// (0x000254b0) blid2_navig_pane_t1_ParamLimits

0x9822,	// (0x000254b0) blid2_navig_pane_t1

0x9834,	// (0x000254c2) blid2_navig_pane_t2_ParamLimits

0x9834,	// (0x000254c2) blid2_navig_pane_t2

0x0001,

0xfaf6,	// (0x0002b784) blid2_navig_pane_t_ParamLimits

0xfaf6,	// (0x0002b784) blid2_navig_pane_t

0x9846,	// (0x000254d4) blid2_navig_ring_pane_ParamLimits

0x9846,	// (0x000254d4) blid2_navig_ring_pane

0x9856,	// (0x000254e4) blid2_speed_pane_ParamLimits

0x9856,	// (0x000254e4) blid2_speed_pane

0x9862,	// (0x000254f0) blid2_tripm_pane_g1_ParamLimits

0x9862,	// (0x000254f0) blid2_tripm_pane_g1

0x9872,	// (0x00025500) blid2_tripm_pane_g2_ParamLimits

0x9872,	// (0x00025500) blid2_tripm_pane_g2

0x987e,	// (0x0002550c) blid2_tripm_pane_g3_ParamLimits

0x987e,	// (0x0002550c) blid2_tripm_pane_g3

0x988a,	// (0x00025518) blid2_tripm_pane_g4_ParamLimits

0x988a,	// (0x00025518) blid2_tripm_pane_g4

0x9896,	// (0x00025524) blid2_tripm_pane_g5_ParamLimits

0x9896,	// (0x00025524) blid2_tripm_pane_g5

0x0005,

0xfafb,	// (0x0002b789) blid2_tripm_pane_g_ParamLimits

0xfafb,	// (0x0002b789) blid2_tripm_pane_g

0x98b2,	// (0x00025540) blid2_tripm_pane_t1_ParamLimits

0x98b2,	// (0x00025540) blid2_tripm_pane_t1

0x98c6,	// (0x00025554) blid2_tripm_pane_t2_ParamLimits

0x98c6,	// (0x00025554) blid2_tripm_pane_t2

0x98d8,	// (0x00025566) blid2_tripm_pane_t3_ParamLimits

0x98d8,	// (0x00025566) blid2_tripm_pane_t3

0x0003,

0xfb08,	// (0x0002b796) blid2_tripm_pane_t_ParamLimits

0xfb08,	// (0x0002b796) blid2_tripm_pane_t

0x990a,	// (0x00025598) cell_blid2_satellite_pane_ParamLimits

0x990a,	// (0x00025598) cell_blid2_satellite_pane

0x9924,	// (0x000255b2) cell_blid2_satellite_pane_g1

0x08b3,	// (0x0001c541) cell_blid2_satellite_pane_t1

0xe6b5,	// (0x0002a343) blid2_speed_pane_g1

0x08c1,	// (0x0001c54f) blid2_speed_pane_t1

0x08cf,	// (0x0001c55d) blid2_speed_pane_t2

0x0001,

0xfb11,	// (0x0002b79f) blid2_speed_pane_t

0xe6b5,	// (0x0002a343) blid2_navig_ring_pane_g1

0x992d,	// (0x000255bb) blid2_navig_ring_pane_g2

0x9935,	// (0x000255c3) blid2_navig_ring_pane_g3

0x993d,	// (0x000255cb) blid2_navig_ring_pane_g4

0x9945,	// (0x000255d3) blid2_navig_ring_pane_g5

0x0004,

0xfb16,	// (0x0002b7a4) blid2_navig_ring_pane_g

0xbba5,	// (0x00027833) bg_popup_window_pane_cp011

0x08dd,	// (0x0001c56b) popup_blid2_search_window_g1

0x08e5,	// (0x0001c573) popup_blid2_search_window_t1

0x08f3,	// (0x0001c581) popup_blid2_search_window_t2

0x0001,

0xfb21,	// (0x0002b7af) popup_blid2_search_window_t

0xc600,	// (0x0002828e) main_browser_pane_g1

0xc2f0,	// (0x00027f7e) main_browser_pane_ParamLimits

0x3568,	// (0x0001f1f6) bg_button_pane_cp011_ParamLimits

0x4404,	// (0x00020092) cell_vitu2_function_pane_g1_ParamLimits

0xe2a4,	// (0x00029f32) bg_popup_sub_pane_cp22_ParamLimits

0x92d4,	// (0x00024f62) input_focus_pane_cp08_ParamLimits

0x92eb,	// (0x00024f79) popup_vitu2_query_button_pane_ParamLimits

0x92eb,	// (0x00024f79) popup_vitu2_query_button_pane

0x92fc,	// (0x00024f8a) popup_vitu2_query_input_button_pane

0x0444,	// (0x0001c0d2) popup_vitu2_query_window_g1_ParamLimits

0x9306,	// (0x00024f94) popup_vitu2_query_window_g2_ParamLimits

0xfa22,	// (0x0002b6b0) popup_vitu2_query_window_g_ParamLimits

0xbba5,	// (0x00027833) bg_button_pane_cp026

0x994d,	// (0x000255db) popup_vitu2_query_input_button_pane_g1

0xbba5,	// (0x00027833) bg_button_pane_cp025

0x0901,	// (0x0001c58f) popup_vitu2_query_button_pane_t1

0x7c01,	// (0x0002388f) main_mp3_pane_t6

0x7c11,	// (0x0002389f) popup_slider_window_cp01

0x3fcf,	// (0x0001fc5d) cam4_battery_pane

0x40af,	// (0x0001fd3d) cam4_battery_pane_cp02

0x4599,	// (0x00020227) cam4_battery_pane_cp01

0x4599,	// (0x00020227) cam4_battery_pane_cp03

0x090f,	// (0x0001c59d) cam4_battery_pane_g1

0xe6b5,	// (0x0002a343) cam4_battery_pane_g2

0x0001,

0xfb26,	// (0x0002b7b4) cam4_battery_pane_g

0xe581,	// (0x0002a20f) popup_blid_sat_info2_window_t11

0x687e,	// (0x0002250c) aid_size_touch_mv_arrow_left_ParamLimits

0x68a7,	// (0x00022535) aid_size_touch_mv_arrow_right_ParamLimits

0xcd94,	// (0x00028a22) navi_pane_g1_ParamLimits

0x68e6,	// (0x00022574) navi_pane_g2_ParamLimits

0x6914,	// (0x000225a2) navi_pane_g3_ParamLimits

0xf3f0,	// (0x0002b07e) navi_pane_g_ParamLimits

0x696e,	// (0x000225fc) navi_pane_mv_t1_ParamLimits

0x869d,	// (0x0002432b) grid_imed_effect_pane_ParamLimits

0x530c,	// (0x00020f9a) aid_placing_vt_slider_lsc

0xc54f,	// (0x000281dd) aid_placing_vt_slider_prt

0xc193,	// (0x00027e21) bg_tb_trans_pane_cp01_ParamLimits

0xe838,	// (0x0002a4c6) popup_image_details_window_g1_ParamLimits

0xe84b,	// (0x0002a4d9) popup_image_details_window_g2_ParamLimits

0xe860,	// (0x0002a4ee) popup_image_details_window_g3_ParamLimits

0xe860,	// (0x0002a4ee) popup_image_details_window_g3

0xf723,	// (0x0002b3b1) popup_image_details_window_g_ParamLimits

0xe874,	// (0x0002a502) popup_image_details_window_t1_ParamLimits

0xe886,	// (0x0002a514) popup_image_details_window_t2_ParamLimits

0xe89f,	// (0x0002a52d) popup_image_details_window_t3_ParamLimits

0xe8b3,	// (0x0002a541) popup_image_details_window_t4_ParamLimits

0xe8ce,	// (0x0002a55c) popup_image_details_window_t5_ParamLimits

0xf72a,	// (0x0002b3b8) popup_image_details_window_t_ParamLimits

0x965b,	// (0x000252e9) cl_header_name_pane_ParamLimits

0x965b,	// (0x000252e9) cl_header_name_pane

0x9955,	// (0x000255e3) cl_header_name_pane_t1_ParamLimits

0x9955,	// (0x000255e3) cl_header_name_pane_t1

0x996c,	// (0x000255fa) cl_header_name_pane_t2_ParamLimits

0x996c,	// (0x000255fa) cl_header_name_pane_t2

0x9996,	// (0x00025624) cl_header_name_pane_t3_ParamLimits

0x9996,	// (0x00025624) cl_header_name_pane_t3

0x0002,

0xfb2b,	// (0x0002b7b9) cl_header_name_pane_t_ParamLimits

0xfb2b,	// (0x0002b7b9) cl_header_name_pane_t

0x693f,	// (0x000225cd) navi_pane_mv_g2_ParamLimits

0x0076,	// (0x0001bd04) field_vitu2_entry_pane_g1_ParamLimits

0x0082,	// (0x0001bd10) field_vitu2_entry_pane_g2_ParamLimits

0x008e,	// (0x0001bd1c) field_vitu2_entry_pane_g3_ParamLimits

0x008e,	// (0x0001bd1c) field_vitu2_entry_pane_g3

0xf921,	// (0x0002b5af) field_vitu2_entry_pane_g_ParamLimits

0x42d9,	// (0x0001ff67) cell_vitu2_itu_pane_g1_ParamLimits

0x42e9,	// (0x0001ff77) cell_vitu2_itu_pane_g2_ParamLimits

0x42e9,	// (0x0001ff77) cell_vitu2_itu_pane_g2

0x0001,

0xf92d,	// (0x0002b5bb) cell_vitu2_itu_pane_g_ParamLimits

0xf92d,	// (0x0002b5bb) cell_vitu2_itu_pane_g

0x3568,	// (0x0001f1f6) bg_vkb2_func_pane_cp05_ParamLimits

0x3568,	// (0x0001f1f6) bg_vkb2_func_pane_cp05

0x3568,	// (0x0001f1f6) bg_vkb2_func_pane_cp03

0x3568,	// (0x0001f1f6) bg_vkb2_func_pane_cp04

0x3568,	// (0x0001f1f6) bg_vkb2_func_pane_cp10_ParamLimits

0x3568,	// (0x0001f1f6) bg_vkb2_func_pane_cp10

0x95fd,	// (0x0002528b) bg_vkb2_func_pane_cp08

0x95e3,	// (0x00025271) bg_vkb2_func_pane_cp06

0x95f1,	// (0x0002527f) bg_vkb2_func_pane_cp07

0x07fe,	// (0x0001c48c) bg_vkb2_func_pane_cp11_ParamLimits

0x07fe,	// (0x0001c48c) bg_vkb2_func_pane_cp11

0x0813,	// (0x0001c4a1) bg_vkb2_func_pane_cp12_ParamLimits

0x0813,	// (0x0001c4a1) bg_vkb2_func_pane_cp12

0xbba5,	// (0x00027833) bg_vkb2_func_pane_cp09

0x00fa,	// (0x0001bd88) bg_vkb2_func_pane_g1

0xc711,	// (0x0002839f) bg_vkb2_func_pane_g2

0x0102,	// (0x0001bd90) bg_vkb2_func_pane_g3

0x010a,	// (0x0001bd98) bg_vkb2_func_pane_g4

0x03e7,	// (0x0001c075) bg_vkb2_func_pane_g5

0x0164,	// (0x0001bdf2) bg_vkb2_func_pane_g6

0x016c,	// (0x0001bdfa) bg_vkb2_func_pane_g7

0x015c,	// (0x0001bdea) bg_vkb2_func_pane_g8

0xc6f1,	// (0x0002837f) bg_vkb2_func_pane_g9

0x0008,

0xfb32,	// (0x0002b7c0) bg_vkb2_func_pane_g

0x98a4,	// (0x00025532) blid2_tripm_pane_g6_ParamLimits

0x98a4,	// (0x00025532) blid2_tripm_pane_g6

0xef8c,	// (0x0002ac1a) mp4_progress_pane_g1

0x98fe,	// (0x0002558c) blid2_tripm_values_pane_ParamLimits

0x98fe,	// (0x0002558c) blid2_tripm_values_pane

0x99bb,	// (0x00025649) blid2_tripm_values_pane_t1

0x99c9,	// (0x00025657) blid2_tripm_values_pane_t2

0x99d7,	// (0x00025665) blid2_tripm_values_pane_t3

0x99e5,	// (0x00025673) blid2_tripm_values_pane_t4

0x99f3,	// (0x00025681) blid2_tripm_values_pane_t5

0x9a01,	// (0x0002568f) blid2_tripm_values_pane_t6

0x9a0f,	// (0x0002569d) blid2_tripm_values_pane_t7

0x9a1d,	// (0x000256ab) blid2_tripm_values_pane_t8

0x9a2b,	// (0x000256b9) blid2_tripm_values_pane_t9

0x0008,

0xfb45,	// (0x0002b7d3) blid2_tripm_values_pane_t

0x534c,	// (0x00020fda) call_video_pane_t1_ParamLimits

0x536d,	// (0x00020ffb) call_video_pane_t2_ParamLimits

0xf279,	// (0x0002af07) call_video_pane_t_ParamLimits

0x6e99,	// (0x00022b27) msg_header_pane_g1_ParamLimits

0xcfae,	// (0x00028c3c) msg_header_pane_g2_ParamLimits

0xcfae,	// (0x00028c3c) msg_header_pane_g2

0x0001,

0xf493,	// (0x0002b121) msg_header_pane_g_ParamLimits

0xf493,	// (0x0002b121) msg_header_pane_g

0xc2f0,	// (0x00027f7e) main_clock2_pane_ParamLimits

0x84ae,	// (0x0002413c) grid_clock2_toolbar_pane_ParamLimits

0x84ae,	// (0x0002413c) grid_clock2_toolbar_pane

0x84ae,	// (0x0002413c) listscroll_clock2_pane_ParamLimits

0x84ae,	// (0x0002413c) listscroll_clock2_pane

0x8552,	// (0x000241e0) main_clock2_pane_t3_ParamLimits

0x8552,	// (0x000241e0) main_clock2_pane_t3

0x8564,	// (0x000241f2) main_clock2_pane_t4_ParamLimits

0x8564,	// (0x000241f2) main_clock2_pane_t4

0x0919,	// (0x0001c5a7) cell_clock2_toolbar_pane

0x0921,	// (0x0001c5af) cell_clock2_toolbar_pane_cp01

0x0921,	// (0x0001c5af) cell_clock2_toolbar_pane_cp02

0x0929,	// (0x0001c5b7) cell_clock2_toolbar_pane_cp03

0x0931,	// (0x0001c5bf) list_clock2_pane

0xcceb,	// (0x00028979) scroll_pane_cp10

0x0939,	// (0x0001c5c7) list_single_clock2_pane_ParamLimits

0x0939,	// (0x0001c5c7) list_single_clock2_pane

0xce34,	// (0x00028ac2) list_highlight_pane_cp08

0x0946,	// (0x0001c5d4) list_single_clock2_pane_t1

0x0954,	// (0x0001c5e2) list_single_clock2_pane_t2

0x0001,

0xfb58,	// (0x0002b7e6) list_single_clock2_pane_t

0xbba5,	// (0x00027833) bg_button_pane_cp10

0x0962,	// (0x0001c5f0) cell_clock2_toolbar_pane_g1

0x3503,	// (0x0001f191) aid_main_viewer_pane_g1_ParamLimits

0x3503,	// (0x0001f191) aid_main_viewer_pane_g1

0x350f,	// (0x0001f19d) aid_main_viewer_pane_g2_ParamLimits

0x350f,	// (0x0001f19d) aid_main_viewer_pane_g2

0x6ea5,	// (0x00022b33) aid_main_viewer_pane_g3_ParamLimits

0x6ea5,	// (0x00022b33) aid_main_viewer_pane_g3

0x6eb6,	// (0x00022b44) aid_main_viewer_pane_g4_ParamLimits

0x6eb6,	// (0x00022b44) aid_main_viewer_pane_g4

0x0003,

0xf4a4,	// (0x0002b132) aid_main_viewer_pane_g_ParamLimits

0xf4a4,	// (0x0002b132) aid_main_viewer_pane_g

0x355b,	// (0x0001f1e9) main_calc_pane_ParamLimits

0x3576,	// (0x0001f204) main_dialer2_pane_ParamLimits

0x30a6,	// (0x0001ed34) main_cam6_pane

0x30a6,	// (0x0001ed34) main_vid6_pane

0x84ba,	// (0x00024148) listscroll_gen_pane_cp06_ParamLimits

0x84ba,	// (0x00024148) listscroll_gen_pane_cp06

0x8576,	// (0x00024204) main_clock2_pane_t5_ParamLimits

0x8576,	// (0x00024204) main_clock2_pane_t5

0x85bf,	// (0x0002424d) aid_call2_pane_cp10_ParamLimits

0x85d1,	// (0x0002425f) aid_call_pane_cp10_ParamLimits

0xcd69,	// (0x000289f7) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcd69,	// (0x000289f7) popup_clock_analogue_window_cp10_g2_ParamLimits

0x85e3,	// (0x00024271) popup_clock_analogue_window_cp10_g3_ParamLimits

0x85e3,	// (0x00024271) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcd69,	// (0x000289f7) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7da,	// (0x0002b468) popup_clock_analogue_window_cp10_g_ParamLimits

0x85f5,	// (0x00024283) popup_clock_analogue_window_cp10_t1_ParamLimits

0x8a01,	// (0x0002468f) cell_dialer2_keypad_pane_g2_ParamLimits

0x8a01,	// (0x0002468f) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c0,	// (0x0002b54e) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c0,	// (0x0002b54e) cell_dialer2_keypad_pane_g

0x8a1d,	// (0x000246ab) cell_dialer2_keypad_pane_t1

0x8e2b,	// (0x00024ab9) main_cset_text2_pane_ParamLimits

0x8e2b,	// (0x00024ab9) main_cset_text2_pane

0x0630,	// (0x0001c2be) area_vitu2_query_pane_g1_ParamLimits

0x9582,	// (0x00025210) area_vitu2_query_pane_g2_ParamLimits

0xfa75,	// (0x0002b703) area_vitu2_query_pane_g_ParamLimits

0x06b4,	// (0x0001c342) area_vitu2_query_pane_t7_ParamLimits

0x06b4,	// (0x0001c342) area_vitu2_query_pane_t7

0x95e3,	// (0x00025271) bg_button_pane_cp018_ParamLimits

0x95f1,	// (0x0002527f) bg_button_pane_cp021_ParamLimits

0x95fd,	// (0x0002528b) bg_button_pane_cp022_ParamLimits

0x95fd,	// (0x0002528b) bg_vkb2_func_pane_cp08_ParamLimits

0x95e3,	// (0x00025271) bg_vkb2_func_pane_cp06_ParamLimits

0x95f1,	// (0x0002527f) bg_vkb2_func_pane_cp07_ParamLimits

0x960e,	// (0x0002529c) input_focus_pane_cp09_ParamLimits

0x4633,	// (0x000202c1) cam6_autofocus_pane_ParamLimits

0x4633,	// (0x000202c1) cam6_autofocus_pane

0x4655,	// (0x000202e3) cam6_image_uncrop_pane_ParamLimits

0x4655,	// (0x000202e3) cam6_image_uncrop_pane

0x4682,	// (0x00020310) cam6_indi_pane_ParamLimits

0x4682,	// (0x00020310) cam6_indi_pane

0x469c,	// (0x0002032a) cam6_mode_pane_ParamLimits

0x469c,	// (0x0002032a) cam6_mode_pane

0x46b0,	// (0x0002033e) cam6_timer_pane_ParamLimits

0x46b0,	// (0x0002033e) cam6_timer_pane

0x46bc,	// (0x0002034a) cam6_zoom_pane_ParamLimits

0x46bc,	// (0x0002034a) cam6_zoom_pane

0x9a39,	// (0x000256c7) cam6_mode_pane_g1_ParamLimits

0x9a39,	// (0x000256c7) cam6_mode_pane_g1

0x9a45,	// (0x000256d3) cam6_mode_pane_g2_ParamLimits

0x9a45,	// (0x000256d3) cam6_mode_pane_g2

0x9a51,	// (0x000256df) cam6_mode_pane_g3_ParamLimits

0x9a51,	// (0x000256df) cam6_mode_pane_g3

0x9a5d,	// (0x000256eb) cam6_mode_pane_g4_ParamLimits

0x9a5d,	// (0x000256eb) cam6_mode_pane_g4

0x0003,

0xfb5d,	// (0x0002b7eb) cam6_mode_pane_g_ParamLimits

0xfb5d,	// (0x0002b7eb) cam6_mode_pane_g

0x0112,	// (0x0001bda0) bg_tb_trans_pane_cp08_ParamLimits

0x0112,	// (0x0001bda0) bg_tb_trans_pane_cp08

0x0978,	// (0x0001c606) cam6_battery_pane_ParamLimits

0x0978,	// (0x0001c606) cam6_battery_pane

0x098e,	// (0x0001c61c) cam6_indi_pane_g1_ParamLimits

0x098e,	// (0x0001c61c) cam6_indi_pane_g1

0x09a0,	// (0x0001c62e) cam6_indi_pane_g2_ParamLimits

0x09a0,	// (0x0001c62e) cam6_indi_pane_g2

0x09b2,	// (0x0001c640) cam6_indi_pane_g3_ParamLimits

0x09b2,	// (0x0001c640) cam6_indi_pane_g3

0x0002,

0xfb66,	// (0x0002b7f4) cam6_indi_pane_g_ParamLimits

0xfb66,	// (0x0002b7f4) cam6_indi_pane_g

0x09c4,	// (0x0001c652) cam6_indi_pane_t1_ParamLimits

0x09c4,	// (0x0001c652) cam6_indi_pane_t1

0x8b5c,	// (0x000247ea) cam6_autofocus_pane_g1

0x8b54,	// (0x000247e2) cam6_autofocus_pane_g2

0x8b6c,	// (0x000247fa) cam6_autofocus_pane_g3

0x8b64,	// (0x000247f2) cam6_autofocus_pane_g4

0x0003,

0xfb6d,	// (0x0002b7fb) cam6_autofocus_pane_g

0x09ea,	// (0x0001c678) cam6_timer_pane_g1

0x09f2,	// (0x0001c680) cam6_timer_pane_t1

0x0a00,	// (0x0001c68e) cam6_zoom_cont_pane

0x0a08,	// (0x0001c696) cam6_zoom_pane_g1

0x0a10,	// (0x0001c69e) cam6_zoom_pane_g2

0x9a69,	// (0x000256f7) cam6_zoom_pane_g3

0x0002,

0xfb76,	// (0x0002b804) cam6_zoom_pane_g

0xe6b5,	// (0x0002a343) cam6_battery_pane_g1

0xe6b5,	// (0x0002a343) cam6_battery_pane_g2

0x0001,

0xf6e7,	// (0x0002b375) cam6_battery_pane_g

0x0a18,	// (0x0001c6a6) cam6_zoom_cont_pane_g1

0x0a21,	// (0x0001c6af) cam6_zoom_cont_pane_g2

0x0a2a,	// (0x0001c6b8) cam6_zoom_cont_pane_g3

0x0002,

0xfb7d,	// (0x0002b80b) cam6_zoom_cont_pane_g

0x9a86,	// (0x00025714) cam6_mode_pane_cp_ParamLimits

0x9a86,	// (0x00025714) cam6_mode_pane_cp

0x9a9a,	// (0x00025728) cam6_zoom_pane_cp_ParamLimits

0x9a9a,	// (0x00025728) cam6_zoom_pane_cp

0x9ab2,	// (0x00025740) vid6_image_uncrop_cif_pane_ParamLimits

0x9ab2,	// (0x00025740) vid6_image_uncrop_cif_pane

0x9ade,	// (0x0002576c) vid6_image_uncrop_nhd_pane_ParamLimits

0x9ade,	// (0x0002576c) vid6_image_uncrop_nhd_pane

0x9afb,	// (0x00025789) vid6_image_uncrop_vga_pane_ParamLimits

0x9afb,	// (0x00025789) vid6_image_uncrop_vga_pane

0x9b1a,	// (0x000257a8) vid6_image_uncrop_wvga_pane_ParamLimits

0x9b1a,	// (0x000257a8) vid6_image_uncrop_wvga_pane

0x9b37,	// (0x000257c5) vid6_indi_pane_ParamLimits

0x9b37,	// (0x000257c5) vid6_indi_pane

0x0112,	// (0x0001bda0) bg_tb_trans_pane_cp09_ParamLimits

0x0112,	// (0x0001bda0) bg_tb_trans_pane_cp09

0x0a42,	// (0x0001c6d0) cam6_battery_pane_cp_ParamLimits

0x0a42,	// (0x0001c6d0) cam6_battery_pane_cp

0x0a4e,	// (0x0001c6dc) vid6_indi_pane_g1_ParamLimits

0x0a4e,	// (0x0001c6dc) vid6_indi_pane_g1

0x0a60,	// (0x0001c6ee) vid6_indi_pane_g2_ParamLimits

0x0a60,	// (0x0001c6ee) vid6_indi_pane_g2

0x0a72,	// (0x0001c700) vid6_indi_pane_g3_ParamLimits

0x0a72,	// (0x0001c700) vid6_indi_pane_g3

0x0a87,	// (0x0001c715) vid6_indi_pane_g4_ParamLimits

0x0a87,	// (0x0001c715) vid6_indi_pane_g4

0x0a9c,	// (0x0001c72a) vid6_indi_pane_g5_ParamLimits

0x0a9c,	// (0x0001c72a) vid6_indi_pane_g5

0x0004,

0xfb84,	// (0x0002b812) vid6_indi_pane_g_ParamLimits

0xfb84,	// (0x0002b812) vid6_indi_pane_g

0x0ab6,	// (0x0001c744) vid6_indi_pane_t1_ParamLimits

0x0ab6,	// (0x0001c744) vid6_indi_pane_t1

0x0acc,	// (0x0001c75a) vid6_indi_pane_t2_ParamLimits

0x0acc,	// (0x0001c75a) vid6_indi_pane_t2

0x0af4,	// (0x0001c782) vid6_indi_pane_t3_ParamLimits

0x0af4,	// (0x0001c782) vid6_indi_pane_t3

0x0b1c,	// (0x0001c7aa) vid6_indi_pane_t4_ParamLimits

0x0b1c,	// (0x0001c7aa) vid6_indi_pane_t4

0x0003,

0xfb8f,	// (0x0002b81d) vid6_indi_pane_t_ParamLimits

0xfb8f,	// (0x0002b81d) vid6_indi_pane_t

0x0b40,	// (0x0001c7ce) wait_bar_pane_cp08

0x9b5c,	// (0x000257ea) main_cset_text2_pane_t1_ParamLimits

0x9b5c,	// (0x000257ea) main_cset_text2_pane_t1

0x9a71,	// (0x000256ff) listscroll_gen_pane_cp06_t1_ParamLimits

0x9a71,	// (0x000256ff) listscroll_gen_pane_cp06_t1

0x30a6,	// (0x0001ed34) main_cam6_set_pane

0x3fc1,	// (0x0001fc4f) bg_tb_trans_pane_cp06_ParamLimits

0x3fd7,	// (0x0001fc65) cam4_indicators_pane_g1_ParamLimits

0x3fe8,	// (0x0001fc76) cam4_indicators_pane_g2_ParamLimits

0xf8fd,	// (0x0002b58b) cam4_indicators_pane_g_ParamLimits

0x4006,	// (0x0001fc94) cam4_indicators_pane_t1_ParamLimits

0x3568,	// (0x0001f1f6) bg_tb_trans_pane_cp07_ParamLimits

0x40b9,	// (0x0001fd47) vid4_indicators_pane_g1_ParamLimits

0x40cd,	// (0x0001fd5b) vid4_indicators_pane_g2_ParamLimits

0x40e1,	// (0x0001fd6f) vid4_indicators_pane_g3_ParamLimits

0x40f2,	// (0x0001fd80) vid4_indicators_pane_g4_ParamLimits

0xf90f,	// (0x0002b59d) vid4_indicators_pane_g_ParamLimits

0x4110,	// (0x0001fd9e) vid4_indicators_pane_t1_ParamLimits

0x45a1,	// (0x0002022f) vid4_progress_pane_g1_ParamLimits

0x45b3,	// (0x00020241) vid4_progress_pane_g2_ParamLimits

0xc9d2,	// (0x00028660) vid4_progress_pane_g3_ParamLimits

0x45c3,	// (0x00020251) vid4_progress_pane_g4_ParamLimits

0xfac0,	// (0x0002b74e) vid4_progress_pane_g_ParamLimits

0x45e1,	// (0x0002026f) vid4_progress_pane_t1_ParamLimits

0x45f6,	// (0x00020284) vid4_progress_pane_t2_ParamLimits

0x460c,	// (0x0002029a) vid4_progress_pane_t3_ParamLimits

0xfacb,	// (0x0002b759) vid4_progress_pane_t_ParamLimits

0x4621,	// (0x000202af) wait_bar_pane_cp07_ParamLimits

0x9b8f,	// (0x0002581d) main_cam6_set_pane_g2_ParamLimits

0x9b8f,	// (0x0002581d) main_cam6_set_pane_g2

0x9b9b,	// (0x00025829) main_cset6_listscroll_pane_ParamLimits

0x9b9b,	// (0x00025829) main_cset6_listscroll_pane

0x9bc6,	// (0x00025854) main_cset6_slider_pane_ParamLimits

0x9bc6,	// (0x00025854) main_cset6_slider_pane

0x9bd2,	// (0x00025860) main_cset6_text2_pane_ParamLimits

0x9bd2,	// (0x00025860) main_cset6_text2_pane

0x0b4f,	// (0x0001c7dd) main_cset6_text_pane

0x0b57,	// (0x0001c7e5) main_cset_list_pane_copy1_ParamLimits

0x0b57,	// (0x0001c7e5) main_cset_list_pane_copy1

0x0b67,	// (0x0001c7f5) scroll_pane_cp028_copy1

0x9be5,	// (0x00025873) cset_list_set_pane_copy1

0x9bf8,	// (0x00025886) aid_position_infowindow_above_copy1

0x9c00,	// (0x0002588e) aid_position_infowindow_below_copy1

0x9c08,	// (0x00025896) cset_list_set_pane_g1_copy1

0x033b,	// (0x0001bfc9) cset_list_set_pane_g3_copy1_ParamLimits

0x033b,	// (0x0001bfc9) cset_list_set_pane_g3_copy1

0x034a,	// (0x0001bfd8) cset_list_set_pane_t1_copy1_ParamLimits

0x034a,	// (0x0001bfd8) cset_list_set_pane_t1_copy1

0xc193,	// (0x00027e21) list_highlight_pane_cp021_copy1_ParamLimits

0xc193,	// (0x00027e21) list_highlight_pane_cp021_copy1

0x0b70,	// (0x0001c7fe) cset6_slider_pane_ParamLimits

0x0b70,	// (0x0001c7fe) cset6_slider_pane

0x0b9c,	// (0x0001c82a) main_cset6_slider_pane_g1_ParamLimits

0x0b9c,	// (0x0001c82a) main_cset6_slider_pane_g1

0x9c10,	// (0x0002589e) main_cset6_slider_pane_g2_ParamLimits

0x9c10,	// (0x0002589e) main_cset6_slider_pane_g2

0x0bc4,	// (0x0001c852) main_cset6_slider_pane_g3_ParamLimits

0x0bc4,	// (0x0001c852) main_cset6_slider_pane_g3

0x9c38,	// (0x000258c6) main_cset6_slider_pane_g4_ParamLimits

0x9c38,	// (0x000258c6) main_cset6_slider_pane_g4

0x9c44,	// (0x000258d2) main_cset6_slider_pane_g5_ParamLimits

0x9c44,	// (0x000258d2) main_cset6_slider_pane_g5

0x026b,	// (0x0001bef9) main_cset6_slider_pane_g7_ParamLimits

0x026b,	// (0x0001bef9) main_cset6_slider_pane_g7

0x0277,	// (0x0001bf05) main_cset6_slider_pane_g8_ParamLimits

0x0277,	// (0x0001bf05) main_cset6_slider_pane_g8

0x9c52,	// (0x000258e0) main_cset6_slider_pane_g9_ParamLimits

0x9c52,	// (0x000258e0) main_cset6_slider_pane_g9

0x9c5e,	// (0x000258ec) main_cset6_slider_pane_g10_ParamLimits

0x9c5e,	// (0x000258ec) main_cset6_slider_pane_g10

0x9c6a,	// (0x000258f8) main_cset6_slider_pane_g11_ParamLimits

0x9c6a,	// (0x000258f8) main_cset6_slider_pane_g11

0x9c76,	// (0x00025904) main_cset6_slider_pane_g12_ParamLimits

0x9c76,	// (0x00025904) main_cset6_slider_pane_g12

0x9c82,	// (0x00025910) main_cset6_slider_pane_g13_ParamLimits

0x9c82,	// (0x00025910) main_cset6_slider_pane_g13

0x9c8e,	// (0x0002591c) main_cset6_slider_pane_g14_ParamLimits

0x9c8e,	// (0x0002591c) main_cset6_slider_pane_g14

0x9c9a,	// (0x00025928) main_cset6_slider_pane_g15_ParamLimits

0x9c9a,	// (0x00025928) main_cset6_slider_pane_g15

0x9cb2,	// (0x00025940) main_cset6_slider_pane_g16_ParamLimits

0x9cb2,	// (0x00025940) main_cset6_slider_pane_g16

0x9cc0,	// (0x0002594e) main_cset6_slider_pane_g17_ParamLimits

0x9cc0,	// (0x0002594e) main_cset6_slider_pane_g17

0x0011,

0xfb98,	// (0x0002b826) main_cset6_slider_pane_g_ParamLimits

0xfb98,	// (0x0002b826) main_cset6_slider_pane_g

0x0bd0,	// (0x0001c85e) main_cset6_slider_pane_t1_ParamLimits

0x0bd0,	// (0x0001c85e) main_cset6_slider_pane_t1

0x9ce6,	// (0x00025974) main_cset6_slider_pane_t2_ParamLimits

0x9ce6,	// (0x00025974) main_cset6_slider_pane_t2

0x9d11,	// (0x0002599f) main_cset6_slider_pane_t3_ParamLimits

0x9d11,	// (0x0002599f) main_cset6_slider_pane_t3

0x9d3c,	// (0x000259ca) main_cset6_slider_pane_t4_ParamLimits

0x9d3c,	// (0x000259ca) main_cset6_slider_pane_t4

0x9d67,	// (0x000259f5) main_cset6_slider_pane_t5_ParamLimits

0x9d67,	// (0x000259f5) main_cset6_slider_pane_t5

0x0c11,	// (0x0001c89f) main_cset6_slider_pane_t7_ParamLimits

0x0c11,	// (0x0001c89f) main_cset6_slider_pane_t7

0x9d94,	// (0x00025a22) main_cset6_slider_pane_t8_ParamLimits

0x9d94,	// (0x00025a22) main_cset6_slider_pane_t8

0x9db8,	// (0x00025a46) main_cset6_slider_pane_t9_ParamLimits

0x9db8,	// (0x00025a46) main_cset6_slider_pane_t9

0x9ddc,	// (0x00025a6a) main_cset6_slider_pane_t10_ParamLimits

0x9ddc,	// (0x00025a6a) main_cset6_slider_pane_t10

0x9e00,	// (0x00025a8e) main_cset6_slider_pane_t11_ParamLimits

0x9e00,	// (0x00025a8e) main_cset6_slider_pane_t11

0x0c47,	// (0x0001c8d5) main_cset6_slider_pane_t14_ParamLimits

0x0c47,	// (0x0001c8d5) main_cset6_slider_pane_t14

0x0c80,	// (0x0001c90e) main_cset6_slider_pane_t15_ParamLimits

0x0c80,	// (0x0001c90e) main_cset6_slider_pane_t15

0x000b,

0xfbbd,	// (0x0002b84b) main_cset6_slider_pane_t_ParamLimits

0xfbbd,	// (0x0002b84b) main_cset6_slider_pane_t

0x037f,	// (0x0001c00d) cset_slider_pane_g1_copy1

0x0388,	// (0x0001c016) cset_slider_pane_g2_copy1

0x0391,	// (0x0001c01f) cset_slider_pane_g3_copy1

0xbba5,	// (0x00027833) bg_popup_sub_pane_cp011_copy1

0x0cb9,	// (0x0001c947) main_cset_text_pane_g1_copy1

0x0458,	// (0x0001c0e6) main_cset_text_pane_t1_copy1

0x0466,	// (0x0001c0f4) main_cset_text_pane_t2_copy1

0x0474,	// (0x0001c102) main_cset_text_pane_t3_copy1

0x0482,	// (0x0001c110) main_cset_text_pane_t4_copy1

0x0490,	// (0x0001c11e) main_cset_text_pane_t5_copy1

0x0cc1,	// (0x0001c94f) main_cset_text_pane_t6_copy1

0x04ac,	// (0x0001c13a) main_cset_text_pane_t7_copy1

0x9ef5,	// (0x00025b83) main_cset_text2_pane_t1_copy1

0x3568,	// (0x0001f1f6) main_ncimui_pane

0x35c7,	// (0x0001f255) popup_query_ncimui_window_ParamLimits

0x35c7,	// (0x0001f255) popup_query_ncimui_window

0xe97d,	// (0x0002a60b) field_cale_ev2_pane_g4_ParamLimits

0xe97d,	// (0x0002a60b) field_cale_ev2_pane_g4

0x89a1,	// (0x0002462f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x89a1,	// (0x0002462f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89b,	// (0x0002b529) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89b,	// (0x0002b529) cell_video_dialer_keypad_pane_g

0x89b9,	// (0x00024647) cell_video_dialer_keypad_pane_t1

0xbba5,	// (0x00027833) bg_popup_window_pane_cp012

0xcbb8,	// (0x00028846) heading_pane_cp06

0x0ced,	// (0x0001c97b) ncim_query_content_pane

0xbba5,	// (0x00027833) bg_popup_heading_pane_cp01

0x0cf5,	// (0x0001c983) ncim_heading_pane_t1

0x0d03,	// (0x0001c991) ncim_indicator_popup_pane

0x0d15,	// (0x0001c9a3) ncim_query_button_pane

0x0d29,	// (0x0001c9b7) ncim_query_content_pane_t1

0x0d3b,	// (0x0001c9c9) ncim_query_content_pane_t2

0x0005,

0xfc01,	// (0x0002b88f) ncim_query_content_pane_t

0x0d75,	// (0x0001ca03) ncim_query_list_pane

0x0d87,	// (0x0001ca15) ncim_query_popup_pane

0x0d03,	// (0x0001c991) ncim_indicator_popup_pane_ParamLimits

0xa048,	// (0x00025cd6) ncim_query_content_pane_g1_ParamLimits

0xa048,	// (0x00025cd6) ncim_query_content_pane_g1

0x0d29,	// (0x0001c9b7) ncim_query_content_pane_t1_ParamLimits

0x0d3b,	// (0x0001c9c9) ncim_query_content_pane_t2_ParamLimits

0xa054,	// (0x00025ce2) ncim_query_content_pane_t3_ParamLimits

0xa054,	// (0x00025ce2) ncim_query_content_pane_t3

0xa071,	// (0x00025cff) ncim_query_content_pane_t4_ParamLimits

0xa071,	// (0x00025cff) ncim_query_content_pane_t4

0xa08e,	// (0x00025d1c) ncim_query_content_pane_t5_ParamLimits

0xa08e,	// (0x00025d1c) ncim_query_content_pane_t5

0x0d4d,	// (0x0001c9db) ncim_query_content_pane_t6_ParamLimits

0x0d4d,	// (0x0001c9db) ncim_query_content_pane_t6

0xfc01,	// (0x0002b88f) ncim_query_content_pane_t_ParamLimits

0x0d75,	// (0x0001ca03) ncim_query_list_pane_ParamLimits

0x0d87,	// (0x0001ca15) ncim_query_popup_pane_ParamLimits

0x0d9b,	// (0x0001ca29) wait_bar_pane_cp04

0xbba5,	// (0x00027833) input_focus_pane_cp011

0x0da3,	// (0x0001ca31) ncim_query_popup_pane_t1

0x0db1,	// (0x0001ca3f) ncim_list_query_list_pane_ParamLimits

0x0db1,	// (0x0001ca3f) ncim_list_query_list_pane

0xbba5,	// (0x00027833) bg_button_pane_cp027

0x0dbe,	// (0x0001ca4c) ncim_query_button_pane_g1

0xbba5,	// (0x00027833) list_highlight_pane_cp012

0x0dc8,	// (0x0001ca56) ncim_list_query_list_pane_g1

0x0dd0,	// (0x0001ca5e) ncim_list_query_list_pane_t1

0x3ff7,	// (0x0001fc85) cam4_indicators_pane_g3_ParamLimits

0x3ff7,	// (0x0001fc85) cam4_indicators_pane_g3

0x40fe,	// (0x0001fd8c) vid4_indicators_pane_g5_ParamLimits

0x40fe,	// (0x0001fd8c) vid4_indicators_pane_g5

0x45d2,	// (0x00020260) vid4_progress_pane_g5_ParamLimits

0x45d2,	// (0x00020260) vid4_progress_pane_g5

0x9f34,	// (0x00025bc2) main_ncimui_pane_g1

0x9f9c,	// (0x00025c2a) ncimui_group_query_pane_ParamLimits

0x9f9c,	// (0x00025c2a) ncimui_group_query_pane

0x9fe4,	// (0x00025c72) ncimui_list_pane_ParamLimits

0x9fe4,	// (0x00025c72) ncimui_list_pane

0xa00b,	// (0x00025c99) ncimui_text_pane_ParamLimits

0xa00b,	// (0x00025c99) ncimui_text_pane

0xa0ab,	// (0x00025d39) ncimui_text_pane_t1_ParamLimits

0xa0ab,	// (0x00025d39) ncimui_text_pane_t1

0x0dde,	// (0x0001ca6c) ncimui_list_single_graphic_pane_ParamLimits

0x0dde,	// (0x0001ca6c) ncimui_list_single_graphic_pane

0xa0ca,	// (0x00025d58) ncimui_query_pane_ParamLimits

0xa0ca,	// (0x00025d58) ncimui_query_pane

0xbba5,	// (0x00027833) list_highlight_pane_cp013

0x0dee,	// (0x0001ca7c) ncim_list_query_list_pane_t1_copy1

0x0dc8,	// (0x0001ca56) ncim_list_single_graphic_pane_g1

0x0dfc,	// (0x0001ca8a) ncim_query_button_pane_cp01

0x0e08,	// (0x0001ca96) ncim_query_entry_pane_ParamLimits

0x0e08,	// (0x0001ca96) ncim_query_entry_pane

0x0e1b,	// (0x0001caa9) ncimui_query_pane_g1

0x0e27,	// (0x0001cab5) ncimui_query_pane_t1_ParamLimits

0x0e27,	// (0x0001cab5) ncimui_query_pane_t1

0xc193,	// (0x00027e21) input_focus_pane_cp012

0x0e40,	// (0x0001cace) ncim_query_entry_pane_t1

0xc2f0,	// (0x00027f7e) main_im_pane_ParamLimits

0x3568,	// (0x0001f1f6) main_mobtv_pane_ParamLimits

0x3568,	// (0x0001f1f6) main_mobtv_pane

0x9cce,	// (0x0002595c) main_cset6_slider_pane_g18_ParamLimits

0x9cce,	// (0x0002595c) main_cset6_slider_pane_g18

0x9cda,	// (0x00025968) main_cset6_slider_pane_g19_ParamLimits

0x9cda,	// (0x00025968) main_cset6_slider_pane_g19

0x008e,	// (0x0001bd1c) bg_main_mobtv_pane_ParamLimits

0x008e,	// (0x0001bd1c) bg_main_mobtv_pane

0xa0dd,	// (0x00025d6b) main_mobtv_info_pane

0xa0e8,	// (0x00025d76) main_mobtv_loading_pane_ParamLimits

0xa0e8,	// (0x00025d76) main_mobtv_loading_pane

0x0e52,	// (0x0001cae0) main_mobtv_pg_channel_list_pane

0x0e5c,	// (0x0001caea) main_mobtv_pg_hdr_pane

0xa0f5,	// (0x00025d83) main_mobtv_programe_curr_pane_ParamLimits

0xa0f5,	// (0x00025d83) main_mobtv_programe_curr_pane

0xa102,	// (0x00025d90) main_mobtv_programe_next_pane_ParamLimits

0xa102,	// (0x00025d90) main_mobtv_programe_next_pane

0x0e65,	// (0x0001caf3) popup_mobtv_noti_window

0xe6b5,	// (0x0002a343) main_tv_pg_hdr_pane_g1

0x0e6d,	// (0x0001cafb) main_tv_pg_hdr_pane_g2

0x0e75,	// (0x0001cb03) main_tv_pg_hdr_pane_g3

0x0e7d,	// (0x0001cb0b) main_tv_pg_hdr_pane_g4

0x0e85,	// (0x0001cb13) main_tv_pg_hdr_pane_g5

0x0e8f,	// (0x0001cb1d) main_tv_pg_hdr_pane_g6

0x0e99,	// (0x0001cb27) main_tv_pg_hdr_pane_g7

0x0ea3,	// (0x0001cb31) main_tv_pg_hdr_pane_g8

0x0ead,	// (0x0001cb3b) main_tv_pg_hdr_pane_g9

0x0eb7,	// (0x0001cb45) main_tv_pg_hdr_pane_g10

0x0ec1,	// (0x0001cb4f) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0e,	// (0x0002b89c) main_tv_pg_hdr_pane_g

0x0ecb,	// (0x0001cb59) main_tv_pg_hdr_pane_t1

0x0ed9,	// (0x0001cb67) main_tv_pg_hdr_pane_t2

0x0ee7,	// (0x0001cb75) main_tv_pg_hdr_pane_t3

0x0ef7,	// (0x0001cb85) main_tv_pg_hdr_pane_t4

0x0f07,	// (0x0001cb95) main_tv_pg_hdr_pane_t5

0x0004,

0xfc25,	// (0x0002b8b3) main_tv_pg_hdr_pane_t

0x0f17,	// (0x0001cba5) single_mobtv_pg_channel_pane_ParamLimits

0x0f17,	// (0x0001cba5) single_mobtv_pg_channel_pane

0x0f29,	// (0x0001cbb7) single_mobtv_pg_channel_table_pane

0x0f32,	// (0x0001cbc0) single_mobtv_pg_channel_thumb_pane

0x0f3b,	// (0x0001cbc9) single_tv_pg_channel_pane_g1

0x0f44,	// (0x0001cbd2) single_tv_pg_channel_pane_g2

0x0001,

0xfc30,	// (0x0002b8be) single_tv_pg_channel_pane_g

0xe918,	// (0x0002a5a6) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe918,	// (0x0002a5a6) bg_single_mobtv_pg_channel_thumb_pane

0x0f4d,	// (0x0001cbdb) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x0f4d,	// (0x0001cbdb) single_mobtv_pg_channel_thumb_pane_g1

0x0f5b,	// (0x0001cbe9) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x0f5b,	// (0x0001cbe9) single_mobtv_pg_channel_thumb_pane_g2

0x0f67,	// (0x0001cbf5) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x0f67,	// (0x0001cbf5) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc35,	// (0x0002b8c3) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc35,	// (0x0002b8c3) single_mobtv_pg_channel_thumb_pane_g

0x0f73,	// (0x0001cc01) single_mobtv_pg_channel_thumb_pane_t1

0x0f81,	// (0x0001cc0f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3c,	// (0x0002b8ca) single_mobtv_pg_channel_thumb_pane_t

0xe6b5,	// (0x0002a343) bg_single_mobtv_pg_channel_table_pane_g1

0xe6b5,	// (0x0002a343) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e7,	// (0x0002b375) bg_single_mobtv_pg_channel_table_pane_g

0x0f8f,	// (0x0001cc1d) single_mobtv_pg_channel_table_pane_t1

0x0f9d,	// (0x0001cc2b) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc41,	// (0x0002b8cf) single_mobtv_pg_channel_table_pane_t

0xa117,	// (0x00025da5) main_mobtv_info_pane_g1_ParamLimits

0xa117,	// (0x00025da5) main_mobtv_info_pane_g1

0xa133,	// (0x00025dc1) main_mobtv_info_pane_t1_ParamLimits

0xa133,	// (0x00025dc1) main_mobtv_info_pane_t1

0xa1ab,	// (0x00025e39) main_mobtv_info_pane_t2_ParamLimits

0xa1ab,	// (0x00025e39) main_mobtv_info_pane_t2

0x0002,

0xfc4b,	// (0x0002b8d9) main_mobtv_info_pane_t_ParamLimits

0xfc4b,	// (0x0002b8d9) main_mobtv_info_pane_t

0xa23a,	// (0x00025ec8) wait_bar_pane_cp05

0xa24c,	// (0x00025eda) main_mobtv_loading_pane_g1_ParamLimits

0xa24c,	// (0x00025eda) main_mobtv_loading_pane_g1

0xa25a,	// (0x00025ee8) main_mobtv_loading_pane_g2_ParamLimits

0xa25a,	// (0x00025ee8) main_mobtv_loading_pane_g2

0xa266,	// (0x00025ef4) main_mobtv_loading_pane_g3_ParamLimits

0xa266,	// (0x00025ef4) main_mobtv_loading_pane_g3

0x0002,

0xfc52,	// (0x0002b8e0) main_mobtv_loading_pane_g_ParamLimits

0xfc52,	// (0x0002b8e0) main_mobtv_loading_pane_g

0x0fab,	// (0x0001cc39) main_mobtv_loading_pane_t1_ParamLimits

0x0fab,	// (0x0001cc39) main_mobtv_loading_pane_t1

0x0fc3,	// (0x0001cc51) main_mobtv_loading_pane_t2_ParamLimits

0x0fc3,	// (0x0001cc51) main_mobtv_loading_pane_t2

0x0001,

0xfc59,	// (0x0002b8e7) main_mobtv_loading_pane_t_ParamLimits

0xfc59,	// (0x0002b8e7) main_mobtv_loading_pane_t

0xa274,	// (0x00025f02) wait_bar_pane_cp06_ParamLimits

0xa274,	// (0x00025f02) wait_bar_pane_cp06

0x0fe7,	// (0x0001cc75) main_mobtv_programe_curr_pane_t1

0x0ff5,	// (0x0001cc83) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5e,	// (0x0002b8ec) main_mobtv_programe_curr_pane_t

0x1003,	// (0x0001cc91) main_mobtv_programe_next_pane_t1

0x1011,	// (0x0001cc9f) main_mobtv_programe_next_pane_t2

0x101f,	// (0x0001ccad) main_mobtv_programe_next_pane_t3

0x0002,

0xfc63,	// (0x0002b8f1) main_mobtv_programe_next_pane_t

0xbba5,	// (0x00027833) bg_popup_mobtv_noti_window_pane

0x102d,	// (0x0001ccbb) popup_mobtv_noti_window_g1

0x1035,	// (0x0001ccc3) popup_mobtv_noti_window_t1

0x1043,	// (0x0001ccd1) popup_mobtv_noti_window_t2

0x0001,

0xfc6a,	// (0x0002b8f8) popup_mobtv_noti_window_t

0xe6b5,	// (0x0002a343) bg_popup_mobtv_noti_window_pane_g1

0x30a6,	// (0x0001ed34) sc_clock_pane

0x30a6,	// (0x0001ed34) main_fs_bigclock_pane

0x98ec,	// (0x0002557a) blid2_tripm_pane_t4_ParamLimits

0x98ec,	// (0x0002557a) blid2_tripm_pane_t4

0xa280,	// (0x00025f0e) sc_clock_pane_g1_ParamLimits

0xa280,	// (0x00025f0e) sc_clock_pane_g1

0xa28e,	// (0x00025f1c) sc_clock_pane_t1_ParamLimits

0xa28e,	// (0x00025f1c) sc_clock_pane_t1

0xa2a1,	// (0x00025f2f) sc_clock_pane_t2_ParamLimits

0xa2a1,	// (0x00025f2f) sc_clock_pane_t2

0xa2b3,	// (0x00025f41) sc_clock_pane_t3_ParamLimits

0xa2b3,	// (0x00025f41) sc_clock_pane_t3

0x0004,

0xfc6f,	// (0x0002b8fd) sc_clock_pane_t_ParamLimits

0xfc6f,	// (0x0002b8fd) sc_clock_pane_t

0xb193,	// (0x00026e21) main_fs_bigclock_indicator_pane_ParamLimits

0xb193,	// (0x00026e21) main_fs_bigclock_indicator_pane

0xa34e,	// (0x00025fdc) main_fs_bigclock_pane_g1_ParamLimits

0xa34e,	// (0x00025fdc) main_fs_bigclock_pane_g1

0xb19f,	// (0x00026e2d) main_fs_bigclock_pane_t1_ParamLimits

0xb19f,	// (0x00026e2d) main_fs_bigclock_pane_t1

0xb1b1,	// (0x00026e3f) main_fs_bigclock_pane_t2_ParamLimits

0xb1b1,	// (0x00026e3f) main_fs_bigclock_pane_t2

0xb1c5,	// (0x00026e53) main_fs_bigclock_pane_t3_ParamLimits

0xb1c5,	// (0x00026e53) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0002bafc) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0002bafc) main_fs_bigclock_pane_t

0x1b0e,	// (0x0001d79c) main_fs_bigclock_indicator_pane_g1

0x0d1d,	// (0x0001c9ab) ncim_query_content_pane_g2_ParamLimits

0x0d1d,	// (0x0001c9ab) ncim_query_content_pane_g2

0x0001,

0xfbfc,	// (0x0002b88a) ncim_query_content_pane_g_ParamLimits

0xfbfc,	// (0x0002b88a) ncim_query_content_pane_g

0xa2c7,	// (0x00025f55) sc_clock_pane_t4_ParamLimits

0xa2c7,	// (0x00025f55) sc_clock_pane_t4

0x3568,	// (0x0001f1f6) main_radioblah_pane

0xf075,	// (0x0002ad03) cell_call4_button_pane_t1_copy1_ParamLimits

0xf075,	// (0x0002ad03) cell_call4_button_pane_t1_copy1

0x9f4e,	// (0x00025bdc) main_ncimui_pane_t1_ParamLimits

0x9f4e,	// (0x00025bdc) main_ncimui_pane_t1

0x9f68,	// (0x00025bf6) main_ncimui_pane_t2_ParamLimits

0x9f68,	// (0x00025bf6) main_ncimui_pane_t2

0x0002,

0xfbf5,	// (0x0002b883) main_ncimui_pane_t_ParamLimits

0xfbf5,	// (0x0002b883) main_ncimui_pane_t

0x117d,	// (0x0001ce0b) main_radioblah_anim_pane_ParamLimits

0x117d,	// (0x0001ce0b) main_radioblah_anim_pane

0x118e,	// (0x0001ce1c) main_radioblah_info_pane_ParamLimits

0x118e,	// (0x0001ce1c) main_radioblah_info_pane

0x11a2,	// (0x0001ce30) main_radioblah_pane_t1_ParamLimits

0x11a2,	// (0x0001ce30) main_radioblah_pane_t1

0x11be,	// (0x0001ce4c) main_radioblah_pane_t2_ParamLimits

0x11be,	// (0x0001ce4c) main_radioblah_pane_t2

0x0003,

0xfc90,	// (0x0002b91e) main_radioblah_pane_t_ParamLimits

0xfc90,	// (0x0002b91e) main_radioblah_pane_t

0xa3a0,	// (0x0002602e) main_radioblah_rocker_ctrl_pane_ParamLimits

0xa3a0,	// (0x0002602e) main_radioblah_rocker_ctrl_pane

0x1206,	// (0x0001ce94) main_radioblah_info_pane_t1_ParamLimits

0x1206,	// (0x0001ce94) main_radioblah_info_pane_t1

0xa3e5,	// (0x00026073) main_radioblah_info_pane_t2_ParamLimits

0xa3e5,	// (0x00026073) main_radioblah_info_pane_t2

0x0003,

0xfc99,	// (0x0002b927) main_radioblah_info_pane_t_ParamLimits

0xfc99,	// (0x0002b927) main_radioblah_info_pane_t

0xe6b5,	// (0x0002a343) main_radioblah_rocker_ctrl_pane_g1

0xa495,	// (0x00026123) main_radioblah_rocker_ctrl_pane_g2

0xa49d,	// (0x0002612b) main_radioblah_rocker_ctrl_pane_g3

0xa4a5,	// (0x00026133) main_radioblah_rocker_ctrl_pane_g4

0xa4ad,	// (0x0002613b) main_radioblah_rocker_ctrl_pane_g5

0xa4b5,	// (0x00026143) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca2,	// (0x0002b930) main_radioblah_rocker_ctrl_pane_g

0x9ef5,	// (0x00025b83) main_cset_text2_pane_t1_copy1_ParamLimits

0x3f3b,	// (0x0001fbc9) cam4_image_uncrop_qvga_pane

0x406c,	// (0x0001fcfa) vid4_image_uncrop_qcif_pane

0x4674,	// (0x00020302) cam6_image_uncrop_qvga_pane_ParamLimits

0x4674,	// (0x00020302) cam6_image_uncrop_qvga_pane

0x0a32,	// (0x0001c6c0) vid6_image_uncrop_qcif_pane_ParamLimits

0x0a32,	// (0x0001c6c0) vid6_image_uncrop_qcif_pane

0xbba5,	// (0x00027833) bg_popup_preview_window_pane_cp03

0x0ccf,	// (0x0001c95d) list_cset_text2_pane

0x0cd7,	// (0x0001c965) main_cset6_text2_pane_g1

0x0cdf,	// (0x0001c96d) main_cset6_text2_pane_t1

0xa4bd,	// (0x0002614b) list_cset_text2_pane_t1_ParamLimits

0xa4bd,	// (0x0002614b) list_cset_text2_pane_t1

0x3568,	// (0x0001f1f6) main_radioblah_pane_ParamLimits

0xa226,	// (0x00025eb4) main_mobtv_info_pane_t3_ParamLimits

0xa226,	// (0x00025eb4) main_mobtv_info_pane_t3

0xa38e,	// (0x0002601c) main_radioblah_pane_g1

0xa3b9,	// (0x00026047) main_radioblah_info_pane_g1

0xa43a,	// (0x000260c8) main_radioblah_info_pane_t3_ParamLimits

0xa43a,	// (0x000260c8) main_radioblah_info_pane_t3

0x63b0,	// (0x0002203e) highlight_cell_cale_month_pane_ParamLimits

0x63b0,	// (0x0002203e) highlight_cell_cale_month_pane

0x30a6,	// (0x0001ed34) main_phob_fisheye_pane

0xea20,	// (0x0002a6ae) scroll_pane_cp0031_ParamLimits

0xea20,	// (0x0002a6ae) scroll_pane_cp0031

0x0b40,	// (0x0001c7ce) wait_bar_pane_cp08_ParamLimits

0x9be5,	// (0x00025873) cset_list_set_pane_copy1_ParamLimits

0x1240,	// (0x0001cece) highlight_cell_cale_month_pane_g1

0xa4da,	// (0x00026168) highlight_cell_cale_month_pane_t1

0x0720,	// (0x0001c3ae) list_gen_pane_cp01

0x0256,	// (0x0001bee4) scroll_pane_01

0xa4e8,	// (0x00026176) list_single_double_fisheye_pane

0xa4f1,	// (0x0002617f) list_double_fisheye_pane_g1_ParamLimits

0xa4f1,	// (0x0002617f) list_double_fisheye_pane_g1

0xa4fd,	// (0x0002618b) list_double_fisheye_pane_g2_ParamLimits

0xa4fd,	// (0x0002618b) list_double_fisheye_pane_g2

0xa511,	// (0x0002619f) list_double_fisheye_pane_g3_ParamLimits

0xa511,	// (0x0002619f) list_double_fisheye_pane_g3

0x0004,

0xfcaf,	// (0x0002b93d) list_double_fisheye_pane_g_ParamLimits

0xfcaf,	// (0x0002b93d) list_double_fisheye_pane_g

0xa53a,	// (0x000261c8) list_double_fisheye_pane_t1_ParamLimits

0xa53a,	// (0x000261c8) list_double_fisheye_pane_t1

0xa555,	// (0x000261e3) list_double_fisheye_pane_t2_ParamLimits

0xa555,	// (0x000261e3) list_double_fisheye_pane_t2

0x0001,

0xfcba,	// (0x0002b948) list_double_fisheye_pane_t_ParamLimits

0xfcba,	// (0x0002b948) list_double_fisheye_pane_t

0x30a6,	// (0x0001ed34) main_call5_pane

0xa2ed,	// (0x00025f7b) sc_swipe_pane_ParamLimits

0xa2ed,	// (0x00025f7b) sc_swipe_pane

0xa583,	// (0x00026211) call5_image_pane_ParamLimits

0xa583,	// (0x00026211) call5_image_pane

0xa593,	// (0x00026221) call5_swipe_1_pane_ParamLimits

0xa593,	// (0x00026221) call5_swipe_1_pane

0xa59f,	// (0x0002622d) call5_swipe_2_pane_ParamLimits

0xa59f,	// (0x0002622d) call5_swipe_2_pane

0xa5b9,	// (0x00026247) popup_call5_audio_first_window_ParamLimits

0xa5b9,	// (0x00026247) popup_call5_audio_first_window

0xe918,	// (0x0002a5a6) call5_swipe_1_pane_g1_ParamLimits

0xe918,	// (0x0002a5a6) call5_swipe_1_pane_g1

0x1251,	// (0x0001cedf) call5_swipe_1_pane_g2_ParamLimits

0x1251,	// (0x0001cedf) call5_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x0002b94d) call5_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x0002b94d) call5_swipe_1_pane_g

0x125d,	// (0x0001ceeb) call5_swipe_1_pane_t1_ParamLimits

0x125d,	// (0x0001ceeb) call5_swipe_1_pane_t1

0xe918,	// (0x0002a5a6) call5_swipe_2_pane_g1_ParamLimits

0xe918,	// (0x0002a5a6) call5_swipe_2_pane_g1

0x1272,	// (0x0001cf00) call5_swipe_2_pane_g2_ParamLimits

0x1272,	// (0x0001cf00) call5_swipe_2_pane_g2

0x0001,

0xfcc4,	// (0x0002b952) call5_swipe_2_pane_g_ParamLimits

0xfcc4,	// (0x0002b952) call5_swipe_2_pane_g

0x127e,	// (0x0001cf0c) call5_swipe_2_pane_t1_ParamLimits

0x127e,	// (0x0001cf0c) call5_swipe_2_pane_t1

0x1293,	// (0x0001cf21) sc_swipe_pane_g1_ParamLimits

0x1293,	// (0x0001cf21) sc_swipe_pane_g1

0x12a0,	// (0x0001cf2e) sc_swipe_pane_g2_ParamLimits

0x12a0,	// (0x0001cf2e) sc_swipe_pane_g2

0x0001,

0xfcc9,	// (0x0002b957) sc_swipe_pane_g_ParamLimits

0xfcc9,	// (0x0002b957) sc_swipe_pane_g

0x12ac,	// (0x0001cf3a) sc_swipe_pane_t1_ParamLimits

0x12ac,	// (0x0001cf3a) sc_swipe_pane_t1

0x30a6,	// (0x0001ed34) main_cmail_launcher_pane

0xa5c7,	// (0x00026255) aid_size_cell_cmail_l_ParamLimits

0xa5c7,	// (0x00026255) aid_size_cell_cmail_l

0xa5d7,	// (0x00026265) grid_cmail_l_pane_ParamLimits

0xa5d7,	// (0x00026265) grid_cmail_l_pane

0xa5e7,	// (0x00026275) cell_cmail_l_pane_ParamLimits

0xa5e7,	// (0x00026275) cell_cmail_l_pane

0xa5fb,	// (0x00026289) cell_cmail_l_pane_g1_ParamLimits

0xa5fb,	// (0x00026289) cell_cmail_l_pane_g1

0xa607,	// (0x00026295) cell_cmail_l_pane_t1_ParamLimits

0xa607,	// (0x00026295) cell_cmail_l_pane_t1

0x12c1,	// (0x0001cf4f) cell_cmail_l_pane_t2_ParamLimits

0x12c1,	// (0x0001cf4f) cell_cmail_l_pane_t2

0x0001,

0xfcce,	// (0x0002b95c) cell_cmail_l_pane_t_ParamLimits

0xfcce,	// (0x0002b95c) cell_cmail_l_pane_t

0xc193,	// (0x00027e21) grid_highlight_pane_cp018_ParamLimits

0xc193,	// (0x00027e21) grid_highlight_pane_cp018

0x2f08,	// (0x0001eb96) main2_pane_ParamLimits

0x2f08,	// (0x0001eb96) main2_pane

0xc389,	// (0x00028017) popup_sp_fs_action_menu_bg_pane_g1

0xc391,	// (0x0002801f) popup_sp_fs_action_menu_bg_pane_g2

0xc399,	// (0x00028027) popup_sp_fs_action_menu_bg_pane_g3

0xc3a1,	// (0x0002802f) popup_sp_fs_action_menu_bg_pane_g4

0xc3a9,	// (0x00028037) popup_sp_fs_action_menu_bg_pane_g5

0xc3b1,	// (0x0002803f) popup_sp_fs_action_menu_bg_pane_g6

0xc3b9,	// (0x00028047) popup_sp_fs_action_menu_bg_pane_g7

0xc3c1,	// (0x0002804f) popup_sp_fs_action_menu_bg_pane_g8

0xc3c9,	// (0x00028057) popup_sp_fs_action_menu_bg_pane_g9

0xc3d1,	// (0x0002805f) popup_sp_fs_action_menu_bg_pane_g10

0xc3d1,	// (0x0002805f) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x0002ae21) popup_sp_fs_action_menu_bg_pane_g

0x519f,	// (0x00020e2d) list_medium_line_x2_t3_g3_g1_ParamLimits

0x519f,	// (0x00020e2d) list_medium_line_x2_t3_g3_g1

0x51ab,	// (0x00020e39) list_medium_line_x2_t3_g3_g2_ParamLimits

0x51ab,	// (0x00020e39) list_medium_line_x2_t3_g3_g2

0x51b7,	// (0x00020e45) list_medium_line_x2_t3_g3_g3_ParamLimits

0x51b7,	// (0x00020e45) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x0002aed1) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x0002aed1) list_medium_line_x2_t3_g3_g

0x51c3,	// (0x00020e51) list_medium_line_x2_t3_g3_t1_ParamLimits

0x51c3,	// (0x00020e51) list_medium_line_x2_t3_g3_t1

0x51d8,	// (0x00020e66) list_medium_line_x2_t3_g3_t2_ParamLimits

0x51d8,	// (0x00020e66) list_medium_line_x2_t3_g3_t2

0x51ea,	// (0x00020e78) list_medium_line_x2_t3_g3_t3_ParamLimits

0x51ea,	// (0x00020e78) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x0002aed8) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x0002aed8) list_medium_line_x2_t3_g3_t

0x519f,	// (0x00020e2d) list_medium_line_x2_t3_g2_g1_ParamLimits

0x519f,	// (0x00020e2d) list_medium_line_x2_t3_g2_g1

0x51b7,	// (0x00020e45) list_medium_line_x2_t3_g2_g2_ParamLimits

0x51b7,	// (0x00020e45) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x0002aedf) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x0002aedf) list_medium_line_x2_t3_g2_g

0x51ff,	// (0x00020e8d) list_medium_line_x2_t3_g2_t1_ParamLimits

0x51ff,	// (0x00020e8d) list_medium_line_x2_t3_g2_t1

0x5215,	// (0x00020ea3) list_medium_line_x2_t3_g2_t2_ParamLimits

0x5215,	// (0x00020ea3) list_medium_line_x2_t3_g2_t2

0x51ea,	// (0x00020e78) list_medium_line_x2_t3_g2_t3_ParamLimits

0x51ea,	// (0x00020e78) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x0002aee4) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x0002aee4) list_medium_line_x2_t3_g2_t

0x519f,	// (0x00020e2d) list_medium_line_x2_t4_g4_g1_ParamLimits

0x519f,	// (0x00020e2d) list_medium_line_x2_t4_g4_g1

0x5227,	// (0x00020eb5) list_medium_line_x2_t4_g4_g2_ParamLimits

0x5227,	// (0x00020eb5) list_medium_line_x2_t4_g4_g2

0x51ab,	// (0x00020e39) list_medium_line_x2_t4_g4_g3_ParamLimits

0x51ab,	// (0x00020e39) list_medium_line_x2_t4_g4_g3

0x5233,	// (0x00020ec1) list_medium_line_x2_t4_g4_g4_ParamLimits

0x5233,	// (0x00020ec1) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x0002aeeb) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x0002aeeb) list_medium_line_x2_t4_g4_g

0x523f,	// (0x00020ecd) list_medium_line_x2_t4_g4_t1_ParamLimits

0x523f,	// (0x00020ecd) list_medium_line_x2_t4_g4_t1

0x5259,	// (0x00020ee7) list_medium_line_x2_t4_g4_t2_ParamLimits

0x5259,	// (0x00020ee7) list_medium_line_x2_t4_g4_t2

0x526f,	// (0x00020efd) list_medium_line_x2_t4_g4_t3_ParamLimits

0x526f,	// (0x00020efd) list_medium_line_x2_t4_g4_t3

0x5284,	// (0x00020f12) list_medium_line_x2_t4_g4_t4_ParamLimits

0x5284,	// (0x00020f12) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x0002aef4) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x0002aef4) list_medium_line_x2_t4_g4_t

0x519f,	// (0x00020e2d) list_medium_line_x2_t2_g4_g1_ParamLimits

0x519f,	// (0x00020e2d) list_medium_line_x2_t2_g4_g1

0x5227,	// (0x00020eb5) list_medium_line_x2_t2_g4_g2_ParamLimits

0x5227,	// (0x00020eb5) list_medium_line_x2_t2_g4_g2

0x51ab,	// (0x00020e39) list_medium_line_x2_t2_g4_g3_ParamLimits

0x51ab,	// (0x00020e39) list_medium_line_x2_t2_g4_g3

0x51b7,	// (0x00020e45) list_medium_line_x2_t2_g4_g4_ParamLimits

0x51b7,	// (0x00020e45) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x0002af5b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x0002af5b) list_medium_line_x2_t2_g4_g

0x63d6,	// (0x00022064) list_medium_line_x2_t2_g4_t1_ParamLimits

0x63d6,	// (0x00022064) list_medium_line_x2_t2_g4_t1

0x51ea,	// (0x00020e78) list_medium_line_x2_t2_g4_t2_ParamLimits

0x51ea,	// (0x00020e78) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x0002af64) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x0002af64) list_medium_line_x2_t2_g4_t

0x519f,	// (0x00020e2d) list_medium_line_x2_t2_g3_g1_ParamLimits

0x519f,	// (0x00020e2d) list_medium_line_x2_t2_g3_g1

0x51ab,	// (0x00020e39) list_medium_line_x2_t2_g3_g2_ParamLimits

0x51ab,	// (0x00020e39) list_medium_line_x2_t2_g3_g2

0x51b7,	// (0x00020e45) list_medium_line_x2_t2_g3_g3_ParamLimits

0x51b7,	// (0x00020e45) list_medium_line_x2_t2_g3_g3

0x0002,

0xf243,	// (0x0002aed1) list_medium_line_x2_t2_g3_g_ParamLimits

0xf243,	// (0x0002aed1) list_medium_line_x2_t2_g3_g

0x63eb,	// (0x00022079) list_medium_line_x2_t2_g3_t1_ParamLimits

0x63eb,	// (0x00022079) list_medium_line_x2_t2_g3_t1

0x51ea,	// (0x00020e78) list_medium_line_x2_t2_g3_t2_ParamLimits

0x51ea,	// (0x00020e78) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2db,	// (0x0002af69) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2db,	// (0x0002af69) list_medium_line_x2_t2_g3_t

0x654a,	// (0x000221d8) main_sp_fs_list_pane_ParamLimits

0x654a,	// (0x000221d8) main_sp_fs_list_pane

0x6556,	// (0x000221e4) sp_fs_scroll_pane_ParamLimits

0x6556,	// (0x000221e4) sp_fs_scroll_pane

0x6562,	// (0x000221f0) list_medium_line_x2_t3_t1

0x6572,	// (0x00022200) list_medium_line_x2_t3_t2

0x6580,	// (0x0002220e) list_medium_line_x2_t3_t3

0x0002,

0xf326,	// (0x0002afb4) list_medium_line_x2_t3_t

0x658e,	// (0x0002221c) list_medium_line_x3_t4_t1

0x659e,	// (0x0002222c) list_medium_line_x3_t4_t2

0x65ac,	// (0x0002223a) list_medium_line_x3_t4_t3

0x6580,	// (0x0002220e) list_medium_line_x3_t4_t4

0x0003,

0xf32d,	// (0x0002afbb) list_medium_line_x3_t4_t

0x65ba,	// (0x00022248) list_medium_line_x4_t5_t1

0x65ca,	// (0x00022258) list_medium_line_x4_t5_t2

0x65ac,	// (0x0002223a) list_medium_line_x4_t5_t3

0x65d8,	// (0x00022266) list_medium_line_x4_t5_t4

0x6580,	// (0x0002220e) list_medium_line_x4_t5_t5

0x0004,

0xf336,	// (0x0002afc4) list_medium_line_x4_t5_t

0x519f,	// (0x00020e2d) list_medium_line_t4_g4_g1_ParamLimits

0x519f,	// (0x00020e2d) list_medium_line_t4_g4_g1

0x5233,	// (0x00020ec1) list_medium_line_t4_g4_g2_ParamLimits

0x5233,	// (0x00020ec1) list_medium_line_t4_g4_g2

0x65e6,	// (0x00022274) list_medium_line_t4_g4_g3_ParamLimits

0x65e6,	// (0x00022274) list_medium_line_t4_g4_g3

0x51b7,	// (0x00020e45) list_medium_line_t4_g4_g4_ParamLimits

0x51b7,	// (0x00020e45) list_medium_line_t4_g4_g4

0x0003,

0xf341,	// (0x0002afcf) list_medium_line_t4_g4_g_ParamLimits

0xf341,	// (0x0002afcf) list_medium_line_t4_g4_g

0x65f2,	// (0x00022280) list_medium_line_t4_g4_t1_ParamLimits

0x65f2,	// (0x00022280) list_medium_line_t4_g4_t1

0x6607,	// (0x00022295) list_medium_line_t4_g4_t2_ParamLimits

0x6607,	// (0x00022295) list_medium_line_t4_g4_t2

0x661c,	// (0x000222aa) list_medium_line_t4_g4_t3_ParamLimits

0x661c,	// (0x000222aa) list_medium_line_t4_g4_t3

0x51ea,	// (0x00020e78) list_medium_line_t4_g4_t4_ParamLimits

0x51ea,	// (0x00020e78) list_medium_line_t4_g4_t4

0x0003,

0xf34a,	// (0x0002afd8) list_medium_line_t4_g4_t_ParamLimits

0xf34a,	// (0x0002afd8) list_medium_line_t4_g4_t

0x66bf,	// (0x0002234d) chi_dic_find_pane_g1

0x3584,	// (0x0001f212) main_tport_pane

0x91a7,	// (0x00024e35) list_medium_line_plain_t1

0x91cd,	// (0x00024e5b) list_medium_line_t2_g2_g1_ParamLimits

0x91cd,	// (0x00024e5b) list_medium_line_t2_g2_g1

0x91d9,	// (0x00024e67) list_medium_line_t2_g2_g2_ParamLimits

0x91d9,	// (0x00024e67) list_medium_line_t2_g2_g2

0x0001,

0xfa06,	// (0x0002b694) list_medium_line_t2_g2_g_ParamLimits

0xfa06,	// (0x0002b694) list_medium_line_t2_g2_g

0x91e5,	// (0x00024e73) list_medium_line_t2_g2_t1_ParamLimits

0x91e5,	// (0x00024e73) list_medium_line_t2_g2_t1

0x91ff,	// (0x00024e8d) list_medium_line_t2_g2_t2_ParamLimits

0x91ff,	// (0x00024e8d) list_medium_line_t2_g2_t2

0x0001,

0xfa0b,	// (0x0002b699) list_medium_line_t2_g2_t_ParamLimits

0xfa0b,	// (0x0002b699) list_medium_line_t2_g2_t

0x07a1,	// (0x0001c42f) aid_sp_fs_list_icon_a_sm

0x07a9,	// (0x0001c437) aid_sp_fs_list_icon_d

0x07b1,	// (0x0001c43f) aid_sp_fs_text_primary

0x07ba,	// (0x0001c448) aid_sp_fs_text_secondary

0x9737,	// (0x000253c5) list_medium_line

0x9737,	// (0x000253c5) list_medium_line_g2

0x9737,	// (0x000253c5) list_medium_line_g3

0x9737,	// (0x000253c5) list_medium_line_plain

0x9737,	// (0x000253c5) list_medium_line_plain_t2

0x9737,	// (0x000253c5) list_medium_line_plain_t3

0x9737,	// (0x000253c5) list_medium_line_right_icon

0x9737,	// (0x000253c5) list_medium_line_right_iconx2

0x9737,	// (0x000253c5) list_medium_line_t2

0x9737,	// (0x000253c5) list_medium_line_t2_g2

0x9737,	// (0x000253c5) list_medium_line_t2_g3

0x9737,	// (0x000253c5) list_medium_line_t2_right_icon

0x9737,	// (0x000253c5) list_medium_line_t2_right_iconx2

0x9737,	// (0x000253c5) list_medium_line_t3

0x9737,	// (0x000253c5) list_medium_line_t3_g2

0x9737,	// (0x000253c5) list_medium_line_t3_g3

0x9737,	// (0x000253c5) list_medium_line_t3_right_iconx2

0x9740,	// (0x000253ce) list_medium_line_t4_g4

0x1248,	// (0x0001ced6) list_medium_line_x2

0x1248,	// (0x0001ced6) list_medium_line_x2_t2_g2

0x1248,	// (0x0001ced6) list_medium_line_x2_t2_g3

0x1248,	// (0x0001ced6) list_medium_line_x2_t2_g4

0x1248,	// (0x0001ced6) list_medium_line_x2_t3

0x1248,	// (0x0001ced6) list_medium_line_x2_t3_g2

0x1248,	// (0x0001ced6) list_medium_line_x2_t3_g3

0x1248,	// (0x0001ced6) list_medium_line_x2_t3_g4

0x1248,	// (0x0001ced6) list_medium_line_x2_t4_g2

0x1248,	// (0x0001ced6) list_medium_line_x2_t4_g4

0x9749,	// (0x000253d7) list_medium_line_x3

0x9749,	// (0x000253d7) list_medium_line_x3_t4

0x9749,	// (0x000253d7) list_medium_line_x3_t4_g4

0x9740,	// (0x000253ce) list_medium_line_x4_t4

0x9740,	// (0x000253ce) list_medium_line_x4_t4_g7

0x9740,	// (0x000253ce) list_medium_line_x4_t5

0x9752,	// (0x000253e0) list_single_fs_dyc_pane_ParamLimits

0x9752,	// (0x000253e0) list_single_fs_dyc_pane

0x519f,	// (0x00020e2d) list_medium_line_x4_t4_g7_g1_ParamLimits

0x519f,	// (0x00020e2d) list_medium_line_x4_t4_g7_g1

0x9e24,	// (0x00025ab2) list_medium_line_x4_t4_g7_g2_ParamLimits

0x9e24,	// (0x00025ab2) list_medium_line_x4_t4_g7_g2

0x9e30,	// (0x00025abe) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9e30,	// (0x00025abe) list_medium_line_x4_t4_g7_g3

0x9e3f,	// (0x00025acd) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9e3f,	// (0x00025acd) list_medium_line_x4_t4_g7_g4

0x9e4b,	// (0x00025ad9) list_medium_line_x4_t4_g7_g5_ParamLimits

0x9e4b,	// (0x00025ad9) list_medium_line_x4_t4_g7_g5

0x9e5a,	// (0x00025ae8) list_medium_line_x4_t4_g7_g6_ParamLimits

0x9e5a,	// (0x00025ae8) list_medium_line_x4_t4_g7_g6

0x9e69,	// (0x00025af7) list_medium_line_x4_t4_g7_g7_ParamLimits

0x9e69,	// (0x00025af7) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd6,	// (0x0002b864) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd6,	// (0x0002b864) list_medium_line_x4_t4_g7_g

0x9e75,	// (0x00025b03) list_medium_line_x4_t4_g7_t1_ParamLimits

0x9e75,	// (0x00025b03) list_medium_line_x4_t4_g7_t1

0x9e8a,	// (0x00025b18) list_medium_line_x4_t4_g7_t2_ParamLimits

0x9e8a,	// (0x00025b18) list_medium_line_x4_t4_g7_t2

0x9e9f,	// (0x00025b2d) list_medium_line_x4_t4_g7_t3_ParamLimits

0x9e9f,	// (0x00025b2d) list_medium_line_x4_t4_g7_t3

0x9eb4,	// (0x00025b42) list_medium_line_x4_t4_g7_t4_ParamLimits

0x9eb4,	// (0x00025b42) list_medium_line_x4_t4_g7_t4

0x9ec6,	// (0x00025b54) list_medium_line_x4_t4_g7_t5_ParamLimits

0x9ec6,	// (0x00025b54) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe5,	// (0x0002b873) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe5,	// (0x0002b873) list_medium_line_x4_t4_g7_t

0x9ed8,	// (0x00025b66) list_single_dyc_row_pane_ParamLimits

0x9ed8,	// (0x00025b66) list_single_dyc_row_pane

0xa577,	// (0x00026205) call5_gesture_pane_ParamLimits

0xa577,	// (0x00026205) call5_gesture_pane

0xa5ab,	// (0x00026239) call5_windows_pane_ParamLimits

0xa5ab,	// (0x00026239) call5_windows_pane

0xa61d,	// (0x000262ab) call5_swipe_1_pane_cp_ParamLimits

0xa61d,	// (0x000262ab) call5_swipe_1_pane_cp

0xa629,	// (0x000262b7) call5_swipe_2_pane_cp_ParamLimits

0xa629,	// (0x000262b7) call5_swipe_2_pane_cp

0xce34,	// (0x00028ac2) call5_image_pane_cp

0xa635,	// (0x000262c3) popup_call5_audio_first_window_cp_ParamLimits

0xa635,	// (0x000262c3) popup_call5_audio_first_window_cp

0x1293,	// (0x0001cf21) call5_swipe_1_pane_g1_cp_ParamLimits

0x1293,	// (0x0001cf21) call5_swipe_1_pane_g1_cp

0x12d3,	// (0x0001cf61) call5_swipe_1_pane_g2_cp

0x12ac,	// (0x0001cf3a) call5_swipe_1_pane_t1_cp_ParamLimits

0x12ac,	// (0x0001cf3a) call5_swipe_1_pane_t1_cp

0x1293,	// (0x0001cf21) call5_swipe_2_pane_g1_cp_ParamLimits

0x1293,	// (0x0001cf21) call5_swipe_2_pane_g1_cp

0x12db,	// (0x0001cf69) call5_swipe_2_pane_g2_cp

0x12e3,	// (0x0001cf71) call5_swipe_2_pane_t1_cp_ParamLimits

0x12e3,	// (0x0001cf71) call5_swipe_2_pane_t1_cp

0xc193,	// (0x00027e21) main_sp_fs_email_pane

0x12f8,	// (0x0001cf86) main_sp_fs_listscroll_pane_te

0xa643,	// (0x000262d1) popup_sp_fs_action_menu_pane_ParamLimits

0xa643,	// (0x000262d1) popup_sp_fs_action_menu_pane

0xe6b5,	// (0x0002a343) bg_sp_fs_ctrlbar_pane_g1

0x1301,	// (0x0001cf8f) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x130a,	// (0x0001cf98) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x1313,	// (0x0001cfa1) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe6b5,	// (0x0002a343) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd3,	// (0x0002b961) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe49a,	// (0x0002a128) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe49a,	// (0x0002a128) bg_sp_fs_ctrlbar_ddmenu_pane

0x131c,	// (0x0001cfaa) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x131c,	// (0x0001cfaa) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x013c,	// (0x0001bdca) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x013c,	// (0x0001bdca) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdc,	// (0x0002b96a) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdc,	// (0x0002b96a) main_sp_fs_ctrlbar_ddmenu_pane_g

0x1328,	// (0x0001cfb6) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x1328,	// (0x0001cfb6) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa687,	// (0x00026315) list_medium_line_t2_right_icon_g1

0xa68f,	// (0x0002631d) list_medium_line_t2_right_icon_t1

0xa69f,	// (0x0002632d) list_medium_line_t2_right_icon_t2

0x0001,

0xfce1,	// (0x0002b96f) list_medium_line_t2_right_icon_t

0xe2a4,	// (0x00029f32) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe2a4,	// (0x00029f32) bg_sp_fs_ctrlbar_pane

0xa704,	// (0x00026392) main_sp_fs_ctrlbar_button_pane_cp01

0xa70c,	// (0x0002639a) main_sp_fs_ctrlbar_ddmenu_pane

0x137a,	// (0x0001d008) main_sp_fs_ctrlbar_pane_g1

0x1386,	// (0x0001d014) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce6,	// (0x0002b974) main_sp_fs_ctrlbar_pane_g

0x1392,	// (0x0001d020) main_sp_fs_ctrlbar_pane_t1

0xa716,	// (0x000263a4) main_sp_fs_ctrlbar_pane

0xa72c,	// (0x000263ba) main_sp_fs_listscroll_pane_te_cp01

0xa73d,	// (0x000263cb) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xa73d,	// (0x000263cb) popup_sp_fs_action_menu_pane_cp01

0xc193,	// (0x00027e21) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xc193,	// (0x00027e21) bg_sp_fs_highlight_list_pane_cp01

0x13c2,	// (0x0001d050) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x13c2,	// (0x0001d050) sp_fs_action_menu_list_gene_pane_g1

0x13d1,	// (0x0001d05f) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x13d1,	// (0x0001d05f) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf0,	// (0x0002b97e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf0,	// (0x0002b97e) sp_fs_action_menu_list_gene_pane_g

0x13de,	// (0x0001d06c) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x13de,	// (0x0001d06c) sp_fs_action_menu_list_gene_pane_t1

0x13f6,	// (0x0001d084) sp_fs_action_menu_list_gene_pane_ParamLimits

0x13f6,	// (0x0001d084) sp_fs_action_menu_list_gene_pane

0x1417,	// (0x0001d0a5) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x1417,	// (0x0001d0a5) popup_sp_fs_action_menu_bg_pane

0x1425,	// (0x0001d0b3) sp_fs_action_menu_list_pane_ParamLimits

0x1425,	// (0x0001d0b3) sp_fs_action_menu_list_pane

0xa767,	// (0x000263f5) sp_fs_scroll_pane_cp01_ParamLimits

0xa767,	// (0x000263f5) sp_fs_scroll_pane_cp01

0xa78d,	// (0x0002641b) list_medium_line_plain_t2_t1

0xa79d,	// (0x0002642b) list_medium_line_plain_t2_t2

0x0001,

0xfcf5,	// (0x0002b983) list_medium_line_plain_t2_t

0xa7ab,	// (0x00026439) list_medium_line_plain_t3_t1

0xa7bb,	// (0x00026449) list_medium_line_plain_t3_t2

0xa7c9,	// (0x00026457) list_medium_line_plain_t3_t3

0x0002,

0xfcfa,	// (0x0002b988) list_medium_line_plain_t3_t

0x519f,	// (0x00020e2d) list_medium_line_x2_t2_g2_g1_ParamLimits

0x519f,	// (0x00020e2d) list_medium_line_x2_t2_g2_g1

0x51b7,	// (0x00020e45) list_medium_line_x2_t2_g2_g2_ParamLimits

0x51b7,	// (0x00020e45) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x0002aedf) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x0002aedf) list_medium_line_x2_t2_g2_g

0x65f2,	// (0x00022280) list_medium_line_x2_t2_g2_t1_ParamLimits

0x65f2,	// (0x00022280) list_medium_line_x2_t2_g2_t1

0x51ea,	// (0x00020e78) list_medium_line_x2_t2_g2_t2_ParamLimits

0x51ea,	// (0x00020e78) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd01,	// (0x0002b98f) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd01,	// (0x0002b98f) list_medium_line_x2_t2_g2_t

0x519f,	// (0x00020e2d) list_medium_line_x2_t4_g2_g1_ParamLimits

0x519f,	// (0x00020e2d) list_medium_line_x2_t4_g2_g1

0x51b7,	// (0x00020e45) list_medium_line_x2_t4_g2_g2_ParamLimits

0x51b7,	// (0x00020e45) list_medium_line_x2_t4_g2_g2

0x0001,

0xf251,	// (0x0002aedf) list_medium_line_x2_t4_g2_g_ParamLimits

0xf251,	// (0x0002aedf) list_medium_line_x2_t4_g2_g

0xa7d7,	// (0x00026465) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa7d7,	// (0x00026465) list_medium_line_x2_t4_g2_t1

0xa7f1,	// (0x0002647f) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa7f1,	// (0x0002647f) list_medium_line_x2_t4_g2_t2

0xa806,	// (0x00026494) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa806,	// (0x00026494) list_medium_line_x2_t4_g2_t3

0x51ea,	// (0x00020e78) list_medium_line_x2_t4_g2_t4_ParamLimits

0x51ea,	// (0x00020e78) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd06,	// (0x0002b994) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd06,	// (0x0002b994) list_medium_line_x2_t4_g2_t

0xa81b,	// (0x000264a9) list_medium_line_t3_right_iconx2_g1

0xa687,	// (0x00026315) list_medium_line_t3_right_iconx2_g2

0xa823,	// (0x000264b1) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0f,	// (0x0002b99d) list_medium_line_t3_right_iconx2_g

0xa82b,	// (0x000264b9) list_medium_line_t3_right_iconx2_t1

0xa83b,	// (0x000264c9) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd16,	// (0x0002b9a4) list_medium_line_t3_right_iconx2_t

0x519f,	// (0x00020e2d) list_medium_line_x3_t4_g4_g1_ParamLimits

0x519f,	// (0x00020e2d) list_medium_line_x3_t4_g4_g1

0x51ab,	// (0x00020e39) list_medium_line_x3_t4_g4_g2_ParamLimits

0x51ab,	// (0x00020e39) list_medium_line_x3_t4_g4_g2

0x5233,	// (0x00020ec1) list_medium_line_x3_t4_g4_g3_ParamLimits

0x5233,	// (0x00020ec1) list_medium_line_x3_t4_g4_g3

0xa849,	// (0x000264d7) list_medium_line_x3_t4_g4_g4_ParamLimits

0xa849,	// (0x000264d7) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1b,	// (0x0002b9a9) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1b,	// (0x0002b9a9) list_medium_line_x3_t4_g4_g

0xa855,	// (0x000264e3) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa855,	// (0x000264e3) list_medium_line_x3_t4_g4_t1

0xa86c,	// (0x000264fa) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa86c,	// (0x000264fa) list_medium_line_x3_t4_g4_t2

0x6607,	// (0x00022295) list_medium_line_x3_t4_g4_t3_ParamLimits

0x6607,	// (0x00022295) list_medium_line_x3_t4_g4_t3

0xa881,	// (0x0002650f) list_medium_line_x3_t4_g4_t4_ParamLimits

0xa881,	// (0x0002650f) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd24,	// (0x0002b9b2) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd24,	// (0x0002b9b2) list_medium_line_x3_t4_g4_t

0xa89e,	// (0x0002652c) list_single_dyc_row_text_pane_t1_ParamLimits

0xa89e,	// (0x0002652c) list_single_dyc_row_text_pane_t1

0xa8d5,	// (0x00026563) list_single_dyc_row_text_pane_t2_ParamLimits

0xa8d5,	// (0x00026563) list_single_dyc_row_text_pane_t2

0x1447,	// (0x0001d0d5) list_single_dyc_row_text_pane_t3_ParamLimits

0x1447,	// (0x0001d0d5) list_single_dyc_row_text_pane_t3

0x0002,

0xfd2d,	// (0x0002b9bb) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2d,	// (0x0002b9bb) list_single_dyc_row_text_pane_t

0x1459,	// (0x0001d0e7) list_single_dyc_row_pane_g1_ParamLimits

0x1459,	// (0x0001d0e7) list_single_dyc_row_pane_g1

0x1465,	// (0x0001d0f3) list_single_dyc_row_pane_g2_ParamLimits

0x1465,	// (0x0001d0f3) list_single_dyc_row_pane_g2

0x1471,	// (0x0001d0ff) list_single_dyc_row_pane_g3_ParamLimits

0x1471,	// (0x0001d0ff) list_single_dyc_row_pane_g3

0x147d,	// (0x0001d10b) list_single_dyc_row_pane_g4_ParamLimits

0x147d,	// (0x0001d10b) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0002b9c2) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0002b9c2) list_single_dyc_row_pane_g

0x1489,	// (0x0001d117) list_single_dyc_row_text_pane_ParamLimits

0x1489,	// (0x0001d117) list_single_dyc_row_text_pane

0xbba5,	// (0x00027833) bg_sp_fs_scroll_pane

0x14a8,	// (0x0001d136) thumb_sp_fs_scroll_pane

0x91cd,	// (0x00024e5b) list_medium_line_g1_ParamLimits

0x91cd,	// (0x00024e5b) list_medium_line_g1

0xa92f,	// (0x000265bd) list_medium_line_t1_ParamLimits

0xa92f,	// (0x000265bd) list_medium_line_t1

0x519f,	// (0x00020e2d) list_medium_line_x2_g1_ParamLimits

0x519f,	// (0x00020e2d) list_medium_line_x2_g1

0x51ab,	// (0x00020e39) list_medium_line_x2_g2_ParamLimits

0x51ab,	// (0x00020e39) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0002b9cb) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0002b9cb) list_medium_line_x2_g

0x14b1,	// (0x0001d13f) list_medium_line_x2_t1_ParamLimits

0x14b1,	// (0x0001d13f) list_medium_line_x2_t1

0x519f,	// (0x00020e2d) list_medium_line_x3_g1_ParamLimits

0x519f,	// (0x00020e2d) list_medium_line_x3_g1

0x51ab,	// (0x00020e39) list_medium_line_x3_g2_ParamLimits

0x51ab,	// (0x00020e39) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0002b9cb) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0002b9cb) list_medium_line_x3_g

0x14b1,	// (0x0001d13f) list_medium_line_x3_t1_ParamLimits

0x14b1,	// (0x0001d13f) list_medium_line_x3_t1

0x14c7,	// (0x0001d155) thumb_sp_fs_scroll_pane_g1

0x14d0,	// (0x0001d15e) thumb_sp_fs_scroll_pane_g2

0x14d9,	// (0x0001d167) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0002b9d0) thumb_sp_fs_scroll_pane_g

0x14c7,	// (0x0001d155) bg_sp_fs_scroll_pane_g1

0x14d0,	// (0x0001d15e) bg_sp_fs_scroll_pane_g2

0x14d9,	// (0x0001d167) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0002b9d0) bg_sp_fs_scroll_pane_g

0x519f,	// (0x00020e2d) list_medium_line_x2_t3_g4_g1_ParamLimits

0x519f,	// (0x00020e2d) list_medium_line_x2_t3_g4_g1

0x5227,	// (0x00020eb5) list_medium_line_x2_t3_g4_g2_ParamLimits

0x5227,	// (0x00020eb5) list_medium_line_x2_t3_g4_g2

0x51ab,	// (0x00020e39) list_medium_line_x2_t3_g4_g3_ParamLimits

0x51ab,	// (0x00020e39) list_medium_line_x2_t3_g4_g3

0x51b7,	// (0x00020e45) list_medium_line_x2_t3_g4_g4_ParamLimits

0x51b7,	// (0x00020e45) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x0002af5b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x0002af5b) list_medium_line_x2_t3_g4_g

0xa944,	// (0x000265d2) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa944,	// (0x000265d2) list_medium_line_x2_t3_g4_t1

0xa95a,	// (0x000265e8) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa95a,	// (0x000265e8) list_medium_line_x2_t3_g4_t2

0x51ea,	// (0x00020e78) list_medium_line_x2_t3_g4_t3_ParamLimits

0x51ea,	// (0x00020e78) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0002b9d7) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0002b9d7) list_medium_line_x2_t3_g4_t

0x91cd,	// (0x00024e5b) list_medium_line_g2_g1_ParamLimits

0x91cd,	// (0x00024e5b) list_medium_line_g2_g1

0x91d9,	// (0x00024e67) list_medium_line_g2_g2_ParamLimits

0x91d9,	// (0x00024e67) list_medium_line_g2_g2

0x0001,

0xfa06,	// (0x0002b694) list_medium_line_g2_g_ParamLimits

0xfa06,	// (0x0002b694) list_medium_line_g2_g

0xa974,	// (0x00026602) list_medium_line_g2_t1_ParamLimits

0xa974,	// (0x00026602) list_medium_line_g2_t1

0x91cd,	// (0x00024e5b) list_medium_line_t3_g2_g1_ParamLimits

0x91cd,	// (0x00024e5b) list_medium_line_t3_g2_g1

0x91d9,	// (0x00024e67) list_medium_line_t3_g2_g2_ParamLimits

0x91d9,	// (0x00024e67) list_medium_line_t3_g2_g2

0x0001,

0xfa06,	// (0x0002b694) list_medium_line_t3_g2_g_ParamLimits

0xfa06,	// (0x0002b694) list_medium_line_t3_g2_g

0xa989,	// (0x00026617) list_medium_line_t3_g2_t1_ParamLimits

0xa989,	// (0x00026617) list_medium_line_t3_g2_t1

0xa9a0,	// (0x0002662e) list_medium_line_t3_g2_t2_ParamLimits

0xa9a0,	// (0x0002662e) list_medium_line_t3_g2_t2

0xa9b5,	// (0x00026643) list_medium_line_t3_g2_t3_ParamLimits

0xa9b5,	// (0x00026643) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0002b9de) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0002b9de) list_medium_line_t3_g2_t

0xa687,	// (0x00026315) list_medium_line_right_icon_g1

0xa9ca,	// (0x00026658) list_medium_line_right_icon_t1

0x91cd,	// (0x00024e5b) list_medium_line_t2_g1_ParamLimits

0x91cd,	// (0x00024e5b) list_medium_line_t2_g1

0xa9d8,	// (0x00026666) list_medium_line_t2_t1_ParamLimits

0xa9d8,	// (0x00026666) list_medium_line_t2_t1

0xa9f2,	// (0x00026680) list_medium_line_t2_t2_ParamLimits

0xa9f2,	// (0x00026680) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0002b9e5) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0002b9e5) list_medium_line_t2_t

0x91cd,	// (0x00024e5b) list_medium_line_t3_g1_ParamLimits

0x91cd,	// (0x00024e5b) list_medium_line_t3_g1

0xaa07,	// (0x00026695) list_medium_line_t3_t1_ParamLimits

0xaa07,	// (0x00026695) list_medium_line_t3_t1

0xaa21,	// (0x000266af) list_medium_line_t3_t2_ParamLimits

0xaa21,	// (0x000266af) list_medium_line_t3_t2

0xaa36,	// (0x000266c4) list_medium_line_t3_t3_ParamLimits

0xaa36,	// (0x000266c4) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0002b9ea) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0002b9ea) list_medium_line_t3_t

0x91cd,	// (0x00024e5b) list_medium_line_g3_g1_ParamLimits

0x91cd,	// (0x00024e5b) list_medium_line_g3_g1

0xaa4b,	// (0x000266d9) list_medium_line_g3_g2_ParamLimits

0xaa4b,	// (0x000266d9) list_medium_line_g3_g2

0x91d9,	// (0x00024e67) list_medium_line_g3_g3_ParamLimits

0x91d9,	// (0x00024e67) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0002b9f1) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0002b9f1) list_medium_line_g3_g

0xaa57,	// (0x000266e5) list_medium_line_g3_t1_ParamLimits

0xaa57,	// (0x000266e5) list_medium_line_g3_t1

0x91cd,	// (0x00024e5b) list_medium_line_t2_g3_g1_ParamLimits

0x91cd,	// (0x00024e5b) list_medium_line_t2_g3_g1

0xaa4b,	// (0x000266d9) list_medium_line_t2_g3_g2_ParamLimits

0xaa4b,	// (0x000266d9) list_medium_line_t2_g3_g2

0x91d9,	// (0x00024e67) list_medium_line_t2_g3_g3_ParamLimits

0x91d9,	// (0x00024e67) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0002b9f1) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0002b9f1) list_medium_line_t2_g3_g

0xaa6c,	// (0x000266fa) list_medium_line_t2_g3_t1_ParamLimits

0xaa6c,	// (0x000266fa) list_medium_line_t2_g3_t1

0xaa86,	// (0x00026714) list_medium_line_t2_g3_t2_ParamLimits

0xaa86,	// (0x00026714) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0002b9f8) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0002b9f8) list_medium_line_t2_g3_t

0x91cd,	// (0x00024e5b) list_medium_line_t3_g3_g1_ParamLimits

0x91cd,	// (0x00024e5b) list_medium_line_t3_g3_g1

0xaa4b,	// (0x000266d9) list_medium_line_t3_g3_g2_ParamLimits

0xaa4b,	// (0x000266d9) list_medium_line_t3_g3_g2

0x91d9,	// (0x00024e67) list_medium_line_t3_g3_g3_ParamLimits

0x91d9,	// (0x00024e67) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0002b9f1) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0002b9f1) list_medium_line_t3_g3_g

0xaa9b,	// (0x00026729) list_medium_line_t3_g3_t1_ParamLimits

0xaa9b,	// (0x00026729) list_medium_line_t3_g3_t1

0xaaaf,	// (0x0002673d) list_medium_line_t3_g3_t2_ParamLimits

0xaaaf,	// (0x0002673d) list_medium_line_t3_g3_t2

0xaac1,	// (0x0002674f) list_medium_line_t3_g3_t3_ParamLimits

0xaac1,	// (0x0002674f) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0002b9fd) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0002b9fd) list_medium_line_t3_g3_t

0xa81b,	// (0x000264a9) list_medium_line_right_iconx2_g1

0xa687,	// (0x00026315) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0002ba04) list_medium_line_right_iconx2_g

0xaad3,	// (0x00026761) list_medium_line_right_iconx2_t1

0xa81b,	// (0x000264a9) list_medium_line_t2_right_iconx2_g1

0xa687,	// (0x00026315) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0002ba04) list_medium_line_t2_right_iconx2_g

0xaae1,	// (0x0002676f) list_medium_line_t2_right_iconx2_t1

0xaaf1,	// (0x0002677f) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0002ba09) list_medium_line_t2_right_iconx2_t

0xaaff,	// (0x0002678d) list_medium_line_x4_t4_t1

0xab0d,	// (0x0002679b) list_medium_line_x4_t4_t2

0xab1d,	// (0x000267ab) list_medium_line_x4_t4_t3

0xab2d,	// (0x000267bb) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0002ba0e) list_medium_line_x4_t4_t

0xab67,	// (0x000267f5) tport_appsw_pane_ParamLimits

0xab67,	// (0x000267f5) tport_appsw_pane

0xab75,	// (0x00026803) tport_contact_pane_ParamLimits

0xab75,	// (0x00026803) tport_contact_pane

0xab85,	// (0x00026813) tport_listscroll_pane_ParamLimits

0xab85,	// (0x00026813) tport_listscroll_pane

0xab95,	// (0x00026823) cell_tport_appsw_pane_ParamLimits

0xab95,	// (0x00026823) cell_tport_appsw_pane

0xe9a9,	// (0x0002a637) tport_appsw_pane_g1_ParamLimits

0xe9a9,	// (0x0002a637) tport_appsw_pane_g1

0x14e2,	// (0x0001d170) tport_contact_pane_g1

0x0da3,	// (0x0001ca31) tport_contact_pane_t1

0x14eb,	// (0x0001d179) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0002ba17) tport_contact_pane_t

0x14f9,	// (0x0001d187) list_tport_pane

0x1502,	// (0x0001d190) scroll_pane_cp_030

0xabc8,	// (0x00026856) cell_tport_appsw_pane_g1

0xabd8,	// (0x00026866) cell_tport_appsw_pane_t1

0xbba5,	// (0x00027833) grid_highlight_pane_cp019

0xabe6,	// (0x00026874) list_tport_double_graphic_pane_ParamLimits

0xabe6,	// (0x00026874) list_tport_double_graphic_pane

0xc193,	// (0x00027e21) list_highlight_pane_cp023_ParamLimits

0xc193,	// (0x00027e21) list_highlight_pane_cp023

0xabf7,	// (0x00026885) list_tport_double_graphic_pane_g1_ParamLimits

0xabf7,	// (0x00026885) list_tport_double_graphic_pane_g1

0xac04,	// (0x00026892) list_tport_double_graphic_pane_t1_ParamLimits

0xac04,	// (0x00026892) list_tport_double_graphic_pane_t1

0xac19,	// (0x000268a7) list_tport_double_graphic_pane_t2_ParamLimits

0xac19,	// (0x000268a7) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0002ba23) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0002ba23) list_tport_double_graphic_pane_t

0xbba5,	// (0x00027833) main_cale_note_pane

0x42b1,	// (0x0001ff3f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x42b1,	// (0x0001ff3f) cell_vitu2_function_top_wide_pane_cp01

0xa23a,	// (0x00025ec8) wait_bar_pane_cp05_ParamLimits

0xc193,	// (0x00027e21) listscroll_cmail_pane

0x150b,	// (0x0001d199) list_cmail_pane

0xac2b,	// (0x000268b9) list_cmail_body_pane

0xac4b,	// (0x000268d9) list_single_cmail_header_caption_pane

0xac76,	// (0x00026904) list_single_cmail_header_detail_pane_ParamLimits

0xac76,	// (0x00026904) list_single_cmail_header_detail_pane

0x151b,	// (0x0001d1a9) list_single_cmail_header_caption_pane_t1

0xacb5,	// (0x00026943) list_single_cmail_header_detail_pane_g1_ParamLimits

0xacb5,	// (0x00026943) list_single_cmail_header_detail_pane_g1

0x1529,	// (0x0001d1b7) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1529,	// (0x0001d1b7) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0002ba28) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0002ba28) list_single_cmail_header_detail_pane_g

0xaccb,	// (0x00026959) list_single_cmail_header_detail_pane_t1_ParamLimits

0xaccb,	// (0x00026959) list_single_cmail_header_detail_pane_t1

0xad07,	// (0x00026995) list_single_cmail_header_editor_pane_bg_ParamLimits

0xad07,	// (0x00026995) list_single_cmail_header_editor_pane_bg

0x0f44,	// (0x0001cbd2) list_cmail_body_pane_g1

0x1566,	// (0x0001d1f4) list_cmail_body_pane_t1

0x00fa,	// (0x0001bd88) list_single_cmail_header_editor_pane_bg_g1

0xc711,	// (0x0002839f) list_single_cmail_header_editor_pane_bg_g1_copy1

0x010a,	// (0x0001bd98) list_single_cmail_header_editor_pane_bg_g1_copy2

0x0102,	// (0x0001bd90) list_single_cmail_header_editor_pane_bg_g1_copy3

0x03e7,	// (0x0001c075) list_single_cmail_header_editor_pane_bg_g1_copy4

0x016c,	// (0x0001bdfa) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x015c,	// (0x0001bdea) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x0164,	// (0x0001bdf2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc6f1,	// (0x0002837f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xad1e,	// (0x000269ac) calenote_gesture_pane_ParamLimits

0xad1e,	// (0x000269ac) calenote_gesture_pane

0xad38,	// (0x000269c6) calenote_window_pane_ParamLimits

0xad38,	// (0x000269c6) calenote_window_pane

0x1574,	// (0x0001d202) popup_note_window_cp01

0xad50,	// (0x000269de) calenote_swipe_1_pane_ParamLimits

0xad50,	// (0x000269de) calenote_swipe_1_pane

0xa629,	// (0x000262b7) calenote_swipe_2_pane_ParamLimits

0xa629,	// (0x000262b7) calenote_swipe_2_pane

0x1293,	// (0x0001cf21) calenote_swipe_1_pane_g1_ParamLimits

0x1293,	// (0x0001cf21) calenote_swipe_1_pane_g1

0x12a0,	// (0x0001cf2e) calenote_swipe_1_pane_g2_ParamLimits

0x12a0,	// (0x0001cf2e) calenote_swipe_1_pane_g2

0x0001,

0xfcc9,	// (0x0002b957) calenote_swipe_1_pane_g_ParamLimits

0xfcc9,	// (0x0002b957) calenote_swipe_1_pane_g

0x1586,	// (0x0001d214) calenote_swipe_1_pane_t1_ParamLimits

0x1586,	// (0x0001d214) calenote_swipe_1_pane_t1

0x1293,	// (0x0001cf21) calenote_swipe_2_pane_g1_ParamLimits

0x1293,	// (0x0001cf21) calenote_swipe_2_pane_g1

0x15a5,	// (0x0001d233) calenote_swipe_2_pane_g2_ParamLimits

0x15a5,	// (0x0001d233) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0002ba34) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0002ba34) calenote_swipe_2_pane_g

0x15b1,	// (0x0001d23f) calenote_swipe_2_pane_t1_ParamLimits

0x15b1,	// (0x0001d23f) calenote_swipe_2_pane_t1

0xbba5,	// (0x00027833) main_mup_navstr_pane

0x81b6,	// (0x00023e44) main_mup3_pane_t7_ParamLimits

0x81b6,	// (0x00023e44) main_mup3_pane_t7

0x3bbe,	// (0x0001f84c) main_mp4_pane_g6_ParamLimits

0x3bbe,	// (0x0001f84c) main_mp4_pane_g6

0x3eb1,	// (0x0001fb3f) main_image3_pane_t4_ParamLimits

0x3eb1,	// (0x0001fb3f) main_image3_pane_t4

0xad63,	// (0x000269f1) popup_navstr_preview_pane_ParamLimits

0xad63,	// (0x000269f1) popup_navstr_preview_pane

0xad6f,	// (0x000269fd) scroll_navstr_pane_ParamLimits

0xad6f,	// (0x000269fd) scroll_navstr_pane

0xbba5,	// (0x00027833) bg_popup_preview_window_pane_cp04

0x15d8,	// (0x0001d266) popup_navstr_preview_pane_t1

0xad7b,	// (0x00026a09) scroll_navstr_pane_g1_ParamLimits

0xad7b,	// (0x00026a09) scroll_navstr_pane_g1

0xad88,	// (0x00026a16) scroll_navstr_pane_t1_ParamLimits

0xad88,	// (0x00026a16) scroll_navstr_pane_t1

0x157d,	// (0x0001d20b) bg_button_pane_cp014

0x157d,	// (0x0001d20b) bg_button_pane_cp030

0xa51d,	// (0x000261ab) list_double_fisheye_pane_g4_ParamLimits

0xa51d,	// (0x000261ab) list_double_fisheye_pane_g4

0xa529,	// (0x000261b7) list_double_fisheye_pane_g5_ParamLimits

0xa529,	// (0x000261b7) list_double_fisheye_pane_g5

0x0148,	// (0x0001bdd6) sp_fs_scroll_pane_cp03

0x137a,	// (0x0001d008) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x1386,	// (0x0001d014) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce6,	// (0x0002b974) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x1392,	// (0x0001d020) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x1513,	// (0x0001d1a1) sp_fs_scroll_pane_cp02

0xc3f4,	// (0x00028082) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc3f4,	// (0x00028082) popup_sp_fs_calendar_preview_list_single_pane

0xbba5,	// (0x00027833) main_cam6_pano_pane

0x3568,	// (0x0001f1f6) main_mup3_pane_ParamLimits

0xbba5,	// (0x00027833) main_phacti_pane

0xa10f,	// (0x00025d9d) bg_button_pane_cp11

0xa127,	// (0x00025db5) main_mobtv_info_pane_g2_ParamLimits

0xa127,	// (0x00025db5) main_mobtv_info_pane_g2

0x0001,

0xfc46,	// (0x0002b8d4) main_mobtv_info_pane_g_ParamLimits

0xfc46,	// (0x0002b8d4) main_mobtv_info_pane_g

0xa2d9,	// (0x00025f67) sc_clock_pane_t5_ParamLimits

0xa2d9,	// (0x00025f67) sc_clock_pane_t5

0xa38e,	// (0x0002601c) main_radioblah_pane_g1_ParamLimits

0x11d6,	// (0x0001ce64) main_radioblah_pane_t3_ParamLimits

0x11d6,	// (0x0001ce64) main_radioblah_pane_t3

0x11ee,	// (0x0001ce7c) main_radioblah_pane_t4_ParamLimits

0x11ee,	// (0x0001ce7c) main_radioblah_pane_t4

0xa3ac,	// (0x0002603a) main_radioblah_text_pane_ParamLimits

0xa3ac,	// (0x0002603a) main_radioblah_text_pane

0xa3b9,	// (0x00026047) main_radioblah_info_pane_g1_ParamLimits

0xa44e,	// (0x000260dc) main_radioblah_info_pane_t4_ParamLimits

0xa44e,	// (0x000260dc) main_radioblah_info_pane_t4

0xc193,	// (0x00027e21) main_sp_fs_calendar_pane

0xad9a,	// (0x00026a28) main_phacti_pane_g1

0xada2,	// (0x00026a30) phacti_note_pane_ParamLimits

0xada2,	// (0x00026a30) phacti_note_pane

0x15ef,	// (0x0001d27d) phacti_term_pane_ParamLimits

0x15ef,	// (0x0001d27d) phacti_term_pane

0x1604,	// (0x0001d292) phacti_note_pane_t1_ParamLimits

0x1604,	// (0x0001d292) phacti_note_pane_t1

0x161b,	// (0x0001d2a9) phacti_term_pane_g1

0x1623,	// (0x0001d2b1) phacti_term_pane_t1_ParamLimits

0x1623,	// (0x0001d2b1) phacti_term_pane_t1

0x164d,	// (0x0001d2db) popup_sp_fs_calendar_preview_list_single_pane_g1

0xc512,	// (0x000281a0) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0002ba3e) popup_sp_fs_calendar_preview_list_single_pane_g

0x1655,	// (0x0001d2e3) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x1655,	// (0x0001d2e3) popup_sp_fs_calendar_preview_list_single_pane_t1

0x166a,	// (0x0001d2f8) aid_popup_sp_fs_bg_corner_pane

0xe6b5,	// (0x0002a343) popup_sp_fs_calendar_preview_bg_pane_g1

0xbba5,	// (0x00027833) popup_sp_fs_calendar_preview_bg_pane

0x1672,	// (0x0001d300) popup_sp_fs_calendar_preview_list_pane

0xe2a4,	// (0x00029f32) bg_main_sp_fs_cale_pane_ParamLimits

0xe2a4,	// (0x00029f32) bg_main_sp_fs_cale_pane

0x1683,	// (0x0001d311) listscroll_cale_mrui_pane_ParamLimits

0x1683,	// (0x0001d311) listscroll_cale_mrui_pane

0x01c0,	// (0x0001be4e) listscroll_sp_fs_schedule_track_pane

0x1698,	// (0x0001d326) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1698,	// (0x0001d326) main_sp_fs_ctrlbar_pane_cp01

0x16ab,	// (0x0001d339) main_sp_fs_ribbon_pane

0x16b3,	// (0x0001d341) popup_sp_fs_cale_preview_window

0xae05,	// (0x00026a93) list_single_sp_fs_schedule_track_pane_ParamLimits

0xae05,	// (0x00026a93) list_single_sp_fs_schedule_track_pane

0x012e,	// (0x0001bdbc) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x012e,	// (0x0001bdbc) bg_sp_fs_highlight_list_pane_cp03

0xae27,	// (0x00026ab5) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xae27,	// (0x00026ab5) list_single_sp_fs_schedule_track_pane_g1

0xae33,	// (0x00026ac1) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xae33,	// (0x00026ac1) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0002ba43) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0002ba43) list_single_sp_fs_schedule_track_pane_g

0xae3f,	// (0x00026acd) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xae3f,	// (0x00026acd) list_single_sp_fs_schedule_track_pane_t1

0xae57,	// (0x00026ae5) sp_fs_schedule_track_pane_ParamLimits

0xae57,	// (0x00026ae5) sp_fs_schedule_track_pane

0x16c5,	// (0x0001d353) sp_fs_schedule_track_pane_g1

0x16cd,	// (0x0001d35b) sp_fs_schedule_track_pane_g2

0x16d5,	// (0x0001d363) sp_fs_schedule_track_pane_g3

0x16dd,	// (0x0001d36b) sp_fs_schedule_track_pane_g4

0x16e5,	// (0x0001d373) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0002ba48) sp_fs_schedule_track_pane_g

0x00fa,	// (0x0001bd88) bg_sp_fs_schedule_viewer_highlight_g1

0xc711,	// (0x0002839f) bg_sp_fs_schedule_viewer_highlight_g2

0x0102,	// (0x0001bd90) bg_sp_fs_schedule_viewer_highlight_g3

0x010a,	// (0x0001bd98) bg_sp_fs_schedule_viewer_highlight_g4

0x03e7,	// (0x0001c075) bg_sp_fs_schedule_viewer_highlight_g5

0x015c,	// (0x0001bdea) bg_sp_fs_schedule_viewer_highlight_g6

0x0164,	// (0x0001bdf2) bg_sp_fs_schedule_viewer_highlight_g7

0x016c,	// (0x0001bdfa) bg_sp_fs_schedule_viewer_highlight_g8

0xc6f1,	// (0x0002837f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0002ba53) bg_sp_fs_schedule_viewer_highlight_g

0xbba5,	// (0x00027833) bg_main_sp_fs_ribbon_pane

0xae67,	// (0x00026af5) main_sp_fs_ribbon_pane_g1

0x16ed,	// (0x0001d37b) main_sp_fs_ribbon_pane_t1

0xae70,	// (0x00026afe) main_sp_fs_ribbon_pane_t2

0x16fc,	// (0x0001d38a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0002ba66) main_sp_fs_ribbon_pane_t

0x170b,	// (0x0001d399) main_sp_fs_ribbon_scheduler_pane

0x1713,	// (0x0001d3a1) bg_main_sp_fs_ribbon_pane_g1

0x171c,	// (0x0001d3aa) bg_main_sp_fs_ribbon_pane_g2

0x1725,	// (0x0001d3b3) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0002ba6d) bg_main_sp_fs_ribbon_pane_g

0x172d,	// (0x0001d3bb) main_sp_fs_ribbon_scheduler_pane_g1

0x1736,	// (0x0001d3c4) main_sp_fs_ribbon_scheduler_pane_g2

0x173f,	// (0x0001d3cd) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0002ba74) main_sp_fs_ribbon_scheduler_pane_g

0x1748,	// (0x0001d3d6) list_cale_mrui_pane

0xae7f,	// (0x00026b0d) sp_fs_scroll_pane_cp07_ParamLimits

0xae7f,	// (0x00026b0d) sp_fs_scroll_pane_cp07

0xae9b,	// (0x00026b29) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xae9b,	// (0x00026b29) bg_sp_fs_schedule_viewer_highlight

0x1755,	// (0x0001d3e3) list_single_sp_fs_schedule_track_pane_cp01

0x175d,	// (0x0001d3eb) list_sp_fs_schedule_track_pane

0x1765,	// (0x0001d3f3) sp_fs_scroll_pane_cp06_ParamLimits

0x1765,	// (0x0001d3f3) sp_fs_scroll_pane_cp06

0xe6b5,	// (0x0002a343) bgmain_sp_fs_calendar_pane_g1

0xaea8,	// (0x00026b36) list_single_cale_mrui_pane_ParamLimits

0xaea8,	// (0x00026b36) list_single_cale_mrui_pane

0x1777,	// (0x0001d405) list_single_cale_mrui_row_pane_ParamLimits

0x1777,	// (0x0001d405) list_single_cale_mrui_row_pane

0x1784,	// (0x0001d412) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1784,	// (0x0001d412) list_single_cale_mrui_row_pane_g1

0x17c9,	// (0x0001d457) list_single_cale_mrui_row_pane_t1_ParamLimits

0x17c9,	// (0x0001d457) list_single_cale_mrui_row_pane_t1

0xaed5,	// (0x00026b63) list_single_cale_mrui_row_pane_t2_ParamLimits

0xaed5,	// (0x00026b63) list_single_cale_mrui_row_pane_t2

0x17db,	// (0x0001d469) list_single_cale_mrui_row_pane_t3_ParamLimits

0x17db,	// (0x0001d469) list_single_cale_mrui_row_pane_t3

0x180a,	// (0x0001d498) list_single_cale_mrui_row_pane_t4_ParamLimits

0x180a,	// (0x0001d498) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0002ba82) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0002ba82) list_single_cale_mrui_row_pane_t

0xaf3b,	// (0x00026bc9) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xaf3b,	// (0x00026bc9) list_single_cmail_header_editor_pane_bg_cp01

0xaf5b,	// (0x00026be9) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xaf5b,	// (0x00026be9) list_single_cmail_header_editor_pane_bg_cp02

0xaf77,	// (0x00026c05) main_radioblah_text_pane_t1_ParamLimits

0xaf77,	// (0x00026c05) main_radioblah_text_pane_t1

0x1853,	// (0x0001d4e1) cam6_indi_pane_cp01

0x185b,	// (0x0001d4e9) cam6_mode_pane_cp01

0x1863,	// (0x0001d4f1) cam6_pano_pane

0x186c,	// (0x0001d4fa) cam6_zoom_pane_cp01

0x1874,	// (0x0001d502) cam6_pano_image_pane

0x187f,	// (0x0001d50d) cam6_pano_pane_g1

0x0f44,	// (0x0001cbd2) cam6_pano_pane_g2

0x1888,	// (0x0001d516) cam6_pano_pane_g3

0x1891,	// (0x0001d51f) cam6_pano_pane_g4

0xec84,	// (0x0002a912) cam6_pano_pane_g5

0x189a,	// (0x0001d528) cam6_pano_pane_g6

0x1839,	// (0x0001d4c7) cam6_pano_pane_g7

0x18a4,	// (0x0001d532) cam6_pano_pane_g8

0x18ad,	// (0x0001d53b) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0002ba8b) cam6_pano_pane_g

0xbba5,	// (0x00027833) main_browser_tag_pane

0x15d0,	// (0x0001d25e) grid_navstr_albumart_pane

0x18b8,	// (0x0001d546) cell_navstr_albumart_pane_ParamLimits

0x18b8,	// (0x0001d546) cell_navstr_albumart_pane

0x18d8,	// (0x0001d566) cell_navstr_albumart_pane_g1

0xe0b5,	// (0x00029d43) cell_navstr_albumart_pane_g2

0xe0c5,	// (0x00029d53) cell_navstr_albumart_pane_g3

0xe0bd,	// (0x00029d4b) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0002ba9e) cell_navstr_albumart_pane_g

0xaf92,	// (0x00026c20) bt_list_pane_ParamLimits

0xaf92,	// (0x00026c20) bt_list_pane

0xafb2,	// (0x00026c40) bt_list_pane_t1

0xafc1,	// (0x00026c4f) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0002baa7) bt_list_pane_t

0xbba5,	// (0x00027833) main_cale_prevew_pane

0xafd0,	// (0x00026c5e) popup_cale_preview_window_ParamLimits

0xafd0,	// (0x00026c5e) popup_cale_preview_window

0xc193,	// (0x00027e21) bg_popup_preview_window_pane_cp05_ParamLimits

0xc193,	// (0x00027e21) bg_popup_preview_window_pane_cp05

0x18e0,	// (0x0001d56e) list_cale_preview_pane_ParamLimits

0x18e0,	// (0x0001d56e) list_cale_preview_pane

0xafe9,	// (0x00026c77) list_double_cale_preview_pane_ParamLimits

0xafe9,	// (0x00026c77) list_double_cale_preview_pane

0xaffb,	// (0x00026c89) list_single_cale_preview_pane_ParamLimits

0xaffb,	// (0x00026c89) list_single_cale_preview_pane

0xb011,	// (0x00026c9f) list_single_cale_preview_pane_g1

0xb019,	// (0x00026ca7) list_single_cale_preview_pane_t1_ParamLimits

0xb019,	// (0x00026ca7) list_single_cale_preview_pane_t1

0xb02e,	// (0x00026cbc) list_double_cale_preview_pane_g1

0xb036,	// (0x00026cc4) list_double_cale_preview_pane_t1_ParamLimits

0xb036,	// (0x00026cc4) list_double_cale_preview_pane_t1

0xb04b,	// (0x00026cd9) list_double_cale_preview_pane_t2_ParamLimits

0xb04b,	// (0x00026cd9) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0002baac) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0002baac) list_double_cale_preview_pane_t

0xbba5,	// (0x00027833) main_ezdial_pane

0xc193,	// (0x00027e21) main_sp_fs_email_pane_ParamLimits

0xa6ad,	// (0x0002633b) cmail_ddmenu_btn01_pane_ParamLimits

0xa6ad,	// (0x0002633b) cmail_ddmenu_btn01_pane

0xa6ca,	// (0x00026358) cmail_ddmenu_btn02_pane_ParamLimits

0xa6ca,	// (0x00026358) cmail_ddmenu_btn02_pane

0xa6e8,	// (0x00026376) cmail_ddmenu_btn03_pane_ParamLimits

0xa6e8,	// (0x00026376) cmail_ddmenu_btn03_pane

0xa716,	// (0x000263a4) main_sp_fs_ctrlbar_pane_ParamLimits

0xa72c,	// (0x000263ba) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xac2b,	// (0x000268b9) list_cmail_body_pane_ParamLimits

0xacac,	// (0x0002693a) bg_button_pane_cp12

0x1535,	// (0x0001d1c3) list_single_cmail_header_detail_pane_g3_ParamLimits

0x1535,	// (0x0001d1c3) list_single_cmail_header_detail_pane_g3

0x1542,	// (0x0001d1d0) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1542,	// (0x0001d1d0) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0002ba2f) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0002ba2f) list_single_cmail_header_detail_pane_t

0x1638,	// (0x0001d2c6) phacti_term_pane_t2_ParamLimits

0x1638,	// (0x0001d2c6) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0002ba39) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0002ba39) phacti_term_pane_t

0x18ec,	// (0x0001d57a) aid_size_list_single_double

0xb063,	// (0x00026cf1) popup_ezdial_listscroll_window

0xb084,	// (0x00026d12) popup_number_entry_window_cp01

0xce34,	// (0x00028ac2) bg_popup_call_pane_cp09

0x18f8,	// (0x0001d586) ezdial_list_pane

0x1900,	// (0x0001d58e) scroll_pane_cp23

0xe49a,	// (0x0002a128) bg_button_pane_cp028_ParamLimits

0xe49a,	// (0x0002a128) bg_button_pane_cp028

0xb092,	// (0x00026d20) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb092,	// (0x00026d20) cmail_ddmenu_btn01_pane_g1

0xb0a4,	// (0x00026d32) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb0a4,	// (0x00026d32) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0002bab1) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0002bab1) cmail_ddmenu_btn01_pane_g

0x1908,	// (0x0001d596) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x1908,	// (0x0001d596) cmail_ddmenu_btn01_pane_t1

0xe2a4,	// (0x00029f32) bg_button_pane_cp029_ParamLimits

0xe2a4,	// (0x00029f32) bg_button_pane_cp029

0xb0a4,	// (0x00026d32) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb0a4,	// (0x00026d32) cmail_ddmenu_btn02_pane_g1

0xb0bc,	// (0x00026d4a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb0bc,	// (0x00026d4a) cmail_ddmenu_btn02_pane_t1

0x012e,	// (0x0001bdbc) bg_button_pane_cp031_ParamLimits

0x012e,	// (0x0001bdbc) bg_button_pane_cp031

0xb0a4,	// (0x00026d32) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb0a4,	// (0x00026d32) cmail_ddmenu_btn03_pane_g1

0xb0bc,	// (0x00026d4a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb0bc,	// (0x00026d4a) cmail_ddmenu_btn03_pane_t1

0x8a1d,	// (0x000246ab) cell_dialer2_keypad_pane_t1_ParamLimits

0x8a37,	// (0x000246c5) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x8a37,	// (0x000246c5) cell_dialer2_keypad_pane_t1_copy1

0x9f94,	// (0x00025c22) ncimui_group_button_pane

0xc193,	// (0x00027e21) main_sp_fs_calendar_pane_ParamLimits

0xac4b,	// (0x000268d9) list_single_cmail_header_caption_pane_ParamLimits

0x167a,	// (0x0001d308) aid_recal_txt_sm_pane

0xbba5,	// (0x00027833) mian_recal_day_pane

0x16b3,	// (0x0001d341) popup_sp_fs_cale_preview_window_ParamLimits

0x191d,	// (0x0001d5ab) list_recal_day_pane

0x195f,	// (0x0001d5ed) list_single_recal_day_pane_ParamLimits

0x195f,	// (0x0001d5ed) list_single_recal_day_pane

0x1971,	// (0x0001d5ff) list_single_recal_day_pane_g1_ParamLimits

0x1971,	// (0x0001d5ff) list_single_recal_day_pane_g1

0x197d,	// (0x0001d60b) list_single_recal_day_pane_g2_ParamLimits

0x197d,	// (0x0001d60b) list_single_recal_day_pane_g2

0x198d,	// (0x0001d61b) list_single_recal_day_pane_g3_ParamLimits

0x198d,	// (0x0001d61b) list_single_recal_day_pane_g3

0xb0e0,	// (0x00026d6e) list_single_recal_day_pane_g4_ParamLimits

0xb0e0,	// (0x00026d6e) list_single_recal_day_pane_g4

0x1999,	// (0x0001d627) list_single_recal_day_pane_g5_ParamLimits

0x1999,	// (0x0001d627) list_single_recal_day_pane_g5

0x19a9,	// (0x0001d637) list_single_recal_day_pane_g6_ParamLimits

0x19a9,	// (0x0001d637) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0002bac0) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0002bac0) list_single_recal_day_pane_g

0x19bd,	// (0x0001d64b) list_single_recal_day_pane_t1

0x19cf,	// (0x0001d65d) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0002bacb) list_single_recal_day_pane_t

0xb100,	// (0x00026d8e) ncimui_query_button_pane_ParamLimits

0xb100,	// (0x00026d8e) ncimui_query_button_pane

0xb110,	// (0x00026d9e) ncimui_query_button_pane_t1_ParamLimits

0xb110,	// (0x00026d9e) ncimui_query_button_pane_t1

0x19e1,	// (0x0001d66f) ncimui_query_button_pane_t2_ParamLimits

0x19e1,	// (0x0001d66f) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0002bad0) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0002bad0) ncimui_query_button_pane_t

0xb123,	// (0x00026db1) query_button_pane_ParamLimits

0xb123,	// (0x00026db1) query_button_pane

0xbba5,	// (0x00027833) bg_button_pane_cp0028

0x19f4,	// (0x0001d682) query_button_pane_t1

0x3584,	// (0x0001f212) main_tport_pane_ParamLimits

0xab3d,	// (0x000267cb) bg_popup_window_pane_cp01_ParamLimits

0xab3d,	// (0x000267cb) bg_popup_window_pane_cp01

0xab4b,	// (0x000267d9) heading_pane_cp08_ParamLimits

0xab4b,	// (0x000267d9) heading_pane_cp08

0xab59,	// (0x000267e7) heading_pane_cp07_ParamLimits

0xab59,	// (0x000267e7) heading_pane_cp07

0xabc8,	// (0x00026856) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0002ba1c) cell_tport_appsw_pane_g

0xcf95,	// (0x00028c23) input_candi_list_open_g1

0xc8d4,	// (0x00028562) list_cale_time_pane_g6_ParamLimits

0xc8d4,	// (0x00028562) list_cale_time_pane_g6

0x7c1b,	// (0x000238a9) aid_size_touch_calib_1_ParamLimits

0x7c1b,	// (0x000238a9) aid_size_touch_calib_1

0x7c27,	// (0x000238b5) aid_size_touch_calib_2_ParamLimits

0x7c27,	// (0x000238b5) aid_size_touch_calib_2

0x7c35,	// (0x000238c3) aid_size_touch_calib_3_ParamLimits

0x7c35,	// (0x000238c3) aid_size_touch_calib_3

0x7c45,	// (0x000238d3) aid_size_touch_calib_4_ParamLimits

0x7c45,	// (0x000238d3) aid_size_touch_calib_4

0x7c53,	// (0x000238e1) main_touch_calib_button_group_pane_ParamLimits

0x7c53,	// (0x000238e1) main_touch_calib_button_group_pane

0x7c61,	// (0x000238ef) main_touch_calib_pane_g1_ParamLimits

0x7c6d,	// (0x000238fb) main_touch_calib_pane_g2_ParamLimits

0x7c79,	// (0x00023907) main_touch_calib_pane_g3_ParamLimits

0x7c85,	// (0x00023913) main_touch_calib_pane_g4_ParamLimits

0xf75c,	// (0x0002b3ea) main_touch_calib_pane_g_ParamLimits

0x7c91,	// (0x0002391f) main_touch_calib_pane_t1_ParamLimits

0x7caa,	// (0x00023938) main_touch_calib_pane_t2_ParamLimits

0x7cc3,	// (0x00023951) main_touch_calib_pane_t3_ParamLimits

0x7cd9,	// (0x00023967) main_touch_calib_pane_t4_ParamLimits

0x7cef,	// (0x0002397d) main_touch_calib_pane_t5_ParamLimits

0xf765,	// (0x0002b3f3) main_touch_calib_pane_t_ParamLimits

0xea44,	// (0x0002a6d2) list_single_fp_cale_pane_g3_ParamLimits

0xea44,	// (0x0002a6d2) list_single_fp_cale_pane_g3

0x3568,	// (0x0001f1f6) bg_button_pane_cp012_ParamLimits

0x3568,	// (0x0001f1f6) bg_vkb2_func_pane_cp03_ParamLimits

0x44b7,	// (0x00020145) cell_vitu2_function_top_pane_g1_ParamLimits

0x3568,	// (0x0001f1f6) bg_vkb2_func_pane_cp04_ParamLimits

0x9f1c,	// (0x00025baa) main_ncimui_button_group_pane_ParamLimits

0x9f1c,	// (0x00025baa) main_ncimui_button_group_pane

0x9f82,	// (0x00025c10) main_ncimui_pane_t3_ParamLimits

0x9f82,	// (0x00025c10) main_ncimui_pane_t3

0x15e6,	// (0x0001d274) phacti_button_group_pane

0x18ec,	// (0x0001d57a) aid_size_list_single_double_ParamLimits

0xb063,	// (0x00026cf1) popup_ezdial_listscroll_window_ParamLimits

0xb084,	// (0x00026d12) popup_number_entry_window_cp01_ParamLimits

0xb130,	// (0x00026dbe) phacti_button_pane_ParamLimits

0xb130,	// (0x00026dbe) phacti_button_pane

0xbba5,	// (0x00027833) bg_button_pane_cp14

0x1a02,	// (0x0001d690) phacti_button_pane_t1

0xb141,	// (0x00026dcf) main_touch_calib_button_pane_ParamLimits

0xb141,	// (0x00026dcf) main_touch_calib_button_pane

0xc2f0,	// (0x00027f7e) bg_button_pane_cp18_ParamLimits

0xc2f0,	// (0x00027f7e) bg_button_pane_cp18

0x1a10,	// (0x0001d69e) main_touch_calib_button_pane_t1_ParamLimits

0x1a10,	// (0x0001d69e) main_touch_calib_button_pane_t1

0x1a26,	// (0x0001d6b4) main_touch_calib_button_pane_t2_ParamLimits

0x1a26,	// (0x0001d6b4) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0002bad5) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0002bad5) main_touch_calib_button_pane_t

0xbba5,	// (0x00027833) cell_ncimui_button_pane

0xbba5,	// (0x00027833) bg_button_pane_cp032

0x1a44,	// (0x0001d6d2) cell_ncimui_button_pane_t1

0x3dc4,	// (0x0001fa52) image3_infobar_pane_ParamLimits

0x3dc4,	// (0x0001fa52) image3_infobar_pane

0xa2fb,	// (0x00025f89) fs_bigclock_status_pane_ParamLimits

0xa2fb,	// (0x00025f89) fs_bigclock_status_pane

0xa308,	// (0x00025f96) main_fs_bigclock_clock_pane_ParamLimits

0xa308,	// (0x00025f96) main_fs_bigclock_clock_pane

0xa32c,	// (0x00025fba) main_fs_bigclock_indi_pane_ParamLimits

0xa32c,	// (0x00025fba) main_fs_bigclock_indi_pane

0xa35c,	// (0x00025fea) main_fs_bigclock_swipe_pane_ParamLimits

0xa35c,	// (0x00025fea) main_fs_bigclock_swipe_pane

0xbba5,	// (0x00027833) main_fs_clock_dumped_data

0x1051,	// (0x0001ccdf) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x1051,	// (0x0001ccdf) list_single_fs_bigclock_indicator_pane_g1

0x106b,	// (0x0001ccf9) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x106b,	// (0x0001ccf9) list_single_fs_bigclock_indicator_pane_g2

0x1085,	// (0x0001cd13) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x1085,	// (0x0001cd13) list_single_fs_bigclock_indicator_pane_g3

0x109f,	// (0x0001cd2d) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x109f,	// (0x0001cd2d) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7a,	// (0x0002b908) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7a,	// (0x0002b908) list_single_fs_bigclock_indicator_pane_g

0x10c8,	// (0x0001cd56) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x10c8,	// (0x0001cd56) list_single_fs_bigclock_indicator_pane_t1

0x10f0,	// (0x0001cd7e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x10f0,	// (0x0001cd7e) list_single_fs_bigclock_indicator_pane_t2

0x1118,	// (0x0001cda6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x1118,	// (0x0001cda6) list_single_fs_bigclock_indicator_pane_t3

0x1140,	// (0x0001cdce) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x1140,	// (0x0001cdce) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc85,	// (0x0002b913) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc85,	// (0x0002b913) list_single_fs_bigclock_indicator_pane_t

0x1a52,	// (0x0001d6e0) image3_infobar_fav_pane_ParamLimits

0x1a52,	// (0x0001d6e0) image3_infobar_fav_pane

0x1a62,	// (0x0001d6f0) image3_infobar_loc_pane_ParamLimits

0x1a62,	// (0x0001d6f0) image3_infobar_loc_pane

0x1a76,	// (0x0001d704) image3_infobar_time_pane_ParamLimits

0x1a76,	// (0x0001d704) image3_infobar_time_pane

0xe6b5,	// (0x0002a343) image3_infobar_time_pane_g1

0x1a86,	// (0x0001d714) image3_infobar_time_pane_t1

0xe6b5,	// (0x0002a343) image3_infobar_loc_pane_g1

0x1a94,	// (0x0001d722) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0002bada) image3_infobar_loc_pane_g

0x1a9c,	// (0x0001d72a) image3_infobar_loc_pane_t1

0xe6b5,	// (0x0002a343) image3_infobar_fav_pane_g1

0x1aaa,	// (0x0001d738) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0002badf) image3_infobar_fav_pane_g

0x1ab2,	// (0x0001d740) fs_bigclock_status_battery_pane

0x1abb,	// (0x0001d749) fs_bigclock_status_signal_pane

0x1ac4,	// (0x0001d752) fs_bigclock_status_title_pane

0x1acd,	// (0x0001d75b) fs_bigclock_status_signal_pane_g1

0x1ad6,	// (0x0001d764) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0002bae4) fs_bigclock_status_signal_pane_g

0x1ade,	// (0x0001d76c) fs_bigclock_status_battery_pane_g1

0x1ae7,	// (0x0001d775) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0002bae9) fs_bigclock_status_battery_pane_g

0x1aef,	// (0x0001d77d) fs_bigclock_status_title_pane_t1

0xe6b5,	// (0x0002a343) main_fs_bigclock_clock_pane_g1

0xb151,	// (0x00026ddf) main_fs_bigclock_clock_pane_g2

0xb151,	// (0x00026ddf) main_fs_bigclock_clock_pane_g3

0xb151,	// (0x00026ddf) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0002baee) main_fs_bigclock_clock_pane_g

0xb159,	// (0x00026de7) main_fs_bigclock_clock_pane_t1

0xb167,	// (0x00026df5) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0002baf7) main_fs_bigclock_clock_pane_t

0x1afd,	// (0x0001d78b) list_single_fs_bigclock_indicator_pane_ParamLimits

0x1afd,	// (0x0001d78b) list_single_fs_bigclock_indicator_pane

0xb176,	// (0x00026e04) list_single_fs_bigclock_pane_ParamLimits

0xb176,	// (0x00026e04) list_single_fs_bigclock_pane

0x1b17,	// (0x0001d7a5) main_fs_bigclock_indicator_pane_t1

0x1b26,	// (0x0001d7b4) list_single_fs_bigclock_pane_g1

0x1b2e,	// (0x0001d7bc) list_single_fs_bigclock_pane_t1

0xe6b5,	// (0x0002a343) main_fs_bigclock_swipe_pane_g1

0x1b71,	// (0x0001d7ff) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0002bb08) main_fs_bigclock_swipe_pane_g

0x1b79,	// (0x0001d807) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x1b79,	// (0x0001d807) main_fs_bigclock_swipe_pane_t1

0x6631,	// (0x000222bf) call_type_pane_ParamLimits

0xbba5,	// (0x00027833) main_btmg_pane

0x17b0,	// (0x0001d43e) list_single_cale_mrui_row_pane_g2_ParamLimits

0x17b0,	// (0x0001d43e) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0002ba7b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0002ba7b) list_single_cale_mrui_row_pane_g

0x1946,	// (0x0001d5d4) list_recal_vselct_arw_lo_pane

0x194e,	// (0x0001d5dc) list_recal_vselct_arw_up_pane

0x1956,	// (0x0001d5e4) list_recal_vselct_pane

0xb1d7,	// (0x00026e65) btmg_button_pane

0xb1e3,	// (0x00026e71) main_btmg_pane_g1

0xbba5,	// (0x00027833) bg_button_pane_cp044

0x1b96,	// (0x0001d824) btmg_button_pane_t1

0xe290,	// (0x00029f1e) aid_listscroll_gen

0xc193,	// (0x00027e21) main_cntbar_detail_pane

0x150b,	// (0x0001d199) list_cmail_folder_pane

0x0148,	// (0x0001bdd6) sp_fs_scroll_pane_cp03_ParamLimits

0xac4b,	// (0x000268d9) list_single_fs_dyc_pane_cp01_ParamLimits

0xac4b,	// (0x000268d9) list_single_fs_dyc_pane_cp01

0x1ba4,	// (0x0001d832) aid_size_cmail_indent

0x1bad,	// (0x0001d83b) list_single_dyc_row_pane_cp01

0xb20b,	// (0x00026e99) cntbar_detail_list_pane_ParamLimits

0xb20b,	// (0x00026e99) cntbar_detail_list_pane

0xb245,	// (0x00026ed3) main_cntbar_detail_cont_pane_ParamLimits

0xb245,	// (0x00026ed3) main_cntbar_detail_cont_pane

0x6556,	// (0x000221e4) scroll_pane_cp032_ParamLimits

0x6556,	// (0x000221e4) scroll_pane_cp032

0xb251,	// (0x00026edf) cntbar_detail_list_event_pane_ParamLimits

0xb251,	// (0x00026edf) cntbar_detail_list_event_pane

0xb217,	// (0x00026ea5) cntbar_detail_list_shct_pane

0xc75f,	// (0x000283ed) aid_list_gen

0x1bb6,	// (0x0001d844) aid_scroll

0x1bbf,	// (0x0001d84d) aid_size_touch_scroll_bar

0x1248,	// (0x0001ced6) aid_list_double

0xb265,	// (0x00026ef3) aid_list_single

0x9737,	// (0x000253c5) aid_list_single_lg

0xb26e,	// (0x00026efc) aid_list_z_g_a_sm

0xb276,	// (0x00026f04) aid_list_z_g_d

0xb27e,	// (0x00026f0c) aid_txt_z_prm

0xb28c,	// (0x00026f1a) aid_txt_z_prm_cp01

0xb29a,	// (0x00026f28) aid_txt_z_sec

0xb2a8,	// (0x00026f36) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb2a8,	// (0x00026f36) main_cntbar_detail_cont_pane_g1

0xb2b5,	// (0x00026f43) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb2b5,	// (0x00026f43) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0002bb0d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0002bb0d) main_cntbar_detail_cont_pane_g

0x1bc8,	// (0x0001d856) main_cntbar_detail_cont_pane_t1

0x1bd6,	// (0x0001d864) main_cntbar_detail_cont_pane_t2

0x1be4,	// (0x0001d872) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0002bb12) main_cntbar_detail_cont_pane_t

0xb2c1,	// (0x00026f4f) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb2c1,	// (0x00026f4f) cell_cntbar_detail_list_shct_pane

0x1bf2,	// (0x0001d880) cntbar_detail_list_shct_pane_g1

0x1bfb,	// (0x0001d889) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0002bb19) cntbar_detail_list_shct_pane_g

0xb2d5,	// (0x00026f63) cntbar_detail_list_event_pane_g1_ParamLimits

0xb2d5,	// (0x00026f63) cntbar_detail_list_event_pane_g1

0xb2e1,	// (0x00026f6f) cntbar_detail_list_event_pane_g2_ParamLimits

0xb2e1,	// (0x00026f6f) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0002bb1e) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0002bb1e) cntbar_detail_list_event_pane_g

0xb34d,	// (0x00026fdb) cntbar_detail_list_event_pane_t1_ParamLimits

0xb34d,	// (0x00026fdb) cntbar_detail_list_event_pane_t1

0xb362,	// (0x00026ff0) cntbar_detail_list_event_pane_t2_ParamLimits

0xb362,	// (0x00026ff0) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0002bb2b) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0002bb2b) cntbar_detail_list_event_pane_t

0xe6b5,	// (0x0002a343) cell_cntbar_detail_list_shct_pane_g1

0x695e,	// (0x000225ec) navi_pane_mv_g3

0xc193,	// (0x00027e21) main_cntbar_detail_pane_ParamLimits

0xbba5,	// (0x00027833) main_notif_wgt_pane

0x3b05,	// (0x0001f793) aid_tch_main_mp4_pane_g4

0x3d3a,	// (0x0001f9c8) popup_slider_window_cp02

0x193c,	// (0x0001d5ca) list_recal_day_event_pane

0xb1eb,	// (0x00026e79) cntbar_detail_btn_pane_ParamLimits

0xb1eb,	// (0x00026e79) cntbar_detail_btn_pane

0xb1fb,	// (0x00026e89) cntbar_detail_btn_pane_cp01_ParamLimits

0xb1fb,	// (0x00026e89) cntbar_detail_btn_pane_cp01

0xb217,	// (0x00026ea5) cntbar_detail_list_shct_pane_ParamLimits

0xb223,	// (0x00026eb1) cntbar_detail_pane_g1_ParamLimits

0xb223,	// (0x00026eb1) cntbar_detail_pane_g1

0xb22f,	// (0x00026ebd) cntbar_detail_pane_t1_ParamLimits

0xb22f,	// (0x00026ebd) cntbar_detail_pane_t1

0xb2ed,	// (0x00026f7b) cntbar_detail_list_event_pane_g3_ParamLimits

0xb2ed,	// (0x00026f7b) cntbar_detail_list_event_pane_g3

0xb305,	// (0x00026f93) cntbar_detail_list_event_pane_g4_ParamLimits

0xb305,	// (0x00026f93) cntbar_detail_list_event_pane_g4

0xb31d,	// (0x00026fab) cntbar_detail_list_event_pane_g5_ParamLimits

0xb31d,	// (0x00026fab) cntbar_detail_list_event_pane_g5

0xb335,	// (0x00026fc3) cntbar_detail_list_event_pane_g6_ParamLimits

0xb335,	// (0x00026fc3) cntbar_detail_list_event_pane_g6

0xb377,	// (0x00027005) cntbar_detail_list_event_pane_t3_ParamLimits

0xb377,	// (0x00027005) cntbar_detail_list_event_pane_t3

0xb389,	// (0x00027017) popup_notif_wgt_window_ParamLimits

0xb389,	// (0x00027017) popup_notif_wgt_window

0xb399,	// (0x00027027) popup_submenu_window_cp01_ParamLimits

0xb399,	// (0x00027027) popup_submenu_window_cp01

0xce34,	// (0x00028ac2) bg_popup_window_pane_cp10

0x1c04,	// (0x0001d892) listscroll_notif_wgt_pane

0x1c16,	// (0x0001d8a4) list_notif_wgt_window

0x1c1f,	// (0x0001d8ad) scroll_pane_cp033

0xb3ab,	// (0x00027039) list_notif_wgt_row_pane_ParamLimits

0xb3ab,	// (0x00027039) list_notif_wgt_row_pane

0x1c28,	// (0x0001d8b6) aid_size_list_notif_wgt_del

0x1c35,	// (0x0001d8c3) list_notif_wgt_row_pane_g1

0x1c41,	// (0x0001d8cf) list_notif_wgt_row_pane_g2

0x1c4d,	// (0x0001d8db) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0002bb32) list_notif_wgt_row_pane_g

0x1c5a,	// (0x0001d8e8) list_notif_wgt_row_pane_t1

0x1c6f,	// (0x0001d8fd) list_notif_wgt_row_pane_t2

0x1c81,	// (0x0001d90f) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0002bb39) list_notif_wgt_row_pane_t

0x040f,	// (0x0001c09d) list_recal_day_event_pane_g1

0x1c93,	// (0x0001d921) list_recal_day_event_pane_t1

0xbba5,	// (0x00027833) bg_button_pane_cp045

0xb3bc,	// (0x0002704a) cntbar_detail_btn_pane_t1

0xe2a4,	// (0x00029f32) main_callh_pane_ParamLimits

0xe2a4,	// (0x00029f32) main_callh_pane

0xbba5,	// (0x00027833) main_coverflow0_pane

0xbba5,	// (0x00027833) main_wgtman_pane

0xa374,	// (0x00026002) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xa374,	// (0x00026002) main_fs_bigclock_unlock_btn_pane

0xabc0,	// (0x0002684e) bg_button_pane_cp16

0xabd0,	// (0x0002685e) cell_tport_appsw_pane_g3

0xb3ca,	// (0x00027058) cf0_flow_pane_ParamLimits

0xb3ca,	// (0x00027058) cf0_flow_pane

0x1ca2,	// (0x0001d930) listscroll_cf0_pane

0x1cad,	// (0x0001d93b) main_cf0_pane_g1

0xb3d9,	// (0x00027067) main_cf0_pane_t1_ParamLimits

0xb3d9,	// (0x00027067) main_cf0_pane_t1

0xb3ed,	// (0x0002707b) main_cf0_pane_t2_ParamLimits

0xb3ed,	// (0x0002707b) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0002bb45) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0002bb45) main_cf0_pane_t

0x1cbf,	// (0x0001d94d) scroll_pane_cp11

0xb401,	// (0x0002708f) cf0_flow_pane_g1

0xb409,	// (0x00027097) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0002bb4a) cf0_flow_pane_g

0xb411,	// (0x0002709f) cf0_flow_pane_t1

0xbba5,	// (0x00027833) main_call6_pane

0xbba5,	// (0x00027833) main_calllock_pane

0xb41f,	// (0x000270ad) call6_btn_grp_pane_ParamLimits

0xb41f,	// (0x000270ad) call6_btn_grp_pane

0xb42e,	// (0x000270bc) call6_pane_g1_ParamLimits

0xb42e,	// (0x000270bc) call6_pane_g1

0xb43d,	// (0x000270cb) popup_call6_1st_window_ParamLimits

0xb43d,	// (0x000270cb) popup_call6_1st_window

0xb44b,	// (0x000270d9) popup_call6_2nd_window_ParamLimits

0xb44b,	// (0x000270d9) popup_call6_2nd_window

0xb459,	// (0x000270e7) cell_call6_btn_pane_ParamLimits

0xb459,	// (0x000270e7) cell_call6_btn_pane

0xce34,	// (0x00028ac2) bg_popup_call2_in_pane_cp03

0x1cca,	// (0x0001d958) popup_call6_1st_window_g1

0x1cd2,	// (0x0001d960) popup_call6_1st_window_g2

0x1cda,	// (0x0001d968) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0002bb4f) popup_call6_1st_window_g

0x1ce2,	// (0x0001d970) popup_call6_1st_window_t1

0x1cf1,	// (0x0001d97f) popup_call6_1st_window_t2

0x1d01,	// (0x0001d98f) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0002bb56) popup_call6_1st_window_t

0xce34,	// (0x00028ac2) bg_popup_call2_in_pane_cp04

0x1cca,	// (0x0001d958) popup_call6_2nd_window_g1

0x1cd2,	// (0x0001d960) popup_call6_2nd_window_g2

0x1cda,	// (0x0001d968) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0002bb4f) popup_call6_2nd_window_g

0x1ce2,	// (0x0001d970) popup_call6_2nd_window_t1

0xbba5,	// (0x00027833) bg_button_pane_cp15

0x1d11,	// (0x0001d99f) cell_call6_btn_pane_g1

0x1d1a,	// (0x0001d9a8) cell_call6_btn_pane_t1

0xb468,	// (0x000270f6) listscroll_wgtman_pane_ParamLimits

0xb468,	// (0x000270f6) listscroll_wgtman_pane

0xb486,	// (0x00027114) wgtman_btn_pane_ParamLimits

0xb486,	// (0x00027114) wgtman_btn_pane

0xcceb,	// (0x00028979) aid_scroll_copy1

0x1d29,	// (0x0001d9b7) list_wgtman_pane

0xb4bb,	// (0x00027149) wgtman_btn_pane_g1_ParamLimits

0xb4bb,	// (0x00027149) wgtman_btn_pane_g1

0xb4e3,	// (0x00027171) wgtman_btn_pane_t1_ParamLimits

0xb4e3,	// (0x00027171) wgtman_btn_pane_t1

0x1d33,	// (0x0001d9c1) wgtman_btn_pane_t2_ParamLimits

0x1d33,	// (0x0001d9c1) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0002bb5d) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0002bb5d) wgtman_btn_pane_t

0xb51a,	// (0x000271a8) listrow_wgtman_pane_ParamLimits

0xb51a,	// (0x000271a8) listrow_wgtman_pane

0xb532,	// (0x000271c0) listrow_wgtman_pane_g1

0xb53f,	// (0x000271cd) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0002bb62) listrow_wgtman_pane_g

0xb55d,	// (0x000271eb) listrow_wgtman_pane_t1

0xb575,	// (0x00027203) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0002bb67) listrow_wgtman_pane_t

0xb59b,	// (0x00027229) wait_bar_pane_cp09

0x1d4a,	// (0x0001d9d8) main_calllock_btn_pane

0x1d54,	// (0x0001d9e2) main_calllock_pane_g1

0xbba5,	// (0x00027833) bg_button_pane_cp17

0x1d60,	// (0x0001d9ee) main_calllock_btn_pane_g1

0x1d69,	// (0x0001d9f7) main_calllock_btn_pane_t1

0xbba5,	// (0x00027833) main_dialer3_pane

0xbba5,	// (0x00027833) main_fmrd2_pane

0xe6b5,	// (0x0002a343) main_fs_bigclock_unlock_btn_pane_g1

0x1d80,	// (0x0001da0e) main_fs_bigclock_unlock_btn_pane_t1

0xb5ad,	// (0x0002723b) area_fmrd2_info_pane_ParamLimits

0xb5ad,	// (0x0002723b) area_fmrd2_info_pane

0xb5bb,	// (0x00027249) area_fmrd2_visual_pane_ParamLimits

0xb5bb,	// (0x00027249) area_fmrd2_visual_pane

0xb5c9,	// (0x00027257) fmrd2_indi_pane_ParamLimits

0xb5c9,	// (0x00027257) fmrd2_indi_pane

0xb5d6,	// (0x00027264) area_fmrd2_visual_pane_g1

0xb5de,	// (0x0002726c) area_fmrd2_visual_pane_t1

0xb5ee,	// (0x0002727c) area_fmrd2_visual_pane_t2

0xb5fe,	// (0x0002728c) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0002bb71) area_fmrd2_visual_pane_t

0xb60e,	// (0x0002729c) area_fmrd2_info_pane_g1

0xb616,	// (0x000272a4) area_fmrd2_info_pane_t1

0xb626,	// (0x000272b4) area_fmrd2_info_pane_t2

0xb636,	// (0x000272c4) area_fmrd2_info_pane_t3

0xb646,	// (0x000272d4) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0002bb78) area_fmrd2_info_pane_t

0xb654,	// (0x000272e2) fmrd2_indi_pane_t1

0xb664,	// (0x000272f2) fmrd2_indi_pane_t2

0xb674,	// (0x00027302) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0002bb81) fmrd2_indi_pane_t

0x10ae,	// (0x0001cd3c) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x10ae,	// (0x0001cd3c) list_single_fs_bigclock_indicator_pane_g5

0x1155,	// (0x0001cde3) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x1155,	// (0x0001cde3) list_single_fs_bigclock_indicator_pane_t5

0xadb8,	// (0x00026a46) aid_cell_bcale_month_pane_ParamLimits

0xadb8,	// (0x00026a46) aid_cell_bcale_month_pane

0xadd6,	// (0x00026a64) bcale_month_pane_ParamLimits

0xadd6,	// (0x00026a64) bcale_month_pane

0xadf4,	// (0x00026a82) bcale_preview_pane_ParamLimits

0xadf4,	// (0x00026a82) bcale_preview_pane

0x1b2e,	// (0x0001d7bc) list_single_fs_bigclock_pane_t1_ParamLimits

0x1b4d,	// (0x0001d7db) list_single_fs_bigclock_pane_t2_ParamLimits

0x1b4d,	// (0x0001d7db) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0002bb03) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0002bb03) list_single_fs_bigclock_pane_t

0x1d78,	// (0x0001da06) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0002bb6c) main_fs_bigclock_unlock_btn_pane_g

0xb682,	// (0x00027310) aid_dia3_key_size_ParamLimits

0xb682,	// (0x00027310) aid_dia3_key_size

0xb68e,	// (0x0002731c) aid_dia3_listrow_size_ParamLimits

0xb68e,	// (0x0002731c) aid_dia3_listrow_size

0xb69e,	// (0x0002732c) dia3_keypad_fun_pane_ParamLimits

0xb69e,	// (0x0002732c) dia3_keypad_fun_pane

0xb6b0,	// (0x0002733e) dia3_keypad_num_pane_ParamLimits

0xb6b0,	// (0x0002733e) dia3_keypad_num_pane

0xb6c2,	// (0x00027350) dia3_listscroll_pane_ParamLimits

0xb6c2,	// (0x00027350) dia3_listscroll_pane

0xb6d0,	// (0x0002735e) dia3_numentry_pane_ParamLimits

0xb6d0,	// (0x0002735e) dia3_numentry_pane

0x1d8e,	// (0x0001da1c) dia3_list_pane

0x1d99,	// (0x0001da27) scroll_pane_cp12

0xbba5,	// (0x00027833) bg_dia3_numentry_pane

0xb6de,	// (0x0002736c) dia3_numentry_pane_t1

0xb6ed,	// (0x0002737b) cell_dia3_key_num_pane

0xb6f5,	// (0x00027383) cell_dia3_key0_fun_pane_ParamLimits

0xb6f5,	// (0x00027383) cell_dia3_key0_fun_pane

0xb702,	// (0x00027390) cell_dia3_key1_fun_pane_ParamLimits

0xb702,	// (0x00027390) cell_dia3_key1_fun_pane

0xb70f,	// (0x0002739d) dia3_listrow_pane

0x0dbe,	// (0x0001ca4c) bg_dia3_numentry_pane_g1

0xbba5,	// (0x00027833) bg_button_pane_cp21

0x1da4,	// (0x0001da32) cell_dia3_key_num_pane_t1

0x1db2,	// (0x0001da40) cell_dia3_key_num_pane_t2

0x1dc1,	// (0x0001da4f) cell_dia3_key_num_pane_t3

0x1dd0,	// (0x0001da5e) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0002bb88) cell_dia3_key_num_pane_t

0xbba5,	// (0x00027833) bg_button_pane_cp19

0xb71c,	// (0x000273aa) cell_dia3_key0_fun_pane_g1

0xbba5,	// (0x00027833) bg_button_pane_cp20

0xb724,	// (0x000273b2) cell_dia3_key1_fun_pane_g1

0xb72c,	// (0x000273ba) area_left_week_number_pane

0xb73f,	// (0x000273cd) area_top_day_name_pane

0xb74d,	// (0x000273db) frame_month_view_pane

0x1ddf,	// (0x0001da6d) grid_month_view_pane

0xb762,	// (0x000273f0) cell_top_day_name_pane_ParamLimits

0xb762,	// (0x000273f0) cell_top_day_name_pane

0xb77c,	// (0x0002740a) cell_area_left_week_number_pane_ParamLimits

0xb77c,	// (0x0002740a) cell_area_left_week_number_pane

0xb79f,	// (0x0002742d) cell_month_view_pane_ParamLimits

0xb79f,	// (0x0002742d) cell_month_view_pane

0x1ded,	// (0x0001da7b) frm_month_g1

0xb7cb,	// (0x00027459) frm_month_g2

0xb7dc,	// (0x0002746a) frm_month_g3

0xb7ed,	// (0x0002747b) frm_month_g4

0xb7fe,	// (0x0002748c) frm_month_g5

0xb811,	// (0x0002749f) frm_month_g6

0xb824,	// (0x000274b2) frm_month_g7

0x1dfa,	// (0x0001da88) frm_month_g8

0xb837,	// (0x000274c5) frm_month_g9

0xb844,	// (0x000274d2) frm_month_g10

0xb851,	// (0x000274df) frm_month_g11

0xb85e,	// (0x000274ec) frm_month_g12

0xb86b,	// (0x000274f9) frm_month_g13

0xb878,	// (0x00027506) frm_month_g14

0xb887,	// (0x00027515) frm_month_g15

0xb896,	// (0x00027524) frm_month_g16

0x000f,

0xff03,	// (0x0002bb91) frm_month_g

0x1e07,	// (0x0001da95) cell_top_day_name_pane_t1

0xb8a5,	// (0x00027533) cell_area_left_week_number_pane_g1

0xb8b4,	// (0x00027542) cell_area_left_week_number_pane_t1

0xe918,	// (0x0002a5a6) cell_month_view_pane_g1

0xb8ca,	// (0x00027558) cell_month_view_pane_t1

0xbba5,	// (0x00027833) main_fps_pane

0x1342,	// (0x0001cfd0) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x1342,	// (0x0001cfd0) cmail_ddmenu_btn02_pane_cp1

0x135e,	// (0x0001cfec) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x135e,	// (0x0001cfec) cmail_ddmenu_btn02_pane_cp2

0xb0b0,	// (0x00026d3e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb0b0,	// (0x00026d3e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0002bab6) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0002bab6) cmail_ddmenu_btn02_pane_g

0xb0ce,	// (0x00026d5c) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb0ce,	// (0x00026d5c) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0002babb) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0002babb) cmail_ddmenu_btn02_pane_t

0xb8e0,	// (0x0002756e) fps_text_pane_ParamLimits

0xb8e0,	// (0x0002756e) fps_text_pane

0xb8ed,	// (0x0002757b) main_fps_pane_g1_ParamLimits

0xb8ed,	// (0x0002757b) main_fps_pane_g1

0xb8fb,	// (0x00027589) wait_bar_pane_cp010_ParamLimits

0xb8fb,	// (0x00027589) wait_bar_pane_cp010

0xb907,	// (0x00027595) fps_text_pane_t1_ParamLimits

0xb907,	// (0x00027595) fps_text_pane_t1

0x8b30,	// (0x000247be) cam4_image_uncrop_pane_g1

0x8b39,	// (0x000247c7) cam4_image_uncrop_pane_g2

0x8b42,	// (0x000247d0) cam4_image_uncrop_pane_g3

0x8b4b,	// (0x000247d9) cam4_image_uncrop_pane_g4

0x0003,

0xf8f4,	// (0x0002b582) cam4_image_uncrop_pane_g

0xb70f,	// (0x0002739d) dia3_listrow_pane_ParamLimits

0xbba5,	// (0x00027833) main_phob2_pane

0xaba2,	// (0x00026830) cell_tport_appsw_pane_cp02_ParamLimits

0xaba2,	// (0x00026830) cell_tport_appsw_pane_cp02

0xabb1,	// (0x0002683f) cell_tport_appsw_pane_cp03_ParamLimits

0xabb1,	// (0x0002683f) cell_tport_appsw_pane_cp03

0xbba5,	// (0x00027833) phob2_contact_card_pane

0xbba5,	// (0x00027833) phob2_listscroll_pane

0x1e1a,	// (0x0001daa8) phob2_list_pane

0x1e22,	// (0x0001dab0) scroll_pane_cp034

0xb920,	// (0x000275ae) phob2_cc_data_pane_ParamLimits

0xb920,	// (0x000275ae) phob2_cc_data_pane

0xb93a,	// (0x000275c8) phob2_cc_listscroll_pane_ParamLimits

0xb93a,	// (0x000275c8) phob2_cc_listscroll_pane

0xb954,	// (0x000275e2) list_double_large_graphic_phob2_pane_ParamLimits

0xb954,	// (0x000275e2) list_double_large_graphic_phob2_pane

0xb972,	// (0x00027600) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xb972,	// (0x00027600) list_double_large_graphic_phob2_pane_g1

0x1e2a,	// (0x0001dab8) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1e2a,	// (0x0001dab8) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0002bbb2) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0002bbb2) list_double_large_graphic_phob2_pane_g

0xb988,	// (0x00027616) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xb988,	// (0x00027616) list_double_large_graphic_phob2_pane_t1

0xb99d,	// (0x0002762b) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xb99d,	// (0x0002762b) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0002bbb7) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0002bbb7) list_double_large_graphic_phob2_pane_t

0xbba5,	// (0x00027833) list_highlight_pane_cp024

0x1e36,	// (0x0001dac4) phob2_cc_button_pane

0xb9af,	// (0x0002763d) phob2_cc_data_pane_g1_ParamLimits

0xb9af,	// (0x0002763d) phob2_cc_data_pane_g1

0xb9bb,	// (0x00027649) phob2_cc_data_pane_g2_ParamLimits

0xb9bb,	// (0x00027649) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0002bbbc) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0002bbbc) phob2_cc_data_pane_g

0xb9c7,	// (0x00027655) phob2_cc_data_pane_t1_ParamLimits

0xb9c7,	// (0x00027655) phob2_cc_data_pane_t1

0xb9d9,	// (0x00027667) phob2_cc_data_pane_t2_ParamLimits

0xb9d9,	// (0x00027667) phob2_cc_data_pane_t2

0xb9eb,	// (0x00027679) phob2_cc_data_pane_t3_ParamLimits

0xb9eb,	// (0x00027679) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0002bbc1) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0002bbc1) phob2_cc_data_pane_t

0x1e3e,	// (0x0001dacc) phob2_cc_list_pane_ParamLimits

0x1e3e,	// (0x0001dacc) phob2_cc_list_pane

0x04ba,	// (0x0001c148) scroll_pane_cp035_ParamLimits

0x04ba,	// (0x0001c148) scroll_pane_cp035

0xc193,	// (0x00027e21) bg_button_pane_cp033

0x1e4a,	// (0x0001dad8) phob2_cc_button_pane_g1

0x1e56,	// (0x0001dae4) phob2_cc_button_pane_t1

0x1e6b,	// (0x0001daf9) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0002bbc8) phob2_cc_button_pane_t

0xb9fd,	// (0x0002768b) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb9fd,	// (0x0002768b) list_double_large_graphic_phob2_cc_pane

0xba24,	// (0x000276b2) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xba24,	// (0x000276b2) list_double_large_graphic_phob2_cc_pane_g1

0xba35,	// (0x000276c3) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xba35,	// (0x000276c3) list_double_large_graphic_phob2_cc_pane_g2

0xba44,	// (0x000276d2) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xba44,	// (0x000276d2) list_double_large_graphic_phob2_cc_pane_g3

0xba53,	// (0x000276e1) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xba53,	// (0x000276e1) list_double_large_graphic_phob2_cc_pane_g4

0xba64,	// (0x000276f2) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xba64,	// (0x000276f2) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0002bbcd) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0002bbcd) list_double_large_graphic_phob2_cc_pane_g

0xba73,	// (0x00027701) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xba73,	// (0x00027701) list_double_large_graphic_phob2_cc_pane_t1

0xba9c,	// (0x0002772a) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xba9c,	// (0x0002772a) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0002bbd8) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0002bbd8) list_double_large_graphic_phob2_cc_pane_t

0x1e7d,	// (0x0001db0b) list_highlight_pane_cp025_ParamLimits

0x1e7d,	// (0x0001db0b) list_highlight_pane_cp025

0xc193,	// (0x00027e21) bg_button_pane_cp033_ParamLimits

0x1e4a,	// (0x0001dad8) phob2_cc_button_pane_g1_ParamLimits

0x1e56,	// (0x0001dae4) phob2_cc_button_pane_t1_ParamLimits

0x1e6b,	// (0x0001daf9) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0002bbc8) phob2_cc_button_pane_t_ParamLimits

0x4721,	// (0x000203af) popup_wgtman_window

0x0256,	// (0x0001bee4) scroll_pane_cp038

0xb4a3,	// (0x00027131) wgtman_btn_pane_cp_01_ParamLimits

0xb4a3,	// (0x00027131) wgtman_btn_pane_cp_01

0x1e8b,	// (0x0001db19) wgtman_content_pane

0x1e94,	// (0x0001db22) wgtman_heading_pane

0xbba5,	// (0x00027833) bg_heading_pane_cp02

0x1e9d,	// (0x0001db2b) wgtman_heading_pane_g1

0x1ea5,	// (0x0001db33) wgtman_heading_pane_t1

0x1eb3,	// (0x0001db41) scroll_pane_cp036

0x1ebb,	// (0x0001db49) wgtman_list_pane

0x1ec3,	// (0x0001db51) wgtman_list_pane_t1_ParamLimits

0x1ec3,	// (0x0001db51) wgtman_list_pane_t1

0x3f20,	// (0x0001fbae) cam4_grid_pane

0x929c,	// (0x00024f2a) bg_button_pane_cp015_ParamLimits

0x92ae,	// (0x00024f3c) bg_button_pane_cp016_ParamLimits

0x92c1,	// (0x00024f4f) bg_button_pane_cp017_ParamLimits

0x9317,	// (0x00024fa5) popup_vitu2_query_window_g3_ParamLimits

0x9317,	// (0x00024fa5) popup_vitu2_query_window_g3

0x93d2,	// (0x00025060) popup_vitu2_query_window_t6_ParamLimits

0x93d2,	// (0x00025060) popup_vitu2_query_window_t6

0x93fd,	// (0x0002508b) popup_vitu2_query_window_t7_ParamLimits

0x93fd,	// (0x0002508b) popup_vitu2_query_window_t7

0x1841,	// (0x0001d4cf) cam4_grid_pane_g1

0x184a,	// (0x0001d4d8) cam4_grid_pane_g2

0x1edd,	// (0x0001db6b) cam4_grid_pane_g3

0x1ee6,	// (0x0001db74) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0002bbdd) cam4_grid_pane_g

0x530c,	// (0x00020f9a) aid_placing_vt_slider_lsc_ParamLimits

0x5658,	// (0x000212e6) vidtel_button_pane_ParamLimits

0x5658,	// (0x000212e6) vidtel_button_pane

0x1ef1,	// (0x0001db7f) bg_button_pane_cp034

0xbac5,	// (0x00027753) vidtel_button_pane_g1

0x1efb,	// (0x0001db89) vidtel_button_pane_t1

0x03c3,	// (0x0001c051) aid_size_vtel_slider_touch

0x04ba,	// (0x0001c148) scroll_pane_cp039

0x0dfc,	// (0x0001ca8a) ncim_query_button_pane_cp01_ParamLimits

0x0e1b,	// (0x0001caa9) ncimui_query_pane_g1_ParamLimits

0xc193,	// (0x00027e21) input_focus_pane_cp012_ParamLimits

0x0e40,	// (0x0001cace) ncim_query_entry_pane_t1_ParamLimits

0x04ba,	// (0x0001c148) scroll_pane_cp039_ParamLimits

0x68d0,	// (0x0002255e) navi_pane_bcale_mc_g1

0x68d8,	// (0x00022566) navi_pane_bcale_mc_t1

0x13a7,	// (0x0001d035) main_sp_fs_email_pane_g1

0x13b3,	// (0x0001d041) main_sp_fs_email_pane_g2

0x0001,

0xfceb,	// (0x0002b979) main_sp_fs_email_pane_g

0x17bc,	// (0x0001d44a) list_single_cale_mrui_row_pane_g3_ParamLimits

0x17bc,	// (0x0001d44a) list_single_cale_mrui_row_pane_g3

0xb0f6,	// (0x00026d84) list_single_recal_day_pane_g5_event_pane

0x19b5,	// (0x0001d643) list_single_recal_day_pane_g7

0x1f09,	// (0x0001db97) list_recal_day_event_pane_cp01

0x1f12,	// (0x0001dba0) list_recal_vselct_arw_lo_pane_cp01

0x1f1a,	// (0x0001dba8) list_recal_vselct_arw_up_pane_cp01

0x1f22,	// (0x0001dbb0) list_recal_vselct_pane_cp01

0x040f,	// (0x0001c09d) list_recal_day_event_pane_cp01_g1

0x1f2c,	// (0x0001dbba) list_recal_day_event_pane_cp01_t1

0x19bd,	// (0x0001d64b) list_single_recal_day_pane_t1_ParamLimits

0x19cf,	// (0x0001d65d) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0002bacb) list_single_recal_day_pane_t_ParamLimits

0xc22b,	// (0x00027eb9) bg_notes_pane_ParamLimits

0xc2ce,	// (0x00027f5c) list_notes_pane_ParamLimits

0x49a8,	// (0x00020636) scroll_pane_cp06_ParamLimits

0xc2f0,	// (0x00027f7e) main_notes_pane_ParamLimits

0xbba5,	// (0x00027833) main_welc_pane

0xbacd,	// (0x0002775b) main_welc_body_pane_ParamLimits

0xbacd,	// (0x0002775b) main_welc_body_pane

0xbae7,	// (0x00027775) main_welc_opti_pane_ParamLimits

0xbae7,	// (0x00027775) main_welc_opti_pane

0xbb1a,	// (0x000277a8) main_welc_pane_t1_ParamLimits

0xbb1a,	// (0x000277a8) main_welc_pane_t1

0xbb34,	// (0x000277c2) main_welc_body_row_pane_ParamLimits

0xbb34,	// (0x000277c2) main_welc_body_row_pane

0x012e,	// (0x0001bdbc) main_welc_opti_row_pane_ParamLimits

0x012e,	// (0x0001bdbc) main_welc_opti_row_pane

0x1f3a,	// (0x0001dbc8) main_welc_opti_row_pane_g1

0x1f42,	// (0x0001dbd0) main_welc_opti_row_pane_t1

0x1f52,	// (0x0001dbe0) main_welc_body_row_pane_t1

0x1c0e,	// (0x0001d89c) popup_notif_wgt_heading_pane

0x1c28,	// (0x0001d8b6) aid_size_list_notif_wgt_del_ParamLimits

0x1c35,	// (0x0001d8c3) list_notif_wgt_row_pane_g1_ParamLimits

0x1c41,	// (0x0001d8cf) list_notif_wgt_row_pane_g2_ParamLimits

0x1c4d,	// (0x0001d8db) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0002bb32) list_notif_wgt_row_pane_g_ParamLimits

0x1c5a,	// (0x0001d8e8) list_notif_wgt_row_pane_t1_ParamLimits

0x1c6f,	// (0x0001d8fd) list_notif_wgt_row_pane_t2_ParamLimits

0x1c81,	// (0x0001d90f) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0002bb39) list_notif_wgt_row_pane_t_ParamLimits

0xb532,	// (0x000271c0) listrow_wgtman_pane_g1_ParamLimits

0xb53f,	// (0x000271cd) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0002bb62) listrow_wgtman_pane_g_ParamLimits

0xb55d,	// (0x000271eb) listrow_wgtman_pane_t1_ParamLimits

0xb575,	// (0x00027203) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0002bb67) listrow_wgtman_pane_t_ParamLimits

0xb59b,	// (0x00027229) wait_bar_pane_cp09_ParamLimits

0xbba5,	// (0x00027833) bg_popup_heading_pane_cp02

0x1f61,	// (0x0001dbef) popup_notif_wgt_heading_pane_g1

0x1f69,	// (0x0001dbf7) popup_notif_wgt_heading_pane_t1

0xbba5,	// (0x00027833) main_vids_pane

0xbba5,	// (0x00027833) vids_listscroll_pane

0xbb59,	// (0x000277e7) scroll_pane_cp040

0xbba5,	// (0x00027833) vids_list_pane

0xbb64,	// (0x000277f2) vids_list_double_pane_ParamLimits

0xbb64,	// (0x000277f2) vids_list_double_pane

0xbb7e,	// (0x0002780c) vids_list_double_pane_g1

0xbb87,	// (0x00027815) vids_list_double_pane_t1

0xbb97,	// (0x00027825) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0002bbeb) vids_list_double_pane_t

0x3568,	// (0x0001f1f6) main_ncimui_pane_ParamLimits

0x9f34,	// (0x00025bc2) main_ncimui_pane_g1_ParamLimits

0x9f40,	// (0x00025bce) main_ncimui_pane_g2_ParamLimits

0x9f40,	// (0x00025bce) main_ncimui_pane_g2

0x0001,

0xfbf0,	// (0x0002b87e) main_ncimui_pane_g_ParamLimits

0xfbf0,	// (0x0002b87e) main_ncimui_pane_g

0xbb00,	// (0x0002778e) main_welc_pane_g1_ParamLimits

0xbb00,	// (0x0002778e) main_welc_pane_g1

0xbb0c,	// (0x0002779a) main_welc_pane_g2_ParamLimits

0xbb0c,	// (0x0002779a) main_welc_pane_g2

0x0001,

0xff58,	// (0x0002bbe6) main_welc_pane_g_ParamLimits

0xff58,	// (0x0002bbe6) main_welc_pane_g

0xc22b,	// (0x00027eb9) listscroll_mce_pane_ParamLimits

0x699a,	// (0x00022628) wait_bar_pane_cp10

0xe298,	// (0x00029f26) main_cale_day_pane_ParamLimits

0xe298,	// (0x00029f26) main_cale_week_pane_ParamLimits

0xc22b,	// (0x00027eb9) main_messa_pane_ParamLimits

0x84d8,	// (0x00024166) main_clock2_btn_pane_ParamLimits

0x84d8,	// (0x00024166) main_clock2_btn_pane

0xeacc,	// (0x0002a75a) main_clock2_btn_pane_cp01_ParamLimits

0xeacc,	// (0x0002a75a) main_clock2_btn_pane_cp01

0x1748,	// (0x0001d3d6) list_cale_mrui_pane_ParamLimits

0x1cb7,	// (0x0001d945) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0002bb40) main_cf0_pane_g

0xb72c,	// (0x000273ba) area_left_week_number_pane_ParamLimits

0xb73f,	// (0x000273cd) area_top_day_name_pane_ParamLimits

0xb74d,	// (0x000273db) frame_month_view_pane_ParamLimits

0x1ddf,	// (0x0001da6d) grid_month_view_pane_ParamLimits

0x1ded,	// (0x0001da7b) frm_month_g1_ParamLimits

0xb7cb,	// (0x00027459) frm_month_g2_ParamLimits

0xb7dc,	// (0x0002746a) frm_month_g3_ParamLimits

0xb7ed,	// (0x0002747b) frm_month_g4_ParamLimits

0xb7fe,	// (0x0002748c) frm_month_g5_ParamLimits

0xb811,	// (0x0002749f) frm_month_g6_ParamLimits

0xb824,	// (0x000274b2) frm_month_g7_ParamLimits

0x1dfa,	// (0x0001da88) frm_month_g8_ParamLimits

0xb837,	// (0x000274c5) frm_month_g9_ParamLimits

0xb844,	// (0x000274d2) frm_month_g10_ParamLimits

0xb851,	// (0x000274df) frm_month_g11_ParamLimits

0xb85e,	// (0x000274ec) frm_month_g12_ParamLimits

0xb86b,	// (0x000274f9) frm_month_g13_ParamLimits

0xb878,	// (0x00027506) frm_month_g14_ParamLimits

0xb887,	// (0x00027515) frm_month_g15_ParamLimits

0xb896,	// (0x00027524) frm_month_g16_ParamLimits

0xff03,	// (0x0002bb91) frm_month_g_ParamLimits

0x1e07,	// (0x0001da95) cell_top_day_name_pane_t1_ParamLimits

0xb8a5,	// (0x00027533) cell_area_left_week_number_pane_g1_ParamLimits

0xb8b4,	// (0x00027542) cell_area_left_week_number_pane_t1_ParamLimits

0xe918,	// (0x0002a5a6) cell_month_view_pane_g1_ParamLimits

0xb8ca,	// (0x00027558) cell_month_view_pane_t1_ParamLimits

0xc223,	// (0x00027eb1) main_clock2_btn_pane_g1

0x1f77,	// (0x0001dc05) main_clock2_btn_pane_t1

0xc193,	// (0x00027e21) listscroll_cmail_pane_ParamLimits

0x13a7,	// (0x0001d035) main_sp_fs_email_pane_g1_ParamLimits

0x13b3,	// (0x0001d041) main_sp_fs_email_pane_g2_ParamLimits

0xfceb,	// (0x0002b979) main_sp_fs_email_pane_g_ParamLimits

0x191d,	// (0x0001d5ab) list_recal_day_pane_ParamLimits

0x192e,	// (0x0001d5bc) mian_recal_day_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
