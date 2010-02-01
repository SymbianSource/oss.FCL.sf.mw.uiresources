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

#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00063e01 };

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
0x6c79,	// (0x0006aa7a) Screen

0x6c85,	// (0x0006aa86) application_window

0x6ceb,	// (0x0006aaec) area_bottom_pane_ParamLimits

0x6ceb,	// (0x0006aaec) area_bottom_pane

0x6d44,	// (0x0006ab45) area_top_pane_ParamLimits

0x6d44,	// (0x0006ab45) area_top_pane

0xe880,	// (0x00072681) call_video_uplink_pane_ParamLimits

0xe880,	// (0x00072681) call_video_uplink_pane

0x6dd1,	// (0x0006abd2) main_pane_ParamLimits

0x6dd1,	// (0x0006abd2) main_pane

0x42b4,	// (0x000680b5) context_pane

0x9cfd,	// (0x0006dafe) navi_pane

0x9d1d,	// (0x0006db1e) popup_cale_events_window_ParamLimits

0x9d1d,	// (0x0006db1e) popup_cale_events_window

0x42c7,	// (0x000680c8) popup_mup_playback_window

0x9d35,	// (0x0006db36) signal_pane

0xeff1,	// (0x00072df2) main_browser_pane

0x0afc,	// (0x000648fd) main_burst_pane

0x9bc7,	// (0x0006d9c8) main_calc_pane

0x0afc,	// (0x000648fd) main_cale_day_pane

0xeff1,	// (0x00072df2) main_cale_month_pane

0x0afc,	// (0x000648fd) main_cale_week_pane

0x0afc,	// (0x000648fd) main_call_pane

0xecbf,	// (0x00072ac0) main_call_poc_pane

0x0afc,	// (0x000648fd) main_camera_pane

0x0afc,	// (0x000648fd) main_chi_dic_pane

0x0981,	// (0x00064782) main_clock_pane

0xecbf,	// (0x00072ac0) main_fmradio_pane

0x0afc,	// (0x000648fd) main_graph_messa_pane

0xecbf,	// (0x00072ac0) main_help_pane

0xeff1,	// (0x00072df2) main_im_pane

0xef1a,	// (0x00072d1b) main_image_pane_ParamLimits

0xef1a,	// (0x00072d1b) main_image_pane

0xecbf,	// (0x00072ac0) main_location2_pane

0x0afc,	// (0x000648fd) main_location_pane

0xecbf,	// (0x00072ac0) main_messa_pane

0xecbf,	// (0x00072ac0) main_mp2_pane

0x0afc,	// (0x000648fd) main_mp_pane

0xecbf,	// (0x00072ac0) main_msg_pane

0xecbf,	// (0x00072ac0) main_mup_eq_pane

0xecbf,	// (0x00072ac0) main_mup_pane

0x0afc,	// (0x000648fd) main_notes_pane

0xecbf,	// (0x00072ac0) main_pec_pane

0xecbf,	// (0x00072ac0) main_phob_pane

0xecbf,	// (0x00072ac0) main_pinb_pane

0xecbf,	// (0x00072ac0) main_postcard_pane

0xecbf,	// (0x00072ac0) main_qdial_pane

0x0afc,	// (0x000648fd) main_skin_pane

0xecbf,	// (0x00072ac0) main_smil2_pane

0x0afc,	// (0x000648fd) main_smil_pane

0x0afc,	// (0x000648fd) main_video_pane

0x0afc,	// (0x000648fd) main_video_tele_pane

0xef1a,	// (0x00072d1b) main_viewer_pane_ParamLimits

0xef1a,	// (0x00072d1b) main_viewer_pane

0x0afc,	// (0x000648fd) main_vorec_pane

0x9bfd,	// (0x0006d9fe) popup_blid_sat_info_window_ParamLimits

0x9bfd,	// (0x0006d9fe) popup_blid_sat_info_window

0x9c13,	// (0x0006da14) popup_dyc_status_message_window_ParamLimits

0x9c13,	// (0x0006da14) popup_dyc_status_message_window

0x9c23,	// (0x0006da24) popup_grid_large_graphic_window_ParamLimits

0x9c23,	// (0x0006da24) popup_grid_large_graphic_window

0x9c99,	// (0x0006da9a) popup_loc_request_window_ParamLimits

0x9c99,	// (0x0006da9a) popup_loc_request_window

0x9cd5,	// (0x0006dad6) popup_wml_address_window_ParamLimits

0x9cd5,	// (0x0006dad6) popup_wml_address_window

0x9a9f,	// (0x0006d8a0) call_muted_g1

0x9761,	// (0x0006d562) popup_call_audio_conf_window_ParamLimits

0x9761,	// (0x0006d562) popup_call_audio_conf_window

0x9aaf,	// (0x0006d8b0) popup_call_audio_first_window_ParamLimits

0x9aaf,	// (0x0006d8b0) popup_call_audio_first_window

0x9aef,	// (0x0006d8f0) popup_call_audio_in_window_ParamLimits

0x9aef,	// (0x0006d8f0) popup_call_audio_in_window

0x9b13,	// (0x0006d914) popup_call_audio_out_window_ParamLimits

0x9b13,	// (0x0006d914) popup_call_audio_out_window

0x9b35,	// (0x0006d936) popup_call_audio_second_window_ParamLimits

0x9b35,	// (0x0006d936) popup_call_audio_second_window

0x9b65,	// (0x0006d966) popup_call_audio_wait_window_ParamLimits

0x9b65,	// (0x0006d966) popup_call_audio_wait_window

0x9b86,	// (0x0006d987) popup_number_entry_window_ParamLimits

0x9b86,	// (0x0006d987) popup_number_entry_window

0xe89e,	// (0x0007269f) bg_popup_call_pane_cp05_ParamLimits

0xe89e,	// (0x0007269f) bg_popup_call_pane_cp05

0xe8be,	// (0x000726bf) popup_number_entry_window_t1

0xe8d1,	// (0x000726d2) popup_number_entry_window_t2

0xe8e3,	// (0x000726e4) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x00072eed) popup_number_entry_window_t

0xe8f5,	// (0x000726f6) text_title_cp2

0xe916,	// (0x00072717) bg_popup_call_pane_cp_ParamLimits

0xe916,	// (0x00072717) bg_popup_call_pane_cp

0xe924,	// (0x00072725) call_thumbnail_pane

0xe92c,	// (0x0007272d) popup_call_audio_in_window_g1_ParamLimits

0xe92c,	// (0x0007272d) popup_call_audio_in_window_g1

0xe938,	// (0x00072739) popup_call_audio_in_window_g2_ParamLimits

0xe938,	// (0x00072739) popup_call_audio_in_window_g2

0xe944,	// (0x00072745) popup_call_audio_in_window_g3_ParamLimits

0xe944,	// (0x00072745) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x00072ef6) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x00072ef6) popup_call_audio_in_window_g

0xe950,	// (0x00072751) popup_call_audio_in_window_t1_ParamLimits

0xe950,	// (0x00072751) popup_call_audio_in_window_t1

0xe96c,	// (0x0007276d) popup_call_audio_in_window_t2_ParamLimits

0xe96c,	// (0x0007276d) popup_call_audio_in_window_t2

0xe988,	// (0x00072789) popup_call_audio_in_window_t3_ParamLimits

0xe988,	// (0x00072789) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x00072efd) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x00072efd) popup_call_audio_in_window_t

0xe916,	// (0x00072717) bg_popup_call_pane_cp01_ParamLimits

0xe916,	// (0x00072717) bg_popup_call_pane_cp01

0xe924,	// (0x00072725) call_thumbnail_pane_cp02

0xe99b,	// (0x0007279c) call_type_pane_cp022

0xe9a3,	// (0x000727a4) popup_call_audio_out_window_g1_ParamLimits

0xe9a3,	// (0x000727a4) popup_call_audio_out_window_g1

0xe9b5,	// (0x000727b6) popup_call_audio_out_window_g2_ParamLimits

0xe9b5,	// (0x000727b6) popup_call_audio_out_window_g2

0xe9c1,	// (0x000727c2) popup_call_audio_out_window_g3_ParamLimits

0xe9c1,	// (0x000727c2) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x00072f04) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x00072f04) popup_call_audio_out_window_g

0xe9d3,	// (0x000727d4) popup_call_audio_out_window_t1_ParamLimits

0xe9d3,	// (0x000727d4) popup_call_audio_out_window_t1

0xe9eb,	// (0x000727ec) popup_call_audio_out_window_t2_ParamLimits

0xe9eb,	// (0x000727ec) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x00072f0b) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x00072f0b) popup_call_audio_out_window_t

0xea00,	// (0x00072801) bg_popup_call_pane_ParamLimits

0xea00,	// (0x00072801) bg_popup_call_pane

0x6fc0,	// (0x0006adc1) call_thumbnail_pane_cp_ParamLimits

0x6fc0,	// (0x0006adc1) call_thumbnail_pane_cp

0xea84,	// (0x00072885) call_type_pane_cp01_ParamLimits

0xea84,	// (0x00072885) call_type_pane_cp01

0xeac8,	// (0x000728c9) popup_call_audio_first_window_g1_ParamLimits

0xeac8,	// (0x000728c9) popup_call_audio_first_window_g1

0xeb14,	// (0x00072915) popup_call_audio_first_window_g2_ParamLimits

0xeb14,	// (0x00072915) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00072f10) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00072f10) popup_call_audio_first_window_g

0xeb58,	// (0x00072959) popup_call_audio_first_window_t1_ParamLimits

0xeb58,	// (0x00072959) popup_call_audio_first_window_t1

0xec04,	// (0x00072a05) popup_call_audio_first_window_t4_ParamLimits

0xec04,	// (0x00072a05) popup_call_audio_first_window_t4

0xec90,	// (0x00072a91) popup_call_audio_first_window_t5_ParamLimits

0xec90,	// (0x00072a91) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x00072f15) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x00072f15) popup_call_audio_first_window_t

0xecbf,	// (0x00072ac0) bg_popup_call_pane_cp02

0xecc9,	// (0x00072aca) call_type_pane_cp023

0xecd1,	// (0x00072ad2) popup_call_audio_wait_window_g1

0xecd9,	// (0x00072ada) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00072f1c) popup_call_audio_wait_window_g

0xece1,	// (0x00072ae2) popup_call_audio_wait_window_t3

0xecef,	// (0x00072af0) bg_popup_call_pane_cp03_ParamLimits

0xecef,	// (0x00072af0) bg_popup_call_pane_cp03

0xed4f,	// (0x00072b50) call_thumbnail_pane_cp011_ParamLimits

0xed4f,	// (0x00072b50) call_thumbnail_pane_cp011

0xed5b,	// (0x00072b5c) call_type_pane_cp034_ParamLimits

0xed5b,	// (0x00072b5c) call_type_pane_cp034

0xed97,	// (0x00072b98) popup_call_audio_second_window_g1_ParamLimits

0xed97,	// (0x00072b98) popup_call_audio_second_window_g1

0xedd3,	// (0x00072bd4) popup_call_audio_second_window_g2_ParamLimits

0xedd3,	// (0x00072bd4) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00072f21) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00072f21) popup_call_audio_second_window_g

0xee0f,	// (0x00072c10) popup_call_audio_second_window_t1_ParamLimits

0xee0f,	// (0x00072c10) popup_call_audio_second_window_t1

0xee90,	// (0x00072c91) popup_call_audio_second_window_t2_ParamLimits

0xee90,	// (0x00072c91) popup_call_audio_second_window_t2

0xeec6,	// (0x00072cc7) popup_call_audio_second_window_t3_ParamLimits

0xeec6,	// (0x00072cc7) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x00072f26) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x00072f26) popup_call_audio_second_window_t

0xecbf,	// (0x00072ac0) bg_popup_call_pane_cp04

0xeefc,	// (0x00072cfd) list_conf_pane

0xef04,	// (0x00072d05) popup_call_audio_conf_window_t1

0xef12,	// (0x00072d13) call_thumbnail_pane_g1

0xef1a,	// (0x00072d1b) bg_pinb_pane_ParamLimits

0xef1a,	// (0x00072d1b) bg_pinb_pane

0xef28,	// (0x00072d29) find_pinb_pane

0xef31,	// (0x00072d32) listscroll_pinb_pane_ParamLimits

0xef31,	// (0x00072d32) listscroll_pinb_pane

0xef40,	// (0x00072d41) pinb_bg_pane_g1

0x6fe4,	// (0x0006ade5) pinb_bg_pane_g2

0x6ff0,	// (0x0006adf1) pinb_bg_pane_g3

0x6ffc,	// (0x0006adfd) pinb_bg_pane_g4

0x7008,	// (0x0006ae09) pinb_bg_pane_g5

0x7014,	// (0x0006ae15) pinb_bg_pane_g6

0x701f,	// (0x0006ae20) pinb_bg_pane_g7

0x702a,	// (0x0006ae2b) pinb_bg_pane_g8

0x7035,	// (0x0006ae36) pinb_bg_pane_g9

0x703f,	// (0x0006ae40) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x00072f2d) pinb_bg_pane_g

0x705c,	// (0x0006ae5d) grid_pinb_pane

0x7067,	// (0x0006ae68) list_pinb_pane

0x7072,	// (0x0006ae73) scroll_pane_cp01_ParamLimits

0x7072,	// (0x0006ae73) scroll_pane_cp01

0xef4a,	// (0x00072d4b) find_pinb_pane_g1_ParamLimits

0xef4a,	// (0x00072d4b) find_pinb_pane_g1

0xef62,	// (0x00072d63) find_pinb_pane_t1

0xef74,	// (0x00072d75) find_pinb_pane_t2

0x0001,

0xf146,	// (0x00072f47) find_pinb_pane_t

0xef89,	// (0x00072d8a) input_focus_pane_cp01_ParamLimits

0xef89,	// (0x00072d8a) input_focus_pane_cp01

0x7084,	// (0x0006ae85) cell_pinb_pane_ParamLimits

0x7084,	// (0x0006ae85) cell_pinb_pane

0x70a9,	// (0x0006aeaa) cell_pinb_pane_g1_ParamLimits

0x70a9,	// (0x0006aeaa) cell_pinb_pane_g1

0x70be,	// (0x0006aebf) cell_pinb_pane_g2_ParamLimits

0x70be,	// (0x0006aebf) cell_pinb_pane_g2

0xef95,	// (0x00072d96) cell_pinb_pane_g3_ParamLimits

0xef95,	// (0x00072d96) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x00072f4c) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x00072f4c) cell_pinb_pane_g

0xecbf,	// (0x00072ac0) grid_highlight_pane_cp01

0x70ca,	// (0x0006aecb) list_pinb_item_pane_ParamLimits

0x70ca,	// (0x0006aecb) list_pinb_item_pane

0xecbf,	// (0x00072ac0) list_highlight_pane_cp02

0x70ea,	// (0x0006aeeb) list_pinb_item_pane_g1_ParamLimits

0x70ea,	// (0x0006aeeb) list_pinb_item_pane_g1

0xefa1,	// (0x00072da2) list_pinb_item_pane_g2_ParamLimits

0xefa1,	// (0x00072da2) list_pinb_item_pane_g2

0x70f7,	// (0x0006aef8) list_pinb_item_pane_g3_ParamLimits

0x70f7,	// (0x0006aef8) list_pinb_item_pane_g3

0x7108,	// (0x0006af09) list_pinb_item_pane_g4_ParamLimits

0x7108,	// (0x0006af09) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x00072f53) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x00072f53) list_pinb_item_pane_g

0x7114,	// (0x0006af15) list_pinb_item_pane_t1_ParamLimits

0x7114,	// (0x0006af15) list_pinb_item_pane_t1

0x7145,	// (0x0006af46) calc_display_pane

0x7163,	// (0x0006af64) calc_paper_pane

0x717f,	// (0x0006af80) grid_calc_pane

0xecbf,	// (0x00072ac0) bg_list_pane_cp01

0x71a9,	// (0x0006afaa) clock_g1

0x71b1,	// (0x0006afb2) clock_g2

0x0001,

0xf15b,	// (0x00072f5c) clock_g

0x71bb,	// (0x0006afbc) clock_t1_ParamLimits

0x71bb,	// (0x0006afbc) clock_t1

0x71d0,	// (0x0006afd1) clock_t2_ParamLimits

0x71d0,	// (0x0006afd1) clock_t2

0x71e2,	// (0x0006afe3) clock_t3_ParamLimits

0x71e2,	// (0x0006afe3) clock_t3

0x71f4,	// (0x0006aff5) clock_t4_ParamLimits

0x71f4,	// (0x0006aff5) clock_t4

0x7206,	// (0x0006b007) clock_t5_ParamLimits

0x7206,	// (0x0006b007) clock_t5

0x721b,	// (0x0006b01c) clock_t6_ParamLimits

0x721b,	// (0x0006b01c) clock_t6

0x722d,	// (0x0006b02e) clock_t7_ParamLimits

0x722d,	// (0x0006b02e) clock_t7

0x723f,	// (0x0006b040) clock_t8_ParamLimits

0x723f,	// (0x0006b040) clock_t8

0x7255,	// (0x0006b056) clock_t9_ParamLimits

0x7255,	// (0x0006b056) clock_t9

0x0008,

0xf160,	// (0x00072f61) clock_t_ParamLimits

0xf160,	// (0x00072f61) clock_t

0xefad,	// (0x00072dae) popup_clock_analogue_window_cp02

0xefad,	// (0x00072dae) popup_clock_digital_window_cp01

0xefb5,	// (0x00072db6) listscroll_help_pane

0xecbf,	// (0x00072ac0) phob_pre_status_pane

0xefbf,	// (0x00072dc0) grid_qdial_pane

0xecbf,	// (0x00072ac0) listscroll_mce_pane

0xefc9,	// (0x00072dca) bg_notes_pane

0xefd3,	// (0x00072dd4) list_notes_pane

0x726b,	// (0x0006b06c) scroll_pane_cp06

0xefdd,	// (0x00072dde) bg_calc_paper_pane

0x7276,	// (0x0006b077) list_calc_pane

0xeff1,	// (0x00072df2) bg_calc_display_pane

0x7290,	// (0x0006b091) calc_display_pane_t1

0x72a5,	// (0x0006b0a6) calc_display_pane_t2

0x72ba,	// (0x0006b0bb) calc_display_pane_t3

0x0002,

0xf173,	// (0x00072f74) calc_display_pane_t

0x72cc,	// (0x0006b0cd) cell_calc_pane_ParamLimits

0x72cc,	// (0x0006b0cd) cell_calc_pane

0xeffd,	// (0x00072dfe) bg_calc_paper_pane_g1

0xf009,	// (0x00072e0a) bg_calc_paper_pane_g2

0xf015,	// (0x00072e16) bg_calc_paper_pane_g3

0xf02d,	// (0x00072e2e) bg_calc_paper_pane_g4

0xf021,	// (0x00072e22) bg_calc_paper_pane_g5

0x72f9,	// (0x0006b0fa) bg_calc_paper_pane_g6

0x730a,	// (0x0006b10b) bg_calc_paper_pane_g7

0x731b,	// (0x0006b11c) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00072f7b) bg_calc_paper_pane_g

0x732c,	// (0x0006b12d) calc_bg_paper_pane_g9

0x733d,	// (0x0006b13e) list_calc_item_pane_ParamLimits

0x733d,	// (0x0006b13e) list_calc_item_pane

0xf039,	// (0x00072e3a) list_calc_item_pane_g1

0x736c,	// (0x0006b16d) list_calc_item_pane_t1_ParamLimits

0x736c,	// (0x0006b16d) list_calc_item_pane_t1

0x737e,	// (0x0006b17f) list_calc_item_pane_t2_ParamLimits

0x737e,	// (0x0006b17f) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00072f8c) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00072f8c) list_calc_item_pane_t

0xf046,	// (0x00072e47) cell_calc_pane_g1

0xf050,	// (0x00072e51) grid_highlight_pane_cp02

0x3746,	// (0x00067547) bg_calc_display_pane_g1

0x73ae,	// (0x0006b1af) bg_calc_display_pane_g2

0x73b8,	// (0x0006b1b9) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x00072f96) bg_calc_display_pane_g

0x73c1,	// (0x0006b1c2) cell_qdial_pane_ParamLimits

0x73c1,	// (0x0006b1c2) cell_qdial_pane

0x73d5,	// (0x0006b1d6) cell_qdial_pane_g1_ParamLimits

0x73d5,	// (0x0006b1d6) cell_qdial_pane_g1

0x73e2,	// (0x0006b1e3) cell_qdial_pane_g2_ParamLimits

0x73e2,	// (0x0006b1e3) cell_qdial_pane_g2

0xf072,	// (0x00072e73) cell_qdial_pane_g3_ParamLimits

0xf072,	// (0x00072e73) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00072f9d) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00072f9d) cell_qdial_pane_g

0x7400,	// (0x0006b201) cell_qdial_pane_t1_ParamLimits

0x7400,	// (0x0006b201) cell_qdial_pane_t1

0x7418,	// (0x0006b219) cell_qdial_pane_t2_ParamLimits

0x7418,	// (0x0006b219) cell_qdial_pane_t2

0x742b,	// (0x0006b22c) cell_qdial_pane_t3_ParamLimits

0x742b,	// (0x0006b22c) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x00072fa6) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x00072fa6) cell_qdial_pane_t

0xecbf,	// (0x00072ac0) grid_highlight_pane_cp04

0xf07e,	// (0x00072e7f) thumbnail_qdial_pane_ParamLimits

0xf07e,	// (0x00072e7f) thumbnail_qdial_pane

0xf0da,	// (0x00072edb) list_help_pane

0xf0e3,	// (0x00072ee4) scroll_pane_cp02

0x743e,	// (0x0006b23f) help_list_pane_t1_ParamLimits

0x743e,	// (0x0006b23f) help_list_pane_t1

0x7471,	// (0x0006b272) bg_notes_pane_g2

0x7479,	// (0x0006b27a) bg_notes_pane_g3

0x7481,	// (0x0006b282) notes_bg_pane_g1

0x7489,	// (0x0006b28a) notes_bg_pane_g4

0x7491,	// (0x0006b292) notes_bg_pane_g5

0x7499,	// (0x0006b29a) notes_bg_pane_g6

0x74a1,	// (0x0006b2a2) notes_bg_pane_g7

0x74a9,	// (0x0006b2aa) notes_bg_pane_g8

0x74b1,	// (0x0006b2b2) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x00072fc4) notes_bg_pane_g

0x74b9,	// (0x0006b2ba) list_notes_text_pane_ParamLimits

0x74b9,	// (0x0006b2ba) list_notes_text_pane

0x000f,	// (0x00063e10) list_notes_text_pane_g1

0x5b37,	// (0x00069938) list_notes_text_pane_t1

0xeff1,	// (0x00072df2) listscroll_cale_week_pane

0x74fb,	// (0x0006b2fc) bg_cale_heading_pane

0x0029,	// (0x00063e2a) bg_cale_pane_cp01

0x7517,	// (0x0006b318) cale_week_corner_pane

0x752d,	// (0x0006b32e) cale_week_day_heading_pane

0x7549,	// (0x0006b34a) cale_week_scroll_pane_g1

0x7562,	// (0x0006b363) cale_week_scroll_pane_g2

0x7573,	// (0x0006b374) cale_week_scroll_pane_g3

0x7584,	// (0x0006b385) cale_week_scroll_pane_g4

0x7595,	// (0x0006b396) cale_week_scroll_pane_g5

0x75a6,	// (0x0006b3a7) cale_week_scroll_pane_g6

0x75b7,	// (0x0006b3b8) cale_week_scroll_pane_g7

0x75ca,	// (0x0006b3cb) cale_week_scroll_pane_g8

0x75dd,	// (0x0006b3de) cale_week_scroll_pane_g9

0x75ee,	// (0x0006b3ef) cale_week_scroll_pane_g10

0x75ff,	// (0x0006b400) cale_week_scroll_pane_g11

0x7610,	// (0x0006b411) cale_week_scroll_pane_g12

0x7621,	// (0x0006b422) cale_week_scroll_pane_g13

0x763a,	// (0x0006b43b) cale_week_scroll_pane_g14

0x7653,	// (0x0006b454) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x00072fd3) cale_week_scroll_pane_g

0x766c,	// (0x0006b46d) cale_week_time_pane

0x767f,	// (0x0006b480) grid_cale_week_pane

0x769c,	// (0x0006b49d) scroll_pane_cp08

0x76b6,	// (0x0006b4b7) cell_cale_week_pane_ParamLimits

0x76b6,	// (0x0006b4b7) cell_cale_week_pane

0x7702,	// (0x0006b503) cale_week_day_heading_pane_t1

0x771b,	// (0x0006b51c) cale_week_day_heading_pane_t2

0x7734,	// (0x0006b535) cale_week_day_heading_pane_t3

0x774d,	// (0x0006b54e) cale_week_day_heading_pane_t4

0x7766,	// (0x0006b567) cale_week_day_heading_pane_t5

0x777f,	// (0x0006b580) cale_week_day_heading_pane_t6

0x7798,	// (0x0006b599) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x00072ff2) cale_week_day_heading_pane_t

0x0054,	// (0x00063e55) bg_cale_side_pane

0x77b1,	// (0x0006b5b2) cale_week_time_pane_t1

0x77c9,	// (0x0006b5ca) cale_week_time_pane_t2

0x77e1,	// (0x0006b5e2) cale_week_time_pane_t3

0x77f9,	// (0x0006b5fa) cale_week_time_pane_t4

0x7811,	// (0x0006b612) cale_week_time_pane_t5

0x7829,	// (0x0006b62a) cale_week_time_pane_t6

0x7841,	// (0x0006b642) cale_week_time_pane_t7

0x7861,	// (0x0006b662) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x00073001) cale_week_time_pane_t

0x7881,	// (0x0006b682) cell_cale_week_pane_g2

0x7892,	// (0x0006b693) cell_cale_week_pane_g3_ParamLimits

0x7892,	// (0x0006b693) cell_cale_week_pane_g3

0x0062,	// (0x00063e63) grid_highlight_pane_cp07

0x006a,	// (0x00063e6b) listscroll_gms_pane

0x0074,	// (0x00063e75) grid_gms_pane

0x007d,	// (0x00063e7e) listscroll_gms_pane_g1

0x0085,	// (0x00063e86) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x00073012) listscroll_gms_pane_g

0x78aa,	// (0x0006b6ab) scroll_pane_cp010

0x78b5,	// (0x0006b6b6) cell_gms_pane_ParamLimits

0x78b5,	// (0x0006b6b6) cell_gms_pane

0x78c8,	// (0x0006b6c9) cell_gms_pane_g1

0x008d,	// (0x00063e8e) cell_gms_pane_g2

0x0095,	// (0x00063e96) cell_gms_pane_g3

0x009e,	// (0x00063e9f) cell_gms_pane_g4

0x0003,

0xf216,	// (0x00073017) cell_gms_pane_g

0x00a7,	// (0x00063ea8) grid_highlight_pane_cp09

0x9a47,	// (0x0006d848) phob_pre_status_pane_g1

0x9a4f,	// (0x0006d850) phob_pre_status_pane_g2

0x9a57,	// (0x0006d858) phob_pre_status_pane_g3

0x9a5f,	// (0x0006d860) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x00073406) phob_pre_status_pane_g

0x9a6f,	// (0x0006d870) phob_pre_status_pane_t1

0x9a7f,	// (0x0006d880) phob_pre_status_pane_t2

0x9a8f,	// (0x0006d890) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x00073411) phob_pre_status_pane_t

0xecbf,	// (0x00072ac0) bg_list_pane_cp05

0x78d8,	// (0x0006b6d9) grid_vorec_pane

0x78e2,	// (0x0006b6e3) vorec_t1

0x78f0,	// (0x0006b6f1) vorec_t2

0x78fe,	// (0x0006b6ff) vorec_t3

0x790c,	// (0x0006b70d) vorec_t4

0x791a,	// (0x0006b71b) vorec_t5

0x7928,	// (0x0006b729) vorec_t6

0x0006,

0xf21f,	// (0x00073020) vorec_t

0x7944,	// (0x0006b745) wait_bar_pane_cp01

0x794c,	// (0x0006b74d) cell_vorec_pane_ParamLimits

0x794c,	// (0x0006b74d) cell_vorec_pane

0x0119,	// (0x00063f1a) cell_vorec_pane_g1

0xecbf,	// (0x00072ac0) grid_highlight_pane_cp05

0x796f,	// (0x0006b770) cams_zoom_pane

0x797b,	// (0x0006b77c) image_vga_pane

0x798a,	// (0x0006b78b) main_camera_pane_g1

0x7998,	// (0x0006b799) main_camera_pane_g2

0x79a4,	// (0x0006b7a5) main_camera_pane_g3

0x79b0,	// (0x0006b7b1) main_camera_pane_g4

0x79bc,	// (0x0006b7bd) main_camera_pane_g5

0x79c8,	// (0x0006b7c9) main_camera_pane_g6

0x79d4,	// (0x0006b7d5) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0007302f) main_camera_pane_g

0x79e0,	// (0x0006b7e1) main_camera_pane_t1

0x79f2,	// (0x0006b7f3) main_camera_pane_t2

0x0001,

0xf23f,	// (0x00073040) main_camera_pane_t

0x7a13,	// (0x0006b814) cams_zoom_pane_cp_ParamLimits

0x7a13,	// (0x0006b814) cams_zoom_pane_cp

0x7a37,	// (0x0006b838) image_cif_pane_ParamLimits

0x7a37,	// (0x0006b838) image_cif_pane

0x7a55,	// (0x0006b856) image_subqcif_pane

0x7a5d,	// (0x0006b85e) main_video_pane_g1_ParamLimits

0x7a5d,	// (0x0006b85e) main_video_pane_g1

0x7a7d,	// (0x0006b87e) main_video_pane_g2_ParamLimits

0x7a7d,	// (0x0006b87e) main_video_pane_g2

0x7aad,	// (0x0006b8ae) main_video_pane_g3_ParamLimits

0x7aad,	// (0x0006b8ae) main_video_pane_g3

0x7ad6,	// (0x0006b8d7) main_video_pane_g4_ParamLimits

0x7ad6,	// (0x0006b8d7) main_video_pane_g4

0x7aff,	// (0x0006b900) main_video_pane_g5_ParamLimits

0x7aff,	// (0x0006b900) main_video_pane_g5

0x012f,	// (0x00063f30) main_video_pane_g6_ParamLimits

0x012f,	// (0x00063f30) main_video_pane_g6

0x0006,

0xf244,	// (0x00073045) main_video_pane_g_ParamLimits

0xf244,	// (0x00073045) main_video_pane_g

0x7b23,	// (0x0006b924) main_video_pane_t1_ParamLimits

0x7b23,	// (0x0006b924) main_video_pane_t1

0x0149,	// (0x00063f4a) cams_zoom_pane_g1

0x0152,	// (0x00063f53) cams_zoom_pane_g2

0x015b,	// (0x00063f5c) cams_zoom_pane_g3

0x0164,	// (0x00063f65) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x00073054) cams_zoom_pane_g

0x7b6d,	// (0x0006b96e) grid_cams_pane

0x7b7b,	// (0x0006b97c) linegrid_cams_pane

0x7b89,	// (0x0006b98a) cell_cams_pane_ParamLimits

0x7b89,	// (0x0006b98a) cell_cams_pane

0x016d,	// (0x00063f6e) cams_burst_image_pane

0x0175,	// (0x00063f76) cell_cams_pane_g1

0xecbf,	// (0x00072ac0) grid_highlight_pane_cp03

0xf046,	// (0x00072e47) mp_bg_pane_g1

0xecbf,	// (0x00072ac0) bg_list_pane_cp03

0x418c,	// (0x00067f8d) bg_mp_pane

0x4194,	// (0x00067f95) grid_mp_pane

0x419c,	// (0x00067f9d) media_player_g1

0x41a4,	// (0x00067fa5) media_player_t1

0x41b2,	// (0x00067fb3) media_player_t2

0x41c0,	// (0x00067fc1) media_player_t3

0x41ce,	// (0x00067fcf) media_player_t4

0x41dc,	// (0x00067fdd) media_player_t5

0x41ea,	// (0x00067feb) media_player_t6

0x41f8,	// (0x00067ff9) media_player_t7

0x0006,

0xf5ef,	// (0x000733f0) media_player_t

0x4206,	// (0x00068007) wait_bar_pane_cp02

0xf5d4,	// (0x000733d5) main_usb_pane_t

0x9a3e,	// (0x0006d83f) cell_mp_pane

0xf046,	// (0x00072e47) cell_mp_pane_g1

0xecbf,	// (0x00072ac0) grid_highlight_pane_cp06

0x017d,	// (0x00063f7e) grid_skin_colour_pane

0x0185,	// (0x00063f86) list_highlight_pane_cp03

0x7b9c,	// (0x0006b99d) skin_g1

0x018d,	// (0x00063f8e) skin_t1

0x019c,	// (0x00063f9d) skin_t2

0x0001,

0xf288,	// (0x00073089) skin_t

0x7ba6,	// (0x0006b9a7) cell_skin_colour_pane_ParamLimits

0x7ba6,	// (0x0006b9a7) cell_skin_colour_pane

0x01aa,	// (0x00063fab) cell_skin_colour_pane_g1

0x7c28,	// (0x0006ba29) call_video_g1_ParamLimits

0x7c28,	// (0x0006ba29) call_video_g1

0x7c38,	// (0x0006ba39) call_video_g2_ParamLimits

0x7c38,	// (0x0006ba39) call_video_g2

0x0001,

0xf28d,	// (0x0007308e) call_video_g_ParamLimits

0xf28d,	// (0x0007308e) call_video_g

0x7c92,	// (0x0006ba93) call_video_uplink_pane_cp1_ParamLimits

0x7c92,	// (0x0006ba93) call_video_uplink_pane_cp1

0x01bc,	// (0x00063fbd) call_video_uplink_pane_cp2

0x7d5e,	// (0x0006bb5f) video_down_crop_pane_ParamLimits

0x7d5e,	// (0x0006bb5f) video_down_crop_pane

0x7e5c,	// (0x0006bc5d) video_down_pane_ParamLimits

0x7e5c,	// (0x0006bc5d) video_down_pane

0x01c4,	// (0x00063fc5) video_down_subqcif_pane_ParamLimits

0x01c4,	// (0x00063fc5) video_down_subqcif_pane

0x01dc,	// (0x00063fdd) video_down_subqcif_pane_cp_ParamLimits

0x01dc,	// (0x00063fdd) video_down_subqcif_pane_cp

0x0200,	// (0x00064001) im_reading_pane_ParamLimits

0x0200,	// (0x00064001) im_reading_pane

0x7f7e,	// (0x0006bd7f) im_writing_pane_ParamLimits

0x7f7e,	// (0x0006bd7f) im_writing_pane

0x7f9c,	// (0x0006bd9d) im_reading_pane_t1

0x021a,	// (0x0006401b) list_im_pane

0x022b,	// (0x0006402c) scroll_pane_cp07

0x7ff0,	// (0x0006bdf1) im_writing_pane_t1_ParamLimits

0x7ff0,	// (0x0006bdf1) im_writing_pane_t1

0x0244,	// (0x00064045) im_writing_pane_t2_ParamLimits

0x0244,	// (0x00064045) im_writing_pane_t2

0x0001,

0xf297,	// (0x00073098) im_writing_pane_t_ParamLimits

0xf297,	// (0x00073098) im_writing_pane_t

0xecbf,	// (0x00072ac0) input_focus_pane_cp04

0xecbf,	// (0x00072ac0) input_focus_pane_cp05

0x8005,	// (0x0006be06) list_im_single_pane_ParamLimits

0x8005,	// (0x0006be06) list_im_single_pane

0x8029,	// (0x0006be2a) list_single_im_pane_t1

0x9a02,	// (0x0006d803) blid_accuracy_pane

0x9a0a,	// (0x0006d80b) blid_compass_pane

0x9a14,	// (0x0006d815) main_location_t1

0x9a22,	// (0x0006d823) main_location_t2

0x9a30,	// (0x0006d831) main_location_t3

0x0002,

0xf5fe,	// (0x000733ff) main_location_t

0xecbf,	// (0x00072ac0) aid_levels_location

0xf046,	// (0x00072e47) blid_accuracy_pane_g1

0xf046,	// (0x00072e47) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x000730fa) blid_accuracy_pane_g

0x028c,	// (0x0006408d) wml_content_pane

0x02ca,	// (0x000640cb) wml_button_pane_ParamLimits

0x02ca,	// (0x000640cb) wml_button_pane

0x8038,	// (0x0006be39) wml_list_single_large_pane_ParamLimits

0x8038,	// (0x0006be39) wml_list_single_large_pane

0x8062,	// (0x0006be63) wml_list_single_medium_pane_ParamLimits

0x8062,	// (0x0006be63) wml_list_single_medium_pane

0x8093,	// (0x0006be94) wml_list_single_small_pane_ParamLimits

0x8093,	// (0x0006be94) wml_list_single_small_pane

0x02de,	// (0x000640df) wml_selection_box_pane_ParamLimits

0x02de,	// (0x000640df) wml_selection_box_pane

0x02f1,	// (0x000640f2) wml_list_single_pane_t1

0x0300,	// (0x00064101) wml_list_single_medium_pane_t1

0x030f,	// (0x00064110) wml_list_single_large_pane_t1

0x031e,	// (0x0006411f) input_focus_pane_cp02_ParamLimits

0x031e,	// (0x0006411f) input_focus_pane_cp02

0x0331,	// (0x00064132) wml_selection_box_pane_g1

0x033a,	// (0x0006413b) wml_selection_box_pane_t1_ParamLimits

0x033a,	// (0x0006413b) wml_selection_box_pane_t1

0xef1a,	// (0x00072d1b) bg_wml_button_pane_ParamLimits

0xef1a,	// (0x00072d1b) bg_wml_button_pane

0x0352,	// (0x00064153) wml_button_pane_g1

0x035a,	// (0x0006415b) wml_button_pane_t1

0x0352,	// (0x00064153) wml_button_bg_pane_g1

0x036a,	// (0x0006416b) wml_button_bg_pane_g2

0x0372,	// (0x00064173) wml_button_bg_pane_g3

0x037a,	// (0x0006417b) wml_button_bg_pane_g4

0x0382,	// (0x00064183) wml_button_bg_pane_g5

0x038a,	// (0x0006418b) wml_button_bg_pane_g6

0x0392,	// (0x00064193) wml_button_bg_pane_g7

0x039a,	// (0x0006419b) wml_button_bg_pane_g8

0x03a2,	// (0x000641a3) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0007309d) wml_button_bg_pane_g

0x80cd,	// (0x0006bece) bg_list_pane_cp02

0x03aa,	// (0x000641ab) mce_header_pane_ParamLimits

0x03aa,	// (0x000641ab) mce_header_pane

0x03c0,	// (0x000641c1) mce_icon_pane

0x03c0,	// (0x000641c1) mce_image_pane

0x03c9,	// (0x000641ca) mce_text_pane_ParamLimits

0x03c9,	// (0x000641ca) mce_text_pane

0x80d7,	// (0x0006bed8) scroll_pane_cp03

0x02c2,	// (0x000640c3) scroll_pane_cp04

0x03dc,	// (0x000641dd) scroll_pane_cp05_ParamLimits

0x03dc,	// (0x000641dd) scroll_pane_cp05

0x80e1,	// (0x0006bee2) mce_header_field_pane_ParamLimits

0x80e1,	// (0x0006bee2) mce_header_field_pane

0x8101,	// (0x0006bf02) mce_header_field_pane_2_ParamLimits

0x8101,	// (0x0006bf02) mce_header_field_pane_2

0x8117,	// (0x0006bf18) mce_header_field_pane_3

0x811f,	// (0x0006bf20) list_single_mce_message_pane_ParamLimits

0x811f,	// (0x0006bf20) list_single_mce_message_pane

0x8144,	// (0x0006bf45) list_single_mce_smart_pane_ParamLimits

0x8144,	// (0x0006bf45) list_single_mce_smart_pane

0x03e8,	// (0x000641e9) input_focus_pane_cp03

0x03f1,	// (0x000641f2) list_header_data_pane

0x8174,	// (0x0006bf75) mce_header_field_pane_t1

0x8182,	// (0x0006bf83) list_single_mce_header_pane_ParamLimits

0x8182,	// (0x0006bf83) list_single_mce_header_pane

0x03f9,	// (0x000641fa) list_single_mce_header_pane_t1

0x0408,	// (0x00064209) list_single_mce_message_pane_g1

0x0410,	// (0x00064211) list_single_mce_message_pane_t1

0x81c6,	// (0x0006bfc7) bg_cale_heading_pane_cp01_ParamLimits

0x81c6,	// (0x0006bfc7) bg_cale_heading_pane_cp01

0x041e,	// (0x0006421f) bg_cale_pane_cp02_ParamLimits

0x041e,	// (0x0006421f) bg_cale_pane_cp02

0x81f9,	// (0x0006bffa) cale_month_corner_pane

0x820f,	// (0x0006c010) cale_month_day_heading_pane_ParamLimits

0x820f,	// (0x0006c010) cale_month_day_heading_pane

0x8252,	// (0x0006c053) cale_month_pane_g1_ParamLimits

0x8252,	// (0x0006c053) cale_month_pane_g1

0x827e,	// (0x0006c07f) cale_month_pane_g2_ParamLimits

0x827e,	// (0x0006c07f) cale_month_pane_g2

0x82a1,	// (0x0006c0a2) cale_month_pane_g3_ParamLimits

0x82a1,	// (0x0006c0a2) cale_month_pane_g3

0x82dd,	// (0x0006c0de) cale_month_pane_g4_ParamLimits

0x82dd,	// (0x0006c0de) cale_month_pane_g4

0x8319,	// (0x0006c11a) cale_month_pane_g5_ParamLimits

0x8319,	// (0x0006c11a) cale_month_pane_g5

0x8355,	// (0x0006c156) cale_month_pane_g6_ParamLimits

0x8355,	// (0x0006c156) cale_month_pane_g6

0x8391,	// (0x0006c192) cale_month_pane_g7_ParamLimits

0x8391,	// (0x0006c192) cale_month_pane_g7

0x83dd,	// (0x0006c1de) cale_month_pane_g8_ParamLimits

0x83dd,	// (0x0006c1de) cale_month_pane_g8

0x8429,	// (0x0006c22a) cale_month_pane_g9_ParamLimits

0x8429,	// (0x0006c22a) cale_month_pane_g9

0x846f,	// (0x0006c270) cale_month_pane_g10_ParamLimits

0x846f,	// (0x0006c270) cale_month_pane_g10

0x84a9,	// (0x0006c2aa) cale_month_pane_g11_ParamLimits

0x84a9,	// (0x0006c2aa) cale_month_pane_g11

0x84e7,	// (0x0006c2e8) cale_month_pane_g12_ParamLimits

0x84e7,	// (0x0006c2e8) cale_month_pane_g12

0x8525,	// (0x0006c326) cale_month_pane_g13_ParamLimits

0x8525,	// (0x0006c326) cale_month_pane_g13

0x000c,

0xf2af,	// (0x000730b0) cale_month_pane_g_ParamLimits

0xf2af,	// (0x000730b0) cale_month_pane_g

0x8563,	// (0x0006c364) cale_month_week_pane

0x8576,	// (0x0006c377) grid_cale_month_pane_ParamLimits

0x8576,	// (0x0006c377) grid_cale_month_pane

0x85b4,	// (0x0006c3b5) cale_month_day_heading_pane_t1

0x8612,	// (0x0006c413) cale_month_day_heading_pane_t2

0x8677,	// (0x0006c478) cale_month_day_heading_pane_t3

0x86dc,	// (0x0006c4dd) cale_month_day_heading_pane_t4

0x8741,	// (0x0006c542) cale_month_day_heading_pane_t5

0x87a6,	// (0x0006c5a7) cale_month_day_heading_pane_t6

0x880b,	// (0x0006c60c) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x000730cb) cale_month_day_heading_pane_t

0x0054,	// (0x00063e55) bg_cale_side_pane_cp01

0x8880,	// (0x0006c681) cale_month_week_pane_t1

0x8897,	// (0x0006c698) cale_month_week_pane_t2

0x88ae,	// (0x0006c6af) cale_month_week_pane_t3

0x88c5,	// (0x0006c6c6) cale_month_week_pane_t4

0x88dc,	// (0x0006c6dd) cale_month_week_pane_t5

0x88f7,	// (0x0006c6f8) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x000730da) cale_month_week_pane_t

0x8916,	// (0x0006c717) cell_cale_month_pane_ParamLimits

0x8916,	// (0x0006c717) cell_cale_month_pane

0x89dc,	// (0x0006c7dd) cell_cale_month_pane_g1

0x89e8,	// (0x0006c7e9) cell_cale_month_pane_t1_ParamLimits

0x89e8,	// (0x0006c7e9) cell_cale_month_pane_t1

0x0062,	// (0x00063e63) grid_highlight_pane_cp08

0xf046,	// (0x00072e47) main_smil_g1

0x8a04,	// (0x0006c805) smil_status_pane

0x045f,	// (0x00064260) smil_text_pane

0x40ac,	// (0x00067ead) bg_popup_call3_rect_pane_g8

0x40b4,	// (0x00067eb5) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x00073393) bg_popup_call3_rect_pane_g

0x4341,	// (0x00068142) smil_status_volume_pane_g1

0x0469,	// (0x0006426a) smil_status_pane_t1

0x9de8,	// (0x0006dbe9) volume_smil_pane

0x0480,	// (0x00064281) list_smil_text_pane

0x8a17,	// (0x0006c818) scroll_pane_cp011

0x8a22,	// (0x0006c823) smil_text_list_pane_t1_ParamLimits

0x8a22,	// (0x0006c823) smil_text_list_pane_t1

0x8a9a,	// (0x0006c89b) aid_volume_smil_ParamLimits

0x8a9a,	// (0x0006c89b) aid_volume_smil

0xf046,	// (0x00072e47) smil_volume_pane_g1

0xf046,	// (0x00072e47) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x000730fa) smil_volume_pane_g

0xeff1,	// (0x00072df2) listscroll_cale_day_pane

0x04ac,	// (0x000642ad) bg_cale_pane

0x04c4,	// (0x000642c5) list_cale_pane

0x04d5,	// (0x000642d6) scroll_pane_cp09

0x04e6,	// (0x000642e7) cale_bg_pane_g1

0x04ee,	// (0x000642ef) cale_bg_pane_g2

0x04f6,	// (0x000642f7) cale_bg_pane_g3

0x04fe,	// (0x000642ff) cale_bg_pane_g4

0x0506,	// (0x00064307) cale_bg_pane_g5

0x050e,	// (0x0006430f) cale_bg_pane_g6

0x0516,	// (0x00064317) cale_bg_pane_g7

0x051e,	// (0x0006431f) cale_bg_pane_g8

0x0526,	// (0x00064327) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x000730ff) cale_bg_pane_g

0x8abc,	// (0x0006c8bd) list_cale_time_pane_ParamLimits

0x8abc,	// (0x0006c8bd) list_cale_time_pane

0x052e,	// (0x0006432f) list_cale_time_pane_g1_ParamLimits

0x052e,	// (0x0006432f) list_cale_time_pane_g1

0x053a,	// (0x0006433b) list_cale_time_pane_g2_ParamLimits

0x053a,	// (0x0006433b) list_cale_time_pane_g2

0x8ad8,	// (0x0006c8d9) list_cale_time_pane_g3_ParamLimits

0x8ad8,	// (0x0006c8d9) list_cale_time_pane_g3

0x8ae6,	// (0x0006c8e7) list_cale_time_pane_g4_ParamLimits

0x8ae6,	// (0x0006c8e7) list_cale_time_pane_g4

0x8af4,	// (0x0006c8f5) list_cale_time_pane_g5_ParamLimits

0x8af4,	// (0x0006c8f5) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x00073112) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x00073112) list_cale_time_pane_g

0x0554,	// (0x00064355) list_cale_time_pane_t1_ParamLimits

0x0554,	// (0x00064355) list_cale_time_pane_t1

0x057c,	// (0x0006437d) list_cale_time_pane_t2_ParamLimits

0x057c,	// (0x0006437d) list_cale_time_pane_t2

0x8dcb,	// (0x0006cbcc) aid_blid_cardinal_pane

0x8e0d,	// (0x0006cc0e) compass_pane_t4

0x05a4,	// (0x000643a5) list_cale_time_pane_t4_ParamLimits

0x05a4,	// (0x000643a5) list_cale_time_pane_t4

0x8e1b,	// (0x0006cc1c) compass_pane_t5

0x8e2b,	// (0x0006cc2c) compass_pane_t6

0x8e39,	// (0x0006cc3a) compass_pane_t7

0x0a4e,	// (0x0006484f) navi_pane_cc_t1

0x0bb5,	// (0x000649b6) aid_phob_thumbnail_center_pane

0x9508,	// (0x0006d309) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x0007311f) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x0007311f) list_cale_time_pane_t

0xe916,	// (0x00072717) bg_popup_window_pane_cp02_ParamLimits

0xe916,	// (0x00072717) bg_popup_window_pane_cp02

0x05cc,	// (0x000643cd) heading_pane_cp01_ParamLimits

0x05cc,	// (0x000643cd) heading_pane_cp01

0x05d8,	// (0x000643d9) loc_req_pane_ParamLimits

0x05d8,	// (0x000643d9) loc_req_pane

0x05e8,	// (0x000643e9) loc_type_pane_ParamLimits

0x05e8,	// (0x000643e9) loc_type_pane

0x05fa,	// (0x000643fb) loc_type_pane_t1_ParamLimits

0x05fa,	// (0x000643fb) loc_type_pane_t1

0x060c,	// (0x0006440d) loc_type_pane_t2_ParamLimits

0x060c,	// (0x0006440d) loc_type_pane_t2

0x061e,	// (0x0006441f) loc_type_pane_t3_ParamLimits

0x061e,	// (0x0006441f) loc_type_pane_t3

0x0002,

0xf325,	// (0x00073126) loc_type_pane_t_ParamLimits

0xf325,	// (0x00073126) loc_type_pane_t

0x0630,	// (0x00064431) list_loc_req_pane

0x063a,	// (0x0006443b) scroll_pane_cp012

0x8b02,	// (0x0006c903) list_single_loc_request_popup_menu_pane_ParamLimits

0x8b02,	// (0x0006c903) list_single_loc_request_popup_menu_pane

0x0645,	// (0x00064446) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x0645,	// (0x00064446) list_single_loc_request_popup_menu_pane_g1

0x0651,	// (0x00064452) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x0651,	// (0x00064452) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0007312d) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0007312d) list_single_loc_request_popup_menu_pane_g

0x065d,	// (0x0006445e) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x065d,	// (0x0006445e) list_single_loc_request_popup_menu_pane_t1

0x8b14,	// (0x0006c915) bg_popup_window_pane_cp03_ParamLimits

0x8b14,	// (0x0006c915) bg_popup_window_pane_cp03

0x8b22,	// (0x0006c923) heading_loc_req_pane_ParamLimits

0x8b22,	// (0x0006c923) heading_loc_req_pane

0x8b2e,	// (0x0006c92f) popup_dyc_status_message_window_g1_ParamLimits

0x8b2e,	// (0x0006c92f) popup_dyc_status_message_window_g1

0x8b3a,	// (0x0006c93b) popup_dyc_status_message_window_t1_ParamLimits

0x8b3a,	// (0x0006c93b) popup_dyc_status_message_window_t1

0x8b4c,	// (0x0006c94d) popup_dyc_status_message_window_t2_ParamLimits

0x8b4c,	// (0x0006c94d) popup_dyc_status_message_window_t2

0x8b5e,	// (0x0006c95f) popup_dyc_status_message_window_t3_ParamLimits

0x8b5e,	// (0x0006c95f) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x00073132) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x00073132) popup_dyc_status_message_window_t

0xecbf,	// (0x00072ac0) bg_heading_pane_cp01

0x067f,	// (0x00064480) heading_loc_req_pane_g1

0x0687,	// (0x00064488) heading_loc_req_pane_g2

0x068f,	// (0x00064490) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x00073139) heading_loc_req_pane_g

0x0697,	// (0x00064498) heading_loc_req_pane_t1

0x06a6,	// (0x000644a7) bg_popup_sub_pane_cp01_ParamLimits

0x06a6,	// (0x000644a7) bg_popup_sub_pane_cp01

0x06b4,	// (0x000644b5) popup_cale_events_window_g1_ParamLimits

0x06b4,	// (0x000644b5) popup_cale_events_window_g1

0x06d4,	// (0x000644d5) popup_cale_events_window_g2_ParamLimits

0x06d4,	// (0x000644d5) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0007316d) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0007316d) popup_cale_events_window_g

0x06f4,	// (0x000644f5) popup_cale_events_window_t1_ParamLimits

0x06f4,	// (0x000644f5) popup_cale_events_window_t1

0x0706,	// (0x00064507) popup_cale_events_window_t2_ParamLimits

0x0706,	// (0x00064507) popup_cale_events_window_t2

0x0744,	// (0x00064545) popup_cale_events_window_t3_ParamLimits

0x0744,	// (0x00064545) popup_cale_events_window_t3

0x077e,	// (0x0006457f) popup_cale_events_window_t4_ParamLimits

0x077e,	// (0x0006457f) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x00073172) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x00073172) popup_cale_events_window_t

0x8b88,	// (0x0006c989) call_type_pane

0x0bcd,	// (0x000649ce) popup_call_status_window_g1

0x8b94,	// (0x0006c995) popup_call_status_window_g2

0x8ba0,	// (0x0006c9a1) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x0007317b) popup_call_status_window_g

0x07b4,	// (0x000645b5) call_type_pane_g1

0x07bd,	// (0x000645be) call_type_pane_g2

0x0001,

0xf381,	// (0x00073182) call_type_pane_g

0xecbf,	// (0x00072ac0) bg_popup_sub_pane_cp02

0x07c6,	// (0x000645c7) listscroll_popup_wml_pane

0x07ce,	// (0x000645cf) list_wml_pane

0x07d8,	// (0x000645d9) scroll_pane_cp013

0x07e3,	// (0x000645e4) list_single_graphic_popup_wml_pane_ParamLimits

0x07e3,	// (0x000645e4) list_single_graphic_popup_wml_pane

0xf046,	// (0x00072e47) list_single_graphic_popup_wml_pane_g1

0x07f7,	// (0x000645f8) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x00073187) list_single_graphic_popup_wml_pane_g

0x07ff,	// (0x00064600) list_single_graphic_popup_wml_pane_t1

0x080d,	// (0x0006460e) aid_call_pane

0xef12,	// (0x00072d13) popup_clock_analogue_window_g1

0xef12,	// (0x00072d13) popup_clock_analogue_window_g2

0x8bac,	// (0x0006c9ad) popup_clock_analogue_window_g3

0x8bac,	// (0x0006c9ad) popup_clock_analogue_window_g4

0xf046,	// (0x00072e47) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x0007318c) popup_clock_analogue_window_g

0x8bb4,	// (0x0006c9b5) popup_clock_analogue_window_t1

0x8bc2,	// (0x0006c9c3) clock_digital_number_pane_ParamLimits

0x8bc2,	// (0x0006c9c3) clock_digital_number_pane

0x8bce,	// (0x0006c9cf) clock_digital_number_pane_cp02_ParamLimits

0x8bce,	// (0x0006c9cf) clock_digital_number_pane_cp02

0x8bda,	// (0x0006c9db) clock_digital_number_pane_cp03_ParamLimits

0x8bda,	// (0x0006c9db) clock_digital_number_pane_cp03

0x8be6,	// (0x0006c9e7) clock_digital_number_pane_cp04_ParamLimits

0x8be6,	// (0x0006c9e7) clock_digital_number_pane_cp04

0x8bf6,	// (0x0006c9f7) clock_digital_separator_pane_ParamLimits

0x8bf6,	// (0x0006c9f7) clock_digital_separator_pane

0x8c02,	// (0x0006ca03) popup_clock_digital_window_t1

0xf046,	// (0x00072e47) clock_digital_number_pane_g1

0xf046,	// (0x00072e47) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x000730fa) clock_digital_number_pane_g

0xf046,	// (0x00072e47) clock_digital_separator_pane_g1

0xf046,	// (0x00072e47) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x000730fa) clock_digital_separator_pane_g

0xecbf,	// (0x00072ac0) bg_popup_window_pane_cp04

0x0890,	// (0x00064691) heading_pane_cp03

0x0898,	// (0x00064699) listscroll_popup_gms_pane

0x08a0,	// (0x000646a1) grid_large_graphic_popup_pane

0x08aa,	// (0x000646ab) listscroll_popup_gms_pane_g1

0x08b2,	// (0x000646b3) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x00073197) listscroll_popup_gms_pane_g

0x02c2,	// (0x000640c3) scroll_pane_cp014

0x8c1f,	// (0x0006ca20) cell_large_graphic_popup_pane_ParamLimits

0x8c1f,	// (0x0006ca20) cell_large_graphic_popup_pane

0x8c37,	// (0x0006ca38) cell_large_graphic_popup_pane_g1_ParamLimits

0x8c37,	// (0x0006ca38) cell_large_graphic_popup_pane_g1

0x08ba,	// (0x000646bb) cell_large_graphic_popup_pane_g2_ParamLimits

0x08ba,	// (0x000646bb) cell_large_graphic_popup_pane_g2

0x08c6,	// (0x000646c7) cell_large_graphic_popup_pane_g3_ParamLimits

0x08c6,	// (0x000646c7) cell_large_graphic_popup_pane_g3

0x08d3,	// (0x000646d4) cell_large_graphic_popup_pane_g4_ParamLimits

0x08d3,	// (0x000646d4) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x0007319c) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x0007319c) cell_large_graphic_popup_pane_g

0x08e3,	// (0x000646e4) grid_highlight_pane_cp010

0xf046,	// (0x00072e47) bg_popup_call_pane_g1

0x08ed,	// (0x000646ee) list_single_graphic_popup_conf_pane_ParamLimits

0x08ed,	// (0x000646ee) list_single_graphic_popup_conf_pane

0x0900,	// (0x00064701) list_highlight_pane_cp01

0x0909,	// (0x0006470a) list_single_graphic_popup_conf_pane_g1

0x0911,	// (0x00064712) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x000731a5) list_single_graphic_popup_conf_pane_g

0x0919,	// (0x0006471a) list_single_graphic_popup_conf_pane_t1

0x0927,	// (0x00064728) linegrid_cams_pane_g1

0x8c43,	// (0x0006ca44) linegrid_cams_pane_g2

0x0095,	// (0x00063e96) linegrid_cams_pane_g3

0x0930,	// (0x00064731) linegrid_cams_pane_g4

0x8c4c,	// (0x0006ca4d) linegrid_cams_pane_g5

0x8c55,	// (0x0006ca56) linegrid_cams_pane_g6

0x009e,	// (0x00063e9f) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x000731aa) linegrid_cams_pane_g

0x0939,	// (0x0006473a) popup_clock_analogue_window

0x0939,	// (0x0006473a) popup_clock_digital_window

0xecbf,	// (0x00072ac0) popup_phob_thumbnail_window

0xf046,	// (0x00072e47) call_video_uplink_pane_g1

0x0942,	// (0x00064743) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x000731b9) call_video_uplink_pane_g

0x094a,	// (0x0006474b) video_uplink_pane

0x0952,	// (0x00064753) mce_image_pane_g1

0x8c5e,	// (0x0006ca5f) mce_image_pane_g2

0x8c68,	// (0x0006ca69) mce_image_pane_g3

0x8c70,	// (0x0006ca71) mce_image_pane_g4

0x8c78,	// (0x0006ca79) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x000731be) mce_image_pane_g

0x095c,	// (0x0006475d) control_top_pane_stacon_cp01_ParamLimits

0x095c,	// (0x0006475d) control_top_pane_stacon_cp01

0x0970,	// (0x00064771) uni_indicator_pane_stacon_cp01_ParamLimits

0x0970,	// (0x00064771) uni_indicator_pane_stacon_cp01

0x0981,	// (0x00064782) bg_popup_sub_pane_cp03

0x8c80,	// (0x0006ca81) chi_dic_find_pane

0x8c88,	// (0x0006ca89) listscroll_chi_dic_pane

0x8c91,	// (0x0006ca92) main_pane_chidic_g1

0x098b,	// (0x0006478c) chi_dic_find_pane_t1

0x0999,	// (0x0006479a) find_chidic_pane

0x09a2,	// (0x000647a3) chi_dic_list_pane_ParamLimits

0x09a2,	// (0x000647a3) chi_dic_list_pane

0x09b3,	// (0x000647b4) scroll_pane_cp020

0x09bb,	// (0x000647bc) find_chidic_pane_t1

0xecbf,	// (0x00072ac0) input_focus_pane_cp06

0x8ca4,	// (0x0006caa5) list_chi_dic_pane_ParamLimits

0x8ca4,	// (0x0006caa5) list_chi_dic_pane

0x8cbe,	// (0x0006cabf) list_chi_dic_pane_t1_ParamLimits

0x8cbe,	// (0x0006cabf) list_chi_dic_pane_t1

0xecbf,	// (0x00072ac0) list_highlight_pane_cp020

0x09ca,	// (0x000647cb) bg_cale_heading_pane_g1

0x8cd1,	// (0x0006cad2) bg_cale_heading_pane_g2

0x8cd9,	// (0x0006cada) bg_cale_heading_pane_g3

0x8ce1,	// (0x0006cae2) bg_cale_heading_pane_g4

0x8ceb,	// (0x0006caec) bg_cale_heading_pane_g5

0x8cf5,	// (0x0006caf6) bg_cale_heading_pane_g6

0x8cfd,	// (0x0006cafe) bg_cale_heading_pane_g7

0x8d05,	// (0x0006cb06) bg_cale_heading_pane_g8

0x8d0f,	// (0x0006cb10) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x000731c9) bg_cale_heading_pane_g

0x09ca,	// (0x000647cb) bg_cale_side_pane_g1

0x8d19,	// (0x0006cb1a) bg_cale_side_pane_g2

0x8d23,	// (0x0006cb24) bg_cale_side_pane_g3

0x8d2d,	// (0x0006cb2e) bg_cale_side_pane_g4

0x8d37,	// (0x0006cb38) bg_cale_side_pane_g5

0x8d41,	// (0x0006cb42) bg_cale_side_pane_g6

0x8d4b,	// (0x0006cb4c) bg_cale_side_pane_g7

0x8d55,	// (0x0006cb56) bg_cale_side_pane_g8

0x8d5d,	// (0x0006cb5e) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x000731dc) bg_cale_side_pane_g

0x8d65,	// (0x0006cb66) popup_call_status_window_ParamLimits

0x8d65,	// (0x0006cb66) popup_call_status_window

0x09d2,	// (0x000647d3) stacon_top_pane

0x09da,	// (0x000647db) status_pane_ParamLimits

0x09da,	// (0x000647db) status_pane

0x09ef,	// (0x000647f0) status_small_pane

0x09f7,	// (0x000647f8) control_pane

0xecbf,	// (0x00072ac0) stacon_bottom_pane

0x09ff,	// (0x00064800) list_single_mce_smart_pane_t1_ParamLimits

0x09ff,	// (0x00064800) list_single_mce_smart_pane_t1

0x0a12,	// (0x00064813) list_single_mce_smart_pane_t2_ParamLimits

0x0a12,	// (0x00064813) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x000731ef) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x000731ef) list_single_mce_smart_pane_t

0x8d71,	// (0x0006cb72) compass_pane

0x8d7d,	// (0x0006cb7e) main_location2_pane_t1

0x8d91,	// (0x0006cb92) main_location2_pane_t2

0x8da5,	// (0x0006cba6) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x000731f4) main_location2_pane_t

0x0a31,	// (0x00064832) compass_pane_g1_ParamLimits

0x0a31,	// (0x00064832) compass_pane_g1

0x8def,	// (0x0006cbf0) compass_pane_t1

0x8dfe,	// (0x0006cbff) compass_pane_t2

0x0005,

0xf3fc,	// (0x000731fd) compass_pane_t

0x8e49,	// (0x0006cc4a) text_secondary_cp61

0x0a45,	// (0x00064846) navi_pane_cams_g5

0x0a68,	// (0x00064869) navi_pane_im_t1

0x0a76,	// (0x00064877) navi_pane_mp_g1_ParamLimits

0x0a76,	// (0x00064877) navi_pane_mp_g1

0x0a8a,	// (0x0006488b) navi_pane_mp_g2_ParamLimits

0x0a8a,	// (0x0006488b) navi_pane_mp_g2

0x0a96,	// (0x00064897) navi_pane_mp_g3_ParamLimits

0x0a96,	// (0x00064897) navi_pane_mp_g3

0x0002,

0xf410,	// (0x00073211) navi_pane_mp_g_ParamLimits

0xf410,	// (0x00073211) navi_pane_mp_g

0x0aa2,	// (0x000648a3) navi_pane_mp_t1

0x0ab0,	// (0x000648b1) navi_pane_mp_t2

0x0002,

0xf417,	// (0x00073218) navi_pane_mp_t

0x0aec,	// (0x000648ed) navi_pane_vt_g1

0x0aa2,	// (0x000648a3) navi_pane_vt_t1

0x0af4,	// (0x000648f5) navi_slider_pane

0x0afc,	// (0x000648fd) zooming_pane

0x0b04,	// (0x00064905) navi_slider_pane_g1

0x8f5e,	// (0x0006cd5f) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x0007321f) navi_slider_pane_g

0x0b3a,	// (0x0006493b) aid_levels_zoom

0x0b42,	// (0x00064943) zooming_pane_g1

0x0b4a,	// (0x0006494b) zooming_pane_g2

0x0b4a,	// (0x0006494b) zooming_pane_g3

0x0002,

0xf42d,	// (0x0007322e) zooming_pane_g

0x0b52,	// (0x00064953) level_10_zoom

0x0b5b,	// (0x0006495c) level_11_zoom

0x0b64,	// (0x00064965) level_1_zoom

0x0b6d,	// (0x0006496e) level_2_zoom

0x0b76,	// (0x00064977) level_3_zoom

0x0b7f,	// (0x00064980) level_4_zoom

0x0b88,	// (0x00064989) level_5_zoom

0x0b91,	// (0x00064992) level_6_zoom

0x0b9a,	// (0x0006499b) level_7_zoom

0x0ba3,	// (0x000649a4) level_8_zoom

0x0bac,	// (0x000649ad) level_9_zoom

0x0bbd,	// (0x000649be) popup_phob_thumbnail_window_g1

0x0bc5,	// (0x000649c6) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x00073235) popup_phob_thumbnail_window_g

0x420e,	// (0x0006800f) level_1_location

0x4216,	// (0x00068017) level_2_location

0x421e,	// (0x0006801f) level_3_location

0x4226,	// (0x00068027) level_4_location

0x0afc,	// (0x000648fd) level_5_location

0x8f70,	// (0x0006cd71) mce_icon_pane_g1

0x8f78,	// (0x0006cd79) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0007323a) mce_icon_pane_g

0x8f80,	// (0x0006cd81) main_mup_pane_g1_ParamLimits

0x8f80,	// (0x0006cd81) main_mup_pane_g1

0x8f98,	// (0x0006cd99) main_mup_pane_g2_ParamLimits

0x8f98,	// (0x0006cd99) main_mup_pane_g2

0x8fb4,	// (0x0006cdb5) main_mup_pane_g3_ParamLimits

0x8fb4,	// (0x0006cdb5) main_mup_pane_g3

0x8fd0,	// (0x0006cdd1) main_mup_pane_g4_ParamLimits

0x8fd0,	// (0x0006cdd1) main_mup_pane_g4

0x8fec,	// (0x0006cded) main_mup_pane_g5_ParamLimits

0x8fec,	// (0x0006cded) main_mup_pane_g5

0x900d,	// (0x0006ce0e) main_mup_pane_g6_ParamLimits

0x900d,	// (0x0006ce0e) main_mup_pane_g6

0x9029,	// (0x0006ce2a) main_mup_pane_g7_ParamLimits

0x9029,	// (0x0006ce2a) main_mup_pane_g7

0x9045,	// (0x0006ce46) main_mup_pane_g8_ParamLimits

0x9045,	// (0x0006ce46) main_mup_pane_g8

0x9065,	// (0x0006ce66) main_mup_pane_g9_ParamLimits

0x9065,	// (0x0006ce66) main_mup_pane_g9

0x9084,	// (0x0006ce85) main_mup_pane_g10_ParamLimits

0x9084,	// (0x0006ce85) main_mup_pane_g10

0x90a3,	// (0x0006cea4) main_mup_pane_g11_ParamLimits

0x90a3,	// (0x0006cea4) main_mup_pane_g11

0x90bb,	// (0x0006cebc) main_mup_pane_g12_ParamLimits

0x90bb,	// (0x0006cebc) main_mup_pane_g12

0x90c9,	// (0x0006ceca) main_mup_pane_g13_ParamLimits

0x90c9,	// (0x0006ceca) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0007323f) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0007323f) main_mup_pane_g

0x90df,	// (0x0006cee0) main_mup_pane_t1_ParamLimits

0x90df,	// (0x0006cee0) main_mup_pane_t1

0x90fc,	// (0x0006cefd) main_mup_pane_t2_ParamLimits

0x90fc,	// (0x0006cefd) main_mup_pane_t2

0x9116,	// (0x0006cf17) main_mup_pane_t3_ParamLimits

0x9116,	// (0x0006cf17) main_mup_pane_t3

0x9130,	// (0x0006cf31) main_mup_pane_t4_ParamLimits

0x9130,	// (0x0006cf31) main_mup_pane_t4

0x9142,	// (0x0006cf43) main_mup_pane_t5_ParamLimits

0x9142,	// (0x0006cf43) main_mup_pane_t5

0x9154,	// (0x0006cf55) main_mup_pane_t6_ParamLimits

0x9154,	// (0x0006cf55) main_mup_pane_t6

0x0005,

0xf459,	// (0x0007325a) main_mup_pane_t_ParamLimits

0xf459,	// (0x0007325a) main_mup_pane_t

0x916a,	// (0x0006cf6b) mup_progress_pane_ParamLimits

0x916a,	// (0x0006cf6b) mup_progress_pane

0x9176,	// (0x0006cf77) mup_visualizer_pane_ParamLimits

0x9176,	// (0x0006cf77) mup_visualizer_pane

0x91b0,	// (0x0006cfb1) mup_volume_pane_ParamLimits

0x91b0,	// (0x0006cfb1) mup_volume_pane

0x0bcd,	// (0x000649ce) mup_visualizer_pane_g1_ParamLimits

0x0bcd,	// (0x000649ce) mup_visualizer_pane_g1

0x0bcd,	// (0x000649ce) mup_visualizer_pane_g2_ParamLimits

0x0bcd,	// (0x000649ce) mup_visualizer_pane_g2

0x0a31,	// (0x00064832) mup_visualizer_pane_g3_ParamLimits

0x0a31,	// (0x00064832) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x00073267) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x00073267) mup_visualizer_pane_g

0xf046,	// (0x00072e47) mup_volume_pane_g1

0x0be3,	// (0x000649e4) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0007326e) mup_volume_pane_g

0xf046,	// (0x00072e47) mup_progress_pane_g1

0x0bec,	// (0x000649ed) mup_progress_pane_g2

0x0bf5,	// (0x000649f6) mup_progress_pane_g3

0x0002,

0xf472,	// (0x00073273) mup_progress_pane_g

0xecbf,	// (0x00072ac0) bg_popup_window_pane_cp05

0x0bfe,	// (0x000649ff) heading_pane_cp02_ParamLimits

0x0bfe,	// (0x000649ff) heading_pane_cp02

0x0c18,	// (0x00064a19) list_popup_blid_pane

0x0c20,	// (0x00064a21) list_blid_sat_info_pane_ParamLimits

0x0c20,	// (0x00064a21) list_blid_sat_info_pane

0x0c33,	// (0x00064a34) list_blid_sat_info_pane_g1

0x0c3b,	// (0x00064a3c) list_blid_sat_info_pane_t1

0x92bd,	// (0x0006d0be) mup_equalizer_pane_ParamLimits

0x92bd,	// (0x0006d0be) mup_equalizer_pane

0x92de,	// (0x0006d0df) mup_equalizer_pane_cp1_ParamLimits

0x92de,	// (0x0006d0df) mup_equalizer_pane_cp1

0x92ff,	// (0x0006d100) mup_equalizer_pane_cp2_ParamLimits

0x92ff,	// (0x0006d100) mup_equalizer_pane_cp2

0x9320,	// (0x0006d121) mup_equalizer_pane_cp3_ParamLimits

0x9320,	// (0x0006d121) mup_equalizer_pane_cp3

0x9341,	// (0x0006d142) mup_equalizer_pane_cp4_ParamLimits

0x9341,	// (0x0006d142) mup_equalizer_pane_cp4

0x9362,	// (0x0006d163) mup_equalizer_pane_cp5

0x9378,	// (0x0006d179) mup_equalizer_pane_cp6

0x9390,	// (0x0006d191) mup_equalizer_pane_cp7

0x412c,	// (0x00067f2d) bg_popup_call_poc_act_pane_g9

0x4134,	// (0x00067f35) bg_popup_call_poc_act_pane_g10

0x413c,	// (0x00067f3d) bg_popup_call_poc_act_pane_g11

0x000a,

0xef1a,	// (0x00072d1b) mup_scale_pane

0xf046,	// (0x00072e47) mup_scale_pane_g1

0x0c49,	// (0x00064a4a) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0007328f) mup_scale_pane_g

0x0c6d,	// (0x00064a6e) msg_data_pane

0x0c75,	// (0x00064a76) scroll_pane_cp017

0x5d52,	// (0x00069b53) bg_list_pane_cp04_ParamLimits

0x5d52,	// (0x00069b53) bg_list_pane_cp04

0x0c7d,	// (0x00064a7e) msg_data_pane_g1

0x93ba,	// (0x0006d1bb) msg_data_pane_g2

0x93c4,	// (0x0006d1c5) msg_data_pane_g3

0x93cc,	// (0x0006d1cd) msg_data_pane_g4

0x93d4,	// (0x0006d1d5) msg_data_pane_g5

0x93dc,	// (0x0006d1dd) msg_data_pane_g6

0x93e4,	// (0x0006d1e5) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0007329e) msg_data_pane_g

0x5d78,	// (0x00069b79) msg_text_pane_ParamLimits

0x5d78,	// (0x00069b79) msg_text_pane

0x93ec,	// (0x0006d1ed) qrid_highlight_pane_cp011_ParamLimits

0x93ec,	// (0x0006d1ed) qrid_highlight_pane_cp011

0xecbf,	// (0x00072ac0) msg_body_pane

0xecbf,	// (0x00072ac0) msg_header_pane

0x0c8e,	// (0x00064a8f) input_focus_pane_cp07

0x5dbb,	// (0x00069bbc) msg_header_pane_t1_ParamLimits

0x5dbb,	// (0x00069bbc) msg_header_pane_t1

0x5dcd,	// (0x00069bce) msg_header_pane_t2_ParamLimits

0x5dcd,	// (0x00069bce) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x000732b2) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x000732b2) msg_header_pane_t

0x0ca3,	// (0x00064aa4) msg_body_pane_g1

0x5ddf,	// (0x00069be0) msg_body_pane_t1_ParamLimits

0x5ddf,	// (0x00069be0) msg_body_pane_t1

0x5e10,	// (0x00069c11) msg_body_pane_t2_ParamLimits

0x5e10,	// (0x00069c11) msg_body_pane_t2

0x5e22,	// (0x00069c23) msg_body_pane_t3_ParamLimits

0x5e22,	// (0x00069c23) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x000732b7) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x000732b7) msg_body_pane_t

0x9458,	// (0x0006d259) main_viewer_pane_g1_ParamLimits

0x9458,	// (0x0006d259) main_viewer_pane_g1

0x9464,	// (0x0006d265) main_viewer_pane_g2_ParamLimits

0x9464,	// (0x0006d265) main_viewer_pane_g2

0x9470,	// (0x0006d271) main_viewer_pane_g3_ParamLimits

0x9470,	// (0x0006d271) main_viewer_pane_g3

0x9481,	// (0x0006d282) main_viewer_pane_g4_ParamLimits

0x9481,	// (0x0006d282) main_viewer_pane_g4

0x9492,	// (0x0006d293) main_viewer_pane_g5_ParamLimits

0x9492,	// (0x0006d293) main_viewer_pane_g5

0x9492,	// (0x0006d293) main_viewer_pane_g7_ParamLimits

0x9492,	// (0x0006d293) main_viewer_pane_g7

0x94a4,	// (0x0006d2a5) main_viewer_pane_g8_ParamLimits

0x94a4,	// (0x0006d2a5) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x000732c7) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x000732c7) main_viewer_pane_g

0x0ce1,	// (0x00064ae2) viewer_content_pane_ParamLimits

0x0ce1,	// (0x00064ae2) viewer_content_pane

0x94dc,	// (0x0006d2dd) main_postcard_pane_g1_ParamLimits

0x94dc,	// (0x0006d2dd) main_postcard_pane_g1

0x94ea,	// (0x0006d2eb) main_postcard_pane_g2_ParamLimits

0x94ea,	// (0x0006d2eb) main_postcard_pane_g2

0x94f8,	// (0x0006d2f9) main_postcard_pane_g3_ParamLimits

0x94f8,	// (0x0006d2f9) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x000732d8) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x000732d8) main_postcard_pane_g

0x9508,	// (0x0006d309) main_postcard_pane_g4

0x432e,	// (0x0006812f) smil_status_volume_pane_g2

0x9534,	// (0x0006d335) postcard_pane_ParamLimits

0x9534,	// (0x0006d335) postcard_pane

0x0bcd,	// (0x000649ce) postcard_pane_g1_ParamLimits

0x0bcd,	// (0x000649ce) postcard_pane_g1

0x9566,	// (0x0006d367) postcard_pane_g2_ParamLimits

0x9566,	// (0x0006d367) postcard_pane_g2

0x9572,	// (0x0006d373) postcard_pane_g3_ParamLimits

0x9572,	// (0x0006d373) postcard_pane_g3

0x0cfd,	// (0x00064afe) postcard_pane_g4_ParamLimits

0x0cfd,	// (0x00064afe) postcard_pane_g4

0x957e,	// (0x0006d37f) postcard_pane_g5_ParamLimits

0x957e,	// (0x0006d37f) postcard_pane_g5

0x958a,	// (0x0006d38b) postcard_pane_g6_ParamLimits

0x958a,	// (0x0006d38b) postcard_pane_g6

0x0cef,	// (0x00064af0) postcard_pane_g7_ParamLimits

0x0cef,	// (0x00064af0) postcard_pane_g7

0x0006,

0xf4e4,	// (0x000732e5) postcard_pane_g_ParamLimits

0xf4e4,	// (0x000732e5) postcard_pane_g

0x9596,	// (0x0006d397) main_mp2_pane_g1_ParamLimits

0x9596,	// (0x0006d397) main_mp2_pane_g1

0x95a2,	// (0x0006d3a3) main_mp2_pane_g2_ParamLimits

0x95a2,	// (0x0006d3a3) main_mp2_pane_g2

0x95ae,	// (0x0006d3af) main_mp2_pane_g3_ParamLimits

0x95ae,	// (0x0006d3af) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x000732f4) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x000732f4) main_mp2_pane_g

0x95ba,	// (0x0006d3bb) main_mp2_pane_t1_ParamLimits

0x95ba,	// (0x0006d3bb) main_mp2_pane_t1

0x95d1,	// (0x0006d3d2) main_mp2_pane_t2_ParamLimits

0x95d1,	// (0x0006d3d2) main_mp2_pane_t2

0x95e5,	// (0x0006d3e6) main_mp2_pane_t3_ParamLimits

0x95e5,	// (0x0006d3e6) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x000732fb) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x000732fb) main_mp2_pane_t

0x0d0b,	// (0x00064b0c) pec_content_pane_ParamLimits

0x0d0b,	// (0x00064b0c) pec_content_pane

0x02c2,	// (0x000640c3) scroll_pane_cp015

0x0d1d,	// (0x00064b1e) pec_attribute_pane_ParamLimits

0x0d1d,	// (0x00064b1e) pec_attribute_pane

0x95f7,	// (0x0006d3f8) pec_content_pane_g1_ParamLimits

0x95f7,	// (0x0006d3f8) pec_content_pane_g1

0x0d2d,	// (0x00064b2e) pec_content_pane_t1_ParamLimits

0x0d2d,	// (0x00064b2e) pec_content_pane_t1

0x0d3f,	// (0x00064b40) pec_content_pane_t2_ParamLimits

0x0d3f,	// (0x00064b40) pec_content_pane_t2

0x0001,

0xf501,	// (0x00073302) pec_content_pane_t_ParamLimits

0xf501,	// (0x00073302) pec_content_pane_t

0x9603,	// (0x0006d404) list_single_graphic_pane_cp01_ParamLimits

0x9603,	// (0x0006d404) list_single_graphic_pane_cp01

0xef1a,	// (0x00072d1b) bg_popup_sub_pane_cp04

0x0d51,	// (0x00064b52) popup_mup_playback_window_g1

0x0d5d,	// (0x00064b5e) popup_mup_playback_window_t1

0x0d72,	// (0x00064b73) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x00073307) popup_mup_playback_window_t

0x0da9,	// (0x00064baa) main_image_pane_g1_ParamLimits

0x0da9,	// (0x00064baa) main_image_pane_g1

0x0dec,	// (0x00064bed) scroll_pane_cp018_ParamLimits

0x0dec,	// (0x00064bed) scroll_pane_cp018

0x0e04,	// (0x00064c05) scroll_pane_cp016_ParamLimits

0x0e04,	// (0x00064c05) scroll_pane_cp016

0x969c,	// (0x0006d49d) smil2_image_pane_ParamLimits

0x969c,	// (0x0006d49d) smil2_image_pane

0x96cc,	// (0x0006d4cd) smil2_root_pane_ParamLimits

0x96cc,	// (0x0006d4cd) smil2_root_pane

0x96f8,	// (0x0006d4f9) smil2_text_pane_ParamLimits

0x96f8,	// (0x0006d4f9) smil2_text_pane

0xecbf,	// (0x00072ac0) bg_list_pane_cp06

0x0e40,	// (0x00064c41) grid_radio_pane

0xecbf,	// (0x00072ac0) bg_popup_window_pane_cp06

0x0e48,	// (0x00064c49) main_fmradio_pane_t1

0x0890,	// (0x00064691) heading_pane_cp04

0x0e56,	// (0x00064c57) main_fmradio_pane_t2

0x4144,	// (0x00067f45) popup_cale_lunar_info_window_g1

0x0e64,	// (0x00064c65) main_fmradio_pane_t3

0x414c,	// (0x00067f4d) popup_cale_lunar_info_window_g2

0x0e72,	// (0x00064c73) main_fmradio_pane_t4

0x0001,

0x0e80,	// (0x00064c81) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x000733e2) popup_cale_lunar_info_window_g

0xf51b,	// (0x0007331c) main_fmradio_pane_t

0x0e8e,	// (0x00064c8f) wait_bar_pane_cp03

0x0e96,	// (0x00064c97) cell_fmradio_pane_ParamLimits

0x0e96,	// (0x00064c97) cell_fmradio_pane

0x0cef,	// (0x00064af0) cell_fmradio_pane_g1_ParamLimits

0x0cef,	// (0x00064af0) cell_fmradio_pane_g1

0xecbf,	// (0x00072ac0) grid_highlight_pane_cp011

0x0ea9,	// (0x00064caa) poc_content_pane_ParamLimits

0x0ea9,	// (0x00064caa) poc_content_pane

0x0ebb,	// (0x00064cbc) scroll_pane_cp019

0x9738,	// (0x0006d539) popup_call_poc_act_window_ParamLimits

0x9738,	// (0x0006d539) popup_call_poc_act_window

0x9745,	// (0x0006d546) popup_call_poc_inact_window_ParamLimits

0x9745,	// (0x0006d546) popup_call_poc_inact_window

0xf5b8,	// (0x000733b9) bg_popup_call_poc_act_pane_g

0x40bc,	// (0x00067ebd) bg_popup_call_poc_inact_pane_g1

0x40c4,	// (0x00067ec5) bg_popup_call_poc_inact_pane_g2

0x0ec3,	// (0x00064cc4) popup_call_poc_act_window_g2

0x40cc,	// (0x00067ecd) bg_popup_call_poc_inact_pane_g3

0x40d4,	// (0x00067ed5) bg_popup_call_poc_inact_pane_g4

0x40dc,	// (0x00067edd) bg_popup_call_poc_inact_pane_g5

0x0ecb,	// (0x00064ccc) popup_call_poc_act_window_t1_ParamLimits

0x0ecb,	// (0x00064ccc) popup_call_poc_act_window_t1

0x0ef3,	// (0x00064cf4) popup_call_poc_act_window_t2_ParamLimits

0x0ef3,	// (0x00064cf4) popup_call_poc_act_window_t2

0x0f1b,	// (0x00064d1c) popup_call_poc_act_window_t3_ParamLimits

0x0f1b,	// (0x00064d1c) popup_call_poc_act_window_t3

0x0f43,	// (0x00064d44) popup_call_poc_act_window_t4_ParamLimits

0x0f43,	// (0x00064d44) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x00073327) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x00073327) popup_call_poc_act_window_t

0x40e4,	// (0x00067ee5) bg_popup_call_poc_inact_pane_g6

0x40ec,	// (0x00067eed) bg_popup_call_poc_inact_pane_g7

0x40f4,	// (0x00067ef5) bg_popup_call_poc_inact_pane_g8

0x0f55,	// (0x00064d56) popup_call_poc_inact_window_g2

0x40fc,	// (0x00067efd) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x000733a6) bg_popup_call_poc_inact_pane_g

0x0f5d,	// (0x00064d5e) popup_call_poc_inact_window_t1_ParamLimits

0x0f5d,	// (0x00064d5e) popup_call_poc_inact_window_t1

0x0f72,	// (0x00064d73) popup_call_poc_inact_window_t2_ParamLimits

0x0f72,	// (0x00064d73) popup_call_poc_inact_window_t2

0x0f87,	// (0x00064d88) popup_call_poc_inact_window_t3_ParamLimits

0x0f87,	// (0x00064d88) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x00073330) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x00073330) popup_call_poc_inact_window_t

0x42b4,	// (0x000680b5) context_pane_ParamLimits

0x9d35,	// (0x0006db36) signal_pane_ParamLimits

0x0afc,	// (0x000648fd) main_call2_pane

0x42a2,	// (0x000680a3) popup_phob_thumbnail2_window_ParamLimits

0x42a2,	// (0x000680a3) popup_phob_thumbnail2_window

0x9406,	// (0x0006d207) aid_hotspot_pointer_arrow_pane

0x940e,	// (0x0006d20f) aid_hotspot_pointer_hand_pane

0x9a67,	// (0x0006d868) phob_pre_status_pane_g5

0x796f,	// (0x0006b770) cams_zoom_pane_ParamLimits

0x797b,	// (0x0006b77c) image_vga_pane_ParamLimits

0x798a,	// (0x0006b78b) main_camera_pane_g1_ParamLimits

0x7998,	// (0x0006b799) main_camera_pane_g2_ParamLimits

0x79a4,	// (0x0006b7a5) main_camera_pane_g3_ParamLimits

0x79b0,	// (0x0006b7b1) main_camera_pane_g4_ParamLimits

0x79bc,	// (0x0006b7bd) main_camera_pane_g5_ParamLimits

0x79c8,	// (0x0006b7c9) main_camera_pane_g6_ParamLimits

0x79d4,	// (0x0006b7d5) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0007302f) main_camera_pane_g_ParamLimits

0x79e0,	// (0x0006b7e1) main_camera_pane_t1_ParamLimits

0x79f2,	// (0x0006b7f3) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x00073040) main_camera_pane_t_ParamLimits

0xef1a,	// (0x00072d1b) bg_popup_preview_window_pane_cp01_ParamLimits

0xef1a,	// (0x00072d1b) bg_popup_preview_window_pane_cp01

0x0f9c,	// (0x00064d9d) popup_phob_thumbnail2_window_g1_ParamLimits

0x0f9c,	// (0x00064d9d) popup_phob_thumbnail2_window_g1

0xecbf,	// (0x00072ac0) call2_cli_visual_pane

0x9761,	// (0x0006d562) popup_call2_audio_conf_window_ParamLimits

0x9761,	// (0x0006d562) popup_call2_audio_conf_window

0x9776,	// (0x0006d577) popup_call2_audio_first_window_ParamLimits

0x9776,	// (0x0006d577) popup_call2_audio_first_window

0x9814,	// (0x0006d615) popup_call2_audio_in_window_ParamLimits

0x9814,	// (0x0006d615) popup_call2_audio_in_window

0x9856,	// (0x0006d657) popup_call2_audio_out_window_ParamLimits

0x9856,	// (0x0006d657) popup_call2_audio_out_window

0x98b8,	// (0x0006d6b9) popup_call2_audio_second_window_ParamLimits

0x98b8,	// (0x0006d6b9) popup_call2_audio_second_window

0x9916,	// (0x0006d717) popup_call2_audio_wait_window_ParamLimits

0x9916,	// (0x0006d717) popup_call2_audio_wait_window

0xecbf,	// (0x00072ac0) bg_popup_call2_act_pane_cp03

0xeefc,	// (0x00072cfd) list_conf_pane_cp

0x0fa8,	// (0x00064da9) popup_call2_audio_conf_window_t1

0x08ed,	// (0x000646ee) list_single_graphic_popup_conf2_pane_ParamLimits

0x08ed,	// (0x000646ee) list_single_graphic_popup_conf2_pane

0x0900,	// (0x00064701) list_highlight_pane_cp04

0x0fb6,	// (0x00064db7) list_single_graphic_popup_conf2_pane_g1

0x0911,	// (0x00064712) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x00073337) list_single_graphic_popup_conf2_pane_g

0x0fc0,	// (0x00064dc1) list_single_graphic_popup_conf2_pane_t1

0x0fce,	// (0x00064dcf) bg_popup_call2_act_pane_cp01_ParamLimits

0x0fce,	// (0x00064dcf) bg_popup_call2_act_pane_cp01

0x1058,	// (0x00064e59) call_type_pane_cp05_ParamLimits

0x1058,	// (0x00064e59) call_type_pane_cp05

0x10ac,	// (0x00064ead) popup_call2_audio_second_window_g1_ParamLimits

0x10ac,	// (0x00064ead) popup_call2_audio_second_window_g1

0x1100,	// (0x00064f01) popup_call2_audio_second_window_g2_ParamLimits

0x1100,	// (0x00064f01) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x0007333c) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x0007333c) popup_call2_audio_second_window_g

0x1165,	// (0x00064f66) popup_call2_audio_second_window_t1_ParamLimits

0x1165,	// (0x00064f66) popup_call2_audio_second_window_t1

0x3540,	// (0x00067341) popup_call2_audio_second_window_t2_ParamLimits

0x3540,	// (0x00067341) popup_call2_audio_second_window_t2

0x3593,	// (0x00067394) popup_call2_audio_second_window_t3_ParamLimits

0x3593,	// (0x00067394) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x00073343) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x00073343) popup_call2_audio_second_window_t

0xecbf,	// (0x00072ac0) bg_popup_call2_in_pane_cp02

0xecc9,	// (0x00072aca) call_type_pane_cp04

0xecd1,	// (0x00072ad2) popup_call2_audio_wait_window_g1

0xecd9,	// (0x00072ada) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00072f1c) popup_call2_audio_wait_window_g

0xece1,	// (0x00072ae2) popup_call2_audio_wait_window_t3

0x3686,	// (0x00067487) bg_popup_call2_act_pane_ParamLimits

0x3686,	// (0x00067487) bg_popup_call2_act_pane

0x374f,	// (0x00067550) call_type_pane_cp03_ParamLimits

0x374f,	// (0x00067550) call_type_pane_cp03

0x37b3,	// (0x000675b4) popup_call2_audio_first_window_g1_ParamLimits

0x37b3,	// (0x000675b4) popup_call2_audio_first_window_g1

0x3823,	// (0x00067624) popup_call2_audio_first_window_g2_ParamLimits

0x3823,	// (0x00067624) popup_call2_audio_first_window_g2

0x0bcd,	// (0x000649ce) popup_call2_audio_first_window_g3_ParamLimits

0x0bcd,	// (0x000649ce) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x0007334c) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x0007334c) popup_call2_audio_first_window_g

0x3901,	// (0x00067702) popup_call2_audio_first_window_t1_ParamLimits

0x3901,	// (0x00067702) popup_call2_audio_first_window_t1

0x3a04,	// (0x00067805) popup_call2_audio_first_window_t4_ParamLimits

0x3a04,	// (0x00067805) popup_call2_audio_first_window_t4

0x3ae7,	// (0x000678e8) popup_call2_audio_first_window_t5_ParamLimits

0x3ae7,	// (0x000678e8) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x00073357) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x00073357) popup_call2_audio_first_window_t

0xef12,	// (0x00072d13) bg_popup_call2_act_pane_g1

0x4154,	// (0x00067f55) popup_cale_lunar_info_window_t1

0x4162,	// (0x00067f63) popup_cale_lunar_info_window_t2

0x4170,	// (0x00067f71) popup_cale_lunar_info_window_t3

0xecbf,	// (0x00072ac0) bg_popup_call2_bubble_pane

0x3be8,	// (0x000679e9) bg_popup_call2_in_pane_cp01_ParamLimits

0x3be8,	// (0x000679e9) bg_popup_call2_in_pane_cp01

0xe99b,	// (0x0007279c) call_type_pane_cp02

0x3c30,	// (0x00067a31) popup_call2_audio_out_window_g1_ParamLimits

0x3c30,	// (0x00067a31) popup_call2_audio_out_window_g1

0x3c5c,	// (0x00067a5d) popup_call2_audio_out_window_g2_ParamLimits

0x3c5c,	// (0x00067a5d) popup_call2_audio_out_window_g2

0x3c84,	// (0x00067a85) popup_call2_audio_out_window_g3_ParamLimits

0x3c84,	// (0x00067a85) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x00073360) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x00073360) popup_call2_audio_out_window_g

0x3cbf,	// (0x00067ac0) popup_call2_audio_out_window_t1_ParamLimits

0x3cbf,	// (0x00067ac0) popup_call2_audio_out_window_t1

0x3d1e,	// (0x00067b1f) popup_call2_audio_out_window_t2_ParamLimits

0x3d1e,	// (0x00067b1f) popup_call2_audio_out_window_t2

0x3d72,	// (0x00067b73) popup_call2_audio_out_window_t3_ParamLimits

0x3d72,	// (0x00067b73) popup_call2_audio_out_window_t3

0x3d88,	// (0x00067b89) popup_call2_audio_out_window_t4_ParamLimits

0x3d88,	// (0x00067b89) popup_call2_audio_out_window_t4

0x3d9e,	// (0x00067b9f) popup_call2_audio_out_window_t5_ParamLimits

0x3d9e,	// (0x00067b9f) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x00073369) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x00073369) popup_call2_audio_out_window_t

0x3e02,	// (0x00067c03) bg_popup_call2_in_pane_ParamLimits

0x3e02,	// (0x00067c03) bg_popup_call2_in_pane

0x3e5e,	// (0x00067c5f) popup_call2_audio_in_window_g1_ParamLimits

0x3e5e,	// (0x00067c5f) popup_call2_audio_in_window_g1

0x3e96,	// (0x00067c97) popup_call2_audio_in_window_g2_ParamLimits

0x3e96,	// (0x00067c97) popup_call2_audio_in_window_g2

0x3ece,	// (0x00067ccf) popup_call2_audio_in_window_g3_ParamLimits

0x3ece,	// (0x00067ccf) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x00073376) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x00073376) popup_call2_audio_in_window_g

0x3f26,	// (0x00067d27) popup_call2_audio_in_window_t1_ParamLimits

0x3f26,	// (0x00067d27) popup_call2_audio_in_window_t1

0x3fa6,	// (0x00067da7) popup_call2_audio_in_window_t2_ParamLimits

0x3fa6,	// (0x00067da7) popup_call2_audio_in_window_t2

0x4026,	// (0x00067e27) popup_call2_audio_in_window_t3_ParamLimits

0x4026,	// (0x00067e27) popup_call2_audio_in_window_t3

0x4040,	// (0x00067e41) popup_call2_audio_in_window_t4_ParamLimits

0x4040,	// (0x00067e41) popup_call2_audio_in_window_t4

0x4052,	// (0x00067e53) popup_call2_audio_in_window_t5_ParamLimits

0x4052,	// (0x00067e53) popup_call2_audio_in_window_t5

0x4067,	// (0x00067e68) popup_call2_audio_in_window_t6_ParamLimits

0x4067,	// (0x00067e68) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x0007337f) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x0007337f) popup_call2_audio_in_window_t

0xef12,	// (0x00072d13) bg_popup_call2_in_pane_g1

0x417e,	// (0x00067f7f) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x000733e7) popup_cale_lunar_info_window_t

0xef1a,	// (0x00072d1b) bg_popup_call2_rect_pane_ParamLimits

0xef1a,	// (0x00072d1b) bg_popup_call2_rect_pane

0xecbf,	// (0x00072ac0) call2_cli_visual_graphic_pane

0xecbf,	// (0x00072ac0) call2_cli_visual_text_pane

0x9ddb,	// (0x0006dbdc) smil_status_volume_pane_g3

0x0002,

0xf046,	// (0x00072e47) call2_cli_visual_graphic_pane_g1

0xf046,	// (0x00072e47) call2_cli_visual_graphic_pane_g2

0xf046,	// (0x00072e47) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x0007338c) call2_cli_visual_graphic_pane_g

0x407c,	// (0x00067e7d) bg_popup_call2_rect_pane_g1

0xf0d2,	// (0x00072ed3) bg_popup_call2_rect_pane_g2

0x4084,	// (0x00067e85) bg_popup_call2_rect_pane_g3

0x408c,	// (0x00067e8d) bg_popup_call2_rect_pane_g4

0x4094,	// (0x00067e95) bg_popup_call2_rect_pane_g5

0x409c,	// (0x00067e9d) bg_popup_call2_rect_pane_g6

0x40a4,	// (0x00067ea5) bg_popup_call2_rect_pane_g7

0x40ac,	// (0x00067ead) bg_popup_call2_rect_pane_g8

0x40b4,	// (0x00067eb5) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x00073393) bg_popup_call2_rect_pane_g

0x40bc,	// (0x00067ebd) bg_popup_call2_bubble_pane_g1

0x40c4,	// (0x00067ec5) bg_popup_call2_bubble_pane_g2

0x40cc,	// (0x00067ecd) bg_popup_call2_bubble_pane_g3

0x40d4,	// (0x00067ed5) bg_popup_call2_bubble_pane_g4

0x40dc,	// (0x00067edd) bg_popup_call2_bubble_pane_g5

0x40e4,	// (0x00067ee5) bg_popup_call2_bubble_pane_g6

0x40ec,	// (0x00067eed) bg_popup_call2_bubble_pane_g7

0x40f4,	// (0x00067ef5) bg_popup_call2_bubble_pane_g8

0x40fc,	// (0x00067efd) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x000733a6) bg_popup_call2_bubble_pane_g

0x74e8,	// (0x0006b2e9) aid_cale_week_size_cell_pane

0x7a04,	// (0x0006b805) aid_cams_cif_uncrop_pane_ParamLimits

0x7a04,	// (0x0006b805) aid_cams_cif_uncrop_pane

0x7b61,	// (0x0006b962) aid_cams_size_cell_ParamLimits

0x7b61,	// (0x0006b962) aid_cams_size_cell

0x7b6d,	// (0x0006b96e) grid_cams_pane_ParamLimits

0x7b7b,	// (0x0006b97c) linegrid_cams_pane_ParamLimits

0x7c50,	// (0x0006ba51) call_video_pane_t1

0x7c71,	// (0x0006ba72) call_video_pane_t2

0x0001,

0xf292,	// (0x00073093) call_video_pane_t

0x81a8,	// (0x0006bfa9) aid_cale_month_size_cell_pane_ParamLimits

0x81a8,	// (0x0006bfa9) aid_cale_month_size_cell_pane

0xf62f,	// (0x00073430) smil_status_volume_pane_g

0x9de8,	// (0x0006dbe9) volume_smil_pane_ParamLimits

0x6ca3,	// (0x0006aaa4) aid_popup2_width_pane

0x73f3,	// (0x0006b1f4) cell_qdial_pane_g4_ParamLimits

0x73f3,	// (0x0006b1f4) cell_qdial_pane_g4

0x8dcb,	// (0x0006cbcc) aid_blid_cardinal_pane_ParamLimits

0x8ddb,	// (0x0006cbdc) aid_blid_destination_pane_ParamLimits

0x8ddb,	// (0x0006cbdc) aid_blid_destination_pane

0xef1a,	// (0x00072d1b) bg_popup_call_poc_act_pane_ParamLimits

0xef1a,	// (0x00072d1b) bg_popup_call_poc_act_pane

0xef1a,	// (0x00072d1b) bg_popup_call_poc_inact_pane_ParamLimits

0xef1a,	// (0x00072d1b) bg_popup_call_poc_inact_pane

0x4104,	// (0x00067f05) bg_popup_call_poc_act_pane_g1

0x410c,	// (0x00067f0d) bg_popup_call_poc_act_pane_g2

0x4114,	// (0x00067f15) bg_popup_call_poc_act_pane_g3

0x40d4,	// (0x00067ed5) bg_popup_call_poc_act_pane_g4

0x40dc,	// (0x00067edd) bg_popup_call_poc_act_pane_g5

0x411c,	// (0x00067f1d) bg_popup_call_poc_act_pane_g6

0x40ec,	// (0x00067eed) bg_popup_call_poc_act_pane_g7

0x4124,	// (0x00067f25) bg_popup_call_poc_act_pane_g8

0xecbf,	// (0x00072ac0) main_usb_pane

0x427d,	// (0x0006807e) popup_cale_lunar_info_window

0x7f9c,	// (0x0006bd9d) im_reading_pane_t1_ParamLimits

0x021a,	// (0x0006401b) list_im_pane_ParamLimits

0x022b,	// (0x0006402c) scroll_pane_cp07_ParamLimits

0xecbf,	// (0x00072ac0) grid_highlight_pane_cp012

0xef1a,	// (0x00072d1b) mup_scale_pane_ParamLimits

0x0bcd,	// (0x000649ce) main_usb_pane_g1_ParamLimits

0x0bcd,	// (0x000649ce) main_usb_pane_g1

0x998a,	// (0x0006d78b) main_usb_pane_g2_ParamLimits

0x998a,	// (0x0006d78b) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x000733d0) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x000733d0) main_usb_pane_g

0x9996,	// (0x0006d797) main_usb_pane_t1_ParamLimits

0x9996,	// (0x0006d797) main_usb_pane_t1

0x99a8,	// (0x0006d7a9) main_usb_pane_t2_ParamLimits

0x99a8,	// (0x0006d7a9) main_usb_pane_t2

0x99ba,	// (0x0006d7bb) main_usb_pane_t3_ParamLimits

0x99ba,	// (0x0006d7bb) main_usb_pane_t3

0x99cc,	// (0x0006d7cd) main_usb_pane_t4_ParamLimits

0x99cc,	// (0x0006d7cd) main_usb_pane_t4

0x99de,	// (0x0006d7df) main_usb_pane_t5_ParamLimits

0x99de,	// (0x0006d7df) main_usb_pane_t5

0x99f0,	// (0x0006d7f1) main_usb_pane_t6_ParamLimits

0x99f0,	// (0x0006d7f1) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x000733d5) main_usb_pane_t_ParamLimits

0x8d71,	// (0x0006cb72) aid_text_placing

0x8d7d,	// (0x0006cb7e) main_location2_pane_t1_ParamLimits

0x8d91,	// (0x0006cb92) main_location2_pane_t2_ParamLimits

0x8da5,	// (0x0006cba6) main_location2_pane_t3_ParamLimits

0x8db9,	// (0x0006cbba) main_location2_pane_t4_ParamLimits

0x8db9,	// (0x0006cbba) main_location2_pane_t4

0xf3f3,	// (0x000731f4) main_location2_pane_t_ParamLimits

0xef56,	// (0x00072d57) find_pinb_pane_g2_ParamLimits

0xef56,	// (0x00072d57) find_pinb_pane_g2

0x0001,

0xf141,	// (0x00072f42) find_pinb_pane_g_ParamLimits

0xf141,	// (0x00072f42) find_pinb_pane_g

0xef62,	// (0x00072d63) find_pinb_pane_t1_ParamLimits

0xef74,	// (0x00072d75) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x00072f47) find_pinb_pane_t_ParamLimits

0xecbf,	// (0x00072ac0) main_call3_pane

0x85b4,	// (0x0006c3b5) cale_month_day_heading_pane_t1_ParamLimits

0x8612,	// (0x0006c413) cale_month_day_heading_pane_t2_ParamLimits

0x8677,	// (0x0006c478) cale_month_day_heading_pane_t3_ParamLimits

0x86dc,	// (0x0006c4dd) cale_month_day_heading_pane_t4_ParamLimits

0x8741,	// (0x0006c542) cale_month_day_heading_pane_t5_ParamLimits

0x87a6,	// (0x0006c5a7) cale_month_day_heading_pane_t6_ParamLimits

0x880b,	// (0x0006c60c) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x000730cb) cale_month_day_heading_pane_t_ParamLimits

0x0477,	// (0x00064278) smil_status_volume_pane

0x954e,	// (0x0006d34f) postcard_address_pane_ParamLimits

0x954e,	// (0x0006d34f) postcard_address_pane

0x955a,	// (0x0006d35b) postcard_message_pane_ParamLimits

0x955a,	// (0x0006d35b) postcard_message_pane

0x9955,	// (0x0006d756) call2_cli_visual_pane_t1_ParamLimits

0x9955,	// (0x0006d756) call2_cli_visual_pane_t1

0x9f3f,	// (0x0006dd40) postcard_message_pane_t1_ParamLimits

0x9f3f,	// (0x0006dd40) postcard_message_pane_t1

0x9f28,	// (0x0006dd29) postcard_address_pane_t1_ParamLimits

0x9f28,	// (0x0006dd29) postcard_address_pane_t1

0x9f19,	// (0x0006dd1a) popup_call3_audio_in_window_ParamLimits

0x9f19,	// (0x0006dd1a) popup_call3_audio_in_window

0x9dfd,	// (0x0006dbfe) bg_popup_call3_in_pane_ParamLimits

0x9dfd,	// (0x0006dbfe) bg_popup_call3_in_pane

0x9e5f,	// (0x0006dc60) popup_call3_audio_in_window_g1_ParamLimits

0x9e5f,	// (0x0006dc60) popup_call3_audio_in_window_g1

0x9e77,	// (0x0006dc78) popup_call3_audio_in_window_g2_ParamLimits

0x9e77,	// (0x0006dc78) popup_call3_audio_in_window_g2

0x9e8f,	// (0x0006dc90) popup_call3_audio_in_window_g3_ParamLimits

0x9e8f,	// (0x0006dc90) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x00073437) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x00073437) popup_call3_audio_in_window_g

0x9eb7,	// (0x0006dcb8) popup_call3_audio_in_window_t1_ParamLimits

0x9eb7,	// (0x0006dcb8) popup_call3_audio_in_window_t1

0x9edf,	// (0x0006dce0) popup_call3_audio_in_window_t2_ParamLimits

0x9edf,	// (0x0006dce0) popup_call3_audio_in_window_t2

0x9f07,	// (0x0006dd08) popup_call3_audio_in_window_t3_ParamLimits

0x9f07,	// (0x0006dd08) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x00073440) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x00073440) popup_call3_audio_in_window_t

0x0afc,	// (0x000648fd) bg_popup_call3_rect_pane

0x407c,	// (0x00067e7d) bg_popup_call3_rect_pane_g1

0xf0d2,	// (0x00072ed3) bg_popup_call3_rect_pane_g2

0x4084,	// (0x00067e85) bg_popup_call3_rect_pane_g3

0x408c,	// (0x00067e8d) bg_popup_call3_rect_pane_g4

0x4094,	// (0x00067e95) bg_popup_call3_rect_pane_g5

0x409c,	// (0x00067e9d) bg_popup_call3_rect_pane_g6

0x40a4,	// (0x00067ea5) bg_popup_call3_rect_pane_g7

0x91cb,	// (0x0006cfcc) mup_visualizer_osc_pane

0x0bdb,	// (0x000649dc) mup_visualizer_spec_pane

0x9e1d,	// (0x0006dc1e) call3_video_qcif_pane_ParamLimits

0x9e1d,	// (0x0006dc1e) call3_video_qcif_pane

0x9e2f,	// (0x0006dc30) call3_video_qcif_uncrop_pane_ParamLimits

0x9e2f,	// (0x0006dc30) call3_video_qcif_uncrop_pane

0x9e3d,	// (0x0006dc3e) call3_video_subqcif_pane_ParamLimits

0x9e3d,	// (0x0006dc3e) call3_video_subqcif_pane

0x9e4f,	// (0x0006dc50) call3_video_subqcif_uncrop_pane_ParamLimits

0x9e4f,	// (0x0006dc50) call3_video_subqcif_uncrop_pane

0x9ea7,	// (0x0006dca8) popup_call3_audio_in_window_g4_ParamLimits

0x9ea7,	// (0x0006dca8) popup_call3_audio_in_window_g4

0x9dca,	// (0x0006dbcb) mup_spec_half_pane

0x9dd3,	// (0x0006dbd4) mup_spec_half_pane_cp

0x4314,	// (0x00068115) mup_osc_middle_pane

0x431d,	// (0x0006811e) mup_visualizer_osc_pane_g1

0x9dab,	// (0x0006dbac) mup_spec_bar_pane_ParamLimits

0x9dab,	// (0x0006dbac) mup_spec_bar_pane

0x4301,	// (0x00068102) mup_spec_bar_pane_g1

0x430b,	// (0x0006810c) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0007342b) mup_spec_bar_pane_g

0x74e8,	// (0x0006b2e9) aid_cale_week_size_cell_pane_ParamLimits

0x74fb,	// (0x0006b2fc) bg_cale_heading_pane_ParamLimits

0x0029,	// (0x00063e2a) bg_cale_pane_cp01_ParamLimits

0x7517,	// (0x0006b318) cale_week_corner_pane_ParamLimits

0x752d,	// (0x0006b32e) cale_week_day_heading_pane_ParamLimits

0x7549,	// (0x0006b34a) cale_week_scroll_pane_g1_ParamLimits

0x7562,	// (0x0006b363) cale_week_scroll_pane_g2_ParamLimits

0x7573,	// (0x0006b374) cale_week_scroll_pane_g3_ParamLimits

0x7584,	// (0x0006b385) cale_week_scroll_pane_g4_ParamLimits

0x7595,	// (0x0006b396) cale_week_scroll_pane_g5_ParamLimits

0x75a6,	// (0x0006b3a7) cale_week_scroll_pane_g6_ParamLimits

0x75b7,	// (0x0006b3b8) cale_week_scroll_pane_g7_ParamLimits

0x75ca,	// (0x0006b3cb) cale_week_scroll_pane_g8_ParamLimits

0x75dd,	// (0x0006b3de) cale_week_scroll_pane_g9_ParamLimits

0x75ee,	// (0x0006b3ef) cale_week_scroll_pane_g10_ParamLimits

0x75ff,	// (0x0006b400) cale_week_scroll_pane_g11_ParamLimits

0x7610,	// (0x0006b411) cale_week_scroll_pane_g12_ParamLimits

0x7621,	// (0x0006b422) cale_week_scroll_pane_g13_ParamLimits

0x763a,	// (0x0006b43b) cale_week_scroll_pane_g14_ParamLimits

0x7653,	// (0x0006b454) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x00072fd3) cale_week_scroll_pane_g_ParamLimits

0x766c,	// (0x0006b46d) cale_week_time_pane_ParamLimits

0x767f,	// (0x0006b480) grid_cale_week_pane_ParamLimits

0x0042,	// (0x00063e43) listscroll_cale_week_pane_t1

0x769c,	// (0x0006b49d) scroll_pane_cp08_ParamLimits

0x81f9,	// (0x0006bffa) cale_month_corner_pane_ParamLimits

0x0441,	// (0x00064242) cale_month_pane_t1

0x8563,	// (0x0006c364) cale_month_week_pane_ParamLimits

0x0bcd,	// (0x000649ce) popup_call_status_window_g1_ParamLimits

0x8b94,	// (0x0006c995) popup_call_status_window_g2_ParamLimits

0x8ba0,	// (0x0006c9a1) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x0007317b) popup_call_status_window_g_ParamLimits

0x0815,	// (0x00064616) aid_call2_pane

0x5daf,	// (0x00069bb0) msg_header_pane_g1

0x954e,	// (0x0006d34f) postcard_address2_pane_ParamLimits

0x954e,	// (0x0006d34f) postcard_address2_pane

0x955a,	// (0x0006d35b) postcard_message2_pane_ParamLimits

0x955a,	// (0x0006d35b) postcard_message2_pane

0x9d43,	// (0x0006db44) message2_row_pane_ParamLimits

0x9d43,	// (0x0006db44) message2_row_pane

0x9d5e,	// (0x0006db5f) address2_row_pane_ParamLimits

0x9d5e,	// (0x0006db5f) address2_row_pane

0x42cf,	// (0x000680d0) postcard_message2_row_pane_g1

0x42d7,	// (0x000680d8) postcard_message2_row_pane_t1

0x42cf,	// (0x000680d0) address2_row_pane_g1

0x42d7,	// (0x000680d8) address2_row_pane_t1

0x78d0,	// (0x0006b6d1) aid_size_cell_vorec

0xecbf,	// (0x00072ac0) main_rss_pane

0x9d71,	// (0x0006db72) rss_list_single_pane_ParamLimits

0x9d71,	// (0x0006db72) rss_list_single_pane

0x42e5,	// (0x000680e6) rss_list_single_pane_t1

0x42f3,	// (0x000680f4) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x00073426) rss_list_single_pane_t

0xecbf,	// (0x00072ac0) main_camera2_pane

0xecbf,	// (0x00072ac0) main_video2_pane

0x9fa3,	// (0x0006dda4) cams_zoom_pane_cp2_ParamLimits

0x9fa3,	// (0x0006dda4) cams_zoom_pane_cp2

0x9faf,	// (0x0006ddb0) image2_vga_pane_ParamLimits

0x9faf,	// (0x0006ddb0) image2_vga_pane

0x9fbe,	// (0x0006ddbf) main_camera2_pane_g1_ParamLimits

0x9fbe,	// (0x0006ddbf) main_camera2_pane_g1

0x9fca,	// (0x0006ddcb) main_camera2_pane_g2_ParamLimits

0x9fca,	// (0x0006ddcb) main_camera2_pane_g2

0x9fd6,	// (0x0006ddd7) main_camera2_pane_g3_ParamLimits

0x9fd6,	// (0x0006ddd7) main_camera2_pane_g3

0x9fe2,	// (0x0006dde3) main_camera2_pane_g4_ParamLimits

0x9fe2,	// (0x0006dde3) main_camera2_pane_g4

0x9fee,	// (0x0006ddef) main_camera2_pane_g5_ParamLimits

0x9fee,	// (0x0006ddef) main_camera2_pane_g5

0x9ffa,	// (0x0006ddfb) main_camera2_pane_g6_ParamLimits

0x9ffa,	// (0x0006ddfb) main_camera2_pane_g6

0xa006,	// (0x0006de07) main_camera2_pane_g7_ParamLimits

0xa006,	// (0x0006de07) main_camera2_pane_g7

0xa012,	// (0x0006de13) main_camera2_pane_g8_ParamLimits

0xa012,	// (0x0006de13) main_camera2_pane_g8

0x0008,

0xf646,	// (0x00073447) main_camera2_pane_g_ParamLimits

0xf646,	// (0x00073447) main_camera2_pane_g

0xa02a,	// (0x0006de2b) main_camera2_pane_t1_ParamLimits

0xa02a,	// (0x0006de2b) main_camera2_pane_t1

0xa03c,	// (0x0006de3d) main_camera2_pane_t2_ParamLimits

0xa03c,	// (0x0006de3d) main_camera2_pane_t2

0xa04e,	// (0x0006de4f) main_camera2_pane_t3_ParamLimits

0xa04e,	// (0x0006de4f) main_camera2_pane_t3

0xa060,	// (0x0006de61) main_camera2_pane_t4_ParamLimits

0xa060,	// (0x0006de61) main_camera2_pane_t4

0x0006,

0xf659,	// (0x0007345a) main_camera2_pane_t_ParamLimits

0xf659,	// (0x0007345a) main_camera2_pane_t

0xa0c2,	// (0x0006dec3) cams_zoom_pane_cp4_ParamLimits

0xa0c2,	// (0x0006dec3) cams_zoom_pane_cp4

0xa0d2,	// (0x0006ded3) image2_cif_pane_ParamLimits

0xa0d2,	// (0x0006ded3) image2_cif_pane

0xa0e7,	// (0x0006dee8) image2_subqcif_pane_ParamLimits

0xa0e7,	// (0x0006dee8) image2_subqcif_pane

0xa0f6,	// (0x0006def7) main_video2_pane_g1_ParamLimits

0xa0f6,	// (0x0006def7) main_video2_pane_g1

0xa108,	// (0x0006df09) main_video2_pane_g2_ParamLimits

0xa108,	// (0x0006df09) main_video2_pane_g2

0xa118,	// (0x0006df19) main_video2_pane_g3_ParamLimits

0xa118,	// (0x0006df19) main_video2_pane_g3

0xa128,	// (0x0006df29) main_video2_pane_g4_ParamLimits

0xa128,	// (0x0006df29) main_video2_pane_g4

0xa138,	// (0x0006df39) main_video2_pane_g5_ParamLimits

0xa138,	// (0x0006df39) main_video2_pane_g5

0xa148,	// (0x0006df49) main_video2_pane_g6_ParamLimits

0xa148,	// (0x0006df49) main_video2_pane_g6

0x0005,

0xf668,	// (0x00073469) main_video2_pane_g_ParamLimits

0xf668,	// (0x00073469) main_video2_pane_g

0xa15a,	// (0x0006df5b) main_video2_pane_t1_ParamLimits

0xa15a,	// (0x0006df5b) main_video2_pane_t1

0xa174,	// (0x0006df75) main_video2_pane_t2_ParamLimits

0xa174,	// (0x0006df75) main_video2_pane_t2

0xa19a,	// (0x0006df9b) main_video2_pane_t3_ParamLimits

0xa19a,	// (0x0006df9b) main_video2_pane_t3

0x0002,

0xf675,	// (0x00073476) main_video2_pane_t_ParamLimits

0xf675,	// (0x00073476) main_video2_pane_t

0x9aa7,	// (0x0006d8a8) call_muted_g2

0x0001,

0xf617,	// (0x00073418) call_muted_g

0xecbf,	// (0x00072ac0) main_mup2_pane

0x4382,	// (0x00068183) main_mup2_pane_g1_ParamLimits

0x4382,	// (0x00068183) main_mup2_pane_g1

0xa1c0,	// (0x0006dfc1) main_mup2_pane_g2_ParamLimits

0xa1c0,	// (0x0006dfc1) main_mup2_pane_g2

0xa442,	// (0x0006e243) main_mup_pane_g13_cp1

0xa44a,	// (0x0006e24b) mup_volume_pane_cp1

0xa1e0,	// (0x0006dfe1) main_mup2_pane_g4_ParamLimits

0xa1e0,	// (0x0006dfe1) main_mup2_pane_g4

0xa1f5,	// (0x0006dff6) main_mup2_pane_g5_ParamLimits

0xa1f5,	// (0x0006dff6) main_mup2_pane_g5

0xa20a,	// (0x0006e00b) main_mup2_pane_g6_ParamLimits

0xa20a,	// (0x0006e00b) main_mup2_pane_g6

0xa21f,	// (0x0006e020) main_mup2_pane_g7_ParamLimits

0xa21f,	// (0x0006e020) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x0007347d) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x0007347d) main_mup2_pane_g

0xa23b,	// (0x0006e03c) main_mup2_pane_t1_ParamLimits

0xa23b,	// (0x0006e03c) main_mup2_pane_t1

0xa252,	// (0x0006e053) main_mup2_pane_t2_ParamLimits

0xa252,	// (0x0006e053) main_mup2_pane_t2

0xa269,	// (0x0006e06a) main_mup2_pane_t3_ParamLimits

0xa269,	// (0x0006e06a) main_mup2_pane_t3

0xa280,	// (0x0006e081) main_mup2_pane_t4_ParamLimits

0xa280,	// (0x0006e081) main_mup2_pane_t4

0xa29a,	// (0x0006e09b) main_mup2_pane_t5_ParamLimits

0xa29a,	// (0x0006e09b) main_mup2_pane_t5

0xa2b4,	// (0x0006e0b5) main_mup2_pane_t6_ParamLimits

0xa2b4,	// (0x0006e0b5) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x0007348c) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x0007348c) main_mup2_pane_t

0xa2ec,	// (0x0006e0ed) mup2_visualizer_pane_ParamLimits

0xa2ec,	// (0x0006e0ed) mup2_visualizer_pane

0xa322,	// (0x0006e123) mup_progress_pane_cp_ParamLimits

0xa322,	// (0x0006e123) mup_progress_pane_cp

0xa42d,	// (0x0006e22e) mup_volume_pane_cp_ParamLimits

0xa42d,	// (0x0006e22e) mup_volume_pane_cp

0xa339,	// (0x0006e13a) mup2_visualizer_pane_g1_ParamLimits

0xa339,	// (0x0006e13a) mup2_visualizer_pane_g1

0x4354,	// (0x00068155) mup2_visualizer_pane_g2_ParamLimits

0x4354,	// (0x00068155) mup2_visualizer_pane_g2

0xa34e,	// (0x0006e14f) mup2_visualizer_pane_g3_ParamLimits

0xa34e,	// (0x0006e14f) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x00073499) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x00073499) mup2_visualizer_pane_g

0x0e38,	// (0x00064c39) aid_size_cell_fmradio

0x9bbd,	// (0x0006d9be) aid_height_parent_landcape

0x02a9,	// (0x000640aa) wml_content_pane_cp

0x02b1,	// (0x000640b2) wml_tabs_pane

0x02ba,	// (0x000640bb) popup_wml_miniature_window

0x02c2,	// (0x000640c3) scroll_pane_cp021

0x02d6,	// (0x000640d7) wml_content_pane_comp8

0xecbf,	// (0x00072ac0) bg_popup_sub_pane_cp05

0x4372,	// (0x00068173) popup_wml_miniature_window_g1

0x437a,	// (0x0006817b) wml_miniature_view_pane

0xa35c,	// (0x0006e15d) aid_size_wml_view

0xa364,	// (0x0006e165) wml_miniature_view_pane_g1

0xa36d,	// (0x0006e16e) wml_miniature_view_pane_g2

0xa376,	// (0x0006e177) wml_miniature_view_pane_g3

0xa37e,	// (0x0006e17f) wml_miniature_view_pane_g4

0xa386,	// (0x0006e187) wml_miniature_view_pane_g5

0xa38e,	// (0x0006e18f) wml_miniature_view_pane_g6

0xa396,	// (0x0006e197) wml_miniature_view_pane_g7

0xa39e,	// (0x0006e19f) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x000734a0) wml_miniature_view_pane_g

0x4382,	// (0x00068183) background_graphic_ParamLimits

0x4382,	// (0x00068183) background_graphic

0x438e,	// (0x0006818f) wml_tabs_2_pane

0x4397,	// (0x00068198) wml_tabs_3_pane_ParamLimits

0x4397,	// (0x00068198) wml_tabs_3_pane

0x43a9,	// (0x000681aa) wml_tabs_4_pane_ParamLimits

0x43a9,	// (0x000681aa) wml_tabs_4_pane

0x43bf,	// (0x000681c0) wml_tabs_5_pane_ParamLimits

0x43bf,	// (0x000681c0) wml_tabs_5_pane

0x43d9,	// (0x000681da) wml_tabs_pane_g2_ParamLimits

0x43d9,	// (0x000681da) wml_tabs_pane_g2

0x43ed,	// (0x000681ee) wml_tabs_pane_g3_ParamLimits

0x43ed,	// (0x000681ee) wml_tabs_pane_g3

0xa3a6,	// (0x0006e1a7) wml_tabs_2_active_pane_ParamLimits

0xa3a6,	// (0x0006e1a7) wml_tabs_2_active_pane

0xa3b6,	// (0x0006e1b7) wml_tabs_2_passive_pane_ParamLimits

0xa3b6,	// (0x0006e1b7) wml_tabs_2_passive_pane

0xa3c6,	// (0x0006e1c7) wml_tabs_3_active_pane_cp_ParamLimits

0xa3c6,	// (0x0006e1c7) wml_tabs_3_active_pane_cp

0xa3d7,	// (0x0006e1d8) wml_tabs_3_passive_pane_ParamLimits

0xa3d7,	// (0x0006e1d8) wml_tabs_3_passive_pane

0xa3e8,	// (0x0006e1e9) wml_tabs_3_passive_pane_cp_ParamLimits

0xa3e8,	// (0x0006e1e9) wml_tabs_3_passive_pane_cp

0xa3f9,	// (0x0006e1fa) tabs_4_active_pane

0xa401,	// (0x0006e202) tabs_4_passive_pane

0xa409,	// (0x0006e20a) tabs_4_passive_pane_cp

0xa411,	// (0x0006e212) tabs_4_passive_pane_cp2

0x9982,	// (0x0006d783) aid_height_text

0x9198,	// (0x0006cf99) mup_volume_cont_pane_ParamLimits

0x9198,	// (0x0006cf99) mup_volume_cont_pane

0x704a,	// (0x0006ae4b) aid_size_cell_pinb

0x7054,	// (0x0006ae55) aid_size_list_pinb

0xa30b,	// (0x0006e10c) mup2_volume_cont_pane_ParamLimits

0xa30b,	// (0x0006e10c) mup2_volume_cont_pane

0xa419,	// (0x0006e21a) mup2_volume_cont_pane_g1_ParamLimits

0xa419,	// (0x0006e21a) mup2_volume_cont_pane_g1

0x6caf,	// (0x0006aab0) aid_size_cell_touch_ParamLimits

0x6caf,	// (0x0006aab0) aid_size_cell_touch

0x6f30,	// (0x0006ad31) touch_pane_ParamLimits

0x6f30,	// (0x0006ad31) touch_pane

0x6c91,	// (0x0006aa92) main_rss2_pane

0x440a,	// (0x0006820b) listscroll_rss2_pane

0x4413,	// (0x00068214) rss2_navigation_pane

0x441b,	// (0x0006821c) list_rss2_pane

0x09b3,	// (0x000647b4) scroll_pane_cp22

0x4423,	// (0x00068224) rss2_navigation_pane_g1

0x442c,	// (0x0006822d) rss2_navigation_pane_g2

0x4434,	// (0x00068235) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x000734b1) rss2_navigation_pane_g

0x443c,	// (0x0006823d) rss2_navigation_pane_t1

0xa452,	// (0x0006e253) rss2_list_single_pane_ParamLimits

0xa452,	// (0x0006e253) rss2_list_single_pane

0x444a,	// (0x0006824b) rss2_list_single_pane_t2

0x4458,	// (0x00068259) rss2_list_single_pane_t3_ParamLimits

0x4458,	// (0x00068259) rss2_list_single_pane_t3

0x4475,	// (0x00068276) rss2_list_single_pane_t4

0x8a0f,	// (0x0006c810) smil_status_pane_g1

0xe908,	// (0x00072709) main_image2_pane_ParamLimits

0xe908,	// (0x00072709) main_image2_pane

0xa01e,	// (0x0006de1f) main_camera2_pane_g9_ParamLimits

0xa01e,	// (0x0006de1f) main_camera2_pane_g9

0xa072,	// (0x0006de73) main_camera2_pane_t5_ParamLimits

0xa072,	// (0x0006de73) main_camera2_pane_t5

0xa084,	// (0x0006de85) main_camera2_pane_t6_ParamLimits

0xa084,	// (0x0006de85) main_camera2_pane_t6

0xa483,	// (0x0006e284) main_image2_pane_g1_ParamLimits

0xa483,	// (0x0006e284) main_image2_pane_g1

0x9722,	// (0x0006d523) smil2_video_pane_ParamLimits

0x9722,	// (0x0006d523) smil2_video_pane

0x6ce3,	// (0x0006aae4) aid_zoom_text_primary_cp

0xe894,	// (0x00072695) popup_preview_fixed_window

0x0212,	// (0x00064013) im_reading_pane_g1

0x9f68,	// (0x0006dd69) cams2_bc_adjust_pane_cp_ParamLimits

0x9f68,	// (0x0006dd69) cams2_bc_adjust_pane_cp

0xa0b4,	// (0x0006deb5) cams2_bc_adjust_pane_ParamLimits

0xa0b4,	// (0x0006deb5) cams2_bc_adjust_pane

0xa48f,	// (0x0006e290) cams2_bc_adjust_pane_g1

0xa497,	// (0x0006e298) cams2_slider_pane

0xa4a0,	// (0x0006e2a1) cams2_slider_pane_g1

0xa4a9,	// (0x0006e2aa) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x000734b8) cams2_slider_pane_g

0x7145,	// (0x0006af46) calc_display_pane_ParamLimits

0x7163,	// (0x0006af64) calc_paper_pane_ParamLimits

0x717f,	// (0x0006af80) grid_calc_pane_ParamLimits

0x8c02,	// (0x0006ca03) popup_clock_digital_window_t1_ParamLimits

0x0dd5,	// (0x00064bd6) main_image_pane_t1

0x712b,	// (0x0006af2c) aid_size_cell_calc_ParamLimits

0x712b,	// (0x0006af2c) aid_size_cell_calc

0x9bef,	// (0x0006d9f0) popup_blid_sat_info2_window_ParamLimits

0x9bef,	// (0x0006d9f0) popup_blid_sat_info2_window

0x448b,	// (0x0006828c) aid_size_cell_blid

0x4493,	// (0x00068294) bg_popup_window_pane_cp07

0x44b6,	// (0x000682b7) grid_popup_blid_pane

0x44c0,	// (0x000682c1) heading_pane_cp05_ParamLimits

0x44c0,	// (0x000682c1) heading_pane_cp05

0x458a,	// (0x0006838b) cell_popup_blid_pane_ParamLimits

0x458a,	// (0x0006838b) cell_popup_blid_pane

0x45ae,	// (0x000683af) cell_popup_blid_pane_g1

0x45b6,	// (0x000683b7) cell_popup_blid_pane_t1

0xa2d1,	// (0x0006e0d2) mup2_indicator_pane_ParamLimits

0xa2d1,	// (0x0006e0d2) mup2_indicator_pane

0x0afc,	// (0x000648fd) mup2_visualizer_osc_pane

0x4360,	// (0x00068161) mup2_visualizer_spec_pane_ParamLimits

0x4360,	// (0x00068161) mup2_visualizer_spec_pane

0xa4c3,	// (0x0006e2c4) mup2_spec_half_pane

0xa4cc,	// (0x0006e2cd) mup2_spec_half_pane_cp

0xa4d6,	// (0x0006e2d7) mup2_spec_bar_pane_ParamLimits

0xa4d6,	// (0x0006e2d7) mup2_spec_bar_pane

0x4301,	// (0x00068102) mup2_spec_bar_pane_g1

0x430b,	// (0x0006810c) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0007342b) mup2_spec_bar_pane_g

0xa4f5,	// (0x0006e2f6) mup2_osc_middle_pane

0x431d,	// (0x0006811e) mup2_visualizer_osc_pane_g1

0xe8be,	// (0x000726bf) popup_number_entry_window_t1_ParamLimits

0xe8d1,	// (0x000726d2) popup_number_entry_window_t2_ParamLimits

0xe8e3,	// (0x000726e4) popup_number_entry_window_t3_ParamLimits

0x6f87,	// (0x0006ad88) popup_number_entry_window_t5_ParamLimits

0x6f87,	// (0x0006ad88) popup_number_entry_window_t5

0xf0ec,	// (0x00072eed) popup_number_entry_window_t_ParamLimits

0xe8f5,	// (0x000726f6) text_title_cp2_ParamLimits

0x9416,	// (0x0006d217) aid_hotspot_pointer_text2_pane

0x94b0,	// (0x0006d2b1) main_viewer_pane_g9_ParamLimits

0x94b0,	// (0x0006d2b1) main_viewer_pane_g9

0x0441,	// (0x00064242) cale_month_pane_t1_ParamLimits

0x04ac,	// (0x000642ad) bg_cale_pane_ParamLimits

0x04c4,	// (0x000642c5) list_cale_pane_ParamLimits

0x0042,	// (0x00063e43) listscroll_cale_day_pane_t1

0x04d5,	// (0x000642d6) scroll_pane_cp09_ParamLimits

0x91d3,	// (0x0006cfd4) main_mup_eq_pane_t1_ParamLimits

0x91d3,	// (0x0006cfd4) main_mup_eq_pane_t1

0x91ed,	// (0x0006cfee) main_mup_eq_pane_t2_ParamLimits

0x91ed,	// (0x0006cfee) main_mup_eq_pane_t2

0x9207,	// (0x0006d008) main_mup_eq_pane_t3_ParamLimits

0x9207,	// (0x0006d008) main_mup_eq_pane_t3

0x921f,	// (0x0006d020) main_mup_eq_pane_t4_ParamLimits

0x921f,	// (0x0006d020) main_mup_eq_pane_t4

0x9237,	// (0x0006d038) main_mup_eq_pane_t5_ParamLimits

0x9237,	// (0x0006d038) main_mup_eq_pane_t5

0x924f,	// (0x0006d050) main_mup_eq_pane_t6_ParamLimits

0x924f,	// (0x0006d050) main_mup_eq_pane_t6

0x9263,	// (0x0006d064) main_mup_eq_pane_t7_ParamLimits

0x9263,	// (0x0006d064) main_mup_eq_pane_t7

0x9277,	// (0x0006d078) main_mup_eq_pane_t8_ParamLimits

0x9277,	// (0x0006d078) main_mup_eq_pane_t8

0x928d,	// (0x0006d08e) main_mup_eq_pane_t9_ParamLimits

0x928d,	// (0x0006d08e) main_mup_eq_pane_t9

0x92a5,	// (0x0006d0a6) main_mup_eq_pane_t10_ParamLimits

0x92a5,	// (0x0006d0a6) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0007327a) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0007327a) main_mup_eq_pane_t

0x9362,	// (0x0006d163) mup_equalizer_pane_cp5_ParamLimits

0x9378,	// (0x0006d179) mup_equalizer_pane_cp6_ParamLimits

0x9390,	// (0x0006d191) mup_equalizer_pane_cp7_ParamLimits

0x6c91,	// (0x0006aa92) main_gallery_pane

0x4326,	// (0x00068127) smil2_volume_pane

0x4341,	// (0x00068142) smil_status_volume_pane_g1_ParamLimits

0x432e,	// (0x0006812f) smil_status_volume_pane_g2_ParamLimits

0x9ddb,	// (0x0006dbdc) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x00073430) smil_status_volume_pane_g_ParamLimits

0x4493,	// (0x00068294) bg_popup_window_pane_cp07_ParamLimits

0x44a1,	// (0x000682a2) blid_firmament_pane

0xa4fe,	// (0x0006e2ff) aid_size_cell_gallery_ParamLimits

0xa4fe,	// (0x0006e2ff) aid_size_cell_gallery

0xa50c,	// (0x0006e30d) grid_gallery_pane_ParamLimits

0xa50c,	// (0x0006e30d) grid_gallery_pane

0xa51c,	// (0x0006e31d) cell_gallery_pane_ParamLimits

0xa51c,	// (0x0006e31d) cell_gallery_pane

0x45c4,	// (0x000683c5) bg_cell_gallery_focus_pane_ParamLimits

0x45c4,	// (0x000683c5) bg_cell_gallery_focus_pane

0x45d6,	// (0x000683d7) cell_gallery_pane_g1_ParamLimits

0x45d6,	// (0x000683d7) cell_gallery_pane_g1

0xa56a,	// (0x0006e36b) cell_gallery_pane_g2_ParamLimits

0xa56a,	// (0x0006e36b) cell_gallery_pane_g2

0xa577,	// (0x0006e378) cell_gallery_pane_g3_ParamLimits

0xa577,	// (0x0006e378) cell_gallery_pane_g3

0x45e2,	// (0x000683e3) cell_gallery_pane_g4_ParamLimits

0x45e2,	// (0x000683e3) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x000734de) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x000734de) cell_gallery_pane_g

0x45ee,	// (0x000683ef) bg_cell_gallery_focus_pane_g1

0x45f6,	// (0x000683f7) bg_cell_gallery_focus_pane_g2

0x45fe,	// (0x000683ff) bg_cell_gallery_focus_pane_g3

0x4606,	// (0x00068407) bg_cell_gallery_focus_pane_g4

0x460e,	// (0x0006840f) bg_cell_gallery_focus_pane_g5

0x4616,	// (0x00068417) bg_cell_gallery_focus_pane_g6

0x461e,	// (0x0006841f) bg_cell_gallery_focus_pane_g7

0x4626,	// (0x00068427) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x000734e7) bg_cell_gallery_focus_pane_g

0x462e,	// (0x0006842f) aid_firma_cardinal

0x4642,	// (0x00068443) blid_firmament_pane_t1

0x4659,	// (0x0006845a) blid_firmament_pane_t2

0x4670,	// (0x00068471) blid_firmament_pane_t3

0x4687,	// (0x00068488) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x000734f8) blid_firmament_pane_t

0x469e,	// (0x0006849f) blid_sat_info_pane

0x46ae,	// (0x000684af) blid_sat_info_pane_g1

0x46ae,	// (0x000684af) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x00073501) blid_sat_info_pane_g

0x46b8,	// (0x000684b9) blid_sat_info_pane_t1

0x46c6,	// (0x000684c7) smil2_volume_content_pane

0x46cf,	// (0x000684d0) smil2_volume_pane_g1

0x3746,	// (0x00067547) smil2_volume_content_pane_g1

0x46d7,	// (0x000684d8) smil2_volume_content_pane_g2

0x46e0,	// (0x000684e1) smil2_volume_content_pane_g3

0x46e9,	// (0x000684ea) smil2_volume_content_pane_g4

0x46f2,	// (0x000684f3) smil2_volume_content_pane_g5

0x46fb,	// (0x000684fc) smil2_volume_content_pane_g6

0x4704,	// (0x00068505) smil2_volume_content_pane_g7

0x470d,	// (0x0006850e) smil2_volume_content_pane_g8

0x4716,	// (0x00068517) smil2_volume_content_pane_g9

0x471f,	// (0x00068520) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x00073506) smil2_volume_content_pane_g

0x7702,	// (0x0006b503) cale_week_day_heading_pane_t1_ParamLimits

0x771b,	// (0x0006b51c) cale_week_day_heading_pane_t2_ParamLimits

0x7734,	// (0x0006b535) cale_week_day_heading_pane_t3_ParamLimits

0x774d,	// (0x0006b54e) cale_week_day_heading_pane_t4_ParamLimits

0x7766,	// (0x0006b567) cale_week_day_heading_pane_t5_ParamLimits

0x777f,	// (0x0006b580) cale_week_day_heading_pane_t6_ParamLimits

0x7798,	// (0x0006b599) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x00072ff2) cale_week_day_heading_pane_t_ParamLimits

0x0054,	// (0x00063e55) bg_cale_side_pane_ParamLimits

0x77b1,	// (0x0006b5b2) cale_week_time_pane_t1_ParamLimits

0x77c9,	// (0x0006b5ca) cale_week_time_pane_t2_ParamLimits

0x77e1,	// (0x0006b5e2) cale_week_time_pane_t3_ParamLimits

0x77f9,	// (0x0006b5fa) cale_week_time_pane_t4_ParamLimits

0x7811,	// (0x0006b612) cale_week_time_pane_t5_ParamLimits

0x7829,	// (0x0006b62a) cale_week_time_pane_t6_ParamLimits

0x7841,	// (0x0006b642) cale_week_time_pane_t7_ParamLimits

0x7861,	// (0x0006b662) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x00073001) cale_week_time_pane_t_ParamLimits

0x7881,	// (0x0006b682) cell_cale_week_pane_g2_ParamLimits

0x0054,	// (0x00063e55) bg_cale_side_pane_cp01_ParamLimits

0x8880,	// (0x0006c681) cale_month_week_pane_t1_ParamLimits

0x8897,	// (0x0006c698) cale_month_week_pane_t2_ParamLimits

0x88ae,	// (0x0006c6af) cale_month_week_pane_t3_ParamLimits

0x88c5,	// (0x0006c6c6) cale_month_week_pane_t4_ParamLimits

0x88dc,	// (0x0006c6dd) cale_month_week_pane_t5_ParamLimits

0x88f7,	// (0x0006c6f8) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x000730da) cale_month_week_pane_t_ParamLimits

0x89dc,	// (0x0006c7dd) cell_cale_month_pane_g1_ParamLimits

0x6c91,	// (0x0006aa92) main_cale_event_viewer_pane

0x6c91,	// (0x0006aa92) listscroll_cale_event_viewer_pane

0x4728,	// (0x00068529) list_cale_ev_pane

0x4730,	// (0x00068531) scroll_pane_cp023

0x473c,	// (0x0006853d) field_cale_ev_pane_ParamLimits

0x473c,	// (0x0006853d) field_cale_ev_pane

0x475a,	// (0x0006855b) field_cale_ev_content_pane_ParamLimits

0x475a,	// (0x0006855b) field_cale_ev_content_pane

0x4766,	// (0x00068567) field_cale_ev_pane_g1_ParamLimits

0x4766,	// (0x00068567) field_cale_ev_pane_g1

0x4772,	// (0x00068573) field_cale_ev_pane_g2_ParamLimits

0x4772,	// (0x00068573) field_cale_ev_pane_g2

0x478a,	// (0x0006858b) field_cale_ev_pane_g3_ParamLimits

0x478a,	// (0x0006858b) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x0007351b) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x0007351b) field_cale_ev_pane_g

0x47a2,	// (0x000685a3) field_cale_ev_pane_t1_ParamLimits

0x47a2,	// (0x000685a3) field_cale_ev_pane_t1

0x47b9,	// (0x000685ba) field_cale_ev_content_pane_t1_ParamLimits

0x47b9,	// (0x000685ba) field_cale_ev_content_pane_t1

0x0c85,	// (0x00064a86) bg_button_pane_cp01

0xeff1,	// (0x00072df2) listscroll_cale_week_pane_ParamLimits

0x74de,	// (0x0006b2df) popup_toolbar_window_cp01

0x0042,	// (0x00063e43) listscroll_cale_week_pane_t1_ParamLimits

0xeff1,	// (0x00072df2) listscroll_cale_day_pane_ParamLimits

0x74de,	// (0x0006b2df) popup_toolbar_window_cp02

0x0042,	// (0x00063e43) listscroll_cale_day_pane_t1_ParamLimits

0xeff1,	// (0x00072df2) main_cale_month_pane_ParamLimits

0x9cbf,	// (0x0006dac0) popup_toolbar_window_cp03_ParamLimits

0x9cbf,	// (0x0006dac0) popup_toolbar_window_cp03

0x9638,	// (0x0006d439) main_image_pane_g2_ParamLimits

0x9638,	// (0x0006d439) main_image_pane_g2

0x9644,	// (0x0006d445) main_image_pane_g3_ParamLimits

0x9644,	// (0x0006d445) main_image_pane_g3

0x0002,

0xf50b,	// (0x0007330c) main_image_pane_g_ParamLimits

0xf50b,	// (0x0007330c) main_image_pane_g

0x0dd5,	// (0x00064bd6) main_image_pane_t1_ParamLimits

0x9650,	// (0x0006d451) main_image_pane_t2_ParamLimits

0x9650,	// (0x0006d451) main_image_pane_t2

0x9662,	// (0x0006d463) main_image_pane_t3_ParamLimits

0x9662,	// (0x0006d463) main_image_pane_t3

0x9674,	// (0x0006d475) main_image_pane_t4_ParamLimits

0x9674,	// (0x0006d475) main_image_pane_t4

0x0003,

0xf512,	// (0x00073313) main_image_pane_t_ParamLimits

0xf512,	// (0x00073313) main_image_pane_t

0x9686,	// (0x0006d487) popup_image_details_window_cp01

0x9690,	// (0x0006d491) popup_toobar_trans_pane_cp01_ParamLimits

0x9690,	// (0x0006d491) popup_toobar_trans_pane_cp01

0x9c3c,	// (0x0006da3d) popup_image_details_window_ParamLimits

0x9c3c,	// (0x0006da3d) popup_image_details_window

0x4287,	// (0x00068088) popup_image_focus_window

0x9f5a,	// (0x0006dd5b) camera2_autofocus_pane_ParamLimits

0x9f5a,	// (0x0006dd5b) camera2_autofocus_pane

0x6c91,	// (0x0006aa92) bg_popup_sub_pane_cp06

0x47d7,	// (0x000685d8) popup_image_focus_window_g1

0x47df,	// (0x000685e0) popup_image_focus_window_g2

0x47e7,	// (0x000685e8) popup_image_focus_window_g3

0x47ef,	// (0x000685f0) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x00073522) popup_image_focus_window_g

0x47f7,	// (0x000685f8) popup_image_focus_window_t1

0x4805,	// (0x00068606) popup_image_focus_window_t2

0x4815,	// (0x00068616) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x0007352b) popup_image_focus_window_t

0x4823,	// (0x00068624) camera2_autofocus_pane_g1

0xe908,	// (0x00072709) bg_tb_trans_pane_cp01

0x4831,	// (0x00068632) popup_image_details_window_g1

0x4844,	// (0x00068645) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x0007353d) popup_image_details_window_g

0x486d,	// (0x0006866e) popup_image_details_window_t1

0x487f,	// (0x00068680) popup_image_details_window_t2

0x4898,	// (0x00068699) popup_image_details_window_t3

0x48ac,	// (0x000686ad) popup_image_details_window_t4

0x48c7,	// (0x000686c8) popup_image_details_window_t5

0x0004,

0xf743,	// (0x00073544) popup_image_details_window_t

0xefdd,	// (0x00072dde) bg_calc_paper_pane_ParamLimits

0x6c91,	// (0x0006aa92) grid_highlight_pane_cp013

0x7276,	// (0x0006b077) list_calc_pane_ParamLimits

0x7288,	// (0x0006b089) scroll_pane_cp024

0xeff1,	// (0x00072df2) bg_calc_display_pane_ParamLimits

0x7290,	// (0x0006b091) calc_display_pane_t1_ParamLimits

0x72a5,	// (0x0006b0a6) calc_display_pane_t2_ParamLimits

0x72ba,	// (0x0006b0bb) calc_display_pane_t3_ParamLimits

0xf173,	// (0x00072f74) calc_display_pane_t_ParamLimits

0x7396,	// (0x0006b197) cell_calc_pane_g2

0x0001,

0xf190,	// (0x00072f91) cell_calc_pane_g

0x739f,	// (0x0006b1a0) cell_calc_pane_t1

0xf050,	// (0x00072e51) grid_highlight_pane_cp02_ParamLimits

0xf066,	// (0x00072e67) toolbar_button_pane_cp01_ParamLimits

0xf066,	// (0x00072e67) toolbar_button_pane_cp01

0x0e1a,	// (0x00064c1b) temp_image_control_pane_ParamLimits

0x0e1a,	// (0x00064c1b) temp_image_control_pane

0xe908,	// (0x00072709) main_mp3_pane

0x48e1,	// (0x000686e2) temp_image_control_pane_g1_ParamLimits

0x48e1,	// (0x000686e2) temp_image_control_pane_g1

0x48ef,	// (0x000686f0) temp_image_control_pane_g2_ParamLimits

0x48ef,	// (0x000686f0) temp_image_control_pane_g2

0x4901,	// (0x00068702) temp_image_control_pane_g3_ParamLimits

0x4901,	// (0x00068702) temp_image_control_pane_g3

0xa5b4,	// (0x0006e3b5) temp_image_control_pane_g4_ParamLimits

0xa5b4,	// (0x0006e3b5) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x0007354f) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x0007354f) temp_image_control_pane_g

0x48e1,	// (0x000686e2) main_mp3_pane_g1

0xa5c5,	// (0x0006e3c6) main_mp3_pane_g2

0x0007,

0xf757,	// (0x00073558) main_mp3_pane_g

0x4944,	// (0x00068745) main_mp3_pane_t1

0x0123,	// (0x00063f24) main_camera_pane_g8_ParamLimits

0x0123,	// (0x00063f24) main_camera_pane_g8

0x7b17,	// (0x0006b918) main_video_pane_g7_ParamLimits

0x7b17,	// (0x0006b918) main_video_pane_g7

0xa0a2,	// (0x0006dea3) main_camera2_pane_t7_ParamLimits

0xa0a2,	// (0x0006dea3) main_camera2_pane_t7

0x0269,	// (0x0006406a) scroll_pane_cp025_ParamLimits

0x0269,	// (0x0006406a) scroll_pane_cp025

0x027d,	// (0x0006407e) scroll_pane_cp026_ParamLimits

0x027d,	// (0x0006407e) scroll_pane_cp026

0x028c,	// (0x0006408d) wml_content_pane_ParamLimits

0x6c91,	// (0x0006aa92) main_touch_calib_pane

0xa669,	// (0x0006e46a) main_touch_calib_pane_g1

0xa675,	// (0x0006e476) main_touch_calib_pane_g2

0xa681,	// (0x0006e482) main_touch_calib_pane_g3

0xa68d,	// (0x0006e48e) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x00073576) main_touch_calib_pane_g

0xa699,	// (0x0006e49a) main_touch_calib_pane_t1

0xa6b0,	// (0x0006e4b1) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x0007357f) main_touch_calib_pane_t

0x0a3d,	// (0x0006483e) mup_progress_pane_cp02

0x0a5c,	// (0x0006485d) navi_pane_g1

0x0abe,	// (0x000648bf) navi_pane_mp_t3

0xe908,	// (0x00072709) main_mp3_pane_ParamLimits

0x9cfd,	// (0x0006dafe) navi_pane_ParamLimits

0x48e1,	// (0x000686e2) main_mp3_pane_g1_ParamLimits

0xa5c5,	// (0x0006e3c6) main_mp3_pane_g2_ParamLimits

0xa5d1,	// (0x0006e3d2) main_mp3_pane_g3_ParamLimits

0xa5d1,	// (0x0006e3d2) main_mp3_pane_g3

0xa5dd,	// (0x0006e3de) main_mp3_pane_g4_ParamLimits

0xa5dd,	// (0x0006e3de) main_mp3_pane_g4

0x4911,	// (0x00068712) main_mp3_pane_g5_ParamLimits

0x4911,	// (0x00068712) main_mp3_pane_g5

0x491f,	// (0x00068720) main_mp3_pane_g6_ParamLimits

0x491f,	// (0x00068720) main_mp3_pane_g6

0x492c,	// (0x0006872d) main_mp3_pane_g7_ParamLimits

0x492c,	// (0x0006872d) main_mp3_pane_g7

0x4938,	// (0x00068739) main_mp3_pane_g8_ParamLimits

0x4938,	// (0x00068739) main_mp3_pane_g8

0xf757,	// (0x00073558) main_mp3_pane_g_ParamLimits

0xa5e9,	// (0x0006e3ea) main_mp3_pane_t2

0xa5f9,	// (0x0006e3fa) main_mp3_pane_t3

0x4952,	// (0x00068753) main_mp3_pane_t4

0x4960,	// (0x00068761) main_mp3_pane_t5

0x0005,

0xf768,	// (0x00073569) main_mp3_pane_t

0x496e,	// (0x0006876f) mup_progress_pane_cp01

0x6ce3,	// (0x0006aae4) aid_zoom_text_secondary2

0x4728,	// (0x00068529) list_cale_ev2_pane

0x4730,	// (0x00068531) scroll_pane_cp023_ParamLimits

0xa705,	// (0x0006e506) field_cale_ev2_pane_ParamLimits

0xa705,	// (0x0006e506) field_cale_ev2_pane

0xa72e,	// (0x0006e52f) field_cale_ev2_pane_g1_ParamLimits

0xa72e,	// (0x0006e52f) field_cale_ev2_pane_g1

0xa73a,	// (0x0006e53b) field_cale_ev2_pane_g2_ParamLimits

0xa73a,	// (0x0006e53b) field_cale_ev2_pane_g2

0xa752,	// (0x0006e553) field_cale_ev2_pane_g3_ParamLimits

0xa752,	// (0x0006e553) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x0007358a) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x0007358a) field_cale_ev2_pane_g

0x5e34,	// (0x00069c35) field_cale_ev2_pane_t1_ParamLimits

0x5e34,	// (0x00069c35) field_cale_ev2_pane_t1

0x5e4b,	// (0x00069c4c) field_cale_ev2_pane_t2_ParamLimits

0x5e4b,	// (0x00069c4c) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x00073593) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x00073593) field_cale_ev2_pane_t

0x9518,	// (0x0006d319) main_postcard_pane_g5_ParamLimits

0x9518,	// (0x0006d319) main_postcard_pane_g5

0x9526,	// (0x0006d327) main_postcard_pane_g6_ParamLimits

0x9526,	// (0x0006d327) main_postcard_pane_g6

0x795f,	// (0x0006b760) camera2_autofocus_pane_cp_ParamLimits

0x795f,	// (0x0006b760) camera2_autofocus_pane_cp

0xe908,	// (0x00072709) main_mup3_pane

0xa796,	// (0x0006e597) main_mup3_pane_g1_ParamLimits

0xa796,	// (0x0006e597) main_mup3_pane_g1

0xa7b7,	// (0x0006e5b8) main_mup3_pane_g2_ParamLimits

0xa7b7,	// (0x0006e5b8) main_mup3_pane_g2

0xa82f,	// (0x0006e630) main_mup3_pane_g3_ParamLimits

0xa82f,	// (0x0006e630) main_mup3_pane_g3

0xa86e,	// (0x0006e66f) main_mup3_pane_g4_ParamLimits

0xa86e,	// (0x0006e66f) main_mup3_pane_g4

0xa8ad,	// (0x0006e6ae) main_mup3_pane_g5_ParamLimits

0xa8ad,	// (0x0006e6ae) main_mup3_pane_g5

0xa8ec,	// (0x0006e6ed) main_mup3_pane_g6_ParamLimits

0xa8ec,	// (0x0006e6ed) main_mup3_pane_g6

0x4976,	// (0x00068777) main_mup3_pane_g7_ParamLimits

0x4976,	// (0x00068777) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x000735a3) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x000735a3) main_mup3_pane_g

0xa95e,	// (0x0006e75f) main_mup3_pane_t1_ParamLimits

0xa95e,	// (0x0006e75f) main_mup3_pane_t1

0xa9c9,	// (0x0006e7ca) main_mup3_pane_t2_ParamLimits

0xa9c9,	// (0x0006e7ca) main_mup3_pane_t2

0xaa8e,	// (0x0006e88f) main_mup3_pane_t4_ParamLimits

0xaa8e,	// (0x0006e88f) main_mup3_pane_t4

0xaadc,	// (0x0006e8dd) main_mup3_pane_t5_ParamLimits

0xaadc,	// (0x0006e8dd) main_mup3_pane_t5

0xab84,	// (0x0006e985) main_mup3_pane_t6_ParamLimits

0xab84,	// (0x0006e985) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x000735b4) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x000735b4) main_mup3_pane_t

0xac2c,	// (0x0006ea2d) mup3_progress_pane_ParamLimits

0xac2c,	// (0x0006ea2d) mup3_progress_pane

0xac97,	// (0x0006ea98) popup_mup3_control_window_ParamLimits

0xac97,	// (0x0006ea98) popup_mup3_control_window

0x4984,	// (0x00068785) popup_mup3_text_window

0xacb0,	// (0x0006eab1) mup3_progress_pane_t1

0xacc7,	// (0x0006eac8) mup3_progress_pane_t2

0x498c,	// (0x0006878d) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x000735c1) mup3_progress_pane_t

0x49a3,	// (0x000687a4) mup_progress_pane_cp03

0x6c91,	// (0x0006aa92) bg_tb_trans_pane_cp04

0xacde,	// (0x0006eadf) mup3_volume_pane

0xace6,	// (0x0006eae7) popup_mup3_control_window_g1

0xacef,	// (0x0006eaf0) mup3_volume_pane_g1

0xacf8,	// (0x0006eaf9) mup3_volume_pane_g2

0xad01,	// (0x0006eb02) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x000735c8) mup3_volume_pane_g

0x6c91,	// (0x0006aa92) bg_tb_trans_pane_cp03

0x49b3,	// (0x000687b4) popup_mup3_text_window_g1

0x49bb,	// (0x000687bc) popup_mup3_text_window_t1

0xf039,	// (0x00072e3a) list_calc_item_pane_g1_ParamLimits

0x4401,	// (0x00068202) mup_volume_pane_cp_g1

0xa6c7,	// (0x0006e4c8) main_touch_calib_pane_t3

0xa6db,	// (0x0006e4dc) main_touch_calib_pane_t4

0xa6ef,	// (0x0006e4f0) main_touch_calib_pane_t5

0x6c9b,	// (0x0006aa9c) aid_cell_size_toolbar2

0x6ca3,	// (0x0006aaa4) aid_popup3_width_pane

0x5b27,	// (0x00069928) aid_zoom_text_msg_primary

0x7936,	// (0x0006b737) vorec_t7

0xeffd,	// (0x00072dfe) bg_calc_paper_pane_g1_ParamLimits

0xf009,	// (0x00072e0a) bg_calc_paper_pane_g2_ParamLimits

0xf015,	// (0x00072e16) bg_calc_paper_pane_g3_ParamLimits

0xf02d,	// (0x00072e2e) bg_calc_paper_pane_g4_ParamLimits

0xf021,	// (0x00072e22) bg_calc_paper_pane_g5_ParamLimits

0x72f9,	// (0x0006b0fa) bg_calc_paper_pane_g6_ParamLimits

0x730a,	// (0x0006b10b) bg_calc_paper_pane_g7_ParamLimits

0x731b,	// (0x0006b11c) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00072f7b) bg_calc_paper_pane_g_ParamLimits

0x732c,	// (0x0006b12d) calc_bg_paper_pane_g9_ParamLimits

0x7a46,	// (0x0006b847) image_qvga_pane_ParamLimits

0x7a46,	// (0x0006b847) image_qvga_pane

0xef1a,	// (0x00072d1b) bg_popup_sub_pane_cp04_ParamLimits

0x0d51,	// (0x00064b52) popup_mup_playback_window_g1_ParamLimits

0x0d5d,	// (0x00064b5e) popup_mup_playback_window_t1_ParamLimits

0x0d72,	// (0x00064b73) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x00073307) popup_mup_playback_window_t_ParamLimits

0xa1d1,	// (0x0006dfd2) main_mup2_pane_g3_ParamLimits

0xa1d1,	// (0x0006dfd2) main_mup2_pane_g3

0x7cfe,	// (0x0006baff) popup_toolbar_window_cp04

0x1154,	// (0x00064f55) popup_call2_audio_second_window_g3_ParamLimits

0x1154,	// (0x00064f55) popup_call2_audio_second_window_g3

0x3887,	// (0x00067688) popup_call2_audio_first_window_g4_ParamLimits

0x3887,	// (0x00067688) popup_call2_audio_first_window_g4

0x3f06,	// (0x00067d07) popup_call2_audio_in_window_g4_ParamLimits

0x3f06,	// (0x00067d07) popup_call2_audio_in_window_g4

0x962b,	// (0x0006d42c) aid_area_sk_bg_cut_ParamLimits

0x962b,	// (0x0006d42c) aid_area_sk_bg_cut

0x0d87,	// (0x00064b88) aid_area_sk_bg_cut_2_ParamLimits

0x0d87,	// (0x00064b88) aid_area_sk_bg_cut_2

0xa55a,	// (0x0006e35b) aid_placing_details_win

0xa562,	// (0x0006e363) aid_placing_details_win_2

0x4823,	// (0x00068624) camera2_autofocus_pane_g1_ParamLimits

0x6edc,	// (0x0006acdd) popup_fixed_preview_cale_window_ParamLimits

0x6edc,	// (0x0006acdd) popup_fixed_preview_cale_window

0x0b28,	// (0x00064929) navi_slider_pane_g3

0x0b1f,	// (0x00064920) navi_slider_pane_g4

0x0b16,	// (0x00064917) navi_slider_pane_g5

0x0b28,	// (0x00064929) navi_slider_pane_g6

0x8f67,	// (0x0006cd68) navi_slider_pane_g7

0x0c52,	// (0x00064a53) mup_scale_pane_g3

0x0c5b,	// (0x00064a5c) mup_scale_pane_g4

0x0c64,	// (0x00064a65) mup_scale_pane_g5

0x93a8,	// (0x0006d1a9) mup_scale_pane_g6

0x93b1,	// (0x0006d1b2) mup_scale_pane_g7

0x0b28,	// (0x00064929) cams2_slider_pane_g3

0x4483,	// (0x00068284) cams2_slider_pane_g4

0xa4b2,	// (0x0006e2b3) cams2_slider_pane_g5

0x0b28,	// (0x00064929) cams2_slider_pane_g6

0xa4ba,	// (0x0006e2bb) cams2_slider_pane_g7

0x46ae,	// (0x000684af) camera2_autofocus_pane_cp_g1

0x49c9,	// (0x000687ca) bg_popup_preview_window_pane_cp02_ParamLimits

0x49c9,	// (0x000687ca) bg_popup_preview_window_pane_cp02

0x49d5,	// (0x000687d6) list_fp_cale_pane_ParamLimits

0x49d5,	// (0x000687d6) list_fp_cale_pane

0x49e1,	// (0x000687e2) popup_fixed_preview_cale_window_t1_ParamLimits

0x49e1,	// (0x000687e2) popup_fixed_preview_cale_window_t1

0xad0a,	// (0x0006eb0b) popup_fixed_preview_cale_window_t2_ParamLimits

0xad0a,	// (0x0006eb0b) popup_fixed_preview_cale_window_t2

0xad1f,	// (0x0006eb20) popup_fixed_preview_cale_window_t3_ParamLimits

0xad1f,	// (0x0006eb20) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x000735cf) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x000735cf) popup_fixed_preview_cale_window_t

0xad34,	// (0x0006eb35) list_single_fp_cale_pane_ParamLimits

0xad34,	// (0x0006eb35) list_single_fp_cale_pane

0x49ff,	// (0x00068800) list_single_fp_cale_pane_g1_ParamLimits

0x49ff,	// (0x00068800) list_single_fp_cale_pane_g1

0x4a0b,	// (0x0006880c) list_single_fp_cale_pane_g2_ParamLimits

0x4a0b,	// (0x0006880c) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x000735d6) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x000735d6) list_single_fp_cale_pane_g

0x4a24,	// (0x00068825) list_single_fp_cale_pane_t1_ParamLimits

0x4a24,	// (0x00068825) list_single_fp_cale_pane_t1

0x4a36,	// (0x00068837) list_single_fp_cale_pane_t2_ParamLimits

0x4a36,	// (0x00068837) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x000735dd) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x000735dd) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x6c91,	// (0x0006aa92) main_dialer_pane

0xad46,	// (0x0006eb47) aid_cell_size_keypad

0xad50,	// (0x0006eb51) dialer_ne_pane

0xad5a,	// (0x0006eb5b) grid_dialer_command_1_pane

0xad62,	// (0x0006eb63) grid_dialer_command_2_pane

0xad6a,	// (0x0006eb6b) grid_dialer_keypad_pane

0xad7c,	// (0x0006eb7d) bg_popup_call_pane_cp06_ParamLimits

0xad7c,	// (0x0006eb7d) bg_popup_call_pane_cp06

0xad88,	// (0x0006eb89) dialer_ne_clear_pane_ParamLimits

0xad88,	// (0x0006eb89) dialer_ne_clear_pane

0x4a69,	// (0x0006886a) dialer_ne_pane_g1

0x4a71,	// (0x00068872) dialer_ne_pane_t1_ParamLimits

0x4a71,	// (0x00068872) dialer_ne_pane_t1

0xad94,	// (0x0006eb95) dialer_ne_pane_t2_ParamLimits

0xad94,	// (0x0006eb95) dialer_ne_pane_t2

0xadb1,	// (0x0006ebb2) dialer_ne_pane_t3_ParamLimits

0xadb1,	// (0x0006ebb2) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x000735e2) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x000735e2) dialer_ne_pane_t

0xadd5,	// (0x0006ebd6) dialer_ne_pane_t3_copy1_ParamLimits

0xadd5,	// (0x0006ebd6) dialer_ne_pane_t3_copy1

0xadf9,	// (0x0006ebfa) cell_dialer_keypad_pane_ParamLimits

0xadf9,	// (0x0006ebfa) cell_dialer_keypad_pane

0xae10,	// (0x0006ec11) cell_dialer_command_1_pane_ParamLimits

0xae10,	// (0x0006ec11) cell_dialer_command_1_pane

0xae26,	// (0x0006ec27) cell_dialer_command_2_pane_ParamLimits

0xae26,	// (0x0006ec27) cell_dialer_command_2_pane

0x4a83,	// (0x00068884) bg_button_pane_cp02_ParamLimits

0x4a83,	// (0x00068884) bg_button_pane_cp02

0xae35,	// (0x0006ec36) cell_dialer_keypad_pane_g1_ParamLimits

0xae35,	// (0x0006ec36) cell_dialer_keypad_pane_g1

0x4a83,	// (0x00068884) bg_button_pane_cp03_ParamLimits

0x4a83,	// (0x00068884) bg_button_pane_cp03

0xae4a,	// (0x0006ec4b) cell_dialer_command_1_pane_g1_ParamLimits

0xae4a,	// (0x0006ec4b) cell_dialer_command_1_pane_g1

0x4a8f,	// (0x00068890) bg_button_pane_cp04

0xae5e,	// (0x0006ec5f) cell_dialer_command_2_pane_g1

0x0afc,	// (0x000648fd) bg_button_pane_cp06

0x4a97,	// (0x00068898) dialer_ne_clear_pane_g1

0x8eaa,	// (0x0006ccab) navi_pane_g2

0x8ed8,	// (0x0006ccd9) navi_pane_g3

0x0002,

0xf409,	// (0x0007320a) navi_pane_g

0x8f03,	// (0x0006cd04) navi_pane_mv_g2

0x8f2a,	// (0x0006cd2b) navi_pane_mv_g5

0x8f32,	// (0x0006cd33) navi_pane_mv_t1

0xeff1,	// (0x00072df2) main_clock2_pane

0xae8d,	// (0x0006ec8e) main_clock2_list_pane_ParamLimits

0xae8d,	// (0x0006ec8e) main_clock2_list_pane

0xaeb5,	// (0x0006ecb6) main_clock2_pane_t1_ParamLimits

0xaeb5,	// (0x0006ecb6) main_clock2_pane_t1

0xaee3,	// (0x0006ece4) main_clock2_pane_t2_ParamLimits

0xaee3,	// (0x0006ece4) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x000735e9) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x000735e9) main_clock2_pane_t

0xaf4a,	// (0x0006ed4b) popup_clock_analogue_window_cp03_ParamLimits

0xaf4a,	// (0x0006ed4b) popup_clock_analogue_window_cp03

0xaf68,	// (0x0006ed69) popup_clock_digital_window_cp02_ParamLimits

0xaf68,	// (0x0006ed69) popup_clock_digital_window_cp02

0xafd5,	// (0x0006edd6) main_clock2_list_single_pane_ParamLimits

0xafd5,	// (0x0006edd6) main_clock2_list_single_pane

0x0afc,	// (0x000648fd) list_highlight_pane_cp05

0x4a9f,	// (0x000688a0) main_clock2_list_single_pane_t1

0x7cfe,	// (0x0006baff) popup_toolbar_window_cp04_ParamLimits

0xa584,	// (0x0006e385) camera2_autofocus_pane_g2_ParamLimits

0xa584,	// (0x0006e385) camera2_autofocus_pane_g2

0xa590,	// (0x0006e391) camera2_autofocus_pane_g3_ParamLimits

0xa590,	// (0x0006e391) camera2_autofocus_pane_g3

0xa59c,	// (0x0006e39d) camera2_autofocus_pane_g4_ParamLimits

0xa59c,	// (0x0006e39d) camera2_autofocus_pane_g4

0xa5a8,	// (0x0006e3a9) camera2_autofocus_pane_g5_ParamLimits

0xa5a8,	// (0x0006e3a9) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x00073532) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x00073532) camera2_autofocus_pane_g

0xa776,	// (0x0006e577) camera2_autofocus_pane_cp_g2

0xa77e,	// (0x0006e57f) camera2_autofocus_pane_cp_g3

0xa786,	// (0x0006e587) camera2_autofocus_pane_cp_g4

0xa78e,	// (0x0006e58f) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x00073598) camera2_autofocus_pane_cp_g

0xad74,	// (0x0006eb75) popup_dialer_spcha_window

0x6c91,	// (0x0006aa92) bg_popup_sub_pane_cp07

0x4aad,	// (0x000688ae) list_spcha_pane

0x4ab5,	// (0x000688b6) list_single_spcha_pane_ParamLimits

0x4ab5,	// (0x000688b6) list_single_spcha_pane

0x6c91,	// (0x0006aa92) list_highlight_pane_cp06

0x4ac6,	// (0x000688c7) list_single_spcha_pane_t1

0x3cb0,	// (0x00067ab1) popup_call2_audio_out_window_g4_ParamLimits

0x3cb0,	// (0x00067ab1) popup_call2_audio_out_window_g4

0x6c91,	// (0x0006aa92) main_imed2_pane

0x428f,	// (0x00068090) popup_imed_adjust2_window

0x9c4a,	// (0x0006da4b) popup_imed_trans_window_ParamLimits

0x9c4a,	// (0x0006da4b) popup_imed_trans_window

0x44ec,	// (0x000682ed) popup_blid_sat_info2_window_t1

0x44fa,	// (0x000682fb) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x000734c7) popup_blid_sat_info2_window_t

0xb07f,	// (0x0006ee80) aid_size_cell_colour_35

0xb099,	// (0x0006ee9a) aid_size_cell_colour_112

0xb0b0,	// (0x0006eeb1) aid_size_cell_effect

0xe908,	// (0x00072709) bg_tb_trans_pane_cp02

0x0673,	// (0x00064474) heading_imed_pane

0xb0ca,	// (0x0006eecb) listscroll_imed_pane

0x4ad4,	// (0x000688d5) heading_imed_pane_g1

0x4adc,	// (0x000688dd) heading_imed_pane_t1

0x4aea,	// (0x000688eb) grid_imed_colour_35_pane_ParamLimits

0x4aea,	// (0x000688eb) grid_imed_colour_35_pane

0xb0d6,	// (0x0006eed7) grid_imed_effect_pane

0x4b01,	// (0x00068902) list_imed_aspect_pane

0xb0e6,	// (0x0006eee7) scroll_pane_cp027_ParamLimits

0xb0e6,	// (0x0006eee7) scroll_pane_cp027

0xb0f2,	// (0x0006eef3) cell_imed_effect_pane_ParamLimits

0xb0f2,	// (0x0006eef3) cell_imed_effect_pane

0x4b09,	// (0x0006890a) cell_imed_colour_pane_ParamLimits

0x4b09,	// (0x0006890a) cell_imed_colour_pane

0x4b4b,	// (0x0006894c) cell_imed_colour_pane_g1_ParamLimits

0x4b4b,	// (0x0006894c) cell_imed_colour_pane_g1

0x4b5c,	// (0x0006895d) hgihlgiht_grid_pane_cp016_ParamLimits

0x4b5c,	// (0x0006895d) hgihlgiht_grid_pane_cp016

0xb10a,	// (0x0006ef0b) cell_imed_effect_pane_g1

0xb112,	// (0x0006ef13) grid_highlight_pane_cp017

0x4b6d,	// (0x0006896e) list_imed_single_pane_ParamLimits

0x4b6d,	// (0x0006896e) list_imed_single_pane

0x6c91,	// (0x0006aa92) list_highlight_pane_cp07

0x4b82,	// (0x00068983) list_imed_aspect_pane_comp1_t1

0x4267,	// (0x00068068) bg_tb_trans_pane_cp05

0x4ba4,	// (0x000689a5) popup_imed_adjust2_window_g1

0x4bcb,	// (0x000689cc) popup_imed_adjust2_window_t1

0x4be3,	// (0x000689e4) slider_imed_adjust_pane

0x4bf7,	// (0x000689f8) slider_imed_adjust_pane_g1

0x4c07,	// (0x00068a08) slider_imed_adjust_pane_g2

0x4c17,	// (0x00068a18) slider_imed_adjust_pane_g3

0x4c28,	// (0x00068a29) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x00073606) slider_imed_adjust_pane_g

0xb11b,	// (0x0006ef1c) aid_size_cell_clipart2

0xb127,	// (0x0006ef28) grid_imed_clipart_pane

0x4c39,	// (0x00068a3a) scroll_pane_cp031

0xb131,	// (0x0006ef32) cell_imed_clipart_pane_ParamLimits

0xb131,	// (0x0006ef32) cell_imed_clipart_pane

0xb153,	// (0x0006ef54) cell_imed_clipart_pane_g1

0x6c91,	// (0x0006aa92) grid_highlight_pane_cp014

0xae99,	// (0x0006ec9a) main_clock2_pane_g1_ParamLimits

0xae99,	// (0x0006ec9a) main_clock2_pane_g1

0xaf80,	// (0x0006ed81) aid_call2_pane_cp10

0xaf92,	// (0x0006ed93) aid_call_pane_cp10

0x0a31,	// (0x00064832) popup_clock_analogue_window_cp10_g1

0x0a31,	// (0x00064832) popup_clock_analogue_window_cp10_g2

0xafa4,	// (0x0006eda5) popup_clock_analogue_window_cp10_g3

0xafa4,	// (0x0006eda5) popup_clock_analogue_window_cp10_g4

0x0a31,	// (0x00064832) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x000735f4) popup_clock_analogue_window_cp10_g

0xafb6,	// (0x0006edb7) popup_clock_analogue_window_cp10_t1

0xafe7,	// (0x0006ede8) clock_digital_number_pane_cp10_ParamLimits

0xafe7,	// (0x0006ede8) clock_digital_number_pane_cp10

0xafff,	// (0x0006ee00) clock_digital_number_pane_cp11_ParamLimits

0xafff,	// (0x0006ee00) clock_digital_number_pane_cp11

0xb017,	// (0x0006ee18) clock_digital_number_pane_cp12_ParamLimits

0xb017,	// (0x0006ee18) clock_digital_number_pane_cp12

0xb02f,	// (0x0006ee30) clock_digital_number_pane_cp13_ParamLimits

0xb02f,	// (0x0006ee30) clock_digital_number_pane_cp13

0xb047,	// (0x0006ee48) clock_digital_separator_pane_cp10_ParamLimits

0xb047,	// (0x0006ee48) clock_digital_separator_pane_cp10

0xb05f,	// (0x0006ee60) popup_clock_digital_window_cp02_t1_ParamLimits

0xb05f,	// (0x0006ee60) popup_clock_digital_window_cp02_t1

0xef12,	// (0x00072d13) clock_digital_number_pane_cp10_g1

0xef12,	// (0x00072d13) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x0007360f) clock_digital_number_pane_cp10_g

0xef12,	// (0x00072d13) clock_digital_separator_pane_cp10_g1

0xef12,	// (0x00072d13) clock_digital_separator_pane_g2_cp10

0x0acc,	// (0x000648cd) navi_pane_vded_g4

0x0ad5,	// (0x000648d6) navi_pane_vded_g5

0x0ade,	// (0x000648df) navi_pane_vded_t1

0x6c91,	// (0x0006aa92) main_vded_pane

0xb15c,	// (0x0006ef5d) main_vded_pane_g1

0xb168,	// (0x0006ef69) main_vded_pane_g2

0xb172,	// (0x0006ef73) main_vded_pane_g3

0x0002,

0xf813,	// (0x00073614) main_vded_pane_g

0xb17c,	// (0x0006ef7d) main_vded_pane_t1

0xb18a,	// (0x0006ef8b) main_vded_pane_t2

0x0001,

0xf81a,	// (0x0007361b) main_vded_pane_t

0xb198,	// (0x0006ef99) vded_slider_pane

0xb1a2,	// (0x0006efa3) vded_video_pane

0x4c41,	// (0x00068a42) vded_video_pane_g1

0xb1ac,	// (0x0006efad) vded_video_pane_g2

0x46ae,	// (0x000684af) vded_video_pane_g3

0x0002,

0xf81f,	// (0x00073620) vded_video_pane_g

0x4c4b,	// (0x00068a4c) vded_slider_pane_g1

0x4401,	// (0x00068202) vded_slider_pane_g2

0x4c54,	// (0x00068a55) vded_slider_pane_g3

0x4c5d,	// (0x00068a5e) vded_slider_pane_g4

0x4c66,	// (0x00068a67) vded_slider_pane_g5

0x0004,

0xf826,	// (0x00073627) vded_slider_pane_g

0xac89,	// (0x0006ea8a) mup3_rocker_pane_ParamLimits

0xac89,	// (0x0006ea8a) mup3_rocker_pane

0xb1b5,	// (0x0006efb6) mup3_control_keys_pane_g1

0xb1bd,	// (0x0006efbe) mup3_control_keys_pane_g2

0xb1c5,	// (0x0006efc6) mup3_control_keys_pane_g3

0xb1cd,	// (0x0006efce) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x00073632) mup3_control_keys_pane_g

0x6efa,	// (0x0006acfb) popup_toolbar2_fixed_window_cp01_ParamLimits

0x6efa,	// (0x0006acfb) popup_toolbar2_fixed_window_cp01

0xaca3,	// (0x0006eaa4) popup_toolbar2_fixed_window_cp02_ParamLimits

0xaca3,	// (0x0006eaa4) popup_toolbar2_fixed_window_cp02

0x35e6,	// (0x000673e7) popup_call2_audio_second_window_t4_ParamLimits

0x35e6,	// (0x000673e7) popup_call2_audio_second_window_t4

0x3b1d,	// (0x0006791e) popup_call2_audio_first_window_t6_ParamLimits

0x3b1d,	// (0x0006791e) popup_call2_audio_first_window_t6

0x3db3,	// (0x00067bb4) popup_call2_audio_out_window_t6_ParamLimits

0x3db3,	// (0x00067bb4) popup_call2_audio_out_window_t6

0x6c91,	// (0x0006aa92) main_vitu_pane

0xb1dd,	// (0x0006efde) aid_size_cell_itu_ParamLimits

0xb1dd,	// (0x0006efde) aid_size_cell_itu

0x6f22,	// (0x0006ad23) bg_popup_window_pane_cp08_ParamLimits

0x6f22,	// (0x0006ad23) bg_popup_window_pane_cp08

0xb1eb,	// (0x0006efec) field_vitu_entry_pane_ParamLimits

0xb1eb,	// (0x0006efec) field_vitu_entry_pane

0xb1fa,	// (0x0006effb) grid_vitu_function_pane_ParamLimits

0xb1fa,	// (0x0006effb) grid_vitu_function_pane

0xb20a,	// (0x0006f00b) grid_vitu_itu_pane_ParamLimits

0xb20a,	// (0x0006f00b) grid_vitu_itu_pane

0xb21a,	// (0x0006f01b) cell_vitu_itu_pane_ParamLimits

0xb21a,	// (0x0006f01b) cell_vitu_itu_pane

0xb22f,	// (0x0006f030) cell_vitu_function_pane_ParamLimits

0xb22f,	// (0x0006f030) cell_vitu_function_pane

0xe908,	// (0x00072709) bg_popup_sub_pane_cp08_ParamLimits

0xe908,	// (0x00072709) bg_popup_sub_pane_cp08

0xb241,	// (0x0006f042) field_vitu_entry_pane_t1_ParamLimits

0xb241,	// (0x0006f042) field_vitu_entry_pane_t1

0x4c87,	// (0x00068a88) field_vitu_entry_pane_t2_ParamLimits

0x4c87,	// (0x00068a88) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x00073640) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x00073640) field_vitu_entry_pane_t

0x4ca4,	// (0x00068aa5) bg_button_pane_cp05_ParamLimits

0x4ca4,	// (0x00068aa5) bg_button_pane_cp05

0xb25c,	// (0x0006f05d) cell_vitu_itu_pane_g1

0xb274,	// (0x0006f075) cell_vitu_itu_pane_t1_ParamLimits

0xb274,	// (0x0006f075) cell_vitu_itu_pane_t1

0xb286,	// (0x0006f087) cell_vitu_itu_pane_t2_ParamLimits

0xb286,	// (0x0006f087) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x00073645) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x00073645) cell_vitu_itu_pane_t

0x4cb2,	// (0x00068ab3) bg_button_pane_cp07

0xb2bb,	// (0x0006f0bc) cell_vitu_function_pane_g1

0x71a1,	// (0x0006afa2) main_calc_pane_g1

0x6cd7,	// (0x0006aad8) aid_visual_content_pane

0x6c91,	// (0x0006aa92) main_vradio_pane

0xb2c4,	// (0x0006f0c5) main_vradio_pane_g1_ParamLimits

0xb2c4,	// (0x0006f0c5) main_vradio_pane_g1

0x4cbc,	// (0x00068abd) main_vradio_pane_g2_ParamLimits

0x4cbc,	// (0x00068abd) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x0007364c) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x0007364c) main_vradio_pane_g

0xb2d4,	// (0x0006f0d5) main_vradio_pane_t1_ParamLimits

0xb2d4,	// (0x0006f0d5) main_vradio_pane_t1

0xb2e6,	// (0x0006f0e7) main_vradio_pane_t2_ParamLimits

0xb2e6,	// (0x0006f0e7) main_vradio_pane_t2

0x4cc9,	// (0x00068aca) main_vradio_pane_t3_ParamLimits

0x4cc9,	// (0x00068aca) main_vradio_pane_t3

0x0002,

0xf850,	// (0x00073651) main_vradio_pane_t_ParamLimits

0xf850,	// (0x00073651) main_vradio_pane_t

0xb2f8,	// (0x0006f0f9) vradio_rocker_control_pane_ParamLimits

0xb2f8,	// (0x0006f0f9) vradio_rocker_control_pane

0xb304,	// (0x0006f105) vradio_station_info_pane_ParamLimits

0xb304,	// (0x0006f105) vradio_station_info_pane

0x4cdd,	// (0x00068ade) vradio_frequency_info_pane_ParamLimits

0x4cdd,	// (0x00068ade) vradio_frequency_info_pane

0x46ae,	// (0x000684af) vradio_station_info_pane_g1

0x4cec,	// (0x00068aed) vradio_station_info_pane_t1_ParamLimits

0x4cec,	// (0x00068aed) vradio_station_info_pane_t1

0x4d0e,	// (0x00068b0f) vradio_station_info_pane_t2_ParamLimits

0x4d0e,	// (0x00068b0f) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x00073658) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x00073658) vradio_station_info_pane_t

0x4d28,	// (0x00068b29) vradio_tuning_pane

0x4d30,	// (0x00068b31) vradio_rocker_control_pane_g1

0x4d38,	// (0x00068b39) vradio_rocker_control_pane_g2

0x4d40,	// (0x00068b41) vradio_rocker_control_pane_g3

0x4d48,	// (0x00068b49) vradio_rocker_control_pane_g4

0x4d50,	// (0x00068b51) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x0007365d) vradio_rocker_control_pane_g

0xb313,	// (0x0006f114) vradio_frequency_info_pane_g1

0x4d58,	// (0x00068b59) vradio_frequency_info_pane_t1_ParamLimits

0x4d58,	// (0x00068b59) vradio_frequency_info_pane_t1

0xb31d,	// (0x0006f11e) vradio_tuning_pane_g1

0xb326,	// (0x0006f127) vradio_tuning_pane_t1

0x6d20,	// (0x0006ab21) area_side_right_pane_ParamLimits

0x6d20,	// (0x0006ab21) area_side_right_pane

0x422e,	// (0x0006802f) status_small_pane_g1

0x4236,	// (0x00068037) status_small_pane_g2

0x423f,	// (0x00068040) status_small_pane_g3

0x4248,	// (0x00068049) status_small_pane_g4

0x0003,

0xf61c,	// (0x0007341d) status_small_pane_g

0x4251,	// (0x00068052) status_small_pane_t1

0x6c91,	// (0x0006aa92) main_video3_pane

0x4d6c,	// (0x00068b6d) cams_zoom_vslider_pane

0x4d74,	// (0x00068b75) image3_wide_pane_ParamLimits

0x4d74,	// (0x00068b75) image3_wide_pane

0x4d8e,	// (0x00068b8f) image3_wide_small_pane

0x4d9a,	// (0x00068b9b) main_video3_pane_g1_ParamLimits

0x4d9a,	// (0x00068b9b) main_video3_pane_g1

0x4db6,	// (0x00068bb7) main_video3_pane_g2_ParamLimits

0x4db6,	// (0x00068bb7) main_video3_pane_g2

0x0001,

0xf867,	// (0x00073668) main_video3_pane_g_ParamLimits

0xf867,	// (0x00073668) main_video3_pane_g

0xe545,	// (0x00072346) main_video3_pane_t1_ParamLimits

0xe545,	// (0x00072346) main_video3_pane_t1

0xe570,	// (0x00072371) main_video3_pane_t2_ParamLimits

0xe570,	// (0x00072371) main_video3_pane_t2

0xe59b,	// (0x0007239c) main_video3_pane_t3_ParamLimits

0xe59b,	// (0x0007239c) main_video3_pane_t3

0x0002,

0xf86c,	// (0x0007366d) main_video3_pane_t_ParamLimits

0xf86c,	// (0x0007366d) main_video3_pane_t

0xe5c8,	// (0x000723c9) cams_zoom_vslider_pane_g1

0xe5d1,	// (0x000723d2) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x00073674) cams_zoom_vslider_pane_g

0xe5d9,	// (0x000723da) small_slider_vertical_pane

0x46ae,	// (0x000684af) small_slider_vertical_pane_g1

0x46ae,	// (0x000684af) small_slider_vertical_pane_g2

0xe5e1,	// (0x000723e2) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x00073679) small_slider_vertical_pane_g

0x6c91,	// (0x0006aa92) main_hwr_training_pane

0xe5ea,	// (0x000723eb) hwr_training_instruct_pane_ParamLimits

0xe5ea,	// (0x000723eb) hwr_training_instruct_pane

0xb335,	// (0x0006f136) hwr_training_navi_pane_ParamLimits

0xb335,	// (0x0006f136) hwr_training_navi_pane

0xb34f,	// (0x0006f150) hwr_training_write_pane_ParamLimits

0xb34f,	// (0x0006f150) hwr_training_write_pane

0x6c91,	// (0x0006aa92) bg_frame_shadow_pane

0xe621,	// (0x00072422) hwr_training_write_pane_g1

0xe629,	// (0x0007242a) hwr_training_write_pane_g2

0xe631,	// (0x00072432) hwr_training_write_pane_g3

0xe639,	// (0x0007243a) hwr_training_write_pane_g4

0xe641,	// (0x00072442) hwr_training_write_pane_g5

0xe649,	// (0x0007244a) hwr_training_write_pane_g6

0xe651,	// (0x00072452) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x00073680) hwr_training_write_pane_g

0xb387,	// (0x0006f188) hwr_training_navi_pane_g1_ParamLimits

0xb387,	// (0x0006f188) hwr_training_navi_pane_g1

0xb399,	// (0x0006f19a) hwr_training_navi_pane_g2_ParamLimits

0xb399,	// (0x0006f19a) hwr_training_navi_pane_g2

0xb3ab,	// (0x0006f1ac) hwr_training_navi_pane_g3_ParamLimits

0xb3ab,	// (0x0006f1ac) hwr_training_navi_pane_g3

0xb3bb,	// (0x0006f1bc) hwr_training_navi_pane_g4_ParamLimits

0xb3bb,	// (0x0006f1bc) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x0007368f) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x0007368f) hwr_training_navi_pane_g

0xb3d5,	// (0x0006f1d6) hwr_training_navi_pane_t1

0xb3e3,	// (0x0006f1e4) list_single_hwr_training_instruct_pane_ParamLimits

0xb3e3,	// (0x0006f1e4) list_single_hwr_training_instruct_pane

0xe659,	// (0x0007245a) list_single_hwr_training_instruct_pane_t1

0x45ee,	// (0x000683ef) bg_frame_shadow_pane_g1

0xe668,	// (0x00072469) bg_frame_shadow_pane_g2

0xe670,	// (0x00072471) bg_frame_shadow_pane_g3

0xe678,	// (0x00072479) bg_frame_shadow_pane_g4

0xe680,	// (0x00072481) bg_frame_shadow_pane_g5

0xe688,	// (0x00072489) bg_frame_shadow_pane_g6

0xe690,	// (0x00072491) bg_frame_shadow_pane_g7

0xf0aa,	// (0x00072eab) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x0007369a) bg_frame_shadow_pane_g

0x6c91,	// (0x0006aa92) main_video_tele_dialer_pane

0xb408,	// (0x0006f209) aid_size_cell_video_keypad_ParamLimits

0xb408,	// (0x0006f209) aid_size_cell_video_keypad

0xb418,	// (0x0006f219) grid_video_dialer_keypad_pane_ParamLimits

0xb418,	// (0x0006f219) grid_video_dialer_keypad_pane

0xb44a,	// (0x0006f24b) video_down_pane_cp_ParamLimits

0xb44a,	// (0x0006f24b) video_down_pane_cp

0xb456,	// (0x0006f257) cell_video_dialer_keypad_pane_ParamLimits

0xb456,	// (0x0006f257) cell_video_dialer_keypad_pane

0xe6b4,	// (0x000724b5) bg_button_pane_cp08_ParamLimits

0xe6b4,	// (0x000724b5) bg_button_pane_cp08

0xb46b,	// (0x0006f26c) cell_video_dialer_keypad_pane_g1_ParamLimits

0xb46b,	// (0x0006f26c) cell_video_dialer_keypad_pane_g1

0xac7d,	// (0x0006ea7e) mup3_rocker2_pane_ParamLimits

0xac7d,	// (0x0006ea7e) mup3_rocker2_pane

0x46ae,	// (0x000684af) mup3_rocker2_pane_g1

0x9bd4,	// (0x0006d9d5) main_dialer2_pane

0x6c91,	// (0x0006aa92) main_mp4_pane

0xb4ad,	// (0x0006f2ae) main_mp4_pane_g1_ParamLimits

0xb4ad,	// (0x0006f2ae) main_mp4_pane_g1

0xb4bb,	// (0x0006f2bc) main_mp4_pane_g2_ParamLimits

0xb4bb,	// (0x0006f2bc) main_mp4_pane_g2

0xb4c9,	// (0x0006f2ca) main_mp4_pane_g3_ParamLimits

0xb4c9,	// (0x0006f2ca) main_mp4_pane_g3

0xb50e,	// (0x0006f30f) main_mp4_pane_g4_ParamLimits

0xb50e,	// (0x0006f30f) main_mp4_pane_g4

0xb536,	// (0x0006f337) main_mp4_pane_g5_ParamLimits

0xb536,	// (0x0006f337) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x000736ba) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x000736ba) main_mp4_pane_g

0xb586,	// (0x0006f387) main_mp4_pane_t1_ParamLimits

0xb586,	// (0x0006f387) main_mp4_pane_t1

0xb5e2,	// (0x0006f3e3) main_mp4_pane_t2_ParamLimits

0xb5e2,	// (0x0006f3e3) main_mp4_pane_t2

0xe6c0,	// (0x000724c1) main_mp4_pane_t3_ParamLimits

0xe6c0,	// (0x000724c1) main_mp4_pane_t3

0xb634,	// (0x0006f435) main_mp4_pane_t4_ParamLimits

0xb634,	// (0x0006f435) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x000736c7) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x000736c7) main_mp4_pane_t

0xb678,	// (0x0006f479) mp4_progress_pane_ParamLimits

0xb678,	// (0x0006f479) mp4_progress_pane

0xb6c2,	// (0x0006f4c3) mp4_rocker_pane_ParamLimits

0xb6c2,	// (0x0006f4c3) mp4_rocker_pane

0xe6e8,	// (0x000724e9) mp4_progress_pane_t1

0xe701,	// (0x00072502) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x000736d0) mp4_progress_pane_t

0xe71a,	// (0x0007251b) mup_progress_pane_cp04

0x46ae,	// (0x000684af) mp4_rocker_pane_g1

0xb6e2,	// (0x0006f4e3) aid_cell_size_keypad2_ParamLimits

0xb6e2,	// (0x0006f4e3) aid_cell_size_keypad2

0xb6f2,	// (0x0006f4f3) dialer2_ne_pane_ParamLimits

0xb6f2,	// (0x0006f4f3) dialer2_ne_pane

0xb700,	// (0x0006f501) grid_dialer2_keypad_pane_ParamLimits

0xb700,	// (0x0006f501) grid_dialer2_keypad_pane

0x1a61,	// (0x00065862) bg_popup_call_pane_cp07_ParamLimits

0x1a61,	// (0x00065862) bg_popup_call_pane_cp07

0xb710,	// (0x0006f511) dialer2_ne_pane_t1_ParamLimits

0xb710,	// (0x0006f511) dialer2_ne_pane_t1

0xb735,	// (0x0006f536) cell_dialer2_keypad_pane_ParamLimits

0xb735,	// (0x0006f536) cell_dialer2_keypad_pane

0xe738,	// (0x00072539) bg_button_pane_pane_cp04_ParamLimits

0xe738,	// (0x00072539) bg_button_pane_pane_cp04

0xb74a,	// (0x0006f54b) cell_dialer2_keypad_pane_g1_ParamLimits

0xb74a,	// (0x0006f54b) cell_dialer2_keypad_pane_g1

0x7bc2,	// (0x0006b9c3) aid_placing_vt_set_content_ParamLimits

0x7bc2,	// (0x0006b9c3) aid_placing_vt_set_content

0x7bec,	// (0x0006b9ed) aid_placing_vt_set_title_ParamLimits

0x7bec,	// (0x0006b9ed) aid_placing_vt_set_title

0x6c91,	// (0x0006aa92) main_image3_pane

0xb7e4,	// (0x0006f5e5) area_side_right_pane_cp01_ParamLimits

0xb7e4,	// (0x0006f5e5) area_side_right_pane_cp01

0x201f,	// (0x00065e20) main_image3_pane_g1_ParamLimits

0x201f,	// (0x00065e20) main_image3_pane_g1

0xb811,	// (0x0006f612) main_image3_pane_g2_ParamLimits

0xb811,	// (0x0006f612) main_image3_pane_g2

0xb82a,	// (0x0006f62b) main_image3_pane_g3_ParamLimits

0xb82a,	// (0x0006f62b) main_image3_pane_g3

0xb843,	// (0x0006f644) main_image3_pane_g4_ParamLimits

0xb843,	// (0x0006f644) main_image3_pane_g4

0x0003,

0xf8de,	// (0x000736df) main_image3_pane_g_ParamLimits

0xf8de,	// (0x000736df) main_image3_pane_g

0xb85c,	// (0x0006f65d) main_image3_pane_t1_ParamLimits

0xb85c,	// (0x0006f65d) main_image3_pane_t1

0xb881,	// (0x0006f682) main_image3_pane_t2_ParamLimits

0xb881,	// (0x0006f682) main_image3_pane_t2

0xb8a0,	// (0x0006f6a1) main_image3_pane_t3_ParamLimits

0xb8a0,	// (0x0006f6a1) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x000736e8) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x000736e8) main_image3_pane_t

0x6f22,	// (0x0006ad23) grid_sctrl_middle_pane_cp01_ParamLimits

0x6f22,	// (0x0006ad23) grid_sctrl_middle_pane_cp01

0xb901,	// (0x0006f702) cell_sctrl_middle_pane_cp01_ParamLimits

0xb901,	// (0x0006f702) cell_sctrl_middle_pane_cp01

0xb912,	// (0x0006f713) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xb912,	// (0x0006f713) cell_sctrl_middle_pane_cp01_g1

0x6c91,	// (0x0006aa92) main_call4_pane

0xb91f,	// (0x0006f720) aid_size_button_call4_ParamLimits

0xb91f,	// (0x0006f720) aid_size_button_call4

0xb94f,	// (0x0006f750) call4_windows_pane_ParamLimits

0xb94f,	// (0x0006f750) call4_windows_pane

0xb969,	// (0x0006f76a) grid_call4_button_pane_ParamLimits

0xb969,	// (0x0006f76a) grid_call4_button_pane

0xe744,	// (0x00072545) call4_windows_conf_pane

0xe75b,	// (0x0007255c) popup_call4_audio_first_window_ParamLimits

0xe75b,	// (0x0007255c) popup_call4_audio_first_window

0xe7a7,	// (0x000725a8) popup_call4_audio_second_window_ParamLimits

0xe7a7,	// (0x000725a8) popup_call4_audio_second_window

0xe7bb,	// (0x000725bc) popup_call4_audio_wait_window_ParamLimits

0xe7bb,	// (0x000725bc) popup_call4_audio_wait_window

0xb98d,	// (0x0006f78e) cell_call4_button_pane_ParamLimits

0xb98d,	// (0x0006f78e) cell_call4_button_pane

0xb9b2,	// (0x0006f7b3) bg_button_pane_cp09_ParamLimits

0xb9b2,	// (0x0006f7b3) bg_button_pane_cp09

0xb9be,	// (0x0006f7bf) cell_call4_button_pane_g1_ParamLimits

0xb9be,	// (0x0006f7bf) cell_call4_button_pane_g1

0xb9cb,	// (0x0006f7cc) cell_call4_button_pane_t1_ParamLimits

0xb9cb,	// (0x0006f7cc) cell_call4_button_pane_t1

0xe803,	// (0x00072604) popup_call4_audio_conf_window_ParamLimits

0xe803,	// (0x00072604) popup_call4_audio_conf_window

0xacb0,	// (0x0006eab1) mup3_progress_pane_t1_ParamLimits

0xacc7,	// (0x0006eac8) mup3_progress_pane_t2_ParamLimits

0x498c,	// (0x0006878d) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x000735c1) mup3_progress_pane_t_ParamLimits

0x49a3,	// (0x000687a4) mup_progress_pane_cp03_ParamLimits

0xb1d5,	// (0x0006efd6) mup3_control_keys_pane_g4_copy1

0xb6a6,	// (0x0006f4a7) mp4_rocker2_pane_ParamLimits

0xb6a6,	// (0x0006f4a7) mp4_rocker2_pane

0xe817,	// (0x00072618) mp4_rocker2_pane_g1

0xe81f,	// (0x00072620) mp4_rocker2_pane_g2

0xb9dd,	// (0x0006f7de) mp4_rocker2_pane_g3

0xb9e5,	// (0x0006f7e6) mp4_rocker2_pane_g4

0xb9ed,	// (0x0006f7ee) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x000736f1) mp4_rocker2_pane_g

0x6c91,	// (0x0006aa92) main_camera4_pane

0x6c91,	// (0x0006aa92) main_video4_pane

0xb426,	// (0x0006f227) main_video_tele_dialer_pane_t1_ParamLimits

0xb426,	// (0x0006f227) main_video_tele_dialer_pane_t1

0xb438,	// (0x0006f239) main_video_tele_dialer_pane_t2_ParamLimits

0xb438,	// (0x0006f239) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x000736ab) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x000736ab) main_video_tele_dialer_pane_t

0xba0d,	// (0x0006f80e) cam4_autofocus_pane_ParamLimits

0xba0d,	// (0x0006f80e) cam4_autofocus_pane

0xba27,	// (0x0006f828) cam4_image_uncrop_pane_ParamLimits

0xba27,	// (0x0006f828) cam4_image_uncrop_pane

0xba3e,	// (0x0006f83f) cam4_indicators_pane_ParamLimits

0xba3e,	// (0x0006f83f) cam4_indicators_pane

0xba5a,	// (0x0006f85b) main_camera4_pane_g1_ParamLimits

0xba5a,	// (0x0006f85b) main_camera4_pane_g1

0xba66,	// (0x0006f867) main_camera4_pane_g2_ParamLimits

0xba66,	// (0x0006f867) main_camera4_pane_g2

0xba66,	// (0x0006f867) main_camera4_pane_g3_ParamLimits

0xba66,	// (0x0006f867) main_camera4_pane_g3

0xba72,	// (0x0006f873) main_camera4_pane_g4_ParamLimits

0xba72,	// (0x0006f873) main_camera4_pane_g4

0xba7e,	// (0x0006f87f) main_camera4_pane_g5_ParamLimits

0xba7e,	// (0x0006f87f) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x000736fc) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x000736fc) main_camera4_pane_g

0xba98,	// (0x0006f899) main_camera4_pane_t1_ParamLimits

0xba98,	// (0x0006f899) main_camera4_pane_t1

0x4911,	// (0x00068712) bg_tb_trans_pane_cp06

0xbae8,	// (0x0006f8e9) cam4_indicators_pane_g1

0xbaf9,	// (0x0006f8fa) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x00073717) cam4_indicators_pane_g

0xbb17,	// (0x0006f918) cam4_indicators_pane_t1

0xbb41,	// (0x0006f942) main_video4_pane_g1_ParamLimits

0xbb41,	// (0x0006f942) main_video4_pane_g1

0xbb4d,	// (0x0006f94e) main_video4_pane_g2_ParamLimits

0xbb4d,	// (0x0006f94e) main_video4_pane_g2

0xbb59,	// (0x0006f95a) main_video4_pane_g3_ParamLimits

0xbb59,	// (0x0006f95a) main_video4_pane_g3

0xbb65,	// (0x0006f966) main_video4_pane_g4_ParamLimits

0xbb65,	// (0x0006f966) main_video4_pane_g4

0x0004,

0xf91d,	// (0x0007371e) main_video4_pane_g_ParamLimits

0xf91d,	// (0x0007371e) main_video4_pane_g

0xbb85,	// (0x0006f986) vid4_indicators_pane_ParamLimits

0xbb85,	// (0x0006f986) vid4_indicators_pane

0xbba3,	// (0x0006f9a4) video4_image_uncrop_cif_pane_ParamLimits

0xbba3,	// (0x0006f9a4) video4_image_uncrop_cif_pane

0xbbb2,	// (0x0006f9b3) video4_image_uncrop_nhd_pane_ParamLimits

0xbbb2,	// (0x0006f9b3) video4_image_uncrop_nhd_pane

0xba27,	// (0x0006f828) video4_image_uncrop_vga_pane_ParamLimits

0xba27,	// (0x0006f828) video4_image_uncrop_vga_pane

0xe908,	// (0x00072709) bg_tb_trans_pane_cp07

0xbbc9,	// (0x0006f9ca) vid4_indicators_pane_g1

0xbbda,	// (0x0006f9db) vid4_indicators_pane_g2

0xbbeb,	// (0x0006f9ec) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x00073729) vid4_indicators_pane_g

0xbc18,	// (0x0006fa19) vid4_indicators_pane_t1

0xbc31,	// (0x0006fa32) cam4_autofocus_pane_g1

0xbc39,	// (0x0006fa3a) cam4_autofocus_pane_g2

0xbc41,	// (0x0006fa42) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x00073734) cam4_autofocus_pane_g

0xbc49,	// (0x0006fa4a) cam4_autofocus_pane_g3_copy1

0xe698,	// (0x00072499) video_down_pane_cp_t1

0xe6a6,	// (0x000724a7) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x000736b0) video_down_pane_cp_t

0x6f22,	// (0x0006ad23) popup_vitu2_window_ParamLimits

0x6f22,	// (0x0006ad23) popup_vitu2_window

0xbc51,	// (0x0006fa52) aid_size_cell2_itu2_ParamLimits

0xbc51,	// (0x0006fa52) aid_size_cell2_itu2

0xbc73,	// (0x0006fa74) aid_size_cell_itu2_ParamLimits

0xbc73,	// (0x0006fa74) aid_size_cell_itu2

0x1a61,	// (0x00065862) bg_popup_window_pane_cp09_ParamLimits

0x1a61,	// (0x00065862) bg_popup_window_pane_cp09

0xbcb7,	// (0x0006fab8) field_vitu2_entry_pane_ParamLimits

0xbcb7,	// (0x0006fab8) field_vitu2_entry_pane

0xbcd7,	// (0x0006fad8) grid_vitu2_function_pane_ParamLimits

0xbcd7,	// (0x0006fad8) grid_vitu2_function_pane

0xbd1b,	// (0x0006fb1c) grid_vitu2_itu_pane_ParamLimits

0xbd1b,	// (0x0006fb1c) grid_vitu2_itu_pane

0xbd93,	// (0x0006fb94) cell_vitu2_itu_pane_ParamLimits

0xbd93,	// (0x0006fb94) cell_vitu2_itu_pane

0xbda8,	// (0x0006fba9) cell_vitu2_function_pane_ParamLimits

0xbda8,	// (0x0006fba9) cell_vitu2_function_pane

0xe827,	// (0x00072628) bg_popup_call_pane_cp08_ParamLimits

0xe827,	// (0x00072628) bg_popup_call_pane_cp08

0xe840,	// (0x00072641) field_vitu2_entry_pane_g1

0xe84c,	// (0x0007264d) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x0007373b) field_vitu2_entry_pane_g

0x5e60,	// (0x00069c61) field_vitu2_entry_pane_t1_ParamLimits

0x5e60,	// (0x00069c61) field_vitu2_entry_pane_t1

0x5e8f,	// (0x00069c90) field_vitu2_entry_pane_t2_ParamLimits

0x5e8f,	// (0x00069c90) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x00073742) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x00073742) field_vitu2_entry_pane_t

0xbde7,	// (0x0006fbe8) bg_button_pane_cp010_ParamLimits

0xbde7,	// (0x0006fbe8) bg_button_pane_cp010

0xbdf5,	// (0x0006fbf6) cell_vitu2_itu_pane_g1

0xbe13,	// (0x0006fc14) cell_vitu2_itu_pane_t1_ParamLimits

0xbe13,	// (0x0006fc14) cell_vitu2_itu_pane_t1

0x5eac,	// (0x00069cad) cell_vitu2_itu_pane_t2_ParamLimits

0x5eac,	// (0x00069cad) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x0007374c) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x0007374c) cell_vitu2_itu_pane_t

0xe908,	// (0x00072709) bg_button_pane_cp011

0xbe65,	// (0x0006fc66) cell_vitu2_function_pane_g1

0x6c91,	// (0x0006aa92) main_myfav_hc_pane

0xb8e2,	// (0x0006f6e3) popup_image3_note_pane_ParamLimits

0xb8e2,	// (0x0006f6e3) popup_image3_note_pane

0xb8f0,	// (0x0006f6f1) popup_image3_tool_bar_pane_ParamLimits

0xb8f0,	// (0x0006f6f1) popup_image3_tool_bar_pane

0x5f1a,	// (0x00069d1b) cell_vitu2_itu_pane_t3_ParamLimits

0x5f1a,	// (0x00069d1b) cell_vitu2_itu_pane_t3

0x6c91,	// (0x0006aa92) bg_popup_trans_pane

0x12e1,	// (0x000650e2) grid_image3_tool_bar_pane

0x12eb,	// (0x000650ec) bg_popup_trans_pane_g1

0x0372,	// (0x00064173) bg_popup_trans_pane_g2

0x12f3,	// (0x000650f4) bg_popup_trans_pane_g3

0x12fb,	// (0x000650fc) bg_popup_trans_pane_g4

0x1303,	// (0x00065104) bg_popup_trans_pane_g5

0x130b,	// (0x0006510c) bg_popup_trans_pane_g6

0x1313,	// (0x00065114) bg_popup_trans_pane_g7

0x131b,	// (0x0006511c) bg_popup_trans_pane_g8

0x0352,	// (0x00064153) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x00073753) bg_popup_trans_pane_g

0x1323,	// (0x00065124) cell_image3_tool_bar_pane_ParamLimits

0x1323,	// (0x00065124) cell_image3_tool_bar_pane

0x46ae,	// (0x000684af) cell_image3_tool_bar_pane_g1

0x6c91,	// (0x0006aa92) bg_popup_trans_pane_cp1

0x1337,	// (0x00065138) popup_image3_note_pane_t1

0x1345,	// (0x00065146) popup_image3_note_pane_t2

0x1353,	// (0x00065154) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x00073766) popup_image3_note_pane_t

0x1361,	// (0x00065162) popup_image3_note_pane_t3_copy1

0xbe79,	// (0x0006fc7a) bg_myfav_hc_instruction_pane_ParamLimits

0xbe79,	// (0x0006fc7a) bg_myfav_hc_instruction_pane

0xbe91,	// (0x0006fc92) cell_myfav_contact_pane_ParamLimits

0xbe91,	// (0x0006fc92) cell_myfav_contact_pane

0xbeab,	// (0x0006fcac) cell_myfav_contact_pane_cp1_ParamLimits

0xbeab,	// (0x0006fcac) cell_myfav_contact_pane_cp1

0xbec3,	// (0x0006fcc4) cell_myfav_contact_pane_cp2_ParamLimits

0xbec3,	// (0x0006fcc4) cell_myfav_contact_pane_cp2

0xbedb,	// (0x0006fcdc) cell_myfav_contact_pane_cp3_ParamLimits

0xbedb,	// (0x0006fcdc) cell_myfav_contact_pane_cp3

0xbef2,	// (0x0006fcf3) cell_myfav_contact_pane_cp4_ParamLimits

0xbef2,	// (0x0006fcf3) cell_myfav_contact_pane_cp4

0xbf08,	// (0x0006fd09) cell_myfav_contact_pane_cp5_ParamLimits

0xbf08,	// (0x0006fd09) cell_myfav_contact_pane_cp5

0xbf1c,	// (0x0006fd1d) cell_myfav_contact_pane_cp6_ParamLimits

0xbf1c,	// (0x0006fd1d) cell_myfav_contact_pane_cp6

0xbf30,	// (0x0006fd31) cell_myfav_contact_pane_cp7_ParamLimits

0xbf30,	// (0x0006fd31) cell_myfav_contact_pane_cp7

0x136f,	// (0x00065170) listscroll_gen_pane_cp05

0xbf48,	// (0x0006fd49) main_myfav_hc_pane_g1_ParamLimits

0xbf48,	// (0x0006fd49) main_myfav_hc_pane_g1

0xbf5e,	// (0x0006fd5f) main_myfav_hc_pane_g2_ParamLimits

0xbf5e,	// (0x0006fd5f) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x0007376d) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x0007376d) main_myfav_hc_pane_g

0xbf8c,	// (0x0006fd8d) main_myfav_hc_pane_t1_ParamLimits

0xbf8c,	// (0x0006fd8d) main_myfav_hc_pane_t1

0x1378,	// (0x00065179) main_myfav_hc_pane_t2_ParamLimits

0x1378,	// (0x00065179) main_myfav_hc_pane_t2

0x138a,	// (0x0006518b) main_myfav_hc_pane_t3_ParamLimits

0x138a,	// (0x0006518b) main_myfav_hc_pane_t3

0xbfa3,	// (0x0006fda4) main_myfav_hc_pane_t4_ParamLimits

0xbfa3,	// (0x0006fda4) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x00073774) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x00073774) main_myfav_hc_pane_t

0x46ae,	// (0x000684af) bg_myfav_hc_instruction_pane_g1

0x139c,	// (0x0006519d) cell_myfav_contact_pane_g1_ParamLimits

0x139c,	// (0x0006519d) cell_myfav_contact_pane_g1

0x139c,	// (0x0006519d) cell_myfav_contact_pane_g2_ParamLimits

0x139c,	// (0x0006519d) cell_myfav_contact_pane_g2

0x13a8,	// (0x000651a9) cell_myfav_contact_pane_g3_ParamLimits

0x13a8,	// (0x000651a9) cell_myfav_contact_pane_g3

0x4976,	// (0x00068777) cell_myfav_contact_pane_g4_ParamLimits

0x4976,	// (0x00068777) cell_myfav_contact_pane_g4

0x13b5,	// (0x000651b6) cell_myfav_contact_pane_g5_ParamLimits

0x13b5,	// (0x000651b6) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x0007377f) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x0007377f) cell_myfav_contact_pane_g

0xbf74,	// (0x0006fd75) main_myfav_hc_pane_g3_ParamLimits

0xbf74,	// (0x0006fd75) main_myfav_hc_pane_g3

0x6e3f,	// (0x0006ac40) popup_adpt_find_window

0xbfcd,	// (0x0006fdce) afind_page_pane_ParamLimits

0xbfcd,	// (0x0006fdce) afind_page_pane

0xbfda,	// (0x0006fddb) aid_size_cell_afind_ParamLimits

0xbfda,	// (0x0006fddb) aid_size_cell_afind

0xbff4,	// (0x0006fdf5) bg_popup_sub_pane_cp09_ParamLimits

0xbff4,	// (0x0006fdf5) bg_popup_sub_pane_cp09

0xc001,	// (0x0006fe02) find_pane_cp01_ParamLimits

0xc001,	// (0x0006fe02) find_pane_cp01

0x13c1,	// (0x000651c2) grid_afind_control_pane_ParamLimits

0x13c1,	// (0x000651c2) grid_afind_control_pane

0xc00e,	// (0x0006fe0f) grid_afind_pane_ParamLimits

0xc00e,	// (0x0006fe0f) grid_afind_pane

0xc02a,	// (0x0006fe2b) cell_afind_pane_ParamLimits

0xc02a,	// (0x0006fe2b) cell_afind_pane

0x46ae,	// (0x000684af) afind_page_pane_g1

0xc072,	// (0x0006fe73) afind_page_pane_g2

0xc07b,	// (0x0006fe7c) afind_page_pane_g3

0x0002,

0xf989,	// (0x0007378a) afind_page_pane_g

0xc084,	// (0x0006fe85) afind_page_pane_t1

0x13d5,	// (0x000651d6) cell_afind_grid_control_pane_ParamLimits

0x13d5,	// (0x000651d6) cell_afind_grid_control_pane

0xe738,	// (0x00072539) bg_button_pane_cp69_ParamLimits

0xe738,	// (0x00072539) bg_button_pane_cp69

0xc0a4,	// (0x0006fea5) cell_afind_pane_g1_ParamLimits

0xc0a4,	// (0x0006fea5) cell_afind_pane_g1

0xc0b1,	// (0x0006feb2) cell_afind_pane_t1_ParamLimits

0xc0b1,	// (0x0006feb2) cell_afind_pane_t1

0x016d,	// (0x00063f6e) bg_button_pane_cp72

0x13e4,	// (0x000651e5) cell_afind_grid_control_pane_g1

0x9752,	// (0x0006d553) aid_image_placing_area_ParamLimits

0x9752,	// (0x0006d553) aid_image_placing_area

0x4c6f,	// (0x00068a70) field_vitu_entry_pane_g1_ParamLimits

0x4c6f,	// (0x00068a70) field_vitu_entry_pane_g1

0x4c7b,	// (0x00068a7c) field_vitu_entry_pane_g2_ParamLimits

0x4c7b,	// (0x00068a7c) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x0007363b) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x0007363b) field_vitu_entry_pane_g

0xb25c,	// (0x0006f05d) cell_vitu_itu_pane_g1_ParamLimits

0xb29e,	// (0x0006f09f) cell_vitu_itu_pane_t3_ParamLimits

0xb29e,	// (0x0006f09f) cell_vitu_itu_pane_t3

0xe6e8,	// (0x000724e9) mp4_progress_pane_t1_ParamLimits

0xe701,	// (0x00072502) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x000736d0) mp4_progress_pane_t_ParamLimits

0xe71a,	// (0x0007251b) mup_progress_pane_cp04_ParamLimits

0xbfb7,	// (0x0006fdb8) main_myfav_hc_pane_t5_ParamLimits

0xbfb7,	// (0x0006fdb8) main_myfav_hc_pane_t5

0x5b2f,	// (0x00069930) aid_zoom_text_primary

0x6e3f,	// (0x0006ac40) popup_adpt_find_window_ParamLimits

0xe908,	// (0x00072709) main_cam_set_pane

0xba4c,	// (0x0006f84d) cam4_zoom_pane_ParamLimits

0xba4c,	// (0x0006f84d) cam4_zoom_pane

0xc0c3,	// (0x0006fec4) main_cam_set_pane_g1_ParamLimits

0xc0c3,	// (0x0006fec4) main_cam_set_pane_g1

0xc0d1,	// (0x0006fed2) main_cam_set_pane_g2_ParamLimits

0xc0d1,	// (0x0006fed2) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x00073791) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x00073791) main_cam_set_pane_g

0xc0dd,	// (0x0006fede) main_cam_set_pane_t1_ParamLimits

0xc0dd,	// (0x0006fede) main_cam_set_pane_t1

0xc0f9,	// (0x0006fefa) main_cset_listscroll_pane_ParamLimits

0xc0f9,	// (0x0006fefa) main_cset_listscroll_pane

0xc124,	// (0x0006ff25) main_cset_slider_pane_ParamLimits

0xc124,	// (0x0006ff25) main_cset_slider_pane

0x13f5,	// (0x000651f6) main_cset_list_pane_ParamLimits

0x13f5,	// (0x000651f6) main_cset_list_pane

0x1405,	// (0x00065206) scroll_pane_cp028

0xc143,	// (0x0006ff44) aid_area_touch_slider

0xc15f,	// (0x0006ff60) cset_slider_pane

0xc189,	// (0x0006ff8a) main_cset_slider_pane_g1

0xc19e,	// (0x0006ff9f) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x00073796) main_cset_slider_pane_g

0x143e,	// (0x0006523f) main_cset_slider_pane_t1

0xc260,	// (0x00070061) main_cset_slider_pane_t2

0xc27a,	// (0x0007007b) main_cset_slider_pane_t3

0xc294,	// (0x00070095) main_cset_slider_pane_t4

0xc2ae,	// (0x000700af) main_cset_slider_pane_t5

0xc2cc,	// (0x000700cd) main_cset_slider_pane_t6

0xc2e3,	// (0x000700e4) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x000737bb) main_cset_slider_pane_t

0xc3ef,	// (0x000701f0) cset_list_set_pane_ParamLimits

0xc3ef,	// (0x000701f0) cset_list_set_pane

0xc405,	// (0x00070206) aid_position_infowindow_above

0xc40d,	// (0x0007020e) aid_position_infowindow_below

0xc415,	// (0x00070216) cset_list_set_pane_g1_ParamLimits

0xc415,	// (0x00070216) cset_list_set_pane_g1

0x5f67,	// (0x00069d68) cset_list_set_pane_g3_ParamLimits

0x5f67,	// (0x00069d68) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x000737da) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x000737da) cset_list_set_pane_g

0x5f76,	// (0x00069d77) cset_list_set_pane_t1_ParamLimits

0x5f76,	// (0x00069d77) cset_list_set_pane_t1

0xe908,	// (0x00072709) list_highlight_pane_cp021_ParamLimits

0xe908,	// (0x00072709) list_highlight_pane_cp021

0x0c52,	// (0x00064a53) cset_slider_pane_g1

0x0c64,	// (0x00064a65) cset_slider_pane_g2

0x0c5b,	// (0x00064a5c) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x000737df) cset_slider_pane_g

0xc421,	// (0x00070222) aid_area_touch_cam4_zoom

0xc429,	// (0x0007022a) cam4_zoom_cont_pane

0xc431,	// (0x00070232) cam4_zoom_pane_g1

0xc439,	// (0x0007023a) cam4_zoom_pane_g2

0xc441,	// (0x00070242) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x000737e6) cam4_zoom_pane_g

0x1db0,	// (0x00065bb1) cam4_zoom_cont_pane_g1

0x1db9,	// (0x00065bba) cam4_zoom_cont_pane_g2

0x1dc2,	// (0x00065bc3) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x000737ed) cam4_zoom_cont_pane_g

0xb939,	// (0x0006f73a) call4_image_pane_ParamLimits

0xb939,	// (0x0006f73a) call4_image_pane

0xe744,	// (0x00072545) call4_windows_conf_pane_ParamLimits

0xe785,	// (0x00072586) popup_call4_audio_in_window_ParamLimits

0xe785,	// (0x00072586) popup_call4_audio_in_window

0x6c91,	// (0x0006aa92) bg_popup_call2_act_pane_cp02

0xe7fb,	// (0x000725fc) call4_list_conf_pane

0x46ae,	// (0x000684af) call4_image_pane_g1

0x46ae,	// (0x000684af) call4_image_pane_g2

0x0001,

0xf700,	// (0x00073501) call4_image_pane_g

0x14f9,	// (0x000652fa) list_single_graphic_popup_conf4_pane_ParamLimits

0x14f9,	// (0x000652fa) list_single_graphic_popup_conf4_pane

0x6c91,	// (0x0006aa92) list_highlight_pane_cp022

0x150c,	// (0x0006530d) list_single_graphic_popup_conf4_pane_g1

0x0911,	// (0x00064712) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x000737f4) list_single_graphic_popup_conf4_pane_g

0x1514,	// (0x00065315) list_single_graphic_popup_conf4_pane_t1

0x7d50,	// (0x0006bb51) popup_vtel_slider_window_ParamLimits

0x7d50,	// (0x0006bb51) popup_vtel_slider_window

0xe726,	// (0x00072527) dialer2_ne_pane_t2_ParamLimits

0xe726,	// (0x00072527) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x000736d5) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x000736d5) dialer2_ne_pane_t

0xe908,	// (0x00072709) bg_popup_sub_pane_cp010_ParamLimits

0xe908,	// (0x00072709) bg_popup_sub_pane_cp010

0xc449,	// (0x0007024a) popup_vtel_slider_window_g1_ParamLimits

0xc449,	// (0x0007024a) popup_vtel_slider_window_g1

0xc455,	// (0x00070256) popup_vtel_slider_window_g2_ParamLimits

0xc455,	// (0x00070256) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x000737f9) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x000737f9) popup_vtel_slider_window_g

0xc49d,	// (0x0007029e) vtel_slider_pane_ParamLimits

0xc49d,	// (0x0007029e) vtel_slider_pane

0xc4ac,	// (0x000702ad) vtel_slider_pane_g1_ParamLimits

0xc4ac,	// (0x000702ad) vtel_slider_pane_g1

0xc4b9,	// (0x000702ba) vtel_slider_pane_g2_ParamLimits

0xc4b9,	// (0x000702ba) vtel_slider_pane_g2

0xc4c6,	// (0x000702c7) vtel_slider_pane_g3_ParamLimits

0xc4c6,	// (0x000702c7) vtel_slider_pane_g3

0xc4ac,	// (0x000702ad) vtel_slider_pane_g4_ParamLimits

0xc4ac,	// (0x000702ad) vtel_slider_pane_g4

0xc4d3,	// (0x000702d4) vtel_slider_pane_g5_ParamLimits

0xc4d3,	// (0x000702d4) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x00073802) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x00073802) vtel_slider_pane_g

0x6c91,	// (0x0006aa92) main_gallery2_pane

0xbc99,	// (0x0006fa9a) aid_size_row_itut2_dropdow_list_ParamLimits

0xbc99,	// (0x0006fa9a) aid_size_row_itut2_dropdow_list

0xbcf9,	// (0x0006fafa) grid_vitu2_function_top_pane_ParamLimits

0xbcf9,	// (0x0006fafa) grid_vitu2_function_top_pane

0xbd4f,	// (0x0006fb50) popup_vitu2_dropdown_list_window_ParamLimits

0xbd4f,	// (0x0006fb50) popup_vitu2_dropdown_list_window

0xbd6f,	// (0x0006fb70) popup_vitu2_match_list_window

0xc4e0,	// (0x000702e1) cell_vitu2_function_top_pane_ParamLimits

0xc4e0,	// (0x000702e1) cell_vitu2_function_top_pane

0xc500,	// (0x00070301) cell_vitu2_function_top_pane_cp01_ParamLimits

0xc500,	// (0x00070301) cell_vitu2_function_top_pane_cp01

0xc51e,	// (0x0007031f) cell_vitu2_function_top_wide_pane_ParamLimits

0xc51e,	// (0x0007031f) cell_vitu2_function_top_wide_pane

0xe908,	// (0x00072709) bg_button_pane_cp012

0xc53c,	// (0x0007033d) cell_vitu2_function_top_pane_g1

0xc54b,	// (0x0007034c) bg_button_pane_cp013_ParamLimits

0xc54b,	// (0x0007034c) bg_button_pane_cp013

0xc567,	// (0x00070368) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc567,	// (0x00070368) cell_vitu2_function_top_wide_pane_g1

0x6f22,	// (0x0006ad23) bg_popup_sub_pane_cp20

0xc57f,	// (0x00070380) list_vitu2_match_list_pane

0x12eb,	// (0x000650ec) bg_popup_sub_pane_cp20_g1

0x12f3,	// (0x000650f4) bg_popup_sub_pane_cp20_g2

0x0372,	// (0x00064173) bg_popup_sub_pane_cp20_g3

0x12fb,	// (0x000650fc) bg_popup_sub_pane_cp20_g4

0x0352,	// (0x00064153) bg_popup_sub_pane_cp20_g5

0x1538,	// (0x00065339) bg_popup_sub_pane_cp20_g6

0x130b,	// (0x0006510c) bg_popup_sub_pane_cp20_g7

0x1313,	// (0x00065114) bg_popup_sub_pane_cp20_g8

0x131b,	// (0x0006511c) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x0007380d) bg_popup_sub_pane_cp20_g

0xc597,	// (0x00070398) list_vitu2_match_list_item_pane_ParamLimits

0xc597,	// (0x00070398) list_vitu2_match_list_item_pane

0xc5a9,	// (0x000703aa) list_vitu2_match_list_item_pane_t1

0x6c91,	// (0x0006aa92) bg_popup_sub_pane_cp21

0x07c6,	// (0x000645c7) grid_vitu2_dropdown_list_pane

0xc5b7,	// (0x000703b8) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xc5b7,	// (0x000703b8) cell_vitu2_dropdown_list_char_pane

0xc5d8,	// (0x000703d9) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xc5d8,	// (0x000703d9) cell_vitu2_dropdown_list_ctrl_pane

0x156a,	// (0x0006536b) cell_vitu2_dropdown_list_char_pane_g1

0x1561,	// (0x00065362) cell_vitu2_dropdown_list_char_pane_g2

0x1558,	// (0x00065359) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x0007382a) cell_vitu2_dropdown_list_char_pane_g

0xc604,	// (0x00070405) cell_vitu2_dropdown_list_char_pane_t1

0xc612,	// (0x00070413) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc612,	// (0x00070413) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc622,	// (0x00070423) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc622,	// (0x00070423) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc633,	// (0x00070434) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc633,	// (0x00070434) cell_vitu2_dropdown_list_ctrl_pane_g3

0xc643,	// (0x00070444) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xc643,	// (0x00070444) cell_vitu2_dropdown_list_ctrl_pane_g4

0x4911,	// (0x00068712) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x4911,	// (0x00068712) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x00073831) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x00073831) cell_vitu2_dropdown_list_ctrl_pane_g

0xc65f,	// (0x00070460) aid_size_cell_gallery2_ParamLimits

0xc65f,	// (0x00070460) aid_size_cell_gallery2

0xc66d,	// (0x0007046e) grid_gallery2_pane_ParamLimits

0xc66d,	// (0x0007046e) grid_gallery2_pane

0xc67c,	// (0x0007047d) scroll_pane_cp029_ParamLimits

0xc67c,	// (0x0007047d) scroll_pane_cp029

0xc688,	// (0x00070489) cell_gallery2_pane_ParamLimits

0xc688,	// (0x00070489) cell_gallery2_pane

0x1573,	// (0x00065374) cell_gallery2_pane_g2

0x2a91,	// (0x00066892) cell_gallery2_pane_g3

0x157d,	// (0x0006537e) cell_gallery2_pane_g4

0x1585,	// (0x00065386) cell_gallery2_pane_g5

0x0afc,	// (0x000648fd) grid_highlight_pane_cp10

0xbd6f,	// (0x0006fb70) popup_vitu2_match_list_window_ParamLimits

0xbd83,	// (0x0006fb84) popup_vitu2_query_window_ParamLimits

0xbd83,	// (0x0006fb84) popup_vitu2_query_window

0x6c91,	// (0x0006aa92) bg_vitu2_candi_button_pane

0x156a,	// (0x0006536b) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x1561,	// (0x00065362) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x1558,	// (0x00065359) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5fe0,	// (0x00069de1) bg_button_pane_cp015

0xc6b6,	// (0x000704b7) bg_button_pane_cp016

0xc6c9,	// (0x000704ca) bg_button_pane_cp017

0x4267,	// (0x00068068) bg_popup_sub_pane_cp22

0x158d,	// (0x0006538e) popup_vitu2_query_window_g1

0x6013,	// (0x00069e14) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x0007383c) popup_vitu2_query_window_g

0x6030,	// (0x00069e31) popup_vitu2_query_window_t1_ParamLimits

0x6030,	// (0x00069e31) popup_vitu2_query_window_t1

0x6063,	// (0x00069e64) popup_vitu2_query_window_t2_ParamLimits

0x6063,	// (0x00069e64) popup_vitu2_query_window_t2

0x6075,	// (0x00069e76) popup_vitu2_query_window_t3_ParamLimits

0x6075,	// (0x00069e76) popup_vitu2_query_window_t3

0xc6ed,	// (0x000704ee) popup_vitu2_query_window_t4_ParamLimits

0xc6ed,	// (0x000704ee) popup_vitu2_query_window_t4

0xc70e,	// (0x0007050f) popup_vitu2_query_window_t5_ParamLimits

0xc70e,	// (0x0007050f) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x00073843) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x00073843) popup_vitu2_query_window_t

0x13ed,	// (0x000651ee) main_cset_text_pane

0xc143,	// (0x0006ff44) aid_area_touch_slider_ParamLimits

0xc15f,	// (0x0006ff60) cset_slider_pane_ParamLimits

0xc189,	// (0x0006ff8a) main_cset_slider_pane_g1_ParamLimits

0xc19e,	// (0x0006ff9f) main_cset_slider_pane_g2_ParamLimits

0x140e,	// (0x0006520f) main_cset_slider_pane_g3_ParamLimits

0x140e,	// (0x0006520f) main_cset_slider_pane_g3

0xc1b3,	// (0x0006ffb4) main_cset_slider_pane_g4_ParamLimits

0xc1b3,	// (0x0006ffb4) main_cset_slider_pane_g4

0xc1c2,	// (0x0006ffc3) main_cset_slider_pane_g5_ParamLimits

0xc1c2,	// (0x0006ffc3) main_cset_slider_pane_g5

0xc1d0,	// (0x0006ffd1) main_cset_slider_pane_g6_ParamLimits

0xc1d0,	// (0x0006ffd1) main_cset_slider_pane_g6

0xf995,	// (0x00073796) main_cset_slider_pane_g_ParamLimits

0x143e,	// (0x0006523f) main_cset_slider_pane_t1_ParamLimits

0xc260,	// (0x00070061) main_cset_slider_pane_t2_ParamLimits

0xc27a,	// (0x0007007b) main_cset_slider_pane_t3_ParamLimits

0xc294,	// (0x00070095) main_cset_slider_pane_t4_ParamLimits

0xc2ae,	// (0x000700af) main_cset_slider_pane_t5_ParamLimits

0xc2cc,	// (0x000700cd) main_cset_slider_pane_t6_ParamLimits

0xc2e3,	// (0x000700e4) main_cset_slider_pane_t7_ParamLimits

0xc311,	// (0x00070112) main_cset_slider_pane_t8_ParamLimits

0xc311,	// (0x00070112) main_cset_slider_pane_t8

0xc339,	// (0x0007013a) main_cset_slider_pane_t9_ParamLimits

0xc339,	// (0x0007013a) main_cset_slider_pane_t9

0xc361,	// (0x00070162) main_cset_slider_pane_t10_ParamLimits

0xc361,	// (0x00070162) main_cset_slider_pane_t10

0xc389,	// (0x0007018a) main_cset_slider_pane_t11_ParamLimits

0xc389,	// (0x0007018a) main_cset_slider_pane_t11

0xc3b3,	// (0x000701b4) main_cset_slider_pane_t12_ParamLimits

0xc3b3,	// (0x000701b4) main_cset_slider_pane_t12

0xc3d0,	// (0x000701d1) main_cset_slider_pane_t13_ParamLimits

0xc3d0,	// (0x000701d1) main_cset_slider_pane_t13

0xf9ba,	// (0x000737bb) main_cset_slider_pane_t_ParamLimits

0x6c91,	// (0x0006aa92) bg_popup_sub_pane_cp011

0x1599,	// (0x0006539a) main_cset_text_pane_g1

0x15a1,	// (0x000653a2) main_cset_text_pane_t1

0x15af,	// (0x000653b0) main_cset_text_pane_t2

0x15bd,	// (0x000653be) main_cset_text_pane_t3

0x15cb,	// (0x000653cc) main_cset_text_pane_t4

0x15d9,	// (0x000653da) main_cset_text_pane_t5

0x15e7,	// (0x000653e8) main_cset_text_pane_t6

0x15f5,	// (0x000653f6) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x00073852) main_cset_text_pane_t

0x6c91,	// (0x0006aa92) main_cam4_burst_pane

0x6c91,	// (0x0006aa92) main_cam5_pane

0xc092,	// (0x0006fe93) bg_button_pane_cp019

0xc09b,	// (0x0006fe9c) bg_button_pane_cp020

0x141a,	// (0x0006521b) main_cset_slider_pane_g7_ParamLimits

0x141a,	// (0x0006521b) main_cset_slider_pane_g7

0x1426,	// (0x00065227) main_cset_slider_pane_g8_ParamLimits

0x1426,	// (0x00065227) main_cset_slider_pane_g8

0xc1e4,	// (0x0006ffe5) main_cset_slider_pane_g9_ParamLimits

0xc1e4,	// (0x0006ffe5) main_cset_slider_pane_g9

0xc1f0,	// (0x0006fff1) main_cset_slider_pane_g10_ParamLimits

0xc1f0,	// (0x0006fff1) main_cset_slider_pane_g10

0xc1fc,	// (0x0006fffd) main_cset_slider_pane_g11_ParamLimits

0xc1fc,	// (0x0006fffd) main_cset_slider_pane_g11

0xc208,	// (0x00070009) main_cset_slider_pane_g12_ParamLimits

0xc208,	// (0x00070009) main_cset_slider_pane_g12

0xc214,	// (0x00070015) main_cset_slider_pane_g13_ParamLimits

0xc214,	// (0x00070015) main_cset_slider_pane_g13

0xc220,	// (0x00070021) main_cset_slider_pane_g14_ParamLimits

0xc220,	// (0x00070021) main_cset_slider_pane_g14

0xc22c,	// (0x0007002d) main_cset_slider_pane_g15_ParamLimits

0xc22c,	// (0x0007002d) main_cset_slider_pane_g15

0x146c,	// (0x0006526d) main_cset_slider_pane_t14_ParamLimits

0x146c,	// (0x0006526d) main_cset_slider_pane_t14

0x14a5,	// (0x000652a6) main_cset_slider_pane_t15_ParamLimits

0x14a5,	// (0x000652a6) main_cset_slider_pane_t15

0xc72f,	// (0x00070530) aid_cam4_burst_size_cell_ParamLimits

0xc72f,	// (0x00070530) aid_cam4_burst_size_cell

0xc74b,	// (0x0007054c) grid_cam4_burst_pane_ParamLimits

0xc74b,	// (0x0007054c) grid_cam4_burst_pane

0xc77b,	// (0x0007057c) linegrid_cam4_burst_pane_ParamLimits

0xc77b,	// (0x0007057c) linegrid_cam4_burst_pane

0xc79b,	// (0x0007059c) scroll_pane_cp30_ParamLimits

0xc79b,	// (0x0007059c) scroll_pane_cp30

0xc7a7,	// (0x000705a8) cell_cam4_burst_pane_ParamLimits

0xc7a7,	// (0x000705a8) cell_cam4_burst_pane

0x160f,	// (0x00065410) linegrid_cam4_burst_pane_g1_ParamLimits

0x160f,	// (0x00065410) linegrid_cam4_burst_pane_g1

0xc7e3,	// (0x000705e4) linegrid_cam4_burst_pane_g2_ParamLimits

0xc7e3,	// (0x000705e4) linegrid_cam4_burst_pane_g2

0x161c,	// (0x0006541d) linegrid_cam4_burst_pane_g3_ParamLimits

0x161c,	// (0x0006541d) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x00073861) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x00073861) linegrid_cam4_burst_pane_g

0xc7f4,	// (0x000705f5) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xc7f4,	// (0x000705f5) linegrid_cam4_burst_pane_g3_copy1

0x1629,	// (0x0006542a) linegrid_cam4_burst_pane_g4_ParamLimits

0x1629,	// (0x0006542a) linegrid_cam4_burst_pane_g4

0xc80e,	// (0x0007060f) linegrid_cam4_burst_pane_g5_ParamLimits

0xc80e,	// (0x0007060f) linegrid_cam4_burst_pane_g5

0xc81f,	// (0x00070620) linegrid_cam4_burst_pane_g6_ParamLimits

0xc81f,	// (0x00070620) linegrid_cam4_burst_pane_g6

0x1636,	// (0x00065437) linegrid_cam4_burst_pane_g7_ParamLimits

0x1636,	// (0x00065437) linegrid_cam4_burst_pane_g7

0xc830,	// (0x00070631) cell_cam4_burst_pane_g1

0x164f,	// (0x00065450) main_cam5_pane_t1_ParamLimits

0x164f,	// (0x00065450) main_cam5_pane_t1

0x1661,	// (0x00065462) main_cam5_pane_t2_ParamLimits

0x1661,	// (0x00065462) main_cam5_pane_t2

0x1673,	// (0x00065474) main_cam5_pane_t3_ParamLimits

0x1673,	// (0x00065474) main_cam5_pane_t3

0x1685,	// (0x00065486) main_cam5_pane_t4_ParamLimits

0x1685,	// (0x00065486) main_cam5_pane_t4

0x169d,	// (0x0006549e) main_cam5_pane_t5_ParamLimits

0x169d,	// (0x0006549e) main_cam5_pane_t5

0x16b1,	// (0x000654b2) main_cam5_pane_t6_ParamLimits

0x16b1,	// (0x000654b2) main_cam5_pane_t6

0x16c5,	// (0x000654c6) main_cam5_pane_t7_ParamLimits

0x16c5,	// (0x000654c6) main_cam5_pane_t7

0x16d7,	// (0x000654d8) main_cam5_pane_t8_ParamLimits

0x16d7,	// (0x000654d8) main_cam5_pane_t8

0x16f3,	// (0x000654f4) main_cam5_pane_t9_ParamLimits

0x16f3,	// (0x000654f4) main_cam5_pane_t9

0x1705,	// (0x00065506) main_cam5_pane_t10_ParamLimits

0x1705,	// (0x00065506) main_cam5_pane_t10

0x1717,	// (0x00065518) main_cam5_pane_t11_ParamLimits

0x1717,	// (0x00065518) main_cam5_pane_t11

0x1729,	// (0x0006552a) main_cam5_pane_t12_ParamLimits

0x1729,	// (0x0006552a) main_cam5_pane_t12

0x173e,	// (0x0006553f) main_cam5_pane_t13_ParamLimits

0x173e,	// (0x0006553f) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x0007386d) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x0007386d) main_cam5_pane_t

0x6eeb,	// (0x0006acec) popup_scut_keymap_window_ParamLimits

0x6eeb,	// (0x0006acec) popup_scut_keymap_window

0xc843,	// (0x00070644) aid_size_cell_brow_shortcut

0x0afc,	// (0x000648fd) bg_popup_window_pane_cp010

0xc84f,	// (0x00070650) grid_scut_pane

0xc85b,	// (0x0007065c) cell_scut_pane_ParamLimits

0xc85b,	// (0x0007065c) cell_scut_pane

0xc872,	// (0x00070673) cell_scut_pane_g1

0x175b,	// (0x0006555c) cell_scut_pane_t1

0x176a,	// (0x0006556b) cell_scut_pane_t2

0xc87b,	// (0x0007067c) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x00073888) cell_scut_pane_t

0xa8fa,	// (0x0006e6fb) main_mup3_pane_g8_ParamLimits

0xa8fa,	// (0x0006e6fb) main_mup3_pane_g8

0xbca7,	// (0x0006faa8) area_vitu2_query_pane_ParamLimits

0xbca7,	// (0x0006faa8) area_vitu2_query_pane

0x5ff2,	// (0x00069df3) input_focus_pane_cp08

0x1779,	// (0x0006557a) area_vitu2_query_pane_g1

0x60f3,	// (0x00069ef4) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x0007388f) area_vitu2_query_pane_g

0xc889,	// (0x0007068a) area_vitu2_query_pane_t1_ParamLimits

0xc889,	// (0x0007068a) area_vitu2_query_pane_t1

0xc89d,	// (0x0007069e) area_vitu2_query_pane_t2_ParamLimits

0xc89d,	// (0x0007069e) area_vitu2_query_pane_t2

0x6104,	// (0x00069f05) area_vitu2_query_pane_t3_ParamLimits

0x6104,	// (0x00069f05) area_vitu2_query_pane_t3

0x612c,	// (0x00069f2d) area_vitu2_query_pane_t4_ParamLimits

0x612c,	// (0x00069f2d) area_vitu2_query_pane_t4

0x6154,	// (0x00069f55) area_vitu2_query_pane_t5_ParamLimits

0x6154,	// (0x00069f55) area_vitu2_query_pane_t5

0x617c,	// (0x00069f7d) area_vitu2_query_pane_t6_ParamLimits

0x617c,	// (0x00069f7d) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x00073894) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x00073894) area_vitu2_query_pane_t

0xc8b1,	// (0x000706b2) bg_button_pane_cp018

0xc8bf,	// (0x000706c0) bg_button_pane_cp021

0x61c8,	// (0x00069fc9) bg_button_pane_cp022

0x61d9,	// (0x00069fda) input_focus_pane_cp09

0x8e58,	// (0x0006cc59) aid_size_touch_mv_arrow_left

0x8e81,	// (0x0006cc82) aid_size_touch_mv_arrow_right

0xc244,	// (0x00070045) main_cset_slider_pane_g16_ParamLimits

0xc244,	// (0x00070045) main_cset_slider_pane_g16

0xc252,	// (0x00070053) main_cset_slider_pane_g17_ParamLimits

0xc252,	// (0x00070053) main_cset_slider_pane_g17

0xc830,	// (0x00070631) cell_cam4_burst_pane_g1_ParamLimits

0x6c91,	// (0x0006aa92) compa_mode_pane

0xc461,	// (0x00070262) popup_vtel_slider_window_g3_ParamLimits

0xc461,	// (0x00070262) popup_vtel_slider_window_g3

0xc475,	// (0x00070276) popup_vtel_slider_window_g4_ParamLimits

0xc475,	// (0x00070276) popup_vtel_slider_window_g4

0xc489,	// (0x0007028a) popup_vtel_slider_window_t1_ParamLimits

0xc489,	// (0x0007028a) popup_vtel_slider_window_t1

0x6c91,	// (0x0006aa92) main_cl_pane

0x428f,	// (0x00068090) popup_imed_adjust2_window_ParamLimits

0x4267,	// (0x00068068) bg_tb_trans_pane_cp05_ParamLimits

0x4ba4,	// (0x000689a5) popup_imed_adjust2_window_g1_ParamLimits

0x4bb3,	// (0x000689b4) popup_imed_adjust2_window_g2_ParamLimits

0x4bb3,	// (0x000689b4) popup_imed_adjust2_window_g2

0x4bbf,	// (0x000689c0) popup_imed_adjust2_window_g3_ParamLimits

0x4bbf,	// (0x000689c0) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x000735ff) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x000735ff) popup_imed_adjust2_window_g

0x4bcb,	// (0x000689cc) popup_imed_adjust2_window_t1_ParamLimits

0x4be3,	// (0x000689e4) slider_imed_adjust_pane_ParamLimits

0x4bf7,	// (0x000689f8) slider_imed_adjust_pane_g1_ParamLimits

0x4c07,	// (0x00068a08) slider_imed_adjust_pane_g2_ParamLimits

0x4c17,	// (0x00068a18) slider_imed_adjust_pane_g3_ParamLimits

0x4c28,	// (0x00068a29) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x00073606) slider_imed_adjust_pane_g_ParamLimits

0xb9f5,	// (0x0006f7f6) aid_touch_area_cam4_ParamLimits

0xb9f5,	// (0x0006f7f6) aid_touch_area_cam4

0xba05,	// (0x0006f806) battery_pane_cp01

0xba8c,	// (0x0006f88d) main_camera4_pane_g6_ParamLimits

0xba8c,	// (0x0006f88d) main_camera4_pane_g6

0xbaaa,	// (0x0006f8ab) main_camera4_pane_t2_ParamLimits

0xbaaa,	// (0x0006f8ab) main_camera4_pane_t2

0x0001,

0xf908,	// (0x00073709) main_camera4_pane_t_ParamLimits

0xf908,	// (0x00073709) main_camera4_pane_t

0xbb31,	// (0x0006f932) aid_touch_area_vid4_ParamLimits

0xbb31,	// (0x0006f932) aid_touch_area_vid4

0xbb71,	// (0x0006f972) main_video4_pane_g5_ParamLimits

0xbb71,	// (0x0006f972) main_video4_pane_g5

0xbb93,	// (0x0006f994) vid4_progress_pane_ParamLimits

0xbb93,	// (0x0006f994) vid4_progress_pane

0x1432,	// (0x00065233) main_cset_slider_pane_g18_ParamLimits

0x1432,	// (0x00065233) main_cset_slider_pane_g18

0x1643,	// (0x00065444) cell_cam4_burst_pane_g2_ParamLimits

0x1643,	// (0x00065444) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x00073868) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x00073868) cell_cam4_burst_pane_g

0xc8cb,	// (0x000706cc) bg_cl_pane_ParamLimits

0xc8cb,	// (0x000706cc) bg_cl_pane

0xc8d7,	// (0x000706d8) cl_header_pane_ParamLimits

0xc8d7,	// (0x000706d8) cl_header_pane

0xc8e3,	// (0x000706e4) cl_listscroll_pane_ParamLimits

0xc8e3,	// (0x000706e4) cl_listscroll_pane

0x1821,	// (0x00065622) bg_cl_pane_g1

0x1829,	// (0x0006562a) bg_cl_pane_g2

0x1831,	// (0x00065632) bg_cl_pane_g3

0x1839,	// (0x0006563a) bg_cl_pane_g4

0x1841,	// (0x00065642) bg_cl_pane_g5

0x1849,	// (0x0006564a) bg_cl_pane_g6

0x1851,	// (0x00065652) bg_cl_pane_g7

0x1859,	// (0x0006565a) bg_cl_pane_g8

0x1861,	// (0x00065662) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x000738a3) bg_cl_pane_g

0xc8ef,	// (0x000706f0) aid_height_cl_leading_ParamLimits

0xc8ef,	// (0x000706f0) aid_height_cl_leading

0xc8fb,	// (0x000706fc) aid_height_cl_text_ParamLimits

0xc8fb,	// (0x000706fc) aid_height_cl_text

0x6f22,	// (0x0006ad23) bg_cl_header_pane_ParamLimits

0x6f22,	// (0x0006ad23) bg_cl_header_pane

0xc913,	// (0x00070714) cl_header_pane_g1_ParamLimits

0xc913,	// (0x00070714) cl_header_pane_g1

0xc920,	// (0x00070721) cl_header_pane_t1_ParamLimits

0xc920,	// (0x00070721) cl_header_pane_t1

0x1869,	// (0x0006566a) cl_list_pane

0x1405,	// (0x00065206) hc_scroll_pane_cp01

0x0352,	// (0x00064153) bg_cl_header_pane_g1

0x12eb,	// (0x000650ec) bg_cl_header_pane_g2

0x0372,	// (0x00064173) bg_cl_header_pane_g3

0x12fb,	// (0x000650fc) bg_cl_header_pane_g4

0x12f3,	// (0x000650f4) bg_cl_header_pane_g5

0x1538,	// (0x00065339) bg_cl_header_pane_g6

0x1313,	// (0x00065114) bg_cl_header_pane_g7

0x131b,	// (0x0006511c) bg_cl_header_pane_g8

0x130b,	// (0x0006510c) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x000738b6) bg_cl_header_pane_g

0xc932,	// (0x00070733) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xc932,	// (0x00070733) hc_cl_list_double_graphic_heading_pane

0xc943,	// (0x00070744) hc_cl_list_single_graphic_pane_ParamLimits

0xc943,	// (0x00070744) hc_cl_list_single_graphic_pane

0xc95c,	// (0x0007075d) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xc95c,	// (0x0007075d) hc_cl_list_single_graphic_pane_g1

0xc968,	// (0x00070769) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xc968,	// (0x00070769) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x000738c9) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x000738c9) hc_cl_list_single_graphic_pane_g

0xc97c,	// (0x0007077d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xc97c,	// (0x0007077d) hc_cl_list_single_graphic_pane_t1

0xc95c,	// (0x0007075d) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xc95c,	// (0x0007075d) hc_cl_list_double_graphic_heading_pane_g1

0xc991,	// (0x00070792) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xc991,	// (0x00070792) hc_cl_list_double_graphic_heading_pane_g2

0xc9a5,	// (0x000707a6) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xc9a5,	// (0x000707a6) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x000738ce) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x000738ce) hc_cl_list_double_graphic_heading_pane_g

0xc9b9,	// (0x000707ba) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xc9b9,	// (0x000707ba) hc_cl_list_double_graphic_heading_pane_t1

0xc9ce,	// (0x000707cf) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xc9ce,	// (0x000707cf) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x000738d5) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x000738d5) hc_cl_list_double_graphic_heading_pane_t

0xc9eb,	// (0x000707ec) vid4_progress_pane_g1

0xc9fb,	// (0x000707fc) vid4_progress_pane_g2

0x94a4,	// (0x0006d2a5) vid4_progress_pane_g3

0xca0b,	// (0x0007080c) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x000738da) vid4_progress_pane_g

0xca29,	// (0x0007082a) vid4_progress_pane_t1

0xca3e,	// (0x0007083f) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x000738e5) vid4_progress_pane_t

0xca69,	// (0x0007086a) wait_bar_pane_cp07

0x44a1,	// (0x000682a2) blid_firmament_pane_ParamLimits

0x44e4,	// (0x000682e5) popup_blid_sat_info2_window_g1

0x4508,	// (0x00068309) popup_blid_sat_info2_window_t3

0x4516,	// (0x00068317) popup_blid_sat_info2_window_t4

0x4524,	// (0x00068325) popup_blid_sat_info2_window_t5

0x4532,	// (0x00068333) popup_blid_sat_info2_window_t6

0x4542,	// (0x00068343) popup_blid_sat_info2_window_t7

0x4550,	// (0x00068351) popup_blid_sat_info2_window_t8

0x455e,	// (0x0006835f) popup_blid_sat_info2_window_t9

0x456c,	// (0x0006836d) popup_blid_sat_info2_window_t10

0x462e,	// (0x0006842f) aid_firma_cardinal_ParamLimits

0x4642,	// (0x00068443) blid_firmament_pane_t1_ParamLimits

0x4659,	// (0x0006845a) blid_firmament_pane_t2_ParamLimits

0x4670,	// (0x00068471) blid_firmament_pane_t3_ParamLimits

0x4687,	// (0x00068488) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x000734f8) blid_firmament_pane_t_ParamLimits

0x469e,	// (0x0006849f) blid_sat_info_pane_ParamLimits

0xe908,	// (0x00072709) main_cam_set_pane_ParamLimits

0xb07f,	// (0x0006ee80) aid_size_cell_colour_35_ParamLimits

0xb099,	// (0x0006ee9a) aid_size_cell_colour_112_ParamLimits

0xb0b0,	// (0x0006eeb1) aid_size_cell_effect_ParamLimits

0xe908,	// (0x00072709) bg_tb_trans_pane_cp02_ParamLimits

0x0673,	// (0x00064474) heading_imed_pane_ParamLimits

0xb0ca,	// (0x0006eecb) listscroll_imed_pane_ParamLimits

0x3899,	// (0x0006769a) popup_call2_audio_first_window_g5_ParamLimits

0x3899,	// (0x0006769a) popup_call2_audio_first_window_g5

0xb7b2,	// (0x0006f5b3) aid_size_touch_image3_arrow_left_ParamLimits

0xb7b2,	// (0x0006f5b3) aid_size_touch_image3_arrow_left

0xb7c8,	// (0x0006f5c9) aid_size_touch_image3_arrow_right_ParamLimits

0xb7c8,	// (0x0006f5c9) aid_size_touch_image3_arrow_right

0xca54,	// (0x00070855) vid4_progress_pane_t3

0xb367,	// (0x0006f168) main_hwr_training_symbol_option_pane_ParamLimits

0xb367,	// (0x0006f168) main_hwr_training_symbol_option_pane

0xe60c,	// (0x0007240d) popup_hwr_training_preview_window_ParamLimits

0xe60c,	// (0x0007240d) popup_hwr_training_preview_window

0xb3c8,	// (0x0006f1c9) hwr_training_navi_pane_g5_ParamLimits

0xb3c8,	// (0x0006f1c9) hwr_training_navi_pane_g5

0xe866,	// (0x00072667) popup_char_count_window

0x6f22,	// (0x0006ad23) bg_popup_sub_pane_cp20_ParamLimits

0xc57f,	// (0x00070380) list_vitu2_match_list_pane_ParamLimits

0xc58b,	// (0x0007038c) vitu2_page_scroll_pane_ParamLimits

0xc58b,	// (0x0007038c) vitu2_page_scroll_pane

0x18cc,	// (0x000656cd) list_single_hwr_training_symbol_option_pane_ParamLimits

0x18cc,	// (0x000656cd) list_single_hwr_training_symbol_option_pane

0x18df,	// (0x000656e0) list_single_hwr_training_symbol_option_pane_g1

0x18e7,	// (0x000656e8) list_single_hwr_training_symbol_option_pane_t1

0x18f5,	// (0x000656f6) bg_button_pane_cp023

0x18fe,	// (0x000656ff) bg_button_pane_cp024

0xca83,	// (0x00070884) vitu2_page_scroll_pane_g1

0xca8b,	// (0x0007088c) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x000738ec) vitu2_page_scroll_pane_g

0xca93,	// (0x00070894) vitu2_page_scroll_pane_t1

0x1931,	// (0x00065732) popup_char_count_window_g1

0x193a,	// (0x0006573b) popup_char_count_window_g2

0x1943,	// (0x00065744) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x000738f1) popup_char_count_window_g

0x194c,	// (0x0006574d) popup_char_count_window_t1

0x6c91,	// (0x0006aa92) main_vded2_pane

0x4b90,	// (0x00068991) aid_size_cell_imed_line

0x4b9a,	// (0x0006899b) grid_imed_line_width_pane

0xbbfc,	// (0x0006f9fd) vid4_indicators_pane_g4

0x195a,	// (0x0006575b) cell_imed_line_width_pane_ParamLimits

0x195a,	// (0x0006575b) cell_imed_line_width_pane

0x196e,	// (0x0006576f) cell_imed_line_width_pane_g1

0x4d20,	// (0x00068b21) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x000738f8) cell_imed_line_width_pane_g

0xcaa2,	// (0x000708a3) main_vded2_pane_g1_ParamLimits

0xcaa2,	// (0x000708a3) main_vded2_pane_g1

0xcaaf,	// (0x000708b0) main_vded2_pane_g2_ParamLimits

0xcaaf,	// (0x000708b0) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x000738fd) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x000738fd) main_vded2_pane_g

0xcabd,	// (0x000708be) vded2_slider_pane_ParamLimits

0xcabd,	// (0x000708be) vded2_slider_pane

0xcaca,	// (0x000708cb) aid_size_touch_vded2_end

0xcad4,	// (0x000708d5) aid_size_touch_vded2_playhead

0x1977,	// (0x00065778) aid_size_touch_vded2_start

0x197f,	// (0x00065780) vded2_slider_bg_pane

0x1988,	// (0x00065789) vded2_slider_pane_g1

0x1991,	// (0x00065792) vded2_slider_pane_g2

0xcadc,	// (0x000708dd) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x00073902) vded2_slider_pane_g

0x1999,	// (0x0006579a) vded2_slider_bg_pane_g1

0x19a2,	// (0x000657a3) vded2_slider_bg_pane_g2

0x19ab,	// (0x000657ac) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x00073909) vded2_slider_bg_pane_g

0x94bc,	// (0x0006d2bd) aid_postcard_touch_down_pane_ParamLimits

0x94bc,	// (0x0006d2bd) aid_postcard_touch_down_pane

0x94cc,	// (0x0006d2cd) aid_postcard_touch_up_pane_ParamLimits

0x94cc,	// (0x0006d2cd) aid_postcard_touch_up_pane

0x6c91,	// (0x0006aa92) main_blid2_pane

0x4275,	// (0x00068076) popup_blid2_search_window

0x6c91,	// (0x0006aa92) blid2_gps_pane

0x6c91,	// (0x0006aa92) blid2_navig_pane

0x6c91,	// (0x0006aa92) blid2_search_pane

0x6c91,	// (0x0006aa92) blid2_tripm_pane

0xcae5,	// (0x000708e6) blid2_search_pane_g1_ParamLimits

0xcae5,	// (0x000708e6) blid2_search_pane_g1

0xcaf5,	// (0x000708f6) blid2_search_pane_t1_ParamLimits

0xcaf5,	// (0x000708f6) blid2_search_pane_t1

0xcb07,	// (0x00070908) aid_size_cell_blid2_gps_ParamLimits

0xcb07,	// (0x00070908) aid_size_cell_blid2_gps

0xcb17,	// (0x00070918) blid2_gps_pane_g1_ParamLimits

0xcb17,	// (0x00070918) blid2_gps_pane_g1

0xcb23,	// (0x00070924) grid_blid2_satellite_pane_ParamLimits

0xcb23,	// (0x00070924) grid_blid2_satellite_pane

0xcb33,	// (0x00070934) blid2_navig_pane_g1_ParamLimits

0xcb33,	// (0x00070934) blid2_navig_pane_g1

0xcb3f,	// (0x00070940) blid2_navig_pane_t1_ParamLimits

0xcb3f,	// (0x00070940) blid2_navig_pane_t1

0xcb51,	// (0x00070952) blid2_navig_pane_t2_ParamLimits

0xcb51,	// (0x00070952) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x00073910) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x00073910) blid2_navig_pane_t

0xcb63,	// (0x00070964) blid2_navig_ring_pane_ParamLimits

0xcb63,	// (0x00070964) blid2_navig_ring_pane

0xcb73,	// (0x00070974) blid2_speed_pane_ParamLimits

0xcb73,	// (0x00070974) blid2_speed_pane

0xcb7f,	// (0x00070980) blid2_tripm_pane_g1_ParamLimits

0xcb7f,	// (0x00070980) blid2_tripm_pane_g1

0xcb8f,	// (0x00070990) blid2_tripm_pane_g2_ParamLimits

0xcb8f,	// (0x00070990) blid2_tripm_pane_g2

0xcb9b,	// (0x0007099c) blid2_tripm_pane_g3_ParamLimits

0xcb9b,	// (0x0007099c) blid2_tripm_pane_g3

0xcba7,	// (0x000709a8) blid2_tripm_pane_g4_ParamLimits

0xcba7,	// (0x000709a8) blid2_tripm_pane_g4

0xcbb3,	// (0x000709b4) blid2_tripm_pane_g5_ParamLimits

0xcbb3,	// (0x000709b4) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x00073915) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x00073915) blid2_tripm_pane_g

0xcbcf,	// (0x000709d0) blid2_tripm_pane_t1_ParamLimits

0xcbcf,	// (0x000709d0) blid2_tripm_pane_t1

0xcbe3,	// (0x000709e4) blid2_tripm_pane_t2_ParamLimits

0xcbe3,	// (0x000709e4) blid2_tripm_pane_t2

0xcbf5,	// (0x000709f6) blid2_tripm_pane_t3_ParamLimits

0xcbf5,	// (0x000709f6) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x00073922) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x00073922) blid2_tripm_pane_t

0xcc27,	// (0x00070a28) cell_blid2_satellite_pane_ParamLimits

0xcc27,	// (0x00070a28) cell_blid2_satellite_pane

0xcc41,	// (0x00070a42) cell_blid2_satellite_pane_g1

0x19b4,	// (0x000657b5) cell_blid2_satellite_pane_t1

0x46ae,	// (0x000684af) blid2_speed_pane_g1

0x19c2,	// (0x000657c3) blid2_speed_pane_t1

0x19d0,	// (0x000657d1) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x0007392b) blid2_speed_pane_t

0x46ae,	// (0x000684af) blid2_navig_ring_pane_g1

0xcc4a,	// (0x00070a4b) blid2_navig_ring_pane_g2

0xcc52,	// (0x00070a53) blid2_navig_ring_pane_g3

0xcc5a,	// (0x00070a5b) blid2_navig_ring_pane_g4

0xcc62,	// (0x00070a63) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x00073930) blid2_navig_ring_pane_g

0x6c91,	// (0x0006aa92) bg_popup_window_pane_cp011

0x19de,	// (0x000657df) popup_blid2_search_window_g1

0x19e6,	// (0x000657e7) popup_blid2_search_window_t1

0x19f4,	// (0x000657f5) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x0007393b) popup_blid2_search_window_t

0x0261,	// (0x00064062) main_browser_pane_g1

0xeff1,	// (0x00072df2) main_browser_pane_ParamLimits

0xe908,	// (0x00072709) bg_button_pane_cp011_ParamLimits

0xbe65,	// (0x0006fc66) cell_vitu2_function_pane_g1_ParamLimits

0x4267,	// (0x00068068) bg_popup_sub_pane_cp22_ParamLimits

0x5ff2,	// (0x00069df3) input_focus_pane_cp08_ParamLimits

0xc6dc,	// (0x000704dd) popup_vitu2_query_button_pane_ParamLimits

0xc6dc,	// (0x000704dd) popup_vitu2_query_button_pane

0x6009,	// (0x00069e0a) popup_vitu2_query_input_button_pane

0x158d,	// (0x0006538e) popup_vitu2_query_window_g1_ParamLimits

0x6013,	// (0x00069e14) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x0007383c) popup_vitu2_query_window_g_ParamLimits

0x6c91,	// (0x0006aa92) bg_button_pane_cp026

0xcc6a,	// (0x00070a6b) popup_vitu2_query_input_button_pane_g1

0x6c91,	// (0x0006aa92) bg_button_pane_cp025

0x1a02,	// (0x00065803) popup_vitu2_query_button_pane_t1

0xa609,	// (0x0006e40a) main_mp3_pane_t6

0xa619,	// (0x0006e41a) popup_slider_window_cp01

0xbae0,	// (0x0006f8e1) cam4_battery_pane

0xbbbf,	// (0x0006f9c0) cam4_battery_pane_cp02

0xc9e3,	// (0x000707e4) cam4_battery_pane_cp01

0xc9e3,	// (0x000707e4) cam4_battery_pane_cp03

0x46ae,	// (0x000684af) cam4_battery_pane_g1

0x12d7,	// (0x000650d8) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x00073940) cam4_battery_pane_g

0x457a,	// (0x0006837b) popup_blid_sat_info2_window_t11

0x8e58,	// (0x0006cc59) aid_size_touch_mv_arrow_left_ParamLimits

0x8e81,	// (0x0006cc82) aid_size_touch_mv_arrow_right_ParamLimits

0x0a5c,	// (0x0006485d) navi_pane_g1_ParamLimits

0x8eaa,	// (0x0006ccab) navi_pane_g2_ParamLimits

0x8ed8,	// (0x0006ccd9) navi_pane_g3_ParamLimits

0xf409,	// (0x0007320a) navi_pane_g_ParamLimits

0x8f32,	// (0x0006cd33) navi_pane_mv_t1_ParamLimits

0xb0d6,	// (0x0006eed7) grid_imed_effect_pane_ParamLimits

0x7c10,	// (0x0006ba11) aid_placing_vt_slider_lsc

0x01b2,	// (0x00063fb3) aid_placing_vt_slider_prt

0xe908,	// (0x00072709) bg_tb_trans_pane_cp01_ParamLimits

0x4831,	// (0x00068632) popup_image_details_window_g1_ParamLimits

0x4844,	// (0x00068645) popup_image_details_window_g2_ParamLimits

0x4859,	// (0x0006865a) popup_image_details_window_g3_ParamLimits

0x4859,	// (0x0006865a) popup_image_details_window_g3

0xf73c,	// (0x0007353d) popup_image_details_window_g_ParamLimits

0x486d,	// (0x0006866e) popup_image_details_window_t1_ParamLimits

0x487f,	// (0x00068680) popup_image_details_window_t2_ParamLimits

0x4898,	// (0x00068699) popup_image_details_window_t3_ParamLimits

0x48ac,	// (0x000686ad) popup_image_details_window_t4_ParamLimits

0x48c7,	// (0x000686c8) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x00073544) popup_image_details_window_t_ParamLimits

0xc907,	// (0x00070708) cl_header_name_pane_ParamLimits

0xc907,	// (0x00070708) cl_header_name_pane

0xcc72,	// (0x00070a73) cl_header_name_pane_t1_ParamLimits

0xcc72,	// (0x00070a73) cl_header_name_pane_t1

0xcc89,	// (0x00070a8a) cl_header_name_pane_t2_ParamLimits

0xcc89,	// (0x00070a8a) cl_header_name_pane_t2

0xccb3,	// (0x00070ab4) cl_header_name_pane_t3_ParamLimits

0xccb3,	// (0x00070ab4) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x00073945) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x00073945) cl_header_name_pane_t

0x8f03,	// (0x0006cd04) navi_pane_mv_g2_ParamLimits

0xe840,	// (0x00072641) field_vitu2_entry_pane_g1_ParamLimits

0xe84c,	// (0x0007264d) field_vitu2_entry_pane_g2_ParamLimits

0xe858,	// (0x00072659) field_vitu2_entry_pane_g3_ParamLimits

0xe858,	// (0x00072659) field_vitu2_entry_pane_g3

0xf93a,	// (0x0007373b) field_vitu2_entry_pane_g_ParamLimits

0xbdf5,	// (0x0006fbf6) cell_vitu2_itu_pane_g1_ParamLimits

0xbe05,	// (0x0006fc06) cell_vitu2_itu_pane_g2_ParamLimits

0xbe05,	// (0x0006fc06) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x00073747) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x00073747) cell_vitu2_itu_pane_g

0xe908,	// (0x00072709) bg_vkb2_func_pane_cp05_ParamLimits

0xe908,	// (0x00072709) bg_vkb2_func_pane_cp05

0xe908,	// (0x00072709) bg_vkb2_func_pane_cp03

0xe908,	// (0x00072709) bg_vkb2_func_pane_cp04

0xe908,	// (0x00072709) bg_vkb2_func_pane_cp10_ParamLimits

0xe908,	// (0x00072709) bg_vkb2_func_pane_cp10

0x61c8,	// (0x00069fc9) bg_vkb2_func_pane_cp08

0xc8b1,	// (0x000706b2) bg_vkb2_func_pane_cp06

0xc8bf,	// (0x000706c0) bg_vkb2_func_pane_cp07

0x1907,	// (0x00065708) bg_vkb2_func_pane_cp11_ParamLimits

0x1907,	// (0x00065708) bg_vkb2_func_pane_cp11

0x191c,	// (0x0006571d) bg_vkb2_func_pane_cp12_ParamLimits

0x191c,	// (0x0006571d) bg_vkb2_func_pane_cp12

0x6c91,	// (0x0006aa92) bg_vkb2_func_pane_cp09

0x12eb,	// (0x000650ec) bg_vkb2_func_pane_g1

0x0372,	// (0x00064173) bg_vkb2_func_pane_g2

0x12f3,	// (0x000650f4) bg_vkb2_func_pane_g3

0x12fb,	// (0x000650fc) bg_vkb2_func_pane_g4

0x1538,	// (0x00065339) bg_vkb2_func_pane_g5

0x1313,	// (0x00065114) bg_vkb2_func_pane_g6

0x131b,	// (0x0006511c) bg_vkb2_func_pane_g7

0x130b,	// (0x0006510c) bg_vkb2_func_pane_g8

0x0352,	// (0x00064153) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x0007394c) bg_vkb2_func_pane_g

0xcbc1,	// (0x000709c2) blid2_tripm_pane_g6_ParamLimits

0xcbc1,	// (0x000709c2) blid2_tripm_pane_g6

0xe6e0,	// (0x000724e1) mp4_progress_pane_g1

0xcc1b,	// (0x00070a1c) blid2_tripm_values_pane_ParamLimits

0xcc1b,	// (0x00070a1c) blid2_tripm_values_pane

0xccd8,	// (0x00070ad9) blid2_tripm_values_pane_t1

0xcce6,	// (0x00070ae7) blid2_tripm_values_pane_t2

0xccf4,	// (0x00070af5) blid2_tripm_values_pane_t3

0xcd02,	// (0x00070b03) blid2_tripm_values_pane_t4

0xcd10,	// (0x00070b11) blid2_tripm_values_pane_t5

0xcd1e,	// (0x00070b1f) blid2_tripm_values_pane_t6

0xcd2c,	// (0x00070b2d) blid2_tripm_values_pane_t7

0xcd3a,	// (0x00070b3b) blid2_tripm_values_pane_t8

0xcd48,	// (0x00070b49) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x0007395f) blid2_tripm_values_pane_t

0x7c50,	// (0x0006ba51) call_video_pane_t1_ParamLimits

0x7c71,	// (0x0006ba72) call_video_pane_t2_ParamLimits

0xf292,	// (0x00073093) call_video_pane_t_ParamLimits

0x5daf,	// (0x00069bb0) msg_header_pane_g1_ParamLimits

0x0c97,	// (0x00064a98) msg_header_pane_g2_ParamLimits

0x0c97,	// (0x00064a98) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x000732ad) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x000732ad) msg_header_pane_g

0xeff1,	// (0x00072df2) main_clock2_pane_ParamLimits

0xae66,	// (0x0006ec67) grid_clock2_toolbar_pane_ParamLimits

0xae66,	// (0x0006ec67) grid_clock2_toolbar_pane

0xae66,	// (0x0006ec67) listscroll_clock2_pane_ParamLimits

0xae66,	// (0x0006ec67) listscroll_clock2_pane

0xaf13,	// (0x0006ed14) main_clock2_pane_t3_ParamLimits

0xaf13,	// (0x0006ed14) main_clock2_pane_t3

0xaf25,	// (0x0006ed26) main_clock2_pane_t4_ParamLimits

0xaf25,	// (0x0006ed26) main_clock2_pane_t4

0x1a10,	// (0x00065811) cell_clock2_toolbar_pane

0x1a18,	// (0x00065819) cell_clock2_toolbar_pane_cp01

0x1a18,	// (0x00065819) cell_clock2_toolbar_pane_cp02

0x1a20,	// (0x00065821) cell_clock2_toolbar_pane_cp03

0x1a28,	// (0x00065829) list_clock2_pane

0x09b3,	// (0x000647b4) scroll_pane_cp10

0x1a30,	// (0x00065831) list_single_clock2_pane_ParamLimits

0x1a30,	// (0x00065831) list_single_clock2_pane

0x0afc,	// (0x000648fd) list_highlight_pane_cp08

0x1a3d,	// (0x0006583e) list_single_clock2_pane_t1

0x1a4b,	// (0x0006584c) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x00073972) list_single_clock2_pane_t

0x6c91,	// (0x0006aa92) bg_button_pane_cp10

0x1a59,	// (0x0006585a) cell_clock2_toolbar_pane_g1

0x941e,	// (0x0006d21f) aid_main_viewer_pane_g1_ParamLimits

0x941e,	// (0x0006d21f) aid_main_viewer_pane_g1

0x942a,	// (0x0006d22b) aid_main_viewer_pane_g2_ParamLimits

0x942a,	// (0x0006d22b) aid_main_viewer_pane_g2

0x9436,	// (0x0006d237) aid_main_viewer_pane_g3_ParamLimits

0x9436,	// (0x0006d237) aid_main_viewer_pane_g3

0x9447,	// (0x0006d248) aid_main_viewer_pane_g4_ParamLimits

0x9447,	// (0x0006d248) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x000732be) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x000732be) aid_main_viewer_pane_g

0x9bc7,	// (0x0006d9c8) main_calc_pane_ParamLimits

0x9bd4,	// (0x0006d9d5) main_dialer2_pane_ParamLimits

0x6c91,	// (0x0006aa92) main_cam6_pane

0x6c91,	// (0x0006aa92) main_vid6_pane

0xae72,	// (0x0006ec73) listscroll_gen_pane_cp06_ParamLimits

0xae72,	// (0x0006ec73) listscroll_gen_pane_cp06

0xaf37,	// (0x0006ed38) main_clock2_pane_t5_ParamLimits

0xaf37,	// (0x0006ed38) main_clock2_pane_t5

0xaf80,	// (0x0006ed81) aid_call2_pane_cp10_ParamLimits

0xaf92,	// (0x0006ed93) aid_call_pane_cp10_ParamLimits

0x0a31,	// (0x00064832) popup_clock_analogue_window_cp10_g1_ParamLimits

0x0a31,	// (0x00064832) popup_clock_analogue_window_cp10_g2_ParamLimits

0xafa4,	// (0x0006eda5) popup_clock_analogue_window_cp10_g3_ParamLimits

0xafa4,	// (0x0006eda5) popup_clock_analogue_window_cp10_g4_ParamLimits

0x0a31,	// (0x00064832) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x000735f4) popup_clock_analogue_window_cp10_g_ParamLimits

0xafb6,	// (0x0006edb7) popup_clock_analogue_window_cp10_t1_ParamLimits

0xb75f,	// (0x0006f560) cell_dialer2_keypad_pane_g2_ParamLimits

0xb75f,	// (0x0006f560) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x000736da) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x000736da) cell_dialer2_keypad_pane_g

0xb77b,	// (0x0006f57c) cell_dialer2_keypad_pane_t1

0xc130,	// (0x0006ff31) main_cset_text2_pane_ParamLimits

0xc130,	// (0x0006ff31) main_cset_text2_pane

0x1779,	// (0x0006557a) area_vitu2_query_pane_g1_ParamLimits

0x60f3,	// (0x00069ef4) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x0007388f) area_vitu2_query_pane_g_ParamLimits

0x61a4,	// (0x00069fa5) area_vitu2_query_pane_t7_ParamLimits

0x61a4,	// (0x00069fa5) area_vitu2_query_pane_t7

0xc8b1,	// (0x000706b2) bg_button_pane_cp018_ParamLimits

0xc8bf,	// (0x000706c0) bg_button_pane_cp021_ParamLimits

0x61c8,	// (0x00069fc9) bg_button_pane_cp022_ParamLimits

0x61c8,	// (0x00069fc9) bg_vkb2_func_pane_cp08_ParamLimits

0xc8b1,	// (0x000706b2) bg_vkb2_func_pane_cp06_ParamLimits

0xc8bf,	// (0x000706c0) bg_vkb2_func_pane_cp07_ParamLimits

0x61d9,	// (0x00069fda) input_focus_pane_cp09_ParamLimits

0xcd56,	// (0x00070b57) cam6_autofocus_pane_ParamLimits

0xcd56,	// (0x00070b57) cam6_autofocus_pane

0xcd78,	// (0x00070b79) cam6_image_uncrop_pane_ParamLimits

0xcd78,	// (0x00070b79) cam6_image_uncrop_pane

0xcda5,	// (0x00070ba6) cam6_indi_pane_ParamLimits

0xcda5,	// (0x00070ba6) cam6_indi_pane

0xcdbf,	// (0x00070bc0) cam6_mode_pane_ParamLimits

0xcdbf,	// (0x00070bc0) cam6_mode_pane

0xcdd3,	// (0x00070bd4) cam6_timer_pane_ParamLimits

0xcdd3,	// (0x00070bd4) cam6_timer_pane

0xcddf,	// (0x00070be0) cam6_zoom_pane_ParamLimits

0xcddf,	// (0x00070be0) cam6_zoom_pane

0xbb41,	// (0x0006f942) cam6_mode_pane_g1_ParamLimits

0xbb41,	// (0x0006f942) cam6_mode_pane_g1

0xbb59,	// (0x0006f95a) cam6_mode_pane_g2_ParamLimits

0xbb59,	// (0x0006f95a) cam6_mode_pane_g2

0xbb65,	// (0x0006f966) cam6_mode_pane_g3_ParamLimits

0xbb65,	// (0x0006f966) cam6_mode_pane_g3

0xbb71,	// (0x0006f972) cam6_mode_pane_g4_ParamLimits

0xbb71,	// (0x0006f972) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x00073977) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x00073977) cam6_mode_pane_g

0x1a61,	// (0x00065862) bg_tb_trans_pane_cp08_ParamLimits

0x1a61,	// (0x00065862) bg_tb_trans_pane_cp08

0x1a6f,	// (0x00065870) cam6_battery_pane_ParamLimits

0x1a6f,	// (0x00065870) cam6_battery_pane

0x1a85,	// (0x00065886) cam6_indi_pane_g1_ParamLimits

0x1a85,	// (0x00065886) cam6_indi_pane_g1

0x1a97,	// (0x00065898) cam6_indi_pane_g2_ParamLimits

0x1a97,	// (0x00065898) cam6_indi_pane_g2

0x1aa9,	// (0x000658aa) cam6_indi_pane_g3_ParamLimits

0x1aa9,	// (0x000658aa) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x00073980) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x00073980) cam6_indi_pane_g

0x1abb,	// (0x000658bc) cam6_indi_pane_t1_ParamLimits

0x1abb,	// (0x000658bc) cam6_indi_pane_t1

0xbc31,	// (0x0006fa32) cam6_autofocus_pane_g1

0xbc39,	// (0x0006fa3a) cam6_autofocus_pane_g2

0xbc41,	// (0x0006fa42) cam6_autofocus_pane_g3

0xbc49,	// (0x0006fa4a) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x00073987) cam6_autofocus_pane_g

0x1ae1,	// (0x000658e2) cam6_timer_pane_g1

0x1ae9,	// (0x000658ea) cam6_timer_pane_t1

0x1af7,	// (0x000658f8) cam6_zoom_cont_pane

0x1aff,	// (0x00065900) cam6_zoom_pane_g1

0x1b07,	// (0x00065908) cam6_zoom_pane_g2

0xcdf7,	// (0x00070bf8) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x00073990) cam6_zoom_pane_g

0x46ae,	// (0x000684af) cam6_battery_pane_g1

0x46ae,	// (0x000684af) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x00073501) cam6_battery_pane_g

0x1b0f,	// (0x00065910) cam6_zoom_cont_pane_g1

0x1b18,	// (0x00065919) cam6_zoom_cont_pane_g2

0x1b21,	// (0x00065922) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x00073997) cam6_zoom_cont_pane_g

0xce14,	// (0x00070c15) cam6_mode_pane_cp_ParamLimits

0xce14,	// (0x00070c15) cam6_mode_pane_cp

0xcddf,	// (0x00070be0) cam6_zoom_pane_cp_ParamLimits

0xcddf,	// (0x00070be0) cam6_zoom_pane_cp

0xce28,	// (0x00070c29) vid6_image_uncrop_cif_pane_ParamLimits

0xce28,	// (0x00070c29) vid6_image_uncrop_cif_pane

0xce54,	// (0x00070c55) vid6_image_uncrop_nhd_pane_ParamLimits

0xce54,	// (0x00070c55) vid6_image_uncrop_nhd_pane

0xcd78,	// (0x00070b79) vid6_image_uncrop_vga_pane_ParamLimits

0xcd78,	// (0x00070b79) vid6_image_uncrop_vga_pane

0xce71,	// (0x00070c72) vid6_image_uncrop_wvga_pane_ParamLimits

0xce71,	// (0x00070c72) vid6_image_uncrop_wvga_pane

0xce8e,	// (0x00070c8f) vid6_indi_pane_ParamLimits

0xce8e,	// (0x00070c8f) vid6_indi_pane

0x1a61,	// (0x00065862) bg_tb_trans_pane_cp09_ParamLimits

0x1a61,	// (0x00065862) bg_tb_trans_pane_cp09

0x1b39,	// (0x0006593a) cam6_battery_pane_cp_ParamLimits

0x1b39,	// (0x0006593a) cam6_battery_pane_cp

0x1b45,	// (0x00065946) vid6_indi_pane_g1_ParamLimits

0x1b45,	// (0x00065946) vid6_indi_pane_g1

0x1b57,	// (0x00065958) vid6_indi_pane_g2_ParamLimits

0x1b57,	// (0x00065958) vid6_indi_pane_g2

0x1b69,	// (0x0006596a) vid6_indi_pane_g3_ParamLimits

0x1b69,	// (0x0006596a) vid6_indi_pane_g3

0x1b7e,	// (0x0006597f) vid6_indi_pane_g4_ParamLimits

0x1b7e,	// (0x0006597f) vid6_indi_pane_g4

0x1b93,	// (0x00065994) vid6_indi_pane_g5_ParamLimits

0x1b93,	// (0x00065994) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x0007399e) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x0007399e) vid6_indi_pane_g

0x1bad,	// (0x000659ae) vid6_indi_pane_t1_ParamLimits

0x1bad,	// (0x000659ae) vid6_indi_pane_t1

0x1bc3,	// (0x000659c4) vid6_indi_pane_t2_ParamLimits

0x1bc3,	// (0x000659c4) vid6_indi_pane_t2

0x1beb,	// (0x000659ec) vid6_indi_pane_t3_ParamLimits

0x1beb,	// (0x000659ec) vid6_indi_pane_t3

0x1c13,	// (0x00065a14) vid6_indi_pane_t4_ParamLimits

0x1c13,	// (0x00065a14) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x000739a9) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x000739a9) vid6_indi_pane_t

0x1c37,	// (0x00065a38) wait_bar_pane_cp08

0xceb3,	// (0x00070cb4) main_cset_text2_pane_t1_ParamLimits

0xceb3,	// (0x00070cb4) main_cset_text2_pane_t1

0xcdff,	// (0x00070c00) listscroll_gen_pane_cp06_t1_ParamLimits

0xcdff,	// (0x00070c00) listscroll_gen_pane_cp06_t1

0x6c91,	// (0x0006aa92) main_cam6_set_pane

0x4911,	// (0x00068712) bg_tb_trans_pane_cp06_ParamLimits

0xbae8,	// (0x0006f8e9) cam4_indicators_pane_g1_ParamLimits

0xbaf9,	// (0x0006f8fa) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x00073717) cam4_indicators_pane_g_ParamLimits

0xbb17,	// (0x0006f918) cam4_indicators_pane_t1_ParamLimits

0xe908,	// (0x00072709) bg_tb_trans_pane_cp07_ParamLimits

0xbbc9,	// (0x0006f9ca) vid4_indicators_pane_g1_ParamLimits

0xbbda,	// (0x0006f9db) vid4_indicators_pane_g2_ParamLimits

0xbbeb,	// (0x0006f9ec) vid4_indicators_pane_g3_ParamLimits

0xbbfc,	// (0x0006f9fd) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x00073729) vid4_indicators_pane_g_ParamLimits

0xbc18,	// (0x0006fa19) vid4_indicators_pane_t1_ParamLimits

0xc9eb,	// (0x000707ec) vid4_progress_pane_g1_ParamLimits

0xc9fb,	// (0x000707fc) vid4_progress_pane_g2_ParamLimits

0x94a4,	// (0x0006d2a5) vid4_progress_pane_g3_ParamLimits

0xca0b,	// (0x0007080c) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x000738da) vid4_progress_pane_g_ParamLimits

0xca29,	// (0x0007082a) vid4_progress_pane_t1_ParamLimits

0xca3e,	// (0x0007083f) vid4_progress_pane_t2_ParamLimits

0xca54,	// (0x00070855) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x000738e5) vid4_progress_pane_t_ParamLimits

0xca69,	// (0x0007086a) wait_bar_pane_cp07_ParamLimits

0xcee6,	// (0x00070ce7) main_cam6_set_pane_g2_ParamLimits

0xcee6,	// (0x00070ce7) main_cam6_set_pane_g2

0xcef2,	// (0x00070cf3) main_cset6_listscroll_pane_ParamLimits

0xcef2,	// (0x00070cf3) main_cset6_listscroll_pane

0xcf1d,	// (0x00070d1e) main_cset6_slider_pane_ParamLimits

0xcf1d,	// (0x00070d1e) main_cset6_slider_pane

0xcf29,	// (0x00070d2a) main_cset6_text2_pane_ParamLimits

0xcf29,	// (0x00070d2a) main_cset6_text2_pane

0x1c46,	// (0x00065a47) main_cset6_text_pane

0x1c4e,	// (0x00065a4f) main_cset_list_pane_copy1_ParamLimits

0x1c4e,	// (0x00065a4f) main_cset_list_pane_copy1

0x1c5e,	// (0x00065a5f) scroll_pane_cp028_copy1

0xcf3c,	// (0x00070d3d) cset_list_set_pane_copy1

0xcf4f,	// (0x00070d50) aid_position_infowindow_above_copy1

0xcf57,	// (0x00070d58) aid_position_infowindow_below_copy1

0xcf5f,	// (0x00070d60) cset_list_set_pane_g1_copy1

0x5f67,	// (0x00069d68) cset_list_set_pane_g3_copy1_ParamLimits

0x5f67,	// (0x00069d68) cset_list_set_pane_g3_copy1

0x5f76,	// (0x00069d77) cset_list_set_pane_t1_copy1_ParamLimits

0x5f76,	// (0x00069d77) cset_list_set_pane_t1_copy1

0xe908,	// (0x00072709) list_highlight_pane_cp021_copy1_ParamLimits

0xe908,	// (0x00072709) list_highlight_pane_cp021_copy1

0x1c67,	// (0x00065a68) cset6_slider_pane_ParamLimits

0x1c67,	// (0x00065a68) cset6_slider_pane

0x1c93,	// (0x00065a94) main_cset6_slider_pane_g1_ParamLimits

0x1c93,	// (0x00065a94) main_cset6_slider_pane_g1

0xcf67,	// (0x00070d68) main_cset6_slider_pane_g2_ParamLimits

0xcf67,	// (0x00070d68) main_cset6_slider_pane_g2

0x1cbb,	// (0x00065abc) main_cset6_slider_pane_g3_ParamLimits

0x1cbb,	// (0x00065abc) main_cset6_slider_pane_g3

0xcf8f,	// (0x00070d90) main_cset6_slider_pane_g4_ParamLimits

0xcf8f,	// (0x00070d90) main_cset6_slider_pane_g4

0xcf9b,	// (0x00070d9c) main_cset6_slider_pane_g5_ParamLimits

0xcf9b,	// (0x00070d9c) main_cset6_slider_pane_g5

0x141a,	// (0x0006521b) main_cset6_slider_pane_g7_ParamLimits

0x141a,	// (0x0006521b) main_cset6_slider_pane_g7

0x1426,	// (0x00065227) main_cset6_slider_pane_g8_ParamLimits

0x1426,	// (0x00065227) main_cset6_slider_pane_g8

0xcfa9,	// (0x00070daa) main_cset6_slider_pane_g9_ParamLimits

0xcfa9,	// (0x00070daa) main_cset6_slider_pane_g9

0xcfb5,	// (0x00070db6) main_cset6_slider_pane_g10_ParamLimits

0xcfb5,	// (0x00070db6) main_cset6_slider_pane_g10

0xcfc1,	// (0x00070dc2) main_cset6_slider_pane_g11_ParamLimits

0xcfc1,	// (0x00070dc2) main_cset6_slider_pane_g11

0xcfcd,	// (0x00070dce) main_cset6_slider_pane_g12_ParamLimits

0xcfcd,	// (0x00070dce) main_cset6_slider_pane_g12

0xcfd9,	// (0x00070dda) main_cset6_slider_pane_g13_ParamLimits

0xcfd9,	// (0x00070dda) main_cset6_slider_pane_g13

0xcfe5,	// (0x00070de6) main_cset6_slider_pane_g14_ParamLimits

0xcfe5,	// (0x00070de6) main_cset6_slider_pane_g14

0xcff1,	// (0x00070df2) main_cset6_slider_pane_g15_ParamLimits

0xcff1,	// (0x00070df2) main_cset6_slider_pane_g15

0xd009,	// (0x00070e0a) main_cset6_slider_pane_g16_ParamLimits

0xd009,	// (0x00070e0a) main_cset6_slider_pane_g16

0xd017,	// (0x00070e18) main_cset6_slider_pane_g17_ParamLimits

0xd017,	// (0x00070e18) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x000739b2) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x000739b2) main_cset6_slider_pane_g

0x1cc7,	// (0x00065ac8) main_cset6_slider_pane_t1_ParamLimits

0x1cc7,	// (0x00065ac8) main_cset6_slider_pane_t1

0xd03d,	// (0x00070e3e) main_cset6_slider_pane_t2_ParamLimits

0xd03d,	// (0x00070e3e) main_cset6_slider_pane_t2

0xd068,	// (0x00070e69) main_cset6_slider_pane_t3_ParamLimits

0xd068,	// (0x00070e69) main_cset6_slider_pane_t3

0xd093,	// (0x00070e94) main_cset6_slider_pane_t4_ParamLimits

0xd093,	// (0x00070e94) main_cset6_slider_pane_t4

0xd0be,	// (0x00070ebf) main_cset6_slider_pane_t5_ParamLimits

0xd0be,	// (0x00070ebf) main_cset6_slider_pane_t5

0x1d08,	// (0x00065b09) main_cset6_slider_pane_t7_ParamLimits

0x1d08,	// (0x00065b09) main_cset6_slider_pane_t7

0xd0eb,	// (0x00070eec) main_cset6_slider_pane_t8_ParamLimits

0xd0eb,	// (0x00070eec) main_cset6_slider_pane_t8

0xd10f,	// (0x00070f10) main_cset6_slider_pane_t9_ParamLimits

0xd10f,	// (0x00070f10) main_cset6_slider_pane_t9

0xd133,	// (0x00070f34) main_cset6_slider_pane_t10_ParamLimits

0xd133,	// (0x00070f34) main_cset6_slider_pane_t10

0xd157,	// (0x00070f58) main_cset6_slider_pane_t11_ParamLimits

0xd157,	// (0x00070f58) main_cset6_slider_pane_t11

0x1d3e,	// (0x00065b3f) main_cset6_slider_pane_t14_ParamLimits

0x1d3e,	// (0x00065b3f) main_cset6_slider_pane_t14

0x1d77,	// (0x00065b78) main_cset6_slider_pane_t15_ParamLimits

0x1d77,	// (0x00065b78) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x000739d7) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x000739d7) main_cset6_slider_pane_t

0x1db0,	// (0x00065bb1) cset_slider_pane_g1_copy1

0x1db9,	// (0x00065bba) cset_slider_pane_g2_copy1

0x1dc2,	// (0x00065bc3) cset_slider_pane_g3_copy1

0x6c91,	// (0x0006aa92) bg_popup_sub_pane_cp011_copy1

0x1599,	// (0x0006539a) main_cset_text_pane_g1_copy1

0x15a1,	// (0x000653a2) main_cset_text_pane_t1_copy1

0x15af,	// (0x000653b0) main_cset_text_pane_t2_copy1

0x15bd,	// (0x000653be) main_cset_text_pane_t3_copy1

0x15cb,	// (0x000653cc) main_cset_text_pane_t4_copy1

0x15d9,	// (0x000653da) main_cset_text_pane_t5_copy1

0x15e7,	// (0x000653e8) main_cset_text_pane_t6_copy1

0x15f5,	// (0x000653f6) main_cset_text_pane_t7_copy1

0xd17b,	// (0x00070f7c) main_cset_text2_pane_t1_copy1

0x6c91,	// (0x0006aa92) main_ncimui_pane

0x9c13,	// (0x0006da14) popup_query_ncimui_window_ParamLimits

0x9c13,	// (0x0006da14) popup_query_ncimui_window

0xa76a,	// (0x0006e56b) field_cale_ev2_pane_g4_ParamLimits

0xa76a,	// (0x0006e56b) field_cale_ev2_pane_g4

0xb47f,	// (0x0006f280) cell_video_dialer_keypad_pane_g2_ParamLimits

0xb47f,	// (0x0006f280) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x000736b5) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x000736b5) cell_video_dialer_keypad_pane_g

0xb497,	// (0x0006f298) cell_video_dialer_keypad_pane_t1

0x6c91,	// (0x0006aa92) bg_popup_window_pane_cp012

0x0890,	// (0x00064691) heading_pane_cp06

0x1eba,	// (0x00065cbb) ncim_query_content_pane

0x6c91,	// (0x0006aa92) bg_popup_heading_pane_cp01

0x1ec2,	// (0x00065cc3) ncim_heading_pane_t1

0x1ed0,	// (0x00065cd1) ncim_indicator_popup_pane

0x1ee2,	// (0x00065ce3) ncim_query_button_pane

0x1ef6,	// (0x00065cf7) ncim_query_content_pane_t1

0x1f08,	// (0x00065d09) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x00073a16) ncim_query_content_pane_t

0x1f42,	// (0x00065d43) ncim_query_list_pane

0x1f54,	// (0x00065d55) ncim_query_popup_pane

0x1ed0,	// (0x00065cd1) ncim_indicator_popup_pane_ParamLimits

0xd29d,	// (0x0007109e) ncim_query_content_pane_g1_ParamLimits

0xd29d,	// (0x0007109e) ncim_query_content_pane_g1

0x1ef6,	// (0x00065cf7) ncim_query_content_pane_t1_ParamLimits

0x1f08,	// (0x00065d09) ncim_query_content_pane_t2_ParamLimits

0xd2a9,	// (0x000710aa) ncim_query_content_pane_t3_ParamLimits

0xd2a9,	// (0x000710aa) ncim_query_content_pane_t3

0xd2c6,	// (0x000710c7) ncim_query_content_pane_t4_ParamLimits

0xd2c6,	// (0x000710c7) ncim_query_content_pane_t4

0xd2e3,	// (0x000710e4) ncim_query_content_pane_t5_ParamLimits

0xd2e3,	// (0x000710e4) ncim_query_content_pane_t5

0x1f1a,	// (0x00065d1b) ncim_query_content_pane_t6_ParamLimits

0x1f1a,	// (0x00065d1b) ncim_query_content_pane_t6

0xfc15,	// (0x00073a16) ncim_query_content_pane_t_ParamLimits

0x1f42,	// (0x00065d43) ncim_query_list_pane_ParamLimits

0x1f54,	// (0x00065d55) ncim_query_popup_pane_ParamLimits

0x1f68,	// (0x00065d69) wait_bar_pane_cp04

0x6c91,	// (0x0006aa92) input_focus_pane_cp011

0x1f70,	// (0x00065d71) ncim_query_popup_pane_t1

0x1f7e,	// (0x00065d7f) ncim_list_query_list_pane_ParamLimits

0x1f7e,	// (0x00065d7f) ncim_list_query_list_pane

0x6c91,	// (0x0006aa92) bg_button_pane_cp027

0x1f8b,	// (0x00065d8c) ncim_query_button_pane_g1

0x6c91,	// (0x0006aa92) list_highlight_pane_cp012

0x1f95,	// (0x00065d96) ncim_list_query_list_pane_g1

0x1f9d,	// (0x00065d9e) ncim_list_query_list_pane_t1

0xbb08,	// (0x0006f909) cam4_indicators_pane_g3_ParamLimits

0xbb08,	// (0x0006f909) cam4_indicators_pane_g3

0xbc08,	// (0x0006fa09) vid4_indicators_pane_g5_ParamLimits

0xbc08,	// (0x0006fa09) vid4_indicators_pane_g5

0xca1a,	// (0x0007081b) vid4_progress_pane_g5_ParamLimits

0xca1a,	// (0x0007081b) vid4_progress_pane_g5

0xd1b6,	// (0x00070fb7) main_ncimui_pane_g1

0xd20c,	// (0x0007100d) ncimui_group_query_pane_ParamLimits

0xd20c,	// (0x0007100d) ncimui_group_query_pane

0xd248,	// (0x00071049) ncimui_list_pane_ParamLimits

0xd248,	// (0x00071049) ncimui_list_pane

0xd269,	// (0x0007106a) ncimui_text_pane_ParamLimits

0xd269,	// (0x0007106a) ncimui_text_pane

0xd300,	// (0x00071101) ncimui_text_pane_t1_ParamLimits

0xd300,	// (0x00071101) ncimui_text_pane_t1

0x1fab,	// (0x00065dac) ncimui_list_single_graphic_pane_ParamLimits

0x1fab,	// (0x00065dac) ncimui_list_single_graphic_pane

0xd31f,	// (0x00071120) ncimui_query_pane_ParamLimits

0xd31f,	// (0x00071120) ncimui_query_pane

0x6c91,	// (0x0006aa92) list_highlight_pane_cp013

0x1fbb,	// (0x00065dbc) ncim_list_query_list_pane_t1_copy1

0x1f95,	// (0x00065d96) ncim_list_single_graphic_pane_g1

0x1fc9,	// (0x00065dca) ncim_query_button_pane_cp01

0x1fd5,	// (0x00065dd6) ncim_query_entry_pane_ParamLimits

0x1fd5,	// (0x00065dd6) ncim_query_entry_pane

0x1fe8,	// (0x00065de9) ncimui_query_pane_g1

0x1ff4,	// (0x00065df5) ncimui_query_pane_t1_ParamLimits

0x1ff4,	// (0x00065df5) ncimui_query_pane_t1

0xe908,	// (0x00072709) input_focus_pane_cp012

0x200d,	// (0x00065e0e) ncim_query_entry_pane_t1

0xeff1,	// (0x00072df2) main_im_pane_ParamLimits

0xe908,	// (0x00072709) main_mobtv_pane_ParamLimits

0xe908,	// (0x00072709) main_mobtv_pane

0xd025,	// (0x00070e26) main_cset6_slider_pane_g18_ParamLimits

0xd025,	// (0x00070e26) main_cset6_slider_pane_g18

0xd031,	// (0x00070e32) main_cset6_slider_pane_g19_ParamLimits

0xd031,	// (0x00070e32) main_cset6_slider_pane_g19

0xe858,	// (0x00072659) bg_main_mobtv_pane_ParamLimits

0xe858,	// (0x00072659) bg_main_mobtv_pane

0xd332,	// (0x00071133) main_mobtv_info_pane

0xd33d,	// (0x0007113e) main_mobtv_loading_pane_ParamLimits

0xd33d,	// (0x0007113e) main_mobtv_loading_pane

0x202d,	// (0x00065e2e) main_mobtv_pg_channel_list_pane

0x2037,	// (0x00065e38) main_mobtv_pg_hdr_pane

0xd34a,	// (0x0007114b) main_mobtv_programe_curr_pane_ParamLimits

0xd34a,	// (0x0007114b) main_mobtv_programe_curr_pane

0xd357,	// (0x00071158) main_mobtv_programe_next_pane_ParamLimits

0xd357,	// (0x00071158) main_mobtv_programe_next_pane

0x2040,	// (0x00065e41) popup_mobtv_noti_window

0x46ae,	// (0x000684af) main_tv_pg_hdr_pane_g1

0x2048,	// (0x00065e49) main_tv_pg_hdr_pane_g2

0x2050,	// (0x00065e51) main_tv_pg_hdr_pane_g3

0x2058,	// (0x00065e59) main_tv_pg_hdr_pane_g4

0x2060,	// (0x00065e61) main_tv_pg_hdr_pane_g5

0x206a,	// (0x00065e6b) main_tv_pg_hdr_pane_g6

0x2074,	// (0x00065e75) main_tv_pg_hdr_pane_g7

0x207e,	// (0x00065e7f) main_tv_pg_hdr_pane_g8

0x2088,	// (0x00065e89) main_tv_pg_hdr_pane_g9

0x2092,	// (0x00065e93) main_tv_pg_hdr_pane_g10

0x209c,	// (0x00065e9d) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x00073a23) main_tv_pg_hdr_pane_g

0x20a6,	// (0x00065ea7) main_tv_pg_hdr_pane_t1

0x20b4,	// (0x00065eb5) main_tv_pg_hdr_pane_t2

0x20c2,	// (0x00065ec3) main_tv_pg_hdr_pane_t3

0x20d2,	// (0x00065ed3) main_tv_pg_hdr_pane_t4

0x20e2,	// (0x00065ee3) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x00073a3a) main_tv_pg_hdr_pane_t

0x20f2,	// (0x00065ef3) single_mobtv_pg_channel_pane_ParamLimits

0x20f2,	// (0x00065ef3) single_mobtv_pg_channel_pane

0x2104,	// (0x00065f05) single_mobtv_pg_channel_table_pane

0x210d,	// (0x00065f0e) single_mobtv_pg_channel_thumb_pane

0x2116,	// (0x00065f17) single_tv_pg_channel_pane_g1

0x211f,	// (0x00065f20) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x00073a45) single_tv_pg_channel_pane_g

0x4911,	// (0x00068712) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x4911,	// (0x00068712) bg_single_mobtv_pg_channel_thumb_pane

0x2128,	// (0x00065f29) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2128,	// (0x00065f29) single_mobtv_pg_channel_thumb_pane_g1

0x2136,	// (0x00065f37) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x2136,	// (0x00065f37) single_mobtv_pg_channel_thumb_pane_g2

0x2142,	// (0x00065f43) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2142,	// (0x00065f43) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x00073a4a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x00073a4a) single_mobtv_pg_channel_thumb_pane_g

0x214e,	// (0x00065f4f) single_mobtv_pg_channel_thumb_pane_t1

0x215c,	// (0x00065f5d) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x00073a51) single_mobtv_pg_channel_thumb_pane_t

0x46ae,	// (0x000684af) bg_single_mobtv_pg_channel_table_pane_g1

0x46ae,	// (0x000684af) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x00073501) bg_single_mobtv_pg_channel_table_pane_g

0x216a,	// (0x00065f6b) single_mobtv_pg_channel_table_pane_t1

0x2178,	// (0x00065f79) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x00073a56) single_mobtv_pg_channel_table_pane_t

0xd36c,	// (0x0007116d) main_mobtv_info_pane_g1_ParamLimits

0xd36c,	// (0x0007116d) main_mobtv_info_pane_g1

0xd388,	// (0x00071189) main_mobtv_info_pane_t1_ParamLimits

0xd388,	// (0x00071189) main_mobtv_info_pane_t1

0xd400,	// (0x00071201) main_mobtv_info_pane_t2_ParamLimits

0xd400,	// (0x00071201) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x00073a60) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x00073a60) main_mobtv_info_pane_t

0xd48f,	// (0x00071290) wait_bar_pane_cp05

0xd4a1,	// (0x000712a2) main_mobtv_loading_pane_g1_ParamLimits

0xd4a1,	// (0x000712a2) main_mobtv_loading_pane_g1

0xd4af,	// (0x000712b0) main_mobtv_loading_pane_g2_ParamLimits

0xd4af,	// (0x000712b0) main_mobtv_loading_pane_g2

0xd4bb,	// (0x000712bc) main_mobtv_loading_pane_g3_ParamLimits

0xd4bb,	// (0x000712bc) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x00073a67) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x00073a67) main_mobtv_loading_pane_g

0x2186,	// (0x00065f87) main_mobtv_loading_pane_t1_ParamLimits

0x2186,	// (0x00065f87) main_mobtv_loading_pane_t1

0x219e,	// (0x00065f9f) main_mobtv_loading_pane_t2_ParamLimits

0x219e,	// (0x00065f9f) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x00073a6e) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x00073a6e) main_mobtv_loading_pane_t

0xd4c9,	// (0x000712ca) wait_bar_pane_cp06_ParamLimits

0xd4c9,	// (0x000712ca) wait_bar_pane_cp06

0x21c2,	// (0x00065fc3) main_mobtv_programe_curr_pane_t1

0x21d0,	// (0x00065fd1) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x00073a73) main_mobtv_programe_curr_pane_t

0x21de,	// (0x00065fdf) main_mobtv_programe_next_pane_t1

0x21ec,	// (0x00065fed) main_mobtv_programe_next_pane_t2

0x21fa,	// (0x00065ffb) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x00073a78) main_mobtv_programe_next_pane_t

0x6c91,	// (0x0006aa92) bg_popup_mobtv_noti_window_pane

0x2208,	// (0x00066009) popup_mobtv_noti_window_g1

0x2210,	// (0x00066011) popup_mobtv_noti_window_t1

0x221e,	// (0x0006601f) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x00073a7f) popup_mobtv_noti_window_t

0x46ae,	// (0x000684af) bg_popup_mobtv_noti_window_pane_g1

0x6c91,	// (0x0006aa92) sc_clock_pane

0x6c91,	// (0x0006aa92) main_fs_bigclock_pane

0xcc09,	// (0x00070a0a) blid2_tripm_pane_t4_ParamLimits

0xcc09,	// (0x00070a0a) blid2_tripm_pane_t4

0xd4d5,	// (0x000712d6) sc_clock_pane_g1_ParamLimits

0xd4d5,	// (0x000712d6) sc_clock_pane_g1

0xd4e3,	// (0x000712e4) sc_clock_pane_t1_ParamLimits

0xd4e3,	// (0x000712e4) sc_clock_pane_t1

0xd4f6,	// (0x000712f7) sc_clock_pane_t2_ParamLimits

0xd4f6,	// (0x000712f7) sc_clock_pane_t2

0xd508,	// (0x00071309) sc_clock_pane_t3_ParamLimits

0xd508,	// (0x00071309) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x00073a84) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x00073a84) sc_clock_pane_t

0xde2b,	// (0x00071c2c) main_fs_bigclock_indicator_pane_ParamLimits

0xde2b,	// (0x00071c2c) main_fs_bigclock_indicator_pane

0xd5a6,	// (0x000713a7) main_fs_bigclock_pane_g1_ParamLimits

0xd5a6,	// (0x000713a7) main_fs_bigclock_pane_g1

0xde37,	// (0x00071c38) main_fs_bigclock_pane_t1_ParamLimits

0xde37,	// (0x00071c38) main_fs_bigclock_pane_t1

0xde49,	// (0x00071c4a) main_fs_bigclock_pane_t2_ParamLimits

0xde49,	// (0x00071c4a) main_fs_bigclock_pane_t2

0xde5d,	// (0x00071c5e) main_fs_bigclock_pane_t3_ParamLimits

0xde5d,	// (0x00071c5e) main_fs_bigclock_pane_t3

0x0002,

0xfe82,	// (0x00073c83) main_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x00073c83) main_fs_bigclock_pane_t

0x2cd3,	// (0x00066ad4) main_fs_bigclock_indicator_pane_g1

0x1eea,	// (0x00065ceb) ncim_query_content_pane_g2_ParamLimits

0x1eea,	// (0x00065ceb) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x00073a11) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x00073a11) ncim_query_content_pane_g

0xd51c,	// (0x0007131d) sc_clock_pane_t4_ParamLimits

0xd51c,	// (0x0007131d) sc_clock_pane_t4

0xe908,	// (0x00072709) main_radioblah_pane

0xe7c9,	// (0x000725ca) cell_call4_button_pane_t1_copy1_ParamLimits

0xe7c9,	// (0x000725ca) cell_call4_button_pane_t1_copy1

0xd1be,	// (0x00070fbf) main_ncimui_pane_t1_ParamLimits

0xd1be,	// (0x00070fbf) main_ncimui_pane_t1

0xd1d8,	// (0x00070fd9) main_ncimui_pane_t2_ParamLimits

0xd1d8,	// (0x00070fd9) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x00073a0a) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x00073a0a) main_ncimui_pane_t

0x222c,	// (0x0006602d) main_radioblah_anim_pane_ParamLimits

0x222c,	// (0x0006602d) main_radioblah_anim_pane

0x223d,	// (0x0006603e) main_radioblah_info_pane_ParamLimits

0x223d,	// (0x0006603e) main_radioblah_info_pane

0x2251,	// (0x00066052) main_radioblah_pane_t1_ParamLimits

0x2251,	// (0x00066052) main_radioblah_pane_t1

0x226d,	// (0x0006606e) main_radioblah_pane_t2_ParamLimits

0x226d,	// (0x0006606e) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x00073aa5) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x00073aa5) main_radioblah_pane_t

0xd71f,	// (0x00071520) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd71f,	// (0x00071520) main_radioblah_rocker_ctrl_pane

0x22b5,	// (0x000660b6) main_radioblah_info_pane_t1_ParamLimits

0x22b5,	// (0x000660b6) main_radioblah_info_pane_t1

0xd764,	// (0x00071565) main_radioblah_info_pane_t2_ParamLimits

0xd764,	// (0x00071565) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x00073aae) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x00073aae) main_radioblah_info_pane_t

0x46ae,	// (0x000684af) main_radioblah_rocker_ctrl_pane_g1

0xd814,	// (0x00071615) main_radioblah_rocker_ctrl_pane_g2

0xd81c,	// (0x0007161d) main_radioblah_rocker_ctrl_pane_g3

0xd824,	// (0x00071625) main_radioblah_rocker_ctrl_pane_g4

0xd82c,	// (0x0007162d) main_radioblah_rocker_ctrl_pane_g5

0xd834,	// (0x00071635) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x00073ab7) main_radioblah_rocker_ctrl_pane_g

0xd17b,	// (0x00070f7c) main_cset_text2_pane_t1_copy1_ParamLimits

0xba36,	// (0x0006f837) cam4_image_uncrop_qvga_pane

0xbb7d,	// (0x0006f97e) vid4_image_uncrop_qcif_pane

0xcd97,	// (0x00070b98) cam6_image_uncrop_qvga_pane_ParamLimits

0xcd97,	// (0x00070b98) cam6_image_uncrop_qvga_pane

0x1b29,	// (0x0006592a) vid6_image_uncrop_qcif_pane_ParamLimits

0x1b29,	// (0x0006592a) vid6_image_uncrop_qcif_pane

0x6c91,	// (0x0006aa92) bg_popup_preview_window_pane_cp03

0x1e9c,	// (0x00065c9d) list_cset_text2_pane

0x1ea4,	// (0x00065ca5) main_cset6_text2_pane_g1

0x1eac,	// (0x00065cad) main_cset6_text2_pane_t1

0x30b0,	// (0x00066eb1) list_cset_text2_pane_t1_ParamLimits

0x30b0,	// (0x00066eb1) list_cset_text2_pane_t1

0xe908,	// (0x00072709) main_radioblah_pane_ParamLimits

0xd47b,	// (0x0007127c) main_mobtv_info_pane_t3_ParamLimits

0xd47b,	// (0x0007127c) main_mobtv_info_pane_t3

0xd70d,	// (0x0007150e) main_radioblah_pane_g1

0xd738,	// (0x00071539) main_radioblah_info_pane_g1

0xd7b9,	// (0x000715ba) main_radioblah_info_pane_t3_ParamLimits

0xd7b9,	// (0x000715ba) main_radioblah_info_pane_t3

0x89be,	// (0x0006c7bf) highlight_cell_cale_month_pane_ParamLimits

0x89be,	// (0x0006c7bf) highlight_cell_cale_month_pane

0x6c91,	// (0x0006aa92) main_phob_fisheye_pane

0x49f3,	// (0x000687f4) scroll_pane_cp0031_ParamLimits

0x49f3,	// (0x000687f4) scroll_pane_cp0031

0x1c37,	// (0x00065a38) wait_bar_pane_cp08_ParamLimits

0xcf3c,	// (0x00070d3d) cset_list_set_pane_copy1_ParamLimits

0x22ef,	// (0x000660f0) highlight_cell_cale_month_pane_g1

0xd83c,	// (0x0007163d) highlight_cell_cale_month_pane_t1

0x1869,	// (0x0006566a) list_gen_pane_cp01

0x1405,	// (0x00065206) scroll_pane_01

0x6304,	// (0x0006a105) list_single_double_fisheye_pane

0x630d,	// (0x0006a10e) list_double_fisheye_pane_g1_ParamLimits

0x630d,	// (0x0006a10e) list_double_fisheye_pane_g1

0x6319,	// (0x0006a11a) list_double_fisheye_pane_g2_ParamLimits

0x6319,	// (0x0006a11a) list_double_fisheye_pane_g2

0x632d,	// (0x0006a12e) list_double_fisheye_pane_g3_ParamLimits

0x632d,	// (0x0006a12e) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x00073ac4) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x00073ac4) list_double_fisheye_pane_g

0x6356,	// (0x0006a157) list_double_fisheye_pane_t1_ParamLimits

0x6356,	// (0x0006a157) list_double_fisheye_pane_t1

0x6371,	// (0x0006a172) list_double_fisheye_pane_t2_ParamLimits

0x6371,	// (0x0006a172) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x00073acf) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x00073acf) list_double_fisheye_pane_t

0x6c91,	// (0x0006aa92) main_call5_pane

0xd542,	// (0x00071343) sc_swipe_pane_ParamLimits

0xd542,	// (0x00071343) sc_swipe_pane

0xd856,	// (0x00071657) call5_image_pane_ParamLimits

0xd856,	// (0x00071657) call5_image_pane

0xd866,	// (0x00071667) call5_swipe_1_pane_ParamLimits

0xd866,	// (0x00071667) call5_swipe_1_pane

0xd872,	// (0x00071673) call5_swipe_2_pane_ParamLimits

0xd872,	// (0x00071673) call5_swipe_2_pane

0xd88c,	// (0x0007168d) popup_call5_audio_first_window_ParamLimits

0xd88c,	// (0x0007168d) popup_call5_audio_first_window

0x4911,	// (0x00068712) call5_swipe_1_pane_g1_ParamLimits

0x4911,	// (0x00068712) call5_swipe_1_pane_g1

0x2300,	// (0x00066101) call5_swipe_1_pane_g2_ParamLimits

0x2300,	// (0x00066101) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x00073ad4) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x00073ad4) call5_swipe_1_pane_g

0x230c,	// (0x0006610d) call5_swipe_1_pane_t1_ParamLimits

0x230c,	// (0x0006610d) call5_swipe_1_pane_t1

0x4911,	// (0x00068712) call5_swipe_2_pane_g1_ParamLimits

0x4911,	// (0x00068712) call5_swipe_2_pane_g1

0x2321,	// (0x00066122) call5_swipe_2_pane_g2_ParamLimits

0x2321,	// (0x00066122) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x00073ad9) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x00073ad9) call5_swipe_2_pane_g

0x232d,	// (0x0006612e) call5_swipe_2_pane_t1_ParamLimits

0x232d,	// (0x0006612e) call5_swipe_2_pane_t1

0x2342,	// (0x00066143) sc_swipe_pane_g1_ParamLimits

0x2342,	// (0x00066143) sc_swipe_pane_g1

0x234f,	// (0x00066150) sc_swipe_pane_g2_ParamLimits

0x234f,	// (0x00066150) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x00073ade) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x00073ade) sc_swipe_pane_g

0x235b,	// (0x0006615c) sc_swipe_pane_t1_ParamLimits

0x235b,	// (0x0006615c) sc_swipe_pane_t1

0x6c91,	// (0x0006aa92) main_cmail_launcher_pane

0xd89a,	// (0x0007169b) aid_size_cell_cmail_l_ParamLimits

0xd89a,	// (0x0007169b) aid_size_cell_cmail_l

0xd8aa,	// (0x000716ab) grid_cmail_l_pane_ParamLimits

0xd8aa,	// (0x000716ab) grid_cmail_l_pane

0xd8ba,	// (0x000716bb) cell_cmail_l_pane_ParamLimits

0xd8ba,	// (0x000716bb) cell_cmail_l_pane

0xd8ce,	// (0x000716cf) cell_cmail_l_pane_g1_ParamLimits

0xd8ce,	// (0x000716cf) cell_cmail_l_pane_g1

0xd8da,	// (0x000716db) cell_cmail_l_pane_t1_ParamLimits

0xd8da,	// (0x000716db) cell_cmail_l_pane_t1

0x2370,	// (0x00066171) cell_cmail_l_pane_t2_ParamLimits

0x2370,	// (0x00066171) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x00073ae3) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x00073ae3) cell_cmail_l_pane_t

0xe908,	// (0x00072709) grid_highlight_pane_cp018_ParamLimits

0xe908,	// (0x00072709) grid_highlight_pane_cp018

0x6da8,	// (0x0006aba9) main2_pane_ParamLimits

0x6da8,	// (0x0006aba9) main2_pane

0xf08a,	// (0x00072e8b) popup_sp_fs_action_menu_bg_pane_g1

0xf092,	// (0x00072e93) popup_sp_fs_action_menu_bg_pane_g2

0xf09a,	// (0x00072e9b) popup_sp_fs_action_menu_bg_pane_g3

0xf0a2,	// (0x00072ea3) popup_sp_fs_action_menu_bg_pane_g4

0xf0aa,	// (0x00072eab) popup_sp_fs_action_menu_bg_pane_g5

0xf0b2,	// (0x00072eb3) popup_sp_fs_action_menu_bg_pane_g6

0xf0ba,	// (0x00072ebb) popup_sp_fs_action_menu_bg_pane_g7

0xf0c2,	// (0x00072ec3) popup_sp_fs_action_menu_bg_pane_g8

0xf0ca,	// (0x00072ecb) popup_sp_fs_action_menu_bg_pane_g9

0xf0d2,	// (0x00072ed3) popup_sp_fs_action_menu_bg_pane_g10

0xf0d2,	// (0x00072ed3) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00072fad) popup_sp_fs_action_menu_bg_pane_g

0x5b45,	// (0x00069946) list_medium_line_x2_t3_g3_g1_ParamLimits

0x5b45,	// (0x00069946) list_medium_line_x2_t3_g3_g1

0x5b51,	// (0x00069952) list_medium_line_x2_t3_g3_g2_ParamLimits

0x5b51,	// (0x00069952) list_medium_line_x2_t3_g3_g2

0x5b5d,	// (0x0006995e) list_medium_line_x2_t3_g3_g3_ParamLimits

0x5b5d,	// (0x0006995e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0007305d) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0007305d) list_medium_line_x2_t3_g3_g

0x5b69,	// (0x0006996a) list_medium_line_x2_t3_g3_t1_ParamLimits

0x5b69,	// (0x0006996a) list_medium_line_x2_t3_g3_t1

0x5b7e,	// (0x0006997f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x5b7e,	// (0x0006997f) list_medium_line_x2_t3_g3_t2

0x5b90,	// (0x00069991) list_medium_line_x2_t3_g3_t3_ParamLimits

0x5b90,	// (0x00069991) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x00073064) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x00073064) list_medium_line_x2_t3_g3_t

0x5b45,	// (0x00069946) list_medium_line_x2_t3_g2_g1_ParamLimits

0x5b45,	// (0x00069946) list_medium_line_x2_t3_g2_g1

0x5b5d,	// (0x0006995e) list_medium_line_x2_t3_g2_g2_ParamLimits

0x5b5d,	// (0x0006995e) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0007306b) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0007306b) list_medium_line_x2_t3_g2_g

0x5ba5,	// (0x000699a6) list_medium_line_x2_t3_g2_t1_ParamLimits

0x5ba5,	// (0x000699a6) list_medium_line_x2_t3_g2_t1

0x5bbb,	// (0x000699bc) list_medium_line_x2_t3_g2_t2_ParamLimits

0x5bbb,	// (0x000699bc) list_medium_line_x2_t3_g2_t2

0x5bcd,	// (0x000699ce) list_medium_line_x2_t3_g2_t3_ParamLimits

0x5bcd,	// (0x000699ce) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x00073070) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x00073070) list_medium_line_x2_t3_g2_t

0x5b45,	// (0x00069946) list_medium_line_x2_t4_g4_g1_ParamLimits

0x5b45,	// (0x00069946) list_medium_line_x2_t4_g4_g1

0x5bea,	// (0x000699eb) list_medium_line_x2_t4_g4_g2_ParamLimits

0x5bea,	// (0x000699eb) list_medium_line_x2_t4_g4_g2

0x5b51,	// (0x00069952) list_medium_line_x2_t4_g4_g3_ParamLimits

0x5b51,	// (0x00069952) list_medium_line_x2_t4_g4_g3

0x5bf6,	// (0x000699f7) list_medium_line_x2_t4_g4_g4_ParamLimits

0x5bf6,	// (0x000699f7) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x00073077) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x00073077) list_medium_line_x2_t4_g4_g

0x5c02,	// (0x00069a03) list_medium_line_x2_t4_g4_t1_ParamLimits

0x5c02,	// (0x00069a03) list_medium_line_x2_t4_g4_t1

0x5c1c,	// (0x00069a1d) list_medium_line_x2_t4_g4_t2_ParamLimits

0x5c1c,	// (0x00069a1d) list_medium_line_x2_t4_g4_t2

0x5c32,	// (0x00069a33) list_medium_line_x2_t4_g4_t3_ParamLimits

0x5c32,	// (0x00069a33) list_medium_line_x2_t4_g4_t3

0x5c47,	// (0x00069a48) list_medium_line_x2_t4_g4_t4_ParamLimits

0x5c47,	// (0x00069a48) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x00073080) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x00073080) list_medium_line_x2_t4_g4_t

0x5b45,	// (0x00069946) list_medium_line_x2_t2_g4_g1_ParamLimits

0x5b45,	// (0x00069946) list_medium_line_x2_t2_g4_g1

0x5bea,	// (0x000699eb) list_medium_line_x2_t2_g4_g2_ParamLimits

0x5bea,	// (0x000699eb) list_medium_line_x2_t2_g4_g2

0x5b51,	// (0x00069952) list_medium_line_x2_t2_g4_g3_ParamLimits

0x5b51,	// (0x00069952) list_medium_line_x2_t2_g4_g3

0x5b5d,	// (0x0006995e) list_medium_line_x2_t2_g4_g4_ParamLimits

0x5b5d,	// (0x0006995e) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x000730e7) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x000730e7) list_medium_line_x2_t2_g4_g

0x5c59,	// (0x00069a5a) list_medium_line_x2_t2_g4_t1_ParamLimits

0x5c59,	// (0x00069a5a) list_medium_line_x2_t2_g4_t1

0x5b90,	// (0x00069991) list_medium_line_x2_t2_g4_t2_ParamLimits

0x5b90,	// (0x00069991) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x000730f0) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x000730f0) list_medium_line_x2_t2_g4_t

0x5b45,	// (0x00069946) list_medium_line_x2_t2_g3_g1_ParamLimits

0x5b45,	// (0x00069946) list_medium_line_x2_t2_g3_g1

0x5b51,	// (0x00069952) list_medium_line_x2_t2_g3_g2_ParamLimits

0x5b51,	// (0x00069952) list_medium_line_x2_t2_g3_g2

0x5b5d,	// (0x0006995e) list_medium_line_x2_t2_g3_g3_ParamLimits

0x5b5d,	// (0x0006995e) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0007305d) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0007305d) list_medium_line_x2_t2_g3_g

0x5c6e,	// (0x00069a6f) list_medium_line_x2_t2_g3_t1_ParamLimits

0x5c6e,	// (0x00069a6f) list_medium_line_x2_t2_g3_t1

0x5b90,	// (0x00069991) list_medium_line_x2_t2_g3_t2_ParamLimits

0x5b90,	// (0x00069991) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x000730f5) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x000730f5) list_medium_line_x2_t2_g3_t

0x8b70,	// (0x0006c971) main_sp_fs_list_pane_ParamLimits

0x8b70,	// (0x0006c971) main_sp_fs_list_pane

0x8b7c,	// (0x0006c97d) sp_fs_scroll_pane_ParamLimits

0x8b7c,	// (0x0006c97d) sp_fs_scroll_pane

0x5c83,	// (0x00069a84) list_medium_line_x2_t3_t1

0x5c93,	// (0x00069a94) list_medium_line_x2_t3_t2

0x5ca1,	// (0x00069aa2) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x00073140) list_medium_line_x2_t3_t

0x5caf,	// (0x00069ab0) list_medium_line_x3_t4_t1

0x5cbf,	// (0x00069ac0) list_medium_line_x3_t4_t2

0x5ccd,	// (0x00069ace) list_medium_line_x3_t4_t3

0x5ca1,	// (0x00069aa2) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x00073147) list_medium_line_x3_t4_t

0x5cdb,	// (0x00069adc) list_medium_line_x4_t5_t1

0x5ceb,	// (0x00069aec) list_medium_line_x4_t5_t2

0x5ccd,	// (0x00069ace) list_medium_line_x4_t5_t3

0x5cf9,	// (0x00069afa) list_medium_line_x4_t5_t4

0x5ca1,	// (0x00069aa2) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x00073150) list_medium_line_x4_t5_t

0x5b45,	// (0x00069946) list_medium_line_t4_g4_g1_ParamLimits

0x5b45,	// (0x00069946) list_medium_line_t4_g4_g1

0x5bf6,	// (0x000699f7) list_medium_line_t4_g4_g2_ParamLimits

0x5bf6,	// (0x000699f7) list_medium_line_t4_g4_g2

0x5d07,	// (0x00069b08) list_medium_line_t4_g4_g3_ParamLimits

0x5d07,	// (0x00069b08) list_medium_line_t4_g4_g3

0x5b5d,	// (0x0006995e) list_medium_line_t4_g4_g4_ParamLimits

0x5b5d,	// (0x0006995e) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x0007315b) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x0007315b) list_medium_line_t4_g4_g

0x5d13,	// (0x00069b14) list_medium_line_t4_g4_t1_ParamLimits

0x5d13,	// (0x00069b14) list_medium_line_t4_g4_t1

0x5d28,	// (0x00069b29) list_medium_line_t4_g4_t2_ParamLimits

0x5d28,	// (0x00069b29) list_medium_line_t4_g4_t2

0x5d3d,	// (0x00069b3e) list_medium_line_t4_g4_t3_ParamLimits

0x5d3d,	// (0x00069b3e) list_medium_line_t4_g4_t3

0x5b90,	// (0x00069991) list_medium_line_t4_g4_t4_ParamLimits

0x5b90,	// (0x00069991) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x00073164) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x00073164) list_medium_line_t4_g4_t

0x8c99,	// (0x0006ca9a) chi_dic_find_pane_g1

0x9be2,	// (0x0006d9e3) main_tport_pane

0x5f8b,	// (0x00069d8c) list_medium_line_plain_t1

0x5f99,	// (0x00069d9a) list_medium_line_t2_g2_g1_ParamLimits

0x5f99,	// (0x00069d9a) list_medium_line_t2_g2_g1

0x5fa5,	// (0x00069da6) list_medium_line_t2_g2_g2_ParamLimits

0x5fa5,	// (0x00069da6) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x00073820) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x00073820) list_medium_line_t2_g2_g

0x5fb1,	// (0x00069db2) list_medium_line_t2_g2_t1_ParamLimits

0x5fb1,	// (0x00069db2) list_medium_line_t2_g2_t1

0x5fcb,	// (0x00069dcc) list_medium_line_t2_g2_t2_ParamLimits

0x5fcb,	// (0x00069dcc) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x00073825) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x00073825) list_medium_line_t2_g2_t

0x61ea,	// (0x00069feb) aid_sp_fs_list_icon_a_sm

0xca7b,	// (0x0007087c) aid_sp_fs_list_icon_d

0x2d79,	// (0x00066b7a) aid_sp_fs_text_primary

0x61f2,	// (0x00069ff3) aid_sp_fs_text_secondary

0x61fb,	// (0x00069ffc) list_medium_line

0x61fb,	// (0x00069ffc) list_medium_line_g2

0x61fb,	// (0x00069ffc) list_medium_line_g3

0x61fb,	// (0x00069ffc) list_medium_line_plain

0x61fb,	// (0x00069ffc) list_medium_line_plain_t2

0x61fb,	// (0x00069ffc) list_medium_line_plain_t3

0x61fb,	// (0x00069ffc) list_medium_line_right_icon

0x61fb,	// (0x00069ffc) list_medium_line_right_iconx2

0x61fb,	// (0x00069ffc) list_medium_line_t2

0x61fb,	// (0x00069ffc) list_medium_line_t2_g2

0x61fb,	// (0x00069ffc) list_medium_line_t2_g3

0x61fb,	// (0x00069ffc) list_medium_line_t2_right_icon

0x61fb,	// (0x00069ffc) list_medium_line_t2_right_iconx2

0x61fb,	// (0x00069ffc) list_medium_line_t3

0x61fb,	// (0x00069ffc) list_medium_line_t3_g2

0x61fb,	// (0x00069ffc) list_medium_line_t3_g3

0x61fb,	// (0x00069ffc) list_medium_line_t3_right_iconx2

0x6204,	// (0x0006a005) list_medium_line_t4_g4

0x620d,	// (0x0006a00e) list_medium_line_x2

0x620d,	// (0x0006a00e) list_medium_line_x2_t2_g2

0x620d,	// (0x0006a00e) list_medium_line_x2_t2_g3

0x620d,	// (0x0006a00e) list_medium_line_x2_t2_g4

0x620d,	// (0x0006a00e) list_medium_line_x2_t3

0x620d,	// (0x0006a00e) list_medium_line_x2_t3_g2

0x620d,	// (0x0006a00e) list_medium_line_x2_t3_g3

0x620d,	// (0x0006a00e) list_medium_line_x2_t3_g4

0x620d,	// (0x0006a00e) list_medium_line_x2_t4_g2

0x620d,	// (0x0006a00e) list_medium_line_x2_t4_g4

0x6216,	// (0x0006a017) list_medium_line_x3

0x6216,	// (0x0006a017) list_medium_line_x3_t4

0x6216,	// (0x0006a017) list_medium_line_x3_t4_g4

0x6204,	// (0x0006a005) list_medium_line_x4_t4

0x6204,	// (0x0006a005) list_medium_line_x4_t4_g7

0x6204,	// (0x0006a005) list_medium_line_x4_t5

0x621f,	// (0x0006a020) list_single_fs_dyc_pane_ParamLimits

0x621f,	// (0x0006a020) list_single_fs_dyc_pane

0x5b45,	// (0x00069946) list_medium_line_x4_t4_g7_g1_ParamLimits

0x5b45,	// (0x00069946) list_medium_line_x4_t4_g7_g1

0x6233,	// (0x0006a034) list_medium_line_x4_t4_g7_g2_ParamLimits

0x6233,	// (0x0006a034) list_medium_line_x4_t4_g7_g2

0x623f,	// (0x0006a040) list_medium_line_x4_t4_g7_g3_ParamLimits

0x623f,	// (0x0006a040) list_medium_line_x4_t4_g7_g3

0x624e,	// (0x0006a04f) list_medium_line_x4_t4_g7_g4_ParamLimits

0x624e,	// (0x0006a04f) list_medium_line_x4_t4_g7_g4

0x625a,	// (0x0006a05b) list_medium_line_x4_t4_g7_g5_ParamLimits

0x625a,	// (0x0006a05b) list_medium_line_x4_t4_g7_g5

0x6269,	// (0x0006a06a) list_medium_line_x4_t4_g7_g6_ParamLimits

0x6269,	// (0x0006a06a) list_medium_line_x4_t4_g7_g6

0x6278,	// (0x0006a079) list_medium_line_x4_t4_g7_g7_ParamLimits

0x6278,	// (0x0006a079) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x000739f0) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x000739f0) list_medium_line_x4_t4_g7_g

0x6284,	// (0x0006a085) list_medium_line_x4_t4_g7_t1_ParamLimits

0x6284,	// (0x0006a085) list_medium_line_x4_t4_g7_t1

0x6299,	// (0x0006a09a) list_medium_line_x4_t4_g7_t2_ParamLimits

0x6299,	// (0x0006a09a) list_medium_line_x4_t4_g7_t2

0x62ae,	// (0x0006a0af) list_medium_line_x4_t4_g7_t3_ParamLimits

0x62ae,	// (0x0006a0af) list_medium_line_x4_t4_g7_t3

0x62c3,	// (0x0006a0c4) list_medium_line_x4_t4_g7_t4_ParamLimits

0x62c3,	// (0x0006a0c4) list_medium_line_x4_t4_g7_t4

0x62d5,	// (0x0006a0d6) list_medium_line_x4_t4_g7_t5_ParamLimits

0x62d5,	// (0x0006a0d6) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x000739ff) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x000739ff) list_medium_line_x4_t4_g7_t

0x62e7,	// (0x0006a0e8) list_single_dyc_row_pane_ParamLimits

0x62e7,	// (0x0006a0e8) list_single_dyc_row_pane

0xd84a,	// (0x0007164b) call5_gesture_pane_ParamLimits

0xd84a,	// (0x0007164b) call5_gesture_pane

0xd87e,	// (0x0007167f) call5_windows_pane_ParamLimits

0xd87e,	// (0x0007167f) call5_windows_pane

0xd8f0,	// (0x000716f1) call5_swipe_1_pane_cp_ParamLimits

0xd8f0,	// (0x000716f1) call5_swipe_1_pane_cp

0xd8fc,	// (0x000716fd) call5_swipe_2_pane_cp_ParamLimits

0xd8fc,	// (0x000716fd) call5_swipe_2_pane_cp

0x0afc,	// (0x000648fd) call5_image_pane_cp

0xd908,	// (0x00071709) popup_call5_audio_first_window_cp_ParamLimits

0xd908,	// (0x00071709) popup_call5_audio_first_window_cp

0x2342,	// (0x00066143) call5_swipe_1_pane_g1_cp_ParamLimits

0x2342,	// (0x00066143) call5_swipe_1_pane_g1_cp

0x2382,	// (0x00066183) call5_swipe_1_pane_g2_cp

0x235b,	// (0x0006615c) call5_swipe_1_pane_t1_cp_ParamLimits

0x235b,	// (0x0006615c) call5_swipe_1_pane_t1_cp

0x2342,	// (0x00066143) call5_swipe_2_pane_g1_cp_ParamLimits

0x2342,	// (0x00066143) call5_swipe_2_pane_g1_cp

0x238a,	// (0x0006618b) call5_swipe_2_pane_g2_cp

0x2392,	// (0x00066193) call5_swipe_2_pane_t1_cp_ParamLimits

0x2392,	// (0x00066193) call5_swipe_2_pane_t1_cp

0xe908,	// (0x00072709) main_sp_fs_email_pane

0x23a7,	// (0x000661a8) main_sp_fs_listscroll_pane_te

0x6393,	// (0x0006a194) popup_sp_fs_action_menu_pane_ParamLimits

0x6393,	// (0x0006a194) popup_sp_fs_action_menu_pane

0x46ae,	// (0x000684af) bg_sp_fs_ctrlbar_pane_g1

0x23f4,	// (0x000661f5) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x23fd,	// (0x000661fe) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x2406,	// (0x00066207) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x46ae,	// (0x000684af) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x00073ae8) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x4493,	// (0x00068294) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x4493,	// (0x00068294) bg_sp_fs_ctrlbar_ddmenu_pane

0x240f,	// (0x00066210) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x240f,	// (0x00066210) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x241b,	// (0x0006621c) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x241b,	// (0x0006621c) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x00073af1) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x00073af1) main_sp_fs_ctrlbar_ddmenu_pane_g

0x2427,	// (0x00066228) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x2427,	// (0x00066228) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x63d7,	// (0x0006a1d8) list_medium_line_t2_right_icon_g1

0x63df,	// (0x0006a1e0) list_medium_line_t2_right_icon_t1

0x63ef,	// (0x0006a1f0) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x00073af6) list_medium_line_t2_right_icon_t

0x4267,	// (0x00068068) bg_sp_fs_ctrlbar_pane_ParamLimits

0x4267,	// (0x00068068) bg_sp_fs_ctrlbar_pane

0xd96d,	// (0x0007176e) main_sp_fs_ctrlbar_button_pane_cp01

0xd975,	// (0x00071776) main_sp_fs_ctrlbar_ddmenu_pane

0x2481,	// (0x00066282) main_sp_fs_ctrlbar_pane_g1

0x248d,	// (0x0006628e) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x00073afb) main_sp_fs_ctrlbar_pane_g

0x2499,	// (0x0006629a) main_sp_fs_ctrlbar_pane_t1

0x63fd,	// (0x0006a1fe) main_sp_fs_ctrlbar_pane

0x6419,	// (0x0006a21a) main_sp_fs_listscroll_pane_te_cp01

0x642a,	// (0x0006a22b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x642a,	// (0x0006a22b) popup_sp_fs_action_menu_pane_cp01

0xe908,	// (0x00072709) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe908,	// (0x00072709) bg_sp_fs_highlight_list_pane_cp01

0x6444,	// (0x0006a245) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x6444,	// (0x0006a245) sp_fs_action_menu_list_gene_pane_g1

0x24bd,	// (0x000662be) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x24bd,	// (0x000662be) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x00073b00) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x00073b00) sp_fs_action_menu_list_gene_pane_g

0x6453,	// (0x0006a254) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x6453,	// (0x0006a254) sp_fs_action_menu_list_gene_pane_t1

0x646b,	// (0x0006a26c) sp_fs_action_menu_list_gene_pane_ParamLimits

0x646b,	// (0x0006a26c) sp_fs_action_menu_list_gene_pane

0x2501,	// (0x00066302) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x2501,	// (0x00066302) popup_sp_fs_action_menu_bg_pane

0x648c,	// (0x0006a28d) sp_fs_action_menu_list_pane_ParamLimits

0x648c,	// (0x0006a28d) sp_fs_action_menu_list_pane

0x252f,	// (0x00066330) sp_fs_scroll_pane_cp01_ParamLimits

0x252f,	// (0x00066330) sp_fs_scroll_pane_cp01

0x64ae,	// (0x0006a2af) list_medium_line_plain_t2_t1

0x64be,	// (0x0006a2bf) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x00073b05) list_medium_line_plain_t2_t

0x64cc,	// (0x0006a2cd) list_medium_line_plain_t3_t1

0x64dc,	// (0x0006a2dd) list_medium_line_plain_t3_t2

0x64ea,	// (0x0006a2eb) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x00073b0a) list_medium_line_plain_t3_t

0x5b45,	// (0x00069946) list_medium_line_x2_t2_g2_g1_ParamLimits

0x5b45,	// (0x00069946) list_medium_line_x2_t2_g2_g1

0x5b5d,	// (0x0006995e) list_medium_line_x2_t2_g2_g2_ParamLimits

0x5b5d,	// (0x0006995e) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0007306b) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0007306b) list_medium_line_x2_t2_g2_g

0x5d13,	// (0x00069b14) list_medium_line_x2_t2_g2_t1_ParamLimits

0x5d13,	// (0x00069b14) list_medium_line_x2_t2_g2_t1

0x5b90,	// (0x00069991) list_medium_line_x2_t2_g2_t2_ParamLimits

0x5b90,	// (0x00069991) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x00073b11) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x00073b11) list_medium_line_x2_t2_g2_t

0x5b45,	// (0x00069946) list_medium_line_x2_t4_g2_g1_ParamLimits

0x5b45,	// (0x00069946) list_medium_line_x2_t4_g2_g1

0x64f8,	// (0x0006a2f9) list_medium_line_x2_t4_g2_g2_ParamLimits

0x64f8,	// (0x0006a2f9) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd15,	// (0x00073b16) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd15,	// (0x00073b16) list_medium_line_x2_t4_g2_g

0x650a,	// (0x0006a30b) list_medium_line_x2_t4_g2_t1_ParamLimits

0x650a,	// (0x0006a30b) list_medium_line_x2_t4_g2_t1

0x6521,	// (0x0006a322) list_medium_line_x2_t4_g2_t2_ParamLimits

0x6521,	// (0x0006a322) list_medium_line_x2_t4_g2_t2

0x6536,	// (0x0006a337) list_medium_line_x2_t4_g2_t3_ParamLimits

0x6536,	// (0x0006a337) list_medium_line_x2_t4_g2_t3

0x5b90,	// (0x00069991) list_medium_line_x2_t4_g2_t4_ParamLimits

0x5b90,	// (0x00069991) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1a,	// (0x00073b1b) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1a,	// (0x00073b1b) list_medium_line_x2_t4_g2_t

0x6548,	// (0x0006a349) list_medium_line_t3_right_iconx2_g1

0x63d7,	// (0x0006a1d8) list_medium_line_t3_right_iconx2_g2

0x6550,	// (0x0006a351) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd23,	// (0x00073b24) list_medium_line_t3_right_iconx2_g

0x6558,	// (0x0006a359) list_medium_line_t3_right_iconx2_t1

0x6568,	// (0x0006a369) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2a,	// (0x00073b2b) list_medium_line_t3_right_iconx2_t

0x5b45,	// (0x00069946) list_medium_line_x3_t4_g4_g1_ParamLimits

0x5b45,	// (0x00069946) list_medium_line_x3_t4_g4_g1

0x5b51,	// (0x00069952) list_medium_line_x3_t4_g4_g2_ParamLimits

0x5b51,	// (0x00069952) list_medium_line_x3_t4_g4_g2

0x5bf6,	// (0x000699f7) list_medium_line_x3_t4_g4_g3_ParamLimits

0x5bf6,	// (0x000699f7) list_medium_line_x3_t4_g4_g3

0x6576,	// (0x0006a377) list_medium_line_x3_t4_g4_g4_ParamLimits

0x6576,	// (0x0006a377) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2f,	// (0x00073b30) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2f,	// (0x00073b30) list_medium_line_x3_t4_g4_g

0x6582,	// (0x0006a383) list_medium_line_x3_t4_g4_t1_ParamLimits

0x6582,	// (0x0006a383) list_medium_line_x3_t4_g4_t1

0x6599,	// (0x0006a39a) list_medium_line_x3_t4_g4_t2_ParamLimits

0x6599,	// (0x0006a39a) list_medium_line_x3_t4_g4_t2

0x5d28,	// (0x00069b29) list_medium_line_x3_t4_g4_t3_ParamLimits

0x5d28,	// (0x00069b29) list_medium_line_x3_t4_g4_t3

0x65ae,	// (0x0006a3af) list_medium_line_x3_t4_g4_t4_ParamLimits

0x65ae,	// (0x0006a3af) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd38,	// (0x00073b39) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd38,	// (0x00073b39) list_medium_line_x3_t4_g4_t

0x65cb,	// (0x0006a3cc) list_single_dyc_row_text_pane_t1_ParamLimits

0x65cb,	// (0x0006a3cc) list_single_dyc_row_text_pane_t1

0x6602,	// (0x0006a403) list_single_dyc_row_text_pane_t2_ParamLimits

0x6602,	// (0x0006a403) list_single_dyc_row_text_pane_t2

0x665c,	// (0x0006a45d) list_single_dyc_row_text_pane_t3_ParamLimits

0x665c,	// (0x0006a45d) list_single_dyc_row_text_pane_t3

0x0002,

0xfd41,	// (0x00073b42) list_single_dyc_row_text_pane_t_ParamLimits

0xfd41,	// (0x00073b42) list_single_dyc_row_text_pane_t

0x666e,	// (0x0006a46f) list_single_dyc_row_pane_g1_ParamLimits

0x666e,	// (0x0006a46f) list_single_dyc_row_pane_g1

0x667a,	// (0x0006a47b) list_single_dyc_row_pane_g2_ParamLimits

0x667a,	// (0x0006a47b) list_single_dyc_row_pane_g2

0x6686,	// (0x0006a487) list_single_dyc_row_pane_g3_ParamLimits

0x6686,	// (0x0006a487) list_single_dyc_row_pane_g3

0x6692,	// (0x0006a493) list_single_dyc_row_pane_g4_ParamLimits

0x6692,	// (0x0006a493) list_single_dyc_row_pane_g4

0x0003,

0xfd48,	// (0x00073b49) list_single_dyc_row_pane_g_ParamLimits

0xfd48,	// (0x00073b49) list_single_dyc_row_pane_g

0x669e,	// (0x0006a49f) list_single_dyc_row_text_pane_ParamLimits

0x669e,	// (0x0006a49f) list_single_dyc_row_text_pane

0x6c91,	// (0x0006aa92) bg_sp_fs_scroll_pane

0x25f9,	// (0x000663fa) thumb_sp_fs_scroll_pane

0x5f99,	// (0x00069d9a) list_medium_line_g1_ParamLimits

0x5f99,	// (0x00069d9a) list_medium_line_g1

0x66bd,	// (0x0006a4be) list_medium_line_t1_ParamLimits

0x66bd,	// (0x0006a4be) list_medium_line_t1

0x5b45,	// (0x00069946) list_medium_line_x2_g1_ParamLimits

0x5b45,	// (0x00069946) list_medium_line_x2_g1

0x5b51,	// (0x00069952) list_medium_line_x2_g2_ParamLimits

0x5b51,	// (0x00069952) list_medium_line_x2_g2

0x0001,

0xfd51,	// (0x00073b52) list_medium_line_x2_g_ParamLimits

0xfd51,	// (0x00073b52) list_medium_line_x2_g

0x66d2,	// (0x0006a4d3) list_medium_line_x2_t1_ParamLimits

0x66d2,	// (0x0006a4d3) list_medium_line_x2_t1

0x5b45,	// (0x00069946) list_medium_line_x3_g1_ParamLimits

0x5b45,	// (0x00069946) list_medium_line_x3_g1

0x5b51,	// (0x00069952) list_medium_line_x3_g2_ParamLimits

0x5b51,	// (0x00069952) list_medium_line_x3_g2

0x0001,

0xfd51,	// (0x00073b52) list_medium_line_x3_g_ParamLimits

0xfd51,	// (0x00073b52) list_medium_line_x3_g

0x66d2,	// (0x0006a4d3) list_medium_line_x3_t1_ParamLimits

0x66d2,	// (0x0006a4d3) list_medium_line_x3_t1

0x262d,	// (0x0006642e) thumb_sp_fs_scroll_pane_g1

0x2636,	// (0x00066437) thumb_sp_fs_scroll_pane_g2

0x263f,	// (0x00066440) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x00073b57) thumb_sp_fs_scroll_pane_g

0x262d,	// (0x0006642e) bg_sp_fs_scroll_pane_g1

0x2636,	// (0x00066437) bg_sp_fs_scroll_pane_g2

0x263f,	// (0x00066440) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x00073b57) bg_sp_fs_scroll_pane_g

0x5b45,	// (0x00069946) list_medium_line_x2_t3_g4_g1_ParamLimits

0x5b45,	// (0x00069946) list_medium_line_x2_t3_g4_g1

0x5bea,	// (0x000699eb) list_medium_line_x2_t3_g4_g2_ParamLimits

0x5bea,	// (0x000699eb) list_medium_line_x2_t3_g4_g2

0x5b51,	// (0x00069952) list_medium_line_x2_t3_g4_g3_ParamLimits

0x5b51,	// (0x00069952) list_medium_line_x2_t3_g4_g3

0x5b5d,	// (0x0006995e) list_medium_line_x2_t3_g4_g4_ParamLimits

0x5b5d,	// (0x0006995e) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x000730e7) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x000730e7) list_medium_line_x2_t3_g4_g

0x66e8,	// (0x0006a4e9) list_medium_line_x2_t3_g4_t1_ParamLimits

0x66e8,	// (0x0006a4e9) list_medium_line_x2_t3_g4_t1

0x66fe,	// (0x0006a4ff) list_medium_line_x2_t3_g4_t2_ParamLimits

0x66fe,	// (0x0006a4ff) list_medium_line_x2_t3_g4_t2

0x5b90,	// (0x00069991) list_medium_line_x2_t3_g4_t3_ParamLimits

0x5b90,	// (0x00069991) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5d,	// (0x00073b5e) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5d,	// (0x00073b5e) list_medium_line_x2_t3_g4_t

0x5f99,	// (0x00069d9a) list_medium_line_g2_g1_ParamLimits

0x5f99,	// (0x00069d9a) list_medium_line_g2_g1

0x5fa5,	// (0x00069da6) list_medium_line_g2_g2_ParamLimits

0x5fa5,	// (0x00069da6) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x00073820) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x00073820) list_medium_line_g2_g

0x6718,	// (0x0006a519) list_medium_line_g2_t1_ParamLimits

0x6718,	// (0x0006a519) list_medium_line_g2_t1

0x5f99,	// (0x00069d9a) list_medium_line_t3_g2_g1_ParamLimits

0x5f99,	// (0x00069d9a) list_medium_line_t3_g2_g1

0x5fa5,	// (0x00069da6) list_medium_line_t3_g2_g2_ParamLimits

0x5fa5,	// (0x00069da6) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x00073820) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x00073820) list_medium_line_t3_g2_g

0x672d,	// (0x0006a52e) list_medium_line_t3_g2_t1_ParamLimits

0x672d,	// (0x0006a52e) list_medium_line_t3_g2_t1

0x6744,	// (0x0006a545) list_medium_line_t3_g2_t2_ParamLimits

0x6744,	// (0x0006a545) list_medium_line_t3_g2_t2

0x6759,	// (0x0006a55a) list_medium_line_t3_g2_t3_ParamLimits

0x6759,	// (0x0006a55a) list_medium_line_t3_g2_t3

0x0002,

0xfd64,	// (0x00073b65) list_medium_line_t3_g2_t_ParamLimits

0xfd64,	// (0x00073b65) list_medium_line_t3_g2_t

0x63d7,	// (0x0006a1d8) list_medium_line_right_icon_g1

0x676e,	// (0x0006a56f) list_medium_line_right_icon_t1

0x5f99,	// (0x00069d9a) list_medium_line_t2_g1_ParamLimits

0x5f99,	// (0x00069d9a) list_medium_line_t2_g1

0x677c,	// (0x0006a57d) list_medium_line_t2_t1_ParamLimits

0x677c,	// (0x0006a57d) list_medium_line_t2_t1

0x6796,	// (0x0006a597) list_medium_line_t2_t2_ParamLimits

0x6796,	// (0x0006a597) list_medium_line_t2_t2

0x0001,

0xfd6b,	// (0x00073b6c) list_medium_line_t2_t_ParamLimits

0xfd6b,	// (0x00073b6c) list_medium_line_t2_t

0x5f99,	// (0x00069d9a) list_medium_line_t3_g1_ParamLimits

0x5f99,	// (0x00069d9a) list_medium_line_t3_g1

0x67ab,	// (0x0006a5ac) list_medium_line_t3_t1_ParamLimits

0x67ab,	// (0x0006a5ac) list_medium_line_t3_t1

0x67c2,	// (0x0006a5c3) list_medium_line_t3_t2_ParamLimits

0x67c2,	// (0x0006a5c3) list_medium_line_t3_t2

0x67d7,	// (0x0006a5d8) list_medium_line_t3_t3_ParamLimits

0x67d7,	// (0x0006a5d8) list_medium_line_t3_t3

0x0002,

0xfd70,	// (0x00073b71) list_medium_line_t3_t_ParamLimits

0xfd70,	// (0x00073b71) list_medium_line_t3_t

0x5f99,	// (0x00069d9a) list_medium_line_g3_g1_ParamLimits

0x5f99,	// (0x00069d9a) list_medium_line_g3_g1

0x67e9,	// (0x0006a5ea) list_medium_line_g3_g2_ParamLimits

0x67e9,	// (0x0006a5ea) list_medium_line_g3_g2

0x5fa5,	// (0x00069da6) list_medium_line_g3_g3_ParamLimits

0x5fa5,	// (0x00069da6) list_medium_line_g3_g3

0x0002,

0xfd77,	// (0x00073b78) list_medium_line_g3_g_ParamLimits

0xfd77,	// (0x00073b78) list_medium_line_g3_g

0x67f5,	// (0x0006a5f6) list_medium_line_g3_t1_ParamLimits

0x67f5,	// (0x0006a5f6) list_medium_line_g3_t1

0x5f99,	// (0x00069d9a) list_medium_line_t2_g3_g1_ParamLimits

0x5f99,	// (0x00069d9a) list_medium_line_t2_g3_g1

0x67e9,	// (0x0006a5ea) list_medium_line_t2_g3_g2_ParamLimits

0x67e9,	// (0x0006a5ea) list_medium_line_t2_g3_g2

0x5fa5,	// (0x00069da6) list_medium_line_t2_g3_g3_ParamLimits

0x5fa5,	// (0x00069da6) list_medium_line_t2_g3_g3

0x0002,

0xfd77,	// (0x00073b78) list_medium_line_t2_g3_g_ParamLimits

0xfd77,	// (0x00073b78) list_medium_line_t2_g3_g

0x680a,	// (0x0006a60b) list_medium_line_t2_g3_t1_ParamLimits

0x680a,	// (0x0006a60b) list_medium_line_t2_g3_t1

0x6824,	// (0x0006a625) list_medium_line_t2_g3_t2_ParamLimits

0x6824,	// (0x0006a625) list_medium_line_t2_g3_t2

0x0001,

0xfd7e,	// (0x00073b7f) list_medium_line_t2_g3_t_ParamLimits

0xfd7e,	// (0x00073b7f) list_medium_line_t2_g3_t

0x5f99,	// (0x00069d9a) list_medium_line_t3_g3_g1_ParamLimits

0x5f99,	// (0x00069d9a) list_medium_line_t3_g3_g1

0x67e9,	// (0x0006a5ea) list_medium_line_t3_g3_g2_ParamLimits

0x67e9,	// (0x0006a5ea) list_medium_line_t3_g3_g2

0x5fa5,	// (0x00069da6) list_medium_line_t3_g3_g3_ParamLimits

0x5fa5,	// (0x00069da6) list_medium_line_t3_g3_g3

0x0002,

0xfd77,	// (0x00073b78) list_medium_line_t3_g3_g_ParamLimits

0xfd77,	// (0x00073b78) list_medium_line_t3_g3_g

0x6839,	// (0x0006a63a) list_medium_line_t3_g3_t1_ParamLimits

0x6839,	// (0x0006a63a) list_medium_line_t3_g3_t1

0x684d,	// (0x0006a64e) list_medium_line_t3_g3_t2_ParamLimits

0x684d,	// (0x0006a64e) list_medium_line_t3_g3_t2

0x685f,	// (0x0006a660) list_medium_line_t3_g3_t3_ParamLimits

0x685f,	// (0x0006a660) list_medium_line_t3_g3_t3

0x0002,

0xfd83,	// (0x00073b84) list_medium_line_t3_g3_t_ParamLimits

0xfd83,	// (0x00073b84) list_medium_line_t3_g3_t

0x6548,	// (0x0006a349) list_medium_line_right_iconx2_g1

0x63d7,	// (0x0006a1d8) list_medium_line_right_iconx2_g2

0x0001,

0xfd8a,	// (0x00073b8b) list_medium_line_right_iconx2_g

0x6871,	// (0x0006a672) list_medium_line_right_iconx2_t1

0x6548,	// (0x0006a349) list_medium_line_t2_right_iconx2_g1

0x63d7,	// (0x0006a1d8) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8a,	// (0x00073b8b) list_medium_line_t2_right_iconx2_g

0x687f,	// (0x0006a680) list_medium_line_t2_right_iconx2_t1

0x688f,	// (0x0006a690) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8f,	// (0x00073b90) list_medium_line_t2_right_iconx2_t

0x689d,	// (0x0006a69e) list_medium_line_x4_t4_t1

0x68ab,	// (0x0006a6ac) list_medium_line_x4_t4_t2

0x68bb,	// (0x0006a6bc) list_medium_line_x4_t4_t3

0x68cb,	// (0x0006a6cc) list_medium_line_x4_t4_t4

0x0003,

0xfd94,	// (0x00073b95) list_medium_line_x4_t4_t

0xd9a8,	// (0x000717a9) tport_appsw_pane_ParamLimits

0xd9a8,	// (0x000717a9) tport_appsw_pane

0xd9b4,	// (0x000717b5) tport_contact_pane_ParamLimits

0xd9b4,	// (0x000717b5) tport_contact_pane

0xd9c4,	// (0x000717c5) tport_listscroll_pane_ParamLimits

0xd9c4,	// (0x000717c5) tport_listscroll_pane

0xd9d4,	// (0x000717d5) cell_tport_appsw_pane_ParamLimits

0xd9d4,	// (0x000717d5) cell_tport_appsw_pane

0x4976,	// (0x00068777) tport_appsw_pane_g1_ParamLimits

0x4976,	// (0x00068777) tport_appsw_pane_g1

0x26a8,	// (0x000664a9) tport_contact_pane_g1

0x1f70,	// (0x00065d71) tport_contact_pane_t1

0x26b1,	// (0x000664b2) tport_contact_pane_t2

0x0001,

0xfd9d,	// (0x00073b9e) tport_contact_pane_t

0x26bf,	// (0x000664c0) list_tport_pane

0x26c8,	// (0x000664c9) scroll_pane_cp_030

0x26d9,	// (0x000664da) cell_tport_appsw_pane_g1

0x26e9,	// (0x000664ea) cell_tport_appsw_pane_t1

0x6c91,	// (0x0006aa92) grid_highlight_pane_cp019

0xd9ff,	// (0x00071800) list_tport_double_graphic_pane_ParamLimits

0xd9ff,	// (0x00071800) list_tport_double_graphic_pane

0xe908,	// (0x00072709) list_highlight_pane_cp023_ParamLimits

0xe908,	// (0x00072709) list_highlight_pane_cp023

0xda11,	// (0x00071812) list_tport_double_graphic_pane_g1_ParamLimits

0xda11,	// (0x00071812) list_tport_double_graphic_pane_g1

0xda1e,	// (0x0007181f) list_tport_double_graphic_pane_t1_ParamLimits

0xda1e,	// (0x0007181f) list_tport_double_graphic_pane_t1

0xda33,	// (0x00071834) list_tport_double_graphic_pane_t2_ParamLimits

0xda33,	// (0x00071834) list_tport_double_graphic_pane_t2

0x0001,

0xfda9,	// (0x00073baa) list_tport_double_graphic_pane_t_ParamLimits

0xfda9,	// (0x00073baa) list_tport_double_graphic_pane_t

0x6c91,	// (0x0006aa92) main_cale_note_pane

0xbdcd,	// (0x0006fbce) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xbdcd,	// (0x0006fbce) cell_vitu2_function_top_wide_pane_cp01

0xd48f,	// (0x00071290) wait_bar_pane_cp05_ParamLimits

0x6c91,	// (0x0006aa92) listscroll_cmail_pane

0x26ff,	// (0x00066500) list_cmail_pane

0xda4f,	// (0x00071850) list_cmail_body_pane

0xda6c,	// (0x0007186d) list_single_cmail_header_caption_pane

0xda91,	// (0x00071892) list_single_cmail_header_detail_pane_ParamLimits

0xda91,	// (0x00071892) list_single_cmail_header_detail_pane

0xdac4,	// (0x000718c5) list_single_cmail_header_caption_pane_t1

0x68db,	// (0x0006a6dc) list_single_cmail_header_detail_pane_g1_ParamLimits

0x68db,	// (0x0006a6dc) list_single_cmail_header_detail_pane_g1

0xdad2,	// (0x000718d3) list_single_cmail_header_detail_pane_g2_ParamLimits

0xdad2,	// (0x000718d3) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdae,	// (0x00073baf) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdae,	// (0x00073baf) list_single_cmail_header_detail_pane_g

0x68f1,	// (0x0006a6f2) list_single_cmail_header_detail_pane_t1_ParamLimits

0x68f1,	// (0x0006a6f2) list_single_cmail_header_detail_pane_t1

0x694f,	// (0x0006a750) list_single_cmail_header_editor_pane_bg_ParamLimits

0x694f,	// (0x0006a750) list_single_cmail_header_editor_pane_bg

0x211f,	// (0x00065f20) list_cmail_body_pane_g1

0x2781,	// (0x00066582) list_cmail_body_pane_t1

0x12eb,	// (0x000650ec) list_single_cmail_header_editor_pane_bg_g1

0x0372,	// (0x00064173) list_single_cmail_header_editor_pane_bg_g1_copy1

0x12fb,	// (0x000650fc) list_single_cmail_header_editor_pane_bg_g1_copy2

0x12f3,	// (0x000650f4) list_single_cmail_header_editor_pane_bg_g1_copy3

0x1538,	// (0x00065339) list_single_cmail_header_editor_pane_bg_g1_copy4

0x131b,	// (0x0006511c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x130b,	// (0x0006510c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x1313,	// (0x00065114) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0352,	// (0x00064153) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xdade,	// (0x000718df) calenote_gesture_pane_ParamLimits

0xdade,	// (0x000718df) calenote_gesture_pane

0xdaf8,	// (0x000718f9) calenote_window_pane_ParamLimits

0xdaf8,	// (0x000718f9) calenote_window_pane

0x278f,	// (0x00066590) popup_note_window_cp01

0xdb10,	// (0x00071911) calenote_swipe_1_pane_ParamLimits

0xdb10,	// (0x00071911) calenote_swipe_1_pane

0xd8fc,	// (0x000716fd) calenote_swipe_2_pane_ParamLimits

0xd8fc,	// (0x000716fd) calenote_swipe_2_pane

0x2342,	// (0x00066143) calenote_swipe_1_pane_g1_ParamLimits

0x2342,	// (0x00066143) calenote_swipe_1_pane_g1

0x234f,	// (0x00066150) calenote_swipe_1_pane_g2_ParamLimits

0x234f,	// (0x00066150) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x00073ade) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x00073ade) calenote_swipe_1_pane_g

0x27a1,	// (0x000665a2) calenote_swipe_1_pane_t1_ParamLimits

0x27a1,	// (0x000665a2) calenote_swipe_1_pane_t1

0x2342,	// (0x00066143) calenote_swipe_2_pane_g1_ParamLimits

0x2342,	// (0x00066143) calenote_swipe_2_pane_g1

0x27c0,	// (0x000665c1) calenote_swipe_2_pane_g2_ParamLimits

0x27c0,	// (0x000665c1) calenote_swipe_2_pane_g2

0x0001,

0xfdba,	// (0x00073bbb) calenote_swipe_2_pane_g_ParamLimits

0xfdba,	// (0x00073bbb) calenote_swipe_2_pane_g

0x27cc,	// (0x000665cd) calenote_swipe_2_pane_t1_ParamLimits

0x27cc,	// (0x000665cd) calenote_swipe_2_pane_t1

0x6c91,	// (0x0006aa92) main_mup_navstr_pane

0xab96,	// (0x0006e997) main_mup3_pane_t7_ParamLimits

0xab96,	// (0x0006e997) main_mup3_pane_t7

0xb55e,	// (0x0006f35f) main_mp4_pane_g6_ParamLimits

0xb55e,	// (0x0006f35f) main_mp4_pane_g6

0xb8d0,	// (0x0006f6d1) main_image3_pane_t4_ParamLimits

0xb8d0,	// (0x0006f6d1) main_image3_pane_t4

0xdb23,	// (0x00071924) popup_navstr_preview_pane_ParamLimits

0xdb23,	// (0x00071924) popup_navstr_preview_pane

0xdb2f,	// (0x00071930) scroll_navstr_pane_ParamLimits

0xdb2f,	// (0x00071930) scroll_navstr_pane

0x6c91,	// (0x0006aa92) bg_popup_preview_window_pane_cp04

0x27f3,	// (0x000665f4) popup_navstr_preview_pane_t1

0xdb3b,	// (0x0007193c) scroll_navstr_pane_g1_ParamLimits

0xdb3b,	// (0x0007193c) scroll_navstr_pane_g1

0xdb48,	// (0x00071949) scroll_navstr_pane_t1_ParamLimits

0xdb48,	// (0x00071949) scroll_navstr_pane_t1

0x2798,	// (0x00066599) bg_button_pane_cp014

0x2798,	// (0x00066599) bg_button_pane_cp030

0x6339,	// (0x0006a13a) list_double_fisheye_pane_g4_ParamLimits

0x6339,	// (0x0006a13a) list_double_fisheye_pane_g4

0x6345,	// (0x0006a146) list_double_fisheye_pane_g5_ParamLimits

0x6345,	// (0x0006a146) list_double_fisheye_pane_g5

0x2707,	// (0x00066508) sp_fs_scroll_pane_cp03

0x2481,	// (0x00066282) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x248d,	// (0x0006628e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x00073afb) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x2499,	// (0x0006629a) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xda45,	// (0x00071846) sp_fs_scroll_pane_cp02

0x0018,	// (0x00063e19) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0018,	// (0x00063e19) popup_sp_fs_calendar_preview_list_single_pane

0x6c91,	// (0x0006aa92) main_cam6_pano_pane

0xe908,	// (0x00072709) main_mup3_pane_ParamLimits

0x6c91,	// (0x0006aa92) main_phacti_pane

0xd364,	// (0x00071165) bg_button_pane_cp11

0xd37c,	// (0x0007117d) main_mobtv_info_pane_g2_ParamLimits

0xd37c,	// (0x0007117d) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x00073a5b) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x00073a5b) main_mobtv_info_pane_g

0xd52e,	// (0x0007132f) sc_clock_pane_t5_ParamLimits

0xd52e,	// (0x0007132f) sc_clock_pane_t5

0xd70d,	// (0x0007150e) main_radioblah_pane_g1_ParamLimits

0x2285,	// (0x00066086) main_radioblah_pane_t3_ParamLimits

0x2285,	// (0x00066086) main_radioblah_pane_t3

0x229d,	// (0x0006609e) main_radioblah_pane_t4_ParamLimits

0x229d,	// (0x0006609e) main_radioblah_pane_t4

0xd72b,	// (0x0007152c) main_radioblah_text_pane_ParamLimits

0xd72b,	// (0x0007152c) main_radioblah_text_pane

0xd738,	// (0x00071539) main_radioblah_info_pane_g1_ParamLimits

0xd7cd,	// (0x000715ce) main_radioblah_info_pane_t4_ParamLimits

0xd7cd,	// (0x000715ce) main_radioblah_info_pane_t4

0xe908,	// (0x00072709) main_sp_fs_calendar_pane

0xdb5a,	// (0x0007195b) main_phacti_pane_g1

0xdb62,	// (0x00071963) phacti_note_pane_ParamLimits

0xdb62,	// (0x00071963) phacti_note_pane

0x280a,	// (0x0006660b) phacti_term_pane_ParamLimits

0x280a,	// (0x0006660b) phacti_term_pane

0x281f,	// (0x00066620) phacti_note_pane_t1_ParamLimits

0x281f,	// (0x00066620) phacti_note_pane_t1

0x6961,	// (0x0006a762) phacti_term_pane_g1

0x6969,	// (0x0006a76a) phacti_term_pane_t1_ParamLimits

0x6969,	// (0x0006a76a) phacti_term_pane_t1

0x2868,	// (0x00066669) popup_sp_fs_calendar_preview_list_single_pane_g1

0x0175,	// (0x00063f76) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc4,	// (0x00073bc5) popup_sp_fs_calendar_preview_list_single_pane_g

0x2870,	// (0x00066671) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x2870,	// (0x00066671) popup_sp_fs_calendar_preview_list_single_pane_t1

0x2885,	// (0x00066686) aid_popup_sp_fs_bg_corner_pane

0x46ae,	// (0x000684af) popup_sp_fs_calendar_preview_bg_pane_g1

0x6c91,	// (0x0006aa92) popup_sp_fs_calendar_preview_bg_pane

0x288d,	// (0x0006668e) popup_sp_fs_calendar_preview_list_pane

0xe908,	// (0x00072709) bg_main_sp_fs_cale_pane_ParamLimits

0xe908,	// (0x00072709) bg_main_sp_fs_cale_pane

0x6993,	// (0x0006a794) listscroll_cale_mrui_pane_ParamLimits

0x6993,	// (0x0006a794) listscroll_cale_mrui_pane

0x69a7,	// (0x0006a7a8) listscroll_sp_fs_schedule_track_pane

0x69b0,	// (0x0006a7b1) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x69b0,	// (0x0006a7b1) main_sp_fs_ctrlbar_pane_cp01

0x28c3,	// (0x000666c4) main_sp_fs_ribbon_pane

0x28cb,	// (0x000666cc) popup_sp_fs_cale_preview_window

0xdba1,	// (0x000719a2) list_single_sp_fs_schedule_track_pane_ParamLimits

0xdba1,	// (0x000719a2) list_single_sp_fs_schedule_track_pane

0x6f22,	// (0x0006ad23) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x6f22,	// (0x0006ad23) bg_sp_fs_highlight_list_pane_cp03

0xdbba,	// (0x000719bb) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xdbba,	// (0x000719bb) list_single_sp_fs_schedule_track_pane_g1

0xdbc6,	// (0x000719c7) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xdbc6,	// (0x000719c7) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc9,	// (0x00073bca) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc9,	// (0x00073bca) list_single_sp_fs_schedule_track_pane_g

0xdbd2,	// (0x000719d3) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xdbd2,	// (0x000719d3) list_single_sp_fs_schedule_track_pane_t1

0xdbea,	// (0x000719eb) sp_fs_schedule_track_pane_ParamLimits

0xdbea,	// (0x000719eb) sp_fs_schedule_track_pane

0x28dd,	// (0x000666de) sp_fs_schedule_track_pane_g1

0x28e5,	// (0x000666e6) sp_fs_schedule_track_pane_g2

0x28ed,	// (0x000666ee) sp_fs_schedule_track_pane_g3

0x28f5,	// (0x000666f6) sp_fs_schedule_track_pane_g4

0x28fd,	// (0x000666fe) sp_fs_schedule_track_pane_g5

0x0004,

0xfdce,	// (0x00073bcf) sp_fs_schedule_track_pane_g

0x12eb,	// (0x000650ec) bg_sp_fs_schedule_viewer_highlight_g1

0x0372,	// (0x00064173) bg_sp_fs_schedule_viewer_highlight_g2

0x12f3,	// (0x000650f4) bg_sp_fs_schedule_viewer_highlight_g3

0x12fb,	// (0x000650fc) bg_sp_fs_schedule_viewer_highlight_g4

0x1538,	// (0x00065339) bg_sp_fs_schedule_viewer_highlight_g5

0x130b,	// (0x0006510c) bg_sp_fs_schedule_viewer_highlight_g6

0x1313,	// (0x00065114) bg_sp_fs_schedule_viewer_highlight_g7

0x131b,	// (0x0006511c) bg_sp_fs_schedule_viewer_highlight_g8

0x0352,	// (0x00064153) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd9,	// (0x00073bda) bg_sp_fs_schedule_viewer_highlight_g

0x6c91,	// (0x0006aa92) bg_main_sp_fs_ribbon_pane

0xdbfa,	// (0x000719fb) main_sp_fs_ribbon_pane_g1

0x2905,	// (0x00066706) main_sp_fs_ribbon_pane_t1

0xdc03,	// (0x00071a04) main_sp_fs_ribbon_pane_t2

0x2914,	// (0x00066715) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdec,	// (0x00073bed) main_sp_fs_ribbon_pane_t

0x2923,	// (0x00066724) main_sp_fs_ribbon_scheduler_pane

0x292b,	// (0x0006672c) bg_main_sp_fs_ribbon_pane_g1

0x2934,	// (0x00066735) bg_main_sp_fs_ribbon_pane_g2

0x293d,	// (0x0006673e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf3,	// (0x00073bf4) bg_main_sp_fs_ribbon_pane_g

0x2945,	// (0x00066746) main_sp_fs_ribbon_scheduler_pane_g1

0x294e,	// (0x0006674f) main_sp_fs_ribbon_scheduler_pane_g2

0x2957,	// (0x00066758) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfa,	// (0x00073bfb) main_sp_fs_ribbon_scheduler_pane_g

0x2960,	// (0x00066761) list_cale_mrui_pane

0xdc12,	// (0x00071a13) sp_fs_scroll_pane_cp07_ParamLimits

0xdc12,	// (0x00071a13) sp_fs_scroll_pane_cp07

0xdc28,	// (0x00071a29) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xdc28,	// (0x00071a29) bg_sp_fs_schedule_viewer_highlight

0x2969,	// (0x0006676a) list_single_sp_fs_schedule_track_pane_cp01

0x2971,	// (0x00066772) list_sp_fs_schedule_track_pane

0x2979,	// (0x0006677a) sp_fs_scroll_pane_cp06_ParamLimits

0x2979,	// (0x0006677a) sp_fs_scroll_pane_cp06

0x46ae,	// (0x000684af) bgmain_sp_fs_calendar_pane_g1

0x69c1,	// (0x0006a7c2) list_single_cale_mrui_pane_ParamLimits

0x69c1,	// (0x0006a7c2) list_single_cale_mrui_pane

0x69e6,	// (0x0006a7e7) list_single_cale_mrui_row_pane_ParamLimits

0x69e6,	// (0x0006a7e7) list_single_cale_mrui_row_pane

0x69f3,	// (0x0006a7f4) list_single_cale_mrui_row_pane_g1_ParamLimits

0x69f3,	// (0x0006a7f4) list_single_cale_mrui_row_pane_g1

0x6a2b,	// (0x0006a82c) list_single_cale_mrui_row_pane_t1_ParamLimits

0x6a2b,	// (0x0006a82c) list_single_cale_mrui_row_pane_t1

0x6a3d,	// (0x0006a83e) list_single_cale_mrui_row_pane_t2_ParamLimits

0x6a3d,	// (0x0006a83e) list_single_cale_mrui_row_pane_t2

0x6aa3,	// (0x0006a8a4) list_single_cale_mrui_row_pane_t3_ParamLimits

0x6aa3,	// (0x0006a8a4) list_single_cale_mrui_row_pane_t3

0x6ad2,	// (0x0006a8d3) list_single_cale_mrui_row_pane_t4_ParamLimits

0x6ad2,	// (0x0006a8d3) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe06,	// (0x00073c07) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe06,	// (0x00073c07) list_single_cale_mrui_row_pane_t

0x6b01,	// (0x0006a902) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x6b01,	// (0x0006a902) list_single_cmail_header_editor_pane_bg_cp01

0x6b21,	// (0x0006a922) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x6b21,	// (0x0006a922) list_single_cmail_header_editor_pane_bg_cp02

0xdc35,	// (0x00071a36) main_radioblah_text_pane_t1_ParamLimits

0xdc35,	// (0x00071a36) main_radioblah_text_pane_t1

0x2a40,	// (0x00066841) cam6_indi_pane_cp01

0x2a48,	// (0x00066849) cam6_mode_pane_cp01

0x2a50,	// (0x00066851) cam6_pano_pane

0x2a59,	// (0x0006685a) cam6_zoom_pane_cp01

0x2a61,	// (0x00066862) cam6_pano_image_pane

0x2a6c,	// (0x0006686d) cam6_pano_pane_g1

0x211f,	// (0x00065f20) cam6_pano_pane_g2

0x2a75,	// (0x00066876) cam6_pano_pane_g3

0x2a7e,	// (0x0006687f) cam6_pano_pane_g4

0x4c41,	// (0x00068a42) cam6_pano_pane_g5

0x2a87,	// (0x00066888) cam6_pano_pane_g6

0x2a91,	// (0x00066892) cam6_pano_pane_g7

0x2a99,	// (0x0006689a) cam6_pano_pane_g8

0x2aa2,	// (0x000668a3) cam6_pano_pane_g9

0x0008,

0xfe0f,	// (0x00073c10) cam6_pano_pane_g

0x6c91,	// (0x0006aa92) main_browser_tag_pane

0x27eb,	// (0x000665ec) grid_navstr_albumart_pane

0x2aad,	// (0x000668ae) cell_navstr_albumart_pane_ParamLimits

0x2aad,	// (0x000668ae) cell_navstr_albumart_pane

0x2ad0,	// (0x000668d1) cell_navstr_albumart_pane_g1

0x4084,	// (0x00067e85) cell_navstr_albumart_pane_g2

0x4094,	// (0x00067e95) cell_navstr_albumart_pane_g3

0x408c,	// (0x00067e8d) cell_navstr_albumart_pane_g4

0x0003,

0xfe22,	// (0x00073c23) cell_navstr_albumart_pane_g

0xdc50,	// (0x00071a51) bt_list_pane_ParamLimits

0xdc50,	// (0x00071a51) bt_list_pane

0xdc70,	// (0x00071a71) bt_list_pane_t1

0xdc7f,	// (0x00071a80) bt_list_pane_t2

0x0001,

0xfe2b,	// (0x00073c2c) bt_list_pane_t

0x6c91,	// (0x0006aa92) main_cale_prevew_pane

0xdc8e,	// (0x00071a8f) popup_cale_preview_window_ParamLimits

0xdc8e,	// (0x00071a8f) popup_cale_preview_window

0xe908,	// (0x00072709) bg_popup_preview_window_pane_cp05_ParamLimits

0xe908,	// (0x00072709) bg_popup_preview_window_pane_cp05

0x2ad8,	// (0x000668d9) list_cale_preview_pane_ParamLimits

0x2ad8,	// (0x000668d9) list_cale_preview_pane

0x2e13,	// (0x00066c14) list_double_cale_preview_pane_ParamLimits

0x2e13,	// (0x00066c14) list_double_cale_preview_pane

0xdca7,	// (0x00071aa8) list_single_cale_preview_pane_ParamLimits

0xdca7,	// (0x00071aa8) list_single_cale_preview_pane

0xdcbd,	// (0x00071abe) list_single_cale_preview_pane_g1

0xdcc5,	// (0x00071ac6) list_single_cale_preview_pane_t1_ParamLimits

0xdcc5,	// (0x00071ac6) list_single_cale_preview_pane_t1

0xdcda,	// (0x00071adb) list_double_cale_preview_pane_g1

0xdce2,	// (0x00071ae3) list_double_cale_preview_pane_t1_ParamLimits

0xdce2,	// (0x00071ae3) list_double_cale_preview_pane_t1

0xdcf7,	// (0x00071af8) list_double_cale_preview_pane_t2_ParamLimits

0xdcf7,	// (0x00071af8) list_double_cale_preview_pane_t2

0x0001,

0xfe30,	// (0x00073c31) list_double_cale_preview_pane_t_ParamLimits

0xfe30,	// (0x00073c31) list_double_cale_preview_pane_t

0x6c91,	// (0x0006aa92) main_ezdial_pane

0xe908,	// (0x00072709) main_sp_fs_email_pane_ParamLimits

0xd916,	// (0x00071717) cmail_ddmenu_btn01_pane_ParamLimits

0xd916,	// (0x00071717) cmail_ddmenu_btn01_pane

0xd933,	// (0x00071734) cmail_ddmenu_btn02_pane_ParamLimits

0xd933,	// (0x00071734) cmail_ddmenu_btn02_pane

0xd951,	// (0x00071752) cmail_ddmenu_btn03_pane_ParamLimits

0xd951,	// (0x00071752) cmail_ddmenu_btn03_pane

0x63fd,	// (0x0006a1fe) main_sp_fs_ctrlbar_pane_ParamLimits

0x6419,	// (0x0006a21a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xda4f,	// (0x00071850) list_cmail_body_pane_ParamLimits

0x2717,	// (0x00066518) bg_button_pane_cp12

0x272c,	// (0x0006652d) list_single_cmail_header_detail_pane_g3_ParamLimits

0x272c,	// (0x0006652d) list_single_cmail_header_detail_pane_g3

0x692b,	// (0x0006a72c) list_single_cmail_header_detail_pane_t2_ParamLimits

0x692b,	// (0x0006a72c) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb5,	// (0x00073bb6) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb5,	// (0x00073bb6) list_single_cmail_header_detail_pane_t

0x697e,	// (0x0006a77f) phacti_term_pane_t2_ParamLimits

0x697e,	// (0x0006a77f) phacti_term_pane_t2

0x0001,

0xfdbf,	// (0x00073bc0) phacti_term_pane_t_ParamLimits

0xfdbf,	// (0x00073bc0) phacti_term_pane_t

0x2ae4,	// (0x000668e5) aid_size_list_single_double

0xdd0f,	// (0x00071b10) popup_ezdial_listscroll_window

0xdd2f,	// (0x00071b30) popup_number_entry_window_cp01

0x0afc,	// (0x000648fd) bg_popup_call_pane_cp09

0x2af0,	// (0x000668f1) ezdial_list_pane

0x2af8,	// (0x000668f9) scroll_pane_cp23

0x4493,	// (0x00068294) bg_button_pane_cp028_ParamLimits

0x4493,	// (0x00068294) bg_button_pane_cp028

0xdd3d,	// (0x00071b3e) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xdd3d,	// (0x00071b3e) cmail_ddmenu_btn01_pane_g1

0xdd4d,	// (0x00071b4e) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xdd4d,	// (0x00071b4e) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe35,	// (0x00073c36) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe35,	// (0x00073c36) cmail_ddmenu_btn01_pane_g

0x2b00,	// (0x00066901) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x2b00,	// (0x00066901) cmail_ddmenu_btn01_pane_t1

0x4267,	// (0x00068068) bg_button_pane_cp029_ParamLimits

0x4267,	// (0x00068068) bg_button_pane_cp029

0xdd4d,	// (0x00071b4e) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xdd4d,	// (0x00071b4e) cmail_ddmenu_btn02_pane_g1

0xdd65,	// (0x00071b66) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xdd65,	// (0x00071b66) cmail_ddmenu_btn02_pane_t1

0x6f22,	// (0x0006ad23) bg_button_pane_cp031_ParamLimits

0x6f22,	// (0x0006ad23) bg_button_pane_cp031

0xdd4d,	// (0x00071b4e) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xdd4d,	// (0x00071b4e) cmail_ddmenu_btn03_pane_g1

0xdd65,	// (0x00071b66) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xdd65,	// (0x00071b66) cmail_ddmenu_btn03_pane_t1

0xb77b,	// (0x0006f57c) cell_dialer2_keypad_pane_t1_ParamLimits

0xb795,	// (0x0006f596) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xb795,	// (0x0006f596) cell_dialer2_keypad_pane_t1_copy1

0xd204,	// (0x00071005) ncimui_group_button_pane

0xe908,	// (0x00072709) main_sp_fs_calendar_pane_ParamLimits

0xda6c,	// (0x0007186d) list_single_cmail_header_caption_pane_ParamLimits

0x188b,	// (0x0006568c) aid_recal_txt_sm_pane

0x6c91,	// (0x0006aa92) mian_recal_day_pane

0x28cb,	// (0x000666cc) popup_sp_fs_cale_preview_window_ParamLimits

0x6c91,	// (0x0006aa92) list_recal_day_pane

0x2b2e,	// (0x0006692f) list_single_recal_day_pane_ParamLimits

0x2b2e,	// (0x0006692f) list_single_recal_day_pane

0x2b40,	// (0x00066941) list_single_recal_day_pane_g1_ParamLimits

0x2b40,	// (0x00066941) list_single_recal_day_pane_g1

0x2b4c,	// (0x0006694d) list_single_recal_day_pane_g2_ParamLimits

0x2b4c,	// (0x0006694d) list_single_recal_day_pane_g2

0x2b5b,	// (0x0006695c) list_single_recal_day_pane_g3_ParamLimits

0x2b5b,	// (0x0006695c) list_single_recal_day_pane_g3

0xdd89,	// (0x00071b8a) list_single_recal_day_pane_g4_ParamLimits

0xdd89,	// (0x00071b8a) list_single_recal_day_pane_g4

0x2b67,	// (0x00066968) list_single_recal_day_pane_g5_ParamLimits

0x2b67,	// (0x00066968) list_single_recal_day_pane_g5

0x2b76,	// (0x00066977) list_single_recal_day_pane_g6_ParamLimits

0x2b76,	// (0x00066977) list_single_recal_day_pane_g6

0x0005,

0xfe44,	// (0x00073c45) list_single_recal_day_pane_g_ParamLimits

0xfe44,	// (0x00073c45) list_single_recal_day_pane_g

0x2b82,	// (0x00066983) list_single_recal_day_pane_t1

0x2b90,	// (0x00066991) list_single_recal_day_pane_t2

0x0001,

0xfe51,	// (0x00073c52) list_single_recal_day_pane_t

0xdd9c,	// (0x00071b9d) ncimui_query_button_pane_ParamLimits

0xdd9c,	// (0x00071b9d) ncimui_query_button_pane

0xddac,	// (0x00071bad) ncimui_query_button_pane_t1_ParamLimits

0xddac,	// (0x00071bad) ncimui_query_button_pane_t1

0x2b9e,	// (0x0006699f) ncimui_query_button_pane_t2_ParamLimits

0x2b9e,	// (0x0006699f) ncimui_query_button_pane_t2

0x0001,

0xfe56,	// (0x00073c57) ncimui_query_button_pane_t_ParamLimits

0xfe56,	// (0x00073c57) ncimui_query_button_pane_t

0xddbf,	// (0x00071bc0) query_button_pane_ParamLimits

0xddbf,	// (0x00071bc0) query_button_pane

0x6c91,	// (0x0006aa92) bg_button_pane_cp0028

0x2bb1,	// (0x000669b2) query_button_pane_t1

0x9be2,	// (0x0006d9e3) main_tport_pane_ParamLimits

0xd97f,	// (0x00071780) bg_popup_window_pane_cp01_ParamLimits

0xd97f,	// (0x00071780) bg_popup_window_pane_cp01

0xd98c,	// (0x0007178d) heading_pane_cp08_ParamLimits

0xd98c,	// (0x0007178d) heading_pane_cp08

0xd99a,	// (0x0007179b) heading_pane_cp07_ParamLimits

0xd99a,	// (0x0007179b) heading_pane_cp07

0x26d9,	// (0x000664da) cell_tport_appsw_pane_g2

0x0002,

0xfda2,	// (0x00073ba3) cell_tport_appsw_pane_g

0x5d70,	// (0x00069b71) input_candi_list_open_g1

0x0547,	// (0x00064348) list_cale_time_pane_g6_ParamLimits

0x0547,	// (0x00064348) list_cale_time_pane_g6

0xa623,	// (0x0006e424) aid_size_touch_calib_1_ParamLimits

0xa623,	// (0x0006e424) aid_size_touch_calib_1

0xa62f,	// (0x0006e430) aid_size_touch_calib_2_ParamLimits

0xa62f,	// (0x0006e430) aid_size_touch_calib_2

0xa63d,	// (0x0006e43e) aid_size_touch_calib_3_ParamLimits

0xa63d,	// (0x0006e43e) aid_size_touch_calib_3

0xa64d,	// (0x0006e44e) aid_size_touch_calib_4_ParamLimits

0xa64d,	// (0x0006e44e) aid_size_touch_calib_4

0xa65b,	// (0x0006e45c) main_touch_calib_button_group_pane_ParamLimits

0xa65b,	// (0x0006e45c) main_touch_calib_button_group_pane

0xa669,	// (0x0006e46a) main_touch_calib_pane_g1_ParamLimits

0xa675,	// (0x0006e476) main_touch_calib_pane_g2_ParamLimits

0xa681,	// (0x0006e482) main_touch_calib_pane_g3_ParamLimits

0xa68d,	// (0x0006e48e) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x00073576) main_touch_calib_pane_g_ParamLimits

0xa699,	// (0x0006e49a) main_touch_calib_pane_t1_ParamLimits

0xa6b0,	// (0x0006e4b1) main_touch_calib_pane_t2_ParamLimits

0xa6c7,	// (0x0006e4c8) main_touch_calib_pane_t3_ParamLimits

0xa6db,	// (0x0006e4dc) main_touch_calib_pane_t4_ParamLimits

0xa6ef,	// (0x0006e4f0) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x0007357f) main_touch_calib_pane_t_ParamLimits

0x4a17,	// (0x00068818) list_single_fp_cale_pane_g3_ParamLimits

0x4a17,	// (0x00068818) list_single_fp_cale_pane_g3

0xe908,	// (0x00072709) bg_button_pane_cp012_ParamLimits

0xe908,	// (0x00072709) bg_vkb2_func_pane_cp03_ParamLimits

0xc53c,	// (0x0007033d) cell_vitu2_function_top_pane_g1_ParamLimits

0xe908,	// (0x00072709) bg_vkb2_func_pane_cp04_ParamLimits

0xd1a2,	// (0x00070fa3) main_ncimui_button_group_pane_ParamLimits

0xd1a2,	// (0x00070fa3) main_ncimui_button_group_pane

0xd1f2,	// (0x00070ff3) main_ncimui_pane_t3_ParamLimits

0xd1f2,	// (0x00070ff3) main_ncimui_pane_t3

0x2801,	// (0x00066602) phacti_button_group_pane

0x2ae4,	// (0x000668e5) aid_size_list_single_double_ParamLimits

0xdd0f,	// (0x00071b10) popup_ezdial_listscroll_window_ParamLimits

0xdd2f,	// (0x00071b30) popup_number_entry_window_cp01_ParamLimits

0xddcc,	// (0x00071bcd) phacti_button_pane_ParamLimits

0xddcc,	// (0x00071bcd) phacti_button_pane

0x6c91,	// (0x0006aa92) bg_button_pane_cp14

0x2bbf,	// (0x000669c0) phacti_button_pane_t1

0xdddd,	// (0x00071bde) main_touch_calib_button_pane_ParamLimits

0xdddd,	// (0x00071bde) main_touch_calib_button_pane

0xeff1,	// (0x00072df2) bg_button_pane_cp18_ParamLimits

0xeff1,	// (0x00072df2) bg_button_pane_cp18

0x2bcd,	// (0x000669ce) main_touch_calib_button_pane_t1_ParamLimits

0x2bcd,	// (0x000669ce) main_touch_calib_button_pane_t1

0x2be3,	// (0x000669e4) main_touch_calib_button_pane_t2_ParamLimits

0x2be3,	// (0x000669e4) main_touch_calib_button_pane_t2

0x0001,

0xfe5b,	// (0x00073c5c) main_touch_calib_button_pane_t_ParamLimits

0xfe5b,	// (0x00073c5c) main_touch_calib_button_pane_t

0x6c91,	// (0x0006aa92) cell_ncimui_button_pane

0x6c91,	// (0x0006aa92) bg_button_pane_cp032

0x2c01,	// (0x00066a02) cell_ncimui_button_pane_t1

0xb7f1,	// (0x0006f5f2) image3_infobar_pane_ParamLimits

0xb7f1,	// (0x0006f5f2) image3_infobar_pane

0xd550,	// (0x00071351) fs_bigclock_status_pane_ParamLimits

0xd550,	// (0x00071351) fs_bigclock_status_pane

0xd55d,	// (0x0007135e) main_fs_bigclock_clock_pane_ParamLimits

0xd55d,	// (0x0007135e) main_fs_bigclock_clock_pane

0xd581,	// (0x00071382) main_fs_bigclock_indi_pane_ParamLimits

0xd581,	// (0x00071382) main_fs_bigclock_indi_pane

0xd5b4,	// (0x000713b5) main_fs_bigclock_swipe_pane_ParamLimits

0xd5b4,	// (0x000713b5) main_fs_bigclock_swipe_pane

0x6c91,	// (0x0006aa92) main_fs_clock_dumped_data

0xd5e6,	// (0x000713e7) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd5e6,	// (0x000713e7) list_single_fs_bigclock_indicator_pane_g1

0xd607,	// (0x00071408) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd607,	// (0x00071408) list_single_fs_bigclock_indicator_pane_g2

0xd621,	// (0x00071422) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd621,	// (0x00071422) list_single_fs_bigclock_indicator_pane_g3

0xd63b,	// (0x0007143c) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd63b,	// (0x0007143c) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x00073a8f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x00073a8f) list_single_fs_bigclock_indicator_pane_g

0xd661,	// (0x00071462) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd661,	// (0x00071462) list_single_fs_bigclock_indicator_pane_t1

0xd689,	// (0x0007148a) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd689,	// (0x0007148a) list_single_fs_bigclock_indicator_pane_t2

0xd6b1,	// (0x000714b2) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xd6b1,	// (0x000714b2) list_single_fs_bigclock_indicator_pane_t3

0xd6d9,	// (0x000714da) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xd6d9,	// (0x000714da) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x00073a9a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x00073a9a) list_single_fs_bigclock_indicator_pane_t

0x2c0f,	// (0x00066a10) image3_infobar_fav_pane_ParamLimits

0x2c0f,	// (0x00066a10) image3_infobar_fav_pane

0x2c1f,	// (0x00066a20) image3_infobar_loc_pane_ParamLimits

0x2c1f,	// (0x00066a20) image3_infobar_loc_pane

0x2c33,	// (0x00066a34) image3_infobar_time_pane_ParamLimits

0x2c33,	// (0x00066a34) image3_infobar_time_pane

0x46ae,	// (0x000684af) image3_infobar_time_pane_g1

0x2c43,	// (0x00066a44) image3_infobar_time_pane_t1

0x46ae,	// (0x000684af) image3_infobar_loc_pane_g1

0x2c51,	// (0x00066a52) image3_infobar_loc_pane_g2

0x0001,

0xfe60,	// (0x00073c61) image3_infobar_loc_pane_g

0x2c59,	// (0x00066a5a) image3_infobar_loc_pane_t1

0x46ae,	// (0x000684af) image3_infobar_fav_pane_g1

0x2c67,	// (0x00066a68) image3_infobar_fav_pane_g2

0x0001,

0xfe65,	// (0x00073c66) image3_infobar_fav_pane_g

0x2c6f,	// (0x00066a70) fs_bigclock_status_battery_pane

0x2c78,	// (0x00066a79) fs_bigclock_status_signal_pane

0x2c81,	// (0x00066a82) fs_bigclock_status_title_pane

0x2c8a,	// (0x00066a8b) fs_bigclock_status_signal_pane_g1

0x2c93,	// (0x00066a94) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6a,	// (0x00073c6b) fs_bigclock_status_signal_pane_g

0x2c9b,	// (0x00066a9c) fs_bigclock_status_battery_pane_g1

0x2ca4,	// (0x00066aa5) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6f,	// (0x00073c70) fs_bigclock_status_battery_pane_g

0x2cac,	// (0x00066aad) fs_bigclock_status_title_pane_t1

0x46ae,	// (0x000684af) main_fs_bigclock_clock_pane_g1

0x2cba,	// (0x00066abb) main_fs_bigclock_clock_pane_g2

0x2cba,	// (0x00066abb) main_fs_bigclock_clock_pane_g3

0x2cba,	// (0x00066abb) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe74,	// (0x00073c75) main_fs_bigclock_clock_pane_g

0xddef,	// (0x00071bf0) main_fs_bigclock_clock_pane_t1

0xddfd,	// (0x00071bfe) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7d,	// (0x00073c7e) main_fs_bigclock_clock_pane_t

0x2cc2,	// (0x00066ac3) list_single_fs_bigclock_indicator_pane_ParamLimits

0x2cc2,	// (0x00066ac3) list_single_fs_bigclock_indicator_pane

0xde0c,	// (0x00071c0d) list_single_fs_bigclock_pane_ParamLimits

0xde0c,	// (0x00071c0d) list_single_fs_bigclock_pane

0x2cdc,	// (0x00066add) main_fs_bigclock_indicator_pane_t1

0x2ceb,	// (0x00066aec) list_single_fs_bigclock_pane_g1

0x2cf3,	// (0x00066af4) list_single_fs_bigclock_pane_t1

0x46ae,	// (0x000684af) main_fs_bigclock_swipe_pane_g1

0x2d33,	// (0x00066b34) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8e,	// (0x00073c8f) main_fs_bigclock_swipe_pane_g

0x2d3b,	// (0x00066b3c) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x2d3b,	// (0x00066b3c) main_fs_bigclock_swipe_pane_t1

0x8b88,	// (0x0006c989) call_type_pane_ParamLimits

0x6c91,	// (0x0006aa92) main_btmg_pane

0x6a1f,	// (0x0006a820) list_single_cale_mrui_row_pane_g2_ParamLimits

0x6a1f,	// (0x0006a820) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe01,	// (0x00073c02) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe01,	// (0x00073c02) list_single_cale_mrui_row_pane_g

0x2b1e,	// (0x0006691f) list_recal_vselct_arw_lo_pane

0x2b26,	// (0x00066927) list_recal_vselct_arw_up_pane

0x1882,	// (0x00065683) list_recal_vselct_pane

0x2d58,	// (0x00066b59) btmg_button_pane

0xde6f,	// (0x00071c70) main_btmg_pane_g1

0x6c91,	// (0x0006aa92) bg_button_pane_cp044

0x2d62,	// (0x00066b63) btmg_button_pane_t1

0x425f,	// (0x00068060) aid_listscroll_gen

0xe908,	// (0x00072709) main_cntbar_detail_pane

0x26f7,	// (0x000664f8) list_cmail_folder_pane

0x2707,	// (0x00066508) sp_fs_scroll_pane_cp03_ParamLimits

0x6b3d,	// (0x0006a93e) list_single_fs_dyc_pane_cp01_ParamLimits

0x6b3d,	// (0x0006a93e) list_single_fs_dyc_pane_cp01

0x2d70,	// (0x00066b71) aid_size_cmail_indent

0xde77,	// (0x00071c78) list_single_dyc_row_pane_cp01

0xdea0,	// (0x00071ca1) cntbar_detail_list_pane_ParamLimits

0xdea0,	// (0x00071ca1) cntbar_detail_list_pane

0xdeda,	// (0x00071cdb) main_cntbar_detail_cont_pane_ParamLimits

0xdeda,	// (0x00071cdb) main_cntbar_detail_cont_pane

0x8b7c,	// (0x0006c97d) scroll_pane_cp032_ParamLimits

0x8b7c,	// (0x0006c97d) scroll_pane_cp032

0xdee6,	// (0x00071ce7) cntbar_detail_list_event_pane_ParamLimits

0xdee6,	// (0x00071ce7) cntbar_detail_list_event_pane

0xdeac,	// (0x00071cad) cntbar_detail_list_shct_pane

0x03c0,	// (0x000641c1) aid_list_gen

0x2d82,	// (0x00066b83) aid_scroll

0x2d8b,	// (0x00066b8c) aid_size_touch_scroll_bar

0x6b5f,	// (0x0006a960) aid_list_double

0x2d94,	// (0x00066b95) aid_list_single

0xdefa,	// (0x00071cfb) aid_list_single_lg

0x6b68,	// (0x0006a969) aid_list_z_g_a_sm

0xdf03,	// (0x00071d04) aid_list_z_g_d

0x6b70,	// (0x0006a971) aid_txt_z_prm

0x6b7e,	// (0x0006a97f) aid_txt_z_prm_cp01

0x6b8c,	// (0x0006a98d) aid_txt_z_sec

0xdf0b,	// (0x00071d0c) main_cntbar_detail_cont_pane_g1_ParamLimits

0xdf0b,	// (0x00071d0c) main_cntbar_detail_cont_pane_g1

0xdf18,	// (0x00071d19) main_cntbar_detail_cont_pane_g2_ParamLimits

0xdf18,	// (0x00071d19) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe93,	// (0x00073c94) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe93,	// (0x00073c94) main_cntbar_detail_cont_pane_g

0x2dbb,	// (0x00066bbc) main_cntbar_detail_cont_pane_t1

0x2dc9,	// (0x00066bca) main_cntbar_detail_cont_pane_t2

0x2dd7,	// (0x00066bd8) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe98,	// (0x00073c99) main_cntbar_detail_cont_pane_t

0xdf24,	// (0x00071d25) cell_cntbar_detail_list_shct_pane_ParamLimits

0xdf24,	// (0x00071d25) cell_cntbar_detail_list_shct_pane

0x2de5,	// (0x00066be6) cntbar_detail_list_shct_pane_g1

0x2dee,	// (0x00066bef) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9f,	// (0x00073ca0) cntbar_detail_list_shct_pane_g

0xdf38,	// (0x00071d39) cntbar_detail_list_event_pane_g1_ParamLimits

0xdf38,	// (0x00071d39) cntbar_detail_list_event_pane_g1

0xdf44,	// (0x00071d45) cntbar_detail_list_event_pane_g2_ParamLimits

0xdf44,	// (0x00071d45) cntbar_detail_list_event_pane_g2

0x0005,

0xfea4,	// (0x00073ca5) cntbar_detail_list_event_pane_g_ParamLimits

0xfea4,	// (0x00073ca5) cntbar_detail_list_event_pane_g

0xdfb0,	// (0x00071db1) cntbar_detail_list_event_pane_t1_ParamLimits

0xdfb0,	// (0x00071db1) cntbar_detail_list_event_pane_t1

0xdfc5,	// (0x00071dc6) cntbar_detail_list_event_pane_t2_ParamLimits

0xdfc5,	// (0x00071dc6) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb1,	// (0x00073cb2) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb1,	// (0x00073cb2) cntbar_detail_list_event_pane_t

0x46ae,	// (0x000684af) cell_cntbar_detail_list_shct_pane_g1

0x8f22,	// (0x0006cd23) navi_pane_mv_g3

0xe908,	// (0x00072709) main_cntbar_detail_pane_ParamLimits

0x6c91,	// (0x0006aa92) main_notif_wgt_pane

0xb4a5,	// (0x0006f2a6) aid_tch_main_mp4_pane_g4

0xb6da,	// (0x0006f4db) popup_slider_window_cp02

0x2b15,	// (0x00066916) list_recal_day_event_pane

0xde80,	// (0x00071c81) cntbar_detail_btn_pane_ParamLimits

0xde80,	// (0x00071c81) cntbar_detail_btn_pane

0xde90,	// (0x00071c91) cntbar_detail_btn_pane_cp01_ParamLimits

0xde90,	// (0x00071c91) cntbar_detail_btn_pane_cp01

0xdeac,	// (0x00071cad) cntbar_detail_list_shct_pane_ParamLimits

0xdeb8,	// (0x00071cb9) cntbar_detail_pane_g1_ParamLimits

0xdeb8,	// (0x00071cb9) cntbar_detail_pane_g1

0xdec4,	// (0x00071cc5) cntbar_detail_pane_t1_ParamLimits

0xdec4,	// (0x00071cc5) cntbar_detail_pane_t1

0xdf50,	// (0x00071d51) cntbar_detail_list_event_pane_g3_ParamLimits

0xdf50,	// (0x00071d51) cntbar_detail_list_event_pane_g3

0xdf68,	// (0x00071d69) cntbar_detail_list_event_pane_g4_ParamLimits

0xdf68,	// (0x00071d69) cntbar_detail_list_event_pane_g4

0xdf80,	// (0x00071d81) cntbar_detail_list_event_pane_g5_ParamLimits

0xdf80,	// (0x00071d81) cntbar_detail_list_event_pane_g5

0xdf98,	// (0x00071d99) cntbar_detail_list_event_pane_g6_ParamLimits

0xdf98,	// (0x00071d99) cntbar_detail_list_event_pane_g6

0xdfda,	// (0x00071ddb) cntbar_detail_list_event_pane_t3_ParamLimits

0xdfda,	// (0x00071ddb) cntbar_detail_list_event_pane_t3

0xdfec,	// (0x00071ded) popup_notif_wgt_window_ParamLimits

0xdfec,	// (0x00071ded) popup_notif_wgt_window

0xdffc,	// (0x00071dfd) popup_submenu_window_cp01_ParamLimits

0xdffc,	// (0x00071dfd) popup_submenu_window_cp01

0x0afc,	// (0x000648fd) bg_popup_window_pane_cp10

0x2df7,	// (0x00066bf8) listscroll_notif_wgt_pane

0x2e01,	// (0x00066c02) list_notif_wgt_window

0x2e0a,	// (0x00066c0b) scroll_pane_cp033

0x2e13,	// (0x00066c14) list_notif_wgt_row_pane_ParamLimits

0x2e13,	// (0x00066c14) list_notif_wgt_row_pane

0x2e25,	// (0x00066c26) aid_size_list_notif_wgt_del

0x2e2e,	// (0x00066c2f) list_notif_wgt_row_pane_g1

0x2e36,	// (0x00066c37) list_notif_wgt_row_pane_g2

0x2e3e,	// (0x00066c3f) list_notif_wgt_row_pane_g3

0x0002,

0xfeb8,	// (0x00073cb9) list_notif_wgt_row_pane_g

0x2e47,	// (0x00066c48) list_notif_wgt_row_pane_t1

0x2e55,	// (0x00066c56) list_notif_wgt_row_pane_t2

0x2e63,	// (0x00066c64) list_notif_wgt_row_pane_t3

0x0002,

0xfebf,	// (0x00073cc0) list_notif_wgt_row_pane_t

0x156a,	// (0x0006536b) list_recal_day_event_pane_g1

0x2e71,	// (0x00066c72) list_recal_day_event_pane_t1

0x6c91,	// (0x0006aa92) bg_button_pane_cp045

0x2e80,	// (0x00066c81) cntbar_detail_btn_pane_t1

0x4267,	// (0x00068068) main_callh_pane_ParamLimits

0x4267,	// (0x00068068) main_callh_pane

0x6c91,	// (0x0006aa92) main_coverflow0_pane

0x6c91,	// (0x0006aa92) main_wgtman_pane

0xd5cc,	// (0x000713cd) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xd5cc,	// (0x000713cd) main_fs_bigclock_unlock_btn_pane

0x26d1,	// (0x000664d2) bg_button_pane_cp16

0x26e1,	// (0x000664e2) cell_tport_appsw_pane_g3

0xe00a,	// (0x00071e0b) cf0_flow_pane_ParamLimits

0xe00a,	// (0x00071e0b) cf0_flow_pane

0x2e8e,	// (0x00066c8f) listscroll_cf0_pane

0x2e97,	// (0x00066c98) main_cf0_pane_g1

0xe019,	// (0x00071e1a) main_cf0_pane_t1_ParamLimits

0xe019,	// (0x00071e1a) main_cf0_pane_t1

0xe02d,	// (0x00071e2e) main_cf0_pane_t2_ParamLimits

0xe02d,	// (0x00071e2e) main_cf0_pane_t2

0x0001,

0xfec6,	// (0x00073cc7) main_cf0_pane_t_ParamLimits

0xfec6,	// (0x00073cc7) main_cf0_pane_t

0x2ea1,	// (0x00066ca2) scroll_pane_cp11

0xe041,	// (0x00071e42) cf0_flow_pane_g1

0xe049,	// (0x00071e4a) cf0_flow_pane_g2

0x0001,

0xfecb,	// (0x00073ccc) cf0_flow_pane_g

0xe051,	// (0x00071e52) cf0_flow_pane_t1

0x6c91,	// (0x0006aa92) main_call6_pane

0x6c91,	// (0x0006aa92) main_calllock_pane

0xe05f,	// (0x00071e60) call6_btn_grp_pane_ParamLimits

0xe05f,	// (0x00071e60) call6_btn_grp_pane

0xe06e,	// (0x00071e6f) call6_pane_g1_ParamLimits

0xe06e,	// (0x00071e6f) call6_pane_g1

0xe07d,	// (0x00071e7e) popup_call6_1st_window_ParamLimits

0xe07d,	// (0x00071e7e) popup_call6_1st_window

0xe08b,	// (0x00071e8c) popup_call6_2nd_window_ParamLimits

0xe08b,	// (0x00071e8c) popup_call6_2nd_window

0xe099,	// (0x00071e9a) cell_call6_btn_pane_ParamLimits

0xe099,	// (0x00071e9a) cell_call6_btn_pane

0x0afc,	// (0x000648fd) bg_popup_call2_in_pane_cp03

0x2eac,	// (0x00066cad) popup_call6_1st_window_g1

0x2eb4,	// (0x00066cb5) popup_call6_1st_window_g2

0x2ebc,	// (0x00066cbd) popup_call6_1st_window_g3

0x0002,

0xfed0,	// (0x00073cd1) popup_call6_1st_window_g

0x2ec4,	// (0x00066cc5) popup_call6_1st_window_t1

0x2ed3,	// (0x00066cd4) popup_call6_1st_window_t2

0x2ee3,	// (0x00066ce4) popup_call6_1st_window_t3

0x0002,

0xfed7,	// (0x00073cd8) popup_call6_1st_window_t

0x0afc,	// (0x000648fd) bg_popup_call2_in_pane_cp04

0x2eac,	// (0x00066cad) popup_call6_2nd_window_g1

0x2eb4,	// (0x00066cb5) popup_call6_2nd_window_g2

0x2ebc,	// (0x00066cbd) popup_call6_2nd_window_g3

0x0002,

0xfed0,	// (0x00073cd1) popup_call6_2nd_window_g

0x2ec4,	// (0x00066cc5) popup_call6_2nd_window_t1

0x6c91,	// (0x0006aa92) bg_button_pane_cp15

0x2ef3,	// (0x00066cf4) cell_call6_btn_pane_g1

0x2efc,	// (0x00066cfd) cell_call6_btn_pane_t1

0xe0a8,	// (0x00071ea9) listscroll_wgtman_pane_ParamLimits

0xe0a8,	// (0x00071ea9) listscroll_wgtman_pane

0xe0c6,	// (0x00071ec7) wgtman_btn_pane_ParamLimits

0xe0c6,	// (0x00071ec7) wgtman_btn_pane

0x09b3,	// (0x000647b4) aid_scroll_copy1

0x2f0b,	// (0x00066d0c) list_wgtman_pane

0xe0fb,	// (0x00071efc) wgtman_btn_pane_g1_ParamLimits

0xe0fb,	// (0x00071efc) wgtman_btn_pane_g1

0xe123,	// (0x00071f24) wgtman_btn_pane_t1_ParamLimits

0xe123,	// (0x00071f24) wgtman_btn_pane_t1

0x2f15,	// (0x00066d16) wgtman_btn_pane_t2_ParamLimits

0x2f15,	// (0x00066d16) wgtman_btn_pane_t2

0x0001,

0xfede,	// (0x00073cdf) wgtman_btn_pane_t_ParamLimits

0xfede,	// (0x00073cdf) wgtman_btn_pane_t

0xe15a,	// (0x00071f5b) listrow_wgtman_pane_ParamLimits

0xe15a,	// (0x00071f5b) listrow_wgtman_pane

0xe175,	// (0x00071f76) listrow_wgtman_pane_g1

0xe17e,	// (0x00071f7f) listrow_wgtman_pane_g2

0x0001,

0xfee3,	// (0x00073ce4) listrow_wgtman_pane_g

0x6b9a,	// (0x0006a99b) listrow_wgtman_pane_t1

0x6ba8,	// (0x0006a9a9) listrow_wgtman_pane_t2

0x0001,

0xfee8,	// (0x00073ce9) listrow_wgtman_pane_t

0xe188,	// (0x00071f89) wait_bar_pane_cp09

0x2f2c,	// (0x00066d2d) main_calllock_btn_pane

0x2f36,	// (0x00066d37) main_calllock_pane_g1

0x6c91,	// (0x0006aa92) bg_button_pane_cp17

0x2f42,	// (0x00066d43) main_calllock_btn_pane_g1

0x2f4b,	// (0x00066d4c) main_calllock_btn_pane_t1

0x6c91,	// (0x0006aa92) main_dialer3_pane

0x6c91,	// (0x0006aa92) main_fmrd2_pane

0x46ae,	// (0x000684af) main_fs_bigclock_unlock_btn_pane_g1

0x2f62,	// (0x00066d63) main_fs_bigclock_unlock_btn_pane_t1

0xe190,	// (0x00071f91) area_fmrd2_info_pane_ParamLimits

0xe190,	// (0x00071f91) area_fmrd2_info_pane

0xe19e,	// (0x00071f9f) area_fmrd2_visual_pane_ParamLimits

0xe19e,	// (0x00071f9f) area_fmrd2_visual_pane

0xe1ac,	// (0x00071fad) fmrd2_indi_pane_ParamLimits

0xe1ac,	// (0x00071fad) fmrd2_indi_pane

0xe1b9,	// (0x00071fba) area_fmrd2_visual_pane_g1

0xe1c1,	// (0x00071fc2) area_fmrd2_visual_pane_t1

0xe1d1,	// (0x00071fd2) area_fmrd2_visual_pane_t2

0xe1e1,	// (0x00071fe2) area_fmrd2_visual_pane_t3

0x0002,

0xfef2,	// (0x00073cf3) area_fmrd2_visual_pane_t

0xe1f1,	// (0x00071ff2) area_fmrd2_info_pane_g1

0xe1f9,	// (0x00071ffa) area_fmrd2_info_pane_t1

0xe209,	// (0x0007200a) area_fmrd2_info_pane_t2

0xe219,	// (0x0007201a) area_fmrd2_info_pane_t3

0xe229,	// (0x0007202a) area_fmrd2_info_pane_t4

0x0003,

0xfef9,	// (0x00073cfa) area_fmrd2_info_pane_t

0xe237,	// (0x00072038) fmrd2_indi_pane_t1

0xe247,	// (0x00072048) fmrd2_indi_pane_t2

0xe257,	// (0x00072058) fmrd2_indi_pane_t3

0x0002,

0xff02,	// (0x00073d03) fmrd2_indi_pane_t

0xd64a,	// (0x0007144b) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd64a,	// (0x0007144b) list_single_fs_bigclock_indicator_pane_g5

0xd6ee,	// (0x000714ef) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xd6ee,	// (0x000714ef) list_single_fs_bigclock_indicator_pane_t5

0xdb78,	// (0x00071979) aid_cell_bcale_month_pane_ParamLimits

0xdb78,	// (0x00071979) aid_cell_bcale_month_pane

0xdb84,	// (0x00071985) bcale_month_pane_ParamLimits

0xdb84,	// (0x00071985) bcale_month_pane

0xdb92,	// (0x00071993) bcale_preview_pane_ParamLimits

0xdb92,	// (0x00071993) bcale_preview_pane

0x2cf3,	// (0x00066af4) list_single_fs_bigclock_pane_t1_ParamLimits

0x2d0f,	// (0x00066b10) list_single_fs_bigclock_pane_t2_ParamLimits

0x2d0f,	// (0x00066b10) list_single_fs_bigclock_pane_t2

0x0001,

0xfe89,	// (0x00073c8a) list_single_fs_bigclock_pane_t_ParamLimits

0xfe89,	// (0x00073c8a) list_single_fs_bigclock_pane_t

0x2f5a,	// (0x00066d5b) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeed,	// (0x00073cee) main_fs_bigclock_unlock_btn_pane_g

0xe265,	// (0x00072066) aid_dia3_key_size_ParamLimits

0xe265,	// (0x00072066) aid_dia3_key_size

0xe271,	// (0x00072072) aid_dia3_listrow_size_ParamLimits

0xe271,	// (0x00072072) aid_dia3_listrow_size

0xe281,	// (0x00072082) dia3_keypad_fun_pane_ParamLimits

0xe281,	// (0x00072082) dia3_keypad_fun_pane

0xe293,	// (0x00072094) dia3_keypad_num_pane_ParamLimits

0xe293,	// (0x00072094) dia3_keypad_num_pane

0xe2a5,	// (0x000720a6) dia3_listscroll_pane_ParamLimits

0xe2a5,	// (0x000720a6) dia3_listscroll_pane

0xe2b3,	// (0x000720b4) dia3_numentry_pane_ParamLimits

0xe2b3,	// (0x000720b4) dia3_numentry_pane

0x2f70,	// (0x00066d71) dia3_list_pane

0x2f7b,	// (0x00066d7c) scroll_pane_cp12

0x6c91,	// (0x0006aa92) bg_dia3_numentry_pane

0xe2c1,	// (0x000720c2) dia3_numentry_pane_t1

0xe2d0,	// (0x000720d1) cell_dia3_key_num_pane

0xe2d8,	// (0x000720d9) cell_dia3_key0_fun_pane_ParamLimits

0xe2d8,	// (0x000720d9) cell_dia3_key0_fun_pane

0xe2e5,	// (0x000720e6) cell_dia3_key1_fun_pane_ParamLimits

0xe2e5,	// (0x000720e6) cell_dia3_key1_fun_pane

0xe2f2,	// (0x000720f3) dia3_listrow_pane

0x1f8b,	// (0x00065d8c) bg_dia3_numentry_pane_g1

0x6c91,	// (0x0006aa92) bg_button_pane_cp21

0x2f86,	// (0x00066d87) cell_dia3_key_num_pane_t1

0x2f94,	// (0x00066d95) cell_dia3_key_num_pane_t2

0x2fa3,	// (0x00066da4) cell_dia3_key_num_pane_t3

0x2fb2,	// (0x00066db3) cell_dia3_key_num_pane_t4

0x0003,

0xff09,	// (0x00073d0a) cell_dia3_key_num_pane_t

0x6c91,	// (0x0006aa92) bg_button_pane_cp19

0xe2ff,	// (0x00072100) cell_dia3_key0_fun_pane_g1

0x6c91,	// (0x0006aa92) bg_button_pane_cp20

0xe307,	// (0x00072108) cell_dia3_key1_fun_pane_g1

0xe30f,	// (0x00072110) area_left_week_number_pane

0xde77,	// (0x00071c78) area_top_day_name_pane

0xe318,	// (0x00072119) frame_month_view_pane

0xe322,	// (0x00072123) grid_month_view_pane

0xe32c,	// (0x0007212d) cell_top_day_name_pane_ParamLimits

0xe32c,	// (0x0007212d) cell_top_day_name_pane

0xe346,	// (0x00072147) cell_area_left_week_number_pane_ParamLimits

0xe346,	// (0x00072147) cell_area_left_week_number_pane

0xe35a,	// (0x0007215b) cell_month_view_pane_ParamLimits

0xe35a,	// (0x0007215b) cell_month_view_pane

0x2fc1,	// (0x00066dc2) frm_month_g1

0xe377,	// (0x00072178) frm_month_g2

0xe381,	// (0x00072182) frm_month_g3

0xe38b,	// (0x0007218c) frm_month_g4

0xe395,	// (0x00072196) frm_month_g5

0xe39f,	// (0x000721a0) frm_month_g6

0xe3a9,	// (0x000721aa) frm_month_g7

0x2fca,	// (0x00066dcb) frm_month_g8

0xe3b3,	// (0x000721b4) frm_month_g9

0xe3bc,	// (0x000721bd) frm_month_g10

0xe3c5,	// (0x000721c6) frm_month_g11

0xe3ce,	// (0x000721cf) frm_month_g12

0xe3d7,	// (0x000721d8) frm_month_g13

0xe3e0,	// (0x000721e1) frm_month_g14

0xe3e9,	// (0x000721ea) frm_month_g15

0xe3f4,	// (0x000721f5) frm_month_g16

0x000f,

0xff12,	// (0x00073d13) frm_month_g

0xe3ff,	// (0x00072200) cell_top_day_name_pane_t1

0xe40e,	// (0x0007220f) cell_area_left_week_number_pane_g1

0xe3ff,	// (0x00072200) cell_area_left_week_number_pane_t1

0x46ae,	// (0x000684af) cell_month_view_pane_g1

0xe416,	// (0x00072217) cell_month_view_pane_t1

0x6c91,	// (0x0006aa92) main_fps_pane

0x2449,	// (0x0006624a) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x2449,	// (0x0006624a) cmail_ddmenu_btn02_pane_cp1

0x2465,	// (0x00066266) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x2465,	// (0x00066266) cmail_ddmenu_btn02_pane_cp2

0xdd59,	// (0x00071b5a) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xdd59,	// (0x00071b5a) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3a,	// (0x00073c3b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3a,	// (0x00073c3b) cmail_ddmenu_btn02_pane_g

0xdd77,	// (0x00071b78) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xdd77,	// (0x00071b78) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3f,	// (0x00073c40) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3f,	// (0x00073c40) cmail_ddmenu_btn02_pane_t

0xe425,	// (0x00072226) fps_text_pane_ParamLimits

0xe425,	// (0x00072226) fps_text_pane

0xe432,	// (0x00072233) main_fps_pane_g1_ParamLimits

0xe432,	// (0x00072233) main_fps_pane_g1

0xe440,	// (0x00072241) wait_bar_pane_cp010_ParamLimits

0xe440,	// (0x00072241) wait_bar_pane_cp010

0xe44c,	// (0x0007224d) fps_text_pane_t1_ParamLimits

0xe44c,	// (0x0007224d) fps_text_pane_t1

0xbabc,	// (0x0006f8bd) cam4_image_uncrop_pane_g1

0xbac5,	// (0x0006f8c6) cam4_image_uncrop_pane_g2

0xbace,	// (0x0006f8cf) cam4_image_uncrop_pane_g3

0xbad7,	// (0x0006f8d8) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x0007370e) cam4_image_uncrop_pane_g

0xe2f2,	// (0x000720f3) dia3_listrow_pane_ParamLimits

0x6c91,	// (0x0006aa92) main_phob2_pane

0xd9e1,	// (0x000717e2) cell_tport_appsw_pane_cp02_ParamLimits

0xd9e1,	// (0x000717e2) cell_tport_appsw_pane_cp02

0xd9f0,	// (0x000717f1) cell_tport_appsw_pane_cp03_ParamLimits

0xd9f0,	// (0x000717f1) cell_tport_appsw_pane_cp03

0x6c91,	// (0x0006aa92) phob2_contact_card_pane

0x6c91,	// (0x0006aa92) phob2_listscroll_pane

0x2fd3,	// (0x00066dd4) phob2_list_pane

0x2fdb,	// (0x00066ddc) scroll_pane_cp034

0xe465,	// (0x00072266) phob2_cc_data_pane_ParamLimits

0xe465,	// (0x00072266) phob2_cc_data_pane

0xe47f,	// (0x00072280) phob2_cc_listscroll_pane_ParamLimits

0xe47f,	// (0x00072280) phob2_cc_listscroll_pane

0xe499,	// (0x0007229a) list_double_large_graphic_phob2_pane_ParamLimits

0xe499,	// (0x0007229a) list_double_large_graphic_phob2_pane

0x2fe3,	// (0x00066de4) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x2fe3,	// (0x00066de4) list_double_large_graphic_phob2_pane_g1

0x6bb6,	// (0x0006a9b7) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x6bb6,	// (0x0006a9b7) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff33,	// (0x00073d34) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff33,	// (0x00073d34) list_double_large_graphic_phob2_pane_g

0x6bc2,	// (0x0006a9c3) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x6bc2,	// (0x0006a9c3) list_double_large_graphic_phob2_pane_t1

0x6bd7,	// (0x0006a9d8) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x6bd7,	// (0x0006a9d8) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff38,	// (0x00073d39) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff38,	// (0x00073d39) list_double_large_graphic_phob2_pane_t

0x6c91,	// (0x0006aa92) list_highlight_pane_cp024

0x3023,	// (0x00066e24) phob2_cc_button_pane

0xe4b7,	// (0x000722b8) phob2_cc_data_pane_g1_ParamLimits

0xe4b7,	// (0x000722b8) phob2_cc_data_pane_g1

0xe4c3,	// (0x000722c4) phob2_cc_data_pane_g2_ParamLimits

0xe4c3,	// (0x000722c4) phob2_cc_data_pane_g2

0x0001,

0xff3d,	// (0x00073d3e) phob2_cc_data_pane_g_ParamLimits

0xff3d,	// (0x00073d3e) phob2_cc_data_pane_g

0xe4cf,	// (0x000722d0) phob2_cc_data_pane_t1_ParamLimits

0xe4cf,	// (0x000722d0) phob2_cc_data_pane_t1

0xe4e1,	// (0x000722e2) phob2_cc_data_pane_t2_ParamLimits

0xe4e1,	// (0x000722e2) phob2_cc_data_pane_t2

0xe4f3,	// (0x000722f4) phob2_cc_data_pane_t3_ParamLimits

0xe4f3,	// (0x000722f4) phob2_cc_data_pane_t3

0x0002,

0xff42,	// (0x00073d43) phob2_cc_data_pane_t_ParamLimits

0xff42,	// (0x00073d43) phob2_cc_data_pane_t

0x302b,	// (0x00066e2c) phob2_cc_list_pane_ParamLimits

0x302b,	// (0x00066e2c) phob2_cc_list_pane

0x1603,	// (0x00065404) scroll_pane_cp035_ParamLimits

0x1603,	// (0x00065404) scroll_pane_cp035

0xe908,	// (0x00072709) bg_button_pane_cp033

0x3037,	// (0x00066e38) phob2_cc_button_pane_g1

0x3043,	// (0x00066e44) phob2_cc_button_pane_t1

0x3058,	// (0x00066e59) phob2_cc_button_pane_t2

0x0001,

0xff49,	// (0x00073d4a) phob2_cc_button_pane_t

0xe505,	// (0x00072306) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xe505,	// (0x00072306) list_double_large_graphic_phob2_cc_pane

0xe52c,	// (0x0007232d) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xe52c,	// (0x0007232d) list_double_large_graphic_phob2_cc_pane_g1

0x6be9,	// (0x0006a9ea) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x6be9,	// (0x0006a9ea) list_double_large_graphic_phob2_cc_pane_g2

0x6bf8,	// (0x0006a9f9) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x6bf8,	// (0x0006a9f9) list_double_large_graphic_phob2_cc_pane_g3

0x6c07,	// (0x0006aa08) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x6c07,	// (0x0006aa08) list_double_large_graphic_phob2_cc_pane_g4

0x6c18,	// (0x0006aa19) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x6c18,	// (0x0006aa19) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4e,	// (0x00073d4f) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4e,	// (0x00073d4f) list_double_large_graphic_phob2_cc_pane_g

0x6c27,	// (0x0006aa28) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x6c27,	// (0x0006aa28) list_double_large_graphic_phob2_cc_pane_t1

0x6c50,	// (0x0006aa51) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x6c50,	// (0x0006aa51) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff59,	// (0x00073d5a) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff59,	// (0x00073d5a) list_double_large_graphic_phob2_cc_pane_t

0x306a,	// (0x00066e6b) list_highlight_pane_cp025_ParamLimits

0x306a,	// (0x00066e6b) list_highlight_pane_cp025

0xe908,	// (0x00072709) bg_button_pane_cp033_ParamLimits

0x3037,	// (0x00066e38) phob2_cc_button_pane_g1_ParamLimits

0x3043,	// (0x00066e44) phob2_cc_button_pane_t1_ParamLimits

0x3058,	// (0x00066e59) phob2_cc_button_pane_t2_ParamLimits

0xff49,	// (0x00073d4a) phob2_cc_button_pane_t_ParamLimits

0x6cd7,	// (0x0006aad8) popup_wgtman_window

0x1405,	// (0x00065206) scroll_pane_cp038

0xe0e3,	// (0x00071ee4) wgtman_btn_pane_cp_01_ParamLimits

0xe0e3,	// (0x00071ee4) wgtman_btn_pane_cp_01

0x3078,	// (0x00066e79) wgtman_content_pane

0x3081,	// (0x00066e82) wgtman_heading_pane

0x6c91,	// (0x0006aa92) bg_heading_pane_cp02

0x308a,	// (0x00066e8b) wgtman_heading_pane_g1

0x3092,	// (0x00066e93) wgtman_heading_pane_t1

0x30a0,	// (0x00066ea1) scroll_pane_cp036

0x30a8,	// (0x00066ea9) wgtman_list_pane

0x30b0,	// (0x00066eb1) wgtman_list_pane_t1_ParamLimits

0x30b0,	// (0x00066eb1) wgtman_list_pane_t1

0xba1b,	// (0x0006f81c) cam4_grid_pane

0x5fe0,	// (0x00069de1) bg_button_pane_cp015_ParamLimits

0xc6b6,	// (0x000704b7) bg_button_pane_cp016_ParamLimits

0xc6c9,	// (0x000704ca) bg_button_pane_cp017_ParamLimits

0x6024,	// (0x00069e25) popup_vitu2_query_window_g3_ParamLimits

0x6024,	// (0x00069e25) popup_vitu2_query_window_g3

0x609d,	// (0x00069e9e) popup_vitu2_query_window_t6_ParamLimits

0x609d,	// (0x00069e9e) popup_vitu2_query_window_t6

0x60c8,	// (0x00069ec9) popup_vitu2_query_window_t7_ParamLimits

0x60c8,	// (0x00069ec9) popup_vitu2_query_window_t7

0xe86e,	// (0x0007266f) cam4_grid_pane_g1

0xe877,	// (0x00072678) cam4_grid_pane_g2

0x30cd,	// (0x00066ece) cam4_grid_pane_g3

0x30d6,	// (0x00066ed7) cam4_grid_pane_g4

0x0003,

0xff5e,	// (0x00073d5f) cam4_grid_pane_g

0x7c10,	// (0x0006ba11) aid_placing_vt_slider_lsc_ParamLimits

0x7f5c,	// (0x0006bd5d) vidtel_button_pane_ParamLimits

0x7f5c,	// (0x0006bd5d) vidtel_button_pane

0x6c91,	// (0x0006aa92) bg_button_pane_cp034

0xe53d,	// (0x0007233e) vidtel_button_pane_g1

0x30e1,	// (0x00066ee2) vidtel_button_pane_t1

0x1522,	// (0x00065323) aid_size_vtel_slider_touch

0x1603,	// (0x00065404) scroll_pane_cp039

0x1fc9,	// (0x00065dca) ncim_query_button_pane_cp01_ParamLimits

0x1fe8,	// (0x00065de9) ncimui_query_pane_g1_ParamLimits

0xe908,	// (0x00072709) input_focus_pane_cp012_ParamLimits

0x200d,	// (0x00065e0e) ncim_query_entry_pane_t1_ParamLimits

0x1603,	// (0x00065404) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large
