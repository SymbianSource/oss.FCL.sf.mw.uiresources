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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0004cd3d };

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
0x1079,	// (0x0004ddb6) Screen

0x1085,	// (0x0004ddc2) application_window

0x10d1,	// (0x0004de0e) area_bottom_pane_ParamLimits

0x10d1,	// (0x0004de0e) area_bottom_pane

0x110a,	// (0x0004de47) area_top_pane_ParamLimits

0x110a,	// (0x0004de47) area_top_pane

0x981b,	// (0x00056558) call_video_uplink_pane_ParamLimits

0x981b,	// (0x00056558) call_video_uplink_pane

0x1198,	// (0x0004ded5) main_pane_ParamLimits

0x1198,	// (0x0004ded5) main_pane

0xc959,	// (0x00059696) context_pane

0x443e,	// (0x0005117b) navi_pane

0x4470,	// (0x000511ad) popup_cale_events_window_ParamLimits

0x4470,	// (0x000511ad) popup_cale_events_window

0xc96c,	// (0x000596a9) popup_mup_playback_window

0x4488,	// (0x000511c5) signal_pane

0xa90b,	// (0x00057648) main_browser_pane

0xaad9,	// (0x00057816) main_burst_pane

0x419e,	// (0x00050edb) main_calc_pane

0xc93f,	// (0x0005967c) main_cale_day_pane

0x17dd,	// (0x0004e51a) main_cale_month_pane

0xc93f,	// (0x0005967c) main_cale_week_pane

0xaad9,	// (0x00057816) main_call_pane

0xa5eb,	// (0x00057328) main_call_poc_pane

0xaad9,	// (0x00057816) main_camera_pane

0xaad9,	// (0x00057816) main_chi_dic_pane

0xb2ca,	// (0x00058007) main_clock_pane

0xa5eb,	// (0x00057328) main_fmradio_pane

0xaad9,	// (0x00057816) main_graph_messa_pane

0xa5eb,	// (0x00057328) main_help_pane

0xa90b,	// (0x00057648) main_im_pane

0xa846,	// (0x00057583) main_image_pane_ParamLimits

0xa846,	// (0x00057583) main_image_pane

0xa5eb,	// (0x00057328) main_location2_pane

0xaad9,	// (0x00057816) main_location_pane

0xa846,	// (0x00057583) main_messa_pane

0xa5eb,	// (0x00057328) main_mp2_pane

0xaad9,	// (0x00057816) main_mp_pane

0xa5eb,	// (0x00057328) main_msg_pane

0xa5eb,	// (0x00057328) main_mup_eq_pane

0xa5eb,	// (0x00057328) main_mup_pane

0xa90b,	// (0x00057648) main_notes_pane

0xa5eb,	// (0x00057328) main_pec_pane

0xa5eb,	// (0x00057328) main_phob_pane

0xa5eb,	// (0x00057328) main_pinb_pane

0xa5eb,	// (0x00057328) main_postcard_pane

0xa5eb,	// (0x00057328) main_qdial_pane

0xaad9,	// (0x00057816) main_skin_pane

0xa5eb,	// (0x00057328) main_smil2_pane

0xaad9,	// (0x00057816) main_smil_pane

0xaad9,	// (0x00057816) main_video_pane

0xaad9,	// (0x00057816) main_video_tele_pane

0xa846,	// (0x00057583) main_viewer_pane_ParamLimits

0xa846,	// (0x00057583) main_viewer_pane

0xaad9,	// (0x00057816) main_vorec_pane

0x41f2,	// (0x00050f2f) popup_blid_sat_info_window_ParamLimits

0x41f2,	// (0x00050f2f) popup_blid_sat_info_window

0x424a,	// (0x00050f87) popup_dyc_status_message_window_ParamLimits

0x424a,	// (0x00050f87) popup_dyc_status_message_window

0x4264,	// (0x00050fa1) popup_grid_large_graphic_window_ParamLimits

0x4264,	// (0x00050fa1) popup_grid_large_graphic_window

0x4320,	// (0x0005105d) popup_loc_request_window_ParamLimits

0x4320,	// (0x0005105d) popup_loc_request_window

0x4416,	// (0x00051153) popup_wml_address_window_ParamLimits

0x4416,	// (0x00051153) popup_wml_address_window

0x3fd8,	// (0x00050d15) call_muted_g1

0x3c8d,	// (0x000509ca) popup_call_audio_conf_window_ParamLimits

0x3c8d,	// (0x000509ca) popup_call_audio_conf_window

0x3fec,	// (0x00050d29) popup_call_audio_first_window_ParamLimits

0x3fec,	// (0x00050d29) popup_call_audio_first_window

0x4062,	// (0x00050d9f) popup_call_audio_in_window_ParamLimits

0x4062,	// (0x00050d9f) popup_call_audio_in_window

0x409e,	// (0x00050ddb) popup_call_audio_out_window_ParamLimits

0x409e,	// (0x00050ddb) popup_call_audio_out_window

0x40d8,	// (0x00050e15) popup_call_audio_second_window_ParamLimits

0x40d8,	// (0x00050e15) popup_call_audio_second_window

0x412e,	// (0x00050e6b) popup_call_audio_wait_window_ParamLimits

0x412e,	// (0x00050e6b) popup_call_audio_wait_window

0x4163,	// (0x00050ea0) popup_number_entry_window_ParamLimits

0x4163,	// (0x00050ea0) popup_number_entry_window

0x9839,	// (0x00056576) bg_popup_call_pane_cp05_ParamLimits

0x9839,	// (0x00056576) bg_popup_call_pane_cp05

0x9859,	// (0x00056596) popup_number_entry_window_t1

0x986c,	// (0x000565a9) popup_number_entry_window_t2

0x987e,	// (0x000565bb) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0005be03) popup_number_entry_window_t

0x9890,	// (0x000565cd) text_title_cp2

0x98a3,	// (0x000565e0) bg_popup_call_pane_cp_ParamLimits

0x98a3,	// (0x000565e0) bg_popup_call_pane_cp

0x98b1,	// (0x000565ee) call_thumbnail_pane

0x98b9,	// (0x000565f6) popup_call_audio_in_window_g1_ParamLimits

0x98b9,	// (0x000565f6) popup_call_audio_in_window_g1

0x98c5,	// (0x00056602) popup_call_audio_in_window_g2_ParamLimits

0x98c5,	// (0x00056602) popup_call_audio_in_window_g2

0x98d1,	// (0x0005660e) popup_call_audio_in_window_g3_ParamLimits

0x98d1,	// (0x0005660e) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0005be0c) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0005be0c) popup_call_audio_in_window_g

0x98dd,	// (0x0005661a) popup_call_audio_in_window_t1_ParamLimits

0x98dd,	// (0x0005661a) popup_call_audio_in_window_t1

0x98f9,	// (0x00056636) popup_call_audio_in_window_t2_ParamLimits

0x98f9,	// (0x00056636) popup_call_audio_in_window_t2

0x9915,	// (0x00056652) popup_call_audio_in_window_t3_ParamLimits

0x9915,	// (0x00056652) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0005be13) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0005be13) popup_call_audio_in_window_t

0x98a3,	// (0x000565e0) bg_popup_call_pane_cp01_ParamLimits

0x98a3,	// (0x000565e0) bg_popup_call_pane_cp01

0x98b1,	// (0x000565ee) call_thumbnail_pane_cp02

0x9928,	// (0x00056665) call_type_pane_cp022

0x9930,	// (0x0005666d) popup_call_audio_out_window_g1_ParamLimits

0x9930,	// (0x0005666d) popup_call_audio_out_window_g1

0x9942,	// (0x0005667f) popup_call_audio_out_window_g2_ParamLimits

0x9942,	// (0x0005667f) popup_call_audio_out_window_g2

0x994e,	// (0x0005668b) popup_call_audio_out_window_g3_ParamLimits

0x994e,	// (0x0005668b) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0005be1a) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0005be1a) popup_call_audio_out_window_g

0x9960,	// (0x0005669d) popup_call_audio_out_window_t1_ParamLimits

0x9960,	// (0x0005669d) popup_call_audio_out_window_t1

0x9978,	// (0x000566b5) popup_call_audio_out_window_t2_ParamLimits

0x9978,	// (0x000566b5) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0005be21) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0005be21) popup_call_audio_out_window_t

0x998d,	// (0x000566ca) bg_popup_call_pane_ParamLimits

0x998d,	// (0x000566ca) bg_popup_call_pane

0x1354,	// (0x0004e091) call_thumbnail_pane_cp_ParamLimits

0x1354,	// (0x0004e091) call_thumbnail_pane_cp

0x9a11,	// (0x0005674e) call_type_pane_cp01_ParamLimits

0x9a11,	// (0x0005674e) call_type_pane_cp01

0x9a55,	// (0x00056792) popup_call_audio_first_window_g1_ParamLimits

0x9a55,	// (0x00056792) popup_call_audio_first_window_g1

0x9aa1,	// (0x000567de) popup_call_audio_first_window_g2_ParamLimits

0x9aa1,	// (0x000567de) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0005be26) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0005be26) popup_call_audio_first_window_g

0x9ae5,	// (0x00056822) popup_call_audio_first_window_t1_ParamLimits

0x9ae5,	// (0x00056822) popup_call_audio_first_window_t1

0xa530,	// (0x0005726d) popup_call_audio_first_window_t4_ParamLimits

0xa530,	// (0x0005726d) popup_call_audio_first_window_t4

0xa5bc,	// (0x000572f9) popup_call_audio_first_window_t5_ParamLimits

0xa5bc,	// (0x000572f9) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0005be2b) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0005be2b) popup_call_audio_first_window_t

0xa5eb,	// (0x00057328) bg_popup_call_pane_cp02

0xa5f5,	// (0x00057332) call_type_pane_cp023

0xa5fd,	// (0x0005733a) popup_call_audio_wait_window_g1

0xa605,	// (0x00057342) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0005be32) popup_call_audio_wait_window_g

0xa60d,	// (0x0005734a) popup_call_audio_wait_window_t3

0xa61b,	// (0x00057358) bg_popup_call_pane_cp03_ParamLimits

0xa61b,	// (0x00057358) bg_popup_call_pane_cp03

0xa67b,	// (0x000573b8) call_thumbnail_pane_cp011_ParamLimits

0xa67b,	// (0x000573b8) call_thumbnail_pane_cp011

0xa687,	// (0x000573c4) call_type_pane_cp034_ParamLimits

0xa687,	// (0x000573c4) call_type_pane_cp034

0xa6c3,	// (0x00057400) popup_call_audio_second_window_g1_ParamLimits

0xa6c3,	// (0x00057400) popup_call_audio_second_window_g1

0xa6ff,	// (0x0005743c) popup_call_audio_second_window_g2_ParamLimits

0xa6ff,	// (0x0005743c) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0005be37) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0005be37) popup_call_audio_second_window_g

0xa73b,	// (0x00057478) popup_call_audio_second_window_t1_ParamLimits

0xa73b,	// (0x00057478) popup_call_audio_second_window_t1

0xa7bc,	// (0x000574f9) popup_call_audio_second_window_t2_ParamLimits

0xa7bc,	// (0x000574f9) popup_call_audio_second_window_t2

0xa7f2,	// (0x0005752f) popup_call_audio_second_window_t3_ParamLimits

0xa7f2,	// (0x0005752f) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0005be3c) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0005be3c) popup_call_audio_second_window_t

0xa5eb,	// (0x00057328) bg_popup_call_pane_cp04

0xa828,	// (0x00057565) list_conf_pane

0xa830,	// (0x0005756d) popup_call_audio_conf_window_t1

0xa83e,	// (0x0005757b) call_thumbnail_pane_g1

0xa846,	// (0x00057583) bg_pinb_pane_ParamLimits

0xa846,	// (0x00057583) bg_pinb_pane

0xa854,	// (0x00057591) find_pinb_pane

0xa85d,	// (0x0005759a) listscroll_pinb_pane_ParamLimits

0xa85d,	// (0x0005759a) listscroll_pinb_pane

0xa86c,	// (0x000575a9) pinb_bg_pane_g1

0x1378,	// (0x0004e0b5) pinb_bg_pane_g2

0x1384,	// (0x0004e0c1) pinb_bg_pane_g3

0x1390,	// (0x0004e0cd) pinb_bg_pane_g4

0x139c,	// (0x0004e0d9) pinb_bg_pane_g5

0x13a8,	// (0x0004e0e5) pinb_bg_pane_g6

0x13b3,	// (0x0004e0f0) pinb_bg_pane_g7

0x13be,	// (0x0004e0fb) pinb_bg_pane_g8

0x13c9,	// (0x0004e106) pinb_bg_pane_g9

0x13d3,	// (0x0004e110) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0005be43) pinb_bg_pane_g

0x13f0,	// (0x0004e12d) grid_pinb_pane

0x13f9,	// (0x0004e136) list_pinb_pane

0x1402,	// (0x0004e13f) scroll_pane_cp01_ParamLimits

0x1402,	// (0x0004e13f) scroll_pane_cp01

0xa876,	// (0x000575b3) find_pinb_pane_g1_ParamLimits

0xa876,	// (0x000575b3) find_pinb_pane_g1

0xa88e,	// (0x000575cb) find_pinb_pane_t1

0xa8a0,	// (0x000575dd) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0005be5d) find_pinb_pane_t

0xa8b5,	// (0x000575f2) input_focus_pane_cp01_ParamLimits

0xa8b5,	// (0x000575f2) input_focus_pane_cp01

0x1414,	// (0x0004e151) cell_pinb_pane_ParamLimits

0x1414,	// (0x0004e151) cell_pinb_pane

0x143d,	// (0x0004e17a) cell_pinb_pane_g1_ParamLimits

0x143d,	// (0x0004e17a) cell_pinb_pane_g1

0x144d,	// (0x0004e18a) cell_pinb_pane_g2_ParamLimits

0x144d,	// (0x0004e18a) cell_pinb_pane_g2

0xa8c1,	// (0x000575fe) cell_pinb_pane_g3_ParamLimits

0xa8c1,	// (0x000575fe) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0005be62) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0005be62) cell_pinb_pane_g

0xa5eb,	// (0x00057328) grid_highlight_pane_cp01

0x1459,	// (0x0004e196) list_pinb_item_pane_ParamLimits

0x1459,	// (0x0004e196) list_pinb_item_pane

0xa5eb,	// (0x00057328) list_highlight_pane_cp02

0x146b,	// (0x0004e1a8) list_pinb_item_pane_g1_ParamLimits

0x146b,	// (0x0004e1a8) list_pinb_item_pane_g1

0x1478,	// (0x0004e1b5) list_pinb_item_pane_g2_ParamLimits

0x1478,	// (0x0004e1b5) list_pinb_item_pane_g2

0x1484,	// (0x0004e1c1) list_pinb_item_pane_g3_ParamLimits

0x1484,	// (0x0004e1c1) list_pinb_item_pane_g3

0x1495,	// (0x0004e1d2) list_pinb_item_pane_g4_ParamLimits

0x1495,	// (0x0004e1d2) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0005be69) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0005be69) list_pinb_item_pane_g

0x14a1,	// (0x0004e1de) list_pinb_item_pane_t1_ParamLimits

0x14a1,	// (0x0004e1de) list_pinb_item_pane_t1

0x14d6,	// (0x0004e213) calc_display_pane

0x14fb,	// (0x0004e238) calc_paper_pane

0x151e,	// (0x0004e25b) grid_calc_pane

0xa5eb,	// (0x00057328) bg_list_pane_cp01

0x154c,	// (0x0004e289) clock_g1

0x1554,	// (0x0004e291) clock_g2

0x0001,

0xf135,	// (0x0005be72) clock_g

0x155c,	// (0x0004e299) clock_t1_ParamLimits

0x155c,	// (0x0004e299) clock_t1

0x1571,	// (0x0004e2ae) clock_t2_ParamLimits

0x1571,	// (0x0004e2ae) clock_t2

0x1583,	// (0x0004e2c0) clock_t3_ParamLimits

0x1583,	// (0x0004e2c0) clock_t3

0x1595,	// (0x0004e2d2) clock_t4_ParamLimits

0x1595,	// (0x0004e2d2) clock_t4

0x15a7,	// (0x0004e2e4) clock_t5_ParamLimits

0x15a7,	// (0x0004e2e4) clock_t5

0x15bc,	// (0x0004e2f9) clock_t6_ParamLimits

0x15bc,	// (0x0004e2f9) clock_t6

0x15ce,	// (0x0004e30b) clock_t7_ParamLimits

0x15ce,	// (0x0004e30b) clock_t7

0x15e0,	// (0x0004e31d) clock_t8_ParamLimits

0x15e0,	// (0x0004e31d) clock_t8

0x15f4,	// (0x0004e331) clock_t9_ParamLimits

0x15f4,	// (0x0004e331) clock_t9

0x0008,

0xf13a,	// (0x0005be77) clock_t_ParamLimits

0xf13a,	// (0x0005be77) clock_t

0xa8cd,	// (0x0005760a) popup_clock_analogue_window_cp02

0xa8cd,	// (0x0005760a) popup_clock_digital_window_cp01

0xa8d5,	// (0x00057612) listscroll_help_pane

0xa5eb,	// (0x00057328) phob_pre_status_pane

0xa8df,	// (0x0005761c) grid_qdial_pane

0xa846,	// (0x00057583) listscroll_mce_pane

0xa846,	// (0x00057583) bg_notes_pane

0xa8e9,	// (0x00057626) list_notes_pane

0x1608,	// (0x0004e345) scroll_pane_cp06

0xa8f7,	// (0x00057634) bg_calc_paper_pane

0x9b99,	// (0x000568d6) list_calc_pane

0xa90b,	// (0x00057648) bg_calc_display_pane

0x161c,	// (0x0004e359) calc_display_pane_t1

0x1631,	// (0x0004e36e) calc_display_pane_t2

0x9bb3,	// (0x000568f0) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0005be8a) calc_display_pane_t

0x1646,	// (0x0004e383) cell_calc_pane_ParamLimits

0x1646,	// (0x0004e383) cell_calc_pane

0xa917,	// (0x00057654) bg_calc_paper_pane_g1

0xa923,	// (0x00057660) bg_calc_paper_pane_g2

0xa92f,	// (0x0005766c) bg_calc_paper_pane_g3

0xa93b,	// (0x00057678) bg_calc_paper_pane_g4

0xa947,	// (0x00057684) bg_calc_paper_pane_g5

0x167b,	// (0x0004e3b8) bg_calc_paper_pane_g6

0x168a,	// (0x0004e3c7) bg_calc_paper_pane_g7

0x1699,	// (0x0004e3d6) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0005be91) bg_calc_paper_pane_g

0x16ac,	// (0x0004e3e9) calc_bg_paper_pane_g9

0x16bf,	// (0x0004e3fc) list_calc_item_pane_ParamLimits

0x16bf,	// (0x0004e3fc) list_calc_item_pane

0xa953,	// (0x00057690) list_calc_item_pane_g1

0x9bc5,	// (0x00056902) list_calc_item_pane_t1_ParamLimits

0x9bc5,	// (0x00056902) list_calc_item_pane_t1

0x16d7,	// (0x0004e414) list_calc_item_pane_t2_ParamLimits

0x16d7,	// (0x0004e414) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0005bea2) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0005bea2) list_calc_item_pane_t

0xa960,	// (0x0005769d) cell_calc_pane_g1

0xa96a,	// (0x000576a7) grid_highlight_pane_cp02

0xa98c,	// (0x000576c9) bg_calc_display_pane_g1

0x1709,	// (0x0004e446) bg_calc_display_pane_g2

0x1713,	// (0x0004e450) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0005beac) bg_calc_display_pane_g

0x171c,	// (0x0004e459) cell_qdial_pane_ParamLimits

0x171c,	// (0x0004e459) cell_qdial_pane

0x1730,	// (0x0004e46d) cell_qdial_pane_g1_ParamLimits

0x1730,	// (0x0004e46d) cell_qdial_pane_g1

0x1746,	// (0x0004e483) cell_qdial_pane_g2_ParamLimits

0x1746,	// (0x0004e483) cell_qdial_pane_g2

0xa995,	// (0x000576d2) cell_qdial_pane_g3_ParamLimits

0xa995,	// (0x000576d2) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0005beb3) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0005beb3) cell_qdial_pane_g

0x176d,	// (0x0004e4aa) cell_qdial_pane_t1_ParamLimits

0x176d,	// (0x0004e4aa) cell_qdial_pane_t1

0x1785,	// (0x0004e4c2) cell_qdial_pane_t2_ParamLimits

0x1785,	// (0x0004e4c2) cell_qdial_pane_t2

0x1798,	// (0x0004e4d5) cell_qdial_pane_t3_ParamLimits

0x1798,	// (0x0004e4d5) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0005bebc) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0005bebc) cell_qdial_pane_t

0xa5eb,	// (0x00057328) grid_highlight_pane_cp04

0xa9a1,	// (0x000576de) thumbnail_qdial_pane_ParamLimits

0xa9a1,	// (0x000576de) thumbnail_qdial_pane

0xa9fd,	// (0x0005773a) list_help_pane

0xaa06,	// (0x00057743) scroll_pane_cp02

0x17ab,	// (0x0004e4e8) help_list_pane_t1_ParamLimits

0x17ab,	// (0x0004e4e8) help_list_pane_t1

0x9bd7,	// (0x00056914) bg_notes_pane_g2

0x9bdf,	// (0x0005691c) bg_notes_pane_g3

0x9be7,	// (0x00056924) notes_bg_pane_g1

0x9bef,	// (0x0005692c) notes_bg_pane_g4

0x9bf7,	// (0x00056934) notes_bg_pane_g5

0x9bff,	// (0x0005693c) notes_bg_pane_g6

0x9c07,	// (0x00056944) notes_bg_pane_g7

0x9c0f,	// (0x0005694c) notes_bg_pane_g8

0x9c17,	// (0x00056954) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0005beda) notes_bg_pane_g

0x17c8,	// (0x0004e505) list_notes_text_pane_ParamLimits

0x17c8,	// (0x0004e505) list_notes_text_pane

0xaa0f,	// (0x0005774c) list_notes_text_pane_g1

0x0188,	// (0x0004cec5) list_notes_text_pane_t1

0x17dd,	// (0x0004e51a) listscroll_cale_week_pane

0x1809,	// (0x0004e546) bg_cale_heading_pane

0xaa32,	// (0x0005776f) bg_cale_pane_cp01

0x1821,	// (0x0004e55e) cale_week_corner_pane

0x1840,	// (0x0004e57d) cale_week_day_heading_pane

0x185d,	// (0x0004e59a) cale_week_scroll_pane_g1

0x1870,	// (0x0004e5ad) cale_week_scroll_pane_g2

0x1888,	// (0x0004e5c5) cale_week_scroll_pane_g3

0x18a0,	// (0x0004e5dd) cale_week_scroll_pane_g4

0x18b8,	// (0x0004e5f5) cale_week_scroll_pane_g5

0x18d8,	// (0x0004e615) cale_week_scroll_pane_g6

0x18f8,	// (0x0004e635) cale_week_scroll_pane_g7

0x1918,	// (0x0004e655) cale_week_scroll_pane_g8

0x193c,	// (0x0004e679) cale_week_scroll_pane_g9

0x1954,	// (0x0004e691) cale_week_scroll_pane_g10

0x196c,	// (0x0004e6a9) cale_week_scroll_pane_g11

0x1984,	// (0x0004e6c1) cale_week_scroll_pane_g12

0x199c,	// (0x0004e6d9) cale_week_scroll_pane_g13

0x199c,	// (0x0004e6d9) cale_week_scroll_pane_g14

0x199c,	// (0x0004e6d9) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0005bee9) cale_week_scroll_pane_g

0x19d8,	// (0x0004e715) cale_week_time_pane

0x19fc,	// (0x0004e739) grid_cale_week_pane

0xaa61,	// (0x0005779e) scroll_pane_cp08

0x1a22,	// (0x0004e75f) cell_cale_week_pane_ParamLimits

0x1a22,	// (0x0004e75f) cell_cale_week_pane

0x1ab0,	// (0x0004e7ed) cale_week_day_heading_pane_t1

0x1ada,	// (0x0004e817) cale_week_day_heading_pane_t2

0x1b09,	// (0x0004e846) cale_week_day_heading_pane_t3

0x1b38,	// (0x0004e875) cale_week_day_heading_pane_t4

0x1b67,	// (0x0004e8a4) cale_week_day_heading_pane_t5

0x1b9e,	// (0x0004e8db) cale_week_day_heading_pane_t6

0x1bd5,	// (0x0004e912) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0005bf0a) cale_week_day_heading_pane_t

0xaa7e,	// (0x000577bb) bg_cale_side_pane

0x1bff,	// (0x0004e93c) cale_week_time_pane_t1

0x1c19,	// (0x0004e956) cale_week_time_pane_t2

0x1c33,	// (0x0004e970) cale_week_time_pane_t3

0x1c4d,	// (0x0004e98a) cale_week_time_pane_t4

0x1c67,	// (0x0004e9a4) cale_week_time_pane_t5

0x1c81,	// (0x0004e9be) cale_week_time_pane_t6

0x1c9b,	// (0x0004e9d8) cale_week_time_pane_t7

0x1cb5,	// (0x0004e9f2) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0005bf19) cale_week_time_pane_t

0x1ccf,	// (0x0004ea0c) cell_cale_week_pane_g2

0x1cee,	// (0x0004ea2b) cell_cale_week_pane_g3_ParamLimits

0x1cee,	// (0x0004ea2b) cell_cale_week_pane_g3

0xaa8c,	// (0x000577c9) grid_highlight_pane_cp07

0xaa94,	// (0x000577d1) listscroll_gms_pane

0xaa9e,	// (0x000577db) grid_gms_pane

0xaaa7,	// (0x000577e4) listscroll_gms_pane_g1

0xaaaf,	// (0x000577ec) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0005bf2a) listscroll_gms_pane_g

0x1d06,	// (0x0004ea43) scroll_pane_cp010

0x1d11,	// (0x0004ea4e) cell_gms_pane_ParamLimits

0x1d11,	// (0x0004ea4e) cell_gms_pane

0x1d24,	// (0x0004ea61) cell_gms_pane_g1

0xaab7,	// (0x000577f4) cell_gms_pane_g2

0xaabf,	// (0x000577fc) cell_gms_pane_g3

0xaac8,	// (0x00057805) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0005bf2f) cell_gms_pane_g

0xaad1,	// (0x0005780e) grid_highlight_pane_cp09

0x3f82,	// (0x00050cbf) phob_pre_status_pane_g1

0x3f8a,	// (0x00050cc7) phob_pre_status_pane_g2

0x3f92,	// (0x00050ccf) phob_pre_status_pane_g3

0x3f9a,	// (0x00050cd7) phob_pre_status_pane_g4

0x0004,

0xf5dd,	// (0x0005c31a) phob_pre_status_pane_g

0x3faa,	// (0x00050ce7) phob_pre_status_pane_t1

0x3fb8,	// (0x00050cf5) phob_pre_status_pane_t2

0x3fc8,	// (0x00050d05) phob_pre_status_pane_t3

0x0002,

0xf5e8,	// (0x0005c325) phob_pre_status_pane_t

0xaad9,	// (0x00057816) bg_list_pane_cp05

0x1d34,	// (0x0004ea71) grid_vorec_pane

0x1d3c,	// (0x0004ea79) vorec_t1

0x1d4a,	// (0x0004ea87) vorec_t2

0x1d58,	// (0x0004ea95) vorec_t3

0x1d66,	// (0x0004eaa3) vorec_t4

0x978f,	// (0x000564cc) vorec_t5

0x979d,	// (0x000564da) vorec_t6

0x0004,

0xf1fb,	// (0x0005bf38) vorec_t

0x97ab,	// (0x000564e8) wait_bar_pane_cp01

0x1d82,	// (0x0004eabf) cell_vorec_pane_ParamLimits

0x1d82,	// (0x0004eabf) cell_vorec_pane

0x9c1f,	// (0x0005695c) cell_vorec_pane_g1

0xa5eb,	// (0x00057328) grid_highlight_pane_cp05

0x1daa,	// (0x0004eae7) cams_zoom_pane

0x1db9,	// (0x0004eaf6) image_vga_pane

0x1dd3,	// (0x0004eb10) main_camera_pane_g1

0x1de5,	// (0x0004eb22) main_camera_pane_g2

0x1df5,	// (0x0004eb32) main_camera_pane_g3

0x1e05,	// (0x0004eb42) main_camera_pane_g4

0x1e15,	// (0x0004eb52) main_camera_pane_g5

0x1e25,	// (0x0004eb62) main_camera_pane_g6

0x1e37,	// (0x0004eb74) main_camera_pane_g7

0x0007,

0xf206,	// (0x0005bf43) main_camera_pane_g

0x1e47,	// (0x0004eb84) main_camera_pane_t1

0x1e5d,	// (0x0004eb9a) main_camera_pane_t2

0x0001,

0xf217,	// (0x0005bf54) main_camera_pane_t

0x1e97,	// (0x0004ebd4) cams_zoom_pane_cp_ParamLimits

0x1e97,	// (0x0004ebd4) cams_zoom_pane_cp

0x1ebf,	// (0x0004ebfc) image_cif_pane_ParamLimits

0x1ebf,	// (0x0004ebfc) image_cif_pane

0x1ef5,	// (0x0004ec32) image_subqcif_pane

0x1efd,	// (0x0004ec3a) main_video_pane_g1_ParamLimits

0x1efd,	// (0x0004ec3a) main_video_pane_g1

0x1f21,	// (0x0004ec5e) main_video_pane_g2_ParamLimits

0x1f21,	// (0x0004ec5e) main_video_pane_g2

0x1f55,	// (0x0004ec92) main_video_pane_g3_ParamLimits

0x1f55,	// (0x0004ec92) main_video_pane_g3

0x1f83,	// (0x0004ecc0) main_video_pane_g4_ParamLimits

0x1f83,	// (0x0004ecc0) main_video_pane_g4

0x1fb1,	// (0x0004ecee) main_video_pane_g5_ParamLimits

0x1fb1,	// (0x0004ecee) main_video_pane_g5

0xaaed,	// (0x0005782a) main_video_pane_g6_ParamLimits

0xaaed,	// (0x0005782a) main_video_pane_g6

0x0006,

0xf21c,	// (0x0005bf59) main_video_pane_g_ParamLimits

0xf21c,	// (0x0005bf59) main_video_pane_g

0x1fda,	// (0x0004ed17) main_video_pane_t1_ParamLimits

0x1fda,	// (0x0004ed17) main_video_pane_t1

0xab07,	// (0x00057844) cams_zoom_pane_g1

0xab10,	// (0x0005784d) cams_zoom_pane_g2

0xab19,	// (0x00057856) cams_zoom_pane_g3

0xab22,	// (0x0005785f) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x0005bf68) cams_zoom_pane_g

0x2037,	// (0x0004ed74) grid_cams_pane

0x2051,	// (0x0004ed8e) linegrid_cams_pane

0x2065,	// (0x0004eda2) cell_cams_pane_ParamLimits

0x2065,	// (0x0004eda2) cell_cams_pane

0xab2b,	// (0x00057868) cams_burst_image_pane

0xab33,	// (0x00057870) cell_cams_pane_g1

0xa5eb,	// (0x00057328) grid_highlight_pane_cp03

0xa960,	// (0x0005769d) mp_bg_pane_g1

0xa5eb,	// (0x00057328) bg_list_pane_cp03

0xc864,	// (0x000595a1) bg_mp_pane

0xc86c,	// (0x000595a9) grid_mp_pane

0xc874,	// (0x000595b1) media_player_g1

0xc87c,	// (0x000595b9) media_player_t1

0xc88a,	// (0x000595c7) media_player_t2

0xc898,	// (0x000595d5) media_player_t3

0xc8a6,	// (0x000595e3) media_player_t4

0xc8b4,	// (0x000595f1) media_player_t5

0xc8c2,	// (0x000595ff) media_player_t6

0xc8d0,	// (0x0005960d) media_player_t7

0x0006,

0xf5c7,	// (0x0005c304) media_player_t

0xc8de,	// (0x0005961b) wait_bar_pane_cp02

0xf5ac,	// (0x0005c2e9) main_usb_pane_t

0x3f79,	// (0x00050cb6) cell_mp_pane

0xa960,	// (0x0005769d) cell_mp_pane_g1

0xa5eb,	// (0x00057328) grid_highlight_pane_cp06

0xab3b,	// (0x00057878) grid_skin_colour_pane

0xab43,	// (0x00057880) list_highlight_pane_cp03

0x2085,	// (0x0004edc2) skin_g1

0xab4b,	// (0x00057888) skin_t1

0xab5a,	// (0x00057897) skin_t2

0x0001,

0xf260,	// (0x0005bf9d) skin_t

0x208d,	// (0x0004edca) cell_skin_colour_pane_ParamLimits

0x208d,	// (0x0004edca) cell_skin_colour_pane

0xab68,	// (0x000578a5) cell_skin_colour_pane_g1

0x2106,	// (0x0004ee43) call_video_g1_ParamLimits

0x2106,	// (0x0004ee43) call_video_g1

0x2122,	// (0x0004ee5f) call_video_g2_ParamLimits

0x2122,	// (0x0004ee5f) call_video_g2

0x0001,

0xf265,	// (0x0005bfa2) call_video_g_ParamLimits

0xf265,	// (0x0005bfa2) call_video_g

0x2174,	// (0x0004eeb1) call_video_uplink_pane_cp1_ParamLimits

0x2174,	// (0x0004eeb1) call_video_uplink_pane_cp1

0xab7a,	// (0x000578b7) call_video_uplink_pane_cp2

0x2213,	// (0x0004ef50) video_down_crop_pane_ParamLimits

0x2213,	// (0x0004ef50) video_down_crop_pane

0x230a,	// (0x0004f047) video_down_pane_ParamLimits

0x230a,	// (0x0004f047) video_down_pane

0xab82,	// (0x000578bf) video_down_subqcif_pane_ParamLimits

0xab82,	// (0x000578bf) video_down_subqcif_pane

0xab9a,	// (0x000578d7) video_down_subqcif_pane_cp_ParamLimits

0xab9a,	// (0x000578d7) video_down_subqcif_pane_cp

0xabc0,	// (0x000578fd) im_reading_pane_ParamLimits

0xabc0,	// (0x000578fd) im_reading_pane

0x241a,	// (0x0004f157) im_writing_pane_ParamLimits

0x241a,	// (0x0004f157) im_writing_pane

0x2430,	// (0x0004f16d) im_reading_pane_t1

0xabda,	// (0x00057917) list_im_pane

0xabeb,	// (0x00057928) scroll_pane_cp07

0x2469,	// (0x0004f1a6) im_writing_pane_t1_ParamLimits

0x2469,	// (0x0004f1a6) im_writing_pane_t1

0xac04,	// (0x00057941) im_writing_pane_t2_ParamLimits

0xac04,	// (0x00057941) im_writing_pane_t2

0x0001,

0xf26f,	// (0x0005bfac) im_writing_pane_t_ParamLimits

0xf26f,	// (0x0005bfac) im_writing_pane_t

0xa5eb,	// (0x00057328) input_focus_pane_cp04

0xa5eb,	// (0x00057328) input_focus_pane_cp05

0x247e,	// (0x0004f1bb) list_im_single_pane_ParamLimits

0x247e,	// (0x0004f1bb) list_im_single_pane

0x2492,	// (0x0004f1cf) list_single_im_pane_t1

0x3f39,	// (0x00050c76) blid_accuracy_pane

0x3f41,	// (0x00050c7e) blid_compass_pane

0x3f4b,	// (0x00050c88) main_location_t1

0x3f5b,	// (0x00050c98) main_location_t2

0x3f6b,	// (0x00050ca8) main_location_t3

0x0002,

0xf5d6,	// (0x0005c313) main_location_t

0xa5eb,	// (0x00057328) aid_levels_location

0xa960,	// (0x0005769d) blid_accuracy_pane_g1

0xa960,	// (0x0005769d) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x0005c00e) blid_accuracy_pane_g

0xac4c,	// (0x00057989) wml_content_pane

0xac8a,	// (0x000579c7) wml_button_pane_ParamLimits

0xac8a,	// (0x000579c7) wml_button_pane

0x24a1,	// (0x0004f1de) wml_list_single_large_pane_ParamLimits

0x24a1,	// (0x0004f1de) wml_list_single_large_pane

0x24b6,	// (0x0004f1f3) wml_list_single_medium_pane_ParamLimits

0x24b6,	// (0x0004f1f3) wml_list_single_medium_pane

0x24cc,	// (0x0004f209) wml_list_single_small_pane_ParamLimits

0x24cc,	// (0x0004f209) wml_list_single_small_pane

0xac9e,	// (0x000579db) wml_selection_box_pane_ParamLimits

0xac9e,	// (0x000579db) wml_selection_box_pane

0xacb1,	// (0x000579ee) wml_list_single_pane_t1

0xacc0,	// (0x000579fd) wml_list_single_medium_pane_t1

0xaccf,	// (0x00057a0c) wml_list_single_large_pane_t1

0xacde,	// (0x00057a1b) input_focus_pane_cp02_ParamLimits

0xacde,	// (0x00057a1b) input_focus_pane_cp02

0xacf1,	// (0x00057a2e) wml_selection_box_pane_g1

0xacfa,	// (0x00057a37) wml_selection_box_pane_t1_ParamLimits

0xacfa,	// (0x00057a37) wml_selection_box_pane_t1

0xa846,	// (0x00057583) bg_wml_button_pane_ParamLimits

0xa846,	// (0x00057583) bg_wml_button_pane

0xad12,	// (0x00057a4f) wml_button_pane_g1

0xad1a,	// (0x00057a57) wml_button_pane_t1

0xad12,	// (0x00057a4f) wml_button_bg_pane_g1

0xad2a,	// (0x00057a67) wml_button_bg_pane_g2

0xad32,	// (0x00057a6f) wml_button_bg_pane_g3

0xad3a,	// (0x00057a77) wml_button_bg_pane_g4

0xad42,	// (0x00057a7f) wml_button_bg_pane_g5

0xad4a,	// (0x00057a87) wml_button_bg_pane_g6

0xad52,	// (0x00057a8f) wml_button_bg_pane_g7

0xad5a,	// (0x00057a97) wml_button_bg_pane_g8

0xad62,	// (0x00057a9f) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x0005bfb1) wml_button_bg_pane_g

0x24e4,	// (0x0004f221) bg_list_pane_cp02

0xad6a,	// (0x00057aa7) mce_header_pane_ParamLimits

0xad6a,	// (0x00057aa7) mce_header_pane

0xad80,	// (0x00057abd) mce_icon_pane

0xad80,	// (0x00057abd) mce_image_pane

0xad89,	// (0x00057ac6) mce_text_pane_ParamLimits

0xad89,	// (0x00057ac6) mce_text_pane

0x24ec,	// (0x0004f229) scroll_pane_cp03

0xac82,	// (0x000579bf) scroll_pane_cp04

0xad9c,	// (0x00057ad9) scroll_pane_cp05_ParamLimits

0xad9c,	// (0x00057ad9) scroll_pane_cp05

0x24f6,	// (0x0004f233) mce_header_field_pane_ParamLimits

0x24f6,	// (0x0004f233) mce_header_field_pane

0x250d,	// (0x0004f24a) mce_header_field_pane_2_ParamLimits

0x250d,	// (0x0004f24a) mce_header_field_pane_2

0x2523,	// (0x0004f260) mce_header_field_pane_3

0x252b,	// (0x0004f268) list_single_mce_message_pane_ParamLimits

0x252b,	// (0x0004f268) list_single_mce_message_pane

0x2540,	// (0x0004f27d) list_single_mce_smart_pane_ParamLimits

0x2540,	// (0x0004f27d) list_single_mce_smart_pane

0xada8,	// (0x00057ae5) input_focus_pane_cp03

0xadb1,	// (0x00057aee) list_header_data_pane

0x2560,	// (0x0004f29d) mce_header_field_pane_t1

0x2570,	// (0x0004f2ad) list_single_mce_header_pane_ParamLimits

0x2570,	// (0x0004f2ad) list_single_mce_header_pane

0xadb9,	// (0x00057af6) list_single_mce_header_pane_t1

0xadc8,	// (0x00057b05) list_single_mce_message_pane_g1

0xadd0,	// (0x00057b0d) list_single_mce_message_pane_t1

0x25aa,	// (0x0004f2e7) bg_cale_heading_pane_cp01_ParamLimits

0x25aa,	// (0x0004f2e7) bg_cale_heading_pane_cp01

0xadde,	// (0x00057b1b) bg_cale_pane_cp02_ParamLimits

0xadde,	// (0x00057b1b) bg_cale_pane_cp02

0x25e4,	// (0x0004f321) cale_month_corner_pane

0x2603,	// (0x0004f340) cale_month_day_heading_pane_ParamLimits

0x2603,	// (0x0004f340) cale_month_day_heading_pane

0x2655,	// (0x0004f392) cale_month_pane_g1_ParamLimits

0x2655,	// (0x0004f392) cale_month_pane_g1

0x2684,	// (0x0004f3c1) cale_month_pane_g2_ParamLimits

0x2684,	// (0x0004f3c1) cale_month_pane_g2

0x26b4,	// (0x0004f3f1) cale_month_pane_g3_ParamLimits

0x26b4,	// (0x0004f3f1) cale_month_pane_g3

0x26f0,	// (0x0004f42d) cale_month_pane_g4_ParamLimits

0x26f0,	// (0x0004f42d) cale_month_pane_g4

0x272c,	// (0x0004f469) cale_month_pane_g5_ParamLimits

0x272c,	// (0x0004f469) cale_month_pane_g5

0x2774,	// (0x0004f4b1) cale_month_pane_g6_ParamLimits

0x2774,	// (0x0004f4b1) cale_month_pane_g6

0x27c0,	// (0x0004f4fd) cale_month_pane_g7_ParamLimits

0x27c0,	// (0x0004f4fd) cale_month_pane_g7

0x2814,	// (0x0004f551) cale_month_pane_g8_ParamLimits

0x2814,	// (0x0004f551) cale_month_pane_g8

0x2868,	// (0x0004f5a5) cale_month_pane_g9_ParamLimits

0x2868,	// (0x0004f5a5) cale_month_pane_g9

0x28ba,	// (0x0004f5f7) cale_month_pane_g10_ParamLimits

0x28ba,	// (0x0004f5f7) cale_month_pane_g10

0x290c,	// (0x0004f649) cale_month_pane_g11_ParamLimits

0x290c,	// (0x0004f649) cale_month_pane_g11

0x295e,	// (0x0004f69b) cale_month_pane_g12_ParamLimits

0x295e,	// (0x0004f69b) cale_month_pane_g12

0x29b0,	// (0x0004f6ed) cale_month_pane_g13_ParamLimits

0x29b0,	// (0x0004f6ed) cale_month_pane_g13

0x000c,

0xf287,	// (0x0005bfc4) cale_month_pane_g_ParamLimits

0xf287,	// (0x0005bfc4) cale_month_pane_g

0x2a02,	// (0x0004f73f) cale_month_week_pane

0x2a26,	// (0x0004f763) grid_cale_month_pane_ParamLimits

0x2a26,	// (0x0004f763) grid_cale_month_pane

0x2a6f,	// (0x0004f7ac) cale_month_day_heading_pane_t1

0x2af5,	// (0x0004f832) cale_month_day_heading_pane_t2

0x2b6e,	// (0x0004f8ab) cale_month_day_heading_pane_t3

0x2be7,	// (0x0004f924) cale_month_day_heading_pane_t4

0x2c68,	// (0x0004f9a5) cale_month_day_heading_pane_t5

0x2cf1,	// (0x0004fa2e) cale_month_day_heading_pane_t6

0x2d7a,	// (0x0004fab7) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x0005bfdf) cale_month_day_heading_pane_t

0xaa7e,	// (0x000577bb) bg_cale_side_pane_cp01

0x2e0b,	// (0x0004fb48) cale_month_week_pane_t1

0x2e24,	// (0x0004fb61) cale_month_week_pane_t2

0x2e3d,	// (0x0004fb7a) cale_month_week_pane_t3

0x2e56,	// (0x0004fb93) cale_month_week_pane_t4

0x2e6f,	// (0x0004fbac) cale_month_week_pane_t5

0x2e88,	// (0x0004fbc5) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x0005bfee) cale_month_week_pane_t

0x2ea1,	// (0x0004fbde) cell_cale_month_pane_ParamLimits

0x2ea1,	// (0x0004fbde) cell_cale_month_pane

0x9c29,	// (0x00056966) cell_cale_month_pane_g1

0x2fcf,	// (0x0004fd0c) cell_cale_month_pane_t1_ParamLimits

0x2fcf,	// (0x0004fd0c) cell_cale_month_pane_t1

0xaa8c,	// (0x000577c9) grid_highlight_pane_cp08

0xa960,	// (0x0005769d) main_smil_g1

0x2ffb,	// (0x0004fd38) smil_status_pane

0xae1d,	// (0x00057b5a) smil_text_pane

0xc784,	// (0x000594c1) bg_popup_call3_rect_pane_g8

0xc78c,	// (0x000594c9) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x0005c2a7) bg_popup_call3_rect_pane_g

0xc9d3,	// (0x00059710) smil_status_volume_pane_g1

0xae27,	// (0x00057b64) smil_status_pane_t1

0x9d7f,	// (0x00056abc) volume_smil_pane

0xae3e,	// (0x00057b7b) list_smil_text_pane

0x300e,	// (0x0004fd4b) scroll_pane_cp011

0x3019,	// (0x0004fd56) smil_text_list_pane_t1_ParamLimits

0x3019,	// (0x0004fd56) smil_text_list_pane_t1

0x9c35,	// (0x00056972) aid_volume_smil_ParamLimits

0x9c35,	// (0x00056972) aid_volume_smil

0xa960,	// (0x0005769d) smil_volume_pane_g1

0xa960,	// (0x0005769d) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x0005c00e) smil_volume_pane_g

0x17dd,	// (0x0004e51a) listscroll_cale_day_pane

0xae48,	// (0x00057b85) bg_cale_pane

0xae60,	// (0x00057b9d) list_cale_pane

0xae83,	// (0x00057bc0) scroll_pane_cp09

0xae94,	// (0x00057bd1) cale_bg_pane_g1

0xae9c,	// (0x00057bd9) cale_bg_pane_g2

0xaea4,	// (0x00057be1) cale_bg_pane_g3

0xaeac,	// (0x00057be9) cale_bg_pane_g4

0xaeb4,	// (0x00057bf1) cale_bg_pane_g5

0xaebc,	// (0x00057bf9) cale_bg_pane_g6

0xaec4,	// (0x00057c01) cale_bg_pane_g7

0xaecc,	// (0x00057c09) cale_bg_pane_g8

0xaed4,	// (0x00057c11) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x0005c013) cale_bg_pane_g

0x305d,	// (0x0004fd9a) list_cale_time_pane_ParamLimits

0x305d,	// (0x0004fd9a) list_cale_time_pane

0xaedc,	// (0x00057c19) list_cale_time_pane_g1_ParamLimits

0xaedc,	// (0x00057c19) list_cale_time_pane_g1

0xaee8,	// (0x00057c25) list_cale_time_pane_g2_ParamLimits

0xaee8,	// (0x00057c25) list_cale_time_pane_g2

0x3072,	// (0x0004fdaf) list_cale_time_pane_g3_ParamLimits

0x3072,	// (0x0004fdaf) list_cale_time_pane_g3

0x3080,	// (0x0004fdbd) list_cale_time_pane_g4_ParamLimits

0x3080,	// (0x0004fdbd) list_cale_time_pane_g4

0x308e,	// (0x0004fdcb) list_cale_time_pane_g5_ParamLimits

0x308e,	// (0x0004fdcb) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x0005c026) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x0005c026) list_cale_time_pane_g

0xaf02,	// (0x00057c3f) list_cale_time_pane_t1_ParamLimits

0xaf02,	// (0x00057c3f) list_cale_time_pane_t1

0xaf2a,	// (0x00057c67) list_cale_time_pane_t2_ParamLimits

0xaf2a,	// (0x00057c67) list_cale_time_pane_t2

0x3314,	// (0x00050051) aid_blid_cardinal_pane

0x3352,	// (0x0005008f) compass_pane_t4

0xaf52,	// (0x00057c8f) list_cale_time_pane_t4_ParamLimits

0xaf52,	// (0x00057c8f) list_cale_time_pane_t4

0x3360,	// (0x0005009d) compass_pane_t5

0x336e,	// (0x000500ab) compass_pane_t6

0x337c,	// (0x000500b9) compass_pane_t7

0xb40f,	// (0x0005814c) navi_pane_cc_t1

0xb5ec,	// (0x00058329) aid_phob_thumbnail_center_pane

0x3951,	// (0x0005068e) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x0005c033) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x0005c033) list_cale_time_pane_t

0x98a3,	// (0x000565e0) bg_popup_window_pane_cp02_ParamLimits

0x98a3,	// (0x000565e0) bg_popup_window_pane_cp02

0xaf7a,	// (0x00057cb7) heading_pane_cp01_ParamLimits

0xaf7a,	// (0x00057cb7) heading_pane_cp01

0xaf86,	// (0x00057cc3) loc_req_pane_ParamLimits

0xaf86,	// (0x00057cc3) loc_req_pane

0xaf96,	// (0x00057cd3) loc_type_pane_ParamLimits

0xaf96,	// (0x00057cd3) loc_type_pane

0xafa8,	// (0x00057ce5) loc_type_pane_t1_ParamLimits

0xafa8,	// (0x00057ce5) loc_type_pane_t1

0xafba,	// (0x00057cf7) loc_type_pane_t2_ParamLimits

0xafba,	// (0x00057cf7) loc_type_pane_t2

0xafcc,	// (0x00057d09) loc_type_pane_t3_ParamLimits

0xafcc,	// (0x00057d09) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x0005c03a) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x0005c03a) loc_type_pane_t

0xafde,	// (0x00057d1b) list_loc_req_pane

0xafe8,	// (0x00057d25) scroll_pane_cp012

0x309c,	// (0x0004fdd9) list_single_loc_request_popup_menu_pane_ParamLimits

0x309c,	// (0x0004fdd9) list_single_loc_request_popup_menu_pane

0xaff3,	// (0x00057d30) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaff3,	// (0x00057d30) list_single_loc_request_popup_menu_pane_g1

0xafff,	// (0x00057d3c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xafff,	// (0x00057d3c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x0005c041) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x0005c041) list_single_loc_request_popup_menu_pane_g

0xb00b,	// (0x00057d48) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb00b,	// (0x00057d48) list_single_loc_request_popup_menu_pane_t1

0xa846,	// (0x00057583) bg_popup_window_pane_cp03_ParamLimits

0xa846,	// (0x00057583) bg_popup_window_pane_cp03

0xb021,	// (0x00057d5e) heading_loc_req_pane_ParamLimits

0xb021,	// (0x00057d5e) heading_loc_req_pane

0x30a9,	// (0x0004fde6) popup_dyc_status_message_window_g1_ParamLimits

0x30a9,	// (0x0004fde6) popup_dyc_status_message_window_g1

0x30bd,	// (0x0004fdfa) popup_dyc_status_message_window_t1_ParamLimits

0x30bd,	// (0x0004fdfa) popup_dyc_status_message_window_t1

0x30d2,	// (0x0004fe0f) popup_dyc_status_message_window_t2_ParamLimits

0x30d2,	// (0x0004fe0f) popup_dyc_status_message_window_t2

0x30e7,	// (0x0004fe24) popup_dyc_status_message_window_t3_ParamLimits

0x30e7,	// (0x0004fe24) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x0005c046) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x0005c046) popup_dyc_status_message_window_t

0xa5eb,	// (0x00057328) bg_heading_pane_cp01

0xb02d,	// (0x00057d6a) heading_loc_req_pane_g1

0xb035,	// (0x00057d72) heading_loc_req_pane_g2

0xb03d,	// (0x00057d7a) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x0005c04d) heading_loc_req_pane_g

0xb045,	// (0x00057d82) heading_loc_req_pane_t1

0xb054,	// (0x00057d91) bg_popup_sub_pane_cp01_ParamLimits

0xb054,	// (0x00057d91) bg_popup_sub_pane_cp01

0xb062,	// (0x00057d9f) popup_cale_events_window_g1_ParamLimits

0xb062,	// (0x00057d9f) popup_cale_events_window_g1

0xb082,	// (0x00057dbf) popup_cale_events_window_g2_ParamLimits

0xb082,	// (0x00057dbf) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x0005c081) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x0005c081) popup_cale_events_window_g

0xb0a2,	// (0x00057ddf) popup_cale_events_window_t1_ParamLimits

0xb0a2,	// (0x00057ddf) popup_cale_events_window_t1

0xb0b4,	// (0x00057df1) popup_cale_events_window_t2_ParamLimits

0xb0b4,	// (0x00057df1) popup_cale_events_window_t2

0xb0f2,	// (0x00057e2f) popup_cale_events_window_t3_ParamLimits

0xb0f2,	// (0x00057e2f) popup_cale_events_window_t3

0xb12c,	// (0x00057e69) popup_cale_events_window_t4_ParamLimits

0xb12c,	// (0x00057e69) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x0005c086) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x0005c086) popup_cale_events_window_t

0x310f,	// (0x0004fe4c) call_type_pane

0x311f,	// (0x0004fe5c) popup_call_status_window_g1

0x3133,	// (0x0004fe70) popup_call_status_window_g2

0x3147,	// (0x0004fe84) popup_call_status_window_g3

0x0002,

0xf352,	// (0x0005c08f) popup_call_status_window_g

0xb162,	// (0x00057e9f) call_type_pane_g1

0xb16b,	// (0x00057ea8) call_type_pane_g2

0x0001,

0xf359,	// (0x0005c096) call_type_pane_g

0xa5eb,	// (0x00057328) bg_popup_sub_pane_cp02

0xb174,	// (0x00057eb1) listscroll_popup_wml_pane

0xb17c,	// (0x00057eb9) list_wml_pane

0xb186,	// (0x00057ec3) scroll_pane_cp013

0xb191,	// (0x00057ece) list_single_graphic_popup_wml_pane_ParamLimits

0xb191,	// (0x00057ece) list_single_graphic_popup_wml_pane

0xa960,	// (0x0005769d) list_single_graphic_popup_wml_pane_g1

0xb1a5,	// (0x00057ee2) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x0005c09b) list_single_graphic_popup_wml_pane_g

0xb1ad,	// (0x00057eea) list_single_graphic_popup_wml_pane_t1

0xb1c3,	// (0x00057f00) aid_call_pane

0xa83e,	// (0x0005757b) popup_clock_analogue_window_g1

0xa83e,	// (0x0005757b) popup_clock_analogue_window_g2

0x9c57,	// (0x00056994) popup_clock_analogue_window_g3

0x9c57,	// (0x00056994) popup_clock_analogue_window_g4

0xa960,	// (0x0005769d) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x0005c0a0) popup_clock_analogue_window_g

0x9c5f,	// (0x0005699c) popup_clock_analogue_window_t1

0x9c6d,	// (0x000569aa) clock_digital_number_pane_ParamLimits

0x9c6d,	// (0x000569aa) clock_digital_number_pane

0x9c79,	// (0x000569b6) clock_digital_number_pane_cp02_ParamLimits

0x9c79,	// (0x000569b6) clock_digital_number_pane_cp02

0x9c85,	// (0x000569c2) clock_digital_number_pane_cp03_ParamLimits

0x9c85,	// (0x000569c2) clock_digital_number_pane_cp03

0x9c91,	// (0x000569ce) clock_digital_number_pane_cp04_ParamLimits

0x9c91,	// (0x000569ce) clock_digital_number_pane_cp04

0x9ca1,	// (0x000569de) clock_digital_separator_pane_ParamLimits

0x9ca1,	// (0x000569de) clock_digital_separator_pane

0x9cad,	// (0x000569ea) popup_clock_digital_window_t1

0xa960,	// (0x0005769d) clock_digital_number_pane_g1

0xa960,	// (0x0005769d) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x0005c00e) clock_digital_number_pane_g

0xa960,	// (0x0005769d) clock_digital_separator_pane_g1

0xa960,	// (0x0005769d) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x0005c00e) clock_digital_separator_pane_g

0xa5eb,	// (0x00057328) bg_popup_window_pane_cp04

0xb1cb,	// (0x00057f08) heading_pane_cp03

0xb1d3,	// (0x00057f10) listscroll_popup_gms_pane

0xb1db,	// (0x00057f18) grid_large_graphic_popup_pane

0xb1e5,	// (0x00057f22) listscroll_popup_gms_pane_g1

0xb1ed,	// (0x00057f2a) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x0005c0ab) listscroll_popup_gms_pane_g

0xac82,	// (0x000579bf) scroll_pane_cp014

0x3156,	// (0x0004fe93) cell_large_graphic_popup_pane_ParamLimits

0x3156,	// (0x0004fe93) cell_large_graphic_popup_pane

0x316e,	// (0x0004feab) cell_large_graphic_popup_pane_g1_ParamLimits

0x316e,	// (0x0004feab) cell_large_graphic_popup_pane_g1

0xb1f5,	// (0x00057f32) cell_large_graphic_popup_pane_g2_ParamLimits

0xb1f5,	// (0x00057f32) cell_large_graphic_popup_pane_g2

0xb201,	// (0x00057f3e) cell_large_graphic_popup_pane_g3_ParamLimits

0xb201,	// (0x00057f3e) cell_large_graphic_popup_pane_g3

0xb20e,	// (0x00057f4b) cell_large_graphic_popup_pane_g4_ParamLimits

0xb20e,	// (0x00057f4b) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x0005c0b0) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x0005c0b0) cell_large_graphic_popup_pane_g

0xb21e,	// (0x00057f5b) grid_highlight_pane_cp010

0xa960,	// (0x0005769d) bg_popup_call_pane_g1

0xb236,	// (0x00057f73) list_single_graphic_popup_conf_pane_ParamLimits

0xb236,	// (0x00057f73) list_single_graphic_popup_conf_pane

0xb249,	// (0x00057f86) list_highlight_pane_cp01

0xb252,	// (0x00057f8f) list_single_graphic_popup_conf_pane_g1

0xb25a,	// (0x00057f97) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x0005c0b9) list_single_graphic_popup_conf_pane_g

0xb262,	// (0x00057f9f) list_single_graphic_popup_conf_pane_t1

0xb270,	// (0x00057fad) linegrid_cams_pane_g1

0x317a,	// (0x0004feb7) linegrid_cams_pane_g2

0xaabf,	// (0x000577fc) linegrid_cams_pane_g3

0xb279,	// (0x00057fb6) linegrid_cams_pane_g4

0x3183,	// (0x0004fec0) linegrid_cams_pane_g5

0x318c,	// (0x0004fec9) linegrid_cams_pane_g6

0xaac8,	// (0x00057805) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x0005c0be) linegrid_cams_pane_g

0xb282,	// (0x00057fbf) popup_clock_analogue_window

0xb282,	// (0x00057fbf) popup_clock_digital_window

0xa5eb,	// (0x00057328) popup_phob_thumbnail_window

0xa960,	// (0x0005769d) call_video_uplink_pane_g1

0xb28b,	// (0x00057fc8) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x0005c0cd) call_video_uplink_pane_g

0xb293,	// (0x00057fd0) video_uplink_pane

0xb29b,	// (0x00057fd8) mce_image_pane_g1

0x3197,	// (0x0004fed4) mce_image_pane_g2

0x31a1,	// (0x0004fede) mce_image_pane_g3

0x31a9,	// (0x0004fee6) mce_image_pane_g4

0x31b1,	// (0x0004feee) mce_image_pane_g5

0x0004,

0xf395,	// (0x0005c0d2) mce_image_pane_g

0xb2a5,	// (0x00057fe2) control_top_pane_stacon_cp01_ParamLimits

0xb2a5,	// (0x00057fe2) control_top_pane_stacon_cp01

0xb2b9,	// (0x00057ff6) uni_indicator_pane_stacon_cp01_ParamLimits

0xb2b9,	// (0x00057ff6) uni_indicator_pane_stacon_cp01

0xb2ca,	// (0x00058007) bg_popup_sub_pane_cp03

0xb2d4,	// (0x00058011) chi_dic_find_pane

0x31b9,	// (0x0004fef6) listscroll_chi_dic_pane

0xb2dc,	// (0x00058019) main_pane_chidic_g1

0xb2e4,	// (0x00058021) chi_dic_find_pane_t1

0xb2f2,	// (0x0005802f) find_chidic_pane

0xb2fb,	// (0x00058038) chi_dic_list_pane_ParamLimits

0xb2fb,	// (0x00058038) chi_dic_list_pane

0xb30c,	// (0x00058049) scroll_pane_cp020

0xb314,	// (0x00058051) find_chidic_pane_t1

0xa5eb,	// (0x00057328) input_focus_pane_cp06

0x31cd,	// (0x0004ff0a) list_chi_dic_pane_ParamLimits

0x31cd,	// (0x0004ff0a) list_chi_dic_pane

0x31df,	// (0x0004ff1c) list_chi_dic_pane_t1_ParamLimits

0x31df,	// (0x0004ff1c) list_chi_dic_pane_t1

0xa5eb,	// (0x00057328) list_highlight_pane_cp020

0xb323,	// (0x00058060) bg_cale_heading_pane_g1

0x31f2,	// (0x0004ff2f) bg_cale_heading_pane_g2

0x31fa,	// (0x0004ff37) bg_cale_heading_pane_g3

0x3202,	// (0x0004ff3f) bg_cale_heading_pane_g4

0x320c,	// (0x0004ff49) bg_cale_heading_pane_g5

0x3216,	// (0x0004ff53) bg_cale_heading_pane_g6

0x321e,	// (0x0004ff5b) bg_cale_heading_pane_g7

0x3226,	// (0x0004ff63) bg_cale_heading_pane_g8

0x3230,	// (0x0004ff6d) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x0005c0dd) bg_cale_heading_pane_g

0xb323,	// (0x00058060) bg_cale_side_pane_g1

0x323a,	// (0x0004ff77) bg_cale_side_pane_g2

0x3242,	// (0x0004ff7f) bg_cale_side_pane_g3

0x324a,	// (0x0004ff87) bg_cale_side_pane_g4

0x3252,	// (0x0004ff8f) bg_cale_side_pane_g5

0x325a,	// (0x0004ff97) bg_cale_side_pane_g6

0x3262,	// (0x0004ff9f) bg_cale_side_pane_g7

0x326a,	// (0x0004ffa7) bg_cale_side_pane_g8

0x3272,	// (0x0004ffaf) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x0005c0f0) bg_cale_side_pane_g

0x327a,	// (0x0004ffb7) popup_call_status_window_ParamLimits

0x327a,	// (0x0004ffb7) popup_call_status_window

0xb32b,	// (0x00058068) stacon_top_pane

0xb333,	// (0x00058070) status_pane_ParamLimits

0xb333,	// (0x00058070) status_pane

0xb348,	// (0x00058085) status_small_pane

0xb350,	// (0x0005808d) control_pane

0xa5eb,	// (0x00057328) stacon_bottom_pane

0xb358,	// (0x00058095) list_single_mce_smart_pane_t1_ParamLimits

0xb358,	// (0x00058095) list_single_mce_smart_pane_t1

0xb36b,	// (0x000580a8) list_single_mce_smart_pane_t2_ParamLimits

0xb36b,	// (0x000580a8) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x0005c103) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x0005c103) list_single_mce_smart_pane_t

0x32c3,	// (0x00050000) compass_pane

0x32cc,	// (0x00050009) main_location2_pane_t1

0x32de,	// (0x0005001b) main_location2_pane_t2

0x32f0,	// (0x0005002d) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x0005c108) main_location2_pane_t

0xb38a,	// (0x000580c7) compass_pane_g1_ParamLimits

0xb38a,	// (0x000580c7) compass_pane_g1

0x3334,	// (0x00050071) compass_pane_t1

0x3343,	// (0x00050080) compass_pane_t2

0x0005,

0xf3d4,	// (0x0005c111) compass_pane_t

0x338a,	// (0x000500c7) text_secondary_cp61

0xb406,	// (0x00058143) navi_pane_cams_g5

0xb482,	// (0x000581bf) navi_pane_im_t1

0xb490,	// (0x000581cd) navi_pane_mp_g1_ParamLimits

0xb490,	// (0x000581cd) navi_pane_mp_g1

0xb4a4,	// (0x000581e1) navi_pane_mp_g2_ParamLimits

0xb4a4,	// (0x000581e1) navi_pane_mp_g2

0xb4b0,	// (0x000581ed) navi_pane_mp_g3_ParamLimits

0xb4b0,	// (0x000581ed) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x0005c125) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x0005c125) navi_pane_mp_g

0xb4bc,	// (0x000581f9) navi_pane_mp_t1

0xb4ca,	// (0x00058207) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x0005c12c) navi_pane_mp_t

0xb535,	// (0x00058272) navi_pane_vt_g1

0xb4bc,	// (0x000581f9) navi_pane_vt_t1

0xb53d,	// (0x0005827a) navi_slider_pane

0xaad9,	// (0x00057816) zooming_pane

0xb54d,	// (0x0005828a) navi_slider_pane_g1

0x9cca,	// (0x00056a07) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x0005c133) navi_slider_pane_g

0xb571,	// (0x000582ae) aid_levels_zoom

0xb579,	// (0x000582b6) zooming_pane_g1

0xb581,	// (0x000582be) zooming_pane_g2

0xb581,	// (0x000582be) zooming_pane_g3

0x0002,

0xf405,	// (0x0005c142) zooming_pane_g

0xb589,	// (0x000582c6) level_10_zoom

0xb592,	// (0x000582cf) level_11_zoom

0xb59b,	// (0x000582d8) level_1_zoom

0xb5a4,	// (0x000582e1) level_2_zoom

0xb5ad,	// (0x000582ea) level_3_zoom

0xb5b6,	// (0x000582f3) level_4_zoom

0xb5bf,	// (0x000582fc) level_5_zoom

0xb5c8,	// (0x00058305) level_6_zoom

0xb5d1,	// (0x0005830e) level_7_zoom

0xb5da,	// (0x00058317) level_8_zoom

0xb5e3,	// (0x00058320) level_9_zoom

0xb5f4,	// (0x00058331) popup_phob_thumbnail_window_g1

0xb5fc,	// (0x00058339) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x0005c149) popup_phob_thumbnail_window_g

0xc8e6,	// (0x00059623) level_1_location

0xc8ee,	// (0x0005962b) level_2_location

0xc8f6,	// (0x00059633) level_3_location

0xc8fe,	// (0x0005963b) level_4_location

0xaad9,	// (0x00057816) level_5_location

0x33db,	// (0x00050118) mce_icon_pane_g1

0x33e5,	// (0x00050122) mce_icon_pane_g2

0x0001,

0xf411,	// (0x0005c14e) mce_icon_pane_g

0x33ed,	// (0x0005012a) main_mup_pane_g1_ParamLimits

0x33ed,	// (0x0005012a) main_mup_pane_g1

0x3403,	// (0x00050140) main_mup_pane_g2_ParamLimits

0x3403,	// (0x00050140) main_mup_pane_g2

0x341b,	// (0x00050158) main_mup_pane_g3_ParamLimits

0x341b,	// (0x00050158) main_mup_pane_g3

0x3433,	// (0x00050170) main_mup_pane_g4_ParamLimits

0x3433,	// (0x00050170) main_mup_pane_g4

0x344b,	// (0x00050188) main_mup_pane_g5_ParamLimits

0x344b,	// (0x00050188) main_mup_pane_g5

0x3467,	// (0x000501a4) main_mup_pane_g6_ParamLimits

0x3467,	// (0x000501a4) main_mup_pane_g6

0x347f,	// (0x000501bc) main_mup_pane_g7_ParamLimits

0x347f,	// (0x000501bc) main_mup_pane_g7

0x3497,	// (0x000501d4) main_mup_pane_g8_ParamLimits

0x3497,	// (0x000501d4) main_mup_pane_g8

0x34b1,	// (0x000501ee) main_mup_pane_g9_ParamLimits

0x34b1,	// (0x000501ee) main_mup_pane_g9

0x34cb,	// (0x00050208) main_mup_pane_g10_ParamLimits

0x34cb,	// (0x00050208) main_mup_pane_g10

0x34e5,	// (0x00050222) main_mup_pane_g11_ParamLimits

0x34e5,	// (0x00050222) main_mup_pane_g11

0x34f9,	// (0x00050236) main_mup_pane_g12_ParamLimits

0x34f9,	// (0x00050236) main_mup_pane_g12

0x350f,	// (0x0005024c) main_mup_pane_g13_ParamLimits

0x350f,	// (0x0005024c) main_mup_pane_g13

0x000c,

0xf416,	// (0x0005c153) main_mup_pane_g_ParamLimits

0xf416,	// (0x0005c153) main_mup_pane_g

0x3523,	// (0x00050260) main_mup_pane_t1_ParamLimits

0x3523,	// (0x00050260) main_mup_pane_t1

0x353d,	// (0x0005027a) main_mup_pane_t2_ParamLimits

0x353d,	// (0x0005027a) main_mup_pane_t2

0x3555,	// (0x00050292) main_mup_pane_t3_ParamLimits

0x3555,	// (0x00050292) main_mup_pane_t3

0x356d,	// (0x000502aa) main_mup_pane_t4_ParamLimits

0x356d,	// (0x000502aa) main_mup_pane_t4

0x358b,	// (0x000502c8) main_mup_pane_t5_ParamLimits

0x358b,	// (0x000502c8) main_mup_pane_t5

0x35a0,	// (0x000502dd) main_mup_pane_t6_ParamLimits

0x35a0,	// (0x000502dd) main_mup_pane_t6

0x0005,

0xf431,	// (0x0005c16e) main_mup_pane_t_ParamLimits

0xf431,	// (0x0005c16e) main_mup_pane_t

0x35b2,	// (0x000502ef) mup_progress_pane_ParamLimits

0x35b2,	// (0x000502ef) mup_progress_pane

0x35be,	// (0x000502fb) mup_visualizer_pane_ParamLimits

0x35be,	// (0x000502fb) mup_visualizer_pane

0x35ee,	// (0x0005032b) mup_volume_pane_ParamLimits

0x35ee,	// (0x0005032b) mup_volume_pane

0xb604,	// (0x00058341) mup_visualizer_pane_g1_ParamLimits

0xb604,	// (0x00058341) mup_visualizer_pane_g1

0xb604,	// (0x00058341) mup_visualizer_pane_g2_ParamLimits

0xb604,	// (0x00058341) mup_visualizer_pane_g2

0xb38a,	// (0x000580c7) mup_visualizer_pane_g3_ParamLimits

0xb38a,	// (0x000580c7) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x0005c17b) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x0005c17b) mup_visualizer_pane_g

0xa960,	// (0x0005769d) mup_volume_pane_g1

0xb61a,	// (0x00058357) mup_volume_pane_g2

0x0001,

0xf445,	// (0x0005c182) mup_volume_pane_g

0xa960,	// (0x0005769d) mup_progress_pane_g1

0xb623,	// (0x00058360) mup_progress_pane_g2

0xb62c,	// (0x00058369) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x0005c187) mup_progress_pane_g

0xa5eb,	// (0x00057328) bg_popup_window_pane_cp05

0xb635,	// (0x00058372) heading_pane_cp02_ParamLimits

0xb635,	// (0x00058372) heading_pane_cp02

0xb64f,	// (0x0005838c) list_popup_blid_pane

0xb657,	// (0x00058394) list_blid_sat_info_pane_ParamLimits

0xb657,	// (0x00058394) list_blid_sat_info_pane

0xb66a,	// (0x000583a7) list_blid_sat_info_pane_g1

0xb672,	// (0x000583af) list_blid_sat_info_pane_t1

0x3704,	// (0x00050441) mup_equalizer_pane_ParamLimits

0x3704,	// (0x00050441) mup_equalizer_pane

0x371d,	// (0x0005045a) mup_equalizer_pane_cp1_ParamLimits

0x371d,	// (0x0005045a) mup_equalizer_pane_cp1

0x373a,	// (0x00050477) mup_equalizer_pane_cp2_ParamLimits

0x373a,	// (0x00050477) mup_equalizer_pane_cp2

0x3757,	// (0x00050494) mup_equalizer_pane_cp3_ParamLimits

0x3757,	// (0x00050494) mup_equalizer_pane_cp3

0x3778,	// (0x000504b5) mup_equalizer_pane_cp4_ParamLimits

0x3778,	// (0x000504b5) mup_equalizer_pane_cp4

0x3799,	// (0x000504d6) mup_equalizer_pane_cp5

0x37ad,	// (0x000504ea) mup_equalizer_pane_cp6

0x37c1,	// (0x000504fe) mup_equalizer_pane_cp7

0xc804,	// (0x00059541) bg_popup_call_poc_act_pane_g9

0xc80c,	// (0x00059549) bg_popup_call_poc_act_pane_g10

0xc814,	// (0x00059551) bg_popup_call_poc_act_pane_g11

0x000a,

0xa846,	// (0x00057583) mup_scale_pane

0xa960,	// (0x0005769d) mup_scale_pane_g1

0xb680,	// (0x000583bd) mup_scale_pane_g2

0x0006,

0xf466,	// (0x0005c1a3) mup_scale_pane_g

0xb6a4,	// (0x000583e1) msg_data_pane

0xb6ac,	// (0x000583e9) scroll_pane_cp017

0x03b1,	// (0x0004d0ee) bg_list_pane_cp04_ParamLimits

0x03b1,	// (0x0004d0ee) bg_list_pane_cp04

0xb6b4,	// (0x000583f1) msg_data_pane_g1

0x37ef,	// (0x0005052c) msg_data_pane_g2

0x37f9,	// (0x00050536) msg_data_pane_g3

0x3801,	// (0x0005053e) msg_data_pane_g4

0x3809,	// (0x00050546) msg_data_pane_g5

0x3811,	// (0x0005054e) msg_data_pane_g6

0x3819,	// (0x00050556) msg_data_pane_g7

0x0006,

0xf475,	// (0x0005c1b2) msg_data_pane_g

0x03c9,	// (0x0004d106) msg_text_pane_ParamLimits

0x03c9,	// (0x0004d106) msg_text_pane

0x3821,	// (0x0005055e) qrid_highlight_pane_cp011_ParamLimits

0x3821,	// (0x0005055e) qrid_highlight_pane_cp011

0xa5eb,	// (0x00057328) msg_body_pane

0xa5eb,	// (0x00057328) msg_header_pane

0xb6c5,	// (0x00058402) input_focus_pane_cp07

0x0404,	// (0x0004d141) msg_header_pane_t1_ParamLimits

0x0404,	// (0x0004d141) msg_header_pane_t1

0x3837,	// (0x00050574) msg_header_pane_t2_ParamLimits

0x3837,	// (0x00050574) msg_header_pane_t2

0x0001,

0xf489,	// (0x0005c1c6) msg_header_pane_t_ParamLimits

0xf489,	// (0x0005c1c6) msg_header_pane_t

0xb6da,	// (0x00058417) msg_body_pane_g1

0x0416,	// (0x0004d153) msg_body_pane_t1_ParamLimits

0x0416,	// (0x0004d153) msg_body_pane_t1

0x3849,	// (0x00050586) msg_body_pane_t2_ParamLimits

0x3849,	// (0x00050586) msg_body_pane_t2

0x385b,	// (0x00050598) msg_body_pane_t3_ParamLimits

0x385b,	// (0x00050598) msg_body_pane_t3

0x0002,

0xf48e,	// (0x0005c1cb) msg_body_pane_t_ParamLimits

0xf48e,	// (0x0005c1cb) msg_body_pane_t

0x38a7,	// (0x000505e4) main_viewer_pane_g1_ParamLimits

0x38a7,	// (0x000505e4) main_viewer_pane_g1

0x38b5,	// (0x000505f2) main_viewer_pane_g2_ParamLimits

0x38b5,	// (0x000505f2) main_viewer_pane_g2

0x38c3,	// (0x00050600) main_viewer_pane_g3_ParamLimits

0x38c3,	// (0x00050600) main_viewer_pane_g3

0x38d2,	// (0x0005060f) main_viewer_pane_g4_ParamLimits

0x38d2,	// (0x0005060f) main_viewer_pane_g4

0x9cf4,	// (0x00056a31) main_viewer_pane_g5_ParamLimits

0x9cf4,	// (0x00056a31) main_viewer_pane_g5

0x9cf4,	// (0x00056a31) main_viewer_pane_g7_ParamLimits

0x9cf4,	// (0x00056a31) main_viewer_pane_g7

0x9d06,	// (0x00056a43) main_viewer_pane_g8_ParamLimits

0x9d06,	// (0x00056a43) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x0005c1db) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0005c1db) main_viewer_pane_g

0xb6e2,	// (0x0005841f) viewer_content_pane_ParamLimits

0xb6e2,	// (0x0005841f) viewer_content_pane

0x390e,	// (0x0005064b) main_postcard_pane_g1_ParamLimits

0x390e,	// (0x0005064b) main_postcard_pane_g1

0x3924,	// (0x00050661) main_postcard_pane_g2_ParamLimits

0x3924,	// (0x00050661) main_postcard_pane_g2

0x393a,	// (0x00050677) main_postcard_pane_g3_ParamLimits

0x393a,	// (0x00050677) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x0005c1ec) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x0005c1ec) main_postcard_pane_g

0x3951,	// (0x0005068e) main_postcard_pane_g4

0xc9e6,	// (0x00059723) smil_status_volume_pane_g2

0x3994,	// (0x000506d1) postcard_pane_ParamLimits

0x3994,	// (0x000506d1) postcard_pane

0xb6f0,	// (0x0005842d) postcard_pane_g1_ParamLimits

0xb6f0,	// (0x0005842d) postcard_pane_g1

0x39d6,	// (0x00050713) postcard_pane_g2_ParamLimits

0x39d6,	// (0x00050713) postcard_pane_g2

0x39e2,	// (0x0005071f) postcard_pane_g3_ParamLimits

0x39e2,	// (0x0005071f) postcard_pane_g3

0xb6fe,	// (0x0005843b) postcard_pane_g4_ParamLimits

0xb6fe,	// (0x0005843b) postcard_pane_g4

0x39ee,	// (0x0005072b) postcard_pane_g5_ParamLimits

0x39ee,	// (0x0005072b) postcard_pane_g5

0x3a03,	// (0x00050740) postcard_pane_g6_ParamLimits

0x3a03,	// (0x00050740) postcard_pane_g6

0xb6f0,	// (0x0005842d) postcard_pane_g7_ParamLimits

0xb6f0,	// (0x0005842d) postcard_pane_g7

0x0006,

0xf4bc,	// (0x0005c1f9) postcard_pane_g_ParamLimits

0xf4bc,	// (0x0005c1f9) postcard_pane_g

0x3a17,	// (0x00050754) main_mp2_pane_g1_ParamLimits

0x3a17,	// (0x00050754) main_mp2_pane_g1

0x3a23,	// (0x00050760) main_mp2_pane_g2_ParamLimits

0x3a23,	// (0x00050760) main_mp2_pane_g2

0x3a2f,	// (0x0005076c) main_mp2_pane_g3_ParamLimits

0x3a2f,	// (0x0005076c) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x0005c208) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x0005c208) main_mp2_pane_g

0x3a3b,	// (0x00050778) main_mp2_pane_t1_ParamLimits

0x3a3b,	// (0x00050778) main_mp2_pane_t1

0x3a50,	// (0x0005078d) main_mp2_pane_t2_ParamLimits

0x3a50,	// (0x0005078d) main_mp2_pane_t2

0x3a62,	// (0x0005079f) main_mp2_pane_t3_ParamLimits

0x3a62,	// (0x0005079f) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x0005c20f) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x0005c20f) main_mp2_pane_t

0xb70c,	// (0x00058449) pec_content_pane_ParamLimits

0xb70c,	// (0x00058449) pec_content_pane

0xac82,	// (0x000579bf) scroll_pane_cp015

0xb71e,	// (0x0005845b) pec_attribute_pane_ParamLimits

0xb71e,	// (0x0005845b) pec_attribute_pane

0x3a74,	// (0x000507b1) pec_content_pane_g1_ParamLimits

0x3a74,	// (0x000507b1) pec_content_pane_g1

0xb72e,	// (0x0005846b) pec_content_pane_t1_ParamLimits

0xb72e,	// (0x0005846b) pec_content_pane_t1

0xb740,	// (0x0005847d) pec_content_pane_t2_ParamLimits

0xb740,	// (0x0005847d) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x0005c216) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x0005c216) pec_content_pane_t

0x3a80,	// (0x000507bd) list_single_graphic_pane_cp01_ParamLimits

0x3a80,	// (0x000507bd) list_single_graphic_pane_cp01

0xa846,	// (0x00057583) bg_popup_sub_pane_cp04

0xb752,	// (0x0005848f) popup_mup_playback_window_g1

0xb75e,	// (0x0005849b) popup_mup_playback_window_t1

0xb773,	// (0x000584b0) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x0005c21b) popup_mup_playback_window_t

0xb7aa,	// (0x000584e7) main_image_pane_g1_ParamLimits

0xb7aa,	// (0x000584e7) main_image_pane_g1

0xb7ed,	// (0x0005852a) scroll_pane_cp018_ParamLimits

0xb7ed,	// (0x0005852a) scroll_pane_cp018

0xb805,	// (0x00058542) scroll_pane_cp016_ParamLimits

0xb805,	// (0x00058542) scroll_pane_cp016

0x3b4d,	// (0x0005088a) smil2_image_pane_ParamLimits

0x3b4d,	// (0x0005088a) smil2_image_pane

0x3b7d,	// (0x000508ba) smil2_root_pane_ParamLimits

0x3b7d,	// (0x000508ba) smil2_root_pane

0x3bb5,	// (0x000508f2) smil2_text_pane_ParamLimits

0x3bb5,	// (0x000508f2) smil2_text_pane

0xa5eb,	// (0x00057328) bg_list_pane_cp06

0xb841,	// (0x0005857e) grid_radio_pane

0xa5eb,	// (0x00057328) bg_popup_window_pane_cp06

0xb849,	// (0x00058586) main_fmradio_pane_t1

0xb1cb,	// (0x00057f08) heading_pane_cp04

0xb857,	// (0x00058594) main_fmradio_pane_t2

0xc81c,	// (0x00059559) popup_cale_lunar_info_window_g1

0xb865,	// (0x000585a2) main_fmradio_pane_t3

0xc824,	// (0x00059561) popup_cale_lunar_info_window_g2

0xb873,	// (0x000585b0) main_fmradio_pane_t4

0x0001,

0xb881,	// (0x000585be) main_fmradio_pane_t5

0x0004,

0xf5b9,	// (0x0005c2f6) popup_cale_lunar_info_window_g

0xf4f3,	// (0x0005c230) main_fmradio_pane_t

0xb88f,	// (0x000585cc) wait_bar_pane_cp03

0xb897,	// (0x000585d4) cell_fmradio_pane_ParamLimits

0xb897,	// (0x000585d4) cell_fmradio_pane

0xb6f0,	// (0x0005842d) cell_fmradio_pane_g1_ParamLimits

0xb6f0,	// (0x0005842d) cell_fmradio_pane_g1

0xa5eb,	// (0x00057328) grid_highlight_pane_cp011

0xb8aa,	// (0x000585e7) poc_content_pane_ParamLimits

0xb8aa,	// (0x000585e7) poc_content_pane

0xb8bc,	// (0x000585f9) scroll_pane_cp019

0x3c35,	// (0x00050972) popup_call_poc_act_window_ParamLimits

0x3c35,	// (0x00050972) popup_call_poc_act_window

0x3c59,	// (0x00050996) popup_call_poc_inact_window_ParamLimits

0x3c59,	// (0x00050996) popup_call_poc_inact_window

0xf590,	// (0x0005c2cd) bg_popup_call_poc_act_pane_g

0xc794,	// (0x000594d1) bg_popup_call_poc_inact_pane_g1

0xc79c,	// (0x000594d9) bg_popup_call_poc_inact_pane_g2

0xb8c4,	// (0x00058601) popup_call_poc_act_window_g2

0xc7a4,	// (0x000594e1) bg_popup_call_poc_inact_pane_g3

0xc7ac,	// (0x000594e9) bg_popup_call_poc_inact_pane_g4

0xc7b4,	// (0x000594f1) bg_popup_call_poc_inact_pane_g5

0xb8cc,	// (0x00058609) popup_call_poc_act_window_t1_ParamLimits

0xb8cc,	// (0x00058609) popup_call_poc_act_window_t1

0xb8f4,	// (0x00058631) popup_call_poc_act_window_t2_ParamLimits

0xb8f4,	// (0x00058631) popup_call_poc_act_window_t2

0xb91c,	// (0x00058659) popup_call_poc_act_window_t3_ParamLimits

0xb91c,	// (0x00058659) popup_call_poc_act_window_t3

0xb944,	// (0x00058681) popup_call_poc_act_window_t4_ParamLimits

0xb944,	// (0x00058681) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x0005c23b) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x0005c23b) popup_call_poc_act_window_t

0xc7bc,	// (0x000594f9) bg_popup_call_poc_inact_pane_g6

0xc7c4,	// (0x00059501) bg_popup_call_poc_inact_pane_g7

0xc7cc,	// (0x00059509) bg_popup_call_poc_inact_pane_g8

0xb956,	// (0x00058693) popup_call_poc_inact_window_g2

0xc7d4,	// (0x00059511) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf57d,	// (0x0005c2ba) bg_popup_call_poc_inact_pane_g

0xb95e,	// (0x0005869b) popup_call_poc_inact_window_t1_ParamLimits

0xb95e,	// (0x0005869b) popup_call_poc_inact_window_t1

0xb973,	// (0x000586b0) popup_call_poc_inact_window_t2_ParamLimits

0xb973,	// (0x000586b0) popup_call_poc_inact_window_t2

0xb988,	// (0x000586c5) popup_call_poc_inact_window_t3_ParamLimits

0xb988,	// (0x000586c5) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x0005c244) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x0005c244) popup_call_poc_inact_window_t

0xc959,	// (0x00059696) context_pane_ParamLimits

0x4488,	// (0x000511c5) signal_pane_ParamLimits

0xaad9,	// (0x00057816) main_call2_pane

0x9d4b,	// (0x00056a88) popup_phob_thumbnail2_window_ParamLimits

0x9d4b,	// (0x00056a88) popup_phob_thumbnail2_window

0x9cdc,	// (0x00056a19) aid_hotspot_pointer_arrow_pane

0x9ce4,	// (0x00056a21) aid_hotspot_pointer_hand_pane

0x3fa2,	// (0x00050cdf) phob_pre_status_pane_g5

0x1daa,	// (0x0004eae7) cams_zoom_pane_ParamLimits

0x1db9,	// (0x0004eaf6) image_vga_pane_ParamLimits

0x1dd3,	// (0x0004eb10) main_camera_pane_g1_ParamLimits

0x1de5,	// (0x0004eb22) main_camera_pane_g2_ParamLimits

0x1df5,	// (0x0004eb32) main_camera_pane_g3_ParamLimits

0x1e05,	// (0x0004eb42) main_camera_pane_g4_ParamLimits

0x1e15,	// (0x0004eb52) main_camera_pane_g5_ParamLimits

0x1e25,	// (0x0004eb62) main_camera_pane_g6_ParamLimits

0x1e37,	// (0x0004eb74) main_camera_pane_g7_ParamLimits

0xf206,	// (0x0005bf43) main_camera_pane_g_ParamLimits

0x1e47,	// (0x0004eb84) main_camera_pane_t1_ParamLimits

0x1e5d,	// (0x0004eb9a) main_camera_pane_t2_ParamLimits

0xf217,	// (0x0005bf54) main_camera_pane_t_ParamLimits

0xa846,	// (0x00057583) bg_popup_preview_window_pane_cp01_ParamLimits

0xa846,	// (0x00057583) bg_popup_preview_window_pane_cp01

0xb99d,	// (0x000586da) popup_phob_thumbnail2_window_g1_ParamLimits

0xb99d,	// (0x000586da) popup_phob_thumbnail2_window_g1

0xa5eb,	// (0x00057328) call2_cli_visual_pane

0x3c8d,	// (0x000509ca) popup_call2_audio_conf_window_ParamLimits

0x3c8d,	// (0x000509ca) popup_call2_audio_conf_window

0x3cad,	// (0x000509ea) popup_call2_audio_first_window_ParamLimits

0x3cad,	// (0x000509ea) popup_call2_audio_first_window

0x3d43,	// (0x00050a80) popup_call2_audio_in_window_ParamLimits

0x3d43,	// (0x00050a80) popup_call2_audio_in_window

0x3d8b,	// (0x00050ac8) popup_call2_audio_out_window_ParamLimits

0x3d8b,	// (0x00050ac8) popup_call2_audio_out_window

0x3df5,	// (0x00050b32) popup_call2_audio_second_window_ParamLimits

0x3df5,	// (0x00050b32) popup_call2_audio_second_window

0x3e5b,	// (0x00050b98) popup_call2_audio_wait_window_ParamLimits

0x3e5b,	// (0x00050b98) popup_call2_audio_wait_window

0xa5eb,	// (0x00057328) bg_popup_call2_act_pane_cp03

0xa828,	// (0x00057565) list_conf_pane_cp

0xb9a9,	// (0x000586e6) popup_call2_audio_conf_window_t1

0xb236,	// (0x00057f73) list_single_graphic_popup_conf2_pane_ParamLimits

0xb236,	// (0x00057f73) list_single_graphic_popup_conf2_pane

0xb249,	// (0x00057f86) list_highlight_pane_cp04

0xb9b7,	// (0x000586f4) list_single_graphic_popup_conf2_pane_g1

0xb25a,	// (0x00057f97) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x0005c24b) list_single_graphic_popup_conf2_pane_g

0xb9c1,	// (0x000586fe) list_single_graphic_popup_conf2_pane_t1

0xb9cf,	// (0x0005870c) bg_popup_call2_act_pane_cp01_ParamLimits

0xb9cf,	// (0x0005870c) bg_popup_call2_act_pane_cp01

0xba59,	// (0x00058796) call_type_pane_cp05_ParamLimits

0xba59,	// (0x00058796) call_type_pane_cp05

0xbaad,	// (0x000587ea) popup_call2_audio_second_window_g1_ParamLimits

0xbaad,	// (0x000587ea) popup_call2_audio_second_window_g1

0xbb01,	// (0x0005883e) popup_call2_audio_second_window_g2_ParamLimits

0xbb01,	// (0x0005883e) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x0005c250) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x0005c250) popup_call2_audio_second_window_g

0xbb66,	// (0x000588a3) popup_call2_audio_second_window_t1_ParamLimits

0xbb66,	// (0x000588a3) popup_call2_audio_second_window_t1

0xbc21,	// (0x0005895e) popup_call2_audio_second_window_t2_ParamLimits

0xbc21,	// (0x0005895e) popup_call2_audio_second_window_t2

0xbc74,	// (0x000589b1) popup_call2_audio_second_window_t3_ParamLimits

0xbc74,	// (0x000589b1) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x0005c257) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x0005c257) popup_call2_audio_second_window_t

0xa5eb,	// (0x00057328) bg_popup_call2_in_pane_cp02

0xa5f5,	// (0x00057332) call_type_pane_cp04

0xa5fd,	// (0x0005733a) popup_call2_audio_wait_window_g1

0xa605,	// (0x00057342) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0005be32) popup_call2_audio_wait_window_g

0xa60d,	// (0x0005734a) popup_call2_audio_wait_window_t3

0xbd67,	// (0x00058aa4) bg_popup_call2_act_pane_ParamLimits

0xbd67,	// (0x00058aa4) bg_popup_call2_act_pane

0xbe27,	// (0x00058b64) call_type_pane_cp03_ParamLimits

0xbe27,	// (0x00058b64) call_type_pane_cp03

0xbe8b,	// (0x00058bc8) popup_call2_audio_first_window_g1_ParamLimits

0xbe8b,	// (0x00058bc8) popup_call2_audio_first_window_g1

0xbefb,	// (0x00058c38) popup_call2_audio_first_window_g2_ParamLimits

0xbefb,	// (0x00058c38) popup_call2_audio_first_window_g2

0xb604,	// (0x00058341) popup_call2_audio_first_window_g3_ParamLimits

0xb604,	// (0x00058341) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x0005c260) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x0005c260) popup_call2_audio_first_window_g

0xbfd9,	// (0x00058d16) popup_call2_audio_first_window_t1_ParamLimits

0xbfd9,	// (0x00058d16) popup_call2_audio_first_window_t1

0xc0dc,	// (0x00058e19) popup_call2_audio_first_window_t4_ParamLimits

0xc0dc,	// (0x00058e19) popup_call2_audio_first_window_t4

0xc1bf,	// (0x00058efc) popup_call2_audio_first_window_t5_ParamLimits

0xc1bf,	// (0x00058efc) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x0005c26b) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x0005c26b) popup_call2_audio_first_window_t

0xa83e,	// (0x0005757b) bg_popup_call2_act_pane_g1

0xc82c,	// (0x00059569) popup_cale_lunar_info_window_t1

0xc83a,	// (0x00059577) popup_cale_lunar_info_window_t2

0xc848,	// (0x00059585) popup_cale_lunar_info_window_t3

0xa5eb,	// (0x00057328) bg_popup_call2_bubble_pane

0xc2c0,	// (0x00058ffd) bg_popup_call2_in_pane_cp01_ParamLimits

0xc2c0,	// (0x00058ffd) bg_popup_call2_in_pane_cp01

0x9928,	// (0x00056665) call_type_pane_cp02

0xc308,	// (0x00059045) popup_call2_audio_out_window_g1_ParamLimits

0xc308,	// (0x00059045) popup_call2_audio_out_window_g1

0xc334,	// (0x00059071) popup_call2_audio_out_window_g2_ParamLimits

0xc334,	// (0x00059071) popup_call2_audio_out_window_g2

0xc35c,	// (0x00059099) popup_call2_audio_out_window_g3_ParamLimits

0xc35c,	// (0x00059099) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x0005c274) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x0005c274) popup_call2_audio_out_window_g

0xc397,	// (0x000590d4) popup_call2_audio_out_window_t1_ParamLimits

0xc397,	// (0x000590d4) popup_call2_audio_out_window_t1

0xc3f6,	// (0x00059133) popup_call2_audio_out_window_t2_ParamLimits

0xc3f6,	// (0x00059133) popup_call2_audio_out_window_t2

0xc44a,	// (0x00059187) popup_call2_audio_out_window_t3_ParamLimits

0xc44a,	// (0x00059187) popup_call2_audio_out_window_t3

0xc460,	// (0x0005919d) popup_call2_audio_out_window_t4_ParamLimits

0xc460,	// (0x0005919d) popup_call2_audio_out_window_t4

0xc476,	// (0x000591b3) popup_call2_audio_out_window_t5_ParamLimits

0xc476,	// (0x000591b3) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x0005c27d) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x0005c27d) popup_call2_audio_out_window_t

0xc4da,	// (0x00059217) bg_popup_call2_in_pane_ParamLimits

0xc4da,	// (0x00059217) bg_popup_call2_in_pane

0xc536,	// (0x00059273) popup_call2_audio_in_window_g1_ParamLimits

0xc536,	// (0x00059273) popup_call2_audio_in_window_g1

0xc56e,	// (0x000592ab) popup_call2_audio_in_window_g2_ParamLimits

0xc56e,	// (0x000592ab) popup_call2_audio_in_window_g2

0xc5a6,	// (0x000592e3) popup_call2_audio_in_window_g3_ParamLimits

0xc5a6,	// (0x000592e3) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x0005c28a) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x0005c28a) popup_call2_audio_in_window_g

0xc5fe,	// (0x0005933b) popup_call2_audio_in_window_t1_ParamLimits

0xc5fe,	// (0x0005933b) popup_call2_audio_in_window_t1

0xc67e,	// (0x000593bb) popup_call2_audio_in_window_t2_ParamLimits

0xc67e,	// (0x000593bb) popup_call2_audio_in_window_t2

0xc6fe,	// (0x0005943b) popup_call2_audio_in_window_t3_ParamLimits

0xc6fe,	// (0x0005943b) popup_call2_audio_in_window_t3

0xc718,	// (0x00059455) popup_call2_audio_in_window_t4_ParamLimits

0xc718,	// (0x00059455) popup_call2_audio_in_window_t4

0xc72a,	// (0x00059467) popup_call2_audio_in_window_t5_ParamLimits

0xc72a,	// (0x00059467) popup_call2_audio_in_window_t5

0xc73f,	// (0x0005947c) popup_call2_audio_in_window_t6_ParamLimits

0xc73f,	// (0x0005947c) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x0005c293) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x0005c293) popup_call2_audio_in_window_t

0xa83e,	// (0x0005757b) bg_popup_call2_in_pane_g1

0xc856,	// (0x00059593) popup_cale_lunar_info_window_t4

0x0003,

0xf5be,	// (0x0005c2fb) popup_cale_lunar_info_window_t

0xa846,	// (0x00057583) bg_popup_call2_rect_pane_ParamLimits

0xa846,	// (0x00057583) bg_popup_call2_rect_pane

0xa5eb,	// (0x00057328) call2_cli_visual_graphic_pane

0xa5eb,	// (0x00057328) call2_cli_visual_text_pane

0x9d72,	// (0x00056aaf) smil_status_volume_pane_g3

0x0002,

0xa960,	// (0x0005769d) call2_cli_visual_graphic_pane_g1

0xa960,	// (0x0005769d) call2_cli_visual_graphic_pane_g2

0xa960,	// (0x0005769d) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x0005c2a0) call2_cli_visual_graphic_pane_g

0xc754,	// (0x00059491) bg_popup_call2_rect_pane_g1

0xa9f5,	// (0x00057732) bg_popup_call2_rect_pane_g2

0xc75c,	// (0x00059499) bg_popup_call2_rect_pane_g3

0xc764,	// (0x000594a1) bg_popup_call2_rect_pane_g4

0xc76c,	// (0x000594a9) bg_popup_call2_rect_pane_g5

0xc774,	// (0x000594b1) bg_popup_call2_rect_pane_g6

0xc77c,	// (0x000594b9) bg_popup_call2_rect_pane_g7

0xc784,	// (0x000594c1) bg_popup_call2_rect_pane_g8

0xc78c,	// (0x000594c9) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x0005c2a7) bg_popup_call2_rect_pane_g

0xc794,	// (0x000594d1) bg_popup_call2_bubble_pane_g1

0xc79c,	// (0x000594d9) bg_popup_call2_bubble_pane_g2

0xc7a4,	// (0x000594e1) bg_popup_call2_bubble_pane_g3

0xc7ac,	// (0x000594e9) bg_popup_call2_bubble_pane_g4

0xc7b4,	// (0x000594f1) bg_popup_call2_bubble_pane_g5

0xc7bc,	// (0x000594f9) bg_popup_call2_bubble_pane_g6

0xc7c4,	// (0x00059501) bg_popup_call2_bubble_pane_g7

0xc7cc,	// (0x00059509) bg_popup_call2_bubble_pane_g8

0xc7d4,	// (0x00059511) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x0005c2ba) bg_popup_call2_bubble_pane_g

0x17ef,	// (0x0004e52c) aid_cale_week_size_cell_pane

0x1e73,	// (0x0004ebb0) aid_cams_cif_uncrop_pane_ParamLimits

0x1e73,	// (0x0004ebb0) aid_cams_cif_uncrop_pane

0x2023,	// (0x0004ed60) aid_cams_size_cell_ParamLimits

0x2023,	// (0x0004ed60) aid_cams_size_cell

0x2037,	// (0x0004ed74) grid_cams_pane_ParamLimits

0x2051,	// (0x0004ed8e) linegrid_cams_pane_ParamLimits

0x2138,	// (0x0004ee75) call_video_pane_t1

0x2156,	// (0x0004ee93) call_video_pane_t2

0x0001,

0xf26a,	// (0x0005bfa7) call_video_pane_t

0x2584,	// (0x0004f2c1) aid_cale_month_size_cell_pane_ParamLimits

0x2584,	// (0x0004f2c1) aid_cale_month_size_cell_pane

0xf607,	// (0x0005c344) smil_status_volume_pane_g

0x9d7f,	// (0x00056abc) volume_smil_pane_ParamLimits

0x97e3,	// (0x00056520) aid_popup2_width_pane

0x1757,	// (0x0004e494) cell_qdial_pane_g4_ParamLimits

0x1757,	// (0x0004e494) cell_qdial_pane_g4

0x3314,	// (0x00050051) aid_blid_cardinal_pane_ParamLimits

0x3320,	// (0x0005005d) aid_blid_destination_pane_ParamLimits

0x3320,	// (0x0005005d) aid_blid_destination_pane

0xa846,	// (0x00057583) bg_popup_call_poc_act_pane_ParamLimits

0xa846,	// (0x00057583) bg_popup_call_poc_act_pane

0xa846,	// (0x00057583) bg_popup_call_poc_inact_pane_ParamLimits

0xa846,	// (0x00057583) bg_popup_call_poc_inact_pane

0xc7dc,	// (0x00059519) bg_popup_call_poc_act_pane_g1

0xc7e4,	// (0x00059521) bg_popup_call_poc_act_pane_g2

0xc7ec,	// (0x00059529) bg_popup_call_poc_act_pane_g3

0xc7ac,	// (0x000594e9) bg_popup_call_poc_act_pane_g4

0xc7b4,	// (0x000594f1) bg_popup_call_poc_act_pane_g5

0xc7f4,	// (0x00059531) bg_popup_call_poc_act_pane_g6

0xc7c4,	// (0x00059501) bg_popup_call_poc_act_pane_g7

0xc7fc,	// (0x00059539) bg_popup_call_poc_act_pane_g8

0xa5eb,	// (0x00057328) main_usb_pane

0x9d26,	// (0x00056a63) popup_cale_lunar_info_window

0x2430,	// (0x0004f16d) im_reading_pane_t1_ParamLimits

0xabda,	// (0x00057917) list_im_pane_ParamLimits

0xabeb,	// (0x00057928) scroll_pane_cp07_ParamLimits

0xa5eb,	// (0x00057328) grid_highlight_pane_cp012

0xa846,	// (0x00057583) mup_scale_pane_ParamLimits

0xb6f0,	// (0x0005842d) main_usb_pane_g1_ParamLimits

0xb6f0,	// (0x0005842d) main_usb_pane_g1

0x3eb7,	// (0x00050bf4) main_usb_pane_g2_ParamLimits

0x3eb7,	// (0x00050bf4) main_usb_pane_g2

0x0001,

0xf5a7,	// (0x0005c2e4) main_usb_pane_g_ParamLimits

0xf5a7,	// (0x0005c2e4) main_usb_pane_g

0x3ecd,	// (0x00050c0a) main_usb_pane_t1_ParamLimits

0x3ecd,	// (0x00050c0a) main_usb_pane_t1

0x3edf,	// (0x00050c1c) main_usb_pane_t2_ParamLimits

0x3edf,	// (0x00050c1c) main_usb_pane_t2

0x3ef1,	// (0x00050c2e) main_usb_pane_t3_ParamLimits

0x3ef1,	// (0x00050c2e) main_usb_pane_t3

0x3f03,	// (0x00050c40) main_usb_pane_t4_ParamLimits

0x3f03,	// (0x00050c40) main_usb_pane_t4

0x3f15,	// (0x00050c52) main_usb_pane_t5_ParamLimits

0x3f15,	// (0x00050c52) main_usb_pane_t5

0x3f27,	// (0x00050c64) main_usb_pane_t6_ParamLimits

0x3f27,	// (0x00050c64) main_usb_pane_t6

0x0005,

0xf5ac,	// (0x0005c2e9) main_usb_pane_t_ParamLimits

0x32c3,	// (0x00050000) aid_text_placing

0x32cc,	// (0x00050009) main_location2_pane_t1_ParamLimits

0x32de,	// (0x0005001b) main_location2_pane_t2_ParamLimits

0x32f0,	// (0x0005002d) main_location2_pane_t3_ParamLimits

0x3302,	// (0x0005003f) main_location2_pane_t4_ParamLimits

0x3302,	// (0x0005003f) main_location2_pane_t4

0xf3cb,	// (0x0005c108) main_location2_pane_t_ParamLimits

0xa882,	// (0x000575bf) find_pinb_pane_g2_ParamLimits

0xa882,	// (0x000575bf) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0005be58) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0005be58) find_pinb_pane_g

0xa88e,	// (0x000575cb) find_pinb_pane_t1_ParamLimits

0xa8a0,	// (0x000575dd) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0005be5d) find_pinb_pane_t_ParamLimits

0xa5eb,	// (0x00057328) main_call3_pane

0x2a6f,	// (0x0004f7ac) cale_month_day_heading_pane_t1_ParamLimits

0x2af5,	// (0x0004f832) cale_month_day_heading_pane_t2_ParamLimits

0x2b6e,	// (0x0004f8ab) cale_month_day_heading_pane_t3_ParamLimits

0x2be7,	// (0x0004f924) cale_month_day_heading_pane_t4_ParamLimits

0x2c68,	// (0x0004f9a5) cale_month_day_heading_pane_t5_ParamLimits

0x2cf1,	// (0x0004fa2e) cale_month_day_heading_pane_t6_ParamLimits

0x2d7a,	// (0x0004fab7) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x0005bfdf) cale_month_day_heading_pane_t_ParamLimits

0xae35,	// (0x00057b72) smil_status_volume_pane

0x39b2,	// (0x000506ef) postcard_address_pane_ParamLimits

0x39b2,	// (0x000506ef) postcard_address_pane

0x39c4,	// (0x00050701) postcard_message_pane_ParamLimits

0x39c4,	// (0x00050701) postcard_message_pane

0x3e95,	// (0x00050bd2) call2_cli_visual_pane_t1_ParamLimits

0x3e95,	// (0x00050bd2) call2_cli_visual_pane_t1

0x46b5,	// (0x000513f2) postcard_message_pane_t1_ParamLimits

0x46b5,	// (0x000513f2) postcard_message_pane_t1

0x469e,	// (0x000513db) postcard_address_pane_t1_ParamLimits

0x469e,	// (0x000513db) postcard_address_pane_t1

0x468a,	// (0x000513c7) popup_call3_audio_in_window_ParamLimits

0x468a,	// (0x000513c7) popup_call3_audio_in_window

0x4515,	// (0x00051252) bg_popup_call3_in_pane_ParamLimits

0x4515,	// (0x00051252) bg_popup_call3_in_pane

0x458b,	// (0x000512c8) popup_call3_audio_in_window_g1_ParamLimits

0x458b,	// (0x000512c8) popup_call3_audio_in_window_g1

0x45ab,	// (0x000512e8) popup_call3_audio_in_window_g2_ParamLimits

0x45ab,	// (0x000512e8) popup_call3_audio_in_window_g2

0x45cb,	// (0x00051308) popup_call3_audio_in_window_g3_ParamLimits

0x45cb,	// (0x00051308) popup_call3_audio_in_window_g3

0x0003,

0xf60e,	// (0x0005c34b) popup_call3_audio_in_window_g_ParamLimits

0xf60e,	// (0x0005c34b) popup_call3_audio_in_window_g

0x45fc,	// (0x00051339) popup_call3_audio_in_window_t1_ParamLimits

0x45fc,	// (0x00051339) popup_call3_audio_in_window_t1

0x463a,	// (0x00051377) popup_call3_audio_in_window_t2_ParamLimits

0x463a,	// (0x00051377) popup_call3_audio_in_window_t2

0x4678,	// (0x000513b5) popup_call3_audio_in_window_t3_ParamLimits

0x4678,	// (0x000513b5) popup_call3_audio_in_window_t3

0x0002,

0xf617,	// (0x0005c354) popup_call3_audio_in_window_t_ParamLimits

0xf617,	// (0x0005c354) popup_call3_audio_in_window_t

0xaad9,	// (0x00057816) bg_popup_call3_rect_pane

0xc754,	// (0x00059491) bg_popup_call3_rect_pane_g1

0xa9f5,	// (0x00057732) bg_popup_call3_rect_pane_g2

0xc75c,	// (0x00059499) bg_popup_call3_rect_pane_g3

0xc764,	// (0x000594a1) bg_popup_call3_rect_pane_g4

0xc76c,	// (0x000594a9) bg_popup_call3_rect_pane_g5

0xc774,	// (0x000594b1) bg_popup_call3_rect_pane_g6

0xc77c,	// (0x000594b9) bg_popup_call3_rect_pane_g7

0x3604,	// (0x00050341) mup_visualizer_osc_pane

0xb612,	// (0x0005834f) mup_visualizer_spec_pane

0x4545,	// (0x00051282) call3_video_qcif_pane_ParamLimits

0x4545,	// (0x00051282) call3_video_qcif_pane

0x4558,	// (0x00051295) call3_video_qcif_uncrop_pane_ParamLimits

0x4558,	// (0x00051295) call3_video_qcif_uncrop_pane

0x4566,	// (0x000512a3) call3_video_subqcif_pane_ParamLimits

0x4566,	// (0x000512a3) call3_video_subqcif_pane

0x457a,	// (0x000512b7) call3_video_subqcif_uncrop_pane_ParamLimits

0x457a,	// (0x000512b7) call3_video_subqcif_uncrop_pane

0x45eb,	// (0x00051328) popup_call3_audio_in_window_g4_ParamLimits

0x45eb,	// (0x00051328) popup_call3_audio_in_window_g4

0x4504,	// (0x00051241) mup_spec_half_pane

0x450d,	// (0x0005124a) mup_spec_half_pane_cp

0xc9b9,	// (0x000596f6) mup_osc_middle_pane

0xc9c2,	// (0x000596ff) mup_visualizer_osc_pane_g1

0x44e4,	// (0x00051221) mup_spec_bar_pane_ParamLimits

0x44e4,	// (0x00051221) mup_spec_bar_pane

0xc9a6,	// (0x000596e3) mup_spec_bar_pane_g1

0xc9b0,	// (0x000596ed) mup_spec_bar_pane_g2

0x0001,

0xf602,	// (0x0005c33f) mup_spec_bar_pane_g

0x17ef,	// (0x0004e52c) aid_cale_week_size_cell_pane_ParamLimits

0x1809,	// (0x0004e546) bg_cale_heading_pane_ParamLimits

0xaa32,	// (0x0005776f) bg_cale_pane_cp01_ParamLimits

0x1821,	// (0x0004e55e) cale_week_corner_pane_ParamLimits

0x1840,	// (0x0004e57d) cale_week_day_heading_pane_ParamLimits

0x185d,	// (0x0004e59a) cale_week_scroll_pane_g1_ParamLimits

0x1870,	// (0x0004e5ad) cale_week_scroll_pane_g2_ParamLimits

0x1888,	// (0x0004e5c5) cale_week_scroll_pane_g3_ParamLimits

0x18a0,	// (0x0004e5dd) cale_week_scroll_pane_g4_ParamLimits

0x18b8,	// (0x0004e5f5) cale_week_scroll_pane_g5_ParamLimits

0x18d8,	// (0x0004e615) cale_week_scroll_pane_g6_ParamLimits

0x18f8,	// (0x0004e635) cale_week_scroll_pane_g7_ParamLimits

0x1918,	// (0x0004e655) cale_week_scroll_pane_g8_ParamLimits

0x193c,	// (0x0004e679) cale_week_scroll_pane_g9_ParamLimits

0x1954,	// (0x0004e691) cale_week_scroll_pane_g10_ParamLimits

0x196c,	// (0x0004e6a9) cale_week_scroll_pane_g11_ParamLimits

0x1984,	// (0x0004e6c1) cale_week_scroll_pane_g12_ParamLimits

0x199c,	// (0x0004e6d9) cale_week_scroll_pane_g13_ParamLimits

0x199c,	// (0x0004e6d9) cale_week_scroll_pane_g14_ParamLimits

0x199c,	// (0x0004e6d9) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0005bee9) cale_week_scroll_pane_g_ParamLimits

0x19d8,	// (0x0004e715) cale_week_time_pane_ParamLimits

0x19fc,	// (0x0004e739) grid_cale_week_pane_ParamLimits

0xaa4f,	// (0x0005778c) listscroll_cale_week_pane_t1

0xaa61,	// (0x0005779e) scroll_pane_cp08_ParamLimits

0x25e4,	// (0x0004f321) cale_month_corner_pane_ParamLimits

0xae0b,	// (0x00057b48) cale_month_pane_t1

0x2a02,	// (0x0004f73f) cale_month_week_pane_ParamLimits

0x311f,	// (0x0004fe5c) popup_call_status_window_g1_ParamLimits

0x3133,	// (0x0004fe70) popup_call_status_window_g2_ParamLimits

0x3147,	// (0x0004fe84) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x0005c08f) popup_call_status_window_g_ParamLimits

0xb1bb,	// (0x00057ef8) aid_call2_pane

0x03f6,	// (0x0004d133) msg_header_pane_g1

0x39b2,	// (0x000506ef) postcard_address2_pane_ParamLimits

0x39b2,	// (0x000506ef) postcard_address2_pane

0x39c4,	// (0x00050701) postcard_message2_pane_ParamLimits

0x39c4,	// (0x00050701) postcard_message2_pane

0x4496,	// (0x000511d3) message2_row_pane_ParamLimits

0x4496,	// (0x000511d3) message2_row_pane

0x44b2,	// (0x000511ef) address2_row_pane_ParamLimits

0x44b2,	// (0x000511ef) address2_row_pane

0xc974,	// (0x000596b1) postcard_message2_row_pane_g1

0xc97c,	// (0x000596b9) postcard_message2_row_pane_t1

0xc974,	// (0x000596b1) address2_row_pane_g1

0xc97c,	// (0x000596b9) address2_row_pane_t1

0x1d2c,	// (0x0004ea69) aid_size_cell_vorec

0xa5eb,	// (0x00057328) main_rss_pane

0x44c5,	// (0x00051202) rss_list_single_pane_ParamLimits

0x44c5,	// (0x00051202) rss_list_single_pane

0xc98a,	// (0x000596c7) rss_list_single_pane_t1

0xc998,	// (0x000596d5) rss_list_single_pane_t2

0x0001,

0xf5fd,	// (0x0005c33a) rss_list_single_pane_t

0xa5eb,	// (0x00057328) main_camera2_pane

0xa5eb,	// (0x00057328) main_video2_pane

0x472e,	// (0x0005146b) cams_zoom_pane_cp2_ParamLimits

0x472e,	// (0x0005146b) cams_zoom_pane_cp2

0x474e,	// (0x0005148b) image2_vga_pane_ParamLimits

0x474e,	// (0x0005148b) image2_vga_pane

0x479f,	// (0x000514dc) main_camera2_pane_g1_ParamLimits

0x479f,	// (0x000514dc) main_camera2_pane_g1

0x47bf,	// (0x000514fc) main_camera2_pane_g2_ParamLimits

0x47bf,	// (0x000514fc) main_camera2_pane_g2

0x47df,	// (0x0005151c) main_camera2_pane_g3_ParamLimits

0x47df,	// (0x0005151c) main_camera2_pane_g3

0x47ff,	// (0x0005153c) main_camera2_pane_g4_ParamLimits

0x47ff,	// (0x0005153c) main_camera2_pane_g4

0x481f,	// (0x0005155c) main_camera2_pane_g5_ParamLimits

0x481f,	// (0x0005155c) main_camera2_pane_g5

0x483f,	// (0x0005157c) main_camera2_pane_g6_ParamLimits

0x483f,	// (0x0005157c) main_camera2_pane_g6

0x485f,	// (0x0005159c) main_camera2_pane_g7_ParamLimits

0x485f,	// (0x0005159c) main_camera2_pane_g7

0x487f,	// (0x000515bc) main_camera2_pane_g8_ParamLimits

0x487f,	// (0x000515bc) main_camera2_pane_g8

0x0008,

0xf61e,	// (0x0005c35b) main_camera2_pane_g_ParamLimits

0xf61e,	// (0x0005c35b) main_camera2_pane_g

0x48bf,	// (0x000515fc) main_camera2_pane_t1_ParamLimits

0x48bf,	// (0x000515fc) main_camera2_pane_t1

0x48f4,	// (0x00051631) main_camera2_pane_t2_ParamLimits

0x48f4,	// (0x00051631) main_camera2_pane_t2

0x491a,	// (0x00051657) main_camera2_pane_t3_ParamLimits

0x491a,	// (0x00051657) main_camera2_pane_t3

0x4978,	// (0x000516b5) main_camera2_pane_t4_ParamLimits

0x4978,	// (0x000516b5) main_camera2_pane_t4

0x0006,

0xf631,	// (0x0005c36e) main_camera2_pane_t_ParamLimits

0xf631,	// (0x0005c36e) main_camera2_pane_t

0x4a0a,	// (0x00051747) cams_zoom_pane_cp4_ParamLimits

0x4a0a,	// (0x00051747) cams_zoom_pane_cp4

0x4a20,	// (0x0005175d) image2_cif_pane_ParamLimits

0x4a20,	// (0x0005175d) image2_cif_pane

0x4a4b,	// (0x00051788) image2_subqcif_pane_ParamLimits

0x4a4b,	// (0x00051788) image2_subqcif_pane

0x4a65,	// (0x000517a2) main_video2_pane_g1_ParamLimits

0x4a65,	// (0x000517a2) main_video2_pane_g1

0x4a7f,	// (0x000517bc) main_video2_pane_g2_ParamLimits

0x4a7f,	// (0x000517bc) main_video2_pane_g2

0x4a95,	// (0x000517d2) main_video2_pane_g3_ParamLimits

0x4a95,	// (0x000517d2) main_video2_pane_g3

0x4aab,	// (0x000517e8) main_video2_pane_g4_ParamLimits

0x4aab,	// (0x000517e8) main_video2_pane_g4

0x4ac1,	// (0x000517fe) main_video2_pane_g5_ParamLimits

0x4ac1,	// (0x000517fe) main_video2_pane_g5

0x4ad7,	// (0x00051814) main_video2_pane_g6_ParamLimits

0x4ad7,	// (0x00051814) main_video2_pane_g6

0x0005,

0xf640,	// (0x0005c37d) main_video2_pane_g_ParamLimits

0xf640,	// (0x0005c37d) main_video2_pane_g

0x4af1,	// (0x0005182e) main_video2_pane_t1_ParamLimits

0x4af1,	// (0x0005182e) main_video2_pane_t1

0x4b15,	// (0x00051852) main_video2_pane_t2_ParamLimits

0x4b15,	// (0x00051852) main_video2_pane_t2

0x4b63,	// (0x000518a0) main_video2_pane_t3_ParamLimits

0x4b63,	// (0x000518a0) main_video2_pane_t3

0x0002,

0xf64d,	// (0x0005c38a) main_video2_pane_t_ParamLimits

0xf64d,	// (0x0005c38a) main_video2_pane_t

0x3fe2,	// (0x00050d1f) call_muted_g2

0x0001,

0xf5ef,	// (0x0005c32c) call_muted_g

0xa5eb,	// (0x00057328) main_mup2_pane

0x4ba7,	// (0x000518e4) main_mup2_pane_g1_ParamLimits

0x4ba7,	// (0x000518e4) main_mup2_pane_g1

0x4bb3,	// (0x000518f0) main_mup2_pane_g2_ParamLimits

0x4bb3,	// (0x000518f0) main_mup2_pane_g2

0x9ded,	// (0x00056b2a) main_mup_pane_g13_cp1

0x9df5,	// (0x00056b32) mup_volume_pane_cp1

0x4bcf,	// (0x0005190c) main_mup2_pane_g4_ParamLimits

0x4bcf,	// (0x0005190c) main_mup2_pane_g4

0x4be1,	// (0x0005191e) main_mup2_pane_g5_ParamLimits

0x4be1,	// (0x0005191e) main_mup2_pane_g5

0x4bf3,	// (0x00051930) main_mup2_pane_g6_ParamLimits

0x4bf3,	// (0x00051930) main_mup2_pane_g6

0x4c05,	// (0x00051942) main_mup2_pane_g7_ParamLimits

0x4c05,	// (0x00051942) main_mup2_pane_g7

0x0006,

0xf654,	// (0x0005c391) main_mup2_pane_g_ParamLimits

0xf654,	// (0x0005c391) main_mup2_pane_g

0x4c1d,	// (0x0005195a) main_mup2_pane_t1_ParamLimits

0x4c1d,	// (0x0005195a) main_mup2_pane_t1

0x4c33,	// (0x00051970) main_mup2_pane_t2_ParamLimits

0x4c33,	// (0x00051970) main_mup2_pane_t2

0x4c49,	// (0x00051986) main_mup2_pane_t3_ParamLimits

0x4c49,	// (0x00051986) main_mup2_pane_t3

0x4c5f,	// (0x0005199c) main_mup2_pane_t4_ParamLimits

0x4c5f,	// (0x0005199c) main_mup2_pane_t4

0x4c77,	// (0x000519b4) main_mup2_pane_t5_ParamLimits

0x4c77,	// (0x000519b4) main_mup2_pane_t5

0x4c8f,	// (0x000519cc) main_mup2_pane_t6_ParamLimits

0x4c8f,	// (0x000519cc) main_mup2_pane_t6

0x0005,

0xf663,	// (0x0005c3a0) main_mup2_pane_t_ParamLimits

0xf663,	// (0x0005c3a0) main_mup2_pane_t

0x4cbf,	// (0x000519fc) mup2_visualizer_pane_ParamLimits

0x4cbf,	// (0x000519fc) mup2_visualizer_pane

0x4ced,	// (0x00051a2a) mup_progress_pane_cp_ParamLimits

0x4ced,	// (0x00051a2a) mup_progress_pane_cp

0x9dd8,	// (0x00056b15) mup_volume_pane_cp_ParamLimits

0x9dd8,	// (0x00056b15) mup_volume_pane_cp

0x4d01,	// (0x00051a3e) mup2_visualizer_pane_g1_ParamLimits

0x4d01,	// (0x00051a3e) mup2_visualizer_pane_g1

0xc9f9,	// (0x00059736) mup2_visualizer_pane_g2_ParamLimits

0xc9f9,	// (0x00059736) mup2_visualizer_pane_g2

0x4d18,	// (0x00051a55) mup2_visualizer_pane_g3_ParamLimits

0x4d18,	// (0x00051a55) mup2_visualizer_pane_g3

0x0002,

0xf670,	// (0x0005c3ad) mup2_visualizer_pane_g_ParamLimits

0xf670,	// (0x0005c3ad) mup2_visualizer_pane_g

0xb839,	// (0x00058576) aid_size_cell_fmradio

0x4194,	// (0x00050ed1) aid_height_parent_landcape

0xac69,	// (0x000579a6) wml_content_pane_cp

0xac71,	// (0x000579ae) wml_tabs_pane

0xac7a,	// (0x000579b7) popup_wml_miniature_window

0xac82,	// (0x000579bf) scroll_pane_cp021

0xac96,	// (0x000579d3) wml_content_pane_comp8

0xa5eb,	// (0x00057328) bg_popup_sub_pane_cp05

0xca17,	// (0x00059754) popup_wml_miniature_window_g1

0xca1f,	// (0x0005975c) wml_miniature_view_pane

0x4d24,	// (0x00051a61) aid_size_wml_view

0x4d2c,	// (0x00051a69) wml_miniature_view_pane_g1

0x4d35,	// (0x00051a72) wml_miniature_view_pane_g2

0x4d3e,	// (0x00051a7b) wml_miniature_view_pane_g3

0x4d46,	// (0x00051a83) wml_miniature_view_pane_g4

0x4d4e,	// (0x00051a8b) wml_miniature_view_pane_g5

0x4d56,	// (0x00051a93) wml_miniature_view_pane_g6

0x4d5e,	// (0x00051a9b) wml_miniature_view_pane_g7

0x4d66,	// (0x00051aa3) wml_miniature_view_pane_g8

0x0007,

0xf677,	// (0x0005c3b4) wml_miniature_view_pane_g

0xca27,	// (0x00059764) background_graphic_ParamLimits

0xca27,	// (0x00059764) background_graphic

0xca33,	// (0x00059770) wml_tabs_2_pane

0xca3c,	// (0x00059779) wml_tabs_3_pane_ParamLimits

0xca3c,	// (0x00059779) wml_tabs_3_pane

0xca4e,	// (0x0005978b) wml_tabs_4_pane_ParamLimits

0xca4e,	// (0x0005978b) wml_tabs_4_pane

0xca64,	// (0x000597a1) wml_tabs_5_pane_ParamLimits

0xca64,	// (0x000597a1) wml_tabs_5_pane

0xca7e,	// (0x000597bb) wml_tabs_pane_g2_ParamLimits

0xca7e,	// (0x000597bb) wml_tabs_pane_g2

0xca92,	// (0x000597cf) wml_tabs_pane_g3_ParamLimits

0xca92,	// (0x000597cf) wml_tabs_pane_g3

0x4d6e,	// (0x00051aab) wml_tabs_2_active_pane_ParamLimits

0x4d6e,	// (0x00051aab) wml_tabs_2_active_pane

0x4d82,	// (0x00051abf) wml_tabs_2_passive_pane_ParamLimits

0x4d82,	// (0x00051abf) wml_tabs_2_passive_pane

0x4d96,	// (0x00051ad3) wml_tabs_3_active_pane_cp_ParamLimits

0x4d96,	// (0x00051ad3) wml_tabs_3_active_pane_cp

0x4dab,	// (0x00051ae8) wml_tabs_3_passive_pane_ParamLimits

0x4dab,	// (0x00051ae8) wml_tabs_3_passive_pane

0x4dbe,	// (0x00051afb) wml_tabs_3_passive_pane_cp_ParamLimits

0x4dbe,	// (0x00051afb) wml_tabs_3_passive_pane_cp

0x4dd5,	// (0x00051b12) tabs_4_active_pane

0x4ddd,	// (0x00051b1a) tabs_4_passive_pane

0x4de7,	// (0x00051b24) tabs_4_passive_pane_cp

0x4def,	// (0x00051b2c) tabs_4_passive_pane_cp2

0x3eaf,	// (0x00050bec) aid_height_text

0x35da,	// (0x00050317) mup_volume_cont_pane_ParamLimits

0x35da,	// (0x00050317) mup_volume_cont_pane

0x13de,	// (0x0004e11b) aid_size_cell_pinb

0x13e8,	// (0x0004e125) aid_size_list_pinb

0x4cd9,	// (0x00051a16) mup2_volume_cont_pane_ParamLimits

0x4cd9,	// (0x00051a16) mup2_volume_cont_pane

0x9dc4,	// (0x00056b01) mup2_volume_cont_pane_g1_ParamLimits

0x9dc4,	// (0x00056b01) mup2_volume_cont_pane_g1

0x1091,	// (0x0004ddce) aid_size_cell_touch_ParamLimits

0x1091,	// (0x0004ddce) aid_size_cell_touch

0x12ce,	// (0x0004e00b) touch_pane_ParamLimits

0x12ce,	// (0x0004e00b) touch_pane

0x97d1,	// (0x0005650e) main_rss2_pane

0xcaaf,	// (0x000597ec) listscroll_rss2_pane

0xcab8,	// (0x000597f5) rss2_navigation_pane

0xcac0,	// (0x000597fd) list_rss2_pane

0xb30c,	// (0x00058049) scroll_pane_cp22

0xcac8,	// (0x00059805) rss2_navigation_pane_g1

0xcad1,	// (0x0005980e) rss2_navigation_pane_g2

0xcad9,	// (0x00059816) rss2_navigation_pane_g3

0x0002,

0xf688,	// (0x0005c3c5) rss2_navigation_pane_g

0xcae1,	// (0x0005981e) rss2_navigation_pane_t1

0x4df9,	// (0x00051b36) rss2_list_single_pane_ParamLimits

0x4df9,	// (0x00051b36) rss2_list_single_pane

0xcaef,	// (0x0005982c) rss2_list_single_pane_t2

0xcafd,	// (0x0005983a) rss2_list_single_pane_t3_ParamLimits

0xcafd,	// (0x0005983a) rss2_list_single_pane_t3

0xcb1a,	// (0x00059857) rss2_list_single_pane_t4

0x3004,	// (0x0004fd41) smil_status_pane_g1

0xa522,	// (0x0005725f) main_image2_pane_ParamLimits

0xa522,	// (0x0005725f) main_image2_pane

0x489f,	// (0x000515dc) main_camera2_pane_g9_ParamLimits

0x489f,	// (0x000515dc) main_camera2_pane_g9

0x49cd,	// (0x0005170a) main_camera2_pane_t5_ParamLimits

0x49cd,	// (0x0005170a) main_camera2_pane_t5

0x9d94,	// (0x00056ad1) main_camera2_pane_t6_ParamLimits

0x9d94,	// (0x00056ad1) main_camera2_pane_t6

0x4e0e,	// (0x00051b4b) main_image2_pane_g1_ParamLimits

0x4e0e,	// (0x00051b4b) main_image2_pane_g1

0x3beb,	// (0x00050928) smil2_video_pane_ParamLimits

0x3beb,	// (0x00050928) smil2_video_pane

0x10c9,	// (0x0004de06) aid_zoom_text_primary_cp

0x982f,	// (0x0005656c) popup_preview_fixed_window

0xabd2,	// (0x0005790f) im_reading_pane_g1

0x4716,	// (0x00051453) cams2_bc_adjust_pane_cp_ParamLimits

0x4716,	// (0x00051453) cams2_bc_adjust_pane_cp

0x49fc,	// (0x00051739) cams2_bc_adjust_pane_ParamLimits

0x49fc,	// (0x00051739) cams2_bc_adjust_pane

0x9dfd,	// (0x00056b3a) cams2_bc_adjust_pane_g1

0x9e05,	// (0x00056b42) cams2_slider_pane

0x9e0e,	// (0x00056b4b) cams2_slider_pane_g1

0x9e17,	// (0x00056b54) cams2_slider_pane_g2

0x0006,

0xf68f,	// (0x0005c3cc) cams2_slider_pane_g

0x14d6,	// (0x0004e213) calc_display_pane_ParamLimits

0x14fb,	// (0x0004e238) calc_paper_pane_ParamLimits

0x151e,	// (0x0004e25b) grid_calc_pane_ParamLimits

0x9cad,	// (0x000569ea) popup_clock_digital_window_t1_ParamLimits

0xb7d6,	// (0x00058513) main_image_pane_t1

0x14b8,	// (0x0004e1f5) aid_size_cell_calc_ParamLimits

0x14b8,	// (0x0004e1f5) aid_size_cell_calc

0x41da,	// (0x00050f17) popup_blid_sat_info2_window_ParamLimits

0x41da,	// (0x00050f17) popup_blid_sat_info2_window

0xcb30,	// (0x0005986d) aid_size_cell_blid

0xcb38,	// (0x00059875) bg_popup_window_pane_cp07

0xcb5b,	// (0x00059898) grid_popup_blid_pane

0xcb65,	// (0x000598a2) heading_pane_cp05_ParamLimits

0xcb65,	// (0x000598a2) heading_pane_cp05

0xcc2f,	// (0x0005996c) cell_popup_blid_pane_ParamLimits

0xcc2f,	// (0x0005996c) cell_popup_blid_pane

0xcc53,	// (0x00059990) cell_popup_blid_pane_g1

0xcc5b,	// (0x00059998) cell_popup_blid_pane_t1

0x4ca9,	// (0x000519e6) mup2_indicator_pane_ParamLimits

0x4ca9,	// (0x000519e6) mup2_indicator_pane

0xaad9,	// (0x00057816) mup2_visualizer_osc_pane

0xca05,	// (0x00059742) mup2_visualizer_spec_pane_ParamLimits

0xca05,	// (0x00059742) mup2_visualizer_spec_pane

0x4e24,	// (0x00051b61) mup2_spec_half_pane

0x4e2d,	// (0x00051b6a) mup2_spec_half_pane_cp

0x4e35,	// (0x00051b72) mup2_spec_bar_pane_ParamLimits

0x4e35,	// (0x00051b72) mup2_spec_bar_pane

0xc9a6,	// (0x000596e3) mup2_spec_bar_pane_g1

0xc9b0,	// (0x000596ed) mup2_spec_bar_pane_g2

0x0001,

0xf602,	// (0x0005c33f) mup2_spec_bar_pane_g

0x4e55,	// (0x00051b92) mup2_osc_middle_pane

0xc9c2,	// (0x000596ff) mup2_visualizer_osc_pane_g1

0x9859,	// (0x00056596) popup_number_entry_window_t1_ParamLimits

0x986c,	// (0x000565a9) popup_number_entry_window_t2_ParamLimits

0x987e,	// (0x000565bb) popup_number_entry_window_t3_ParamLimits

0x1320,	// (0x0004e05d) popup_number_entry_window_t5_ParamLimits

0x1320,	// (0x0004e05d) popup_number_entry_window_t5

0xf0c6,	// (0x0005be03) popup_number_entry_window_t_ParamLimits

0x9890,	// (0x000565cd) text_title_cp2_ParamLimits

0x9cec,	// (0x00056a29) aid_hotspot_pointer_text2_pane

0x9d12,	// (0x00056a4f) main_viewer_pane_g9_ParamLimits

0x9d12,	// (0x00056a4f) main_viewer_pane_g9

0xae0b,	// (0x00057b48) cale_month_pane_t1_ParamLimits

0xae48,	// (0x00057b85) bg_cale_pane_ParamLimits

0xae60,	// (0x00057b9d) list_cale_pane_ParamLimits

0xae71,	// (0x00057bae) listscroll_cale_day_pane_t1

0xae83,	// (0x00057bc0) scroll_pane_cp09_ParamLimits

0x360c,	// (0x00050349) main_mup_eq_pane_t1_ParamLimits

0x360c,	// (0x00050349) main_mup_eq_pane_t1

0x3626,	// (0x00050363) main_mup_eq_pane_t2_ParamLimits

0x3626,	// (0x00050363) main_mup_eq_pane_t2

0x3640,	// (0x0005037d) main_mup_eq_pane_t3_ParamLimits

0x3640,	// (0x0005037d) main_mup_eq_pane_t3

0x365c,	// (0x00050399) main_mup_eq_pane_t4_ParamLimits

0x365c,	// (0x00050399) main_mup_eq_pane_t4

0x3678,	// (0x000503b5) main_mup_eq_pane_t5_ParamLimits

0x3678,	// (0x000503b5) main_mup_eq_pane_t5

0x3694,	// (0x000503d1) main_mup_eq_pane_t6_ParamLimits

0x3694,	// (0x000503d1) main_mup_eq_pane_t6

0x36a8,	// (0x000503e5) main_mup_eq_pane_t7_ParamLimits

0x36a8,	// (0x000503e5) main_mup_eq_pane_t7

0x36bc,	// (0x000503f9) main_mup_eq_pane_t8_ParamLimits

0x36bc,	// (0x000503f9) main_mup_eq_pane_t8

0x36d0,	// (0x0005040d) main_mup_eq_pane_t9_ParamLimits

0x36d0,	// (0x0005040d) main_mup_eq_pane_t9

0x36ea,	// (0x00050427) main_mup_eq_pane_t10_ParamLimits

0x36ea,	// (0x00050427) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x0005c18e) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x0005c18e) main_mup_eq_pane_t

0x3799,	// (0x000504d6) mup_equalizer_pane_cp5_ParamLimits

0x37ad,	// (0x000504ea) mup_equalizer_pane_cp6_ParamLimits

0x37c1,	// (0x000504fe) mup_equalizer_pane_cp7_ParamLimits

0x97d1,	// (0x0005650e) main_gallery_pane

0xc9cb,	// (0x00059708) smil2_volume_pane

0xc9d3,	// (0x00059710) smil_status_volume_pane_g1_ParamLimits

0xc9e6,	// (0x00059723) smil_status_volume_pane_g2_ParamLimits

0x9d72,	// (0x00056aaf) smil_status_volume_pane_g3_ParamLimits

0xf607,	// (0x0005c344) smil_status_volume_pane_g_ParamLimits

0xcb38,	// (0x00059875) bg_popup_window_pane_cp07_ParamLimits

0xcb46,	// (0x00059883) blid_firmament_pane

0x4e5e,	// (0x00051b9b) aid_size_cell_gallery_ParamLimits

0x4e5e,	// (0x00051b9b) aid_size_cell_gallery

0x4e74,	// (0x00051bb1) grid_gallery_pane_ParamLimits

0x4e74,	// (0x00051bb1) grid_gallery_pane

0x4e8d,	// (0x00051bca) cell_gallery_pane_ParamLimits

0x4e8d,	// (0x00051bca) cell_gallery_pane

0xcc69,	// (0x000599a6) bg_cell_gallery_focus_pane_ParamLimits

0xcc69,	// (0x000599a6) bg_cell_gallery_focus_pane

0xcc87,	// (0x000599c4) cell_gallery_pane_g1_ParamLimits

0xcc87,	// (0x000599c4) cell_gallery_pane_g1

0x4ed6,	// (0x00051c13) cell_gallery_pane_g2_ParamLimits

0x4ed6,	// (0x00051c13) cell_gallery_pane_g2

0x4ee3,	// (0x00051c20) cell_gallery_pane_g3_ParamLimits

0x4ee3,	// (0x00051c20) cell_gallery_pane_g3

0xcc93,	// (0x000599d0) cell_gallery_pane_g4_ParamLimits

0xcc93,	// (0x000599d0) cell_gallery_pane_g4

0x0003,

0xf6b5,	// (0x0005c3f2) cell_gallery_pane_g_ParamLimits

0xf6b5,	// (0x0005c3f2) cell_gallery_pane_g

0xcc9f,	// (0x000599dc) bg_cell_gallery_focus_pane_g1

0xcca7,	// (0x000599e4) bg_cell_gallery_focus_pane_g2

0xccaf,	// (0x000599ec) bg_cell_gallery_focus_pane_g3

0xccb7,	// (0x000599f4) bg_cell_gallery_focus_pane_g4

0xccbf,	// (0x000599fc) bg_cell_gallery_focus_pane_g5

0xccc7,	// (0x00059a04) bg_cell_gallery_focus_pane_g6

0xcccf,	// (0x00059a0c) bg_cell_gallery_focus_pane_g7

0xccd7,	// (0x00059a14) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6be,	// (0x0005c3fb) bg_cell_gallery_focus_pane_g

0xccdf,	// (0x00059a1c) aid_firma_cardinal

0xccf3,	// (0x00059a30) blid_firmament_pane_t1

0xcd0a,	// (0x00059a47) blid_firmament_pane_t2

0xcd21,	// (0x00059a5e) blid_firmament_pane_t3

0xcd38,	// (0x00059a75) blid_firmament_pane_t4

0x0003,

0xf6cf,	// (0x0005c40c) blid_firmament_pane_t

0xcd4f,	// (0x00059a8c) blid_sat_info_pane

0xcd5f,	// (0x00059a9c) blid_sat_info_pane_g1

0xcd5f,	// (0x00059a9c) blid_sat_info_pane_g2

0x0001,

0xf6d8,	// (0x0005c415) blid_sat_info_pane_g

0xcd69,	// (0x00059aa6) blid_sat_info_pane_t1

0xcd77,	// (0x00059ab4) smil2_volume_content_pane

0xcd80,	// (0x00059abd) smil2_volume_pane_g1

0xa98c,	// (0x000576c9) smil2_volume_content_pane_g1

0xcd88,	// (0x00059ac5) smil2_volume_content_pane_g2

0xcd91,	// (0x00059ace) smil2_volume_content_pane_g3

0xcd9a,	// (0x00059ad7) smil2_volume_content_pane_g4

0xcda3,	// (0x00059ae0) smil2_volume_content_pane_g5

0xcdac,	// (0x00059ae9) smil2_volume_content_pane_g6

0xcdb5,	// (0x00059af2) smil2_volume_content_pane_g7

0xcdbe,	// (0x00059afb) smil2_volume_content_pane_g8

0xcdc7,	// (0x00059b04) smil2_volume_content_pane_g9

0xcdd0,	// (0x00059b0d) smil2_volume_content_pane_g10

0x0009,

0xf6dd,	// (0x0005c41a) smil2_volume_content_pane_g

0x1ab0,	// (0x0004e7ed) cale_week_day_heading_pane_t1_ParamLimits

0x1ada,	// (0x0004e817) cale_week_day_heading_pane_t2_ParamLimits

0x1b09,	// (0x0004e846) cale_week_day_heading_pane_t3_ParamLimits

0x1b38,	// (0x0004e875) cale_week_day_heading_pane_t4_ParamLimits

0x1b67,	// (0x0004e8a4) cale_week_day_heading_pane_t5_ParamLimits

0x1b9e,	// (0x0004e8db) cale_week_day_heading_pane_t6_ParamLimits

0x1bd5,	// (0x0004e912) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0005bf0a) cale_week_day_heading_pane_t_ParamLimits

0xaa7e,	// (0x000577bb) bg_cale_side_pane_ParamLimits

0x1bff,	// (0x0004e93c) cale_week_time_pane_t1_ParamLimits

0x1c19,	// (0x0004e956) cale_week_time_pane_t2_ParamLimits

0x1c33,	// (0x0004e970) cale_week_time_pane_t3_ParamLimits

0x1c4d,	// (0x0004e98a) cale_week_time_pane_t4_ParamLimits

0x1c67,	// (0x0004e9a4) cale_week_time_pane_t5_ParamLimits

0x1c81,	// (0x0004e9be) cale_week_time_pane_t6_ParamLimits

0x1c9b,	// (0x0004e9d8) cale_week_time_pane_t7_ParamLimits

0x1cb5,	// (0x0004e9f2) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0005bf19) cale_week_time_pane_t_ParamLimits

0x1ccf,	// (0x0004ea0c) cell_cale_week_pane_g2_ParamLimits

0xaa7e,	// (0x000577bb) bg_cale_side_pane_cp01_ParamLimits

0x2e0b,	// (0x0004fb48) cale_month_week_pane_t1_ParamLimits

0x2e24,	// (0x0004fb61) cale_month_week_pane_t2_ParamLimits

0x2e3d,	// (0x0004fb7a) cale_month_week_pane_t3_ParamLimits

0x2e56,	// (0x0004fb93) cale_month_week_pane_t4_ParamLimits

0x2e6f,	// (0x0004fbac) cale_month_week_pane_t5_ParamLimits

0x2e88,	// (0x0004fbc5) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x0005bfee) cale_month_week_pane_t_ParamLimits

0x9c29,	// (0x00056966) cell_cale_month_pane_g1_ParamLimits

0x97d1,	// (0x0005650e) main_cale_event_viewer_pane

0x97d1,	// (0x0005650e) listscroll_cale_event_viewer_pane

0xcdd9,	// (0x00059b16) list_cale_ev_pane

0xcde1,	// (0x00059b1e) scroll_pane_cp023

0xcded,	// (0x00059b2a) field_cale_ev_pane_ParamLimits

0xcded,	// (0x00059b2a) field_cale_ev_pane

0xce0b,	// (0x00059b48) field_cale_ev_content_pane_ParamLimits

0xce0b,	// (0x00059b48) field_cale_ev_content_pane

0xce17,	// (0x00059b54) field_cale_ev_pane_g1_ParamLimits

0xce17,	// (0x00059b54) field_cale_ev_pane_g1

0xce23,	// (0x00059b60) field_cale_ev_pane_g2_ParamLimits

0xce23,	// (0x00059b60) field_cale_ev_pane_g2

0xce3b,	// (0x00059b78) field_cale_ev_pane_g3_ParamLimits

0xce3b,	// (0x00059b78) field_cale_ev_pane_g3

0x0002,

0xf6f2,	// (0x0005c42f) field_cale_ev_pane_g_ParamLimits

0xf6f2,	// (0x0005c42f) field_cale_ev_pane_g

0xce53,	// (0x00059b90) field_cale_ev_pane_t1_ParamLimits

0xce53,	// (0x00059b90) field_cale_ev_pane_t1

0xce6a,	// (0x00059ba7) field_cale_ev_content_pane_t1_ParamLimits

0xce6a,	// (0x00059ba7) field_cale_ev_content_pane_t1

0xb6bc,	// (0x000583f9) bg_button_pane_cp01

0x17dd,	// (0x0004e51a) listscroll_cale_week_pane_ParamLimits

0xaa29,	// (0x00057766) popup_toolbar_window_cp01

0xaa4f,	// (0x0005778c) listscroll_cale_week_pane_t1_ParamLimits

0x17dd,	// (0x0004e51a) listscroll_cale_day_pane_ParamLimits

0xaa29,	// (0x00057766) popup_toolbar_window_cp02

0xae71,	// (0x00057bae) listscroll_cale_day_pane_t1_ParamLimits

0x17dd,	// (0x0004e51a) main_cale_month_pane_ParamLimits

0x9d5d,	// (0x00056a9a) popup_toolbar_window_cp03_ParamLimits

0x9d5d,	// (0x00056a9a) popup_toolbar_window_cp03

0x3ab3,	// (0x000507f0) main_image_pane_g2_ParamLimits

0x3ab3,	// (0x000507f0) main_image_pane_g2

0x3ac4,	// (0x00050801) main_image_pane_g3_ParamLimits

0x3ac4,	// (0x00050801) main_image_pane_g3

0x0002,

0xf4e3,	// (0x0005c220) main_image_pane_g_ParamLimits

0xf4e3,	// (0x0005c220) main_image_pane_g

0xb7d6,	// (0x00058513) main_image_pane_t1_ParamLimits

0x3ad5,	// (0x00050812) main_image_pane_t2_ParamLimits

0x3ad5,	// (0x00050812) main_image_pane_t2

0x3ae7,	// (0x00050824) main_image_pane_t3_ParamLimits

0x3ae7,	// (0x00050824) main_image_pane_t3

0x3b0f,	// (0x0005084c) main_image_pane_t4_ParamLimits

0x3b0f,	// (0x0005084c) main_image_pane_t4

0x0003,

0xf4ea,	// (0x0005c227) main_image_pane_t_ParamLimits

0xf4ea,	// (0x0005c227) main_image_pane_t

0x3b2f,	// (0x0005086c) popup_image_details_window_cp01

0x3b39,	// (0x00050876) popup_toobar_trans_pane_cp01_ParamLimits

0x3b39,	// (0x00050876) popup_toobar_trans_pane_cp01

0x42b9,	// (0x00050ff6) popup_image_details_window_ParamLimits

0x42b9,	// (0x00050ff6) popup_image_details_window

0x9d30,	// (0x00056a6d) popup_image_focus_window

0x46d0,	// (0x0005140d) camera2_autofocus_pane_ParamLimits

0x46d0,	// (0x0005140d) camera2_autofocus_pane

0x97d1,	// (0x0005650e) bg_popup_sub_pane_cp06

0xce88,	// (0x00059bc5) popup_image_focus_window_g1

0xce90,	// (0x00059bcd) popup_image_focus_window_g2

0xce98,	// (0x00059bd5) popup_image_focus_window_g3

0xcea0,	// (0x00059bdd) popup_image_focus_window_g4

0x0003,

0xf6f9,	// (0x0005c436) popup_image_focus_window_g

0xcea8,	// (0x00059be5) popup_image_focus_window_t1

0xceb6,	// (0x00059bf3) popup_image_focus_window_t2

0xcec6,	// (0x00059c03) popup_image_focus_window_t3

0x0002,

0xf702,	// (0x0005c43f) popup_image_focus_window_t

0xced4,	// (0x00059c11) camera2_autofocus_pane_g1

0xa522,	// (0x0005725f) bg_tb_trans_pane_cp01

0xcee2,	// (0x00059c1f) popup_image_details_window_g1

0xcef5,	// (0x00059c32) popup_image_details_window_g2

0x0002,

0xf714,	// (0x0005c451) popup_image_details_window_g

0xcf1e,	// (0x00059c5b) popup_image_details_window_t1

0xcf30,	// (0x00059c6d) popup_image_details_window_t2

0xcf49,	// (0x00059c86) popup_image_details_window_t3

0xcf5d,	// (0x00059c9a) popup_image_details_window_t4

0xcf78,	// (0x00059cb5) popup_image_details_window_t5

0x0004,

0xf71b,	// (0x0005c458) popup_image_details_window_t

0xa8f7,	// (0x00057634) bg_calc_paper_pane_ParamLimits

0x97d1,	// (0x0005650e) grid_highlight_pane_cp013

0x9b99,	// (0x000568d6) list_calc_pane_ParamLimits

0x9bab,	// (0x000568e8) scroll_pane_cp024

0xa90b,	// (0x00057648) bg_calc_display_pane_ParamLimits

0x161c,	// (0x0004e359) calc_display_pane_t1_ParamLimits

0x1631,	// (0x0004e36e) calc_display_pane_t2_ParamLimits

0x9bb3,	// (0x000568f0) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0005be8a) calc_display_pane_t_ParamLimits

0x16f1,	// (0x0004e42e) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0005bea7) cell_calc_pane_g

0x16fa,	// (0x0004e437) cell_calc_pane_t1

0xa96a,	// (0x000576a7) grid_highlight_pane_cp02_ParamLimits

0xa980,	// (0x000576bd) toolbar_button_pane_cp01_ParamLimits

0xa980,	// (0x000576bd) toolbar_button_pane_cp01

0xb81b,	// (0x00058558) temp_image_control_pane_ParamLimits

0xb81b,	// (0x00058558) temp_image_control_pane

0xa522,	// (0x0005725f) main_mp3_pane

0xcf92,	// (0x00059ccf) temp_image_control_pane_g1_ParamLimits

0xcf92,	// (0x00059ccf) temp_image_control_pane_g1

0xcfa0,	// (0x00059cdd) temp_image_control_pane_g2_ParamLimits

0xcfa0,	// (0x00059cdd) temp_image_control_pane_g2

0xcfb2,	// (0x00059cef) temp_image_control_pane_g3_ParamLimits

0xcfb2,	// (0x00059cef) temp_image_control_pane_g3

0x4f20,	// (0x00051c5d) temp_image_control_pane_g4_ParamLimits

0x4f20,	// (0x00051c5d) temp_image_control_pane_g4

0x0003,

0xf726,	// (0x0005c463) temp_image_control_pane_g_ParamLimits

0xf726,	// (0x0005c463) temp_image_control_pane_g

0xcf92,	// (0x00059ccf) main_mp3_pane_g1

0x4f33,	// (0x00051c70) main_mp3_pane_g2

0x0007,

0xf72f,	// (0x0005c46c) main_mp3_pane_g

0xcff5,	// (0x00059d32) main_mp3_pane_t1

0xaae1,	// (0x0005781e) main_camera_pane_g8_ParamLimits

0xaae1,	// (0x0005781e) main_camera_pane_g8

0x1fc9,	// (0x0004ed06) main_video_pane_g7_ParamLimits

0x1fc9,	// (0x0004ed06) main_video_pane_g7

0x9db2,	// (0x00056aef) main_camera2_pane_t7_ParamLimits

0x9db2,	// (0x00056aef) main_camera2_pane_t7

0xac29,	// (0x00057966) scroll_pane_cp025_ParamLimits

0xac29,	// (0x00057966) scroll_pane_cp025

0xac3d,	// (0x0005797a) scroll_pane_cp026_ParamLimits

0xac3d,	// (0x0005797a) scroll_pane_cp026

0xac4c,	// (0x00057989) wml_content_pane_ParamLimits

0x97d1,	// (0x0005650e) main_touch_calib_pane

0x5007,	// (0x00051d44) main_touch_calib_pane_g1

0x5019,	// (0x00051d56) main_touch_calib_pane_g2

0x502b,	// (0x00051d68) main_touch_calib_pane_g3

0x503d,	// (0x00051d7a) main_touch_calib_pane_g4

0x0003,

0xf74d,	// (0x0005c48a) main_touch_calib_pane_g

0x504f,	// (0x00051d8c) main_touch_calib_pane_t1

0x5069,	// (0x00051da6) main_touch_calib_pane_t2

0x0004,

0xf756,	// (0x0005c493) main_touch_calib_pane_t

0xb3e8,	// (0x00058125) mup_progress_pane_cp02

0xb41d,	// (0x0005815a) navi_pane_g1

0xb4d8,	// (0x00058215) navi_pane_mp_t3

0xa522,	// (0x0005725f) main_mp3_pane_ParamLimits

0x443e,	// (0x0005117b) navi_pane_ParamLimits

0xcf92,	// (0x00059ccf) main_mp3_pane_g1_ParamLimits

0x4f33,	// (0x00051c70) main_mp3_pane_g2_ParamLimits

0x4f41,	// (0x00051c7e) main_mp3_pane_g3_ParamLimits

0x4f41,	// (0x00051c7e) main_mp3_pane_g3

0x4f4f,	// (0x00051c8c) main_mp3_pane_g4_ParamLimits

0x4f4f,	// (0x00051c8c) main_mp3_pane_g4

0xcfc2,	// (0x00059cff) main_mp3_pane_g5_ParamLimits

0xcfc2,	// (0x00059cff) main_mp3_pane_g5

0xcfd0,	// (0x00059d0d) main_mp3_pane_g6_ParamLimits

0xcfd0,	// (0x00059d0d) main_mp3_pane_g6

0xcfdd,	// (0x00059d1a) main_mp3_pane_g7_ParamLimits

0xcfdd,	// (0x00059d1a) main_mp3_pane_g7

0xcfe9,	// (0x00059d26) main_mp3_pane_g8_ParamLimits

0xcfe9,	// (0x00059d26) main_mp3_pane_g8

0xf72f,	// (0x0005c46c) main_mp3_pane_g_ParamLimits

0x4f5b,	// (0x00051c98) main_mp3_pane_t2

0x4f69,	// (0x00051ca6) main_mp3_pane_t3

0xd003,	// (0x00059d40) main_mp3_pane_t4

0xd011,	// (0x00059d4e) main_mp3_pane_t5

0x0005,

0xf740,	// (0x0005c47d) main_mp3_pane_t

0xd01f,	// (0x00059d5c) mup_progress_pane_cp01

0x10c9,	// (0x0004de06) aid_zoom_text_secondary2

0xcdd9,	// (0x00059b16) list_cale_ev2_pane

0xcde1,	// (0x00059b1e) scroll_pane_cp023_ParamLimits

0x50bf,	// (0x00051dfc) field_cale_ev2_pane_ParamLimits

0x50bf,	// (0x00051dfc) field_cale_ev2_pane

0x50df,	// (0x00051e1c) field_cale_ev2_pane_g1_ParamLimits

0x50df,	// (0x00051e1c) field_cale_ev2_pane_g1

0x50eb,	// (0x00051e28) field_cale_ev2_pane_g2_ParamLimits

0x50eb,	// (0x00051e28) field_cale_ev2_pane_g2

0x5103,	// (0x00051e40) field_cale_ev2_pane_g3_ParamLimits

0x5103,	// (0x00051e40) field_cale_ev2_pane_g3

0x0003,

0xf761,	// (0x0005c49e) field_cale_ev2_pane_g_ParamLimits

0xf761,	// (0x0005c49e) field_cale_ev2_pane_g

0x0447,	// (0x0004d184) field_cale_ev2_pane_t1_ParamLimits

0x0447,	// (0x0004d184) field_cale_ev2_pane_t1

0x045e,	// (0x0004d19b) field_cale_ev2_pane_t2_ParamLimits

0x045e,	// (0x0004d19b) field_cale_ev2_pane_t2

0x0001,

0xf76a,	// (0x0005c4a7) field_cale_ev2_pane_t_ParamLimits

0xf76a,	// (0x0005c4a7) field_cale_ev2_pane_t

0x3968,	// (0x000506a5) main_postcard_pane_g5_ParamLimits

0x3968,	// (0x000506a5) main_postcard_pane_g5

0x397e,	// (0x000506bb) main_postcard_pane_g6_ParamLimits

0x397e,	// (0x000506bb) main_postcard_pane_g6

0x1d95,	// (0x0004ead2) camera2_autofocus_pane_cp_ParamLimits

0x1d95,	// (0x0004ead2) camera2_autofocus_pane_cp

0xa522,	// (0x0005725f) main_mup3_pane

0x514b,	// (0x00051e88) main_mup3_pane_g1_ParamLimits

0x514b,	// (0x00051e88) main_mup3_pane_g1

0x516d,	// (0x00051eaa) main_mup3_pane_g2_ParamLimits

0x516d,	// (0x00051eaa) main_mup3_pane_g2

0x51eb,	// (0x00051f28) main_mup3_pane_g3_ParamLimits

0x51eb,	// (0x00051f28) main_mup3_pane_g3

0x5231,	// (0x00051f6e) main_mup3_pane_g4_ParamLimits

0x5231,	// (0x00051f6e) main_mup3_pane_g4

0x5277,	// (0x00051fb4) main_mup3_pane_g5_ParamLimits

0x5277,	// (0x00051fb4) main_mup3_pane_g5

0x52bd,	// (0x00051ffa) main_mup3_pane_g6_ParamLimits

0x52bd,	// (0x00051ffa) main_mup3_pane_g6

0xd047,	// (0x00059d84) main_mup3_pane_g7_ParamLimits

0xd047,	// (0x00059d84) main_mup3_pane_g7

0x0007,

0xf77a,	// (0x0005c4b7) main_mup3_pane_g_ParamLimits

0xf77a,	// (0x0005c4b7) main_mup3_pane_g

0x533b,	// (0x00052078) main_mup3_pane_t1_ParamLimits

0x533b,	// (0x00052078) main_mup3_pane_t1

0x53af,	// (0x000520ec) main_mup3_pane_t2_ParamLimits

0x53af,	// (0x000520ec) main_mup3_pane_t2

0x5483,	// (0x000521c0) main_mup3_pane_t4_ParamLimits

0x5483,	// (0x000521c0) main_mup3_pane_t4

0x54d9,	// (0x00052216) main_mup3_pane_t5_ParamLimits

0x54d9,	// (0x00052216) main_mup3_pane_t5

0x5595,	// (0x000522d2) main_mup3_pane_t6_ParamLimits

0x5595,	// (0x000522d2) main_mup3_pane_t6

0x0005,

0xf78b,	// (0x0005c4c8) main_mup3_pane_t_ParamLimits

0xf78b,	// (0x0005c4c8) main_mup3_pane_t

0x564d,	// (0x0005238a) mup3_progress_pane_ParamLimits

0x564d,	// (0x0005238a) mup3_progress_pane

0x56e3,	// (0x00052420) popup_mup3_control_window_ParamLimits

0x56e3,	// (0x00052420) popup_mup3_control_window

0xd055,	// (0x00059d92) popup_mup3_text_window

0x5715,	// (0x00052452) mup3_progress_pane_t1

0x5734,	// (0x00052471) mup3_progress_pane_t2

0xd05d,	// (0x00059d9a) mup3_progress_pane_t3

0x0002,

0xf798,	// (0x0005c4d5) mup3_progress_pane_t

0xd07a,	// (0x00059db7) mup_progress_pane_cp03

0x97d1,	// (0x0005650e) bg_tb_trans_pane_cp04

0x5753,	// (0x00052490) mup3_volume_pane

0x575b,	// (0x00052498) popup_mup3_control_window_g1

0x5764,	// (0x000524a1) mup3_volume_pane_g1

0x576d,	// (0x000524aa) mup3_volume_pane_g2

0x5776,	// (0x000524b3) mup3_volume_pane_g3

0x0002,

0xf79f,	// (0x0005c4dc) mup3_volume_pane_g

0x97d1,	// (0x0005650e) bg_tb_trans_pane_cp03

0xd08a,	// (0x00059dc7) popup_mup3_text_window_g1

0xd092,	// (0x00059dcf) popup_mup3_text_window_t1

0xa953,	// (0x00057690) list_calc_item_pane_g1_ParamLimits

0xcaa6,	// (0x000597e3) mup_volume_pane_cp_g1

0x5083,	// (0x00051dc0) main_touch_calib_pane_t3

0x5097,	// (0x00051dd4) main_touch_calib_pane_t4

0x50ab,	// (0x00051de8) main_touch_calib_pane_t5

0x97db,	// (0x00056518) aid_cell_size_toolbar2

0x97e3,	// (0x00056520) aid_popup3_width_pane

0x10c1,	// (0x0004ddfe) aid_zoom_text_msg_primary

0x1d74,	// (0x0004eab1) vorec_t7

0xa917,	// (0x00057654) bg_calc_paper_pane_g1_ParamLimits

0xa923,	// (0x00057660) bg_calc_paper_pane_g2_ParamLimits

0xa92f,	// (0x0005766c) bg_calc_paper_pane_g3_ParamLimits

0xa93b,	// (0x00057678) bg_calc_paper_pane_g4_ParamLimits

0xa947,	// (0x00057684) bg_calc_paper_pane_g5_ParamLimits

0x167b,	// (0x0004e3b8) bg_calc_paper_pane_g6_ParamLimits

0x168a,	// (0x0004e3c7) bg_calc_paper_pane_g7_ParamLimits

0x1699,	// (0x0004e3d6) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0005be91) bg_calc_paper_pane_g_ParamLimits

0x16ac,	// (0x0004e3e9) calc_bg_paper_pane_g9_ParamLimits

0x1ee0,	// (0x0004ec1d) image_qvga_pane_ParamLimits

0x1ee0,	// (0x0004ec1d) image_qvga_pane

0xa846,	// (0x00057583) bg_popup_sub_pane_cp04_ParamLimits

0xb752,	// (0x0005848f) popup_mup_playback_window_g1_ParamLimits

0xb75e,	// (0x0005849b) popup_mup_playback_window_t1_ParamLimits

0xb773,	// (0x000584b0) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x0005c21b) popup_mup_playback_window_t_ParamLimits

0x4bc3,	// (0x00051900) main_mup2_pane_g3_ParamLimits

0x4bc3,	// (0x00051900) main_mup2_pane_g3

0x21d9,	// (0x0004ef16) popup_toolbar_window_cp04

0xbb55,	// (0x00058892) popup_call2_audio_second_window_g3_ParamLimits

0xbb55,	// (0x00058892) popup_call2_audio_second_window_g3

0xbf5f,	// (0x00058c9c) popup_call2_audio_first_window_g4_ParamLimits

0xbf5f,	// (0x00058c9c) popup_call2_audio_first_window_g4

0xc5de,	// (0x0005931b) popup_call2_audio_in_window_g4_ParamLimits

0xc5de,	// (0x0005931b) popup_call2_audio_in_window_g4

0x3a95,	// (0x000507d2) aid_area_sk_bg_cut_ParamLimits

0x3a95,	// (0x000507d2) aid_area_sk_bg_cut

0xb788,	// (0x000584c5) aid_area_sk_bg_cut_2_ParamLimits

0xb788,	// (0x000584c5) aid_area_sk_bg_cut_2

0x4ec6,	// (0x00051c03) aid_placing_details_win

0x4ece,	// (0x00051c0b) aid_placing_details_win_2

0xced4,	// (0x00059c11) camera2_autofocus_pane_g1_ParamLimits

0x1267,	// (0x0004dfa4) popup_fixed_preview_cale_window_ParamLimits

0x1267,	// (0x0004dfa4) popup_fixed_preview_cale_window

0xb556,	// (0x00058293) navi_slider_pane_g3

0xb55f,	// (0x0005829c) navi_slider_pane_g4

0xb568,	// (0x000582a5) navi_slider_pane_g5

0xb556,	// (0x00058293) navi_slider_pane_g6

0x9cd3,	// (0x00056a10) navi_slider_pane_g7

0xb689,	// (0x000583c6) mup_scale_pane_g3

0xb692,	// (0x000583cf) mup_scale_pane_g4

0xb69b,	// (0x000583d8) mup_scale_pane_g5

0x37d5,	// (0x00050512) mup_scale_pane_g6

0x37de,	// (0x0005051b) mup_scale_pane_g7

0xb556,	// (0x00058293) cams2_slider_pane_g3

0xcb28,	// (0x00059865) cams2_slider_pane_g4

0x9e20,	// (0x00056b5d) cams2_slider_pane_g5

0xb556,	// (0x00058293) cams2_slider_pane_g6

0x9e28,	// (0x00056b65) cams2_slider_pane_g7

0xcd5f,	// (0x00059a9c) camera2_autofocus_pane_cp_g1

0xc93f,	// (0x0005967c) bg_popup_preview_window_pane_cp02_ParamLimits

0xc93f,	// (0x0005967c) bg_popup_preview_window_pane_cp02

0xd0a0,	// (0x00059ddd) list_fp_cale_pane_ParamLimits

0xd0a0,	// (0x00059ddd) list_fp_cale_pane

0xd0ac,	// (0x00059de9) popup_fixed_preview_cale_window_t1_ParamLimits

0xd0ac,	// (0x00059de9) popup_fixed_preview_cale_window_t1

0x577f,	// (0x000524bc) popup_fixed_preview_cale_window_t2_ParamLimits

0x577f,	// (0x000524bc) popup_fixed_preview_cale_window_t2

0x5794,	// (0x000524d1) popup_fixed_preview_cale_window_t3_ParamLimits

0x5794,	// (0x000524d1) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a6,	// (0x0005c4e3) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a6,	// (0x0005c4e3) popup_fixed_preview_cale_window_t

0x57a9,	// (0x000524e6) list_single_fp_cale_pane_ParamLimits

0x57a9,	// (0x000524e6) list_single_fp_cale_pane

0xd0ca,	// (0x00059e07) list_single_fp_cale_pane_g1_ParamLimits

0xd0ca,	// (0x00059e07) list_single_fp_cale_pane_g1

0xd0d6,	// (0x00059e13) list_single_fp_cale_pane_g2_ParamLimits

0xd0d6,	// (0x00059e13) list_single_fp_cale_pane_g2

0x0002,

0xf7ad,	// (0x0005c4ea) list_single_fp_cale_pane_g_ParamLimits

0xf7ad,	// (0x0005c4ea) list_single_fp_cale_pane_g

0xd0ef,	// (0x00059e2c) list_single_fp_cale_pane_t1_ParamLimits

0xd0ef,	// (0x00059e2c) list_single_fp_cale_pane_t1

0xd101,	// (0x00059e3e) list_single_fp_cale_pane_t2_ParamLimits

0xd101,	// (0x00059e3e) list_single_fp_cale_pane_t2

0x0001,

0xf7b4,	// (0x0005c4f1) list_single_fp_cale_pane_t_ParamLimits

0xf7b4,	// (0x0005c4f1) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x97d1,	// (0x0005650e) main_dialer_pane

0x57be,	// (0x000524fb) aid_cell_size_keypad

0x57c8,	// (0x00052505) dialer_ne_pane

0x57d0,	// (0x0005250d) grid_dialer_command_1_pane

0x57d8,	// (0x00052515) grid_dialer_command_2_pane

0x57e0,	// (0x0005251d) grid_dialer_keypad_pane

0x57f2,	// (0x0005252f) bg_popup_call_pane_cp06_ParamLimits

0x57f2,	// (0x0005252f) bg_popup_call_pane_cp06

0x57fe,	// (0x0005253b) dialer_ne_clear_pane_ParamLimits

0x57fe,	// (0x0005253b) dialer_ne_clear_pane

0xd134,	// (0x00059e71) dialer_ne_pane_g1

0xd13c,	// (0x00059e79) dialer_ne_pane_t1_ParamLimits

0xd13c,	// (0x00059e79) dialer_ne_pane_t1

0x580a,	// (0x00052547) dialer_ne_pane_t2_ParamLimits

0x580a,	// (0x00052547) dialer_ne_pane_t2

0x5834,	// (0x00052571) dialer_ne_pane_t3_ParamLimits

0x5834,	// (0x00052571) dialer_ne_pane_t3

0x0002,

0xf7b9,	// (0x0005c4f6) dialer_ne_pane_t_ParamLimits

0xf7b9,	// (0x0005c4f6) dialer_ne_pane_t

0x5864,	// (0x000525a1) dialer_ne_pane_t3_copy1_ParamLimits

0x5864,	// (0x000525a1) dialer_ne_pane_t3_copy1

0x5893,	// (0x000525d0) cell_dialer_keypad_pane_ParamLimits

0x5893,	// (0x000525d0) cell_dialer_keypad_pane

0x58aa,	// (0x000525e7) cell_dialer_command_1_pane_ParamLimits

0x58aa,	// (0x000525e7) cell_dialer_command_1_pane

0x58c0,	// (0x000525fd) cell_dialer_command_2_pane_ParamLimits

0x58c0,	// (0x000525fd) cell_dialer_command_2_pane

0xd14e,	// (0x00059e8b) bg_button_pane_cp02_ParamLimits

0xd14e,	// (0x00059e8b) bg_button_pane_cp02

0x58cf,	// (0x0005260c) cell_dialer_keypad_pane_g1_ParamLimits

0x58cf,	// (0x0005260c) cell_dialer_keypad_pane_g1

0xd14e,	// (0x00059e8b) bg_button_pane_cp03_ParamLimits

0xd14e,	// (0x00059e8b) bg_button_pane_cp03

0x58e3,	// (0x00052620) cell_dialer_command_1_pane_g1_ParamLimits

0x58e3,	// (0x00052620) cell_dialer_command_1_pane_g1

0xd15a,	// (0x00059e97) bg_button_pane_cp04

0x58f7,	// (0x00052634) cell_dialer_command_2_pane_g1

0xaad9,	// (0x00057816) bg_button_pane_cp06

0xd162,	// (0x00059e9f) dialer_ne_clear_pane_g1

0xb429,	// (0x00058166) navi_pane_g2

0xb457,	// (0x00058194) navi_pane_g3

0x0002,

0xf3e1,	// (0x0005c11e) navi_pane_g

0xb4e6,	// (0x00058223) navi_pane_mv_g2

0xb50d,	// (0x0005824a) navi_pane_mv_g5

0x3399,	// (0x000500d6) navi_pane_mv_t1

0xa90b,	// (0x00057648) main_clock2_pane

0xa522,	// (0x0005725f) main_clock2_list_pane_ParamLimits

0xa522,	// (0x0005725f) main_clock2_list_pane

0x5968,	// (0x000526a5) main_clock2_pane_t1_ParamLimits

0x5968,	// (0x000526a5) main_clock2_pane_t1

0x59a3,	// (0x000526e0) main_clock2_pane_t2_ParamLimits

0x59a3,	// (0x000526e0) main_clock2_pane_t2

0x0004,

0xf7c5,	// (0x0005c502) main_clock2_pane_t_ParamLimits

0xf7c5,	// (0x0005c502) main_clock2_pane_t

0x5a43,	// (0x00052780) popup_clock_analogue_window_cp03_ParamLimits

0x5a43,	// (0x00052780) popup_clock_analogue_window_cp03

0x5a68,	// (0x000527a5) popup_clock_digital_window_cp02_ParamLimits

0x5a68,	// (0x000527a5) popup_clock_digital_window_cp02

0x5ae1,	// (0x0005281e) main_clock2_list_single_pane_ParamLimits

0x5ae1,	// (0x0005281e) main_clock2_list_single_pane

0xaad9,	// (0x00057816) list_highlight_pane_cp05

0xd1a0,	// (0x00059edd) main_clock2_list_single_pane_t1

0x21d9,	// (0x0004ef16) popup_toolbar_window_cp04_ParamLimits

0x4ef0,	// (0x00051c2d) camera2_autofocus_pane_g2_ParamLimits

0x4ef0,	// (0x00051c2d) camera2_autofocus_pane_g2

0x4efc,	// (0x00051c39) camera2_autofocus_pane_g3_ParamLimits

0x4efc,	// (0x00051c39) camera2_autofocus_pane_g3

0x4f08,	// (0x00051c45) camera2_autofocus_pane_g4_ParamLimits

0x4f08,	// (0x00051c45) camera2_autofocus_pane_g4

0x4f14,	// (0x00051c51) camera2_autofocus_pane_g5_ParamLimits

0x4f14,	// (0x00051c51) camera2_autofocus_pane_g5

0x0004,

0xf709,	// (0x0005c446) camera2_autofocus_pane_g_ParamLimits

0xf709,	// (0x0005c446) camera2_autofocus_pane_g

0xd027,	// (0x00059d64) camera2_autofocus_pane_cp_g2

0xd02f,	// (0x00059d6c) camera2_autofocus_pane_cp_g3

0xd037,	// (0x00059d74) camera2_autofocus_pane_cp_g4

0xd03f,	// (0x00059d7c) camera2_autofocus_pane_cp_g5

0x0004,

0xf76f,	// (0x0005c4ac) camera2_autofocus_pane_cp_g

0x57ea,	// (0x00052527) popup_dialer_spcha_window

0x97d1,	// (0x0005650e) bg_popup_sub_pane_cp07

0xd1ae,	// (0x00059eeb) list_spcha_pane

0xd1b6,	// (0x00059ef3) list_single_spcha_pane_ParamLimits

0xd1b6,	// (0x00059ef3) list_single_spcha_pane

0x97d1,	// (0x0005650e) list_highlight_pane_cp06

0xd1c7,	// (0x00059f04) list_single_spcha_pane_t1

0xc388,	// (0x000590c5) popup_call2_audio_out_window_g4_ParamLimits

0xc388,	// (0x000590c5) popup_call2_audio_out_window_g4

0x97d1,	// (0x0005650e) main_imed2_pane

0x9d38,	// (0x00056a75) popup_imed_adjust2_window

0x42d1,	// (0x0005100e) popup_imed_trans_window_ParamLimits

0x42d1,	// (0x0005100e) popup_imed_trans_window

0xcb91,	// (0x000598ce) popup_blid_sat_info2_window_t1

0xcb9f,	// (0x000598dc) popup_blid_sat_info2_window_t2

0x000a,

0xf69e,	// (0x0005c3db) popup_blid_sat_info2_window_t

0x5b92,	// (0x000528cf) aid_size_cell_colour_35

0x5bb2,	// (0x000528ef) aid_size_cell_colour_112

0x5bd2,	// (0x0005290f) aid_size_cell_effect

0xc94b,	// (0x00059688) bg_tb_trans_pane_cp02

0xaf7a,	// (0x00057cb7) heading_imed_pane

0x5bf2,	// (0x0005292f) listscroll_imed_pane

0xd1d5,	// (0x00059f12) heading_imed_pane_g1

0xd1dd,	// (0x00059f1a) heading_imed_pane_t1

0xd1eb,	// (0x00059f28) grid_imed_colour_35_pane_ParamLimits

0xd1eb,	// (0x00059f28) grid_imed_colour_35_pane

0x5bfe,	// (0x0005293b) grid_imed_effect_pane

0xd202,	// (0x00059f3f) list_imed_aspect_pane

0x5c14,	// (0x00052951) scroll_pane_cp027_ParamLimits

0x5c14,	// (0x00052951) scroll_pane_cp027

0x5c25,	// (0x00052962) cell_imed_effect_pane_ParamLimits

0x5c25,	// (0x00052962) cell_imed_effect_pane

0xd20a,	// (0x00059f47) cell_imed_colour_pane_ParamLimits

0xd20a,	// (0x00059f47) cell_imed_colour_pane

0xd24c,	// (0x00059f89) cell_imed_colour_pane_g1_ParamLimits

0xd24c,	// (0x00059f89) cell_imed_colour_pane_g1

0xd25d,	// (0x00059f9a) hgihlgiht_grid_pane_cp016_ParamLimits

0xd25d,	// (0x00059f9a) hgihlgiht_grid_pane_cp016

0x5c4c,	// (0x00052989) cell_imed_effect_pane_g1

0x5c54,	// (0x00052991) grid_highlight_pane_cp017

0xd26e,	// (0x00059fab) list_imed_single_pane_ParamLimits

0xd26e,	// (0x00059fab) list_imed_single_pane

0x97d1,	// (0x0005650e) list_highlight_pane_cp07

0xd283,	// (0x00059fc0) list_imed_aspect_pane_comp1_t1

0xc94b,	// (0x00059688) bg_tb_trans_pane_cp05

0xd2a5,	// (0x00059fe2) popup_imed_adjust2_window_g1

0xd2cc,	// (0x0005a009) popup_imed_adjust2_window_t1

0xd2e4,	// (0x0005a021) slider_imed_adjust_pane

0xd2f8,	// (0x0005a035) slider_imed_adjust_pane_g1

0xd308,	// (0x0005a045) slider_imed_adjust_pane_g2

0xd318,	// (0x0005a055) slider_imed_adjust_pane_g3

0xd329,	// (0x0005a066) slider_imed_adjust_pane_g4

0x0003,

0xf7e2,	// (0x0005c51f) slider_imed_adjust_pane_g

0x5c5d,	// (0x0005299a) aid_size_cell_clipart2

0x5c69,	// (0x000529a6) grid_imed_clipart_pane

0xd33a,	// (0x0005a077) scroll_pane_cp031

0x5c73,	// (0x000529b0) cell_imed_clipart_pane_ParamLimits

0x5c73,	// (0x000529b0) cell_imed_clipart_pane

0x5c95,	// (0x000529d2) cell_imed_clipart_pane_g1

0x97d1,	// (0x0005650e) grid_highlight_pane_cp014

0x5944,	// (0x00052681) main_clock2_pane_g1_ParamLimits

0x5944,	// (0x00052681) main_clock2_pane_g1

0x5a88,	// (0x000527c5) aid_call2_pane_cp10

0x5a9a,	// (0x000527d7) aid_call_pane_cp10

0xb38a,	// (0x000580c7) popup_clock_analogue_window_cp10_g1

0xb38a,	// (0x000580c7) popup_clock_analogue_window_cp10_g2

0x5aac,	// (0x000527e9) popup_clock_analogue_window_cp10_g3

0x5aac,	// (0x000527e9) popup_clock_analogue_window_cp10_g4

0xb38a,	// (0x000580c7) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d0,	// (0x0005c50d) popup_clock_analogue_window_cp10_g

0x5ac2,	// (0x000527ff) popup_clock_analogue_window_cp10_t1

0x5af3,	// (0x00052830) clock_digital_number_pane_cp10_ParamLimits

0x5af3,	// (0x00052830) clock_digital_number_pane_cp10

0x5b0b,	// (0x00052848) clock_digital_number_pane_cp11_ParamLimits

0x5b0b,	// (0x00052848) clock_digital_number_pane_cp11

0x5b23,	// (0x00052860) clock_digital_number_pane_cp12_ParamLimits

0x5b23,	// (0x00052860) clock_digital_number_pane_cp12

0x5b3d,	// (0x0005287a) clock_digital_number_pane_cp13_ParamLimits

0x5b3d,	// (0x0005287a) clock_digital_number_pane_cp13

0x5b57,	// (0x00052894) clock_digital_separator_pane_cp10_ParamLimits

0x5b57,	// (0x00052894) clock_digital_separator_pane_cp10

0x5b71,	// (0x000528ae) popup_clock_digital_window_cp02_t1_ParamLimits

0x5b71,	// (0x000528ae) popup_clock_digital_window_cp02_t1

0xa83e,	// (0x0005757b) clock_digital_number_pane_cp10_g1

0xa83e,	// (0x0005757b) clock_digital_number_pane_cp10_g2

0x0001,

0xf7eb,	// (0x0005c528) clock_digital_number_pane_cp10_g

0xa83e,	// (0x0005757b) clock_digital_separator_pane_cp10_g1

0xa83e,	// (0x0005757b) clock_digital_separator_pane_g2_cp10

0xb515,	// (0x00058252) navi_pane_vded_g4

0xb51e,	// (0x0005825b) navi_pane_vded_g5

0xb527,	// (0x00058264) navi_pane_vded_t1

0x97d1,	// (0x0005650e) main_vded_pane

0x5c9e,	// (0x000529db) main_vded_pane_g1

0x5ca8,	// (0x000529e5) main_vded_pane_g2

0x5cb2,	// (0x000529ef) main_vded_pane_g3

0x0002,

0xf7f0,	// (0x0005c52d) main_vded_pane_g

0x5cbc,	// (0x000529f9) main_vded_pane_t1

0x5cca,	// (0x00052a07) main_vded_pane_t2

0x0001,

0xf7f7,	// (0x0005c534) main_vded_pane_t

0x5cd8,	// (0x00052a15) vded_slider_pane

0x5ce0,	// (0x00052a1d) vded_video_pane

0xd342,	// (0x0005a07f) vded_video_pane_g1

0x5ce8,	// (0x00052a25) vded_video_pane_g2

0xcd5f,	// (0x00059a9c) vded_video_pane_g3

0x0002,

0xf7fc,	// (0x0005c539) vded_video_pane_g

0xd34c,	// (0x0005a089) vded_slider_pane_g1

0xcaa6,	// (0x000597e3) vded_slider_pane_g2

0xd355,	// (0x0005a092) vded_slider_pane_g3

0xd35e,	// (0x0005a09b) vded_slider_pane_g4

0xd367,	// (0x0005a0a4) vded_slider_pane_g5

0x0004,

0xf803,	// (0x0005c540) vded_slider_pane_g

0x56cb,	// (0x00052408) mup3_rocker_pane_ParamLimits

0x56cb,	// (0x00052408) mup3_rocker_pane

0x5cf1,	// (0x00052a2e) mup3_control_keys_pane_g1

0x5cf9,	// (0x00052a36) mup3_control_keys_pane_g2

0x5d01,	// (0x00052a3e) mup3_control_keys_pane_g3

0x5d09,	// (0x00052a46) mup3_control_keys_pane_g4

0x0003,

0xf80e,	// (0x0005c54b) mup3_control_keys_pane_g

0x129e,	// (0x0004dfdb) popup_toolbar2_fixed_window_cp01_ParamLimits

0x129e,	// (0x0004dfdb) popup_toolbar2_fixed_window_cp01

0x56ff,	// (0x0005243c) popup_toolbar2_fixed_window_cp02_ParamLimits

0x56ff,	// (0x0005243c) popup_toolbar2_fixed_window_cp02

0xbcc7,	// (0x00058a04) popup_call2_audio_second_window_t4_ParamLimits

0xbcc7,	// (0x00058a04) popup_call2_audio_second_window_t4

0xc1f5,	// (0x00058f32) popup_call2_audio_first_window_t6_ParamLimits

0xc1f5,	// (0x00058f32) popup_call2_audio_first_window_t6

0xc48b,	// (0x000591c8) popup_call2_audio_out_window_t6_ParamLimits

0xc48b,	// (0x000591c8) popup_call2_audio_out_window_t6

0x97d1,	// (0x0005650e) main_vitu_pane

0x5d19,	// (0x00052a56) aid_size_cell_itu_ParamLimits

0x5d19,	// (0x00052a56) aid_size_cell_itu

0xa522,	// (0x0005725f) bg_popup_window_pane_cp08_ParamLimits

0xa522,	// (0x0005725f) bg_popup_window_pane_cp08

0x5d2f,	// (0x00052a6c) field_vitu_entry_pane_ParamLimits

0x5d2f,	// (0x00052a6c) field_vitu_entry_pane

0x5d46,	// (0x00052a83) grid_vitu_function_pane_ParamLimits

0x5d46,	// (0x00052a83) grid_vitu_function_pane

0x5d61,	// (0x00052a9e) grid_vitu_itu_pane_ParamLimits

0x5d61,	// (0x00052a9e) grid_vitu_itu_pane

0x5d7f,	// (0x00052abc) cell_vitu_itu_pane_ParamLimits

0x5d7f,	// (0x00052abc) cell_vitu_itu_pane

0x5da1,	// (0x00052ade) cell_vitu_function_pane_ParamLimits

0x5da1,	// (0x00052ade) cell_vitu_function_pane

0xa522,	// (0x0005725f) bg_popup_sub_pane_cp08_ParamLimits

0xa522,	// (0x0005725f) bg_popup_sub_pane_cp08

0x5dba,	// (0x00052af7) field_vitu_entry_pane_t1_ParamLimits

0x5dba,	// (0x00052af7) field_vitu_entry_pane_t1

0xd388,	// (0x0005a0c5) field_vitu_entry_pane_t2_ParamLimits

0xd388,	// (0x0005a0c5) field_vitu_entry_pane_t2

0x0001,

0xf81c,	// (0x0005c559) field_vitu_entry_pane_t_ParamLimits

0xf81c,	// (0x0005c559) field_vitu_entry_pane_t

0xd3a5,	// (0x0005a0e2) bg_button_pane_cp05_ParamLimits

0xd3a5,	// (0x0005a0e2) bg_button_pane_cp05

0x5dd8,	// (0x00052b15) cell_vitu_itu_pane_g1

0x5df0,	// (0x00052b2d) cell_vitu_itu_pane_t1_ParamLimits

0x5df0,	// (0x00052b2d) cell_vitu_itu_pane_t1

0x5e02,	// (0x00052b3f) cell_vitu_itu_pane_t2_ParamLimits

0x5e02,	// (0x00052b3f) cell_vitu_itu_pane_t2

0x0002,

0xf821,	// (0x0005c55e) cell_vitu_itu_pane_t_ParamLimits

0xf821,	// (0x0005c55e) cell_vitu_itu_pane_t

0xd3b3,	// (0x0005a0f0) bg_button_pane_cp07

0x5e37,	// (0x00052b74) cell_vitu_function_pane_g1

0x9b91,	// (0x000568ce) main_calc_pane_g1

0x10b5,	// (0x0004ddf2) aid_visual_content_pane

0x97d1,	// (0x0005650e) main_vradio_pane

0x5e40,	// (0x00052b7d) main_vradio_pane_g1_ParamLimits

0x5e40,	// (0x00052b7d) main_vradio_pane_g1

0xd3bd,	// (0x0005a0fa) main_vradio_pane_g2_ParamLimits

0xd3bd,	// (0x0005a0fa) main_vradio_pane_g2

0x0001,

0xf828,	// (0x0005c565) main_vradio_pane_g_ParamLimits

0xf828,	// (0x0005c565) main_vradio_pane_g

0x5e59,	// (0x00052b96) main_vradio_pane_t1_ParamLimits

0x5e59,	// (0x00052b96) main_vradio_pane_t1

0x5e6e,	// (0x00052bab) main_vradio_pane_t2_ParamLimits

0x5e6e,	// (0x00052bab) main_vradio_pane_t2

0xd3ca,	// (0x0005a107) main_vradio_pane_t3_ParamLimits

0xd3ca,	// (0x0005a107) main_vradio_pane_t3

0x0002,

0xf82d,	// (0x0005c56a) main_vradio_pane_t_ParamLimits

0xf82d,	// (0x0005c56a) main_vradio_pane_t

0x5e83,	// (0x00052bc0) vradio_rocker_control_pane_ParamLimits

0x5e83,	// (0x00052bc0) vradio_rocker_control_pane

0x5e95,	// (0x00052bd2) vradio_station_info_pane_ParamLimits

0x5e95,	// (0x00052bd2) vradio_station_info_pane

0xd3de,	// (0x0005a11b) vradio_frequency_info_pane_ParamLimits

0xd3de,	// (0x0005a11b) vradio_frequency_info_pane

0xcd5f,	// (0x00059a9c) vradio_station_info_pane_g1

0xd3ed,	// (0x0005a12a) vradio_station_info_pane_t1_ParamLimits

0xd3ed,	// (0x0005a12a) vradio_station_info_pane_t1

0xd40f,	// (0x0005a14c) vradio_station_info_pane_t2_ParamLimits

0xd40f,	// (0x0005a14c) vradio_station_info_pane_t2

0x0001,

0xf834,	// (0x0005c571) vradio_station_info_pane_t_ParamLimits

0xf834,	// (0x0005c571) vradio_station_info_pane_t

0xd421,	// (0x0005a15e) vradio_tuning_pane

0xd429,	// (0x0005a166) vradio_rocker_control_pane_g1

0xd431,	// (0x0005a16e) vradio_rocker_control_pane_g2

0xd439,	// (0x0005a176) vradio_rocker_control_pane_g3

0xd441,	// (0x0005a17e) vradio_rocker_control_pane_g4

0xd449,	// (0x0005a186) vradio_rocker_control_pane_g5

0x0004,

0xf839,	// (0x0005c576) vradio_rocker_control_pane_g

0x5ea7,	// (0x00052be4) vradio_frequency_info_pane_g1

0xd451,	// (0x0005a18e) vradio_frequency_info_pane_t1_ParamLimits

0xd451,	// (0x0005a18e) vradio_frequency_info_pane_t1

0x5eb1,	// (0x00052bee) vradio_tuning_pane_g1

0x5ebc,	// (0x00052bf9) vradio_tuning_pane_t1

0x97f7,	// (0x00056534) area_side_right_pane_ParamLimits

0x97f7,	// (0x00056534) area_side_right_pane

0xc906,	// (0x00059643) status_small_pane_g1

0xc90e,	// (0x0005964b) status_small_pane_g2

0xc917,	// (0x00059654) status_small_pane_g3

0xc920,	// (0x0005965d) status_small_pane_g4

0x0003,

0xf5f4,	// (0x0005c331) status_small_pane_g

0xc929,	// (0x00059666) status_small_pane_t1

0x97d1,	// (0x0005650e) main_video3_pane

0xd465,	// (0x0005a1a2) cams_zoom_vslider_pane

0xd46d,	// (0x0005a1aa) image3_wide_pane_ParamLimits

0xd46d,	// (0x0005a1aa) image3_wide_pane

0xd487,	// (0x0005a1c4) image3_wide_small_pane

0xd493,	// (0x0005a1d0) main_video3_pane_g1_ParamLimits

0xd493,	// (0x0005a1d0) main_video3_pane_g1

0xd4af,	// (0x0005a1ec) main_video3_pane_g2_ParamLimits

0xd4af,	// (0x0005a1ec) main_video3_pane_g2

0x0001,

0xf844,	// (0x0005c581) main_video3_pane_g_ParamLimits

0xf844,	// (0x0005c581) main_video3_pane_g

0xd4cb,	// (0x0005a208) main_video3_pane_t1_ParamLimits

0xd4cb,	// (0x0005a208) main_video3_pane_t1

0xd4f6,	// (0x0005a233) main_video3_pane_t2_ParamLimits

0xd4f6,	// (0x0005a233) main_video3_pane_t2

0xd521,	// (0x0005a25e) main_video3_pane_t3_ParamLimits

0xd521,	// (0x0005a25e) main_video3_pane_t3

0x0002,

0xf849,	// (0x0005c586) main_video3_pane_t_ParamLimits

0xf849,	// (0x0005c586) main_video3_pane_t

0xd54e,	// (0x0005a28b) cams_zoom_vslider_pane_g1

0xd557,	// (0x0005a294) cams_zoom_vslider_pane_g2

0x0001,

0xf850,	// (0x0005c58d) cams_zoom_vslider_pane_g

0xd55f,	// (0x0005a29c) small_slider_vertical_pane

0xcd5f,	// (0x00059a9c) small_slider_vertical_pane_g1

0xcd5f,	// (0x00059a9c) small_slider_vertical_pane_g2

0xd567,	// (0x0005a2a4) small_slider_vertical_pane_g3

0x0002,

0xf855,	// (0x0005c592) small_slider_vertical_pane_g

0x97d1,	// (0x0005650e) main_hwr_training_pane

0xd570,	// (0x0005a2ad) hwr_training_instruct_pane_ParamLimits

0xd570,	// (0x0005a2ad) hwr_training_instruct_pane

0x5ecb,	// (0x00052c08) hwr_training_navi_pane_ParamLimits

0x5ecb,	// (0x00052c08) hwr_training_navi_pane

0x5eea,	// (0x00052c27) hwr_training_write_pane_ParamLimits

0x5eea,	// (0x00052c27) hwr_training_write_pane

0x97d1,	// (0x0005650e) bg_frame_shadow_pane

0xd5a7,	// (0x0005a2e4) hwr_training_write_pane_g1

0xd5af,	// (0x0005a2ec) hwr_training_write_pane_g2

0xd5b7,	// (0x0005a2f4) hwr_training_write_pane_g3

0xd5bf,	// (0x0005a2fc) hwr_training_write_pane_g4

0xd5c7,	// (0x0005a304) hwr_training_write_pane_g5

0xd5cf,	// (0x0005a30c) hwr_training_write_pane_g6

0xd5d7,	// (0x0005a314) hwr_training_write_pane_g7

0x0006,

0xf85c,	// (0x0005c599) hwr_training_write_pane_g

0x9e31,	// (0x00056b6e) hwr_training_navi_pane_g1_ParamLimits

0x9e31,	// (0x00056b6e) hwr_training_navi_pane_g1

0x9e43,	// (0x00056b80) hwr_training_navi_pane_g2_ParamLimits

0x9e43,	// (0x00056b80) hwr_training_navi_pane_g2

0x9e55,	// (0x00056b92) hwr_training_navi_pane_g3_ParamLimits

0x9e55,	// (0x00056b92) hwr_training_navi_pane_g3

0x9e65,	// (0x00056ba2) hwr_training_navi_pane_g4_ParamLimits

0x9e65,	// (0x00056ba2) hwr_training_navi_pane_g4

0x0004,

0xf86b,	// (0x0005c5a8) hwr_training_navi_pane_g_ParamLimits

0xf86b,	// (0x0005c5a8) hwr_training_navi_pane_g

0x9e72,	// (0x00056baf) hwr_training_navi_pane_t1

0x5f32,	// (0x00052c6f) list_single_hwr_training_instruct_pane_ParamLimits

0x5f32,	// (0x00052c6f) list_single_hwr_training_instruct_pane

0xd5df,	// (0x0005a31c) list_single_hwr_training_instruct_pane_t1

0xcc9f,	// (0x000599dc) bg_frame_shadow_pane_g1

0xd5ee,	// (0x0005a32b) bg_frame_shadow_pane_g2

0xd5f6,	// (0x0005a333) bg_frame_shadow_pane_g3

0xd5fe,	// (0x0005a33b) bg_frame_shadow_pane_g4

0xd606,	// (0x0005a343) bg_frame_shadow_pane_g5

0xd60e,	// (0x0005a34b) bg_frame_shadow_pane_g6

0xd616,	// (0x0005a353) bg_frame_shadow_pane_g7

0xa9cd,	// (0x0005770a) bg_frame_shadow_pane_g8

0x0007,

0xf876,	// (0x0005c5b3) bg_frame_shadow_pane_g

0x97d1,	// (0x0005650e) main_video_tele_dialer_pane

0x5f47,	// (0x00052c84) aid_size_cell_video_keypad_ParamLimits

0x5f47,	// (0x00052c84) aid_size_cell_video_keypad

0x5f61,	// (0x00052c9e) grid_video_dialer_keypad_pane_ParamLimits

0x5f61,	// (0x00052c9e) grid_video_dialer_keypad_pane

0x5fad,	// (0x00052cea) video_down_pane_cp_ParamLimits

0x5fad,	// (0x00052cea) video_down_pane_cp

0x5fdf,	// (0x00052d1c) cell_video_dialer_keypad_pane_ParamLimits

0x5fdf,	// (0x00052d1c) cell_video_dialer_keypad_pane

0xd61e,	// (0x0005a35b) bg_button_pane_cp08_ParamLimits

0xd61e,	// (0x0005a35b) bg_button_pane_cp08

0x6001,	// (0x00052d3e) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6001,	// (0x00052d3e) cell_video_dialer_keypad_pane_g1

0x56b5,	// (0x000523f2) mup3_rocker2_pane_ParamLimits

0x56b5,	// (0x000523f2) mup3_rocker2_pane

0xcd5f,	// (0x00059a9c) mup3_rocker2_pane_g1

0x41b2,	// (0x00050eef) main_dialer2_pane

0x97d1,	// (0x0005650e) main_mp4_pane

0x9e9e,	// (0x00056bdb) main_mp4_pane_g1_ParamLimits

0x9e9e,	// (0x00056bdb) main_mp4_pane_g1

0x9e9e,	// (0x00056bdb) main_mp4_pane_g2_ParamLimits

0x9e9e,	// (0x00056bdb) main_mp4_pane_g2

0x6038,	// (0x00052d75) main_mp4_pane_g3_ParamLimits

0x6038,	// (0x00052d75) main_mp4_pane_g3

0x9eac,	// (0x00056be9) main_mp4_pane_g4_ParamLimits

0x9eac,	// (0x00056be9) main_mp4_pane_g4

0x9eda,	// (0x00056c17) main_mp4_pane_g5_ParamLimits

0x9eda,	// (0x00056c17) main_mp4_pane_g5

0x0007,

0xf896,	// (0x0005c5d3) main_mp4_pane_g_ParamLimits

0xf896,	// (0x0005c5d3) main_mp4_pane_g

0x9f4e,	// (0x00056c8b) main_mp4_pane_t1_ParamLimits

0x9f4e,	// (0x00056c8b) main_mp4_pane_t1

0x9faa,	// (0x00056ce7) main_mp4_pane_t2_ParamLimits

0x9faa,	// (0x00056ce7) main_mp4_pane_t2

0xd62a,	// (0x0005a367) main_mp4_pane_t3_ParamLimits

0xd62a,	// (0x0005a367) main_mp4_pane_t3

0x9ffc,	// (0x00056d39) main_mp4_pane_t4_ParamLimits

0x9ffc,	// (0x00056d39) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0005c5e4) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0005c5e4) main_mp4_pane_t

0xa040,	// (0x00056d7d) mp4_progress_pane_ParamLimits

0xa040,	// (0x00056d7d) mp4_progress_pane

0xa08a,	// (0x00056dc7) mp4_rocker_pane_ParamLimits

0xa08a,	// (0x00056dc7) mp4_rocker_pane

0xd658,	// (0x0005a395) mp4_progress_pane_t1

0xd671,	// (0x0005a3ae) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0005c5ed) mp4_progress_pane_t

0xd68a,	// (0x0005a3c7) mup_progress_pane_cp04

0xcd5f,	// (0x00059a9c) mp4_rocker_pane_g1

0x6074,	// (0x00052db1) aid_cell_size_keypad2_ParamLimits

0x6074,	// (0x00052db1) aid_cell_size_keypad2

0x608a,	// (0x00052dc7) dialer2_ne_pane_ParamLimits

0x608a,	// (0x00052dc7) dialer2_ne_pane

0x60a4,	// (0x00052de1) grid_dialer2_keypad_pane_ParamLimits

0x60a4,	// (0x00052de1) grid_dialer2_keypad_pane

0xcb38,	// (0x00059875) bg_popup_call_pane_cp07_ParamLimits

0xcb38,	// (0x00059875) bg_popup_call_pane_cp07

0x60c0,	// (0x00052dfd) dialer2_ne_pane_t1_ParamLimits

0x60c0,	// (0x00052dfd) dialer2_ne_pane_t1

0x60fb,	// (0x00052e38) cell_dialer2_keypad_pane_ParamLimits

0x60fb,	// (0x00052e38) cell_dialer2_keypad_pane

0xd6af,	// (0x0005a3ec) bg_button_pane_pane_cp04_ParamLimits

0xd6af,	// (0x0005a3ec) bg_button_pane_pane_cp04

0x611d,	// (0x00052e5a) cell_dialer2_keypad_pane_g1_ParamLimits

0x611d,	// (0x00052e5a) cell_dialer2_keypad_pane_g1

0x20ad,	// (0x0004edea) aid_placing_vt_set_content_ParamLimits

0x20ad,	// (0x0004edea) aid_placing_vt_set_content

0x20d5,	// (0x0004ee12) aid_placing_vt_set_title_ParamLimits

0x20d5,	// (0x0004ee12) aid_placing_vt_set_title

0x97d1,	// (0x0005650e) main_image3_pane

0x61e3,	// (0x00052f20) area_side_right_pane_cp01_ParamLimits

0x61e3,	// (0x00052f20) area_side_right_pane_cp01

0x9e9e,	// (0x00056bdb) main_image3_pane_g1_ParamLimits

0x9e9e,	// (0x00056bdb) main_image3_pane_g1

0x61fa,	// (0x00052f37) main_image3_pane_g2_ParamLimits

0x61fa,	// (0x00052f37) main_image3_pane_g2

0x6222,	// (0x00052f5f) main_image3_pane_g3_ParamLimits

0x6222,	// (0x00052f5f) main_image3_pane_g3

0x624c,	// (0x00052f89) main_image3_pane_g4_ParamLimits

0x624c,	// (0x00052f89) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0005c5fc) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0005c5fc) main_image3_pane_g

0x6276,	// (0x00052fb3) main_image3_pane_t1_ParamLimits

0x6276,	// (0x00052fb3) main_image3_pane_t1

0x62ce,	// (0x0005300b) main_image3_pane_t2_ParamLimits

0x62ce,	// (0x0005300b) main_image3_pane_t2

0x6320,	// (0x0005305d) main_image3_pane_t3_ParamLimits

0x6320,	// (0x0005305d) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0005c605) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0005c605) main_image3_pane_t

0xa522,	// (0x0005725f) grid_sctrl_middle_pane_cp01_ParamLimits

0xa522,	// (0x0005725f) grid_sctrl_middle_pane_cp01

0x63a8,	// (0x000530e5) cell_sctrl_middle_pane_cp01_ParamLimits

0x63a8,	// (0x000530e5) cell_sctrl_middle_pane_cp01

0x63c5,	// (0x00053102) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x63c5,	// (0x00053102) cell_sctrl_middle_pane_cp01_g1

0x97d1,	// (0x0005650e) main_call4_pane

0x63db,	// (0x00053118) aid_size_button_call4_ParamLimits

0x63db,	// (0x00053118) aid_size_button_call4

0x640e,	// (0x0005314b) call4_windows_pane_ParamLimits

0x640e,	// (0x0005314b) call4_windows_pane

0x642d,	// (0x0005316a) grid_call4_button_pane_ParamLimits

0x642d,	// (0x0005316a) grid_call4_button_pane

0x6460,	// (0x0005319d) call4_windows_conf_pane

0x6477,	// (0x000531b4) popup_call4_audio_first_window_ParamLimits

0x6477,	// (0x000531b4) popup_call4_audio_first_window

0x64c7,	// (0x00053204) popup_call4_audio_second_window_ParamLimits

0x64c7,	// (0x00053204) popup_call4_audio_second_window

0x64de,	// (0x0005321b) popup_call4_audio_wait_window_ParamLimits

0x64de,	// (0x0005321b) popup_call4_audio_wait_window

0x64ec,	// (0x00053229) cell_call4_button_pane_ParamLimits

0x64ec,	// (0x00053229) cell_call4_button_pane

0x6511,	// (0x0005324e) bg_button_pane_cp09_ParamLimits

0x6511,	// (0x0005324e) bg_button_pane_cp09

0x651d,	// (0x0005325a) cell_call4_button_pane_g1_ParamLimits

0x651d,	// (0x0005325a) cell_call4_button_pane_g1

0x6543,	// (0x00053280) cell_call4_button_pane_t1_ParamLimits

0x6543,	// (0x00053280) cell_call4_button_pane_t1

0xd6c3,	// (0x0005a400) popup_call4_audio_conf_window_ParamLimits

0xd6c3,	// (0x0005a400) popup_call4_audio_conf_window

0x5715,	// (0x00052452) mup3_progress_pane_t1_ParamLimits

0x5734,	// (0x00052471) mup3_progress_pane_t2_ParamLimits

0xd05d,	// (0x00059d9a) mup3_progress_pane_t3_ParamLimits

0xf798,	// (0x0005c4d5) mup3_progress_pane_t_ParamLimits

0xd07a,	// (0x00059db7) mup_progress_pane_cp03_ParamLimits

0x5d11,	// (0x00052a4e) mup3_control_keys_pane_g4_copy1

0xa06e,	// (0x00056dab) mp4_rocker2_pane_ParamLimits

0xa06e,	// (0x00056dab) mp4_rocker2_pane

0xd6d7,	// (0x0005a414) mp4_rocker2_pane_g1

0xd6df,	// (0x0005a41c) mp4_rocker2_pane_g2

0xa10e,	// (0x00056e4b) mp4_rocker2_pane_g3

0xa116,	// (0x00056e53) mp4_rocker2_pane_g4

0xa11e,	// (0x00056e5b) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0005c60e) mp4_rocker2_pane_g

0x97d1,	// (0x0005650e) main_camera4_pane

0x97d1,	// (0x0005650e) main_video4_pane

0x5f7b,	// (0x00052cb8) main_video_tele_dialer_pane_t1_ParamLimits

0x5f7b,	// (0x00052cb8) main_video_tele_dialer_pane_t1

0x5f94,	// (0x00052cd1) main_video_tele_dialer_pane_t2_ParamLimits

0x5f94,	// (0x00052cd1) main_video_tele_dialer_pane_t2

0x0001,

0xf887,	// (0x0005c5c4) main_video_tele_dialer_pane_t_ParamLimits

0xf887,	// (0x0005c5c4) main_video_tele_dialer_pane_t

0x6581,	// (0x000532be) cam4_autofocus_pane_ParamLimits

0x6581,	// (0x000532be) cam4_autofocus_pane

0x6597,	// (0x000532d4) cam4_image_uncrop_pane_ParamLimits

0x6597,	// (0x000532d4) cam4_image_uncrop_pane

0x65b1,	// (0x000532ee) cam4_indicators_pane_ParamLimits

0x65b1,	// (0x000532ee) cam4_indicators_pane

0x65dc,	// (0x00053319) main_camera4_pane_g1_ParamLimits

0x65dc,	// (0x00053319) main_camera4_pane_g1

0x65ee,	// (0x0005332b) main_camera4_pane_g2_ParamLimits

0x65ee,	// (0x0005332b) main_camera4_pane_g2

0x6601,	// (0x0005333e) main_camera4_pane_g3_ParamLimits

0x6601,	// (0x0005333e) main_camera4_pane_g3

0x6614,	// (0x00053351) main_camera4_pane_g4_ParamLimits

0x6614,	// (0x00053351) main_camera4_pane_g4

0x6627,	// (0x00053364) main_camera4_pane_g5_ParamLimits

0x6627,	// (0x00053364) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0005c619) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0005c619) main_camera4_pane_g

0x664b,	// (0x00053388) main_camera4_pane_t1_ParamLimits

0x664b,	// (0x00053388) main_camera4_pane_t1

0xcfc2,	// (0x00059cff) bg_tb_trans_pane_cp06

0xa14a,	// (0x00056e87) cam4_indicators_pane_g1

0xa15b,	// (0x00056e98) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0005c634) cam4_indicators_pane_g

0xa179,	// (0x00056eb6) cam4_indicators_pane_t1

0x66af,	// (0x000533ec) main_video4_pane_g1_ParamLimits

0x66af,	// (0x000533ec) main_video4_pane_g1

0x66be,	// (0x000533fb) main_video4_pane_g2_ParamLimits

0x66be,	// (0x000533fb) main_video4_pane_g2

0x66cd,	// (0x0005340a) main_video4_pane_g3_ParamLimits

0x66cd,	// (0x0005340a) main_video4_pane_g3

0x66dc,	// (0x00053419) main_video4_pane_g4_ParamLimits

0x66dc,	// (0x00053419) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0005c63b) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0005c63b) main_video4_pane_g

0x66fa,	// (0x00053437) vid4_indicators_pane_ParamLimits

0x66fa,	// (0x00053437) vid4_indicators_pane

0x6728,	// (0x00053465) video4_image_uncrop_cif_pane_ParamLimits

0x6728,	// (0x00053465) video4_image_uncrop_cif_pane

0x6742,	// (0x0005347f) video4_image_uncrop_nhd_pane_ParamLimits

0x6742,	// (0x0005347f) video4_image_uncrop_nhd_pane

0x6597,	// (0x000532d4) video4_image_uncrop_vga_pane_ParamLimits

0x6597,	// (0x000532d4) video4_image_uncrop_vga_pane

0xa522,	// (0x0005725f) bg_tb_trans_pane_cp07

0xa1a5,	// (0x00056ee2) vid4_indicators_pane_g1

0xa1b9,	// (0x00056ef6) vid4_indicators_pane_g2

0xa1cd,	// (0x00056f0a) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0005c646) vid4_indicators_pane_g

0xa1fc,	// (0x00056f39) vid4_indicators_pane_t1

0x6756,	// (0x00053493) cam4_autofocus_pane_g1

0x675e,	// (0x0005349b) cam4_autofocus_pane_g2

0x6766,	// (0x000534a3) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0005c651) cam4_autofocus_pane_g

0x676e,	// (0x000534ab) cam4_autofocus_pane_g3_copy1

0x5fc3,	// (0x00052d00) video_down_pane_cp_t1

0x5fd1,	// (0x00052d0e) video_down_pane_cp_t2

0x0001,

0xf88c,	// (0x0005c5c9) video_down_pane_cp_t

0xa522,	// (0x0005725f) popup_vitu2_window_ParamLimits

0xa522,	// (0x0005725f) popup_vitu2_window

0x6776,	// (0x000534b3) aid_size_cell2_itu2_ParamLimits

0x6776,	// (0x000534b3) aid_size_cell2_itu2

0x679c,	// (0x000534d9) aid_size_cell_itu2_ParamLimits

0x679c,	// (0x000534d9) aid_size_cell_itu2

0x67f8,	// (0x00053535) bg_popup_window_pane_cp09_ParamLimits

0x67f8,	// (0x00053535) bg_popup_window_pane_cp09

0x6806,	// (0x00053543) field_vitu2_entry_pane_ParamLimits

0x6806,	// (0x00053543) field_vitu2_entry_pane

0x682c,	// (0x00053569) grid_vitu2_function_pane_ParamLimits

0x682c,	// (0x00053569) grid_vitu2_function_pane

0x687d,	// (0x000535ba) grid_vitu2_itu_pane_ParamLimits

0x687d,	// (0x000535ba) grid_vitu2_itu_pane

0x6915,	// (0x00053652) cell_vitu2_itu_pane_ParamLimits

0x6915,	// (0x00053652) cell_vitu2_itu_pane

0x6941,	// (0x0005367e) cell_vitu2_function_pane_ParamLimits

0x6941,	// (0x0005367e) cell_vitu2_function_pane

0xd6e7,	// (0x0005a424) bg_popup_call_pane_cp08_ParamLimits

0xd6e7,	// (0x0005a424) bg_popup_call_pane_cp08

0xd6fe,	// (0x0005a43b) field_vitu2_entry_pane_g1

0xd70a,	// (0x0005a447) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0005c658) field_vitu2_entry_pane_g

0x0473,	// (0x0004d1b0) field_vitu2_entry_pane_t1_ParamLimits

0x0473,	// (0x0004d1b0) field_vitu2_entry_pane_t1

0x6980,	// (0x000536bd) field_vitu2_entry_pane_t2_ParamLimits

0x6980,	// (0x000536bd) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0005c65f) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0005c65f) field_vitu2_entry_pane_t

0x699d,	// (0x000536da) bg_button_pane_cp010_ParamLimits

0x699d,	// (0x000536da) bg_button_pane_cp010

0xa213,	// (0x00056f50) cell_vitu2_itu_pane_g1

0x69b9,	// (0x000536f6) cell_vitu2_itu_pane_t1_ParamLimits

0x69b9,	// (0x000536f6) cell_vitu2_itu_pane_t1

0x04a3,	// (0x0004d1e0) cell_vitu2_itu_pane_t2_ParamLimits

0x04a3,	// (0x0004d1e0) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0005c669) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0005c669) cell_vitu2_itu_pane_t

0xa522,	// (0x0005725f) bg_button_pane_cp011

0x6a17,	// (0x00053754) cell_vitu2_function_pane_g1

0x97d1,	// (0x0005650e) main_myfav_hc_pane

0x6370,	// (0x000530ad) popup_image3_note_pane_ParamLimits

0x6370,	// (0x000530ad) popup_image3_note_pane

0x638c,	// (0x000530c9) popup_image3_tool_bar_pane_ParamLimits

0x638c,	// (0x000530c9) popup_image3_tool_bar_pane

0x0531,	// (0x0004d26e) cell_vitu2_itu_pane_t3_ParamLimits

0x0531,	// (0x0004d26e) cell_vitu2_itu_pane_t3

0x97d1,	// (0x0005650e) bg_popup_trans_pane

0xd72c,	// (0x0005a469) grid_image3_tool_bar_pane

0xd736,	// (0x0005a473) bg_popup_trans_pane_g1

0xad32,	// (0x00057a6f) bg_popup_trans_pane_g2

0xd73e,	// (0x0005a47b) bg_popup_trans_pane_g3

0xd746,	// (0x0005a483) bg_popup_trans_pane_g4

0xd74e,	// (0x0005a48b) bg_popup_trans_pane_g5

0xd756,	// (0x0005a493) bg_popup_trans_pane_g6

0xd75e,	// (0x0005a49b) bg_popup_trans_pane_g7

0xd766,	// (0x0005a4a3) bg_popup_trans_pane_g8

0xad12,	// (0x00057a4f) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0005c670) bg_popup_trans_pane_g

0xd76e,	// (0x0005a4ab) cell_image3_tool_bar_pane_ParamLimits

0xd76e,	// (0x0005a4ab) cell_image3_tool_bar_pane

0xcd5f,	// (0x00059a9c) cell_image3_tool_bar_pane_g1

0x97d1,	// (0x0005650e) bg_popup_trans_pane_cp1

0xd782,	// (0x0005a4bf) popup_image3_note_pane_t1

0xd790,	// (0x0005a4cd) popup_image3_note_pane_t2

0xd79e,	// (0x0005a4db) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0005c683) popup_image3_note_pane_t

0xd7ac,	// (0x0005a4e9) popup_image3_note_pane_t3_copy1

0x6a2b,	// (0x00053768) bg_myfav_hc_instruction_pane_ParamLimits

0x6a2b,	// (0x00053768) bg_myfav_hc_instruction_pane

0x6a3f,	// (0x0005377c) cell_myfav_contact_pane_ParamLimits

0x6a3f,	// (0x0005377c) cell_myfav_contact_pane

0x6a5d,	// (0x0005379a) cell_myfav_contact_pane_cp1_ParamLimits

0x6a5d,	// (0x0005379a) cell_myfav_contact_pane_cp1

0x6a75,	// (0x000537b2) cell_myfav_contact_pane_cp2_ParamLimits

0x6a75,	// (0x000537b2) cell_myfav_contact_pane_cp2

0x6a8d,	// (0x000537ca) cell_myfav_contact_pane_cp3_ParamLimits

0x6a8d,	// (0x000537ca) cell_myfav_contact_pane_cp3

0x6aa4,	// (0x000537e1) cell_myfav_contact_pane_cp4_ParamLimits

0x6aa4,	// (0x000537e1) cell_myfav_contact_pane_cp4

0x6abc,	// (0x000537f9) cell_myfav_contact_pane_cp5_ParamLimits

0x6abc,	// (0x000537f9) cell_myfav_contact_pane_cp5

0x6ad0,	// (0x0005380d) cell_myfav_contact_pane_cp6_ParamLimits

0x6ad0,	// (0x0005380d) cell_myfav_contact_pane_cp6

0x6ae6,	// (0x00053823) cell_myfav_contact_pane_cp7_ParamLimits

0x6ae6,	// (0x00053823) cell_myfav_contact_pane_cp7

0xd7ba,	// (0x0005a4f7) listscroll_gen_pane_cp05

0x6b00,	// (0x0005383d) main_myfav_hc_pane_g1_ParamLimits

0x6b00,	// (0x0005383d) main_myfav_hc_pane_g1

0x6b1a,	// (0x00053857) main_myfav_hc_pane_g2_ParamLimits

0x6b1a,	// (0x00053857) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0005c68a) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0005c68a) main_myfav_hc_pane_g

0x6b4c,	// (0x00053889) main_myfav_hc_pane_t1_ParamLimits

0x6b4c,	// (0x00053889) main_myfav_hc_pane_t1

0xd7c3,	// (0x0005a500) main_myfav_hc_pane_t2_ParamLimits

0xd7c3,	// (0x0005a500) main_myfav_hc_pane_t2

0xd7d5,	// (0x0005a512) main_myfav_hc_pane_t3_ParamLimits

0xd7d5,	// (0x0005a512) main_myfav_hc_pane_t3

0x6b63,	// (0x000538a0) main_myfav_hc_pane_t4_ParamLimits

0x6b63,	// (0x000538a0) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0005c691) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0005c691) main_myfav_hc_pane_t

0xcd5f,	// (0x00059a9c) bg_myfav_hc_instruction_pane_g1

0xd7e7,	// (0x0005a524) cell_myfav_contact_pane_g1_ParamLimits

0xd7e7,	// (0x0005a524) cell_myfav_contact_pane_g1

0xd7e7,	// (0x0005a524) cell_myfav_contact_pane_g2_ParamLimits

0xd7e7,	// (0x0005a524) cell_myfav_contact_pane_g2

0xd7f3,	// (0x0005a530) cell_myfav_contact_pane_g3_ParamLimits

0xd7f3,	// (0x0005a530) cell_myfav_contact_pane_g3

0xd047,	// (0x00059d84) cell_myfav_contact_pane_g4_ParamLimits

0xd047,	// (0x00059d84) cell_myfav_contact_pane_g4

0xd800,	// (0x0005a53d) cell_myfav_contact_pane_g5_ParamLimits

0xd800,	// (0x0005a53d) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0005c69c) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0005c69c) cell_myfav_contact_pane_g

0x6b34,	// (0x00053871) main_myfav_hc_pane_g3_ParamLimits

0x6b34,	// (0x00053871) main_myfav_hc_pane_g3

0x1200,	// (0x0004df3d) popup_adpt_find_window

0x6b8b,	// (0x000538c8) afind_page_pane_ParamLimits

0x6b8b,	// (0x000538c8) afind_page_pane

0x6ba0,	// (0x000538dd) aid_size_cell_afind_ParamLimits

0x6ba0,	// (0x000538dd) aid_size_cell_afind

0x6bbe,	// (0x000538fb) bg_popup_sub_pane_cp09_ParamLimits

0x6bbe,	// (0x000538fb) bg_popup_sub_pane_cp09

0x6bcb,	// (0x00053908) find_pane_cp01_ParamLimits

0x6bcb,	// (0x00053908) find_pane_cp01

0xd80c,	// (0x0005a549) grid_afind_control_pane_ParamLimits

0xd80c,	// (0x0005a549) grid_afind_control_pane

0x6bd8,	// (0x00053915) grid_afind_pane_ParamLimits

0x6bd8,	// (0x00053915) grid_afind_pane

0x6bfa,	// (0x00053937) cell_afind_pane_ParamLimits

0x6bfa,	// (0x00053937) cell_afind_pane

0xcd5f,	// (0x00059a9c) afind_page_pane_g1

0x6c61,	// (0x0005399e) afind_page_pane_g2

0x6c6a,	// (0x000539a7) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0005c6a7) afind_page_pane_g

0x6c73,	// (0x000539b0) afind_page_pane_t1

0xd820,	// (0x0005a55d) cell_afind_grid_control_pane_ParamLimits

0xd820,	// (0x0005a55d) cell_afind_grid_control_pane

0xd6af,	// (0x0005a3ec) bg_button_pane_cp69_ParamLimits

0xd6af,	// (0x0005a3ec) bg_button_pane_cp69

0x6c93,	// (0x000539d0) cell_afind_pane_g1_ParamLimits

0x6c93,	// (0x000539d0) cell_afind_pane_g1

0x6ca0,	// (0x000539dd) cell_afind_pane_t1_ParamLimits

0x6ca0,	// (0x000539dd) cell_afind_pane_t1

0xab2b,	// (0x00057868) bg_button_pane_cp72

0xd82f,	// (0x0005a56c) cell_afind_grid_control_pane_g1

0x3c72,	// (0x000509af) aid_image_placing_area_ParamLimits

0x3c72,	// (0x000509af) aid_image_placing_area

0xd370,	// (0x0005a0ad) field_vitu_entry_pane_g1_ParamLimits

0xd370,	// (0x0005a0ad) field_vitu_entry_pane_g1

0xd37c,	// (0x0005a0b9) field_vitu_entry_pane_g2_ParamLimits

0xd37c,	// (0x0005a0b9) field_vitu_entry_pane_g2

0x0001,

0xf817,	// (0x0005c554) field_vitu_entry_pane_g_ParamLimits

0xf817,	// (0x0005c554) field_vitu_entry_pane_g

0x5dd8,	// (0x00052b15) cell_vitu_itu_pane_g1_ParamLimits

0x5e1a,	// (0x00052b57) cell_vitu_itu_pane_t3_ParamLimits

0x5e1a,	// (0x00052b57) cell_vitu_itu_pane_t3

0xd658,	// (0x0005a395) mp4_progress_pane_t1_ParamLimits

0xd671,	// (0x0005a3ae) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0005c5ed) mp4_progress_pane_t_ParamLimits

0xd68a,	// (0x0005a3c7) mup_progress_pane_cp04_ParamLimits

0x6b77,	// (0x000538b4) main_myfav_hc_pane_t5_ParamLimits

0x6b77,	// (0x000538b4) main_myfav_hc_pane_t5

0x97ef,	// (0x0005652c) aid_zoom_text_primary

0x1200,	// (0x0004df3d) popup_adpt_find_window_ParamLimits

0xa522,	// (0x0005725f) main_cam_set_pane

0x65c8,	// (0x00053305) cam4_zoom_pane_ParamLimits

0x65c8,	// (0x00053305) cam4_zoom_pane

0x6cb2,	// (0x000539ef) main_cam_set_pane_g1_ParamLimits

0x6cb2,	// (0x000539ef) main_cam_set_pane_g1

0x6cc0,	// (0x000539fd) main_cam_set_pane_g2_ParamLimits

0x6cc0,	// (0x000539fd) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0005c6ae) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0005c6ae) main_cam_set_pane_g

0x6ce1,	// (0x00053a1e) main_cam_set_pane_t1_ParamLimits

0x6ce1,	// (0x00053a1e) main_cam_set_pane_t1

0x6cfc,	// (0x00053a39) main_cset_listscroll_pane_ParamLimits

0x6cfc,	// (0x00053a39) main_cset_listscroll_pane

0x6d1c,	// (0x00053a59) main_cset_slider_pane_ParamLimits

0x6d1c,	// (0x00053a59) main_cset_slider_pane

0xd840,	// (0x0005a57d) main_cset_list_pane_ParamLimits

0xd840,	// (0x0005a57d) main_cset_list_pane

0xd850,	// (0x0005a58d) scroll_pane_cp028

0x6d42,	// (0x00053a7f) aid_area_touch_slider

0x6d5e,	// (0x00053a9b) cset_slider_pane

0x6d88,	// (0x00053ac5) main_cset_slider_pane_g1

0x6d9d,	// (0x00053ada) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0005c6b3) main_cset_slider_pane_g

0xd889,	// (0x0005a5c6) main_cset_slider_pane_t1

0x6e59,	// (0x00053b96) main_cset_slider_pane_t2

0x6e73,	// (0x00053bb0) main_cset_slider_pane_t3

0x6e8d,	// (0x00053bca) main_cset_slider_pane_t4

0x6ea7,	// (0x00053be4) main_cset_slider_pane_t5

0x6ec1,	// (0x00053bfe) main_cset_slider_pane_t6

0x6ed6,	// (0x00053c13) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0005c6d8) main_cset_slider_pane_t

0x6fda,	// (0x00053d17) cset_list_set_pane_ParamLimits

0x6fda,	// (0x00053d17) cset_list_set_pane

0x6fec,	// (0x00053d29) aid_position_infowindow_above

0x6ff4,	// (0x00053d31) aid_position_infowindow_below

0x6ffc,	// (0x00053d39) cset_list_set_pane_g1_ParamLimits

0x6ffc,	// (0x00053d39) cset_list_set_pane_g1

0x7008,	// (0x00053d45) cset_list_set_pane_g3_ParamLimits

0x7008,	// (0x00053d45) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0005c6f7) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0005c6f7) cset_list_set_pane_g

0x7017,	// (0x00053d54) cset_list_set_pane_t1_ParamLimits

0x7017,	// (0x00053d54) cset_list_set_pane_t1

0xa522,	// (0x0005725f) list_highlight_pane_cp021_ParamLimits

0xa522,	// (0x0005725f) list_highlight_pane_cp021

0xb689,	// (0x000583c6) cset_slider_pane_g1

0xb69b,	// (0x000583d8) cset_slider_pane_g2

0xb692,	// (0x000583cf) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0005c6fc) cset_slider_pane_g

0xa225,	// (0x00056f62) aid_area_touch_cam4_zoom

0xa22d,	// (0x00056f6a) cam4_zoom_cont_pane

0xa235,	// (0x00056f72) cam4_zoom_pane_g1

0xa23d,	// (0x00056f7a) cam4_zoom_pane_g2

0x702c,	// (0x00053d69) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0005c703) cam4_zoom_pane_g

0xd9a1,	// (0x0005a6de) cam4_zoom_cont_pane_g1

0xd9aa,	// (0x0005a6e7) cam4_zoom_cont_pane_g2

0xd9b3,	// (0x0005a6f0) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0005c70a) cam4_zoom_cont_pane_g

0x63f9,	// (0x00053136) call4_image_pane_ParamLimits

0x63f9,	// (0x00053136) call4_image_pane

0x6460,	// (0x0005319d) call4_windows_conf_pane_ParamLimits

0x64a5,	// (0x000531e2) popup_call4_audio_in_window_ParamLimits

0x64a5,	// (0x000531e2) popup_call4_audio_in_window

0x97d1,	// (0x0005650e) bg_popup_call2_act_pane_cp02

0xd6bb,	// (0x0005a3f8) call4_list_conf_pane

0xcd5f,	// (0x00059a9c) call4_image_pane_g1

0xcd5f,	// (0x00059a9c) call4_image_pane_g2

0x0001,

0xf6d8,	// (0x0005c415) call4_image_pane_g

0xd929,	// (0x0005a666) list_single_graphic_popup_conf4_pane_ParamLimits

0xd929,	// (0x0005a666) list_single_graphic_popup_conf4_pane

0x97d1,	// (0x0005650e) list_highlight_pane_cp022

0xd93c,	// (0x0005a679) list_single_graphic_popup_conf4_pane_g1

0xb25a,	// (0x00057f97) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0005c711) list_single_graphic_popup_conf4_pane_g

0xd944,	// (0x0005a681) list_single_graphic_popup_conf4_pane_t1

0x21f9,	// (0x0004ef36) popup_vtel_slider_window_ParamLimits

0x21f9,	// (0x0004ef36) popup_vtel_slider_window

0xd69d,	// (0x0005a3da) dialer2_ne_pane_t2_ParamLimits

0xd69d,	// (0x0005a3da) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0005c5f2) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0005c5f2) dialer2_ne_pane_t

0xcb38,	// (0x00059875) bg_popup_sub_pane_cp010_ParamLimits

0xcb38,	// (0x00059875) bg_popup_sub_pane_cp010

0x7034,	// (0x00053d71) popup_vtel_slider_window_g1_ParamLimits

0x7034,	// (0x00053d71) popup_vtel_slider_window_g1

0x7047,	// (0x00053d84) popup_vtel_slider_window_g2_ParamLimits

0x7047,	// (0x00053d84) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0005c716) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0005c716) popup_vtel_slider_window_g

0x709d,	// (0x00053dda) vtel_slider_pane_ParamLimits

0x709d,	// (0x00053dda) vtel_slider_pane

0x70bf,	// (0x00053dfc) vtel_slider_pane_g1_ParamLimits

0x70bf,	// (0x00053dfc) vtel_slider_pane_g1

0x70d3,	// (0x00053e10) vtel_slider_pane_g2_ParamLimits

0x70d3,	// (0x00053e10) vtel_slider_pane_g2

0x70eb,	// (0x00053e28) vtel_slider_pane_g3_ParamLimits

0x70eb,	// (0x00053e28) vtel_slider_pane_g3

0x70bf,	// (0x00053dfc) vtel_slider_pane_g4_ParamLimits

0x70bf,	// (0x00053dfc) vtel_slider_pane_g4

0x7101,	// (0x00053e3e) vtel_slider_pane_g5_ParamLimits

0x7101,	// (0x00053e3e) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0005c71f) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0005c71f) vtel_slider_pane_g

0xa522,	// (0x0005725f) main_gallery2_pane

0x67c8,	// (0x00053505) aid_size_row_itut2_dropdow_list_ParamLimits

0x67c8,	// (0x00053505) aid_size_row_itut2_dropdow_list

0x6854,	// (0x00053591) grid_vitu2_function_top_pane_ParamLimits

0x6854,	// (0x00053591) grid_vitu2_function_top_pane

0x68be,	// (0x000535fb) popup_vitu2_dropdown_list_window_ParamLimits

0x68be,	// (0x000535fb) popup_vitu2_dropdown_list_window

0x68e7,	// (0x00053624) popup_vitu2_match_list_window

0x7117,	// (0x00053e54) cell_vitu2_function_top_pane_ParamLimits

0x7117,	// (0x00053e54) cell_vitu2_function_top_pane

0x712f,	// (0x00053e6c) cell_vitu2_function_top_pane_cp01_ParamLimits

0x712f,	// (0x00053e6c) cell_vitu2_function_top_pane_cp01

0x714b,	// (0x00053e88) cell_vitu2_function_top_wide_pane_ParamLimits

0x714b,	// (0x00053e88) cell_vitu2_function_top_wide_pane

0xa522,	// (0x0005725f) bg_button_pane_cp012

0x7167,	// (0x00053ea4) cell_vitu2_function_top_pane_g1

0xa245,	// (0x00056f82) bg_button_pane_cp013_ParamLimits

0xa245,	// (0x00056f82) bg_button_pane_cp013

0x717b,	// (0x00053eb8) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x717b,	// (0x00053eb8) cell_vitu2_function_top_wide_pane_g1

0xa522,	// (0x0005725f) bg_popup_sub_pane_cp20

0x7193,	// (0x00053ed0) list_vitu2_match_list_pane

0xd736,	// (0x0005a473) bg_popup_sub_pane_cp20_g1

0xd73e,	// (0x0005a47b) bg_popup_sub_pane_cp20_g2

0xad32,	// (0x00057a6f) bg_popup_sub_pane_cp20_g3

0xd746,	// (0x0005a483) bg_popup_sub_pane_cp20_g4

0xad12,	// (0x00057a4f) bg_popup_sub_pane_cp20_g5

0xd95a,	// (0x0005a697) bg_popup_sub_pane_cp20_g6

0xd756,	// (0x0005a493) bg_popup_sub_pane_cp20_g7

0xd75e,	// (0x0005a49b) bg_popup_sub_pane_cp20_g8

0xd766,	// (0x0005a4a3) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0005c72a) bg_popup_sub_pane_cp20_g

0xa261,	// (0x00056f9e) list_vitu2_match_list_item_pane_ParamLimits

0xa261,	// (0x00056f9e) list_vitu2_match_list_item_pane

0xa273,	// (0x00056fb0) list_vitu2_match_list_item_pane_t1

0x97d1,	// (0x0005650e) bg_popup_sub_pane_cp21

0xb174,	// (0x00057eb1) grid_vitu2_dropdown_list_pane

0x71b1,	// (0x00053eee) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x71b1,	// (0x00053eee) cell_vitu2_dropdown_list_char_pane

0x71d2,	// (0x00053f0f) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x71d2,	// (0x00053f0f) cell_vitu2_dropdown_list_ctrl_pane

0xd962,	// (0x0005a69f) cell_vitu2_dropdown_list_char_pane_g1

0xd96b,	// (0x0005a6a8) cell_vitu2_dropdown_list_char_pane_g2

0xd974,	// (0x0005a6b1) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0005c747) cell_vitu2_dropdown_list_char_pane_g

0x71fe,	// (0x00053f3b) cell_vitu2_dropdown_list_char_pane_t1

0x720c,	// (0x00053f49) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x720c,	// (0x00053f49) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7219,	// (0x00053f56) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7219,	// (0x00053f56) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7226,	// (0x00053f63) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7226,	// (0x00053f63) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7233,	// (0x00053f70) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7233,	// (0x00053f70) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcfc2,	// (0x00059cff) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcfc2,	// (0x00059cff) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0005c74e) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0005c74e) cell_vitu2_dropdown_list_ctrl_pane_g

0x724f,	// (0x00053f8c) aid_size_cell_gallery2_ParamLimits

0x724f,	// (0x00053f8c) aid_size_cell_gallery2

0x726d,	// (0x00053faa) grid_gallery2_pane_ParamLimits

0x726d,	// (0x00053faa) grid_gallery2_pane

0x7287,	// (0x00053fc4) scroll_pane_cp029_ParamLimits

0x7287,	// (0x00053fc4) scroll_pane_cp029

0x7298,	// (0x00053fd5) cell_gallery2_pane_ParamLimits

0x7298,	// (0x00053fd5) cell_gallery2_pane

0xd9bc,	// (0x0005a6f9) cell_gallery2_pane_g2

0x72f7,	// (0x00054034) cell_gallery2_pane_g3

0xd9c4,	// (0x0005a701) cell_gallery2_pane_g4

0xd9cc,	// (0x0005a709) cell_gallery2_pane_g5

0xaad9,	// (0x00057816) grid_highlight_pane_cp10

0x68e7,	// (0x00053624) popup_vitu2_match_list_window_ParamLimits

0x68fe,	// (0x0005363b) popup_vitu2_query_window_ParamLimits

0x68fe,	// (0x0005363b) popup_vitu2_query_window

0x97d1,	// (0x0005650e) bg_vitu2_candi_button_pane

0xd962,	// (0x0005a69f) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd96b,	// (0x0005a6a8) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd974,	// (0x0005a6b1) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x05ed,	// (0x0004d32a) bg_button_pane_cp015

0x72ff,	// (0x0005403c) bg_button_pane_cp016

0x7312,	// (0x0005404f) bg_button_pane_cp017

0xc94b,	// (0x00059688) bg_popup_sub_pane_cp22

0xd9d4,	// (0x0005a711) popup_vitu2_query_window_g1

0x0620,	// (0x0004d35d) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0005c759) popup_vitu2_query_window_g

0x063f,	// (0x0004d37c) popup_vitu2_query_window_t1_ParamLimits

0x063f,	// (0x0004d37c) popup_vitu2_query_window_t1

0x0674,	// (0x0004d3b1) popup_vitu2_query_window_t2_ParamLimits

0x0674,	// (0x0004d3b1) popup_vitu2_query_window_t2

0x0686,	// (0x0004d3c3) popup_vitu2_query_window_t3_ParamLimits

0x0686,	// (0x0004d3c3) popup_vitu2_query_window_t3

0x7336,	// (0x00054073) popup_vitu2_query_window_t4_ParamLimits

0x7336,	// (0x00054073) popup_vitu2_query_window_t4

0x7357,	// (0x00054094) popup_vitu2_query_window_t5_ParamLimits

0x7357,	// (0x00054094) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0005c760) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0005c760) popup_vitu2_query_window_t

0xd838,	// (0x0005a575) main_cset_text_pane

0x6d42,	// (0x00053a7f) aid_area_touch_slider_ParamLimits

0x6d5e,	// (0x00053a9b) cset_slider_pane_ParamLimits

0x6d88,	// (0x00053ac5) main_cset_slider_pane_g1_ParamLimits

0x6d9d,	// (0x00053ada) main_cset_slider_pane_g2_ParamLimits

0xd859,	// (0x0005a596) main_cset_slider_pane_g3_ParamLimits

0xd859,	// (0x0005a596) main_cset_slider_pane_g3

0x6db2,	// (0x00053aef) main_cset_slider_pane_g4_ParamLimits

0x6db2,	// (0x00053aef) main_cset_slider_pane_g4

0x6dc1,	// (0x00053afe) main_cset_slider_pane_g5_ParamLimits

0x6dc1,	// (0x00053afe) main_cset_slider_pane_g5

0x6dcd,	// (0x00053b0a) main_cset_slider_pane_g6_ParamLimits

0x6dcd,	// (0x00053b0a) main_cset_slider_pane_g6

0xf976,	// (0x0005c6b3) main_cset_slider_pane_g_ParamLimits

0xd889,	// (0x0005a5c6) main_cset_slider_pane_t1_ParamLimits

0x6e59,	// (0x00053b96) main_cset_slider_pane_t2_ParamLimits

0x6e73,	// (0x00053bb0) main_cset_slider_pane_t3_ParamLimits

0x6e8d,	// (0x00053bca) main_cset_slider_pane_t4_ParamLimits

0x6ea7,	// (0x00053be4) main_cset_slider_pane_t5_ParamLimits

0x6ec1,	// (0x00053bfe) main_cset_slider_pane_t6_ParamLimits

0x6ed6,	// (0x00053c13) main_cset_slider_pane_t7_ParamLimits

0x6f00,	// (0x00053c3d) main_cset_slider_pane_t8_ParamLimits

0x6f00,	// (0x00053c3d) main_cset_slider_pane_t8

0x6f28,	// (0x00053c65) main_cset_slider_pane_t9_ParamLimits

0x6f28,	// (0x00053c65) main_cset_slider_pane_t9

0x6f50,	// (0x00053c8d) main_cset_slider_pane_t10_ParamLimits

0x6f50,	// (0x00053c8d) main_cset_slider_pane_t10

0x6f78,	// (0x00053cb5) main_cset_slider_pane_t11_ParamLimits

0x6f78,	// (0x00053cb5) main_cset_slider_pane_t11

0x6fa0,	// (0x00053cdd) main_cset_slider_pane_t12_ParamLimits

0x6fa0,	// (0x00053cdd) main_cset_slider_pane_t12

0x6fbd,	// (0x00053cfa) main_cset_slider_pane_t13_ParamLimits

0x6fbd,	// (0x00053cfa) main_cset_slider_pane_t13

0xf99b,	// (0x0005c6d8) main_cset_slider_pane_t_ParamLimits

0x97d1,	// (0x0005650e) bg_popup_sub_pane_cp011

0xd9e0,	// (0x0005a71d) main_cset_text_pane_g1

0xd9e8,	// (0x0005a725) main_cset_text_pane_t1

0xd9f6,	// (0x0005a733) main_cset_text_pane_t2

0xda04,	// (0x0005a741) main_cset_text_pane_t3

0xda12,	// (0x0005a74f) main_cset_text_pane_t4

0xda20,	// (0x0005a75d) main_cset_text_pane_t5

0xda2e,	// (0x0005a76b) main_cset_text_pane_t6

0xda3c,	// (0x0005a779) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0005c76f) main_cset_text_pane_t

0x97d1,	// (0x0005650e) main_cam4_burst_pane

0x97d1,	// (0x0005650e) main_cam5_pane

0x6c81,	// (0x000539be) bg_button_pane_cp019

0x6c8a,	// (0x000539c7) bg_button_pane_cp020

0xd865,	// (0x0005a5a2) main_cset_slider_pane_g7_ParamLimits

0xd865,	// (0x0005a5a2) main_cset_slider_pane_g7

0xd871,	// (0x0005a5ae) main_cset_slider_pane_g8_ParamLimits

0xd871,	// (0x0005a5ae) main_cset_slider_pane_g8

0x6de1,	// (0x00053b1e) main_cset_slider_pane_g9_ParamLimits

0x6de1,	// (0x00053b1e) main_cset_slider_pane_g9

0x6ded,	// (0x00053b2a) main_cset_slider_pane_g10_ParamLimits

0x6ded,	// (0x00053b2a) main_cset_slider_pane_g10

0x6df9,	// (0x00053b36) main_cset_slider_pane_g11_ParamLimits

0x6df9,	// (0x00053b36) main_cset_slider_pane_g11

0x6e05,	// (0x00053b42) main_cset_slider_pane_g12_ParamLimits

0x6e05,	// (0x00053b42) main_cset_slider_pane_g12

0x6e11,	// (0x00053b4e) main_cset_slider_pane_g13_ParamLimits

0x6e11,	// (0x00053b4e) main_cset_slider_pane_g13

0x6e1d,	// (0x00053b5a) main_cset_slider_pane_g14_ParamLimits

0x6e1d,	// (0x00053b5a) main_cset_slider_pane_g14

0x6e29,	// (0x00053b66) main_cset_slider_pane_g15_ParamLimits

0x6e29,	// (0x00053b66) main_cset_slider_pane_g15

0xd8b7,	// (0x0005a5f4) main_cset_slider_pane_t14_ParamLimits

0xd8b7,	// (0x0005a5f4) main_cset_slider_pane_t14

0xd8f0,	// (0x0005a62d) main_cset_slider_pane_t15_ParamLimits

0xd8f0,	// (0x0005a62d) main_cset_slider_pane_t15

0x7378,	// (0x000540b5) aid_cam4_burst_size_cell_ParamLimits

0x7378,	// (0x000540b5) aid_cam4_burst_size_cell

0x7398,	// (0x000540d5) grid_cam4_burst_pane_ParamLimits

0x7398,	// (0x000540d5) grid_cam4_burst_pane

0x73d0,	// (0x0005410d) linegrid_cam4_burst_pane_ParamLimits

0x73d0,	// (0x0005410d) linegrid_cam4_burst_pane

0xda4a,	// (0x0005a787) scroll_pane_cp30_ParamLimits

0xda4a,	// (0x0005a787) scroll_pane_cp30

0x73f4,	// (0x00054131) cell_cam4_burst_pane_ParamLimits

0x73f4,	// (0x00054131) cell_cam4_burst_pane

0xda56,	// (0x0005a793) linegrid_cam4_burst_pane_g1_ParamLimits

0xda56,	// (0x0005a793) linegrid_cam4_burst_pane_g1

0x7441,	// (0x0005417e) linegrid_cam4_burst_pane_g2_ParamLimits

0x7441,	// (0x0005417e) linegrid_cam4_burst_pane_g2

0xda63,	// (0x0005a7a0) linegrid_cam4_burst_pane_g3_ParamLimits

0xda63,	// (0x0005a7a0) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0005c77e) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0005c77e) linegrid_cam4_burst_pane_g

0x7452,	// (0x0005418f) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7452,	// (0x0005418f) linegrid_cam4_burst_pane_g3_copy1

0xda70,	// (0x0005a7ad) linegrid_cam4_burst_pane_g4_ParamLimits

0xda70,	// (0x0005a7ad) linegrid_cam4_burst_pane_g4

0x746c,	// (0x000541a9) linegrid_cam4_burst_pane_g5_ParamLimits

0x746c,	// (0x000541a9) linegrid_cam4_burst_pane_g5

0x747d,	// (0x000541ba) linegrid_cam4_burst_pane_g6_ParamLimits

0x747d,	// (0x000541ba) linegrid_cam4_burst_pane_g6

0xda7d,	// (0x0005a7ba) linegrid_cam4_burst_pane_g7_ParamLimits

0xda7d,	// (0x0005a7ba) linegrid_cam4_burst_pane_g7

0x7494,	// (0x000541d1) cell_cam4_burst_pane_g1

0xda96,	// (0x0005a7d3) main_cam5_pane_t1_ParamLimits

0xda96,	// (0x0005a7d3) main_cam5_pane_t1

0xdaa8,	// (0x0005a7e5) main_cam5_pane_t2_ParamLimits

0xdaa8,	// (0x0005a7e5) main_cam5_pane_t2

0xdaba,	// (0x0005a7f7) main_cam5_pane_t3_ParamLimits

0xdaba,	// (0x0005a7f7) main_cam5_pane_t3

0xdacc,	// (0x0005a809) main_cam5_pane_t4_ParamLimits

0xdacc,	// (0x0005a809) main_cam5_pane_t4

0xdae4,	// (0x0005a821) main_cam5_pane_t5_ParamLimits

0xdae4,	// (0x0005a821) main_cam5_pane_t5

0xdaf8,	// (0x0005a835) main_cam5_pane_t6_ParamLimits

0xdaf8,	// (0x0005a835) main_cam5_pane_t6

0xdb0c,	// (0x0005a849) main_cam5_pane_t7_ParamLimits

0xdb0c,	// (0x0005a849) main_cam5_pane_t7

0xdb1e,	// (0x0005a85b) main_cam5_pane_t8_ParamLimits

0xdb1e,	// (0x0005a85b) main_cam5_pane_t8

0xdb3a,	// (0x0005a877) main_cam5_pane_t9_ParamLimits

0xdb3a,	// (0x0005a877) main_cam5_pane_t9

0xdb4c,	// (0x0005a889) main_cam5_pane_t10_ParamLimits

0xdb4c,	// (0x0005a889) main_cam5_pane_t10

0xdb5e,	// (0x0005a89b) main_cam5_pane_t11_ParamLimits

0xdb5e,	// (0x0005a89b) main_cam5_pane_t11

0xdb70,	// (0x0005a8ad) main_cam5_pane_t12_ParamLimits

0xdb70,	// (0x0005a8ad) main_cam5_pane_t12

0xdb85,	// (0x0005a8c2) main_cam5_pane_t13_ParamLimits

0xdb85,	// (0x0005a8c2) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0005c78a) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0005c78a) main_cam5_pane_t

0x1282,	// (0x0004dfbf) popup_scut_keymap_window_ParamLimits

0x1282,	// (0x0004dfbf) popup_scut_keymap_window

0x74a7,	// (0x000541e4) aid_size_cell_brow_shortcut

0xaad9,	// (0x00057816) bg_popup_window_pane_cp010

0x74b3,	// (0x000541f0) grid_scut_pane

0x74bf,	// (0x000541fc) cell_scut_pane_ParamLimits

0x74bf,	// (0x000541fc) cell_scut_pane

0x74d6,	// (0x00054213) cell_scut_pane_g1

0xdba2,	// (0x0005a8df) cell_scut_pane_t1

0xdbb1,	// (0x0005a8ee) cell_scut_pane_t2

0x74df,	// (0x0005421c) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0005c7a5) cell_scut_pane_t

0x52ce,	// (0x0005200b) main_mup3_pane_g8_ParamLimits

0x52ce,	// (0x0005200b) main_mup3_pane_g8

0x67e0,	// (0x0005351d) area_vitu2_query_pane_ParamLimits

0x67e0,	// (0x0005351d) area_vitu2_query_pane

0x05ff,	// (0x0004d33c) input_focus_pane_cp08

0xdbc0,	// (0x0005a8fd) area_vitu2_query_pane_g1

0x0704,	// (0x0004d441) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0005c7ac) area_vitu2_query_pane_g

0x74ed,	// (0x0005422a) area_vitu2_query_pane_t1_ParamLimits

0x74ed,	// (0x0005422a) area_vitu2_query_pane_t1

0x7501,	// (0x0005423e) area_vitu2_query_pane_t2_ParamLimits

0x7501,	// (0x0005423e) area_vitu2_query_pane_t2

0x0715,	// (0x0004d452) area_vitu2_query_pane_t3_ParamLimits

0x0715,	// (0x0004d452) area_vitu2_query_pane_t3

0x7515,	// (0x00054252) area_vitu2_query_pane_t4_ParamLimits

0x7515,	// (0x00054252) area_vitu2_query_pane_t4

0x753d,	// (0x0005427a) area_vitu2_query_pane_t5_ParamLimits

0x753d,	// (0x0005427a) area_vitu2_query_pane_t5

0x7565,	// (0x000542a2) area_vitu2_query_pane_t6_ParamLimits

0x7565,	// (0x000542a2) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0005c7b1) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0005c7b1) area_vitu2_query_pane_t

0x75b1,	// (0x000542ee) bg_button_pane_cp018

0x75bf,	// (0x000542fc) bg_button_pane_cp021

0x073d,	// (0x0004d47a) bg_button_pane_cp022

0x074c,	// (0x0004d489) input_focus_pane_cp09

0xb396,	// (0x000580d3) aid_size_touch_mv_arrow_left

0xb3bf,	// (0x000580fc) aid_size_touch_mv_arrow_right

0x6e41,	// (0x00053b7e) main_cset_slider_pane_g16_ParamLimits

0x6e41,	// (0x00053b7e) main_cset_slider_pane_g16

0x6e4d,	// (0x00053b8a) main_cset_slider_pane_g17_ParamLimits

0x6e4d,	// (0x00053b8a) main_cset_slider_pane_g17

0x7494,	// (0x000541d1) cell_cam4_burst_pane_g1_ParamLimits

0x97d1,	// (0x0005650e) compa_mode_pane

0x7057,	// (0x00053d94) popup_vtel_slider_window_g3_ParamLimits

0x7057,	// (0x00053d94) popup_vtel_slider_window_g3

0x706e,	// (0x00053dab) popup_vtel_slider_window_g4_ParamLimits

0x706e,	// (0x00053dab) popup_vtel_slider_window_g4

0x7085,	// (0x00053dc2) popup_vtel_slider_window_t1_ParamLimits

0x7085,	// (0x00053dc2) popup_vtel_slider_window_t1

0x97d1,	// (0x0005650e) main_cl_pane

0x9d38,	// (0x00056a75) popup_imed_adjust2_window_ParamLimits

0xc94b,	// (0x00059688) bg_tb_trans_pane_cp05_ParamLimits

0xd2a5,	// (0x00059fe2) popup_imed_adjust2_window_g1_ParamLimits

0xd2b4,	// (0x00059ff1) popup_imed_adjust2_window_g2_ParamLimits

0xd2b4,	// (0x00059ff1) popup_imed_adjust2_window_g2

0xd2c0,	// (0x00059ffd) popup_imed_adjust2_window_g3_ParamLimits

0xd2c0,	// (0x00059ffd) popup_imed_adjust2_window_g3

0x0002,

0xf7db,	// (0x0005c518) popup_imed_adjust2_window_g_ParamLimits

0xf7db,	// (0x0005c518) popup_imed_adjust2_window_g

0xd2cc,	// (0x0005a009) popup_imed_adjust2_window_t1_ParamLimits

0xd2e4,	// (0x0005a021) slider_imed_adjust_pane_ParamLimits

0xd2f8,	// (0x0005a035) slider_imed_adjust_pane_g1_ParamLimits

0xd308,	// (0x0005a045) slider_imed_adjust_pane_g2_ParamLimits

0xd318,	// (0x0005a055) slider_imed_adjust_pane_g3_ParamLimits

0xd329,	// (0x0005a066) slider_imed_adjust_pane_g4_ParamLimits

0xf7e2,	// (0x0005c51f) slider_imed_adjust_pane_g_ParamLimits

0x6569,	// (0x000532a6) aid_touch_area_cam4_ParamLimits

0x6569,	// (0x000532a6) aid_touch_area_cam4

0xa126,	// (0x00056e63) battery_pane_cp01

0x6638,	// (0x00053375) main_camera4_pane_g6_ParamLimits

0x6638,	// (0x00053375) main_camera4_pane_g6

0x6662,	// (0x0005339f) main_camera4_pane_t2_ParamLimits

0x6662,	// (0x0005339f) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0005c626) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0005c626) main_camera4_pane_t

0x6697,	// (0x000533d4) aid_touch_area_vid4_ParamLimits

0x6697,	// (0x000533d4) aid_touch_area_vid4

0x66eb,	// (0x00053428) main_video4_pane_g5_ParamLimits

0x66eb,	// (0x00053428) main_video4_pane_g5

0x6710,	// (0x0005344d) vid4_progress_pane_ParamLimits

0x6710,	// (0x0005344d) vid4_progress_pane

0xd87d,	// (0x0005a5ba) main_cset_slider_pane_g18_ParamLimits

0xd87d,	// (0x0005a5ba) main_cset_slider_pane_g18

0xda8a,	// (0x0005a7c7) cell_cam4_burst_pane_g2_ParamLimits

0xda8a,	// (0x0005a7c7) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0005c785) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0005c785) cell_cam4_burst_pane_g

0xa90b,	// (0x00057648) bg_cl_pane_ParamLimits

0xa90b,	// (0x00057648) bg_cl_pane

0x75cb,	// (0x00054308) cl_header_pane_ParamLimits

0x75cb,	// (0x00054308) cl_header_pane

0x75df,	// (0x0005431c) cl_listscroll_pane_ParamLimits

0x75df,	// (0x0005431c) cl_listscroll_pane

0xdbcc,	// (0x0005a909) bg_cl_pane_g1

0xdbd4,	// (0x0005a911) bg_cl_pane_g2

0xdbdc,	// (0x0005a919) bg_cl_pane_g3

0xdbe4,	// (0x0005a921) bg_cl_pane_g4

0xdbec,	// (0x0005a929) bg_cl_pane_g5

0xdbf4,	// (0x0005a931) bg_cl_pane_g6

0xdbfc,	// (0x0005a939) bg_cl_pane_g7

0xdc04,	// (0x0005a941) bg_cl_pane_g8

0xdc0c,	// (0x0005a949) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0005c7c0) bg_cl_pane_g

0x75ef,	// (0x0005432c) aid_height_cl_leading_ParamLimits

0x75ef,	// (0x0005432c) aid_height_cl_leading

0x75fb,	// (0x00054338) aid_height_cl_text_ParamLimits

0x75fb,	// (0x00054338) aid_height_cl_text

0xa522,	// (0x0005725f) bg_cl_header_pane_ParamLimits

0xa522,	// (0x0005725f) bg_cl_header_pane

0x761a,	// (0x00054357) cl_header_pane_g1_ParamLimits

0x761a,	// (0x00054357) cl_header_pane_g1

0x7630,	// (0x0005436d) cl_header_pane_t1_ParamLimits

0x7630,	// (0x0005436d) cl_header_pane_t1

0xdc14,	// (0x0005a951) cl_list_pane

0xd850,	// (0x0005a58d) hc_scroll_pane_cp01

0xad12,	// (0x00057a4f) bg_cl_header_pane_g1

0xd736,	// (0x0005a473) bg_cl_header_pane_g2

0xad32,	// (0x00057a6f) bg_cl_header_pane_g3

0xd746,	// (0x0005a483) bg_cl_header_pane_g4

0xd73e,	// (0x0005a47b) bg_cl_header_pane_g5

0xd95a,	// (0x0005a697) bg_cl_header_pane_g6

0xd75e,	// (0x0005a49b) bg_cl_header_pane_g7

0xd766,	// (0x0005a4a3) bg_cl_header_pane_g8

0xd756,	// (0x0005a493) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0005c7d3) bg_cl_header_pane_g

0x7649,	// (0x00054386) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7649,	// (0x00054386) hc_cl_list_double_graphic_heading_pane

0x765a,	// (0x00054397) hc_cl_list_single_graphic_pane_ParamLimits

0x765a,	// (0x00054397) hc_cl_list_single_graphic_pane

0x7670,	// (0x000543ad) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7670,	// (0x000543ad) hc_cl_list_single_graphic_pane_g1

0x767c,	// (0x000543b9) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x767c,	// (0x000543b9) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0005c7e6) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0005c7e6) hc_cl_list_single_graphic_pane_g

0x7690,	// (0x000543cd) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7690,	// (0x000543cd) hc_cl_list_single_graphic_pane_t1

0x7670,	// (0x000543ad) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7670,	// (0x000543ad) hc_cl_list_double_graphic_heading_pane_g1

0x76a5,	// (0x000543e2) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x76a5,	// (0x000543e2) hc_cl_list_double_graphic_heading_pane_g2

0x76b9,	// (0x000543f6) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x76b9,	// (0x000543f6) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0005c7eb) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0005c7eb) hc_cl_list_double_graphic_heading_pane_g

0x76cd,	// (0x0005440a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x76cd,	// (0x0005440a) hc_cl_list_double_graphic_heading_pane_t1

0x76e2,	// (0x0005441f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x76e2,	// (0x0005441f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0005c7f2) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0005c7f2) hc_cl_list_double_graphic_heading_pane_t

0xa289,	// (0x00056fc6) vid4_progress_pane_g1

0xa299,	// (0x00056fd6) vid4_progress_pane_g2

0x76f7,	// (0x00054434) vid4_progress_pane_g3

0xa2a9,	// (0x00056fe6) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0005c7f7) vid4_progress_pane_g

0x7709,	// (0x00054446) vid4_progress_pane_t1

0xa2c1,	// (0x00056ffe) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0005c802) vid4_progress_pane_t

0x7721,	// (0x0005445e) wait_bar_pane_cp07

0xcb46,	// (0x00059883) blid_firmament_pane_ParamLimits

0xcb89,	// (0x000598c6) popup_blid_sat_info2_window_g1

0xcbad,	// (0x000598ea) popup_blid_sat_info2_window_t3

0xcbbb,	// (0x000598f8) popup_blid_sat_info2_window_t4

0xcbc9,	// (0x00059906) popup_blid_sat_info2_window_t5

0xcbd7,	// (0x00059914) popup_blid_sat_info2_window_t6

0xcbe7,	// (0x00059924) popup_blid_sat_info2_window_t7

0xcbf5,	// (0x00059932) popup_blid_sat_info2_window_t8

0xcc03,	// (0x00059940) popup_blid_sat_info2_window_t9

0xcc11,	// (0x0005994e) popup_blid_sat_info2_window_t10

0xccdf,	// (0x00059a1c) aid_firma_cardinal_ParamLimits

0xccf3,	// (0x00059a30) blid_firmament_pane_t1_ParamLimits

0xcd0a,	// (0x00059a47) blid_firmament_pane_t2_ParamLimits

0xcd21,	// (0x00059a5e) blid_firmament_pane_t3_ParamLimits

0xcd38,	// (0x00059a75) blid_firmament_pane_t4_ParamLimits

0xf6cf,	// (0x0005c40c) blid_firmament_pane_t_ParamLimits

0xcd4f,	// (0x00059a8c) blid_sat_info_pane_ParamLimits

0xa522,	// (0x0005725f) main_cam_set_pane_ParamLimits

0x5b92,	// (0x000528cf) aid_size_cell_colour_35_ParamLimits

0x5bb2,	// (0x000528ef) aid_size_cell_colour_112_ParamLimits

0x5bd2,	// (0x0005290f) aid_size_cell_effect_ParamLimits

0xc94b,	// (0x00059688) bg_tb_trans_pane_cp02_ParamLimits

0xaf7a,	// (0x00057cb7) heading_imed_pane_ParamLimits

0x5bf2,	// (0x0005292f) listscroll_imed_pane_ParamLimits

0xbf71,	// (0x00058cae) popup_call2_audio_first_window_g5_ParamLimits

0xbf71,	// (0x00058cae) popup_call2_audio_first_window_g5

0x6185,	// (0x00052ec2) aid_size_touch_image3_arrow_left_ParamLimits

0x6185,	// (0x00052ec2) aid_size_touch_image3_arrow_left

0x61b1,	// (0x00052eee) aid_size_touch_image3_arrow_right_ParamLimits

0x61b1,	// (0x00052eee) aid_size_touch_image3_arrow_right

0xa2d6,	// (0x00057013) vid4_progress_pane_t3

0x5f05,	// (0x00052c42) main_hwr_training_symbol_option_pane_ParamLimits

0x5f05,	// (0x00052c42) main_hwr_training_symbol_option_pane

0xd592,	// (0x0005a2cf) popup_hwr_training_preview_window_ParamLimits

0xd592,	// (0x0005a2cf) popup_hwr_training_preview_window

0x5f25,	// (0x00052c62) hwr_training_navi_pane_g5_ParamLimits

0x5f25,	// (0x00052c62) hwr_training_navi_pane_g5

0xd724,	// (0x0005a461) popup_char_count_window

0xa522,	// (0x0005725f) bg_popup_sub_pane_cp20_ParamLimits

0x7193,	// (0x00053ed0) list_vitu2_match_list_pane_ParamLimits

0x71a2,	// (0x00053edf) vitu2_page_scroll_pane_ParamLimits

0x71a2,	// (0x00053edf) vitu2_page_scroll_pane

0xdc1d,	// (0x0005a95a) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdc1d,	// (0x0005a95a) list_single_hwr_training_symbol_option_pane

0xdc30,	// (0x0005a96d) list_single_hwr_training_symbol_option_pane_g1

0xdc38,	// (0x0005a975) list_single_hwr_training_symbol_option_pane_t1

0xdc46,	// (0x0005a983) bg_button_pane_cp023

0xdc4f,	// (0x0005a98c) bg_button_pane_cp024

0x7771,	// (0x000544ae) vitu2_page_scroll_pane_g1

0x7779,	// (0x000544b6) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0005c809) vitu2_page_scroll_pane_g

0x7781,	// (0x000544be) vitu2_page_scroll_pane_t1

0xcaa6,	// (0x000597e3) popup_char_count_window_g1

0xdc82,	// (0x0005a9bf) popup_char_count_window_g2

0xdc8b,	// (0x0005a9c8) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0005c80e) popup_char_count_window_g

0xdc94,	// (0x0005a9d1) popup_char_count_window_t1

0x97d1,	// (0x0005650e) main_vded2_pane

0xd291,	// (0x00059fce) aid_size_cell_imed_line

0xd29b,	// (0x00059fd8) grid_imed_line_width_pane

0xa1de,	// (0x00056f1b) vid4_indicators_pane_g4

0xdca2,	// (0x0005a9df) cell_imed_line_width_pane_ParamLimits

0xdca2,	// (0x0005a9df) cell_imed_line_width_pane

0xdcb6,	// (0x0005a9f3) cell_imed_line_width_pane_g1

0xd97d,	// (0x0005a6ba) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0005c815) cell_imed_line_width_pane_g

0x7790,	// (0x000544cd) main_vded2_pane_g1_ParamLimits

0x7790,	// (0x000544cd) main_vded2_pane_g1

0x77a6,	// (0x000544e3) main_vded2_pane_g2_ParamLimits

0x77a6,	// (0x000544e3) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0005c81a) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0005c81a) main_vded2_pane_g

0x77b8,	// (0x000544f5) vded2_slider_pane_ParamLimits

0x77b8,	// (0x000544f5) vded2_slider_pane

0x77c8,	// (0x00054505) aid_size_touch_vded2_end

0x77d2,	// (0x0005450f) aid_size_touch_vded2_playhead

0xdcbf,	// (0x0005a9fc) aid_size_touch_vded2_start

0xdcc7,	// (0x0005aa04) vded2_slider_bg_pane

0xdcd0,	// (0x0005aa0d) vded2_slider_pane_g1

0xdcd9,	// (0x0005aa16) vded2_slider_pane_g2

0x77dc,	// (0x00054519) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0005c81f) vded2_slider_pane_g

0xdce1,	// (0x0005aa1e) vded2_slider_bg_pane_g1

0xdcea,	// (0x0005aa27) vded2_slider_bg_pane_g2

0xdcf3,	// (0x0005aa30) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0005c826) vded2_slider_bg_pane_g

0x38e1,	// (0x0005061e) aid_postcard_touch_down_pane_ParamLimits

0x38e1,	// (0x0005061e) aid_postcard_touch_down_pane

0x38f7,	// (0x00050634) aid_postcard_touch_up_pane_ParamLimits

0x38f7,	// (0x00050634) aid_postcard_touch_up_pane

0x97d1,	// (0x0005650e) main_blid2_pane

0x9d1e,	// (0x00056a5b) popup_blid2_search_window

0x97d1,	// (0x0005650e) blid2_gps_pane

0x97d1,	// (0x0005650e) blid2_navig_pane

0x97d1,	// (0x0005650e) blid2_search_pane

0x97d1,	// (0x0005650e) blid2_tripm_pane

0x77e7,	// (0x00054524) blid2_search_pane_g1_ParamLimits

0x77e7,	// (0x00054524) blid2_search_pane_g1

0x7801,	// (0x0005453e) blid2_search_pane_t1_ParamLimits

0x7801,	// (0x0005453e) blid2_search_pane_t1

0x7813,	// (0x00054550) aid_size_cell_blid2_gps_ParamLimits

0x7813,	// (0x00054550) aid_size_cell_blid2_gps

0x782b,	// (0x00054568) blid2_gps_pane_g1_ParamLimits

0x782b,	// (0x00054568) blid2_gps_pane_g1

0x783f,	// (0x0005457c) grid_blid2_satellite_pane_ParamLimits

0x783f,	// (0x0005457c) grid_blid2_satellite_pane

0x7859,	// (0x00054596) blid2_navig_pane_g1_ParamLimits

0x7859,	// (0x00054596) blid2_navig_pane_g1

0x7865,	// (0x000545a2) blid2_navig_pane_t1_ParamLimits

0x7865,	// (0x000545a2) blid2_navig_pane_t1

0x7880,	// (0x000545bd) blid2_navig_pane_t2_ParamLimits

0x7880,	// (0x000545bd) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0005c82d) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0005c82d) blid2_navig_pane_t

0x789b,	// (0x000545d8) blid2_navig_ring_pane_ParamLimits

0x789b,	// (0x000545d8) blid2_navig_ring_pane

0x78b4,	// (0x000545f1) blid2_speed_pane_ParamLimits

0x78b4,	// (0x000545f1) blid2_speed_pane

0x78c0,	// (0x000545fd) blid2_tripm_pane_g1_ParamLimits

0x78c0,	// (0x000545fd) blid2_tripm_pane_g1

0x78d9,	// (0x00054616) blid2_tripm_pane_g2_ParamLimits

0x78d9,	// (0x00054616) blid2_tripm_pane_g2

0x78ed,	// (0x0005462a) blid2_tripm_pane_g3_ParamLimits

0x78ed,	// (0x0005462a) blid2_tripm_pane_g3

0x7901,	// (0x0005463e) blid2_tripm_pane_g4_ParamLimits

0x7901,	// (0x0005463e) blid2_tripm_pane_g4

0x7915,	// (0x00054652) blid2_tripm_pane_g5_ParamLimits

0x7915,	// (0x00054652) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0005c832) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0005c832) blid2_tripm_pane_g

0x793b,	// (0x00054678) blid2_tripm_pane_t1_ParamLimits

0x793b,	// (0x00054678) blid2_tripm_pane_t1

0x7956,	// (0x00054693) blid2_tripm_pane_t2_ParamLimits

0x7956,	// (0x00054693) blid2_tripm_pane_t2

0x796f,	// (0x000546ac) blid2_tripm_pane_t3_ParamLimits

0x796f,	// (0x000546ac) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0005c83f) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0005c83f) blid2_tripm_pane_t

0x79b6,	// (0x000546f3) cell_blid2_satellite_pane_ParamLimits

0x79b6,	// (0x000546f3) cell_blid2_satellite_pane

0x79d4,	// (0x00054711) cell_blid2_satellite_pane_g1

0xdcfc,	// (0x0005aa39) cell_blid2_satellite_pane_t1

0xcd5f,	// (0x00059a9c) blid2_speed_pane_g1

0xdd0a,	// (0x0005aa47) blid2_speed_pane_t1

0xdd18,	// (0x0005aa55) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0005c848) blid2_speed_pane_t

0xcd5f,	// (0x00059a9c) blid2_navig_ring_pane_g1

0x79dd,	// (0x0005471a) blid2_navig_ring_pane_g2

0x79e5,	// (0x00054722) blid2_navig_ring_pane_g3

0x79ed,	// (0x0005472a) blid2_navig_ring_pane_g4

0x79f5,	// (0x00054732) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0005c84d) blid2_navig_ring_pane_g

0x97d1,	// (0x0005650e) bg_popup_window_pane_cp011

0xdd26,	// (0x0005aa63) popup_blid2_search_window_g1

0xdd2e,	// (0x0005aa6b) popup_blid2_search_window_t1

0xdd3c,	// (0x0005aa79) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0005c858) popup_blid2_search_window_t

0xac21,	// (0x0005795e) main_browser_pane_g1

0xa90b,	// (0x00057648) main_browser_pane_ParamLimits

0xa522,	// (0x0005725f) bg_button_pane_cp011_ParamLimits

0x6a17,	// (0x00053754) cell_vitu2_function_pane_g1_ParamLimits

0xc94b,	// (0x00059688) bg_popup_sub_pane_cp22_ParamLimits

0x05ff,	// (0x0004d33c) input_focus_pane_cp08_ParamLimits

0x7325,	// (0x00054062) popup_vitu2_query_button_pane_ParamLimits

0x7325,	// (0x00054062) popup_vitu2_query_button_pane

0x0616,	// (0x0004d353) popup_vitu2_query_input_button_pane

0xd9d4,	// (0x0005a711) popup_vitu2_query_window_g1_ParamLimits

0x0620,	// (0x0004d35d) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0005c759) popup_vitu2_query_window_g_ParamLimits

0x97d1,	// (0x0005650e) bg_button_pane_cp026

0x79fd,	// (0x0005473a) popup_vitu2_query_input_button_pane_g1

0x97d1,	// (0x0005650e) bg_button_pane_cp025

0xdd4a,	// (0x0005aa87) popup_vitu2_query_button_pane_t1

0x4f77,	// (0x00051cb4) main_mp3_pane_t6

0x4f85,	// (0x00051cc2) popup_slider_window_cp01

0xa142,	// (0x00056e7f) cam4_battery_pane

0xa19b,	// (0x00056ed8) cam4_battery_pane_cp02

0xa281,	// (0x00056fbe) cam4_battery_pane_cp01

0xa281,	// (0x00056fbe) cam4_battery_pane_cp03

0xcd5f,	// (0x00059a9c) cam4_battery_pane_g1

0xd985,	// (0x0005a6c2) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0005c85d) cam4_battery_pane_g

0xcc1f,	// (0x0005995c) popup_blid_sat_info2_window_t11

0xb396,	// (0x000580d3) aid_size_touch_mv_arrow_left_ParamLimits

0xb3bf,	// (0x000580fc) aid_size_touch_mv_arrow_right_ParamLimits

0xb41d,	// (0x0005815a) navi_pane_g1_ParamLimits

0xb429,	// (0x00058166) navi_pane_g2_ParamLimits

0xb457,	// (0x00058194) navi_pane_g3_ParamLimits

0xf3e1,	// (0x0005c11e) navi_pane_g_ParamLimits

0x3399,	// (0x000500d6) navi_pane_mv_t1_ParamLimits

0x5bfe,	// (0x0005293b) grid_imed_effect_pane_ParamLimits

0x20f6,	// (0x0004ee33) aid_placing_vt_slider_lsc

0xab70,	// (0x000578ad) aid_placing_vt_slider_prt

0xa522,	// (0x0005725f) bg_tb_trans_pane_cp01_ParamLimits

0xcee2,	// (0x00059c1f) popup_image_details_window_g1_ParamLimits

0xcef5,	// (0x00059c32) popup_image_details_window_g2_ParamLimits

0xcf0a,	// (0x00059c47) popup_image_details_window_g3_ParamLimits

0xcf0a,	// (0x00059c47) popup_image_details_window_g3

0xf714,	// (0x0005c451) popup_image_details_window_g_ParamLimits

0xcf1e,	// (0x00059c5b) popup_image_details_window_t1_ParamLimits

0xcf30,	// (0x00059c6d) popup_image_details_window_t2_ParamLimits

0xcf49,	// (0x00059c86) popup_image_details_window_t3_ParamLimits

0xcf5d,	// (0x00059c9a) popup_image_details_window_t4_ParamLimits

0xcf78,	// (0x00059cb5) popup_image_details_window_t5_ParamLimits

0xf71b,	// (0x0005c458) popup_image_details_window_t_ParamLimits

0x7607,	// (0x00054344) cl_header_name_pane_ParamLimits

0x7607,	// (0x00054344) cl_header_name_pane

0x7a05,	// (0x00054742) cl_header_name_pane_t1_ParamLimits

0x7a05,	// (0x00054742) cl_header_name_pane_t1

0x7a26,	// (0x00054763) cl_header_name_pane_t2_ParamLimits

0x7a26,	// (0x00054763) cl_header_name_pane_t2

0x7a68,	// (0x000547a5) cl_header_name_pane_t3_ParamLimits

0x7a68,	// (0x000547a5) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0005c862) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0005c862) cl_header_name_pane_t

0xb4e6,	// (0x00058223) navi_pane_mv_g2_ParamLimits

0xd6fe,	// (0x0005a43b) field_vitu2_entry_pane_g1_ParamLimits

0xd70a,	// (0x0005a447) field_vitu2_entry_pane_g2_ParamLimits

0xd716,	// (0x0005a453) field_vitu2_entry_pane_g3_ParamLimits

0xd716,	// (0x0005a453) field_vitu2_entry_pane_g3

0xf91b,	// (0x0005c658) field_vitu2_entry_pane_g_ParamLimits

0xa213,	// (0x00056f50) cell_vitu2_itu_pane_g1_ParamLimits

0x69ab,	// (0x000536e8) cell_vitu2_itu_pane_g2_ParamLimits

0x69ab,	// (0x000536e8) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0005c664) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0005c664) cell_vitu2_itu_pane_g

0xa522,	// (0x0005725f) bg_vkb2_func_pane_cp05_ParamLimits

0xa522,	// (0x0005725f) bg_vkb2_func_pane_cp05

0xa522,	// (0x0005725f) bg_vkb2_func_pane_cp03

0xa522,	// (0x0005725f) bg_vkb2_func_pane_cp04

0xa522,	// (0x0005725f) bg_vkb2_func_pane_cp10_ParamLimits

0xa522,	// (0x0005725f) bg_vkb2_func_pane_cp10

0x073d,	// (0x0004d47a) bg_vkb2_func_pane_cp08

0x75b1,	// (0x000542ee) bg_vkb2_func_pane_cp06

0x75bf,	// (0x000542fc) bg_vkb2_func_pane_cp07

0xdc58,	// (0x0005a995) bg_vkb2_func_pane_cp11_ParamLimits

0xdc58,	// (0x0005a995) bg_vkb2_func_pane_cp11

0xdc6d,	// (0x0005a9aa) bg_vkb2_func_pane_cp12_ParamLimits

0xdc6d,	// (0x0005a9aa) bg_vkb2_func_pane_cp12

0x97d1,	// (0x0005650e) bg_vkb2_func_pane_cp09

0xd736,	// (0x0005a473) bg_vkb2_func_pane_g1

0xad32,	// (0x00057a6f) bg_vkb2_func_pane_g2

0xd73e,	// (0x0005a47b) bg_vkb2_func_pane_g3

0xd746,	// (0x0005a483) bg_vkb2_func_pane_g4

0xd95a,	// (0x0005a697) bg_vkb2_func_pane_g5

0xd75e,	// (0x0005a49b) bg_vkb2_func_pane_g6

0xd766,	// (0x0005a4a3) bg_vkb2_func_pane_g7

0xd756,	// (0x0005a493) bg_vkb2_func_pane_g8

0xad12,	// (0x00057a4f) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0005c869) bg_vkb2_func_pane_g

0x7929,	// (0x00054666) blid2_tripm_pane_g6_ParamLimits

0x7929,	// (0x00054666) blid2_tripm_pane_g6

0xd650,	// (0x0005a38d) mp4_progress_pane_g1

0x79a2,	// (0x000546df) blid2_tripm_values_pane_ParamLimits

0x79a2,	// (0x000546df) blid2_tripm_values_pane

0x7a99,	// (0x000547d6) blid2_tripm_values_pane_t1

0x7aa7,	// (0x000547e4) blid2_tripm_values_pane_t2

0x7ab5,	// (0x000547f2) blid2_tripm_values_pane_t3

0x7ac3,	// (0x00054800) blid2_tripm_values_pane_t4

0x7ad1,	// (0x0005480e) blid2_tripm_values_pane_t5

0x7adf,	// (0x0005481c) blid2_tripm_values_pane_t6

0x7aed,	// (0x0005482a) blid2_tripm_values_pane_t7

0x7afb,	// (0x00054838) blid2_tripm_values_pane_t8

0x7b09,	// (0x00054846) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0005c87c) blid2_tripm_values_pane_t

0x2138,	// (0x0004ee75) call_video_pane_t1_ParamLimits

0x2156,	// (0x0004ee93) call_video_pane_t2_ParamLimits

0xf26a,	// (0x0005bfa7) call_video_pane_t_ParamLimits

0x03f6,	// (0x0004d133) msg_header_pane_g1_ParamLimits

0xb6ce,	// (0x0005840b) msg_header_pane_g2_ParamLimits

0xb6ce,	// (0x0005840b) msg_header_pane_g2

0x0001,

0xf484,	// (0x0005c1c1) msg_header_pane_g_ParamLimits

0xf484,	// (0x0005c1c1) msg_header_pane_g

0xa90b,	// (0x00057648) main_clock2_pane_ParamLimits

0x58ff,	// (0x0005263c) grid_clock2_toolbar_pane_ParamLimits

0x58ff,	// (0x0005263c) grid_clock2_toolbar_pane

0x58ff,	// (0x0005263c) listscroll_clock2_pane_ParamLimits

0x58ff,	// (0x0005263c) listscroll_clock2_pane

0x59e3,	// (0x00052720) main_clock2_pane_t3_ParamLimits

0x59e3,	// (0x00052720) main_clock2_pane_t3

0x5a07,	// (0x00052744) main_clock2_pane_t4_ParamLimits

0x5a07,	// (0x00052744) main_clock2_pane_t4

0xdd58,	// (0x0005aa95) cell_clock2_toolbar_pane

0xdd60,	// (0x0005aa9d) cell_clock2_toolbar_pane_cp01

0xdd60,	// (0x0005aa9d) cell_clock2_toolbar_pane_cp02

0xdd68,	// (0x0005aaa5) cell_clock2_toolbar_pane_cp03

0xdd70,	// (0x0005aaad) list_clock2_pane

0xb30c,	// (0x00058049) scroll_pane_cp10

0xdd78,	// (0x0005aab5) list_single_clock2_pane_ParamLimits

0xdd78,	// (0x0005aab5) list_single_clock2_pane

0xaad9,	// (0x00057816) list_highlight_pane_cp08

0xdd85,	// (0x0005aac2) list_single_clock2_pane_t1

0xdd93,	// (0x0005aad0) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0005c88f) list_single_clock2_pane_t

0x97d1,	// (0x0005650e) bg_button_pane_cp10

0xdda1,	// (0x0005aade) cell_clock2_toolbar_pane_g1

0x386d,	// (0x000505aa) aid_main_viewer_pane_g1_ParamLimits

0x386d,	// (0x000505aa) aid_main_viewer_pane_g1

0x387b,	// (0x000505b8) aid_main_viewer_pane_g2_ParamLimits

0x387b,	// (0x000505b8) aid_main_viewer_pane_g2

0x3889,	// (0x000505c6) aid_main_viewer_pane_g3_ParamLimits

0x3889,	// (0x000505c6) aid_main_viewer_pane_g3

0x3898,	// (0x000505d5) aid_main_viewer_pane_g4_ParamLimits

0x3898,	// (0x000505d5) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x0005c1d2) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x0005c1d2) aid_main_viewer_pane_g

0x419e,	// (0x00050edb) main_calc_pane_ParamLimits

0x41b2,	// (0x00050eef) main_dialer2_pane_ParamLimits

0x97d1,	// (0x0005650e) main_cam6_pane

0x97d1,	// (0x0005650e) main_vid6_pane

0x590b,	// (0x00052648) listscroll_gen_pane_cp06_ParamLimits

0x590b,	// (0x00052648) listscroll_gen_pane_cp06

0x5a2a,	// (0x00052767) main_clock2_pane_t5_ParamLimits

0x5a2a,	// (0x00052767) main_clock2_pane_t5

0x5a88,	// (0x000527c5) aid_call2_pane_cp10_ParamLimits

0x5a9a,	// (0x000527d7) aid_call_pane_cp10_ParamLimits

0xb38a,	// (0x000580c7) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb38a,	// (0x000580c7) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5aac,	// (0x000527e9) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5aac,	// (0x000527e9) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb38a,	// (0x000580c7) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d0,	// (0x0005c50d) popup_clock_analogue_window_cp10_g_ParamLimits

0x5ac2,	// (0x000527ff) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6132,	// (0x00052e6f) cell_dialer2_keypad_pane_g2_ParamLimits

0x6132,	// (0x00052e6f) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0005c5f7) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0005c5f7) cell_dialer2_keypad_pane_g

0x614e,	// (0x00052e8b) cell_dialer2_keypad_pane_t1

0x6d34,	// (0x00053a71) main_cset_text2_pane_ParamLimits

0x6d34,	// (0x00053a71) main_cset_text2_pane

0xdbc0,	// (0x0005a8fd) area_vitu2_query_pane_g1_ParamLimits

0x0704,	// (0x0004d441) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0005c7ac) area_vitu2_query_pane_g_ParamLimits

0x758d,	// (0x000542ca) area_vitu2_query_pane_t7_ParamLimits

0x758d,	// (0x000542ca) area_vitu2_query_pane_t7

0x75b1,	// (0x000542ee) bg_button_pane_cp018_ParamLimits

0x75bf,	// (0x000542fc) bg_button_pane_cp021_ParamLimits

0x073d,	// (0x0004d47a) bg_button_pane_cp022_ParamLimits

0x073d,	// (0x0004d47a) bg_vkb2_func_pane_cp08_ParamLimits

0x75b1,	// (0x000542ee) bg_vkb2_func_pane_cp06_ParamLimits

0x75bf,	// (0x000542fc) bg_vkb2_func_pane_cp07_ParamLimits

0x074c,	// (0x0004d489) input_focus_pane_cp09_ParamLimits

0xa2eb,	// (0x00057028) cam6_autofocus_pane_ParamLimits

0xa2eb,	// (0x00057028) cam6_autofocus_pane

0x7b17,	// (0x00054854) cam6_image_uncrop_pane_ParamLimits

0x7b17,	// (0x00054854) cam6_image_uncrop_pane

0x7b26,	// (0x00054863) cam6_indi_pane_ParamLimits

0x7b26,	// (0x00054863) cam6_indi_pane

0x7b3c,	// (0x00054879) cam6_mode_pane_ParamLimits

0x7b3c,	// (0x00054879) cam6_mode_pane

0x7b4e,	// (0x0005488b) cam6_timer_pane_ParamLimits

0x7b4e,	// (0x0005488b) cam6_timer_pane

0x7b5a,	// (0x00054897) cam6_zoom_pane_ParamLimits

0x7b5a,	// (0x00054897) cam6_zoom_pane

0x7b66,	// (0x000548a3) cam6_mode_pane_g1_ParamLimits

0x7b66,	// (0x000548a3) cam6_mode_pane_g1

0x7b76,	// (0x000548b3) cam6_mode_pane_g2_ParamLimits

0x7b76,	// (0x000548b3) cam6_mode_pane_g2

0x7b86,	// (0x000548c3) cam6_mode_pane_g3_ParamLimits

0x7b86,	// (0x000548c3) cam6_mode_pane_g3

0x7b96,	// (0x000548d3) cam6_mode_pane_g4_ParamLimits

0x7b96,	// (0x000548d3) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0005c894) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0005c894) cam6_mode_pane_g

0xdda9,	// (0x0005aae6) bg_tb_trans_pane_cp08_ParamLimits

0xdda9,	// (0x0005aae6) bg_tb_trans_pane_cp08

0xddb7,	// (0x0005aaf4) cam6_battery_pane_ParamLimits

0xddb7,	// (0x0005aaf4) cam6_battery_pane

0xddcd,	// (0x0005ab0a) cam6_indi_pane_g1_ParamLimits

0xddcd,	// (0x0005ab0a) cam6_indi_pane_g1

0xdddf,	// (0x0005ab1c) cam6_indi_pane_g2_ParamLimits

0xdddf,	// (0x0005ab1c) cam6_indi_pane_g2

0xddf1,	// (0x0005ab2e) cam6_indi_pane_g3_ParamLimits

0xddf1,	// (0x0005ab2e) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0005c89d) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0005c89d) cam6_indi_pane_g

0xde03,	// (0x0005ab40) cam6_indi_pane_t1_ParamLimits

0xde03,	// (0x0005ab40) cam6_indi_pane_t1

0x7ba6,	// (0x000548e3) cam6_autofocus_pane_g1

0x7bae,	// (0x000548eb) cam6_autofocus_pane_g2

0x7bb6,	// (0x000548f3) cam6_autofocus_pane_g3

0x7bbe,	// (0x000548fb) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0005c8a4) cam6_autofocus_pane_g

0xde29,	// (0x0005ab66) cam6_timer_pane_g1

0xde31,	// (0x0005ab6e) cam6_timer_pane_t1

0xde3f,	// (0x0005ab7c) cam6_zoom_cont_pane

0xde47,	// (0x0005ab84) cam6_zoom_pane_g1

0xde4f,	// (0x0005ab8c) cam6_zoom_pane_g2

0x7bc6,	// (0x00054903) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0005c8ad) cam6_zoom_pane_g

0xcd5f,	// (0x00059a9c) cam6_battery_pane_g1

0xcd5f,	// (0x00059a9c) cam6_battery_pane_g2

0x0001,

0xf6d8,	// (0x0005c415) cam6_battery_pane_g

0xde57,	// (0x0005ab94) cam6_zoom_cont_pane_g1

0xde60,	// (0x0005ab9d) cam6_zoom_cont_pane_g2

0xde69,	// (0x0005aba6) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0005c8b4) cam6_zoom_cont_pane_g

0x7be3,	// (0x00054920) cam6_mode_pane_cp_ParamLimits

0x7be3,	// (0x00054920) cam6_mode_pane_cp

0x7b5a,	// (0x00054897) cam6_zoom_pane_cp_ParamLimits

0x7b5a,	// (0x00054897) cam6_zoom_pane_cp

0x7bf5,	// (0x00054932) vid6_image_uncrop_cif_pane_ParamLimits

0x7bf5,	// (0x00054932) vid6_image_uncrop_cif_pane

0x7c05,	// (0x00054942) vid6_image_uncrop_nhd_pane_ParamLimits

0x7c05,	// (0x00054942) vid6_image_uncrop_nhd_pane

0x7b17,	// (0x00054854) vid6_image_uncrop_vga_pane_ParamLimits

0x7b17,	// (0x00054854) vid6_image_uncrop_vga_pane

0x7c14,	// (0x00054951) vid6_image_uncrop_wvga_pane_ParamLimits

0x7c14,	// (0x00054951) vid6_image_uncrop_wvga_pane

0x7c23,	// (0x00054960) vid6_indi_pane_ParamLimits

0x7c23,	// (0x00054960) vid6_indi_pane

0xdda9,	// (0x0005aae6) bg_tb_trans_pane_cp09_ParamLimits

0xdda9,	// (0x0005aae6) bg_tb_trans_pane_cp09

0xde81,	// (0x0005abbe) cam6_battery_pane_cp_ParamLimits

0xde81,	// (0x0005abbe) cam6_battery_pane_cp

0xde8d,	// (0x0005abca) vid6_indi_pane_g1_ParamLimits

0xde8d,	// (0x0005abca) vid6_indi_pane_g1

0xde9f,	// (0x0005abdc) vid6_indi_pane_g2_ParamLimits

0xde9f,	// (0x0005abdc) vid6_indi_pane_g2

0xdeb1,	// (0x0005abee) vid6_indi_pane_g3_ParamLimits

0xdeb1,	// (0x0005abee) vid6_indi_pane_g3

0xdec6,	// (0x0005ac03) vid6_indi_pane_g4_ParamLimits

0xdec6,	// (0x0005ac03) vid6_indi_pane_g4

0xdedb,	// (0x0005ac18) vid6_indi_pane_g5_ParamLimits

0xdedb,	// (0x0005ac18) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0005c8bb) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0005c8bb) vid6_indi_pane_g

0xdef5,	// (0x0005ac32) vid6_indi_pane_t1_ParamLimits

0xdef5,	// (0x0005ac32) vid6_indi_pane_t1

0xdf0b,	// (0x0005ac48) vid6_indi_pane_t2_ParamLimits

0xdf0b,	// (0x0005ac48) vid6_indi_pane_t2

0xdf33,	// (0x0005ac70) vid6_indi_pane_t3_ParamLimits

0xdf33,	// (0x0005ac70) vid6_indi_pane_t3

0xdf5b,	// (0x0005ac98) vid6_indi_pane_t4_ParamLimits

0xdf5b,	// (0x0005ac98) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0005c8c6) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0005c8c6) vid6_indi_pane_t

0xdf7f,	// (0x0005acbc) wait_bar_pane_cp08

0x7c3b,	// (0x00054978) main_cset_text2_pane_t1_ParamLimits

0x7c3b,	// (0x00054978) main_cset_text2_pane_t1

0x7bce,	// (0x0005490b) listscroll_gen_pane_cp06_t1_ParamLimits

0x7bce,	// (0x0005490b) listscroll_gen_pane_cp06_t1

0x97d1,	// (0x0005650e) main_cam6_set_pane

0xcfc2,	// (0x00059cff) bg_tb_trans_pane_cp06_ParamLimits

0xa14a,	// (0x00056e87) cam4_indicators_pane_g1_ParamLimits

0xa15b,	// (0x00056e98) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0005c634) cam4_indicators_pane_g_ParamLimits

0xa179,	// (0x00056eb6) cam4_indicators_pane_t1_ParamLimits

0xa522,	// (0x0005725f) bg_tb_trans_pane_cp07_ParamLimits

0xa1a5,	// (0x00056ee2) vid4_indicators_pane_g1_ParamLimits

0xa1b9,	// (0x00056ef6) vid4_indicators_pane_g2_ParamLimits

0xa1cd,	// (0x00056f0a) vid4_indicators_pane_g3_ParamLimits

0xa1de,	// (0x00056f1b) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0005c646) vid4_indicators_pane_g_ParamLimits

0xa1fc,	// (0x00056f39) vid4_indicators_pane_t1_ParamLimits

0xa289,	// (0x00056fc6) vid4_progress_pane_g1_ParamLimits

0xa299,	// (0x00056fd6) vid4_progress_pane_g2_ParamLimits

0x76f7,	// (0x00054434) vid4_progress_pane_g3_ParamLimits

0xa2a9,	// (0x00056fe6) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0005c7f7) vid4_progress_pane_g_ParamLimits

0x7709,	// (0x00054446) vid4_progress_pane_t1_ParamLimits

0xa2c1,	// (0x00056ffe) vid4_progress_pane_t2_ParamLimits

0xa2d6,	// (0x00057013) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0005c802) vid4_progress_pane_t_ParamLimits

0x7721,	// (0x0005445e) wait_bar_pane_cp07_ParamLimits

0x7c58,	// (0x00054995) main_cam6_set_pane_g2_ParamLimits

0x7c58,	// (0x00054995) main_cam6_set_pane_g2

0x7c7c,	// (0x000549b9) main_cset6_listscroll_pane_ParamLimits

0x7c7c,	// (0x000549b9) main_cset6_listscroll_pane

0x7c9c,	// (0x000549d9) main_cset6_slider_pane_ParamLimits

0x7c9c,	// (0x000549d9) main_cset6_slider_pane

0x7cb2,	// (0x000549ef) main_cset6_text2_pane_ParamLimits

0x7cb2,	// (0x000549ef) main_cset6_text2_pane

0xdf8e,	// (0x0005accb) main_cset6_text_pane

0xdf96,	// (0x0005acd3) main_cset_list_pane_copy1_ParamLimits

0xdf96,	// (0x0005acd3) main_cset_list_pane_copy1

0xdfa6,	// (0x0005ace3) scroll_pane_cp028_copy1

0x7cc0,	// (0x000549fd) cset_list_set_pane_copy1

0x7cd1,	// (0x00054a0e) aid_position_infowindow_above_copy1

0x7cd9,	// (0x00054a16) aid_position_infowindow_below_copy1

0x076f,	// (0x0004d4ac) cset_list_set_pane_g1_copy1

0x0777,	// (0x0004d4b4) cset_list_set_pane_g3_copy1_ParamLimits

0x0777,	// (0x0004d4b4) cset_list_set_pane_g3_copy1

0x0786,	// (0x0004d4c3) cset_list_set_pane_t1_copy1_ParamLimits

0x0786,	// (0x0004d4c3) cset_list_set_pane_t1_copy1

0xa522,	// (0x0005725f) list_highlight_pane_cp021_copy1_ParamLimits

0xa522,	// (0x0005725f) list_highlight_pane_cp021_copy1

0xdfaf,	// (0x0005acec) cset6_slider_pane_ParamLimits

0xdfaf,	// (0x0005acec) cset6_slider_pane

0xdfdb,	// (0x0005ad18) main_cset6_slider_pane_g1_ParamLimits

0xdfdb,	// (0x0005ad18) main_cset6_slider_pane_g1

0x7ce1,	// (0x00054a1e) main_cset6_slider_pane_g2_ParamLimits

0x7ce1,	// (0x00054a1e) main_cset6_slider_pane_g2

0xe003,	// (0x0005ad40) main_cset6_slider_pane_g3_ParamLimits

0xe003,	// (0x0005ad40) main_cset6_slider_pane_g3

0x7d09,	// (0x00054a46) main_cset6_slider_pane_g4_ParamLimits

0x7d09,	// (0x00054a46) main_cset6_slider_pane_g4

0x7d15,	// (0x00054a52) main_cset6_slider_pane_g5_ParamLimits

0x7d15,	// (0x00054a52) main_cset6_slider_pane_g5

0xd865,	// (0x0005a5a2) main_cset6_slider_pane_g7_ParamLimits

0xd865,	// (0x0005a5a2) main_cset6_slider_pane_g7

0xd871,	// (0x0005a5ae) main_cset6_slider_pane_g8_ParamLimits

0xd871,	// (0x0005a5ae) main_cset6_slider_pane_g8

0x6de1,	// (0x00053b1e) main_cset6_slider_pane_g9_ParamLimits

0x6de1,	// (0x00053b1e) main_cset6_slider_pane_g9

0x6ded,	// (0x00053b2a) main_cset6_slider_pane_g10_ParamLimits

0x6ded,	// (0x00053b2a) main_cset6_slider_pane_g10

0x6df9,	// (0x00053b36) main_cset6_slider_pane_g11_ParamLimits

0x6df9,	// (0x00053b36) main_cset6_slider_pane_g11

0x6e05,	// (0x00053b42) main_cset6_slider_pane_g12_ParamLimits

0x6e05,	// (0x00053b42) main_cset6_slider_pane_g12

0x6e11,	// (0x00053b4e) main_cset6_slider_pane_g13_ParamLimits

0x6e11,	// (0x00053b4e) main_cset6_slider_pane_g13

0x6e1d,	// (0x00053b5a) main_cset6_slider_pane_g14_ParamLimits

0x6e1d,	// (0x00053b5a) main_cset6_slider_pane_g14

0x7d21,	// (0x00054a5e) main_cset6_slider_pane_g15_ParamLimits

0x7d21,	// (0x00054a5e) main_cset6_slider_pane_g15

0x6e41,	// (0x00053b7e) main_cset6_slider_pane_g16_ParamLimits

0x6e41,	// (0x00053b7e) main_cset6_slider_pane_g16

0x6e4d,	// (0x00053b8a) main_cset6_slider_pane_g17_ParamLimits

0x6e4d,	// (0x00053b8a) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0005c8cf) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0005c8cf) main_cset6_slider_pane_g

0xe00f,	// (0x0005ad4c) main_cset6_slider_pane_t1_ParamLimits

0xe00f,	// (0x0005ad4c) main_cset6_slider_pane_t1

0x7d51,	// (0x00054a8e) main_cset6_slider_pane_t2_ParamLimits

0x7d51,	// (0x00054a8e) main_cset6_slider_pane_t2

0x7d7c,	// (0x00054ab9) main_cset6_slider_pane_t3_ParamLimits

0x7d7c,	// (0x00054ab9) main_cset6_slider_pane_t3

0x7da7,	// (0x00054ae4) main_cset6_slider_pane_t4_ParamLimits

0x7da7,	// (0x00054ae4) main_cset6_slider_pane_t4

0x7dd2,	// (0x00054b0f) main_cset6_slider_pane_t5_ParamLimits

0x7dd2,	// (0x00054b0f) main_cset6_slider_pane_t5

0xe050,	// (0x0005ad8d) main_cset6_slider_pane_t7_ParamLimits

0xe050,	// (0x0005ad8d) main_cset6_slider_pane_t7

0x7dfd,	// (0x00054b3a) main_cset6_slider_pane_t8_ParamLimits

0x7dfd,	// (0x00054b3a) main_cset6_slider_pane_t8

0x7e21,	// (0x00054b5e) main_cset6_slider_pane_t9_ParamLimits

0x7e21,	// (0x00054b5e) main_cset6_slider_pane_t9

0x7e45,	// (0x00054b82) main_cset6_slider_pane_t10_ParamLimits

0x7e45,	// (0x00054b82) main_cset6_slider_pane_t10

0x7e69,	// (0x00054ba6) main_cset6_slider_pane_t11_ParamLimits

0x7e69,	// (0x00054ba6) main_cset6_slider_pane_t11

0xe086,	// (0x0005adc3) main_cset6_slider_pane_t14_ParamLimits

0xe086,	// (0x0005adc3) main_cset6_slider_pane_t14

0xe0bf,	// (0x0005adfc) main_cset6_slider_pane_t15_ParamLimits

0xe0bf,	// (0x0005adfc) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0005c8f4) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0005c8f4) main_cset6_slider_pane_t

0xd9a1,	// (0x0005a6de) cset_slider_pane_g1_copy1

0xd9aa,	// (0x0005a6e7) cset_slider_pane_g2_copy1

0xd9b3,	// (0x0005a6f0) cset_slider_pane_g3_copy1

0x97d1,	// (0x0005650e) bg_popup_sub_pane_cp011_copy1

0xe0f8,	// (0x0005ae35) main_cset_text_pane_g1_copy1

0xd9e8,	// (0x0005a725) main_cset_text_pane_t1_copy1

0xd9f6,	// (0x0005a733) main_cset_text_pane_t2_copy1

0xda04,	// (0x0005a741) main_cset_text_pane_t3_copy1

0xda12,	// (0x0005a74f) main_cset_text_pane_t4_copy1

0xda20,	// (0x0005a75d) main_cset_text_pane_t5_copy1

0xe100,	// (0x0005ae3d) main_cset_text_pane_t6_copy1

0xe10e,	// (0x0005ae4b) main_cset_text_pane_t7_copy1

0x7c3b,	// (0x00054978) main_cset_text2_pane_t1_copy1

0xa522,	// (0x0005725f) main_ncimui_pane

0x43fc,	// (0x00051139) popup_query_ncimui_window_ParamLimits

0x43fc,	// (0x00051139) popup_query_ncimui_window

0x511b,	// (0x00051e58) field_cale_ev2_pane_g4_ParamLimits

0x511b,	// (0x00051e58) field_cale_ev2_pane_g4

0x6012,	// (0x00052d4f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6012,	// (0x00052d4f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf891,	// (0x0005c5ce) cell_video_dialer_keypad_pane_g_ParamLimits

0xf891,	// (0x0005c5ce) cell_video_dialer_keypad_pane_g

0x602a,	// (0x00052d67) cell_video_dialer_keypad_pane_t1

0x97d1,	// (0x0005650e) bg_popup_window_pane_cp012

0xb1cb,	// (0x00057f08) heading_pane_cp06

0xe13a,	// (0x0005ae77) ncim_query_content_pane

0x97d1,	// (0x0005650e) bg_popup_heading_pane_cp01

0xe142,	// (0x0005ae7f) ncim_heading_pane_t1

0xe150,	// (0x0005ae8d) ncim_indicator_popup_pane

0xe162,	// (0x0005ae9f) ncim_query_button_pane

0xe176,	// (0x0005aeb3) ncim_query_content_pane_t1

0xe188,	// (0x0005aec5) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0005c938) ncim_query_content_pane_t

0xe1c2,	// (0x0005aeff) ncim_query_list_pane

0xe1d4,	// (0x0005af11) ncim_query_popup_pane

0xe150,	// (0x0005ae8d) ncim_indicator_popup_pane_ParamLimits

0x7fb6,	// (0x00054cf3) ncim_query_content_pane_g1_ParamLimits

0x7fb6,	// (0x00054cf3) ncim_query_content_pane_g1

0xe176,	// (0x0005aeb3) ncim_query_content_pane_t1_ParamLimits

0xe188,	// (0x0005aec5) ncim_query_content_pane_t2_ParamLimits

0x7fc2,	// (0x00054cff) ncim_query_content_pane_t3_ParamLimits

0x7fc2,	// (0x00054cff) ncim_query_content_pane_t3

0x7fea,	// (0x00054d27) ncim_query_content_pane_t4_ParamLimits

0x7fea,	// (0x00054d27) ncim_query_content_pane_t4

0x8012,	// (0x00054d4f) ncim_query_content_pane_t5_ParamLimits

0x8012,	// (0x00054d4f) ncim_query_content_pane_t5

0xe19a,	// (0x0005aed7) ncim_query_content_pane_t6_ParamLimits

0xe19a,	// (0x0005aed7) ncim_query_content_pane_t6

0xfbfb,	// (0x0005c938) ncim_query_content_pane_t_ParamLimits

0xe1c2,	// (0x0005aeff) ncim_query_list_pane_ParamLimits

0xe1d4,	// (0x0005af11) ncim_query_popup_pane_ParamLimits

0xe1e8,	// (0x0005af25) wait_bar_pane_cp04

0x97d1,	// (0x0005650e) input_focus_pane_cp011

0xe1f0,	// (0x0005af2d) ncim_query_popup_pane_t1

0xe1fe,	// (0x0005af3b) ncim_list_query_list_pane_ParamLimits

0xe1fe,	// (0x0005af3b) ncim_list_query_list_pane

0x97d1,	// (0x0005650e) bg_button_pane_cp027

0xe20b,	// (0x0005af48) ncim_query_button_pane_g1

0x97d1,	// (0x0005650e) list_highlight_pane_cp012

0xe215,	// (0x0005af52) ncim_list_query_list_pane_g1

0xe21d,	// (0x0005af5a) ncim_list_query_list_pane_t1

0xa16a,	// (0x00056ea7) cam4_indicators_pane_g3_ParamLimits

0xa16a,	// (0x00056ea7) cam4_indicators_pane_g3

0xa1ea,	// (0x00056f27) vid4_indicators_pane_g5_ParamLimits

0xa1ea,	// (0x00056f27) vid4_indicators_pane_g5

0xa2b5,	// (0x00056ff2) vid4_progress_pane_g5_ParamLimits

0xa2b5,	// (0x00056ff2) vid4_progress_pane_g5

0x7ea1,	// (0x00054bde) main_ncimui_pane_g1

0x7f0a,	// (0x00054c47) ncimui_group_query_pane_ParamLimits

0x7f0a,	// (0x00054c47) ncimui_group_query_pane

0x7f52,	// (0x00054c8f) ncimui_list_pane_ParamLimits

0x7f52,	// (0x00054c8f) ncimui_list_pane

0x7f79,	// (0x00054cb6) ncimui_text_pane_ParamLimits

0x7f79,	// (0x00054cb6) ncimui_text_pane

0x803a,	// (0x00054d77) ncimui_text_pane_t1_ParamLimits

0x803a,	// (0x00054d77) ncimui_text_pane_t1

0xe22b,	// (0x0005af68) ncimui_list_single_graphic_pane_ParamLimits

0xe22b,	// (0x0005af68) ncimui_list_single_graphic_pane

0x8058,	// (0x00054d95) ncimui_query_pane_ParamLimits

0x8058,	// (0x00054d95) ncimui_query_pane

0x97d1,	// (0x0005650e) list_highlight_pane_cp013

0xe23b,	// (0x0005af78) ncim_list_query_list_pane_t1_copy1

0xe215,	// (0x0005af52) ncim_list_single_graphic_pane_g1

0x806b,	// (0x00054da8) ncim_query_button_pane_cp01

0x8077,	// (0x00054db4) ncim_query_entry_pane_ParamLimits

0x8077,	// (0x00054db4) ncim_query_entry_pane

0x808a,	// (0x00054dc7) ncimui_query_pane_g1

0x8096,	// (0x00054dd3) ncimui_query_pane_t1_ParamLimits

0x8096,	// (0x00054dd3) ncimui_query_pane_t1

0xa522,	// (0x0005725f) input_focus_pane_cp012

0xe249,	// (0x0005af86) ncim_query_entry_pane_t1

0xa90b,	// (0x00057648) main_im_pane_ParamLimits

0xa522,	// (0x0005725f) main_mobtv_pane_ParamLimits

0xa522,	// (0x0005725f) main_mobtv_pane

0x7d39,	// (0x00054a76) main_cset6_slider_pane_g18_ParamLimits

0x7d39,	// (0x00054a76) main_cset6_slider_pane_g18

0x7d45,	// (0x00054a82) main_cset6_slider_pane_g19_ParamLimits

0x7d45,	// (0x00054a82) main_cset6_slider_pane_g19

0xb228,	// (0x00057f65) bg_main_mobtv_pane_ParamLimits

0xb228,	// (0x00057f65) bg_main_mobtv_pane

0x80af,	// (0x00054dec) main_mobtv_info_pane

0x80b8,	// (0x00054df5) main_mobtv_loading_pane_ParamLimits

0x80b8,	// (0x00054df5) main_mobtv_loading_pane

0xe25b,	// (0x0005af98) main_mobtv_pg_channel_list_pane

0xe265,	// (0x0005afa2) main_mobtv_pg_hdr_pane

0x80c5,	// (0x00054e02) main_mobtv_programe_curr_pane_ParamLimits

0x80c5,	// (0x00054e02) main_mobtv_programe_curr_pane

0x80d2,	// (0x00054e0f) main_mobtv_programe_next_pane_ParamLimits

0x80d2,	// (0x00054e0f) main_mobtv_programe_next_pane

0xe26e,	// (0x0005afab) popup_mobtv_noti_window

0xcd5f,	// (0x00059a9c) main_tv_pg_hdr_pane_g1

0xe276,	// (0x0005afb3) main_tv_pg_hdr_pane_g2

0xe27e,	// (0x0005afbb) main_tv_pg_hdr_pane_g3

0xe286,	// (0x0005afc3) main_tv_pg_hdr_pane_g4

0xe28e,	// (0x0005afcb) main_tv_pg_hdr_pane_g5

0xe298,	// (0x0005afd5) main_tv_pg_hdr_pane_g6

0xe2a2,	// (0x0005afdf) main_tv_pg_hdr_pane_g7

0xe2ac,	// (0x0005afe9) main_tv_pg_hdr_pane_g8

0xe2b6,	// (0x0005aff3) main_tv_pg_hdr_pane_g9

0xe2c0,	// (0x0005affd) main_tv_pg_hdr_pane_g10

0xe2ca,	// (0x0005b007) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0005c945) main_tv_pg_hdr_pane_g

0xe2d4,	// (0x0005b011) main_tv_pg_hdr_pane_t1

0xe2e2,	// (0x0005b01f) main_tv_pg_hdr_pane_t2

0xe2f0,	// (0x0005b02d) main_tv_pg_hdr_pane_t3

0xe300,	// (0x0005b03d) main_tv_pg_hdr_pane_t4

0xe310,	// (0x0005b04d) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0005c95c) main_tv_pg_hdr_pane_t

0xe320,	// (0x0005b05d) single_mobtv_pg_channel_pane_ParamLimits

0xe320,	// (0x0005b05d) single_mobtv_pg_channel_pane

0xe332,	// (0x0005b06f) single_mobtv_pg_channel_table_pane

0xe33b,	// (0x0005b078) single_mobtv_pg_channel_thumb_pane

0xe344,	// (0x0005b081) single_tv_pg_channel_pane_g1

0xe34d,	// (0x0005b08a) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0005c967) single_tv_pg_channel_pane_g

0xcfc2,	// (0x00059cff) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcfc2,	// (0x00059cff) bg_single_mobtv_pg_channel_thumb_pane

0xe356,	// (0x0005b093) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe356,	// (0x0005b093) single_mobtv_pg_channel_thumb_pane_g1

0xe364,	// (0x0005b0a1) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe364,	// (0x0005b0a1) single_mobtv_pg_channel_thumb_pane_g2

0xe370,	// (0x0005b0ad) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe370,	// (0x0005b0ad) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0005c96c) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0005c96c) single_mobtv_pg_channel_thumb_pane_g

0xe37c,	// (0x0005b0b9) single_mobtv_pg_channel_thumb_pane_t1

0xe38a,	// (0x0005b0c7) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0005c973) single_mobtv_pg_channel_thumb_pane_t

0xcd5f,	// (0x00059a9c) bg_single_mobtv_pg_channel_table_pane_g1

0xcd5f,	// (0x00059a9c) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d8,	// (0x0005c415) bg_single_mobtv_pg_channel_table_pane_g

0xe398,	// (0x0005b0d5) single_mobtv_pg_channel_table_pane_t1

0xe3a6,	// (0x0005b0e3) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0005c978) single_mobtv_pg_channel_table_pane_t

0x80e7,	// (0x00054e24) main_mobtv_info_pane_g1_ParamLimits

0x80e7,	// (0x00054e24) main_mobtv_info_pane_g1

0x8105,	// (0x00054e42) main_mobtv_info_pane_t1_ParamLimits

0x8105,	// (0x00054e42) main_mobtv_info_pane_t1

0x817d,	// (0x00054eba) main_mobtv_info_pane_t2_ParamLimits

0x817d,	// (0x00054eba) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0005c982) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0005c982) main_mobtv_info_pane_t

0x820c,	// (0x00054f49) wait_bar_pane_cp05

0x821e,	// (0x00054f5b) main_mobtv_loading_pane_g1_ParamLimits

0x821e,	// (0x00054f5b) main_mobtv_loading_pane_g1

0x8231,	// (0x00054f6e) main_mobtv_loading_pane_g2_ParamLimits

0x8231,	// (0x00054f6e) main_mobtv_loading_pane_g2

0x823d,	// (0x00054f7a) main_mobtv_loading_pane_g3_ParamLimits

0x823d,	// (0x00054f7a) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0005c989) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0005c989) main_mobtv_loading_pane_g

0xe3b4,	// (0x0005b0f1) main_mobtv_loading_pane_t1_ParamLimits

0xe3b4,	// (0x0005b0f1) main_mobtv_loading_pane_t1

0xe3cc,	// (0x0005b109) main_mobtv_loading_pane_t2_ParamLimits

0xe3cc,	// (0x0005b109) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0005c990) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0005c990) main_mobtv_loading_pane_t

0x8250,	// (0x00054f8d) wait_bar_pane_cp06_ParamLimits

0x8250,	// (0x00054f8d) wait_bar_pane_cp06

0xe3f0,	// (0x0005b12d) main_mobtv_programe_curr_pane_t1

0xe3fe,	// (0x0005b13b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0005c995) main_mobtv_programe_curr_pane_t

0xe40c,	// (0x0005b149) main_mobtv_programe_next_pane_t1

0xe41a,	// (0x0005b157) main_mobtv_programe_next_pane_t2

0xe428,	// (0x0005b165) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0005c99a) main_mobtv_programe_next_pane_t

0x97d1,	// (0x0005650e) bg_popup_mobtv_noti_window_pane

0xe436,	// (0x0005b173) popup_mobtv_noti_window_g1

0xe43e,	// (0x0005b17b) popup_mobtv_noti_window_t1

0xe44c,	// (0x0005b189) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0005c9a1) popup_mobtv_noti_window_t

0xcd5f,	// (0x00059a9c) bg_popup_mobtv_noti_window_pane_g1

0x97d1,	// (0x0005650e) sc_clock_pane

0x97d1,	// (0x0005650e) main_fs_bigclock_pane

0x798c,	// (0x000546c9) blid2_tripm_pane_t4_ParamLimits

0x798c,	// (0x000546c9) blid2_tripm_pane_t4

0x825f,	// (0x00054f9c) sc_clock_pane_g1_ParamLimits

0x825f,	// (0x00054f9c) sc_clock_pane_g1

0x8271,	// (0x00054fae) sc_clock_pane_t1_ParamLimits

0x8271,	// (0x00054fae) sc_clock_pane_t1

0x8293,	// (0x00054fd0) sc_clock_pane_t2_ParamLimits

0x8293,	// (0x00054fd0) sc_clock_pane_t2

0x82ab,	// (0x00054fe8) sc_clock_pane_t3_ParamLimits

0x82ab,	// (0x00054fe8) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0005c9a6) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0005c9a6) sc_clock_pane_t

0x8d9a,	// (0x00055ad7) main_fs_bigclock_indicator_pane_ParamLimits

0x8d9a,	// (0x00055ad7) main_fs_bigclock_indicator_pane

0x8351,	// (0x0005508e) main_fs_bigclock_pane_g1_ParamLimits

0x8351,	// (0x0005508e) main_fs_bigclock_pane_g1

0x8da6,	// (0x00055ae3) main_fs_bigclock_pane_t1_ParamLimits

0x8da6,	// (0x00055ae3) main_fs_bigclock_pane_t1

0x8db8,	// (0x00055af5) main_fs_bigclock_pane_t2_ParamLimits

0x8db8,	// (0x00055af5) main_fs_bigclock_pane_t2

0x8dcc,	// (0x00055b09) main_fs_bigclock_pane_t3_ParamLimits

0x8dcc,	// (0x00055b09) main_fs_bigclock_pane_t3

0x0002,

0xfe4d,	// (0x0005cb8a) main_fs_bigclock_pane_t_ParamLimits

0xfe4d,	// (0x0005cb8a) main_fs_bigclock_pane_t

0xecb2,	// (0x0005b9ef) main_fs_bigclock_indicator_pane_g1

0xe16a,	// (0x0005aea7) ncim_query_content_pane_g2_ParamLimits

0xe16a,	// (0x0005aea7) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0005c933) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0005c933) ncim_query_content_pane_g

0x82c4,	// (0x00055001) sc_clock_pane_t4_ParamLimits

0x82c4,	// (0x00055001) sc_clock_pane_t4

0xa522,	// (0x0005725f) main_radioblah_pane

0xa0dc,	// (0x00056e19) cell_call4_button_pane_t1_copy1_ParamLimits

0xa0dc,	// (0x00056e19) cell_call4_button_pane_t1_copy1

0x7eb9,	// (0x00054bf6) main_ncimui_pane_t1_ParamLimits

0x7eb9,	// (0x00054bf6) main_ncimui_pane_t1

0x7ed3,	// (0x00054c10) main_ncimui_pane_t2_ParamLimits

0x7ed3,	// (0x00054c10) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0005c92c) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0005c92c) main_ncimui_pane_t

0xe591,	// (0x0005b2ce) main_radioblah_anim_pane_ParamLimits

0xe591,	// (0x0005b2ce) main_radioblah_anim_pane

0xe5a2,	// (0x0005b2df) main_radioblah_info_pane_ParamLimits

0xe5a2,	// (0x0005b2df) main_radioblah_info_pane

0xe5b6,	// (0x0005b2f3) main_radioblah_pane_t1_ParamLimits

0xe5b6,	// (0x0005b2f3) main_radioblah_pane_t1

0xe5d2,	// (0x0005b30f) main_radioblah_pane_t2_ParamLimits

0xe5d2,	// (0x0005b30f) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0005c9c7) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0005c9c7) main_radioblah_pane_t

0x83b0,	// (0x000550ed) main_radioblah_rocker_ctrl_pane_ParamLimits

0x83b0,	// (0x000550ed) main_radioblah_rocker_ctrl_pane

0xe61a,	// (0x0005b357) main_radioblah_info_pane_t1_ParamLimits

0xe61a,	// (0x0005b357) main_radioblah_info_pane_t1

0x8408,	// (0x00055145) main_radioblah_info_pane_t2_ParamLimits

0x8408,	// (0x00055145) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0005c9d0) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0005c9d0) main_radioblah_info_pane_t

0xcd5f,	// (0x00059a9c) main_radioblah_rocker_ctrl_pane_g1

0x84b8,	// (0x000551f5) main_radioblah_rocker_ctrl_pane_g2

0x84c0,	// (0x000551fd) main_radioblah_rocker_ctrl_pane_g3

0x84c8,	// (0x00055205) main_radioblah_rocker_ctrl_pane_g4

0x84d0,	// (0x0005520d) main_radioblah_rocker_ctrl_pane_g5

0x84d8,	// (0x00055215) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0005c9d9) main_radioblah_rocker_ctrl_pane_g

0x7c3b,	// (0x00054978) main_cset_text2_pane_t1_copy1_ParamLimits

0xa13a,	// (0x00056e77) cam4_image_uncrop_qvga_pane

0xa193,	// (0x00056ed0) vid4_image_uncrop_qcif_pane

0xa2eb,	// (0x00057028) cam6_image_uncrop_qvga_pane_ParamLimits

0xa2eb,	// (0x00057028) cam6_image_uncrop_qvga_pane

0xde71,	// (0x0005abae) vid6_image_uncrop_qcif_pane_ParamLimits

0xde71,	// (0x0005abae) vid6_image_uncrop_qcif_pane

0x97d1,	// (0x0005650e) bg_popup_preview_window_pane_cp03

0xe11c,	// (0x0005ae59) list_cset_text2_pane

0xe124,	// (0x0005ae61) main_cset6_text2_pane_g1

0xe12c,	// (0x0005ae69) main_cset6_text2_pane_t1

0x84e0,	// (0x0005521d) list_cset_text2_pane_t1_ParamLimits

0x84e0,	// (0x0005521d) list_cset_text2_pane_t1

0xa522,	// (0x0005725f) main_radioblah_pane_ParamLimits

0x81f8,	// (0x00054f35) main_mobtv_info_pane_t3_ParamLimits

0x81f8,	// (0x00054f35) main_mobtv_info_pane_t3

0x839e,	// (0x000550db) main_radioblah_pane_g1

0x83d8,	// (0x00055115) main_radioblah_info_pane_g1

0x845d,	// (0x0005519a) main_radioblah_info_pane_t3_ParamLimits

0x845d,	// (0x0005519a) main_radioblah_info_pane_t3

0x2fa9,	// (0x0004fce6) highlight_cell_cale_month_pane_ParamLimits

0x2fa9,	// (0x0004fce6) highlight_cell_cale_month_pane

0x97d1,	// (0x0005650e) main_phob_fisheye_pane

0xd0be,	// (0x00059dfb) scroll_pane_cp0031_ParamLimits

0xd0be,	// (0x00059dfb) scroll_pane_cp0031

0xdf7f,	// (0x0005acbc) wait_bar_pane_cp08_ParamLimits

0x7cc0,	// (0x000549fd) cset_list_set_pane_copy1_ParamLimits

0xe654,	// (0x0005b391) highlight_cell_cale_month_pane_g1

0x84f9,	// (0x00055236) highlight_cell_cale_month_pane_t1

0xdc14,	// (0x0005a951) list_gen_pane_cp01

0xd850,	// (0x0005a58d) scroll_pane_01

0x8507,	// (0x00055244) list_single_double_fisheye_pane

0x0873,	// (0x0004d5b0) list_double_fisheye_pane_g1_ParamLimits

0x0873,	// (0x0004d5b0) list_double_fisheye_pane_g1

0x087f,	// (0x0004d5bc) list_double_fisheye_pane_g2_ParamLimits

0x087f,	// (0x0004d5bc) list_double_fisheye_pane_g2

0x8510,	// (0x0005524d) list_double_fisheye_pane_g3_ParamLimits

0x8510,	// (0x0005524d) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0005c9e6) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0005c9e6) list_double_fisheye_pane_g

0x08b0,	// (0x0004d5ed) list_double_fisheye_pane_t1_ParamLimits

0x08b0,	// (0x0004d5ed) list_double_fisheye_pane_t1

0x08cb,	// (0x0004d608) list_double_fisheye_pane_t2_ParamLimits

0x08cb,	// (0x0004d608) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0005c9f1) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0005c9f1) list_double_fisheye_pane_t

0x97d1,	// (0x0005650e) main_call5_pane

0x82ef,	// (0x0005502c) sc_swipe_pane_ParamLimits

0x82ef,	// (0x0005502c) sc_swipe_pane

0x852f,	// (0x0005526c) call5_image_pane_ParamLimits

0x852f,	// (0x0005526c) call5_image_pane

0x854c,	// (0x00055289) call5_swipe_1_pane_ParamLimits

0x854c,	// (0x00055289) call5_swipe_1_pane

0x855f,	// (0x0005529c) call5_swipe_2_pane_ParamLimits

0x855f,	// (0x0005529c) call5_swipe_2_pane

0x858a,	// (0x000552c7) popup_call5_audio_first_window_ParamLimits

0x858a,	// (0x000552c7) popup_call5_audio_first_window

0xcfc2,	// (0x00059cff) call5_swipe_1_pane_g1_ParamLimits

0xcfc2,	// (0x00059cff) call5_swipe_1_pane_g1

0xe65c,	// (0x0005b399) call5_swipe_1_pane_g2_ParamLimits

0xe65c,	// (0x0005b399) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0005c9f6) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0005c9f6) call5_swipe_1_pane_g

0xe668,	// (0x0005b3a5) call5_swipe_1_pane_t1_ParamLimits

0xe668,	// (0x0005b3a5) call5_swipe_1_pane_t1

0xcfc2,	// (0x00059cff) call5_swipe_2_pane_g1_ParamLimits

0xcfc2,	// (0x00059cff) call5_swipe_2_pane_g1

0xe67d,	// (0x0005b3ba) call5_swipe_2_pane_g2_ParamLimits

0xe67d,	// (0x0005b3ba) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0005c9fb) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0005c9fb) call5_swipe_2_pane_g

0xe689,	// (0x0005b3c6) call5_swipe_2_pane_t1_ParamLimits

0xe689,	// (0x0005b3c6) call5_swipe_2_pane_t1

0xe6b5,	// (0x0005b3f2) sc_swipe_pane_g1_ParamLimits

0xe6b5,	// (0x0005b3f2) sc_swipe_pane_g1

0xe6c2,	// (0x0005b3ff) sc_swipe_pane_g2_ParamLimits

0xe6c2,	// (0x0005b3ff) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0005ca00) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0005ca00) sc_swipe_pane_g

0xe6ce,	// (0x0005b40b) sc_swipe_pane_t1_ParamLimits

0xe6ce,	// (0x0005b40b) sc_swipe_pane_t1

0x97d1,	// (0x0005650e) main_cmail_launcher_pane

0x859b,	// (0x000552d8) aid_size_cell_cmail_l_ParamLimits

0x859b,	// (0x000552d8) aid_size_cell_cmail_l

0x85a9,	// (0x000552e6) grid_cmail_l_pane_ParamLimits

0x85a9,	// (0x000552e6) grid_cmail_l_pane

0x85c3,	// (0x00055300) cell_cmail_l_pane_ParamLimits

0x85c3,	// (0x00055300) cell_cmail_l_pane

0xe6e3,	// (0x0005b420) cell_cmail_l_pane_g1_ParamLimits

0xe6e3,	// (0x0005b420) cell_cmail_l_pane_g1

0xe6ef,	// (0x0005b42c) cell_cmail_l_pane_t1_ParamLimits

0xe6ef,	// (0x0005b42c) cell_cmail_l_pane_t1

0xe705,	// (0x0005b442) cell_cmail_l_pane_t2_ParamLimits

0xe705,	// (0x0005b442) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0005ca05) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0005ca05) cell_cmail_l_pane_t

0xa522,	// (0x0005725f) grid_highlight_pane_cp018_ParamLimits

0xa522,	// (0x0005725f) grid_highlight_pane_cp018

0x1167,	// (0x0004dea4) main2_pane_ParamLimits

0x1167,	// (0x0004dea4) main2_pane

0xa9ad,	// (0x000576ea) popup_sp_fs_action_menu_bg_pane_g1

0xa9b5,	// (0x000576f2) popup_sp_fs_action_menu_bg_pane_g2

0xa9bd,	// (0x000576fa) popup_sp_fs_action_menu_bg_pane_g3

0xa9c5,	// (0x00057702) popup_sp_fs_action_menu_bg_pane_g4

0xa9cd,	// (0x0005770a) popup_sp_fs_action_menu_bg_pane_g5

0xa9d5,	// (0x00057712) popup_sp_fs_action_menu_bg_pane_g6

0xa9dd,	// (0x0005771a) popup_sp_fs_action_menu_bg_pane_g7

0xa9e5,	// (0x00057722) popup_sp_fs_action_menu_bg_pane_g8

0xa9ed,	// (0x0005772a) popup_sp_fs_action_menu_bg_pane_g9

0xa9f5,	// (0x00057732) popup_sp_fs_action_menu_bg_pane_g10

0xa9f5,	// (0x00057732) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0005bec3) popup_sp_fs_action_menu_bg_pane_g

0x0196,	// (0x0004ced3) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0196,	// (0x0004ced3) list_medium_line_x2_t3_g3_g1

0x01a2,	// (0x0004cedf) list_medium_line_x2_t3_g3_g2_ParamLimits

0x01a2,	// (0x0004cedf) list_medium_line_x2_t3_g3_g2

0x01ae,	// (0x0004ceeb) list_medium_line_x2_t3_g3_g3_ParamLimits

0x01ae,	// (0x0004ceeb) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x0005bf71) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x0005bf71) list_medium_line_x2_t3_g3_g

0x01ba,	// (0x0004cef7) list_medium_line_x2_t3_g3_t1_ParamLimits

0x01ba,	// (0x0004cef7) list_medium_line_x2_t3_g3_t1

0x01cf,	// (0x0004cf0c) list_medium_line_x2_t3_g3_t2_ParamLimits

0x01cf,	// (0x0004cf0c) list_medium_line_x2_t3_g3_t2

0x01e3,	// (0x0004cf20) list_medium_line_x2_t3_g3_t3_ParamLimits

0x01e3,	// (0x0004cf20) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x0005bf78) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x0005bf78) list_medium_line_x2_t3_g3_t

0x0196,	// (0x0004ced3) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0196,	// (0x0004ced3) list_medium_line_x2_t3_g2_g1

0x01ae,	// (0x0004ceeb) list_medium_line_x2_t3_g2_g2_ParamLimits

0x01ae,	// (0x0004ceeb) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x0005bf7f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x0005bf7f) list_medium_line_x2_t3_g2_g

0x01f8,	// (0x0004cf35) list_medium_line_x2_t3_g2_t1_ParamLimits

0x01f8,	// (0x0004cf35) list_medium_line_x2_t3_g2_t1

0x020e,	// (0x0004cf4b) list_medium_line_x2_t3_g2_t2_ParamLimits

0x020e,	// (0x0004cf4b) list_medium_line_x2_t3_g2_t2

0x0220,	// (0x0004cf5d) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0220,	// (0x0004cf5d) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x0005bf84) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x0005bf84) list_medium_line_x2_t3_g2_t

0x0196,	// (0x0004ced3) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0196,	// (0x0004ced3) list_medium_line_x2_t4_g4_g1

0x023d,	// (0x0004cf7a) list_medium_line_x2_t4_g4_g2_ParamLimits

0x023d,	// (0x0004cf7a) list_medium_line_x2_t4_g4_g2

0x01a2,	// (0x0004cedf) list_medium_line_x2_t4_g4_g3_ParamLimits

0x01a2,	// (0x0004cedf) list_medium_line_x2_t4_g4_g3

0x0249,	// (0x0004cf86) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0249,	// (0x0004cf86) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x0005bf8b) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x0005bf8b) list_medium_line_x2_t4_g4_g

0x0255,	// (0x0004cf92) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0255,	// (0x0004cf92) list_medium_line_x2_t4_g4_t1

0x026f,	// (0x0004cfac) list_medium_line_x2_t4_g4_t2_ParamLimits

0x026f,	// (0x0004cfac) list_medium_line_x2_t4_g4_t2

0x0285,	// (0x0004cfc2) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0285,	// (0x0004cfc2) list_medium_line_x2_t4_g4_t3

0x029a,	// (0x0004cfd7) list_medium_line_x2_t4_g4_t4_ParamLimits

0x029a,	// (0x0004cfd7) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x0005bf94) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x0005bf94) list_medium_line_x2_t4_g4_t

0x0196,	// (0x0004ced3) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0196,	// (0x0004ced3) list_medium_line_x2_t2_g4_g1

0x023d,	// (0x0004cf7a) list_medium_line_x2_t2_g4_g2_ParamLimits

0x023d,	// (0x0004cf7a) list_medium_line_x2_t2_g4_g2

0x01a2,	// (0x0004cedf) list_medium_line_x2_t2_g4_g3_ParamLimits

0x01a2,	// (0x0004cedf) list_medium_line_x2_t2_g4_g3

0x01ae,	// (0x0004ceeb) list_medium_line_x2_t2_g4_g4_ParamLimits

0x01ae,	// (0x0004ceeb) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x0005bffb) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x0005bffb) list_medium_line_x2_t2_g4_g

0x02ac,	// (0x0004cfe9) list_medium_line_x2_t2_g4_t1_ParamLimits

0x02ac,	// (0x0004cfe9) list_medium_line_x2_t2_g4_t1

0x01e3,	// (0x0004cf20) list_medium_line_x2_t2_g4_t2_ParamLimits

0x01e3,	// (0x0004cf20) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x0005c004) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x0005c004) list_medium_line_x2_t2_g4_t

0x0196,	// (0x0004ced3) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0196,	// (0x0004ced3) list_medium_line_x2_t2_g3_g1

0x01a2,	// (0x0004cedf) list_medium_line_x2_t2_g3_g2_ParamLimits

0x01a2,	// (0x0004cedf) list_medium_line_x2_t2_g3_g2

0x01ae,	// (0x0004ceeb) list_medium_line_x2_t2_g3_g3_ParamLimits

0x01ae,	// (0x0004ceeb) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x0005bf71) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x0005bf71) list_medium_line_x2_t2_g3_g

0x02c1,	// (0x0004cffe) list_medium_line_x2_t2_g3_t1_ParamLimits

0x02c1,	// (0x0004cffe) list_medium_line_x2_t2_g3_t1

0x01e3,	// (0x0004cf20) list_medium_line_x2_t2_g3_t2_ParamLimits

0x01e3,	// (0x0004cf20) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x0005c009) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x0005c009) list_medium_line_x2_t2_g3_t

0x3103,	// (0x0004fe40) main_sp_fs_list_pane_ParamLimits

0x3103,	// (0x0004fe40) main_sp_fs_list_pane

0xcc7b,	// (0x000599b8) sp_fs_scroll_pane_ParamLimits

0xcc7b,	// (0x000599b8) sp_fs_scroll_pane

0x02d6,	// (0x0004d013) list_medium_line_x2_t3_t1

0x02e6,	// (0x0004d023) list_medium_line_x2_t3_t2

0x02f4,	// (0x0004d031) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x0005c054) list_medium_line_x2_t3_t

0x0302,	// (0x0004d03f) list_medium_line_x3_t4_t1

0x0312,	// (0x0004d04f) list_medium_line_x3_t4_t2

0x0320,	// (0x0004d05d) list_medium_line_x3_t4_t3

0x02f4,	// (0x0004d031) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x0005c05b) list_medium_line_x3_t4_t

0x032e,	// (0x0004d06b) list_medium_line_x4_t5_t1

0x033e,	// (0x0004d07b) list_medium_line_x4_t5_t2

0x0320,	// (0x0004d05d) list_medium_line_x4_t5_t3

0x034c,	// (0x0004d089) list_medium_line_x4_t5_t4

0x02f4,	// (0x0004d031) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x0005c064) list_medium_line_x4_t5_t

0x0196,	// (0x0004ced3) list_medium_line_t4_g4_g1_ParamLimits

0x0196,	// (0x0004ced3) list_medium_line_t4_g4_g1

0x035a,	// (0x0004d097) list_medium_line_t4_g4_g2_ParamLimits

0x035a,	// (0x0004d097) list_medium_line_t4_g4_g2

0x0366,	// (0x0004d0a3) list_medium_line_t4_g4_g3_ParamLimits

0x0366,	// (0x0004d0a3) list_medium_line_t4_g4_g3

0x01ae,	// (0x0004ceeb) list_medium_line_t4_g4_g4_ParamLimits

0x01ae,	// (0x0004ceeb) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x0005c06f) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x0005c06f) list_medium_line_t4_g4_g

0x0372,	// (0x0004d0af) list_medium_line_t4_g4_t1_ParamLimits

0x0372,	// (0x0004d0af) list_medium_line_t4_g4_t1

0x0387,	// (0x0004d0c4) list_medium_line_t4_g4_t2_ParamLimits

0x0387,	// (0x0004d0c4) list_medium_line_t4_g4_t2

0x039c,	// (0x0004d0d9) list_medium_line_t4_g4_t3_ParamLimits

0x039c,	// (0x0004d0d9) list_medium_line_t4_g4_t3

0x01e3,	// (0x0004cf20) list_medium_line_t4_g4_t4_ParamLimits

0x01e3,	// (0x0004cf20) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x0005c078) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x0005c078) list_medium_line_t4_g4_t

0x31c2,	// (0x0004feff) chi_dic_find_pane_g1

0x41c6,	// (0x00050f03) main_tport_pane

0x058f,	// (0x0004d2cc) list_medium_line_plain_t1

0x059d,	// (0x0004d2da) list_medium_line_t2_g2_g1_ParamLimits

0x059d,	// (0x0004d2da) list_medium_line_t2_g2_g1

0x05a9,	// (0x0004d2e6) list_medium_line_t2_g2_g2_ParamLimits

0x05a9,	// (0x0004d2e6) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0005c73d) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0005c73d) list_medium_line_t2_g2_g

0x05b5,	// (0x0004d2f2) list_medium_line_t2_g2_t1_ParamLimits

0x05b5,	// (0x0004d2f2) list_medium_line_t2_g2_t1

0x05cf,	// (0x0004d30c) list_medium_line_t2_g2_t2_ParamLimits

0x05cf,	// (0x0004d30c) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0005c742) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0005c742) list_medium_line_t2_g2_t

0x7734,	// (0x00054471) aid_sp_fs_list_icon_a_sm

0x773c,	// (0x00054479) aid_sp_fs_list_icon_d

0x7744,	// (0x00054481) aid_sp_fs_text_primary

0xe6ac,	// (0x0005b3e9) aid_sp_fs_text_secondary

0x774d,	// (0x0005448a) list_medium_line

0x774d,	// (0x0005448a) list_medium_line_g2

0x774d,	// (0x0005448a) list_medium_line_g3

0x774d,	// (0x0005448a) list_medium_line_plain

0x774d,	// (0x0005448a) list_medium_line_plain_t2

0x774d,	// (0x0005448a) list_medium_line_plain_t3

0x774d,	// (0x0005448a) list_medium_line_right_icon

0x774d,	// (0x0005448a) list_medium_line_right_iconx2

0x774d,	// (0x0005448a) list_medium_line_t2

0x774d,	// (0x0005448a) list_medium_line_t2_g2

0x774d,	// (0x0005448a) list_medium_line_t2_g3

0x774d,	// (0x0005448a) list_medium_line_t2_right_icon

0x774d,	// (0x0005448a) list_medium_line_t2_right_iconx2

0x774d,	// (0x0005448a) list_medium_line_t3

0x774d,	// (0x0005448a) list_medium_line_t3_g2

0x774d,	// (0x0005448a) list_medium_line_t3_g3

0x774d,	// (0x0005448a) list_medium_line_t3_right_iconx2

0x7756,	// (0x00054493) list_medium_line_t4_g4

0x775f,	// (0x0005449c) list_medium_line_x2

0x775f,	// (0x0005449c) list_medium_line_x2_t2_g2

0x775f,	// (0x0005449c) list_medium_line_x2_t2_g3

0x775f,	// (0x0005449c) list_medium_line_x2_t2_g4

0x775f,	// (0x0005449c) list_medium_line_x2_t3

0x775f,	// (0x0005449c) list_medium_line_x2_t3_g2

0x775f,	// (0x0005449c) list_medium_line_x2_t3_g3

0x775f,	// (0x0005449c) list_medium_line_x2_t3_g4

0x775f,	// (0x0005449c) list_medium_line_x2_t4_g2

0x775f,	// (0x0005449c) list_medium_line_x2_t4_g4

0x7768,	// (0x000544a5) list_medium_line_x3

0x7768,	// (0x000544a5) list_medium_line_x3_t4

0x7768,	// (0x000544a5) list_medium_line_x3_t4_g4

0x7756,	// (0x00054493) list_medium_line_x4_t4

0x7756,	// (0x00054493) list_medium_line_x4_t4_g7

0x7756,	// (0x00054493) list_medium_line_x4_t5

0x075b,	// (0x0004d498) list_single_fs_dyc_pane_ParamLimits

0x075b,	// (0x0004d498) list_single_fs_dyc_pane

0x0196,	// (0x0004ced3) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0196,	// (0x0004ced3) list_medium_line_x4_t4_g7_g1

0x079b,	// (0x0004d4d8) list_medium_line_x4_t4_g7_g2_ParamLimits

0x079b,	// (0x0004d4d8) list_medium_line_x4_t4_g7_g2

0x07a7,	// (0x0004d4e4) list_medium_line_x4_t4_g7_g3_ParamLimits

0x07a7,	// (0x0004d4e4) list_medium_line_x4_t4_g7_g3

0x07b6,	// (0x0004d4f3) list_medium_line_x4_t4_g7_g4_ParamLimits

0x07b6,	// (0x0004d4f3) list_medium_line_x4_t4_g7_g4

0x07c2,	// (0x0004d4ff) list_medium_line_x4_t4_g7_g5_ParamLimits

0x07c2,	// (0x0004d4ff) list_medium_line_x4_t4_g7_g5

0x07d1,	// (0x0004d50e) list_medium_line_x4_t4_g7_g6_ParamLimits

0x07d1,	// (0x0004d50e) list_medium_line_x4_t4_g7_g6

0x07e0,	// (0x0004d51d) list_medium_line_x4_t4_g7_g7_ParamLimits

0x07e0,	// (0x0004d51d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0005c90d) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0005c90d) list_medium_line_x4_t4_g7_g

0x07ec,	// (0x0004d529) list_medium_line_x4_t4_g7_t1_ParamLimits

0x07ec,	// (0x0004d529) list_medium_line_x4_t4_g7_t1

0x0801,	// (0x0004d53e) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0801,	// (0x0004d53e) list_medium_line_x4_t4_g7_t2

0x0816,	// (0x0004d553) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0816,	// (0x0004d553) list_medium_line_x4_t4_g7_t3

0x082b,	// (0x0004d568) list_medium_line_x4_t4_g7_t4_ParamLimits

0x082b,	// (0x0004d568) list_medium_line_x4_t4_g7_t4

0x083d,	// (0x0004d57a) list_medium_line_x4_t4_g7_t5_ParamLimits

0x083d,	// (0x0004d57a) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0005c91c) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0005c91c) list_medium_line_x4_t4_g7_t

0x084f,	// (0x0004d58c) list_single_dyc_row_pane_ParamLimits

0x084f,	// (0x0004d58c) list_single_dyc_row_pane

0x851c,	// (0x00055259) call5_gesture_pane_ParamLimits

0x851c,	// (0x00055259) call5_gesture_pane

0x8572,	// (0x000552af) call5_windows_pane_ParamLimits

0x8572,	// (0x000552af) call5_windows_pane

0x85dd,	// (0x0005531a) call5_swipe_1_pane_cp_ParamLimits

0x85dd,	// (0x0005531a) call5_swipe_1_pane_cp

0x85e9,	// (0x00055326) call5_swipe_2_pane_cp_ParamLimits

0x85e9,	// (0x00055326) call5_swipe_2_pane_cp

0xaad9,	// (0x00057816) call5_image_pane_cp

0x85f5,	// (0x00055332) popup_call5_audio_first_window_cp_ParamLimits

0x85f5,	// (0x00055332) popup_call5_audio_first_window_cp

0xe6b5,	// (0x0005b3f2) call5_swipe_1_pane_g1_cp_ParamLimits

0xe6b5,	// (0x0005b3f2) call5_swipe_1_pane_g1_cp

0xe722,	// (0x0005b45f) call5_swipe_1_pane_g2_cp

0xe6ce,	// (0x0005b40b) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6ce,	// (0x0005b40b) call5_swipe_1_pane_t1_cp

0xe6b5,	// (0x0005b3f2) call5_swipe_2_pane_g1_cp_ParamLimits

0xe6b5,	// (0x0005b3f2) call5_swipe_2_pane_g1_cp

0xe72a,	// (0x0005b467) call5_swipe_2_pane_g2_cp

0xe732,	// (0x0005b46f) call5_swipe_2_pane_t1_cp_ParamLimits

0xe732,	// (0x0005b46f) call5_swipe_2_pane_t1_cp

0xa522,	// (0x0005725f) main_sp_fs_email_pane

0xe747,	// (0x0005b484) main_sp_fs_listscroll_pane_te

0x8603,	// (0x00055340) popup_sp_fs_action_menu_pane_ParamLimits

0x8603,	// (0x00055340) popup_sp_fs_action_menu_pane

0xcd5f,	// (0x00059a9c) bg_sp_fs_ctrlbar_pane_g1

0xe750,	// (0x0005b48d) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe759,	// (0x0005b496) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe762,	// (0x0005b49f) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcd5f,	// (0x00059a9c) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0005ca0a) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcb38,	// (0x00059875) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcb38,	// (0x00059875) bg_sp_fs_ctrlbar_ddmenu_pane

0xe76b,	// (0x0005b4a8) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe76b,	// (0x0005b4a8) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe777,	// (0x0005b4b4) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe777,	// (0x0005b4b4) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0005ca13) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0005ca13) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe783,	// (0x0005b4c0) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe783,	// (0x0005b4c0) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x08ed,	// (0x0004d62a) list_medium_line_t2_right_icon_g1

0x08f5,	// (0x0004d632) list_medium_line_t2_right_icon_t1

0x0905,	// (0x0004d642) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0005ca18) list_medium_line_t2_right_icon_t

0xc94b,	// (0x00059688) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc94b,	// (0x00059688) bg_sp_fs_ctrlbar_pane

0x868f,	// (0x000553cc) main_sp_fs_ctrlbar_button_pane_cp01

0x8699,	// (0x000553d6) main_sp_fs_ctrlbar_ddmenu_pane

0xe7d5,	// (0x0005b512) main_sp_fs_ctrlbar_pane_g1

0xe7e1,	// (0x0005b51e) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0005ca1d) main_sp_fs_ctrlbar_pane_g

0xe7ed,	// (0x0005b52a) main_sp_fs_ctrlbar_pane_t1

0x86a3,	// (0x000553e0) main_sp_fs_ctrlbar_pane

0x86c7,	// (0x00055404) main_sp_fs_listscroll_pane_te_cp01

0x0917,	// (0x0004d654) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0917,	// (0x0004d654) popup_sp_fs_action_menu_pane_cp01

0xa522,	// (0x0005725f) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa522,	// (0x0005725f) bg_sp_fs_highlight_list_pane_cp01

0x86e7,	// (0x00055424) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x86e7,	// (0x00055424) sp_fs_action_menu_list_gene_pane_g1

0xe81d,	// (0x0005b55a) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe81d,	// (0x0005b55a) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0005ca27) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0005ca27) sp_fs_action_menu_list_gene_pane_g

0x86f6,	// (0x00055433) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x86f6,	// (0x00055433) sp_fs_action_menu_list_gene_pane_t1

0x870e,	// (0x0005544b) sp_fs_action_menu_list_gene_pane_ParamLimits

0x870e,	// (0x0005544b) sp_fs_action_menu_list_gene_pane

0xe82a,	// (0x0005b567) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe82a,	// (0x0005b567) popup_sp_fs_action_menu_bg_pane

0x872d,	// (0x0005546a) sp_fs_action_menu_list_pane_ParamLimits

0x872d,	// (0x0005546a) sp_fs_action_menu_list_pane

0x874d,	// (0x0005548a) sp_fs_scroll_pane_cp01_ParamLimits

0x874d,	// (0x0005548a) sp_fs_scroll_pane_cp01

0x0947,	// (0x0004d684) list_medium_line_plain_t2_t1

0x0957,	// (0x0004d694) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0005ca2c) list_medium_line_plain_t2_t

0x0967,	// (0x0004d6a4) list_medium_line_plain_t3_t1

0x0977,	// (0x0004d6b4) list_medium_line_plain_t3_t2

0x0985,	// (0x0004d6c2) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0005ca31) list_medium_line_plain_t3_t

0x0196,	// (0x0004ced3) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0196,	// (0x0004ced3) list_medium_line_x2_t2_g2_g1

0x01ae,	// (0x0004ceeb) list_medium_line_x2_t2_g2_g2_ParamLimits

0x01ae,	// (0x0004ceeb) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x0005bf7f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x0005bf7f) list_medium_line_x2_t2_g2_g

0x0372,	// (0x0004d0af) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0372,	// (0x0004d0af) list_medium_line_x2_t2_g2_t1

0x01e3,	// (0x0004cf20) list_medium_line_x2_t2_g2_t2_ParamLimits

0x01e3,	// (0x0004cf20) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0005ca38) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0005ca38) list_medium_line_x2_t2_g2_t

0x0196,	// (0x0004ced3) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0196,	// (0x0004ced3) list_medium_line_x2_t4_g2_g1

0x0993,	// (0x0004d6d0) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0993,	// (0x0004d6d0) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0005ca3d) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0005ca3d) list_medium_line_x2_t4_g2_g

0x09a5,	// (0x0004d6e2) list_medium_line_x2_t4_g2_t1_ParamLimits

0x09a5,	// (0x0004d6e2) list_medium_line_x2_t4_g2_t1

0x09bf,	// (0x0004d6fc) list_medium_line_x2_t4_g2_t2_ParamLimits

0x09bf,	// (0x0004d6fc) list_medium_line_x2_t4_g2_t2

0x09d5,	// (0x0004d712) list_medium_line_x2_t4_g2_t3_ParamLimits

0x09d5,	// (0x0004d712) list_medium_line_x2_t4_g2_t3

0x01e3,	// (0x0004cf20) list_medium_line_x2_t4_g2_t4_ParamLimits

0x01e3,	// (0x0004cf20) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0005ca42) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0005ca42) list_medium_line_x2_t4_g2_t

0x09ea,	// (0x0004d727) list_medium_line_t3_right_iconx2_g1

0x08ed,	// (0x0004d62a) list_medium_line_t3_right_iconx2_g2

0x09f2,	// (0x0004d72f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0005ca4b) list_medium_line_t3_right_iconx2_g

0x09fc,	// (0x0004d739) list_medium_line_t3_right_iconx2_t1

0x0a0c,	// (0x0004d749) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0005ca52) list_medium_line_t3_right_iconx2_t

0x0196,	// (0x0004ced3) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0196,	// (0x0004ced3) list_medium_line_x3_t4_g4_g1

0x01a2,	// (0x0004cedf) list_medium_line_x3_t4_g4_g2_ParamLimits

0x01a2,	// (0x0004cedf) list_medium_line_x3_t4_g4_g2

0x035a,	// (0x0004d097) list_medium_line_x3_t4_g4_g3_ParamLimits

0x035a,	// (0x0004d097) list_medium_line_x3_t4_g4_g3

0x0a1a,	// (0x0004d757) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0a1a,	// (0x0004d757) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0005ca57) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0005ca57) list_medium_line_x3_t4_g4_g

0x0a26,	// (0x0004d763) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0a26,	// (0x0004d763) list_medium_line_x3_t4_g4_t1

0x0a3d,	// (0x0004d77a) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0a3d,	// (0x0004d77a) list_medium_line_x3_t4_g4_t2

0x0387,	// (0x0004d0c4) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0387,	// (0x0004d0c4) list_medium_line_x3_t4_g4_t3

0x0a58,	// (0x0004d795) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0a58,	// (0x0004d795) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0005ca60) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0005ca60) list_medium_line_x3_t4_g4_t

0x0a75,	// (0x0004d7b2) list_single_dyc_row_text_pane_t1_ParamLimits

0x0a75,	// (0x0004d7b2) list_single_dyc_row_text_pane_t1

0x0abe,	// (0x0004d7fb) list_single_dyc_row_text_pane_t2_ParamLimits

0x0abe,	// (0x0004d7fb) list_single_dyc_row_text_pane_t2

0x8773,	// (0x000554b0) list_single_dyc_row_text_pane_t3_ParamLimits

0x8773,	// (0x000554b0) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0005ca69) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0005ca69) list_single_dyc_row_text_pane_t

0x8797,	// (0x000554d4) list_single_dyc_row_pane_g1_ParamLimits

0x8797,	// (0x000554d4) list_single_dyc_row_pane_g1

0x87a3,	// (0x000554e0) list_single_dyc_row_pane_g2_ParamLimits

0x87a3,	// (0x000554e0) list_single_dyc_row_pane_g2

0x87af,	// (0x000554ec) list_single_dyc_row_pane_g3_ParamLimits

0x87af,	// (0x000554ec) list_single_dyc_row_pane_g3

0x87bb,	// (0x000554f8) list_single_dyc_row_pane_g4_ParamLimits

0x87bb,	// (0x000554f8) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0005ca76) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0005ca76) list_single_dyc_row_pane_g

0x87c7,	// (0x00055504) list_single_dyc_row_text_pane_ParamLimits

0x87c7,	// (0x00055504) list_single_dyc_row_text_pane

0x97d1,	// (0x0005650e) bg_sp_fs_scroll_pane

0xe838,	// (0x0005b575) thumb_sp_fs_scroll_pane

0x059d,	// (0x0004d2da) list_medium_line_g1_ParamLimits

0x059d,	// (0x0004d2da) list_medium_line_g1

0x0bf3,	// (0x0004d930) list_medium_line_t1_ParamLimits

0x0bf3,	// (0x0004d930) list_medium_line_t1

0x0196,	// (0x0004ced3) list_medium_line_x2_g1_ParamLimits

0x0196,	// (0x0004ced3) list_medium_line_x2_g1

0x01a2,	// (0x0004cedf) list_medium_line_x2_g2_ParamLimits

0x01a2,	// (0x0004cedf) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0005ca7f) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0005ca7f) list_medium_line_x2_g

0x87e6,	// (0x00055523) list_medium_line_x2_t1_ParamLimits

0x87e6,	// (0x00055523) list_medium_line_x2_t1

0x0196,	// (0x0004ced3) list_medium_line_x3_g1_ParamLimits

0x0196,	// (0x0004ced3) list_medium_line_x3_g1

0x01a2,	// (0x0004cedf) list_medium_line_x3_g2_ParamLimits

0x01a2,	// (0x0004cedf) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0005ca7f) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0005ca7f) list_medium_line_x3_g

0x87e6,	// (0x00055523) list_medium_line_x3_t1_ParamLimits

0x87e6,	// (0x00055523) list_medium_line_x3_t1

0xe841,	// (0x0005b57e) thumb_sp_fs_scroll_pane_g1

0xe84a,	// (0x0005b587) thumb_sp_fs_scroll_pane_g2

0xe853,	// (0x0005b590) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0005ca84) thumb_sp_fs_scroll_pane_g

0xe841,	// (0x0005b57e) bg_sp_fs_scroll_pane_g1

0xe84a,	// (0x0005b587) bg_sp_fs_scroll_pane_g2

0xe853,	// (0x0005b590) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0005ca84) bg_sp_fs_scroll_pane_g

0x0196,	// (0x0004ced3) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0196,	// (0x0004ced3) list_medium_line_x2_t3_g4_g1

0x023d,	// (0x0004cf7a) list_medium_line_x2_t3_g4_g2_ParamLimits

0x023d,	// (0x0004cf7a) list_medium_line_x2_t3_g4_g2

0x01a2,	// (0x0004cedf) list_medium_line_x2_t3_g4_g3_ParamLimits

0x01a2,	// (0x0004cedf) list_medium_line_x2_t3_g4_g3

0x01ae,	// (0x0004ceeb) list_medium_line_x2_t3_g4_g4_ParamLimits

0x01ae,	// (0x0004ceeb) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x0005bffb) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x0005bffb) list_medium_line_x2_t3_g4_g

0x0c08,	// (0x0004d945) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0c08,	// (0x0004d945) list_medium_line_x2_t3_g4_t1

0x0c22,	// (0x0004d95f) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0c22,	// (0x0004d95f) list_medium_line_x2_t3_g4_t2

0x01e3,	// (0x0004cf20) list_medium_line_x2_t3_g4_t3_ParamLimits

0x01e3,	// (0x0004cf20) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0005ca8b) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0005ca8b) list_medium_line_x2_t3_g4_t

0x059d,	// (0x0004d2da) list_medium_line_g2_g1_ParamLimits

0x059d,	// (0x0004d2da) list_medium_line_g2_g1

0x05a9,	// (0x0004d2e6) list_medium_line_g2_g2_ParamLimits

0x05a9,	// (0x0004d2e6) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0005c73d) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0005c73d) list_medium_line_g2_g

0x0c3c,	// (0x0004d979) list_medium_line_g2_t1_ParamLimits

0x0c3c,	// (0x0004d979) list_medium_line_g2_t1

0x059d,	// (0x0004d2da) list_medium_line_t3_g2_g1_ParamLimits

0x059d,	// (0x0004d2da) list_medium_line_t3_g2_g1

0x05a9,	// (0x0004d2e6) list_medium_line_t3_g2_g2_ParamLimits

0x05a9,	// (0x0004d2e6) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0005c73d) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0005c73d) list_medium_line_t3_g2_g

0x0c51,	// (0x0004d98e) list_medium_line_t3_g2_t1_ParamLimits

0x0c51,	// (0x0004d98e) list_medium_line_t3_g2_t1

0x0c6b,	// (0x0004d9a8) list_medium_line_t3_g2_t2_ParamLimits

0x0c6b,	// (0x0004d9a8) list_medium_line_t3_g2_t2

0x0c81,	// (0x0004d9be) list_medium_line_t3_g2_t3_ParamLimits

0x0c81,	// (0x0004d9be) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0005ca92) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0005ca92) list_medium_line_t3_g2_t

0x08ed,	// (0x0004d62a) list_medium_line_right_icon_g1

0x0c9b,	// (0x0004d9d8) list_medium_line_right_icon_t1

0x059d,	// (0x0004d2da) list_medium_line_t2_g1_ParamLimits

0x059d,	// (0x0004d2da) list_medium_line_t2_g1

0x0ca9,	// (0x0004d9e6) list_medium_line_t2_t1_ParamLimits

0x0ca9,	// (0x0004d9e6) list_medium_line_t2_t1

0x0cc3,	// (0x0004da00) list_medium_line_t2_t2_ParamLimits

0x0cc3,	// (0x0004da00) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0005ca99) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0005ca99) list_medium_line_t2_t

0x059d,	// (0x0004d2da) list_medium_line_t3_g1_ParamLimits

0x059d,	// (0x0004d2da) list_medium_line_t3_g1

0x0cdc,	// (0x0004da19) list_medium_line_t3_t1_ParamLimits

0x0cdc,	// (0x0004da19) list_medium_line_t3_t1

0x0cf6,	// (0x0004da33) list_medium_line_t3_t2_ParamLimits

0x0cf6,	// (0x0004da33) list_medium_line_t3_t2

0x0d0c,	// (0x0004da49) list_medium_line_t3_t3_ParamLimits

0x0d0c,	// (0x0004da49) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0005ca9e) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0005ca9e) list_medium_line_t3_t

0x059d,	// (0x0004d2da) list_medium_line_g3_g1_ParamLimits

0x059d,	// (0x0004d2da) list_medium_line_g3_g1

0x0d21,	// (0x0004da5e) list_medium_line_g3_g2_ParamLimits

0x0d21,	// (0x0004da5e) list_medium_line_g3_g2

0x05a9,	// (0x0004d2e6) list_medium_line_g3_g3_ParamLimits

0x05a9,	// (0x0004d2e6) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0005caa5) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0005caa5) list_medium_line_g3_g

0x0d2d,	// (0x0004da6a) list_medium_line_g3_t1_ParamLimits

0x0d2d,	// (0x0004da6a) list_medium_line_g3_t1

0x059d,	// (0x0004d2da) list_medium_line_t2_g3_g1_ParamLimits

0x059d,	// (0x0004d2da) list_medium_line_t2_g3_g1

0x0d21,	// (0x0004da5e) list_medium_line_t2_g3_g2_ParamLimits

0x0d21,	// (0x0004da5e) list_medium_line_t2_g3_g2

0x05a9,	// (0x0004d2e6) list_medium_line_t2_g3_g3_ParamLimits

0x05a9,	// (0x0004d2e6) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0005caa5) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0005caa5) list_medium_line_t2_g3_g

0x0d42,	// (0x0004da7f) list_medium_line_t2_g3_t1_ParamLimits

0x0d42,	// (0x0004da7f) list_medium_line_t2_g3_t1

0x0d5c,	// (0x0004da99) list_medium_line_t2_g3_t2_ParamLimits

0x0d5c,	// (0x0004da99) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0005caac) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0005caac) list_medium_line_t2_g3_t

0x059d,	// (0x0004d2da) list_medium_line_t3_g3_g1_ParamLimits

0x059d,	// (0x0004d2da) list_medium_line_t3_g3_g1

0x0d21,	// (0x0004da5e) list_medium_line_t3_g3_g2_ParamLimits

0x0d21,	// (0x0004da5e) list_medium_line_t3_g3_g2

0x05a9,	// (0x0004d2e6) list_medium_line_t3_g3_g3_ParamLimits

0x05a9,	// (0x0004d2e6) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0005caa5) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0005caa5) list_medium_line_t3_g3_g

0x0d7a,	// (0x0004dab7) list_medium_line_t3_g3_t1_ParamLimits

0x0d7a,	// (0x0004dab7) list_medium_line_t3_g3_t1

0x0d93,	// (0x0004dad0) list_medium_line_t3_g3_t2_ParamLimits

0x0d93,	// (0x0004dad0) list_medium_line_t3_g3_t2

0x0da9,	// (0x0004dae6) list_medium_line_t3_g3_t3_ParamLimits

0x0da9,	// (0x0004dae6) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0005cab1) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0005cab1) list_medium_line_t3_g3_t

0x09ea,	// (0x0004d727) list_medium_line_right_iconx2_g1

0x08ed,	// (0x0004d62a) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0005cab8) list_medium_line_right_iconx2_g

0x0dc3,	// (0x0004db00) list_medium_line_right_iconx2_t1

0x09ea,	// (0x0004d727) list_medium_line_t2_right_iconx2_g1

0x08ed,	// (0x0004d62a) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0005cab8) list_medium_line_t2_right_iconx2_g

0x0dd1,	// (0x0004db0e) list_medium_line_t2_right_iconx2_t1

0x0de1,	// (0x0004db1e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0005cabd) list_medium_line_t2_right_iconx2_t

0x0df3,	// (0x0004db30) list_medium_line_x4_t4_t1

0x0e01,	// (0x0004db3e) list_medium_line_x4_t4_t2

0x0e11,	// (0x0004db4e) list_medium_line_x4_t4_t3

0x0e21,	// (0x0004db5e) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0005cac2) list_medium_line_x4_t4_t

0x883f,	// (0x0005557c) tport_appsw_pane_ParamLimits

0x883f,	// (0x0005557c) tport_appsw_pane

0x8857,	// (0x00055594) tport_contact_pane_ParamLimits

0x8857,	// (0x00055594) tport_contact_pane

0x886f,	// (0x000555ac) tport_listscroll_pane_ParamLimits

0x886f,	// (0x000555ac) tport_listscroll_pane

0x8889,	// (0x000555c6) cell_tport_appsw_pane_ParamLimits

0x8889,	// (0x000555c6) cell_tport_appsw_pane

0xd716,	// (0x0005a453) tport_appsw_pane_g1_ParamLimits

0xd716,	// (0x0005a453) tport_appsw_pane_g1

0xe85c,	// (0x0005b599) tport_contact_pane_g1

0xe1f0,	// (0x0005af2d) tport_contact_pane_t1

0xe865,	// (0x0005b5a2) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0005cacb) tport_contact_pane_t

0xe873,	// (0x0005b5b0) list_tport_pane

0xe87c,	// (0x0005b5b9) scroll_pane_cp_030

0x88d1,	// (0x0005560e) cell_tport_appsw_pane_g1

0x88e1,	// (0x0005561e) cell_tport_appsw_pane_t1

0x88ef,	// (0x0005562c) grid_highlight_pane_cp019

0x88f7,	// (0x00055634) list_tport_double_graphic_pane_ParamLimits

0x88f7,	// (0x00055634) list_tport_double_graphic_pane

0xa522,	// (0x0005725f) list_highlight_pane_cp023_ParamLimits

0xa522,	// (0x0005725f) list_highlight_pane_cp023

0x8904,	// (0x00055641) list_tport_double_graphic_pane_g1_ParamLimits

0x8904,	// (0x00055641) list_tport_double_graphic_pane_g1

0x8911,	// (0x0005564e) list_tport_double_graphic_pane_t1_ParamLimits

0x8911,	// (0x0005564e) list_tport_double_graphic_pane_t1

0x8926,	// (0x00055663) list_tport_double_graphic_pane_t2_ParamLimits

0x8926,	// (0x00055663) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0005cad7) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0005cad7) list_tport_double_graphic_pane_t

0x97d1,	// (0x0005650e) main_cale_note_pane

0x6966,	// (0x000536a3) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6966,	// (0x000536a3) cell_vitu2_function_top_wide_pane_cp01

0x820c,	// (0x00054f49) wait_bar_pane_cp05_ParamLimits

0xa522,	// (0x0005725f) listscroll_cmail_pane

0xe885,	// (0x0005b5c2) list_cmail_pane

0x8938,	// (0x00055675) list_cmail_body_pane

0x894d,	// (0x0005568a) list_single_cmail_header_caption_pane

0x8963,	// (0x000556a0) list_single_cmail_header_detail_pane_ParamLimits

0x8963,	// (0x000556a0) list_single_cmail_header_detail_pane

0xe895,	// (0x0005b5d2) list_single_cmail_header_caption_pane_t1

0x0e31,	// (0x0004db6e) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0e31,	// (0x0004db6e) list_single_cmail_header_detail_pane_g1

0x898c,	// (0x000556c9) list_single_cmail_header_detail_pane_g2_ParamLimits

0x898c,	// (0x000556c9) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0005cadc) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0005cadc) list_single_cmail_header_detail_pane_g

0x8998,	// (0x000556d5) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8998,	// (0x000556d5) list_single_cmail_header_detail_pane_t1

0xa31d,	// (0x0005705a) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa31d,	// (0x0005705a) list_single_cmail_header_editor_pane_bg

0xe34d,	// (0x0005b08a) list_cmail_body_pane_g1

0xe8b9,	// (0x0005b5f6) list_cmail_body_pane_t1

0xd736,	// (0x0005a473) list_single_cmail_header_editor_pane_bg_g1

0xad32,	// (0x00057a6f) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd746,	// (0x0005a483) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd73e,	// (0x0005a47b) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd95a,	// (0x0005a697) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd766,	// (0x0005a4a3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd756,	// (0x0005a493) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd75e,	// (0x0005a49b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xad12,	// (0x00057a4f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x89d4,	// (0x00055711) calenote_gesture_pane_ParamLimits

0x89d4,	// (0x00055711) calenote_gesture_pane

0x89f4,	// (0x00055731) calenote_window_pane_ParamLimits

0x89f4,	// (0x00055731) calenote_window_pane

0xe8c7,	// (0x0005b604) popup_note_window_cp01

0x8a10,	// (0x0005574d) calenote_swipe_1_pane_ParamLimits

0x8a10,	// (0x0005574d) calenote_swipe_1_pane

0x85e9,	// (0x00055326) calenote_swipe_2_pane_ParamLimits

0x85e9,	// (0x00055326) calenote_swipe_2_pane

0xe6b5,	// (0x0005b3f2) calenote_swipe_1_pane_g1_ParamLimits

0xe6b5,	// (0x0005b3f2) calenote_swipe_1_pane_g1

0xe6c2,	// (0x0005b3ff) calenote_swipe_1_pane_g2_ParamLimits

0xe6c2,	// (0x0005b3ff) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0005ca00) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0005ca00) calenote_swipe_1_pane_g

0xe8d9,	// (0x0005b616) calenote_swipe_1_pane_t1_ParamLimits

0xe8d9,	// (0x0005b616) calenote_swipe_1_pane_t1

0xe6b5,	// (0x0005b3f2) calenote_swipe_2_pane_g1_ParamLimits

0xe6b5,	// (0x0005b3f2) calenote_swipe_2_pane_g1

0xe8f8,	// (0x0005b635) calenote_swipe_2_pane_g2_ParamLimits

0xe8f8,	// (0x0005b635) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0005cae8) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0005cae8) calenote_swipe_2_pane_g

0xe904,	// (0x0005b641) calenote_swipe_2_pane_t1_ParamLimits

0xe904,	// (0x0005b641) calenote_swipe_2_pane_t1

0x97d1,	// (0x0005650e) main_mup_navstr_pane

0x55a7,	// (0x000522e4) main_mup3_pane_t7_ParamLimits

0x55a7,	// (0x000522e4) main_mup3_pane_t7

0x9f08,	// (0x00056c45) main_mp4_pane_g6_ParamLimits

0x9f08,	// (0x00056c45) main_mp4_pane_g6

0xa0ca,	// (0x00056e07) main_image3_pane_t4_ParamLimits

0xa0ca,	// (0x00056e07) main_image3_pane_t4

0x8a25,	// (0x00055762) popup_navstr_preview_pane_ParamLimits

0x8a25,	// (0x00055762) popup_navstr_preview_pane

0x8a39,	// (0x00055776) scroll_navstr_pane_ParamLimits

0x8a39,	// (0x00055776) scroll_navstr_pane

0x97d1,	// (0x0005650e) bg_popup_preview_window_pane_cp04

0xe92b,	// (0x0005b668) popup_navstr_preview_pane_t1

0x8a4d,	// (0x0005578a) scroll_navstr_pane_g1_ParamLimits

0x8a4d,	// (0x0005578a) scroll_navstr_pane_g1

0x8a61,	// (0x0005579e) scroll_navstr_pane_t1_ParamLimits

0x8a61,	// (0x0005579e) scroll_navstr_pane_t1

0xe8d0,	// (0x0005b60d) bg_button_pane_cp014

0xe8d0,	// (0x0005b60d) bg_button_pane_cp030

0x0893,	// (0x0004d5d0) list_double_fisheye_pane_g4_ParamLimits

0x0893,	// (0x0004d5d0) list_double_fisheye_pane_g4

0x089f,	// (0x0004d5dc) list_double_fisheye_pane_g5_ParamLimits

0x089f,	// (0x0004d5dc) list_double_fisheye_pane_g5

0xcc7b,	// (0x000599b8) sp_fs_scroll_pane_cp03

0xe7d5,	// (0x0005b512) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe7e1,	// (0x0005b51e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0005ca1d) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7ed,	// (0x0005b52a) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe88d,	// (0x0005b5ca) sp_fs_scroll_pane_cp02

0xaa18,	// (0x00057755) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaa18,	// (0x00057755) popup_sp_fs_calendar_preview_list_single_pane

0x97d1,	// (0x0005650e) main_cam6_pano_pane

0xa522,	// (0x0005725f) main_mup3_pane_ParamLimits

0x97d1,	// (0x0005650e) main_phacti_pane

0x80df,	// (0x00054e1c) bg_button_pane_cp11

0x80f9,	// (0x00054e36) main_mobtv_info_pane_g2_ParamLimits

0x80f9,	// (0x00054e36) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0005c97d) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0005c97d) main_mobtv_info_pane_g

0x82d6,	// (0x00055013) sc_clock_pane_t5_ParamLimits

0x82d6,	// (0x00055013) sc_clock_pane_t5

0x839e,	// (0x000550db) main_radioblah_pane_g1_ParamLimits

0xe5ea,	// (0x0005b327) main_radioblah_pane_t3_ParamLimits

0xe5ea,	// (0x0005b327) main_radioblah_pane_t3

0xe602,	// (0x0005b33f) main_radioblah_pane_t4_ParamLimits

0xe602,	// (0x0005b33f) main_radioblah_pane_t4

0x83c6,	// (0x00055103) main_radioblah_text_pane_ParamLimits

0x83c6,	// (0x00055103) main_radioblah_text_pane

0x83d8,	// (0x00055115) main_radioblah_info_pane_g1_ParamLimits

0x8471,	// (0x000551ae) main_radioblah_info_pane_t4_ParamLimits

0x8471,	// (0x000551ae) main_radioblah_info_pane_t4

0xa522,	// (0x0005725f) main_sp_fs_calendar_pane

0x8a78,	// (0x000557b5) main_phacti_pane_g1

0x8a80,	// (0x000557bd) phacti_note_pane_ParamLimits

0x8a80,	// (0x000557bd) phacti_note_pane

0xe942,	// (0x0005b67f) phacti_term_pane_ParamLimits

0xe942,	// (0x0005b67f) phacti_term_pane

0xe957,	// (0x0005b694) phacti_note_pane_t1_ParamLimits

0xe957,	// (0x0005b694) phacti_note_pane_t1

0xa334,	// (0x00057071) phacti_term_pane_g1

0xa33c,	// (0x00057079) phacti_term_pane_t1_ParamLimits

0xa33c,	// (0x00057079) phacti_term_pane_t1

0xe96e,	// (0x0005b6ab) popup_sp_fs_calendar_preview_list_single_pane_g1

0xaab7,	// (0x000577f4) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0005caf2) popup_sp_fs_calendar_preview_list_single_pane_g

0xe976,	// (0x0005b6b3) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe976,	// (0x0005b6b3) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe98c,	// (0x0005b6c9) aid_popup_sp_fs_bg_corner_pane

0xcd5f,	// (0x00059a9c) popup_sp_fs_calendar_preview_bg_pane_g1

0x97d1,	// (0x0005650e) popup_sp_fs_calendar_preview_bg_pane

0xe994,	// (0x0005b6d1) popup_sp_fs_calendar_preview_list_pane

0xc94b,	// (0x00059688) bg_main_sp_fs_cale_pane_ParamLimits

0xc94b,	// (0x00059688) bg_main_sp_fs_cale_pane

0xa36f,	// (0x000570ac) listscroll_cale_mrui_pane_ParamLimits

0xa36f,	// (0x000570ac) listscroll_cale_mrui_pane

0xa384,	// (0x000570c1) listscroll_sp_fs_schedule_track_pane

0xa38d,	// (0x000570ca) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa38d,	// (0x000570ca) main_sp_fs_ctrlbar_pane_cp01

0xe99c,	// (0x0005b6d9) main_sp_fs_ribbon_pane

0xa3a0,	// (0x000570dd) popup_sp_fs_cale_preview_window

0x8af5,	// (0x00055832) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8af5,	// (0x00055832) list_single_sp_fs_schedule_track_pane

0xa522,	// (0x0005725f) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa522,	// (0x0005725f) bg_sp_fs_highlight_list_pane_cp03

0x8b08,	// (0x00055845) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8b08,	// (0x00055845) list_single_sp_fs_schedule_track_pane_g1

0x8b14,	// (0x00055851) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8b14,	// (0x00055851) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0005caf7) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0005caf7) list_single_sp_fs_schedule_track_pane_g

0x8b20,	// (0x0005585d) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8b20,	// (0x0005585d) list_single_sp_fs_schedule_track_pane_t1

0x8b3a,	// (0x00055877) sp_fs_schedule_track_pane_ParamLimits

0x8b3a,	// (0x00055877) sp_fs_schedule_track_pane

0xe9a4,	// (0x0005b6e1) sp_fs_schedule_track_pane_g1

0xe9ac,	// (0x0005b6e9) sp_fs_schedule_track_pane_g2

0xe9b4,	// (0x0005b6f1) sp_fs_schedule_track_pane_g3

0xe9bc,	// (0x0005b6f9) sp_fs_schedule_track_pane_g4

0xe9c4,	// (0x0005b701) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0005cafc) sp_fs_schedule_track_pane_g

0xd736,	// (0x0005a473) bg_sp_fs_schedule_viewer_highlight_g1

0xad32,	// (0x00057a6f) bg_sp_fs_schedule_viewer_highlight_g2

0xd73e,	// (0x0005a47b) bg_sp_fs_schedule_viewer_highlight_g3

0xd746,	// (0x0005a483) bg_sp_fs_schedule_viewer_highlight_g4

0xd95a,	// (0x0005a697) bg_sp_fs_schedule_viewer_highlight_g5

0xd756,	// (0x0005a493) bg_sp_fs_schedule_viewer_highlight_g6

0xd75e,	// (0x0005a49b) bg_sp_fs_schedule_viewer_highlight_g7

0xd766,	// (0x0005a4a3) bg_sp_fs_schedule_viewer_highlight_g8

0xad12,	// (0x00057a4f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0005cb07) bg_sp_fs_schedule_viewer_highlight_g

0x97d1,	// (0x0005650e) bg_main_sp_fs_ribbon_pane

0x8b4b,	// (0x00055888) main_sp_fs_ribbon_pane_g1

0xe9cc,	// (0x0005b709) main_sp_fs_ribbon_pane_t1

0x8b54,	// (0x00055891) main_sp_fs_ribbon_pane_t2

0xe9db,	// (0x0005b718) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0005cb1a) main_sp_fs_ribbon_pane_t

0xe9ea,	// (0x0005b727) main_sp_fs_ribbon_scheduler_pane

0xe9f2,	// (0x0005b72f) bg_main_sp_fs_ribbon_pane_g1

0xe9fb,	// (0x0005b738) bg_main_sp_fs_ribbon_pane_g2

0xea04,	// (0x0005b741) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0005,	// (0x0004cd42) bg_main_sp_fs_ribbon_pane_g

0xea0c,	// (0x0005b749) main_sp_fs_ribbon_scheduler_pane_g1

0xea15,	// (0x0005b752) main_sp_fs_ribbon_scheduler_pane_g2

0xea1e,	// (0x0005b75b) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x000c,	// (0x0004cd49) main_sp_fs_ribbon_scheduler_pane_g

0xea27,	// (0x0005b764) list_cale_mrui_pane

0x8b63,	// (0x000558a0) sp_fs_scroll_pane_cp07_ParamLimits

0x8b63,	// (0x000558a0) sp_fs_scroll_pane_cp07

0x8b7f,	// (0x000558bc) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8b7f,	// (0x000558bc) bg_sp_fs_schedule_viewer_highlight

0xea34,	// (0x0005b771) list_single_sp_fs_schedule_track_pane_cp01

0xea3c,	// (0x0005b779) list_sp_fs_schedule_track_pane

0xea44,	// (0x0005b781) sp_fs_scroll_pane_cp06_ParamLimits

0xea44,	// (0x0005b781) sp_fs_scroll_pane_cp06

0xcd5f,	// (0x00059a9c) bgmain_sp_fs_calendar_pane_g1

0x0e49,	// (0x0004db86) list_single_cale_mrui_pane_ParamLimits

0x0e49,	// (0x0004db86) list_single_cale_mrui_pane

0xa3b2,	// (0x000570ef) list_single_cale_mrui_row_pane_ParamLimits

0xa3b2,	// (0x000570ef) list_single_cale_mrui_row_pane

0xa3bf,	// (0x000570fc) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa3bf,	// (0x000570fc) list_single_cale_mrui_row_pane_g1

0xa3f7,	// (0x00057134) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa3f7,	// (0x00057134) list_single_cale_mrui_row_pane_t1

0x0e6a,	// (0x0004dba7) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0e6a,	// (0x0004dba7) list_single_cale_mrui_row_pane_t2

0xa409,	// (0x00057146) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa409,	// (0x00057146) list_single_cale_mrui_row_pane_t3

0xa438,	// (0x00057175) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa438,	// (0x00057175) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdeb,	// (0x0005cb28) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdeb,	// (0x0005cb28) list_single_cale_mrui_row_pane_t

0x0ed2,	// (0x0004dc0f) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0ed2,	// (0x0004dc0f) list_single_cmail_header_editor_pane_bg_cp01

0x0ef8,	// (0x0004dc35) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0ef8,	// (0x0004dc35) list_single_cmail_header_editor_pane_bg_cp02

0x8b8f,	// (0x000558cc) main_radioblah_text_pane_t1_ParamLimits

0x8b8f,	// (0x000558cc) main_radioblah_text_pane_t1

0xea63,	// (0x0005b7a0) cam6_indi_pane_cp01

0xea6b,	// (0x0005b7a8) cam6_mode_pane_cp01

0xea73,	// (0x0005b7b0) cam6_pano_pane

0xea7c,	// (0x0005b7b9) cam6_zoom_pane_cp01

0xea84,	// (0x0005b7c1) cam6_pano_image_pane

0xea8f,	// (0x0005b7cc) cam6_pano_pane_g1

0xe34d,	// (0x0005b08a) cam6_pano_pane_g2

0xea98,	// (0x0005b7d5) cam6_pano_pane_g3

0xeaa1,	// (0x0005b7de) cam6_pano_pane_g4

0xd342,	// (0x0005a07f) cam6_pano_pane_g5

0xeaaa,	// (0x0005b7e7) cam6_pano_pane_g6

0xeab4,	// (0x0005b7f1) cam6_pano_pane_g7

0xeabc,	// (0x0005b7f9) cam6_pano_pane_g8

0xeac5,	// (0x0005b802) cam6_pano_pane_g9

0x0008,

0xfdf4,	// (0x0005cb31) cam6_pano_pane_g

0x97d1,	// (0x0005650e) main_browser_tag_pane

0xe923,	// (0x0005b660) grid_navstr_albumart_pane

0xead0,	// (0x0005b80d) cell_navstr_albumart_pane_ParamLimits

0xead0,	// (0x0005b80d) cell_navstr_albumart_pane

0xeaf0,	// (0x0005b82d) cell_navstr_albumart_pane_g1

0xc75c,	// (0x00059499) cell_navstr_albumart_pane_g2

0xc76c,	// (0x000594a9) cell_navstr_albumart_pane_g3

0xc764,	// (0x000594a1) cell_navstr_albumart_pane_g4

0x0003,

0x0036,	// (0x0004cd73) cell_navstr_albumart_pane_g

0x8ba9,	// (0x000558e6) bt_list_pane_ParamLimits

0x8ba9,	// (0x000558e6) bt_list_pane

0x8bbd,	// (0x000558fa) bt_list_pane_t1

0x8bcc,	// (0x00055909) bt_list_pane_t2

0x0001,

0xfe07,	// (0x0005cb44) bt_list_pane_t

0x97d1,	// (0x0005650e) main_cale_prevew_pane

0x8bdb,	// (0x00055918) popup_cale_preview_window_ParamLimits

0x8bdb,	// (0x00055918) popup_cale_preview_window

0xa522,	// (0x0005725f) bg_popup_preview_window_pane_cp05_ParamLimits

0xa522,	// (0x0005725f) bg_popup_preview_window_pane_cp05

0xeaf8,	// (0x0005b835) list_cale_preview_pane_ParamLimits

0xeaf8,	// (0x0005b835) list_cale_preview_pane

0x8bf6,	// (0x00055933) list_double_cale_preview_pane_ParamLimits

0x8bf6,	// (0x00055933) list_double_cale_preview_pane

0x8c08,	// (0x00055945) list_single_cale_preview_pane_ParamLimits

0x8c08,	// (0x00055945) list_single_cale_preview_pane

0x8c1e,	// (0x0005595b) list_single_cale_preview_pane_g1

0x8c26,	// (0x00055963) list_single_cale_preview_pane_t1_ParamLimits

0x8c26,	// (0x00055963) list_single_cale_preview_pane_t1

0x8c3b,	// (0x00055978) list_double_cale_preview_pane_g1

0x8c43,	// (0x00055980) list_double_cale_preview_pane_t1_ParamLimits

0x8c43,	// (0x00055980) list_double_cale_preview_pane_t1

0x8c58,	// (0x00055995) list_double_cale_preview_pane_t2_ParamLimits

0x8c58,	// (0x00055995) list_double_cale_preview_pane_t2

0x0001,

0xfe0c,	// (0x0005cb49) list_double_cale_preview_pane_t_ParamLimits

0xfe0c,	// (0x0005cb49) list_double_cale_preview_pane_t

0x97d1,	// (0x0005650e) main_ezdial_pane

0xa522,	// (0x0005725f) main_sp_fs_email_pane_ParamLimits

0x8647,	// (0x00055384) cmail_ddmenu_btn01_pane_ParamLimits

0x8647,	// (0x00055384) cmail_ddmenu_btn01_pane

0x865a,	// (0x00055397) cmail_ddmenu_btn02_pane_ParamLimits

0x865a,	// (0x00055397) cmail_ddmenu_btn02_pane

0x867d,	// (0x000553ba) cmail_ddmenu_btn03_pane_ParamLimits

0x867d,	// (0x000553ba) cmail_ddmenu_btn03_pane

0x86a3,	// (0x000553e0) main_sp_fs_ctrlbar_pane_ParamLimits

0x86c7,	// (0x00055404) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8938,	// (0x00055675) list_cmail_body_pane_ParamLimits

0xe8a3,	// (0x0005b5e0) bg_button_pane_cp12

0xe8ac,	// (0x0005b5e9) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe8ac,	// (0x0005b5e9) list_single_cmail_header_detail_pane_g3

0xa2f9,	// (0x00057036) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa2f9,	// (0x00057036) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0005cae3) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0005cae3) list_single_cmail_header_detail_pane_t

0xa351,	// (0x0005708e) phacti_term_pane_t2_ParamLimits

0xa351,	// (0x0005708e) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0005caed) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0005caed) phacti_term_pane_t

0xeb04,	// (0x0005b841) aid_size_list_single_double

0x8c70,	// (0x000559ad) popup_ezdial_listscroll_window

0x8c8c,	// (0x000559c9) popup_number_entry_window_cp01

0xaad9,	// (0x00057816) bg_popup_call_pane_cp09

0xeb10,	// (0x0005b84d) ezdial_list_pane

0xeb18,	// (0x0005b855) scroll_pane_cp23

0xc94b,	// (0x00059688) bg_button_pane_cp028_ParamLimits

0xc94b,	// (0x00059688) bg_button_pane_cp028

0x8c9a,	// (0x000559d7) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8c9a,	// (0x000559d7) cmail_ddmenu_btn01_pane_g1

0x8ca6,	// (0x000559e3) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8ca6,	// (0x000559e3) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe11,	// (0x0005cb4e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe11,	// (0x0005cb4e) cmail_ddmenu_btn01_pane_g

0xeb20,	// (0x0005b85d) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb20,	// (0x0005b85d) cmail_ddmenu_btn01_pane_t1

0xc94b,	// (0x00059688) bg_button_pane_cp029_ParamLimits

0xc94b,	// (0x00059688) bg_button_pane_cp029

0x8cb2,	// (0x000559ef) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8cb2,	// (0x000559ef) cmail_ddmenu_btn02_pane_g1

0x8cca,	// (0x00055a07) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8cca,	// (0x00055a07) cmail_ddmenu_btn02_pane_t1

0xa522,	// (0x0005725f) bg_button_pane_cp031_ParamLimits

0xa522,	// (0x0005725f) bg_button_pane_cp031

0x8cb2,	// (0x000559ef) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8cb2,	// (0x000559ef) cmail_ddmenu_btn03_pane_g1

0x8cca,	// (0x00055a07) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8cca,	// (0x00055a07) cmail_ddmenu_btn03_pane_t1

0x614e,	// (0x00052e8b) cell_dialer2_keypad_pane_t1_ParamLimits

0x6168,	// (0x00052ea5) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6168,	// (0x00052ea5) cell_dialer2_keypad_pane_t1_copy1

0x7f02,	// (0x00054c3f) ncimui_group_button_pane

0xa522,	// (0x0005725f) main_sp_fs_calendar_pane_ParamLimits

0x894d,	// (0x0005568a) list_single_cmail_header_caption_pane_ParamLimits

0xa366,	// (0x000570a3) aid_recal_txt_sm_pane

0x97d1,	// (0x0005650e) mian_recal_day_pane

0xa3a0,	// (0x000570dd) popup_sp_fs_cale_preview_window_ParamLimits

0xeb35,	// (0x0005b872) list_recal_day_pane

0xa482,	// (0x000571bf) list_single_recal_day_pane_ParamLimits

0xa482,	// (0x000571bf) list_single_recal_day_pane

0xeb5c,	// (0x0005b899) list_single_recal_day_pane_g1_ParamLimits

0xeb5c,	// (0x0005b899) list_single_recal_day_pane_g1

0xa494,	// (0x000571d1) list_single_recal_day_pane_g2_ParamLimits

0xa494,	// (0x000571d1) list_single_recal_day_pane_g2

0xa4a0,	// (0x000571dd) list_single_recal_day_pane_g3_ParamLimits

0xa4a0,	// (0x000571dd) list_single_recal_day_pane_g3

0x0f18,	// (0x0004dc55) list_single_recal_day_pane_g4_ParamLimits

0x0f18,	// (0x0004dc55) list_single_recal_day_pane_g4

0xa4ac,	// (0x000571e9) list_single_recal_day_pane_g5_ParamLimits

0xa4ac,	// (0x000571e9) list_single_recal_day_pane_g5

0xa4b8,	// (0x000571f5) list_single_recal_day_pane_g6_ParamLimits

0xa4b8,	// (0x000571f5) list_single_recal_day_pane_g6

0x0004,

0xfe20,	// (0x0005cb5d) list_single_recal_day_pane_g_ParamLimits

0xfe20,	// (0x0005cb5d) list_single_recal_day_pane_g

0xa4cc,	// (0x00057209) list_single_recal_day_pane_t1

0xa4de,	// (0x0005721b) list_single_recal_day_pane_t2

0x0001,

0xfe2b,	// (0x0005cb68) list_single_recal_day_pane_t

0x8cee,	// (0x00055a2b) ncimui_query_button_pane_ParamLimits

0x8cee,	// (0x00055a2b) ncimui_query_button_pane

0x8cfe,	// (0x00055a3b) ncimui_query_button_pane_t1_ParamLimits

0x8cfe,	// (0x00055a3b) ncimui_query_button_pane_t1

0xeb68,	// (0x0005b8a5) ncimui_query_button_pane_t2_ParamLimits

0xeb68,	// (0x0005b8a5) ncimui_query_button_pane_t2

0x0001,

0xfe30,	// (0x0005cb6d) ncimui_query_button_pane_t_ParamLimits

0xfe30,	// (0x0005cb6d) ncimui_query_button_pane_t

0x8d11,	// (0x00055a4e) query_button_pane_ParamLimits

0x8d11,	// (0x00055a4e) query_button_pane

0x97d1,	// (0x0005650e) bg_button_pane_cp0028

0xeb7b,	// (0x0005b8b8) query_button_pane_t1

0x41c6,	// (0x00050f03) main_tport_pane_ParamLimits

0x87fc,	// (0x00055539) bg_popup_window_pane_cp01_ParamLimits

0x87fc,	// (0x00055539) bg_popup_window_pane_cp01

0x8817,	// (0x00055554) heading_pane_cp08_ParamLimits

0x8817,	// (0x00055554) heading_pane_cp08

0x882a,	// (0x00055567) heading_pane_cp07_ParamLimits

0x882a,	// (0x00055567) heading_pane_cp07

0x88d1,	// (0x0005560e) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0005cad0) cell_tport_appsw_pane_g

0x37e7,	// (0x00050524) input_candi_list_open_g1

0xaef5,	// (0x00057c32) list_cale_time_pane_g6_ParamLimits

0xaef5,	// (0x00057c32) list_cale_time_pane_g6

0x4f8f,	// (0x00051ccc) aid_size_touch_calib_1_ParamLimits

0x4f8f,	// (0x00051ccc) aid_size_touch_calib_1

0x4fa1,	// (0x00051cde) aid_size_touch_calib_2_ParamLimits

0x4fa1,	// (0x00051cde) aid_size_touch_calib_2

0x4fb9,	// (0x00051cf6) aid_size_touch_calib_3_ParamLimits

0x4fb9,	// (0x00051cf6) aid_size_touch_calib_3

0x4fd7,	// (0x00051d14) aid_size_touch_calib_4_ParamLimits

0x4fd7,	// (0x00051d14) aid_size_touch_calib_4

0x4fef,	// (0x00051d2c) main_touch_calib_button_group_pane_ParamLimits

0x4fef,	// (0x00051d2c) main_touch_calib_button_group_pane

0x5007,	// (0x00051d44) main_touch_calib_pane_g1_ParamLimits

0x5019,	// (0x00051d56) main_touch_calib_pane_g2_ParamLimits

0x502b,	// (0x00051d68) main_touch_calib_pane_g3_ParamLimits

0x503d,	// (0x00051d7a) main_touch_calib_pane_g4_ParamLimits

0xf74d,	// (0x0005c48a) main_touch_calib_pane_g_ParamLimits

0x504f,	// (0x00051d8c) main_touch_calib_pane_t1_ParamLimits

0x5069,	// (0x00051da6) main_touch_calib_pane_t2_ParamLimits

0x5083,	// (0x00051dc0) main_touch_calib_pane_t3_ParamLimits

0x5097,	// (0x00051dd4) main_touch_calib_pane_t4_ParamLimits

0x50ab,	// (0x00051de8) main_touch_calib_pane_t5_ParamLimits

0xf756,	// (0x0005c493) main_touch_calib_pane_t_ParamLimits

0xd0e2,	// (0x00059e1f) list_single_fp_cale_pane_g3_ParamLimits

0xd0e2,	// (0x00059e1f) list_single_fp_cale_pane_g3

0xa522,	// (0x0005725f) bg_button_pane_cp012_ParamLimits

0xa522,	// (0x0005725f) bg_vkb2_func_pane_cp03_ParamLimits

0x7167,	// (0x00053ea4) cell_vitu2_function_top_pane_g1_ParamLimits

0xa522,	// (0x0005725f) bg_vkb2_func_pane_cp04_ParamLimits

0x7e8d,	// (0x00054bca) main_ncimui_button_group_pane_ParamLimits

0x7e8d,	// (0x00054bca) main_ncimui_button_group_pane

0x7eed,	// (0x00054c2a) main_ncimui_pane_t3_ParamLimits

0x7eed,	// (0x00054c2a) main_ncimui_pane_t3

0xe939,	// (0x0005b676) phacti_button_group_pane

0xeb04,	// (0x0005b841) aid_size_list_single_double_ParamLimits

0x8c70,	// (0x000559ad) popup_ezdial_listscroll_window_ParamLimits

0x8c8c,	// (0x000559c9) popup_number_entry_window_cp01_ParamLimits

0x8d24,	// (0x00055a61) phacti_button_pane_ParamLimits

0x8d24,	// (0x00055a61) phacti_button_pane

0x97d1,	// (0x0005650e) bg_button_pane_cp14

0xeb89,	// (0x0005b8c6) phacti_button_pane_t1

0x8d35,	// (0x00055a72) main_touch_calib_button_pane_ParamLimits

0x8d35,	// (0x00055a72) main_touch_calib_button_pane

0xa90b,	// (0x00057648) bg_button_pane_cp18_ParamLimits

0xa90b,	// (0x00057648) bg_button_pane_cp18

0xeb97,	// (0x0005b8d4) main_touch_calib_button_pane_t1_ParamLimits

0xeb97,	// (0x0005b8d4) main_touch_calib_button_pane_t1

0xebad,	// (0x0005b8ea) main_touch_calib_button_pane_t2_ParamLimits

0xebad,	// (0x0005b8ea) main_touch_calib_button_pane_t2

0x0001,

0x006d,	// (0x0004cdaa) main_touch_calib_button_pane_t_ParamLimits

0x006d,	// (0x0004cdaa) main_touch_calib_button_pane_t

0x97d1,	// (0x0005650e) cell_ncimui_button_pane

0x97d1,	// (0x0005650e) bg_button_pane_cp032

0xebcb,	// (0x0005b908) cell_ncimui_button_pane_t1

0xa0aa,	// (0x00056de7) image3_infobar_pane_ParamLimits

0xa0aa,	// (0x00056de7) image3_infobar_pane

0x8302,	// (0x0005503f) fs_bigclock_status_pane_ParamLimits

0x8302,	// (0x0005503f) fs_bigclock_status_pane

0x830f,	// (0x0005504c) main_fs_bigclock_clock_pane_ParamLimits

0x830f,	// (0x0005504c) main_fs_bigclock_clock_pane

0x832d,	// (0x0005506a) main_fs_bigclock_indi_pane_ParamLimits

0x832d,	// (0x0005506a) main_fs_bigclock_indi_pane

0x835f,	// (0x0005509c) main_fs_bigclock_swipe_pane_ParamLimits

0x835f,	// (0x0005509c) main_fs_bigclock_swipe_pane

0x97d1,	// (0x0005650e) main_fs_clock_dumped_data

0xe45a,	// (0x0005b197) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe45a,	// (0x0005b197) list_single_fs_bigclock_indicator_pane_g1

0xe475,	// (0x0005b1b2) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe475,	// (0x0005b1b2) list_single_fs_bigclock_indicator_pane_g2

0xe48f,	// (0x0005b1cc) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe48f,	// (0x0005b1cc) list_single_fs_bigclock_indicator_pane_g3

0xe4a9,	// (0x0005b1e6) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe4a9,	// (0x0005b1e6) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0005c9b1) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0005c9b1) list_single_fs_bigclock_indicator_pane_g

0xe4d4,	// (0x0005b211) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4d4,	// (0x0005b211) list_single_fs_bigclock_indicator_pane_t1

0xe4fc,	// (0x0005b239) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4fc,	// (0x0005b239) list_single_fs_bigclock_indicator_pane_t2

0xe524,	// (0x0005b261) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe524,	// (0x0005b261) list_single_fs_bigclock_indicator_pane_t3

0xe54c,	// (0x0005b289) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe54c,	// (0x0005b289) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0005c9bc) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0005c9bc) list_single_fs_bigclock_indicator_pane_t

0xebd9,	// (0x0005b916) image3_infobar_fav_pane_ParamLimits

0xebd9,	// (0x0005b916) image3_infobar_fav_pane

0xebe9,	// (0x0005b926) image3_infobar_loc_pane_ParamLimits

0xebe9,	// (0x0005b926) image3_infobar_loc_pane

0xebfd,	// (0x0005b93a) image3_infobar_time_pane_ParamLimits

0xebfd,	// (0x0005b93a) image3_infobar_time_pane

0xcd5f,	// (0x00059a9c) image3_infobar_time_pane_g1

0xec0d,	// (0x0005b94a) image3_infobar_time_pane_t1

0xcd5f,	// (0x00059a9c) image3_infobar_loc_pane_g1

0xec1b,	// (0x0005b958) image3_infobar_loc_pane_g2

0x0001,

0xfe35,	// (0x0005cb72) image3_infobar_loc_pane_g

0xec23,	// (0x0005b960) image3_infobar_loc_pane_t1

0xcd5f,	// (0x00059a9c) image3_infobar_fav_pane_g1

0xec31,	// (0x0005b96e) image3_infobar_fav_pane_g2

0x0001,

0xfe3a,	// (0x0005cb77) image3_infobar_fav_pane_g

0xec39,	// (0x0005b976) fs_bigclock_status_battery_pane

0xec42,	// (0x0005b97f) fs_bigclock_status_signal_pane

0xec4b,	// (0x0005b988) fs_bigclock_status_title_pane

0xec54,	// (0x0005b991) fs_bigclock_status_signal_pane_g1

0xec5d,	// (0x0005b99a) fs_bigclock_status_signal_pane_g2

0x0001,

0x007c,	// (0x0004cdb9) fs_bigclock_status_signal_pane_g

0xec65,	// (0x0005b9a2) fs_bigclock_status_battery_pane_g1

0xec6e,	// (0x0005b9ab) fs_bigclock_status_battery_pane_g2

0x0001,

0x0081,	// (0x0004cdbe) fs_bigclock_status_battery_pane_g

0xec76,	// (0x0005b9b3) fs_bigclock_status_title_pane_t1

0x8d4a,	// (0x00055a87) main_fs_bigclock_clock_pane_g1

0x8d4a,	// (0x00055a87) main_fs_bigclock_clock_pane_g2

0x8d5b,	// (0x00055a98) main_fs_bigclock_clock_pane_g3

0x8d5b,	// (0x00055a98) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe3f,	// (0x0005cb7c) main_fs_bigclock_clock_pane_g

0x8d6e,	// (0x00055aab) main_fs_bigclock_clock_pane_t1

0x8d84,	// (0x00055ac1) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe48,	// (0x0005cb85) main_fs_bigclock_clock_pane_t

0xec84,	// (0x0005b9c1) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec84,	// (0x0005b9c1) list_single_fs_bigclock_indicator_pane

0xec95,	// (0x0005b9d2) list_single_fs_bigclock_pane_ParamLimits

0xec95,	// (0x0005b9d2) list_single_fs_bigclock_pane

0xecbb,	// (0x0005b9f8) main_fs_bigclock_indicator_pane_t1

0xecca,	// (0x0005ba07) list_single_fs_bigclock_pane_g1

0xecd2,	// (0x0005ba0f) list_single_fs_bigclock_pane_t1

0xcd5f,	// (0x00059a9c) main_fs_bigclock_swipe_pane_g1

0xed15,	// (0x0005ba52) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe54,	// (0x0005cb91) main_fs_bigclock_swipe_pane_g

0xed1d,	// (0x0005ba5a) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed1d,	// (0x0005ba5a) main_fs_bigclock_swipe_pane_t1

0x310f,	// (0x0004fe4c) call_type_pane_ParamLimits

0x97d1,	// (0x0005650e) main_btmg_pane

0xa3eb,	// (0x00057128) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa3eb,	// (0x00057128) list_single_cale_mrui_row_pane_g2

0x0002,

0xfde4,	// (0x0005cb21) list_single_cale_mrui_row_pane_g_ParamLimits

0xfde4,	// (0x0005cb21) list_single_cale_mrui_row_pane_g

0xa471,	// (0x000571ae) list_recal_vselct_arw_lo_pane

0xeb54,	// (0x0005b891) list_recal_vselct_arw_up_pane

0xa479,	// (0x000571b6) list_recal_vselct_pane

0x8dde,	// (0x00055b1b) btmg_button_pane

0x8de8,	// (0x00055b25) main_btmg_pane_g1

0x97d1,	// (0x0005650e) bg_button_pane_cp044

0xed3a,	// (0x0005ba77) btmg_button_pane_t1

0xc937,	// (0x00059674) aid_listscroll_gen

0xa522,	// (0x0005725f) main_cntbar_detail_pane

0xe885,	// (0x0005b5c2) list_cmail_folder_pane

0xcc7b,	// (0x000599b8) sp_fs_scroll_pane_cp03_ParamLimits

0x0f30,	// (0x0004dc6d) list_single_fs_dyc_pane_cp01_ParamLimits

0x0f30,	// (0x0004dc6d) list_single_fs_dyc_pane_cp01

0xed48,	// (0x0005ba85) aid_size_cmail_indent

0xa4f0,	// (0x0005722d) list_single_dyc_row_pane_cp01

0x8e24,	// (0x00055b61) cntbar_detail_list_pane_ParamLimits

0x8e24,	// (0x00055b61) cntbar_detail_list_pane

0x8e70,	// (0x00055bad) main_cntbar_detail_cont_pane_ParamLimits

0x8e70,	// (0x00055bad) main_cntbar_detail_cont_pane

0xcc7b,	// (0x000599b8) scroll_pane_cp032_ParamLimits

0xcc7b,	// (0x000599b8) scroll_pane_cp032

0x8e84,	// (0x00055bc1) cntbar_detail_list_event_pane_ParamLimits

0x8e84,	// (0x00055bc1) cntbar_detail_list_event_pane

0x8e34,	// (0x00055b71) cntbar_detail_list_shct_pane

0xad80,	// (0x00057abd) aid_list_gen

0xed51,	// (0x0005ba8e) aid_scroll

0xed5a,	// (0x0005ba97) aid_size_touch_scroll_bar

0x775f,	// (0x0005449c) aid_list_double

0x774d,	// (0x0005448a) aid_list_single

0x774d,	// (0x0005448a) aid_list_single_lg

0x0f46,	// (0x0004dc83) aid_list_z_g_a_sm

0x0f4e,	// (0x0004dc8b) aid_list_z_g_d

0x0f56,	// (0x0004dc93) aid_txt_z_prm

0x0f64,	// (0x0004dca1) aid_txt_z_prm_cp01

0x0f72,	// (0x0004dcaf) aid_txt_z_sec

0x8e94,	// (0x00055bd1) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8e94,	// (0x00055bd1) main_cntbar_detail_cont_pane_g1

0x8ea8,	// (0x00055be5) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8ea8,	// (0x00055be5) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe59,	// (0x0005cb96) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe59,	// (0x0005cb96) main_cntbar_detail_cont_pane_g

0xed63,	// (0x0005baa0) main_cntbar_detail_cont_pane_t1

0xed71,	// (0x0005baae) main_cntbar_detail_cont_pane_t2

0xed7f,	// (0x0005babc) main_cntbar_detail_cont_pane_t3

0x0002,

0x00aa,	// (0x0004cde7) main_cntbar_detail_cont_pane_t

0x8eb8,	// (0x00055bf5) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8eb8,	// (0x00055bf5) cell_cntbar_detail_list_shct_pane

0xed8d,	// (0x0005baca) cntbar_detail_list_shct_pane_g1

0xed96,	// (0x0005bad3) cntbar_detail_list_shct_pane_g2

0x0001,

0x00b1,	// (0x0004cdee) cntbar_detail_list_shct_pane_g

0x8ecc,	// (0x00055c09) cntbar_detail_list_event_pane_g1_ParamLimits

0x8ecc,	// (0x00055c09) cntbar_detail_list_event_pane_g1

0x8ed8,	// (0x00055c15) cntbar_detail_list_event_pane_g2_ParamLimits

0x8ed8,	// (0x00055c15) cntbar_detail_list_event_pane_g2

0x0005,

0xfe5e,	// (0x0005cb9b) cntbar_detail_list_event_pane_g_ParamLimits

0xfe5e,	// (0x0005cb9b) cntbar_detail_list_event_pane_g

0x8f44,	// (0x00055c81) cntbar_detail_list_event_pane_t1_ParamLimits

0x8f44,	// (0x00055c81) cntbar_detail_list_event_pane_t1

0x8f59,	// (0x00055c96) cntbar_detail_list_event_pane_t2_ParamLimits

0x8f59,	// (0x00055c96) cntbar_detail_list_event_pane_t2

0x0002,

0xfe6b,	// (0x0005cba8) cntbar_detail_list_event_pane_t_ParamLimits

0xfe6b,	// (0x0005cba8) cntbar_detail_list_event_pane_t

0xcd5f,	// (0x00059a9c) cell_cntbar_detail_list_shct_pane_g1

0xb505,	// (0x00058242) navi_pane_mv_g3

0xa522,	// (0x0005725f) main_cntbar_detail_pane_ParamLimits

0x97d1,	// (0x0005650e) main_notif_wgt_pane

0x9e96,	// (0x00056bd3) aid_tch_main_mp4_pane_g4

0xa0a2,	// (0x00056ddf) popup_slider_window_cp02

0xa467,	// (0x000571a4) list_recal_day_event_pane

0x8df2,	// (0x00055b2f) cntbar_detail_btn_pane_ParamLimits

0x8df2,	// (0x00055b2f) cntbar_detail_btn_pane

0x8e0b,	// (0x00055b48) cntbar_detail_btn_pane_cp01_ParamLimits

0x8e0b,	// (0x00055b48) cntbar_detail_btn_pane_cp01

0x8e34,	// (0x00055b71) cntbar_detail_list_shct_pane_ParamLimits

0x8e44,	// (0x00055b81) cntbar_detail_pane_g1_ParamLimits

0x8e44,	// (0x00055b81) cntbar_detail_pane_g1

0x8e54,	// (0x00055b91) cntbar_detail_pane_t1_ParamLimits

0x8e54,	// (0x00055b91) cntbar_detail_pane_t1

0x8ee4,	// (0x00055c21) cntbar_detail_list_event_pane_g3_ParamLimits

0x8ee4,	// (0x00055c21) cntbar_detail_list_event_pane_g3

0x8efc,	// (0x00055c39) cntbar_detail_list_event_pane_g4_ParamLimits

0x8efc,	// (0x00055c39) cntbar_detail_list_event_pane_g4

0x8f14,	// (0x00055c51) cntbar_detail_list_event_pane_g5_ParamLimits

0x8f14,	// (0x00055c51) cntbar_detail_list_event_pane_g5

0x8f2c,	// (0x00055c69) cntbar_detail_list_event_pane_g6_ParamLimits

0x8f2c,	// (0x00055c69) cntbar_detail_list_event_pane_g6

0x8f6e,	// (0x00055cab) cntbar_detail_list_event_pane_t3_ParamLimits

0x8f6e,	// (0x00055cab) cntbar_detail_list_event_pane_t3

0x8f80,	// (0x00055cbd) popup_notif_wgt_window_ParamLimits

0x8f80,	// (0x00055cbd) popup_notif_wgt_window

0x8f99,	// (0x00055cd6) popup_submenu_window_cp01_ParamLimits

0x8f99,	// (0x00055cd6) popup_submenu_window_cp01

0xaad9,	// (0x00057816) bg_popup_window_pane_cp10

0xed9f,	// (0x0005badc) listscroll_notif_wgt_pane

0xedb1,	// (0x0005baee) list_notif_wgt_window

0xedba,	// (0x0005baf7) scroll_pane_cp033

0x8faf,	// (0x00055cec) list_notif_wgt_row_pane_ParamLimits

0x8faf,	// (0x00055cec) list_notif_wgt_row_pane

0xedc3,	// (0x0005bb00) aid_size_list_notif_wgt_del

0xedd0,	// (0x0005bb0d) list_notif_wgt_row_pane_g1

0xeddc,	// (0x0005bb19) list_notif_wgt_row_pane_g2

0xedeb,	// (0x0005bb28) list_notif_wgt_row_pane_g3

0x0002,

0x00ca,	// (0x0004ce07) list_notif_wgt_row_pane_g

0xedf8,	// (0x0005bb35) list_notif_wgt_row_pane_t1

0xee0e,	// (0x0005bb4b) list_notif_wgt_row_pane_t2

0xee20,	// (0x0005bb5d) list_notif_wgt_row_pane_t3

0x0002,

0x00d1,	// (0x0004ce0e) list_notif_wgt_row_pane_t

0xd962,	// (0x0005a69f) list_recal_day_event_pane_g1

0xee32,	// (0x0005bb6f) list_recal_day_event_pane_t1

0x97d1,	// (0x0005650e) bg_button_pane_cp045

0x8fbf,	// (0x00055cfc) cntbar_detail_btn_pane_t1

0xc94b,	// (0x00059688) main_callh_pane_ParamLimits

0xc94b,	// (0x00059688) main_callh_pane

0x97d1,	// (0x0005650e) main_coverflow0_pane

0x97d1,	// (0x0005650e) main_wgtman_pane

0x8377,	// (0x000550b4) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8377,	// (0x000550b4) main_fs_bigclock_unlock_btn_pane

0x88c9,	// (0x00055606) bg_button_pane_cp16

0x88d9,	// (0x00055616) cell_tport_appsw_pane_g3

0x8fcd,	// (0x00055d0a) cf0_flow_pane_ParamLimits

0x8fcd,	// (0x00055d0a) cf0_flow_pane

0xee41,	// (0x0005bb7e) listscroll_cf0_pane

0xee4c,	// (0x0005bb89) main_cf0_pane_g1

0x8fe2,	// (0x00055d1f) main_cf0_pane_t1_ParamLimits

0x8fe2,	// (0x00055d1f) main_cf0_pane_t1

0x8ff9,	// (0x00055d36) main_cf0_pane_t2_ParamLimits

0x8ff9,	// (0x00055d36) main_cf0_pane_t2

0x0001,

0xfe72,	// (0x0005cbaf) main_cf0_pane_t_ParamLimits

0xfe72,	// (0x0005cbaf) main_cf0_pane_t

0xee5e,	// (0x0005bb9b) scroll_pane_cp11

0x9010,	// (0x00055d4d) cf0_flow_pane_g1

0x9018,	// (0x00055d55) cf0_flow_pane_g2

0x0001,

0xfe77,	// (0x0005cbb4) cf0_flow_pane_g

0x9020,	// (0x00055d5d) cf0_flow_pane_t1

0x97d1,	// (0x0005650e) main_call6_pane

0x97d1,	// (0x0005650e) main_calllock_pane

0x902e,	// (0x00055d6b) call6_btn_grp_pane_ParamLimits

0x902e,	// (0x00055d6b) call6_btn_grp_pane

0x9048,	// (0x00055d85) call6_pane_g1_ParamLimits

0x9048,	// (0x00055d85) call6_pane_g1

0x905e,	// (0x00055d9b) popup_call6_1st_window_ParamLimits

0x905e,	// (0x00055d9b) popup_call6_1st_window

0x906f,	// (0x00055dac) popup_call6_2nd_window_ParamLimits

0x906f,	// (0x00055dac) popup_call6_2nd_window

0x9080,	// (0x00055dbd) cell_call6_btn_pane_ParamLimits

0x9080,	// (0x00055dbd) cell_call6_btn_pane

0xaad9,	// (0x00057816) bg_popup_call2_in_pane_cp03

0xee69,	// (0x0005bba6) popup_call6_1st_window_g1

0xee71,	// (0x0005bbae) popup_call6_1st_window_g2

0xee79,	// (0x0005bbb6) popup_call6_1st_window_g3

0x0002,

0x00e7,	// (0x0004ce24) popup_call6_1st_window_g

0xee81,	// (0x0005bbbe) popup_call6_1st_window_t1

0xee90,	// (0x0005bbcd) popup_call6_1st_window_t2

0xee9e,	// (0x0005bbdb) popup_call6_1st_window_t3

0x0002,

0x00ee,	// (0x0004ce2b) popup_call6_1st_window_t

0xaad9,	// (0x00057816) bg_popup_call2_in_pane_cp04

0xee69,	// (0x0005bba6) popup_call6_2nd_window_g1

0xee71,	// (0x0005bbae) popup_call6_2nd_window_g2

0xee79,	// (0x0005bbb6) popup_call6_2nd_window_g3

0x0002,

0x00e7,	// (0x0004ce24) popup_call6_2nd_window_g

0xee81,	// (0x0005bbbe) popup_call6_2nd_window_t1

0x97d1,	// (0x0005650e) bg_button_pane_cp15

0xeeac,	// (0x0005bbe9) cell_call6_btn_pane_g1

0xa4f9,	// (0x00057236) cell_call6_btn_pane_t1

0x9093,	// (0x00055dd0) listscroll_wgtman_pane_ParamLimits

0x9093,	// (0x00055dd0) listscroll_wgtman_pane

0x90b4,	// (0x00055df1) wgtman_btn_pane_ParamLimits

0x90b4,	// (0x00055df1) wgtman_btn_pane

0xb30c,	// (0x00058049) aid_scroll_copy1

0xeeb5,	// (0x0005bbf2) list_wgtman_pane

0x90f7,	// (0x00055e34) wgtman_btn_pane_g1_ParamLimits

0x90f7,	// (0x00055e34) wgtman_btn_pane_g1

0x9123,	// (0x00055e60) wgtman_btn_pane_t1_ParamLimits

0x9123,	// (0x00055e60) wgtman_btn_pane_t1

0xeebf,	// (0x0005bbfc) wgtman_btn_pane_t2_ParamLimits

0xeebf,	// (0x0005bbfc) wgtman_btn_pane_t2

0x0001,

0xfe7c,	// (0x0005cbb9) wgtman_btn_pane_t_ParamLimits

0xfe7c,	// (0x0005cbb9) wgtman_btn_pane_t

0x9160,	// (0x00055e9d) listrow_wgtman_pane_ParamLimits

0x9160,	// (0x00055e9d) listrow_wgtman_pane

0x9172,	// (0x00055eaf) listrow_wgtman_pane_g1

0x917f,	// (0x00055ebc) listrow_wgtman_pane_g2

0x0001,

0xfe81,	// (0x0005cbbe) listrow_wgtman_pane_g

0x0f80,	// (0x0004dcbd) listrow_wgtman_pane_t1

0x0f98,	// (0x0004dcd5) listrow_wgtman_pane_t2

0x0001,

0xfe86,	// (0x0005cbc3) listrow_wgtman_pane_t

0x0fbe,	// (0x0004dcfb) wait_bar_pane_cp09

0xeed6,	// (0x0005bc13) main_calllock_btn_pane

0xeee0,	// (0x0005bc1d) main_calllock_pane_g1

0x97d1,	// (0x0005650e) bg_button_pane_cp17

0xeeac,	// (0x0005bbe9) main_calllock_btn_pane_g1

0xeeec,	// (0x0005bc29) main_calllock_btn_pane_t1

0x97d1,	// (0x0005650e) main_dialer3_pane

0x97d1,	// (0x0005650e) main_fmrd2_pane

0xcd5f,	// (0x00059a9c) main_fs_bigclock_unlock_btn_pane_g1

0x91a5,	// (0x00055ee2) main_fs_bigclock_unlock_btn_pane_t1

0x91b3,	// (0x00055ef0) area_fmrd2_info_pane_ParamLimits

0x91b3,	// (0x00055ef0) area_fmrd2_info_pane

0x91c4,	// (0x00055f01) area_fmrd2_visual_pane_ParamLimits

0x91c4,	// (0x00055f01) area_fmrd2_visual_pane

0x91d2,	// (0x00055f0f) fmrd2_indi_pane_ParamLimits

0x91d2,	// (0x00055f0f) fmrd2_indi_pane

0x91df,	// (0x00055f1c) area_fmrd2_visual_pane_g1

0x91e7,	// (0x00055f24) area_fmrd2_visual_pane_t1

0x91f7,	// (0x00055f34) area_fmrd2_visual_pane_t2

0x9207,	// (0x00055f44) area_fmrd2_visual_pane_t3

0x0002,

0xfe90,	// (0x0005cbcd) area_fmrd2_visual_pane_t

0x9217,	// (0x00055f54) area_fmrd2_info_pane_g1

0x921f,	// (0x00055f5c) area_fmrd2_info_pane_t1

0x922f,	// (0x00055f6c) area_fmrd2_info_pane_t2

0x923f,	// (0x00055f7c) area_fmrd2_info_pane_t3

0x924f,	// (0x00055f8c) area_fmrd2_info_pane_t4

0x0003,

0xfe97,	// (0x0005cbd4) area_fmrd2_info_pane_t

0x925d,	// (0x00055f9a) fmrd2_indi_pane_t1

0x926d,	// (0x00055faa) fmrd2_indi_pane_t2

0x927d,	// (0x00055fba) fmrd2_indi_pane_t3

0x0002,

0xfea0,	// (0x0005cbdd) fmrd2_indi_pane_t

0xe4b8,	// (0x0005b1f5) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4b8,	// (0x0005b1f5) list_single_fs_bigclock_indicator_pane_g5

0xe569,	// (0x0005b2a6) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe569,	// (0x0005b2a6) list_single_fs_bigclock_indicator_pane_t5

0x8a94,	// (0x000557d1) aid_cell_bcale_month_pane_ParamLimits

0x8a94,	// (0x000557d1) aid_cell_bcale_month_pane

0x8ab2,	// (0x000557ef) bcale_month_pane_ParamLimits

0x8ab2,	// (0x000557ef) bcale_month_pane

0x8ad6,	// (0x00055813) bcale_preview_pane_ParamLimits

0x8ad6,	// (0x00055813) bcale_preview_pane

0xecd2,	// (0x0005ba0f) list_single_fs_bigclock_pane_t1_ParamLimits

0xecf1,	// (0x0005ba2e) list_single_fs_bigclock_pane_t2_ParamLimits

0xecf1,	// (0x0005ba2e) list_single_fs_bigclock_pane_t2

0x0001,

0x009b,	// (0x0004cdd8) list_single_fs_bigclock_pane_t_ParamLimits

0x009b,	// (0x0004cdd8) list_single_fs_bigclock_pane_t

0x919d,	// (0x00055eda) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe8b,	// (0x0005cbc8) main_fs_bigclock_unlock_btn_pane_g

0x928d,	// (0x00055fca) aid_dia3_key_size_ParamLimits

0x928d,	// (0x00055fca) aid_dia3_key_size

0x929c,	// (0x00055fd9) aid_dia3_listrow_size_ParamLimits

0x929c,	// (0x00055fd9) aid_dia3_listrow_size

0x92b1,	// (0x00055fee) dia3_keypad_fun_pane_ParamLimits

0x92b1,	// (0x00055fee) dia3_keypad_fun_pane

0x92cd,	// (0x0005600a) dia3_keypad_num_pane_ParamLimits

0x92cd,	// (0x0005600a) dia3_keypad_num_pane

0x92e8,	// (0x00056025) dia3_listscroll_pane_ParamLimits

0x92e8,	// (0x00056025) dia3_listscroll_pane

0x92fb,	// (0x00056038) dia3_numentry_pane_ParamLimits

0x92fb,	// (0x00056038) dia3_numentry_pane

0xeefb,	// (0x0005bc38) dia3_list_pane

0xef06,	// (0x0005bc43) scroll_pane_cp12

0x97d1,	// (0x0005650e) bg_dia3_numentry_pane

0x930f,	// (0x0005604c) dia3_numentry_pane_t1

0x931e,	// (0x0005605b) cell_dia3_key_num_pane

0x9326,	// (0x00056063) cell_dia3_key0_fun_pane_ParamLimits

0x9326,	// (0x00056063) cell_dia3_key0_fun_pane

0x933a,	// (0x00056077) cell_dia3_key1_fun_pane_ParamLimits

0x933a,	// (0x00056077) cell_dia3_key1_fun_pane

0x9352,	// (0x0005608f) dia3_listrow_pane

0xe20b,	// (0x0005af48) bg_dia3_numentry_pane_g1

0x97d1,	// (0x0005650e) bg_button_pane_cp21

0xef11,	// (0x0005bc4e) cell_dia3_key_num_pane_t1

0xef1f,	// (0x0005bc5c) cell_dia3_key_num_pane_t2

0xef2e,	// (0x0005bc6b) cell_dia3_key_num_pane_t3

0xef3d,	// (0x0005bc7a) cell_dia3_key_num_pane_t4

0x0003,

0x0120,	// (0x0004ce5d) cell_dia3_key_num_pane_t

0x97d1,	// (0x0005650e) bg_button_pane_cp19

0x9364,	// (0x000560a1) cell_dia3_key0_fun_pane_g1

0x97d1,	// (0x0005650e) bg_button_pane_cp20

0x936c,	// (0x000560a9) cell_dia3_key1_fun_pane_g1

0x9374,	// (0x000560b1) area_left_week_number_pane

0x9380,	// (0x000560bd) area_top_day_name_pane

0x9393,	// (0x000560d0) frame_month_view_pane

0xef4c,	// (0x0005bc89) grid_month_view_pane

0x93a6,	// (0x000560e3) cell_top_day_name_pane_ParamLimits

0x93a6,	// (0x000560e3) cell_top_day_name_pane

0x93d3,	// (0x00056110) cell_area_left_week_number_pane_ParamLimits

0x93d3,	// (0x00056110) cell_area_left_week_number_pane

0x93e7,	// (0x00056124) cell_month_view_pane_ParamLimits

0x93e7,	// (0x00056124) cell_month_view_pane

0xef5a,	// (0x0005bc97) frm_month_g1

0x9414,	// (0x00056151) frm_month_g2

0x9427,	// (0x00056164) frm_month_g3

0x943a,	// (0x00056177) frm_month_g4

0x944d,	// (0x0005618a) frm_month_g5

0x9460,	// (0x0005619d) frm_month_g6

0x9473,	// (0x000561b0) frm_month_g7

0xef67,	// (0x0005bca4) frm_month_g8

0x9486,	// (0x000561c3) frm_month_g9

0x9496,	// (0x000561d3) frm_month_g10

0x94a6,	// (0x000561e3) frm_month_g11

0x94b6,	// (0x000561f3) frm_month_g12

0x94c8,	// (0x00056205) frm_month_g13

0x94da,	// (0x00056217) frm_month_g14

0x94ee,	// (0x0005622b) frm_month_g15

0x9502,	// (0x0005623f) frm_month_g16

0x000f,

0xfea7,	// (0x0005cbe4) frm_month_g

0xef74,	// (0x0005bcb1) cell_top_day_name_pane_t1

0x9516,	// (0x00056253) cell_area_left_week_number_pane_g1

0x9522,	// (0x0005625f) cell_area_left_week_number_pane_t1

0xcfc2,	// (0x00059cff) cell_month_view_pane_g1

0x9535,	// (0x00056272) cell_month_view_pane_t1

0x97d1,	// (0x0005650e) main_fps_pane

0xe79d,	// (0x0005b4da) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe79d,	// (0x0005b4da) cmail_ddmenu_btn02_pane_cp1

0xe7b9,	// (0x0005b4f6) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe7b9,	// (0x0005b4f6) cmail_ddmenu_btn02_pane_cp2

0x8cbe,	// (0x000559fb) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8cbe,	// (0x000559fb) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe16,	// (0x0005cb53) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe16,	// (0x0005cb53) cmail_ddmenu_btn02_pane_g

0x8cdc,	// (0x00055a19) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8cdc,	// (0x00055a19) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe1b,	// (0x0005cb58) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe1b,	// (0x0005cb58) cmail_ddmenu_btn02_pane_t

0x9548,	// (0x00056285) fps_text_pane_ParamLimits

0x9548,	// (0x00056285) fps_text_pane

0x955f,	// (0x0005629c) main_fps_pane_g1_ParamLimits

0x955f,	// (0x0005629c) main_fps_pane_g1

0x9579,	// (0x000562b6) wait_bar_pane_cp010_ParamLimits

0x9579,	// (0x000562b6) wait_bar_pane_cp010

0x958a,	// (0x000562c7) fps_text_pane_t1_ParamLimits

0x958a,	// (0x000562c7) fps_text_pane_t1

0xd98f,	// (0x0005a6cc) cam4_image_uncrop_pane_g1

0xd998,	// (0x0005a6d5) cam4_image_uncrop_pane_g2

0x6683,	// (0x000533c0) cam4_image_uncrop_pane_g3

0x668c,	// (0x000533c9) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0005c62b) cam4_image_uncrop_pane_g

0x9352,	// (0x0005608f) dia3_listrow_pane_ParamLimits

0x97d1,	// (0x0005650e) main_phob2_pane

0x889a,	// (0x000555d7) cell_tport_appsw_pane_cp02_ParamLimits

0x889a,	// (0x000555d7) cell_tport_appsw_pane_cp02

0x88ae,	// (0x000555eb) cell_tport_appsw_pane_cp03_ParamLimits

0x88ae,	// (0x000555eb) cell_tport_appsw_pane_cp03

0x97d1,	// (0x0005650e) phob2_contact_card_pane

0x97d1,	// (0x0005650e) phob2_listscroll_pane

0xef87,	// (0x0005bcc4) phob2_list_pane

0xef8f,	// (0x0005bccc) scroll_pane_cp034

0x95a2,	// (0x000562df) phob2_cc_data_pane_ParamLimits

0x95a2,	// (0x000562df) phob2_cc_data_pane

0x95c1,	// (0x000562fe) phob2_cc_listscroll_pane_ParamLimits

0x95c1,	// (0x000562fe) phob2_cc_listscroll_pane

0x9160,	// (0x00055e9d) list_double_large_graphic_phob2_pane_ParamLimits

0x9160,	// (0x00055e9d) list_double_large_graphic_phob2_pane

0x95df,	// (0x0005631c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x95df,	// (0x0005631c) list_double_large_graphic_phob2_pane_g1

0x0fd0,	// (0x0004dd0d) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0fd0,	// (0x0004dd0d) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfec8,	// (0x0005cc05) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfec8,	// (0x0005cc05) list_double_large_graphic_phob2_pane_g

0x0fdc,	// (0x0004dd19) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0fdc,	// (0x0004dd19) list_double_large_graphic_phob2_pane_t1

0x0ff1,	// (0x0004dd2e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0ff1,	// (0x0004dd2e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfecd,	// (0x0005cc0a) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfecd,	// (0x0005cc0a) list_double_large_graphic_phob2_pane_t

0x97d1,	// (0x0005650e) list_highlight_pane_cp024

0x95f5,	// (0x00056332) phob2_cc_button_pane

0x95fd,	// (0x0005633a) phob2_cc_data_pane_g1_ParamLimits

0x95fd,	// (0x0005633a) phob2_cc_data_pane_g1

0x9612,	// (0x0005634f) phob2_cc_data_pane_g2_ParamLimits

0x9612,	// (0x0005634f) phob2_cc_data_pane_g2

0x0001,

0xfed2,	// (0x0005cc0f) phob2_cc_data_pane_g_ParamLimits

0xfed2,	// (0x0005cc0f) phob2_cc_data_pane_g

0x9622,	// (0x0005635f) phob2_cc_data_pane_t1_ParamLimits

0x9622,	// (0x0005635f) phob2_cc_data_pane_t1

0x963a,	// (0x00056377) phob2_cc_data_pane_t2_ParamLimits

0x963a,	// (0x00056377) phob2_cc_data_pane_t2

0x9652,	// (0x0005638f) phob2_cc_data_pane_t3_ParamLimits

0x9652,	// (0x0005638f) phob2_cc_data_pane_t3

0x0002,

0xfed7,	// (0x0005cc14) phob2_cc_data_pane_t_ParamLimits

0xfed7,	// (0x0005cc14) phob2_cc_data_pane_t

0xef97,	// (0x0005bcd4) phob2_cc_list_pane_ParamLimits

0xef97,	// (0x0005bcd4) phob2_cc_list_pane

0xda4a,	// (0x0005a787) scroll_pane_cp035_ParamLimits

0xda4a,	// (0x0005a787) scroll_pane_cp035

0xa522,	// (0x0005725f) bg_button_pane_cp033

0xefa3,	// (0x0005bce0) phob2_cc_button_pane_g1

0xefaf,	// (0x0005bcec) phob2_cc_button_pane_t1

0xefc4,	// (0x0005bd01) phob2_cc_button_pane_t2

0x0001,

0x0160,	// (0x0004ce9d) phob2_cc_button_pane_t

0x966a,	// (0x000563a7) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x966a,	// (0x000563a7) list_double_large_graphic_phob2_cc_pane

0x969a,	// (0x000563d7) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x969a,	// (0x000563d7) list_double_large_graphic_phob2_cc_pane_g1

0x1003,	// (0x0004dd40) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1003,	// (0x0004dd40) list_double_large_graphic_phob2_cc_pane_g2

0x100f,	// (0x0004dd4c) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x100f,	// (0x0004dd4c) list_double_large_graphic_phob2_cc_pane_g3

0x101b,	// (0x0004dd58) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x101b,	// (0x0004dd58) list_double_large_graphic_phob2_cc_pane_g4

0xa508,	// (0x00057245) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xa508,	// (0x00057245) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfede,	// (0x0005cc1b) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfede,	// (0x0005cc1b) list_double_large_graphic_phob2_cc_pane_g

0x1027,	// (0x0004dd64) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1027,	// (0x0004dd64) list_double_large_graphic_phob2_cc_pane_t1

0x1050,	// (0x0004dd8d) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1050,	// (0x0004dd8d) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfee9,	// (0x0005cc26) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfee9,	// (0x0005cc26) list_double_large_graphic_phob2_cc_pane_t

0xefd6,	// (0x0005bd13) list_highlight_pane_cp025_ParamLimits

0xefd6,	// (0x0005bd13) list_highlight_pane_cp025

0xa522,	// (0x0005725f) bg_button_pane_cp033_ParamLimits

0xefa3,	// (0x0005bce0) phob2_cc_button_pane_g1_ParamLimits

0xefaf,	// (0x0005bcec) phob2_cc_button_pane_t1_ParamLimits

0xefc4,	// (0x0005bd01) phob2_cc_button_pane_t2_ParamLimits

0x0160,	// (0x0004ce9d) phob2_cc_button_pane_t_ParamLimits

0x12c2,	// (0x0004dfff) popup_wgtman_window

0xd850,	// (0x0005a58d) scroll_pane_cp038

0x90d9,	// (0x00055e16) wgtman_btn_pane_cp_01_ParamLimits

0x90d9,	// (0x00055e16) wgtman_btn_pane_cp_01

0xefe4,	// (0x0005bd21) wgtman_content_pane

0xefed,	// (0x0005bd2a) wgtman_heading_pane

0x97d1,	// (0x0005650e) bg_heading_pane_cp02

0xeff6,	// (0x0005bd33) wgtman_heading_pane_g1

0xeffe,	// (0x0005bd3b) wgtman_heading_pane_t1

0xf00c,	// (0x0005bd49) scroll_pane_cp036

0xf014,	// (0x0005bd51) wgtman_list_pane

0xf01c,	// (0x0005bd59) wgtman_list_pane_t1_ParamLimits

0xf01c,	// (0x0005bd59) wgtman_list_pane_t1

0xa12e,	// (0x00056e6b) cam4_grid_pane

0x05ed,	// (0x0004d32a) bg_button_pane_cp015_ParamLimits

0x72ff,	// (0x0005403c) bg_button_pane_cp016_ParamLimits

0x7312,	// (0x0005404f) bg_button_pane_cp017_ParamLimits

0x0633,	// (0x0004d370) popup_vitu2_query_window_g3_ParamLimits

0x0633,	// (0x0004d370) popup_vitu2_query_window_g3

0x06ae,	// (0x0004d3eb) popup_vitu2_query_window_t6_ParamLimits

0x06ae,	// (0x0004d3eb) popup_vitu2_query_window_t6

0x06d9,	// (0x0004d416) popup_vitu2_query_window_t7_ParamLimits

0x06d9,	// (0x0004d416) popup_vitu2_query_window_t7

0xd98f,	// (0x0005a6cc) cam4_grid_pane_g1

0xd998,	// (0x0005a6d5) cam4_grid_pane_g2

0xf036,	// (0x0005bd73) cam4_grid_pane_g3

0xf03f,	// (0x0005bd7c) cam4_grid_pane_g4

0x0003,

0xfeee,	// (0x0005cc2b) cam4_grid_pane_g

0x20f6,	// (0x0004ee33) aid_placing_vt_slider_lsc_ParamLimits

0x2401,	// (0x0004f13e) vidtel_button_pane_ParamLimits

0x2401,	// (0x0004f13e) vidtel_button_pane

0x97d1,	// (0x0005650e) bg_button_pane_cp034

0xf04a,	// (0x0005bd87) vidtel_button_pane_g1

0xf052,	// (0x0005bd8f) vidtel_button_pane_t1

0xd952,	// (0x0005a68f) aid_size_vtel_slider_touch

0xda4a,	// (0x0005a787) scroll_pane_cp039

0x806b,	// (0x00054da8) ncim_query_button_pane_cp01_ParamLimits

0x808a,	// (0x00054dc7) ncimui_query_pane_g1_ParamLimits

0xa522,	// (0x0005725f) input_focus_pane_cp012_ParamLimits

0xe249,	// (0x0005af86) ncim_query_entry_pane_t1_ParamLimits

0xda4a,	// (0x0005a787) scroll_pane_cp039_ParamLimits

0xb3f0,	// (0x0005812d) navi_pane_bcale_mc_g1

0xb3f8,	// (0x00058135) navi_pane_bcale_mc_t1

0xe802,	// (0x0005b53f) main_sp_fs_email_pane_g1

0xe80e,	// (0x0005b54b) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0005ca22) main_sp_fs_email_pane_g

0xea56,	// (0x0005b793) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea56,	// (0x0005b793) list_single_cale_mrui_row_pane_g3

0x0f26,	// (0x0004dc63) list_single_recal_day_pane_g5_event_pane

0xa4c4,	// (0x00057201) list_single_recal_day_pane_g7

0xf068,	// (0x0005bda5) list_recal_day_event_pane_cp01

0xf071,	// (0x0005bdae) list_recal_vselct_arw_lo_pane_cp01

0xf079,	// (0x0005bdb6) list_recal_vselct_arw_up_pane_cp01

0xf081,	// (0x0005bdbe) list_recal_vselct_pane_cp01

0xd962,	// (0x0005a69f) list_recal_day_event_pane_cp01_g1

0xa514,	// (0x00057251) list_recal_day_event_pane_cp01_t1

0xa4cc,	// (0x00057209) list_single_recal_day_pane_t1_ParamLimits

0xa4de,	// (0x0005721b) list_single_recal_day_pane_t2_ParamLimits

0xfe2b,	// (0x0005cb68) list_single_recal_day_pane_t_ParamLimits

0xa846,	// (0x00057583) bg_notes_pane_ParamLimits

0xa8e9,	// (0x00057626) list_notes_pane_ParamLimits

0x1608,	// (0x0004e345) scroll_pane_cp06_ParamLimits

0xa90b,	// (0x00057648) main_notes_pane_ParamLimits

0x97d1,	// (0x0005650e) main_welc_pane

0x96a6,	// (0x000563e3) main_welc_body_pane_ParamLimits

0x96a6,	// (0x000563e3) main_welc_body_pane

0x96c4,	// (0x00056401) main_welc_opti_pane_ParamLimits

0x96c4,	// (0x00056401) main_welc_opti_pane

0x9709,	// (0x00056446) main_welc_pane_t1_ParamLimits

0x9709,	// (0x00056446) main_welc_pane_t1

0x9727,	// (0x00056464) main_welc_body_row_pane_ParamLimits

0x9727,	// (0x00056464) main_welc_body_row_pane

0xe69e,	// (0x0005b3db) main_welc_opti_row_pane_ParamLimits

0xe69e,	// (0x0005b3db) main_welc_opti_row_pane

0xf08b,	// (0x0005bdc8) main_welc_opti_row_pane_g1

0x973b,	// (0x00056478) main_welc_opti_row_pane_t1

0xf093,	// (0x0005bdd0) main_welc_body_row_pane_t1

0xeda9,	// (0x0005bae6) popup_notif_wgt_heading_pane

0xedc3,	// (0x0005bb00) aid_size_list_notif_wgt_del_ParamLimits

0xedd0,	// (0x0005bb0d) list_notif_wgt_row_pane_g1_ParamLimits

0xeddc,	// (0x0005bb19) list_notif_wgt_row_pane_g2_ParamLimits

0xedeb,	// (0x0005bb28) list_notif_wgt_row_pane_g3_ParamLimits

0x00ca,	// (0x0004ce07) list_notif_wgt_row_pane_g_ParamLimits

0xedf8,	// (0x0005bb35) list_notif_wgt_row_pane_t1_ParamLimits

0xee0e,	// (0x0005bb4b) list_notif_wgt_row_pane_t2_ParamLimits

0xee20,	// (0x0005bb5d) list_notif_wgt_row_pane_t3_ParamLimits

0x00d1,	// (0x0004ce0e) list_notif_wgt_row_pane_t_ParamLimits

0x9172,	// (0x00055eaf) listrow_wgtman_pane_g1_ParamLimits

0x917f,	// (0x00055ebc) listrow_wgtman_pane_g2_ParamLimits

0xfe81,	// (0x0005cbbe) listrow_wgtman_pane_g_ParamLimits

0x0f80,	// (0x0004dcbd) listrow_wgtman_pane_t1_ParamLimits

0x0f98,	// (0x0004dcd5) listrow_wgtman_pane_t2_ParamLimits

0xfe86,	// (0x0005cbc3) listrow_wgtman_pane_t_ParamLimits

0x0fbe,	// (0x0004dcfb) wait_bar_pane_cp09_ParamLimits

0x97d1,	// (0x0005650e) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0005bddf) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0005bde7) popup_notif_wgt_heading_pane_t1

0x97d1,	// (0x0005650e) main_vids_pane

0x97d1,	// (0x0005650e) vids_listscroll_pane

0x974a,	// (0x00056487) scroll_pane_cp040

0x97d1,	// (0x0005650e) vids_list_pane

0x9755,	// (0x00056492) vids_list_double_pane_ParamLimits

0x9755,	// (0x00056492) vids_list_double_pane

0x9766,	// (0x000564a3) vids_list_double_pane_g1

0x976f,	// (0x000564ac) vids_list_double_pane_t1

0x977f,	// (0x000564bc) vids_list_double_pane_t2

0x0001,

0xfefc,	// (0x0005cc39) vids_list_double_pane_t

0xa522,	// (0x0005725f) main_ncimui_pane_ParamLimits

0x7ea1,	// (0x00054bde) main_ncimui_pane_g1_ParamLimits

0x7ead,	// (0x00054bea) main_ncimui_pane_g2_ParamLimits

0x7ead,	// (0x00054bea) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0005c927) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0005c927) main_ncimui_pane_g

0x96df,	// (0x0005641c) main_welc_pane_g1_ParamLimits

0x96df,	// (0x0005641c) main_welc_pane_g1

0x96f4,	// (0x00056431) main_welc_pane_g2_ParamLimits

0x96f4,	// (0x00056431) main_welc_pane_g2

0x0001,

0xfef7,	// (0x0005cc34) main_welc_pane_g_ParamLimits

0xfef7,	// (0x0005cc34) main_welc_pane_g

0xa846,	// (0x00057583) listscroll_mce_pane_ParamLimits

0xb545,	// (0x00058282) wait_bar_pane_cp10

0xc93f,	// (0x0005967c) main_cale_day_pane_ParamLimits

0xc93f,	// (0x0005967c) main_cale_week_pane_ParamLimits

0xa846,	// (0x00057583) main_messa_pane_ParamLimits

0x5930,	// (0x0005266d) main_clock2_btn_pane_ParamLimits

0x5930,	// (0x0005266d) main_clock2_btn_pane

0xd16a,	// (0x00059ea7) main_clock2_btn_pane_cp01_ParamLimits

0xd16a,	// (0x00059ea7) main_clock2_btn_pane_cp01

0xea27,	// (0x0005b764) list_cale_mrui_pane_ParamLimits

0xee56,	// (0x0005bb93) main_cf0_pane_g2

0x0001,

0x00d8,	// (0x0004ce15) main_cf0_pane_g

0x9374,	// (0x000560b1) area_left_week_number_pane_ParamLimits

0x9380,	// (0x000560bd) area_top_day_name_pane_ParamLimits

0x9393,	// (0x000560d0) frame_month_view_pane_ParamLimits

0xef4c,	// (0x0005bc89) grid_month_view_pane_ParamLimits

0xef5a,	// (0x0005bc97) frm_month_g1_ParamLimits

0x9414,	// (0x00056151) frm_month_g2_ParamLimits

0x9427,	// (0x00056164) frm_month_g3_ParamLimits

0x943a,	// (0x00056177) frm_month_g4_ParamLimits

0x944d,	// (0x0005618a) frm_month_g5_ParamLimits

0x9460,	// (0x0005619d) frm_month_g6_ParamLimits

0x9473,	// (0x000561b0) frm_month_g7_ParamLimits

0xef67,	// (0x0005bca4) frm_month_g8_ParamLimits

0x9486,	// (0x000561c3) frm_month_g9_ParamLimits

0x9496,	// (0x000561d3) frm_month_g10_ParamLimits

0x94a6,	// (0x000561e3) frm_month_g11_ParamLimits

0x94b6,	// (0x000561f3) frm_month_g12_ParamLimits

0x94c8,	// (0x00056205) frm_month_g13_ParamLimits

0x94da,	// (0x00056217) frm_month_g14_ParamLimits

0x94ee,	// (0x0005622b) frm_month_g15_ParamLimits

0x9502,	// (0x0005623f) frm_month_g16_ParamLimits

0xfea7,	// (0x0005cbe4) frm_month_g_ParamLimits

0xef74,	// (0x0005bcb1) cell_top_day_name_pane_t1_ParamLimits

0x9516,	// (0x00056253) cell_area_left_week_number_pane_g1_ParamLimits

0x9522,	// (0x0005625f) cell_area_left_week_number_pane_t1_ParamLimits

0xcfc2,	// (0x00059cff) cell_month_view_pane_g1_ParamLimits

0x9535,	// (0x00056272) cell_month_view_pane_t1_ParamLimits

0xa83e,	// (0x0005757b) main_clock2_btn_pane_g1

0xf0b8,	// (0x0005bdf5) main_clock2_btn_pane_t1

0xa522,	// (0x0005725f) listscroll_cmail_pane_ParamLimits

0xe802,	// (0x0005b53f) main_sp_fs_email_pane_g1_ParamLimits

0xe80e,	// (0x0005b54b) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0005ca22) main_sp_fs_email_pane_g_ParamLimits

0xeb35,	// (0x0005b872) list_recal_day_pane_ParamLimits

0xeb46,	// (0x0005b883) mian_recal_day_pane_t1

0x0b34,	// (0x0004d871) list_single_dyc_row_text_pane_t4_ParamLimits

0x0b34,	// (0x0004d871) list_single_dyc_row_text_pane_t4

0x0b7d,	// (0x0004d8ba) list_single_dyc_row_text_pane_t5_ParamLimits

0x0b7d,	// (0x0004d8ba) list_single_dyc_row_text_pane_t5

0x8785,	// (0x000554c2) list_single_dyc_row_text_pane_t6_ParamLimits

0x8785,	// (0x000554c2) list_single_dyc_row_text_pane_t6

0x3055,	// (0x0004fd92) aid_mgn_list_cale_time_pane

0xa522,	// (0x0005725f) main_gallery2_pane_ParamLimits

0xd180,	// (0x00059ebd) main_clock2_pane_cp01_t1

0xd190,	// (0x00059ecd) main_clock2_pane_cp01_t3

0x0001,

0xf7c0,	// (0x0005c4fd) main_clock2_pane_cp01_t

0x19b4,	// (0x0004e6f1) cale_week_scroll_pane_g16_ParamLimits

0x19b4,	// (0x0004e6f1) cale_week_scroll_pane_g16

0xaad9,	// (0x00057816) vorec_slider_pane

0xf052,	// (0x0005bd8f) vidtel_button_pane_t1_ParamLimits

0x8d4a,	// (0x00055a87) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8d4a,	// (0x00055a87) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8d5b,	// (0x00055a98) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8d5b,	// (0x00055a98) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe3f,	// (0x0005cb7c) main_fs_bigclock_clock_pane_g_ParamLimits

0x8d6e,	// (0x00055aab) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8d84,	// (0x00055ac1) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe48,	// (0x0005cb85) main_fs_bigclock_clock_pane_t_ParamLimits

0x5127,	// (0x00051e64) main_mup3_lyrics_pane_ParamLimits

0x5127,	// (0x00051e64) main_mup3_lyrics_pane

0x97b5,	// (0x000564f2) main_mup3_lyrics_pane_t1_ParamLimits

0x97b5,	// (0x000564f2) main_mup3_lyrics_pane_t1

0x9e80,	// (0x00056bbd) aid_main_mp4_pane_t1_area

0x9e8a,	// (0x00056bc7) aid_main_mp4_pane_t2_area

0x9f36,	// (0x00056c73) main_mp4_pane_g7_ParamLimits

0x9f36,	// (0x00056c73) main_mp4_pane_g7

0x9f42,	// (0x00056c7f) main_mp4_pane_g8_ParamLimits

0x9f42,	// (0x00056c7f) main_mp4_pane_g8

0x6456,	// (0x00053193) aid_call6_pane_g1_size

0x9684,	// (0x000563c1) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9684,	// (0x000563c1) list_double_large_graphic_phob2_other_pane

0xae94,	// (0x00057bd1) list_double_large_graphic_phob2_other_pane_g1

0x97d1,	// (0x0005650e) list_highlight_pane_cp026
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small
