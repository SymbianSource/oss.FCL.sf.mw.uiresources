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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0004d4ca };

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
0x0f2c,	// (0x0004e3f6) Screen

0x0f38,	// (0x0004e402) application_window

0x0f84,	// (0x0004e44e) area_bottom_pane_ParamLimits

0x0f84,	// (0x0004e44e) area_bottom_pane

0x0fbd,	// (0x0004e487) area_top_pane_ParamLimits

0x0fbd,	// (0x0004e487) area_top_pane

0x98c2,	// (0x00056d8c) call_video_uplink_pane_ParamLimits

0x98c2,	// (0x00056d8c) call_video_uplink_pane

0x104b,	// (0x0004e515) main_pane_ParamLimits

0x104b,	// (0x0004e515) main_pane

0xc90e,	// (0x00059dd8) context_pane

0x42f1,	// (0x000517bb) navi_pane

0x4323,	// (0x000517ed) popup_cale_events_window_ParamLimits

0x4323,	// (0x000517ed) popup_cale_events_window

0xc921,	// (0x00059deb) popup_mup_playback_window

0x433b,	// (0x00051805) signal_pane

0xa8b4,	// (0x00057d7e) main_browser_pane

0xaa82,	// (0x00057f4c) main_burst_pane

0x4051,	// (0x0005151b) main_calc_pane

0xc8f4,	// (0x00059dbe) main_cale_day_pane

0x1690,	// (0x0004eb5a) main_cale_month_pane

0xc8f4,	// (0x00059dbe) main_cale_week_pane

0xaa82,	// (0x00057f4c) main_call_pane

0x9cf3,	// (0x000571bd) main_call_poc_pane

0xaa82,	// (0x00057f4c) main_camera_pane

0xaa82,	// (0x00057f4c) main_chi_dic_pane

0xb265,	// (0x0005872f) main_clock_pane

0x9cf3,	// (0x000571bd) main_fmradio_pane

0xaa82,	// (0x00057f4c) main_graph_messa_pane

0x9cf3,	// (0x000571bd) main_help_pane

0xa8b4,	// (0x00057d7e) main_im_pane

0xa7ef,	// (0x00057cb9) main_image_pane_ParamLimits

0xa7ef,	// (0x00057cb9) main_image_pane

0x9cf3,	// (0x000571bd) main_location2_pane

0xaa82,	// (0x00057f4c) main_location_pane

0xa7ef,	// (0x00057cb9) main_messa_pane

0x9cf3,	// (0x000571bd) main_mp2_pane

0xaa82,	// (0x00057f4c) main_mp_pane

0x9cf3,	// (0x000571bd) main_msg_pane

0x9cf3,	// (0x000571bd) main_mup_eq_pane

0x9cf3,	// (0x000571bd) main_mup_pane

0xa8b4,	// (0x00057d7e) main_notes_pane

0x9cf3,	// (0x000571bd) main_pec_pane

0x9cf3,	// (0x000571bd) main_phob_pane

0x9cf3,	// (0x000571bd) main_pinb_pane

0x9cf3,	// (0x000571bd) main_postcard_pane

0x9cf3,	// (0x000571bd) main_qdial_pane

0xaa82,	// (0x00057f4c) main_skin_pane

0x9cf3,	// (0x000571bd) main_smil2_pane

0xaa82,	// (0x00057f4c) main_smil_pane

0xaa82,	// (0x00057f4c) main_video_pane

0xaa82,	// (0x00057f4c) main_video_tele_pane

0xa7ef,	// (0x00057cb9) main_viewer_pane_ParamLimits

0xa7ef,	// (0x00057cb9) main_viewer_pane

0xaa82,	// (0x00057f4c) main_vorec_pane

0x40a5,	// (0x0005156f) popup_blid_sat_info_window_ParamLimits

0x40a5,	// (0x0005156f) popup_blid_sat_info_window

0x40fd,	// (0x000515c7) popup_dyc_status_message_window_ParamLimits

0x40fd,	// (0x000515c7) popup_dyc_status_message_window

0x4117,	// (0x000515e1) popup_grid_large_graphic_window_ParamLimits

0x4117,	// (0x000515e1) popup_grid_large_graphic_window

0x41d3,	// (0x0005169d) popup_loc_request_window_ParamLimits

0x41d3,	// (0x0005169d) popup_loc_request_window

0x42c9,	// (0x00051793) popup_wml_address_window_ParamLimits

0x42c9,	// (0x00051793) popup_wml_address_window

0x3e8b,	// (0x00051355) call_muted_g1

0x3b40,	// (0x0005100a) popup_call_audio_conf_window_ParamLimits

0x3b40,	// (0x0005100a) popup_call_audio_conf_window

0x3e9f,	// (0x00051369) popup_call_audio_first_window_ParamLimits

0x3e9f,	// (0x00051369) popup_call_audio_first_window

0x3f15,	// (0x000513df) popup_call_audio_in_window_ParamLimits

0x3f15,	// (0x000513df) popup_call_audio_in_window

0x3f51,	// (0x0005141b) popup_call_audio_out_window_ParamLimits

0x3f51,	// (0x0005141b) popup_call_audio_out_window

0x3f8b,	// (0x00051455) popup_call_audio_second_window_ParamLimits

0x3f8b,	// (0x00051455) popup_call_audio_second_window

0x3fe1,	// (0x000514ab) popup_call_audio_wait_window_ParamLimits

0x3fe1,	// (0x000514ab) popup_call_audio_wait_window

0x4016,	// (0x000514e0) popup_number_entry_window_ParamLimits

0x4016,	// (0x000514e0) popup_number_entry_window

0x98e0,	// (0x00056daa) bg_popup_call_pane_cp05_ParamLimits

0x98e0,	// (0x00056daa) bg_popup_call_pane_cp05

0x9900,	// (0x00056dca) popup_number_entry_window_t1

0x9913,	// (0x00056ddd) popup_number_entry_window_t2

0x9925,	// (0x00056def) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0005c579) popup_number_entry_window_t

0x9937,	// (0x00056e01) text_title_cp2

0x994a,	// (0x00056e14) bg_popup_call_pane_cp_ParamLimits

0x994a,	// (0x00056e14) bg_popup_call_pane_cp

0x9958,	// (0x00056e22) call_thumbnail_pane

0x9960,	// (0x00056e2a) popup_call_audio_in_window_g1_ParamLimits

0x9960,	// (0x00056e2a) popup_call_audio_in_window_g1

0x996c,	// (0x00056e36) popup_call_audio_in_window_g2_ParamLimits

0x996c,	// (0x00056e36) popup_call_audio_in_window_g2

0x9978,	// (0x00056e42) popup_call_audio_in_window_g3_ParamLimits

0x9978,	// (0x00056e42) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0005c582) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0005c582) popup_call_audio_in_window_g

0x9984,	// (0x00056e4e) popup_call_audio_in_window_t1_ParamLimits

0x9984,	// (0x00056e4e) popup_call_audio_in_window_t1

0x99a0,	// (0x00056e6a) popup_call_audio_in_window_t2_ParamLimits

0x99a0,	// (0x00056e6a) popup_call_audio_in_window_t2

0x99bc,	// (0x00056e86) popup_call_audio_in_window_t3_ParamLimits

0x99bc,	// (0x00056e86) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0005c589) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0005c589) popup_call_audio_in_window_t

0x994a,	// (0x00056e14) bg_popup_call_pane_cp01_ParamLimits

0x994a,	// (0x00056e14) bg_popup_call_pane_cp01

0x9958,	// (0x00056e22) call_thumbnail_pane_cp02

0x99cf,	// (0x00056e99) call_type_pane_cp022

0x99d7,	// (0x00056ea1) popup_call_audio_out_window_g1_ParamLimits

0x99d7,	// (0x00056ea1) popup_call_audio_out_window_g1

0x99e9,	// (0x00056eb3) popup_call_audio_out_window_g2_ParamLimits

0x99e9,	// (0x00056eb3) popup_call_audio_out_window_g2

0x99f5,	// (0x00056ebf) popup_call_audio_out_window_g3_ParamLimits

0x99f5,	// (0x00056ebf) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0005c590) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0005c590) popup_call_audio_out_window_g

0x9a07,	// (0x00056ed1) popup_call_audio_out_window_t1_ParamLimits

0x9a07,	// (0x00056ed1) popup_call_audio_out_window_t1

0x9a1f,	// (0x00056ee9) popup_call_audio_out_window_t2_ParamLimits

0x9a1f,	// (0x00056ee9) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0005c597) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0005c597) popup_call_audio_out_window_t

0x9a34,	// (0x00056efe) bg_popup_call_pane_ParamLimits

0x9a34,	// (0x00056efe) bg_popup_call_pane

0x1207,	// (0x0004e6d1) call_thumbnail_pane_cp_ParamLimits

0x1207,	// (0x0004e6d1) call_thumbnail_pane_cp

0x9ab8,	// (0x00056f82) call_type_pane_cp01_ParamLimits

0x9ab8,	// (0x00056f82) call_type_pane_cp01

0x9afc,	// (0x00056fc6) popup_call_audio_first_window_g1_ParamLimits

0x9afc,	// (0x00056fc6) popup_call_audio_first_window_g1

0x9b48,	// (0x00057012) popup_call_audio_first_window_g2_ParamLimits

0x9b48,	// (0x00057012) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0005c59c) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0005c59c) popup_call_audio_first_window_g

0x9b8c,	// (0x00057056) popup_call_audio_first_window_t1_ParamLimits

0x9b8c,	// (0x00057056) popup_call_audio_first_window_t1

0x9c38,	// (0x00057102) popup_call_audio_first_window_t4_ParamLimits

0x9c38,	// (0x00057102) popup_call_audio_first_window_t4

0x9cc4,	// (0x0005718e) popup_call_audio_first_window_t5_ParamLimits

0x9cc4,	// (0x0005718e) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0005c5a1) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0005c5a1) popup_call_audio_first_window_t

0x9cf3,	// (0x000571bd) bg_popup_call_pane_cp02

0x9cfd,	// (0x000571c7) call_type_pane_cp023

0x9d05,	// (0x000571cf) popup_call_audio_wait_window_g1

0x9d0d,	// (0x000571d7) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0005c5a8) popup_call_audio_wait_window_g

0x9d15,	// (0x000571df) popup_call_audio_wait_window_t3

0x9d23,	// (0x000571ed) bg_popup_call_pane_cp03_ParamLimits

0x9d23,	// (0x000571ed) bg_popup_call_pane_cp03

0x9d83,	// (0x0005724d) call_thumbnail_pane_cp011_ParamLimits

0x9d83,	// (0x0005724d) call_thumbnail_pane_cp011

0x9d8f,	// (0x00057259) call_type_pane_cp034_ParamLimits

0x9d8f,	// (0x00057259) call_type_pane_cp034

0x9dcb,	// (0x00057295) popup_call_audio_second_window_g1_ParamLimits

0x9dcb,	// (0x00057295) popup_call_audio_second_window_g1

0x9e07,	// (0x000572d1) popup_call_audio_second_window_g2_ParamLimits

0x9e07,	// (0x000572d1) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0005c5ad) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0005c5ad) popup_call_audio_second_window_g

0x9e43,	// (0x0005730d) popup_call_audio_second_window_t1_ParamLimits

0x9e43,	// (0x0005730d) popup_call_audio_second_window_t1

0xa765,	// (0x00057c2f) popup_call_audio_second_window_t2_ParamLimits

0xa765,	// (0x00057c2f) popup_call_audio_second_window_t2

0xa79b,	// (0x00057c65) popup_call_audio_second_window_t3_ParamLimits

0xa79b,	// (0x00057c65) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0005c5b2) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0005c5b2) popup_call_audio_second_window_t

0x9cf3,	// (0x000571bd) bg_popup_call_pane_cp04

0xa7d1,	// (0x00057c9b) list_conf_pane

0xa7d9,	// (0x00057ca3) popup_call_audio_conf_window_t1

0xa7e7,	// (0x00057cb1) call_thumbnail_pane_g1

0xa7ef,	// (0x00057cb9) bg_pinb_pane_ParamLimits

0xa7ef,	// (0x00057cb9) bg_pinb_pane

0xa7fd,	// (0x00057cc7) find_pinb_pane

0xa806,	// (0x00057cd0) listscroll_pinb_pane_ParamLimits

0xa806,	// (0x00057cd0) listscroll_pinb_pane

0xa815,	// (0x00057cdf) pinb_bg_pane_g1

0x122b,	// (0x0004e6f5) pinb_bg_pane_g2

0x1237,	// (0x0004e701) pinb_bg_pane_g3

0x1243,	// (0x0004e70d) pinb_bg_pane_g4

0x124f,	// (0x0004e719) pinb_bg_pane_g5

0x125b,	// (0x0004e725) pinb_bg_pane_g6

0x1266,	// (0x0004e730) pinb_bg_pane_g7

0x1271,	// (0x0004e73b) pinb_bg_pane_g8

0x127c,	// (0x0004e746) pinb_bg_pane_g9

0x1286,	// (0x0004e750) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0005c5b9) pinb_bg_pane_g

0x12a3,	// (0x0004e76d) grid_pinb_pane

0x12ac,	// (0x0004e776) list_pinb_pane

0x12b5,	// (0x0004e77f) scroll_pane_cp01_ParamLimits

0x12b5,	// (0x0004e77f) scroll_pane_cp01

0xa81f,	// (0x00057ce9) find_pinb_pane_g1_ParamLimits

0xa81f,	// (0x00057ce9) find_pinb_pane_g1

0xa837,	// (0x00057d01) find_pinb_pane_t1

0xa849,	// (0x00057d13) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0005c5d3) find_pinb_pane_t

0xa85e,	// (0x00057d28) input_focus_pane_cp01_ParamLimits

0xa85e,	// (0x00057d28) input_focus_pane_cp01

0x12c7,	// (0x0004e791) cell_pinb_pane_ParamLimits

0x12c7,	// (0x0004e791) cell_pinb_pane

0x12f0,	// (0x0004e7ba) cell_pinb_pane_g1_ParamLimits

0x12f0,	// (0x0004e7ba) cell_pinb_pane_g1

0x1300,	// (0x0004e7ca) cell_pinb_pane_g2_ParamLimits

0x1300,	// (0x0004e7ca) cell_pinb_pane_g2

0xa86a,	// (0x00057d34) cell_pinb_pane_g3_ParamLimits

0xa86a,	// (0x00057d34) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0005c5d8) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0005c5d8) cell_pinb_pane_g

0x9cf3,	// (0x000571bd) grid_highlight_pane_cp01

0x130c,	// (0x0004e7d6) list_pinb_item_pane_ParamLimits

0x130c,	// (0x0004e7d6) list_pinb_item_pane

0x9cf3,	// (0x000571bd) list_highlight_pane_cp02

0x131e,	// (0x0004e7e8) list_pinb_item_pane_g1_ParamLimits

0x131e,	// (0x0004e7e8) list_pinb_item_pane_g1

0x132b,	// (0x0004e7f5) list_pinb_item_pane_g2_ParamLimits

0x132b,	// (0x0004e7f5) list_pinb_item_pane_g2

0x1337,	// (0x0004e801) list_pinb_item_pane_g3_ParamLimits

0x1337,	// (0x0004e801) list_pinb_item_pane_g3

0x1348,	// (0x0004e812) list_pinb_item_pane_g4_ParamLimits

0x1348,	// (0x0004e812) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0005c5df) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0005c5df) list_pinb_item_pane_g

0x1354,	// (0x0004e81e) list_pinb_item_pane_t1_ParamLimits

0x1354,	// (0x0004e81e) list_pinb_item_pane_t1

0x1389,	// (0x0004e853) calc_display_pane

0x13ae,	// (0x0004e878) calc_paper_pane

0x13d1,	// (0x0004e89b) grid_calc_pane

0x9cf3,	// (0x000571bd) bg_list_pane_cp01

0x13ff,	// (0x0004e8c9) clock_g1

0x1407,	// (0x0004e8d1) clock_g2

0x0001,

0xf11e,	// (0x0005c5e8) clock_g

0x140f,	// (0x0004e8d9) clock_t1_ParamLimits

0x140f,	// (0x0004e8d9) clock_t1

0x1424,	// (0x0004e8ee) clock_t2_ParamLimits

0x1424,	// (0x0004e8ee) clock_t2

0x1436,	// (0x0004e900) clock_t3_ParamLimits

0x1436,	// (0x0004e900) clock_t3

0x1448,	// (0x0004e912) clock_t4_ParamLimits

0x1448,	// (0x0004e912) clock_t4

0x145a,	// (0x0004e924) clock_t5_ParamLimits

0x145a,	// (0x0004e924) clock_t5

0x146f,	// (0x0004e939) clock_t6_ParamLimits

0x146f,	// (0x0004e939) clock_t6

0x1481,	// (0x0004e94b) clock_t7_ParamLimits

0x1481,	// (0x0004e94b) clock_t7

0x1493,	// (0x0004e95d) clock_t8_ParamLimits

0x1493,	// (0x0004e95d) clock_t8

0x14a7,	// (0x0004e971) clock_t9_ParamLimits

0x14a7,	// (0x0004e971) clock_t9

0x0008,

0xf123,	// (0x0005c5ed) clock_t_ParamLimits

0xf123,	// (0x0005c5ed) clock_t

0xa876,	// (0x00057d40) popup_clock_analogue_window_cp02

0xa876,	// (0x00057d40) popup_clock_digital_window_cp01

0xa87e,	// (0x00057d48) listscroll_help_pane

0x9cf3,	// (0x000571bd) phob_pre_status_pane

0xa888,	// (0x00057d52) grid_qdial_pane

0xa7ef,	// (0x00057cb9) listscroll_mce_pane

0xa7ef,	// (0x00057cb9) bg_notes_pane

0xa892,	// (0x00057d5c) list_notes_pane

0x14bb,	// (0x0004e985) scroll_pane_cp06

0xa8a0,	// (0x00057d6a) bg_calc_paper_pane

0x9ecc,	// (0x00057396) list_calc_pane

0xa8b4,	// (0x00057d7e) bg_calc_display_pane

0x14cf,	// (0x0004e999) calc_display_pane_t1

0x14e4,	// (0x0004e9ae) calc_display_pane_t2

0x9ee6,	// (0x000573b0) calc_display_pane_t3

0x0002,

0xf136,	// (0x0005c600) calc_display_pane_t

0x14f9,	// (0x0004e9c3) cell_calc_pane_ParamLimits

0x14f9,	// (0x0004e9c3) cell_calc_pane

0xa8c0,	// (0x00057d8a) bg_calc_paper_pane_g1

0xa8cc,	// (0x00057d96) bg_calc_paper_pane_g2

0xa8d8,	// (0x00057da2) bg_calc_paper_pane_g3

0xa8e4,	// (0x00057dae) bg_calc_paper_pane_g4

0xa8f0,	// (0x00057dba) bg_calc_paper_pane_g5

0x152e,	// (0x0004e9f8) bg_calc_paper_pane_g6

0x153d,	// (0x0004ea07) bg_calc_paper_pane_g7

0x154c,	// (0x0004ea16) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0005c607) bg_calc_paper_pane_g

0x155f,	// (0x0004ea29) calc_bg_paper_pane_g9

0x1572,	// (0x0004ea3c) list_calc_item_pane_ParamLimits

0x1572,	// (0x0004ea3c) list_calc_item_pane

0xa8fc,	// (0x00057dc6) list_calc_item_pane_g1

0x9ef8,	// (0x000573c2) list_calc_item_pane_t1_ParamLimits

0x9ef8,	// (0x000573c2) list_calc_item_pane_t1

0x158a,	// (0x0004ea54) list_calc_item_pane_t2_ParamLimits

0x158a,	// (0x0004ea54) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0005c618) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0005c618) list_calc_item_pane_t

0xa909,	// (0x00057dd3) cell_calc_pane_g1

0xa913,	// (0x00057ddd) grid_highlight_pane_cp02

0xa935,	// (0x00057dff) bg_calc_display_pane_g1

0x15bc,	// (0x0004ea86) bg_calc_display_pane_g2

0x15c6,	// (0x0004ea90) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0005c622) bg_calc_display_pane_g

0x15cf,	// (0x0004ea99) cell_qdial_pane_ParamLimits

0x15cf,	// (0x0004ea99) cell_qdial_pane

0x15e3,	// (0x0004eaad) cell_qdial_pane_g1_ParamLimits

0x15e3,	// (0x0004eaad) cell_qdial_pane_g1

0x15f9,	// (0x0004eac3) cell_qdial_pane_g2_ParamLimits

0x15f9,	// (0x0004eac3) cell_qdial_pane_g2

0xa93e,	// (0x00057e08) cell_qdial_pane_g3_ParamLimits

0xa93e,	// (0x00057e08) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0005c629) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0005c629) cell_qdial_pane_g

0x1620,	// (0x0004eaea) cell_qdial_pane_t1_ParamLimits

0x1620,	// (0x0004eaea) cell_qdial_pane_t1

0x1638,	// (0x0004eb02) cell_qdial_pane_t2_ParamLimits

0x1638,	// (0x0004eb02) cell_qdial_pane_t2

0x164b,	// (0x0004eb15) cell_qdial_pane_t3_ParamLimits

0x164b,	// (0x0004eb15) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0005c632) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0005c632) cell_qdial_pane_t

0x9cf3,	// (0x000571bd) grid_highlight_pane_cp04

0xa94a,	// (0x00057e14) thumbnail_qdial_pane_ParamLimits

0xa94a,	// (0x00057e14) thumbnail_qdial_pane

0xa9a6,	// (0x00057e70) list_help_pane

0xa9af,	// (0x00057e79) scroll_pane_cp02

0x165e,	// (0x0004eb28) help_list_pane_t1_ParamLimits

0x165e,	// (0x0004eb28) help_list_pane_t1

0x9f0a,	// (0x000573d4) bg_notes_pane_g2

0x9f12,	// (0x000573dc) bg_notes_pane_g3

0x9f1a,	// (0x000573e4) notes_bg_pane_g1

0x9f22,	// (0x000573ec) notes_bg_pane_g4

0x9f2a,	// (0x000573f4) notes_bg_pane_g5

0x9f32,	// (0x000573fc) notes_bg_pane_g6

0x9f3a,	// (0x00057404) notes_bg_pane_g7

0x9f42,	// (0x0005740c) notes_bg_pane_g8

0x9f4a,	// (0x00057414) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0005c650) notes_bg_pane_g

0x167b,	// (0x0004eb45) list_notes_text_pane_ParamLimits

0x167b,	// (0x0004eb45) list_notes_text_pane

0xa9b8,	// (0x00057e82) list_notes_text_pane_g1

0x003b,	// (0x0004d505) list_notes_text_pane_t1

0x1690,	// (0x0004eb5a) listscroll_cale_week_pane

0x16bc,	// (0x0004eb86) bg_cale_heading_pane

0xa9db,	// (0x00057ea5) bg_cale_pane_cp01

0x16d4,	// (0x0004eb9e) cale_week_corner_pane

0x16f3,	// (0x0004ebbd) cale_week_day_heading_pane

0x1710,	// (0x0004ebda) cale_week_scroll_pane_g1

0x1723,	// (0x0004ebed) cale_week_scroll_pane_g2

0x173b,	// (0x0004ec05) cale_week_scroll_pane_g3

0x1753,	// (0x0004ec1d) cale_week_scroll_pane_g4

0x176b,	// (0x0004ec35) cale_week_scroll_pane_g5

0x178b,	// (0x0004ec55) cale_week_scroll_pane_g6

0x17ab,	// (0x0004ec75) cale_week_scroll_pane_g7

0x17cb,	// (0x0004ec95) cale_week_scroll_pane_g8

0x17ef,	// (0x0004ecb9) cale_week_scroll_pane_g9

0x1807,	// (0x0004ecd1) cale_week_scroll_pane_g10

0x181f,	// (0x0004ece9) cale_week_scroll_pane_g11

0x1837,	// (0x0004ed01) cale_week_scroll_pane_g12

0x184f,	// (0x0004ed19) cale_week_scroll_pane_g13

0x184f,	// (0x0004ed19) cale_week_scroll_pane_g14

0x184f,	// (0x0004ed19) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0005c65f) cale_week_scroll_pane_g

0x188b,	// (0x0004ed55) cale_week_time_pane

0x18af,	// (0x0004ed79) grid_cale_week_pane

0xaa0a,	// (0x00057ed4) scroll_pane_cp08

0x18d5,	// (0x0004ed9f) cell_cale_week_pane_ParamLimits

0x18d5,	// (0x0004ed9f) cell_cale_week_pane

0x1963,	// (0x0004ee2d) cale_week_day_heading_pane_t1

0x198d,	// (0x0004ee57) cale_week_day_heading_pane_t2

0x19bc,	// (0x0004ee86) cale_week_day_heading_pane_t3

0x19eb,	// (0x0004eeb5) cale_week_day_heading_pane_t4

0x1a1a,	// (0x0004eee4) cale_week_day_heading_pane_t5

0x1a51,	// (0x0004ef1b) cale_week_day_heading_pane_t6

0x1a88,	// (0x0004ef52) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0005c680) cale_week_day_heading_pane_t

0xaa27,	// (0x00057ef1) bg_cale_side_pane

0x1ab2,	// (0x0004ef7c) cale_week_time_pane_t1

0x1acc,	// (0x0004ef96) cale_week_time_pane_t2

0x1ae6,	// (0x0004efb0) cale_week_time_pane_t3

0x1b00,	// (0x0004efca) cale_week_time_pane_t4

0x1b1a,	// (0x0004efe4) cale_week_time_pane_t5

0x1b34,	// (0x0004effe) cale_week_time_pane_t6

0x1b4e,	// (0x0004f018) cale_week_time_pane_t7

0x1b68,	// (0x0004f032) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0005c68f) cale_week_time_pane_t

0x1b82,	// (0x0004f04c) cell_cale_week_pane_g2

0x1ba1,	// (0x0004f06b) cell_cale_week_pane_g3_ParamLimits

0x1ba1,	// (0x0004f06b) cell_cale_week_pane_g3

0xaa35,	// (0x00057eff) grid_highlight_pane_cp07

0xaa3d,	// (0x00057f07) listscroll_gms_pane

0xaa47,	// (0x00057f11) grid_gms_pane

0xaa50,	// (0x00057f1a) listscroll_gms_pane_g1

0xaa58,	// (0x00057f22) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0005c6a0) listscroll_gms_pane_g

0x1bb9,	// (0x0004f083) scroll_pane_cp010

0x1bc4,	// (0x0004f08e) cell_gms_pane_ParamLimits

0x1bc4,	// (0x0004f08e) cell_gms_pane

0x1bd7,	// (0x0004f0a1) cell_gms_pane_g1

0xaa60,	// (0x00057f2a) cell_gms_pane_g2

0xaa68,	// (0x00057f32) cell_gms_pane_g3

0xaa71,	// (0x00057f3b) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0005c6a5) cell_gms_pane_g

0xaa7a,	// (0x00057f44) grid_highlight_pane_cp09

0x3e35,	// (0x000512ff) phob_pre_status_pane_g1

0x3e3d,	// (0x00051307) phob_pre_status_pane_g2

0x3e45,	// (0x0005130f) phob_pre_status_pane_g3

0x3e4d,	// (0x00051317) phob_pre_status_pane_g4

0x0004,

0xf5c6,	// (0x0005ca90) phob_pre_status_pane_g

0x3e5d,	// (0x00051327) phob_pre_status_pane_t1

0x3e6b,	// (0x00051335) phob_pre_status_pane_t2

0x3e7b,	// (0x00051345) phob_pre_status_pane_t3

0x0002,

0xf5d1,	// (0x0005ca9b) phob_pre_status_pane_t

0xaa82,	// (0x00057f4c) bg_list_pane_cp05

0x1be7,	// (0x0004f0b1) grid_vorec_pane

0x1bef,	// (0x0004f0b9) vorec_t1

0x1bfd,	// (0x0004f0c7) vorec_t2

0x1c0b,	// (0x0004f0d5) vorec_t3

0x1c19,	// (0x0004f0e3) vorec_t4

0x9836,	// (0x00056d00) vorec_t5

0x9844,	// (0x00056d0e) vorec_t6

0x0004,

0xf1e4,	// (0x0005c6ae) vorec_t

0x9852,	// (0x00056d1c) wait_bar_pane_cp01

0x1c35,	// (0x0004f0ff) cell_vorec_pane_ParamLimits

0x1c35,	// (0x0004f0ff) cell_vorec_pane

0x9f52,	// (0x0005741c) cell_vorec_pane_g1

0x9cf3,	// (0x000571bd) grid_highlight_pane_cp05

0x1c5d,	// (0x0004f127) cams_zoom_pane

0x1c6c,	// (0x0004f136) image_vga_pane

0x1c86,	// (0x0004f150) main_camera_pane_g1

0x1c98,	// (0x0004f162) main_camera_pane_g2

0x1ca8,	// (0x0004f172) main_camera_pane_g3

0x1cb8,	// (0x0004f182) main_camera_pane_g4

0x1cc8,	// (0x0004f192) main_camera_pane_g5

0x1cd8,	// (0x0004f1a2) main_camera_pane_g6

0x1cea,	// (0x0004f1b4) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x0005c6b9) main_camera_pane_g

0x1cfa,	// (0x0004f1c4) main_camera_pane_t1

0x1d10,	// (0x0004f1da) main_camera_pane_t2

0x0001,

0xf200,	// (0x0005c6ca) main_camera_pane_t

0x1d4a,	// (0x0004f214) cams_zoom_pane_cp_ParamLimits

0x1d4a,	// (0x0004f214) cams_zoom_pane_cp

0x1d72,	// (0x0004f23c) image_cif_pane_ParamLimits

0x1d72,	// (0x0004f23c) image_cif_pane

0x1da8,	// (0x0004f272) image_subqcif_pane

0x1db0,	// (0x0004f27a) main_video_pane_g1_ParamLimits

0x1db0,	// (0x0004f27a) main_video_pane_g1

0x1dd4,	// (0x0004f29e) main_video_pane_g2_ParamLimits

0x1dd4,	// (0x0004f29e) main_video_pane_g2

0x1e08,	// (0x0004f2d2) main_video_pane_g3_ParamLimits

0x1e08,	// (0x0004f2d2) main_video_pane_g3

0x1e36,	// (0x0004f300) main_video_pane_g4_ParamLimits

0x1e36,	// (0x0004f300) main_video_pane_g4

0x1e64,	// (0x0004f32e) main_video_pane_g5_ParamLimits

0x1e64,	// (0x0004f32e) main_video_pane_g5

0xaa96,	// (0x00057f60) main_video_pane_g6_ParamLimits

0xaa96,	// (0x00057f60) main_video_pane_g6

0x0006,

0xf205,	// (0x0005c6cf) main_video_pane_g_ParamLimits

0xf205,	// (0x0005c6cf) main_video_pane_g

0x1e8d,	// (0x0004f357) main_video_pane_t1_ParamLimits

0x1e8d,	// (0x0004f357) main_video_pane_t1

0xaab0,	// (0x00057f7a) cams_zoom_pane_g1

0xaab9,	// (0x00057f83) cams_zoom_pane_g2

0xaac2,	// (0x00057f8c) cams_zoom_pane_g3

0xaacb,	// (0x00057f95) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0005c6de) cams_zoom_pane_g

0x1eea,	// (0x0004f3b4) grid_cams_pane

0x1f04,	// (0x0004f3ce) linegrid_cams_pane

0x1f18,	// (0x0004f3e2) cell_cams_pane_ParamLimits

0x1f18,	// (0x0004f3e2) cell_cams_pane

0xaad4,	// (0x00057f9e) cams_burst_image_pane

0xaadc,	// (0x00057fa6) cell_cams_pane_g1

0x9cf3,	// (0x000571bd) grid_highlight_pane_cp03

0xa909,	// (0x00057dd3) mp_bg_pane_g1

0x9cf3,	// (0x000571bd) bg_list_pane_cp03

0xc819,	// (0x00059ce3) bg_mp_pane

0xc821,	// (0x00059ceb) grid_mp_pane

0xc829,	// (0x00059cf3) media_player_g1

0xc831,	// (0x00059cfb) media_player_t1

0xc83f,	// (0x00059d09) media_player_t2

0xc84d,	// (0x00059d17) media_player_t3

0xc85b,	// (0x00059d25) media_player_t4

0xc869,	// (0x00059d33) media_player_t5

0xc877,	// (0x00059d41) media_player_t6

0xc885,	// (0x00059d4f) media_player_t7

0x0006,

0xf5b0,	// (0x0005ca7a) media_player_t

0xc893,	// (0x00059d5d) wait_bar_pane_cp02

0xf595,	// (0x0005ca5f) main_usb_pane_t

0x3e2c,	// (0x000512f6) cell_mp_pane

0xa909,	// (0x00057dd3) cell_mp_pane_g1

0x9cf3,	// (0x000571bd) grid_highlight_pane_cp06

0xaae4,	// (0x00057fae) grid_skin_colour_pane

0xaaec,	// (0x00057fb6) list_highlight_pane_cp03

0x1f38,	// (0x0004f402) skin_g1

0xaaf4,	// (0x00057fbe) skin_t1

0xab03,	// (0x00057fcd) skin_t2

0x0001,

0xf249,	// (0x0005c713) skin_t

0x1f40,	// (0x0004f40a) cell_skin_colour_pane_ParamLimits

0x1f40,	// (0x0004f40a) cell_skin_colour_pane

0xab11,	// (0x00057fdb) cell_skin_colour_pane_g1

0x1fb9,	// (0x0004f483) call_video_g1_ParamLimits

0x1fb9,	// (0x0004f483) call_video_g1

0x1fd5,	// (0x0004f49f) call_video_g2_ParamLimits

0x1fd5,	// (0x0004f49f) call_video_g2

0x0001,

0xf24e,	// (0x0005c718) call_video_g_ParamLimits

0xf24e,	// (0x0005c718) call_video_g

0x2027,	// (0x0004f4f1) call_video_uplink_pane_cp1_ParamLimits

0x2027,	// (0x0004f4f1) call_video_uplink_pane_cp1

0xab23,	// (0x00057fed) call_video_uplink_pane_cp2

0x20c6,	// (0x0004f590) video_down_crop_pane_ParamLimits

0x20c6,	// (0x0004f590) video_down_crop_pane

0x21bd,	// (0x0004f687) video_down_pane_ParamLimits

0x21bd,	// (0x0004f687) video_down_pane

0xab2b,	// (0x00057ff5) video_down_subqcif_pane_ParamLimits

0xab2b,	// (0x00057ff5) video_down_subqcif_pane

0xab43,	// (0x0005800d) video_down_subqcif_pane_cp_ParamLimits

0xab43,	// (0x0005800d) video_down_subqcif_pane_cp

0xab69,	// (0x00058033) im_reading_pane_ParamLimits

0xab69,	// (0x00058033) im_reading_pane

0x22cd,	// (0x0004f797) im_writing_pane_ParamLimits

0x22cd,	// (0x0004f797) im_writing_pane

0x22e3,	// (0x0004f7ad) im_reading_pane_t1

0xab83,	// (0x0005804d) list_im_pane

0xab94,	// (0x0005805e) scroll_pane_cp07

0x231c,	// (0x0004f7e6) im_writing_pane_t1_ParamLimits

0x231c,	// (0x0004f7e6) im_writing_pane_t1

0xabad,	// (0x00058077) im_writing_pane_t2_ParamLimits

0xabad,	// (0x00058077) im_writing_pane_t2

0x0001,

0xf258,	// (0x0005c722) im_writing_pane_t_ParamLimits

0xf258,	// (0x0005c722) im_writing_pane_t

0x9cf3,	// (0x000571bd) input_focus_pane_cp04

0x9cf3,	// (0x000571bd) input_focus_pane_cp05

0x2331,	// (0x0004f7fb) list_im_single_pane_ParamLimits

0x2331,	// (0x0004f7fb) list_im_single_pane

0x2345,	// (0x0004f80f) list_single_im_pane_t1

0x3dec,	// (0x000512b6) blid_accuracy_pane

0x3df4,	// (0x000512be) blid_compass_pane

0x3dfe,	// (0x000512c8) main_location_t1

0x3e0e,	// (0x000512d8) main_location_t2

0x3e1e,	// (0x000512e8) main_location_t3

0x0002,

0xf5bf,	// (0x0005ca89) main_location_t

0x9cf3,	// (0x000571bd) aid_levels_location

0xa909,	// (0x00057dd3) blid_accuracy_pane_g1

0xa909,	// (0x00057dd3) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x0005c784) blid_accuracy_pane_g

0xabf5,	// (0x000580bf) wml_content_pane

0xac33,	// (0x000580fd) wml_button_pane_ParamLimits

0xac33,	// (0x000580fd) wml_button_pane

0x2354,	// (0x0004f81e) wml_list_single_large_pane_ParamLimits

0x2354,	// (0x0004f81e) wml_list_single_large_pane

0x2369,	// (0x0004f833) wml_list_single_medium_pane_ParamLimits

0x2369,	// (0x0004f833) wml_list_single_medium_pane

0x237f,	// (0x0004f849) wml_list_single_small_pane_ParamLimits

0x237f,	// (0x0004f849) wml_list_single_small_pane

0xac47,	// (0x00058111) wml_selection_box_pane_ParamLimits

0xac47,	// (0x00058111) wml_selection_box_pane

0xac5a,	// (0x00058124) wml_list_single_pane_t1

0xac69,	// (0x00058133) wml_list_single_medium_pane_t1

0xac78,	// (0x00058142) wml_list_single_large_pane_t1

0xac87,	// (0x00058151) input_focus_pane_cp02_ParamLimits

0xac87,	// (0x00058151) input_focus_pane_cp02

0xac9a,	// (0x00058164) wml_selection_box_pane_g1

0xaca3,	// (0x0005816d) wml_selection_box_pane_t1_ParamLimits

0xaca3,	// (0x0005816d) wml_selection_box_pane_t1

0xa7ef,	// (0x00057cb9) bg_wml_button_pane_ParamLimits

0xa7ef,	// (0x00057cb9) bg_wml_button_pane

0xacbb,	// (0x00058185) wml_button_pane_g1

0xacc3,	// (0x0005818d) wml_button_pane_t1

0xacbb,	// (0x00058185) wml_button_bg_pane_g1

0xacd3,	// (0x0005819d) wml_button_bg_pane_g2

0xacdb,	// (0x000581a5) wml_button_bg_pane_g3

0xace3,	// (0x000581ad) wml_button_bg_pane_g4

0xaceb,	// (0x000581b5) wml_button_bg_pane_g5

0xacf3,	// (0x000581bd) wml_button_bg_pane_g6

0xacfb,	// (0x000581c5) wml_button_bg_pane_g7

0xad03,	// (0x000581cd) wml_button_bg_pane_g8

0xad0b,	// (0x000581d5) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0005c727) wml_button_bg_pane_g

0x2397,	// (0x0004f861) bg_list_pane_cp02

0xad13,	// (0x000581dd) mce_header_pane_ParamLimits

0xad13,	// (0x000581dd) mce_header_pane

0xad29,	// (0x000581f3) mce_icon_pane

0xad29,	// (0x000581f3) mce_image_pane

0xad32,	// (0x000581fc) mce_text_pane_ParamLimits

0xad32,	// (0x000581fc) mce_text_pane

0x239f,	// (0x0004f869) scroll_pane_cp03

0xac2b,	// (0x000580f5) scroll_pane_cp04

0xad45,	// (0x0005820f) scroll_pane_cp05_ParamLimits

0xad45,	// (0x0005820f) scroll_pane_cp05

0x23a9,	// (0x0004f873) mce_header_field_pane_ParamLimits

0x23a9,	// (0x0004f873) mce_header_field_pane

0x23c0,	// (0x0004f88a) mce_header_field_pane_2_ParamLimits

0x23c0,	// (0x0004f88a) mce_header_field_pane_2

0x23d6,	// (0x0004f8a0) mce_header_field_pane_3

0x23de,	// (0x0004f8a8) list_single_mce_message_pane_ParamLimits

0x23de,	// (0x0004f8a8) list_single_mce_message_pane

0x23f3,	// (0x0004f8bd) list_single_mce_smart_pane_ParamLimits

0x23f3,	// (0x0004f8bd) list_single_mce_smart_pane

0xad51,	// (0x0005821b) input_focus_pane_cp03

0xad5a,	// (0x00058224) list_header_data_pane

0x2413,	// (0x0004f8dd) mce_header_field_pane_t1

0x2423,	// (0x0004f8ed) list_single_mce_header_pane_ParamLimits

0x2423,	// (0x0004f8ed) list_single_mce_header_pane

0xad62,	// (0x0005822c) list_single_mce_header_pane_t1

0xad71,	// (0x0005823b) list_single_mce_message_pane_g1

0xad79,	// (0x00058243) list_single_mce_message_pane_t1

0x245d,	// (0x0004f927) bg_cale_heading_pane_cp01_ParamLimits

0x245d,	// (0x0004f927) bg_cale_heading_pane_cp01

0xad87,	// (0x00058251) bg_cale_pane_cp02_ParamLimits

0xad87,	// (0x00058251) bg_cale_pane_cp02

0x2497,	// (0x0004f961) cale_month_corner_pane

0x24b6,	// (0x0004f980) cale_month_day_heading_pane_ParamLimits

0x24b6,	// (0x0004f980) cale_month_day_heading_pane

0x2508,	// (0x0004f9d2) cale_month_pane_g1_ParamLimits

0x2508,	// (0x0004f9d2) cale_month_pane_g1

0x2537,	// (0x0004fa01) cale_month_pane_g2_ParamLimits

0x2537,	// (0x0004fa01) cale_month_pane_g2

0x2567,	// (0x0004fa31) cale_month_pane_g3_ParamLimits

0x2567,	// (0x0004fa31) cale_month_pane_g3

0x25a3,	// (0x0004fa6d) cale_month_pane_g4_ParamLimits

0x25a3,	// (0x0004fa6d) cale_month_pane_g4

0x25df,	// (0x0004faa9) cale_month_pane_g5_ParamLimits

0x25df,	// (0x0004faa9) cale_month_pane_g5

0x2627,	// (0x0004faf1) cale_month_pane_g6_ParamLimits

0x2627,	// (0x0004faf1) cale_month_pane_g6

0x2673,	// (0x0004fb3d) cale_month_pane_g7_ParamLimits

0x2673,	// (0x0004fb3d) cale_month_pane_g7

0x26c7,	// (0x0004fb91) cale_month_pane_g8_ParamLimits

0x26c7,	// (0x0004fb91) cale_month_pane_g8

0x271b,	// (0x0004fbe5) cale_month_pane_g9_ParamLimits

0x271b,	// (0x0004fbe5) cale_month_pane_g9

0x276d,	// (0x0004fc37) cale_month_pane_g10_ParamLimits

0x276d,	// (0x0004fc37) cale_month_pane_g10

0x27bf,	// (0x0004fc89) cale_month_pane_g11_ParamLimits

0x27bf,	// (0x0004fc89) cale_month_pane_g11

0x2811,	// (0x0004fcdb) cale_month_pane_g12_ParamLimits

0x2811,	// (0x0004fcdb) cale_month_pane_g12

0x2863,	// (0x0004fd2d) cale_month_pane_g13_ParamLimits

0x2863,	// (0x0004fd2d) cale_month_pane_g13

0x000c,

0xf270,	// (0x0005c73a) cale_month_pane_g_ParamLimits

0xf270,	// (0x0005c73a) cale_month_pane_g

0x28b5,	// (0x0004fd7f) cale_month_week_pane

0x28d9,	// (0x0004fda3) grid_cale_month_pane_ParamLimits

0x28d9,	// (0x0004fda3) grid_cale_month_pane

0x2922,	// (0x0004fdec) cale_month_day_heading_pane_t1

0x29a8,	// (0x0004fe72) cale_month_day_heading_pane_t2

0x2a21,	// (0x0004feeb) cale_month_day_heading_pane_t3

0x2a9a,	// (0x0004ff64) cale_month_day_heading_pane_t4

0x2b1b,	// (0x0004ffe5) cale_month_day_heading_pane_t5

0x2ba4,	// (0x0005006e) cale_month_day_heading_pane_t6

0x2c2d,	// (0x000500f7) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x0005c755) cale_month_day_heading_pane_t

0xaa27,	// (0x00057ef1) bg_cale_side_pane_cp01

0x2cbe,	// (0x00050188) cale_month_week_pane_t1

0x2cd7,	// (0x000501a1) cale_month_week_pane_t2

0x2cf0,	// (0x000501ba) cale_month_week_pane_t3

0x2d09,	// (0x000501d3) cale_month_week_pane_t4

0x2d22,	// (0x000501ec) cale_month_week_pane_t5

0x2d3b,	// (0x00050205) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x0005c764) cale_month_week_pane_t

0x2d54,	// (0x0005021e) cell_cale_month_pane_ParamLimits

0x2d54,	// (0x0005021e) cell_cale_month_pane

0x9f5c,	// (0x00057426) cell_cale_month_pane_g1

0x2e82,	// (0x0005034c) cell_cale_month_pane_t1_ParamLimits

0x2e82,	// (0x0005034c) cell_cale_month_pane_t1

0xaa35,	// (0x00057eff) grid_highlight_pane_cp08

0xa909,	// (0x00057dd3) main_smil_g1

0x2eae,	// (0x00050378) smil_status_pane

0xadc6,	// (0x00058290) smil_text_pane

0xc739,	// (0x00059c03) bg_popup_call3_rect_pane_g8

0xc741,	// (0x00059c0b) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x0005ca1d) bg_popup_call3_rect_pane_g

0xc988,	// (0x00059e52) smil_status_volume_pane_g1

0xadd0,	// (0x0005829a) smil_status_pane_t1

0xa0b2,	// (0x0005757c) volume_smil_pane

0xade7,	// (0x000582b1) list_smil_text_pane

0x2ec1,	// (0x0005038b) scroll_pane_cp011

0x2ecc,	// (0x00050396) smil_text_list_pane_t1_ParamLimits

0x2ecc,	// (0x00050396) smil_text_list_pane_t1

0x9f68,	// (0x00057432) aid_volume_smil_ParamLimits

0x9f68,	// (0x00057432) aid_volume_smil

0xa909,	// (0x00057dd3) smil_volume_pane_g1

0xa909,	// (0x00057dd3) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x0005c784) smil_volume_pane_g

0x1690,	// (0x0004eb5a) listscroll_cale_day_pane

0xadf1,	// (0x000582bb) bg_cale_pane

0xae09,	// (0x000582d3) list_cale_pane

0xae2c,	// (0x000582f6) scroll_pane_cp09

0xae3d,	// (0x00058307) cale_bg_pane_g1

0xae45,	// (0x0005830f) cale_bg_pane_g2

0xae4d,	// (0x00058317) cale_bg_pane_g3

0xae55,	// (0x0005831f) cale_bg_pane_g4

0xae5d,	// (0x00058327) cale_bg_pane_g5

0xae65,	// (0x0005832f) cale_bg_pane_g6

0xae6d,	// (0x00058337) cale_bg_pane_g7

0xae75,	// (0x0005833f) cale_bg_pane_g8

0xae7d,	// (0x00058347) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x0005c789) cale_bg_pane_g

0x2f10,	// (0x000503da) list_cale_time_pane_ParamLimits

0x2f10,	// (0x000503da) list_cale_time_pane

0xae85,	// (0x0005834f) list_cale_time_pane_g1_ParamLimits

0xae85,	// (0x0005834f) list_cale_time_pane_g1

0xae91,	// (0x0005835b) list_cale_time_pane_g2_ParamLimits

0xae91,	// (0x0005835b) list_cale_time_pane_g2

0x2f25,	// (0x000503ef) list_cale_time_pane_g3_ParamLimits

0x2f25,	// (0x000503ef) list_cale_time_pane_g3

0x2f33,	// (0x000503fd) list_cale_time_pane_g4_ParamLimits

0x2f33,	// (0x000503fd) list_cale_time_pane_g4

0x2f41,	// (0x0005040b) list_cale_time_pane_g5_ParamLimits

0x2f41,	// (0x0005040b) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x0005c79c) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x0005c79c) list_cale_time_pane_g

0xaeab,	// (0x00058375) list_cale_time_pane_t1_ParamLimits

0xaeab,	// (0x00058375) list_cale_time_pane_t1

0xaed3,	// (0x0005839d) list_cale_time_pane_t2_ParamLimits

0xaed3,	// (0x0005839d) list_cale_time_pane_t2

0x31c7,	// (0x00050691) aid_blid_cardinal_pane

0x3205,	// (0x000506cf) compass_pane_t4

0xaefb,	// (0x000583c5) list_cale_time_pane_t4_ParamLimits

0xaefb,	// (0x000583c5) list_cale_time_pane_t4

0x3213,	// (0x000506dd) compass_pane_t5

0x3221,	// (0x000506eb) compass_pane_t6

0x322f,	// (0x000506f9) compass_pane_t7

0xb3aa,	// (0x00058874) navi_pane_cc_t1

0xb587,	// (0x00058a51) aid_phob_thumbnail_center_pane

0x3804,	// (0x00050cce) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x0005c7a9) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x0005c7a9) list_cale_time_pane_t

0x994a,	// (0x00056e14) bg_popup_window_pane_cp02_ParamLimits

0x994a,	// (0x00056e14) bg_popup_window_pane_cp02

0xaf23,	// (0x000583ed) heading_pane_cp01_ParamLimits

0xaf23,	// (0x000583ed) heading_pane_cp01

0xaf2f,	// (0x000583f9) loc_req_pane_ParamLimits

0xaf2f,	// (0x000583f9) loc_req_pane

0xaf3f,	// (0x00058409) loc_type_pane_ParamLimits

0xaf3f,	// (0x00058409) loc_type_pane

0xaf51,	// (0x0005841b) loc_type_pane_t1_ParamLimits

0xaf51,	// (0x0005841b) loc_type_pane_t1

0xaf63,	// (0x0005842d) loc_type_pane_t2_ParamLimits

0xaf63,	// (0x0005842d) loc_type_pane_t2

0xaf75,	// (0x0005843f) loc_type_pane_t3_ParamLimits

0xaf75,	// (0x0005843f) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x0005c7b0) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x0005c7b0) loc_type_pane_t

0xaf87,	// (0x00058451) list_loc_req_pane

0xaf91,	// (0x0005845b) scroll_pane_cp012

0x2f4f,	// (0x00050419) list_single_loc_request_popup_menu_pane_ParamLimits

0x2f4f,	// (0x00050419) list_single_loc_request_popup_menu_pane

0xaf9c,	// (0x00058466) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf9c,	// (0x00058466) list_single_loc_request_popup_menu_pane_g1

0xafa8,	// (0x00058472) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xafa8,	// (0x00058472) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x0005c7b7) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x0005c7b7) list_single_loc_request_popup_menu_pane_g

0xafb4,	// (0x0005847e) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xafb4,	// (0x0005847e) list_single_loc_request_popup_menu_pane_t1

0xa7ef,	// (0x00057cb9) bg_popup_window_pane_cp03_ParamLimits

0xa7ef,	// (0x00057cb9) bg_popup_window_pane_cp03

0xafca,	// (0x00058494) heading_loc_req_pane_ParamLimits

0xafca,	// (0x00058494) heading_loc_req_pane

0x2f5c,	// (0x00050426) popup_dyc_status_message_window_g1_ParamLimits

0x2f5c,	// (0x00050426) popup_dyc_status_message_window_g1

0x2f70,	// (0x0005043a) popup_dyc_status_message_window_t1_ParamLimits

0x2f70,	// (0x0005043a) popup_dyc_status_message_window_t1

0x2f85,	// (0x0005044f) popup_dyc_status_message_window_t2_ParamLimits

0x2f85,	// (0x0005044f) popup_dyc_status_message_window_t2

0x2f9a,	// (0x00050464) popup_dyc_status_message_window_t3_ParamLimits

0x2f9a,	// (0x00050464) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x0005c7bc) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x0005c7bc) popup_dyc_status_message_window_t

0x9cf3,	// (0x000571bd) bg_heading_pane_cp01

0xafd6,	// (0x000584a0) heading_loc_req_pane_g1

0xafde,	// (0x000584a8) heading_loc_req_pane_g2

0xafe6,	// (0x000584b0) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x0005c7c3) heading_loc_req_pane_g

0xafee,	// (0x000584b8) heading_loc_req_pane_t1

0xaffd,	// (0x000584c7) bg_popup_sub_pane_cp01_ParamLimits

0xaffd,	// (0x000584c7) bg_popup_sub_pane_cp01

0xb00b,	// (0x000584d5) popup_cale_events_window_g1_ParamLimits

0xb00b,	// (0x000584d5) popup_cale_events_window_g1

0xb02b,	// (0x000584f5) popup_cale_events_window_g2_ParamLimits

0xb02b,	// (0x000584f5) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x0005c7f7) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x0005c7f7) popup_cale_events_window_g

0xb04b,	// (0x00058515) popup_cale_events_window_t1_ParamLimits

0xb04b,	// (0x00058515) popup_cale_events_window_t1

0xb05d,	// (0x00058527) popup_cale_events_window_t2_ParamLimits

0xb05d,	// (0x00058527) popup_cale_events_window_t2

0xb09b,	// (0x00058565) popup_cale_events_window_t3_ParamLimits

0xb09b,	// (0x00058565) popup_cale_events_window_t3

0xb0d5,	// (0x0005859f) popup_cale_events_window_t4_ParamLimits

0xb0d5,	// (0x0005859f) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x0005c7fc) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x0005c7fc) popup_cale_events_window_t

0x2fc2,	// (0x0005048c) call_type_pane

0x2fd2,	// (0x0005049c) popup_call_status_window_g1

0x2fe6,	// (0x000504b0) popup_call_status_window_g2

0x2ffa,	// (0x000504c4) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x0005c805) popup_call_status_window_g

0xb10b,	// (0x000585d5) call_type_pane_g1

0xb114,	// (0x000585de) call_type_pane_g2

0x0001,

0xf342,	// (0x0005c80c) call_type_pane_g

0x9cf3,	// (0x000571bd) bg_popup_sub_pane_cp02

0xb11d,	// (0x000585e7) listscroll_popup_wml_pane

0xb125,	// (0x000585ef) list_wml_pane

0xb12f,	// (0x000585f9) scroll_pane_cp013

0xb13a,	// (0x00058604) list_single_graphic_popup_wml_pane_ParamLimits

0xb13a,	// (0x00058604) list_single_graphic_popup_wml_pane

0xa909,	// (0x00057dd3) list_single_graphic_popup_wml_pane_g1

0xb14e,	// (0x00058618) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x0005c811) list_single_graphic_popup_wml_pane_g

0xb156,	// (0x00058620) list_single_graphic_popup_wml_pane_t1

0xb16c,	// (0x00058636) aid_call_pane

0xa7e7,	// (0x00057cb1) popup_clock_analogue_window_g1

0xa7e7,	// (0x00057cb1) popup_clock_analogue_window_g2

0x9f8a,	// (0x00057454) popup_clock_analogue_window_g3

0x9f8a,	// (0x00057454) popup_clock_analogue_window_g4

0xa909,	// (0x00057dd3) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x0005c816) popup_clock_analogue_window_g

0x9f92,	// (0x0005745c) popup_clock_analogue_window_t1

0x9fa0,	// (0x0005746a) clock_digital_number_pane_ParamLimits

0x9fa0,	// (0x0005746a) clock_digital_number_pane

0x9fac,	// (0x00057476) clock_digital_number_pane_cp02_ParamLimits

0x9fac,	// (0x00057476) clock_digital_number_pane_cp02

0x9fb8,	// (0x00057482) clock_digital_number_pane_cp03_ParamLimits

0x9fb8,	// (0x00057482) clock_digital_number_pane_cp03

0x9fc4,	// (0x0005748e) clock_digital_number_pane_cp04_ParamLimits

0x9fc4,	// (0x0005748e) clock_digital_number_pane_cp04

0x9fd4,	// (0x0005749e) clock_digital_separator_pane_ParamLimits

0x9fd4,	// (0x0005749e) clock_digital_separator_pane

0x9fe0,	// (0x000574aa) popup_clock_digital_window_t1

0xa909,	// (0x00057dd3) clock_digital_number_pane_g1

0xa909,	// (0x00057dd3) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x0005c784) clock_digital_number_pane_g

0xa909,	// (0x00057dd3) clock_digital_separator_pane_g1

0xa909,	// (0x00057dd3) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x0005c784) clock_digital_separator_pane_g

0x9cf3,	// (0x000571bd) bg_popup_window_pane_cp04

0xb174,	// (0x0005863e) heading_pane_cp03

0xb17c,	// (0x00058646) listscroll_popup_gms_pane

0xb184,	// (0x0005864e) grid_large_graphic_popup_pane

0xb18e,	// (0x00058658) listscroll_popup_gms_pane_g1

0xb196,	// (0x00058660) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x0005c821) listscroll_popup_gms_pane_g

0xac2b,	// (0x000580f5) scroll_pane_cp014

0x3009,	// (0x000504d3) cell_large_graphic_popup_pane_ParamLimits

0x3009,	// (0x000504d3) cell_large_graphic_popup_pane

0x3021,	// (0x000504eb) cell_large_graphic_popup_pane_g1_ParamLimits

0x3021,	// (0x000504eb) cell_large_graphic_popup_pane_g1

0xb19e,	// (0x00058668) cell_large_graphic_popup_pane_g2_ParamLimits

0xb19e,	// (0x00058668) cell_large_graphic_popup_pane_g2

0xb1aa,	// (0x00058674) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1aa,	// (0x00058674) cell_large_graphic_popup_pane_g3

0xb1b7,	// (0x00058681) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1b7,	// (0x00058681) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x0005c826) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x0005c826) cell_large_graphic_popup_pane_g

0xb1c7,	// (0x00058691) grid_highlight_pane_cp010

0xa909,	// (0x00057dd3) bg_popup_call_pane_g1

0xb1d1,	// (0x0005869b) list_single_graphic_popup_conf_pane_ParamLimits

0xb1d1,	// (0x0005869b) list_single_graphic_popup_conf_pane

0xb1e4,	// (0x000586ae) list_highlight_pane_cp01

0xb1ed,	// (0x000586b7) list_single_graphic_popup_conf_pane_g1

0xb1f5,	// (0x000586bf) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x0005c82f) list_single_graphic_popup_conf_pane_g

0xb1fd,	// (0x000586c7) list_single_graphic_popup_conf_pane_t1

0xb20b,	// (0x000586d5) linegrid_cams_pane_g1

0x302d,	// (0x000504f7) linegrid_cams_pane_g2

0xaa68,	// (0x00057f32) linegrid_cams_pane_g3

0xb214,	// (0x000586de) linegrid_cams_pane_g4

0x3036,	// (0x00050500) linegrid_cams_pane_g5

0x303f,	// (0x00050509) linegrid_cams_pane_g6

0xaa71,	// (0x00057f3b) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x0005c834) linegrid_cams_pane_g

0xb21d,	// (0x000586e7) popup_clock_analogue_window

0xb21d,	// (0x000586e7) popup_clock_digital_window

0x9cf3,	// (0x000571bd) popup_phob_thumbnail_window

0xa909,	// (0x00057dd3) call_video_uplink_pane_g1

0xb226,	// (0x000586f0) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x0005c843) call_video_uplink_pane_g

0xb22e,	// (0x000586f8) video_uplink_pane

0xb236,	// (0x00058700) mce_image_pane_g1

0x304a,	// (0x00050514) mce_image_pane_g2

0x3054,	// (0x0005051e) mce_image_pane_g3

0x305c,	// (0x00050526) mce_image_pane_g4

0x3064,	// (0x0005052e) mce_image_pane_g5

0x0004,

0xf37e,	// (0x0005c848) mce_image_pane_g

0xb240,	// (0x0005870a) control_top_pane_stacon_cp01_ParamLimits

0xb240,	// (0x0005870a) control_top_pane_stacon_cp01

0xb254,	// (0x0005871e) uni_indicator_pane_stacon_cp01_ParamLimits

0xb254,	// (0x0005871e) uni_indicator_pane_stacon_cp01

0xb265,	// (0x0005872f) bg_popup_sub_pane_cp03

0xb26f,	// (0x00058739) chi_dic_find_pane

0x306c,	// (0x00050536) listscroll_chi_dic_pane

0xb277,	// (0x00058741) main_pane_chidic_g1

0xb27f,	// (0x00058749) chi_dic_find_pane_t1

0xb28d,	// (0x00058757) find_chidic_pane

0xb296,	// (0x00058760) chi_dic_list_pane_ParamLimits

0xb296,	// (0x00058760) chi_dic_list_pane

0xb2a7,	// (0x00058771) scroll_pane_cp020

0xb2af,	// (0x00058779) find_chidic_pane_t1

0x9cf3,	// (0x000571bd) input_focus_pane_cp06

0x3080,	// (0x0005054a) list_chi_dic_pane_ParamLimits

0x3080,	// (0x0005054a) list_chi_dic_pane

0x3092,	// (0x0005055c) list_chi_dic_pane_t1_ParamLimits

0x3092,	// (0x0005055c) list_chi_dic_pane_t1

0x9cf3,	// (0x000571bd) list_highlight_pane_cp020

0xb2be,	// (0x00058788) bg_cale_heading_pane_g1

0x30a5,	// (0x0005056f) bg_cale_heading_pane_g2

0x30ad,	// (0x00050577) bg_cale_heading_pane_g3

0x30b5,	// (0x0005057f) bg_cale_heading_pane_g4

0x30bf,	// (0x00050589) bg_cale_heading_pane_g5

0x30c9,	// (0x00050593) bg_cale_heading_pane_g6

0x30d1,	// (0x0005059b) bg_cale_heading_pane_g7

0x30d9,	// (0x000505a3) bg_cale_heading_pane_g8

0x30e3,	// (0x000505ad) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x0005c853) bg_cale_heading_pane_g

0xb2be,	// (0x00058788) bg_cale_side_pane_g1

0x30ed,	// (0x000505b7) bg_cale_side_pane_g2

0x30f5,	// (0x000505bf) bg_cale_side_pane_g3

0x30fd,	// (0x000505c7) bg_cale_side_pane_g4

0x3105,	// (0x000505cf) bg_cale_side_pane_g5

0x310d,	// (0x000505d7) bg_cale_side_pane_g6

0x3115,	// (0x000505df) bg_cale_side_pane_g7

0x311d,	// (0x000505e7) bg_cale_side_pane_g8

0x3125,	// (0x000505ef) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x0005c866) bg_cale_side_pane_g

0x312d,	// (0x000505f7) popup_call_status_window_ParamLimits

0x312d,	// (0x000505f7) popup_call_status_window

0xb2c6,	// (0x00058790) stacon_top_pane

0xb2ce,	// (0x00058798) status_pane_ParamLimits

0xb2ce,	// (0x00058798) status_pane

0xb2e3,	// (0x000587ad) status_small_pane

0xb2eb,	// (0x000587b5) control_pane

0x9cf3,	// (0x000571bd) stacon_bottom_pane

0xb2f3,	// (0x000587bd) list_single_mce_smart_pane_t1_ParamLimits

0xb2f3,	// (0x000587bd) list_single_mce_smart_pane_t1

0xb306,	// (0x000587d0) list_single_mce_smart_pane_t2_ParamLimits

0xb306,	// (0x000587d0) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x0005c879) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x0005c879) list_single_mce_smart_pane_t

0x3176,	// (0x00050640) compass_pane

0x317f,	// (0x00050649) main_location2_pane_t1

0x3191,	// (0x0005065b) main_location2_pane_t2

0x31a3,	// (0x0005066d) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x0005c87e) main_location2_pane_t

0xb325,	// (0x000587ef) compass_pane_g1_ParamLimits

0xb325,	// (0x000587ef) compass_pane_g1

0x31e7,	// (0x000506b1) compass_pane_t1

0x31f6,	// (0x000506c0) compass_pane_t2

0x0005,

0xf3bd,	// (0x0005c887) compass_pane_t

0x323d,	// (0x00050707) text_secondary_cp61

0xb3a1,	// (0x0005886b) navi_pane_cams_g5

0xb41d,	// (0x000588e7) navi_pane_im_t1

0xb42b,	// (0x000588f5) navi_pane_mp_g1_ParamLimits

0xb42b,	// (0x000588f5) navi_pane_mp_g1

0xb43f,	// (0x00058909) navi_pane_mp_g2_ParamLimits

0xb43f,	// (0x00058909) navi_pane_mp_g2

0xb44b,	// (0x00058915) navi_pane_mp_g3_ParamLimits

0xb44b,	// (0x00058915) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x0005c89b) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x0005c89b) navi_pane_mp_g

0xb457,	// (0x00058921) navi_pane_mp_t1

0xb465,	// (0x0005892f) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x0005c8a2) navi_pane_mp_t

0xb4d0,	// (0x0005899a) navi_pane_vt_g1

0xb457,	// (0x00058921) navi_pane_vt_t1

0xb4d8,	// (0x000589a2) navi_slider_pane

0xaa82,	// (0x00057f4c) zooming_pane

0xb4e8,	// (0x000589b2) navi_slider_pane_g1

0x9ffd,	// (0x000574c7) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x0005c8a9) navi_slider_pane_g

0xb50c,	// (0x000589d6) aid_levels_zoom

0xb514,	// (0x000589de) zooming_pane_g1

0xb51c,	// (0x000589e6) zooming_pane_g2

0xb51c,	// (0x000589e6) zooming_pane_g3

0x0002,

0xf3ee,	// (0x0005c8b8) zooming_pane_g

0xb524,	// (0x000589ee) level_10_zoom

0xb52d,	// (0x000589f7) level_11_zoom

0xb536,	// (0x00058a00) level_1_zoom

0xb53f,	// (0x00058a09) level_2_zoom

0xb548,	// (0x00058a12) level_3_zoom

0xb551,	// (0x00058a1b) level_4_zoom

0xb55a,	// (0x00058a24) level_5_zoom

0xb563,	// (0x00058a2d) level_6_zoom

0xb56c,	// (0x00058a36) level_7_zoom

0xb575,	// (0x00058a3f) level_8_zoom

0xb57e,	// (0x00058a48) level_9_zoom

0xb58f,	// (0x00058a59) popup_phob_thumbnail_window_g1

0xb597,	// (0x00058a61) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x0005c8bf) popup_phob_thumbnail_window_g

0xc89b,	// (0x00059d65) level_1_location

0xc8a3,	// (0x00059d6d) level_2_location

0xc8ab,	// (0x00059d75) level_3_location

0xc8b3,	// (0x00059d7d) level_4_location

0xaa82,	// (0x00057f4c) level_5_location

0x328e,	// (0x00050758) mce_icon_pane_g1

0x3298,	// (0x00050762) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x0005c8c4) mce_icon_pane_g

0x32a0,	// (0x0005076a) main_mup_pane_g1_ParamLimits

0x32a0,	// (0x0005076a) main_mup_pane_g1

0x32b6,	// (0x00050780) main_mup_pane_g2_ParamLimits

0x32b6,	// (0x00050780) main_mup_pane_g2

0x32ce,	// (0x00050798) main_mup_pane_g3_ParamLimits

0x32ce,	// (0x00050798) main_mup_pane_g3

0x32e6,	// (0x000507b0) main_mup_pane_g4_ParamLimits

0x32e6,	// (0x000507b0) main_mup_pane_g4

0x32fe,	// (0x000507c8) main_mup_pane_g5_ParamLimits

0x32fe,	// (0x000507c8) main_mup_pane_g5

0x331a,	// (0x000507e4) main_mup_pane_g6_ParamLimits

0x331a,	// (0x000507e4) main_mup_pane_g6

0x3332,	// (0x000507fc) main_mup_pane_g7_ParamLimits

0x3332,	// (0x000507fc) main_mup_pane_g7

0x334a,	// (0x00050814) main_mup_pane_g8_ParamLimits

0x334a,	// (0x00050814) main_mup_pane_g8

0x3364,	// (0x0005082e) main_mup_pane_g9_ParamLimits

0x3364,	// (0x0005082e) main_mup_pane_g9

0x337e,	// (0x00050848) main_mup_pane_g10_ParamLimits

0x337e,	// (0x00050848) main_mup_pane_g10

0x3398,	// (0x00050862) main_mup_pane_g11_ParamLimits

0x3398,	// (0x00050862) main_mup_pane_g11

0x33ac,	// (0x00050876) main_mup_pane_g12_ParamLimits

0x33ac,	// (0x00050876) main_mup_pane_g12

0x33c2,	// (0x0005088c) main_mup_pane_g13_ParamLimits

0x33c2,	// (0x0005088c) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x0005c8c9) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x0005c8c9) main_mup_pane_g

0x33d6,	// (0x000508a0) main_mup_pane_t1_ParamLimits

0x33d6,	// (0x000508a0) main_mup_pane_t1

0x33f0,	// (0x000508ba) main_mup_pane_t2_ParamLimits

0x33f0,	// (0x000508ba) main_mup_pane_t2

0x3408,	// (0x000508d2) main_mup_pane_t3_ParamLimits

0x3408,	// (0x000508d2) main_mup_pane_t3

0x3420,	// (0x000508ea) main_mup_pane_t4_ParamLimits

0x3420,	// (0x000508ea) main_mup_pane_t4

0x343e,	// (0x00050908) main_mup_pane_t5_ParamLimits

0x343e,	// (0x00050908) main_mup_pane_t5

0x3453,	// (0x0005091d) main_mup_pane_t6_ParamLimits

0x3453,	// (0x0005091d) main_mup_pane_t6

0x0005,

0xf41a,	// (0x0005c8e4) main_mup_pane_t_ParamLimits

0xf41a,	// (0x0005c8e4) main_mup_pane_t

0x3465,	// (0x0005092f) mup_progress_pane_ParamLimits

0x3465,	// (0x0005092f) mup_progress_pane

0x3471,	// (0x0005093b) mup_visualizer_pane_ParamLimits

0x3471,	// (0x0005093b) mup_visualizer_pane

0x34a1,	// (0x0005096b) mup_volume_pane_ParamLimits

0x34a1,	// (0x0005096b) mup_volume_pane

0xb59f,	// (0x00058a69) mup_visualizer_pane_g1_ParamLimits

0xb59f,	// (0x00058a69) mup_visualizer_pane_g1

0xb59f,	// (0x00058a69) mup_visualizer_pane_g2_ParamLimits

0xb59f,	// (0x00058a69) mup_visualizer_pane_g2

0xb325,	// (0x000587ef) mup_visualizer_pane_g3_ParamLimits

0xb325,	// (0x000587ef) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x0005c8f1) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x0005c8f1) mup_visualizer_pane_g

0xa909,	// (0x00057dd3) mup_volume_pane_g1

0xb5b5,	// (0x00058a7f) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x0005c8f8) mup_volume_pane_g

0xa909,	// (0x00057dd3) mup_progress_pane_g1

0xb5cc,	// (0x00058a96) mup_progress_pane_g2

0xb5d5,	// (0x00058a9f) mup_progress_pane_g3

0x0002,

0xf433,	// (0x0005c8fd) mup_progress_pane_g

0x9cf3,	// (0x000571bd) bg_popup_window_pane_cp05

0xb5de,	// (0x00058aa8) heading_pane_cp02_ParamLimits

0xb5de,	// (0x00058aa8) heading_pane_cp02

0xb5f8,	// (0x00058ac2) list_popup_blid_pane

0xb600,	// (0x00058aca) list_blid_sat_info_pane_ParamLimits

0xb600,	// (0x00058aca) list_blid_sat_info_pane

0xb613,	// (0x00058add) list_blid_sat_info_pane_g1

0xb61b,	// (0x00058ae5) list_blid_sat_info_pane_t1

0x35b7,	// (0x00050a81) mup_equalizer_pane_ParamLimits

0x35b7,	// (0x00050a81) mup_equalizer_pane

0x35d0,	// (0x00050a9a) mup_equalizer_pane_cp1_ParamLimits

0x35d0,	// (0x00050a9a) mup_equalizer_pane_cp1

0x35ed,	// (0x00050ab7) mup_equalizer_pane_cp2_ParamLimits

0x35ed,	// (0x00050ab7) mup_equalizer_pane_cp2

0x360a,	// (0x00050ad4) mup_equalizer_pane_cp3_ParamLimits

0x360a,	// (0x00050ad4) mup_equalizer_pane_cp3

0x362b,	// (0x00050af5) mup_equalizer_pane_cp4_ParamLimits

0x362b,	// (0x00050af5) mup_equalizer_pane_cp4

0x364c,	// (0x00050b16) mup_equalizer_pane_cp5

0x3660,	// (0x00050b2a) mup_equalizer_pane_cp6

0x3674,	// (0x00050b3e) mup_equalizer_pane_cp7

0xc7b9,	// (0x00059c83) bg_popup_call_poc_act_pane_g9

0xc7c1,	// (0x00059c8b) bg_popup_call_poc_act_pane_g10

0xc7c9,	// (0x00059c93) bg_popup_call_poc_act_pane_g11

0x000a,

0xa7ef,	// (0x00057cb9) mup_scale_pane

0xa909,	// (0x00057dd3) mup_scale_pane_g1

0xb629,	// (0x00058af3) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x0005c919) mup_scale_pane_g

0xb64d,	// (0x00058b17) msg_data_pane

0xb655,	// (0x00058b1f) scroll_pane_cp017

0x0264,	// (0x0004d72e) bg_list_pane_cp04_ParamLimits

0x0264,	// (0x0004d72e) bg_list_pane_cp04

0xb65d,	// (0x00058b27) msg_data_pane_g1

0x36a2,	// (0x00050b6c) msg_data_pane_g2

0x36ac,	// (0x00050b76) msg_data_pane_g3

0x36b4,	// (0x00050b7e) msg_data_pane_g4

0x36bc,	// (0x00050b86) msg_data_pane_g5

0x36c4,	// (0x00050b8e) msg_data_pane_g6

0x36cc,	// (0x00050b96) msg_data_pane_g7

0x0006,

0xf45e,	// (0x0005c928) msg_data_pane_g

0x027c,	// (0x0004d746) msg_text_pane_ParamLimits

0x027c,	// (0x0004d746) msg_text_pane

0x36d4,	// (0x00050b9e) qrid_highlight_pane_cp011_ParamLimits

0x36d4,	// (0x00050b9e) qrid_highlight_pane_cp011

0x9cf3,	// (0x000571bd) msg_body_pane

0x9cf3,	// (0x000571bd) msg_header_pane

0xb66e,	// (0x00058b38) input_focus_pane_cp07

0x02b7,	// (0x0004d781) msg_header_pane_t1_ParamLimits

0x02b7,	// (0x0004d781) msg_header_pane_t1

0x36ea,	// (0x00050bb4) msg_header_pane_t2_ParamLimits

0x36ea,	// (0x00050bb4) msg_header_pane_t2

0x0001,

0xf472,	// (0x0005c93c) msg_header_pane_t_ParamLimits

0xf472,	// (0x0005c93c) msg_header_pane_t

0xb683,	// (0x00058b4d) msg_body_pane_g1

0x02c9,	// (0x0004d793) msg_body_pane_t1_ParamLimits

0x02c9,	// (0x0004d793) msg_body_pane_t1

0x36fc,	// (0x00050bc6) msg_body_pane_t2_ParamLimits

0x36fc,	// (0x00050bc6) msg_body_pane_t2

0x370e,	// (0x00050bd8) msg_body_pane_t3_ParamLimits

0x370e,	// (0x00050bd8) msg_body_pane_t3

0x0002,

0xf477,	// (0x0005c941) msg_body_pane_t_ParamLimits

0xf477,	// (0x0005c941) msg_body_pane_t

0x375a,	// (0x00050c24) main_viewer_pane_g1_ParamLimits

0x375a,	// (0x00050c24) main_viewer_pane_g1

0x3768,	// (0x00050c32) main_viewer_pane_g2_ParamLimits

0x3768,	// (0x00050c32) main_viewer_pane_g2

0x3776,	// (0x00050c40) main_viewer_pane_g3_ParamLimits

0x3776,	// (0x00050c40) main_viewer_pane_g3

0x3785,	// (0x00050c4f) main_viewer_pane_g4_ParamLimits

0x3785,	// (0x00050c4f) main_viewer_pane_g4

0xa027,	// (0x000574f1) main_viewer_pane_g5_ParamLimits

0xa027,	// (0x000574f1) main_viewer_pane_g5

0xa027,	// (0x000574f1) main_viewer_pane_g7_ParamLimits

0xa027,	// (0x000574f1) main_viewer_pane_g7

0xa039,	// (0x00057503) main_viewer_pane_g8_ParamLimits

0xa039,	// (0x00057503) main_viewer_pane_g8

0x0007,

0xf487,	// (0x0005c951) main_viewer_pane_g_ParamLimits

0xf487,	// (0x0005c951) main_viewer_pane_g

0xb68b,	// (0x00058b55) viewer_content_pane_ParamLimits

0xb68b,	// (0x00058b55) viewer_content_pane

0x37c1,	// (0x00050c8b) main_postcard_pane_g1_ParamLimits

0x37c1,	// (0x00050c8b) main_postcard_pane_g1

0x37d7,	// (0x00050ca1) main_postcard_pane_g2_ParamLimits

0x37d7,	// (0x00050ca1) main_postcard_pane_g2

0x37ed,	// (0x00050cb7) main_postcard_pane_g3_ParamLimits

0x37ed,	// (0x00050cb7) main_postcard_pane_g3

0x0005,

0xf498,	// (0x0005c962) main_postcard_pane_g_ParamLimits

0xf498,	// (0x0005c962) main_postcard_pane_g

0x3804,	// (0x00050cce) main_postcard_pane_g4

0xc99b,	// (0x00059e65) smil_status_volume_pane_g2

0x3847,	// (0x00050d11) postcard_pane_ParamLimits

0x3847,	// (0x00050d11) postcard_pane

0xb699,	// (0x00058b63) postcard_pane_g1_ParamLimits

0xb699,	// (0x00058b63) postcard_pane_g1

0x3889,	// (0x00050d53) postcard_pane_g2_ParamLimits

0x3889,	// (0x00050d53) postcard_pane_g2

0x3895,	// (0x00050d5f) postcard_pane_g3_ParamLimits

0x3895,	// (0x00050d5f) postcard_pane_g3

0xb6a7,	// (0x00058b71) postcard_pane_g4_ParamLimits

0xb6a7,	// (0x00058b71) postcard_pane_g4

0x38a1,	// (0x00050d6b) postcard_pane_g5_ParamLimits

0x38a1,	// (0x00050d6b) postcard_pane_g5

0x38b6,	// (0x00050d80) postcard_pane_g6_ParamLimits

0x38b6,	// (0x00050d80) postcard_pane_g6

0xb699,	// (0x00058b63) postcard_pane_g7_ParamLimits

0xb699,	// (0x00058b63) postcard_pane_g7

0x0006,

0xf4a5,	// (0x0005c96f) postcard_pane_g_ParamLimits

0xf4a5,	// (0x0005c96f) postcard_pane_g

0x38ca,	// (0x00050d94) main_mp2_pane_g1_ParamLimits

0x38ca,	// (0x00050d94) main_mp2_pane_g1

0x38d6,	// (0x00050da0) main_mp2_pane_g2_ParamLimits

0x38d6,	// (0x00050da0) main_mp2_pane_g2

0x38e2,	// (0x00050dac) main_mp2_pane_g3_ParamLimits

0x38e2,	// (0x00050dac) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x0005c97e) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x0005c97e) main_mp2_pane_g

0x38ee,	// (0x00050db8) main_mp2_pane_t1_ParamLimits

0x38ee,	// (0x00050db8) main_mp2_pane_t1

0x3903,	// (0x00050dcd) main_mp2_pane_t2_ParamLimits

0x3903,	// (0x00050dcd) main_mp2_pane_t2

0x3915,	// (0x00050ddf) main_mp2_pane_t3_ParamLimits

0x3915,	// (0x00050ddf) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x0005c985) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x0005c985) main_mp2_pane_t

0xb6b5,	// (0x00058b7f) pec_content_pane_ParamLimits

0xb6b5,	// (0x00058b7f) pec_content_pane

0xac2b,	// (0x000580f5) scroll_pane_cp015

0xb6c7,	// (0x00058b91) pec_attribute_pane_ParamLimits

0xb6c7,	// (0x00058b91) pec_attribute_pane

0x3927,	// (0x00050df1) pec_content_pane_g1_ParamLimits

0x3927,	// (0x00050df1) pec_content_pane_g1

0xb6d7,	// (0x00058ba1) pec_content_pane_t1_ParamLimits

0xb6d7,	// (0x00058ba1) pec_content_pane_t1

0xb6e9,	// (0x00058bb3) pec_content_pane_t2_ParamLimits

0xb6e9,	// (0x00058bb3) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x0005c98c) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x0005c98c) pec_content_pane_t

0x3933,	// (0x00050dfd) list_single_graphic_pane_cp01_ParamLimits

0x3933,	// (0x00050dfd) list_single_graphic_pane_cp01

0xa7ef,	// (0x00057cb9) bg_popup_sub_pane_cp04

0xb6fb,	// (0x00058bc5) popup_mup_playback_window_g1

0xb707,	// (0x00058bd1) popup_mup_playback_window_t1

0xb71c,	// (0x00058be6) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x0005c991) popup_mup_playback_window_t

0xb753,	// (0x00058c1d) main_image_pane_g1_ParamLimits

0xb753,	// (0x00058c1d) main_image_pane_g1

0xb796,	// (0x00058c60) scroll_pane_cp018_ParamLimits

0xb796,	// (0x00058c60) scroll_pane_cp018

0xb7ae,	// (0x00058c78) scroll_pane_cp016_ParamLimits

0xb7ae,	// (0x00058c78) scroll_pane_cp016

0x3a00,	// (0x00050eca) smil2_image_pane_ParamLimits

0x3a00,	// (0x00050eca) smil2_image_pane

0x3a30,	// (0x00050efa) smil2_root_pane_ParamLimits

0x3a30,	// (0x00050efa) smil2_root_pane

0x3a68,	// (0x00050f32) smil2_text_pane_ParamLimits

0x3a68,	// (0x00050f32) smil2_text_pane

0x9cf3,	// (0x000571bd) bg_list_pane_cp06

0xb7ea,	// (0x00058cb4) grid_radio_pane

0x9cf3,	// (0x000571bd) bg_popup_window_pane_cp06

0xb7f2,	// (0x00058cbc) main_fmradio_pane_t1

0xb174,	// (0x0005863e) heading_pane_cp04

0xb800,	// (0x00058cca) main_fmradio_pane_t2

0xc7d1,	// (0x00059c9b) popup_cale_lunar_info_window_g1

0xb80e,	// (0x00058cd8) main_fmradio_pane_t3

0xc7d9,	// (0x00059ca3) popup_cale_lunar_info_window_g2

0xb81c,	// (0x00058ce6) main_fmradio_pane_t4

0x0001,

0xb82a,	// (0x00058cf4) main_fmradio_pane_t5

0x0004,

0xf5a2,	// (0x0005ca6c) popup_cale_lunar_info_window_g

0xf4dc,	// (0x0005c9a6) main_fmradio_pane_t

0xb838,	// (0x00058d02) wait_bar_pane_cp03

0xb840,	// (0x00058d0a) cell_fmradio_pane_ParamLimits

0xb840,	// (0x00058d0a) cell_fmradio_pane

0xb699,	// (0x00058b63) cell_fmradio_pane_g1_ParamLimits

0xb699,	// (0x00058b63) cell_fmradio_pane_g1

0x9cf3,	// (0x000571bd) grid_highlight_pane_cp011

0xb853,	// (0x00058d1d) poc_content_pane_ParamLimits

0xb853,	// (0x00058d1d) poc_content_pane

0xb865,	// (0x00058d2f) scroll_pane_cp019

0x3ae8,	// (0x00050fb2) popup_call_poc_act_window_ParamLimits

0x3ae8,	// (0x00050fb2) popup_call_poc_act_window

0x3b0c,	// (0x00050fd6) popup_call_poc_inact_window_ParamLimits

0x3b0c,	// (0x00050fd6) popup_call_poc_inact_window

0xf579,	// (0x0005ca43) bg_popup_call_poc_act_pane_g

0xc749,	// (0x00059c13) bg_popup_call_poc_inact_pane_g1

0xc751,	// (0x00059c1b) bg_popup_call_poc_inact_pane_g2

0xb86d,	// (0x00058d37) popup_call_poc_act_window_g2

0xc759,	// (0x00059c23) bg_popup_call_poc_inact_pane_g3

0xc761,	// (0x00059c2b) bg_popup_call_poc_inact_pane_g4

0xc769,	// (0x00059c33) bg_popup_call_poc_inact_pane_g5

0xb875,	// (0x00058d3f) popup_call_poc_act_window_t1_ParamLimits

0xb875,	// (0x00058d3f) popup_call_poc_act_window_t1

0xb89d,	// (0x00058d67) popup_call_poc_act_window_t2_ParamLimits

0xb89d,	// (0x00058d67) popup_call_poc_act_window_t2

0xb8c5,	// (0x00058d8f) popup_call_poc_act_window_t3_ParamLimits

0xb8c5,	// (0x00058d8f) popup_call_poc_act_window_t3

0xb8ed,	// (0x00058db7) popup_call_poc_act_window_t4_ParamLimits

0xb8ed,	// (0x00058db7) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x0005c9b1) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x0005c9b1) popup_call_poc_act_window_t

0xc771,	// (0x00059c3b) bg_popup_call_poc_inact_pane_g6

0xc779,	// (0x00059c43) bg_popup_call_poc_inact_pane_g7

0xc781,	// (0x00059c4b) bg_popup_call_poc_inact_pane_g8

0xb8ff,	// (0x00058dc9) popup_call_poc_inact_window_g2

0xc789,	// (0x00059c53) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf566,	// (0x0005ca30) bg_popup_call_poc_inact_pane_g

0xb907,	// (0x00058dd1) popup_call_poc_inact_window_t1_ParamLimits

0xb907,	// (0x00058dd1) popup_call_poc_inact_window_t1

0xb91c,	// (0x00058de6) popup_call_poc_inact_window_t2_ParamLimits

0xb91c,	// (0x00058de6) popup_call_poc_inact_window_t2

0xb931,	// (0x00058dfb) popup_call_poc_inact_window_t3_ParamLimits

0xb931,	// (0x00058dfb) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x0005c9ba) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x0005c9ba) popup_call_poc_inact_window_t

0xc90e,	// (0x00059dd8) context_pane_ParamLimits

0x433b,	// (0x00051805) signal_pane_ParamLimits

0xaa82,	// (0x00057f4c) main_call2_pane

0xa07e,	// (0x00057548) popup_phob_thumbnail2_window_ParamLimits

0xa07e,	// (0x00057548) popup_phob_thumbnail2_window

0xa00f,	// (0x000574d9) aid_hotspot_pointer_arrow_pane

0xa017,	// (0x000574e1) aid_hotspot_pointer_hand_pane

0x3e55,	// (0x0005131f) phob_pre_status_pane_g5

0x1c5d,	// (0x0004f127) cams_zoom_pane_ParamLimits

0x1c6c,	// (0x0004f136) image_vga_pane_ParamLimits

0x1c86,	// (0x0004f150) main_camera_pane_g1_ParamLimits

0x1c98,	// (0x0004f162) main_camera_pane_g2_ParamLimits

0x1ca8,	// (0x0004f172) main_camera_pane_g3_ParamLimits

0x1cb8,	// (0x0004f182) main_camera_pane_g4_ParamLimits

0x1cc8,	// (0x0004f192) main_camera_pane_g5_ParamLimits

0x1cd8,	// (0x0004f1a2) main_camera_pane_g6_ParamLimits

0x1cea,	// (0x0004f1b4) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x0005c6b9) main_camera_pane_g_ParamLimits

0x1cfa,	// (0x0004f1c4) main_camera_pane_t1_ParamLimits

0x1d10,	// (0x0004f1da) main_camera_pane_t2_ParamLimits

0xf200,	// (0x0005c6ca) main_camera_pane_t_ParamLimits

0xa7ef,	// (0x00057cb9) bg_popup_preview_window_pane_cp01_ParamLimits

0xa7ef,	// (0x00057cb9) bg_popup_preview_window_pane_cp01

0xb946,	// (0x00058e10) popup_phob_thumbnail2_window_g1_ParamLimits

0xb946,	// (0x00058e10) popup_phob_thumbnail2_window_g1

0x9cf3,	// (0x000571bd) call2_cli_visual_pane

0x3b40,	// (0x0005100a) popup_call2_audio_conf_window_ParamLimits

0x3b40,	// (0x0005100a) popup_call2_audio_conf_window

0x3b60,	// (0x0005102a) popup_call2_audio_first_window_ParamLimits

0x3b60,	// (0x0005102a) popup_call2_audio_first_window

0x3bf6,	// (0x000510c0) popup_call2_audio_in_window_ParamLimits

0x3bf6,	// (0x000510c0) popup_call2_audio_in_window

0x3c3e,	// (0x00051108) popup_call2_audio_out_window_ParamLimits

0x3c3e,	// (0x00051108) popup_call2_audio_out_window

0x3ca8,	// (0x00051172) popup_call2_audio_second_window_ParamLimits

0x3ca8,	// (0x00051172) popup_call2_audio_second_window

0x3d0e,	// (0x000511d8) popup_call2_audio_wait_window_ParamLimits

0x3d0e,	// (0x000511d8) popup_call2_audio_wait_window

0x9cf3,	// (0x000571bd) bg_popup_call2_act_pane_cp03

0xa7d1,	// (0x00057c9b) list_conf_pane_cp

0xb952,	// (0x00058e1c) popup_call2_audio_conf_window_t1

0xb1d1,	// (0x0005869b) list_single_graphic_popup_conf2_pane_ParamLimits

0xb1d1,	// (0x0005869b) list_single_graphic_popup_conf2_pane

0xb1e4,	// (0x000586ae) list_highlight_pane_cp04

0xb960,	// (0x00058e2a) list_single_graphic_popup_conf2_pane_g1

0xb1f5,	// (0x000586bf) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x0005c9c1) list_single_graphic_popup_conf2_pane_g

0xb96a,	// (0x00058e34) list_single_graphic_popup_conf2_pane_t1

0xb978,	// (0x00058e42) bg_popup_call2_act_pane_cp01_ParamLimits

0xb978,	// (0x00058e42) bg_popup_call2_act_pane_cp01

0xba02,	// (0x00058ecc) call_type_pane_cp05_ParamLimits

0xba02,	// (0x00058ecc) call_type_pane_cp05

0xba56,	// (0x00058f20) popup_call2_audio_second_window_g1_ParamLimits

0xba56,	// (0x00058f20) popup_call2_audio_second_window_g1

0xbaaa,	// (0x00058f74) popup_call2_audio_second_window_g2_ParamLimits

0xbaaa,	// (0x00058f74) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x0005c9c6) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x0005c9c6) popup_call2_audio_second_window_g

0xbb0f,	// (0x00058fd9) popup_call2_audio_second_window_t1_ParamLimits

0xbb0f,	// (0x00058fd9) popup_call2_audio_second_window_t1

0xbbca,	// (0x00059094) popup_call2_audio_second_window_t2_ParamLimits

0xbbca,	// (0x00059094) popup_call2_audio_second_window_t2

0xbc1d,	// (0x000590e7) popup_call2_audio_second_window_t3_ParamLimits

0xbc1d,	// (0x000590e7) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x0005c9cd) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x0005c9cd) popup_call2_audio_second_window_t

0x9cf3,	// (0x000571bd) bg_popup_call2_in_pane_cp02

0x9cfd,	// (0x000571c7) call_type_pane_cp04

0x9d05,	// (0x000571cf) popup_call2_audio_wait_window_g1

0x9d0d,	// (0x000571d7) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0005c5a8) popup_call2_audio_wait_window_g

0x9d15,	// (0x000571df) popup_call2_audio_wait_window_t3

0xbd10,	// (0x000591da) bg_popup_call2_act_pane_ParamLimits

0xbd10,	// (0x000591da) bg_popup_call2_act_pane

0xbdd0,	// (0x0005929a) call_type_pane_cp03_ParamLimits

0xbdd0,	// (0x0005929a) call_type_pane_cp03

0xbe34,	// (0x000592fe) popup_call2_audio_first_window_g1_ParamLimits

0xbe34,	// (0x000592fe) popup_call2_audio_first_window_g1

0xbea4,	// (0x0005936e) popup_call2_audio_first_window_g2_ParamLimits

0xbea4,	// (0x0005936e) popup_call2_audio_first_window_g2

0xb59f,	// (0x00058a69) popup_call2_audio_first_window_g3_ParamLimits

0xb59f,	// (0x00058a69) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x0005c9d6) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x0005c9d6) popup_call2_audio_first_window_g

0xbf82,	// (0x0005944c) popup_call2_audio_first_window_t1_ParamLimits

0xbf82,	// (0x0005944c) popup_call2_audio_first_window_t1

0xc085,	// (0x0005954f) popup_call2_audio_first_window_t4_ParamLimits

0xc085,	// (0x0005954f) popup_call2_audio_first_window_t4

0xc168,	// (0x00059632) popup_call2_audio_first_window_t5_ParamLimits

0xc168,	// (0x00059632) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x0005c9e1) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x0005c9e1) popup_call2_audio_first_window_t

0xa7e7,	// (0x00057cb1) bg_popup_call2_act_pane_g1

0xc7e1,	// (0x00059cab) popup_cale_lunar_info_window_t1

0xc7ef,	// (0x00059cb9) popup_cale_lunar_info_window_t2

0xc7fd,	// (0x00059cc7) popup_cale_lunar_info_window_t3

0x9cf3,	// (0x000571bd) bg_popup_call2_bubble_pane

0xc269,	// (0x00059733) bg_popup_call2_in_pane_cp01_ParamLimits

0xc269,	// (0x00059733) bg_popup_call2_in_pane_cp01

0x99cf,	// (0x00056e99) call_type_pane_cp02

0xc2b1,	// (0x0005977b) popup_call2_audio_out_window_g1_ParamLimits

0xc2b1,	// (0x0005977b) popup_call2_audio_out_window_g1

0xc2dd,	// (0x000597a7) popup_call2_audio_out_window_g2_ParamLimits

0xc2dd,	// (0x000597a7) popup_call2_audio_out_window_g2

0xc305,	// (0x000597cf) popup_call2_audio_out_window_g3_ParamLimits

0xc305,	// (0x000597cf) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x0005c9ea) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x0005c9ea) popup_call2_audio_out_window_g

0xc340,	// (0x0005980a) popup_call2_audio_out_window_t1_ParamLimits

0xc340,	// (0x0005980a) popup_call2_audio_out_window_t1

0xc39f,	// (0x00059869) popup_call2_audio_out_window_t2_ParamLimits

0xc39f,	// (0x00059869) popup_call2_audio_out_window_t2

0xc3f3,	// (0x000598bd) popup_call2_audio_out_window_t3_ParamLimits

0xc3f3,	// (0x000598bd) popup_call2_audio_out_window_t3

0xc409,	// (0x000598d3) popup_call2_audio_out_window_t4_ParamLimits

0xc409,	// (0x000598d3) popup_call2_audio_out_window_t4

0xc41f,	// (0x000598e9) popup_call2_audio_out_window_t5_ParamLimits

0xc41f,	// (0x000598e9) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x0005c9f3) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x0005c9f3) popup_call2_audio_out_window_t

0xc48f,	// (0x00059959) bg_popup_call2_in_pane_ParamLimits

0xc48f,	// (0x00059959) bg_popup_call2_in_pane

0xc4eb,	// (0x000599b5) popup_call2_audio_in_window_g1_ParamLimits

0xc4eb,	// (0x000599b5) popup_call2_audio_in_window_g1

0xc523,	// (0x000599ed) popup_call2_audio_in_window_g2_ParamLimits

0xc523,	// (0x000599ed) popup_call2_audio_in_window_g2

0xc55b,	// (0x00059a25) popup_call2_audio_in_window_g3_ParamLimits

0xc55b,	// (0x00059a25) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x0005ca00) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x0005ca00) popup_call2_audio_in_window_g

0xc5b3,	// (0x00059a7d) popup_call2_audio_in_window_t1_ParamLimits

0xc5b3,	// (0x00059a7d) popup_call2_audio_in_window_t1

0xc633,	// (0x00059afd) popup_call2_audio_in_window_t2_ParamLimits

0xc633,	// (0x00059afd) popup_call2_audio_in_window_t2

0xc6b3,	// (0x00059b7d) popup_call2_audio_in_window_t3_ParamLimits

0xc6b3,	// (0x00059b7d) popup_call2_audio_in_window_t3

0xc6cd,	// (0x00059b97) popup_call2_audio_in_window_t4_ParamLimits

0xc6cd,	// (0x00059b97) popup_call2_audio_in_window_t4

0xc6df,	// (0x00059ba9) popup_call2_audio_in_window_t5_ParamLimits

0xc6df,	// (0x00059ba9) popup_call2_audio_in_window_t5

0xc6f4,	// (0x00059bbe) popup_call2_audio_in_window_t6_ParamLimits

0xc6f4,	// (0x00059bbe) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x0005ca09) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x0005ca09) popup_call2_audio_in_window_t

0xa7e7,	// (0x00057cb1) bg_popup_call2_in_pane_g1

0xc80b,	// (0x00059cd5) popup_cale_lunar_info_window_t4

0x0003,

0xf5a7,	// (0x0005ca71) popup_cale_lunar_info_window_t

0xa7ef,	// (0x00057cb9) bg_popup_call2_rect_pane_ParamLimits

0xa7ef,	// (0x00057cb9) bg_popup_call2_rect_pane

0x9cf3,	// (0x000571bd) call2_cli_visual_graphic_pane

0x9cf3,	// (0x000571bd) call2_cli_visual_text_pane

0xa0a5,	// (0x0005756f) smil_status_volume_pane_g3

0x0002,

0xa909,	// (0x00057dd3) call2_cli_visual_graphic_pane_g1

0xa909,	// (0x00057dd3) call2_cli_visual_graphic_pane_g2

0xa909,	// (0x00057dd3) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x0005ca16) call2_cli_visual_graphic_pane_g

0xc709,	// (0x00059bd3) bg_popup_call2_rect_pane_g1

0xa99e,	// (0x00057e68) bg_popup_call2_rect_pane_g2

0xc711,	// (0x00059bdb) bg_popup_call2_rect_pane_g3

0xc719,	// (0x00059be3) bg_popup_call2_rect_pane_g4

0xc721,	// (0x00059beb) bg_popup_call2_rect_pane_g5

0xc729,	// (0x00059bf3) bg_popup_call2_rect_pane_g6

0xc731,	// (0x00059bfb) bg_popup_call2_rect_pane_g7

0xc739,	// (0x00059c03) bg_popup_call2_rect_pane_g8

0xc741,	// (0x00059c0b) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x0005ca1d) bg_popup_call2_rect_pane_g

0xc749,	// (0x00059c13) bg_popup_call2_bubble_pane_g1

0xc751,	// (0x00059c1b) bg_popup_call2_bubble_pane_g2

0xc759,	// (0x00059c23) bg_popup_call2_bubble_pane_g3

0xc761,	// (0x00059c2b) bg_popup_call2_bubble_pane_g4

0xc769,	// (0x00059c33) bg_popup_call2_bubble_pane_g5

0xc771,	// (0x00059c3b) bg_popup_call2_bubble_pane_g6

0xc779,	// (0x00059c43) bg_popup_call2_bubble_pane_g7

0xc781,	// (0x00059c4b) bg_popup_call2_bubble_pane_g8

0xc789,	// (0x00059c53) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x0005ca30) bg_popup_call2_bubble_pane_g

0x16a2,	// (0x0004eb6c) aid_cale_week_size_cell_pane

0x1d26,	// (0x0004f1f0) aid_cams_cif_uncrop_pane_ParamLimits

0x1d26,	// (0x0004f1f0) aid_cams_cif_uncrop_pane

0x1ed6,	// (0x0004f3a0) aid_cams_size_cell_ParamLimits

0x1ed6,	// (0x0004f3a0) aid_cams_size_cell

0x1eea,	// (0x0004f3b4) grid_cams_pane_ParamLimits

0x1f04,	// (0x0004f3ce) linegrid_cams_pane_ParamLimits

0x1feb,	// (0x0004f4b5) call_video_pane_t1

0x2009,	// (0x0004f4d3) call_video_pane_t2

0x0001,

0xf253,	// (0x0005c71d) call_video_pane_t

0x2437,	// (0x0004f901) aid_cale_month_size_cell_pane_ParamLimits

0x2437,	// (0x0004f901) aid_cale_month_size_cell_pane

0xf5f0,	// (0x0005caba) smil_status_volume_pane_g

0xa0b2,	// (0x0005757c) volume_smil_pane_ParamLimits

0x988a,	// (0x00056d54) aid_popup2_width_pane

0x160a,	// (0x0004ead4) cell_qdial_pane_g4_ParamLimits

0x160a,	// (0x0004ead4) cell_qdial_pane_g4

0x31c7,	// (0x00050691) aid_blid_cardinal_pane_ParamLimits

0x31d3,	// (0x0005069d) aid_blid_destination_pane_ParamLimits

0x31d3,	// (0x0005069d) aid_blid_destination_pane

0xa7ef,	// (0x00057cb9) bg_popup_call_poc_act_pane_ParamLimits

0xa7ef,	// (0x00057cb9) bg_popup_call_poc_act_pane

0xa7ef,	// (0x00057cb9) bg_popup_call_poc_inact_pane_ParamLimits

0xa7ef,	// (0x00057cb9) bg_popup_call_poc_inact_pane

0xc791,	// (0x00059c5b) bg_popup_call_poc_act_pane_g1

0xc799,	// (0x00059c63) bg_popup_call_poc_act_pane_g2

0xc7a1,	// (0x00059c6b) bg_popup_call_poc_act_pane_g3

0xc761,	// (0x00059c2b) bg_popup_call_poc_act_pane_g4

0xc769,	// (0x00059c33) bg_popup_call_poc_act_pane_g5

0xc7a9,	// (0x00059c73) bg_popup_call_poc_act_pane_g6

0xc779,	// (0x00059c43) bg_popup_call_poc_act_pane_g7

0xc7b1,	// (0x00059c7b) bg_popup_call_poc_act_pane_g8

0x9cf3,	// (0x000571bd) main_usb_pane

0xa059,	// (0x00057523) popup_cale_lunar_info_window

0x22e3,	// (0x0004f7ad) im_reading_pane_t1_ParamLimits

0xab83,	// (0x0005804d) list_im_pane_ParamLimits

0xab94,	// (0x0005805e) scroll_pane_cp07_ParamLimits

0x9cf3,	// (0x000571bd) grid_highlight_pane_cp012

0xa7ef,	// (0x00057cb9) mup_scale_pane_ParamLimits

0xb699,	// (0x00058b63) main_usb_pane_g1_ParamLimits

0xb699,	// (0x00058b63) main_usb_pane_g1

0x3d6a,	// (0x00051234) main_usb_pane_g2_ParamLimits

0x3d6a,	// (0x00051234) main_usb_pane_g2

0x0001,

0xf590,	// (0x0005ca5a) main_usb_pane_g_ParamLimits

0xf590,	// (0x0005ca5a) main_usb_pane_g

0x3d80,	// (0x0005124a) main_usb_pane_t1_ParamLimits

0x3d80,	// (0x0005124a) main_usb_pane_t1

0x3d92,	// (0x0005125c) main_usb_pane_t2_ParamLimits

0x3d92,	// (0x0005125c) main_usb_pane_t2

0x3da4,	// (0x0005126e) main_usb_pane_t3_ParamLimits

0x3da4,	// (0x0005126e) main_usb_pane_t3

0x3db6,	// (0x00051280) main_usb_pane_t4_ParamLimits

0x3db6,	// (0x00051280) main_usb_pane_t4

0x3dc8,	// (0x00051292) main_usb_pane_t5_ParamLimits

0x3dc8,	// (0x00051292) main_usb_pane_t5

0x3dda,	// (0x000512a4) main_usb_pane_t6_ParamLimits

0x3dda,	// (0x000512a4) main_usb_pane_t6

0x0005,

0xf595,	// (0x0005ca5f) main_usb_pane_t_ParamLimits

0x3176,	// (0x00050640) aid_text_placing

0x317f,	// (0x00050649) main_location2_pane_t1_ParamLimits

0x3191,	// (0x0005065b) main_location2_pane_t2_ParamLimits

0x31a3,	// (0x0005066d) main_location2_pane_t3_ParamLimits

0x31b5,	// (0x0005067f) main_location2_pane_t4_ParamLimits

0x31b5,	// (0x0005067f) main_location2_pane_t4

0xf3b4,	// (0x0005c87e) main_location2_pane_t_ParamLimits

0xa82b,	// (0x00057cf5) find_pinb_pane_g2_ParamLimits

0xa82b,	// (0x00057cf5) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0005c5ce) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0005c5ce) find_pinb_pane_g

0xa837,	// (0x00057d01) find_pinb_pane_t1_ParamLimits

0xa849,	// (0x00057d13) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0005c5d3) find_pinb_pane_t_ParamLimits

0x9cf3,	// (0x000571bd) main_call3_pane

0x2922,	// (0x0004fdec) cale_month_day_heading_pane_t1_ParamLimits

0x29a8,	// (0x0004fe72) cale_month_day_heading_pane_t2_ParamLimits

0x2a21,	// (0x0004feeb) cale_month_day_heading_pane_t3_ParamLimits

0x2a9a,	// (0x0004ff64) cale_month_day_heading_pane_t4_ParamLimits

0x2b1b,	// (0x0004ffe5) cale_month_day_heading_pane_t5_ParamLimits

0x2ba4,	// (0x0005006e) cale_month_day_heading_pane_t6_ParamLimits

0x2c2d,	// (0x000500f7) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x0005c755) cale_month_day_heading_pane_t_ParamLimits

0xadde,	// (0x000582a8) smil_status_volume_pane

0x3865,	// (0x00050d2f) postcard_address_pane_ParamLimits

0x3865,	// (0x00050d2f) postcard_address_pane

0x3877,	// (0x00050d41) postcard_message_pane_ParamLimits

0x3877,	// (0x00050d41) postcard_message_pane

0x3d48,	// (0x00051212) call2_cli_visual_pane_t1_ParamLimits

0x3d48,	// (0x00051212) call2_cli_visual_pane_t1

0x4568,	// (0x00051a32) postcard_message_pane_t1_ParamLimits

0x4568,	// (0x00051a32) postcard_message_pane_t1

0x4551,	// (0x00051a1b) postcard_address_pane_t1_ParamLimits

0x4551,	// (0x00051a1b) postcard_address_pane_t1

0x453d,	// (0x00051a07) popup_call3_audio_in_window_ParamLimits

0x453d,	// (0x00051a07) popup_call3_audio_in_window

0x43c8,	// (0x00051892) bg_popup_call3_in_pane_ParamLimits

0x43c8,	// (0x00051892) bg_popup_call3_in_pane

0x443e,	// (0x00051908) popup_call3_audio_in_window_g1_ParamLimits

0x443e,	// (0x00051908) popup_call3_audio_in_window_g1

0x445e,	// (0x00051928) popup_call3_audio_in_window_g2_ParamLimits

0x445e,	// (0x00051928) popup_call3_audio_in_window_g2

0x447e,	// (0x00051948) popup_call3_audio_in_window_g3_ParamLimits

0x447e,	// (0x00051948) popup_call3_audio_in_window_g3

0x0003,

0xf5f7,	// (0x0005cac1) popup_call3_audio_in_window_g_ParamLimits

0xf5f7,	// (0x0005cac1) popup_call3_audio_in_window_g

0x44af,	// (0x00051979) popup_call3_audio_in_window_t1_ParamLimits

0x44af,	// (0x00051979) popup_call3_audio_in_window_t1

0x44ed,	// (0x000519b7) popup_call3_audio_in_window_t2_ParamLimits

0x44ed,	// (0x000519b7) popup_call3_audio_in_window_t2

0x452b,	// (0x000519f5) popup_call3_audio_in_window_t3_ParamLimits

0x452b,	// (0x000519f5) popup_call3_audio_in_window_t3

0x0002,

0xf600,	// (0x0005caca) popup_call3_audio_in_window_t_ParamLimits

0xf600,	// (0x0005caca) popup_call3_audio_in_window_t

0xaa82,	// (0x00057f4c) bg_popup_call3_rect_pane

0xc709,	// (0x00059bd3) bg_popup_call3_rect_pane_g1

0xa99e,	// (0x00057e68) bg_popup_call3_rect_pane_g2

0xc711,	// (0x00059bdb) bg_popup_call3_rect_pane_g3

0xc719,	// (0x00059be3) bg_popup_call3_rect_pane_g4

0xc721,	// (0x00059beb) bg_popup_call3_rect_pane_g5

0xc729,	// (0x00059bf3) bg_popup_call3_rect_pane_g6

0xc731,	// (0x00059bfb) bg_popup_call3_rect_pane_g7

0x34b7,	// (0x00050981) mup_visualizer_osc_pane

0xb5ad,	// (0x00058a77) mup_visualizer_spec_pane

0x43f8,	// (0x000518c2) call3_video_qcif_pane_ParamLimits

0x43f8,	// (0x000518c2) call3_video_qcif_pane

0x440b,	// (0x000518d5) call3_video_qcif_uncrop_pane_ParamLimits

0x440b,	// (0x000518d5) call3_video_qcif_uncrop_pane

0x4419,	// (0x000518e3) call3_video_subqcif_pane_ParamLimits

0x4419,	// (0x000518e3) call3_video_subqcif_pane

0x442d,	// (0x000518f7) call3_video_subqcif_uncrop_pane_ParamLimits

0x442d,	// (0x000518f7) call3_video_subqcif_uncrop_pane

0x449e,	// (0x00051968) popup_call3_audio_in_window_g4_ParamLimits

0x449e,	// (0x00051968) popup_call3_audio_in_window_g4

0x43b7,	// (0x00051881) mup_spec_half_pane

0x43c0,	// (0x0005188a) mup_spec_half_pane_cp

0xc96e,	// (0x00059e38) mup_osc_middle_pane

0xc977,	// (0x00059e41) mup_visualizer_osc_pane_g1

0x4397,	// (0x00051861) mup_spec_bar_pane_ParamLimits

0x4397,	// (0x00051861) mup_spec_bar_pane

0xc95b,	// (0x00059e25) mup_spec_bar_pane_g1

0xc965,	// (0x00059e2f) mup_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x0005cab5) mup_spec_bar_pane_g

0x16a2,	// (0x0004eb6c) aid_cale_week_size_cell_pane_ParamLimits

0x16bc,	// (0x0004eb86) bg_cale_heading_pane_ParamLimits

0xa9db,	// (0x00057ea5) bg_cale_pane_cp01_ParamLimits

0x16d4,	// (0x0004eb9e) cale_week_corner_pane_ParamLimits

0x16f3,	// (0x0004ebbd) cale_week_day_heading_pane_ParamLimits

0x1710,	// (0x0004ebda) cale_week_scroll_pane_g1_ParamLimits

0x1723,	// (0x0004ebed) cale_week_scroll_pane_g2_ParamLimits

0x173b,	// (0x0004ec05) cale_week_scroll_pane_g3_ParamLimits

0x1753,	// (0x0004ec1d) cale_week_scroll_pane_g4_ParamLimits

0x176b,	// (0x0004ec35) cale_week_scroll_pane_g5_ParamLimits

0x178b,	// (0x0004ec55) cale_week_scroll_pane_g6_ParamLimits

0x17ab,	// (0x0004ec75) cale_week_scroll_pane_g7_ParamLimits

0x17cb,	// (0x0004ec95) cale_week_scroll_pane_g8_ParamLimits

0x17ef,	// (0x0004ecb9) cale_week_scroll_pane_g9_ParamLimits

0x1807,	// (0x0004ecd1) cale_week_scroll_pane_g10_ParamLimits

0x181f,	// (0x0004ece9) cale_week_scroll_pane_g11_ParamLimits

0x1837,	// (0x0004ed01) cale_week_scroll_pane_g12_ParamLimits

0x184f,	// (0x0004ed19) cale_week_scroll_pane_g13_ParamLimits

0x184f,	// (0x0004ed19) cale_week_scroll_pane_g14_ParamLimits

0x184f,	// (0x0004ed19) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0005c65f) cale_week_scroll_pane_g_ParamLimits

0x188b,	// (0x0004ed55) cale_week_time_pane_ParamLimits

0x18af,	// (0x0004ed79) grid_cale_week_pane_ParamLimits

0xa9f8,	// (0x00057ec2) listscroll_cale_week_pane_t1

0xaa0a,	// (0x00057ed4) scroll_pane_cp08_ParamLimits

0x2497,	// (0x0004f961) cale_month_corner_pane_ParamLimits

0xadb4,	// (0x0005827e) cale_month_pane_t1

0x28b5,	// (0x0004fd7f) cale_month_week_pane_ParamLimits

0x2fd2,	// (0x0005049c) popup_call_status_window_g1_ParamLimits

0x2fe6,	// (0x000504b0) popup_call_status_window_g2_ParamLimits

0x2ffa,	// (0x000504c4) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x0005c805) popup_call_status_window_g_ParamLimits

0xb164,	// (0x0005862e) aid_call2_pane

0x02a9,	// (0x0004d773) msg_header_pane_g1

0x3865,	// (0x00050d2f) postcard_address2_pane_ParamLimits

0x3865,	// (0x00050d2f) postcard_address2_pane

0x3877,	// (0x00050d41) postcard_message2_pane_ParamLimits

0x3877,	// (0x00050d41) postcard_message2_pane

0x4349,	// (0x00051813) message2_row_pane_ParamLimits

0x4349,	// (0x00051813) message2_row_pane

0x4365,	// (0x0005182f) address2_row_pane_ParamLimits

0x4365,	// (0x0005182f) address2_row_pane

0xc929,	// (0x00059df3) postcard_message2_row_pane_g1

0xc931,	// (0x00059dfb) postcard_message2_row_pane_t1

0xc929,	// (0x00059df3) address2_row_pane_g1

0xc931,	// (0x00059dfb) address2_row_pane_t1

0x1bdf,	// (0x0004f0a9) aid_size_cell_vorec

0x9cf3,	// (0x000571bd) main_rss_pane

0x4378,	// (0x00051842) rss_list_single_pane_ParamLimits

0x4378,	// (0x00051842) rss_list_single_pane

0xc93f,	// (0x00059e09) rss_list_single_pane_t1

0xc94d,	// (0x00059e17) rss_list_single_pane_t2

0x0001,

0xf5e6,	// (0x0005cab0) rss_list_single_pane_t

0x9cf3,	// (0x000571bd) main_camera2_pane

0x9cf3,	// (0x000571bd) main_video2_pane

0x45e1,	// (0x00051aab) cams_zoom_pane_cp2_ParamLimits

0x45e1,	// (0x00051aab) cams_zoom_pane_cp2

0x4601,	// (0x00051acb) image2_vga_pane_ParamLimits

0x4601,	// (0x00051acb) image2_vga_pane

0x4652,	// (0x00051b1c) main_camera2_pane_g1_ParamLimits

0x4652,	// (0x00051b1c) main_camera2_pane_g1

0x4672,	// (0x00051b3c) main_camera2_pane_g2_ParamLimits

0x4672,	// (0x00051b3c) main_camera2_pane_g2

0x4692,	// (0x00051b5c) main_camera2_pane_g3_ParamLimits

0x4692,	// (0x00051b5c) main_camera2_pane_g3

0x46b2,	// (0x00051b7c) main_camera2_pane_g4_ParamLimits

0x46b2,	// (0x00051b7c) main_camera2_pane_g4

0x46d2,	// (0x00051b9c) main_camera2_pane_g5_ParamLimits

0x46d2,	// (0x00051b9c) main_camera2_pane_g5

0x46f2,	// (0x00051bbc) main_camera2_pane_g6_ParamLimits

0x46f2,	// (0x00051bbc) main_camera2_pane_g6

0x4712,	// (0x00051bdc) main_camera2_pane_g7_ParamLimits

0x4712,	// (0x00051bdc) main_camera2_pane_g7

0x4732,	// (0x00051bfc) main_camera2_pane_g8_ParamLimits

0x4732,	// (0x00051bfc) main_camera2_pane_g8

0x0008,

0xf607,	// (0x0005cad1) main_camera2_pane_g_ParamLimits

0xf607,	// (0x0005cad1) main_camera2_pane_g

0x4772,	// (0x00051c3c) main_camera2_pane_t1_ParamLimits

0x4772,	// (0x00051c3c) main_camera2_pane_t1

0x47a7,	// (0x00051c71) main_camera2_pane_t2_ParamLimits

0x47a7,	// (0x00051c71) main_camera2_pane_t2

0x47cd,	// (0x00051c97) main_camera2_pane_t3_ParamLimits

0x47cd,	// (0x00051c97) main_camera2_pane_t3

0x482b,	// (0x00051cf5) main_camera2_pane_t4_ParamLimits

0x482b,	// (0x00051cf5) main_camera2_pane_t4

0x0006,

0xf61a,	// (0x0005cae4) main_camera2_pane_t_ParamLimits

0xf61a,	// (0x0005cae4) main_camera2_pane_t

0x48bd,	// (0x00051d87) cams_zoom_pane_cp4_ParamLimits

0x48bd,	// (0x00051d87) cams_zoom_pane_cp4

0x48d3,	// (0x00051d9d) image2_cif_pane_ParamLimits

0x48d3,	// (0x00051d9d) image2_cif_pane

0x48fe,	// (0x00051dc8) image2_subqcif_pane_ParamLimits

0x48fe,	// (0x00051dc8) image2_subqcif_pane

0x4918,	// (0x00051de2) main_video2_pane_g1_ParamLimits

0x4918,	// (0x00051de2) main_video2_pane_g1

0x4932,	// (0x00051dfc) main_video2_pane_g2_ParamLimits

0x4932,	// (0x00051dfc) main_video2_pane_g2

0x4948,	// (0x00051e12) main_video2_pane_g3_ParamLimits

0x4948,	// (0x00051e12) main_video2_pane_g3

0x495e,	// (0x00051e28) main_video2_pane_g4_ParamLimits

0x495e,	// (0x00051e28) main_video2_pane_g4

0x4974,	// (0x00051e3e) main_video2_pane_g5_ParamLimits

0x4974,	// (0x00051e3e) main_video2_pane_g5

0x498a,	// (0x00051e54) main_video2_pane_g6_ParamLimits

0x498a,	// (0x00051e54) main_video2_pane_g6

0x0005,

0xf629,	// (0x0005caf3) main_video2_pane_g_ParamLimits

0xf629,	// (0x0005caf3) main_video2_pane_g

0x49a4,	// (0x00051e6e) main_video2_pane_t1_ParamLimits

0x49a4,	// (0x00051e6e) main_video2_pane_t1

0x49c8,	// (0x00051e92) main_video2_pane_t2_ParamLimits

0x49c8,	// (0x00051e92) main_video2_pane_t2

0x4a16,	// (0x00051ee0) main_video2_pane_t3_ParamLimits

0x4a16,	// (0x00051ee0) main_video2_pane_t3

0x0002,

0xf636,	// (0x0005cb00) main_video2_pane_t_ParamLimits

0xf636,	// (0x0005cb00) main_video2_pane_t

0x3e95,	// (0x0005135f) call_muted_g2

0x0001,

0xf5d8,	// (0x0005caa2) call_muted_g

0x9cf3,	// (0x000571bd) main_mup2_pane

0x4a5a,	// (0x00051f24) main_mup2_pane_g1_ParamLimits

0x4a5a,	// (0x00051f24) main_mup2_pane_g1

0x4a66,	// (0x00051f30) main_mup2_pane_g2_ParamLimits

0x4a66,	// (0x00051f30) main_mup2_pane_g2

0xa120,	// (0x000575ea) main_mup_pane_g13_cp1

0xa128,	// (0x000575f2) mup_volume_pane_cp1

0x4a82,	// (0x00051f4c) main_mup2_pane_g4_ParamLimits

0x4a82,	// (0x00051f4c) main_mup2_pane_g4

0x4a94,	// (0x00051f5e) main_mup2_pane_g5_ParamLimits

0x4a94,	// (0x00051f5e) main_mup2_pane_g5

0x4aa6,	// (0x00051f70) main_mup2_pane_g6_ParamLimits

0x4aa6,	// (0x00051f70) main_mup2_pane_g6

0x4ab8,	// (0x00051f82) main_mup2_pane_g7_ParamLimits

0x4ab8,	// (0x00051f82) main_mup2_pane_g7

0x0006,

0xf63d,	// (0x0005cb07) main_mup2_pane_g_ParamLimits

0xf63d,	// (0x0005cb07) main_mup2_pane_g

0x4ad0,	// (0x00051f9a) main_mup2_pane_t1_ParamLimits

0x4ad0,	// (0x00051f9a) main_mup2_pane_t1

0x4ae6,	// (0x00051fb0) main_mup2_pane_t2_ParamLimits

0x4ae6,	// (0x00051fb0) main_mup2_pane_t2

0x4afc,	// (0x00051fc6) main_mup2_pane_t3_ParamLimits

0x4afc,	// (0x00051fc6) main_mup2_pane_t3

0x4b12,	// (0x00051fdc) main_mup2_pane_t4_ParamLimits

0x4b12,	// (0x00051fdc) main_mup2_pane_t4

0x4b2a,	// (0x00051ff4) main_mup2_pane_t5_ParamLimits

0x4b2a,	// (0x00051ff4) main_mup2_pane_t5

0x4b42,	// (0x0005200c) main_mup2_pane_t6_ParamLimits

0x4b42,	// (0x0005200c) main_mup2_pane_t6

0x0005,

0xf64c,	// (0x0005cb16) main_mup2_pane_t_ParamLimits

0xf64c,	// (0x0005cb16) main_mup2_pane_t

0x4b72,	// (0x0005203c) mup2_visualizer_pane_ParamLimits

0x4b72,	// (0x0005203c) mup2_visualizer_pane

0x4ba0,	// (0x0005206a) mup_progress_pane_cp_ParamLimits

0x4ba0,	// (0x0005206a) mup_progress_pane_cp

0xa10b,	// (0x000575d5) mup_volume_pane_cp_ParamLimits

0xa10b,	// (0x000575d5) mup_volume_pane_cp

0x4bb4,	// (0x0005207e) mup2_visualizer_pane_g1_ParamLimits

0x4bb4,	// (0x0005207e) mup2_visualizer_pane_g1

0xc9ae,	// (0x00059e78) mup2_visualizer_pane_g2_ParamLimits

0xc9ae,	// (0x00059e78) mup2_visualizer_pane_g2

0x4bcb,	// (0x00052095) mup2_visualizer_pane_g3_ParamLimits

0x4bcb,	// (0x00052095) mup2_visualizer_pane_g3

0x0002,

0xf659,	// (0x0005cb23) mup2_visualizer_pane_g_ParamLimits

0xf659,	// (0x0005cb23) mup2_visualizer_pane_g

0xb7e2,	// (0x00058cac) aid_size_cell_fmradio

0x4047,	// (0x00051511) aid_height_parent_landcape

0xac12,	// (0x000580dc) wml_content_pane_cp

0xac1a,	// (0x000580e4) wml_tabs_pane

0xac23,	// (0x000580ed) popup_wml_miniature_window

0xac2b,	// (0x000580f5) scroll_pane_cp021

0xac3f,	// (0x00058109) wml_content_pane_comp8

0x9cf3,	// (0x000571bd) bg_popup_sub_pane_cp05

0xc9cc,	// (0x00059e96) popup_wml_miniature_window_g1

0xc9d4,	// (0x00059e9e) wml_miniature_view_pane

0x4bd7,	// (0x000520a1) aid_size_wml_view

0x4bdf,	// (0x000520a9) wml_miniature_view_pane_g1

0x4be8,	// (0x000520b2) wml_miniature_view_pane_g2

0x4bf1,	// (0x000520bb) wml_miniature_view_pane_g3

0x4bf9,	// (0x000520c3) wml_miniature_view_pane_g4

0x4c01,	// (0x000520cb) wml_miniature_view_pane_g5

0x4c09,	// (0x000520d3) wml_miniature_view_pane_g6

0x4c11,	// (0x000520db) wml_miniature_view_pane_g7

0x4c19,	// (0x000520e3) wml_miniature_view_pane_g8

0x0007,

0xf660,	// (0x0005cb2a) wml_miniature_view_pane_g

0xc9dc,	// (0x00059ea6) background_graphic_ParamLimits

0xc9dc,	// (0x00059ea6) background_graphic

0xc9e8,	// (0x00059eb2) wml_tabs_2_pane

0xc9f1,	// (0x00059ebb) wml_tabs_3_pane_ParamLimits

0xc9f1,	// (0x00059ebb) wml_tabs_3_pane

0xca03,	// (0x00059ecd) wml_tabs_4_pane_ParamLimits

0xca03,	// (0x00059ecd) wml_tabs_4_pane

0xca19,	// (0x00059ee3) wml_tabs_5_pane_ParamLimits

0xca19,	// (0x00059ee3) wml_tabs_5_pane

0xca33,	// (0x00059efd) wml_tabs_pane_g2_ParamLimits

0xca33,	// (0x00059efd) wml_tabs_pane_g2

0xca47,	// (0x00059f11) wml_tabs_pane_g3_ParamLimits

0xca47,	// (0x00059f11) wml_tabs_pane_g3

0x4c21,	// (0x000520eb) wml_tabs_2_active_pane_ParamLimits

0x4c21,	// (0x000520eb) wml_tabs_2_active_pane

0x4c35,	// (0x000520ff) wml_tabs_2_passive_pane_ParamLimits

0x4c35,	// (0x000520ff) wml_tabs_2_passive_pane

0x4c49,	// (0x00052113) wml_tabs_3_active_pane_cp_ParamLimits

0x4c49,	// (0x00052113) wml_tabs_3_active_pane_cp

0x4c5e,	// (0x00052128) wml_tabs_3_passive_pane_ParamLimits

0x4c5e,	// (0x00052128) wml_tabs_3_passive_pane

0x4c71,	// (0x0005213b) wml_tabs_3_passive_pane_cp_ParamLimits

0x4c71,	// (0x0005213b) wml_tabs_3_passive_pane_cp

0x4c88,	// (0x00052152) tabs_4_active_pane

0x4c90,	// (0x0005215a) tabs_4_passive_pane

0x4c9a,	// (0x00052164) tabs_4_passive_pane_cp

0x4ca2,	// (0x0005216c) tabs_4_passive_pane_cp2

0x3d62,	// (0x0005122c) aid_height_text

0x348d,	// (0x00050957) mup_volume_cont_pane_ParamLimits

0x348d,	// (0x00050957) mup_volume_cont_pane

0x1291,	// (0x0004e75b) aid_size_cell_pinb

0x129b,	// (0x0004e765) aid_size_list_pinb

0x4b8c,	// (0x00052056) mup2_volume_cont_pane_ParamLimits

0x4b8c,	// (0x00052056) mup2_volume_cont_pane

0xa0f7,	// (0x000575c1) mup2_volume_cont_pane_g1_ParamLimits

0xa0f7,	// (0x000575c1) mup2_volume_cont_pane_g1

0x0f44,	// (0x0004e40e) aid_size_cell_touch_ParamLimits

0x0f44,	// (0x0004e40e) aid_size_cell_touch

0x1181,	// (0x0004e64b) touch_pane_ParamLimits

0x1181,	// (0x0004e64b) touch_pane

0x9878,	// (0x00056d42) main_rss2_pane

0xca64,	// (0x00059f2e) listscroll_rss2_pane

0xca6d,	// (0x00059f37) rss2_navigation_pane

0xca75,	// (0x00059f3f) list_rss2_pane

0xb2a7,	// (0x00058771) scroll_pane_cp22

0xca7d,	// (0x00059f47) rss2_navigation_pane_g1

0xca86,	// (0x00059f50) rss2_navigation_pane_g2

0xca8e,	// (0x00059f58) rss2_navigation_pane_g3

0x0002,

0xf671,	// (0x0005cb3b) rss2_navigation_pane_g

0xca96,	// (0x00059f60) rss2_navigation_pane_t1

0x4cac,	// (0x00052176) rss2_list_single_pane_ParamLimits

0x4cac,	// (0x00052176) rss2_list_single_pane

0xcaa4,	// (0x00059f6e) rss2_list_single_pane_t2

0xcab2,	// (0x00059f7c) rss2_list_single_pane_t3_ParamLimits

0xcab2,	// (0x00059f7c) rss2_list_single_pane_t3

0xcacf,	// (0x00059f99) rss2_list_single_pane_t4

0x2eb7,	// (0x00050381) smil_status_pane_g1

0xa757,	// (0x00057c21) main_image2_pane_ParamLimits

0xa757,	// (0x00057c21) main_image2_pane

0x4752,	// (0x00051c1c) main_camera2_pane_g9_ParamLimits

0x4752,	// (0x00051c1c) main_camera2_pane_g9

0x4880,	// (0x00051d4a) main_camera2_pane_t5_ParamLimits

0x4880,	// (0x00051d4a) main_camera2_pane_t5

0xa0c7,	// (0x00057591) main_camera2_pane_t6_ParamLimits

0xa0c7,	// (0x00057591) main_camera2_pane_t6

0x4cc1,	// (0x0005218b) main_image2_pane_g1_ParamLimits

0x4cc1,	// (0x0005218b) main_image2_pane_g1

0x3a9e,	// (0x00050f68) smil2_video_pane_ParamLimits

0x3a9e,	// (0x00050f68) smil2_video_pane

0x0f7c,	// (0x0004e446) aid_zoom_text_primary_cp

0x98d6,	// (0x00056da0) popup_preview_fixed_window

0xab7b,	// (0x00058045) im_reading_pane_g1

0x45c9,	// (0x00051a93) cams2_bc_adjust_pane_cp_ParamLimits

0x45c9,	// (0x00051a93) cams2_bc_adjust_pane_cp

0x48af,	// (0x00051d79) cams2_bc_adjust_pane_ParamLimits

0x48af,	// (0x00051d79) cams2_bc_adjust_pane

0xa130,	// (0x000575fa) cams2_bc_adjust_pane_g1

0xa138,	// (0x00057602) cams2_slider_pane

0xa141,	// (0x0005760b) cams2_slider_pane_g1

0xa14a,	// (0x00057614) cams2_slider_pane_g2

0x0006,

0xf678,	// (0x0005cb42) cams2_slider_pane_g

0x1389,	// (0x0004e853) calc_display_pane_ParamLimits

0x13ae,	// (0x0004e878) calc_paper_pane_ParamLimits

0x13d1,	// (0x0004e89b) grid_calc_pane_ParamLimits

0x9fe0,	// (0x000574aa) popup_clock_digital_window_t1_ParamLimits

0xb77f,	// (0x00058c49) main_image_pane_t1

0x136b,	// (0x0004e835) aid_size_cell_calc_ParamLimits

0x136b,	// (0x0004e835) aid_size_cell_calc

0x408d,	// (0x00051557) popup_blid_sat_info2_window_ParamLimits

0x408d,	// (0x00051557) popup_blid_sat_info2_window

0xcae5,	// (0x00059faf) aid_size_cell_blid

0xcaed,	// (0x00059fb7) bg_popup_window_pane_cp07

0xcb10,	// (0x00059fda) grid_popup_blid_pane

0xcb1a,	// (0x00059fe4) heading_pane_cp05_ParamLimits

0xcb1a,	// (0x00059fe4) heading_pane_cp05

0xcbe4,	// (0x0005a0ae) cell_popup_blid_pane_ParamLimits

0xcbe4,	// (0x0005a0ae) cell_popup_blid_pane

0xcc08,	// (0x0005a0d2) cell_popup_blid_pane_g1

0xcc10,	// (0x0005a0da) cell_popup_blid_pane_t1

0x4b5c,	// (0x00052026) mup2_indicator_pane_ParamLimits

0x4b5c,	// (0x00052026) mup2_indicator_pane

0xaa82,	// (0x00057f4c) mup2_visualizer_osc_pane

0xc9ba,	// (0x00059e84) mup2_visualizer_spec_pane_ParamLimits

0xc9ba,	// (0x00059e84) mup2_visualizer_spec_pane

0x4cd7,	// (0x000521a1) mup2_spec_half_pane

0x4ce0,	// (0x000521aa) mup2_spec_half_pane_cp

0x4ce8,	// (0x000521b2) mup2_spec_bar_pane_ParamLimits

0x4ce8,	// (0x000521b2) mup2_spec_bar_pane

0xc95b,	// (0x00059e25) mup2_spec_bar_pane_g1

0xc965,	// (0x00059e2f) mup2_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x0005cab5) mup2_spec_bar_pane_g

0x4d08,	// (0x000521d2) mup2_osc_middle_pane

0xc977,	// (0x00059e41) mup2_visualizer_osc_pane_g1

0x9900,	// (0x00056dca) popup_number_entry_window_t1_ParamLimits

0x9913,	// (0x00056ddd) popup_number_entry_window_t2_ParamLimits

0x9925,	// (0x00056def) popup_number_entry_window_t3_ParamLimits

0x11d3,	// (0x0004e69d) popup_number_entry_window_t5_ParamLimits

0x11d3,	// (0x0004e69d) popup_number_entry_window_t5

0xf0af,	// (0x0005c579) popup_number_entry_window_t_ParamLimits

0x9937,	// (0x00056e01) text_title_cp2_ParamLimits

0xa01f,	// (0x000574e9) aid_hotspot_pointer_text2_pane

0xa045,	// (0x0005750f) main_viewer_pane_g9_ParamLimits

0xa045,	// (0x0005750f) main_viewer_pane_g9

0xadb4,	// (0x0005827e) cale_month_pane_t1_ParamLimits

0xadf1,	// (0x000582bb) bg_cale_pane_ParamLimits

0xae09,	// (0x000582d3) list_cale_pane_ParamLimits

0xae1a,	// (0x000582e4) listscroll_cale_day_pane_t1

0xae2c,	// (0x000582f6) scroll_pane_cp09_ParamLimits

0x34bf,	// (0x00050989) main_mup_eq_pane_t1_ParamLimits

0x34bf,	// (0x00050989) main_mup_eq_pane_t1

0x34d9,	// (0x000509a3) main_mup_eq_pane_t2_ParamLimits

0x34d9,	// (0x000509a3) main_mup_eq_pane_t2

0x34f3,	// (0x000509bd) main_mup_eq_pane_t3_ParamLimits

0x34f3,	// (0x000509bd) main_mup_eq_pane_t3

0x350f,	// (0x000509d9) main_mup_eq_pane_t4_ParamLimits

0x350f,	// (0x000509d9) main_mup_eq_pane_t4

0x352b,	// (0x000509f5) main_mup_eq_pane_t5_ParamLimits

0x352b,	// (0x000509f5) main_mup_eq_pane_t5

0x3547,	// (0x00050a11) main_mup_eq_pane_t6_ParamLimits

0x3547,	// (0x00050a11) main_mup_eq_pane_t6

0x355b,	// (0x00050a25) main_mup_eq_pane_t7_ParamLimits

0x355b,	// (0x00050a25) main_mup_eq_pane_t7

0x356f,	// (0x00050a39) main_mup_eq_pane_t8_ParamLimits

0x356f,	// (0x00050a39) main_mup_eq_pane_t8

0x3583,	// (0x00050a4d) main_mup_eq_pane_t9_ParamLimits

0x3583,	// (0x00050a4d) main_mup_eq_pane_t9

0x359d,	// (0x00050a67) main_mup_eq_pane_t10_ParamLimits

0x359d,	// (0x00050a67) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x0005c904) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x0005c904) main_mup_eq_pane_t

0x364c,	// (0x00050b16) mup_equalizer_pane_cp5_ParamLimits

0x3660,	// (0x00050b2a) mup_equalizer_pane_cp6_ParamLimits

0x3674,	// (0x00050b3e) mup_equalizer_pane_cp7_ParamLimits

0x9878,	// (0x00056d42) main_gallery_pane

0xc980,	// (0x00059e4a) smil2_volume_pane

0xc988,	// (0x00059e52) smil_status_volume_pane_g1_ParamLimits

0xc99b,	// (0x00059e65) smil_status_volume_pane_g2_ParamLimits

0xa0a5,	// (0x0005756f) smil_status_volume_pane_g3_ParamLimits

0xf5f0,	// (0x0005caba) smil_status_volume_pane_g_ParamLimits

0xcaed,	// (0x00059fb7) bg_popup_window_pane_cp07_ParamLimits

0xcafb,	// (0x00059fc5) blid_firmament_pane

0x4d11,	// (0x000521db) aid_size_cell_gallery_ParamLimits

0x4d11,	// (0x000521db) aid_size_cell_gallery

0x4d27,	// (0x000521f1) grid_gallery_pane_ParamLimits

0x4d27,	// (0x000521f1) grid_gallery_pane

0x4d40,	// (0x0005220a) cell_gallery_pane_ParamLimits

0x4d40,	// (0x0005220a) cell_gallery_pane

0xcc1e,	// (0x0005a0e8) bg_cell_gallery_focus_pane_ParamLimits

0xcc1e,	// (0x0005a0e8) bg_cell_gallery_focus_pane

0xcc30,	// (0x0005a0fa) cell_gallery_pane_g1_ParamLimits

0xcc30,	// (0x0005a0fa) cell_gallery_pane_g1

0x4d89,	// (0x00052253) cell_gallery_pane_g2_ParamLimits

0x4d89,	// (0x00052253) cell_gallery_pane_g2

0x4d96,	// (0x00052260) cell_gallery_pane_g3_ParamLimits

0x4d96,	// (0x00052260) cell_gallery_pane_g3

0xcc3c,	// (0x0005a106) cell_gallery_pane_g4_ParamLimits

0xcc3c,	// (0x0005a106) cell_gallery_pane_g4

0x0003,

0xf69e,	// (0x0005cb68) cell_gallery_pane_g_ParamLimits

0xf69e,	// (0x0005cb68) cell_gallery_pane_g

0xcc48,	// (0x0005a112) bg_cell_gallery_focus_pane_g1

0xcc50,	// (0x0005a11a) bg_cell_gallery_focus_pane_g2

0xcc58,	// (0x0005a122) bg_cell_gallery_focus_pane_g3

0xcc60,	// (0x0005a12a) bg_cell_gallery_focus_pane_g4

0xcc68,	// (0x0005a132) bg_cell_gallery_focus_pane_g5

0xcc70,	// (0x0005a13a) bg_cell_gallery_focus_pane_g6

0xcc78,	// (0x0005a142) bg_cell_gallery_focus_pane_g7

0xcc80,	// (0x0005a14a) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6a7,	// (0x0005cb71) bg_cell_gallery_focus_pane_g

0xcc88,	// (0x0005a152) aid_firma_cardinal

0xcc9c,	// (0x0005a166) blid_firmament_pane_t1

0xccb3,	// (0x0005a17d) blid_firmament_pane_t2

0xccca,	// (0x0005a194) blid_firmament_pane_t3

0xcce1,	// (0x0005a1ab) blid_firmament_pane_t4

0x0003,

0xf6b8,	// (0x0005cb82) blid_firmament_pane_t

0xccf8,	// (0x0005a1c2) blid_sat_info_pane

0xcd08,	// (0x0005a1d2) blid_sat_info_pane_g1

0xcd08,	// (0x0005a1d2) blid_sat_info_pane_g2

0x0001,

0xf6c1,	// (0x0005cb8b) blid_sat_info_pane_g

0xcd12,	// (0x0005a1dc) blid_sat_info_pane_t1

0xcd20,	// (0x0005a1ea) smil2_volume_content_pane

0xcd29,	// (0x0005a1f3) smil2_volume_pane_g1

0xa935,	// (0x00057dff) smil2_volume_content_pane_g1

0xcd31,	// (0x0005a1fb) smil2_volume_content_pane_g2

0xcd3a,	// (0x0005a204) smil2_volume_content_pane_g3

0xcd43,	// (0x0005a20d) smil2_volume_content_pane_g4

0xcd4c,	// (0x0005a216) smil2_volume_content_pane_g5

0xcd55,	// (0x0005a21f) smil2_volume_content_pane_g6

0xcd5e,	// (0x0005a228) smil2_volume_content_pane_g7

0xcd67,	// (0x0005a231) smil2_volume_content_pane_g8

0xcd70,	// (0x0005a23a) smil2_volume_content_pane_g9

0xcd79,	// (0x0005a243) smil2_volume_content_pane_g10

0x0009,

0xf6c6,	// (0x0005cb90) smil2_volume_content_pane_g

0x1963,	// (0x0004ee2d) cale_week_day_heading_pane_t1_ParamLimits

0x198d,	// (0x0004ee57) cale_week_day_heading_pane_t2_ParamLimits

0x19bc,	// (0x0004ee86) cale_week_day_heading_pane_t3_ParamLimits

0x19eb,	// (0x0004eeb5) cale_week_day_heading_pane_t4_ParamLimits

0x1a1a,	// (0x0004eee4) cale_week_day_heading_pane_t5_ParamLimits

0x1a51,	// (0x0004ef1b) cale_week_day_heading_pane_t6_ParamLimits

0x1a88,	// (0x0004ef52) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0005c680) cale_week_day_heading_pane_t_ParamLimits

0xaa27,	// (0x00057ef1) bg_cale_side_pane_ParamLimits

0x1ab2,	// (0x0004ef7c) cale_week_time_pane_t1_ParamLimits

0x1acc,	// (0x0004ef96) cale_week_time_pane_t2_ParamLimits

0x1ae6,	// (0x0004efb0) cale_week_time_pane_t3_ParamLimits

0x1b00,	// (0x0004efca) cale_week_time_pane_t4_ParamLimits

0x1b1a,	// (0x0004efe4) cale_week_time_pane_t5_ParamLimits

0x1b34,	// (0x0004effe) cale_week_time_pane_t6_ParamLimits

0x1b4e,	// (0x0004f018) cale_week_time_pane_t7_ParamLimits

0x1b68,	// (0x0004f032) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0005c68f) cale_week_time_pane_t_ParamLimits

0x1b82,	// (0x0004f04c) cell_cale_week_pane_g2_ParamLimits

0xaa27,	// (0x00057ef1) bg_cale_side_pane_cp01_ParamLimits

0x2cbe,	// (0x00050188) cale_month_week_pane_t1_ParamLimits

0x2cd7,	// (0x000501a1) cale_month_week_pane_t2_ParamLimits

0x2cf0,	// (0x000501ba) cale_month_week_pane_t3_ParamLimits

0x2d09,	// (0x000501d3) cale_month_week_pane_t4_ParamLimits

0x2d22,	// (0x000501ec) cale_month_week_pane_t5_ParamLimits

0x2d3b,	// (0x00050205) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x0005c764) cale_month_week_pane_t_ParamLimits

0x9f5c,	// (0x00057426) cell_cale_month_pane_g1_ParamLimits

0x9878,	// (0x00056d42) main_cale_event_viewer_pane

0x9878,	// (0x00056d42) listscroll_cale_event_viewer_pane

0xcd82,	// (0x0005a24c) list_cale_ev_pane

0xcd8a,	// (0x0005a254) scroll_pane_cp023

0xcd96,	// (0x0005a260) field_cale_ev_pane_ParamLimits

0xcd96,	// (0x0005a260) field_cale_ev_pane

0xcdb4,	// (0x0005a27e) field_cale_ev_content_pane_ParamLimits

0xcdb4,	// (0x0005a27e) field_cale_ev_content_pane

0xcdc0,	// (0x0005a28a) field_cale_ev_pane_g1_ParamLimits

0xcdc0,	// (0x0005a28a) field_cale_ev_pane_g1

0xcdcc,	// (0x0005a296) field_cale_ev_pane_g2_ParamLimits

0xcdcc,	// (0x0005a296) field_cale_ev_pane_g2

0xcde4,	// (0x0005a2ae) field_cale_ev_pane_g3_ParamLimits

0xcde4,	// (0x0005a2ae) field_cale_ev_pane_g3

0x0002,

0xf6db,	// (0x0005cba5) field_cale_ev_pane_g_ParamLimits

0xf6db,	// (0x0005cba5) field_cale_ev_pane_g

0xcdfc,	// (0x0005a2c6) field_cale_ev_pane_t1_ParamLimits

0xcdfc,	// (0x0005a2c6) field_cale_ev_pane_t1

0xce13,	// (0x0005a2dd) field_cale_ev_content_pane_t1_ParamLimits

0xce13,	// (0x0005a2dd) field_cale_ev_content_pane_t1

0xb665,	// (0x00058b2f) bg_button_pane_cp01

0x1690,	// (0x0004eb5a) listscroll_cale_week_pane_ParamLimits

0xa9d2,	// (0x00057e9c) popup_toolbar_window_cp01

0xa9f8,	// (0x00057ec2) listscroll_cale_week_pane_t1_ParamLimits

0x1690,	// (0x0004eb5a) listscroll_cale_day_pane_ParamLimits

0xa9d2,	// (0x00057e9c) popup_toolbar_window_cp02

0xae1a,	// (0x000582e4) listscroll_cale_day_pane_t1_ParamLimits

0x1690,	// (0x0004eb5a) main_cale_month_pane_ParamLimits

0xa090,	// (0x0005755a) popup_toolbar_window_cp03_ParamLimits

0xa090,	// (0x0005755a) popup_toolbar_window_cp03

0x3966,	// (0x00050e30) main_image_pane_g2_ParamLimits

0x3966,	// (0x00050e30) main_image_pane_g2

0x3977,	// (0x00050e41) main_image_pane_g3_ParamLimits

0x3977,	// (0x00050e41) main_image_pane_g3

0x0002,

0xf4cc,	// (0x0005c996) main_image_pane_g_ParamLimits

0xf4cc,	// (0x0005c996) main_image_pane_g

0xb77f,	// (0x00058c49) main_image_pane_t1_ParamLimits

0x3988,	// (0x00050e52) main_image_pane_t2_ParamLimits

0x3988,	// (0x00050e52) main_image_pane_t2

0x399a,	// (0x00050e64) main_image_pane_t3_ParamLimits

0x399a,	// (0x00050e64) main_image_pane_t3

0x39c2,	// (0x00050e8c) main_image_pane_t4_ParamLimits

0x39c2,	// (0x00050e8c) main_image_pane_t4

0x0003,

0xf4d3,	// (0x0005c99d) main_image_pane_t_ParamLimits

0xf4d3,	// (0x0005c99d) main_image_pane_t

0x39e2,	// (0x00050eac) popup_image_details_window_cp01

0x39ec,	// (0x00050eb6) popup_toobar_trans_pane_cp01_ParamLimits

0x39ec,	// (0x00050eb6) popup_toobar_trans_pane_cp01

0x416c,	// (0x00051636) popup_image_details_window_ParamLimits

0x416c,	// (0x00051636) popup_image_details_window

0xa063,	// (0x0005752d) popup_image_focus_window

0x4583,	// (0x00051a4d) camera2_autofocus_pane_ParamLimits

0x4583,	// (0x00051a4d) camera2_autofocus_pane

0x9878,	// (0x00056d42) bg_popup_sub_pane_cp06

0xce31,	// (0x0005a2fb) popup_image_focus_window_g1

0xce39,	// (0x0005a303) popup_image_focus_window_g2

0xce41,	// (0x0005a30b) popup_image_focus_window_g3

0xce49,	// (0x0005a313) popup_image_focus_window_g4

0x0003,

0xf6e2,	// (0x0005cbac) popup_image_focus_window_g

0xce51,	// (0x0005a31b) popup_image_focus_window_t1

0xce5f,	// (0x0005a329) popup_image_focus_window_t2

0xce6f,	// (0x0005a339) popup_image_focus_window_t3

0x0002,

0xf6eb,	// (0x0005cbb5) popup_image_focus_window_t

0xce7d,	// (0x0005a347) camera2_autofocus_pane_g1

0xa757,	// (0x00057c21) bg_tb_trans_pane_cp01

0xce8b,	// (0x0005a355) popup_image_details_window_g1

0xce9e,	// (0x0005a368) popup_image_details_window_g2

0x0002,

0xf6fd,	// (0x0005cbc7) popup_image_details_window_g

0xcec7,	// (0x0005a391) popup_image_details_window_t1

0xced9,	// (0x0005a3a3) popup_image_details_window_t2

0xcef2,	// (0x0005a3bc) popup_image_details_window_t3

0xcf06,	// (0x0005a3d0) popup_image_details_window_t4

0xcf21,	// (0x0005a3eb) popup_image_details_window_t5

0x0004,

0xf704,	// (0x0005cbce) popup_image_details_window_t

0xa8a0,	// (0x00057d6a) bg_calc_paper_pane_ParamLimits

0x9878,	// (0x00056d42) grid_highlight_pane_cp013

0x9ecc,	// (0x00057396) list_calc_pane_ParamLimits

0x9ede,	// (0x000573a8) scroll_pane_cp024

0xa8b4,	// (0x00057d7e) bg_calc_display_pane_ParamLimits

0x14cf,	// (0x0004e999) calc_display_pane_t1_ParamLimits

0x14e4,	// (0x0004e9ae) calc_display_pane_t2_ParamLimits

0x9ee6,	// (0x000573b0) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0005c600) calc_display_pane_t_ParamLimits

0x15a4,	// (0x0004ea6e) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0005c61d) cell_calc_pane_g

0x15ad,	// (0x0004ea77) cell_calc_pane_t1

0xa913,	// (0x00057ddd) grid_highlight_pane_cp02_ParamLimits

0xa929,	// (0x00057df3) toolbar_button_pane_cp01_ParamLimits

0xa929,	// (0x00057df3) toolbar_button_pane_cp01

0xb7c4,	// (0x00058c8e) temp_image_control_pane_ParamLimits

0xb7c4,	// (0x00058c8e) temp_image_control_pane

0xa757,	// (0x00057c21) main_mp3_pane

0xcf3b,	// (0x0005a405) temp_image_control_pane_g1_ParamLimits

0xcf3b,	// (0x0005a405) temp_image_control_pane_g1

0xcf49,	// (0x0005a413) temp_image_control_pane_g2_ParamLimits

0xcf49,	// (0x0005a413) temp_image_control_pane_g2

0xcf5b,	// (0x0005a425) temp_image_control_pane_g3_ParamLimits

0xcf5b,	// (0x0005a425) temp_image_control_pane_g3

0x4dd3,	// (0x0005229d) temp_image_control_pane_g4_ParamLimits

0x4dd3,	// (0x0005229d) temp_image_control_pane_g4

0x0003,

0xf70f,	// (0x0005cbd9) temp_image_control_pane_g_ParamLimits

0xf70f,	// (0x0005cbd9) temp_image_control_pane_g

0xcf3b,	// (0x0005a405) main_mp3_pane_g1

0x4de6,	// (0x000522b0) main_mp3_pane_g2

0x0007,

0xf718,	// (0x0005cbe2) main_mp3_pane_g

0xcf9e,	// (0x0005a468) main_mp3_pane_t1

0xaa8a,	// (0x00057f54) main_camera_pane_g8_ParamLimits

0xaa8a,	// (0x00057f54) main_camera_pane_g8

0x1e7c,	// (0x0004f346) main_video_pane_g7_ParamLimits

0x1e7c,	// (0x0004f346) main_video_pane_g7

0xa0e5,	// (0x000575af) main_camera2_pane_t7_ParamLimits

0xa0e5,	// (0x000575af) main_camera2_pane_t7

0xabd2,	// (0x0005809c) scroll_pane_cp025_ParamLimits

0xabd2,	// (0x0005809c) scroll_pane_cp025

0xabe6,	// (0x000580b0) scroll_pane_cp026_ParamLimits

0xabe6,	// (0x000580b0) scroll_pane_cp026

0xabf5,	// (0x000580bf) wml_content_pane_ParamLimits

0x9878,	// (0x00056d42) main_touch_calib_pane

0x4eba,	// (0x00052384) main_touch_calib_pane_g1

0x4ecc,	// (0x00052396) main_touch_calib_pane_g2

0x4ede,	// (0x000523a8) main_touch_calib_pane_g3

0x4ef0,	// (0x000523ba) main_touch_calib_pane_g4

0x0003,

0xf736,	// (0x0005cc00) main_touch_calib_pane_g

0x4f02,	// (0x000523cc) main_touch_calib_pane_t1

0x4f1c,	// (0x000523e6) main_touch_calib_pane_t2

0x0004,

0xf73f,	// (0x0005cc09) main_touch_calib_pane_t

0xb383,	// (0x0005884d) mup_progress_pane_cp02

0xb3b8,	// (0x00058882) navi_pane_g1

0xb473,	// (0x0005893d) navi_pane_mp_t3

0xa757,	// (0x00057c21) main_mp3_pane_ParamLimits

0x42f1,	// (0x000517bb) navi_pane_ParamLimits

0xcf3b,	// (0x0005a405) main_mp3_pane_g1_ParamLimits

0x4de6,	// (0x000522b0) main_mp3_pane_g2_ParamLimits

0x4df4,	// (0x000522be) main_mp3_pane_g3_ParamLimits

0x4df4,	// (0x000522be) main_mp3_pane_g3

0x4e02,	// (0x000522cc) main_mp3_pane_g4_ParamLimits

0x4e02,	// (0x000522cc) main_mp3_pane_g4

0xcf6b,	// (0x0005a435) main_mp3_pane_g5_ParamLimits

0xcf6b,	// (0x0005a435) main_mp3_pane_g5

0xcf79,	// (0x0005a443) main_mp3_pane_g6_ParamLimits

0xcf79,	// (0x0005a443) main_mp3_pane_g6

0xcf86,	// (0x0005a450) main_mp3_pane_g7_ParamLimits

0xcf86,	// (0x0005a450) main_mp3_pane_g7

0xcf92,	// (0x0005a45c) main_mp3_pane_g8_ParamLimits

0xcf92,	// (0x0005a45c) main_mp3_pane_g8

0xf718,	// (0x0005cbe2) main_mp3_pane_g_ParamLimits

0x4e0e,	// (0x000522d8) main_mp3_pane_t2

0x4e1c,	// (0x000522e6) main_mp3_pane_t3

0xcfac,	// (0x0005a476) main_mp3_pane_t4

0xcfba,	// (0x0005a484) main_mp3_pane_t5

0x0005,

0xf729,	// (0x0005cbf3) main_mp3_pane_t

0xcfc8,	// (0x0005a492) mup_progress_pane_cp01

0x0f7c,	// (0x0004e446) aid_zoom_text_secondary2

0xcd82,	// (0x0005a24c) list_cale_ev2_pane

0xcd8a,	// (0x0005a254) scroll_pane_cp023_ParamLimits

0x4f72,	// (0x0005243c) field_cale_ev2_pane_ParamLimits

0x4f72,	// (0x0005243c) field_cale_ev2_pane

0x4f92,	// (0x0005245c) field_cale_ev2_pane_g1_ParamLimits

0x4f92,	// (0x0005245c) field_cale_ev2_pane_g1

0x4f9e,	// (0x00052468) field_cale_ev2_pane_g2_ParamLimits

0x4f9e,	// (0x00052468) field_cale_ev2_pane_g2

0x4fb6,	// (0x00052480) field_cale_ev2_pane_g3_ParamLimits

0x4fb6,	// (0x00052480) field_cale_ev2_pane_g3

0x0003,

0xf74a,	// (0x0005cc14) field_cale_ev2_pane_g_ParamLimits

0xf74a,	// (0x0005cc14) field_cale_ev2_pane_g

0x02fa,	// (0x0004d7c4) field_cale_ev2_pane_t1_ParamLimits

0x02fa,	// (0x0004d7c4) field_cale_ev2_pane_t1

0x0311,	// (0x0004d7db) field_cale_ev2_pane_t2_ParamLimits

0x0311,	// (0x0004d7db) field_cale_ev2_pane_t2

0x0001,

0xf753,	// (0x0005cc1d) field_cale_ev2_pane_t_ParamLimits

0xf753,	// (0x0005cc1d) field_cale_ev2_pane_t

0x381b,	// (0x00050ce5) main_postcard_pane_g5_ParamLimits

0x381b,	// (0x00050ce5) main_postcard_pane_g5

0x3831,	// (0x00050cfb) main_postcard_pane_g6_ParamLimits

0x3831,	// (0x00050cfb) main_postcard_pane_g6

0x1c48,	// (0x0004f112) camera2_autofocus_pane_cp_ParamLimits

0x1c48,	// (0x0004f112) camera2_autofocus_pane_cp

0xa757,	// (0x00057c21) main_mup3_pane

0x4ffe,	// (0x000524c8) main_mup3_pane_g1_ParamLimits

0x4ffe,	// (0x000524c8) main_mup3_pane_g1

0x5020,	// (0x000524ea) main_mup3_pane_g2_ParamLimits

0x5020,	// (0x000524ea) main_mup3_pane_g2

0x509e,	// (0x00052568) main_mup3_pane_g3_ParamLimits

0x509e,	// (0x00052568) main_mup3_pane_g3

0x50e4,	// (0x000525ae) main_mup3_pane_g4_ParamLimits

0x50e4,	// (0x000525ae) main_mup3_pane_g4

0x512a,	// (0x000525f4) main_mup3_pane_g5_ParamLimits

0x512a,	// (0x000525f4) main_mup3_pane_g5

0x5170,	// (0x0005263a) main_mup3_pane_g6_ParamLimits

0x5170,	// (0x0005263a) main_mup3_pane_g6

0xcff0,	// (0x0005a4ba) main_mup3_pane_g7_ParamLimits

0xcff0,	// (0x0005a4ba) main_mup3_pane_g7

0x0007,

0xf763,	// (0x0005cc2d) main_mup3_pane_g_ParamLimits

0xf763,	// (0x0005cc2d) main_mup3_pane_g

0x51ee,	// (0x000526b8) main_mup3_pane_t1_ParamLimits

0x51ee,	// (0x000526b8) main_mup3_pane_t1

0x5262,	// (0x0005272c) main_mup3_pane_t2_ParamLimits

0x5262,	// (0x0005272c) main_mup3_pane_t2

0x5336,	// (0x00052800) main_mup3_pane_t4_ParamLimits

0x5336,	// (0x00052800) main_mup3_pane_t4

0x538c,	// (0x00052856) main_mup3_pane_t5_ParamLimits

0x538c,	// (0x00052856) main_mup3_pane_t5

0x5448,	// (0x00052912) main_mup3_pane_t6_ParamLimits

0x5448,	// (0x00052912) main_mup3_pane_t6

0x0005,

0xf774,	// (0x0005cc3e) main_mup3_pane_t_ParamLimits

0xf774,	// (0x0005cc3e) main_mup3_pane_t

0x5500,	// (0x000529ca) mup3_progress_pane_ParamLimits

0x5500,	// (0x000529ca) mup3_progress_pane

0x5596,	// (0x00052a60) popup_mup3_control_window_ParamLimits

0x5596,	// (0x00052a60) popup_mup3_control_window

0xcffe,	// (0x0005a4c8) popup_mup3_text_window

0x55c8,	// (0x00052a92) mup3_progress_pane_t1

0x55e7,	// (0x00052ab1) mup3_progress_pane_t2

0xd006,	// (0x0005a4d0) mup3_progress_pane_t3

0x0002,

0xf781,	// (0x0005cc4b) mup3_progress_pane_t

0xd023,	// (0x0005a4ed) mup_progress_pane_cp03

0x9878,	// (0x00056d42) bg_tb_trans_pane_cp04

0x5606,	// (0x00052ad0) mup3_volume_pane

0x560e,	// (0x00052ad8) popup_mup3_control_window_g1

0x5617,	// (0x00052ae1) mup3_volume_pane_g1

0x5620,	// (0x00052aea) mup3_volume_pane_g2

0x5629,	// (0x00052af3) mup3_volume_pane_g3

0x0002,

0xf788,	// (0x0005cc52) mup3_volume_pane_g

0x9878,	// (0x00056d42) bg_tb_trans_pane_cp03

0xd033,	// (0x0005a4fd) popup_mup3_text_window_g1

0xd03b,	// (0x0005a505) popup_mup3_text_window_t1

0xa8fc,	// (0x00057dc6) list_calc_item_pane_g1_ParamLimits

0xca5b,	// (0x00059f25) mup_volume_pane_cp_g1

0x4f36,	// (0x00052400) main_touch_calib_pane_t3

0x4f4a,	// (0x00052414) main_touch_calib_pane_t4

0x4f5e,	// (0x00052428) main_touch_calib_pane_t5

0x9882,	// (0x00056d4c) aid_cell_size_toolbar2

0x988a,	// (0x00056d54) aid_popup3_width_pane

0x0f74,	// (0x0004e43e) aid_zoom_text_msg_primary

0x1c27,	// (0x0004f0f1) vorec_t7

0xa8c0,	// (0x00057d8a) bg_calc_paper_pane_g1_ParamLimits

0xa8cc,	// (0x00057d96) bg_calc_paper_pane_g2_ParamLimits

0xa8d8,	// (0x00057da2) bg_calc_paper_pane_g3_ParamLimits

0xa8e4,	// (0x00057dae) bg_calc_paper_pane_g4_ParamLimits

0xa8f0,	// (0x00057dba) bg_calc_paper_pane_g5_ParamLimits

0x152e,	// (0x0004e9f8) bg_calc_paper_pane_g6_ParamLimits

0x153d,	// (0x0004ea07) bg_calc_paper_pane_g7_ParamLimits

0x154c,	// (0x0004ea16) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0005c607) bg_calc_paper_pane_g_ParamLimits

0x155f,	// (0x0004ea29) calc_bg_paper_pane_g9_ParamLimits

0x1d93,	// (0x0004f25d) image_qvga_pane_ParamLimits

0x1d93,	// (0x0004f25d) image_qvga_pane

0xa7ef,	// (0x00057cb9) bg_popup_sub_pane_cp04_ParamLimits

0xb6fb,	// (0x00058bc5) popup_mup_playback_window_g1_ParamLimits

0xb707,	// (0x00058bd1) popup_mup_playback_window_t1_ParamLimits

0xb71c,	// (0x00058be6) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x0005c991) popup_mup_playback_window_t_ParamLimits

0x4a76,	// (0x00051f40) main_mup2_pane_g3_ParamLimits

0x4a76,	// (0x00051f40) main_mup2_pane_g3

0x208c,	// (0x0004f556) popup_toolbar_window_cp04

0xbafe,	// (0x00058fc8) popup_call2_audio_second_window_g3_ParamLimits

0xbafe,	// (0x00058fc8) popup_call2_audio_second_window_g3

0xbf08,	// (0x000593d2) popup_call2_audio_first_window_g4_ParamLimits

0xbf08,	// (0x000593d2) popup_call2_audio_first_window_g4

0xc593,	// (0x00059a5d) popup_call2_audio_in_window_g4_ParamLimits

0xc593,	// (0x00059a5d) popup_call2_audio_in_window_g4

0x3948,	// (0x00050e12) aid_area_sk_bg_cut_ParamLimits

0x3948,	// (0x00050e12) aid_area_sk_bg_cut

0xb731,	// (0x00058bfb) aid_area_sk_bg_cut_2_ParamLimits

0xb731,	// (0x00058bfb) aid_area_sk_bg_cut_2

0x4d79,	// (0x00052243) aid_placing_details_win

0x4d81,	// (0x0005224b) aid_placing_details_win_2

0xce7d,	// (0x0005a347) camera2_autofocus_pane_g1_ParamLimits

0x111a,	// (0x0004e5e4) popup_fixed_preview_cale_window_ParamLimits

0x111a,	// (0x0004e5e4) popup_fixed_preview_cale_window

0xb4f1,	// (0x000589bb) navi_slider_pane_g3

0xb4fa,	// (0x000589c4) navi_slider_pane_g4

0xb503,	// (0x000589cd) navi_slider_pane_g5

0xb4f1,	// (0x000589bb) navi_slider_pane_g6

0xa006,	// (0x000574d0) navi_slider_pane_g7

0xb632,	// (0x00058afc) mup_scale_pane_g3

0xb63b,	// (0x00058b05) mup_scale_pane_g4

0xb644,	// (0x00058b0e) mup_scale_pane_g5

0x3688,	// (0x00050b52) mup_scale_pane_g6

0x3691,	// (0x00050b5b) mup_scale_pane_g7

0xb4f1,	// (0x000589bb) cams2_slider_pane_g3

0xcadd,	// (0x00059fa7) cams2_slider_pane_g4

0xa153,	// (0x0005761d) cams2_slider_pane_g5

0xb4f1,	// (0x000589bb) cams2_slider_pane_g6

0xa15b,	// (0x00057625) cams2_slider_pane_g7

0xcd08,	// (0x0005a1d2) camera2_autofocus_pane_cp_g1

0xc8f4,	// (0x00059dbe) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8f4,	// (0x00059dbe) bg_popup_preview_window_pane_cp02

0xd049,	// (0x0005a513) list_fp_cale_pane_ParamLimits

0xd049,	// (0x0005a513) list_fp_cale_pane

0xd055,	// (0x0005a51f) popup_fixed_preview_cale_window_t1_ParamLimits

0xd055,	// (0x0005a51f) popup_fixed_preview_cale_window_t1

0x5632,	// (0x00052afc) popup_fixed_preview_cale_window_t2_ParamLimits

0x5632,	// (0x00052afc) popup_fixed_preview_cale_window_t2

0x5647,	// (0x00052b11) popup_fixed_preview_cale_window_t3_ParamLimits

0x5647,	// (0x00052b11) popup_fixed_preview_cale_window_t3

0x0002,

0xf78f,	// (0x0005cc59) popup_fixed_preview_cale_window_t_ParamLimits

0xf78f,	// (0x0005cc59) popup_fixed_preview_cale_window_t

0x565c,	// (0x00052b26) list_single_fp_cale_pane_ParamLimits

0x565c,	// (0x00052b26) list_single_fp_cale_pane

0xd073,	// (0x0005a53d) list_single_fp_cale_pane_g1_ParamLimits

0xd073,	// (0x0005a53d) list_single_fp_cale_pane_g1

0xd07f,	// (0x0005a549) list_single_fp_cale_pane_g2_ParamLimits

0xd07f,	// (0x0005a549) list_single_fp_cale_pane_g2

0x0002,

0xf796,	// (0x0005cc60) list_single_fp_cale_pane_g_ParamLimits

0xf796,	// (0x0005cc60) list_single_fp_cale_pane_g

0xd098,	// (0x0005a562) list_single_fp_cale_pane_t1_ParamLimits

0xd098,	// (0x0005a562) list_single_fp_cale_pane_t1

0xd0aa,	// (0x0005a574) list_single_fp_cale_pane_t2_ParamLimits

0xd0aa,	// (0x0005a574) list_single_fp_cale_pane_t2

0x0001,

0xf79d,	// (0x0005cc67) list_single_fp_cale_pane_t_ParamLimits

0xf79d,	// (0x0005cc67) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9878,	// (0x00056d42) main_dialer_pane

0x5671,	// (0x00052b3b) aid_cell_size_keypad

0x567b,	// (0x00052b45) dialer_ne_pane

0x5683,	// (0x00052b4d) grid_dialer_command_1_pane

0x568b,	// (0x00052b55) grid_dialer_command_2_pane

0x5693,	// (0x00052b5d) grid_dialer_keypad_pane

0x56a5,	// (0x00052b6f) bg_popup_call_pane_cp06_ParamLimits

0x56a5,	// (0x00052b6f) bg_popup_call_pane_cp06

0x56b1,	// (0x00052b7b) dialer_ne_clear_pane_ParamLimits

0x56b1,	// (0x00052b7b) dialer_ne_clear_pane

0xd0dd,	// (0x0005a5a7) dialer_ne_pane_g1

0xd0e5,	// (0x0005a5af) dialer_ne_pane_t1_ParamLimits

0xd0e5,	// (0x0005a5af) dialer_ne_pane_t1

0x56bd,	// (0x00052b87) dialer_ne_pane_t2_ParamLimits

0x56bd,	// (0x00052b87) dialer_ne_pane_t2

0x56e7,	// (0x00052bb1) dialer_ne_pane_t3_ParamLimits

0x56e7,	// (0x00052bb1) dialer_ne_pane_t3

0x0002,

0xf7a2,	// (0x0005cc6c) dialer_ne_pane_t_ParamLimits

0xf7a2,	// (0x0005cc6c) dialer_ne_pane_t

0x5717,	// (0x00052be1) dialer_ne_pane_t3_copy1_ParamLimits

0x5717,	// (0x00052be1) dialer_ne_pane_t3_copy1

0x5746,	// (0x00052c10) cell_dialer_keypad_pane_ParamLimits

0x5746,	// (0x00052c10) cell_dialer_keypad_pane

0x575d,	// (0x00052c27) cell_dialer_command_1_pane_ParamLimits

0x575d,	// (0x00052c27) cell_dialer_command_1_pane

0x5773,	// (0x00052c3d) cell_dialer_command_2_pane_ParamLimits

0x5773,	// (0x00052c3d) cell_dialer_command_2_pane

0xd0f7,	// (0x0005a5c1) bg_button_pane_cp02_ParamLimits

0xd0f7,	// (0x0005a5c1) bg_button_pane_cp02

0x5782,	// (0x00052c4c) cell_dialer_keypad_pane_g1_ParamLimits

0x5782,	// (0x00052c4c) cell_dialer_keypad_pane_g1

0xd0f7,	// (0x0005a5c1) bg_button_pane_cp03_ParamLimits

0xd0f7,	// (0x0005a5c1) bg_button_pane_cp03

0x5796,	// (0x00052c60) cell_dialer_command_1_pane_g1_ParamLimits

0x5796,	// (0x00052c60) cell_dialer_command_1_pane_g1

0xd103,	// (0x0005a5cd) bg_button_pane_cp04

0x57aa,	// (0x00052c74) cell_dialer_command_2_pane_g1

0xaa82,	// (0x00057f4c) bg_button_pane_cp06

0xd10b,	// (0x0005a5d5) dialer_ne_clear_pane_g1

0xb3c4,	// (0x0005888e) navi_pane_g2

0xb3f2,	// (0x000588bc) navi_pane_g3

0x0002,

0xf3ca,	// (0x0005c894) navi_pane_g

0xb481,	// (0x0005894b) navi_pane_mv_g2

0xb4a8,	// (0x00058972) navi_pane_mv_g5

0x324c,	// (0x00050716) navi_pane_mv_t1

0xa8b4,	// (0x00057d7e) main_clock2_pane

0xa757,	// (0x00057c21) main_clock2_list_pane_ParamLimits

0xa757,	// (0x00057c21) main_clock2_list_pane

0x581b,	// (0x00052ce5) main_clock2_pane_t1_ParamLimits

0x581b,	// (0x00052ce5) main_clock2_pane_t1

0x5856,	// (0x00052d20) main_clock2_pane_t2_ParamLimits

0x5856,	// (0x00052d20) main_clock2_pane_t2

0x0004,

0xf7ae,	// (0x0005cc78) main_clock2_pane_t_ParamLimits

0xf7ae,	// (0x0005cc78) main_clock2_pane_t

0x58f6,	// (0x00052dc0) popup_clock_analogue_window_cp03_ParamLimits

0x58f6,	// (0x00052dc0) popup_clock_analogue_window_cp03

0x591b,	// (0x00052de5) popup_clock_digital_window_cp02_ParamLimits

0x591b,	// (0x00052de5) popup_clock_digital_window_cp02

0x5994,	// (0x00052e5e) main_clock2_list_single_pane_ParamLimits

0x5994,	// (0x00052e5e) main_clock2_list_single_pane

0xaa82,	// (0x00057f4c) list_highlight_pane_cp05

0xd149,	// (0x0005a613) main_clock2_list_single_pane_t1

0x208c,	// (0x0004f556) popup_toolbar_window_cp04_ParamLimits

0x4da3,	// (0x0005226d) camera2_autofocus_pane_g2_ParamLimits

0x4da3,	// (0x0005226d) camera2_autofocus_pane_g2

0x4daf,	// (0x00052279) camera2_autofocus_pane_g3_ParamLimits

0x4daf,	// (0x00052279) camera2_autofocus_pane_g3

0x4dbb,	// (0x00052285) camera2_autofocus_pane_g4_ParamLimits

0x4dbb,	// (0x00052285) camera2_autofocus_pane_g4

0x4dc7,	// (0x00052291) camera2_autofocus_pane_g5_ParamLimits

0x4dc7,	// (0x00052291) camera2_autofocus_pane_g5

0x0004,

0xf6f2,	// (0x0005cbbc) camera2_autofocus_pane_g_ParamLimits

0xf6f2,	// (0x0005cbbc) camera2_autofocus_pane_g

0xcfd0,	// (0x0005a49a) camera2_autofocus_pane_cp_g2

0xcfd8,	// (0x0005a4a2) camera2_autofocus_pane_cp_g3

0xcfe0,	// (0x0005a4aa) camera2_autofocus_pane_cp_g4

0xcfe8,	// (0x0005a4b2) camera2_autofocus_pane_cp_g5

0x0004,

0xf758,	// (0x0005cc22) camera2_autofocus_pane_cp_g

0x569d,	// (0x00052b67) popup_dialer_spcha_window

0x9878,	// (0x00056d42) bg_popup_sub_pane_cp07

0xd157,	// (0x0005a621) list_spcha_pane

0xd15f,	// (0x0005a629) list_single_spcha_pane_ParamLimits

0xd15f,	// (0x0005a629) list_single_spcha_pane

0x9878,	// (0x00056d42) list_highlight_pane_cp06

0xd170,	// (0x0005a63a) list_single_spcha_pane_t1

0xc331,	// (0x000597fb) popup_call2_audio_out_window_g4_ParamLimits

0xc331,	// (0x000597fb) popup_call2_audio_out_window_g4

0x9878,	// (0x00056d42) main_imed2_pane

0xa06b,	// (0x00057535) popup_imed_adjust2_window

0x4184,	// (0x0005164e) popup_imed_trans_window_ParamLimits

0x4184,	// (0x0005164e) popup_imed_trans_window

0xcb46,	// (0x0005a010) popup_blid_sat_info2_window_t1

0xcb54,	// (0x0005a01e) popup_blid_sat_info2_window_t2

0x000a,

0xf687,	// (0x0005cb51) popup_blid_sat_info2_window_t

0x5a45,	// (0x00052f0f) aid_size_cell_colour_35

0x5a65,	// (0x00052f2f) aid_size_cell_colour_112

0x5a85,	// (0x00052f4f) aid_size_cell_effect

0xc900,	// (0x00059dca) bg_tb_trans_pane_cp02

0xaf23,	// (0x000583ed) heading_imed_pane

0x5aa5,	// (0x00052f6f) listscroll_imed_pane

0xd17e,	// (0x0005a648) heading_imed_pane_g1

0xd186,	// (0x0005a650) heading_imed_pane_t1

0xd194,	// (0x0005a65e) grid_imed_colour_35_pane_ParamLimits

0xd194,	// (0x0005a65e) grid_imed_colour_35_pane

0x5ab1,	// (0x00052f7b) grid_imed_effect_pane

0xd1ab,	// (0x0005a675) list_imed_aspect_pane

0x5ac7,	// (0x00052f91) scroll_pane_cp027_ParamLimits

0x5ac7,	// (0x00052f91) scroll_pane_cp027

0x5ad8,	// (0x00052fa2) cell_imed_effect_pane_ParamLimits

0x5ad8,	// (0x00052fa2) cell_imed_effect_pane

0xd1b3,	// (0x0005a67d) cell_imed_colour_pane_ParamLimits

0xd1b3,	// (0x0005a67d) cell_imed_colour_pane

0xd1f5,	// (0x0005a6bf) cell_imed_colour_pane_g1_ParamLimits

0xd1f5,	// (0x0005a6bf) cell_imed_colour_pane_g1

0xd206,	// (0x0005a6d0) hgihlgiht_grid_pane_cp016_ParamLimits

0xd206,	// (0x0005a6d0) hgihlgiht_grid_pane_cp016

0x5aff,	// (0x00052fc9) cell_imed_effect_pane_g1

0x5b07,	// (0x00052fd1) grid_highlight_pane_cp017

0xd217,	// (0x0005a6e1) list_imed_single_pane_ParamLimits

0xd217,	// (0x0005a6e1) list_imed_single_pane

0x9878,	// (0x00056d42) list_highlight_pane_cp07

0xd22c,	// (0x0005a6f6) list_imed_aspect_pane_comp1_t1

0xc900,	// (0x00059dca) bg_tb_trans_pane_cp05

0xd24e,	// (0x0005a718) popup_imed_adjust2_window_g1

0xd275,	// (0x0005a73f) popup_imed_adjust2_window_t1

0xd28d,	// (0x0005a757) slider_imed_adjust_pane

0xd2a1,	// (0x0005a76b) slider_imed_adjust_pane_g1

0xd2b1,	// (0x0005a77b) slider_imed_adjust_pane_g2

0xd2c1,	// (0x0005a78b) slider_imed_adjust_pane_g3

0xd2d2,	// (0x0005a79c) slider_imed_adjust_pane_g4

0x0003,

0xf7cb,	// (0x0005cc95) slider_imed_adjust_pane_g

0x5b10,	// (0x00052fda) aid_size_cell_clipart2

0x5b1c,	// (0x00052fe6) grid_imed_clipart_pane

0xd2e3,	// (0x0005a7ad) scroll_pane_cp031

0x5b26,	// (0x00052ff0) cell_imed_clipart_pane_ParamLimits

0x5b26,	// (0x00052ff0) cell_imed_clipart_pane

0x5b48,	// (0x00053012) cell_imed_clipart_pane_g1

0x9878,	// (0x00056d42) grid_highlight_pane_cp014

0x57f7,	// (0x00052cc1) main_clock2_pane_g1_ParamLimits

0x57f7,	// (0x00052cc1) main_clock2_pane_g1

0x593b,	// (0x00052e05) aid_call2_pane_cp10

0x594d,	// (0x00052e17) aid_call_pane_cp10

0xb325,	// (0x000587ef) popup_clock_analogue_window_cp10_g1

0xb325,	// (0x000587ef) popup_clock_analogue_window_cp10_g2

0x595f,	// (0x00052e29) popup_clock_analogue_window_cp10_g3

0x595f,	// (0x00052e29) popup_clock_analogue_window_cp10_g4

0xb325,	// (0x000587ef) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7b9,	// (0x0005cc83) popup_clock_analogue_window_cp10_g

0x5975,	// (0x00052e3f) popup_clock_analogue_window_cp10_t1

0x59a6,	// (0x00052e70) clock_digital_number_pane_cp10_ParamLimits

0x59a6,	// (0x00052e70) clock_digital_number_pane_cp10

0x59be,	// (0x00052e88) clock_digital_number_pane_cp11_ParamLimits

0x59be,	// (0x00052e88) clock_digital_number_pane_cp11

0x59d6,	// (0x00052ea0) clock_digital_number_pane_cp12_ParamLimits

0x59d6,	// (0x00052ea0) clock_digital_number_pane_cp12

0x59f0,	// (0x00052eba) clock_digital_number_pane_cp13_ParamLimits

0x59f0,	// (0x00052eba) clock_digital_number_pane_cp13

0x5a0a,	// (0x00052ed4) clock_digital_separator_pane_cp10_ParamLimits

0x5a0a,	// (0x00052ed4) clock_digital_separator_pane_cp10

0x5a24,	// (0x00052eee) popup_clock_digital_window_cp02_t1_ParamLimits

0x5a24,	// (0x00052eee) popup_clock_digital_window_cp02_t1

0xa7e7,	// (0x00057cb1) clock_digital_number_pane_cp10_g1

0xa7e7,	// (0x00057cb1) clock_digital_number_pane_cp10_g2

0x0001,

0xf7d4,	// (0x0005cc9e) clock_digital_number_pane_cp10_g

0xa7e7,	// (0x00057cb1) clock_digital_separator_pane_cp10_g1

0xa7e7,	// (0x00057cb1) clock_digital_separator_pane_g2_cp10

0xb4b0,	// (0x0005897a) navi_pane_vded_g4

0xb4b9,	// (0x00058983) navi_pane_vded_g5

0xb4c2,	// (0x0005898c) navi_pane_vded_t1

0x9878,	// (0x00056d42) main_vded_pane

0x5b51,	// (0x0005301b) main_vded_pane_g1

0x5b5b,	// (0x00053025) main_vded_pane_g2

0x5b65,	// (0x0005302f) main_vded_pane_g3

0x0002,

0xf7d9,	// (0x0005cca3) main_vded_pane_g

0x5b6f,	// (0x00053039) main_vded_pane_t1

0x5b7d,	// (0x00053047) main_vded_pane_t2

0x0001,

0xf7e0,	// (0x0005ccaa) main_vded_pane_t

0x5b8b,	// (0x00053055) vded_slider_pane

0x5b93,	// (0x0005305d) vded_video_pane

0xd2eb,	// (0x0005a7b5) vded_video_pane_g1

0x5b9b,	// (0x00053065) vded_video_pane_g2

0xcd08,	// (0x0005a1d2) vded_video_pane_g3

0x0002,

0xf7e5,	// (0x0005ccaf) vded_video_pane_g

0xd2f5,	// (0x0005a7bf) vded_slider_pane_g1

0xca5b,	// (0x00059f25) vded_slider_pane_g2

0xd2fe,	// (0x0005a7c8) vded_slider_pane_g3

0xd307,	// (0x0005a7d1) vded_slider_pane_g4

0xd310,	// (0x0005a7da) vded_slider_pane_g5

0x0004,

0xf7ec,	// (0x0005ccb6) vded_slider_pane_g

0x557e,	// (0x00052a48) mup3_rocker_pane_ParamLimits

0x557e,	// (0x00052a48) mup3_rocker_pane

0x5ba4,	// (0x0005306e) mup3_control_keys_pane_g1

0x5bac,	// (0x00053076) mup3_control_keys_pane_g2

0x5bb4,	// (0x0005307e) mup3_control_keys_pane_g3

0x5bbc,	// (0x00053086) mup3_control_keys_pane_g4

0x0003,

0xf7f7,	// (0x0005ccc1) mup3_control_keys_pane_g

0x1151,	// (0x0004e61b) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1151,	// (0x0004e61b) popup_toolbar2_fixed_window_cp01

0x55b2,	// (0x00052a7c) popup_toolbar2_fixed_window_cp02_ParamLimits

0x55b2,	// (0x00052a7c) popup_toolbar2_fixed_window_cp02

0xbc70,	// (0x0005913a) popup_call2_audio_second_window_t4_ParamLimits

0xbc70,	// (0x0005913a) popup_call2_audio_second_window_t4

0xc19e,	// (0x00059668) popup_call2_audio_first_window_t6_ParamLimits

0xc19e,	// (0x00059668) popup_call2_audio_first_window_t6

0xc434,	// (0x000598fe) popup_call2_audio_out_window_t6_ParamLimits

0xc434,	// (0x000598fe) popup_call2_audio_out_window_t6

0x9878,	// (0x00056d42) main_vitu_pane

0x5bcc,	// (0x00053096) aid_size_cell_itu_ParamLimits

0x5bcc,	// (0x00053096) aid_size_cell_itu

0xa757,	// (0x00057c21) bg_popup_window_pane_cp08_ParamLimits

0xa757,	// (0x00057c21) bg_popup_window_pane_cp08

0x5be2,	// (0x000530ac) field_vitu_entry_pane_ParamLimits

0x5be2,	// (0x000530ac) field_vitu_entry_pane

0x5bf9,	// (0x000530c3) grid_vitu_function_pane_ParamLimits

0x5bf9,	// (0x000530c3) grid_vitu_function_pane

0x5c14,	// (0x000530de) grid_vitu_itu_pane_ParamLimits

0x5c14,	// (0x000530de) grid_vitu_itu_pane

0x5c32,	// (0x000530fc) cell_vitu_itu_pane_ParamLimits

0x5c32,	// (0x000530fc) cell_vitu_itu_pane

0x5c54,	// (0x0005311e) cell_vitu_function_pane_ParamLimits

0x5c54,	// (0x0005311e) cell_vitu_function_pane

0xa757,	// (0x00057c21) bg_popup_sub_pane_cp08_ParamLimits

0xa757,	// (0x00057c21) bg_popup_sub_pane_cp08

0x5c6d,	// (0x00053137) field_vitu_entry_pane_t1_ParamLimits

0x5c6d,	// (0x00053137) field_vitu_entry_pane_t1

0xd331,	// (0x0005a7fb) field_vitu_entry_pane_t2_ParamLimits

0xd331,	// (0x0005a7fb) field_vitu_entry_pane_t2

0x0001,

0xf805,	// (0x0005cccf) field_vitu_entry_pane_t_ParamLimits

0xf805,	// (0x0005cccf) field_vitu_entry_pane_t

0xd34e,	// (0x0005a818) bg_button_pane_cp05_ParamLimits

0xd34e,	// (0x0005a818) bg_button_pane_cp05

0x5c8b,	// (0x00053155) cell_vitu_itu_pane_g1

0x5ca3,	// (0x0005316d) cell_vitu_itu_pane_t1_ParamLimits

0x5ca3,	// (0x0005316d) cell_vitu_itu_pane_t1

0x5cb5,	// (0x0005317f) cell_vitu_itu_pane_t2_ParamLimits

0x5cb5,	// (0x0005317f) cell_vitu_itu_pane_t2

0x0002,

0xf80a,	// (0x0005ccd4) cell_vitu_itu_pane_t_ParamLimits

0xf80a,	// (0x0005ccd4) cell_vitu_itu_pane_t

0xd35c,	// (0x0005a826) bg_button_pane_cp07

0x5cea,	// (0x000531b4) cell_vitu_function_pane_g1

0x9ec4,	// (0x0005738e) main_calc_pane_g1

0x0f68,	// (0x0004e432) aid_visual_content_pane

0x9878,	// (0x00056d42) main_vradio_pane

0x5cf3,	// (0x000531bd) main_vradio_pane_g1_ParamLimits

0x5cf3,	// (0x000531bd) main_vradio_pane_g1

0xd366,	// (0x0005a830) main_vradio_pane_g2_ParamLimits

0xd366,	// (0x0005a830) main_vradio_pane_g2

0x0001,

0xf811,	// (0x0005ccdb) main_vradio_pane_g_ParamLimits

0xf811,	// (0x0005ccdb) main_vradio_pane_g

0x5d0c,	// (0x000531d6) main_vradio_pane_t1_ParamLimits

0x5d0c,	// (0x000531d6) main_vradio_pane_t1

0x5d21,	// (0x000531eb) main_vradio_pane_t2_ParamLimits

0x5d21,	// (0x000531eb) main_vradio_pane_t2

0xd373,	// (0x0005a83d) main_vradio_pane_t3_ParamLimits

0xd373,	// (0x0005a83d) main_vradio_pane_t3

0x0002,

0xf816,	// (0x0005cce0) main_vradio_pane_t_ParamLimits

0xf816,	// (0x0005cce0) main_vradio_pane_t

0x5d36,	// (0x00053200) vradio_rocker_control_pane_ParamLimits

0x5d36,	// (0x00053200) vradio_rocker_control_pane

0x5d48,	// (0x00053212) vradio_station_info_pane_ParamLimits

0x5d48,	// (0x00053212) vradio_station_info_pane

0xd387,	// (0x0005a851) vradio_frequency_info_pane_ParamLimits

0xd387,	// (0x0005a851) vradio_frequency_info_pane

0xcd08,	// (0x0005a1d2) vradio_station_info_pane_g1

0xd396,	// (0x0005a860) vradio_station_info_pane_t1_ParamLimits

0xd396,	// (0x0005a860) vradio_station_info_pane_t1

0xd3b8,	// (0x0005a882) vradio_station_info_pane_t2_ParamLimits

0xd3b8,	// (0x0005a882) vradio_station_info_pane_t2

0x0001,

0xf81d,	// (0x0005cce7) vradio_station_info_pane_t_ParamLimits

0xf81d,	// (0x0005cce7) vradio_station_info_pane_t

0xd3ca,	// (0x0005a894) vradio_tuning_pane

0xd3d2,	// (0x0005a89c) vradio_rocker_control_pane_g1

0xd3da,	// (0x0005a8a4) vradio_rocker_control_pane_g2

0xd3e2,	// (0x0005a8ac) vradio_rocker_control_pane_g3

0xd3ea,	// (0x0005a8b4) vradio_rocker_control_pane_g4

0xd3f2,	// (0x0005a8bc) vradio_rocker_control_pane_g5

0x0004,

0xf822,	// (0x0005ccec) vradio_rocker_control_pane_g

0x5d5a,	// (0x00053224) vradio_frequency_info_pane_g1

0xd3fa,	// (0x0005a8c4) vradio_frequency_info_pane_t1_ParamLimits

0xd3fa,	// (0x0005a8c4) vradio_frequency_info_pane_t1

0x5d64,	// (0x0005322e) vradio_tuning_pane_g1

0x5d6f,	// (0x00053239) vradio_tuning_pane_t1

0x989e,	// (0x00056d68) area_side_right_pane_ParamLimits

0x989e,	// (0x00056d68) area_side_right_pane

0xc8bb,	// (0x00059d85) status_small_pane_g1

0xc8c3,	// (0x00059d8d) status_small_pane_g2

0xc8cc,	// (0x00059d96) status_small_pane_g3

0xc8d5,	// (0x00059d9f) status_small_pane_g4

0x0003,

0xf5dd,	// (0x0005caa7) status_small_pane_g

0xc8de,	// (0x00059da8) status_small_pane_t1

0x9878,	// (0x00056d42) main_video3_pane

0xd40e,	// (0x0005a8d8) cams_zoom_vslider_pane

0xd416,	// (0x0005a8e0) image3_wide_pane_ParamLimits

0xd416,	// (0x0005a8e0) image3_wide_pane

0xd430,	// (0x0005a8fa) image3_wide_small_pane

0xd43c,	// (0x0005a906) main_video3_pane_g1_ParamLimits

0xd43c,	// (0x0005a906) main_video3_pane_g1

0xd458,	// (0x0005a922) main_video3_pane_g2_ParamLimits

0xd458,	// (0x0005a922) main_video3_pane_g2

0x0001,

0xf82d,	// (0x0005ccf7) main_video3_pane_g_ParamLimits

0xf82d,	// (0x0005ccf7) main_video3_pane_g

0xd474,	// (0x0005a93e) main_video3_pane_t1_ParamLimits

0xd474,	// (0x0005a93e) main_video3_pane_t1

0xd49f,	// (0x0005a969) main_video3_pane_t2_ParamLimits

0xd49f,	// (0x0005a969) main_video3_pane_t2

0xd4ca,	// (0x0005a994) main_video3_pane_t3_ParamLimits

0xd4ca,	// (0x0005a994) main_video3_pane_t3

0x0002,

0xf832,	// (0x0005ccfc) main_video3_pane_t_ParamLimits

0xf832,	// (0x0005ccfc) main_video3_pane_t

0xd4f7,	// (0x0005a9c1) cams_zoom_vslider_pane_g1

0xd500,	// (0x0005a9ca) cams_zoom_vslider_pane_g2

0x0001,

0xf839,	// (0x0005cd03) cams_zoom_vslider_pane_g

0xd508,	// (0x0005a9d2) small_slider_vertical_pane

0xcd08,	// (0x0005a1d2) small_slider_vertical_pane_g1

0xcd08,	// (0x0005a1d2) small_slider_vertical_pane_g2

0xd510,	// (0x0005a9da) small_slider_vertical_pane_g3

0x0002,

0xf83e,	// (0x0005cd08) small_slider_vertical_pane_g

0x9878,	// (0x00056d42) main_hwr_training_pane

0xd519,	// (0x0005a9e3) hwr_training_instruct_pane_ParamLimits

0xd519,	// (0x0005a9e3) hwr_training_instruct_pane

0x5d7e,	// (0x00053248) hwr_training_navi_pane_ParamLimits

0x5d7e,	// (0x00053248) hwr_training_navi_pane

0x5d9d,	// (0x00053267) hwr_training_write_pane_ParamLimits

0x5d9d,	// (0x00053267) hwr_training_write_pane

0x9878,	// (0x00056d42) bg_frame_shadow_pane

0xd550,	// (0x0005aa1a) hwr_training_write_pane_g1

0xd558,	// (0x0005aa22) hwr_training_write_pane_g2

0xd560,	// (0x0005aa2a) hwr_training_write_pane_g3

0xd568,	// (0x0005aa32) hwr_training_write_pane_g4

0xd570,	// (0x0005aa3a) hwr_training_write_pane_g5

0xd578,	// (0x0005aa42) hwr_training_write_pane_g6

0xd580,	// (0x0005aa4a) hwr_training_write_pane_g7

0x0006,

0xf845,	// (0x0005cd0f) hwr_training_write_pane_g

0xa164,	// (0x0005762e) hwr_training_navi_pane_g1_ParamLimits

0xa164,	// (0x0005762e) hwr_training_navi_pane_g1

0xa176,	// (0x00057640) hwr_training_navi_pane_g2_ParamLimits

0xa176,	// (0x00057640) hwr_training_navi_pane_g2

0xa188,	// (0x00057652) hwr_training_navi_pane_g3_ParamLimits

0xa188,	// (0x00057652) hwr_training_navi_pane_g3

0xa198,	// (0x00057662) hwr_training_navi_pane_g4_ParamLimits

0xa198,	// (0x00057662) hwr_training_navi_pane_g4

0x0004,

0xf854,	// (0x0005cd1e) hwr_training_navi_pane_g_ParamLimits

0xf854,	// (0x0005cd1e) hwr_training_navi_pane_g

0xa1a5,	// (0x0005766f) hwr_training_navi_pane_t1

0x5de5,	// (0x000532af) list_single_hwr_training_instruct_pane_ParamLimits

0x5de5,	// (0x000532af) list_single_hwr_training_instruct_pane

0xd588,	// (0x0005aa52) list_single_hwr_training_instruct_pane_t1

0xcc48,	// (0x0005a112) bg_frame_shadow_pane_g1

0xd597,	// (0x0005aa61) bg_frame_shadow_pane_g2

0xd59f,	// (0x0005aa69) bg_frame_shadow_pane_g3

0xd5a7,	// (0x0005aa71) bg_frame_shadow_pane_g4

0xd5af,	// (0x0005aa79) bg_frame_shadow_pane_g5

0xd5b7,	// (0x0005aa81) bg_frame_shadow_pane_g6

0xd5bf,	// (0x0005aa89) bg_frame_shadow_pane_g7

0xa976,	// (0x00057e40) bg_frame_shadow_pane_g8

0x0007,

0xf85f,	// (0x0005cd29) bg_frame_shadow_pane_g

0x9878,	// (0x00056d42) main_video_tele_dialer_pane

0x5dfa,	// (0x000532c4) aid_size_cell_video_keypad_ParamLimits

0x5dfa,	// (0x000532c4) aid_size_cell_video_keypad

0x5e14,	// (0x000532de) grid_video_dialer_keypad_pane_ParamLimits

0x5e14,	// (0x000532de) grid_video_dialer_keypad_pane

0x5e60,	// (0x0005332a) video_down_pane_cp_ParamLimits

0x5e60,	// (0x0005332a) video_down_pane_cp

0x5e92,	// (0x0005335c) cell_video_dialer_keypad_pane_ParamLimits

0x5e92,	// (0x0005335c) cell_video_dialer_keypad_pane

0xd5c7,	// (0x0005aa91) bg_button_pane_cp08_ParamLimits

0xd5c7,	// (0x0005aa91) bg_button_pane_cp08

0x5eb4,	// (0x0005337e) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5eb4,	// (0x0005337e) cell_video_dialer_keypad_pane_g1

0x5568,	// (0x00052a32) mup3_rocker2_pane_ParamLimits

0x5568,	// (0x00052a32) mup3_rocker2_pane

0xcd08,	// (0x0005a1d2) mup3_rocker2_pane_g1

0x4065,	// (0x0005152f) main_dialer2_pane

0x9878,	// (0x00056d42) main_mp4_pane

0xa1d1,	// (0x0005769b) main_mp4_pane_g1_ParamLimits

0xa1d1,	// (0x0005769b) main_mp4_pane_g1

0xa1d1,	// (0x0005769b) main_mp4_pane_g2_ParamLimits

0xa1d1,	// (0x0005769b) main_mp4_pane_g2

0x5eeb,	// (0x000533b5) main_mp4_pane_g3_ParamLimits

0x5eeb,	// (0x000533b5) main_mp4_pane_g3

0xa1df,	// (0x000576a9) main_mp4_pane_g4_ParamLimits

0xa1df,	// (0x000576a9) main_mp4_pane_g4

0xa20d,	// (0x000576d7) main_mp4_pane_g5_ParamLimits

0xa20d,	// (0x000576d7) main_mp4_pane_g5

0x0007,

0xf87f,	// (0x0005cd49) main_mp4_pane_g_ParamLimits

0xf87f,	// (0x0005cd49) main_mp4_pane_g

0xa281,	// (0x0005774b) main_mp4_pane_t1_ParamLimits

0xa281,	// (0x0005774b) main_mp4_pane_t1

0xa2dd,	// (0x000577a7) main_mp4_pane_t2_ParamLimits

0xa2dd,	// (0x000577a7) main_mp4_pane_t2

0xd5d3,	// (0x0005aa9d) main_mp4_pane_t3_ParamLimits

0xd5d3,	// (0x0005aa9d) main_mp4_pane_t3

0xa32f,	// (0x000577f9) main_mp4_pane_t4_ParamLimits

0xa32f,	// (0x000577f9) main_mp4_pane_t4

0x0003,

0xf890,	// (0x0005cd5a) main_mp4_pane_t_ParamLimits

0xf890,	// (0x0005cd5a) main_mp4_pane_t

0xa373,	// (0x0005783d) mp4_progress_pane_ParamLimits

0xa373,	// (0x0005783d) mp4_progress_pane

0xa3bd,	// (0x00057887) mp4_rocker_pane_ParamLimits

0xa3bd,	// (0x00057887) mp4_rocker_pane

0xd601,	// (0x0005aacb) mp4_progress_pane_t1

0xd61a,	// (0x0005aae4) mp4_progress_pane_t2

0x0001,

0xf899,	// (0x0005cd63) mp4_progress_pane_t

0xd633,	// (0x0005aafd) mup_progress_pane_cp04

0xcd08,	// (0x0005a1d2) mp4_rocker_pane_g1

0x5f27,	// (0x000533f1) aid_cell_size_keypad2_ParamLimits

0x5f27,	// (0x000533f1) aid_cell_size_keypad2

0x5f3d,	// (0x00053407) dialer2_ne_pane_ParamLimits

0x5f3d,	// (0x00053407) dialer2_ne_pane

0x5f57,	// (0x00053421) grid_dialer2_keypad_pane_ParamLimits

0x5f57,	// (0x00053421) grid_dialer2_keypad_pane

0xcaed,	// (0x00059fb7) bg_popup_call_pane_cp07_ParamLimits

0xcaed,	// (0x00059fb7) bg_popup_call_pane_cp07

0x5f73,	// (0x0005343d) dialer2_ne_pane_t1_ParamLimits

0x5f73,	// (0x0005343d) dialer2_ne_pane_t1

0x5fae,	// (0x00053478) cell_dialer2_keypad_pane_ParamLimits

0x5fae,	// (0x00053478) cell_dialer2_keypad_pane

0xd658,	// (0x0005ab22) bg_button_pane_pane_cp04_ParamLimits

0xd658,	// (0x0005ab22) bg_button_pane_pane_cp04

0x5fd0,	// (0x0005349a) cell_dialer2_keypad_pane_g1_ParamLimits

0x5fd0,	// (0x0005349a) cell_dialer2_keypad_pane_g1

0x1f60,	// (0x0004f42a) aid_placing_vt_set_content_ParamLimits

0x1f60,	// (0x0004f42a) aid_placing_vt_set_content

0x1f88,	// (0x0004f452) aid_placing_vt_set_title_ParamLimits

0x1f88,	// (0x0004f452) aid_placing_vt_set_title

0x9878,	// (0x00056d42) main_image3_pane

0x6096,	// (0x00053560) area_side_right_pane_cp01_ParamLimits

0x6096,	// (0x00053560) area_side_right_pane_cp01

0xa1d1,	// (0x0005769b) main_image3_pane_g1_ParamLimits

0xa1d1,	// (0x0005769b) main_image3_pane_g1

0x60ad,	// (0x00053577) main_image3_pane_g2_ParamLimits

0x60ad,	// (0x00053577) main_image3_pane_g2

0x60d5,	// (0x0005359f) main_image3_pane_g3_ParamLimits

0x60d5,	// (0x0005359f) main_image3_pane_g3

0x60ff,	// (0x000535c9) main_image3_pane_g4_ParamLimits

0x60ff,	// (0x000535c9) main_image3_pane_g4

0x0003,

0xf8a8,	// (0x0005cd72) main_image3_pane_g_ParamLimits

0xf8a8,	// (0x0005cd72) main_image3_pane_g

0x6129,	// (0x000535f3) main_image3_pane_t1_ParamLimits

0x6129,	// (0x000535f3) main_image3_pane_t1

0x6181,	// (0x0005364b) main_image3_pane_t2_ParamLimits

0x6181,	// (0x0005364b) main_image3_pane_t2

0x61d3,	// (0x0005369d) main_image3_pane_t3_ParamLimits

0x61d3,	// (0x0005369d) main_image3_pane_t3

0x0003,

0xf8b1,	// (0x0005cd7b) main_image3_pane_t_ParamLimits

0xf8b1,	// (0x0005cd7b) main_image3_pane_t

0xa757,	// (0x00057c21) grid_sctrl_middle_pane_cp01_ParamLimits

0xa757,	// (0x00057c21) grid_sctrl_middle_pane_cp01

0x625b,	// (0x00053725) cell_sctrl_middle_pane_cp01_ParamLimits

0x625b,	// (0x00053725) cell_sctrl_middle_pane_cp01

0x6278,	// (0x00053742) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6278,	// (0x00053742) cell_sctrl_middle_pane_cp01_g1

0x9878,	// (0x00056d42) main_call4_pane

0x628e,	// (0x00053758) aid_size_button_call4_ParamLimits

0x628e,	// (0x00053758) aid_size_button_call4

0x62c1,	// (0x0005378b) call4_windows_pane_ParamLimits

0x62c1,	// (0x0005378b) call4_windows_pane

0x62e0,	// (0x000537aa) grid_call4_button_pane_ParamLimits

0x62e0,	// (0x000537aa) grid_call4_button_pane

0x6313,	// (0x000537dd) call4_windows_conf_pane

0x632a,	// (0x000537f4) popup_call4_audio_first_window_ParamLimits

0x632a,	// (0x000537f4) popup_call4_audio_first_window

0x637a,	// (0x00053844) popup_call4_audio_second_window_ParamLimits

0x637a,	// (0x00053844) popup_call4_audio_second_window

0x6391,	// (0x0005385b) popup_call4_audio_wait_window_ParamLimits

0x6391,	// (0x0005385b) popup_call4_audio_wait_window

0x639f,	// (0x00053869) cell_call4_button_pane_ParamLimits

0x639f,	// (0x00053869) cell_call4_button_pane

0x63c4,	// (0x0005388e) bg_button_pane_cp09_ParamLimits

0x63c4,	// (0x0005388e) bg_button_pane_cp09

0x63d0,	// (0x0005389a) cell_call4_button_pane_g1_ParamLimits

0x63d0,	// (0x0005389a) cell_call4_button_pane_g1

0x63f6,	// (0x000538c0) cell_call4_button_pane_t1_ParamLimits

0x63f6,	// (0x000538c0) cell_call4_button_pane_t1

0xd66c,	// (0x0005ab36) popup_call4_audio_conf_window_ParamLimits

0xd66c,	// (0x0005ab36) popup_call4_audio_conf_window

0x55c8,	// (0x00052a92) mup3_progress_pane_t1_ParamLimits

0x55e7,	// (0x00052ab1) mup3_progress_pane_t2_ParamLimits

0xd006,	// (0x0005a4d0) mup3_progress_pane_t3_ParamLimits

0xf781,	// (0x0005cc4b) mup3_progress_pane_t_ParamLimits

0xd023,	// (0x0005a4ed) mup_progress_pane_cp03_ParamLimits

0x5bc4,	// (0x0005308e) mup3_control_keys_pane_g4_copy1

0xa3a1,	// (0x0005786b) mp4_rocker2_pane_ParamLimits

0xa3a1,	// (0x0005786b) mp4_rocker2_pane

0xd680,	// (0x0005ab4a) mp4_rocker2_pane_g1

0xd688,	// (0x0005ab52) mp4_rocker2_pane_g2

0xa441,	// (0x0005790b) mp4_rocker2_pane_g3

0xa449,	// (0x00057913) mp4_rocker2_pane_g4

0xa451,	// (0x0005791b) mp4_rocker2_pane_g5

0x0004,

0xf8ba,	// (0x0005cd84) mp4_rocker2_pane_g

0x9878,	// (0x00056d42) main_camera4_pane

0x9878,	// (0x00056d42) main_video4_pane

0x5e2e,	// (0x000532f8) main_video_tele_dialer_pane_t1_ParamLimits

0x5e2e,	// (0x000532f8) main_video_tele_dialer_pane_t1

0x5e47,	// (0x00053311) main_video_tele_dialer_pane_t2_ParamLimits

0x5e47,	// (0x00053311) main_video_tele_dialer_pane_t2

0x0001,

0xf870,	// (0x0005cd3a) main_video_tele_dialer_pane_t_ParamLimits

0xf870,	// (0x0005cd3a) main_video_tele_dialer_pane_t

0x6434,	// (0x000538fe) cam4_autofocus_pane_ParamLimits

0x6434,	// (0x000538fe) cam4_autofocus_pane

0x644a,	// (0x00053914) cam4_image_uncrop_pane_ParamLimits

0x644a,	// (0x00053914) cam4_image_uncrop_pane

0x6464,	// (0x0005392e) cam4_indicators_pane_ParamLimits

0x6464,	// (0x0005392e) cam4_indicators_pane

0x648f,	// (0x00053959) main_camera4_pane_g1_ParamLimits

0x648f,	// (0x00053959) main_camera4_pane_g1

0x64a1,	// (0x0005396b) main_camera4_pane_g2_ParamLimits

0x64a1,	// (0x0005396b) main_camera4_pane_g2

0x64b4,	// (0x0005397e) main_camera4_pane_g3_ParamLimits

0x64b4,	// (0x0005397e) main_camera4_pane_g3

0x64c7,	// (0x00053991) main_camera4_pane_g4_ParamLimits

0x64c7,	// (0x00053991) main_camera4_pane_g4

0x64da,	// (0x000539a4) main_camera4_pane_g5_ParamLimits

0x64da,	// (0x000539a4) main_camera4_pane_g5

0x0005,

0xf8c5,	// (0x0005cd8f) main_camera4_pane_g_ParamLimits

0xf8c5,	// (0x0005cd8f) main_camera4_pane_g

0x64fe,	// (0x000539c8) main_camera4_pane_t1_ParamLimits

0x64fe,	// (0x000539c8) main_camera4_pane_t1

0xcf6b,	// (0x0005a435) bg_tb_trans_pane_cp06

0xa47d,	// (0x00057947) cam4_indicators_pane_g1

0xa48e,	// (0x00057958) cam4_indicators_pane_g2

0x0002,

0xf8e0,	// (0x0005cdaa) cam4_indicators_pane_g

0xa4ac,	// (0x00057976) cam4_indicators_pane_t1

0x6562,	// (0x00053a2c) main_video4_pane_g1_ParamLimits

0x6562,	// (0x00053a2c) main_video4_pane_g1

0x6571,	// (0x00053a3b) main_video4_pane_g2_ParamLimits

0x6571,	// (0x00053a3b) main_video4_pane_g2

0x6580,	// (0x00053a4a) main_video4_pane_g3_ParamLimits

0x6580,	// (0x00053a4a) main_video4_pane_g3

0x658f,	// (0x00053a59) main_video4_pane_g4_ParamLimits

0x658f,	// (0x00053a59) main_video4_pane_g4

0x0004,

0xf8e7,	// (0x0005cdb1) main_video4_pane_g_ParamLimits

0xf8e7,	// (0x0005cdb1) main_video4_pane_g

0x65ad,	// (0x00053a77) vid4_indicators_pane_ParamLimits

0x65ad,	// (0x00053a77) vid4_indicators_pane

0x65db,	// (0x00053aa5) video4_image_uncrop_cif_pane_ParamLimits

0x65db,	// (0x00053aa5) video4_image_uncrop_cif_pane

0x65f5,	// (0x00053abf) video4_image_uncrop_nhd_pane_ParamLimits

0x65f5,	// (0x00053abf) video4_image_uncrop_nhd_pane

0x644a,	// (0x00053914) video4_image_uncrop_vga_pane_ParamLimits

0x644a,	// (0x00053914) video4_image_uncrop_vga_pane

0xa757,	// (0x00057c21) bg_tb_trans_pane_cp07

0xa4d8,	// (0x000579a2) vid4_indicators_pane_g1

0xa4ec,	// (0x000579b6) vid4_indicators_pane_g2

0xa500,	// (0x000579ca) vid4_indicators_pane_g3

0x0004,

0xf8f2,	// (0x0005cdbc) vid4_indicators_pane_g

0xa52f,	// (0x000579f9) vid4_indicators_pane_t1

0x6609,	// (0x00053ad3) cam4_autofocus_pane_g1

0x6611,	// (0x00053adb) cam4_autofocus_pane_g2

0x6619,	// (0x00053ae3) cam4_autofocus_pane_g3

0x0002,

0xf8fd,	// (0x0005cdc7) cam4_autofocus_pane_g

0x6621,	// (0x00053aeb) cam4_autofocus_pane_g3_copy1

0x5e76,	// (0x00053340) video_down_pane_cp_t1

0x5e84,	// (0x0005334e) video_down_pane_cp_t2

0x0001,

0xf875,	// (0x0005cd3f) video_down_pane_cp_t

0xa757,	// (0x00057c21) popup_vitu2_window_ParamLimits

0xa757,	// (0x00057c21) popup_vitu2_window

0x6629,	// (0x00053af3) aid_size_cell2_itu2_ParamLimits

0x6629,	// (0x00053af3) aid_size_cell2_itu2

0x664f,	// (0x00053b19) aid_size_cell_itu2_ParamLimits

0x664f,	// (0x00053b19) aid_size_cell_itu2

0x66ab,	// (0x00053b75) bg_popup_window_pane_cp09_ParamLimits

0x66ab,	// (0x00053b75) bg_popup_window_pane_cp09

0x66b9,	// (0x00053b83) field_vitu2_entry_pane_ParamLimits

0x66b9,	// (0x00053b83) field_vitu2_entry_pane

0x66df,	// (0x00053ba9) grid_vitu2_function_pane_ParamLimits

0x66df,	// (0x00053ba9) grid_vitu2_function_pane

0x6730,	// (0x00053bfa) grid_vitu2_itu_pane_ParamLimits

0x6730,	// (0x00053bfa) grid_vitu2_itu_pane

0x67c8,	// (0x00053c92) cell_vitu2_itu_pane_ParamLimits

0x67c8,	// (0x00053c92) cell_vitu2_itu_pane

0x67f4,	// (0x00053cbe) cell_vitu2_function_pane_ParamLimits

0x67f4,	// (0x00053cbe) cell_vitu2_function_pane

0xd690,	// (0x0005ab5a) bg_popup_call_pane_cp08_ParamLimits

0xd690,	// (0x0005ab5a) bg_popup_call_pane_cp08

0xd6a7,	// (0x0005ab71) field_vitu2_entry_pane_g1

0xd6b3,	// (0x0005ab7d) field_vitu2_entry_pane_g2

0x0002,

0xf904,	// (0x0005cdce) field_vitu2_entry_pane_g

0x0326,	// (0x0004d7f0) field_vitu2_entry_pane_t1_ParamLimits

0x0326,	// (0x0004d7f0) field_vitu2_entry_pane_t1

0x6833,	// (0x00053cfd) field_vitu2_entry_pane_t2_ParamLimits

0x6833,	// (0x00053cfd) field_vitu2_entry_pane_t2

0x0001,

0xf90b,	// (0x0005cdd5) field_vitu2_entry_pane_t_ParamLimits

0xf90b,	// (0x0005cdd5) field_vitu2_entry_pane_t

0x6850,	// (0x00053d1a) bg_button_pane_cp010_ParamLimits

0x6850,	// (0x00053d1a) bg_button_pane_cp010

0xa546,	// (0x00057a10) cell_vitu2_itu_pane_g1

0x686c,	// (0x00053d36) cell_vitu2_itu_pane_t1_ParamLimits

0x686c,	// (0x00053d36) cell_vitu2_itu_pane_t1

0x0356,	// (0x0004d820) cell_vitu2_itu_pane_t2_ParamLimits

0x0356,	// (0x0004d820) cell_vitu2_itu_pane_t2

0x0002,

0xf915,	// (0x0005cddf) cell_vitu2_itu_pane_t_ParamLimits

0xf915,	// (0x0005cddf) cell_vitu2_itu_pane_t

0xa757,	// (0x00057c21) bg_button_pane_cp011

0x68ca,	// (0x00053d94) cell_vitu2_function_pane_g1

0x9878,	// (0x00056d42) main_myfav_hc_pane

0x6223,	// (0x000536ed) popup_image3_note_pane_ParamLimits

0x6223,	// (0x000536ed) popup_image3_note_pane

0x623f,	// (0x00053709) popup_image3_tool_bar_pane_ParamLimits

0x623f,	// (0x00053709) popup_image3_tool_bar_pane

0x03e4,	// (0x0004d8ae) cell_vitu2_itu_pane_t3_ParamLimits

0x03e4,	// (0x0004d8ae) cell_vitu2_itu_pane_t3

0x9878,	// (0x00056d42) bg_popup_trans_pane

0xd6d5,	// (0x0005ab9f) grid_image3_tool_bar_pane

0xd6df,	// (0x0005aba9) bg_popup_trans_pane_g1

0xacdb,	// (0x000581a5) bg_popup_trans_pane_g2

0xd6e7,	// (0x0005abb1) bg_popup_trans_pane_g3

0xd6ef,	// (0x0005abb9) bg_popup_trans_pane_g4

0xd6f7,	// (0x0005abc1) bg_popup_trans_pane_g5

0xd6ff,	// (0x0005abc9) bg_popup_trans_pane_g6

0xd707,	// (0x0005abd1) bg_popup_trans_pane_g7

0xd70f,	// (0x0005abd9) bg_popup_trans_pane_g8

0xacbb,	// (0x00058185) bg_popup_trans_pane_g9

0x0008,

0xf91c,	// (0x0005cde6) bg_popup_trans_pane_g

0xd717,	// (0x0005abe1) cell_image3_tool_bar_pane_ParamLimits

0xd717,	// (0x0005abe1) cell_image3_tool_bar_pane

0xcd08,	// (0x0005a1d2) cell_image3_tool_bar_pane_g1

0x9878,	// (0x00056d42) bg_popup_trans_pane_cp1

0xd72b,	// (0x0005abf5) popup_image3_note_pane_t1

0xd739,	// (0x0005ac03) popup_image3_note_pane_t2

0xd747,	// (0x0005ac11) popup_image3_note_pane_t3

0x0002,

0xf92f,	// (0x0005cdf9) popup_image3_note_pane_t

0xd755,	// (0x0005ac1f) popup_image3_note_pane_t3_copy1

0x68de,	// (0x00053da8) bg_myfav_hc_instruction_pane_ParamLimits

0x68de,	// (0x00053da8) bg_myfav_hc_instruction_pane

0x68f2,	// (0x00053dbc) cell_myfav_contact_pane_ParamLimits

0x68f2,	// (0x00053dbc) cell_myfav_contact_pane

0x6910,	// (0x00053dda) cell_myfav_contact_pane_cp1_ParamLimits

0x6910,	// (0x00053dda) cell_myfav_contact_pane_cp1

0x6928,	// (0x00053df2) cell_myfav_contact_pane_cp2_ParamLimits

0x6928,	// (0x00053df2) cell_myfav_contact_pane_cp2

0x6940,	// (0x00053e0a) cell_myfav_contact_pane_cp3_ParamLimits

0x6940,	// (0x00053e0a) cell_myfav_contact_pane_cp3

0x6957,	// (0x00053e21) cell_myfav_contact_pane_cp4_ParamLimits

0x6957,	// (0x00053e21) cell_myfav_contact_pane_cp4

0x696f,	// (0x00053e39) cell_myfav_contact_pane_cp5_ParamLimits

0x696f,	// (0x00053e39) cell_myfav_contact_pane_cp5

0x6983,	// (0x00053e4d) cell_myfav_contact_pane_cp6_ParamLimits

0x6983,	// (0x00053e4d) cell_myfav_contact_pane_cp6

0x6999,	// (0x00053e63) cell_myfav_contact_pane_cp7_ParamLimits

0x6999,	// (0x00053e63) cell_myfav_contact_pane_cp7

0xd763,	// (0x0005ac2d) listscroll_gen_pane_cp05

0x69b3,	// (0x00053e7d) main_myfav_hc_pane_g1_ParamLimits

0x69b3,	// (0x00053e7d) main_myfav_hc_pane_g1

0x69cd,	// (0x00053e97) main_myfav_hc_pane_g2_ParamLimits

0x69cd,	// (0x00053e97) main_myfav_hc_pane_g2

0x0002,

0xf936,	// (0x0005ce00) main_myfav_hc_pane_g_ParamLimits

0xf936,	// (0x0005ce00) main_myfav_hc_pane_g

0x69ff,	// (0x00053ec9) main_myfav_hc_pane_t1_ParamLimits

0x69ff,	// (0x00053ec9) main_myfav_hc_pane_t1

0xd76c,	// (0x0005ac36) main_myfav_hc_pane_t2_ParamLimits

0xd76c,	// (0x0005ac36) main_myfav_hc_pane_t2

0xd77e,	// (0x0005ac48) main_myfav_hc_pane_t3_ParamLimits

0xd77e,	// (0x0005ac48) main_myfav_hc_pane_t3

0x6a16,	// (0x00053ee0) main_myfav_hc_pane_t4_ParamLimits

0x6a16,	// (0x00053ee0) main_myfav_hc_pane_t4

0x0004,

0xf93d,	// (0x0005ce07) main_myfav_hc_pane_t_ParamLimits

0xf93d,	// (0x0005ce07) main_myfav_hc_pane_t

0xcd08,	// (0x0005a1d2) bg_myfav_hc_instruction_pane_g1

0xd790,	// (0x0005ac5a) cell_myfav_contact_pane_g1_ParamLimits

0xd790,	// (0x0005ac5a) cell_myfav_contact_pane_g1

0xd790,	// (0x0005ac5a) cell_myfav_contact_pane_g2_ParamLimits

0xd790,	// (0x0005ac5a) cell_myfav_contact_pane_g2

0xd79c,	// (0x0005ac66) cell_myfav_contact_pane_g3_ParamLimits

0xd79c,	// (0x0005ac66) cell_myfav_contact_pane_g3

0xcff0,	// (0x0005a4ba) cell_myfav_contact_pane_g4_ParamLimits

0xcff0,	// (0x0005a4ba) cell_myfav_contact_pane_g4

0xd7a9,	// (0x0005ac73) cell_myfav_contact_pane_g5_ParamLimits

0xd7a9,	// (0x0005ac73) cell_myfav_contact_pane_g5

0x0004,

0xf948,	// (0x0005ce12) cell_myfav_contact_pane_g_ParamLimits

0xf948,	// (0x0005ce12) cell_myfav_contact_pane_g

0x69e7,	// (0x00053eb1) main_myfav_hc_pane_g3_ParamLimits

0x69e7,	// (0x00053eb1) main_myfav_hc_pane_g3

0x10b3,	// (0x0004e57d) popup_adpt_find_window

0x6a3e,	// (0x00053f08) afind_page_pane_ParamLimits

0x6a3e,	// (0x00053f08) afind_page_pane

0x6a53,	// (0x00053f1d) aid_size_cell_afind_ParamLimits

0x6a53,	// (0x00053f1d) aid_size_cell_afind

0x6a71,	// (0x00053f3b) bg_popup_sub_pane_cp09_ParamLimits

0x6a71,	// (0x00053f3b) bg_popup_sub_pane_cp09

0x6a7e,	// (0x00053f48) find_pane_cp01_ParamLimits

0x6a7e,	// (0x00053f48) find_pane_cp01

0xd7b5,	// (0x0005ac7f) grid_afind_control_pane_ParamLimits

0xd7b5,	// (0x0005ac7f) grid_afind_control_pane

0x6a8b,	// (0x00053f55) grid_afind_pane_ParamLimits

0x6a8b,	// (0x00053f55) grid_afind_pane

0x6aad,	// (0x00053f77) cell_afind_pane_ParamLimits

0x6aad,	// (0x00053f77) cell_afind_pane

0xcd08,	// (0x0005a1d2) afind_page_pane_g1

0x6b14,	// (0x00053fde) afind_page_pane_g2

0x6b1d,	// (0x00053fe7) afind_page_pane_g3

0x0002,

0xf953,	// (0x0005ce1d) afind_page_pane_g

0x6b26,	// (0x00053ff0) afind_page_pane_t1

0xd7c9,	// (0x0005ac93) cell_afind_grid_control_pane_ParamLimits

0xd7c9,	// (0x0005ac93) cell_afind_grid_control_pane

0xd658,	// (0x0005ab22) bg_button_pane_cp69_ParamLimits

0xd658,	// (0x0005ab22) bg_button_pane_cp69

0x6b46,	// (0x00054010) cell_afind_pane_g1_ParamLimits

0x6b46,	// (0x00054010) cell_afind_pane_g1

0x6b53,	// (0x0005401d) cell_afind_pane_t1_ParamLimits

0x6b53,	// (0x0005401d) cell_afind_pane_t1

0xaad4,	// (0x00057f9e) bg_button_pane_cp72

0xd7d8,	// (0x0005aca2) cell_afind_grid_control_pane_g1

0x3b25,	// (0x00050fef) aid_image_placing_area_ParamLimits

0x3b25,	// (0x00050fef) aid_image_placing_area

0xd319,	// (0x0005a7e3) field_vitu_entry_pane_g1_ParamLimits

0xd319,	// (0x0005a7e3) field_vitu_entry_pane_g1

0xd325,	// (0x0005a7ef) field_vitu_entry_pane_g2_ParamLimits

0xd325,	// (0x0005a7ef) field_vitu_entry_pane_g2

0x0001,

0xf800,	// (0x0005ccca) field_vitu_entry_pane_g_ParamLimits

0xf800,	// (0x0005ccca) field_vitu_entry_pane_g

0x5c8b,	// (0x00053155) cell_vitu_itu_pane_g1_ParamLimits

0x5ccd,	// (0x00053197) cell_vitu_itu_pane_t3_ParamLimits

0x5ccd,	// (0x00053197) cell_vitu_itu_pane_t3

0xd601,	// (0x0005aacb) mp4_progress_pane_t1_ParamLimits

0xd61a,	// (0x0005aae4) mp4_progress_pane_t2_ParamLimits

0xf899,	// (0x0005cd63) mp4_progress_pane_t_ParamLimits

0xd633,	// (0x0005aafd) mup_progress_pane_cp04_ParamLimits

0x6a2a,	// (0x00053ef4) main_myfav_hc_pane_t5_ParamLimits

0x6a2a,	// (0x00053ef4) main_myfav_hc_pane_t5

0x9896,	// (0x00056d60) aid_zoom_text_primary

0x10b3,	// (0x0004e57d) popup_adpt_find_window_ParamLimits

0xa757,	// (0x00057c21) main_cam_set_pane

0x647b,	// (0x00053945) cam4_zoom_pane_ParamLimits

0x647b,	// (0x00053945) cam4_zoom_pane

0x6b65,	// (0x0005402f) main_cam_set_pane_g1_ParamLimits

0x6b65,	// (0x0005402f) main_cam_set_pane_g1

0x6b73,	// (0x0005403d) main_cam_set_pane_g2_ParamLimits

0x6b73,	// (0x0005403d) main_cam_set_pane_g2

0x0001,

0xf95a,	// (0x0005ce24) main_cam_set_pane_g_ParamLimits

0xf95a,	// (0x0005ce24) main_cam_set_pane_g

0x6b94,	// (0x0005405e) main_cam_set_pane_t1_ParamLimits

0x6b94,	// (0x0005405e) main_cam_set_pane_t1

0x6baf,	// (0x00054079) main_cset_listscroll_pane_ParamLimits

0x6baf,	// (0x00054079) main_cset_listscroll_pane

0x6bcf,	// (0x00054099) main_cset_slider_pane_ParamLimits

0x6bcf,	// (0x00054099) main_cset_slider_pane

0xd7e9,	// (0x0005acb3) main_cset_list_pane_ParamLimits

0xd7e9,	// (0x0005acb3) main_cset_list_pane

0xd7f9,	// (0x0005acc3) scroll_pane_cp028

0x6bf5,	// (0x000540bf) aid_area_touch_slider

0x6c11,	// (0x000540db) cset_slider_pane

0x6c3b,	// (0x00054105) main_cset_slider_pane_g1

0x6c50,	// (0x0005411a) main_cset_slider_pane_g2

0x0011,

0xf95f,	// (0x0005ce29) main_cset_slider_pane_g

0xd832,	// (0x0005acfc) main_cset_slider_pane_t1

0x6d0c,	// (0x000541d6) main_cset_slider_pane_t2

0x6d26,	// (0x000541f0) main_cset_slider_pane_t3

0x6d40,	// (0x0005420a) main_cset_slider_pane_t4

0x6d5a,	// (0x00054224) main_cset_slider_pane_t5

0x6d74,	// (0x0005423e) main_cset_slider_pane_t6

0x6d89,	// (0x00054253) main_cset_slider_pane_t7

0x000e,

0xf984,	// (0x0005ce4e) main_cset_slider_pane_t

0x6e8d,	// (0x00054357) cset_list_set_pane_ParamLimits

0x6e8d,	// (0x00054357) cset_list_set_pane

0x6e9f,	// (0x00054369) aid_position_infowindow_above

0x6ea7,	// (0x00054371) aid_position_infowindow_below

0x6eaf,	// (0x00054379) cset_list_set_pane_g1_ParamLimits

0x6eaf,	// (0x00054379) cset_list_set_pane_g1

0x6ebb,	// (0x00054385) cset_list_set_pane_g3_ParamLimits

0x6ebb,	// (0x00054385) cset_list_set_pane_g3

0x0001,

0xf9a3,	// (0x0005ce6d) cset_list_set_pane_g_ParamLimits

0xf9a3,	// (0x0005ce6d) cset_list_set_pane_g

0x6eca,	// (0x00054394) cset_list_set_pane_t1_ParamLimits

0x6eca,	// (0x00054394) cset_list_set_pane_t1

0xa757,	// (0x00057c21) list_highlight_pane_cp021_ParamLimits

0xa757,	// (0x00057c21) list_highlight_pane_cp021

0xb632,	// (0x00058afc) cset_slider_pane_g1

0xb644,	// (0x00058b0e) cset_slider_pane_g2

0xb63b,	// (0x00058b05) cset_slider_pane_g3

0x0002,

0xf9a8,	// (0x0005ce72) cset_slider_pane_g

0xa558,	// (0x00057a22) aid_area_touch_cam4_zoom

0xa560,	// (0x00057a2a) cam4_zoom_cont_pane

0xa568,	// (0x00057a32) cam4_zoom_pane_g1

0xa570,	// (0x00057a3a) cam4_zoom_pane_g2

0x6edf,	// (0x000543a9) cam4_zoom_pane_g3

0x0002,

0xf9af,	// (0x0005ce79) cam4_zoom_pane_g

0xd8d2,	// (0x0005ad9c) cam4_zoom_cont_pane_g1

0xd8db,	// (0x0005ada5) cam4_zoom_cont_pane_g2

0xd8e4,	// (0x0005adae) cam4_zoom_cont_pane_g3

0x0002,

0xf9b6,	// (0x0005ce80) cam4_zoom_cont_pane_g

0x62ac,	// (0x00053776) call4_image_pane_ParamLimits

0x62ac,	// (0x00053776) call4_image_pane

0x6313,	// (0x000537dd) call4_windows_conf_pane_ParamLimits

0x6358,	// (0x00053822) popup_call4_audio_in_window_ParamLimits

0x6358,	// (0x00053822) popup_call4_audio_in_window

0x9878,	// (0x00056d42) bg_popup_call2_act_pane_cp02

0xd664,	// (0x0005ab2e) call4_list_conf_pane

0xcd08,	// (0x0005a1d2) call4_image_pane_g1

0xcd08,	// (0x0005a1d2) call4_image_pane_g2

0x0001,

0xf6c1,	// (0x0005cb8b) call4_image_pane_g

0xd8ed,	// (0x0005adb7) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8ed,	// (0x0005adb7) list_single_graphic_popup_conf4_pane

0x9878,	// (0x00056d42) list_highlight_pane_cp022

0xd900,	// (0x0005adca) list_single_graphic_popup_conf4_pane_g1

0xb1f5,	// (0x000586bf) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9bd,	// (0x0005ce87) list_single_graphic_popup_conf4_pane_g

0xd908,	// (0x0005add2) list_single_graphic_popup_conf4_pane_t1

0x20ac,	// (0x0004f576) popup_vtel_slider_window_ParamLimits

0x20ac,	// (0x0004f576) popup_vtel_slider_window

0xd646,	// (0x0005ab10) dialer2_ne_pane_t2_ParamLimits

0xd646,	// (0x0005ab10) dialer2_ne_pane_t2

0x0001,

0xf89e,	// (0x0005cd68) dialer2_ne_pane_t_ParamLimits

0xf89e,	// (0x0005cd68) dialer2_ne_pane_t

0xcaed,	// (0x00059fb7) bg_popup_sub_pane_cp010_ParamLimits

0xcaed,	// (0x00059fb7) bg_popup_sub_pane_cp010

0x6ee7,	// (0x000543b1) popup_vtel_slider_window_g1_ParamLimits

0x6ee7,	// (0x000543b1) popup_vtel_slider_window_g1

0x6efa,	// (0x000543c4) popup_vtel_slider_window_g2_ParamLimits

0x6efa,	// (0x000543c4) popup_vtel_slider_window_g2

0x0003,

0xf9c2,	// (0x0005ce8c) popup_vtel_slider_window_g_ParamLimits

0xf9c2,	// (0x0005ce8c) popup_vtel_slider_window_g

0x6f50,	// (0x0005441a) vtel_slider_pane_ParamLimits

0x6f50,	// (0x0005441a) vtel_slider_pane

0x6f72,	// (0x0005443c) vtel_slider_pane_g1_ParamLimits

0x6f72,	// (0x0005443c) vtel_slider_pane_g1

0x6f86,	// (0x00054450) vtel_slider_pane_g2_ParamLimits

0x6f86,	// (0x00054450) vtel_slider_pane_g2

0x6f9e,	// (0x00054468) vtel_slider_pane_g3_ParamLimits

0x6f9e,	// (0x00054468) vtel_slider_pane_g3

0x6f72,	// (0x0005443c) vtel_slider_pane_g4_ParamLimits

0x6f72,	// (0x0005443c) vtel_slider_pane_g4

0x6fb4,	// (0x0005447e) vtel_slider_pane_g5_ParamLimits

0x6fb4,	// (0x0005447e) vtel_slider_pane_g5

0x0004,

0xf9cb,	// (0x0005ce95) vtel_slider_pane_g_ParamLimits

0xf9cb,	// (0x0005ce95) vtel_slider_pane_g

0xa757,	// (0x00057c21) main_gallery2_pane

0x667b,	// (0x00053b45) aid_size_row_itut2_dropdow_list_ParamLimits

0x667b,	// (0x00053b45) aid_size_row_itut2_dropdow_list

0x6707,	// (0x00053bd1) grid_vitu2_function_top_pane_ParamLimits

0x6707,	// (0x00053bd1) grid_vitu2_function_top_pane

0x6771,	// (0x00053c3b) popup_vitu2_dropdown_list_window_ParamLimits

0x6771,	// (0x00053c3b) popup_vitu2_dropdown_list_window

0x679a,	// (0x00053c64) popup_vitu2_match_list_window

0x6fca,	// (0x00054494) cell_vitu2_function_top_pane_ParamLimits

0x6fca,	// (0x00054494) cell_vitu2_function_top_pane

0x6fe2,	// (0x000544ac) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6fe2,	// (0x000544ac) cell_vitu2_function_top_pane_cp01

0x6ffe,	// (0x000544c8) cell_vitu2_function_top_wide_pane_ParamLimits

0x6ffe,	// (0x000544c8) cell_vitu2_function_top_wide_pane

0xa757,	// (0x00057c21) bg_button_pane_cp012

0x701a,	// (0x000544e4) cell_vitu2_function_top_pane_g1

0xa578,	// (0x00057a42) bg_button_pane_cp013_ParamLimits

0xa578,	// (0x00057a42) bg_button_pane_cp013

0x702e,	// (0x000544f8) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x702e,	// (0x000544f8) cell_vitu2_function_top_wide_pane_g1

0xa757,	// (0x00057c21) bg_popup_sub_pane_cp20

0x7046,	// (0x00054510) list_vitu2_match_list_pane

0xd6df,	// (0x0005aba9) bg_popup_sub_pane_cp20_g1

0xd6e7,	// (0x0005abb1) bg_popup_sub_pane_cp20_g2

0xacdb,	// (0x000581a5) bg_popup_sub_pane_cp20_g3

0xd6ef,	// (0x0005abb9) bg_popup_sub_pane_cp20_g4

0xacbb,	// (0x00058185) bg_popup_sub_pane_cp20_g5

0xd91e,	// (0x0005ade8) bg_popup_sub_pane_cp20_g6

0xd6ff,	// (0x0005abc9) bg_popup_sub_pane_cp20_g7

0xd707,	// (0x0005abd1) bg_popup_sub_pane_cp20_g8

0xd70f,	// (0x0005abd9) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9d6,	// (0x0005cea0) bg_popup_sub_pane_cp20_g

0xa594,	// (0x00057a5e) list_vitu2_match_list_item_pane_ParamLimits

0xa594,	// (0x00057a5e) list_vitu2_match_list_item_pane

0xa5a6,	// (0x00057a70) list_vitu2_match_list_item_pane_t1

0x9878,	// (0x00056d42) bg_popup_sub_pane_cp21

0xb11d,	// (0x000585e7) grid_vitu2_dropdown_list_pane

0x7064,	// (0x0005452e) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7064,	// (0x0005452e) cell_vitu2_dropdown_list_char_pane

0x7085,	// (0x0005454f) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7085,	// (0x0005454f) cell_vitu2_dropdown_list_ctrl_pane

0xd926,	// (0x0005adf0) cell_vitu2_dropdown_list_char_pane_g1

0xd92f,	// (0x0005adf9) cell_vitu2_dropdown_list_char_pane_g2

0xd938,	// (0x0005ae02) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9f3,	// (0x0005cebd) cell_vitu2_dropdown_list_char_pane_g

0x70b1,	// (0x0005457b) cell_vitu2_dropdown_list_char_pane_t1

0x70bf,	// (0x00054589) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x70bf,	// (0x00054589) cell_vitu2_dropdown_list_ctrl_pane_g1

0x70cc,	// (0x00054596) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x70cc,	// (0x00054596) cell_vitu2_dropdown_list_ctrl_pane_g2

0x70d9,	// (0x000545a3) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x70d9,	// (0x000545a3) cell_vitu2_dropdown_list_ctrl_pane_g3

0x70e6,	// (0x000545b0) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x70e6,	// (0x000545b0) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcf6b,	// (0x0005a435) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcf6b,	// (0x0005a435) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9fa,	// (0x0005cec4) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9fa,	// (0x0005cec4) cell_vitu2_dropdown_list_ctrl_pane_g

0x7102,	// (0x000545cc) aid_size_cell_gallery2_ParamLimits

0x7102,	// (0x000545cc) aid_size_cell_gallery2

0x7120,	// (0x000545ea) grid_gallery2_pane_ParamLimits

0x7120,	// (0x000545ea) grid_gallery2_pane

0x713a,	// (0x00054604) scroll_pane_cp029_ParamLimits

0x713a,	// (0x00054604) scroll_pane_cp029

0x714b,	// (0x00054615) cell_gallery2_pane_ParamLimits

0x714b,	// (0x00054615) cell_gallery2_pane

0xd941,	// (0x0005ae0b) cell_gallery2_pane_g2

0x71aa,	// (0x00054674) cell_gallery2_pane_g3

0xd949,	// (0x0005ae13) cell_gallery2_pane_g4

0xd951,	// (0x0005ae1b) cell_gallery2_pane_g5

0xaa82,	// (0x00057f4c) grid_highlight_pane_cp10

0x679a,	// (0x00053c64) popup_vitu2_match_list_window_ParamLimits

0x67b1,	// (0x00053c7b) popup_vitu2_query_window_ParamLimits

0x67b1,	// (0x00053c7b) popup_vitu2_query_window

0x9878,	// (0x00056d42) bg_vitu2_candi_button_pane

0xd926,	// (0x0005adf0) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd92f,	// (0x0005adf9) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd938,	// (0x0005ae02) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x04a0,	// (0x0004d96a) bg_button_pane_cp015

0x71b2,	// (0x0005467c) bg_button_pane_cp016

0x71c5,	// (0x0005468f) bg_button_pane_cp017

0xc900,	// (0x00059dca) bg_popup_sub_pane_cp22

0xd959,	// (0x0005ae23) popup_vitu2_query_window_g1

0x04d3,	// (0x0004d99d) popup_vitu2_query_window_g2

0x0002,

0xfa05,	// (0x0005cecf) popup_vitu2_query_window_g

0x04f2,	// (0x0004d9bc) popup_vitu2_query_window_t1_ParamLimits

0x04f2,	// (0x0004d9bc) popup_vitu2_query_window_t1

0x0527,	// (0x0004d9f1) popup_vitu2_query_window_t2_ParamLimits

0x0527,	// (0x0004d9f1) popup_vitu2_query_window_t2

0x0539,	// (0x0004da03) popup_vitu2_query_window_t3_ParamLimits

0x0539,	// (0x0004da03) popup_vitu2_query_window_t3

0x71e9,	// (0x000546b3) popup_vitu2_query_window_t4_ParamLimits

0x71e9,	// (0x000546b3) popup_vitu2_query_window_t4

0x720a,	// (0x000546d4) popup_vitu2_query_window_t5_ParamLimits

0x720a,	// (0x000546d4) popup_vitu2_query_window_t5

0x0006,

0xfa0c,	// (0x0005ced6) popup_vitu2_query_window_t_ParamLimits

0xfa0c,	// (0x0005ced6) popup_vitu2_query_window_t

0xd7e1,	// (0x0005acab) main_cset_text_pane

0x6bf5,	// (0x000540bf) aid_area_touch_slider_ParamLimits

0x6c11,	// (0x000540db) cset_slider_pane_ParamLimits

0x6c3b,	// (0x00054105) main_cset_slider_pane_g1_ParamLimits

0x6c50,	// (0x0005411a) main_cset_slider_pane_g2_ParamLimits

0xd802,	// (0x0005accc) main_cset_slider_pane_g3_ParamLimits

0xd802,	// (0x0005accc) main_cset_slider_pane_g3

0x6c65,	// (0x0005412f) main_cset_slider_pane_g4_ParamLimits

0x6c65,	// (0x0005412f) main_cset_slider_pane_g4

0x6c74,	// (0x0005413e) main_cset_slider_pane_g5_ParamLimits

0x6c74,	// (0x0005413e) main_cset_slider_pane_g5

0x6c80,	// (0x0005414a) main_cset_slider_pane_g6_ParamLimits

0x6c80,	// (0x0005414a) main_cset_slider_pane_g6

0xf95f,	// (0x0005ce29) main_cset_slider_pane_g_ParamLimits

0xd832,	// (0x0005acfc) main_cset_slider_pane_t1_ParamLimits

0x6d0c,	// (0x000541d6) main_cset_slider_pane_t2_ParamLimits

0x6d26,	// (0x000541f0) main_cset_slider_pane_t3_ParamLimits

0x6d40,	// (0x0005420a) main_cset_slider_pane_t4_ParamLimits

0x6d5a,	// (0x00054224) main_cset_slider_pane_t5_ParamLimits

0x6d74,	// (0x0005423e) main_cset_slider_pane_t6_ParamLimits

0x6d89,	// (0x00054253) main_cset_slider_pane_t7_ParamLimits

0x6db3,	// (0x0005427d) main_cset_slider_pane_t8_ParamLimits

0x6db3,	// (0x0005427d) main_cset_slider_pane_t8

0x6ddb,	// (0x000542a5) main_cset_slider_pane_t9_ParamLimits

0x6ddb,	// (0x000542a5) main_cset_slider_pane_t9

0x6e03,	// (0x000542cd) main_cset_slider_pane_t10_ParamLimits

0x6e03,	// (0x000542cd) main_cset_slider_pane_t10

0x6e2b,	// (0x000542f5) main_cset_slider_pane_t11_ParamLimits

0x6e2b,	// (0x000542f5) main_cset_slider_pane_t11

0x6e53,	// (0x0005431d) main_cset_slider_pane_t12_ParamLimits

0x6e53,	// (0x0005431d) main_cset_slider_pane_t12

0x6e70,	// (0x0005433a) main_cset_slider_pane_t13_ParamLimits

0x6e70,	// (0x0005433a) main_cset_slider_pane_t13

0xf984,	// (0x0005ce4e) main_cset_slider_pane_t_ParamLimits

0x9878,	// (0x00056d42) bg_popup_sub_pane_cp011

0xd965,	// (0x0005ae2f) main_cset_text_pane_g1

0xd96d,	// (0x0005ae37) main_cset_text_pane_t1

0xd97b,	// (0x0005ae45) main_cset_text_pane_t2

0xd989,	// (0x0005ae53) main_cset_text_pane_t3

0xd997,	// (0x0005ae61) main_cset_text_pane_t4

0xd9a5,	// (0x0005ae6f) main_cset_text_pane_t5

0xd9b3,	// (0x0005ae7d) main_cset_text_pane_t6

0xd9c1,	// (0x0005ae8b) main_cset_text_pane_t7

0x0006,

0xfa1b,	// (0x0005cee5) main_cset_text_pane_t

0x9878,	// (0x00056d42) main_cam4_burst_pane

0x9878,	// (0x00056d42) main_cam5_pane

0x6b34,	// (0x00053ffe) bg_button_pane_cp019

0x6b3d,	// (0x00054007) bg_button_pane_cp020

0xd80e,	// (0x0005acd8) main_cset_slider_pane_g7_ParamLimits

0xd80e,	// (0x0005acd8) main_cset_slider_pane_g7

0xd81a,	// (0x0005ace4) main_cset_slider_pane_g8_ParamLimits

0xd81a,	// (0x0005ace4) main_cset_slider_pane_g8

0x6c94,	// (0x0005415e) main_cset_slider_pane_g9_ParamLimits

0x6c94,	// (0x0005415e) main_cset_slider_pane_g9

0x6ca0,	// (0x0005416a) main_cset_slider_pane_g10_ParamLimits

0x6ca0,	// (0x0005416a) main_cset_slider_pane_g10

0x6cac,	// (0x00054176) main_cset_slider_pane_g11_ParamLimits

0x6cac,	// (0x00054176) main_cset_slider_pane_g11

0x6cb8,	// (0x00054182) main_cset_slider_pane_g12_ParamLimits

0x6cb8,	// (0x00054182) main_cset_slider_pane_g12

0x6cc4,	// (0x0005418e) main_cset_slider_pane_g13_ParamLimits

0x6cc4,	// (0x0005418e) main_cset_slider_pane_g13

0x6cd0,	// (0x0005419a) main_cset_slider_pane_g14_ParamLimits

0x6cd0,	// (0x0005419a) main_cset_slider_pane_g14

0x6cdc,	// (0x000541a6) main_cset_slider_pane_g15_ParamLimits

0x6cdc,	// (0x000541a6) main_cset_slider_pane_g15

0xd860,	// (0x0005ad2a) main_cset_slider_pane_t14_ParamLimits

0xd860,	// (0x0005ad2a) main_cset_slider_pane_t14

0xd899,	// (0x0005ad63) main_cset_slider_pane_t15_ParamLimits

0xd899,	// (0x0005ad63) main_cset_slider_pane_t15

0x722b,	// (0x000546f5) aid_cam4_burst_size_cell_ParamLimits

0x722b,	// (0x000546f5) aid_cam4_burst_size_cell

0x724b,	// (0x00054715) grid_cam4_burst_pane_ParamLimits

0x724b,	// (0x00054715) grid_cam4_burst_pane

0x7283,	// (0x0005474d) linegrid_cam4_burst_pane_ParamLimits

0x7283,	// (0x0005474d) linegrid_cam4_burst_pane

0xd9cf,	// (0x0005ae99) scroll_pane_cp30_ParamLimits

0xd9cf,	// (0x0005ae99) scroll_pane_cp30

0x72a7,	// (0x00054771) cell_cam4_burst_pane_ParamLimits

0x72a7,	// (0x00054771) cell_cam4_burst_pane

0xd9db,	// (0x0005aea5) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9db,	// (0x0005aea5) linegrid_cam4_burst_pane_g1

0x72f4,	// (0x000547be) linegrid_cam4_burst_pane_g2_ParamLimits

0x72f4,	// (0x000547be) linegrid_cam4_burst_pane_g2

0xd9e8,	// (0x0005aeb2) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9e8,	// (0x0005aeb2) linegrid_cam4_burst_pane_g3

0x0002,

0xfa2a,	// (0x0005cef4) linegrid_cam4_burst_pane_g_ParamLimits

0xfa2a,	// (0x0005cef4) linegrid_cam4_burst_pane_g

0x7305,	// (0x000547cf) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7305,	// (0x000547cf) linegrid_cam4_burst_pane_g3_copy1

0xd9f5,	// (0x0005aebf) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9f5,	// (0x0005aebf) linegrid_cam4_burst_pane_g4

0x731f,	// (0x000547e9) linegrid_cam4_burst_pane_g5_ParamLimits

0x731f,	// (0x000547e9) linegrid_cam4_burst_pane_g5

0x7330,	// (0x000547fa) linegrid_cam4_burst_pane_g6_ParamLimits

0x7330,	// (0x000547fa) linegrid_cam4_burst_pane_g6

0xda02,	// (0x0005aecc) linegrid_cam4_burst_pane_g7_ParamLimits

0xda02,	// (0x0005aecc) linegrid_cam4_burst_pane_g7

0x7347,	// (0x00054811) cell_cam4_burst_pane_g1

0xda1b,	// (0x0005aee5) main_cam5_pane_t1_ParamLimits

0xda1b,	// (0x0005aee5) main_cam5_pane_t1

0xda2d,	// (0x0005aef7) main_cam5_pane_t2_ParamLimits

0xda2d,	// (0x0005aef7) main_cam5_pane_t2

0xda3f,	// (0x0005af09) main_cam5_pane_t3_ParamLimits

0xda3f,	// (0x0005af09) main_cam5_pane_t3

0xda51,	// (0x0005af1b) main_cam5_pane_t4_ParamLimits

0xda51,	// (0x0005af1b) main_cam5_pane_t4

0xda69,	// (0x0005af33) main_cam5_pane_t5_ParamLimits

0xda69,	// (0x0005af33) main_cam5_pane_t5

0xda7d,	// (0x0005af47) main_cam5_pane_t6_ParamLimits

0xda7d,	// (0x0005af47) main_cam5_pane_t6

0xda91,	// (0x0005af5b) main_cam5_pane_t7_ParamLimits

0xda91,	// (0x0005af5b) main_cam5_pane_t7

0xdaa3,	// (0x0005af6d) main_cam5_pane_t8_ParamLimits

0xdaa3,	// (0x0005af6d) main_cam5_pane_t8

0xdabf,	// (0x0005af89) main_cam5_pane_t9_ParamLimits

0xdabf,	// (0x0005af89) main_cam5_pane_t9

0xdad1,	// (0x0005af9b) main_cam5_pane_t10_ParamLimits

0xdad1,	// (0x0005af9b) main_cam5_pane_t10

0xdae3,	// (0x0005afad) main_cam5_pane_t11_ParamLimits

0xdae3,	// (0x0005afad) main_cam5_pane_t11

0xdaf5,	// (0x0005afbf) main_cam5_pane_t12_ParamLimits

0xdaf5,	// (0x0005afbf) main_cam5_pane_t12

0xdb0a,	// (0x0005afd4) main_cam5_pane_t13_ParamLimits

0xdb0a,	// (0x0005afd4) main_cam5_pane_t13

0x000c,

0xfa36,	// (0x0005cf00) main_cam5_pane_t_ParamLimits

0xfa36,	// (0x0005cf00) main_cam5_pane_t

0x1135,	// (0x0004e5ff) popup_scut_keymap_window_ParamLimits

0x1135,	// (0x0004e5ff) popup_scut_keymap_window

0x735a,	// (0x00054824) aid_size_cell_brow_shortcut

0xaa82,	// (0x00057f4c) bg_popup_window_pane_cp010

0x7366,	// (0x00054830) grid_scut_pane

0x7372,	// (0x0005483c) cell_scut_pane_ParamLimits

0x7372,	// (0x0005483c) cell_scut_pane

0x7389,	// (0x00054853) cell_scut_pane_g1

0xdb27,	// (0x0005aff1) cell_scut_pane_t1

0xdb36,	// (0x0005b000) cell_scut_pane_t2

0x7392,	// (0x0005485c) cell_scut_pane_t3

0x0002,

0xfa51,	// (0x0005cf1b) cell_scut_pane_t

0x5181,	// (0x0005264b) main_mup3_pane_g8_ParamLimits

0x5181,	// (0x0005264b) main_mup3_pane_g8

0x6693,	// (0x00053b5d) area_vitu2_query_pane_ParamLimits

0x6693,	// (0x00053b5d) area_vitu2_query_pane

0x04b2,	// (0x0004d97c) input_focus_pane_cp08

0xdb45,	// (0x0005b00f) area_vitu2_query_pane_g1

0x05b7,	// (0x0004da81) area_vitu2_query_pane_g2

0x0001,

0xfa58,	// (0x0005cf22) area_vitu2_query_pane_g

0x73a0,	// (0x0005486a) area_vitu2_query_pane_t1_ParamLimits

0x73a0,	// (0x0005486a) area_vitu2_query_pane_t1

0x73b4,	// (0x0005487e) area_vitu2_query_pane_t2_ParamLimits

0x73b4,	// (0x0005487e) area_vitu2_query_pane_t2

0x05c8,	// (0x0004da92) area_vitu2_query_pane_t3_ParamLimits

0x05c8,	// (0x0004da92) area_vitu2_query_pane_t3

0x73c8,	// (0x00054892) area_vitu2_query_pane_t4_ParamLimits

0x73c8,	// (0x00054892) area_vitu2_query_pane_t4

0x73f0,	// (0x000548ba) area_vitu2_query_pane_t5_ParamLimits

0x73f0,	// (0x000548ba) area_vitu2_query_pane_t5

0x7418,	// (0x000548e2) area_vitu2_query_pane_t6_ParamLimits

0x7418,	// (0x000548e2) area_vitu2_query_pane_t6

0x0006,

0xfa5d,	// (0x0005cf27) area_vitu2_query_pane_t_ParamLimits

0xfa5d,	// (0x0005cf27) area_vitu2_query_pane_t

0x7464,	// (0x0005492e) bg_button_pane_cp018

0x7472,	// (0x0005493c) bg_button_pane_cp021

0x05f0,	// (0x0004daba) bg_button_pane_cp022

0x05ff,	// (0x0004dac9) input_focus_pane_cp09

0xb331,	// (0x000587fb) aid_size_touch_mv_arrow_left

0xb35a,	// (0x00058824) aid_size_touch_mv_arrow_right

0x6cf4,	// (0x000541be) main_cset_slider_pane_g16_ParamLimits

0x6cf4,	// (0x000541be) main_cset_slider_pane_g16

0x6d00,	// (0x000541ca) main_cset_slider_pane_g17_ParamLimits

0x6d00,	// (0x000541ca) main_cset_slider_pane_g17

0x7347,	// (0x00054811) cell_cam4_burst_pane_g1_ParamLimits

0x9878,	// (0x00056d42) compa_mode_pane

0x6f0a,	// (0x000543d4) popup_vtel_slider_window_g3_ParamLimits

0x6f0a,	// (0x000543d4) popup_vtel_slider_window_g3

0x6f21,	// (0x000543eb) popup_vtel_slider_window_g4_ParamLimits

0x6f21,	// (0x000543eb) popup_vtel_slider_window_g4

0x6f38,	// (0x00054402) popup_vtel_slider_window_t1_ParamLimits

0x6f38,	// (0x00054402) popup_vtel_slider_window_t1

0x9878,	// (0x00056d42) main_cl_pane

0xa06b,	// (0x00057535) popup_imed_adjust2_window_ParamLimits

0xc900,	// (0x00059dca) bg_tb_trans_pane_cp05_ParamLimits

0xd24e,	// (0x0005a718) popup_imed_adjust2_window_g1_ParamLimits

0xd25d,	// (0x0005a727) popup_imed_adjust2_window_g2_ParamLimits

0xd25d,	// (0x0005a727) popup_imed_adjust2_window_g2

0xd269,	// (0x0005a733) popup_imed_adjust2_window_g3_ParamLimits

0xd269,	// (0x0005a733) popup_imed_adjust2_window_g3

0x0002,

0xf7c4,	// (0x0005cc8e) popup_imed_adjust2_window_g_ParamLimits

0xf7c4,	// (0x0005cc8e) popup_imed_adjust2_window_g

0xd275,	// (0x0005a73f) popup_imed_adjust2_window_t1_ParamLimits

0xd28d,	// (0x0005a757) slider_imed_adjust_pane_ParamLimits

0xd2a1,	// (0x0005a76b) slider_imed_adjust_pane_g1_ParamLimits

0xd2b1,	// (0x0005a77b) slider_imed_adjust_pane_g2_ParamLimits

0xd2c1,	// (0x0005a78b) slider_imed_adjust_pane_g3_ParamLimits

0xd2d2,	// (0x0005a79c) slider_imed_adjust_pane_g4_ParamLimits

0xf7cb,	// (0x0005cc95) slider_imed_adjust_pane_g_ParamLimits

0x641c,	// (0x000538e6) aid_touch_area_cam4_ParamLimits

0x641c,	// (0x000538e6) aid_touch_area_cam4

0xa459,	// (0x00057923) battery_pane_cp01

0x64eb,	// (0x000539b5) main_camera4_pane_g6_ParamLimits

0x64eb,	// (0x000539b5) main_camera4_pane_g6

0x6515,	// (0x000539df) main_camera4_pane_t2_ParamLimits

0x6515,	// (0x000539df) main_camera4_pane_t2

0x0001,

0xf8d2,	// (0x0005cd9c) main_camera4_pane_t_ParamLimits

0xf8d2,	// (0x0005cd9c) main_camera4_pane_t

0x654a,	// (0x00053a14) aid_touch_area_vid4_ParamLimits

0x654a,	// (0x00053a14) aid_touch_area_vid4

0x659e,	// (0x00053a68) main_video4_pane_g5_ParamLimits

0x659e,	// (0x00053a68) main_video4_pane_g5

0x65c3,	// (0x00053a8d) vid4_progress_pane_ParamLimits

0x65c3,	// (0x00053a8d) vid4_progress_pane

0xd826,	// (0x0005acf0) main_cset_slider_pane_g18_ParamLimits

0xd826,	// (0x0005acf0) main_cset_slider_pane_g18

0xda0f,	// (0x0005aed9) cell_cam4_burst_pane_g2_ParamLimits

0xda0f,	// (0x0005aed9) cell_cam4_burst_pane_g2

0x0001,

0xfa31,	// (0x0005cefb) cell_cam4_burst_pane_g_ParamLimits

0xfa31,	// (0x0005cefb) cell_cam4_burst_pane_g

0xa8b4,	// (0x00057d7e) bg_cl_pane_ParamLimits

0xa8b4,	// (0x00057d7e) bg_cl_pane

0x747e,	// (0x00054948) cl_header_pane_ParamLimits

0x747e,	// (0x00054948) cl_header_pane

0x7492,	// (0x0005495c) cl_listscroll_pane_ParamLimits

0x7492,	// (0x0005495c) cl_listscroll_pane

0xdb51,	// (0x0005b01b) bg_cl_pane_g1

0xdb59,	// (0x0005b023) bg_cl_pane_g2

0xdb61,	// (0x0005b02b) bg_cl_pane_g3

0xdb69,	// (0x0005b033) bg_cl_pane_g4

0xdb71,	// (0x0005b03b) bg_cl_pane_g5

0xdb79,	// (0x0005b043) bg_cl_pane_g6

0xdb81,	// (0x0005b04b) bg_cl_pane_g7

0xdb89,	// (0x0005b053) bg_cl_pane_g8

0xdb91,	// (0x0005b05b) bg_cl_pane_g9

0x0008,

0xfa6c,	// (0x0005cf36) bg_cl_pane_g

0x74a2,	// (0x0005496c) aid_height_cl_leading_ParamLimits

0x74a2,	// (0x0005496c) aid_height_cl_leading

0x74ae,	// (0x00054978) aid_height_cl_text_ParamLimits

0x74ae,	// (0x00054978) aid_height_cl_text

0xa757,	// (0x00057c21) bg_cl_header_pane_ParamLimits

0xa757,	// (0x00057c21) bg_cl_header_pane

0x74cd,	// (0x00054997) cl_header_pane_g1_ParamLimits

0x74cd,	// (0x00054997) cl_header_pane_g1

0x74e3,	// (0x000549ad) cl_header_pane_t1_ParamLimits

0x74e3,	// (0x000549ad) cl_header_pane_t1

0xdb99,	// (0x0005b063) cl_list_pane

0xd7f9,	// (0x0005acc3) hc_scroll_pane_cp01

0xacbb,	// (0x00058185) bg_cl_header_pane_g1

0xd6df,	// (0x0005aba9) bg_cl_header_pane_g2

0xacdb,	// (0x000581a5) bg_cl_header_pane_g3

0xd6ef,	// (0x0005abb9) bg_cl_header_pane_g4

0xd6e7,	// (0x0005abb1) bg_cl_header_pane_g5

0xd91e,	// (0x0005ade8) bg_cl_header_pane_g6

0xd707,	// (0x0005abd1) bg_cl_header_pane_g7

0xd70f,	// (0x0005abd9) bg_cl_header_pane_g8

0xd6ff,	// (0x0005abc9) bg_cl_header_pane_g9

0x0008,

0xfa7f,	// (0x0005cf49) bg_cl_header_pane_g

0x74fc,	// (0x000549c6) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x74fc,	// (0x000549c6) hc_cl_list_double_graphic_heading_pane

0x750d,	// (0x000549d7) hc_cl_list_single_graphic_pane_ParamLimits

0x750d,	// (0x000549d7) hc_cl_list_single_graphic_pane

0x7523,	// (0x000549ed) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7523,	// (0x000549ed) hc_cl_list_single_graphic_pane_g1

0x752f,	// (0x000549f9) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x752f,	// (0x000549f9) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa92,	// (0x0005cf5c) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa92,	// (0x0005cf5c) hc_cl_list_single_graphic_pane_g

0x7543,	// (0x00054a0d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7543,	// (0x00054a0d) hc_cl_list_single_graphic_pane_t1

0x7523,	// (0x000549ed) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7523,	// (0x000549ed) hc_cl_list_double_graphic_heading_pane_g1

0x7558,	// (0x00054a22) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7558,	// (0x00054a22) hc_cl_list_double_graphic_heading_pane_g2

0x756c,	// (0x00054a36) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x756c,	// (0x00054a36) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa97,	// (0x0005cf61) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa97,	// (0x0005cf61) hc_cl_list_double_graphic_heading_pane_g

0x7580,	// (0x00054a4a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7580,	// (0x00054a4a) hc_cl_list_double_graphic_heading_pane_t1

0x7595,	// (0x00054a5f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7595,	// (0x00054a5f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa9e,	// (0x0005cf68) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa9e,	// (0x0005cf68) hc_cl_list_double_graphic_heading_pane_t

0xa5bc,	// (0x00057a86) vid4_progress_pane_g1

0xa5cc,	// (0x00057a96) vid4_progress_pane_g2

0x75aa,	// (0x00054a74) vid4_progress_pane_g3

0xa5dc,	// (0x00057aa6) vid4_progress_pane_g4

0x0004,

0xfaa3,	// (0x0005cf6d) vid4_progress_pane_g

0x75bc,	// (0x00054a86) vid4_progress_pane_t1

0xa5f4,	// (0x00057abe) vid4_progress_pane_t2

0x0002,

0xfaae,	// (0x0005cf78) vid4_progress_pane_t

0x75d4,	// (0x00054a9e) wait_bar_pane_cp07

0xcafb,	// (0x00059fc5) blid_firmament_pane_ParamLimits

0xcb3e,	// (0x0005a008) popup_blid_sat_info2_window_g1

0xcb62,	// (0x0005a02c) popup_blid_sat_info2_window_t3

0xcb70,	// (0x0005a03a) popup_blid_sat_info2_window_t4

0xcb7e,	// (0x0005a048) popup_blid_sat_info2_window_t5

0xcb8c,	// (0x0005a056) popup_blid_sat_info2_window_t6

0xcb9c,	// (0x0005a066) popup_blid_sat_info2_window_t7

0xcbaa,	// (0x0005a074) popup_blid_sat_info2_window_t8

0xcbb8,	// (0x0005a082) popup_blid_sat_info2_window_t9

0xcbc6,	// (0x0005a090) popup_blid_sat_info2_window_t10

0xcc88,	// (0x0005a152) aid_firma_cardinal_ParamLimits

0xcc9c,	// (0x0005a166) blid_firmament_pane_t1_ParamLimits

0xccb3,	// (0x0005a17d) blid_firmament_pane_t2_ParamLimits

0xccca,	// (0x0005a194) blid_firmament_pane_t3_ParamLimits

0xcce1,	// (0x0005a1ab) blid_firmament_pane_t4_ParamLimits

0xf6b8,	// (0x0005cb82) blid_firmament_pane_t_ParamLimits

0xccf8,	// (0x0005a1c2) blid_sat_info_pane_ParamLimits

0xa757,	// (0x00057c21) main_cam_set_pane_ParamLimits

0x5a45,	// (0x00052f0f) aid_size_cell_colour_35_ParamLimits

0x5a65,	// (0x00052f2f) aid_size_cell_colour_112_ParamLimits

0x5a85,	// (0x00052f4f) aid_size_cell_effect_ParamLimits

0xc900,	// (0x00059dca) bg_tb_trans_pane_cp02_ParamLimits

0xaf23,	// (0x000583ed) heading_imed_pane_ParamLimits

0x5aa5,	// (0x00052f6f) listscroll_imed_pane_ParamLimits

0xbf1a,	// (0x000593e4) popup_call2_audio_first_window_g5_ParamLimits

0xbf1a,	// (0x000593e4) popup_call2_audio_first_window_g5

0x6038,	// (0x00053502) aid_size_touch_image3_arrow_left_ParamLimits

0x6038,	// (0x00053502) aid_size_touch_image3_arrow_left

0x6064,	// (0x0005352e) aid_size_touch_image3_arrow_right_ParamLimits

0x6064,	// (0x0005352e) aid_size_touch_image3_arrow_right

0xa609,	// (0x00057ad3) vid4_progress_pane_t3

0x5db8,	// (0x00053282) main_hwr_training_symbol_option_pane_ParamLimits

0x5db8,	// (0x00053282) main_hwr_training_symbol_option_pane

0xd53b,	// (0x0005aa05) popup_hwr_training_preview_window_ParamLimits

0xd53b,	// (0x0005aa05) popup_hwr_training_preview_window

0x5dd8,	// (0x000532a2) hwr_training_navi_pane_g5_ParamLimits

0x5dd8,	// (0x000532a2) hwr_training_navi_pane_g5

0xd6cd,	// (0x0005ab97) popup_char_count_window

0xa757,	// (0x00057c21) bg_popup_sub_pane_cp20_ParamLimits

0x7046,	// (0x00054510) list_vitu2_match_list_pane_ParamLimits

0x7055,	// (0x0005451f) vitu2_page_scroll_pane_ParamLimits

0x7055,	// (0x0005451f) vitu2_page_scroll_pane

0xdba2,	// (0x0005b06c) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdba2,	// (0x0005b06c) list_single_hwr_training_symbol_option_pane

0xdbb5,	// (0x0005b07f) list_single_hwr_training_symbol_option_pane_g1

0xdbbd,	// (0x0005b087) list_single_hwr_training_symbol_option_pane_t1

0xdbcb,	// (0x0005b095) bg_button_pane_cp023

0xdbd4,	// (0x0005b09e) bg_button_pane_cp024

0x7624,	// (0x00054aee) vitu2_page_scroll_pane_g1

0x762c,	// (0x00054af6) vitu2_page_scroll_pane_g2

0x0001,

0xfab5,	// (0x0005cf7f) vitu2_page_scroll_pane_g

0x7634,	// (0x00054afe) vitu2_page_scroll_pane_t1

0xca5b,	// (0x00059f25) popup_char_count_window_g1

0xdc07,	// (0x0005b0d1) popup_char_count_window_g2

0xdc10,	// (0x0005b0da) popup_char_count_window_g3

0x0002,

0xfaba,	// (0x0005cf84) popup_char_count_window_g

0xdc19,	// (0x0005b0e3) popup_char_count_window_t1

0x9878,	// (0x00056d42) main_vded2_pane

0xd23a,	// (0x0005a704) aid_size_cell_imed_line

0xd244,	// (0x0005a70e) grid_imed_line_width_pane

0xa511,	// (0x000579db) vid4_indicators_pane_g4

0xdc27,	// (0x0005b0f1) cell_imed_line_width_pane_ParamLimits

0xdc27,	// (0x0005b0f1) cell_imed_line_width_pane

0xdc3b,	// (0x0005b105) cell_imed_line_width_pane_g1

0xdc44,	// (0x0005b10e) cell_imed_line_width_pane_g2

0x0001,

0xfac1,	// (0x0005cf8b) cell_imed_line_width_pane_g

0x7643,	// (0x00054b0d) main_vded2_pane_g1_ParamLimits

0x7643,	// (0x00054b0d) main_vded2_pane_g1

0x7659,	// (0x00054b23) main_vded2_pane_g2_ParamLimits

0x7659,	// (0x00054b23) main_vded2_pane_g2

0x0001,

0xfac6,	// (0x0005cf90) main_vded2_pane_g_ParamLimits

0xfac6,	// (0x0005cf90) main_vded2_pane_g

0x766b,	// (0x00054b35) vded2_slider_pane_ParamLimits

0x766b,	// (0x00054b35) vded2_slider_pane

0x767b,	// (0x00054b45) aid_size_touch_vded2_end

0x7685,	// (0x00054b4f) aid_size_touch_vded2_playhead

0xdc4c,	// (0x0005b116) aid_size_touch_vded2_start

0xdc54,	// (0x0005b11e) vded2_slider_bg_pane

0xdc5d,	// (0x0005b127) vded2_slider_pane_g1

0xdc66,	// (0x0005b130) vded2_slider_pane_g2

0x768f,	// (0x00054b59) vded2_slider_pane_g3

0x0002,

0xfacb,	// (0x0005cf95) vded2_slider_pane_g

0xdc6e,	// (0x0005b138) vded2_slider_bg_pane_g1

0xdc77,	// (0x0005b141) vded2_slider_bg_pane_g2

0xdc80,	// (0x0005b14a) vded2_slider_bg_pane_g3

0x0002,

0xfad2,	// (0x0005cf9c) vded2_slider_bg_pane_g

0x3794,	// (0x00050c5e) aid_postcard_touch_down_pane_ParamLimits

0x3794,	// (0x00050c5e) aid_postcard_touch_down_pane

0x37aa,	// (0x00050c74) aid_postcard_touch_up_pane_ParamLimits

0x37aa,	// (0x00050c74) aid_postcard_touch_up_pane

0x9878,	// (0x00056d42) main_blid2_pane

0xa051,	// (0x0005751b) popup_blid2_search_window

0x9878,	// (0x00056d42) blid2_gps_pane

0x9878,	// (0x00056d42) blid2_navig_pane

0x9878,	// (0x00056d42) blid2_search_pane

0x9878,	// (0x00056d42) blid2_tripm_pane

0x769a,	// (0x00054b64) blid2_search_pane_g1_ParamLimits

0x769a,	// (0x00054b64) blid2_search_pane_g1

0x76b4,	// (0x00054b7e) blid2_search_pane_t1_ParamLimits

0x76b4,	// (0x00054b7e) blid2_search_pane_t1

0x76c6,	// (0x00054b90) aid_size_cell_blid2_gps_ParamLimits

0x76c6,	// (0x00054b90) aid_size_cell_blid2_gps

0x76de,	// (0x00054ba8) blid2_gps_pane_g1_ParamLimits

0x76de,	// (0x00054ba8) blid2_gps_pane_g1

0x76f2,	// (0x00054bbc) grid_blid2_satellite_pane_ParamLimits

0x76f2,	// (0x00054bbc) grid_blid2_satellite_pane

0x770c,	// (0x00054bd6) blid2_navig_pane_g1_ParamLimits

0x770c,	// (0x00054bd6) blid2_navig_pane_g1

0x7718,	// (0x00054be2) blid2_navig_pane_t1_ParamLimits

0x7718,	// (0x00054be2) blid2_navig_pane_t1

0x7733,	// (0x00054bfd) blid2_navig_pane_t2_ParamLimits

0x7733,	// (0x00054bfd) blid2_navig_pane_t2

0x0001,

0xfad9,	// (0x0005cfa3) blid2_navig_pane_t_ParamLimits

0xfad9,	// (0x0005cfa3) blid2_navig_pane_t

0x774e,	// (0x00054c18) blid2_navig_ring_pane_ParamLimits

0x774e,	// (0x00054c18) blid2_navig_ring_pane

0x7767,	// (0x00054c31) blid2_speed_pane_ParamLimits

0x7767,	// (0x00054c31) blid2_speed_pane

0x7773,	// (0x00054c3d) blid2_tripm_pane_g1_ParamLimits

0x7773,	// (0x00054c3d) blid2_tripm_pane_g1

0x778c,	// (0x00054c56) blid2_tripm_pane_g2_ParamLimits

0x778c,	// (0x00054c56) blid2_tripm_pane_g2

0x77a0,	// (0x00054c6a) blid2_tripm_pane_g3_ParamLimits

0x77a0,	// (0x00054c6a) blid2_tripm_pane_g3

0x77b4,	// (0x00054c7e) blid2_tripm_pane_g4_ParamLimits

0x77b4,	// (0x00054c7e) blid2_tripm_pane_g4

0x77c8,	// (0x00054c92) blid2_tripm_pane_g5_ParamLimits

0x77c8,	// (0x00054c92) blid2_tripm_pane_g5

0x0005,

0xfade,	// (0x0005cfa8) blid2_tripm_pane_g_ParamLimits

0xfade,	// (0x0005cfa8) blid2_tripm_pane_g

0x77ee,	// (0x00054cb8) blid2_tripm_pane_t1_ParamLimits

0x77ee,	// (0x00054cb8) blid2_tripm_pane_t1

0x7809,	// (0x00054cd3) blid2_tripm_pane_t2_ParamLimits

0x7809,	// (0x00054cd3) blid2_tripm_pane_t2

0x7822,	// (0x00054cec) blid2_tripm_pane_t3_ParamLimits

0x7822,	// (0x00054cec) blid2_tripm_pane_t3

0x0003,

0xfaeb,	// (0x0005cfb5) blid2_tripm_pane_t_ParamLimits

0xfaeb,	// (0x0005cfb5) blid2_tripm_pane_t

0x7869,	// (0x00054d33) cell_blid2_satellite_pane_ParamLimits

0x7869,	// (0x00054d33) cell_blid2_satellite_pane

0x7887,	// (0x00054d51) cell_blid2_satellite_pane_g1

0xdc89,	// (0x0005b153) cell_blid2_satellite_pane_t1

0xcd08,	// (0x0005a1d2) blid2_speed_pane_g1

0xdc97,	// (0x0005b161) blid2_speed_pane_t1

0xdca5,	// (0x0005b16f) blid2_speed_pane_t2

0x0001,

0xfaf4,	// (0x0005cfbe) blid2_speed_pane_t

0xcd08,	// (0x0005a1d2) blid2_navig_ring_pane_g1

0x7890,	// (0x00054d5a) blid2_navig_ring_pane_g2

0x7898,	// (0x00054d62) blid2_navig_ring_pane_g3

0x78a0,	// (0x00054d6a) blid2_navig_ring_pane_g4

0x78a8,	// (0x00054d72) blid2_navig_ring_pane_g5

0x0004,

0xfaf9,	// (0x0005cfc3) blid2_navig_ring_pane_g

0x9878,	// (0x00056d42) bg_popup_window_pane_cp011

0xdcb3,	// (0x0005b17d) popup_blid2_search_window_g1

0xdcbb,	// (0x0005b185) popup_blid2_search_window_t1

0xdcc9,	// (0x0005b193) popup_blid2_search_window_t2

0x0001,

0xfb04,	// (0x0005cfce) popup_blid2_search_window_t

0xabca,	// (0x00058094) main_browser_pane_g1

0xa8b4,	// (0x00057d7e) main_browser_pane_ParamLimits

0xa757,	// (0x00057c21) bg_button_pane_cp011_ParamLimits

0x68ca,	// (0x00053d94) cell_vitu2_function_pane_g1_ParamLimits

0xc900,	// (0x00059dca) bg_popup_sub_pane_cp22_ParamLimits

0x04b2,	// (0x0004d97c) input_focus_pane_cp08_ParamLimits

0x71d8,	// (0x000546a2) popup_vitu2_query_button_pane_ParamLimits

0x71d8,	// (0x000546a2) popup_vitu2_query_button_pane

0x04c9,	// (0x0004d993) popup_vitu2_query_input_button_pane

0xd959,	// (0x0005ae23) popup_vitu2_query_window_g1_ParamLimits

0x04d3,	// (0x0004d99d) popup_vitu2_query_window_g2_ParamLimits

0xfa05,	// (0x0005cecf) popup_vitu2_query_window_g_ParamLimits

0x9878,	// (0x00056d42) bg_button_pane_cp026

0x78b0,	// (0x00054d7a) popup_vitu2_query_input_button_pane_g1

0x9878,	// (0x00056d42) bg_button_pane_cp025

0xdcd7,	// (0x0005b1a1) popup_vitu2_query_button_pane_t1

0x4e2a,	// (0x000522f4) main_mp3_pane_t6

0x4e38,	// (0x00052302) popup_slider_window_cp01

0xa475,	// (0x0005793f) cam4_battery_pane

0xa4ce,	// (0x00057998) cam4_battery_pane_cp02

0xa5b4,	// (0x00057a7e) cam4_battery_pane_cp01

0xa5b4,	// (0x00057a7e) cam4_battery_pane_cp03

0xcd08,	// (0x0005a1d2) cam4_battery_pane_g1

0xdce5,	// (0x0005b1af) cam4_battery_pane_g2

0x0001,

0xfb09,	// (0x0005cfd3) cam4_battery_pane_g

0xcbd4,	// (0x0005a09e) popup_blid_sat_info2_window_t11

0xb331,	// (0x000587fb) aid_size_touch_mv_arrow_left_ParamLimits

0xb35a,	// (0x00058824) aid_size_touch_mv_arrow_right_ParamLimits

0xb3b8,	// (0x00058882) navi_pane_g1_ParamLimits

0xb3c4,	// (0x0005888e) navi_pane_g2_ParamLimits

0xb3f2,	// (0x000588bc) navi_pane_g3_ParamLimits

0xf3ca,	// (0x0005c894) navi_pane_g_ParamLimits

0x324c,	// (0x00050716) navi_pane_mv_t1_ParamLimits

0x5ab1,	// (0x00052f7b) grid_imed_effect_pane_ParamLimits

0x1fa9,	// (0x0004f473) aid_placing_vt_slider_lsc

0xab19,	// (0x00057fe3) aid_placing_vt_slider_prt

0xa757,	// (0x00057c21) bg_tb_trans_pane_cp01_ParamLimits

0xce8b,	// (0x0005a355) popup_image_details_window_g1_ParamLimits

0xce9e,	// (0x0005a368) popup_image_details_window_g2_ParamLimits

0xceb3,	// (0x0005a37d) popup_image_details_window_g3_ParamLimits

0xceb3,	// (0x0005a37d) popup_image_details_window_g3

0xf6fd,	// (0x0005cbc7) popup_image_details_window_g_ParamLimits

0xcec7,	// (0x0005a391) popup_image_details_window_t1_ParamLimits

0xced9,	// (0x0005a3a3) popup_image_details_window_t2_ParamLimits

0xcef2,	// (0x0005a3bc) popup_image_details_window_t3_ParamLimits

0xcf06,	// (0x0005a3d0) popup_image_details_window_t4_ParamLimits

0xcf21,	// (0x0005a3eb) popup_image_details_window_t5_ParamLimits

0xf704,	// (0x0005cbce) popup_image_details_window_t_ParamLimits

0x74ba,	// (0x00054984) cl_header_name_pane_ParamLimits

0x74ba,	// (0x00054984) cl_header_name_pane

0x78b8,	// (0x00054d82) cl_header_name_pane_t1_ParamLimits

0x78b8,	// (0x00054d82) cl_header_name_pane_t1

0x78d9,	// (0x00054da3) cl_header_name_pane_t2_ParamLimits

0x78d9,	// (0x00054da3) cl_header_name_pane_t2

0x791b,	// (0x00054de5) cl_header_name_pane_t3_ParamLimits

0x791b,	// (0x00054de5) cl_header_name_pane_t3

0x0002,

0xfb0e,	// (0x0005cfd8) cl_header_name_pane_t_ParamLimits

0xfb0e,	// (0x0005cfd8) cl_header_name_pane_t

0xb481,	// (0x0005894b) navi_pane_mv_g2_ParamLimits

0xd6a7,	// (0x0005ab71) field_vitu2_entry_pane_g1_ParamLimits

0xd6b3,	// (0x0005ab7d) field_vitu2_entry_pane_g2_ParamLimits

0xd6bf,	// (0x0005ab89) field_vitu2_entry_pane_g3_ParamLimits

0xd6bf,	// (0x0005ab89) field_vitu2_entry_pane_g3

0xf904,	// (0x0005cdce) field_vitu2_entry_pane_g_ParamLimits

0xa546,	// (0x00057a10) cell_vitu2_itu_pane_g1_ParamLimits

0x685e,	// (0x00053d28) cell_vitu2_itu_pane_g2_ParamLimits

0x685e,	// (0x00053d28) cell_vitu2_itu_pane_g2

0x0001,

0xf910,	// (0x0005cdda) cell_vitu2_itu_pane_g_ParamLimits

0xf910,	// (0x0005cdda) cell_vitu2_itu_pane_g

0xa757,	// (0x00057c21) bg_vkb2_func_pane_cp05_ParamLimits

0xa757,	// (0x00057c21) bg_vkb2_func_pane_cp05

0xa757,	// (0x00057c21) bg_vkb2_func_pane_cp03

0xa757,	// (0x00057c21) bg_vkb2_func_pane_cp04

0xa757,	// (0x00057c21) bg_vkb2_func_pane_cp10_ParamLimits

0xa757,	// (0x00057c21) bg_vkb2_func_pane_cp10

0x05f0,	// (0x0004daba) bg_vkb2_func_pane_cp08

0x7464,	// (0x0005492e) bg_vkb2_func_pane_cp06

0x7472,	// (0x0005493c) bg_vkb2_func_pane_cp07

0xdbdd,	// (0x0005b0a7) bg_vkb2_func_pane_cp11_ParamLimits

0xdbdd,	// (0x0005b0a7) bg_vkb2_func_pane_cp11

0xdbf2,	// (0x0005b0bc) bg_vkb2_func_pane_cp12_ParamLimits

0xdbf2,	// (0x0005b0bc) bg_vkb2_func_pane_cp12

0x9878,	// (0x00056d42) bg_vkb2_func_pane_cp09

0xd6df,	// (0x0005aba9) bg_vkb2_func_pane_g1

0xacdb,	// (0x000581a5) bg_vkb2_func_pane_g2

0xd6e7,	// (0x0005abb1) bg_vkb2_func_pane_g3

0xd6ef,	// (0x0005abb9) bg_vkb2_func_pane_g4

0xd91e,	// (0x0005ade8) bg_vkb2_func_pane_g5

0xd707,	// (0x0005abd1) bg_vkb2_func_pane_g6

0xd70f,	// (0x0005abd9) bg_vkb2_func_pane_g7

0xd6ff,	// (0x0005abc9) bg_vkb2_func_pane_g8

0xacbb,	// (0x00058185) bg_vkb2_func_pane_g9

0x0008,

0xfb15,	// (0x0005cfdf) bg_vkb2_func_pane_g

0x77dc,	// (0x00054ca6) blid2_tripm_pane_g6_ParamLimits

0x77dc,	// (0x00054ca6) blid2_tripm_pane_g6

0xd5f9,	// (0x0005aac3) mp4_progress_pane_g1

0x7855,	// (0x00054d1f) blid2_tripm_values_pane_ParamLimits

0x7855,	// (0x00054d1f) blid2_tripm_values_pane

0x794c,	// (0x00054e16) blid2_tripm_values_pane_t1

0x795a,	// (0x00054e24) blid2_tripm_values_pane_t2

0x7968,	// (0x00054e32) blid2_tripm_values_pane_t3

0x7976,	// (0x00054e40) blid2_tripm_values_pane_t4

0x7984,	// (0x00054e4e) blid2_tripm_values_pane_t5

0x7992,	// (0x00054e5c) blid2_tripm_values_pane_t6

0x79a0,	// (0x00054e6a) blid2_tripm_values_pane_t7

0x79ae,	// (0x00054e78) blid2_tripm_values_pane_t8

0x79bc,	// (0x00054e86) blid2_tripm_values_pane_t9

0x0008,

0xfb28,	// (0x0005cff2) blid2_tripm_values_pane_t

0x1feb,	// (0x0004f4b5) call_video_pane_t1_ParamLimits

0x2009,	// (0x0004f4d3) call_video_pane_t2_ParamLimits

0xf253,	// (0x0005c71d) call_video_pane_t_ParamLimits

0x02a9,	// (0x0004d773) msg_header_pane_g1_ParamLimits

0xb677,	// (0x00058b41) msg_header_pane_g2_ParamLimits

0xb677,	// (0x00058b41) msg_header_pane_g2

0x0001,

0xf46d,	// (0x0005c937) msg_header_pane_g_ParamLimits

0xf46d,	// (0x0005c937) msg_header_pane_g

0xa8b4,	// (0x00057d7e) main_clock2_pane_ParamLimits

0x57b2,	// (0x00052c7c) grid_clock2_toolbar_pane_ParamLimits

0x57b2,	// (0x00052c7c) grid_clock2_toolbar_pane

0x57b2,	// (0x00052c7c) listscroll_clock2_pane_ParamLimits

0x57b2,	// (0x00052c7c) listscroll_clock2_pane

0x5896,	// (0x00052d60) main_clock2_pane_t3_ParamLimits

0x5896,	// (0x00052d60) main_clock2_pane_t3

0x58ba,	// (0x00052d84) main_clock2_pane_t4_ParamLimits

0x58ba,	// (0x00052d84) main_clock2_pane_t4

0xdcef,	// (0x0005b1b9) cell_clock2_toolbar_pane

0xdcf7,	// (0x0005b1c1) cell_clock2_toolbar_pane_cp01

0xdcf7,	// (0x0005b1c1) cell_clock2_toolbar_pane_cp02

0xdcff,	// (0x0005b1c9) cell_clock2_toolbar_pane_cp03

0xdd07,	// (0x0005b1d1) list_clock2_pane

0xb2a7,	// (0x00058771) scroll_pane_cp10

0xdd0f,	// (0x0005b1d9) list_single_clock2_pane_ParamLimits

0xdd0f,	// (0x0005b1d9) list_single_clock2_pane

0xaa82,	// (0x00057f4c) list_highlight_pane_cp08

0xdd1c,	// (0x0005b1e6) list_single_clock2_pane_t1

0xdd2a,	// (0x0005b1f4) list_single_clock2_pane_t2

0x0001,

0xfb3b,	// (0x0005d005) list_single_clock2_pane_t

0x9878,	// (0x00056d42) bg_button_pane_cp10

0xdd38,	// (0x0005b202) cell_clock2_toolbar_pane_g1

0x3720,	// (0x00050bea) aid_main_viewer_pane_g1_ParamLimits

0x3720,	// (0x00050bea) aid_main_viewer_pane_g1

0x372e,	// (0x00050bf8) aid_main_viewer_pane_g2_ParamLimits

0x372e,	// (0x00050bf8) aid_main_viewer_pane_g2

0x373c,	// (0x00050c06) aid_main_viewer_pane_g3_ParamLimits

0x373c,	// (0x00050c06) aid_main_viewer_pane_g3

0x374b,	// (0x00050c15) aid_main_viewer_pane_g4_ParamLimits

0x374b,	// (0x00050c15) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x0005c948) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x0005c948) aid_main_viewer_pane_g

0x4051,	// (0x0005151b) main_calc_pane_ParamLimits

0x4065,	// (0x0005152f) main_dialer2_pane_ParamLimits

0x9878,	// (0x00056d42) main_cam6_pane

0x9878,	// (0x00056d42) main_vid6_pane

0x57be,	// (0x00052c88) listscroll_gen_pane_cp06_ParamLimits

0x57be,	// (0x00052c88) listscroll_gen_pane_cp06

0x58dd,	// (0x00052da7) main_clock2_pane_t5_ParamLimits

0x58dd,	// (0x00052da7) main_clock2_pane_t5

0x593b,	// (0x00052e05) aid_call2_pane_cp10_ParamLimits

0x594d,	// (0x00052e17) aid_call_pane_cp10_ParamLimits

0xb325,	// (0x000587ef) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb325,	// (0x000587ef) popup_clock_analogue_window_cp10_g2_ParamLimits

0x595f,	// (0x00052e29) popup_clock_analogue_window_cp10_g3_ParamLimits

0x595f,	// (0x00052e29) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb325,	// (0x000587ef) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7b9,	// (0x0005cc83) popup_clock_analogue_window_cp10_g_ParamLimits

0x5975,	// (0x00052e3f) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5fe5,	// (0x000534af) cell_dialer2_keypad_pane_g2_ParamLimits

0x5fe5,	// (0x000534af) cell_dialer2_keypad_pane_g2

0x0001,

0xf8a3,	// (0x0005cd6d) cell_dialer2_keypad_pane_g_ParamLimits

0xf8a3,	// (0x0005cd6d) cell_dialer2_keypad_pane_g

0x6001,	// (0x000534cb) cell_dialer2_keypad_pane_t1

0x6be7,	// (0x000540b1) main_cset_text2_pane_ParamLimits

0x6be7,	// (0x000540b1) main_cset_text2_pane

0xdb45,	// (0x0005b00f) area_vitu2_query_pane_g1_ParamLimits

0x05b7,	// (0x0004da81) area_vitu2_query_pane_g2_ParamLimits

0xfa58,	// (0x0005cf22) area_vitu2_query_pane_g_ParamLimits

0x7440,	// (0x0005490a) area_vitu2_query_pane_t7_ParamLimits

0x7440,	// (0x0005490a) area_vitu2_query_pane_t7

0x7464,	// (0x0005492e) bg_button_pane_cp018_ParamLimits

0x7472,	// (0x0005493c) bg_button_pane_cp021_ParamLimits

0x05f0,	// (0x0004daba) bg_button_pane_cp022_ParamLimits

0x05f0,	// (0x0004daba) bg_vkb2_func_pane_cp08_ParamLimits

0x7464,	// (0x0005492e) bg_vkb2_func_pane_cp06_ParamLimits

0x7472,	// (0x0005493c) bg_vkb2_func_pane_cp07_ParamLimits

0x05ff,	// (0x0004dac9) input_focus_pane_cp09_ParamLimits

0xa61e,	// (0x00057ae8) cam6_autofocus_pane_ParamLimits

0xa61e,	// (0x00057ae8) cam6_autofocus_pane

0x79ca,	// (0x00054e94) cam6_image_uncrop_pane_ParamLimits

0x79ca,	// (0x00054e94) cam6_image_uncrop_pane

0x79d9,	// (0x00054ea3) cam6_indi_pane_ParamLimits

0x79d9,	// (0x00054ea3) cam6_indi_pane

0x79ef,	// (0x00054eb9) cam6_mode_pane_ParamLimits

0x79ef,	// (0x00054eb9) cam6_mode_pane

0x7a01,	// (0x00054ecb) cam6_timer_pane_ParamLimits

0x7a01,	// (0x00054ecb) cam6_timer_pane

0x7a0d,	// (0x00054ed7) cam6_zoom_pane_ParamLimits

0x7a0d,	// (0x00054ed7) cam6_zoom_pane

0x7a19,	// (0x00054ee3) cam6_mode_pane_g1_ParamLimits

0x7a19,	// (0x00054ee3) cam6_mode_pane_g1

0x7a29,	// (0x00054ef3) cam6_mode_pane_g2_ParamLimits

0x7a29,	// (0x00054ef3) cam6_mode_pane_g2

0x7a39,	// (0x00054f03) cam6_mode_pane_g3_ParamLimits

0x7a39,	// (0x00054f03) cam6_mode_pane_g3

0x7a49,	// (0x00054f13) cam6_mode_pane_g4_ParamLimits

0x7a49,	// (0x00054f13) cam6_mode_pane_g4

0x0003,

0xfb40,	// (0x0005d00a) cam6_mode_pane_g_ParamLimits

0xfb40,	// (0x0005d00a) cam6_mode_pane_g

0xdd40,	// (0x0005b20a) bg_tb_trans_pane_cp08_ParamLimits

0xdd40,	// (0x0005b20a) bg_tb_trans_pane_cp08

0xdd4e,	// (0x0005b218) cam6_battery_pane_ParamLimits

0xdd4e,	// (0x0005b218) cam6_battery_pane

0xdd64,	// (0x0005b22e) cam6_indi_pane_g1_ParamLimits

0xdd64,	// (0x0005b22e) cam6_indi_pane_g1

0xdd76,	// (0x0005b240) cam6_indi_pane_g2_ParamLimits

0xdd76,	// (0x0005b240) cam6_indi_pane_g2

0xdd88,	// (0x0005b252) cam6_indi_pane_g3_ParamLimits

0xdd88,	// (0x0005b252) cam6_indi_pane_g3

0x0002,

0xfb49,	// (0x0005d013) cam6_indi_pane_g_ParamLimits

0xfb49,	// (0x0005d013) cam6_indi_pane_g

0xdd9a,	// (0x0005b264) cam6_indi_pane_t1_ParamLimits

0xdd9a,	// (0x0005b264) cam6_indi_pane_t1

0x7a59,	// (0x00054f23) cam6_autofocus_pane_g1

0x7a61,	// (0x00054f2b) cam6_autofocus_pane_g2

0x7a69,	// (0x00054f33) cam6_autofocus_pane_g3

0x7a71,	// (0x00054f3b) cam6_autofocus_pane_g4

0x0003,

0xfb50,	// (0x0005d01a) cam6_autofocus_pane_g

0xddc0,	// (0x0005b28a) cam6_timer_pane_g1

0xddc8,	// (0x0005b292) cam6_timer_pane_t1

0xddd6,	// (0x0005b2a0) cam6_zoom_cont_pane

0xddde,	// (0x0005b2a8) cam6_zoom_pane_g1

0xdde6,	// (0x0005b2b0) cam6_zoom_pane_g2

0x7a79,	// (0x00054f43) cam6_zoom_pane_g3

0x0002,

0xfb59,	// (0x0005d023) cam6_zoom_pane_g

0xcd08,	// (0x0005a1d2) cam6_battery_pane_g1

0xcd08,	// (0x0005a1d2) cam6_battery_pane_g2

0x0001,

0xf6c1,	// (0x0005cb8b) cam6_battery_pane_g

0xddee,	// (0x0005b2b8) cam6_zoom_cont_pane_g1

0xddf7,	// (0x0005b2c1) cam6_zoom_cont_pane_g2

0xde00,	// (0x0005b2ca) cam6_zoom_cont_pane_g3

0x0002,

0xfb60,	// (0x0005d02a) cam6_zoom_cont_pane_g

0x7a96,	// (0x00054f60) cam6_mode_pane_cp_ParamLimits

0x7a96,	// (0x00054f60) cam6_mode_pane_cp

0x7a0d,	// (0x00054ed7) cam6_zoom_pane_cp_ParamLimits

0x7a0d,	// (0x00054ed7) cam6_zoom_pane_cp

0x7aa8,	// (0x00054f72) vid6_image_uncrop_cif_pane_ParamLimits

0x7aa8,	// (0x00054f72) vid6_image_uncrop_cif_pane

0x7ab8,	// (0x00054f82) vid6_image_uncrop_nhd_pane_ParamLimits

0x7ab8,	// (0x00054f82) vid6_image_uncrop_nhd_pane

0x79ca,	// (0x00054e94) vid6_image_uncrop_vga_pane_ParamLimits

0x79ca,	// (0x00054e94) vid6_image_uncrop_vga_pane

0x7ac7,	// (0x00054f91) vid6_image_uncrop_wvga_pane_ParamLimits

0x7ac7,	// (0x00054f91) vid6_image_uncrop_wvga_pane

0x7ad6,	// (0x00054fa0) vid6_indi_pane_ParamLimits

0x7ad6,	// (0x00054fa0) vid6_indi_pane

0xdd40,	// (0x0005b20a) bg_tb_trans_pane_cp09_ParamLimits

0xdd40,	// (0x0005b20a) bg_tb_trans_pane_cp09

0xde18,	// (0x0005b2e2) cam6_battery_pane_cp_ParamLimits

0xde18,	// (0x0005b2e2) cam6_battery_pane_cp

0xde24,	// (0x0005b2ee) vid6_indi_pane_g1_ParamLimits

0xde24,	// (0x0005b2ee) vid6_indi_pane_g1

0xde36,	// (0x0005b300) vid6_indi_pane_g2_ParamLimits

0xde36,	// (0x0005b300) vid6_indi_pane_g2

0xde48,	// (0x0005b312) vid6_indi_pane_g3_ParamLimits

0xde48,	// (0x0005b312) vid6_indi_pane_g3

0xde5d,	// (0x0005b327) vid6_indi_pane_g4_ParamLimits

0xde5d,	// (0x0005b327) vid6_indi_pane_g4

0xde72,	// (0x0005b33c) vid6_indi_pane_g5_ParamLimits

0xde72,	// (0x0005b33c) vid6_indi_pane_g5

0x0004,

0xfb67,	// (0x0005d031) vid6_indi_pane_g_ParamLimits

0xfb67,	// (0x0005d031) vid6_indi_pane_g

0xde8c,	// (0x0005b356) vid6_indi_pane_t1_ParamLimits

0xde8c,	// (0x0005b356) vid6_indi_pane_t1

0xdea2,	// (0x0005b36c) vid6_indi_pane_t2_ParamLimits

0xdea2,	// (0x0005b36c) vid6_indi_pane_t2

0xdeca,	// (0x0005b394) vid6_indi_pane_t3_ParamLimits

0xdeca,	// (0x0005b394) vid6_indi_pane_t3

0xdef2,	// (0x0005b3bc) vid6_indi_pane_t4_ParamLimits

0xdef2,	// (0x0005b3bc) vid6_indi_pane_t4

0x0003,

0xfb72,	// (0x0005d03c) vid6_indi_pane_t_ParamLimits

0xfb72,	// (0x0005d03c) vid6_indi_pane_t

0xdf16,	// (0x0005b3e0) wait_bar_pane_cp08

0x7aee,	// (0x00054fb8) main_cset_text2_pane_t1_ParamLimits

0x7aee,	// (0x00054fb8) main_cset_text2_pane_t1

0x7a81,	// (0x00054f4b) listscroll_gen_pane_cp06_t1_ParamLimits

0x7a81,	// (0x00054f4b) listscroll_gen_pane_cp06_t1

0x9878,	// (0x00056d42) main_cam6_set_pane

0xcf6b,	// (0x0005a435) bg_tb_trans_pane_cp06_ParamLimits

0xa47d,	// (0x00057947) cam4_indicators_pane_g1_ParamLimits

0xa48e,	// (0x00057958) cam4_indicators_pane_g2_ParamLimits

0xf8e0,	// (0x0005cdaa) cam4_indicators_pane_g_ParamLimits

0xa4ac,	// (0x00057976) cam4_indicators_pane_t1_ParamLimits

0xa757,	// (0x00057c21) bg_tb_trans_pane_cp07_ParamLimits

0xa4d8,	// (0x000579a2) vid4_indicators_pane_g1_ParamLimits

0xa4ec,	// (0x000579b6) vid4_indicators_pane_g2_ParamLimits

0xa500,	// (0x000579ca) vid4_indicators_pane_g3_ParamLimits

0xa511,	// (0x000579db) vid4_indicators_pane_g4_ParamLimits

0xf8f2,	// (0x0005cdbc) vid4_indicators_pane_g_ParamLimits

0xa52f,	// (0x000579f9) vid4_indicators_pane_t1_ParamLimits

0xa5bc,	// (0x00057a86) vid4_progress_pane_g1_ParamLimits

0xa5cc,	// (0x00057a96) vid4_progress_pane_g2_ParamLimits

0x75aa,	// (0x00054a74) vid4_progress_pane_g3_ParamLimits

0xa5dc,	// (0x00057aa6) vid4_progress_pane_g4_ParamLimits

0xfaa3,	// (0x0005cf6d) vid4_progress_pane_g_ParamLimits

0x75bc,	// (0x00054a86) vid4_progress_pane_t1_ParamLimits

0xa5f4,	// (0x00057abe) vid4_progress_pane_t2_ParamLimits

0xa609,	// (0x00057ad3) vid4_progress_pane_t3_ParamLimits

0xfaae,	// (0x0005cf78) vid4_progress_pane_t_ParamLimits

0x75d4,	// (0x00054a9e) wait_bar_pane_cp07_ParamLimits

0x7b0b,	// (0x00054fd5) main_cam6_set_pane_g2_ParamLimits

0x7b0b,	// (0x00054fd5) main_cam6_set_pane_g2

0x7b2f,	// (0x00054ff9) main_cset6_listscroll_pane_ParamLimits

0x7b2f,	// (0x00054ff9) main_cset6_listscroll_pane

0x7b4f,	// (0x00055019) main_cset6_slider_pane_ParamLimits

0x7b4f,	// (0x00055019) main_cset6_slider_pane

0x7b65,	// (0x0005502f) main_cset6_text2_pane_ParamLimits

0x7b65,	// (0x0005502f) main_cset6_text2_pane

0xdf25,	// (0x0005b3ef) main_cset6_text_pane

0xdf2d,	// (0x0005b3f7) main_cset_list_pane_copy1_ParamLimits

0xdf2d,	// (0x0005b3f7) main_cset_list_pane_copy1

0xdf3d,	// (0x0005b407) scroll_pane_cp028_copy1

0x7b73,	// (0x0005503d) cset_list_set_pane_copy1

0x7b84,	// (0x0005504e) aid_position_infowindow_above_copy1

0x7b8c,	// (0x00055056) aid_position_infowindow_below_copy1

0x0622,	// (0x0004daec) cset_list_set_pane_g1_copy1

0x062a,	// (0x0004daf4) cset_list_set_pane_g3_copy1_ParamLimits

0x062a,	// (0x0004daf4) cset_list_set_pane_g3_copy1

0x0639,	// (0x0004db03) cset_list_set_pane_t1_copy1_ParamLimits

0x0639,	// (0x0004db03) cset_list_set_pane_t1_copy1

0xa757,	// (0x00057c21) list_highlight_pane_cp021_copy1_ParamLimits

0xa757,	// (0x00057c21) list_highlight_pane_cp021_copy1

0xdf46,	// (0x0005b410) cset6_slider_pane_ParamLimits

0xdf46,	// (0x0005b410) cset6_slider_pane

0xdf72,	// (0x0005b43c) main_cset6_slider_pane_g1_ParamLimits

0xdf72,	// (0x0005b43c) main_cset6_slider_pane_g1

0x7b94,	// (0x0005505e) main_cset6_slider_pane_g2_ParamLimits

0x7b94,	// (0x0005505e) main_cset6_slider_pane_g2

0xdf9a,	// (0x0005b464) main_cset6_slider_pane_g3_ParamLimits

0xdf9a,	// (0x0005b464) main_cset6_slider_pane_g3

0x7bbc,	// (0x00055086) main_cset6_slider_pane_g4_ParamLimits

0x7bbc,	// (0x00055086) main_cset6_slider_pane_g4

0x7bc8,	// (0x00055092) main_cset6_slider_pane_g5_ParamLimits

0x7bc8,	// (0x00055092) main_cset6_slider_pane_g5

0xd80e,	// (0x0005acd8) main_cset6_slider_pane_g7_ParamLimits

0xd80e,	// (0x0005acd8) main_cset6_slider_pane_g7

0xd81a,	// (0x0005ace4) main_cset6_slider_pane_g8_ParamLimits

0xd81a,	// (0x0005ace4) main_cset6_slider_pane_g8

0x6c94,	// (0x0005415e) main_cset6_slider_pane_g9_ParamLimits

0x6c94,	// (0x0005415e) main_cset6_slider_pane_g9

0x6ca0,	// (0x0005416a) main_cset6_slider_pane_g10_ParamLimits

0x6ca0,	// (0x0005416a) main_cset6_slider_pane_g10

0x6cac,	// (0x00054176) main_cset6_slider_pane_g11_ParamLimits

0x6cac,	// (0x00054176) main_cset6_slider_pane_g11

0x6cb8,	// (0x00054182) main_cset6_slider_pane_g12_ParamLimits

0x6cb8,	// (0x00054182) main_cset6_slider_pane_g12

0x6cc4,	// (0x0005418e) main_cset6_slider_pane_g13_ParamLimits

0x6cc4,	// (0x0005418e) main_cset6_slider_pane_g13

0x6cd0,	// (0x0005419a) main_cset6_slider_pane_g14_ParamLimits

0x6cd0,	// (0x0005419a) main_cset6_slider_pane_g14

0x7bd4,	// (0x0005509e) main_cset6_slider_pane_g15_ParamLimits

0x7bd4,	// (0x0005509e) main_cset6_slider_pane_g15

0x6cf4,	// (0x000541be) main_cset6_slider_pane_g16_ParamLimits

0x6cf4,	// (0x000541be) main_cset6_slider_pane_g16

0x6d00,	// (0x000541ca) main_cset6_slider_pane_g17_ParamLimits

0x6d00,	// (0x000541ca) main_cset6_slider_pane_g17

0x0011,

0xfb7b,	// (0x0005d045) main_cset6_slider_pane_g_ParamLimits

0xfb7b,	// (0x0005d045) main_cset6_slider_pane_g

0xdfa6,	// (0x0005b470) main_cset6_slider_pane_t1_ParamLimits

0xdfa6,	// (0x0005b470) main_cset6_slider_pane_t1

0x7c04,	// (0x000550ce) main_cset6_slider_pane_t2_ParamLimits

0x7c04,	// (0x000550ce) main_cset6_slider_pane_t2

0x7c2f,	// (0x000550f9) main_cset6_slider_pane_t3_ParamLimits

0x7c2f,	// (0x000550f9) main_cset6_slider_pane_t3

0x7c5a,	// (0x00055124) main_cset6_slider_pane_t4_ParamLimits

0x7c5a,	// (0x00055124) main_cset6_slider_pane_t4

0x7c85,	// (0x0005514f) main_cset6_slider_pane_t5_ParamLimits

0x7c85,	// (0x0005514f) main_cset6_slider_pane_t5

0xdfe7,	// (0x0005b4b1) main_cset6_slider_pane_t7_ParamLimits

0xdfe7,	// (0x0005b4b1) main_cset6_slider_pane_t7

0x7cb0,	// (0x0005517a) main_cset6_slider_pane_t8_ParamLimits

0x7cb0,	// (0x0005517a) main_cset6_slider_pane_t8

0x7cd4,	// (0x0005519e) main_cset6_slider_pane_t9_ParamLimits

0x7cd4,	// (0x0005519e) main_cset6_slider_pane_t9

0x7cf8,	// (0x000551c2) main_cset6_slider_pane_t10_ParamLimits

0x7cf8,	// (0x000551c2) main_cset6_slider_pane_t10

0x7d1c,	// (0x000551e6) main_cset6_slider_pane_t11_ParamLimits

0x7d1c,	// (0x000551e6) main_cset6_slider_pane_t11

0xe01d,	// (0x0005b4e7) main_cset6_slider_pane_t14_ParamLimits

0xe01d,	// (0x0005b4e7) main_cset6_slider_pane_t14

0xe056,	// (0x0005b520) main_cset6_slider_pane_t15_ParamLimits

0xe056,	// (0x0005b520) main_cset6_slider_pane_t15

0x000b,

0xfba0,	// (0x0005d06a) main_cset6_slider_pane_t_ParamLimits

0xfba0,	// (0x0005d06a) main_cset6_slider_pane_t

0xd8d2,	// (0x0005ad9c) cset_slider_pane_g1_copy1

0xd8db,	// (0x0005ada5) cset_slider_pane_g2_copy1

0xd8e4,	// (0x0005adae) cset_slider_pane_g3_copy1

0x9878,	// (0x00056d42) bg_popup_sub_pane_cp011_copy1

0xe08f,	// (0x0005b559) main_cset_text_pane_g1_copy1

0xd96d,	// (0x0005ae37) main_cset_text_pane_t1_copy1

0xd97b,	// (0x0005ae45) main_cset_text_pane_t2_copy1

0xd989,	// (0x0005ae53) main_cset_text_pane_t3_copy1

0xd997,	// (0x0005ae61) main_cset_text_pane_t4_copy1

0xd9a5,	// (0x0005ae6f) main_cset_text_pane_t5_copy1

0xe097,	// (0x0005b561) main_cset_text_pane_t6_copy1

0xe0a5,	// (0x0005b56f) main_cset_text_pane_t7_copy1

0x7aee,	// (0x00054fb8) main_cset_text2_pane_t1_copy1

0xa757,	// (0x00057c21) main_ncimui_pane

0x42af,	// (0x00051779) popup_query_ncimui_window_ParamLimits

0x42af,	// (0x00051779) popup_query_ncimui_window

0x4fce,	// (0x00052498) field_cale_ev2_pane_g4_ParamLimits

0x4fce,	// (0x00052498) field_cale_ev2_pane_g4

0x5ec5,	// (0x0005338f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5ec5,	// (0x0005338f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf87a,	// (0x0005cd44) cell_video_dialer_keypad_pane_g_ParamLimits

0xf87a,	// (0x0005cd44) cell_video_dialer_keypad_pane_g

0x5edd,	// (0x000533a7) cell_video_dialer_keypad_pane_t1

0x9878,	// (0x00056d42) bg_popup_window_pane_cp012

0xb174,	// (0x0005863e) heading_pane_cp06

0xe0d1,	// (0x0005b59b) ncim_query_content_pane

0x9878,	// (0x00056d42) bg_popup_heading_pane_cp01

0xe0d9,	// (0x0005b5a3) ncim_heading_pane_t1

0xe0e7,	// (0x0005b5b1) ncim_indicator_popup_pane

0xe0f9,	// (0x0005b5c3) ncim_query_button_pane

0xe10d,	// (0x0005b5d7) ncim_query_content_pane_t1

0xe11f,	// (0x0005b5e9) ncim_query_content_pane_t2

0x0005,

0xfbe4,	// (0x0005d0ae) ncim_query_content_pane_t

0xe159,	// (0x0005b623) ncim_query_list_pane

0xe194,	// (0x0005b65e) ncim_query_popup_pane

0xe0e7,	// (0x0005b5b1) ncim_indicator_popup_pane_ParamLimits

0x7e69,	// (0x00055333) ncim_query_content_pane_g1_ParamLimits

0x7e69,	// (0x00055333) ncim_query_content_pane_g1

0xe10d,	// (0x0005b5d7) ncim_query_content_pane_t1_ParamLimits

0xe11f,	// (0x0005b5e9) ncim_query_content_pane_t2_ParamLimits

0x7e75,	// (0x0005533f) ncim_query_content_pane_t3_ParamLimits

0x7e75,	// (0x0005533f) ncim_query_content_pane_t3

0x7e9d,	// (0x00055367) ncim_query_content_pane_t4_ParamLimits

0x7e9d,	// (0x00055367) ncim_query_content_pane_t4

0x7ec5,	// (0x0005538f) ncim_query_content_pane_t5_ParamLimits

0x7ec5,	// (0x0005538f) ncim_query_content_pane_t5

0xe131,	// (0x0005b5fb) ncim_query_content_pane_t6_ParamLimits

0xe131,	// (0x0005b5fb) ncim_query_content_pane_t6

0xfbe4,	// (0x0005d0ae) ncim_query_content_pane_t_ParamLimits

0xe159,	// (0x0005b623) ncim_query_list_pane_ParamLimits

0xe194,	// (0x0005b65e) ncim_query_popup_pane_ParamLimits

0xe1a8,	// (0x0005b672) wait_bar_pane_cp04

0x9878,	// (0x00056d42) input_focus_pane_cp011

0xe1b0,	// (0x0005b67a) ncim_query_popup_pane_t1

0xe1be,	// (0x0005b688) ncim_list_query_list_pane_ParamLimits

0xe1be,	// (0x0005b688) ncim_list_query_list_pane

0x9878,	// (0x00056d42) bg_button_pane_cp027

0xe1cb,	// (0x0005b695) ncim_query_button_pane_g1

0x9878,	// (0x00056d42) list_highlight_pane_cp012

0xe1d5,	// (0x0005b69f) ncim_list_query_list_pane_g1

0xe1dd,	// (0x0005b6a7) ncim_list_query_list_pane_t1

0xa49d,	// (0x00057967) cam4_indicators_pane_g3_ParamLimits

0xa49d,	// (0x00057967) cam4_indicators_pane_g3

0xa51d,	// (0x000579e7) vid4_indicators_pane_g5_ParamLimits

0xa51d,	// (0x000579e7) vid4_indicators_pane_g5

0xa5e8,	// (0x00057ab2) vid4_progress_pane_g5_ParamLimits

0xa5e8,	// (0x00057ab2) vid4_progress_pane_g5

0x7d54,	// (0x0005521e) main_ncimui_pane_g1

0x7dbd,	// (0x00055287) ncimui_group_query_pane_ParamLimits

0x7dbd,	// (0x00055287) ncimui_group_query_pane

0x7e05,	// (0x000552cf) ncimui_list_pane_ParamLimits

0x7e05,	// (0x000552cf) ncimui_list_pane

0x7e2c,	// (0x000552f6) ncimui_text_pane_ParamLimits

0x7e2c,	// (0x000552f6) ncimui_text_pane

0x7eed,	// (0x000553b7) ncimui_text_pane_t1_ParamLimits

0x7eed,	// (0x000553b7) ncimui_text_pane_t1

0xe1eb,	// (0x0005b6b5) ncimui_list_single_graphic_pane_ParamLimits

0xe1eb,	// (0x0005b6b5) ncimui_list_single_graphic_pane

0x7f0b,	// (0x000553d5) ncimui_query_pane_ParamLimits

0x7f0b,	// (0x000553d5) ncimui_query_pane

0x9878,	// (0x00056d42) list_highlight_pane_cp013

0xe1fb,	// (0x0005b6c5) ncim_list_query_list_pane_t1_copy1

0xe1d5,	// (0x0005b69f) ncim_list_single_graphic_pane_g1

0x7f1e,	// (0x000553e8) ncim_query_button_pane_cp01

0x7f2a,	// (0x000553f4) ncim_query_entry_pane_ParamLimits

0x7f2a,	// (0x000553f4) ncim_query_entry_pane

0x7f3d,	// (0x00055407) ncimui_query_pane_g1

0x7f49,	// (0x00055413) ncimui_query_pane_t1_ParamLimits

0x7f49,	// (0x00055413) ncimui_query_pane_t1

0xa757,	// (0x00057c21) input_focus_pane_cp012

0xe209,	// (0x0005b6d3) ncim_query_entry_pane_t1

0xa8b4,	// (0x00057d7e) main_im_pane_ParamLimits

0xa757,	// (0x00057c21) main_mobtv_pane_ParamLimits

0xa757,	// (0x00057c21) main_mobtv_pane

0x7bec,	// (0x000550b6) main_cset6_slider_pane_g18_ParamLimits

0x7bec,	// (0x000550b6) main_cset6_slider_pane_g18

0x7bf8,	// (0x000550c2) main_cset6_slider_pane_g19_ParamLimits

0x7bf8,	// (0x000550c2) main_cset6_slider_pane_g19

0xb5be,	// (0x00058a88) bg_main_mobtv_pane_ParamLimits

0xb5be,	// (0x00058a88) bg_main_mobtv_pane

0x7f62,	// (0x0005542c) main_mobtv_info_pane

0x7f6b,	// (0x00055435) main_mobtv_loading_pane_ParamLimits

0x7f6b,	// (0x00055435) main_mobtv_loading_pane

0xe21b,	// (0x0005b6e5) main_mobtv_pg_channel_list_pane

0xe225,	// (0x0005b6ef) main_mobtv_pg_hdr_pane

0x7f78,	// (0x00055442) main_mobtv_programe_curr_pane_ParamLimits

0x7f78,	// (0x00055442) main_mobtv_programe_curr_pane

0x7f85,	// (0x0005544f) main_mobtv_programe_next_pane_ParamLimits

0x7f85,	// (0x0005544f) main_mobtv_programe_next_pane

0xe22e,	// (0x0005b6f8) popup_mobtv_noti_window

0xcd08,	// (0x0005a1d2) main_tv_pg_hdr_pane_g1

0xe236,	// (0x0005b700) main_tv_pg_hdr_pane_g2

0xe23e,	// (0x0005b708) main_tv_pg_hdr_pane_g3

0xe246,	// (0x0005b710) main_tv_pg_hdr_pane_g4

0xe24e,	// (0x0005b718) main_tv_pg_hdr_pane_g5

0xe258,	// (0x0005b722) main_tv_pg_hdr_pane_g6

0xe262,	// (0x0005b72c) main_tv_pg_hdr_pane_g7

0xe26c,	// (0x0005b736) main_tv_pg_hdr_pane_g8

0xe276,	// (0x0005b740) main_tv_pg_hdr_pane_g9

0xe280,	// (0x0005b74a) main_tv_pg_hdr_pane_g10

0xe28a,	// (0x0005b754) main_tv_pg_hdr_pane_g11

0x000a,

0xfbf1,	// (0x0005d0bb) main_tv_pg_hdr_pane_g

0xe294,	// (0x0005b75e) main_tv_pg_hdr_pane_t1

0xe2a2,	// (0x0005b76c) main_tv_pg_hdr_pane_t2

0xe2b0,	// (0x0005b77a) main_tv_pg_hdr_pane_t3

0xe2c0,	// (0x0005b78a) main_tv_pg_hdr_pane_t4

0xe2d0,	// (0x0005b79a) main_tv_pg_hdr_pane_t5

0x0004,

0xfc08,	// (0x0005d0d2) main_tv_pg_hdr_pane_t

0xe2e0,	// (0x0005b7aa) single_mobtv_pg_channel_pane_ParamLimits

0xe2e0,	// (0x0005b7aa) single_mobtv_pg_channel_pane

0xe2f2,	// (0x0005b7bc) single_mobtv_pg_channel_table_pane

0xe2fb,	// (0x0005b7c5) single_mobtv_pg_channel_thumb_pane

0xe304,	// (0x0005b7ce) single_tv_pg_channel_pane_g1

0xe30d,	// (0x0005b7d7) single_tv_pg_channel_pane_g2

0x0001,

0xfc13,	// (0x0005d0dd) single_tv_pg_channel_pane_g

0xcf6b,	// (0x0005a435) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcf6b,	// (0x0005a435) bg_single_mobtv_pg_channel_thumb_pane

0xe316,	// (0x0005b7e0) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe316,	// (0x0005b7e0) single_mobtv_pg_channel_thumb_pane_g1

0xe324,	// (0x0005b7ee) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe324,	// (0x0005b7ee) single_mobtv_pg_channel_thumb_pane_g2

0xe330,	// (0x0005b7fa) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe330,	// (0x0005b7fa) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc18,	// (0x0005d0e2) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc18,	// (0x0005d0e2) single_mobtv_pg_channel_thumb_pane_g

0xe33c,	// (0x0005b806) single_mobtv_pg_channel_thumb_pane_t1

0xe34a,	// (0x0005b814) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc1f,	// (0x0005d0e9) single_mobtv_pg_channel_thumb_pane_t

0xcd08,	// (0x0005a1d2) bg_single_mobtv_pg_channel_table_pane_g1

0xcd08,	// (0x0005a1d2) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6c1,	// (0x0005cb8b) bg_single_mobtv_pg_channel_table_pane_g

0xe358,	// (0x0005b822) single_mobtv_pg_channel_table_pane_t1

0xe366,	// (0x0005b830) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc24,	// (0x0005d0ee) single_mobtv_pg_channel_table_pane_t

0x7f9a,	// (0x00055464) main_mobtv_info_pane_g1_ParamLimits

0x7f9a,	// (0x00055464) main_mobtv_info_pane_g1

0x7fb8,	// (0x00055482) main_mobtv_info_pane_t1_ParamLimits

0x7fb8,	// (0x00055482) main_mobtv_info_pane_t1

0x8030,	// (0x000554fa) main_mobtv_info_pane_t2_ParamLimits

0x8030,	// (0x000554fa) main_mobtv_info_pane_t2

0x0002,

0xfc2e,	// (0x0005d0f8) main_mobtv_info_pane_t_ParamLimits

0xfc2e,	// (0x0005d0f8) main_mobtv_info_pane_t

0x80bf,	// (0x00055589) wait_bar_pane_cp05

0x80d1,	// (0x0005559b) main_mobtv_loading_pane_g1_ParamLimits

0x80d1,	// (0x0005559b) main_mobtv_loading_pane_g1

0x80e4,	// (0x000555ae) main_mobtv_loading_pane_g2_ParamLimits

0x80e4,	// (0x000555ae) main_mobtv_loading_pane_g2

0x80f0,	// (0x000555ba) main_mobtv_loading_pane_g3_ParamLimits

0x80f0,	// (0x000555ba) main_mobtv_loading_pane_g3

0x0002,

0xfc35,	// (0x0005d0ff) main_mobtv_loading_pane_g_ParamLimits

0xfc35,	// (0x0005d0ff) main_mobtv_loading_pane_g

0xe374,	// (0x0005b83e) main_mobtv_loading_pane_t1_ParamLimits

0xe374,	// (0x0005b83e) main_mobtv_loading_pane_t1

0xe38c,	// (0x0005b856) main_mobtv_loading_pane_t2_ParamLimits

0xe38c,	// (0x0005b856) main_mobtv_loading_pane_t2

0x0001,

0xfc3c,	// (0x0005d106) main_mobtv_loading_pane_t_ParamLimits

0xfc3c,	// (0x0005d106) main_mobtv_loading_pane_t

0x8103,	// (0x000555cd) wait_bar_pane_cp06_ParamLimits

0x8103,	// (0x000555cd) wait_bar_pane_cp06

0xe3b0,	// (0x0005b87a) main_mobtv_programe_curr_pane_t1

0xe3be,	// (0x0005b888) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc41,	// (0x0005d10b) main_mobtv_programe_curr_pane_t

0xe3cc,	// (0x0005b896) main_mobtv_programe_next_pane_t1

0xe3da,	// (0x0005b8a4) main_mobtv_programe_next_pane_t2

0xe3e8,	// (0x0005b8b2) main_mobtv_programe_next_pane_t3

0x0002,

0xfc46,	// (0x0005d110) main_mobtv_programe_next_pane_t

0x9878,	// (0x00056d42) bg_popup_mobtv_noti_window_pane

0xe3f6,	// (0x0005b8c0) popup_mobtv_noti_window_g1

0xe3fe,	// (0x0005b8c8) popup_mobtv_noti_window_t1

0xe40c,	// (0x0005b8d6) popup_mobtv_noti_window_t2

0x0001,

0xfc4d,	// (0x0005d117) popup_mobtv_noti_window_t

0xcd08,	// (0x0005a1d2) bg_popup_mobtv_noti_window_pane_g1

0x9878,	// (0x00056d42) sc_clock_pane

0x9878,	// (0x00056d42) main_fs_bigclock_pane

0x783f,	// (0x00054d09) blid2_tripm_pane_t4_ParamLimits

0x783f,	// (0x00054d09) blid2_tripm_pane_t4

0x8112,	// (0x000555dc) sc_clock_pane_g1_ParamLimits

0x8112,	// (0x000555dc) sc_clock_pane_g1

0x8124,	// (0x000555ee) sc_clock_pane_t1_ParamLimits

0x8124,	// (0x000555ee) sc_clock_pane_t1

0x8146,	// (0x00055610) sc_clock_pane_t2_ParamLimits

0x8146,	// (0x00055610) sc_clock_pane_t2

0x815e,	// (0x00055628) sc_clock_pane_t3_ParamLimits

0x815e,	// (0x00055628) sc_clock_pane_t3

0x0004,

0xfc52,	// (0x0005d11c) sc_clock_pane_t_ParamLimits

0xfc52,	// (0x0005d11c) sc_clock_pane_t

0x8dbe,	// (0x00056288) main_fs_bigclock_indicator_pane_ParamLimits

0x8dbe,	// (0x00056288) main_fs_bigclock_indicator_pane

0x8204,	// (0x000556ce) main_fs_bigclock_pane_g1_ParamLimits

0x8204,	// (0x000556ce) main_fs_bigclock_pane_g1

0x8dca,	// (0x00056294) main_fs_bigclock_pane_t1_ParamLimits

0x8dca,	// (0x00056294) main_fs_bigclock_pane_t1

0x8ddc,	// (0x000562a6) main_fs_bigclock_pane_t2_ParamLimits

0x8ddc,	// (0x000562a6) main_fs_bigclock_pane_t2

0x8df0,	// (0x000562ba) main_fs_bigclock_pane_t3_ParamLimits

0x8df0,	// (0x000562ba) main_fs_bigclock_pane_t3

0x0002,

0xfe60,	// (0x0005d32a) main_fs_bigclock_pane_t_ParamLimits

0xfe60,	// (0x0005d32a) main_fs_bigclock_pane_t

0xec46,	// (0x0005c110) main_fs_bigclock_indicator_pane_g1

0xe101,	// (0x0005b5cb) ncim_query_content_pane_g2_ParamLimits

0xe101,	// (0x0005b5cb) ncim_query_content_pane_g2

0x0001,

0xfbdf,	// (0x0005d0a9) ncim_query_content_pane_g_ParamLimits

0xfbdf,	// (0x0005d0a9) ncim_query_content_pane_g

0x8177,	// (0x00055641) sc_clock_pane_t4_ParamLimits

0x8177,	// (0x00055641) sc_clock_pane_t4

0xa757,	// (0x00057c21) main_radioblah_pane

0xa40f,	// (0x000578d9) cell_call4_button_pane_t1_copy1_ParamLimits

0xa40f,	// (0x000578d9) cell_call4_button_pane_t1_copy1

0x7d6c,	// (0x00055236) main_ncimui_pane_t1_ParamLimits

0x7d6c,	// (0x00055236) main_ncimui_pane_t1

0x7d86,	// (0x00055250) main_ncimui_pane_t2_ParamLimits

0x7d86,	// (0x00055250) main_ncimui_pane_t2

0x0002,

0xfbd8,	// (0x0005d0a2) main_ncimui_pane_t_ParamLimits

0xfbd8,	// (0x0005d0a2) main_ncimui_pane_t

0xe551,	// (0x0005ba1b) main_radioblah_anim_pane_ParamLimits

0xe551,	// (0x0005ba1b) main_radioblah_anim_pane

0xe562,	// (0x0005ba2c) main_radioblah_info_pane_ParamLimits

0xe562,	// (0x0005ba2c) main_radioblah_info_pane

0xe576,	// (0x0005ba40) main_radioblah_pane_t1_ParamLimits

0xe576,	// (0x0005ba40) main_radioblah_pane_t1

0xe592,	// (0x0005ba5c) main_radioblah_pane_t2_ParamLimits

0xe592,	// (0x0005ba5c) main_radioblah_pane_t2

0x0003,

0xfc73,	// (0x0005d13d) main_radioblah_pane_t_ParamLimits

0xfc73,	// (0x0005d13d) main_radioblah_pane_t

0x8263,	// (0x0005572d) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8263,	// (0x0005572d) main_radioblah_rocker_ctrl_pane

0xe5da,	// (0x0005baa4) main_radioblah_info_pane_t1_ParamLimits

0xe5da,	// (0x0005baa4) main_radioblah_info_pane_t1

0x82bb,	// (0x00055785) main_radioblah_info_pane_t2_ParamLimits

0x82bb,	// (0x00055785) main_radioblah_info_pane_t2

0x0003,

0xfc7c,	// (0x0005d146) main_radioblah_info_pane_t_ParamLimits

0xfc7c,	// (0x0005d146) main_radioblah_info_pane_t

0xcd08,	// (0x0005a1d2) main_radioblah_rocker_ctrl_pane_g1

0x836b,	// (0x00055835) main_radioblah_rocker_ctrl_pane_g2

0x8373,	// (0x0005583d) main_radioblah_rocker_ctrl_pane_g3

0x837b,	// (0x00055845) main_radioblah_rocker_ctrl_pane_g4

0x8383,	// (0x0005584d) main_radioblah_rocker_ctrl_pane_g5

0x838b,	// (0x00055855) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc85,	// (0x0005d14f) main_radioblah_rocker_ctrl_pane_g

0x7aee,	// (0x00054fb8) main_cset_text2_pane_t1_copy1_ParamLimits

0xa46d,	// (0x00057937) cam4_image_uncrop_qvga_pane

0xa4c6,	// (0x00057990) vid4_image_uncrop_qcif_pane

0xa61e,	// (0x00057ae8) cam6_image_uncrop_qvga_pane_ParamLimits

0xa61e,	// (0x00057ae8) cam6_image_uncrop_qvga_pane

0xde08,	// (0x0005b2d2) vid6_image_uncrop_qcif_pane_ParamLimits

0xde08,	// (0x0005b2d2) vid6_image_uncrop_qcif_pane

0x9878,	// (0x00056d42) bg_popup_preview_window_pane_cp03

0xe0b3,	// (0x0005b57d) list_cset_text2_pane

0xe0bb,	// (0x0005b585) main_cset6_text2_pane_g1

0xe0c3,	// (0x0005b58d) main_cset6_text2_pane_t1

0x8393,	// (0x0005585d) list_cset_text2_pane_t1_ParamLimits

0x8393,	// (0x0005585d) list_cset_text2_pane_t1

0xa757,	// (0x00057c21) main_radioblah_pane_ParamLimits

0x80ab,	// (0x00055575) main_mobtv_info_pane_t3_ParamLimits

0x80ab,	// (0x00055575) main_mobtv_info_pane_t3

0x8251,	// (0x0005571b) main_radioblah_pane_g1

0x828b,	// (0x00055755) main_radioblah_info_pane_g1

0x8310,	// (0x000557da) main_radioblah_info_pane_t3_ParamLimits

0x8310,	// (0x000557da) main_radioblah_info_pane_t3

0x2e5c,	// (0x00050326) highlight_cell_cale_month_pane_ParamLimits

0x2e5c,	// (0x00050326) highlight_cell_cale_month_pane

0x9878,	// (0x00056d42) main_phob_fisheye_pane

0xd067,	// (0x0005a531) scroll_pane_cp0031_ParamLimits

0xd067,	// (0x0005a531) scroll_pane_cp0031

0xdf16,	// (0x0005b3e0) wait_bar_pane_cp08_ParamLimits

0x7b73,	// (0x0005503d) cset_list_set_pane_copy1_ParamLimits

0xe614,	// (0x0005bade) highlight_cell_cale_month_pane_g1

0x83ac,	// (0x00055876) highlight_cell_cale_month_pane_t1

0xdb99,	// (0x0005b063) list_gen_pane_cp01

0xd7f9,	// (0x0005acc3) scroll_pane_01

0x83ba,	// (0x00055884) list_single_double_fisheye_pane

0x0726,	// (0x0004dbf0) list_double_fisheye_pane_g1_ParamLimits

0x0726,	// (0x0004dbf0) list_double_fisheye_pane_g1

0x0732,	// (0x0004dbfc) list_double_fisheye_pane_g2_ParamLimits

0x0732,	// (0x0004dbfc) list_double_fisheye_pane_g2

0x83c3,	// (0x0005588d) list_double_fisheye_pane_g3_ParamLimits

0x83c3,	// (0x0005588d) list_double_fisheye_pane_g3

0x0004,

0xfc92,	// (0x0005d15c) list_double_fisheye_pane_g_ParamLimits

0xfc92,	// (0x0005d15c) list_double_fisheye_pane_g

0x0763,	// (0x0004dc2d) list_double_fisheye_pane_t1_ParamLimits

0x0763,	// (0x0004dc2d) list_double_fisheye_pane_t1

0x077e,	// (0x0004dc48) list_double_fisheye_pane_t2_ParamLimits

0x077e,	// (0x0004dc48) list_double_fisheye_pane_t2

0x0001,

0xfc9d,	// (0x0005d167) list_double_fisheye_pane_t_ParamLimits

0xfc9d,	// (0x0005d167) list_double_fisheye_pane_t

0x9878,	// (0x00056d42) main_call5_pane

0x81a2,	// (0x0005566c) sc_swipe_pane_ParamLimits

0x81a2,	// (0x0005566c) sc_swipe_pane

0x83e2,	// (0x000558ac) call5_image_pane_ParamLimits

0x83e2,	// (0x000558ac) call5_image_pane

0x83ff,	// (0x000558c9) call5_swipe_1_pane_ParamLimits

0x83ff,	// (0x000558c9) call5_swipe_1_pane

0x8412,	// (0x000558dc) call5_swipe_2_pane_ParamLimits

0x8412,	// (0x000558dc) call5_swipe_2_pane

0x843d,	// (0x00055907) popup_call5_audio_first_window_ParamLimits

0x843d,	// (0x00055907) popup_call5_audio_first_window

0xcf6b,	// (0x0005a435) call5_swipe_1_pane_g1_ParamLimits

0xcf6b,	// (0x0005a435) call5_swipe_1_pane_g1

0xe61c,	// (0x0005bae6) call5_swipe_1_pane_g2_ParamLimits

0xe61c,	// (0x0005bae6) call5_swipe_1_pane_g2

0x0001,

0xfca2,	// (0x0005d16c) call5_swipe_1_pane_g_ParamLimits

0xfca2,	// (0x0005d16c) call5_swipe_1_pane_g

0xe628,	// (0x0005baf2) call5_swipe_1_pane_t1_ParamLimits

0xe628,	// (0x0005baf2) call5_swipe_1_pane_t1

0xcf6b,	// (0x0005a435) call5_swipe_2_pane_g1_ParamLimits

0xcf6b,	// (0x0005a435) call5_swipe_2_pane_g1

0xe63d,	// (0x0005bb07) call5_swipe_2_pane_g2_ParamLimits

0xe63d,	// (0x0005bb07) call5_swipe_2_pane_g2

0x0001,

0xfca7,	// (0x0005d171) call5_swipe_2_pane_g_ParamLimits

0xfca7,	// (0x0005d171) call5_swipe_2_pane_g

0xe649,	// (0x0005bb13) call5_swipe_2_pane_t1_ParamLimits

0xe649,	// (0x0005bb13) call5_swipe_2_pane_t1

0xe65e,	// (0x0005bb28) sc_swipe_pane_g1_ParamLimits

0xe65e,	// (0x0005bb28) sc_swipe_pane_g1

0xe66b,	// (0x0005bb35) sc_swipe_pane_g2_ParamLimits

0xe66b,	// (0x0005bb35) sc_swipe_pane_g2

0x0001,

0xfcac,	// (0x0005d176) sc_swipe_pane_g_ParamLimits

0xfcac,	// (0x0005d176) sc_swipe_pane_g

0xe677,	// (0x0005bb41) sc_swipe_pane_t1_ParamLimits

0xe677,	// (0x0005bb41) sc_swipe_pane_t1

0x9878,	// (0x00056d42) main_cmail_launcher_pane

0x844e,	// (0x00055918) aid_size_cell_cmail_l_ParamLimits

0x844e,	// (0x00055918) aid_size_cell_cmail_l

0x845c,	// (0x00055926) grid_cmail_l_pane_ParamLimits

0x845c,	// (0x00055926) grid_cmail_l_pane

0x8476,	// (0x00055940) cell_cmail_l_pane_ParamLimits

0x8476,	// (0x00055940) cell_cmail_l_pane

0xe68c,	// (0x0005bb56) cell_cmail_l_pane_g1_ParamLimits

0xe68c,	// (0x0005bb56) cell_cmail_l_pane_g1

0xe698,	// (0x0005bb62) cell_cmail_l_pane_t1_ParamLimits

0xe698,	// (0x0005bb62) cell_cmail_l_pane_t1

0xe6ae,	// (0x0005bb78) cell_cmail_l_pane_t2_ParamLimits

0xe6ae,	// (0x0005bb78) cell_cmail_l_pane_t2

0x0001,

0xfcb1,	// (0x0005d17b) cell_cmail_l_pane_t_ParamLimits

0xfcb1,	// (0x0005d17b) cell_cmail_l_pane_t

0xa757,	// (0x00057c21) grid_highlight_pane_cp018_ParamLimits

0xa757,	// (0x00057c21) grid_highlight_pane_cp018

0x101a,	// (0x0004e4e4) main2_pane_ParamLimits

0x101a,	// (0x0004e4e4) main2_pane

0xa956,	// (0x00057e20) popup_sp_fs_action_menu_bg_pane_g1

0xa95e,	// (0x00057e28) popup_sp_fs_action_menu_bg_pane_g2

0xa966,	// (0x00057e30) popup_sp_fs_action_menu_bg_pane_g3

0xa96e,	// (0x00057e38) popup_sp_fs_action_menu_bg_pane_g4

0xa976,	// (0x00057e40) popup_sp_fs_action_menu_bg_pane_g5

0xa97e,	// (0x00057e48) popup_sp_fs_action_menu_bg_pane_g6

0xa986,	// (0x00057e50) popup_sp_fs_action_menu_bg_pane_g7

0xa98e,	// (0x00057e58) popup_sp_fs_action_menu_bg_pane_g8

0xa996,	// (0x00057e60) popup_sp_fs_action_menu_bg_pane_g9

0xa99e,	// (0x00057e68) popup_sp_fs_action_menu_bg_pane_g10

0xa99e,	// (0x00057e68) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0005c639) popup_sp_fs_action_menu_bg_pane_g

0x0049,	// (0x0004d513) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0049,	// (0x0004d513) list_medium_line_x2_t3_g3_g1

0x0055,	// (0x0004d51f) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0055,	// (0x0004d51f) list_medium_line_x2_t3_g3_g2

0x0061,	// (0x0004d52b) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0061,	// (0x0004d52b) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0005c6e7) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0005c6e7) list_medium_line_x2_t3_g3_g

0x006d,	// (0x0004d537) list_medium_line_x2_t3_g3_t1_ParamLimits

0x006d,	// (0x0004d537) list_medium_line_x2_t3_g3_t1

0x0082,	// (0x0004d54c) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0082,	// (0x0004d54c) list_medium_line_x2_t3_g3_t2

0x0096,	// (0x0004d560) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0096,	// (0x0004d560) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0005c6ee) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0005c6ee) list_medium_line_x2_t3_g3_t

0x0049,	// (0x0004d513) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0049,	// (0x0004d513) list_medium_line_x2_t3_g2_g1

0x0061,	// (0x0004d52b) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0061,	// (0x0004d52b) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0005c6f5) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0005c6f5) list_medium_line_x2_t3_g2_g

0x00ab,	// (0x0004d575) list_medium_line_x2_t3_g2_t1_ParamLimits

0x00ab,	// (0x0004d575) list_medium_line_x2_t3_g2_t1

0x00c1,	// (0x0004d58b) list_medium_line_x2_t3_g2_t2_ParamLimits

0x00c1,	// (0x0004d58b) list_medium_line_x2_t3_g2_t2

0x00d3,	// (0x0004d59d) list_medium_line_x2_t3_g2_t3_ParamLimits

0x00d3,	// (0x0004d59d) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0005c6fa) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0005c6fa) list_medium_line_x2_t3_g2_t

0x0049,	// (0x0004d513) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0049,	// (0x0004d513) list_medium_line_x2_t4_g4_g1

0x00f0,	// (0x0004d5ba) list_medium_line_x2_t4_g4_g2_ParamLimits

0x00f0,	// (0x0004d5ba) list_medium_line_x2_t4_g4_g2

0x0055,	// (0x0004d51f) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0055,	// (0x0004d51f) list_medium_line_x2_t4_g4_g3

0x00fc,	// (0x0004d5c6) list_medium_line_x2_t4_g4_g4_ParamLimits

0x00fc,	// (0x0004d5c6) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0005c701) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0005c701) list_medium_line_x2_t4_g4_g

0x0108,	// (0x0004d5d2) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0108,	// (0x0004d5d2) list_medium_line_x2_t4_g4_t1

0x0122,	// (0x0004d5ec) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0122,	// (0x0004d5ec) list_medium_line_x2_t4_g4_t2

0x0138,	// (0x0004d602) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0138,	// (0x0004d602) list_medium_line_x2_t4_g4_t3

0x014d,	// (0x0004d617) list_medium_line_x2_t4_g4_t4_ParamLimits

0x014d,	// (0x0004d617) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0005c70a) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0005c70a) list_medium_line_x2_t4_g4_t

0x0049,	// (0x0004d513) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0049,	// (0x0004d513) list_medium_line_x2_t2_g4_g1

0x00f0,	// (0x0004d5ba) list_medium_line_x2_t2_g4_g2_ParamLimits

0x00f0,	// (0x0004d5ba) list_medium_line_x2_t2_g4_g2

0x0055,	// (0x0004d51f) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0055,	// (0x0004d51f) list_medium_line_x2_t2_g4_g3

0x0061,	// (0x0004d52b) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0061,	// (0x0004d52b) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0005c771) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0005c771) list_medium_line_x2_t2_g4_g

0x015f,	// (0x0004d629) list_medium_line_x2_t2_g4_t1_ParamLimits

0x015f,	// (0x0004d629) list_medium_line_x2_t2_g4_t1

0x0096,	// (0x0004d560) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0096,	// (0x0004d560) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0005c77a) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0005c77a) list_medium_line_x2_t2_g4_t

0x0049,	// (0x0004d513) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0049,	// (0x0004d513) list_medium_line_x2_t2_g3_g1

0x0055,	// (0x0004d51f) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0055,	// (0x0004d51f) list_medium_line_x2_t2_g3_g2

0x0061,	// (0x0004d52b) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0061,	// (0x0004d52b) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x0005c6e7) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x0005c6e7) list_medium_line_x2_t2_g3_g

0x0174,	// (0x0004d63e) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0174,	// (0x0004d63e) list_medium_line_x2_t2_g3_t1

0x0096,	// (0x0004d560) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0096,	// (0x0004d560) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x0005c77f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x0005c77f) list_medium_line_x2_t2_g3_t

0x2fb6,	// (0x00050480) main_sp_fs_list_pane_ParamLimits

0x2fb6,	// (0x00050480) main_sp_fs_list_pane

0xc483,	// (0x0005994d) sp_fs_scroll_pane_ParamLimits

0xc483,	// (0x0005994d) sp_fs_scroll_pane

0x0189,	// (0x0004d653) list_medium_line_x2_t3_t1

0x0199,	// (0x0004d663) list_medium_line_x2_t3_t2

0x01a7,	// (0x0004d671) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x0005c7ca) list_medium_line_x2_t3_t

0x01b5,	// (0x0004d67f) list_medium_line_x3_t4_t1

0x01c5,	// (0x0004d68f) list_medium_line_x3_t4_t2

0x01d3,	// (0x0004d69d) list_medium_line_x3_t4_t3

0x01a7,	// (0x0004d671) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x0005c7d1) list_medium_line_x3_t4_t

0x01e1,	// (0x0004d6ab) list_medium_line_x4_t5_t1

0x01f1,	// (0x0004d6bb) list_medium_line_x4_t5_t2

0x01d3,	// (0x0004d69d) list_medium_line_x4_t5_t3

0x01ff,	// (0x0004d6c9) list_medium_line_x4_t5_t4

0x01a7,	// (0x0004d671) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x0005c7da) list_medium_line_x4_t5_t

0x0049,	// (0x0004d513) list_medium_line_t4_g4_g1_ParamLimits

0x0049,	// (0x0004d513) list_medium_line_t4_g4_g1

0x020d,	// (0x0004d6d7) list_medium_line_t4_g4_g2_ParamLimits

0x020d,	// (0x0004d6d7) list_medium_line_t4_g4_g2

0x0219,	// (0x0004d6e3) list_medium_line_t4_g4_g3_ParamLimits

0x0219,	// (0x0004d6e3) list_medium_line_t4_g4_g3

0x0061,	// (0x0004d52b) list_medium_line_t4_g4_g4_ParamLimits

0x0061,	// (0x0004d52b) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x0005c7e5) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x0005c7e5) list_medium_line_t4_g4_g

0x0225,	// (0x0004d6ef) list_medium_line_t4_g4_t1_ParamLimits

0x0225,	// (0x0004d6ef) list_medium_line_t4_g4_t1

0x023a,	// (0x0004d704) list_medium_line_t4_g4_t2_ParamLimits

0x023a,	// (0x0004d704) list_medium_line_t4_g4_t2

0x024f,	// (0x0004d719) list_medium_line_t4_g4_t3_ParamLimits

0x024f,	// (0x0004d719) list_medium_line_t4_g4_t3

0x0096,	// (0x0004d560) list_medium_line_t4_g4_t4_ParamLimits

0x0096,	// (0x0004d560) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x0005c7ee) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x0005c7ee) list_medium_line_t4_g4_t

0x3075,	// (0x0005053f) chi_dic_find_pane_g1

0x4079,	// (0x00051543) main_tport_pane

0x0442,	// (0x0004d90c) list_medium_line_plain_t1

0x0450,	// (0x0004d91a) list_medium_line_t2_g2_g1_ParamLimits

0x0450,	// (0x0004d91a) list_medium_line_t2_g2_g1

0x045c,	// (0x0004d926) list_medium_line_t2_g2_g2_ParamLimits

0x045c,	// (0x0004d926) list_medium_line_t2_g2_g2

0x0001,

0xf9e9,	// (0x0005ceb3) list_medium_line_t2_g2_g_ParamLimits

0xf9e9,	// (0x0005ceb3) list_medium_line_t2_g2_g

0x0468,	// (0x0004d932) list_medium_line_t2_g2_t1_ParamLimits

0x0468,	// (0x0004d932) list_medium_line_t2_g2_t1

0x0482,	// (0x0004d94c) list_medium_line_t2_g2_t2_ParamLimits

0x0482,	// (0x0004d94c) list_medium_line_t2_g2_t2

0x0001,

0xf9ee,	// (0x0005ceb8) list_medium_line_t2_g2_t_ParamLimits

0xf9ee,	// (0x0005ceb8) list_medium_line_t2_g2_t

0x75e7,	// (0x00054ab1) aid_sp_fs_list_icon_a_sm

0x75ef,	// (0x00054ab9) aid_sp_fs_list_icon_d

0x75f7,	// (0x00054ac1) aid_sp_fs_text_primary

0xe18b,	// (0x0005b655) aid_sp_fs_text_secondary

0x7600,	// (0x00054aca) list_medium_line

0x7600,	// (0x00054aca) list_medium_line_g2

0x7600,	// (0x00054aca) list_medium_line_g3

0x7600,	// (0x00054aca) list_medium_line_plain

0x7600,	// (0x00054aca) list_medium_line_plain_t2

0x7600,	// (0x00054aca) list_medium_line_plain_t3

0x7600,	// (0x00054aca) list_medium_line_right_icon

0x7600,	// (0x00054aca) list_medium_line_right_iconx2

0x7600,	// (0x00054aca) list_medium_line_t2

0x7600,	// (0x00054aca) list_medium_line_t2_g2

0x7600,	// (0x00054aca) list_medium_line_t2_g3

0x7600,	// (0x00054aca) list_medium_line_t2_right_icon

0x7600,	// (0x00054aca) list_medium_line_t2_right_iconx2

0x7600,	// (0x00054aca) list_medium_line_t3

0x7600,	// (0x00054aca) list_medium_line_t3_g2

0x7600,	// (0x00054aca) list_medium_line_t3_g3

0x7600,	// (0x00054aca) list_medium_line_t3_right_iconx2

0x7609,	// (0x00054ad3) list_medium_line_t4_g4

0x7612,	// (0x00054adc) list_medium_line_x2

0x7612,	// (0x00054adc) list_medium_line_x2_t2_g2

0x7612,	// (0x00054adc) list_medium_line_x2_t2_g3

0x7612,	// (0x00054adc) list_medium_line_x2_t2_g4

0x7612,	// (0x00054adc) list_medium_line_x2_t3

0x7612,	// (0x00054adc) list_medium_line_x2_t3_g2

0x7612,	// (0x00054adc) list_medium_line_x2_t3_g3

0x7612,	// (0x00054adc) list_medium_line_x2_t3_g4

0x7612,	// (0x00054adc) list_medium_line_x2_t4_g2

0x7612,	// (0x00054adc) list_medium_line_x2_t4_g4

0x761b,	// (0x00054ae5) list_medium_line_x3

0x761b,	// (0x00054ae5) list_medium_line_x3_t4

0x761b,	// (0x00054ae5) list_medium_line_x3_t4_g4

0x7609,	// (0x00054ad3) list_medium_line_x4_t4

0x7609,	// (0x00054ad3) list_medium_line_x4_t4_g7

0x7609,	// (0x00054ad3) list_medium_line_x4_t5

0x060e,	// (0x0004dad8) list_single_fs_dyc_pane_ParamLimits

0x060e,	// (0x0004dad8) list_single_fs_dyc_pane

0x0049,	// (0x0004d513) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0049,	// (0x0004d513) list_medium_line_x4_t4_g7_g1

0x064e,	// (0x0004db18) list_medium_line_x4_t4_g7_g2_ParamLimits

0x064e,	// (0x0004db18) list_medium_line_x4_t4_g7_g2

0x065a,	// (0x0004db24) list_medium_line_x4_t4_g7_g3_ParamLimits

0x065a,	// (0x0004db24) list_medium_line_x4_t4_g7_g3

0x0669,	// (0x0004db33) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0669,	// (0x0004db33) list_medium_line_x4_t4_g7_g4

0x0675,	// (0x0004db3f) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0675,	// (0x0004db3f) list_medium_line_x4_t4_g7_g5

0x0684,	// (0x0004db4e) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0684,	// (0x0004db4e) list_medium_line_x4_t4_g7_g6

0x0693,	// (0x0004db5d) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0693,	// (0x0004db5d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbb9,	// (0x0005d083) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbb9,	// (0x0005d083) list_medium_line_x4_t4_g7_g

0x069f,	// (0x0004db69) list_medium_line_x4_t4_g7_t1_ParamLimits

0x069f,	// (0x0004db69) list_medium_line_x4_t4_g7_t1

0x06b4,	// (0x0004db7e) list_medium_line_x4_t4_g7_t2_ParamLimits

0x06b4,	// (0x0004db7e) list_medium_line_x4_t4_g7_t2

0x06c9,	// (0x0004db93) list_medium_line_x4_t4_g7_t3_ParamLimits

0x06c9,	// (0x0004db93) list_medium_line_x4_t4_g7_t3

0x06de,	// (0x0004dba8) list_medium_line_x4_t4_g7_t4_ParamLimits

0x06de,	// (0x0004dba8) list_medium_line_x4_t4_g7_t4

0x06f0,	// (0x0004dbba) list_medium_line_x4_t4_g7_t5_ParamLimits

0x06f0,	// (0x0004dbba) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbc8,	// (0x0005d092) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbc8,	// (0x0005d092) list_medium_line_x4_t4_g7_t

0x0702,	// (0x0004dbcc) list_single_dyc_row_pane_ParamLimits

0x0702,	// (0x0004dbcc) list_single_dyc_row_pane

0x83cf,	// (0x00055899) call5_gesture_pane_ParamLimits

0x83cf,	// (0x00055899) call5_gesture_pane

0x8425,	// (0x000558ef) call5_windows_pane_ParamLimits

0x8425,	// (0x000558ef) call5_windows_pane

0x8490,	// (0x0005595a) call5_swipe_1_pane_cp_ParamLimits

0x8490,	// (0x0005595a) call5_swipe_1_pane_cp

0x849c,	// (0x00055966) call5_swipe_2_pane_cp_ParamLimits

0x849c,	// (0x00055966) call5_swipe_2_pane_cp

0xaa82,	// (0x00057f4c) call5_image_pane_cp

0x84a8,	// (0x00055972) popup_call5_audio_first_window_cp_ParamLimits

0x84a8,	// (0x00055972) popup_call5_audio_first_window_cp

0xe65e,	// (0x0005bb28) call5_swipe_1_pane_g1_cp_ParamLimits

0xe65e,	// (0x0005bb28) call5_swipe_1_pane_g1_cp

0xe6cb,	// (0x0005bb95) call5_swipe_1_pane_g2_cp

0xe677,	// (0x0005bb41) call5_swipe_1_pane_t1_cp_ParamLimits

0xe677,	// (0x0005bb41) call5_swipe_1_pane_t1_cp

0xe65e,	// (0x0005bb28) call5_swipe_2_pane_g1_cp_ParamLimits

0xe65e,	// (0x0005bb28) call5_swipe_2_pane_g1_cp

0xe6d3,	// (0x0005bb9d) call5_swipe_2_pane_g2_cp

0xe6db,	// (0x0005bba5) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6db,	// (0x0005bba5) call5_swipe_2_pane_t1_cp

0xa757,	// (0x00057c21) main_sp_fs_email_pane

0xe6f0,	// (0x0005bbba) main_sp_fs_listscroll_pane_te

0x84b6,	// (0x00055980) popup_sp_fs_action_menu_pane_ParamLimits

0x84b6,	// (0x00055980) popup_sp_fs_action_menu_pane

0xcd08,	// (0x0005a1d2) bg_sp_fs_ctrlbar_pane_g1

0xe6f9,	// (0x0005bbc3) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe702,	// (0x0005bbcc) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe70b,	// (0x0005bbd5) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcd08,	// (0x0005a1d2) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcb6,	// (0x0005d180) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcaed,	// (0x00059fb7) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcaed,	// (0x00059fb7) bg_sp_fs_ctrlbar_ddmenu_pane

0xe714,	// (0x0005bbde) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe714,	// (0x0005bbde) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe720,	// (0x0005bbea) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe720,	// (0x0005bbea) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcbf,	// (0x0005d189) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcbf,	// (0x0005d189) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe72c,	// (0x0005bbf6) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe72c,	// (0x0005bbf6) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x07a0,	// (0x0004dc6a) list_medium_line_t2_right_icon_g1

0x07a8,	// (0x0004dc72) list_medium_line_t2_right_icon_t1

0x07b8,	// (0x0004dc82) list_medium_line_t2_right_icon_t2

0x0001,

0xfcc4,	// (0x0005d18e) list_medium_line_t2_right_icon_t

0xc900,	// (0x00059dca) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc900,	// (0x00059dca) bg_sp_fs_ctrlbar_pane

0x8542,	// (0x00055a0c) main_sp_fs_ctrlbar_button_pane_cp01

0x854c,	// (0x00055a16) main_sp_fs_ctrlbar_ddmenu_pane

0xe77e,	// (0x0005bc48) main_sp_fs_ctrlbar_pane_g1

0xe78a,	// (0x0005bc54) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcc9,	// (0x0005d193) main_sp_fs_ctrlbar_pane_g

0x858a,	// (0x00055a54) main_sp_fs_ctrlbar_pane_t1

0x85c9,	// (0x00055a93) main_sp_fs_ctrlbar_pane

0x85ed,	// (0x00055ab7) main_sp_fs_listscroll_pane_te_cp01

0x07ca,	// (0x0004dc94) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x07ca,	// (0x0004dc94) popup_sp_fs_action_menu_pane_cp01

0xa757,	// (0x00057c21) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa757,	// (0x00057c21) bg_sp_fs_highlight_list_pane_cp01

0x860d,	// (0x00055ad7) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x860d,	// (0x00055ad7) sp_fs_action_menu_list_gene_pane_g1

0xe7b1,	// (0x0005bc7b) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7b1,	// (0x0005bc7b) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcd7,	// (0x0005d1a1) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcd7,	// (0x0005d1a1) sp_fs_action_menu_list_gene_pane_g

0x861c,	// (0x00055ae6) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x861c,	// (0x00055ae6) sp_fs_action_menu_list_gene_pane_t1

0x8634,	// (0x00055afe) sp_fs_action_menu_list_gene_pane_ParamLimits

0x8634,	// (0x00055afe) sp_fs_action_menu_list_gene_pane

0xe7be,	// (0x0005bc88) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7be,	// (0x0005bc88) popup_sp_fs_action_menu_bg_pane

0x8653,	// (0x00055b1d) sp_fs_action_menu_list_pane_ParamLimits

0x8653,	// (0x00055b1d) sp_fs_action_menu_list_pane

0x8673,	// (0x00055b3d) sp_fs_scroll_pane_cp01_ParamLimits

0x8673,	// (0x00055b3d) sp_fs_scroll_pane_cp01

0x07fa,	// (0x0004dcc4) list_medium_line_plain_t2_t1

0x080a,	// (0x0004dcd4) list_medium_line_plain_t2_t2

0x0001,

0xfcdc,	// (0x0005d1a6) list_medium_line_plain_t2_t

0x081a,	// (0x0004dce4) list_medium_line_plain_t3_t1

0x082a,	// (0x0004dcf4) list_medium_line_plain_t3_t2

0x0838,	// (0x0004dd02) list_medium_line_plain_t3_t3

0x0002,

0xfce1,	// (0x0005d1ab) list_medium_line_plain_t3_t

0x0049,	// (0x0004d513) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0049,	// (0x0004d513) list_medium_line_x2_t2_g2_g1

0x0061,	// (0x0004d52b) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0061,	// (0x0004d52b) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0005c6f5) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0005c6f5) list_medium_line_x2_t2_g2_g

0x0225,	// (0x0004d6ef) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0225,	// (0x0004d6ef) list_medium_line_x2_t2_g2_t1

0x0096,	// (0x0004d560) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0096,	// (0x0004d560) list_medium_line_x2_t2_g2_t2

0x0001,

0xfce8,	// (0x0005d1b2) list_medium_line_x2_t2_g2_t_ParamLimits

0xfce8,	// (0x0005d1b2) list_medium_line_x2_t2_g2_t

0x0049,	// (0x0004d513) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0049,	// (0x0004d513) list_medium_line_x2_t4_g2_g1

0x0846,	// (0x0004dd10) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0846,	// (0x0004dd10) list_medium_line_x2_t4_g2_g2

0x0001,

0xfced,	// (0x0005d1b7) list_medium_line_x2_t4_g2_g_ParamLimits

0xfced,	// (0x0005d1b7) list_medium_line_x2_t4_g2_g

0x0858,	// (0x0004dd22) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0858,	// (0x0004dd22) list_medium_line_x2_t4_g2_t1

0x0872,	// (0x0004dd3c) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0872,	// (0x0004dd3c) list_medium_line_x2_t4_g2_t2

0x0888,	// (0x0004dd52) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0888,	// (0x0004dd52) list_medium_line_x2_t4_g2_t3

0x0096,	// (0x0004d560) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0096,	// (0x0004d560) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcf2,	// (0x0005d1bc) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcf2,	// (0x0005d1bc) list_medium_line_x2_t4_g2_t

0x089d,	// (0x0004dd67) list_medium_line_t3_right_iconx2_g1

0x07a0,	// (0x0004dc6a) list_medium_line_t3_right_iconx2_g2

0x08a5,	// (0x0004dd6f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcfb,	// (0x0005d1c5) list_medium_line_t3_right_iconx2_g

0x08af,	// (0x0004dd79) list_medium_line_t3_right_iconx2_t1

0x08bf,	// (0x0004dd89) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd02,	// (0x0005d1cc) list_medium_line_t3_right_iconx2_t

0x0049,	// (0x0004d513) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0049,	// (0x0004d513) list_medium_line_x3_t4_g4_g1

0x0055,	// (0x0004d51f) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0055,	// (0x0004d51f) list_medium_line_x3_t4_g4_g2

0x020d,	// (0x0004d6d7) list_medium_line_x3_t4_g4_g3_ParamLimits

0x020d,	// (0x0004d6d7) list_medium_line_x3_t4_g4_g3

0x08cd,	// (0x0004dd97) list_medium_line_x3_t4_g4_g4_ParamLimits

0x08cd,	// (0x0004dd97) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd07,	// (0x0005d1d1) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd07,	// (0x0005d1d1) list_medium_line_x3_t4_g4_g

0x08d9,	// (0x0004dda3) list_medium_line_x3_t4_g4_t1_ParamLimits

0x08d9,	// (0x0004dda3) list_medium_line_x3_t4_g4_t1

0x08f0,	// (0x0004ddba) list_medium_line_x3_t4_g4_t2_ParamLimits

0x08f0,	// (0x0004ddba) list_medium_line_x3_t4_g4_t2

0x023a,	// (0x0004d704) list_medium_line_x3_t4_g4_t3_ParamLimits

0x023a,	// (0x0004d704) list_medium_line_x3_t4_g4_t3

0x090b,	// (0x0004ddd5) list_medium_line_x3_t4_g4_t4_ParamLimits

0x090b,	// (0x0004ddd5) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd10,	// (0x0005d1da) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd10,	// (0x0005d1da) list_medium_line_x3_t4_g4_t

0x0928,	// (0x0004ddf2) list_single_dyc_row_text_pane_t1_ParamLimits

0x0928,	// (0x0004ddf2) list_single_dyc_row_text_pane_t1

0x0971,	// (0x0004de3b) list_single_dyc_row_text_pane_t2_ParamLimits

0x0971,	// (0x0004de3b) list_single_dyc_row_text_pane_t2

0x8699,	// (0x00055b63) list_single_dyc_row_text_pane_t3_ParamLimits

0x8699,	// (0x00055b63) list_single_dyc_row_text_pane_t3

0x0005,

0xfd19,	// (0x0005d1e3) list_single_dyc_row_text_pane_t_ParamLimits

0xfd19,	// (0x0005d1e3) list_single_dyc_row_text_pane_t

0x86bd,	// (0x00055b87) list_single_dyc_row_pane_g1_ParamLimits

0x86bd,	// (0x00055b87) list_single_dyc_row_pane_g1

0x86c9,	// (0x00055b93) list_single_dyc_row_pane_g2_ParamLimits

0x86c9,	// (0x00055b93) list_single_dyc_row_pane_g2

0x86d5,	// (0x00055b9f) list_single_dyc_row_pane_g3_ParamLimits

0x86d5,	// (0x00055b9f) list_single_dyc_row_pane_g3

0x86e1,	// (0x00055bab) list_single_dyc_row_pane_g4_ParamLimits

0x86e1,	// (0x00055bab) list_single_dyc_row_pane_g4

0x0003,

0xfd26,	// (0x0005d1f0) list_single_dyc_row_pane_g_ParamLimits

0xfd26,	// (0x0005d1f0) list_single_dyc_row_pane_g

0x86ed,	// (0x00055bb7) list_single_dyc_row_text_pane_ParamLimits

0x86ed,	// (0x00055bb7) list_single_dyc_row_text_pane

0x9878,	// (0x00056d42) bg_sp_fs_scroll_pane

0xe7cc,	// (0x0005bc96) thumb_sp_fs_scroll_pane

0x0450,	// (0x0004d91a) list_medium_line_g1_ParamLimits

0x0450,	// (0x0004d91a) list_medium_line_g1

0x0aa6,	// (0x0004df70) list_medium_line_t1_ParamLimits

0x0aa6,	// (0x0004df70) list_medium_line_t1

0x0049,	// (0x0004d513) list_medium_line_x2_g1_ParamLimits

0x0049,	// (0x0004d513) list_medium_line_x2_g1

0x0055,	// (0x0004d51f) list_medium_line_x2_g2_ParamLimits

0x0055,	// (0x0004d51f) list_medium_line_x2_g2

0x0001,

0xfd2f,	// (0x0005d1f9) list_medium_line_x2_g_ParamLimits

0xfd2f,	// (0x0005d1f9) list_medium_line_x2_g

0x870c,	// (0x00055bd6) list_medium_line_x2_t1_ParamLimits

0x870c,	// (0x00055bd6) list_medium_line_x2_t1

0x0049,	// (0x0004d513) list_medium_line_x3_g1_ParamLimits

0x0049,	// (0x0004d513) list_medium_line_x3_g1

0x0055,	// (0x0004d51f) list_medium_line_x3_g2_ParamLimits

0x0055,	// (0x0004d51f) list_medium_line_x3_g2

0x0001,

0xfd2f,	// (0x0005d1f9) list_medium_line_x3_g_ParamLimits

0xfd2f,	// (0x0005d1f9) list_medium_line_x3_g

0x870c,	// (0x00055bd6) list_medium_line_x3_t1_ParamLimits

0x870c,	// (0x00055bd6) list_medium_line_x3_t1

0xe7d5,	// (0x0005bc9f) thumb_sp_fs_scroll_pane_g1

0xe7de,	// (0x0005bca8) thumb_sp_fs_scroll_pane_g2

0xe7e7,	// (0x0005bcb1) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd34,	// (0x0005d1fe) thumb_sp_fs_scroll_pane_g

0xe7d5,	// (0x0005bc9f) bg_sp_fs_scroll_pane_g1

0xe7de,	// (0x0005bca8) bg_sp_fs_scroll_pane_g2

0xe7e7,	// (0x0005bcb1) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd34,	// (0x0005d1fe) bg_sp_fs_scroll_pane_g

0x0049,	// (0x0004d513) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0049,	// (0x0004d513) list_medium_line_x2_t3_g4_g1

0x00f0,	// (0x0004d5ba) list_medium_line_x2_t3_g4_g2_ParamLimits

0x00f0,	// (0x0004d5ba) list_medium_line_x2_t3_g4_g2

0x0055,	// (0x0004d51f) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0055,	// (0x0004d51f) list_medium_line_x2_t3_g4_g3

0x0061,	// (0x0004d52b) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0061,	// (0x0004d52b) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0005c771) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0005c771) list_medium_line_x2_t3_g4_g

0x0abb,	// (0x0004df85) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0abb,	// (0x0004df85) list_medium_line_x2_t3_g4_t1

0x0ad5,	// (0x0004df9f) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0ad5,	// (0x0004df9f) list_medium_line_x2_t3_g4_t2

0x0096,	// (0x0004d560) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0096,	// (0x0004d560) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd3b,	// (0x0005d205) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd3b,	// (0x0005d205) list_medium_line_x2_t3_g4_t

0x0450,	// (0x0004d91a) list_medium_line_g2_g1_ParamLimits

0x0450,	// (0x0004d91a) list_medium_line_g2_g1

0x045c,	// (0x0004d926) list_medium_line_g2_g2_ParamLimits

0x045c,	// (0x0004d926) list_medium_line_g2_g2

0x0001,

0xf9e9,	// (0x0005ceb3) list_medium_line_g2_g_ParamLimits

0xf9e9,	// (0x0005ceb3) list_medium_line_g2_g

0x0aef,	// (0x0004dfb9) list_medium_line_g2_t1_ParamLimits

0x0aef,	// (0x0004dfb9) list_medium_line_g2_t1

0x0450,	// (0x0004d91a) list_medium_line_t3_g2_g1_ParamLimits

0x0450,	// (0x0004d91a) list_medium_line_t3_g2_g1

0x045c,	// (0x0004d926) list_medium_line_t3_g2_g2_ParamLimits

0x045c,	// (0x0004d926) list_medium_line_t3_g2_g2

0x0001,

0xf9e9,	// (0x0005ceb3) list_medium_line_t3_g2_g_ParamLimits

0xf9e9,	// (0x0005ceb3) list_medium_line_t3_g2_g

0x0b04,	// (0x0004dfce) list_medium_line_t3_g2_t1_ParamLimits

0x0b04,	// (0x0004dfce) list_medium_line_t3_g2_t1

0x0b1e,	// (0x0004dfe8) list_medium_line_t3_g2_t2_ParamLimits

0x0b1e,	// (0x0004dfe8) list_medium_line_t3_g2_t2

0x0b34,	// (0x0004dffe) list_medium_line_t3_g2_t3_ParamLimits

0x0b34,	// (0x0004dffe) list_medium_line_t3_g2_t3

0x0002,

0xfd42,	// (0x0005d20c) list_medium_line_t3_g2_t_ParamLimits

0xfd42,	// (0x0005d20c) list_medium_line_t3_g2_t

0x07a0,	// (0x0004dc6a) list_medium_line_right_icon_g1

0x0b4e,	// (0x0004e018) list_medium_line_right_icon_t1

0x0450,	// (0x0004d91a) list_medium_line_t2_g1_ParamLimits

0x0450,	// (0x0004d91a) list_medium_line_t2_g1

0x0b5c,	// (0x0004e026) list_medium_line_t2_t1_ParamLimits

0x0b5c,	// (0x0004e026) list_medium_line_t2_t1

0x0b76,	// (0x0004e040) list_medium_line_t2_t2_ParamLimits

0x0b76,	// (0x0004e040) list_medium_line_t2_t2

0x0001,

0xfd49,	// (0x0005d213) list_medium_line_t2_t_ParamLimits

0xfd49,	// (0x0005d213) list_medium_line_t2_t

0x0450,	// (0x0004d91a) list_medium_line_t3_g1_ParamLimits

0x0450,	// (0x0004d91a) list_medium_line_t3_g1

0x0b8f,	// (0x0004e059) list_medium_line_t3_t1_ParamLimits

0x0b8f,	// (0x0004e059) list_medium_line_t3_t1

0x0ba9,	// (0x0004e073) list_medium_line_t3_t2_ParamLimits

0x0ba9,	// (0x0004e073) list_medium_line_t3_t2

0x0bbf,	// (0x0004e089) list_medium_line_t3_t3_ParamLimits

0x0bbf,	// (0x0004e089) list_medium_line_t3_t3

0x0002,

0xfd4e,	// (0x0005d218) list_medium_line_t3_t_ParamLimits

0xfd4e,	// (0x0005d218) list_medium_line_t3_t

0x0450,	// (0x0004d91a) list_medium_line_g3_g1_ParamLimits

0x0450,	// (0x0004d91a) list_medium_line_g3_g1

0x0bd4,	// (0x0004e09e) list_medium_line_g3_g2_ParamLimits

0x0bd4,	// (0x0004e09e) list_medium_line_g3_g2

0x045c,	// (0x0004d926) list_medium_line_g3_g3_ParamLimits

0x045c,	// (0x0004d926) list_medium_line_g3_g3

0x0002,

0xfd55,	// (0x0005d21f) list_medium_line_g3_g_ParamLimits

0xfd55,	// (0x0005d21f) list_medium_line_g3_g

0x0be0,	// (0x0004e0aa) list_medium_line_g3_t1_ParamLimits

0x0be0,	// (0x0004e0aa) list_medium_line_g3_t1

0x0450,	// (0x0004d91a) list_medium_line_t2_g3_g1_ParamLimits

0x0450,	// (0x0004d91a) list_medium_line_t2_g3_g1

0x0bd4,	// (0x0004e09e) list_medium_line_t2_g3_g2_ParamLimits

0x0bd4,	// (0x0004e09e) list_medium_line_t2_g3_g2

0x045c,	// (0x0004d926) list_medium_line_t2_g3_g3_ParamLimits

0x045c,	// (0x0004d926) list_medium_line_t2_g3_g3

0x0002,

0xfd55,	// (0x0005d21f) list_medium_line_t2_g3_g_ParamLimits

0xfd55,	// (0x0005d21f) list_medium_line_t2_g3_g

0x0bf5,	// (0x0004e0bf) list_medium_line_t2_g3_t1_ParamLimits

0x0bf5,	// (0x0004e0bf) list_medium_line_t2_g3_t1

0x0c0f,	// (0x0004e0d9) list_medium_line_t2_g3_t2_ParamLimits

0x0c0f,	// (0x0004e0d9) list_medium_line_t2_g3_t2

0x0001,

0xfd5c,	// (0x0005d226) list_medium_line_t2_g3_t_ParamLimits

0xfd5c,	// (0x0005d226) list_medium_line_t2_g3_t

0x0450,	// (0x0004d91a) list_medium_line_t3_g3_g1_ParamLimits

0x0450,	// (0x0004d91a) list_medium_line_t3_g3_g1

0x0bd4,	// (0x0004e09e) list_medium_line_t3_g3_g2_ParamLimits

0x0bd4,	// (0x0004e09e) list_medium_line_t3_g3_g2

0x045c,	// (0x0004d926) list_medium_line_t3_g3_g3_ParamLimits

0x045c,	// (0x0004d926) list_medium_line_t3_g3_g3

0x0002,

0xfd55,	// (0x0005d21f) list_medium_line_t3_g3_g_ParamLimits

0xfd55,	// (0x0005d21f) list_medium_line_t3_g3_g

0x0c2d,	// (0x0004e0f7) list_medium_line_t3_g3_t1_ParamLimits

0x0c2d,	// (0x0004e0f7) list_medium_line_t3_g3_t1

0x0c46,	// (0x0004e110) list_medium_line_t3_g3_t2_ParamLimits

0x0c46,	// (0x0004e110) list_medium_line_t3_g3_t2

0x0c5c,	// (0x0004e126) list_medium_line_t3_g3_t3_ParamLimits

0x0c5c,	// (0x0004e126) list_medium_line_t3_g3_t3

0x0002,

0xfd61,	// (0x0005d22b) list_medium_line_t3_g3_t_ParamLimits

0xfd61,	// (0x0005d22b) list_medium_line_t3_g3_t

0x089d,	// (0x0004dd67) list_medium_line_right_iconx2_g1

0x07a0,	// (0x0004dc6a) list_medium_line_right_iconx2_g2

0x0001,

0xfd68,	// (0x0005d232) list_medium_line_right_iconx2_g

0x0c76,	// (0x0004e140) list_medium_line_right_iconx2_t1

0x089d,	// (0x0004dd67) list_medium_line_t2_right_iconx2_g1

0x07a0,	// (0x0004dc6a) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd68,	// (0x0005d232) list_medium_line_t2_right_iconx2_g

0x0c84,	// (0x0004e14e) list_medium_line_t2_right_iconx2_t1

0x0c94,	// (0x0004e15e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd6d,	// (0x0005d237) list_medium_line_t2_right_iconx2_t

0x0ca6,	// (0x0004e170) list_medium_line_x4_t4_t1

0x0cb4,	// (0x0004e17e) list_medium_line_x4_t4_t2

0x0cc4,	// (0x0004e18e) list_medium_line_x4_t4_t3

0x0cd4,	// (0x0004e19e) list_medium_line_x4_t4_t4

0x0003,

0xfd72,	// (0x0005d23c) list_medium_line_x4_t4_t

0x8765,	// (0x00055c2f) tport_appsw_pane_ParamLimits

0x8765,	// (0x00055c2f) tport_appsw_pane

0x877d,	// (0x00055c47) tport_contact_pane_ParamLimits

0x877d,	// (0x00055c47) tport_contact_pane

0x8795,	// (0x00055c5f) tport_listscroll_pane_ParamLimits

0x8795,	// (0x00055c5f) tport_listscroll_pane

0x87af,	// (0x00055c79) cell_tport_appsw_pane_ParamLimits

0x87af,	// (0x00055c79) cell_tport_appsw_pane

0xd6bf,	// (0x0005ab89) tport_appsw_pane_g1_ParamLimits

0xd6bf,	// (0x0005ab89) tport_appsw_pane_g1

0xe7f0,	// (0x0005bcba) tport_contact_pane_g1

0xe1b0,	// (0x0005b67a) tport_contact_pane_t1

0xe7f9,	// (0x0005bcc3) tport_contact_pane_t2

0x0001,

0xfd7b,	// (0x0005d245) tport_contact_pane_t

0xe807,	// (0x0005bcd1) list_tport_pane

0xe810,	// (0x0005bcda) scroll_pane_cp_030

0x87f7,	// (0x00055cc1) cell_tport_appsw_pane_g1

0x8807,	// (0x00055cd1) cell_tport_appsw_pane_t1

0x8815,	// (0x00055cdf) grid_highlight_pane_cp019

0x881d,	// (0x00055ce7) list_tport_double_graphic_pane_ParamLimits

0x881d,	// (0x00055ce7) list_tport_double_graphic_pane

0xa757,	// (0x00057c21) list_highlight_pane_cp023_ParamLimits

0xa757,	// (0x00057c21) list_highlight_pane_cp023

0x882a,	// (0x00055cf4) list_tport_double_graphic_pane_g1_ParamLimits

0x882a,	// (0x00055cf4) list_tport_double_graphic_pane_g1

0x8837,	// (0x00055d01) list_tport_double_graphic_pane_t1_ParamLimits

0x8837,	// (0x00055d01) list_tport_double_graphic_pane_t1

0x884c,	// (0x00055d16) list_tport_double_graphic_pane_t2_ParamLimits

0x884c,	// (0x00055d16) list_tport_double_graphic_pane_t2

0x0001,

0xfd87,	// (0x0005d251) list_tport_double_graphic_pane_t_ParamLimits

0xfd87,	// (0x0005d251) list_tport_double_graphic_pane_t

0x9878,	// (0x00056d42) main_cale_note_pane

0x6819,	// (0x00053ce3) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6819,	// (0x00053ce3) cell_vitu2_function_top_wide_pane_cp01

0x80bf,	// (0x00055589) wait_bar_pane_cp05_ParamLimits

0xa757,	// (0x00057c21) listscroll_cmail_pane

0xe819,	// (0x0005bce3) list_cmail_pane

0x885e,	// (0x00055d28) list_cmail_body_pane

0x8873,	// (0x00055d3d) list_single_cmail_header_caption_pane

0x8889,	// (0x00055d53) list_single_cmail_header_detail_pane_ParamLimits

0x8889,	// (0x00055d53) list_single_cmail_header_detail_pane

0xe829,	// (0x0005bcf3) list_single_cmail_header_caption_pane_t1

0x0ce4,	// (0x0004e1ae) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0ce4,	// (0x0004e1ae) list_single_cmail_header_detail_pane_g1

0x88b2,	// (0x00055d7c) list_single_cmail_header_detail_pane_g2_ParamLimits

0x88b2,	// (0x00055d7c) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd8c,	// (0x0005d256) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd8c,	// (0x0005d256) list_single_cmail_header_detail_pane_g

0x88be,	// (0x00055d88) list_single_cmail_header_detail_pane_t1_ParamLimits

0x88be,	// (0x00055d88) list_single_cmail_header_detail_pane_t1

0x891e,	// (0x00055de8) list_single_cmail_header_editor_pane_bg_ParamLimits

0x891e,	// (0x00055de8) list_single_cmail_header_editor_pane_bg

0xe30d,	// (0x0005b7d7) list_cmail_body_pane_g1

0xe84d,	// (0x0005bd17) list_cmail_body_pane_t1

0xd6df,	// (0x0005aba9) list_single_cmail_header_editor_pane_bg_g1

0xacdb,	// (0x000581a5) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6ef,	// (0x0005abb9) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6e7,	// (0x0005abb1) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd91e,	// (0x0005ade8) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd70f,	// (0x0005abd9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6ff,	// (0x0005abc9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd707,	// (0x0005abd1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xacbb,	// (0x00058185) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8935,	// (0x00055dff) calenote_gesture_pane_ParamLimits

0x8935,	// (0x00055dff) calenote_gesture_pane

0x8955,	// (0x00055e1f) calenote_window_pane_ParamLimits

0x8955,	// (0x00055e1f) calenote_window_pane

0xe85b,	// (0x0005bd25) popup_note_window_cp01

0x8971,	// (0x00055e3b) calenote_swipe_1_pane_ParamLimits

0x8971,	// (0x00055e3b) calenote_swipe_1_pane

0x849c,	// (0x00055966) calenote_swipe_2_pane_ParamLimits

0x849c,	// (0x00055966) calenote_swipe_2_pane

0xe65e,	// (0x0005bb28) calenote_swipe_1_pane_g1_ParamLimits

0xe65e,	// (0x0005bb28) calenote_swipe_1_pane_g1

0xe66b,	// (0x0005bb35) calenote_swipe_1_pane_g2_ParamLimits

0xe66b,	// (0x0005bb35) calenote_swipe_1_pane_g2

0x0001,

0xfcac,	// (0x0005d176) calenote_swipe_1_pane_g_ParamLimits

0xfcac,	// (0x0005d176) calenote_swipe_1_pane_g

0xe86d,	// (0x0005bd37) calenote_swipe_1_pane_t1_ParamLimits

0xe86d,	// (0x0005bd37) calenote_swipe_1_pane_t1

0xe65e,	// (0x0005bb28) calenote_swipe_2_pane_g1_ParamLimits

0xe65e,	// (0x0005bb28) calenote_swipe_2_pane_g1

0xe88c,	// (0x0005bd56) calenote_swipe_2_pane_g2_ParamLimits

0xe88c,	// (0x0005bd56) calenote_swipe_2_pane_g2

0x0001,

0xfd98,	// (0x0005d262) calenote_swipe_2_pane_g_ParamLimits

0xfd98,	// (0x0005d262) calenote_swipe_2_pane_g

0xe898,	// (0x0005bd62) calenote_swipe_2_pane_t1_ParamLimits

0xe898,	// (0x0005bd62) calenote_swipe_2_pane_t1

0x9878,	// (0x00056d42) main_mup_navstr_pane

0x545a,	// (0x00052924) main_mup3_pane_t7_ParamLimits

0x545a,	// (0x00052924) main_mup3_pane_t7

0xa23b,	// (0x00057705) main_mp4_pane_g6_ParamLimits

0xa23b,	// (0x00057705) main_mp4_pane_g6

0xa3fd,	// (0x000578c7) main_image3_pane_t4_ParamLimits

0xa3fd,	// (0x000578c7) main_image3_pane_t4

0x8986,	// (0x00055e50) popup_navstr_preview_pane_ParamLimits

0x8986,	// (0x00055e50) popup_navstr_preview_pane

0x899a,	// (0x00055e64) scroll_navstr_pane_ParamLimits

0x899a,	// (0x00055e64) scroll_navstr_pane

0x9878,	// (0x00056d42) bg_popup_preview_window_pane_cp04

0xe8bf,	// (0x0005bd89) popup_navstr_preview_pane_t1

0x89ae,	// (0x00055e78) scroll_navstr_pane_g1_ParamLimits

0x89ae,	// (0x00055e78) scroll_navstr_pane_g1

0x89c2,	// (0x00055e8c) scroll_navstr_pane_t1_ParamLimits

0x89c2,	// (0x00055e8c) scroll_navstr_pane_t1

0xe864,	// (0x0005bd2e) bg_button_pane_cp014

0xe864,	// (0x0005bd2e) bg_button_pane_cp030

0x0746,	// (0x0004dc10) list_double_fisheye_pane_g4_ParamLimits

0x0746,	// (0x0004dc10) list_double_fisheye_pane_g4

0x0752,	// (0x0004dc1c) list_double_fisheye_pane_g5_ParamLimits

0x0752,	// (0x0004dc1c) list_double_fisheye_pane_g5

0xc483,	// (0x0005994d) sp_fs_scroll_pane_cp03

0xe77e,	// (0x0005bc48) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe78a,	// (0x0005bc54) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcc9,	// (0x0005d193) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x858a,	// (0x00055a54) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe821,	// (0x0005bceb) sp_fs_scroll_pane_cp02

0xa9c1,	// (0x00057e8b) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa9c1,	// (0x00057e8b) popup_sp_fs_calendar_preview_list_single_pane

0x9878,	// (0x00056d42) main_cam6_pano_pane

0xa757,	// (0x00057c21) main_mup3_pane_ParamLimits

0x9878,	// (0x00056d42) main_phacti_pane

0x7f92,	// (0x0005545c) bg_button_pane_cp11

0x7fac,	// (0x00055476) main_mobtv_info_pane_g2_ParamLimits

0x7fac,	// (0x00055476) main_mobtv_info_pane_g2

0x0001,

0xfc29,	// (0x0005d0f3) main_mobtv_info_pane_g_ParamLimits

0xfc29,	// (0x0005d0f3) main_mobtv_info_pane_g

0x8189,	// (0x00055653) sc_clock_pane_t5_ParamLimits

0x8189,	// (0x00055653) sc_clock_pane_t5

0x8251,	// (0x0005571b) main_radioblah_pane_g1_ParamLimits

0xe5aa,	// (0x0005ba74) main_radioblah_pane_t3_ParamLimits

0xe5aa,	// (0x0005ba74) main_radioblah_pane_t3

0xe5c2,	// (0x0005ba8c) main_radioblah_pane_t4_ParamLimits

0xe5c2,	// (0x0005ba8c) main_radioblah_pane_t4

0x8279,	// (0x00055743) main_radioblah_text_pane_ParamLimits

0x8279,	// (0x00055743) main_radioblah_text_pane

0x828b,	// (0x00055755) main_radioblah_info_pane_g1_ParamLimits

0x8324,	// (0x000557ee) main_radioblah_info_pane_t4_ParamLimits

0x8324,	// (0x000557ee) main_radioblah_info_pane_t4

0xa757,	// (0x00057c21) main_sp_fs_calendar_pane

0x89d9,	// (0x00055ea3) main_phacti_pane_g1

0x89e1,	// (0x00055eab) phacti_note_pane_ParamLimits

0x89e1,	// (0x00055eab) phacti_note_pane

0xe8d6,	// (0x0005bda0) phacti_term_pane_ParamLimits

0xe8d6,	// (0x0005bda0) phacti_term_pane

0xe8eb,	// (0x0005bdb5) phacti_note_pane_t1_ParamLimits

0xe8eb,	// (0x0005bdb5) phacti_note_pane_t1

0x89f5,	// (0x00055ebf) phacti_term_pane_g1

0x89fd,	// (0x00055ec7) phacti_term_pane_t1_ParamLimits

0x89fd,	// (0x00055ec7) phacti_term_pane_t1

0xe902,	// (0x0005bdcc) popup_sp_fs_calendar_preview_list_single_pane_g1

0xaa60,	// (0x00057f2a) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfda2,	// (0x0005d26c) popup_sp_fs_calendar_preview_list_single_pane_g

0xe90a,	// (0x0005bdd4) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe90a,	// (0x0005bdd4) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe920,	// (0x0005bdea) aid_popup_sp_fs_bg_corner_pane

0xcd08,	// (0x0005a1d2) popup_sp_fs_calendar_preview_bg_pane_g1

0x9878,	// (0x00056d42) popup_sp_fs_calendar_preview_bg_pane

0xe928,	// (0x0005bdf2) popup_sp_fs_calendar_preview_list_pane

0xc900,	// (0x00059dca) bg_main_sp_fs_cale_pane_ParamLimits

0xc900,	// (0x00059dca) bg_main_sp_fs_cale_pane

0x8a91,	// (0x00055f5b) listscroll_cale_mrui_pane_ParamLimits

0x8a91,	// (0x00055f5b) listscroll_cale_mrui_pane

0x8aa6,	// (0x00055f70) listscroll_sp_fs_schedule_track_pane

0x8aaf,	// (0x00055f79) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x8aaf,	// (0x00055f79) main_sp_fs_ctrlbar_pane_cp01

0xe930,	// (0x0005bdfa) main_sp_fs_ribbon_pane

0x8ac2,	// (0x00055f8c) popup_sp_fs_cale_preview_window

0x8ad4,	// (0x00055f9e) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8ad4,	// (0x00055f9e) list_single_sp_fs_schedule_track_pane

0xa757,	// (0x00057c21) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa757,	// (0x00057c21) bg_sp_fs_highlight_list_pane_cp03

0x8ae7,	// (0x00055fb1) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8ae7,	// (0x00055fb1) list_single_sp_fs_schedule_track_pane_g1

0x8af3,	// (0x00055fbd) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8af3,	// (0x00055fbd) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfda7,	// (0x0005d271) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfda7,	// (0x0005d271) list_single_sp_fs_schedule_track_pane_g

0x8aff,	// (0x00055fc9) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8aff,	// (0x00055fc9) list_single_sp_fs_schedule_track_pane_t1

0x8b19,	// (0x00055fe3) sp_fs_schedule_track_pane_ParamLimits

0x8b19,	// (0x00055fe3) sp_fs_schedule_track_pane

0xe938,	// (0x0005be02) sp_fs_schedule_track_pane_g1

0xe940,	// (0x0005be0a) sp_fs_schedule_track_pane_g2

0xe948,	// (0x0005be12) sp_fs_schedule_track_pane_g3

0xe950,	// (0x0005be1a) sp_fs_schedule_track_pane_g4

0xe958,	// (0x0005be22) sp_fs_schedule_track_pane_g5

0x0004,

0xfdac,	// (0x0005d276) sp_fs_schedule_track_pane_g

0xd6df,	// (0x0005aba9) bg_sp_fs_schedule_viewer_highlight_g1

0xacdb,	// (0x000581a5) bg_sp_fs_schedule_viewer_highlight_g2

0xd6e7,	// (0x0005abb1) bg_sp_fs_schedule_viewer_highlight_g3

0xd6ef,	// (0x0005abb9) bg_sp_fs_schedule_viewer_highlight_g4

0xd91e,	// (0x0005ade8) bg_sp_fs_schedule_viewer_highlight_g5

0xd6ff,	// (0x0005abc9) bg_sp_fs_schedule_viewer_highlight_g6

0xd707,	// (0x0005abd1) bg_sp_fs_schedule_viewer_highlight_g7

0xd70f,	// (0x0005abd9) bg_sp_fs_schedule_viewer_highlight_g8

0xacbb,	// (0x00058185) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdb7,	// (0x0005d281) bg_sp_fs_schedule_viewer_highlight_g

0x9878,	// (0x00056d42) bg_main_sp_fs_ribbon_pane

0x8b2a,	// (0x00055ff4) main_sp_fs_ribbon_pane_g1

0xe960,	// (0x0005be2a) main_sp_fs_ribbon_pane_t1

0x8b33,	// (0x00055ffd) main_sp_fs_ribbon_pane_t2

0xe96f,	// (0x0005be39) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdca,	// (0x0005d294) main_sp_fs_ribbon_pane_t

0xe97e,	// (0x0005be48) main_sp_fs_ribbon_scheduler_pane

0xe986,	// (0x0005be50) bg_main_sp_fs_ribbon_pane_g1

0xe98f,	// (0x0005be59) bg_main_sp_fs_ribbon_pane_g2

0xe998,	// (0x0005be62) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdd1,	// (0x0005d29b) bg_main_sp_fs_ribbon_pane_g

0xe9a0,	// (0x0005be6a) main_sp_fs_ribbon_scheduler_pane_g1

0xe9a9,	// (0x0005be73) main_sp_fs_ribbon_scheduler_pane_g2

0xe9b2,	// (0x0005be7c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdd8,	// (0x0005d2a2) main_sp_fs_ribbon_scheduler_pane_g

0xe9bb,	// (0x0005be85) list_cale_mrui_pane

0x8b42,	// (0x0005600c) sp_fs_scroll_pane_cp07_ParamLimits

0x8b42,	// (0x0005600c) sp_fs_scroll_pane_cp07

0x8b5e,	// (0x00056028) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8b5e,	// (0x00056028) bg_sp_fs_schedule_viewer_highlight

0xe9c8,	// (0x0005be92) list_single_sp_fs_schedule_track_pane_cp01

0xe9d0,	// (0x0005be9a) list_sp_fs_schedule_track_pane

0xe9d8,	// (0x0005bea2) sp_fs_scroll_pane_cp06_ParamLimits

0xe9d8,	// (0x0005bea2) sp_fs_scroll_pane_cp06

0xcd08,	// (0x0005a1d2) bgmain_sp_fs_calendar_pane_g1

0x0cfc,	// (0x0004e1c6) list_single_cale_mrui_pane_ParamLimits

0x0cfc,	// (0x0004e1c6) list_single_cale_mrui_pane

0x8b6e,	// (0x00056038) list_single_cale_mrui_row_pane_ParamLimits

0x8b6e,	// (0x00056038) list_single_cale_mrui_row_pane

0x8b7b,	// (0x00056045) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8b7b,	// (0x00056045) list_single_cale_mrui_row_pane_g1

0xa62c,	// (0x00057af6) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa62c,	// (0x00057af6) list_single_cale_mrui_row_pane_t1

0x0d1d,	// (0x0004e1e7) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0d1d,	// (0x0004e1e7) list_single_cale_mrui_row_pane_t2

0xa63e,	// (0x00057b08) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa63e,	// (0x00057b08) list_single_cale_mrui_row_pane_t3

0xa66d,	// (0x00057b37) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa66d,	// (0x00057b37) list_single_cale_mrui_row_pane_t4

0x0003,

0xfde6,	// (0x0005d2b0) list_single_cale_mrui_row_pane_t_ParamLimits

0xfde6,	// (0x0005d2b0) list_single_cale_mrui_row_pane_t

0x0d85,	// (0x0004e24f) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0d85,	// (0x0004e24f) list_single_cmail_header_editor_pane_bg_cp01

0x0dab,	// (0x0004e275) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0dab,	// (0x0004e275) list_single_cmail_header_editor_pane_bg_cp02

0x8bb3,	// (0x0005607d) main_radioblah_text_pane_t1_ParamLimits

0x8bb3,	// (0x0005607d) main_radioblah_text_pane_t1

0xe9f7,	// (0x0005bec1) cam6_indi_pane_cp01

0xe9ff,	// (0x0005bec9) cam6_mode_pane_cp01

0xea07,	// (0x0005bed1) cam6_pano_pane

0xea10,	// (0x0005beda) cam6_zoom_pane_cp01

0xea18,	// (0x0005bee2) cam6_pano_image_pane

0xea23,	// (0x0005beed) cam6_pano_pane_g1

0xe30d,	// (0x0005b7d7) cam6_pano_pane_g2

0xea2c,	// (0x0005bef6) cam6_pano_pane_g3

0xea35,	// (0x0005beff) cam6_pano_pane_g4

0xd2eb,	// (0x0005a7b5) cam6_pano_pane_g5

0xea3e,	// (0x0005bf08) cam6_pano_pane_g6

0xea48,	// (0x0005bf12) cam6_pano_pane_g7

0xea50,	// (0x0005bf1a) cam6_pano_pane_g8

0xea59,	// (0x0005bf23) cam6_pano_pane_g9

0x0008,

0xfdef,	// (0x0005d2b9) cam6_pano_pane_g

0x9878,	// (0x00056d42) main_browser_tag_pane

0xe8b7,	// (0x0005bd81) grid_navstr_albumart_pane

0xea64,	// (0x0005bf2e) cell_navstr_albumart_pane_ParamLimits

0xea64,	// (0x0005bf2e) cell_navstr_albumart_pane

0xea84,	// (0x0005bf4e) cell_navstr_albumart_pane_g1

0xc711,	// (0x00059bdb) cell_navstr_albumart_pane_g2

0xc721,	// (0x00059beb) cell_navstr_albumart_pane_g3

0xc719,	// (0x00059be3) cell_navstr_albumart_pane_g4

0x0003,

0xfe02,	// (0x0005d2cc) cell_navstr_albumart_pane_g

0x8bcd,	// (0x00056097) bt_list_pane_ParamLimits

0x8bcd,	// (0x00056097) bt_list_pane

0x8be1,	// (0x000560ab) bt_list_pane_t1

0x8bf0,	// (0x000560ba) bt_list_pane_t2

0x0001,

0xfe0b,	// (0x0005d2d5) bt_list_pane_t

0x9878,	// (0x00056d42) main_cale_prevew_pane

0x8bff,	// (0x000560c9) popup_cale_preview_window_ParamLimits

0x8bff,	// (0x000560c9) popup_cale_preview_window

0xa757,	// (0x00057c21) bg_popup_preview_window_pane_cp05_ParamLimits

0xa757,	// (0x00057c21) bg_popup_preview_window_pane_cp05

0xea8c,	// (0x0005bf56) list_cale_preview_pane_ParamLimits

0xea8c,	// (0x0005bf56) list_cale_preview_pane

0x8c1a,	// (0x000560e4) list_double_cale_preview_pane_ParamLimits

0x8c1a,	// (0x000560e4) list_double_cale_preview_pane

0x8c2c,	// (0x000560f6) list_single_cale_preview_pane_ParamLimits

0x8c2c,	// (0x000560f6) list_single_cale_preview_pane

0x8c42,	// (0x0005610c) list_single_cale_preview_pane_g1

0x8c4a,	// (0x00056114) list_single_cale_preview_pane_t1_ParamLimits

0x8c4a,	// (0x00056114) list_single_cale_preview_pane_t1

0x8c5f,	// (0x00056129) list_double_cale_preview_pane_g1

0x8c67,	// (0x00056131) list_double_cale_preview_pane_t1_ParamLimits

0x8c67,	// (0x00056131) list_double_cale_preview_pane_t1

0x8c7c,	// (0x00056146) list_double_cale_preview_pane_t2_ParamLimits

0x8c7c,	// (0x00056146) list_double_cale_preview_pane_t2

0x0001,

0xfe10,	// (0x0005d2da) list_double_cale_preview_pane_t_ParamLimits

0xfe10,	// (0x0005d2da) list_double_cale_preview_pane_t

0x9878,	// (0x00056d42) main_ezdial_pane

0xa757,	// (0x00057c21) main_sp_fs_email_pane_ParamLimits

0x84fa,	// (0x000559c4) cmail_ddmenu_btn01_pane_ParamLimits

0x84fa,	// (0x000559c4) cmail_ddmenu_btn01_pane

0x850d,	// (0x000559d7) cmail_ddmenu_btn02_pane_ParamLimits

0x850d,	// (0x000559d7) cmail_ddmenu_btn02_pane

0x8530,	// (0x000559fa) cmail_ddmenu_btn03_pane_ParamLimits

0x8530,	// (0x000559fa) cmail_ddmenu_btn03_pane

0x85c9,	// (0x00055a93) main_sp_fs_ctrlbar_pane_ParamLimits

0x85ed,	// (0x00055ab7) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x885e,	// (0x00055d28) list_cmail_body_pane_ParamLimits

0xe837,	// (0x0005bd01) bg_button_pane_cp12

0xe840,	// (0x0005bd0a) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe840,	// (0x0005bd0a) list_single_cmail_header_detail_pane_g3

0x88fa,	// (0x00055dc4) list_single_cmail_header_detail_pane_t2_ParamLimits

0x88fa,	// (0x00055dc4) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd93,	// (0x0005d25d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd93,	// (0x0005d25d) list_single_cmail_header_detail_pane_t

0x8a12,	// (0x00055edc) phacti_term_pane_t2_ParamLimits

0x8a12,	// (0x00055edc) phacti_term_pane_t2

0x0001,

0xfd9d,	// (0x0005d267) phacti_term_pane_t_ParamLimits

0xfd9d,	// (0x0005d267) phacti_term_pane_t

0xea98,	// (0x0005bf62) aid_size_list_single_double

0x8c94,	// (0x0005615e) popup_ezdial_listscroll_window

0x8cb0,	// (0x0005617a) popup_number_entry_window_cp01

0xaa82,	// (0x00057f4c) bg_popup_call_pane_cp09

0xeaa4,	// (0x0005bf6e) ezdial_list_pane

0xeaac,	// (0x0005bf76) scroll_pane_cp23

0xc900,	// (0x00059dca) bg_button_pane_cp028_ParamLimits

0xc900,	// (0x00059dca) bg_button_pane_cp028

0x8cbe,	// (0x00056188) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8cbe,	// (0x00056188) cmail_ddmenu_btn01_pane_g1

0x8cca,	// (0x00056194) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8cca,	// (0x00056194) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe15,	// (0x0005d2df) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe15,	// (0x0005d2df) cmail_ddmenu_btn01_pane_g

0xeab4,	// (0x0005bf7e) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeab4,	// (0x0005bf7e) cmail_ddmenu_btn01_pane_t1

0xc900,	// (0x00059dca) bg_button_pane_cp029_ParamLimits

0xc900,	// (0x00059dca) bg_button_pane_cp029

0x8cd6,	// (0x000561a0) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8cd6,	// (0x000561a0) cmail_ddmenu_btn02_pane_g1

0x8cee,	// (0x000561b8) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8cee,	// (0x000561b8) cmail_ddmenu_btn02_pane_t1

0xa757,	// (0x00057c21) bg_button_pane_cp031_ParamLimits

0xa757,	// (0x00057c21) bg_button_pane_cp031

0x8cd6,	// (0x000561a0) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8cd6,	// (0x000561a0) cmail_ddmenu_btn03_pane_g1

0x8cee,	// (0x000561b8) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8cee,	// (0x000561b8) cmail_ddmenu_btn03_pane_t1

0x6001,	// (0x000534cb) cell_dialer2_keypad_pane_t1_ParamLimits

0x601b,	// (0x000534e5) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x601b,	// (0x000534e5) cell_dialer2_keypad_pane_t1_copy1

0x7db5,	// (0x0005527f) ncimui_group_button_pane

0xa757,	// (0x00057c21) main_sp_fs_calendar_pane_ParamLimits

0x8873,	// (0x00055d3d) list_single_cmail_header_caption_pane_ParamLimits

0x8a45,	// (0x00055f0f) aid_recal_txt_sm_pane

0x9878,	// (0x00056d42) mian_recal_day_pane

0x8ac2,	// (0x00055f8c) popup_sp_fs_cale_preview_window_ParamLimits

0xeac9,	// (0x0005bf93) list_recal_day_pane

0xa6b7,	// (0x00057b81) list_single_recal_day_pane_ParamLimits

0xa6b7,	// (0x00057b81) list_single_recal_day_pane

0xeaf0,	// (0x0005bfba) list_single_recal_day_pane_g1_ParamLimits

0xeaf0,	// (0x0005bfba) list_single_recal_day_pane_g1

0xa6c9,	// (0x00057b93) list_single_recal_day_pane_g2_ParamLimits

0xa6c9,	// (0x00057b93) list_single_recal_day_pane_g2

0xa6d5,	// (0x00057b9f) list_single_recal_day_pane_g3_ParamLimits

0xa6d5,	// (0x00057b9f) list_single_recal_day_pane_g3

0x0dcb,	// (0x0004e295) list_single_recal_day_pane_g4_ParamLimits

0x0dcb,	// (0x0004e295) list_single_recal_day_pane_g4

0xa6e1,	// (0x00057bab) list_single_recal_day_pane_g5_ParamLimits

0xa6e1,	// (0x00057bab) list_single_recal_day_pane_g5

0xa6ed,	// (0x00057bb7) list_single_recal_day_pane_g6_ParamLimits

0xa6ed,	// (0x00057bb7) list_single_recal_day_pane_g6

0x0004,

0xfe24,	// (0x0005d2ee) list_single_recal_day_pane_g_ParamLimits

0xfe24,	// (0x0005d2ee) list_single_recal_day_pane_g

0xa701,	// (0x00057bcb) list_single_recal_day_pane_t1

0xa713,	// (0x00057bdd) list_single_recal_day_pane_t2

0x0001,

0xfe2f,	// (0x0005d2f9) list_single_recal_day_pane_t

0x8d12,	// (0x000561dc) ncimui_query_button_pane_ParamLimits

0x8d12,	// (0x000561dc) ncimui_query_button_pane

0x8d22,	// (0x000561ec) ncimui_query_button_pane_t1_ParamLimits

0x8d22,	// (0x000561ec) ncimui_query_button_pane_t1

0xeafc,	// (0x0005bfc6) ncimui_query_button_pane_t2_ParamLimits

0xeafc,	// (0x0005bfc6) ncimui_query_button_pane_t2

0x0001,

0xfe34,	// (0x0005d2fe) ncimui_query_button_pane_t_ParamLimits

0xfe34,	// (0x0005d2fe) ncimui_query_button_pane_t

0x8d35,	// (0x000561ff) query_button_pane_ParamLimits

0x8d35,	// (0x000561ff) query_button_pane

0x9878,	// (0x00056d42) bg_button_pane_cp0028

0xeb0f,	// (0x0005bfd9) query_button_pane_t1

0x4079,	// (0x00051543) main_tport_pane_ParamLimits

0x8722,	// (0x00055bec) bg_popup_window_pane_cp01_ParamLimits

0x8722,	// (0x00055bec) bg_popup_window_pane_cp01

0x873d,	// (0x00055c07) heading_pane_cp08_ParamLimits

0x873d,	// (0x00055c07) heading_pane_cp08

0x8750,	// (0x00055c1a) heading_pane_cp07_ParamLimits

0x8750,	// (0x00055c1a) heading_pane_cp07

0x87f7,	// (0x00055cc1) cell_tport_appsw_pane_g2

0x0002,

0xfd80,	// (0x0005d24a) cell_tport_appsw_pane_g

0x369a,	// (0x00050b64) input_candi_list_open_g1

0xae9e,	// (0x00058368) list_cale_time_pane_g6_ParamLimits

0xae9e,	// (0x00058368) list_cale_time_pane_g6

0x4e42,	// (0x0005230c) aid_size_touch_calib_1_ParamLimits

0x4e42,	// (0x0005230c) aid_size_touch_calib_1

0x4e54,	// (0x0005231e) aid_size_touch_calib_2_ParamLimits

0x4e54,	// (0x0005231e) aid_size_touch_calib_2

0x4e6c,	// (0x00052336) aid_size_touch_calib_3_ParamLimits

0x4e6c,	// (0x00052336) aid_size_touch_calib_3

0x4e8a,	// (0x00052354) aid_size_touch_calib_4_ParamLimits

0x4e8a,	// (0x00052354) aid_size_touch_calib_4

0x4ea2,	// (0x0005236c) main_touch_calib_button_group_pane_ParamLimits

0x4ea2,	// (0x0005236c) main_touch_calib_button_group_pane

0x4eba,	// (0x00052384) main_touch_calib_pane_g1_ParamLimits

0x4ecc,	// (0x00052396) main_touch_calib_pane_g2_ParamLimits

0x4ede,	// (0x000523a8) main_touch_calib_pane_g3_ParamLimits

0x4ef0,	// (0x000523ba) main_touch_calib_pane_g4_ParamLimits

0xf736,	// (0x0005cc00) main_touch_calib_pane_g_ParamLimits

0x4f02,	// (0x000523cc) main_touch_calib_pane_t1_ParamLimits

0x4f1c,	// (0x000523e6) main_touch_calib_pane_t2_ParamLimits

0x4f36,	// (0x00052400) main_touch_calib_pane_t3_ParamLimits

0x4f4a,	// (0x00052414) main_touch_calib_pane_t4_ParamLimits

0x4f5e,	// (0x00052428) main_touch_calib_pane_t5_ParamLimits

0xf73f,	// (0x0005cc09) main_touch_calib_pane_t_ParamLimits

0xd08b,	// (0x0005a555) list_single_fp_cale_pane_g3_ParamLimits

0xd08b,	// (0x0005a555) list_single_fp_cale_pane_g3

0xa757,	// (0x00057c21) bg_button_pane_cp012_ParamLimits

0xa757,	// (0x00057c21) bg_vkb2_func_pane_cp03_ParamLimits

0x701a,	// (0x000544e4) cell_vitu2_function_top_pane_g1_ParamLimits

0xa757,	// (0x00057c21) bg_vkb2_func_pane_cp04_ParamLimits

0x7d40,	// (0x0005520a) main_ncimui_button_group_pane_ParamLimits

0x7d40,	// (0x0005520a) main_ncimui_button_group_pane

0x7da0,	// (0x0005526a) main_ncimui_pane_t3_ParamLimits

0x7da0,	// (0x0005526a) main_ncimui_pane_t3

0xe8cd,	// (0x0005bd97) phacti_button_group_pane

0xea98,	// (0x0005bf62) aid_size_list_single_double_ParamLimits

0x8c94,	// (0x0005615e) popup_ezdial_listscroll_window_ParamLimits

0x8cb0,	// (0x0005617a) popup_number_entry_window_cp01_ParamLimits

0x8d48,	// (0x00056212) phacti_button_pane_ParamLimits

0x8d48,	// (0x00056212) phacti_button_pane

0x9878,	// (0x00056d42) bg_button_pane_cp14

0xeb1d,	// (0x0005bfe7) phacti_button_pane_t1

0x8d59,	// (0x00056223) main_touch_calib_button_pane_ParamLimits

0x8d59,	// (0x00056223) main_touch_calib_button_pane

0xa8b4,	// (0x00057d7e) bg_button_pane_cp18_ParamLimits

0xa8b4,	// (0x00057d7e) bg_button_pane_cp18

0xeb2b,	// (0x0005bff5) main_touch_calib_button_pane_t1_ParamLimits

0xeb2b,	// (0x0005bff5) main_touch_calib_button_pane_t1

0xeb41,	// (0x0005c00b) main_touch_calib_button_pane_t2_ParamLimits

0xeb41,	// (0x0005c00b) main_touch_calib_button_pane_t2

0x0001,

0xfe39,	// (0x0005d303) main_touch_calib_button_pane_t_ParamLimits

0xfe39,	// (0x0005d303) main_touch_calib_button_pane_t

0x9878,	// (0x00056d42) cell_ncimui_button_pane

0x9878,	// (0x00056d42) bg_button_pane_cp032

0xeb5f,	// (0x0005c029) cell_ncimui_button_pane_t1

0xa3dd,	// (0x000578a7) image3_infobar_pane_ParamLimits

0xa3dd,	// (0x000578a7) image3_infobar_pane

0x81b5,	// (0x0005567f) fs_bigclock_status_pane_ParamLimits

0x81b5,	// (0x0005567f) fs_bigclock_status_pane

0x81c2,	// (0x0005568c) main_fs_bigclock_clock_pane_ParamLimits

0x81c2,	// (0x0005568c) main_fs_bigclock_clock_pane

0x81e0,	// (0x000556aa) main_fs_bigclock_indi_pane_ParamLimits

0x81e0,	// (0x000556aa) main_fs_bigclock_indi_pane

0x8212,	// (0x000556dc) main_fs_bigclock_swipe_pane_ParamLimits

0x8212,	// (0x000556dc) main_fs_bigclock_swipe_pane

0x9878,	// (0x00056d42) main_fs_clock_dumped_data

0xe41a,	// (0x0005b8e4) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe41a,	// (0x0005b8e4) list_single_fs_bigclock_indicator_pane_g1

0xe435,	// (0x0005b8ff) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe435,	// (0x0005b8ff) list_single_fs_bigclock_indicator_pane_g2

0xe44f,	// (0x0005b919) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe44f,	// (0x0005b919) list_single_fs_bigclock_indicator_pane_g3

0xe469,	// (0x0005b933) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe469,	// (0x0005b933) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc5d,	// (0x0005d127) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc5d,	// (0x0005d127) list_single_fs_bigclock_indicator_pane_g

0xe494,	// (0x0005b95e) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe494,	// (0x0005b95e) list_single_fs_bigclock_indicator_pane_t1

0xe4bc,	// (0x0005b986) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4bc,	// (0x0005b986) list_single_fs_bigclock_indicator_pane_t2

0xe4e4,	// (0x0005b9ae) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4e4,	// (0x0005b9ae) list_single_fs_bigclock_indicator_pane_t3

0xe50c,	// (0x0005b9d6) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe50c,	// (0x0005b9d6) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc68,	// (0x0005d132) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc68,	// (0x0005d132) list_single_fs_bigclock_indicator_pane_t

0xeb6d,	// (0x0005c037) image3_infobar_fav_pane_ParamLimits

0xeb6d,	// (0x0005c037) image3_infobar_fav_pane

0xeb7d,	// (0x0005c047) image3_infobar_loc_pane_ParamLimits

0xeb7d,	// (0x0005c047) image3_infobar_loc_pane

0xeb91,	// (0x0005c05b) image3_infobar_time_pane_ParamLimits

0xeb91,	// (0x0005c05b) image3_infobar_time_pane

0xcd08,	// (0x0005a1d2) image3_infobar_time_pane_g1

0xeba1,	// (0x0005c06b) image3_infobar_time_pane_t1

0xcd08,	// (0x0005a1d2) image3_infobar_loc_pane_g1

0xebaf,	// (0x0005c079) image3_infobar_loc_pane_g2

0x0001,

0xfe3e,	// (0x0005d308) image3_infobar_loc_pane_g

0xebb7,	// (0x0005c081) image3_infobar_loc_pane_t1

0xcd08,	// (0x0005a1d2) image3_infobar_fav_pane_g1

0xebc5,	// (0x0005c08f) image3_infobar_fav_pane_g2

0x0001,

0xfe43,	// (0x0005d30d) image3_infobar_fav_pane_g

0xebcd,	// (0x0005c097) fs_bigclock_status_battery_pane

0xebd6,	// (0x0005c0a0) fs_bigclock_status_signal_pane

0xebdf,	// (0x0005c0a9) fs_bigclock_status_title_pane

0xebe8,	// (0x0005c0b2) fs_bigclock_status_signal_pane_g1

0xebf1,	// (0x0005c0bb) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe48,	// (0x0005d312) fs_bigclock_status_signal_pane_g

0xebf9,	// (0x0005c0c3) fs_bigclock_status_battery_pane_g1

0xec02,	// (0x0005c0cc) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe4d,	// (0x0005d317) fs_bigclock_status_battery_pane_g

0xec0a,	// (0x0005c0d4) fs_bigclock_status_title_pane_t1

0x8d6e,	// (0x00056238) main_fs_bigclock_clock_pane_g1

0x8d6e,	// (0x00056238) main_fs_bigclock_clock_pane_g2

0x8d7f,	// (0x00056249) main_fs_bigclock_clock_pane_g3

0x8d7f,	// (0x00056249) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe52,	// (0x0005d31c) main_fs_bigclock_clock_pane_g

0x8d92,	// (0x0005625c) main_fs_bigclock_clock_pane_t1

0x8da8,	// (0x00056272) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe5b,	// (0x0005d325) main_fs_bigclock_clock_pane_t

0xec18,	// (0x0005c0e2) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec18,	// (0x0005c0e2) list_single_fs_bigclock_indicator_pane

0xec29,	// (0x0005c0f3) list_single_fs_bigclock_pane_ParamLimits

0xec29,	// (0x0005c0f3) list_single_fs_bigclock_pane

0xec4f,	// (0x0005c119) main_fs_bigclock_indicator_pane_t1

0xec5e,	// (0x0005c128) list_single_fs_bigclock_pane_g1

0xec66,	// (0x0005c130) list_single_fs_bigclock_pane_t1

0xcd08,	// (0x0005a1d2) main_fs_bigclock_swipe_pane_g1

0xeca9,	// (0x0005c173) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe6c,	// (0x0005d336) main_fs_bigclock_swipe_pane_g

0xecb1,	// (0x0005c17b) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecb1,	// (0x0005c17b) main_fs_bigclock_swipe_pane_t1

0x2fc2,	// (0x0005048c) call_type_pane_ParamLimits

0x9878,	// (0x00056d42) main_btmg_pane

0x8ba7,	// (0x00056071) list_single_cale_mrui_row_pane_g2_ParamLimits

0x8ba7,	// (0x00056071) list_single_cale_mrui_row_pane_g2

0x0002,

0xfddf,	// (0x0005d2a9) list_single_cale_mrui_row_pane_g_ParamLimits

0xfddf,	// (0x0005d2a9) list_single_cale_mrui_row_pane_g

0xa6a6,	// (0x00057b70) list_recal_vselct_arw_lo_pane

0xeae8,	// (0x0005bfb2) list_recal_vselct_arw_up_pane

0xa6ae,	// (0x00057b78) list_recal_vselct_pane

0x8e02,	// (0x000562cc) btmg_button_pane

0x8e0c,	// (0x000562d6) main_btmg_pane_g1

0x9878,	// (0x00056d42) bg_button_pane_cp044

0xecce,	// (0x0005c198) btmg_button_pane_t1

0xc8ec,	// (0x00059db6) aid_listscroll_gen

0xa757,	// (0x00057c21) main_cntbar_detail_pane

0xe819,	// (0x0005bce3) list_cmail_folder_pane

0xc483,	// (0x0005994d) sp_fs_scroll_pane_cp03_ParamLimits

0x0de3,	// (0x0004e2ad) list_single_fs_dyc_pane_cp01_ParamLimits

0x0de3,	// (0x0004e2ad) list_single_fs_dyc_pane_cp01

0xecdc,	// (0x0005c1a6) aid_size_cmail_indent

0xa725,	// (0x00057bef) list_single_dyc_row_pane_cp01

0x8e48,	// (0x00056312) cntbar_detail_list_pane_ParamLimits

0x8e48,	// (0x00056312) cntbar_detail_list_pane

0x8e94,	// (0x0005635e) main_cntbar_detail_cont_pane_ParamLimits

0x8e94,	// (0x0005635e) main_cntbar_detail_cont_pane

0xc483,	// (0x0005994d) scroll_pane_cp032_ParamLimits

0xc483,	// (0x0005994d) scroll_pane_cp032

0x8ea8,	// (0x00056372) cntbar_detail_list_event_pane_ParamLimits

0x8ea8,	// (0x00056372) cntbar_detail_list_event_pane

0x8e58,	// (0x00056322) cntbar_detail_list_shct_pane

0xad29,	// (0x000581f3) aid_list_gen

0xece5,	// (0x0005c1af) aid_scroll

0xecee,	// (0x0005c1b8) aid_size_touch_scroll_bar

0x7612,	// (0x00054adc) aid_list_double

0x7600,	// (0x00054aca) aid_list_single

0x7600,	// (0x00054aca) aid_list_single_lg

0x0df9,	// (0x0004e2c3) aid_list_z_g_a_sm

0x0e01,	// (0x0004e2cb) aid_list_z_g_d

0x0e09,	// (0x0004e2d3) aid_txt_z_prm

0x0e17,	// (0x0004e2e1) aid_txt_z_prm_cp01

0x0e25,	// (0x0004e2ef) aid_txt_z_sec

0x8eb8,	// (0x00056382) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8eb8,	// (0x00056382) main_cntbar_detail_cont_pane_g1

0x8ecc,	// (0x00056396) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8ecc,	// (0x00056396) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe71,	// (0x0005d33b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe71,	// (0x0005d33b) main_cntbar_detail_cont_pane_g

0xecf7,	// (0x0005c1c1) main_cntbar_detail_cont_pane_t1

0xed05,	// (0x0005c1cf) main_cntbar_detail_cont_pane_t2

0xed13,	// (0x0005c1dd) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe76,	// (0x0005d340) main_cntbar_detail_cont_pane_t

0x8edc,	// (0x000563a6) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8edc,	// (0x000563a6) cell_cntbar_detail_list_shct_pane

0xed21,	// (0x0005c1eb) cntbar_detail_list_shct_pane_g1

0xed2a,	// (0x0005c1f4) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe7d,	// (0x0005d347) cntbar_detail_list_shct_pane_g

0x8ef0,	// (0x000563ba) cntbar_detail_list_event_pane_g1_ParamLimits

0x8ef0,	// (0x000563ba) cntbar_detail_list_event_pane_g1

0x8efc,	// (0x000563c6) cntbar_detail_list_event_pane_g2_ParamLimits

0x8efc,	// (0x000563c6) cntbar_detail_list_event_pane_g2

0x0005,

0xfe82,	// (0x0005d34c) cntbar_detail_list_event_pane_g_ParamLimits

0xfe82,	// (0x0005d34c) cntbar_detail_list_event_pane_g

0x8f68,	// (0x00056432) cntbar_detail_list_event_pane_t1_ParamLimits

0x8f68,	// (0x00056432) cntbar_detail_list_event_pane_t1

0x8f7d,	// (0x00056447) cntbar_detail_list_event_pane_t2_ParamLimits

0x8f7d,	// (0x00056447) cntbar_detail_list_event_pane_t2

0x0002,

0xfe8f,	// (0x0005d359) cntbar_detail_list_event_pane_t_ParamLimits

0xfe8f,	// (0x0005d359) cntbar_detail_list_event_pane_t

0xcd08,	// (0x0005a1d2) cell_cntbar_detail_list_shct_pane_g1

0xb4a0,	// (0x0005896a) navi_pane_mv_g3

0xa757,	// (0x00057c21) main_cntbar_detail_pane_ParamLimits

0x9878,	// (0x00056d42) main_notif_wgt_pane

0xa1c9,	// (0x00057693) aid_tch_main_mp4_pane_g4

0xa3d5,	// (0x0005789f) popup_slider_window_cp02

0xa69c,	// (0x00057b66) list_recal_day_event_pane

0x8e16,	// (0x000562e0) cntbar_detail_btn_pane_ParamLimits

0x8e16,	// (0x000562e0) cntbar_detail_btn_pane

0x8e2f,	// (0x000562f9) cntbar_detail_btn_pane_cp01_ParamLimits

0x8e2f,	// (0x000562f9) cntbar_detail_btn_pane_cp01

0x8e58,	// (0x00056322) cntbar_detail_list_shct_pane_ParamLimits

0x8e68,	// (0x00056332) cntbar_detail_pane_g1_ParamLimits

0x8e68,	// (0x00056332) cntbar_detail_pane_g1

0x8e78,	// (0x00056342) cntbar_detail_pane_t1_ParamLimits

0x8e78,	// (0x00056342) cntbar_detail_pane_t1

0x8f08,	// (0x000563d2) cntbar_detail_list_event_pane_g3_ParamLimits

0x8f08,	// (0x000563d2) cntbar_detail_list_event_pane_g3

0x8f20,	// (0x000563ea) cntbar_detail_list_event_pane_g4_ParamLimits

0x8f20,	// (0x000563ea) cntbar_detail_list_event_pane_g4

0x8f38,	// (0x00056402) cntbar_detail_list_event_pane_g5_ParamLimits

0x8f38,	// (0x00056402) cntbar_detail_list_event_pane_g5

0x8f50,	// (0x0005641a) cntbar_detail_list_event_pane_g6_ParamLimits

0x8f50,	// (0x0005641a) cntbar_detail_list_event_pane_g6

0x8f92,	// (0x0005645c) cntbar_detail_list_event_pane_t3_ParamLimits

0x8f92,	// (0x0005645c) cntbar_detail_list_event_pane_t3

0x8fa4,	// (0x0005646e) popup_notif_wgt_window_ParamLimits

0x8fa4,	// (0x0005646e) popup_notif_wgt_window

0x8fbd,	// (0x00056487) popup_submenu_window_cp01_ParamLimits

0x8fbd,	// (0x00056487) popup_submenu_window_cp01

0xaa82,	// (0x00057f4c) bg_popup_window_pane_cp10

0xed33,	// (0x0005c1fd) listscroll_notif_wgt_pane

0xed45,	// (0x0005c20f) list_notif_wgt_window

0xed4e,	// (0x0005c218) scroll_pane_cp033

0x8fd3,	// (0x0005649d) list_notif_wgt_row_pane_ParamLimits

0x8fd3,	// (0x0005649d) list_notif_wgt_row_pane

0xed57,	// (0x0005c221) aid_size_list_notif_wgt_del

0xed64,	// (0x0005c22e) list_notif_wgt_row_pane_g1

0xed70,	// (0x0005c23a) list_notif_wgt_row_pane_g2

0xed7f,	// (0x0005c249) list_notif_wgt_row_pane_g3

0x0002,

0xfe96,	// (0x0005d360) list_notif_wgt_row_pane_g

0xed8c,	// (0x0005c256) list_notif_wgt_row_pane_t1

0xeda2,	// (0x0005c26c) list_notif_wgt_row_pane_t2

0xedb4,	// (0x0005c27e) list_notif_wgt_row_pane_t3

0x0002,

0xfe9d,	// (0x0005d367) list_notif_wgt_row_pane_t

0xd926,	// (0x0005adf0) list_recal_day_event_pane_g1

0xedc6,	// (0x0005c290) list_recal_day_event_pane_t1

0x9878,	// (0x00056d42) bg_button_pane_cp045

0x8fe3,	// (0x000564ad) cntbar_detail_btn_pane_t1

0xc900,	// (0x00059dca) main_callh_pane_ParamLimits

0xc900,	// (0x00059dca) main_callh_pane

0x9878,	// (0x00056d42) main_coverflow0_pane

0x9878,	// (0x00056d42) main_wgtman_pane

0x822a,	// (0x000556f4) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x822a,	// (0x000556f4) main_fs_bigclock_unlock_btn_pane

0x87ef,	// (0x00055cb9) bg_button_pane_cp16

0x87ff,	// (0x00055cc9) cell_tport_appsw_pane_g3

0x8ff1,	// (0x000564bb) cf0_flow_pane_ParamLimits

0x8ff1,	// (0x000564bb) cf0_flow_pane

0xedd5,	// (0x0005c29f) listscroll_cf0_pane

0xede0,	// (0x0005c2aa) main_cf0_pane_g1

0x9006,	// (0x000564d0) main_cf0_pane_t1_ParamLimits

0x9006,	// (0x000564d0) main_cf0_pane_t1

0x901d,	// (0x000564e7) main_cf0_pane_t2_ParamLimits

0x901d,	// (0x000564e7) main_cf0_pane_t2

0x0001,

0xfea9,	// (0x0005d373) main_cf0_pane_t_ParamLimits

0xfea9,	// (0x0005d373) main_cf0_pane_t

0xedf2,	// (0x0005c2bc) scroll_pane_cp11

0x9034,	// (0x000564fe) cf0_flow_pane_g1

0x903c,	// (0x00056506) cf0_flow_pane_g2

0x0001,

0xfeae,	// (0x0005d378) cf0_flow_pane_g

0x9044,	// (0x0005650e) cf0_flow_pane_t1

0x9878,	// (0x00056d42) main_call6_pane

0x9878,	// (0x00056d42) main_calllock_pane

0x9052,	// (0x0005651c) call6_btn_grp_pane_ParamLimits

0x9052,	// (0x0005651c) call6_btn_grp_pane

0x906c,	// (0x00056536) call6_pane_g1_ParamLimits

0x906c,	// (0x00056536) call6_pane_g1

0x9082,	// (0x0005654c) popup_call6_1st_window_ParamLimits

0x9082,	// (0x0005654c) popup_call6_1st_window

0x9093,	// (0x0005655d) popup_call6_2nd_window_ParamLimits

0x9093,	// (0x0005655d) popup_call6_2nd_window

0x90a4,	// (0x0005656e) cell_call6_btn_pane_ParamLimits

0x90a4,	// (0x0005656e) cell_call6_btn_pane

0xaa82,	// (0x00057f4c) bg_popup_call2_in_pane_cp03

0xedfd,	// (0x0005c2c7) popup_call6_1st_window_g1

0xee05,	// (0x0005c2cf) popup_call6_1st_window_g2

0xee0d,	// (0x0005c2d7) popup_call6_1st_window_g3

0x0002,

0xfeb3,	// (0x0005d37d) popup_call6_1st_window_g

0xee15,	// (0x0005c2df) popup_call6_1st_window_t1

0xee24,	// (0x0005c2ee) popup_call6_1st_window_t2

0xee32,	// (0x0005c2fc) popup_call6_1st_window_t3

0x0002,

0xfeba,	// (0x0005d384) popup_call6_1st_window_t

0xaa82,	// (0x00057f4c) bg_popup_call2_in_pane_cp04

0xedfd,	// (0x0005c2c7) popup_call6_2nd_window_g1

0xee05,	// (0x0005c2cf) popup_call6_2nd_window_g2

0xee0d,	// (0x0005c2d7) popup_call6_2nd_window_g3

0x0002,

0xfeb3,	// (0x0005d37d) popup_call6_2nd_window_g

0xee15,	// (0x0005c2df) popup_call6_2nd_window_t1

0x9878,	// (0x00056d42) bg_button_pane_cp15

0xee40,	// (0x0005c30a) cell_call6_btn_pane_g1

0xa72e,	// (0x00057bf8) cell_call6_btn_pane_t1

0x90b7,	// (0x00056581) listscroll_wgtman_pane_ParamLimits

0x90b7,	// (0x00056581) listscroll_wgtman_pane

0x90d8,	// (0x000565a2) wgtman_btn_pane_ParamLimits

0x90d8,	// (0x000565a2) wgtman_btn_pane

0xb2a7,	// (0x00058771) aid_scroll_copy1

0xee49,	// (0x0005c313) list_wgtman_pane

0x911b,	// (0x000565e5) wgtman_btn_pane_g1_ParamLimits

0x911b,	// (0x000565e5) wgtman_btn_pane_g1

0x9147,	// (0x00056611) wgtman_btn_pane_t1_ParamLimits

0x9147,	// (0x00056611) wgtman_btn_pane_t1

0xee53,	// (0x0005c31d) wgtman_btn_pane_t2_ParamLimits

0xee53,	// (0x0005c31d) wgtman_btn_pane_t2

0x0001,

0xfec1,	// (0x0005d38b) wgtman_btn_pane_t_ParamLimits

0xfec1,	// (0x0005d38b) wgtman_btn_pane_t

0x9184,	// (0x0005664e) listrow_wgtman_pane_ParamLimits

0x9184,	// (0x0005664e) listrow_wgtman_pane

0x9196,	// (0x00056660) listrow_wgtman_pane_g1

0x91a3,	// (0x0005666d) listrow_wgtman_pane_g2

0x0001,

0xfec6,	// (0x0005d390) listrow_wgtman_pane_g

0x0e33,	// (0x0004e2fd) listrow_wgtman_pane_t1

0x0e4b,	// (0x0004e315) listrow_wgtman_pane_t2

0x0001,

0xfecb,	// (0x0005d395) listrow_wgtman_pane_t

0x0e71,	// (0x0004e33b) wait_bar_pane_cp09

0xee6a,	// (0x0005c334) main_calllock_btn_pane

0xee74,	// (0x0005c33e) main_calllock_pane_g1

0x9878,	// (0x00056d42) bg_button_pane_cp17

0xee40,	// (0x0005c30a) main_calllock_btn_pane_g1

0xee80,	// (0x0005c34a) main_calllock_btn_pane_t1

0x9878,	// (0x00056d42) main_dialer3_pane

0x9878,	// (0x00056d42) main_fmrd2_pane

0xcd08,	// (0x0005a1d2) main_fs_bigclock_unlock_btn_pane_g1

0x91c9,	// (0x00056693) main_fs_bigclock_unlock_btn_pane_t1

0x91d7,	// (0x000566a1) area_fmrd2_info_pane_ParamLimits

0x91d7,	// (0x000566a1) area_fmrd2_info_pane

0x91e8,	// (0x000566b2) area_fmrd2_visual_pane_ParamLimits

0x91e8,	// (0x000566b2) area_fmrd2_visual_pane

0x91f6,	// (0x000566c0) fmrd2_indi_pane_ParamLimits

0x91f6,	// (0x000566c0) fmrd2_indi_pane

0x9203,	// (0x000566cd) area_fmrd2_visual_pane_g1

0x920b,	// (0x000566d5) area_fmrd2_visual_pane_t1

0x921b,	// (0x000566e5) area_fmrd2_visual_pane_t2

0x922b,	// (0x000566f5) area_fmrd2_visual_pane_t3

0x0002,

0xfed5,	// (0x0005d39f) area_fmrd2_visual_pane_t

0x923b,	// (0x00056705) area_fmrd2_info_pane_g1

0x9243,	// (0x0005670d) area_fmrd2_info_pane_t1

0x9253,	// (0x0005671d) area_fmrd2_info_pane_t2

0x9263,	// (0x0005672d) area_fmrd2_info_pane_t3

0x9273,	// (0x0005673d) area_fmrd2_info_pane_t4

0x0003,

0xfedc,	// (0x0005d3a6) area_fmrd2_info_pane_t

0x9281,	// (0x0005674b) fmrd2_indi_pane_t1

0x9291,	// (0x0005675b) fmrd2_indi_pane_t2

0x92a1,	// (0x0005676b) fmrd2_indi_pane_t3

0x0002,

0xfee5,	// (0x0005d3af) fmrd2_indi_pane_t

0xe478,	// (0x0005b942) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe478,	// (0x0005b942) list_single_fs_bigclock_indicator_pane_g5

0xe529,	// (0x0005b9f3) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe529,	// (0x0005b9f3) list_single_fs_bigclock_indicator_pane_t5

0x8a27,	// (0x00055ef1) aid_cell_bcale_month_pane_ParamLimits

0x8a27,	// (0x00055ef1) aid_cell_bcale_month_pane

0x8a4e,	// (0x00055f18) bcale_month_pane_ParamLimits

0x8a4e,	// (0x00055f18) bcale_month_pane

0x8a72,	// (0x00055f3c) bcale_preview_pane_ParamLimits

0x8a72,	// (0x00055f3c) bcale_preview_pane

0xec66,	// (0x0005c130) list_single_fs_bigclock_pane_t1_ParamLimits

0xec85,	// (0x0005c14f) list_single_fs_bigclock_pane_t2_ParamLimits

0xec85,	// (0x0005c14f) list_single_fs_bigclock_pane_t2

0x0001,

0xfe67,	// (0x0005d331) list_single_fs_bigclock_pane_t_ParamLimits

0xfe67,	// (0x0005d331) list_single_fs_bigclock_pane_t

0x91c1,	// (0x0005668b) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfed0,	// (0x0005d39a) main_fs_bigclock_unlock_btn_pane_g

0x92b1,	// (0x0005677b) aid_dia3_key_size_ParamLimits

0x92b1,	// (0x0005677b) aid_dia3_key_size

0x92c0,	// (0x0005678a) aid_dia3_listrow_size_ParamLimits

0x92c0,	// (0x0005678a) aid_dia3_listrow_size

0x92d5,	// (0x0005679f) dia3_keypad_fun_pane_ParamLimits

0x92d5,	// (0x0005679f) dia3_keypad_fun_pane

0x92f1,	// (0x000567bb) dia3_keypad_num_pane_ParamLimits

0x92f1,	// (0x000567bb) dia3_keypad_num_pane

0x930c,	// (0x000567d6) dia3_listscroll_pane_ParamLimits

0x930c,	// (0x000567d6) dia3_listscroll_pane

0x931f,	// (0x000567e9) dia3_numentry_pane_ParamLimits

0x931f,	// (0x000567e9) dia3_numentry_pane

0xee8f,	// (0x0005c359) dia3_list_pane

0xee9a,	// (0x0005c364) scroll_pane_cp12

0x9878,	// (0x00056d42) bg_dia3_numentry_pane

0x9333,	// (0x000567fd) dia3_numentry_pane_t1

0x9342,	// (0x0005680c) cell_dia3_key_num_pane

0x934a,	// (0x00056814) cell_dia3_key0_fun_pane_ParamLimits

0x934a,	// (0x00056814) cell_dia3_key0_fun_pane

0x935e,	// (0x00056828) cell_dia3_key1_fun_pane_ParamLimits

0x935e,	// (0x00056828) cell_dia3_key1_fun_pane

0x9376,	// (0x00056840) dia3_listrow_pane

0xe1cb,	// (0x0005b695) bg_dia3_numentry_pane_g1

0x9878,	// (0x00056d42) bg_button_pane_cp21

0xeea5,	// (0x0005c36f) cell_dia3_key_num_pane_t1

0xeeb3,	// (0x0005c37d) cell_dia3_key_num_pane_t2

0xeec2,	// (0x0005c38c) cell_dia3_key_num_pane_t3

0xeed1,	// (0x0005c39b) cell_dia3_key_num_pane_t4

0x0003,

0xfeec,	// (0x0005d3b6) cell_dia3_key_num_pane_t

0x9878,	// (0x00056d42) bg_button_pane_cp19

0x9388,	// (0x00056852) cell_dia3_key0_fun_pane_g1

0x9878,	// (0x00056d42) bg_button_pane_cp20

0x9390,	// (0x0005685a) cell_dia3_key1_fun_pane_g1

0x9398,	// (0x00056862) area_left_week_number_pane

0x93a4,	// (0x0005686e) area_top_day_name_pane

0x93b7,	// (0x00056881) frame_month_view_pane

0xeee0,	// (0x0005c3aa) grid_month_view_pane

0x93ca,	// (0x00056894) cell_top_day_name_pane_ParamLimits

0x93ca,	// (0x00056894) cell_top_day_name_pane

0x93f7,	// (0x000568c1) cell_area_left_week_number_pane_ParamLimits

0x93f7,	// (0x000568c1) cell_area_left_week_number_pane

0x940b,	// (0x000568d5) cell_month_view_pane_ParamLimits

0x940b,	// (0x000568d5) cell_month_view_pane

0xeeee,	// (0x0005c3b8) frm_month_g1

0x9438,	// (0x00056902) frm_month_g2

0x944b,	// (0x00056915) frm_month_g3

0x945e,	// (0x00056928) frm_month_g4

0x9471,	// (0x0005693b) frm_month_g5

0x9484,	// (0x0005694e) frm_month_g6

0x9497,	// (0x00056961) frm_month_g7

0xeefb,	// (0x0005c3c5) frm_month_g8

0x94aa,	// (0x00056974) frm_month_g9

0x94ba,	// (0x00056984) frm_month_g10

0x94ca,	// (0x00056994) frm_month_g11

0x94da,	// (0x000569a4) frm_month_g12

0x94ec,	// (0x000569b6) frm_month_g13

0x94fe,	// (0x000569c8) frm_month_g14

0x9512,	// (0x000569dc) frm_month_g15

0x9526,	// (0x000569f0) frm_month_g16

0x000f,

0xfef5,	// (0x0005d3bf) frm_month_g

0xef08,	// (0x0005c3d2) cell_top_day_name_pane_t1

0x953a,	// (0x00056a04) cell_area_left_week_number_pane_g1

0x9546,	// (0x00056a10) cell_area_left_week_number_pane_t1

0xcf6b,	// (0x0005a435) cell_month_view_pane_g1

0x9559,	// (0x00056a23) cell_month_view_pane_t1

0x9878,	// (0x00056d42) main_fps_pane

0xe746,	// (0x0005bc10) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe746,	// (0x0005bc10) cmail_ddmenu_btn02_pane_cp1

0xe762,	// (0x0005bc2c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe762,	// (0x0005bc2c) cmail_ddmenu_btn02_pane_cp2

0x8ce2,	// (0x000561ac) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8ce2,	// (0x000561ac) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe1a,	// (0x0005d2e4) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe1a,	// (0x0005d2e4) cmail_ddmenu_btn02_pane_g

0x8d00,	// (0x000561ca) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8d00,	// (0x000561ca) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe1f,	// (0x0005d2e9) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe1f,	// (0x0005d2e9) cmail_ddmenu_btn02_pane_t

0x956c,	// (0x00056a36) fps_text_pane_ParamLimits

0x956c,	// (0x00056a36) fps_text_pane

0x9583,	// (0x00056a4d) main_fps_pane_g1_ParamLimits

0x9583,	// (0x00056a4d) main_fps_pane_g1

0x959d,	// (0x00056a67) wait_bar_pane_cp010_ParamLimits

0x959d,	// (0x00056a67) wait_bar_pane_cp010

0x95ae,	// (0x00056a78) fps_text_pane_t1_ParamLimits

0x95ae,	// (0x00056a78) fps_text_pane_t1

0xe179,	// (0x0005b643) cam4_image_uncrop_pane_g1

0xe182,	// (0x0005b64c) cam4_image_uncrop_pane_g2

0x6536,	// (0x00053a00) cam4_image_uncrop_pane_g3

0x653f,	// (0x00053a09) cam4_image_uncrop_pane_g4

0x0003,

0xf8d7,	// (0x0005cda1) cam4_image_uncrop_pane_g

0x9376,	// (0x00056840) dia3_listrow_pane_ParamLimits

0x9878,	// (0x00056d42) main_phob2_pane

0x87c0,	// (0x00055c8a) cell_tport_appsw_pane_cp02_ParamLimits

0x87c0,	// (0x00055c8a) cell_tport_appsw_pane_cp02

0x87d4,	// (0x00055c9e) cell_tport_appsw_pane_cp03_ParamLimits

0x87d4,	// (0x00055c9e) cell_tport_appsw_pane_cp03

0x9878,	// (0x00056d42) phob2_contact_card_pane

0x9878,	// (0x00056d42) phob2_listscroll_pane

0xef1b,	// (0x0005c3e5) phob2_list_pane

0xef23,	// (0x0005c3ed) scroll_pane_cp034

0x95c6,	// (0x00056a90) phob2_cc_data_pane_ParamLimits

0x95c6,	// (0x00056a90) phob2_cc_data_pane

0x95e5,	// (0x00056aaf) phob2_cc_listscroll_pane_ParamLimits

0x95e5,	// (0x00056aaf) phob2_cc_listscroll_pane

0x9184,	// (0x0005664e) list_double_large_graphic_phob2_pane_ParamLimits

0x9184,	// (0x0005664e) list_double_large_graphic_phob2_pane

0x9603,	// (0x00056acd) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9603,	// (0x00056acd) list_double_large_graphic_phob2_pane_g1

0x0e83,	// (0x0004e34d) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0e83,	// (0x0004e34d) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff16,	// (0x0005d3e0) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff16,	// (0x0005d3e0) list_double_large_graphic_phob2_pane_g

0x0e8f,	// (0x0004e359) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0e8f,	// (0x0004e359) list_double_large_graphic_phob2_pane_t1

0x0ea4,	// (0x0004e36e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0ea4,	// (0x0004e36e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff1b,	// (0x0005d3e5) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff1b,	// (0x0005d3e5) list_double_large_graphic_phob2_pane_t

0x9878,	// (0x00056d42) list_highlight_pane_cp024

0x9619,	// (0x00056ae3) phob2_cc_button_pane

0x9621,	// (0x00056aeb) phob2_cc_data_pane_g1_ParamLimits

0x9621,	// (0x00056aeb) phob2_cc_data_pane_g1

0x9636,	// (0x00056b00) phob2_cc_data_pane_g2_ParamLimits

0x9636,	// (0x00056b00) phob2_cc_data_pane_g2

0x0001,

0xff20,	// (0x0005d3ea) phob2_cc_data_pane_g_ParamLimits

0xff20,	// (0x0005d3ea) phob2_cc_data_pane_g

0x9646,	// (0x00056b10) phob2_cc_data_pane_t1_ParamLimits

0x9646,	// (0x00056b10) phob2_cc_data_pane_t1

0x965e,	// (0x00056b28) phob2_cc_data_pane_t2_ParamLimits

0x965e,	// (0x00056b28) phob2_cc_data_pane_t2

0x9676,	// (0x00056b40) phob2_cc_data_pane_t3_ParamLimits

0x9676,	// (0x00056b40) phob2_cc_data_pane_t3

0x0002,

0xff25,	// (0x0005d3ef) phob2_cc_data_pane_t_ParamLimits

0xff25,	// (0x0005d3ef) phob2_cc_data_pane_t

0xef2b,	// (0x0005c3f5) phob2_cc_list_pane_ParamLimits

0xef2b,	// (0x0005c3f5) phob2_cc_list_pane

0xd9cf,	// (0x0005ae99) scroll_pane_cp035_ParamLimits

0xd9cf,	// (0x0005ae99) scroll_pane_cp035

0xa757,	// (0x00057c21) bg_button_pane_cp033

0xef37,	// (0x0005c401) phob2_cc_button_pane_g1

0xef43,	// (0x0005c40d) phob2_cc_button_pane_t1

0xef58,	// (0x0005c422) phob2_cc_button_pane_t2

0x0001,

0x000a,	// (0x0004d4d4) phob2_cc_button_pane_t

0x968e,	// (0x00056b58) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x968e,	// (0x00056b58) list_double_large_graphic_phob2_cc_pane

0x96be,	// (0x00056b88) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x96be,	// (0x00056b88) list_double_large_graphic_phob2_cc_pane_g1

0x0eb6,	// (0x0004e380) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0eb6,	// (0x0004e380) list_double_large_graphic_phob2_cc_pane_g2

0x0ec2,	// (0x0004e38c) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0ec2,	// (0x0004e38c) list_double_large_graphic_phob2_cc_pane_g3

0x0ece,	// (0x0004e398) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0ece,	// (0x0004e398) list_double_large_graphic_phob2_cc_pane_g4

0xa73d,	// (0x00057c07) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xa73d,	// (0x00057c07) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff2c,	// (0x0005d3f6) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff2c,	// (0x0005d3f6) list_double_large_graphic_phob2_cc_pane_g

0x0eda,	// (0x0004e3a4) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0eda,	// (0x0004e3a4) list_double_large_graphic_phob2_cc_pane_t1

0x0f03,	// (0x0004e3cd) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x0f03,	// (0x0004e3cd) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff37,	// (0x0005d401) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff37,	// (0x0005d401) list_double_large_graphic_phob2_cc_pane_t

0xef6a,	// (0x0005c434) list_highlight_pane_cp025_ParamLimits

0xef6a,	// (0x0005c434) list_highlight_pane_cp025

0xa757,	// (0x00057c21) bg_button_pane_cp033_ParamLimits

0xef37,	// (0x0005c401) phob2_cc_button_pane_g1_ParamLimits

0xef43,	// (0x0005c40d) phob2_cc_button_pane_t1_ParamLimits

0xef58,	// (0x0005c422) phob2_cc_button_pane_t2_ParamLimits

0x000a,	// (0x0004d4d4) phob2_cc_button_pane_t_ParamLimits

0x1175,	// (0x0004e63f) popup_wgtman_window

0xd7f9,	// (0x0005acc3) scroll_pane_cp038

0x90fd,	// (0x000565c7) wgtman_btn_pane_cp_01_ParamLimits

0x90fd,	// (0x000565c7) wgtman_btn_pane_cp_01

0xef78,	// (0x0005c442) wgtman_content_pane

0xef81,	// (0x0005c44b) wgtman_heading_pane

0x9878,	// (0x00056d42) bg_heading_pane_cp02

0xef8a,	// (0x0005c454) wgtman_heading_pane_g1

0xef92,	// (0x0005c45c) wgtman_heading_pane_t1

0xefa0,	// (0x0005c46a) scroll_pane_cp036

0xefa8,	// (0x0005c472) wgtman_list_pane

0xefb0,	// (0x0005c47a) wgtman_list_pane_t1_ParamLimits

0xefb0,	// (0x0005c47a) wgtman_list_pane_t1

0xa461,	// (0x0005792b) cam4_grid_pane

0x04a0,	// (0x0004d96a) bg_button_pane_cp015_ParamLimits

0x71b2,	// (0x0005467c) bg_button_pane_cp016_ParamLimits

0x71c5,	// (0x0005468f) bg_button_pane_cp017_ParamLimits

0x04e6,	// (0x0004d9b0) popup_vitu2_query_window_g3_ParamLimits

0x04e6,	// (0x0004d9b0) popup_vitu2_query_window_g3

0x0561,	// (0x0004da2b) popup_vitu2_query_window_t6_ParamLimits

0x0561,	// (0x0004da2b) popup_vitu2_query_window_t6

0x058c,	// (0x0004da56) popup_vitu2_query_window_t7_ParamLimits

0x058c,	// (0x0004da56) popup_vitu2_query_window_t7

0xe179,	// (0x0005b643) cam4_grid_pane_g1

0xe182,	// (0x0005b64c) cam4_grid_pane_g2

0xefca,	// (0x0005c494) cam4_grid_pane_g3

0xefd3,	// (0x0005c49d) cam4_grid_pane_g4

0x0003,

0xff3c,	// (0x0005d406) cam4_grid_pane_g

0x1fa9,	// (0x0004f473) aid_placing_vt_slider_lsc_ParamLimits

0x22b4,	// (0x0004f77e) vidtel_button_pane_ParamLimits

0x22b4,	// (0x0004f77e) vidtel_button_pane

0x9878,	// (0x00056d42) bg_button_pane_cp034

0xefde,	// (0x0005c4a8) vidtel_button_pane_g1

0xefe6,	// (0x0005c4b0) vidtel_button_pane_t1

0xd916,	// (0x0005ade0) aid_size_vtel_slider_touch

0xd9cf,	// (0x0005ae99) scroll_pane_cp039

0x7f1e,	// (0x000553e8) ncim_query_button_pane_cp01_ParamLimits

0x7f3d,	// (0x00055407) ncimui_query_pane_g1_ParamLimits

0xa757,	// (0x00057c21) input_focus_pane_cp012_ParamLimits

0xe209,	// (0x0005b6d3) ncim_query_entry_pane_t1_ParamLimits

0xd9cf,	// (0x0005ae99) scroll_pane_cp039_ParamLimits

0xb38b,	// (0x00058855) navi_pane_bcale_mc_g1

0xb393,	// (0x0005885d) navi_pane_bcale_mc_t1

0xe796,	// (0x0005bc60) main_sp_fs_email_pane_g1

0xe7a2,	// (0x0005bc6c) main_sp_fs_email_pane_g2

0x0001,

0xfcd2,	// (0x0005d19c) main_sp_fs_email_pane_g

0xe9ea,	// (0x0005beb4) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe9ea,	// (0x0005beb4) list_single_cale_mrui_row_pane_g3

0x0dd9,	// (0x0004e2a3) list_single_recal_day_pane_g5_event_pane

0xa6f9,	// (0x00057bc3) list_single_recal_day_pane_g7

0xeffc,	// (0x0005c4c6) list_recal_day_event_pane_cp01

0xf005,	// (0x0005c4cf) list_recal_vselct_arw_lo_pane_cp01

0xf00d,	// (0x0005c4d7) list_recal_vselct_arw_up_pane_cp01

0xf015,	// (0x0005c4df) list_recal_vselct_pane_cp01

0xd926,	// (0x0005adf0) list_recal_day_event_pane_cp01_g1

0xa749,	// (0x00057c13) list_recal_day_event_pane_cp01_t1

0xa701,	// (0x00057bcb) list_single_recal_day_pane_t1_ParamLimits

0xa713,	// (0x00057bdd) list_single_recal_day_pane_t2_ParamLimits

0xfe2f,	// (0x0005d2f9) list_single_recal_day_pane_t_ParamLimits

0xa7ef,	// (0x00057cb9) bg_notes_pane_ParamLimits

0xa892,	// (0x00057d5c) list_notes_pane_ParamLimits

0x14bb,	// (0x0004e985) scroll_pane_cp06_ParamLimits

0xa8b4,	// (0x00057d7e) main_notes_pane_ParamLimits

0xa757,	// (0x00057c21) main_welc_pane

0x96e1,	// (0x00056bab) main_welc_body_pane_ParamLimits

0x96e1,	// (0x00056bab) main_welc_body_pane

0x96ff,	// (0x00056bc9) main_welc_opti_pane_ParamLimits

0x96ff,	// (0x00056bc9) main_welc_opti_pane

0x9753,	// (0x00056c1d) main_welc_pane_t1_ParamLimits

0x9753,	// (0x00056c1d) main_welc_pane_t1

0x97ce,	// (0x00056c98) main_welc_body_row_pane_ParamLimits

0x97ce,	// (0x00056c98) main_welc_body_row_pane

0xe16b,	// (0x0005b635) main_welc_opti_row_pane_ParamLimits

0xe16b,	// (0x0005b635) main_welc_opti_row_pane

0xf01f,	// (0x0005c4e9) main_welc_opti_row_pane_g1

0x97e2,	// (0x00056cac) main_welc_opti_row_pane_t1

0xf027,	// (0x0005c4f1) main_welc_body_row_pane_t1

0xed3d,	// (0x0005c207) popup_notif_wgt_heading_pane

0xed57,	// (0x0005c221) aid_size_list_notif_wgt_del_ParamLimits

0xed64,	// (0x0005c22e) list_notif_wgt_row_pane_g1_ParamLimits

0xed70,	// (0x0005c23a) list_notif_wgt_row_pane_g2_ParamLimits

0xed7f,	// (0x0005c249) list_notif_wgt_row_pane_g3_ParamLimits

0xfe96,	// (0x0005d360) list_notif_wgt_row_pane_g_ParamLimits

0xed8c,	// (0x0005c256) list_notif_wgt_row_pane_t1_ParamLimits

0xeda2,	// (0x0005c26c) list_notif_wgt_row_pane_t2_ParamLimits

0xedb4,	// (0x0005c27e) list_notif_wgt_row_pane_t3_ParamLimits

0xfe9d,	// (0x0005d367) list_notif_wgt_row_pane_t_ParamLimits

0x9196,	// (0x00056660) listrow_wgtman_pane_g1_ParamLimits

0x91a3,	// (0x0005666d) listrow_wgtman_pane_g2_ParamLimits

0xfec6,	// (0x0005d390) listrow_wgtman_pane_g_ParamLimits

0x0e33,	// (0x0004e2fd) listrow_wgtman_pane_t1_ParamLimits

0x0e4b,	// (0x0004e315) listrow_wgtman_pane_t2_ParamLimits

0xfecb,	// (0x0005d395) listrow_wgtman_pane_t_ParamLimits

0x0e71,	// (0x0004e33b) wait_bar_pane_cp09_ParamLimits

0x9878,	// (0x00056d42) bg_popup_heading_pane_cp02

0xf036,	// (0x0005c500) popup_notif_wgt_heading_pane_g1

0xf03e,	// (0x0005c508) popup_notif_wgt_heading_pane_t1

0x9878,	// (0x00056d42) main_vids_pane

0x9878,	// (0x00056d42) vids_listscroll_pane

0x97f1,	// (0x00056cbb) scroll_pane_cp040

0x9878,	// (0x00056d42) vids_list_pane

0x97fc,	// (0x00056cc6) vids_list_double_pane_ParamLimits

0x97fc,	// (0x00056cc6) vids_list_double_pane

0x980d,	// (0x00056cd7) vids_list_double_pane_g1

0x9816,	// (0x00056ce0) vids_list_double_pane_t1

0x9826,	// (0x00056cf0) vids_list_double_pane_t2

0x0001,

0xff53,	// (0x0005d41d) vids_list_double_pane_t

0xa757,	// (0x00057c21) main_ncimui_pane_ParamLimits

0x7d54,	// (0x0005521e) main_ncimui_pane_g1_ParamLimits

0x7d60,	// (0x0005522a) main_ncimui_pane_g2_ParamLimits

0x7d60,	// (0x0005522a) main_ncimui_pane_g2

0x0001,

0xfbd3,	// (0x0005d09d) main_ncimui_pane_g_ParamLimits

0xfbd3,	// (0x0005d09d) main_ncimui_pane_g

0x971a,	// (0x00056be4) main_welc_pane_g1_ParamLimits

0x971a,	// (0x00056be4) main_welc_pane_g1

0x972f,	// (0x00056bf9) main_welc_pane_g2_ParamLimits

0x972f,	// (0x00056bf9) main_welc_pane_g2

0x0002,

0xff45,	// (0x0005d40f) main_welc_pane_g_ParamLimits

0xff45,	// (0x0005d40f) main_welc_pane_g

0xa7ef,	// (0x00057cb9) listscroll_mce_pane_ParamLimits

0xb4e0,	// (0x000589aa) wait_bar_pane_cp10

0xc8f4,	// (0x00059dbe) main_cale_day_pane_ParamLimits

0xc8f4,	// (0x00059dbe) main_cale_week_pane_ParamLimits

0xa7ef,	// (0x00057cb9) main_messa_pane_ParamLimits

0x57e3,	// (0x00052cad) main_clock2_btn_pane_ParamLimits

0x57e3,	// (0x00052cad) main_clock2_btn_pane

0xd113,	// (0x0005a5dd) main_clock2_btn_pane_cp01_ParamLimits

0xd113,	// (0x0005a5dd) main_clock2_btn_pane_cp01

0xe9bb,	// (0x0005be85) list_cale_mrui_pane_ParamLimits

0xedea,	// (0x0005c2b4) main_cf0_pane_g2

0x0001,

0xfea4,	// (0x0005d36e) main_cf0_pane_g

0x9398,	// (0x00056862) area_left_week_number_pane_ParamLimits

0x93a4,	// (0x0005686e) area_top_day_name_pane_ParamLimits

0x93b7,	// (0x00056881) frame_month_view_pane_ParamLimits

0xeee0,	// (0x0005c3aa) grid_month_view_pane_ParamLimits

0xeeee,	// (0x0005c3b8) frm_month_g1_ParamLimits

0x9438,	// (0x00056902) frm_month_g2_ParamLimits

0x944b,	// (0x00056915) frm_month_g3_ParamLimits

0x945e,	// (0x00056928) frm_month_g4_ParamLimits

0x9471,	// (0x0005693b) frm_month_g5_ParamLimits

0x9484,	// (0x0005694e) frm_month_g6_ParamLimits

0x9497,	// (0x00056961) frm_month_g7_ParamLimits

0xeefb,	// (0x0005c3c5) frm_month_g8_ParamLimits

0x94aa,	// (0x00056974) frm_month_g9_ParamLimits

0x94ba,	// (0x00056984) frm_month_g10_ParamLimits

0x94ca,	// (0x00056994) frm_month_g11_ParamLimits

0x94da,	// (0x000569a4) frm_month_g12_ParamLimits

0x94ec,	// (0x000569b6) frm_month_g13_ParamLimits

0x94fe,	// (0x000569c8) frm_month_g14_ParamLimits

0x9512,	// (0x000569dc) frm_month_g15_ParamLimits

0x9526,	// (0x000569f0) frm_month_g16_ParamLimits

0xfef5,	// (0x0005d3bf) frm_month_g_ParamLimits

0xef08,	// (0x0005c3d2) cell_top_day_name_pane_t1_ParamLimits

0x953a,	// (0x00056a04) cell_area_left_week_number_pane_g1_ParamLimits

0x9546,	// (0x00056a10) cell_area_left_week_number_pane_t1_ParamLimits

0xcf6b,	// (0x0005a435) cell_month_view_pane_g1_ParamLimits

0x9559,	// (0x00056a23) cell_month_view_pane_t1_ParamLimits

0xa7e7,	// (0x00057cb1) main_clock2_btn_pane_g1

0xf04c,	// (0x0005c516) main_clock2_btn_pane_t1

0xa757,	// (0x00057c21) listscroll_cmail_pane_ParamLimits

0xe796,	// (0x0005bc60) main_sp_fs_email_pane_g1_ParamLimits

0xe7a2,	// (0x0005bc6c) main_sp_fs_email_pane_g2_ParamLimits

0xfcd2,	// (0x0005d19c) main_sp_fs_email_pane_g_ParamLimits

0xeac9,	// (0x0005bf93) list_recal_day_pane_ParamLimits

0xeada,	// (0x0005bfa4) mian_recal_day_pane_t1

0x09e7,	// (0x0004deb1) list_single_dyc_row_text_pane_t4_ParamLimits

0x09e7,	// (0x0004deb1) list_single_dyc_row_text_pane_t4

0x0a30,	// (0x0004defa) list_single_dyc_row_text_pane_t5_ParamLimits

0x0a30,	// (0x0004defa) list_single_dyc_row_text_pane_t5

0x86ab,	// (0x00055b75) list_single_dyc_row_text_pane_t6_ParamLimits

0x86ab,	// (0x00055b75) list_single_dyc_row_text_pane_t6

0x2f08,	// (0x000503d2) aid_mgn_list_cale_time_pane

0xa757,	// (0x00057c21) main_gallery2_pane_ParamLimits

0xd129,	// (0x0005a5f3) main_clock2_pane_cp01_t1

0xd139,	// (0x0005a603) main_clock2_pane_cp01_t3

0x0001,

0xf7a9,	// (0x0005cc73) main_clock2_pane_cp01_t

0x1867,	// (0x0004ed31) cale_week_scroll_pane_g16_ParamLimits

0x1867,	// (0x0004ed31) cale_week_scroll_pane_g16

0xaa82,	// (0x00057f4c) vorec_slider_pane

0xefe6,	// (0x0005c4b0) vidtel_button_pane_t1_ParamLimits

0x8d6e,	// (0x00056238) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8d6e,	// (0x00056238) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8d7f,	// (0x00056249) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8d7f,	// (0x00056249) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe52,	// (0x0005d31c) main_fs_bigclock_clock_pane_g_ParamLimits

0x8d92,	// (0x0005625c) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8da8,	// (0x00056272) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe5b,	// (0x0005d325) main_fs_bigclock_clock_pane_t_ParamLimits

0x4fda,	// (0x000524a4) main_mup3_lyrics_pane_ParamLimits

0x4fda,	// (0x000524a4) main_mup3_lyrics_pane

0x985c,	// (0x00056d26) main_mup3_lyrics_pane_t1_ParamLimits

0x985c,	// (0x00056d26) main_mup3_lyrics_pane_t1

0xa1b3,	// (0x0005767d) aid_main_mp4_pane_t1_area

0xa1bd,	// (0x00057687) aid_main_mp4_pane_t2_area

0xa269,	// (0x00057733) main_mp4_pane_g7_ParamLimits

0xa269,	// (0x00057733) main_mp4_pane_g7

0xa275,	// (0x0005773f) main_mp4_pane_g8_ParamLimits

0xa275,	// (0x0005773f) main_mp4_pane_g8

0x6309,	// (0x000537d3) aid_call6_pane_g1_size

0x96a8,	// (0x00056b72) list_double_large_graphic_phob2_other_pane_ParamLimits

0x96a8,	// (0x00056b72) list_double_large_graphic_phob2_other_pane

0xae3d,	// (0x00058307) list_double_large_graphic_phob2_other_pane_g1

0x9878,	// (0x00056d42) list_highlight_pane_cp026

0xa757,	// (0x00057c21) main_welc_pane_ParamLimits

0x8556,	// (0x00055a20) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x8556,	// (0x00055a20) main_sp_fs_ctrlbar_pane_g3

0x8570,	// (0x00055a3a) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x8570,	// (0x00055a3a) main_sp_fs_ctrlbar_pane_g4

0x85a4,	// (0x00055a6e) toolbar2_fixed_button_pane_cp01

0x85af,	// (0x00055a79) toolbar2_fixed_button_pane_cp02

0x85bc,	// (0x00055a86) toolbar2_fixed_button_pane_cp03

0x96ca,	// (0x00056b94) list_welc_entry_pane_ParamLimits

0x96ca,	// (0x00056b94) list_welc_entry_pane

0x9744,	// (0x00056c0e) main_welc_pane_g3_ParamLimits

0x9744,	// (0x00056c0e) main_welc_pane_g3

0x9771,	// (0x00056c3b) main_welc_pane_t2_ParamLimits

0x9771,	// (0x00056c3b) main_welc_pane_t2

0x978b,	// (0x00056c55) main_welc_pane_t3_ParamLimits

0x978b,	// (0x00056c55) main_welc_pane_t3

0x0002,

0xff4c,	// (0x0005d416) main_welc_pane_t_ParamLimits

0xff4c,	// (0x0005d416) main_welc_pane_t

0x97a2,	// (0x00056c6c) welc_button_pane_ParamLimits

0x97a2,	// (0x00056c6c) welc_button_pane

0x97b9,	// (0x00056c83) welc_service_logo_pane_ParamLimits

0x97b9,	// (0x00056c83) welc_service_logo_pane

0xf05a,	// (0x0005c524) list_single_welc_entry_pane_ParamLimits

0xf05a,	// (0x0005c524) list_single_welc_entry_pane

0xf06b,	// (0x0005c535) list_single_welc_entry_pane_g1

0xf073,	// (0x0005c53d) list_single_welc_entry_pane_t1

0xf081,	// (0x0005c54b) list_single_welc_entry_pane_t2

0x0001,

0xff58,	// (0x0005d422) list_single_welc_entry_pane_t

0x9878,	// (0x00056d42) bg_button_pane_cp035

0xf08f,	// (0x0005c559) welc_button_pane_t1

0xf09d,	// (0x0005c567) welc_service_logo_pane_g1

0xf0a6,	// (0x0005c570) welc_service_logo_pane_g2

0x0001,

0xff5d,	// (0x0005d427) welc_service_logo_pane_g
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

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small
