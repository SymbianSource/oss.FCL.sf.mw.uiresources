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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00047e5a };

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
0x0dba,	// (0x00048c14) Screen

0x0dc6,	// (0x00048c20) application_window

0x0e02,	// (0x00048c5c) area_bottom_pane_ParamLimits

0x0e02,	// (0x00048c5c) area_bottom_pane

0x0e3b,	// (0x00048c95) area_top_pane_ParamLimits

0x0e3b,	// (0x00048c95) area_top_pane

0xa9ab,	// (0x00052805) call_video_uplink_pane_ParamLimits

0xa9ab,	// (0x00052805) call_video_uplink_pane

0x0ec9,	// (0x00048d23) main_pane_ParamLimits

0x0ec9,	// (0x00048d23) main_pane

0x4dbf,	// (0x0004cc19) context_pane

0x4dd2,	// (0x0004cc2c) navi_pane

0x4e04,	// (0x0004cc5e) popup_cale_events_window_ParamLimits

0x4e04,	// (0x0004cc5e) popup_cale_events_window

0x4e1c,	// (0x0004cc76) popup_mup_playback_window

0x4e24,	// (0x0004cc7e) signal_pane

0xe256,	// (0x000560b0) main_browser_pane

0xe42f,	// (0x00056289) main_burst_pane

0x4b13,	// (0x0004c96d) main_calc_pane

0x4b27,	// (0x0004c981) main_cale_day_pane

0x134a,	// (0x000491a4) main_cale_month_pane

0x4b27,	// (0x0004c981) main_cale_week_pane

0xe42f,	// (0x00056289) main_call_pane

0xd95c,	// (0x000557b6) main_call_poc_pane

0xe42f,	// (0x00056289) main_camera_pane

0xe42f,	// (0x00056289) main_chi_dic_pane

0xec0c,	// (0x00056a66) main_clock_pane

0xd95c,	// (0x000557b6) main_fmradio_pane

0xe42f,	// (0x00056289) main_graph_messa_pane

0xd95c,	// (0x000557b6) main_help_pane

0xe256,	// (0x000560b0) main_im_pane

0xe169,	// (0x00055fc3) main_image_pane_ParamLimits

0xe169,	// (0x00055fc3) main_image_pane

0xd95c,	// (0x000557b6) main_location2_pane

0xe42f,	// (0x00056289) main_location_pane

0xe169,	// (0x00055fc3) main_messa_pane

0xd95c,	// (0x000557b6) main_mp2_pane

0xe42f,	// (0x00056289) main_mp_pane

0xd95c,	// (0x000557b6) main_msg_pane

0xd95c,	// (0x000557b6) main_mup_eq_pane

0xd95c,	// (0x000557b6) main_mup_pane

0xe256,	// (0x000560b0) main_notes_pane

0xd95c,	// (0x000557b6) main_pec_pane

0xd95c,	// (0x000557b6) main_phob_pane

0xd95c,	// (0x000557b6) main_pinb_pane

0xd95c,	// (0x000557b6) main_postcard_pane

0xd95c,	// (0x000557b6) main_qdial_pane

0xe42f,	// (0x00056289) main_skin_pane

0xd95c,	// (0x000557b6) main_smil2_pane

0xe42f,	// (0x00056289) main_smil_pane

0xe42f,	// (0x00056289) main_video_pane

0xe42f,	// (0x00056289) main_video_tele_pane

0xe169,	// (0x00055fc3) main_viewer_pane_ParamLimits

0xe169,	// (0x00055fc3) main_viewer_pane

0xe42f,	// (0x00056289) main_vorec_pane

0x4b73,	// (0x0004c9cd) popup_blid_sat_info_window_ParamLimits

0x4b73,	// (0x0004c9cd) popup_blid_sat_info_window

0x4bcb,	// (0x0004ca25) popup_dyc_status_message_window_ParamLimits

0x4bcb,	// (0x0004ca25) popup_dyc_status_message_window

0x4be5,	// (0x0004ca3f) popup_grid_large_graphic_window_ParamLimits

0x4be5,	// (0x0004ca3f) popup_grid_large_graphic_window

0x4ca1,	// (0x0004cafb) popup_loc_request_window_ParamLimits

0x4ca1,	// (0x0004cafb) popup_loc_request_window

0x4d97,	// (0x0004cbf1) popup_wml_address_window_ParamLimits

0x4d97,	// (0x0004cbf1) popup_wml_address_window

0x4914,	// (0x0004c76e) call_muted_g1

0x3700,	// (0x0004b55a) popup_call_audio_conf_window_ParamLimits

0x3700,	// (0x0004b55a) popup_call_audio_conf_window

0x4928,	// (0x0004c782) popup_call_audio_first_window_ParamLimits

0x4928,	// (0x0004c782) popup_call_audio_first_window

0x499e,	// (0x0004c7f8) popup_call_audio_in_window_ParamLimits

0x499e,	// (0x0004c7f8) popup_call_audio_in_window

0x49da,	// (0x0004c834) popup_call_audio_out_window_ParamLimits

0x49da,	// (0x0004c834) popup_call_audio_out_window

0x4a14,	// (0x0004c86e) popup_call_audio_second_window_ParamLimits

0x4a14,	// (0x0004c86e) popup_call_audio_second_window

0x4a6a,	// (0x0004c8c4) popup_call_audio_wait_window_ParamLimits

0x4a6a,	// (0x0004c8c4) popup_call_audio_wait_window

0x4a9f,	// (0x0004c8f9) popup_number_entry_window_ParamLimits

0x4a9f,	// (0x0004c8f9) popup_number_entry_window

0xd549,	// (0x000553a3) bg_popup_call_pane_cp05_ParamLimits

0xd549,	// (0x000553a3) bg_popup_call_pane_cp05

0xd569,	// (0x000553c3) popup_number_entry_window_t1

0xd57c,	// (0x000553d6) popup_number_entry_window_t2

0xd58e,	// (0x000553e8) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x00056e9f) popup_number_entry_window_t

0xd5a0,	// (0x000553fa) text_title_cp2

0xd5b3,	// (0x0005540d) bg_popup_call_pane_cp_ParamLimits

0xd5b3,	// (0x0005540d) bg_popup_call_pane_cp

0xd5c1,	// (0x0005541b) call_thumbnail_pane

0xd5c9,	// (0x00055423) popup_call_audio_in_window_g1_ParamLimits

0xd5c9,	// (0x00055423) popup_call_audio_in_window_g1

0xd5d5,	// (0x0005542f) popup_call_audio_in_window_g2_ParamLimits

0xd5d5,	// (0x0005542f) popup_call_audio_in_window_g2

0xd5e1,	// (0x0005543b) popup_call_audio_in_window_g3_ParamLimits

0xd5e1,	// (0x0005543b) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x00056ea8) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x00056ea8) popup_call_audio_in_window_g

0xd5ed,	// (0x00055447) popup_call_audio_in_window_t1_ParamLimits

0xd5ed,	// (0x00055447) popup_call_audio_in_window_t1

0xd609,	// (0x00055463) popup_call_audio_in_window_t2_ParamLimits

0xd609,	// (0x00055463) popup_call_audio_in_window_t2

0xd625,	// (0x0005547f) popup_call_audio_in_window_t3_ParamLimits

0xd625,	// (0x0005547f) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x00056eaf) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x00056eaf) popup_call_audio_in_window_t

0xd5b3,	// (0x0005540d) bg_popup_call_pane_cp01_ParamLimits

0xd5b3,	// (0x0005540d) bg_popup_call_pane_cp01

0xd5c1,	// (0x0005541b) call_thumbnail_pane_cp02

0xd638,	// (0x00055492) call_type_pane_cp022

0xd640,	// (0x0005549a) popup_call_audio_out_window_g1_ParamLimits

0xd640,	// (0x0005549a) popup_call_audio_out_window_g1

0xd652,	// (0x000554ac) popup_call_audio_out_window_g2_ParamLimits

0xd652,	// (0x000554ac) popup_call_audio_out_window_g2

0xd65e,	// (0x000554b8) popup_call_audio_out_window_g3_ParamLimits

0xd65e,	// (0x000554b8) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x00056eb6) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x00056eb6) popup_call_audio_out_window_g

0xd670,	// (0x000554ca) popup_call_audio_out_window_t1_ParamLimits

0xd670,	// (0x000554ca) popup_call_audio_out_window_t1

0xd688,	// (0x000554e2) popup_call_audio_out_window_t2_ParamLimits

0xd688,	// (0x000554e2) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x00056ebd) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x00056ebd) popup_call_audio_out_window_t

0xd69d,	// (0x000554f7) bg_popup_call_pane_ParamLimits

0xd69d,	// (0x000554f7) bg_popup_call_pane

0x101e,	// (0x00048e78) call_thumbnail_pane_cp_ParamLimits

0x101e,	// (0x00048e78) call_thumbnail_pane_cp

0xd721,	// (0x0005557b) call_type_pane_cp01_ParamLimits

0xd721,	// (0x0005557b) call_type_pane_cp01

0xd765,	// (0x000555bf) popup_call_audio_first_window_g1_ParamLimits

0xd765,	// (0x000555bf) popup_call_audio_first_window_g1

0xd7b1,	// (0x0005560b) popup_call_audio_first_window_g2_ParamLimits

0xd7b1,	// (0x0005560b) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x00056ec2) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x00056ec2) popup_call_audio_first_window_g

0xd7f5,	// (0x0005564f) popup_call_audio_first_window_t1_ParamLimits

0xd7f5,	// (0x0005564f) popup_call_audio_first_window_t1

0xd8a1,	// (0x000556fb) popup_call_audio_first_window_t4_ParamLimits

0xd8a1,	// (0x000556fb) popup_call_audio_first_window_t4

0xd92d,	// (0x00055787) popup_call_audio_first_window_t5_ParamLimits

0xd92d,	// (0x00055787) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x00056ec7) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x00056ec7) popup_call_audio_first_window_t

0xd95c,	// (0x000557b6) bg_popup_call_pane_cp02

0xd966,	// (0x000557c0) call_type_pane_cp023

0xd96e,	// (0x000557c8) popup_call_audio_wait_window_g1

0xd976,	// (0x000557d0) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x00056ece) popup_call_audio_wait_window_g

0xd97e,	// (0x000557d8) popup_call_audio_wait_window_t3

0xd98c,	// (0x000557e6) bg_popup_call_pane_cp03_ParamLimits

0xd98c,	// (0x000557e6) bg_popup_call_pane_cp03

0xdf9e,	// (0x00055df8) call_thumbnail_pane_cp011_ParamLimits

0xdf9e,	// (0x00055df8) call_thumbnail_pane_cp011

0xdfaa,	// (0x00055e04) call_type_pane_cp034_ParamLimits

0xdfaa,	// (0x00055e04) call_type_pane_cp034

0xdfe6,	// (0x00055e40) popup_call_audio_second_window_g1_ParamLimits

0xdfe6,	// (0x00055e40) popup_call_audio_second_window_g1

0xe022,	// (0x00055e7c) popup_call_audio_second_window_g2_ParamLimits

0xe022,	// (0x00055e7c) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x00056ed3) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x00056ed3) popup_call_audio_second_window_g

0xe05e,	// (0x00055eb8) popup_call_audio_second_window_t1_ParamLimits

0xe05e,	// (0x00055eb8) popup_call_audio_second_window_t1

0xe0df,	// (0x00055f39) popup_call_audio_second_window_t2_ParamLimits

0xe0df,	// (0x00055f39) popup_call_audio_second_window_t2

0xe115,	// (0x00055f6f) popup_call_audio_second_window_t3_ParamLimits

0xe115,	// (0x00055f6f) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x00056ed8) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x00056ed8) popup_call_audio_second_window_t

0xd95c,	// (0x000557b6) bg_popup_call_pane_cp04

0xe14b,	// (0x00055fa5) list_conf_pane

0xe153,	// (0x00055fad) popup_call_audio_conf_window_t1

0xe161,	// (0x00055fbb) call_thumbnail_pane_g1

0xe169,	// (0x00055fc3) bg_pinb_pane_ParamLimits

0xe169,	// (0x00055fc3) bg_pinb_pane

0xe177,	// (0x00055fd1) find_pinb_pane

0xe169,	// (0x00055fc3) listscroll_pinb_pane_ParamLimits

0xe169,	// (0x00055fc3) listscroll_pinb_pane

0xe181,	// (0x00055fdb) pinb_bg_pane_g1

0xe181,	// (0x00055fdb) pinb_bg_pane_g2

0xe181,	// (0x00055fdb) pinb_bg_pane_g3

0xe181,	// (0x00055fdb) pinb_bg_pane_g4

0xe181,	// (0x00055fdb) pinb_bg_pane_g5

0xe181,	// (0x00055fdb) pinb_bg_pane_g6

0xe181,	// (0x00055fdb) pinb_bg_pane_g7

0xe181,	// (0x00055fdb) pinb_bg_pane_g8

0xe181,	// (0x00055fdb) pinb_bg_pane_g9

0xe181,	// (0x00055fdb) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x00056edf) pinb_bg_pane_g

0xd53f,	// (0x00055399) grid_pinb_pane

0xd53f,	// (0x00055399) list_pinb_pane

0xdf90,	// (0x00055dea) scroll_pane_cp01_ParamLimits

0xdf90,	// (0x00055dea) scroll_pane_cp01

0xe18b,	// (0x00055fe5) find_pinb_pane_g1_ParamLimits

0xe18b,	// (0x00055fe5) find_pinb_pane_g1

0xe1a3,	// (0x00055ffd) find_pinb_pane_t1

0xe1b5,	// (0x0005600f) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x00056ef9) find_pinb_pane_t

0xe1ca,	// (0x00056024) input_focus_pane_cp01_ParamLimits

0xe1ca,	// (0x00056024) input_focus_pane_cp01

0xe1d6,	// (0x00056030) cell_pinb_pane_ParamLimits

0xe1d6,	// (0x00056030) cell_pinb_pane

0xe1e4,	// (0x0005603e) cell_pinb_pane_g1_ParamLimits

0xe1e4,	// (0x0005603e) cell_pinb_pane_g1

0xe1f2,	// (0x0005604c) cell_pinb_pane_g2_ParamLimits

0xe1f2,	// (0x0005604c) cell_pinb_pane_g2

0xe1f2,	// (0x0005604c) cell_pinb_pane_g3_ParamLimits

0xe1f2,	// (0x0005604c) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x00056efe) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x00056efe) cell_pinb_pane_g

0xd95c,	// (0x000557b6) grid_highlight_pane_cp01

0xe1d6,	// (0x00056030) list_pinb_item_pane_ParamLimits

0xe1d6,	// (0x00056030) list_pinb_item_pane

0xd53f,	// (0x00055399) list_highlight_pane_cp02

0xe200,	// (0x0005605a) list_pinb_item_pane_g1_ParamLimits

0xe200,	// (0x0005605a) list_pinb_item_pane_g1

0xe1f2,	// (0x0005604c) list_pinb_item_pane_g2_ParamLimits

0xe1f2,	// (0x0005604c) list_pinb_item_pane_g2

0xe1e4,	// (0x0005603e) list_pinb_item_pane_g3_ParamLimits

0xe1e4,	// (0x0005603e) list_pinb_item_pane_g3

0xe1f2,	// (0x0005604c) list_pinb_item_pane_g4_ParamLimits

0xe1f2,	// (0x0005604c) list_pinb_item_pane_g4

0x0003,

0xf0ab,	// (0x00056f05) list_pinb_item_pane_g_ParamLimits

0xf0ab,	// (0x00056f05) list_pinb_item_pane_g

0xe20e,	// (0x00056068) list_pinb_item_pane_t1_ParamLimits

0xe20e,	// (0x00056068) list_pinb_item_pane_t1

0x1060,	// (0x00048eba) calc_display_pane

0x1085,	// (0x00048edf) calc_paper_pane

0x10a8,	// (0x00048f02) grid_calc_pane

0xd95c,	// (0x000557b6) bg_list_pane_cp01

0x10d6,	// (0x00048f30) clock_g1

0x10de,	// (0x00048f38) clock_g2

0x0001,

0xf0b4,	// (0x00056f0e) clock_g

0x10e6,	// (0x00048f40) clock_t1_ParamLimits

0x10e6,	// (0x00048f40) clock_t1

0x10fb,	// (0x00048f55) clock_t2_ParamLimits

0x10fb,	// (0x00048f55) clock_t2

0x110d,	// (0x00048f67) clock_t3_ParamLimits

0x110d,	// (0x00048f67) clock_t3

0x111f,	// (0x00048f79) clock_t4_ParamLimits

0x111f,	// (0x00048f79) clock_t4

0x1131,	// (0x00048f8b) clock_t5_ParamLimits

0x1131,	// (0x00048f8b) clock_t5

0x1146,	// (0x00048fa0) clock_t6_ParamLimits

0x1146,	// (0x00048fa0) clock_t6

0x1158,	// (0x00048fb2) clock_t7_ParamLimits

0x1158,	// (0x00048fb2) clock_t7

0x116a,	// (0x00048fc4) clock_t8_ParamLimits

0x116a,	// (0x00048fc4) clock_t8

0x117e,	// (0x00048fd8) clock_t9_ParamLimits

0x117e,	// (0x00048fd8) clock_t9

0x0008,

0xf0b9,	// (0x00056f13) clock_t_ParamLimits

0xf0b9,	// (0x00056f13) clock_t

0xe222,	// (0x0005607c) popup_clock_analogue_window_cp02

0xe222,	// (0x0005607c) popup_clock_digital_window_cp01

0xd95c,	// (0x000557b6) listscroll_help_pane

0xd95c,	// (0x000557b6) phob_pre_status_pane

0xe22a,	// (0x00056084) grid_qdial_pane

0xe169,	// (0x00055fc3) listscroll_mce_pane

0xe169,	// (0x00055fc3) bg_notes_pane

0xe234,	// (0x0005608e) list_notes_pane

0x1192,	// (0x00048fec) scroll_pane_cp06

0xe242,	// (0x0005609c) bg_calc_paper_pane

0xa9d1,	// (0x0005282b) list_calc_pane

0xe256,	// (0x000560b0) bg_calc_display_pane

0x11a6,	// (0x00049000) calc_display_pane_t1

0x11bb,	// (0x00049015) calc_display_pane_t2

0xa9eb,	// (0x00052845) calc_display_pane_t3

0x0002,

0xf0cc,	// (0x00056f26) calc_display_pane_t

0x11d0,	// (0x0004902a) cell_calc_pane_ParamLimits

0x11d0,	// (0x0004902a) cell_calc_pane

0xe262,	// (0x000560bc) bg_calc_paper_pane_g1

0xe26e,	// (0x000560c8) bg_calc_paper_pane_g2

0xe27a,	// (0x000560d4) bg_calc_paper_pane_g3

0xe286,	// (0x000560e0) bg_calc_paper_pane_g4

0xe292,	// (0x000560ec) bg_calc_paper_pane_g5

0x1205,	// (0x0004905f) bg_calc_paper_pane_g6

0x1214,	// (0x0004906e) bg_calc_paper_pane_g7

0x1223,	// (0x0004907d) bg_calc_paper_pane_g8

0x0007,

0xf0d3,	// (0x00056f2d) bg_calc_paper_pane_g

0x1236,	// (0x00049090) calc_bg_paper_pane_g9

0x1249,	// (0x000490a3) list_calc_item_pane_ParamLimits

0x1249,	// (0x000490a3) list_calc_item_pane

0xe29e,	// (0x000560f8) list_calc_item_pane_g1

0xa9fd,	// (0x00052857) list_calc_item_pane_t1_ParamLimits

0xa9fd,	// (0x00052857) list_calc_item_pane_t1

0x1261,	// (0x000490bb) list_calc_item_pane_t2_ParamLimits

0x1261,	// (0x000490bb) list_calc_item_pane_t2

0x0001,

0xf0e4,	// (0x00056f3e) list_calc_item_pane_t_ParamLimits

0xf0e4,	// (0x00056f3e) list_calc_item_pane_t

0xe181,	// (0x00055fdb) cell_calc_pane_g1

0xe2ab,	// (0x00056105) grid_highlight_pane_cp02

0xe2cd,	// (0x00056127) bg_calc_display_pane_g1

0x1293,	// (0x000490ed) bg_calc_display_pane_g2

0x129d,	// (0x000490f7) bg_calc_display_pane_g3

0x0002,

0xf0ee,	// (0x00056f48) bg_calc_display_pane_g

0x12a6,	// (0x00049100) cell_qdial_pane_ParamLimits

0x12a6,	// (0x00049100) cell_qdial_pane

0x12ba,	// (0x00049114) cell_qdial_pane_g1_ParamLimits

0x12ba,	// (0x00049114) cell_qdial_pane_g1

0x12d0,	// (0x0004912a) cell_qdial_pane_g2_ParamLimits

0x12d0,	// (0x0004912a) cell_qdial_pane_g2

0xe2d6,	// (0x00056130) cell_qdial_pane_g3_ParamLimits

0xe2d6,	// (0x00056130) cell_qdial_pane_g3

0x0003,

0xf0f5,	// (0x00056f4f) cell_qdial_pane_g_ParamLimits

0xf0f5,	// (0x00056f4f) cell_qdial_pane_g

0x12f7,	// (0x00049151) cell_qdial_pane_t1_ParamLimits

0x12f7,	// (0x00049151) cell_qdial_pane_t1

0x130f,	// (0x00049169) cell_qdial_pane_t2_ParamLimits

0x130f,	// (0x00049169) cell_qdial_pane_t2

0x1322,	// (0x0004917c) cell_qdial_pane_t3_ParamLimits

0x1322,	// (0x0004917c) cell_qdial_pane_t3

0x0002,

0xf0fe,	// (0x00056f58) cell_qdial_pane_t_ParamLimits

0xf0fe,	// (0x00056f58) cell_qdial_pane_t

0xd95c,	// (0x000557b6) grid_highlight_pane_cp04

0xe2e2,	// (0x0005613c) thumbnail_qdial_pane_ParamLimits

0xe2e2,	// (0x0005613c) thumbnail_qdial_pane

0xe33e,	// (0x00056198) list_help_pane

0xe347,	// (0x000561a1) scroll_pane_cp02

0xe350,	// (0x000561aa) help_list_pane_t1_ParamLimits

0xe350,	// (0x000561aa) help_list_pane_t1

0xaa0f,	// (0x00052869) bg_notes_pane_g2

0xaa17,	// (0x00052871) bg_notes_pane_g3

0xaa1f,	// (0x00052879) notes_bg_pane_g1

0xaa27,	// (0x00052881) notes_bg_pane_g4

0xaa2f,	// (0x00052889) notes_bg_pane_g5

0xaa37,	// (0x00052891) notes_bg_pane_g6

0xaa3f,	// (0x00052899) notes_bg_pane_g7

0xaa47,	// (0x000528a1) notes_bg_pane_g8

0xaa4f,	// (0x000528a9) notes_bg_pane_g9

0x0006,

0xf11c,	// (0x00056f76) notes_bg_pane_g

0x1335,	// (0x0004918f) list_notes_text_pane_ParamLimits

0x1335,	// (0x0004918f) list_notes_text_pane

0xe36e,	// (0x000561c8) list_notes_text_pane_g1

0x0491,	// (0x000482eb) list_notes_text_pane_t1

0x134a,	// (0x000491a4) listscroll_cale_week_pane

0x1376,	// (0x000491d0) bg_cale_heading_pane

0xe391,	// (0x000561eb) bg_cale_pane_cp01

0x138e,	// (0x000491e8) cale_week_corner_pane

0x13ad,	// (0x00049207) cale_week_day_heading_pane

0x13ca,	// (0x00049224) cale_week_scroll_pane_g1

0x13dd,	// (0x00049237) cale_week_scroll_pane_g2

0x13f5,	// (0x0004924f) cale_week_scroll_pane_g3

0x140d,	// (0x00049267) cale_week_scroll_pane_g4

0x1425,	// (0x0004927f) cale_week_scroll_pane_g5

0x1445,	// (0x0004929f) cale_week_scroll_pane_g6

0x1465,	// (0x000492bf) cale_week_scroll_pane_g7

0x1485,	// (0x000492df) cale_week_scroll_pane_g8

0x14a9,	// (0x00049303) cale_week_scroll_pane_g9

0x14c1,	// (0x0004931b) cale_week_scroll_pane_g10

0x14d9,	// (0x00049333) cale_week_scroll_pane_g11

0x14f1,	// (0x0004934b) cale_week_scroll_pane_g12

0x1509,	// (0x00049363) cale_week_scroll_pane_g13

0x1509,	// (0x00049363) cale_week_scroll_pane_g14

0x1509,	// (0x00049363) cale_week_scroll_pane_g15

0x000f,

0xf12b,	// (0x00056f85) cale_week_scroll_pane_g

0x1545,	// (0x0004939f) cale_week_time_pane

0x1569,	// (0x000493c3) grid_cale_week_pane

0xe3c0,	// (0x0005621a) scroll_pane_cp08

0x158f,	// (0x000493e9) cell_cale_week_pane_ParamLimits

0x158f,	// (0x000493e9) cell_cale_week_pane

0x161d,	// (0x00049477) cale_week_day_heading_pane_t1

0x1647,	// (0x000494a1) cale_week_day_heading_pane_t2

0x1676,	// (0x000494d0) cale_week_day_heading_pane_t3

0x16a5,	// (0x000494ff) cale_week_day_heading_pane_t4

0x16d4,	// (0x0004952e) cale_week_day_heading_pane_t5

0x170b,	// (0x00049565) cale_week_day_heading_pane_t6

0x1742,	// (0x0004959c) cale_week_day_heading_pane_t7

0x0006,

0xf14c,	// (0x00056fa6) cale_week_day_heading_pane_t

0xe3dd,	// (0x00056237) bg_cale_side_pane

0x176c,	// (0x000495c6) cale_week_time_pane_t1

0x1786,	// (0x000495e0) cale_week_time_pane_t2

0x17a0,	// (0x000495fa) cale_week_time_pane_t3

0x17ba,	// (0x00049614) cale_week_time_pane_t4

0x17d4,	// (0x0004962e) cale_week_time_pane_t5

0x17ee,	// (0x00049648) cale_week_time_pane_t6

0x1808,	// (0x00049662) cale_week_time_pane_t7

0x1822,	// (0x0004967c) cale_week_time_pane_t8

0x0007,

0xf15b,	// (0x00056fb5) cale_week_time_pane_t

0x183c,	// (0x00049696) cell_cale_week_pane_g2

0x185b,	// (0x000496b5) cell_cale_week_pane_g3_ParamLimits

0x185b,	// (0x000496b5) cell_cale_week_pane_g3

0xe3eb,	// (0x00056245) grid_highlight_pane_cp07

0xe3f3,	// (0x0005624d) listscroll_gms_pane

0xe3fd,	// (0x00056257) grid_gms_pane

0xe406,	// (0x00056260) listscroll_gms_pane_g1

0xe40e,	// (0x00056268) listscroll_gms_pane_g2

0x0001,

0xf16c,	// (0x00056fc6) listscroll_gms_pane_g

0x1873,	// (0x000496cd) scroll_pane_cp010

0x187e,	// (0x000496d8) cell_gms_pane_ParamLimits

0x187e,	// (0x000496d8) cell_gms_pane

0x1891,	// (0x000496eb) cell_gms_pane_g1

0xe416,	// (0x00056270) cell_gms_pane_g2

0xe36e,	// (0x000561c8) cell_gms_pane_g3

0xe41e,	// (0x00056278) cell_gms_pane_g4

0x0003,

0xf171,	// (0x00056fcb) cell_gms_pane_g

0xe427,	// (0x00056281) grid_highlight_pane_cp09

0x489c,	// (0x0004c6f6) phob_pre_status_pane_g1

0x48a4,	// (0x0004c6fe) phob_pre_status_pane_g2

0x48ac,	// (0x0004c706) phob_pre_status_pane_g3

0x48b4,	// (0x0004c70e) phob_pre_status_pane_g4

0x0004,

0xf535,	// (0x0005738f) phob_pre_status_pane_g

0x48c4,	// (0x0004c71e) phob_pre_status_pane_t1

0x48d2,	// (0x0004c72c) phob_pre_status_pane_t2

0x48e2,	// (0x0004c73c) phob_pre_status_pane_t3

0x0002,

0xf540,	// (0x0005739a) phob_pre_status_pane_t

0xe42f,	// (0x00056289) bg_list_pane_cp05

0x18a1,	// (0x000496fb) grid_vorec_pane

0x18a9,	// (0x00049703) vorec_t1

0x18b7,	// (0x00049711) vorec_t2

0x18c5,	// (0x0004971f) vorec_t3

0x18d3,	// (0x0004972d) vorec_t4

0xcae9,	// (0x00054943) vorec_t5

0x9cb8,	// (0x00051b12) vorec_t6

0x0004,

0xf17a,	// (0x00056fd4) vorec_t

0x9cc6,	// (0x00051b20) wait_bar_pane_cp01

0x18ef,	// (0x00049749) cell_vorec_pane_ParamLimits

0x18ef,	// (0x00049749) cell_vorec_pane

0xaa57,	// (0x000528b1) cell_vorec_pane_g1

0xd95c,	// (0x000557b6) grid_highlight_pane_cp05

0xdf90,	// (0x00055dea) cams_zoom_pane

0xdf90,	// (0x00055dea) image_vga_pane

0xe1e4,	// (0x0005603e) main_camera_pane_g1

0xe1e4,	// (0x0005603e) main_camera_pane_g2

0xe1e4,	// (0x0005603e) main_camera_pane_g3

0xe1e4,	// (0x0005603e) main_camera_pane_g4

0xe1e4,	// (0x0005603e) main_camera_pane_g5

0xe1e4,	// (0x0005603e) main_camera_pane_g6

0xe1e4,	// (0x0005603e) main_camera_pane_g7

0x0007,

0xf185,	// (0x00056fdf) main_camera_pane_g

0xe437,	// (0x00056291) main_camera_pane_t1

0xe437,	// (0x00056291) main_camera_pane_t2

0x0001,

0xf196,	// (0x00056ff0) main_camera_pane_t

0x1916,	// (0x00049770) cams_zoom_pane_cp_ParamLimits

0x1916,	// (0x00049770) cams_zoom_pane_cp

0x194a,	// (0x000497a4) image_cif_pane_ParamLimits

0x194a,	// (0x000497a4) image_cif_pane

0xd53f,	// (0x00055399) image_subqcif_pane

0x195c,	// (0x000497b6) main_video_pane_g1_ParamLimits

0x195c,	// (0x000497b6) main_video_pane_g1

0x198a,	// (0x000497e4) main_video_pane_g2_ParamLimits

0x198a,	// (0x000497e4) main_video_pane_g2

0x19c4,	// (0x0004981e) main_video_pane_g3_ParamLimits

0x19c4,	// (0x0004981e) main_video_pane_g3

0x19c4,	// (0x0004981e) main_video_pane_g4_ParamLimits

0x19c4,	// (0x0004981e) main_video_pane_g4

0x19f8,	// (0x00049852) main_video_pane_g5_ParamLimits

0x19f8,	// (0x00049852) main_video_pane_g5

0xe44b,	// (0x000562a5) main_video_pane_g6_ParamLimits

0xe44b,	// (0x000562a5) main_video_pane_g6

0x0006,

0xf19b,	// (0x00056ff5) main_video_pane_g_ParamLimits

0xf19b,	// (0x00056ff5) main_video_pane_g

0x1a14,	// (0x0004986e) main_video_pane_t1_ParamLimits

0x1a14,	// (0x0004986e) main_video_pane_t1

0xe465,	// (0x000562bf) cams_zoom_pane_g1

0xe465,	// (0x000562bf) cams_zoom_pane_g2

0xe465,	// (0x000562bf) cams_zoom_pane_g3

0xe465,	// (0x000562bf) cams_zoom_pane_g4

0x0003,

0xf1aa,	// (0x00057004) cams_zoom_pane_g

0x1a6c,	// (0x000498c6) grid_cams_pane

0x1a86,	// (0x000498e0) linegrid_cams_pane

0x1a9a,	// (0x000498f4) cell_cams_pane_ParamLimits

0x1a9a,	// (0x000498f4) cell_cams_pane

0xe46f,	// (0x000562c9) cams_burst_image_pane

0xe477,	// (0x000562d1) cell_cams_pane_g1

0xd95c,	// (0x000557b6) grid_highlight_pane_cp03

0xe181,	// (0x00055fdb) mp_bg_pane_g1

0xd53f,	// (0x00055399) bg_list_pane_cp03

0xd53f,	// (0x00055399) bg_mp_pane

0xd53f,	// (0x00055399) grid_mp_pane

0xe465,	// (0x000562bf) media_player_g1

0xe9a0,	// (0x000567fa) media_player_t1

0xe9a0,	// (0x000567fa) media_player_t2

0xe9a0,	// (0x000567fa) media_player_t3

0xe9a0,	// (0x000567fa) media_player_t4

0xe9a0,	// (0x000567fa) media_player_t5

0xe9a0,	// (0x000567fa) media_player_t6

0xe9a0,	// (0x000567fa) media_player_t7

0x0006,

0xf51f,	// (0x00057379) media_player_t

0xd53f,	// (0x00055399) wait_bar_pane_cp02

0xf504,	// (0x0005735e) main_usb_pane_t

0xec0c,	// (0x00056a66) cell_mp_pane

0xe181,	// (0x00055fdb) cell_mp_pane_g1

0xd95c,	// (0x000557b6) grid_highlight_pane_cp06

0xe47f,	// (0x000562d9) grid_skin_colour_pane

0xe487,	// (0x000562e1) list_highlight_pane_cp03

0x1aba,	// (0x00049914) skin_g1

0xe48f,	// (0x000562e9) skin_t1

0xe49e,	// (0x000562f8) skin_t2

0x0001,

0xf1d8,	// (0x00057032) skin_t

0x1ac2,	// (0x0004991c) cell_skin_colour_pane_ParamLimits

0x1ac2,	// (0x0004991c) cell_skin_colour_pane

0xe4ac,	// (0x00056306) cell_skin_colour_pane_g1

0x1b3b,	// (0x00049995) call_video_g1_ParamLimits

0x1b3b,	// (0x00049995) call_video_g1

0x1b57,	// (0x000499b1) call_video_g2_ParamLimits

0x1b57,	// (0x000499b1) call_video_g2

0x0001,

0xf1dd,	// (0x00057037) call_video_g_ParamLimits

0xf1dd,	// (0x00057037) call_video_g

0x1ba9,	// (0x00049a03) call_video_uplink_pane_cp1_ParamLimits

0x1ba9,	// (0x00049a03) call_video_uplink_pane_cp1

0xe4be,	// (0x00056318) call_video_uplink_pane_cp2

0x1c48,	// (0x00049aa2) video_down_crop_pane_ParamLimits

0x1c48,	// (0x00049aa2) video_down_crop_pane

0x1d3f,	// (0x00049b99) video_down_pane_ParamLimits

0x1d3f,	// (0x00049b99) video_down_pane

0xe4c6,	// (0x00056320) video_down_subqcif_pane_ParamLimits

0xe4c6,	// (0x00056320) video_down_subqcif_pane

0xe4de,	// (0x00056338) video_down_subqcif_pane_cp_ParamLimits

0xe4de,	// (0x00056338) video_down_subqcif_pane_cp

0xe504,	// (0x0005635e) im_reading_pane_ParamLimits

0xe504,	// (0x0005635e) im_reading_pane

0x1e4f,	// (0x00049ca9) im_writing_pane_ParamLimits

0x1e4f,	// (0x00049ca9) im_writing_pane

0x1e65,	// (0x00049cbf) im_reading_pane_t1

0xe51e,	// (0x00056378) list_im_pane

0xe52f,	// (0x00056389) scroll_pane_cp07

0x1e9e,	// (0x00049cf8) im_writing_pane_t1_ParamLimits

0x1e9e,	// (0x00049cf8) im_writing_pane_t1

0xe548,	// (0x000563a2) im_writing_pane_t2_ParamLimits

0xe548,	// (0x000563a2) im_writing_pane_t2

0x0001,

0xf1e7,	// (0x00057041) im_writing_pane_t_ParamLimits

0xf1e7,	// (0x00057041) im_writing_pane_t

0xd95c,	// (0x000557b6) input_focus_pane_cp04

0xd95c,	// (0x000557b6) input_focus_pane_cp05

0x1eb3,	// (0x00049d0d) list_im_single_pane_ParamLimits

0x1eb3,	// (0x00049d0d) list_im_single_pane

0x1ec7,	// (0x00049d21) list_single_im_pane_t1

0xe42f,	// (0x00056289) blid_accuracy_pane

0xe42f,	// (0x00056289) blid_compass_pane

0x488d,	// (0x0004c6e7) main_location_t1

0x488d,	// (0x0004c6e7) main_location_t2

0x488d,	// (0x0004c6e7) main_location_t3

0x0002,

0xf52e,	// (0x00057388) main_location_t

0xd95c,	// (0x000557b6) aid_levels_location

0xe181,	// (0x00055fdb) blid_accuracy_pane_g1

0xe181,	// (0x00055fdb) blid_accuracy_pane_g2

0x0001,

0xf236,	// (0x00057090) blid_accuracy_pane_g

0xe590,	// (0x000563ea) wml_content_pane

0xe5ce,	// (0x00056428) wml_button_pane_ParamLimits

0xe5ce,	// (0x00056428) wml_button_pane

0x1ed6,	// (0x00049d30) wml_list_single_large_pane_ParamLimits

0x1ed6,	// (0x00049d30) wml_list_single_large_pane

0x1eeb,	// (0x00049d45) wml_list_single_medium_pane_ParamLimits

0x1eeb,	// (0x00049d45) wml_list_single_medium_pane

0x1f01,	// (0x00049d5b) wml_list_single_small_pane_ParamLimits

0x1f01,	// (0x00049d5b) wml_list_single_small_pane

0xe5e2,	// (0x0005643c) wml_selection_box_pane_ParamLimits

0xe5e2,	// (0x0005643c) wml_selection_box_pane

0xe5f5,	// (0x0005644f) wml_list_single_pane_t1

0xe604,	// (0x0005645e) wml_list_single_medium_pane_t1

0xe613,	// (0x0005646d) wml_list_single_large_pane_t1

0xe622,	// (0x0005647c) input_focus_pane_cp02_ParamLimits

0xe622,	// (0x0005647c) input_focus_pane_cp02

0xe635,	// (0x0005648f) wml_selection_box_pane_g1

0xe63e,	// (0x00056498) wml_selection_box_pane_t1_ParamLimits

0xe63e,	// (0x00056498) wml_selection_box_pane_t1

0xe169,	// (0x00055fc3) bg_wml_button_pane_ParamLimits

0xe169,	// (0x00055fc3) bg_wml_button_pane

0xe656,	// (0x000564b0) wml_button_pane_g1

0xe65e,	// (0x000564b8) wml_button_pane_t1

0xe656,	// (0x000564b0) wml_button_bg_pane_g1

0xe66e,	// (0x000564c8) wml_button_bg_pane_g2

0xe676,	// (0x000564d0) wml_button_bg_pane_g3

0xe67e,	// (0x000564d8) wml_button_bg_pane_g4

0xe686,	// (0x000564e0) wml_button_bg_pane_g5

0xe68e,	// (0x000564e8) wml_button_bg_pane_g6

0xe696,	// (0x000564f0) wml_button_bg_pane_g7

0xe69e,	// (0x000564f8) wml_button_bg_pane_g8

0xe6a6,	// (0x00056500) wml_button_bg_pane_g9

0x0008,

0xf1ec,	// (0x00057046) wml_button_bg_pane_g

0x1f19,	// (0x00049d73) bg_list_pane_cp02

0xe6ae,	// (0x00056508) mce_header_pane_ParamLimits

0xe6ae,	// (0x00056508) mce_header_pane

0xe6c4,	// (0x0005651e) mce_icon_pane

0xe6c4,	// (0x0005651e) mce_image_pane

0xe6cd,	// (0x00056527) mce_text_pane_ParamLimits

0xe6cd,	// (0x00056527) mce_text_pane

0x1f21,	// (0x00049d7b) scroll_pane_cp03

0xe5c6,	// (0x00056420) scroll_pane_cp04

0xe6e0,	// (0x0005653a) scroll_pane_cp05_ParamLimits

0xe6e0,	// (0x0005653a) scroll_pane_cp05

0x1f2b,	// (0x00049d85) mce_header_field_pane_ParamLimits

0x1f2b,	// (0x00049d85) mce_header_field_pane

0x1f42,	// (0x00049d9c) mce_header_field_pane_2_ParamLimits

0x1f42,	// (0x00049d9c) mce_header_field_pane_2

0x1f58,	// (0x00049db2) mce_header_field_pane_3

0x1f60,	// (0x00049dba) list_single_mce_message_pane_ParamLimits

0x1f60,	// (0x00049dba) list_single_mce_message_pane

0x1f75,	// (0x00049dcf) list_single_mce_smart_pane_ParamLimits

0x1f75,	// (0x00049dcf) list_single_mce_smart_pane

0xe6ec,	// (0x00056546) input_focus_pane_cp03

0xe6f5,	// (0x0005654f) list_header_data_pane

0x1f95,	// (0x00049def) mce_header_field_pane_t1

0x1fa5,	// (0x00049dff) list_single_mce_header_pane_ParamLimits

0x1fa5,	// (0x00049dff) list_single_mce_header_pane

0xe6fd,	// (0x00056557) list_single_mce_header_pane_t1

0xe70c,	// (0x00056566) list_single_mce_message_pane_g1

0xe714,	// (0x0005656e) list_single_mce_message_pane_t1

0x1fdf,	// (0x00049e39) bg_cale_heading_pane_cp01_ParamLimits

0x1fdf,	// (0x00049e39) bg_cale_heading_pane_cp01

0xe722,	// (0x0005657c) bg_cale_pane_cp02_ParamLimits

0xe722,	// (0x0005657c) bg_cale_pane_cp02

0x2019,	// (0x00049e73) cale_month_corner_pane

0x2038,	// (0x00049e92) cale_month_day_heading_pane_ParamLimits

0x2038,	// (0x00049e92) cale_month_day_heading_pane

0x208a,	// (0x00049ee4) cale_month_pane_g1_ParamLimits

0x208a,	// (0x00049ee4) cale_month_pane_g1

0x20b9,	// (0x00049f13) cale_month_pane_g2_ParamLimits

0x20b9,	// (0x00049f13) cale_month_pane_g2

0x20e9,	// (0x00049f43) cale_month_pane_g3_ParamLimits

0x20e9,	// (0x00049f43) cale_month_pane_g3

0x2125,	// (0x00049f7f) cale_month_pane_g4_ParamLimits

0x2125,	// (0x00049f7f) cale_month_pane_g4

0x2161,	// (0x00049fbb) cale_month_pane_g5_ParamLimits

0x2161,	// (0x00049fbb) cale_month_pane_g5

0x21a9,	// (0x0004a003) cale_month_pane_g6_ParamLimits

0x21a9,	// (0x0004a003) cale_month_pane_g6

0x21f5,	// (0x0004a04f) cale_month_pane_g7_ParamLimits

0x21f5,	// (0x0004a04f) cale_month_pane_g7

0x2249,	// (0x0004a0a3) cale_month_pane_g8_ParamLimits

0x2249,	// (0x0004a0a3) cale_month_pane_g8

0x229d,	// (0x0004a0f7) cale_month_pane_g9_ParamLimits

0x229d,	// (0x0004a0f7) cale_month_pane_g9

0x22ef,	// (0x0004a149) cale_month_pane_g10_ParamLimits

0x22ef,	// (0x0004a149) cale_month_pane_g10

0x2341,	// (0x0004a19b) cale_month_pane_g11_ParamLimits

0x2341,	// (0x0004a19b) cale_month_pane_g11

0x2393,	// (0x0004a1ed) cale_month_pane_g12_ParamLimits

0x2393,	// (0x0004a1ed) cale_month_pane_g12

0x23e5,	// (0x0004a23f) cale_month_pane_g13_ParamLimits

0x23e5,	// (0x0004a23f) cale_month_pane_g13

0x000c,

0xf1ff,	// (0x00057059) cale_month_pane_g_ParamLimits

0xf1ff,	// (0x00057059) cale_month_pane_g

0x2437,	// (0x0004a291) cale_month_week_pane

0x245b,	// (0x0004a2b5) grid_cale_month_pane_ParamLimits

0x245b,	// (0x0004a2b5) grid_cale_month_pane

0x24a4,	// (0x0004a2fe) cale_month_day_heading_pane_t1

0x252a,	// (0x0004a384) cale_month_day_heading_pane_t2

0x25a3,	// (0x0004a3fd) cale_month_day_heading_pane_t3

0x261c,	// (0x0004a476) cale_month_day_heading_pane_t4

0x269d,	// (0x0004a4f7) cale_month_day_heading_pane_t5

0x2726,	// (0x0004a580) cale_month_day_heading_pane_t6

0x27af,	// (0x0004a609) cale_month_day_heading_pane_t7

0x0006,

0xf21a,	// (0x00057074) cale_month_day_heading_pane_t

0xe3dd,	// (0x00056237) bg_cale_side_pane_cp01

0x2840,	// (0x0004a69a) cale_month_week_pane_t1

0x2859,	// (0x0004a6b3) cale_month_week_pane_t2

0x2872,	// (0x0004a6cc) cale_month_week_pane_t3

0x288b,	// (0x0004a6e5) cale_month_week_pane_t4

0x28a4,	// (0x0004a6fe) cale_month_week_pane_t5

0x28bd,	// (0x0004a717) cale_month_week_pane_t6

0x0005,

0xf229,	// (0x00057083) cale_month_week_pane_t

0x28d6,	// (0x0004a730) cell_cale_month_pane_ParamLimits

0x28d6,	// (0x0004a730) cell_cale_month_pane

0xaa61,	// (0x000528bb) cell_cale_month_pane_g1

0x2a04,	// (0x0004a85e) cell_cale_month_pane_t1_ParamLimits

0x2a04,	// (0x0004a85e) cell_cale_month_pane_t1

0xe3eb,	// (0x00056245) grid_highlight_pane_cp08

0xe181,	// (0x00055fdb) main_smil_g1

0x2a30,	// (0x0004a88a) smil_status_pane

0xe761,	// (0x000565bb) smil_text_pane

0x471b,	// (0x0004c575) bg_popup_call3_rect_pane_g8

0x4723,	// (0x0004c57d) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c2,	// (0x0005731c) bg_popup_call3_rect_pane_g

0x4ebb,	// (0x0004cd15) smil_status_volume_pane_g1

0xe76b,	// (0x000565c5) smil_status_pane_t1

0xabef,	// (0x00052a49) volume_smil_pane

0xe782,	// (0x000565dc) list_smil_text_pane

0x2a43,	// (0x0004a89d) scroll_pane_cp011

0x2a4e,	// (0x0004a8a8) smil_text_list_pane_t1_ParamLimits

0x2a4e,	// (0x0004a8a8) smil_text_list_pane_t1

0xaa6d,	// (0x000528c7) aid_volume_smil_ParamLimits

0xaa6d,	// (0x000528c7) aid_volume_smil

0xe181,	// (0x00055fdb) smil_volume_pane_g1

0xe181,	// (0x00055fdb) smil_volume_pane_g2

0x0001,

0xf236,	// (0x00057090) smil_volume_pane_g

0x134a,	// (0x000491a4) listscroll_cale_day_pane

0xe78c,	// (0x000565e6) bg_cale_pane

0xe7a4,	// (0x000565fe) list_cale_pane

0xe7c7,	// (0x00056621) scroll_pane_cp09

0xe7d8,	// (0x00056632) cale_bg_pane_g1

0xe7e0,	// (0x0005663a) cale_bg_pane_g2

0xe7e8,	// (0x00056642) cale_bg_pane_g3

0xe7f0,	// (0x0005664a) cale_bg_pane_g4

0xe7f8,	// (0x00056652) cale_bg_pane_g5

0xe800,	// (0x0005665a) cale_bg_pane_g6

0xe808,	// (0x00056662) cale_bg_pane_g7

0xe810,	// (0x0005666a) cale_bg_pane_g8

0xe818,	// (0x00056672) cale_bg_pane_g9

0x0008,

0xf23b,	// (0x00057095) cale_bg_pane_g

0x2a8a,	// (0x0004a8e4) list_cale_time_pane_ParamLimits

0x2a8a,	// (0x0004a8e4) list_cale_time_pane

0xe828,	// (0x00056682) list_cale_time_pane_g1_ParamLimits

0xe828,	// (0x00056682) list_cale_time_pane_g1

0xe834,	// (0x0005668e) list_cale_time_pane_g2_ParamLimits

0xe834,	// (0x0005668e) list_cale_time_pane_g2

0x2a9f,	// (0x0004a8f9) list_cale_time_pane_g3_ParamLimits

0x2a9f,	// (0x0004a8f9) list_cale_time_pane_g3

0x2aad,	// (0x0004a907) list_cale_time_pane_g4_ParamLimits

0x2aad,	// (0x0004a907) list_cale_time_pane_g4

0x2abb,	// (0x0004a915) list_cale_time_pane_g5_ParamLimits

0x2abb,	// (0x0004a915) list_cale_time_pane_g5

0x0005,

0xf24e,	// (0x000570a8) list_cale_time_pane_g_ParamLimits

0xf24e,	// (0x000570a8) list_cale_time_pane_g

0xe84e,	// (0x000566a8) list_cale_time_pane_t1_ParamLimits

0xe84e,	// (0x000566a8) list_cale_time_pane_t1

0xe876,	// (0x000566d0) list_cale_time_pane_t2_ParamLimits

0xe876,	// (0x000566d0) list_cale_time_pane_t2

0x2d1d,	// (0x0004ab77) aid_blid_cardinal_pane

0x2d5b,	// (0x0004abb5) compass_pane_t4

0xe89e,	// (0x000566f8) list_cale_time_pane_t4_ParamLimits

0xe89e,	// (0x000566f8) list_cale_time_pane_t4

0x2d69,	// (0x0004abc3) compass_pane_t5

0x2d77,	// (0x0004abd1) compass_pane_t6

0x2d85,	// (0x0004abdf) compass_pane_t7

0xed51,	// (0x00056bab) navi_pane_cc_t1

0xef2e,	// (0x00056d88) aid_phob_thumbnail_center_pane

0x310b,	// (0x0004af65) main_postcard_pane_g4_ParamLimits

0x0002,

0xf25b,	// (0x000570b5) list_cale_time_pane_t_ParamLimits

0xf25b,	// (0x000570b5) list_cale_time_pane_t

0xd5b3,	// (0x0005540d) bg_popup_window_pane_cp02_ParamLimits

0xd5b3,	// (0x0005540d) bg_popup_window_pane_cp02

0xe8c6,	// (0x00056720) heading_pane_cp01_ParamLimits

0xe8c6,	// (0x00056720) heading_pane_cp01

0xe8d2,	// (0x0005672c) loc_req_pane_ParamLimits

0xe8d2,	// (0x0005672c) loc_req_pane

0xe8e2,	// (0x0005673c) loc_type_pane_ParamLimits

0xe8e2,	// (0x0005673c) loc_type_pane

0xe8f4,	// (0x0005674e) loc_type_pane_t1_ParamLimits

0xe8f4,	// (0x0005674e) loc_type_pane_t1

0xe906,	// (0x00056760) loc_type_pane_t2_ParamLimits

0xe906,	// (0x00056760) loc_type_pane_t2

0xe918,	// (0x00056772) loc_type_pane_t3_ParamLimits

0xe918,	// (0x00056772) loc_type_pane_t3

0x0002,

0xf262,	// (0x000570bc) loc_type_pane_t_ParamLimits

0xf262,	// (0x000570bc) loc_type_pane_t

0xe92a,	// (0x00056784) list_loc_req_pane

0xe934,	// (0x0005678e) scroll_pane_cp012

0x2ac9,	// (0x0004a923) list_single_loc_request_popup_menu_pane_ParamLimits

0x2ac9,	// (0x0004a923) list_single_loc_request_popup_menu_pane

0xe93f,	// (0x00056799) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe93f,	// (0x00056799) list_single_loc_request_popup_menu_pane_g1

0xe94b,	// (0x000567a5) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe94b,	// (0x000567a5) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf269,	// (0x000570c3) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf269,	// (0x000570c3) list_single_loc_request_popup_menu_pane_g

0xe957,	// (0x000567b1) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe957,	// (0x000567b1) list_single_loc_request_popup_menu_pane_t1

0xe169,	// (0x00055fc3) bg_popup_window_pane_cp03_ParamLimits

0xe169,	// (0x00055fc3) bg_popup_window_pane_cp03

0xe96d,	// (0x000567c7) heading_loc_req_pane_ParamLimits

0xe96d,	// (0x000567c7) heading_loc_req_pane

0x2ad6,	// (0x0004a930) popup_dyc_status_message_window_g1_ParamLimits

0x2ad6,	// (0x0004a930) popup_dyc_status_message_window_g1

0x2aea,	// (0x0004a944) popup_dyc_status_message_window_t1_ParamLimits

0x2aea,	// (0x0004a944) popup_dyc_status_message_window_t1

0x2aff,	// (0x0004a959) popup_dyc_status_message_window_t2_ParamLimits

0x2aff,	// (0x0004a959) popup_dyc_status_message_window_t2

0x2b14,	// (0x0004a96e) popup_dyc_status_message_window_t3_ParamLimits

0x2b14,	// (0x0004a96e) popup_dyc_status_message_window_t3

0x0002,

0xf26e,	// (0x000570c8) popup_dyc_status_message_window_t_ParamLimits

0xf26e,	// (0x000570c8) popup_dyc_status_message_window_t

0xd95c,	// (0x000557b6) bg_heading_pane_cp01

0xe979,	// (0x000567d3) heading_loc_req_pane_g1

0xe981,	// (0x000567db) heading_loc_req_pane_g2

0xe989,	// (0x000567e3) heading_loc_req_pane_g3

0x0002,

0xf275,	// (0x000570cf) heading_loc_req_pane_g

0xe991,	// (0x000567eb) heading_loc_req_pane_t1

0xe9b0,	// (0x0005680a) bg_popup_sub_pane_cp01_ParamLimits

0xe9b0,	// (0x0005680a) bg_popup_sub_pane_cp01

0xe9be,	// (0x00056818) popup_cale_events_window_g1_ParamLimits

0xe9be,	// (0x00056818) popup_cale_events_window_g1

0xe9de,	// (0x00056838) popup_cale_events_window_g2_ParamLimits

0xe9de,	// (0x00056838) popup_cale_events_window_g2

0x0001,

0xf297,	// (0x000570f1) popup_cale_events_window_g_ParamLimits

0xf297,	// (0x000570f1) popup_cale_events_window_g

0xe9fe,	// (0x00056858) popup_cale_events_window_t1_ParamLimits

0xe9fe,	// (0x00056858) popup_cale_events_window_t1

0xea10,	// (0x0005686a) popup_cale_events_window_t2_ParamLimits

0xea10,	// (0x0005686a) popup_cale_events_window_t2

0xea4e,	// (0x000568a8) popup_cale_events_window_t3_ParamLimits

0xea4e,	// (0x000568a8) popup_cale_events_window_t3

0xea88,	// (0x000568e2) popup_cale_events_window_t4_ParamLimits

0xea88,	// (0x000568e2) popup_cale_events_window_t4

0x0003,

0xf29c,	// (0x000570f6) popup_cale_events_window_t_ParamLimits

0xf29c,	// (0x000570f6) popup_cale_events_window_t

0x2b3c,	// (0x0004a996) call_type_pane

0x2b4c,	// (0x0004a9a6) popup_call_status_window_g1

0x2b60,	// (0x0004a9ba) popup_call_status_window_g2

0x2b74,	// (0x0004a9ce) popup_call_status_window_g3

0x0002,

0xf2a5,	// (0x000570ff) popup_call_status_window_g

0xeabe,	// (0x00056918) call_type_pane_g1

0xeac7,	// (0x00056921) call_type_pane_g2

0x0001,

0xf2ac,	// (0x00057106) call_type_pane_g

0xd95c,	// (0x000557b6) bg_popup_sub_pane_cp02

0xead0,	// (0x0005692a) listscroll_popup_wml_pane

0xead8,	// (0x00056932) list_wml_pane

0xeae2,	// (0x0005693c) scroll_pane_cp013

0xeaed,	// (0x00056947) list_single_graphic_popup_wml_pane_ParamLimits

0xeaed,	// (0x00056947) list_single_graphic_popup_wml_pane

0xe181,	// (0x00055fdb) list_single_graphic_popup_wml_pane_g1

0xeb01,	// (0x0005695b) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b1,	// (0x0005710b) list_single_graphic_popup_wml_pane_g

0xeb09,	// (0x00056963) list_single_graphic_popup_wml_pane_t1

0xeb1f,	// (0x00056979) aid_call_pane

0xe161,	// (0x00055fbb) popup_clock_analogue_window_g1

0xe161,	// (0x00055fbb) popup_clock_analogue_window_g2

0xaa9b,	// (0x000528f5) popup_clock_analogue_window_g3

0xaa9b,	// (0x000528f5) popup_clock_analogue_window_g4

0xe181,	// (0x00055fdb) popup_clock_analogue_window_g5

0x0004,

0xf2b6,	// (0x00057110) popup_clock_analogue_window_g

0xaaa3,	// (0x000528fd) popup_clock_analogue_window_t1

0xaab1,	// (0x0005290b) clock_digital_number_pane_ParamLimits

0xaab1,	// (0x0005290b) clock_digital_number_pane

0xaabd,	// (0x00052917) clock_digital_number_pane_cp02_ParamLimits

0xaabd,	// (0x00052917) clock_digital_number_pane_cp02

0xaac9,	// (0x00052923) clock_digital_number_pane_cp03_ParamLimits

0xaac9,	// (0x00052923) clock_digital_number_pane_cp03

0xaad5,	// (0x0005292f) clock_digital_number_pane_cp04_ParamLimits

0xaad5,	// (0x0005292f) clock_digital_number_pane_cp04

0xaae5,	// (0x0005293f) clock_digital_separator_pane_ParamLimits

0xaae5,	// (0x0005293f) clock_digital_separator_pane

0xaaf1,	// (0x0005294b) popup_clock_digital_window_t1

0xe181,	// (0x00055fdb) clock_digital_number_pane_g1

0xe181,	// (0x00055fdb) clock_digital_number_pane_g2

0x0001,

0xf236,	// (0x00057090) clock_digital_number_pane_g

0xe181,	// (0x00055fdb) clock_digital_separator_pane_g1

0xe181,	// (0x00055fdb) clock_digital_separator_pane_g2

0x0001,

0xf236,	// (0x00057090) clock_digital_separator_pane_g

0xd95c,	// (0x000557b6) bg_popup_window_pane_cp04

0xeb27,	// (0x00056981) heading_pane_cp03

0xe42f,	// (0x00056289) listscroll_popup_gms_pane

0xd95c,	// (0x000557b6) grid_large_graphic_popup_pane

0xeb30,	// (0x0005698a) listscroll_popup_gms_pane_g1

0xeb39,	// (0x00056993) listscroll_popup_gms_pane_g2

0x0001,

0xf2c1,	// (0x0005711b) listscroll_popup_gms_pane_g

0xeb42,	// (0x0005699c) scroll_pane_cp014

0xe1d6,	// (0x00056030) cell_large_graphic_popup_pane_ParamLimits

0xe1d6,	// (0x00056030) cell_large_graphic_popup_pane

0xe1e4,	// (0x0005603e) cell_large_graphic_popup_pane_g1_ParamLimits

0xe1e4,	// (0x0005603e) cell_large_graphic_popup_pane_g1

0xeb4b,	// (0x000569a5) cell_large_graphic_popup_pane_g2_ParamLimits

0xeb4b,	// (0x000569a5) cell_large_graphic_popup_pane_g2

0xeb59,	// (0x000569b3) cell_large_graphic_popup_pane_g3_ParamLimits

0xeb59,	// (0x000569b3) cell_large_graphic_popup_pane_g3

0xeb67,	// (0x000569c1) cell_large_graphic_popup_pane_g4_ParamLimits

0xeb67,	// (0x000569c1) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c6,	// (0x00057120) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c6,	// (0x00057120) cell_large_graphic_popup_pane_g

0xd95c,	// (0x000557b6) grid_highlight_pane_cp010

0xe181,	// (0x00055fdb) bg_popup_call_pane_g1

0xeb78,	// (0x000569d2) list_single_graphic_popup_conf_pane_ParamLimits

0xeb78,	// (0x000569d2) list_single_graphic_popup_conf_pane

0xeb8b,	// (0x000569e5) list_highlight_pane_cp01

0xeb94,	// (0x000569ee) list_single_graphic_popup_conf_pane_g1

0xeb9c,	// (0x000569f6) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2cf,	// (0x00057129) list_single_graphic_popup_conf_pane_g

0xeba4,	// (0x000569fe) list_single_graphic_popup_conf_pane_t1

0xebb2,	// (0x00056a0c) linegrid_cams_pane_g1

0x2b83,	// (0x0004a9dd) linegrid_cams_pane_g2

0xe36e,	// (0x000561c8) linegrid_cams_pane_g3

0xebbb,	// (0x00056a15) linegrid_cams_pane_g4

0x2b8c,	// (0x0004a9e6) linegrid_cams_pane_g5

0x2b95,	// (0x0004a9ef) linegrid_cams_pane_g6

0xe41e,	// (0x00056278) linegrid_cams_pane_g7

0x0006,

0xf2d4,	// (0x0005712e) linegrid_cams_pane_g

0xebc4,	// (0x00056a1e) popup_clock_analogue_window

0xebc4,	// (0x00056a1e) popup_clock_digital_window

0xd95c,	// (0x000557b6) popup_phob_thumbnail_window

0xe181,	// (0x00055fdb) call_video_uplink_pane_g1

0xebcd,	// (0x00056a27) call_video_uplink_pane_g2

0x0001,

0xf2e3,	// (0x0005713d) call_video_uplink_pane_g

0xebd5,	// (0x00056a2f) video_uplink_pane

0xebdd,	// (0x00056a37) mce_image_pane_g1

0x2ba0,	// (0x0004a9fa) mce_image_pane_g2

0x2baa,	// (0x0004aa04) mce_image_pane_g3

0x2bb2,	// (0x0004aa0c) mce_image_pane_g4

0x2bba,	// (0x0004aa14) mce_image_pane_g5

0x0004,

0xf2e8,	// (0x00057142) mce_image_pane_g

0xebe7,	// (0x00056a41) control_top_pane_stacon_cp01_ParamLimits

0xebe7,	// (0x00056a41) control_top_pane_stacon_cp01

0xebfb,	// (0x00056a55) uni_indicator_pane_stacon_cp01_ParamLimits

0xebfb,	// (0x00056a55) uni_indicator_pane_stacon_cp01

0xec0c,	// (0x00056a66) bg_popup_sub_pane_cp03

0xec16,	// (0x00056a70) chi_dic_find_pane

0x2bc2,	// (0x0004aa1c) listscroll_chi_dic_pane

0xec1e,	// (0x00056a78) main_pane_chidic_g1

0xec26,	// (0x00056a80) chi_dic_find_pane_t1

0xec34,	// (0x00056a8e) find_chidic_pane

0xec3d,	// (0x00056a97) chi_dic_list_pane_ParamLimits

0xec3d,	// (0x00056a97) chi_dic_list_pane

0xec4e,	// (0x00056aa8) scroll_pane_cp020

0xec56,	// (0x00056ab0) find_chidic_pane_t1

0xd95c,	// (0x000557b6) input_focus_pane_cp06

0x2bd6,	// (0x0004aa30) list_chi_dic_pane_ParamLimits

0x2bd6,	// (0x0004aa30) list_chi_dic_pane

0x2be8,	// (0x0004aa42) list_chi_dic_pane_t1_ParamLimits

0x2be8,	// (0x0004aa42) list_chi_dic_pane_t1

0xd95c,	// (0x000557b6) list_highlight_pane_cp020

0xec65,	// (0x00056abf) bg_cale_heading_pane_g1

0x2bfb,	// (0x0004aa55) bg_cale_heading_pane_g2

0x2c03,	// (0x0004aa5d) bg_cale_heading_pane_g3

0x2c0b,	// (0x0004aa65) bg_cale_heading_pane_g4

0x2c15,	// (0x0004aa6f) bg_cale_heading_pane_g5

0x2c1f,	// (0x0004aa79) bg_cale_heading_pane_g6

0x2c27,	// (0x0004aa81) bg_cale_heading_pane_g7

0x2c2f,	// (0x0004aa89) bg_cale_heading_pane_g8

0x2c39,	// (0x0004aa93) bg_cale_heading_pane_g9

0x0008,

0xf2f3,	// (0x0005714d) bg_cale_heading_pane_g

0xec65,	// (0x00056abf) bg_cale_side_pane_g1

0x2c43,	// (0x0004aa9d) bg_cale_side_pane_g2

0x2c4b,	// (0x0004aaa5) bg_cale_side_pane_g3

0x2c53,	// (0x0004aaad) bg_cale_side_pane_g4

0x2c5b,	// (0x0004aab5) bg_cale_side_pane_g5

0x2c63,	// (0x0004aabd) bg_cale_side_pane_g6

0x2c6b,	// (0x0004aac5) bg_cale_side_pane_g7

0x2c73,	// (0x0004aacd) bg_cale_side_pane_g8

0x2c7b,	// (0x0004aad5) bg_cale_side_pane_g9

0x0008,

0xf306,	// (0x00057160) bg_cale_side_pane_g

0x2c83,	// (0x0004aadd) popup_call_status_window_ParamLimits

0x2c83,	// (0x0004aadd) popup_call_status_window

0xec6d,	// (0x00056ac7) stacon_top_pane

0xec75,	// (0x00056acf) status_pane_ParamLimits

0xec75,	// (0x00056acf) status_pane

0xec8a,	// (0x00056ae4) status_small_pane

0xec92,	// (0x00056aec) control_pane

0xd95c,	// (0x000557b6) stacon_bottom_pane

0xec9a,	// (0x00056af4) list_single_mce_smart_pane_t1_ParamLimits

0xec9a,	// (0x00056af4) list_single_mce_smart_pane_t1

0xecad,	// (0x00056b07) list_single_mce_smart_pane_t2_ParamLimits

0xecad,	// (0x00056b07) list_single_mce_smart_pane_t2

0x0001,

0xf319,	// (0x00057173) list_single_mce_smart_pane_t_ParamLimits

0xf319,	// (0x00057173) list_single_mce_smart_pane_t

0x2ccc,	// (0x0004ab26) compass_pane

0x2cd5,	// (0x0004ab2f) main_location2_pane_t1

0x2ce7,	// (0x0004ab41) main_location2_pane_t2

0x2cf9,	// (0x0004ab53) main_location2_pane_t3

0x0003,

0xf31e,	// (0x00057178) main_location2_pane_t

0xeccc,	// (0x00056b26) compass_pane_g1_ParamLimits

0xeccc,	// (0x00056b26) compass_pane_g1

0x2d3d,	// (0x0004ab97) compass_pane_t1

0x2d4c,	// (0x0004aba6) compass_pane_t2

0x0005,

0xf327,	// (0x00057181) compass_pane_t

0x2d93,	// (0x0004abed) text_secondary_cp61

0xed48,	// (0x00056ba2) navi_pane_cams_g5

0xedc4,	// (0x00056c1e) navi_pane_im_t1

0xedd2,	// (0x00056c2c) navi_pane_mp_g1_ParamLimits

0xedd2,	// (0x00056c2c) navi_pane_mp_g1

0xede6,	// (0x00056c40) navi_pane_mp_g2_ParamLimits

0xede6,	// (0x00056c40) navi_pane_mp_g2

0xedf2,	// (0x00056c4c) navi_pane_mp_g3_ParamLimits

0xedf2,	// (0x00056c4c) navi_pane_mp_g3

0x0002,

0xf33b,	// (0x00057195) navi_pane_mp_g_ParamLimits

0xf33b,	// (0x00057195) navi_pane_mp_g

0xedfe,	// (0x00056c58) navi_pane_mp_t1

0xee0c,	// (0x00056c66) navi_pane_mp_t2

0x0002,

0xf342,	// (0x0005719c) navi_pane_mp_t

0xee77,	// (0x00056cd1) navi_pane_vt_g1

0xedfe,	// (0x00056c58) navi_pane_vt_t1

0xee7f,	// (0x00056cd9) navi_slider_pane

0xe42f,	// (0x00056289) zooming_pane

0xee8f,	// (0x00056ce9) navi_slider_pane_g1

0xab0e,	// (0x00052968) navi_slider_pane_g2

0x0006,

0xf349,	// (0x000571a3) navi_slider_pane_g

0xeeb3,	// (0x00056d0d) aid_levels_zoom

0xeebb,	// (0x00056d15) zooming_pane_g1

0xeec3,	// (0x00056d1d) zooming_pane_g2

0xeec3,	// (0x00056d1d) zooming_pane_g3

0x0002,

0xf358,	// (0x000571b2) zooming_pane_g

0xeecb,	// (0x00056d25) level_10_zoom

0xeed4,	// (0x00056d2e) level_11_zoom

0xeedd,	// (0x00056d37) level_1_zoom

0xeee6,	// (0x00056d40) level_2_zoom

0xeeef,	// (0x00056d49) level_3_zoom

0xeef8,	// (0x00056d52) level_4_zoom

0xef01,	// (0x00056d5b) level_5_zoom

0xef0a,	// (0x00056d64) level_6_zoom

0xef13,	// (0x00056d6d) level_7_zoom

0xef1c,	// (0x00056d76) level_8_zoom

0xef25,	// (0x00056d7f) level_9_zoom

0xef36,	// (0x00056d90) popup_phob_thumbnail_window_g1

0xef3e,	// (0x00056d98) popup_phob_thumbnail_window_g2

0x0001,

0xf35f,	// (0x000571b9) popup_phob_thumbnail_window_g

0x48f2,	// (0x0004c74c) level_1_location

0x48fa,	// (0x0004c754) level_2_location

0x4902,	// (0x0004c75c) level_3_location

0x490a,	// (0x0004c764) level_4_location

0xe42f,	// (0x00056289) level_5_location

0x2de4,	// (0x0004ac3e) mce_icon_pane_g1

0x2dee,	// (0x0004ac48) mce_icon_pane_g2

0x0001,

0xf364,	// (0x000571be) mce_icon_pane_g

0xef46,	// (0x00056da0) main_mup_pane_g1_ParamLimits

0xef46,	// (0x00056da0) main_mup_pane_g1

0xef46,	// (0x00056da0) main_mup_pane_g2_ParamLimits

0xef46,	// (0x00056da0) main_mup_pane_g2

0xef46,	// (0x00056da0) main_mup_pane_g3_ParamLimits

0xef46,	// (0x00056da0) main_mup_pane_g3

0xef46,	// (0x00056da0) main_mup_pane_g4_ParamLimits

0xef46,	// (0x00056da0) main_mup_pane_g4

0xef46,	// (0x00056da0) main_mup_pane_g5_ParamLimits

0xef46,	// (0x00056da0) main_mup_pane_g5

0xef46,	// (0x00056da0) main_mup_pane_g6_ParamLimits

0xef46,	// (0x00056da0) main_mup_pane_g6

0xef46,	// (0x00056da0) main_mup_pane_g7_ParamLimits

0xef46,	// (0x00056da0) main_mup_pane_g7

0xef46,	// (0x00056da0) main_mup_pane_g8_ParamLimits

0xef46,	// (0x00056da0) main_mup_pane_g8

0xef46,	// (0x00056da0) main_mup_pane_g9_ParamLimits

0xef46,	// (0x00056da0) main_mup_pane_g9

0xef46,	// (0x00056da0) main_mup_pane_g10_ParamLimits

0xef46,	// (0x00056da0) main_mup_pane_g10

0xef46,	// (0x00056da0) main_mup_pane_g11_ParamLimits

0xef46,	// (0x00056da0) main_mup_pane_g11

0xe1e4,	// (0x0005603e) main_mup_pane_g12_ParamLimits

0xe1e4,	// (0x0005603e) main_mup_pane_g12

0xef46,	// (0x00056da0) main_mup_pane_g13_ParamLimits

0xef46,	// (0x00056da0) main_mup_pane_g13

0x000c,

0xf369,	// (0x000571c3) main_mup_pane_g_ParamLimits

0xf369,	// (0x000571c3) main_mup_pane_g

0xef54,	// (0x00056dae) main_mup_pane_t1_ParamLimits

0xef54,	// (0x00056dae) main_mup_pane_t1

0xef54,	// (0x00056dae) main_mup_pane_t2_ParamLimits

0xef54,	// (0x00056dae) main_mup_pane_t2

0xef54,	// (0x00056dae) main_mup_pane_t3_ParamLimits

0xef54,	// (0x00056dae) main_mup_pane_t3

0xe437,	// (0x00056291) main_mup_pane_t4_ParamLimits

0xe437,	// (0x00056291) main_mup_pane_t4

0xe437,	// (0x00056291) main_mup_pane_t5_ParamLimits

0xe437,	// (0x00056291) main_mup_pane_t5

0xef68,	// (0x00056dc2) main_mup_pane_t6_ParamLimits

0xef68,	// (0x00056dc2) main_mup_pane_t6

0x0005,

0xf384,	// (0x000571de) main_mup_pane_t_ParamLimits

0xf384,	// (0x000571de) main_mup_pane_t

0xe1d6,	// (0x00056030) mup_progress_pane_ParamLimits

0xe1d6,	// (0x00056030) mup_progress_pane

0xef7c,	// (0x00056dd6) mup_visualizer_pane_ParamLimits

0xef7c,	// (0x00056dd6) mup_visualizer_pane

0xef7c,	// (0x00056dd6) mup_volume_pane_ParamLimits

0xef7c,	// (0x00056dd6) mup_volume_pane

0xe1f2,	// (0x0005604c) mup_visualizer_pane_g1_ParamLimits

0xe1f2,	// (0x0005604c) mup_visualizer_pane_g1

0xef8a,	// (0x00056de4) mup_visualizer_pane_g2_ParamLimits

0xef8a,	// (0x00056de4) mup_visualizer_pane_g2

0xe1e4,	// (0x0005603e) mup_visualizer_pane_g3_ParamLimits

0xe1e4,	// (0x0005603e) mup_visualizer_pane_g3

0x0002,

0xf391,	// (0x000571eb) mup_visualizer_pane_g_ParamLimits

0xf391,	// (0x000571eb) mup_visualizer_pane_g

0xe465,	// (0x000562bf) mup_volume_pane_g1

0xe465,	// (0x000562bf) mup_volume_pane_g2

0x0001,

0xf398,	// (0x000571f2) mup_volume_pane_g

0xe465,	// (0x000562bf) mup_progress_pane_g1

0xe465,	// (0x000562bf) mup_progress_pane_g2

0xe465,	// (0x000562bf) mup_progress_pane_g3

0x0002,

0xf39d,	// (0x000571f7) mup_progress_pane_g

0xd95c,	// (0x000557b6) bg_popup_window_pane_cp05

0xef98,	// (0x00056df2) heading_pane_cp02_ParamLimits

0xef98,	// (0x00056df2) heading_pane_cp02

0xefb2,	// (0x00056e0c) list_popup_blid_pane

0xefba,	// (0x00056e14) list_blid_sat_info_pane_ParamLimits

0xefba,	// (0x00056e14) list_blid_sat_info_pane

0xefcd,	// (0x00056e27) list_blid_sat_info_pane_g1

0xefd5,	// (0x00056e2f) list_blid_sat_info_pane_t1

0x2eee,	// (0x0004ad48) mup_equalizer_pane_ParamLimits

0x2eee,	// (0x0004ad48) mup_equalizer_pane

0x2f07,	// (0x0004ad61) mup_equalizer_pane_cp1_ParamLimits

0x2f07,	// (0x0004ad61) mup_equalizer_pane_cp1

0x2f24,	// (0x0004ad7e) mup_equalizer_pane_cp2_ParamLimits

0x2f24,	// (0x0004ad7e) mup_equalizer_pane_cp2

0x2f41,	// (0x0004ad9b) mup_equalizer_pane_cp3_ParamLimits

0x2f41,	// (0x0004ad9b) mup_equalizer_pane_cp3

0x2f62,	// (0x0004adbc) mup_equalizer_pane_cp4_ParamLimits

0x2f62,	// (0x0004adbc) mup_equalizer_pane_cp4

0x2f83,	// (0x0004addd) mup_equalizer_pane_cp5

0x2f97,	// (0x0004adf1) mup_equalizer_pane_cp6

0x2fab,	// (0x0004ae05) mup_equalizer_pane_cp7

0x47a3,	// (0x0004c5fd) bg_popup_call_poc_act_pane_g9

0x47ab,	// (0x0004c605) bg_popup_call_poc_act_pane_g10

0x47b3,	// (0x0004c60d) bg_popup_call_poc_act_pane_g11

0x000a,

0xe169,	// (0x00055fc3) mup_scale_pane

0xe181,	// (0x00055fdb) mup_scale_pane_g1

0xefe3,	// (0x00056e3d) mup_scale_pane_g2

0x0006,

0xf3b9,	// (0x00057213) mup_scale_pane_g

0xf007,	// (0x00056e61) msg_data_pane

0xf00f,	// (0x00056e69) scroll_pane_cp017

0x049f,	// (0x000482f9) bg_list_pane_cp04_ParamLimits

0x049f,	// (0x000482f9) bg_list_pane_cp04

0xf017,	// (0x00056e71) msg_data_pane_g1

0x2fd1,	// (0x0004ae2b) msg_data_pane_g2

0x2fdb,	// (0x0004ae35) msg_data_pane_g3

0x2fe3,	// (0x0004ae3d) msg_data_pane_g4

0x2feb,	// (0x0004ae45) msg_data_pane_g5

0x2ff3,	// (0x0004ae4d) msg_data_pane_g6

0x2ffb,	// (0x0004ae55) msg_data_pane_g7

0x0006,

0xf3c8,	// (0x00057222) msg_data_pane_g

0x04b7,	// (0x00048311) msg_text_pane_ParamLimits

0x04b7,	// (0x00048311) msg_text_pane

0x3003,	// (0x0004ae5d) qrid_highlight_pane_cp011_ParamLimits

0x3003,	// (0x0004ae5d) qrid_highlight_pane_cp011

0xd95c,	// (0x000557b6) msg_body_pane

0xd95c,	// (0x000557b6) msg_header_pane

0xf028,	// (0x00056e82) input_focus_pane_cp07

0x04f1,	// (0x0004834b) msg_header_pane_t1_ParamLimits

0x04f1,	// (0x0004834b) msg_header_pane_t1

0x0507,	// (0x00048361) msg_header_pane_t2_ParamLimits

0x0507,	// (0x00048361) msg_header_pane_t2

0x0001,

0xf3dc,	// (0x00057236) msg_header_pane_t_ParamLimits

0xf3dc,	// (0x00057236) msg_header_pane_t

0xf03d,	// (0x00056e97) msg_body_pane_g1

0x051e,	// (0x00048378) msg_body_pane_t1_ParamLimits

0x051e,	// (0x00048378) msg_body_pane_t1

0xab28,	// (0x00052982) msg_body_pane_t2_ParamLimits

0xab28,	// (0x00052982) msg_body_pane_t2

0xab3a,	// (0x00052994) msg_body_pane_t3_ParamLimits

0xab3a,	// (0x00052994) msg_body_pane_t3

0x0002,

0xf3e1,	// (0x0005723b) msg_body_pane_t_ParamLimits

0xf3e1,	// (0x0005723b) msg_body_pane_t

0x3053,	// (0x0004aead) main_viewer_pane_g1_ParamLimits

0x3053,	// (0x0004aead) main_viewer_pane_g1

0x3061,	// (0x0004aebb) main_viewer_pane_g2_ParamLimits

0x3061,	// (0x0004aebb) main_viewer_pane_g2

0x306f,	// (0x0004aec9) main_viewer_pane_g3_ParamLimits

0x306f,	// (0x0004aec9) main_viewer_pane_g3

0x307e,	// (0x0004aed8) main_viewer_pane_g4_ParamLimits

0x307e,	// (0x0004aed8) main_viewer_pane_g4

0xab64,	// (0x000529be) main_viewer_pane_g5_ParamLimits

0xab64,	// (0x000529be) main_viewer_pane_g5

0xab64,	// (0x000529be) main_viewer_pane_g7_ParamLimits

0xab64,	// (0x000529be) main_viewer_pane_g7

0xab76,	// (0x000529d0) main_viewer_pane_g8_ParamLimits

0xab76,	// (0x000529d0) main_viewer_pane_g8

0x0007,

0xf3f1,	// (0x0005724b) main_viewer_pane_g_ParamLimits

0xf3f1,	// (0x0005724b) main_viewer_pane_g

0x308d,	// (0x0004aee7) viewer_content_pane_ParamLimits

0x308d,	// (0x0004aee7) viewer_content_pane

0x30c8,	// (0x0004af22) main_postcard_pane_g1_ParamLimits

0x30c8,	// (0x0004af22) main_postcard_pane_g1

0x30de,	// (0x0004af38) main_postcard_pane_g2_ParamLimits

0x30de,	// (0x0004af38) main_postcard_pane_g2

0x30f4,	// (0x0004af4e) main_postcard_pane_g3_ParamLimits

0x30f4,	// (0x0004af4e) main_postcard_pane_g3

0x0005,

0xf402,	// (0x0005725c) main_postcard_pane_g_ParamLimits

0xf402,	// (0x0005725c) main_postcard_pane_g

0x310b,	// (0x0004af65) main_postcard_pane_g4

0x4ece,	// (0x0004cd28) smil_status_volume_pane_g2

0x314e,	// (0x0004afa8) postcard_pane_ParamLimits

0x314e,	// (0x0004afa8) postcard_pane

0x3190,	// (0x0004afea) postcard_pane_g1_ParamLimits

0x3190,	// (0x0004afea) postcard_pane_g1

0x319e,	// (0x0004aff8) postcard_pane_g2_ParamLimits

0x319e,	// (0x0004aff8) postcard_pane_g2

0x31aa,	// (0x0004b004) postcard_pane_g3_ParamLimits

0x31aa,	// (0x0004b004) postcard_pane_g3

0x31b6,	// (0x0004b010) postcard_pane_g4_ParamLimits

0x31b6,	// (0x0004b010) postcard_pane_g4

0x31c4,	// (0x0004b01e) postcard_pane_g5_ParamLimits

0x31c4,	// (0x0004b01e) postcard_pane_g5

0x31d9,	// (0x0004b033) postcard_pane_g6_ParamLimits

0x31d9,	// (0x0004b033) postcard_pane_g6

0x3190,	// (0x0004afea) postcard_pane_g7_ParamLimits

0x3190,	// (0x0004afea) postcard_pane_g7

0x0006,

0xf40f,	// (0x00057269) postcard_pane_g_ParamLimits

0xf40f,	// (0x00057269) postcard_pane_g

0x31ed,	// (0x0004b047) main_mp2_pane_g1_ParamLimits

0x31ed,	// (0x0004b047) main_mp2_pane_g1

0x31f9,	// (0x0004b053) main_mp2_pane_g2_ParamLimits

0x31f9,	// (0x0004b053) main_mp2_pane_g2

0x3205,	// (0x0004b05f) main_mp2_pane_g3_ParamLimits

0x3205,	// (0x0004b05f) main_mp2_pane_g3

0x0002,

0xf41e,	// (0x00057278) main_mp2_pane_g_ParamLimits

0xf41e,	// (0x00057278) main_mp2_pane_g

0x3211,	// (0x0004b06b) main_mp2_pane_t1_ParamLimits

0x3211,	// (0x0004b06b) main_mp2_pane_t1

0x3226,	// (0x0004b080) main_mp2_pane_t2_ParamLimits

0x3226,	// (0x0004b080) main_mp2_pane_t2

0x3238,	// (0x0004b092) main_mp2_pane_t3_ParamLimits

0x3238,	// (0x0004b092) main_mp2_pane_t3

0x0002,

0xf425,	// (0x0005727f) main_mp2_pane_t_ParamLimits

0xf425,	// (0x0005727f) main_mp2_pane_t

0x324a,	// (0x0004b0a4) pec_content_pane_ParamLimits

0x324a,	// (0x0004b0a4) pec_content_pane

0xe5c6,	// (0x00056420) scroll_pane_cp015

0x325c,	// (0x0004b0b6) pec_attribute_pane_ParamLimits

0x325c,	// (0x0004b0b6) pec_attribute_pane

0x326c,	// (0x0004b0c6) pec_content_pane_g1_ParamLimits

0x326c,	// (0x0004b0c6) pec_content_pane_g1

0x3278,	// (0x0004b0d2) pec_content_pane_t1_ParamLimits

0x3278,	// (0x0004b0d2) pec_content_pane_t1

0x328a,	// (0x0004b0e4) pec_content_pane_t2_ParamLimits

0x328a,	// (0x0004b0e4) pec_content_pane_t2

0x0001,

0xf42c,	// (0x00057286) pec_content_pane_t_ParamLimits

0xf42c,	// (0x00057286) pec_content_pane_t

0x329c,	// (0x0004b0f6) list_single_graphic_pane_cp01_ParamLimits

0x329c,	// (0x0004b0f6) list_single_graphic_pane_cp01

0xe169,	// (0x00055fc3) bg_popup_sub_pane_cp04

0x32b1,	// (0x0004b10b) popup_mup_playback_window_g1

0x32bd,	// (0x0004b117) popup_mup_playback_window_t1

0x32d2,	// (0x0004b12c) popup_mup_playback_window_t2

0x0001,

0xf431,	// (0x0005728b) popup_mup_playback_window_t

0x3327,	// (0x0004b181) main_image_pane_g1_ParamLimits

0x3327,	// (0x0004b181) main_image_pane_g1

0x3404,	// (0x0004b25e) scroll_pane_cp018_ParamLimits

0x3404,	// (0x0004b25e) scroll_pane_cp018

0x341c,	// (0x0004b276) scroll_pane_cp016_ParamLimits

0x341c,	// (0x0004b276) scroll_pane_cp016

0x3450,	// (0x0004b2aa) smil2_image_pane_ParamLimits

0x3450,	// (0x0004b2aa) smil2_image_pane

0x3480,	// (0x0004b2da) smil2_root_pane_ParamLimits

0x3480,	// (0x0004b2da) smil2_root_pane

0x34b8,	// (0x0004b312) smil2_text_pane_ParamLimits

0x34b8,	// (0x0004b312) smil2_text_pane

0xd95c,	// (0x000557b6) bg_list_pane_cp06

0x3540,	// (0x0004b39a) grid_radio_pane

0xd95c,	// (0x000557b6) bg_popup_window_pane_cp06

0x3548,	// (0x0004b3a2) main_fmradio_pane_t1

0x483d,	// (0x0004c697) heading_pane_cp04

0x3556,	// (0x0004b3b0) main_fmradio_pane_t2

0x4845,	// (0x0004c69f) popup_cale_lunar_info_window_g1

0x3564,	// (0x0004b3be) main_fmradio_pane_t3

0x484d,	// (0x0004c6a7) popup_cale_lunar_info_window_g2

0x3572,	// (0x0004b3cc) main_fmradio_pane_t4

0x0001,

0x3580,	// (0x0004b3da) main_fmradio_pane_t5

0x0004,

0xf511,	// (0x0005736b) popup_cale_lunar_info_window_g

0xf446,	// (0x000572a0) main_fmradio_pane_t

0x358e,	// (0x0004b3e8) wait_bar_pane_cp03

0x3596,	// (0x0004b3f0) cell_fmradio_pane_ParamLimits

0x3596,	// (0x0004b3f0) cell_fmradio_pane

0x3190,	// (0x0004afea) cell_fmradio_pane_g1_ParamLimits

0x3190,	// (0x0004afea) cell_fmradio_pane_g1

0xd95c,	// (0x000557b6) grid_highlight_pane_cp011

0x35a9,	// (0x0004b403) poc_content_pane_ParamLimits

0x35a9,	// (0x0004b403) poc_content_pane

0x35bb,	// (0x0004b415) scroll_pane_cp019

0x35c3,	// (0x0004b41d) popup_call_poc_act_window_ParamLimits

0x35c3,	// (0x0004b41d) popup_call_poc_act_window

0x35e7,	// (0x0004b441) popup_call_poc_inact_window_ParamLimits

0x35e7,	// (0x0004b441) popup_call_poc_inact_window

0xf4e8,	// (0x00057342) bg_popup_call_poc_act_pane_g

0x472b,	// (0x0004c585) bg_popup_call_poc_inact_pane_g1

0x4733,	// (0x0004c58d) bg_popup_call_poc_inact_pane_g2

0x3600,	// (0x0004b45a) popup_call_poc_act_window_g2

0x473b,	// (0x0004c595) bg_popup_call_poc_inact_pane_g3

0x4743,	// (0x0004c59d) bg_popup_call_poc_inact_pane_g4

0x474b,	// (0x0004c5a5) bg_popup_call_poc_inact_pane_g5

0x3608,	// (0x0004b462) popup_call_poc_act_window_t1_ParamLimits

0x3608,	// (0x0004b462) popup_call_poc_act_window_t1

0x3630,	// (0x0004b48a) popup_call_poc_act_window_t2_ParamLimits

0x3630,	// (0x0004b48a) popup_call_poc_act_window_t2

0x3658,	// (0x0004b4b2) popup_call_poc_act_window_t3_ParamLimits

0x3658,	// (0x0004b4b2) popup_call_poc_act_window_t3

0x3680,	// (0x0004b4da) popup_call_poc_act_window_t4_ParamLimits

0x3680,	// (0x0004b4da) popup_call_poc_act_window_t4

0x0003,

0xf451,	// (0x000572ab) popup_call_poc_act_window_t_ParamLimits

0xf451,	// (0x000572ab) popup_call_poc_act_window_t

0x4753,	// (0x0004c5ad) bg_popup_call_poc_inact_pane_g6

0x475b,	// (0x0004c5b5) bg_popup_call_poc_inact_pane_g7

0x4763,	// (0x0004c5bd) bg_popup_call_poc_inact_pane_g8

0x3692,	// (0x0004b4ec) popup_call_poc_inact_window_g2

0x476b,	// (0x0004c5c5) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4d5,	// (0x0005732f) bg_popup_call_poc_inact_pane_g

0x369a,	// (0x0004b4f4) popup_call_poc_inact_window_t1_ParamLimits

0x369a,	// (0x0004b4f4) popup_call_poc_inact_window_t1

0x36af,	// (0x0004b509) popup_call_poc_inact_window_t2_ParamLimits

0x36af,	// (0x0004b509) popup_call_poc_inact_window_t2

0x36c4,	// (0x0004b51e) popup_call_poc_inact_window_t3_ParamLimits

0x36c4,	// (0x0004b51e) popup_call_poc_inact_window_t3

0x0002,

0xf45a,	// (0x000572b4) popup_call_poc_inact_window_t_ParamLimits

0xf45a,	// (0x000572b4) popup_call_poc_inact_window_t

0x4dbf,	// (0x0004cc19) context_pane_ParamLimits

0x4e24,	// (0x0004cc7e) signal_pane_ParamLimits

0xe42f,	// (0x00056289) main_call2_pane

0xabbb,	// (0x00052a15) popup_phob_thumbnail2_window_ParamLimits

0xabbb,	// (0x00052a15) popup_phob_thumbnail2_window

0xab4c,	// (0x000529a6) aid_hotspot_pointer_arrow_pane

0xab54,	// (0x000529ae) aid_hotspot_pointer_hand_pane

0x48bc,	// (0x0004c716) phob_pre_status_pane_g5

0xdf90,	// (0x00055dea) cams_zoom_pane_ParamLimits

0xdf90,	// (0x00055dea) image_vga_pane_ParamLimits

0xe1e4,	// (0x0005603e) main_camera_pane_g1_ParamLimits

0xe1e4,	// (0x0005603e) main_camera_pane_g2_ParamLimits

0xe1e4,	// (0x0005603e) main_camera_pane_g3_ParamLimits

0xe1e4,	// (0x0005603e) main_camera_pane_g4_ParamLimits

0xe1e4,	// (0x0005603e) main_camera_pane_g5_ParamLimits

0xe1e4,	// (0x0005603e) main_camera_pane_g6_ParamLimits

0xe1e4,	// (0x0005603e) main_camera_pane_g7_ParamLimits

0xf185,	// (0x00056fdf) main_camera_pane_g_ParamLimits

0xe437,	// (0x00056291) main_camera_pane_t1_ParamLimits

0xe437,	// (0x00056291) main_camera_pane_t2_ParamLimits

0xf196,	// (0x00056ff0) main_camera_pane_t_ParamLimits

0xe169,	// (0x00055fc3) bg_popup_preview_window_pane_cp01_ParamLimits

0xe169,	// (0x00055fc3) bg_popup_preview_window_pane_cp01

0x36d9,	// (0x0004b533) popup_phob_thumbnail2_window_g1_ParamLimits

0x36d9,	// (0x0004b533) popup_phob_thumbnail2_window_g1

0xd95c,	// (0x000557b6) call2_cli_visual_pane

0x3700,	// (0x0004b55a) popup_call2_audio_conf_window_ParamLimits

0x3700,	// (0x0004b55a) popup_call2_audio_conf_window

0x3720,	// (0x0004b57a) popup_call2_audio_first_window_ParamLimits

0x3720,	// (0x0004b57a) popup_call2_audio_first_window

0x37b6,	// (0x0004b610) popup_call2_audio_in_window_ParamLimits

0x37b6,	// (0x0004b610) popup_call2_audio_in_window

0x37fe,	// (0x0004b658) popup_call2_audio_out_window_ParamLimits

0x37fe,	// (0x0004b658) popup_call2_audio_out_window

0x3868,	// (0x0004b6c2) popup_call2_audio_second_window_ParamLimits

0x3868,	// (0x0004b6c2) popup_call2_audio_second_window

0x38ce,	// (0x0004b728) popup_call2_audio_wait_window_ParamLimits

0x38ce,	// (0x0004b728) popup_call2_audio_wait_window

0xd95c,	// (0x000557b6) bg_popup_call2_act_pane_cp03

0xe14b,	// (0x00055fa5) list_conf_pane_cp

0x3908,	// (0x0004b762) popup_call2_audio_conf_window_t1

0xeb78,	// (0x000569d2) list_single_graphic_popup_conf2_pane_ParamLimits

0xeb78,	// (0x000569d2) list_single_graphic_popup_conf2_pane

0xeb8b,	// (0x000569e5) list_highlight_pane_cp04

0x3916,	// (0x0004b770) list_single_graphic_popup_conf2_pane_g1

0xeb9c,	// (0x000569f6) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf461,	// (0x000572bb) list_single_graphic_popup_conf2_pane_g

0x3920,	// (0x0004b77a) list_single_graphic_popup_conf2_pane_t1

0x392e,	// (0x0004b788) bg_popup_call2_act_pane_cp01_ParamLimits

0x392e,	// (0x0004b788) bg_popup_call2_act_pane_cp01

0x39b8,	// (0x0004b812) call_type_pane_cp05_ParamLimits

0x39b8,	// (0x0004b812) call_type_pane_cp05

0x3a0c,	// (0x0004b866) popup_call2_audio_second_window_g1_ParamLimits

0x3a0c,	// (0x0004b866) popup_call2_audio_second_window_g1

0x3a60,	// (0x0004b8ba) popup_call2_audio_second_window_g2_ParamLimits

0x3a60,	// (0x0004b8ba) popup_call2_audio_second_window_g2

0x0002,

0xf466,	// (0x000572c0) popup_call2_audio_second_window_g_ParamLimits

0xf466,	// (0x000572c0) popup_call2_audio_second_window_g

0x3ac5,	// (0x0004b91f) popup_call2_audio_second_window_t1_ParamLimits

0x3ac5,	// (0x0004b91f) popup_call2_audio_second_window_t1

0x3b80,	// (0x0004b9da) popup_call2_audio_second_window_t2_ParamLimits

0x3b80,	// (0x0004b9da) popup_call2_audio_second_window_t2

0x3bd3,	// (0x0004ba2d) popup_call2_audio_second_window_t3_ParamLimits

0x3bd3,	// (0x0004ba2d) popup_call2_audio_second_window_t3

0x0003,

0xf46d,	// (0x000572c7) popup_call2_audio_second_window_t_ParamLimits

0xf46d,	// (0x000572c7) popup_call2_audio_second_window_t

0xd95c,	// (0x000557b6) bg_popup_call2_in_pane_cp02

0xd966,	// (0x000557c0) call_type_pane_cp04

0x3cc6,	// (0x0004bb20) popup_call2_audio_wait_window_g1

0x3cce,	// (0x0004bb28) popup_call2_audio_wait_window_g2

0x0001,

0xf476,	// (0x000572d0) popup_call2_audio_wait_window_g

0xd97e,	// (0x000557d8) popup_call2_audio_wait_window_t3

0x3cd6,	// (0x0004bb30) bg_popup_call2_act_pane_ParamLimits

0x3cd6,	// (0x0004bb30) bg_popup_call2_act_pane

0x3d96,	// (0x0004bbf0) call_type_pane_cp03_ParamLimits

0x3d96,	// (0x0004bbf0) call_type_pane_cp03

0x3dfa,	// (0x0004bc54) popup_call2_audio_first_window_g1_ParamLimits

0x3dfa,	// (0x0004bc54) popup_call2_audio_first_window_g1

0x3e6a,	// (0x0004bcc4) popup_call2_audio_first_window_g2_ParamLimits

0x3e6a,	// (0x0004bcc4) popup_call2_audio_first_window_g2

0x3ece,	// (0x0004bd28) popup_call2_audio_first_window_g3_ParamLimits

0x3ece,	// (0x0004bd28) popup_call2_audio_first_window_g3

0x0004,

0xf47b,	// (0x000572d5) popup_call2_audio_first_window_g_ParamLimits

0xf47b,	// (0x000572d5) popup_call2_audio_first_window_g

0x3f56,	// (0x0004bdb0) popup_call2_audio_first_window_t1_ParamLimits

0x3f56,	// (0x0004bdb0) popup_call2_audio_first_window_t1

0x4059,	// (0x0004beb3) popup_call2_audio_first_window_t4_ParamLimits

0x4059,	// (0x0004beb3) popup_call2_audio_first_window_t4

0x413c,	// (0x0004bf96) popup_call2_audio_first_window_t5_ParamLimits

0x413c,	// (0x0004bf96) popup_call2_audio_first_window_t5

0x0003,

0xf486,	// (0x000572e0) popup_call2_audio_first_window_t_ParamLimits

0xf486,	// (0x000572e0) popup_call2_audio_first_window_t

0xe161,	// (0x00055fbb) bg_popup_call2_act_pane_g1

0x4855,	// (0x0004c6af) popup_cale_lunar_info_window_t1

0x4863,	// (0x0004c6bd) popup_cale_lunar_info_window_t2

0x4871,	// (0x0004c6cb) popup_cale_lunar_info_window_t3

0xd95c,	// (0x000557b6) bg_popup_call2_bubble_pane

0x423d,	// (0x0004c097) bg_popup_call2_in_pane_cp01_ParamLimits

0x423d,	// (0x0004c097) bg_popup_call2_in_pane_cp01

0xd638,	// (0x00055492) call_type_pane_cp02

0x4285,	// (0x0004c0df) popup_call2_audio_out_window_g1_ParamLimits

0x4285,	// (0x0004c0df) popup_call2_audio_out_window_g1

0x42b1,	// (0x0004c10b) popup_call2_audio_out_window_g2_ParamLimits

0x42b1,	// (0x0004c10b) popup_call2_audio_out_window_g2

0x42d9,	// (0x0004c133) popup_call2_audio_out_window_g3_ParamLimits

0x42d9,	// (0x0004c133) popup_call2_audio_out_window_g3

0x0003,

0xf48f,	// (0x000572e9) popup_call2_audio_out_window_g_ParamLimits

0xf48f,	// (0x000572e9) popup_call2_audio_out_window_g

0x4314,	// (0x0004c16e) popup_call2_audio_out_window_t1_ParamLimits

0x4314,	// (0x0004c16e) popup_call2_audio_out_window_t1

0x4373,	// (0x0004c1cd) popup_call2_audio_out_window_t2_ParamLimits

0x4373,	// (0x0004c1cd) popup_call2_audio_out_window_t2

0x43c7,	// (0x0004c221) popup_call2_audio_out_window_t3_ParamLimits

0x43c7,	// (0x0004c221) popup_call2_audio_out_window_t3

0x43dd,	// (0x0004c237) popup_call2_audio_out_window_t4_ParamLimits

0x43dd,	// (0x0004c237) popup_call2_audio_out_window_t4

0x43f3,	// (0x0004c24d) popup_call2_audio_out_window_t5_ParamLimits

0x43f3,	// (0x0004c24d) popup_call2_audio_out_window_t5

0x0005,

0xf498,	// (0x000572f2) popup_call2_audio_out_window_t_ParamLimits

0xf498,	// (0x000572f2) popup_call2_audio_out_window_t

0x4457,	// (0x0004c2b1) bg_popup_call2_in_pane_ParamLimits

0x4457,	// (0x0004c2b1) bg_popup_call2_in_pane

0x44b3,	// (0x0004c30d) popup_call2_audio_in_window_g1_ParamLimits

0x44b3,	// (0x0004c30d) popup_call2_audio_in_window_g1

0x44eb,	// (0x0004c345) popup_call2_audio_in_window_g2_ParamLimits

0x44eb,	// (0x0004c345) popup_call2_audio_in_window_g2

0x4523,	// (0x0004c37d) popup_call2_audio_in_window_g3_ParamLimits

0x4523,	// (0x0004c37d) popup_call2_audio_in_window_g3

0x0003,

0xf4a5,	// (0x000572ff) popup_call2_audio_in_window_g_ParamLimits

0xf4a5,	// (0x000572ff) popup_call2_audio_in_window_g

0x457b,	// (0x0004c3d5) popup_call2_audio_in_window_t1_ParamLimits

0x457b,	// (0x0004c3d5) popup_call2_audio_in_window_t1

0x45fb,	// (0x0004c455) popup_call2_audio_in_window_t2_ParamLimits

0x45fb,	// (0x0004c455) popup_call2_audio_in_window_t2

0x467b,	// (0x0004c4d5) popup_call2_audio_in_window_t3_ParamLimits

0x467b,	// (0x0004c4d5) popup_call2_audio_in_window_t3

0x4695,	// (0x0004c4ef) popup_call2_audio_in_window_t4_ParamLimits

0x4695,	// (0x0004c4ef) popup_call2_audio_in_window_t4

0x46a7,	// (0x0004c501) popup_call2_audio_in_window_t5_ParamLimits

0x46a7,	// (0x0004c501) popup_call2_audio_in_window_t5

0x46bc,	// (0x0004c516) popup_call2_audio_in_window_t6_ParamLimits

0x46bc,	// (0x0004c516) popup_call2_audio_in_window_t6

0x0005,

0xf4ae,	// (0x00057308) popup_call2_audio_in_window_t_ParamLimits

0xf4ae,	// (0x00057308) popup_call2_audio_in_window_t

0xe161,	// (0x00055fbb) bg_popup_call2_in_pane_g1

0x487f,	// (0x0004c6d9) popup_cale_lunar_info_window_t4

0x0003,

0xf516,	// (0x00057370) popup_cale_lunar_info_window_t

0xe169,	// (0x00055fc3) bg_popup_call2_rect_pane_ParamLimits

0xe169,	// (0x00055fc3) bg_popup_call2_rect_pane

0xd95c,	// (0x000557b6) call2_cli_visual_graphic_pane

0xd95c,	// (0x000557b6) call2_cli_visual_text_pane

0xabe2,	// (0x00052a3c) smil_status_volume_pane_g3

0x0002,

0xe181,	// (0x00055fdb) call2_cli_visual_graphic_pane_g1

0xe181,	// (0x00055fdb) call2_cli_visual_graphic_pane_g2

0xe181,	// (0x00055fdb) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4bb,	// (0x00057315) call2_cli_visual_graphic_pane_g

0x46eb,	// (0x0004c545) bg_popup_call2_rect_pane_g1

0xe336,	// (0x00056190) bg_popup_call2_rect_pane_g2

0x46f3,	// (0x0004c54d) bg_popup_call2_rect_pane_g3

0x46fb,	// (0x0004c555) bg_popup_call2_rect_pane_g4

0x4703,	// (0x0004c55d) bg_popup_call2_rect_pane_g5

0x470b,	// (0x0004c565) bg_popup_call2_rect_pane_g6

0x4713,	// (0x0004c56d) bg_popup_call2_rect_pane_g7

0x471b,	// (0x0004c575) bg_popup_call2_rect_pane_g8

0x4723,	// (0x0004c57d) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c2,	// (0x0005731c) bg_popup_call2_rect_pane_g

0x472b,	// (0x0004c585) bg_popup_call2_bubble_pane_g1

0x4733,	// (0x0004c58d) bg_popup_call2_bubble_pane_g2

0x473b,	// (0x0004c595) bg_popup_call2_bubble_pane_g3

0x4743,	// (0x0004c59d) bg_popup_call2_bubble_pane_g4

0x474b,	// (0x0004c5a5) bg_popup_call2_bubble_pane_g5

0x4753,	// (0x0004c5ad) bg_popup_call2_bubble_pane_g6

0x475b,	// (0x0004c5b5) bg_popup_call2_bubble_pane_g7

0x4763,	// (0x0004c5bd) bg_popup_call2_bubble_pane_g8

0x476b,	// (0x0004c5c5) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4d5,	// (0x0005732f) bg_popup_call2_bubble_pane_g

0x135c,	// (0x000491b6) aid_cale_week_size_cell_pane

0x1902,	// (0x0004975c) aid_cams_cif_uncrop_pane_ParamLimits

0x1902,	// (0x0004975c) aid_cams_cif_uncrop_pane

0x1a58,	// (0x000498b2) aid_cams_size_cell_ParamLimits

0x1a58,	// (0x000498b2) aid_cams_size_cell

0x1a6c,	// (0x000498c6) grid_cams_pane_ParamLimits

0x1a86,	// (0x000498e0) linegrid_cams_pane_ParamLimits

0x1b6d,	// (0x000499c7) call_video_pane_t1

0x1b8b,	// (0x000499e5) call_video_pane_t2

0x0001,

0xf1e2,	// (0x0005703c) call_video_pane_t

0x1fb9,	// (0x00049e13) aid_cale_month_size_cell_pane_ParamLimits

0x1fb9,	// (0x00049e13) aid_cale_month_size_cell_pane

0xf55a,	// (0x000573b4) smil_status_volume_pane_g

0xabef,	// (0x00052a49) volume_smil_pane_ParamLimits

0xa964,	// (0x000527be) aid_popup2_width_pane

0x12e1,	// (0x0004913b) cell_qdial_pane_g4_ParamLimits

0x12e1,	// (0x0004913b) cell_qdial_pane_g4

0x2d1d,	// (0x0004ab77) aid_blid_cardinal_pane_ParamLimits

0x2d29,	// (0x0004ab83) aid_blid_destination_pane_ParamLimits

0x2d29,	// (0x0004ab83) aid_blid_destination_pane

0xe169,	// (0x00055fc3) bg_popup_call_poc_act_pane_ParamLimits

0xe169,	// (0x00055fc3) bg_popup_call_poc_act_pane

0xe169,	// (0x00055fc3) bg_popup_call_poc_inact_pane_ParamLimits

0xe169,	// (0x00055fc3) bg_popup_call_poc_inact_pane

0x477b,	// (0x0004c5d5) bg_popup_call_poc_act_pane_g1

0x4783,	// (0x0004c5dd) bg_popup_call_poc_act_pane_g2

0x478b,	// (0x0004c5e5) bg_popup_call_poc_act_pane_g3

0x4743,	// (0x0004c59d) bg_popup_call_poc_act_pane_g4

0x474b,	// (0x0004c5a5) bg_popup_call_poc_act_pane_g5

0x4793,	// (0x0004c5ed) bg_popup_call_poc_act_pane_g6

0x475b,	// (0x0004c5b5) bg_popup_call_poc_act_pane_g7

0x479b,	// (0x0004c5f5) bg_popup_call_poc_act_pane_g8

0xd95c,	// (0x000557b6) main_usb_pane

0xab96,	// (0x000529f0) popup_cale_lunar_info_window

0x1e65,	// (0x00049cbf) im_reading_pane_t1_ParamLimits

0xe51e,	// (0x00056378) list_im_pane_ParamLimits

0xe52f,	// (0x00056389) scroll_pane_cp07_ParamLimits

0xd95c,	// (0x000557b6) grid_highlight_pane_cp012

0xe169,	// (0x00055fc3) mup_scale_pane_ParamLimits

0x3190,	// (0x0004afea) main_usb_pane_g1_ParamLimits

0x3190,	// (0x0004afea) main_usb_pane_g1

0x47bb,	// (0x0004c615) main_usb_pane_g2_ParamLimits

0x47bb,	// (0x0004c615) main_usb_pane_g2

0x0001,

0xf4ff,	// (0x00057359) main_usb_pane_g_ParamLimits

0xf4ff,	// (0x00057359) main_usb_pane_g

0x47d1,	// (0x0004c62b) main_usb_pane_t1_ParamLimits

0x47d1,	// (0x0004c62b) main_usb_pane_t1

0x47e3,	// (0x0004c63d) main_usb_pane_t2_ParamLimits

0x47e3,	// (0x0004c63d) main_usb_pane_t2

0x47f5,	// (0x0004c64f) main_usb_pane_t3_ParamLimits

0x47f5,	// (0x0004c64f) main_usb_pane_t3

0x4807,	// (0x0004c661) main_usb_pane_t4_ParamLimits

0x4807,	// (0x0004c661) main_usb_pane_t4

0x4819,	// (0x0004c673) main_usb_pane_t5_ParamLimits

0x4819,	// (0x0004c673) main_usb_pane_t5

0x482b,	// (0x0004c685) main_usb_pane_t6_ParamLimits

0x482b,	// (0x0004c685) main_usb_pane_t6

0x0005,

0xf504,	// (0x0005735e) main_usb_pane_t_ParamLimits

0x2ccc,	// (0x0004ab26) aid_text_placing

0x2cd5,	// (0x0004ab2f) main_location2_pane_t1_ParamLimits

0x2ce7,	// (0x0004ab41) main_location2_pane_t2_ParamLimits

0x2cf9,	// (0x0004ab53) main_location2_pane_t3_ParamLimits

0x2d0b,	// (0x0004ab65) main_location2_pane_t4_ParamLimits

0x2d0b,	// (0x0004ab65) main_location2_pane_t4

0xf31e,	// (0x00057178) main_location2_pane_t_ParamLimits

0xe197,	// (0x00055ff1) find_pinb_pane_g2_ParamLimits

0xe197,	// (0x00055ff1) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x00056ef4) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x00056ef4) find_pinb_pane_g

0xe1a3,	// (0x00055ffd) find_pinb_pane_t1_ParamLimits

0xe1b5,	// (0x0005600f) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x00056ef9) find_pinb_pane_t_ParamLimits

0xd95c,	// (0x000557b6) main_call3_pane

0x24a4,	// (0x0004a2fe) cale_month_day_heading_pane_t1_ParamLimits

0x252a,	// (0x0004a384) cale_month_day_heading_pane_t2_ParamLimits

0x25a3,	// (0x0004a3fd) cale_month_day_heading_pane_t3_ParamLimits

0x261c,	// (0x0004a476) cale_month_day_heading_pane_t4_ParamLimits

0x269d,	// (0x0004a4f7) cale_month_day_heading_pane_t5_ParamLimits

0x2726,	// (0x0004a580) cale_month_day_heading_pane_t6_ParamLimits

0x27af,	// (0x0004a609) cale_month_day_heading_pane_t7_ParamLimits

0xf21a,	// (0x00057074) cale_month_day_heading_pane_t_ParamLimits

0xe779,	// (0x000565d3) smil_status_volume_pane

0x316c,	// (0x0004afc6) postcard_address_pane_ParamLimits

0x316c,	// (0x0004afc6) postcard_address_pane

0x317e,	// (0x0004afd8) postcard_message_pane_ParamLimits

0x317e,	// (0x0004afd8) postcard_message_pane

0x46d1,	// (0x0004c52b) call2_cli_visual_pane_t1_ParamLimits

0x46d1,	// (0x0004c52b) call2_cli_visual_pane_t1

0x5082,	// (0x0004cedc) postcard_message_pane_t1_ParamLimits

0x5082,	// (0x0004cedc) postcard_message_pane_t1

0x506a,	// (0x0004cec4) postcard_address_pane_t1_ParamLimits

0x506a,	// (0x0004cec4) postcard_address_pane_t1

0x5056,	// (0x0004ceb0) popup_call3_audio_in_window_ParamLimits

0x5056,	// (0x0004ceb0) popup_call3_audio_in_window

0x4ee1,	// (0x0004cd3b) bg_popup_call3_in_pane_ParamLimits

0x4ee1,	// (0x0004cd3b) bg_popup_call3_in_pane

0x4f57,	// (0x0004cdb1) popup_call3_audio_in_window_g1_ParamLimits

0x4f57,	// (0x0004cdb1) popup_call3_audio_in_window_g1

0x4f77,	// (0x0004cdd1) popup_call3_audio_in_window_g2_ParamLimits

0x4f77,	// (0x0004cdd1) popup_call3_audio_in_window_g2

0x4f97,	// (0x0004cdf1) popup_call3_audio_in_window_g3_ParamLimits

0x4f97,	// (0x0004cdf1) popup_call3_audio_in_window_g3

0x0003,

0xf561,	// (0x000573bb) popup_call3_audio_in_window_g_ParamLimits

0xf561,	// (0x000573bb) popup_call3_audio_in_window_g

0x4fc8,	// (0x0004ce22) popup_call3_audio_in_window_t1_ParamLimits

0x4fc8,	// (0x0004ce22) popup_call3_audio_in_window_t1

0x5006,	// (0x0004ce60) popup_call3_audio_in_window_t2_ParamLimits

0x5006,	// (0x0004ce60) popup_call3_audio_in_window_t2

0x5044,	// (0x0004ce9e) popup_call3_audio_in_window_t3_ParamLimits

0x5044,	// (0x0004ce9e) popup_call3_audio_in_window_t3

0x0002,

0xf56a,	// (0x000573c4) popup_call3_audio_in_window_t_ParamLimits

0xf56a,	// (0x000573c4) popup_call3_audio_in_window_t

0xe42f,	// (0x00056289) bg_popup_call3_rect_pane

0x46eb,	// (0x0004c545) bg_popup_call3_rect_pane_g1

0xe336,	// (0x00056190) bg_popup_call3_rect_pane_g2

0x46f3,	// (0x0004c54d) bg_popup_call3_rect_pane_g3

0x46fb,	// (0x0004c555) bg_popup_call3_rect_pane_g4

0x4703,	// (0x0004c55d) bg_popup_call3_rect_pane_g5

0x470b,	// (0x0004c565) bg_popup_call3_rect_pane_g6

0x4713,	// (0x0004c56d) bg_popup_call3_rect_pane_g7

0xd53f,	// (0x00055399) mup_visualizer_osc_pane

0xd53f,	// (0x00055399) mup_visualizer_spec_pane

0x4f11,	// (0x0004cd6b) call3_video_qcif_pane_ParamLimits

0x4f11,	// (0x0004cd6b) call3_video_qcif_pane

0x4f24,	// (0x0004cd7e) call3_video_qcif_uncrop_pane_ParamLimits

0x4f24,	// (0x0004cd7e) call3_video_qcif_uncrop_pane

0x4f32,	// (0x0004cd8c) call3_video_subqcif_pane_ParamLimits

0x4f32,	// (0x0004cd8c) call3_video_subqcif_pane

0x4f46,	// (0x0004cda0) call3_video_subqcif_uncrop_pane_ParamLimits

0x4f46,	// (0x0004cda0) call3_video_subqcif_uncrop_pane

0x4fb7,	// (0x0004ce11) popup_call3_audio_in_window_g4_ParamLimits

0x4fb7,	// (0x0004ce11) popup_call3_audio_in_window_g4

0xd53f,	// (0x00055399) mup_spec_half_pane

0xd53f,	// (0x00055399) mup_spec_half_pane_cp

0xd53f,	// (0x00055399) mup_osc_middle_pane

0xe465,	// (0x000562bf) mup_visualizer_osc_pane_g1

0x4e94,	// (0x0004ccee) mup_spec_bar_pane_ParamLimits

0x4e94,	// (0x0004ccee) mup_spec_bar_pane

0xe465,	// (0x000562bf) mup_spec_bar_pane_g1

0xe465,	// (0x000562bf) mup_spec_bar_pane_g2

0x0001,

0xf398,	// (0x000571f2) mup_spec_bar_pane_g

0x135c,	// (0x000491b6) aid_cale_week_size_cell_pane_ParamLimits

0x1376,	// (0x000491d0) bg_cale_heading_pane_ParamLimits

0xe391,	// (0x000561eb) bg_cale_pane_cp01_ParamLimits

0x138e,	// (0x000491e8) cale_week_corner_pane_ParamLimits

0x13ad,	// (0x00049207) cale_week_day_heading_pane_ParamLimits

0x13ca,	// (0x00049224) cale_week_scroll_pane_g1_ParamLimits

0x13dd,	// (0x00049237) cale_week_scroll_pane_g2_ParamLimits

0x13f5,	// (0x0004924f) cale_week_scroll_pane_g3_ParamLimits

0x140d,	// (0x00049267) cale_week_scroll_pane_g4_ParamLimits

0x1425,	// (0x0004927f) cale_week_scroll_pane_g5_ParamLimits

0x1445,	// (0x0004929f) cale_week_scroll_pane_g6_ParamLimits

0x1465,	// (0x000492bf) cale_week_scroll_pane_g7_ParamLimits

0x1485,	// (0x000492df) cale_week_scroll_pane_g8_ParamLimits

0x14a9,	// (0x00049303) cale_week_scroll_pane_g9_ParamLimits

0x14c1,	// (0x0004931b) cale_week_scroll_pane_g10_ParamLimits

0x14d9,	// (0x00049333) cale_week_scroll_pane_g11_ParamLimits

0x14f1,	// (0x0004934b) cale_week_scroll_pane_g12_ParamLimits

0x1509,	// (0x00049363) cale_week_scroll_pane_g13_ParamLimits

0x1509,	// (0x00049363) cale_week_scroll_pane_g14_ParamLimits

0x1509,	// (0x00049363) cale_week_scroll_pane_g15_ParamLimits

0xf12b,	// (0x00056f85) cale_week_scroll_pane_g_ParamLimits

0x1545,	// (0x0004939f) cale_week_time_pane_ParamLimits

0x1569,	// (0x000493c3) grid_cale_week_pane_ParamLimits

0xe3ae,	// (0x00056208) listscroll_cale_week_pane_t1

0xe3c0,	// (0x0005621a) scroll_pane_cp08_ParamLimits

0x2019,	// (0x00049e73) cale_month_corner_pane_ParamLimits

0xe74f,	// (0x000565a9) cale_month_pane_t1

0x2437,	// (0x0004a291) cale_month_week_pane_ParamLimits

0x2b4c,	// (0x0004a9a6) popup_call_status_window_g1_ParamLimits

0x2b60,	// (0x0004a9ba) popup_call_status_window_g2_ParamLimits

0x2b74,	// (0x0004a9ce) popup_call_status_window_g3_ParamLimits

0xf2a5,	// (0x000570ff) popup_call_status_window_g_ParamLimits

0xeb17,	// (0x00056971) aid_call2_pane

0x04e3,	// (0x0004833d) msg_header_pane_g1

0x316c,	// (0x0004afc6) postcard_address2_pane_ParamLimits

0x316c,	// (0x0004afc6) postcard_address2_pane

0x317e,	// (0x0004afd8) postcard_message2_pane_ParamLimits

0x317e,	// (0x0004afd8) postcard_message2_pane

0x4e32,	// (0x0004cc8c) message2_row_pane_ParamLimits

0x4e32,	// (0x0004cc8c) message2_row_pane

0x4e4e,	// (0x0004cca8) address2_row_pane_ParamLimits

0x4e4e,	// (0x0004cca8) address2_row_pane

0x4e61,	// (0x0004ccbb) postcard_message2_row_pane_g1

0x4e69,	// (0x0004ccc3) postcard_message2_row_pane_t1

0x4e61,	// (0x0004ccbb) address2_row_pane_g1

0x4e69,	// (0x0004ccc3) address2_row_pane_t1

0x1899,	// (0x000496f3) aid_size_cell_vorec

0xd95c,	// (0x000557b6) main_rss_pane

0x4e77,	// (0x0004ccd1) rss_list_single_pane_ParamLimits

0x4e77,	// (0x0004ccd1) rss_list_single_pane

0x4e85,	// (0x0004ccdf) rss_list_single_pane_t1

0x4e85,	// (0x0004ccdf) rss_list_single_pane_t2

0x0001,

0xf555,	// (0x000573af) rss_list_single_pane_t

0xd95c,	// (0x000557b6) main_camera2_pane

0xd95c,	// (0x000557b6) main_video2_pane

0xac04,	// (0x00052a5e) cams_zoom_pane_cp2_ParamLimits

0xac04,	// (0x00052a5e) cams_zoom_pane_cp2

0xac04,	// (0x00052a5e) image2_vga_pane_ParamLimits

0xac04,	// (0x00052a5e) image2_vga_pane

0xac12,	// (0x00052a6c) main_camera2_pane_g1_ParamLimits

0xac12,	// (0x00052a6c) main_camera2_pane_g1

0xac12,	// (0x00052a6c) main_camera2_pane_g2_ParamLimits

0xac12,	// (0x00052a6c) main_camera2_pane_g2

0xac12,	// (0x00052a6c) main_camera2_pane_g3_ParamLimits

0xac12,	// (0x00052a6c) main_camera2_pane_g3

0xac12,	// (0x00052a6c) main_camera2_pane_g4_ParamLimits

0xac12,	// (0x00052a6c) main_camera2_pane_g4

0xac12,	// (0x00052a6c) main_camera2_pane_g5_ParamLimits

0xac12,	// (0x00052a6c) main_camera2_pane_g5

0xac12,	// (0x00052a6c) main_camera2_pane_g6_ParamLimits

0xac12,	// (0x00052a6c) main_camera2_pane_g6

0xac12,	// (0x00052a6c) main_camera2_pane_g7_ParamLimits

0xac12,	// (0x00052a6c) main_camera2_pane_g7

0xac12,	// (0x00052a6c) main_camera2_pane_g8_ParamLimits

0xac12,	// (0x00052a6c) main_camera2_pane_g8

0x0008,

0xf571,	// (0x000573cb) main_camera2_pane_g_ParamLimits

0xf571,	// (0x000573cb) main_camera2_pane_g

0x50ac,	// (0x0004cf06) main_camera2_pane_t1_ParamLimits

0x50ac,	// (0x0004cf06) main_camera2_pane_t1

0x50ac,	// (0x0004cf06) main_camera2_pane_t2_ParamLimits

0x50ac,	// (0x0004cf06) main_camera2_pane_t2

0x50ac,	// (0x0004cf06) main_camera2_pane_t3_ParamLimits

0x50ac,	// (0x0004cf06) main_camera2_pane_t3

0x50ac,	// (0x0004cf06) main_camera2_pane_t4_ParamLimits

0x50ac,	// (0x0004cf06) main_camera2_pane_t4

0x0006,

0xf584,	// (0x000573de) main_camera2_pane_t_ParamLimits

0xf584,	// (0x000573de) main_camera2_pane_t

0xac34,	// (0x00052a8e) cams_zoom_pane_cp4_ParamLimits

0xac34,	// (0x00052a8e) cams_zoom_pane_cp4

0x50c0,	// (0x0004cf1a) image2_cif_pane_ParamLimits

0x50c0,	// (0x0004cf1a) image2_cif_pane

0xdf90,	// (0x00055dea) image2_subqcif_pane_ParamLimits

0xdf90,	// (0x00055dea) image2_subqcif_pane

0x50ce,	// (0x0004cf28) main_video2_pane_g1_ParamLimits

0x50ce,	// (0x0004cf28) main_video2_pane_g1

0x50ce,	// (0x0004cf28) main_video2_pane_g2_ParamLimits

0x50ce,	// (0x0004cf28) main_video2_pane_g2

0x50ce,	// (0x0004cf28) main_video2_pane_g3_ParamLimits

0x50ce,	// (0x0004cf28) main_video2_pane_g3

0x50ce,	// (0x0004cf28) main_video2_pane_g4_ParamLimits

0x50ce,	// (0x0004cf28) main_video2_pane_g4

0x50ce,	// (0x0004cf28) main_video2_pane_g5_ParamLimits

0x50ce,	// (0x0004cf28) main_video2_pane_g5

0x50ce,	// (0x0004cf28) main_video2_pane_g6_ParamLimits

0x50ce,	// (0x0004cf28) main_video2_pane_g6

0x0005,

0xf593,	// (0x000573ed) main_video2_pane_g_ParamLimits

0xf593,	// (0x000573ed) main_video2_pane_g

0x50dc,	// (0x0004cf36) main_video2_pane_t1_ParamLimits

0x50dc,	// (0x0004cf36) main_video2_pane_t1

0x50dc,	// (0x0004cf36) main_video2_pane_t2_ParamLimits

0x50dc,	// (0x0004cf36) main_video2_pane_t2

0x50dc,	// (0x0004cf36) main_video2_pane_t3_ParamLimits

0x50dc,	// (0x0004cf36) main_video2_pane_t3

0x0002,

0xf5a0,	// (0x000573fa) main_video2_pane_t_ParamLimits

0xf5a0,	// (0x000573fa) main_video2_pane_t

0x491e,	// (0x0004c778) call_muted_g2

0x0001,

0xf547,	// (0x000573a1) call_muted_g

0xd95c,	// (0x000557b6) main_mup2_pane

0xef46,	// (0x00056da0) main_mup2_pane_g1_ParamLimits

0xef46,	// (0x00056da0) main_mup2_pane_g1

0xef46,	// (0x00056da0) main_mup2_pane_g2_ParamLimits

0xef46,	// (0x00056da0) main_mup2_pane_g2

0xe465,	// (0x000562bf) main_mup_pane_g13_cp1

0xd53f,	// (0x00055399) mup_volume_pane_cp1

0xef46,	// (0x00056da0) main_mup2_pane_g4_ParamLimits

0xef46,	// (0x00056da0) main_mup2_pane_g4

0xef46,	// (0x00056da0) main_mup2_pane_g5_ParamLimits

0xef46,	// (0x00056da0) main_mup2_pane_g5

0xef46,	// (0x00056da0) main_mup2_pane_g6_ParamLimits

0xef46,	// (0x00056da0) main_mup2_pane_g6

0xef46,	// (0x00056da0) main_mup2_pane_g7_ParamLimits

0xef46,	// (0x00056da0) main_mup2_pane_g7

0x0006,

0xf5a7,	// (0x00057401) main_mup2_pane_g_ParamLimits

0xf5a7,	// (0x00057401) main_mup2_pane_g

0xef54,	// (0x00056dae) main_mup2_pane_t1_ParamLimits

0xef54,	// (0x00056dae) main_mup2_pane_t1

0xef54,	// (0x00056dae) main_mup2_pane_t2_ParamLimits

0xef54,	// (0x00056dae) main_mup2_pane_t2

0xef54,	// (0x00056dae) main_mup2_pane_t3_ParamLimits

0xef54,	// (0x00056dae) main_mup2_pane_t3

0xef54,	// (0x00056dae) main_mup2_pane_t4_ParamLimits

0xef54,	// (0x00056dae) main_mup2_pane_t4

0xef54,	// (0x00056dae) main_mup2_pane_t5_ParamLimits

0xef54,	// (0x00056dae) main_mup2_pane_t5

0xef54,	// (0x00056dae) main_mup2_pane_t6_ParamLimits

0xef54,	// (0x00056dae) main_mup2_pane_t6

0x0005,

0xf5b6,	// (0x00057410) main_mup2_pane_t_ParamLimits

0xf5b6,	// (0x00057410) main_mup2_pane_t

0xef7c,	// (0x00056dd6) mup2_visualizer_pane_ParamLimits

0xef7c,	// (0x00056dd6) mup2_visualizer_pane

0xef7c,	// (0x00056dd6) mup_progress_pane_cp_ParamLimits

0xef7c,	// (0x00056dd6) mup_progress_pane_cp

0x50f0,	// (0x0004cf4a) mup_volume_pane_cp_ParamLimits

0x50f0,	// (0x0004cf4a) mup_volume_pane_cp

0xe1e4,	// (0x0005603e) mup2_visualizer_pane_g1_ParamLimits

0xe1e4,	// (0x0005603e) mup2_visualizer_pane_g1

0xe1f2,	// (0x0005604c) mup2_visualizer_pane_g2_ParamLimits

0xe1f2,	// (0x0005604c) mup2_visualizer_pane_g2

0xe1f2,	// (0x0005604c) mup2_visualizer_pane_g3_ParamLimits

0xe1f2,	// (0x0005604c) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x00056efe) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x00056efe) mup2_visualizer_pane_g

0x3538,	// (0x0004b392) aid_size_cell_fmradio

0x4b01,	// (0x0004c95b) aid_height_parent_landcape

0xe5ad,	// (0x00056407) wml_content_pane_cp

0xe5b5,	// (0x0005640f) wml_tabs_pane

0xe5be,	// (0x00056418) popup_wml_miniature_window

0xe5c6,	// (0x00056420) scroll_pane_cp021

0xe5da,	// (0x00056434) wml_content_pane_comp8

0xd95c,	// (0x000557b6) bg_popup_sub_pane_cp05

0x5106,	// (0x0004cf60) popup_wml_miniature_window_g1

0x510e,	// (0x0004cf68) wml_miniature_view_pane

0x5116,	// (0x0004cf70) aid_size_wml_view

0x511e,	// (0x0004cf78) wml_miniature_view_pane_g1

0x5127,	// (0x0004cf81) wml_miniature_view_pane_g2

0x5130,	// (0x0004cf8a) wml_miniature_view_pane_g3

0x5138,	// (0x0004cf92) wml_miniature_view_pane_g4

0x5140,	// (0x0004cf9a) wml_miniature_view_pane_g5

0x5148,	// (0x0004cfa2) wml_miniature_view_pane_g6

0x5150,	// (0x0004cfaa) wml_miniature_view_pane_g7

0x5158,	// (0x0004cfb2) wml_miniature_view_pane_g8

0x0007,

0xf5c3,	// (0x0005741d) wml_miniature_view_pane_g

0x5160,	// (0x0004cfba) background_graphic_ParamLimits

0x5160,	// (0x0004cfba) background_graphic

0x516c,	// (0x0004cfc6) wml_tabs_2_pane

0x5175,	// (0x0004cfcf) wml_tabs_3_pane_ParamLimits

0x5175,	// (0x0004cfcf) wml_tabs_3_pane

0x5187,	// (0x0004cfe1) wml_tabs_4_pane_ParamLimits

0x5187,	// (0x0004cfe1) wml_tabs_4_pane

0x519d,	// (0x0004cff7) wml_tabs_5_pane_ParamLimits

0x519d,	// (0x0004cff7) wml_tabs_5_pane

0x51b7,	// (0x0004d011) wml_tabs_pane_g2_ParamLimits

0x51b7,	// (0x0004d011) wml_tabs_pane_g2

0x51cc,	// (0x0004d026) wml_tabs_pane_g3_ParamLimits

0x51cc,	// (0x0004d026) wml_tabs_pane_g3

0x51e1,	// (0x0004d03b) wml_tabs_2_active_pane_ParamLimits

0x51e1,	// (0x0004d03b) wml_tabs_2_active_pane

0x51e1,	// (0x0004d03b) wml_tabs_2_passive_pane_ParamLimits

0x51e1,	// (0x0004d03b) wml_tabs_2_passive_pane

0x51ef,	// (0x0004d049) wml_tabs_3_active_pane_cp_ParamLimits

0x51ef,	// (0x0004d049) wml_tabs_3_active_pane_cp

0x5204,	// (0x0004d05e) wml_tabs_3_passive_pane_ParamLimits

0x5204,	// (0x0004d05e) wml_tabs_3_passive_pane

0x5217,	// (0x0004d071) wml_tabs_3_passive_pane_cp_ParamLimits

0x5217,	// (0x0004d071) wml_tabs_3_passive_pane_cp

0x522e,	// (0x0004d088) tabs_4_active_pane

0x5236,	// (0x0004d090) tabs_4_passive_pane

0x5240,	// (0x0004d09a) tabs_4_passive_pane_cp

0x5248,	// (0x0004d0a2) tabs_4_passive_pane_cp2

0x4773,	// (0x0004c5cd) aid_height_text

0xef7c,	// (0x00056dd6) mup_volume_cont_pane_ParamLimits

0xef7c,	// (0x00056dd6) mup_volume_cont_pane

0xd53f,	// (0x00055399) aid_size_cell_pinb

0xd53f,	// (0x00055399) aid_size_list_pinb

0xef7c,	// (0x00056dd6) mup2_volume_cont_pane_ParamLimits

0xef7c,	// (0x00056dd6) mup2_volume_cont_pane

0xac42,	// (0x00052a9c) mup2_volume_cont_pane_g1_ParamLimits

0xac42,	// (0x00052a9c) mup2_volume_cont_pane_g1

0x0dd2,	// (0x00048c2c) aid_size_cell_touch_ParamLimits

0x0dd2,	// (0x00048c2c) aid_size_cell_touch

0x0f98,	// (0x00048df2) touch_pane_ParamLimits

0x0f98,	// (0x00048df2) touch_pane

0xd53f,	// (0x00055399) main_rss2_pane

0x525b,	// (0x0004d0b5) listscroll_rss2_pane

0x5264,	// (0x0004d0be) rss2_navigation_pane

0x526c,	// (0x0004d0c6) list_rss2_pane

0xec4e,	// (0x00056aa8) scroll_pane_cp22

0x5274,	// (0x0004d0ce) rss2_navigation_pane_g1

0x527d,	// (0x0004d0d7) rss2_navigation_pane_g2

0x5285,	// (0x0004d0df) rss2_navigation_pane_g3

0x0002,

0xf5d4,	// (0x0005742e) rss2_navigation_pane_g

0x528d,	// (0x0004d0e7) rss2_navigation_pane_t1

0x529b,	// (0x0004d0f5) rss2_list_single_pane_ParamLimits

0x529b,	// (0x0004d0f5) rss2_list_single_pane

0x52b0,	// (0x0004d10a) rss2_list_single_pane_t2

0x52be,	// (0x0004d118) rss2_list_single_pane_t3_ParamLimits

0x52be,	// (0x0004d118) rss2_list_single_pane_t3

0x52db,	// (0x0004d135) rss2_list_single_pane_t4

0x2a39,	// (0x0004a893) smil_status_pane_g1

0xdf90,	// (0x00055dea) main_image2_pane_ParamLimits

0xdf90,	// (0x00055dea) main_image2_pane

0xac12,	// (0x00052a6c) main_camera2_pane_g9_ParamLimits

0xac12,	// (0x00052a6c) main_camera2_pane_g9

0x50ac,	// (0x0004cf06) main_camera2_pane_t5_ParamLimits

0x50ac,	// (0x0004cf06) main_camera2_pane_t5

0xac20,	// (0x00052a7a) main_camera2_pane_t6_ParamLimits

0xac20,	// (0x00052a7a) main_camera2_pane_t6

0x52e9,	// (0x0004d143) main_image2_pane_g1_ParamLimits

0x52e9,	// (0x0004d143) main_image2_pane_g1

0x34ee,	// (0x0004b348) smil2_video_pane_ParamLimits

0x34ee,	// (0x0004b348) smil2_video_pane

0xa980,	// (0x000527da) aid_zoom_text_primary_cp

0xa9bf,	// (0x00052819) popup_preview_fixed_window

0xe516,	// (0x00056370) im_reading_pane_g1

0x509e,	// (0x0004cef8) cams2_bc_adjust_pane_cp_ParamLimits

0x509e,	// (0x0004cef8) cams2_bc_adjust_pane_cp

0xef7c,	// (0x00056dd6) cams2_bc_adjust_pane_ParamLimits

0xef7c,	// (0x00056dd6) cams2_bc_adjust_pane

0xe465,	// (0x000562bf) cams2_bc_adjust_pane_g1

0xd53f,	// (0x00055399) cams2_slider_pane

0xe465,	// (0x000562bf) cams2_slider_pane_g1

0xe465,	// (0x000562bf) cams2_slider_pane_g2

0x0006,

0xf5db,	// (0x00057435) cams2_slider_pane_g

0x1060,	// (0x00048eba) calc_display_pane_ParamLimits

0x1085,	// (0x00048edf) calc_paper_pane_ParamLimits

0x10a8,	// (0x00048f02) grid_calc_pane_ParamLimits

0xaaf1,	// (0x0005294b) popup_clock_digital_window_t1_ParamLimits

0x3375,	// (0x0004b1cf) main_image_pane_t1

0x1042,	// (0x00048e9c) aid_size_cell_calc_ParamLimits

0x1042,	// (0x00048e9c) aid_size_cell_calc

0x4b5b,	// (0x0004c9b5) popup_blid_sat_info2_window_ParamLimits

0x4b5b,	// (0x0004c9b5) popup_blid_sat_info2_window

0x52ff,	// (0x0004d159) aid_size_cell_blid

0x50c0,	// (0x0004cf1a) bg_popup_window_pane_cp07

0x531c,	// (0x0004d176) grid_popup_blid_pane

0x5326,	// (0x0004d180) heading_pane_cp05_ParamLimits

0x5326,	// (0x0004d180) heading_pane_cp05

0x53f0,	// (0x0004d24a) cell_popup_blid_pane_ParamLimits

0x53f0,	// (0x0004d24a) cell_popup_blid_pane

0x5414,	// (0x0004d26e) cell_popup_blid_pane_g1

0x541c,	// (0x0004d276) cell_popup_blid_pane_t1

0xef7c,	// (0x00056dd6) mup2_indicator_pane_ParamLimits

0xef7c,	// (0x00056dd6) mup2_indicator_pane

0xd53f,	// (0x00055399) mup2_visualizer_osc_pane

0x50f0,	// (0x0004cf4a) mup2_visualizer_spec_pane_ParamLimits

0x50f0,	// (0x0004cf4a) mup2_visualizer_spec_pane

0xd53f,	// (0x00055399) mup2_spec_half_pane

0xd53f,	// (0x00055399) mup2_spec_half_pane_cp

0x542a,	// (0x0004d284) mup2_spec_bar_pane_ParamLimits

0x542a,	// (0x0004d284) mup2_spec_bar_pane

0xe465,	// (0x000562bf) mup2_spec_bar_pane_g1

0x5449,	// (0x0004d2a3) mup2_spec_bar_pane_g2

0x0001,

0xf601,	// (0x0005745b) mup2_spec_bar_pane_g

0xd53f,	// (0x00055399) mup2_osc_middle_pane

0xe465,	// (0x000562bf) mup2_visualizer_osc_pane_g1

0xd569,	// (0x000553c3) popup_number_entry_window_t1_ParamLimits

0xd57c,	// (0x000553d6) popup_number_entry_window_t2_ParamLimits

0xd58e,	// (0x000553e8) popup_number_entry_window_t3_ParamLimits

0x0fea,	// (0x00048e44) popup_number_entry_window_t5_ParamLimits

0x0fea,	// (0x00048e44) popup_number_entry_window_t5

0xf045,	// (0x00056e9f) popup_number_entry_window_t_ParamLimits

0xd5a0,	// (0x000553fa) text_title_cp2_ParamLimits

0xab5c,	// (0x000529b6) aid_hotspot_pointer_text2_pane

0xab82,	// (0x000529dc) main_viewer_pane_g9_ParamLimits

0xab82,	// (0x000529dc) main_viewer_pane_g9

0xe74f,	// (0x000565a9) cale_month_pane_t1_ParamLimits

0xe78c,	// (0x000565e6) bg_cale_pane_ParamLimits

0xe7a4,	// (0x000565fe) list_cale_pane_ParamLimits

0xe7b5,	// (0x0005660f) listscroll_cale_day_pane_t1

0xe7c7,	// (0x00056621) scroll_pane_cp09_ParamLimits

0x2df6,	// (0x0004ac50) main_mup_eq_pane_t1_ParamLimits

0x2df6,	// (0x0004ac50) main_mup_eq_pane_t1

0x2e10,	// (0x0004ac6a) main_mup_eq_pane_t2_ParamLimits

0x2e10,	// (0x0004ac6a) main_mup_eq_pane_t2

0x2e2a,	// (0x0004ac84) main_mup_eq_pane_t3_ParamLimits

0x2e2a,	// (0x0004ac84) main_mup_eq_pane_t3

0x2e46,	// (0x0004aca0) main_mup_eq_pane_t4_ParamLimits

0x2e46,	// (0x0004aca0) main_mup_eq_pane_t4

0x2e62,	// (0x0004acbc) main_mup_eq_pane_t5_ParamLimits

0x2e62,	// (0x0004acbc) main_mup_eq_pane_t5

0x2e7e,	// (0x0004acd8) main_mup_eq_pane_t6_ParamLimits

0x2e7e,	// (0x0004acd8) main_mup_eq_pane_t6

0x2e92,	// (0x0004acec) main_mup_eq_pane_t7_ParamLimits

0x2e92,	// (0x0004acec) main_mup_eq_pane_t7

0x2ea6,	// (0x0004ad00) main_mup_eq_pane_t8_ParamLimits

0x2ea6,	// (0x0004ad00) main_mup_eq_pane_t8

0x2eba,	// (0x0004ad14) main_mup_eq_pane_t9_ParamLimits

0x2eba,	// (0x0004ad14) main_mup_eq_pane_t9

0x2ed4,	// (0x0004ad2e) main_mup_eq_pane_t10_ParamLimits

0x2ed4,	// (0x0004ad2e) main_mup_eq_pane_t10

0x0009,

0xf3a4,	// (0x000571fe) main_mup_eq_pane_t_ParamLimits

0xf3a4,	// (0x000571fe) main_mup_eq_pane_t

0x2f83,	// (0x0004addd) mup_equalizer_pane_cp5_ParamLimits

0x2f97,	// (0x0004adf1) mup_equalizer_pane_cp6_ParamLimits

0x2fab,	// (0x0004ae05) mup_equalizer_pane_cp7_ParamLimits

0xd53f,	// (0x00055399) main_gallery_pane

0x4eb3,	// (0x0004cd0d) smil2_volume_pane

0x4ebb,	// (0x0004cd15) smil_status_volume_pane_g1_ParamLimits

0x4ece,	// (0x0004cd28) smil_status_volume_pane_g2_ParamLimits

0xabe2,	// (0x00052a3c) smil_status_volume_pane_g3_ParamLimits

0xf55a,	// (0x000573b4) smil_status_volume_pane_g_ParamLimits

0x50c0,	// (0x0004cf1a) bg_popup_window_pane_cp07_ParamLimits

0x5307,	// (0x0004d161) blid_firmament_pane

0xdf90,	// (0x00055dea) aid_size_cell_gallery_ParamLimits

0xdf90,	// (0x00055dea) aid_size_cell_gallery

0xdf90,	// (0x00055dea) grid_gallery_pane_ParamLimits

0xdf90,	// (0x00055dea) grid_gallery_pane

0x50c0,	// (0x0004cf1a) cell_gallery_pane_ParamLimits

0x50c0,	// (0x0004cf1a) cell_gallery_pane

0xdf90,	// (0x00055dea) bg_cell_gallery_focus_pane_ParamLimits

0xdf90,	// (0x00055dea) bg_cell_gallery_focus_pane

0xe1e4,	// (0x0005603e) cell_gallery_pane_g1_ParamLimits

0xe1e4,	// (0x0005603e) cell_gallery_pane_g1

0xe1e4,	// (0x0005603e) cell_gallery_pane_g2_ParamLimits

0xe1e4,	// (0x0005603e) cell_gallery_pane_g2

0xe1e4,	// (0x0005603e) cell_gallery_pane_g3_ParamLimits

0xe1e4,	// (0x0005603e) cell_gallery_pane_g3

0xe1f2,	// (0x0005604c) cell_gallery_pane_g4_ParamLimits

0xe1f2,	// (0x0005604c) cell_gallery_pane_g4

0x0003,

0xf606,	// (0x00057460) cell_gallery_pane_g_ParamLimits

0xf606,	// (0x00057460) cell_gallery_pane_g

0x5453,	// (0x0004d2ad) bg_cell_gallery_focus_pane_g1

0x545b,	// (0x0004d2b5) bg_cell_gallery_focus_pane_g2

0x5463,	// (0x0004d2bd) bg_cell_gallery_focus_pane_g3

0x546b,	// (0x0004d2c5) bg_cell_gallery_focus_pane_g4

0x5473,	// (0x0004d2cd) bg_cell_gallery_focus_pane_g5

0x547b,	// (0x0004d2d5) bg_cell_gallery_focus_pane_g6

0x5483,	// (0x0004d2dd) bg_cell_gallery_focus_pane_g7

0x548b,	// (0x0004d2e5) bg_cell_gallery_focus_pane_g8

0x0007,

0xf60f,	// (0x00057469) bg_cell_gallery_focus_pane_g

0x5493,	// (0x0004d2ed) aid_firma_cardinal

0x54a7,	// (0x0004d301) blid_firmament_pane_t1

0x54be,	// (0x0004d318) blid_firmament_pane_t2

0x54d5,	// (0x0004d32f) blid_firmament_pane_t3

0x54ec,	// (0x0004d346) blid_firmament_pane_t4

0x0003,

0xf620,	// (0x0005747a) blid_firmament_pane_t

0x5503,	// (0x0004d35d) blid_sat_info_pane

0xe465,	// (0x000562bf) blid_sat_info_pane_g1

0xe465,	// (0x000562bf) blid_sat_info_pane_g2

0x0001,

0xf398,	// (0x000571f2) blid_sat_info_pane_g

0x5513,	// (0x0004d36d) blid_sat_info_pane_t1

0x5521,	// (0x0004d37b) smil2_volume_content_pane

0x552a,	// (0x0004d384) smil2_volume_pane_g1

0xe2cd,	// (0x00056127) smil2_volume_content_pane_g1

0x5532,	// (0x0004d38c) smil2_volume_content_pane_g2

0x553b,	// (0x0004d395) smil2_volume_content_pane_g3

0x5544,	// (0x0004d39e) smil2_volume_content_pane_g4

0x554d,	// (0x0004d3a7) smil2_volume_content_pane_g5

0x5556,	// (0x0004d3b0) smil2_volume_content_pane_g6

0x555f,	// (0x0004d3b9) smil2_volume_content_pane_g7

0x5568,	// (0x0004d3c2) smil2_volume_content_pane_g8

0x5571,	// (0x0004d3cb) smil2_volume_content_pane_g9

0x557a,	// (0x0004d3d4) smil2_volume_content_pane_g10

0x0009,

0xf629,	// (0x00057483) smil2_volume_content_pane_g

0x161d,	// (0x00049477) cale_week_day_heading_pane_t1_ParamLimits

0x1647,	// (0x000494a1) cale_week_day_heading_pane_t2_ParamLimits

0x1676,	// (0x000494d0) cale_week_day_heading_pane_t3_ParamLimits

0x16a5,	// (0x000494ff) cale_week_day_heading_pane_t4_ParamLimits

0x16d4,	// (0x0004952e) cale_week_day_heading_pane_t5_ParamLimits

0x170b,	// (0x00049565) cale_week_day_heading_pane_t6_ParamLimits

0x1742,	// (0x0004959c) cale_week_day_heading_pane_t7_ParamLimits

0xf14c,	// (0x00056fa6) cale_week_day_heading_pane_t_ParamLimits

0xe3dd,	// (0x00056237) bg_cale_side_pane_ParamLimits

0x176c,	// (0x000495c6) cale_week_time_pane_t1_ParamLimits

0x1786,	// (0x000495e0) cale_week_time_pane_t2_ParamLimits

0x17a0,	// (0x000495fa) cale_week_time_pane_t3_ParamLimits

0x17ba,	// (0x00049614) cale_week_time_pane_t4_ParamLimits

0x17d4,	// (0x0004962e) cale_week_time_pane_t5_ParamLimits

0x17ee,	// (0x00049648) cale_week_time_pane_t6_ParamLimits

0x1808,	// (0x00049662) cale_week_time_pane_t7_ParamLimits

0x1822,	// (0x0004967c) cale_week_time_pane_t8_ParamLimits

0xf15b,	// (0x00056fb5) cale_week_time_pane_t_ParamLimits

0x183c,	// (0x00049696) cell_cale_week_pane_g2_ParamLimits

0xe3dd,	// (0x00056237) bg_cale_side_pane_cp01_ParamLimits

0x2840,	// (0x0004a69a) cale_month_week_pane_t1_ParamLimits

0x2859,	// (0x0004a6b3) cale_month_week_pane_t2_ParamLimits

0x2872,	// (0x0004a6cc) cale_month_week_pane_t3_ParamLimits

0x288b,	// (0x0004a6e5) cale_month_week_pane_t4_ParamLimits

0x28a4,	// (0x0004a6fe) cale_month_week_pane_t5_ParamLimits

0x28bd,	// (0x0004a717) cale_month_week_pane_t6_ParamLimits

0xf229,	// (0x00057083) cale_month_week_pane_t_ParamLimits

0xaa61,	// (0x000528bb) cell_cale_month_pane_g1_ParamLimits

0xd53f,	// (0x00055399) main_cale_event_viewer_pane

0xd53f,	// (0x00055399) listscroll_cale_event_viewer_pane

0x5583,	// (0x0004d3dd) list_cale_ev_pane

0x558b,	// (0x0004d3e5) scroll_pane_cp023

0x5597,	// (0x0004d3f1) field_cale_ev_pane_ParamLimits

0x5597,	// (0x0004d3f1) field_cale_ev_pane

0x55b5,	// (0x0004d40f) field_cale_ev_content_pane_ParamLimits

0x55b5,	// (0x0004d40f) field_cale_ev_content_pane

0x55c1,	// (0x0004d41b) field_cale_ev_pane_g1_ParamLimits

0x55c1,	// (0x0004d41b) field_cale_ev_pane_g1

0x55cd,	// (0x0004d427) field_cale_ev_pane_g2_ParamLimits

0x55cd,	// (0x0004d427) field_cale_ev_pane_g2

0x55e5,	// (0x0004d43f) field_cale_ev_pane_g3_ParamLimits

0x55e5,	// (0x0004d43f) field_cale_ev_pane_g3

0x0002,

0xf63e,	// (0x00057498) field_cale_ev_pane_g_ParamLimits

0xf63e,	// (0x00057498) field_cale_ev_pane_g

0x55fd,	// (0x0004d457) field_cale_ev_pane_t1_ParamLimits

0x55fd,	// (0x0004d457) field_cale_ev_pane_t1

0xe350,	// (0x000561aa) field_cale_ev_content_pane_t1_ParamLimits

0xe350,	// (0x000561aa) field_cale_ev_content_pane_t1

0xf01f,	// (0x00056e79) bg_button_pane_cp01

0x134a,	// (0x000491a4) listscroll_cale_week_pane_ParamLimits

0xe388,	// (0x000561e2) popup_toolbar_window_cp01

0xe3ae,	// (0x00056208) listscroll_cale_week_pane_t1_ParamLimits

0x134a,	// (0x000491a4) listscroll_cale_day_pane_ParamLimits

0xe388,	// (0x000561e2) popup_toolbar_window_cp02

0xe7b5,	// (0x0005660f) listscroll_cale_day_pane_t1_ParamLimits

0x134a,	// (0x000491a4) main_cale_month_pane_ParamLimits

0xabcd,	// (0x00052a27) popup_toolbar_window_cp03_ParamLimits

0xabcd,	// (0x00052a27) popup_toolbar_window_cp03

0x3353,	// (0x0004b1ad) main_image_pane_g2_ParamLimits

0x3353,	// (0x0004b1ad) main_image_pane_g2

0x3364,	// (0x0004b1be) main_image_pane_g3_ParamLimits

0x3364,	// (0x0004b1be) main_image_pane_g3

0x0002,

0xf436,	// (0x00057290) main_image_pane_g_ParamLimits

0xf436,	// (0x00057290) main_image_pane_g

0x3375,	// (0x0004b1cf) main_image_pane_t1_ParamLimits

0x338c,	// (0x0004b1e6) main_image_pane_t2_ParamLimits

0x338c,	// (0x0004b1e6) main_image_pane_t2

0x339e,	// (0x0004b1f8) main_image_pane_t3_ParamLimits

0x339e,	// (0x0004b1f8) main_image_pane_t3

0x33c6,	// (0x0004b220) main_image_pane_t4_ParamLimits

0x33c6,	// (0x0004b220) main_image_pane_t4

0x0003,

0xf43d,	// (0x00057297) main_image_pane_t_ParamLimits

0xf43d,	// (0x00057297) main_image_pane_t

0x33e6,	// (0x0004b240) popup_image_details_window_cp01

0x33f0,	// (0x0004b24a) popup_toobar_trans_pane_cp01_ParamLimits

0x33f0,	// (0x0004b24a) popup_toobar_trans_pane_cp01

0x4c3a,	// (0x0004ca94) popup_image_details_window_ParamLimits

0x4c3a,	// (0x0004ca94) popup_image_details_window

0xaba0,	// (0x000529fa) popup_image_focus_window

0xac04,	// (0x00052a5e) camera2_autofocus_pane_ParamLimits

0xac04,	// (0x00052a5e) camera2_autofocus_pane

0xd53f,	// (0x00055399) bg_popup_sub_pane_cp06

0x5614,	// (0x0004d46e) popup_image_focus_window_g1

0x561c,	// (0x0004d476) popup_image_focus_window_g2

0x5624,	// (0x0004d47e) popup_image_focus_window_g3

0x562c,	// (0x0004d486) popup_image_focus_window_g4

0x0003,

0xf645,	// (0x0005749f) popup_image_focus_window_g

0x5634,	// (0x0004d48e) popup_image_focus_window_t1

0x5642,	// (0x0004d49c) popup_image_focus_window_t2

0x5652,	// (0x0004d4ac) popup_image_focus_window_t3

0x0002,

0xf64e,	// (0x000574a8) popup_image_focus_window_t

0xe1e4,	// (0x0005603e) camera2_autofocus_pane_g1

0xdf90,	// (0x00055dea) bg_tb_trans_pane_cp01

0x5660,	// (0x0004d4ba) popup_image_details_window_g1

0x5673,	// (0x0004d4cd) popup_image_details_window_g2

0x0002,

0xf660,	// (0x000574ba) popup_image_details_window_g

0x569c,	// (0x0004d4f6) popup_image_details_window_t1

0x56ae,	// (0x0004d508) popup_image_details_window_t2

0x56c7,	// (0x0004d521) popup_image_details_window_t3

0x56db,	// (0x0004d535) popup_image_details_window_t4

0x56f6,	// (0x0004d550) popup_image_details_window_t5

0x0004,

0xf667,	// (0x000574c1) popup_image_details_window_t

0xe242,	// (0x0005609c) bg_calc_paper_pane_ParamLimits

0xd53f,	// (0x00055399) grid_highlight_pane_cp013

0xa9d1,	// (0x0005282b) list_calc_pane_ParamLimits

0xa9e3,	// (0x0005283d) scroll_pane_cp024

0xe256,	// (0x000560b0) bg_calc_display_pane_ParamLimits

0x11a6,	// (0x00049000) calc_display_pane_t1_ParamLimits

0x11bb,	// (0x00049015) calc_display_pane_t2_ParamLimits

0xa9eb,	// (0x00052845) calc_display_pane_t3_ParamLimits

0xf0cc,	// (0x00056f26) calc_display_pane_t_ParamLimits

0x127b,	// (0x000490d5) cell_calc_pane_g2

0x0001,

0xf0e9,	// (0x00056f43) cell_calc_pane_g

0x1284,	// (0x000490de) cell_calc_pane_t1

0xe2ab,	// (0x00056105) grid_highlight_pane_cp02_ParamLimits

0xe2c1,	// (0x0005611b) toolbar_button_pane_cp01_ParamLimits

0xe2c1,	// (0x0005611b) toolbar_button_pane_cp01

0x3432,	// (0x0004b28c) temp_image_control_pane_ParamLimits

0x3432,	// (0x0004b28c) temp_image_control_pane

0xdf90,	// (0x00055dea) main_mp3_pane

0x5710,	// (0x0004d56a) temp_image_control_pane_g1_ParamLimits

0x5710,	// (0x0004d56a) temp_image_control_pane_g1

0x571e,	// (0x0004d578) temp_image_control_pane_g2_ParamLimits

0x571e,	// (0x0004d578) temp_image_control_pane_g2

0x5730,	// (0x0004d58a) temp_image_control_pane_g3_ParamLimits

0x5730,	// (0x0004d58a) temp_image_control_pane_g3

0x5740,	// (0x0004d59a) temp_image_control_pane_g4_ParamLimits

0x5740,	// (0x0004d59a) temp_image_control_pane_g4

0x0003,

0xf672,	// (0x000574cc) temp_image_control_pane_g_ParamLimits

0xf672,	// (0x000574cc) temp_image_control_pane_g

0x5710,	// (0x0004d56a) main_mp3_pane_g1

0x5753,	// (0x0004d5ad) main_mp3_pane_g2

0x0007,

0xf67b,	// (0x000574d5) main_mp3_pane_g

0xac7d,	// (0x00052ad7) main_mp3_pane_t1

0xe1f2,	// (0x0005604c) main_camera_pane_g8_ParamLimits

0xe1f2,	// (0x0005604c) main_camera_pane_g8

0x1a06,	// (0x00049860) main_video_pane_g7_ParamLimits

0x1a06,	// (0x00049860) main_video_pane_g7

0xef68,	// (0x00056dc2) main_camera2_pane_t7_ParamLimits

0xef68,	// (0x00056dc2) main_camera2_pane_t7

0xe56d,	// (0x000563c7) scroll_pane_cp025_ParamLimits

0xe56d,	// (0x000563c7) scroll_pane_cp025

0xe581,	// (0x000563db) scroll_pane_cp026_ParamLimits

0xe581,	// (0x000563db) scroll_pane_cp026

0xe590,	// (0x000563ea) wml_content_pane_ParamLimits

0xd53f,	// (0x00055399) main_touch_calib_pane

0x5827,	// (0x0004d681) main_touch_calib_pane_g1

0x5839,	// (0x0004d693) main_touch_calib_pane_g2

0x584b,	// (0x0004d6a5) main_touch_calib_pane_g3

0x585d,	// (0x0004d6b7) main_touch_calib_pane_g4

0x0003,

0xf699,	// (0x000574f3) main_touch_calib_pane_g

0x586f,	// (0x0004d6c9) main_touch_calib_pane_t1

0x5889,	// (0x0004d6e3) main_touch_calib_pane_t2

0x0004,

0xf6a2,	// (0x000574fc) main_touch_calib_pane_t

0xed2a,	// (0x00056b84) mup_progress_pane_cp02

0xed5f,	// (0x00056bb9) navi_pane_g1

0xee1a,	// (0x00056c74) navi_pane_mp_t3

0xdf90,	// (0x00055dea) main_mp3_pane_ParamLimits

0x4dd2,	// (0x0004cc2c) navi_pane_ParamLimits

0x5710,	// (0x0004d56a) main_mp3_pane_g1_ParamLimits

0x5753,	// (0x0004d5ad) main_mp3_pane_g2_ParamLimits

0x5761,	// (0x0004d5bb) main_mp3_pane_g3_ParamLimits

0x5761,	// (0x0004d5bb) main_mp3_pane_g3

0x576f,	// (0x0004d5c9) main_mp3_pane_g4_ParamLimits

0x576f,	// (0x0004d5c9) main_mp3_pane_g4

0xe1e4,	// (0x0005603e) main_mp3_pane_g5_ParamLimits

0xe1e4,	// (0x0005603e) main_mp3_pane_g5

0xac58,	// (0x00052ab2) main_mp3_pane_g6_ParamLimits

0xac58,	// (0x00052ab2) main_mp3_pane_g6

0xac65,	// (0x00052abf) main_mp3_pane_g7_ParamLimits

0xac65,	// (0x00052abf) main_mp3_pane_g7

0xac71,	// (0x00052acb) main_mp3_pane_g8_ParamLimits

0xac71,	// (0x00052acb) main_mp3_pane_g8

0xf67b,	// (0x000574d5) main_mp3_pane_g_ParamLimits

0x577b,	// (0x0004d5d5) main_mp3_pane_t2

0x5789,	// (0x0004d5e3) main_mp3_pane_t3

0xac8b,	// (0x00052ae5) main_mp3_pane_t4

0xac99,	// (0x00052af3) main_mp3_pane_t5

0x0005,

0xf68c,	// (0x000574e6) main_mp3_pane_t

0xaca7,	// (0x00052b01) mup_progress_pane_cp01

0xa980,	// (0x000527da) aid_zoom_text_secondary2

0x5583,	// (0x0004d3dd) list_cale_ev2_pane

0x558b,	// (0x0004d3e5) scroll_pane_cp023_ParamLimits

0x58df,	// (0x0004d739) field_cale_ev2_pane_ParamLimits

0x58df,	// (0x0004d739) field_cale_ev2_pane

0xacaf,	// (0x00052b09) field_cale_ev2_pane_g1_ParamLimits

0xacaf,	// (0x00052b09) field_cale_ev2_pane_g1

0xacbb,	// (0x00052b15) field_cale_ev2_pane_g2_ParamLimits

0xacbb,	// (0x00052b15) field_cale_ev2_pane_g2

0xacd3,	// (0x00052b2d) field_cale_ev2_pane_g3_ParamLimits

0xacd3,	// (0x00052b2d) field_cale_ev2_pane_g3

0x0003,

0xf6ad,	// (0x00057507) field_cale_ev2_pane_g_ParamLimits

0xf6ad,	// (0x00057507) field_cale_ev2_pane_g

0x054f,	// (0x000483a9) field_cale_ev2_pane_t1_ParamLimits

0x054f,	// (0x000483a9) field_cale_ev2_pane_t1

0x0566,	// (0x000483c0) field_cale_ev2_pane_t2_ParamLimits

0x0566,	// (0x000483c0) field_cale_ev2_pane_t2

0x0001,

0xf6b6,	// (0x00057510) field_cale_ev2_pane_t_ParamLimits

0xf6b6,	// (0x00057510) field_cale_ev2_pane_t

0x3122,	// (0x0004af7c) main_postcard_pane_g5_ParamLimits

0x3122,	// (0x0004af7c) main_postcard_pane_g5

0x3138,	// (0x0004af92) main_postcard_pane_g6_ParamLimits

0x3138,	// (0x0004af92) main_postcard_pane_g6

0xdf90,	// (0x00055dea) camera2_autofocus_pane_cp_ParamLimits

0xdf90,	// (0x00055dea) camera2_autofocus_pane_cp

0xdf90,	// (0x00055dea) main_mup3_pane

0x5943,	// (0x0004d79d) main_mup3_pane_g1_ParamLimits

0x5943,	// (0x0004d79d) main_mup3_pane_g1

0x5965,	// (0x0004d7bf) main_mup3_pane_g2_ParamLimits

0x5965,	// (0x0004d7bf) main_mup3_pane_g2

0x59e3,	// (0x0004d83d) main_mup3_pane_g3_ParamLimits

0x59e3,	// (0x0004d83d) main_mup3_pane_g3

0x5a29,	// (0x0004d883) main_mup3_pane_g4_ParamLimits

0x5a29,	// (0x0004d883) main_mup3_pane_g4

0x5a6f,	// (0x0004d8c9) main_mup3_pane_g5_ParamLimits

0x5a6f,	// (0x0004d8c9) main_mup3_pane_g5

0x5ab5,	// (0x0004d90f) main_mup3_pane_g6_ParamLimits

0x5ab5,	// (0x0004d90f) main_mup3_pane_g6

0xe1f2,	// (0x0005604c) main_mup3_pane_g7_ParamLimits

0xe1f2,	// (0x0005604c) main_mup3_pane_g7

0x0007,

0xf6c6,	// (0x00057520) main_mup3_pane_g_ParamLimits

0xf6c6,	// (0x00057520) main_mup3_pane_g

0x5b33,	// (0x0004d98d) main_mup3_pane_t1_ParamLimits

0x5b33,	// (0x0004d98d) main_mup3_pane_t1

0x5ba7,	// (0x0004da01) main_mup3_pane_t2_ParamLimits

0x5ba7,	// (0x0004da01) main_mup3_pane_t2

0x5c7b,	// (0x0004dad5) main_mup3_pane_t4_ParamLimits

0x5c7b,	// (0x0004dad5) main_mup3_pane_t4

0x5cd1,	// (0x0004db2b) main_mup3_pane_t5_ParamLimits

0x5cd1,	// (0x0004db2b) main_mup3_pane_t5

0x5d8d,	// (0x0004dbe7) main_mup3_pane_t6_ParamLimits

0x5d8d,	// (0x0004dbe7) main_mup3_pane_t6

0x0005,

0xf6d7,	// (0x00057531) main_mup3_pane_t_ParamLimits

0xf6d7,	// (0x00057531) main_mup3_pane_t

0x5e45,	// (0x0004dc9f) mup3_progress_pane_ParamLimits

0x5e45,	// (0x0004dc9f) mup3_progress_pane

0x5edb,	// (0x0004dd35) popup_mup3_control_window_ParamLimits

0x5edb,	// (0x0004dd35) popup_mup3_control_window

0xacf7,	// (0x00052b51) popup_mup3_text_window

0x5f0d,	// (0x0004dd67) mup3_progress_pane_t1

0x5f2c,	// (0x0004dd86) mup3_progress_pane_t2

0xacff,	// (0x00052b59) mup3_progress_pane_t3

0x0002,

0xf6e4,	// (0x0005753e) mup3_progress_pane_t

0xad1c,	// (0x00052b76) mup_progress_pane_cp03

0xd53f,	// (0x00055399) bg_tb_trans_pane_cp04

0x5f4b,	// (0x0004dda5) mup3_volume_pane

0x5f53,	// (0x0004ddad) popup_mup3_control_window_g1

0x5f5c,	// (0x0004ddb6) mup3_volume_pane_g1

0x5f65,	// (0x0004ddbf) mup3_volume_pane_g2

0x5f6e,	// (0x0004ddc8) mup3_volume_pane_g3

0x0002,

0xf6eb,	// (0x00057545) mup3_volume_pane_g

0xd53f,	// (0x00055399) bg_tb_trans_pane_cp03

0xad2c,	// (0x00052b86) popup_mup3_text_window_g1

0xad34,	// (0x00052b8e) popup_mup3_text_window_t1

0xe29e,	// (0x000560f8) list_calc_item_pane_g1_ParamLimits

0x5252,	// (0x0004d0ac) mup_volume_pane_cp_g1

0x58a3,	// (0x0004d6fd) main_touch_calib_pane_t3

0x58b7,	// (0x0004d711) main_touch_calib_pane_t4

0x58cb,	// (0x0004d725) main_touch_calib_pane_t5

0xa95c,	// (0x000527b6) aid_cell_size_toolbar2

0xa964,	// (0x000527be) aid_popup3_width_pane

0xa970,	// (0x000527ca) aid_zoom_text_msg_primary

0x18e1,	// (0x0004973b) vorec_t7

0xe262,	// (0x000560bc) bg_calc_paper_pane_g1_ParamLimits

0xe26e,	// (0x000560c8) bg_calc_paper_pane_g2_ParamLimits

0xe27a,	// (0x000560d4) bg_calc_paper_pane_g3_ParamLimits

0xe286,	// (0x000560e0) bg_calc_paper_pane_g4_ParamLimits

0xe292,	// (0x000560ec) bg_calc_paper_pane_g5_ParamLimits

0x1205,	// (0x0004905f) bg_calc_paper_pane_g6_ParamLimits

0x1214,	// (0x0004906e) bg_calc_paper_pane_g7_ParamLimits

0x1223,	// (0x0004907d) bg_calc_paper_pane_g8_ParamLimits

0xf0d3,	// (0x00056f2d) bg_calc_paper_pane_g_ParamLimits

0x1236,	// (0x00049090) calc_bg_paper_pane_g9_ParamLimits

0xdf90,	// (0x00055dea) image_qvga_pane_ParamLimits

0xdf90,	// (0x00055dea) image_qvga_pane

0xe169,	// (0x00055fc3) bg_popup_sub_pane_cp04_ParamLimits

0x32b1,	// (0x0004b10b) popup_mup_playback_window_g1_ParamLimits

0x32bd,	// (0x0004b117) popup_mup_playback_window_t1_ParamLimits

0x32d2,	// (0x0004b12c) popup_mup_playback_window_t2_ParamLimits

0xf431,	// (0x0005728b) popup_mup_playback_window_t_ParamLimits

0xe1f2,	// (0x0005604c) main_mup2_pane_g3_ParamLimits

0xe1f2,	// (0x0005604c) main_mup2_pane_g3

0x1c0e,	// (0x00049a68) popup_toolbar_window_cp04

0x3ab4,	// (0x0004b90e) popup_call2_audio_second_window_g3_ParamLimits

0x3ab4,	// (0x0004b90e) popup_call2_audio_second_window_g3

0x3edc,	// (0x0004bd36) popup_call2_audio_first_window_g4_ParamLimits

0x3edc,	// (0x0004bd36) popup_call2_audio_first_window_g4

0x455b,	// (0x0004c3b5) popup_call2_audio_in_window_g4_ParamLimits

0x455b,	// (0x0004c3b5) popup_call2_audio_in_window_g4

0x32e7,	// (0x0004b141) aid_area_sk_bg_cut_ParamLimits

0x32e7,	// (0x0004b141) aid_area_sk_bg_cut

0x3305,	// (0x0004b15f) aid_area_sk_bg_cut_2_ParamLimits

0x3305,	// (0x0004b15f) aid_area_sk_bg_cut_2

0xd53f,	// (0x00055399) aid_placing_details_win

0xd53f,	// (0x00055399) aid_placing_details_win_2

0xe1e4,	// (0x0005603e) camera2_autofocus_pane_g1_ParamLimits

0x0f31,	// (0x00048d8b) popup_fixed_preview_cale_window_ParamLimits

0x0f31,	// (0x00048d8b) popup_fixed_preview_cale_window

0xee98,	// (0x00056cf2) navi_slider_pane_g3

0xeea1,	// (0x00056cfb) navi_slider_pane_g4

0xeeaa,	// (0x00056d04) navi_slider_pane_g5

0xee98,	// (0x00056cf2) navi_slider_pane_g6

0xab17,	// (0x00052971) navi_slider_pane_g7

0xefec,	// (0x00056e46) mup_scale_pane_g3

0xeff5,	// (0x00056e4f) mup_scale_pane_g4

0xeffe,	// (0x00056e58) mup_scale_pane_g5

0x2fbf,	// (0x0004ae19) mup_scale_pane_g6

0x2fc8,	// (0x0004ae22) mup_scale_pane_g7

0xe465,	// (0x000562bf) cams2_slider_pane_g3

0xe465,	// (0x000562bf) cams2_slider_pane_g4

0xe465,	// (0x000562bf) cams2_slider_pane_g5

0xe465,	// (0x000562bf) cams2_slider_pane_g6

0xe465,	// (0x000562bf) cams2_slider_pane_g7

0xe465,	// (0x000562bf) camera2_autofocus_pane_cp_g1

0x4b27,	// (0x0004c981) bg_popup_preview_window_pane_cp02_ParamLimits

0x4b27,	// (0x0004c981) bg_popup_preview_window_pane_cp02

0xad42,	// (0x00052b9c) list_fp_cale_pane_ParamLimits

0xad42,	// (0x00052b9c) list_fp_cale_pane

0xad4e,	// (0x00052ba8) popup_fixed_preview_cale_window_t1_ParamLimits

0xad4e,	// (0x00052ba8) popup_fixed_preview_cale_window_t1

0x5f77,	// (0x0004ddd1) popup_fixed_preview_cale_window_t2_ParamLimits

0x5f77,	// (0x0004ddd1) popup_fixed_preview_cale_window_t2

0x5f8c,	// (0x0004dde6) popup_fixed_preview_cale_window_t3_ParamLimits

0x5f8c,	// (0x0004dde6) popup_fixed_preview_cale_window_t3

0x0002,

0xf6f2,	// (0x0005754c) popup_fixed_preview_cale_window_t_ParamLimits

0xf6f2,	// (0x0005754c) popup_fixed_preview_cale_window_t

0x5fa1,	// (0x0004ddfb) list_single_fp_cale_pane_ParamLimits

0x5fa1,	// (0x0004ddfb) list_single_fp_cale_pane

0xad6c,	// (0x00052bc6) list_single_fp_cale_pane_g1_ParamLimits

0xad6c,	// (0x00052bc6) list_single_fp_cale_pane_g1

0xad78,	// (0x00052bd2) list_single_fp_cale_pane_g2_ParamLimits

0xad78,	// (0x00052bd2) list_single_fp_cale_pane_g2

0x0002,

0xf6f9,	// (0x00057553) list_single_fp_cale_pane_g_ParamLimits

0xf6f9,	// (0x00057553) list_single_fp_cale_pane_g

0xad91,	// (0x00052beb) list_single_fp_cale_pane_t1_ParamLimits

0xad91,	// (0x00052beb) list_single_fp_cale_pane_t1

0xada3,	// (0x00052bfd) list_single_fp_cale_pane_t2_ParamLimits

0xada3,	// (0x00052bfd) list_single_fp_cale_pane_t2

0x0001,

0xf700,	// (0x0005755a) list_single_fp_cale_pane_t_ParamLimits

0xf700,	// (0x0005755a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd53f,	// (0x00055399) main_dialer_pane

0xd53f,	// (0x00055399) aid_cell_size_keypad

0xd53f,	// (0x00055399) dialer_ne_pane

0xd53f,	// (0x00055399) grid_dialer_command_1_pane

0xd53f,	// (0x00055399) grid_dialer_command_2_pane

0xd53f,	// (0x00055399) grid_dialer_keypad_pane

0x5fb6,	// (0x0004de10) bg_popup_call_pane_cp06_ParamLimits

0x5fb6,	// (0x0004de10) bg_popup_call_pane_cp06

0x5fb6,	// (0x0004de10) dialer_ne_clear_pane_ParamLimits

0x5fb6,	// (0x0004de10) dialer_ne_clear_pane

0xe465,	// (0x000562bf) dialer_ne_pane_g1

0xef68,	// (0x00056dc2) dialer_ne_pane_t1_ParamLimits

0xef68,	// (0x00056dc2) dialer_ne_pane_t1

0x5fc4,	// (0x0004de1e) dialer_ne_pane_t2_ParamLimits

0x5fc4,	// (0x0004de1e) dialer_ne_pane_t2

0x5fec,	// (0x0004de46) dialer_ne_pane_t3_ParamLimits

0x5fec,	// (0x0004de46) dialer_ne_pane_t3

0x0002,

0xf705,	// (0x0005755f) dialer_ne_pane_t_ParamLimits

0xf705,	// (0x0005755f) dialer_ne_pane_t

0x5fec,	// (0x0004de46) dialer_ne_pane_t3_copy1_ParamLimits

0x5fec,	// (0x0004de46) dialer_ne_pane_t3_copy1

0xadd6,	// (0x00052c30) cell_dialer_keypad_pane_ParamLimits

0xadd6,	// (0x00052c30) cell_dialer_keypad_pane

0xdf90,	// (0x00055dea) cell_dialer_command_1_pane_ParamLimits

0xdf90,	// (0x00055dea) cell_dialer_command_1_pane

0xaded,	// (0x00052c47) cell_dialer_command_2_pane_ParamLimits

0xaded,	// (0x00052c47) cell_dialer_command_2_pane

0xdf90,	// (0x00055dea) bg_button_pane_cp02_ParamLimits

0xdf90,	// (0x00055dea) bg_button_pane_cp02

0xe1e4,	// (0x0005603e) cell_dialer_keypad_pane_g1_ParamLimits

0xe1e4,	// (0x0005603e) cell_dialer_keypad_pane_g1

0xdf90,	// (0x00055dea) bg_button_pane_cp03_ParamLimits

0xdf90,	// (0x00055dea) bg_button_pane_cp03

0xe1e4,	// (0x0005603e) cell_dialer_command_1_pane_g1_ParamLimits

0xe1e4,	// (0x0005603e) cell_dialer_command_1_pane_g1

0xd53f,	// (0x00055399) bg_button_pane_cp04

0xe465,	// (0x000562bf) cell_dialer_command_2_pane_g1

0xd53f,	// (0x00055399) bg_button_pane_cp06

0xe465,	// (0x000562bf) dialer_ne_clear_pane_g1

0xed6b,	// (0x00056bc5) navi_pane_g2

0xed99,	// (0x00056bf3) navi_pane_g3

0x0002,

0xf334,	// (0x0005718e) navi_pane_g

0xee28,	// (0x00056c82) navi_pane_mv_g2

0xee4f,	// (0x00056ca9) navi_pane_mv_g5

0x2da2,	// (0x0004abfc) navi_pane_mv_t1

0xe256,	// (0x000560b0) main_clock2_pane

0xdf90,	// (0x00055dea) main_clock2_list_pane_ParamLimits

0xdf90,	// (0x00055dea) main_clock2_list_pane

0x6082,	// (0x0004dedc) main_clock2_pane_t1_ParamLimits

0x6082,	// (0x0004dedc) main_clock2_pane_t1

0x60bd,	// (0x0004df17) main_clock2_pane_t2_ParamLimits

0x60bd,	// (0x0004df17) main_clock2_pane_t2

0x0004,

0xf711,	// (0x0005756b) main_clock2_pane_t_ParamLimits

0xf711,	// (0x0005756b) main_clock2_pane_t

0x615d,	// (0x0004dfb7) popup_clock_analogue_window_cp03_ParamLimits

0x615d,	// (0x0004dfb7) popup_clock_analogue_window_cp03

0x6182,	// (0x0004dfdc) popup_clock_digital_window_cp02_ParamLimits

0x6182,	// (0x0004dfdc) popup_clock_digital_window_cp02

0x61fb,	// (0x0004e055) main_clock2_list_single_pane_ParamLimits

0x61fb,	// (0x0004e055) main_clock2_list_single_pane

0xe42f,	// (0x00056289) list_highlight_pane_cp05

0xae34,	// (0x00052c8e) main_clock2_list_single_pane_t1

0x1c0e,	// (0x00049a68) popup_toolbar_window_cp04_ParamLimits

0xe1f2,	// (0x0005604c) camera2_autofocus_pane_g2_ParamLimits

0xe1f2,	// (0x0005604c) camera2_autofocus_pane_g2

0xe1f2,	// (0x0005604c) camera2_autofocus_pane_g3_ParamLimits

0xe1f2,	// (0x0005604c) camera2_autofocus_pane_g3

0xe1f2,	// (0x0005604c) camera2_autofocus_pane_g4_ParamLimits

0xe1f2,	// (0x0005604c) camera2_autofocus_pane_g4

0xe1f2,	// (0x0005604c) camera2_autofocus_pane_g5_ParamLimits

0xe1f2,	// (0x0005604c) camera2_autofocus_pane_g5

0x0004,

0xf655,	// (0x000574af) camera2_autofocus_pane_g_ParamLimits

0xf655,	// (0x000574af) camera2_autofocus_pane_g

0x58ff,	// (0x0004d759) camera2_autofocus_pane_cp_g2

0x5907,	// (0x0004d761) camera2_autofocus_pane_cp_g3

0x590f,	// (0x0004d769) camera2_autofocus_pane_cp_g4

0x5917,	// (0x0004d771) camera2_autofocus_pane_cp_g5

0x0004,

0xf6bb,	// (0x00057515) camera2_autofocus_pane_cp_g

0xd53f,	// (0x00055399) popup_dialer_spcha_window

0xd53f,	// (0x00055399) bg_popup_sub_pane_cp07

0xd53f,	// (0x00055399) list_spcha_pane

0xae42,	// (0x00052c9c) list_single_spcha_pane_ParamLimits

0xae42,	// (0x00052c9c) list_single_spcha_pane

0xd53f,	// (0x00055399) list_highlight_pane_cp06

0xe9a0,	// (0x000567fa) list_single_spcha_pane_t1

0x4305,	// (0x0004c15f) popup_call2_audio_out_window_g4_ParamLimits

0x4305,	// (0x0004c15f) popup_call2_audio_out_window_g4

0xd53f,	// (0x00055399) main_imed2_pane

0xaba8,	// (0x00052a02) popup_imed_adjust2_window

0x4c52,	// (0x0004caac) popup_imed_trans_window_ParamLimits

0x4c52,	// (0x0004caac) popup_imed_trans_window

0x5352,	// (0x0004d1ac) popup_blid_sat_info2_window_t1

0x5360,	// (0x0004d1ba) popup_blid_sat_info2_window_t2

0x000a,

0xf5ea,	// (0x00057444) popup_blid_sat_info2_window_t

0x62ac,	// (0x0004e106) aid_size_cell_colour_35

0x62cc,	// (0x0004e126) aid_size_cell_colour_112

0x62ec,	// (0x0004e146) aid_size_cell_effect

0xef7c,	// (0x00056dd6) bg_tb_trans_pane_cp02

0xe8c6,	// (0x00056720) heading_imed_pane

0x630c,	// (0x0004e166) listscroll_imed_pane

0xae54,	// (0x00052cae) heading_imed_pane_g1

0xae5c,	// (0x00052cb6) heading_imed_pane_t1

0xae6a,	// (0x00052cc4) grid_imed_colour_35_pane_ParamLimits

0xae6a,	// (0x00052cc4) grid_imed_colour_35_pane

0x6318,	// (0x0004e172) grid_imed_effect_pane

0xae81,	// (0x00052cdb) list_imed_aspect_pane

0x632e,	// (0x0004e188) scroll_pane_cp027_ParamLimits

0x632e,	// (0x0004e188) scroll_pane_cp027

0x633f,	// (0x0004e199) cell_imed_effect_pane_ParamLimits

0x633f,	// (0x0004e199) cell_imed_effect_pane

0xae89,	// (0x00052ce3) cell_imed_colour_pane_ParamLimits

0xae89,	// (0x00052ce3) cell_imed_colour_pane

0xaecb,	// (0x00052d25) cell_imed_colour_pane_g1_ParamLimits

0xaecb,	// (0x00052d25) cell_imed_colour_pane_g1

0xaedc,	// (0x00052d36) hgihlgiht_grid_pane_cp016_ParamLimits

0xaedc,	// (0x00052d36) hgihlgiht_grid_pane_cp016

0x6366,	// (0x0004e1c0) cell_imed_effect_pane_g1

0x636e,	// (0x0004e1c8) grid_highlight_pane_cp017

0xaeed,	// (0x00052d47) list_imed_single_pane_ParamLimits

0xaeed,	// (0x00052d47) list_imed_single_pane

0xd53f,	// (0x00055399) list_highlight_pane_cp07

0xaf02,	// (0x00052d5c) list_imed_aspect_pane_comp1_t1

0xef7c,	// (0x00056dd6) bg_tb_trans_pane_cp05

0xaf24,	// (0x00052d7e) popup_imed_adjust2_window_g1

0xaf4b,	// (0x00052da5) popup_imed_adjust2_window_t1

0xaf63,	// (0x00052dbd) slider_imed_adjust_pane

0xaf77,	// (0x00052dd1) slider_imed_adjust_pane_g1

0xaf87,	// (0x00052de1) slider_imed_adjust_pane_g2

0xaf97,	// (0x00052df1) slider_imed_adjust_pane_g3

0xafa8,	// (0x00052e02) slider_imed_adjust_pane_g4

0x0003,

0xf72e,	// (0x00057588) slider_imed_adjust_pane_g

0x6377,	// (0x0004e1d1) aid_size_cell_clipart2

0x6383,	// (0x0004e1dd) grid_imed_clipart_pane

0xafb9,	// (0x00052e13) scroll_pane_cp031

0x638d,	// (0x0004e1e7) cell_imed_clipart_pane_ParamLimits

0x638d,	// (0x0004e1e7) cell_imed_clipart_pane

0x63af,	// (0x0004e209) cell_imed_clipart_pane_g1

0xd53f,	// (0x00055399) grid_highlight_pane_cp014

0x605e,	// (0x0004deb8) main_clock2_pane_g1_ParamLimits

0x605e,	// (0x0004deb8) main_clock2_pane_g1

0x61a2,	// (0x0004dffc) aid_call2_pane_cp10

0x61b4,	// (0x0004e00e) aid_call_pane_cp10

0xeccc,	// (0x00056b26) popup_clock_analogue_window_cp10_g1

0xeccc,	// (0x00056b26) popup_clock_analogue_window_cp10_g2

0x61c6,	// (0x0004e020) popup_clock_analogue_window_cp10_g3

0x61c6,	// (0x0004e020) popup_clock_analogue_window_cp10_g4

0xeccc,	// (0x00056b26) popup_clock_analogue_window_cp10_g5

0x0004,

0xf71c,	// (0x00057576) popup_clock_analogue_window_cp10_g

0x61dc,	// (0x0004e036) popup_clock_analogue_window_cp10_t1

0x620d,	// (0x0004e067) clock_digital_number_pane_cp10_ParamLimits

0x620d,	// (0x0004e067) clock_digital_number_pane_cp10

0x6225,	// (0x0004e07f) clock_digital_number_pane_cp11_ParamLimits

0x6225,	// (0x0004e07f) clock_digital_number_pane_cp11

0x623d,	// (0x0004e097) clock_digital_number_pane_cp12_ParamLimits

0x623d,	// (0x0004e097) clock_digital_number_pane_cp12

0x6257,	// (0x0004e0b1) clock_digital_number_pane_cp13_ParamLimits

0x6257,	// (0x0004e0b1) clock_digital_number_pane_cp13

0x6271,	// (0x0004e0cb) clock_digital_separator_pane_cp10_ParamLimits

0x6271,	// (0x0004e0cb) clock_digital_separator_pane_cp10

0x628b,	// (0x0004e0e5) popup_clock_digital_window_cp02_t1_ParamLimits

0x628b,	// (0x0004e0e5) popup_clock_digital_window_cp02_t1

0xe161,	// (0x00055fbb) clock_digital_number_pane_cp10_g1

0xe161,	// (0x00055fbb) clock_digital_number_pane_cp10_g2

0x0001,

0xf737,	// (0x00057591) clock_digital_number_pane_cp10_g

0xe161,	// (0x00055fbb) clock_digital_separator_pane_cp10_g1

0xe161,	// (0x00055fbb) clock_digital_separator_pane_g2_cp10

0xee57,	// (0x00056cb1) navi_pane_vded_g4

0xee60,	// (0x00056cba) navi_pane_vded_g5

0xee69,	// (0x00056cc3) navi_pane_vded_t1

0xd53f,	// (0x00055399) main_vded_pane

0x63b8,	// (0x0004e212) main_vded_pane_g1

0x63c2,	// (0x0004e21c) main_vded_pane_g2

0x63cc,	// (0x0004e226) main_vded_pane_g3

0x0002,

0xf73c,	// (0x00057596) main_vded_pane_g

0x63d6,	// (0x0004e230) main_vded_pane_t1

0x63e4,	// (0x0004e23e) main_vded_pane_t2

0x0001,

0xf743,	// (0x0005759d) main_vded_pane_t

0x63f2,	// (0x0004e24c) vded_slider_pane

0x63fa,	// (0x0004e254) vded_video_pane

0xafc1,	// (0x00052e1b) vded_video_pane_g1

0x6402,	// (0x0004e25c) vded_video_pane_g2

0xe465,	// (0x000562bf) vded_video_pane_g3

0x0002,

0xf748,	// (0x000575a2) vded_video_pane_g

0xafcb,	// (0x00052e25) vded_slider_pane_g1

0x5252,	// (0x0004d0ac) vded_slider_pane_g2

0xafd4,	// (0x00052e2e) vded_slider_pane_g3

0xafdd,	// (0x00052e37) vded_slider_pane_g4

0xafe6,	// (0x00052e40) vded_slider_pane_g5

0x0004,

0xf74f,	// (0x000575a9) vded_slider_pane_g

0x5ec3,	// (0x0004dd1d) mup3_rocker_pane_ParamLimits

0x5ec3,	// (0x0004dd1d) mup3_rocker_pane

0x640b,	// (0x0004e265) mup3_control_keys_pane_g1

0x6413,	// (0x0004e26d) mup3_control_keys_pane_g2

0x641b,	// (0x0004e275) mup3_control_keys_pane_g3

0x6423,	// (0x0004e27d) mup3_control_keys_pane_g4

0x0003,

0xf75a,	// (0x000575b4) mup3_control_keys_pane_g

0x0f68,	// (0x00048dc2) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0f68,	// (0x00048dc2) popup_toolbar2_fixed_window_cp01

0x5ef7,	// (0x0004dd51) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5ef7,	// (0x0004dd51) popup_toolbar2_fixed_window_cp02

0x3c26,	// (0x0004ba80) popup_call2_audio_second_window_t4_ParamLimits

0x3c26,	// (0x0004ba80) popup_call2_audio_second_window_t4

0x4172,	// (0x0004bfcc) popup_call2_audio_first_window_t6_ParamLimits

0x4172,	// (0x0004bfcc) popup_call2_audio_first_window_t6

0x4408,	// (0x0004c262) popup_call2_audio_out_window_t6_ParamLimits

0x4408,	// (0x0004c262) popup_call2_audio_out_window_t6

0xd53f,	// (0x00055399) main_vitu_pane

0xdf90,	// (0x00055dea) aid_size_cell_itu_ParamLimits

0xdf90,	// (0x00055dea) aid_size_cell_itu

0xdf90,	// (0x00055dea) bg_popup_window_pane_cp08_ParamLimits

0xdf90,	// (0x00055dea) bg_popup_window_pane_cp08

0xdf90,	// (0x00055dea) field_vitu_entry_pane_ParamLimits

0xdf90,	// (0x00055dea) field_vitu_entry_pane

0xdf90,	// (0x00055dea) grid_vitu_function_pane_ParamLimits

0xdf90,	// (0x00055dea) grid_vitu_function_pane

0xdf90,	// (0x00055dea) grid_vitu_itu_pane_ParamLimits

0xdf90,	// (0x00055dea) grid_vitu_itu_pane

0xdf90,	// (0x00055dea) cell_vitu_itu_pane_ParamLimits

0xdf90,	// (0x00055dea) cell_vitu_itu_pane

0xdf90,	// (0x00055dea) cell_vitu_function_pane_ParamLimits

0xdf90,	// (0x00055dea) cell_vitu_function_pane

0xdf90,	// (0x00055dea) bg_popup_sub_pane_cp08_ParamLimits

0xdf90,	// (0x00055dea) bg_popup_sub_pane_cp08

0xe437,	// (0x00056291) field_vitu_entry_pane_t1_ParamLimits

0xe437,	// (0x00056291) field_vitu_entry_pane_t1

0xafef,	// (0x00052e49) field_vitu_entry_pane_t2_ParamLimits

0xafef,	// (0x00052e49) field_vitu_entry_pane_t2

0x0001,

0xf763,	// (0x000575bd) field_vitu_entry_pane_t_ParamLimits

0xf763,	// (0x000575bd) field_vitu_entry_pane_t

0x50c0,	// (0x0004cf1a) bg_button_pane_cp05_ParamLimits

0x50c0,	// (0x0004cf1a) bg_button_pane_cp05

0xb00c,	// (0x00052e66) cell_vitu_itu_pane_g1

0xef54,	// (0x00056dae) cell_vitu_itu_pane_t1_ParamLimits

0xef54,	// (0x00056dae) cell_vitu_itu_pane_t1

0xef54,	// (0x00056dae) cell_vitu_itu_pane_t2_ParamLimits

0xef54,	// (0x00056dae) cell_vitu_itu_pane_t2

0x0002,

0xf768,	// (0x000575c2) cell_vitu_itu_pane_t_ParamLimits

0xf768,	// (0x000575c2) cell_vitu_itu_pane_t

0xd53f,	// (0x00055399) bg_button_pane_cp07

0xe465,	// (0x000562bf) cell_vitu_function_pane_g1

0xa9c9,	// (0x00052823) main_calc_pane_g1

0x0df6,	// (0x00048c50) aid_visual_content_pane

0xd53f,	// (0x00055399) main_vradio_pane

0xe1e4,	// (0x0005603e) main_vradio_pane_g1_ParamLimits

0xe1e4,	// (0x0005603e) main_vradio_pane_g1

0xe1f2,	// (0x0005604c) main_vradio_pane_g2_ParamLimits

0xe1f2,	// (0x0005604c) main_vradio_pane_g2

0x0001,

0xf76f,	// (0x000575c9) main_vradio_pane_g_ParamLimits

0xf76f,	// (0x000575c9) main_vradio_pane_g

0xe437,	// (0x00056291) main_vradio_pane_t1_ParamLimits

0xe437,	// (0x00056291) main_vradio_pane_t1

0xe437,	// (0x00056291) main_vradio_pane_t2_ParamLimits

0xe437,	// (0x00056291) main_vradio_pane_t2

0xef68,	// (0x00056dc2) main_vradio_pane_t3_ParamLimits

0xef68,	// (0x00056dc2) main_vradio_pane_t3

0x0002,

0xf774,	// (0x000575ce) main_vradio_pane_t_ParamLimits

0xf774,	// (0x000575ce) main_vradio_pane_t

0xdf90,	// (0x00055dea) vradio_rocker_control_pane_ParamLimits

0xdf90,	// (0x00055dea) vradio_rocker_control_pane

0xdf90,	// (0x00055dea) vradio_station_info_pane_ParamLimits

0xdf90,	// (0x00055dea) vradio_station_info_pane

0xdf90,	// (0x00055dea) vradio_frequency_info_pane_ParamLimits

0xdf90,	// (0x00055dea) vradio_frequency_info_pane

0xe465,	// (0x000562bf) vradio_station_info_pane_g1

0xef54,	// (0x00056dae) vradio_station_info_pane_t1_ParamLimits

0xef54,	// (0x00056dae) vradio_station_info_pane_t1

0xef68,	// (0x00056dc2) vradio_station_info_pane_t2_ParamLimits

0xef68,	// (0x00056dc2) vradio_station_info_pane_t2

0x0001,

0xf77b,	// (0x000575d5) vradio_station_info_pane_t_ParamLimits

0xf77b,	// (0x000575d5) vradio_station_info_pane_t

0xd53f,	// (0x00055399) vradio_tuning_pane

0x6433,	// (0x0004e28d) vradio_rocker_control_pane_g1

0xb028,	// (0x00052e82) vradio_rocker_control_pane_g2

0x643d,	// (0x0004e297) vradio_rocker_control_pane_g3

0x6447,	// (0x0004e2a1) vradio_rocker_control_pane_g4

0x6451,	// (0x0004e2ab) vradio_rocker_control_pane_g5

0x0004,

0xf780,	// (0x000575da) vradio_rocker_control_pane_g

0xe465,	// (0x000562bf) vradio_frequency_info_pane_g1

0xe437,	// (0x00056291) vradio_frequency_info_pane_t1_ParamLimits

0xe437,	// (0x00056291) vradio_frequency_info_pane_t1

0x645b,	// (0x0004e2b5) vradio_tuning_pane_g1

0x6468,	// (0x0004e2c2) vradio_tuning_pane_t1

0xa988,	// (0x000527e2) area_side_right_pane_ParamLimits

0xa988,	// (0x000527e2) area_side_right_pane

0x4ad0,	// (0x0004c92a) status_small_pane_g1

0x4ad8,	// (0x0004c932) status_small_pane_g2

0x4ae1,	// (0x0004c93b) status_small_pane_g3

0x4aea,	// (0x0004c944) status_small_pane_g4

0x0003,

0xf54c,	// (0x000573a6) status_small_pane_g

0x4af3,	// (0x0004c94d) status_small_pane_t1

0xd53f,	// (0x00055399) main_video3_pane

0xb030,	// (0x00052e8a) cams_zoom_vslider_pane

0xb038,	// (0x00052e92) image3_wide_pane_ParamLimits

0xb038,	// (0x00052e92) image3_wide_pane

0xb052,	// (0x00052eac) image3_wide_small_pane

0xb05e,	// (0x00052eb8) main_video3_pane_g1_ParamLimits

0xb05e,	// (0x00052eb8) main_video3_pane_g1

0xb07a,	// (0x00052ed4) main_video3_pane_g2_ParamLimits

0xb07a,	// (0x00052ed4) main_video3_pane_g2

0x0001,

0xf78b,	// (0x000575e5) main_video3_pane_g_ParamLimits

0xf78b,	// (0x000575e5) main_video3_pane_g

0xb096,	// (0x00052ef0) main_video3_pane_t1_ParamLimits

0xb096,	// (0x00052ef0) main_video3_pane_t1

0xb0c1,	// (0x00052f1b) main_video3_pane_t2_ParamLimits

0xb0c1,	// (0x00052f1b) main_video3_pane_t2

0xb0ec,	// (0x00052f46) main_video3_pane_t3_ParamLimits

0xb0ec,	// (0x00052f46) main_video3_pane_t3

0x0002,

0xf790,	// (0x000575ea) main_video3_pane_t_ParamLimits

0xf790,	// (0x000575ea) main_video3_pane_t

0xb119,	// (0x00052f73) cams_zoom_vslider_pane_g1

0xb122,	// (0x00052f7c) cams_zoom_vslider_pane_g2

0x0001,

0xf797,	// (0x000575f1) cams_zoom_vslider_pane_g

0xb12a,	// (0x00052f84) small_slider_vertical_pane

0xe465,	// (0x000562bf) small_slider_vertical_pane_g1

0xe465,	// (0x000562bf) small_slider_vertical_pane_g2

0xb132,	// (0x00052f8c) small_slider_vertical_pane_g3

0x0002,

0xf79c,	// (0x000575f6) small_slider_vertical_pane_g

0xd53f,	// (0x00055399) main_hwr_training_pane

0xb13b,	// (0x00052f95) hwr_training_instruct_pane_ParamLimits

0xb13b,	// (0x00052f95) hwr_training_instruct_pane

0x6477,	// (0x0004e2d1) hwr_training_navi_pane_ParamLimits

0x6477,	// (0x0004e2d1) hwr_training_navi_pane

0x6496,	// (0x0004e2f0) hwr_training_write_pane_ParamLimits

0x6496,	// (0x0004e2f0) hwr_training_write_pane

0xd53f,	// (0x00055399) bg_frame_shadow_pane

0xb172,	// (0x00052fcc) hwr_training_write_pane_g1

0xb17a,	// (0x00052fd4) hwr_training_write_pane_g2

0xb182,	// (0x00052fdc) hwr_training_write_pane_g3

0xb18a,	// (0x00052fe4) hwr_training_write_pane_g4

0xb192,	// (0x00052fec) hwr_training_write_pane_g5

0xb19a,	// (0x00052ff4) hwr_training_write_pane_g6

0xb1a2,	// (0x00052ffc) hwr_training_write_pane_g7

0x0006,

0xf7a3,	// (0x000575fd) hwr_training_write_pane_g

0xb1aa,	// (0x00053004) hwr_training_navi_pane_g1_ParamLimits

0xb1aa,	// (0x00053004) hwr_training_navi_pane_g1

0xb1bc,	// (0x00053016) hwr_training_navi_pane_g2_ParamLimits

0xb1bc,	// (0x00053016) hwr_training_navi_pane_g2

0xb1ce,	// (0x00053028) hwr_training_navi_pane_g3_ParamLimits

0xb1ce,	// (0x00053028) hwr_training_navi_pane_g3

0xb1de,	// (0x00053038) hwr_training_navi_pane_g4_ParamLimits

0xb1de,	// (0x00053038) hwr_training_navi_pane_g4

0x0004,

0xf7b2,	// (0x0005760c) hwr_training_navi_pane_g_ParamLimits

0xf7b2,	// (0x0005760c) hwr_training_navi_pane_g

0xb1eb,	// (0x00053045) hwr_training_navi_pane_t1

0x64de,	// (0x0004e338) list_single_hwr_training_instruct_pane_ParamLimits

0x64de,	// (0x0004e338) list_single_hwr_training_instruct_pane

0xb1f9,	// (0x00053053) list_single_hwr_training_instruct_pane_t1

0x5453,	// (0x0004d2ad) bg_frame_shadow_pane_g1

0xb208,	// (0x00053062) bg_frame_shadow_pane_g2

0xb210,	// (0x0005306a) bg_frame_shadow_pane_g3

0xb218,	// (0x00053072) bg_frame_shadow_pane_g4

0xb220,	// (0x0005307a) bg_frame_shadow_pane_g5

0xb228,	// (0x00053082) bg_frame_shadow_pane_g6

0xb230,	// (0x0005308a) bg_frame_shadow_pane_g7

0xe30e,	// (0x00056168) bg_frame_shadow_pane_g8

0x0007,

0xf7bd,	// (0x00057617) bg_frame_shadow_pane_g

0xd53f,	// (0x00055399) main_video_tele_dialer_pane

0x64f3,	// (0x0004e34d) aid_size_cell_video_keypad_ParamLimits

0x64f3,	// (0x0004e34d) aid_size_cell_video_keypad

0x650d,	// (0x0004e367) grid_video_dialer_keypad_pane_ParamLimits

0x650d,	// (0x0004e367) grid_video_dialer_keypad_pane

0x6559,	// (0x0004e3b3) video_down_pane_cp_ParamLimits

0x6559,	// (0x0004e3b3) video_down_pane_cp

0x658b,	// (0x0004e3e5) cell_video_dialer_keypad_pane_ParamLimits

0x658b,	// (0x0004e3e5) cell_video_dialer_keypad_pane

0xb238,	// (0x00053092) bg_button_pane_cp08_ParamLimits

0xb238,	// (0x00053092) bg_button_pane_cp08

0x65ad,	// (0x0004e407) cell_video_dialer_keypad_pane_g1_ParamLimits

0x65ad,	// (0x0004e407) cell_video_dialer_keypad_pane_g1

0x5ead,	// (0x0004dd07) mup3_rocker2_pane_ParamLimits

0x5ead,	// (0x0004dd07) mup3_rocker2_pane

0xe465,	// (0x000562bf) mup3_rocker2_pane_g1

0x4b33,	// (0x0004c98d) main_dialer2_pane

0xd53f,	// (0x00055399) main_mp4_pane

0xb262,	// (0x000530bc) main_mp4_pane_g1_ParamLimits

0xb262,	// (0x000530bc) main_mp4_pane_g1

0xb262,	// (0x000530bc) main_mp4_pane_g2_ParamLimits

0xb262,	// (0x000530bc) main_mp4_pane_g2

0x65e4,	// (0x0004e43e) main_mp4_pane_g3_ParamLimits

0x65e4,	// (0x0004e43e) main_mp4_pane_g3

0xb270,	// (0x000530ca) main_mp4_pane_g4_ParamLimits

0xb270,	// (0x000530ca) main_mp4_pane_g4

0xb29e,	// (0x000530f8) main_mp4_pane_g5_ParamLimits

0xb29e,	// (0x000530f8) main_mp4_pane_g5

0x0007,

0xf7dd,	// (0x00057637) main_mp4_pane_g_ParamLimits

0xf7dd,	// (0x00057637) main_mp4_pane_g

0xb312,	// (0x0005316c) main_mp4_pane_t1_ParamLimits

0xb312,	// (0x0005316c) main_mp4_pane_t1

0xb36e,	// (0x000531c8) main_mp4_pane_t2_ParamLimits

0xb36e,	// (0x000531c8) main_mp4_pane_t2

0xb3c0,	// (0x0005321a) main_mp4_pane_t3_ParamLimits

0xb3c0,	// (0x0005321a) main_mp4_pane_t3

0xb3e6,	// (0x00053240) main_mp4_pane_t4_ParamLimits

0xb3e6,	// (0x00053240) main_mp4_pane_t4

0x0003,

0xf7ee,	// (0x00057648) main_mp4_pane_t_ParamLimits

0xf7ee,	// (0x00057648) main_mp4_pane_t

0xb42a,	// (0x00053284) mp4_progress_pane_ParamLimits

0xb42a,	// (0x00053284) mp4_progress_pane

0xb474,	// (0x000532ce) mp4_rocker_pane_ParamLimits

0xb474,	// (0x000532ce) mp4_rocker_pane

0xb49c,	// (0x000532f6) mp4_progress_pane_t1

0xb4b5,	// (0x0005330f) mp4_progress_pane_t2

0x0001,

0xf7f7,	// (0x00057651) mp4_progress_pane_t

0xb4ce,	// (0x00053328) mup_progress_pane_cp04

0xe465,	// (0x000562bf) mp4_rocker_pane_g1

0x6620,	// (0x0004e47a) aid_cell_size_keypad2_ParamLimits

0x6620,	// (0x0004e47a) aid_cell_size_keypad2

0x6636,	// (0x0004e490) dialer2_ne_pane_ParamLimits

0x6636,	// (0x0004e490) dialer2_ne_pane

0x6650,	// (0x0004e4aa) grid_dialer2_keypad_pane_ParamLimits

0x6650,	// (0x0004e4aa) grid_dialer2_keypad_pane

0x50c0,	// (0x0004cf1a) bg_popup_call_pane_cp07_ParamLimits

0x50c0,	// (0x0004cf1a) bg_popup_call_pane_cp07

0x666c,	// (0x0004e4c6) dialer2_ne_pane_t1_ParamLimits

0x666c,	// (0x0004e4c6) dialer2_ne_pane_t1

0x66a7,	// (0x0004e501) cell_dialer2_keypad_pane_ParamLimits

0x66a7,	// (0x0004e501) cell_dialer2_keypad_pane

0xb4f3,	// (0x0005334d) bg_button_pane_pane_cp04_ParamLimits

0xb4f3,	// (0x0005334d) bg_button_pane_pane_cp04

0x66c9,	// (0x0004e523) cell_dialer2_keypad_pane_g1_ParamLimits

0x66c9,	// (0x0004e523) cell_dialer2_keypad_pane_g1

0x1ae2,	// (0x0004993c) aid_placing_vt_set_content_ParamLimits

0x1ae2,	// (0x0004993c) aid_placing_vt_set_content

0x1b0a,	// (0x00049964) aid_placing_vt_set_title_ParamLimits

0x1b0a,	// (0x00049964) aid_placing_vt_set_title

0xd53f,	// (0x00055399) main_image3_pane

0x678f,	// (0x0004e5e9) area_side_right_pane_cp01_ParamLimits

0x678f,	// (0x0004e5e9) area_side_right_pane_cp01

0xb262,	// (0x000530bc) main_image3_pane_g1_ParamLimits

0xb262,	// (0x000530bc) main_image3_pane_g1

0x67a6,	// (0x0004e600) main_image3_pane_g2_ParamLimits

0x67a6,	// (0x0004e600) main_image3_pane_g2

0x67ce,	// (0x0004e628) main_image3_pane_g3_ParamLimits

0x67ce,	// (0x0004e628) main_image3_pane_g3

0x67f8,	// (0x0004e652) main_image3_pane_g4_ParamLimits

0x67f8,	// (0x0004e652) main_image3_pane_g4

0x0003,

0xf806,	// (0x00057660) main_image3_pane_g_ParamLimits

0xf806,	// (0x00057660) main_image3_pane_g

0x6822,	// (0x0004e67c) main_image3_pane_t1_ParamLimits

0x6822,	// (0x0004e67c) main_image3_pane_t1

0x687a,	// (0x0004e6d4) main_image3_pane_t2_ParamLimits

0x687a,	// (0x0004e6d4) main_image3_pane_t2

0x68cc,	// (0x0004e726) main_image3_pane_t3_ParamLimits

0x68cc,	// (0x0004e726) main_image3_pane_t3

0x0003,

0xf80f,	// (0x00057669) main_image3_pane_t_ParamLimits

0xf80f,	// (0x00057669) main_image3_pane_t

0xdf90,	// (0x00055dea) grid_sctrl_middle_pane_cp01_ParamLimits

0xdf90,	// (0x00055dea) grid_sctrl_middle_pane_cp01

0x6954,	// (0x0004e7ae) cell_sctrl_middle_pane_cp01_ParamLimits

0x6954,	// (0x0004e7ae) cell_sctrl_middle_pane_cp01

0x6971,	// (0x0004e7cb) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6971,	// (0x0004e7cb) cell_sctrl_middle_pane_cp01_g1

0xd53f,	// (0x00055399) main_call4_pane

0x6987,	// (0x0004e7e1) aid_size_button_call4_ParamLimits

0x6987,	// (0x0004e7e1) aid_size_button_call4

0x69ba,	// (0x0004e814) call4_windows_pane_ParamLimits

0x69ba,	// (0x0004e814) call4_windows_pane

0x69d9,	// (0x0004e833) grid_call4_button_pane_ParamLimits

0x69d9,	// (0x0004e833) grid_call4_button_pane

0x6a0c,	// (0x0004e866) call4_windows_conf_pane

0x6a23,	// (0x0004e87d) popup_call4_audio_first_window_ParamLimits

0x6a23,	// (0x0004e87d) popup_call4_audio_first_window

0x6a73,	// (0x0004e8cd) popup_call4_audio_second_window_ParamLimits

0x6a73,	// (0x0004e8cd) popup_call4_audio_second_window

0x6a8a,	// (0x0004e8e4) popup_call4_audio_wait_window_ParamLimits

0x6a8a,	// (0x0004e8e4) popup_call4_audio_wait_window

0x6a98,	// (0x0004e8f2) cell_call4_button_pane_ParamLimits

0x6a98,	// (0x0004e8f2) cell_call4_button_pane

0x6abd,	// (0x0004e917) bg_button_pane_cp09_ParamLimits

0x6abd,	// (0x0004e917) bg_button_pane_cp09

0x6ac9,	// (0x0004e923) cell_call4_button_pane_g1_ParamLimits

0x6ac9,	// (0x0004e923) cell_call4_button_pane_g1

0x6aef,	// (0x0004e949) cell_call4_button_pane_t1_ParamLimits

0x6aef,	// (0x0004e949) cell_call4_button_pane_t1

0xb56b,	// (0x000533c5) popup_call4_audio_conf_window_ParamLimits

0xb56b,	// (0x000533c5) popup_call4_audio_conf_window

0x5f0d,	// (0x0004dd67) mup3_progress_pane_t1_ParamLimits

0x5f2c,	// (0x0004dd86) mup3_progress_pane_t2_ParamLimits

0xacff,	// (0x00052b59) mup3_progress_pane_t3_ParamLimits

0xf6e4,	// (0x0005753e) mup3_progress_pane_t_ParamLimits

0xad1c,	// (0x00052b76) mup_progress_pane_cp03_ParamLimits

0x642b,	// (0x0004e285) mup3_control_keys_pane_g4_copy1

0xb458,	// (0x000532b2) mp4_rocker2_pane_ParamLimits

0xb458,	// (0x000532b2) mp4_rocker2_pane

0xb57f,	// (0x000533d9) mp4_rocker2_pane_g1

0xb587,	// (0x000533e1) mp4_rocker2_pane_g2

0xb58f,	// (0x000533e9) mp4_rocker2_pane_g3

0xb597,	// (0x000533f1) mp4_rocker2_pane_g4

0xb59f,	// (0x000533f9) mp4_rocker2_pane_g5

0x0004,

0xf818,	// (0x00057672) mp4_rocker2_pane_g

0xd53f,	// (0x00055399) main_camera4_pane

0xd53f,	// (0x00055399) main_video4_pane

0x6527,	// (0x0004e381) main_video_tele_dialer_pane_t1_ParamLimits

0x6527,	// (0x0004e381) main_video_tele_dialer_pane_t1

0x6540,	// (0x0004e39a) main_video_tele_dialer_pane_t2_ParamLimits

0x6540,	// (0x0004e39a) main_video_tele_dialer_pane_t2

0x0001,

0xf7ce,	// (0x00057628) main_video_tele_dialer_pane_t_ParamLimits

0xf7ce,	// (0x00057628) main_video_tele_dialer_pane_t

0x6b2d,	// (0x0004e987) cam4_autofocus_pane_ParamLimits

0x6b2d,	// (0x0004e987) cam4_autofocus_pane

0x6b43,	// (0x0004e99d) cam4_image_uncrop_pane_ParamLimits

0x6b43,	// (0x0004e99d) cam4_image_uncrop_pane

0x6b5d,	// (0x0004e9b7) cam4_indicators_pane_ParamLimits

0x6b5d,	// (0x0004e9b7) cam4_indicators_pane

0x6b88,	// (0x0004e9e2) main_camera4_pane_g1_ParamLimits

0x6b88,	// (0x0004e9e2) main_camera4_pane_g1

0x6b9a,	// (0x0004e9f4) main_camera4_pane_g2_ParamLimits

0x6b9a,	// (0x0004e9f4) main_camera4_pane_g2

0x6bad,	// (0x0004ea07) main_camera4_pane_g3_ParamLimits

0x6bad,	// (0x0004ea07) main_camera4_pane_g3

0x6bc0,	// (0x0004ea1a) main_camera4_pane_g4_ParamLimits

0x6bc0,	// (0x0004ea1a) main_camera4_pane_g4

0x6bd3,	// (0x0004ea2d) main_camera4_pane_g5_ParamLimits

0x6bd3,	// (0x0004ea2d) main_camera4_pane_g5

0x0005,

0xf823,	// (0x0005767d) main_camera4_pane_g_ParamLimits

0xf823,	// (0x0005767d) main_camera4_pane_g

0x6bf7,	// (0x0004ea51) main_camera4_pane_t1_ParamLimits

0x6bf7,	// (0x0004ea51) main_camera4_pane_t1

0xe1e4,	// (0x0005603e) bg_tb_trans_pane_cp06

0xb5cb,	// (0x00053425) cam4_indicators_pane_g1

0xb5dc,	// (0x00053436) cam4_indicators_pane_g2

0x0002,

0xf83e,	// (0x00057698) cam4_indicators_pane_g

0xb5fa,	// (0x00053454) cam4_indicators_pane_t1

0x6c5b,	// (0x0004eab5) main_video4_pane_g1_ParamLimits

0x6c5b,	// (0x0004eab5) main_video4_pane_g1

0x6c6a,	// (0x0004eac4) main_video4_pane_g2_ParamLimits

0x6c6a,	// (0x0004eac4) main_video4_pane_g2

0x6c79,	// (0x0004ead3) main_video4_pane_g3_ParamLimits

0x6c79,	// (0x0004ead3) main_video4_pane_g3

0x6c88,	// (0x0004eae2) main_video4_pane_g4_ParamLimits

0x6c88,	// (0x0004eae2) main_video4_pane_g4

0x0004,

0xf845,	// (0x0005769f) main_video4_pane_g_ParamLimits

0xf845,	// (0x0005769f) main_video4_pane_g

0x6ca6,	// (0x0004eb00) vid4_indicators_pane_ParamLimits

0x6ca6,	// (0x0004eb00) vid4_indicators_pane

0x6cd4,	// (0x0004eb2e) video4_image_uncrop_cif_pane_ParamLimits

0x6cd4,	// (0x0004eb2e) video4_image_uncrop_cif_pane

0x6cee,	// (0x0004eb48) video4_image_uncrop_nhd_pane_ParamLimits

0x6cee,	// (0x0004eb48) video4_image_uncrop_nhd_pane

0x6b43,	// (0x0004e99d) video4_image_uncrop_vga_pane_ParamLimits

0x6b43,	// (0x0004e99d) video4_image_uncrop_vga_pane

0xdf90,	// (0x00055dea) bg_tb_trans_pane_cp07

0xb626,	// (0x00053480) vid4_indicators_pane_g1

0xb63a,	// (0x00053494) vid4_indicators_pane_g2

0xb64e,	// (0x000534a8) vid4_indicators_pane_g3

0x0004,

0xf850,	// (0x000576aa) vid4_indicators_pane_g

0xb67d,	// (0x000534d7) vid4_indicators_pane_t1

0x6d02,	// (0x0004eb5c) cam4_autofocus_pane_g1

0x6d0a,	// (0x0004eb64) cam4_autofocus_pane_g2

0x6d12,	// (0x0004eb6c) cam4_autofocus_pane_g3

0x0002,

0xf85b,	// (0x000576b5) cam4_autofocus_pane_g

0x6d1a,	// (0x0004eb74) cam4_autofocus_pane_g3_copy1

0x656f,	// (0x0004e3c9) video_down_pane_cp_t1

0x657d,	// (0x0004e3d7) video_down_pane_cp_t2

0x0001,

0xf7d3,	// (0x0005762d) video_down_pane_cp_t

0xdf90,	// (0x00055dea) popup_vitu2_window_ParamLimits

0xdf90,	// (0x00055dea) popup_vitu2_window

0x6d22,	// (0x0004eb7c) aid_size_cell2_itu2_ParamLimits

0x6d22,	// (0x0004eb7c) aid_size_cell2_itu2

0x6d48,	// (0x0004eba2) aid_size_cell_itu2_ParamLimits

0x6d48,	// (0x0004eba2) aid_size_cell_itu2

0x5fb6,	// (0x0004de10) bg_popup_window_pane_cp09_ParamLimits

0x5fb6,	// (0x0004de10) bg_popup_window_pane_cp09

0x6da4,	// (0x0004ebfe) field_vitu2_entry_pane_ParamLimits

0x6da4,	// (0x0004ebfe) field_vitu2_entry_pane

0x6dca,	// (0x0004ec24) grid_vitu2_function_pane_ParamLimits

0x6dca,	// (0x0004ec24) grid_vitu2_function_pane

0x6e1b,	// (0x0004ec75) grid_vitu2_itu_pane_ParamLimits

0x6e1b,	// (0x0004ec75) grid_vitu2_itu_pane

0x6eb1,	// (0x0004ed0b) cell_vitu2_itu_pane_ParamLimits

0x6eb1,	// (0x0004ed0b) cell_vitu2_itu_pane

0x6edd,	// (0x0004ed37) cell_vitu2_function_pane_ParamLimits

0x6edd,	// (0x0004ed37) cell_vitu2_function_pane

0xb694,	// (0x000534ee) bg_popup_call_pane_cp08_ParamLimits

0xb694,	// (0x000534ee) bg_popup_call_pane_cp08

0xb6ab,	// (0x00053505) field_vitu2_entry_pane_g1

0xb6b7,	// (0x00053511) field_vitu2_entry_pane_g2

0x0002,

0xf862,	// (0x000576bc) field_vitu2_entry_pane_g

0x057b,	// (0x000483d5) field_vitu2_entry_pane_t1_ParamLimits

0x057b,	// (0x000483d5) field_vitu2_entry_pane_t1

0xb6c3,	// (0x0005351d) field_vitu2_entry_pane_t2_ParamLimits

0xb6c3,	// (0x0005351d) field_vitu2_entry_pane_t2

0x0001,

0xf869,	// (0x000576c3) field_vitu2_entry_pane_t_ParamLimits

0xf869,	// (0x000576c3) field_vitu2_entry_pane_t

0x6f1c,	// (0x0004ed76) bg_button_pane_cp010_ParamLimits

0x6f1c,	// (0x0004ed76) bg_button_pane_cp010

0x6f2a,	// (0x0004ed84) cell_vitu2_itu_pane_g1

0x6f50,	// (0x0004edaa) cell_vitu2_itu_pane_t1_ParamLimits

0x6f50,	// (0x0004edaa) cell_vitu2_itu_pane_t1

0x05ab,	// (0x00048405) cell_vitu2_itu_pane_t2_ParamLimits

0x05ab,	// (0x00048405) cell_vitu2_itu_pane_t2

0x0002,

0xf873,	// (0x000576cd) cell_vitu2_itu_pane_t_ParamLimits

0xf873,	// (0x000576cd) cell_vitu2_itu_pane_t

0xdf90,	// (0x00055dea) bg_button_pane_cp011

0x6fae,	// (0x0004ee08) cell_vitu2_function_pane_g1

0xd53f,	// (0x00055399) main_myfav_hc_pane

0x691c,	// (0x0004e776) popup_image3_note_pane_ParamLimits

0x691c,	// (0x0004e776) popup_image3_note_pane

0x6938,	// (0x0004e792) popup_image3_tool_bar_pane_ParamLimits

0x6938,	// (0x0004e792) popup_image3_tool_bar_pane

0x0639,	// (0x00048493) cell_vitu2_itu_pane_t3_ParamLimits

0x0639,	// (0x00048493) cell_vitu2_itu_pane_t3

0xd53f,	// (0x00055399) bg_popup_trans_pane

0xb6e8,	// (0x00053542) grid_image3_tool_bar_pane

0xb6f2,	// (0x0005354c) bg_popup_trans_pane_g1

0xe676,	// (0x000564d0) bg_popup_trans_pane_g2

0xb6fa,	// (0x00053554) bg_popup_trans_pane_g3

0xb702,	// (0x0005355c) bg_popup_trans_pane_g4

0xb70a,	// (0x00053564) bg_popup_trans_pane_g5

0xb712,	// (0x0005356c) bg_popup_trans_pane_g6

0xb71a,	// (0x00053574) bg_popup_trans_pane_g7

0xb722,	// (0x0005357c) bg_popup_trans_pane_g8

0xe656,	// (0x000564b0) bg_popup_trans_pane_g9

0x0008,

0xf87a,	// (0x000576d4) bg_popup_trans_pane_g

0xb72a,	// (0x00053584) cell_image3_tool_bar_pane_ParamLimits

0xb72a,	// (0x00053584) cell_image3_tool_bar_pane

0xe465,	// (0x000562bf) cell_image3_tool_bar_pane_g1

0xd53f,	// (0x00055399) bg_popup_trans_pane_cp1

0xb73e,	// (0x00053598) popup_image3_note_pane_t1

0xb74c,	// (0x000535a6) popup_image3_note_pane_t2

0xb75a,	// (0x000535b4) popup_image3_note_pane_t3

0x0002,

0xf88d,	// (0x000576e7) popup_image3_note_pane_t

0xb768,	// (0x000535c2) popup_image3_note_pane_t3_copy1

0x6fc2,	// (0x0004ee1c) bg_myfav_hc_instruction_pane_ParamLimits

0x6fc2,	// (0x0004ee1c) bg_myfav_hc_instruction_pane

0x6fd6,	// (0x0004ee30) cell_myfav_contact_pane_ParamLimits

0x6fd6,	// (0x0004ee30) cell_myfav_contact_pane

0x6ff4,	// (0x0004ee4e) cell_myfav_contact_pane_cp1_ParamLimits

0x6ff4,	// (0x0004ee4e) cell_myfav_contact_pane_cp1

0x700c,	// (0x0004ee66) cell_myfav_contact_pane_cp2_ParamLimits

0x700c,	// (0x0004ee66) cell_myfav_contact_pane_cp2

0x7024,	// (0x0004ee7e) cell_myfav_contact_pane_cp3_ParamLimits

0x7024,	// (0x0004ee7e) cell_myfav_contact_pane_cp3

0x703b,	// (0x0004ee95) cell_myfav_contact_pane_cp4_ParamLimits

0x703b,	// (0x0004ee95) cell_myfav_contact_pane_cp4

0x7053,	// (0x0004eead) cell_myfav_contact_pane_cp5_ParamLimits

0x7053,	// (0x0004eead) cell_myfav_contact_pane_cp5

0x7067,	// (0x0004eec1) cell_myfav_contact_pane_cp6_ParamLimits

0x7067,	// (0x0004eec1) cell_myfav_contact_pane_cp6

0x707d,	// (0x0004eed7) cell_myfav_contact_pane_cp7_ParamLimits

0x707d,	// (0x0004eed7) cell_myfav_contact_pane_cp7

0xb776,	// (0x000535d0) listscroll_gen_pane_cp05

0x7097,	// (0x0004eef1) main_myfav_hc_pane_g1_ParamLimits

0x7097,	// (0x0004eef1) main_myfav_hc_pane_g1

0x70b1,	// (0x0004ef0b) main_myfav_hc_pane_g2_ParamLimits

0x70b1,	// (0x0004ef0b) main_myfav_hc_pane_g2

0x0002,

0xf894,	// (0x000576ee) main_myfav_hc_pane_g_ParamLimits

0xf894,	// (0x000576ee) main_myfav_hc_pane_g

0x70e3,	// (0x0004ef3d) main_myfav_hc_pane_t1_ParamLimits

0x70e3,	// (0x0004ef3d) main_myfav_hc_pane_t1

0xb77f,	// (0x000535d9) main_myfav_hc_pane_t2_ParamLimits

0xb77f,	// (0x000535d9) main_myfav_hc_pane_t2

0xb791,	// (0x000535eb) main_myfav_hc_pane_t3_ParamLimits

0xb791,	// (0x000535eb) main_myfav_hc_pane_t3

0x70fa,	// (0x0004ef54) main_myfav_hc_pane_t4_ParamLimits

0x70fa,	// (0x0004ef54) main_myfav_hc_pane_t4

0x0004,

0xf89b,	// (0x000576f5) main_myfav_hc_pane_t_ParamLimits

0xf89b,	// (0x000576f5) main_myfav_hc_pane_t

0xe465,	// (0x000562bf) bg_myfav_hc_instruction_pane_g1

0xb7a3,	// (0x000535fd) cell_myfav_contact_pane_g1_ParamLimits

0xb7a3,	// (0x000535fd) cell_myfav_contact_pane_g1

0xb7a3,	// (0x000535fd) cell_myfav_contact_pane_g2_ParamLimits

0xb7a3,	// (0x000535fd) cell_myfav_contact_pane_g2

0xb7af,	// (0x00053609) cell_myfav_contact_pane_g3_ParamLimits

0xb7af,	// (0x00053609) cell_myfav_contact_pane_g3

0xe1f2,	// (0x0005604c) cell_myfav_contact_pane_g4_ParamLimits

0xe1f2,	// (0x0005604c) cell_myfav_contact_pane_g4

0xb7bc,	// (0x00053616) cell_myfav_contact_pane_g5_ParamLimits

0xb7bc,	// (0x00053616) cell_myfav_contact_pane_g5

0x0004,

0xf8a6,	// (0x00057700) cell_myfav_contact_pane_g_ParamLimits

0xf8a6,	// (0x00057700) cell_myfav_contact_pane_g

0x70cb,	// (0x0004ef25) main_myfav_hc_pane_g3_ParamLimits

0x70cb,	// (0x0004ef25) main_myfav_hc_pane_g3

0x042b,	// (0x00048285) popup_adpt_find_window

0x7122,	// (0x0004ef7c) afind_page_pane_ParamLimits

0x7122,	// (0x0004ef7c) afind_page_pane

0x7137,	// (0x0004ef91) aid_size_cell_afind_ParamLimits

0x7137,	// (0x0004ef91) aid_size_cell_afind

0x7155,	// (0x0004efaf) bg_popup_sub_pane_cp09_ParamLimits

0x7155,	// (0x0004efaf) bg_popup_sub_pane_cp09

0x7162,	// (0x0004efbc) find_pane_cp01_ParamLimits

0x7162,	// (0x0004efbc) find_pane_cp01

0xb7c8,	// (0x00053622) grid_afind_control_pane_ParamLimits

0xb7c8,	// (0x00053622) grid_afind_control_pane

0x716f,	// (0x0004efc9) grid_afind_pane_ParamLimits

0x716f,	// (0x0004efc9) grid_afind_pane

0x7191,	// (0x0004efeb) cell_afind_pane_ParamLimits

0x7191,	// (0x0004efeb) cell_afind_pane

0xe465,	// (0x000562bf) afind_page_pane_g1

0x71f8,	// (0x0004f052) afind_page_pane_g2

0x7200,	// (0x0004f05a) afind_page_pane_g3

0x0002,

0xf8b1,	// (0x0005770b) afind_page_pane_g

0x7208,	// (0x0004f062) afind_page_pane_t1

0xb7ee,	// (0x00053648) cell_afind_grid_control_pane_ParamLimits

0xb7ee,	// (0x00053648) cell_afind_grid_control_pane

0xb4f3,	// (0x0005334d) bg_button_pane_cp69_ParamLimits

0xb4f3,	// (0x0005334d) bg_button_pane_cp69

0x7216,	// (0x0004f070) cell_afind_pane_g1_ParamLimits

0x7216,	// (0x0004f070) cell_afind_pane_g1

0x7223,	// (0x0004f07d) cell_afind_pane_t1_ParamLimits

0x7223,	// (0x0004f07d) cell_afind_pane_t1

0xe46f,	// (0x000562c9) bg_button_pane_cp72

0xb7fd,	// (0x00053657) cell_afind_grid_control_pane_g1

0x36e5,	// (0x0004b53f) aid_image_placing_area_ParamLimits

0x36e5,	// (0x0004b53f) aid_image_placing_area

0xe1e4,	// (0x0005603e) field_vitu_entry_pane_g1_ParamLimits

0xe1e4,	// (0x0005603e) field_vitu_entry_pane_g1

0xe1e4,	// (0x0005603e) field_vitu_entry_pane_g2_ParamLimits

0xe1e4,	// (0x0005603e) field_vitu_entry_pane_g2

0x0001,

0xf1c1,	// (0x0005701b) field_vitu_entry_pane_g_ParamLimits

0xf1c1,	// (0x0005701b) field_vitu_entry_pane_g

0xb00c,	// (0x00052e66) cell_vitu_itu_pane_g1_ParamLimits

0xafef,	// (0x00052e49) cell_vitu_itu_pane_t3_ParamLimits

0xafef,	// (0x00052e49) cell_vitu_itu_pane_t3

0xb49c,	// (0x000532f6) mp4_progress_pane_t1_ParamLimits

0xb4b5,	// (0x0005330f) mp4_progress_pane_t2_ParamLimits

0xf7f7,	// (0x00057651) mp4_progress_pane_t_ParamLimits

0xb4ce,	// (0x00053328) mup_progress_pane_cp04_ParamLimits

0x710e,	// (0x0004ef68) main_myfav_hc_pane_t5_ParamLimits

0x710e,	// (0x0004ef68) main_myfav_hc_pane_t5

0xa978,	// (0x000527d2) aid_zoom_text_primary

0x042b,	// (0x00048285) popup_adpt_find_window_ParamLimits

0xdf90,	// (0x00055dea) main_cam_set_pane

0x6b74,	// (0x0004e9ce) cam4_zoom_pane_ParamLimits

0x6b74,	// (0x0004e9ce) cam4_zoom_pane

0x7235,	// (0x0004f08f) main_cam_set_pane_g1_ParamLimits

0x7235,	// (0x0004f08f) main_cam_set_pane_g1

0x7243,	// (0x0004f09d) main_cam_set_pane_g2_ParamLimits

0x7243,	// (0x0004f09d) main_cam_set_pane_g2

0x0001,

0xf8b8,	// (0x00057712) main_cam_set_pane_g_ParamLimits

0xf8b8,	// (0x00057712) main_cam_set_pane_g

0x7264,	// (0x0004f0be) main_cam_set_pane_t1_ParamLimits

0x7264,	// (0x0004f0be) main_cam_set_pane_t1

0x727f,	// (0x0004f0d9) main_cset_listscroll_pane_ParamLimits

0x727f,	// (0x0004f0d9) main_cset_listscroll_pane

0x72a5,	// (0x0004f0ff) main_cset_slider_pane_ParamLimits

0x72a5,	// (0x0004f0ff) main_cset_slider_pane

0xb80e,	// (0x00053668) main_cset_list_pane_ParamLimits

0xb80e,	// (0x00053668) main_cset_list_pane

0xb81e,	// (0x00053678) scroll_pane_cp028

0x72cb,	// (0x0004f125) aid_area_touch_slider

0x72e7,	// (0x0004f141) cset_slider_pane

0x730a,	// (0x0004f164) main_cset_slider_pane_g1

0x731f,	// (0x0004f179) main_cset_slider_pane_g2

0x0011,

0xf8bd,	// (0x00057717) main_cset_slider_pane_g

0xb857,	// (0x000536b1) main_cset_slider_pane_t1

0x73db,	// (0x0004f235) main_cset_slider_pane_t2

0x73f5,	// (0x0004f24f) main_cset_slider_pane_t3

0x740f,	// (0x0004f269) main_cset_slider_pane_t4

0x7429,	// (0x0004f283) main_cset_slider_pane_t5

0x7443,	// (0x0004f29d) main_cset_slider_pane_t6

0x7458,	// (0x0004f2b2) main_cset_slider_pane_t7

0x000e,

0xf8e2,	// (0x0005773c) main_cset_slider_pane_t

0x755c,	// (0x0004f3b6) cset_list_set_pane_ParamLimits

0x755c,	// (0x0004f3b6) cset_list_set_pane

0xb8f1,	// (0x0005374b) aid_position_infowindow_above

0xb8f9,	// (0x00053753) aid_position_infowindow_below

0xb901,	// (0x0005375b) cset_list_set_pane_g1_ParamLimits

0xb901,	// (0x0005375b) cset_list_set_pane_g1

0xb90d,	// (0x00053767) cset_list_set_pane_g3_ParamLimits

0xb90d,	// (0x00053767) cset_list_set_pane_g3

0x0001,

0xf901,	// (0x0005775b) cset_list_set_pane_g_ParamLimits

0xf901,	// (0x0005775b) cset_list_set_pane_g

0xb91c,	// (0x00053776) cset_list_set_pane_t1_ParamLimits

0xb91c,	// (0x00053776) cset_list_set_pane_t1

0xdf90,	// (0x00055dea) list_highlight_pane_cp021_ParamLimits

0xdf90,	// (0x00055dea) list_highlight_pane_cp021

0xefec,	// (0x00056e46) cset_slider_pane_g1

0xeffe,	// (0x00056e58) cset_slider_pane_g2

0xeff5,	// (0x00056e4f) cset_slider_pane_g3

0x0002,

0xf906,	// (0x00057760) cset_slider_pane_g

0xb931,	// (0x0005378b) aid_area_touch_cam4_zoom

0xb939,	// (0x00053793) cam4_zoom_cont_pane

0xb941,	// (0x0005379b) cam4_zoom_pane_g1

0xb949,	// (0x000537a3) cam4_zoom_pane_g2

0x756e,	// (0x0004f3c8) cam4_zoom_pane_g3

0x0002,

0xf90d,	// (0x00057767) cam4_zoom_pane_g

0xb951,	// (0x000537ab) cam4_zoom_cont_pane_g1

0xb95a,	// (0x000537b4) cam4_zoom_cont_pane_g2

0xb963,	// (0x000537bd) cam4_zoom_cont_pane_g3

0x0002,

0xf914,	// (0x0005776e) cam4_zoom_cont_pane_g

0x69a5,	// (0x0004e7ff) call4_image_pane_ParamLimits

0x69a5,	// (0x0004e7ff) call4_image_pane

0x6a0c,	// (0x0004e866) call4_windows_conf_pane_ParamLimits

0x6a51,	// (0x0004e8ab) popup_call4_audio_in_window_ParamLimits

0x6a51,	// (0x0004e8ab) popup_call4_audio_in_window

0xd53f,	// (0x00055399) bg_popup_call2_act_pane_cp02

0xb563,	// (0x000533bd) call4_list_conf_pane

0xe465,	// (0x000562bf) call4_image_pane_g1

0xe465,	// (0x000562bf) call4_image_pane_g2

0x0001,

0xf398,	// (0x000571f2) call4_image_pane_g

0xb96c,	// (0x000537c6) list_single_graphic_popup_conf4_pane_ParamLimits

0xb96c,	// (0x000537c6) list_single_graphic_popup_conf4_pane

0xd53f,	// (0x00055399) list_highlight_pane_cp022

0xb97f,	// (0x000537d9) list_single_graphic_popup_conf4_pane_g1

0xeb9c,	// (0x000569f6) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf91b,	// (0x00057775) list_single_graphic_popup_conf4_pane_g

0xb987,	// (0x000537e1) list_single_graphic_popup_conf4_pane_t1

0x1c2e,	// (0x00049a88) popup_vtel_slider_window_ParamLimits

0x1c2e,	// (0x00049a88) popup_vtel_slider_window

0xb4e1,	// (0x0005333b) dialer2_ne_pane_t2_ParamLimits

0xb4e1,	// (0x0005333b) dialer2_ne_pane_t2

0x0001,

0xf7fc,	// (0x00057656) dialer2_ne_pane_t_ParamLimits

0xf7fc,	// (0x00057656) dialer2_ne_pane_t

0x50c0,	// (0x0004cf1a) bg_popup_sub_pane_cp010_ParamLimits

0x50c0,	// (0x0004cf1a) bg_popup_sub_pane_cp010

0x7576,	// (0x0004f3d0) popup_vtel_slider_window_g1_ParamLimits

0x7576,	// (0x0004f3d0) popup_vtel_slider_window_g1

0x7589,	// (0x0004f3e3) popup_vtel_slider_window_g2_ParamLimits

0x7589,	// (0x0004f3e3) popup_vtel_slider_window_g2

0x0003,

0xf920,	// (0x0005777a) popup_vtel_slider_window_g_ParamLimits

0xf920,	// (0x0005777a) popup_vtel_slider_window_g

0x75df,	// (0x0004f439) vtel_slider_pane_ParamLimits

0x75df,	// (0x0004f439) vtel_slider_pane

0x7601,	// (0x0004f45b) vtel_slider_pane_g1_ParamLimits

0x7601,	// (0x0004f45b) vtel_slider_pane_g1

0x7615,	// (0x0004f46f) vtel_slider_pane_g2_ParamLimits

0x7615,	// (0x0004f46f) vtel_slider_pane_g2

0x762d,	// (0x0004f487) vtel_slider_pane_g3_ParamLimits

0x762d,	// (0x0004f487) vtel_slider_pane_g3

0x7601,	// (0x0004f45b) vtel_slider_pane_g4_ParamLimits

0x7601,	// (0x0004f45b) vtel_slider_pane_g4

0x7643,	// (0x0004f49d) vtel_slider_pane_g5_ParamLimits

0x7643,	// (0x0004f49d) vtel_slider_pane_g5

0x0004,

0xf929,	// (0x00057783) vtel_slider_pane_g_ParamLimits

0xf929,	// (0x00057783) vtel_slider_pane_g

0xdf90,	// (0x00055dea) main_gallery2_pane

0x6d74,	// (0x0004ebce) aid_size_row_itut2_dropdow_list_ParamLimits

0x6d74,	// (0x0004ebce) aid_size_row_itut2_dropdow_list

0x6df2,	// (0x0004ec4c) grid_vitu2_function_top_pane_ParamLimits

0x6df2,	// (0x0004ec4c) grid_vitu2_function_top_pane

0x6e5c,	// (0x0004ecb6) popup_vitu2_dropdown_list_window_ParamLimits

0x6e5c,	// (0x0004ecb6) popup_vitu2_dropdown_list_window

0x6e83,	// (0x0004ecdd) popup_vitu2_match_list_window

0x7659,	// (0x0004f4b3) cell_vitu2_function_top_pane_ParamLimits

0x7659,	// (0x0004f4b3) cell_vitu2_function_top_pane

0x7671,	// (0x0004f4cb) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7671,	// (0x0004f4cb) cell_vitu2_function_top_pane_cp01

0x768d,	// (0x0004f4e7) cell_vitu2_function_top_wide_pane_ParamLimits

0x768d,	// (0x0004f4e7) cell_vitu2_function_top_wide_pane

0xdf90,	// (0x00055dea) bg_button_pane_cp012

0x76ab,	// (0x0004f505) cell_vitu2_function_top_pane_g1

0xb99d,	// (0x000537f7) bg_button_pane_cp013_ParamLimits

0xb99d,	// (0x000537f7) bg_button_pane_cp013

0x76bf,	// (0x0004f519) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x76bf,	// (0x0004f519) cell_vitu2_function_top_wide_pane_g1

0xdf90,	// (0x00055dea) bg_popup_sub_pane_cp20

0x76d7,	// (0x0004f531) list_vitu2_match_list_pane

0xb6f2,	// (0x0005354c) bg_popup_sub_pane_cp20_g1

0xb6fa,	// (0x00053554) bg_popup_sub_pane_cp20_g2

0xe676,	// (0x000564d0) bg_popup_sub_pane_cp20_g3

0xb702,	// (0x0005355c) bg_popup_sub_pane_cp20_g4

0xe656,	// (0x000564b0) bg_popup_sub_pane_cp20_g5

0xb9b9,	// (0x00053813) bg_popup_sub_pane_cp20_g6

0xb712,	// (0x0005356c) bg_popup_sub_pane_cp20_g7

0xb71a,	// (0x00053574) bg_popup_sub_pane_cp20_g8

0xb722,	// (0x0005357c) bg_popup_sub_pane_cp20_g9

0x0008,

0xf934,	// (0x0005778e) bg_popup_sub_pane_cp20_g

0xb9c1,	// (0x0005381b) list_vitu2_match_list_item_pane_ParamLimits

0xb9c1,	// (0x0005381b) list_vitu2_match_list_item_pane

0xb9d3,	// (0x0005382d) list_vitu2_match_list_item_pane_t1

0xd53f,	// (0x00055399) bg_popup_sub_pane_cp21

0xe42f,	// (0x00056289) grid_vitu2_dropdown_list_pane

0x76ef,	// (0x0004f549) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x76ef,	// (0x0004f549) cell_vitu2_dropdown_list_char_pane

0x770f,	// (0x0004f569) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x770f,	// (0x0004f569) cell_vitu2_dropdown_list_ctrl_pane

0xb9e1,	// (0x0005383b) cell_vitu2_dropdown_list_char_pane_g1

0xb9ea,	// (0x00053844) cell_vitu2_dropdown_list_char_pane_g2

0xb9f3,	// (0x0005384d) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf947,	// (0x000577a1) cell_vitu2_dropdown_list_char_pane_g

0x7737,	// (0x0004f591) cell_vitu2_dropdown_list_char_pane_t1

0x7745,	// (0x0004f59f) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7745,	// (0x0004f59f) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7752,	// (0x0004f5ac) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7752,	// (0x0004f5ac) cell_vitu2_dropdown_list_ctrl_pane_g2

0x775f,	// (0x0004f5b9) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x775f,	// (0x0004f5b9) cell_vitu2_dropdown_list_ctrl_pane_g3

0x776c,	// (0x0004f5c6) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x776c,	// (0x0004f5c6) cell_vitu2_dropdown_list_ctrl_pane_g4

0xe1e4,	// (0x0005603e) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xe1e4,	// (0x0005603e) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf94e,	// (0x000577a8) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf94e,	// (0x000577a8) cell_vitu2_dropdown_list_ctrl_pane_g

0x7788,	// (0x0004f5e2) aid_size_cell_gallery2_ParamLimits

0x7788,	// (0x0004f5e2) aid_size_cell_gallery2

0x77a6,	// (0x0004f600) grid_gallery2_pane_ParamLimits

0x77a6,	// (0x0004f600) grid_gallery2_pane

0x77c0,	// (0x0004f61a) scroll_pane_cp029_ParamLimits

0x77c0,	// (0x0004f61a) scroll_pane_cp029

0x77d1,	// (0x0004f62b) cell_gallery2_pane_ParamLimits

0x77d1,	// (0x0004f62b) cell_gallery2_pane

0xb9fc,	// (0x00053856) cell_gallery2_pane_g2

0x7830,	// (0x0004f68a) cell_gallery2_pane_g3

0xba04,	// (0x0005385e) cell_gallery2_pane_g4

0xba0c,	// (0x00053866) cell_gallery2_pane_g5

0xe42f,	// (0x00056289) grid_highlight_pane_cp10

0x6e83,	// (0x0004ecdd) popup_vitu2_match_list_window_ParamLimits

0x6e98,	// (0x0004ecf2) popup_vitu2_query_window_ParamLimits

0x6e98,	// (0x0004ecf2) popup_vitu2_query_window

0xd53f,	// (0x00055399) bg_vitu2_candi_button_pane

0xb9e1,	// (0x0005383b) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xb9ea,	// (0x00053844) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xb9f3,	// (0x0005384d) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0697,	// (0x000484f1) bg_button_pane_cp015

0x7838,	// (0x0004f692) bg_button_pane_cp016

0x7844,	// (0x0004f69e) bg_button_pane_cp017

0xef7c,	// (0x00056dd6) bg_popup_sub_pane_cp22

0xba14,	// (0x0005386e) popup_vitu2_query_window_g1

0x06cb,	// (0x00048525) popup_vitu2_query_window_g2

0x0002,

0xf959,	// (0x000577b3) popup_vitu2_query_window_g

0x06e1,	// (0x0004853b) popup_vitu2_query_window_t1_ParamLimits

0x06e1,	// (0x0004853b) popup_vitu2_query_window_t1

0x0714,	// (0x0004856e) popup_vitu2_query_window_t2_ParamLimits

0x0714,	// (0x0004856e) popup_vitu2_query_window_t2

0x0726,	// (0x00048580) popup_vitu2_query_window_t3_ParamLimits

0x0726,	// (0x00048580) popup_vitu2_query_window_t3

0x786b,	// (0x0004f6c5) popup_vitu2_query_window_t4_ParamLimits

0x786b,	// (0x0004f6c5) popup_vitu2_query_window_t4

0x787f,	// (0x0004f6d9) popup_vitu2_query_window_t5_ParamLimits

0x787f,	// (0x0004f6d9) popup_vitu2_query_window_t5

0x0006,

0xf960,	// (0x000577ba) popup_vitu2_query_window_t_ParamLimits

0xf960,	// (0x000577ba) popup_vitu2_query_window_t

0xb806,	// (0x00053660) main_cset_text_pane

0x72cb,	// (0x0004f125) aid_area_touch_slider_ParamLimits

0x72e7,	// (0x0004f141) cset_slider_pane_ParamLimits

0x730a,	// (0x0004f164) main_cset_slider_pane_g1_ParamLimits

0x731f,	// (0x0004f179) main_cset_slider_pane_g2_ParamLimits

0xb827,	// (0x00053681) main_cset_slider_pane_g3_ParamLimits

0xb827,	// (0x00053681) main_cset_slider_pane_g3

0x7334,	// (0x0004f18e) main_cset_slider_pane_g4_ParamLimits

0x7334,	// (0x0004f18e) main_cset_slider_pane_g4

0x7343,	// (0x0004f19d) main_cset_slider_pane_g5_ParamLimits

0x7343,	// (0x0004f19d) main_cset_slider_pane_g5

0x734f,	// (0x0004f1a9) main_cset_slider_pane_g6_ParamLimits

0x734f,	// (0x0004f1a9) main_cset_slider_pane_g6

0xf8bd,	// (0x00057717) main_cset_slider_pane_g_ParamLimits

0xb857,	// (0x000536b1) main_cset_slider_pane_t1_ParamLimits

0x73db,	// (0x0004f235) main_cset_slider_pane_t2_ParamLimits

0x73f5,	// (0x0004f24f) main_cset_slider_pane_t3_ParamLimits

0x740f,	// (0x0004f269) main_cset_slider_pane_t4_ParamLimits

0x7429,	// (0x0004f283) main_cset_slider_pane_t5_ParamLimits

0x7443,	// (0x0004f29d) main_cset_slider_pane_t6_ParamLimits

0x7458,	// (0x0004f2b2) main_cset_slider_pane_t7_ParamLimits

0x7482,	// (0x0004f2dc) main_cset_slider_pane_t8_ParamLimits

0x7482,	// (0x0004f2dc) main_cset_slider_pane_t8

0x74aa,	// (0x0004f304) main_cset_slider_pane_t9_ParamLimits

0x74aa,	// (0x0004f304) main_cset_slider_pane_t9

0x74d2,	// (0x0004f32c) main_cset_slider_pane_t10_ParamLimits

0x74d2,	// (0x0004f32c) main_cset_slider_pane_t10

0x74fa,	// (0x0004f354) main_cset_slider_pane_t11_ParamLimits

0x74fa,	// (0x0004f354) main_cset_slider_pane_t11

0x7522,	// (0x0004f37c) main_cset_slider_pane_t12_ParamLimits

0x7522,	// (0x0004f37c) main_cset_slider_pane_t12

0x753f,	// (0x0004f399) main_cset_slider_pane_t13_ParamLimits

0x753f,	// (0x0004f399) main_cset_slider_pane_t13

0xf8e2,	// (0x0005773c) main_cset_slider_pane_t_ParamLimits

0xd53f,	// (0x00055399) bg_popup_sub_pane_cp011

0xba20,	// (0x0005387a) main_cset_text_pane_g1

0xba28,	// (0x00053882) main_cset_text_pane_t1

0xba36,	// (0x00053890) main_cset_text_pane_t2

0xba44,	// (0x0005389e) main_cset_text_pane_t3

0xba52,	// (0x000538ac) main_cset_text_pane_t4

0xba60,	// (0x000538ba) main_cset_text_pane_t5

0xba6e,	// (0x000538c8) main_cset_text_pane_t6

0xba7c,	// (0x000538d6) main_cset_text_pane_t7

0x0006,

0xf96f,	// (0x000577c9) main_cset_text_pane_t

0xd53f,	// (0x00055399) main_cam4_burst_pane

0xd53f,	// (0x00055399) main_cam5_pane

0xb7dc,	// (0x00053636) bg_button_pane_cp019

0xb7e5,	// (0x0005363f) bg_button_pane_cp020

0xb833,	// (0x0005368d) main_cset_slider_pane_g7_ParamLimits

0xb833,	// (0x0005368d) main_cset_slider_pane_g7

0xb83f,	// (0x00053699) main_cset_slider_pane_g8_ParamLimits

0xb83f,	// (0x00053699) main_cset_slider_pane_g8

0x7363,	// (0x0004f1bd) main_cset_slider_pane_g9_ParamLimits

0x7363,	// (0x0004f1bd) main_cset_slider_pane_g9

0x736f,	// (0x0004f1c9) main_cset_slider_pane_g10_ParamLimits

0x736f,	// (0x0004f1c9) main_cset_slider_pane_g10

0x737b,	// (0x0004f1d5) main_cset_slider_pane_g11_ParamLimits

0x737b,	// (0x0004f1d5) main_cset_slider_pane_g11

0x7387,	// (0x0004f1e1) main_cset_slider_pane_g12_ParamLimits

0x7387,	// (0x0004f1e1) main_cset_slider_pane_g12

0x7393,	// (0x0004f1ed) main_cset_slider_pane_g13_ParamLimits

0x7393,	// (0x0004f1ed) main_cset_slider_pane_g13

0x739f,	// (0x0004f1f9) main_cset_slider_pane_g14_ParamLimits

0x739f,	// (0x0004f1f9) main_cset_slider_pane_g14

0x73ab,	// (0x0004f205) main_cset_slider_pane_g15_ParamLimits

0x73ab,	// (0x0004f205) main_cset_slider_pane_g15

0xb87f,	// (0x000536d9) main_cset_slider_pane_t14_ParamLimits

0xb87f,	// (0x000536d9) main_cset_slider_pane_t14

0xb8b8,	// (0x00053712) main_cset_slider_pane_t15_ParamLimits

0xb8b8,	// (0x00053712) main_cset_slider_pane_t15

0x7893,	// (0x0004f6ed) aid_cam4_burst_size_cell_ParamLimits

0x7893,	// (0x0004f6ed) aid_cam4_burst_size_cell

0x78b3,	// (0x0004f70d) grid_cam4_burst_pane_ParamLimits

0x78b3,	// (0x0004f70d) grid_cam4_burst_pane

0x78eb,	// (0x0004f745) linegrid_cam4_burst_pane_ParamLimits

0x78eb,	// (0x0004f745) linegrid_cam4_burst_pane

0xba8a,	// (0x000538e4) scroll_pane_cp30_ParamLimits

0xba8a,	// (0x000538e4) scroll_pane_cp30

0x790f,	// (0x0004f769) cell_cam4_burst_pane_ParamLimits

0x790f,	// (0x0004f769) cell_cam4_burst_pane

0xba96,	// (0x000538f0) linegrid_cam4_burst_pane_g1_ParamLimits

0xba96,	// (0x000538f0) linegrid_cam4_burst_pane_g1

0x795c,	// (0x0004f7b6) linegrid_cam4_burst_pane_g2_ParamLimits

0x795c,	// (0x0004f7b6) linegrid_cam4_burst_pane_g2

0xbaa3,	// (0x000538fd) linegrid_cam4_burst_pane_g3_ParamLimits

0xbaa3,	// (0x000538fd) linegrid_cam4_burst_pane_g3

0x0002,

0xf97e,	// (0x000577d8) linegrid_cam4_burst_pane_g_ParamLimits

0xf97e,	// (0x000577d8) linegrid_cam4_burst_pane_g

0x796d,	// (0x0004f7c7) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x796d,	// (0x0004f7c7) linegrid_cam4_burst_pane_g3_copy1

0xbab0,	// (0x0005390a) linegrid_cam4_burst_pane_g4_ParamLimits

0xbab0,	// (0x0005390a) linegrid_cam4_burst_pane_g4

0x7987,	// (0x0004f7e1) linegrid_cam4_burst_pane_g5_ParamLimits

0x7987,	// (0x0004f7e1) linegrid_cam4_burst_pane_g5

0x7998,	// (0x0004f7f2) linegrid_cam4_burst_pane_g6_ParamLimits

0x7998,	// (0x0004f7f2) linegrid_cam4_burst_pane_g6

0xbabd,	// (0x00053917) linegrid_cam4_burst_pane_g7_ParamLimits

0xbabd,	// (0x00053917) linegrid_cam4_burst_pane_g7

0x79af,	// (0x0004f809) cell_cam4_burst_pane_g1

0xbad6,	// (0x00053930) main_cam5_pane_t1_ParamLimits

0xbad6,	// (0x00053930) main_cam5_pane_t1

0xbae8,	// (0x00053942) main_cam5_pane_t2_ParamLimits

0xbae8,	// (0x00053942) main_cam5_pane_t2

0xbafa,	// (0x00053954) main_cam5_pane_t3_ParamLimits

0xbafa,	// (0x00053954) main_cam5_pane_t3

0xbb0c,	// (0x00053966) main_cam5_pane_t4_ParamLimits

0xbb0c,	// (0x00053966) main_cam5_pane_t4

0xbb24,	// (0x0005397e) main_cam5_pane_t5_ParamLimits

0xbb24,	// (0x0005397e) main_cam5_pane_t5

0xbb38,	// (0x00053992) main_cam5_pane_t6_ParamLimits

0xbb38,	// (0x00053992) main_cam5_pane_t6

0xbb4c,	// (0x000539a6) main_cam5_pane_t7_ParamLimits

0xbb4c,	// (0x000539a6) main_cam5_pane_t7

0xbb5e,	// (0x000539b8) main_cam5_pane_t8_ParamLimits

0xbb5e,	// (0x000539b8) main_cam5_pane_t8

0xbb7a,	// (0x000539d4) main_cam5_pane_t9_ParamLimits

0xbb7a,	// (0x000539d4) main_cam5_pane_t9

0xbb8c,	// (0x000539e6) main_cam5_pane_t10_ParamLimits

0xbb8c,	// (0x000539e6) main_cam5_pane_t10

0xbb9e,	// (0x000539f8) main_cam5_pane_t11_ParamLimits

0xbb9e,	// (0x000539f8) main_cam5_pane_t11

0xbbb0,	// (0x00053a0a) main_cam5_pane_t12_ParamLimits

0xbbb0,	// (0x00053a0a) main_cam5_pane_t12

0xbbc5,	// (0x00053a1f) main_cam5_pane_t13_ParamLimits

0xbbc5,	// (0x00053a1f) main_cam5_pane_t13

0x000c,

0xf98a,	// (0x000577e4) main_cam5_pane_t_ParamLimits

0xf98a,	// (0x000577e4) main_cam5_pane_t

0x0f4c,	// (0x00048da6) popup_scut_keymap_window_ParamLimits

0x0f4c,	// (0x00048da6) popup_scut_keymap_window

0x79c2,	// (0x0004f81c) aid_size_cell_brow_shortcut

0xe42f,	// (0x00056289) bg_popup_window_pane_cp010

0x79ce,	// (0x0004f828) grid_scut_pane

0x79da,	// (0x0004f834) cell_scut_pane_ParamLimits

0x79da,	// (0x0004f834) cell_scut_pane

0x79f1,	// (0x0004f84b) cell_scut_pane_g1

0xbbe2,	// (0x00053a3c) cell_scut_pane_t1

0xbbf1,	// (0x00053a4b) cell_scut_pane_t2

0x79fa,	// (0x0004f854) cell_scut_pane_t3

0x0002,

0xf9a5,	// (0x000577ff) cell_scut_pane_t

0x5ac6,	// (0x0004d920) main_mup3_pane_g8_ParamLimits

0x5ac6,	// (0x0004d920) main_mup3_pane_g8

0x6d8c,	// (0x0004ebe6) area_vitu2_query_pane_ParamLimits

0x6d8c,	// (0x0004ebe6) area_vitu2_query_pane

0x06a8,	// (0x00048502) input_focus_pane_cp08

0xbc00,	// (0x00053a5a) area_vitu2_query_pane_g1

0x07a4,	// (0x000485fe) area_vitu2_query_pane_g2

0x0001,

0xf9ac,	// (0x00057806) area_vitu2_query_pane_g

0x7a08,	// (0x0004f862) area_vitu2_query_pane_t1_ParamLimits

0x7a08,	// (0x0004f862) area_vitu2_query_pane_t1

0x7a1c,	// (0x0004f876) area_vitu2_query_pane_t2_ParamLimits

0x7a1c,	// (0x0004f876) area_vitu2_query_pane_t2

0x07b3,	// (0x0004860d) area_vitu2_query_pane_t3_ParamLimits

0x07b3,	// (0x0004860d) area_vitu2_query_pane_t3

0xbc0c,	// (0x00053a66) area_vitu2_query_pane_t4_ParamLimits

0xbc0c,	// (0x00053a66) area_vitu2_query_pane_t4

0xbc34,	// (0x00053a8e) area_vitu2_query_pane_t5_ParamLimits

0xbc34,	// (0x00053a8e) area_vitu2_query_pane_t5

0xbc5c,	// (0x00053ab6) area_vitu2_query_pane_t6_ParamLimits

0xbc5c,	// (0x00053ab6) area_vitu2_query_pane_t6

0x0006,

0xf9b1,	// (0x0005780b) area_vitu2_query_pane_t_ParamLimits

0xf9b1,	// (0x0005780b) area_vitu2_query_pane_t

0x7a30,	// (0x0004f88a) bg_button_pane_cp018

0x7a3c,	// (0x0004f896) bg_button_pane_cp021

0x07db,	// (0x00048635) bg_button_pane_cp022

0x07fa,	// (0x00048654) input_focus_pane_cp09

0xecd8,	// (0x00056b32) aid_size_touch_mv_arrow_left

0xed01,	// (0x00056b5b) aid_size_touch_mv_arrow_right

0x73c3,	// (0x0004f21d) main_cset_slider_pane_g16_ParamLimits

0x73c3,	// (0x0004f21d) main_cset_slider_pane_g16

0x73cf,	// (0x0004f229) main_cset_slider_pane_g17_ParamLimits

0x73cf,	// (0x0004f229) main_cset_slider_pane_g17

0x79af,	// (0x0004f809) cell_cam4_burst_pane_g1_ParamLimits

0xd53f,	// (0x00055399) compa_mode_pane

0x7599,	// (0x0004f3f3) popup_vtel_slider_window_g3_ParamLimits

0x7599,	// (0x0004f3f3) popup_vtel_slider_window_g3

0x75b0,	// (0x0004f40a) popup_vtel_slider_window_g4_ParamLimits

0x75b0,	// (0x0004f40a) popup_vtel_slider_window_g4

0x75c7,	// (0x0004f421) popup_vtel_slider_window_t1_ParamLimits

0x75c7,	// (0x0004f421) popup_vtel_slider_window_t1

0xd53f,	// (0x00055399) main_cl_pane

0xaba8,	// (0x00052a02) popup_imed_adjust2_window_ParamLimits

0xef7c,	// (0x00056dd6) bg_tb_trans_pane_cp05_ParamLimits

0xaf24,	// (0x00052d7e) popup_imed_adjust2_window_g1_ParamLimits

0xaf33,	// (0x00052d8d) popup_imed_adjust2_window_g2_ParamLimits

0xaf33,	// (0x00052d8d) popup_imed_adjust2_window_g2

0xaf3f,	// (0x00052d99) popup_imed_adjust2_window_g3_ParamLimits

0xaf3f,	// (0x00052d99) popup_imed_adjust2_window_g3

0x0002,

0xf727,	// (0x00057581) popup_imed_adjust2_window_g_ParamLimits

0xf727,	// (0x00057581) popup_imed_adjust2_window_g

0xaf4b,	// (0x00052da5) popup_imed_adjust2_window_t1_ParamLimits

0xaf63,	// (0x00052dbd) slider_imed_adjust_pane_ParamLimits

0xaf77,	// (0x00052dd1) slider_imed_adjust_pane_g1_ParamLimits

0xaf87,	// (0x00052de1) slider_imed_adjust_pane_g2_ParamLimits

0xaf97,	// (0x00052df1) slider_imed_adjust_pane_g3_ParamLimits

0xafa8,	// (0x00052e02) slider_imed_adjust_pane_g4_ParamLimits

0xf72e,	// (0x00057588) slider_imed_adjust_pane_g_ParamLimits

0x6b15,	// (0x0004e96f) aid_touch_area_cam4_ParamLimits

0x6b15,	// (0x0004e96f) aid_touch_area_cam4

0xb5a7,	// (0x00053401) battery_pane_cp01

0x6be4,	// (0x0004ea3e) main_camera4_pane_g6_ParamLimits

0x6be4,	// (0x0004ea3e) main_camera4_pane_g6

0x6c0e,	// (0x0004ea68) main_camera4_pane_t2_ParamLimits

0x6c0e,	// (0x0004ea68) main_camera4_pane_t2

0x0001,

0xf830,	// (0x0005768a) main_camera4_pane_t_ParamLimits

0xf830,	// (0x0005768a) main_camera4_pane_t

0x6c43,	// (0x0004ea9d) aid_touch_area_vid4_ParamLimits

0x6c43,	// (0x0004ea9d) aid_touch_area_vid4

0x6c97,	// (0x0004eaf1) main_video4_pane_g5_ParamLimits

0x6c97,	// (0x0004eaf1) main_video4_pane_g5

0x6cbc,	// (0x0004eb16) vid4_progress_pane_ParamLimits

0x6cbc,	// (0x0004eb16) vid4_progress_pane

0xb84b,	// (0x000536a5) main_cset_slider_pane_g18_ParamLimits

0xb84b,	// (0x000536a5) main_cset_slider_pane_g18

0xbaca,	// (0x00053924) cell_cam4_burst_pane_g2_ParamLimits

0xbaca,	// (0x00053924) cell_cam4_burst_pane_g2

0x0001,

0xf985,	// (0x000577df) cell_cam4_burst_pane_g_ParamLimits

0xf985,	// (0x000577df) cell_cam4_burst_pane_g

0xe256,	// (0x000560b0) bg_cl_pane_ParamLimits

0xe256,	// (0x000560b0) bg_cl_pane

0x7a48,	// (0x0004f8a2) cl_header_pane_ParamLimits

0x7a48,	// (0x0004f8a2) cl_header_pane

0x7a5c,	// (0x0004f8b6) cl_listscroll_pane_ParamLimits

0x7a5c,	// (0x0004f8b6) cl_listscroll_pane

0xbca8,	// (0x00053b02) bg_cl_pane_g1

0xbcb0,	// (0x00053b0a) bg_cl_pane_g2

0xbcb8,	// (0x00053b12) bg_cl_pane_g3

0xbcc0,	// (0x00053b1a) bg_cl_pane_g4

0xbcc8,	// (0x00053b22) bg_cl_pane_g5

0xbcd0,	// (0x00053b2a) bg_cl_pane_g6

0xbcd8,	// (0x00053b32) bg_cl_pane_g7

0xbce0,	// (0x00053b3a) bg_cl_pane_g8

0xbce8,	// (0x00053b42) bg_cl_pane_g9

0x0008,

0xf9c0,	// (0x0005781a) bg_cl_pane_g

0x7a6c,	// (0x0004f8c6) aid_height_cl_leading_ParamLimits

0x7a6c,	// (0x0004f8c6) aid_height_cl_leading

0x7a78,	// (0x0004f8d2) aid_height_cl_text_ParamLimits

0x7a78,	// (0x0004f8d2) aid_height_cl_text

0xdf90,	// (0x00055dea) bg_cl_header_pane_ParamLimits

0xdf90,	// (0x00055dea) bg_cl_header_pane

0x7a97,	// (0x0004f8f1) cl_header_pane_g1_ParamLimits

0x7a97,	// (0x0004f8f1) cl_header_pane_g1

0x7aad,	// (0x0004f907) cl_header_pane_t1_ParamLimits

0x7aad,	// (0x0004f907) cl_header_pane_t1

0xbcf0,	// (0x00053b4a) cl_list_pane

0xb81e,	// (0x00053678) hc_scroll_pane_cp01

0xe656,	// (0x000564b0) bg_cl_header_pane_g1

0xb6f2,	// (0x0005354c) bg_cl_header_pane_g2

0xe676,	// (0x000564d0) bg_cl_header_pane_g3

0xb702,	// (0x0005355c) bg_cl_header_pane_g4

0xb6fa,	// (0x00053554) bg_cl_header_pane_g5

0xb9b9,	// (0x00053813) bg_cl_header_pane_g6

0xb71a,	// (0x00053574) bg_cl_header_pane_g7

0xb722,	// (0x0005357c) bg_cl_header_pane_g8

0xb712,	// (0x0005356c) bg_cl_header_pane_g9

0x0008,

0xf9d3,	// (0x0005782d) bg_cl_header_pane_g

0x7ac6,	// (0x0004f920) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7ac6,	// (0x0004f920) hc_cl_list_double_graphic_heading_pane

0x7ad7,	// (0x0004f931) hc_cl_list_single_graphic_pane_ParamLimits

0x7ad7,	// (0x0004f931) hc_cl_list_single_graphic_pane

0x7aed,	// (0x0004f947) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7aed,	// (0x0004f947) hc_cl_list_single_graphic_pane_g1

0x7af9,	// (0x0004f953) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7af9,	// (0x0004f953) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9e6,	// (0x00057840) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9e6,	// (0x00057840) hc_cl_list_single_graphic_pane_g

0x7b0d,	// (0x0004f967) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7b0d,	// (0x0004f967) hc_cl_list_single_graphic_pane_t1

0x7aed,	// (0x0004f947) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7aed,	// (0x0004f947) hc_cl_list_double_graphic_heading_pane_g1

0x7b22,	// (0x0004f97c) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7b22,	// (0x0004f97c) hc_cl_list_double_graphic_heading_pane_g2

0x7b36,	// (0x0004f990) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7b36,	// (0x0004f990) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9eb,	// (0x00057845) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9eb,	// (0x00057845) hc_cl_list_double_graphic_heading_pane_g

0x7b4a,	// (0x0004f9a4) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7b4a,	// (0x0004f9a4) hc_cl_list_double_graphic_heading_pane_t1

0x7b5f,	// (0x0004f9b9) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7b5f,	// (0x0004f9b9) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9f2,	// (0x0005784c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9f2,	// (0x0005784c) hc_cl_list_double_graphic_heading_pane_t

0xbd01,	// (0x00053b5b) vid4_progress_pane_g1

0xbd11,	// (0x00053b6b) vid4_progress_pane_g2

0x7b74,	// (0x0004f9ce) vid4_progress_pane_g3

0xbd21,	// (0x00053b7b) vid4_progress_pane_g4

0x0004,

0xf9f7,	// (0x00057851) vid4_progress_pane_g

0x7b86,	// (0x0004f9e0) vid4_progress_pane_t1

0xbd39,	// (0x00053b93) vid4_progress_pane_t2

0x0002,

0xfa02,	// (0x0005785c) vid4_progress_pane_t

0x7b9e,	// (0x0004f9f8) wait_bar_pane_cp07

0x5307,	// (0x0004d161) blid_firmament_pane_ParamLimits

0x534a,	// (0x0004d1a4) popup_blid_sat_info2_window_g1

0x536e,	// (0x0004d1c8) popup_blid_sat_info2_window_t3

0x537c,	// (0x0004d1d6) popup_blid_sat_info2_window_t4

0x538a,	// (0x0004d1e4) popup_blid_sat_info2_window_t5

0x5398,	// (0x0004d1f2) popup_blid_sat_info2_window_t6

0x53a8,	// (0x0004d202) popup_blid_sat_info2_window_t7

0x53b6,	// (0x0004d210) popup_blid_sat_info2_window_t8

0x53c4,	// (0x0004d21e) popup_blid_sat_info2_window_t9

0x53d2,	// (0x0004d22c) popup_blid_sat_info2_window_t10

0x5493,	// (0x0004d2ed) aid_firma_cardinal_ParamLimits

0x54a7,	// (0x0004d301) blid_firmament_pane_t1_ParamLimits

0x54be,	// (0x0004d318) blid_firmament_pane_t2_ParamLimits

0x54d5,	// (0x0004d32f) blid_firmament_pane_t3_ParamLimits

0x54ec,	// (0x0004d346) blid_firmament_pane_t4_ParamLimits

0xf620,	// (0x0005747a) blid_firmament_pane_t_ParamLimits

0x5503,	// (0x0004d35d) blid_sat_info_pane_ParamLimits

0xdf90,	// (0x00055dea) main_cam_set_pane_ParamLimits

0x62ac,	// (0x0004e106) aid_size_cell_colour_35_ParamLimits

0x62cc,	// (0x0004e126) aid_size_cell_colour_112_ParamLimits

0x62ec,	// (0x0004e146) aid_size_cell_effect_ParamLimits

0xef7c,	// (0x00056dd6) bg_tb_trans_pane_cp02_ParamLimits

0xe8c6,	// (0x00056720) heading_imed_pane_ParamLimits

0x630c,	// (0x0004e166) listscroll_imed_pane_ParamLimits

0x3eee,	// (0x0004bd48) popup_call2_audio_first_window_g5_ParamLimits

0x3eee,	// (0x0004bd48) popup_call2_audio_first_window_g5

0x6731,	// (0x0004e58b) aid_size_touch_image3_arrow_left_ParamLimits

0x6731,	// (0x0004e58b) aid_size_touch_image3_arrow_left

0x675d,	// (0x0004e5b7) aid_size_touch_image3_arrow_right_ParamLimits

0x675d,	// (0x0004e5b7) aid_size_touch_image3_arrow_right

0xbd4e,	// (0x00053ba8) vid4_progress_pane_t3

0x64b1,	// (0x0004e30b) main_hwr_training_symbol_option_pane_ParamLimits

0x64b1,	// (0x0004e30b) main_hwr_training_symbol_option_pane

0xb15d,	// (0x00052fb7) popup_hwr_training_preview_window_ParamLimits

0xb15d,	// (0x00052fb7) popup_hwr_training_preview_window

0x64d1,	// (0x0004e32b) hwr_training_navi_pane_g5_ParamLimits

0x64d1,	// (0x0004e32b) hwr_training_navi_pane_g5

0xb6e0,	// (0x0005353a) popup_char_count_window

0xdf90,	// (0x00055dea) bg_popup_sub_pane_cp20_ParamLimits

0x76d7,	// (0x0004f531) list_vitu2_match_list_pane_ParamLimits

0x76e3,	// (0x0004f53d) vitu2_page_scroll_pane_ParamLimits

0x76e3,	// (0x0004f53d) vitu2_page_scroll_pane

0xc09f,	// (0x00053ef9) list_single_hwr_training_symbol_option_pane_ParamLimits

0xc09f,	// (0x00053ef9) list_single_hwr_training_symbol_option_pane

0xc0b2,	// (0x00053f0c) list_single_hwr_training_symbol_option_pane_g1

0xc0ba,	// (0x00053f14) list_single_hwr_training_symbol_option_pane_t1

0xc0c8,	// (0x00053f22) bg_button_pane_cp023

0xc0d1,	// (0x00053f2b) bg_button_pane_cp024

0xc104,	// (0x00053f5e) vitu2_page_scroll_pane_g1

0xc10c,	// (0x00053f66) vitu2_page_scroll_pane_g2

0x0001,

0xfa09,	// (0x00057863) vitu2_page_scroll_pane_g

0xc114,	// (0x00053f6e) vitu2_page_scroll_pane_t1

0x5252,	// (0x0004d0ac) popup_char_count_window_g1

0xc123,	// (0x00053f7d) popup_char_count_window_g2

0xc12c,	// (0x00053f86) popup_char_count_window_g3

0x0002,

0xfa0e,	// (0x00057868) popup_char_count_window_g

0xc135,	// (0x00053f8f) popup_char_count_window_t1

0xd53f,	// (0x00055399) main_vded2_pane

0xaf10,	// (0x00052d6a) aid_size_cell_imed_line

0xaf1a,	// (0x00052d74) grid_imed_line_width_pane

0xb65f,	// (0x000534b9) vid4_indicators_pane_g4

0xc143,	// (0x00053f9d) cell_imed_line_width_pane_ParamLimits

0xc143,	// (0x00053f9d) cell_imed_line_width_pane

0xc157,	// (0x00053fb1) cell_imed_line_width_pane_g1

0xc160,	// (0x00053fba) cell_imed_line_width_pane_g2

0x0001,

0xfa15,	// (0x0005786f) cell_imed_line_width_pane_g

0x7bb1,	// (0x0004fa0b) main_vded2_pane_g1_ParamLimits

0x7bb1,	// (0x0004fa0b) main_vded2_pane_g1

0x7bc7,	// (0x0004fa21) main_vded2_pane_g2_ParamLimits

0x7bc7,	// (0x0004fa21) main_vded2_pane_g2

0x0001,

0xfa1a,	// (0x00057874) main_vded2_pane_g_ParamLimits

0xfa1a,	// (0x00057874) main_vded2_pane_g

0x7bd9,	// (0x0004fa33) vded2_slider_pane_ParamLimits

0x7bd9,	// (0x0004fa33) vded2_slider_pane

0x7be9,	// (0x0004fa43) aid_size_touch_vded2_end

0x7bf3,	// (0x0004fa4d) aid_size_touch_vded2_playhead

0xc168,	// (0x00053fc2) aid_size_touch_vded2_start

0xc170,	// (0x00053fca) vded2_slider_bg_pane

0xc179,	// (0x00053fd3) vded2_slider_pane_g1

0xc182,	// (0x00053fdc) vded2_slider_pane_g2

0x7bfd,	// (0x0004fa57) vded2_slider_pane_g3

0x0002,

0xfa1f,	// (0x00057879) vded2_slider_pane_g

0xc18a,	// (0x00053fe4) vded2_slider_bg_pane_g1

0xc193,	// (0x00053fed) vded2_slider_bg_pane_g2

0xc19c,	// (0x00053ff6) vded2_slider_bg_pane_g3

0x0002,

0xfa26,	// (0x00057880) vded2_slider_bg_pane_g

0x309b,	// (0x0004aef5) aid_postcard_touch_down_pane_ParamLimits

0x309b,	// (0x0004aef5) aid_postcard_touch_down_pane

0x30b1,	// (0x0004af0b) aid_postcard_touch_up_pane_ParamLimits

0x30b1,	// (0x0004af0b) aid_postcard_touch_up_pane

0xd53f,	// (0x00055399) main_blid2_pane

0xab8e,	// (0x000529e8) popup_blid2_search_window

0xd53f,	// (0x00055399) blid2_gps_pane

0xd53f,	// (0x00055399) blid2_navig_pane

0xd53f,	// (0x00055399) blid2_search_pane

0xd53f,	// (0x00055399) blid2_tripm_pane

0x7c08,	// (0x0004fa62) blid2_search_pane_g1_ParamLimits

0x7c08,	// (0x0004fa62) blid2_search_pane_g1

0x7c22,	// (0x0004fa7c) blid2_search_pane_t1_ParamLimits

0x7c22,	// (0x0004fa7c) blid2_search_pane_t1

0x7c34,	// (0x0004fa8e) aid_size_cell_blid2_gps_ParamLimits

0x7c34,	// (0x0004fa8e) aid_size_cell_blid2_gps

0x7c4c,	// (0x0004faa6) blid2_gps_pane_g1_ParamLimits

0x7c4c,	// (0x0004faa6) blid2_gps_pane_g1

0x7c60,	// (0x0004faba) grid_blid2_satellite_pane_ParamLimits

0x7c60,	// (0x0004faba) grid_blid2_satellite_pane

0x7c7a,	// (0x0004fad4) blid2_navig_pane_g1_ParamLimits

0x7c7a,	// (0x0004fad4) blid2_navig_pane_g1

0x7c86,	// (0x0004fae0) blid2_navig_pane_t1_ParamLimits

0x7c86,	// (0x0004fae0) blid2_navig_pane_t1

0x7ca1,	// (0x0004fafb) blid2_navig_pane_t2_ParamLimits

0x7ca1,	// (0x0004fafb) blid2_navig_pane_t2

0x0001,

0xfa2d,	// (0x00057887) blid2_navig_pane_t_ParamLimits

0xfa2d,	// (0x00057887) blid2_navig_pane_t

0x7cbc,	// (0x0004fb16) blid2_navig_ring_pane_ParamLimits

0x7cbc,	// (0x0004fb16) blid2_navig_ring_pane

0x7cd5,	// (0x0004fb2f) blid2_speed_pane_ParamLimits

0x7cd5,	// (0x0004fb2f) blid2_speed_pane

0x7ce1,	// (0x0004fb3b) blid2_tripm_pane_g1_ParamLimits

0x7ce1,	// (0x0004fb3b) blid2_tripm_pane_g1

0x7cfa,	// (0x0004fb54) blid2_tripm_pane_g2_ParamLimits

0x7cfa,	// (0x0004fb54) blid2_tripm_pane_g2

0x7d0e,	// (0x0004fb68) blid2_tripm_pane_g3_ParamLimits

0x7d0e,	// (0x0004fb68) blid2_tripm_pane_g3

0x7d22,	// (0x0004fb7c) blid2_tripm_pane_g4_ParamLimits

0x7d22,	// (0x0004fb7c) blid2_tripm_pane_g4

0x7d36,	// (0x0004fb90) blid2_tripm_pane_g5_ParamLimits

0x7d36,	// (0x0004fb90) blid2_tripm_pane_g5

0x0005,

0xfa32,	// (0x0005788c) blid2_tripm_pane_g_ParamLimits

0xfa32,	// (0x0005788c) blid2_tripm_pane_g

0x7d5c,	// (0x0004fbb6) blid2_tripm_pane_t1_ParamLimits

0x7d5c,	// (0x0004fbb6) blid2_tripm_pane_t1

0x7d77,	// (0x0004fbd1) blid2_tripm_pane_t2_ParamLimits

0x7d77,	// (0x0004fbd1) blid2_tripm_pane_t2

0x7d90,	// (0x0004fbea) blid2_tripm_pane_t3_ParamLimits

0x7d90,	// (0x0004fbea) blid2_tripm_pane_t3

0x0003,

0xfa3f,	// (0x00057899) blid2_tripm_pane_t_ParamLimits

0xfa3f,	// (0x00057899) blid2_tripm_pane_t

0x7dd7,	// (0x0004fc31) cell_blid2_satellite_pane_ParamLimits

0x7dd7,	// (0x0004fc31) cell_blid2_satellite_pane

0x7df5,	// (0x0004fc4f) cell_blid2_satellite_pane_g1

0xc1a5,	// (0x00053fff) cell_blid2_satellite_pane_t1

0xe465,	// (0x000562bf) blid2_speed_pane_g1

0xc1b3,	// (0x0005400d) blid2_speed_pane_t1

0xc1c1,	// (0x0005401b) blid2_speed_pane_t2

0x0001,

0xfa48,	// (0x000578a2) blid2_speed_pane_t

0xe465,	// (0x000562bf) blid2_navig_ring_pane_g1

0x7dfe,	// (0x0004fc58) blid2_navig_ring_pane_g2

0x7e06,	// (0x0004fc60) blid2_navig_ring_pane_g3

0x7e0e,	// (0x0004fc68) blid2_navig_ring_pane_g4

0x7e16,	// (0x0004fc70) blid2_navig_ring_pane_g5

0x0004,

0xfa4d,	// (0x000578a7) blid2_navig_ring_pane_g

0xd53f,	// (0x00055399) bg_popup_window_pane_cp011

0xc1cf,	// (0x00054029) popup_blid2_search_window_g1

0xc1d7,	// (0x00054031) popup_blid2_search_window_t1

0xc1e5,	// (0x0005403f) popup_blid2_search_window_t2

0x0001,

0xfa58,	// (0x000578b2) popup_blid2_search_window_t

0xe565,	// (0x000563bf) main_browser_pane_g1

0xe256,	// (0x000560b0) main_browser_pane_ParamLimits

0xdf90,	// (0x00055dea) bg_button_pane_cp011_ParamLimits

0x6fae,	// (0x0004ee08) cell_vitu2_function_pane_g1_ParamLimits

0xef7c,	// (0x00056dd6) bg_popup_sub_pane_cp22_ParamLimits

0x06a8,	// (0x00048502) input_focus_pane_cp08_ParamLimits

0x7850,	// (0x0004f6aa) popup_vitu2_query_button_pane_ParamLimits

0x7850,	// (0x0004f6aa) popup_vitu2_query_button_pane

0x06c3,	// (0x0004851d) popup_vitu2_query_input_button_pane

0xba14,	// (0x0005386e) popup_vitu2_query_window_g1_ParamLimits

0x06cb,	// (0x00048525) popup_vitu2_query_window_g2_ParamLimits

0xf959,	// (0x000577b3) popup_vitu2_query_window_g_ParamLimits

0xd53f,	// (0x00055399) bg_button_pane_cp026

0x7e1e,	// (0x0004fc78) popup_vitu2_query_input_button_pane_g1

0xd53f,	// (0x00055399) bg_button_pane_cp025

0xc1f3,	// (0x0005404d) popup_vitu2_query_button_pane_t1

0x5797,	// (0x0004d5f1) main_mp3_pane_t6

0x57a5,	// (0x0004d5ff) popup_slider_window_cp01

0xb5c3,	// (0x0005341d) cam4_battery_pane

0xb61c,	// (0x00053476) cam4_battery_pane_cp02

0xbcf9,	// (0x00053b53) cam4_battery_pane_cp01

0xbcf9,	// (0x00053b53) cam4_battery_pane_cp03

0xe465,	// (0x000562bf) cam4_battery_pane_g1

0xc201,	// (0x0005405b) cam4_battery_pane_g2

0x0001,

0xfa5d,	// (0x000578b7) cam4_battery_pane_g

0x53e0,	// (0x0004d23a) popup_blid_sat_info2_window_t11

0xecd8,	// (0x00056b32) aid_size_touch_mv_arrow_left_ParamLimits

0xed01,	// (0x00056b5b) aid_size_touch_mv_arrow_right_ParamLimits

0xed5f,	// (0x00056bb9) navi_pane_g1_ParamLimits

0xed6b,	// (0x00056bc5) navi_pane_g2_ParamLimits

0xed99,	// (0x00056bf3) navi_pane_g3_ParamLimits

0xf334,	// (0x0005718e) navi_pane_g_ParamLimits

0x2da2,	// (0x0004abfc) navi_pane_mv_t1_ParamLimits

0x6318,	// (0x0004e172) grid_imed_effect_pane_ParamLimits

0x1b2b,	// (0x00049985) aid_placing_vt_slider_lsc

0xe4b4,	// (0x0005630e) aid_placing_vt_slider_prt

0xdf90,	// (0x00055dea) bg_tb_trans_pane_cp01_ParamLimits

0x5660,	// (0x0004d4ba) popup_image_details_window_g1_ParamLimits

0x5673,	// (0x0004d4cd) popup_image_details_window_g2_ParamLimits

0x5688,	// (0x0004d4e2) popup_image_details_window_g3_ParamLimits

0x5688,	// (0x0004d4e2) popup_image_details_window_g3

0xf660,	// (0x000574ba) popup_image_details_window_g_ParamLimits

0x569c,	// (0x0004d4f6) popup_image_details_window_t1_ParamLimits

0x56ae,	// (0x0004d508) popup_image_details_window_t2_ParamLimits

0x56c7,	// (0x0004d521) popup_image_details_window_t3_ParamLimits

0x56db,	// (0x0004d535) popup_image_details_window_t4_ParamLimits

0x56f6,	// (0x0004d550) popup_image_details_window_t5_ParamLimits

0xf667,	// (0x000574c1) popup_image_details_window_t_ParamLimits

0x7a84,	// (0x0004f8de) cl_header_name_pane_ParamLimits

0x7a84,	// (0x0004f8de) cl_header_name_pane

0x7e26,	// (0x0004fc80) cl_header_name_pane_t1_ParamLimits

0x7e26,	// (0x0004fc80) cl_header_name_pane_t1

0x7e47,	// (0x0004fca1) cl_header_name_pane_t2_ParamLimits

0x7e47,	// (0x0004fca1) cl_header_name_pane_t2

0x7e89,	// (0x0004fce3) cl_header_name_pane_t3_ParamLimits

0x7e89,	// (0x0004fce3) cl_header_name_pane_t3

0x0002,

0xfa62,	// (0x000578bc) cl_header_name_pane_t_ParamLimits

0xfa62,	// (0x000578bc) cl_header_name_pane_t

0xee28,	// (0x00056c82) navi_pane_mv_g2_ParamLimits

0xb6ab,	// (0x00053505) field_vitu2_entry_pane_g1_ParamLimits

0xb6b7,	// (0x00053511) field_vitu2_entry_pane_g2_ParamLimits

0xef46,	// (0x00056da0) field_vitu2_entry_pane_g3_ParamLimits

0xef46,	// (0x00056da0) field_vitu2_entry_pane_g3

0xf862,	// (0x000576bc) field_vitu2_entry_pane_g_ParamLimits

0x6f2a,	// (0x0004ed84) cell_vitu2_itu_pane_g1_ParamLimits

0x6f42,	// (0x0004ed9c) cell_vitu2_itu_pane_g2_ParamLimits

0x6f42,	// (0x0004ed9c) cell_vitu2_itu_pane_g2

0x0001,

0xf86e,	// (0x000576c8) cell_vitu2_itu_pane_g_ParamLimits

0xf86e,	// (0x000576c8) cell_vitu2_itu_pane_g

0xdf90,	// (0x00055dea) bg_vkb2_func_pane_cp05_ParamLimits

0xdf90,	// (0x00055dea) bg_vkb2_func_pane_cp05

0xdf90,	// (0x00055dea) bg_vkb2_func_pane_cp03

0xdf90,	// (0x00055dea) bg_vkb2_func_pane_cp04

0xdf90,	// (0x00055dea) bg_vkb2_func_pane_cp10_ParamLimits

0xdf90,	// (0x00055dea) bg_vkb2_func_pane_cp10

0x07ea,	// (0x00048644) bg_vkb2_func_pane_cp08

0x7a30,	// (0x0004f88a) bg_vkb2_func_pane_cp06

0x7a3c,	// (0x0004f896) bg_vkb2_func_pane_cp07

0xc0da,	// (0x00053f34) bg_vkb2_func_pane_cp11_ParamLimits

0xc0da,	// (0x00053f34) bg_vkb2_func_pane_cp11

0xc0ef,	// (0x00053f49) bg_vkb2_func_pane_cp12_ParamLimits

0xc0ef,	// (0x00053f49) bg_vkb2_func_pane_cp12

0xd53f,	// (0x00055399) bg_vkb2_func_pane_cp09

0xb6f2,	// (0x0005354c) bg_vkb2_func_pane_g1

0xe676,	// (0x000564d0) bg_vkb2_func_pane_g2

0xb6fa,	// (0x00053554) bg_vkb2_func_pane_g3

0xb702,	// (0x0005355c) bg_vkb2_func_pane_g4

0xb9b9,	// (0x00053813) bg_vkb2_func_pane_g5

0xb71a,	// (0x00053574) bg_vkb2_func_pane_g6

0xb722,	// (0x0005357c) bg_vkb2_func_pane_g7

0xb712,	// (0x0005356c) bg_vkb2_func_pane_g8

0xe656,	// (0x000564b0) bg_vkb2_func_pane_g9

0x0008,

0xfa69,	// (0x000578c3) bg_vkb2_func_pane_g

0x7d4a,	// (0x0004fba4) blid2_tripm_pane_g6_ParamLimits

0x7d4a,	// (0x0004fba4) blid2_tripm_pane_g6

0xb494,	// (0x000532ee) mp4_progress_pane_g1

0x7dc3,	// (0x0004fc1d) blid2_tripm_values_pane_ParamLimits

0x7dc3,	// (0x0004fc1d) blid2_tripm_values_pane

0x7eba,	// (0x0004fd14) blid2_tripm_values_pane_t1

0x7ec8,	// (0x0004fd22) blid2_tripm_values_pane_t2

0x7ed6,	// (0x0004fd30) blid2_tripm_values_pane_t3

0x7ee4,	// (0x0004fd3e) blid2_tripm_values_pane_t4

0x7ef2,	// (0x0004fd4c) blid2_tripm_values_pane_t5

0x7f00,	// (0x0004fd5a) blid2_tripm_values_pane_t6

0x7f0e,	// (0x0004fd68) blid2_tripm_values_pane_t7

0x7f1c,	// (0x0004fd76) blid2_tripm_values_pane_t8

0x7f2a,	// (0x0004fd84) blid2_tripm_values_pane_t9

0x0008,

0xfa7c,	// (0x000578d6) blid2_tripm_values_pane_t

0x1b6d,	// (0x000499c7) call_video_pane_t1_ParamLimits

0x1b8b,	// (0x000499e5) call_video_pane_t2_ParamLimits

0xf1e2,	// (0x0005703c) call_video_pane_t_ParamLimits

0x04e3,	// (0x0004833d) msg_header_pane_g1_ParamLimits

0xf031,	// (0x00056e8b) msg_header_pane_g2_ParamLimits

0xf031,	// (0x00056e8b) msg_header_pane_g2

0x0001,

0xf3d7,	// (0x00057231) msg_header_pane_g_ParamLimits

0xf3d7,	// (0x00057231) msg_header_pane_g

0xe256,	// (0x000560b0) main_clock2_pane_ParamLimits

0x6019,	// (0x0004de73) grid_clock2_toolbar_pane_ParamLimits

0x6019,	// (0x0004de73) grid_clock2_toolbar_pane

0x6019,	// (0x0004de73) listscroll_clock2_pane_ParamLimits

0x6019,	// (0x0004de73) listscroll_clock2_pane

0x60fd,	// (0x0004df57) main_clock2_pane_t3_ParamLimits

0x60fd,	// (0x0004df57) main_clock2_pane_t3

0x6121,	// (0x0004df7b) main_clock2_pane_t4_ParamLimits

0x6121,	// (0x0004df7b) main_clock2_pane_t4

0xc20b,	// (0x00054065) cell_clock2_toolbar_pane

0xc213,	// (0x0005406d) cell_clock2_toolbar_pane_cp01

0xc213,	// (0x0005406d) cell_clock2_toolbar_pane_cp02

0xc21b,	// (0x00054075) cell_clock2_toolbar_pane_cp03

0xc223,	// (0x0005407d) list_clock2_pane

0xec4e,	// (0x00056aa8) scroll_pane_cp10

0xc22b,	// (0x00054085) list_single_clock2_pane_ParamLimits

0xc22b,	// (0x00054085) list_single_clock2_pane

0xe42f,	// (0x00056289) list_highlight_pane_cp08

0xc238,	// (0x00054092) list_single_clock2_pane_t1

0xc246,	// (0x000540a0) list_single_clock2_pane_t2

0x0001,

0xfa8f,	// (0x000578e9) list_single_clock2_pane_t

0xd53f,	// (0x00055399) bg_button_pane_cp10

0xc254,	// (0x000540ae) cell_clock2_toolbar_pane_g1

0x3019,	// (0x0004ae73) aid_main_viewer_pane_g1_ParamLimits

0x3019,	// (0x0004ae73) aid_main_viewer_pane_g1

0x3027,	// (0x0004ae81) aid_main_viewer_pane_g2_ParamLimits

0x3027,	// (0x0004ae81) aid_main_viewer_pane_g2

0x3035,	// (0x0004ae8f) aid_main_viewer_pane_g3_ParamLimits

0x3035,	// (0x0004ae8f) aid_main_viewer_pane_g3

0x3044,	// (0x0004ae9e) aid_main_viewer_pane_g4_ParamLimits

0x3044,	// (0x0004ae9e) aid_main_viewer_pane_g4

0x0003,

0xf3e8,	// (0x00057242) aid_main_viewer_pane_g_ParamLimits

0xf3e8,	// (0x00057242) aid_main_viewer_pane_g

0x4b13,	// (0x0004c96d) main_calc_pane_ParamLimits

0x4b33,	// (0x0004c98d) main_dialer2_pane_ParamLimits

0xd53f,	// (0x00055399) main_cam6_pane

0xd53f,	// (0x00055399) main_vid6_pane

0x6025,	// (0x0004de7f) listscroll_gen_pane_cp06_ParamLimits

0x6025,	// (0x0004de7f) listscroll_gen_pane_cp06

0x6144,	// (0x0004df9e) main_clock2_pane_t5_ParamLimits

0x6144,	// (0x0004df9e) main_clock2_pane_t5

0x61a2,	// (0x0004dffc) aid_call2_pane_cp10_ParamLimits

0x61b4,	// (0x0004e00e) aid_call_pane_cp10_ParamLimits

0xeccc,	// (0x00056b26) popup_clock_analogue_window_cp10_g1_ParamLimits

0xeccc,	// (0x00056b26) popup_clock_analogue_window_cp10_g2_ParamLimits

0x61c6,	// (0x0004e020) popup_clock_analogue_window_cp10_g3_ParamLimits

0x61c6,	// (0x0004e020) popup_clock_analogue_window_cp10_g4_ParamLimits

0xeccc,	// (0x00056b26) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf71c,	// (0x00057576) popup_clock_analogue_window_cp10_g_ParamLimits

0x61dc,	// (0x0004e036) popup_clock_analogue_window_cp10_t1_ParamLimits

0x66de,	// (0x0004e538) cell_dialer2_keypad_pane_g2_ParamLimits

0x66de,	// (0x0004e538) cell_dialer2_keypad_pane_g2

0x0001,

0xf801,	// (0x0005765b) cell_dialer2_keypad_pane_g_ParamLimits

0xf801,	// (0x0005765b) cell_dialer2_keypad_pane_g

0x66fa,	// (0x0004e554) cell_dialer2_keypad_pane_t1

0x72bd,	// (0x0004f117) main_cset_text2_pane_ParamLimits

0x72bd,	// (0x0004f117) main_cset_text2_pane

0xbc00,	// (0x00053a5a) area_vitu2_query_pane_g1_ParamLimits

0x07a4,	// (0x000485fe) area_vitu2_query_pane_g2_ParamLimits

0xf9ac,	// (0x00057806) area_vitu2_query_pane_g_ParamLimits

0xbc84,	// (0x00053ade) area_vitu2_query_pane_t7_ParamLimits

0xbc84,	// (0x00053ade) area_vitu2_query_pane_t7

0x7a30,	// (0x0004f88a) bg_button_pane_cp018_ParamLimits

0x7a3c,	// (0x0004f896) bg_button_pane_cp021_ParamLimits

0x07db,	// (0x00048635) bg_button_pane_cp022_ParamLimits

0x07ea,	// (0x00048644) bg_vkb2_func_pane_cp08_ParamLimits

0x7a30,	// (0x0004f88a) bg_vkb2_func_pane_cp06_ParamLimits

0x7a3c,	// (0x0004f896) bg_vkb2_func_pane_cp07_ParamLimits

0x07fa,	// (0x00048654) input_focus_pane_cp09_ParamLimits

0x7f38,	// (0x0004fd92) cam6_autofocus_pane_ParamLimits

0x7f38,	// (0x0004fd92) cam6_autofocus_pane

0x7f44,	// (0x0004fd9e) cam6_image_uncrop_pane_ParamLimits

0x7f44,	// (0x0004fd9e) cam6_image_uncrop_pane

0x7f54,	// (0x0004fdae) cam6_indi_pane_ParamLimits

0x7f54,	// (0x0004fdae) cam6_indi_pane

0x7f6a,	// (0x0004fdc4) cam6_mode_pane_ParamLimits

0x7f6a,	// (0x0004fdc4) cam6_mode_pane

0x7f7c,	// (0x0004fdd6) cam6_timer_pane_ParamLimits

0x7f7c,	// (0x0004fdd6) cam6_timer_pane

0x7f88,	// (0x0004fde2) cam6_zoom_pane_ParamLimits

0x7f88,	// (0x0004fde2) cam6_zoom_pane

0x7f95,	// (0x0004fdef) cam6_mode_pane_g1_ParamLimits

0x7f95,	// (0x0004fdef) cam6_mode_pane_g1

0x7fa5,	// (0x0004fdff) cam6_mode_pane_g2_ParamLimits

0x7fa5,	// (0x0004fdff) cam6_mode_pane_g2

0x7fb5,	// (0x0004fe0f) cam6_mode_pane_g3_ParamLimits

0x7fb5,	// (0x0004fe0f) cam6_mode_pane_g3

0x7fc5,	// (0x0004fe1f) cam6_mode_pane_g4_ParamLimits

0x7fc5,	// (0x0004fe1f) cam6_mode_pane_g4

0x0003,

0xfa94,	// (0x000578ee) cam6_mode_pane_g_ParamLimits

0xfa94,	// (0x000578ee) cam6_mode_pane_g

0xac34,	// (0x00052a8e) bg_tb_trans_pane_cp08_ParamLimits

0xac34,	// (0x00052a8e) bg_tb_trans_pane_cp08

0xc25c,	// (0x000540b6) cam6_battery_pane_ParamLimits

0xc25c,	// (0x000540b6) cam6_battery_pane

0xc272,	// (0x000540cc) cam6_indi_pane_g1_ParamLimits

0xc272,	// (0x000540cc) cam6_indi_pane_g1

0xc284,	// (0x000540de) cam6_indi_pane_g2_ParamLimits

0xc284,	// (0x000540de) cam6_indi_pane_g2

0xc296,	// (0x000540f0) cam6_indi_pane_g3_ParamLimits

0xc296,	// (0x000540f0) cam6_indi_pane_g3

0x0002,

0xfa9d,	// (0x000578f7) cam6_indi_pane_g_ParamLimits

0xfa9d,	// (0x000578f7) cam6_indi_pane_g

0xc2a8,	// (0x00054102) cam6_indi_pane_t1_ParamLimits

0xc2a8,	// (0x00054102) cam6_indi_pane_t1

0x6d02,	// (0x0004eb5c) cam6_autofocus_pane_g1

0x6d0a,	// (0x0004eb64) cam6_autofocus_pane_g2

0x6d12,	// (0x0004eb6c) cam6_autofocus_pane_g3

0x6d1a,	// (0x0004eb74) cam6_autofocus_pane_g4

0x0003,

0xfaa4,	// (0x000578fe) cam6_autofocus_pane_g

0xc2ce,	// (0x00054128) cam6_timer_pane_g1

0xc2d6,	// (0x00054130) cam6_timer_pane_t1

0xc2e4,	// (0x0005413e) cam6_zoom_cont_pane

0xc2ec,	// (0x00054146) cam6_zoom_pane_g1

0xc2f5,	// (0x0005414f) cam6_zoom_pane_g2

0x7fd5,	// (0x0004fe2f) cam6_zoom_pane_g3

0x0002,

0xfaad,	// (0x00057907) cam6_zoom_pane_g

0xe465,	// (0x000562bf) cam6_battery_pane_g1

0xe465,	// (0x000562bf) cam6_battery_pane_g2

0x0001,

0xf398,	// (0x000571f2) cam6_battery_pane_g

0xc2ec,	// (0x00054146) cam6_zoom_cont_pane_g1

0xc2f5,	// (0x0005414f) cam6_zoom_cont_pane_g2

0xc2fe,	// (0x00054158) cam6_zoom_cont_pane_g3

0x0002,

0xfab4,	// (0x0005790e) cam6_zoom_cont_pane_g

0x7ff0,	// (0x0004fe4a) cam6_mode_pane_cp_ParamLimits

0x7ff0,	// (0x0004fe4a) cam6_mode_pane_cp

0x8002,	// (0x0004fe5c) cam6_zoom_pane_cp_ParamLimits

0x8002,	// (0x0004fe5c) cam6_zoom_pane_cp

0x800e,	// (0x0004fe68) vid6_image_uncrop_cif_pane_ParamLimits

0x800e,	// (0x0004fe68) vid6_image_uncrop_cif_pane

0x801e,	// (0x0004fe78) vid6_image_uncrop_nhd_pane_ParamLimits

0x801e,	// (0x0004fe78) vid6_image_uncrop_nhd_pane

0x802d,	// (0x0004fe87) vid6_image_uncrop_vga_pane_ParamLimits

0x802d,	// (0x0004fe87) vid6_image_uncrop_vga_pane

0x803c,	// (0x0004fe96) vid6_image_uncrop_wvga_pane_ParamLimits

0x803c,	// (0x0004fe96) vid6_image_uncrop_wvga_pane

0x804b,	// (0x0004fea5) vid6_indi_pane_ParamLimits

0x804b,	// (0x0004fea5) vid6_indi_pane

0xac34,	// (0x00052a8e) bg_tb_trans_pane_cp09_ParamLimits

0xac34,	// (0x00052a8e) bg_tb_trans_pane_cp09

0xc316,	// (0x00054170) cam6_battery_pane_cp_ParamLimits

0xc316,	// (0x00054170) cam6_battery_pane_cp

0xc322,	// (0x0005417c) vid6_indi_pane_g1_ParamLimits

0xc322,	// (0x0005417c) vid6_indi_pane_g1

0xc334,	// (0x0005418e) vid6_indi_pane_g2_ParamLimits

0xc334,	// (0x0005418e) vid6_indi_pane_g2

0xc346,	// (0x000541a0) vid6_indi_pane_g3_ParamLimits

0xc346,	// (0x000541a0) vid6_indi_pane_g3

0xc35b,	// (0x000541b5) vid6_indi_pane_g4_ParamLimits

0xc35b,	// (0x000541b5) vid6_indi_pane_g4

0xc370,	// (0x000541ca) vid6_indi_pane_g5_ParamLimits

0xc370,	// (0x000541ca) vid6_indi_pane_g5

0x0004,

0xfabb,	// (0x00057915) vid6_indi_pane_g_ParamLimits

0xfabb,	// (0x00057915) vid6_indi_pane_g

0xc38a,	// (0x000541e4) vid6_indi_pane_t1_ParamLimits

0xc38a,	// (0x000541e4) vid6_indi_pane_t1

0xc3a0,	// (0x000541fa) vid6_indi_pane_t2_ParamLimits

0xc3a0,	// (0x000541fa) vid6_indi_pane_t2

0xc3c8,	// (0x00054222) vid6_indi_pane_t3_ParamLimits

0xc3c8,	// (0x00054222) vid6_indi_pane_t3

0xc3f0,	// (0x0005424a) vid6_indi_pane_t4_ParamLimits

0xc3f0,	// (0x0005424a) vid6_indi_pane_t4

0x0003,

0xfac6,	// (0x00057920) vid6_indi_pane_t_ParamLimits

0xfac6,	// (0x00057920) vid6_indi_pane_t

0xc414,	// (0x0005426e) wait_bar_pane_cp08

0x8063,	// (0x0004febd) main_cset_text2_pane_t1_ParamLimits

0x8063,	// (0x0004febd) main_cset_text2_pane_t1

0x7fde,	// (0x0004fe38) listscroll_gen_pane_cp06_t1_ParamLimits

0x7fde,	// (0x0004fe38) listscroll_gen_pane_cp06_t1

0xd53f,	// (0x00055399) main_cam6_set_pane

0xe1e4,	// (0x0005603e) bg_tb_trans_pane_cp06_ParamLimits

0xb5cb,	// (0x00053425) cam4_indicators_pane_g1_ParamLimits

0xb5dc,	// (0x00053436) cam4_indicators_pane_g2_ParamLimits

0xf83e,	// (0x00057698) cam4_indicators_pane_g_ParamLimits

0xb5fa,	// (0x00053454) cam4_indicators_pane_t1_ParamLimits

0xdf90,	// (0x00055dea) bg_tb_trans_pane_cp07_ParamLimits

0xb626,	// (0x00053480) vid4_indicators_pane_g1_ParamLimits

0xb63a,	// (0x00053494) vid4_indicators_pane_g2_ParamLimits

0xb64e,	// (0x000534a8) vid4_indicators_pane_g3_ParamLimits

0xb65f,	// (0x000534b9) vid4_indicators_pane_g4_ParamLimits

0xf850,	// (0x000576aa) vid4_indicators_pane_g_ParamLimits

0xb67d,	// (0x000534d7) vid4_indicators_pane_t1_ParamLimits

0xbd01,	// (0x00053b5b) vid4_progress_pane_g1_ParamLimits

0xbd11,	// (0x00053b6b) vid4_progress_pane_g2_ParamLimits

0x7b74,	// (0x0004f9ce) vid4_progress_pane_g3_ParamLimits

0xbd21,	// (0x00053b7b) vid4_progress_pane_g4_ParamLimits

0xf9f7,	// (0x00057851) vid4_progress_pane_g_ParamLimits

0x7b86,	// (0x0004f9e0) vid4_progress_pane_t1_ParamLimits

0xbd39,	// (0x00053b93) vid4_progress_pane_t2_ParamLimits

0xbd4e,	// (0x00053ba8) vid4_progress_pane_t3_ParamLimits

0xfa02,	// (0x0005785c) vid4_progress_pane_t_ParamLimits

0x7b9e,	// (0x0004f9f8) wait_bar_pane_cp07_ParamLimits

0x8080,	// (0x0004feda) main_cam6_set_pane_g2_ParamLimits

0x8080,	// (0x0004feda) main_cam6_set_pane_g2

0x80a4,	// (0x0004fefe) main_cset6_listscroll_pane_ParamLimits

0x80a4,	// (0x0004fefe) main_cset6_listscroll_pane

0x80c4,	// (0x0004ff1e) main_cset6_slider_pane_ParamLimits

0x80c4,	// (0x0004ff1e) main_cset6_slider_pane

0x80da,	// (0x0004ff34) main_cset6_text2_pane_ParamLimits

0x80da,	// (0x0004ff34) main_cset6_text2_pane

0xc423,	// (0x0005427d) main_cset6_text_pane

0xc42b,	// (0x00054285) main_cset_list_pane_copy1_ParamLimits

0xc42b,	// (0x00054285) main_cset_list_pane_copy1

0xc43b,	// (0x00054295) scroll_pane_cp028_copy1

0x80e8,	// (0x0004ff42) cset_list_set_pane_copy1

0x80f9,	// (0x0004ff53) aid_position_infowindow_above_copy1

0x8101,	// (0x0004ff5b) aid_position_infowindow_below_copy1

0x081e,	// (0x00048678) cset_list_set_pane_g1_copy1

0x0826,	// (0x00048680) cset_list_set_pane_g3_copy1_ParamLimits

0x0826,	// (0x00048680) cset_list_set_pane_g3_copy1

0x0835,	// (0x0004868f) cset_list_set_pane_t1_copy1_ParamLimits

0x0835,	// (0x0004868f) cset_list_set_pane_t1_copy1

0xdf90,	// (0x00055dea) list_highlight_pane_cp021_copy1_ParamLimits

0xdf90,	// (0x00055dea) list_highlight_pane_cp021_copy1

0xc444,	// (0x0005429e) cset6_slider_pane_ParamLimits

0xc444,	// (0x0005429e) cset6_slider_pane

0xc470,	// (0x000542ca) main_cset6_slider_pane_g1_ParamLimits

0xc470,	// (0x000542ca) main_cset6_slider_pane_g1

0x8109,	// (0x0004ff63) main_cset6_slider_pane_g2_ParamLimits

0x8109,	// (0x0004ff63) main_cset6_slider_pane_g2

0xc498,	// (0x000542f2) main_cset6_slider_pane_g3_ParamLimits

0xc498,	// (0x000542f2) main_cset6_slider_pane_g3

0x8131,	// (0x0004ff8b) main_cset6_slider_pane_g4_ParamLimits

0x8131,	// (0x0004ff8b) main_cset6_slider_pane_g4

0x813d,	// (0x0004ff97) main_cset6_slider_pane_g5_ParamLimits

0x813d,	// (0x0004ff97) main_cset6_slider_pane_g5

0xb833,	// (0x0005368d) main_cset6_slider_pane_g7_ParamLimits

0xb833,	// (0x0005368d) main_cset6_slider_pane_g7

0xb83f,	// (0x00053699) main_cset6_slider_pane_g8_ParamLimits

0xb83f,	// (0x00053699) main_cset6_slider_pane_g8

0x7363,	// (0x0004f1bd) main_cset6_slider_pane_g9_ParamLimits

0x7363,	// (0x0004f1bd) main_cset6_slider_pane_g9

0x736f,	// (0x0004f1c9) main_cset6_slider_pane_g10_ParamLimits

0x736f,	// (0x0004f1c9) main_cset6_slider_pane_g10

0x737b,	// (0x0004f1d5) main_cset6_slider_pane_g11_ParamLimits

0x737b,	// (0x0004f1d5) main_cset6_slider_pane_g11

0x7387,	// (0x0004f1e1) main_cset6_slider_pane_g12_ParamLimits

0x7387,	// (0x0004f1e1) main_cset6_slider_pane_g12

0x7393,	// (0x0004f1ed) main_cset6_slider_pane_g13_ParamLimits

0x7393,	// (0x0004f1ed) main_cset6_slider_pane_g13

0x739f,	// (0x0004f1f9) main_cset6_slider_pane_g14_ParamLimits

0x739f,	// (0x0004f1f9) main_cset6_slider_pane_g14

0x8149,	// (0x0004ffa3) main_cset6_slider_pane_g15_ParamLimits

0x8149,	// (0x0004ffa3) main_cset6_slider_pane_g15

0x73c3,	// (0x0004f21d) main_cset6_slider_pane_g16_ParamLimits

0x73c3,	// (0x0004f21d) main_cset6_slider_pane_g16

0x73cf,	// (0x0004f229) main_cset6_slider_pane_g17_ParamLimits

0x73cf,	// (0x0004f229) main_cset6_slider_pane_g17

0x0011,

0xfacf,	// (0x00057929) main_cset6_slider_pane_g_ParamLimits

0xfacf,	// (0x00057929) main_cset6_slider_pane_g

0xc4a4,	// (0x000542fe) main_cset6_slider_pane_t1_ParamLimits

0xc4a4,	// (0x000542fe) main_cset6_slider_pane_t1

0x8179,	// (0x0004ffd3) main_cset6_slider_pane_t2_ParamLimits

0x8179,	// (0x0004ffd3) main_cset6_slider_pane_t2

0x81a4,	// (0x0004fffe) main_cset6_slider_pane_t3_ParamLimits

0x81a4,	// (0x0004fffe) main_cset6_slider_pane_t3

0x81cf,	// (0x00050029) main_cset6_slider_pane_t4_ParamLimits

0x81cf,	// (0x00050029) main_cset6_slider_pane_t4

0x81fa,	// (0x00050054) main_cset6_slider_pane_t5_ParamLimits

0x81fa,	// (0x00050054) main_cset6_slider_pane_t5

0xc4e5,	// (0x0005433f) main_cset6_slider_pane_t7_ParamLimits

0xc4e5,	// (0x0005433f) main_cset6_slider_pane_t7

0x8225,	// (0x0005007f) main_cset6_slider_pane_t8_ParamLimits

0x8225,	// (0x0005007f) main_cset6_slider_pane_t8

0x8249,	// (0x000500a3) main_cset6_slider_pane_t9_ParamLimits

0x8249,	// (0x000500a3) main_cset6_slider_pane_t9

0x826d,	// (0x000500c7) main_cset6_slider_pane_t10_ParamLimits

0x826d,	// (0x000500c7) main_cset6_slider_pane_t10

0x8291,	// (0x000500eb) main_cset6_slider_pane_t11_ParamLimits

0x8291,	// (0x000500eb) main_cset6_slider_pane_t11

0xc51b,	// (0x00054375) main_cset6_slider_pane_t14_ParamLimits

0xc51b,	// (0x00054375) main_cset6_slider_pane_t14

0xc554,	// (0x000543ae) main_cset6_slider_pane_t15_ParamLimits

0xc554,	// (0x000543ae) main_cset6_slider_pane_t15

0x000b,

0xfaf4,	// (0x0005794e) main_cset6_slider_pane_t_ParamLimits

0xfaf4,	// (0x0005794e) main_cset6_slider_pane_t

0xb951,	// (0x000537ab) cset_slider_pane_g1_copy1

0xb95a,	// (0x000537b4) cset_slider_pane_g2_copy1

0xb963,	// (0x000537bd) cset_slider_pane_g3_copy1

0xd53f,	// (0x00055399) bg_popup_sub_pane_cp011_copy1

0xc58d,	// (0x000543e7) main_cset_text_pane_g1_copy1

0xba28,	// (0x00053882) main_cset_text_pane_t1_copy1

0xba36,	// (0x00053890) main_cset_text_pane_t2_copy1

0xba44,	// (0x0005389e) main_cset_text_pane_t3_copy1

0xba52,	// (0x000538ac) main_cset_text_pane_t4_copy1

0xba60,	// (0x000538ba) main_cset_text_pane_t5_copy1

0xc595,	// (0x000543ef) main_cset_text_pane_t6_copy1

0xc5a3,	// (0x000543fd) main_cset_text_pane_t7_copy1

0x8063,	// (0x0004febd) main_cset_text2_pane_t1_copy1

0xdf90,	// (0x00055dea) main_ncimui_pane

0x4d7d,	// (0x0004cbd7) popup_query_ncimui_window_ParamLimits

0x4d7d,	// (0x0004cbd7) popup_query_ncimui_window

0xaceb,	// (0x00052b45) field_cale_ev2_pane_g4_ParamLimits

0xaceb,	// (0x00052b45) field_cale_ev2_pane_g4

0x65be,	// (0x0004e418) cell_video_dialer_keypad_pane_g2_ParamLimits

0x65be,	// (0x0004e418) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7d8,	// (0x00057632) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7d8,	// (0x00057632) cell_video_dialer_keypad_pane_g

0x65d6,	// (0x0004e430) cell_video_dialer_keypad_pane_t1

0xd53f,	// (0x00055399) bg_popup_window_pane_cp012

0x483d,	// (0x0004c697) heading_pane_cp06

0xc5cf,	// (0x00054429) ncim_query_content_pane

0xd53f,	// (0x00055399) bg_popup_heading_pane_cp01

0xc5d7,	// (0x00054431) ncim_heading_pane_t1

0xc5e5,	// (0x0005443f) ncim_indicator_popup_pane

0xc5f7,	// (0x00054451) ncim_query_button_pane

0xc60b,	// (0x00054465) ncim_query_content_pane_t1

0xc61d,	// (0x00054477) ncim_query_content_pane_t2

0x0005,

0xfb29,	// (0x00057983) ncim_query_content_pane_t

0xc657,	// (0x000544b1) ncim_query_list_pane

0xc669,	// (0x000544c3) ncim_query_popup_pane

0xc5e5,	// (0x0005443f) ncim_indicator_popup_pane_ParamLimits

0x83de,	// (0x00050238) ncim_query_content_pane_g1_ParamLimits

0x83de,	// (0x00050238) ncim_query_content_pane_g1

0xc60b,	// (0x00054465) ncim_query_content_pane_t1_ParamLimits

0xc61d,	// (0x00054477) ncim_query_content_pane_t2_ParamLimits

0x83ea,	// (0x00050244) ncim_query_content_pane_t3_ParamLimits

0x83ea,	// (0x00050244) ncim_query_content_pane_t3

0x8412,	// (0x0005026c) ncim_query_content_pane_t4_ParamLimits

0x8412,	// (0x0005026c) ncim_query_content_pane_t4

0x843a,	// (0x00050294) ncim_query_content_pane_t5_ParamLimits

0x843a,	// (0x00050294) ncim_query_content_pane_t5

0xc62f,	// (0x00054489) ncim_query_content_pane_t6_ParamLimits

0xc62f,	// (0x00054489) ncim_query_content_pane_t6

0xfb29,	// (0x00057983) ncim_query_content_pane_t_ParamLimits

0xc657,	// (0x000544b1) ncim_query_list_pane_ParamLimits

0xc669,	// (0x000544c3) ncim_query_popup_pane_ParamLimits

0xc67d,	// (0x000544d7) wait_bar_pane_cp04

0xd53f,	// (0x00055399) input_focus_pane_cp011

0xc685,	// (0x000544df) ncim_query_popup_pane_t1

0xc693,	// (0x000544ed) ncim_list_query_list_pane_ParamLimits

0xc693,	// (0x000544ed) ncim_list_query_list_pane

0xd53f,	// (0x00055399) bg_button_pane_cp027

0xc6a0,	// (0x000544fa) ncim_query_button_pane_g1

0xd53f,	// (0x00055399) list_highlight_pane_cp012

0xc6aa,	// (0x00054504) ncim_list_query_list_pane_g1

0xc6b2,	// (0x0005450c) ncim_list_query_list_pane_t1

0xb5eb,	// (0x00053445) cam4_indicators_pane_g3_ParamLimits

0xb5eb,	// (0x00053445) cam4_indicators_pane_g3

0xb66b,	// (0x000534c5) vid4_indicators_pane_g5_ParamLimits

0xb66b,	// (0x000534c5) vid4_indicators_pane_g5

0xbd2d,	// (0x00053b87) vid4_progress_pane_g5_ParamLimits

0xbd2d,	// (0x00053b87) vid4_progress_pane_g5

0x82c9,	// (0x00050123) main_ncimui_pane_g1

0x8332,	// (0x0005018c) ncimui_group_query_pane_ParamLimits

0x8332,	// (0x0005018c) ncimui_group_query_pane

0x837a,	// (0x000501d4) ncimui_list_pane_ParamLimits

0x837a,	// (0x000501d4) ncimui_list_pane

0x83a1,	// (0x000501fb) ncimui_text_pane_ParamLimits

0x83a1,	// (0x000501fb) ncimui_text_pane

0x8462,	// (0x000502bc) ncimui_text_pane_t1_ParamLimits

0x8462,	// (0x000502bc) ncimui_text_pane_t1

0xc6c0,	// (0x0005451a) ncimui_list_single_graphic_pane_ParamLimits

0xc6c0,	// (0x0005451a) ncimui_list_single_graphic_pane

0x8480,	// (0x000502da) ncimui_query_pane_ParamLimits

0x8480,	// (0x000502da) ncimui_query_pane

0xd53f,	// (0x00055399) list_highlight_pane_cp013

0xc6d0,	// (0x0005452a) ncim_list_query_list_pane_t1_copy1

0xc6aa,	// (0x00054504) ncim_list_single_graphic_pane_g1

0x8493,	// (0x000502ed) ncim_query_button_pane_cp01

0x849f,	// (0x000502f9) ncim_query_entry_pane_ParamLimits

0x849f,	// (0x000502f9) ncim_query_entry_pane

0x84b2,	// (0x0005030c) ncimui_query_pane_g1

0x84be,	// (0x00050318) ncimui_query_pane_t1_ParamLimits

0x84be,	// (0x00050318) ncimui_query_pane_t1

0xdf90,	// (0x00055dea) input_focus_pane_cp012

0xc6de,	// (0x00054538) ncim_query_entry_pane_t1

0xe256,	// (0x000560b0) main_im_pane_ParamLimits

0xdf90,	// (0x00055dea) main_mobtv_pane_ParamLimits

0xdf90,	// (0x00055dea) main_mobtv_pane

0x8161,	// (0x0004ffbb) main_cset6_slider_pane_g18_ParamLimits

0x8161,	// (0x0004ffbb) main_cset6_slider_pane_g18

0x816d,	// (0x0004ffc7) main_cset6_slider_pane_g19_ParamLimits

0x816d,	// (0x0004ffc7) main_cset6_slider_pane_g19

0xe200,	// (0x0005605a) bg_main_mobtv_pane_ParamLimits

0xe200,	// (0x0005605a) bg_main_mobtv_pane

0x84d7,	// (0x00050331) main_mobtv_info_pane

0x84e0,	// (0x0005033a) main_mobtv_loading_pane_ParamLimits

0x84e0,	// (0x0005033a) main_mobtv_loading_pane

0xc6f0,	// (0x0005454a) main_mobtv_pg_channel_list_pane

0xc6fa,	// (0x00054554) main_mobtv_pg_hdr_pane

0x84ed,	// (0x00050347) main_mobtv_programe_curr_pane_ParamLimits

0x84ed,	// (0x00050347) main_mobtv_programe_curr_pane

0x84fa,	// (0x00050354) main_mobtv_programe_next_pane_ParamLimits

0x84fa,	// (0x00050354) main_mobtv_programe_next_pane

0xc703,	// (0x0005455d) popup_mobtv_noti_window

0xe465,	// (0x000562bf) main_tv_pg_hdr_pane_g1

0xc70b,	// (0x00054565) main_tv_pg_hdr_pane_g2

0xc713,	// (0x0005456d) main_tv_pg_hdr_pane_g3

0xc71b,	// (0x00054575) main_tv_pg_hdr_pane_g4

0xc723,	// (0x0005457d) main_tv_pg_hdr_pane_g5

0xc72d,	// (0x00054587) main_tv_pg_hdr_pane_g6

0xc737,	// (0x00054591) main_tv_pg_hdr_pane_g7

0xc741,	// (0x0005459b) main_tv_pg_hdr_pane_g8

0xc74b,	// (0x000545a5) main_tv_pg_hdr_pane_g9

0xc755,	// (0x000545af) main_tv_pg_hdr_pane_g10

0xc75f,	// (0x000545b9) main_tv_pg_hdr_pane_g11

0x000a,

0xfb36,	// (0x00057990) main_tv_pg_hdr_pane_g

0xc769,	// (0x000545c3) main_tv_pg_hdr_pane_t1

0xc777,	// (0x000545d1) main_tv_pg_hdr_pane_t2

0xc785,	// (0x000545df) main_tv_pg_hdr_pane_t3

0xc795,	// (0x000545ef) main_tv_pg_hdr_pane_t4

0xc7a5,	// (0x000545ff) main_tv_pg_hdr_pane_t5

0x0004,

0xfb4d,	// (0x000579a7) main_tv_pg_hdr_pane_t

0xc7b5,	// (0x0005460f) single_mobtv_pg_channel_pane_ParamLimits

0xc7b5,	// (0x0005460f) single_mobtv_pg_channel_pane

0xc7c7,	// (0x00054621) single_mobtv_pg_channel_table_pane

0xc7d0,	// (0x0005462a) single_mobtv_pg_channel_thumb_pane

0xc7d9,	// (0x00054633) single_tv_pg_channel_pane_g1

0xc7e2,	// (0x0005463c) single_tv_pg_channel_pane_g2

0x0001,

0xfb58,	// (0x000579b2) single_tv_pg_channel_pane_g

0xe1e4,	// (0x0005603e) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe1e4,	// (0x0005603e) bg_single_mobtv_pg_channel_thumb_pane

0xc7eb,	// (0x00054645) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc7eb,	// (0x00054645) single_mobtv_pg_channel_thumb_pane_g1

0xc7f9,	// (0x00054653) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xc7f9,	// (0x00054653) single_mobtv_pg_channel_thumb_pane_g2

0xc805,	// (0x0005465f) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xc805,	// (0x0005465f) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb5d,	// (0x000579b7) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb5d,	// (0x000579b7) single_mobtv_pg_channel_thumb_pane_g

0xc811,	// (0x0005466b) single_mobtv_pg_channel_thumb_pane_t1

0xc81f,	// (0x00054679) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb64,	// (0x000579be) single_mobtv_pg_channel_thumb_pane_t

0xe465,	// (0x000562bf) bg_single_mobtv_pg_channel_table_pane_g1

0xe465,	// (0x000562bf) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf398,	// (0x000571f2) bg_single_mobtv_pg_channel_table_pane_g

0xc82d,	// (0x00054687) single_mobtv_pg_channel_table_pane_t1

0xc83b,	// (0x00054695) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb69,	// (0x000579c3) single_mobtv_pg_channel_table_pane_t

0x850f,	// (0x00050369) main_mobtv_info_pane_g1_ParamLimits

0x850f,	// (0x00050369) main_mobtv_info_pane_g1

0x852d,	// (0x00050387) main_mobtv_info_pane_t1_ParamLimits

0x852d,	// (0x00050387) main_mobtv_info_pane_t1

0x85a5,	// (0x000503ff) main_mobtv_info_pane_t2_ParamLimits

0x85a5,	// (0x000503ff) main_mobtv_info_pane_t2

0x0002,

0xfb73,	// (0x000579cd) main_mobtv_info_pane_t_ParamLimits

0xfb73,	// (0x000579cd) main_mobtv_info_pane_t

0x8634,	// (0x0005048e) wait_bar_pane_cp05

0x8646,	// (0x000504a0) main_mobtv_loading_pane_g1_ParamLimits

0x8646,	// (0x000504a0) main_mobtv_loading_pane_g1

0x8659,	// (0x000504b3) main_mobtv_loading_pane_g2_ParamLimits

0x8659,	// (0x000504b3) main_mobtv_loading_pane_g2

0x8665,	// (0x000504bf) main_mobtv_loading_pane_g3_ParamLimits

0x8665,	// (0x000504bf) main_mobtv_loading_pane_g3

0x0002,

0xfb7a,	// (0x000579d4) main_mobtv_loading_pane_g_ParamLimits

0xfb7a,	// (0x000579d4) main_mobtv_loading_pane_g

0xc849,	// (0x000546a3) main_mobtv_loading_pane_t1_ParamLimits

0xc849,	// (0x000546a3) main_mobtv_loading_pane_t1

0xc861,	// (0x000546bb) main_mobtv_loading_pane_t2_ParamLimits

0xc861,	// (0x000546bb) main_mobtv_loading_pane_t2

0x0001,

0xfb81,	// (0x000579db) main_mobtv_loading_pane_t_ParamLimits

0xfb81,	// (0x000579db) main_mobtv_loading_pane_t

0x8678,	// (0x000504d2) wait_bar_pane_cp06_ParamLimits

0x8678,	// (0x000504d2) wait_bar_pane_cp06

0xc885,	// (0x000546df) main_mobtv_programe_curr_pane_t1

0xc893,	// (0x000546ed) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb86,	// (0x000579e0) main_mobtv_programe_curr_pane_t

0xc8a1,	// (0x000546fb) main_mobtv_programe_next_pane_t1

0xc8af,	// (0x00054709) main_mobtv_programe_next_pane_t2

0xc8bd,	// (0x00054717) main_mobtv_programe_next_pane_t3

0x0002,

0xfb8b,	// (0x000579e5) main_mobtv_programe_next_pane_t

0xd53f,	// (0x00055399) bg_popup_mobtv_noti_window_pane

0xc8cb,	// (0x00054725) popup_mobtv_noti_window_g1

0xc8d3,	// (0x0005472d) popup_mobtv_noti_window_t1

0xc8e1,	// (0x0005473b) popup_mobtv_noti_window_t2

0x0001,

0xfb92,	// (0x000579ec) popup_mobtv_noti_window_t

0xe465,	// (0x000562bf) bg_popup_mobtv_noti_window_pane_g1

0xd53f,	// (0x00055399) sc_clock_pane

0xd53f,	// (0x00055399) main_fs_bigclock_pane

0x7dad,	// (0x0004fc07) blid2_tripm_pane_t4_ParamLimits

0x7dad,	// (0x0004fc07) blid2_tripm_pane_t4

0x8687,	// (0x000504e1) sc_clock_pane_g1_ParamLimits

0x8687,	// (0x000504e1) sc_clock_pane_g1

0x8699,	// (0x000504f3) sc_clock_pane_t1_ParamLimits

0x8699,	// (0x000504f3) sc_clock_pane_t1

0x86bb,	// (0x00050515) sc_clock_pane_t2_ParamLimits

0x86bb,	// (0x00050515) sc_clock_pane_t2

0x86d3,	// (0x0005052d) sc_clock_pane_t3_ParamLimits

0x86d3,	// (0x0005052d) sc_clock_pane_t3

0x0004,

0xfb97,	// (0x000579f1) sc_clock_pane_t_ParamLimits

0xfb97,	// (0x000579f1) sc_clock_pane_t

0x90a0,	// (0x00050efa) main_fs_bigclock_indicator_pane_ParamLimits

0x90a0,	// (0x00050efa) main_fs_bigclock_indicator_pane

0x8779,	// (0x000505d3) main_fs_bigclock_pane_g1_ParamLimits

0x8779,	// (0x000505d3) main_fs_bigclock_pane_g1

0x90ac,	// (0x00050f06) main_fs_bigclock_pane_t1_ParamLimits

0x90ac,	// (0x00050f06) main_fs_bigclock_pane_t1

0x90be,	// (0x00050f18) main_fs_bigclock_pane_t2_ParamLimits

0x90be,	// (0x00050f18) main_fs_bigclock_pane_t2

0x90d2,	// (0x00050f2c) main_fs_bigclock_pane_t3_ParamLimits

0x90d2,	// (0x00050f2c) main_fs_bigclock_pane_t3

0x0002,

0xfd28,	// (0x00057b82) main_fs_bigclock_pane_t_ParamLimits

0xfd28,	// (0x00057b82) main_fs_bigclock_pane_t

0xd165,	// (0x00054fbf) main_fs_bigclock_indicator_pane_g1

0xc5ff,	// (0x00054459) ncim_query_content_pane_g2_ParamLimits

0xc5ff,	// (0x00054459) ncim_query_content_pane_g2

0x0001,

0xfb24,	// (0x0005797e) ncim_query_content_pane_g_ParamLimits

0xfb24,	// (0x0005797e) ncim_query_content_pane_g

0x86ec,	// (0x00050546) sc_clock_pane_t4_ParamLimits

0x86ec,	// (0x00050546) sc_clock_pane_t4

0xdf90,	// (0x00055dea) main_radioblah_pane

0xb531,	// (0x0005338b) cell_call4_button_pane_t1_copy1_ParamLimits

0xb531,	// (0x0005338b) cell_call4_button_pane_t1_copy1

0x82e1,	// (0x0005013b) main_ncimui_pane_t1_ParamLimits

0x82e1,	// (0x0005013b) main_ncimui_pane_t1

0x82fb,	// (0x00050155) main_ncimui_pane_t2_ParamLimits

0x82fb,	// (0x00050155) main_ncimui_pane_t2

0x0002,

0xfb1d,	// (0x00057977) main_ncimui_pane_t_ParamLimits

0xfb1d,	// (0x00057977) main_ncimui_pane_t

0xca26,	// (0x00054880) main_radioblah_anim_pane_ParamLimits

0xca26,	// (0x00054880) main_radioblah_anim_pane

0xca37,	// (0x00054891) main_radioblah_info_pane_ParamLimits

0xca37,	// (0x00054891) main_radioblah_info_pane

0xca4b,	// (0x000548a5) main_radioblah_pane_t1_ParamLimits

0xca4b,	// (0x000548a5) main_radioblah_pane_t1

0xca67,	// (0x000548c1) main_radioblah_pane_t2_ParamLimits

0xca67,	// (0x000548c1) main_radioblah_pane_t2

0x0003,

0xfbb8,	// (0x00057a12) main_radioblah_pane_t_ParamLimits

0xfbb8,	// (0x00057a12) main_radioblah_pane_t

0x87d8,	// (0x00050632) main_radioblah_rocker_ctrl_pane_ParamLimits

0x87d8,	// (0x00050632) main_radioblah_rocker_ctrl_pane

0xcaaf,	// (0x00054909) main_radioblah_info_pane_t1_ParamLimits

0xcaaf,	// (0x00054909) main_radioblah_info_pane_t1

0x8830,	// (0x0005068a) main_radioblah_info_pane_t2_ParamLimits

0x8830,	// (0x0005068a) main_radioblah_info_pane_t2

0x0003,

0xfbc1,	// (0x00057a1b) main_radioblah_info_pane_t_ParamLimits

0xfbc1,	// (0x00057a1b) main_radioblah_info_pane_t

0xe465,	// (0x000562bf) main_radioblah_rocker_ctrl_pane_g1

0x88e0,	// (0x0005073a) main_radioblah_rocker_ctrl_pane_g2

0x88e8,	// (0x00050742) main_radioblah_rocker_ctrl_pane_g3

0x88f0,	// (0x0005074a) main_radioblah_rocker_ctrl_pane_g4

0x88f8,	// (0x00050752) main_radioblah_rocker_ctrl_pane_g5

0x8900,	// (0x0005075a) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbca,	// (0x00057a24) main_radioblah_rocker_ctrl_pane_g

0x8063,	// (0x0004febd) main_cset_text2_pane_t1_copy1_ParamLimits

0xb5bb,	// (0x00053415) cam4_image_uncrop_qvga_pane

0xb614,	// (0x0005346e) vid4_image_uncrop_qcif_pane

0xbd7c,	// (0x00053bd6) cam6_image_uncrop_qvga_pane_ParamLimits

0xbd7c,	// (0x00053bd6) cam6_image_uncrop_qvga_pane

0xc306,	// (0x00054160) vid6_image_uncrop_qcif_pane_ParamLimits

0xc306,	// (0x00054160) vid6_image_uncrop_qcif_pane

0xd53f,	// (0x00055399) bg_popup_preview_window_pane_cp03

0xc5b1,	// (0x0005440b) list_cset_text2_pane

0xc5b9,	// (0x00054413) main_cset6_text2_pane_g1

0xc5c1,	// (0x0005441b) main_cset6_text2_pane_t1

0x8908,	// (0x00050762) list_cset_text2_pane_t1_ParamLimits

0x8908,	// (0x00050762) list_cset_text2_pane_t1

0xdf90,	// (0x00055dea) main_radioblah_pane_ParamLimits

0x8620,	// (0x0005047a) main_mobtv_info_pane_t3_ParamLimits

0x8620,	// (0x0005047a) main_mobtv_info_pane_t3

0x87c6,	// (0x00050620) main_radioblah_pane_g1

0x8800,	// (0x0005065a) main_radioblah_info_pane_g1

0x8885,	// (0x000506df) main_radioblah_info_pane_t3_ParamLimits

0x8885,	// (0x000506df) main_radioblah_info_pane_t3

0x29de,	// (0x0004a838) highlight_cell_cale_month_pane_ParamLimits

0x29de,	// (0x0004a838) highlight_cell_cale_month_pane

0xd53f,	// (0x00055399) main_phob_fisheye_pane

0xad60,	// (0x00052bba) scroll_pane_cp0031_ParamLimits

0xad60,	// (0x00052bba) scroll_pane_cp0031

0xc414,	// (0x0005426e) wait_bar_pane_cp08_ParamLimits

0x80e8,	// (0x0004ff42) cset_list_set_pane_copy1_ParamLimits

0xcb09,	// (0x00054963) highlight_cell_cale_month_pane_g1

0x8921,	// (0x0005077b) highlight_cell_cale_month_pane_t1

0xbcf0,	// (0x00053b4a) list_gen_pane_cp01

0xb81e,	// (0x00053678) scroll_pane_01

0x892f,	// (0x00050789) list_single_double_fisheye_pane

0x0867,	// (0x000486c1) list_double_fisheye_pane_g1_ParamLimits

0x0867,	// (0x000486c1) list_double_fisheye_pane_g1

0x0873,	// (0x000486cd) list_double_fisheye_pane_g2_ParamLimits

0x0873,	// (0x000486cd) list_double_fisheye_pane_g2

0x8938,	// (0x00050792) list_double_fisheye_pane_g3_ParamLimits

0x8938,	// (0x00050792) list_double_fisheye_pane_g3

0x0004,

0xfbd7,	// (0x00057a31) list_double_fisheye_pane_g_ParamLimits

0xfbd7,	// (0x00057a31) list_double_fisheye_pane_g

0x08a4,	// (0x000486fe) list_double_fisheye_pane_t1_ParamLimits

0x08a4,	// (0x000486fe) list_double_fisheye_pane_t1

0x08bf,	// (0x00048719) list_double_fisheye_pane_t2_ParamLimits

0x08bf,	// (0x00048719) list_double_fisheye_pane_t2

0x0001,

0xfbe2,	// (0x00057a3c) list_double_fisheye_pane_t_ParamLimits

0xfbe2,	// (0x00057a3c) list_double_fisheye_pane_t

0xd53f,	// (0x00055399) main_call5_pane

0x8717,	// (0x00050571) sc_swipe_pane_ParamLimits

0x8717,	// (0x00050571) sc_swipe_pane

0x8957,	// (0x000507b1) call5_image_pane_ParamLimits

0x8957,	// (0x000507b1) call5_image_pane

0x8974,	// (0x000507ce) call5_swipe_1_pane_ParamLimits

0x8974,	// (0x000507ce) call5_swipe_1_pane

0x8987,	// (0x000507e1) call5_swipe_2_pane_ParamLimits

0x8987,	// (0x000507e1) call5_swipe_2_pane

0x89b2,	// (0x0005080c) popup_call5_audio_first_window_ParamLimits

0x89b2,	// (0x0005080c) popup_call5_audio_first_window

0xe1e4,	// (0x0005603e) call5_swipe_1_pane_g1_ParamLimits

0xe1e4,	// (0x0005603e) call5_swipe_1_pane_g1

0xcb11,	// (0x0005496b) call5_swipe_1_pane_g2_ParamLimits

0xcb11,	// (0x0005496b) call5_swipe_1_pane_g2

0x0001,

0xfbe7,	// (0x00057a41) call5_swipe_1_pane_g_ParamLimits

0xfbe7,	// (0x00057a41) call5_swipe_1_pane_g

0xcb1d,	// (0x00054977) call5_swipe_1_pane_t1_ParamLimits

0xcb1d,	// (0x00054977) call5_swipe_1_pane_t1

0xe1e4,	// (0x0005603e) call5_swipe_2_pane_g1_ParamLimits

0xe1e4,	// (0x0005603e) call5_swipe_2_pane_g1

0xcb32,	// (0x0005498c) call5_swipe_2_pane_g2_ParamLimits

0xcb32,	// (0x0005498c) call5_swipe_2_pane_g2

0x0001,

0xfbec,	// (0x00057a46) call5_swipe_2_pane_g_ParamLimits

0xfbec,	// (0x00057a46) call5_swipe_2_pane_g

0xcb3e,	// (0x00054998) call5_swipe_2_pane_t1_ParamLimits

0xcb3e,	// (0x00054998) call5_swipe_2_pane_t1

0xcb53,	// (0x000549ad) sc_swipe_pane_g1_ParamLimits

0xcb53,	// (0x000549ad) sc_swipe_pane_g1

0xcb60,	// (0x000549ba) sc_swipe_pane_g2_ParamLimits

0xcb60,	// (0x000549ba) sc_swipe_pane_g2

0x0001,

0xfbf1,	// (0x00057a4b) sc_swipe_pane_g_ParamLimits

0xfbf1,	// (0x00057a4b) sc_swipe_pane_g

0xcb6c,	// (0x000549c6) sc_swipe_pane_t1_ParamLimits

0xcb6c,	// (0x000549c6) sc_swipe_pane_t1

0xd53f,	// (0x00055399) main_cmail_launcher_pane

0x89c3,	// (0x0005081d) aid_size_cell_cmail_l_ParamLimits

0x89c3,	// (0x0005081d) aid_size_cell_cmail_l

0x89d1,	// (0x0005082b) grid_cmail_l_pane_ParamLimits

0x89d1,	// (0x0005082b) grid_cmail_l_pane

0x89eb,	// (0x00050845) cell_cmail_l_pane_ParamLimits

0x89eb,	// (0x00050845) cell_cmail_l_pane

0xcb81,	// (0x000549db) cell_cmail_l_pane_g1_ParamLimits

0xcb81,	// (0x000549db) cell_cmail_l_pane_g1

0xcb8d,	// (0x000549e7) cell_cmail_l_pane_t1_ParamLimits

0xcb8d,	// (0x000549e7) cell_cmail_l_pane_t1

0xcba3,	// (0x000549fd) cell_cmail_l_pane_t2_ParamLimits

0xcba3,	// (0x000549fd) cell_cmail_l_pane_t2

0x0001,

0xfbf6,	// (0x00057a50) cell_cmail_l_pane_t_ParamLimits

0xfbf6,	// (0x00057a50) cell_cmail_l_pane_t

0xdf90,	// (0x00055dea) grid_highlight_pane_cp018_ParamLimits

0xdf90,	// (0x00055dea) grid_highlight_pane_cp018

0x0e98,	// (0x00048cf2) main2_pane_ParamLimits

0x0e98,	// (0x00048cf2) main2_pane

0xe2ee,	// (0x00056148) popup_sp_fs_action_menu_bg_pane_g1

0xe2f6,	// (0x00056150) popup_sp_fs_action_menu_bg_pane_g2

0xe2fe,	// (0x00056158) popup_sp_fs_action_menu_bg_pane_g3

0xe306,	// (0x00056160) popup_sp_fs_action_menu_bg_pane_g4

0xe30e,	// (0x00056168) popup_sp_fs_action_menu_bg_pane_g5

0xe316,	// (0x00056170) popup_sp_fs_action_menu_bg_pane_g6

0xe31e,	// (0x00056178) popup_sp_fs_action_menu_bg_pane_g7

0xe326,	// (0x00056180) popup_sp_fs_action_menu_bg_pane_g8

0xe32e,	// (0x00056188) popup_sp_fs_action_menu_bg_pane_g9

0xe336,	// (0x00056190) popup_sp_fs_action_menu_bg_pane_g10

0xe336,	// (0x00056190) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf105,	// (0x00056f5f) popup_sp_fs_action_menu_bg_pane_g

0xe1e4,	// (0x0005603e) list_medium_line_x2_t3_g3_g1_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x2_t3_g3_g1

0xe1e4,	// (0x0005603e) list_medium_line_x2_t3_g3_g2_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x2_t3_g3_g2

0xe1e4,	// (0x0005603e) list_medium_line_x2_t3_g3_g3_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1b3,	// (0x0005700d) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1b3,	// (0x0005700d) list_medium_line_x2_t3_g3_g

0xe437,	// (0x00056291) list_medium_line_x2_t3_g3_t1_ParamLimits

0xe437,	// (0x00056291) list_medium_line_x2_t3_g3_t1

0xe437,	// (0x00056291) list_medium_line_x2_t3_g3_t2_ParamLimits

0xe437,	// (0x00056291) list_medium_line_x2_t3_g3_t2

0xe437,	// (0x00056291) list_medium_line_x2_t3_g3_t3_ParamLimits

0xe437,	// (0x00056291) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1ba,	// (0x00057014) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1ba,	// (0x00057014) list_medium_line_x2_t3_g3_t

0xe1e4,	// (0x0005603e) list_medium_line_x2_t3_g2_g1_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x2_t3_g2_g1

0xe1e4,	// (0x0005603e) list_medium_line_x2_t3_g2_g2_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1c1,	// (0x0005701b) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1c1,	// (0x0005701b) list_medium_line_x2_t3_g2_g

0xe437,	// (0x00056291) list_medium_line_x2_t3_g2_t1_ParamLimits

0xe437,	// (0x00056291) list_medium_line_x2_t3_g2_t1

0xe437,	// (0x00056291) list_medium_line_x2_t3_g2_t2_ParamLimits

0xe437,	// (0x00056291) list_medium_line_x2_t3_g2_t2

0xe437,	// (0x00056291) list_medium_line_x2_t3_g2_t3_ParamLimits

0xe437,	// (0x00056291) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1ba,	// (0x00057014) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1ba,	// (0x00057014) list_medium_line_x2_t3_g2_t

0xe1e4,	// (0x0005603e) list_medium_line_x2_t4_g4_g1_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x2_t4_g4_g1

0xe1e4,	// (0x0005603e) list_medium_line_x2_t4_g4_g2_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x2_t4_g4_g2

0xe1e4,	// (0x0005603e) list_medium_line_x2_t4_g4_g3_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x2_t4_g4_g3

0xe1e4,	// (0x0005603e) list_medium_line_x2_t4_g4_g4_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c6,	// (0x00057020) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c6,	// (0x00057020) list_medium_line_x2_t4_g4_g

0xe437,	// (0x00056291) list_medium_line_x2_t4_g4_t1_ParamLimits

0xe437,	// (0x00056291) list_medium_line_x2_t4_g4_t1

0xe437,	// (0x00056291) list_medium_line_x2_t4_g4_t2_ParamLimits

0xe437,	// (0x00056291) list_medium_line_x2_t4_g4_t2

0xe437,	// (0x00056291) list_medium_line_x2_t4_g4_t3_ParamLimits

0xe437,	// (0x00056291) list_medium_line_x2_t4_g4_t3

0xe437,	// (0x00056291) list_medium_line_x2_t4_g4_t4_ParamLimits

0xe437,	// (0x00056291) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1cf,	// (0x00057029) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1cf,	// (0x00057029) list_medium_line_x2_t4_g4_t

0xe1e4,	// (0x0005603e) list_medium_line_x2_t2_g4_g1_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x2_t2_g4_g1

0xe1e4,	// (0x0005603e) list_medium_line_x2_t2_g4_g2_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x2_t2_g4_g2

0xe1e4,	// (0x0005603e) list_medium_line_x2_t2_g4_g3_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x2_t2_g4_g3

0xe1e4,	// (0x0005603e) list_medium_line_x2_t2_g4_g4_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c6,	// (0x00057020) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c6,	// (0x00057020) list_medium_line_x2_t2_g4_g

0xe437,	// (0x00056291) list_medium_line_x2_t2_g4_t1_ParamLimits

0xe437,	// (0x00056291) list_medium_line_x2_t2_g4_t1

0xe437,	// (0x00056291) list_medium_line_x2_t2_g4_t2_ParamLimits

0xe437,	// (0x00056291) list_medium_line_x2_t2_g4_t2

0x0001,

0xf196,	// (0x00056ff0) list_medium_line_x2_t2_g4_t_ParamLimits

0xf196,	// (0x00056ff0) list_medium_line_x2_t2_g4_t

0xe1e4,	// (0x0005603e) list_medium_line_x2_t2_g3_g1_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x2_t2_g3_g1

0xe1e4,	// (0x0005603e) list_medium_line_x2_t2_g3_g2_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x2_t2_g3_g2

0xe1e4,	// (0x0005603e) list_medium_line_x2_t2_g3_g3_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1b3,	// (0x0005700d) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1b3,	// (0x0005700d) list_medium_line_x2_t2_g3_g

0xe437,	// (0x00056291) list_medium_line_x2_t2_g3_t1_ParamLimits

0xe437,	// (0x00056291) list_medium_line_x2_t2_g3_t1

0xe437,	// (0x00056291) list_medium_line_x2_t2_g3_t2_ParamLimits

0xe437,	// (0x00056291) list_medium_line_x2_t2_g3_t2

0x0001,

0xf196,	// (0x00056ff0) list_medium_line_x2_t2_g3_t_ParamLimits

0xf196,	// (0x00056ff0) list_medium_line_x2_t2_g3_t

0x2b30,	// (0x0004a98a) main_sp_fs_list_pane_ParamLimits

0x2b30,	// (0x0004a98a) main_sp_fs_list_pane

0xaa8f,	// (0x000528e9) sp_fs_scroll_pane_ParamLimits

0xaa8f,	// (0x000528e9) sp_fs_scroll_pane

0xe9a0,	// (0x000567fa) list_medium_line_x2_t3_t1

0xe9a0,	// (0x000567fa) list_medium_line_x2_t3_t2

0xe9a0,	// (0x000567fa) list_medium_line_x2_t3_t3

0x0002,

0xf27c,	// (0x000570d6) list_medium_line_x2_t3_t

0xe9a0,	// (0x000567fa) list_medium_line_x3_t4_t1

0xe9a0,	// (0x000567fa) list_medium_line_x3_t4_t2

0xe9a0,	// (0x000567fa) list_medium_line_x3_t4_t3

0xe9a0,	// (0x000567fa) list_medium_line_x3_t4_t4

0x0003,

0xf283,	// (0x000570dd) list_medium_line_x3_t4_t

0xe9a0,	// (0x000567fa) list_medium_line_x4_t5_t1

0xe9a0,	// (0x000567fa) list_medium_line_x4_t5_t2

0xe9a0,	// (0x000567fa) list_medium_line_x4_t5_t3

0xe9a0,	// (0x000567fa) list_medium_line_x4_t5_t4

0xe9a0,	// (0x000567fa) list_medium_line_x4_t5_t5

0x0004,

0xf28c,	// (0x000570e6) list_medium_line_x4_t5_t

0xe1e4,	// (0x0005603e) list_medium_line_t4_g4_g1_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_t4_g4_g1

0xe1e4,	// (0x0005603e) list_medium_line_t4_g4_g2_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_t4_g4_g2

0xe1e4,	// (0x0005603e) list_medium_line_t4_g4_g3_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_t4_g4_g3

0xe1e4,	// (0x0005603e) list_medium_line_t4_g4_g4_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_t4_g4_g4

0x0003,

0xf1c6,	// (0x00057020) list_medium_line_t4_g4_g_ParamLimits

0xf1c6,	// (0x00057020) list_medium_line_t4_g4_g

0xe437,	// (0x00056291) list_medium_line_t4_g4_t1_ParamLimits

0xe437,	// (0x00056291) list_medium_line_t4_g4_t1

0xe437,	// (0x00056291) list_medium_line_t4_g4_t2_ParamLimits

0xe437,	// (0x00056291) list_medium_line_t4_g4_t2

0xe437,	// (0x00056291) list_medium_line_t4_g4_t3_ParamLimits

0xe437,	// (0x00056291) list_medium_line_t4_g4_t3

0xe437,	// (0x00056291) list_medium_line_t4_g4_t4_ParamLimits

0xe437,	// (0x00056291) list_medium_line_t4_g4_t4

0x0003,

0xf1cf,	// (0x00057029) list_medium_line_t4_g4_t_ParamLimits

0xf1cf,	// (0x00057029) list_medium_line_t4_g4_t

0x2bcb,	// (0x0004aa25) chi_dic_find_pane_g1

0x4b47,	// (0x0004c9a1) main_tport_pane

0xe9a0,	// (0x000567fa) list_medium_line_plain_t1

0xe1e4,	// (0x0005603e) list_medium_line_t2_g2_g1_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_t2_g2_g1

0xe1e4,	// (0x0005603e) list_medium_line_t2_g2_g2_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_t2_g2_g2

0x0001,

0xf1c1,	// (0x0005701b) list_medium_line_t2_g2_g_ParamLimits

0xf1c1,	// (0x0005701b) list_medium_line_t2_g2_g

0xe437,	// (0x00056291) list_medium_line_t2_g2_t1_ParamLimits

0xe437,	// (0x00056291) list_medium_line_t2_g2_t1

0xe437,	// (0x00056291) list_medium_line_t2_g2_t2_ParamLimits

0xe437,	// (0x00056291) list_medium_line_t2_g2_t2

0x0001,

0xf196,	// (0x00056ff0) list_medium_line_t2_g2_t_ParamLimits

0xf196,	// (0x00056ff0) list_medium_line_t2_g2_t

0xbd63,	// (0x00053bbd) aid_sp_fs_list_icon_a_sm

0xbd6b,	// (0x00053bc5) aid_sp_fs_list_icon_d

0xc096,	// (0x00053ef0) aid_sp_fs_text_primary

0xbd73,	// (0x00053bcd) aid_sp_fs_text_secondary

0xd53f,	// (0x00055399) list_medium_line

0xd53f,	// (0x00055399) list_medium_line_g2

0xd53f,	// (0x00055399) list_medium_line_g3

0xd53f,	// (0x00055399) list_medium_line_plain

0xd53f,	// (0x00055399) list_medium_line_plain_t2

0xd53f,	// (0x00055399) list_medium_line_plain_t3

0xd53f,	// (0x00055399) list_medium_line_right_icon

0xd53f,	// (0x00055399) list_medium_line_right_iconx2

0xd53f,	// (0x00055399) list_medium_line_t2

0xd53f,	// (0x00055399) list_medium_line_t2_g2

0xd53f,	// (0x00055399) list_medium_line_t2_g3

0xd53f,	// (0x00055399) list_medium_line_t2_right_icon

0xd53f,	// (0x00055399) list_medium_line_t2_right_iconx2

0xd53f,	// (0x00055399) list_medium_line_t3

0xd53f,	// (0x00055399) list_medium_line_t3_g2

0xd53f,	// (0x00055399) list_medium_line_t3_g3

0xd53f,	// (0x00055399) list_medium_line_t3_right_iconx2

0xd53f,	// (0x00055399) list_medium_line_t4_g4

0xd53f,	// (0x00055399) list_medium_line_x2

0xd53f,	// (0x00055399) list_medium_line_x2_t2_g2

0xd53f,	// (0x00055399) list_medium_line_x2_t2_g3

0xd53f,	// (0x00055399) list_medium_line_x2_t2_g4

0xd53f,	// (0x00055399) list_medium_line_x2_t3

0xd53f,	// (0x00055399) list_medium_line_x2_t3_g2

0xd53f,	// (0x00055399) list_medium_line_x2_t3_g3

0xd53f,	// (0x00055399) list_medium_line_x2_t3_g4

0xd53f,	// (0x00055399) list_medium_line_x2_t4_g2

0xd53f,	// (0x00055399) list_medium_line_x2_t4_g4

0xd53f,	// (0x00055399) list_medium_line_x3

0xd53f,	// (0x00055399) list_medium_line_x3_t4

0xd53f,	// (0x00055399) list_medium_line_x3_t4_g4

0xd53f,	// (0x00055399) list_medium_line_x4_t4

0xd53f,	// (0x00055399) list_medium_line_x4_t4_g7

0xd53f,	// (0x00055399) list_medium_line_x4_t5

0x080a,	// (0x00048664) list_single_fs_dyc_pane_ParamLimits

0x080a,	// (0x00048664) list_single_fs_dyc_pane

0xe1e4,	// (0x0005603e) list_medium_line_x4_t4_g7_g1_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x4_t4_g7_g1

0xe1e4,	// (0x0005603e) list_medium_line_x4_t4_g7_g2_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x4_t4_g7_g2

0xe1e4,	// (0x0005603e) list_medium_line_x4_t4_g7_g3_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x4_t4_g7_g3

0xe1e4,	// (0x0005603e) list_medium_line_x4_t4_g7_g4_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x4_t4_g7_g4

0xe1e4,	// (0x0005603e) list_medium_line_x4_t4_g7_g5_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x4_t4_g7_g5

0xe1e4,	// (0x0005603e) list_medium_line_x4_t4_g7_g6_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x4_t4_g7_g6

0xe1f2,	// (0x0005604c) list_medium_line_x4_t4_g7_g7_ParamLimits

0xe1f2,	// (0x0005604c) list_medium_line_x4_t4_g7_g7

0x0006,

0x0089,	// (0x00047ee3) list_medium_line_x4_t4_g7_g_ParamLimits

0x0089,	// (0x00047ee3) list_medium_line_x4_t4_g7_g

0xe437,	// (0x00056291) list_medium_line_x4_t4_g7_t1_ParamLimits

0xe437,	// (0x00056291) list_medium_line_x4_t4_g7_t1

0xe437,	// (0x00056291) list_medium_line_x4_t4_g7_t2_ParamLimits

0xe437,	// (0x00056291) list_medium_line_x4_t4_g7_t2

0xe437,	// (0x00056291) list_medium_line_x4_t4_g7_t3_ParamLimits

0xe437,	// (0x00056291) list_medium_line_x4_t4_g7_t3

0xef68,	// (0x00056dc2) list_medium_line_x4_t4_g7_t4_ParamLimits

0xef68,	// (0x00056dc2) list_medium_line_x4_t4_g7_t4

0xef68,	// (0x00056dc2) list_medium_line_x4_t4_g7_t5_ParamLimits

0xef68,	// (0x00056dc2) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb0d,	// (0x00057967) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb0d,	// (0x00057967) list_medium_line_x4_t4_g7_t

0x084a,	// (0x000486a4) list_single_dyc_row_pane_ParamLimits

0x084a,	// (0x000486a4) list_single_dyc_row_pane

0x8944,	// (0x0005079e) call5_gesture_pane_ParamLimits

0x8944,	// (0x0005079e) call5_gesture_pane

0x899a,	// (0x000507f4) call5_windows_pane_ParamLimits

0x899a,	// (0x000507f4) call5_windows_pane

0x8a05,	// (0x0005085f) call5_swipe_1_pane_cp_ParamLimits

0x8a05,	// (0x0005085f) call5_swipe_1_pane_cp

0x8a11,	// (0x0005086b) call5_swipe_2_pane_cp_ParamLimits

0x8a11,	// (0x0005086b) call5_swipe_2_pane_cp

0xe42f,	// (0x00056289) call5_image_pane_cp

0x8a1d,	// (0x00050877) popup_call5_audio_first_window_cp_ParamLimits

0x8a1d,	// (0x00050877) popup_call5_audio_first_window_cp

0xcb53,	// (0x000549ad) call5_swipe_1_pane_g1_cp_ParamLimits

0xcb53,	// (0x000549ad) call5_swipe_1_pane_g1_cp

0xcbc0,	// (0x00054a1a) call5_swipe_1_pane_g2_cp

0xcb6c,	// (0x000549c6) call5_swipe_1_pane_t1_cp_ParamLimits

0xcb6c,	// (0x000549c6) call5_swipe_1_pane_t1_cp

0xcb53,	// (0x000549ad) call5_swipe_2_pane_g1_cp_ParamLimits

0xcb53,	// (0x000549ad) call5_swipe_2_pane_g1_cp

0xcbc8,	// (0x00054a22) call5_swipe_2_pane_g2_cp

0xcbd0,	// (0x00054a2a) call5_swipe_2_pane_t1_cp_ParamLimits

0xcbd0,	// (0x00054a2a) call5_swipe_2_pane_t1_cp

0xdf90,	// (0x00055dea) main_sp_fs_email_pane

0xcbe5,	// (0x00054a3f) main_sp_fs_listscroll_pane_te

0x08e1,	// (0x0004873b) popup_sp_fs_action_menu_pane_ParamLimits

0x08e1,	// (0x0004873b) popup_sp_fs_action_menu_pane

0xe465,	// (0x000562bf) bg_sp_fs_ctrlbar_pane_g1

0xcbee,	// (0x00054a48) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xcbf7,	// (0x00054a51) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xcc00,	// (0x00054a5a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe465,	// (0x000562bf) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbfb,	// (0x00057a55) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x50c0,	// (0x0004cf1a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x50c0,	// (0x0004cf1a) bg_sp_fs_ctrlbar_ddmenu_pane

0xcc09,	// (0x00054a63) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xcc09,	// (0x00054a63) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xcc15,	// (0x00054a6f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xcc15,	// (0x00054a6f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc04,	// (0x00057a5e) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc04,	// (0x00057a5e) main_sp_fs_ctrlbar_ddmenu_pane_g

0xcc21,	// (0x00054a7b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xcc21,	// (0x00054a7b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe465,	// (0x000562bf) list_medium_line_t2_right_icon_g1

0xe9a0,	// (0x000567fa) list_medium_line_t2_right_icon_t1

0xe9a0,	// (0x000567fa) list_medium_line_t2_right_icon_t2

0x0001,

0xfc09,	// (0x00057a63) list_medium_line_t2_right_icon_t

0xef7c,	// (0x00056dd6) bg_sp_fs_ctrlbar_pane_ParamLimits

0xef7c,	// (0x00056dd6) bg_sp_fs_ctrlbar_pane

0x8a73,	// (0x000508cd) main_sp_fs_ctrlbar_button_pane_cp01

0x8a7d,	// (0x000508d7) main_sp_fs_ctrlbar_ddmenu_pane

0xcc73,	// (0x00054acd) main_sp_fs_ctrlbar_pane_g1

0xcc7f,	// (0x00054ad9) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc0e,	// (0x00057a68) main_sp_fs_ctrlbar_pane_g

0x8abb,	// (0x00050915) main_sp_fs_ctrlbar_pane_t1

0x8afa,	// (0x00050954) main_sp_fs_ctrlbar_pane

0x8b1e,	// (0x00050978) main_sp_fs_listscroll_pane_te_cp01

0x0923,	// (0x0004877d) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0923,	// (0x0004877d) popup_sp_fs_action_menu_pane_cp01

0xdf90,	// (0x00055dea) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xdf90,	// (0x00055dea) bg_sp_fs_highlight_list_pane_cp01

0xbd8a,	// (0x00053be4) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xbd8a,	// (0x00053be4) sp_fs_action_menu_list_gene_pane_g1

0xcca6,	// (0x00054b00) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xcca6,	// (0x00054b00) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc1c,	// (0x00057a76) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc1c,	// (0x00057a76) sp_fs_action_menu_list_gene_pane_g

0xbd99,	// (0x00053bf3) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xbd99,	// (0x00053bf3) sp_fs_action_menu_list_gene_pane_t1

0xbdb1,	// (0x00053c0b) sp_fs_action_menu_list_gene_pane_ParamLimits

0xbdb1,	// (0x00053c0b) sp_fs_action_menu_list_gene_pane

0xccb3,	// (0x00054b0d) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xccb3,	// (0x00054b0d) popup_sp_fs_action_menu_bg_pane

0xbdd0,	// (0x00053c2a) sp_fs_action_menu_list_pane_ParamLimits

0xbdd0,	// (0x00053c2a) sp_fs_action_menu_list_pane

0x0948,	// (0x000487a2) sp_fs_scroll_pane_cp01_ParamLimits

0x0948,	// (0x000487a2) sp_fs_scroll_pane_cp01

0xe9a0,	// (0x000567fa) list_medium_line_plain_t2_t1

0xe9a0,	// (0x000567fa) list_medium_line_plain_t2_t2

0x0001,

0xfc09,	// (0x00057a63) list_medium_line_plain_t2_t

0xe9a0,	// (0x000567fa) list_medium_line_plain_t3_t1

0xe9a0,	// (0x000567fa) list_medium_line_plain_t3_t2

0xe9a0,	// (0x000567fa) list_medium_line_plain_t3_t3

0x0002,

0xf27c,	// (0x000570d6) list_medium_line_plain_t3_t

0xe1e4,	// (0x0005603e) list_medium_line_x2_t2_g2_g1_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x2_t2_g2_g1

0xe1e4,	// (0x0005603e) list_medium_line_x2_t2_g2_g2_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1c1,	// (0x0005701b) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1c1,	// (0x0005701b) list_medium_line_x2_t2_g2_g

0xe437,	// (0x00056291) list_medium_line_x2_t2_g2_t1_ParamLimits

0xe437,	// (0x00056291) list_medium_line_x2_t2_g2_t1

0xe437,	// (0x00056291) list_medium_line_x2_t2_g2_t2_ParamLimits

0xe437,	// (0x00056291) list_medium_line_x2_t2_g2_t2

0x0001,

0xf196,	// (0x00056ff0) list_medium_line_x2_t2_g2_t_ParamLimits

0xf196,	// (0x00056ff0) list_medium_line_x2_t2_g2_t

0xe1e4,	// (0x0005603e) list_medium_line_x2_t4_g2_g1_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x2_t4_g2_g1

0xe1e4,	// (0x0005603e) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1c1,	// (0x0005701b) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1c1,	// (0x0005701b) list_medium_line_x2_t4_g2_g

0xe437,	// (0x00056291) list_medium_line_x2_t4_g2_t1_ParamLimits

0xe437,	// (0x00056291) list_medium_line_x2_t4_g2_t1

0xe437,	// (0x00056291) list_medium_line_x2_t4_g2_t2_ParamLimits

0xe437,	// (0x00056291) list_medium_line_x2_t4_g2_t2

0xe437,	// (0x00056291) list_medium_line_x2_t4_g2_t3_ParamLimits

0xe437,	// (0x00056291) list_medium_line_x2_t4_g2_t3

0xe437,	// (0x00056291) list_medium_line_x2_t4_g2_t4_ParamLimits

0xe437,	// (0x00056291) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1cf,	// (0x00057029) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1cf,	// (0x00057029) list_medium_line_x2_t4_g2_t

0xe465,	// (0x000562bf) list_medium_line_t3_right_iconx2_g1

0xe465,	// (0x000562bf) list_medium_line_t3_right_iconx2_g2

0xe465,	// (0x000562bf) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf39d,	// (0x000571f7) list_medium_line_t3_right_iconx2_g

0xe9a0,	// (0x000567fa) list_medium_line_t3_right_iconx2_t1

0xe9a0,	// (0x000567fa) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc09,	// (0x00057a63) list_medium_line_t3_right_iconx2_t

0xe1e4,	// (0x0005603e) list_medium_line_x3_t4_g4_g1_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x3_t4_g4_g1

0xe1e4,	// (0x0005603e) list_medium_line_x3_t4_g4_g2_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x3_t4_g4_g2

0xe1e4,	// (0x0005603e) list_medium_line_x3_t4_g4_g3_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x3_t4_g4_g3

0xe1e4,	// (0x0005603e) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c6,	// (0x00057020) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c6,	// (0x00057020) list_medium_line_x3_t4_g4_g

0xe437,	// (0x00056291) list_medium_line_x3_t4_g4_t1_ParamLimits

0xe437,	// (0x00056291) list_medium_line_x3_t4_g4_t1

0xe437,	// (0x00056291) list_medium_line_x3_t4_g4_t2_ParamLimits

0xe437,	// (0x00056291) list_medium_line_x3_t4_g4_t2

0xe437,	// (0x00056291) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe437,	// (0x00056291) list_medium_line_x3_t4_g4_t3

0xe437,	// (0x00056291) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe437,	// (0x00056291) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1cf,	// (0x00057029) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1cf,	// (0x00057029) list_medium_line_x3_t4_g4_t

0x096e,	// (0x000487c8) list_single_dyc_row_text_pane_t1_ParamLimits

0x096e,	// (0x000487c8) list_single_dyc_row_text_pane_t1

0x09b7,	// (0x00048811) list_single_dyc_row_text_pane_t2_ParamLimits

0x09b7,	// (0x00048811) list_single_dyc_row_text_pane_t2

0xbdf0,	// (0x00053c4a) list_single_dyc_row_text_pane_t3_ParamLimits

0xbdf0,	// (0x00053c4a) list_single_dyc_row_text_pane_t3

0x0005,

0xfc21,	// (0x00057a7b) list_single_dyc_row_text_pane_t_ParamLimits

0xfc21,	// (0x00057a7b) list_single_dyc_row_text_pane_t

0xbe14,	// (0x00053c6e) list_single_dyc_row_pane_g1_ParamLimits

0xbe14,	// (0x00053c6e) list_single_dyc_row_pane_g1

0xbe20,	// (0x00053c7a) list_single_dyc_row_pane_g2_ParamLimits

0xbe20,	// (0x00053c7a) list_single_dyc_row_pane_g2

0xbe2c,	// (0x00053c86) list_single_dyc_row_pane_g3_ParamLimits

0xbe2c,	// (0x00053c86) list_single_dyc_row_pane_g3

0xbe38,	// (0x00053c92) list_single_dyc_row_pane_g4_ParamLimits

0xbe38,	// (0x00053c92) list_single_dyc_row_pane_g4

0x0003,

0xfc2e,	// (0x00057a88) list_single_dyc_row_pane_g_ParamLimits

0xfc2e,	// (0x00057a88) list_single_dyc_row_pane_g

0xbe44,	// (0x00053c9e) list_single_dyc_row_text_pane_ParamLimits

0xbe44,	// (0x00053c9e) list_single_dyc_row_text_pane

0xd53f,	// (0x00055399) bg_sp_fs_scroll_pane

0xccc1,	// (0x00054b1b) thumb_sp_fs_scroll_pane

0xe1e4,	// (0x0005603e) list_medium_line_g1_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_g1

0xe437,	// (0x00056291) list_medium_line_t1_ParamLimits

0xe437,	// (0x00056291) list_medium_line_t1

0xe1e4,	// (0x0005603e) list_medium_line_x2_g1_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x2_g1

0xe1e4,	// (0x0005603e) list_medium_line_x2_g2_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x2_g2

0x0001,

0xf1c1,	// (0x0005701b) list_medium_line_x2_g_ParamLimits

0xf1c1,	// (0x0005701b) list_medium_line_x2_g

0xe437,	// (0x00056291) list_medium_line_x2_t1_ParamLimits

0xe437,	// (0x00056291) list_medium_line_x2_t1

0xe1e4,	// (0x0005603e) list_medium_line_x3_g1_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x3_g1

0xccca,	// (0x00054b24) list_medium_line_x3_g2_ParamLimits

0xccca,	// (0x00054b24) list_medium_line_x3_g2

0x0001,

0xfc37,	// (0x00057a91) list_medium_line_x3_g_ParamLimits

0xfc37,	// (0x00057a91) list_medium_line_x3_g

0xccd8,	// (0x00054b32) list_medium_line_x3_t1_ParamLimits

0xccd8,	// (0x00054b32) list_medium_line_x3_t1

0xccec,	// (0x00054b46) thumb_sp_fs_scroll_pane_g1

0xccf5,	// (0x00054b4f) thumb_sp_fs_scroll_pane_g2

0xccfe,	// (0x00054b58) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc3c,	// (0x00057a96) thumb_sp_fs_scroll_pane_g

0xccec,	// (0x00054b46) bg_sp_fs_scroll_pane_g1

0xccf5,	// (0x00054b4f) bg_sp_fs_scroll_pane_g2

0xccfe,	// (0x00054b58) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc3c,	// (0x00057a96) bg_sp_fs_scroll_pane_g

0xe1e4,	// (0x0005603e) list_medium_line_x2_t3_g4_g1_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x2_t3_g4_g1

0xe1e4,	// (0x0005603e) list_medium_line_x2_t3_g4_g2_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x2_t3_g4_g2

0xe1e4,	// (0x0005603e) list_medium_line_x2_t3_g4_g3_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x2_t3_g4_g3

0xe1e4,	// (0x0005603e) list_medium_line_x2_t3_g4_g4_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c6,	// (0x00057020) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c6,	// (0x00057020) list_medium_line_x2_t3_g4_g

0xe437,	// (0x00056291) list_medium_line_x2_t3_g4_t1_ParamLimits

0xe437,	// (0x00056291) list_medium_line_x2_t3_g4_t1

0xe437,	// (0x00056291) list_medium_line_x2_t3_g4_t2_ParamLimits

0xe437,	// (0x00056291) list_medium_line_x2_t3_g4_t2

0xe437,	// (0x00056291) list_medium_line_x2_t3_g4_t3_ParamLimits

0xe437,	// (0x00056291) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1ba,	// (0x00057014) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1ba,	// (0x00057014) list_medium_line_x2_t3_g4_t

0xe1e4,	// (0x0005603e) list_medium_line_g2_g1_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_g2_g1

0xe1e4,	// (0x0005603e) list_medium_line_g2_g2_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_g2_g2

0x0001,

0xf1c1,	// (0x0005701b) list_medium_line_g2_g_ParamLimits

0xf1c1,	// (0x0005701b) list_medium_line_g2_g

0xe437,	// (0x00056291) list_medium_line_g2_t1_ParamLimits

0xe437,	// (0x00056291) list_medium_line_g2_t1

0xe1e4,	// (0x0005603e) list_medium_line_t3_g2_g1_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_t3_g2_g1

0xe1e4,	// (0x0005603e) list_medium_line_t3_g2_g2_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_t3_g2_g2

0x0001,

0xf1c1,	// (0x0005701b) list_medium_line_t3_g2_g_ParamLimits

0xf1c1,	// (0x0005701b) list_medium_line_t3_g2_g

0xe437,	// (0x00056291) list_medium_line_t3_g2_t1_ParamLimits

0xe437,	// (0x00056291) list_medium_line_t3_g2_t1

0xe437,	// (0x00056291) list_medium_line_t3_g2_t2_ParamLimits

0xe437,	// (0x00056291) list_medium_line_t3_g2_t2

0xe437,	// (0x00056291) list_medium_line_t3_g2_t3_ParamLimits

0xe437,	// (0x00056291) list_medium_line_t3_g2_t3

0x0002,

0xf1ba,	// (0x00057014) list_medium_line_t3_g2_t_ParamLimits

0xf1ba,	// (0x00057014) list_medium_line_t3_g2_t

0xe465,	// (0x000562bf) list_medium_line_right_icon_g1

0xe9a0,	// (0x000567fa) list_medium_line_right_icon_t1

0xe1e4,	// (0x0005603e) list_medium_line_t2_g1_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_t2_g1

0xe437,	// (0x00056291) list_medium_line_t2_t1_ParamLimits

0xe437,	// (0x00056291) list_medium_line_t2_t1

0xe437,	// (0x00056291) list_medium_line_t2_t2_ParamLimits

0xe437,	// (0x00056291) list_medium_line_t2_t2

0x0001,

0xf196,	// (0x00056ff0) list_medium_line_t2_t_ParamLimits

0xf196,	// (0x00056ff0) list_medium_line_t2_t

0xe1e4,	// (0x0005603e) list_medium_line_t3_g1_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_t3_g1

0xe437,	// (0x00056291) list_medium_line_t3_t1_ParamLimits

0xe437,	// (0x00056291) list_medium_line_t3_t1

0xe437,	// (0x00056291) list_medium_line_t3_t2_ParamLimits

0xe437,	// (0x00056291) list_medium_line_t3_t2

0xe437,	// (0x00056291) list_medium_line_t3_t3_ParamLimits

0xe437,	// (0x00056291) list_medium_line_t3_t3

0x0002,

0xf1ba,	// (0x00057014) list_medium_line_t3_t_ParamLimits

0xf1ba,	// (0x00057014) list_medium_line_t3_t

0xe1e4,	// (0x0005603e) list_medium_line_g3_g1_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_g3_g1

0xe1e4,	// (0x0005603e) list_medium_line_g3_g2_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_g3_g2

0xe1e4,	// (0x0005603e) list_medium_line_g3_g3_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_g3_g3

0x0002,

0xf1b3,	// (0x0005700d) list_medium_line_g3_g_ParamLimits

0xf1b3,	// (0x0005700d) list_medium_line_g3_g

0xe437,	// (0x00056291) list_medium_line_g3_t1_ParamLimits

0xe437,	// (0x00056291) list_medium_line_g3_t1

0xe1e4,	// (0x0005603e) list_medium_line_t2_g3_g1_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_t2_g3_g1

0xe1e4,	// (0x0005603e) list_medium_line_t2_g3_g2_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_t2_g3_g2

0xe1e4,	// (0x0005603e) list_medium_line_t2_g3_g3_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_t2_g3_g3

0x0002,

0xf1b3,	// (0x0005700d) list_medium_line_t2_g3_g_ParamLimits

0xf1b3,	// (0x0005700d) list_medium_line_t2_g3_g

0xe437,	// (0x00056291) list_medium_line_t2_g3_t1_ParamLimits

0xe437,	// (0x00056291) list_medium_line_t2_g3_t1

0xe437,	// (0x00056291) list_medium_line_t2_g3_t2_ParamLimits

0xe437,	// (0x00056291) list_medium_line_t2_g3_t2

0x0001,

0xf196,	// (0x00056ff0) list_medium_line_t2_g3_t_ParamLimits

0xf196,	// (0x00056ff0) list_medium_line_t2_g3_t

0xe1e4,	// (0x0005603e) list_medium_line_t3_g3_g1_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_t3_g3_g1

0xe1e4,	// (0x0005603e) list_medium_line_t3_g3_g2_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_t3_g3_g2

0xe1e4,	// (0x0005603e) list_medium_line_t3_g3_g3_ParamLimits

0xe1e4,	// (0x0005603e) list_medium_line_t3_g3_g3

0x0002,

0xf1b3,	// (0x0005700d) list_medium_line_t3_g3_g_ParamLimits

0xf1b3,	// (0x0005700d) list_medium_line_t3_g3_g

0xe437,	// (0x00056291) list_medium_line_t3_g3_t1_ParamLimits

0xe437,	// (0x00056291) list_medium_line_t3_g3_t1

0xe437,	// (0x00056291) list_medium_line_t3_g3_t2_ParamLimits

0xe437,	// (0x00056291) list_medium_line_t3_g3_t2

0xe437,	// (0x00056291) list_medium_line_t3_g3_t3_ParamLimits

0xe437,	// (0x00056291) list_medium_line_t3_g3_t3

0x0002,

0xf1ba,	// (0x00057014) list_medium_line_t3_g3_t_ParamLimits

0xf1ba,	// (0x00057014) list_medium_line_t3_g3_t

0xe465,	// (0x000562bf) list_medium_line_right_iconx2_g1

0xe465,	// (0x000562bf) list_medium_line_right_iconx2_g2

0x0001,

0xf398,	// (0x000571f2) list_medium_line_right_iconx2_g

0xe9a0,	// (0x000567fa) list_medium_line_right_iconx2_t1

0xe465,	// (0x000562bf) list_medium_line_t2_right_iconx2_g1

0xe465,	// (0x000562bf) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf398,	// (0x000571f2) list_medium_line_t2_right_iconx2_g

0xe9a0,	// (0x000567fa) list_medium_line_t2_right_iconx2_t1

0xe9a0,	// (0x000567fa) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc09,	// (0x00057a63) list_medium_line_t2_right_iconx2_t

0xe9a0,	// (0x000567fa) list_medium_line_x4_t4_t1

0xe9a0,	// (0x000567fa) list_medium_line_x4_t4_t2

0xe9a0,	// (0x000567fa) list_medium_line_x4_t4_t3

0xe9a0,	// (0x000567fa) list_medium_line_x4_t4_t4

0x0003,

0xf283,	// (0x000570dd) list_medium_line_x4_t4_t

0x8b81,	// (0x000509db) tport_appsw_pane_ParamLimits

0x8b81,	// (0x000509db) tport_appsw_pane

0x8b99,	// (0x000509f3) tport_contact_pane_ParamLimits

0x8b99,	// (0x000509f3) tport_contact_pane

0x8bb1,	// (0x00050a0b) tport_listscroll_pane_ParamLimits

0x8bb1,	// (0x00050a0b) tport_listscroll_pane

0x8bcb,	// (0x00050a25) cell_tport_appsw_pane_ParamLimits

0x8bcb,	// (0x00050a25) cell_tport_appsw_pane

0xef46,	// (0x00056da0) tport_appsw_pane_g1_ParamLimits

0xef46,	// (0x00056da0) tport_appsw_pane_g1

0xcd07,	// (0x00054b61) tport_contact_pane_g1

0xc685,	// (0x000544df) tport_contact_pane_t1

0xcd10,	// (0x00054b6a) tport_contact_pane_t2

0x0001,

0xfc43,	// (0x00057a9d) tport_contact_pane_t

0xcd1e,	// (0x00054b78) list_tport_pane

0xcd27,	// (0x00054b81) scroll_pane_cp_030

0x8c13,	// (0x00050a6d) cell_tport_appsw_pane_g1

0x8c23,	// (0x00050a7d) cell_tport_appsw_pane_t1

0x8c31,	// (0x00050a8b) grid_highlight_pane_cp019

0x8c39,	// (0x00050a93) list_tport_double_graphic_pane_ParamLimits

0x8c39,	// (0x00050a93) list_tport_double_graphic_pane

0xdf90,	// (0x00055dea) list_highlight_pane_cp023_ParamLimits

0xdf90,	// (0x00055dea) list_highlight_pane_cp023

0x8c46,	// (0x00050aa0) list_tport_double_graphic_pane_g1_ParamLimits

0x8c46,	// (0x00050aa0) list_tport_double_graphic_pane_g1

0x8c53,	// (0x00050aad) list_tport_double_graphic_pane_t1_ParamLimits

0x8c53,	// (0x00050aad) list_tport_double_graphic_pane_t1

0x8c68,	// (0x00050ac2) list_tport_double_graphic_pane_t2_ParamLimits

0x8c68,	// (0x00050ac2) list_tport_double_graphic_pane_t2

0x0001,

0xfc4f,	// (0x00057aa9) list_tport_double_graphic_pane_t_ParamLimits

0xfc4f,	// (0x00057aa9) list_tport_double_graphic_pane_t

0xd53f,	// (0x00055399) main_cale_note_pane

0x6f02,	// (0x0004ed5c) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6f02,	// (0x0004ed5c) cell_vitu2_function_top_wide_pane_cp01

0x8634,	// (0x0005048e) wait_bar_pane_cp05_ParamLimits

0xdf90,	// (0x00055dea) listscroll_cmail_pane

0xcd38,	// (0x00054b92) list_cmail_pane

0x8c7a,	// (0x00050ad4) list_cmail_body_pane

0x8c8f,	// (0x00050ae9) list_single_cmail_header_caption_pane

0x8ca5,	// (0x00050aff) list_single_cmail_header_detail_pane_ParamLimits

0x8ca5,	// (0x00050aff) list_single_cmail_header_detail_pane

0xcd4f,	// (0x00054ba9) list_single_cmail_header_caption_pane_t1

0x0aec,	// (0x00048946) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0aec,	// (0x00048946) list_single_cmail_header_detail_pane_g1

0xbe63,	// (0x00053cbd) list_single_cmail_header_detail_pane_g2_ParamLimits

0xbe63,	// (0x00053cbd) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc54,	// (0x00057aae) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc54,	// (0x00057aae) list_single_cmail_header_detail_pane_g

0x0b04,	// (0x0004895e) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0b04,	// (0x0004895e) list_single_cmail_header_detail_pane_t1

0x0b42,	// (0x0004899c) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0b42,	// (0x0004899c) list_single_cmail_header_editor_pane_bg

0xc7e2,	// (0x0005463c) list_cmail_body_pane_g1

0xcd73,	// (0x00054bcd) list_cmail_body_pane_t1

0xb6f2,	// (0x0005354c) list_single_cmail_header_editor_pane_bg_g1

0xe676,	// (0x000564d0) list_single_cmail_header_editor_pane_bg_g1_copy1

0xb702,	// (0x0005355c) list_single_cmail_header_editor_pane_bg_g1_copy2

0xb6fa,	// (0x00053554) list_single_cmail_header_editor_pane_bg_g1_copy3

0xb9b9,	// (0x00053813) list_single_cmail_header_editor_pane_bg_g1_copy4

0xb722,	// (0x0005357c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xb712,	// (0x0005356c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xb71a,	// (0x00053574) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe656,	// (0x000564b0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8cd2,	// (0x00050b2c) calenote_gesture_pane_ParamLimits

0x8cd2,	// (0x00050b2c) calenote_gesture_pane

0x8cf2,	// (0x00050b4c) calenote_window_pane_ParamLimits

0x8cf2,	// (0x00050b4c) calenote_window_pane

0xcd81,	// (0x00054bdb) popup_note_window_cp01

0x8d0e,	// (0x00050b68) calenote_swipe_1_pane_ParamLimits

0x8d0e,	// (0x00050b68) calenote_swipe_1_pane

0x8a11,	// (0x0005086b) calenote_swipe_2_pane_ParamLimits

0x8a11,	// (0x0005086b) calenote_swipe_2_pane

0xcb53,	// (0x000549ad) calenote_swipe_1_pane_g1_ParamLimits

0xcb53,	// (0x000549ad) calenote_swipe_1_pane_g1

0xcb60,	// (0x000549ba) calenote_swipe_1_pane_g2_ParamLimits

0xcb60,	// (0x000549ba) calenote_swipe_1_pane_g2

0x0001,

0xfbf1,	// (0x00057a4b) calenote_swipe_1_pane_g_ParamLimits

0xfbf1,	// (0x00057a4b) calenote_swipe_1_pane_g

0xcd93,	// (0x00054bed) calenote_swipe_1_pane_t1_ParamLimits

0xcd93,	// (0x00054bed) calenote_swipe_1_pane_t1

0xcb53,	// (0x000549ad) calenote_swipe_2_pane_g1_ParamLimits

0xcb53,	// (0x000549ad) calenote_swipe_2_pane_g1

0xcdb2,	// (0x00054c0c) calenote_swipe_2_pane_g2_ParamLimits

0xcdb2,	// (0x00054c0c) calenote_swipe_2_pane_g2

0x0001,

0xfc60,	// (0x00057aba) calenote_swipe_2_pane_g_ParamLimits

0xfc60,	// (0x00057aba) calenote_swipe_2_pane_g

0xcdbe,	// (0x00054c18) calenote_swipe_2_pane_t1_ParamLimits

0xcdbe,	// (0x00054c18) calenote_swipe_2_pane_t1

0xd53f,	// (0x00055399) main_mup_navstr_pane

0x5d9f,	// (0x0004dbf9) main_mup3_pane_t7_ParamLimits

0x5d9f,	// (0x0004dbf9) main_mup3_pane_t7

0xb2cc,	// (0x00053126) main_mp4_pane_g6_ParamLimits

0xb2cc,	// (0x00053126) main_mp4_pane_g6

0xb51f,	// (0x00053379) main_image3_pane_t4_ParamLimits

0xb51f,	// (0x00053379) main_image3_pane_t4

0x8d23,	// (0x00050b7d) popup_navstr_preview_pane_ParamLimits

0x8d23,	// (0x00050b7d) popup_navstr_preview_pane

0x8d37,	// (0x00050b91) scroll_navstr_pane_ParamLimits

0x8d37,	// (0x00050b91) scroll_navstr_pane

0xd53f,	// (0x00055399) bg_popup_preview_window_pane_cp04

0xcde5,	// (0x00054c3f) popup_navstr_preview_pane_t1

0x8d4b,	// (0x00050ba5) scroll_navstr_pane_g1_ParamLimits

0x8d4b,	// (0x00050ba5) scroll_navstr_pane_g1

0x8d5f,	// (0x00050bb9) scroll_navstr_pane_t1_ParamLimits

0x8d5f,	// (0x00050bb9) scroll_navstr_pane_t1

0xcd8a,	// (0x00054be4) bg_button_pane_cp014

0xcd8a,	// (0x00054be4) bg_button_pane_cp030

0x0887,	// (0x000486e1) list_double_fisheye_pane_g4_ParamLimits

0x0887,	// (0x000486e1) list_double_fisheye_pane_g4

0x0893,	// (0x000486ed) list_double_fisheye_pane_g5_ParamLimits

0x0893,	// (0x000486ed) list_double_fisheye_pane_g5

0xaa8f,	// (0x000528e9) sp_fs_scroll_pane_cp03

0xcc73,	// (0x00054acd) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xcc7f,	// (0x00054ad9) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc0e,	// (0x00057a68) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x8abb,	// (0x00050915) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xcd47,	// (0x00054ba1) sp_fs_scroll_pane_cp02

0xe377,	// (0x000561d1) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe377,	// (0x000561d1) popup_sp_fs_calendar_preview_list_single_pane

0xd53f,	// (0x00055399) main_cam6_pano_pane

0xdf90,	// (0x00055dea) main_mup3_pane_ParamLimits

0xd53f,	// (0x00055399) main_phacti_pane

0x8507,	// (0x00050361) bg_button_pane_cp11

0x8521,	// (0x0005037b) main_mobtv_info_pane_g2_ParamLimits

0x8521,	// (0x0005037b) main_mobtv_info_pane_g2

0x0001,

0xfb6e,	// (0x000579c8) main_mobtv_info_pane_g_ParamLimits

0xfb6e,	// (0x000579c8) main_mobtv_info_pane_g

0x86fe,	// (0x00050558) sc_clock_pane_t5_ParamLimits

0x86fe,	// (0x00050558) sc_clock_pane_t5

0x87c6,	// (0x00050620) main_radioblah_pane_g1_ParamLimits

0xca7f,	// (0x000548d9) main_radioblah_pane_t3_ParamLimits

0xca7f,	// (0x000548d9) main_radioblah_pane_t3

0xca97,	// (0x000548f1) main_radioblah_pane_t4_ParamLimits

0xca97,	// (0x000548f1) main_radioblah_pane_t4

0x87ee,	// (0x00050648) main_radioblah_text_pane_ParamLimits

0x87ee,	// (0x00050648) main_radioblah_text_pane

0x8800,	// (0x0005065a) main_radioblah_info_pane_g1_ParamLimits

0x8899,	// (0x000506f3) main_radioblah_info_pane_t4_ParamLimits

0x8899,	// (0x000506f3) main_radioblah_info_pane_t4

0xdf90,	// (0x00055dea) main_sp_fs_calendar_pane

0x8d76,	// (0x00050bd0) main_phacti_pane_g1

0x8d7e,	// (0x00050bd8) phacti_note_pane_ParamLimits

0x8d7e,	// (0x00050bd8) phacti_note_pane

0xcdfc,	// (0x00054c56) phacti_term_pane_ParamLimits

0xcdfc,	// (0x00054c56) phacti_term_pane

0xce11,	// (0x00054c6b) phacti_note_pane_t1_ParamLimits

0xce11,	// (0x00054c6b) phacti_note_pane_t1

0xbe93,	// (0x00053ced) phacti_term_pane_g1

0xbe9b,	// (0x00053cf5) phacti_term_pane_t1_ParamLimits

0xbe9b,	// (0x00053cf5) phacti_term_pane_t1

0xce28,	// (0x00054c82) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe416,	// (0x00056270) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc6a,	// (0x00057ac4) popup_sp_fs_calendar_preview_list_single_pane_g

0xce30,	// (0x00054c8a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xce30,	// (0x00054c8a) popup_sp_fs_calendar_preview_list_single_pane_t1

0xce46,	// (0x00054ca0) aid_popup_sp_fs_bg_corner_pane

0xe465,	// (0x000562bf) popup_sp_fs_calendar_preview_bg_pane_g1

0xd53f,	// (0x00055399) popup_sp_fs_calendar_preview_bg_pane

0xce4e,	// (0x00054ca8) popup_sp_fs_calendar_preview_list_pane

0xef7c,	// (0x00056dd6) bg_main_sp_fs_cale_pane_ParamLimits

0xef7c,	// (0x00056dd6) bg_main_sp_fs_cale_pane

0xbece,	// (0x00053d28) listscroll_cale_mrui_pane_ParamLimits

0xbece,	// (0x00053d28) listscroll_cale_mrui_pane

0xbee3,	// (0x00053d3d) listscroll_sp_fs_schedule_track_pane

0xbeec,	// (0x00053d46) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xbeec,	// (0x00053d46) main_sp_fs_ctrlbar_pane_cp01

0xce56,	// (0x00054cb0) main_sp_fs_ribbon_pane

0xbeff,	// (0x00053d59) popup_sp_fs_cale_preview_window

0x8df3,	// (0x00050c4d) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8df3,	// (0x00050c4d) list_single_sp_fs_schedule_track_pane

0xdf90,	// (0x00055dea) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xdf90,	// (0x00055dea) bg_sp_fs_highlight_list_pane_cp03

0x8e06,	// (0x00050c60) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8e06,	// (0x00050c60) list_single_sp_fs_schedule_track_pane_g1

0x8e12,	// (0x00050c6c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8e12,	// (0x00050c6c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc6f,	// (0x00057ac9) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc6f,	// (0x00057ac9) list_single_sp_fs_schedule_track_pane_g

0x8e1e,	// (0x00050c78) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8e1e,	// (0x00050c78) list_single_sp_fs_schedule_track_pane_t1

0x8e38,	// (0x00050c92) sp_fs_schedule_track_pane_ParamLimits

0x8e38,	// (0x00050c92) sp_fs_schedule_track_pane

0xce5e,	// (0x00054cb8) sp_fs_schedule_track_pane_g1

0xce66,	// (0x00054cc0) sp_fs_schedule_track_pane_g2

0xce6e,	// (0x00054cc8) sp_fs_schedule_track_pane_g3

0xce76,	// (0x00054cd0) sp_fs_schedule_track_pane_g4

0xce7e,	// (0x00054cd8) sp_fs_schedule_track_pane_g5

0x0004,

0xfc74,	// (0x00057ace) sp_fs_schedule_track_pane_g

0xb6f2,	// (0x0005354c) bg_sp_fs_schedule_viewer_highlight_g1

0xe676,	// (0x000564d0) bg_sp_fs_schedule_viewer_highlight_g2

0xb6fa,	// (0x00053554) bg_sp_fs_schedule_viewer_highlight_g3

0xb702,	// (0x0005355c) bg_sp_fs_schedule_viewer_highlight_g4

0xb9b9,	// (0x00053813) bg_sp_fs_schedule_viewer_highlight_g5

0xb712,	// (0x0005356c) bg_sp_fs_schedule_viewer_highlight_g6

0xb71a,	// (0x00053574) bg_sp_fs_schedule_viewer_highlight_g7

0xb722,	// (0x0005357c) bg_sp_fs_schedule_viewer_highlight_g8

0xe656,	// (0x000564b0) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc7f,	// (0x00057ad9) bg_sp_fs_schedule_viewer_highlight_g

0xd53f,	// (0x00055399) bg_main_sp_fs_ribbon_pane

0x8e49,	// (0x00050ca3) main_sp_fs_ribbon_pane_g1

0xce86,	// (0x00054ce0) main_sp_fs_ribbon_pane_t1

0x8e52,	// (0x00050cac) main_sp_fs_ribbon_pane_t2

0xce95,	// (0x00054cef) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc92,	// (0x00057aec) main_sp_fs_ribbon_pane_t

0xcea4,	// (0x00054cfe) main_sp_fs_ribbon_scheduler_pane

0xceac,	// (0x00054d06) bg_main_sp_fs_ribbon_pane_g1

0xceb5,	// (0x00054d0f) bg_main_sp_fs_ribbon_pane_g2

0xcebe,	// (0x00054d18) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc99,	// (0x00057af3) bg_main_sp_fs_ribbon_pane_g

0xcec6,	// (0x00054d20) main_sp_fs_ribbon_scheduler_pane_g1

0xcecf,	// (0x00054d29) main_sp_fs_ribbon_scheduler_pane_g2

0xced8,	// (0x00054d32) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfca0,	// (0x00057afa) main_sp_fs_ribbon_scheduler_pane_g

0xcee1,	// (0x00054d3b) list_cale_mrui_pane

0x8e61,	// (0x00050cbb) sp_fs_scroll_pane_cp07_ParamLimits

0x8e61,	// (0x00050cbb) sp_fs_scroll_pane_cp07

0x8e7d,	// (0x00050cd7) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8e7d,	// (0x00050cd7) bg_sp_fs_schedule_viewer_highlight

0xceee,	// (0x00054d48) list_single_sp_fs_schedule_track_pane_cp01

0xcef6,	// (0x00054d50) list_sp_fs_schedule_track_pane

0xcefe,	// (0x00054d58) sp_fs_scroll_pane_cp06_ParamLimits

0xcefe,	// (0x00054d58) sp_fs_scroll_pane_cp06

0xe465,	// (0x000562bf) bgmain_sp_fs_calendar_pane_g1

0x0b5b,	// (0x000489b5) list_single_cale_mrui_pane_ParamLimits

0x0b5b,	// (0x000489b5) list_single_cale_mrui_pane

0xbf11,	// (0x00053d6b) list_single_cale_mrui_row_pane_ParamLimits

0xbf11,	// (0x00053d6b) list_single_cale_mrui_row_pane

0xbf1e,	// (0x00053d78) list_single_cale_mrui_row_pane_g1_ParamLimits

0xbf1e,	// (0x00053d78) list_single_cale_mrui_row_pane_g1

0xbf56,	// (0x00053db0) list_single_cale_mrui_row_pane_t1_ParamLimits

0xbf56,	// (0x00053db0) list_single_cale_mrui_row_pane_t1

0x0b7c,	// (0x000489d6) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0b7c,	// (0x000489d6) list_single_cale_mrui_row_pane_t2

0xbf68,	// (0x00053dc2) list_single_cale_mrui_row_pane_t3_ParamLimits

0xbf68,	// (0x00053dc2) list_single_cale_mrui_row_pane_t3

0xbf97,	// (0x00053df1) list_single_cale_mrui_row_pane_t4_ParamLimits

0xbf97,	// (0x00053df1) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcae,	// (0x00057b08) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcae,	// (0x00057b08) list_single_cale_mrui_row_pane_t

0x0be4,	// (0x00048a3e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0be4,	// (0x00048a3e) list_single_cmail_header_editor_pane_bg_cp01

0x0c12,	// (0x00048a6c) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0c12,	// (0x00048a6c) list_single_cmail_header_editor_pane_bg_cp02

0x8e8d,	// (0x00050ce7) main_radioblah_text_pane_t1_ParamLimits

0x8e8d,	// (0x00050ce7) main_radioblah_text_pane_t1

0xcf1d,	// (0x00054d77) cam6_indi_pane_cp01

0xcf25,	// (0x00054d7f) cam6_mode_pane_cp01

0xcf2d,	// (0x00054d87) cam6_pano_pane

0xcf36,	// (0x00054d90) cam6_zoom_pane_cp01

0xcf3e,	// (0x00054d98) cam6_pano_image_pane

0xcf49,	// (0x00054da3) cam6_pano_pane_g1

0xc7e2,	// (0x0005463c) cam6_pano_pane_g2

0xcf52,	// (0x00054dac) cam6_pano_pane_g3

0xcf5b,	// (0x00054db5) cam6_pano_pane_g4

0xafc1,	// (0x00052e1b) cam6_pano_pane_g5

0xcf64,	// (0x00054dbe) cam6_pano_pane_g6

0xbfc6,	// (0x00053e20) cam6_pano_pane_g7

0xcf6e,	// (0x00054dc8) cam6_pano_pane_g8

0xcf77,	// (0x00054dd1) cam6_pano_pane_g9

0x0008,

0xfcb7,	// (0x00057b11) cam6_pano_pane_g

0xd53f,	// (0x00055399) main_browser_tag_pane

0xcddd,	// (0x00054c37) grid_navstr_albumart_pane

0xcf82,	// (0x00054ddc) cell_navstr_albumart_pane_ParamLimits

0xcf82,	// (0x00054ddc) cell_navstr_albumart_pane

0xcfa2,	// (0x00054dfc) cell_navstr_albumart_pane_g1

0x46f3,	// (0x0004c54d) cell_navstr_albumart_pane_g2

0x4703,	// (0x0004c55d) cell_navstr_albumart_pane_g3

0x46fb,	// (0x0004c555) cell_navstr_albumart_pane_g4

0x0003,

0xfcca,	// (0x00057b24) cell_navstr_albumart_pane_g

0x8ea7,	// (0x00050d01) bt_list_pane_ParamLimits

0x8ea7,	// (0x00050d01) bt_list_pane

0x8ebb,	// (0x00050d15) bt_list_pane_t1

0x8eca,	// (0x00050d24) bt_list_pane_t2

0x0001,

0xfcd3,	// (0x00057b2d) bt_list_pane_t

0xd53f,	// (0x00055399) main_cale_prevew_pane

0x8ed9,	// (0x00050d33) popup_cale_preview_window_ParamLimits

0x8ed9,	// (0x00050d33) popup_cale_preview_window

0xdf90,	// (0x00055dea) bg_popup_preview_window_pane_cp05_ParamLimits

0xdf90,	// (0x00055dea) bg_popup_preview_window_pane_cp05

0xcfaa,	// (0x00054e04) list_cale_preview_pane_ParamLimits

0xcfaa,	// (0x00054e04) list_cale_preview_pane

0x8ef4,	// (0x00050d4e) list_double_cale_preview_pane_ParamLimits

0x8ef4,	// (0x00050d4e) list_double_cale_preview_pane

0x8f06,	// (0x00050d60) list_single_cale_preview_pane_ParamLimits

0x8f06,	// (0x00050d60) list_single_cale_preview_pane

0x8f1c,	// (0x00050d76) list_single_cale_preview_pane_g1

0x8f24,	// (0x00050d7e) list_single_cale_preview_pane_t1_ParamLimits

0x8f24,	// (0x00050d7e) list_single_cale_preview_pane_t1

0x8f39,	// (0x00050d93) list_double_cale_preview_pane_g1

0x8f41,	// (0x00050d9b) list_double_cale_preview_pane_t1_ParamLimits

0x8f41,	// (0x00050d9b) list_double_cale_preview_pane_t1

0x8f56,	// (0x00050db0) list_double_cale_preview_pane_t2_ParamLimits

0x8f56,	// (0x00050db0) list_double_cale_preview_pane_t2

0x0001,

0xfcd8,	// (0x00057b32) list_double_cale_preview_pane_t_ParamLimits

0xfcd8,	// (0x00057b32) list_double_cale_preview_pane_t

0xd53f,	// (0x00055399) main_ezdial_pane

0xdf90,	// (0x00055dea) main_sp_fs_email_pane_ParamLimits

0x8a2b,	// (0x00050885) cmail_ddmenu_btn01_pane_ParamLimits

0x8a2b,	// (0x00050885) cmail_ddmenu_btn01_pane

0x8a3e,	// (0x00050898) cmail_ddmenu_btn02_pane_ParamLimits

0x8a3e,	// (0x00050898) cmail_ddmenu_btn02_pane

0x8a61,	// (0x000508bb) cmail_ddmenu_btn03_pane_ParamLimits

0x8a61,	// (0x000508bb) cmail_ddmenu_btn03_pane

0x8afa,	// (0x00050954) main_sp_fs_ctrlbar_pane_ParamLimits

0x8b1e,	// (0x00050978) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8c7a,	// (0x00050ad4) list_cmail_body_pane_ParamLimits

0xcd5d,	// (0x00054bb7) bg_button_pane_cp12

0xcd66,	// (0x00054bc0) list_single_cmail_header_detail_pane_g3_ParamLimits

0xcd66,	// (0x00054bc0) list_single_cmail_header_detail_pane_g3

0xbe6f,	// (0x00053cc9) list_single_cmail_header_detail_pane_t2_ParamLimits

0xbe6f,	// (0x00053cc9) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc5b,	// (0x00057ab5) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc5b,	// (0x00057ab5) list_single_cmail_header_detail_pane_t

0xbeb0,	// (0x00053d0a) phacti_term_pane_t2_ParamLimits

0xbeb0,	// (0x00053d0a) phacti_term_pane_t2

0x0001,

0xfc65,	// (0x00057abf) phacti_term_pane_t_ParamLimits

0xfc65,	// (0x00057abf) phacti_term_pane_t

0xcfb6,	// (0x00054e10) aid_size_list_single_double

0x8f6e,	// (0x00050dc8) popup_ezdial_listscroll_window

0x8f8a,	// (0x00050de4) popup_number_entry_window_cp01

0xe42f,	// (0x00056289) bg_popup_call_pane_cp09

0xcfc2,	// (0x00054e1c) ezdial_list_pane

0xcfca,	// (0x00054e24) scroll_pane_cp23

0xef7c,	// (0x00056dd6) bg_button_pane_cp028_ParamLimits

0xef7c,	// (0x00056dd6) bg_button_pane_cp028

0x8f98,	// (0x00050df2) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8f98,	// (0x00050df2) cmail_ddmenu_btn01_pane_g1

0x8fa4,	// (0x00050dfe) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8fa4,	// (0x00050dfe) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcdd,	// (0x00057b37) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcdd,	// (0x00057b37) cmail_ddmenu_btn01_pane_g

0xcfd2,	// (0x00054e2c) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xcfd2,	// (0x00054e2c) cmail_ddmenu_btn01_pane_t1

0xef7c,	// (0x00056dd6) bg_button_pane_cp029_ParamLimits

0xef7c,	// (0x00056dd6) bg_button_pane_cp029

0x8fb8,	// (0x00050e12) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8fb8,	// (0x00050e12) cmail_ddmenu_btn02_pane_g1

0x8fd0,	// (0x00050e2a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8fd0,	// (0x00050e2a) cmail_ddmenu_btn02_pane_t1

0xdf90,	// (0x00055dea) bg_button_pane_cp031_ParamLimits

0xdf90,	// (0x00055dea) bg_button_pane_cp031

0x8fb8,	// (0x00050e12) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8fb8,	// (0x00050e12) cmail_ddmenu_btn03_pane_g1

0x8fd0,	// (0x00050e2a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8fd0,	// (0x00050e2a) cmail_ddmenu_btn03_pane_t1

0x66fa,	// (0x0004e554) cell_dialer2_keypad_pane_t1_ParamLimits

0x6714,	// (0x0004e56e) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6714,	// (0x0004e56e) cell_dialer2_keypad_pane_t1_copy1

0x832a,	// (0x00050184) ncimui_group_button_pane

0xdf90,	// (0x00055dea) main_sp_fs_calendar_pane_ParamLimits

0x8c8f,	// (0x00050ae9) list_single_cmail_header_caption_pane_ParamLimits

0xbec5,	// (0x00053d1f) aid_recal_txt_sm_pane

0xd53f,	// (0x00055399) mian_recal_day_pane

0xbeff,	// (0x00053d59) popup_sp_fs_cale_preview_window_ParamLimits

0xcfe8,	// (0x00054e42) list_recal_day_pane

0xbfe9,	// (0x00053e43) list_single_recal_day_pane_ParamLimits

0xbfe9,	// (0x00053e43) list_single_recal_day_pane

0xd00f,	// (0x00054e69) list_single_recal_day_pane_g1_ParamLimits

0xd00f,	// (0x00054e69) list_single_recal_day_pane_g1

0xbffb,	// (0x00053e55) list_single_recal_day_pane_g2_ParamLimits

0xbffb,	// (0x00053e55) list_single_recal_day_pane_g2

0xc007,	// (0x00053e61) list_single_recal_day_pane_g3_ParamLimits

0xc007,	// (0x00053e61) list_single_recal_day_pane_g3

0x0c32,	// (0x00048a8c) list_single_recal_day_pane_g4_ParamLimits

0x0c32,	// (0x00048a8c) list_single_recal_day_pane_g4

0xc013,	// (0x00053e6d) list_single_recal_day_pane_g5_ParamLimits

0xc013,	// (0x00053e6d) list_single_recal_day_pane_g5

0xc01f,	// (0x00053e79) list_single_recal_day_pane_g6_ParamLimits

0xc01f,	// (0x00053e79) list_single_recal_day_pane_g6

0x0004,

0xfcec,	// (0x00057b46) list_single_recal_day_pane_g_ParamLimits

0xfcec,	// (0x00057b46) list_single_recal_day_pane_g

0xc033,	// (0x00053e8d) list_single_recal_day_pane_t1

0xc045,	// (0x00053e9f) list_single_recal_day_pane_t2

0x0001,

0xfcf7,	// (0x00057b51) list_single_recal_day_pane_t

0x8ff4,	// (0x00050e4e) ncimui_query_button_pane_ParamLimits

0x8ff4,	// (0x00050e4e) ncimui_query_button_pane

0x9004,	// (0x00050e5e) ncimui_query_button_pane_t1_ParamLimits

0x9004,	// (0x00050e5e) ncimui_query_button_pane_t1

0xd01b,	// (0x00054e75) ncimui_query_button_pane_t2_ParamLimits

0xd01b,	// (0x00054e75) ncimui_query_button_pane_t2

0x0001,

0xfcfc,	// (0x00057b56) ncimui_query_button_pane_t_ParamLimits

0xfcfc,	// (0x00057b56) ncimui_query_button_pane_t

0x9017,	// (0x00050e71) query_button_pane_ParamLimits

0x9017,	// (0x00050e71) query_button_pane

0xd53f,	// (0x00055399) bg_button_pane_cp0028

0xd02e,	// (0x00054e88) query_button_pane_t1

0x4b47,	// (0x0004c9a1) main_tport_pane_ParamLimits

0x8b3e,	// (0x00050998) bg_popup_window_pane_cp01_ParamLimits

0x8b3e,	// (0x00050998) bg_popup_window_pane_cp01

0x8b59,	// (0x000509b3) heading_pane_cp08_ParamLimits

0x8b59,	// (0x000509b3) heading_pane_cp08

0x8b6c,	// (0x000509c6) heading_pane_cp07_ParamLimits

0x8b6c,	// (0x000509c6) heading_pane_cp07

0x8c13,	// (0x00050a6d) cell_tport_appsw_pane_g2

0x0002,

0xfc48,	// (0x00057aa2) cell_tport_appsw_pane_g

0xab20,	// (0x0005297a) input_candi_list_open_g1

0xe841,	// (0x0005669b) list_cale_time_pane_g6_ParamLimits

0xe841,	// (0x0005669b) list_cale_time_pane_g6

0x57af,	// (0x0004d609) aid_size_touch_calib_1_ParamLimits

0x57af,	// (0x0004d609) aid_size_touch_calib_1

0x57c1,	// (0x0004d61b) aid_size_touch_calib_2_ParamLimits

0x57c1,	// (0x0004d61b) aid_size_touch_calib_2

0x57d9,	// (0x0004d633) aid_size_touch_calib_3_ParamLimits

0x57d9,	// (0x0004d633) aid_size_touch_calib_3

0x57f7,	// (0x0004d651) aid_size_touch_calib_4_ParamLimits

0x57f7,	// (0x0004d651) aid_size_touch_calib_4

0x580f,	// (0x0004d669) main_touch_calib_button_group_pane_ParamLimits

0x580f,	// (0x0004d669) main_touch_calib_button_group_pane

0x5827,	// (0x0004d681) main_touch_calib_pane_g1_ParamLimits

0x5839,	// (0x0004d693) main_touch_calib_pane_g2_ParamLimits

0x584b,	// (0x0004d6a5) main_touch_calib_pane_g3_ParamLimits

0x585d,	// (0x0004d6b7) main_touch_calib_pane_g4_ParamLimits

0xf699,	// (0x000574f3) main_touch_calib_pane_g_ParamLimits

0x586f,	// (0x0004d6c9) main_touch_calib_pane_t1_ParamLimits

0x5889,	// (0x0004d6e3) main_touch_calib_pane_t2_ParamLimits

0x58a3,	// (0x0004d6fd) main_touch_calib_pane_t3_ParamLimits

0x58b7,	// (0x0004d711) main_touch_calib_pane_t4_ParamLimits

0x58cb,	// (0x0004d725) main_touch_calib_pane_t5_ParamLimits

0xf6a2,	// (0x000574fc) main_touch_calib_pane_t_ParamLimits

0xad84,	// (0x00052bde) list_single_fp_cale_pane_g3_ParamLimits

0xad84,	// (0x00052bde) list_single_fp_cale_pane_g3

0xdf90,	// (0x00055dea) bg_button_pane_cp012_ParamLimits

0xdf90,	// (0x00055dea) bg_vkb2_func_pane_cp03_ParamLimits

0x76ab,	// (0x0004f505) cell_vitu2_function_top_pane_g1_ParamLimits

0xdf90,	// (0x00055dea) bg_vkb2_func_pane_cp04_ParamLimits

0x82b5,	// (0x0005010f) main_ncimui_button_group_pane_ParamLimits

0x82b5,	// (0x0005010f) main_ncimui_button_group_pane

0x8315,	// (0x0005016f) main_ncimui_pane_t3_ParamLimits

0x8315,	// (0x0005016f) main_ncimui_pane_t3

0xcdf3,	// (0x00054c4d) phacti_button_group_pane

0xcfb6,	// (0x00054e10) aid_size_list_single_double_ParamLimits

0x8f6e,	// (0x00050dc8) popup_ezdial_listscroll_window_ParamLimits

0x8f8a,	// (0x00050de4) popup_number_entry_window_cp01_ParamLimits

0x902a,	// (0x00050e84) phacti_button_pane_ParamLimits

0x902a,	// (0x00050e84) phacti_button_pane

0xd53f,	// (0x00055399) bg_button_pane_cp14

0xd03c,	// (0x00054e96) phacti_button_pane_t1

0x903b,	// (0x00050e95) main_touch_calib_button_pane_ParamLimits

0x903b,	// (0x00050e95) main_touch_calib_button_pane

0xe256,	// (0x000560b0) bg_button_pane_cp18_ParamLimits

0xe256,	// (0x000560b0) bg_button_pane_cp18

0xd04a,	// (0x00054ea4) main_touch_calib_button_pane_t1_ParamLimits

0xd04a,	// (0x00054ea4) main_touch_calib_button_pane_t1

0xd060,	// (0x00054eba) main_touch_calib_button_pane_t2_ParamLimits

0xd060,	// (0x00054eba) main_touch_calib_button_pane_t2

0x0001,

0xfd01,	// (0x00057b5b) main_touch_calib_button_pane_t_ParamLimits

0xfd01,	// (0x00057b5b) main_touch_calib_button_pane_t

0xd53f,	// (0x00055399) cell_ncimui_button_pane

0xd53f,	// (0x00055399) bg_button_pane_cp032

0xd07e,	// (0x00054ed8) cell_ncimui_button_pane_t1

0xb4ff,	// (0x00053359) image3_infobar_pane_ParamLimits

0xb4ff,	// (0x00053359) image3_infobar_pane

0x872a,	// (0x00050584) fs_bigclock_status_pane_ParamLimits

0x872a,	// (0x00050584) fs_bigclock_status_pane

0x8737,	// (0x00050591) main_fs_bigclock_clock_pane_ParamLimits

0x8737,	// (0x00050591) main_fs_bigclock_clock_pane

0x8755,	// (0x000505af) main_fs_bigclock_indi_pane_ParamLimits

0x8755,	// (0x000505af) main_fs_bigclock_indi_pane

0x8787,	// (0x000505e1) main_fs_bigclock_swipe_pane_ParamLimits

0x8787,	// (0x000505e1) main_fs_bigclock_swipe_pane

0xd53f,	// (0x00055399) main_fs_clock_dumped_data

0xc8ef,	// (0x00054749) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc8ef,	// (0x00054749) list_single_fs_bigclock_indicator_pane_g1

0xc90a,	// (0x00054764) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc90a,	// (0x00054764) list_single_fs_bigclock_indicator_pane_g2

0xc924,	// (0x0005477e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc924,	// (0x0005477e) list_single_fs_bigclock_indicator_pane_g3

0xc93e,	// (0x00054798) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc93e,	// (0x00054798) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfba2,	// (0x000579fc) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfba2,	// (0x000579fc) list_single_fs_bigclock_indicator_pane_g

0xc969,	// (0x000547c3) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc969,	// (0x000547c3) list_single_fs_bigclock_indicator_pane_t1

0xc991,	// (0x000547eb) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc991,	// (0x000547eb) list_single_fs_bigclock_indicator_pane_t2

0xc9b9,	// (0x00054813) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc9b9,	// (0x00054813) list_single_fs_bigclock_indicator_pane_t3

0xc9e1,	// (0x0005483b) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc9e1,	// (0x0005483b) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbad,	// (0x00057a07) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbad,	// (0x00057a07) list_single_fs_bigclock_indicator_pane_t

0xd08c,	// (0x00054ee6) image3_infobar_fav_pane_ParamLimits

0xd08c,	// (0x00054ee6) image3_infobar_fav_pane

0xd09c,	// (0x00054ef6) image3_infobar_loc_pane_ParamLimits

0xd09c,	// (0x00054ef6) image3_infobar_loc_pane

0xd0b0,	// (0x00054f0a) image3_infobar_time_pane_ParamLimits

0xd0b0,	// (0x00054f0a) image3_infobar_time_pane

0xe465,	// (0x000562bf) image3_infobar_time_pane_g1

0xd0c0,	// (0x00054f1a) image3_infobar_time_pane_t1

0xe465,	// (0x000562bf) image3_infobar_loc_pane_g1

0xd0ce,	// (0x00054f28) image3_infobar_loc_pane_g2

0x0001,

0xfd06,	// (0x00057b60) image3_infobar_loc_pane_g

0xd0d6,	// (0x00054f30) image3_infobar_loc_pane_t1

0xe465,	// (0x000562bf) image3_infobar_fav_pane_g1

0xd0e4,	// (0x00054f3e) image3_infobar_fav_pane_g2

0x0001,

0xfd0b,	// (0x00057b65) image3_infobar_fav_pane_g

0xd0ec,	// (0x00054f46) fs_bigclock_status_battery_pane

0xd0f5,	// (0x00054f4f) fs_bigclock_status_signal_pane

0xd0fe,	// (0x00054f58) fs_bigclock_status_title_pane

0xd107,	// (0x00054f61) fs_bigclock_status_signal_pane_g1

0xd110,	// (0x00054f6a) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd10,	// (0x00057b6a) fs_bigclock_status_signal_pane_g

0xd118,	// (0x00054f72) fs_bigclock_status_battery_pane_g1

0xd121,	// (0x00054f7b) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd15,	// (0x00057b6f) fs_bigclock_status_battery_pane_g

0xd129,	// (0x00054f83) fs_bigclock_status_title_pane_t1

0x9050,	// (0x00050eaa) main_fs_bigclock_clock_pane_g1

0x9050,	// (0x00050eaa) main_fs_bigclock_clock_pane_g2

0x9061,	// (0x00050ebb) main_fs_bigclock_clock_pane_g3

0x9061,	// (0x00050ebb) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd1a,	// (0x00057b74) main_fs_bigclock_clock_pane_g

0x9074,	// (0x00050ece) main_fs_bigclock_clock_pane_t1

0x908a,	// (0x00050ee4) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd23,	// (0x00057b7d) main_fs_bigclock_clock_pane_t

0xd137,	// (0x00054f91) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd137,	// (0x00054f91) list_single_fs_bigclock_indicator_pane

0xd148,	// (0x00054fa2) list_single_fs_bigclock_pane_ParamLimits

0xd148,	// (0x00054fa2) list_single_fs_bigclock_pane

0xd16e,	// (0x00054fc8) main_fs_bigclock_indicator_pane_t1

0xd17d,	// (0x00054fd7) list_single_fs_bigclock_pane_g1

0xd185,	// (0x00054fdf) list_single_fs_bigclock_pane_t1

0xe465,	// (0x000562bf) main_fs_bigclock_swipe_pane_g1

0xd1c8,	// (0x00055022) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd34,	// (0x00057b8e) main_fs_bigclock_swipe_pane_g

0xd1d0,	// (0x0005502a) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd1d0,	// (0x0005502a) main_fs_bigclock_swipe_pane_t1

0x2b3c,	// (0x0004a996) call_type_pane_ParamLimits

0xd53f,	// (0x00055399) main_btmg_pane

0xbf4a,	// (0x00053da4) list_single_cale_mrui_row_pane_g2_ParamLimits

0xbf4a,	// (0x00053da4) list_single_cale_mrui_row_pane_g2

0x0002,

0xfca7,	// (0x00057b01) list_single_cale_mrui_row_pane_g_ParamLimits

0xfca7,	// (0x00057b01) list_single_cale_mrui_row_pane_g

0xbfd8,	// (0x00053e32) list_recal_vselct_arw_lo_pane

0xd007,	// (0x00054e61) list_recal_vselct_arw_up_pane

0xbfe0,	// (0x00053e3a) list_recal_vselct_pane

0x90e4,	// (0x00050f3e) btmg_button_pane

0x90ee,	// (0x00050f48) main_btmg_pane_g1

0xd53f,	// (0x00055399) bg_button_pane_cp044

0xd1ed,	// (0x00055047) btmg_button_pane_t1

0x4b0b,	// (0x0004c965) aid_listscroll_gen

0xdf90,	// (0x00055dea) main_cntbar_detail_pane

0xcd30,	// (0x00054b8a) list_cmail_folder_pane

0xaa8f,	// (0x000528e9) sp_fs_scroll_pane_cp03_ParamLimits

0x0c4a,	// (0x00048aa4) list_single_fs_dyc_pane_cp01_ParamLimits

0x0c4a,	// (0x00048aa4) list_single_fs_dyc_pane_cp01

0xd1fb,	// (0x00055055) aid_size_cmail_indent

0xc057,	// (0x00053eb1) list_single_dyc_row_pane_cp01

0x9124,	// (0x00050f7e) cntbar_detail_list_pane_ParamLimits

0x9124,	// (0x00050f7e) cntbar_detail_list_pane

0x9170,	// (0x00050fca) main_cntbar_detail_cont_pane_ParamLimits

0x9170,	// (0x00050fca) main_cntbar_detail_cont_pane

0xaa8f,	// (0x000528e9) scroll_pane_cp032_ParamLimits

0xaa8f,	// (0x000528e9) scroll_pane_cp032

0x9184,	// (0x00050fde) cntbar_detail_list_event_pane_ParamLimits

0x9184,	// (0x00050fde) cntbar_detail_list_event_pane

0x9134,	// (0x00050f8e) cntbar_detail_list_shct_pane

0xe6c4,	// (0x0005651e) aid_list_gen

0xd204,	// (0x0005505e) aid_scroll

0xd20d,	// (0x00055067) aid_size_touch_scroll_bar

0x892f,	// (0x00050789) aid_list_double

0x0c61,	// (0x00048abb) aid_list_single

0xd216,	// (0x00055070) aid_list_single_lg

0x0c6a,	// (0x00048ac4) aid_list_z_g_a_sm

0x0c72,	// (0x00048acc) aid_list_z_g_d

0x0c7a,	// (0x00048ad4) aid_txt_z_prm

0x0c88,	// (0x00048ae2) aid_txt_z_prm_cp01

0x0c96,	// (0x00048af0) aid_txt_z_sec

0x9194,	// (0x00050fee) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9194,	// (0x00050fee) main_cntbar_detail_cont_pane_g1

0x91a8,	// (0x00051002) main_cntbar_detail_cont_pane_g2_ParamLimits

0x91a8,	// (0x00051002) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd39,	// (0x00057b93) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd39,	// (0x00057b93) main_cntbar_detail_cont_pane_g

0xd21f,	// (0x00055079) main_cntbar_detail_cont_pane_t1

0xd22d,	// (0x00055087) main_cntbar_detail_cont_pane_t2

0xd23b,	// (0x00055095) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd3e,	// (0x00057b98) main_cntbar_detail_cont_pane_t

0x91b8,	// (0x00051012) cell_cntbar_detail_list_shct_pane_ParamLimits

0x91b8,	// (0x00051012) cell_cntbar_detail_list_shct_pane

0xd249,	// (0x000550a3) cntbar_detail_list_shct_pane_g1

0xd252,	// (0x000550ac) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd45,	// (0x00057b9f) cntbar_detail_list_shct_pane_g

0x91cc,	// (0x00051026) cntbar_detail_list_event_pane_g1_ParamLimits

0x91cc,	// (0x00051026) cntbar_detail_list_event_pane_g1

0x91d8,	// (0x00051032) cntbar_detail_list_event_pane_g2_ParamLimits

0x91d8,	// (0x00051032) cntbar_detail_list_event_pane_g2

0x0005,

0xfd4a,	// (0x00057ba4) cntbar_detail_list_event_pane_g_ParamLimits

0xfd4a,	// (0x00057ba4) cntbar_detail_list_event_pane_g

0x9244,	// (0x0005109e) cntbar_detail_list_event_pane_t1_ParamLimits

0x9244,	// (0x0005109e) cntbar_detail_list_event_pane_t1

0x9259,	// (0x000510b3) cntbar_detail_list_event_pane_t2_ParamLimits

0x9259,	// (0x000510b3) cntbar_detail_list_event_pane_t2

0x0002,

0xfd57,	// (0x00057bb1) cntbar_detail_list_event_pane_t_ParamLimits

0xfd57,	// (0x00057bb1) cntbar_detail_list_event_pane_t

0xe465,	// (0x000562bf) cell_cntbar_detail_list_shct_pane_g1

0xee47,	// (0x00056ca1) navi_pane_mv_g3

0xdf90,	// (0x00055dea) main_cntbar_detail_pane_ParamLimits

0xd53f,	// (0x00055399) main_notif_wgt_pane

0xb25a,	// (0x000530b4) aid_tch_main_mp4_pane_g4

0xb48c,	// (0x000532e6) popup_slider_window_cp02

0xbfce,	// (0x00053e28) list_recal_day_event_pane

0x90f8,	// (0x00050f52) cntbar_detail_btn_pane_ParamLimits

0x90f8,	// (0x00050f52) cntbar_detail_btn_pane

0x910e,	// (0x00050f68) cntbar_detail_btn_pane_cp01_ParamLimits

0x910e,	// (0x00050f68) cntbar_detail_btn_pane_cp01

0x9134,	// (0x00050f8e) cntbar_detail_list_shct_pane_ParamLimits

0x9144,	// (0x00050f9e) cntbar_detail_pane_g1_ParamLimits

0x9144,	// (0x00050f9e) cntbar_detail_pane_g1

0x9154,	// (0x00050fae) cntbar_detail_pane_t1_ParamLimits

0x9154,	// (0x00050fae) cntbar_detail_pane_t1

0x91e4,	// (0x0005103e) cntbar_detail_list_event_pane_g3_ParamLimits

0x91e4,	// (0x0005103e) cntbar_detail_list_event_pane_g3

0x91fc,	// (0x00051056) cntbar_detail_list_event_pane_g4_ParamLimits

0x91fc,	// (0x00051056) cntbar_detail_list_event_pane_g4

0x9214,	// (0x0005106e) cntbar_detail_list_event_pane_g5_ParamLimits

0x9214,	// (0x0005106e) cntbar_detail_list_event_pane_g5

0x922c,	// (0x00051086) cntbar_detail_list_event_pane_g6_ParamLimits

0x922c,	// (0x00051086) cntbar_detail_list_event_pane_g6

0x926e,	// (0x000510c8) cntbar_detail_list_event_pane_t3_ParamLimits

0x926e,	// (0x000510c8) cntbar_detail_list_event_pane_t3

0x9280,	// (0x000510da) popup_notif_wgt_window_ParamLimits

0x9280,	// (0x000510da) popup_notif_wgt_window

0x9299,	// (0x000510f3) popup_submenu_window_cp01_ParamLimits

0x9299,	// (0x000510f3) popup_submenu_window_cp01

0xe42f,	// (0x00056289) bg_popup_window_pane_cp10

0xd25b,	// (0x000550b5) listscroll_notif_wgt_pane

0xd26d,	// (0x000550c7) list_notif_wgt_window

0xd276,	// (0x000550d0) scroll_pane_cp033

0x92af,	// (0x00051109) list_notif_wgt_row_pane_ParamLimits

0x92af,	// (0x00051109) list_notif_wgt_row_pane

0xd27f,	// (0x000550d9) aid_size_list_notif_wgt_del

0xd28c,	// (0x000550e6) list_notif_wgt_row_pane_g1

0xd298,	// (0x000550f2) list_notif_wgt_row_pane_g2

0xd2a7,	// (0x00055101) list_notif_wgt_row_pane_g3

0x0002,

0xfd5e,	// (0x00057bb8) list_notif_wgt_row_pane_g

0xd2b4,	// (0x0005510e) list_notif_wgt_row_pane_t1

0xd2ca,	// (0x00055124) list_notif_wgt_row_pane_t2

0xd2dc,	// (0x00055136) list_notif_wgt_row_pane_t3

0x0002,

0xfd65,	// (0x00057bbf) list_notif_wgt_row_pane_t

0xb9e1,	// (0x0005383b) list_recal_day_event_pane_g1

0xd2ee,	// (0x00055148) list_recal_day_event_pane_t1

0xd53f,	// (0x00055399) bg_button_pane_cp045

0xd2fd,	// (0x00055157) cntbar_detail_btn_pane_t1

0xef7c,	// (0x00056dd6) main_callh_pane_ParamLimits

0xef7c,	// (0x00056dd6) main_callh_pane

0xd53f,	// (0x00055399) main_coverflow0_pane

0xd53f,	// (0x00055399) main_wgtman_pane

0x879f,	// (0x000505f9) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x879f,	// (0x000505f9) main_fs_bigclock_unlock_btn_pane

0x8c0b,	// (0x00050a65) bg_button_pane_cp16

0x8c1b,	// (0x00050a75) cell_tport_appsw_pane_g3

0x92bf,	// (0x00051119) cf0_flow_pane_ParamLimits

0x92bf,	// (0x00051119) cf0_flow_pane

0xd30b,	// (0x00055165) listscroll_cf0_pane

0xd316,	// (0x00055170) main_cf0_pane_g1

0x92d4,	// (0x0005112e) main_cf0_pane_t1_ParamLimits

0x92d4,	// (0x0005112e) main_cf0_pane_t1

0x92eb,	// (0x00051145) main_cf0_pane_t2_ParamLimits

0x92eb,	// (0x00051145) main_cf0_pane_t2

0x0001,

0xfd71,	// (0x00057bcb) main_cf0_pane_t_ParamLimits

0xfd71,	// (0x00057bcb) main_cf0_pane_t

0xd328,	// (0x00055182) scroll_pane_cp11

0x9302,	// (0x0005115c) cf0_flow_pane_g1

0x930a,	// (0x00051164) cf0_flow_pane_g2

0x0001,

0xfd76,	// (0x00057bd0) cf0_flow_pane_g

0x9312,	// (0x0005116c) cf0_flow_pane_t1

0xd53f,	// (0x00055399) main_call6_pane

0xd53f,	// (0x00055399) main_calllock_pane

0x9320,	// (0x0005117a) call6_btn_grp_pane_ParamLimits

0x9320,	// (0x0005117a) call6_btn_grp_pane

0x933a,	// (0x00051194) call6_pane_g1_ParamLimits

0x933a,	// (0x00051194) call6_pane_g1

0x9350,	// (0x000511aa) popup_call6_1st_window_ParamLimits

0x9350,	// (0x000511aa) popup_call6_1st_window

0x9361,	// (0x000511bb) popup_call6_2nd_window_ParamLimits

0x9361,	// (0x000511bb) popup_call6_2nd_window

0x9372,	// (0x000511cc) cell_call6_btn_pane_ParamLimits

0x9372,	// (0x000511cc) cell_call6_btn_pane

0xe42f,	// (0x00056289) bg_popup_call2_in_pane_cp03

0xd333,	// (0x0005518d) popup_call6_1st_window_g1

0xd33b,	// (0x00055195) popup_call6_1st_window_g2

0xd343,	// (0x0005519d) popup_call6_1st_window_g3

0x0002,

0xfd7b,	// (0x00057bd5) popup_call6_1st_window_g

0xd34b,	// (0x000551a5) popup_call6_1st_window_t1

0xd35a,	// (0x000551b4) popup_call6_1st_window_t2

0xd368,	// (0x000551c2) popup_call6_1st_window_t3

0x0002,

0xfd82,	// (0x00057bdc) popup_call6_1st_window_t

0xe42f,	// (0x00056289) bg_popup_call2_in_pane_cp04

0xd376,	// (0x000551d0) popup_call6_2nd_window_g1

0xd37e,	// (0x000551d8) popup_call6_2nd_window_g2

0xd386,	// (0x000551e0) popup_call6_2nd_window_g3

0x0002,

0xfd89,	// (0x00057be3) popup_call6_2nd_window_g

0xd38e,	// (0x000551e8) popup_call6_2nd_window_t1

0xd53f,	// (0x00055399) bg_button_pane_cp15

0xd39d,	// (0x000551f7) cell_call6_btn_pane_g1

0xd9ec,	// (0x00055846) cell_call6_btn_pane_t1

0x9385,	// (0x000511df) listscroll_wgtman_pane_ParamLimits

0x9385,	// (0x000511df) listscroll_wgtman_pane

0x93a6,	// (0x00051200) wgtman_btn_pane_ParamLimits

0x93a6,	// (0x00051200) wgtman_btn_pane

0xec4e,	// (0x00056aa8) aid_scroll_copy1

0xd3a6,	// (0x00055200) list_wgtman_pane

0x93e9,	// (0x00051243) wgtman_btn_pane_g1_ParamLimits

0x93e9,	// (0x00051243) wgtman_btn_pane_g1

0x9415,	// (0x0005126f) wgtman_btn_pane_t1_ParamLimits

0x9415,	// (0x0005126f) wgtman_btn_pane_t1

0xd3b0,	// (0x0005520a) wgtman_btn_pane_t2_ParamLimits

0xd3b0,	// (0x0005520a) wgtman_btn_pane_t2

0x0001,

0xfd90,	// (0x00057bea) wgtman_btn_pane_t_ParamLimits

0xfd90,	// (0x00057bea) wgtman_btn_pane_t

0x9452,	// (0x000512ac) listrow_wgtman_pane_ParamLimits

0x9452,	// (0x000512ac) listrow_wgtman_pane

0x9464,	// (0x000512be) listrow_wgtman_pane_g1

0x9471,	// (0x000512cb) listrow_wgtman_pane_g2

0x0001,

0xfd95,	// (0x00057bef) listrow_wgtman_pane_g

0x0ca4,	// (0x00048afe) listrow_wgtman_pane_t1

0x0cbc,	// (0x00048b16) listrow_wgtman_pane_t2

0x0001,

0xfd9a,	// (0x00057bf4) listrow_wgtman_pane_t

0x0ce2,	// (0x00048b3c) wait_bar_pane_cp09

0xd3c7,	// (0x00055221) main_calllock_btn_pane

0xd3d1,	// (0x0005522b) main_calllock_pane_g1

0xd53f,	// (0x00055399) bg_button_pane_cp17

0xd39d,	// (0x000551f7) main_calllock_btn_pane_g1

0xd3d9,	// (0x00055233) main_calllock_btn_pane_t1

0xd53f,	// (0x00055399) main_dialer3_pane

0xd53f,	// (0x00055399) main_fmrd2_pane

0xe465,	// (0x000562bf) main_fs_bigclock_unlock_btn_pane_g1

0x9497,	// (0x000512f1) main_fs_bigclock_unlock_btn_pane_t1

0x94a5,	// (0x000512ff) area_fmrd2_info_pane_ParamLimits

0x94a5,	// (0x000512ff) area_fmrd2_info_pane

0x94b6,	// (0x00051310) area_fmrd2_visual_pane_ParamLimits

0x94b6,	// (0x00051310) area_fmrd2_visual_pane

0x94c4,	// (0x0005131e) fmrd2_indi_pane_ParamLimits

0x94c4,	// (0x0005131e) fmrd2_indi_pane

0x94d1,	// (0x0005132b) area_fmrd2_visual_pane_g1

0x94d9,	// (0x00051333) area_fmrd2_visual_pane_t1

0x94e9,	// (0x00051343) area_fmrd2_visual_pane_t2

0x94f9,	// (0x00051353) area_fmrd2_visual_pane_t3

0x0002,

0xfda4,	// (0x00057bfe) area_fmrd2_visual_pane_t

0x9509,	// (0x00051363) area_fmrd2_info_pane_g1

0x9511,	// (0x0005136b) area_fmrd2_info_pane_t1

0x9521,	// (0x0005137b) area_fmrd2_info_pane_t2

0x9531,	// (0x0005138b) area_fmrd2_info_pane_t3

0x9541,	// (0x0005139b) area_fmrd2_info_pane_t4

0x0003,

0xfdab,	// (0x00057c05) area_fmrd2_info_pane_t

0x954f,	// (0x000513a9) fmrd2_indi_pane_t1

0x955f,	// (0x000513b9) fmrd2_indi_pane_t2

0x956f,	// (0x000513c9) fmrd2_indi_pane_t3

0x0002,

0xfdb4,	// (0x00057c0e) fmrd2_indi_pane_t

0xc94d,	// (0x000547a7) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc94d,	// (0x000547a7) list_single_fs_bigclock_indicator_pane_g5

0xc9fe,	// (0x00054858) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc9fe,	// (0x00054858) list_single_fs_bigclock_indicator_pane_t5

0x8d92,	// (0x00050bec) aid_cell_bcale_month_pane_ParamLimits

0x8d92,	// (0x00050bec) aid_cell_bcale_month_pane

0x8db0,	// (0x00050c0a) bcale_month_pane_ParamLimits

0x8db0,	// (0x00050c0a) bcale_month_pane

0x8dd4,	// (0x00050c2e) bcale_preview_pane_ParamLimits

0x8dd4,	// (0x00050c2e) bcale_preview_pane

0xd185,	// (0x00054fdf) list_single_fs_bigclock_pane_t1_ParamLimits

0xd1a4,	// (0x00054ffe) list_single_fs_bigclock_pane_t2_ParamLimits

0xd1a4,	// (0x00054ffe) list_single_fs_bigclock_pane_t2

0x0001,

0xfd2f,	// (0x00057b89) list_single_fs_bigclock_pane_t_ParamLimits

0xfd2f,	// (0x00057b89) list_single_fs_bigclock_pane_t

0x948f,	// (0x000512e9) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd9f,	// (0x00057bf9) main_fs_bigclock_unlock_btn_pane_g

0x957f,	// (0x000513d9) aid_dia3_key_size_ParamLimits

0x957f,	// (0x000513d9) aid_dia3_key_size

0x958e,	// (0x000513e8) aid_dia3_listrow_size_ParamLimits

0x958e,	// (0x000513e8) aid_dia3_listrow_size

0x95a3,	// (0x000513fd) dia3_keypad_fun_pane_ParamLimits

0x95a3,	// (0x000513fd) dia3_keypad_fun_pane

0x95bf,	// (0x00051419) dia3_keypad_num_pane_ParamLimits

0x95bf,	// (0x00051419) dia3_keypad_num_pane

0x95da,	// (0x00051434) dia3_listscroll_pane_ParamLimits

0x95da,	// (0x00051434) dia3_listscroll_pane

0x95ed,	// (0x00051447) dia3_numentry_pane_ParamLimits

0x95ed,	// (0x00051447) dia3_numentry_pane

0xd3e8,	// (0x00055242) dia3_list_pane

0xd3f3,	// (0x0005524d) scroll_pane_cp12

0xd53f,	// (0x00055399) bg_dia3_numentry_pane

0x9605,	// (0x0005145f) dia3_numentry_pane_t1

0x9614,	// (0x0005146e) cell_dia3_key_num_pane

0x961c,	// (0x00051476) cell_dia3_key0_fun_pane_ParamLimits

0x961c,	// (0x00051476) cell_dia3_key0_fun_pane

0x9630,	// (0x0005148a) cell_dia3_key1_fun_pane_ParamLimits

0x9630,	// (0x0005148a) cell_dia3_key1_fun_pane

0x9648,	// (0x000514a2) dia3_listrow_pane

0xc6a0,	// (0x000544fa) bg_dia3_numentry_pane_g1

0xd53f,	// (0x00055399) bg_button_pane_cp21

0xd3fe,	// (0x00055258) cell_dia3_key_num_pane_t1

0xd40c,	// (0x00055266) cell_dia3_key_num_pane_t2

0xd41b,	// (0x00055275) cell_dia3_key_num_pane_t3

0xd42a,	// (0x00055284) cell_dia3_key_num_pane_t4

0x0003,

0xfdbb,	// (0x00057c15) cell_dia3_key_num_pane_t

0xd53f,	// (0x00055399) bg_button_pane_cp19

0x965a,	// (0x000514b4) cell_dia3_key0_fun_pane_g1

0xd53f,	// (0x00055399) bg_button_pane_cp20

0x9662,	// (0x000514bc) cell_dia3_key1_fun_pane_g1

0x966a,	// (0x000514c4) area_left_week_number_pane

0x9676,	// (0x000514d0) area_top_day_name_pane

0x9689,	// (0x000514e3) frame_month_view_pane

0xd439,	// (0x00055293) grid_month_view_pane

0x969c,	// (0x000514f6) cell_top_day_name_pane_ParamLimits

0x969c,	// (0x000514f6) cell_top_day_name_pane

0x96c9,	// (0x00051523) cell_area_left_week_number_pane_ParamLimits

0x96c9,	// (0x00051523) cell_area_left_week_number_pane

0x96dd,	// (0x00051537) cell_month_view_pane_ParamLimits

0x96dd,	// (0x00051537) cell_month_view_pane

0xd447,	// (0x000552a1) frm_month_g1

0x970a,	// (0x00051564) frm_month_g2

0x971d,	// (0x00051577) frm_month_g3

0x9730,	// (0x0005158a) frm_month_g4

0x9743,	// (0x0005159d) frm_month_g5

0x9756,	// (0x000515b0) frm_month_g6

0x9769,	// (0x000515c3) frm_month_g7

0xd454,	// (0x000552ae) frm_month_g8

0x977c,	// (0x000515d6) frm_month_g9

0x978c,	// (0x000515e6) frm_month_g10

0x979c,	// (0x000515f6) frm_month_g11

0x97ac,	// (0x00051606) frm_month_g12

0x97be,	// (0x00051618) frm_month_g13

0x97d0,	// (0x0005162a) frm_month_g14

0x97e4,	// (0x0005163e) frm_month_g15

0x97f8,	// (0x00051652) frm_month_g16

0x000f,

0xfdc4,	// (0x00057c1e) frm_month_g

0xd461,	// (0x000552bb) cell_top_day_name_pane_t1

0x980c,	// (0x00051666) cell_area_left_week_number_pane_g1

0x9818,	// (0x00051672) cell_area_left_week_number_pane_t1

0xe1e4,	// (0x0005603e) cell_month_view_pane_g1

0x982b,	// (0x00051685) cell_month_view_pane_t1

0xd53f,	// (0x00055399) main_fps_pane

0xcc3b,	// (0x00054a95) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xcc3b,	// (0x00054a95) cmail_ddmenu_btn02_pane_cp1

0xcc57,	// (0x00054ab1) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xcc57,	// (0x00054ab1) cmail_ddmenu_btn02_pane_cp2

0x8fc4,	// (0x00050e1e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8fc4,	// (0x00050e1e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfce2,	// (0x00057b3c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfce2,	// (0x00057b3c) cmail_ddmenu_btn02_pane_g

0x8fe2,	// (0x00050e3c) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8fe2,	// (0x00050e3c) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfce7,	// (0x00057b41) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfce7,	// (0x00057b41) cmail_ddmenu_btn02_pane_t

0x983e,	// (0x00051698) fps_text_pane_ParamLimits

0x983e,	// (0x00051698) fps_text_pane

0x9855,	// (0x000516af) main_fps_pane_g1_ParamLimits

0x9855,	// (0x000516af) main_fps_pane_g1

0x986f,	// (0x000516c9) wait_bar_pane_cp010_ParamLimits

0x986f,	// (0x000516c9) wait_bar_pane_cp010

0x9880,	// (0x000516da) fps_text_pane_t1_ParamLimits

0x9880,	// (0x000516da) fps_text_pane_t1

0xcaf7,	// (0x00054951) cam4_image_uncrop_pane_g1

0xcb00,	// (0x0005495a) cam4_image_uncrop_pane_g2

0x6c2f,	// (0x0004ea89) cam4_image_uncrop_pane_g3

0x6c38,	// (0x0004ea92) cam4_image_uncrop_pane_g4

0x0003,

0xf835,	// (0x0005768f) cam4_image_uncrop_pane_g

0x9648,	// (0x000514a2) dia3_listrow_pane_ParamLimits

0xd53f,	// (0x00055399) main_phob2_pane

0x8bdc,	// (0x00050a36) cell_tport_appsw_pane_cp02_ParamLimits

0x8bdc,	// (0x00050a36) cell_tport_appsw_pane_cp02

0x8bf0,	// (0x00050a4a) cell_tport_appsw_pane_cp03_ParamLimits

0x8bf0,	// (0x00050a4a) cell_tport_appsw_pane_cp03

0xd53f,	// (0x00055399) phob2_contact_card_pane

0xd53f,	// (0x00055399) phob2_listscroll_pane

0xd474,	// (0x000552ce) phob2_list_pane

0xd47c,	// (0x000552d6) scroll_pane_cp034

0x9898,	// (0x000516f2) phob2_cc_data_pane_ParamLimits

0x9898,	// (0x000516f2) phob2_cc_data_pane

0x98b7,	// (0x00051711) phob2_cc_listscroll_pane_ParamLimits

0x98b7,	// (0x00051711) phob2_cc_listscroll_pane

0x9452,	// (0x000512ac) list_double_large_graphic_phob2_pane_ParamLimits

0x9452,	// (0x000512ac) list_double_large_graphic_phob2_pane

0x98d5,	// (0x0005172f) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x98d5,	// (0x0005172f) list_double_large_graphic_phob2_pane_g1

0x0cf4,	// (0x00048b4e) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0cf4,	// (0x00048b4e) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfde5,	// (0x00057c3f) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfde5,	// (0x00057c3f) list_double_large_graphic_phob2_pane_g

0x0d1a,	// (0x00048b74) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0d1a,	// (0x00048b74) list_double_large_graphic_phob2_pane_t1

0x0d2f,	// (0x00048b89) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0d2f,	// (0x00048b89) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdee,	// (0x00057c48) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdee,	// (0x00057c48) list_double_large_graphic_phob2_pane_t

0xd53f,	// (0x00055399) list_highlight_pane_cp024

0xd484,	// (0x000552de) phob2_cc_button_pane

0x98e2,	// (0x0005173c) phob2_cc_data_pane_g1_ParamLimits

0x98e2,	// (0x0005173c) phob2_cc_data_pane_g1

0x98f9,	// (0x00051753) phob2_cc_data_pane_g2_ParamLimits

0x98f9,	// (0x00051753) phob2_cc_data_pane_g2

0x0001,

0xfdf3,	// (0x00057c4d) phob2_cc_data_pane_g_ParamLimits

0xfdf3,	// (0x00057c4d) phob2_cc_data_pane_g

0x990b,	// (0x00051765) phob2_cc_data_pane_t1_ParamLimits

0x990b,	// (0x00051765) phob2_cc_data_pane_t1

0x9923,	// (0x0005177d) phob2_cc_data_pane_t2_ParamLimits

0x9923,	// (0x0005177d) phob2_cc_data_pane_t2

0x993b,	// (0x00051795) phob2_cc_data_pane_t3_ParamLimits

0x993b,	// (0x00051795) phob2_cc_data_pane_t3

0x0002,

0xfdf8,	// (0x00057c52) phob2_cc_data_pane_t_ParamLimits

0xfdf8,	// (0x00057c52) phob2_cc_data_pane_t

0xd48c,	// (0x000552e6) phob2_cc_list_pane_ParamLimits

0xd48c,	// (0x000552e6) phob2_cc_list_pane

0xba8a,	// (0x000538e4) scroll_pane_cp035_ParamLimits

0xba8a,	// (0x000538e4) scroll_pane_cp035

0xdf90,	// (0x00055dea) bg_button_pane_cp033

0xd498,	// (0x000552f2) phob2_cc_button_pane_g1

0xd4a4,	// (0x000552fe) phob2_cc_button_pane_t1

0xd4b9,	// (0x00055313) phob2_cc_button_pane_t2

0x0001,

0xfdff,	// (0x00057c59) phob2_cc_button_pane_t

0x9953,	// (0x000517ad) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9953,	// (0x000517ad) list_double_large_graphic_phob2_cc_pane

0x9983,	// (0x000517dd) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9983,	// (0x000517dd) list_double_large_graphic_phob2_cc_pane_g1

0x0d44,	// (0x00048b9e) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0d44,	// (0x00048b9e) list_double_large_graphic_phob2_cc_pane_g2

0x0d50,	// (0x00048baa) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0d50,	// (0x00048baa) list_double_large_graphic_phob2_cc_pane_g3

0x0d5c,	// (0x00048bb6) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0d5c,	// (0x00048bb6) list_double_large_graphic_phob2_cc_pane_g4

0xc060,	// (0x00053eba) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xc060,	// (0x00053eba) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe04,	// (0x00057c5e) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe04,	// (0x00057c5e) list_double_large_graphic_phob2_cc_pane_g

0x0d68,	// (0x00048bc2) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0d68,	// (0x00048bc2) list_double_large_graphic_phob2_cc_pane_t1

0x0d91,	// (0x00048beb) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x0d91,	// (0x00048beb) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe0f,	// (0x00057c69) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe0f,	// (0x00057c69) list_double_large_graphic_phob2_cc_pane_t

0xd4cb,	// (0x00055325) list_highlight_pane_cp025_ParamLimits

0xd4cb,	// (0x00055325) list_highlight_pane_cp025

0xdf90,	// (0x00055dea) bg_button_pane_cp033_ParamLimits

0xd498,	// (0x000552f2) phob2_cc_button_pane_g1_ParamLimits

0xd4a4,	// (0x000552fe) phob2_cc_button_pane_t1_ParamLimits

0xd4b9,	// (0x00055313) phob2_cc_button_pane_t2_ParamLimits

0xfdff,	// (0x00057c59) phob2_cc_button_pane_t_ParamLimits

0x0f8c,	// (0x00048de6) popup_wgtman_window

0xb81e,	// (0x00053678) scroll_pane_cp038

0x93cb,	// (0x00051225) wgtman_btn_pane_cp_01_ParamLimits

0x93cb,	// (0x00051225) wgtman_btn_pane_cp_01

0xd4d9,	// (0x00055333) wgtman_content_pane

0xd4e2,	// (0x0005533c) wgtman_heading_pane

0xd53f,	// (0x00055399) bg_heading_pane_cp02

0xd4eb,	// (0x00055345) wgtman_heading_pane_g1

0xd4f3,	// (0x0005534d) wgtman_heading_pane_t1

0xd501,	// (0x0005535b) scroll_pane_cp036

0xd509,	// (0x00055363) wgtman_list_pane

0xd511,	// (0x0005536b) wgtman_list_pane_t1_ParamLimits

0xd511,	// (0x0005536b) wgtman_list_pane_t1

0xb5af,	// (0x00053409) cam4_grid_pane

0x0697,	// (0x000484f1) bg_button_pane_cp015_ParamLimits

0x7838,	// (0x0004f692) bg_button_pane_cp016_ParamLimits

0x7844,	// (0x0004f69e) bg_button_pane_cp017_ParamLimits

0x785f,	// (0x0004f6b9) popup_vitu2_query_window_g3_ParamLimits

0x785f,	// (0x0004f6b9) popup_vitu2_query_window_g3

0x074e,	// (0x000485a8) popup_vitu2_query_window_t6_ParamLimits

0x074e,	// (0x000485a8) popup_vitu2_query_window_t6

0x0779,	// (0x000485d3) popup_vitu2_query_window_t7_ParamLimits

0x0779,	// (0x000485d3) popup_vitu2_query_window_t7

0xcaf7,	// (0x00054951) cam4_grid_pane_g1

0xcb00,	// (0x0005495a) cam4_grid_pane_g2

0xd52b,	// (0x00055385) cam4_grid_pane_g3

0xd534,	// (0x0005538e) cam4_grid_pane_g4

0x0003,

0xfe14,	// (0x00057c6e) cam4_grid_pane_g

0x1b2b,	// (0x00049985) aid_placing_vt_slider_lsc_ParamLimits

0x1e36,	// (0x00049c90) vidtel_button_pane_ParamLimits

0x1e36,	// (0x00049c90) vidtel_button_pane

0xd53f,	// (0x00055399) bg_button_pane_cp034

0xd9fb,	// (0x00055855) vidtel_button_pane_g1

0xda03,	// (0x0005585d) vidtel_button_pane_t1

0xb995,	// (0x000537ef) aid_size_vtel_slider_touch

0xba8a,	// (0x000538e4) scroll_pane_cp039

0x8493,	// (0x000502ed) ncim_query_button_pane_cp01_ParamLimits

0x84b2,	// (0x0005030c) ncimui_query_pane_g1_ParamLimits

0xdf90,	// (0x00055dea) input_focus_pane_cp012_ParamLimits

0xc6de,	// (0x00054538) ncim_query_entry_pane_t1_ParamLimits

0xba8a,	// (0x000538e4) scroll_pane_cp039_ParamLimits

0xed32,	// (0x00056b8c) navi_pane_bcale_mc_g1

0xed3a,	// (0x00056b94) navi_pane_bcale_mc_t1

0xcc8b,	// (0x00054ae5) main_sp_fs_email_pane_g1

0xcc97,	// (0x00054af1) main_sp_fs_email_pane_g2

0x0001,

0xfc17,	// (0x00057a71) main_sp_fs_email_pane_g

0xcf10,	// (0x00054d6a) list_single_cale_mrui_row_pane_g3_ParamLimits

0xcf10,	// (0x00054d6a) list_single_cale_mrui_row_pane_g3

0x0c40,	// (0x00048a9a) list_single_recal_day_pane_g5_event_pane

0xc02b,	// (0x00053e85) list_single_recal_day_pane_g7

0xda19,	// (0x00055873) list_recal_day_event_pane_cp01

0xda22,	// (0x0005587c) list_recal_vselct_arw_lo_pane_cp01

0xda2a,	// (0x00055884) list_recal_vselct_arw_up_pane_cp01

0xda32,	// (0x0005588c) list_recal_vselct_pane_cp01

0xb9e1,	// (0x0005383b) list_recal_day_event_pane_cp01_g1

0xc06c,	// (0x00053ec6) list_recal_day_event_pane_cp01_t1

0xc033,	// (0x00053e8d) list_single_recal_day_pane_t1_ParamLimits

0xc045,	// (0x00053e9f) list_single_recal_day_pane_t2_ParamLimits

0xfcf7,	// (0x00057b51) list_single_recal_day_pane_t_ParamLimits

0xe169,	// (0x00055fc3) bg_notes_pane_ParamLimits

0xe234,	// (0x0005608e) list_notes_pane_ParamLimits

0x1192,	// (0x00048fec) scroll_pane_cp06_ParamLimits

0xe256,	// (0x000560b0) main_notes_pane_ParamLimits

0xdf90,	// (0x00055dea) main_welc_pane

0x99bc,	// (0x00051816) main_welc_body_pane_ParamLimits

0x99bc,	// (0x00051816) main_welc_body_pane

0x99da,	// (0x00051834) main_welc_opti_pane_ParamLimits

0x99da,	// (0x00051834) main_welc_opti_pane

0x9a58,	// (0x000518b2) main_welc_pane_t1_ParamLimits

0x9a58,	// (0x000518b2) main_welc_pane_t1

0x9c50,	// (0x00051aaa) main_welc_body_row_pane_ParamLimits

0x9c50,	// (0x00051aaa) main_welc_body_row_pane

0xe1d6,	// (0x00056030) main_welc_opti_row_pane_ParamLimits

0xe1d6,	// (0x00056030) main_welc_opti_row_pane

0xda4c,	// (0x000558a6) main_welc_opti_row_pane_g1

0x9c64,	// (0x00051abe) main_welc_opti_row_pane_t1

0xda54,	// (0x000558ae) main_welc_body_row_pane_t1

0xd265,	// (0x000550bf) popup_notif_wgt_heading_pane

0xd27f,	// (0x000550d9) aid_size_list_notif_wgt_del_ParamLimits

0xd28c,	// (0x000550e6) list_notif_wgt_row_pane_g1_ParamLimits

0xd298,	// (0x000550f2) list_notif_wgt_row_pane_g2_ParamLimits

0xd2a7,	// (0x00055101) list_notif_wgt_row_pane_g3_ParamLimits

0xfd5e,	// (0x00057bb8) list_notif_wgt_row_pane_g_ParamLimits

0xd2b4,	// (0x0005510e) list_notif_wgt_row_pane_t1_ParamLimits

0xd2ca,	// (0x00055124) list_notif_wgt_row_pane_t2_ParamLimits

0xd2dc,	// (0x00055136) list_notif_wgt_row_pane_t3_ParamLimits

0xfd65,	// (0x00057bbf) list_notif_wgt_row_pane_t_ParamLimits

0x9464,	// (0x000512be) listrow_wgtman_pane_g1_ParamLimits

0x9471,	// (0x000512cb) listrow_wgtman_pane_g2_ParamLimits

0xfd95,	// (0x00057bef) listrow_wgtman_pane_g_ParamLimits

0x0ca4,	// (0x00048afe) listrow_wgtman_pane_t1_ParamLimits

0x0cbc,	// (0x00048b16) listrow_wgtman_pane_t2_ParamLimits

0xfd9a,	// (0x00057bf4) listrow_wgtman_pane_t_ParamLimits

0x0ce2,	// (0x00048b3c) wait_bar_pane_cp09_ParamLimits

0xd53f,	// (0x00055399) bg_popup_heading_pane_cp02

0xda63,	// (0x000558bd) popup_notif_wgt_heading_pane_g1

0xda6b,	// (0x000558c5) popup_notif_wgt_heading_pane_t1

0xd53f,	// (0x00055399) main_vids_pane

0xd53f,	// (0x00055399) vids_listscroll_pane

0x9c73,	// (0x00051acd) scroll_pane_cp040

0xd53f,	// (0x00055399) vids_list_pane

0x9c7e,	// (0x00051ad8) vids_list_double_pane_ParamLimits

0x9c7e,	// (0x00051ad8) vids_list_double_pane

0x9c8f,	// (0x00051ae9) vids_list_double_pane_g1

0x9c98,	// (0x00051af2) vids_list_double_pane_t1

0x9ca8,	// (0x00051b02) vids_list_double_pane_t2

0x0001,

0xfe33,	// (0x00057c8d) vids_list_double_pane_t

0xdf90,	// (0x00055dea) main_ncimui_pane_ParamLimits

0x82c9,	// (0x00050123) main_ncimui_pane_g1_ParamLimits

0x82d5,	// (0x0005012f) main_ncimui_pane_g2_ParamLimits

0x82d5,	// (0x0005012f) main_ncimui_pane_g2

0x0001,

0xfb18,	// (0x00057972) main_ncimui_pane_g_ParamLimits

0xfb18,	// (0x00057972) main_ncimui_pane_g

0x99f5,	// (0x0005184f) main_welc_pane_g1_ParamLimits

0x99f5,	// (0x0005184f) main_welc_pane_g1

0x9a0a,	// (0x00051864) main_welc_pane_g2_ParamLimits

0x9a0a,	// (0x00051864) main_welc_pane_g2

0x0003,

0xfe1d,	// (0x00057c77) main_welc_pane_g_ParamLimits

0xfe1d,	// (0x00057c77) main_welc_pane_g

0xe169,	// (0x00055fc3) listscroll_mce_pane_ParamLimits

0xee87,	// (0x00056ce1) wait_bar_pane_cp10

0x4b27,	// (0x0004c981) main_cale_day_pane_ParamLimits

0x4b27,	// (0x0004c981) main_cale_week_pane_ParamLimits

0xe169,	// (0x00055fc3) main_messa_pane_ParamLimits

0x604a,	// (0x0004dea4) main_clock2_btn_pane_ParamLimits

0x604a,	// (0x0004dea4) main_clock2_btn_pane

0xadfe,	// (0x00052c58) main_clock2_btn_pane_cp01_ParamLimits

0xadfe,	// (0x00052c58) main_clock2_btn_pane_cp01

0xcee1,	// (0x00054d3b) list_cale_mrui_pane_ParamLimits

0xd320,	// (0x0005517a) main_cf0_pane_g2

0x0001,

0xfd6c,	// (0x00057bc6) main_cf0_pane_g

0x966a,	// (0x000514c4) area_left_week_number_pane_ParamLimits

0x9676,	// (0x000514d0) area_top_day_name_pane_ParamLimits

0x9689,	// (0x000514e3) frame_month_view_pane_ParamLimits

0xd439,	// (0x00055293) grid_month_view_pane_ParamLimits

0xd447,	// (0x000552a1) frm_month_g1_ParamLimits

0x970a,	// (0x00051564) frm_month_g2_ParamLimits

0x971d,	// (0x00051577) frm_month_g3_ParamLimits

0x9730,	// (0x0005158a) frm_month_g4_ParamLimits

0x9743,	// (0x0005159d) frm_month_g5_ParamLimits

0x9756,	// (0x000515b0) frm_month_g6_ParamLimits

0x9769,	// (0x000515c3) frm_month_g7_ParamLimits

0xd454,	// (0x000552ae) frm_month_g8_ParamLimits

0x977c,	// (0x000515d6) frm_month_g9_ParamLimits

0x978c,	// (0x000515e6) frm_month_g10_ParamLimits

0x979c,	// (0x000515f6) frm_month_g11_ParamLimits

0x97ac,	// (0x00051606) frm_month_g12_ParamLimits

0x97be,	// (0x00051618) frm_month_g13_ParamLimits

0x97d0,	// (0x0005162a) frm_month_g14_ParamLimits

0x97e4,	// (0x0005163e) frm_month_g15_ParamLimits

0x97f8,	// (0x00051652) frm_month_g16_ParamLimits

0xfdc4,	// (0x00057c1e) frm_month_g_ParamLimits

0xd461,	// (0x000552bb) cell_top_day_name_pane_t1_ParamLimits

0x980c,	// (0x00051666) cell_area_left_week_number_pane_g1_ParamLimits

0x9818,	// (0x00051672) cell_area_left_week_number_pane_t1_ParamLimits

0xe1e4,	// (0x0005603e) cell_month_view_pane_g1_ParamLimits

0x982b,	// (0x00051685) cell_month_view_pane_t1_ParamLimits

0xe161,	// (0x00055fbb) main_clock2_btn_pane_g1

0xda79,	// (0x000558d3) main_clock2_btn_pane_t1

0xdf90,	// (0x00055dea) listscroll_cmail_pane_ParamLimits

0xcc8b,	// (0x00054ae5) main_sp_fs_email_pane_g1_ParamLimits

0xcc97,	// (0x00054af1) main_sp_fs_email_pane_g2_ParamLimits

0xfc17,	// (0x00057a71) main_sp_fs_email_pane_g_ParamLimits

0xcfe8,	// (0x00054e42) list_recal_day_pane_ParamLimits

0xcff9,	// (0x00054e53) mian_recal_day_pane_t1

0x0a2d,	// (0x00048887) list_single_dyc_row_text_pane_t4_ParamLimits

0x0a2d,	// (0x00048887) list_single_dyc_row_text_pane_t4

0x0a76,	// (0x000488d0) list_single_dyc_row_text_pane_t5_ParamLimits

0x0a76,	// (0x000488d0) list_single_dyc_row_text_pane_t5

0xbe02,	// (0x00053c5c) list_single_dyc_row_text_pane_t6_ParamLimits

0xbe02,	// (0x00053c5c) list_single_dyc_row_text_pane_t6

0xe820,	// (0x0005667a) aid_mgn_list_cale_time_pane

0xdf90,	// (0x00055dea) main_gallery2_pane_ParamLimits

0xae14,	// (0x00052c6e) main_clock2_pane_cp01_t1

0xae24,	// (0x00052c7e) main_clock2_pane_cp01_t3

0x0001,

0xf70c,	// (0x00057566) main_clock2_pane_cp01_t

0x1521,	// (0x0004937b) cale_week_scroll_pane_g16_ParamLimits

0x1521,	// (0x0004937b) cale_week_scroll_pane_g16

0xe42f,	// (0x00056289) vorec_slider_pane

0xda03,	// (0x0005585d) vidtel_button_pane_t1_ParamLimits

0x9050,	// (0x00050eaa) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9050,	// (0x00050eaa) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9061,	// (0x00050ebb) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9061,	// (0x00050ebb) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd1a,	// (0x00057b74) main_fs_bigclock_clock_pane_g_ParamLimits

0x9074,	// (0x00050ece) main_fs_bigclock_clock_pane_t1_ParamLimits

0x908a,	// (0x00050ee4) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd23,	// (0x00057b7d) main_fs_bigclock_clock_pane_t_ParamLimits

0x591f,	// (0x0004d779) main_mup3_lyrics_pane_ParamLimits

0x591f,	// (0x0004d779) main_mup3_lyrics_pane

0x9cd0,	// (0x00051b2a) main_mup3_lyrics_pane_t1_ParamLimits

0x9cd0,	// (0x00051b2a) main_mup3_lyrics_pane_t1

0xb244,	// (0x0005309e) aid_main_mp4_pane_t1_area

0xb24e,	// (0x000530a8) aid_main_mp4_pane_t2_area

0xb2fa,	// (0x00053154) main_mp4_pane_g7_ParamLimits

0xb2fa,	// (0x00053154) main_mp4_pane_g7

0xb306,	// (0x00053160) main_mp4_pane_g8_ParamLimits

0xb306,	// (0x00053160) main_mp4_pane_g8

0x6a02,	// (0x0004e85c) aid_call6_pane_g1_size

0x996d,	// (0x000517c7) list_double_large_graphic_phob2_other_pane_ParamLimits

0x996d,	// (0x000517c7) list_double_large_graphic_phob2_other_pane

0xe7d8,	// (0x00056632) list_double_large_graphic_phob2_other_pane_g1

0xd53f,	// (0x00055399) list_highlight_pane_cp026

0xdf90,	// (0x00055dea) main_welc_pane_ParamLimits

0x8a87,	// (0x000508e1) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x8a87,	// (0x000508e1) main_sp_fs_ctrlbar_pane_g3

0x8aa1,	// (0x000508fb) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x8aa1,	// (0x000508fb) main_sp_fs_ctrlbar_pane_g4

0x8ad5,	// (0x0005092f) toolbar2_fixed_button_pane_cp01

0x8ae0,	// (0x0005093a) toolbar2_fixed_button_pane_cp02

0x8aed,	// (0x00050947) toolbar2_fixed_button_pane_cp03

0x99a2,	// (0x000517fc) list_welc_entry_pane_ParamLimits

0x99a2,	// (0x000517fc) list_welc_entry_pane

0x9a1f,	// (0x00051879) main_welc_pane_g3_ParamLimits

0x9a1f,	// (0x00051879) main_welc_pane_g3

0x9a76,	// (0x000518d0) main_welc_pane_t2_ParamLimits

0x9a76,	// (0x000518d0) main_welc_pane_t2

0x9a91,	// (0x000518eb) main_welc_pane_t3_ParamLimits

0x9a91,	// (0x000518eb) main_welc_pane_t3

0x0005,

0xfe26,	// (0x00057c80) main_welc_pane_t_ParamLimits

0xfe26,	// (0x00057c80) main_welc_pane_t

0x9bc1,	// (0x00051a1b) welc_button_pane_ParamLimits

0x9bc1,	// (0x00051a1b) welc_button_pane

0x9c3b,	// (0x00051a95) welc_service_logo_pane_ParamLimits

0x9c3b,	// (0x00051a95) welc_service_logo_pane

0x9cec,	// (0x00051b46) list_single_welc_entry_pane_ParamLimits

0x9cec,	// (0x00051b46) list_single_welc_entry_pane

0x9cfd,	// (0x00051b57) list_single_welc_entry_pane_g1

0x9d05,	// (0x00051b5f) list_single_welc_entry_pane_t1

0x9d13,	// (0x00051b6d) list_single_welc_entry_pane_t2

0x0001,

0xfe38,	// (0x00057c92) list_single_welc_entry_pane_t

0xd53f,	// (0x00055399) bg_button_pane_cp035

0x9d21,	// (0x00051b7b) welc_button_pane_t1

0xda87,	// (0x000558e1) welc_service_logo_pane_g1

0xda90,	// (0x000558ea) welc_service_logo_pane_g2

0x0001,

0xfe3d,	// (0x00057c97) welc_service_logo_pane_g

0xd53f,	// (0x00055399) main_int_radio_pane

0xe2cd,	// (0x00056127) list_single_fs_dyc_pane_g1

0x0d00,	// (0x00048b5a) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x0d00,	// (0x00048b5a) list_double_large_graphic_phob2_pane_g3

0x0d0c,	// (0x00048b66) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x0d0c,	// (0x00048b66) list_double_large_graphic_phob2_pane_g4

0x9d2f,	// (0x00051b89) main_int_radio1_pane_ParamLimits

0x9d2f,	// (0x00051b89) main_int_radio1_pane

0xda99,	// (0x000558f3) find_pane_cp02

0x9d4c,	// (0x00051ba6) input_focus_pane_cp12_ParamLimits

0x9d4c,	// (0x00051ba6) input_focus_pane_cp12

0x9d5c,	// (0x00051bb6) input_focus_pane_cp13_ParamLimits

0x9d5c,	// (0x00051bb6) input_focus_pane_cp13

0x9d70,	// (0x00051bca) input_focus_pane_cp14_ParamLimits

0x9d70,	// (0x00051bca) input_focus_pane_cp14

0xdaa2,	// (0x000558fc) int_radio1_listscroll_pane

0x9d84,	// (0x00051bde) main_int_radio1_pane_g1_ParamLimits

0x9d84,	// (0x00051bde) main_int_radio1_pane_g1

0x9d9c,	// (0x00051bf6) main_int_radio1_pane_t1_ParamLimits

0x9d9c,	// (0x00051bf6) main_int_radio1_pane_t1

0x9db7,	// (0x00051c11) main_int_radio1_pane_t2_ParamLimits

0x9db7,	// (0x00051c11) main_int_radio1_pane_t2

0x9dd2,	// (0x00051c2c) main_int_radio1_pane_t3_ParamLimits

0x9dd2,	// (0x00051c2c) main_int_radio1_pane_t3

0x9ded,	// (0x00051c47) main_int_radio1_pane_t4_ParamLimits

0x9ded,	// (0x00051c47) main_int_radio1_pane_t4

0xdaac,	// (0x00055906) main_int_radio1_pane_t5_ParamLimits

0xdaac,	// (0x00055906) main_int_radio1_pane_t5

0x9dff,	// (0x00051c59) main_int_radio1_pane_t6_ParamLimits

0x9dff,	// (0x00051c59) main_int_radio1_pane_t6

0x9e14,	// (0x00051c6e) main_int_radio1_pane_t7_ParamLimits

0x9e14,	// (0x00051c6e) main_int_radio1_pane_t7

0x9e29,	// (0x00051c83) main_int_radio1_pane_t8_ParamLimits

0x9e29,	// (0x00051c83) main_int_radio1_pane_t8

0x9e48,	// (0x00051ca2) main_int_radio1_pane_t9_ParamLimits

0x9e48,	// (0x00051ca2) main_int_radio1_pane_t9

0x9e5a,	// (0x00051cb4) main_int_radio1_pane_t10_ParamLimits

0x9e5a,	// (0x00051cb4) main_int_radio1_pane_t10

0x9e80,	// (0x00051cda) main_int_radio1_pane_t11_ParamLimits

0x9e80,	// (0x00051cda) main_int_radio1_pane_t11

0x9ea6,	// (0x00051d00) main_int_radio1_pane_t12_ParamLimits

0x9ea6,	// (0x00051d00) main_int_radio1_pane_t12

0x000b,

0xfe42,	// (0x00057c9c) main_int_radio1_pane_t_ParamLimits

0xfe42,	// (0x00057c9c) main_int_radio1_pane_t

0xdabe,	// (0x00055918) int_radio_list_pane

0xd47c,	// (0x000552d6) scroll_pane_cp037

0xdac6,	// (0x00055920) list_double_large_graphic_int_radio_pane_ParamLimits

0xdac6,	// (0x00055920) list_double_large_graphic_int_radio_pane

0xdade,	// (0x00055938) list_double_large_graphic_int_radio_pane_g1

0xc07a,	// (0x00053ed4) list_double_large_graphic_int_radio_pane_t1

0xc088,	// (0x00053ee2) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe5b,	// (0x00057cb5) list_double_large_graphic_int_radio_pane_t

0xd53f,	// (0x00055399) list_highlight_pane_cp027

0xda3c,	// (0x00055896) main_button_pane_4

0x9a32,	// (0x0005188c) main_welc_pane_g4_ParamLimits

0x9a32,	// (0x0005188c) main_welc_pane_g4

0x9aaa,	// (0x00051904) main_welc_pane_t4_ParamLimits

0x9aaa,	// (0x00051904) main_welc_pane_t4

0x9ac1,	// (0x0005191b) main_welc_pane_t5_ParamLimits

0x9ac1,	// (0x0005191b) main_welc_pane_t5

0x9afe,	// (0x00051958) main_welc_pane_t6_ParamLimits

0x9afe,	// (0x00051958) main_welc_pane_t6

0x9bd8,	// (0x00051a32) welc_button_pane_2_ParamLimits

0x9bd8,	// (0x00051a32) welc_button_pane_2

0x9bf4,	// (0x00051a4e) welc_button_pane_3_ParamLimits

0x9bf4,	// (0x00051a4e) welc_button_pane_3

0xda44,	// (0x0005589e) welc_button_pane_4

0x9c13,	// (0x00051a6d) welc_button_pane_5_ParamLimits

0x9c13,	// (0x00051a6d) welc_button_pane_5

0x0df6,	// (0x00048c50) main_popup_welc_pane

0xdaf6,	// (0x00055950) main_welc_sk_g3

0xdb00,	// (0x0005595a) main_welc_sk_g4

0xdb0a,	// (0x00055964) main_welc_sk_t3

0xdb1a,	// (0x00055974) main_welc_sk_t4

0xdb2a,	// (0x00055984) popup_welc_pane_t4

0xdb38,	// (0x00055992) popup_welc_pane_t5

0xdb46,	// (0x000559a0) popup_welc_pane_t6

0xd53f,	// (0x00055399) main_acti_pane

0xd53f,	// (0x00055399) main_sso_pane

0x9eb8,	// (0x00051d12) sso_body_pane_ParamLimits

0x9eb8,	// (0x00051d12) sso_body_pane

0x9ecc,	// (0x00051d26) sso_logo_pane_ParamLimits

0x9ecc,	// (0x00051d26) sso_logo_pane

0x9efc,	// (0x00051d56) sso_sk_pane_ParamLimits

0x9efc,	// (0x00051d56) sso_sk_pane

0xe465,	// (0x000562bf) main_sso_logo_pane_g1

0x9f0e,	// (0x00051d68) sso_sk_pane_t1_ParamLimits

0x9f0e,	// (0x00051d68) sso_sk_pane_t1

0x9f28,	// (0x00051d82) sso_sk_pane_t2_ParamLimits

0x9f28,	// (0x00051d82) sso_sk_pane_t2

0x0001,

0xfe60,	// (0x00057cba) sso_sk_pane_t_ParamLimits

0xfe60,	// (0x00057cba) sso_sk_pane_t

0xdb84,	// (0x000559de) aid_sso_gap

0xdb8d,	// (0x000559e7) aid_sso_txt1

0xdb97,	// (0x000559f1) aid_sso_txt2

0xdba1,	// (0x000559fb) aid_sso_txt3

0x0002,

0xfe65,	// (0x00057cbf) aid_sso_txt

0xdbab,	// (0x00055a05) aid_sso_widget

0x9f92,	// (0x00051dec) sso_btn_pane_ParamLimits

0x9f92,	// (0x00051dec) sso_btn_pane

0xa01a,	// (0x00051e74) sso_option_pane_ParamLimits

0xa01a,	// (0x00051e74) sso_option_pane

0xa09a,	// (0x00051ef4) sso_query_pane_ParamLimits

0xa09a,	// (0x00051ef4) sso_query_pane

0xa0f0,	// (0x00051f4a) sso_query_pane_cp01_ParamLimits

0xa0f0,	// (0x00051f4a) sso_query_pane_cp01

0xa14a,	// (0x00051fa4) sso_t_hdr_pane_ParamLimits

0xa14a,	// (0x00051fa4) sso_t_hdr_pane

0xa174,	// (0x00051fce) sso_t_nml_pane_ParamLimits

0xa174,	// (0x00051fce) sso_t_nml_pane

0xdbb5,	// (0x00055a0f) sso_t_sub_pane

0x9ed9,	// (0x00051d33) sso_popup_window_ParamLimits

0x9ed9,	// (0x00051d33) sso_popup_window

0x9f3e,	// (0x00051d98) sso_apps_pane_ParamLimits

0x9f3e,	// (0x00051d98) sso_apps_pane

0x9f68,	// (0x00051dc2) sso_body_pane_g1

0x9f72,	// (0x00051dcc) sso_body_pane_t1

0x9f82,	// (0x00051ddc) sso_body_pane_t2

0x0001,

0xfe6c,	// (0x00057cc6) sso_body_pane_t

0x9fe4,	// (0x00051e3e) sso_btn_pane_cp01_ParamLimits

0x9fe4,	// (0x00051e3e) sso_btn_pane_cp01

0xa06e,	// (0x00051ec8) sso_prog_pane_ParamLimits

0xa06e,	// (0x00051ec8) sso_prog_pane

0xa1ca,	// (0x00052024) sso_t_hdr_pane_t1_ParamLimits

0xa1ca,	// (0x00052024) sso_t_hdr_pane_t1

0xdbca,	// (0x00055a24) input_focus_pane_cp10_ParamLimits

0xdbca,	// (0x00055a24) input_focus_pane_cp10

0xdbe4,	// (0x00055a3e) sso_query_pane_t1_ParamLimits

0xdbe4,	// (0x00055a3e) sso_query_pane_t1

0xdbf7,	// (0x00055a51) sso_query_pane_t2_ParamLimits

0xdbf7,	// (0x00055a51) sso_query_pane_t2

0xdc12,	// (0x00055a6c) sso_query_pane_t3_ParamLimits

0xdc12,	// (0x00055a6c) sso_query_pane_t3

0xdc3c,	// (0x00055a96) sso_query_pane_t4_ParamLimits

0xdc3c,	// (0x00055a96) sso_query_pane_t4

0x0003,

0xfe71,	// (0x00057ccb) sso_query_pane_t_ParamLimits

0xfe71,	// (0x00057ccb) sso_query_pane_t

0xd53f,	// (0x00055399) bg_button_pane_cp22

0xdae7,	// (0x00055941) sso_btn_pane_t1

0xa1dd,	// (0x00052037) sso_t_nml_pane_t1_ParamLimits

0xa1dd,	// (0x00052037) sso_t_nml_pane_t1

0xdc60,	// (0x00055aba) sso_option_row_pane_ParamLimits

0xdc60,	// (0x00055aba) sso_option_row_pane

0xdc73,	// (0x00055acd) sso_t_sub_pane_t1_ParamLimits

0xdc73,	// (0x00055acd) sso_t_sub_pane_t1

0xdf90,	// (0x00055dea) bg_popup_window_pane_cp11_ParamLimits

0xdf90,	// (0x00055dea) bg_popup_window_pane_cp11

0xdc90,	// (0x00055aea) popup_sk_window_cp01_ParamLimits

0xdc90,	// (0x00055aea) popup_sk_window_cp01

0xdc9d,	// (0x00055af7) sso_popup_body_pane_ParamLimits

0xdc9d,	// (0x00055af7) sso_popup_body_pane

0xdcaa,	// (0x00055b04) scroll_pane_cp21_ParamLimits

0xdcaa,	// (0x00055b04) scroll_pane_cp21

0xdcb7,	// (0x00055b11) sso_popup_body_t_pane_ParamLimits

0xdcb7,	// (0x00055b11) sso_popup_body_t_pane

0xdcc4,	// (0x00055b1e) sso_popup_body_t_hdr_pane_ParamLimits

0xdcc4,	// (0x00055b1e) sso_popup_body_t_hdr_pane

0xdcd7,	// (0x00055b31) sso_popup_body_t_nml_pane_ParamLimits

0xdcd7,	// (0x00055b31) sso_popup_body_t_nml_pane

0xdcf5,	// (0x00055b4f) sso_popup_body_t_sub_pane_ParamLimits

0xdcf5,	// (0x00055b4f) sso_popup_body_t_sub_pane

0xdd18,	// (0x00055b72) sso_popup_body_t_hdr_pane_t1

0xa1f8,	// (0x00052052) sso_popup_body_t_nml_pane_t1_ParamLimits

0xa1f8,	// (0x00052052) sso_popup_body_t_nml_pane_t1

0xdd28,	// (0x00055b82) sso_popup_body_t_sub_pane_t1_ParamLimits

0xdd28,	// (0x00055b82) sso_popup_body_t_sub_pane_t1

0xe465,	// (0x000562bf) sso_prog_pane_g1

0xa231,	// (0x0005208b) sso_apps_pane_comp1_ParamLimits

0xa231,	// (0x0005208b) sso_apps_pane_comp1

0xdd4d,	// (0x00055ba7) sso_apps_pane_comp1_g1

0xdd55,	// (0x00055baf) sso_apps_pane_comp1_t1

0xdd71,	// (0x00055bcb) sso_option_row_pane_g1

0xdd79,	// (0x00055bd3) sso_option_row_pane_t1

0x998f,	// (0x000517e9) bg_welc_area_ParamLimits

0x998f,	// (0x000517e9) bg_welc_area

0x9b3c,	// (0x00051996) sso_t_hdr_pane_a_t1_ParamLimits

0x9b3c,	// (0x00051996) sso_t_hdr_pane_a_t1

0x9b57,	// (0x000519b1) sso_t_nml_pane_a_t1_ParamLimits

0x9b57,	// (0x000519b1) sso_t_nml_pane_a_t1

0x9b86,	// (0x000519e0) sso_t_sub_pane_a_t1_ParamLimits

0x9b86,	// (0x000519e0) sso_t_sub_pane_a_t1

0xdae7,	// (0x00055941) sso_btn_pane_t1_copy1

0xd53f,	// (0x00055399) welc_button_pane_2_comp1

0xdb54,	// (0x000559ae) sso_t_hdr_pane_p_t1

0xdb64,	// (0x000559be) sso_t_nml_pane_p_t1

0xdb74,	// (0x000559ce) sso_t_sub_pane_p_t1

0xcd38,	// (0x00054b92) list_cmail_pane_ParamLimits

0x9c29,	// (0x00051a83) welc_button_pane_cp01_ParamLimits

0x9c29,	// (0x00051a83) welc_button_pane_cp01

0xd53f,	// (0x00055399) main_att_pane

0xdd63,	// (0x00055bbd) input_focus_pane_cp10_t1

0xdd79,	// (0x00055bd3) sso_option_row_pane_t1_ParamLimits

0xa24b,	// (0x000520a5) main_att_body_pane_ParamLimits

0xa24b,	// (0x000520a5) main_att_body_pane

0xa280,	// (0x000520da) att_btn_pane_ParamLimits

0xa280,	// (0x000520da) att_btn_pane

0xa2a5,	// (0x000520ff) att_btn_pane_cp01_ParamLimits

0xa2a5,	// (0x000520ff) att_btn_pane_cp01

0xa2c5,	// (0x0005211f) att_li_srv_pane_ParamLimits

0xa2c5,	// (0x0005211f) att_li_srv_pane

0xa2e2,	// (0x0005213c) att_opt_pane_ParamLimits

0xa2e2,	// (0x0005213c) att_opt_pane

0xa32e,	// (0x00052188) att_query_pane_ParamLimits

0xa32e,	// (0x00052188) att_query_pane

0xa37a,	// (0x000521d4) att_query_pane_cp01_ParamLimits

0xa37a,	// (0x000521d4) att_query_pane_cp01

0xa3c6,	// (0x00052220) att_t_hdr_pane_ParamLimits

0xa3c6,	// (0x00052220) att_t_hdr_pane

0xa41e,	// (0x00052278) att_t_nml_pane_ParamLimits

0xa41e,	// (0x00052278) att_t_nml_pane

0xa457,	// (0x000522b1) att_t_nml_pane_cp01_ParamLimits

0xa457,	// (0x000522b1) att_t_nml_pane_cp01

0xa483,	// (0x000522dd) att_t_nmlb_pane_ParamLimits

0xa483,	// (0x000522dd) att_t_nmlb_pane

0xa4a0,	// (0x000522fa) att_term_pane_ParamLimits

0xa4a0,	// (0x000522fa) att_term_pane

0xa4ec,	// (0x00052346) main_att_body_pane_g1_ParamLimits

0xa4ec,	// (0x00052346) main_att_body_pane_g1

0xdd8f,	// (0x00055be9) att_t_hdr_pane_t1_ParamLimits

0xdd8f,	// (0x00055be9) att_t_hdr_pane_t1

0xdda8,	// (0x00055c02) att_t_nml_pane_t1_ParamLimits

0xdda8,	// (0x00055c02) att_t_nml_pane_t1

0xddcd,	// (0x00055c27) att_btn_pane_t1

0xd53f,	// (0x00055399) bg_button_pane_cp23

0xa523,	// (0x0005237d) att_li_srv_row_pane_ParamLimits

0xa523,	// (0x0005237d) att_li_srv_row_pane

0xdddd,	// (0x00055c37) att_t_nmlb_pane_t1_ParamLimits

0xdddd,	// (0x00055c37) att_t_nmlb_pane_t1

0xddf6,	// (0x00055c50) att_query_pane_t1

0xde05,	// (0x00055c5f) att_query_pane_t2

0xde14,	// (0x00055c6e) att_query_pane_t3

0x0002,

0xfe7a,	// (0x00057cd4) att_query_pane_t

0xde23,	// (0x00055c7d) input_focus_pane_cp11

0xde2c,	// (0x00055c86) att_term_pane_t1_ParamLimits

0xde2c,	// (0x00055c86) att_term_pane_t1

0xd53f,	// (0x00055399) att_opt_row_pane

0xde49,	// (0x00055ca3) att_opt_row_pane_g1

0xde51,	// (0x00055cab) att_opt_row_pane_t1_ParamLimits

0xde51,	// (0x00055cab) att_opt_row_pane_t1

0xa533,	// (0x0005238d) att_li_srv_row_pane_g1

0xa53b,	// (0x00052395) att_li_srv_row_pane_t1

0xa550,	// (0x000523aa) att_li_srv_row_pane_t2

0x0001,

0xfe81,	// (0x00057cdb) att_li_srv_row_pane_t

0xd53f,	// (0x00055399) main_call7_pane

0xd53f,	// (0x00055399) main_vod_pane

0xdbb5,	// (0x00055a0f) sso_t_sub_pane_ParamLimits

0xa261,	// (0x000520bb) att_btn_emg_pane_ParamLimits

0xa261,	// (0x000520bb) att_btn_emg_pane

0xa53b,	// (0x00052395) att_li_srv_row_pane_t1_ParamLimits

0xa550,	// (0x000523aa) att_li_srv_row_pane_t2_ParamLimits

0xfe81,	// (0x00057cdb) att_li_srv_row_pane_t_ParamLimits

0xde6a,	// (0x00055cc4) att_btn_close_pane_g1

0xd53f,	// (0x00055399) bg_button_pane_cp24

0xa565,	// (0x000523bf) main_vod_body_pane_ParamLimits

0xa565,	// (0x000523bf) main_vod_body_pane

0xa579,	// (0x000523d3) main_vod_body_pane_g1_ParamLimits

0xa579,	// (0x000523d3) main_vod_body_pane_g1

0xa5ad,	// (0x00052407) scroll_pane_cp24_ParamLimits

0xa5ad,	// (0x00052407) scroll_pane_cp24

0xa5fb,	// (0x00052455) vod_btn_pane_ParamLimits

0xa5fb,	// (0x00052455) vod_btn_pane

0xa63f,	// (0x00052499) vod_det_pane_ParamLimits

0xa63f,	// (0x00052499) vod_det_pane

0xa671,	// (0x000524cb) vod_logo_g1_ParamLimits

0xa671,	// (0x000524cb) vod_logo_g1

0xa6af,	// (0x00052509) vod_opt_pane_ParamLimits

0xa6af,	// (0x00052509) vod_opt_pane

0xa6e2,	// (0x0005253c) vod_opt_pane_cp01_ParamLimits

0xa6e2,	// (0x0005253c) vod_opt_pane_cp01

0xa70e,	// (0x00052568) vod_query_pane_ParamLimits

0xa70e,	// (0x00052568) vod_query_pane

0xa73b,	// (0x00052595) vod_query_pane_cp01_ParamLimits

0xa73b,	// (0x00052595) vod_query_pane_cp01

0xa747,	// (0x000525a1) vod_t_nml_pane_ParamLimits

0xa747,	// (0x000525a1) vod_t_nml_pane

0xa7f4,	// (0x0005264e) vod_t_nml_pane_cp01_ParamLimits

0xa7f4,	// (0x0005264e) vod_t_nml_pane_cp01

0xa830,	// (0x0005268a) vod_t_sub_pane_ParamLimits

0xa830,	// (0x0005268a) vod_t_sub_pane

0xa865,	// (0x000526bf) vod_t_sub_pane_cp01_ParamLimits

0xa865,	// (0x000526bf) vod_t_sub_pane_cp01

0xde23,	// (0x00055c7d) vod_query_field_pane

0xddf6,	// (0x00055c50) vod_query_pane_t1

0xd53f,	// (0x00055399) bg_button_pane_cp25

0xddcd,	// (0x00055c27) sso_btn_pane_t1_copy2

0xa891,	// (0x000526eb) vod_t_nml_pane_t1_ParamLimits

0xa891,	// (0x000526eb) vod_t_nml_pane_t1

0xde72,	// (0x00055ccc) vod_opt_row_pane_ParamLimits

0xde72,	// (0x00055ccc) vod_opt_row_pane

0xde84,	// (0x00055cde) vod_t_sub_pane_t1_ParamLimits

0xde84,	// (0x00055cde) vod_t_sub_pane_t1

0xa8c2,	// (0x0005271c) vod_det_cell_pane_ParamLimits

0xa8c2,	// (0x0005271c) vod_det_cell_pane

0xd53f,	// (0x00055399) input_focus_pane_cp15

0xde9d,	// (0x00055cf7) vod_query_field_pane_t1

0xdeab,	// (0x00055d05) vod_opt_row_pane_g1_ParamLimits

0xdeab,	// (0x00055d05) vod_opt_row_pane_g1

0xdeb7,	// (0x00055d11) vod_opt_row_pane_t1_ParamLimits

0xdeb7,	// (0x00055d11) vod_opt_row_pane_t1

0xdedc,	// (0x00055d36) vod_det_cell_field_pane

0xdee5,	// (0x00055d3f) vod_det_cell_pane_g1

0xddf6,	// (0x00055c50) vod_det_cell_pane_t1

0xd53f,	// (0x00055399) input_focus_pane_cp16

0xde9d,	// (0x00055cf7) vod_det_cell_field_pane_t1

0x9320,	// (0x0005117a) call7_btn_grp_pane_ParamLimits

0x9320,	// (0x0005117a) call7_btn_grp_pane

0xa8d6,	// (0x00052730) call7_bubble_pane_ParamLimits

0xa8d6,	// (0x00052730) call7_bubble_pane

0xa8ed,	// (0x00052747) cell_call7_btn_pane_ParamLimits

0xa8ed,	// (0x00052747) cell_call7_btn_pane

0xa900,	// (0x0005275a) call7_pane_g1_ParamLimits

0xa900,	// (0x0005275a) call7_pane_g1

0xa90f,	// (0x00052769) call7_windows_conf_pane_ParamLimits

0xa90f,	// (0x00052769) call7_windows_conf_pane

0xa929,	// (0x00052783) popup_call7_1st_window_ParamLimits

0xa929,	// (0x00052783) popup_call7_1st_window

0xa93a,	// (0x00052794) popup_call7_2nd_window_ParamLimits

0xa93a,	// (0x00052794) popup_call7_2nd_window

0xa94b,	// (0x000527a5) popup_call7_3rd_window_ParamLimits

0xa94b,	// (0x000527a5) popup_call7_3rd_window

0xd53f,	// (0x00055399) bg_button_pane_cp26

0xd39d,	// (0x000551f7) cell_call7_btn_pane_g1

0xd9ec,	// (0x00055846) cell_call7_btn_pane_t1

0xd53f,	// (0x00055399) bg_popup_window_pane_cp12

0xdeed,	// (0x00055d47) popup_call7_1st_window_g1

0xdef5,	// (0x00055d4f) popup_call7_1st_window_g2

0xdefd,	// (0x00055d57) popup_call7_1st_window_g3

0x0002,

0xfe86,	// (0x00057ce0) popup_call7_1st_window_g

0xdf05,	// (0x00055d5f) popup_call7_1st_window_t1

0xdf14,	// (0x00055d6e) popup_call7_1st_window_t2

0xdf22,	// (0x00055d7c) popup_call7_1st_window_t3

0x0002,

0xfe8d,	// (0x00057ce7) popup_call7_1st_window_t

0xd53f,	// (0x00055399) bg_popup_window_pane_cp13

0xdf30,	// (0x00055d8a) popup_call7_2nd_window_g1

0xdf38,	// (0x00055d92) popup_call7_2nd_window_g2

0xdf40,	// (0x00055d9a) popup_call7_2nd_window_g3

0x0002,

0xfe94,	// (0x00057cee) popup_call7_2nd_window_g

0xdf48,	// (0x00055da2) popup_call7_2nd_window_t1

0xd53f,	// (0x00055399) bg_popup_window_pane_cp14

0xdf57,	// (0x00055db1) call7_list_conf_pane

0xdf5f,	// (0x00055db9) call7_list_conf_row_pane_ParamLimits

0xdf5f,	// (0x00055db9) call7_list_conf_row_pane

0xdf72,	// (0x00055dcc) call7_list_conf_row_pane_g1

0xdf7a,	// (0x00055dd4) call7_list_conf_row_pane_g2

0x0001,

0xfe9b,	// (0x00057cf5) call7_list_conf_row_pane_g

0xdf82,	// (0x00055ddc) call7_list_conf_row_pane_t1

0xd53f,	// (0x00055399) list_highlight_pane_cp22
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

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small
