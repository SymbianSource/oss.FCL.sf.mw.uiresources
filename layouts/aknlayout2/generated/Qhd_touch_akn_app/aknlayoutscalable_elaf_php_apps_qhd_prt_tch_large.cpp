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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x000761e6 };

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
0x67a3,	// (0x0007c989) Screen

0x67af,	// (0x0007c995) application_window

0x680b,	// (0x0007c9f1) area_bottom_pane_ParamLimits

0x680b,	// (0x0007c9f1) area_bottom_pane

0x6864,	// (0x0007ca4a) area_top_pane_ParamLimits

0x6864,	// (0x0007ca4a) area_top_pane

0x68c8,	// (0x0007caae) call_video_uplink_pane_ParamLimits

0x68c8,	// (0x0007caae) call_video_uplink_pane

0x6907,	// (0x0007caed) main_pane_ParamLimits

0x6907,	// (0x0007caed) main_pane

0x1e7f,	// (0x00078065) context_pane

0x9c51,	// (0x0007fe37) navi_pane

0x9c77,	// (0x0007fe5d) popup_cale_events_window_ParamLimits

0x9c77,	// (0x0007fe5d) popup_cale_events_window

0x1e92,	// (0x00078078) popup_mup_playback_window

0x9c8f,	// (0x0007fe75) signal_pane

0xeec3,	// (0x000850a9) main_browser_pane

0x0a6b,	// (0x00076c51) main_burst_pane

0x9add,	// (0x0007fcc3) main_calc_pane

0x1e65,	// (0x0007804b) main_cale_day_pane

0x7044,	// (0x0007d22a) main_cale_month_pane

0x1e65,	// (0x0007804b) main_cale_week_pane

0x0a6b,	// (0x00076c51) main_call_pane

0xeb8c,	// (0x00084d72) main_call_poc_pane

0x0a6b,	// (0x00076c51) main_camera_pane

0x0a6b,	// (0x00076c51) main_chi_dic_pane

0x07e8,	// (0x000769ce) main_clock_pane

0xeb8c,	// (0x00084d72) main_fmradio_pane

0x0a6b,	// (0x00076c51) main_graph_messa_pane

0xeb8c,	// (0x00084d72) main_help_pane

0xeec3,	// (0x000850a9) main_im_pane

0xedfe,	// (0x00084fe4) main_image_pane_ParamLimits

0xedfe,	// (0x00084fe4) main_image_pane

0xeb8c,	// (0x00084d72) main_location2_pane

0x0a6b,	// (0x00076c51) main_location_pane

0xedfe,	// (0x00084fe4) main_messa_pane

0xeb8c,	// (0x00084d72) main_mp2_pane

0x0a6b,	// (0x00076c51) main_mp_pane

0xeb8c,	// (0x00084d72) main_msg_pane

0xeb8c,	// (0x00084d72) main_mup_eq_pane

0xeb8c,	// (0x00084d72) main_mup_pane

0xeec3,	// (0x000850a9) main_notes_pane

0xeb8c,	// (0x00084d72) main_pec_pane

0xeb8c,	// (0x00084d72) main_phob_pane

0xeb8c,	// (0x00084d72) main_pinb_pane

0xeb8c,	// (0x00084d72) main_postcard_pane

0xeb8c,	// (0x00084d72) main_qdial_pane

0x0a6b,	// (0x00076c51) main_skin_pane

0xeb8c,	// (0x00084d72) main_smil2_pane

0x0a6b,	// (0x00076c51) main_smil_pane

0x0a6b,	// (0x00076c51) main_video_pane

0x0a6b,	// (0x00076c51) main_video_tele_pane

0xedfe,	// (0x00084fe4) main_viewer_pane_ParamLimits

0xedfe,	// (0x00084fe4) main_viewer_pane

0x0a6b,	// (0x00076c51) main_vorec_pane

0x9b1b,	// (0x0007fd01) popup_blid_sat_info_window_ParamLimits

0x9b1b,	// (0x0007fd01) popup_blid_sat_info_window

0x9b3b,	// (0x0007fd21) popup_dyc_status_message_window_ParamLimits

0x9b3b,	// (0x0007fd21) popup_dyc_status_message_window

0x9b4b,	// (0x0007fd31) popup_grid_large_graphic_window_ParamLimits

0x9b4b,	// (0x0007fd31) popup_grid_large_graphic_window

0x9bdc,	// (0x0007fdc2) popup_loc_request_window_ParamLimits

0x9bdc,	// (0x0007fdc2) popup_loc_request_window

0x9c29,	// (0x0007fe0f) popup_wml_address_window_ParamLimits

0x9c29,	// (0x0007fe0f) popup_wml_address_window

0x99b5,	// (0x0007fb9b) call_muted_g1

0x9677,	// (0x0007f85d) popup_call_audio_conf_window_ParamLimits

0x9677,	// (0x0007f85d) popup_call_audio_conf_window

0x99c5,	// (0x0007fbab) popup_call_audio_first_window_ParamLimits

0x99c5,	// (0x0007fbab) popup_call_audio_first_window

0x9a05,	// (0x0007fbeb) popup_call_audio_in_window_ParamLimits

0x9a05,	// (0x0007fbeb) popup_call_audio_in_window

0x9a29,	// (0x0007fc0f) popup_call_audio_out_window_ParamLimits

0x9a29,	// (0x0007fc0f) popup_call_audio_out_window

0x9a4b,	// (0x0007fc31) popup_call_audio_second_window_ParamLimits

0x9a4b,	// (0x0007fc31) popup_call_audio_second_window

0x9a7b,	// (0x0007fc61) popup_call_audio_wait_window_ParamLimits

0x9a7b,	// (0x0007fc61) popup_call_audio_wait_window

0x9a9c,	// (0x0007fc82) popup_number_entry_window_ParamLimits

0x9a9c,	// (0x0007fc82) popup_number_entry_window

0xe779,	// (0x0008495f) bg_popup_call_pane_cp05_ParamLimits

0xe779,	// (0x0008495f) bg_popup_call_pane_cp05

0xe799,	// (0x0008497f) popup_number_entry_window_t1

0xe7ac,	// (0x00084992) popup_number_entry_window_t2

0xe7be,	// (0x000849a4) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x000852ac) popup_number_entry_window_t

0xe7d0,	// (0x000849b6) text_title_cp2

0xe7e3,	// (0x000849c9) bg_popup_call_pane_cp_ParamLimits

0xe7e3,	// (0x000849c9) bg_popup_call_pane_cp

0xe7f1,	// (0x000849d7) call_thumbnail_pane

0xe7f9,	// (0x000849df) popup_call_audio_in_window_g1_ParamLimits

0xe7f9,	// (0x000849df) popup_call_audio_in_window_g1

0xe805,	// (0x000849eb) popup_call_audio_in_window_g2_ParamLimits

0xe805,	// (0x000849eb) popup_call_audio_in_window_g2

0xe811,	// (0x000849f7) popup_call_audio_in_window_g3_ParamLimits

0xe811,	// (0x000849f7) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x000852b5) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x000852b5) popup_call_audio_in_window_g

0xe81d,	// (0x00084a03) popup_call_audio_in_window_t1_ParamLimits

0xe81d,	// (0x00084a03) popup_call_audio_in_window_t1

0xe839,	// (0x00084a1f) popup_call_audio_in_window_t2_ParamLimits

0xe839,	// (0x00084a1f) popup_call_audio_in_window_t2

0xe855,	// (0x00084a3b) popup_call_audio_in_window_t3_ParamLimits

0xe855,	// (0x00084a3b) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x000852bc) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x000852bc) popup_call_audio_in_window_t

0xe7e3,	// (0x000849c9) bg_popup_call_pane_cp01_ParamLimits

0xe7e3,	// (0x000849c9) bg_popup_call_pane_cp01

0xe7f1,	// (0x000849d7) call_thumbnail_pane_cp02

0xe868,	// (0x00084a4e) call_type_pane_cp022

0xe870,	// (0x00084a56) popup_call_audio_out_window_g1_ParamLimits

0xe870,	// (0x00084a56) popup_call_audio_out_window_g1

0xe882,	// (0x00084a68) popup_call_audio_out_window_g2_ParamLimits

0xe882,	// (0x00084a68) popup_call_audio_out_window_g2

0xe88e,	// (0x00084a74) popup_call_audio_out_window_g3_ParamLimits

0xe88e,	// (0x00084a74) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x000852c3) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x000852c3) popup_call_audio_out_window_g

0xe8a0,	// (0x00084a86) popup_call_audio_out_window_t1_ParamLimits

0xe8a0,	// (0x00084a86) popup_call_audio_out_window_t1

0xe8b8,	// (0x00084a9e) popup_call_audio_out_window_t2_ParamLimits

0xe8b8,	// (0x00084a9e) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x000852ca) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x000852ca) popup_call_audio_out_window_t

0xe8cd,	// (0x00084ab3) bg_popup_call_pane_ParamLimits

0xe8cd,	// (0x00084ab3) bg_popup_call_pane

0x6b08,	// (0x0007ccee) call_thumbnail_pane_cp_ParamLimits

0x6b08,	// (0x0007ccee) call_thumbnail_pane_cp

0xe951,	// (0x00084b37) call_type_pane_cp01_ParamLimits

0xe951,	// (0x00084b37) call_type_pane_cp01

0xe995,	// (0x00084b7b) popup_call_audio_first_window_g1_ParamLimits

0xe995,	// (0x00084b7b) popup_call_audio_first_window_g1

0xe9e1,	// (0x00084bc7) popup_call_audio_first_window_g2_ParamLimits

0xe9e1,	// (0x00084bc7) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x000852cf) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x000852cf) popup_call_audio_first_window_g

0xea25,	// (0x00084c0b) popup_call_audio_first_window_t1_ParamLimits

0xea25,	// (0x00084c0b) popup_call_audio_first_window_t1

0xead1,	// (0x00084cb7) popup_call_audio_first_window_t4_ParamLimits

0xead1,	// (0x00084cb7) popup_call_audio_first_window_t4

0xeb5d,	// (0x00084d43) popup_call_audio_first_window_t5_ParamLimits

0xeb5d,	// (0x00084d43) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x000852d4) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x000852d4) popup_call_audio_first_window_t

0xeb8c,	// (0x00084d72) bg_popup_call_pane_cp02

0xeb96,	// (0x00084d7c) call_type_pane_cp023

0xeb9e,	// (0x00084d84) popup_call_audio_wait_window_g1

0xeba6,	// (0x00084d8c) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000852db) popup_call_audio_wait_window_g

0xebae,	// (0x00084d94) popup_call_audio_wait_window_t3

0xebd3,	// (0x00084db9) bg_popup_call_pane_cp03_ParamLimits

0xebd3,	// (0x00084db9) bg_popup_call_pane_cp03

0xec33,	// (0x00084e19) call_thumbnail_pane_cp011_ParamLimits

0xec33,	// (0x00084e19) call_thumbnail_pane_cp011

0xec3f,	// (0x00084e25) call_type_pane_cp034_ParamLimits

0xec3f,	// (0x00084e25) call_type_pane_cp034

0xec7b,	// (0x00084e61) popup_call_audio_second_window_g1_ParamLimits

0xec7b,	// (0x00084e61) popup_call_audio_second_window_g1

0xecb7,	// (0x00084e9d) popup_call_audio_second_window_g2_ParamLimits

0xecb7,	// (0x00084e9d) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x000852e0) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x000852e0) popup_call_audio_second_window_g

0xecf3,	// (0x00084ed9) popup_call_audio_second_window_t1_ParamLimits

0xecf3,	// (0x00084ed9) popup_call_audio_second_window_t1

0xed74,	// (0x00084f5a) popup_call_audio_second_window_t2_ParamLimits

0xed74,	// (0x00084f5a) popup_call_audio_second_window_t2

0xedaa,	// (0x00084f90) popup_call_audio_second_window_t3_ParamLimits

0xedaa,	// (0x00084f90) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x000852e5) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x000852e5) popup_call_audio_second_window_t

0xeb8c,	// (0x00084d72) bg_popup_call_pane_cp04

0xede0,	// (0x00084fc6) list_conf_pane

0xede8,	// (0x00084fce) popup_call_audio_conf_window_t1

0xedf6,	// (0x00084fdc) call_thumbnail_pane_g1

0xedfe,	// (0x00084fe4) bg_pinb_pane_ParamLimits

0xedfe,	// (0x00084fe4) bg_pinb_pane

0xee0c,	// (0x00084ff2) find_pinb_pane

0xee15,	// (0x00084ffb) listscroll_pinb_pane_ParamLimits

0xee15,	// (0x00084ffb) listscroll_pinb_pane

0xee24,	// (0x0008500a) pinb_bg_pane_g1

0x6b2c,	// (0x0007cd12) pinb_bg_pane_g2

0x6b38,	// (0x0007cd1e) pinb_bg_pane_g3

0x6b44,	// (0x0007cd2a) pinb_bg_pane_g4

0x6b50,	// (0x0007cd36) pinb_bg_pane_g5

0x6b5c,	// (0x0007cd42) pinb_bg_pane_g6

0x6b67,	// (0x0007cd4d) pinb_bg_pane_g7

0x6b72,	// (0x0007cd58) pinb_bg_pane_g8

0x6b7d,	// (0x0007cd63) pinb_bg_pane_g9

0x6b87,	// (0x0007cd6d) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x000852ec) pinb_bg_pane_g

0x6ba4,	// (0x0007cd8a) grid_pinb_pane

0x6baf,	// (0x0007cd95) list_pinb_pane

0x6bba,	// (0x0007cda0) scroll_pane_cp01_ParamLimits

0x6bba,	// (0x0007cda0) scroll_pane_cp01

0xee2e,	// (0x00085014) find_pinb_pane_g1_ParamLimits

0xee2e,	// (0x00085014) find_pinb_pane_g1

0xee46,	// (0x0008502c) find_pinb_pane_t1

0xee58,	// (0x0008503e) find_pinb_pane_t2

0x0001,

0xf120,	// (0x00085306) find_pinb_pane_t

0xee6d,	// (0x00085053) input_focus_pane_cp01_ParamLimits

0xee6d,	// (0x00085053) input_focus_pane_cp01

0x6bcc,	// (0x0007cdb2) cell_pinb_pane_ParamLimits

0x6bcc,	// (0x0007cdb2) cell_pinb_pane

0x6bf4,	// (0x0007cdda) cell_pinb_pane_g1_ParamLimits

0x6bf4,	// (0x0007cdda) cell_pinb_pane_g1

0x6c09,	// (0x0007cdef) cell_pinb_pane_g2_ParamLimits

0x6c09,	// (0x0007cdef) cell_pinb_pane_g2

0xee79,	// (0x0008505f) cell_pinb_pane_g3_ParamLimits

0xee79,	// (0x0008505f) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0008530b) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0008530b) cell_pinb_pane_g

0xeb8c,	// (0x00084d72) grid_highlight_pane_cp01

0x6c15,	// (0x0007cdfb) list_pinb_item_pane_ParamLimits

0x6c15,	// (0x0007cdfb) list_pinb_item_pane

0xeb8c,	// (0x00084d72) list_highlight_pane_cp02

0x6c3b,	// (0x0007ce21) list_pinb_item_pane_g1_ParamLimits

0x6c3b,	// (0x0007ce21) list_pinb_item_pane_g1

0x6c48,	// (0x0007ce2e) list_pinb_item_pane_g2_ParamLimits

0x6c48,	// (0x0007ce2e) list_pinb_item_pane_g2

0x6c54,	// (0x0007ce3a) list_pinb_item_pane_g3_ParamLimits

0x6c54,	// (0x0007ce3a) list_pinb_item_pane_g3

0x6c65,	// (0x0007ce4b) list_pinb_item_pane_g4_ParamLimits

0x6c65,	// (0x0007ce4b) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x00085312) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x00085312) list_pinb_item_pane_g

0x6c71,	// (0x0007ce57) list_pinb_item_pane_t1_ParamLimits

0x6c71,	// (0x0007ce57) list_pinb_item_pane_t1

0x6ca2,	// (0x0007ce88) calc_display_pane

0x6cc0,	// (0x0007cea6) calc_paper_pane

0x6cdc,	// (0x0007cec2) grid_calc_pane

0xeb8c,	// (0x00084d72) bg_list_pane_cp01

0x6d08,	// (0x0007ceee) clock_g1

0x6d10,	// (0x0007cef6) clock_g2

0x0001,

0xf135,	// (0x0008531b) clock_g

0x6d1a,	// (0x0007cf00) clock_t1_ParamLimits

0x6d1a,	// (0x0007cf00) clock_t1

0x6d2f,	// (0x0007cf15) clock_t2_ParamLimits

0x6d2f,	// (0x0007cf15) clock_t2

0x6d41,	// (0x0007cf27) clock_t3_ParamLimits

0x6d41,	// (0x0007cf27) clock_t3

0x6d53,	// (0x0007cf39) clock_t4_ParamLimits

0x6d53,	// (0x0007cf39) clock_t4

0x6d65,	// (0x0007cf4b) clock_t5_ParamLimits

0x6d65,	// (0x0007cf4b) clock_t5

0x6d7a,	// (0x0007cf60) clock_t6_ParamLimits

0x6d7a,	// (0x0007cf60) clock_t6

0x6d8c,	// (0x0007cf72) clock_t7_ParamLimits

0x6d8c,	// (0x0007cf72) clock_t7

0x6d9e,	// (0x0007cf84) clock_t8_ParamLimits

0x6d9e,	// (0x0007cf84) clock_t8

0x6db4,	// (0x0007cf9a) clock_t9_ParamLimits

0x6db4,	// (0x0007cf9a) clock_t9

0x0008,

0xf13a,	// (0x00085320) clock_t_ParamLimits

0xf13a,	// (0x00085320) clock_t

0xee85,	// (0x0008506b) popup_clock_analogue_window_cp02

0xee85,	// (0x0008506b) popup_clock_digital_window_cp01

0xee8d,	// (0x00085073) listscroll_help_pane

0xeb8c,	// (0x00084d72) phob_pre_status_pane

0xee97,	// (0x0008507d) grid_qdial_pane

0xedfe,	// (0x00084fe4) listscroll_mce_pane

0xedfe,	// (0x00084fe4) bg_notes_pane

0xeea1,	// (0x00085087) list_notes_pane

0x6dca,	// (0x0007cfb0) scroll_pane_cp06

0xeeaf,	// (0x00085095) bg_calc_paper_pane

0x6dd9,	// (0x0007cfbf) list_calc_pane

0xeec3,	// (0x000850a9) bg_calc_display_pane

0x6df3,	// (0x0007cfd9) calc_display_pane_t1

0x6e08,	// (0x0007cfee) calc_display_pane_t2

0x6e1d,	// (0x0007d003) calc_display_pane_t3

0x0002,

0xf14d,	// (0x00085333) calc_display_pane_t

0x6e2f,	// (0x0007d015) cell_calc_pane_ParamLimits

0x6e2f,	// (0x0007d015) cell_calc_pane

0xeecf,	// (0x000850b5) bg_calc_paper_pane_g1

0xeedb,	// (0x000850c1) bg_calc_paper_pane_g2

0xeee7,	// (0x000850cd) bg_calc_paper_pane_g3

0xeef3,	// (0x000850d9) bg_calc_paper_pane_g4

0xeeff,	// (0x000850e5) bg_calc_paper_pane_g5

0x6e5c,	// (0x0007d042) bg_calc_paper_pane_g6

0x6e6d,	// (0x0007d053) bg_calc_paper_pane_g7

0x6e7e,	// (0x0007d064) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0008533a) bg_calc_paper_pane_g

0x6e8f,	// (0x0007d075) calc_bg_paper_pane_g9

0x6ea0,	// (0x0007d086) list_calc_item_pane_ParamLimits

0x6ea0,	// (0x0007d086) list_calc_item_pane

0xef0b,	// (0x000850f1) list_calc_item_pane_g1

0x6ecf,	// (0x0007d0b5) list_calc_item_pane_t1_ParamLimits

0x6ecf,	// (0x0007d0b5) list_calc_item_pane_t1

0x6ee1,	// (0x0007d0c7) list_calc_item_pane_t2_ParamLimits

0x6ee1,	// (0x0007d0c7) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0008534b) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0008534b) list_calc_item_pane_t

0xef18,	// (0x000850fe) cell_calc_pane_g1

0xef22,	// (0x00085108) grid_highlight_pane_cp02

0x22ae,	// (0x00078494) bg_calc_display_pane_g1

0x6f11,	// (0x0007d0f7) bg_calc_display_pane_g2

0x6f1b,	// (0x0007d101) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x00085355) bg_calc_display_pane_g

0x6f24,	// (0x0007d10a) cell_qdial_pane_ParamLimits

0x6f24,	// (0x0007d10a) cell_qdial_pane

0x6f38,	// (0x0007d11e) cell_qdial_pane_g1_ParamLimits

0x6f38,	// (0x0007d11e) cell_qdial_pane_g1

0x6f45,	// (0x0007d12b) cell_qdial_pane_g2_ParamLimits

0x6f45,	// (0x0007d12b) cell_qdial_pane_g2

0xef44,	// (0x0008512a) cell_qdial_pane_g3_ParamLimits

0xef44,	// (0x0008512a) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0008535c) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0008535c) cell_qdial_pane_g

0x6f63,	// (0x0007d149) cell_qdial_pane_t1_ParamLimits

0x6f63,	// (0x0007d149) cell_qdial_pane_t1

0x6f7b,	// (0x0007d161) cell_qdial_pane_t2_ParamLimits

0x6f7b,	// (0x0007d161) cell_qdial_pane_t2

0x6f8e,	// (0x0007d174) cell_qdial_pane_t3_ParamLimits

0x6f8e,	// (0x0007d174) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x00085365) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x00085365) cell_qdial_pane_t

0xeb8c,	// (0x00084d72) grid_highlight_pane_cp04

0xef50,	// (0x00085136) thumbnail_qdial_pane_ParamLimits

0xef50,	// (0x00085136) thumbnail_qdial_pane

0xefac,	// (0x00085192) list_help_pane

0xefb5,	// (0x0008519b) scroll_pane_cp02

0x6fa1,	// (0x0007d187) help_list_pane_t1_ParamLimits

0x6fa1,	// (0x0007d187) help_list_pane_t1

0x6fd4,	// (0x0007d1ba) bg_notes_pane_g2

0x6fdc,	// (0x0007d1c2) bg_notes_pane_g3

0x6fe4,	// (0x0007d1ca) notes_bg_pane_g1

0x6fec,	// (0x0007d1d2) notes_bg_pane_g4

0x6ff4,	// (0x0007d1da) notes_bg_pane_g5

0x6ffc,	// (0x0007d1e2) notes_bg_pane_g6

0x7004,	// (0x0007d1ea) notes_bg_pane_g7

0x700c,	// (0x0007d1f2) notes_bg_pane_g8

0x7014,	// (0x0007d1fa) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x00085383) notes_bg_pane_g

0x701c,	// (0x0007d202) list_notes_text_pane_ParamLimits

0x701c,	// (0x0007d202) list_notes_text_pane

0xefbe,	// (0x000851a4) list_notes_text_pane_g1

0x553e,	// (0x0007b724) list_notes_text_pane_t1

0x7044,	// (0x0007d22a) listscroll_cale_week_pane

0x7069,	// (0x0007d24f) bg_cale_heading_pane

0xefe1,	// (0x000851c7) bg_cale_pane_cp01

0x708b,	// (0x0007d271) cale_week_corner_pane

0x70a5,	// (0x0007d28b) cale_week_day_heading_pane

0x70c7,	// (0x0007d2ad) cale_week_scroll_pane_g1

0x70e4,	// (0x0007d2ca) cale_week_scroll_pane_g2

0x70f7,	// (0x0007d2dd) cale_week_scroll_pane_g3

0x710a,	// (0x0007d2f0) cale_week_scroll_pane_g4

0x711d,	// (0x0007d303) cale_week_scroll_pane_g5

0x7130,	// (0x0007d316) cale_week_scroll_pane_g6

0x7143,	// (0x0007d329) cale_week_scroll_pane_g7

0x7156,	// (0x0007d33c) cale_week_scroll_pane_g8

0x716b,	// (0x0007d351) cale_week_scroll_pane_g9

0x717e,	// (0x0007d364) cale_week_scroll_pane_g10

0x7191,	// (0x0007d377) cale_week_scroll_pane_g11

0x71a4,	// (0x0007d38a) cale_week_scroll_pane_g12

0x71bb,	// (0x0007d3a1) cale_week_scroll_pane_g13

0x71d6,	// (0x0007d3bc) cale_week_scroll_pane_g14

0x71f1,	// (0x0007d3d7) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x00085392) cale_week_scroll_pane_g

0x7221,	// (0x0007d407) cale_week_time_pane

0x7236,	// (0x0007d41c) grid_cale_week_pane

0xf011,	// (0x000851f7) scroll_pane_cp08

0x7255,	// (0x0007d43b) cell_cale_week_pane_ParamLimits

0x7255,	// (0x0007d43b) cell_cale_week_pane

0x72b7,	// (0x0007d49d) cale_week_day_heading_pane_t1

0x72f2,	// (0x0007d4d8) cale_week_day_heading_pane_t2

0x732d,	// (0x0007d513) cale_week_day_heading_pane_t3

0x7368,	// (0x0007d54e) cale_week_day_heading_pane_t4

0x73a3,	// (0x0007d589) cale_week_day_heading_pane_t5

0x73de,	// (0x0007d5c4) cale_week_day_heading_pane_t6

0x7419,	// (0x0007d5ff) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x000853b3) cale_week_day_heading_pane_t

0xf02e,	// (0x00085214) bg_cale_side_pane

0x7454,	// (0x0007d63a) cale_week_time_pane_t1

0x746e,	// (0x0007d654) cale_week_time_pane_t2

0x7488,	// (0x0007d66e) cale_week_time_pane_t3

0x74a2,	// (0x0007d688) cale_week_time_pane_t4

0x74bc,	// (0x0007d6a2) cale_week_time_pane_t5

0x74d6,	// (0x0007d6bc) cale_week_time_pane_t6

0x74f6,	// (0x0007d6dc) cale_week_time_pane_t7

0x7518,	// (0x0007d6fe) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x000853c2) cale_week_time_pane_t

0x753c,	// (0x0007d722) cell_cale_week_pane_g2

0x7560,	// (0x0007d746) cell_cale_week_pane_g3_ParamLimits

0x7560,	// (0x0007d746) cell_cale_week_pane_g3

0xf03c,	// (0x00085222) grid_highlight_pane_cp07

0xf044,	// (0x0008522a) listscroll_gms_pane

0xf04e,	// (0x00085234) grid_gms_pane

0xf057,	// (0x0008523d) listscroll_gms_pane_g1

0xf05f,	// (0x00085245) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x000853d3) listscroll_gms_pane_g

0x7578,	// (0x0007d75e) scroll_pane_cp010

0x7583,	// (0x0007d769) cell_gms_pane_ParamLimits

0x7583,	// (0x0007d769) cell_gms_pane

0x7596,	// (0x0007d77c) cell_gms_pane_g1

0xf067,	// (0x0008524d) cell_gms_pane_g2

0xf06f,	// (0x00085255) cell_gms_pane_g3

0xf078,	// (0x0008525e) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x000853d8) cell_gms_pane_g

0xf081,	// (0x00085267) grid_highlight_pane_cp09

0x995d,	// (0x0007fb43) phob_pre_status_pane_g1

0x9965,	// (0x0007fb4b) phob_pre_status_pane_g2

0x996d,	// (0x0007fb53) phob_pre_status_pane_g3

0x9975,	// (0x0007fb5b) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x000857c7) phob_pre_status_pane_g

0x9985,	// (0x0007fb6b) phob_pre_status_pane_t1

0x9995,	// (0x0007fb7b) phob_pre_status_pane_t2

0x99a5,	// (0x0007fb8b) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x000857d2) phob_pre_status_pane_t

0xeb8c,	// (0x00084d72) bg_list_pane_cp05

0x75a6,	// (0x0007d78c) grid_vorec_pane

0x75b0,	// (0x0007d796) vorec_t1

0x75be,	// (0x0007d7a4) vorec_t2

0x75cc,	// (0x0007d7b2) vorec_t3

0x75da,	// (0x0007d7c0) vorec_t4

0x75e8,	// (0x0007d7ce) vorec_t5

0x75f6,	// (0x0007d7dc) vorec_t6

0x0006,

0xf1fb,	// (0x000853e1) vorec_t

0x7612,	// (0x0007d7f8) wait_bar_pane_cp01

0x761a,	// (0x0007d800) cell_vorec_pane_ParamLimits

0x761a,	// (0x0007d800) cell_vorec_pane

0x762d,	// (0x0007d813) cell_vorec_pane_g1

0xeb8c,	// (0x00084d72) grid_highlight_pane_cp05

0x7647,	// (0x0007d82d) cams_zoom_pane

0x7653,	// (0x0007d839) image_vga_pane

0x7662,	// (0x0007d848) main_camera_pane_g1

0x7670,	// (0x0007d856) main_camera_pane_g2

0x767c,	// (0x0007d862) main_camera_pane_g3

0x7688,	// (0x0007d86e) main_camera_pane_g4

0x7694,	// (0x0007d87a) main_camera_pane_g5

0x76a0,	// (0x0007d886) main_camera_pane_g6

0x76ac,	// (0x0007d892) main_camera_pane_g7

0x0007,

0xf20a,	// (0x000853f0) main_camera_pane_g

0x76b8,	// (0x0007d89e) main_camera_pane_t1

0x76ca,	// (0x0007d8b0) main_camera_pane_t2

0x0001,

0xf21b,	// (0x00085401) main_camera_pane_t

0x76eb,	// (0x0007d8d1) cams_zoom_pane_cp_ParamLimits

0x76eb,	// (0x0007d8d1) cams_zoom_pane_cp

0x770f,	// (0x0007d8f5) image_cif_pane_ParamLimits

0x770f,	// (0x0007d8f5) image_cif_pane

0x772d,	// (0x0007d913) image_subqcif_pane

0x7735,	// (0x0007d91b) main_video_pane_g1_ParamLimits

0x7735,	// (0x0007d91b) main_video_pane_g1

0x7755,	// (0x0007d93b) main_video_pane_g2_ParamLimits

0x7755,	// (0x0007d93b) main_video_pane_g2

0x7785,	// (0x0007d96b) main_video_pane_g3_ParamLimits

0x7785,	// (0x0007d96b) main_video_pane_g3

0x77ae,	// (0x0007d994) main_video_pane_g4_ParamLimits

0x77ae,	// (0x0007d994) main_video_pane_g4

0x77d7,	// (0x0007d9bd) main_video_pane_g5_ParamLimits

0x77d7,	// (0x0007d9bd) main_video_pane_g5

0xf095,	// (0x0008527b) main_video_pane_g6_ParamLimits

0xf095,	// (0x0008527b) main_video_pane_g6

0x0006,

0xf220,	// (0x00085406) main_video_pane_g_ParamLimits

0xf220,	// (0x00085406) main_video_pane_g

0x77f9,	// (0x0007d9df) main_video_pane_t1_ParamLimits

0x77f9,	// (0x0007d9df) main_video_pane_t1

0x0033,	// (0x00076219) cams_zoom_pane_g1

0x003c,	// (0x00076222) cams_zoom_pane_g2

0x0045,	// (0x0007622b) cams_zoom_pane_g3

0x004e,	// (0x00076234) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x00085415) cams_zoom_pane_g

0x7843,	// (0x0007da29) grid_cams_pane

0x7851,	// (0x0007da37) linegrid_cams_pane

0x785f,	// (0x0007da45) cell_cams_pane_ParamLimits

0x785f,	// (0x0007da45) cell_cams_pane

0x0057,	// (0x0007623d) cams_burst_image_pane

0x005f,	// (0x00076245) cell_cams_pane_g1

0xeb8c,	// (0x00084d72) grid_highlight_pane_cp03

0xef18,	// (0x000850fe) mp_bg_pane_g1

0xeb8c,	// (0x00084d72) bg_list_pane_cp03

0x1d8a,	// (0x00077f70) bg_mp_pane

0x1d92,	// (0x00077f78) grid_mp_pane

0x1d9a,	// (0x00077f80) media_player_g1

0x1da2,	// (0x00077f88) media_player_t1

0x1db0,	// (0x00077f96) media_player_t2

0x1dbe,	// (0x00077fa4) media_player_t3

0x1dcc,	// (0x00077fb2) media_player_t4

0x1dda,	// (0x00077fc0) media_player_t5

0x1de8,	// (0x00077fce) media_player_t6

0x1df6,	// (0x00077fdc) media_player_t7

0x0006,

0xf5cb,	// (0x000857b1) media_player_t

0x1e04,	// (0x00077fea) wait_bar_pane_cp02

0xf5b0,	// (0x00085796) main_usb_pane_t

0x9954,	// (0x0007fb3a) cell_mp_pane

0xef18,	// (0x000850fe) cell_mp_pane_g1

0xeb8c,	// (0x00084d72) grid_highlight_pane_cp06

0x0067,	// (0x0007624d) grid_skin_colour_pane

0x006f,	// (0x00076255) list_highlight_pane_cp03

0x788a,	// (0x0007da70) skin_g1

0x0077,	// (0x0007625d) skin_t1

0x0086,	// (0x0007626c) skin_t2

0x0001,

0xf264,	// (0x0008544a) skin_t

0x7894,	// (0x0007da7a) cell_skin_colour_pane_ParamLimits

0x7894,	// (0x0007da7a) cell_skin_colour_pane

0x0094,	// (0x0007627a) cell_skin_colour_pane_g1

0x7918,	// (0x0007dafe) call_video_g1_ParamLimits

0x7918,	// (0x0007dafe) call_video_g1

0x7928,	// (0x0007db0e) call_video_g2_ParamLimits

0x7928,	// (0x0007db0e) call_video_g2

0x0001,

0xf269,	// (0x0008544f) call_video_g_ParamLimits

0xf269,	// (0x0008544f) call_video_g

0x7982,	// (0x0007db68) call_video_uplink_pane_cp1_ParamLimits

0x7982,	// (0x0007db68) call_video_uplink_pane_cp1

0x00a6,	// (0x0007628c) call_video_uplink_pane_cp2

0x7a4e,	// (0x0007dc34) video_down_crop_pane_ParamLimits

0x7a4e,	// (0x0007dc34) video_down_crop_pane

0x7b4c,	// (0x0007dd32) video_down_pane_ParamLimits

0x7b4c,	// (0x0007dd32) video_down_pane

0x00ae,	// (0x00076294) video_down_subqcif_pane_ParamLimits

0x00ae,	// (0x00076294) video_down_subqcif_pane

0x00c6,	// (0x000762ac) video_down_subqcif_pane_cp_ParamLimits

0x00c6,	// (0x000762ac) video_down_subqcif_pane_cp

0x00ec,	// (0x000762d2) im_reading_pane_ParamLimits

0x00ec,	// (0x000762d2) im_reading_pane

0x7c6e,	// (0x0007de54) im_writing_pane_ParamLimits

0x7c6e,	// (0x0007de54) im_writing_pane

0x7c8c,	// (0x0007de72) im_reading_pane_t1

0x0106,	// (0x000762ec) list_im_pane

0x0117,	// (0x000762fd) scroll_pane_cp07

0x7ce0,	// (0x0007dec6) im_writing_pane_t1_ParamLimits

0x7ce0,	// (0x0007dec6) im_writing_pane_t1

0x0130,	// (0x00076316) im_writing_pane_t2_ParamLimits

0x0130,	// (0x00076316) im_writing_pane_t2

0x0001,

0xf273,	// (0x00085459) im_writing_pane_t_ParamLimits

0xf273,	// (0x00085459) im_writing_pane_t

0xeb8c,	// (0x00084d72) input_focus_pane_cp04

0xeb8c,	// (0x00084d72) input_focus_pane_cp05

0x7cf5,	// (0x0007dedb) list_im_single_pane_ParamLimits

0x7cf5,	// (0x0007dedb) list_im_single_pane

0x7d19,	// (0x0007deff) list_single_im_pane_t1

0x9918,	// (0x0007fafe) blid_accuracy_pane

0x9920,	// (0x0007fb06) blid_compass_pane

0x992a,	// (0x0007fb10) main_location_t1

0x9938,	// (0x0007fb1e) main_location_t2

0x9946,	// (0x0007fb2c) main_location_t3

0x0002,

0xf5da,	// (0x000857c0) main_location_t

0xeb8c,	// (0x00084d72) aid_levels_location

0xef18,	// (0x000850fe) blid_accuracy_pane_g1

0xef18,	// (0x000850fe) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000854bb) blid_accuracy_pane_g

0x0178,	// (0x0007635e) wml_content_pane

0x01b6,	// (0x0007639c) wml_button_pane_ParamLimits

0x01b6,	// (0x0007639c) wml_button_pane

0x7d28,	// (0x0007df0e) wml_list_single_large_pane_ParamLimits

0x7d28,	// (0x0007df0e) wml_list_single_large_pane

0x7d52,	// (0x0007df38) wml_list_single_medium_pane_ParamLimits

0x7d52,	// (0x0007df38) wml_list_single_medium_pane

0x7d83,	// (0x0007df69) wml_list_single_small_pane_ParamLimits

0x7d83,	// (0x0007df69) wml_list_single_small_pane

0x01ca,	// (0x000763b0) wml_selection_box_pane_ParamLimits

0x01ca,	// (0x000763b0) wml_selection_box_pane

0x01dd,	// (0x000763c3) wml_list_single_pane_t1

0x01ec,	// (0x000763d2) wml_list_single_medium_pane_t1

0x01fb,	// (0x000763e1) wml_list_single_large_pane_t1

0x020a,	// (0x000763f0) input_focus_pane_cp02_ParamLimits

0x020a,	// (0x000763f0) input_focus_pane_cp02

0x021d,	// (0x00076403) wml_selection_box_pane_g1

0x0226,	// (0x0007640c) wml_selection_box_pane_t1_ParamLimits

0x0226,	// (0x0007640c) wml_selection_box_pane_t1

0xedfe,	// (0x00084fe4) bg_wml_button_pane_ParamLimits

0xedfe,	// (0x00084fe4) bg_wml_button_pane

0x023e,	// (0x00076424) wml_button_pane_g1

0x0246,	// (0x0007642c) wml_button_pane_t1

0x023e,	// (0x00076424) wml_button_bg_pane_g1

0x0256,	// (0x0007643c) wml_button_bg_pane_g2

0x025e,	// (0x00076444) wml_button_bg_pane_g3

0x0266,	// (0x0007644c) wml_button_bg_pane_g4

0x026e,	// (0x00076454) wml_button_bg_pane_g5

0x0276,	// (0x0007645c) wml_button_bg_pane_g6

0x027e,	// (0x00076464) wml_button_bg_pane_g7

0x0286,	// (0x0007646c) wml_button_bg_pane_g8

0x028e,	// (0x00076474) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0008545e) wml_button_bg_pane_g

0x7dbd,	// (0x0007dfa3) bg_list_pane_cp02

0x0296,	// (0x0007647c) mce_header_pane_ParamLimits

0x0296,	// (0x0007647c) mce_header_pane

0x02ac,	// (0x00076492) mce_icon_pane

0x02ac,	// (0x00076492) mce_image_pane

0x02b5,	// (0x0007649b) mce_text_pane_ParamLimits

0x02b5,	// (0x0007649b) mce_text_pane

0x7dc7,	// (0x0007dfad) scroll_pane_cp03

0x01ae,	// (0x00076394) scroll_pane_cp04

0x02c8,	// (0x000764ae) scroll_pane_cp05_ParamLimits

0x02c8,	// (0x000764ae) scroll_pane_cp05

0x7dd1,	// (0x0007dfb7) mce_header_field_pane_ParamLimits

0x7dd1,	// (0x0007dfb7) mce_header_field_pane

0x7df1,	// (0x0007dfd7) mce_header_field_pane_2_ParamLimits

0x7df1,	// (0x0007dfd7) mce_header_field_pane_2

0x7e07,	// (0x0007dfed) mce_header_field_pane_3

0x7e0f,	// (0x0007dff5) list_single_mce_message_pane_ParamLimits

0x7e0f,	// (0x0007dff5) list_single_mce_message_pane

0x7e3a,	// (0x0007e020) list_single_mce_smart_pane_ParamLimits

0x7e3a,	// (0x0007e020) list_single_mce_smart_pane

0x02d4,	// (0x000764ba) input_focus_pane_cp03

0x02dd,	// (0x000764c3) list_header_data_pane

0x7e70,	// (0x0007e056) mce_header_field_pane_t1

0x7e7e,	// (0x0007e064) list_single_mce_header_pane_ParamLimits

0x7e7e,	// (0x0007e064) list_single_mce_header_pane

0x02e5,	// (0x000764cb) list_single_mce_header_pane_t1

0x02f4,	// (0x000764da) list_single_mce_message_pane_g1

0x02fc,	// (0x000764e2) list_single_mce_message_pane_t1

0x7ed0,	// (0x0007e0b6) bg_cale_heading_pane_cp01_ParamLimits

0x7ed0,	// (0x0007e0b6) bg_cale_heading_pane_cp01

0x030a,	// (0x000764f0) bg_cale_pane_cp02_ParamLimits

0x030a,	// (0x000764f0) bg_cale_pane_cp02

0x7f13,	// (0x0007e0f9) cale_month_corner_pane

0x7f2d,	// (0x0007e113) cale_month_day_heading_pane_ParamLimits

0x7f2d,	// (0x0007e113) cale_month_day_heading_pane

0x7f88,	// (0x0007e16e) cale_month_pane_g1_ParamLimits

0x7f88,	// (0x0007e16e) cale_month_pane_g1

0x7fc0,	// (0x0007e1a6) cale_month_pane_g2_ParamLimits

0x7fc0,	// (0x0007e1a6) cale_month_pane_g2

0x7fe9,	// (0x0007e1cf) cale_month_pane_g3_ParamLimits

0x7fe9,	// (0x0007e1cf) cale_month_pane_g3

0x8035,	// (0x0007e21b) cale_month_pane_g4_ParamLimits

0x8035,	// (0x0007e21b) cale_month_pane_g4

0x8081,	// (0x0007e267) cale_month_pane_g5_ParamLimits

0x8081,	// (0x0007e267) cale_month_pane_g5

0x80cd,	// (0x0007e2b3) cale_month_pane_g6_ParamLimits

0x80cd,	// (0x0007e2b3) cale_month_pane_g6

0x8119,	// (0x0007e2ff) cale_month_pane_g7_ParamLimits

0x8119,	// (0x0007e2ff) cale_month_pane_g7

0x817d,	// (0x0007e363) cale_month_pane_g8_ParamLimits

0x817d,	// (0x0007e363) cale_month_pane_g8

0x81e1,	// (0x0007e3c7) cale_month_pane_g9_ParamLimits

0x81e1,	// (0x0007e3c7) cale_month_pane_g9

0x823f,	// (0x0007e425) cale_month_pane_g10_ParamLimits

0x823f,	// (0x0007e425) cale_month_pane_g10

0x829b,	// (0x0007e481) cale_month_pane_g11_ParamLimits

0x829b,	// (0x0007e481) cale_month_pane_g11

0x82ef,	// (0x0007e4d5) cale_month_pane_g12_ParamLimits

0x82ef,	// (0x0007e4d5) cale_month_pane_g12

0x8345,	// (0x0007e52b) cale_month_pane_g13_ParamLimits

0x8345,	// (0x0007e52b) cale_month_pane_g13

0x000c,

0xf28b,	// (0x00085471) cale_month_pane_g_ParamLimits

0xf28b,	// (0x00085471) cale_month_pane_g

0x839b,	// (0x0007e581) cale_month_week_pane

0x83b0,	// (0x0007e596) grid_cale_month_pane_ParamLimits

0x83b0,	// (0x0007e596) grid_cale_month_pane

0x83fe,	// (0x0007e5e4) cale_month_day_heading_pane_t1

0x8484,	// (0x0007e66a) cale_month_day_heading_pane_t2

0x8515,	// (0x0007e6fb) cale_month_day_heading_pane_t3

0x85a6,	// (0x0007e78c) cale_month_day_heading_pane_t4

0x8637,	// (0x0007e81d) cale_month_day_heading_pane_t5

0x86c8,	// (0x0007e8ae) cale_month_day_heading_pane_t6

0x8759,	// (0x0007e93f) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0008548c) cale_month_day_heading_pane_t

0xf02e,	// (0x00085214) bg_cale_side_pane_cp01

0x8802,	// (0x0007e9e8) cale_month_week_pane_t1

0x881b,	// (0x0007ea01) cale_month_week_pane_t2

0x8834,	// (0x0007ea1a) cale_month_week_pane_t3

0x884d,	// (0x0007ea33) cale_month_week_pane_t4

0x8866,	// (0x0007ea4c) cale_month_week_pane_t5

0x8887,	// (0x0007ea6d) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0008549b) cale_month_week_pane_t

0x88a8,	// (0x0007ea8e) cell_cale_month_pane_ParamLimits

0x88a8,	// (0x0007ea8e) cell_cale_month_pane

0x89ca,	// (0x0007ebb0) cell_cale_month_pane_g1

0x89d6,	// (0x0007ebbc) cell_cale_month_pane_t1_ParamLimits

0x89d6,	// (0x0007ebbc) cell_cale_month_pane_t1

0xf03c,	// (0x00085222) grid_highlight_pane_cp08

0xef18,	// (0x000850fe) main_smil_g1

0x89f6,	// (0x0007ebdc) smil_status_pane

0x0349,	// (0x0007652f) smil_text_pane

0x1caa,	// (0x00077e90) bg_popup_call3_rect_pane_g8

0x1cb2,	// (0x00077e98) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x00085754) bg_popup_call3_rect_pane_g

0x1f0c,	// (0x000780f2) smil_status_volume_pane_g1

0x0353,	// (0x00076539) smil_status_pane_t1

0x9d42,	// (0x0007ff28) volume_smil_pane

0x036a,	// (0x00076550) list_smil_text_pane

0x8a09,	// (0x0007ebef) scroll_pane_cp011

0x8a14,	// (0x0007ebfa) smil_text_list_pane_t1_ParamLimits

0x8a14,	// (0x0007ebfa) smil_text_list_pane_t1

0x8a8c,	// (0x0007ec72) aid_volume_smil_ParamLimits

0x8a8c,	// (0x0007ec72) aid_volume_smil

0xef18,	// (0x000850fe) smil_volume_pane_g1

0xef18,	// (0x000850fe) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000854bb) smil_volume_pane_g

0x7044,	// (0x0007d22a) listscroll_cale_day_pane

0x0374,	// (0x0007655a) bg_cale_pane

0x038c,	// (0x00076572) list_cale_pane

0x03af,	// (0x00076595) scroll_pane_cp09

0x03c0,	// (0x000765a6) cale_bg_pane_g1

0x03c8,	// (0x000765ae) cale_bg_pane_g2

0x03d0,	// (0x000765b6) cale_bg_pane_g3

0x03d8,	// (0x000765be) cale_bg_pane_g4

0x03e0,	// (0x000765c6) cale_bg_pane_g5

0x03e8,	// (0x000765ce) cale_bg_pane_g6

0x03f0,	// (0x000765d6) cale_bg_pane_g7

0x03f8,	// (0x000765de) cale_bg_pane_g8

0x0400,	// (0x000765e6) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x000854c0) cale_bg_pane_g

0x8ab6,	// (0x0007ec9c) list_cale_time_pane_ParamLimits

0x8ab6,	// (0x0007ec9c) list_cale_time_pane

0x0408,	// (0x000765ee) list_cale_time_pane_g1_ParamLimits

0x0408,	// (0x000765ee) list_cale_time_pane_g1

0x0414,	// (0x000765fa) list_cale_time_pane_g2_ParamLimits

0x0414,	// (0x000765fa) list_cale_time_pane_g2

0x8ad8,	// (0x0007ecbe) list_cale_time_pane_g3_ParamLimits

0x8ad8,	// (0x0007ecbe) list_cale_time_pane_g3

0x8ae6,	// (0x0007eccc) list_cale_time_pane_g4_ParamLimits

0x8ae6,	// (0x0007eccc) list_cale_time_pane_g4

0x8af4,	// (0x0007ecda) list_cale_time_pane_g5_ParamLimits

0x8af4,	// (0x0007ecda) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000854d3) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000854d3) list_cale_time_pane_g

0x042e,	// (0x00076614) list_cale_time_pane_t1_ParamLimits

0x042e,	// (0x00076614) list_cale_time_pane_t1

0x0456,	// (0x0007663c) list_cale_time_pane_t2_ParamLimits

0x0456,	// (0x0007663c) list_cale_time_pane_t2

0x8dbb,	// (0x0007efa1) aid_blid_cardinal_pane

0x8dfd,	// (0x0007efe3) compass_pane_t4

0x047e,	// (0x00076664) list_cale_time_pane_t4_ParamLimits

0x047e,	// (0x00076664) list_cale_time_pane_t4

0x8e0b,	// (0x0007eff1) compass_pane_t5

0x8e1b,	// (0x0007f001) compass_pane_t6

0x8e29,	// (0x0007f00f) compass_pane_t7

0x092d,	// (0x00076b13) navi_pane_cc_t1

0x0b20,	// (0x00076d06) aid_phob_thumbnail_center_pane

0x941e,	// (0x0007f604) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x000854e0) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x000854e0) list_cale_time_pane_t

0xe7e3,	// (0x000849c9) bg_popup_window_pane_cp02_ParamLimits

0xe7e3,	// (0x000849c9) bg_popup_window_pane_cp02

0x04a6,	// (0x0007668c) heading_pane_cp01_ParamLimits

0x04a6,	// (0x0007668c) heading_pane_cp01

0x04b2,	// (0x00076698) loc_req_pane_ParamLimits

0x04b2,	// (0x00076698) loc_req_pane

0x04c2,	// (0x000766a8) loc_type_pane_ParamLimits

0x04c2,	// (0x000766a8) loc_type_pane

0x04d4,	// (0x000766ba) loc_type_pane_t1_ParamLimits

0x04d4,	// (0x000766ba) loc_type_pane_t1

0x04e6,	// (0x000766cc) loc_type_pane_t2_ParamLimits

0x04e6,	// (0x000766cc) loc_type_pane_t2

0x04f8,	// (0x000766de) loc_type_pane_t3_ParamLimits

0x04f8,	// (0x000766de) loc_type_pane_t3

0x0002,

0xf301,	// (0x000854e7) loc_type_pane_t_ParamLimits

0xf301,	// (0x000854e7) loc_type_pane_t

0x050a,	// (0x000766f0) list_loc_req_pane

0x0514,	// (0x000766fa) scroll_pane_cp012

0x8b02,	// (0x0007ece8) list_single_loc_request_popup_menu_pane_ParamLimits

0x8b02,	// (0x0007ece8) list_single_loc_request_popup_menu_pane

0x051f,	// (0x00076705) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x051f,	// (0x00076705) list_single_loc_request_popup_menu_pane_g1

0x052b,	// (0x00076711) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x052b,	// (0x00076711) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x000854ee) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x000854ee) list_single_loc_request_popup_menu_pane_g

0x0537,	// (0x0007671d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0537,	// (0x0007671d) list_single_loc_request_popup_menu_pane_t1

0x8b14,	// (0x0007ecfa) bg_popup_window_pane_cp03_ParamLimits

0x8b14,	// (0x0007ecfa) bg_popup_window_pane_cp03

0x8b22,	// (0x0007ed08) heading_loc_req_pane_ParamLimits

0x8b22,	// (0x0007ed08) heading_loc_req_pane

0x8b2e,	// (0x0007ed14) popup_dyc_status_message_window_g1_ParamLimits

0x8b2e,	// (0x0007ed14) popup_dyc_status_message_window_g1

0x8b3a,	// (0x0007ed20) popup_dyc_status_message_window_t1_ParamLimits

0x8b3a,	// (0x0007ed20) popup_dyc_status_message_window_t1

0x8b4c,	// (0x0007ed32) popup_dyc_status_message_window_t2_ParamLimits

0x8b4c,	// (0x0007ed32) popup_dyc_status_message_window_t2

0x8b5e,	// (0x0007ed44) popup_dyc_status_message_window_t3_ParamLimits

0x8b5e,	// (0x0007ed44) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x000854f3) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x000854f3) popup_dyc_status_message_window_t

0xeb8c,	// (0x00084d72) bg_heading_pane_cp01

0x0559,	// (0x0007673f) heading_loc_req_pane_g1

0x0561,	// (0x00076747) heading_loc_req_pane_g2

0x0569,	// (0x0007674f) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x000854fa) heading_loc_req_pane_g

0x0571,	// (0x00076757) heading_loc_req_pane_t1

0x0580,	// (0x00076766) bg_popup_sub_pane_cp01_ParamLimits

0x0580,	// (0x00076766) bg_popup_sub_pane_cp01

0x058e,	// (0x00076774) popup_cale_events_window_g1_ParamLimits

0x058e,	// (0x00076774) popup_cale_events_window_g1

0x05ae,	// (0x00076794) popup_cale_events_window_g2_ParamLimits

0x05ae,	// (0x00076794) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0008552e) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0008552e) popup_cale_events_window_g

0x05ce,	// (0x000767b4) popup_cale_events_window_t1_ParamLimits

0x05ce,	// (0x000767b4) popup_cale_events_window_t1

0x05e0,	// (0x000767c6) popup_cale_events_window_t2_ParamLimits

0x05e0,	// (0x000767c6) popup_cale_events_window_t2

0x061e,	// (0x00076804) popup_cale_events_window_t3_ParamLimits

0x061e,	// (0x00076804) popup_cale_events_window_t3

0x0658,	// (0x0007683e) popup_cale_events_window_t4_ParamLimits

0x0658,	// (0x0007683e) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x00085533) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x00085533) popup_cale_events_window_t

0x8b88,	// (0x0007ed6e) call_type_pane

0x0a85,	// (0x00076c6b) popup_call_status_window_g1

0x8b94,	// (0x0007ed7a) popup_call_status_window_g2

0x8ba0,	// (0x0007ed86) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0008553c) popup_call_status_window_g

0x068e,	// (0x00076874) call_type_pane_g1

0x0697,	// (0x0007687d) call_type_pane_g2

0x0001,

0xf35d,	// (0x00085543) call_type_pane_g

0xeb8c,	// (0x00084d72) bg_popup_sub_pane_cp02

0x06a0,	// (0x00076886) listscroll_popup_wml_pane

0x06a8,	// (0x0007688e) list_wml_pane

0x06b2,	// (0x00076898) scroll_pane_cp013

0x06bd,	// (0x000768a3) list_single_graphic_popup_wml_pane_ParamLimits

0x06bd,	// (0x000768a3) list_single_graphic_popup_wml_pane

0xef18,	// (0x000850fe) list_single_graphic_popup_wml_pane_g1

0x06d1,	// (0x000768b7) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x00085548) list_single_graphic_popup_wml_pane_g

0x06d9,	// (0x000768bf) list_single_graphic_popup_wml_pane_t1

0x06e7,	// (0x000768cd) aid_call_pane

0xedf6,	// (0x00084fdc) popup_clock_analogue_window_g1

0xedf6,	// (0x00084fdc) popup_clock_analogue_window_g2

0x8bac,	// (0x0007ed92) popup_clock_analogue_window_g3

0x8bac,	// (0x0007ed92) popup_clock_analogue_window_g4

0xef18,	// (0x000850fe) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0008554d) popup_clock_analogue_window_g

0x8bb4,	// (0x0007ed9a) popup_clock_analogue_window_t1

0x8bc2,	// (0x0007eda8) clock_digital_number_pane_ParamLimits

0x8bc2,	// (0x0007eda8) clock_digital_number_pane

0x8bce,	// (0x0007edb4) clock_digital_number_pane_cp02_ParamLimits

0x8bce,	// (0x0007edb4) clock_digital_number_pane_cp02

0x8bda,	// (0x0007edc0) clock_digital_number_pane_cp03_ParamLimits

0x8bda,	// (0x0007edc0) clock_digital_number_pane_cp03

0x8be6,	// (0x0007edcc) clock_digital_number_pane_cp04_ParamLimits

0x8be6,	// (0x0007edcc) clock_digital_number_pane_cp04

0x8bf6,	// (0x0007eddc) clock_digital_separator_pane_ParamLimits

0x8bf6,	// (0x0007eddc) clock_digital_separator_pane

0x8c02,	// (0x0007ede8) popup_clock_digital_window_t1

0xef18,	// (0x000850fe) clock_digital_number_pane_g1

0xef18,	// (0x000850fe) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000854bb) clock_digital_number_pane_g

0xef18,	// (0x000850fe) clock_digital_separator_pane_g1

0xef18,	// (0x000850fe) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000854bb) clock_digital_separator_pane_g

0xeb8c,	// (0x00084d72) bg_popup_window_pane_cp04

0x06f7,	// (0x000768dd) heading_pane_cp03

0x06ff,	// (0x000768e5) listscroll_popup_gms_pane

0x0707,	// (0x000768ed) grid_large_graphic_popup_pane

0x0711,	// (0x000768f7) listscroll_popup_gms_pane_g1

0x0719,	// (0x000768ff) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x00085558) listscroll_popup_gms_pane_g

0x01ae,	// (0x00076394) scroll_pane_cp014

0x8c1f,	// (0x0007ee05) cell_large_graphic_popup_pane_ParamLimits

0x8c1f,	// (0x0007ee05) cell_large_graphic_popup_pane

0x8c37,	// (0x0007ee1d) cell_large_graphic_popup_pane_g1_ParamLimits

0x8c37,	// (0x0007ee1d) cell_large_graphic_popup_pane_g1

0x0721,	// (0x00076907) cell_large_graphic_popup_pane_g2_ParamLimits

0x0721,	// (0x00076907) cell_large_graphic_popup_pane_g2

0x072d,	// (0x00076913) cell_large_graphic_popup_pane_g3_ParamLimits

0x072d,	// (0x00076913) cell_large_graphic_popup_pane_g3

0x073a,	// (0x00076920) cell_large_graphic_popup_pane_g4_ParamLimits

0x073a,	// (0x00076920) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0008555d) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0008555d) cell_large_graphic_popup_pane_g

0x074a,	// (0x00076930) grid_highlight_pane_cp010

0xef18,	// (0x000850fe) bg_popup_call_pane_g1

0x0754,	// (0x0007693a) list_single_graphic_popup_conf_pane_ParamLimits

0x0754,	// (0x0007693a) list_single_graphic_popup_conf_pane

0x0767,	// (0x0007694d) list_highlight_pane_cp01

0x0770,	// (0x00076956) list_single_graphic_popup_conf_pane_g1

0x0778,	// (0x0007695e) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x00085566) list_single_graphic_popup_conf_pane_g

0x0780,	// (0x00076966) list_single_graphic_popup_conf_pane_t1

0x078e,	// (0x00076974) linegrid_cams_pane_g1

0x8c43,	// (0x0007ee29) linegrid_cams_pane_g2

0xf06f,	// (0x00085255) linegrid_cams_pane_g3

0x0797,	// (0x0007697d) linegrid_cams_pane_g4

0x8c4c,	// (0x0007ee32) linegrid_cams_pane_g5

0x8c55,	// (0x0007ee3b) linegrid_cams_pane_g6

0xf078,	// (0x0008525e) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0008556b) linegrid_cams_pane_g

0x07a0,	// (0x00076986) popup_clock_analogue_window

0x07a0,	// (0x00076986) popup_clock_digital_window

0xeb8c,	// (0x00084d72) popup_phob_thumbnail_window

0xef18,	// (0x000850fe) call_video_uplink_pane_g1

0x07a9,	// (0x0007698f) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0008557a) call_video_uplink_pane_g

0x07b1,	// (0x00076997) video_uplink_pane

0x07b9,	// (0x0007699f) mce_image_pane_g1

0x8c5e,	// (0x0007ee44) mce_image_pane_g2

0x8c68,	// (0x0007ee4e) mce_image_pane_g3

0x8c70,	// (0x0007ee56) mce_image_pane_g4

0x8c78,	// (0x0007ee5e) mce_image_pane_g5

0x0004,

0xf399,	// (0x0008557f) mce_image_pane_g

0x07c3,	// (0x000769a9) control_top_pane_stacon_cp01_ParamLimits

0x07c3,	// (0x000769a9) control_top_pane_stacon_cp01

0x07d7,	// (0x000769bd) uni_indicator_pane_stacon_cp01_ParamLimits

0x07d7,	// (0x000769bd) uni_indicator_pane_stacon_cp01

0x07e8,	// (0x000769ce) bg_popup_sub_pane_cp03

0x07f2,	// (0x000769d8) chi_dic_find_pane

0x8c80,	// (0x0007ee66) listscroll_chi_dic_pane

0x07fa,	// (0x000769e0) main_pane_chidic_g1

0x0802,	// (0x000769e8) chi_dic_find_pane_t1

0x0810,	// (0x000769f6) find_chidic_pane

0x0819,	// (0x000769ff) chi_dic_list_pane_ParamLimits

0x0819,	// (0x000769ff) chi_dic_list_pane

0x082a,	// (0x00076a10) scroll_pane_cp020

0x0832,	// (0x00076a18) find_chidic_pane_t1

0xeb8c,	// (0x00084d72) input_focus_pane_cp06

0x8c94,	// (0x0007ee7a) list_chi_dic_pane_ParamLimits

0x8c94,	// (0x0007ee7a) list_chi_dic_pane

0x8cae,	// (0x0007ee94) list_chi_dic_pane_t1_ParamLimits

0x8cae,	// (0x0007ee94) list_chi_dic_pane_t1

0xeb8c,	// (0x00084d72) list_highlight_pane_cp020

0x0841,	// (0x00076a27) bg_cale_heading_pane_g1

0x8cc1,	// (0x0007eea7) bg_cale_heading_pane_g2

0x8cc9,	// (0x0007eeaf) bg_cale_heading_pane_g3

0x8cd1,	// (0x0007eeb7) bg_cale_heading_pane_g4

0x8cdb,	// (0x0007eec1) bg_cale_heading_pane_g5

0x8ce5,	// (0x0007eecb) bg_cale_heading_pane_g6

0x8ced,	// (0x0007eed3) bg_cale_heading_pane_g7

0x8cf5,	// (0x0007eedb) bg_cale_heading_pane_g8

0x8cff,	// (0x0007eee5) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0008558a) bg_cale_heading_pane_g

0x0841,	// (0x00076a27) bg_cale_side_pane_g1

0x8d09,	// (0x0007eeef) bg_cale_side_pane_g2

0x8d13,	// (0x0007eef9) bg_cale_side_pane_g3

0x8d1d,	// (0x0007ef03) bg_cale_side_pane_g4

0x8d27,	// (0x0007ef0d) bg_cale_side_pane_g5

0x8d31,	// (0x0007ef17) bg_cale_side_pane_g6

0x8d3b,	// (0x0007ef21) bg_cale_side_pane_g7

0x8d45,	// (0x0007ef2b) bg_cale_side_pane_g8

0x8d4d,	// (0x0007ef33) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0008559d) bg_cale_side_pane_g

0x8d55,	// (0x0007ef3b) popup_call_status_window_ParamLimits

0x8d55,	// (0x0007ef3b) popup_call_status_window

0x0849,	// (0x00076a2f) stacon_top_pane

0x0851,	// (0x00076a37) status_pane_ParamLimits

0x0851,	// (0x00076a37) status_pane

0x0866,	// (0x00076a4c) status_small_pane

0x086e,	// (0x00076a54) control_pane

0xeb8c,	// (0x00084d72) stacon_bottom_pane

0x0876,	// (0x00076a5c) list_single_mce_smart_pane_t1_ParamLimits

0x0876,	// (0x00076a5c) list_single_mce_smart_pane_t1

0x0889,	// (0x00076a6f) list_single_mce_smart_pane_t2_ParamLimits

0x0889,	// (0x00076a6f) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x000855b0) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x000855b0) list_single_mce_smart_pane_t

0x8d61,	// (0x0007ef47) compass_pane

0x8d6d,	// (0x0007ef53) main_location2_pane_t1

0x8d81,	// (0x0007ef67) main_location2_pane_t2

0x8d95,	// (0x0007ef7b) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000855b5) main_location2_pane_t

0x08a8,	// (0x00076a8e) compass_pane_g1_ParamLimits

0x08a8,	// (0x00076a8e) compass_pane_g1

0x8ddf,	// (0x0007efc5) compass_pane_t1

0x8dee,	// (0x0007efd4) compass_pane_t2

0x0005,

0xf3d8,	// (0x000855be) compass_pane_t

0x8e39,	// (0x0007f01f) text_secondary_cp61

0x0924,	// (0x00076b0a) navi_pane_cams_g5

0x09a0,	// (0x00076b86) navi_pane_im_t1

0x09ae,	// (0x00076b94) navi_pane_mp_g1_ParamLimits

0x09ae,	// (0x00076b94) navi_pane_mp_g1

0x09c2,	// (0x00076ba8) navi_pane_mp_g2_ParamLimits

0x09c2,	// (0x00076ba8) navi_pane_mp_g2

0x09ce,	// (0x00076bb4) navi_pane_mp_g3_ParamLimits

0x09ce,	// (0x00076bb4) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x000855d2) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x000855d2) navi_pane_mp_g

0x09da,	// (0x00076bc0) navi_pane_mp_t1

0x09e8,	// (0x00076bce) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x000855d9) navi_pane_mp_t

0x0a53,	// (0x00076c39) navi_pane_vt_g1

0x09da,	// (0x00076bc0) navi_pane_vt_t1

0x0a5b,	// (0x00076c41) navi_slider_pane

0x0a6b,	// (0x00076c51) zooming_pane

0x0a73,	// (0x00076c59) navi_slider_pane_g1

0x8e74,	// (0x0007f05a) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x000855e0) navi_slider_pane_g

0x0aa5,	// (0x00076c8b) aid_levels_zoom

0x0aad,	// (0x00076c93) zooming_pane_g1

0x0ab5,	// (0x00076c9b) zooming_pane_g2

0x0ab5,	// (0x00076c9b) zooming_pane_g3

0x0002,

0xf409,	// (0x000855ef) zooming_pane_g

0x0abd,	// (0x00076ca3) level_10_zoom

0x0ac6,	// (0x00076cac) level_11_zoom

0x0acf,	// (0x00076cb5) level_1_zoom

0x0ad8,	// (0x00076cbe) level_2_zoom

0x0ae1,	// (0x00076cc7) level_3_zoom

0x0aea,	// (0x00076cd0) level_4_zoom

0x0af3,	// (0x00076cd9) level_5_zoom

0x0afc,	// (0x00076ce2) level_6_zoom

0x0b05,	// (0x00076ceb) level_7_zoom

0x0b0e,	// (0x00076cf4) level_8_zoom

0x0b17,	// (0x00076cfd) level_9_zoom

0x0b28,	// (0x00076d0e) popup_phob_thumbnail_window_g1

0x0b30,	// (0x00076d16) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x000855f6) popup_phob_thumbnail_window_g

0x1e0c,	// (0x00077ff2) level_1_location

0x1e14,	// (0x00077ffa) level_2_location

0x1e1c,	// (0x00078002) level_3_location

0x1e24,	// (0x0007800a) level_4_location

0x0a6b,	// (0x00076c51) level_5_location

0x8e86,	// (0x0007f06c) mce_icon_pane_g1

0x8e8e,	// (0x0007f074) mce_icon_pane_g2

0x0001,

0xf415,	// (0x000855fb) mce_icon_pane_g

0x8e96,	// (0x0007f07c) main_mup_pane_g1_ParamLimits

0x8e96,	// (0x0007f07c) main_mup_pane_g1

0x8eae,	// (0x0007f094) main_mup_pane_g2_ParamLimits

0x8eae,	// (0x0007f094) main_mup_pane_g2

0x8eca,	// (0x0007f0b0) main_mup_pane_g3_ParamLimits

0x8eca,	// (0x0007f0b0) main_mup_pane_g3

0x8ee6,	// (0x0007f0cc) main_mup_pane_g4_ParamLimits

0x8ee6,	// (0x0007f0cc) main_mup_pane_g4

0x8f02,	// (0x0007f0e8) main_mup_pane_g5_ParamLimits

0x8f02,	// (0x0007f0e8) main_mup_pane_g5

0x8f23,	// (0x0007f109) main_mup_pane_g6_ParamLimits

0x8f23,	// (0x0007f109) main_mup_pane_g6

0x8f3f,	// (0x0007f125) main_mup_pane_g7_ParamLimits

0x8f3f,	// (0x0007f125) main_mup_pane_g7

0x8f5b,	// (0x0007f141) main_mup_pane_g8_ParamLimits

0x8f5b,	// (0x0007f141) main_mup_pane_g8

0x8f7b,	// (0x0007f161) main_mup_pane_g9_ParamLimits

0x8f7b,	// (0x0007f161) main_mup_pane_g9

0x8f9a,	// (0x0007f180) main_mup_pane_g10_ParamLimits

0x8f9a,	// (0x0007f180) main_mup_pane_g10

0x8fb9,	// (0x0007f19f) main_mup_pane_g11_ParamLimits

0x8fb9,	// (0x0007f19f) main_mup_pane_g11

0x8fd1,	// (0x0007f1b7) main_mup_pane_g12_ParamLimits

0x8fd1,	// (0x0007f1b7) main_mup_pane_g12

0x8fdf,	// (0x0007f1c5) main_mup_pane_g13_ParamLimits

0x8fdf,	// (0x0007f1c5) main_mup_pane_g13

0x000c,

0xf41a,	// (0x00085600) main_mup_pane_g_ParamLimits

0xf41a,	// (0x00085600) main_mup_pane_g

0x8ff5,	// (0x0007f1db) main_mup_pane_t1_ParamLimits

0x8ff5,	// (0x0007f1db) main_mup_pane_t1

0x9012,	// (0x0007f1f8) main_mup_pane_t2_ParamLimits

0x9012,	// (0x0007f1f8) main_mup_pane_t2

0x902c,	// (0x0007f212) main_mup_pane_t3_ParamLimits

0x902c,	// (0x0007f212) main_mup_pane_t3

0x9046,	// (0x0007f22c) main_mup_pane_t4_ParamLimits

0x9046,	// (0x0007f22c) main_mup_pane_t4

0x9058,	// (0x0007f23e) main_mup_pane_t5_ParamLimits

0x9058,	// (0x0007f23e) main_mup_pane_t5

0x906a,	// (0x0007f250) main_mup_pane_t6_ParamLimits

0x906a,	// (0x0007f250) main_mup_pane_t6

0x0005,

0xf435,	// (0x0008561b) main_mup_pane_t_ParamLimits

0xf435,	// (0x0008561b) main_mup_pane_t

0x9080,	// (0x0007f266) mup_progress_pane_ParamLimits

0x9080,	// (0x0007f266) mup_progress_pane

0x908c,	// (0x0007f272) mup_visualizer_pane_ParamLimits

0x908c,	// (0x0007f272) mup_visualizer_pane

0x90c6,	// (0x0007f2ac) mup_volume_pane_ParamLimits

0x90c6,	// (0x0007f2ac) mup_volume_pane

0x0a85,	// (0x00076c6b) mup_visualizer_pane_g1_ParamLimits

0x0a85,	// (0x00076c6b) mup_visualizer_pane_g1

0x0a85,	// (0x00076c6b) mup_visualizer_pane_g2_ParamLimits

0x0a85,	// (0x00076c6b) mup_visualizer_pane_g2

0x08a8,	// (0x00076a8e) mup_visualizer_pane_g3_ParamLimits

0x08a8,	// (0x00076a8e) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x00085628) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x00085628) mup_visualizer_pane_g

0xef18,	// (0x000850fe) mup_volume_pane_g1

0x0b40,	// (0x00076d26) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0008562f) mup_volume_pane_g

0xef18,	// (0x000850fe) mup_progress_pane_g1

0x0b49,	// (0x00076d2f) mup_progress_pane_g2

0x0b52,	// (0x00076d38) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x00085634) mup_progress_pane_g

0xeb8c,	// (0x00084d72) bg_popup_window_pane_cp05

0x0b5b,	// (0x00076d41) heading_pane_cp02_ParamLimits

0x0b5b,	// (0x00076d41) heading_pane_cp02

0x0b75,	// (0x00076d5b) list_popup_blid_pane

0x0b7d,	// (0x00076d63) list_blid_sat_info_pane_ParamLimits

0x0b7d,	// (0x00076d63) list_blid_sat_info_pane

0x0b90,	// (0x00076d76) list_blid_sat_info_pane_g1

0x0b98,	// (0x00076d7e) list_blid_sat_info_pane_t1

0x91d3,	// (0x0007f3b9) mup_equalizer_pane_ParamLimits

0x91d3,	// (0x0007f3b9) mup_equalizer_pane

0x91f4,	// (0x0007f3da) mup_equalizer_pane_cp1_ParamLimits

0x91f4,	// (0x0007f3da) mup_equalizer_pane_cp1

0x9215,	// (0x0007f3fb) mup_equalizer_pane_cp2_ParamLimits

0x9215,	// (0x0007f3fb) mup_equalizer_pane_cp2

0x9236,	// (0x0007f41c) mup_equalizer_pane_cp3_ParamLimits

0x9236,	// (0x0007f41c) mup_equalizer_pane_cp3

0x9257,	// (0x0007f43d) mup_equalizer_pane_cp4_ParamLimits

0x9257,	// (0x0007f43d) mup_equalizer_pane_cp4

0x9278,	// (0x0007f45e) mup_equalizer_pane_cp5

0x928e,	// (0x0007f474) mup_equalizer_pane_cp6

0x92a6,	// (0x0007f48c) mup_equalizer_pane_cp7

0x1d2a,	// (0x00077f10) bg_popup_call_poc_act_pane_g9

0x1d32,	// (0x00077f18) bg_popup_call_poc_act_pane_g10

0x1d3a,	// (0x00077f20) bg_popup_call_poc_act_pane_g11

0x000a,

0xedfe,	// (0x00084fe4) mup_scale_pane

0xef18,	// (0x000850fe) mup_scale_pane_g1

0x0ba6,	// (0x00076d8c) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x00085650) mup_scale_pane_g

0x0bca,	// (0x00076db0) msg_data_pane

0x0bd2,	// (0x00076db8) scroll_pane_cp017

0x5746,	// (0x0007b92c) bg_list_pane_cp04_ParamLimits

0x5746,	// (0x0007b92c) bg_list_pane_cp04

0x0bda,	// (0x00076dc0) msg_data_pane_g1

0x92d0,	// (0x0007f4b6) msg_data_pane_g2

0x92da,	// (0x0007f4c0) msg_data_pane_g3

0x92e2,	// (0x0007f4c8) msg_data_pane_g4

0x92ea,	// (0x0007f4d0) msg_data_pane_g5

0x92f2,	// (0x0007f4d8) msg_data_pane_g6

0x92fa,	// (0x0007f4e0) msg_data_pane_g7

0x0006,

0xf479,	// (0x0008565f) msg_data_pane_g

0x576c,	// (0x0007b952) msg_text_pane_ParamLimits

0x576c,	// (0x0007b952) msg_text_pane

0x9302,	// (0x0007f4e8) qrid_highlight_pane_cp011_ParamLimits

0x9302,	// (0x0007f4e8) qrid_highlight_pane_cp011

0xeb8c,	// (0x00084d72) msg_body_pane

0xeb8c,	// (0x00084d72) msg_header_pane

0x0beb,	// (0x00076dd1) input_focus_pane_cp07

0x57af,	// (0x0007b995) msg_header_pane_t1_ParamLimits

0x57af,	// (0x0007b995) msg_header_pane_t1

0x57c1,	// (0x0007b9a7) msg_header_pane_t2_ParamLimits

0x57c1,	// (0x0007b9a7) msg_header_pane_t2

0x0001,

0xf48d,	// (0x00085673) msg_header_pane_t_ParamLimits

0xf48d,	// (0x00085673) msg_header_pane_t

0x0c00,	// (0x00076de6) msg_body_pane_g1

0x57d3,	// (0x0007b9b9) msg_body_pane_t1_ParamLimits

0x57d3,	// (0x0007b9b9) msg_body_pane_t1

0x5804,	// (0x0007b9ea) msg_body_pane_t2_ParamLimits

0x5804,	// (0x0007b9ea) msg_body_pane_t2

0x5816,	// (0x0007b9fc) msg_body_pane_t3_ParamLimits

0x5816,	// (0x0007b9fc) msg_body_pane_t3

0x0002,

0xf492,	// (0x00085678) msg_body_pane_t_ParamLimits

0xf492,	// (0x00085678) msg_body_pane_t

0x936e,	// (0x0007f554) main_viewer_pane_g1_ParamLimits

0x936e,	// (0x0007f554) main_viewer_pane_g1

0x937a,	// (0x0007f560) main_viewer_pane_g2_ParamLimits

0x937a,	// (0x0007f560) main_viewer_pane_g2

0x9386,	// (0x0007f56c) main_viewer_pane_g3_ParamLimits

0x9386,	// (0x0007f56c) main_viewer_pane_g3

0x9397,	// (0x0007f57d) main_viewer_pane_g4_ParamLimits

0x9397,	// (0x0007f57d) main_viewer_pane_g4

0x93a8,	// (0x0007f58e) main_viewer_pane_g5_ParamLimits

0x93a8,	// (0x0007f58e) main_viewer_pane_g5

0x93a8,	// (0x0007f58e) main_viewer_pane_g7_ParamLimits

0x93a8,	// (0x0007f58e) main_viewer_pane_g7

0x93ba,	// (0x0007f5a0) main_viewer_pane_g8_ParamLimits

0x93ba,	// (0x0007f5a0) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x00085688) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x00085688) main_viewer_pane_g

0x0c08,	// (0x00076dee) viewer_content_pane_ParamLimits

0x0c08,	// (0x00076dee) viewer_content_pane

0x93f2,	// (0x0007f5d8) main_postcard_pane_g1_ParamLimits

0x93f2,	// (0x0007f5d8) main_postcard_pane_g1

0x9400,	// (0x0007f5e6) main_postcard_pane_g2_ParamLimits

0x9400,	// (0x0007f5e6) main_postcard_pane_g2

0x940e,	// (0x0007f5f4) main_postcard_pane_g3_ParamLimits

0x940e,	// (0x0007f5f4) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x00085699) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x00085699) main_postcard_pane_g

0x941e,	// (0x0007f604) main_postcard_pane_g4

0x1ef9,	// (0x000780df) smil_status_volume_pane_g2

0x944a,	// (0x0007f630) postcard_pane_ParamLimits

0x944a,	// (0x0007f630) postcard_pane

0x0a85,	// (0x00076c6b) postcard_pane_g1_ParamLimits

0x0a85,	// (0x00076c6b) postcard_pane_g1

0x947c,	// (0x0007f662) postcard_pane_g2_ParamLimits

0x947c,	// (0x0007f662) postcard_pane_g2

0x9488,	// (0x0007f66e) postcard_pane_g3_ParamLimits

0x9488,	// (0x0007f66e) postcard_pane_g3

0x0c24,	// (0x00076e0a) postcard_pane_g4_ParamLimits

0x0c24,	// (0x00076e0a) postcard_pane_g4

0x9494,	// (0x0007f67a) postcard_pane_g5_ParamLimits

0x9494,	// (0x0007f67a) postcard_pane_g5

0x94a0,	// (0x0007f686) postcard_pane_g6_ParamLimits

0x94a0,	// (0x0007f686) postcard_pane_g6

0x0c16,	// (0x00076dfc) postcard_pane_g7_ParamLimits

0x0c16,	// (0x00076dfc) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000856a6) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000856a6) postcard_pane_g

0x94ac,	// (0x0007f692) main_mp2_pane_g1_ParamLimits

0x94ac,	// (0x0007f692) main_mp2_pane_g1

0x94b8,	// (0x0007f69e) main_mp2_pane_g2_ParamLimits

0x94b8,	// (0x0007f69e) main_mp2_pane_g2

0x94c4,	// (0x0007f6aa) main_mp2_pane_g3_ParamLimits

0x94c4,	// (0x0007f6aa) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000856b5) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000856b5) main_mp2_pane_g

0x94d0,	// (0x0007f6b6) main_mp2_pane_t1_ParamLimits

0x94d0,	// (0x0007f6b6) main_mp2_pane_t1

0x94e7,	// (0x0007f6cd) main_mp2_pane_t2_ParamLimits

0x94e7,	// (0x0007f6cd) main_mp2_pane_t2

0x94fb,	// (0x0007f6e1) main_mp2_pane_t3_ParamLimits

0x94fb,	// (0x0007f6e1) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x000856bc) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x000856bc) main_mp2_pane_t

0x0c32,	// (0x00076e18) pec_content_pane_ParamLimits

0x0c32,	// (0x00076e18) pec_content_pane

0x01ae,	// (0x00076394) scroll_pane_cp015

0x0c44,	// (0x00076e2a) pec_attribute_pane_ParamLimits

0x0c44,	// (0x00076e2a) pec_attribute_pane

0x950d,	// (0x0007f6f3) pec_content_pane_g1_ParamLimits

0x950d,	// (0x0007f6f3) pec_content_pane_g1

0x0c54,	// (0x00076e3a) pec_content_pane_t1_ParamLimits

0x0c54,	// (0x00076e3a) pec_content_pane_t1

0x0c66,	// (0x00076e4c) pec_content_pane_t2_ParamLimits

0x0c66,	// (0x00076e4c) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x000856c3) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x000856c3) pec_content_pane_t

0x9519,	// (0x0007f6ff) list_single_graphic_pane_cp01_ParamLimits

0x9519,	// (0x0007f6ff) list_single_graphic_pane_cp01

0xedfe,	// (0x00084fe4) bg_popup_sub_pane_cp04

0x0c78,	// (0x00076e5e) popup_mup_playback_window_g1

0x0c84,	// (0x00076e6a) popup_mup_playback_window_t1

0x0c99,	// (0x00076e7f) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x000856c8) popup_mup_playback_window_t

0x0cd0,	// (0x00076eb6) main_image_pane_g1_ParamLimits

0x0cd0,	// (0x00076eb6) main_image_pane_g1

0x0d13,	// (0x00076ef9) scroll_pane_cp018_ParamLimits

0x0d13,	// (0x00076ef9) scroll_pane_cp018

0x0d2b,	// (0x00076f11) scroll_pane_cp016_ParamLimits

0x0d2b,	// (0x00076f11) scroll_pane_cp016

0x95b2,	// (0x0007f798) smil2_image_pane_ParamLimits

0x95b2,	// (0x0007f798) smil2_image_pane

0x95e2,	// (0x0007f7c8) smil2_root_pane_ParamLimits

0x95e2,	// (0x0007f7c8) smil2_root_pane

0x960e,	// (0x0007f7f4) smil2_text_pane_ParamLimits

0x960e,	// (0x0007f7f4) smil2_text_pane

0xeb8c,	// (0x00084d72) bg_list_pane_cp06

0x0d67,	// (0x00076f4d) grid_radio_pane

0xeb8c,	// (0x00084d72) bg_popup_window_pane_cp06

0x0d6f,	// (0x00076f55) main_fmradio_pane_t1

0x06f7,	// (0x000768dd) heading_pane_cp04

0x0d7d,	// (0x00076f63) main_fmradio_pane_t2

0x1d42,	// (0x00077f28) popup_cale_lunar_info_window_g1

0x0d8b,	// (0x00076f71) main_fmradio_pane_t3

0x1d4a,	// (0x00077f30) popup_cale_lunar_info_window_g2

0x0d99,	// (0x00076f7f) main_fmradio_pane_t4

0x0001,

0x0da7,	// (0x00076f8d) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x000857a3) popup_cale_lunar_info_window_g

0xf4f7,	// (0x000856dd) main_fmradio_pane_t

0x0db5,	// (0x00076f9b) wait_bar_pane_cp03

0x0dbd,	// (0x00076fa3) cell_fmradio_pane_ParamLimits

0x0dbd,	// (0x00076fa3) cell_fmradio_pane

0x0c16,	// (0x00076dfc) cell_fmradio_pane_g1_ParamLimits

0x0c16,	// (0x00076dfc) cell_fmradio_pane_g1

0xeb8c,	// (0x00084d72) grid_highlight_pane_cp011

0x0dd0,	// (0x00076fb6) poc_content_pane_ParamLimits

0x0dd0,	// (0x00076fb6) poc_content_pane

0x0de2,	// (0x00076fc8) scroll_pane_cp019

0x964e,	// (0x0007f834) popup_call_poc_act_window_ParamLimits

0x964e,	// (0x0007f834) popup_call_poc_act_window

0x965b,	// (0x0007f841) popup_call_poc_inact_window_ParamLimits

0x965b,	// (0x0007f841) popup_call_poc_inact_window

0xf594,	// (0x0008577a) bg_popup_call_poc_act_pane_g

0x1cba,	// (0x00077ea0) bg_popup_call_poc_inact_pane_g1

0x1cc2,	// (0x00077ea8) bg_popup_call_poc_inact_pane_g2

0x0dea,	// (0x00076fd0) popup_call_poc_act_window_g2

0x1cca,	// (0x00077eb0) bg_popup_call_poc_inact_pane_g3

0x1cd2,	// (0x00077eb8) bg_popup_call_poc_inact_pane_g4

0x1cda,	// (0x00077ec0) bg_popup_call_poc_inact_pane_g5

0x0df2,	// (0x00076fd8) popup_call_poc_act_window_t1_ParamLimits

0x0df2,	// (0x00076fd8) popup_call_poc_act_window_t1

0x0e1a,	// (0x00077000) popup_call_poc_act_window_t2_ParamLimits

0x0e1a,	// (0x00077000) popup_call_poc_act_window_t2

0x0e42,	// (0x00077028) popup_call_poc_act_window_t3_ParamLimits

0x0e42,	// (0x00077028) popup_call_poc_act_window_t3

0x0e6a,	// (0x00077050) popup_call_poc_act_window_t4_ParamLimits

0x0e6a,	// (0x00077050) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x000856e8) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x000856e8) popup_call_poc_act_window_t

0x1ce2,	// (0x00077ec8) bg_popup_call_poc_inact_pane_g6

0x1cea,	// (0x00077ed0) bg_popup_call_poc_inact_pane_g7

0x1cf2,	// (0x00077ed8) bg_popup_call_poc_inact_pane_g8

0x0e7c,	// (0x00077062) popup_call_poc_inact_window_g2

0x1cfa,	// (0x00077ee0) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x00085767) bg_popup_call_poc_inact_pane_g

0x0e84,	// (0x0007706a) popup_call_poc_inact_window_t1_ParamLimits

0x0e84,	// (0x0007706a) popup_call_poc_inact_window_t1

0x0e99,	// (0x0007707f) popup_call_poc_inact_window_t2_ParamLimits

0x0e99,	// (0x0007707f) popup_call_poc_inact_window_t2

0x0eae,	// (0x00077094) popup_call_poc_inact_window_t3_ParamLimits

0x0eae,	// (0x00077094) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x000856f1) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x000856f1) popup_call_poc_inact_window_t

0x1e7f,	// (0x00078065) context_pane_ParamLimits

0x9c8f,	// (0x0007fe75) signal_pane_ParamLimits

0x0a6b,	// (0x00076c51) main_call2_pane

0x9c02,	// (0x0007fde8) popup_phob_thumbnail2_window_ParamLimits

0x9c02,	// (0x0007fde8) popup_phob_thumbnail2_window

0x931c,	// (0x0007f502) aid_hotspot_pointer_arrow_pane

0x9324,	// (0x0007f50a) aid_hotspot_pointer_hand_pane

0x997d,	// (0x0007fb63) phob_pre_status_pane_g5

0x7647,	// (0x0007d82d) cams_zoom_pane_ParamLimits

0x7653,	// (0x0007d839) image_vga_pane_ParamLimits

0x7662,	// (0x0007d848) main_camera_pane_g1_ParamLimits

0x7670,	// (0x0007d856) main_camera_pane_g2_ParamLimits

0x767c,	// (0x0007d862) main_camera_pane_g3_ParamLimits

0x7688,	// (0x0007d86e) main_camera_pane_g4_ParamLimits

0x7694,	// (0x0007d87a) main_camera_pane_g5_ParamLimits

0x76a0,	// (0x0007d886) main_camera_pane_g6_ParamLimits

0x76ac,	// (0x0007d892) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x000853f0) main_camera_pane_g_ParamLimits

0x76b8,	// (0x0007d89e) main_camera_pane_t1_ParamLimits

0x76ca,	// (0x0007d8b0) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x00085401) main_camera_pane_t_ParamLimits

0xedfe,	// (0x00084fe4) bg_popup_preview_window_pane_cp01_ParamLimits

0xedfe,	// (0x00084fe4) bg_popup_preview_window_pane_cp01

0x0ec3,	// (0x000770a9) popup_phob_thumbnail2_window_g1_ParamLimits

0x0ec3,	// (0x000770a9) popup_phob_thumbnail2_window_g1

0xeb8c,	// (0x00084d72) call2_cli_visual_pane

0x9677,	// (0x0007f85d) popup_call2_audio_conf_window_ParamLimits

0x9677,	// (0x0007f85d) popup_call2_audio_conf_window

0x968c,	// (0x0007f872) popup_call2_audio_first_window_ParamLimits

0x968c,	// (0x0007f872) popup_call2_audio_first_window

0x972a,	// (0x0007f910) popup_call2_audio_in_window_ParamLimits

0x972a,	// (0x0007f910) popup_call2_audio_in_window

0x976c,	// (0x0007f952) popup_call2_audio_out_window_ParamLimits

0x976c,	// (0x0007f952) popup_call2_audio_out_window

0x97ce,	// (0x0007f9b4) popup_call2_audio_second_window_ParamLimits

0x97ce,	// (0x0007f9b4) popup_call2_audio_second_window

0x982c,	// (0x0007fa12) popup_call2_audio_wait_window_ParamLimits

0x982c,	// (0x0007fa12) popup_call2_audio_wait_window

0xeb8c,	// (0x00084d72) bg_popup_call2_act_pane_cp03

0xede0,	// (0x00084fc6) list_conf_pane_cp

0x0ecf,	// (0x000770b5) popup_call2_audio_conf_window_t1

0x0754,	// (0x0007693a) list_single_graphic_popup_conf2_pane_ParamLimits

0x0754,	// (0x0007693a) list_single_graphic_popup_conf2_pane

0x0767,	// (0x0007694d) list_highlight_pane_cp04

0x0edd,	// (0x000770c3) list_single_graphic_popup_conf2_pane_g1

0x0778,	// (0x0007695e) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x000856f8) list_single_graphic_popup_conf2_pane_g

0x0ee7,	// (0x000770cd) list_single_graphic_popup_conf2_pane_t1

0x0ef5,	// (0x000770db) bg_popup_call2_act_pane_cp01_ParamLimits

0x0ef5,	// (0x000770db) bg_popup_call2_act_pane_cp01

0x0f7f,	// (0x00077165) call_type_pane_cp05_ParamLimits

0x0f7f,	// (0x00077165) call_type_pane_cp05

0x0fd3,	// (0x000771b9) popup_call2_audio_second_window_g1_ParamLimits

0x0fd3,	// (0x000771b9) popup_call2_audio_second_window_g1

0x1027,	// (0x0007720d) popup_call2_audio_second_window_g2_ParamLimits

0x1027,	// (0x0007720d) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x000856fd) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x000856fd) popup_call2_audio_second_window_g

0x108c,	// (0x00077272) popup_call2_audio_second_window_t1_ParamLimits

0x108c,	// (0x00077272) popup_call2_audio_second_window_t1

0x1147,	// (0x0007732d) popup_call2_audio_second_window_t2_ParamLimits

0x1147,	// (0x0007732d) popup_call2_audio_second_window_t2

0x119a,	// (0x00077380) popup_call2_audio_second_window_t3_ParamLimits

0x119a,	// (0x00077380) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x00085704) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x00085704) popup_call2_audio_second_window_t

0xeb8c,	// (0x00084d72) bg_popup_call2_in_pane_cp02

0xeb96,	// (0x00084d7c) call_type_pane_cp04

0xeb9e,	// (0x00084d84) popup_call2_audio_wait_window_g1

0xeba6,	// (0x00084d8c) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000852db) popup_call2_audio_wait_window_g

0xebae,	// (0x00084d94) popup_call2_audio_wait_window_t3

0x128d,	// (0x00077473) bg_popup_call2_act_pane_ParamLimits

0x128d,	// (0x00077473) bg_popup_call2_act_pane

0x134d,	// (0x00077533) call_type_pane_cp03_ParamLimits

0x134d,	// (0x00077533) call_type_pane_cp03

0x13b1,	// (0x00077597) popup_call2_audio_first_window_g1_ParamLimits

0x13b1,	// (0x00077597) popup_call2_audio_first_window_g1

0x1421,	// (0x00077607) popup_call2_audio_first_window_g2_ParamLimits

0x1421,	// (0x00077607) popup_call2_audio_first_window_g2

0x0a85,	// (0x00076c6b) popup_call2_audio_first_window_g3_ParamLimits

0x0a85,	// (0x00076c6b) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0008570d) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0008570d) popup_call2_audio_first_window_g

0x14ff,	// (0x000776e5) popup_call2_audio_first_window_t1_ParamLimits

0x14ff,	// (0x000776e5) popup_call2_audio_first_window_t1

0x1602,	// (0x000777e8) popup_call2_audio_first_window_t4_ParamLimits

0x1602,	// (0x000777e8) popup_call2_audio_first_window_t4

0x16e5,	// (0x000778cb) popup_call2_audio_first_window_t5_ParamLimits

0x16e5,	// (0x000778cb) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x00085718) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x00085718) popup_call2_audio_first_window_t

0xedf6,	// (0x00084fdc) bg_popup_call2_act_pane_g1

0x1d52,	// (0x00077f38) popup_cale_lunar_info_window_t1

0x1d60,	// (0x00077f46) popup_cale_lunar_info_window_t2

0x1d6e,	// (0x00077f54) popup_cale_lunar_info_window_t3

0xeb8c,	// (0x00084d72) bg_popup_call2_bubble_pane

0x17e6,	// (0x000779cc) bg_popup_call2_in_pane_cp01_ParamLimits

0x17e6,	// (0x000779cc) bg_popup_call2_in_pane_cp01

0xe868,	// (0x00084a4e) call_type_pane_cp02

0x182e,	// (0x00077a14) popup_call2_audio_out_window_g1_ParamLimits

0x182e,	// (0x00077a14) popup_call2_audio_out_window_g1

0x185a,	// (0x00077a40) popup_call2_audio_out_window_g2_ParamLimits

0x185a,	// (0x00077a40) popup_call2_audio_out_window_g2

0x1882,	// (0x00077a68) popup_call2_audio_out_window_g3_ParamLimits

0x1882,	// (0x00077a68) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x00085721) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x00085721) popup_call2_audio_out_window_g

0x18bd,	// (0x00077aa3) popup_call2_audio_out_window_t1_ParamLimits

0x18bd,	// (0x00077aa3) popup_call2_audio_out_window_t1

0x191c,	// (0x00077b02) popup_call2_audio_out_window_t2_ParamLimits

0x191c,	// (0x00077b02) popup_call2_audio_out_window_t2

0x1970,	// (0x00077b56) popup_call2_audio_out_window_t3_ParamLimits

0x1970,	// (0x00077b56) popup_call2_audio_out_window_t3

0x1986,	// (0x00077b6c) popup_call2_audio_out_window_t4_ParamLimits

0x1986,	// (0x00077b6c) popup_call2_audio_out_window_t4

0x199c,	// (0x00077b82) popup_call2_audio_out_window_t5_ParamLimits

0x199c,	// (0x00077b82) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0008572a) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0008572a) popup_call2_audio_out_window_t

0x1a00,	// (0x00077be6) bg_popup_call2_in_pane_ParamLimits

0x1a00,	// (0x00077be6) bg_popup_call2_in_pane

0x1a5c,	// (0x00077c42) popup_call2_audio_in_window_g1_ParamLimits

0x1a5c,	// (0x00077c42) popup_call2_audio_in_window_g1

0x1a94,	// (0x00077c7a) popup_call2_audio_in_window_g2_ParamLimits

0x1a94,	// (0x00077c7a) popup_call2_audio_in_window_g2

0x1acc,	// (0x00077cb2) popup_call2_audio_in_window_g3_ParamLimits

0x1acc,	// (0x00077cb2) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x00085737) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x00085737) popup_call2_audio_in_window_g

0x1b24,	// (0x00077d0a) popup_call2_audio_in_window_t1_ParamLimits

0x1b24,	// (0x00077d0a) popup_call2_audio_in_window_t1

0x1ba4,	// (0x00077d8a) popup_call2_audio_in_window_t2_ParamLimits

0x1ba4,	// (0x00077d8a) popup_call2_audio_in_window_t2

0x1c24,	// (0x00077e0a) popup_call2_audio_in_window_t3_ParamLimits

0x1c24,	// (0x00077e0a) popup_call2_audio_in_window_t3

0x1c3e,	// (0x00077e24) popup_call2_audio_in_window_t4_ParamLimits

0x1c3e,	// (0x00077e24) popup_call2_audio_in_window_t4

0x1c50,	// (0x00077e36) popup_call2_audio_in_window_t5_ParamLimits

0x1c50,	// (0x00077e36) popup_call2_audio_in_window_t5

0x1c65,	// (0x00077e4b) popup_call2_audio_in_window_t6_ParamLimits

0x1c65,	// (0x00077e4b) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x00085740) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x00085740) popup_call2_audio_in_window_t

0xedf6,	// (0x00084fdc) bg_popup_call2_in_pane_g1

0x1d7c,	// (0x00077f62) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x000857a8) popup_cale_lunar_info_window_t

0xedfe,	// (0x00084fe4) bg_popup_call2_rect_pane_ParamLimits

0xedfe,	// (0x00084fe4) bg_popup_call2_rect_pane

0xeb8c,	// (0x00084d72) call2_cli_visual_graphic_pane

0xeb8c,	// (0x00084d72) call2_cli_visual_text_pane

0x9d35,	// (0x0007ff1b) smil_status_volume_pane_g3

0x0002,

0xef18,	// (0x000850fe) call2_cli_visual_graphic_pane_g1

0xef18,	// (0x000850fe) call2_cli_visual_graphic_pane_g2

0xef18,	// (0x000850fe) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0008574d) call2_cli_visual_graphic_pane_g

0x1c7a,	// (0x00077e60) bg_popup_call2_rect_pane_g1

0xefa4,	// (0x0008518a) bg_popup_call2_rect_pane_g2

0x1c82,	// (0x00077e68) bg_popup_call2_rect_pane_g3

0x1c8a,	// (0x00077e70) bg_popup_call2_rect_pane_g4

0x1c92,	// (0x00077e78) bg_popup_call2_rect_pane_g5

0x1c9a,	// (0x00077e80) bg_popup_call2_rect_pane_g6

0x1ca2,	// (0x00077e88) bg_popup_call2_rect_pane_g7

0x1caa,	// (0x00077e90) bg_popup_call2_rect_pane_g8

0x1cb2,	// (0x00077e98) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x00085754) bg_popup_call2_rect_pane_g

0x1cba,	// (0x00077ea0) bg_popup_call2_bubble_pane_g1

0x1cc2,	// (0x00077ea8) bg_popup_call2_bubble_pane_g2

0x1cca,	// (0x00077eb0) bg_popup_call2_bubble_pane_g3

0x1cd2,	// (0x00077eb8) bg_popup_call2_bubble_pane_g4

0x1cda,	// (0x00077ec0) bg_popup_call2_bubble_pane_g5

0x1ce2,	// (0x00077ec8) bg_popup_call2_bubble_pane_g6

0x1cea,	// (0x00077ed0) bg_popup_call2_bubble_pane_g7

0x1cf2,	// (0x00077ed8) bg_popup_call2_bubble_pane_g8

0x1cfa,	// (0x00077ee0) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x00085767) bg_popup_call2_bubble_pane_g

0x7054,	// (0x0007d23a) aid_cale_week_size_cell_pane

0x76dc,	// (0x0007d8c2) aid_cams_cif_uncrop_pane_ParamLimits

0x76dc,	// (0x0007d8c2) aid_cams_cif_uncrop_pane

0x7837,	// (0x0007da1d) aid_cams_size_cell_ParamLimits

0x7837,	// (0x0007da1d) aid_cams_size_cell

0x7843,	// (0x0007da29) grid_cams_pane_ParamLimits

0x7851,	// (0x0007da37) linegrid_cams_pane_ParamLimits

0x7940,	// (0x0007db26) call_video_pane_t1

0x7961,	// (0x0007db47) call_video_pane_t2

0x0001,

0xf26e,	// (0x00085454) call_video_pane_t

0x7eaa,	// (0x0007e090) aid_cale_month_size_cell_pane_ParamLimits

0x7eaa,	// (0x0007e090) aid_cale_month_size_cell_pane

0xf60b,	// (0x000857f1) smil_status_volume_pane_g

0x9d42,	// (0x0007ff28) volume_smil_pane_ParamLimits

0x67c3,	// (0x0007c9a9) aid_popup2_width_pane

0x6f56,	// (0x0007d13c) cell_qdial_pane_g4_ParamLimits

0x6f56,	// (0x0007d13c) cell_qdial_pane_g4

0x8dbb,	// (0x0007efa1) aid_blid_cardinal_pane_ParamLimits

0x8dcb,	// (0x0007efb1) aid_blid_destination_pane_ParamLimits

0x8dcb,	// (0x0007efb1) aid_blid_destination_pane

0xedfe,	// (0x00084fe4) bg_popup_call_poc_act_pane_ParamLimits

0xedfe,	// (0x00084fe4) bg_popup_call_poc_act_pane

0xedfe,	// (0x00084fe4) bg_popup_call_poc_inact_pane_ParamLimits

0xedfe,	// (0x00084fe4) bg_popup_call_poc_inact_pane

0x1d02,	// (0x00077ee8) bg_popup_call_poc_act_pane_g1

0x1d0a,	// (0x00077ef0) bg_popup_call_poc_act_pane_g2

0x1d12,	// (0x00077ef8) bg_popup_call_poc_act_pane_g3

0x1cd2,	// (0x00077eb8) bg_popup_call_poc_act_pane_g4

0x1cda,	// (0x00077ec0) bg_popup_call_poc_act_pane_g5

0x1d1a,	// (0x00077f00) bg_popup_call_poc_act_pane_g6

0x1cea,	// (0x00077ed0) bg_popup_call_poc_act_pane_g7

0x1d22,	// (0x00077f08) bg_popup_call_poc_act_pane_g8

0xeb8c,	// (0x00084d72) main_usb_pane

0x9b31,	// (0x0007fd17) popup_cale_lunar_info_window

0x7c8c,	// (0x0007de72) im_reading_pane_t1_ParamLimits

0x0106,	// (0x000762ec) list_im_pane_ParamLimits

0x0117,	// (0x000762fd) scroll_pane_cp07_ParamLimits

0xeb8c,	// (0x00084d72) grid_highlight_pane_cp012

0xedfe,	// (0x00084fe4) mup_scale_pane_ParamLimits

0x0a85,	// (0x00076c6b) main_usb_pane_g1_ParamLimits

0x0a85,	// (0x00076c6b) main_usb_pane_g1

0x98a0,	// (0x0007fa86) main_usb_pane_g2_ParamLimits

0x98a0,	// (0x0007fa86) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x00085791) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x00085791) main_usb_pane_g

0x98ac,	// (0x0007fa92) main_usb_pane_t1_ParamLimits

0x98ac,	// (0x0007fa92) main_usb_pane_t1

0x98be,	// (0x0007faa4) main_usb_pane_t2_ParamLimits

0x98be,	// (0x0007faa4) main_usb_pane_t2

0x98d0,	// (0x0007fab6) main_usb_pane_t3_ParamLimits

0x98d0,	// (0x0007fab6) main_usb_pane_t3

0x98e2,	// (0x0007fac8) main_usb_pane_t4_ParamLimits

0x98e2,	// (0x0007fac8) main_usb_pane_t4

0x98f4,	// (0x0007fada) main_usb_pane_t5_ParamLimits

0x98f4,	// (0x0007fada) main_usb_pane_t5

0x9906,	// (0x0007faec) main_usb_pane_t6_ParamLimits

0x9906,	// (0x0007faec) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x00085796) main_usb_pane_t_ParamLimits

0x8d61,	// (0x0007ef47) aid_text_placing

0x8d6d,	// (0x0007ef53) main_location2_pane_t1_ParamLimits

0x8d81,	// (0x0007ef67) main_location2_pane_t2_ParamLimits

0x8d95,	// (0x0007ef7b) main_location2_pane_t3_ParamLimits

0x8da9,	// (0x0007ef8f) main_location2_pane_t4_ParamLimits

0x8da9,	// (0x0007ef8f) main_location2_pane_t4

0xf3cf,	// (0x000855b5) main_location2_pane_t_ParamLimits

0xee3a,	// (0x00085020) find_pinb_pane_g2_ParamLimits

0xee3a,	// (0x00085020) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x00085301) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x00085301) find_pinb_pane_g

0xee46,	// (0x0008502c) find_pinb_pane_t1_ParamLimits

0xee58,	// (0x0008503e) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x00085306) find_pinb_pane_t_ParamLimits

0xeb8c,	// (0x00084d72) main_call3_pane

0x83fe,	// (0x0007e5e4) cale_month_day_heading_pane_t1_ParamLimits

0x8484,	// (0x0007e66a) cale_month_day_heading_pane_t2_ParamLimits

0x8515,	// (0x0007e6fb) cale_month_day_heading_pane_t3_ParamLimits

0x85a6,	// (0x0007e78c) cale_month_day_heading_pane_t4_ParamLimits

0x8637,	// (0x0007e81d) cale_month_day_heading_pane_t5_ParamLimits

0x86c8,	// (0x0007e8ae) cale_month_day_heading_pane_t6_ParamLimits

0x8759,	// (0x0007e93f) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0008548c) cale_month_day_heading_pane_t_ParamLimits

0x0361,	// (0x00076547) smil_status_volume_pane

0x9464,	// (0x0007f64a) postcard_address_pane_ParamLimits

0x9464,	// (0x0007f64a) postcard_address_pane

0x9470,	// (0x0007f656) postcard_message_pane_ParamLimits

0x9470,	// (0x0007f656) postcard_message_pane

0x986b,	// (0x0007fa51) call2_cli_visual_pane_t1_ParamLimits

0x986b,	// (0x0007fa51) call2_cli_visual_pane_t1

0x9e99,	// (0x0008007f) postcard_message_pane_t1_ParamLimits

0x9e99,	// (0x0008007f) postcard_message_pane_t1

0x9e82,	// (0x00080068) postcard_address_pane_t1_ParamLimits

0x9e82,	// (0x00080068) postcard_address_pane_t1

0x9e73,	// (0x00080059) popup_call3_audio_in_window_ParamLimits

0x9e73,	// (0x00080059) popup_call3_audio_in_window

0x9d57,	// (0x0007ff3d) bg_popup_call3_in_pane_ParamLimits

0x9d57,	// (0x0007ff3d) bg_popup_call3_in_pane

0x9db9,	// (0x0007ff9f) popup_call3_audio_in_window_g1_ParamLimits

0x9db9,	// (0x0007ff9f) popup_call3_audio_in_window_g1

0x9dd1,	// (0x0007ffb7) popup_call3_audio_in_window_g2_ParamLimits

0x9dd1,	// (0x0007ffb7) popup_call3_audio_in_window_g2

0x9de9,	// (0x0007ffcf) popup_call3_audio_in_window_g3_ParamLimits

0x9de9,	// (0x0007ffcf) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x000857f8) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x000857f8) popup_call3_audio_in_window_g

0x9e11,	// (0x0007fff7) popup_call3_audio_in_window_t1_ParamLimits

0x9e11,	// (0x0007fff7) popup_call3_audio_in_window_t1

0x9e39,	// (0x0008001f) popup_call3_audio_in_window_t2_ParamLimits

0x9e39,	// (0x0008001f) popup_call3_audio_in_window_t2

0x9e61,	// (0x00080047) popup_call3_audio_in_window_t3_ParamLimits

0x9e61,	// (0x00080047) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x00085801) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x00085801) popup_call3_audio_in_window_t

0x0a6b,	// (0x00076c51) bg_popup_call3_rect_pane

0x1c7a,	// (0x00077e60) bg_popup_call3_rect_pane_g1

0xefa4,	// (0x0008518a) bg_popup_call3_rect_pane_g2

0x1c82,	// (0x00077e68) bg_popup_call3_rect_pane_g3

0x1c8a,	// (0x00077e70) bg_popup_call3_rect_pane_g4

0x1c92,	// (0x00077e78) bg_popup_call3_rect_pane_g5

0x1c9a,	// (0x00077e80) bg_popup_call3_rect_pane_g6

0x1ca2,	// (0x00077e88) bg_popup_call3_rect_pane_g7

0x90e1,	// (0x0007f2c7) mup_visualizer_osc_pane

0x0b38,	// (0x00076d1e) mup_visualizer_spec_pane

0x9d77,	// (0x0007ff5d) call3_video_qcif_pane_ParamLimits

0x9d77,	// (0x0007ff5d) call3_video_qcif_pane

0x9d89,	// (0x0007ff6f) call3_video_qcif_uncrop_pane_ParamLimits

0x9d89,	// (0x0007ff6f) call3_video_qcif_uncrop_pane

0x9d97,	// (0x0007ff7d) call3_video_subqcif_pane_ParamLimits

0x9d97,	// (0x0007ff7d) call3_video_subqcif_pane

0x9da9,	// (0x0007ff8f) call3_video_subqcif_uncrop_pane_ParamLimits

0x9da9,	// (0x0007ff8f) call3_video_subqcif_uncrop_pane

0x9e01,	// (0x0007ffe7) popup_call3_audio_in_window_g4_ParamLimits

0x9e01,	// (0x0007ffe7) popup_call3_audio_in_window_g4

0x9d24,	// (0x0007ff0a) mup_spec_half_pane

0x9d2d,	// (0x0007ff13) mup_spec_half_pane_cp

0x1edf,	// (0x000780c5) mup_osc_middle_pane

0x1ee8,	// (0x000780ce) mup_visualizer_osc_pane_g1

0x9d05,	// (0x0007feeb) mup_spec_bar_pane_ParamLimits

0x9d05,	// (0x0007feeb) mup_spec_bar_pane

0x1ecc,	// (0x000780b2) mup_spec_bar_pane_g1

0x1ed6,	// (0x000780bc) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000857ec) mup_spec_bar_pane_g

0x7054,	// (0x0007d23a) aid_cale_week_size_cell_pane_ParamLimits

0x7069,	// (0x0007d24f) bg_cale_heading_pane_ParamLimits

0xefe1,	// (0x000851c7) bg_cale_pane_cp01_ParamLimits

0x708b,	// (0x0007d271) cale_week_corner_pane_ParamLimits

0x70a5,	// (0x0007d28b) cale_week_day_heading_pane_ParamLimits

0x70c7,	// (0x0007d2ad) cale_week_scroll_pane_g1_ParamLimits

0x70e4,	// (0x0007d2ca) cale_week_scroll_pane_g2_ParamLimits

0x70f7,	// (0x0007d2dd) cale_week_scroll_pane_g3_ParamLimits

0x710a,	// (0x0007d2f0) cale_week_scroll_pane_g4_ParamLimits

0x711d,	// (0x0007d303) cale_week_scroll_pane_g5_ParamLimits

0x7130,	// (0x0007d316) cale_week_scroll_pane_g6_ParamLimits

0x7143,	// (0x0007d329) cale_week_scroll_pane_g7_ParamLimits

0x7156,	// (0x0007d33c) cale_week_scroll_pane_g8_ParamLimits

0x716b,	// (0x0007d351) cale_week_scroll_pane_g9_ParamLimits

0x717e,	// (0x0007d364) cale_week_scroll_pane_g10_ParamLimits

0x7191,	// (0x0007d377) cale_week_scroll_pane_g11_ParamLimits

0x71a4,	// (0x0007d38a) cale_week_scroll_pane_g12_ParamLimits

0x71bb,	// (0x0007d3a1) cale_week_scroll_pane_g13_ParamLimits

0x71d6,	// (0x0007d3bc) cale_week_scroll_pane_g14_ParamLimits

0x71f1,	// (0x0007d3d7) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x00085392) cale_week_scroll_pane_g_ParamLimits

0x7221,	// (0x0007d407) cale_week_time_pane_ParamLimits

0x7236,	// (0x0007d41c) grid_cale_week_pane_ParamLimits

0xefff,	// (0x000851e5) listscroll_cale_week_pane_t1

0xf011,	// (0x000851f7) scroll_pane_cp08_ParamLimits

0x7f13,	// (0x0007e0f9) cale_month_corner_pane_ParamLimits

0x0337,	// (0x0007651d) cale_month_pane_t1

0x839b,	// (0x0007e581) cale_month_week_pane_ParamLimits

0x0a85,	// (0x00076c6b) popup_call_status_window_g1_ParamLimits

0x8b94,	// (0x0007ed7a) popup_call_status_window_g2_ParamLimits

0x8ba0,	// (0x0007ed86) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0008553c) popup_call_status_window_g_ParamLimits

0x06ef,	// (0x000768d5) aid_call2_pane

0x57a3,	// (0x0007b989) msg_header_pane_g1

0x9464,	// (0x0007f64a) postcard_address2_pane_ParamLimits

0x9464,	// (0x0007f64a) postcard_address2_pane

0x9470,	// (0x0007f656) postcard_message2_pane_ParamLimits

0x9470,	// (0x0007f656) postcard_message2_pane

0x9c9d,	// (0x0007fe83) message2_row_pane_ParamLimits

0x9c9d,	// (0x0007fe83) message2_row_pane

0x9cb8,	// (0x0007fe9e) address2_row_pane_ParamLimits

0x9cb8,	// (0x0007fe9e) address2_row_pane

0x1e9a,	// (0x00078080) postcard_message2_row_pane_g1

0x1ea2,	// (0x00078088) postcard_message2_row_pane_t1

0x1e9a,	// (0x00078080) address2_row_pane_g1

0x1ea2,	// (0x00078088) address2_row_pane_t1

0x759e,	// (0x0007d784) aid_size_cell_vorec

0xeb8c,	// (0x00084d72) main_rss_pane

0x9ccb,	// (0x0007feb1) rss_list_single_pane_ParamLimits

0x9ccb,	// (0x0007feb1) rss_list_single_pane

0x1eb0,	// (0x00078096) rss_list_single_pane_t1

0x1ebe,	// (0x000780a4) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x000857e7) rss_list_single_pane_t

0xeb8c,	// (0x00084d72) main_camera2_pane

0xeb8c,	// (0x00084d72) main_video2_pane

0x9efd,	// (0x000800e3) cams_zoom_pane_cp2_ParamLimits

0x9efd,	// (0x000800e3) cams_zoom_pane_cp2

0x9f09,	// (0x000800ef) image2_vga_pane_ParamLimits

0x9f09,	// (0x000800ef) image2_vga_pane

0x9f18,	// (0x000800fe) main_camera2_pane_g1_ParamLimits

0x9f18,	// (0x000800fe) main_camera2_pane_g1

0x9f24,	// (0x0008010a) main_camera2_pane_g2_ParamLimits

0x9f24,	// (0x0008010a) main_camera2_pane_g2

0x9f30,	// (0x00080116) main_camera2_pane_g3_ParamLimits

0x9f30,	// (0x00080116) main_camera2_pane_g3

0x9f3c,	// (0x00080122) main_camera2_pane_g4_ParamLimits

0x9f3c,	// (0x00080122) main_camera2_pane_g4

0x9f48,	// (0x0008012e) main_camera2_pane_g5_ParamLimits

0x9f48,	// (0x0008012e) main_camera2_pane_g5

0x9f54,	// (0x0008013a) main_camera2_pane_g6_ParamLimits

0x9f54,	// (0x0008013a) main_camera2_pane_g6

0x9f60,	// (0x00080146) main_camera2_pane_g7_ParamLimits

0x9f60,	// (0x00080146) main_camera2_pane_g7

0x9f6c,	// (0x00080152) main_camera2_pane_g8_ParamLimits

0x9f6c,	// (0x00080152) main_camera2_pane_g8

0x0008,

0xf622,	// (0x00085808) main_camera2_pane_g_ParamLimits

0xf622,	// (0x00085808) main_camera2_pane_g

0x9f84,	// (0x0008016a) main_camera2_pane_t1_ParamLimits

0x9f84,	// (0x0008016a) main_camera2_pane_t1

0x9f96,	// (0x0008017c) main_camera2_pane_t2_ParamLimits

0x9f96,	// (0x0008017c) main_camera2_pane_t2

0x9fa8,	// (0x0008018e) main_camera2_pane_t3_ParamLimits

0x9fa8,	// (0x0008018e) main_camera2_pane_t3

0x9fba,	// (0x000801a0) main_camera2_pane_t4_ParamLimits

0x9fba,	// (0x000801a0) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0008581b) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0008581b) main_camera2_pane_t

0xa01c,	// (0x00080202) cams_zoom_pane_cp4_ParamLimits

0xa01c,	// (0x00080202) cams_zoom_pane_cp4

0xa02c,	// (0x00080212) image2_cif_pane_ParamLimits

0xa02c,	// (0x00080212) image2_cif_pane

0xa041,	// (0x00080227) image2_subqcif_pane_ParamLimits

0xa041,	// (0x00080227) image2_subqcif_pane

0xa050,	// (0x00080236) main_video2_pane_g1_ParamLimits

0xa050,	// (0x00080236) main_video2_pane_g1

0xa062,	// (0x00080248) main_video2_pane_g2_ParamLimits

0xa062,	// (0x00080248) main_video2_pane_g2

0xa072,	// (0x00080258) main_video2_pane_g3_ParamLimits

0xa072,	// (0x00080258) main_video2_pane_g3

0xa082,	// (0x00080268) main_video2_pane_g4_ParamLimits

0xa082,	// (0x00080268) main_video2_pane_g4

0xa092,	// (0x00080278) main_video2_pane_g5_ParamLimits

0xa092,	// (0x00080278) main_video2_pane_g5

0xa0a2,	// (0x00080288) main_video2_pane_g6_ParamLimits

0xa0a2,	// (0x00080288) main_video2_pane_g6

0x0005,

0xf644,	// (0x0008582a) main_video2_pane_g_ParamLimits

0xf644,	// (0x0008582a) main_video2_pane_g

0xa0b4,	// (0x0008029a) main_video2_pane_t1_ParamLimits

0xa0b4,	// (0x0008029a) main_video2_pane_t1

0xa0ce,	// (0x000802b4) main_video2_pane_t2_ParamLimits

0xa0ce,	// (0x000802b4) main_video2_pane_t2

0xa0f4,	// (0x000802da) main_video2_pane_t3_ParamLimits

0xa0f4,	// (0x000802da) main_video2_pane_t3

0x0002,

0xf651,	// (0x00085837) main_video2_pane_t_ParamLimits

0xf651,	// (0x00085837) main_video2_pane_t

0x99bd,	// (0x0007fba3) call_muted_g2

0x0001,

0xf5f3,	// (0x000857d9) call_muted_g

0xeb8c,	// (0x00084d72) main_mup2_pane

0x1f4d,	// (0x00078133) main_mup2_pane_g1_ParamLimits

0x1f4d,	// (0x00078133) main_mup2_pane_g1

0xa11a,	// (0x00080300) main_mup2_pane_g2_ParamLimits

0xa11a,	// (0x00080300) main_mup2_pane_g2

0xa39c,	// (0x00080582) main_mup_pane_g13_cp1

0xa3a4,	// (0x0008058a) mup_volume_pane_cp1

0xa13a,	// (0x00080320) main_mup2_pane_g4_ParamLimits

0xa13a,	// (0x00080320) main_mup2_pane_g4

0xa14f,	// (0x00080335) main_mup2_pane_g5_ParamLimits

0xa14f,	// (0x00080335) main_mup2_pane_g5

0xa164,	// (0x0008034a) main_mup2_pane_g6_ParamLimits

0xa164,	// (0x0008034a) main_mup2_pane_g6

0xa179,	// (0x0008035f) main_mup2_pane_g7_ParamLimits

0xa179,	// (0x0008035f) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0008583e) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0008583e) main_mup2_pane_g

0xa195,	// (0x0008037b) main_mup2_pane_t1_ParamLimits

0xa195,	// (0x0008037b) main_mup2_pane_t1

0xa1ac,	// (0x00080392) main_mup2_pane_t2_ParamLimits

0xa1ac,	// (0x00080392) main_mup2_pane_t2

0xa1c3,	// (0x000803a9) main_mup2_pane_t3_ParamLimits

0xa1c3,	// (0x000803a9) main_mup2_pane_t3

0xa1da,	// (0x000803c0) main_mup2_pane_t4_ParamLimits

0xa1da,	// (0x000803c0) main_mup2_pane_t4

0xa1f4,	// (0x000803da) main_mup2_pane_t5_ParamLimits

0xa1f4,	// (0x000803da) main_mup2_pane_t5

0xa20e,	// (0x000803f4) main_mup2_pane_t6_ParamLimits

0xa20e,	// (0x000803f4) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0008584d) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0008584d) main_mup2_pane_t

0xa246,	// (0x0008042c) mup2_visualizer_pane_ParamLimits

0xa246,	// (0x0008042c) mup2_visualizer_pane

0xa27c,	// (0x00080462) mup_progress_pane_cp_ParamLimits

0xa27c,	// (0x00080462) mup_progress_pane_cp

0xa387,	// (0x0008056d) mup_volume_pane_cp_ParamLimits

0xa387,	// (0x0008056d) mup_volume_pane_cp

0xa293,	// (0x00080479) mup2_visualizer_pane_g1_ParamLimits

0xa293,	// (0x00080479) mup2_visualizer_pane_g1

0x1f1f,	// (0x00078105) mup2_visualizer_pane_g2_ParamLimits

0x1f1f,	// (0x00078105) mup2_visualizer_pane_g2

0xa2a8,	// (0x0008048e) mup2_visualizer_pane_g3_ParamLimits

0xa2a8,	// (0x0008048e) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0008585a) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0008585a) mup2_visualizer_pane_g

0x0d5f,	// (0x00076f45) aid_size_cell_fmradio

0x9ad3,	// (0x0007fcb9) aid_height_parent_landcape

0x0195,	// (0x0007637b) wml_content_pane_cp

0x019d,	// (0x00076383) wml_tabs_pane

0x01a6,	// (0x0007638c) popup_wml_miniature_window

0x01ae,	// (0x00076394) scroll_pane_cp021

0x01c2,	// (0x000763a8) wml_content_pane_comp8

0xeb8c,	// (0x00084d72) bg_popup_sub_pane_cp05

0x1f3d,	// (0x00078123) popup_wml_miniature_window_g1

0x1f45,	// (0x0007812b) wml_miniature_view_pane

0xa2b6,	// (0x0008049c) aid_size_wml_view

0xa2be,	// (0x000804a4) wml_miniature_view_pane_g1

0xa2c7,	// (0x000804ad) wml_miniature_view_pane_g2

0xa2d0,	// (0x000804b6) wml_miniature_view_pane_g3

0xa2d8,	// (0x000804be) wml_miniature_view_pane_g4

0xa2e0,	// (0x000804c6) wml_miniature_view_pane_g5

0xa2e8,	// (0x000804ce) wml_miniature_view_pane_g6

0xa2f0,	// (0x000804d6) wml_miniature_view_pane_g7

0xa2f8,	// (0x000804de) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x00085861) wml_miniature_view_pane_g

0x1f4d,	// (0x00078133) background_graphic_ParamLimits

0x1f4d,	// (0x00078133) background_graphic

0x1f59,	// (0x0007813f) wml_tabs_2_pane

0x1f6e,	// (0x00078154) wml_tabs_3_pane_ParamLimits

0x1f6e,	// (0x00078154) wml_tabs_3_pane

0x1f80,	// (0x00078166) wml_tabs_4_pane_ParamLimits

0x1f80,	// (0x00078166) wml_tabs_4_pane

0x1f96,	// (0x0007817c) wml_tabs_5_pane_ParamLimits

0x1f96,	// (0x0007817c) wml_tabs_5_pane

0x1fb0,	// (0x00078196) wml_tabs_pane_g2_ParamLimits

0x1fb0,	// (0x00078196) wml_tabs_pane_g2

0x1fc4,	// (0x000781aa) wml_tabs_pane_g3_ParamLimits

0x1fc4,	// (0x000781aa) wml_tabs_pane_g3

0xa300,	// (0x000804e6) wml_tabs_2_active_pane_ParamLimits

0xa300,	// (0x000804e6) wml_tabs_2_active_pane

0xa310,	// (0x000804f6) wml_tabs_2_passive_pane_ParamLimits

0xa310,	// (0x000804f6) wml_tabs_2_passive_pane

0xa320,	// (0x00080506) wml_tabs_3_active_pane_cp_ParamLimits

0xa320,	// (0x00080506) wml_tabs_3_active_pane_cp

0xa331,	// (0x00080517) wml_tabs_3_passive_pane_ParamLimits

0xa331,	// (0x00080517) wml_tabs_3_passive_pane

0xa342,	// (0x00080528) wml_tabs_3_passive_pane_cp_ParamLimits

0xa342,	// (0x00080528) wml_tabs_3_passive_pane_cp

0xa353,	// (0x00080539) tabs_4_active_pane

0xa35b,	// (0x00080541) tabs_4_passive_pane

0xa363,	// (0x00080549) tabs_4_passive_pane_cp

0xa36b,	// (0x00080551) tabs_4_passive_pane_cp2

0x9898,	// (0x0007fa7e) aid_height_text

0x90ae,	// (0x0007f294) mup_volume_cont_pane_ParamLimits

0x90ae,	// (0x0007f294) mup_volume_cont_pane

0x6b92,	// (0x0007cd78) aid_size_cell_pinb

0x6b9c,	// (0x0007cd82) aid_size_list_pinb

0xa265,	// (0x0008044b) mup2_volume_cont_pane_ParamLimits

0xa265,	// (0x0008044b) mup2_volume_cont_pane

0xa373,	// (0x00080559) mup2_volume_cont_pane_g1_ParamLimits

0xa373,	// (0x00080559) mup2_volume_cont_pane_g1

0x67cf,	// (0x0007c9b5) aid_size_cell_touch_ParamLimits

0x67cf,	// (0x0007c9b5) aid_size_cell_touch

0x6a78,	// (0x0007cc5e) touch_pane_ParamLimits

0x6a78,	// (0x0007cc5e) touch_pane

0xe76f,	// (0x00084955) main_rss2_pane

0x1fe1,	// (0x000781c7) listscroll_rss2_pane

0x1fea,	// (0x000781d0) rss2_navigation_pane

0x1ff2,	// (0x000781d8) list_rss2_pane

0x082a,	// (0x00076a10) scroll_pane_cp22

0x1ffa,	// (0x000781e0) rss2_navigation_pane_g1

0x2003,	// (0x000781e9) rss2_navigation_pane_g2

0x200b,	// (0x000781f1) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x00085872) rss2_navigation_pane_g

0x2013,	// (0x000781f9) rss2_navigation_pane_t1

0xa3ac,	// (0x00080592) rss2_list_single_pane_ParamLimits

0xa3ac,	// (0x00080592) rss2_list_single_pane

0x2021,	// (0x00078207) rss2_list_single_pane_t2

0x202f,	// (0x00078215) rss2_list_single_pane_t3_ParamLimits

0x202f,	// (0x00078215) rss2_list_single_pane_t3

0x204c,	// (0x00078232) rss2_list_single_pane_t4

0x8a01,	// (0x0007ebe7) smil_status_pane_g1

0xf0af,	// (0x00085295) main_image2_pane_ParamLimits

0xf0af,	// (0x00085295) main_image2_pane

0x9f78,	// (0x0008015e) main_camera2_pane_g9_ParamLimits

0x9f78,	// (0x0008015e) main_camera2_pane_g9

0x9fcc,	// (0x000801b2) main_camera2_pane_t5_ParamLimits

0x9fcc,	// (0x000801b2) main_camera2_pane_t5

0x9fde,	// (0x000801c4) main_camera2_pane_t6_ParamLimits

0x9fde,	// (0x000801c4) main_camera2_pane_t6

0xa3dd,	// (0x000805c3) main_image2_pane_g1_ParamLimits

0xa3dd,	// (0x000805c3) main_image2_pane_g1

0x9638,	// (0x0007f81e) smil2_video_pane_ParamLimits

0x9638,	// (0x0007f81e) smil2_video_pane

0x6803,	// (0x0007c9e9) aid_zoom_text_primary_cp

0x6a21,	// (0x0007cc07) popup_preview_fixed_window

0x00fe,	// (0x000762e4) im_reading_pane_g1

0x9ec2,	// (0x000800a8) cams2_bc_adjust_pane_cp_ParamLimits

0x9ec2,	// (0x000800a8) cams2_bc_adjust_pane_cp

0xa00e,	// (0x000801f4) cams2_bc_adjust_pane_ParamLimits

0xa00e,	// (0x000801f4) cams2_bc_adjust_pane

0xa3e9,	// (0x000805cf) cams2_bc_adjust_pane_g1

0xa3f1,	// (0x000805d7) cams2_slider_pane

0xa3fa,	// (0x000805e0) cams2_slider_pane_g1

0xa403,	// (0x000805e9) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x00085879) cams2_slider_pane_g

0x6ca2,	// (0x0007ce88) calc_display_pane_ParamLimits

0x6cc0,	// (0x0007cea6) calc_paper_pane_ParamLimits

0x6cdc,	// (0x0007cec2) grid_calc_pane_ParamLimits

0x8c02,	// (0x0007ede8) popup_clock_digital_window_t1_ParamLimits

0x0cfc,	// (0x00076ee2) main_image_pane_t1

0x6c88,	// (0x0007ce6e) aid_size_cell_calc_ParamLimits

0x6c88,	// (0x0007ce6e) aid_size_cell_calc

0x9b0d,	// (0x0007fcf3) popup_blid_sat_info2_window_ParamLimits

0x9b0d,	// (0x0007fcf3) popup_blid_sat_info2_window

0x2062,	// (0x00078248) aid_size_cell_blid

0x206a,	// (0x00078250) bg_popup_window_pane_cp07

0x208d,	// (0x00078273) grid_popup_blid_pane

0x2097,	// (0x0007827d) heading_pane_cp05_ParamLimits

0x2097,	// (0x0007827d) heading_pane_cp05

0x2161,	// (0x00078347) cell_popup_blid_pane_ParamLimits

0x2161,	// (0x00078347) cell_popup_blid_pane

0x2185,	// (0x0007836b) cell_popup_blid_pane_g1

0x218d,	// (0x00078373) cell_popup_blid_pane_t1

0xa22b,	// (0x00080411) mup2_indicator_pane_ParamLimits

0xa22b,	// (0x00080411) mup2_indicator_pane

0x0a6b,	// (0x00076c51) mup2_visualizer_osc_pane

0x1f2b,	// (0x00078111) mup2_visualizer_spec_pane_ParamLimits

0x1f2b,	// (0x00078111) mup2_visualizer_spec_pane

0xa41d,	// (0x00080603) mup2_spec_half_pane

0xa426,	// (0x0008060c) mup2_spec_half_pane_cp

0xa430,	// (0x00080616) mup2_spec_bar_pane_ParamLimits

0xa430,	// (0x00080616) mup2_spec_bar_pane

0x1ecc,	// (0x000780b2) mup2_spec_bar_pane_g1

0x1ed6,	// (0x000780bc) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000857ec) mup2_spec_bar_pane_g

0xa44f,	// (0x00080635) mup2_osc_middle_pane

0x1ee8,	// (0x000780ce) mup2_visualizer_osc_pane_g1

0xe799,	// (0x0008497f) popup_number_entry_window_t1_ParamLimits

0xe7ac,	// (0x00084992) popup_number_entry_window_t2_ParamLimits

0xe7be,	// (0x000849a4) popup_number_entry_window_t3_ParamLimits

0x6acf,	// (0x0007ccb5) popup_number_entry_window_t5_ParamLimits

0x6acf,	// (0x0007ccb5) popup_number_entry_window_t5

0xf0c6,	// (0x000852ac) popup_number_entry_window_t_ParamLimits

0xe7d0,	// (0x000849b6) text_title_cp2_ParamLimits

0x932c,	// (0x0007f512) aid_hotspot_pointer_text2_pane

0x93c6,	// (0x0007f5ac) main_viewer_pane_g9_ParamLimits

0x93c6,	// (0x0007f5ac) main_viewer_pane_g9

0x0337,	// (0x0007651d) cale_month_pane_t1_ParamLimits

0x0374,	// (0x0007655a) bg_cale_pane_ParamLimits

0x038c,	// (0x00076572) list_cale_pane_ParamLimits

0x039d,	// (0x00076583) listscroll_cale_day_pane_t1

0x03af,	// (0x00076595) scroll_pane_cp09_ParamLimits

0x90e9,	// (0x0007f2cf) main_mup_eq_pane_t1_ParamLimits

0x90e9,	// (0x0007f2cf) main_mup_eq_pane_t1

0x9103,	// (0x0007f2e9) main_mup_eq_pane_t2_ParamLimits

0x9103,	// (0x0007f2e9) main_mup_eq_pane_t2

0x911d,	// (0x0007f303) main_mup_eq_pane_t3_ParamLimits

0x911d,	// (0x0007f303) main_mup_eq_pane_t3

0x9135,	// (0x0007f31b) main_mup_eq_pane_t4_ParamLimits

0x9135,	// (0x0007f31b) main_mup_eq_pane_t4

0x914d,	// (0x0007f333) main_mup_eq_pane_t5_ParamLimits

0x914d,	// (0x0007f333) main_mup_eq_pane_t5

0x9165,	// (0x0007f34b) main_mup_eq_pane_t6_ParamLimits

0x9165,	// (0x0007f34b) main_mup_eq_pane_t6

0x9179,	// (0x0007f35f) main_mup_eq_pane_t7_ParamLimits

0x9179,	// (0x0007f35f) main_mup_eq_pane_t7

0x918d,	// (0x0007f373) main_mup_eq_pane_t8_ParamLimits

0x918d,	// (0x0007f373) main_mup_eq_pane_t8

0x91a3,	// (0x0007f389) main_mup_eq_pane_t9_ParamLimits

0x91a3,	// (0x0007f389) main_mup_eq_pane_t9

0x91bb,	// (0x0007f3a1) main_mup_eq_pane_t10_ParamLimits

0x91bb,	// (0x0007f3a1) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0008563b) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0008563b) main_mup_eq_pane_t

0x9278,	// (0x0007f45e) mup_equalizer_pane_cp5_ParamLimits

0x928e,	// (0x0007f474) mup_equalizer_pane_cp6_ParamLimits

0x92a6,	// (0x0007f48c) mup_equalizer_pane_cp7_ParamLimits

0xe76f,	// (0x00084955) main_gallery_pane

0x1ef1,	// (0x000780d7) smil2_volume_pane

0x1f0c,	// (0x000780f2) smil_status_volume_pane_g1_ParamLimits

0x1ef9,	// (0x000780df) smil_status_volume_pane_g2_ParamLimits

0x9d35,	// (0x0007ff1b) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x000857f1) smil_status_volume_pane_g_ParamLimits

0x206a,	// (0x00078250) bg_popup_window_pane_cp07_ParamLimits

0x2078,	// (0x0007825e) blid_firmament_pane

0xa458,	// (0x0008063e) aid_size_cell_gallery_ParamLimits

0xa458,	// (0x0008063e) aid_size_cell_gallery

0xa466,	// (0x0008064c) grid_gallery_pane_ParamLimits

0xa466,	// (0x0008064c) grid_gallery_pane

0xa476,	// (0x0008065c) cell_gallery_pane_ParamLimits

0xa476,	// (0x0008065c) cell_gallery_pane

0x219b,	// (0x00078381) bg_cell_gallery_focus_pane_ParamLimits

0x219b,	// (0x00078381) bg_cell_gallery_focus_pane

0x21ad,	// (0x00078393) cell_gallery_pane_g1_ParamLimits

0x21ad,	// (0x00078393) cell_gallery_pane_g1

0xa4c4,	// (0x000806aa) cell_gallery_pane_g2_ParamLimits

0xa4c4,	// (0x000806aa) cell_gallery_pane_g2

0xa4d1,	// (0x000806b7) cell_gallery_pane_g3_ParamLimits

0xa4d1,	// (0x000806b7) cell_gallery_pane_g3

0x21b9,	// (0x0007839f) cell_gallery_pane_g4_ParamLimits

0x21b9,	// (0x0007839f) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0008589f) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0008589f) cell_gallery_pane_g

0x21c5,	// (0x000783ab) bg_cell_gallery_focus_pane_g1

0x21cd,	// (0x000783b3) bg_cell_gallery_focus_pane_g2

0x21d5,	// (0x000783bb) bg_cell_gallery_focus_pane_g3

0x21dd,	// (0x000783c3) bg_cell_gallery_focus_pane_g4

0x21e5,	// (0x000783cb) bg_cell_gallery_focus_pane_g5

0x21ed,	// (0x000783d3) bg_cell_gallery_focus_pane_g6

0x21f5,	// (0x000783db) bg_cell_gallery_focus_pane_g7

0x21fd,	// (0x000783e3) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x000858a8) bg_cell_gallery_focus_pane_g

0x2205,	// (0x000783eb) aid_firma_cardinal

0x2219,	// (0x000783ff) blid_firmament_pane_t1

0x2230,	// (0x00078416) blid_firmament_pane_t2

0x2247,	// (0x0007842d) blid_firmament_pane_t3

0x225e,	// (0x00078444) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x000858b9) blid_firmament_pane_t

0x2275,	// (0x0007845b) blid_sat_info_pane

0x2285,	// (0x0007846b) blid_sat_info_pane_g1

0x2285,	// (0x0007846b) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x000858c2) blid_sat_info_pane_g

0x228f,	// (0x00078475) blid_sat_info_pane_t1

0x229d,	// (0x00078483) smil2_volume_content_pane

0x22a6,	// (0x0007848c) smil2_volume_pane_g1

0x22ae,	// (0x00078494) smil2_volume_content_pane_g1

0x22b7,	// (0x0007849d) smil2_volume_content_pane_g2

0x22c0,	// (0x000784a6) smil2_volume_content_pane_g3

0x22c9,	// (0x000784af) smil2_volume_content_pane_g4

0x22d2,	// (0x000784b8) smil2_volume_content_pane_g5

0x22db,	// (0x000784c1) smil2_volume_content_pane_g6

0x22e4,	// (0x000784ca) smil2_volume_content_pane_g7

0x22ed,	// (0x000784d3) smil2_volume_content_pane_g8

0x22f6,	// (0x000784dc) smil2_volume_content_pane_g9

0x22ff,	// (0x000784e5) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x000858c7) smil2_volume_content_pane_g

0x72b7,	// (0x0007d49d) cale_week_day_heading_pane_t1_ParamLimits

0x72f2,	// (0x0007d4d8) cale_week_day_heading_pane_t2_ParamLimits

0x732d,	// (0x0007d513) cale_week_day_heading_pane_t3_ParamLimits

0x7368,	// (0x0007d54e) cale_week_day_heading_pane_t4_ParamLimits

0x73a3,	// (0x0007d589) cale_week_day_heading_pane_t5_ParamLimits

0x73de,	// (0x0007d5c4) cale_week_day_heading_pane_t6_ParamLimits

0x7419,	// (0x0007d5ff) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x000853b3) cale_week_day_heading_pane_t_ParamLimits

0xf02e,	// (0x00085214) bg_cale_side_pane_ParamLimits

0x7454,	// (0x0007d63a) cale_week_time_pane_t1_ParamLimits

0x746e,	// (0x0007d654) cale_week_time_pane_t2_ParamLimits

0x7488,	// (0x0007d66e) cale_week_time_pane_t3_ParamLimits

0x74a2,	// (0x0007d688) cale_week_time_pane_t4_ParamLimits

0x74bc,	// (0x0007d6a2) cale_week_time_pane_t5_ParamLimits

0x74d6,	// (0x0007d6bc) cale_week_time_pane_t6_ParamLimits

0x74f6,	// (0x0007d6dc) cale_week_time_pane_t7_ParamLimits

0x7518,	// (0x0007d6fe) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x000853c2) cale_week_time_pane_t_ParamLimits

0x753c,	// (0x0007d722) cell_cale_week_pane_g2_ParamLimits

0xf02e,	// (0x00085214) bg_cale_side_pane_cp01_ParamLimits

0x8802,	// (0x0007e9e8) cale_month_week_pane_t1_ParamLimits

0x881b,	// (0x0007ea01) cale_month_week_pane_t2_ParamLimits

0x8834,	// (0x0007ea1a) cale_month_week_pane_t3_ParamLimits

0x884d,	// (0x0007ea33) cale_month_week_pane_t4_ParamLimits

0x8866,	// (0x0007ea4c) cale_month_week_pane_t5_ParamLimits

0x8887,	// (0x0007ea6d) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0008549b) cale_month_week_pane_t_ParamLimits

0x89ca,	// (0x0007ebb0) cell_cale_month_pane_g1_ParamLimits

0xe76f,	// (0x00084955) main_cale_event_viewer_pane

0xe76f,	// (0x00084955) listscroll_cale_event_viewer_pane

0x2308,	// (0x000784ee) list_cale_ev_pane

0x2310,	// (0x000784f6) scroll_pane_cp023

0x231c,	// (0x00078502) field_cale_ev_pane_ParamLimits

0x231c,	// (0x00078502) field_cale_ev_pane

0x233a,	// (0x00078520) field_cale_ev_content_pane_ParamLimits

0x233a,	// (0x00078520) field_cale_ev_content_pane

0x2346,	// (0x0007852c) field_cale_ev_pane_g1_ParamLimits

0x2346,	// (0x0007852c) field_cale_ev_pane_g1

0x2352,	// (0x00078538) field_cale_ev_pane_g2_ParamLimits

0x2352,	// (0x00078538) field_cale_ev_pane_g2

0x236a,	// (0x00078550) field_cale_ev_pane_g3_ParamLimits

0x236a,	// (0x00078550) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x000858dc) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x000858dc) field_cale_ev_pane_g

0x2382,	// (0x00078568) field_cale_ev_pane_t1_ParamLimits

0x2382,	// (0x00078568) field_cale_ev_pane_t1

0x2399,	// (0x0007857f) field_cale_ev_content_pane_t1_ParamLimits

0x2399,	// (0x0007857f) field_cale_ev_content_pane_t1

0x0be2,	// (0x00076dc8) bg_button_pane_cp01

0x7044,	// (0x0007d22a) listscroll_cale_week_pane_ParamLimits

0xefd8,	// (0x000851be) popup_toolbar_window_cp01

0xefff,	// (0x000851e5) listscroll_cale_week_pane_t1_ParamLimits

0x7044,	// (0x0007d22a) listscroll_cale_day_pane_ParamLimits

0xefd8,	// (0x000851be) popup_toolbar_window_cp02

0x039d,	// (0x00076583) listscroll_cale_day_pane_t1_ParamLimits

0x7044,	// (0x0007d22a) main_cale_month_pane_ParamLimits

0x9c14,	// (0x0007fdfa) popup_toolbar_window_cp03_ParamLimits

0x9c14,	// (0x0007fdfa) popup_toolbar_window_cp03

0x954e,	// (0x0007f734) main_image_pane_g2_ParamLimits

0x954e,	// (0x0007f734) main_image_pane_g2

0x955a,	// (0x0007f740) main_image_pane_g3_ParamLimits

0x955a,	// (0x0007f740) main_image_pane_g3

0x0002,

0xf4e7,	// (0x000856cd) main_image_pane_g_ParamLimits

0xf4e7,	// (0x000856cd) main_image_pane_g

0x0cfc,	// (0x00076ee2) main_image_pane_t1_ParamLimits

0x9566,	// (0x0007f74c) main_image_pane_t2_ParamLimits

0x9566,	// (0x0007f74c) main_image_pane_t2

0x9578,	// (0x0007f75e) main_image_pane_t3_ParamLimits

0x9578,	// (0x0007f75e) main_image_pane_t3

0x958a,	// (0x0007f770) main_image_pane_t4_ParamLimits

0x958a,	// (0x0007f770) main_image_pane_t4

0x0003,

0xf4ee,	// (0x000856d4) main_image_pane_t_ParamLimits

0xf4ee,	// (0x000856d4) main_image_pane_t

0x959c,	// (0x0007f782) popup_image_details_window_cp01

0x95a6,	// (0x0007f78c) popup_toobar_trans_pane_cp01_ParamLimits

0x95a6,	// (0x0007f78c) popup_toobar_trans_pane_cp01

0x9b64,	// (0x0007fd4a) popup_image_details_window_ParamLimits

0x9b64,	// (0x0007fd4a) popup_image_details_window

0x9b72,	// (0x0007fd58) popup_image_focus_window

0x9eb4,	// (0x0008009a) camera2_autofocus_pane_ParamLimits

0x9eb4,	// (0x0008009a) camera2_autofocus_pane

0xe76f,	// (0x00084955) bg_popup_sub_pane_cp06

0x23b7,	// (0x0007859d) popup_image_focus_window_g1

0x23bf,	// (0x000785a5) popup_image_focus_window_g2

0x23c7,	// (0x000785ad) popup_image_focus_window_g3

0x23cf,	// (0x000785b5) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x000858e3) popup_image_focus_window_g

0x23d7,	// (0x000785bd) popup_image_focus_window_t1

0x23e5,	// (0x000785cb) popup_image_focus_window_t2

0x23f5,	// (0x000785db) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x000858ec) popup_image_focus_window_t

0x2403,	// (0x000785e9) camera2_autofocus_pane_g1

0xf0af,	// (0x00085295) bg_tb_trans_pane_cp01

0x2411,	// (0x000785f7) popup_image_details_window_g1

0x2424,	// (0x0007860a) popup_image_details_window_g2

0x0002,

0xf718,	// (0x000858fe) popup_image_details_window_g

0x244d,	// (0x00078633) popup_image_details_window_t1

0x245f,	// (0x00078645) popup_image_details_window_t2

0x2478,	// (0x0007865e) popup_image_details_window_t3

0x248c,	// (0x00078672) popup_image_details_window_t4

0x24a7,	// (0x0007868d) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x00085905) popup_image_details_window_t

0xeeaf,	// (0x00085095) bg_calc_paper_pane_ParamLimits

0xe76f,	// (0x00084955) grid_highlight_pane_cp013

0x6dd9,	// (0x0007cfbf) list_calc_pane_ParamLimits

0x6deb,	// (0x0007cfd1) scroll_pane_cp024

0xeec3,	// (0x000850a9) bg_calc_display_pane_ParamLimits

0x6df3,	// (0x0007cfd9) calc_display_pane_t1_ParamLimits

0x6e08,	// (0x0007cfee) calc_display_pane_t2_ParamLimits

0x6e1d,	// (0x0007d003) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x00085333) calc_display_pane_t_ParamLimits

0x6ef9,	// (0x0007d0df) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x00085350) cell_calc_pane_g

0x6f02,	// (0x0007d0e8) cell_calc_pane_t1

0xef22,	// (0x00085108) grid_highlight_pane_cp02_ParamLimits

0xef38,	// (0x0008511e) toolbar_button_pane_cp01_ParamLimits

0xef38,	// (0x0008511e) toolbar_button_pane_cp01

0x0d41,	// (0x00076f27) temp_image_control_pane_ParamLimits

0x0d41,	// (0x00076f27) temp_image_control_pane

0xf0af,	// (0x00085295) main_mp3_pane

0x24c1,	// (0x000786a7) temp_image_control_pane_g1_ParamLimits

0x24c1,	// (0x000786a7) temp_image_control_pane_g1

0x24cf,	// (0x000786b5) temp_image_control_pane_g2_ParamLimits

0x24cf,	// (0x000786b5) temp_image_control_pane_g2

0x24e1,	// (0x000786c7) temp_image_control_pane_g3_ParamLimits

0x24e1,	// (0x000786c7) temp_image_control_pane_g3

0xa50e,	// (0x000806f4) temp_image_control_pane_g4_ParamLimits

0xa50e,	// (0x000806f4) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x00085910) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x00085910) temp_image_control_pane_g

0x24c1,	// (0x000786a7) main_mp3_pane_g1

0xa51f,	// (0x00080705) main_mp3_pane_g2

0x0007,

0xf733,	// (0x00085919) main_mp3_pane_g

0x2524,	// (0x0007870a) main_mp3_pane_t1

0xf089,	// (0x0008526f) main_camera_pane_g8_ParamLimits

0xf089,	// (0x0008526f) main_camera_pane_g8

0x77ed,	// (0x0007d9d3) main_video_pane_g7_ParamLimits

0x77ed,	// (0x0007d9d3) main_video_pane_g7

0x9ffc,	// (0x000801e2) main_camera2_pane_t7_ParamLimits

0x9ffc,	// (0x000801e2) main_camera2_pane_t7

0x0155,	// (0x0007633b) scroll_pane_cp025_ParamLimits

0x0155,	// (0x0007633b) scroll_pane_cp025

0x0169,	// (0x0007634f) scroll_pane_cp026_ParamLimits

0x0169,	// (0x0007634f) scroll_pane_cp026

0x0178,	// (0x0007635e) wml_content_pane_ParamLimits

0xe76f,	// (0x00084955) main_touch_calib_pane

0xa5c3,	// (0x000807a9) main_touch_calib_pane_g1

0xa5cf,	// (0x000807b5) main_touch_calib_pane_g2

0xa5db,	// (0x000807c1) main_touch_calib_pane_g3

0xa5e7,	// (0x000807cd) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x00085937) main_touch_calib_pane_g

0xa5f3,	// (0x000807d9) main_touch_calib_pane_t1

0xa60c,	// (0x000807f2) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x00085940) main_touch_calib_pane_t

0x0906,	// (0x00076aec) mup_progress_pane_cp02

0x093b,	// (0x00076b21) navi_pane_g1

0x09f6,	// (0x00076bdc) navi_pane_mp_t3

0xf0af,	// (0x00085295) main_mp3_pane_ParamLimits

0x9c51,	// (0x0007fe37) navi_pane_ParamLimits

0x24c1,	// (0x000786a7) main_mp3_pane_g1_ParamLimits

0xa51f,	// (0x00080705) main_mp3_pane_g2_ParamLimits

0xa52b,	// (0x00080711) main_mp3_pane_g3_ParamLimits

0xa52b,	// (0x00080711) main_mp3_pane_g3

0xa537,	// (0x0008071d) main_mp3_pane_g4_ParamLimits

0xa537,	// (0x0008071d) main_mp3_pane_g4

0x24f1,	// (0x000786d7) main_mp3_pane_g5_ParamLimits

0x24f1,	// (0x000786d7) main_mp3_pane_g5

0x24ff,	// (0x000786e5) main_mp3_pane_g6_ParamLimits

0x24ff,	// (0x000786e5) main_mp3_pane_g6

0x250c,	// (0x000786f2) main_mp3_pane_g7_ParamLimits

0x250c,	// (0x000786f2) main_mp3_pane_g7

0x2518,	// (0x000786fe) main_mp3_pane_g8_ParamLimits

0x2518,	// (0x000786fe) main_mp3_pane_g8

0xf733,	// (0x00085919) main_mp3_pane_g_ParamLimits

0xa543,	// (0x00080729) main_mp3_pane_t2

0xa553,	// (0x00080739) main_mp3_pane_t3

0x2532,	// (0x00078718) main_mp3_pane_t4

0x2540,	// (0x00078726) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0008592a) main_mp3_pane_t

0x254e,	// (0x00078734) mup_progress_pane_cp01

0x6803,	// (0x0007c9e9) aid_zoom_text_secondary2

0x2308,	// (0x000784ee) list_cale_ev2_pane

0x2310,	// (0x000784f6) scroll_pane_cp023_ParamLimits

0xa667,	// (0x0008084d) field_cale_ev2_pane_ParamLimits

0xa667,	// (0x0008084d) field_cale_ev2_pane

0xa690,	// (0x00080876) field_cale_ev2_pane_g1_ParamLimits

0xa690,	// (0x00080876) field_cale_ev2_pane_g1

0xa69c,	// (0x00080882) field_cale_ev2_pane_g2_ParamLimits

0xa69c,	// (0x00080882) field_cale_ev2_pane_g2

0xa6b4,	// (0x0008089a) field_cale_ev2_pane_g3_ParamLimits

0xa6b4,	// (0x0008089a) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0008594b) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0008594b) field_cale_ev2_pane_g

0x5828,	// (0x0007ba0e) field_cale_ev2_pane_t1_ParamLimits

0x5828,	// (0x0007ba0e) field_cale_ev2_pane_t1

0x583f,	// (0x0007ba25) field_cale_ev2_pane_t2_ParamLimits

0x583f,	// (0x0007ba25) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x00085954) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x00085954) field_cale_ev2_pane_t

0x942e,	// (0x0007f614) main_postcard_pane_g5_ParamLimits

0x942e,	// (0x0007f614) main_postcard_pane_g5

0x943c,	// (0x0007f622) main_postcard_pane_g6_ParamLimits

0x943c,	// (0x0007f622) main_postcard_pane_g6

0x7637,	// (0x0007d81d) camera2_autofocus_pane_cp_ParamLimits

0x7637,	// (0x0007d81d) camera2_autofocus_pane_cp

0xf0af,	// (0x00085295) main_mup3_pane

0xa6d8,	// (0x000808be) main_mup3_pane_g1_ParamLimits

0xa6d8,	// (0x000808be) main_mup3_pane_g1

0xa6f9,	// (0x000808df) main_mup3_pane_g2_ParamLimits

0xa6f9,	// (0x000808df) main_mup3_pane_g2

0xa771,	// (0x00080957) main_mup3_pane_g3_ParamLimits

0xa771,	// (0x00080957) main_mup3_pane_g3

0xa7b4,	// (0x0008099a) main_mup3_pane_g4_ParamLimits

0xa7b4,	// (0x0008099a) main_mup3_pane_g4

0xa7f7,	// (0x000809dd) main_mup3_pane_g5_ParamLimits

0xa7f7,	// (0x000809dd) main_mup3_pane_g5

0xa83a,	// (0x00080a20) main_mup3_pane_g6_ParamLimits

0xa83a,	// (0x00080a20) main_mup3_pane_g6

0x2576,	// (0x0007875c) main_mup3_pane_g7_ParamLimits

0x2576,	// (0x0007875c) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x00085964) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x00085964) main_mup3_pane_g

0xa8b0,	// (0x00080a96) main_mup3_pane_t1_ParamLimits

0xa8b0,	// (0x00080a96) main_mup3_pane_t1

0xa91f,	// (0x00080b05) main_mup3_pane_t2_ParamLimits

0xa91f,	// (0x00080b05) main_mup3_pane_t2

0xa9e8,	// (0x00080bce) main_mup3_pane_t4_ParamLimits

0xa9e8,	// (0x00080bce) main_mup3_pane_t4

0xaa36,	// (0x00080c1c) main_mup3_pane_t5_ParamLimits

0xaa36,	// (0x00080c1c) main_mup3_pane_t5

0xaae6,	// (0x00080ccc) main_mup3_pane_t6_ParamLimits

0xaae6,	// (0x00080ccc) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x00085975) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x00085975) main_mup3_pane_t

0xab92,	// (0x00080d78) mup3_progress_pane_ParamLimits

0xab92,	// (0x00080d78) mup3_progress_pane

0xac10,	// (0x00080df6) popup_mup3_control_window_ParamLimits

0xac10,	// (0x00080df6) popup_mup3_control_window

0x2584,	// (0x0007876a) popup_mup3_text_window

0xac29,	// (0x00080e0f) mup3_progress_pane_t1

0xac48,	// (0x00080e2e) mup3_progress_pane_t2

0x258c,	// (0x00078772) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x00085982) mup3_progress_pane_t

0x25a9,	// (0x0007878f) mup_progress_pane_cp03

0xe76f,	// (0x00084955) bg_tb_trans_pane_cp04

0xac67,	// (0x00080e4d) mup3_volume_pane

0xac6f,	// (0x00080e55) popup_mup3_control_window_g1

0xac78,	// (0x00080e5e) mup3_volume_pane_g1

0xac81,	// (0x00080e67) mup3_volume_pane_g2

0xac8a,	// (0x00080e70) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x00085989) mup3_volume_pane_g

0xe76f,	// (0x00084955) bg_tb_trans_pane_cp03

0x25b9,	// (0x0007879f) popup_mup3_text_window_g1

0x25c1,	// (0x000787a7) popup_mup3_text_window_t1

0xef0b,	// (0x000850f1) list_calc_item_pane_g1_ParamLimits

0x1fd8,	// (0x000781be) mup_volume_pane_cp_g1

0xa625,	// (0x0008080b) main_touch_calib_pane_t3

0xa63b,	// (0x00080821) main_touch_calib_pane_t4

0xa651,	// (0x00080837) main_touch_calib_pane_t5

0x67bb,	// (0x0007c9a1) aid_cell_size_toolbar2

0x67c3,	// (0x0007c9a9) aid_popup3_width_pane

0x552e,	// (0x0007b714) aid_zoom_text_msg_primary

0x7604,	// (0x0007d7ea) vorec_t7

0xeecf,	// (0x000850b5) bg_calc_paper_pane_g1_ParamLimits

0xeedb,	// (0x000850c1) bg_calc_paper_pane_g2_ParamLimits

0xeee7,	// (0x000850cd) bg_calc_paper_pane_g3_ParamLimits

0xeef3,	// (0x000850d9) bg_calc_paper_pane_g4_ParamLimits

0xeeff,	// (0x000850e5) bg_calc_paper_pane_g5_ParamLimits

0x6e5c,	// (0x0007d042) bg_calc_paper_pane_g6_ParamLimits

0x6e6d,	// (0x0007d053) bg_calc_paper_pane_g7_ParamLimits

0x6e7e,	// (0x0007d064) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0008533a) bg_calc_paper_pane_g_ParamLimits

0x6e8f,	// (0x0007d075) calc_bg_paper_pane_g9_ParamLimits

0x771e,	// (0x0007d904) image_qvga_pane_ParamLimits

0x771e,	// (0x0007d904) image_qvga_pane

0xedfe,	// (0x00084fe4) bg_popup_sub_pane_cp04_ParamLimits

0x0c78,	// (0x00076e5e) popup_mup_playback_window_g1_ParamLimits

0x0c84,	// (0x00076e6a) popup_mup_playback_window_t1_ParamLimits

0x0c99,	// (0x00076e7f) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x000856c8) popup_mup_playback_window_t_ParamLimits

0xa12b,	// (0x00080311) main_mup2_pane_g3_ParamLimits

0xa12b,	// (0x00080311) main_mup2_pane_g3

0x79ee,	// (0x0007dbd4) popup_toolbar_window_cp04

0x107b,	// (0x00077261) popup_call2_audio_second_window_g3_ParamLimits

0x107b,	// (0x00077261) popup_call2_audio_second_window_g3

0x1485,	// (0x0007766b) popup_call2_audio_first_window_g4_ParamLimits

0x1485,	// (0x0007766b) popup_call2_audio_first_window_g4

0x1b04,	// (0x00077cea) popup_call2_audio_in_window_g4_ParamLimits

0x1b04,	// (0x00077cea) popup_call2_audio_in_window_g4

0x9541,	// (0x0007f727) aid_area_sk_bg_cut_ParamLimits

0x9541,	// (0x0007f727) aid_area_sk_bg_cut

0x0cae,	// (0x00076e94) aid_area_sk_bg_cut_2_ParamLimits

0x0cae,	// (0x00076e94) aid_area_sk_bg_cut_2

0xa4b4,	// (0x0008069a) aid_placing_details_win

0xa4bc,	// (0x000806a2) aid_placing_details_win_2

0x2403,	// (0x000785e9) camera2_autofocus_pane_g1_ParamLimits

0x6a12,	// (0x0007cbf8) popup_fixed_preview_cale_window_ParamLimits

0x6a12,	// (0x0007cbf8) popup_fixed_preview_cale_window

0x0a9c,	// (0x00076c82) navi_slider_pane_g3

0x0a93,	// (0x00076c79) navi_slider_pane_g4

0x0a7c,	// (0x00076c62) navi_slider_pane_g5

0x0a9c,	// (0x00076c82) navi_slider_pane_g6

0x8e7d,	// (0x0007f063) navi_slider_pane_g7

0x0baf,	// (0x00076d95) mup_scale_pane_g3

0x0bb8,	// (0x00076d9e) mup_scale_pane_g4

0x0bc1,	// (0x00076da7) mup_scale_pane_g5

0x92be,	// (0x0007f4a4) mup_scale_pane_g6

0x92c7,	// (0x0007f4ad) mup_scale_pane_g7

0x0a9c,	// (0x00076c82) cams2_slider_pane_g3

0x205a,	// (0x00078240) cams2_slider_pane_g4

0xa40c,	// (0x000805f2) cams2_slider_pane_g5

0x0a9c,	// (0x00076c82) cams2_slider_pane_g6

0xa414,	// (0x000805fa) cams2_slider_pane_g7

0x2285,	// (0x0007846b) camera2_autofocus_pane_cp_g1

0x1e65,	// (0x0007804b) bg_popup_preview_window_pane_cp02_ParamLimits

0x1e65,	// (0x0007804b) bg_popup_preview_window_pane_cp02

0x25cf,	// (0x000787b5) list_fp_cale_pane_ParamLimits

0x25cf,	// (0x000787b5) list_fp_cale_pane

0x25db,	// (0x000787c1) popup_fixed_preview_cale_window_t1_ParamLimits

0x25db,	// (0x000787c1) popup_fixed_preview_cale_window_t1

0xac93,	// (0x00080e79) popup_fixed_preview_cale_window_t2_ParamLimits

0xac93,	// (0x00080e79) popup_fixed_preview_cale_window_t2

0xaca8,	// (0x00080e8e) popup_fixed_preview_cale_window_t3_ParamLimits

0xaca8,	// (0x00080e8e) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x00085990) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x00085990) popup_fixed_preview_cale_window_t

0xacbd,	// (0x00080ea3) list_single_fp_cale_pane_ParamLimits

0xacbd,	// (0x00080ea3) list_single_fp_cale_pane

0x25f9,	// (0x000787df) list_single_fp_cale_pane_g1_ParamLimits

0x25f9,	// (0x000787df) list_single_fp_cale_pane_g1

0x2605,	// (0x000787eb) list_single_fp_cale_pane_g2_ParamLimits

0x2605,	// (0x000787eb) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x00085997) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x00085997) list_single_fp_cale_pane_g

0x261e,	// (0x00078804) list_single_fp_cale_pane_t1_ParamLimits

0x261e,	// (0x00078804) list_single_fp_cale_pane_t1

0x2630,	// (0x00078816) list_single_fp_cale_pane_t2_ParamLimits

0x2630,	// (0x00078816) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0008599e) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0008599e) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe76f,	// (0x00084955) main_dialer_pane

0xacd0,	// (0x00080eb6) aid_cell_size_keypad

0xacda,	// (0x00080ec0) dialer_ne_pane

0xace4,	// (0x00080eca) grid_dialer_command_1_pane

0xacec,	// (0x00080ed2) grid_dialer_command_2_pane

0xacf4,	// (0x00080eda) grid_dialer_keypad_pane

0xad06,	// (0x00080eec) bg_popup_call_pane_cp06_ParamLimits

0xad06,	// (0x00080eec) bg_popup_call_pane_cp06

0xad12,	// (0x00080ef8) dialer_ne_clear_pane_ParamLimits

0xad12,	// (0x00080ef8) dialer_ne_clear_pane

0x2663,	// (0x00078849) dialer_ne_pane_g1

0x266b,	// (0x00078851) dialer_ne_pane_t1_ParamLimits

0x266b,	// (0x00078851) dialer_ne_pane_t1

0xad1e,	// (0x00080f04) dialer_ne_pane_t2_ParamLimits

0xad1e,	// (0x00080f04) dialer_ne_pane_t2

0xad3b,	// (0x00080f21) dialer_ne_pane_t3_ParamLimits

0xad3b,	// (0x00080f21) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x000859a3) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x000859a3) dialer_ne_pane_t

0xad5f,	// (0x00080f45) dialer_ne_pane_t3_copy1_ParamLimits

0xad5f,	// (0x00080f45) dialer_ne_pane_t3_copy1

0xad83,	// (0x00080f69) cell_dialer_keypad_pane_ParamLimits

0xad83,	// (0x00080f69) cell_dialer_keypad_pane

0xad9a,	// (0x00080f80) cell_dialer_command_1_pane_ParamLimits

0xad9a,	// (0x00080f80) cell_dialer_command_1_pane

0xadb0,	// (0x00080f96) cell_dialer_command_2_pane_ParamLimits

0xadb0,	// (0x00080f96) cell_dialer_command_2_pane

0x267d,	// (0x00078863) bg_button_pane_cp02_ParamLimits

0x267d,	// (0x00078863) bg_button_pane_cp02

0xadbf,	// (0x00080fa5) cell_dialer_keypad_pane_g1_ParamLimits

0xadbf,	// (0x00080fa5) cell_dialer_keypad_pane_g1

0x267d,	// (0x00078863) bg_button_pane_cp03_ParamLimits

0x267d,	// (0x00078863) bg_button_pane_cp03

0xadd4,	// (0x00080fba) cell_dialer_command_1_pane_g1_ParamLimits

0xadd4,	// (0x00080fba) cell_dialer_command_1_pane_g1

0x2689,	// (0x0007886f) bg_button_pane_cp04

0xade8,	// (0x00080fce) cell_dialer_command_2_pane_g1

0x0a6b,	// (0x00076c51) bg_button_pane_cp06

0x2691,	// (0x00078877) dialer_ne_clear_pane_g1

0x0947,	// (0x00076b2d) navi_pane_g2

0x0975,	// (0x00076b5b) navi_pane_g3

0x0002,

0xf3e5,	// (0x000855cb) navi_pane_g

0x0a04,	// (0x00076bea) navi_pane_mv_g2

0x0a2b,	// (0x00076c11) navi_pane_mv_g5

0x8e48,	// (0x0007f02e) navi_pane_mv_t1

0xeec3,	// (0x000850a9) main_clock2_pane

0xae26,	// (0x0008100c) main_clock2_list_pane_ParamLimits

0xae26,	// (0x0008100c) main_clock2_list_pane

0xae4e,	// (0x00081034) main_clock2_pane_t1_ParamLimits

0xae4e,	// (0x00081034) main_clock2_pane_t1

0xae70,	// (0x00081056) main_clock2_pane_t2_ParamLimits

0xae70,	// (0x00081056) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x000859af) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x000859af) main_clock2_pane_t

0xaecb,	// (0x000810b1) popup_clock_analogue_window_cp03_ParamLimits

0xaecb,	// (0x000810b1) popup_clock_analogue_window_cp03

0xaee9,	// (0x000810cf) popup_clock_digital_window_cp02_ParamLimits

0xaee9,	// (0x000810cf) popup_clock_digital_window_cp02

0xaf56,	// (0x0008113c) main_clock2_list_single_pane_ParamLimits

0xaf56,	// (0x0008113c) main_clock2_list_single_pane

0x0a6b,	// (0x00076c51) list_highlight_pane_cp05

0x26cf,	// (0x000788b5) main_clock2_list_single_pane_t1

0x79ee,	// (0x0007dbd4) popup_toolbar_window_cp04_ParamLimits

0xa4de,	// (0x000806c4) camera2_autofocus_pane_g2_ParamLimits

0xa4de,	// (0x000806c4) camera2_autofocus_pane_g2

0xa4ea,	// (0x000806d0) camera2_autofocus_pane_g3_ParamLimits

0xa4ea,	// (0x000806d0) camera2_autofocus_pane_g3

0xa4f6,	// (0x000806dc) camera2_autofocus_pane_g4_ParamLimits

0xa4f6,	// (0x000806dc) camera2_autofocus_pane_g4

0xa502,	// (0x000806e8) camera2_autofocus_pane_g5_ParamLimits

0xa502,	// (0x000806e8) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x000858f3) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x000858f3) camera2_autofocus_pane_g

0x2556,	// (0x0007873c) camera2_autofocus_pane_cp_g2

0x255e,	// (0x00078744) camera2_autofocus_pane_cp_g3

0x2566,	// (0x0007874c) camera2_autofocus_pane_cp_g4

0x256e,	// (0x00078754) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x00085959) camera2_autofocus_pane_cp_g

0xacfe,	// (0x00080ee4) popup_dialer_spcha_window

0xe76f,	// (0x00084955) bg_popup_sub_pane_cp07

0x26dd,	// (0x000788c3) list_spcha_pane

0x26e5,	// (0x000788cb) list_single_spcha_pane_ParamLimits

0x26e5,	// (0x000788cb) list_single_spcha_pane

0xe76f,	// (0x00084955) list_highlight_pane_cp06

0x26f6,	// (0x000788dc) list_single_spcha_pane_t1

0x18ae,	// (0x00077a94) popup_call2_audio_out_window_g4_ParamLimits

0x18ae,	// (0x00077a94) popup_call2_audio_out_window_g4

0xe76f,	// (0x00084955) main_imed2_pane

0x9b7a,	// (0x0007fd60) popup_imed_adjust2_window

0x9b8d,	// (0x0007fd73) popup_imed_trans_window_ParamLimits

0x9b8d,	// (0x0007fd73) popup_imed_trans_window

0x20c3,	// (0x000782a9) popup_blid_sat_info2_window_t1

0x20d1,	// (0x000782b7) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x00085888) popup_blid_sat_info2_window_t

0xb000,	// (0x000811e6) aid_size_cell_colour_35

0xb01a,	// (0x00081200) aid_size_cell_colour_112

0xb031,	// (0x00081217) aid_size_cell_effect

0xf0af,	// (0x00085295) bg_tb_trans_pane_cp02

0x054d,	// (0x00076733) heading_imed_pane

0xb04b,	// (0x00081231) listscroll_imed_pane

0x2704,	// (0x000788ea) heading_imed_pane_g1

0x270c,	// (0x000788f2) heading_imed_pane_t1

0x271a,	// (0x00078900) grid_imed_colour_35_pane_ParamLimits

0x271a,	// (0x00078900) grid_imed_colour_35_pane

0xb057,	// (0x0008123d) grid_imed_effect_pane

0x2731,	// (0x00078917) list_imed_aspect_pane

0xb067,	// (0x0008124d) scroll_pane_cp027_ParamLimits

0xb067,	// (0x0008124d) scroll_pane_cp027

0xb073,	// (0x00081259) cell_imed_effect_pane_ParamLimits

0xb073,	// (0x00081259) cell_imed_effect_pane

0x2739,	// (0x0007891f) cell_imed_colour_pane_ParamLimits

0x2739,	// (0x0007891f) cell_imed_colour_pane

0x277b,	// (0x00078961) cell_imed_colour_pane_g1_ParamLimits

0x277b,	// (0x00078961) cell_imed_colour_pane_g1

0x278c,	// (0x00078972) hgihlgiht_grid_pane_cp016_ParamLimits

0x278c,	// (0x00078972) hgihlgiht_grid_pane_cp016

0xb08b,	// (0x00081271) cell_imed_effect_pane_g1

0xb093,	// (0x00081279) grid_highlight_pane_cp017

0x279d,	// (0x00078983) list_imed_single_pane_ParamLimits

0x279d,	// (0x00078983) list_imed_single_pane

0xe76f,	// (0x00084955) list_highlight_pane_cp07

0x27b2,	// (0x00078998) list_imed_aspect_pane_comp1_t1

0x1e71,	// (0x00078057) bg_tb_trans_pane_cp05

0x27d4,	// (0x000789ba) popup_imed_adjust2_window_g1

0x27fb,	// (0x000789e1) popup_imed_adjust2_window_t1

0x2813,	// (0x000789f9) slider_imed_adjust_pane

0x2827,	// (0x00078a0d) slider_imed_adjust_pane_g1

0x2837,	// (0x00078a1d) slider_imed_adjust_pane_g2

0x2847,	// (0x00078a2d) slider_imed_adjust_pane_g3

0x2858,	// (0x00078a3e) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x000859cc) slider_imed_adjust_pane_g

0xb09c,	// (0x00081282) aid_size_cell_clipart2

0xb0a8,	// (0x0008128e) grid_imed_clipart_pane

0x2869,	// (0x00078a4f) scroll_pane_cp031

0xb0b2,	// (0x00081298) cell_imed_clipart_pane_ParamLimits

0xb0b2,	// (0x00081298) cell_imed_clipart_pane

0xb0d4,	// (0x000812ba) cell_imed_clipart_pane_g1

0xe76f,	// (0x00084955) grid_highlight_pane_cp014

0xae32,	// (0x00081018) main_clock2_pane_g1_ParamLimits

0xae32,	// (0x00081018) main_clock2_pane_g1

0xaf01,	// (0x000810e7) aid_call2_pane_cp10

0xaf13,	// (0x000810f9) aid_call_pane_cp10

0x08a8,	// (0x00076a8e) popup_clock_analogue_window_cp10_g1

0x08a8,	// (0x00076a8e) popup_clock_analogue_window_cp10_g2

0xaf25,	// (0x0008110b) popup_clock_analogue_window_cp10_g3

0xaf25,	// (0x0008110b) popup_clock_analogue_window_cp10_g4

0x08a8,	// (0x00076a8e) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x000859ba) popup_clock_analogue_window_cp10_g

0xaf37,	// (0x0008111d) popup_clock_analogue_window_cp10_t1

0xaf68,	// (0x0008114e) clock_digital_number_pane_cp10_ParamLimits

0xaf68,	// (0x0008114e) clock_digital_number_pane_cp10

0xaf80,	// (0x00081166) clock_digital_number_pane_cp11_ParamLimits

0xaf80,	// (0x00081166) clock_digital_number_pane_cp11

0xaf98,	// (0x0008117e) clock_digital_number_pane_cp12_ParamLimits

0xaf98,	// (0x0008117e) clock_digital_number_pane_cp12

0xafb0,	// (0x00081196) clock_digital_number_pane_cp13_ParamLimits

0xafb0,	// (0x00081196) clock_digital_number_pane_cp13

0xafc8,	// (0x000811ae) clock_digital_separator_pane_cp10_ParamLimits

0xafc8,	// (0x000811ae) clock_digital_separator_pane_cp10

0xafe0,	// (0x000811c6) popup_clock_digital_window_cp02_t1_ParamLimits

0xafe0,	// (0x000811c6) popup_clock_digital_window_cp02_t1

0xedf6,	// (0x00084fdc) clock_digital_number_pane_cp10_g1

0xedf6,	// (0x00084fdc) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x000859d5) clock_digital_number_pane_cp10_g

0xedf6,	// (0x00084fdc) clock_digital_separator_pane_cp10_g1

0xedf6,	// (0x00084fdc) clock_digital_separator_pane_g2_cp10

0x0a33,	// (0x00076c19) navi_pane_vded_g4

0x0a3c,	// (0x00076c22) navi_pane_vded_g5

0x0a45,	// (0x00076c2b) navi_pane_vded_t1

0xe76f,	// (0x00084955) main_vded_pane

0xb0dd,	// (0x000812c3) main_vded_pane_g1

0xb0e9,	// (0x000812cf) main_vded_pane_g2

0xb0f3,	// (0x000812d9) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x000859da) main_vded_pane_g

0xb0fd,	// (0x000812e3) main_vded_pane_t1

0xb10b,	// (0x000812f1) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x000859e1) main_vded_pane_t

0xb119,	// (0x000812ff) vded_slider_pane

0xb123,	// (0x00081309) vded_video_pane

0x2871,	// (0x00078a57) vded_video_pane_g1

0xb12d,	// (0x00081313) vded_video_pane_g2

0x2285,	// (0x0007846b) vded_video_pane_g3

0x0002,

0xf800,	// (0x000859e6) vded_video_pane_g

0x287b,	// (0x00078a61) vded_slider_pane_g1

0x1fd8,	// (0x000781be) vded_slider_pane_g2

0x2884,	// (0x00078a6a) vded_slider_pane_g3

0x288d,	// (0x00078a73) vded_slider_pane_g4

0x2896,	// (0x00078a7c) vded_slider_pane_g5

0x0004,

0xf807,	// (0x000859ed) vded_slider_pane_g

0xac02,	// (0x00080de8) mup3_rocker_pane_ParamLimits

0xac02,	// (0x00080de8) mup3_rocker_pane

0xb136,	// (0x0008131c) mup3_control_keys_pane_g1

0xb13e,	// (0x00081324) mup3_control_keys_pane_g2

0xb146,	// (0x0008132c) mup3_control_keys_pane_g3

0xb14e,	// (0x00081334) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x000859f8) mup3_control_keys_pane_g

0x6a3a,	// (0x0007cc20) popup_toolbar2_fixed_window_cp01_ParamLimits

0x6a3a,	// (0x0007cc20) popup_toolbar2_fixed_window_cp01

0xac1c,	// (0x00080e02) popup_toolbar2_fixed_window_cp02_ParamLimits

0xac1c,	// (0x00080e02) popup_toolbar2_fixed_window_cp02

0x11ed,	// (0x000773d3) popup_call2_audio_second_window_t4_ParamLimits

0x11ed,	// (0x000773d3) popup_call2_audio_second_window_t4

0x171b,	// (0x00077901) popup_call2_audio_first_window_t6_ParamLimits

0x171b,	// (0x00077901) popup_call2_audio_first_window_t6

0x19b1,	// (0x00077b97) popup_call2_audio_out_window_t6_ParamLimits

0x19b1,	// (0x00077b97) popup_call2_audio_out_window_t6

0xe76f,	// (0x00084955) main_vitu_pane

0xb15e,	// (0x00081344) aid_size_cell_itu_ParamLimits

0xb15e,	// (0x00081344) aid_size_cell_itu

0x3e7f,	// (0x0007a065) bg_popup_window_pane_cp08_ParamLimits

0x3e7f,	// (0x0007a065) bg_popup_window_pane_cp08

0xb16c,	// (0x00081352) field_vitu_entry_pane_ParamLimits

0xb16c,	// (0x00081352) field_vitu_entry_pane

0xb17b,	// (0x00081361) grid_vitu_function_pane_ParamLimits

0xb17b,	// (0x00081361) grid_vitu_function_pane

0xb18b,	// (0x00081371) grid_vitu_itu_pane_ParamLimits

0xb18b,	// (0x00081371) grid_vitu_itu_pane

0xb19b,	// (0x00081381) cell_vitu_itu_pane_ParamLimits

0xb19b,	// (0x00081381) cell_vitu_itu_pane

0xb1b0,	// (0x00081396) cell_vitu_function_pane_ParamLimits

0xb1b0,	// (0x00081396) cell_vitu_function_pane

0xf0af,	// (0x00085295) bg_popup_sub_pane_cp08_ParamLimits

0xf0af,	// (0x00085295) bg_popup_sub_pane_cp08

0xb1c2,	// (0x000813a8) field_vitu_entry_pane_t1_ParamLimits

0xb1c2,	// (0x000813a8) field_vitu_entry_pane_t1

0x28b7,	// (0x00078a9d) field_vitu_entry_pane_t2_ParamLimits

0x28b7,	// (0x00078a9d) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x00085a06) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x00085a06) field_vitu_entry_pane_t

0x28d4,	// (0x00078aba) bg_button_pane_cp05_ParamLimits

0x28d4,	// (0x00078aba) bg_button_pane_cp05

0xb1de,	// (0x000813c4) cell_vitu_itu_pane_g1

0xb1f6,	// (0x000813dc) cell_vitu_itu_pane_t1_ParamLimits

0xb1f6,	// (0x000813dc) cell_vitu_itu_pane_t1

0xb208,	// (0x000813ee) cell_vitu_itu_pane_t2_ParamLimits

0xb208,	// (0x000813ee) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x00085a0b) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x00085a0b) cell_vitu_itu_pane_t

0x28e2,	// (0x00078ac8) bg_button_pane_cp07

0xb23d,	// (0x00081423) cell_vitu_function_pane_g1

0x6d00,	// (0x0007cee6) main_calc_pane_g1

0x67f7,	// (0x0007c9dd) aid_visual_content_pane

0xe76f,	// (0x00084955) main_vradio_pane

0xb246,	// (0x0008142c) main_vradio_pane_g1_ParamLimits

0xb246,	// (0x0008142c) main_vradio_pane_g1

0x28ec,	// (0x00078ad2) main_vradio_pane_g2_ParamLimits

0x28ec,	// (0x00078ad2) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x00085a12) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x00085a12) main_vradio_pane_g

0xb256,	// (0x0008143c) main_vradio_pane_t1_ParamLimits

0xb256,	// (0x0008143c) main_vradio_pane_t1

0xb268,	// (0x0008144e) main_vradio_pane_t2_ParamLimits

0xb268,	// (0x0008144e) main_vradio_pane_t2

0x28f9,	// (0x00078adf) main_vradio_pane_t3_ParamLimits

0x28f9,	// (0x00078adf) main_vradio_pane_t3

0x0002,

0xf831,	// (0x00085a17) main_vradio_pane_t_ParamLimits

0xf831,	// (0x00085a17) main_vradio_pane_t

0xb27a,	// (0x00081460) vradio_rocker_control_pane_ParamLimits

0xb27a,	// (0x00081460) vradio_rocker_control_pane

0xb286,	// (0x0008146c) vradio_station_info_pane_ParamLimits

0xb286,	// (0x0008146c) vradio_station_info_pane

0x290d,	// (0x00078af3) vradio_frequency_info_pane_ParamLimits

0x290d,	// (0x00078af3) vradio_frequency_info_pane

0x2285,	// (0x0007846b) vradio_station_info_pane_g1

0x291c,	// (0x00078b02) vradio_station_info_pane_t1_ParamLimits

0x291c,	// (0x00078b02) vradio_station_info_pane_t1

0x293e,	// (0x00078b24) vradio_station_info_pane_t2_ParamLimits

0x293e,	// (0x00078b24) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x00085a1e) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x00085a1e) vradio_station_info_pane_t

0x2950,	// (0x00078b36) vradio_tuning_pane

0x2958,	// (0x00078b3e) vradio_rocker_control_pane_g1

0x2960,	// (0x00078b46) vradio_rocker_control_pane_g2

0x2968,	// (0x00078b4e) vradio_rocker_control_pane_g3

0x2970,	// (0x00078b56) vradio_rocker_control_pane_g4

0x2978,	// (0x00078b5e) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x00085a23) vradio_rocker_control_pane_g

0xb295,	// (0x0008147b) vradio_frequency_info_pane_g1

0x2980,	// (0x00078b66) vradio_frequency_info_pane_t1_ParamLimits

0x2980,	// (0x00078b66) vradio_frequency_info_pane_t1

0xb29f,	// (0x00081485) vradio_tuning_pane_g1

0xb2a8,	// (0x0008148e) vradio_tuning_pane_t1

0x6840,	// (0x0007ca26) area_side_right_pane_ParamLimits

0x6840,	// (0x0007ca26) area_side_right_pane

0x1e2c,	// (0x00078012) status_small_pane_g1

0x1e34,	// (0x0007801a) status_small_pane_g2

0x1e3d,	// (0x00078023) status_small_pane_g3

0x1e46,	// (0x0007802c) status_small_pane_g4

0x0003,

0xf5f8,	// (0x000857de) status_small_pane_g

0x1e4f,	// (0x00078035) status_small_pane_t1

0xe76f,	// (0x00084955) main_video3_pane

0x2994,	// (0x00078b7a) cams_zoom_vslider_pane

0x299c,	// (0x00078b82) image3_wide_pane_ParamLimits

0x299c,	// (0x00078b82) image3_wide_pane

0x29b6,	// (0x00078b9c) image3_wide_small_pane

0x29ca,	// (0x00078bb0) main_video3_pane_g1_ParamLimits

0x29ca,	// (0x00078bb0) main_video3_pane_g1

0x29e6,	// (0x00078bcc) main_video3_pane_g2_ParamLimits

0x29e6,	// (0x00078bcc) main_video3_pane_g2

0x0001,

0xf848,	// (0x00085a2e) main_video3_pane_g_ParamLimits

0xf848,	// (0x00085a2e) main_video3_pane_g

0x2a02,	// (0x00078be8) main_video3_pane_t1_ParamLimits

0x2a02,	// (0x00078be8) main_video3_pane_t1

0x2a2d,	// (0x00078c13) main_video3_pane_t2_ParamLimits

0x2a2d,	// (0x00078c13) main_video3_pane_t2

0x2a58,	// (0x00078c3e) main_video3_pane_t3_ParamLimits

0x2a58,	// (0x00078c3e) main_video3_pane_t3

0x0002,

0xf84d,	// (0x00085a33) main_video3_pane_t_ParamLimits

0xf84d,	// (0x00085a33) main_video3_pane_t

0x2a85,	// (0x00078c6b) cams_zoom_vslider_pane_g1

0x2a8e,	// (0x00078c74) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x00085a3a) cams_zoom_vslider_pane_g

0x2a96,	// (0x00078c7c) small_slider_vertical_pane

0x2285,	// (0x0007846b) small_slider_vertical_pane_g1

0x2285,	// (0x0007846b) small_slider_vertical_pane_g2

0x2a9e,	// (0x00078c84) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x00085a3f) small_slider_vertical_pane_g

0xe76f,	// (0x00084955) main_hwr_training_pane

0x2aa7,	// (0x00078c8d) hwr_training_instruct_pane_ParamLimits

0x2aa7,	// (0x00078c8d) hwr_training_instruct_pane

0xb2b7,	// (0x0008149d) hwr_training_navi_pane_ParamLimits

0xb2b7,	// (0x0008149d) hwr_training_navi_pane

0xb2d1,	// (0x000814b7) hwr_training_write_pane_ParamLimits

0xb2d1,	// (0x000814b7) hwr_training_write_pane

0xe76f,	// (0x00084955) bg_frame_shadow_pane

0x2ade,	// (0x00078cc4) hwr_training_write_pane_g1

0x2ae6,	// (0x00078ccc) hwr_training_write_pane_g2

0x2aee,	// (0x00078cd4) hwr_training_write_pane_g3

0x2af6,	// (0x00078cdc) hwr_training_write_pane_g4

0x2afe,	// (0x00078ce4) hwr_training_write_pane_g5

0x2b06,	// (0x00078cec) hwr_training_write_pane_g6

0x2b0e,	// (0x00078cf4) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x00085a46) hwr_training_write_pane_g

0xb309,	// (0x000814ef) hwr_training_navi_pane_g1_ParamLimits

0xb309,	// (0x000814ef) hwr_training_navi_pane_g1

0xb31b,	// (0x00081501) hwr_training_navi_pane_g2_ParamLimits

0xb31b,	// (0x00081501) hwr_training_navi_pane_g2

0xb32d,	// (0x00081513) hwr_training_navi_pane_g3_ParamLimits

0xb32d,	// (0x00081513) hwr_training_navi_pane_g3

0xb33d,	// (0x00081523) hwr_training_navi_pane_g4_ParamLimits

0xb33d,	// (0x00081523) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x00085a55) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x00085a55) hwr_training_navi_pane_g

0xb357,	// (0x0008153d) hwr_training_navi_pane_t1

0xb365,	// (0x0008154b) list_single_hwr_training_instruct_pane_ParamLimits

0xb365,	// (0x0008154b) list_single_hwr_training_instruct_pane

0x2b16,	// (0x00078cfc) list_single_hwr_training_instruct_pane_t1

0x21c5,	// (0x000783ab) bg_frame_shadow_pane_g1

0x2b25,	// (0x00078d0b) bg_frame_shadow_pane_g2

0x2b2d,	// (0x00078d13) bg_frame_shadow_pane_g3

0x2b35,	// (0x00078d1b) bg_frame_shadow_pane_g4

0x2b3d,	// (0x00078d23) bg_frame_shadow_pane_g5

0x2b45,	// (0x00078d2b) bg_frame_shadow_pane_g6

0x2b4d,	// (0x00078d33) bg_frame_shadow_pane_g7

0xef7c,	// (0x00085162) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x00085a60) bg_frame_shadow_pane_g

0xe76f,	// (0x00084955) main_video_tele_dialer_pane

0xb38a,	// (0x00081570) aid_size_cell_video_keypad_ParamLimits

0xb38a,	// (0x00081570) aid_size_cell_video_keypad

0xb39a,	// (0x00081580) grid_video_dialer_keypad_pane_ParamLimits

0xb39a,	// (0x00081580) grid_video_dialer_keypad_pane

0xb3ce,	// (0x000815b4) video_down_pane_cp_ParamLimits

0xb3ce,	// (0x000815b4) video_down_pane_cp

0xb3f8,	// (0x000815de) cell_video_dialer_keypad_pane_ParamLimits

0xb3f8,	// (0x000815de) cell_video_dialer_keypad_pane

0x2b55,	// (0x00078d3b) bg_button_pane_cp08_ParamLimits

0x2b55,	// (0x00078d3b) bg_button_pane_cp08

0xb40d,	// (0x000815f3) cell_video_dialer_keypad_pane_g1_ParamLimits

0xb40d,	// (0x000815f3) cell_video_dialer_keypad_pane_g1

0xabf6,	// (0x00080ddc) mup3_rocker2_pane_ParamLimits

0xabf6,	// (0x00080ddc) mup3_rocker2_pane

0x2285,	// (0x0007846b) mup3_rocker2_pane_g1

0x9aea,	// (0x0007fcd0) main_dialer2_pane

0xe76f,	// (0x00084955) main_mp4_pane

0xb44c,	// (0x00081632) main_mp4_pane_g1_ParamLimits

0xb44c,	// (0x00081632) main_mp4_pane_g1

0xb45a,	// (0x00081640) main_mp4_pane_g2_ParamLimits

0xb45a,	// (0x00081640) main_mp4_pane_g2

0xb468,	// (0x0008164e) main_mp4_pane_g3_ParamLimits

0xb468,	// (0x0008164e) main_mp4_pane_g3

0xb4ad,	// (0x00081693) main_mp4_pane_g4_ParamLimits

0xb4ad,	// (0x00081693) main_mp4_pane_g4

0xb4d5,	// (0x000816bb) main_mp4_pane_g5_ParamLimits

0xb4d5,	// (0x000816bb) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x00085a80) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x00085a80) main_mp4_pane_g

0xb525,	// (0x0008170b) main_mp4_pane_t1_ParamLimits

0xb525,	// (0x0008170b) main_mp4_pane_t1

0xb581,	// (0x00081767) main_mp4_pane_t2_ParamLimits

0xb581,	// (0x00081767) main_mp4_pane_t2

0x2b61,	// (0x00078d47) main_mp4_pane_t3_ParamLimits

0x2b61,	// (0x00078d47) main_mp4_pane_t3

0xb5d3,	// (0x000817b9) main_mp4_pane_t4_ParamLimits

0xb5d3,	// (0x000817b9) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x00085a8d) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x00085a8d) main_mp4_pane_t

0xb617,	// (0x000817fd) mp4_progress_pane_ParamLimits

0xb617,	// (0x000817fd) mp4_progress_pane

0xb661,	// (0x00081847) mp4_rocker_pane_ParamLimits

0xb661,	// (0x00081847) mp4_rocker_pane

0x2b89,	// (0x00078d6f) mp4_progress_pane_t1

0x2ba2,	// (0x00078d88) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x00085a96) mp4_progress_pane_t

0x2bbb,	// (0x00078da1) mup_progress_pane_cp04

0x2285,	// (0x0007846b) mp4_rocker_pane_g1

0xb681,	// (0x00081867) aid_cell_size_keypad2_ParamLimits

0xb681,	// (0x00081867) aid_cell_size_keypad2

0xb691,	// (0x00081877) dialer2_ne_pane_ParamLimits

0xb691,	// (0x00081877) dialer2_ne_pane

0xb69f,	// (0x00081885) grid_dialer2_keypad_pane_ParamLimits

0xb69f,	// (0x00081885) grid_dialer2_keypad_pane

0x335e,	// (0x00079544) bg_popup_call_pane_cp07_ParamLimits

0x335e,	// (0x00079544) bg_popup_call_pane_cp07

0xb6af,	// (0x00081895) dialer2_ne_pane_t1_ParamLimits

0xb6af,	// (0x00081895) dialer2_ne_pane_t1

0xb6d4,	// (0x000818ba) cell_dialer2_keypad_pane_ParamLimits

0xb6d4,	// (0x000818ba) cell_dialer2_keypad_pane

0x2be3,	// (0x00078dc9) bg_button_pane_pane_cp04_ParamLimits

0x2be3,	// (0x00078dc9) bg_button_pane_pane_cp04

0xb6e9,	// (0x000818cf) cell_dialer2_keypad_pane_g1_ParamLimits

0xb6e9,	// (0x000818cf) cell_dialer2_keypad_pane_g1

0x78b0,	// (0x0007da96) aid_placing_vt_set_content_ParamLimits

0x78b0,	// (0x0007da96) aid_placing_vt_set_content

0x78dc,	// (0x0007dac2) aid_placing_vt_set_title_ParamLimits

0x78dc,	// (0x0007dac2) aid_placing_vt_set_title

0xe76f,	// (0x00084955) main_image3_pane

0xb783,	// (0x00081969) area_side_right_pane_cp01_ParamLimits

0xb783,	// (0x00081969) area_side_right_pane_cp01

0xebbc,	// (0x00084da2) main_image3_pane_g1_ParamLimits

0xebbc,	// (0x00084da2) main_image3_pane_g1

0xb7b0,	// (0x00081996) main_image3_pane_g2_ParamLimits

0xb7b0,	// (0x00081996) main_image3_pane_g2

0xb7c9,	// (0x000819af) main_image3_pane_g3_ParamLimits

0xb7c9,	// (0x000819af) main_image3_pane_g3

0xb7e2,	// (0x000819c8) main_image3_pane_g4_ParamLimits

0xb7e2,	// (0x000819c8) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x00085aa5) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x00085aa5) main_image3_pane_g

0xb7fb,	// (0x000819e1) main_image3_pane_t1_ParamLimits

0xb7fb,	// (0x000819e1) main_image3_pane_t1

0xb820,	// (0x00081a06) main_image3_pane_t2_ParamLimits

0xb820,	// (0x00081a06) main_image3_pane_t2

0xb83f,	// (0x00081a25) main_image3_pane_t3_ParamLimits

0xb83f,	// (0x00081a25) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x00085aae) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x00085aae) main_image3_pane_t

0x3e7f,	// (0x0007a065) grid_sctrl_middle_pane_cp01_ParamLimits

0x3e7f,	// (0x0007a065) grid_sctrl_middle_pane_cp01

0xb8a0,	// (0x00081a86) cell_sctrl_middle_pane_cp01_ParamLimits

0xb8a0,	// (0x00081a86) cell_sctrl_middle_pane_cp01

0xb8b1,	// (0x00081a97) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xb8b1,	// (0x00081a97) cell_sctrl_middle_pane_cp01_g1

0xe76f,	// (0x00084955) main_call4_pane

0xb8be,	// (0x00081aa4) aid_size_button_call4_ParamLimits

0xb8be,	// (0x00081aa4) aid_size_button_call4

0xb8ee,	// (0x00081ad4) call4_windows_pane_ParamLimits

0xb8ee,	// (0x00081ad4) call4_windows_pane

0xb908,	// (0x00081aee) grid_call4_button_pane_ParamLimits

0xb908,	// (0x00081aee) grid_call4_button_pane

0x2bef,	// (0x00078dd5) call4_windows_conf_pane

0x2c06,	// (0x00078dec) popup_call4_audio_first_window_ParamLimits

0x2c06,	// (0x00078dec) popup_call4_audio_first_window

0x2c52,	// (0x00078e38) popup_call4_audio_second_window_ParamLimits

0x2c52,	// (0x00078e38) popup_call4_audio_second_window

0x2c66,	// (0x00078e4c) popup_call4_audio_wait_window_ParamLimits

0x2c66,	// (0x00078e4c) popup_call4_audio_wait_window

0xb92c,	// (0x00081b12) cell_call4_button_pane_ParamLimits

0xb92c,	// (0x00081b12) cell_call4_button_pane

0xb951,	// (0x00081b37) bg_button_pane_cp09_ParamLimits

0xb951,	// (0x00081b37) bg_button_pane_cp09

0xb95d,	// (0x00081b43) cell_call4_button_pane_g1_ParamLimits

0xb95d,	// (0x00081b43) cell_call4_button_pane_g1

0xb96a,	// (0x00081b50) cell_call4_button_pane_t1_ParamLimits

0xb96a,	// (0x00081b50) cell_call4_button_pane_t1

0x2cae,	// (0x00078e94) popup_call4_audio_conf_window_ParamLimits

0x2cae,	// (0x00078e94) popup_call4_audio_conf_window

0xac29,	// (0x00080e0f) mup3_progress_pane_t1_ParamLimits

0xac48,	// (0x00080e2e) mup3_progress_pane_t2_ParamLimits

0x258c,	// (0x00078772) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x00085982) mup3_progress_pane_t_ParamLimits

0x25a9,	// (0x0007878f) mup_progress_pane_cp03_ParamLimits

0xb156,	// (0x0008133c) mup3_control_keys_pane_g4_copy1

0xb645,	// (0x0008182b) mp4_rocker2_pane_ParamLimits

0xb645,	// (0x0008182b) mp4_rocker2_pane

0x2cca,	// (0x00078eb0) mp4_rocker2_pane_g1

0x2cc2,	// (0x00078ea8) mp4_rocker2_pane_g2

0xb97c,	// (0x00081b62) mp4_rocker2_pane_g3

0xb984,	// (0x00081b6a) mp4_rocker2_pane_g4

0xb98c,	// (0x00081b72) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x00085ab7) mp4_rocker2_pane_g

0xe76f,	// (0x00084955) main_camera4_pane

0xe76f,	// (0x00084955) main_video4_pane

0xb3aa,	// (0x00081590) main_video_tele_dialer_pane_t1_ParamLimits

0xb3aa,	// (0x00081590) main_video_tele_dialer_pane_t1

0xb3bc,	// (0x000815a2) main_video_tele_dialer_pane_t2_ParamLimits

0xb3bc,	// (0x000815a2) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x00085a71) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x00085a71) main_video_tele_dialer_pane_t

0xb9ac,	// (0x00081b92) cam4_autofocus_pane_ParamLimits

0xb9ac,	// (0x00081b92) cam4_autofocus_pane

0xb9c6,	// (0x00081bac) cam4_image_uncrop_pane_ParamLimits

0xb9c6,	// (0x00081bac) cam4_image_uncrop_pane

0xb9dd,	// (0x00081bc3) cam4_indicators_pane_ParamLimits

0xb9dd,	// (0x00081bc3) cam4_indicators_pane

0xb9f9,	// (0x00081bdf) main_camera4_pane_g1_ParamLimits

0xb9f9,	// (0x00081bdf) main_camera4_pane_g1

0xba05,	// (0x00081beb) main_camera4_pane_g2_ParamLimits

0xba05,	// (0x00081beb) main_camera4_pane_g2

0xba05,	// (0x00081beb) main_camera4_pane_g3_ParamLimits

0xba05,	// (0x00081beb) main_camera4_pane_g3

0xba11,	// (0x00081bf7) main_camera4_pane_g4_ParamLimits

0xba11,	// (0x00081bf7) main_camera4_pane_g4

0xba1d,	// (0x00081c03) main_camera4_pane_g5_ParamLimits

0xba1d,	// (0x00081c03) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x00085ac2) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x00085ac2) main_camera4_pane_g

0xba37,	// (0x00081c1d) main_camera4_pane_t1_ParamLimits

0xba37,	// (0x00081c1d) main_camera4_pane_t1

0x24f1,	// (0x000786d7) bg_tb_trans_pane_cp06

0xba87,	// (0x00081c6d) cam4_indicators_pane_g1

0xba98,	// (0x00081c7e) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x00085add) cam4_indicators_pane_g

0xbab6,	// (0x00081c9c) cam4_indicators_pane_t1

0xbae0,	// (0x00081cc6) main_video4_pane_g1_ParamLimits

0xbae0,	// (0x00081cc6) main_video4_pane_g1

0xbaec,	// (0x00081cd2) main_video4_pane_g2_ParamLimits

0xbaec,	// (0x00081cd2) main_video4_pane_g2

0xbaf8,	// (0x00081cde) main_video4_pane_g3_ParamLimits

0xbaf8,	// (0x00081cde) main_video4_pane_g3

0xbb04,	// (0x00081cea) main_video4_pane_g4_ParamLimits

0xbb04,	// (0x00081cea) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x00085ae4) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x00085ae4) main_video4_pane_g

0xbb24,	// (0x00081d0a) vid4_indicators_pane_ParamLimits

0xbb24,	// (0x00081d0a) vid4_indicators_pane

0xbb43,	// (0x00081d29) video4_image_uncrop_cif_pane_ParamLimits

0xbb43,	// (0x00081d29) video4_image_uncrop_cif_pane

0xbb52,	// (0x00081d38) video4_image_uncrop_nhd_pane_ParamLimits

0xbb52,	// (0x00081d38) video4_image_uncrop_nhd_pane

0xb9c6,	// (0x00081bac) video4_image_uncrop_vga_pane_ParamLimits

0xb9c6,	// (0x00081bac) video4_image_uncrop_vga_pane

0xf0af,	// (0x00085295) bg_tb_trans_pane_cp07

0xbb69,	// (0x00081d4f) vid4_indicators_pane_g1

0xbb7d,	// (0x00081d63) vid4_indicators_pane_g2

0xbb91,	// (0x00081d77) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x00085aef) vid4_indicators_pane_g

0xbbc0,	// (0x00081da6) vid4_indicators_pane_t1

0xbbd7,	// (0x00081dbd) cam4_autofocus_pane_g1

0xbbdf,	// (0x00081dc5) cam4_autofocus_pane_g2

0xbbe7,	// (0x00081dcd) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x00085afa) cam4_autofocus_pane_g

0xbbef,	// (0x00081dd5) cam4_autofocus_pane_g3_copy1

0xb3dc,	// (0x000815c2) video_down_pane_cp_t1

0xb3ea,	// (0x000815d0) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x00085a76) video_down_pane_cp_t

0x3e7f,	// (0x0007a065) popup_vitu2_window_ParamLimits

0x3e7f,	// (0x0007a065) popup_vitu2_window

0xbbf7,	// (0x00081ddd) aid_size_cell2_itu2_ParamLimits

0xbbf7,	// (0x00081ddd) aid_size_cell2_itu2

0xbc19,	// (0x00081dff) aid_size_cell_itu2_ParamLimits

0xbc19,	// (0x00081dff) aid_size_cell_itu2

0x335e,	// (0x00079544) bg_popup_window_pane_cp09_ParamLimits

0x335e,	// (0x00079544) bg_popup_window_pane_cp09

0xbc5d,	// (0x00081e43) field_vitu2_entry_pane_ParamLimits

0xbc5d,	// (0x00081e43) field_vitu2_entry_pane

0xbc7d,	// (0x00081e63) grid_vitu2_function_pane_ParamLimits

0xbc7d,	// (0x00081e63) grid_vitu2_function_pane

0xbcc1,	// (0x00081ea7) grid_vitu2_itu_pane_ParamLimits

0xbcc1,	// (0x00081ea7) grid_vitu2_itu_pane

0xbd39,	// (0x00081f1f) cell_vitu2_itu_pane_ParamLimits

0xbd39,	// (0x00081f1f) cell_vitu2_itu_pane

0xbd4e,	// (0x00081f34) cell_vitu2_function_pane_ParamLimits

0xbd4e,	// (0x00081f34) cell_vitu2_function_pane

0x2cd2,	// (0x00078eb8) bg_popup_call_pane_cp08_ParamLimits

0x2cd2,	// (0x00078eb8) bg_popup_call_pane_cp08

0x2ce9,	// (0x00078ecf) field_vitu2_entry_pane_g1

0x2cf5,	// (0x00078edb) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x00085b01) field_vitu2_entry_pane_g

0x5854,	// (0x0007ba3a) field_vitu2_entry_pane_t1_ParamLimits

0x5854,	// (0x0007ba3a) field_vitu2_entry_pane_t1

0x5880,	// (0x0007ba66) field_vitu2_entry_pane_t2_ParamLimits

0x5880,	// (0x0007ba66) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x00085b08) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x00085b08) field_vitu2_entry_pane_t

0xbd8d,	// (0x00081f73) bg_button_pane_cp010_ParamLimits

0xbd8d,	// (0x00081f73) bg_button_pane_cp010

0xbd9b,	// (0x00081f81) cell_vitu2_itu_pane_g1

0xbdc4,	// (0x00081faa) cell_vitu2_itu_pane_t1_ParamLimits

0xbdc4,	// (0x00081faa) cell_vitu2_itu_pane_t1

0x589d,	// (0x0007ba83) cell_vitu2_itu_pane_t2_ParamLimits

0x589d,	// (0x0007ba83) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x00085b12) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x00085b12) cell_vitu2_itu_pane_t

0xf0af,	// (0x00085295) bg_button_pane_cp011

0xbe10,	// (0x00081ff6) cell_vitu2_function_pane_g1

0xe76f,	// (0x00084955) main_myfav_hc_pane

0xb881,	// (0x00081a67) popup_image3_note_pane_ParamLimits

0xb881,	// (0x00081a67) popup_image3_note_pane

0xb88f,	// (0x00081a75) popup_image3_tool_bar_pane_ParamLimits

0xb88f,	// (0x00081a75) popup_image3_tool_bar_pane

0x590b,	// (0x0007baf1) cell_vitu2_itu_pane_t3_ParamLimits

0x590b,	// (0x0007baf1) cell_vitu2_itu_pane_t3

0xe76f,	// (0x00084955) bg_popup_trans_pane

0x2d17,	// (0x00078efd) grid_image3_tool_bar_pane

0x2d21,	// (0x00078f07) bg_popup_trans_pane_g1

0x025e,	// (0x00076444) bg_popup_trans_pane_g2

0x2d29,	// (0x00078f0f) bg_popup_trans_pane_g3

0x2d31,	// (0x00078f17) bg_popup_trans_pane_g4

0x2d39,	// (0x00078f1f) bg_popup_trans_pane_g5

0x2d41,	// (0x00078f27) bg_popup_trans_pane_g6

0x2d49,	// (0x00078f2f) bg_popup_trans_pane_g7

0x2d51,	// (0x00078f37) bg_popup_trans_pane_g8

0x023e,	// (0x00076424) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x00085b19) bg_popup_trans_pane_g

0x2d59,	// (0x00078f3f) cell_image3_tool_bar_pane_ParamLimits

0x2d59,	// (0x00078f3f) cell_image3_tool_bar_pane

0x2285,	// (0x0007846b) cell_image3_tool_bar_pane_g1

0xe76f,	// (0x00084955) bg_popup_trans_pane_cp1

0x2d6d,	// (0x00078f53) popup_image3_note_pane_t1

0x2d7b,	// (0x00078f61) popup_image3_note_pane_t2

0x2d89,	// (0x00078f6f) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x00085b2c) popup_image3_note_pane_t

0x2d97,	// (0x00078f7d) popup_image3_note_pane_t3_copy1

0xbe24,	// (0x0008200a) bg_myfav_hc_instruction_pane_ParamLimits

0xbe24,	// (0x0008200a) bg_myfav_hc_instruction_pane

0xbe3c,	// (0x00082022) cell_myfav_contact_pane_ParamLimits

0xbe3c,	// (0x00082022) cell_myfav_contact_pane

0xbe56,	// (0x0008203c) cell_myfav_contact_pane_cp1_ParamLimits

0xbe56,	// (0x0008203c) cell_myfav_contact_pane_cp1

0xbe6e,	// (0x00082054) cell_myfav_contact_pane_cp2_ParamLimits

0xbe6e,	// (0x00082054) cell_myfav_contact_pane_cp2

0xbe86,	// (0x0008206c) cell_myfav_contact_pane_cp3_ParamLimits

0xbe86,	// (0x0008206c) cell_myfav_contact_pane_cp3

0xbe9d,	// (0x00082083) cell_myfav_contact_pane_cp4_ParamLimits

0xbe9d,	// (0x00082083) cell_myfav_contact_pane_cp4

0xbeb3,	// (0x00082099) cell_myfav_contact_pane_cp5_ParamLimits

0xbeb3,	// (0x00082099) cell_myfav_contact_pane_cp5

0xbec7,	// (0x000820ad) cell_myfav_contact_pane_cp6_ParamLimits

0xbec7,	// (0x000820ad) cell_myfav_contact_pane_cp6

0xbedb,	// (0x000820c1) cell_myfav_contact_pane_cp7_ParamLimits

0xbedb,	// (0x000820c1) cell_myfav_contact_pane_cp7

0x2da5,	// (0x00078f8b) listscroll_gen_pane_cp05

0xbef3,	// (0x000820d9) main_myfav_hc_pane_g1_ParamLimits

0xbef3,	// (0x000820d9) main_myfav_hc_pane_g1

0xbf09,	// (0x000820ef) main_myfav_hc_pane_g2_ParamLimits

0xbf09,	// (0x000820ef) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x00085b33) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x00085b33) main_myfav_hc_pane_g

0xbf37,	// (0x0008211d) main_myfav_hc_pane_t1_ParamLimits

0xbf37,	// (0x0008211d) main_myfav_hc_pane_t1

0x2dae,	// (0x00078f94) main_myfav_hc_pane_t2_ParamLimits

0x2dae,	// (0x00078f94) main_myfav_hc_pane_t2

0x2dc0,	// (0x00078fa6) main_myfav_hc_pane_t3_ParamLimits

0x2dc0,	// (0x00078fa6) main_myfav_hc_pane_t3

0xbf4e,	// (0x00082134) main_myfav_hc_pane_t4_ParamLimits

0xbf4e,	// (0x00082134) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x00085b3a) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x00085b3a) main_myfav_hc_pane_t

0x2285,	// (0x0007846b) bg_myfav_hc_instruction_pane_g1

0x2dd2,	// (0x00078fb8) cell_myfav_contact_pane_g1_ParamLimits

0x2dd2,	// (0x00078fb8) cell_myfav_contact_pane_g1

0x2dd2,	// (0x00078fb8) cell_myfav_contact_pane_g2_ParamLimits

0x2dd2,	// (0x00078fb8) cell_myfav_contact_pane_g2

0x2dde,	// (0x00078fc4) cell_myfav_contact_pane_g3_ParamLimits

0x2dde,	// (0x00078fc4) cell_myfav_contact_pane_g3

0x2576,	// (0x0007875c) cell_myfav_contact_pane_g4_ParamLimits

0x2576,	// (0x0007875c) cell_myfav_contact_pane_g4

0x2deb,	// (0x00078fd1) cell_myfav_contact_pane_g5_ParamLimits

0x2deb,	// (0x00078fd1) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x00085b45) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x00085b45) cell_myfav_contact_pane_g

0xbf1f,	// (0x00082105) main_myfav_hc_pane_g3_ParamLimits

0xbf1f,	// (0x00082105) main_myfav_hc_pane_g3

0x6975,	// (0x0007cb5b) popup_adpt_find_window

0xbf78,	// (0x0008215e) afind_page_pane_ParamLimits

0xbf78,	// (0x0008215e) afind_page_pane

0xbf85,	// (0x0008216b) aid_size_cell_afind_ParamLimits

0xbf85,	// (0x0008216b) aid_size_cell_afind

0xbf9f,	// (0x00082185) bg_popup_sub_pane_cp09_ParamLimits

0xbf9f,	// (0x00082185) bg_popup_sub_pane_cp09

0xbfac,	// (0x00082192) find_pane_cp01_ParamLimits

0xbfac,	// (0x00082192) find_pane_cp01

0x2df7,	// (0x00078fdd) grid_afind_control_pane_ParamLimits

0x2df7,	// (0x00078fdd) grid_afind_control_pane

0xbfb9,	// (0x0008219f) grid_afind_pane_ParamLimits

0xbfb9,	// (0x0008219f) grid_afind_pane

0xbfd5,	// (0x000821bb) cell_afind_pane_ParamLimits

0xbfd5,	// (0x000821bb) cell_afind_pane

0x2285,	// (0x0007846b) afind_page_pane_g1

0xc01d,	// (0x00082203) afind_page_pane_g2

0xc026,	// (0x0008220c) afind_page_pane_g3

0x0002,

0xf96a,	// (0x00085b50) afind_page_pane_g

0xc02f,	// (0x00082215) afind_page_pane_t1

0x2e0b,	// (0x00078ff1) cell_afind_grid_control_pane_ParamLimits

0x2e0b,	// (0x00078ff1) cell_afind_grid_control_pane

0x2be3,	// (0x00078dc9) bg_button_pane_cp69_ParamLimits

0x2be3,	// (0x00078dc9) bg_button_pane_cp69

0xc04f,	// (0x00082235) cell_afind_pane_g1_ParamLimits

0xc04f,	// (0x00082235) cell_afind_pane_g1

0xc05c,	// (0x00082242) cell_afind_pane_t1_ParamLimits

0xc05c,	// (0x00082242) cell_afind_pane_t1

0x0057,	// (0x0007623d) bg_button_pane_cp72

0x2e1a,	// (0x00079000) cell_afind_grid_control_pane_g1

0x9668,	// (0x0007f84e) aid_image_placing_area_ParamLimits

0x9668,	// (0x0007f84e) aid_image_placing_area

0x289f,	// (0x00078a85) field_vitu_entry_pane_g1_ParamLimits

0x289f,	// (0x00078a85) field_vitu_entry_pane_g1

0x28ab,	// (0x00078a91) field_vitu_entry_pane_g2_ParamLimits

0x28ab,	// (0x00078a91) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x00085a01) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x00085a01) field_vitu_entry_pane_g

0xb1de,	// (0x000813c4) cell_vitu_itu_pane_g1_ParamLimits

0xb220,	// (0x00081406) cell_vitu_itu_pane_t3_ParamLimits

0xb220,	// (0x00081406) cell_vitu_itu_pane_t3

0x2b89,	// (0x00078d6f) mp4_progress_pane_t1_ParamLimits

0x2ba2,	// (0x00078d88) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x00085a96) mp4_progress_pane_t_ParamLimits

0x2bbb,	// (0x00078da1) mup_progress_pane_cp04_ParamLimits

0xbf62,	// (0x00082148) main_myfav_hc_pane_t5_ParamLimits

0xbf62,	// (0x00082148) main_myfav_hc_pane_t5

0x5536,	// (0x0007b71c) aid_zoom_text_primary

0x6975,	// (0x0007cb5b) popup_adpt_find_window_ParamLimits

0xf0af,	// (0x00085295) main_cam_set_pane

0xb9eb,	// (0x00081bd1) cam4_zoom_pane_ParamLimits

0xb9eb,	// (0x00081bd1) cam4_zoom_pane

0xc06e,	// (0x00082254) main_cam_set_pane_g1_ParamLimits

0xc06e,	// (0x00082254) main_cam_set_pane_g1

0xc07c,	// (0x00082262) main_cam_set_pane_g2_ParamLimits

0xc07c,	// (0x00082262) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x00085b57) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x00085b57) main_cam_set_pane_g

0xc088,	// (0x0008226e) main_cam_set_pane_t1_ParamLimits

0xc088,	// (0x0008226e) main_cam_set_pane_t1

0xc0a4,	// (0x0008228a) main_cset_listscroll_pane_ParamLimits

0xc0a4,	// (0x0008228a) main_cset_listscroll_pane

0xc0cf,	// (0x000822b5) main_cset_slider_pane_ParamLimits

0xc0cf,	// (0x000822b5) main_cset_slider_pane

0x2e2b,	// (0x00079011) main_cset_list_pane_ParamLimits

0x2e2b,	// (0x00079011) main_cset_list_pane

0x2e3b,	// (0x00079021) scroll_pane_cp028

0xc0ee,	// (0x000822d4) aid_area_touch_slider

0xc10a,	// (0x000822f0) cset_slider_pane

0xc134,	// (0x0008231a) main_cset_slider_pane_g1

0xc149,	// (0x0008232f) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x00085b5c) main_cset_slider_pane_g

0x2e74,	// (0x0007905a) main_cset_slider_pane_t1

0xc20b,	// (0x000823f1) main_cset_slider_pane_t2

0xc225,	// (0x0008240b) main_cset_slider_pane_t3

0xc23f,	// (0x00082425) main_cset_slider_pane_t4

0xc259,	// (0x0008243f) main_cset_slider_pane_t5

0xc277,	// (0x0008245d) main_cset_slider_pane_t6

0xc28e,	// (0x00082474) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x00085b81) main_cset_slider_pane_t

0xc39a,	// (0x00082580) cset_list_set_pane_ParamLimits

0xc39a,	// (0x00082580) cset_list_set_pane

0xc3b0,	// (0x00082596) aid_position_infowindow_above

0xc3b8,	// (0x0008259e) aid_position_infowindow_below

0xc3c0,	// (0x000825a6) cset_list_set_pane_g1_ParamLimits

0xc3c0,	// (0x000825a6) cset_list_set_pane_g1

0x5958,	// (0x0007bb3e) cset_list_set_pane_g3_ParamLimits

0x5958,	// (0x0007bb3e) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x00085ba0) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x00085ba0) cset_list_set_pane_g

0x5967,	// (0x0007bb4d) cset_list_set_pane_t1_ParamLimits

0x5967,	// (0x0007bb4d) cset_list_set_pane_t1

0xf0af,	// (0x00085295) list_highlight_pane_cp021_ParamLimits

0xf0af,	// (0x00085295) list_highlight_pane_cp021

0x0baf,	// (0x00076d95) cset_slider_pane_g1

0x0bc1,	// (0x00076da7) cset_slider_pane_g2

0x0bb8,	// (0x00076d9e) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x00085ba5) cset_slider_pane_g

0xc3cc,	// (0x000825b2) aid_area_touch_cam4_zoom

0xc3d4,	// (0x000825ba) cam4_zoom_cont_pane

0xc3dc,	// (0x000825c2) cam4_zoom_pane_g1

0xc3e4,	// (0x000825ca) cam4_zoom_pane_g2

0xc3ec,	// (0x000825d2) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x00085bac) cam4_zoom_pane_g

0x340c,	// (0x000795f2) cam4_zoom_cont_pane_g1

0x3415,	// (0x000795fb) cam4_zoom_cont_pane_g2

0x341e,	// (0x00079604) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x00085bb3) cam4_zoom_cont_pane_g

0xb8d8,	// (0x00081abe) call4_image_pane_ParamLimits

0xb8d8,	// (0x00081abe) call4_image_pane

0x2bef,	// (0x00078dd5) call4_windows_conf_pane_ParamLimits

0x2c30,	// (0x00078e16) popup_call4_audio_in_window_ParamLimits

0x2c30,	// (0x00078e16) popup_call4_audio_in_window

0xe76f,	// (0x00084955) bg_popup_call2_act_pane_cp02

0x2ca6,	// (0x00078e8c) call4_list_conf_pane

0x2285,	// (0x0007846b) call4_image_pane_g1

0x2285,	// (0x0007846b) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x000858c2) call4_image_pane_g

0x2f14,	// (0x000790fa) list_single_graphic_popup_conf4_pane_ParamLimits

0x2f14,	// (0x000790fa) list_single_graphic_popup_conf4_pane

0xe76f,	// (0x00084955) list_highlight_pane_cp022

0x2f27,	// (0x0007910d) list_single_graphic_popup_conf4_pane_g1

0x0778,	// (0x0007695e) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x00085bba) list_single_graphic_popup_conf4_pane_g

0x2f2f,	// (0x00079115) list_single_graphic_popup_conf4_pane_t1

0x7a40,	// (0x0007dc26) popup_vtel_slider_window_ParamLimits

0x7a40,	// (0x0007dc26) popup_vtel_slider_window

0x2bd1,	// (0x00078db7) dialer2_ne_pane_t2_ParamLimits

0x2bd1,	// (0x00078db7) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x00085a9b) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x00085a9b) dialer2_ne_pane_t

0xf0af,	// (0x00085295) bg_popup_sub_pane_cp010_ParamLimits

0xf0af,	// (0x00085295) bg_popup_sub_pane_cp010

0xc3f4,	// (0x000825da) popup_vtel_slider_window_g1_ParamLimits

0xc3f4,	// (0x000825da) popup_vtel_slider_window_g1

0xc400,	// (0x000825e6) popup_vtel_slider_window_g2_ParamLimits

0xc400,	// (0x000825e6) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x00085bbf) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x00085bbf) popup_vtel_slider_window_g

0xc448,	// (0x0008262e) vtel_slider_pane_ParamLimits

0xc448,	// (0x0008262e) vtel_slider_pane

0xc457,	// (0x0008263d) vtel_slider_pane_g1_ParamLimits

0xc457,	// (0x0008263d) vtel_slider_pane_g1

0xc464,	// (0x0008264a) vtel_slider_pane_g2_ParamLimits

0xc464,	// (0x0008264a) vtel_slider_pane_g2

0xc471,	// (0x00082657) vtel_slider_pane_g3_ParamLimits

0xc471,	// (0x00082657) vtel_slider_pane_g3

0xc457,	// (0x0008263d) vtel_slider_pane_g4_ParamLimits

0xc457,	// (0x0008263d) vtel_slider_pane_g4

0xc47e,	// (0x00082664) vtel_slider_pane_g5_ParamLimits

0xc47e,	// (0x00082664) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x00085bc8) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x00085bc8) vtel_slider_pane_g

0xf0af,	// (0x00085295) main_gallery2_pane

0xbc3f,	// (0x00081e25) aid_size_row_itut2_dropdow_list_ParamLimits

0xbc3f,	// (0x00081e25) aid_size_row_itut2_dropdow_list

0xbc9f,	// (0x00081e85) grid_vitu2_function_top_pane_ParamLimits

0xbc9f,	// (0x00081e85) grid_vitu2_function_top_pane

0xbcf5,	// (0x00081edb) popup_vitu2_dropdown_list_window_ParamLimits

0xbcf5,	// (0x00081edb) popup_vitu2_dropdown_list_window

0xbd15,	// (0x00081efb) popup_vitu2_match_list_window

0xc48b,	// (0x00082671) cell_vitu2_function_top_pane_ParamLimits

0xc48b,	// (0x00082671) cell_vitu2_function_top_pane

0xc4ab,	// (0x00082691) cell_vitu2_function_top_pane_cp01_ParamLimits

0xc4ab,	// (0x00082691) cell_vitu2_function_top_pane_cp01

0xc4c9,	// (0x000826af) cell_vitu2_function_top_wide_pane_ParamLimits

0xc4c9,	// (0x000826af) cell_vitu2_function_top_wide_pane

0xf0af,	// (0x00085295) bg_button_pane_cp012

0xc4e7,	// (0x000826cd) cell_vitu2_function_top_pane_g1

0xc4fb,	// (0x000826e1) bg_button_pane_cp013_ParamLimits

0xc4fb,	// (0x000826e1) bg_button_pane_cp013

0xc517,	// (0x000826fd) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc517,	// (0x000826fd) cell_vitu2_function_top_wide_pane_g1

0x3e7f,	// (0x0007a065) bg_popup_sub_pane_cp20

0xc52f,	// (0x00082715) list_vitu2_match_list_pane

0x2d21,	// (0x00078f07) bg_popup_sub_pane_cp20_g1

0x2d29,	// (0x00078f0f) bg_popup_sub_pane_cp20_g2

0x025e,	// (0x00076444) bg_popup_sub_pane_cp20_g3

0x2d31,	// (0x00078f17) bg_popup_sub_pane_cp20_g4

0x023e,	// (0x00076424) bg_popup_sub_pane_cp20_g5

0x2f45,	// (0x0007912b) bg_popup_sub_pane_cp20_g6

0x2d41,	// (0x00078f27) bg_popup_sub_pane_cp20_g7

0x2d49,	// (0x00078f2f) bg_popup_sub_pane_cp20_g8

0x2d51,	// (0x00078f37) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x00085bd3) bg_popup_sub_pane_cp20_g

0xc547,	// (0x0008272d) list_vitu2_match_list_item_pane_ParamLimits

0xc547,	// (0x0008272d) list_vitu2_match_list_item_pane

0xc559,	// (0x0008273f) list_vitu2_match_list_item_pane_t1

0xe76f,	// (0x00084955) bg_popup_sub_pane_cp21

0x06a0,	// (0x00076886) grid_vitu2_dropdown_list_pane

0xc573,	// (0x00082759) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xc573,	// (0x00082759) cell_vitu2_dropdown_list_char_pane

0xc594,	// (0x0008277a) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xc594,	// (0x0008277a) cell_vitu2_dropdown_list_ctrl_pane

0x2f5f,	// (0x00079145) cell_vitu2_dropdown_list_char_pane_g1

0x2f56,	// (0x0007913c) cell_vitu2_dropdown_list_char_pane_g2

0x2f4d,	// (0x00079133) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x00085bf0) cell_vitu2_dropdown_list_char_pane_g

0xc5c0,	// (0x000827a6) cell_vitu2_dropdown_list_char_pane_t1

0xc5ce,	// (0x000827b4) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc5ce,	// (0x000827b4) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc5de,	// (0x000827c4) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc5de,	// (0x000827c4) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc5ef,	// (0x000827d5) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc5ef,	// (0x000827d5) cell_vitu2_dropdown_list_ctrl_pane_g3

0xc5ff,	// (0x000827e5) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xc5ff,	// (0x000827e5) cell_vitu2_dropdown_list_ctrl_pane_g4

0x24f1,	// (0x000786d7) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x24f1,	// (0x000786d7) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x00085bf7) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x00085bf7) cell_vitu2_dropdown_list_ctrl_pane_g

0xc61b,	// (0x00082801) aid_size_cell_gallery2_ParamLimits

0xc61b,	// (0x00082801) aid_size_cell_gallery2

0xc635,	// (0x0008281b) grid_gallery2_pane_ParamLimits

0xc635,	// (0x0008281b) grid_gallery2_pane

0xb067,	// (0x0008124d) scroll_pane_cp029_ParamLimits

0xb067,	// (0x0008124d) scroll_pane_cp029

0xc64c,	// (0x00082832) cell_gallery2_pane_ParamLimits

0xc64c,	// (0x00082832) cell_gallery2_pane

0x2f68,	// (0x0007914e) cell_gallery2_pane_g2

0x4079,	// (0x0007a25f) cell_gallery2_pane_g3

0x2f70,	// (0x00079156) cell_gallery2_pane_g4

0x2f78,	// (0x0007915e) cell_gallery2_pane_g5

0x0a6b,	// (0x00076c51) grid_highlight_pane_cp10

0xbd15,	// (0x00081efb) popup_vitu2_match_list_window_ParamLimits

0xbd29,	// (0x00081f0f) popup_vitu2_query_window_ParamLimits

0xbd29,	// (0x00081f0f) popup_vitu2_query_window

0xe76f,	// (0x00084955) bg_vitu2_candi_button_pane

0x2f5f,	// (0x00079145) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x2f56,	// (0x0007913c) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x2f4d,	// (0x00079133) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x59c2,	// (0x0007bba8) bg_button_pane_cp015

0xc6a0,	// (0x00082886) bg_button_pane_cp016

0xc6b3,	// (0x00082899) bg_button_pane_cp017

0x1e71,	// (0x00078057) bg_popup_sub_pane_cp22

0x2f80,	// (0x00079166) popup_vitu2_query_window_g1

0x59f5,	// (0x0007bbdb) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x00085c02) popup_vitu2_query_window_g

0x5a12,	// (0x0007bbf8) popup_vitu2_query_window_t1_ParamLimits

0x5a12,	// (0x0007bbf8) popup_vitu2_query_window_t1

0x5a45,	// (0x0007bc2b) popup_vitu2_query_window_t2_ParamLimits

0x5a45,	// (0x0007bc2b) popup_vitu2_query_window_t2

0x5a57,	// (0x0007bc3d) popup_vitu2_query_window_t3_ParamLimits

0x5a57,	// (0x0007bc3d) popup_vitu2_query_window_t3

0xc6d7,	// (0x000828bd) popup_vitu2_query_window_t4_ParamLimits

0xc6d7,	// (0x000828bd) popup_vitu2_query_window_t4

0xc6f8,	// (0x000828de) popup_vitu2_query_window_t5_ParamLimits

0xc6f8,	// (0x000828de) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x00085c09) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x00085c09) popup_vitu2_query_window_t

0x2e23,	// (0x00079009) main_cset_text_pane

0xc0ee,	// (0x000822d4) aid_area_touch_slider_ParamLimits

0xc10a,	// (0x000822f0) cset_slider_pane_ParamLimits

0xc134,	// (0x0008231a) main_cset_slider_pane_g1_ParamLimits

0xc149,	// (0x0008232f) main_cset_slider_pane_g2_ParamLimits

0x2e44,	// (0x0007902a) main_cset_slider_pane_g3_ParamLimits

0x2e44,	// (0x0007902a) main_cset_slider_pane_g3

0xc15e,	// (0x00082344) main_cset_slider_pane_g4_ParamLimits

0xc15e,	// (0x00082344) main_cset_slider_pane_g4

0xc16d,	// (0x00082353) main_cset_slider_pane_g5_ParamLimits

0xc16d,	// (0x00082353) main_cset_slider_pane_g5

0xc17b,	// (0x00082361) main_cset_slider_pane_g6_ParamLimits

0xc17b,	// (0x00082361) main_cset_slider_pane_g6

0xf976,	// (0x00085b5c) main_cset_slider_pane_g_ParamLimits

0x2e74,	// (0x0007905a) main_cset_slider_pane_t1_ParamLimits

0xc20b,	// (0x000823f1) main_cset_slider_pane_t2_ParamLimits

0xc225,	// (0x0008240b) main_cset_slider_pane_t3_ParamLimits

0xc23f,	// (0x00082425) main_cset_slider_pane_t4_ParamLimits

0xc259,	// (0x0008243f) main_cset_slider_pane_t5_ParamLimits

0xc277,	// (0x0008245d) main_cset_slider_pane_t6_ParamLimits

0xc28e,	// (0x00082474) main_cset_slider_pane_t7_ParamLimits

0xc2bc,	// (0x000824a2) main_cset_slider_pane_t8_ParamLimits

0xc2bc,	// (0x000824a2) main_cset_slider_pane_t8

0xc2e4,	// (0x000824ca) main_cset_slider_pane_t9_ParamLimits

0xc2e4,	// (0x000824ca) main_cset_slider_pane_t9

0xc30c,	// (0x000824f2) main_cset_slider_pane_t10_ParamLimits

0xc30c,	// (0x000824f2) main_cset_slider_pane_t10

0xc334,	// (0x0008251a) main_cset_slider_pane_t11_ParamLimits

0xc334,	// (0x0008251a) main_cset_slider_pane_t11

0xc35e,	// (0x00082544) main_cset_slider_pane_t12_ParamLimits

0xc35e,	// (0x00082544) main_cset_slider_pane_t12

0xc37b,	// (0x00082561) main_cset_slider_pane_t13_ParamLimits

0xc37b,	// (0x00082561) main_cset_slider_pane_t13

0xf99b,	// (0x00085b81) main_cset_slider_pane_t_ParamLimits

0xe76f,	// (0x00084955) bg_popup_sub_pane_cp011

0x2f8c,	// (0x00079172) main_cset_text_pane_g1

0x2f94,	// (0x0007917a) main_cset_text_pane_t1

0x2fa2,	// (0x00079188) main_cset_text_pane_t2

0x2fb0,	// (0x00079196) main_cset_text_pane_t3

0x2fbe,	// (0x000791a4) main_cset_text_pane_t4

0x2fcc,	// (0x000791b2) main_cset_text_pane_t5

0x2fda,	// (0x000791c0) main_cset_text_pane_t6

0x2fe8,	// (0x000791ce) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x00085c18) main_cset_text_pane_t

0xe76f,	// (0x00084955) main_cam4_burst_pane

0xe76f,	// (0x00084955) main_cam5_pane

0xc03d,	// (0x00082223) bg_button_pane_cp019

0xc046,	// (0x0008222c) bg_button_pane_cp020

0x2e50,	// (0x00079036) main_cset_slider_pane_g7_ParamLimits

0x2e50,	// (0x00079036) main_cset_slider_pane_g7

0x2e5c,	// (0x00079042) main_cset_slider_pane_g8_ParamLimits

0x2e5c,	// (0x00079042) main_cset_slider_pane_g8

0xc18f,	// (0x00082375) main_cset_slider_pane_g9_ParamLimits

0xc18f,	// (0x00082375) main_cset_slider_pane_g9

0xc19b,	// (0x00082381) main_cset_slider_pane_g10_ParamLimits

0xc19b,	// (0x00082381) main_cset_slider_pane_g10

0xc1a7,	// (0x0008238d) main_cset_slider_pane_g11_ParamLimits

0xc1a7,	// (0x0008238d) main_cset_slider_pane_g11

0xc1b3,	// (0x00082399) main_cset_slider_pane_g12_ParamLimits

0xc1b3,	// (0x00082399) main_cset_slider_pane_g12

0xc1bf,	// (0x000823a5) main_cset_slider_pane_g13_ParamLimits

0xc1bf,	// (0x000823a5) main_cset_slider_pane_g13

0xc1cb,	// (0x000823b1) main_cset_slider_pane_g14_ParamLimits

0xc1cb,	// (0x000823b1) main_cset_slider_pane_g14

0xc1d7,	// (0x000823bd) main_cset_slider_pane_g15_ParamLimits

0xc1d7,	// (0x000823bd) main_cset_slider_pane_g15

0x2ea2,	// (0x00079088) main_cset_slider_pane_t14_ParamLimits

0x2ea2,	// (0x00079088) main_cset_slider_pane_t14

0x2edb,	// (0x000790c1) main_cset_slider_pane_t15_ParamLimits

0x2edb,	// (0x000790c1) main_cset_slider_pane_t15

0xc719,	// (0x000828ff) aid_cam4_burst_size_cell_ParamLimits

0xc719,	// (0x000828ff) aid_cam4_burst_size_cell

0xc735,	// (0x0008291b) grid_cam4_burst_pane_ParamLimits

0xc735,	// (0x0008291b) grid_cam4_burst_pane

0xc765,	// (0x0008294b) linegrid_cam4_burst_pane_ParamLimits

0xc765,	// (0x0008294b) linegrid_cam4_burst_pane

0xc785,	// (0x0008296b) scroll_pane_cp30_ParamLimits

0xc785,	// (0x0008296b) scroll_pane_cp30

0xc791,	// (0x00082977) cell_cam4_burst_pane_ParamLimits

0xc791,	// (0x00082977) cell_cam4_burst_pane

0x3002,	// (0x000791e8) linegrid_cam4_burst_pane_g1_ParamLimits

0x3002,	// (0x000791e8) linegrid_cam4_burst_pane_g1

0xc7cd,	// (0x000829b3) linegrid_cam4_burst_pane_g2_ParamLimits

0xc7cd,	// (0x000829b3) linegrid_cam4_burst_pane_g2

0x300f,	// (0x000791f5) linegrid_cam4_burst_pane_g3_ParamLimits

0x300f,	// (0x000791f5) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x00085c27) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x00085c27) linegrid_cam4_burst_pane_g

0xc7de,	// (0x000829c4) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xc7de,	// (0x000829c4) linegrid_cam4_burst_pane_g3_copy1

0x301c,	// (0x00079202) linegrid_cam4_burst_pane_g4_ParamLimits

0x301c,	// (0x00079202) linegrid_cam4_burst_pane_g4

0xc7f8,	// (0x000829de) linegrid_cam4_burst_pane_g5_ParamLimits

0xc7f8,	// (0x000829de) linegrid_cam4_burst_pane_g5

0xc809,	// (0x000829ef) linegrid_cam4_burst_pane_g6_ParamLimits

0xc809,	// (0x000829ef) linegrid_cam4_burst_pane_g6

0x3029,	// (0x0007920f) linegrid_cam4_burst_pane_g7_ParamLimits

0x3029,	// (0x0007920f) linegrid_cam4_burst_pane_g7

0xc81a,	// (0x00082a00) cell_cam4_burst_pane_g1

0x3042,	// (0x00079228) main_cam5_pane_t1_ParamLimits

0x3042,	// (0x00079228) main_cam5_pane_t1

0x3054,	// (0x0007923a) main_cam5_pane_t2_ParamLimits

0x3054,	// (0x0007923a) main_cam5_pane_t2

0x3066,	// (0x0007924c) main_cam5_pane_t3_ParamLimits

0x3066,	// (0x0007924c) main_cam5_pane_t3

0x3078,	// (0x0007925e) main_cam5_pane_t4_ParamLimits

0x3078,	// (0x0007925e) main_cam5_pane_t4

0x3090,	// (0x00079276) main_cam5_pane_t5_ParamLimits

0x3090,	// (0x00079276) main_cam5_pane_t5

0x30a4,	// (0x0007928a) main_cam5_pane_t6_ParamLimits

0x30a4,	// (0x0007928a) main_cam5_pane_t6

0x30b8,	// (0x0007929e) main_cam5_pane_t7_ParamLimits

0x30b8,	// (0x0007929e) main_cam5_pane_t7

0x30ca,	// (0x000792b0) main_cam5_pane_t8_ParamLimits

0x30ca,	// (0x000792b0) main_cam5_pane_t8

0x30e6,	// (0x000792cc) main_cam5_pane_t9_ParamLimits

0x30e6,	// (0x000792cc) main_cam5_pane_t9

0x30f8,	// (0x000792de) main_cam5_pane_t10_ParamLimits

0x30f8,	// (0x000792de) main_cam5_pane_t10

0x310a,	// (0x000792f0) main_cam5_pane_t11_ParamLimits

0x310a,	// (0x000792f0) main_cam5_pane_t11

0x311c,	// (0x00079302) main_cam5_pane_t12_ParamLimits

0x311c,	// (0x00079302) main_cam5_pane_t12

0x3131,	// (0x00079317) main_cam5_pane_t13_ParamLimits

0x3131,	// (0x00079317) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x00085c33) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x00085c33) main_cam5_pane_t

0x6a2b,	// (0x0007cc11) popup_scut_keymap_window_ParamLimits

0x6a2b,	// (0x0007cc11) popup_scut_keymap_window

0xc82d,	// (0x00082a13) aid_size_cell_brow_shortcut

0x0a6b,	// (0x00076c51) bg_popup_window_pane_cp010

0xc839,	// (0x00082a1f) grid_scut_pane

0xc845,	// (0x00082a2b) cell_scut_pane_ParamLimits

0xc845,	// (0x00082a2b) cell_scut_pane

0xc85c,	// (0x00082a42) cell_scut_pane_g1

0x314e,	// (0x00079334) cell_scut_pane_t1

0x315d,	// (0x00079343) cell_scut_pane_t2

0xc865,	// (0x00082a4b) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x00085c4e) cell_scut_pane_t

0xa848,	// (0x00080a2e) main_mup3_pane_g8_ParamLimits

0xa848,	// (0x00080a2e) main_mup3_pane_g8

0xbc4d,	// (0x00081e33) area_vitu2_query_pane_ParamLimits

0xbc4d,	// (0x00081e33) area_vitu2_query_pane

0x59d4,	// (0x0007bbba) input_focus_pane_cp08

0x316c,	// (0x00079352) area_vitu2_query_pane_g1

0x5ad5,	// (0x0007bcbb) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x00085c55) area_vitu2_query_pane_g

0xc873,	// (0x00082a59) area_vitu2_query_pane_t1_ParamLimits

0xc873,	// (0x00082a59) area_vitu2_query_pane_t1

0xc887,	// (0x00082a6d) area_vitu2_query_pane_t2_ParamLimits

0xc887,	// (0x00082a6d) area_vitu2_query_pane_t2

0x5ae6,	// (0x0007bccc) area_vitu2_query_pane_t3_ParamLimits

0x5ae6,	// (0x0007bccc) area_vitu2_query_pane_t3

0x5b0e,	// (0x0007bcf4) area_vitu2_query_pane_t4_ParamLimits

0x5b0e,	// (0x0007bcf4) area_vitu2_query_pane_t4

0x5b36,	// (0x0007bd1c) area_vitu2_query_pane_t5_ParamLimits

0x5b36,	// (0x0007bd1c) area_vitu2_query_pane_t5

0x5b5e,	// (0x0007bd44) area_vitu2_query_pane_t6_ParamLimits

0x5b5e,	// (0x0007bd44) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x00085c5a) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x00085c5a) area_vitu2_query_pane_t

0xc89b,	// (0x00082a81) bg_button_pane_cp018

0xc8a9,	// (0x00082a8f) bg_button_pane_cp021

0x5baa,	// (0x0007bd90) bg_button_pane_cp022

0x5bbb,	// (0x0007bda1) input_focus_pane_cp09

0x08b4,	// (0x00076a9a) aid_size_touch_mv_arrow_left

0x08dd,	// (0x00076ac3) aid_size_touch_mv_arrow_right

0xc1ef,	// (0x000823d5) main_cset_slider_pane_g16_ParamLimits

0xc1ef,	// (0x000823d5) main_cset_slider_pane_g16

0xc1fd,	// (0x000823e3) main_cset_slider_pane_g17_ParamLimits

0xc1fd,	// (0x000823e3) main_cset_slider_pane_g17

0xc81a,	// (0x00082a00) cell_cam4_burst_pane_g1_ParamLimits

0xe76f,	// (0x00084955) compa_mode_pane

0xc40c,	// (0x000825f2) popup_vtel_slider_window_g3_ParamLimits

0xc40c,	// (0x000825f2) popup_vtel_slider_window_g3

0xc420,	// (0x00082606) popup_vtel_slider_window_g4_ParamLimits

0xc420,	// (0x00082606) popup_vtel_slider_window_g4

0xc434,	// (0x0008261a) popup_vtel_slider_window_t1_ParamLimits

0xc434,	// (0x0008261a) popup_vtel_slider_window_t1

0xe76f,	// (0x00084955) main_cl_pane

0x9b7a,	// (0x0007fd60) popup_imed_adjust2_window_ParamLimits

0x1e71,	// (0x00078057) bg_tb_trans_pane_cp05_ParamLimits

0x27d4,	// (0x000789ba) popup_imed_adjust2_window_g1_ParamLimits

0x27e3,	// (0x000789c9) popup_imed_adjust2_window_g2_ParamLimits

0x27e3,	// (0x000789c9) popup_imed_adjust2_window_g2

0x27ef,	// (0x000789d5) popup_imed_adjust2_window_g3_ParamLimits

0x27ef,	// (0x000789d5) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x000859c5) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x000859c5) popup_imed_adjust2_window_g

0x27fb,	// (0x000789e1) popup_imed_adjust2_window_t1_ParamLimits

0x2813,	// (0x000789f9) slider_imed_adjust_pane_ParamLimits

0x2827,	// (0x00078a0d) slider_imed_adjust_pane_g1_ParamLimits

0x2837,	// (0x00078a1d) slider_imed_adjust_pane_g2_ParamLimits

0x2847,	// (0x00078a2d) slider_imed_adjust_pane_g3_ParamLimits

0x2858,	// (0x00078a3e) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x000859cc) slider_imed_adjust_pane_g_ParamLimits

0xb994,	// (0x00081b7a) aid_touch_area_cam4_ParamLimits

0xb994,	// (0x00081b7a) aid_touch_area_cam4

0xb9a4,	// (0x00081b8a) battery_pane_cp01

0xba2b,	// (0x00081c11) main_camera4_pane_g6_ParamLimits

0xba2b,	// (0x00081c11) main_camera4_pane_g6

0xba49,	// (0x00081c2f) main_camera4_pane_t2_ParamLimits

0xba49,	// (0x00081c2f) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x00085acf) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x00085acf) main_camera4_pane_t

0xbad0,	// (0x00081cb6) aid_touch_area_vid4_ParamLimits

0xbad0,	// (0x00081cb6) aid_touch_area_vid4

0xbb10,	// (0x00081cf6) main_video4_pane_g5_ParamLimits

0xbb10,	// (0x00081cf6) main_video4_pane_g5

0xbb34,	// (0x00081d1a) vid4_progress_pane_ParamLimits

0xbb34,	// (0x00081d1a) vid4_progress_pane

0x2e68,	// (0x0007904e) main_cset_slider_pane_g18_ParamLimits

0x2e68,	// (0x0007904e) main_cset_slider_pane_g18

0x3036,	// (0x0007921c) cell_cam4_burst_pane_g2_ParamLimits

0x3036,	// (0x0007921c) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x00085c2e) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x00085c2e) cell_cam4_burst_pane_g

0xc8b5,	// (0x00082a9b) bg_cl_pane_ParamLimits

0xc8b5,	// (0x00082a9b) bg_cl_pane

0xc8c1,	// (0x00082aa7) cl_header_pane_ParamLimits

0xc8c1,	// (0x00082aa7) cl_header_pane

0xc8cd,	// (0x00082ab3) cl_listscroll_pane_ParamLimits

0xc8cd,	// (0x00082ab3) cl_listscroll_pane

0x3178,	// (0x0007935e) bg_cl_pane_g1

0x3180,	// (0x00079366) bg_cl_pane_g2

0x3188,	// (0x0007936e) bg_cl_pane_g3

0x3190,	// (0x00079376) bg_cl_pane_g4

0x3198,	// (0x0007937e) bg_cl_pane_g5

0x31a0,	// (0x00079386) bg_cl_pane_g6

0x31a8,	// (0x0007938e) bg_cl_pane_g7

0x31b0,	// (0x00079396) bg_cl_pane_g8

0x31b8,	// (0x0007939e) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x00085c69) bg_cl_pane_g

0xc8d9,	// (0x00082abf) aid_height_cl_leading_ParamLimits

0xc8d9,	// (0x00082abf) aid_height_cl_leading

0xc8e5,	// (0x00082acb) aid_height_cl_text_ParamLimits

0xc8e5,	// (0x00082acb) aid_height_cl_text

0x3e7f,	// (0x0007a065) bg_cl_header_pane_ParamLimits

0x3e7f,	// (0x0007a065) bg_cl_header_pane

0xc8fd,	// (0x00082ae3) cl_header_pane_g1_ParamLimits

0xc8fd,	// (0x00082ae3) cl_header_pane_g1

0xc90a,	// (0x00082af0) cl_header_pane_t1_ParamLimits

0xc90a,	// (0x00082af0) cl_header_pane_t1

0x31c0,	// (0x000793a6) cl_list_pane

0x2e3b,	// (0x00079021) hc_scroll_pane_cp01

0x023e,	// (0x00076424) bg_cl_header_pane_g1

0x2d21,	// (0x00078f07) bg_cl_header_pane_g2

0x025e,	// (0x00076444) bg_cl_header_pane_g3

0x2d31,	// (0x00078f17) bg_cl_header_pane_g4

0x2d29,	// (0x00078f0f) bg_cl_header_pane_g5

0x2f45,	// (0x0007912b) bg_cl_header_pane_g6

0x2d49,	// (0x00078f2f) bg_cl_header_pane_g7

0x2d51,	// (0x00078f37) bg_cl_header_pane_g8

0x2d41,	// (0x00078f27) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x00085c7c) bg_cl_header_pane_g

0xc91c,	// (0x00082b02) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xc91c,	// (0x00082b02) hc_cl_list_double_graphic_heading_pane

0xc92d,	// (0x00082b13) hc_cl_list_single_graphic_pane_ParamLimits

0xc92d,	// (0x00082b13) hc_cl_list_single_graphic_pane

0xc946,	// (0x00082b2c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xc946,	// (0x00082b2c) hc_cl_list_single_graphic_pane_g1

0xc952,	// (0x00082b38) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xc952,	// (0x00082b38) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x00085c8f) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x00085c8f) hc_cl_list_single_graphic_pane_g

0xc966,	// (0x00082b4c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xc966,	// (0x00082b4c) hc_cl_list_single_graphic_pane_t1

0xc946,	// (0x00082b2c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xc946,	// (0x00082b2c) hc_cl_list_double_graphic_heading_pane_g1

0xc97b,	// (0x00082b61) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xc97b,	// (0x00082b61) hc_cl_list_double_graphic_heading_pane_g2

0xc98f,	// (0x00082b75) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xc98f,	// (0x00082b75) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x00085c94) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x00085c94) hc_cl_list_double_graphic_heading_pane_g

0xc9a3,	// (0x00082b89) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xc9a3,	// (0x00082b89) hc_cl_list_double_graphic_heading_pane_t1

0xc9b8,	// (0x00082b9e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xc9b8,	// (0x00082b9e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x00085c9b) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x00085c9b) hc_cl_list_double_graphic_heading_pane_t

0xc9d5,	// (0x00082bbb) vid4_progress_pane_g1

0xc9e5,	// (0x00082bcb) vid4_progress_pane_g2

0xc9f5,	// (0x00082bdb) vid4_progress_pane_g3

0xca07,	// (0x00082bed) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x00085ca0) vid4_progress_pane_g

0xca1f,	// (0x00082c05) vid4_progress_pane_t1

0xca35,	// (0x00082c1b) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x00085cab) vid4_progress_pane_t

0xca5f,	// (0x00082c45) wait_bar_pane_cp07

0x2078,	// (0x0007825e) blid_firmament_pane_ParamLimits

0x20bb,	// (0x000782a1) popup_blid_sat_info2_window_g1

0x20df,	// (0x000782c5) popup_blid_sat_info2_window_t3

0x20ed,	// (0x000782d3) popup_blid_sat_info2_window_t4

0x20fb,	// (0x000782e1) popup_blid_sat_info2_window_t5

0x2109,	// (0x000782ef) popup_blid_sat_info2_window_t6

0x2119,	// (0x000782ff) popup_blid_sat_info2_window_t7

0x2127,	// (0x0007830d) popup_blid_sat_info2_window_t8

0x2135,	// (0x0007831b) popup_blid_sat_info2_window_t9

0x2143,	// (0x00078329) popup_blid_sat_info2_window_t10

0x2205,	// (0x000783eb) aid_firma_cardinal_ParamLimits

0x2219,	// (0x000783ff) blid_firmament_pane_t1_ParamLimits

0x2230,	// (0x00078416) blid_firmament_pane_t2_ParamLimits

0x2247,	// (0x0007842d) blid_firmament_pane_t3_ParamLimits

0x225e,	// (0x00078444) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x000858b9) blid_firmament_pane_t_ParamLimits

0x2275,	// (0x0007845b) blid_sat_info_pane_ParamLimits

0xf0af,	// (0x00085295) main_cam_set_pane_ParamLimits

0xb000,	// (0x000811e6) aid_size_cell_colour_35_ParamLimits

0xb01a,	// (0x00081200) aid_size_cell_colour_112_ParamLimits

0xb031,	// (0x00081217) aid_size_cell_effect_ParamLimits

0xf0af,	// (0x00085295) bg_tb_trans_pane_cp02_ParamLimits

0x054d,	// (0x00076733) heading_imed_pane_ParamLimits

0xb04b,	// (0x00081231) listscroll_imed_pane_ParamLimits

0x1497,	// (0x0007767d) popup_call2_audio_first_window_g5_ParamLimits

0x1497,	// (0x0007767d) popup_call2_audio_first_window_g5

0xb751,	// (0x00081937) aid_size_touch_image3_arrow_left_ParamLimits

0xb751,	// (0x00081937) aid_size_touch_image3_arrow_left

0xb767,	// (0x0008194d) aid_size_touch_image3_arrow_right_ParamLimits

0xb767,	// (0x0008194d) aid_size_touch_image3_arrow_right

0xca4a,	// (0x00082c30) vid4_progress_pane_t3

0xb2e9,	// (0x000814cf) main_hwr_training_symbol_option_pane_ParamLimits

0xb2e9,	// (0x000814cf) main_hwr_training_symbol_option_pane

0x2ac9,	// (0x00078caf) popup_hwr_training_preview_window_ParamLimits

0x2ac9,	// (0x00078caf) popup_hwr_training_preview_window

0xb34a,	// (0x00081530) hwr_training_navi_pane_g5_ParamLimits

0xb34a,	// (0x00081530) hwr_training_navi_pane_g5

0x2d0f,	// (0x00078ef5) popup_char_count_window

0x3e7f,	// (0x0007a065) bg_popup_sub_pane_cp20_ParamLimits

0xc52f,	// (0x00082715) list_vitu2_match_list_pane_ParamLimits

0xc53b,	// (0x00082721) vitu2_page_scroll_pane_ParamLimits

0xc53b,	// (0x00082721) vitu2_page_scroll_pane

0x31c9,	// (0x000793af) list_single_hwr_training_symbol_option_pane_ParamLimits

0x31c9,	// (0x000793af) list_single_hwr_training_symbol_option_pane

0x31dc,	// (0x000793c2) list_single_hwr_training_symbol_option_pane_g1

0x31e4,	// (0x000793ca) list_single_hwr_training_symbol_option_pane_t1

0x31f2,	// (0x000793d8) bg_button_pane_cp023

0x31fb,	// (0x000793e1) bg_button_pane_cp024

0xca95,	// (0x00082c7b) vitu2_page_scroll_pane_g1

0xca9d,	// (0x00082c83) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x00085cb2) vitu2_page_scroll_pane_g

0xcaa5,	// (0x00082c8b) vitu2_page_scroll_pane_t1

0x322e,	// (0x00079414) popup_char_count_window_g1

0x3237,	// (0x0007941d) popup_char_count_window_g2

0x3240,	// (0x00079426) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x00085cb7) popup_char_count_window_g

0x3249,	// (0x0007942f) popup_char_count_window_t1

0xe76f,	// (0x00084955) main_vded2_pane

0x27c0,	// (0x000789a6) aid_size_cell_imed_line

0x27ca,	// (0x000789b0) grid_imed_line_width_pane

0xbba2,	// (0x00081d88) vid4_indicators_pane_g4

0x3257,	// (0x0007943d) cell_imed_line_width_pane_ParamLimits

0x3257,	// (0x0007943d) cell_imed_line_width_pane

0x326b,	// (0x00079451) cell_imed_line_width_pane_g1

0x29c2,	// (0x00078ba8) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x00085cbe) cell_imed_line_width_pane_g

0xcab4,	// (0x00082c9a) main_vded2_pane_g1_ParamLimits

0xcab4,	// (0x00082c9a) main_vded2_pane_g1

0xcac1,	// (0x00082ca7) main_vded2_pane_g2_ParamLimits

0xcac1,	// (0x00082ca7) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x00085cc3) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x00085cc3) main_vded2_pane_g

0xcacf,	// (0x00082cb5) vded2_slider_pane_ParamLimits

0xcacf,	// (0x00082cb5) vded2_slider_pane

0xcadc,	// (0x00082cc2) aid_size_touch_vded2_end

0xcae6,	// (0x00082ccc) aid_size_touch_vded2_playhead

0x3274,	// (0x0007945a) aid_size_touch_vded2_start

0x327c,	// (0x00079462) vded2_slider_bg_pane

0x3285,	// (0x0007946b) vded2_slider_pane_g1

0x328e,	// (0x00079474) vded2_slider_pane_g2

0xcaee,	// (0x00082cd4) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x00085cc8) vded2_slider_pane_g

0x3296,	// (0x0007947c) vded2_slider_bg_pane_g1

0x329f,	// (0x00079485) vded2_slider_bg_pane_g2

0x32a8,	// (0x0007948e) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x00085ccf) vded2_slider_bg_pane_g

0x93d2,	// (0x0007f5b8) aid_postcard_touch_down_pane_ParamLimits

0x93d2,	// (0x0007f5b8) aid_postcard_touch_down_pane

0x93e2,	// (0x0007f5c8) aid_postcard_touch_up_pane_ParamLimits

0x93e2,	// (0x0007f5c8) aid_postcard_touch_up_pane

0xe76f,	// (0x00084955) main_blid2_pane

0x9b05,	// (0x0007fceb) popup_blid2_search_window

0xe76f,	// (0x00084955) blid2_gps_pane

0xe76f,	// (0x00084955) blid2_navig_pane

0xe76f,	// (0x00084955) blid2_search_pane

0xe76f,	// (0x00084955) blid2_tripm_pane

0xcaf7,	// (0x00082cdd) blid2_search_pane_g1_ParamLimits

0xcaf7,	// (0x00082cdd) blid2_search_pane_g1

0xcb07,	// (0x00082ced) blid2_search_pane_t1_ParamLimits

0xcb07,	// (0x00082ced) blid2_search_pane_t1

0xcb19,	// (0x00082cff) aid_size_cell_blid2_gps_ParamLimits

0xcb19,	// (0x00082cff) aid_size_cell_blid2_gps

0xcb29,	// (0x00082d0f) blid2_gps_pane_g1_ParamLimits

0xcb29,	// (0x00082d0f) blid2_gps_pane_g1

0xcb35,	// (0x00082d1b) grid_blid2_satellite_pane_ParamLimits

0xcb35,	// (0x00082d1b) grid_blid2_satellite_pane

0xcb45,	// (0x00082d2b) blid2_navig_pane_g1_ParamLimits

0xcb45,	// (0x00082d2b) blid2_navig_pane_g1

0xcb51,	// (0x00082d37) blid2_navig_pane_t1_ParamLimits

0xcb51,	// (0x00082d37) blid2_navig_pane_t1

0xcb63,	// (0x00082d49) blid2_navig_pane_t2_ParamLimits

0xcb63,	// (0x00082d49) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x00085cd6) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x00085cd6) blid2_navig_pane_t

0xcb75,	// (0x00082d5b) blid2_navig_ring_pane_ParamLimits

0xcb75,	// (0x00082d5b) blid2_navig_ring_pane

0xcb85,	// (0x00082d6b) blid2_speed_pane_ParamLimits

0xcb85,	// (0x00082d6b) blid2_speed_pane

0xcb91,	// (0x00082d77) blid2_tripm_pane_g1_ParamLimits

0xcb91,	// (0x00082d77) blid2_tripm_pane_g1

0xcba1,	// (0x00082d87) blid2_tripm_pane_g2_ParamLimits

0xcba1,	// (0x00082d87) blid2_tripm_pane_g2

0xcbad,	// (0x00082d93) blid2_tripm_pane_g3_ParamLimits

0xcbad,	// (0x00082d93) blid2_tripm_pane_g3

0xcbb9,	// (0x00082d9f) blid2_tripm_pane_g4_ParamLimits

0xcbb9,	// (0x00082d9f) blid2_tripm_pane_g4

0xcbc5,	// (0x00082dab) blid2_tripm_pane_g5_ParamLimits

0xcbc5,	// (0x00082dab) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x00085cdb) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x00085cdb) blid2_tripm_pane_g

0xcbe1,	// (0x00082dc7) blid2_tripm_pane_t1_ParamLimits

0xcbe1,	// (0x00082dc7) blid2_tripm_pane_t1

0xcbf5,	// (0x00082ddb) blid2_tripm_pane_t2_ParamLimits

0xcbf5,	// (0x00082ddb) blid2_tripm_pane_t2

0xcc07,	// (0x00082ded) blid2_tripm_pane_t3_ParamLimits

0xcc07,	// (0x00082ded) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x00085ce8) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x00085ce8) blid2_tripm_pane_t

0xcc39,	// (0x00082e1f) cell_blid2_satellite_pane_ParamLimits

0xcc39,	// (0x00082e1f) cell_blid2_satellite_pane

0xcc53,	// (0x00082e39) cell_blid2_satellite_pane_g1

0x32b1,	// (0x00079497) cell_blid2_satellite_pane_t1

0x2285,	// (0x0007846b) blid2_speed_pane_g1

0x32bf,	// (0x000794a5) blid2_speed_pane_t1

0x32cd,	// (0x000794b3) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x00085cf1) blid2_speed_pane_t

0x2285,	// (0x0007846b) blid2_navig_ring_pane_g1

0xcc5c,	// (0x00082e42) blid2_navig_ring_pane_g2

0xcc64,	// (0x00082e4a) blid2_navig_ring_pane_g3

0xcc6c,	// (0x00082e52) blid2_navig_ring_pane_g4

0xcc74,	// (0x00082e5a) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x00085cf6) blid2_navig_ring_pane_g

0xe76f,	// (0x00084955) bg_popup_window_pane_cp011

0x32db,	// (0x000794c1) popup_blid2_search_window_g1

0x32e3,	// (0x000794c9) popup_blid2_search_window_t1

0x32f1,	// (0x000794d7) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x00085d01) popup_blid2_search_window_t

0x014d,	// (0x00076333) main_browser_pane_g1

0xeec3,	// (0x000850a9) main_browser_pane_ParamLimits

0xf0af,	// (0x00085295) bg_button_pane_cp011_ParamLimits

0xbe10,	// (0x00081ff6) cell_vitu2_function_pane_g1_ParamLimits

0x1e71,	// (0x00078057) bg_popup_sub_pane_cp22_ParamLimits

0x59d4,	// (0x0007bbba) input_focus_pane_cp08_ParamLimits

0xc6c6,	// (0x000828ac) popup_vitu2_query_button_pane_ParamLimits

0xc6c6,	// (0x000828ac) popup_vitu2_query_button_pane

0x59eb,	// (0x0007bbd1) popup_vitu2_query_input_button_pane

0x2f80,	// (0x00079166) popup_vitu2_query_window_g1_ParamLimits

0x59f5,	// (0x0007bbdb) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x00085c02) popup_vitu2_query_window_g_ParamLimits

0xe76f,	// (0x00084955) bg_button_pane_cp026

0xcc7c,	// (0x00082e62) popup_vitu2_query_input_button_pane_g1

0xe76f,	// (0x00084955) bg_button_pane_cp025

0x32ff,	// (0x000794e5) popup_vitu2_query_button_pane_t1

0xa563,	// (0x00080749) main_mp3_pane_t6

0xa573,	// (0x00080759) popup_slider_window_cp01

0xba7f,	// (0x00081c65) cam4_battery_pane

0xbb5f,	// (0x00081d45) cam4_battery_pane_cp02

0xc9cd,	// (0x00082bb3) cam4_battery_pane_cp01

0xc9cd,	// (0x00082bb3) cam4_battery_pane_cp03

0x2285,	// (0x0007846b) cam4_battery_pane_g1

0x2bc7,	// (0x00078dad) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x00085d06) cam4_battery_pane_g

0x2151,	// (0x00078337) popup_blid_sat_info2_window_t11

0x08b4,	// (0x00076a9a) aid_size_touch_mv_arrow_left_ParamLimits

0x08dd,	// (0x00076ac3) aid_size_touch_mv_arrow_right_ParamLimits

0x093b,	// (0x00076b21) navi_pane_g1_ParamLimits

0x0947,	// (0x00076b2d) navi_pane_g2_ParamLimits

0x0975,	// (0x00076b5b) navi_pane_g3_ParamLimits

0xf3e5,	// (0x000855cb) navi_pane_g_ParamLimits

0x8e48,	// (0x0007f02e) navi_pane_mv_t1_ParamLimits

0xb057,	// (0x0008123d) grid_imed_effect_pane_ParamLimits

0x7900,	// (0x0007dae6) aid_placing_vt_slider_lsc

0x009c,	// (0x00076282) aid_placing_vt_slider_prt

0xf0af,	// (0x00085295) bg_tb_trans_pane_cp01_ParamLimits

0x2411,	// (0x000785f7) popup_image_details_window_g1_ParamLimits

0x2424,	// (0x0007860a) popup_image_details_window_g2_ParamLimits

0x2439,	// (0x0007861f) popup_image_details_window_g3_ParamLimits

0x2439,	// (0x0007861f) popup_image_details_window_g3

0xf718,	// (0x000858fe) popup_image_details_window_g_ParamLimits

0x244d,	// (0x00078633) popup_image_details_window_t1_ParamLimits

0x245f,	// (0x00078645) popup_image_details_window_t2_ParamLimits

0x2478,	// (0x0007865e) popup_image_details_window_t3_ParamLimits

0x248c,	// (0x00078672) popup_image_details_window_t4_ParamLimits

0x24a7,	// (0x0007868d) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x00085905) popup_image_details_window_t_ParamLimits

0xc8f1,	// (0x00082ad7) cl_header_name_pane_ParamLimits

0xc8f1,	// (0x00082ad7) cl_header_name_pane

0xcc84,	// (0x00082e6a) cl_header_name_pane_t1_ParamLimits

0xcc84,	// (0x00082e6a) cl_header_name_pane_t1

0xcc9b,	// (0x00082e81) cl_header_name_pane_t2_ParamLimits

0xcc9b,	// (0x00082e81) cl_header_name_pane_t2

0xccc5,	// (0x00082eab) cl_header_name_pane_t3_ParamLimits

0xccc5,	// (0x00082eab) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x00085d0b) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x00085d0b) cl_header_name_pane_t

0x0a04,	// (0x00076bea) navi_pane_mv_g2_ParamLimits

0x2ce9,	// (0x00078ecf) field_vitu2_entry_pane_g1_ParamLimits

0x2cf5,	// (0x00078edb) field_vitu2_entry_pane_g2_ParamLimits

0x2d01,	// (0x00078ee7) field_vitu2_entry_pane_g3_ParamLimits

0x2d01,	// (0x00078ee7) field_vitu2_entry_pane_g3

0xf91b,	// (0x00085b01) field_vitu2_entry_pane_g_ParamLimits

0xbd9b,	// (0x00081f81) cell_vitu2_itu_pane_g1_ParamLimits

0xbdab,	// (0x00081f91) cell_vitu2_itu_pane_g2_ParamLimits

0xbdab,	// (0x00081f91) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x00085b0d) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x00085b0d) cell_vitu2_itu_pane_g

0xf0af,	// (0x00085295) bg_vkb2_func_pane_cp05_ParamLimits

0xf0af,	// (0x00085295) bg_vkb2_func_pane_cp05

0xf0af,	// (0x00085295) bg_vkb2_func_pane_cp03

0xf0af,	// (0x00085295) bg_vkb2_func_pane_cp04

0xf0af,	// (0x00085295) bg_vkb2_func_pane_cp10_ParamLimits

0xf0af,	// (0x00085295) bg_vkb2_func_pane_cp10

0x5baa,	// (0x0007bd90) bg_vkb2_func_pane_cp08

0xc89b,	// (0x00082a81) bg_vkb2_func_pane_cp06

0xc8a9,	// (0x00082a8f) bg_vkb2_func_pane_cp07

0x3204,	// (0x000793ea) bg_vkb2_func_pane_cp11_ParamLimits

0x3204,	// (0x000793ea) bg_vkb2_func_pane_cp11

0x3219,	// (0x000793ff) bg_vkb2_func_pane_cp12_ParamLimits

0x3219,	// (0x000793ff) bg_vkb2_func_pane_cp12

0xe76f,	// (0x00084955) bg_vkb2_func_pane_cp09

0x2d21,	// (0x00078f07) bg_vkb2_func_pane_g1

0x025e,	// (0x00076444) bg_vkb2_func_pane_g2

0x2d29,	// (0x00078f0f) bg_vkb2_func_pane_g3

0x2d31,	// (0x00078f17) bg_vkb2_func_pane_g4

0x2f45,	// (0x0007912b) bg_vkb2_func_pane_g5

0x2d49,	// (0x00078f2f) bg_vkb2_func_pane_g6

0x2d51,	// (0x00078f37) bg_vkb2_func_pane_g7

0x2d41,	// (0x00078f27) bg_vkb2_func_pane_g8

0x023e,	// (0x00076424) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x00085d12) bg_vkb2_func_pane_g

0xcbd3,	// (0x00082db9) blid2_tripm_pane_g6_ParamLimits

0xcbd3,	// (0x00082db9) blid2_tripm_pane_g6

0x2b81,	// (0x00078d67) mp4_progress_pane_g1

0xcc2d,	// (0x00082e13) blid2_tripm_values_pane_ParamLimits

0xcc2d,	// (0x00082e13) blid2_tripm_values_pane

0xccea,	// (0x00082ed0) blid2_tripm_values_pane_t1

0xccf8,	// (0x00082ede) blid2_tripm_values_pane_t2

0xcd06,	// (0x00082eec) blid2_tripm_values_pane_t3

0xcd14,	// (0x00082efa) blid2_tripm_values_pane_t4

0xcd22,	// (0x00082f08) blid2_tripm_values_pane_t5

0xcd30,	// (0x00082f16) blid2_tripm_values_pane_t6

0xcd3e,	// (0x00082f24) blid2_tripm_values_pane_t7

0xcd4c,	// (0x00082f32) blid2_tripm_values_pane_t8

0xcd5a,	// (0x00082f40) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x00085d25) blid2_tripm_values_pane_t

0x7940,	// (0x0007db26) call_video_pane_t1_ParamLimits

0x7961,	// (0x0007db47) call_video_pane_t2_ParamLimits

0xf26e,	// (0x00085454) call_video_pane_t_ParamLimits

0x57a3,	// (0x0007b989) msg_header_pane_g1_ParamLimits

0x0bf4,	// (0x00076dda) msg_header_pane_g2_ParamLimits

0x0bf4,	// (0x00076dda) msg_header_pane_g2

0x0001,

0xf488,	// (0x0008566e) msg_header_pane_g_ParamLimits

0xf488,	// (0x0008566e) msg_header_pane_g

0xeec3,	// (0x000850a9) main_clock2_pane_ParamLimits

0xadf0,	// (0x00080fd6) grid_clock2_toolbar_pane_ParamLimits

0xadf0,	// (0x00080fd6) grid_clock2_toolbar_pane

0xadf0,	// (0x00080fd6) listscroll_clock2_pane_ParamLimits

0xadf0,	// (0x00080fd6) listscroll_clock2_pane

0xae94,	// (0x0008107a) main_clock2_pane_t3_ParamLimits

0xae94,	// (0x0008107a) main_clock2_pane_t3

0xaea6,	// (0x0008108c) main_clock2_pane_t4_ParamLimits

0xaea6,	// (0x0008108c) main_clock2_pane_t4

0x330d,	// (0x000794f3) cell_clock2_toolbar_pane

0x3315,	// (0x000794fb) cell_clock2_toolbar_pane_cp01

0x3315,	// (0x000794fb) cell_clock2_toolbar_pane_cp02

0x331d,	// (0x00079503) cell_clock2_toolbar_pane_cp03

0x3325,	// (0x0007950b) list_clock2_pane

0x082a,	// (0x00076a10) scroll_pane_cp10

0x332d,	// (0x00079513) list_single_clock2_pane_ParamLimits

0x332d,	// (0x00079513) list_single_clock2_pane

0x0a6b,	// (0x00076c51) list_highlight_pane_cp08

0x333a,	// (0x00079520) list_single_clock2_pane_t1

0x3348,	// (0x0007952e) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x00085d38) list_single_clock2_pane_t

0xe76f,	// (0x00084955) bg_button_pane_cp10

0x3356,	// (0x0007953c) cell_clock2_toolbar_pane_g1

0x9334,	// (0x0007f51a) aid_main_viewer_pane_g1_ParamLimits

0x9334,	// (0x0007f51a) aid_main_viewer_pane_g1

0x9340,	// (0x0007f526) aid_main_viewer_pane_g2_ParamLimits

0x9340,	// (0x0007f526) aid_main_viewer_pane_g2

0x934c,	// (0x0007f532) aid_main_viewer_pane_g3_ParamLimits

0x934c,	// (0x0007f532) aid_main_viewer_pane_g3

0x935d,	// (0x0007f543) aid_main_viewer_pane_g4_ParamLimits

0x935d,	// (0x0007f543) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0008567f) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0008567f) aid_main_viewer_pane_g

0x9add,	// (0x0007fcc3) main_calc_pane_ParamLimits

0x9aea,	// (0x0007fcd0) main_dialer2_pane_ParamLimits

0xe76f,	// (0x00084955) main_cam6_pane

0xe76f,	// (0x00084955) main_vid6_pane

0xadfc,	// (0x00080fe2) listscroll_gen_pane_cp06_ParamLimits

0xadfc,	// (0x00080fe2) listscroll_gen_pane_cp06

0xaeb8,	// (0x0008109e) main_clock2_pane_t5_ParamLimits

0xaeb8,	// (0x0008109e) main_clock2_pane_t5

0xaf01,	// (0x000810e7) aid_call2_pane_cp10_ParamLimits

0xaf13,	// (0x000810f9) aid_call_pane_cp10_ParamLimits

0x08a8,	// (0x00076a8e) popup_clock_analogue_window_cp10_g1_ParamLimits

0x08a8,	// (0x00076a8e) popup_clock_analogue_window_cp10_g2_ParamLimits

0xaf25,	// (0x0008110b) popup_clock_analogue_window_cp10_g3_ParamLimits

0xaf25,	// (0x0008110b) popup_clock_analogue_window_cp10_g4_ParamLimits

0x08a8,	// (0x00076a8e) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x000859ba) popup_clock_analogue_window_cp10_g_ParamLimits

0xaf37,	// (0x0008111d) popup_clock_analogue_window_cp10_t1_ParamLimits

0xb6fe,	// (0x000818e4) cell_dialer2_keypad_pane_g2_ParamLimits

0xb6fe,	// (0x000818e4) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x00085aa0) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x00085aa0) cell_dialer2_keypad_pane_g

0xb71a,	// (0x00081900) cell_dialer2_keypad_pane_t1

0xc0db,	// (0x000822c1) main_cset_text2_pane_ParamLimits

0xc0db,	// (0x000822c1) main_cset_text2_pane

0x316c,	// (0x00079352) area_vitu2_query_pane_g1_ParamLimits

0x5ad5,	// (0x0007bcbb) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x00085c55) area_vitu2_query_pane_g_ParamLimits

0x5b86,	// (0x0007bd6c) area_vitu2_query_pane_t7_ParamLimits

0x5b86,	// (0x0007bd6c) area_vitu2_query_pane_t7

0xc89b,	// (0x00082a81) bg_button_pane_cp018_ParamLimits

0xc8a9,	// (0x00082a8f) bg_button_pane_cp021_ParamLimits

0x5baa,	// (0x0007bd90) bg_button_pane_cp022_ParamLimits

0x5baa,	// (0x0007bd90) bg_vkb2_func_pane_cp08_ParamLimits

0xc89b,	// (0x00082a81) bg_vkb2_func_pane_cp06_ParamLimits

0xc8a9,	// (0x00082a8f) bg_vkb2_func_pane_cp07_ParamLimits

0x5bbb,	// (0x0007bda1) input_focus_pane_cp09_ParamLimits

0xcd68,	// (0x00082f4e) cam6_autofocus_pane_ParamLimits

0xcd68,	// (0x00082f4e) cam6_autofocus_pane

0xcd8a,	// (0x00082f70) cam6_image_uncrop_pane_ParamLimits

0xcd8a,	// (0x00082f70) cam6_image_uncrop_pane

0xcdb7,	// (0x00082f9d) cam6_indi_pane_ParamLimits

0xcdb7,	// (0x00082f9d) cam6_indi_pane

0xcdd1,	// (0x00082fb7) cam6_mode_pane_ParamLimits

0xcdd1,	// (0x00082fb7) cam6_mode_pane

0xcde5,	// (0x00082fcb) cam6_timer_pane_ParamLimits

0xcde5,	// (0x00082fcb) cam6_timer_pane

0xcdf1,	// (0x00082fd7) cam6_zoom_pane_ParamLimits

0xcdf1,	// (0x00082fd7) cam6_zoom_pane

0xce09,	// (0x00082fef) cam6_mode_pane_g1_ParamLimits

0xce09,	// (0x00082fef) cam6_mode_pane_g1

0xce15,	// (0x00082ffb) cam6_mode_pane_g2_ParamLimits

0xce15,	// (0x00082ffb) cam6_mode_pane_g2

0xce21,	// (0x00083007) cam6_mode_pane_g3_ParamLimits

0xce21,	// (0x00083007) cam6_mode_pane_g3

0xce2d,	// (0x00083013) cam6_mode_pane_g4_ParamLimits

0xce2d,	// (0x00083013) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x00085d3d) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x00085d3d) cam6_mode_pane_g

0x335e,	// (0x00079544) bg_tb_trans_pane_cp08_ParamLimits

0x335e,	// (0x00079544) bg_tb_trans_pane_cp08

0x336c,	// (0x00079552) cam6_battery_pane_ParamLimits

0x336c,	// (0x00079552) cam6_battery_pane

0x3382,	// (0x00079568) cam6_indi_pane_g1_ParamLimits

0x3382,	// (0x00079568) cam6_indi_pane_g1

0x3394,	// (0x0007957a) cam6_indi_pane_g2_ParamLimits

0x3394,	// (0x0007957a) cam6_indi_pane_g2

0x33a6,	// (0x0007958c) cam6_indi_pane_g3_ParamLimits

0x33a6,	// (0x0007958c) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x00085d46) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x00085d46) cam6_indi_pane_g

0x33b8,	// (0x0007959e) cam6_indi_pane_t1_ParamLimits

0x33b8,	// (0x0007959e) cam6_indi_pane_t1

0xbbd7,	// (0x00081dbd) cam6_autofocus_pane_g1

0xbbdf,	// (0x00081dc5) cam6_autofocus_pane_g2

0xbbe7,	// (0x00081dcd) cam6_autofocus_pane_g3

0xbbef,	// (0x00081dd5) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x00085d4d) cam6_autofocus_pane_g

0x33de,	// (0x000795c4) cam6_timer_pane_g1

0x33e6,	// (0x000795cc) cam6_timer_pane_t1

0x33f4,	// (0x000795da) cam6_zoom_cont_pane

0x33fc,	// (0x000795e2) cam6_zoom_pane_g1

0x3404,	// (0x000795ea) cam6_zoom_pane_g2

0xce39,	// (0x0008301f) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x00085d56) cam6_zoom_pane_g

0x2285,	// (0x0007846b) cam6_battery_pane_g1

0x2285,	// (0x0007846b) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x000858c2) cam6_battery_pane_g

0x3439,	// (0x0007961f) cam6_zoom_cont_pane_g1

0x3442,	// (0x00079628) cam6_zoom_cont_pane_g2

0x344b,	// (0x00079631) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x00085d5d) cam6_zoom_cont_pane_g

0xce56,	// (0x0008303c) cam6_mode_pane_cp_ParamLimits

0xce56,	// (0x0008303c) cam6_mode_pane_cp

0xcdf1,	// (0x00082fd7) cam6_zoom_pane_cp_ParamLimits

0xcdf1,	// (0x00082fd7) cam6_zoom_pane_cp

0xce6a,	// (0x00083050) vid6_image_uncrop_cif_pane_ParamLimits

0xce6a,	// (0x00083050) vid6_image_uncrop_cif_pane

0xce96,	// (0x0008307c) vid6_image_uncrop_nhd_pane_ParamLimits

0xce96,	// (0x0008307c) vid6_image_uncrop_nhd_pane

0xcd8a,	// (0x00082f70) vid6_image_uncrop_vga_pane_ParamLimits

0xcd8a,	// (0x00082f70) vid6_image_uncrop_vga_pane

0xceb3,	// (0x00083099) vid6_image_uncrop_wvga_pane_ParamLimits

0xceb3,	// (0x00083099) vid6_image_uncrop_wvga_pane

0xced0,	// (0x000830b6) vid6_indi_pane_ParamLimits

0xced0,	// (0x000830b6) vid6_indi_pane

0x335e,	// (0x00079544) bg_tb_trans_pane_cp09_ParamLimits

0x335e,	// (0x00079544) bg_tb_trans_pane_cp09

0x3463,	// (0x00079649) cam6_battery_pane_cp_ParamLimits

0x3463,	// (0x00079649) cam6_battery_pane_cp

0x346f,	// (0x00079655) vid6_indi_pane_g1_ParamLimits

0x346f,	// (0x00079655) vid6_indi_pane_g1

0x3481,	// (0x00079667) vid6_indi_pane_g2_ParamLimits

0x3481,	// (0x00079667) vid6_indi_pane_g2

0x3493,	// (0x00079679) vid6_indi_pane_g3_ParamLimits

0x3493,	// (0x00079679) vid6_indi_pane_g3

0x34a8,	// (0x0007968e) vid6_indi_pane_g4_ParamLimits

0x34a8,	// (0x0007968e) vid6_indi_pane_g4

0x34bd,	// (0x000796a3) vid6_indi_pane_g5_ParamLimits

0x34bd,	// (0x000796a3) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x00085d64) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x00085d64) vid6_indi_pane_g

0x34d7,	// (0x000796bd) vid6_indi_pane_t1_ParamLimits

0x34d7,	// (0x000796bd) vid6_indi_pane_t1

0x34ed,	// (0x000796d3) vid6_indi_pane_t2_ParamLimits

0x34ed,	// (0x000796d3) vid6_indi_pane_t2

0x3515,	// (0x000796fb) vid6_indi_pane_t3_ParamLimits

0x3515,	// (0x000796fb) vid6_indi_pane_t3

0x353d,	// (0x00079723) vid6_indi_pane_t4_ParamLimits

0x353d,	// (0x00079723) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x00085d6f) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x00085d6f) vid6_indi_pane_t

0x3561,	// (0x00079747) wait_bar_pane_cp08

0xcef5,	// (0x000830db) main_cset_text2_pane_t1_ParamLimits

0xcef5,	// (0x000830db) main_cset_text2_pane_t1

0xce41,	// (0x00083027) listscroll_gen_pane_cp06_t1_ParamLimits

0xce41,	// (0x00083027) listscroll_gen_pane_cp06_t1

0xe76f,	// (0x00084955) main_cam6_set_pane

0x24f1,	// (0x000786d7) bg_tb_trans_pane_cp06_ParamLimits

0xba87,	// (0x00081c6d) cam4_indicators_pane_g1_ParamLimits

0xba98,	// (0x00081c7e) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x00085add) cam4_indicators_pane_g_ParamLimits

0xbab6,	// (0x00081c9c) cam4_indicators_pane_t1_ParamLimits

0xf0af,	// (0x00085295) bg_tb_trans_pane_cp07_ParamLimits

0xbb69,	// (0x00081d4f) vid4_indicators_pane_g1_ParamLimits

0xbb7d,	// (0x00081d63) vid4_indicators_pane_g2_ParamLimits

0xbb91,	// (0x00081d77) vid4_indicators_pane_g3_ParamLimits

0xbba2,	// (0x00081d88) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x00085aef) vid4_indicators_pane_g_ParamLimits

0xbbc0,	// (0x00081da6) vid4_indicators_pane_t1_ParamLimits

0xc9d5,	// (0x00082bbb) vid4_progress_pane_g1_ParamLimits

0xc9e5,	// (0x00082bcb) vid4_progress_pane_g2_ParamLimits

0xc9f5,	// (0x00082bdb) vid4_progress_pane_g3_ParamLimits

0xca07,	// (0x00082bed) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x00085ca0) vid4_progress_pane_g_ParamLimits

0xca1f,	// (0x00082c05) vid4_progress_pane_t1_ParamLimits

0xca35,	// (0x00082c1b) vid4_progress_pane_t2_ParamLimits

0xca4a,	// (0x00082c30) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x00085cab) vid4_progress_pane_t_ParamLimits

0xca5f,	// (0x00082c45) wait_bar_pane_cp07_ParamLimits

0xcf28,	// (0x0008310e) main_cam6_set_pane_g2_ParamLimits

0xcf28,	// (0x0008310e) main_cam6_set_pane_g2

0xcf34,	// (0x0008311a) main_cset6_listscroll_pane_ParamLimits

0xcf34,	// (0x0008311a) main_cset6_listscroll_pane

0xcf5f,	// (0x00083145) main_cset6_slider_pane_ParamLimits

0xcf5f,	// (0x00083145) main_cset6_slider_pane

0xcf6b,	// (0x00083151) main_cset6_text2_pane_ParamLimits

0xcf6b,	// (0x00083151) main_cset6_text2_pane

0x3570,	// (0x00079756) main_cset6_text_pane

0x3578,	// (0x0007975e) main_cset_list_pane_copy1_ParamLimits

0x3578,	// (0x0007975e) main_cset_list_pane_copy1

0x3588,	// (0x0007976e) scroll_pane_cp028_copy1

0xcf7e,	// (0x00083164) cset_list_set_pane_copy1

0xcf91,	// (0x00083177) aid_position_infowindow_above_copy1

0xcf99,	// (0x0008317f) aid_position_infowindow_below_copy1

0xcfa1,	// (0x00083187) cset_list_set_pane_g1_copy1

0x5958,	// (0x0007bb3e) cset_list_set_pane_g3_copy1_ParamLimits

0x5958,	// (0x0007bb3e) cset_list_set_pane_g3_copy1

0x5967,	// (0x0007bb4d) cset_list_set_pane_t1_copy1_ParamLimits

0x5967,	// (0x0007bb4d) cset_list_set_pane_t1_copy1

0xf0af,	// (0x00085295) list_highlight_pane_cp021_copy1_ParamLimits

0xf0af,	// (0x00085295) list_highlight_pane_cp021_copy1

0x3591,	// (0x00079777) cset6_slider_pane_ParamLimits

0x3591,	// (0x00079777) cset6_slider_pane

0x35bd,	// (0x000797a3) main_cset6_slider_pane_g1_ParamLimits

0x35bd,	// (0x000797a3) main_cset6_slider_pane_g1

0xcfa9,	// (0x0008318f) main_cset6_slider_pane_g2_ParamLimits

0xcfa9,	// (0x0008318f) main_cset6_slider_pane_g2

0x35e5,	// (0x000797cb) main_cset6_slider_pane_g3_ParamLimits

0x35e5,	// (0x000797cb) main_cset6_slider_pane_g3

0xcfd1,	// (0x000831b7) main_cset6_slider_pane_g4_ParamLimits

0xcfd1,	// (0x000831b7) main_cset6_slider_pane_g4

0xcfdd,	// (0x000831c3) main_cset6_slider_pane_g5_ParamLimits

0xcfdd,	// (0x000831c3) main_cset6_slider_pane_g5

0x2e50,	// (0x00079036) main_cset6_slider_pane_g7_ParamLimits

0x2e50,	// (0x00079036) main_cset6_slider_pane_g7

0x2e5c,	// (0x00079042) main_cset6_slider_pane_g8_ParamLimits

0x2e5c,	// (0x00079042) main_cset6_slider_pane_g8

0xcfeb,	// (0x000831d1) main_cset6_slider_pane_g9_ParamLimits

0xcfeb,	// (0x000831d1) main_cset6_slider_pane_g9

0xcff7,	// (0x000831dd) main_cset6_slider_pane_g10_ParamLimits

0xcff7,	// (0x000831dd) main_cset6_slider_pane_g10

0xd003,	// (0x000831e9) main_cset6_slider_pane_g11_ParamLimits

0xd003,	// (0x000831e9) main_cset6_slider_pane_g11

0xd00f,	// (0x000831f5) main_cset6_slider_pane_g12_ParamLimits

0xd00f,	// (0x000831f5) main_cset6_slider_pane_g12

0xd01b,	// (0x00083201) main_cset6_slider_pane_g13_ParamLimits

0xd01b,	// (0x00083201) main_cset6_slider_pane_g13

0xd027,	// (0x0008320d) main_cset6_slider_pane_g14_ParamLimits

0xd027,	// (0x0008320d) main_cset6_slider_pane_g14

0xd033,	// (0x00083219) main_cset6_slider_pane_g15_ParamLimits

0xd033,	// (0x00083219) main_cset6_slider_pane_g15

0xd04b,	// (0x00083231) main_cset6_slider_pane_g16_ParamLimits

0xd04b,	// (0x00083231) main_cset6_slider_pane_g16

0xd059,	// (0x0008323f) main_cset6_slider_pane_g17_ParamLimits

0xd059,	// (0x0008323f) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x00085d78) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x00085d78) main_cset6_slider_pane_g

0x35f1,	// (0x000797d7) main_cset6_slider_pane_t1_ParamLimits

0x35f1,	// (0x000797d7) main_cset6_slider_pane_t1

0xd07f,	// (0x00083265) main_cset6_slider_pane_t2_ParamLimits

0xd07f,	// (0x00083265) main_cset6_slider_pane_t2

0xd0aa,	// (0x00083290) main_cset6_slider_pane_t3_ParamLimits

0xd0aa,	// (0x00083290) main_cset6_slider_pane_t3

0xd0d5,	// (0x000832bb) main_cset6_slider_pane_t4_ParamLimits

0xd0d5,	// (0x000832bb) main_cset6_slider_pane_t4

0xd100,	// (0x000832e6) main_cset6_slider_pane_t5_ParamLimits

0xd100,	// (0x000832e6) main_cset6_slider_pane_t5

0x3632,	// (0x00079818) main_cset6_slider_pane_t7_ParamLimits

0x3632,	// (0x00079818) main_cset6_slider_pane_t7

0xd12d,	// (0x00083313) main_cset6_slider_pane_t8_ParamLimits

0xd12d,	// (0x00083313) main_cset6_slider_pane_t8

0xd151,	// (0x00083337) main_cset6_slider_pane_t9_ParamLimits

0xd151,	// (0x00083337) main_cset6_slider_pane_t9

0xd175,	// (0x0008335b) main_cset6_slider_pane_t10_ParamLimits

0xd175,	// (0x0008335b) main_cset6_slider_pane_t10

0xd199,	// (0x0008337f) main_cset6_slider_pane_t11_ParamLimits

0xd199,	// (0x0008337f) main_cset6_slider_pane_t11

0x3668,	// (0x0007984e) main_cset6_slider_pane_t14_ParamLimits

0x3668,	// (0x0007984e) main_cset6_slider_pane_t14

0x36a1,	// (0x00079887) main_cset6_slider_pane_t15_ParamLimits

0x36a1,	// (0x00079887) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x00085d9d) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x00085d9d) main_cset6_slider_pane_t

0x340c,	// (0x000795f2) cset_slider_pane_g1_copy1

0x3415,	// (0x000795fb) cset_slider_pane_g2_copy1

0x341e,	// (0x00079604) cset_slider_pane_g3_copy1

0xe76f,	// (0x00084955) bg_popup_sub_pane_cp011_copy1

0x36da,	// (0x000798c0) main_cset_text_pane_g1_copy1

0x2f94,	// (0x0007917a) main_cset_text_pane_t1_copy1

0x2fa2,	// (0x00079188) main_cset_text_pane_t2_copy1

0x2fb0,	// (0x00079196) main_cset_text_pane_t3_copy1

0x2fbe,	// (0x000791a4) main_cset_text_pane_t4_copy1

0x2fcc,	// (0x000791b2) main_cset_text_pane_t5_copy1

0x36e2,	// (0x000798c8) main_cset_text_pane_t6_copy1

0x2fe8,	// (0x000791ce) main_cset_text_pane_t7_copy1

0xd1d8,	// (0x000833be) main_cset_text2_pane_t1_copy1

0xf0af,	// (0x00085295) main_ncimui_pane

0x9b3b,	// (0x0007fd21) popup_query_ncimui_window_ParamLimits

0x9b3b,	// (0x0007fd21) popup_query_ncimui_window

0xa6cc,	// (0x000808b2) field_cale_ev2_pane_g4_ParamLimits

0xa6cc,	// (0x000808b2) field_cale_ev2_pane_g4

0xb41e,	// (0x00081604) cell_video_dialer_keypad_pane_g2_ParamLimits

0xb41e,	// (0x00081604) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x00085a7b) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x00085a7b) cell_video_dialer_keypad_pane_g

0xb436,	// (0x0008161c) cell_video_dialer_keypad_pane_t1

0xe76f,	// (0x00084955) bg_popup_window_pane_cp012

0x06f7,	// (0x000768dd) heading_pane_cp06

0x370e,	// (0x000798f4) ncim_query_content_pane

0xe76f,	// (0x00084955) bg_popup_heading_pane_cp01

0x3716,	// (0x000798fc) ncim_heading_pane_t1

0x3724,	// (0x0007990a) ncim_indicator_popup_pane

0x3736,	// (0x0007991c) ncim_query_button_pane

0x374a,	// (0x00079930) ncim_query_content_pane_t1

0x375c,	// (0x00079942) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x00085de1) ncim_query_content_pane_t

0x3796,	// (0x0007997c) ncim_query_list_pane

0x37a8,	// (0x0007998e) ncim_query_popup_pane

0x3724,	// (0x0007990a) ncim_indicator_popup_pane_ParamLimits

0xd32b,	// (0x00083511) ncim_query_content_pane_g1_ParamLimits

0xd32b,	// (0x00083511) ncim_query_content_pane_g1

0x374a,	// (0x00079930) ncim_query_content_pane_t1_ParamLimits

0x375c,	// (0x00079942) ncim_query_content_pane_t2_ParamLimits

0xd337,	// (0x0008351d) ncim_query_content_pane_t3_ParamLimits

0xd337,	// (0x0008351d) ncim_query_content_pane_t3

0xd354,	// (0x0008353a) ncim_query_content_pane_t4_ParamLimits

0xd354,	// (0x0008353a) ncim_query_content_pane_t4

0xd371,	// (0x00083557) ncim_query_content_pane_t5_ParamLimits

0xd371,	// (0x00083557) ncim_query_content_pane_t5

0x376e,	// (0x00079954) ncim_query_content_pane_t6_ParamLimits

0x376e,	// (0x00079954) ncim_query_content_pane_t6

0xfbfb,	// (0x00085de1) ncim_query_content_pane_t_ParamLimits

0x3796,	// (0x0007997c) ncim_query_list_pane_ParamLimits

0x37a8,	// (0x0007998e) ncim_query_popup_pane_ParamLimits

0x37bc,	// (0x000799a2) wait_bar_pane_cp04

0xe76f,	// (0x00084955) input_focus_pane_cp011

0x37c4,	// (0x000799aa) ncim_query_popup_pane_t1

0x37d2,	// (0x000799b8) ncim_list_query_list_pane_ParamLimits

0x37d2,	// (0x000799b8) ncim_list_query_list_pane

0xe76f,	// (0x00084955) bg_button_pane_cp027

0x37df,	// (0x000799c5) ncim_query_button_pane_g1

0xe76f,	// (0x00084955) list_highlight_pane_cp012

0x37e9,	// (0x000799cf) ncim_list_query_list_pane_g1

0x37f1,	// (0x000799d7) ncim_list_query_list_pane_t1

0xbaa7,	// (0x00081c8d) cam4_indicators_pane_g3_ParamLimits

0xbaa7,	// (0x00081c8d) cam4_indicators_pane_g3

0xbbae,	// (0x00081d94) vid4_indicators_pane_g5_ParamLimits

0xbbae,	// (0x00081d94) vid4_indicators_pane_g5

0xca13,	// (0x00082bf9) vid4_progress_pane_g5_ParamLimits

0xca13,	// (0x00082bf9) vid4_progress_pane_g5

0xd217,	// (0x000833fd) main_ncimui_pane_g1

0xd27f,	// (0x00083465) ncimui_group_query_pane_ParamLimits

0xd27f,	// (0x00083465) ncimui_group_query_pane

0xd2c7,	// (0x000834ad) ncimui_list_pane_ParamLimits

0xd2c7,	// (0x000834ad) ncimui_list_pane

0xd2ee,	// (0x000834d4) ncimui_text_pane_ParamLimits

0xd2ee,	// (0x000834d4) ncimui_text_pane

0xd38e,	// (0x00083574) ncimui_text_pane_t1_ParamLimits

0xd38e,	// (0x00083574) ncimui_text_pane_t1

0x37ff,	// (0x000799e5) ncimui_list_single_graphic_pane_ParamLimits

0x37ff,	// (0x000799e5) ncimui_list_single_graphic_pane

0xd3ad,	// (0x00083593) ncimui_query_pane_ParamLimits

0xd3ad,	// (0x00083593) ncimui_query_pane

0xe76f,	// (0x00084955) list_highlight_pane_cp013

0x380f,	// (0x000799f5) ncim_list_query_list_pane_t1_copy1

0x37e9,	// (0x000799cf) ncim_list_single_graphic_pane_g1

0x381d,	// (0x00079a03) ncim_query_button_pane_cp01

0x3829,	// (0x00079a0f) ncim_query_entry_pane_ParamLimits

0x3829,	// (0x00079a0f) ncim_query_entry_pane

0x383c,	// (0x00079a22) ncimui_query_pane_g1

0x3848,	// (0x00079a2e) ncimui_query_pane_t1_ParamLimits

0x3848,	// (0x00079a2e) ncimui_query_pane_t1

0xf0af,	// (0x00085295) input_focus_pane_cp012

0x3861,	// (0x00079a47) ncim_query_entry_pane_t1

0xeec3,	// (0x000850a9) main_im_pane_ParamLimits

0xf0af,	// (0x00085295) main_mobtv_pane_ParamLimits

0xf0af,	// (0x00085295) main_mobtv_pane

0xd067,	// (0x0008324d) main_cset6_slider_pane_g18_ParamLimits

0xd067,	// (0x0008324d) main_cset6_slider_pane_g18

0xd073,	// (0x00083259) main_cset6_slider_pane_g19_ParamLimits

0xd073,	// (0x00083259) main_cset6_slider_pane_g19

0x2d01,	// (0x00078ee7) bg_main_mobtv_pane_ParamLimits

0x2d01,	// (0x00078ee7) bg_main_mobtv_pane

0xd3c0,	// (0x000835a6) main_mobtv_info_pane

0xd3cb,	// (0x000835b1) main_mobtv_loading_pane_ParamLimits

0xd3cb,	// (0x000835b1) main_mobtv_loading_pane

0x3873,	// (0x00079a59) main_mobtv_pg_channel_list_pane

0x387d,	// (0x00079a63) main_mobtv_pg_hdr_pane

0xd3d8,	// (0x000835be) main_mobtv_programe_curr_pane_ParamLimits

0xd3d8,	// (0x000835be) main_mobtv_programe_curr_pane

0xd3e5,	// (0x000835cb) main_mobtv_programe_next_pane_ParamLimits

0xd3e5,	// (0x000835cb) main_mobtv_programe_next_pane

0x3886,	// (0x00079a6c) popup_mobtv_noti_window

0x2285,	// (0x0007846b) main_tv_pg_hdr_pane_g1

0x388e,	// (0x00079a74) main_tv_pg_hdr_pane_g2

0x3896,	// (0x00079a7c) main_tv_pg_hdr_pane_g3

0x389e,	// (0x00079a84) main_tv_pg_hdr_pane_g4

0x38a6,	// (0x00079a8c) main_tv_pg_hdr_pane_g5

0x38b0,	// (0x00079a96) main_tv_pg_hdr_pane_g6

0x38ba,	// (0x00079aa0) main_tv_pg_hdr_pane_g7

0x38c4,	// (0x00079aaa) main_tv_pg_hdr_pane_g8

0x38ce,	// (0x00079ab4) main_tv_pg_hdr_pane_g9

0x38d8,	// (0x00079abe) main_tv_pg_hdr_pane_g10

0x38e2,	// (0x00079ac8) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x00085dee) main_tv_pg_hdr_pane_g

0x38ec,	// (0x00079ad2) main_tv_pg_hdr_pane_t1

0x38fa,	// (0x00079ae0) main_tv_pg_hdr_pane_t2

0x3908,	// (0x00079aee) main_tv_pg_hdr_pane_t3

0x3918,	// (0x00079afe) main_tv_pg_hdr_pane_t4

0x3928,	// (0x00079b0e) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x00085e05) main_tv_pg_hdr_pane_t

0x3938,	// (0x00079b1e) single_mobtv_pg_channel_pane_ParamLimits

0x3938,	// (0x00079b1e) single_mobtv_pg_channel_pane

0x394a,	// (0x00079b30) single_mobtv_pg_channel_table_pane

0x3953,	// (0x00079b39) single_mobtv_pg_channel_thumb_pane

0x395c,	// (0x00079b42) single_tv_pg_channel_pane_g1

0x3965,	// (0x00079b4b) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x00085e10) single_tv_pg_channel_pane_g

0x24f1,	// (0x000786d7) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x24f1,	// (0x000786d7) bg_single_mobtv_pg_channel_thumb_pane

0x396e,	// (0x00079b54) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x396e,	// (0x00079b54) single_mobtv_pg_channel_thumb_pane_g1

0x397c,	// (0x00079b62) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x397c,	// (0x00079b62) single_mobtv_pg_channel_thumb_pane_g2

0x3988,	// (0x00079b6e) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x3988,	// (0x00079b6e) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x00085e15) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x00085e15) single_mobtv_pg_channel_thumb_pane_g

0x3994,	// (0x00079b7a) single_mobtv_pg_channel_thumb_pane_t1

0x39a2,	// (0x00079b88) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x00085e1c) single_mobtv_pg_channel_thumb_pane_t

0x2285,	// (0x0007846b) bg_single_mobtv_pg_channel_table_pane_g1

0x2285,	// (0x0007846b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x000858c2) bg_single_mobtv_pg_channel_table_pane_g

0x39b0,	// (0x00079b96) single_mobtv_pg_channel_table_pane_t1

0x39be,	// (0x00079ba4) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x00085e21) single_mobtv_pg_channel_table_pane_t

0xd3fa,	// (0x000835e0) main_mobtv_info_pane_g1_ParamLimits

0xd3fa,	// (0x000835e0) main_mobtv_info_pane_g1

0xd416,	// (0x000835fc) main_mobtv_info_pane_t1_ParamLimits

0xd416,	// (0x000835fc) main_mobtv_info_pane_t1

0xd48e,	// (0x00083674) main_mobtv_info_pane_t2_ParamLimits

0xd48e,	// (0x00083674) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x00085e2b) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x00085e2b) main_mobtv_info_pane_t

0xd51d,	// (0x00083703) wait_bar_pane_cp05

0xd52f,	// (0x00083715) main_mobtv_loading_pane_g1_ParamLimits

0xd52f,	// (0x00083715) main_mobtv_loading_pane_g1

0xd53d,	// (0x00083723) main_mobtv_loading_pane_g2_ParamLimits

0xd53d,	// (0x00083723) main_mobtv_loading_pane_g2

0xd549,	// (0x0008372f) main_mobtv_loading_pane_g3_ParamLimits

0xd549,	// (0x0008372f) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x00085e32) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x00085e32) main_mobtv_loading_pane_g

0x39cc,	// (0x00079bb2) main_mobtv_loading_pane_t1_ParamLimits

0x39cc,	// (0x00079bb2) main_mobtv_loading_pane_t1

0x39e4,	// (0x00079bca) main_mobtv_loading_pane_t2_ParamLimits

0x39e4,	// (0x00079bca) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x00085e39) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x00085e39) main_mobtv_loading_pane_t

0xd557,	// (0x0008373d) wait_bar_pane_cp06_ParamLimits

0xd557,	// (0x0008373d) wait_bar_pane_cp06

0x3a08,	// (0x00079bee) main_mobtv_programe_curr_pane_t1

0x3a16,	// (0x00079bfc) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x00085e3e) main_mobtv_programe_curr_pane_t

0x3a24,	// (0x00079c0a) main_mobtv_programe_next_pane_t1

0x3a32,	// (0x00079c18) main_mobtv_programe_next_pane_t2

0x3a40,	// (0x00079c26) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x00085e43) main_mobtv_programe_next_pane_t

0xe76f,	// (0x00084955) bg_popup_mobtv_noti_window_pane

0x3a4e,	// (0x00079c34) popup_mobtv_noti_window_g1

0x3a56,	// (0x00079c3c) popup_mobtv_noti_window_t1

0x3a64,	// (0x00079c4a) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x00085e4a) popup_mobtv_noti_window_t

0x2285,	// (0x0007846b) bg_popup_mobtv_noti_window_pane_g1

0xe76f,	// (0x00084955) sc_clock_pane

0xe76f,	// (0x00084955) main_fs_bigclock_pane

0xcc1b,	// (0x00082e01) blid2_tripm_pane_t4_ParamLimits

0xcc1b,	// (0x00082e01) blid2_tripm_pane_t4

0xd563,	// (0x00083749) sc_clock_pane_g1_ParamLimits

0xd563,	// (0x00083749) sc_clock_pane_g1

0xd571,	// (0x00083757) sc_clock_pane_t1_ParamLimits

0xd571,	// (0x00083757) sc_clock_pane_t1

0xd584,	// (0x0008376a) sc_clock_pane_t2_ParamLimits

0xd584,	// (0x0008376a) sc_clock_pane_t2

0xd596,	// (0x0008377c) sc_clock_pane_t3_ParamLimits

0xd596,	// (0x0008377c) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x00085e4f) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x00085e4f) sc_clock_pane_t

0xde71,	// (0x00084057) main_fs_bigclock_indicator_pane_ParamLimits

0xde71,	// (0x00084057) main_fs_bigclock_indicator_pane

0xd61f,	// (0x00083805) main_fs_bigclock_pane_g1_ParamLimits

0xd61f,	// (0x00083805) main_fs_bigclock_pane_g1

0xde7d,	// (0x00084063) main_fs_bigclock_pane_t1_ParamLimits

0xde7d,	// (0x00084063) main_fs_bigclock_pane_t1

0xde8f,	// (0x00084075) main_fs_bigclock_pane_t2_ParamLimits

0xde8f,	// (0x00084075) main_fs_bigclock_pane_t2

0xdea3,	// (0x00084089) main_fs_bigclock_pane_t3_ParamLimits

0xdea3,	// (0x00084089) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x00086059) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x00086059) main_fs_bigclock_pane_t

0x4297,	// (0x0007a47d) main_fs_bigclock_indicator_pane_g1

0x373e,	// (0x00079924) ncim_query_content_pane_g2_ParamLimits

0x373e,	// (0x00079924) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x00085ddc) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x00085ddc) ncim_query_content_pane_g

0xd5aa,	// (0x00083790) sc_clock_pane_t4_ParamLimits

0xd5aa,	// (0x00083790) sc_clock_pane_t4

0xf0af,	// (0x00085295) main_radioblah_pane

0x2c74,	// (0x00078e5a) cell_call4_button_pane_t1_copy1_ParamLimits

0x2c74,	// (0x00078e5a) cell_call4_button_pane_t1_copy1

0xd231,	// (0x00083417) main_ncimui_pane_t1_ParamLimits

0xd231,	// (0x00083417) main_ncimui_pane_t1

0xd24b,	// (0x00083431) main_ncimui_pane_t2_ParamLimits

0xd24b,	// (0x00083431) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x00085dd5) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x00085dd5) main_ncimui_pane_t

0x3ba8,	// (0x00079d8e) main_radioblah_anim_pane_ParamLimits

0x3ba8,	// (0x00079d8e) main_radioblah_anim_pane

0x3bb9,	// (0x00079d9f) main_radioblah_info_pane_ParamLimits

0x3bb9,	// (0x00079d9f) main_radioblah_info_pane

0x3bcd,	// (0x00079db3) main_radioblah_pane_t1_ParamLimits

0x3bcd,	// (0x00079db3) main_radioblah_pane_t1

0x3be9,	// (0x00079dcf) main_radioblah_pane_t2_ParamLimits

0x3be9,	// (0x00079dcf) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x00085e70) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x00085e70) main_radioblah_pane_t

0xd671,	// (0x00083857) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd671,	// (0x00083857) main_radioblah_rocker_ctrl_pane

0x3c31,	// (0x00079e17) main_radioblah_info_pane_t1_ParamLimits

0x3c31,	// (0x00079e17) main_radioblah_info_pane_t1

0xd6b6,	// (0x0008389c) main_radioblah_info_pane_t2_ParamLimits

0xd6b6,	// (0x0008389c) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x00085e79) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x00085e79) main_radioblah_info_pane_t

0x2285,	// (0x0007846b) main_radioblah_rocker_ctrl_pane_g1

0xd766,	// (0x0008394c) main_radioblah_rocker_ctrl_pane_g2

0xd76e,	// (0x00083954) main_radioblah_rocker_ctrl_pane_g3

0xd776,	// (0x0008395c) main_radioblah_rocker_ctrl_pane_g4

0xd77e,	// (0x00083964) main_radioblah_rocker_ctrl_pane_g5

0xd786,	// (0x0008396c) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x00085e82) main_radioblah_rocker_ctrl_pane_g

0xd1d8,	// (0x000833be) main_cset_text2_pane_t1_copy1_ParamLimits

0xb9d5,	// (0x00081bbb) cam4_image_uncrop_qvga_pane

0xbb1c,	// (0x00081d02) vid4_image_uncrop_qcif_pane

0xcda9,	// (0x00082f8f) cam6_image_uncrop_qvga_pane_ParamLimits

0xcda9,	// (0x00082f8f) cam6_image_uncrop_qvga_pane

0x3453,	// (0x00079639) vid6_image_uncrop_qcif_pane_ParamLimits

0x3453,	// (0x00079639) vid6_image_uncrop_qcif_pane

0xe76f,	// (0x00084955) bg_popup_preview_window_pane_cp03

0x36f0,	// (0x000798d6) list_cset_text2_pane

0x36f8,	// (0x000798de) main_cset6_text2_pane_g1

0x3700,	// (0x000798e6) main_cset6_text2_pane_t1

0xd78e,	// (0x00083974) list_cset_text2_pane_t1_ParamLimits

0xd78e,	// (0x00083974) list_cset_text2_pane_t1

0xf0af,	// (0x00085295) main_radioblah_pane_ParamLimits

0xd509,	// (0x000836ef) main_mobtv_info_pane_t3_ParamLimits

0xd509,	// (0x000836ef) main_mobtv_info_pane_t3

0xd65f,	// (0x00083845) main_radioblah_pane_g1

0xd68a,	// (0x00083870) main_radioblah_info_pane_g1

0xd70b,	// (0x000838f1) main_radioblah_info_pane_t3_ParamLimits

0xd70b,	// (0x000838f1) main_radioblah_info_pane_t3

0x89a4,	// (0x0007eb8a) highlight_cell_cale_month_pane_ParamLimits

0x89a4,	// (0x0007eb8a) highlight_cell_cale_month_pane

0xe76f,	// (0x00084955) main_phob_fisheye_pane

0x25ed,	// (0x000787d3) scroll_pane_cp0031_ParamLimits

0x25ed,	// (0x000787d3) scroll_pane_cp0031

0x3561,	// (0x00079747) wait_bar_pane_cp08_ParamLimits

0xcf7e,	// (0x00083164) cset_list_set_pane_copy1_ParamLimits

0x3c6b,	// (0x00079e51) highlight_cell_cale_month_pane_g1

0xd7ab,	// (0x00083991) highlight_cell_cale_month_pane_t1

0x31c0,	// (0x000793a6) list_gen_pane_cp01

0x2e3b,	// (0x00079021) scroll_pane_01

0x5cb0,	// (0x0007be96) list_single_double_fisheye_pane

0x5cb9,	// (0x0007be9f) list_double_fisheye_pane_g1_ParamLimits

0x5cb9,	// (0x0007be9f) list_double_fisheye_pane_g1

0x5cc5,	// (0x0007beab) list_double_fisheye_pane_g2_ParamLimits

0x5cc5,	// (0x0007beab) list_double_fisheye_pane_g2

0x5cd9,	// (0x0007bebf) list_double_fisheye_pane_g3_ParamLimits

0x5cd9,	// (0x0007bebf) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x00085e8f) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x00085e8f) list_double_fisheye_pane_g

0x5d02,	// (0x0007bee8) list_double_fisheye_pane_t1_ParamLimits

0x5d02,	// (0x0007bee8) list_double_fisheye_pane_t1

0x5d1d,	// (0x0007bf03) list_double_fisheye_pane_t2_ParamLimits

0x5d1d,	// (0x0007bf03) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x00085e9a) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x00085e9a) list_double_fisheye_pane_t

0xe76f,	// (0x00084955) main_call5_pane

0xd5d0,	// (0x000837b6) sc_swipe_pane_ParamLimits

0xd5d0,	// (0x000837b6) sc_swipe_pane

0xd7c5,	// (0x000839ab) call5_image_pane_ParamLimits

0xd7c5,	// (0x000839ab) call5_image_pane

0xd7d5,	// (0x000839bb) call5_swipe_1_pane_ParamLimits

0xd7d5,	// (0x000839bb) call5_swipe_1_pane

0xd7e1,	// (0x000839c7) call5_swipe_2_pane_ParamLimits

0xd7e1,	// (0x000839c7) call5_swipe_2_pane

0xd7fb,	// (0x000839e1) popup_call5_audio_first_window_ParamLimits

0xd7fb,	// (0x000839e1) popup_call5_audio_first_window

0x24f1,	// (0x000786d7) call5_swipe_1_pane_g1_ParamLimits

0x24f1,	// (0x000786d7) call5_swipe_1_pane_g1

0x3c73,	// (0x00079e59) call5_swipe_1_pane_g2_ParamLimits

0x3c73,	// (0x00079e59) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x00085e9f) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x00085e9f) call5_swipe_1_pane_g

0x3c7f,	// (0x00079e65) call5_swipe_1_pane_t1_ParamLimits

0x3c7f,	// (0x00079e65) call5_swipe_1_pane_t1

0x24f1,	// (0x000786d7) call5_swipe_2_pane_g1_ParamLimits

0x24f1,	// (0x000786d7) call5_swipe_2_pane_g1

0x3c94,	// (0x00079e7a) call5_swipe_2_pane_g2_ParamLimits

0x3c94,	// (0x00079e7a) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x00085ea4) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x00085ea4) call5_swipe_2_pane_g

0x3ca0,	// (0x00079e86) call5_swipe_2_pane_t1_ParamLimits

0x3ca0,	// (0x00079e86) call5_swipe_2_pane_t1

0x3cb5,	// (0x00079e9b) sc_swipe_pane_g1_ParamLimits

0x3cb5,	// (0x00079e9b) sc_swipe_pane_g1

0x3cc2,	// (0x00079ea8) sc_swipe_pane_g2_ParamLimits

0x3cc2,	// (0x00079ea8) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x00085ea9) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x00085ea9) sc_swipe_pane_g

0x3cce,	// (0x00079eb4) sc_swipe_pane_t1_ParamLimits

0x3cce,	// (0x00079eb4) sc_swipe_pane_t1

0xe76f,	// (0x00084955) main_cmail_launcher_pane

0xd809,	// (0x000839ef) aid_size_cell_cmail_l_ParamLimits

0xd809,	// (0x000839ef) aid_size_cell_cmail_l

0xd819,	// (0x000839ff) grid_cmail_l_pane_ParamLimits

0xd819,	// (0x000839ff) grid_cmail_l_pane

0xd829,	// (0x00083a0f) cell_cmail_l_pane_ParamLimits

0xd829,	// (0x00083a0f) cell_cmail_l_pane

0xd83d,	// (0x00083a23) cell_cmail_l_pane_g1_ParamLimits

0xd83d,	// (0x00083a23) cell_cmail_l_pane_g1

0xd849,	// (0x00083a2f) cell_cmail_l_pane_t1_ParamLimits

0xd849,	// (0x00083a2f) cell_cmail_l_pane_t1

0x3ce3,	// (0x00079ec9) cell_cmail_l_pane_t2_ParamLimits

0x3ce3,	// (0x00079ec9) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x00085eae) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x00085eae) cell_cmail_l_pane_t

0xf0af,	// (0x00085295) grid_highlight_pane_cp018_ParamLimits

0xf0af,	// (0x00085295) grid_highlight_pane_cp018

0x68dc,	// (0x0007cac2) main2_pane_ParamLimits

0x68dc,	// (0x0007cac2) main2_pane

0xef5c,	// (0x00085142) popup_sp_fs_action_menu_bg_pane_g1

0xef64,	// (0x0008514a) popup_sp_fs_action_menu_bg_pane_g2

0xef6c,	// (0x00085152) popup_sp_fs_action_menu_bg_pane_g3

0xef74,	// (0x0008515a) popup_sp_fs_action_menu_bg_pane_g4

0xef7c,	// (0x00085162) popup_sp_fs_action_menu_bg_pane_g5

0xef84,	// (0x0008516a) popup_sp_fs_action_menu_bg_pane_g6

0xef8c,	// (0x00085172) popup_sp_fs_action_menu_bg_pane_g7

0xef94,	// (0x0008517a) popup_sp_fs_action_menu_bg_pane_g8

0xef9c,	// (0x00085182) popup_sp_fs_action_menu_bg_pane_g9

0xefa4,	// (0x0008518a) popup_sp_fs_action_menu_bg_pane_g10

0xefa4,	// (0x0008518a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0008536c) popup_sp_fs_action_menu_bg_pane_g

0x554c,	// (0x0007b732) list_medium_line_x2_t3_g3_g1_ParamLimits

0x554c,	// (0x0007b732) list_medium_line_x2_t3_g3_g1

0x7872,	// (0x0007da58) list_medium_line_x2_t3_g3_g2_ParamLimits

0x7872,	// (0x0007da58) list_medium_line_x2_t3_g3_g2

0x5558,	// (0x0007b73e) list_medium_line_x2_t3_g3_g3_ParamLimits

0x5558,	// (0x0007b73e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0008541e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0008541e) list_medium_line_x2_t3_g3_g

0x5564,	// (0x0007b74a) list_medium_line_x2_t3_g3_t1_ParamLimits

0x5564,	// (0x0007b74a) list_medium_line_x2_t3_g3_t1

0x5579,	// (0x0007b75f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x5579,	// (0x0007b75f) list_medium_line_x2_t3_g3_t2

0x558b,	// (0x0007b771) list_medium_line_x2_t3_g3_t3_ParamLimits

0x558b,	// (0x0007b771) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x00085425) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x00085425) list_medium_line_x2_t3_g3_t

0x554c,	// (0x0007b732) list_medium_line_x2_t3_g2_g1_ParamLimits

0x554c,	// (0x0007b732) list_medium_line_x2_t3_g2_g1

0x5558,	// (0x0007b73e) list_medium_line_x2_t3_g2_g2_ParamLimits

0x5558,	// (0x0007b73e) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0008542c) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0008542c) list_medium_line_x2_t3_g2_g

0x55a0,	// (0x0007b786) list_medium_line_x2_t3_g2_t1_ParamLimits

0x55a0,	// (0x0007b786) list_medium_line_x2_t3_g2_t1

0x55b6,	// (0x0007b79c) list_medium_line_x2_t3_g2_t2_ParamLimits

0x55b6,	// (0x0007b79c) list_medium_line_x2_t3_g2_t2

0x55c8,	// (0x0007b7ae) list_medium_line_x2_t3_g2_t3_ParamLimits

0x55c8,	// (0x0007b7ae) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x00085431) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x00085431) list_medium_line_x2_t3_g2_t

0x554c,	// (0x0007b732) list_medium_line_x2_t4_g4_g1_ParamLimits

0x554c,	// (0x0007b732) list_medium_line_x2_t4_g4_g1

0x787e,	// (0x0007da64) list_medium_line_x2_t4_g4_g2_ParamLimits

0x787e,	// (0x0007da64) list_medium_line_x2_t4_g4_g2

0x7872,	// (0x0007da58) list_medium_line_x2_t4_g4_g3_ParamLimits

0x7872,	// (0x0007da58) list_medium_line_x2_t4_g4_g3

0x55e5,	// (0x0007b7cb) list_medium_line_x2_t4_g4_g4_ParamLimits

0x55e5,	// (0x0007b7cb) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x00085438) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x00085438) list_medium_line_x2_t4_g4_g

0x55f1,	// (0x0007b7d7) list_medium_line_x2_t4_g4_t1_ParamLimits

0x55f1,	// (0x0007b7d7) list_medium_line_x2_t4_g4_t1

0x5608,	// (0x0007b7ee) list_medium_line_x2_t4_g4_t2_ParamLimits

0x5608,	// (0x0007b7ee) list_medium_line_x2_t4_g4_t2

0x561d,	// (0x0007b803) list_medium_line_x2_t4_g4_t3_ParamLimits

0x561d,	// (0x0007b803) list_medium_line_x2_t4_g4_t3

0x562f,	// (0x0007b815) list_medium_line_x2_t4_g4_t4_ParamLimits

0x562f,	// (0x0007b815) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x00085441) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x00085441) list_medium_line_x2_t4_g4_t

0x554c,	// (0x0007b732) list_medium_line_x2_t2_g4_g1_ParamLimits

0x554c,	// (0x0007b732) list_medium_line_x2_t2_g4_g1

0x787e,	// (0x0007da64) list_medium_line_x2_t2_g4_g2_ParamLimits

0x787e,	// (0x0007da64) list_medium_line_x2_t2_g4_g2

0x7872,	// (0x0007da58) list_medium_line_x2_t2_g4_g3_ParamLimits

0x7872,	// (0x0007da58) list_medium_line_x2_t2_g4_g3

0x5558,	// (0x0007b73e) list_medium_line_x2_t2_g4_g4_ParamLimits

0x5558,	// (0x0007b73e) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000854a8) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000854a8) list_medium_line_x2_t2_g4_g

0x5641,	// (0x0007b827) list_medium_line_x2_t2_g4_t1_ParamLimits

0x5641,	// (0x0007b827) list_medium_line_x2_t2_g4_t1

0x558b,	// (0x0007b771) list_medium_line_x2_t2_g4_t2_ParamLimits

0x558b,	// (0x0007b771) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000854b1) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000854b1) list_medium_line_x2_t2_g4_t

0x554c,	// (0x0007b732) list_medium_line_x2_t2_g3_g1_ParamLimits

0x554c,	// (0x0007b732) list_medium_line_x2_t2_g3_g1

0x7872,	// (0x0007da58) list_medium_line_x2_t2_g3_g2_ParamLimits

0x7872,	// (0x0007da58) list_medium_line_x2_t2_g3_g2

0x5558,	// (0x0007b73e) list_medium_line_x2_t2_g3_g3_ParamLimits

0x5558,	// (0x0007b73e) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0008541e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0008541e) list_medium_line_x2_t2_g3_g

0x5656,	// (0x0007b83c) list_medium_line_x2_t2_g3_t1_ParamLimits

0x5656,	// (0x0007b83c) list_medium_line_x2_t2_g3_t1

0x558b,	// (0x0007b771) list_medium_line_x2_t2_g3_t2_ParamLimits

0x558b,	// (0x0007b771) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000854b6) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000854b6) list_medium_line_x2_t2_g3_t

0x8b70,	// (0x0007ed56) main_sp_fs_list_pane_ParamLimits

0x8b70,	// (0x0007ed56) main_sp_fs_list_pane

0x8b7c,	// (0x0007ed62) sp_fs_scroll_pane_ParamLimits

0x8b7c,	// (0x0007ed62) sp_fs_scroll_pane

0x566b,	// (0x0007b851) list_medium_line_x2_t3_t1

0x567b,	// (0x0007b861) list_medium_line_x2_t3_t2

0x5689,	// (0x0007b86f) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x00085501) list_medium_line_x2_t3_t

0x5697,	// (0x0007b87d) list_medium_line_x3_t4_t1

0x56a7,	// (0x0007b88d) list_medium_line_x3_t4_t2

0x56b5,	// (0x0007b89b) list_medium_line_x3_t4_t3

0x5689,	// (0x0007b86f) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x00085508) list_medium_line_x3_t4_t

0x56c3,	// (0x0007b8a9) list_medium_line_x4_t5_t1

0x56d3,	// (0x0007b8b9) list_medium_line_x4_t5_t2

0x56b5,	// (0x0007b89b) list_medium_line_x4_t5_t3

0x56e1,	// (0x0007b8c7) list_medium_line_x4_t5_t4

0x5689,	// (0x0007b86f) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x00085511) list_medium_line_x4_t5_t

0x554c,	// (0x0007b732) list_medium_line_t4_g4_g1_ParamLimits

0x554c,	// (0x0007b732) list_medium_line_t4_g4_g1

0x56ef,	// (0x0007b8d5) list_medium_line_t4_g4_g2_ParamLimits

0x56ef,	// (0x0007b8d5) list_medium_line_t4_g4_g2

0x56fb,	// (0x0007b8e1) list_medium_line_t4_g4_g3_ParamLimits

0x56fb,	// (0x0007b8e1) list_medium_line_t4_g4_g3

0x5558,	// (0x0007b73e) list_medium_line_t4_g4_g4_ParamLimits

0x5558,	// (0x0007b73e) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0008551c) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0008551c) list_medium_line_t4_g4_g

0x5707,	// (0x0007b8ed) list_medium_line_t4_g4_t1_ParamLimits

0x5707,	// (0x0007b8ed) list_medium_line_t4_g4_t1

0x571c,	// (0x0007b902) list_medium_line_t4_g4_t2_ParamLimits

0x571c,	// (0x0007b902) list_medium_line_t4_g4_t2

0x5731,	// (0x0007b917) list_medium_line_t4_g4_t3_ParamLimits

0x5731,	// (0x0007b917) list_medium_line_t4_g4_t3

0x558b,	// (0x0007b771) list_medium_line_t4_g4_t4_ParamLimits

0x558b,	// (0x0007b771) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x00085525) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x00085525) list_medium_line_t4_g4_t

0x8c89,	// (0x0007ee6f) chi_dic_find_pane_g1

0x9af8,	// (0x0007fcde) main_tport_pane

0x597c,	// (0x0007bb62) list_medium_line_plain_t1

0x598a,	// (0x0007bb70) list_medium_line_t2_g2_g1_ParamLimits

0x598a,	// (0x0007bb70) list_medium_line_t2_g2_g1

0xc567,	// (0x0008274d) list_medium_line_t2_g2_g2_ParamLimits

0xc567,	// (0x0008274d) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x00085be6) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x00085be6) list_medium_line_t2_g2_g

0x5996,	// (0x0007bb7c) list_medium_line_t2_g2_t1_ParamLimits

0x5996,	// (0x0007bb7c) list_medium_line_t2_g2_t1

0x59ad,	// (0x0007bb93) list_medium_line_t2_g2_t2_ParamLimits

0x59ad,	// (0x0007bb93) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x00085beb) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x00085beb) list_medium_line_t2_g2_t

0x5bcc,	// (0x0007bdb2) aid_sp_fs_list_icon_a_sm

0xca72,	// (0x00082c58) aid_sp_fs_list_icon_d

0x5bd4,	// (0x0007bdba) aid_sp_fs_text_primary

0x5bdd,	// (0x0007bdc3) aid_sp_fs_text_secondary

0xca7a,	// (0x00082c60) list_medium_line

0xca7a,	// (0x00082c60) list_medium_line_g2

0xca7a,	// (0x00082c60) list_medium_line_g3

0xca7a,	// (0x00082c60) list_medium_line_plain

0xca7a,	// (0x00082c60) list_medium_line_plain_t2

0xca7a,	// (0x00082c60) list_medium_line_plain_t3

0xca7a,	// (0x00082c60) list_medium_line_right_icon

0xca7a,	// (0x00082c60) list_medium_line_right_iconx2

0xca7a,	// (0x00082c60) list_medium_line_t2

0xca7a,	// (0x00082c60) list_medium_line_t2_g2

0xca7a,	// (0x00082c60) list_medium_line_t2_g3

0xca7a,	// (0x00082c60) list_medium_line_t2_right_icon

0xca7a,	// (0x00082c60) list_medium_line_t2_right_iconx2

0xca7a,	// (0x00082c60) list_medium_line_t3

0xca7a,	// (0x00082c60) list_medium_line_t3_g2

0xca7a,	// (0x00082c60) list_medium_line_t3_g3

0xca7a,	// (0x00082c60) list_medium_line_t3_right_iconx2

0xca83,	// (0x00082c69) list_medium_line_t4_g4

0xebca,	// (0x00084db0) list_medium_line_x2

0xebca,	// (0x00084db0) list_medium_line_x2_t2_g2

0xebca,	// (0x00084db0) list_medium_line_x2_t2_g3

0xebca,	// (0x00084db0) list_medium_line_x2_t2_g4

0xebca,	// (0x00084db0) list_medium_line_x2_t3

0xebca,	// (0x00084db0) list_medium_line_x2_t3_g2

0xebca,	// (0x00084db0) list_medium_line_x2_t3_g3

0xebca,	// (0x00084db0) list_medium_line_x2_t3_g4

0xebca,	// (0x00084db0) list_medium_line_x2_t4_g2

0xebca,	// (0x00084db0) list_medium_line_x2_t4_g4

0xca8c,	// (0x00082c72) list_medium_line_x3

0xca8c,	// (0x00082c72) list_medium_line_x3_t4

0xca8c,	// (0x00082c72) list_medium_line_x3_t4_g4

0xca83,	// (0x00082c69) list_medium_line_x4_t4

0xca83,	// (0x00082c69) list_medium_line_x4_t4_g7

0xca83,	// (0x00082c69) list_medium_line_x4_t5

0x5be6,	// (0x0007bdcc) list_single_fs_dyc_pane_ParamLimits

0x5be6,	// (0x0007bdcc) list_single_fs_dyc_pane

0x554c,	// (0x0007b732) list_medium_line_x4_t4_g7_g1_ParamLimits

0x554c,	// (0x0007b732) list_medium_line_x4_t4_g7_g1

0x5bfa,	// (0x0007bde0) list_medium_line_x4_t4_g7_g2_ParamLimits

0x5bfa,	// (0x0007bde0) list_medium_line_x4_t4_g7_g2

0xd1bd,	// (0x000833a3) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd1bd,	// (0x000833a3) list_medium_line_x4_t4_g7_g3

0xd1cc,	// (0x000833b2) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd1cc,	// (0x000833b2) list_medium_line_x4_t4_g7_g4

0x5c06,	// (0x0007bdec) list_medium_line_x4_t4_g7_g5_ParamLimits

0x5c06,	// (0x0007bdec) list_medium_line_x4_t4_g7_g5

0x5c15,	// (0x0007bdfb) list_medium_line_x4_t4_g7_g6_ParamLimits

0x5c15,	// (0x0007bdfb) list_medium_line_x4_t4_g7_g6

0x5c24,	// (0x0007be0a) list_medium_line_x4_t4_g7_g7_ParamLimits

0x5c24,	// (0x0007be0a) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x00085db6) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x00085db6) list_medium_line_x4_t4_g7_g

0x5c30,	// (0x0007be16) list_medium_line_x4_t4_g7_t1_ParamLimits

0x5c30,	// (0x0007be16) list_medium_line_x4_t4_g7_t1

0x5c45,	// (0x0007be2b) list_medium_line_x4_t4_g7_t2_ParamLimits

0x5c45,	// (0x0007be2b) list_medium_line_x4_t4_g7_t2

0x5c5a,	// (0x0007be40) list_medium_line_x4_t4_g7_t3_ParamLimits

0x5c5a,	// (0x0007be40) list_medium_line_x4_t4_g7_t3

0x5c6f,	// (0x0007be55) list_medium_line_x4_t4_g7_t4_ParamLimits

0x5c6f,	// (0x0007be55) list_medium_line_x4_t4_g7_t4

0x5c81,	// (0x0007be67) list_medium_line_x4_t4_g7_t5_ParamLimits

0x5c81,	// (0x0007be67) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x00085dc5) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x00085dc5) list_medium_line_x4_t4_g7_t

0x5c93,	// (0x0007be79) list_single_dyc_row_pane_ParamLimits

0x5c93,	// (0x0007be79) list_single_dyc_row_pane

0xd7b9,	// (0x0008399f) call5_gesture_pane_ParamLimits

0xd7b9,	// (0x0008399f) call5_gesture_pane

0xd7ed,	// (0x000839d3) call5_windows_pane_ParamLimits

0xd7ed,	// (0x000839d3) call5_windows_pane

0xd85f,	// (0x00083a45) call5_swipe_1_pane_cp_ParamLimits

0xd85f,	// (0x00083a45) call5_swipe_1_pane_cp

0xd86b,	// (0x00083a51) call5_swipe_2_pane_cp_ParamLimits

0xd86b,	// (0x00083a51) call5_swipe_2_pane_cp

0x0a6b,	// (0x00076c51) call5_image_pane_cp

0xd877,	// (0x00083a5d) popup_call5_audio_first_window_cp_ParamLimits

0xd877,	// (0x00083a5d) popup_call5_audio_first_window_cp

0x3cb5,	// (0x00079e9b) call5_swipe_1_pane_g1_cp_ParamLimits

0x3cb5,	// (0x00079e9b) call5_swipe_1_pane_g1_cp

0x3cf5,	// (0x00079edb) call5_swipe_1_pane_g2_cp

0x3cce,	// (0x00079eb4) call5_swipe_1_pane_t1_cp_ParamLimits

0x3cce,	// (0x00079eb4) call5_swipe_1_pane_t1_cp

0x3cb5,	// (0x00079e9b) call5_swipe_2_pane_g1_cp_ParamLimits

0x3cb5,	// (0x00079e9b) call5_swipe_2_pane_g1_cp

0x3cfd,	// (0x00079ee3) call5_swipe_2_pane_g2_cp

0x3d05,	// (0x00079eeb) call5_swipe_2_pane_t1_cp_ParamLimits

0x3d05,	// (0x00079eeb) call5_swipe_2_pane_t1_cp

0xf0af,	// (0x00085295) main_sp_fs_email_pane

0x3d1a,	// (0x00079f00) main_sp_fs_listscroll_pane_te

0xd885,	// (0x00083a6b) popup_sp_fs_action_menu_pane_ParamLimits

0xd885,	// (0x00083a6b) popup_sp_fs_action_menu_pane

0x2285,	// (0x0007846b) bg_sp_fs_ctrlbar_pane_g1

0x2884,	// (0x00078a6a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x2896,	// (0x00078a7c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x288d,	// (0x00078a73) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x2285,	// (0x0007846b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x00085eb3) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x206a,	// (0x00078250) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x206a,	// (0x00078250) bg_sp_fs_ctrlbar_ddmenu_pane

0x3d23,	// (0x00079f09) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x3d23,	// (0x00079f09) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x3d2f,	// (0x00079f15) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x3d2f,	// (0x00079f15) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x00085ebc) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x00085ebc) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3d3b,	// (0x00079f21) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3d3b,	// (0x00079f21) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xd8c9,	// (0x00083aaf) list_medium_line_t2_right_icon_g1

0x5d3f,	// (0x0007bf25) list_medium_line_t2_right_icon_t1

0x5d4f,	// (0x0007bf35) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x00085ec1) list_medium_line_t2_right_icon_t

0x1e71,	// (0x00078057) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1e71,	// (0x00078057) bg_sp_fs_ctrlbar_pane

0xd928,	// (0x00083b0e) main_sp_fs_ctrlbar_button_pane_cp01

0xd930,	// (0x00083b16) main_sp_fs_ctrlbar_ddmenu_pane

0x3d8d,	// (0x00079f73) main_sp_fs_ctrlbar_pane_g1

0x3d99,	// (0x00079f7f) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x00085ec6) main_sp_fs_ctrlbar_pane_g

0x3da5,	// (0x00079f8b) main_sp_fs_ctrlbar_pane_t1

0xd93a,	// (0x00083b20) main_sp_fs_ctrlbar_pane

0xd950,	// (0x00083b36) main_sp_fs_listscroll_pane_te_cp01

0x5d5d,	// (0x0007bf43) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x5d5d,	// (0x0007bf43) popup_sp_fs_action_menu_pane_cp01

0xf0af,	// (0x00085295) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf0af,	// (0x00085295) bg_sp_fs_highlight_list_pane_cp01

0x5d87,	// (0x0007bf6d) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x5d87,	// (0x0007bf6d) sp_fs_action_menu_list_gene_pane_g1

0x3dd5,	// (0x00079fbb) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x3dd5,	// (0x00079fbb) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x00085ed0) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x00085ed0) sp_fs_action_menu_list_gene_pane_g

0x5d96,	// (0x0007bf7c) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x5d96,	// (0x0007bf7c) sp_fs_action_menu_list_gene_pane_t1

0x5dae,	// (0x0007bf94) sp_fs_action_menu_list_gene_pane_ParamLimits

0x5dae,	// (0x0007bf94) sp_fs_action_menu_list_gene_pane

0x3de2,	// (0x00079fc8) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x3de2,	// (0x00079fc8) popup_sp_fs_action_menu_bg_pane

0x5dcf,	// (0x0007bfb5) sp_fs_action_menu_list_pane_ParamLimits

0x5dcf,	// (0x0007bfb5) sp_fs_action_menu_list_pane

0x5df1,	// (0x0007bfd7) sp_fs_scroll_pane_cp01_ParamLimits

0x5df1,	// (0x0007bfd7) sp_fs_scroll_pane_cp01

0x5e17,	// (0x0007bffd) list_medium_line_plain_t2_t1

0x5e27,	// (0x0007c00d) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x00085ed5) list_medium_line_plain_t2_t

0x5e35,	// (0x0007c01b) list_medium_line_plain_t3_t1

0x5e45,	// (0x0007c02b) list_medium_line_plain_t3_t2

0x5e53,	// (0x0007c039) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x00085eda) list_medium_line_plain_t3_t

0x554c,	// (0x0007b732) list_medium_line_x2_t2_g2_g1_ParamLimits

0x554c,	// (0x0007b732) list_medium_line_x2_t2_g2_g1

0x5558,	// (0x0007b73e) list_medium_line_x2_t2_g2_g2_ParamLimits

0x5558,	// (0x0007b73e) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0008542c) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0008542c) list_medium_line_x2_t2_g2_g

0x5707,	// (0x0007b8ed) list_medium_line_x2_t2_g2_t1_ParamLimits

0x5707,	// (0x0007b8ed) list_medium_line_x2_t2_g2_t1

0x558b,	// (0x0007b771) list_medium_line_x2_t2_g2_t2_ParamLimits

0x558b,	// (0x0007b771) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x00085ee1) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x00085ee1) list_medium_line_x2_t2_g2_t

0x554c,	// (0x0007b732) list_medium_line_x2_t4_g2_g1_ParamLimits

0x554c,	// (0x0007b732) list_medium_line_x2_t4_g2_g1

0x5e61,	// (0x0007c047) list_medium_line_x2_t4_g2_g2_ParamLimits

0x5e61,	// (0x0007c047) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x00085ee6) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x00085ee6) list_medium_line_x2_t4_g2_g

0x5e73,	// (0x0007c059) list_medium_line_x2_t4_g2_t1_ParamLimits

0x5e73,	// (0x0007c059) list_medium_line_x2_t4_g2_t1

0x5e8d,	// (0x0007c073) list_medium_line_x2_t4_g2_t2_ParamLimits

0x5e8d,	// (0x0007c073) list_medium_line_x2_t4_g2_t2

0x5ea2,	// (0x0007c088) list_medium_line_x2_t4_g2_t3_ParamLimits

0x5ea2,	// (0x0007c088) list_medium_line_x2_t4_g2_t3

0x558b,	// (0x0007b771) list_medium_line_x2_t4_g2_t4_ParamLimits

0x558b,	// (0x0007b771) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x00085eeb) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x00085eeb) list_medium_line_x2_t4_g2_t

0xd961,	// (0x00083b47) list_medium_line_t3_right_iconx2_g1

0xd8c9,	// (0x00083aaf) list_medium_line_t3_right_iconx2_g2

0x5eb7,	// (0x0007c09d) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x00085ef4) list_medium_line_t3_right_iconx2_g

0x5ebf,	// (0x0007c0a5) list_medium_line_t3_right_iconx2_t1

0x5ecf,	// (0x0007c0b5) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x00085efb) list_medium_line_t3_right_iconx2_t

0x554c,	// (0x0007b732) list_medium_line_x3_t4_g4_g1_ParamLimits

0x554c,	// (0x0007b732) list_medium_line_x3_t4_g4_g1

0x7872,	// (0x0007da58) list_medium_line_x3_t4_g4_g2_ParamLimits

0x7872,	// (0x0007da58) list_medium_line_x3_t4_g4_g2

0x56ef,	// (0x0007b8d5) list_medium_line_x3_t4_g4_g3_ParamLimits

0x56ef,	// (0x0007b8d5) list_medium_line_x3_t4_g4_g3

0xd969,	// (0x00083b4f) list_medium_line_x3_t4_g4_g4_ParamLimits

0xd969,	// (0x00083b4f) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x00085f00) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x00085f00) list_medium_line_x3_t4_g4_g

0x5edd,	// (0x0007c0c3) list_medium_line_x3_t4_g4_t1_ParamLimits

0x5edd,	// (0x0007c0c3) list_medium_line_x3_t4_g4_t1

0x5ef4,	// (0x0007c0da) list_medium_line_x3_t4_g4_t2_ParamLimits

0x5ef4,	// (0x0007c0da) list_medium_line_x3_t4_g4_t2

0x571c,	// (0x0007b902) list_medium_line_x3_t4_g4_t3_ParamLimits

0x571c,	// (0x0007b902) list_medium_line_x3_t4_g4_t3

0x5f09,	// (0x0007c0ef) list_medium_line_x3_t4_g4_t4_ParamLimits

0x5f09,	// (0x0007c0ef) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x00085f09) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x00085f09) list_medium_line_x3_t4_g4_t

0x5f26,	// (0x0007c10c) list_single_dyc_row_text_pane_t1_ParamLimits

0x5f26,	// (0x0007c10c) list_single_dyc_row_text_pane_t1

0x5f5d,	// (0x0007c143) list_single_dyc_row_text_pane_t2_ParamLimits

0x5f5d,	// (0x0007c143) list_single_dyc_row_text_pane_t2

0x5fd3,	// (0x0007c1b9) list_single_dyc_row_text_pane_t3_ParamLimits

0x5fd3,	// (0x0007c1b9) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x00085f12) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x00085f12) list_single_dyc_row_text_pane_t

0x60a4,	// (0x0007c28a) list_single_dyc_row_pane_g1_ParamLimits

0x60a4,	// (0x0007c28a) list_single_dyc_row_pane_g1

0x60b0,	// (0x0007c296) list_single_dyc_row_pane_g2_ParamLimits

0x60b0,	// (0x0007c296) list_single_dyc_row_pane_g2

0x60bc,	// (0x0007c2a2) list_single_dyc_row_pane_g3_ParamLimits

0x60bc,	// (0x0007c2a2) list_single_dyc_row_pane_g3

0x60c8,	// (0x0007c2ae) list_single_dyc_row_pane_g4_ParamLimits

0x60c8,	// (0x0007c2ae) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x00085f1f) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x00085f1f) list_single_dyc_row_pane_g

0x60d4,	// (0x0007c2ba) list_single_dyc_row_text_pane_ParamLimits

0x60d4,	// (0x0007c2ba) list_single_dyc_row_text_pane

0xe76f,	// (0x00084955) bg_sp_fs_scroll_pane

0x3df0,	// (0x00079fd6) thumb_sp_fs_scroll_pane

0x598a,	// (0x0007bb70) list_medium_line_g1_ParamLimits

0x598a,	// (0x0007bb70) list_medium_line_g1

0x60f3,	// (0x0007c2d9) list_medium_line_t1_ParamLimits

0x60f3,	// (0x0007c2d9) list_medium_line_t1

0x554c,	// (0x0007b732) list_medium_line_x2_g1_ParamLimits

0x554c,	// (0x0007b732) list_medium_line_x2_g1

0x7872,	// (0x0007da58) list_medium_line_x2_g2_ParamLimits

0x7872,	// (0x0007da58) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x00085f28) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x00085f28) list_medium_line_x2_g

0x6108,	// (0x0007c2ee) list_medium_line_x2_t1_ParamLimits

0x6108,	// (0x0007c2ee) list_medium_line_x2_t1

0x554c,	// (0x0007b732) list_medium_line_x3_g1_ParamLimits

0x554c,	// (0x0007b732) list_medium_line_x3_g1

0x7872,	// (0x0007da58) list_medium_line_x3_g2_ParamLimits

0x7872,	// (0x0007da58) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x00085f28) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x00085f28) list_medium_line_x3_g

0x6108,	// (0x0007c2ee) list_medium_line_x3_t1_ParamLimits

0x6108,	// (0x0007c2ee) list_medium_line_x3_t1

0x3df9,	// (0x00079fdf) thumb_sp_fs_scroll_pane_g1

0x3e02,	// (0x00079fe8) thumb_sp_fs_scroll_pane_g2

0x3e0b,	// (0x00079ff1) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00085f2d) thumb_sp_fs_scroll_pane_g

0x3df9,	// (0x00079fdf) bg_sp_fs_scroll_pane_g1

0x3e02,	// (0x00079fe8) bg_sp_fs_scroll_pane_g2

0x3e0b,	// (0x00079ff1) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00085f2d) bg_sp_fs_scroll_pane_g

0x554c,	// (0x0007b732) list_medium_line_x2_t3_g4_g1_ParamLimits

0x554c,	// (0x0007b732) list_medium_line_x2_t3_g4_g1

0x787e,	// (0x0007da64) list_medium_line_x2_t3_g4_g2_ParamLimits

0x787e,	// (0x0007da64) list_medium_line_x2_t3_g4_g2

0x7872,	// (0x0007da58) list_medium_line_x2_t3_g4_g3_ParamLimits

0x7872,	// (0x0007da58) list_medium_line_x2_t3_g4_g3

0x5558,	// (0x0007b73e) list_medium_line_x2_t3_g4_g4_ParamLimits

0x5558,	// (0x0007b73e) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000854a8) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000854a8) list_medium_line_x2_t3_g4_g

0x611e,	// (0x0007c304) list_medium_line_x2_t3_g4_t1_ParamLimits

0x611e,	// (0x0007c304) list_medium_line_x2_t3_g4_t1

0x6134,	// (0x0007c31a) list_medium_line_x2_t3_g4_t2_ParamLimits

0x6134,	// (0x0007c31a) list_medium_line_x2_t3_g4_t2

0x558b,	// (0x0007b771) list_medium_line_x2_t3_g4_t3_ParamLimits

0x558b,	// (0x0007b771) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x00085f34) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x00085f34) list_medium_line_x2_t3_g4_t

0x598a,	// (0x0007bb70) list_medium_line_g2_g1_ParamLimits

0x598a,	// (0x0007bb70) list_medium_line_g2_g1

0xc567,	// (0x0008274d) list_medium_line_g2_g2_ParamLimits

0xc567,	// (0x0008274d) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x00085be6) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x00085be6) list_medium_line_g2_g

0x614e,	// (0x0007c334) list_medium_line_g2_t1_ParamLimits

0x614e,	// (0x0007c334) list_medium_line_g2_t1

0x598a,	// (0x0007bb70) list_medium_line_t3_g2_g1_ParamLimits

0x598a,	// (0x0007bb70) list_medium_line_t3_g2_g1

0xc567,	// (0x0008274d) list_medium_line_t3_g2_g2_ParamLimits

0xc567,	// (0x0008274d) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x00085be6) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x00085be6) list_medium_line_t3_g2_g

0x6163,	// (0x0007c349) list_medium_line_t3_g2_t1_ParamLimits

0x6163,	// (0x0007c349) list_medium_line_t3_g2_t1

0x617a,	// (0x0007c360) list_medium_line_t3_g2_t2_ParamLimits

0x617a,	// (0x0007c360) list_medium_line_t3_g2_t2

0x618f,	// (0x0007c375) list_medium_line_t3_g2_t3_ParamLimits

0x618f,	// (0x0007c375) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x00085f3b) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x00085f3b) list_medium_line_t3_g2_t

0xd8c9,	// (0x00083aaf) list_medium_line_right_icon_g1

0x61a4,	// (0x0007c38a) list_medium_line_right_icon_t1

0x598a,	// (0x0007bb70) list_medium_line_t2_g1_ParamLimits

0x598a,	// (0x0007bb70) list_medium_line_t2_g1

0x61b2,	// (0x0007c398) list_medium_line_t2_t1_ParamLimits

0x61b2,	// (0x0007c398) list_medium_line_t2_t1

0x61cc,	// (0x0007c3b2) list_medium_line_t2_t2_ParamLimits

0x61cc,	// (0x0007c3b2) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x00085f42) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x00085f42) list_medium_line_t2_t

0x598a,	// (0x0007bb70) list_medium_line_t3_g1_ParamLimits

0x598a,	// (0x0007bb70) list_medium_line_t3_g1

0x61e1,	// (0x0007c3c7) list_medium_line_t3_t1_ParamLimits

0x61e1,	// (0x0007c3c7) list_medium_line_t3_t1

0x61fb,	// (0x0007c3e1) list_medium_line_t3_t2_ParamLimits

0x61fb,	// (0x0007c3e1) list_medium_line_t3_t2

0x6210,	// (0x0007c3f6) list_medium_line_t3_t3_ParamLimits

0x6210,	// (0x0007c3f6) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x00085f47) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x00085f47) list_medium_line_t3_t

0x598a,	// (0x0007bb70) list_medium_line_g3_g1_ParamLimits

0x598a,	// (0x0007bb70) list_medium_line_g3_g1

0xd975,	// (0x00083b5b) list_medium_line_g3_g2_ParamLimits

0xd975,	// (0x00083b5b) list_medium_line_g3_g2

0xc567,	// (0x0008274d) list_medium_line_g3_g3_ParamLimits

0xc567,	// (0x0008274d) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x00085f4e) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x00085f4e) list_medium_line_g3_g

0x6225,	// (0x0007c40b) list_medium_line_g3_t1_ParamLimits

0x6225,	// (0x0007c40b) list_medium_line_g3_t1

0x598a,	// (0x0007bb70) list_medium_line_t2_g3_g1_ParamLimits

0x598a,	// (0x0007bb70) list_medium_line_t2_g3_g1

0xd975,	// (0x00083b5b) list_medium_line_t2_g3_g2_ParamLimits

0xd975,	// (0x00083b5b) list_medium_line_t2_g3_g2

0xc567,	// (0x0008274d) list_medium_line_t2_g3_g3_ParamLimits

0xc567,	// (0x0008274d) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x00085f4e) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x00085f4e) list_medium_line_t2_g3_g

0x623a,	// (0x0007c420) list_medium_line_t2_g3_t1_ParamLimits

0x623a,	// (0x0007c420) list_medium_line_t2_g3_t1

0x6251,	// (0x0007c437) list_medium_line_t2_g3_t2_ParamLimits

0x6251,	// (0x0007c437) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x00085f55) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x00085f55) list_medium_line_t2_g3_t

0x598a,	// (0x0007bb70) list_medium_line_t3_g3_g1_ParamLimits

0x598a,	// (0x0007bb70) list_medium_line_t3_g3_g1

0xd975,	// (0x00083b5b) list_medium_line_t3_g3_g2_ParamLimits

0xd975,	// (0x00083b5b) list_medium_line_t3_g3_g2

0xc567,	// (0x0008274d) list_medium_line_t3_g3_g3_ParamLimits

0xc567,	// (0x0008274d) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x00085f4e) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x00085f4e) list_medium_line_t3_g3_g

0x6266,	// (0x0007c44c) list_medium_line_t3_g3_t1_ParamLimits

0x6266,	// (0x0007c44c) list_medium_line_t3_g3_t1

0x627f,	// (0x0007c465) list_medium_line_t3_g3_t2_ParamLimits

0x627f,	// (0x0007c465) list_medium_line_t3_g3_t2

0x6295,	// (0x0007c47b) list_medium_line_t3_g3_t3_ParamLimits

0x6295,	// (0x0007c47b) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x00085f5a) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x00085f5a) list_medium_line_t3_g3_t

0xd961,	// (0x00083b47) list_medium_line_right_iconx2_g1

0xd8c9,	// (0x00083aaf) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00085f61) list_medium_line_right_iconx2_g

0xd981,	// (0x00083b67) list_medium_line_right_iconx2_t1

0xd961,	// (0x00083b47) list_medium_line_t2_right_iconx2_g1

0xd8c9,	// (0x00083aaf) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00085f61) list_medium_line_t2_right_iconx2_g

0x62ab,	// (0x0007c491) list_medium_line_t2_right_iconx2_t1

0x62bb,	// (0x0007c4a1) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x00085f66) list_medium_line_t2_right_iconx2_t

0x62c9,	// (0x0007c4af) list_medium_line_x4_t4_t1

0x62d7,	// (0x0007c4bd) list_medium_line_x4_t4_t2

0x62e7,	// (0x0007c4cd) list_medium_line_x4_t4_t3

0x62f7,	// (0x0007c4dd) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x00085f6b) list_medium_line_x4_t4_t

0xd9b9,	// (0x00083b9f) tport_appsw_pane_ParamLimits

0xd9b9,	// (0x00083b9f) tport_appsw_pane

0xd9c7,	// (0x00083bad) tport_contact_pane_ParamLimits

0xd9c7,	// (0x00083bad) tport_contact_pane

0xd9d7,	// (0x00083bbd) tport_listscroll_pane_ParamLimits

0xd9d7,	// (0x00083bbd) tport_listscroll_pane

0xd9e7,	// (0x00083bcd) cell_tport_appsw_pane_ParamLimits

0xd9e7,	// (0x00083bcd) cell_tport_appsw_pane

0x2576,	// (0x0007875c) tport_appsw_pane_g1_ParamLimits

0x2576,	// (0x0007875c) tport_appsw_pane_g1

0x3e14,	// (0x00079ffa) tport_contact_pane_g1

0x37c4,	// (0x000799aa) tport_contact_pane_t1

0x3e1d,	// (0x0007a003) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x00085f74) tport_contact_pane_t

0x3e2b,	// (0x0007a011) list_tport_pane

0x3e34,	// (0x0007a01a) scroll_pane_cp_030

0xda1a,	// (0x00083c00) cell_tport_appsw_pane_g1

0xda2a,	// (0x00083c10) cell_tport_appsw_pane_t1

0xda38,	// (0x00083c1e) grid_highlight_pane_cp019

0xda40,	// (0x00083c26) list_tport_double_graphic_pane_ParamLimits

0xda40,	// (0x00083c26) list_tport_double_graphic_pane

0xf0af,	// (0x00085295) list_highlight_pane_cp023_ParamLimits

0xf0af,	// (0x00085295) list_highlight_pane_cp023

0xda51,	// (0x00083c37) list_tport_double_graphic_pane_g1_ParamLimits

0xda51,	// (0x00083c37) list_tport_double_graphic_pane_g1

0xda5e,	// (0x00083c44) list_tport_double_graphic_pane_t1_ParamLimits

0xda5e,	// (0x00083c44) list_tport_double_graphic_pane_t1

0xda73,	// (0x00083c59) list_tport_double_graphic_pane_t2_ParamLimits

0xda73,	// (0x00083c59) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x00085f80) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x00085f80) list_tport_double_graphic_pane_t

0xe76f,	// (0x00084955) main_cale_note_pane

0xbd73,	// (0x00081f59) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xbd73,	// (0x00081f59) cell_vitu2_function_top_wide_pane_cp01

0xd51d,	// (0x00083703) wait_bar_pane_cp05_ParamLimits

0xf0af,	// (0x00085295) listscroll_cmail_pane

0x3e3d,	// (0x0007a023) list_cmail_pane

0xda85,	// (0x00083c6b) list_cmail_body_pane

0xdaa5,	// (0x00083c8b) list_single_cmail_header_caption_pane

0xdad1,	// (0x00083cb7) list_single_cmail_header_detail_pane_ParamLimits

0xdad1,	// (0x00083cb7) list_single_cmail_header_detail_pane

0x3e4d,	// (0x0007a033) list_single_cmail_header_caption_pane_t1

0x6307,	// (0x0007c4ed) list_single_cmail_header_detail_pane_g1_ParamLimits

0x6307,	// (0x0007c4ed) list_single_cmail_header_detail_pane_g1

0xdb07,	// (0x00083ced) list_single_cmail_header_detail_pane_g2_ParamLimits

0xdb07,	// (0x00083ced) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x00085f85) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x00085f85) list_single_cmail_header_detail_pane_g

0x631d,	// (0x0007c503) list_single_cmail_header_detail_pane_t1_ParamLimits

0x631d,	// (0x0007c503) list_single_cmail_header_detail_pane_t1

0x637d,	// (0x0007c563) list_single_cmail_header_editor_pane_bg_ParamLimits

0x637d,	// (0x0007c563) list_single_cmail_header_editor_pane_bg

0x3965,	// (0x00079b4b) list_cmail_body_pane_g1

0x3e71,	// (0x0007a057) list_cmail_body_pane_t1

0x2d21,	// (0x00078f07) list_single_cmail_header_editor_pane_bg_g1

0x025e,	// (0x00076444) list_single_cmail_header_editor_pane_bg_g1_copy1

0x2d31,	// (0x00078f17) list_single_cmail_header_editor_pane_bg_g1_copy2

0x2d29,	// (0x00078f0f) list_single_cmail_header_editor_pane_bg_g1_copy3

0x2f45,	// (0x0007912b) list_single_cmail_header_editor_pane_bg_g1_copy4

0x2d51,	// (0x00078f37) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x2d41,	// (0x00078f27) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x2d49,	// (0x00078f2f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x023e,	// (0x00076424) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xdb13,	// (0x00083cf9) calenote_gesture_pane_ParamLimits

0xdb13,	// (0x00083cf9) calenote_gesture_pane

0xdb2d,	// (0x00083d13) calenote_window_pane_ParamLimits

0xdb2d,	// (0x00083d13) calenote_window_pane

0x3e8d,	// (0x0007a073) popup_note_window_cp01

0xdb45,	// (0x00083d2b) calenote_swipe_1_pane_ParamLimits

0xdb45,	// (0x00083d2b) calenote_swipe_1_pane

0xd86b,	// (0x00083a51) calenote_swipe_2_pane_ParamLimits

0xd86b,	// (0x00083a51) calenote_swipe_2_pane

0x3cb5,	// (0x00079e9b) calenote_swipe_1_pane_g1_ParamLimits

0x3cb5,	// (0x00079e9b) calenote_swipe_1_pane_g1

0x3cc2,	// (0x00079ea8) calenote_swipe_1_pane_g2_ParamLimits

0x3cc2,	// (0x00079ea8) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x00085ea9) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x00085ea9) calenote_swipe_1_pane_g

0x3e9f,	// (0x0007a085) calenote_swipe_1_pane_t1_ParamLimits

0x3e9f,	// (0x0007a085) calenote_swipe_1_pane_t1

0x3cb5,	// (0x00079e9b) calenote_swipe_2_pane_g1_ParamLimits

0x3cb5,	// (0x00079e9b) calenote_swipe_2_pane_g1

0x3ebe,	// (0x0007a0a4) calenote_swipe_2_pane_g2_ParamLimits

0x3ebe,	// (0x0007a0a4) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x00085f91) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x00085f91) calenote_swipe_2_pane_g

0x3eca,	// (0x0007a0b0) calenote_swipe_2_pane_t1_ParamLimits

0x3eca,	// (0x0007a0b0) calenote_swipe_2_pane_t1

0xe76f,	// (0x00084955) main_mup_navstr_pane

0xaaf8,	// (0x00080cde) main_mup3_pane_t7_ParamLimits

0xaaf8,	// (0x00080cde) main_mup3_pane_t7

0xb4fd,	// (0x000816e3) main_mp4_pane_g6_ParamLimits

0xb4fd,	// (0x000816e3) main_mp4_pane_g6

0xb86f,	// (0x00081a55) main_image3_pane_t4_ParamLimits

0xb86f,	// (0x00081a55) main_image3_pane_t4

0xdb58,	// (0x00083d3e) popup_navstr_preview_pane_ParamLimits

0xdb58,	// (0x00083d3e) popup_navstr_preview_pane

0xdb64,	// (0x00083d4a) scroll_navstr_pane_ParamLimits

0xdb64,	// (0x00083d4a) scroll_navstr_pane

0xe76f,	// (0x00084955) bg_popup_preview_window_pane_cp04

0x3ef1,	// (0x0007a0d7) popup_navstr_preview_pane_t1

0xdb70,	// (0x00083d56) scroll_navstr_pane_g1_ParamLimits

0xdb70,	// (0x00083d56) scroll_navstr_pane_g1

0xdb7d,	// (0x00083d63) scroll_navstr_pane_t1_ParamLimits

0xdb7d,	// (0x00083d63) scroll_navstr_pane_t1

0x3e96,	// (0x0007a07c) bg_button_pane_cp014

0x3e96,	// (0x0007a07c) bg_button_pane_cp030

0x5ce5,	// (0x0007becb) list_double_fisheye_pane_g4_ParamLimits

0x5ce5,	// (0x0007becb) list_double_fisheye_pane_g4

0x5cf1,	// (0x0007bed7) list_double_fisheye_pane_g5_ParamLimits

0x5cf1,	// (0x0007bed7) list_double_fisheye_pane_g5

0x1f62,	// (0x00078148) sp_fs_scroll_pane_cp03

0x3d8d,	// (0x00079f73) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x3d99,	// (0x00079f7f) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x00085ec6) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x3da5,	// (0x00079f8b) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x3e45,	// (0x0007a02b) sp_fs_scroll_pane_cp02

0xefc7,	// (0x000851ad) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xefc7,	// (0x000851ad) popup_sp_fs_calendar_preview_list_single_pane

0xe76f,	// (0x00084955) main_cam6_pano_pane

0xf0af,	// (0x00085295) main_mup3_pane_ParamLimits

0xe76f,	// (0x00084955) main_phacti_pane

0xd3f2,	// (0x000835d8) bg_button_pane_cp11

0xd40a,	// (0x000835f0) main_mobtv_info_pane_g2_ParamLimits

0xd40a,	// (0x000835f0) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x00085e26) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x00085e26) main_mobtv_info_pane_g

0xd5bc,	// (0x000837a2) sc_clock_pane_t5_ParamLimits

0xd5bc,	// (0x000837a2) sc_clock_pane_t5

0xd65f,	// (0x00083845) main_radioblah_pane_g1_ParamLimits

0x3c01,	// (0x00079de7) main_radioblah_pane_t3_ParamLimits

0x3c01,	// (0x00079de7) main_radioblah_pane_t3

0x3c19,	// (0x00079dff) main_radioblah_pane_t4_ParamLimits

0x3c19,	// (0x00079dff) main_radioblah_pane_t4

0xd67d,	// (0x00083863) main_radioblah_text_pane_ParamLimits

0xd67d,	// (0x00083863) main_radioblah_text_pane

0xd68a,	// (0x00083870) main_radioblah_info_pane_g1_ParamLimits

0xd71f,	// (0x00083905) main_radioblah_info_pane_t4_ParamLimits

0xd71f,	// (0x00083905) main_radioblah_info_pane_t4

0xf0af,	// (0x00085295) main_sp_fs_calendar_pane

0xdb8f,	// (0x00083d75) main_phacti_pane_g1

0xdb97,	// (0x00083d7d) phacti_note_pane_ParamLimits

0xdb97,	// (0x00083d7d) phacti_note_pane

0x3f08,	// (0x0007a0ee) phacti_term_pane_ParamLimits

0x3f08,	// (0x0007a0ee) phacti_term_pane

0x3f1d,	// (0x0007a103) phacti_note_pane_t1_ParamLimits

0x3f1d,	// (0x0007a103) phacti_note_pane_t1

0x6394,	// (0x0007c57a) phacti_term_pane_g1

0x639c,	// (0x0007c582) phacti_term_pane_t1_ParamLimits

0x639c,	// (0x0007c582) phacti_term_pane_t1

0x3f34,	// (0x0007a11a) popup_sp_fs_calendar_preview_list_single_pane_g1

0x005f,	// (0x00076245) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x00085f9b) popup_sp_fs_calendar_preview_list_single_pane_g

0x3f3c,	// (0x0007a122) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x3f3c,	// (0x0007a122) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3f51,	// (0x0007a137) aid_popup_sp_fs_bg_corner_pane

0x2285,	// (0x0007846b) popup_sp_fs_calendar_preview_bg_pane_g1

0xe76f,	// (0x00084955) popup_sp_fs_calendar_preview_bg_pane

0x3f59,	// (0x0007a13f) popup_sp_fs_calendar_preview_list_pane

0x1e71,	// (0x00078057) bg_main_sp_fs_cale_pane_ParamLimits

0x1e71,	// (0x00078057) bg_main_sp_fs_cale_pane

0x63c6,	// (0x0007c5ac) listscroll_cale_mrui_pane_ParamLimits

0x63c6,	// (0x0007c5ac) listscroll_cale_mrui_pane

0x2da5,	// (0x00078f8b) listscroll_sp_fs_schedule_track_pane

0x63db,	// (0x0007c5c1) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x63db,	// (0x0007c5c1) main_sp_fs_ctrlbar_pane_cp01

0x3f61,	// (0x0007a147) main_sp_fs_ribbon_pane

0x63ee,	// (0x0007c5d4) popup_sp_fs_cale_preview_window

0xdbfa,	// (0x00083de0) list_single_sp_fs_schedule_track_pane_ParamLimits

0xdbfa,	// (0x00083de0) list_single_sp_fs_schedule_track_pane

0x3e7f,	// (0x0007a065) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x3e7f,	// (0x0007a065) bg_sp_fs_highlight_list_pane_cp03

0xdc1d,	// (0x00083e03) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xdc1d,	// (0x00083e03) list_single_sp_fs_schedule_track_pane_g1

0xdc29,	// (0x00083e0f) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xdc29,	// (0x00083e0f) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x00085fa0) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x00085fa0) list_single_sp_fs_schedule_track_pane_g

0xdc35,	// (0x00083e1b) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xdc35,	// (0x00083e1b) list_single_sp_fs_schedule_track_pane_t1

0xdc4d,	// (0x00083e33) sp_fs_schedule_track_pane_ParamLimits

0xdc4d,	// (0x00083e33) sp_fs_schedule_track_pane

0x3f69,	// (0x0007a14f) sp_fs_schedule_track_pane_g1

0x3f71,	// (0x0007a157) sp_fs_schedule_track_pane_g2

0x3f79,	// (0x0007a15f) sp_fs_schedule_track_pane_g3

0x3f81,	// (0x0007a167) sp_fs_schedule_track_pane_g4

0x3f89,	// (0x0007a16f) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x00085fa5) sp_fs_schedule_track_pane_g

0x2d21,	// (0x00078f07) bg_sp_fs_schedule_viewer_highlight_g1

0x025e,	// (0x00076444) bg_sp_fs_schedule_viewer_highlight_g2

0x2d29,	// (0x00078f0f) bg_sp_fs_schedule_viewer_highlight_g3

0x2d31,	// (0x00078f17) bg_sp_fs_schedule_viewer_highlight_g4

0x2f45,	// (0x0007912b) bg_sp_fs_schedule_viewer_highlight_g5

0x2d41,	// (0x00078f27) bg_sp_fs_schedule_viewer_highlight_g6

0x2d49,	// (0x00078f2f) bg_sp_fs_schedule_viewer_highlight_g7

0x2d51,	// (0x00078f37) bg_sp_fs_schedule_viewer_highlight_g8

0x023e,	// (0x00076424) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x00085fb0) bg_sp_fs_schedule_viewer_highlight_g

0xe76f,	// (0x00084955) bg_main_sp_fs_ribbon_pane

0xdc5d,	// (0x00083e43) main_sp_fs_ribbon_pane_g1

0x3f91,	// (0x0007a177) main_sp_fs_ribbon_pane_t1

0xdc66,	// (0x00083e4c) main_sp_fs_ribbon_pane_t2

0x3fa0,	// (0x0007a186) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x00085fc3) main_sp_fs_ribbon_pane_t

0x3faf,	// (0x0007a195) main_sp_fs_ribbon_scheduler_pane

0x3fb7,	// (0x0007a19d) bg_main_sp_fs_ribbon_pane_g1

0x3fc0,	// (0x0007a1a6) bg_main_sp_fs_ribbon_pane_g2

0x3fc9,	// (0x0007a1af) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x00085fca) bg_main_sp_fs_ribbon_pane_g

0x3fd1,	// (0x0007a1b7) main_sp_fs_ribbon_scheduler_pane_g1

0x3fda,	// (0x0007a1c0) main_sp_fs_ribbon_scheduler_pane_g2

0x3fe3,	// (0x0007a1c9) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x00085fd1) main_sp_fs_ribbon_scheduler_pane_g

0x3fec,	// (0x0007a1d2) list_cale_mrui_pane

0xdc75,	// (0x00083e5b) sp_fs_scroll_pane_cp07_ParamLimits

0xdc75,	// (0x00083e5b) sp_fs_scroll_pane_cp07

0xdc91,	// (0x00083e77) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xdc91,	// (0x00083e77) bg_sp_fs_schedule_viewer_highlight

0x3ff9,	// (0x0007a1df) list_single_sp_fs_schedule_track_pane_cp01

0x4001,	// (0x0007a1e7) list_sp_fs_schedule_track_pane

0x4009,	// (0x0007a1ef) sp_fs_scroll_pane_cp06_ParamLimits

0x4009,	// (0x0007a1ef) sp_fs_scroll_pane_cp06

0x2285,	// (0x0007846b) bgmain_sp_fs_calendar_pane_g1

0x6400,	// (0x0007c5e6) list_single_cale_mrui_pane_ParamLimits

0x6400,	// (0x0007c5e6) list_single_cale_mrui_pane

0x642d,	// (0x0007c613) list_single_cale_mrui_row_pane_ParamLimits

0x642d,	// (0x0007c613) list_single_cale_mrui_row_pane

0x643a,	// (0x0007c620) list_single_cale_mrui_row_pane_g1_ParamLimits

0x643a,	// (0x0007c620) list_single_cale_mrui_row_pane_g1

0x6472,	// (0x0007c658) list_single_cale_mrui_row_pane_t1_ParamLimits

0x6472,	// (0x0007c658) list_single_cale_mrui_row_pane_t1

0x6484,	// (0x0007c66a) list_single_cale_mrui_row_pane_t2_ParamLimits

0x6484,	// (0x0007c66a) list_single_cale_mrui_row_pane_t2

0x64ea,	// (0x0007c6d0) list_single_cale_mrui_row_pane_t3_ParamLimits

0x64ea,	// (0x0007c6d0) list_single_cale_mrui_row_pane_t3

0x6519,	// (0x0007c6ff) list_single_cale_mrui_row_pane_t4_ParamLimits

0x6519,	// (0x0007c6ff) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x00085fdf) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x00085fdf) list_single_cale_mrui_row_pane_t

0x6548,	// (0x0007c72e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x6548,	// (0x0007c72e) list_single_cmail_header_editor_pane_bg_cp01

0x6568,	// (0x0007c74e) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x6568,	// (0x0007c74e) list_single_cmail_header_editor_pane_bg_cp02

0xdc9e,	// (0x00083e84) main_radioblah_text_pane_t1_ParamLimits

0xdc9e,	// (0x00083e84) main_radioblah_text_pane_t1

0x4028,	// (0x0007a20e) cam6_indi_pane_cp01

0x4030,	// (0x0007a216) cam6_mode_pane_cp01

0x4038,	// (0x0007a21e) cam6_pano_pane

0x4041,	// (0x0007a227) cam6_zoom_pane_cp01

0x4049,	// (0x0007a22f) cam6_pano_image_pane

0x4054,	// (0x0007a23a) cam6_pano_pane_g1

0x3965,	// (0x00079b4b) cam6_pano_pane_g2

0x405d,	// (0x0007a243) cam6_pano_pane_g3

0x4066,	// (0x0007a24c) cam6_pano_pane_g4

0x2871,	// (0x00078a57) cam6_pano_pane_g5

0x406f,	// (0x0007a255) cam6_pano_pane_g6

0x4079,	// (0x0007a25f) cam6_pano_pane_g7

0x4081,	// (0x0007a267) cam6_pano_pane_g8

0x408a,	// (0x0007a270) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x00085fe8) cam6_pano_pane_g

0xe76f,	// (0x00084955) main_browser_tag_pane

0x3ee9,	// (0x0007a0cf) grid_navstr_albumart_pane

0x4095,	// (0x0007a27b) cell_navstr_albumart_pane_ParamLimits

0x4095,	// (0x0007a27b) cell_navstr_albumart_pane

0x40b5,	// (0x0007a29b) cell_navstr_albumart_pane_g1

0x1c82,	// (0x00077e68) cell_navstr_albumart_pane_g2

0x1c92,	// (0x00077e78) cell_navstr_albumart_pane_g3

0x1c8a,	// (0x00077e70) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x00085ffb) cell_navstr_albumart_pane_g

0xdcb9,	// (0x00083e9f) bt_list_pane_ParamLimits

0xdcb9,	// (0x00083e9f) bt_list_pane

0xdcd9,	// (0x00083ebf) bt_list_pane_t1

0xdce8,	// (0x00083ece) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x00086004) bt_list_pane_t

0xe76f,	// (0x00084955) main_cale_prevew_pane

0xdcf7,	// (0x00083edd) popup_cale_preview_window_ParamLimits

0xdcf7,	// (0x00083edd) popup_cale_preview_window

0xf0af,	// (0x00085295) bg_popup_preview_window_pane_cp05_ParamLimits

0xf0af,	// (0x00085295) bg_popup_preview_window_pane_cp05

0x40bd,	// (0x0007a2a3) list_cale_preview_pane_ParamLimits

0x40bd,	// (0x0007a2a3) list_cale_preview_pane

0xdd10,	// (0x00083ef6) list_double_cale_preview_pane_ParamLimits

0xdd10,	// (0x00083ef6) list_double_cale_preview_pane

0xdd22,	// (0x00083f08) list_single_cale_preview_pane_ParamLimits

0xdd22,	// (0x00083f08) list_single_cale_preview_pane

0xdd38,	// (0x00083f1e) list_single_cale_preview_pane_g1

0xdd40,	// (0x00083f26) list_single_cale_preview_pane_t1_ParamLimits

0xdd40,	// (0x00083f26) list_single_cale_preview_pane_t1

0xdd55,	// (0x00083f3b) list_double_cale_preview_pane_g1

0xdd5d,	// (0x00083f43) list_double_cale_preview_pane_t1_ParamLimits

0xdd5d,	// (0x00083f43) list_double_cale_preview_pane_t1

0xdd72,	// (0x00083f58) list_double_cale_preview_pane_t2_ParamLimits

0xdd72,	// (0x00083f58) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x00086009) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x00086009) list_double_cale_preview_pane_t

0xe76f,	// (0x00084955) main_ezdial_pane

0xf0af,	// (0x00085295) main_sp_fs_email_pane_ParamLimits

0xd8d1,	// (0x00083ab7) cmail_ddmenu_btn01_pane_ParamLimits

0xd8d1,	// (0x00083ab7) cmail_ddmenu_btn01_pane

0xd8ee,	// (0x00083ad4) cmail_ddmenu_btn02_pane_ParamLimits

0xd8ee,	// (0x00083ad4) cmail_ddmenu_btn02_pane

0xd90c,	// (0x00083af2) cmail_ddmenu_btn03_pane_ParamLimits

0xd90c,	// (0x00083af2) cmail_ddmenu_btn03_pane

0xd93a,	// (0x00083b20) main_sp_fs_ctrlbar_pane_ParamLimits

0xd950,	// (0x00083b36) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xda85,	// (0x00083c6b) list_cmail_body_pane_ParamLimits

0x3e5b,	// (0x0007a041) bg_button_pane_cp12

0x3e64,	// (0x0007a04a) list_single_cmail_header_detail_pane_g3_ParamLimits

0x3e64,	// (0x0007a04a) list_single_cmail_header_detail_pane_g3

0x6359,	// (0x0007c53f) list_single_cmail_header_detail_pane_t2_ParamLimits

0x6359,	// (0x0007c53f) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x00085f8c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x00085f8c) list_single_cmail_header_detail_pane_t

0x63b1,	// (0x0007c597) phacti_term_pane_t2_ParamLimits

0x63b1,	// (0x0007c597) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x00085f96) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x00085f96) phacti_term_pane_t

0x40c9,	// (0x0007a2af) aid_size_list_single_double

0xdd8a,	// (0x00083f70) popup_ezdial_listscroll_window

0xddab,	// (0x00083f91) popup_number_entry_window_cp01

0x0a6b,	// (0x00076c51) bg_popup_call_pane_cp09

0x40d5,	// (0x0007a2bb) ezdial_list_pane

0x40dd,	// (0x0007a2c3) scroll_pane_cp23

0x206a,	// (0x00078250) bg_button_pane_cp028_ParamLimits

0x206a,	// (0x00078250) bg_button_pane_cp028

0xddb9,	// (0x00083f9f) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xddb9,	// (0x00083f9f) cmail_ddmenu_btn01_pane_g1

0xddc9,	// (0x00083faf) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xddc9,	// (0x00083faf) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0008600e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0008600e) cmail_ddmenu_btn01_pane_g

0x40e5,	// (0x0007a2cb) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x40e5,	// (0x0007a2cb) cmail_ddmenu_btn01_pane_t1

0x1e71,	// (0x00078057) bg_button_pane_cp029_ParamLimits

0x1e71,	// (0x00078057) bg_button_pane_cp029

0xddd5,	// (0x00083fbb) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xddd5,	// (0x00083fbb) cmail_ddmenu_btn02_pane_g1

0xdded,	// (0x00083fd3) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xdded,	// (0x00083fd3) cmail_ddmenu_btn02_pane_t1

0x3e7f,	// (0x0007a065) bg_button_pane_cp031_ParamLimits

0x3e7f,	// (0x0007a065) bg_button_pane_cp031

0xddd5,	// (0x00083fbb) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xddd5,	// (0x00083fbb) cmail_ddmenu_btn03_pane_g1

0xdded,	// (0x00083fd3) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xdded,	// (0x00083fd3) cmail_ddmenu_btn03_pane_t1

0xb71a,	// (0x00081900) cell_dialer2_keypad_pane_t1_ParamLimits

0xb734,	// (0x0008191a) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xb734,	// (0x0008191a) cell_dialer2_keypad_pane_t1_copy1

0xd277,	// (0x0008345d) ncimui_group_button_pane

0xf0af,	// (0x00085295) main_sp_fs_calendar_pane_ParamLimits

0xdaa5,	// (0x00083c8b) list_single_cmail_header_caption_pane_ParamLimits

0xf0bd,	// (0x000852a3) aid_recal_txt_sm_pane

0xe76f,	// (0x00084955) mian_recal_day_pane

0x63ee,	// (0x0007c5d4) popup_sp_fs_cale_preview_window_ParamLimits

0x40fb,	// (0x0007a2e1) list_recal_day_pane

0x65a0,	// (0x0007c786) list_single_recal_day_pane_ParamLimits

0x65a0,	// (0x0007c786) list_single_recal_day_pane

0x4122,	// (0x0007a308) list_single_recal_day_pane_g1_ParamLimits

0x4122,	// (0x0007a308) list_single_recal_day_pane_g1

0x65b2,	// (0x0007c798) list_single_recal_day_pane_g2_ParamLimits

0x65b2,	// (0x0007c798) list_single_recal_day_pane_g2

0x65c2,	// (0x0007c7a8) list_single_recal_day_pane_g3_ParamLimits

0x65c2,	// (0x0007c7a8) list_single_recal_day_pane_g3

0x65ce,	// (0x0007c7b4) list_single_recal_day_pane_g4_ParamLimits

0x65ce,	// (0x0007c7b4) list_single_recal_day_pane_g4

0x65e4,	// (0x0007c7ca) list_single_recal_day_pane_g5_ParamLimits

0x65e4,	// (0x0007c7ca) list_single_recal_day_pane_g5

0x65fe,	// (0x0007c7e4) list_single_recal_day_pane_g6_ParamLimits

0x65fe,	// (0x0007c7e4) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0008601d) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0008601d) list_single_recal_day_pane_g

0x6612,	// (0x0007c7f8) list_single_recal_day_pane_t1

0x6624,	// (0x0007c80a) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x00086028) list_single_recal_day_pane_t

0xde11,	// (0x00083ff7) ncimui_query_button_pane_ParamLimits

0xde11,	// (0x00083ff7) ncimui_query_button_pane

0xde21,	// (0x00084007) ncimui_query_button_pane_t1_ParamLimits

0xde21,	// (0x00084007) ncimui_query_button_pane_t1

0x412e,	// (0x0007a314) ncimui_query_button_pane_t2_ParamLimits

0x412e,	// (0x0007a314) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0008602d) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0008602d) ncimui_query_button_pane_t

0xde34,	// (0x0008401a) query_button_pane_ParamLimits

0xde34,	// (0x0008401a) query_button_pane

0xe76f,	// (0x00084955) bg_button_pane_cp0028

0x4141,	// (0x0007a327) query_button_pane_t1

0x9af8,	// (0x0007fcde) main_tport_pane_ParamLimits

0xd98f,	// (0x00083b75) bg_popup_window_pane_cp01_ParamLimits

0xd98f,	// (0x00083b75) bg_popup_window_pane_cp01

0xd99d,	// (0x00083b83) heading_pane_cp08_ParamLimits

0xd99d,	// (0x00083b83) heading_pane_cp08

0xd9ab,	// (0x00083b91) heading_pane_cp07_ParamLimits

0xd9ab,	// (0x00083b91) heading_pane_cp07

0xda1a,	// (0x00083c00) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x00085f79) cell_tport_appsw_pane_g

0x5764,	// (0x0007b94a) input_candi_list_open_g1

0x0421,	// (0x00076607) list_cale_time_pane_g6_ParamLimits

0x0421,	// (0x00076607) list_cale_time_pane_g6

0xa57d,	// (0x00080763) aid_size_touch_calib_1_ParamLimits

0xa57d,	// (0x00080763) aid_size_touch_calib_1

0xa589,	// (0x0008076f) aid_size_touch_calib_2_ParamLimits

0xa589,	// (0x0008076f) aid_size_touch_calib_2

0xa597,	// (0x0008077d) aid_size_touch_calib_3_ParamLimits

0xa597,	// (0x0008077d) aid_size_touch_calib_3

0xa5a7,	// (0x0008078d) aid_size_touch_calib_4_ParamLimits

0xa5a7,	// (0x0008078d) aid_size_touch_calib_4

0xa5b5,	// (0x0008079b) main_touch_calib_button_group_pane_ParamLimits

0xa5b5,	// (0x0008079b) main_touch_calib_button_group_pane

0xa5c3,	// (0x000807a9) main_touch_calib_pane_g1_ParamLimits

0xa5cf,	// (0x000807b5) main_touch_calib_pane_g2_ParamLimits

0xa5db,	// (0x000807c1) main_touch_calib_pane_g3_ParamLimits

0xa5e7,	// (0x000807cd) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x00085937) main_touch_calib_pane_g_ParamLimits

0xa5f3,	// (0x000807d9) main_touch_calib_pane_t1_ParamLimits

0xa60c,	// (0x000807f2) main_touch_calib_pane_t2_ParamLimits

0xa625,	// (0x0008080b) main_touch_calib_pane_t3_ParamLimits

0xa63b,	// (0x00080821) main_touch_calib_pane_t4_ParamLimits

0xa651,	// (0x00080837) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x00085940) main_touch_calib_pane_t_ParamLimits

0x2611,	// (0x000787f7) list_single_fp_cale_pane_g3_ParamLimits

0x2611,	// (0x000787f7) list_single_fp_cale_pane_g3

0xf0af,	// (0x00085295) bg_button_pane_cp012_ParamLimits

0xf0af,	// (0x00085295) bg_vkb2_func_pane_cp03_ParamLimits

0xc4e7,	// (0x000826cd) cell_vitu2_function_top_pane_g1_ParamLimits

0xf0af,	// (0x00085295) bg_vkb2_func_pane_cp04_ParamLimits

0xd1ff,	// (0x000833e5) main_ncimui_button_group_pane_ParamLimits

0xd1ff,	// (0x000833e5) main_ncimui_button_group_pane

0xd265,	// (0x0008344b) main_ncimui_pane_t3_ParamLimits

0xd265,	// (0x0008344b) main_ncimui_pane_t3

0x3eff,	// (0x0007a0e5) phacti_button_group_pane

0x40c9,	// (0x0007a2af) aid_size_list_single_double_ParamLimits

0xdd8a,	// (0x00083f70) popup_ezdial_listscroll_window_ParamLimits

0xddab,	// (0x00083f91) popup_number_entry_window_cp01_ParamLimits

0xde41,	// (0x00084027) phacti_button_pane_ParamLimits

0xde41,	// (0x00084027) phacti_button_pane

0xe76f,	// (0x00084955) bg_button_pane_cp14

0x414f,	// (0x0007a335) phacti_button_pane_t1

0xde52,	// (0x00084038) main_touch_calib_button_pane_ParamLimits

0xde52,	// (0x00084038) main_touch_calib_button_pane

0xeec3,	// (0x000850a9) bg_button_pane_cp18_ParamLimits

0xeec3,	// (0x000850a9) bg_button_pane_cp18

0x415d,	// (0x0007a343) main_touch_calib_button_pane_t1_ParamLimits

0x415d,	// (0x0007a343) main_touch_calib_button_pane_t1

0x4173,	// (0x0007a359) main_touch_calib_button_pane_t2_ParamLimits

0x4173,	// (0x0007a359) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x00086032) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x00086032) main_touch_calib_button_pane_t

0xe76f,	// (0x00084955) cell_ncimui_button_pane

0xe76f,	// (0x00084955) bg_button_pane_cp032

0x4191,	// (0x0007a377) cell_ncimui_button_pane_t1

0xb790,	// (0x00081976) image3_infobar_pane_ParamLimits

0xb790,	// (0x00081976) image3_infobar_pane

0xd5de,	// (0x000837c4) fs_bigclock_status_pane_ParamLimits

0xd5de,	// (0x000837c4) fs_bigclock_status_pane

0xd5eb,	// (0x000837d1) main_fs_bigclock_clock_pane_ParamLimits

0xd5eb,	// (0x000837d1) main_fs_bigclock_clock_pane

0xd605,	// (0x000837eb) main_fs_bigclock_indi_pane_ParamLimits

0xd605,	// (0x000837eb) main_fs_bigclock_indi_pane

0xd62d,	// (0x00083813) main_fs_bigclock_swipe_pane_ParamLimits

0xd62d,	// (0x00083813) main_fs_bigclock_swipe_pane

0xe76f,	// (0x00084955) main_fs_clock_dumped_data

0x3a72,	// (0x00079c58) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x3a72,	// (0x00079c58) list_single_fs_bigclock_indicator_pane_g1

0x3a8d,	// (0x00079c73) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x3a8d,	// (0x00079c73) list_single_fs_bigclock_indicator_pane_g2

0x3aa7,	// (0x00079c8d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x3aa7,	// (0x00079c8d) list_single_fs_bigclock_indicator_pane_g3

0x3ac1,	// (0x00079ca7) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x3ac1,	// (0x00079ca7) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x00085e5a) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x00085e5a) list_single_fs_bigclock_indicator_pane_g

0x3aec,	// (0x00079cd2) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x3aec,	// (0x00079cd2) list_single_fs_bigclock_indicator_pane_t1

0x3b14,	// (0x00079cfa) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x3b14,	// (0x00079cfa) list_single_fs_bigclock_indicator_pane_t2

0x3b3c,	// (0x00079d22) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x3b3c,	// (0x00079d22) list_single_fs_bigclock_indicator_pane_t3

0x3b64,	// (0x00079d4a) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x3b64,	// (0x00079d4a) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x00085e65) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x00085e65) list_single_fs_bigclock_indicator_pane_t

0x419f,	// (0x0007a385) image3_infobar_fav_pane_ParamLimits

0x419f,	// (0x0007a385) image3_infobar_fav_pane

0x41af,	// (0x0007a395) image3_infobar_loc_pane_ParamLimits

0x41af,	// (0x0007a395) image3_infobar_loc_pane

0x41c3,	// (0x0007a3a9) image3_infobar_time_pane_ParamLimits

0x41c3,	// (0x0007a3a9) image3_infobar_time_pane

0x2285,	// (0x0007846b) image3_infobar_time_pane_g1

0x41d3,	// (0x0007a3b9) image3_infobar_time_pane_t1

0x2285,	// (0x0007846b) image3_infobar_loc_pane_g1

0x41e1,	// (0x0007a3c7) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x00086037) image3_infobar_loc_pane_g

0x41e9,	// (0x0007a3cf) image3_infobar_loc_pane_t1

0x2285,	// (0x0007846b) image3_infobar_fav_pane_g1

0x41f7,	// (0x0007a3dd) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0008603c) image3_infobar_fav_pane_g

0x41ff,	// (0x0007a3e5) fs_bigclock_status_battery_pane

0x4208,	// (0x0007a3ee) fs_bigclock_status_signal_pane

0x4211,	// (0x0007a3f7) fs_bigclock_status_title_pane

0x421a,	// (0x0007a400) fs_bigclock_status_signal_pane_g1

0x4223,	// (0x0007a409) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x00086041) fs_bigclock_status_signal_pane_g

0x422b,	// (0x0007a411) fs_bigclock_status_battery_pane_g1

0x4234,	// (0x0007a41a) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x00086046) fs_bigclock_status_battery_pane_g

0x423c,	// (0x0007a422) fs_bigclock_status_title_pane_t1

0x2285,	// (0x0007846b) main_fs_bigclock_clock_pane_g1

0x424a,	// (0x0007a430) main_fs_bigclock_clock_pane_g2

0x4253,	// (0x0007a439) main_fs_bigclock_clock_pane_g3

0x4253,	// (0x0007a439) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0008604b) main_fs_bigclock_clock_pane_g

0x425b,	// (0x0007a441) main_fs_bigclock_clock_pane_t1

0xde62,	// (0x00084048) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x00086054) main_fs_bigclock_clock_pane_t

0x4269,	// (0x0007a44f) list_single_fs_bigclock_indicator_pane_ParamLimits

0x4269,	// (0x0007a44f) list_single_fs_bigclock_indicator_pane

0x427a,	// (0x0007a460) list_single_fs_bigclock_pane_ParamLimits

0x427a,	// (0x0007a460) list_single_fs_bigclock_pane

0x42a0,	// (0x0007a486) main_fs_bigclock_indicator_pane_t1

0x42af,	// (0x0007a495) list_single_fs_bigclock_pane_g1

0x42b7,	// (0x0007a49d) list_single_fs_bigclock_pane_t1

0x2285,	// (0x0007846b) main_fs_bigclock_swipe_pane_g1

0x42fa,	// (0x0007a4e0) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x00086065) main_fs_bigclock_swipe_pane_g

0x4302,	// (0x0007a4e8) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x4302,	// (0x0007a4e8) main_fs_bigclock_swipe_pane_t1

0x8b88,	// (0x0007ed6e) call_type_pane_ParamLimits

0xe76f,	// (0x00084955) main_btmg_pane

0x6466,	// (0x0007c64c) list_single_cale_mrui_row_pane_g2_ParamLimits

0x6466,	// (0x0007c64c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x00085fd8) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x00085fd8) list_single_cale_mrui_row_pane_g

0x658e,	// (0x0007c774) list_recal_vselct_arw_lo_pane

0x411a,	// (0x0007a300) list_recal_vselct_arw_up_pane

0x6596,	// (0x0007c77c) list_recal_vselct_pane

0xdeb5,	// (0x0008409b) btmg_button_pane

0xdec1,	// (0x000840a7) main_btmg_pane_g1

0xe76f,	// (0x00084955) bg_button_pane_cp044

0x431f,	// (0x0007a505) btmg_button_pane_t1

0x1e5d,	// (0x00078043) aid_listscroll_gen

0xf0af,	// (0x00085295) main_cntbar_detail_pane

0x3e3d,	// (0x0007a023) list_cmail_folder_pane

0x1f62,	// (0x00078148) sp_fs_scroll_pane_cp03_ParamLimits

0x6636,	// (0x0007c81c) list_single_fs_dyc_pane_cp01_ParamLimits

0x6636,	// (0x0007c81c) list_single_fs_dyc_pane_cp01

0x432d,	// (0x0007a513) aid_size_cmail_indent

0x6661,	// (0x0007c847) list_single_dyc_row_pane_cp01

0xdee9,	// (0x000840cf) cntbar_detail_list_pane_ParamLimits

0xdee9,	// (0x000840cf) cntbar_detail_list_pane

0xdf23,	// (0x00084109) main_cntbar_detail_cont_pane_ParamLimits

0xdf23,	// (0x00084109) main_cntbar_detail_cont_pane

0x8b7c,	// (0x0007ed62) scroll_pane_cp032_ParamLimits

0x8b7c,	// (0x0007ed62) scroll_pane_cp032

0xdf2f,	// (0x00084115) cntbar_detail_list_event_pane_ParamLimits

0xdf2f,	// (0x00084115) cntbar_detail_list_event_pane

0xdef5,	// (0x000840db) cntbar_detail_list_shct_pane

0x02ac,	// (0x00076492) aid_list_gen

0x4336,	// (0x0007a51c) aid_scroll

0x433f,	// (0x0007a525) aid_size_touch_scroll_bar

0xebca,	// (0x00084db0) aid_list_double

0xdf43,	// (0x00084129) aid_list_single

0xca7a,	// (0x00082c60) aid_list_single_lg

0x666a,	// (0x0007c850) aid_list_z_g_a_sm

0xdf4c,	// (0x00084132) aid_list_z_g_d

0x6672,	// (0x0007c858) aid_txt_z_prm

0x6680,	// (0x0007c866) aid_txt_z_prm_cp01

0x668e,	// (0x0007c874) aid_txt_z_sec

0xdf54,	// (0x0008413a) main_cntbar_detail_cont_pane_g1_ParamLimits

0xdf54,	// (0x0008413a) main_cntbar_detail_cont_pane_g1

0xdf61,	// (0x00084147) main_cntbar_detail_cont_pane_g2_ParamLimits

0xdf61,	// (0x00084147) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0008606a) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0008606a) main_cntbar_detail_cont_pane_g

0x4348,	// (0x0007a52e) main_cntbar_detail_cont_pane_t1

0x4356,	// (0x0007a53c) main_cntbar_detail_cont_pane_t2

0x4364,	// (0x0007a54a) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0008606f) main_cntbar_detail_cont_pane_t

0xdf6d,	// (0x00084153) cell_cntbar_detail_list_shct_pane_ParamLimits

0xdf6d,	// (0x00084153) cell_cntbar_detail_list_shct_pane

0x4372,	// (0x0007a558) cntbar_detail_list_shct_pane_g1

0x437b,	// (0x0007a561) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x00086076) cntbar_detail_list_shct_pane_g

0xdf81,	// (0x00084167) cntbar_detail_list_event_pane_g1_ParamLimits

0xdf81,	// (0x00084167) cntbar_detail_list_event_pane_g1

0xdf8d,	// (0x00084173) cntbar_detail_list_event_pane_g2_ParamLimits

0xdf8d,	// (0x00084173) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0008607b) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0008607b) cntbar_detail_list_event_pane_g

0xdff9,	// (0x000841df) cntbar_detail_list_event_pane_t1_ParamLimits

0xdff9,	// (0x000841df) cntbar_detail_list_event_pane_t1

0xe00e,	// (0x000841f4) cntbar_detail_list_event_pane_t2_ParamLimits

0xe00e,	// (0x000841f4) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x00086088) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x00086088) cntbar_detail_list_event_pane_t

0x2285,	// (0x0007846b) cell_cntbar_detail_list_shct_pane_g1

0x0a23,	// (0x00076c09) navi_pane_mv_g3

0xf0af,	// (0x00085295) main_cntbar_detail_pane_ParamLimits

0xe76f,	// (0x00084955) main_notif_wgt_pane

0xb444,	// (0x0008162a) aid_tch_main_mp4_pane_g4

0xb679,	// (0x0008185f) popup_slider_window_cp02

0x6584,	// (0x0007c76a) list_recal_day_event_pane

0xdec9,	// (0x000840af) cntbar_detail_btn_pane_ParamLimits

0xdec9,	// (0x000840af) cntbar_detail_btn_pane

0xded9,	// (0x000840bf) cntbar_detail_btn_pane_cp01_ParamLimits

0xded9,	// (0x000840bf) cntbar_detail_btn_pane_cp01

0xdef5,	// (0x000840db) cntbar_detail_list_shct_pane_ParamLimits

0xdf01,	// (0x000840e7) cntbar_detail_pane_g1_ParamLimits

0xdf01,	// (0x000840e7) cntbar_detail_pane_g1

0xdf0d,	// (0x000840f3) cntbar_detail_pane_t1_ParamLimits

0xdf0d,	// (0x000840f3) cntbar_detail_pane_t1

0xdf99,	// (0x0008417f) cntbar_detail_list_event_pane_g3_ParamLimits

0xdf99,	// (0x0008417f) cntbar_detail_list_event_pane_g3

0xdfb1,	// (0x00084197) cntbar_detail_list_event_pane_g4_ParamLimits

0xdfb1,	// (0x00084197) cntbar_detail_list_event_pane_g4

0xdfc9,	// (0x000841af) cntbar_detail_list_event_pane_g5_ParamLimits

0xdfc9,	// (0x000841af) cntbar_detail_list_event_pane_g5

0xdfe1,	// (0x000841c7) cntbar_detail_list_event_pane_g6_ParamLimits

0xdfe1,	// (0x000841c7) cntbar_detail_list_event_pane_g6

0xe023,	// (0x00084209) cntbar_detail_list_event_pane_t3_ParamLimits

0xe023,	// (0x00084209) cntbar_detail_list_event_pane_t3

0xe035,	// (0x0008421b) popup_notif_wgt_window_ParamLimits

0xe035,	// (0x0008421b) popup_notif_wgt_window

0xe045,	// (0x0008422b) popup_submenu_window_cp01_ParamLimits

0xe045,	// (0x0008422b) popup_submenu_window_cp01

0x0a6b,	// (0x00076c51) bg_popup_window_pane_cp10

0x4384,	// (0x0007a56a) listscroll_notif_wgt_pane

0x4396,	// (0x0007a57c) list_notif_wgt_window

0x439f,	// (0x0007a585) scroll_pane_cp033

0xe057,	// (0x0008423d) list_notif_wgt_row_pane_ParamLimits

0xe057,	// (0x0008423d) list_notif_wgt_row_pane

0x43a8,	// (0x0007a58e) aid_size_list_notif_wgt_del

0x43b5,	// (0x0007a59b) list_notif_wgt_row_pane_g1

0x43c1,	// (0x0007a5a7) list_notif_wgt_row_pane_g2

0x43d5,	// (0x0007a5bb) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0008608f) list_notif_wgt_row_pane_g

0x43e2,	// (0x0007a5c8) list_notif_wgt_row_pane_t1

0x43f8,	// (0x0007a5de) list_notif_wgt_row_pane_t2

0x440a,	// (0x0007a5f0) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x00086096) list_notif_wgt_row_pane_t

0x2f5f,	// (0x00079145) list_recal_day_event_pane_g1

0x441c,	// (0x0007a602) list_recal_day_event_pane_t1

0xe76f,	// (0x00084955) bg_button_pane_cp045

0xe069,	// (0x0008424f) cntbar_detail_btn_pane_t1

0x1e71,	// (0x00078057) main_callh_pane_ParamLimits

0x1e71,	// (0x00078057) main_callh_pane

0xe76f,	// (0x00084955) main_coverflow0_pane

0xe76f,	// (0x00084955) main_wgtman_pane

0xd645,	// (0x0008382b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xd645,	// (0x0008382b) main_fs_bigclock_unlock_btn_pane

0xda12,	// (0x00083bf8) bg_button_pane_cp16

0xda22,	// (0x00083c08) cell_tport_appsw_pane_g3

0xe077,	// (0x0008425d) cf0_flow_pane_ParamLimits

0xe077,	// (0x0008425d) cf0_flow_pane

0x442b,	// (0x0007a611) listscroll_cf0_pane

0x4436,	// (0x0007a61c) main_cf0_pane_g1

0xe086,	// (0x0008426c) main_cf0_pane_t1_ParamLimits

0xe086,	// (0x0008426c) main_cf0_pane_t1

0xe09a,	// (0x00084280) main_cf0_pane_t2_ParamLimits

0xe09a,	// (0x00084280) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x000860a2) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x000860a2) main_cf0_pane_t

0x4448,	// (0x0007a62e) scroll_pane_cp11

0xe0ae,	// (0x00084294) cf0_flow_pane_g1

0xe0b6,	// (0x0008429c) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x000860a7) cf0_flow_pane_g

0xe0be,	// (0x000842a4) cf0_flow_pane_t1

0xe76f,	// (0x00084955) main_call6_pane

0xe76f,	// (0x00084955) main_calllock_pane

0xe0cc,	// (0x000842b2) call6_btn_grp_pane_ParamLimits

0xe0cc,	// (0x000842b2) call6_btn_grp_pane

0xe0db,	// (0x000842c1) call6_pane_g1_ParamLimits

0xe0db,	// (0x000842c1) call6_pane_g1

0xe0ea,	// (0x000842d0) popup_call6_1st_window_ParamLimits

0xe0ea,	// (0x000842d0) popup_call6_1st_window

0xe0f8,	// (0x000842de) popup_call6_2nd_window_ParamLimits

0xe0f8,	// (0x000842de) popup_call6_2nd_window

0xe106,	// (0x000842ec) cell_call6_btn_pane_ParamLimits

0xe106,	// (0x000842ec) cell_call6_btn_pane

0x0a6b,	// (0x00076c51) bg_popup_call2_in_pane_cp03

0x4453,	// (0x0007a639) popup_call6_1st_window_g1

0x445b,	// (0x0007a641) popup_call6_1st_window_g2

0x4463,	// (0x0007a649) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x000860ac) popup_call6_1st_window_g

0x446b,	// (0x0007a651) popup_call6_1st_window_t1

0x447a,	// (0x0007a660) popup_call6_1st_window_t2

0x448a,	// (0x0007a670) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x000860b3) popup_call6_1st_window_t

0x0a6b,	// (0x00076c51) bg_popup_call2_in_pane_cp04

0x4453,	// (0x0007a639) popup_call6_2nd_window_g1

0x445b,	// (0x0007a641) popup_call6_2nd_window_g2

0x4463,	// (0x0007a649) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x000860ac) popup_call6_2nd_window_g

0x446b,	// (0x0007a651) popup_call6_2nd_window_t1

0xe76f,	// (0x00084955) bg_button_pane_cp15

0x449a,	// (0x0007a680) cell_call6_btn_pane_g1

0x44a3,	// (0x0007a689) cell_call6_btn_pane_t1

0xe115,	// (0x000842fb) listscroll_wgtman_pane_ParamLimits

0xe115,	// (0x000842fb) listscroll_wgtman_pane

0xe131,	// (0x00084317) wgtman_btn_pane_ParamLimits

0xe131,	// (0x00084317) wgtman_btn_pane

0x082a,	// (0x00076a10) aid_scroll_copy1

0x44b2,	// (0x0007a698) list_wgtman_pane

0xe166,	// (0x0008434c) wgtman_btn_pane_g1_ParamLimits

0xe166,	// (0x0008434c) wgtman_btn_pane_g1

0xe18e,	// (0x00084374) wgtman_btn_pane_t1_ParamLimits

0xe18e,	// (0x00084374) wgtman_btn_pane_t1

0x44bc,	// (0x0007a6a2) wgtman_btn_pane_t2_ParamLimits

0x44bc,	// (0x0007a6a2) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x000860ba) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x000860ba) wgtman_btn_pane_t

0xe1c5,	// (0x000843ab) listrow_wgtman_pane_ParamLimits

0xe1c5,	// (0x000843ab) listrow_wgtman_pane

0xe1e0,	// (0x000843c6) listrow_wgtman_pane_g1

0xe1ed,	// (0x000843d3) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x000860bf) listrow_wgtman_pane_g

0x669c,	// (0x0007c882) listrow_wgtman_pane_t1

0x66b4,	// (0x0007c89a) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x000860c4) listrow_wgtman_pane_t

0x66da,	// (0x0007c8c0) wait_bar_pane_cp09

0x44d3,	// (0x0007a6b9) main_calllock_btn_pane

0x44dd,	// (0x0007a6c3) main_calllock_pane_g1

0xe76f,	// (0x00084955) bg_button_pane_cp17

0x44e9,	// (0x0007a6cf) main_calllock_btn_pane_g1

0x44f2,	// (0x0007a6d8) main_calllock_btn_pane_t1

0xe76f,	// (0x00084955) main_dialer3_pane

0xe76f,	// (0x00084955) main_fmrd2_pane

0x2285,	// (0x0007846b) main_fs_bigclock_unlock_btn_pane_g1

0x4509,	// (0x0007a6ef) main_fs_bigclock_unlock_btn_pane_t1

0xe20b,	// (0x000843f1) area_fmrd2_info_pane_ParamLimits

0xe20b,	// (0x000843f1) area_fmrd2_info_pane

0xe219,	// (0x000843ff) area_fmrd2_visual_pane_ParamLimits

0xe219,	// (0x000843ff) area_fmrd2_visual_pane

0xe227,	// (0x0008440d) fmrd2_indi_pane_ParamLimits

0xe227,	// (0x0008440d) fmrd2_indi_pane

0xe234,	// (0x0008441a) area_fmrd2_visual_pane_g1

0xe23c,	// (0x00084422) area_fmrd2_visual_pane_t1

0xe24c,	// (0x00084432) area_fmrd2_visual_pane_t2

0xe25c,	// (0x00084442) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x000860ce) area_fmrd2_visual_pane_t

0xe26c,	// (0x00084452) area_fmrd2_info_pane_g1

0xe274,	// (0x0008445a) area_fmrd2_info_pane_t1

0xe284,	// (0x0008446a) area_fmrd2_info_pane_t2

0xe294,	// (0x0008447a) area_fmrd2_info_pane_t3

0xe2a4,	// (0x0008448a) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x000860d5) area_fmrd2_info_pane_t

0xe2b2,	// (0x00084498) fmrd2_indi_pane_t1

0xe2c2,	// (0x000844a8) fmrd2_indi_pane_t2

0xe2d2,	// (0x000844b8) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x000860de) fmrd2_indi_pane_t

0x3ad0,	// (0x00079cb6) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x3ad0,	// (0x00079cb6) list_single_fs_bigclock_indicator_pane_g5

0x3b80,	// (0x00079d66) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x3b80,	// (0x00079d66) list_single_fs_bigclock_indicator_pane_t5

0xdbad,	// (0x00083d93) aid_cell_bcale_month_pane_ParamLimits

0xdbad,	// (0x00083d93) aid_cell_bcale_month_pane

0xdbcb,	// (0x00083db1) bcale_month_pane_ParamLimits

0xdbcb,	// (0x00083db1) bcale_month_pane

0xdbe9,	// (0x00083dcf) bcale_preview_pane_ParamLimits

0xdbe9,	// (0x00083dcf) bcale_preview_pane

0x42b7,	// (0x0007a49d) list_single_fs_bigclock_pane_t1_ParamLimits

0x42d6,	// (0x0007a4bc) list_single_fs_bigclock_pane_t2_ParamLimits

0x42d6,	// (0x0007a4bc) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x00086060) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x00086060) list_single_fs_bigclock_pane_t

0x4501,	// (0x0007a6e7) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x000860c9) main_fs_bigclock_unlock_btn_pane_g

0xe2e0,	// (0x000844c6) aid_dia3_key_size_ParamLimits

0xe2e0,	// (0x000844c6) aid_dia3_key_size

0xe2ec,	// (0x000844d2) aid_dia3_listrow_size_ParamLimits

0xe2ec,	// (0x000844d2) aid_dia3_listrow_size

0xe2fc,	// (0x000844e2) dia3_keypad_fun_pane_ParamLimits

0xe2fc,	// (0x000844e2) dia3_keypad_fun_pane

0xe30e,	// (0x000844f4) dia3_keypad_num_pane_ParamLimits

0xe30e,	// (0x000844f4) dia3_keypad_num_pane

0xe320,	// (0x00084506) dia3_listscroll_pane_ParamLimits

0xe320,	// (0x00084506) dia3_listscroll_pane

0xe32e,	// (0x00084514) dia3_numentry_pane_ParamLimits

0xe32e,	// (0x00084514) dia3_numentry_pane

0x4517,	// (0x0007a6fd) dia3_list_pane

0x4522,	// (0x0007a708) scroll_pane_cp12

0xe76f,	// (0x00084955) bg_dia3_numentry_pane

0xe33c,	// (0x00084522) dia3_numentry_pane_t1

0xe34b,	// (0x00084531) cell_dia3_key_num_pane

0xe353,	// (0x00084539) cell_dia3_key0_fun_pane_ParamLimits

0xe353,	// (0x00084539) cell_dia3_key0_fun_pane

0xe360,	// (0x00084546) cell_dia3_key1_fun_pane_ParamLimits

0xe360,	// (0x00084546) cell_dia3_key1_fun_pane

0xe36d,	// (0x00084553) dia3_listrow_pane

0x37df,	// (0x000799c5) bg_dia3_numentry_pane_g1

0xe76f,	// (0x00084955) bg_button_pane_cp21

0x452d,	// (0x0007a713) cell_dia3_key_num_pane_t1

0x453b,	// (0x0007a721) cell_dia3_key_num_pane_t2

0x454a,	// (0x0007a730) cell_dia3_key_num_pane_t3

0x4559,	// (0x0007a73f) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x000860e5) cell_dia3_key_num_pane_t

0xe76f,	// (0x00084955) bg_button_pane_cp19

0xe37a,	// (0x00084560) cell_dia3_key0_fun_pane_g1

0xe76f,	// (0x00084955) bg_button_pane_cp20

0xe382,	// (0x00084568) cell_dia3_key1_fun_pane_g1

0xe38a,	// (0x00084570) area_left_week_number_pane

0xe39d,	// (0x00084583) area_top_day_name_pane

0xe3ab,	// (0x00084591) frame_month_view_pane

0x4568,	// (0x0007a74e) grid_month_view_pane

0xe3c0,	// (0x000845a6) cell_top_day_name_pane_ParamLimits

0xe3c0,	// (0x000845a6) cell_top_day_name_pane

0xe3da,	// (0x000845c0) cell_area_left_week_number_pane_ParamLimits

0xe3da,	// (0x000845c0) cell_area_left_week_number_pane

0xe3fd,	// (0x000845e3) cell_month_view_pane_ParamLimits

0xe3fd,	// (0x000845e3) cell_month_view_pane

0x4576,	// (0x0007a75c) frm_month_g1

0xe429,	// (0x0008460f) frm_month_g2

0xe43a,	// (0x00084620) frm_month_g3

0xe44b,	// (0x00084631) frm_month_g4

0xe45c,	// (0x00084642) frm_month_g5

0xe46f,	// (0x00084655) frm_month_g6

0xe482,	// (0x00084668) frm_month_g7

0x4583,	// (0x0007a769) frm_month_g8

0xe495,	// (0x0008467b) frm_month_g9

0xe4a2,	// (0x00084688) frm_month_g10

0xe4af,	// (0x00084695) frm_month_g11

0xe4bc,	// (0x000846a2) frm_month_g12

0xe4c9,	// (0x000846af) frm_month_g13

0xe4d6,	// (0x000846bc) frm_month_g14

0xe4e5,	// (0x000846cb) frm_month_g15

0xe4f4,	// (0x000846da) frm_month_g16

0x000f,

0xff08,	// (0x000860ee) frm_month_g

0x4590,	// (0x0007a776) cell_top_day_name_pane_t1

0xe503,	// (0x000846e9) cell_area_left_week_number_pane_g1

0xe512,	// (0x000846f8) cell_area_left_week_number_pane_t1

0x24f1,	// (0x000786d7) cell_month_view_pane_g1

0xe528,	// (0x0008470e) cell_month_view_pane_t1

0xe76f,	// (0x00084955) main_fps_pane

0x3d55,	// (0x00079f3b) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3d55,	// (0x00079f3b) cmail_ddmenu_btn02_pane_cp1

0x3d71,	// (0x00079f57) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x3d71,	// (0x00079f57) cmail_ddmenu_btn02_pane_cp2

0xdde1,	// (0x00083fc7) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xdde1,	// (0x00083fc7) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x00086013) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x00086013) cmail_ddmenu_btn02_pane_g

0xddff,	// (0x00083fe5) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xddff,	// (0x00083fe5) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x00086018) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x00086018) cmail_ddmenu_btn02_pane_t

0xe53e,	// (0x00084724) fps_text_pane_ParamLimits

0xe53e,	// (0x00084724) fps_text_pane

0xe54b,	// (0x00084731) main_fps_pane_g1_ParamLimits

0xe54b,	// (0x00084731) main_fps_pane_g1

0xe559,	// (0x0008473f) wait_bar_pane_cp010_ParamLimits

0xe559,	// (0x0008473f) wait_bar_pane_cp010

0xe565,	// (0x0008474b) fps_text_pane_t1_ParamLimits

0xe565,	// (0x0008474b) fps_text_pane_t1

0xba5b,	// (0x00081c41) cam4_image_uncrop_pane_g1

0xba64,	// (0x00081c4a) cam4_image_uncrop_pane_g2

0xba6d,	// (0x00081c53) cam4_image_uncrop_pane_g3

0xba76,	// (0x00081c5c) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x00085ad4) cam4_image_uncrop_pane_g

0xe36d,	// (0x00084553) dia3_listrow_pane_ParamLimits

0xe76f,	// (0x00084955) main_phob2_pane

0xd9f4,	// (0x00083bda) cell_tport_appsw_pane_cp02_ParamLimits

0xd9f4,	// (0x00083bda) cell_tport_appsw_pane_cp02

0xda03,	// (0x00083be9) cell_tport_appsw_pane_cp03_ParamLimits

0xda03,	// (0x00083be9) cell_tport_appsw_pane_cp03

0xe76f,	// (0x00084955) phob2_contact_card_pane

0xe76f,	// (0x00084955) phob2_listscroll_pane

0x45a3,	// (0x0007a789) phob2_list_pane

0x45ab,	// (0x0007a791) scroll_pane_cp034

0xe57e,	// (0x00084764) phob2_cc_data_pane_ParamLimits

0xe57e,	// (0x00084764) phob2_cc_data_pane

0xe598,	// (0x0008477e) phob2_cc_listscroll_pane_ParamLimits

0xe598,	// (0x0008477e) phob2_cc_listscroll_pane

0xe5b2,	// (0x00084798) list_double_large_graphic_phob2_pane_ParamLimits

0xe5b2,	// (0x00084798) list_double_large_graphic_phob2_pane

0xe5d0,	// (0x000847b6) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xe5d0,	// (0x000847b6) list_double_large_graphic_phob2_pane_g1

0x66ec,	// (0x0007c8d2) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x66ec,	// (0x0007c8d2) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0008610f) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0008610f) list_double_large_graphic_phob2_pane_g

0x66f8,	// (0x0007c8de) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x66f8,	// (0x0007c8de) list_double_large_graphic_phob2_pane_t1

0x670d,	// (0x0007c8f3) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x670d,	// (0x0007c8f3) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x00086114) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x00086114) list_double_large_graphic_phob2_pane_t

0xe76f,	// (0x00084955) list_highlight_pane_cp024

0xe5e6,	// (0x000847cc) phob2_cc_button_pane

0xe5ee,	// (0x000847d4) phob2_cc_data_pane_g1_ParamLimits

0xe5ee,	// (0x000847d4) phob2_cc_data_pane_g1

0xe5fa,	// (0x000847e0) phob2_cc_data_pane_g2_ParamLimits

0xe5fa,	// (0x000847e0) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x00086119) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x00086119) phob2_cc_data_pane_g

0xe606,	// (0x000847ec) phob2_cc_data_pane_t1_ParamLimits

0xe606,	// (0x000847ec) phob2_cc_data_pane_t1

0xe618,	// (0x000847fe) phob2_cc_data_pane_t2_ParamLimits

0xe618,	// (0x000847fe) phob2_cc_data_pane_t2

0xe62a,	// (0x00084810) phob2_cc_data_pane_t3_ParamLimits

0xe62a,	// (0x00084810) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0008611e) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0008611e) phob2_cc_data_pane_t

0x45b3,	// (0x0007a799) phob2_cc_list_pane_ParamLimits

0x45b3,	// (0x0007a799) phob2_cc_list_pane

0x2ff6,	// (0x000791dc) scroll_pane_cp035_ParamLimits

0x2ff6,	// (0x000791dc) scroll_pane_cp035

0xf0af,	// (0x00085295) bg_button_pane_cp033

0x45bf,	// (0x0007a7a5) phob2_cc_button_pane_g1

0x45cb,	// (0x0007a7b1) phob2_cc_button_pane_t1

0x45e0,	// (0x0007a7c6) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x00086125) phob2_cc_button_pane_t

0xe63c,	// (0x00084822) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xe63c,	// (0x00084822) list_double_large_graphic_phob2_cc_pane

0xe663,	// (0x00084849) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xe663,	// (0x00084849) list_double_large_graphic_phob2_cc_pane_g1

0xe674,	// (0x0008485a) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xe674,	// (0x0008485a) list_double_large_graphic_phob2_cc_pane_g2

0x671f,	// (0x0007c905) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x671f,	// (0x0007c905) list_double_large_graphic_phob2_cc_pane_g3

0x672b,	// (0x0007c911) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x672b,	// (0x0007c911) list_double_large_graphic_phob2_cc_pane_g4

0x6737,	// (0x0007c91d) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x6737,	// (0x0007c91d) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0008612a) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0008612a) list_double_large_graphic_phob2_cc_pane_g

0x6743,	// (0x0007c929) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x6743,	// (0x0007c929) list_double_large_graphic_phob2_cc_pane_t1

0x676c,	// (0x0007c952) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x676c,	// (0x0007c952) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x00086135) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x00086135) list_double_large_graphic_phob2_cc_pane_t

0x45f2,	// (0x0007a7d8) list_highlight_pane_cp025_ParamLimits

0x45f2,	// (0x0007a7d8) list_highlight_pane_cp025

0xf0af,	// (0x00085295) bg_button_pane_cp033_ParamLimits

0x45bf,	// (0x0007a7a5) phob2_cc_button_pane_g1_ParamLimits

0x45cb,	// (0x0007a7b1) phob2_cc_button_pane_t1_ParamLimits

0x45e0,	// (0x0007a7c6) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x00086125) phob2_cc_button_pane_t_ParamLimits

0x6a6c,	// (0x0007cc52) popup_wgtman_window

0x2e3b,	// (0x00079021) scroll_pane_cp038

0xe14e,	// (0x00084334) wgtman_btn_pane_cp_01_ParamLimits

0xe14e,	// (0x00084334) wgtman_btn_pane_cp_01

0x4600,	// (0x0007a7e6) wgtman_content_pane

0x4609,	// (0x0007a7ef) wgtman_heading_pane

0xe76f,	// (0x00084955) bg_heading_pane_cp02

0x4612,	// (0x0007a7f8) wgtman_heading_pane_g1

0x461a,	// (0x0007a800) wgtman_heading_pane_t1

0x4628,	// (0x0007a80e) scroll_pane_cp036

0x4630,	// (0x0007a816) wgtman_list_pane

0x4638,	// (0x0007a81e) wgtman_list_pane_t1_ParamLimits

0x4638,	// (0x0007a81e) wgtman_list_pane_t1

0xb9ba,	// (0x00081ba0) cam4_grid_pane

0x59c2,	// (0x0007bba8) bg_button_pane_cp015_ParamLimits

0xc6a0,	// (0x00082886) bg_button_pane_cp016_ParamLimits

0xc6b3,	// (0x00082899) bg_button_pane_cp017_ParamLimits

0x5a06,	// (0x0007bbec) popup_vitu2_query_window_g3_ParamLimits

0x5a06,	// (0x0007bbec) popup_vitu2_query_window_g3

0x5a7f,	// (0x0007bc65) popup_vitu2_query_window_t6_ParamLimits

0x5a7f,	// (0x0007bc65) popup_vitu2_query_window_t6

0x5aaa,	// (0x0007bc90) popup_vitu2_query_window_t7_ParamLimits

0x5aaa,	// (0x0007bc90) popup_vitu2_query_window_t7

0x3427,	// (0x0007960d) cam4_grid_pane_g1

0x3430,	// (0x00079616) cam4_grid_pane_g2

0x4652,	// (0x0007a838) cam4_grid_pane_g3

0x465b,	// (0x0007a841) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0008613a) cam4_grid_pane_g

0x7900,	// (0x0007dae6) aid_placing_vt_slider_lsc_ParamLimits

0x7c4c,	// (0x0007de32) vidtel_button_pane_ParamLimits

0x7c4c,	// (0x0007de32) vidtel_button_pane

0x4666,	// (0x0007a84c) bg_button_pane_cp034

0xe680,	// (0x00084866) vidtel_button_pane_g1

0x4670,	// (0x0007a856) vidtel_button_pane_t1

0x2f3d,	// (0x00079123) aid_size_vtel_slider_touch

0x2ff6,	// (0x000791dc) scroll_pane_cp039

0x381d,	// (0x00079a03) ncim_query_button_pane_cp01_ParamLimits

0x383c,	// (0x00079a22) ncimui_query_pane_g1_ParamLimits

0xf0af,	// (0x00085295) input_focus_pane_cp012_ParamLimits

0x3861,	// (0x00079a47) ncim_query_entry_pane_t1_ParamLimits

0x2ff6,	// (0x000791dc) scroll_pane_cp039_ParamLimits

0x090e,	// (0x00076af4) navi_pane_bcale_mc_g1

0x0916,	// (0x00076afc) navi_pane_bcale_mc_t1

0x3dba,	// (0x00079fa0) main_sp_fs_email_pane_g1

0x3dc6,	// (0x00079fac) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x00085ecb) main_sp_fs_email_pane_g

0x401b,	// (0x0007a201) list_single_cale_mrui_row_pane_g3_ParamLimits

0x401b,	// (0x0007a201) list_single_cale_mrui_row_pane_g3

0x65f4,	// (0x0007c7da) list_single_recal_day_pane_g5_event_pane

0x660a,	// (0x0007c7f0) list_single_recal_day_pane_g7

0x467e,	// (0x0007a864) list_recal_day_event_pane_cp01

0x4687,	// (0x0007a86d) list_recal_vselct_arw_lo_pane_cp01

0x468f,	// (0x0007a875) list_recal_vselct_arw_up_pane_cp01

0x4697,	// (0x0007a87d) list_recal_vselct_pane_cp01

0x2f5f,	// (0x00079145) list_recal_day_event_pane_cp01_g1

0x6795,	// (0x0007c97b) list_recal_day_event_pane_cp01_t1

0x6612,	// (0x0007c7f8) list_single_recal_day_pane_t1_ParamLimits

0x6624,	// (0x0007c80a) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x00086028) list_single_recal_day_pane_t_ParamLimits

0xedfe,	// (0x00084fe4) bg_notes_pane_ParamLimits

0xeea1,	// (0x00085087) list_notes_pane_ParamLimits

0x6dca,	// (0x0007cfb0) scroll_pane_cp06_ParamLimits

0xeec3,	// (0x000850a9) main_notes_pane_ParamLimits

0xe76f,	// (0x00084955) main_welc_pane

0xe688,	// (0x0008486e) main_welc_body_pane_ParamLimits

0xe688,	// (0x0008486e) main_welc_body_pane

0xe6a2,	// (0x00084888) main_welc_opti_pane_ParamLimits

0xe6a2,	// (0x00084888) main_welc_opti_pane

0xe6d5,	// (0x000848bb) main_welc_pane_t1_ParamLimits

0xe6d5,	// (0x000848bb) main_welc_pane_t1

0xe6ef,	// (0x000848d5) main_welc_body_row_pane_ParamLimits

0xe6ef,	// (0x000848d5) main_welc_body_row_pane

0x3e7f,	// (0x0007a065) main_welc_opti_row_pane_ParamLimits

0x3e7f,	// (0x0007a065) main_welc_opti_row_pane

0x46a1,	// (0x0007a887) main_welc_opti_row_pane_g1

0xe714,	// (0x000848fa) main_welc_opti_row_pane_t1

0x46a9,	// (0x0007a88f) main_welc_body_row_pane_t1

0x438e,	// (0x0007a574) popup_notif_wgt_heading_pane

0x43a8,	// (0x0007a58e) aid_size_list_notif_wgt_del_ParamLimits

0x43b5,	// (0x0007a59b) list_notif_wgt_row_pane_g1_ParamLimits

0x43c1,	// (0x0007a5a7) list_notif_wgt_row_pane_g2_ParamLimits

0x43d5,	// (0x0007a5bb) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0008608f) list_notif_wgt_row_pane_g_ParamLimits

0x43e2,	// (0x0007a5c8) list_notif_wgt_row_pane_t1_ParamLimits

0x43f8,	// (0x0007a5de) list_notif_wgt_row_pane_t2_ParamLimits

0x440a,	// (0x0007a5f0) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x00086096) list_notif_wgt_row_pane_t_ParamLimits

0xe1e0,	// (0x000843c6) listrow_wgtman_pane_g1_ParamLimits

0xe1ed,	// (0x000843d3) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x000860bf) listrow_wgtman_pane_g_ParamLimits

0x669c,	// (0x0007c882) listrow_wgtman_pane_t1_ParamLimits

0x66b4,	// (0x0007c89a) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x000860c4) listrow_wgtman_pane_t_ParamLimits

0x66da,	// (0x0007c8c0) wait_bar_pane_cp09_ParamLimits

0xe76f,	// (0x00084955) bg_popup_heading_pane_cp02

0x46b8,	// (0x0007a89e) popup_notif_wgt_heading_pane_g1

0x46c0,	// (0x0007a8a6) popup_notif_wgt_heading_pane_t1

0xe76f,	// (0x00084955) main_vids_pane

0xe76f,	// (0x00084955) vids_listscroll_pane

0xe723,	// (0x00084909) scroll_pane_cp040

0xe76f,	// (0x00084955) vids_list_pane

0xe72e,	// (0x00084914) vids_list_double_pane_ParamLimits

0xe72e,	// (0x00084914) vids_list_double_pane

0xe748,	// (0x0008492e) vids_list_double_pane_g1

0xe751,	// (0x00084937) vids_list_double_pane_t1

0xe761,	// (0x00084947) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x00086148) vids_list_double_pane_t

0xf0af,	// (0x00085295) main_ncimui_pane_ParamLimits

0xd217,	// (0x000833fd) main_ncimui_pane_g1_ParamLimits

0xd223,	// (0x00083409) main_ncimui_pane_g2_ParamLimits

0xd223,	// (0x00083409) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x00085dd0) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x00085dd0) main_ncimui_pane_g

0xe6bb,	// (0x000848a1) main_welc_pane_g1_ParamLimits

0xe6bb,	// (0x000848a1) main_welc_pane_g1

0xe6c7,	// (0x000848ad) main_welc_pane_g2_ParamLimits

0xe6c7,	// (0x000848ad) main_welc_pane_g2

0x0001,

0xff5d,	// (0x00086143) main_welc_pane_g_ParamLimits

0xff5d,	// (0x00086143) main_welc_pane_g

0xedfe,	// (0x00084fe4) listscroll_mce_pane_ParamLimits

0x0a63,	// (0x00076c49) wait_bar_pane_cp10

0x1e65,	// (0x0007804b) main_cale_day_pane_ParamLimits

0x1e65,	// (0x0007804b) main_cale_week_pane_ParamLimits

0xedfe,	// (0x00084fe4) main_messa_pane_ParamLimits

0xae1a,	// (0x00081000) main_clock2_btn_pane_ParamLimits

0xae1a,	// (0x00081000) main_clock2_btn_pane

0x2699,	// (0x0007887f) main_clock2_btn_pane_cp01_ParamLimits

0x2699,	// (0x0007887f) main_clock2_btn_pane_cp01

0x3fec,	// (0x0007a1d2) list_cale_mrui_pane_ParamLimits

0x4440,	// (0x0007a626) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0008609d) main_cf0_pane_g

0xe38a,	// (0x00084570) area_left_week_number_pane_ParamLimits

0xe39d,	// (0x00084583) area_top_day_name_pane_ParamLimits

0xe3ab,	// (0x00084591) frame_month_view_pane_ParamLimits

0x4568,	// (0x0007a74e) grid_month_view_pane_ParamLimits

0x4576,	// (0x0007a75c) frm_month_g1_ParamLimits

0xe429,	// (0x0008460f) frm_month_g2_ParamLimits

0xe43a,	// (0x00084620) frm_month_g3_ParamLimits

0xe44b,	// (0x00084631) frm_month_g4_ParamLimits

0xe45c,	// (0x00084642) frm_month_g5_ParamLimits

0xe46f,	// (0x00084655) frm_month_g6_ParamLimits

0xe482,	// (0x00084668) frm_month_g7_ParamLimits

0x4583,	// (0x0007a769) frm_month_g8_ParamLimits

0xe495,	// (0x0008467b) frm_month_g9_ParamLimits

0xe4a2,	// (0x00084688) frm_month_g10_ParamLimits

0xe4af,	// (0x00084695) frm_month_g11_ParamLimits

0xe4bc,	// (0x000846a2) frm_month_g12_ParamLimits

0xe4c9,	// (0x000846af) frm_month_g13_ParamLimits

0xe4d6,	// (0x000846bc) frm_month_g14_ParamLimits

0xe4e5,	// (0x000846cb) frm_month_g15_ParamLimits

0xe4f4,	// (0x000846da) frm_month_g16_ParamLimits

0xff08,	// (0x000860ee) frm_month_g_ParamLimits

0x4590,	// (0x0007a776) cell_top_day_name_pane_t1_ParamLimits

0xe503,	// (0x000846e9) cell_area_left_week_number_pane_g1_ParamLimits

0xe512,	// (0x000846f8) cell_area_left_week_number_pane_t1_ParamLimits

0x24f1,	// (0x000786d7) cell_month_view_pane_g1_ParamLimits

0xe528,	// (0x0008470e) cell_month_view_pane_t1_ParamLimits

0xedf6,	// (0x00084fdc) main_clock2_btn_pane_g1

0x46ce,	// (0x0007a8b4) main_clock2_btn_pane_t1

0xf0af,	// (0x00085295) listscroll_cmail_pane_ParamLimits

0x3dba,	// (0x00079fa0) main_sp_fs_email_pane_g1_ParamLimits

0x3dc6,	// (0x00079fac) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x00085ecb) main_sp_fs_email_pane_g_ParamLimits

0x40fb,	// (0x0007a2e1) list_recal_day_pane_ParamLimits

0x410c,	// (0x0007a2f2) mian_recal_day_pane_t1

0x5fe5,	// (0x0007c1cb) list_single_dyc_row_text_pane_t4_ParamLimits

0x5fe5,	// (0x0007c1cb) list_single_dyc_row_text_pane_t4

0x601c,	// (0x0007c202) list_single_dyc_row_text_pane_t5_ParamLimits

0x601c,	// (0x0007c202) list_single_dyc_row_text_pane_t5

0x6092,	// (0x0007c278) list_single_dyc_row_text_pane_t6_ParamLimits

0x6092,	// (0x0007c278) list_single_dyc_row_text_pane_t6

0x8aae,	// (0x0007ec94) aid_mgn_list_cale_time_pane

0xf0af,	// (0x00085295) main_gallery2_pane_ParamLimits

0x26af,	// (0x00078895) main_clock2_pane_cp01_t1

0x26bf,	// (0x000788a5) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x000859aa) main_clock2_pane_cp01_t

0x720c,	// (0x0007d3f2) cale_week_scroll_pane_g16_ParamLimits

0x720c,	// (0x0007d3f2) cale_week_scroll_pane_g16
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large
