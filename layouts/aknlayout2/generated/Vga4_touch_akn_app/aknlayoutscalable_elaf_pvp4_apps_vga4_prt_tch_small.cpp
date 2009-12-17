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

#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0002f62c };

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
0x66bc,	// (0x00035ce8) Screen

0x66c8,	// (0x00035cf4) application_window

0x6708,	// (0x00035d34) area_bottom_pane_ParamLimits

0x6708,	// (0x00035d34) area_bottom_pane

0x673d,	// (0x00035d69) area_top_pane_ParamLimits

0x673d,	// (0x00035d69) area_top_pane

0xdcba,	// (0x0003d2e6) call_video_uplink_pane_ParamLimits

0xdcba,	// (0x0003d2e6) call_video_uplink_pane

0x67cb,	// (0x00035df7) main_pane_ParamLimits

0x67cb,	// (0x00035df7) main_pane

0x15f8,	// (0x00030c24) context_pane

0x9750,	// (0x00038d7c) navi_pane

0x9774,	// (0x00038da0) popup_cale_events_window_ParamLimits

0x9774,	// (0x00038da0) popup_cale_events_window

0x160b,	// (0x00030c37) popup_mup_playback_window

0x978c,	// (0x00038db8) signal_pane

0xe411,	// (0x0003da3d) main_browser_pane

0xee6d,	// (0x0003e499) main_burst_pane

0x9602,	// (0x00038c2e) main_calc_pane

0xee6d,	// (0x0003e499) main_cale_day_pane

0xe411,	// (0x0003da3d) main_cale_month_pane

0xee6d,	// (0x0003e499) main_cale_week_pane

0xee6d,	// (0x0003e499) main_call_pane

0xe0eb,	// (0x0003d717) main_call_poc_pane

0xee6d,	// (0x0003e499) main_camera_pane

0xee6d,	// (0x0003e499) main_chi_dic_pane

0xed0f,	// (0x0003e33b) main_clock_pane

0xe0eb,	// (0x0003d717) main_fmradio_pane

0xee6d,	// (0x0003e499) main_graph_messa_pane

0xe0eb,	// (0x0003d717) main_help_pane

0xe411,	// (0x0003da3d) main_im_pane

0xe346,	// (0x0003d972) main_image_pane_ParamLimits

0xe346,	// (0x0003d972) main_image_pane

0xe0eb,	// (0x0003d717) main_location2_pane

0xee6d,	// (0x0003e499) main_location_pane

0xe0eb,	// (0x0003d717) main_messa_pane

0xe0eb,	// (0x0003d717) main_mp2_pane

0xee6d,	// (0x0003e499) main_mp_pane

0xe0eb,	// (0x0003d717) main_msg_pane

0xe0eb,	// (0x0003d717) main_mup_eq_pane

0xe0eb,	// (0x0003d717) main_mup_pane

0xee6d,	// (0x0003e499) main_notes_pane

0xe0eb,	// (0x0003d717) main_pec_pane

0xe0eb,	// (0x0003d717) main_phob_pane

0xe0eb,	// (0x0003d717) main_pinb_pane

0xe0eb,	// (0x0003d717) main_postcard_pane

0xe0eb,	// (0x0003d717) main_qdial_pane

0xee6d,	// (0x0003e499) main_skin_pane

0xe0eb,	// (0x0003d717) main_smil2_pane

0xee6d,	// (0x0003e499) main_smil_pane

0xee6d,	// (0x0003e499) main_video_pane

0xee6d,	// (0x0003e499) main_video_tele_pane

0xe346,	// (0x0003d972) main_viewer_pane_ParamLimits

0xe346,	// (0x0003d972) main_viewer_pane

0xee6d,	// (0x0003e499) main_vorec_pane

0x963a,	// (0x00038c66) popup_blid_sat_info_window_ParamLimits

0x963a,	// (0x00038c66) popup_blid_sat_info_window

0x9654,	// (0x00038c80) popup_dyc_status_message_window_ParamLimits

0x9654,	// (0x00038c80) popup_dyc_status_message_window

0x9664,	// (0x00038c90) popup_grid_large_graphic_window_ParamLimits

0x9664,	// (0x00038c90) popup_grid_large_graphic_window

0x96dc,	// (0x00038d08) popup_loc_request_window_ParamLimits

0x96dc,	// (0x00038d08) popup_loc_request_window

0x9724,	// (0x00038d50) popup_wml_address_window_ParamLimits

0x9724,	// (0x00038d50) popup_wml_address_window

0x94da,	// (0x00038b06) call_muted_g1

0x9196,	// (0x000387c2) popup_call_audio_conf_window_ParamLimits

0x9196,	// (0x000387c2) popup_call_audio_conf_window

0x94ea,	// (0x00038b16) popup_call_audio_first_window_ParamLimits

0x94ea,	// (0x00038b16) popup_call_audio_first_window

0x952a,	// (0x00038b56) popup_call_audio_in_window_ParamLimits

0x952a,	// (0x00038b56) popup_call_audio_in_window

0x954e,	// (0x00038b7a) popup_call_audio_out_window_ParamLimits

0x954e,	// (0x00038b7a) popup_call_audio_out_window

0x9570,	// (0x00038b9c) popup_call_audio_second_window_ParamLimits

0x9570,	// (0x00038b9c) popup_call_audio_second_window

0x95a0,	// (0x00038bcc) popup_call_audio_wait_window_ParamLimits

0x95a0,	// (0x00038bcc) popup_call_audio_wait_window

0x95c1,	// (0x00038bed) popup_number_entry_window_ParamLimits

0x95c1,	// (0x00038bed) popup_number_entry_window

0xdcd8,	// (0x0003d304) bg_popup_call_pane_cp05_ParamLimits

0xdcd8,	// (0x0003d304) bg_popup_call_pane_cp05

0xdcf8,	// (0x0003d324) popup_number_entry_window_t1

0xdd0b,	// (0x0003d337) popup_number_entry_window_t2

0xdd1d,	// (0x0003d349) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x0003e75b) popup_number_entry_window_t

0xdd2f,	// (0x0003d35b) text_title_cp2

0xdd42,	// (0x0003d36e) bg_popup_call_pane_cp_ParamLimits

0xdd42,	// (0x0003d36e) bg_popup_call_pane_cp

0xdd50,	// (0x0003d37c) call_thumbnail_pane

0xdd58,	// (0x0003d384) popup_call_audio_in_window_g1_ParamLimits

0xdd58,	// (0x0003d384) popup_call_audio_in_window_g1

0xdd64,	// (0x0003d390) popup_call_audio_in_window_g2_ParamLimits

0xdd64,	// (0x0003d390) popup_call_audio_in_window_g2

0xdd70,	// (0x0003d39c) popup_call_audio_in_window_g3_ParamLimits

0xdd70,	// (0x0003d39c) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x0003e764) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x0003e764) popup_call_audio_in_window_g

0xdd7c,	// (0x0003d3a8) popup_call_audio_in_window_t1_ParamLimits

0xdd7c,	// (0x0003d3a8) popup_call_audio_in_window_t1

0xdd98,	// (0x0003d3c4) popup_call_audio_in_window_t2_ParamLimits

0xdd98,	// (0x0003d3c4) popup_call_audio_in_window_t2

0xddb4,	// (0x0003d3e0) popup_call_audio_in_window_t3_ParamLimits

0xddb4,	// (0x0003d3e0) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x0003e76b) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x0003e76b) popup_call_audio_in_window_t

0xdd42,	// (0x0003d36e) bg_popup_call_pane_cp01_ParamLimits

0xdd42,	// (0x0003d36e) bg_popup_call_pane_cp01

0xdd50,	// (0x0003d37c) call_thumbnail_pane_cp02

0xddc7,	// (0x0003d3f3) call_type_pane_cp022

0xddcf,	// (0x0003d3fb) popup_call_audio_out_window_g1_ParamLimits

0xddcf,	// (0x0003d3fb) popup_call_audio_out_window_g1

0xdde1,	// (0x0003d40d) popup_call_audio_out_window_g2_ParamLimits

0xdde1,	// (0x0003d40d) popup_call_audio_out_window_g2

0xdded,	// (0x0003d419) popup_call_audio_out_window_g3_ParamLimits

0xdded,	// (0x0003d419) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x0003e772) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x0003e772) popup_call_audio_out_window_g

0xddff,	// (0x0003d42b) popup_call_audio_out_window_t1_ParamLimits

0xddff,	// (0x0003d42b) popup_call_audio_out_window_t1

0xde17,	// (0x0003d443) popup_call_audio_out_window_t2_ParamLimits

0xde17,	// (0x0003d443) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x0003e779) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x0003e779) popup_call_audio_out_window_t

0xde2c,	// (0x0003d458) bg_popup_call_pane_ParamLimits

0xde2c,	// (0x0003d458) bg_popup_call_pane

0x69c1,	// (0x00035fed) call_thumbnail_pane_cp_ParamLimits

0x69c1,	// (0x00035fed) call_thumbnail_pane_cp

0xdeb0,	// (0x0003d4dc) call_type_pane_cp01_ParamLimits

0xdeb0,	// (0x0003d4dc) call_type_pane_cp01

0xdef4,	// (0x0003d520) popup_call_audio_first_window_g1_ParamLimits

0xdef4,	// (0x0003d520) popup_call_audio_first_window_g1

0xdf40,	// (0x0003d56c) popup_call_audio_first_window_g2_ParamLimits

0xdf40,	// (0x0003d56c) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x0003e77e) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x0003e77e) popup_call_audio_first_window_g

0xdf84,	// (0x0003d5b0) popup_call_audio_first_window_t1_ParamLimits

0xdf84,	// (0x0003d5b0) popup_call_audio_first_window_t1

0xe030,	// (0x0003d65c) popup_call_audio_first_window_t4_ParamLimits

0xe030,	// (0x0003d65c) popup_call_audio_first_window_t4

0xe0bc,	// (0x0003d6e8) popup_call_audio_first_window_t5_ParamLimits

0xe0bc,	// (0x0003d6e8) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x0003e783) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x0003e783) popup_call_audio_first_window_t

0xe0eb,	// (0x0003d717) bg_popup_call_pane_cp02

0xe0f5,	// (0x0003d721) call_type_pane_cp023

0xe0fd,	// (0x0003d729) popup_call_audio_wait_window_g1

0xe105,	// (0x0003d731) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0003e78a) popup_call_audio_wait_window_g

0xe10d,	// (0x0003d739) popup_call_audio_wait_window_t3

0xe11b,	// (0x0003d747) bg_popup_call_pane_cp03_ParamLimits

0xe11b,	// (0x0003d747) bg_popup_call_pane_cp03

0xe17b,	// (0x0003d7a7) call_thumbnail_pane_cp011_ParamLimits

0xe17b,	// (0x0003d7a7) call_thumbnail_pane_cp011

0xe187,	// (0x0003d7b3) call_type_pane_cp034_ParamLimits

0xe187,	// (0x0003d7b3) call_type_pane_cp034

0xe1c3,	// (0x0003d7ef) popup_call_audio_second_window_g1_ParamLimits

0xe1c3,	// (0x0003d7ef) popup_call_audio_second_window_g1

0xe1ff,	// (0x0003d82b) popup_call_audio_second_window_g2_ParamLimits

0xe1ff,	// (0x0003d82b) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x0003e78f) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x0003e78f) popup_call_audio_second_window_g

0xe23b,	// (0x0003d867) popup_call_audio_second_window_t1_ParamLimits

0xe23b,	// (0x0003d867) popup_call_audio_second_window_t1

0xe2bc,	// (0x0003d8e8) popup_call_audio_second_window_t2_ParamLimits

0xe2bc,	// (0x0003d8e8) popup_call_audio_second_window_t2

0xe2f2,	// (0x0003d91e) popup_call_audio_second_window_t3_ParamLimits

0xe2f2,	// (0x0003d91e) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x0003e794) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x0003e794) popup_call_audio_second_window_t

0xe0eb,	// (0x0003d717) bg_popup_call_pane_cp04

0xe328,	// (0x0003d954) list_conf_pane

0xe330,	// (0x0003d95c) popup_call_audio_conf_window_t1

0xe33e,	// (0x0003d96a) call_thumbnail_pane_g1

0xe346,	// (0x0003d972) bg_pinb_pane_ParamLimits

0xe346,	// (0x0003d972) bg_pinb_pane

0xe354,	// (0x0003d980) find_pinb_pane

0xe35d,	// (0x0003d989) listscroll_pinb_pane_ParamLimits

0xe35d,	// (0x0003d989) listscroll_pinb_pane

0xe36c,	// (0x0003d998) pinb_bg_pane_g1

0x69e5,	// (0x00036011) pinb_bg_pane_g2

0x69f1,	// (0x0003601d) pinb_bg_pane_g3

0x69fd,	// (0x00036029) pinb_bg_pane_g4

0x6a09,	// (0x00036035) pinb_bg_pane_g5

0x6a15,	// (0x00036041) pinb_bg_pane_g6

0x6a20,	// (0x0003604c) pinb_bg_pane_g7

0x6a2b,	// (0x00036057) pinb_bg_pane_g8

0x6a36,	// (0x00036062) pinb_bg_pane_g9

0x6a40,	// (0x0003606c) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x0003e79b) pinb_bg_pane_g

0x6a5d,	// (0x00036089) grid_pinb_pane

0x6a68,	// (0x00036094) list_pinb_pane

0x6a73,	// (0x0003609f) scroll_pane_cp01_ParamLimits

0x6a73,	// (0x0003609f) scroll_pane_cp01

0xe376,	// (0x0003d9a2) find_pinb_pane_g1_ParamLimits

0xe376,	// (0x0003d9a2) find_pinb_pane_g1

0xe38e,	// (0x0003d9ba) find_pinb_pane_t1

0xe3a0,	// (0x0003d9cc) find_pinb_pane_t2

0x0001,

0xf189,	// (0x0003e7b5) find_pinb_pane_t

0xe3b5,	// (0x0003d9e1) input_focus_pane_cp01_ParamLimits

0xe3b5,	// (0x0003d9e1) input_focus_pane_cp01

0x6a85,	// (0x000360b1) cell_pinb_pane_ParamLimits

0x6a85,	// (0x000360b1) cell_pinb_pane

0x6aa5,	// (0x000360d1) cell_pinb_pane_g1_ParamLimits

0x6aa5,	// (0x000360d1) cell_pinb_pane_g1

0x6aba,	// (0x000360e6) cell_pinb_pane_g2_ParamLimits

0x6aba,	// (0x000360e6) cell_pinb_pane_g2

0xe3c1,	// (0x0003d9ed) cell_pinb_pane_g3_ParamLimits

0xe3c1,	// (0x0003d9ed) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x0003e7ba) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x0003e7ba) cell_pinb_pane_g

0xe0eb,	// (0x0003d717) grid_highlight_pane_cp01

0x6ac6,	// (0x000360f2) list_pinb_item_pane_ParamLimits

0x6ac6,	// (0x000360f2) list_pinb_item_pane

0xe0eb,	// (0x0003d717) list_highlight_pane_cp02

0x6ae1,	// (0x0003610d) list_pinb_item_pane_g1_ParamLimits

0x6ae1,	// (0x0003610d) list_pinb_item_pane_g1

0x6aee,	// (0x0003611a) list_pinb_item_pane_g2_ParamLimits

0x6aee,	// (0x0003611a) list_pinb_item_pane_g2

0x6afa,	// (0x00036126) list_pinb_item_pane_g3_ParamLimits

0x6afa,	// (0x00036126) list_pinb_item_pane_g3

0x6b0b,	// (0x00036137) list_pinb_item_pane_g4_ParamLimits

0x6b0b,	// (0x00036137) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x0003e7c1) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x0003e7c1) list_pinb_item_pane_g

0x6b17,	// (0x00036143) list_pinb_item_pane_t1_ParamLimits

0x6b17,	// (0x00036143) list_pinb_item_pane_t1

0x6b48,	// (0x00036174) calc_display_pane

0x6b66,	// (0x00036192) calc_paper_pane

0x6b82,	// (0x000361ae) grid_calc_pane

0xe0eb,	// (0x0003d717) bg_list_pane_cp01

0x6bae,	// (0x000361da) clock_g1

0x6bb6,	// (0x000361e2) clock_g2

0x0001,

0xf19e,	// (0x0003e7ca) clock_g

0x6bc0,	// (0x000361ec) clock_t1_ParamLimits

0x6bc0,	// (0x000361ec) clock_t1

0x6bd5,	// (0x00036201) clock_t2_ParamLimits

0x6bd5,	// (0x00036201) clock_t2

0x6be7,	// (0x00036213) clock_t3_ParamLimits

0x6be7,	// (0x00036213) clock_t3

0x6bf9,	// (0x00036225) clock_t4_ParamLimits

0x6bf9,	// (0x00036225) clock_t4

0x6c0b,	// (0x00036237) clock_t5_ParamLimits

0x6c0b,	// (0x00036237) clock_t5

0x6c20,	// (0x0003624c) clock_t6_ParamLimits

0x6c20,	// (0x0003624c) clock_t6

0x6c32,	// (0x0003625e) clock_t7_ParamLimits

0x6c32,	// (0x0003625e) clock_t7

0x6c44,	// (0x00036270) clock_t8_ParamLimits

0x6c44,	// (0x00036270) clock_t8

0x6c5a,	// (0x00036286) clock_t9_ParamLimits

0x6c5a,	// (0x00036286) clock_t9

0x0008,

0xf1a3,	// (0x0003e7cf) clock_t_ParamLimits

0xf1a3,	// (0x0003e7cf) clock_t

0xe3cd,	// (0x0003d9f9) popup_clock_analogue_window_cp02

0xe3cd,	// (0x0003d9f9) popup_clock_digital_window_cp01

0xe3d5,	// (0x0003da01) listscroll_help_pane

0xe0eb,	// (0x0003d717) phob_pre_status_pane

0xe3df,	// (0x0003da0b) grid_qdial_pane

0xe0eb,	// (0x0003d717) listscroll_mce_pane

0xe3e9,	// (0x0003da15) bg_notes_pane

0xe3f3,	// (0x0003da1f) list_notes_pane

0x6c70,	// (0x0003629c) scroll_pane_cp06

0xe3fd,	// (0x0003da29) bg_calc_paper_pane

0x6c7b,	// (0x000362a7) list_calc_pane

0xe411,	// (0x0003da3d) bg_calc_display_pane

0x6c95,	// (0x000362c1) calc_display_pane_t1

0x6caa,	// (0x000362d6) calc_display_pane_t2

0x6cbf,	// (0x000362eb) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x0003e7e2) calc_display_pane_t

0x6cd1,	// (0x000362fd) cell_calc_pane_ParamLimits

0x6cd1,	// (0x000362fd) cell_calc_pane

0xe41d,	// (0x0003da49) bg_calc_paper_pane_g1

0xe429,	// (0x0003da55) bg_calc_paper_pane_g2

0xe435,	// (0x0003da61) bg_calc_paper_pane_g3

0xe441,	// (0x0003da6d) bg_calc_paper_pane_g4

0xe44d,	// (0x0003da79) bg_calc_paper_pane_g5

0x6d00,	// (0x0003632c) bg_calc_paper_pane_g6

0x6d11,	// (0x0003633d) bg_calc_paper_pane_g7

0x6d22,	// (0x0003634e) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x0003e7e9) bg_calc_paper_pane_g

0x6d33,	// (0x0003635f) calc_bg_paper_pane_g9

0x6d44,	// (0x00036370) list_calc_item_pane_ParamLimits

0x6d44,	// (0x00036370) list_calc_item_pane

0xe459,	// (0x0003da85) list_calc_item_pane_g1

0x6d68,	// (0x00036394) list_calc_item_pane_t1_ParamLimits

0x6d68,	// (0x00036394) list_calc_item_pane_t1

0x6d7a,	// (0x000363a6) list_calc_item_pane_t2_ParamLimits

0x6d7a,	// (0x000363a6) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x0003e7fa) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x0003e7fa) list_calc_item_pane_t

0xe466,	// (0x0003da92) cell_calc_pane_g1

0xe470,	// (0x0003da9c) grid_highlight_pane_cp02

0xe492,	// (0x0003dabe) bg_calc_display_pane_g1

0x6daa,	// (0x000363d6) bg_calc_display_pane_g2

0xe49b,	// (0x0003dac7) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x0003e804) bg_calc_display_pane_g

0x6db4,	// (0x000363e0) cell_qdial_pane_ParamLimits

0x6db4,	// (0x000363e0) cell_qdial_pane

0x6dca,	// (0x000363f6) cell_qdial_pane_g1_ParamLimits

0x6dca,	// (0x000363f6) cell_qdial_pane_g1

0x6dd7,	// (0x00036403) cell_qdial_pane_g2_ParamLimits

0x6dd7,	// (0x00036403) cell_qdial_pane_g2

0xe4a4,	// (0x0003dad0) cell_qdial_pane_g3_ParamLimits

0xe4a4,	// (0x0003dad0) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x0003e80b) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x0003e80b) cell_qdial_pane_g

0x6df5,	// (0x00036421) cell_qdial_pane_t1_ParamLimits

0x6df5,	// (0x00036421) cell_qdial_pane_t1

0x6e0d,	// (0x00036439) cell_qdial_pane_t2_ParamLimits

0x6e0d,	// (0x00036439) cell_qdial_pane_t2

0x6e20,	// (0x0003644c) cell_qdial_pane_t3_ParamLimits

0x6e20,	// (0x0003644c) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x0003e814) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x0003e814) cell_qdial_pane_t

0xe0eb,	// (0x0003d717) grid_highlight_pane_cp04

0xe4b0,	// (0x0003dadc) thumbnail_qdial_pane_ParamLimits

0xe4b0,	// (0x0003dadc) thumbnail_qdial_pane

0xe50c,	// (0x0003db38) list_help_pane

0xe515,	// (0x0003db41) scroll_pane_cp02

0x6e33,	// (0x0003645f) help_list_pane_t1_ParamLimits

0x6e33,	// (0x0003645f) help_list_pane_t1

0x6e5d,	// (0x00036489) bg_notes_pane_g2

0x6e65,	// (0x00036491) bg_notes_pane_g3

0x6e6d,	// (0x00036499) notes_bg_pane_g1

0x6e75,	// (0x000364a1) notes_bg_pane_g4

0x6e7d,	// (0x000364a9) notes_bg_pane_g5

0x6e85,	// (0x000364b1) notes_bg_pane_g6

0x6e8d,	// (0x000364b9) notes_bg_pane_g7

0x6e95,	// (0x000364c1) notes_bg_pane_g8

0x6e9d,	// (0x000364c9) notes_bg_pane_g9

0x0006,

0xf206,	// (0x0003e832) notes_bg_pane_g

0x6ea5,	// (0x000364d1) list_notes_text_pane_ParamLimits

0x6ea5,	// (0x000364d1) list_notes_text_pane

0xe51e,	// (0x0003db4a) list_notes_text_pane_g1

0x562f,	// (0x00034c5b) list_notes_text_pane_t1

0xe411,	// (0x0003da3d) listscroll_cale_week_pane

0x6edf,	// (0x0003650b) bg_cale_heading_pane

0xe538,	// (0x0003db64) bg_cale_pane_cp01

0x6ef3,	// (0x0003651f) cale_week_corner_pane

0x6f09,	// (0x00036535) cale_week_day_heading_pane

0x6f1d,	// (0x00036549) cale_week_scroll_pane_g1

0x6f2e,	// (0x0003655a) cale_week_scroll_pane_g2

0x6f3f,	// (0x0003656b) cale_week_scroll_pane_g3

0x6f50,	// (0x0003657c) cale_week_scroll_pane_g4

0x6f61,	// (0x0003658d) cale_week_scroll_pane_g5

0x6f72,	// (0x0003659e) cale_week_scroll_pane_g6

0x6f85,	// (0x000365b1) cale_week_scroll_pane_g7

0x6f98,	// (0x000365c4) cale_week_scroll_pane_g8

0x6fab,	// (0x000365d7) cale_week_scroll_pane_g9

0x6fbc,	// (0x000365e8) cale_week_scroll_pane_g10

0x6fcd,	// (0x000365f9) cale_week_scroll_pane_g11

0x6fde,	// (0x0003660a) cale_week_scroll_pane_g12

0x6fef,	// (0x0003661b) cale_week_scroll_pane_g13

0x7000,	// (0x0003662c) cale_week_scroll_pane_g14

0x7011,	// (0x0003663d) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x0003e841) cale_week_scroll_pane_g

0x7022,	// (0x0003664e) cale_week_time_pane

0x7035,	// (0x00036661) grid_cale_week_pane

0x704a,	// (0x00036676) scroll_pane_cp08

0x7064,	// (0x00036690) cell_cale_week_pane_ParamLimits

0x7064,	// (0x00036690) cell_cale_week_pane

0x70a2,	// (0x000366ce) cale_week_day_heading_pane_t1

0x70cf,	// (0x000366fb) cale_week_day_heading_pane_t2

0x70fc,	// (0x00036728) cale_week_day_heading_pane_t3

0x7129,	// (0x00036755) cale_week_day_heading_pane_t4

0x7156,	// (0x00036782) cale_week_day_heading_pane_t5

0x7183,	// (0x000367af) cale_week_day_heading_pane_t6

0x71b0,	// (0x000367dc) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x0003e860) cale_week_day_heading_pane_t

0xe563,	// (0x0003db8f) bg_cale_side_pane

0x71dd,	// (0x00036809) cale_week_time_pane_t1

0x7209,	// (0x00036835) cale_week_time_pane_t2

0x7235,	// (0x00036861) cale_week_time_pane_t3

0x7261,	// (0x0003688d) cale_week_time_pane_t4

0x728d,	// (0x000368b9) cale_week_time_pane_t5

0x72b9,	// (0x000368e5) cale_week_time_pane_t6

0x72e5,	// (0x00036911) cale_week_time_pane_t7

0x7311,	// (0x0003693d) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x0003e86f) cale_week_time_pane_t

0x733d,	// (0x00036969) cell_cale_week_pane_g2

0x7356,	// (0x00036982) cell_cale_week_pane_g3_ParamLimits

0x7356,	// (0x00036982) cell_cale_week_pane_g3

0xe571,	// (0x0003db9d) grid_highlight_pane_cp07

0xe579,	// (0x0003dba5) listscroll_gms_pane

0xe583,	// (0x0003dbaf) grid_gms_pane

0xe58c,	// (0x0003dbb8) listscroll_gms_pane_g1

0xe594,	// (0x0003dbc0) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x0003e880) listscroll_gms_pane_g

0x736e,	// (0x0003699a) scroll_pane_cp010

0x7379,	// (0x000369a5) cell_gms_pane_ParamLimits

0x7379,	// (0x000369a5) cell_gms_pane

0x738c,	// (0x000369b8) cell_gms_pane_g1

0xe59c,	// (0x0003dbc8) cell_gms_pane_g2

0xe5a4,	// (0x0003dbd0) cell_gms_pane_g3

0xe5ad,	// (0x0003dbd9) cell_gms_pane_g4

0x0003,

0xf259,	// (0x0003e885) cell_gms_pane_g

0xe5b6,	// (0x0003dbe2) grid_highlight_pane_cp09

0x9482,	// (0x00038aae) phob_pre_status_pane_g1

0x948a,	// (0x00038ab6) phob_pre_status_pane_g2

0x9492,	// (0x00038abe) phob_pre_status_pane_g3

0x949a,	// (0x00038ac6) phob_pre_status_pane_g4

0x0004,

0xf648,	// (0x0003ec74) phob_pre_status_pane_g

0x94aa,	// (0x00038ad6) phob_pre_status_pane_t1

0x94ba,	// (0x00038ae6) phob_pre_status_pane_t2

0x94ca,	// (0x00038af6) phob_pre_status_pane_t3

0x0002,

0xf653,	// (0x0003ec7f) phob_pre_status_pane_t

0xe0eb,	// (0x0003d717) bg_list_pane_cp05

0x739c,	// (0x000369c8) grid_vorec_pane

0x73a6,	// (0x000369d2) vorec_t1

0x73b4,	// (0x000369e0) vorec_t2

0x73c2,	// (0x000369ee) vorec_t3

0x73d0,	// (0x000369fc) vorec_t4

0x73de,	// (0x00036a0a) vorec_t5

0x73ec,	// (0x00036a18) vorec_t6

0x0006,

0xf262,	// (0x0003e88e) vorec_t

0x7408,	// (0x00036a34) wait_bar_pane_cp01

0x7410,	// (0x00036a3c) cell_vorec_pane_ParamLimits

0x7410,	// (0x00036a3c) cell_vorec_pane

0xe5be,	// (0x0003dbea) cell_vorec_pane_g1

0xe0eb,	// (0x0003d717) grid_highlight_pane_cp05

0x7435,	// (0x00036a61) cams_zoom_pane

0x7441,	// (0x00036a6d) image_vga_pane

0x7450,	// (0x00036a7c) main_camera_pane_g1

0x745e,	// (0x00036a8a) main_camera_pane_g2

0x746a,	// (0x00036a96) main_camera_pane_g3

0x7478,	// (0x00036aa4) main_camera_pane_g4

0x7486,	// (0x00036ab2) main_camera_pane_g5

0x7494,	// (0x00036ac0) main_camera_pane_g6

0x74a2,	// (0x00036ace) main_camera_pane_g7

0x0007,

0xf271,	// (0x0003e89d) main_camera_pane_g

0x74b0,	// (0x00036adc) main_camera_pane_t1

0x74c2,	// (0x00036aee) main_camera_pane_t2

0x0001,

0xf282,	// (0x0003e8ae) main_camera_pane_t

0x74e5,	// (0x00036b11) cams_zoom_pane_cp_ParamLimits

0x74e5,	// (0x00036b11) cams_zoom_pane_cp

0x7509,	// (0x00036b35) image_cif_pane_ParamLimits

0x7509,	// (0x00036b35) image_cif_pane

0x7527,	// (0x00036b53) image_subqcif_pane

0x7531,	// (0x00036b5d) main_video_pane_g1_ParamLimits

0x7531,	// (0x00036b5d) main_video_pane_g1

0x7551,	// (0x00036b7d) main_video_pane_g2_ParamLimits

0x7551,	// (0x00036b7d) main_video_pane_g2

0x7581,	// (0x00036bad) main_video_pane_g3_ParamLimits

0x7581,	// (0x00036bad) main_video_pane_g3

0x75aa,	// (0x00036bd6) main_video_pane_g4_ParamLimits

0x75aa,	// (0x00036bd6) main_video_pane_g4

0x75d3,	// (0x00036bff) main_video_pane_g5_ParamLimits

0x75d3,	// (0x00036bff) main_video_pane_g5

0xe5d4,	// (0x0003dc00) main_video_pane_g6_ParamLimits

0xe5d4,	// (0x0003dc00) main_video_pane_g6

0x0006,

0xf287,	// (0x0003e8b3) main_video_pane_g_ParamLimits

0xf287,	// (0x0003e8b3) main_video_pane_g

0x75f5,	// (0x00036c21) main_video_pane_t1_ParamLimits

0x75f5,	// (0x00036c21) main_video_pane_t1

0xe5ee,	// (0x0003dc1a) cams_zoom_pane_g1

0xe5f7,	// (0x0003dc23) cams_zoom_pane_g2

0xe600,	// (0x0003dc2c) cams_zoom_pane_g3

0xe609,	// (0x0003dc35) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x0003e8c2) cams_zoom_pane_g

0x763f,	// (0x00036c6b) grid_cams_pane

0x764d,	// (0x00036c79) linegrid_cams_pane

0x765b,	// (0x00036c87) cell_cams_pane_ParamLimits

0x765b,	// (0x00036c87) cell_cams_pane

0xe612,	// (0x0003dc3e) cams_burst_image_pane

0xe61a,	// (0x0003dc46) cell_cams_pane_g1

0xe0eb,	// (0x0003d717) grid_highlight_pane_cp03

0xe466,	// (0x0003da92) mp_bg_pane_g1

0xe0eb,	// (0x0003d717) bg_list_pane_cp03

0x14ca,	// (0x00030af6) bg_mp_pane

0x14d2,	// (0x00030afe) grid_mp_pane

0x14da,	// (0x00030b06) media_player_g1

0x14e4,	// (0x00030b10) media_player_t1

0x14f2,	// (0x00030b1e) media_player_t2

0x1500,	// (0x00030b2c) media_player_t3

0x150e,	// (0x00030b3a) media_player_t4

0x151c,	// (0x00030b48) media_player_t5

0x152a,	// (0x00030b56) media_player_t6

0x1538,	// (0x00030b64) media_player_t7

0x0006,

0xf632,	// (0x0003ec5e) media_player_t

0x1546,	// (0x00030b72) wait_bar_pane_cp02

0xf617,	// (0x0003ec43) main_usb_pane_t

0x9479,	// (0x00038aa5) cell_mp_pane

0xe466,	// (0x0003da92) cell_mp_pane_g1

0xe0eb,	// (0x0003d717) grid_highlight_pane_cp06

0xe622,	// (0x0003dc4e) grid_skin_colour_pane

0xe62a,	// (0x0003dc56) list_highlight_pane_cp03

0x7670,	// (0x00036c9c) skin_g1

0xe632,	// (0x0003dc5e) skin_t1

0xe641,	// (0x0003dc6d) skin_t2

0x0001,

0xf2cb,	// (0x0003e8f7) skin_t

0x767a,	// (0x00036ca6) cell_skin_colour_pane_ParamLimits

0x767a,	// (0x00036ca6) cell_skin_colour_pane

0xe64f,	// (0x0003dc7b) cell_skin_colour_pane_g1

0x76c9,	// (0x00036cf5) call_video_g1_ParamLimits

0x76c9,	// (0x00036cf5) call_video_g1

0x76d9,	// (0x00036d05) call_video_g2_ParamLimits

0x76d9,	// (0x00036d05) call_video_g2

0x0001,

0xf2d0,	// (0x0003e8fc) call_video_g_ParamLimits

0xf2d0,	// (0x0003e8fc) call_video_g

0x7711,	// (0x00036d3d) call_video_uplink_pane_cp1_ParamLimits

0x7711,	// (0x00036d3d) call_video_uplink_pane_cp1

0xe669,	// (0x0003dc95) call_video_uplink_pane_cp2

0x77bf,	// (0x00036deb) video_down_crop_pane_ParamLimits

0x77bf,	// (0x00036deb) video_down_crop_pane

0x7897,	// (0x00036ec3) video_down_pane_ParamLimits

0x7897,	// (0x00036ec3) video_down_pane

0xe671,	// (0x0003dc9d) video_down_subqcif_pane_ParamLimits

0xe671,	// (0x0003dc9d) video_down_subqcif_pane

0xe68b,	// (0x0003dcb7) video_down_subqcif_pane_cp_ParamLimits

0xe68b,	// (0x0003dcb7) video_down_subqcif_pane_cp

0xe6b1,	// (0x0003dcdd) im_reading_pane_ParamLimits

0xe6b1,	// (0x0003dcdd) im_reading_pane

0x7974,	// (0x00036fa0) im_writing_pane_ParamLimits

0x7974,	// (0x00036fa0) im_writing_pane

0x7992,	// (0x00036fbe) im_reading_pane_t1

0xe6cb,	// (0x0003dcf7) list_im_pane

0xe6dc,	// (0x0003dd08) scroll_pane_cp07

0x79da,	// (0x00037006) im_writing_pane_t1_ParamLimits

0x79da,	// (0x00037006) im_writing_pane_t1

0xe6f5,	// (0x0003dd21) im_writing_pane_t2_ParamLimits

0xe6f5,	// (0x0003dd21) im_writing_pane_t2

0x0001,

0xf2da,	// (0x0003e906) im_writing_pane_t_ParamLimits

0xf2da,	// (0x0003e906) im_writing_pane_t

0xe0eb,	// (0x0003d717) input_focus_pane_cp04

0xe0eb,	// (0x0003d717) input_focus_pane_cp05

0x79ec,	// (0x00037018) list_im_single_pane_ParamLimits

0x79ec,	// (0x00037018) list_im_single_pane

0x7a08,	// (0x00037034) list_single_im_pane_t1

0x943d,	// (0x00038a69) blid_accuracy_pane

0x9445,	// (0x00038a71) blid_compass_pane

0x944f,	// (0x00038a7b) main_location_t1

0x945d,	// (0x00038a89) main_location_t2

0x946b,	// (0x00038a97) main_location_t3

0x0002,

0xf641,	// (0x0003ec6d) main_location_t

0xe0eb,	// (0x0003d717) aid_levels_location

0xe466,	// (0x0003da92) blid_accuracy_pane_g1

0xe466,	// (0x0003da92) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x0003e968) blid_accuracy_pane_g

0xe73d,	// (0x0003dd69) wml_content_pane

0xe77b,	// (0x0003dda7) wml_button_pane_ParamLimits

0xe77b,	// (0x0003dda7) wml_button_pane

0x7a17,	// (0x00037043) wml_list_single_large_pane_ParamLimits

0x7a17,	// (0x00037043) wml_list_single_large_pane

0x7a39,	// (0x00037065) wml_list_single_medium_pane_ParamLimits

0x7a39,	// (0x00037065) wml_list_single_medium_pane

0x7a5f,	// (0x0003708b) wml_list_single_small_pane_ParamLimits

0x7a5f,	// (0x0003708b) wml_list_single_small_pane

0xe78f,	// (0x0003ddbb) wml_selection_box_pane_ParamLimits

0xe78f,	// (0x0003ddbb) wml_selection_box_pane

0xe7a2,	// (0x0003ddce) wml_list_single_pane_t1

0xe7b1,	// (0x0003dddd) wml_list_single_medium_pane_t1

0xe7c0,	// (0x0003ddec) wml_list_single_large_pane_t1

0xe7cf,	// (0x0003ddfb) input_focus_pane_cp02_ParamLimits

0xe7cf,	// (0x0003ddfb) input_focus_pane_cp02

0xe7e2,	// (0x0003de0e) wml_selection_box_pane_g1

0xe7eb,	// (0x0003de17) wml_selection_box_pane_t1_ParamLimits

0xe7eb,	// (0x0003de17) wml_selection_box_pane_t1

0xe346,	// (0x0003d972) bg_wml_button_pane_ParamLimits

0xe346,	// (0x0003d972) bg_wml_button_pane

0xe803,	// (0x0003de2f) wml_button_pane_g1

0xe80b,	// (0x0003de37) wml_button_pane_t1

0xe803,	// (0x0003de2f) wml_button_bg_pane_g1

0xe81b,	// (0x0003de47) wml_button_bg_pane_g2

0xe823,	// (0x0003de4f) wml_button_bg_pane_g3

0xe82b,	// (0x0003de57) wml_button_bg_pane_g4

0xe833,	// (0x0003de5f) wml_button_bg_pane_g5

0xe83b,	// (0x0003de67) wml_button_bg_pane_g6

0xe843,	// (0x0003de6f) wml_button_bg_pane_g7

0xe84b,	// (0x0003de77) wml_button_bg_pane_g8

0xe853,	// (0x0003de7f) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x0003e90b) wml_button_bg_pane_g

0x7a8a,	// (0x000370b6) bg_list_pane_cp02

0xe85b,	// (0x0003de87) mce_header_pane_ParamLimits

0xe85b,	// (0x0003de87) mce_header_pane

0xe871,	// (0x0003de9d) mce_icon_pane

0xe871,	// (0x0003de9d) mce_image_pane

0xe87a,	// (0x0003dea6) mce_text_pane_ParamLimits

0xe87a,	// (0x0003dea6) mce_text_pane

0x7a94,	// (0x000370c0) scroll_pane_cp03

0xe773,	// (0x0003dd9f) scroll_pane_cp04

0xe88d,	// (0x0003deb9) scroll_pane_cp05_ParamLimits

0xe88d,	// (0x0003deb9) scroll_pane_cp05

0x7a9e,	// (0x000370ca) mce_header_field_pane_ParamLimits

0x7a9e,	// (0x000370ca) mce_header_field_pane

0x7ac0,	// (0x000370ec) mce_header_field_pane_2_ParamLimits

0x7ac0,	// (0x000370ec) mce_header_field_pane_2

0x7ad6,	// (0x00037102) mce_header_field_pane_3

0x7ade,	// (0x0003710a) list_single_mce_message_pane_ParamLimits

0x7ade,	// (0x0003710a) list_single_mce_message_pane

0x7afd,	// (0x00037129) list_single_mce_smart_pane_ParamLimits

0x7afd,	// (0x00037129) list_single_mce_smart_pane

0xe899,	// (0x0003dec5) input_focus_pane_cp03

0xe8a2,	// (0x0003dece) list_header_data_pane

0x7b27,	// (0x00037153) mce_header_field_pane_t1

0x7b37,	// (0x00037163) list_single_mce_header_pane_ParamLimits

0x7b37,	// (0x00037163) list_single_mce_header_pane

0xe8aa,	// (0x0003ded6) list_single_mce_header_pane_t1

0xe8b9,	// (0x0003dee5) list_single_mce_message_pane_g1

0xe8c1,	// (0x0003deed) list_single_mce_message_pane_t1

0x7b73,	// (0x0003719f) bg_cale_heading_pane_cp01_ParamLimits

0x7b73,	// (0x0003719f) bg_cale_heading_pane_cp01

0xe8cf,	// (0x0003defb) bg_cale_pane_cp02_ParamLimits

0xe8cf,	// (0x0003defb) bg_cale_pane_cp02

0x7b96,	// (0x000371c2) cale_month_corner_pane

0x7bac,	// (0x000371d8) cale_month_day_heading_pane_ParamLimits

0x7bac,	// (0x000371d8) cale_month_day_heading_pane

0x7bdf,	// (0x0003720b) cale_month_pane_g1_ParamLimits

0x7bdf,	// (0x0003720b) cale_month_pane_g1

0x7bfb,	// (0x00037227) cale_month_pane_g2_ParamLimits

0x7bfb,	// (0x00037227) cale_month_pane_g2

0x7c16,	// (0x00037242) cale_month_pane_g3_ParamLimits

0x7c16,	// (0x00037242) cale_month_pane_g3

0x7c42,	// (0x0003726e) cale_month_pane_g4_ParamLimits

0x7c42,	// (0x0003726e) cale_month_pane_g4

0x7c6e,	// (0x0003729a) cale_month_pane_g5_ParamLimits

0x7c6e,	// (0x0003729a) cale_month_pane_g5

0x7c9a,	// (0x000372c6) cale_month_pane_g6_ParamLimits

0x7c9a,	// (0x000372c6) cale_month_pane_g6

0x7cd6,	// (0x00037302) cale_month_pane_g7_ParamLimits

0x7cd6,	// (0x00037302) cale_month_pane_g7

0x7d12,	// (0x0003733e) cale_month_pane_g8_ParamLimits

0x7d12,	// (0x0003733e) cale_month_pane_g8

0x7d4e,	// (0x0003737a) cale_month_pane_g9_ParamLimits

0x7d4e,	// (0x0003737a) cale_month_pane_g9

0x7d88,	// (0x000373b4) cale_month_pane_g10_ParamLimits

0x7d88,	// (0x000373b4) cale_month_pane_g10

0x7dc2,	// (0x000373ee) cale_month_pane_g11_ParamLimits

0x7dc2,	// (0x000373ee) cale_month_pane_g11

0x7dfc,	// (0x00037428) cale_month_pane_g12_ParamLimits

0x7dfc,	// (0x00037428) cale_month_pane_g12

0x7e36,	// (0x00037462) cale_month_pane_g13_ParamLimits

0x7e36,	// (0x00037462) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x0003e91e) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x0003e91e) cale_month_pane_g

0x7e70,	// (0x0003749c) cale_month_week_pane

0x7e83,	// (0x000374af) grid_cale_month_pane_ParamLimits

0x7e83,	// (0x000374af) grid_cale_month_pane

0x7eb1,	// (0x000374dd) cale_month_day_heading_pane_t1

0x7f0f,	// (0x0003753b) cale_month_day_heading_pane_t2

0x7f74,	// (0x000375a0) cale_month_day_heading_pane_t3

0x7fd9,	// (0x00037605) cale_month_day_heading_pane_t4

0x803e,	// (0x0003766a) cale_month_day_heading_pane_t5

0x80ab,	// (0x000376d7) cale_month_day_heading_pane_t6

0x8120,	// (0x0003774c) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x0003e939) cale_month_day_heading_pane_t

0xe563,	// (0x0003db8f) bg_cale_side_pane_cp01

0x8195,	// (0x000377c1) cale_month_week_pane_t1

0x81c0,	// (0x000377ec) cale_month_week_pane_t2

0x81eb,	// (0x00037817) cale_month_week_pane_t3

0x8216,	// (0x00037842) cale_month_week_pane_t4

0x8241,	// (0x0003786d) cale_month_week_pane_t5

0x826c,	// (0x00037898) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x0003e948) cale_month_week_pane_t

0x8297,	// (0x000378c3) cell_cale_month_pane_ParamLimits

0x8297,	// (0x000378c3) cell_cale_month_pane

0x8365,	// (0x00037991) cell_cale_month_pane_g1

0x8371,	// (0x0003799d) cell_cale_month_pane_t1_ParamLimits

0x8371,	// (0x0003799d) cell_cale_month_pane_t1

0xe571,	// (0x0003db9d) grid_highlight_pane_cp08

0xe466,	// (0x0003da92) main_smil_g1

0x838d,	// (0x000379b9) smil_status_pane

0xe904,	// (0x0003df30) smil_text_pane

0x13e8,	// (0x00030a14) bg_popup_call3_rect_pane_g8

0x13f0,	// (0x00030a1c) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x0003ec01) bg_popup_call3_rect_pane_g

0x1698,	// (0x00030cc4) smil_status_volume_pane_g1

0xe90e,	// (0x0003df3a) smil_status_pane_t1

0x981e,	// (0x00038e4a) volume_smil_pane

0xe925,	// (0x0003df51) list_smil_text_pane

0x83a0,	// (0x000379cc) scroll_pane_cp011

0x83ab,	// (0x000379d7) smil_text_list_pane_t1_ParamLimits

0x83ab,	// (0x000379d7) smil_text_list_pane_t1

0x840f,	// (0x00037a3b) aid_volume_smil_ParamLimits

0x840f,	// (0x00037a3b) aid_volume_smil

0xe466,	// (0x0003da92) smil_volume_pane_g1

0xe466,	// (0x0003da92) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x0003e968) smil_volume_pane_g

0xe411,	// (0x0003da3d) listscroll_cale_day_pane

0xe92f,	// (0x0003df5b) bg_cale_pane

0xe947,	// (0x0003df73) list_cale_pane

0xe958,	// (0x0003df84) scroll_pane_cp09

0xe969,	// (0x0003df95) cale_bg_pane_g1

0xe971,	// (0x0003df9d) cale_bg_pane_g2

0xe979,	// (0x0003dfa5) cale_bg_pane_g3

0xe981,	// (0x0003dfad) cale_bg_pane_g4

0xe989,	// (0x0003dfb5) cale_bg_pane_g5

0xe991,	// (0x0003dfbd) cale_bg_pane_g6

0xe999,	// (0x0003dfc5) cale_bg_pane_g7

0xe9a1,	// (0x0003dfcd) cale_bg_pane_g8

0xe9a9,	// (0x0003dfd5) cale_bg_pane_g9

0x0008,

0xf341,	// (0x0003e96d) cale_bg_pane_g

0x8431,	// (0x00037a5d) list_cale_time_pane_ParamLimits

0x8431,	// (0x00037a5d) list_cale_time_pane

0x8449,	// (0x00037a75) list_cale_time_pane_g1_ParamLimits

0x8449,	// (0x00037a75) list_cale_time_pane_g1

0xe9b1,	// (0x0003dfdd) list_cale_time_pane_g2_ParamLimits

0xe9b1,	// (0x0003dfdd) list_cale_time_pane_g2

0x8455,	// (0x00037a81) list_cale_time_pane_g3_ParamLimits

0x8455,	// (0x00037a81) list_cale_time_pane_g3

0x8463,	// (0x00037a8f) list_cale_time_pane_g4_ParamLimits

0x8463,	// (0x00037a8f) list_cale_time_pane_g4

0x8471,	// (0x00037a9d) list_cale_time_pane_g5_ParamLimits

0x8471,	// (0x00037a9d) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x0003e980) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x0003e980) list_cale_time_pane_g

0x847f,	// (0x00037aab) list_cale_time_pane_t1_ParamLimits

0x847f,	// (0x00037aab) list_cale_time_pane_t1

0x84a7,	// (0x00037ad3) list_cale_time_pane_t2_ParamLimits

0x84a7,	// (0x00037ad3) list_cale_time_pane_t2

0x87bc,	// (0x00037de8) aid_blid_cardinal_pane

0x87fe,	// (0x00037e2a) compass_pane_t4

0x84cf,	// (0x00037afb) list_cale_time_pane_t4_ParamLimits

0x84cf,	// (0x00037afb) list_cale_time_pane_t4

0x880c,	// (0x00037e38) compass_pane_t5

0x881c,	// (0x00037e48) compass_pane_t6

0x882a,	// (0x00037e56) compass_pane_t7

0xedbf,	// (0x0003e3eb) navi_pane_cc_t1

0xef14,	// (0x0003e540) aid_phob_thumbnail_center_pane

0x8f33,	// (0x0003855f) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x0003e98d) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x0003e98d) list_cale_time_pane_t

0xdd42,	// (0x0003d36e) bg_popup_window_pane_cp02_ParamLimits

0xdd42,	// (0x0003d36e) bg_popup_window_pane_cp02

0xe9cb,	// (0x0003dff7) heading_pane_cp01_ParamLimits

0xe9cb,	// (0x0003dff7) heading_pane_cp01

0xe9d7,	// (0x0003e003) loc_req_pane_ParamLimits

0xe9d7,	// (0x0003e003) loc_req_pane

0xe9e7,	// (0x0003e013) loc_type_pane_ParamLimits

0xe9e7,	// (0x0003e013) loc_type_pane

0xe9f9,	// (0x0003e025) loc_type_pane_t1_ParamLimits

0xe9f9,	// (0x0003e025) loc_type_pane_t1

0xea0b,	// (0x0003e037) loc_type_pane_t2_ParamLimits

0xea0b,	// (0x0003e037) loc_type_pane_t2

0xea1d,	// (0x0003e049) loc_type_pane_t3_ParamLimits

0xea1d,	// (0x0003e049) loc_type_pane_t3

0x0002,

0xf368,	// (0x0003e994) loc_type_pane_t_ParamLimits

0xf368,	// (0x0003e994) loc_type_pane_t

0xea2f,	// (0x0003e05b) list_loc_req_pane

0xea39,	// (0x0003e065) scroll_pane_cp012

0x84f7,	// (0x00037b23) list_single_loc_request_popup_menu_pane_ParamLimits

0x84f7,	// (0x00037b23) list_single_loc_request_popup_menu_pane

0xea44,	// (0x0003e070) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xea44,	// (0x0003e070) list_single_loc_request_popup_menu_pane_g1

0xea50,	// (0x0003e07c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xea50,	// (0x0003e07c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x0003e99b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x0003e99b) list_single_loc_request_popup_menu_pane_g

0xea5c,	// (0x0003e088) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xea5c,	// (0x0003e088) list_single_loc_request_popup_menu_pane_t1

0x8509,	// (0x00037b35) bg_popup_window_pane_cp03_ParamLimits

0x8509,	// (0x00037b35) bg_popup_window_pane_cp03

0x8517,	// (0x00037b43) heading_loc_req_pane_ParamLimits

0x8517,	// (0x00037b43) heading_loc_req_pane

0x8523,	// (0x00037b4f) popup_dyc_status_message_window_g1_ParamLimits

0x8523,	// (0x00037b4f) popup_dyc_status_message_window_g1

0x852f,	// (0x00037b5b) popup_dyc_status_message_window_t1_ParamLimits

0x852f,	// (0x00037b5b) popup_dyc_status_message_window_t1

0x8541,	// (0x00037b6d) popup_dyc_status_message_window_t2_ParamLimits

0x8541,	// (0x00037b6d) popup_dyc_status_message_window_t2

0x8553,	// (0x00037b7f) popup_dyc_status_message_window_t3_ParamLimits

0x8553,	// (0x00037b7f) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x0003e9a0) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x0003e9a0) popup_dyc_status_message_window_t

0xe0eb,	// (0x0003d717) bg_heading_pane_cp01

0xea72,	// (0x0003e09e) heading_loc_req_pane_g1

0xea7a,	// (0x0003e0a6) heading_loc_req_pane_g2

0xea82,	// (0x0003e0ae) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x0003e9a7) heading_loc_req_pane_g

0xea8a,	// (0x0003e0b6) heading_loc_req_pane_t1

0xea9a,	// (0x0003e0c6) bg_popup_sub_pane_cp01_ParamLimits

0xea9a,	// (0x0003e0c6) bg_popup_sub_pane_cp01

0xeaa8,	// (0x0003e0d4) popup_cale_events_window_g1_ParamLimits

0xeaa8,	// (0x0003e0d4) popup_cale_events_window_g1

0xeac8,	// (0x0003e0f4) popup_cale_events_window_g2_ParamLimits

0xeac8,	// (0x0003e0f4) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x0003e9db) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x0003e9db) popup_cale_events_window_g

0xeae8,	// (0x0003e114) popup_cale_events_window_t1_ParamLimits

0xeae8,	// (0x0003e114) popup_cale_events_window_t1

0xeafa,	// (0x0003e126) popup_cale_events_window_t2_ParamLimits

0xeafa,	// (0x0003e126) popup_cale_events_window_t2

0xeb38,	// (0x0003e164) popup_cale_events_window_t3_ParamLimits

0xeb38,	// (0x0003e164) popup_cale_events_window_t3

0xeb72,	// (0x0003e19e) popup_cale_events_window_t4_ParamLimits

0xeb72,	// (0x0003e19e) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x0003e9e0) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x0003e9e0) popup_cale_events_window_t

0x857d,	// (0x00037ba9) call_type_pane

0xeba8,	// (0x0003e1d4) popup_call_status_window_g1

0x8589,	// (0x00037bb5) popup_call_status_window_g2

0x8595,	// (0x00037bc1) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x0003e9e9) popup_call_status_window_g

0xebb6,	// (0x0003e1e2) call_type_pane_g1

0xebbf,	// (0x0003e1eb) call_type_pane_g2

0x0001,

0xf3c4,	// (0x0003e9f0) call_type_pane_g

0xe0eb,	// (0x0003d717) bg_popup_sub_pane_cp02

0xebc8,	// (0x0003e1f4) listscroll_popup_wml_pane

0xebd0,	// (0x0003e1fc) list_wml_pane

0xebda,	// (0x0003e206) scroll_pane_cp013

0xebe5,	// (0x0003e211) list_single_graphic_popup_wml_pane_ParamLimits

0xebe5,	// (0x0003e211) list_single_graphic_popup_wml_pane

0xe466,	// (0x0003da92) list_single_graphic_popup_wml_pane_g1

0xebf9,	// (0x0003e225) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x0003e9f5) list_single_graphic_popup_wml_pane_g

0xec01,	// (0x0003e22d) list_single_graphic_popup_wml_pane_t1

0xec17,	// (0x0003e243) aid_call_pane

0xe33e,	// (0x0003d96a) popup_clock_analogue_window_g1

0xe33e,	// (0x0003d96a) popup_clock_analogue_window_g2

0x85a1,	// (0x00037bcd) popup_clock_analogue_window_g3

0x85a1,	// (0x00037bcd) popup_clock_analogue_window_g4

0xe466,	// (0x0003da92) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x0003e9fa) popup_clock_analogue_window_g

0x85a9,	// (0x00037bd5) popup_clock_analogue_window_t1

0x85b7,	// (0x00037be3) clock_digital_number_pane_ParamLimits

0x85b7,	// (0x00037be3) clock_digital_number_pane

0x85c3,	// (0x00037bef) clock_digital_number_pane_cp02_ParamLimits

0x85c3,	// (0x00037bef) clock_digital_number_pane_cp02

0x85cf,	// (0x00037bfb) clock_digital_number_pane_cp03_ParamLimits

0x85cf,	// (0x00037bfb) clock_digital_number_pane_cp03

0x85db,	// (0x00037c07) clock_digital_number_pane_cp04_ParamLimits

0x85db,	// (0x00037c07) clock_digital_number_pane_cp04

0x85e7,	// (0x00037c13) clock_digital_separator_pane_ParamLimits

0x85e7,	// (0x00037c13) clock_digital_separator_pane

0x85f3,	// (0x00037c1f) popup_clock_digital_window_t1

0xe466,	// (0x0003da92) clock_digital_number_pane_g1

0xe466,	// (0x0003da92) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x0003e968) clock_digital_number_pane_g

0xe466,	// (0x0003da92) clock_digital_separator_pane_g1

0xe466,	// (0x0003da92) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x0003e968) clock_digital_separator_pane_g

0xe0eb,	// (0x0003d717) bg_popup_window_pane_cp04

0xec1f,	// (0x0003e24b) heading_pane_cp03

0xec27,	// (0x0003e253) listscroll_popup_gms_pane

0xec2f,	// (0x0003e25b) grid_large_graphic_popup_pane

0xec39,	// (0x0003e265) listscroll_popup_gms_pane_g1

0xec41,	// (0x0003e26d) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x0003ea05) listscroll_popup_gms_pane_g

0xe773,	// (0x0003dd9f) scroll_pane_cp014

0x8610,	// (0x00037c3c) cell_large_graphic_popup_pane_ParamLimits

0x8610,	// (0x00037c3c) cell_large_graphic_popup_pane

0x862a,	// (0x00037c56) cell_large_graphic_popup_pane_g1_ParamLimits

0x862a,	// (0x00037c56) cell_large_graphic_popup_pane_g1

0xec49,	// (0x0003e275) cell_large_graphic_popup_pane_g2_ParamLimits

0xec49,	// (0x0003e275) cell_large_graphic_popup_pane_g2

0xec55,	// (0x0003e281) cell_large_graphic_popup_pane_g3_ParamLimits

0xec55,	// (0x0003e281) cell_large_graphic_popup_pane_g3

0xec62,	// (0x0003e28e) cell_large_graphic_popup_pane_g4_ParamLimits

0xec62,	// (0x0003e28e) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x0003ea0a) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x0003ea0a) cell_large_graphic_popup_pane_g

0xec72,	// (0x0003e29e) grid_highlight_pane_cp010

0xe466,	// (0x0003da92) bg_popup_call_pane_g1

0xec7c,	// (0x0003e2a8) list_single_graphic_popup_conf_pane_ParamLimits

0xec7c,	// (0x0003e2a8) list_single_graphic_popup_conf_pane

0xec8e,	// (0x0003e2ba) list_highlight_pane_cp01

0xec97,	// (0x0003e2c3) list_single_graphic_popup_conf_pane_g1

0xec9f,	// (0x0003e2cb) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x0003ea13) list_single_graphic_popup_conf_pane_g

0xeca7,	// (0x0003e2d3) list_single_graphic_popup_conf_pane_t1

0xecb5,	// (0x0003e2e1) linegrid_cams_pane_g1

0x8636,	// (0x00037c62) linegrid_cams_pane_g2

0xe5a4,	// (0x0003dbd0) linegrid_cams_pane_g3

0xecbe,	// (0x0003e2ea) linegrid_cams_pane_g4

0x863f,	// (0x00037c6b) linegrid_cams_pane_g5

0x8648,	// (0x00037c74) linegrid_cams_pane_g6

0xe5ad,	// (0x0003dbd9) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x0003ea18) linegrid_cams_pane_g

0xecc7,	// (0x0003e2f3) popup_clock_analogue_window

0xecc7,	// (0x0003e2f3) popup_clock_digital_window

0xe0eb,	// (0x0003d717) popup_phob_thumbnail_window

0xe466,	// (0x0003da92) call_video_uplink_pane_g1

0xecd0,	// (0x0003e2fc) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x0003ea27) call_video_uplink_pane_g

0xecd8,	// (0x0003e304) video_uplink_pane

0xece0,	// (0x0003e30c) mce_image_pane_g1

0x8653,	// (0x00037c7f) mce_image_pane_g2

0x865d,	// (0x00037c89) mce_image_pane_g3

0x8667,	// (0x00037c93) mce_image_pane_g4

0x866f,	// (0x00037c9b) mce_image_pane_g5

0x0004,

0xf400,	// (0x0003ea2c) mce_image_pane_g

0xecea,	// (0x0003e316) control_top_pane_stacon_cp01_ParamLimits

0xecea,	// (0x0003e316) control_top_pane_stacon_cp01

0xecfe,	// (0x0003e32a) uni_indicator_pane_stacon_cp01_ParamLimits

0xecfe,	// (0x0003e32a) uni_indicator_pane_stacon_cp01

0xed0f,	// (0x0003e33b) bg_popup_sub_pane_cp03

0x8677,	// (0x00037ca3) chi_dic_find_pane

0x867f,	// (0x00037cab) listscroll_chi_dic_pane

0x8688,	// (0x00037cb4) main_pane_chidic_g1

0x869b,	// (0x00037cc7) chi_dic_find_pane_t1

0xed19,	// (0x0003e345) find_chidic_pane

0xed22,	// (0x0003e34e) chi_dic_list_pane_ParamLimits

0xed22,	// (0x0003e34e) chi_dic_list_pane

0xed33,	// (0x0003e35f) scroll_pane_cp020

0x86a9,	// (0x00037cd5) find_chidic_pane_t1

0xe0eb,	// (0x0003d717) input_focus_pane_cp06

0x86b8,	// (0x00037ce4) list_chi_dic_pane_ParamLimits

0x86b8,	// (0x00037ce4) list_chi_dic_pane

0x86d0,	// (0x00037cfc) list_chi_dic_pane_t1_ParamLimits

0x86d0,	// (0x00037cfc) list_chi_dic_pane_t1

0xe0eb,	// (0x0003d717) list_highlight_pane_cp020

0xed3b,	// (0x0003e367) bg_cale_heading_pane_g1

0x86e3,	// (0x00037d0f) bg_cale_heading_pane_g2

0x86eb,	// (0x00037d17) bg_cale_heading_pane_g3

0x86f3,	// (0x00037d1f) bg_cale_heading_pane_g4

0x86fd,	// (0x00037d29) bg_cale_heading_pane_g5

0x8707,	// (0x00037d33) bg_cale_heading_pane_g6

0x870f,	// (0x00037d3b) bg_cale_heading_pane_g7

0x8717,	// (0x00037d43) bg_cale_heading_pane_g8

0x8721,	// (0x00037d4d) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x0003ea37) bg_cale_heading_pane_g

0xed3b,	// (0x0003e367) bg_cale_side_pane_g1

0x872b,	// (0x00037d57) bg_cale_side_pane_g2

0x8733,	// (0x00037d5f) bg_cale_side_pane_g3

0x873b,	// (0x00037d67) bg_cale_side_pane_g4

0x8743,	// (0x00037d6f) bg_cale_side_pane_g5

0x874b,	// (0x00037d77) bg_cale_side_pane_g6

0x8753,	// (0x00037d7f) bg_cale_side_pane_g7

0x875b,	// (0x00037d87) bg_cale_side_pane_g8

0x8763,	// (0x00037d8f) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x0003ea4a) bg_cale_side_pane_g

0x876b,	// (0x00037d97) popup_call_status_window_ParamLimits

0x876b,	// (0x00037d97) popup_call_status_window

0xed43,	// (0x0003e36f) stacon_top_pane

0xed4b,	// (0x0003e377) status_pane_ParamLimits

0xed4b,	// (0x0003e377) status_pane

0xed60,	// (0x0003e38c) status_small_pane

0xed68,	// (0x0003e394) control_pane

0xe0eb,	// (0x0003d717) stacon_bottom_pane

0xed70,	// (0x0003e39c) list_single_mce_smart_pane_t1_ParamLimits

0xed70,	// (0x0003e39c) list_single_mce_smart_pane_t1

0xed83,	// (0x0003e3af) list_single_mce_smart_pane_t2_ParamLimits

0xed83,	// (0x0003e3af) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x0003ea5d) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x0003ea5d) list_single_mce_smart_pane_t

0x8777,	// (0x00037da3) compass_pane

0x8782,	// (0x00037dae) main_location2_pane_t1

0x8796,	// (0x00037dc2) main_location2_pane_t2

0x8796,	// (0x00037dc2) main_location2_pane_t3

0x0003,

0xf436,	// (0x0003ea62) main_location2_pane_t

0xeda2,	// (0x0003e3ce) compass_pane_g1_ParamLimits

0xeda2,	// (0x0003e3ce) compass_pane_g1

0x87e0,	// (0x00037e0c) compass_pane_t1

0x87ef,	// (0x00037e1b) compass_pane_t2

0x0005,

0xf43f,	// (0x0003ea6b) compass_pane_t

0x883a,	// (0x00037e66) text_secondary_cp61

0xedb6,	// (0x0003e3e2) navi_pane_cams_g5

0xedd9,	// (0x0003e405) navi_pane_im_t1

0xede7,	// (0x0003e413) navi_pane_mp_g1_ParamLimits

0xede7,	// (0x0003e413) navi_pane_mp_g1

0xedfb,	// (0x0003e427) navi_pane_mp_g2_ParamLimits

0xedfb,	// (0x0003e427) navi_pane_mp_g2

0xee07,	// (0x0003e433) navi_pane_mp_g3_ParamLimits

0xee07,	// (0x0003e433) navi_pane_mp_g3

0x0002,

0xf453,	// (0x0003ea7f) navi_pane_mp_g_ParamLimits

0xf453,	// (0x0003ea7f) navi_pane_mp_g

0xee13,	// (0x0003e43f) navi_pane_mp_t1

0xee21,	// (0x0003e44d) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x0003ea86) navi_pane_mp_t

0xee5d,	// (0x0003e489) navi_pane_vt_g1

0xee13,	// (0x0003e43f) navi_pane_vt_t1

0xee65,	// (0x0003e491) navi_slider_pane

0xee6d,	// (0x0003e499) zooming_pane

0xee75,	// (0x0003e4a1) navi_slider_pane_g1

0x8951,	// (0x00037f7d) navi_slider_pane_g2

0x0006,

0xf461,	// (0x0003ea8d) navi_slider_pane_g

0xee99,	// (0x0003e4c5) aid_levels_zoom

0xeea1,	// (0x0003e4cd) zooming_pane_g1

0xeea9,	// (0x0003e4d5) zooming_pane_g2

0xeea9,	// (0x0003e4d5) zooming_pane_g3

0x0002,

0xf470,	// (0x0003ea9c) zooming_pane_g

0xeeb1,	// (0x0003e4dd) level_10_zoom

0xeeba,	// (0x0003e4e6) level_11_zoom

0xeec3,	// (0x0003e4ef) level_1_zoom

0xeecc,	// (0x0003e4f8) level_2_zoom

0xeed5,	// (0x0003e501) level_3_zoom

0xeede,	// (0x0003e50a) level_4_zoom

0xeee7,	// (0x0003e513) level_5_zoom

0xeef0,	// (0x0003e51c) level_6_zoom

0xeef9,	// (0x0003e525) level_7_zoom

0xef02,	// (0x0003e52e) level_8_zoom

0xef0b,	// (0x0003e537) level_9_zoom

0xef1c,	// (0x0003e548) popup_phob_thumbnail_window_g1

0xef24,	// (0x0003e550) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x0003eaa3) popup_phob_thumbnail_window_g

0x154e,	// (0x00030b7a) level_1_location

0x1556,	// (0x00030b82) level_2_location

0x155e,	// (0x00030b8a) level_3_location

0x1566,	// (0x00030b92) level_4_location

0xee6d,	// (0x0003e499) level_5_location

0x8963,	// (0x00037f8f) mce_icon_pane_g1

0x896b,	// (0x00037f97) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x0003eaa8) mce_icon_pane_g

0x8973,	// (0x00037f9f) main_mup_pane_g1_ParamLimits

0x8973,	// (0x00037f9f) main_mup_pane_g1

0x898b,	// (0x00037fb7) main_mup_pane_g2_ParamLimits

0x898b,	// (0x00037fb7) main_mup_pane_g2

0x89a7,	// (0x00037fd3) main_mup_pane_g3_ParamLimits

0x89a7,	// (0x00037fd3) main_mup_pane_g3

0x89c3,	// (0x00037fef) main_mup_pane_g4_ParamLimits

0x89c3,	// (0x00037fef) main_mup_pane_g4

0x89d7,	// (0x00038003) main_mup_pane_g5_ParamLimits

0x89d7,	// (0x00038003) main_mup_pane_g5

0x89f8,	// (0x00038024) main_mup_pane_g6_ParamLimits

0x89f8,	// (0x00038024) main_mup_pane_g6

0x8a18,	// (0x00038044) main_mup_pane_g7_ParamLimits

0x8a18,	// (0x00038044) main_mup_pane_g7

0x8a3c,	// (0x00038068) main_mup_pane_g8_ParamLimits

0x8a3c,	// (0x00038068) main_mup_pane_g8

0x8a60,	// (0x0003808c) main_mup_pane_g9_ParamLimits

0x8a60,	// (0x0003808c) main_mup_pane_g9

0x8a83,	// (0x000380af) main_mup_pane_g10_ParamLimits

0x8a83,	// (0x000380af) main_mup_pane_g10

0x8aa6,	// (0x000380d2) main_mup_pane_g11_ParamLimits

0x8aa6,	// (0x000380d2) main_mup_pane_g11

0x8ac6,	// (0x000380f2) main_mup_pane_g12_ParamLimits

0x8ac6,	// (0x000380f2) main_mup_pane_g12

0x8ad4,	// (0x00038100) main_mup_pane_g13_ParamLimits

0x8ad4,	// (0x00038100) main_mup_pane_g13

0x000c,

0xf481,	// (0x0003eaad) main_mup_pane_g_ParamLimits

0xf481,	// (0x0003eaad) main_mup_pane_g

0x8aea,	// (0x00038116) main_mup_pane_t1_ParamLimits

0x8aea,	// (0x00038116) main_mup_pane_t1

0x8b09,	// (0x00038135) main_mup_pane_t2_ParamLimits

0x8b09,	// (0x00038135) main_mup_pane_t2

0x8b23,	// (0x0003814f) main_mup_pane_t3_ParamLimits

0x8b23,	// (0x0003814f) main_mup_pane_t3

0x8b3d,	// (0x00038169) main_mup_pane_t4_ParamLimits

0x8b3d,	// (0x00038169) main_mup_pane_t4

0x8b4f,	// (0x0003817b) main_mup_pane_t5_ParamLimits

0x8b4f,	// (0x0003817b) main_mup_pane_t5

0x8b61,	// (0x0003818d) main_mup_pane_t6_ParamLimits

0x8b61,	// (0x0003818d) main_mup_pane_t6

0x0005,

0xf49c,	// (0x0003eac8) main_mup_pane_t_ParamLimits

0xf49c,	// (0x0003eac8) main_mup_pane_t

0x8b77,	// (0x000381a3) mup_progress_pane_ParamLimits

0x8b77,	// (0x000381a3) mup_progress_pane

0x8b83,	// (0x000381af) mup_visualizer_pane_ParamLimits

0x8b83,	// (0x000381af) mup_visualizer_pane

0x8bc1,	// (0x000381ed) mup_volume_pane_ParamLimits

0x8bc1,	// (0x000381ed) mup_volume_pane

0xeba8,	// (0x0003e1d4) mup_visualizer_pane_g1_ParamLimits

0xeba8,	// (0x0003e1d4) mup_visualizer_pane_g1

0xeba8,	// (0x0003e1d4) mup_visualizer_pane_g2_ParamLimits

0xeba8,	// (0x0003e1d4) mup_visualizer_pane_g2

0xeda2,	// (0x0003e3ce) mup_visualizer_pane_g3_ParamLimits

0xeda2,	// (0x0003e3ce) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x0003ead5) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x0003ead5) mup_visualizer_pane_g

0xe466,	// (0x0003da92) mup_volume_pane_g1

0xef34,	// (0x0003e560) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x0003eadc) mup_volume_pane_g

0xe466,	// (0x0003da92) mup_progress_pane_g1

0xef3d,	// (0x0003e569) mup_progress_pane_g2

0xef46,	// (0x0003e572) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x0003eae1) mup_progress_pane_g

0xe0eb,	// (0x0003d717) bg_popup_window_pane_cp05

0xef4f,	// (0x0003e57b) heading_pane_cp02_ParamLimits

0xef4f,	// (0x0003e57b) heading_pane_cp02

0xef6b,	// (0x0003e597) list_popup_blid_pane

0xef73,	// (0x0003e59f) list_blid_sat_info_pane_ParamLimits

0xef73,	// (0x0003e59f) list_blid_sat_info_pane

0xef86,	// (0x0003e5b2) list_blid_sat_info_pane_g1

0xef8e,	// (0x0003e5ba) list_blid_sat_info_pane_t1

0x8ce0,	// (0x0003830c) mup_equalizer_pane_ParamLimits

0x8ce0,	// (0x0003830c) mup_equalizer_pane

0x8d01,	// (0x0003832d) mup_equalizer_pane_cp1_ParamLimits

0x8d01,	// (0x0003832d) mup_equalizer_pane_cp1

0x8d22,	// (0x0003834e) mup_equalizer_pane_cp2_ParamLimits

0x8d22,	// (0x0003834e) mup_equalizer_pane_cp2

0x8d43,	// (0x0003836f) mup_equalizer_pane_cp3_ParamLimits

0x8d43,	// (0x0003836f) mup_equalizer_pane_cp3

0x8d68,	// (0x00038394) mup_equalizer_pane_cp4_ParamLimits

0x8d68,	// (0x00038394) mup_equalizer_pane_cp4

0x8d8d,	// (0x000383b9) mup_equalizer_pane_cp5

0x8da5,	// (0x000383d1) mup_equalizer_pane_cp6

0x8dbd,	// (0x000383e9) mup_equalizer_pane_cp7

0x1468,	// (0x00030a94) bg_popup_call_poc_act_pane_g9

0x1470,	// (0x00030a9c) bg_popup_call_poc_act_pane_g10

0x1478,	// (0x00030aa4) bg_popup_call_poc_act_pane_g11

0x000a,

0xe346,	// (0x0003d972) mup_scale_pane

0xe466,	// (0x0003da92) mup_scale_pane_g1

0xef9c,	// (0x0003e5c8) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x0003eafd) mup_scale_pane_g

0xefc0,	// (0x0003e5ec) msg_data_pane

0xefc8,	// (0x0003e5f4) scroll_pane_cp017

0x584f,	// (0x00034e7b) bg_list_pane_cp04_ParamLimits

0x584f,	// (0x00034e7b) bg_list_pane_cp04

0xefd0,	// (0x0003e5fc) msg_data_pane_g1

0x8de7,	// (0x00038413) msg_data_pane_g2

0x8df1,	// (0x0003841d) msg_data_pane_g3

0x8dfb,	// (0x00038427) msg_data_pane_g4

0x8e03,	// (0x0003842f) msg_data_pane_g5

0x8e0b,	// (0x00038437) msg_data_pane_g6

0x8e13,	// (0x0003843f) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x0003eb0c) msg_data_pane_g

0x5875,	// (0x00034ea1) msg_text_pane_ParamLimits

0x5875,	// (0x00034ea1) msg_text_pane

0x8e1b,	// (0x00038447) qrid_highlight_pane_cp011_ParamLimits

0x8e1b,	// (0x00038447) qrid_highlight_pane_cp011

0xe0eb,	// (0x0003d717) msg_body_pane

0xe0eb,	// (0x0003d717) msg_header_pane

0xefe1,	// (0x0003e60d) input_focus_pane_cp07

0x58b4,	// (0x00034ee0) msg_header_pane_t1_ParamLimits

0x58b4,	// (0x00034ee0) msg_header_pane_t1

0x58c8,	// (0x00034ef4) msg_header_pane_t2_ParamLimits

0x58c8,	// (0x00034ef4) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x0003eb20) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x0003eb20) msg_header_pane_t

0xeff6,	// (0x0003e622) msg_body_pane_g1

0x58da,	// (0x00034f06) msg_body_pane_t1_ParamLimits

0x58da,	// (0x00034f06) msg_body_pane_t1

0x590b,	// (0x00034f37) msg_body_pane_t2_ParamLimits

0x590b,	// (0x00034f37) msg_body_pane_t2

0x591d,	// (0x00034f49) msg_body_pane_t3_ParamLimits

0x591d,	// (0x00034f49) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x0003eb25) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x0003eb25) msg_body_pane_t

0x8e83,	// (0x000384af) main_viewer_pane_g1_ParamLimits

0x8e83,	// (0x000384af) main_viewer_pane_g1

0x8e8f,	// (0x000384bb) main_viewer_pane_g2_ParamLimits

0x8e8f,	// (0x000384bb) main_viewer_pane_g2

0x8e9b,	// (0x000384c7) main_viewer_pane_g3_ParamLimits

0x8e9b,	// (0x000384c7) main_viewer_pane_g3

0x8eac,	// (0x000384d8) main_viewer_pane_g4_ParamLimits

0x8eac,	// (0x000384d8) main_viewer_pane_g4

0x8ebd,	// (0x000384e9) main_viewer_pane_g5_ParamLimits

0x8ebd,	// (0x000384e9) main_viewer_pane_g5

0x8ebd,	// (0x000384e9) main_viewer_pane_g7_ParamLimits

0x8ebd,	// (0x000384e9) main_viewer_pane_g7

0x8ecf,	// (0x000384fb) main_viewer_pane_g8_ParamLimits

0x8ecf,	// (0x000384fb) main_viewer_pane_g8

0x0007,

0xf509,	// (0x0003eb35) main_viewer_pane_g_ParamLimits

0xf509,	// (0x0003eb35) main_viewer_pane_g

0xeffe,	// (0x0003e62a) viewer_content_pane_ParamLimits

0xeffe,	// (0x0003e62a) viewer_content_pane

0x8f07,	// (0x00038533) main_postcard_pane_g1_ParamLimits

0x8f07,	// (0x00038533) main_postcard_pane_g1

0x8f15,	// (0x00038541) main_postcard_pane_g2_ParamLimits

0x8f15,	// (0x00038541) main_postcard_pane_g2

0x8f23,	// (0x0003854f) main_postcard_pane_g3_ParamLimits

0x8f23,	// (0x0003854f) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x0003eb46) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x0003eb46) main_postcard_pane_g

0x8f33,	// (0x0003855f) main_postcard_pane_g4

0x1685,	// (0x00030cb1) smil_status_volume_pane_g2

0x8f5f,	// (0x0003858b) postcard_pane_ParamLimits

0x8f5f,	// (0x0003858b) postcard_pane

0xeba8,	// (0x0003e1d4) postcard_pane_g1_ParamLimits

0xeba8,	// (0x0003e1d4) postcard_pane_g1

0x8f99,	// (0x000385c5) postcard_pane_g2_ParamLimits

0x8f99,	// (0x000385c5) postcard_pane_g2

0x8fa5,	// (0x000385d1) postcard_pane_g3_ParamLimits

0x8fa5,	// (0x000385d1) postcard_pane_g3

0xf00c,	// (0x0003e638) postcard_pane_g4_ParamLimits

0xf00c,	// (0x0003e638) postcard_pane_g4

0x8fb1,	// (0x000385dd) postcard_pane_g5_ParamLimits

0x8fb1,	// (0x000385dd) postcard_pane_g5

0x8fbd,	// (0x000385e9) postcard_pane_g6_ParamLimits

0x8fbd,	// (0x000385e9) postcard_pane_g6

0xf01a,	// (0x0003e646) postcard_pane_g7_ParamLimits

0xf01a,	// (0x0003e646) postcard_pane_g7

0x0006,

0xf527,	// (0x0003eb53) postcard_pane_g_ParamLimits

0xf527,	// (0x0003eb53) postcard_pane_g

0x8fcb,	// (0x000385f7) main_mp2_pane_g1_ParamLimits

0x8fcb,	// (0x000385f7) main_mp2_pane_g1

0x8fd9,	// (0x00038605) main_mp2_pane_g2_ParamLimits

0x8fd9,	// (0x00038605) main_mp2_pane_g2

0x8fe5,	// (0x00038611) main_mp2_pane_g3_ParamLimits

0x8fe5,	// (0x00038611) main_mp2_pane_g3

0x0002,

0xf536,	// (0x0003eb62) main_mp2_pane_g_ParamLimits

0xf536,	// (0x0003eb62) main_mp2_pane_g

0x8ff1,	// (0x0003861d) main_mp2_pane_t1_ParamLimits

0x8ff1,	// (0x0003861d) main_mp2_pane_t1

0x9008,	// (0x00038634) main_mp2_pane_t2_ParamLimits

0x9008,	// (0x00038634) main_mp2_pane_t2

0x901c,	// (0x00038648) main_mp2_pane_t3_ParamLimits

0x901c,	// (0x00038648) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x0003eb69) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x0003eb69) main_mp2_pane_t

0xf028,	// (0x0003e654) pec_content_pane_ParamLimits

0xf028,	// (0x0003e654) pec_content_pane

0xe773,	// (0x0003dd9f) scroll_pane_cp015

0xf03a,	// (0x0003e666) pec_attribute_pane_ParamLimits

0xf03a,	// (0x0003e666) pec_attribute_pane

0x902e,	// (0x0003865a) pec_content_pane_g1_ParamLimits

0x902e,	// (0x0003865a) pec_content_pane_g1

0xf04a,	// (0x0003e676) pec_content_pane_t1_ParamLimits

0xf04a,	// (0x0003e676) pec_content_pane_t1

0xf05c,	// (0x0003e688) pec_content_pane_t2_ParamLimits

0xf05c,	// (0x0003e688) pec_content_pane_t2

0x0001,

0xf544,	// (0x0003eb70) pec_content_pane_t_ParamLimits

0xf544,	// (0x0003eb70) pec_content_pane_t

0x903a,	// (0x00038666) list_single_graphic_pane_cp01_ParamLimits

0x903a,	// (0x00038666) list_single_graphic_pane_cp01

0xe346,	// (0x0003d972) bg_popup_sub_pane_cp04

0xf06e,	// (0x0003e69a) popup_mup_playback_window_g1

0xf07a,	// (0x0003e6a6) popup_mup_playback_window_t1

0xf08f,	// (0x0003e6bb) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x0003eb75) popup_mup_playback_window_t

0xf0c6,	// (0x0003e6f2) main_image_pane_g1_ParamLimits

0xf0c6,	// (0x0003e6f2) main_image_pane_g1

0x0438,	// (0x0002fa64) scroll_pane_cp018_ParamLimits

0x0438,	// (0x0002fa64) scroll_pane_cp018

0x0450,	// (0x0002fa7c) scroll_pane_cp016_ParamLimits

0x0450,	// (0x0002fa7c) scroll_pane_cp016

0x90cb,	// (0x000386f7) smil2_image_pane_ParamLimits

0x90cb,	// (0x000386f7) smil2_image_pane

0x9101,	// (0x0003872d) smil2_root_pane_ParamLimits

0x9101,	// (0x0003872d) smil2_root_pane

0x912d,	// (0x00038759) smil2_text_pane_ParamLimits

0x912d,	// (0x00038759) smil2_text_pane

0xe0eb,	// (0x0003d717) bg_list_pane_cp06

0x048c,	// (0x0002fab8) grid_radio_pane

0xe0eb,	// (0x0003d717) bg_popup_window_pane_cp06

0x0496,	// (0x0002fac2) main_fmradio_pane_t1

0xec1f,	// (0x0003e24b) heading_pane_cp04

0x04a4,	// (0x0002fad0) main_fmradio_pane_t2

0x1480,	// (0x00030aac) popup_cale_lunar_info_window_g1

0x04b2,	// (0x0002fade) main_fmradio_pane_t3

0x1488,	// (0x00030ab4) popup_cale_lunar_info_window_g2

0x04c2,	// (0x0002faee) main_fmradio_pane_t4

0x0001,

0x04d0,	// (0x0002fafc) main_fmradio_pane_t5

0x0004,

0xf624,	// (0x0003ec50) popup_cale_lunar_info_window_g

0xf55e,	// (0x0003eb8a) main_fmradio_pane_t

0x04de,	// (0x0002fb0a) wait_bar_pane_cp03

0x04e6,	// (0x0002fb12) cell_fmradio_pane_ParamLimits

0x04e6,	// (0x0002fb12) cell_fmradio_pane

0xf01a,	// (0x0003e646) cell_fmradio_pane_g1_ParamLimits

0xf01a,	// (0x0003e646) cell_fmradio_pane_g1

0xe0eb,	// (0x0003d717) grid_highlight_pane_cp011

0x04fb,	// (0x0002fb27) poc_content_pane_ParamLimits

0x04fb,	// (0x0002fb27) poc_content_pane

0x050d,	// (0x0002fb39) scroll_pane_cp019

0x916d,	// (0x00038799) popup_call_poc_act_window_ParamLimits

0x916d,	// (0x00038799) popup_call_poc_act_window

0x917a,	// (0x000387a6) popup_call_poc_inact_window_ParamLimits

0x917a,	// (0x000387a6) popup_call_poc_inact_window

0xf5fb,	// (0x0003ec27) bg_popup_call_poc_act_pane_g

0x13f8,	// (0x00030a24) bg_popup_call_poc_inact_pane_g1

0x1400,	// (0x00030a2c) bg_popup_call_poc_inact_pane_g2

0x0515,	// (0x0002fb41) popup_call_poc_act_window_g2

0x1408,	// (0x00030a34) bg_popup_call_poc_inact_pane_g3

0x1410,	// (0x00030a3c) bg_popup_call_poc_inact_pane_g4

0x1418,	// (0x00030a44) bg_popup_call_poc_inact_pane_g5

0x051d,	// (0x0002fb49) popup_call_poc_act_window_t1_ParamLimits

0x051d,	// (0x0002fb49) popup_call_poc_act_window_t1

0x0545,	// (0x0002fb71) popup_call_poc_act_window_t2_ParamLimits

0x0545,	// (0x0002fb71) popup_call_poc_act_window_t2

0x056d,	// (0x0002fb99) popup_call_poc_act_window_t3_ParamLimits

0x056d,	// (0x0002fb99) popup_call_poc_act_window_t3

0x0595,	// (0x0002fbc1) popup_call_poc_act_window_t4_ParamLimits

0x0595,	// (0x0002fbc1) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x0003eb95) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x0003eb95) popup_call_poc_act_window_t

0x1420,	// (0x00030a4c) bg_popup_call_poc_inact_pane_g6

0x1428,	// (0x00030a54) bg_popup_call_poc_inact_pane_g7

0x1430,	// (0x00030a5c) bg_popup_call_poc_inact_pane_g8

0x05a7,	// (0x0002fbd3) popup_call_poc_inact_window_g2

0x1438,	// (0x00030a64) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5e8,	// (0x0003ec14) bg_popup_call_poc_inact_pane_g

0x05af,	// (0x0002fbdb) popup_call_poc_inact_window_t1_ParamLimits

0x05af,	// (0x0002fbdb) popup_call_poc_inact_window_t1

0x05c4,	// (0x0002fbf0) popup_call_poc_inact_window_t2_ParamLimits

0x05c4,	// (0x0002fbf0) popup_call_poc_inact_window_t2

0x05d9,	// (0x0002fc05) popup_call_poc_inact_window_t3_ParamLimits

0x05d9,	// (0x0002fc05) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x0003eb9e) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x0003eb9e) popup_call_poc_inact_window_t

0x15f8,	// (0x00030c24) context_pane_ParamLimits

0x978c,	// (0x00038db8) signal_pane_ParamLimits

0xee6d,	// (0x0003e499) main_call2_pane

0x15e6,	// (0x00030c12) popup_phob_thumbnail2_window_ParamLimits

0x15e6,	// (0x00030c12) popup_phob_thumbnail2_window

0x8e31,	// (0x0003845d) aid_hotspot_pointer_arrow_pane

0x8e39,	// (0x00038465) aid_hotspot_pointer_hand_pane

0x94a2,	// (0x00038ace) phob_pre_status_pane_g5

0x7435,	// (0x00036a61) cams_zoom_pane_ParamLimits

0x7441,	// (0x00036a6d) image_vga_pane_ParamLimits

0x7450,	// (0x00036a7c) main_camera_pane_g1_ParamLimits

0x745e,	// (0x00036a8a) main_camera_pane_g2_ParamLimits

0x746a,	// (0x00036a96) main_camera_pane_g3_ParamLimits

0x7478,	// (0x00036aa4) main_camera_pane_g4_ParamLimits

0x7486,	// (0x00036ab2) main_camera_pane_g5_ParamLimits

0x7494,	// (0x00036ac0) main_camera_pane_g6_ParamLimits

0x74a2,	// (0x00036ace) main_camera_pane_g7_ParamLimits

0xf271,	// (0x0003e89d) main_camera_pane_g_ParamLimits

0x74b0,	// (0x00036adc) main_camera_pane_t1_ParamLimits

0x74c2,	// (0x00036aee) main_camera_pane_t2_ParamLimits

0xf282,	// (0x0003e8ae) main_camera_pane_t_ParamLimits

0xe346,	// (0x0003d972) bg_popup_preview_window_pane_cp01_ParamLimits

0xe346,	// (0x0003d972) bg_popup_preview_window_pane_cp01

0x05ee,	// (0x0002fc1a) popup_phob_thumbnail2_window_g1_ParamLimits

0x05ee,	// (0x0002fc1a) popup_phob_thumbnail2_window_g1

0xe0eb,	// (0x0003d717) call2_cli_visual_pane

0x9196,	// (0x000387c2) popup_call2_audio_conf_window_ParamLimits

0x9196,	// (0x000387c2) popup_call2_audio_conf_window

0x91af,	// (0x000387db) popup_call2_audio_first_window_ParamLimits

0x91af,	// (0x000387db) popup_call2_audio_first_window

0x924d,	// (0x00038879) popup_call2_audio_in_window_ParamLimits

0x924d,	// (0x00038879) popup_call2_audio_in_window

0x9291,	// (0x000388bd) popup_call2_audio_out_window_ParamLimits

0x9291,	// (0x000388bd) popup_call2_audio_out_window

0x92fb,	// (0x00038927) popup_call2_audio_second_window_ParamLimits

0x92fb,	// (0x00038927) popup_call2_audio_second_window

0x9359,	// (0x00038985) popup_call2_audio_wait_window_ParamLimits

0x9359,	// (0x00038985) popup_call2_audio_wait_window

0xe0eb,	// (0x0003d717) bg_popup_call2_act_pane_cp03

0xe328,	// (0x0003d954) list_conf_pane_cp

0x05fa,	// (0x0002fc26) popup_call2_audio_conf_window_t1

0x0608,	// (0x0002fc34) list_single_graphic_popup_conf2_pane_ParamLimits

0x0608,	// (0x0002fc34) list_single_graphic_popup_conf2_pane

0xec8e,	// (0x0003e2ba) list_highlight_pane_cp04

0x061b,	// (0x0002fc47) list_single_graphic_popup_conf2_pane_g1

0xec9f,	// (0x0003e2cb) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x0003eba5) list_single_graphic_popup_conf2_pane_g

0x0625,	// (0x0002fc51) list_single_graphic_popup_conf2_pane_t1

0x0633,	// (0x0002fc5f) bg_popup_call2_act_pane_cp01_ParamLimits

0x0633,	// (0x0002fc5f) bg_popup_call2_act_pane_cp01

0x06bd,	// (0x0002fce9) call_type_pane_cp05_ParamLimits

0x06bd,	// (0x0002fce9) call_type_pane_cp05

0x0711,	// (0x0002fd3d) popup_call2_audio_second_window_g1_ParamLimits

0x0711,	// (0x0002fd3d) popup_call2_audio_second_window_g1

0x0765,	// (0x0002fd91) popup_call2_audio_second_window_g2_ParamLimits

0x0765,	// (0x0002fd91) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x0003ebaa) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x0003ebaa) popup_call2_audio_second_window_g

0x07ca,	// (0x0002fdf6) popup_call2_audio_second_window_t1_ParamLimits

0x07ca,	// (0x0002fdf6) popup_call2_audio_second_window_t1

0x0885,	// (0x0002feb1) popup_call2_audio_second_window_t2_ParamLimits

0x0885,	// (0x0002feb1) popup_call2_audio_second_window_t2

0x08d8,	// (0x0002ff04) popup_call2_audio_second_window_t3_ParamLimits

0x08d8,	// (0x0002ff04) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x0003ebb1) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x0003ebb1) popup_call2_audio_second_window_t

0xe0eb,	// (0x0003d717) bg_popup_call2_in_pane_cp02

0xe0f5,	// (0x0003d721) call_type_pane_cp04

0xe0fd,	// (0x0003d729) popup_call2_audio_wait_window_g1

0xe105,	// (0x0003d731) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0003e78a) popup_call2_audio_wait_window_g

0xe10d,	// (0x0003d739) popup_call2_audio_wait_window_t3

0x09cb,	// (0x0002fff7) bg_popup_call2_act_pane_ParamLimits

0x09cb,	// (0x0002fff7) bg_popup_call2_act_pane

0x0a8b,	// (0x000300b7) call_type_pane_cp03_ParamLimits

0x0a8b,	// (0x000300b7) call_type_pane_cp03

0x0aef,	// (0x0003011b) popup_call2_audio_first_window_g1_ParamLimits

0x0aef,	// (0x0003011b) popup_call2_audio_first_window_g1

0x0b5f,	// (0x0003018b) popup_call2_audio_first_window_g2_ParamLimits

0x0b5f,	// (0x0003018b) popup_call2_audio_first_window_g2

0xeba8,	// (0x0003e1d4) popup_call2_audio_first_window_g3_ParamLimits

0xeba8,	// (0x0003e1d4) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x0003ebba) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x0003ebba) popup_call2_audio_first_window_g

0x0c3d,	// (0x00030269) popup_call2_audio_first_window_t1_ParamLimits

0x0c3d,	// (0x00030269) popup_call2_audio_first_window_t1

0x0d40,	// (0x0003036c) popup_call2_audio_first_window_t4_ParamLimits

0x0d40,	// (0x0003036c) popup_call2_audio_first_window_t4

0x0e23,	// (0x0003044f) popup_call2_audio_first_window_t5_ParamLimits

0x0e23,	// (0x0003044f) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x0003ebc5) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x0003ebc5) popup_call2_audio_first_window_t

0xe33e,	// (0x0003d96a) bg_popup_call2_act_pane_g1

0x1492,	// (0x00030abe) popup_cale_lunar_info_window_t1

0x14a0,	// (0x00030acc) popup_cale_lunar_info_window_t2

0x14ae,	// (0x00030ada) popup_cale_lunar_info_window_t3

0xe0eb,	// (0x0003d717) bg_popup_call2_bubble_pane

0x0f24,	// (0x00030550) bg_popup_call2_in_pane_cp01_ParamLimits

0x0f24,	// (0x00030550) bg_popup_call2_in_pane_cp01

0xddc7,	// (0x0003d3f3) call_type_pane_cp02

0x0f6c,	// (0x00030598) popup_call2_audio_out_window_g1_ParamLimits

0x0f6c,	// (0x00030598) popup_call2_audio_out_window_g1

0x0f98,	// (0x000305c4) popup_call2_audio_out_window_g2_ParamLimits

0x0f98,	// (0x000305c4) popup_call2_audio_out_window_g2

0x0fc0,	// (0x000305ec) popup_call2_audio_out_window_g3_ParamLimits

0x0fc0,	// (0x000305ec) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x0003ebce) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x0003ebce) popup_call2_audio_out_window_g

0x0ffb,	// (0x00030627) popup_call2_audio_out_window_t1_ParamLimits

0x0ffb,	// (0x00030627) popup_call2_audio_out_window_t1

0x105a,	// (0x00030686) popup_call2_audio_out_window_t2_ParamLimits

0x105a,	// (0x00030686) popup_call2_audio_out_window_t2

0x10ae,	// (0x000306da) popup_call2_audio_out_window_t3_ParamLimits

0x10ae,	// (0x000306da) popup_call2_audio_out_window_t3

0x10c4,	// (0x000306f0) popup_call2_audio_out_window_t4_ParamLimits

0x10c4,	// (0x000306f0) popup_call2_audio_out_window_t4

0x10da,	// (0x00030706) popup_call2_audio_out_window_t5_ParamLimits

0x10da,	// (0x00030706) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x0003ebd7) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x0003ebd7) popup_call2_audio_out_window_t

0x113e,	// (0x0003076a) bg_popup_call2_in_pane_ParamLimits

0x113e,	// (0x0003076a) bg_popup_call2_in_pane

0x119a,	// (0x000307c6) popup_call2_audio_in_window_g1_ParamLimits

0x119a,	// (0x000307c6) popup_call2_audio_in_window_g1

0x11d2,	// (0x000307fe) popup_call2_audio_in_window_g2_ParamLimits

0x11d2,	// (0x000307fe) popup_call2_audio_in_window_g2

0x120a,	// (0x00030836) popup_call2_audio_in_window_g3_ParamLimits

0x120a,	// (0x00030836) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x0003ebe4) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x0003ebe4) popup_call2_audio_in_window_g

0x1262,	// (0x0003088e) popup_call2_audio_in_window_t1_ParamLimits

0x1262,	// (0x0003088e) popup_call2_audio_in_window_t1

0x12e2,	// (0x0003090e) popup_call2_audio_in_window_t2_ParamLimits

0x12e2,	// (0x0003090e) popup_call2_audio_in_window_t2

0x1362,	// (0x0003098e) popup_call2_audio_in_window_t3_ParamLimits

0x1362,	// (0x0003098e) popup_call2_audio_in_window_t3

0x137c,	// (0x000309a8) popup_call2_audio_in_window_t4_ParamLimits

0x137c,	// (0x000309a8) popup_call2_audio_in_window_t4

0x138e,	// (0x000309ba) popup_call2_audio_in_window_t5_ParamLimits

0x138e,	// (0x000309ba) popup_call2_audio_in_window_t5

0x13a3,	// (0x000309cf) popup_call2_audio_in_window_t6_ParamLimits

0x13a3,	// (0x000309cf) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x0003ebed) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x0003ebed) popup_call2_audio_in_window_t

0xe33e,	// (0x0003d96a) bg_popup_call2_in_pane_g1

0x14bc,	// (0x00030ae8) popup_cale_lunar_info_window_t4

0x0003,

0xf629,	// (0x0003ec55) popup_cale_lunar_info_window_t

0xe346,	// (0x0003d972) bg_popup_call2_rect_pane_ParamLimits

0xe346,	// (0x0003d972) bg_popup_call2_rect_pane

0xe0eb,	// (0x0003d717) call2_cli_visual_graphic_pane

0xe0eb,	// (0x0003d717) call2_cli_visual_text_pane

0x9811,	// (0x00038e3d) smil_status_volume_pane_g3

0x0002,

0xe466,	// (0x0003da92) call2_cli_visual_graphic_pane_g1

0xe466,	// (0x0003da92) call2_cli_visual_graphic_pane_g2

0xe466,	// (0x0003da92) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x0003ebfa) call2_cli_visual_graphic_pane_g

0x13b8,	// (0x000309e4) bg_popup_call2_rect_pane_g1

0xe504,	// (0x0003db30) bg_popup_call2_rect_pane_g2

0x13c0,	// (0x000309ec) bg_popup_call2_rect_pane_g3

0x13c8,	// (0x000309f4) bg_popup_call2_rect_pane_g4

0x13d0,	// (0x000309fc) bg_popup_call2_rect_pane_g5

0x13d8,	// (0x00030a04) bg_popup_call2_rect_pane_g6

0x13e0,	// (0x00030a0c) bg_popup_call2_rect_pane_g7

0x13e8,	// (0x00030a14) bg_popup_call2_rect_pane_g8

0x13f0,	// (0x00030a1c) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x0003ec01) bg_popup_call2_rect_pane_g

0x13f8,	// (0x00030a24) bg_popup_call2_bubble_pane_g1

0x1400,	// (0x00030a2c) bg_popup_call2_bubble_pane_g2

0x1408,	// (0x00030a34) bg_popup_call2_bubble_pane_g3

0x1410,	// (0x00030a3c) bg_popup_call2_bubble_pane_g4

0x1418,	// (0x00030a44) bg_popup_call2_bubble_pane_g5

0x1420,	// (0x00030a4c) bg_popup_call2_bubble_pane_g6

0x1428,	// (0x00030a54) bg_popup_call2_bubble_pane_g7

0x1430,	// (0x00030a5c) bg_popup_call2_bubble_pane_g8

0x1438,	// (0x00030a64) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x0003ec14) bg_popup_call2_bubble_pane_g

0x6ecc,	// (0x000364f8) aid_cale_week_size_cell_pane

0x74d6,	// (0x00036b02) aid_cams_cif_uncrop_pane_ParamLimits

0x74d6,	// (0x00036b02) aid_cams_cif_uncrop_pane

0x7633,	// (0x00036c5f) aid_cams_size_cell_ParamLimits

0x7633,	// (0x00036c5f) aid_cams_size_cell

0x763f,	// (0x00036c6b) grid_cams_pane_ParamLimits

0x764d,	// (0x00036c79) linegrid_cams_pane_ParamLimits

0x76e5,	// (0x00036d11) call_video_pane_t1

0x76fb,	// (0x00036d27) call_video_pane_t2

0x0001,

0xf2d5,	// (0x0003e901) call_video_pane_t

0x7b55,	// (0x00037181) aid_cale_month_size_cell_pane_ParamLimits

0x7b55,	// (0x00037181) aid_cale_month_size_cell_pane

0xf672,	// (0x0003ec9e) smil_status_volume_pane_g

0x981e,	// (0x00038e4a) volume_smil_pane_ParamLimits

0xdc81,	// (0x0003d2ad) aid_popup2_width_pane

0x6de8,	// (0x00036414) cell_qdial_pane_g4_ParamLimits

0x6de8,	// (0x00036414) cell_qdial_pane_g4

0x87bc,	// (0x00037de8) aid_blid_cardinal_pane_ParamLimits

0x87cc,	// (0x00037df8) aid_blid_destination_pane_ParamLimits

0x87cc,	// (0x00037df8) aid_blid_destination_pane

0xe346,	// (0x0003d972) bg_popup_call_poc_act_pane_ParamLimits

0xe346,	// (0x0003d972) bg_popup_call_poc_act_pane

0xe346,	// (0x0003d972) bg_popup_call_poc_inact_pane_ParamLimits

0xe346,	// (0x0003d972) bg_popup_call_poc_inact_pane

0x1440,	// (0x00030a6c) bg_popup_call_poc_act_pane_g1

0x1448,	// (0x00030a74) bg_popup_call_poc_act_pane_g2

0x1450,	// (0x00030a7c) bg_popup_call_poc_act_pane_g3

0x1410,	// (0x00030a3c) bg_popup_call_poc_act_pane_g4

0x1418,	// (0x00030a44) bg_popup_call_poc_act_pane_g5

0x1458,	// (0x00030a84) bg_popup_call_poc_act_pane_g6

0x1428,	// (0x00030a54) bg_popup_call_poc_act_pane_g7

0x1460,	// (0x00030a8c) bg_popup_call_poc_act_pane_g8

0xe0eb,	// (0x0003d717) main_usb_pane

0x15bd,	// (0x00030be9) popup_cale_lunar_info_window

0x7992,	// (0x00036fbe) im_reading_pane_t1_ParamLimits

0xe6cb,	// (0x0003dcf7) list_im_pane_ParamLimits

0xe6dc,	// (0x0003dd08) scroll_pane_cp07_ParamLimits

0xe0eb,	// (0x0003d717) grid_highlight_pane_cp012

0xe346,	// (0x0003d972) mup_scale_pane_ParamLimits

0xeba8,	// (0x0003e1d4) main_usb_pane_g1_ParamLimits

0xeba8,	// (0x0003e1d4) main_usb_pane_g1

0x93c5,	// (0x000389f1) main_usb_pane_g2_ParamLimits

0x93c5,	// (0x000389f1) main_usb_pane_g2

0x0001,

0xf612,	// (0x0003ec3e) main_usb_pane_g_ParamLimits

0xf612,	// (0x0003ec3e) main_usb_pane_g

0x93d1,	// (0x000389fd) main_usb_pane_t1_ParamLimits

0x93d1,	// (0x000389fd) main_usb_pane_t1

0x93e3,	// (0x00038a0f) main_usb_pane_t2_ParamLimits

0x93e3,	// (0x00038a0f) main_usb_pane_t2

0x93f5,	// (0x00038a21) main_usb_pane_t3_ParamLimits

0x93f5,	// (0x00038a21) main_usb_pane_t3

0x9407,	// (0x00038a33) main_usb_pane_t4_ParamLimits

0x9407,	// (0x00038a33) main_usb_pane_t4

0x9419,	// (0x00038a45) main_usb_pane_t5_ParamLimits

0x9419,	// (0x00038a45) main_usb_pane_t5

0x942b,	// (0x00038a57) main_usb_pane_t6_ParamLimits

0x942b,	// (0x00038a57) main_usb_pane_t6

0x0005,

0xf617,	// (0x0003ec43) main_usb_pane_t_ParamLimits

0x8777,	// (0x00037da3) aid_text_placing

0x8782,	// (0x00037dae) main_location2_pane_t1_ParamLimits

0x8796,	// (0x00037dc2) main_location2_pane_t2_ParamLimits

0x8796,	// (0x00037dc2) main_location2_pane_t3_ParamLimits

0x87aa,	// (0x00037dd6) main_location2_pane_t4_ParamLimits

0x87aa,	// (0x00037dd6) main_location2_pane_t4

0xf436,	// (0x0003ea62) main_location2_pane_t_ParamLimits

0xe382,	// (0x0003d9ae) find_pinb_pane_g2_ParamLimits

0xe382,	// (0x0003d9ae) find_pinb_pane_g2

0x0001,

0xf184,	// (0x0003e7b0) find_pinb_pane_g_ParamLimits

0xf184,	// (0x0003e7b0) find_pinb_pane_g

0xe38e,	// (0x0003d9ba) find_pinb_pane_t1_ParamLimits

0xe3a0,	// (0x0003d9cc) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x0003e7b5) find_pinb_pane_t_ParamLimits

0xe0eb,	// (0x0003d717) main_call3_pane

0x7eb1,	// (0x000374dd) cale_month_day_heading_pane_t1_ParamLimits

0x7f0f,	// (0x0003753b) cale_month_day_heading_pane_t2_ParamLimits

0x7f74,	// (0x000375a0) cale_month_day_heading_pane_t3_ParamLimits

0x7fd9,	// (0x00037605) cale_month_day_heading_pane_t4_ParamLimits

0x803e,	// (0x0003766a) cale_month_day_heading_pane_t5_ParamLimits

0x80ab,	// (0x000376d7) cale_month_day_heading_pane_t6_ParamLimits

0x8120,	// (0x0003774c) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x0003e939) cale_month_day_heading_pane_t_ParamLimits

0xe91c,	// (0x0003df48) smil_status_volume_pane

0x8f7d,	// (0x000385a9) postcard_address_pane_ParamLimits

0x8f7d,	// (0x000385a9) postcard_address_pane

0x8f8b,	// (0x000385b7) postcard_message_pane_ParamLimits

0x8f8b,	// (0x000385b7) postcard_message_pane

0x9398,	// (0x000389c4) call2_cli_visual_pane_t1_ParamLimits

0x9398,	// (0x000389c4) call2_cli_visual_pane_t1

0x9964,	// (0x00038f90) postcard_message_pane_t1_ParamLimits

0x9964,	// (0x00038f90) postcard_message_pane_t1

0x16cd,	// (0x00030cf9) postcard_address_pane_t1_ParamLimits

0x16cd,	// (0x00030cf9) postcard_address_pane_t1

0x9955,	// (0x00038f81) popup_call3_audio_in_window_ParamLimits

0x9955,	// (0x00038f81) popup_call3_audio_in_window

0x9833,	// (0x00038e5f) bg_popup_call3_in_pane_ParamLimits

0x9833,	// (0x00038e5f) bg_popup_call3_in_pane

0x989b,	// (0x00038ec7) popup_call3_audio_in_window_g1_ParamLimits

0x989b,	// (0x00038ec7) popup_call3_audio_in_window_g1

0x98b3,	// (0x00038edf) popup_call3_audio_in_window_g2_ParamLimits

0x98b3,	// (0x00038edf) popup_call3_audio_in_window_g2

0x98cb,	// (0x00038ef7) popup_call3_audio_in_window_g3_ParamLimits

0x98cb,	// (0x00038ef7) popup_call3_audio_in_window_g3

0x0003,

0xf679,	// (0x0003eca5) popup_call3_audio_in_window_g_ParamLimits

0xf679,	// (0x0003eca5) popup_call3_audio_in_window_g

0x98f3,	// (0x00038f1f) popup_call3_audio_in_window_t1_ParamLimits

0x98f3,	// (0x00038f1f) popup_call3_audio_in_window_t1

0x991b,	// (0x00038f47) popup_call3_audio_in_window_t2_ParamLimits

0x991b,	// (0x00038f47) popup_call3_audio_in_window_t2

0x9943,	// (0x00038f6f) popup_call3_audio_in_window_t3_ParamLimits

0x9943,	// (0x00038f6f) popup_call3_audio_in_window_t3

0x0002,

0xf682,	// (0x0003ecae) popup_call3_audio_in_window_t_ParamLimits

0xf682,	// (0x0003ecae) popup_call3_audio_in_window_t

0xee6d,	// (0x0003e499) bg_popup_call3_rect_pane

0x13b8,	// (0x000309e4) bg_popup_call3_rect_pane_g1

0xe504,	// (0x0003db30) bg_popup_call3_rect_pane_g2

0x13c0,	// (0x000309ec) bg_popup_call3_rect_pane_g3

0x13c8,	// (0x000309f4) bg_popup_call3_rect_pane_g4

0x13d0,	// (0x000309fc) bg_popup_call3_rect_pane_g5

0x13d8,	// (0x00030a04) bg_popup_call3_rect_pane_g6

0x13e0,	// (0x00030a0c) bg_popup_call3_rect_pane_g7

0x8bdc,	// (0x00038208) mup_visualizer_osc_pane

0xef2c,	// (0x0003e558) mup_visualizer_spec_pane

0x9853,	// (0x00038e7f) call3_video_qcif_pane_ParamLimits

0x9853,	// (0x00038e7f) call3_video_qcif_pane

0x9865,	// (0x00038e91) call3_video_qcif_uncrop_pane_ParamLimits

0x9865,	// (0x00038e91) call3_video_qcif_uncrop_pane

0x9875,	// (0x00038ea1) call3_video_subqcif_pane_ParamLimits

0x9875,	// (0x00038ea1) call3_video_subqcif_pane

0x9889,	// (0x00038eb5) call3_video_subqcif_uncrop_pane_ParamLimits

0x9889,	// (0x00038eb5) call3_video_subqcif_uncrop_pane

0x98e3,	// (0x00038f0f) popup_call3_audio_in_window_g4_ParamLimits

0x98e3,	// (0x00038f0f) popup_call3_audio_in_window_g4

0x9800,	// (0x00038e2c) mup_spec_half_pane

0x9809,	// (0x00038e35) mup_spec_half_pane_cp

0x166b,	// (0x00030c97) mup_osc_middle_pane

0x1674,	// (0x00030ca0) mup_visualizer_osc_pane_g1

0x97e0,	// (0x00038e0c) mup_spec_bar_pane_ParamLimits

0x97e0,	// (0x00038e0c) mup_spec_bar_pane

0x1658,	// (0x00030c84) mup_spec_bar_pane_g1

0x1662,	// (0x00030c8e) mup_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x0003ec99) mup_spec_bar_pane_g

0x6ecc,	// (0x000364f8) aid_cale_week_size_cell_pane_ParamLimits

0x6edf,	// (0x0003650b) bg_cale_heading_pane_ParamLimits

0xe538,	// (0x0003db64) bg_cale_pane_cp01_ParamLimits

0x6ef3,	// (0x0003651f) cale_week_corner_pane_ParamLimits

0x6f09,	// (0x00036535) cale_week_day_heading_pane_ParamLimits

0x6f1d,	// (0x00036549) cale_week_scroll_pane_g1_ParamLimits

0x6f2e,	// (0x0003655a) cale_week_scroll_pane_g2_ParamLimits

0x6f3f,	// (0x0003656b) cale_week_scroll_pane_g3_ParamLimits

0x6f50,	// (0x0003657c) cale_week_scroll_pane_g4_ParamLimits

0x6f61,	// (0x0003658d) cale_week_scroll_pane_g5_ParamLimits

0x6f72,	// (0x0003659e) cale_week_scroll_pane_g6_ParamLimits

0x6f85,	// (0x000365b1) cale_week_scroll_pane_g7_ParamLimits

0x6f98,	// (0x000365c4) cale_week_scroll_pane_g8_ParamLimits

0x6fab,	// (0x000365d7) cale_week_scroll_pane_g9_ParamLimits

0x6fbc,	// (0x000365e8) cale_week_scroll_pane_g10_ParamLimits

0x6fcd,	// (0x000365f9) cale_week_scroll_pane_g11_ParamLimits

0x6fde,	// (0x0003660a) cale_week_scroll_pane_g12_ParamLimits

0x6fef,	// (0x0003661b) cale_week_scroll_pane_g13_ParamLimits

0x7000,	// (0x0003662c) cale_week_scroll_pane_g14_ParamLimits

0x7011,	// (0x0003663d) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x0003e841) cale_week_scroll_pane_g_ParamLimits

0x7022,	// (0x0003664e) cale_week_time_pane_ParamLimits

0x7035,	// (0x00036661) grid_cale_week_pane_ParamLimits

0xe551,	// (0x0003db7d) listscroll_cale_week_pane_t1

0x704a,	// (0x00036676) scroll_pane_cp08_ParamLimits

0x7b96,	// (0x000371c2) cale_month_corner_pane_ParamLimits

0xe8f2,	// (0x0003df1e) cale_month_pane_t1

0x7e70,	// (0x0003749c) cale_month_week_pane_ParamLimits

0xeba8,	// (0x0003e1d4) popup_call_status_window_g1_ParamLimits

0x8589,	// (0x00037bb5) popup_call_status_window_g2_ParamLimits

0x8595,	// (0x00037bc1) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x0003e9e9) popup_call_status_window_g_ParamLimits

0xec0f,	// (0x0003e23b) aid_call2_pane

0x58a6,	// (0x00034ed2) msg_header_pane_g1

0x8f7d,	// (0x000385a9) postcard_address2_pane_ParamLimits

0x8f7d,	// (0x000385a9) postcard_address2_pane

0x8f8b,	// (0x000385b7) postcard_message2_pane_ParamLimits

0x8f8b,	// (0x000385b7) postcard_message2_pane

0x979a,	// (0x00038dc6) message2_row_pane_ParamLimits

0x979a,	// (0x00038dc6) message2_row_pane

0x1613,	// (0x00030c3f) address2_row_pane_ParamLimits

0x1613,	// (0x00030c3f) address2_row_pane

0x1626,	// (0x00030c52) postcard_message2_row_pane_g1

0x162e,	// (0x00030c5a) postcard_message2_row_pane_t1

0x1626,	// (0x00030c52) address2_row_pane_g1

0x162e,	// (0x00030c5a) address2_row_pane_t1

0x7394,	// (0x000369c0) aid_size_cell_vorec

0xe0eb,	// (0x0003d717) main_rss_pane

0x97b4,	// (0x00038de0) rss_list_single_pane_ParamLimits

0x97b4,	// (0x00038de0) rss_list_single_pane

0x163c,	// (0x00030c68) rss_list_single_pane_t1

0x164a,	// (0x00030c76) rss_list_single_pane_t2

0x0001,

0xf668,	// (0x0003ec94) rss_list_single_pane_t

0xe0eb,	// (0x0003d717) main_camera2_pane

0xe0eb,	// (0x0003d717) main_video2_pane

0x99c8,	// (0x00038ff4) cams_zoom_pane_cp2_ParamLimits

0x99c8,	// (0x00038ff4) cams_zoom_pane_cp2

0x99d4,	// (0x00039000) image2_vga_pane_ParamLimits

0x99d4,	// (0x00039000) image2_vga_pane

0x99e3,	// (0x0003900f) main_camera2_pane_g1_ParamLimits

0x99e3,	// (0x0003900f) main_camera2_pane_g1

0x99ef,	// (0x0003901b) main_camera2_pane_g2_ParamLimits

0x99ef,	// (0x0003901b) main_camera2_pane_g2

0x99fb,	// (0x00039027) main_camera2_pane_g3_ParamLimits

0x99fb,	// (0x00039027) main_camera2_pane_g3

0x9a07,	// (0x00039033) main_camera2_pane_g4_ParamLimits

0x9a07,	// (0x00039033) main_camera2_pane_g4

0x9a13,	// (0x0003903f) main_camera2_pane_g5_ParamLimits

0x9a13,	// (0x0003903f) main_camera2_pane_g5

0x9a1f,	// (0x0003904b) main_camera2_pane_g6_ParamLimits

0x9a1f,	// (0x0003904b) main_camera2_pane_g6

0x9a2b,	// (0x00039057) main_camera2_pane_g7_ParamLimits

0x9a2b,	// (0x00039057) main_camera2_pane_g7

0x9a37,	// (0x00039063) main_camera2_pane_g8_ParamLimits

0x9a37,	// (0x00039063) main_camera2_pane_g8

0x0008,

0xf689,	// (0x0003ecb5) main_camera2_pane_g_ParamLimits

0xf689,	// (0x0003ecb5) main_camera2_pane_g

0x9a4f,	// (0x0003907b) main_camera2_pane_t1_ParamLimits

0x9a4f,	// (0x0003907b) main_camera2_pane_t1

0x9a61,	// (0x0003908d) main_camera2_pane_t2_ParamLimits

0x9a61,	// (0x0003908d) main_camera2_pane_t2

0x9a73,	// (0x0003909f) main_camera2_pane_t3_ParamLimits

0x9a73,	// (0x0003909f) main_camera2_pane_t3

0x9a85,	// (0x000390b1) main_camera2_pane_t4_ParamLimits

0x9a85,	// (0x000390b1) main_camera2_pane_t4

0x0006,

0xf69c,	// (0x0003ecc8) main_camera2_pane_t_ParamLimits

0xf69c,	// (0x0003ecc8) main_camera2_pane_t

0x9ae2,	// (0x0003910e) cams_zoom_pane_cp4_ParamLimits

0x9ae2,	// (0x0003910e) cams_zoom_pane_cp4

0x9af2,	// (0x0003911e) image2_cif_pane_ParamLimits

0x9af2,	// (0x0003911e) image2_cif_pane

0x9b07,	// (0x00039133) image2_subqcif_pane_ParamLimits

0x9b07,	// (0x00039133) image2_subqcif_pane

0x9b16,	// (0x00039142) main_video2_pane_g1_ParamLimits

0x9b16,	// (0x00039142) main_video2_pane_g1

0x9b28,	// (0x00039154) main_video2_pane_g2_ParamLimits

0x9b28,	// (0x00039154) main_video2_pane_g2

0x9b38,	// (0x00039164) main_video2_pane_g3_ParamLimits

0x9b38,	// (0x00039164) main_video2_pane_g3

0x9b48,	// (0x00039174) main_video2_pane_g4_ParamLimits

0x9b48,	// (0x00039174) main_video2_pane_g4

0x9b58,	// (0x00039184) main_video2_pane_g5_ParamLimits

0x9b58,	// (0x00039184) main_video2_pane_g5

0x9b68,	// (0x00039194) main_video2_pane_g6_ParamLimits

0x9b68,	// (0x00039194) main_video2_pane_g6

0x0005,

0xf6ab,	// (0x0003ecd7) main_video2_pane_g_ParamLimits

0xf6ab,	// (0x0003ecd7) main_video2_pane_g

0x9b7a,	// (0x000391a6) main_video2_pane_t1_ParamLimits

0x9b7a,	// (0x000391a6) main_video2_pane_t1

0x9b94,	// (0x000391c0) main_video2_pane_t2_ParamLimits

0x9b94,	// (0x000391c0) main_video2_pane_t2

0x9bba,	// (0x000391e6) main_video2_pane_t3_ParamLimits

0x9bba,	// (0x000391e6) main_video2_pane_t3

0x0002,

0xf6b8,	// (0x0003ece4) main_video2_pane_t_ParamLimits

0xf6b8,	// (0x0003ece4) main_video2_pane_t

0x94e2,	// (0x00038b0e) call_muted_g2

0x0001,

0xf65a,	// (0x0003ec86) call_muted_g

0xe0eb,	// (0x0003d717) main_mup2_pane

0x173d,	// (0x00030d69) main_mup2_pane_g1_ParamLimits

0x173d,	// (0x00030d69) main_mup2_pane_g1

0x9be0,	// (0x0003920c) main_mup2_pane_g2_ParamLimits

0x9be0,	// (0x0003920c) main_mup2_pane_g2

0x9e72,	// (0x0003949e) main_mup_pane_g13_cp1

0x9e7a,	// (0x000394a6) mup_volume_pane_cp1

0x9c02,	// (0x0003922e) main_mup2_pane_g4_ParamLimits

0x9c02,	// (0x0003922e) main_mup2_pane_g4

0x9c17,	// (0x00039243) main_mup2_pane_g5_ParamLimits

0x9c17,	// (0x00039243) main_mup2_pane_g5

0x9c2c,	// (0x00039258) main_mup2_pane_g6_ParamLimits

0x9c2c,	// (0x00039258) main_mup2_pane_g6

0x9c41,	// (0x0003926d) main_mup2_pane_g7_ParamLimits

0x9c41,	// (0x0003926d) main_mup2_pane_g7

0x0006,

0xf6bf,	// (0x0003eceb) main_mup2_pane_g_ParamLimits

0xf6bf,	// (0x0003eceb) main_mup2_pane_g

0x9c5d,	// (0x00039289) main_mup2_pane_t1_ParamLimits

0x9c5d,	// (0x00039289) main_mup2_pane_t1

0x9c74,	// (0x000392a0) main_mup2_pane_t2_ParamLimits

0x9c74,	// (0x000392a0) main_mup2_pane_t2

0x9c8b,	// (0x000392b7) main_mup2_pane_t3_ParamLimits

0x9c8b,	// (0x000392b7) main_mup2_pane_t3

0x9ca2,	// (0x000392ce) main_mup2_pane_t4_ParamLimits

0x9ca2,	// (0x000392ce) main_mup2_pane_t4

0x9cbc,	// (0x000392e8) main_mup2_pane_t5_ParamLimits

0x9cbc,	// (0x000392e8) main_mup2_pane_t5

0x9cd6,	// (0x00039302) main_mup2_pane_t6_ParamLimits

0x9cd6,	// (0x00039302) main_mup2_pane_t6

0x0005,

0xf6ce,	// (0x0003ecfa) main_mup2_pane_t_ParamLimits

0xf6ce,	// (0x0003ecfa) main_mup2_pane_t

0x9d0e,	// (0x0003933a) mup2_visualizer_pane_ParamLimits

0x9d0e,	// (0x0003933a) mup2_visualizer_pane

0x9d44,	// (0x00039370) mup_progress_pane_cp_ParamLimits

0x9d44,	// (0x00039370) mup_progress_pane_cp

0x9e5d,	// (0x00039489) mup_volume_pane_cp_ParamLimits

0x9e5d,	// (0x00039489) mup_volume_pane_cp

0x9d5d,	// (0x00039389) mup2_visualizer_pane_g1_ParamLimits

0x9d5d,	// (0x00039389) mup2_visualizer_pane_g1

0x170f,	// (0x00030d3b) mup2_visualizer_pane_g2_ParamLimits

0x170f,	// (0x00030d3b) mup2_visualizer_pane_g2

0x9d72,	// (0x0003939e) mup2_visualizer_pane_g3_ParamLimits

0x9d72,	// (0x0003939e) mup2_visualizer_pane_g3

0x0002,

0xf6db,	// (0x0003ed07) mup2_visualizer_pane_g_ParamLimits

0xf6db,	// (0x0003ed07) mup2_visualizer_pane_g

0x0484,	// (0x0002fab0) aid_size_cell_fmradio

0x95f8,	// (0x00038c24) aid_height_parent_landcape

0xe75a,	// (0x0003dd86) wml_content_pane_cp

0xe762,	// (0x0003dd8e) wml_tabs_pane

0xe76b,	// (0x0003dd97) popup_wml_miniature_window

0xe773,	// (0x0003dd9f) scroll_pane_cp021

0xe787,	// (0x0003ddb3) wml_content_pane_comp8

0xe0eb,	// (0x0003d717) bg_popup_sub_pane_cp05

0x172d,	// (0x00030d59) popup_wml_miniature_window_g1

0x1735,	// (0x00030d61) wml_miniature_view_pane

0x9d80,	// (0x000393ac) aid_size_wml_view

0x9d88,	// (0x000393b4) wml_miniature_view_pane_g1

0x9d91,	// (0x000393bd) wml_miniature_view_pane_g2

0x9d9a,	// (0x000393c6) wml_miniature_view_pane_g3

0x9da2,	// (0x000393ce) wml_miniature_view_pane_g4

0x9daa,	// (0x000393d6) wml_miniature_view_pane_g5

0x9db2,	// (0x000393de) wml_miniature_view_pane_g6

0x9dba,	// (0x000393e6) wml_miniature_view_pane_g7

0x9dc2,	// (0x000393ee) wml_miniature_view_pane_g8

0x0007,

0xf6e2,	// (0x0003ed0e) wml_miniature_view_pane_g

0x173d,	// (0x00030d69) background_graphic_ParamLimits

0x173d,	// (0x00030d69) background_graphic

0x1749,	// (0x00030d75) wml_tabs_2_pane

0x1752,	// (0x00030d7e) wml_tabs_3_pane_ParamLimits

0x1752,	// (0x00030d7e) wml_tabs_3_pane

0x1764,	// (0x00030d90) wml_tabs_4_pane_ParamLimits

0x1764,	// (0x00030d90) wml_tabs_4_pane

0x177a,	// (0x00030da6) wml_tabs_5_pane_ParamLimits

0x177a,	// (0x00030da6) wml_tabs_5_pane

0x1794,	// (0x00030dc0) wml_tabs_pane_g2_ParamLimits

0x1794,	// (0x00030dc0) wml_tabs_pane_g2

0x17a8,	// (0x00030dd4) wml_tabs_pane_g3_ParamLimits

0x17a8,	// (0x00030dd4) wml_tabs_pane_g3

0x9dca,	// (0x000393f6) wml_tabs_2_active_pane_ParamLimits

0x9dca,	// (0x000393f6) wml_tabs_2_active_pane

0x9ddc,	// (0x00039408) wml_tabs_2_passive_pane_ParamLimits

0x9ddc,	// (0x00039408) wml_tabs_2_passive_pane

0x9dee,	// (0x0003941a) wml_tabs_3_active_pane_cp_ParamLimits

0x9dee,	// (0x0003941a) wml_tabs_3_active_pane_cp

0x9e01,	// (0x0003942d) wml_tabs_3_passive_pane_ParamLimits

0x9e01,	// (0x0003942d) wml_tabs_3_passive_pane

0x9e12,	// (0x0003943e) wml_tabs_3_passive_pane_cp_ParamLimits

0x9e12,	// (0x0003943e) wml_tabs_3_passive_pane_cp

0x9e27,	// (0x00039453) tabs_4_active_pane

0x9e2f,	// (0x0003945b) tabs_4_passive_pane

0x9e37,	// (0x00039463) tabs_4_passive_pane_cp

0x9e3f,	// (0x0003946b) tabs_4_passive_pane_cp2

0x93bd,	// (0x000389e9) aid_height_text

0x8ba5,	// (0x000381d1) mup_volume_cont_pane_ParamLimits

0x8ba5,	// (0x000381d1) mup_volume_cont_pane

0x6a4b,	// (0x00036077) aid_size_cell_pinb

0x6a55,	// (0x00036081) aid_size_list_pinb

0x9d2d,	// (0x00039359) mup2_volume_cont_pane_ParamLimits

0x9d2d,	// (0x00039359) mup2_volume_cont_pane

0x9e49,	// (0x00039475) mup2_volume_cont_pane_g1_ParamLimits

0x9e49,	// (0x00039475) mup2_volume_cont_pane_g1

0x66d4,	// (0x00035d00) aid_size_cell_touch_ParamLimits

0x66d4,	// (0x00035d00) aid_size_cell_touch

0x6932,	// (0x00035f5e) touch_pane_ParamLimits

0x6932,	// (0x00035f5e) touch_pane

0xdc6f,	// (0x0003d29b) main_rss2_pane

0x17fe,	// (0x00030e2a) listscroll_rss2_pane

0x1807,	// (0x00030e33) rss2_navigation_pane

0x180f,	// (0x00030e3b) list_rss2_pane

0xed33,	// (0x0003e35f) scroll_pane_cp22

0x1817,	// (0x00030e43) rss2_navigation_pane_g1

0x1820,	// (0x00030e4c) rss2_navigation_pane_g2

0x1828,	// (0x00030e54) rss2_navigation_pane_g3

0x0002,

0xf6f3,	// (0x0003ed1f) rss2_navigation_pane_g

0x1830,	// (0x00030e5c) rss2_navigation_pane_t1

0x9e82,	// (0x000394ae) rss2_list_single_pane_ParamLimits

0x9e82,	// (0x000394ae) rss2_list_single_pane

0x183e,	// (0x00030e6a) rss2_list_single_pane_t2

0x184c,	// (0x00030e78) rss2_list_single_pane_t3_ParamLimits

0x184c,	// (0x00030e78) rss2_list_single_pane_t3

0x1869,	// (0x00030e95) rss2_list_single_pane_t4

0x8398,	// (0x000379c4) smil_status_pane_g1

0xf109,	// (0x0003e735) main_image2_pane_ParamLimits

0xf109,	// (0x0003e735) main_image2_pane

0x9a43,	// (0x0003906f) main_camera2_pane_g9_ParamLimits

0x9a43,	// (0x0003906f) main_camera2_pane_g9

0x9a97,	// (0x000390c3) main_camera2_pane_t5_ParamLimits

0x9a97,	// (0x000390c3) main_camera2_pane_t5

0x9aa9,	// (0x000390d5) main_camera2_pane_t6_ParamLimits

0x9aa9,	// (0x000390d5) main_camera2_pane_t6

0x9ea8,	// (0x000394d4) main_image2_pane_g1_ParamLimits

0x9ea8,	// (0x000394d4) main_image2_pane_g1

0x9157,	// (0x00038783) smil2_video_pane_ParamLimits

0x9157,	// (0x00038783) smil2_video_pane

0x5627,	// (0x00034c53) aid_zoom_text_primary_cp

0xdcce,	// (0x0003d2fa) popup_preview_fixed_window

0xe6c3,	// (0x0003dcef) im_reading_pane_g1

0x998d,	// (0x00038fb9) cams2_bc_adjust_pane_cp_ParamLimits

0x998d,	// (0x00038fb9) cams2_bc_adjust_pane_cp

0x9ad4,	// (0x00039100) cams2_bc_adjust_pane_ParamLimits

0x9ad4,	// (0x00039100) cams2_bc_adjust_pane

0x9eb4,	// (0x000394e0) cams2_bc_adjust_pane_g1

0x9ebc,	// (0x000394e8) cams2_slider_pane

0x9ec5,	// (0x000394f1) cams2_slider_pane_g1

0x9ece,	// (0x000394fa) cams2_slider_pane_g2

0x0006,

0xf6fa,	// (0x0003ed26) cams2_slider_pane_g

0x6b48,	// (0x00036174) calc_display_pane_ParamLimits

0x6b66,	// (0x00036192) calc_paper_pane_ParamLimits

0x6b82,	// (0x000361ae) grid_calc_pane_ParamLimits

0x85f3,	// (0x00037c1f) popup_clock_digital_window_t1_ParamLimits

0xf0f2,	// (0x0003e71e) main_image_pane_t1

0x6b2e,	// (0x0003615a) aid_size_cell_calc_ParamLimits

0x6b2e,	// (0x0003615a) aid_size_cell_calc

0x962a,	// (0x00038c56) popup_blid_sat_info2_window_ParamLimits

0x962a,	// (0x00038c56) popup_blid_sat_info2_window

0x18b3,	// (0x00030edf) aid_size_cell_blid

0x18bb,	// (0x00030ee7) bg_popup_window_pane_cp07

0x18de,	// (0x00030f0a) grid_popup_blid_pane

0x18e8,	// (0x00030f14) heading_pane_cp05_ParamLimits

0x18e8,	// (0x00030f14) heading_pane_cp05

0x19b2,	// (0x00030fde) cell_popup_blid_pane_ParamLimits

0x19b2,	// (0x00030fde) cell_popup_blid_pane

0x19dc,	// (0x00031008) cell_popup_blid_pane_g1

0x19e4,	// (0x00031010) cell_popup_blid_pane_t1

0x9cf3,	// (0x0003931f) mup2_indicator_pane_ParamLimits

0x9cf3,	// (0x0003931f) mup2_indicator_pane

0xee6d,	// (0x0003e499) mup2_visualizer_osc_pane

0x171b,	// (0x00030d47) mup2_visualizer_spec_pane_ParamLimits

0x171b,	// (0x00030d47) mup2_visualizer_spec_pane

0x9ee8,	// (0x00039514) mup2_spec_half_pane

0x9ef1,	// (0x0003951d) mup2_spec_half_pane_cp

0x9efb,	// (0x00039527) mup2_spec_bar_pane_ParamLimits

0x9efb,	// (0x00039527) mup2_spec_bar_pane

0x1658,	// (0x00030c84) mup2_spec_bar_pane_g1

0x1662,	// (0x00030c8e) mup2_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x0003ec99) mup2_spec_bar_pane_g

0x9f1a,	// (0x00039546) mup2_osc_middle_pane

0x1674,	// (0x00030ca0) mup2_visualizer_osc_pane_g1

0xdcf8,	// (0x0003d324) popup_number_entry_window_t1_ParamLimits

0xdd0b,	// (0x0003d337) popup_number_entry_window_t2_ParamLimits

0xdd1d,	// (0x0003d349) popup_number_entry_window_t3_ParamLimits

0x6989,	// (0x00035fb5) popup_number_entry_window_t5_ParamLimits

0x6989,	// (0x00035fb5) popup_number_entry_window_t5

0xf12f,	// (0x0003e75b) popup_number_entry_window_t_ParamLimits

0xdd2f,	// (0x0003d35b) text_title_cp2_ParamLimits

0x8e41,	// (0x0003846d) aid_hotspot_pointer_text2_pane

0x8edb,	// (0x00038507) main_viewer_pane_g9_ParamLimits

0x8edb,	// (0x00038507) main_viewer_pane_g9

0xe8f2,	// (0x0003df1e) cale_month_pane_t1_ParamLimits

0xe92f,	// (0x0003df5b) bg_cale_pane_ParamLimits

0xe947,	// (0x0003df73) list_cale_pane_ParamLimits

0xe551,	// (0x0003db7d) listscroll_cale_day_pane_t1

0xe958,	// (0x0003df84) scroll_pane_cp09_ParamLimits

0x8be4,	// (0x00038210) main_mup_eq_pane_t1_ParamLimits

0x8be4,	// (0x00038210) main_mup_eq_pane_t1

0x8c00,	// (0x0003822c) main_mup_eq_pane_t2_ParamLimits

0x8c00,	// (0x0003822c) main_mup_eq_pane_t2

0x8c1c,	// (0x00038248) main_mup_eq_pane_t3_ParamLimits

0x8c1c,	// (0x00038248) main_mup_eq_pane_t3

0x8c36,	// (0x00038262) main_mup_eq_pane_t4_ParamLimits

0x8c36,	// (0x00038262) main_mup_eq_pane_t4

0x8c50,	// (0x0003827c) main_mup_eq_pane_t5_ParamLimits

0x8c50,	// (0x0003827c) main_mup_eq_pane_t5

0x8c6a,	// (0x00038296) main_mup_eq_pane_t6_ParamLimits

0x8c6a,	// (0x00038296) main_mup_eq_pane_t6

0x8c80,	// (0x000382ac) main_mup_eq_pane_t7_ParamLimits

0x8c80,	// (0x000382ac) main_mup_eq_pane_t7

0x8c96,	// (0x000382c2) main_mup_eq_pane_t8_ParamLimits

0x8c96,	// (0x000382c2) main_mup_eq_pane_t8

0x8cac,	// (0x000382d8) main_mup_eq_pane_t9_ParamLimits

0x8cac,	// (0x000382d8) main_mup_eq_pane_t9

0x8cc8,	// (0x000382f4) main_mup_eq_pane_t10_ParamLimits

0x8cc8,	// (0x000382f4) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x0003eae8) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x0003eae8) main_mup_eq_pane_t

0x8d8d,	// (0x000383b9) mup_equalizer_pane_cp5_ParamLimits

0x8da5,	// (0x000383d1) mup_equalizer_pane_cp6_ParamLimits

0x8dbd,	// (0x000383e9) mup_equalizer_pane_cp7_ParamLimits

0xdc6f,	// (0x0003d29b) main_gallery_pane

0x167d,	// (0x00030ca9) smil2_volume_pane

0x1698,	// (0x00030cc4) smil_status_volume_pane_g1_ParamLimits

0x1685,	// (0x00030cb1) smil_status_volume_pane_g2_ParamLimits

0x9811,	// (0x00038e3d) smil_status_volume_pane_g3_ParamLimits

0xf672,	// (0x0003ec9e) smil_status_volume_pane_g_ParamLimits

0x18bb,	// (0x00030ee7) bg_popup_window_pane_cp07_ParamLimits

0x18c9,	// (0x00030ef5) blid_firmament_pane

0x9f23,	// (0x0003954f) aid_size_cell_gallery_ParamLimits

0x9f23,	// (0x0003954f) aid_size_cell_gallery

0x9f31,	// (0x0003955d) grid_gallery_pane_ParamLimits

0x9f31,	// (0x0003955d) grid_gallery_pane

0x9f41,	// (0x0003956d) cell_gallery_pane_ParamLimits

0x9f41,	// (0x0003956d) cell_gallery_pane

0x19f2,	// (0x0003101e) bg_cell_gallery_focus_pane_ParamLimits

0x19f2,	// (0x0003101e) bg_cell_gallery_focus_pane

0x1a04,	// (0x00031030) cell_gallery_pane_g1_ParamLimits

0x1a04,	// (0x00031030) cell_gallery_pane_g1

0x9f8f,	// (0x000395bb) cell_gallery_pane_g2_ParamLimits

0x9f8f,	// (0x000395bb) cell_gallery_pane_g2

0x9f9c,	// (0x000395c8) cell_gallery_pane_g3_ParamLimits

0x9f9c,	// (0x000395c8) cell_gallery_pane_g3

0x1a10,	// (0x0003103c) cell_gallery_pane_g4_ParamLimits

0x1a10,	// (0x0003103c) cell_gallery_pane_g4

0x0003,

0xf720,	// (0x0003ed4c) cell_gallery_pane_g_ParamLimits

0xf720,	// (0x0003ed4c) cell_gallery_pane_g

0x1a1c,	// (0x00031048) bg_cell_gallery_focus_pane_g1

0x1a24,	// (0x00031050) bg_cell_gallery_focus_pane_g2

0x1a2c,	// (0x00031058) bg_cell_gallery_focus_pane_g3

0x1a34,	// (0x00031060) bg_cell_gallery_focus_pane_g4

0x1a3c,	// (0x00031068) bg_cell_gallery_focus_pane_g5

0x1a44,	// (0x00031070) bg_cell_gallery_focus_pane_g6

0x1a4c,	// (0x00031078) bg_cell_gallery_focus_pane_g7

0x1a54,	// (0x00031080) bg_cell_gallery_focus_pane_g8

0x0007,

0xf729,	// (0x0003ed55) bg_cell_gallery_focus_pane_g

0x1a5c,	// (0x00031088) aid_firma_cardinal

0x1a70,	// (0x0003109c) blid_firmament_pane_t1

0x1a87,	// (0x000310b3) blid_firmament_pane_t2

0x1a9e,	// (0x000310ca) blid_firmament_pane_t3

0x1ab5,	// (0x000310e1) blid_firmament_pane_t4

0x0003,

0xf73a,	// (0x0003ed66) blid_firmament_pane_t

0x1acc,	// (0x000310f8) blid_sat_info_pane

0x1adc,	// (0x00031108) blid_sat_info_pane_g1

0x1adc,	// (0x00031108) blid_sat_info_pane_g2

0x0001,

0xf743,	// (0x0003ed6f) blid_sat_info_pane_g

0x1ae6,	// (0x00031112) blid_sat_info_pane_t1

0x1af4,	// (0x00031120) smil2_volume_content_pane

0x1afd,	// (0x00031129) smil2_volume_pane_g1

0x1b05,	// (0x00031131) smil2_volume_content_pane_g1

0x1b0e,	// (0x0003113a) smil2_volume_content_pane_g2

0x1b17,	// (0x00031143) smil2_volume_content_pane_g3

0x1b20,	// (0x0003114c) smil2_volume_content_pane_g4

0x1b29,	// (0x00031155) smil2_volume_content_pane_g5

0x1b32,	// (0x0003115e) smil2_volume_content_pane_g6

0x1b3b,	// (0x00031167) smil2_volume_content_pane_g7

0x1b44,	// (0x00031170) smil2_volume_content_pane_g8

0x1b4d,	// (0x00031179) smil2_volume_content_pane_g9

0x1b56,	// (0x00031182) smil2_volume_content_pane_g10

0x0009,

0xf748,	// (0x0003ed74) smil2_volume_content_pane_g

0x70a2,	// (0x000366ce) cale_week_day_heading_pane_t1_ParamLimits

0x70cf,	// (0x000366fb) cale_week_day_heading_pane_t2_ParamLimits

0x70fc,	// (0x00036728) cale_week_day_heading_pane_t3_ParamLimits

0x7129,	// (0x00036755) cale_week_day_heading_pane_t4_ParamLimits

0x7156,	// (0x00036782) cale_week_day_heading_pane_t5_ParamLimits

0x7183,	// (0x000367af) cale_week_day_heading_pane_t6_ParamLimits

0x71b0,	// (0x000367dc) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x0003e860) cale_week_day_heading_pane_t_ParamLimits

0xe563,	// (0x0003db8f) bg_cale_side_pane_ParamLimits

0x71dd,	// (0x00036809) cale_week_time_pane_t1_ParamLimits

0x7209,	// (0x00036835) cale_week_time_pane_t2_ParamLimits

0x7235,	// (0x00036861) cale_week_time_pane_t3_ParamLimits

0x7261,	// (0x0003688d) cale_week_time_pane_t4_ParamLimits

0x728d,	// (0x000368b9) cale_week_time_pane_t5_ParamLimits

0x72b9,	// (0x000368e5) cale_week_time_pane_t6_ParamLimits

0x72e5,	// (0x00036911) cale_week_time_pane_t7_ParamLimits

0x7311,	// (0x0003693d) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x0003e86f) cale_week_time_pane_t_ParamLimits

0x733d,	// (0x00036969) cell_cale_week_pane_g2_ParamLimits

0xe563,	// (0x0003db8f) bg_cale_side_pane_cp01_ParamLimits

0x8195,	// (0x000377c1) cale_month_week_pane_t1_ParamLimits

0x81c0,	// (0x000377ec) cale_month_week_pane_t2_ParamLimits

0x81eb,	// (0x00037817) cale_month_week_pane_t3_ParamLimits

0x8216,	// (0x00037842) cale_month_week_pane_t4_ParamLimits

0x8241,	// (0x0003786d) cale_month_week_pane_t5_ParamLimits

0x826c,	// (0x00037898) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x0003e948) cale_month_week_pane_t_ParamLimits

0x8365,	// (0x00037991) cell_cale_month_pane_g1_ParamLimits

0xdc6f,	// (0x0003d29b) main_cale_event_viewer_pane

0xdc6f,	// (0x0003d29b) listscroll_cale_event_viewer_pane

0x1b5f,	// (0x0003118b) list_cale_ev_pane

0x1b67,	// (0x00031193) scroll_pane_cp023

0x9fa9,	// (0x000395d5) field_cale_ev_pane_ParamLimits

0x9fa9,	// (0x000395d5) field_cale_ev_pane

0x1b73,	// (0x0003119f) field_cale_ev_content_pane_ParamLimits

0x1b73,	// (0x0003119f) field_cale_ev_content_pane

0x1b7f,	// (0x000311ab) field_cale_ev_pane_g1_ParamLimits

0x1b7f,	// (0x000311ab) field_cale_ev_pane_g1

0x1b8b,	// (0x000311b7) field_cale_ev_pane_g2_ParamLimits

0x1b8b,	// (0x000311b7) field_cale_ev_pane_g2

0x1ba3,	// (0x000311cf) field_cale_ev_pane_g3_ParamLimits

0x1ba3,	// (0x000311cf) field_cale_ev_pane_g3

0x0002,

0xf75d,	// (0x0003ed89) field_cale_ev_pane_g_ParamLimits

0xf75d,	// (0x0003ed89) field_cale_ev_pane_g

0x1bbb,	// (0x000311e7) field_cale_ev_pane_t1_ParamLimits

0x1bbb,	// (0x000311e7) field_cale_ev_pane_t1

0x9fcd,	// (0x000395f9) field_cale_ev_content_pane_t1_ParamLimits

0x9fcd,	// (0x000395f9) field_cale_ev_content_pane_t1

0xefd8,	// (0x0003e604) bg_button_pane_cp01

0xe411,	// (0x0003da3d) listscroll_cale_week_pane_ParamLimits

0x6ec2,	// (0x000364ee) popup_toolbar_window_cp01

0xe551,	// (0x0003db7d) listscroll_cale_week_pane_t1_ParamLimits

0xe411,	// (0x0003da3d) listscroll_cale_day_pane_ParamLimits

0x6ec2,	// (0x000364ee) popup_toolbar_window_cp02

0xe551,	// (0x0003db7d) listscroll_cale_day_pane_t1_ParamLimits

0xe411,	// (0x0003da3d) main_cale_month_pane_ParamLimits

0x970e,	// (0x00038d3a) popup_toolbar_window_cp03_ParamLimits

0x970e,	// (0x00038d3a) popup_toolbar_window_cp03

0x9067,	// (0x00038693) main_image_pane_g2_ParamLimits

0x9067,	// (0x00038693) main_image_pane_g2

0x9073,	// (0x0003869f) main_image_pane_g3_ParamLimits

0x9073,	// (0x0003869f) main_image_pane_g3

0x0002,

0xf54e,	// (0x0003eb7a) main_image_pane_g_ParamLimits

0xf54e,	// (0x0003eb7a) main_image_pane_g

0xf0f2,	// (0x0003e71e) main_image_pane_t1_ParamLimits

0x907f,	// (0x000386ab) main_image_pane_t2_ParamLimits

0x907f,	// (0x000386ab) main_image_pane_t2

0x9091,	// (0x000386bd) main_image_pane_t3_ParamLimits

0x9091,	// (0x000386bd) main_image_pane_t3

0x90a3,	// (0x000386cf) main_image_pane_t4_ParamLimits

0x90a3,	// (0x000386cf) main_image_pane_t4

0x0003,

0xf555,	// (0x0003eb81) main_image_pane_t_ParamLimits

0xf555,	// (0x0003eb81) main_image_pane_t

0x90b5,	// (0x000386e1) popup_image_details_window_cp01

0x90bf,	// (0x000386eb) popup_toobar_trans_pane_cp01_ParamLimits

0x90bf,	// (0x000386eb) popup_toobar_trans_pane_cp01

0x967f,	// (0x00038cab) popup_image_details_window_ParamLimits

0x967f,	// (0x00038cab) popup_image_details_window

0x15c9,	// (0x00030bf5) popup_image_focus_window

0x997f,	// (0x00038fab) camera2_autofocus_pane_ParamLimits

0x997f,	// (0x00038fab) camera2_autofocus_pane

0xdc6f,	// (0x0003d29b) bg_popup_sub_pane_cp06

0x1bd2,	// (0x000311fe) popup_image_focus_window_g1

0x1bda,	// (0x00031206) popup_image_focus_window_g2

0x1be2,	// (0x0003120e) popup_image_focus_window_g3

0x1bea,	// (0x00031216) popup_image_focus_window_g4

0x0003,

0xf764,	// (0x0003ed90) popup_image_focus_window_g

0x1bf2,	// (0x0003121e) popup_image_focus_window_t1

0x1c00,	// (0x0003122c) popup_image_focus_window_t2

0x1c10,	// (0x0003123c) popup_image_focus_window_t3

0x0002,

0xf76d,	// (0x0003ed99) popup_image_focus_window_t

0x1c1e,	// (0x0003124a) camera2_autofocus_pane_g1

0xf109,	// (0x0003e735) bg_tb_trans_pane_cp01

0x1c2c,	// (0x00031258) popup_image_details_window_g1

0x1c3f,	// (0x0003126b) popup_image_details_window_g2

0x0002,

0xf77f,	// (0x0003edab) popup_image_details_window_g

0x1c68,	// (0x00031294) popup_image_details_window_t1

0x1c7a,	// (0x000312a6) popup_image_details_window_t2

0x1c93,	// (0x000312bf) popup_image_details_window_t3

0x1ca7,	// (0x000312d3) popup_image_details_window_t4

0x1cc2,	// (0x000312ee) popup_image_details_window_t5

0x0004,

0xf786,	// (0x0003edb2) popup_image_details_window_t

0xe3fd,	// (0x0003da29) bg_calc_paper_pane_ParamLimits

0xdc6f,	// (0x0003d29b) grid_highlight_pane_cp013

0x6c7b,	// (0x000362a7) list_calc_pane_ParamLimits

0x6c8d,	// (0x000362b9) scroll_pane_cp024

0xe411,	// (0x0003da3d) bg_calc_display_pane_ParamLimits

0x6c95,	// (0x000362c1) calc_display_pane_t1_ParamLimits

0x6caa,	// (0x000362d6) calc_display_pane_t2_ParamLimits

0x6cbf,	// (0x000362eb) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x0003e7e2) calc_display_pane_t_ParamLimits

0x6d92,	// (0x000363be) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x0003e7ff) cell_calc_pane_g

0x6d9b,	// (0x000363c7) cell_calc_pane_t1

0xe470,	// (0x0003da9c) grid_highlight_pane_cp02_ParamLimits

0xe486,	// (0x0003dab2) toolbar_button_pane_cp01_ParamLimits

0xe486,	// (0x0003dab2) toolbar_button_pane_cp01

0x0466,	// (0x0002fa92) temp_image_control_pane_ParamLimits

0x0466,	// (0x0002fa92) temp_image_control_pane

0xf109,	// (0x0003e735) main_mp3_pane

0x1cdc,	// (0x00031308) temp_image_control_pane_g1_ParamLimits

0x1cdc,	// (0x00031308) temp_image_control_pane_g1

0x1cea,	// (0x00031316) temp_image_control_pane_g2_ParamLimits

0x1cea,	// (0x00031316) temp_image_control_pane_g2

0x1cfc,	// (0x00031328) temp_image_control_pane_g3_ParamLimits

0x1cfc,	// (0x00031328) temp_image_control_pane_g3

0xa01b,	// (0x00039647) temp_image_control_pane_g4_ParamLimits

0xa01b,	// (0x00039647) temp_image_control_pane_g4

0x0003,

0xf791,	// (0x0003edbd) temp_image_control_pane_g_ParamLimits

0xf791,	// (0x0003edbd) temp_image_control_pane_g

0x1cdc,	// (0x00031308) main_mp3_pane_g1

0xa02c,	// (0x00039658) main_mp3_pane_g2

0x0007,

0xf79a,	// (0x0003edc6) main_mp3_pane_g

0x1d3f,	// (0x0003136b) main_mp3_pane_t1

0xe5c8,	// (0x0003dbf4) main_camera_pane_g8_ParamLimits

0xe5c8,	// (0x0003dbf4) main_camera_pane_g8

0x75e9,	// (0x00036c15) main_video_pane_g7_ParamLimits

0x75e9,	// (0x00036c15) main_video_pane_g7

0x9ac2,	// (0x000390ee) main_camera2_pane_t7_ParamLimits

0x9ac2,	// (0x000390ee) main_camera2_pane_t7

0xe71a,	// (0x0003dd46) scroll_pane_cp025_ParamLimits

0xe71a,	// (0x0003dd46) scroll_pane_cp025

0xe72e,	// (0x0003dd5a) scroll_pane_cp026_ParamLimits

0xe72e,	// (0x0003dd5a) scroll_pane_cp026

0xe73d,	// (0x0003dd69) wml_content_pane_ParamLimits

0xdc6f,	// (0x0003d29b) main_touch_calib_pane

0xa0d0,	// (0x000396fc) main_touch_calib_pane_g1

0xa0dc,	// (0x00039708) main_touch_calib_pane_g2

0xa0e8,	// (0x00039714) main_touch_calib_pane_g3

0xa0f4,	// (0x00039720) main_touch_calib_pane_g4

0x0003,

0xf7b8,	// (0x0003ede4) main_touch_calib_pane_g

0xa100,	// (0x0003972c) main_touch_calib_pane_t1

0xa117,	// (0x00039743) main_touch_calib_pane_t2

0x0004,

0xf7c1,	// (0x0003eded) main_touch_calib_pane_t

0xedae,	// (0x0003e3da) mup_progress_pane_cp02

0xedcd,	// (0x0003e3f9) navi_pane_g1

0xee2f,	// (0x0003e45b) navi_pane_mp_t3

0xf109,	// (0x0003e735) main_mp3_pane_ParamLimits

0x9750,	// (0x00038d7c) navi_pane_ParamLimits

0x1cdc,	// (0x00031308) main_mp3_pane_g1_ParamLimits

0xa02c,	// (0x00039658) main_mp3_pane_g2_ParamLimits

0xa038,	// (0x00039664) main_mp3_pane_g3_ParamLimits

0xa038,	// (0x00039664) main_mp3_pane_g3

0xa044,	// (0x00039670) main_mp3_pane_g4_ParamLimits

0xa044,	// (0x00039670) main_mp3_pane_g4

0x1d0c,	// (0x00031338) main_mp3_pane_g5_ParamLimits

0x1d0c,	// (0x00031338) main_mp3_pane_g5

0x1d1a,	// (0x00031346) main_mp3_pane_g6_ParamLimits

0x1d1a,	// (0x00031346) main_mp3_pane_g6

0x1d27,	// (0x00031353) main_mp3_pane_g7_ParamLimits

0x1d27,	// (0x00031353) main_mp3_pane_g7

0x1d33,	// (0x0003135f) main_mp3_pane_g8_ParamLimits

0x1d33,	// (0x0003135f) main_mp3_pane_g8

0xf79a,	// (0x0003edc6) main_mp3_pane_g_ParamLimits

0xa050,	// (0x0003967c) main_mp3_pane_t2

0xa060,	// (0x0003968c) main_mp3_pane_t3

0x1d4d,	// (0x00031379) main_mp3_pane_t4

0x1d5b,	// (0x00031387) main_mp3_pane_t5

0x0005,

0xf7ab,	// (0x0003edd7) main_mp3_pane_t

0x1d69,	// (0x00031395) mup_progress_pane_cp01

0x5627,	// (0x00034c53) aid_zoom_text_secondary2

0x1b5f,	// (0x0003118b) list_cale_ev2_pane

0x1b67,	// (0x00031193) scroll_pane_cp023_ParamLimits

0xa16e,	// (0x0003979a) field_cale_ev2_pane_ParamLimits

0xa16e,	// (0x0003979a) field_cale_ev2_pane

0x592f,	// (0x00034f5b) field_cale_ev2_pane_g1_ParamLimits

0x592f,	// (0x00034f5b) field_cale_ev2_pane_g1

0x593b,	// (0x00034f67) field_cale_ev2_pane_g2_ParamLimits

0x593b,	// (0x00034f67) field_cale_ev2_pane_g2

0x5953,	// (0x00034f7f) field_cale_ev2_pane_g3_ParamLimits

0x5953,	// (0x00034f7f) field_cale_ev2_pane_g3

0x0003,

0xf7cc,	// (0x0003edf8) field_cale_ev2_pane_g_ParamLimits

0xf7cc,	// (0x0003edf8) field_cale_ev2_pane_g

0x5977,	// (0x00034fa3) field_cale_ev2_pane_t1_ParamLimits

0x5977,	// (0x00034fa3) field_cale_ev2_pane_t1

0x598e,	// (0x00034fba) field_cale_ev2_pane_t2_ParamLimits

0x598e,	// (0x00034fba) field_cale_ev2_pane_t2

0x0001,

0xf7d5,	// (0x0003ee01) field_cale_ev2_pane_t_ParamLimits

0xf7d5,	// (0x0003ee01) field_cale_ev2_pane_t

0x8f43,	// (0x0003856f) main_postcard_pane_g5_ParamLimits

0x8f43,	// (0x0003856f) main_postcard_pane_g5

0x8f51,	// (0x0003857d) main_postcard_pane_g6_ParamLimits

0x8f51,	// (0x0003857d) main_postcard_pane_g6

0x7427,	// (0x00036a53) camera2_autofocus_pane_cp_ParamLimits

0x7427,	// (0x00036a53) camera2_autofocus_pane_cp

0xf109,	// (0x0003e735) main_mup3_pane

0xa1ac,	// (0x000397d8) main_mup3_pane_g1_ParamLimits

0xa1ac,	// (0x000397d8) main_mup3_pane_g1

0xa1cd,	// (0x000397f9) main_mup3_pane_g2_ParamLimits

0xa1cd,	// (0x000397f9) main_mup3_pane_g2

0xa249,	// (0x00039875) main_mup3_pane_g3_ParamLimits

0xa249,	// (0x00039875) main_mup3_pane_g3

0xa28a,	// (0x000398b6) main_mup3_pane_g4_ParamLimits

0xa28a,	// (0x000398b6) main_mup3_pane_g4

0xa2cb,	// (0x000398f7) main_mup3_pane_g5_ParamLimits

0xa2cb,	// (0x000398f7) main_mup3_pane_g5

0xa30c,	// (0x00039938) main_mup3_pane_g6_ParamLimits

0xa30c,	// (0x00039938) main_mup3_pane_g6

0x1de5,	// (0x00031411) main_mup3_pane_g7_ParamLimits

0x1de5,	// (0x00031411) main_mup3_pane_g7

0x0007,

0xf7e5,	// (0x0003ee11) main_mup3_pane_g_ParamLimits

0xf7e5,	// (0x0003ee11) main_mup3_pane_g

0xa37e,	// (0x000399aa) main_mup3_pane_t1_ParamLimits

0xa37e,	// (0x000399aa) main_mup3_pane_t1

0xa3f1,	// (0x00039a1d) main_mup3_pane_t2_ParamLimits

0xa3f1,	// (0x00039a1d) main_mup3_pane_t2

0xa4be,	// (0x00039aea) main_mup3_pane_t4_ParamLimits

0xa4be,	// (0x00039aea) main_mup3_pane_t4

0xa512,	// (0x00039b3e) main_mup3_pane_t5_ParamLimits

0xa512,	// (0x00039b3e) main_mup3_pane_t5

0xa5be,	// (0x00039bea) main_mup3_pane_t6_ParamLimits

0xa5be,	// (0x00039bea) main_mup3_pane_t6

0x0005,

0xf7f6,	// (0x0003ee22) main_mup3_pane_t_ParamLimits

0xf7f6,	// (0x0003ee22) main_mup3_pane_t

0xa666,	// (0x00039c92) mup3_progress_pane_ParamLimits

0xa666,	// (0x00039c92) mup3_progress_pane

0xa6d1,	// (0x00039cfd) popup_mup3_control_window_ParamLimits

0xa6d1,	// (0x00039cfd) popup_mup3_control_window

0x1df3,	// (0x0003141f) popup_mup3_text_window

0xa6ee,	// (0x00039d1a) mup3_progress_pane_t1

0xa705,	// (0x00039d31) mup3_progress_pane_t2

0x1dfb,	// (0x00031427) mup3_progress_pane_t3

0x0002,

0xf803,	// (0x0003ee2f) mup3_progress_pane_t

0x1e12,	// (0x0003143e) mup_progress_pane_cp03

0xdc6f,	// (0x0003d29b) bg_tb_trans_pane_cp04

0xa71c,	// (0x00039d48) mup3_volume_pane

0xa724,	// (0x00039d50) popup_mup3_control_window_g1

0x2ff9,	// (0x00032625) mup3_volume_pane_g1

0x3002,	// (0x0003262e) mup3_volume_pane_g2

0x300b,	// (0x00032637) mup3_volume_pane_g3

0x0002,

0xf80a,	// (0x0003ee36) mup3_volume_pane_g

0xdc6f,	// (0x0003d29b) bg_tb_trans_pane_cp03

0x1e22,	// (0x0003144e) popup_mup3_text_window_g1

0x1e2a,	// (0x00031456) popup_mup3_text_window_t1

0xe459,	// (0x0003da85) list_calc_item_pane_g1_ParamLimits

0x17e5,	// (0x00030e11) mup_volume_pane_cp_g1

0xa12e,	// (0x0003975a) main_touch_calib_pane_t3

0xa142,	// (0x0003976e) main_touch_calib_pane_t4

0xa158,	// (0x00039784) main_touch_calib_pane_t5

0xdc79,	// (0x0003d2a5) aid_cell_size_toolbar2

0xdc81,	// (0x0003d2ad) aid_popup3_width_pane

0x561f,	// (0x00034c4b) aid_zoom_text_msg_primary

0x73fa,	// (0x00036a26) vorec_t7

0xe41d,	// (0x0003da49) bg_calc_paper_pane_g1_ParamLimits

0xe429,	// (0x0003da55) bg_calc_paper_pane_g2_ParamLimits

0xe435,	// (0x0003da61) bg_calc_paper_pane_g3_ParamLimits

0xe441,	// (0x0003da6d) bg_calc_paper_pane_g4_ParamLimits

0xe44d,	// (0x0003da79) bg_calc_paper_pane_g5_ParamLimits

0x6d00,	// (0x0003632c) bg_calc_paper_pane_g6_ParamLimits

0x6d11,	// (0x0003633d) bg_calc_paper_pane_g7_ParamLimits

0x6d22,	// (0x0003634e) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x0003e7e9) bg_calc_paper_pane_g_ParamLimits

0x6d33,	// (0x0003635f) calc_bg_paper_pane_g9_ParamLimits

0x7518,	// (0x00036b44) image_qvga_pane_ParamLimits

0x7518,	// (0x00036b44) image_qvga_pane

0xe346,	// (0x0003d972) bg_popup_sub_pane_cp04_ParamLimits

0xf06e,	// (0x0003e69a) popup_mup_playback_window_g1_ParamLimits

0xf07a,	// (0x0003e6a6) popup_mup_playback_window_t1_ParamLimits

0xf08f,	// (0x0003e6bb) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x0003eb75) popup_mup_playback_window_t_ParamLimits

0x9bf1,	// (0x0003921d) main_mup2_pane_g3_ParamLimits

0x9bf1,	// (0x0003921d) main_mup2_pane_g3

0x775d,	// (0x00036d89) popup_toolbar_window_cp04

0x07b9,	// (0x0002fde5) popup_call2_audio_second_window_g3_ParamLimits

0x07b9,	// (0x0002fde5) popup_call2_audio_second_window_g3

0x0bc3,	// (0x000301ef) popup_call2_audio_first_window_g4_ParamLimits

0x0bc3,	// (0x000301ef) popup_call2_audio_first_window_g4

0x1242,	// (0x0003086e) popup_call2_audio_in_window_g4_ParamLimits

0x1242,	// (0x0003086e) popup_call2_audio_in_window_g4

0x905a,	// (0x00038686) aid_area_sk_bg_cut_ParamLimits

0x905a,	// (0x00038686) aid_area_sk_bg_cut

0xf0a4,	// (0x0003e6d0) aid_area_sk_bg_cut_2_ParamLimits

0xf0a4,	// (0x0003e6d0) aid_area_sk_bg_cut_2

0x9f7f,	// (0x000395ab) aid_placing_details_win

0x9f87,	// (0x000395b3) aid_placing_details_win_2

0x1c1e,	// (0x0003124a) camera2_autofocus_pane_g1_ParamLimits

0x68de,	// (0x00035f0a) popup_fixed_preview_cale_window_ParamLimits

0x68de,	// (0x00035f0a) popup_fixed_preview_cale_window

0xee7e,	// (0x0003e4aa) navi_slider_pane_g3

0xee87,	// (0x0003e4b3) navi_slider_pane_g4

0xee90,	// (0x0003e4bc) navi_slider_pane_g5

0xee7e,	// (0x0003e4aa) navi_slider_pane_g6

0x895a,	// (0x00037f86) navi_slider_pane_g7

0xefa5,	// (0x0003e5d1) mup_scale_pane_g3

0xefae,	// (0x0003e5da) mup_scale_pane_g4

0xefb7,	// (0x0003e5e3) mup_scale_pane_g5

0x8dd5,	// (0x00038401) mup_scale_pane_g6

0x8dde,	// (0x0003840a) mup_scale_pane_g7

0xee7e,	// (0x0003e4aa) cams2_slider_pane_g3

0x189a,	// (0x00030ec6) cams2_slider_pane_g4

0x9ed7,	// (0x00039503) cams2_slider_pane_g5

0xee7e,	// (0x0003e4aa) cams2_slider_pane_g6

0x9edf,	// (0x0003950b) cams2_slider_pane_g7

0x1adc,	// (0x00031108) camera2_autofocus_pane_cp_g1

0x1e38,	// (0x00031464) bg_popup_preview_window_pane_cp02_ParamLimits

0x1e38,	// (0x00031464) bg_popup_preview_window_pane_cp02

0x1e44,	// (0x00031470) list_fp_cale_pane_ParamLimits

0x1e44,	// (0x00031470) list_fp_cale_pane

0x1e50,	// (0x0003147c) popup_fixed_preview_cale_window_t1_ParamLimits

0x1e50,	// (0x0003147c) popup_fixed_preview_cale_window_t1

0xa72d,	// (0x00039d59) popup_fixed_preview_cale_window_t2_ParamLimits

0xa72d,	// (0x00039d59) popup_fixed_preview_cale_window_t2

0xa742,	// (0x00039d6e) popup_fixed_preview_cale_window_t3_ParamLimits

0xa742,	// (0x00039d6e) popup_fixed_preview_cale_window_t3

0x0002,

0xf811,	// (0x0003ee3d) popup_fixed_preview_cale_window_t_ParamLimits

0xf811,	// (0x0003ee3d) popup_fixed_preview_cale_window_t

0xa757,	// (0x00039d83) list_single_fp_cale_pane_ParamLimits

0xa757,	// (0x00039d83) list_single_fp_cale_pane

0x1e6e,	// (0x0003149a) list_single_fp_cale_pane_g1_ParamLimits

0x1e6e,	// (0x0003149a) list_single_fp_cale_pane_g1

0x1e7a,	// (0x000314a6) list_single_fp_cale_pane_g2_ParamLimits

0x1e7a,	// (0x000314a6) list_single_fp_cale_pane_g2

0x0002,

0xf818,	// (0x0003ee44) list_single_fp_cale_pane_g_ParamLimits

0xf818,	// (0x0003ee44) list_single_fp_cale_pane_g

0x1e93,	// (0x000314bf) list_single_fp_cale_pane_t1_ParamLimits

0x1e93,	// (0x000314bf) list_single_fp_cale_pane_t1

0x1ea5,	// (0x000314d1) list_single_fp_cale_pane_t2_ParamLimits

0x1ea5,	// (0x000314d1) list_single_fp_cale_pane_t2

0x0001,

0xf81f,	// (0x0003ee4b) list_single_fp_cale_pane_t_ParamLimits

0xf81f,	// (0x0003ee4b) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xdc6f,	// (0x0003d29b) main_dialer_pane

0xa767,	// (0x00039d93) aid_cell_size_keypad

0xa771,	// (0x00039d9d) dialer_ne_pane

0xa77b,	// (0x00039da7) grid_dialer_command_1_pane

0xa783,	// (0x00039daf) grid_dialer_command_2_pane

0xa78b,	// (0x00039db7) grid_dialer_keypad_pane

0xa79f,	// (0x00039dcb) bg_popup_call_pane_cp06_ParamLimits

0xa79f,	// (0x00039dcb) bg_popup_call_pane_cp06

0xa7ab,	// (0x00039dd7) dialer_ne_clear_pane_ParamLimits

0xa7ab,	// (0x00039dd7) dialer_ne_clear_pane

0x1ed8,	// (0x00031504) dialer_ne_pane_g1

0x1ee0,	// (0x0003150c) dialer_ne_pane_t1_ParamLimits

0x1ee0,	// (0x0003150c) dialer_ne_pane_t1

0xa7b7,	// (0x00039de3) dialer_ne_pane_t2_ParamLimits

0xa7b7,	// (0x00039de3) dialer_ne_pane_t2

0xa7d4,	// (0x00039e00) dialer_ne_pane_t3_ParamLimits

0xa7d4,	// (0x00039e00) dialer_ne_pane_t3

0x0002,

0xf824,	// (0x0003ee50) dialer_ne_pane_t_ParamLimits

0xf824,	// (0x0003ee50) dialer_ne_pane_t

0xa7f8,	// (0x00039e24) dialer_ne_pane_t3_copy1_ParamLimits

0xa7f8,	// (0x00039e24) dialer_ne_pane_t3_copy1

0xa81c,	// (0x00039e48) cell_dialer_keypad_pane_ParamLimits

0xa81c,	// (0x00039e48) cell_dialer_keypad_pane

0xa833,	// (0x00039e5f) cell_dialer_command_1_pane_ParamLimits

0xa833,	// (0x00039e5f) cell_dialer_command_1_pane

0xa849,	// (0x00039e75) cell_dialer_command_2_pane_ParamLimits

0xa849,	// (0x00039e75) cell_dialer_command_2_pane

0x1ef2,	// (0x0003151e) bg_button_pane_cp02_ParamLimits

0x1ef2,	// (0x0003151e) bg_button_pane_cp02

0xa858,	// (0x00039e84) cell_dialer_keypad_pane_g1_ParamLimits

0xa858,	// (0x00039e84) cell_dialer_keypad_pane_g1

0x1ef2,	// (0x0003151e) bg_button_pane_cp03_ParamLimits

0x1ef2,	// (0x0003151e) bg_button_pane_cp03

0xa86c,	// (0x00039e98) cell_dialer_command_1_pane_g1_ParamLimits

0xa86c,	// (0x00039e98) cell_dialer_command_1_pane_g1

0x1efe,	// (0x0003152a) bg_button_pane_cp04

0xa880,	// (0x00039eac) cell_dialer_command_2_pane_g1

0xee6d,	// (0x0003e499) bg_button_pane_cp06

0x1f06,	// (0x00031532) dialer_ne_clear_pane_g1

0x889d,	// (0x00037ec9) navi_pane_g2

0x88cb,	// (0x00037ef7) navi_pane_g3

0x0002,

0xf44c,	// (0x0003ea78) navi_pane_g

0x88f6,	// (0x00037f22) navi_pane_mv_g2

0x891d,	// (0x00037f49) navi_pane_mv_g5

0x8925,	// (0x00037f51) navi_pane_mv_t1

0xe411,	// (0x0003da3d) main_clock2_pane

0xa8b2,	// (0x00039ede) main_clock2_list_pane_ParamLimits

0xa8b2,	// (0x00039ede) main_clock2_list_pane

0xa8dc,	// (0x00039f08) main_clock2_pane_t1_ParamLimits

0xa8dc,	// (0x00039f08) main_clock2_pane_t1

0xa90a,	// (0x00039f36) main_clock2_pane_t2_ParamLimits

0xa90a,	// (0x00039f36) main_clock2_pane_t2

0x0004,

0xf82b,	// (0x0003ee57) main_clock2_pane_t_ParamLimits

0xf82b,	// (0x0003ee57) main_clock2_pane_t

0xa973,	// (0x00039f9f) popup_clock_analogue_window_cp03_ParamLimits

0xa973,	// (0x00039f9f) popup_clock_analogue_window_cp03

0xa993,	// (0x00039fbf) popup_clock_digital_window_cp02_ParamLimits

0xa993,	// (0x00039fbf) popup_clock_digital_window_cp02

0xaa04,	// (0x0003a030) main_clock2_list_single_pane_ParamLimits

0xaa04,	// (0x0003a030) main_clock2_list_single_pane

0xee6d,	// (0x0003e499) list_highlight_pane_cp05

0x1f0e,	// (0x0003153a) main_clock2_list_single_pane_t1

0x775d,	// (0x00036d89) popup_toolbar_window_cp04_ParamLimits

0x9feb,	// (0x00039617) camera2_autofocus_pane_g2_ParamLimits

0x9feb,	// (0x00039617) camera2_autofocus_pane_g2

0x9ff7,	// (0x00039623) camera2_autofocus_pane_g3_ParamLimits

0x9ff7,	// (0x00039623) camera2_autofocus_pane_g3

0xa003,	// (0x0003962f) camera2_autofocus_pane_g4_ParamLimits

0xa003,	// (0x0003962f) camera2_autofocus_pane_g4

0xa00f,	// (0x0003963b) camera2_autofocus_pane_g5_ParamLimits

0xa00f,	// (0x0003963b) camera2_autofocus_pane_g5

0x0004,

0xf774,	// (0x0003eda0) camera2_autofocus_pane_g_ParamLimits

0xf774,	// (0x0003eda0) camera2_autofocus_pane_g

0xa18c,	// (0x000397b8) camera2_autofocus_pane_cp_g2

0xa194,	// (0x000397c0) camera2_autofocus_pane_cp_g3

0xa19c,	// (0x000397c8) camera2_autofocus_pane_cp_g4

0xa1a4,	// (0x000397d0) camera2_autofocus_pane_cp_g5

0x0004,

0xf7da,	// (0x0003ee06) camera2_autofocus_pane_cp_g

0xa797,	// (0x00039dc3) popup_dialer_spcha_window

0xdc6f,	// (0x0003d29b) bg_popup_sub_pane_cp07

0x1f1c,	// (0x00031548) list_spcha_pane

0x1f24,	// (0x00031550) list_single_spcha_pane_ParamLimits

0x1f24,	// (0x00031550) list_single_spcha_pane

0xdc6f,	// (0x0003d29b) list_highlight_pane_cp06

0x1f35,	// (0x00031561) list_single_spcha_pane_t1

0x0fec,	// (0x00030618) popup_call2_audio_out_window_g4_ParamLimits

0x0fec,	// (0x00030618) popup_call2_audio_out_window_g4

0xdc6f,	// (0x0003d29b) main_imed2_pane

0x15d3,	// (0x00030bff) popup_imed_adjust2_window

0x968d,	// (0x00038cb9) popup_imed_trans_window_ParamLimits

0x968d,	// (0x00038cb9) popup_imed_trans_window

0x1914,	// (0x00030f40) popup_blid_sat_info2_window_t1

0x1922,	// (0x00030f4e) popup_blid_sat_info2_window_t2

0x000a,

0xf709,	// (0x0003ed35) popup_blid_sat_info2_window_t

0xaaae,	// (0x0003a0da) aid_size_cell_colour_35

0xaac8,	// (0x0003a0f4) aid_size_cell_colour_112

0xaadf,	// (0x0003a10b) aid_size_cell_effect

0xf109,	// (0x0003e735) bg_tb_trans_pane_cp02

0x0369,	// (0x0002f995) heading_imed_pane

0xaaf9,	// (0x0003a125) listscroll_imed_pane

0x1f43,	// (0x0003156f) heading_imed_pane_g1

0x1f4b,	// (0x00031577) heading_imed_pane_t1

0x1f59,	// (0x00031585) grid_imed_colour_35_pane_ParamLimits

0x1f59,	// (0x00031585) grid_imed_colour_35_pane

0xab05,	// (0x0003a131) grid_imed_effect_pane

0x1f75,	// (0x000315a1) list_imed_aspect_pane

0xab15,	// (0x0003a141) scroll_pane_cp027_ParamLimits

0xab15,	// (0x0003a141) scroll_pane_cp027

0xab21,	// (0x0003a14d) cell_imed_effect_pane_ParamLimits

0xab21,	// (0x0003a14d) cell_imed_effect_pane

0x1f7d,	// (0x000315a9) cell_imed_colour_pane_ParamLimits

0x1f7d,	// (0x000315a9) cell_imed_colour_pane

0x1fc7,	// (0x000315f3) cell_imed_colour_pane_g1_ParamLimits

0x1fc7,	// (0x000315f3) cell_imed_colour_pane_g1

0x1fd8,	// (0x00031604) hgihlgiht_grid_pane_cp016_ParamLimits

0x1fd8,	// (0x00031604) hgihlgiht_grid_pane_cp016

0xab3d,	// (0x0003a169) cell_imed_effect_pane_g1

0xab45,	// (0x0003a171) grid_highlight_pane_cp017

0x1fe9,	// (0x00031615) list_imed_single_pane_ParamLimits

0x1fe9,	// (0x00031615) list_imed_single_pane

0xdc6f,	// (0x0003d29b) list_highlight_pane_cp07

0x1ffd,	// (0x00031629) list_imed_aspect_pane_comp1_t1

0x15a7,	// (0x00030bd3) bg_tb_trans_pane_cp05

0x201f,	// (0x0003164b) popup_imed_adjust2_window_g1

0x2046,	// (0x00031672) popup_imed_adjust2_window_t1

0x205e,	// (0x0003168a) slider_imed_adjust_pane

0x2072,	// (0x0003169e) slider_imed_adjust_pane_g1

0x2082,	// (0x000316ae) slider_imed_adjust_pane_g2

0x2092,	// (0x000316be) slider_imed_adjust_pane_g3

0x20a3,	// (0x000316cf) slider_imed_adjust_pane_g4

0x0003,

0xf848,	// (0x0003ee74) slider_imed_adjust_pane_g

0xab4e,	// (0x0003a17a) aid_size_cell_clipart2

0xab5a,	// (0x0003a186) grid_imed_clipart_pane

0x20b4,	// (0x000316e0) scroll_pane_cp031

0xab64,	// (0x0003a190) cell_imed_clipart_pane_ParamLimits

0xab64,	// (0x0003a190) cell_imed_clipart_pane

0xab82,	// (0x0003a1ae) cell_imed_clipart_pane_g1

0xdc6f,	// (0x0003d29b) grid_highlight_pane_cp014

0xa8be,	// (0x00039eea) main_clock2_pane_g1_ParamLimits

0xa8be,	// (0x00039eea) main_clock2_pane_g1

0xa9af,	// (0x00039fdb) aid_call2_pane_cp10

0xa9c1,	// (0x00039fed) aid_call_pane_cp10

0xeda2,	// (0x0003e3ce) popup_clock_analogue_window_cp10_g1

0xeda2,	// (0x0003e3ce) popup_clock_analogue_window_cp10_g2

0xa9d3,	// (0x00039fff) popup_clock_analogue_window_cp10_g3

0xa9d3,	// (0x00039fff) popup_clock_analogue_window_cp10_g4

0xeda2,	// (0x0003e3ce) popup_clock_analogue_window_cp10_g5

0x0004,

0xf836,	// (0x0003ee62) popup_clock_analogue_window_cp10_g

0xa9e5,	// (0x0003a011) popup_clock_analogue_window_cp10_t1

0xaa16,	// (0x0003a042) clock_digital_number_pane_cp10_ParamLimits

0xaa16,	// (0x0003a042) clock_digital_number_pane_cp10

0xaa2e,	// (0x0003a05a) clock_digital_number_pane_cp11_ParamLimits

0xaa2e,	// (0x0003a05a) clock_digital_number_pane_cp11

0xaa46,	// (0x0003a072) clock_digital_number_pane_cp12_ParamLimits

0xaa46,	// (0x0003a072) clock_digital_number_pane_cp12

0xaa5e,	// (0x0003a08a) clock_digital_number_pane_cp13_ParamLimits

0xaa5e,	// (0x0003a08a) clock_digital_number_pane_cp13

0xaa76,	// (0x0003a0a2) clock_digital_separator_pane_cp10_ParamLimits

0xaa76,	// (0x0003a0a2) clock_digital_separator_pane_cp10

0xaa8e,	// (0x0003a0ba) popup_clock_digital_window_cp02_t1_ParamLimits

0xaa8e,	// (0x0003a0ba) popup_clock_digital_window_cp02_t1

0xe33e,	// (0x0003d96a) clock_digital_number_pane_cp10_g1

0xe33e,	// (0x0003d96a) clock_digital_number_pane_cp10_g2

0x0001,

0xf851,	// (0x0003ee7d) clock_digital_number_pane_cp10_g

0xe33e,	// (0x0003d96a) clock_digital_separator_pane_cp10_g1

0xe33e,	// (0x0003d96a) clock_digital_separator_pane_g2_cp10

0xee3d,	// (0x0003e469) navi_pane_vded_g4

0xee46,	// (0x0003e472) navi_pane_vded_g5

0xee4f,	// (0x0003e47b) navi_pane_vded_t1

0xdc6f,	// (0x0003d29b) main_vded_pane

0xab8b,	// (0x0003a1b7) main_vded_pane_g1

0xab97,	// (0x0003a1c3) main_vded_pane_g2

0xaba1,	// (0x0003a1cd) main_vded_pane_g3

0x0002,

0xf856,	// (0x0003ee82) main_vded_pane_g

0xabab,	// (0x0003a1d7) main_vded_pane_t1

0xabb9,	// (0x0003a1e5) main_vded_pane_t2

0x0001,

0xf85d,	// (0x0003ee89) main_vded_pane_t

0xabc7,	// (0x0003a1f3) vded_slider_pane

0xabd1,	// (0x0003a1fd) vded_video_pane

0x20bc,	// (0x000316e8) vded_video_pane_g1

0xabdd,	// (0x0003a209) vded_video_pane_g2

0x1adc,	// (0x00031108) vded_video_pane_g3

0x0002,

0xf862,	// (0x0003ee8e) vded_video_pane_g

0x20c6,	// (0x000316f2) vded_slider_pane_g1

0x17e5,	// (0x00030e11) vded_slider_pane_g2

0x20cf,	// (0x000316fb) vded_slider_pane_g3

0x20d8,	// (0x00031704) vded_slider_pane_g4

0x20e1,	// (0x0003170d) vded_slider_pane_g5

0x0004,

0xf869,	// (0x0003ee95) vded_slider_pane_g

0xa6c5,	// (0x00039cf1) mup3_rocker_pane_ParamLimits

0xa6c5,	// (0x00039cf1) mup3_rocker_pane

0xabe6,	// (0x0003a212) mup3_control_keys_pane_g1

0xabee,	// (0x0003a21a) mup3_control_keys_pane_g2

0xabf6,	// (0x0003a222) mup3_control_keys_pane_g3

0xabfe,	// (0x0003a22a) mup3_control_keys_pane_g4

0x0003,

0xf874,	// (0x0003eea0) mup3_control_keys_pane_g

0x68fc,	// (0x00035f28) popup_toolbar2_fixed_window_cp01_ParamLimits

0x68fc,	// (0x00035f28) popup_toolbar2_fixed_window_cp01

0xa6e1,	// (0x00039d0d) popup_toolbar2_fixed_window_cp02_ParamLimits

0xa6e1,	// (0x00039d0d) popup_toolbar2_fixed_window_cp02

0x092b,	// (0x0002ff57) popup_call2_audio_second_window_t4_ParamLimits

0x092b,	// (0x0002ff57) popup_call2_audio_second_window_t4

0x0e59,	// (0x00030485) popup_call2_audio_first_window_t6_ParamLimits

0x0e59,	// (0x00030485) popup_call2_audio_first_window_t6

0x10ef,	// (0x0003071b) popup_call2_audio_out_window_t6_ParamLimits

0x10ef,	// (0x0003071b) popup_call2_audio_out_window_t6

0xdc6f,	// (0x0003d29b) main_vitu_pane

0xac0e,	// (0x0003a23a) aid_size_cell_itu_ParamLimits

0xac0e,	// (0x0003a23a) aid_size_cell_itu

0x6924,	// (0x00035f50) bg_popup_window_pane_cp08_ParamLimits

0x6924,	// (0x00035f50) bg_popup_window_pane_cp08

0xac1c,	// (0x0003a248) field_vitu_entry_pane_ParamLimits

0xac1c,	// (0x0003a248) field_vitu_entry_pane

0xac2b,	// (0x0003a257) grid_vitu_function_pane_ParamLimits

0xac2b,	// (0x0003a257) grid_vitu_function_pane

0xac3b,	// (0x0003a267) grid_vitu_itu_pane_ParamLimits

0xac3b,	// (0x0003a267) grid_vitu_itu_pane

0xac4b,	// (0x0003a277) cell_vitu_itu_pane_ParamLimits

0xac4b,	// (0x0003a277) cell_vitu_itu_pane

0xac62,	// (0x0003a28e) cell_vitu_function_pane_ParamLimits

0xac62,	// (0x0003a28e) cell_vitu_function_pane

0xf109,	// (0x0003e735) bg_popup_sub_pane_cp08_ParamLimits

0xf109,	// (0x0003e735) bg_popup_sub_pane_cp08

0xac76,	// (0x0003a2a2) field_vitu_entry_pane_t1_ParamLimits

0xac76,	// (0x0003a2a2) field_vitu_entry_pane_t1

0x2102,	// (0x0003172e) field_vitu_entry_pane_t2_ParamLimits

0x2102,	// (0x0003172e) field_vitu_entry_pane_t2

0x0001,

0xf882,	// (0x0003eeae) field_vitu_entry_pane_t_ParamLimits

0xf882,	// (0x0003eeae) field_vitu_entry_pane_t

0x211f,	// (0x0003174b) bg_button_pane_cp05_ParamLimits

0x211f,	// (0x0003174b) bg_button_pane_cp05

0xac90,	// (0x0003a2bc) cell_vitu_itu_pane_g1

0xaca8,	// (0x0003a2d4) cell_vitu_itu_pane_t1_ParamLimits

0xaca8,	// (0x0003a2d4) cell_vitu_itu_pane_t1

0xacba,	// (0x0003a2e6) cell_vitu_itu_pane_t2_ParamLimits

0xacba,	// (0x0003a2e6) cell_vitu_itu_pane_t2

0x0002,

0xf887,	// (0x0003eeb3) cell_vitu_itu_pane_t_ParamLimits

0xf887,	// (0x0003eeb3) cell_vitu_itu_pane_t

0x212d,	// (0x00031759) bg_button_pane_cp07

0xacef,	// (0x0003a31b) cell_vitu_function_pane_g1

0x6ba6,	// (0x000361d2) main_calc_pane_g1

0x66fc,	// (0x00035d28) aid_visual_content_pane

0xdc6f,	// (0x0003d29b) main_vradio_pane

0xacf8,	// (0x0003a324) main_vradio_pane_g1_ParamLimits

0xacf8,	// (0x0003a324) main_vradio_pane_g1

0x2137,	// (0x00031763) main_vradio_pane_g2_ParamLimits

0x2137,	// (0x00031763) main_vradio_pane_g2

0x0001,

0xf88e,	// (0x0003eeba) main_vradio_pane_g_ParamLimits

0xf88e,	// (0x0003eeba) main_vradio_pane_g

0xad06,	// (0x0003a332) main_vradio_pane_t1_ParamLimits

0xad06,	// (0x0003a332) main_vradio_pane_t1

0xad18,	// (0x0003a344) main_vradio_pane_t2_ParamLimits

0xad18,	// (0x0003a344) main_vradio_pane_t2

0x2144,	// (0x00031770) main_vradio_pane_t3_ParamLimits

0x2144,	// (0x00031770) main_vradio_pane_t3

0x0002,

0xf893,	// (0x0003eebf) main_vradio_pane_t_ParamLimits

0xf893,	// (0x0003eebf) main_vradio_pane_t

0xad2a,	// (0x0003a356) vradio_rocker_control_pane_ParamLimits

0xad2a,	// (0x0003a356) vradio_rocker_control_pane

0xad36,	// (0x0003a362) vradio_station_info_pane_ParamLimits

0xad36,	// (0x0003a362) vradio_station_info_pane

0x2158,	// (0x00031784) vradio_frequency_info_pane_ParamLimits

0x2158,	// (0x00031784) vradio_frequency_info_pane

0x1adc,	// (0x00031108) vradio_station_info_pane_g1

0x2167,	// (0x00031793) vradio_station_info_pane_t1_ParamLimits

0x2167,	// (0x00031793) vradio_station_info_pane_t1

0x2189,	// (0x000317b5) vradio_station_info_pane_t2_ParamLimits

0x2189,	// (0x000317b5) vradio_station_info_pane_t2

0x0001,

0xf89a,	// (0x0003eec6) vradio_station_info_pane_t_ParamLimits

0xf89a,	// (0x0003eec6) vradio_station_info_pane_t

0x219b,	// (0x000317c7) vradio_tuning_pane

0x21a3,	// (0x000317cf) vradio_rocker_control_pane_g1

0x21ab,	// (0x000317d7) vradio_rocker_control_pane_g2

0x21b3,	// (0x000317df) vradio_rocker_control_pane_g3

0x21bb,	// (0x000317e7) vradio_rocker_control_pane_g4

0x21c3,	// (0x000317ef) vradio_rocker_control_pane_g5

0x0004,

0xf89f,	// (0x0003eecb) vradio_rocker_control_pane_g

0xad43,	// (0x0003a36f) vradio_frequency_info_pane_g1

0x21cb,	// (0x000317f7) vradio_frequency_info_pane_t1_ParamLimits

0x21cb,	// (0x000317f7) vradio_frequency_info_pane_t1

0xad4d,	// (0x0003a379) vradio_tuning_pane_g1

0xad58,	// (0x0003a384) vradio_tuning_pane_t1

0xdc95,	// (0x0003d2c1) area_side_right_pane_ParamLimits

0xdc95,	// (0x0003d2c1) area_side_right_pane

0x156e,	// (0x00030b9a) status_small_pane_g1

0x1576,	// (0x00030ba2) status_small_pane_g2

0x157f,	// (0x00030bab) status_small_pane_g3

0x1588,	// (0x00030bb4) status_small_pane_g4

0x0003,

0xf65f,	// (0x0003ec8b) status_small_pane_g

0x1591,	// (0x00030bbd) status_small_pane_t1

0xdc6f,	// (0x0003d29b) main_video3_pane

0x21df,	// (0x0003180b) cams_zoom_vslider_pane

0x21e7,	// (0x00031813) image3_wide_pane_ParamLimits

0x21e7,	// (0x00031813) image3_wide_pane

0x2201,	// (0x0003182d) image3_wide_small_pane

0x220d,	// (0x00031839) main_video3_pane_g1_ParamLimits

0x220d,	// (0x00031839) main_video3_pane_g1

0x2229,	// (0x00031855) main_video3_pane_g2_ParamLimits

0x2229,	// (0x00031855) main_video3_pane_g2

0x0001,

0xf8aa,	// (0x0003eed6) main_video3_pane_g_ParamLimits

0xf8aa,	// (0x0003eed6) main_video3_pane_g

0x2245,	// (0x00031871) main_video3_pane_t1_ParamLimits

0x2245,	// (0x00031871) main_video3_pane_t1

0x2270,	// (0x0003189c) main_video3_pane_t2_ParamLimits

0x2270,	// (0x0003189c) main_video3_pane_t2

0x229d,	// (0x000318c9) main_video3_pane_t3_ParamLimits

0x229d,	// (0x000318c9) main_video3_pane_t3

0x0002,

0xf8af,	// (0x0003eedb) main_video3_pane_t_ParamLimits

0xf8af,	// (0x0003eedb) main_video3_pane_t

0x22ca,	// (0x000318f6) cams_zoom_vslider_pane_g1

0x22d3,	// (0x000318ff) cams_zoom_vslider_pane_g2

0x0001,

0xf8b6,	// (0x0003eee2) cams_zoom_vslider_pane_g

0x22db,	// (0x00031907) small_slider_vertical_pane

0x1adc,	// (0x00031108) small_slider_vertical_pane_g1

0x1adc,	// (0x00031108) small_slider_vertical_pane_g2

0x22e3,	// (0x0003190f) small_slider_vertical_pane_g3

0x0002,

0xf8bb,	// (0x0003eee7) small_slider_vertical_pane_g

0xdc6f,	// (0x0003d29b) main_hwr_training_pane

0x22ec,	// (0x00031918) hwr_training_instruct_pane_ParamLimits

0x22ec,	// (0x00031918) hwr_training_instruct_pane

0xad67,	// (0x0003a393) hwr_training_navi_pane_ParamLimits

0xad67,	// (0x0003a393) hwr_training_navi_pane

0xad81,	// (0x0003a3ad) hwr_training_write_pane_ParamLimits

0xad81,	// (0x0003a3ad) hwr_training_write_pane

0xdc6f,	// (0x0003d29b) bg_frame_shadow_pane

0x2323,	// (0x0003194f) hwr_training_write_pane_g1

0x232b,	// (0x00031957) hwr_training_write_pane_g2

0x2333,	// (0x0003195f) hwr_training_write_pane_g3

0x233b,	// (0x00031967) hwr_training_write_pane_g4

0x2343,	// (0x0003196f) hwr_training_write_pane_g5

0x234b,	// (0x00031977) hwr_training_write_pane_g6

0x2353,	// (0x0003197f) hwr_training_write_pane_g7

0x0006,

0xf8c2,	// (0x0003eeee) hwr_training_write_pane_g

0xadb9,	// (0x0003a3e5) hwr_training_navi_pane_g1_ParamLimits

0xadb9,	// (0x0003a3e5) hwr_training_navi_pane_g1

0xadcb,	// (0x0003a3f7) hwr_training_navi_pane_g2_ParamLimits

0xadcb,	// (0x0003a3f7) hwr_training_navi_pane_g2

0xaddd,	// (0x0003a409) hwr_training_navi_pane_g3_ParamLimits

0xaddd,	// (0x0003a409) hwr_training_navi_pane_g3

0xaded,	// (0x0003a419) hwr_training_navi_pane_g4_ParamLimits

0xaded,	// (0x0003a419) hwr_training_navi_pane_g4

0x0004,

0xf8d1,	// (0x0003eefd) hwr_training_navi_pane_g_ParamLimits

0xf8d1,	// (0x0003eefd) hwr_training_navi_pane_g

0xae07,	// (0x0003a433) hwr_training_navi_pane_t1

0xae15,	// (0x0003a441) list_single_hwr_training_instruct_pane_ParamLimits

0xae15,	// (0x0003a441) list_single_hwr_training_instruct_pane

0x23aa,	// (0x000319d6) list_single_hwr_training_instruct_pane_t1

0x1a1c,	// (0x00031048) bg_frame_shadow_pane_g1

0x23b9,	// (0x000319e5) bg_frame_shadow_pane_g2

0x23c1,	// (0x000319ed) bg_frame_shadow_pane_g3

0x23c9,	// (0x000319f5) bg_frame_shadow_pane_g4

0x23d1,	// (0x000319fd) bg_frame_shadow_pane_g5

0x23d9,	// (0x00031a05) bg_frame_shadow_pane_g6

0x23e1,	// (0x00031a0d) bg_frame_shadow_pane_g7

0xe4dc,	// (0x0003db08) bg_frame_shadow_pane_g8

0x0007,

0xf8dc,	// (0x0003ef08) bg_frame_shadow_pane_g

0xdc6f,	// (0x0003d29b) main_video_tele_dialer_pane

0xae34,	// (0x0003a460) aid_size_cell_video_keypad_ParamLimits

0xae34,	// (0x0003a460) aid_size_cell_video_keypad

0xae44,	// (0x0003a470) grid_video_dialer_keypad_pane_ParamLimits

0xae44,	// (0x0003a470) grid_video_dialer_keypad_pane

0xae78,	// (0x0003a4a4) video_down_pane_cp_ParamLimits

0xae78,	// (0x0003a4a4) video_down_pane_cp

0xaea2,	// (0x0003a4ce) cell_video_dialer_keypad_pane_ParamLimits

0xaea2,	// (0x0003a4ce) cell_video_dialer_keypad_pane

0x23e9,	// (0x00031a15) bg_button_pane_cp08_ParamLimits

0x23e9,	// (0x00031a15) bg_button_pane_cp08

0xaeb9,	// (0x0003a4e5) cell_video_dialer_keypad_pane_g1_ParamLimits

0xaeb9,	// (0x0003a4e5) cell_video_dialer_keypad_pane_g1

0xa6b9,	// (0x00039ce5) mup3_rocker2_pane_ParamLimits

0xa6b9,	// (0x00039ce5) mup3_rocker2_pane

0x1adc,	// (0x00031108) mup3_rocker2_pane_g1

0x960f,	// (0x00038c3b) main_dialer2_pane

0xdc6f,	// (0x0003d29b) main_mp4_pane

0xaefc,	// (0x0003a528) main_mp4_pane_g1_ParamLimits

0xaefc,	// (0x0003a528) main_mp4_pane_g1

0xaf0a,	// (0x0003a536) main_mp4_pane_g2_ParamLimits

0xaf0a,	// (0x0003a536) main_mp4_pane_g2

0xaf18,	// (0x0003a544) main_mp4_pane_g3_ParamLimits

0xaf18,	// (0x0003a544) main_mp4_pane_g3

0xaf6b,	// (0x0003a597) main_mp4_pane_g4_ParamLimits

0xaf6b,	// (0x0003a597) main_mp4_pane_g4

0xaf85,	// (0x0003a5b1) main_mp4_pane_g5_ParamLimits

0xaf85,	// (0x0003a5b1) main_mp4_pane_g5

0x0005,

0xf8fc,	// (0x0003ef28) main_mp4_pane_g_ParamLimits

0xf8fc,	// (0x0003ef28) main_mp4_pane_g

0xafb9,	// (0x0003a5e5) main_mp4_pane_t1_ParamLimits

0xafb9,	// (0x0003a5e5) main_mp4_pane_t1

0xb015,	// (0x0003a641) main_mp4_pane_t2_ParamLimits

0xb015,	// (0x0003a641) main_mp4_pane_t2

0x2507,	// (0x00031b33) main_mp4_pane_t3_ParamLimits

0x2507,	// (0x00031b33) main_mp4_pane_t3

0xb067,	// (0x0003a693) main_mp4_pane_t4_ParamLimits

0xb067,	// (0x0003a693) main_mp4_pane_t4

0x0003,

0xf909,	// (0x0003ef35) main_mp4_pane_t_ParamLimits

0xf909,	// (0x0003ef35) main_mp4_pane_t

0xb0a7,	// (0x0003a6d3) mp4_progress_pane_ParamLimits

0xb0a7,	// (0x0003a6d3) mp4_progress_pane

0xb0f1,	// (0x0003a71d) mp4_rocker_pane_ParamLimits

0xb0f1,	// (0x0003a71d) mp4_rocker_pane

0x25db,	// (0x00031c07) mp4_progress_pane_t1

0x25f4,	// (0x00031c20) mp4_progress_pane_t2

0x0001,

0xf912,	// (0x0003ef3e) mp4_progress_pane_t

0x260d,	// (0x00031c39) mup_progress_pane_cp04

0x1adc,	// (0x00031108) mp4_rocker_pane_g1

0xb113,	// (0x0003a73f) aid_cell_size_keypad2_ParamLimits

0xb113,	// (0x0003a73f) aid_cell_size_keypad2

0xb123,	// (0x0003a74f) dialer2_ne_pane_ParamLimits

0xb123,	// (0x0003a74f) dialer2_ne_pane

0xb12f,	// (0x0003a75b) grid_dialer2_keypad_pane_ParamLimits

0xb12f,	// (0x0003a75b) grid_dialer2_keypad_pane

0x30cf,	// (0x000326fb) bg_popup_call_pane_cp07_ParamLimits

0x30cf,	// (0x000326fb) bg_popup_call_pane_cp07

0xb13d,	// (0x0003a769) dialer2_ne_pane_t1_ParamLimits

0xb13d,	// (0x0003a769) dialer2_ne_pane_t1

0xb162,	// (0x0003a78e) cell_dialer2_keypad_pane_ParamLimits

0xb162,	// (0x0003a78e) cell_dialer2_keypad_pane

0x2635,	// (0x00031c61) bg_button_pane_pane_cp04_ParamLimits

0x2635,	// (0x00031c61) bg_button_pane_pane_cp04

0xb179,	// (0x0003a7a5) cell_dialer2_keypad_pane_g1_ParamLimits

0xb179,	// (0x0003a7a5) cell_dialer2_keypad_pane_g1

0x7698,	// (0x00036cc4) aid_placing_vt_set_content_ParamLimits

0x7698,	// (0x00036cc4) aid_placing_vt_set_content

0x76b2,	// (0x00036cde) aid_placing_vt_set_title_ParamLimits

0x76b2,	// (0x00036cde) aid_placing_vt_set_title

0xdc6f,	// (0x0003d29b) main_image3_pane

0xb213,	// (0x0003a83f) area_side_right_pane_cp01_ParamLimits

0xb213,	// (0x0003a83f) area_side_right_pane_cp01

0x369d,	// (0x00032cc9) main_image3_pane_g1_ParamLimits

0x369d,	// (0x00032cc9) main_image3_pane_g1

0xb242,	// (0x0003a86e) main_image3_pane_g2_ParamLimits

0xb242,	// (0x0003a86e) main_image3_pane_g2

0xb25b,	// (0x0003a887) main_image3_pane_g3_ParamLimits

0xb25b,	// (0x0003a887) main_image3_pane_g3

0xb274,	// (0x0003a8a0) main_image3_pane_g4_ParamLimits

0xb274,	// (0x0003a8a0) main_image3_pane_g4

0x0003,

0xf921,	// (0x0003ef4d) main_image3_pane_g_ParamLimits

0xf921,	// (0x0003ef4d) main_image3_pane_g

0xb28d,	// (0x0003a8b9) main_image3_pane_t1_ParamLimits

0xb28d,	// (0x0003a8b9) main_image3_pane_t1

0xb2b2,	// (0x0003a8de) main_image3_pane_t2_ParamLimits

0xb2b2,	// (0x0003a8de) main_image3_pane_t2

0xb2d1,	// (0x0003a8fd) main_image3_pane_t3_ParamLimits

0xb2d1,	// (0x0003a8fd) main_image3_pane_t3

0x0003,

0xf92a,	// (0x0003ef56) main_image3_pane_t_ParamLimits

0xf92a,	// (0x0003ef56) main_image3_pane_t

0x6924,	// (0x00035f50) grid_sctrl_middle_pane_cp01_ParamLimits

0x6924,	// (0x00035f50) grid_sctrl_middle_pane_cp01

0xb332,	// (0x0003a95e) cell_sctrl_middle_pane_cp01_ParamLimits

0xb332,	// (0x0003a95e) cell_sctrl_middle_pane_cp01

0xb343,	// (0x0003a96f) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xb343,	// (0x0003a96f) cell_sctrl_middle_pane_cp01_g1

0xdc6f,	// (0x0003d29b) main_call4_pane

0xb350,	// (0x0003a97c) aid_size_button_call4_ParamLimits

0xb350,	// (0x0003a97c) aid_size_button_call4

0xb382,	// (0x0003a9ae) call4_windows_pane_ParamLimits

0xb382,	// (0x0003a9ae) call4_windows_pane

0xb39e,	// (0x0003a9ca) grid_call4_button_pane_ParamLimits

0xb39e,	// (0x0003a9ca) grid_call4_button_pane

0x2675,	// (0x00031ca1) call4_windows_conf_pane

0x2690,	// (0x00031cbc) popup_call4_audio_first_window_ParamLimits

0x2690,	// (0x00031cbc) popup_call4_audio_first_window

0x26de,	// (0x00031d0a) popup_call4_audio_second_window_ParamLimits

0x26de,	// (0x00031d0a) popup_call4_audio_second_window

0x26f4,	// (0x00031d20) popup_call4_audio_wait_window_ParamLimits

0x26f4,	// (0x00031d20) popup_call4_audio_wait_window

0xb3c2,	// (0x0003a9ee) cell_call4_button_pane_ParamLimits

0xb3c2,	// (0x0003a9ee) cell_call4_button_pane

0xb3e5,	// (0x0003aa11) bg_button_pane_cp09_ParamLimits

0xb3e5,	// (0x0003aa11) bg_button_pane_cp09

0xb3f1,	// (0x0003aa1d) cell_call4_button_pane_g1_ParamLimits

0xb3f1,	// (0x0003aa1d) cell_call4_button_pane_g1

0xb3fe,	// (0x0003aa2a) cell_call4_button_pane_t1_ParamLimits

0xb3fe,	// (0x0003aa2a) cell_call4_button_pane_t1

0x273c,	// (0x00031d68) popup_call4_audio_conf_window_ParamLimits

0x273c,	// (0x00031d68) popup_call4_audio_conf_window

0xa6ee,	// (0x00039d1a) mup3_progress_pane_t1_ParamLimits

0xa705,	// (0x00039d31) mup3_progress_pane_t2_ParamLimits

0x1dfb,	// (0x00031427) mup3_progress_pane_t3_ParamLimits

0xf803,	// (0x0003ee2f) mup3_progress_pane_t_ParamLimits

0x1e12,	// (0x0003143e) mup_progress_pane_cp03_ParamLimits

0xac06,	// (0x0003a232) mup3_control_keys_pane_g4_copy1

0xb0d5,	// (0x0003a701) mp4_rocker2_pane_ParamLimits

0xb0d5,	// (0x0003a701) mp4_rocker2_pane

0x275e,	// (0x00031d8a) mp4_rocker2_pane_g1

0x2756,	// (0x00031d82) mp4_rocker2_pane_g2

0xb410,	// (0x0003aa3c) mp4_rocker2_pane_g3

0xb418,	// (0x0003aa44) mp4_rocker2_pane_g4

0xb420,	// (0x0003aa4c) mp4_rocker2_pane_g5

0x0004,

0xf933,	// (0x0003ef5f) mp4_rocker2_pane_g

0xdc6f,	// (0x0003d29b) main_camera4_pane

0xdc6f,	// (0x0003d29b) main_video4_pane

0xae54,	// (0x0003a480) main_video_tele_dialer_pane_t1_ParamLimits

0xae54,	// (0x0003a480) main_video_tele_dialer_pane_t1

0xae66,	// (0x0003a492) main_video_tele_dialer_pane_t2_ParamLimits

0xae66,	// (0x0003a492) main_video_tele_dialer_pane_t2

0x0001,

0xf8ed,	// (0x0003ef19) main_video_tele_dialer_pane_t_ParamLimits

0xf8ed,	// (0x0003ef19) main_video_tele_dialer_pane_t

0xb440,	// (0x0003aa6c) cam4_autofocus_pane_ParamLimits

0xb440,	// (0x0003aa6c) cam4_autofocus_pane

0xb44c,	// (0x0003aa78) cam4_image_uncrop_pane_ParamLimits

0xb44c,	// (0x0003aa78) cam4_image_uncrop_pane

0xb465,	// (0x0003aa91) cam4_indicators_pane_ParamLimits

0xb465,	// (0x0003aa91) cam4_indicators_pane

0xb481,	// (0x0003aaad) main_camera4_pane_g1_ParamLimits

0xb481,	// (0x0003aaad) main_camera4_pane_g1

0xb48d,	// (0x0003aab9) main_camera4_pane_g2_ParamLimits

0xb48d,	// (0x0003aab9) main_camera4_pane_g2

0xb499,	// (0x0003aac5) main_camera4_pane_g3_ParamLimits

0xb499,	// (0x0003aac5) main_camera4_pane_g3

0xb4a5,	// (0x0003aad1) main_camera4_pane_g4_ParamLimits

0xb4a5,	// (0x0003aad1) main_camera4_pane_g4

0xb4b1,	// (0x0003aadd) main_camera4_pane_g5_ParamLimits

0xb4b1,	// (0x0003aadd) main_camera4_pane_g5

0x0005,

0xf93e,	// (0x0003ef6a) main_camera4_pane_g_ParamLimits

0xf93e,	// (0x0003ef6a) main_camera4_pane_g

0xb4cb,	// (0x0003aaf7) main_camera4_pane_t1_ParamLimits

0xb4cb,	// (0x0003aaf7) main_camera4_pane_t1

0x1d0c,	// (0x00031338) bg_tb_trans_pane_cp06

0xb4f7,	// (0x0003ab23) cam4_indicators_pane_g1

0xb504,	// (0x0003ab30) cam4_indicators_pane_g2

0x0002,

0xf950,	// (0x0003ef7c) cam4_indicators_pane_g

0xb524,	// (0x0003ab50) cam4_indicators_pane_t1

0xb54e,	// (0x0003ab7a) main_video4_pane_g1_ParamLimits

0xb54e,	// (0x0003ab7a) main_video4_pane_g1

0xb55a,	// (0x0003ab86) main_video4_pane_g2_ParamLimits

0xb55a,	// (0x0003ab86) main_video4_pane_g2

0xb566,	// (0x0003ab92) main_video4_pane_g3_ParamLimits

0xb566,	// (0x0003ab92) main_video4_pane_g3

0xb572,	// (0x0003ab9e) main_video4_pane_g4_ParamLimits

0xb572,	// (0x0003ab9e) main_video4_pane_g4

0x0004,

0xf957,	// (0x0003ef83) main_video4_pane_g_ParamLimits

0xf957,	// (0x0003ef83) main_video4_pane_g

0xb594,	// (0x0003abc0) vid4_indicators_pane_ParamLimits

0xb594,	// (0x0003abc0) vid4_indicators_pane

0xb5b2,	// (0x0003abde) video4_image_uncrop_cif_pane_ParamLimits

0xb5b2,	// (0x0003abde) video4_image_uncrop_cif_pane

0xb5c1,	// (0x0003abed) video4_image_uncrop_nhd_pane_ParamLimits

0xb5c1,	// (0x0003abed) video4_image_uncrop_nhd_pane

0xb44c,	// (0x0003aa78) video4_image_uncrop_vga_pane_ParamLimits

0xb44c,	// (0x0003aa78) video4_image_uncrop_vga_pane

0xf109,	// (0x0003e735) bg_tb_trans_pane_cp07

0xb4f7,	// (0x0003ab23) vid4_indicators_pane_g1

0xb5da,	// (0x0003ac06) vid4_indicators_pane_g2

0xb5e7,	// (0x0003ac13) vid4_indicators_pane_g3

0x0004,

0xf962,	// (0x0003ef8e) vid4_indicators_pane_g

0xb614,	// (0x0003ac40) vid4_indicators_pane_t1

0xb62e,	// (0x0003ac5a) cam4_autofocus_pane_g1

0xb636,	// (0x0003ac62) cam4_autofocus_pane_g2

0xb63e,	// (0x0003ac6a) cam4_autofocus_pane_g3

0x0002,

0xf96d,	// (0x0003ef99) cam4_autofocus_pane_g

0xb646,	// (0x0003ac72) cam4_autofocus_pane_g3_copy1

0xae86,	// (0x0003a4b2) video_down_pane_cp_t1

0xae94,	// (0x0003a4c0) video_down_pane_cp_t2

0x0001,

0xf8f2,	// (0x0003ef1e) video_down_pane_cp_t

0x6924,	// (0x00035f50) popup_vitu2_window_ParamLimits

0x6924,	// (0x00035f50) popup_vitu2_window

0xb64e,	// (0x0003ac7a) aid_size_cell2_itu2_ParamLimits

0xb64e,	// (0x0003ac7a) aid_size_cell2_itu2

0xb670,	// (0x0003ac9c) aid_size_cell_itu2_ParamLimits

0xb670,	// (0x0003ac9c) aid_size_cell_itu2

0x30cf,	// (0x000326fb) bg_popup_window_pane_cp09_ParamLimits

0x30cf,	// (0x000326fb) bg_popup_window_pane_cp09

0xb6b4,	// (0x0003ace0) field_vitu2_entry_pane_ParamLimits

0xb6b4,	// (0x0003ace0) field_vitu2_entry_pane

0xb6d4,	// (0x0003ad00) grid_vitu2_function_pane_ParamLimits

0xb6d4,	// (0x0003ad00) grid_vitu2_function_pane

0xb718,	// (0x0003ad44) grid_vitu2_itu_pane_ParamLimits

0xb718,	// (0x0003ad44) grid_vitu2_itu_pane

0xb78c,	// (0x0003adb8) cell_vitu2_itu_pane_ParamLimits

0xb78c,	// (0x0003adb8) cell_vitu2_itu_pane

0xb7a3,	// (0x0003adcf) cell_vitu2_function_pane_ParamLimits

0xb7a3,	// (0x0003adcf) cell_vitu2_function_pane

0x27ba,	// (0x00031de6) bg_popup_call_pane_cp08_ParamLimits

0x27ba,	// (0x00031de6) bg_popup_call_pane_cp08

0x27d3,	// (0x00031dff) field_vitu2_entry_pane_g1

0x27df,	// (0x00031e0b) field_vitu2_entry_pane_g2

0x0002,

0xf974,	// (0x0003efa0) field_vitu2_entry_pane_g

0x59a3,	// (0x00034fcf) field_vitu2_entry_pane_t1_ParamLimits

0x59a3,	// (0x00034fcf) field_vitu2_entry_pane_t1

0x59c0,	// (0x00034fec) field_vitu2_entry_pane_t2_ParamLimits

0x59c0,	// (0x00034fec) field_vitu2_entry_pane_t2

0x0001,

0xf97b,	// (0x0003efa7) field_vitu2_entry_pane_t_ParamLimits

0xf97b,	// (0x0003efa7) field_vitu2_entry_pane_t

0xb7e7,	// (0x0003ae13) bg_button_pane_cp010_ParamLimits

0xb7e7,	// (0x0003ae13) bg_button_pane_cp010

0xb7f5,	// (0x0003ae21) cell_vitu2_itu_pane_g1

0xb813,	// (0x0003ae3f) cell_vitu2_itu_pane_t1_ParamLimits

0xb813,	// (0x0003ae3f) cell_vitu2_itu_pane_t1

0x59dd,	// (0x00035009) cell_vitu2_itu_pane_t2_ParamLimits

0x59dd,	// (0x00035009) cell_vitu2_itu_pane_t2

0x0002,

0xf985,	// (0x0003efb1) cell_vitu2_itu_pane_t_ParamLimits

0xf985,	// (0x0003efb1) cell_vitu2_itu_pane_t

0xf109,	// (0x0003e735) bg_button_pane_cp011

0xb865,	// (0x0003ae91) cell_vitu2_function_pane_g1

0xdc6f,	// (0x0003d29b) main_myfav_hc_pane

0xb313,	// (0x0003a93f) popup_image3_note_pane_ParamLimits

0xb313,	// (0x0003a93f) popup_image3_note_pane

0xb321,	// (0x0003a94d) popup_image3_tool_bar_pane_ParamLimits

0xb321,	// (0x0003a94d) popup_image3_tool_bar_pane

0x5a4b,	// (0x00035077) cell_vitu2_itu_pane_t3_ParamLimits

0x5a4b,	// (0x00035077) cell_vitu2_itu_pane_t3

0xdc6f,	// (0x0003d29b) bg_popup_trans_pane

0x282c,	// (0x00031e58) grid_image3_tool_bar_pane

0x2836,	// (0x00031e62) bg_popup_trans_pane_g1

0xe823,	// (0x0003de4f) bg_popup_trans_pane_g2

0x283e,	// (0x00031e6a) bg_popup_trans_pane_g3

0x2846,	// (0x00031e72) bg_popup_trans_pane_g4

0x284e,	// (0x00031e7a) bg_popup_trans_pane_g5

0x2856,	// (0x00031e82) bg_popup_trans_pane_g6

0x285e,	// (0x00031e8a) bg_popup_trans_pane_g7

0x2866,	// (0x00031e92) bg_popup_trans_pane_g8

0xe803,	// (0x0003de2f) bg_popup_trans_pane_g9

0x0008,

0xf98c,	// (0x0003efb8) bg_popup_trans_pane_g

0x286e,	// (0x00031e9a) cell_image3_tool_bar_pane_ParamLimits

0x286e,	// (0x00031e9a) cell_image3_tool_bar_pane

0x1adc,	// (0x00031108) cell_image3_tool_bar_pane_g1

0xdc6f,	// (0x0003d29b) bg_popup_trans_pane_cp1

0x2884,	// (0x00031eb0) popup_image3_note_pane_t1

0x2892,	// (0x00031ebe) popup_image3_note_pane_t2

0x28a0,	// (0x00031ecc) popup_image3_note_pane_t3

0x0002,

0xf99f,	// (0x0003efcb) popup_image3_note_pane_t

0x28b0,	// (0x00031edc) popup_image3_note_pane_t3_copy1

0xb879,	// (0x0003aea5) bg_myfav_hc_instruction_pane_ParamLimits

0xb879,	// (0x0003aea5) bg_myfav_hc_instruction_pane

0xb891,	// (0x0003aebd) cell_myfav_contact_pane_ParamLimits

0xb891,	// (0x0003aebd) cell_myfav_contact_pane

0xb8ab,	// (0x0003aed7) cell_myfav_contact_pane_cp1_ParamLimits

0xb8ab,	// (0x0003aed7) cell_myfav_contact_pane_cp1

0xb8c3,	// (0x0003aeef) cell_myfav_contact_pane_cp2_ParamLimits

0xb8c3,	// (0x0003aeef) cell_myfav_contact_pane_cp2

0xb8db,	// (0x0003af07) cell_myfav_contact_pane_cp3_ParamLimits

0xb8db,	// (0x0003af07) cell_myfav_contact_pane_cp3

0xb8f2,	// (0x0003af1e) cell_myfav_contact_pane_cp4_ParamLimits

0xb8f2,	// (0x0003af1e) cell_myfav_contact_pane_cp4

0xb908,	// (0x0003af34) cell_myfav_contact_pane_cp5_ParamLimits

0xb908,	// (0x0003af34) cell_myfav_contact_pane_cp5

0xb91c,	// (0x0003af48) cell_myfav_contact_pane_cp6_ParamLimits

0xb91c,	// (0x0003af48) cell_myfav_contact_pane_cp6

0xb930,	// (0x0003af5c) cell_myfav_contact_pane_cp7_ParamLimits

0xb930,	// (0x0003af5c) cell_myfav_contact_pane_cp7

0x28be,	// (0x00031eea) listscroll_gen_pane_cp05

0xb948,	// (0x0003af74) main_myfav_hc_pane_g1_ParamLimits

0xb948,	// (0x0003af74) main_myfav_hc_pane_g1

0xb962,	// (0x0003af8e) main_myfav_hc_pane_g2_ParamLimits

0xb962,	// (0x0003af8e) main_myfav_hc_pane_g2

0x0002,

0xf9a6,	// (0x0003efd2) main_myfav_hc_pane_g_ParamLimits

0xf9a6,	// (0x0003efd2) main_myfav_hc_pane_g

0xb994,	// (0x0003afc0) main_myfav_hc_pane_t1_ParamLimits

0xb994,	// (0x0003afc0) main_myfav_hc_pane_t1

0x28c7,	// (0x00031ef3) main_myfav_hc_pane_t2_ParamLimits

0x28c7,	// (0x00031ef3) main_myfav_hc_pane_t2

0x28d9,	// (0x00031f05) main_myfav_hc_pane_t3_ParamLimits

0x28d9,	// (0x00031f05) main_myfav_hc_pane_t3

0xb9ab,	// (0x0003afd7) main_myfav_hc_pane_t4_ParamLimits

0xb9ab,	// (0x0003afd7) main_myfav_hc_pane_t4

0x0004,

0xf9ad,	// (0x0003efd9) main_myfav_hc_pane_t_ParamLimits

0xf9ad,	// (0x0003efd9) main_myfav_hc_pane_t

0x1adc,	// (0x00031108) bg_myfav_hc_instruction_pane_g1

0x28eb,	// (0x00031f17) cell_myfav_contact_pane_g1_ParamLimits

0x28eb,	// (0x00031f17) cell_myfav_contact_pane_g1

0x28eb,	// (0x00031f17) cell_myfav_contact_pane_g2_ParamLimits

0x28eb,	// (0x00031f17) cell_myfav_contact_pane_g2

0x28f7,	// (0x00031f23) cell_myfav_contact_pane_g3_ParamLimits

0x28f7,	// (0x00031f23) cell_myfav_contact_pane_g3

0x1de5,	// (0x00031411) cell_myfav_contact_pane_g4_ParamLimits

0x1de5,	// (0x00031411) cell_myfav_contact_pane_g4

0x2904,	// (0x00031f30) cell_myfav_contact_pane_g5_ParamLimits

0x2904,	// (0x00031f30) cell_myfav_contact_pane_g5

0x0004,

0xf9b8,	// (0x0003efe4) cell_myfav_contact_pane_g_ParamLimits

0xf9b8,	// (0x0003efe4) cell_myfav_contact_pane_g

0xb97c,	// (0x0003afa8) main_myfav_hc_pane_g3_ParamLimits

0xb97c,	// (0x0003afa8) main_myfav_hc_pane_g3

0x683f,	// (0x00035e6b) popup_adpt_find_window

0xb9d5,	// (0x0003b001) afind_page_pane_ParamLimits

0xb9d5,	// (0x0003b001) afind_page_pane

0xb9e2,	// (0x0003b00e) aid_size_cell_afind_ParamLimits

0xb9e2,	// (0x0003b00e) aid_size_cell_afind

0xb9fc,	// (0x0003b028) bg_popup_sub_pane_cp09_ParamLimits

0xb9fc,	// (0x0003b028) bg_popup_sub_pane_cp09

0xba09,	// (0x0003b035) find_pane_cp01_ParamLimits

0xba09,	// (0x0003b035) find_pane_cp01

0x2910,	// (0x00031f3c) grid_afind_control_pane_ParamLimits

0x2910,	// (0x00031f3c) grid_afind_control_pane

0xba16,	// (0x0003b042) grid_afind_pane_ParamLimits

0xba16,	// (0x0003b042) grid_afind_pane

0xba32,	// (0x0003b05e) cell_afind_pane_ParamLimits

0xba32,	// (0x0003b05e) cell_afind_pane

0x1adc,	// (0x00031108) afind_page_pane_g1

0xba7e,	// (0x0003b0aa) afind_page_pane_g2

0xba87,	// (0x0003b0b3) afind_page_pane_g3

0x0002,

0xf9c3,	// (0x0003efef) afind_page_pane_g

0xba90,	// (0x0003b0bc) afind_page_pane_t1

0x2924,	// (0x00031f50) cell_afind_grid_control_pane_ParamLimits

0x2924,	// (0x00031f50) cell_afind_grid_control_pane

0x2635,	// (0x00031c61) bg_button_pane_cp69_ParamLimits

0x2635,	// (0x00031c61) bg_button_pane_cp69

0xbab0,	// (0x0003b0dc) cell_afind_pane_g1_ParamLimits

0xbab0,	// (0x0003b0dc) cell_afind_pane_g1

0xbabd,	// (0x0003b0e9) cell_afind_pane_t1_ParamLimits

0xbabd,	// (0x0003b0e9) cell_afind_pane_t1

0xe612,	// (0x0003dc3e) bg_button_pane_cp72

0x2933,	// (0x00031f5f) cell_afind_grid_control_pane_g1

0x9187,	// (0x000387b3) aid_image_placing_area_ParamLimits

0x9187,	// (0x000387b3) aid_image_placing_area

0x20ea,	// (0x00031716) field_vitu_entry_pane_g1_ParamLimits

0x20ea,	// (0x00031716) field_vitu_entry_pane_g1

0x20f6,	// (0x00031722) field_vitu_entry_pane_g2_ParamLimits

0x20f6,	// (0x00031722) field_vitu_entry_pane_g2

0x0001,

0xf87d,	// (0x0003eea9) field_vitu_entry_pane_g_ParamLimits

0xf87d,	// (0x0003eea9) field_vitu_entry_pane_g

0xac90,	// (0x0003a2bc) cell_vitu_itu_pane_g1_ParamLimits

0xacd2,	// (0x0003a2fe) cell_vitu_itu_pane_t3_ParamLimits

0xacd2,	// (0x0003a2fe) cell_vitu_itu_pane_t3

0x25db,	// (0x00031c07) mp4_progress_pane_t1_ParamLimits

0x25f4,	// (0x00031c20) mp4_progress_pane_t2_ParamLimits

0xf912,	// (0x0003ef3e) mp4_progress_pane_t_ParamLimits

0x260d,	// (0x00031c39) mup_progress_pane_cp04_ParamLimits

0xb9bf,	// (0x0003afeb) main_myfav_hc_pane_t5_ParamLimits

0xb9bf,	// (0x0003afeb) main_myfav_hc_pane_t5

0xdc8d,	// (0x0003d2b9) aid_zoom_text_primary

0x683f,	// (0x00035e6b) popup_adpt_find_window_ParamLimits

0xf109,	// (0x0003e735) main_cam_set_pane

0xb473,	// (0x0003aa9f) cam4_zoom_pane_ParamLimits

0xb473,	// (0x0003aa9f) cam4_zoom_pane

0xbacf,	// (0x0003b0fb) main_cam_set_pane_g1_ParamLimits

0xbacf,	// (0x0003b0fb) main_cam_set_pane_g1

0xbadd,	// (0x0003b109) main_cam_set_pane_g2_ParamLimits

0xbadd,	// (0x0003b109) main_cam_set_pane_g2

0x0001,

0xf9ca,	// (0x0003eff6) main_cam_set_pane_g_ParamLimits

0xf9ca,	// (0x0003eff6) main_cam_set_pane_g

0xbae9,	// (0x0003b115) main_cam_set_pane_t1_ParamLimits

0xbae9,	// (0x0003b115) main_cam_set_pane_t1

0xbb05,	// (0x0003b131) main_cset_listscroll_pane_ParamLimits

0xbb05,	// (0x0003b131) main_cset_listscroll_pane

0xbb34,	// (0x0003b160) main_cset_slider_pane_ParamLimits

0xbb34,	// (0x0003b160) main_cset_slider_pane

0x2944,	// (0x00031f70) main_cset_list_pane_ParamLimits

0x2944,	// (0x00031f70) main_cset_list_pane

0x2954,	// (0x00031f80) scroll_pane_cp028

0xbb55,	// (0x0003b181) aid_area_touch_slider

0xbb71,	// (0x0003b19d) cset_slider_pane

0xbb9b,	// (0x0003b1c7) main_cset_slider_pane_g1

0xbbb0,	// (0x0003b1dc) main_cset_slider_pane_g2

0x0011,

0xf9cf,	// (0x0003effb) main_cset_slider_pane_g

0x298d,	// (0x00031fb9) main_cset_slider_pane_t1

0xbc6c,	// (0x0003b298) main_cset_slider_pane_t2

0xbc86,	// (0x0003b2b2) main_cset_slider_pane_t3

0xbca0,	// (0x0003b2cc) main_cset_slider_pane_t4

0xbcba,	// (0x0003b2e6) main_cset_slider_pane_t5

0xbcd6,	// (0x0003b302) main_cset_slider_pane_t6

0xbceb,	// (0x0003b317) main_cset_slider_pane_t7

0x000e,

0xf9f4,	// (0x0003f020) main_cset_slider_pane_t

0xbdef,	// (0x0003b41b) cset_list_set_pane_ParamLimits

0xbdef,	// (0x0003b41b) cset_list_set_pane

0xbe00,	// (0x0003b42c) aid_position_infowindow_above

0xbe08,	// (0x0003b434) aid_position_infowindow_below

0x5a98,	// (0x000350c4) cset_list_set_pane_g1_ParamLimits

0x5a98,	// (0x000350c4) cset_list_set_pane_g1

0x5aa4,	// (0x000350d0) cset_list_set_pane_g3_ParamLimits

0x5aa4,	// (0x000350d0) cset_list_set_pane_g3

0x0001,

0xfa13,	// (0x0003f03f) cset_list_set_pane_g_ParamLimits

0xfa13,	// (0x0003f03f) cset_list_set_pane_g

0x5ab3,	// (0x000350df) cset_list_set_pane_t1_ParamLimits

0x5ab3,	// (0x000350df) cset_list_set_pane_t1

0xf109,	// (0x0003e735) list_highlight_pane_cp021_ParamLimits

0xf109,	// (0x0003e735) list_highlight_pane_cp021

0xefa5,	// (0x0003e5d1) cset_slider_pane_g1

0xefb7,	// (0x0003e5e3) cset_slider_pane_g2

0xefae,	// (0x0003e5da) cset_slider_pane_g3

0x0002,

0xfa18,	// (0x0003f044) cset_slider_pane_g

0xbe10,	// (0x0003b43c) aid_area_touch_cam4_zoom

0xbe18,	// (0x0003b444) cam4_zoom_cont_pane

0xbe20,	// (0x0003b44c) cam4_zoom_pane_g1

0xbe28,	// (0x0003b454) cam4_zoom_pane_g2

0xbe30,	// (0x0003b45c) cam4_zoom_pane_g3

0x0002,

0xfa1f,	// (0x0003f04b) cam4_zoom_pane_g

0x3446,	// (0x00032a72) cam4_zoom_cont_pane_g1

0x344f,	// (0x00032a7b) cam4_zoom_cont_pane_g2

0x3458,	// (0x00032a84) cam4_zoom_cont_pane_g3

0x0002,

0xfa26,	// (0x0003f052) cam4_zoom_cont_pane_g

0xb36a,	// (0x0003a996) call4_image_pane_ParamLimits

0xb36a,	// (0x0003a996) call4_image_pane

0x2675,	// (0x00031ca1) call4_windows_conf_pane_ParamLimits

0x26bc,	// (0x00031ce8) popup_call4_audio_in_window_ParamLimits

0x26bc,	// (0x00031ce8) popup_call4_audio_in_window

0xdc6f,	// (0x0003d29b) bg_popup_call2_act_pane_cp02

0x2734,	// (0x00031d60) call4_list_conf_pane

0x1adc,	// (0x00031108) call4_image_pane_g1

0x1adc,	// (0x00031108) call4_image_pane_g2

0x0001,

0xf743,	// (0x0003ed6f) call4_image_pane_g

0x2a74,	// (0x000320a0) list_single_graphic_popup_conf4_pane_ParamLimits

0x2a74,	// (0x000320a0) list_single_graphic_popup_conf4_pane

0xdc6f,	// (0x0003d29b) list_highlight_pane_cp022

0x2a89,	// (0x000320b5) list_single_graphic_popup_conf4_pane_g1

0xec9f,	// (0x0003e2cb) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa2d,	// (0x0003f059) list_single_graphic_popup_conf4_pane_g

0x2a91,	// (0x000320bd) list_single_graphic_popup_conf4_pane_t1

0x77b1,	// (0x00036ddd) popup_vtel_slider_window_ParamLimits

0x77b1,	// (0x00036ddd) popup_vtel_slider_window

0x2623,	// (0x00031c4f) dialer2_ne_pane_t2_ParamLimits

0x2623,	// (0x00031c4f) dialer2_ne_pane_t2

0x0001,

0xf917,	// (0x0003ef43) dialer2_ne_pane_t_ParamLimits

0xf917,	// (0x0003ef43) dialer2_ne_pane_t

0xf109,	// (0x0003e735) bg_popup_sub_pane_cp010_ParamLimits

0xf109,	// (0x0003e735) bg_popup_sub_pane_cp010

0xbe38,	// (0x0003b464) popup_vtel_slider_window_g1_ParamLimits

0xbe38,	// (0x0003b464) popup_vtel_slider_window_g1

0xbe44,	// (0x0003b470) popup_vtel_slider_window_g2_ParamLimits

0xbe44,	// (0x0003b470) popup_vtel_slider_window_g2

0x0003,

0xfa32,	// (0x0003f05e) popup_vtel_slider_window_g_ParamLimits

0xfa32,	// (0x0003f05e) popup_vtel_slider_window_g

0xbe8c,	// (0x0003b4b8) vtel_slider_pane_ParamLimits

0xbe8c,	// (0x0003b4b8) vtel_slider_pane

0xbe9b,	// (0x0003b4c7) vtel_slider_pane_g1_ParamLimits

0xbe9b,	// (0x0003b4c7) vtel_slider_pane_g1

0xbea8,	// (0x0003b4d4) vtel_slider_pane_g2_ParamLimits

0xbea8,	// (0x0003b4d4) vtel_slider_pane_g2

0xbeb5,	// (0x0003b4e1) vtel_slider_pane_g3_ParamLimits

0xbeb5,	// (0x0003b4e1) vtel_slider_pane_g3

0xbe9b,	// (0x0003b4c7) vtel_slider_pane_g4_ParamLimits

0xbe9b,	// (0x0003b4c7) vtel_slider_pane_g4

0xbec2,	// (0x0003b4ee) vtel_slider_pane_g5_ParamLimits

0xbec2,	// (0x0003b4ee) vtel_slider_pane_g5

0x0004,

0xfa3b,	// (0x0003f067) vtel_slider_pane_g_ParamLimits

0xfa3b,	// (0x0003f067) vtel_slider_pane_g

0xdc6f,	// (0x0003d29b) main_gallery2_pane

0xb696,	// (0x0003acc2) aid_size_row_itut2_dropdow_list_ParamLimits

0xb696,	// (0x0003acc2) aid_size_row_itut2_dropdow_list

0xb6f6,	// (0x0003ad22) grid_vitu2_function_top_pane_ParamLimits

0xb6f6,	// (0x0003ad22) grid_vitu2_function_top_pane

0xb748,	// (0x0003ad74) popup_vitu2_dropdown_list_window_ParamLimits

0xb748,	// (0x0003ad74) popup_vitu2_dropdown_list_window

0xb768,	// (0x0003ad94) popup_vitu2_match_list_window

0xbecf,	// (0x0003b4fb) cell_vitu2_function_top_pane_ParamLimits

0xbecf,	// (0x0003b4fb) cell_vitu2_function_top_pane

0xbeef,	// (0x0003b51b) cell_vitu2_function_top_pane_cp01_ParamLimits

0xbeef,	// (0x0003b51b) cell_vitu2_function_top_pane_cp01

0xbf0d,	// (0x0003b539) cell_vitu2_function_top_wide_pane_ParamLimits

0xbf0d,	// (0x0003b539) cell_vitu2_function_top_wide_pane

0xf109,	// (0x0003e735) bg_button_pane_cp012

0xbf2b,	// (0x0003b557) cell_vitu2_function_top_pane_g1

0xbf3a,	// (0x0003b566) bg_button_pane_cp013_ParamLimits

0xbf3a,	// (0x0003b566) bg_button_pane_cp013

0xbf56,	// (0x0003b582) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xbf56,	// (0x0003b582) cell_vitu2_function_top_wide_pane_g1

0x6924,	// (0x00035f50) bg_popup_sub_pane_cp20

0xbf6e,	// (0x0003b59a) list_vitu2_match_list_pane

0x2836,	// (0x00031e62) bg_popup_sub_pane_cp20_g1

0x283e,	// (0x00031e6a) bg_popup_sub_pane_cp20_g2

0xe823,	// (0x0003de4f) bg_popup_sub_pane_cp20_g3

0x2846,	// (0x00031e72) bg_popup_sub_pane_cp20_g4

0xe803,	// (0x0003de2f) bg_popup_sub_pane_cp20_g5

0x2ac9,	// (0x000320f5) bg_popup_sub_pane_cp20_g6

0x2856,	// (0x00031e82) bg_popup_sub_pane_cp20_g7

0x285e,	// (0x00031e8a) bg_popup_sub_pane_cp20_g8

0x2866,	// (0x00031e92) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa46,	// (0x0003f072) bg_popup_sub_pane_cp20_g

0xbf86,	// (0x0003b5b2) list_vitu2_match_list_item_pane_ParamLimits

0xbf86,	// (0x0003b5b2) list_vitu2_match_list_item_pane

0xbf98,	// (0x0003b5c4) list_vitu2_match_list_item_pane_t1

0xdc6f,	// (0x0003d29b) bg_popup_sub_pane_cp21

0xebc8,	// (0x0003e1f4) grid_vitu2_dropdown_list_pane

0xbfa6,	// (0x0003b5d2) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xbfa6,	// (0x0003b5d2) cell_vitu2_dropdown_list_char_pane

0xbfcb,	// (0x0003b5f7) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xbfcb,	// (0x0003b5f7) cell_vitu2_dropdown_list_ctrl_pane

0x2b23,	// (0x0003214f) cell_vitu2_dropdown_list_char_pane_g1

0x2b1a,	// (0x00032146) cell_vitu2_dropdown_list_char_pane_g2

0x2b11,	// (0x0003213d) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa63,	// (0x0003f08f) cell_vitu2_dropdown_list_char_pane_g

0xbff9,	// (0x0003b625) cell_vitu2_dropdown_list_char_pane_t1

0xc007,	// (0x0003b633) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc007,	// (0x0003b633) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc017,	// (0x0003b643) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc017,	// (0x0003b643) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc028,	// (0x0003b654) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc028,	// (0x0003b654) cell_vitu2_dropdown_list_ctrl_pane_g3

0xc038,	// (0x0003b664) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xc038,	// (0x0003b664) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1d0c,	// (0x00031338) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1d0c,	// (0x00031338) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa6a,	// (0x0003f096) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa6a,	// (0x0003f096) cell_vitu2_dropdown_list_ctrl_pane_g

0xc051,	// (0x0003b67d) aid_size_cell_gallery2_ParamLimits

0xc051,	// (0x0003b67d) aid_size_cell_gallery2

0xc05f,	// (0x0003b68b) grid_gallery2_pane_ParamLimits

0xc05f,	// (0x0003b68b) grid_gallery2_pane

0xc06e,	// (0x0003b69a) scroll_pane_cp029_ParamLimits

0xc06e,	// (0x0003b69a) scroll_pane_cp029

0xc07a,	// (0x0003b6a6) cell_gallery2_pane_ParamLimits

0xc07a,	// (0x0003b6a6) cell_gallery2_pane

0x2b3a,	// (0x00032166) cell_gallery2_pane_g2

0xc0a4,	// (0x0003b6d0) cell_gallery2_pane_g3

0x2b44,	// (0x00032170) cell_gallery2_pane_g4

0x2b4c,	// (0x00032178) cell_gallery2_pane_g5

0xee6d,	// (0x0003e499) grid_highlight_pane_cp10

0xb768,	// (0x0003ad94) popup_vitu2_match_list_window_ParamLimits

0xb77c,	// (0x0003ada8) popup_vitu2_query_window_ParamLimits

0xb77c,	// (0x0003ada8) popup_vitu2_query_window

0xdc6f,	// (0x0003d29b) bg_vitu2_candi_button_pane

0x2b23,	// (0x0003214f) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x2b1a,	// (0x00032146) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x2b11,	// (0x0003213d) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5b1a,	// (0x00035146) bg_button_pane_cp015

0xc0ac,	// (0x0003b6d8) bg_button_pane_cp016

0xc0b6,	// (0x0003b6e2) bg_button_pane_cp017

0xf109,	// (0x0003e735) bg_popup_sub_pane_cp22

0x2b54,	// (0x00032180) popup_vitu2_query_window_g1

0x5b31,	// (0x0003515d) popup_vitu2_query_window_g2

0x0001,

0xfa75,	// (0x0003f0a1) popup_vitu2_query_window_g

0x5b3f,	// (0x0003516b) popup_vitu2_query_window_t1_ParamLimits

0x5b3f,	// (0x0003516b) popup_vitu2_query_window_t1

0x5b67,	// (0x00035193) popup_vitu2_query_window_t2_ParamLimits

0x5b67,	// (0x00035193) popup_vitu2_query_window_t2

0x5b79,	// (0x000351a5) popup_vitu2_query_window_t3_ParamLimits

0x5b79,	// (0x000351a5) popup_vitu2_query_window_t3

0xc0d1,	// (0x0003b6fd) popup_vitu2_query_window_t4_ParamLimits

0xc0d1,	// (0x0003b6fd) popup_vitu2_query_window_t4

0xc0e7,	// (0x0003b713) popup_vitu2_query_window_t5_ParamLimits

0xc0e7,	// (0x0003b713) popup_vitu2_query_window_t5

0x0004,

0xfa7a,	// (0x0003f0a6) popup_vitu2_query_window_t_ParamLimits

0xfa7a,	// (0x0003f0a6) popup_vitu2_query_window_t

0x293c,	// (0x00031f68) main_cset_text_pane

0xbb55,	// (0x0003b181) aid_area_touch_slider_ParamLimits

0xbb71,	// (0x0003b19d) cset_slider_pane_ParamLimits

0xbb9b,	// (0x0003b1c7) main_cset_slider_pane_g1_ParamLimits

0xbbb0,	// (0x0003b1dc) main_cset_slider_pane_g2_ParamLimits

0x295d,	// (0x00031f89) main_cset_slider_pane_g3_ParamLimits

0x295d,	// (0x00031f89) main_cset_slider_pane_g3

0xbbc5,	// (0x0003b1f1) main_cset_slider_pane_g4_ParamLimits

0xbbc5,	// (0x0003b1f1) main_cset_slider_pane_g4

0xbbd4,	// (0x0003b200) main_cset_slider_pane_g5_ParamLimits

0xbbd4,	// (0x0003b200) main_cset_slider_pane_g5

0xbbe0,	// (0x0003b20c) main_cset_slider_pane_g6_ParamLimits

0xbbe0,	// (0x0003b20c) main_cset_slider_pane_g6

0xf9cf,	// (0x0003effb) main_cset_slider_pane_g_ParamLimits

0x298d,	// (0x00031fb9) main_cset_slider_pane_t1_ParamLimits

0xbc6c,	// (0x0003b298) main_cset_slider_pane_t2_ParamLimits

0xbc86,	// (0x0003b2b2) main_cset_slider_pane_t3_ParamLimits

0xbca0,	// (0x0003b2cc) main_cset_slider_pane_t4_ParamLimits

0xbcba,	// (0x0003b2e6) main_cset_slider_pane_t5_ParamLimits

0xbcd6,	// (0x0003b302) main_cset_slider_pane_t6_ParamLimits

0xbceb,	// (0x0003b317) main_cset_slider_pane_t7_ParamLimits

0xbd15,	// (0x0003b341) main_cset_slider_pane_t8_ParamLimits

0xbd15,	// (0x0003b341) main_cset_slider_pane_t8

0xbd3d,	// (0x0003b369) main_cset_slider_pane_t9_ParamLimits

0xbd3d,	// (0x0003b369) main_cset_slider_pane_t9

0xbd65,	// (0x0003b391) main_cset_slider_pane_t10_ParamLimits

0xbd65,	// (0x0003b391) main_cset_slider_pane_t10

0xbd8d,	// (0x0003b3b9) main_cset_slider_pane_t11_ParamLimits

0xbd8d,	// (0x0003b3b9) main_cset_slider_pane_t11

0xbdb5,	// (0x0003b3e1) main_cset_slider_pane_t12_ParamLimits

0xbdb5,	// (0x0003b3e1) main_cset_slider_pane_t12

0xbdd2,	// (0x0003b3fe) main_cset_slider_pane_t13_ParamLimits

0xbdd2,	// (0x0003b3fe) main_cset_slider_pane_t13

0xf9f4,	// (0x0003f020) main_cset_slider_pane_t_ParamLimits

0xdc6f,	// (0x0003d29b) bg_popup_sub_pane_cp011

0x2b60,	// (0x0003218c) main_cset_text_pane_g1

0x2b68,	// (0x00032194) main_cset_text_pane_t1

0x2b76,	// (0x000321a2) main_cset_text_pane_t2

0x2b84,	// (0x000321b0) main_cset_text_pane_t3

0x2b92,	// (0x000321be) main_cset_text_pane_t4

0x2ba0,	// (0x000321cc) main_cset_text_pane_t5

0x2bae,	// (0x000321da) main_cset_text_pane_t6

0x2bbc,	// (0x000321e8) main_cset_text_pane_t7

0x0006,

0xfa85,	// (0x0003f0b1) main_cset_text_pane_t

0xdc6f,	// (0x0003d29b) main_cam4_burst_pane

0xdc6f,	// (0x0003d29b) main_cam5_pane

0xba9e,	// (0x0003b0ca) bg_button_pane_cp019

0xbaa7,	// (0x0003b0d3) bg_button_pane_cp020

0x2969,	// (0x00031f95) main_cset_slider_pane_g7_ParamLimits

0x2969,	// (0x00031f95) main_cset_slider_pane_g7

0x2975,	// (0x00031fa1) main_cset_slider_pane_g8_ParamLimits

0x2975,	// (0x00031fa1) main_cset_slider_pane_g8

0xbbf4,	// (0x0003b220) main_cset_slider_pane_g9_ParamLimits

0xbbf4,	// (0x0003b220) main_cset_slider_pane_g9

0xbc00,	// (0x0003b22c) main_cset_slider_pane_g10_ParamLimits

0xbc00,	// (0x0003b22c) main_cset_slider_pane_g10

0xbc0c,	// (0x0003b238) main_cset_slider_pane_g11_ParamLimits

0xbc0c,	// (0x0003b238) main_cset_slider_pane_g11

0xbc18,	// (0x0003b244) main_cset_slider_pane_g12_ParamLimits

0xbc18,	// (0x0003b244) main_cset_slider_pane_g12

0xbc24,	// (0x0003b250) main_cset_slider_pane_g13_ParamLimits

0xbc24,	// (0x0003b250) main_cset_slider_pane_g13

0xbc30,	// (0x0003b25c) main_cset_slider_pane_g14_ParamLimits

0xbc30,	// (0x0003b25c) main_cset_slider_pane_g14

0xbc3c,	// (0x0003b268) main_cset_slider_pane_g15_ParamLimits

0xbc3c,	// (0x0003b268) main_cset_slider_pane_g15

0x29bb,	// (0x00031fe7) main_cset_slider_pane_t14_ParamLimits

0x29bb,	// (0x00031fe7) main_cset_slider_pane_t14

0x29f4,	// (0x00032020) main_cset_slider_pane_t15_ParamLimits

0x29f4,	// (0x00032020) main_cset_slider_pane_t15

0xc0fd,	// (0x0003b729) aid_cam4_burst_size_cell_ParamLimits

0xc0fd,	// (0x0003b729) aid_cam4_burst_size_cell

0xc119,	// (0x0003b745) grid_cam4_burst_pane_ParamLimits

0xc119,	// (0x0003b745) grid_cam4_burst_pane

0xc14b,	// (0x0003b777) linegrid_cam4_burst_pane_ParamLimits

0xc14b,	// (0x0003b777) linegrid_cam4_burst_pane

0xc16b,	// (0x0003b797) scroll_pane_cp30_ParamLimits

0xc16b,	// (0x0003b797) scroll_pane_cp30

0xc177,	// (0x0003b7a3) cell_cam4_burst_pane_ParamLimits

0xc177,	// (0x0003b7a3) cell_cam4_burst_pane

0x2bca,	// (0x000321f6) linegrid_cam4_burst_pane_g1_ParamLimits

0x2bca,	// (0x000321f6) linegrid_cam4_burst_pane_g1

0xc1b7,	// (0x0003b7e3) linegrid_cam4_burst_pane_g2_ParamLimits

0xc1b7,	// (0x0003b7e3) linegrid_cam4_burst_pane_g2

0x2bd7,	// (0x00032203) linegrid_cam4_burst_pane_g3_ParamLimits

0x2bd7,	// (0x00032203) linegrid_cam4_burst_pane_g3

0x0002,

0xfa94,	// (0x0003f0c0) linegrid_cam4_burst_pane_g_ParamLimits

0xfa94,	// (0x0003f0c0) linegrid_cam4_burst_pane_g

0xc1c8,	// (0x0003b7f4) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xc1c8,	// (0x0003b7f4) linegrid_cam4_burst_pane_g3_copy1

0x2be4,	// (0x00032210) linegrid_cam4_burst_pane_g4_ParamLimits

0x2be4,	// (0x00032210) linegrid_cam4_burst_pane_g4

0xc1e2,	// (0x0003b80e) linegrid_cam4_burst_pane_g5_ParamLimits

0xc1e2,	// (0x0003b80e) linegrid_cam4_burst_pane_g5

0xc1f3,	// (0x0003b81f) linegrid_cam4_burst_pane_g6_ParamLimits

0xc1f3,	// (0x0003b81f) linegrid_cam4_burst_pane_g6

0x2bf1,	// (0x0003221d) linegrid_cam4_burst_pane_g7_ParamLimits

0x2bf1,	// (0x0003221d) linegrid_cam4_burst_pane_g7

0xc20a,	// (0x0003b836) cell_cam4_burst_pane_g1

0x2c0a,	// (0x00032236) main_cam5_pane_t1_ParamLimits

0x2c0a,	// (0x00032236) main_cam5_pane_t1

0x2c1c,	// (0x00032248) main_cam5_pane_t2_ParamLimits

0x2c1c,	// (0x00032248) main_cam5_pane_t2

0x2c2e,	// (0x0003225a) main_cam5_pane_t3_ParamLimits

0x2c2e,	// (0x0003225a) main_cam5_pane_t3

0x2c40,	// (0x0003226c) main_cam5_pane_t4_ParamLimits

0x2c40,	// (0x0003226c) main_cam5_pane_t4

0x2c58,	// (0x00032284) main_cam5_pane_t5_ParamLimits

0x2c58,	// (0x00032284) main_cam5_pane_t5

0x2c6c,	// (0x00032298) main_cam5_pane_t6_ParamLimits

0x2c6c,	// (0x00032298) main_cam5_pane_t6

0x2c80,	// (0x000322ac) main_cam5_pane_t7_ParamLimits

0x2c80,	// (0x000322ac) main_cam5_pane_t7

0x2c92,	// (0x000322be) main_cam5_pane_t8_ParamLimits

0x2c92,	// (0x000322be) main_cam5_pane_t8

0x2cb0,	// (0x000322dc) main_cam5_pane_t9_ParamLimits

0x2cb0,	// (0x000322dc) main_cam5_pane_t9

0x2cc2,	// (0x000322ee) main_cam5_pane_t10_ParamLimits

0x2cc2,	// (0x000322ee) main_cam5_pane_t10

0x2cd4,	// (0x00032300) main_cam5_pane_t11_ParamLimits

0x2cd4,	// (0x00032300) main_cam5_pane_t11

0x2ce8,	// (0x00032314) main_cam5_pane_t12_ParamLimits

0x2ce8,	// (0x00032314) main_cam5_pane_t12

0x2cff,	// (0x0003232b) main_cam5_pane_t13_ParamLimits

0x2cff,	// (0x0003232b) main_cam5_pane_t13

0x000c,

0xfaa0,	// (0x0003f0cc) main_cam5_pane_t_ParamLimits

0xfaa0,	// (0x0003f0cc) main_cam5_pane_t

0x68ed,	// (0x00035f19) popup_scut_keymap_window_ParamLimits

0x68ed,	// (0x00035f19) popup_scut_keymap_window

0xc21d,	// (0x0003b849) aid_size_cell_brow_shortcut

0xee6d,	// (0x0003e499) bg_popup_window_pane_cp010

0xc229,	// (0x0003b855) grid_scut_pane

0xc235,	// (0x0003b861) cell_scut_pane_ParamLimits

0xc235,	// (0x0003b861) cell_scut_pane

0xc250,	// (0x0003b87c) cell_scut_pane_g1

0x2d22,	// (0x0003234e) cell_scut_pane_t1

0x2d31,	// (0x0003235d) cell_scut_pane_t2

0xc259,	// (0x0003b885) cell_scut_pane_t3

0x0002,

0xfabb,	// (0x0003f0e7) cell_scut_pane_t

0xa31a,	// (0x00039946) main_mup3_pane_g8_ParamLimits

0xa31a,	// (0x00039946) main_mup3_pane_g8

0xb6a4,	// (0x0003acd0) area_vitu2_query_pane_ParamLimits

0xb6a4,	// (0x0003acd0) area_vitu2_query_pane

0x5b24,	// (0x00035150) input_focus_pane_cp08

0x2d40,	// (0x0003236c) area_vitu2_query_pane_g1

0x5ba1,	// (0x000351cd) area_vitu2_query_pane_g2

0x0001,

0xfac2,	// (0x0003f0ee) area_vitu2_query_pane_g

0xc267,	// (0x0003b893) area_vitu2_query_pane_t1_ParamLimits

0xc267,	// (0x0003b893) area_vitu2_query_pane_t1

0xc27b,	// (0x0003b8a7) area_vitu2_query_pane_t2_ParamLimits

0xc27b,	// (0x0003b8a7) area_vitu2_query_pane_t2

0x5bb2,	// (0x000351de) area_vitu2_query_pane_t3_ParamLimits

0x5bb2,	// (0x000351de) area_vitu2_query_pane_t3

0x5bda,	// (0x00035206) area_vitu2_query_pane_t4_ParamLimits

0x5bda,	// (0x00035206) area_vitu2_query_pane_t4

0x5c02,	// (0x0003522e) area_vitu2_query_pane_t5_ParamLimits

0x5c02,	// (0x0003522e) area_vitu2_query_pane_t5

0x5c2a,	// (0x00035256) area_vitu2_query_pane_t6_ParamLimits

0x5c2a,	// (0x00035256) area_vitu2_query_pane_t6

0x0006,

0xfac7,	// (0x0003f0f3) area_vitu2_query_pane_t_ParamLimits

0xfac7,	// (0x0003f0f3) area_vitu2_query_pane_t

0xc28f,	// (0x0003b8bb) bg_button_pane_cp018

0xc29d,	// (0x0003b8c9) bg_button_pane_cp021

0x5c76,	// (0x000352a2) bg_button_pane_cp022

0x5c87,	// (0x000352b3) input_focus_pane_cp09

0x8849,	// (0x00037e75) aid_size_touch_mv_arrow_left

0x8874,	// (0x00037ea0) aid_size_touch_mv_arrow_right

0xbc54,	// (0x0003b280) main_cset_slider_pane_g16_ParamLimits

0xbc54,	// (0x0003b280) main_cset_slider_pane_g16

0xbc60,	// (0x0003b28c) main_cset_slider_pane_g17_ParamLimits

0xbc60,	// (0x0003b28c) main_cset_slider_pane_g17

0xc20a,	// (0x0003b836) cell_cam4_burst_pane_g1_ParamLimits

0xdc6f,	// (0x0003d29b) compa_mode_pane

0xbe50,	// (0x0003b47c) popup_vtel_slider_window_g3_ParamLimits

0xbe50,	// (0x0003b47c) popup_vtel_slider_window_g3

0xbe64,	// (0x0003b490) popup_vtel_slider_window_g4_ParamLimits

0xbe64,	// (0x0003b490) popup_vtel_slider_window_g4

0xbe78,	// (0x0003b4a4) popup_vtel_slider_window_t1_ParamLimits

0xbe78,	// (0x0003b4a4) popup_vtel_slider_window_t1

0xdc6f,	// (0x0003d29b) main_cl_pane

0x15d3,	// (0x00030bff) popup_imed_adjust2_window_ParamLimits

0x15a7,	// (0x00030bd3) bg_tb_trans_pane_cp05_ParamLimits

0x201f,	// (0x0003164b) popup_imed_adjust2_window_g1_ParamLimits

0x202e,	// (0x0003165a) popup_imed_adjust2_window_g2_ParamLimits

0x202e,	// (0x0003165a) popup_imed_adjust2_window_g2

0x203a,	// (0x00031666) popup_imed_adjust2_window_g3_ParamLimits

0x203a,	// (0x00031666) popup_imed_adjust2_window_g3

0x0002,

0xf841,	// (0x0003ee6d) popup_imed_adjust2_window_g_ParamLimits

0xf841,	// (0x0003ee6d) popup_imed_adjust2_window_g

0x2046,	// (0x00031672) popup_imed_adjust2_window_t1_ParamLimits

0x205e,	// (0x0003168a) slider_imed_adjust_pane_ParamLimits

0x2072,	// (0x0003169e) slider_imed_adjust_pane_g1_ParamLimits

0x2082,	// (0x000316ae) slider_imed_adjust_pane_g2_ParamLimits

0x2092,	// (0x000316be) slider_imed_adjust_pane_g3_ParamLimits

0x20a3,	// (0x000316cf) slider_imed_adjust_pane_g4_ParamLimits

0xf848,	// (0x0003ee74) slider_imed_adjust_pane_g_ParamLimits

0xb428,	// (0x0003aa54) aid_touch_area_cam4_ParamLimits

0xb428,	// (0x0003aa54) aid_touch_area_cam4

0xb438,	// (0x0003aa64) battery_pane_cp01

0xb4bf,	// (0x0003aaeb) main_camera4_pane_g6_ParamLimits

0xb4bf,	// (0x0003aaeb) main_camera4_pane_g6

0xb4dd,	// (0x0003ab09) main_camera4_pane_t2_ParamLimits

0xb4dd,	// (0x0003ab09) main_camera4_pane_t2

0x0001,

0xf94b,	// (0x0003ef77) main_camera4_pane_t_ParamLimits

0xf94b,	// (0x0003ef77) main_camera4_pane_t

0xb53e,	// (0x0003ab6a) aid_touch_area_vid4_ParamLimits

0xb53e,	// (0x0003ab6a) aid_touch_area_vid4

0xb57e,	// (0x0003abaa) main_video4_pane_g5_ParamLimits

0xb57e,	// (0x0003abaa) main_video4_pane_g5

0xb5a2,	// (0x0003abce) vid4_progress_pane_ParamLimits

0xb5a2,	// (0x0003abce) vid4_progress_pane

0x2981,	// (0x00031fad) main_cset_slider_pane_g18_ParamLimits

0x2981,	// (0x00031fad) main_cset_slider_pane_g18

0x2bfe,	// (0x0003222a) cell_cam4_burst_pane_g2_ParamLimits

0x2bfe,	// (0x0003222a) cell_cam4_burst_pane_g2

0x0001,

0xfa9b,	// (0x0003f0c7) cell_cam4_burst_pane_g_ParamLimits

0xfa9b,	// (0x0003f0c7) cell_cam4_burst_pane_g

0xc2a9,	// (0x0003b8d5) bg_cl_pane_ParamLimits

0xc2a9,	// (0x0003b8d5) bg_cl_pane

0xc2b5,	// (0x0003b8e1) cl_header_pane_ParamLimits

0xc2b5,	// (0x0003b8e1) cl_header_pane

0xc2c1,	// (0x0003b8ed) cl_listscroll_pane_ParamLimits

0xc2c1,	// (0x0003b8ed) cl_listscroll_pane

0x2de8,	// (0x00032414) bg_cl_pane_g1

0x2df0,	// (0x0003241c) bg_cl_pane_g2

0x2df8,	// (0x00032424) bg_cl_pane_g3

0x2e00,	// (0x0003242c) bg_cl_pane_g4

0x2e08,	// (0x00032434) bg_cl_pane_g5

0x2e10,	// (0x0003243c) bg_cl_pane_g6

0x2e18,	// (0x00032444) bg_cl_pane_g7

0x2e20,	// (0x0003244c) bg_cl_pane_g8

0x2e28,	// (0x00032454) bg_cl_pane_g9

0x0008,

0xfad6,	// (0x0003f102) bg_cl_pane_g

0xc2cd,	// (0x0003b8f9) aid_height_cl_leading_ParamLimits

0xc2cd,	// (0x0003b8f9) aid_height_cl_leading

0xc2d9,	// (0x0003b905) aid_height_cl_text_ParamLimits

0xc2d9,	// (0x0003b905) aid_height_cl_text

0x6924,	// (0x00035f50) bg_cl_header_pane_ParamLimits

0x6924,	// (0x00035f50) bg_cl_header_pane

0xc2f1,	// (0x0003b91d) cl_header_pane_g1_ParamLimits

0xc2f1,	// (0x0003b91d) cl_header_pane_g1

0xc2fe,	// (0x0003b92a) cl_header_pane_t1_ParamLimits

0xc2fe,	// (0x0003b92a) cl_header_pane_t1

0x2e30,	// (0x0003245c) cl_list_pane

0x2954,	// (0x00031f80) hc_scroll_pane_cp01

0xe803,	// (0x0003de2f) bg_cl_header_pane_g1

0x2836,	// (0x00031e62) bg_cl_header_pane_g2

0xe823,	// (0x0003de4f) bg_cl_header_pane_g3

0x2846,	// (0x00031e72) bg_cl_header_pane_g4

0x283e,	// (0x00031e6a) bg_cl_header_pane_g5

0x2ac9,	// (0x000320f5) bg_cl_header_pane_g6

0x285e,	// (0x00031e8a) bg_cl_header_pane_g7

0x2866,	// (0x00031e92) bg_cl_header_pane_g8

0x2856,	// (0x00031e82) bg_cl_header_pane_g9

0x0008,

0xfae9,	// (0x0003f115) bg_cl_header_pane_g

0xc310,	// (0x0003b93c) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xc310,	// (0x0003b93c) hc_cl_list_double_graphic_heading_pane

0xbf86,	// (0x0003b5b2) hc_cl_list_single_graphic_pane_ParamLimits

0xbf86,	// (0x0003b5b2) hc_cl_list_single_graphic_pane

0xc320,	// (0x0003b94c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xc320,	// (0x0003b94c) hc_cl_list_single_graphic_pane_g1

0xc32c,	// (0x0003b958) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xc32c,	// (0x0003b958) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfafc,	// (0x0003f128) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfafc,	// (0x0003f128) hc_cl_list_single_graphic_pane_g

0xc340,	// (0x0003b96c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xc340,	// (0x0003b96c) hc_cl_list_single_graphic_pane_t1

0xc320,	// (0x0003b94c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xc320,	// (0x0003b94c) hc_cl_list_double_graphic_heading_pane_g1

0xc355,	// (0x0003b981) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xc355,	// (0x0003b981) hc_cl_list_double_graphic_heading_pane_g2

0xc369,	// (0x0003b995) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xc369,	// (0x0003b995) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb01,	// (0x0003f12d) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb01,	// (0x0003f12d) hc_cl_list_double_graphic_heading_pane_g

0xc37d,	// (0x0003b9a9) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xc37d,	// (0x0003b9a9) hc_cl_list_double_graphic_heading_pane_t1

0xc392,	// (0x0003b9be) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xc392,	// (0x0003b9be) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb08,	// (0x0003f134) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb08,	// (0x0003f134) hc_cl_list_double_graphic_heading_pane_t

0xc3b9,	// (0x0003b9e5) vid4_progress_pane_g1

0xc3c5,	// (0x0003b9f1) vid4_progress_pane_g2

0xc3d1,	// (0x0003b9fd) vid4_progress_pane_g3

0xc3e0,	// (0x0003ba0c) vid4_progress_pane_g4

0x0004,

0xfb0d,	// (0x0003f139) vid4_progress_pane_g

0xc3fe,	// (0x0003ba2a) vid4_progress_pane_t1

0xc414,	// (0x0003ba40) vid4_progress_pane_t2

0x0002,

0xfb18,	// (0x0003f144) vid4_progress_pane_t

0xc43f,	// (0x0003ba6b) wait_bar_pane_cp07

0x18c9,	// (0x00030ef5) blid_firmament_pane_ParamLimits

0x190c,	// (0x00030f38) popup_blid_sat_info2_window_g1

0x1930,	// (0x00030f5c) popup_blid_sat_info2_window_t3

0x193e,	// (0x00030f6a) popup_blid_sat_info2_window_t4

0x194c,	// (0x00030f78) popup_blid_sat_info2_window_t5

0x195a,	// (0x00030f86) popup_blid_sat_info2_window_t6

0x196a,	// (0x00030f96) popup_blid_sat_info2_window_t7

0x1978,	// (0x00030fa4) popup_blid_sat_info2_window_t8

0x1986,	// (0x00030fb2) popup_blid_sat_info2_window_t9

0x1994,	// (0x00030fc0) popup_blid_sat_info2_window_t10

0x1a5c,	// (0x00031088) aid_firma_cardinal_ParamLimits

0x1a70,	// (0x0003109c) blid_firmament_pane_t1_ParamLimits

0x1a87,	// (0x000310b3) blid_firmament_pane_t2_ParamLimits

0x1a9e,	// (0x000310ca) blid_firmament_pane_t3_ParamLimits

0x1ab5,	// (0x000310e1) blid_firmament_pane_t4_ParamLimits

0xf73a,	// (0x0003ed66) blid_firmament_pane_t_ParamLimits

0x1acc,	// (0x000310f8) blid_sat_info_pane_ParamLimits

0xf109,	// (0x0003e735) main_cam_set_pane_ParamLimits

0xaaae,	// (0x0003a0da) aid_size_cell_colour_35_ParamLimits

0xaac8,	// (0x0003a0f4) aid_size_cell_colour_112_ParamLimits

0xaadf,	// (0x0003a10b) aid_size_cell_effect_ParamLimits

0xf109,	// (0x0003e735) bg_tb_trans_pane_cp02_ParamLimits

0x0369,	// (0x0002f995) heading_imed_pane_ParamLimits

0xaaf9,	// (0x0003a125) listscroll_imed_pane_ParamLimits

0x0bd5,	// (0x00030201) popup_call2_audio_first_window_g5_ParamLimits

0x0bd5,	// (0x00030201) popup_call2_audio_first_window_g5

0xb1e1,	// (0x0003a80d) aid_size_touch_image3_arrow_left_ParamLimits

0xb1e1,	// (0x0003a80d) aid_size_touch_image3_arrow_left

0xb1f7,	// (0x0003a823) aid_size_touch_image3_arrow_right_ParamLimits

0xb1f7,	// (0x0003a823) aid_size_touch_image3_arrow_right

0xc42a,	// (0x0003ba56) vid4_progress_pane_t3

0xad99,	// (0x0003a3c5) main_hwr_training_symbol_option_pane_ParamLimits

0xad99,	// (0x0003a3c5) main_hwr_training_symbol_option_pane

0x230e,	// (0x0003193a) popup_hwr_training_preview_window_ParamLimits

0x230e,	// (0x0003193a) popup_hwr_training_preview_window

0xadfa,	// (0x0003a426) hwr_training_navi_pane_g5_ParamLimits

0xadfa,	// (0x0003a426) hwr_training_navi_pane_g5

0x2816,	// (0x00031e42) popup_char_count_window

0x6924,	// (0x00035f50) bg_popup_sub_pane_cp20_ParamLimits

0xbf6e,	// (0x0003b59a) list_vitu2_match_list_pane_ParamLimits

0xbf7a,	// (0x0003b5a6) vitu2_page_scroll_pane_ParamLimits

0xbf7a,	// (0x0003b5a6) vitu2_page_scroll_pane

0x2f33,	// (0x0003255f) list_single_hwr_training_symbol_option_pane_ParamLimits

0x2f33,	// (0x0003255f) list_single_hwr_training_symbol_option_pane

0x2f46,	// (0x00032572) list_single_hwr_training_symbol_option_pane_g1

0x2f4e,	// (0x0003257a) list_single_hwr_training_symbol_option_pane_t1

0x2f5c,	// (0x00032588) bg_button_pane_cp023

0x2f65,	// (0x00032591) bg_button_pane_cp024

0xc451,	// (0x0003ba7d) vitu2_page_scroll_pane_g1

0xc459,	// (0x0003ba85) vitu2_page_scroll_pane_g2

0x0001,

0xfb1f,	// (0x0003f14b) vitu2_page_scroll_pane_g

0xc463,	// (0x0003ba8f) vitu2_page_scroll_pane_t1

0x17e5,	// (0x00030e11) popup_char_count_window_g1

0x2f98,	// (0x000325c4) popup_char_count_window_g2

0x2fa1,	// (0x000325cd) popup_char_count_window_g3

0x0002,

0xfb24,	// (0x0003f150) popup_char_count_window_g

0x2faa,	// (0x000325d6) popup_char_count_window_t1

0xdc6f,	// (0x0003d29b) main_vded2_pane

0x200b,	// (0x00031637) aid_size_cell_imed_line

0x2015,	// (0x00031641) grid_imed_line_width_pane

0xb5f8,	// (0x0003ac24) vid4_indicators_pane_g4

0x2fb8,	// (0x000325e4) cell_imed_line_width_pane_ParamLimits

0x2fb8,	// (0x000325e4) cell_imed_line_width_pane

0x2fce,	// (0x000325fa) cell_imed_line_width_pane_g1

0x1877,	// (0x00030ea3) cell_imed_line_width_pane_g2

0x0001,

0xfb2b,	// (0x0003f157) cell_imed_line_width_pane_g

0xc472,	// (0x0003ba9e) main_vded2_pane_g1_ParamLimits

0xc472,	// (0x0003ba9e) main_vded2_pane_g1

0xc481,	// (0x0003baad) main_vded2_pane_g2_ParamLimits

0xc481,	// (0x0003baad) main_vded2_pane_g2

0x0001,

0xfb30,	// (0x0003f15c) main_vded2_pane_g_ParamLimits

0xfb30,	// (0x0003f15c) main_vded2_pane_g

0xc48f,	// (0x0003babb) vded2_slider_pane_ParamLimits

0xc48f,	// (0x0003babb) vded2_slider_pane

0xc49c,	// (0x0003bac8) aid_size_touch_vded2_end

0xc4a6,	// (0x0003bad2) aid_size_touch_vded2_playhead

0x2fd7,	// (0x00032603) aid_size_touch_vded2_start

0x2fdf,	// (0x0003260b) vded2_slider_bg_pane

0x2fe8,	// (0x00032614) vded2_slider_pane_g1

0x2ff1,	// (0x0003261d) vded2_slider_pane_g2

0xc4ae,	// (0x0003bada) vded2_slider_pane_g3

0x0002,

0xfb35,	// (0x0003f161) vded2_slider_pane_g

0x2ff9,	// (0x00032625) vded2_slider_bg_pane_g1

0x3002,	// (0x0003262e) vded2_slider_bg_pane_g2

0x300b,	// (0x00032637) vded2_slider_bg_pane_g3

0x0002,

0xf80a,	// (0x0003ee36) vded2_slider_bg_pane_g

0x8ee7,	// (0x00038513) aid_postcard_touch_down_pane_ParamLimits

0x8ee7,	// (0x00038513) aid_postcard_touch_down_pane

0x8ef7,	// (0x00038523) aid_postcard_touch_up_pane_ParamLimits

0x8ef7,	// (0x00038523) aid_postcard_touch_up_pane

0xdc6f,	// (0x0003d29b) main_blid2_pane

0x15b5,	// (0x00030be1) popup_blid2_search_window

0xdc6f,	// (0x0003d29b) blid2_gps_pane

0xdc6f,	// (0x0003d29b) blid2_navig_pane

0xdc6f,	// (0x0003d29b) blid2_search_pane

0xdc6f,	// (0x0003d29b) blid2_tripm_pane

0xc4b7,	// (0x0003bae3) blid2_search_pane_g1_ParamLimits

0xc4b7,	// (0x0003bae3) blid2_search_pane_g1

0xc4c7,	// (0x0003baf3) blid2_search_pane_t1_ParamLimits

0xc4c7,	// (0x0003baf3) blid2_search_pane_t1

0xc4d9,	// (0x0003bb05) aid_size_cell_blid2_gps_ParamLimits

0xc4d9,	// (0x0003bb05) aid_size_cell_blid2_gps

0xc4e9,	// (0x0003bb15) blid2_gps_pane_g1_ParamLimits

0xc4e9,	// (0x0003bb15) blid2_gps_pane_g1

0xc4f5,	// (0x0003bb21) grid_blid2_satellite_pane_ParamLimits

0xc4f5,	// (0x0003bb21) grid_blid2_satellite_pane

0xc503,	// (0x0003bb2f) blid2_navig_pane_g1_ParamLimits

0xc503,	// (0x0003bb2f) blid2_navig_pane_g1

0xc50f,	// (0x0003bb3b) blid2_navig_pane_t1_ParamLimits

0xc50f,	// (0x0003bb3b) blid2_navig_pane_t1

0xc521,	// (0x0003bb4d) blid2_navig_pane_t2_ParamLimits

0xc521,	// (0x0003bb4d) blid2_navig_pane_t2

0x0001,

0xfb3c,	// (0x0003f168) blid2_navig_pane_t_ParamLimits

0xfb3c,	// (0x0003f168) blid2_navig_pane_t

0xc533,	// (0x0003bb5f) blid2_navig_ring_pane_ParamLimits

0xc533,	// (0x0003bb5f) blid2_navig_ring_pane

0xc543,	// (0x0003bb6f) blid2_speed_pane_ParamLimits

0xc543,	// (0x0003bb6f) blid2_speed_pane

0xc54f,	// (0x0003bb7b) blid2_tripm_pane_g1_ParamLimits

0xc54f,	// (0x0003bb7b) blid2_tripm_pane_g1

0xc55f,	// (0x0003bb8b) blid2_tripm_pane_g2_ParamLimits

0xc55f,	// (0x0003bb8b) blid2_tripm_pane_g2

0xc56b,	// (0x0003bb97) blid2_tripm_pane_g3_ParamLimits

0xc56b,	// (0x0003bb97) blid2_tripm_pane_g3

0xc577,	// (0x0003bba3) blid2_tripm_pane_g4_ParamLimits

0xc577,	// (0x0003bba3) blid2_tripm_pane_g4

0xc583,	// (0x0003bbaf) blid2_tripm_pane_g5_ParamLimits

0xc583,	// (0x0003bbaf) blid2_tripm_pane_g5

0x0005,

0xfb41,	// (0x0003f16d) blid2_tripm_pane_g_ParamLimits

0xfb41,	// (0x0003f16d) blid2_tripm_pane_g

0xc59f,	// (0x0003bbcb) blid2_tripm_pane_t1_ParamLimits

0xc59f,	// (0x0003bbcb) blid2_tripm_pane_t1

0xc5b3,	// (0x0003bbdf) blid2_tripm_pane_t2_ParamLimits

0xc5b3,	// (0x0003bbdf) blid2_tripm_pane_t2

0xc5c5,	// (0x0003bbf1) blid2_tripm_pane_t3_ParamLimits

0xc5c5,	// (0x0003bbf1) blid2_tripm_pane_t3

0x0003,

0xfb4e,	// (0x0003f17a) blid2_tripm_pane_t_ParamLimits

0xfb4e,	// (0x0003f17a) blid2_tripm_pane_t

0xc5f7,	// (0x0003bc23) cell_blid2_satellite_pane_ParamLimits

0xc5f7,	// (0x0003bc23) cell_blid2_satellite_pane

0xc615,	// (0x0003bc41) cell_blid2_satellite_pane_g1

0x3014,	// (0x00032640) cell_blid2_satellite_pane_t1

0x1adc,	// (0x00031108) blid2_speed_pane_g1

0x3022,	// (0x0003264e) blid2_speed_pane_t1

0x3030,	// (0x0003265c) blid2_speed_pane_t2

0x0001,

0xfb57,	// (0x0003f183) blid2_speed_pane_t

0x1adc,	// (0x00031108) blid2_navig_ring_pane_g1

0xc61e,	// (0x0003bc4a) blid2_navig_ring_pane_g2

0xc626,	// (0x0003bc52) blid2_navig_ring_pane_g3

0xc62e,	// (0x0003bc5a) blid2_navig_ring_pane_g4

0xc636,	// (0x0003bc62) blid2_navig_ring_pane_g5

0x0004,

0xfb5c,	// (0x0003f188) blid2_navig_ring_pane_g

0xdc6f,	// (0x0003d29b) bg_popup_window_pane_cp011

0x303e,	// (0x0003266a) popup_blid2_search_window_g1

0x3046,	// (0x00032672) popup_blid2_search_window_t1

0x3054,	// (0x00032680) popup_blid2_search_window_t2

0x0001,

0xfb67,	// (0x0003f193) popup_blid2_search_window_t

0xe712,	// (0x0003dd3e) main_browser_pane_g1

0xe411,	// (0x0003da3d) main_browser_pane_ParamLimits

0xf109,	// (0x0003e735) bg_button_pane_cp011_ParamLimits

0xb865,	// (0x0003ae91) cell_vitu2_function_pane_g1_ParamLimits

0xf109,	// (0x0003e735) bg_popup_sub_pane_cp22_ParamLimits

0x5b24,	// (0x00035150) input_focus_pane_cp08_ParamLimits

0xc0c0,	// (0x0003b6ec) popup_vitu2_query_button_pane_ParamLimits

0xc0c0,	// (0x0003b6ec) popup_vitu2_query_button_pane

0x5b1a,	// (0x00035146) popup_vitu2_query_input_button_pane

0x2b54,	// (0x00032180) popup_vitu2_query_window_g1_ParamLimits

0x5b31,	// (0x0003515d) popup_vitu2_query_window_g2_ParamLimits

0xfa75,	// (0x0003f0a1) popup_vitu2_query_window_g_ParamLimits

0xdc6f,	// (0x0003d29b) bg_button_pane_cp026

0xc63e,	// (0x0003bc6a) popup_vitu2_query_input_button_pane_g1

0xdc6f,	// (0x0003d29b) bg_button_pane_cp025

0x3062,	// (0x0003268e) popup_vitu2_query_button_pane_t1

0xa070,	// (0x0003969c) main_mp3_pane_t6

0xa080,	// (0x000396ac) popup_slider_window_cp01

0xb4ef,	// (0x0003ab1b) cam4_battery_pane

0xb5d0,	// (0x0003abfc) cam4_battery_pane_cp02

0xc3a7,	// (0x0003b9d3) cam4_battery_pane_cp01

0xc3b1,	// (0x0003b9dd) cam4_battery_pane_cp03

0x1adc,	// (0x00031108) cam4_battery_pane_g1

0x2619,	// (0x00031c45) cam4_battery_pane_g2

0x0001,

0xfb6c,	// (0x0003f198) cam4_battery_pane_g

0x19a2,	// (0x00030fce) popup_blid_sat_info2_window_t11

0x8849,	// (0x00037e75) aid_size_touch_mv_arrow_left_ParamLimits

0x8874,	// (0x00037ea0) aid_size_touch_mv_arrow_right_ParamLimits

0xedcd,	// (0x0003e3f9) navi_pane_g1_ParamLimits

0x889d,	// (0x00037ec9) navi_pane_g2_ParamLimits

0x88cb,	// (0x00037ef7) navi_pane_g3_ParamLimits

0xf44c,	// (0x0003ea78) navi_pane_g_ParamLimits

0x8925,	// (0x00037f51) navi_pane_mv_t1_ParamLimits

0xab05,	// (0x0003a131) grid_imed_effect_pane_ParamLimits

0xe657,	// (0x0003dc83) aid_placing_vt_slider_lsc

0xe65f,	// (0x0003dc8b) aid_placing_vt_slider_prt

0xf109,	// (0x0003e735) bg_tb_trans_pane_cp01_ParamLimits

0x1c2c,	// (0x00031258) popup_image_details_window_g1_ParamLimits

0x1c3f,	// (0x0003126b) popup_image_details_window_g2_ParamLimits

0x1c54,	// (0x00031280) popup_image_details_window_g3_ParamLimits

0x1c54,	// (0x00031280) popup_image_details_window_g3

0xf77f,	// (0x0003edab) popup_image_details_window_g_ParamLimits

0x1c68,	// (0x00031294) popup_image_details_window_t1_ParamLimits

0x1c7a,	// (0x000312a6) popup_image_details_window_t2_ParamLimits

0x1c93,	// (0x000312bf) popup_image_details_window_t3_ParamLimits

0x1ca7,	// (0x000312d3) popup_image_details_window_t4_ParamLimits

0x1cc2,	// (0x000312ee) popup_image_details_window_t5_ParamLimits

0xf786,	// (0x0003edb2) popup_image_details_window_t_ParamLimits

0xc2e5,	// (0x0003b911) cl_header_name_pane_ParamLimits

0xc2e5,	// (0x0003b911) cl_header_name_pane

0xc646,	// (0x0003bc72) cl_header_name_pane_t1_ParamLimits

0xc646,	// (0x0003bc72) cl_header_name_pane_t1

0xc65d,	// (0x0003bc89) cl_header_name_pane_t2_ParamLimits

0xc65d,	// (0x0003bc89) cl_header_name_pane_t2

0xc687,	// (0x0003bcb3) cl_header_name_pane_t3_ParamLimits

0xc687,	// (0x0003bcb3) cl_header_name_pane_t3

0x0002,

0xfb71,	// (0x0003f19d) cl_header_name_pane_t_ParamLimits

0xfb71,	// (0x0003f19d) cl_header_name_pane_t

0x88f6,	// (0x00037f22) navi_pane_mv_g2_ParamLimits

0x27d3,	// (0x00031dff) field_vitu2_entry_pane_g1_ParamLimits

0x27df,	// (0x00031e0b) field_vitu2_entry_pane_g2_ParamLimits

0x27eb,	// (0x00031e17) field_vitu2_entry_pane_g3_ParamLimits

0x27eb,	// (0x00031e17) field_vitu2_entry_pane_g3

0xf974,	// (0x0003efa0) field_vitu2_entry_pane_g_ParamLimits

0xb7f5,	// (0x0003ae21) cell_vitu2_itu_pane_g1_ParamLimits

0xb805,	// (0x0003ae31) cell_vitu2_itu_pane_g2_ParamLimits

0xb805,	// (0x0003ae31) cell_vitu2_itu_pane_g2

0x0001,

0xf980,	// (0x0003efac) cell_vitu2_itu_pane_g_ParamLimits

0xf980,	// (0x0003efac) cell_vitu2_itu_pane_g

0xf109,	// (0x0003e735) bg_vkb2_func_pane_cp05_ParamLimits

0xf109,	// (0x0003e735) bg_vkb2_func_pane_cp05

0xf109,	// (0x0003e735) bg_vkb2_func_pane_cp03

0xf109,	// (0x0003e735) bg_vkb2_func_pane_cp04

0xf109,	// (0x0003e735) bg_vkb2_func_pane_cp10_ParamLimits

0xf109,	// (0x0003e735) bg_vkb2_func_pane_cp10

0x5c76,	// (0x000352a2) bg_vkb2_func_pane_cp08

0xc28f,	// (0x0003b8bb) bg_vkb2_func_pane_cp06

0xc29d,	// (0x0003b8c9) bg_vkb2_func_pane_cp07

0x2f6e,	// (0x0003259a) bg_vkb2_func_pane_cp11_ParamLimits

0x2f6e,	// (0x0003259a) bg_vkb2_func_pane_cp11

0x2f83,	// (0x000325af) bg_vkb2_func_pane_cp12_ParamLimits

0x2f83,	// (0x000325af) bg_vkb2_func_pane_cp12

0xdc6f,	// (0x0003d29b) bg_vkb2_func_pane_cp09

0x2836,	// (0x00031e62) bg_vkb2_func_pane_g1

0xe823,	// (0x0003de4f) bg_vkb2_func_pane_g2

0x283e,	// (0x00031e6a) bg_vkb2_func_pane_g3

0x2846,	// (0x00031e72) bg_vkb2_func_pane_g4

0x2ac9,	// (0x000320f5) bg_vkb2_func_pane_g5

0x285e,	// (0x00031e8a) bg_vkb2_func_pane_g6

0x2866,	// (0x00031e92) bg_vkb2_func_pane_g7

0x2856,	// (0x00031e82) bg_vkb2_func_pane_g8

0xe803,	// (0x0003de2f) bg_vkb2_func_pane_g9

0x0008,

0xfb78,	// (0x0003f1a4) bg_vkb2_func_pane_g

0xc591,	// (0x0003bbbd) blid2_tripm_pane_g6_ParamLimits

0xc591,	// (0x0003bbbd) blid2_tripm_pane_g6

0x25d3,	// (0x00031bff) mp4_progress_pane_g1

0xc5eb,	// (0x0003bc17) blid2_tripm_values_pane_ParamLimits

0xc5eb,	// (0x0003bc17) blid2_tripm_values_pane

0xc6ac,	// (0x0003bcd8) blid2_tripm_values_pane_t1

0xc6ba,	// (0x0003bce6) blid2_tripm_values_pane_t2

0xc6c8,	// (0x0003bcf4) blid2_tripm_values_pane_t3

0xc6d6,	// (0x0003bd02) blid2_tripm_values_pane_t4

0xc6e4,	// (0x0003bd10) blid2_tripm_values_pane_t5

0xc6f2,	// (0x0003bd1e) blid2_tripm_values_pane_t6

0xc700,	// (0x0003bd2c) blid2_tripm_values_pane_t7

0xc70e,	// (0x0003bd3a) blid2_tripm_values_pane_t8

0xc71c,	// (0x0003bd48) blid2_tripm_values_pane_t9

0x0008,

0xfb8b,	// (0x0003f1b7) blid2_tripm_values_pane_t

0x76e5,	// (0x00036d11) call_video_pane_t1_ParamLimits

0x76fb,	// (0x00036d27) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x0003e901) call_video_pane_t_ParamLimits

0x58a6,	// (0x00034ed2) msg_header_pane_g1_ParamLimits

0xefea,	// (0x0003e616) msg_header_pane_g2_ParamLimits

0xefea,	// (0x0003e616) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x0003eb1b) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x0003eb1b) msg_header_pane_g

0xe411,	// (0x0003da3d) main_clock2_pane_ParamLimits

0xa888,	// (0x00039eb4) grid_clock2_toolbar_pane_ParamLimits

0xa888,	// (0x00039eb4) grid_clock2_toolbar_pane

0xa888,	// (0x00039eb4) listscroll_clock2_pane_ParamLimits

0xa888,	// (0x00039eb4) listscroll_clock2_pane

0xa93c,	// (0x00039f68) main_clock2_pane_t3_ParamLimits

0xa93c,	// (0x00039f68) main_clock2_pane_t3

0xa94e,	// (0x00039f7a) main_clock2_pane_t4_ParamLimits

0xa94e,	// (0x00039f7a) main_clock2_pane_t4

0x3070,	// (0x0003269c) cell_clock2_toolbar_pane

0x3078,	// (0x000326a4) cell_clock2_toolbar_pane_cp01

0x3078,	// (0x000326a4) cell_clock2_toolbar_pane_cp02

0x3080,	// (0x000326ac) cell_clock2_toolbar_pane_cp03

0x3088,	// (0x000326b4) list_clock2_pane

0xed33,	// (0x0003e35f) scroll_pane_cp10

0x3090,	// (0x000326bc) list_single_clock2_pane_ParamLimits

0x3090,	// (0x000326bc) list_single_clock2_pane

0xee6d,	// (0x0003e499) list_highlight_pane_cp08

0x309d,	// (0x000326c9) list_single_clock2_pane_t1

0x30ab,	// (0x000326d7) list_single_clock2_pane_t2

0x0001,

0xfb9e,	// (0x0003f1ca) list_single_clock2_pane_t

0xdc6f,	// (0x0003d29b) bg_button_pane_cp10

0x30b9,	// (0x000326e5) cell_clock2_toolbar_pane_g1

0x8e49,	// (0x00038475) aid_main_viewer_pane_g1_ParamLimits

0x8e49,	// (0x00038475) aid_main_viewer_pane_g1

0x8e55,	// (0x00038481) aid_main_viewer_pane_g2_ParamLimits

0x8e55,	// (0x00038481) aid_main_viewer_pane_g2

0x8e61,	// (0x0003848d) aid_main_viewer_pane_g3_ParamLimits

0x8e61,	// (0x0003848d) aid_main_viewer_pane_g3

0x8e72,	// (0x0003849e) aid_main_viewer_pane_g4_ParamLimits

0x8e72,	// (0x0003849e) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x0003eb2c) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x0003eb2c) aid_main_viewer_pane_g

0x9602,	// (0x00038c2e) main_calc_pane_ParamLimits

0x960f,	// (0x00038c3b) main_dialer2_pane_ParamLimits

0xdc6f,	// (0x0003d29b) main_cam6_pane

0xdc6f,	// (0x0003d29b) main_vid6_pane

0xa894,	// (0x00039ec0) listscroll_gen_pane_cp06_ParamLimits

0xa894,	// (0x00039ec0) listscroll_gen_pane_cp06

0xa960,	// (0x00039f8c) main_clock2_pane_t5_ParamLimits

0xa960,	// (0x00039f8c) main_clock2_pane_t5

0xa9af,	// (0x00039fdb) aid_call2_pane_cp10_ParamLimits

0xa9c1,	// (0x00039fed) aid_call_pane_cp10_ParamLimits

0xeda2,	// (0x0003e3ce) popup_clock_analogue_window_cp10_g1_ParamLimits

0xeda2,	// (0x0003e3ce) popup_clock_analogue_window_cp10_g2_ParamLimits

0xa9d3,	// (0x00039fff) popup_clock_analogue_window_cp10_g3_ParamLimits

0xa9d3,	// (0x00039fff) popup_clock_analogue_window_cp10_g4_ParamLimits

0xeda2,	// (0x0003e3ce) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf836,	// (0x0003ee62) popup_clock_analogue_window_cp10_g_ParamLimits

0xa9e5,	// (0x0003a011) popup_clock_analogue_window_cp10_t1_ParamLimits

0xb18e,	// (0x0003a7ba) cell_dialer2_keypad_pane_g2_ParamLimits

0xb18e,	// (0x0003a7ba) cell_dialer2_keypad_pane_g2

0x0001,

0xf91c,	// (0x0003ef48) cell_dialer2_keypad_pane_g_ParamLimits

0xf91c,	// (0x0003ef48) cell_dialer2_keypad_pane_g

0xb1aa,	// (0x0003a7d6) cell_dialer2_keypad_pane_t1

0xbb42,	// (0x0003b16e) main_cset_text2_pane_ParamLimits

0xbb42,	// (0x0003b16e) main_cset_text2_pane

0x2d40,	// (0x0003236c) area_vitu2_query_pane_g1_ParamLimits

0x5ba1,	// (0x000351cd) area_vitu2_query_pane_g2_ParamLimits

0xfac2,	// (0x0003f0ee) area_vitu2_query_pane_g_ParamLimits

0x5c52,	// (0x0003527e) area_vitu2_query_pane_t7_ParamLimits

0x5c52,	// (0x0003527e) area_vitu2_query_pane_t7

0xc28f,	// (0x0003b8bb) bg_button_pane_cp018_ParamLimits

0xc29d,	// (0x0003b8c9) bg_button_pane_cp021_ParamLimits

0x5c76,	// (0x000352a2) bg_button_pane_cp022_ParamLimits

0x5c76,	// (0x000352a2) bg_vkb2_func_pane_cp08_ParamLimits

0xc28f,	// (0x0003b8bb) bg_vkb2_func_pane_cp06_ParamLimits

0xc29d,	// (0x0003b8c9) bg_vkb2_func_pane_cp07_ParamLimits

0x5c87,	// (0x000352b3) input_focus_pane_cp09_ParamLimits

0xc72a,	// (0x0003bd56) cam6_autofocus_pane_ParamLimits

0xc72a,	// (0x0003bd56) cam6_autofocus_pane

0xc74c,	// (0x0003bd78) cam6_image_uncrop_pane_ParamLimits

0xc74c,	// (0x0003bd78) cam6_image_uncrop_pane

0xc779,	// (0x0003bda5) cam6_indi_pane_ParamLimits

0xc779,	// (0x0003bda5) cam6_indi_pane

0xc793,	// (0x0003bdbf) cam6_mode_pane_ParamLimits

0xc793,	// (0x0003bdbf) cam6_mode_pane

0xc7a7,	// (0x0003bdd3) cam6_timer_pane_ParamLimits

0xc7a7,	// (0x0003bdd3) cam6_timer_pane

0xc7b3,	// (0x0003bddf) cam6_zoom_pane_ParamLimits

0xc7b3,	// (0x0003bddf) cam6_zoom_pane

0xb54e,	// (0x0003ab7a) cam6_mode_pane_g1_ParamLimits

0xb54e,	// (0x0003ab7a) cam6_mode_pane_g1

0xb566,	// (0x0003ab92) cam6_mode_pane_g2_ParamLimits

0xb566,	// (0x0003ab92) cam6_mode_pane_g2

0xb572,	// (0x0003ab9e) cam6_mode_pane_g3_ParamLimits

0xb572,	// (0x0003ab9e) cam6_mode_pane_g3

0xb57e,	// (0x0003abaa) cam6_mode_pane_g4_ParamLimits

0xb57e,	// (0x0003abaa) cam6_mode_pane_g4

0x0003,

0xfba3,	// (0x0003f1cf) cam6_mode_pane_g_ParamLimits

0xfba3,	// (0x0003f1cf) cam6_mode_pane_g

0x30cf,	// (0x000326fb) bg_tb_trans_pane_cp08_ParamLimits

0x30cf,	// (0x000326fb) bg_tb_trans_pane_cp08

0x30dd,	// (0x00032709) cam6_battery_pane_ParamLimits

0x30dd,	// (0x00032709) cam6_battery_pane

0x30f3,	// (0x0003271f) cam6_indi_pane_g1_ParamLimits

0x30f3,	// (0x0003271f) cam6_indi_pane_g1

0x3105,	// (0x00032731) cam6_indi_pane_g2_ParamLimits

0x3105,	// (0x00032731) cam6_indi_pane_g2

0x3117,	// (0x00032743) cam6_indi_pane_g3_ParamLimits

0x3117,	// (0x00032743) cam6_indi_pane_g3

0x0002,

0xfbac,	// (0x0003f1d8) cam6_indi_pane_g_ParamLimits

0xfbac,	// (0x0003f1d8) cam6_indi_pane_g

0x3129,	// (0x00032755) cam6_indi_pane_t1_ParamLimits

0x3129,	// (0x00032755) cam6_indi_pane_t1

0xb62e,	// (0x0003ac5a) cam6_autofocus_pane_g1

0xb636,	// (0x0003ac62) cam6_autofocus_pane_g2

0xb63e,	// (0x0003ac6a) cam6_autofocus_pane_g3

0xb646,	// (0x0003ac72) cam6_autofocus_pane_g4

0x0003,

0xfbb3,	// (0x0003f1df) cam6_autofocus_pane_g

0x314f,	// (0x0003277b) cam6_timer_pane_g1

0x3157,	// (0x00032783) cam6_timer_pane_t1

0x3165,	// (0x00032791) cam6_zoom_cont_pane

0x316d,	// (0x00032799) cam6_zoom_pane_g1

0x3175,	// (0x000327a1) cam6_zoom_pane_g2

0xc7d1,	// (0x0003bdfd) cam6_zoom_pane_g3

0x0002,

0xfbbc,	// (0x0003f1e8) cam6_zoom_pane_g

0x1adc,	// (0x00031108) cam6_battery_pane_g1

0x1adc,	// (0x00031108) cam6_battery_pane_g2

0x0001,

0xf743,	// (0x0003ed6f) cam6_battery_pane_g

0x317d,	// (0x000327a9) cam6_zoom_cont_pane_g1

0x3186,	// (0x000327b2) cam6_zoom_cont_pane_g2

0x318f,	// (0x000327bb) cam6_zoom_cont_pane_g3

0x0002,

0xfbc3,	// (0x0003f1ef) cam6_zoom_cont_pane_g

0xc7ee,	// (0x0003be1a) cam6_mode_pane_cp_ParamLimits

0xc7ee,	// (0x0003be1a) cam6_mode_pane_cp

0xc7b3,	// (0x0003bddf) cam6_zoom_pane_cp_ParamLimits

0xc7b3,	// (0x0003bddf) cam6_zoom_pane_cp

0xc802,	// (0x0003be2e) vid6_image_uncrop_cif_pane_ParamLimits

0xc802,	// (0x0003be2e) vid6_image_uncrop_cif_pane

0xc82e,	// (0x0003be5a) vid6_image_uncrop_nhd_pane_ParamLimits

0xc82e,	// (0x0003be5a) vid6_image_uncrop_nhd_pane

0xc74c,	// (0x0003bd78) vid6_image_uncrop_vga_pane_ParamLimits

0xc74c,	// (0x0003bd78) vid6_image_uncrop_vga_pane

0xc84d,	// (0x0003be79) vid6_image_uncrop_wvga_pane_ParamLimits

0xc84d,	// (0x0003be79) vid6_image_uncrop_wvga_pane

0xc86c,	// (0x0003be98) vid6_indi_pane_ParamLimits

0xc86c,	// (0x0003be98) vid6_indi_pane

0x30cf,	// (0x000326fb) bg_tb_trans_pane_cp09_ParamLimits

0x30cf,	// (0x000326fb) bg_tb_trans_pane_cp09

0x31a7,	// (0x000327d3) cam6_battery_pane_cp_ParamLimits

0x31a7,	// (0x000327d3) cam6_battery_pane_cp

0x31b3,	// (0x000327df) vid6_indi_pane_g1_ParamLimits

0x31b3,	// (0x000327df) vid6_indi_pane_g1

0x31c5,	// (0x000327f1) vid6_indi_pane_g2_ParamLimits

0x31c5,	// (0x000327f1) vid6_indi_pane_g2

0x31d7,	// (0x00032803) vid6_indi_pane_g3_ParamLimits

0x31d7,	// (0x00032803) vid6_indi_pane_g3

0x31ee,	// (0x0003281a) vid6_indi_pane_g4_ParamLimits

0x31ee,	// (0x0003281a) vid6_indi_pane_g4

0x3205,	// (0x00032831) vid6_indi_pane_g5_ParamLimits

0x3205,	// (0x00032831) vid6_indi_pane_g5

0x0004,

0xfbca,	// (0x0003f1f6) vid6_indi_pane_g_ParamLimits

0xfbca,	// (0x0003f1f6) vid6_indi_pane_g

0x321f,	// (0x0003284b) vid6_indi_pane_t1_ParamLimits

0x321f,	// (0x0003284b) vid6_indi_pane_t1

0x3235,	// (0x00032861) vid6_indi_pane_t2_ParamLimits

0x3235,	// (0x00032861) vid6_indi_pane_t2

0x325d,	// (0x00032889) vid6_indi_pane_t3_ParamLimits

0x325d,	// (0x00032889) vid6_indi_pane_t3

0x3285,	// (0x000328b1) vid6_indi_pane_t4_ParamLimits

0x3285,	// (0x000328b1) vid6_indi_pane_t4

0x0003,

0xfbd5,	// (0x0003f201) vid6_indi_pane_t_ParamLimits

0xfbd5,	// (0x0003f201) vid6_indi_pane_t

0x32a9,	// (0x000328d5) wait_bar_pane_cp08

0xc891,	// (0x0003bebd) main_cset_text2_pane_t1_ParamLimits

0xc891,	// (0x0003bebd) main_cset_text2_pane_t1

0xc7d9,	// (0x0003be05) listscroll_gen_pane_cp06_t1_ParamLimits

0xc7d9,	// (0x0003be05) listscroll_gen_pane_cp06_t1

0xdc6f,	// (0x0003d29b) main_cam6_set_pane

0x1d0c,	// (0x00031338) bg_tb_trans_pane_cp06_ParamLimits

0xb4f7,	// (0x0003ab23) cam4_indicators_pane_g1_ParamLimits

0xb504,	// (0x0003ab30) cam4_indicators_pane_g2_ParamLimits

0xf950,	// (0x0003ef7c) cam4_indicators_pane_g_ParamLimits

0xb524,	// (0x0003ab50) cam4_indicators_pane_t1_ParamLimits

0xf109,	// (0x0003e735) bg_tb_trans_pane_cp07_ParamLimits

0xb4f7,	// (0x0003ab23) vid4_indicators_pane_g1_ParamLimits

0xb5da,	// (0x0003ac06) vid4_indicators_pane_g2_ParamLimits

0xb5e7,	// (0x0003ac13) vid4_indicators_pane_g3_ParamLimits

0xb5f8,	// (0x0003ac24) vid4_indicators_pane_g4_ParamLimits

0xf962,	// (0x0003ef8e) vid4_indicators_pane_g_ParamLimits

0xb614,	// (0x0003ac40) vid4_indicators_pane_t1_ParamLimits

0xc3b9,	// (0x0003b9e5) vid4_progress_pane_g1_ParamLimits

0xc3c5,	// (0x0003b9f1) vid4_progress_pane_g2_ParamLimits

0xc3d1,	// (0x0003b9fd) vid4_progress_pane_g3_ParamLimits

0xc3e0,	// (0x0003ba0c) vid4_progress_pane_g4_ParamLimits

0xfb0d,	// (0x0003f139) vid4_progress_pane_g_ParamLimits

0xc3fe,	// (0x0003ba2a) vid4_progress_pane_t1_ParamLimits

0xc414,	// (0x0003ba40) vid4_progress_pane_t2_ParamLimits

0xc42a,	// (0x0003ba56) vid4_progress_pane_t3_ParamLimits

0xfb18,	// (0x0003f144) vid4_progress_pane_t_ParamLimits

0xc43f,	// (0x0003ba6b) wait_bar_pane_cp07_ParamLimits

0xc8b8,	// (0x0003bee4) main_cam6_set_pane_g2_ParamLimits

0xc8b8,	// (0x0003bee4) main_cam6_set_pane_g2

0xc8c4,	// (0x0003bef0) main_cset6_listscroll_pane_ParamLimits

0xc8c4,	// (0x0003bef0) main_cset6_listscroll_pane

0xc8f1,	// (0x0003bf1d) main_cset6_slider_pane_ParamLimits

0xc8f1,	// (0x0003bf1d) main_cset6_slider_pane

0xc8fd,	// (0x0003bf29) main_cset6_text2_pane_ParamLimits

0xc8fd,	// (0x0003bf29) main_cset6_text2_pane

0x32b8,	// (0x000328e4) main_cset6_text_pane

0x32c0,	// (0x000328ec) main_cset_list_pane_copy1_ParamLimits

0x32c0,	// (0x000328ec) main_cset_list_pane_copy1

0x32d0,	// (0x000328fc) scroll_pane_cp028_copy1

0xc910,	// (0x0003bf3c) cset_list_set_pane_copy1

0xc920,	// (0x0003bf4c) aid_position_infowindow_above_copy1

0xc928,	// (0x0003bf54) aid_position_infowindow_below_copy1

0x5ce0,	// (0x0003530c) cset_list_set_pane_g1_copy1

0x5ce8,	// (0x00035314) cset_list_set_pane_g3_copy1_ParamLimits

0x5ce8,	// (0x00035314) cset_list_set_pane_g3_copy1

0x5cf7,	// (0x00035323) cset_list_set_pane_t1_copy1_ParamLimits

0x5cf7,	// (0x00035323) cset_list_set_pane_t1_copy1

0xf109,	// (0x0003e735) list_highlight_pane_cp021_copy1_ParamLimits

0xf109,	// (0x0003e735) list_highlight_pane_cp021_copy1

0x32fd,	// (0x00032929) cset6_slider_pane_ParamLimits

0x32fd,	// (0x00032929) cset6_slider_pane

0x3329,	// (0x00032955) main_cset6_slider_pane_g1_ParamLimits

0x3329,	// (0x00032955) main_cset6_slider_pane_g1

0xc930,	// (0x0003bf5c) main_cset6_slider_pane_g2_ParamLimits

0xc930,	// (0x0003bf5c) main_cset6_slider_pane_g2

0x3351,	// (0x0003297d) main_cset6_slider_pane_g3_ParamLimits

0x3351,	// (0x0003297d) main_cset6_slider_pane_g3

0xc958,	// (0x0003bf84) main_cset6_slider_pane_g4_ParamLimits

0xc958,	// (0x0003bf84) main_cset6_slider_pane_g4

0xc964,	// (0x0003bf90) main_cset6_slider_pane_g5_ParamLimits

0xc964,	// (0x0003bf90) main_cset6_slider_pane_g5

0x2969,	// (0x00031f95) main_cset6_slider_pane_g7_ParamLimits

0x2969,	// (0x00031f95) main_cset6_slider_pane_g7

0x2975,	// (0x00031fa1) main_cset6_slider_pane_g8_ParamLimits

0x2975,	// (0x00031fa1) main_cset6_slider_pane_g8

0xc970,	// (0x0003bf9c) main_cset6_slider_pane_g9_ParamLimits

0xc970,	// (0x0003bf9c) main_cset6_slider_pane_g9

0xc97c,	// (0x0003bfa8) main_cset6_slider_pane_g10_ParamLimits

0xc97c,	// (0x0003bfa8) main_cset6_slider_pane_g10

0xc988,	// (0x0003bfb4) main_cset6_slider_pane_g11_ParamLimits

0xc988,	// (0x0003bfb4) main_cset6_slider_pane_g11

0xc994,	// (0x0003bfc0) main_cset6_slider_pane_g12_ParamLimits

0xc994,	// (0x0003bfc0) main_cset6_slider_pane_g12

0xc9a0,	// (0x0003bfcc) main_cset6_slider_pane_g13_ParamLimits

0xc9a0,	// (0x0003bfcc) main_cset6_slider_pane_g13

0xc9ac,	// (0x0003bfd8) main_cset6_slider_pane_g14_ParamLimits

0xc9ac,	// (0x0003bfd8) main_cset6_slider_pane_g14

0xc9b8,	// (0x0003bfe4) main_cset6_slider_pane_g15_ParamLimits

0xc9b8,	// (0x0003bfe4) main_cset6_slider_pane_g15

0xc9d0,	// (0x0003bffc) main_cset6_slider_pane_g16_ParamLimits

0xc9d0,	// (0x0003bffc) main_cset6_slider_pane_g16

0xc9dc,	// (0x0003c008) main_cset6_slider_pane_g17_ParamLimits

0xc9dc,	// (0x0003c008) main_cset6_slider_pane_g17

0x0011,

0xfbde,	// (0x0003f20a) main_cset6_slider_pane_g_ParamLimits

0xfbde,	// (0x0003f20a) main_cset6_slider_pane_g

0x335d,	// (0x00032989) main_cset6_slider_pane_t1_ParamLimits

0x335d,	// (0x00032989) main_cset6_slider_pane_t1

0xca00,	// (0x0003c02c) main_cset6_slider_pane_t2_ParamLimits

0xca00,	// (0x0003c02c) main_cset6_slider_pane_t2

0xca2b,	// (0x0003c057) main_cset6_slider_pane_t3_ParamLimits

0xca2b,	// (0x0003c057) main_cset6_slider_pane_t3

0xca56,	// (0x0003c082) main_cset6_slider_pane_t4_ParamLimits

0xca56,	// (0x0003c082) main_cset6_slider_pane_t4

0xca81,	// (0x0003c0ad) main_cset6_slider_pane_t5_ParamLimits

0xca81,	// (0x0003c0ad) main_cset6_slider_pane_t5

0x339e,	// (0x000329ca) main_cset6_slider_pane_t7_ParamLimits

0x339e,	// (0x000329ca) main_cset6_slider_pane_t7

0xcaac,	// (0x0003c0d8) main_cset6_slider_pane_t8_ParamLimits

0xcaac,	// (0x0003c0d8) main_cset6_slider_pane_t8

0xcad0,	// (0x0003c0fc) main_cset6_slider_pane_t9_ParamLimits

0xcad0,	// (0x0003c0fc) main_cset6_slider_pane_t9

0xcaf4,	// (0x0003c120) main_cset6_slider_pane_t10_ParamLimits

0xcaf4,	// (0x0003c120) main_cset6_slider_pane_t10

0xcb18,	// (0x0003c144) main_cset6_slider_pane_t11_ParamLimits

0xcb18,	// (0x0003c144) main_cset6_slider_pane_t11

0x33d4,	// (0x00032a00) main_cset6_slider_pane_t14_ParamLimits

0x33d4,	// (0x00032a00) main_cset6_slider_pane_t14

0x340d,	// (0x00032a39) main_cset6_slider_pane_t15_ParamLimits

0x340d,	// (0x00032a39) main_cset6_slider_pane_t15

0x000b,

0xfc03,	// (0x0003f22f) main_cset6_slider_pane_t_ParamLimits

0xfc03,	// (0x0003f22f) main_cset6_slider_pane_t

0x3446,	// (0x00032a72) cset_slider_pane_g1_copy1

0x344f,	// (0x00032a7b) cset_slider_pane_g2_copy1

0x3458,	// (0x00032a84) cset_slider_pane_g3_copy1

0xdc6f,	// (0x0003d29b) bg_popup_sub_pane_cp011_copy1

0x2b60,	// (0x0003218c) main_cset_text_pane_g1_copy1

0x2b68,	// (0x00032194) main_cset_text_pane_t1_copy1

0x2b76,	// (0x000321a2) main_cset_text_pane_t2_copy1

0x2b84,	// (0x000321b0) main_cset_text_pane_t3_copy1

0x2b92,	// (0x000321be) main_cset_text_pane_t4_copy1

0x2ba0,	// (0x000321cc) main_cset_text_pane_t5_copy1

0x2bae,	// (0x000321da) main_cset_text_pane_t6_copy1

0x2bbc,	// (0x000321e8) main_cset_text_pane_t7_copy1

0xcb3c,	// (0x0003c168) main_cset_text2_pane_t1_copy1

0xdc6f,	// (0x0003d29b) main_ncimui_pane

0x9654,	// (0x00038c80) popup_query_ncimui_window_ParamLimits

0x9654,	// (0x00038c80) popup_query_ncimui_window

0x596b,	// (0x00034f97) field_cale_ev2_pane_g4_ParamLimits

0x596b,	// (0x00034f97) field_cale_ev2_pane_g4

0xaece,	// (0x0003a4fa) cell_video_dialer_keypad_pane_g2_ParamLimits

0xaece,	// (0x0003a4fa) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8f7,	// (0x0003ef23) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8f7,	// (0x0003ef23) cell_video_dialer_keypad_pane_g

0xaee6,	// (0x0003a512) cell_video_dialer_keypad_pane_t1

0xdc6f,	// (0x0003d29b) bg_popup_window_pane_cp012

0xec1f,	// (0x0003e24b) heading_pane_cp06

0x3550,	// (0x00032b7c) ncim_query_content_pane

0xdc6f,	// (0x0003d29b) bg_popup_heading_pane_cp01

0x3558,	// (0x00032b84) ncim_heading_pane_t1

0x3566,	// (0x00032b92) ncim_indicator_popup_pane

0x3578,	// (0x00032ba4) ncim_query_button_pane

0x358e,	// (0x00032bba) ncim_query_content_pane_t1

0x35a0,	// (0x00032bcc) ncim_query_content_pane_t2

0x0005,

0xfc42,	// (0x0003f26e) ncim_query_content_pane_t

0x35da,	// (0x00032c06) ncim_query_list_pane

0x35ec,	// (0x00032c18) ncim_query_popup_pane

0x3566,	// (0x00032b92) ncim_indicator_popup_pane_ParamLimits

0xcc31,	// (0x0003c25d) ncim_query_content_pane_g1_ParamLimits

0xcc31,	// (0x0003c25d) ncim_query_content_pane_g1

0x358e,	// (0x00032bba) ncim_query_content_pane_t1_ParamLimits

0x35a0,	// (0x00032bcc) ncim_query_content_pane_t2_ParamLimits

0xcc3d,	// (0x0003c269) ncim_query_content_pane_t3_ParamLimits

0xcc3d,	// (0x0003c269) ncim_query_content_pane_t3

0xcc5a,	// (0x0003c286) ncim_query_content_pane_t4_ParamLimits

0xcc5a,	// (0x0003c286) ncim_query_content_pane_t4

0xcc77,	// (0x0003c2a3) ncim_query_content_pane_t5_ParamLimits

0xcc77,	// (0x0003c2a3) ncim_query_content_pane_t5

0x35b2,	// (0x00032bde) ncim_query_content_pane_t6_ParamLimits

0x35b2,	// (0x00032bde) ncim_query_content_pane_t6

0xfc42,	// (0x0003f26e) ncim_query_content_pane_t_ParamLimits

0x35da,	// (0x00032c06) ncim_query_list_pane_ParamLimits

0x35ec,	// (0x00032c18) ncim_query_popup_pane_ParamLimits

0x3600,	// (0x00032c2c) wait_bar_pane_cp04

0xdc6f,	// (0x0003d29b) input_focus_pane_cp011

0x3608,	// (0x00032c34) ncim_query_popup_pane_t1

0x3616,	// (0x00032c42) ncim_list_query_list_pane_ParamLimits

0x3616,	// (0x00032c42) ncim_list_query_list_pane

0xdc6f,	// (0x0003d29b) bg_button_pane_cp027

0x3629,	// (0x00032c55) ncim_query_button_pane_g1

0xdc6f,	// (0x0003d29b) list_highlight_pane_cp012

0x3633,	// (0x00032c5f) ncim_list_query_list_pane_g1

0x363b,	// (0x00032c67) ncim_list_query_list_pane_t1

0xb514,	// (0x0003ab40) cam4_indicators_pane_g3_ParamLimits

0xb514,	// (0x0003ab40) cam4_indicators_pane_g3

0xb604,	// (0x0003ac30) vid4_indicators_pane_g5_ParamLimits

0xb604,	// (0x0003ac30) vid4_indicators_pane_g5

0xc3ef,	// (0x0003ba1b) vid4_progress_pane_g5_ParamLimits

0xc3ef,	// (0x0003ba1b) vid4_progress_pane_g5

0xcb6b,	// (0x0003c197) main_ncimui_pane_g1

0xcbb5,	// (0x0003c1e1) ncimui_group_query_pane_ParamLimits

0xcbb5,	// (0x0003c1e1) ncimui_group_query_pane

0xcbf3,	// (0x0003c21f) ncimui_list_pane_ParamLimits

0xcbf3,	// (0x0003c21f) ncimui_list_pane

0xcc0d,	// (0x0003c239) ncimui_text_pane_ParamLimits

0xcc0d,	// (0x0003c239) ncimui_text_pane

0xcc94,	// (0x0003c2c0) ncimui_text_pane_t1_ParamLimits

0xcc94,	// (0x0003c2c0) ncimui_text_pane_t1

0x3649,	// (0x00032c75) ncimui_list_single_graphic_pane_ParamLimits

0x3649,	// (0x00032c75) ncimui_list_single_graphic_pane

0xccb3,	// (0x0003c2df) ncimui_query_pane_ParamLimits

0xccb3,	// (0x0003c2df) ncimui_query_pane

0xdc6f,	// (0x0003d29b) list_highlight_pane_cp013

0x3659,	// (0x00032c85) ncim_list_query_list_pane_t1_copy1

0x3633,	// (0x00032c5f) ncim_list_single_graphic_pane_g1

0x3667,	// (0x00032c93) ncim_query_button_pane_cp01

0x366f,	// (0x00032c9b) ncim_query_entry_pane_ParamLimits

0x366f,	// (0x00032c9b) ncim_query_entry_pane

0x367f,	// (0x00032cab) ncimui_query_pane_g1

0x3687,	// (0x00032cb3) ncimui_query_pane_t1_ParamLimits

0x3687,	// (0x00032cb3) ncimui_query_pane_t1

0xdc6f,	// (0x0003d29b) input_focus_pane_cp012

0x3608,	// (0x00032c34) ncim_query_entry_pane_t1

0xe411,	// (0x0003da3d) main_im_pane_ParamLimits

0xf109,	// (0x0003e735) main_mobtv_pane_ParamLimits

0xf109,	// (0x0003e735) main_mobtv_pane

0xc9e8,	// (0x0003c014) main_cset6_slider_pane_g18_ParamLimits

0xc9e8,	// (0x0003c014) main_cset6_slider_pane_g18

0xc9f4,	// (0x0003c020) main_cset6_slider_pane_g19_ParamLimits

0xc9f4,	// (0x0003c020) main_cset6_slider_pane_g19

0x27eb,	// (0x00031e17) bg_main_mobtv_pane_ParamLimits

0x27eb,	// (0x00031e17) bg_main_mobtv_pane

0xccc3,	// (0x0003c2ef) main_mobtv_info_pane

0xccce,	// (0x0003c2fa) main_mobtv_loading_pane_ParamLimits

0xccce,	// (0x0003c2fa) main_mobtv_loading_pane

0x36ab,	// (0x00032cd7) main_mobtv_pg_channel_list_pane

0x36b5,	// (0x00032ce1) main_mobtv_pg_hdr_pane

0xccdb,	// (0x0003c307) main_mobtv_programe_curr_pane_ParamLimits

0xccdb,	// (0x0003c307) main_mobtv_programe_curr_pane

0xcce8,	// (0x0003c314) main_mobtv_programe_next_pane_ParamLimits

0xcce8,	// (0x0003c314) main_mobtv_programe_next_pane

0x36be,	// (0x00032cea) popup_mobtv_noti_window

0x1adc,	// (0x00031108) main_tv_pg_hdr_pane_g1

0x36c8,	// (0x00032cf4) main_tv_pg_hdr_pane_g2

0x36d0,	// (0x00032cfc) main_tv_pg_hdr_pane_g3

0x36d8,	// (0x00032d04) main_tv_pg_hdr_pane_g4

0x36e0,	// (0x00032d0c) main_tv_pg_hdr_pane_g5

0x36ea,	// (0x00032d16) main_tv_pg_hdr_pane_g6

0x36f4,	// (0x00032d20) main_tv_pg_hdr_pane_g7

0x36fe,	// (0x00032d2a) main_tv_pg_hdr_pane_g8

0x3708,	// (0x00032d34) main_tv_pg_hdr_pane_g9

0x3712,	// (0x00032d3e) main_tv_pg_hdr_pane_g10

0x371c,	// (0x00032d48) main_tv_pg_hdr_pane_g11

0x000a,

0xfc4f,	// (0x0003f27b) main_tv_pg_hdr_pane_g

0x3726,	// (0x00032d52) main_tv_pg_hdr_pane_t1

0x3734,	// (0x00032d60) main_tv_pg_hdr_pane_t2

0x3742,	// (0x00032d6e) main_tv_pg_hdr_pane_t3

0x3752,	// (0x00032d7e) main_tv_pg_hdr_pane_t4

0x3762,	// (0x00032d8e) main_tv_pg_hdr_pane_t5

0x0004,

0xfc66,	// (0x0003f292) main_tv_pg_hdr_pane_t

0x3772,	// (0x00032d9e) single_mobtv_pg_channel_pane_ParamLimits

0x3772,	// (0x00032d9e) single_mobtv_pg_channel_pane

0x3784,	// (0x00032db0) single_mobtv_pg_channel_table_pane

0x378d,	// (0x00032db9) single_mobtv_pg_channel_thumb_pane

0x3796,	// (0x00032dc2) single_tv_pg_channel_pane_g1

0x379f,	// (0x00032dcb) single_tv_pg_channel_pane_g2

0x0001,

0xfc71,	// (0x0003f29d) single_tv_pg_channel_pane_g

0x1d0c,	// (0x00031338) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x1d0c,	// (0x00031338) bg_single_mobtv_pg_channel_thumb_pane

0x37a8,	// (0x00032dd4) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x37a8,	// (0x00032dd4) single_mobtv_pg_channel_thumb_pane_g1

0x37b6,	// (0x00032de2) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x37b6,	// (0x00032de2) single_mobtv_pg_channel_thumb_pane_g2

0x37c2,	// (0x00032dee) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x37c2,	// (0x00032dee) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc76,	// (0x0003f2a2) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc76,	// (0x0003f2a2) single_mobtv_pg_channel_thumb_pane_g

0x37ce,	// (0x00032dfa) single_mobtv_pg_channel_thumb_pane_t1

0x37dc,	// (0x00032e08) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc7d,	// (0x0003f2a9) single_mobtv_pg_channel_thumb_pane_t

0x1adc,	// (0x00031108) bg_single_mobtv_pg_channel_table_pane_g1

0x1adc,	// (0x00031108) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf743,	// (0x0003ed6f) bg_single_mobtv_pg_channel_table_pane_g

0x37ea,	// (0x00032e16) single_mobtv_pg_channel_table_pane_t1

0x37f8,	// (0x00032e24) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc82,	// (0x0003f2ae) single_mobtv_pg_channel_table_pane_t

0xccfd,	// (0x0003c329) main_mobtv_info_pane_g1_ParamLimits

0xccfd,	// (0x0003c329) main_mobtv_info_pane_g1

0xcd19,	// (0x0003c345) main_mobtv_info_pane_t1_ParamLimits

0xcd19,	// (0x0003c345) main_mobtv_info_pane_t1

0xcd91,	// (0x0003c3bd) main_mobtv_info_pane_t2_ParamLimits

0xcd91,	// (0x0003c3bd) main_mobtv_info_pane_t2

0x0002,

0xfc8c,	// (0x0003f2b8) main_mobtv_info_pane_t_ParamLimits

0xfc8c,	// (0x0003f2b8) main_mobtv_info_pane_t

0xce24,	// (0x0003c450) wait_bar_pane_cp05

0xce36,	// (0x0003c462) main_mobtv_loading_pane_g1_ParamLimits

0xce36,	// (0x0003c462) main_mobtv_loading_pane_g1

0xce42,	// (0x0003c46e) main_mobtv_loading_pane_g2_ParamLimits

0xce42,	// (0x0003c46e) main_mobtv_loading_pane_g2

0xce4e,	// (0x0003c47a) main_mobtv_loading_pane_g3_ParamLimits

0xce4e,	// (0x0003c47a) main_mobtv_loading_pane_g3

0x0002,

0xfc93,	// (0x0003f2bf) main_mobtv_loading_pane_g_ParamLimits

0xfc93,	// (0x0003f2bf) main_mobtv_loading_pane_g

0x3806,	// (0x00032e32) main_mobtv_loading_pane_t1_ParamLimits

0x3806,	// (0x00032e32) main_mobtv_loading_pane_t1

0x381e,	// (0x00032e4a) main_mobtv_loading_pane_t2_ParamLimits

0x381e,	// (0x00032e4a) main_mobtv_loading_pane_t2

0x0001,

0xfc9a,	// (0x0003f2c6) main_mobtv_loading_pane_t_ParamLimits

0xfc9a,	// (0x0003f2c6) main_mobtv_loading_pane_t

0xce5c,	// (0x0003c488) wait_bar_pane_cp06_ParamLimits

0xce5c,	// (0x0003c488) wait_bar_pane_cp06

0x3842,	// (0x00032e6e) main_mobtv_programe_curr_pane_t1

0x3850,	// (0x00032e7c) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc9f,	// (0x0003f2cb) main_mobtv_programe_curr_pane_t

0x385e,	// (0x00032e8a) main_mobtv_programe_next_pane_t1

0x386c,	// (0x00032e98) main_mobtv_programe_next_pane_t2

0x387a,	// (0x00032ea6) main_mobtv_programe_next_pane_t3

0x0002,

0xfca4,	// (0x0003f2d0) main_mobtv_programe_next_pane_t

0xdc6f,	// (0x0003d29b) bg_popup_mobtv_noti_window_pane

0x3888,	// (0x00032eb4) popup_mobtv_noti_window_g1

0x3890,	// (0x00032ebc) popup_mobtv_noti_window_t1

0x389e,	// (0x00032eca) popup_mobtv_noti_window_t2

0x0001,

0xfcab,	// (0x0003f2d7) popup_mobtv_noti_window_t

0x1adc,	// (0x00031108) bg_popup_mobtv_noti_window_pane_g1

0xdc6f,	// (0x0003d29b) sc_clock_pane

0xdc6f,	// (0x0003d29b) main_fs_bigclock_pane

0xc5d9,	// (0x0003bc05) blid2_tripm_pane_t4_ParamLimits

0xc5d9,	// (0x0003bc05) blid2_tripm_pane_t4

0xce68,	// (0x0003c494) sc_clock_pane_g1_ParamLimits

0xce68,	// (0x0003c494) sc_clock_pane_g1

0xce76,	// (0x0003c4a2) sc_clock_pane_t1_ParamLimits

0xce76,	// (0x0003c4a2) sc_clock_pane_t1

0xce8b,	// (0x0003c4b7) sc_clock_pane_t2_ParamLimits

0xce8b,	// (0x0003c4b7) sc_clock_pane_t2

0xce9d,	// (0x0003c4c9) sc_clock_pane_t3_ParamLimits

0xce9d,	// (0x0003c4c9) sc_clock_pane_t3

0x0004,

0xfcb0,	// (0x0003f2dc) sc_clock_pane_t_ParamLimits

0xfcb0,	// (0x0003f2dc) sc_clock_pane_t

0xd677,	// (0x0003cca3) main_fs_bigclock_indicator_pane_ParamLimits

0xd677,	// (0x0003cca3) main_fs_bigclock_indicator_pane

0xcf24,	// (0x0003c550) main_fs_bigclock_pane_g1_ParamLimits

0xcf24,	// (0x0003c550) main_fs_bigclock_pane_g1

0xd683,	// (0x0003ccaf) main_fs_bigclock_pane_t1_ParamLimits

0xd683,	// (0x0003ccaf) main_fs_bigclock_pane_t1

0xd695,	// (0x0003ccc1) main_fs_bigclock_pane_t2_ParamLimits

0xd695,	// (0x0003ccc1) main_fs_bigclock_pane_t2

0xd6a9,	// (0x0003ccd5) main_fs_bigclock_pane_t3_ParamLimits

0xd6a9,	// (0x0003ccd5) main_fs_bigclock_pane_t3

0x0002,

0xfeaf,	// (0x0003f4db) main_fs_bigclock_pane_t_ParamLimits

0xfeaf,	// (0x0003f4db) main_fs_bigclock_pane_t

0x44ec,	// (0x00033b18) main_fs_bigclock_indicator_pane_g1

0x3580,	// (0x00032bac) ncim_query_content_pane_g2_ParamLimits

0x3580,	// (0x00032bac) ncim_query_content_pane_g2

0x0001,

0xfc3d,	// (0x0003f269) ncim_query_content_pane_g_ParamLimits

0xfc3d,	// (0x0003f269) ncim_query_content_pane_g

0xceaf,	// (0x0003c4db) sc_clock_pane_t4_ParamLimits

0xceaf,	// (0x0003c4db) sc_clock_pane_t4

0xf109,	// (0x0003e735) main_radioblah_pane

0x2702,	// (0x00031d2e) cell_call4_button_pane_t1_copy1_ParamLimits

0x2702,	// (0x00031d2e) cell_call4_button_pane_t1_copy1

0xcb75,	// (0x0003c1a1) main_ncimui_pane_t1_ParamLimits

0xcb75,	// (0x0003c1a1) main_ncimui_pane_t1

0xcb87,	// (0x0003c1b3) main_ncimui_pane_t2_ParamLimits

0xcb87,	// (0x0003c1b3) main_ncimui_pane_t2

0x0002,

0xfc36,	// (0x0003f262) main_ncimui_pane_t_ParamLimits

0xfc36,	// (0x0003f262) main_ncimui_pane_t

0x39d6,	// (0x00033002) main_radioblah_anim_pane_ParamLimits

0x39d6,	// (0x00033002) main_radioblah_anim_pane

0x39e7,	// (0x00033013) main_radioblah_info_pane_ParamLimits

0x39e7,	// (0x00033013) main_radioblah_info_pane

0x39fb,	// (0x00033027) main_radioblah_pane_t1_ParamLimits

0x39fb,	// (0x00033027) main_radioblah_pane_t1

0x3a17,	// (0x00033043) main_radioblah_pane_t2_ParamLimits

0x3a17,	// (0x00033043) main_radioblah_pane_t2

0x0003,

0xfcd1,	// (0x0003f2fd) main_radioblah_pane_t_ParamLimits

0xfcd1,	// (0x0003f2fd) main_radioblah_pane_t

0xcf78,	// (0x0003c5a4) main_radioblah_rocker_ctrl_pane_ParamLimits

0xcf78,	// (0x0003c5a4) main_radioblah_rocker_ctrl_pane

0x3a5f,	// (0x0003308b) main_radioblah_info_pane_t1_ParamLimits

0x3a5f,	// (0x0003308b) main_radioblah_info_pane_t1

0xcfc1,	// (0x0003c5ed) main_radioblah_info_pane_t2_ParamLimits

0xcfc1,	// (0x0003c5ed) main_radioblah_info_pane_t2

0x0003,

0xfcda,	// (0x0003f306) main_radioblah_info_pane_t_ParamLimits

0xfcda,	// (0x0003f306) main_radioblah_info_pane_t

0x1adc,	// (0x00031108) main_radioblah_rocker_ctrl_pane_g1

0xd071,	// (0x0003c69d) main_radioblah_rocker_ctrl_pane_g2

0xd079,	// (0x0003c6a5) main_radioblah_rocker_ctrl_pane_g3

0xd081,	// (0x0003c6ad) main_radioblah_rocker_ctrl_pane_g4

0xd089,	// (0x0003c6b5) main_radioblah_rocker_ctrl_pane_g5

0xd091,	// (0x0003c6bd) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfce3,	// (0x0003f30f) main_radioblah_rocker_ctrl_pane_g

0xcb3c,	// (0x0003c168) main_cset_text2_pane_t1_copy1_ParamLimits

0xb45b,	// (0x0003aa87) cam4_image_uncrop_qvga_pane

0xb58a,	// (0x0003abb6) vid4_image_uncrop_qcif_pane

0xc76b,	// (0x0003bd97) cam6_image_uncrop_qvga_pane_ParamLimits

0xc76b,	// (0x0003bd97) cam6_image_uncrop_qvga_pane

0x3197,	// (0x000327c3) vid6_image_uncrop_qcif_pane_ParamLimits

0x3197,	// (0x000327c3) vid6_image_uncrop_qcif_pane

0xdc6f,	// (0x0003d29b) bg_popup_preview_window_pane_cp03

0x3532,	// (0x00032b5e) list_cset_text2_pane

0x353a,	// (0x00032b66) main_cset6_text2_pane_g1

0x3542,	// (0x00032b6e) main_cset6_text2_pane_t1

0xd099,	// (0x0003c6c5) list_cset_text2_pane_t1_ParamLimits

0xd099,	// (0x0003c6c5) list_cset_text2_pane_t1

0xf109,	// (0x0003e735) main_radioblah_pane_ParamLimits

0xce10,	// (0x0003c43c) main_mobtv_info_pane_t3_ParamLimits

0xce10,	// (0x0003c43c) main_mobtv_info_pane_t3

0xcf66,	// (0x0003c592) main_radioblah_pane_g1

0xcf91,	// (0x0003c5bd) main_radioblah_info_pane_g1

0xd016,	// (0x0003c642) main_radioblah_info_pane_t3_ParamLimits

0xd016,	// (0x0003c642) main_radioblah_info_pane_t3

0x8347,	// (0x00037973) highlight_cell_cale_month_pane_ParamLimits

0x8347,	// (0x00037973) highlight_cell_cale_month_pane

0xdc6f,	// (0x0003d29b) main_phob_fisheye_pane

0x1e62,	// (0x0003148e) scroll_pane_cp0031_ParamLimits

0x1e62,	// (0x0003148e) scroll_pane_cp0031

0x32a9,	// (0x000328d5) wait_bar_pane_cp08_ParamLimits

0xc910,	// (0x0003bf3c) cset_list_set_pane_copy1_ParamLimits

0x3a99,	// (0x000330c5) highlight_cell_cale_month_pane_g1

0xd0b2,	// (0x0003c6de) highlight_cell_cale_month_pane_t1

0x2e30,	// (0x0003245c) list_gen_pane_cp01

0x2954,	// (0x00031f80) scroll_pane_01

0x5cba,	// (0x000352e6) list_single_double_fisheye_pane

0x5ddd,	// (0x00035409) list_double_fisheye_pane_g1_ParamLimits

0x5ddd,	// (0x00035409) list_double_fisheye_pane_g1

0x5de9,	// (0x00035415) list_double_fisheye_pane_g2_ParamLimits

0x5de9,	// (0x00035415) list_double_fisheye_pane_g2

0x5dfd,	// (0x00035429) list_double_fisheye_pane_g3_ParamLimits

0x5dfd,	// (0x00035429) list_double_fisheye_pane_g3

0x0004,

0xfcf0,	// (0x0003f31c) list_double_fisheye_pane_g_ParamLimits

0xfcf0,	// (0x0003f31c) list_double_fisheye_pane_g

0x5e26,	// (0x00035452) list_double_fisheye_pane_t1_ParamLimits

0x5e26,	// (0x00035452) list_double_fisheye_pane_t1

0x5e41,	// (0x0003546d) list_double_fisheye_pane_t2_ParamLimits

0x5e41,	// (0x0003546d) list_double_fisheye_pane_t2

0x0001,

0xfcfb,	// (0x0003f327) list_double_fisheye_pane_t_ParamLimits

0xfcfb,	// (0x0003f327) list_double_fisheye_pane_t

0xdc6f,	// (0x0003d29b) main_call5_pane

0xced5,	// (0x0003c501) sc_swipe_pane_ParamLimits

0xced5,	// (0x0003c501) sc_swipe_pane

0xd0cc,	// (0x0003c6f8) call5_image_pane_ParamLimits

0xd0cc,	// (0x0003c6f8) call5_image_pane

0xd0de,	// (0x0003c70a) call5_swipe_1_pane_ParamLimits

0xd0de,	// (0x0003c70a) call5_swipe_1_pane

0xd0ea,	// (0x0003c716) call5_swipe_2_pane_ParamLimits

0xd0ea,	// (0x0003c716) call5_swipe_2_pane

0xd106,	// (0x0003c732) popup_call5_audio_first_window_ParamLimits

0xd106,	// (0x0003c732) popup_call5_audio_first_window

0x1d0c,	// (0x00031338) call5_swipe_1_pane_g1_ParamLimits

0x1d0c,	// (0x00031338) call5_swipe_1_pane_g1

0x3ade,	// (0x0003310a) call5_swipe_1_pane_g2_ParamLimits

0x3ade,	// (0x0003310a) call5_swipe_1_pane_g2

0x0001,

0xfd00,	// (0x0003f32c) call5_swipe_1_pane_g_ParamLimits

0xfd00,	// (0x0003f32c) call5_swipe_1_pane_g

0x3aea,	// (0x00033116) call5_swipe_1_pane_t1_ParamLimits

0x3aea,	// (0x00033116) call5_swipe_1_pane_t1

0x1d0c,	// (0x00031338) call5_swipe_2_pane_g1_ParamLimits

0x1d0c,	// (0x00031338) call5_swipe_2_pane_g1

0x3aff,	// (0x0003312b) call5_swipe_2_pane_g2_ParamLimits

0x3aff,	// (0x0003312b) call5_swipe_2_pane_g2

0x0001,

0xfd05,	// (0x0003f331) call5_swipe_2_pane_g_ParamLimits

0xfd05,	// (0x0003f331) call5_swipe_2_pane_g

0x3b0b,	// (0x00033137) call5_swipe_2_pane_t1_ParamLimits

0x3b0b,	// (0x00033137) call5_swipe_2_pane_t1

0x3b20,	// (0x0003314c) sc_swipe_pane_g1_ParamLimits

0x3b20,	// (0x0003314c) sc_swipe_pane_g1

0x3b2d,	// (0x00033159) sc_swipe_pane_g2_ParamLimits

0x3b2d,	// (0x00033159) sc_swipe_pane_g2

0x0001,

0xfd0a,	// (0x0003f336) sc_swipe_pane_g_ParamLimits

0xfd0a,	// (0x0003f336) sc_swipe_pane_g

0x3b39,	// (0x00033165) sc_swipe_pane_t1_ParamLimits

0x3b39,	// (0x00033165) sc_swipe_pane_t1

0xdc6f,	// (0x0003d29b) main_cmail_launcher_pane

0xd116,	// (0x0003c742) aid_size_cell_cmail_l_ParamLimits

0xd116,	// (0x0003c742) aid_size_cell_cmail_l

0xd126,	// (0x0003c752) grid_cmail_l_pane_ParamLimits

0xd126,	// (0x0003c752) grid_cmail_l_pane

0xd136,	// (0x0003c762) cell_cmail_l_pane_ParamLimits

0xd136,	// (0x0003c762) cell_cmail_l_pane

0xd14c,	// (0x0003c778) cell_cmail_l_pane_g1_ParamLimits

0xd14c,	// (0x0003c778) cell_cmail_l_pane_g1

0xd158,	// (0x0003c784) cell_cmail_l_pane_t1_ParamLimits

0xd158,	// (0x0003c784) cell_cmail_l_pane_t1

0x3b4e,	// (0x0003317a) cell_cmail_l_pane_t2_ParamLimits

0x3b4e,	// (0x0003317a) cell_cmail_l_pane_t2

0x0001,

0xfd0f,	// (0x0003f33b) cell_cmail_l_pane_t_ParamLimits

0xfd0f,	// (0x0003f33b) cell_cmail_l_pane_t

0xf109,	// (0x0003e735) grid_highlight_pane_cp018_ParamLimits

0xf109,	// (0x0003e735) grid_highlight_pane_cp018

0x67a1,	// (0x00035dcd) main2_pane_ParamLimits

0x67a1,	// (0x00035dcd) main2_pane

0xe4bc,	// (0x0003dae8) popup_sp_fs_action_menu_bg_pane_g1

0xe4c4,	// (0x0003daf0) popup_sp_fs_action_menu_bg_pane_g2

0xe4cc,	// (0x0003daf8) popup_sp_fs_action_menu_bg_pane_g3

0xe4d4,	// (0x0003db00) popup_sp_fs_action_menu_bg_pane_g4

0xe4dc,	// (0x0003db08) popup_sp_fs_action_menu_bg_pane_g5

0xe4e4,	// (0x0003db10) popup_sp_fs_action_menu_bg_pane_g6

0xe4ec,	// (0x0003db18) popup_sp_fs_action_menu_bg_pane_g7

0xe4f4,	// (0x0003db20) popup_sp_fs_action_menu_bg_pane_g8

0xe4fc,	// (0x0003db28) popup_sp_fs_action_menu_bg_pane_g9

0xe504,	// (0x0003db30) popup_sp_fs_action_menu_bg_pane_g10

0xe504,	// (0x0003db30) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x0003e81b) popup_sp_fs_action_menu_bg_pane_g

0x563d,	// (0x00034c69) list_medium_line_x2_t3_g3_g1_ParamLimits

0x563d,	// (0x00034c69) list_medium_line_x2_t3_g3_g1

0x5649,	// (0x00034c75) list_medium_line_x2_t3_g3_g2_ParamLimits

0x5649,	// (0x00034c75) list_medium_line_x2_t3_g3_g2

0x5655,	// (0x00034c81) list_medium_line_x2_t3_g3_g3_ParamLimits

0x5655,	// (0x00034c81) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x0003e8cb) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x0003e8cb) list_medium_line_x2_t3_g3_g

0x5661,	// (0x00034c8d) list_medium_line_x2_t3_g3_t1_ParamLimits

0x5661,	// (0x00034c8d) list_medium_line_x2_t3_g3_t1

0x5676,	// (0x00034ca2) list_medium_line_x2_t3_g3_t2_ParamLimits

0x5676,	// (0x00034ca2) list_medium_line_x2_t3_g3_t2

0x568a,	// (0x00034cb6) list_medium_line_x2_t3_g3_t3_ParamLimits

0x568a,	// (0x00034cb6) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x0003e8d2) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x0003e8d2) list_medium_line_x2_t3_g3_t

0x563d,	// (0x00034c69) list_medium_line_x2_t3_g2_g1_ParamLimits

0x563d,	// (0x00034c69) list_medium_line_x2_t3_g2_g1

0x5655,	// (0x00034c81) list_medium_line_x2_t3_g2_g2_ParamLimits

0x5655,	// (0x00034c81) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x0003e8d9) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x0003e8d9) list_medium_line_x2_t3_g2_g

0x569f,	// (0x00034ccb) list_medium_line_x2_t3_g2_t1_ParamLimits

0x569f,	// (0x00034ccb) list_medium_line_x2_t3_g2_t1

0x56b5,	// (0x00034ce1) list_medium_line_x2_t3_g2_t2_ParamLimits

0x56b5,	// (0x00034ce1) list_medium_line_x2_t3_g2_t2

0x56c7,	// (0x00034cf3) list_medium_line_x2_t3_g2_t3_ParamLimits

0x56c7,	// (0x00034cf3) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x0003e8de) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x0003e8de) list_medium_line_x2_t3_g2_t

0x563d,	// (0x00034c69) list_medium_line_x2_t4_g4_g1_ParamLimits

0x563d,	// (0x00034c69) list_medium_line_x2_t4_g4_g1

0x56e5,	// (0x00034d11) list_medium_line_x2_t4_g4_g2_ParamLimits

0x56e5,	// (0x00034d11) list_medium_line_x2_t4_g4_g2

0x5649,	// (0x00034c75) list_medium_line_x2_t4_g4_g3_ParamLimits

0x5649,	// (0x00034c75) list_medium_line_x2_t4_g4_g3

0x56f1,	// (0x00034d1d) list_medium_line_x2_t4_g4_g4_ParamLimits

0x56f1,	// (0x00034d1d) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x0003e8e5) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x0003e8e5) list_medium_line_x2_t4_g4_g

0x56fd,	// (0x00034d29) list_medium_line_x2_t4_g4_t1_ParamLimits

0x56fd,	// (0x00034d29) list_medium_line_x2_t4_g4_t1

0x5717,	// (0x00034d43) list_medium_line_x2_t4_g4_t2_ParamLimits

0x5717,	// (0x00034d43) list_medium_line_x2_t4_g4_t2

0x572d,	// (0x00034d59) list_medium_line_x2_t4_g4_t3_ParamLimits

0x572d,	// (0x00034d59) list_medium_line_x2_t4_g4_t3

0x5742,	// (0x00034d6e) list_medium_line_x2_t4_g4_t4_ParamLimits

0x5742,	// (0x00034d6e) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x0003e8ee) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x0003e8ee) list_medium_line_x2_t4_g4_t

0x563d,	// (0x00034c69) list_medium_line_x2_t2_g4_g1_ParamLimits

0x563d,	// (0x00034c69) list_medium_line_x2_t2_g4_g1

0x56e5,	// (0x00034d11) list_medium_line_x2_t2_g4_g2_ParamLimits

0x56e5,	// (0x00034d11) list_medium_line_x2_t2_g4_g2

0x5649,	// (0x00034c75) list_medium_line_x2_t2_g4_g3_ParamLimits

0x5649,	// (0x00034c75) list_medium_line_x2_t2_g4_g3

0x5655,	// (0x00034c81) list_medium_line_x2_t2_g4_g4_ParamLimits

0x5655,	// (0x00034c81) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x0003e955) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x0003e955) list_medium_line_x2_t2_g4_g

0x5754,	// (0x00034d80) list_medium_line_x2_t2_g4_t1_ParamLimits

0x5754,	// (0x00034d80) list_medium_line_x2_t2_g4_t1

0x568a,	// (0x00034cb6) list_medium_line_x2_t2_g4_t2_ParamLimits

0x568a,	// (0x00034cb6) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x0003e95e) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x0003e95e) list_medium_line_x2_t2_g4_t

0x563d,	// (0x00034c69) list_medium_line_x2_t2_g3_g1_ParamLimits

0x563d,	// (0x00034c69) list_medium_line_x2_t2_g3_g1

0x5649,	// (0x00034c75) list_medium_line_x2_t2_g3_g2_ParamLimits

0x5649,	// (0x00034c75) list_medium_line_x2_t2_g3_g2

0x5655,	// (0x00034c81) list_medium_line_x2_t2_g3_g3_ParamLimits

0x5655,	// (0x00034c81) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x0003e8cb) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x0003e8cb) list_medium_line_x2_t2_g3_g

0x5769,	// (0x00034d95) list_medium_line_x2_t2_g3_t1_ParamLimits

0x5769,	// (0x00034d95) list_medium_line_x2_t2_g3_t1

0x568a,	// (0x00034cb6) list_medium_line_x2_t2_g3_t2_ParamLimits

0x568a,	// (0x00034cb6) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x0003e963) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x0003e963) list_medium_line_x2_t2_g3_t

0x8565,	// (0x00037b91) main_sp_fs_list_pane_ParamLimits

0x8565,	// (0x00037b91) main_sp_fs_list_pane

0x8571,	// (0x00037b9d) sp_fs_scroll_pane_ParamLimits

0x8571,	// (0x00037b9d) sp_fs_scroll_pane

0x577e,	// (0x00034daa) list_medium_line_x2_t3_t1

0x578e,	// (0x00034dba) list_medium_line_x2_t3_t2

0x579c,	// (0x00034dc8) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x0003e9ae) list_medium_line_x2_t3_t

0x57aa,	// (0x00034dd6) list_medium_line_x3_t4_t1

0x57ba,	// (0x00034de6) list_medium_line_x3_t4_t2

0x57c8,	// (0x00034df4) list_medium_line_x3_t4_t3

0x579c,	// (0x00034dc8) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x0003e9b5) list_medium_line_x3_t4_t

0x57d6,	// (0x00034e02) list_medium_line_x4_t5_t1

0x57e6,	// (0x00034e12) list_medium_line_x4_t5_t2

0x57c8,	// (0x00034df4) list_medium_line_x4_t5_t3

0x57f4,	// (0x00034e20) list_medium_line_x4_t5_t4

0x579c,	// (0x00034dc8) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x0003e9be) list_medium_line_x4_t5_t

0x563d,	// (0x00034c69) list_medium_line_t4_g4_g1_ParamLimits

0x563d,	// (0x00034c69) list_medium_line_t4_g4_g1

0x56f1,	// (0x00034d1d) list_medium_line_t4_g4_g2_ParamLimits

0x56f1,	// (0x00034d1d) list_medium_line_t4_g4_g2

0x5802,	// (0x00034e2e) list_medium_line_t4_g4_g3_ParamLimits

0x5802,	// (0x00034e2e) list_medium_line_t4_g4_g3

0x5655,	// (0x00034c81) list_medium_line_t4_g4_g4_ParamLimits

0x5655,	// (0x00034c81) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x0003e9c9) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x0003e9c9) list_medium_line_t4_g4_g

0x580e,	// (0x00034e3a) list_medium_line_t4_g4_t1_ParamLimits

0x580e,	// (0x00034e3a) list_medium_line_t4_g4_t1

0x5823,	// (0x00034e4f) list_medium_line_t4_g4_t2_ParamLimits

0x5823,	// (0x00034e4f) list_medium_line_t4_g4_t2

0x5839,	// (0x00034e65) list_medium_line_t4_g4_t3_ParamLimits

0x5839,	// (0x00034e65) list_medium_line_t4_g4_t3

0x568a,	// (0x00034cb6) list_medium_line_t4_g4_t4_ParamLimits

0x568a,	// (0x00034cb6) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x0003e9d2) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x0003e9d2) list_medium_line_t4_g4_t

0x8690,	// (0x00037cbc) chi_dic_find_pane_g1

0x961d,	// (0x00038c49) main_tport_pane

0x5ac8,	// (0x000350f4) list_medium_line_plain_t1

0x5ad6,	// (0x00035102) list_medium_line_t2_g2_g1_ParamLimits

0x5ad6,	// (0x00035102) list_medium_line_t2_g2_g1

0x5ae2,	// (0x0003510e) list_medium_line_t2_g2_g2_ParamLimits

0x5ae2,	// (0x0003510e) list_medium_line_t2_g2_g2

0x0001,

0xfa59,	// (0x0003f085) list_medium_line_t2_g2_g_ParamLimits

0xfa59,	// (0x0003f085) list_medium_line_t2_g2_g

0x5aee,	// (0x0003511a) list_medium_line_t2_g2_t1_ParamLimits

0x5aee,	// (0x0003511a) list_medium_line_t2_g2_t1

0x5b05,	// (0x00035131) list_medium_line_t2_g2_t2_ParamLimits

0x5b05,	// (0x00035131) list_medium_line_t2_g2_t2

0x0001,

0xfa5e,	// (0x0003f08a) list_medium_line_t2_g2_t_ParamLimits

0xfa5e,	// (0x0003f08a) list_medium_line_t2_g2_t

0x5c98,	// (0x000352c4) aid_sp_fs_list_icon_a_sm

0x5ca0,	// (0x000352cc) aid_sp_fs_list_icon_d

0x4321,	// (0x0003394d) aid_sp_fs_text_primary

0x4088,	// (0x000336b4) aid_sp_fs_text_secondary

0x5ca8,	// (0x000352d4) list_medium_line

0x5ca8,	// (0x000352d4) list_medium_line_g2

0x5ca8,	// (0x000352d4) list_medium_line_g3

0x5ca8,	// (0x000352d4) list_medium_line_plain

0x5ca8,	// (0x000352d4) list_medium_line_plain_t2

0x5ca8,	// (0x000352d4) list_medium_line_plain_t3

0x5ca8,	// (0x000352d4) list_medium_line_right_icon

0x5ca8,	// (0x000352d4) list_medium_line_right_iconx2

0x5ca8,	// (0x000352d4) list_medium_line_t2

0x5ca8,	// (0x000352d4) list_medium_line_t2_g2

0x5ca8,	// (0x000352d4) list_medium_line_t2_g3

0x5ca8,	// (0x000352d4) list_medium_line_t2_right_icon

0x5ca8,	// (0x000352d4) list_medium_line_t2_right_iconx2

0x5ca8,	// (0x000352d4) list_medium_line_t3

0x5ca8,	// (0x000352d4) list_medium_line_t3_g2

0x5ca8,	// (0x000352d4) list_medium_line_t3_g3

0x5ca8,	// (0x000352d4) list_medium_line_t3_right_iconx2

0x5cb1,	// (0x000352dd) list_medium_line_t4_g4

0x5cba,	// (0x000352e6) list_medium_line_x2

0x5cba,	// (0x000352e6) list_medium_line_x2_t2_g2

0x5cba,	// (0x000352e6) list_medium_line_x2_t2_g3

0x5cba,	// (0x000352e6) list_medium_line_x2_t2_g4

0x5cba,	// (0x000352e6) list_medium_line_x2_t3

0x5cba,	// (0x000352e6) list_medium_line_x2_t3_g2

0x5cba,	// (0x000352e6) list_medium_line_x2_t3_g3

0x5cba,	// (0x000352e6) list_medium_line_x2_t3_g4

0x5cba,	// (0x000352e6) list_medium_line_x2_t4_g2

0x5cba,	// (0x000352e6) list_medium_line_x2_t4_g4

0x5cc3,	// (0x000352ef) list_medium_line_x3

0x5cc3,	// (0x000352ef) list_medium_line_x3_t4

0x5cc3,	// (0x000352ef) list_medium_line_x3_t4_g4

0x5cb1,	// (0x000352dd) list_medium_line_x4_t4

0x5cb1,	// (0x000352dd) list_medium_line_x4_t4_g7

0x5cb1,	// (0x000352dd) list_medium_line_x4_t5

0x5ccc,	// (0x000352f8) list_single_fs_dyc_pane_ParamLimits

0x5ccc,	// (0x000352f8) list_single_fs_dyc_pane

0x563d,	// (0x00034c69) list_medium_line_x4_t4_g7_g1_ParamLimits

0x563d,	// (0x00034c69) list_medium_line_x4_t4_g7_g1

0x5d0c,	// (0x00035338) list_medium_line_x4_t4_g7_g2_ParamLimits

0x5d0c,	// (0x00035338) list_medium_line_x4_t4_g7_g2

0x5d18,	// (0x00035344) list_medium_line_x4_t4_g7_g3_ParamLimits

0x5d18,	// (0x00035344) list_medium_line_x4_t4_g7_g3

0x5d27,	// (0x00035353) list_medium_line_x4_t4_g7_g4_ParamLimits

0x5d27,	// (0x00035353) list_medium_line_x4_t4_g7_g4

0x5d33,	// (0x0003535f) list_medium_line_x4_t4_g7_g5_ParamLimits

0x5d33,	// (0x0003535f) list_medium_line_x4_t4_g7_g5

0x5d42,	// (0x0003536e) list_medium_line_x4_t4_g7_g6_ParamLimits

0x5d42,	// (0x0003536e) list_medium_line_x4_t4_g7_g6

0x5d51,	// (0x0003537d) list_medium_line_x4_t4_g7_g7_ParamLimits

0x5d51,	// (0x0003537d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc1c,	// (0x0003f248) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc1c,	// (0x0003f248) list_medium_line_x4_t4_g7_g

0x5d5d,	// (0x00035389) list_medium_line_x4_t4_g7_t1_ParamLimits

0x5d5d,	// (0x00035389) list_medium_line_x4_t4_g7_t1

0x5d72,	// (0x0003539e) list_medium_line_x4_t4_g7_t2_ParamLimits

0x5d72,	// (0x0003539e) list_medium_line_x4_t4_g7_t2

0x5d87,	// (0x000353b3) list_medium_line_x4_t4_g7_t3_ParamLimits

0x5d87,	// (0x000353b3) list_medium_line_x4_t4_g7_t3

0x5d9c,	// (0x000353c8) list_medium_line_x4_t4_g7_t4_ParamLimits

0x5d9c,	// (0x000353c8) list_medium_line_x4_t4_g7_t4

0x5dae,	// (0x000353da) list_medium_line_x4_t4_g7_t5_ParamLimits

0x5dae,	// (0x000353da) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc2b,	// (0x0003f257) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc2b,	// (0x0003f257) list_medium_line_x4_t4_g7_t

0x5dc0,	// (0x000353ec) list_single_dyc_row_pane_ParamLimits

0x5dc0,	// (0x000353ec) list_single_dyc_row_pane

0xd0c0,	// (0x0003c6ec) call5_gesture_pane_ParamLimits

0xd0c0,	// (0x0003c6ec) call5_gesture_pane

0xd0f6,	// (0x0003c722) call5_windows_pane_ParamLimits

0xd0f6,	// (0x0003c722) call5_windows_pane

0xd16e,	// (0x0003c79a) call5_swipe_1_pane_cp_ParamLimits

0xd16e,	// (0x0003c79a) call5_swipe_1_pane_cp

0xd17a,	// (0x0003c7a6) call5_swipe_2_pane_cp_ParamLimits

0xd17a,	// (0x0003c7a6) call5_swipe_2_pane_cp

0xee6d,	// (0x0003e499) call5_image_pane_cp

0xd186,	// (0x0003c7b2) popup_call5_audio_first_window_cp_ParamLimits

0xd186,	// (0x0003c7b2) popup_call5_audio_first_window_cp

0x3b20,	// (0x0003314c) call5_swipe_1_pane_g1_cp_ParamLimits

0x3b20,	// (0x0003314c) call5_swipe_1_pane_g1_cp

0x3b60,	// (0x0003318c) call5_swipe_1_pane_g2_cp

0x3b39,	// (0x00033165) call5_swipe_1_pane_t1_cp_ParamLimits

0x3b39,	// (0x00033165) call5_swipe_1_pane_t1_cp

0x3b20,	// (0x0003314c) call5_swipe_2_pane_g1_cp_ParamLimits

0x3b20,	// (0x0003314c) call5_swipe_2_pane_g1_cp

0x3b68,	// (0x00033194) call5_swipe_2_pane_g2_cp

0x3b70,	// (0x0003319c) call5_swipe_2_pane_t1_cp_ParamLimits

0x3b70,	// (0x0003319c) call5_swipe_2_pane_t1_cp

0xf109,	// (0x0003e735) main_sp_fs_email_pane

0x3b85,	// (0x000331b1) main_sp_fs_listscroll_pane_te

0x5e63,	// (0x0003548f) popup_sp_fs_action_menu_pane_ParamLimits

0x5e63,	// (0x0003548f) popup_sp_fs_action_menu_pane

0x1adc,	// (0x00031108) bg_sp_fs_ctrlbar_pane_g1

0x3bd4,	// (0x00033200) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x3bdd,	// (0x00033209) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x3be6,	// (0x00033212) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x1adc,	// (0x00031108) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd14,	// (0x0003f340) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x18bb,	// (0x00030ee7) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x18bb,	// (0x00030ee7) bg_sp_fs_ctrlbar_ddmenu_pane

0x3bef,	// (0x0003321b) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x3bef,	// (0x0003321b) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x3bfb,	// (0x00033227) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x3bfb,	// (0x00033227) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd1d,	// (0x0003f349) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd1d,	// (0x0003f349) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3c07,	// (0x00033233) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3c07,	// (0x00033233) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x5ea9,	// (0x000354d5) list_medium_line_t2_right_icon_g1

0x5eb1,	// (0x000354dd) list_medium_line_t2_right_icon_t1

0x5ec1,	// (0x000354ed) list_medium_line_t2_right_icon_t2

0x0001,

0xfd22,	// (0x0003f34e) list_medium_line_t2_right_icon_t

0x15a7,	// (0x00030bd3) bg_sp_fs_ctrlbar_pane_ParamLimits

0x15a7,	// (0x00030bd3) bg_sp_fs_ctrlbar_pane

0xd1eb,	// (0x0003c817) main_sp_fs_ctrlbar_button_pane_cp01

0xd1f3,	// (0x0003c81f) main_sp_fs_ctrlbar_ddmenu_pane

0x3c63,	// (0x0003328f) main_sp_fs_ctrlbar_pane_g1

0x3c6f,	// (0x0003329b) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd27,	// (0x0003f353) main_sp_fs_ctrlbar_pane_g

0x3c7b,	// (0x000332a7) main_sp_fs_ctrlbar_pane_t1

0x5ecf,	// (0x000354fb) main_sp_fs_ctrlbar_pane

0x5eeb,	// (0x00035517) main_sp_fs_listscroll_pane_te_cp01

0x5efc,	// (0x00035528) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x5efc,	// (0x00035528) popup_sp_fs_action_menu_pane_cp01

0xf109,	// (0x0003e735) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf109,	// (0x0003e735) bg_sp_fs_highlight_list_pane_cp01

0x5f16,	// (0x00035542) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x5f16,	// (0x00035542) sp_fs_action_menu_list_gene_pane_g1

0x3c9f,	// (0x000332cb) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x3c9f,	// (0x000332cb) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd2c,	// (0x0003f358) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd2c,	// (0x0003f358) sp_fs_action_menu_list_gene_pane_g

0x5f25,	// (0x00035551) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x5f25,	// (0x00035551) sp_fs_action_menu_list_gene_pane_t1

0x5f3d,	// (0x00035569) sp_fs_action_menu_list_gene_pane_ParamLimits

0x5f3d,	// (0x00035569) sp_fs_action_menu_list_gene_pane

0x3ce7,	// (0x00033313) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x3ce7,	// (0x00033313) popup_sp_fs_action_menu_bg_pane

0x5f60,	// (0x0003558c) sp_fs_action_menu_list_pane_ParamLimits

0x5f60,	// (0x0003558c) sp_fs_action_menu_list_pane

0x3d19,	// (0x00033345) sp_fs_scroll_pane_cp01_ParamLimits

0x3d19,	// (0x00033345) sp_fs_scroll_pane_cp01

0x5f84,	// (0x000355b0) list_medium_line_plain_t2_t1

0x5f94,	// (0x000355c0) list_medium_line_plain_t2_t2

0x0001,

0xfd31,	// (0x0003f35d) list_medium_line_plain_t2_t

0x5fa2,	// (0x000355ce) list_medium_line_plain_t3_t1

0x5fb2,	// (0x000355de) list_medium_line_plain_t3_t2

0x5fc0,	// (0x000355ec) list_medium_line_plain_t3_t3

0x0002,

0xfd36,	// (0x0003f362) list_medium_line_plain_t3_t

0x563d,	// (0x00034c69) list_medium_line_x2_t2_g2_g1_ParamLimits

0x563d,	// (0x00034c69) list_medium_line_x2_t2_g2_g1

0x5655,	// (0x00034c81) list_medium_line_x2_t2_g2_g2_ParamLimits

0x5655,	// (0x00034c81) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x0003e8d9) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x0003e8d9) list_medium_line_x2_t2_g2_g

0x580e,	// (0x00034e3a) list_medium_line_x2_t2_g2_t1_ParamLimits

0x580e,	// (0x00034e3a) list_medium_line_x2_t2_g2_t1

0x568a,	// (0x00034cb6) list_medium_line_x2_t2_g2_t2_ParamLimits

0x568a,	// (0x00034cb6) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd3d,	// (0x0003f369) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd3d,	// (0x0003f369) list_medium_line_x2_t2_g2_t

0x563d,	// (0x00034c69) list_medium_line_x2_t4_g2_g1_ParamLimits

0x563d,	// (0x00034c69) list_medium_line_x2_t4_g2_g1

0x5fce,	// (0x000355fa) list_medium_line_x2_t4_g2_g2_ParamLimits

0x5fce,	// (0x000355fa) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd42,	// (0x0003f36e) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd42,	// (0x0003f36e) list_medium_line_x2_t4_g2_g

0x5fe0,	// (0x0003560c) list_medium_line_x2_t4_g2_t1_ParamLimits

0x5fe0,	// (0x0003560c) list_medium_line_x2_t4_g2_t1

0x5ffa,	// (0x00035626) list_medium_line_x2_t4_g2_t2_ParamLimits

0x5ffa,	// (0x00035626) list_medium_line_x2_t4_g2_t2

0x6010,	// (0x0003563c) list_medium_line_x2_t4_g2_t3_ParamLimits

0x6010,	// (0x0003563c) list_medium_line_x2_t4_g2_t3

0x568a,	// (0x00034cb6) list_medium_line_x2_t4_g2_t4_ParamLimits

0x568a,	// (0x00034cb6) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd47,	// (0x0003f373) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd47,	// (0x0003f373) list_medium_line_x2_t4_g2_t

0x6025,	// (0x00035651) list_medium_line_t3_right_iconx2_g1

0x5ea9,	// (0x000354d5) list_medium_line_t3_right_iconx2_g2

0x602d,	// (0x00035659) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd50,	// (0x0003f37c) list_medium_line_t3_right_iconx2_g

0x6037,	// (0x00035663) list_medium_line_t3_right_iconx2_t1

0x6047,	// (0x00035673) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd57,	// (0x0003f383) list_medium_line_t3_right_iconx2_t

0x563d,	// (0x00034c69) list_medium_line_x3_t4_g4_g1_ParamLimits

0x563d,	// (0x00034c69) list_medium_line_x3_t4_g4_g1

0x5649,	// (0x00034c75) list_medium_line_x3_t4_g4_g2_ParamLimits

0x5649,	// (0x00034c75) list_medium_line_x3_t4_g4_g2

0x56f1,	// (0x00034d1d) list_medium_line_x3_t4_g4_g3_ParamLimits

0x56f1,	// (0x00034d1d) list_medium_line_x3_t4_g4_g3

0x6055,	// (0x00035681) list_medium_line_x3_t4_g4_g4_ParamLimits

0x6055,	// (0x00035681) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd5c,	// (0x0003f388) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd5c,	// (0x0003f388) list_medium_line_x3_t4_g4_g

0x6061,	// (0x0003568d) list_medium_line_x3_t4_g4_t1_ParamLimits

0x6061,	// (0x0003568d) list_medium_line_x3_t4_g4_t1

0x6078,	// (0x000356a4) list_medium_line_x3_t4_g4_t2_ParamLimits

0x6078,	// (0x000356a4) list_medium_line_x3_t4_g4_t2

0x608d,	// (0x000356b9) list_medium_line_x3_t4_g4_t3_ParamLimits

0x608d,	// (0x000356b9) list_medium_line_x3_t4_g4_t3

0x60a2,	// (0x000356ce) list_medium_line_x3_t4_g4_t4_ParamLimits

0x60a2,	// (0x000356ce) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd65,	// (0x0003f391) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd65,	// (0x0003f391) list_medium_line_x3_t4_g4_t

0x60bf,	// (0x000356eb) list_single_dyc_row_text_pane_t1_ParamLimits

0x60bf,	// (0x000356eb) list_single_dyc_row_text_pane_t1

0x60fc,	// (0x00035728) list_single_dyc_row_text_pane_t2_ParamLimits

0x60fc,	// (0x00035728) list_single_dyc_row_text_pane_t2

0x6156,	// (0x00035782) list_single_dyc_row_text_pane_t3_ParamLimits

0x6156,	// (0x00035782) list_single_dyc_row_text_pane_t3

0x0002,

0xfd6e,	// (0x0003f39a) list_single_dyc_row_text_pane_t_ParamLimits

0xfd6e,	// (0x0003f39a) list_single_dyc_row_text_pane_t

0x6168,	// (0x00035794) list_single_dyc_row_pane_g1_ParamLimits

0x6168,	// (0x00035794) list_single_dyc_row_pane_g1

0x6174,	// (0x000357a0) list_single_dyc_row_pane_g2_ParamLimits

0x6174,	// (0x000357a0) list_single_dyc_row_pane_g2

0x6180,	// (0x000357ac) list_single_dyc_row_pane_g3_ParamLimits

0x6180,	// (0x000357ac) list_single_dyc_row_pane_g3

0x618c,	// (0x000357b8) list_single_dyc_row_pane_g4_ParamLimits

0x618c,	// (0x000357b8) list_single_dyc_row_pane_g4

0x0003,

0xfd75,	// (0x0003f3a1) list_single_dyc_row_pane_g_ParamLimits

0xfd75,	// (0x0003f3a1) list_single_dyc_row_pane_g

0x6198,	// (0x000357c4) list_single_dyc_row_text_pane_ParamLimits

0x6198,	// (0x000357c4) list_single_dyc_row_text_pane

0xdc6f,	// (0x0003d29b) bg_sp_fs_scroll_pane

0x3de6,	// (0x00033412) thumb_sp_fs_scroll_pane

0x5ad6,	// (0x00035102) list_medium_line_g1_ParamLimits

0x5ad6,	// (0x00035102) list_medium_line_g1

0x61b7,	// (0x000357e3) list_medium_line_t1_ParamLimits

0x61b7,	// (0x000357e3) list_medium_line_t1

0x563d,	// (0x00034c69) list_medium_line_x2_g1_ParamLimits

0x563d,	// (0x00034c69) list_medium_line_x2_g1

0x5649,	// (0x00034c75) list_medium_line_x2_g2_ParamLimits

0x5649,	// (0x00034c75) list_medium_line_x2_g2

0x0001,

0xfd7e,	// (0x0003f3aa) list_medium_line_x2_g_ParamLimits

0xfd7e,	// (0x0003f3aa) list_medium_line_x2_g

0x61cc,	// (0x000357f8) list_medium_line_x2_t1_ParamLimits

0x61cc,	// (0x000357f8) list_medium_line_x2_t1

0x563d,	// (0x00034c69) list_medium_line_x3_g1_ParamLimits

0x563d,	// (0x00034c69) list_medium_line_x3_g1

0x5649,	// (0x00034c75) list_medium_line_x3_g2_ParamLimits

0x5649,	// (0x00034c75) list_medium_line_x3_g2

0x0001,

0xfd7e,	// (0x0003f3aa) list_medium_line_x3_g_ParamLimits

0xfd7e,	// (0x0003f3aa) list_medium_line_x3_g

0x61cc,	// (0x000357f8) list_medium_line_x3_t1_ParamLimits

0x61cc,	// (0x000357f8) list_medium_line_x3_t1

0x3e1a,	// (0x00033446) thumb_sp_fs_scroll_pane_g1

0x3e23,	// (0x0003344f) thumb_sp_fs_scroll_pane_g2

0x3e2c,	// (0x00033458) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd83,	// (0x0003f3af) thumb_sp_fs_scroll_pane_g

0x3e1a,	// (0x00033446) bg_sp_fs_scroll_pane_g1

0x3e23,	// (0x0003344f) bg_sp_fs_scroll_pane_g2

0x3e2c,	// (0x00033458) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd83,	// (0x0003f3af) bg_sp_fs_scroll_pane_g

0x563d,	// (0x00034c69) list_medium_line_x2_t3_g4_g1_ParamLimits

0x563d,	// (0x00034c69) list_medium_line_x2_t3_g4_g1

0x56e5,	// (0x00034d11) list_medium_line_x2_t3_g4_g2_ParamLimits

0x56e5,	// (0x00034d11) list_medium_line_x2_t3_g4_g2

0x5649,	// (0x00034c75) list_medium_line_x2_t3_g4_g3_ParamLimits

0x5649,	// (0x00034c75) list_medium_line_x2_t3_g4_g3

0x5655,	// (0x00034c81) list_medium_line_x2_t3_g4_g4_ParamLimits

0x5655,	// (0x00034c81) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x0003e955) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x0003e955) list_medium_line_x2_t3_g4_g

0x61e2,	// (0x0003580e) list_medium_line_x2_t3_g4_t1_ParamLimits

0x61e2,	// (0x0003580e) list_medium_line_x2_t3_g4_t1

0x61f8,	// (0x00035824) list_medium_line_x2_t3_g4_t2_ParamLimits

0x61f8,	// (0x00035824) list_medium_line_x2_t3_g4_t2

0x568a,	// (0x00034cb6) list_medium_line_x2_t3_g4_t3_ParamLimits

0x568a,	// (0x00034cb6) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd8a,	// (0x0003f3b6) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd8a,	// (0x0003f3b6) list_medium_line_x2_t3_g4_t

0x5ad6,	// (0x00035102) list_medium_line_g2_g1_ParamLimits

0x5ad6,	// (0x00035102) list_medium_line_g2_g1

0x5ae2,	// (0x0003510e) list_medium_line_g2_g2_ParamLimits

0x5ae2,	// (0x0003510e) list_medium_line_g2_g2

0x0001,

0xfa59,	// (0x0003f085) list_medium_line_g2_g_ParamLimits

0xfa59,	// (0x0003f085) list_medium_line_g2_g

0x6211,	// (0x0003583d) list_medium_line_g2_t1_ParamLimits

0x6211,	// (0x0003583d) list_medium_line_g2_t1

0x5ad6,	// (0x00035102) list_medium_line_t3_g2_g1_ParamLimits

0x5ad6,	// (0x00035102) list_medium_line_t3_g2_g1

0x5ae2,	// (0x0003510e) list_medium_line_t3_g2_g2_ParamLimits

0x5ae2,	// (0x0003510e) list_medium_line_t3_g2_g2

0x0001,

0xfa59,	// (0x0003f085) list_medium_line_t3_g2_g_ParamLimits

0xfa59,	// (0x0003f085) list_medium_line_t3_g2_g

0x6226,	// (0x00035852) list_medium_line_t3_g2_t1_ParamLimits

0x6226,	// (0x00035852) list_medium_line_t3_g2_t1

0x623d,	// (0x00035869) list_medium_line_t3_g2_t2_ParamLimits

0x623d,	// (0x00035869) list_medium_line_t3_g2_t2

0x6252,	// (0x0003587e) list_medium_line_t3_g2_t3_ParamLimits

0x6252,	// (0x0003587e) list_medium_line_t3_g2_t3

0x0002,

0xfd91,	// (0x0003f3bd) list_medium_line_t3_g2_t_ParamLimits

0xfd91,	// (0x0003f3bd) list_medium_line_t3_g2_t

0x5ea9,	// (0x000354d5) list_medium_line_right_icon_g1

0x626b,	// (0x00035897) list_medium_line_right_icon_t1

0x5ad6,	// (0x00035102) list_medium_line_t2_g1_ParamLimits

0x5ad6,	// (0x00035102) list_medium_line_t2_g1

0x6279,	// (0x000358a5) list_medium_line_t2_t1_ParamLimits

0x6279,	// (0x000358a5) list_medium_line_t2_t1

0x6293,	// (0x000358bf) list_medium_line_t2_t2_ParamLimits

0x6293,	// (0x000358bf) list_medium_line_t2_t2

0x0001,

0xfd98,	// (0x0003f3c4) list_medium_line_t2_t_ParamLimits

0xfd98,	// (0x0003f3c4) list_medium_line_t2_t

0x5ad6,	// (0x00035102) list_medium_line_t3_g1_ParamLimits

0x5ad6,	// (0x00035102) list_medium_line_t3_g1

0x62a8,	// (0x000358d4) list_medium_line_t3_t1_ParamLimits

0x62a8,	// (0x000358d4) list_medium_line_t3_t1

0x62c2,	// (0x000358ee) list_medium_line_t3_t2_ParamLimits

0x62c2,	// (0x000358ee) list_medium_line_t3_t2

0x62d8,	// (0x00035904) list_medium_line_t3_t3_ParamLimits

0x62d8,	// (0x00035904) list_medium_line_t3_t3

0x0002,

0xfd9d,	// (0x0003f3c9) list_medium_line_t3_t_ParamLimits

0xfd9d,	// (0x0003f3c9) list_medium_line_t3_t

0x5ad6,	// (0x00035102) list_medium_line_g3_g1_ParamLimits

0x5ad6,	// (0x00035102) list_medium_line_g3_g1

0x62ed,	// (0x00035919) list_medium_line_g3_g2_ParamLimits

0x62ed,	// (0x00035919) list_medium_line_g3_g2

0x5ae2,	// (0x0003510e) list_medium_line_g3_g3_ParamLimits

0x5ae2,	// (0x0003510e) list_medium_line_g3_g3

0x0002,

0xfda4,	// (0x0003f3d0) list_medium_line_g3_g_ParamLimits

0xfda4,	// (0x0003f3d0) list_medium_line_g3_g

0x62f9,	// (0x00035925) list_medium_line_g3_t1_ParamLimits

0x62f9,	// (0x00035925) list_medium_line_g3_t1

0x5ad6,	// (0x00035102) list_medium_line_t2_g3_g1_ParamLimits

0x5ad6,	// (0x00035102) list_medium_line_t2_g3_g1

0x62ed,	// (0x00035919) list_medium_line_t2_g3_g2_ParamLimits

0x62ed,	// (0x00035919) list_medium_line_t2_g3_g2

0x5ae2,	// (0x0003510e) list_medium_line_t2_g3_g3_ParamLimits

0x5ae2,	// (0x0003510e) list_medium_line_t2_g3_g3

0x0002,

0xfda4,	// (0x0003f3d0) list_medium_line_t2_g3_g_ParamLimits

0xfda4,	// (0x0003f3d0) list_medium_line_t2_g3_g

0x630e,	// (0x0003593a) list_medium_line_t2_g3_t1_ParamLimits

0x630e,	// (0x0003593a) list_medium_line_t2_g3_t1

0x6325,	// (0x00035951) list_medium_line_t2_g3_t2_ParamLimits

0x6325,	// (0x00035951) list_medium_line_t2_g3_t2

0x0001,

0xfdab,	// (0x0003f3d7) list_medium_line_t2_g3_t_ParamLimits

0xfdab,	// (0x0003f3d7) list_medium_line_t2_g3_t

0x5ad6,	// (0x00035102) list_medium_line_t3_g3_g1_ParamLimits

0x5ad6,	// (0x00035102) list_medium_line_t3_g3_g1

0x62ed,	// (0x00035919) list_medium_line_t3_g3_g2_ParamLimits

0x62ed,	// (0x00035919) list_medium_line_t3_g3_g2

0x5ae2,	// (0x0003510e) list_medium_line_t3_g3_g3_ParamLimits

0x5ae2,	// (0x0003510e) list_medium_line_t3_g3_g3

0x0002,

0xfda4,	// (0x0003f3d0) list_medium_line_t3_g3_g_ParamLimits

0xfda4,	// (0x0003f3d0) list_medium_line_t3_g3_g

0x633a,	// (0x00035966) list_medium_line_t3_g3_t1_ParamLimits

0x633a,	// (0x00035966) list_medium_line_t3_g3_t1

0x634e,	// (0x0003597a) list_medium_line_t3_g3_t2_ParamLimits

0x634e,	// (0x0003597a) list_medium_line_t3_g3_t2

0x6360,	// (0x0003598c) list_medium_line_t3_g3_t3_ParamLimits

0x6360,	// (0x0003598c) list_medium_line_t3_g3_t3

0x0002,

0xfdb0,	// (0x0003f3dc) list_medium_line_t3_g3_t_ParamLimits

0xfdb0,	// (0x0003f3dc) list_medium_line_t3_g3_t

0x6025,	// (0x00035651) list_medium_line_right_iconx2_g1

0x5ea9,	// (0x000354d5) list_medium_line_right_iconx2_g2

0x0001,

0xfdb7,	// (0x0003f3e3) list_medium_line_right_iconx2_g

0x6374,	// (0x000359a0) list_medium_line_right_iconx2_t1

0x6025,	// (0x00035651) list_medium_line_t2_right_iconx2_g1

0x5ea9,	// (0x000354d5) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdb7,	// (0x0003f3e3) list_medium_line_t2_right_iconx2_g

0x6382,	// (0x000359ae) list_medium_line_t2_right_iconx2_t1

0x6392,	// (0x000359be) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdbc,	// (0x0003f3e8) list_medium_line_t2_right_iconx2_t

0x63a0,	// (0x000359cc) list_medium_line_x4_t4_t1

0x63ae,	// (0x000359da) list_medium_line_x4_t4_t2

0x63be,	// (0x000359ea) list_medium_line_x4_t4_t3

0x63ce,	// (0x000359fa) list_medium_line_x4_t4_t4

0x0003,

0xfdc1,	// (0x0003f3ed) list_medium_line_x4_t4_t

0xd226,	// (0x0003c852) tport_appsw_pane_ParamLimits

0xd226,	// (0x0003c852) tport_appsw_pane

0xd234,	// (0x0003c860) tport_contact_pane_ParamLimits

0xd234,	// (0x0003c860) tport_contact_pane

0xd242,	// (0x0003c86e) tport_listscroll_pane_ParamLimits

0xd242,	// (0x0003c86e) tport_listscroll_pane

0xd250,	// (0x0003c87c) cell_tport_appsw_pane_ParamLimits

0xd250,	// (0x0003c87c) cell_tport_appsw_pane

0x1de5,	// (0x00031411) tport_appsw_pane_g1_ParamLimits

0x1de5,	// (0x00031411) tport_appsw_pane_g1

0x3e95,	// (0x000334c1) tport_contact_pane_g1

0x3e9e,	// (0x000334ca) tport_contact_pane_t1

0x3eac,	// (0x000334d8) tport_contact_pane_t2

0x0001,

0xfdca,	// (0x0003f3f6) tport_contact_pane_t

0x3eba,	// (0x000334e6) list_tport_pane

0x3ec3,	// (0x000334ef) scroll_pane_cp_030

0xd265,	// (0x0003c891) cell_tport_appsw_pane_g1

0x3ecc,	// (0x000334f8) cell_tport_appsw_pane_t1

0xdc6f,	// (0x0003d29b) grid_highlight_pane_cp019

0xd27d,	// (0x0003c8a9) list_tport_double_graphic_pane_ParamLimits

0xd27d,	// (0x0003c8a9) list_tport_double_graphic_pane

0xf109,	// (0x0003e735) list_highlight_pane_cp023_ParamLimits

0xf109,	// (0x0003e735) list_highlight_pane_cp023

0xd28e,	// (0x0003c8ba) list_tport_double_graphic_pane_g1_ParamLimits

0xd28e,	// (0x0003c8ba) list_tport_double_graphic_pane_g1

0xd29b,	// (0x0003c8c7) list_tport_double_graphic_pane_t1_ParamLimits

0xd29b,	// (0x0003c8c7) list_tport_double_graphic_pane_t1

0xd2b0,	// (0x0003c8dc) list_tport_double_graphic_pane_t2_ParamLimits

0xd2b0,	// (0x0003c8dc) list_tport_double_graphic_pane_t2

0x0001,

0xfdd6,	// (0x0003f402) list_tport_double_graphic_pane_t_ParamLimits

0xfdd6,	// (0x0003f402) list_tport_double_graphic_pane_t

0xdc6f,	// (0x0003d29b) main_cale_note_pane

0xb7cc,	// (0x0003adf8) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xb7cc,	// (0x0003adf8) cell_vitu2_function_top_wide_pane_cp01

0xce24,	// (0x0003c450) wait_bar_pane_cp05_ParamLimits

0xdc6f,	// (0x0003d29b) listscroll_cmail_pane

0x3ee2,	// (0x0003350e) list_cmail_pane

0xd2cc,	// (0x0003c8f8) list_cmail_body_pane

0xd2e1,	// (0x0003c90d) list_single_cmail_header_caption_pane

0xd2fb,	// (0x0003c927) list_single_cmail_header_detail_pane_ParamLimits

0xd2fb,	// (0x0003c927) list_single_cmail_header_detail_pane

0xd32a,	// (0x0003c956) list_single_cmail_header_caption_pane_t1

0x63de,	// (0x00035a0a) list_single_cmail_header_detail_pane_g1_ParamLimits

0x63de,	// (0x00035a0a) list_single_cmail_header_detail_pane_g1

0x63f6,	// (0x00035a22) list_single_cmail_header_detail_pane_g2_ParamLimits

0x63f6,	// (0x00035a22) list_single_cmail_header_detail_pane_g2

0x0002,

0xfddb,	// (0x0003f407) list_single_cmail_header_detail_pane_g_ParamLimits

0xfddb,	// (0x0003f407) list_single_cmail_header_detail_pane_g

0x6402,	// (0x00035a2e) list_single_cmail_header_detail_pane_t1_ParamLimits

0x6402,	// (0x00035a2e) list_single_cmail_header_detail_pane_t1

0x6466,	// (0x00035a92) list_single_cmail_header_editor_pane_bg_ParamLimits

0x6466,	// (0x00035a92) list_single_cmail_header_editor_pane_bg

0x379f,	// (0x00032dcb) list_cmail_body_pane_g1

0x3f6b,	// (0x00033597) list_cmail_body_pane_t1

0x2836,	// (0x00031e62) list_single_cmail_header_editor_pane_bg_g1

0xe823,	// (0x0003de4f) list_single_cmail_header_editor_pane_bg_g1_copy1

0x2846,	// (0x00031e72) list_single_cmail_header_editor_pane_bg_g1_copy2

0x283e,	// (0x00031e6a) list_single_cmail_header_editor_pane_bg_g1_copy3

0x2ac9,	// (0x000320f5) list_single_cmail_header_editor_pane_bg_g1_copy4

0x2866,	// (0x00031e92) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x2856,	// (0x00031e82) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x285e,	// (0x00031e8a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe803,	// (0x0003de2f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd33a,	// (0x0003c966) calenote_gesture_pane_ParamLimits

0xd33a,	// (0x0003c966) calenote_gesture_pane

0xd354,	// (0x0003c980) calenote_window_pane_ParamLimits

0xd354,	// (0x0003c980) calenote_window_pane

0x3f79,	// (0x000335a5) popup_note_window_cp01

0xd36c,	// (0x0003c998) calenote_swipe_1_pane_ParamLimits

0xd36c,	// (0x0003c998) calenote_swipe_1_pane

0xd17a,	// (0x0003c7a6) calenote_swipe_2_pane_ParamLimits

0xd17a,	// (0x0003c7a6) calenote_swipe_2_pane

0x3b20,	// (0x0003314c) calenote_swipe_1_pane_g1_ParamLimits

0x3b20,	// (0x0003314c) calenote_swipe_1_pane_g1

0x3b2d,	// (0x00033159) calenote_swipe_1_pane_g2_ParamLimits

0x3b2d,	// (0x00033159) calenote_swipe_1_pane_g2

0x0001,

0xfd0a,	// (0x0003f336) calenote_swipe_1_pane_g_ParamLimits

0xfd0a,	// (0x0003f336) calenote_swipe_1_pane_g

0x3f8b,	// (0x000335b7) calenote_swipe_1_pane_t1_ParamLimits

0x3f8b,	// (0x000335b7) calenote_swipe_1_pane_t1

0x3b20,	// (0x0003314c) calenote_swipe_2_pane_g1_ParamLimits

0x3b20,	// (0x0003314c) calenote_swipe_2_pane_g1

0x3faa,	// (0x000335d6) calenote_swipe_2_pane_g2_ParamLimits

0x3faa,	// (0x000335d6) calenote_swipe_2_pane_g2

0x0001,

0xfde7,	// (0x0003f413) calenote_swipe_2_pane_g_ParamLimits

0xfde7,	// (0x0003f413) calenote_swipe_2_pane_g

0x3fb6,	// (0x000335e2) calenote_swipe_2_pane_t1_ParamLimits

0x3fb6,	// (0x000335e2) calenote_swipe_2_pane_t1

0xdc6f,	// (0x0003d29b) main_mup_navstr_pane

0xa5d0,	// (0x00039bfc) main_mup3_pane_t7_ParamLimits

0xa5d0,	// (0x00039bfc) main_mup3_pane_t7

0xaf9f,	// (0x0003a5cb) main_mp4_pane_g6_ParamLimits

0xaf9f,	// (0x0003a5cb) main_mp4_pane_g6

0xb301,	// (0x0003a92d) main_image3_pane_t4_ParamLimits

0xb301,	// (0x0003a92d) main_image3_pane_t4

0xd37f,	// (0x0003c9ab) popup_navstr_preview_pane_ParamLimits

0xd37f,	// (0x0003c9ab) popup_navstr_preview_pane

0xd38b,	// (0x0003c9b7) scroll_navstr_pane_ParamLimits

0xd38b,	// (0x0003c9b7) scroll_navstr_pane

0xdc6f,	// (0x0003d29b) bg_popup_preview_window_pane_cp04

0x3fdd,	// (0x00033609) popup_navstr_preview_pane_t1

0xd397,	// (0x0003c9c3) scroll_navstr_pane_g1_ParamLimits

0xd397,	// (0x0003c9c3) scroll_navstr_pane_g1

0xd3a4,	// (0x0003c9d0) scroll_navstr_pane_t1_ParamLimits

0xd3a4,	// (0x0003c9d0) scroll_navstr_pane_t1

0x3f82,	// (0x000335ae) bg_button_pane_cp014

0x3f82,	// (0x000335ae) bg_button_pane_cp030

0x5e09,	// (0x00035435) list_double_fisheye_pane_g4_ParamLimits

0x5e09,	// (0x00035435) list_double_fisheye_pane_g4

0x5e15,	// (0x00035441) list_double_fisheye_pane_g5_ParamLimits

0x5e15,	// (0x00035441) list_double_fisheye_pane_g5

0x3eea,	// (0x00033516) sp_fs_scroll_pane_cp03

0x3c63,	// (0x0003328f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x3c6f,	// (0x0003329b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd27,	// (0x0003f353) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x3c7b,	// (0x000332a7) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xd2c2,	// (0x0003c8ee) sp_fs_scroll_pane_cp02

0xe527,	// (0x0003db53) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe527,	// (0x0003db53) popup_sp_fs_calendar_preview_list_single_pane

0xdc6f,	// (0x0003d29b) main_cam6_pano_pane

0xf109,	// (0x0003e735) main_mup3_pane_ParamLimits

0xdc6f,	// (0x0003d29b) main_phacti_pane

0xccf5,	// (0x0003c321) bg_button_pane_cp11

0xcd0d,	// (0x0003c339) main_mobtv_info_pane_g2_ParamLimits

0xcd0d,	// (0x0003c339) main_mobtv_info_pane_g2

0x0001,

0xfc87,	// (0x0003f2b3) main_mobtv_info_pane_g_ParamLimits

0xfc87,	// (0x0003f2b3) main_mobtv_info_pane_g

0xcec1,	// (0x0003c4ed) sc_clock_pane_t5_ParamLimits

0xcec1,	// (0x0003c4ed) sc_clock_pane_t5

0xcf66,	// (0x0003c592) main_radioblah_pane_g1_ParamLimits

0x3a2f,	// (0x0003305b) main_radioblah_pane_t3_ParamLimits

0x3a2f,	// (0x0003305b) main_radioblah_pane_t3

0x3a47,	// (0x00033073) main_radioblah_pane_t4_ParamLimits

0x3a47,	// (0x00033073) main_radioblah_pane_t4

0xcf84,	// (0x0003c5b0) main_radioblah_text_pane_ParamLimits

0xcf84,	// (0x0003c5b0) main_radioblah_text_pane

0xcf91,	// (0x0003c5bd) main_radioblah_info_pane_g1_ParamLimits

0xd02a,	// (0x0003c656) main_radioblah_info_pane_t4_ParamLimits

0xd02a,	// (0x0003c656) main_radioblah_info_pane_t4

0xf109,	// (0x0003e735) main_sp_fs_calendar_pane

0xd3b6,	// (0x0003c9e2) main_phacti_pane_g1

0xd3be,	// (0x0003c9ea) phacti_note_pane_ParamLimits

0xd3be,	// (0x0003c9ea) phacti_note_pane

0x3ff4,	// (0x00033620) phacti_term_pane_ParamLimits

0x3ff4,	// (0x00033620) phacti_term_pane

0x4009,	// (0x00033635) phacti_note_pane_t1_ParamLimits

0x4009,	// (0x00033635) phacti_note_pane_t1

0x6478,	// (0x00035aa4) phacti_term_pane_g1

0x6480,	// (0x00035aac) phacti_term_pane_t1_ParamLimits

0x6480,	// (0x00035aac) phacti_term_pane_t1

0x4052,	// (0x0003367e) popup_sp_fs_calendar_preview_list_single_pane_g1

0x405a,	// (0x00033686) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdf1,	// (0x0003f41d) popup_sp_fs_calendar_preview_list_single_pane_g

0x4062,	// (0x0003368e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x4062,	// (0x0003368e) popup_sp_fs_calendar_preview_list_single_pane_t1

0x4078,	// (0x000336a4) aid_popup_sp_fs_bg_corner_pane

0x1adc,	// (0x00031108) popup_sp_fs_calendar_preview_bg_pane_g1

0xdc6f,	// (0x0003d29b) popup_sp_fs_calendar_preview_bg_pane

0x4080,	// (0x000336ac) popup_sp_fs_calendar_preview_list_pane

0xf109,	// (0x0003e735) bg_main_sp_fs_cale_pane_ParamLimits

0xf109,	// (0x0003e735) bg_main_sp_fs_cale_pane

0x64aa,	// (0x00035ad6) listscroll_cale_mrui_pane_ParamLimits

0x64aa,	// (0x00035ad6) listscroll_cale_mrui_pane

0x64be,	// (0x00035aea) listscroll_sp_fs_schedule_track_pane

0x64c7,	// (0x00035af3) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x64c7,	// (0x00035af3) main_sp_fs_ctrlbar_pane_cp01

0x40bf,	// (0x000336eb) main_sp_fs_ribbon_pane

0x40c7,	// (0x000336f3) popup_sp_fs_cale_preview_window

0xd3fd,	// (0x0003ca29) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd3fd,	// (0x0003ca29) list_single_sp_fs_schedule_track_pane

0x6924,	// (0x00035f50) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x6924,	// (0x00035f50) bg_sp_fs_highlight_list_pane_cp03

0xd40f,	// (0x0003ca3b) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd40f,	// (0x0003ca3b) list_single_sp_fs_schedule_track_pane_g1

0xd41b,	// (0x0003ca47) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd41b,	// (0x0003ca47) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdf6,	// (0x0003f422) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdf6,	// (0x0003f422) list_single_sp_fs_schedule_track_pane_g

0xd427,	// (0x0003ca53) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd427,	// (0x0003ca53) list_single_sp_fs_schedule_track_pane_t1

0xd445,	// (0x0003ca71) sp_fs_schedule_track_pane_ParamLimits

0xd445,	// (0x0003ca71) sp_fs_schedule_track_pane

0x40d9,	// (0x00033705) sp_fs_schedule_track_pane_g1

0x40e1,	// (0x0003370d) sp_fs_schedule_track_pane_g2

0x40e9,	// (0x00033715) sp_fs_schedule_track_pane_g3

0x40f1,	// (0x0003371d) sp_fs_schedule_track_pane_g4

0x40f9,	// (0x00033725) sp_fs_schedule_track_pane_g5

0x0004,

0xfdfb,	// (0x0003f427) sp_fs_schedule_track_pane_g

0x2836,	// (0x00031e62) bg_sp_fs_schedule_viewer_highlight_g1

0xe823,	// (0x0003de4f) bg_sp_fs_schedule_viewer_highlight_g2

0x283e,	// (0x00031e6a) bg_sp_fs_schedule_viewer_highlight_g3

0x2846,	// (0x00031e72) bg_sp_fs_schedule_viewer_highlight_g4

0x2ac9,	// (0x000320f5) bg_sp_fs_schedule_viewer_highlight_g5

0x2856,	// (0x00031e82) bg_sp_fs_schedule_viewer_highlight_g6

0x285e,	// (0x00031e8a) bg_sp_fs_schedule_viewer_highlight_g7

0x2866,	// (0x00031e92) bg_sp_fs_schedule_viewer_highlight_g8

0xe803,	// (0x0003de2f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe06,	// (0x0003f432) bg_sp_fs_schedule_viewer_highlight_g

0xdc6f,	// (0x0003d29b) bg_main_sp_fs_ribbon_pane

0xd457,	// (0x0003ca83) main_sp_fs_ribbon_pane_g1

0x4101,	// (0x0003372d) main_sp_fs_ribbon_pane_t1

0xd460,	// (0x0003ca8c) main_sp_fs_ribbon_pane_t2

0x4110,	// (0x0003373c) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe19,	// (0x0003f445) main_sp_fs_ribbon_pane_t

0x411f,	// (0x0003374b) main_sp_fs_ribbon_scheduler_pane

0x4127,	// (0x00033753) bg_main_sp_fs_ribbon_pane_g1

0x4130,	// (0x0003375c) bg_main_sp_fs_ribbon_pane_g2

0x4139,	// (0x00033765) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe20,	// (0x0003f44c) bg_main_sp_fs_ribbon_pane_g

0x4141,	// (0x0003376d) main_sp_fs_ribbon_scheduler_pane_g1

0x414a,	// (0x00033776) main_sp_fs_ribbon_scheduler_pane_g2

0x4153,	// (0x0003377f) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe27,	// (0x0003f453) main_sp_fs_ribbon_scheduler_pane_g

0x415c,	// (0x00033788) list_cale_mrui_pane

0xd46f,	// (0x0003ca9b) sp_fs_scroll_pane_cp07_ParamLimits

0xd46f,	// (0x0003ca9b) sp_fs_scroll_pane_cp07

0xd485,	// (0x0003cab1) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd485,	// (0x0003cab1) bg_sp_fs_schedule_viewer_highlight

0x4165,	// (0x00033791) list_single_sp_fs_schedule_track_pane_cp01

0x416d,	// (0x00033799) list_sp_fs_schedule_track_pane

0x4175,	// (0x000337a1) sp_fs_scroll_pane_cp06_ParamLimits

0x4175,	// (0x000337a1) sp_fs_scroll_pane_cp06

0x1adc,	// (0x00031108) bgmain_sp_fs_calendar_pane_g1

0x64d8,	// (0x00035b04) list_single_cale_mrui_pane_ParamLimits

0x64d8,	// (0x00035b04) list_single_cale_mrui_pane

0x64fa,	// (0x00035b26) list_single_cale_mrui_row_pane_ParamLimits

0x64fa,	// (0x00035b26) list_single_cale_mrui_row_pane

0x6507,	// (0x00035b33) list_single_cale_mrui_row_pane_g1_ParamLimits

0x6507,	// (0x00035b33) list_single_cale_mrui_row_pane_g1

0x653f,	// (0x00035b6b) list_single_cale_mrui_row_pane_t1_ParamLimits

0x653f,	// (0x00035b6b) list_single_cale_mrui_row_pane_t1

0x6551,	// (0x00035b7d) list_single_cale_mrui_row_pane_t2_ParamLimits

0x6551,	// (0x00035b7d) list_single_cale_mrui_row_pane_t2

0x65b7,	// (0x00035be3) list_single_cale_mrui_row_pane_t3_ParamLimits

0x65b7,	// (0x00035be3) list_single_cale_mrui_row_pane_t3

0x65e6,	// (0x00035c12) list_single_cale_mrui_row_pane_t4_ParamLimits

0x65e6,	// (0x00035c12) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe33,	// (0x0003f45f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe33,	// (0x0003f45f) list_single_cale_mrui_row_pane_t

0x6615,	// (0x00035c41) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x6615,	// (0x00035c41) list_single_cmail_header_editor_pane_bg_cp01

0x6639,	// (0x00035c65) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x6639,	// (0x00035c65) list_single_cmail_header_editor_pane_bg_cp02

0xd492,	// (0x0003cabe) main_radioblah_text_pane_t1_ParamLimits

0xd492,	// (0x0003cabe) main_radioblah_text_pane_t1

0x423c,	// (0x00033868) cam6_indi_pane_cp01

0x4244,	// (0x00033870) cam6_mode_pane_cp01

0x424c,	// (0x00033878) cam6_pano_pane

0x4255,	// (0x00033881) cam6_zoom_pane_cp01

0x425f,	// (0x0003388b) cam6_pano_image_pane

0x4268,	// (0x00033894) cam6_pano_pane_g1

0x379f,	// (0x00032dcb) cam6_pano_pane_g2

0x4271,	// (0x0003389d) cam6_pano_pane_g3

0x427a,	// (0x000338a6) cam6_pano_pane_g4

0x20bc,	// (0x000316e8) cam6_pano_pane_g5

0x4283,	// (0x000338af) cam6_pano_pane_g6

0x428b,	// (0x000338b7) cam6_pano_pane_g7

0x4293,	// (0x000338bf) cam6_pano_pane_g8

0x429c,	// (0x000338c8) cam6_pano_pane_g9

0x0008,

0xfe3c,	// (0x0003f468) cam6_pano_pane_g

0xdc6f,	// (0x0003d29b) main_browser_tag_pane

0x3fd5,	// (0x00033601) grid_navstr_albumart_pane

0x42a7,	// (0x000338d3) cell_navstr_albumart_pane_ParamLimits

0x42a7,	// (0x000338d3) cell_navstr_albumart_pane

0x42c3,	// (0x000338ef) cell_navstr_albumart_pane_g1

0x13c0,	// (0x000309ec) cell_navstr_albumart_pane_g2

0x13d0,	// (0x000309fc) cell_navstr_albumart_pane_g3

0x13c8,	// (0x000309f4) cell_navstr_albumart_pane_g4

0x0003,

0xfe4f,	// (0x0003f47b) cell_navstr_albumart_pane_g

0xd4ad,	// (0x0003cad9) bt_list_pane_ParamLimits

0xd4ad,	// (0x0003cad9) bt_list_pane

0xd4c6,	// (0x0003caf2) bt_list_pane_t1

0xd4d5,	// (0x0003cb01) bt_list_pane_t2

0x0001,

0xfe58,	// (0x0003f484) bt_list_pane_t

0xdc6f,	// (0x0003d29b) main_cale_prevew_pane

0xd4e4,	// (0x0003cb10) popup_cale_preview_window_ParamLimits

0xd4e4,	// (0x0003cb10) popup_cale_preview_window

0xf109,	// (0x0003e735) bg_popup_preview_window_pane_cp05_ParamLimits

0xf109,	// (0x0003e735) bg_popup_preview_window_pane_cp05

0x42cb,	// (0x000338f7) list_cale_preview_pane_ParamLimits

0x42cb,	// (0x000338f7) list_cale_preview_pane

0xd4ff,	// (0x0003cb2b) list_double_cale_preview_pane_ParamLimits

0xd4ff,	// (0x0003cb2b) list_double_cale_preview_pane

0xd513,	// (0x0003cb3f) list_single_cale_preview_pane_ParamLimits

0xd513,	// (0x0003cb3f) list_single_cale_preview_pane

0xd52b,	// (0x0003cb57) list_single_cale_preview_pane_g1

0xd533,	// (0x0003cb5f) list_single_cale_preview_pane_t1_ParamLimits

0xd533,	// (0x0003cb5f) list_single_cale_preview_pane_t1

0xd548,	// (0x0003cb74) list_double_cale_preview_pane_g1

0xd550,	// (0x0003cb7c) list_double_cale_preview_pane_t1_ParamLimits

0xd550,	// (0x0003cb7c) list_double_cale_preview_pane_t1

0xd565,	// (0x0003cb91) list_double_cale_preview_pane_t2_ParamLimits

0xd565,	// (0x0003cb91) list_double_cale_preview_pane_t2

0x0001,

0xfe5d,	// (0x0003f489) list_double_cale_preview_pane_t_ParamLimits

0xfe5d,	// (0x0003f489) list_double_cale_preview_pane_t

0xdc6f,	// (0x0003d29b) main_ezdial_pane

0xf109,	// (0x0003e735) main_sp_fs_email_pane_ParamLimits

0xd194,	// (0x0003c7c0) cmail_ddmenu_btn01_pane_ParamLimits

0xd194,	// (0x0003c7c0) cmail_ddmenu_btn01_pane

0xd1b1,	// (0x0003c7dd) cmail_ddmenu_btn02_pane_ParamLimits

0xd1b1,	// (0x0003c7dd) cmail_ddmenu_btn02_pane

0xd1cf,	// (0x0003c7fb) cmail_ddmenu_btn03_pane_ParamLimits

0xd1cf,	// (0x0003c7fb) cmail_ddmenu_btn03_pane

0x5ecf,	// (0x000354fb) main_sp_fs_ctrlbar_pane_ParamLimits

0x5eeb,	// (0x00035517) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd2cc,	// (0x0003c8f8) list_cmail_body_pane_ParamLimits

0x3ef9,	// (0x00033525) bg_button_pane_cp12

0x3f0e,	// (0x0003353a) list_single_cmail_header_detail_pane_g3_ParamLimits

0x3f0e,	// (0x0003353a) list_single_cmail_header_detail_pane_g3

0x6440,	// (0x00035a6c) list_single_cmail_header_detail_pane_t2_ParamLimits

0x6440,	// (0x00035a6c) list_single_cmail_header_detail_pane_t2

0x0001,

0xfde2,	// (0x0003f40e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfde2,	// (0x0003f40e) list_single_cmail_header_detail_pane_t

0x6495,	// (0x00035ac1) phacti_term_pane_t2_ParamLimits

0x6495,	// (0x00035ac1) phacti_term_pane_t2

0x0001,

0xfdec,	// (0x0003f418) phacti_term_pane_t_ParamLimits

0xfdec,	// (0x0003f418) phacti_term_pane_t

0x42d7,	// (0x00033903) aid_size_list_single_double

0xd57d,	// (0x0003cba9) popup_ezdial_listscroll_window

0xd59d,	// (0x0003cbc9) popup_number_entry_window_cp01

0xee6d,	// (0x0003e499) bg_popup_call_pane_cp09

0x42e3,	// (0x0003390f) ezdial_list_pane

0x42eb,	// (0x00033917) scroll_pane_cp23

0x18bb,	// (0x00030ee7) bg_button_pane_cp028_ParamLimits

0x18bb,	// (0x00030ee7) bg_button_pane_cp028

0xd5ab,	// (0x0003cbd7) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd5ab,	// (0x0003cbd7) cmail_ddmenu_btn01_pane_g1

0xd5bb,	// (0x0003cbe7) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd5bb,	// (0x0003cbe7) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe62,	// (0x0003f48e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe62,	// (0x0003f48e) cmail_ddmenu_btn01_pane_g

0x42f3,	// (0x0003391f) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x42f3,	// (0x0003391f) cmail_ddmenu_btn01_pane_t1

0x15a7,	// (0x00030bd3) bg_button_pane_cp029_ParamLimits

0x15a7,	// (0x00030bd3) bg_button_pane_cp029

0xd5bb,	// (0x0003cbe7) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd5bb,	// (0x0003cbe7) cmail_ddmenu_btn02_pane_g1

0xd5d3,	// (0x0003cbff) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd5d3,	// (0x0003cbff) cmail_ddmenu_btn02_pane_t1

0x6924,	// (0x00035f50) bg_button_pane_cp031_ParamLimits

0x6924,	// (0x00035f50) bg_button_pane_cp031

0xd5bb,	// (0x0003cbe7) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd5bb,	// (0x0003cbe7) cmail_ddmenu_btn03_pane_g1

0xd5d3,	// (0x0003cbff) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd5d3,	// (0x0003cbff) cmail_ddmenu_btn03_pane_t1

0xb1aa,	// (0x0003a7d6) cell_dialer2_keypad_pane_t1_ParamLimits

0xb1c4,	// (0x0003a7f0) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xb1c4,	// (0x0003a7f0) cell_dialer2_keypad_pane_t1_copy1

0xcbab,	// (0x0003c1d7) ncimui_group_button_pane

0xf109,	// (0x0003e735) main_sp_fs_calendar_pane_ParamLimits

0xd2e1,	// (0x0003c90d) list_single_cmail_header_caption_pane_ParamLimits

0x4088,	// (0x000336b4) aid_recal_txt_sm_pane

0xdc6f,	// (0x0003d29b) mian_recal_day_pane

0x40c7,	// (0x000336f3) popup_sp_fs_cale_preview_window_ParamLimits

0xdc6f,	// (0x0003d29b) list_recal_day_pane

0x432a,	// (0x00033956) list_single_recal_day_pane_ParamLimits

0x432a,	// (0x00033956) list_single_recal_day_pane

0x433c,	// (0x00033968) list_single_recal_day_pane_g1_ParamLimits

0x433c,	// (0x00033968) list_single_recal_day_pane_g1

0x4348,	// (0x00033974) list_single_recal_day_pane_g2_ParamLimits

0x4348,	// (0x00033974) list_single_recal_day_pane_g2

0x4354,	// (0x00033980) list_single_recal_day_pane_g3_ParamLimits

0x4354,	// (0x00033980) list_single_recal_day_pane_g3

0xd5f7,	// (0x0003cc23) list_single_recal_day_pane_g4_ParamLimits

0xd5f7,	// (0x0003cc23) list_single_recal_day_pane_g4

0x4360,	// (0x0003398c) list_single_recal_day_pane_g5_ParamLimits

0x4360,	// (0x0003398c) list_single_recal_day_pane_g5

0x436c,	// (0x00033998) list_single_recal_day_pane_g6_ParamLimits

0x436c,	// (0x00033998) list_single_recal_day_pane_g6

0x0005,

0xfe71,	// (0x0003f49d) list_single_recal_day_pane_g_ParamLimits

0xfe71,	// (0x0003f49d) list_single_recal_day_pane_g

0x4378,	// (0x000339a4) list_single_recal_day_pane_t1

0x4386,	// (0x000339b2) list_single_recal_day_pane_t2

0x0001,

0xfe7e,	// (0x0003f4aa) list_single_recal_day_pane_t

0xd605,	// (0x0003cc31) ncimui_query_button_pane_ParamLimits

0xd605,	// (0x0003cc31) ncimui_query_button_pane

0xd615,	// (0x0003cc41) ncimui_query_button_pane_t1_ParamLimits

0xd615,	// (0x0003cc41) ncimui_query_button_pane_t1

0x4394,	// (0x000339c0) ncimui_query_button_pane_t2_ParamLimits

0x4394,	// (0x000339c0) ncimui_query_button_pane_t2

0x0001,

0xfe83,	// (0x0003f4af) ncimui_query_button_pane_t_ParamLimits

0xfe83,	// (0x0003f4af) ncimui_query_button_pane_t

0xd628,	// (0x0003cc54) query_button_pane_ParamLimits

0xd628,	// (0x0003cc54) query_button_pane

0xdc6f,	// (0x0003d29b) bg_button_pane_cp0028

0x43a7,	// (0x000339d3) query_button_pane_t1

0x961d,	// (0x00038c49) main_tport_pane_ParamLimits

0xd1fd,	// (0x0003c829) bg_popup_window_pane_cp01_ParamLimits

0xd1fd,	// (0x0003c829) bg_popup_window_pane_cp01

0xd20a,	// (0x0003c836) heading_pane_cp08_ParamLimits

0xd20a,	// (0x0003c836) heading_pane_cp08

0xd218,	// (0x0003c844) heading_pane_cp07_ParamLimits

0xd218,	// (0x0003c844) heading_pane_cp07

0xd26d,	// (0x0003c899) cell_tport_appsw_pane_g2

0x0002,

0xfdcf,	// (0x0003f3fb) cell_tport_appsw_pane_g

0x586d,	// (0x00034e99) input_candi_list_open_g1

0xe9be,	// (0x0003dfea) list_cale_time_pane_g6_ParamLimits

0xe9be,	// (0x0003dfea) list_cale_time_pane_g6

0xa08a,	// (0x000396b6) aid_size_touch_calib_1_ParamLimits

0xa08a,	// (0x000396b6) aid_size_touch_calib_1

0xa096,	// (0x000396c2) aid_size_touch_calib_2_ParamLimits

0xa096,	// (0x000396c2) aid_size_touch_calib_2

0xa0a4,	// (0x000396d0) aid_size_touch_calib_3_ParamLimits

0xa0a4,	// (0x000396d0) aid_size_touch_calib_3

0xa0b4,	// (0x000396e0) aid_size_touch_calib_4_ParamLimits

0xa0b4,	// (0x000396e0) aid_size_touch_calib_4

0xa0c2,	// (0x000396ee) main_touch_calib_button_group_pane_ParamLimits

0xa0c2,	// (0x000396ee) main_touch_calib_button_group_pane

0xa0d0,	// (0x000396fc) main_touch_calib_pane_g1_ParamLimits

0xa0dc,	// (0x00039708) main_touch_calib_pane_g2_ParamLimits

0xa0e8,	// (0x00039714) main_touch_calib_pane_g3_ParamLimits

0xa0f4,	// (0x00039720) main_touch_calib_pane_g4_ParamLimits

0xf7b8,	// (0x0003ede4) main_touch_calib_pane_g_ParamLimits

0xa100,	// (0x0003972c) main_touch_calib_pane_t1_ParamLimits

0xa117,	// (0x00039743) main_touch_calib_pane_t2_ParamLimits

0xa12e,	// (0x0003975a) main_touch_calib_pane_t3_ParamLimits

0xa142,	// (0x0003976e) main_touch_calib_pane_t4_ParamLimits

0xa158,	// (0x00039784) main_touch_calib_pane_t5_ParamLimits

0xf7c1,	// (0x0003eded) main_touch_calib_pane_t_ParamLimits

0x1e86,	// (0x000314b2) list_single_fp_cale_pane_g3_ParamLimits

0x1e86,	// (0x000314b2) list_single_fp_cale_pane_g3

0xf109,	// (0x0003e735) bg_button_pane_cp012_ParamLimits

0xf109,	// (0x0003e735) bg_vkb2_func_pane_cp03_ParamLimits

0xbf2b,	// (0x0003b557) cell_vitu2_function_top_pane_g1_ParamLimits

0xf109,	// (0x0003e735) bg_vkb2_func_pane_cp04_ParamLimits

0xcb5a,	// (0x0003c186) main_ncimui_button_group_pane_ParamLimits

0xcb5a,	// (0x0003c186) main_ncimui_button_group_pane

0xcb99,	// (0x0003c1c5) main_ncimui_pane_t3_ParamLimits

0xcb99,	// (0x0003c1c5) main_ncimui_pane_t3

0x3feb,	// (0x00033617) phacti_button_group_pane

0x42d7,	// (0x00033903) aid_size_list_single_double_ParamLimits

0xd57d,	// (0x0003cba9) popup_ezdial_listscroll_window_ParamLimits

0xd59d,	// (0x0003cbc9) popup_number_entry_window_cp01_ParamLimits

0xd635,	// (0x0003cc61) phacti_button_pane_ParamLimits

0xd635,	// (0x0003cc61) phacti_button_pane

0xdc6f,	// (0x0003d29b) bg_button_pane_cp14

0x43b5,	// (0x000339e1) phacti_button_pane_t1

0xd646,	// (0x0003cc72) main_touch_calib_button_pane_ParamLimits

0xd646,	// (0x0003cc72) main_touch_calib_button_pane

0xe411,	// (0x0003da3d) bg_button_pane_cp18_ParamLimits

0xe411,	// (0x0003da3d) bg_button_pane_cp18

0x43c3,	// (0x000339ef) main_touch_calib_button_pane_t1_ParamLimits

0x43c3,	// (0x000339ef) main_touch_calib_button_pane_t1

0x43d9,	// (0x00033a05) main_touch_calib_button_pane_t2_ParamLimits

0x43d9,	// (0x00033a05) main_touch_calib_button_pane_t2

0x0001,

0xfe88,	// (0x0003f4b4) main_touch_calib_button_pane_t_ParamLimits

0xfe88,	// (0x0003f4b4) main_touch_calib_button_pane_t

0xdc6f,	// (0x0003d29b) cell_ncimui_button_pane

0xdc6f,	// (0x0003d29b) bg_button_pane_cp032

0x43f7,	// (0x00033a23) cell_ncimui_button_pane_t1

0xb220,	// (0x0003a84c) image3_infobar_pane_ParamLimits

0xb220,	// (0x0003a84c) image3_infobar_pane

0xcee3,	// (0x0003c50f) fs_bigclock_status_pane_ParamLimits

0xcee3,	// (0x0003c50f) fs_bigclock_status_pane

0xcef0,	// (0x0003c51c) main_fs_bigclock_clock_pane_ParamLimits

0xcef0,	// (0x0003c51c) main_fs_bigclock_clock_pane

0xcf00,	// (0x0003c52c) main_fs_bigclock_indi_pane_ParamLimits

0xcf00,	// (0x0003c52c) main_fs_bigclock_indi_pane

0xcf32,	// (0x0003c55e) main_fs_bigclock_swipe_pane_ParamLimits

0xcf32,	// (0x0003c55e) main_fs_bigclock_swipe_pane

0xdc6f,	// (0x0003d29b) main_fs_clock_dumped_data

0x38ac,	// (0x00032ed8) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x38ac,	// (0x00032ed8) list_single_fs_bigclock_indicator_pane_g1

0x38cc,	// (0x00032ef8) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x38cc,	// (0x00032ef8) list_single_fs_bigclock_indicator_pane_g2

0x38e6,	// (0x00032f12) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x38e6,	// (0x00032f12) list_single_fs_bigclock_indicator_pane_g3

0x3902,	// (0x00032f2e) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x3902,	// (0x00032f2e) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcbb,	// (0x0003f2e7) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcbb,	// (0x0003f2e7) list_single_fs_bigclock_indicator_pane_g

0x3928,	// (0x00032f54) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x3928,	// (0x00032f54) list_single_fs_bigclock_indicator_pane_t1

0x3950,	// (0x00032f7c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x3950,	// (0x00032f7c) list_single_fs_bigclock_indicator_pane_t2

0x3978,	// (0x00032fa4) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x3978,	// (0x00032fa4) list_single_fs_bigclock_indicator_pane_t3

0x39a2,	// (0x00032fce) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x39a2,	// (0x00032fce) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfcc6,	// (0x0003f2f2) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfcc6,	// (0x0003f2f2) list_single_fs_bigclock_indicator_pane_t

0x4405,	// (0x00033a31) image3_infobar_fav_pane_ParamLimits

0x4405,	// (0x00033a31) image3_infobar_fav_pane

0x4415,	// (0x00033a41) image3_infobar_loc_pane_ParamLimits

0x4415,	// (0x00033a41) image3_infobar_loc_pane

0x442b,	// (0x00033a57) image3_infobar_time_pane_ParamLimits

0x442b,	// (0x00033a57) image3_infobar_time_pane

0x1adc,	// (0x00031108) image3_infobar_time_pane_g1

0x443b,	// (0x00033a67) image3_infobar_time_pane_t1

0x1adc,	// (0x00031108) image3_infobar_loc_pane_g1

0x4449,	// (0x00033a75) image3_infobar_loc_pane_g2

0x0001,

0xfe8d,	// (0x0003f4b9) image3_infobar_loc_pane_g

0x4451,	// (0x00033a7d) image3_infobar_loc_pane_t1

0x1adc,	// (0x00031108) image3_infobar_fav_pane_g1

0x445f,	// (0x00033a8b) image3_infobar_fav_pane_g2

0x0001,

0xfe92,	// (0x0003f4be) image3_infobar_fav_pane_g

0x4467,	// (0x00033a93) fs_bigclock_status_battery_pane

0x4470,	// (0x00033a9c) fs_bigclock_status_signal_pane

0x4479,	// (0x00033aa5) fs_bigclock_status_title_pane

0x4482,	// (0x00033aae) fs_bigclock_status_signal_pane_g1

0x448b,	// (0x00033ab7) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe97,	// (0x0003f4c3) fs_bigclock_status_signal_pane_g

0x4493,	// (0x00033abf) fs_bigclock_status_battery_pane_g1

0x449c,	// (0x00033ac8) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe9c,	// (0x0003f4c8) fs_bigclock_status_battery_pane_g

0x44a4,	// (0x00033ad0) fs_bigclock_status_title_pane_t1

0x1adc,	// (0x00031108) main_fs_bigclock_clock_pane_g1

0x44b2,	// (0x00033ade) main_fs_bigclock_clock_pane_g2

0x44b2,	// (0x00033ade) main_fs_bigclock_clock_pane_g3

0x44b2,	// (0x00033ade) main_fs_bigclock_clock_pane_g4

0x0003,

0xfea1,	// (0x0003f4cd) main_fs_bigclock_clock_pane_g

0x44be,	// (0x00033aea) main_fs_bigclock_clock_pane_t1

0x44cc,	// (0x00033af8) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeaa,	// (0x0003f4d6) main_fs_bigclock_clock_pane_t

0x44db,	// (0x00033b07) list_single_fs_bigclock_indicator_pane_ParamLimits

0x44db,	// (0x00033b07) list_single_fs_bigclock_indicator_pane

0xd658,	// (0x0003cc84) list_single_fs_bigclock_pane_ParamLimits

0xd658,	// (0x0003cc84) list_single_fs_bigclock_pane

0x44f5,	// (0x00033b21) main_fs_bigclock_indicator_pane_t1

0x4504,	// (0x00033b30) list_single_fs_bigclock_pane_g1

0x450c,	// (0x00033b38) list_single_fs_bigclock_pane_t1

0x1adc,	// (0x00031108) main_fs_bigclock_swipe_pane_g1

0x454a,	// (0x00033b76) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfebb,	// (0x0003f4e7) main_fs_bigclock_swipe_pane_g

0x4552,	// (0x00033b7e) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x4552,	// (0x00033b7e) main_fs_bigclock_swipe_pane_t1

0x857d,	// (0x00037ba9) call_type_pane_ParamLimits

0xdc6f,	// (0x0003d29b) main_btmg_pane

0x6533,	// (0x00035b5f) list_single_cale_mrui_row_pane_g2_ParamLimits

0x6533,	// (0x00035b5f) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe2e,	// (0x0003f45a) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe2e,	// (0x0003f45a) list_single_cale_mrui_row_pane_g

0x4311,	// (0x0003393d) list_recal_vselct_arw_lo_pane

0x4319,	// (0x00033945) list_recal_vselct_arw_up_pane

0x4321,	// (0x0003394d) list_recal_vselct_pane

0x456f,	// (0x00033b9b) btmg_button_pane

0xd6bb,	// (0x0003cce7) main_btmg_pane_g1

0xdc6f,	// (0x0003d29b) bg_button_pane_cp044

0x4579,	// (0x00033ba5) btmg_button_pane_t1

0x159f,	// (0x00030bcb) aid_listscroll_gen

0xf109,	// (0x0003e735) main_cntbar_detail_pane

0x3eda,	// (0x00033506) list_cmail_folder_pane

0x3eea,	// (0x00033516) sp_fs_scroll_pane_cp03_ParamLimits

0xf117,	// (0x0003e743) list_single_fs_dyc_pane_cp01_ParamLimits

0xf117,	// (0x0003e743) list_single_fs_dyc_pane_cp01

0x4587,	// (0x00033bb3) aid_size_cmail_indent

0x6655,	// (0x00035c81) list_single_dyc_row_pane_cp01

0xd6e3,	// (0x0003cd0f) cntbar_detail_list_pane_ParamLimits

0xd6e3,	// (0x0003cd0f) cntbar_detail_list_pane

0xd723,	// (0x0003cd4f) main_cntbar_detail_cont_pane_ParamLimits

0xd723,	// (0x0003cd4f) main_cntbar_detail_cont_pane

0x8571,	// (0x00037b9d) scroll_pane_cp032_ParamLimits

0x8571,	// (0x00037b9d) scroll_pane_cp032

0xd72f,	// (0x0003cd5b) cntbar_detail_list_event_pane_ParamLimits

0xd72f,	// (0x0003cd5b) cntbar_detail_list_event_pane

0xd6f1,	// (0x0003cd1d) cntbar_detail_list_shct_pane

0xe871,	// (0x0003de9d) aid_list_gen

0x4599,	// (0x00033bc5) aid_scroll

0x45a2,	// (0x00033bce) aid_size_touch_scroll_bar

0xd73f,	// (0x0003cd6b) aid_list_double

0x45b4,	// (0x00033be0) aid_list_single

0x2f5c,	// (0x00032588) aid_list_single_lg

0x665e,	// (0x00035c8a) aid_list_z_g_a_sm

0x6666,	// (0x00035c92) aid_list_z_g_d

0x666e,	// (0x00035c9a) aid_txt_z_prm

0x667c,	// (0x00035ca8) aid_txt_z_prm_cp01

0x668a,	// (0x00035cb6) aid_txt_z_sec

0xd748,	// (0x0003cd74) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd748,	// (0x0003cd74) main_cntbar_detail_cont_pane_g1

0xd755,	// (0x0003cd81) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd755,	// (0x0003cd81) main_cntbar_detail_cont_pane_g2

0x0001,

0xfec0,	// (0x0003f4ec) main_cntbar_detail_cont_pane_g_ParamLimits

0xfec0,	// (0x0003f4ec) main_cntbar_detail_cont_pane_g

0x45f7,	// (0x00033c23) main_cntbar_detail_cont_pane_t1

0x4605,	// (0x00033c31) main_cntbar_detail_cont_pane_t2

0x4613,	// (0x00033c3f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfec5,	// (0x0003f4f1) main_cntbar_detail_cont_pane_t

0xd761,	// (0x0003cd8d) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd761,	// (0x0003cd8d) cell_cntbar_detail_list_shct_pane

0x4621,	// (0x00033c4d) cntbar_detail_list_shct_pane_g1

0x462a,	// (0x00033c56) cntbar_detail_list_shct_pane_g2

0x0001,

0xfecc,	// (0x0003f4f8) cntbar_detail_list_shct_pane_g

0xd775,	// (0x0003cda1) cntbar_detail_list_event_pane_g1_ParamLimits

0xd775,	// (0x0003cda1) cntbar_detail_list_event_pane_g1

0xd781,	// (0x0003cdad) cntbar_detail_list_event_pane_g2_ParamLimits

0xd781,	// (0x0003cdad) cntbar_detail_list_event_pane_g2

0x0005,

0xfed1,	// (0x0003f4fd) cntbar_detail_list_event_pane_g_ParamLimits

0xfed1,	// (0x0003f4fd) cntbar_detail_list_event_pane_g

0xd7ef,	// (0x0003ce1b) cntbar_detail_list_event_pane_t1_ParamLimits

0xd7ef,	// (0x0003ce1b) cntbar_detail_list_event_pane_t1

0xd804,	// (0x0003ce30) cntbar_detail_list_event_pane_t2_ParamLimits

0xd804,	// (0x0003ce30) cntbar_detail_list_event_pane_t2

0x0002,

0xfede,	// (0x0003f50a) cntbar_detail_list_event_pane_t_ParamLimits

0xfede,	// (0x0003f50a) cntbar_detail_list_event_pane_t

0x1adc,	// (0x00031108) cell_cntbar_detail_list_shct_pane_g1

0x8915,	// (0x00037f41) navi_pane_mv_g3

0xf109,	// (0x0003e735) main_cntbar_detail_pane_ParamLimits

0xdc6f,	// (0x0003d29b) main_notif_wgt_pane

0xaef4,	// (0x0003a520) aid_tch_main_mp4_pane_g4

0xb109,	// (0x0003a735) popup_slider_window_cp02

0x4308,	// (0x00033934) list_recal_day_event_pane

0xd6c3,	// (0x0003ccef) cntbar_detail_btn_pane_ParamLimits

0xd6c3,	// (0x0003ccef) cntbar_detail_btn_pane

0xd6d3,	// (0x0003ccff) cntbar_detail_btn_pane_cp01_ParamLimits

0xd6d3,	// (0x0003ccff) cntbar_detail_btn_pane_cp01

0xd6f1,	// (0x0003cd1d) cntbar_detail_list_shct_pane_ParamLimits

0xd6fd,	// (0x0003cd29) cntbar_detail_pane_g1_ParamLimits

0xd6fd,	// (0x0003cd29) cntbar_detail_pane_g1

0xd70d,	// (0x0003cd39) cntbar_detail_pane_t1_ParamLimits

0xd70d,	// (0x0003cd39) cntbar_detail_pane_t1

0xd78d,	// (0x0003cdb9) cntbar_detail_list_event_pane_g3_ParamLimits

0xd78d,	// (0x0003cdb9) cntbar_detail_list_event_pane_g3

0xd7a5,	// (0x0003cdd1) cntbar_detail_list_event_pane_g4_ParamLimits

0xd7a5,	// (0x0003cdd1) cntbar_detail_list_event_pane_g4

0xd7bd,	// (0x0003cde9) cntbar_detail_list_event_pane_g5_ParamLimits

0xd7bd,	// (0x0003cde9) cntbar_detail_list_event_pane_g5

0xd7d5,	// (0x0003ce01) cntbar_detail_list_event_pane_g6_ParamLimits

0xd7d5,	// (0x0003ce01) cntbar_detail_list_event_pane_g6

0xd819,	// (0x0003ce45) cntbar_detail_list_event_pane_t3_ParamLimits

0xd819,	// (0x0003ce45) cntbar_detail_list_event_pane_t3

0xd82b,	// (0x0003ce57) popup_notif_wgt_window_ParamLimits

0xd82b,	// (0x0003ce57) popup_notif_wgt_window

0xd83b,	// (0x0003ce67) popup_submenu_window_cp01_ParamLimits

0xd83b,	// (0x0003ce67) popup_submenu_window_cp01

0xee6d,	// (0x0003e499) bg_popup_window_pane_cp10

0x4633,	// (0x00033c5f) listscroll_notif_wgt_pane

0x463d,	// (0x00033c69) list_notif_wgt_window

0x4646,	// (0x00033c72) scroll_pane_cp033

0x464f,	// (0x00033c7b) list_notif_wgt_row_pane_ParamLimits

0x464f,	// (0x00033c7b) list_notif_wgt_row_pane

0x4663,	// (0x00033c8f) aid_size_list_notif_wgt_del

0x466c,	// (0x00033c98) list_notif_wgt_row_pane_g1

0x4674,	// (0x00033ca0) list_notif_wgt_row_pane_g2

0x467c,	// (0x00033ca8) list_notif_wgt_row_pane_g3

0x0002,

0xfee5,	// (0x0003f511) list_notif_wgt_row_pane_g

0x4685,	// (0x00033cb1) list_notif_wgt_row_pane_t1

0x4693,	// (0x00033cbf) list_notif_wgt_row_pane_t2

0x46a1,	// (0x00033ccd) list_notif_wgt_row_pane_t3

0x0002,

0xfeec,	// (0x0003f518) list_notif_wgt_row_pane_t

0x2b23,	// (0x0003214f) list_recal_day_event_pane_g1

0x46af,	// (0x00033cdb) list_recal_day_event_pane_t1

0xdc6f,	// (0x0003d29b) bg_button_pane_cp045

0x46be,	// (0x00033cea) cntbar_detail_btn_pane_t1

0x15a7,	// (0x00030bd3) main_callh_pane_ParamLimits

0x15a7,	// (0x00030bd3) main_callh_pane

0xdc6f,	// (0x0003d29b) main_coverflow0_pane

0xdc6f,	// (0x0003d29b) main_wgtman_pane

0xcf4a,	// (0x0003c576) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xcf4a,	// (0x0003c576) main_fs_bigclock_unlock_btn_pane

0xd25d,	// (0x0003c889) bg_button_pane_cp16

0xd275,	// (0x0003c8a1) cell_tport_appsw_pane_g3

0xd849,	// (0x0003ce75) cf0_flow_pane_ParamLimits

0xd849,	// (0x0003ce75) cf0_flow_pane

0x46cc,	// (0x00033cf8) listscroll_cf0_pane

0x46d5,	// (0x00033d01) main_cf0_pane_g1

0xd858,	// (0x0003ce84) main_cf0_pane_t1_ParamLimits

0xd858,	// (0x0003ce84) main_cf0_pane_t1

0xd86c,	// (0x0003ce98) main_cf0_pane_t2_ParamLimits

0xd86c,	// (0x0003ce98) main_cf0_pane_t2

0x0001,

0xfef3,	// (0x0003f51f) main_cf0_pane_t_ParamLimits

0xfef3,	// (0x0003f51f) main_cf0_pane_t

0x46df,	// (0x00033d0b) scroll_pane_cp11

0xd880,	// (0x0003ceac) cf0_flow_pane_g1

0xd888,	// (0x0003ceb4) cf0_flow_pane_g2

0x0001,

0xfef8,	// (0x0003f524) cf0_flow_pane_g

0xd890,	// (0x0003cebc) cf0_flow_pane_t1

0xdc6f,	// (0x0003d29b) main_call6_pane

0xdc6f,	// (0x0003d29b) main_calllock_pane

0xd89e,	// (0x0003ceca) call6_btn_grp_pane_ParamLimits

0xd89e,	// (0x0003ceca) call6_btn_grp_pane

0xd8ad,	// (0x0003ced9) call6_pane_g1_ParamLimits

0xd8ad,	// (0x0003ced9) call6_pane_g1

0xd8bd,	// (0x0003cee9) popup_call6_1st_window_ParamLimits

0xd8bd,	// (0x0003cee9) popup_call6_1st_window

0xd8cb,	// (0x0003cef7) popup_call6_2nd_window_ParamLimits

0xd8cb,	// (0x0003cef7) popup_call6_2nd_window

0xd8d9,	// (0x0003cf05) cell_call6_btn_pane_ParamLimits

0xd8d9,	// (0x0003cf05) cell_call6_btn_pane

0xee6d,	// (0x0003e499) bg_popup_call2_in_pane_cp03

0x46ea,	// (0x00033d16) popup_call6_1st_window_g1

0x46f2,	// (0x00033d1e) popup_call6_1st_window_g2

0x46fa,	// (0x00033d26) popup_call6_1st_window_g3

0x0002,

0xfefd,	// (0x0003f529) popup_call6_1st_window_g

0x4702,	// (0x00033d2e) popup_call6_1st_window_t1

0x4711,	// (0x00033d3d) popup_call6_1st_window_t2

0x4721,	// (0x00033d4d) popup_call6_1st_window_t3

0x0002,

0xff04,	// (0x0003f530) popup_call6_1st_window_t

0xee6d,	// (0x0003e499) bg_popup_call2_in_pane_cp04

0x46ea,	// (0x00033d16) popup_call6_2nd_window_g1

0x46f2,	// (0x00033d1e) popup_call6_2nd_window_g2

0x46fa,	// (0x00033d26) popup_call6_2nd_window_g3

0x0002,

0xfefd,	// (0x0003f529) popup_call6_2nd_window_g

0x4702,	// (0x00033d2e) popup_call6_2nd_window_t1

0xdc6f,	// (0x0003d29b) bg_button_pane_cp15

0x4731,	// (0x00033d5d) cell_call6_btn_pane_g1

0x473a,	// (0x00033d66) cell_call6_btn_pane_t1

0xd8e8,	// (0x0003cf14) listscroll_wgtman_pane_ParamLimits

0xd8e8,	// (0x0003cf14) listscroll_wgtman_pane

0xd8f7,	// (0x0003cf23) wgtman_btn_pane_ParamLimits

0xd8f7,	// (0x0003cf23) wgtman_btn_pane

0xed33,	// (0x0003e35f) aid_scroll_copy1

0x4749,	// (0x00033d75) list_wgtman_pane

0xd905,	// (0x0003cf31) wgtman_btn_pane_g1_ParamLimits

0xd905,	// (0x0003cf31) wgtman_btn_pane_g1

0xd911,	// (0x0003cf3d) wgtman_btn_pane_t1_ParamLimits

0xd911,	// (0x0003cf3d) wgtman_btn_pane_t1

0x4753,	// (0x00033d7f) wgtman_btn_pane_t2_ParamLimits

0x4753,	// (0x00033d7f) wgtman_btn_pane_t2

0x0001,

0xff0b,	// (0x0003f537) wgtman_btn_pane_t_ParamLimits

0xff0b,	// (0x0003f537) wgtman_btn_pane_t

0x4767,	// (0x00033d93) listrow_wgtman_pane_ParamLimits

0x4767,	// (0x00033d93) listrow_wgtman_pane

0x477b,	// (0x00033da7) listrow_wgtman_pane_g1

0xd923,	// (0x0003cf4f) listrow_wgtman_pane_g2

0x0001,

0xff10,	// (0x0003f53c) listrow_wgtman_pane_g

0x6698,	// (0x00035cc4) listrow_wgtman_pane_t1

0x66a6,	// (0x00035cd2) listrow_wgtman_pane_t2

0x0001,

0xff15,	// (0x0003f541) listrow_wgtman_pane_t

0x66b4,	// (0x00035ce0) wait_bar_pane_cp09

0x47a8,	// (0x00033dd4) main_calllock_btn_pane

0x47b2,	// (0x00033dde) main_calllock_pane_g1

0xdc6f,	// (0x0003d29b) bg_button_pane_cp17

0x47be,	// (0x00033dea) main_calllock_btn_pane_g1

0x47c7,	// (0x00033df3) main_calllock_btn_pane_t1

0xdc6f,	// (0x0003d29b) main_dialer3_pane

0xdc6f,	// (0x0003d29b) main_fmrd2_pane

0x1adc,	// (0x00031108) main_fs_bigclock_unlock_btn_pane_g1

0x47de,	// (0x00033e0a) main_fs_bigclock_unlock_btn_pane_t1

0xd92d,	// (0x0003cf59) area_fmrd2_info_pane_ParamLimits

0xd92d,	// (0x0003cf59) area_fmrd2_info_pane

0xd93c,	// (0x0003cf68) area_fmrd2_visual_pane_ParamLimits

0xd93c,	// (0x0003cf68) area_fmrd2_visual_pane

0xd94a,	// (0x0003cf76) fmrd2_indi_pane_ParamLimits

0xd94a,	// (0x0003cf76) fmrd2_indi_pane

0xd957,	// (0x0003cf83) area_fmrd2_visual_pane_g1

0xd95f,	// (0x0003cf8b) area_fmrd2_visual_pane_t1

0xd96f,	// (0x0003cf9b) area_fmrd2_visual_pane_t2

0xd97f,	// (0x0003cfab) area_fmrd2_visual_pane_t3

0x0002,

0xff1f,	// (0x0003f54b) area_fmrd2_visual_pane_t

0xd98f,	// (0x0003cfbb) area_fmrd2_info_pane_g1

0xd997,	// (0x0003cfc3) area_fmrd2_info_pane_t1

0xd9a7,	// (0x0003cfd3) area_fmrd2_info_pane_t2

0xd9b7,	// (0x0003cfe3) area_fmrd2_info_pane_t3

0xd9c7,	// (0x0003cff3) area_fmrd2_info_pane_t4

0x0003,

0xff26,	// (0x0003f552) area_fmrd2_info_pane_t

0xd9d7,	// (0x0003d003) fmrd2_indi_pane_t1

0xd9e7,	// (0x0003d013) fmrd2_indi_pane_t2

0xd9f7,	// (0x0003d023) fmrd2_indi_pane_t3

0x0002,

0xff2f,	// (0x0003f55b) fmrd2_indi_pane_t

0x3911,	// (0x00032f3d) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x3911,	// (0x00032f3d) list_single_fs_bigclock_indicator_pane_g5

0x39b7,	// (0x00032fe3) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x39b7,	// (0x00032fe3) list_single_fs_bigclock_indicator_pane_t5

0xd3d4,	// (0x0003ca00) aid_cell_bcale_month_pane_ParamLimits

0xd3d4,	// (0x0003ca00) aid_cell_bcale_month_pane

0xd3e0,	// (0x0003ca0c) bcale_month_pane_ParamLimits

0xd3e0,	// (0x0003ca0c) bcale_month_pane

0xd3ee,	// (0x0003ca1a) bcale_preview_pane_ParamLimits

0xd3ee,	// (0x0003ca1a) bcale_preview_pane

0x450c,	// (0x00033b38) list_single_fs_bigclock_pane_t1_ParamLimits

0x4526,	// (0x00033b52) list_single_fs_bigclock_pane_t2_ParamLimits

0x4526,	// (0x00033b52) list_single_fs_bigclock_pane_t2

0x0001,

0xfeb6,	// (0x0003f4e2) list_single_fs_bigclock_pane_t_ParamLimits

0xfeb6,	// (0x0003f4e2) list_single_fs_bigclock_pane_t

0x47d6,	// (0x00033e02) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff1a,	// (0x0003f546) main_fs_bigclock_unlock_btn_pane_g

0xda07,	// (0x0003d033) aid_dia3_key_size_ParamLimits

0xda07,	// (0x0003d033) aid_dia3_key_size

0xda13,	// (0x0003d03f) aid_dia3_listrow_size_ParamLimits

0xda13,	// (0x0003d03f) aid_dia3_listrow_size

0xda21,	// (0x0003d04d) dia3_keypad_fun_pane_ParamLimits

0xda21,	// (0x0003d04d) dia3_keypad_fun_pane

0xda31,	// (0x0003d05d) dia3_keypad_num_pane_ParamLimits

0xda31,	// (0x0003d05d) dia3_keypad_num_pane

0xda41,	// (0x0003d06d) dia3_listscroll_pane_ParamLimits

0xda41,	// (0x0003d06d) dia3_listscroll_pane

0xda4f,	// (0x0003d07b) dia3_numentry_pane_ParamLimits

0xda4f,	// (0x0003d07b) dia3_numentry_pane

0xda5d,	// (0x0003d089) dia3_list_pane

0xda68,	// (0x0003d094) scroll_pane_cp12

0xdc6f,	// (0x0003d29b) bg_dia3_numentry_pane

0xda73,	// (0x0003d09f) dia3_numentry_pane_t1

0xda82,	// (0x0003d0ae) cell_dia3_key_num_pane

0xda8a,	// (0x0003d0b6) cell_dia3_key0_fun_pane_ParamLimits

0xda8a,	// (0x0003d0b6) cell_dia3_key0_fun_pane

0xda97,	// (0x0003d0c3) cell_dia3_key1_fun_pane_ParamLimits

0xda97,	// (0x0003d0c3) cell_dia3_key1_fun_pane

0xdaa4,	// (0x0003d0d0) dia3_listrow_pane

0x3629,	// (0x00032c55) bg_dia3_numentry_pane_g1

0xdc6f,	// (0x0003d29b) bg_button_pane_cp21

0xdaad,	// (0x0003d0d9) cell_dia3_key_num_pane_t1

0xdabb,	// (0x0003d0e7) cell_dia3_key_num_pane_t2

0xdaca,	// (0x0003d0f6) cell_dia3_key_num_pane_t3

0xdad9,	// (0x0003d105) cell_dia3_key_num_pane_t4

0x0003,

0xff36,	// (0x0003f562) cell_dia3_key_num_pane_t

0xdc6f,	// (0x0003d29b) bg_button_pane_cp19

0xdae8,	// (0x0003d114) cell_dia3_key0_fun_pane_g1

0xdc6f,	// (0x0003d29b) bg_button_pane_cp20

0xdaf0,	// (0x0003d11c) cell_dia3_key1_fun_pane_g1

0xdaf8,	// (0x0003d124) area_left_week_number_pane

0xdb01,	// (0x0003d12d) area_top_day_name_pane

0xdb0a,	// (0x0003d136) frame_month_view_pane

0xdb14,	// (0x0003d140) grid_month_view_pane

0xdb1e,	// (0x0003d14a) cell_top_day_name_pane_ParamLimits

0xdb1e,	// (0x0003d14a) cell_top_day_name_pane

0xdb3a,	// (0x0003d166) cell_area_left_week_number_pane_ParamLimits

0xdb3a,	// (0x0003d166) cell_area_left_week_number_pane

0xdb4e,	// (0x0003d17a) cell_month_view_pane_ParamLimits

0xdb4e,	// (0x0003d17a) cell_month_view_pane

0xdb6d,	// (0x0003d199) frm_month_g1

0xdb76,	// (0x0003d1a2) frm_month_g2

0xdb80,	// (0x0003d1ac) frm_month_g3

0xdb8a,	// (0x0003d1b6) frm_month_g4

0xdb94,	// (0x0003d1c0) frm_month_g5

0xdb9e,	// (0x0003d1ca) frm_month_g6

0xdba8,	// (0x0003d1d4) frm_month_g7

0xdbb2,	// (0x0003d1de) frm_month_g8

0xdbbb,	// (0x0003d1e7) frm_month_g9

0xdbc4,	// (0x0003d1f0) frm_month_g10

0xdbcd,	// (0x0003d1f9) frm_month_g11

0xdbd6,	// (0x0003d202) frm_month_g12

0xdbdf,	// (0x0003d20b) frm_month_g13

0xdbea,	// (0x0003d216) frm_month_g14

0xdbf5,	// (0x0003d221) frm_month_g15

0xdc00,	// (0x0003d22c) frm_month_g16

0x000f,

0xff3f,	// (0x0003f56b) frm_month_g

0xdc0b,	// (0x0003d237) cell_top_day_name_pane_t1

0xdc1a,	// (0x0003d246) cell_area_left_week_number_pane_g1

0xdc0b,	// (0x0003d237) cell_area_left_week_number_pane_t1

0x1adc,	// (0x00031108) cell_month_view_pane_g1

0xdc22,	// (0x0003d24e) cell_month_view_pane_t1

0xdc6f,	// (0x0003d29b) main_fps_pane

0x3c29,	// (0x00033255) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3c29,	// (0x00033255) cmail_ddmenu_btn02_pane_cp1

0x3c45,	// (0x00033271) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x3c45,	// (0x00033271) cmail_ddmenu_btn02_pane_cp2

0xd5c7,	// (0x0003cbf3) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd5c7,	// (0x0003cbf3) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe67,	// (0x0003f493) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe67,	// (0x0003f493) cmail_ddmenu_btn02_pane_g

0xd5e5,	// (0x0003cc11) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd5e5,	// (0x0003cc11) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe6c,	// (0x0003f498) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe6c,	// (0x0003f498) cmail_ddmenu_btn02_pane_t

0xdc31,	// (0x0003d25d) fps_text_pane_ParamLimits

0xdc31,	// (0x0003d25d) fps_text_pane

0xdc3e,	// (0x0003d26a) main_fps_pane_g1_ParamLimits

0xdc3e,	// (0x0003d26a) main_fps_pane_g1

0xdc4a,	// (0x0003d276) wait_bar_pane_cp010_ParamLimits

0xdc4a,	// (0x0003d276) wait_bar_pane_cp010

0xdc56,	// (0x0003d282) fps_text_pane_t1_ParamLimits

0xdc56,	// (0x0003d282) fps_text_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small
