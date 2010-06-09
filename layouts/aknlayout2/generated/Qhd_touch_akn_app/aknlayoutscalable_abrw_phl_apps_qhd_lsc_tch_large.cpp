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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x000a2b9b };

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
0x029e,	// (0x000a2e39) Screen

0x02aa,	// (0x000a2e45) application_window

0x02f6,	// (0x000a2e91) area_bottom_pane_ParamLimits

0x02f6,	// (0x000a2e91) area_bottom_pane

0x032f,	// (0x000a2eca) area_top_pane_ParamLimits

0x032f,	// (0x000a2eca) area_top_pane

0x951e,	// (0x000ac0b9) call_video_uplink_pane_ParamLimits

0x951e,	// (0x000ac0b9) call_video_uplink_pane

0x03bd,	// (0x000a2f58) main_pane_ParamLimits

0x03bd,	// (0x000a2f58) main_pane

0xd578,	// (0x000b0113) context_pane

0x3916,	// (0x000a64b1) navi_pane

0x3948,	// (0x000a64e3) popup_cale_events_window_ParamLimits

0x3948,	// (0x000a64e3) popup_cale_events_window

0xd58b,	// (0x000b0126) popup_mup_playback_window

0x3960,	// (0x000a64fb) signal_pane

0xa3e4,	// (0x000acf7f) main_browser_pane

0xa5a9,	// (0x000ad144) main_burst_pane

0x3664,	// (0x000a61ff) main_calc_pane

0xd55e,	// (0x000b00f9) main_cale_day_pane

0x3678,	// (0x000a6213) main_cale_month_pane

0xd55e,	// (0x000b00f9) main_cale_week_pane

0xa5a9,	// (0x000ad144) main_call_pane

0x9967,	// (0x000ac502) main_call_poc_pane

0xa5a9,	// (0x000ad144) main_camera_pane

0xa5a9,	// (0x000ad144) main_chi_dic_pane

0xbee9,	// (0x000aea84) main_clock_pane

0x9967,	// (0x000ac502) main_fmradio_pane

0xa5a9,	// (0x000ad144) main_graph_messa_pane

0x9967,	// (0x000ac502) main_help_pane

0xa3e4,	// (0x000acf7f) main_im_pane

0xa31f,	// (0x000aceba) main_image_pane_ParamLimits

0xa31f,	// (0x000aceba) main_image_pane

0x9967,	// (0x000ac502) main_location2_pane

0xa5a9,	// (0x000ad144) main_location_pane

0xa31f,	// (0x000aceba) main_messa_pane

0x9967,	// (0x000ac502) main_mp2_pane

0xa5a9,	// (0x000ad144) main_mp_pane

0x9967,	// (0x000ac502) main_msg_pane

0x9967,	// (0x000ac502) main_mup_eq_pane

0x9967,	// (0x000ac502) main_mup_pane

0xa3e4,	// (0x000acf7f) main_notes_pane

0x9967,	// (0x000ac502) main_pec_pane

0x9967,	// (0x000ac502) main_phob_pane

0x9967,	// (0x000ac502) main_pinb_pane

0x9967,	// (0x000ac502) main_postcard_pane

0x9967,	// (0x000ac502) main_qdial_pane

0xa5a9,	// (0x000ad144) main_skin_pane

0x9967,	// (0x000ac502) main_smil2_pane

0xa5a9,	// (0x000ad144) main_smil_pane

0xa5a9,	// (0x000ad144) main_video_pane

0xa5a9,	// (0x000ad144) main_video_tele_pane

0xa31f,	// (0x000aceba) main_viewer_pane_ParamLimits

0xa31f,	// (0x000aceba) main_viewer_pane

0xa5a9,	// (0x000ad144) main_vorec_pane

0x36ca,	// (0x000a6265) popup_blid_sat_info_window_ParamLimits

0x36ca,	// (0x000a6265) popup_blid_sat_info_window

0x3722,	// (0x000a62bd) popup_dyc_status_message_window_ParamLimits

0x3722,	// (0x000a62bd) popup_dyc_status_message_window

0x373c,	// (0x000a62d7) popup_grid_large_graphic_window_ParamLimits

0x373c,	// (0x000a62d7) popup_grid_large_graphic_window

0x37f8,	// (0x000a6393) popup_loc_request_window_ParamLimits

0x37f8,	// (0x000a6393) popup_loc_request_window

0x38ee,	// (0x000a6489) popup_wml_address_window_ParamLimits

0x38ee,	// (0x000a6489) popup_wml_address_window

0x349e,	// (0x000a6039) call_muted_g1

0x3153,	// (0x000a5cee) popup_call_audio_conf_window_ParamLimits

0x3153,	// (0x000a5cee) popup_call_audio_conf_window

0x34b2,	// (0x000a604d) popup_call_audio_first_window_ParamLimits

0x34b2,	// (0x000a604d) popup_call_audio_first_window

0x3528,	// (0x000a60c3) popup_call_audio_in_window_ParamLimits

0x3528,	// (0x000a60c3) popup_call_audio_in_window

0x3564,	// (0x000a60ff) popup_call_audio_out_window_ParamLimits

0x3564,	// (0x000a60ff) popup_call_audio_out_window

0x359e,	// (0x000a6139) popup_call_audio_second_window_ParamLimits

0x359e,	// (0x000a6139) popup_call_audio_second_window

0x35f4,	// (0x000a618f) popup_call_audio_wait_window_ParamLimits

0x35f4,	// (0x000a618f) popup_call_audio_wait_window

0x3629,	// (0x000a61c4) popup_number_entry_window_ParamLimits

0x3629,	// (0x000a61c4) popup_number_entry_window

0x9554,	// (0x000ac0ef) bg_popup_call_pane_cp05_ParamLimits

0x9554,	// (0x000ac0ef) bg_popup_call_pane_cp05

0x9574,	// (0x000ac10f) popup_number_entry_window_t1

0x9587,	// (0x000ac122) popup_number_entry_window_t2

0x9599,	// (0x000ac134) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x000b1c65) popup_number_entry_window_t

0x95ab,	// (0x000ac146) text_title_cp2

0x95be,	// (0x000ac159) bg_popup_call_pane_cp_ParamLimits

0x95be,	// (0x000ac159) bg_popup_call_pane_cp

0x95cc,	// (0x000ac167) call_thumbnail_pane

0x95d4,	// (0x000ac16f) popup_call_audio_in_window_g1_ParamLimits

0x95d4,	// (0x000ac16f) popup_call_audio_in_window_g1

0x95e0,	// (0x000ac17b) popup_call_audio_in_window_g2_ParamLimits

0x95e0,	// (0x000ac17b) popup_call_audio_in_window_g2

0x95ec,	// (0x000ac187) popup_call_audio_in_window_g3_ParamLimits

0x95ec,	// (0x000ac187) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x000b1c6e) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x000b1c6e) popup_call_audio_in_window_g

0x95f8,	// (0x000ac193) popup_call_audio_in_window_t1_ParamLimits

0x95f8,	// (0x000ac193) popup_call_audio_in_window_t1

0x9614,	// (0x000ac1af) popup_call_audio_in_window_t2_ParamLimits

0x9614,	// (0x000ac1af) popup_call_audio_in_window_t2

0x9630,	// (0x000ac1cb) popup_call_audio_in_window_t3_ParamLimits

0x9630,	// (0x000ac1cb) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x000b1c75) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x000b1c75) popup_call_audio_in_window_t

0x95be,	// (0x000ac159) bg_popup_call_pane_cp01_ParamLimits

0x95be,	// (0x000ac159) bg_popup_call_pane_cp01

0x95cc,	// (0x000ac167) call_thumbnail_pane_cp02

0x9643,	// (0x000ac1de) call_type_pane_cp022

0x964b,	// (0x000ac1e6) popup_call_audio_out_window_g1_ParamLimits

0x964b,	// (0x000ac1e6) popup_call_audio_out_window_g1

0x965d,	// (0x000ac1f8) popup_call_audio_out_window_g2_ParamLimits

0x965d,	// (0x000ac1f8) popup_call_audio_out_window_g2

0x9669,	// (0x000ac204) popup_call_audio_out_window_g3_ParamLimits

0x9669,	// (0x000ac204) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x000b1c7c) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x000b1c7c) popup_call_audio_out_window_g

0x967b,	// (0x000ac216) popup_call_audio_out_window_t1_ParamLimits

0x967b,	// (0x000ac216) popup_call_audio_out_window_t1

0x9693,	// (0x000ac22e) popup_call_audio_out_window_t2_ParamLimits

0x9693,	// (0x000ac22e) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x000b1c83) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x000b1c83) popup_call_audio_out_window_t

0x96a8,	// (0x000ac243) bg_popup_call_pane_ParamLimits

0x96a8,	// (0x000ac243) bg_popup_call_pane

0x0579,	// (0x000a3114) call_thumbnail_pane_cp_ParamLimits

0x0579,	// (0x000a3114) call_thumbnail_pane_cp

0x972c,	// (0x000ac2c7) call_type_pane_cp01_ParamLimits

0x972c,	// (0x000ac2c7) call_type_pane_cp01

0x9770,	// (0x000ac30b) popup_call_audio_first_window_g1_ParamLimits

0x9770,	// (0x000ac30b) popup_call_audio_first_window_g1

0x97bc,	// (0x000ac357) popup_call_audio_first_window_g2_ParamLimits

0x97bc,	// (0x000ac357) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x000b1c88) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x000b1c88) popup_call_audio_first_window_g

0x9800,	// (0x000ac39b) popup_call_audio_first_window_t1_ParamLimits

0x9800,	// (0x000ac39b) popup_call_audio_first_window_t1

0x98ac,	// (0x000ac447) popup_call_audio_first_window_t4_ParamLimits

0x98ac,	// (0x000ac447) popup_call_audio_first_window_t4

0x9938,	// (0x000ac4d3) popup_call_audio_first_window_t5_ParamLimits

0x9938,	// (0x000ac4d3) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x000b1c8d) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x000b1c8d) popup_call_audio_first_window_t

0x9967,	// (0x000ac502) bg_popup_call_pane_cp02

0x9971,	// (0x000ac50c) call_type_pane_cp023

0x9979,	// (0x000ac514) popup_call_audio_wait_window_g1

0x9981,	// (0x000ac51c) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000b1c94) popup_call_audio_wait_window_g

0x9989,	// (0x000ac524) popup_call_audio_wait_window_t3

0x9997,	// (0x000ac532) bg_popup_call_pane_cp03_ParamLimits

0x9997,	// (0x000ac532) bg_popup_call_pane_cp03

0x99f7,	// (0x000ac592) call_thumbnail_pane_cp011_ParamLimits

0x99f7,	// (0x000ac592) call_thumbnail_pane_cp011

0x9a03,	// (0x000ac59e) call_type_pane_cp034_ParamLimits

0x9a03,	// (0x000ac59e) call_type_pane_cp034

0x9a3f,	// (0x000ac5da) popup_call_audio_second_window_g1_ParamLimits

0x9a3f,	// (0x000ac5da) popup_call_audio_second_window_g1

0xa1d8,	// (0x000acd73) popup_call_audio_second_window_g2_ParamLimits

0xa1d8,	// (0x000acd73) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x000b1c99) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x000b1c99) popup_call_audio_second_window_g

0xa214,	// (0x000acdaf) popup_call_audio_second_window_t1_ParamLimits

0xa214,	// (0x000acdaf) popup_call_audio_second_window_t1

0xa295,	// (0x000ace30) popup_call_audio_second_window_t2_ParamLimits

0xa295,	// (0x000ace30) popup_call_audio_second_window_t2

0xa2cb,	// (0x000ace66) popup_call_audio_second_window_t3_ParamLimits

0xa2cb,	// (0x000ace66) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x000b1c9e) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x000b1c9e) popup_call_audio_second_window_t

0x9967,	// (0x000ac502) bg_popup_call_pane_cp04

0xa301,	// (0x000ace9c) list_conf_pane

0xa309,	// (0x000acea4) popup_call_audio_conf_window_t1

0xa317,	// (0x000aceb2) call_thumbnail_pane_g1

0xa31f,	// (0x000aceba) bg_pinb_pane_ParamLimits

0xa31f,	// (0x000aceba) bg_pinb_pane

0xa32d,	// (0x000acec8) find_pinb_pane

0xa336,	// (0x000aced1) listscroll_pinb_pane_ParamLimits

0xa336,	// (0x000aced1) listscroll_pinb_pane

0xa345,	// (0x000acee0) pinb_bg_pane_g1

0x059d,	// (0x000a3138) pinb_bg_pane_g2

0x05a9,	// (0x000a3144) pinb_bg_pane_g3

0x05b5,	// (0x000a3150) pinb_bg_pane_g4

0x05c1,	// (0x000a315c) pinb_bg_pane_g5

0x05cd,	// (0x000a3168) pinb_bg_pane_g6

0x05d8,	// (0x000a3173) pinb_bg_pane_g7

0x05e3,	// (0x000a317e) pinb_bg_pane_g8

0x05ee,	// (0x000a3189) pinb_bg_pane_g9

0x05f8,	// (0x000a3193) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x000b1ca5) pinb_bg_pane_g

0x0615,	// (0x000a31b0) grid_pinb_pane

0x061e,	// (0x000a31b9) list_pinb_pane

0x0627,	// (0x000a31c2) scroll_pane_cp01_ParamLimits

0x0627,	// (0x000a31c2) scroll_pane_cp01

0xa34f,	// (0x000aceea) find_pinb_pane_g1_ParamLimits

0xa34f,	// (0x000aceea) find_pinb_pane_g1

0xa367,	// (0x000acf02) find_pinb_pane_t1

0xa379,	// (0x000acf14) find_pinb_pane_t2

0x0001,

0xf124,	// (0x000b1cbf) find_pinb_pane_t

0xa38e,	// (0x000acf29) input_focus_pane_cp01_ParamLimits

0xa38e,	// (0x000acf29) input_focus_pane_cp01

0x0639,	// (0x000a31d4) cell_pinb_pane_ParamLimits

0x0639,	// (0x000a31d4) cell_pinb_pane

0x0662,	// (0x000a31fd) cell_pinb_pane_g1_ParamLimits

0x0662,	// (0x000a31fd) cell_pinb_pane_g1

0x0672,	// (0x000a320d) cell_pinb_pane_g2_ParamLimits

0x0672,	// (0x000a320d) cell_pinb_pane_g2

0xa39a,	// (0x000acf35) cell_pinb_pane_g3_ParamLimits

0xa39a,	// (0x000acf35) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x000b1cc4) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x000b1cc4) cell_pinb_pane_g

0x9967,	// (0x000ac502) grid_highlight_pane_cp01

0x067e,	// (0x000a3219) list_pinb_item_pane_ParamLimits

0x067e,	// (0x000a3219) list_pinb_item_pane

0x9967,	// (0x000ac502) list_highlight_pane_cp02

0x0690,	// (0x000a322b) list_pinb_item_pane_g1_ParamLimits

0x0690,	// (0x000a322b) list_pinb_item_pane_g1

0x069d,	// (0x000a3238) list_pinb_item_pane_g2_ParamLimits

0x069d,	// (0x000a3238) list_pinb_item_pane_g2

0x06a9,	// (0x000a3244) list_pinb_item_pane_g3_ParamLimits

0x06a9,	// (0x000a3244) list_pinb_item_pane_g3

0x06ba,	// (0x000a3255) list_pinb_item_pane_g4_ParamLimits

0x06ba,	// (0x000a3255) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x000b1ccb) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x000b1ccb) list_pinb_item_pane_g

0x06c6,	// (0x000a3261) list_pinb_item_pane_t1_ParamLimits

0x06c6,	// (0x000a3261) list_pinb_item_pane_t1

0x06fb,	// (0x000a3296) calc_display_pane

0x0723,	// (0x000a32be) calc_paper_pane

0x0746,	// (0x000a32e1) grid_calc_pane

0x9967,	// (0x000ac502) bg_list_pane_cp01

0x0774,	// (0x000a330f) clock_g1

0x077c,	// (0x000a3317) clock_g2

0x0001,

0xf139,	// (0x000b1cd4) clock_g

0x0784,	// (0x000a331f) clock_t1_ParamLimits

0x0784,	// (0x000a331f) clock_t1

0x0799,	// (0x000a3334) clock_t2_ParamLimits

0x0799,	// (0x000a3334) clock_t2

0x07ab,	// (0x000a3346) clock_t3_ParamLimits

0x07ab,	// (0x000a3346) clock_t3

0x07bd,	// (0x000a3358) clock_t4_ParamLimits

0x07bd,	// (0x000a3358) clock_t4

0x07cf,	// (0x000a336a) clock_t5_ParamLimits

0x07cf,	// (0x000a336a) clock_t5

0x07e4,	// (0x000a337f) clock_t6_ParamLimits

0x07e4,	// (0x000a337f) clock_t6

0x07f6,	// (0x000a3391) clock_t7_ParamLimits

0x07f6,	// (0x000a3391) clock_t7

0x0808,	// (0x000a33a3) clock_t8_ParamLimits

0x0808,	// (0x000a33a3) clock_t8

0x081c,	// (0x000a33b7) clock_t9_ParamLimits

0x081c,	// (0x000a33b7) clock_t9

0x0008,

0xf13e,	// (0x000b1cd9) clock_t_ParamLimits

0xf13e,	// (0x000b1cd9) clock_t

0xa3a6,	// (0x000acf41) popup_clock_analogue_window_cp02

0xa3a6,	// (0x000acf41) popup_clock_digital_window_cp01

0xa3ae,	// (0x000acf49) listscroll_help_pane

0x9967,	// (0x000ac502) phob_pre_status_pane

0xa3b8,	// (0x000acf53) grid_qdial_pane

0xa31f,	// (0x000aceba) listscroll_mce_pane

0xa31f,	// (0x000aceba) bg_notes_pane

0xa3c2,	// (0x000acf5d) list_notes_pane

0x0830,	// (0x000a33cb) scroll_pane_cp06

0xa3d0,	// (0x000acf6b) bg_calc_paper_pane

0x9a83,	// (0x000ac61e) list_calc_pane

0xa3e4,	// (0x000acf7f) bg_calc_display_pane

0x0844,	// (0x000a33df) calc_display_pane_t1

0x0856,	// (0x000a33f1) calc_display_pane_t2

0x9a9d,	// (0x000ac638) calc_display_pane_t3

0x0002,

0xf151,	// (0x000b1cec) calc_display_pane_t

0x0868,	// (0x000a3403) cell_calc_pane_ParamLimits

0x0868,	// (0x000a3403) cell_calc_pane

0xa3f0,	// (0x000acf8b) bg_calc_paper_pane_g1

0xa3fc,	// (0x000acf97) bg_calc_paper_pane_g2

0xa408,	// (0x000acfa3) bg_calc_paper_pane_g3

0xa414,	// (0x000acfaf) bg_calc_paper_pane_g4

0xa420,	// (0x000acfbb) bg_calc_paper_pane_g5

0x089d,	// (0x000a3438) bg_calc_paper_pane_g6

0x08ac,	// (0x000a3447) bg_calc_paper_pane_g7

0x08bb,	// (0x000a3456) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x000b1cf3) bg_calc_paper_pane_g

0x08ce,	// (0x000a3469) calc_bg_paper_pane_g9

0x08e1,	// (0x000a347c) list_calc_item_pane_ParamLimits

0x08e1,	// (0x000a347c) list_calc_item_pane

0xa42c,	// (0x000acfc7) list_calc_item_pane_g1

0x9aaf,	// (0x000ac64a) list_calc_item_pane_t1_ParamLimits

0x9aaf,	// (0x000ac64a) list_calc_item_pane_t1

0x08f6,	// (0x000a3491) list_calc_item_pane_t2_ParamLimits

0x08f6,	// (0x000a3491) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x000b1d04) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x000b1d04) list_calc_item_pane_t

0xa439,	// (0x000acfd4) cell_calc_pane_g1

0xa443,	// (0x000acfde) grid_highlight_pane_cp02

0x0928,	// (0x000a34c3) bg_calc_display_pane_g1

0x0931,	// (0x000a34cc) bg_calc_display_pane_g2

0x093b,	// (0x000a34d6) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x000b1d0e) bg_calc_display_pane_g

0x0944,	// (0x000a34df) cell_qdial_pane_ParamLimits

0x0944,	// (0x000a34df) cell_qdial_pane

0x0958,	// (0x000a34f3) cell_qdial_pane_g1_ParamLimits

0x0958,	// (0x000a34f3) cell_qdial_pane_g1

0x096e,	// (0x000a3509) cell_qdial_pane_g2_ParamLimits

0x096e,	// (0x000a3509) cell_qdial_pane_g2

0xa465,	// (0x000ad000) cell_qdial_pane_g3_ParamLimits

0xa465,	// (0x000ad000) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x000b1d15) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x000b1d15) cell_qdial_pane_g

0x0995,	// (0x000a3530) cell_qdial_pane_t1_ParamLimits

0x0995,	// (0x000a3530) cell_qdial_pane_t1

0x09ad,	// (0x000a3548) cell_qdial_pane_t2_ParamLimits

0x09ad,	// (0x000a3548) cell_qdial_pane_t2

0x09c0,	// (0x000a355b) cell_qdial_pane_t3_ParamLimits

0x09c0,	// (0x000a355b) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x000b1d1e) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x000b1d1e) cell_qdial_pane_t

0x9967,	// (0x000ac502) grid_highlight_pane_cp04

0xa471,	// (0x000ad00c) thumbnail_qdial_pane_ParamLimits

0xa471,	// (0x000ad00c) thumbnail_qdial_pane

0xa4cd,	// (0x000ad068) list_help_pane

0xa4d6,	// (0x000ad071) scroll_pane_cp02

0x09d3,	// (0x000a356e) help_list_pane_t1_ParamLimits

0x09d3,	// (0x000a356e) help_list_pane_t1

0x9ac1,	// (0x000ac65c) bg_notes_pane_g2

0x9ac9,	// (0x000ac664) bg_notes_pane_g3

0x9ad1,	// (0x000ac66c) notes_bg_pane_g1

0x9ad9,	// (0x000ac674) notes_bg_pane_g4

0x9ae1,	// (0x000ac67c) notes_bg_pane_g5

0x9ae9,	// (0x000ac684) notes_bg_pane_g6

0x9af1,	// (0x000ac68c) notes_bg_pane_g7

0x9af9,	// (0x000ac694) notes_bg_pane_g8

0x9b01,	// (0x000ac69c) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x000b1d3c) notes_bg_pane_g

0x09f0,	// (0x000a358b) list_notes_text_pane_ParamLimits

0x09f0,	// (0x000a358b) list_notes_text_pane

0xa4df,	// (0x000ad07a) list_notes_text_pane_g1

0x0a05,	// (0x000a35a0) list_notes_text_pane_t1

0x0a13,	// (0x000a35ae) listscroll_cale_week_pane

0x0a3f,	// (0x000a35da) bg_cale_heading_pane

0xa502,	// (0x000ad09d) bg_cale_pane_cp01

0x0a57,	// (0x000a35f2) cale_week_corner_pane

0x0a76,	// (0x000a3611) cale_week_day_heading_pane

0x0a93,	// (0x000a362e) cale_week_scroll_pane_g1

0x0aa6,	// (0x000a3641) cale_week_scroll_pane_g2

0x0abe,	// (0x000a3659) cale_week_scroll_pane_g3

0x0ad6,	// (0x000a3671) cale_week_scroll_pane_g4

0x0aee,	// (0x000a3689) cale_week_scroll_pane_g5

0x0b0e,	// (0x000a36a9) cale_week_scroll_pane_g6

0x0b2e,	// (0x000a36c9) cale_week_scroll_pane_g7

0x0b4e,	// (0x000a36e9) cale_week_scroll_pane_g8

0x0b72,	// (0x000a370d) cale_week_scroll_pane_g9

0x0b8a,	// (0x000a3725) cale_week_scroll_pane_g10

0x0ba2,	// (0x000a373d) cale_week_scroll_pane_g11

0x0bba,	// (0x000a3755) cale_week_scroll_pane_g12

0x0bd2,	// (0x000a376d) cale_week_scroll_pane_g13

0x0bd2,	// (0x000a376d) cale_week_scroll_pane_g14

0x0bd2,	// (0x000a376d) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x000b1d4b) cale_week_scroll_pane_g

0x0c0e,	// (0x000a37a9) cale_week_time_pane

0x0c32,	// (0x000a37cd) grid_cale_week_pane

0xa531,	// (0x000ad0cc) scroll_pane_cp08

0x0c58,	// (0x000a37f3) cell_cale_week_pane_ParamLimits

0x0c58,	// (0x000a37f3) cell_cale_week_pane

0x0ce6,	// (0x000a3881) cale_week_day_heading_pane_t1

0x0d10,	// (0x000a38ab) cale_week_day_heading_pane_t2

0x0d3f,	// (0x000a38da) cale_week_day_heading_pane_t3

0x0d6e,	// (0x000a3909) cale_week_day_heading_pane_t4

0x0d9d,	// (0x000a3938) cale_week_day_heading_pane_t5

0x0dd4,	// (0x000a396f) cale_week_day_heading_pane_t6

0x0e0b,	// (0x000a39a6) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x000b1d6c) cale_week_day_heading_pane_t

0xa54e,	// (0x000ad0e9) bg_cale_side_pane

0x0e35,	// (0x000a39d0) cale_week_time_pane_t1

0x0e4f,	// (0x000a39ea) cale_week_time_pane_t2

0x0e69,	// (0x000a3a04) cale_week_time_pane_t3

0x0e83,	// (0x000a3a1e) cale_week_time_pane_t4

0x0e9d,	// (0x000a3a38) cale_week_time_pane_t5

0x0eb7,	// (0x000a3a52) cale_week_time_pane_t6

0x0ed1,	// (0x000a3a6c) cale_week_time_pane_t7

0x0eeb,	// (0x000a3a86) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x000b1d7b) cale_week_time_pane_t

0x0f05,	// (0x000a3aa0) cell_cale_week_pane_g2

0x0f24,	// (0x000a3abf) cell_cale_week_pane_g3_ParamLimits

0x0f24,	// (0x000a3abf) cell_cale_week_pane_g3

0xa55c,	// (0x000ad0f7) grid_highlight_pane_cp07

0xa564,	// (0x000ad0ff) listscroll_gms_pane

0xa56e,	// (0x000ad109) grid_gms_pane

0xa577,	// (0x000ad112) listscroll_gms_pane_g1

0xa57f,	// (0x000ad11a) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x000b1d8c) listscroll_gms_pane_g

0x0f3c,	// (0x000a3ad7) scroll_pane_cp010

0x0f47,	// (0x000a3ae2) cell_gms_pane_ParamLimits

0x0f47,	// (0x000a3ae2) cell_gms_pane

0x0f5a,	// (0x000a3af5) cell_gms_pane_g1

0xa587,	// (0x000ad122) cell_gms_pane_g2

0xa58f,	// (0x000ad12a) cell_gms_pane_g3

0xa598,	// (0x000ad133) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x000b1d91) cell_gms_pane_g

0xa5a1,	// (0x000ad13c) grid_highlight_pane_cp09

0x3448,	// (0x000a5fe3) phob_pre_status_pane_g1

0x3450,	// (0x000a5feb) phob_pre_status_pane_g2

0x3458,	// (0x000a5ff3) phob_pre_status_pane_g3

0x3460,	// (0x000a5ffb) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x000b217c) phob_pre_status_pane_g

0x3470,	// (0x000a600b) phob_pre_status_pane_t1

0x347e,	// (0x000a6019) phob_pre_status_pane_t2

0x348e,	// (0x000a6029) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x000b2187) phob_pre_status_pane_t

0xa5a9,	// (0x000ad144) bg_list_pane_cp05

0x0f6a,	// (0x000a3b05) grid_vorec_pane

0x0f72,	// (0x000a3b0d) vorec_t1

0x0f80,	// (0x000a3b1b) vorec_t2

0x0f8e,	// (0x000a3b29) vorec_t3

0x0f9c,	// (0x000a3b37) vorec_t4

0x9492,	// (0x000ac02d) vorec_t5

0x94a0,	// (0x000ac03b) vorec_t6

0x0004,

0xf1ff,	// (0x000b1d9a) vorec_t

0x94ae,	// (0x000ac049) wait_bar_pane_cp01

0x0fb8,	// (0x000a3b53) cell_vorec_pane_ParamLimits

0x0fb8,	// (0x000a3b53) cell_vorec_pane

0x9b09,	// (0x000ac6a4) cell_vorec_pane_g1

0x9967,	// (0x000ac502) grid_highlight_pane_cp05

0x0fe0,	// (0x000a3b7b) cams_zoom_pane

0x0fef,	// (0x000a3b8a) image_vga_pane

0x1009,	// (0x000a3ba4) main_camera_pane_g1

0x101b,	// (0x000a3bb6) main_camera_pane_g2

0x102b,	// (0x000a3bc6) main_camera_pane_g3

0x103b,	// (0x000a3bd6) main_camera_pane_g4

0x104b,	// (0x000a3be6) main_camera_pane_g5

0x105b,	// (0x000a3bf6) main_camera_pane_g6

0x106d,	// (0x000a3c08) main_camera_pane_g7

0x0007,

0xf20a,	// (0x000b1da5) main_camera_pane_g

0x107d,	// (0x000a3c18) main_camera_pane_t1

0x1093,	// (0x000a3c2e) main_camera_pane_t2

0x0001,

0xf21b,	// (0x000b1db6) main_camera_pane_t

0x10cd,	// (0x000a3c68) cams_zoom_pane_cp_ParamLimits

0x10cd,	// (0x000a3c68) cams_zoom_pane_cp

0x10f5,	// (0x000a3c90) image_cif_pane_ParamLimits

0x10f5,	// (0x000a3c90) image_cif_pane

0x112b,	// (0x000a3cc6) image_subqcif_pane

0x1133,	// (0x000a3cce) main_video_pane_g1_ParamLimits

0x1133,	// (0x000a3cce) main_video_pane_g1

0x1157,	// (0x000a3cf2) main_video_pane_g2_ParamLimits

0x1157,	// (0x000a3cf2) main_video_pane_g2

0x118b,	// (0x000a3d26) main_video_pane_g3_ParamLimits

0x118b,	// (0x000a3d26) main_video_pane_g3

0x11b9,	// (0x000a3d54) main_video_pane_g4_ParamLimits

0x11b9,	// (0x000a3d54) main_video_pane_g4

0x11e7,	// (0x000a3d82) main_video_pane_g5_ParamLimits

0x11e7,	// (0x000a3d82) main_video_pane_g5

0xa5bd,	// (0x000ad158) main_video_pane_g6_ParamLimits

0xa5bd,	// (0x000ad158) main_video_pane_g6

0x0006,

0xf220,	// (0x000b1dbb) main_video_pane_g_ParamLimits

0xf220,	// (0x000b1dbb) main_video_pane_g

0x1210,	// (0x000a3dab) main_video_pane_t1_ParamLimits

0x1210,	// (0x000a3dab) main_video_pane_t1

0xa5d7,	// (0x000ad172) cams_zoom_pane_g1

0xa5e0,	// (0x000ad17b) cams_zoom_pane_g2

0xa5e9,	// (0x000ad184) cams_zoom_pane_g3

0xa5f2,	// (0x000ad18d) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x000b1dca) cams_zoom_pane_g

0x126d,	// (0x000a3e08) grid_cams_pane

0x1287,	// (0x000a3e22) linegrid_cams_pane

0x129b,	// (0x000a3e36) cell_cams_pane_ParamLimits

0x129b,	// (0x000a3e36) cell_cams_pane

0xa5fb,	// (0x000ad196) cams_burst_image_pane

0xa603,	// (0x000ad19e) cell_cams_pane_g1

0x9967,	// (0x000ac502) grid_highlight_pane_cp03

0xa439,	// (0x000acfd4) mp_bg_pane_g1

0x9967,	// (0x000ac502) bg_list_pane_cp03

0xd483,	// (0x000b001e) bg_mp_pane

0xd48b,	// (0x000b0026) grid_mp_pane

0xd493,	// (0x000b002e) media_player_g1

0xd49b,	// (0x000b0036) media_player_t1

0xd4a9,	// (0x000b0044) media_player_t2

0xd4b7,	// (0x000b0052) media_player_t3

0xd4c5,	// (0x000b0060) media_player_t4

0xd4d3,	// (0x000b006e) media_player_t5

0xd4e1,	// (0x000b007c) media_player_t6

0xd4ef,	// (0x000b008a) media_player_t7

0x0006,

0xf5cb,	// (0x000b2166) media_player_t

0xd4fd,	// (0x000b0098) wait_bar_pane_cp02

0xf5b0,	// (0x000b214b) main_usb_pane_t

0x343f,	// (0x000a5fda) cell_mp_pane

0xa439,	// (0x000acfd4) cell_mp_pane_g1

0x9967,	// (0x000ac502) grid_highlight_pane_cp06

0xa60b,	// (0x000ad1a6) grid_skin_colour_pane

0xa613,	// (0x000ad1ae) list_highlight_pane_cp03

0x13b4,	// (0x000a3f4f) skin_g1

0xa61b,	// (0x000ad1b6) skin_t1

0xa62a,	// (0x000ad1c5) skin_t2

0x0001,

0xf264,	// (0x000b1dff) skin_t

0x13bc,	// (0x000a3f57) cell_skin_colour_pane_ParamLimits

0x13bc,	// (0x000a3f57) cell_skin_colour_pane

0xa638,	// (0x000ad1d3) cell_skin_colour_pane_g1

0x1435,	// (0x000a3fd0) call_video_g1_ParamLimits

0x1435,	// (0x000a3fd0) call_video_g1

0x1451,	// (0x000a3fec) call_video_g2_ParamLimits

0x1451,	// (0x000a3fec) call_video_g2

0x0001,

0xf269,	// (0x000b1e04) call_video_g_ParamLimits

0xf269,	// (0x000b1e04) call_video_g

0x14a3,	// (0x000a403e) call_video_uplink_pane_cp1_ParamLimits

0x14a3,	// (0x000a403e) call_video_uplink_pane_cp1

0xa64a,	// (0x000ad1e5) call_video_uplink_pane_cp2

0x1542,	// (0x000a40dd) video_down_crop_pane_ParamLimits

0x1542,	// (0x000a40dd) video_down_crop_pane

0x1639,	// (0x000a41d4) video_down_pane_ParamLimits

0x1639,	// (0x000a41d4) video_down_pane

0xa652,	// (0x000ad1ed) video_down_subqcif_pane_ParamLimits

0xa652,	// (0x000ad1ed) video_down_subqcif_pane

0xa66a,	// (0x000ad205) video_down_subqcif_pane_cp_ParamLimits

0xa66a,	// (0x000ad205) video_down_subqcif_pane_cp

0xa690,	// (0x000ad22b) im_reading_pane_ParamLimits

0xa690,	// (0x000ad22b) im_reading_pane

0x1749,	// (0x000a42e4) im_writing_pane_ParamLimits

0x1749,	// (0x000a42e4) im_writing_pane

0x175f,	// (0x000a42fa) im_reading_pane_t1

0xa6aa,	// (0x000ad245) list_im_pane

0xa6bb,	// (0x000ad256) scroll_pane_cp07

0x1798,	// (0x000a4333) im_writing_pane_t1_ParamLimits

0x1798,	// (0x000a4333) im_writing_pane_t1

0xa6d4,	// (0x000ad26f) im_writing_pane_t2_ParamLimits

0xa6d4,	// (0x000ad26f) im_writing_pane_t2

0x0001,

0xf273,	// (0x000b1e0e) im_writing_pane_t_ParamLimits

0xf273,	// (0x000b1e0e) im_writing_pane_t

0x9967,	// (0x000ac502) input_focus_pane_cp04

0x9967,	// (0x000ac502) input_focus_pane_cp05

0x17ad,	// (0x000a4348) list_im_single_pane_ParamLimits

0x17ad,	// (0x000a4348) list_im_single_pane

0x17c1,	// (0x000a435c) list_single_im_pane_t1

0x33ff,	// (0x000a5f9a) blid_accuracy_pane

0x3407,	// (0x000a5fa2) blid_compass_pane

0x3411,	// (0x000a5fac) main_location_t1

0x3421,	// (0x000a5fbc) main_location_t2

0x3431,	// (0x000a5fcc) main_location_t3

0x0002,

0xf5da,	// (0x000b2175) main_location_t

0x9967,	// (0x000ac502) aid_levels_location

0xa439,	// (0x000acfd4) blid_accuracy_pane_g1

0xa439,	// (0x000acfd4) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000b1e70) blid_accuracy_pane_g

0xa71c,	// (0x000ad2b7) wml_content_pane

0xa75a,	// (0x000ad2f5) wml_button_pane_ParamLimits

0xa75a,	// (0x000ad2f5) wml_button_pane

0x17d0,	// (0x000a436b) wml_list_single_large_pane_ParamLimits

0x17d0,	// (0x000a436b) wml_list_single_large_pane

0x17e5,	// (0x000a4380) wml_list_single_medium_pane_ParamLimits

0x17e5,	// (0x000a4380) wml_list_single_medium_pane

0x17fb,	// (0x000a4396) wml_list_single_small_pane_ParamLimits

0x17fb,	// (0x000a4396) wml_list_single_small_pane

0xa76e,	// (0x000ad309) wml_selection_box_pane_ParamLimits

0xa76e,	// (0x000ad309) wml_selection_box_pane

0xa781,	// (0x000ad31c) wml_list_single_pane_t1

0xa790,	// (0x000ad32b) wml_list_single_medium_pane_t1

0xa79f,	// (0x000ad33a) wml_list_single_large_pane_t1

0xa7ae,	// (0x000ad349) input_focus_pane_cp02_ParamLimits

0xa7ae,	// (0x000ad349) input_focus_pane_cp02

0xa7c1,	// (0x000ad35c) wml_selection_box_pane_g1

0xa7ca,	// (0x000ad365) wml_selection_box_pane_t1_ParamLimits

0xa7ca,	// (0x000ad365) wml_selection_box_pane_t1

0xa31f,	// (0x000aceba) bg_wml_button_pane_ParamLimits

0xa31f,	// (0x000aceba) bg_wml_button_pane

0xa7e2,	// (0x000ad37d) wml_button_pane_g1

0xa7ea,	// (0x000ad385) wml_button_pane_t1

0xa7e2,	// (0x000ad37d) wml_button_bg_pane_g1

0xaee6,	// (0x000ada81) wml_button_bg_pane_g2

0xaeee,	// (0x000ada89) wml_button_bg_pane_g3

0xaef6,	// (0x000ada91) wml_button_bg_pane_g4

0xaefe,	// (0x000ada99) wml_button_bg_pane_g5

0xaf06,	// (0x000adaa1) wml_button_bg_pane_g6

0xaf0e,	// (0x000adaa9) wml_button_bg_pane_g7

0xaf16,	// (0x000adab1) wml_button_bg_pane_g8

0xaf1e,	// (0x000adab9) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000b1e13) wml_button_bg_pane_g

0x1813,	// (0x000a43ae) bg_list_pane_cp02

0xaf26,	// (0x000adac1) mce_header_pane_ParamLimits

0xaf26,	// (0x000adac1) mce_header_pane

0xaf3c,	// (0x000adad7) mce_icon_pane

0xaf3c,	// (0x000adad7) mce_image_pane

0xaf45,	// (0x000adae0) mce_text_pane_ParamLimits

0xaf45,	// (0x000adae0) mce_text_pane

0x181b,	// (0x000a43b6) scroll_pane_cp03

0xa752,	// (0x000ad2ed) scroll_pane_cp04

0xaf58,	// (0x000adaf3) scroll_pane_cp05_ParamLimits

0xaf58,	// (0x000adaf3) scroll_pane_cp05

0x1825,	// (0x000a43c0) mce_header_field_pane_ParamLimits

0x1825,	// (0x000a43c0) mce_header_field_pane

0x183c,	// (0x000a43d7) mce_header_field_pane_2_ParamLimits

0x183c,	// (0x000a43d7) mce_header_field_pane_2

0x1852,	// (0x000a43ed) mce_header_field_pane_3

0x185a,	// (0x000a43f5) list_single_mce_message_pane_ParamLimits

0x185a,	// (0x000a43f5) list_single_mce_message_pane

0x186f,	// (0x000a440a) list_single_mce_smart_pane_ParamLimits

0x186f,	// (0x000a440a) list_single_mce_smart_pane

0xaf64,	// (0x000adaff) input_focus_pane_cp03

0xaf6d,	// (0x000adb08) list_header_data_pane

0x188f,	// (0x000a442a) mce_header_field_pane_t1

0x189f,	// (0x000a443a) list_single_mce_header_pane_ParamLimits

0x189f,	// (0x000a443a) list_single_mce_header_pane

0xaf75,	// (0x000adb10) list_single_mce_header_pane_t1

0xaf84,	// (0x000adb1f) list_single_mce_message_pane_g1

0xaf8c,	// (0x000adb27) list_single_mce_message_pane_t1

0x18d9,	// (0x000a4474) bg_cale_heading_pane_cp01_ParamLimits

0x18d9,	// (0x000a4474) bg_cale_heading_pane_cp01

0xaf9a,	// (0x000adb35) bg_cale_pane_cp02_ParamLimits

0xaf9a,	// (0x000adb35) bg_cale_pane_cp02

0x1913,	// (0x000a44ae) cale_month_corner_pane

0x1932,	// (0x000a44cd) cale_month_day_heading_pane_ParamLimits

0x1932,	// (0x000a44cd) cale_month_day_heading_pane

0x1984,	// (0x000a451f) cale_month_pane_g1_ParamLimits

0x1984,	// (0x000a451f) cale_month_pane_g1

0x19b3,	// (0x000a454e) cale_month_pane_g2_ParamLimits

0x19b3,	// (0x000a454e) cale_month_pane_g2

0x19e3,	// (0x000a457e) cale_month_pane_g3_ParamLimits

0x19e3,	// (0x000a457e) cale_month_pane_g3

0x1a1f,	// (0x000a45ba) cale_month_pane_g4_ParamLimits

0x1a1f,	// (0x000a45ba) cale_month_pane_g4

0x1a5b,	// (0x000a45f6) cale_month_pane_g5_ParamLimits

0x1a5b,	// (0x000a45f6) cale_month_pane_g5

0x1aa3,	// (0x000a463e) cale_month_pane_g6_ParamLimits

0x1aa3,	// (0x000a463e) cale_month_pane_g6

0x1aef,	// (0x000a468a) cale_month_pane_g7_ParamLimits

0x1aef,	// (0x000a468a) cale_month_pane_g7

0x1b43,	// (0x000a46de) cale_month_pane_g8_ParamLimits

0x1b43,	// (0x000a46de) cale_month_pane_g8

0x1b97,	// (0x000a4732) cale_month_pane_g9_ParamLimits

0x1b97,	// (0x000a4732) cale_month_pane_g9

0x1be9,	// (0x000a4784) cale_month_pane_g10_ParamLimits

0x1be9,	// (0x000a4784) cale_month_pane_g10

0x1c3b,	// (0x000a47d6) cale_month_pane_g11_ParamLimits

0x1c3b,	// (0x000a47d6) cale_month_pane_g11

0x1c8d,	// (0x000a4828) cale_month_pane_g12_ParamLimits

0x1c8d,	// (0x000a4828) cale_month_pane_g12

0x1cdf,	// (0x000a487a) cale_month_pane_g13_ParamLimits

0x1cdf,	// (0x000a487a) cale_month_pane_g13

0x000c,

0xf28b,	// (0x000b1e26) cale_month_pane_g_ParamLimits

0xf28b,	// (0x000b1e26) cale_month_pane_g

0x1d31,	// (0x000a48cc) cale_month_week_pane

0x1d55,	// (0x000a48f0) grid_cale_month_pane_ParamLimits

0x1d55,	// (0x000a48f0) grid_cale_month_pane

0x1d9e,	// (0x000a4939) cale_month_day_heading_pane_t1

0x1e24,	// (0x000a49bf) cale_month_day_heading_pane_t2

0x1e9d,	// (0x000a4a38) cale_month_day_heading_pane_t3

0x1f16,	// (0x000a4ab1) cale_month_day_heading_pane_t4

0x1f97,	// (0x000a4b32) cale_month_day_heading_pane_t5

0x2020,	// (0x000a4bbb) cale_month_day_heading_pane_t6

0x20a9,	// (0x000a4c44) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000b1e41) cale_month_day_heading_pane_t

0xa54e,	// (0x000ad0e9) bg_cale_side_pane_cp01

0x213a,	// (0x000a4cd5) cale_month_week_pane_t1

0x2153,	// (0x000a4cee) cale_month_week_pane_t2

0x216c,	// (0x000a4d07) cale_month_week_pane_t3

0x2185,	// (0x000a4d20) cale_month_week_pane_t4

0x219e,	// (0x000a4d39) cale_month_week_pane_t5

0x21b7,	// (0x000a4d52) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000b1e50) cale_month_week_pane_t

0x21d0,	// (0x000a4d6b) cell_cale_month_pane_ParamLimits

0x21d0,	// (0x000a4d6b) cell_cale_month_pane

0x9b13,	// (0x000ac6ae) cell_cale_month_pane_g1

0x2328,	// (0x000a4ec3) cell_cale_month_pane_t1_ParamLimits

0x2328,	// (0x000a4ec3) cell_cale_month_pane_t1

0xa55c,	// (0x000ad0f7) grid_highlight_pane_cp08

0xa439,	// (0x000acfd4) main_smil_g1

0x2354,	// (0x000a4eef) smil_status_pane

0xafd9,	// (0x000adb74) smil_text_pane

0xd3a3,	// (0x000aff3e) bg_popup_call3_rect_pane_g8

0xd3ab,	// (0x000aff46) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x000b2109) bg_popup_call3_rect_pane_g

0xd5f2,	// (0x000b018d) smil_status_volume_pane_g1

0xafe3,	// (0x000adb7e) smil_status_pane_t1

0x9c5d,	// (0x000ac7f8) volume_smil_pane

0xaffa,	// (0x000adb95) list_smil_text_pane

0x2367,	// (0x000a4f02) scroll_pane_cp011

0x2372,	// (0x000a4f0d) smil_text_list_pane_t1_ParamLimits

0x2372,	// (0x000a4f0d) smil_text_list_pane_t1

0x9b1f,	// (0x000ac6ba) aid_volume_smil_ParamLimits

0x9b1f,	// (0x000ac6ba) aid_volume_smil

0xa439,	// (0x000acfd4) smil_volume_pane_g1

0xa439,	// (0x000acfd4) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000b1e70) smil_volume_pane_g

0x0a13,	// (0x000a35ae) listscroll_cale_day_pane

0xb004,	// (0x000adb9f) bg_cale_pane

0xb01c,	// (0x000adbb7) list_cale_pane

0xb03f,	// (0x000adbda) scroll_pane_cp09

0xb050,	// (0x000adbeb) cale_bg_pane_g1

0xb058,	// (0x000adbf3) cale_bg_pane_g2

0xb060,	// (0x000adbfb) cale_bg_pane_g3

0xb068,	// (0x000adc03) cale_bg_pane_g4

0xb070,	// (0x000adc0b) cale_bg_pane_g5

0xb078,	// (0x000adc13) cale_bg_pane_g6

0xb080,	// (0x000adc1b) cale_bg_pane_g7

0xb088,	// (0x000adc23) cale_bg_pane_g8

0xb090,	// (0x000adc2b) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x000b1e75) cale_bg_pane_g

0x23b6,	// (0x000a4f51) list_cale_time_pane_ParamLimits

0x23b6,	// (0x000a4f51) list_cale_time_pane

0xb098,	// (0x000adc33) list_cale_time_pane_g1_ParamLimits

0xb098,	// (0x000adc33) list_cale_time_pane_g1

0xb0a4,	// (0x000adc3f) list_cale_time_pane_g2_ParamLimits

0xb0a4,	// (0x000adc3f) list_cale_time_pane_g2

0x23cb,	// (0x000a4f66) list_cale_time_pane_g3_ParamLimits

0x23cb,	// (0x000a4f66) list_cale_time_pane_g3

0x23d9,	// (0x000a4f74) list_cale_time_pane_g4_ParamLimits

0x23d9,	// (0x000a4f74) list_cale_time_pane_g4

0x23e7,	// (0x000a4f82) list_cale_time_pane_g5_ParamLimits

0x23e7,	// (0x000a4f82) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000b1e88) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000b1e88) list_cale_time_pane_g

0xb0be,	// (0x000adc59) list_cale_time_pane_t1_ParamLimits

0xb0be,	// (0x000adc59) list_cale_time_pane_t1

0xb0e6,	// (0x000adc81) list_cale_time_pane_t2_ParamLimits

0xb0e6,	// (0x000adc81) list_cale_time_pane_t2

0x2748,	// (0x000a52e3) aid_blid_cardinal_pane

0x2786,	// (0x000a5321) compass_pane_t4

0xb10e,	// (0x000adca9) list_cale_time_pane_t4_ParamLimits

0xb10e,	// (0x000adca9) list_cale_time_pane_t4

0x2794,	// (0x000a532f) compass_pane_t5

0x27a2,	// (0x000a533d) compass_pane_t6

0x27b0,	// (0x000a534b) compass_pane_t7

0xc02e,	// (0x000aebc9) navi_pane_cc_t1

0xc20b,	// (0x000aeda6) aid_phob_thumbnail_center_pane

0x2e17,	// (0x000a59b2) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x000b1e95) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x000b1e95) list_cale_time_pane_t

0x95be,	// (0x000ac159) bg_popup_window_pane_cp02_ParamLimits

0x95be,	// (0x000ac159) bg_popup_window_pane_cp02

0xb136,	// (0x000adcd1) heading_pane_cp01_ParamLimits

0xb136,	// (0x000adcd1) heading_pane_cp01

0xb142,	// (0x000adcdd) loc_req_pane_ParamLimits

0xb142,	// (0x000adcdd) loc_req_pane

0xb152,	// (0x000adced) loc_type_pane_ParamLimits

0xb152,	// (0x000adced) loc_type_pane

0xb164,	// (0x000adcff) loc_type_pane_t1_ParamLimits

0xb164,	// (0x000adcff) loc_type_pane_t1

0xbbdb,	// (0x000ae776) loc_type_pane_t2_ParamLimits

0xbbdb,	// (0x000ae776) loc_type_pane_t2

0xbbed,	// (0x000ae788) loc_type_pane_t3_ParamLimits

0xbbed,	// (0x000ae788) loc_type_pane_t3

0x0002,

0xf301,	// (0x000b1e9c) loc_type_pane_t_ParamLimits

0xf301,	// (0x000b1e9c) loc_type_pane_t

0xbbff,	// (0x000ae79a) list_loc_req_pane

0xbc09,	// (0x000ae7a4) scroll_pane_cp012

0x23f5,	// (0x000a4f90) list_single_loc_request_popup_menu_pane_ParamLimits

0x23f5,	// (0x000a4f90) list_single_loc_request_popup_menu_pane

0xbc14,	// (0x000ae7af) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xbc14,	// (0x000ae7af) list_single_loc_request_popup_menu_pane_g1

0xbc20,	// (0x000ae7bb) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xbc20,	// (0x000ae7bb) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x000b1ea3) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x000b1ea3) list_single_loc_request_popup_menu_pane_g

0xbc2c,	// (0x000ae7c7) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xbc2c,	// (0x000ae7c7) list_single_loc_request_popup_menu_pane_t1

0xa31f,	// (0x000aceba) bg_popup_window_pane_cp03_ParamLimits

0xa31f,	// (0x000aceba) bg_popup_window_pane_cp03

0xbc42,	// (0x000ae7dd) heading_loc_req_pane_ParamLimits

0xbc42,	// (0x000ae7dd) heading_loc_req_pane

0x2402,	// (0x000a4f9d) popup_dyc_status_message_window_g1_ParamLimits

0x2402,	// (0x000a4f9d) popup_dyc_status_message_window_g1

0x2416,	// (0x000a4fb1) popup_dyc_status_message_window_t1_ParamLimits

0x2416,	// (0x000a4fb1) popup_dyc_status_message_window_t1

0x242b,	// (0x000a4fc6) popup_dyc_status_message_window_t2_ParamLimits

0x242b,	// (0x000a4fc6) popup_dyc_status_message_window_t2

0x2440,	// (0x000a4fdb) popup_dyc_status_message_window_t3_ParamLimits

0x2440,	// (0x000a4fdb) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x000b1ea8) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x000b1ea8) popup_dyc_status_message_window_t

0x9967,	// (0x000ac502) bg_heading_pane_cp01

0xbc4e,	// (0x000ae7e9) heading_loc_req_pane_g1

0xbc56,	// (0x000ae7f1) heading_loc_req_pane_g2

0xbc5e,	// (0x000ae7f9) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x000b1eaf) heading_loc_req_pane_g

0xbc66,	// (0x000ae801) heading_loc_req_pane_t1

0xbc81,	// (0x000ae81c) bg_popup_sub_pane_cp01_ParamLimits

0xbc81,	// (0x000ae81c) bg_popup_sub_pane_cp01

0xbc8f,	// (0x000ae82a) popup_cale_events_window_g1_ParamLimits

0xbc8f,	// (0x000ae82a) popup_cale_events_window_g1

0xbcaf,	// (0x000ae84a) popup_cale_events_window_g2_ParamLimits

0xbcaf,	// (0x000ae84a) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x000b1ee3) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x000b1ee3) popup_cale_events_window_g

0xbccf,	// (0x000ae86a) popup_cale_events_window_t1_ParamLimits

0xbccf,	// (0x000ae86a) popup_cale_events_window_t1

0xbce1,	// (0x000ae87c) popup_cale_events_window_t2_ParamLimits

0xbce1,	// (0x000ae87c) popup_cale_events_window_t2

0xbd1f,	// (0x000ae8ba) popup_cale_events_window_t3_ParamLimits

0xbd1f,	// (0x000ae8ba) popup_cale_events_window_t3

0xbd59,	// (0x000ae8f4) popup_cale_events_window_t4_ParamLimits

0xbd59,	// (0x000ae8f4) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x000b1ee8) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x000b1ee8) popup_cale_events_window_t

0x2543,	// (0x000a50de) call_type_pane

0x2553,	// (0x000a50ee) popup_call_status_window_g1

0x2567,	// (0x000a5102) popup_call_status_window_g2

0x257b,	// (0x000a5116) popup_call_status_window_g3

0x0002,

0xf356,	// (0x000b1ef1) popup_call_status_window_g

0xbd8f,	// (0x000ae92a) call_type_pane_g1

0xbd98,	// (0x000ae933) call_type_pane_g2

0x0001,

0xf35d,	// (0x000b1ef8) call_type_pane_g

0x9967,	// (0x000ac502) bg_popup_sub_pane_cp02

0xbda1,	// (0x000ae93c) listscroll_popup_wml_pane

0xbda9,	// (0x000ae944) list_wml_pane

0xbdb3,	// (0x000ae94e) scroll_pane_cp013

0xbdbe,	// (0x000ae959) list_single_graphic_popup_wml_pane_ParamLimits

0xbdbe,	// (0x000ae959) list_single_graphic_popup_wml_pane

0xa439,	// (0x000acfd4) list_single_graphic_popup_wml_pane_g1

0xbdd2,	// (0x000ae96d) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x000b1efd) list_single_graphic_popup_wml_pane_g

0xbdda,	// (0x000ae975) list_single_graphic_popup_wml_pane_t1

0xbdf0,	// (0x000ae98b) aid_call_pane

0xa317,	// (0x000aceb2) popup_clock_analogue_window_g1

0xa317,	// (0x000aceb2) popup_clock_analogue_window_g2

0x9b41,	// (0x000ac6dc) popup_clock_analogue_window_g3

0x9b41,	// (0x000ac6dc) popup_clock_analogue_window_g4

0xa439,	// (0x000acfd4) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x000b1f02) popup_clock_analogue_window_g

0x9b49,	// (0x000ac6e4) popup_clock_analogue_window_t1

0x9b57,	// (0x000ac6f2) clock_digital_number_pane_ParamLimits

0x9b57,	// (0x000ac6f2) clock_digital_number_pane

0x9b63,	// (0x000ac6fe) clock_digital_number_pane_cp02_ParamLimits

0x9b63,	// (0x000ac6fe) clock_digital_number_pane_cp02

0x9b6f,	// (0x000ac70a) clock_digital_number_pane_cp03_ParamLimits

0x9b6f,	// (0x000ac70a) clock_digital_number_pane_cp03

0x9b7b,	// (0x000ac716) clock_digital_number_pane_cp04_ParamLimits

0x9b7b,	// (0x000ac716) clock_digital_number_pane_cp04

0x9b8b,	// (0x000ac726) clock_digital_separator_pane_ParamLimits

0x9b8b,	// (0x000ac726) clock_digital_separator_pane

0x9b97,	// (0x000ac732) popup_clock_digital_window_t1

0xa439,	// (0x000acfd4) clock_digital_number_pane_g1

0xa439,	// (0x000acfd4) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000b1e70) clock_digital_number_pane_g

0xa439,	// (0x000acfd4) clock_digital_separator_pane_g1

0xa439,	// (0x000acfd4) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000b1e70) clock_digital_separator_pane_g

0x9967,	// (0x000ac502) bg_popup_window_pane_cp04

0xbdf8,	// (0x000ae993) heading_pane_cp03

0xbe00,	// (0x000ae99b) listscroll_popup_gms_pane

0xbe08,	// (0x000ae9a3) grid_large_graphic_popup_pane

0xbe12,	// (0x000ae9ad) listscroll_popup_gms_pane_g1

0xbe1a,	// (0x000ae9b5) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x000b1f0d) listscroll_popup_gms_pane_g

0xa752,	// (0x000ad2ed) scroll_pane_cp014

0x258a,	// (0x000a5125) cell_large_graphic_popup_pane_ParamLimits

0x258a,	// (0x000a5125) cell_large_graphic_popup_pane

0x25a2,	// (0x000a513d) cell_large_graphic_popup_pane_g1_ParamLimits

0x25a2,	// (0x000a513d) cell_large_graphic_popup_pane_g1

0xbe22,	// (0x000ae9bd) cell_large_graphic_popup_pane_g2_ParamLimits

0xbe22,	// (0x000ae9bd) cell_large_graphic_popup_pane_g2

0xbe2e,	// (0x000ae9c9) cell_large_graphic_popup_pane_g3_ParamLimits

0xbe2e,	// (0x000ae9c9) cell_large_graphic_popup_pane_g3

0xbe3b,	// (0x000ae9d6) cell_large_graphic_popup_pane_g4_ParamLimits

0xbe3b,	// (0x000ae9d6) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x000b1f12) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x000b1f12) cell_large_graphic_popup_pane_g

0xbe4b,	// (0x000ae9e6) grid_highlight_pane_cp010

0xa439,	// (0x000acfd4) bg_popup_call_pane_g1

0xbe55,	// (0x000ae9f0) list_single_graphic_popup_conf_pane_ParamLimits

0xbe55,	// (0x000ae9f0) list_single_graphic_popup_conf_pane

0xbe68,	// (0x000aea03) list_highlight_pane_cp01

0xbe71,	// (0x000aea0c) list_single_graphic_popup_conf_pane_g1

0xbe79,	// (0x000aea14) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x000b1f1b) list_single_graphic_popup_conf_pane_g

0xbe81,	// (0x000aea1c) list_single_graphic_popup_conf_pane_t1

0xbe8f,	// (0x000aea2a) linegrid_cams_pane_g1

0x25ae,	// (0x000a5149) linegrid_cams_pane_g2

0xa58f,	// (0x000ad12a) linegrid_cams_pane_g3

0xbe98,	// (0x000aea33) linegrid_cams_pane_g4

0x25b7,	// (0x000a5152) linegrid_cams_pane_g5

0x25c0,	// (0x000a515b) linegrid_cams_pane_g6

0xa598,	// (0x000ad133) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x000b1f20) linegrid_cams_pane_g

0xbea1,	// (0x000aea3c) popup_clock_analogue_window

0xbea1,	// (0x000aea3c) popup_clock_digital_window

0x9967,	// (0x000ac502) popup_phob_thumbnail_window

0xa439,	// (0x000acfd4) call_video_uplink_pane_g1

0xbeaa,	// (0x000aea45) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000b1f2f) call_video_uplink_pane_g

0xbeb2,	// (0x000aea4d) video_uplink_pane

0xbeba,	// (0x000aea55) mce_image_pane_g1

0x25cb,	// (0x000a5166) mce_image_pane_g2

0x25d5,	// (0x000a5170) mce_image_pane_g3

0x25dd,	// (0x000a5178) mce_image_pane_g4

0x25e5,	// (0x000a5180) mce_image_pane_g5

0x0004,

0xf399,	// (0x000b1f34) mce_image_pane_g

0xbec4,	// (0x000aea5f) control_top_pane_stacon_cp01_ParamLimits

0xbec4,	// (0x000aea5f) control_top_pane_stacon_cp01

0xbed8,	// (0x000aea73) uni_indicator_pane_stacon_cp01_ParamLimits

0xbed8,	// (0x000aea73) uni_indicator_pane_stacon_cp01

0xbee9,	// (0x000aea84) bg_popup_sub_pane_cp03

0xbef3,	// (0x000aea8e) chi_dic_find_pane

0x25ed,	// (0x000a5188) listscroll_chi_dic_pane

0xbefb,	// (0x000aea96) main_pane_chidic_g1

0xbf03,	// (0x000aea9e) chi_dic_find_pane_t1

0xbf11,	// (0x000aeaac) find_chidic_pane

0xbf1a,	// (0x000aeab5) chi_dic_list_pane_ParamLimits

0xbf1a,	// (0x000aeab5) chi_dic_list_pane

0xbf2b,	// (0x000aeac6) scroll_pane_cp020

0xbf33,	// (0x000aeace) find_chidic_pane_t1

0x9967,	// (0x000ac502) input_focus_pane_cp06

0x2601,	// (0x000a519c) list_chi_dic_pane_ParamLimits

0x2601,	// (0x000a519c) list_chi_dic_pane

0x2613,	// (0x000a51ae) list_chi_dic_pane_t1_ParamLimits

0x2613,	// (0x000a51ae) list_chi_dic_pane_t1

0x9967,	// (0x000ac502) list_highlight_pane_cp020

0xbf42,	// (0x000aeadd) bg_cale_heading_pane_g1

0x2626,	// (0x000a51c1) bg_cale_heading_pane_g2

0x262e,	// (0x000a51c9) bg_cale_heading_pane_g3

0x2636,	// (0x000a51d1) bg_cale_heading_pane_g4

0x2640,	// (0x000a51db) bg_cale_heading_pane_g5

0x264a,	// (0x000a51e5) bg_cale_heading_pane_g6

0x2652,	// (0x000a51ed) bg_cale_heading_pane_g7

0x265a,	// (0x000a51f5) bg_cale_heading_pane_g8

0x2664,	// (0x000a51ff) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000b1f3f) bg_cale_heading_pane_g

0xbf42,	// (0x000aeadd) bg_cale_side_pane_g1

0x266e,	// (0x000a5209) bg_cale_side_pane_g2

0x2676,	// (0x000a5211) bg_cale_side_pane_g3

0x267e,	// (0x000a5219) bg_cale_side_pane_g4

0x2686,	// (0x000a5221) bg_cale_side_pane_g5

0x268e,	// (0x000a5229) bg_cale_side_pane_g6

0x2696,	// (0x000a5231) bg_cale_side_pane_g7

0x269e,	// (0x000a5239) bg_cale_side_pane_g8

0x26a6,	// (0x000a5241) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000b1f52) bg_cale_side_pane_g

0x26ae,	// (0x000a5249) popup_call_status_window_ParamLimits

0x26ae,	// (0x000a5249) popup_call_status_window

0xbf4a,	// (0x000aeae5) stacon_top_pane

0xbf52,	// (0x000aeaed) status_pane_ParamLimits

0xbf52,	// (0x000aeaed) status_pane

0xbf67,	// (0x000aeb02) status_small_pane

0xbf6f,	// (0x000aeb0a) control_pane

0x9967,	// (0x000ac502) stacon_bottom_pane

0xbf77,	// (0x000aeb12) list_single_mce_smart_pane_t1_ParamLimits

0xbf77,	// (0x000aeb12) list_single_mce_smart_pane_t1

0xbf8a,	// (0x000aeb25) list_single_mce_smart_pane_t2_ParamLimits

0xbf8a,	// (0x000aeb25) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x000b1f65) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x000b1f65) list_single_mce_smart_pane_t

0x26f7,	// (0x000a5292) compass_pane

0x2700,	// (0x000a529b) main_location2_pane_t1

0x2712,	// (0x000a52ad) main_location2_pane_t2

0x2724,	// (0x000a52bf) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000b1f6a) main_location2_pane_t

0xbfa9,	// (0x000aeb44) compass_pane_g1_ParamLimits

0xbfa9,	// (0x000aeb44) compass_pane_g1

0x2768,	// (0x000a5303) compass_pane_t1

0x2777,	// (0x000a5312) compass_pane_t2

0x0005,

0xf3d8,	// (0x000b1f73) compass_pane_t

0x27be,	// (0x000a5359) text_secondary_cp61

0xc025,	// (0x000aebc0) navi_pane_cams_g5

0xc0a1,	// (0x000aec3c) navi_pane_im_t1

0xc0af,	// (0x000aec4a) navi_pane_mp_g1_ParamLimits

0xc0af,	// (0x000aec4a) navi_pane_mp_g1

0xc0c3,	// (0x000aec5e) navi_pane_mp_g2_ParamLimits

0xc0c3,	// (0x000aec5e) navi_pane_mp_g2

0xc0cf,	// (0x000aec6a) navi_pane_mp_g3_ParamLimits

0xc0cf,	// (0x000aec6a) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x000b1f87) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x000b1f87) navi_pane_mp_g

0xc0db,	// (0x000aec76) navi_pane_mp_t1

0xc0e9,	// (0x000aec84) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x000b1f8e) navi_pane_mp_t

0xc154,	// (0x000aecef) navi_pane_vt_g1

0xc0db,	// (0x000aec76) navi_pane_vt_t1

0xc15c,	// (0x000aecf7) navi_slider_pane

0xa5a9,	// (0x000ad144) zooming_pane

0xc16c,	// (0x000aed07) navi_slider_pane_g1

0x9bb4,	// (0x000ac74f) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x000b1f95) navi_slider_pane_g

0xc190,	// (0x000aed2b) aid_levels_zoom

0xc198,	// (0x000aed33) zooming_pane_g1

0xc1a0,	// (0x000aed3b) zooming_pane_g2

0xc1a0,	// (0x000aed3b) zooming_pane_g3

0x0002,

0xf409,	// (0x000b1fa4) zooming_pane_g

0xc1a8,	// (0x000aed43) level_10_zoom

0xc1b1,	// (0x000aed4c) level_11_zoom

0xc1ba,	// (0x000aed55) level_1_zoom

0xc1c3,	// (0x000aed5e) level_2_zoom

0xc1cc,	// (0x000aed67) level_3_zoom

0xc1d5,	// (0x000aed70) level_4_zoom

0xc1de,	// (0x000aed79) level_5_zoom

0xc1e7,	// (0x000aed82) level_6_zoom

0xc1f0,	// (0x000aed8b) level_7_zoom

0xc1f9,	// (0x000aed94) level_8_zoom

0xc202,	// (0x000aed9d) level_9_zoom

0xc213,	// (0x000aedae) popup_phob_thumbnail_window_g1

0xc21b,	// (0x000aedb6) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x000b1fab) popup_phob_thumbnail_window_g

0xd505,	// (0x000b00a0) level_1_location

0xd50d,	// (0x000b00a8) level_2_location

0xd515,	// (0x000b00b0) level_3_location

0xd51d,	// (0x000b00b8) level_4_location

0xa5a9,	// (0x000ad144) level_5_location

0x280f,	// (0x000a53aa) mce_icon_pane_g1

0x2819,	// (0x000a53b4) mce_icon_pane_g2

0x0001,

0xf415,	// (0x000b1fb0) mce_icon_pane_g

0x2821,	// (0x000a53bc) main_mup_pane_g1_ParamLimits

0x2821,	// (0x000a53bc) main_mup_pane_g1

0x2837,	// (0x000a53d2) main_mup_pane_g2_ParamLimits

0x2837,	// (0x000a53d2) main_mup_pane_g2

0x284f,	// (0x000a53ea) main_mup_pane_g3_ParamLimits

0x284f,	// (0x000a53ea) main_mup_pane_g3

0x2867,	// (0x000a5402) main_mup_pane_g4_ParamLimits

0x2867,	// (0x000a5402) main_mup_pane_g4

0x287f,	// (0x000a541a) main_mup_pane_g5_ParamLimits

0x287f,	// (0x000a541a) main_mup_pane_g5

0x289b,	// (0x000a5436) main_mup_pane_g6_ParamLimits

0x289b,	// (0x000a5436) main_mup_pane_g6

0x28b3,	// (0x000a544e) main_mup_pane_g7_ParamLimits

0x28b3,	// (0x000a544e) main_mup_pane_g7

0x28cb,	// (0x000a5466) main_mup_pane_g8_ParamLimits

0x28cb,	// (0x000a5466) main_mup_pane_g8

0x28e5,	// (0x000a5480) main_mup_pane_g9_ParamLimits

0x28e5,	// (0x000a5480) main_mup_pane_g9

0x28ff,	// (0x000a549a) main_mup_pane_g10_ParamLimits

0x28ff,	// (0x000a549a) main_mup_pane_g10

0x2919,	// (0x000a54b4) main_mup_pane_g11_ParamLimits

0x2919,	// (0x000a54b4) main_mup_pane_g11

0x292d,	// (0x000a54c8) main_mup_pane_g12_ParamLimits

0x292d,	// (0x000a54c8) main_mup_pane_g12

0x2943,	// (0x000a54de) main_mup_pane_g13_ParamLimits

0x2943,	// (0x000a54de) main_mup_pane_g13

0x000c,

0xf41a,	// (0x000b1fb5) main_mup_pane_g_ParamLimits

0xf41a,	// (0x000b1fb5) main_mup_pane_g

0x2957,	// (0x000a54f2) main_mup_pane_t1_ParamLimits

0x2957,	// (0x000a54f2) main_mup_pane_t1

0x2971,	// (0x000a550c) main_mup_pane_t2_ParamLimits

0x2971,	// (0x000a550c) main_mup_pane_t2

0x2989,	// (0x000a5524) main_mup_pane_t3_ParamLimits

0x2989,	// (0x000a5524) main_mup_pane_t3

0x29a1,	// (0x000a553c) main_mup_pane_t4_ParamLimits

0x29a1,	// (0x000a553c) main_mup_pane_t4

0x29bf,	// (0x000a555a) main_mup_pane_t5_ParamLimits

0x29bf,	// (0x000a555a) main_mup_pane_t5

0x29d4,	// (0x000a556f) main_mup_pane_t6_ParamLimits

0x29d4,	// (0x000a556f) main_mup_pane_t6

0x0005,

0xf435,	// (0x000b1fd0) main_mup_pane_t_ParamLimits

0xf435,	// (0x000b1fd0) main_mup_pane_t

0x29e6,	// (0x000a5581) mup_progress_pane_ParamLimits

0x29e6,	// (0x000a5581) mup_progress_pane

0x29f2,	// (0x000a558d) mup_visualizer_pane_ParamLimits

0x29f2,	// (0x000a558d) mup_visualizer_pane

0x2a22,	// (0x000a55bd) mup_volume_pane_ParamLimits

0x2a22,	// (0x000a55bd) mup_volume_pane

0xc223,	// (0x000aedbe) mup_visualizer_pane_g1_ParamLimits

0xc223,	// (0x000aedbe) mup_visualizer_pane_g1

0xc223,	// (0x000aedbe) mup_visualizer_pane_g2_ParamLimits

0xc223,	// (0x000aedbe) mup_visualizer_pane_g2

0xbfa9,	// (0x000aeb44) mup_visualizer_pane_g3_ParamLimits

0xbfa9,	// (0x000aeb44) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x000b1fdd) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x000b1fdd) mup_visualizer_pane_g

0xa439,	// (0x000acfd4) mup_volume_pane_g1

0xc239,	// (0x000aedd4) mup_volume_pane_g2

0x0001,

0xf449,	// (0x000b1fe4) mup_volume_pane_g

0xa439,	// (0x000acfd4) mup_progress_pane_g1

0xc242,	// (0x000aeddd) mup_progress_pane_g2

0xc24b,	// (0x000aede6) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x000b1fe9) mup_progress_pane_g

0x9967,	// (0x000ac502) bg_popup_window_pane_cp05

0xc254,	// (0x000aedef) heading_pane_cp02_ParamLimits

0xc254,	// (0x000aedef) heading_pane_cp02

0xc26e,	// (0x000aee09) list_popup_blid_pane

0xc276,	// (0x000aee11) list_blid_sat_info_pane_ParamLimits

0xc276,	// (0x000aee11) list_blid_sat_info_pane

0xc289,	// (0x000aee24) list_blid_sat_info_pane_g1

0xc291,	// (0x000aee2c) list_blid_sat_info_pane_t1

0x2b38,	// (0x000a56d3) mup_equalizer_pane_ParamLimits

0x2b38,	// (0x000a56d3) mup_equalizer_pane

0x2b51,	// (0x000a56ec) mup_equalizer_pane_cp1_ParamLimits

0x2b51,	// (0x000a56ec) mup_equalizer_pane_cp1

0x2b6e,	// (0x000a5709) mup_equalizer_pane_cp2_ParamLimits

0x2b6e,	// (0x000a5709) mup_equalizer_pane_cp2

0x2b8b,	// (0x000a5726) mup_equalizer_pane_cp3_ParamLimits

0x2b8b,	// (0x000a5726) mup_equalizer_pane_cp3

0x2bac,	// (0x000a5747) mup_equalizer_pane_cp4_ParamLimits

0x2bac,	// (0x000a5747) mup_equalizer_pane_cp4

0x2bcd,	// (0x000a5768) mup_equalizer_pane_cp5

0x2be1,	// (0x000a577c) mup_equalizer_pane_cp6

0x2bf5,	// (0x000a5790) mup_equalizer_pane_cp7

0xd423,	// (0x000affbe) bg_popup_call_poc_act_pane_g9

0xd42b,	// (0x000affc6) bg_popup_call_poc_act_pane_g10

0xd433,	// (0x000affce) bg_popup_call_poc_act_pane_g11

0x000a,

0xa31f,	// (0x000aceba) mup_scale_pane

0xa439,	// (0x000acfd4) mup_scale_pane_g1

0xc29f,	// (0x000aee3a) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x000b2005) mup_scale_pane_g

0xc2c3,	// (0x000aee5e) msg_data_pane

0xc2cb,	// (0x000aee66) scroll_pane_cp017

0x2c1b,	// (0x000a57b6) bg_list_pane_cp04_ParamLimits

0x2c1b,	// (0x000a57b6) bg_list_pane_cp04

0xc2d3,	// (0x000aee6e) msg_data_pane_g1

0x2c3b,	// (0x000a57d6) msg_data_pane_g2

0x2c45,	// (0x000a57e0) msg_data_pane_g3

0x2c4d,	// (0x000a57e8) msg_data_pane_g4

0x2c55,	// (0x000a57f0) msg_data_pane_g5

0x2c5d,	// (0x000a57f8) msg_data_pane_g6

0x2c65,	// (0x000a5800) msg_data_pane_g7

0x0006,

0xf479,	// (0x000b2014) msg_data_pane_g

0x2c6d,	// (0x000a5808) msg_text_pane_ParamLimits

0x2c6d,	// (0x000a5808) msg_text_pane

0x2c96,	// (0x000a5831) qrid_highlight_pane_cp011_ParamLimits

0x2c96,	// (0x000a5831) qrid_highlight_pane_cp011

0x9967,	// (0x000ac502) msg_body_pane

0x9967,	// (0x000ac502) msg_header_pane

0xc2e4,	// (0x000aee7f) input_focus_pane_cp07

0x2cba,	// (0x000a5855) msg_header_pane_t1_ParamLimits

0x2cba,	// (0x000a5855) msg_header_pane_t1

0x2ccc,	// (0x000a5867) msg_header_pane_t2_ParamLimits

0x2ccc,	// (0x000a5867) msg_header_pane_t2

0x0001,

0xf48d,	// (0x000b2028) msg_header_pane_t_ParamLimits

0xf48d,	// (0x000b2028) msg_header_pane_t

0xc2f9,	// (0x000aee94) msg_body_pane_g1

0x2cde,	// (0x000a5879) msg_body_pane_t1_ParamLimits

0x2cde,	// (0x000a5879) msg_body_pane_t1

0x2d0f,	// (0x000a58aa) msg_body_pane_t2_ParamLimits

0x2d0f,	// (0x000a58aa) msg_body_pane_t2

0x2d21,	// (0x000a58bc) msg_body_pane_t3_ParamLimits

0x2d21,	// (0x000a58bc) msg_body_pane_t3

0x0002,

0xf492,	// (0x000b202d) msg_body_pane_t_ParamLimits

0xf492,	// (0x000b202d) msg_body_pane_t

0x2d6d,	// (0x000a5908) main_viewer_pane_g1_ParamLimits

0x2d6d,	// (0x000a5908) main_viewer_pane_g1

0x2d7b,	// (0x000a5916) main_viewer_pane_g2_ParamLimits

0x2d7b,	// (0x000a5916) main_viewer_pane_g2

0x2d89,	// (0x000a5924) main_viewer_pane_g3_ParamLimits

0x2d89,	// (0x000a5924) main_viewer_pane_g3

0x2d98,	// (0x000a5933) main_viewer_pane_g4_ParamLimits

0x2d98,	// (0x000a5933) main_viewer_pane_g4

0x9bde,	// (0x000ac779) main_viewer_pane_g5_ParamLimits

0x9bde,	// (0x000ac779) main_viewer_pane_g5

0x9bde,	// (0x000ac779) main_viewer_pane_g7_ParamLimits

0x9bde,	// (0x000ac779) main_viewer_pane_g7

0xbc14,	// (0x000ae7af) main_viewer_pane_g8_ParamLimits

0xbc14,	// (0x000ae7af) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x000b203d) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x000b203d) main_viewer_pane_g

0xc301,	// (0x000aee9c) viewer_content_pane_ParamLimits

0xc301,	// (0x000aee9c) viewer_content_pane

0x2dd4,	// (0x000a596f) main_postcard_pane_g1_ParamLimits

0x2dd4,	// (0x000a596f) main_postcard_pane_g1

0x2dea,	// (0x000a5985) main_postcard_pane_g2_ParamLimits

0x2dea,	// (0x000a5985) main_postcard_pane_g2

0x2e00,	// (0x000a599b) main_postcard_pane_g3_ParamLimits

0x2e00,	// (0x000a599b) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x000b204e) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x000b204e) main_postcard_pane_g

0x2e17,	// (0x000a59b2) main_postcard_pane_g4

0xd605,	// (0x000b01a0) smil_status_volume_pane_g2

0x2e5a,	// (0x000a59f5) postcard_pane_ParamLimits

0x2e5a,	// (0x000a59f5) postcard_pane

0xc30f,	// (0x000aeeaa) postcard_pane_g1_ParamLimits

0xc30f,	// (0x000aeeaa) postcard_pane_g1

0x2e9c,	// (0x000a5a37) postcard_pane_g2_ParamLimits

0x2e9c,	// (0x000a5a37) postcard_pane_g2

0x2ea8,	// (0x000a5a43) postcard_pane_g3_ParamLimits

0x2ea8,	// (0x000a5a43) postcard_pane_g3

0xc31d,	// (0x000aeeb8) postcard_pane_g4_ParamLimits

0xc31d,	// (0x000aeeb8) postcard_pane_g4

0x2eb4,	// (0x000a5a4f) postcard_pane_g5_ParamLimits

0x2eb4,	// (0x000a5a4f) postcard_pane_g5

0x2ec9,	// (0x000a5a64) postcard_pane_g6_ParamLimits

0x2ec9,	// (0x000a5a64) postcard_pane_g6

0xc30f,	// (0x000aeeaa) postcard_pane_g7_ParamLimits

0xc30f,	// (0x000aeeaa) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000b205b) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000b205b) postcard_pane_g

0x2edd,	// (0x000a5a78) main_mp2_pane_g1_ParamLimits

0x2edd,	// (0x000a5a78) main_mp2_pane_g1

0x2ee9,	// (0x000a5a84) main_mp2_pane_g2_ParamLimits

0x2ee9,	// (0x000a5a84) main_mp2_pane_g2

0x2ef5,	// (0x000a5a90) main_mp2_pane_g3_ParamLimits

0x2ef5,	// (0x000a5a90) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000b206a) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000b206a) main_mp2_pane_g

0x2f01,	// (0x000a5a9c) main_mp2_pane_t1_ParamLimits

0x2f01,	// (0x000a5a9c) main_mp2_pane_t1

0x2f16,	// (0x000a5ab1) main_mp2_pane_t2_ParamLimits

0x2f16,	// (0x000a5ab1) main_mp2_pane_t2

0x2f28,	// (0x000a5ac3) main_mp2_pane_t3_ParamLimits

0x2f28,	// (0x000a5ac3) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x000b2071) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x000b2071) main_mp2_pane_t

0xc32b,	// (0x000aeec6) pec_content_pane_ParamLimits

0xc32b,	// (0x000aeec6) pec_content_pane

0xa752,	// (0x000ad2ed) scroll_pane_cp015

0xc33d,	// (0x000aeed8) pec_attribute_pane_ParamLimits

0xc33d,	// (0x000aeed8) pec_attribute_pane

0x2f3a,	// (0x000a5ad5) pec_content_pane_g1_ParamLimits

0x2f3a,	// (0x000a5ad5) pec_content_pane_g1

0xc34d,	// (0x000aeee8) pec_content_pane_t1_ParamLimits

0xc34d,	// (0x000aeee8) pec_content_pane_t1

0xc35f,	// (0x000aeefa) pec_content_pane_t2_ParamLimits

0xc35f,	// (0x000aeefa) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x000b2078) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x000b2078) pec_content_pane_t

0x2f46,	// (0x000a5ae1) list_single_graphic_pane_cp01_ParamLimits

0x2f46,	// (0x000a5ae1) list_single_graphic_pane_cp01

0xa31f,	// (0x000aceba) bg_popup_sub_pane_cp04

0xc371,	// (0x000aef0c) popup_mup_playback_window_g1

0xc37d,	// (0x000aef18) popup_mup_playback_window_t1

0xc392,	// (0x000aef2d) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x000b207d) popup_mup_playback_window_t

0xc3c9,	// (0x000aef64) main_image_pane_g1_ParamLimits

0xc3c9,	// (0x000aef64) main_image_pane_g1

0xc40c,	// (0x000aefa7) scroll_pane_cp018_ParamLimits

0xc40c,	// (0x000aefa7) scroll_pane_cp018

0xc424,	// (0x000aefbf) scroll_pane_cp016_ParamLimits

0xc424,	// (0x000aefbf) scroll_pane_cp016

0x3013,	// (0x000a5bae) smil2_image_pane_ParamLimits

0x3013,	// (0x000a5bae) smil2_image_pane

0x3043,	// (0x000a5bde) smil2_root_pane_ParamLimits

0x3043,	// (0x000a5bde) smil2_root_pane

0x307b,	// (0x000a5c16) smil2_text_pane_ParamLimits

0x307b,	// (0x000a5c16) smil2_text_pane

0x9967,	// (0x000ac502) bg_list_pane_cp06

0xc460,	// (0x000aeffb) grid_radio_pane

0x9967,	// (0x000ac502) bg_popup_window_pane_cp06

0xc468,	// (0x000af003) main_fmradio_pane_t1

0xbdf8,	// (0x000ae993) heading_pane_cp04

0xc476,	// (0x000af011) main_fmradio_pane_t2

0xd43b,	// (0x000affd6) popup_cale_lunar_info_window_g1

0xc484,	// (0x000af01f) main_fmradio_pane_t3

0xd443,	// (0x000affde) popup_cale_lunar_info_window_g2

0xc492,	// (0x000af02d) main_fmradio_pane_t4

0x0001,

0xc4a0,	// (0x000af03b) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x000b2158) popup_cale_lunar_info_window_g

0xf4f7,	// (0x000b2092) main_fmradio_pane_t

0xc4ae,	// (0x000af049) wait_bar_pane_cp03

0xc4b6,	// (0x000af051) cell_fmradio_pane_ParamLimits

0xc4b6,	// (0x000af051) cell_fmradio_pane

0xc30f,	// (0x000aeeaa) cell_fmradio_pane_g1_ParamLimits

0xc30f,	// (0x000aeeaa) cell_fmradio_pane_g1

0x9967,	// (0x000ac502) grid_highlight_pane_cp011

0xc4c9,	// (0x000af064) poc_content_pane_ParamLimits

0xc4c9,	// (0x000af064) poc_content_pane

0xc4db,	// (0x000af076) scroll_pane_cp019

0x30fb,	// (0x000a5c96) popup_call_poc_act_window_ParamLimits

0x30fb,	// (0x000a5c96) popup_call_poc_act_window

0x311f,	// (0x000a5cba) popup_call_poc_inact_window_ParamLimits

0x311f,	// (0x000a5cba) popup_call_poc_inact_window

0xf594,	// (0x000b212f) bg_popup_call_poc_act_pane_g

0xd3b3,	// (0x000aff4e) bg_popup_call_poc_inact_pane_g1

0xd3bb,	// (0x000aff56) bg_popup_call_poc_inact_pane_g2

0xc4e3,	// (0x000af07e) popup_call_poc_act_window_g2

0xd3c3,	// (0x000aff5e) bg_popup_call_poc_inact_pane_g3

0xd3cb,	// (0x000aff66) bg_popup_call_poc_inact_pane_g4

0xd3d3,	// (0x000aff6e) bg_popup_call_poc_inact_pane_g5

0xc4eb,	// (0x000af086) popup_call_poc_act_window_t1_ParamLimits

0xc4eb,	// (0x000af086) popup_call_poc_act_window_t1

0xc513,	// (0x000af0ae) popup_call_poc_act_window_t2_ParamLimits

0xc513,	// (0x000af0ae) popup_call_poc_act_window_t2

0xc53b,	// (0x000af0d6) popup_call_poc_act_window_t3_ParamLimits

0xc53b,	// (0x000af0d6) popup_call_poc_act_window_t3

0xc563,	// (0x000af0fe) popup_call_poc_act_window_t4_ParamLimits

0xc563,	// (0x000af0fe) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x000b209d) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x000b209d) popup_call_poc_act_window_t

0xd3db,	// (0x000aff76) bg_popup_call_poc_inact_pane_g6

0xd3e3,	// (0x000aff7e) bg_popup_call_poc_inact_pane_g7

0xd3eb,	// (0x000aff86) bg_popup_call_poc_inact_pane_g8

0xc575,	// (0x000af110) popup_call_poc_inact_window_g2

0xd3f3,	// (0x000aff8e) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x000b211c) bg_popup_call_poc_inact_pane_g

0xc57d,	// (0x000af118) popup_call_poc_inact_window_t1_ParamLimits

0xc57d,	// (0x000af118) popup_call_poc_inact_window_t1

0xc592,	// (0x000af12d) popup_call_poc_inact_window_t2_ParamLimits

0xc592,	// (0x000af12d) popup_call_poc_inact_window_t2

0xc5a7,	// (0x000af142) popup_call_poc_inact_window_t3_ParamLimits

0xc5a7,	// (0x000af142) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x000b20a6) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x000b20a6) popup_call_poc_inact_window_t

0xd578,	// (0x000b0113) context_pane_ParamLimits

0x3960,	// (0x000a64fb) signal_pane_ParamLimits

0xa5a9,	// (0x000ad144) main_call2_pane

0x9c29,	// (0x000ac7c4) popup_phob_thumbnail2_window_ParamLimits

0x9c29,	// (0x000ac7c4) popup_phob_thumbnail2_window

0x9bc6,	// (0x000ac761) aid_hotspot_pointer_arrow_pane

0x9bce,	// (0x000ac769) aid_hotspot_pointer_hand_pane

0x3468,	// (0x000a6003) phob_pre_status_pane_g5

0x0fe0,	// (0x000a3b7b) cams_zoom_pane_ParamLimits

0x0fef,	// (0x000a3b8a) image_vga_pane_ParamLimits

0x1009,	// (0x000a3ba4) main_camera_pane_g1_ParamLimits

0x101b,	// (0x000a3bb6) main_camera_pane_g2_ParamLimits

0x102b,	// (0x000a3bc6) main_camera_pane_g3_ParamLimits

0x103b,	// (0x000a3bd6) main_camera_pane_g4_ParamLimits

0x104b,	// (0x000a3be6) main_camera_pane_g5_ParamLimits

0x105b,	// (0x000a3bf6) main_camera_pane_g6_ParamLimits

0x106d,	// (0x000a3c08) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x000b1da5) main_camera_pane_g_ParamLimits

0x107d,	// (0x000a3c18) main_camera_pane_t1_ParamLimits

0x1093,	// (0x000a3c2e) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x000b1db6) main_camera_pane_t_ParamLimits

0xa31f,	// (0x000aceba) bg_popup_preview_window_pane_cp01_ParamLimits

0xa31f,	// (0x000aceba) bg_popup_preview_window_pane_cp01

0xc5bc,	// (0x000af157) popup_phob_thumbnail2_window_g1_ParamLimits

0xc5bc,	// (0x000af157) popup_phob_thumbnail2_window_g1

0x9967,	// (0x000ac502) call2_cli_visual_pane

0x3153,	// (0x000a5cee) popup_call2_audio_conf_window_ParamLimits

0x3153,	// (0x000a5cee) popup_call2_audio_conf_window

0x3173,	// (0x000a5d0e) popup_call2_audio_first_window_ParamLimits

0x3173,	// (0x000a5d0e) popup_call2_audio_first_window

0x3209,	// (0x000a5da4) popup_call2_audio_in_window_ParamLimits

0x3209,	// (0x000a5da4) popup_call2_audio_in_window

0x3251,	// (0x000a5dec) popup_call2_audio_out_window_ParamLimits

0x3251,	// (0x000a5dec) popup_call2_audio_out_window

0x32bb,	// (0x000a5e56) popup_call2_audio_second_window_ParamLimits

0x32bb,	// (0x000a5e56) popup_call2_audio_second_window

0x3321,	// (0x000a5ebc) popup_call2_audio_wait_window_ParamLimits

0x3321,	// (0x000a5ebc) popup_call2_audio_wait_window

0x9967,	// (0x000ac502) bg_popup_call2_act_pane_cp03

0xa301,	// (0x000ace9c) list_conf_pane_cp

0xc5c8,	// (0x000af163) popup_call2_audio_conf_window_t1

0xbe55,	// (0x000ae9f0) list_single_graphic_popup_conf2_pane_ParamLimits

0xbe55,	// (0x000ae9f0) list_single_graphic_popup_conf2_pane

0xbe68,	// (0x000aea03) list_highlight_pane_cp04

0xc5d6,	// (0x000af171) list_single_graphic_popup_conf2_pane_g1

0xbe79,	// (0x000aea14) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x000b20ad) list_single_graphic_popup_conf2_pane_g

0xc5e0,	// (0x000af17b) list_single_graphic_popup_conf2_pane_t1

0xc5ee,	// (0x000af189) bg_popup_call2_act_pane_cp01_ParamLimits

0xc5ee,	// (0x000af189) bg_popup_call2_act_pane_cp01

0xc678,	// (0x000af213) call_type_pane_cp05_ParamLimits

0xc678,	// (0x000af213) call_type_pane_cp05

0xc6cc,	// (0x000af267) popup_call2_audio_second_window_g1_ParamLimits

0xc6cc,	// (0x000af267) popup_call2_audio_second_window_g1

0xc720,	// (0x000af2bb) popup_call2_audio_second_window_g2_ParamLimits

0xc720,	// (0x000af2bb) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x000b20b2) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x000b20b2) popup_call2_audio_second_window_g

0xc785,	// (0x000af320) popup_call2_audio_second_window_t1_ParamLimits

0xc785,	// (0x000af320) popup_call2_audio_second_window_t1

0xc840,	// (0x000af3db) popup_call2_audio_second_window_t2_ParamLimits

0xc840,	// (0x000af3db) popup_call2_audio_second_window_t2

0xc893,	// (0x000af42e) popup_call2_audio_second_window_t3_ParamLimits

0xc893,	// (0x000af42e) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x000b20b9) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x000b20b9) popup_call2_audio_second_window_t

0x9967,	// (0x000ac502) bg_popup_call2_in_pane_cp02

0x9971,	// (0x000ac50c) call_type_pane_cp04

0x9979,	// (0x000ac514) popup_call2_audio_wait_window_g1

0x9981,	// (0x000ac51c) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000b1c94) popup_call2_audio_wait_window_g

0x9989,	// (0x000ac524) popup_call2_audio_wait_window_t3

0xc986,	// (0x000af521) bg_popup_call2_act_pane_ParamLimits

0xc986,	// (0x000af521) bg_popup_call2_act_pane

0xca46,	// (0x000af5e1) call_type_pane_cp03_ParamLimits

0xca46,	// (0x000af5e1) call_type_pane_cp03

0xcaaa,	// (0x000af645) popup_call2_audio_first_window_g1_ParamLimits

0xcaaa,	// (0x000af645) popup_call2_audio_first_window_g1

0xcb1a,	// (0x000af6b5) popup_call2_audio_first_window_g2_ParamLimits

0xcb1a,	// (0x000af6b5) popup_call2_audio_first_window_g2

0xc223,	// (0x000aedbe) popup_call2_audio_first_window_g3_ParamLimits

0xc223,	// (0x000aedbe) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x000b20c2) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x000b20c2) popup_call2_audio_first_window_g

0xcbf8,	// (0x000af793) popup_call2_audio_first_window_t1_ParamLimits

0xcbf8,	// (0x000af793) popup_call2_audio_first_window_t1

0xccfb,	// (0x000af896) popup_call2_audio_first_window_t4_ParamLimits

0xccfb,	// (0x000af896) popup_call2_audio_first_window_t4

0xcdde,	// (0x000af979) popup_call2_audio_first_window_t5_ParamLimits

0xcdde,	// (0x000af979) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x000b20cd) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x000b20cd) popup_call2_audio_first_window_t

0xa317,	// (0x000aceb2) bg_popup_call2_act_pane_g1

0xd44b,	// (0x000affe6) popup_cale_lunar_info_window_t1

0xd459,	// (0x000afff4) popup_cale_lunar_info_window_t2

0xd467,	// (0x000b0002) popup_cale_lunar_info_window_t3

0x9967,	// (0x000ac502) bg_popup_call2_bubble_pane

0xcedf,	// (0x000afa7a) bg_popup_call2_in_pane_cp01_ParamLimits

0xcedf,	// (0x000afa7a) bg_popup_call2_in_pane_cp01

0x9643,	// (0x000ac1de) call_type_pane_cp02

0xcf27,	// (0x000afac2) popup_call2_audio_out_window_g1_ParamLimits

0xcf27,	// (0x000afac2) popup_call2_audio_out_window_g1

0xcf53,	// (0x000afaee) popup_call2_audio_out_window_g2_ParamLimits

0xcf53,	// (0x000afaee) popup_call2_audio_out_window_g2

0xcf7b,	// (0x000afb16) popup_call2_audio_out_window_g3_ParamLimits

0xcf7b,	// (0x000afb16) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x000b20d6) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x000b20d6) popup_call2_audio_out_window_g

0xcfb6,	// (0x000afb51) popup_call2_audio_out_window_t1_ParamLimits

0xcfb6,	// (0x000afb51) popup_call2_audio_out_window_t1

0xd015,	// (0x000afbb0) popup_call2_audio_out_window_t2_ParamLimits

0xd015,	// (0x000afbb0) popup_call2_audio_out_window_t2

0xd069,	// (0x000afc04) popup_call2_audio_out_window_t3_ParamLimits

0xd069,	// (0x000afc04) popup_call2_audio_out_window_t3

0xd07f,	// (0x000afc1a) popup_call2_audio_out_window_t4_ParamLimits

0xd07f,	// (0x000afc1a) popup_call2_audio_out_window_t4

0xd095,	// (0x000afc30) popup_call2_audio_out_window_t5_ParamLimits

0xd095,	// (0x000afc30) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x000b20df) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x000b20df) popup_call2_audio_out_window_t

0xd0f9,	// (0x000afc94) bg_popup_call2_in_pane_ParamLimits

0xd0f9,	// (0x000afc94) bg_popup_call2_in_pane

0xd155,	// (0x000afcf0) popup_call2_audio_in_window_g1_ParamLimits

0xd155,	// (0x000afcf0) popup_call2_audio_in_window_g1

0xd18d,	// (0x000afd28) popup_call2_audio_in_window_g2_ParamLimits

0xd18d,	// (0x000afd28) popup_call2_audio_in_window_g2

0xd1c5,	// (0x000afd60) popup_call2_audio_in_window_g3_ParamLimits

0xd1c5,	// (0x000afd60) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x000b20ec) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x000b20ec) popup_call2_audio_in_window_g

0xd21d,	// (0x000afdb8) popup_call2_audio_in_window_t1_ParamLimits

0xd21d,	// (0x000afdb8) popup_call2_audio_in_window_t1

0xd29d,	// (0x000afe38) popup_call2_audio_in_window_t2_ParamLimits

0xd29d,	// (0x000afe38) popup_call2_audio_in_window_t2

0xd31d,	// (0x000afeb8) popup_call2_audio_in_window_t3_ParamLimits

0xd31d,	// (0x000afeb8) popup_call2_audio_in_window_t3

0xd337,	// (0x000afed2) popup_call2_audio_in_window_t4_ParamLimits

0xd337,	// (0x000afed2) popup_call2_audio_in_window_t4

0xd349,	// (0x000afee4) popup_call2_audio_in_window_t5_ParamLimits

0xd349,	// (0x000afee4) popup_call2_audio_in_window_t5

0xd35e,	// (0x000afef9) popup_call2_audio_in_window_t6_ParamLimits

0xd35e,	// (0x000afef9) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x000b20f5) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x000b20f5) popup_call2_audio_in_window_t

0xa317,	// (0x000aceb2) bg_popup_call2_in_pane_g1

0xd475,	// (0x000b0010) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x000b215d) popup_cale_lunar_info_window_t

0xa31f,	// (0x000aceba) bg_popup_call2_rect_pane_ParamLimits

0xa31f,	// (0x000aceba) bg_popup_call2_rect_pane

0x9967,	// (0x000ac502) call2_cli_visual_graphic_pane

0x9967,	// (0x000ac502) call2_cli_visual_text_pane

0x9c50,	// (0x000ac7eb) smil_status_volume_pane_g3

0x0002,

0xa439,	// (0x000acfd4) call2_cli_visual_graphic_pane_g1

0xa439,	// (0x000acfd4) call2_cli_visual_graphic_pane_g2

0xa439,	// (0x000acfd4) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x000b2102) call2_cli_visual_graphic_pane_g

0xd373,	// (0x000aff0e) bg_popup_call2_rect_pane_g1

0xa4c5,	// (0x000ad060) bg_popup_call2_rect_pane_g2

0xd37b,	// (0x000aff16) bg_popup_call2_rect_pane_g3

0xd383,	// (0x000aff1e) bg_popup_call2_rect_pane_g4

0xd38b,	// (0x000aff26) bg_popup_call2_rect_pane_g5

0xd393,	// (0x000aff2e) bg_popup_call2_rect_pane_g6

0xd39b,	// (0x000aff36) bg_popup_call2_rect_pane_g7

0xd3a3,	// (0x000aff3e) bg_popup_call2_rect_pane_g8

0xd3ab,	// (0x000aff46) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x000b2109) bg_popup_call2_rect_pane_g

0xd3b3,	// (0x000aff4e) bg_popup_call2_bubble_pane_g1

0xd3bb,	// (0x000aff56) bg_popup_call2_bubble_pane_g2

0xd3c3,	// (0x000aff5e) bg_popup_call2_bubble_pane_g3

0xd3cb,	// (0x000aff66) bg_popup_call2_bubble_pane_g4

0xd3d3,	// (0x000aff6e) bg_popup_call2_bubble_pane_g5

0xd3db,	// (0x000aff76) bg_popup_call2_bubble_pane_g6

0xd3e3,	// (0x000aff7e) bg_popup_call2_bubble_pane_g7

0xd3eb,	// (0x000aff86) bg_popup_call2_bubble_pane_g8

0xd3f3,	// (0x000aff8e) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x000b211c) bg_popup_call2_bubble_pane_g

0x0a25,	// (0x000a35c0) aid_cale_week_size_cell_pane

0x10a9,	// (0x000a3c44) aid_cams_cif_uncrop_pane_ParamLimits

0x10a9,	// (0x000a3c44) aid_cams_cif_uncrop_pane

0x1259,	// (0x000a3df4) aid_cams_size_cell_ParamLimits

0x1259,	// (0x000a3df4) aid_cams_size_cell

0x126d,	// (0x000a3e08) grid_cams_pane_ParamLimits

0x1287,	// (0x000a3e22) linegrid_cams_pane_ParamLimits

0x1467,	// (0x000a4002) call_video_pane_t1

0x1485,	// (0x000a4020) call_video_pane_t2

0x0001,

0xf26e,	// (0x000b1e09) call_video_pane_t

0x18b3,	// (0x000a444e) aid_cale_month_size_cell_pane_ParamLimits

0x18b3,	// (0x000a444e) aid_cale_month_size_cell_pane

0xf60b,	// (0x000b21a6) smil_status_volume_pane_g

0x9c5d,	// (0x000ac7f8) volume_smil_pane_ParamLimits

0x94e6,	// (0x000ac081) aid_popup2_width_pane

0x097f,	// (0x000a351a) cell_qdial_pane_g4_ParamLimits

0x097f,	// (0x000a351a) cell_qdial_pane_g4

0x2748,	// (0x000a52e3) aid_blid_cardinal_pane_ParamLimits

0x2754,	// (0x000a52ef) aid_blid_destination_pane_ParamLimits

0x2754,	// (0x000a52ef) aid_blid_destination_pane

0xa31f,	// (0x000aceba) bg_popup_call_poc_act_pane_ParamLimits

0xa31f,	// (0x000aceba) bg_popup_call_poc_act_pane

0xa31f,	// (0x000aceba) bg_popup_call_poc_inact_pane_ParamLimits

0xa31f,	// (0x000aceba) bg_popup_call_poc_inact_pane

0xd3fb,	// (0x000aff96) bg_popup_call_poc_act_pane_g1

0xd403,	// (0x000aff9e) bg_popup_call_poc_act_pane_g2

0xd40b,	// (0x000affa6) bg_popup_call_poc_act_pane_g3

0xd3cb,	// (0x000aff66) bg_popup_call_poc_act_pane_g4

0xd3d3,	// (0x000aff6e) bg_popup_call_poc_act_pane_g5

0xd413,	// (0x000affae) bg_popup_call_poc_act_pane_g6

0xd3e3,	// (0x000aff7e) bg_popup_call_poc_act_pane_g7

0xd41b,	// (0x000affb6) bg_popup_call_poc_act_pane_g8

0x9967,	// (0x000ac502) main_usb_pane

0x9c04,	// (0x000ac79f) popup_cale_lunar_info_window

0x175f,	// (0x000a42fa) im_reading_pane_t1_ParamLimits

0xa6aa,	// (0x000ad245) list_im_pane_ParamLimits

0xa6bb,	// (0x000ad256) scroll_pane_cp07_ParamLimits

0x9967,	// (0x000ac502) grid_highlight_pane_cp012

0xa31f,	// (0x000aceba) mup_scale_pane_ParamLimits

0xc30f,	// (0x000aeeaa) main_usb_pane_g1_ParamLimits

0xc30f,	// (0x000aeeaa) main_usb_pane_g1

0x337d,	// (0x000a5f18) main_usb_pane_g2_ParamLimits

0x337d,	// (0x000a5f18) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x000b2146) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x000b2146) main_usb_pane_g

0x3393,	// (0x000a5f2e) main_usb_pane_t1_ParamLimits

0x3393,	// (0x000a5f2e) main_usb_pane_t1

0x33a5,	// (0x000a5f40) main_usb_pane_t2_ParamLimits

0x33a5,	// (0x000a5f40) main_usb_pane_t2

0x33b7,	// (0x000a5f52) main_usb_pane_t3_ParamLimits

0x33b7,	// (0x000a5f52) main_usb_pane_t3

0x33c9,	// (0x000a5f64) main_usb_pane_t4_ParamLimits

0x33c9,	// (0x000a5f64) main_usb_pane_t4

0x33db,	// (0x000a5f76) main_usb_pane_t5_ParamLimits

0x33db,	// (0x000a5f76) main_usb_pane_t5

0x33ed,	// (0x000a5f88) main_usb_pane_t6_ParamLimits

0x33ed,	// (0x000a5f88) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x000b214b) main_usb_pane_t_ParamLimits

0x26f7,	// (0x000a5292) aid_text_placing

0x2700,	// (0x000a529b) main_location2_pane_t1_ParamLimits

0x2712,	// (0x000a52ad) main_location2_pane_t2_ParamLimits

0x2724,	// (0x000a52bf) main_location2_pane_t3_ParamLimits

0x2736,	// (0x000a52d1) main_location2_pane_t4_ParamLimits

0x2736,	// (0x000a52d1) main_location2_pane_t4

0xf3cf,	// (0x000b1f6a) main_location2_pane_t_ParamLimits

0xa35b,	// (0x000acef6) find_pinb_pane_g2_ParamLimits

0xa35b,	// (0x000acef6) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x000b1cba) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x000b1cba) find_pinb_pane_g

0xa367,	// (0x000acf02) find_pinb_pane_t1_ParamLimits

0xa379,	// (0x000acf14) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x000b1cbf) find_pinb_pane_t_ParamLimits

0x9967,	// (0x000ac502) main_call3_pane

0x1d9e,	// (0x000a4939) cale_month_day_heading_pane_t1_ParamLimits

0x1e24,	// (0x000a49bf) cale_month_day_heading_pane_t2_ParamLimits

0x1e9d,	// (0x000a4a38) cale_month_day_heading_pane_t3_ParamLimits

0x1f16,	// (0x000a4ab1) cale_month_day_heading_pane_t4_ParamLimits

0x1f97,	// (0x000a4b32) cale_month_day_heading_pane_t5_ParamLimits

0x2020,	// (0x000a4bbb) cale_month_day_heading_pane_t6_ParamLimits

0x20a9,	// (0x000a4c44) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000b1e41) cale_month_day_heading_pane_t_ParamLimits

0xaff1,	// (0x000adb8c) smil_status_volume_pane

0x2e78,	// (0x000a5a13) postcard_address_pane_ParamLimits

0x2e78,	// (0x000a5a13) postcard_address_pane

0x2e8a,	// (0x000a5a25) postcard_message_pane_ParamLimits

0x2e8a,	// (0x000a5a25) postcard_message_pane

0x335b,	// (0x000a5ef6) call2_cli_visual_pane_t1_ParamLimits

0x335b,	// (0x000a5ef6) call2_cli_visual_pane_t1

0x3b8d,	// (0x000a6728) postcard_message_pane_t1_ParamLimits

0x3b8d,	// (0x000a6728) postcard_message_pane_t1

0x3b76,	// (0x000a6711) postcard_address_pane_t1_ParamLimits

0x3b76,	// (0x000a6711) postcard_address_pane_t1

0x3b62,	// (0x000a66fd) popup_call3_audio_in_window_ParamLimits

0x3b62,	// (0x000a66fd) popup_call3_audio_in_window

0x39ed,	// (0x000a6588) bg_popup_call3_in_pane_ParamLimits

0x39ed,	// (0x000a6588) bg_popup_call3_in_pane

0x3a63,	// (0x000a65fe) popup_call3_audio_in_window_g1_ParamLimits

0x3a63,	// (0x000a65fe) popup_call3_audio_in_window_g1

0x3a83,	// (0x000a661e) popup_call3_audio_in_window_g2_ParamLimits

0x3a83,	// (0x000a661e) popup_call3_audio_in_window_g2

0x3aa3,	// (0x000a663e) popup_call3_audio_in_window_g3_ParamLimits

0x3aa3,	// (0x000a663e) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x000b21ad) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x000b21ad) popup_call3_audio_in_window_g

0x3ad4,	// (0x000a666f) popup_call3_audio_in_window_t1_ParamLimits

0x3ad4,	// (0x000a666f) popup_call3_audio_in_window_t1

0x3b12,	// (0x000a66ad) popup_call3_audio_in_window_t2_ParamLimits

0x3b12,	// (0x000a66ad) popup_call3_audio_in_window_t2

0x3b50,	// (0x000a66eb) popup_call3_audio_in_window_t3_ParamLimits

0x3b50,	// (0x000a66eb) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x000b21b6) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x000b21b6) popup_call3_audio_in_window_t

0xa5a9,	// (0x000ad144) bg_popup_call3_rect_pane

0xd373,	// (0x000aff0e) bg_popup_call3_rect_pane_g1

0xa4c5,	// (0x000ad060) bg_popup_call3_rect_pane_g2

0xd37b,	// (0x000aff16) bg_popup_call3_rect_pane_g3

0xd383,	// (0x000aff1e) bg_popup_call3_rect_pane_g4

0xd38b,	// (0x000aff26) bg_popup_call3_rect_pane_g5

0xd393,	// (0x000aff2e) bg_popup_call3_rect_pane_g6

0xd39b,	// (0x000aff36) bg_popup_call3_rect_pane_g7

0x2a38,	// (0x000a55d3) mup_visualizer_osc_pane

0xc231,	// (0x000aedcc) mup_visualizer_spec_pane

0x3a1d,	// (0x000a65b8) call3_video_qcif_pane_ParamLimits

0x3a1d,	// (0x000a65b8) call3_video_qcif_pane

0x3a30,	// (0x000a65cb) call3_video_qcif_uncrop_pane_ParamLimits

0x3a30,	// (0x000a65cb) call3_video_qcif_uncrop_pane

0x3a3e,	// (0x000a65d9) call3_video_subqcif_pane_ParamLimits

0x3a3e,	// (0x000a65d9) call3_video_subqcif_pane

0x3a52,	// (0x000a65ed) call3_video_subqcif_uncrop_pane_ParamLimits

0x3a52,	// (0x000a65ed) call3_video_subqcif_uncrop_pane

0x3ac3,	// (0x000a665e) popup_call3_audio_in_window_g4_ParamLimits

0x3ac3,	// (0x000a665e) popup_call3_audio_in_window_g4

0x39dc,	// (0x000a6577) mup_spec_half_pane

0x39e5,	// (0x000a6580) mup_spec_half_pane_cp

0xd5d8,	// (0x000b0173) mup_osc_middle_pane

0xd5e1,	// (0x000b017c) mup_visualizer_osc_pane_g1

0x39bc,	// (0x000a6557) mup_spec_bar_pane_ParamLimits

0x39bc,	// (0x000a6557) mup_spec_bar_pane

0xd5c5,	// (0x000b0160) mup_spec_bar_pane_g1

0xd5cf,	// (0x000b016a) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000b21a1) mup_spec_bar_pane_g

0x0a25,	// (0x000a35c0) aid_cale_week_size_cell_pane_ParamLimits

0x0a3f,	// (0x000a35da) bg_cale_heading_pane_ParamLimits

0xa502,	// (0x000ad09d) bg_cale_pane_cp01_ParamLimits

0x0a57,	// (0x000a35f2) cale_week_corner_pane_ParamLimits

0x0a76,	// (0x000a3611) cale_week_day_heading_pane_ParamLimits

0x0a93,	// (0x000a362e) cale_week_scroll_pane_g1_ParamLimits

0x0aa6,	// (0x000a3641) cale_week_scroll_pane_g2_ParamLimits

0x0abe,	// (0x000a3659) cale_week_scroll_pane_g3_ParamLimits

0x0ad6,	// (0x000a3671) cale_week_scroll_pane_g4_ParamLimits

0x0aee,	// (0x000a3689) cale_week_scroll_pane_g5_ParamLimits

0x0b0e,	// (0x000a36a9) cale_week_scroll_pane_g6_ParamLimits

0x0b2e,	// (0x000a36c9) cale_week_scroll_pane_g7_ParamLimits

0x0b4e,	// (0x000a36e9) cale_week_scroll_pane_g8_ParamLimits

0x0b72,	// (0x000a370d) cale_week_scroll_pane_g9_ParamLimits

0x0b8a,	// (0x000a3725) cale_week_scroll_pane_g10_ParamLimits

0x0ba2,	// (0x000a373d) cale_week_scroll_pane_g11_ParamLimits

0x0bba,	// (0x000a3755) cale_week_scroll_pane_g12_ParamLimits

0x0bd2,	// (0x000a376d) cale_week_scroll_pane_g13_ParamLimits

0x0bd2,	// (0x000a376d) cale_week_scroll_pane_g14_ParamLimits

0x0bd2,	// (0x000a376d) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x000b1d4b) cale_week_scroll_pane_g_ParamLimits

0x0c0e,	// (0x000a37a9) cale_week_time_pane_ParamLimits

0x0c32,	// (0x000a37cd) grid_cale_week_pane_ParamLimits

0xa51f,	// (0x000ad0ba) listscroll_cale_week_pane_t1

0xa531,	// (0x000ad0cc) scroll_pane_cp08_ParamLimits

0x1913,	// (0x000a44ae) cale_month_corner_pane_ParamLimits

0xafc7,	// (0x000adb62) cale_month_pane_t1

0x1d31,	// (0x000a48cc) cale_month_week_pane_ParamLimits

0x2553,	// (0x000a50ee) popup_call_status_window_g1_ParamLimits

0x2567,	// (0x000a5102) popup_call_status_window_g2_ParamLimits

0x257b,	// (0x000a5116) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x000b1ef1) popup_call_status_window_g_ParamLimits

0xbde8,	// (0x000ae983) aid_call2_pane

0x2cac,	// (0x000a5847) msg_header_pane_g1

0x2e78,	// (0x000a5a13) postcard_address2_pane_ParamLimits

0x2e78,	// (0x000a5a13) postcard_address2_pane

0x2e8a,	// (0x000a5a25) postcard_message2_pane_ParamLimits

0x2e8a,	// (0x000a5a25) postcard_message2_pane

0x396e,	// (0x000a6509) message2_row_pane_ParamLimits

0x396e,	// (0x000a6509) message2_row_pane

0x398a,	// (0x000a6525) address2_row_pane_ParamLimits

0x398a,	// (0x000a6525) address2_row_pane

0xd593,	// (0x000b012e) postcard_message2_row_pane_g1

0xd59b,	// (0x000b0136) postcard_message2_row_pane_t1

0xd593,	// (0x000b012e) address2_row_pane_g1

0xd59b,	// (0x000b0136) address2_row_pane_t1

0x0f62,	// (0x000a3afd) aid_size_cell_vorec

0x9967,	// (0x000ac502) main_rss_pane

0x399d,	// (0x000a6538) rss_list_single_pane_ParamLimits

0x399d,	// (0x000a6538) rss_list_single_pane

0xd5a9,	// (0x000b0144) rss_list_single_pane_t1

0xd5b7,	// (0x000b0152) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x000b219c) rss_list_single_pane_t

0x9967,	// (0x000ac502) main_camera2_pane

0x9967,	// (0x000ac502) main_video2_pane

0x3c06,	// (0x000a67a1) cams_zoom_pane_cp2_ParamLimits

0x3c06,	// (0x000a67a1) cams_zoom_pane_cp2

0x3c26,	// (0x000a67c1) image2_vga_pane_ParamLimits

0x3c26,	// (0x000a67c1) image2_vga_pane

0x3c77,	// (0x000a6812) main_camera2_pane_g1_ParamLimits

0x3c77,	// (0x000a6812) main_camera2_pane_g1

0x3c97,	// (0x000a6832) main_camera2_pane_g2_ParamLimits

0x3c97,	// (0x000a6832) main_camera2_pane_g2

0x3cb7,	// (0x000a6852) main_camera2_pane_g3_ParamLimits

0x3cb7,	// (0x000a6852) main_camera2_pane_g3

0x3cd7,	// (0x000a6872) main_camera2_pane_g4_ParamLimits

0x3cd7,	// (0x000a6872) main_camera2_pane_g4

0x3cf7,	// (0x000a6892) main_camera2_pane_g5_ParamLimits

0x3cf7,	// (0x000a6892) main_camera2_pane_g5

0x3d17,	// (0x000a68b2) main_camera2_pane_g6_ParamLimits

0x3d17,	// (0x000a68b2) main_camera2_pane_g6

0x3d37,	// (0x000a68d2) main_camera2_pane_g7_ParamLimits

0x3d37,	// (0x000a68d2) main_camera2_pane_g7

0x3d57,	// (0x000a68f2) main_camera2_pane_g8_ParamLimits

0x3d57,	// (0x000a68f2) main_camera2_pane_g8

0x0008,

0xf622,	// (0x000b21bd) main_camera2_pane_g_ParamLimits

0xf622,	// (0x000b21bd) main_camera2_pane_g

0x3d97,	// (0x000a6932) main_camera2_pane_t1_ParamLimits

0x3d97,	// (0x000a6932) main_camera2_pane_t1

0x3dcc,	// (0x000a6967) main_camera2_pane_t2_ParamLimits

0x3dcc,	// (0x000a6967) main_camera2_pane_t2

0x3df2,	// (0x000a698d) main_camera2_pane_t3_ParamLimits

0x3df2,	// (0x000a698d) main_camera2_pane_t3

0x3e50,	// (0x000a69eb) main_camera2_pane_t4_ParamLimits

0x3e50,	// (0x000a69eb) main_camera2_pane_t4

0x0006,

0xf635,	// (0x000b21d0) main_camera2_pane_t_ParamLimits

0xf635,	// (0x000b21d0) main_camera2_pane_t

0x3ee2,	// (0x000a6a7d) cams_zoom_pane_cp4_ParamLimits

0x3ee2,	// (0x000a6a7d) cams_zoom_pane_cp4

0x3ef8,	// (0x000a6a93) image2_cif_pane_ParamLimits

0x3ef8,	// (0x000a6a93) image2_cif_pane

0x3f23,	// (0x000a6abe) image2_subqcif_pane_ParamLimits

0x3f23,	// (0x000a6abe) image2_subqcif_pane

0x3f3d,	// (0x000a6ad8) main_video2_pane_g1_ParamLimits

0x3f3d,	// (0x000a6ad8) main_video2_pane_g1

0x3f57,	// (0x000a6af2) main_video2_pane_g2_ParamLimits

0x3f57,	// (0x000a6af2) main_video2_pane_g2

0x3f6d,	// (0x000a6b08) main_video2_pane_g3_ParamLimits

0x3f6d,	// (0x000a6b08) main_video2_pane_g3

0x3f83,	// (0x000a6b1e) main_video2_pane_g4_ParamLimits

0x3f83,	// (0x000a6b1e) main_video2_pane_g4

0x3f99,	// (0x000a6b34) main_video2_pane_g5_ParamLimits

0x3f99,	// (0x000a6b34) main_video2_pane_g5

0x3faf,	// (0x000a6b4a) main_video2_pane_g6_ParamLimits

0x3faf,	// (0x000a6b4a) main_video2_pane_g6

0x0005,

0xf644,	// (0x000b21df) main_video2_pane_g_ParamLimits

0xf644,	// (0x000b21df) main_video2_pane_g

0x3fc9,	// (0x000a6b64) main_video2_pane_t1_ParamLimits

0x3fc9,	// (0x000a6b64) main_video2_pane_t1

0x3fed,	// (0x000a6b88) main_video2_pane_t2_ParamLimits

0x3fed,	// (0x000a6b88) main_video2_pane_t2

0x403b,	// (0x000a6bd6) main_video2_pane_t3_ParamLimits

0x403b,	// (0x000a6bd6) main_video2_pane_t3

0x0002,

0xf651,	// (0x000b21ec) main_video2_pane_t_ParamLimits

0xf651,	// (0x000b21ec) main_video2_pane_t

0x34a8,	// (0x000a6043) call_muted_g2

0x0001,

0xf5f3,	// (0x000b218e) call_muted_g

0x9967,	// (0x000ac502) main_mup2_pane

0x407f,	// (0x000a6c1a) main_mup2_pane_g1_ParamLimits

0x407f,	// (0x000a6c1a) main_mup2_pane_g1

0x408b,	// (0x000a6c26) main_mup2_pane_g2_ParamLimits

0x408b,	// (0x000a6c26) main_mup2_pane_g2

0x9ccb,	// (0x000ac866) main_mup_pane_g13_cp1

0x9cd3,	// (0x000ac86e) mup_volume_pane_cp1

0x40a7,	// (0x000a6c42) main_mup2_pane_g4_ParamLimits

0x40a7,	// (0x000a6c42) main_mup2_pane_g4

0x40b9,	// (0x000a6c54) main_mup2_pane_g5_ParamLimits

0x40b9,	// (0x000a6c54) main_mup2_pane_g5

0x40cb,	// (0x000a6c66) main_mup2_pane_g6_ParamLimits

0x40cb,	// (0x000a6c66) main_mup2_pane_g6

0x40dd,	// (0x000a6c78) main_mup2_pane_g7_ParamLimits

0x40dd,	// (0x000a6c78) main_mup2_pane_g7

0x0006,

0xf658,	// (0x000b21f3) main_mup2_pane_g_ParamLimits

0xf658,	// (0x000b21f3) main_mup2_pane_g

0x40f5,	// (0x000a6c90) main_mup2_pane_t1_ParamLimits

0x40f5,	// (0x000a6c90) main_mup2_pane_t1

0x410b,	// (0x000a6ca6) main_mup2_pane_t2_ParamLimits

0x410b,	// (0x000a6ca6) main_mup2_pane_t2

0x4121,	// (0x000a6cbc) main_mup2_pane_t3_ParamLimits

0x4121,	// (0x000a6cbc) main_mup2_pane_t3

0x4137,	// (0x000a6cd2) main_mup2_pane_t4_ParamLimits

0x4137,	// (0x000a6cd2) main_mup2_pane_t4

0x414f,	// (0x000a6cea) main_mup2_pane_t5_ParamLimits

0x414f,	// (0x000a6cea) main_mup2_pane_t5

0x4167,	// (0x000a6d02) main_mup2_pane_t6_ParamLimits

0x4167,	// (0x000a6d02) main_mup2_pane_t6

0x0005,

0xf667,	// (0x000b2202) main_mup2_pane_t_ParamLimits

0xf667,	// (0x000b2202) main_mup2_pane_t

0x4197,	// (0x000a6d32) mup2_visualizer_pane_ParamLimits

0x4197,	// (0x000a6d32) mup2_visualizer_pane

0x41c5,	// (0x000a6d60) mup_progress_pane_cp_ParamLimits

0x41c5,	// (0x000a6d60) mup_progress_pane_cp

0x9cb6,	// (0x000ac851) mup_volume_pane_cp_ParamLimits

0x9cb6,	// (0x000ac851) mup_volume_pane_cp

0x41d9,	// (0x000a6d74) mup2_visualizer_pane_g1_ParamLimits

0x41d9,	// (0x000a6d74) mup2_visualizer_pane_g1

0xd618,	// (0x000b01b3) mup2_visualizer_pane_g2_ParamLimits

0xd618,	// (0x000b01b3) mup2_visualizer_pane_g2

0x41f0,	// (0x000a6d8b) mup2_visualizer_pane_g3_ParamLimits

0x41f0,	// (0x000a6d8b) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x000b220f) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x000b220f) mup2_visualizer_pane_g

0xc458,	// (0x000aeff3) aid_size_cell_fmradio

0x365a,	// (0x000a61f5) aid_height_parent_landcape

0xa739,	// (0x000ad2d4) wml_content_pane_cp

0xa741,	// (0x000ad2dc) wml_tabs_pane

0xa74a,	// (0x000ad2e5) popup_wml_miniature_window

0xa752,	// (0x000ad2ed) scroll_pane_cp021

0xa766,	// (0x000ad301) wml_content_pane_comp8

0x9967,	// (0x000ac502) bg_popup_sub_pane_cp05

0xd636,	// (0x000b01d1) popup_wml_miniature_window_g1

0xd63e,	// (0x000b01d9) wml_miniature_view_pane

0x41fc,	// (0x000a6d97) aid_size_wml_view

0x4204,	// (0x000a6d9f) wml_miniature_view_pane_g1

0x420d,	// (0x000a6da8) wml_miniature_view_pane_g2

0x4216,	// (0x000a6db1) wml_miniature_view_pane_g3

0x421e,	// (0x000a6db9) wml_miniature_view_pane_g4

0x4226,	// (0x000a6dc1) wml_miniature_view_pane_g5

0x422e,	// (0x000a6dc9) wml_miniature_view_pane_g6

0x4236,	// (0x000a6dd1) wml_miniature_view_pane_g7

0x423e,	// (0x000a6dd9) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x000b2216) wml_miniature_view_pane_g

0xd646,	// (0x000b01e1) background_graphic_ParamLimits

0xd646,	// (0x000b01e1) background_graphic

0xd652,	// (0x000b01ed) wml_tabs_2_pane

0xd65b,	// (0x000b01f6) wml_tabs_3_pane_ParamLimits

0xd65b,	// (0x000b01f6) wml_tabs_3_pane

0xd66d,	// (0x000b0208) wml_tabs_4_pane_ParamLimits

0xd66d,	// (0x000b0208) wml_tabs_4_pane

0xd683,	// (0x000b021e) wml_tabs_5_pane_ParamLimits

0xd683,	// (0x000b021e) wml_tabs_5_pane

0xd69d,	// (0x000b0238) wml_tabs_pane_g2_ParamLimits

0xd69d,	// (0x000b0238) wml_tabs_pane_g2

0xd6b1,	// (0x000b024c) wml_tabs_pane_g3_ParamLimits

0xd6b1,	// (0x000b024c) wml_tabs_pane_g3

0x4246,	// (0x000a6de1) wml_tabs_2_active_pane_ParamLimits

0x4246,	// (0x000a6de1) wml_tabs_2_active_pane

0x425a,	// (0x000a6df5) wml_tabs_2_passive_pane_ParamLimits

0x425a,	// (0x000a6df5) wml_tabs_2_passive_pane

0x426e,	// (0x000a6e09) wml_tabs_3_active_pane_cp_ParamLimits

0x426e,	// (0x000a6e09) wml_tabs_3_active_pane_cp

0x4283,	// (0x000a6e1e) wml_tabs_3_passive_pane_ParamLimits

0x4283,	// (0x000a6e1e) wml_tabs_3_passive_pane

0x4296,	// (0x000a6e31) wml_tabs_3_passive_pane_cp_ParamLimits

0x4296,	// (0x000a6e31) wml_tabs_3_passive_pane_cp

0x42ad,	// (0x000a6e48) tabs_4_active_pane

0x42b5,	// (0x000a6e50) tabs_4_passive_pane

0x42bf,	// (0x000a6e5a) tabs_4_passive_pane_cp

0x42c7,	// (0x000a6e62) tabs_4_passive_pane_cp2

0x3375,	// (0x000a5f10) aid_height_text

0x2a0e,	// (0x000a55a9) mup_volume_cont_pane_ParamLimits

0x2a0e,	// (0x000a55a9) mup_volume_cont_pane

0x0603,	// (0x000a319e) aid_size_cell_pinb

0x060d,	// (0x000a31a8) aid_size_list_pinb

0x41b1,	// (0x000a6d4c) mup2_volume_cont_pane_ParamLimits

0x41b1,	// (0x000a6d4c) mup2_volume_cont_pane

0x9ca2,	// (0x000ac83d) mup2_volume_cont_pane_g1_ParamLimits

0x9ca2,	// (0x000ac83d) mup2_volume_cont_pane_g1

0x02b6,	// (0x000a2e51) aid_size_cell_touch_ParamLimits

0x02b6,	// (0x000a2e51) aid_size_cell_touch

0x04f3,	// (0x000a308e) touch_pane_ParamLimits

0x04f3,	// (0x000a308e) touch_pane

0x954a,	// (0x000ac0e5) main_rss2_pane

0xd6ce,	// (0x000b0269) listscroll_rss2_pane

0xd6d7,	// (0x000b0272) rss2_navigation_pane

0xd6df,	// (0x000b027a) list_rss2_pane

0xbf2b,	// (0x000aeac6) scroll_pane_cp22

0xd6e7,	// (0x000b0282) rss2_navigation_pane_g1

0xd6f0,	// (0x000b028b) rss2_navigation_pane_g2

0xd6f8,	// (0x000b0293) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x000b2227) rss2_navigation_pane_g

0xd700,	// (0x000b029b) rss2_navigation_pane_t1

0x42d1,	// (0x000a6e6c) rss2_list_single_pane_ParamLimits

0x42d1,	// (0x000a6e6c) rss2_list_single_pane

0xd70e,	// (0x000b02a9) rss2_list_single_pane_t2

0xd71c,	// (0x000b02b7) rss2_list_single_pane_t3_ParamLimits

0xd71c,	// (0x000b02b7) rss2_list_single_pane_t3

0xd739,	// (0x000b02d4) rss2_list_single_pane_t4

0x235d,	// (0x000a4ef8) smil_status_pane_g1

0x953c,	// (0x000ac0d7) main_image2_pane_ParamLimits

0x953c,	// (0x000ac0d7) main_image2_pane

0x3d77,	// (0x000a6912) main_camera2_pane_g9_ParamLimits

0x3d77,	// (0x000a6912) main_camera2_pane_g9

0x3ea5,	// (0x000a6a40) main_camera2_pane_t5_ParamLimits

0x3ea5,	// (0x000a6a40) main_camera2_pane_t5

0x9c72,	// (0x000ac80d) main_camera2_pane_t6_ParamLimits

0x9c72,	// (0x000ac80d) main_camera2_pane_t6

0x42e6,	// (0x000a6e81) main_image2_pane_g1_ParamLimits

0x42e6,	// (0x000a6e81) main_image2_pane_g1

0x30b1,	// (0x000a5c4c) smil2_video_pane_ParamLimits

0x30b1,	// (0x000a5c4c) smil2_video_pane

0x94f2,	// (0x000ac08d) aid_zoom_text_primary_cp

0x9532,	// (0x000ac0cd) popup_preview_fixed_window

0xa6a2,	// (0x000ad23d) im_reading_pane_g1

0x3bee,	// (0x000a6789) cams2_bc_adjust_pane_cp_ParamLimits

0x3bee,	// (0x000a6789) cams2_bc_adjust_pane_cp

0x3ed4,	// (0x000a6a6f) cams2_bc_adjust_pane_ParamLimits

0x3ed4,	// (0x000a6a6f) cams2_bc_adjust_pane

0xe2d8,	// (0x000b0e73) cams2_bc_adjust_pane_g1

0x9cdb,	// (0x000ac876) cams2_slider_pane

0x9ce4,	// (0x000ac87f) cams2_slider_pane_g1

0x9ced,	// (0x000ac888) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x000b222e) cams2_slider_pane_g

0x06fb,	// (0x000a3296) calc_display_pane_ParamLimits

0x0723,	// (0x000a32be) calc_paper_pane_ParamLimits

0x0746,	// (0x000a32e1) grid_calc_pane_ParamLimits

0x9b97,	// (0x000ac732) popup_clock_digital_window_t1_ParamLimits

0xc3f5,	// (0x000aef90) main_image_pane_t1

0x06dd,	// (0x000a3278) aid_size_cell_calc_ParamLimits

0x06dd,	// (0x000a3278) aid_size_cell_calc

0x36b2,	// (0x000a624d) popup_blid_sat_info2_window_ParamLimits

0x36b2,	// (0x000a624d) popup_blid_sat_info2_window

0xd74f,	// (0x000b02ea) aid_size_cell_blid

0xd757,	// (0x000b02f2) bg_popup_window_pane_cp07

0xd77a,	// (0x000b0315) grid_popup_blid_pane

0xd784,	// (0x000b031f) heading_pane_cp05_ParamLimits

0xd784,	// (0x000b031f) heading_pane_cp05

0xd84e,	// (0x000b03e9) cell_popup_blid_pane_ParamLimits

0xd84e,	// (0x000b03e9) cell_popup_blid_pane

0xd872,	// (0x000b040d) cell_popup_blid_pane_g1

0xd87a,	// (0x000b0415) cell_popup_blid_pane_t1

0x4181,	// (0x000a6d1c) mup2_indicator_pane_ParamLimits

0x4181,	// (0x000a6d1c) mup2_indicator_pane

0xa5a9,	// (0x000ad144) mup2_visualizer_osc_pane

0xd624,	// (0x000b01bf) mup2_visualizer_spec_pane_ParamLimits

0xd624,	// (0x000b01bf) mup2_visualizer_spec_pane

0x42fc,	// (0x000a6e97) mup2_spec_half_pane

0x4305,	// (0x000a6ea0) mup2_spec_half_pane_cp

0x430d,	// (0x000a6ea8) mup2_spec_bar_pane_ParamLimits

0x430d,	// (0x000a6ea8) mup2_spec_bar_pane

0xd5c5,	// (0x000b0160) mup2_spec_bar_pane_g1

0xd5cf,	// (0x000b016a) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000b21a1) mup2_spec_bar_pane_g

0x432d,	// (0x000a6ec8) mup2_osc_middle_pane

0xd5e1,	// (0x000b017c) mup2_visualizer_osc_pane_g1

0x9574,	// (0x000ac10f) popup_number_entry_window_t1_ParamLimits

0x9587,	// (0x000ac122) popup_number_entry_window_t2_ParamLimits

0x9599,	// (0x000ac134) popup_number_entry_window_t3_ParamLimits

0x0545,	// (0x000a30e0) popup_number_entry_window_t5_ParamLimits

0x0545,	// (0x000a30e0) popup_number_entry_window_t5

0xf0ca,	// (0x000b1c65) popup_number_entry_window_t_ParamLimits

0x95ab,	// (0x000ac146) text_title_cp2_ParamLimits

0x9bd6,	// (0x000ac771) aid_hotspot_pointer_text2_pane

0x9bf0,	// (0x000ac78b) main_viewer_pane_g9_ParamLimits

0x9bf0,	// (0x000ac78b) main_viewer_pane_g9

0xafc7,	// (0x000adb62) cale_month_pane_t1_ParamLimits

0xb004,	// (0x000adb9f) bg_cale_pane_ParamLimits

0xb01c,	// (0x000adbb7) list_cale_pane_ParamLimits

0xb02d,	// (0x000adbc8) listscroll_cale_day_pane_t1

0xb03f,	// (0x000adbda) scroll_pane_cp09_ParamLimits

0x2a40,	// (0x000a55db) main_mup_eq_pane_t1_ParamLimits

0x2a40,	// (0x000a55db) main_mup_eq_pane_t1

0x2a5a,	// (0x000a55f5) main_mup_eq_pane_t2_ParamLimits

0x2a5a,	// (0x000a55f5) main_mup_eq_pane_t2

0x2a74,	// (0x000a560f) main_mup_eq_pane_t3_ParamLimits

0x2a74,	// (0x000a560f) main_mup_eq_pane_t3

0x2a90,	// (0x000a562b) main_mup_eq_pane_t4_ParamLimits

0x2a90,	// (0x000a562b) main_mup_eq_pane_t4

0x2aac,	// (0x000a5647) main_mup_eq_pane_t5_ParamLimits

0x2aac,	// (0x000a5647) main_mup_eq_pane_t5

0x2ac8,	// (0x000a5663) main_mup_eq_pane_t6_ParamLimits

0x2ac8,	// (0x000a5663) main_mup_eq_pane_t6

0x2adc,	// (0x000a5677) main_mup_eq_pane_t7_ParamLimits

0x2adc,	// (0x000a5677) main_mup_eq_pane_t7

0x2af0,	// (0x000a568b) main_mup_eq_pane_t8_ParamLimits

0x2af0,	// (0x000a568b) main_mup_eq_pane_t8

0x2b04,	// (0x000a569f) main_mup_eq_pane_t9_ParamLimits

0x2b04,	// (0x000a569f) main_mup_eq_pane_t9

0x2b1e,	// (0x000a56b9) main_mup_eq_pane_t10_ParamLimits

0x2b1e,	// (0x000a56b9) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x000b1ff0) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x000b1ff0) main_mup_eq_pane_t

0x2bcd,	// (0x000a5768) mup_equalizer_pane_cp5_ParamLimits

0x2be1,	// (0x000a577c) mup_equalizer_pane_cp6_ParamLimits

0x2bf5,	// (0x000a5790) mup_equalizer_pane_cp7_ParamLimits

0x954a,	// (0x000ac0e5) main_gallery_pane

0xd5ea,	// (0x000b0185) smil2_volume_pane

0xd5f2,	// (0x000b018d) smil_status_volume_pane_g1_ParamLimits

0xd605,	// (0x000b01a0) smil_status_volume_pane_g2_ParamLimits

0x9c50,	// (0x000ac7eb) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x000b21a6) smil_status_volume_pane_g_ParamLimits

0xd757,	// (0x000b02f2) bg_popup_window_pane_cp07_ParamLimits

0xd765,	// (0x000b0300) blid_firmament_pane

0x4336,	// (0x000a6ed1) aid_size_cell_gallery_ParamLimits

0x4336,	// (0x000a6ed1) aid_size_cell_gallery

0x434c,	// (0x000a6ee7) grid_gallery_pane_ParamLimits

0x434c,	// (0x000a6ee7) grid_gallery_pane

0x4365,	// (0x000a6f00) cell_gallery_pane_ParamLimits

0x4365,	// (0x000a6f00) cell_gallery_pane

0xd888,	// (0x000b0423) bg_cell_gallery_focus_pane_ParamLimits

0xd888,	// (0x000b0423) bg_cell_gallery_focus_pane

0xd89a,	// (0x000b0435) cell_gallery_pane_g1_ParamLimits

0xd89a,	// (0x000b0435) cell_gallery_pane_g1

0x43ae,	// (0x000a6f49) cell_gallery_pane_g2_ParamLimits

0x43ae,	// (0x000a6f49) cell_gallery_pane_g2

0x43bb,	// (0x000a6f56) cell_gallery_pane_g3_ParamLimits

0x43bb,	// (0x000a6f56) cell_gallery_pane_g3

0xd8a6,	// (0x000b0441) cell_gallery_pane_g4_ParamLimits

0xd8a6,	// (0x000b0441) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x000b2254) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x000b2254) cell_gallery_pane_g

0xd8b2,	// (0x000b044d) bg_cell_gallery_focus_pane_g1

0xd8ba,	// (0x000b0455) bg_cell_gallery_focus_pane_g2

0xd8c2,	// (0x000b045d) bg_cell_gallery_focus_pane_g3

0xd8ca,	// (0x000b0465) bg_cell_gallery_focus_pane_g4

0xd8d2,	// (0x000b046d) bg_cell_gallery_focus_pane_g5

0xd8da,	// (0x000b0475) bg_cell_gallery_focus_pane_g6

0xd8e2,	// (0x000b047d) bg_cell_gallery_focus_pane_g7

0xd8ea,	// (0x000b0485) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x000b225d) bg_cell_gallery_focus_pane_g

0xd8f2,	// (0x000b048d) aid_firma_cardinal

0xd906,	// (0x000b04a1) blid_firmament_pane_t1

0xd91d,	// (0x000b04b8) blid_firmament_pane_t2

0xd934,	// (0x000b04cf) blid_firmament_pane_t3

0xd94b,	// (0x000b04e6) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x000b226e) blid_firmament_pane_t

0xd962,	// (0x000b04fd) blid_sat_info_pane

0xd972,	// (0x000b050d) blid_sat_info_pane_g1

0xd972,	// (0x000b050d) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x000b2277) blid_sat_info_pane_g

0xd97c,	// (0x000b0517) blid_sat_info_pane_t1

0xd98a,	// (0x000b0525) smil2_volume_content_pane

0xd993,	// (0x000b052e) smil2_volume_pane_g1

0xd99b,	// (0x000b0536) smil2_volume_content_pane_g1

0xd9a4,	// (0x000b053f) smil2_volume_content_pane_g2

0xd9ad,	// (0x000b0548) smil2_volume_content_pane_g3

0xd9b6,	// (0x000b0551) smil2_volume_content_pane_g4

0xd9bf,	// (0x000b055a) smil2_volume_content_pane_g5

0xd9c8,	// (0x000b0563) smil2_volume_content_pane_g6

0xd9d1,	// (0x000b056c) smil2_volume_content_pane_g7

0xd9da,	// (0x000b0575) smil2_volume_content_pane_g8

0xd9e3,	// (0x000b057e) smil2_volume_content_pane_g9

0xd9ec,	// (0x000b0587) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x000b227c) smil2_volume_content_pane_g

0x0ce6,	// (0x000a3881) cale_week_day_heading_pane_t1_ParamLimits

0x0d10,	// (0x000a38ab) cale_week_day_heading_pane_t2_ParamLimits

0x0d3f,	// (0x000a38da) cale_week_day_heading_pane_t3_ParamLimits

0x0d6e,	// (0x000a3909) cale_week_day_heading_pane_t4_ParamLimits

0x0d9d,	// (0x000a3938) cale_week_day_heading_pane_t5_ParamLimits

0x0dd4,	// (0x000a396f) cale_week_day_heading_pane_t6_ParamLimits

0x0e0b,	// (0x000a39a6) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x000b1d6c) cale_week_day_heading_pane_t_ParamLimits

0xa54e,	// (0x000ad0e9) bg_cale_side_pane_ParamLimits

0x0e35,	// (0x000a39d0) cale_week_time_pane_t1_ParamLimits

0x0e4f,	// (0x000a39ea) cale_week_time_pane_t2_ParamLimits

0x0e69,	// (0x000a3a04) cale_week_time_pane_t3_ParamLimits

0x0e83,	// (0x000a3a1e) cale_week_time_pane_t4_ParamLimits

0x0e9d,	// (0x000a3a38) cale_week_time_pane_t5_ParamLimits

0x0eb7,	// (0x000a3a52) cale_week_time_pane_t6_ParamLimits

0x0ed1,	// (0x000a3a6c) cale_week_time_pane_t7_ParamLimits

0x0eeb,	// (0x000a3a86) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x000b1d7b) cale_week_time_pane_t_ParamLimits

0x0f05,	// (0x000a3aa0) cell_cale_week_pane_g2_ParamLimits

0xa54e,	// (0x000ad0e9) bg_cale_side_pane_cp01_ParamLimits

0x213a,	// (0x000a4cd5) cale_month_week_pane_t1_ParamLimits

0x2153,	// (0x000a4cee) cale_month_week_pane_t2_ParamLimits

0x216c,	// (0x000a4d07) cale_month_week_pane_t3_ParamLimits

0x2185,	// (0x000a4d20) cale_month_week_pane_t4_ParamLimits

0x219e,	// (0x000a4d39) cale_month_week_pane_t5_ParamLimits

0x21b7,	// (0x000a4d52) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000b1e50) cale_month_week_pane_t_ParamLimits

0x9b13,	// (0x000ac6ae) cell_cale_month_pane_g1_ParamLimits

0x954a,	// (0x000ac0e5) main_cale_event_viewer_pane

0x94d4,	// (0x000ac06f) listscroll_cale_event_viewer_pane

0xd9f5,	// (0x000b0590) list_cale_ev_pane

0xd9fd,	// (0x000b0598) scroll_pane_cp023

0xda09,	// (0x000b05a4) field_cale_ev_pane_ParamLimits

0xda09,	// (0x000b05a4) field_cale_ev_pane

0xda27,	// (0x000b05c2) field_cale_ev_content_pane_ParamLimits

0xda27,	// (0x000b05c2) field_cale_ev_content_pane

0xda33,	// (0x000b05ce) field_cale_ev_pane_g1_ParamLimits

0xda33,	// (0x000b05ce) field_cale_ev_pane_g1

0xda3f,	// (0x000b05da) field_cale_ev_pane_g2_ParamLimits

0xda3f,	// (0x000b05da) field_cale_ev_pane_g2

0xda57,	// (0x000b05f2) field_cale_ev_pane_g3_ParamLimits

0xda57,	// (0x000b05f2) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x000b2291) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x000b2291) field_cale_ev_pane_g

0xda6f,	// (0x000b060a) field_cale_ev_pane_t1_ParamLimits

0xda6f,	// (0x000b060a) field_cale_ev_pane_t1

0xda86,	// (0x000b0621) field_cale_ev_content_pane_t1_ParamLimits

0xda86,	// (0x000b0621) field_cale_ev_content_pane_t1

0xc2db,	// (0x000aee76) bg_button_pane_cp01

0x0a13,	// (0x000a35ae) listscroll_cale_week_pane_ParamLimits

0xa4f9,	// (0x000ad094) popup_toolbar_window_cp01

0xa51f,	// (0x000ad0ba) listscroll_cale_week_pane_t1_ParamLimits

0x0a13,	// (0x000a35ae) listscroll_cale_day_pane_ParamLimits

0xa4f9,	// (0x000ad094) popup_toolbar_window_cp02

0xb02d,	// (0x000adbc8) listscroll_cale_day_pane_t1_ParamLimits

0x3678,	// (0x000a6213) main_cale_month_pane_ParamLimits

0x9c3b,	// (0x000ac7d6) popup_toolbar_window_cp03_ParamLimits

0x9c3b,	// (0x000ac7d6) popup_toolbar_window_cp03

0x2f79,	// (0x000a5b14) main_image_pane_g2_ParamLimits

0x2f79,	// (0x000a5b14) main_image_pane_g2

0x2f8a,	// (0x000a5b25) main_image_pane_g3_ParamLimits

0x2f8a,	// (0x000a5b25) main_image_pane_g3

0x0002,

0xf4e7,	// (0x000b2082) main_image_pane_g_ParamLimits

0xf4e7,	// (0x000b2082) main_image_pane_g

0xc3f5,	// (0x000aef90) main_image_pane_t1_ParamLimits

0x2f9b,	// (0x000a5b36) main_image_pane_t2_ParamLimits

0x2f9b,	// (0x000a5b36) main_image_pane_t2

0x2fad,	// (0x000a5b48) main_image_pane_t3_ParamLimits

0x2fad,	// (0x000a5b48) main_image_pane_t3

0x2fd5,	// (0x000a5b70) main_image_pane_t4_ParamLimits

0x2fd5,	// (0x000a5b70) main_image_pane_t4

0x0003,

0xf4ee,	// (0x000b2089) main_image_pane_t_ParamLimits

0xf4ee,	// (0x000b2089) main_image_pane_t

0x2ff5,	// (0x000a5b90) popup_image_details_window_cp01

0x2fff,	// (0x000a5b9a) popup_toobar_trans_pane_cp01_ParamLimits

0x2fff,	// (0x000a5b9a) popup_toobar_trans_pane_cp01

0x3791,	// (0x000a632c) popup_image_details_window_ParamLimits

0x3791,	// (0x000a632c) popup_image_details_window

0x9c0e,	// (0x000ac7a9) popup_image_focus_window

0x3ba8,	// (0x000a6743) camera2_autofocus_pane_ParamLimits

0x3ba8,	// (0x000a6743) camera2_autofocus_pane

0x94d4,	// (0x000ac06f) bg_popup_sub_pane_cp06

0xdaa4,	// (0x000b063f) popup_image_focus_window_g1

0xdaac,	// (0x000b0647) popup_image_focus_window_g2

0xdab4,	// (0x000b064f) popup_image_focus_window_g3

0xdabc,	// (0x000b0657) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x000b2298) popup_image_focus_window_g

0xdac4,	// (0x000b065f) popup_image_focus_window_t1

0xdad2,	// (0x000b066d) popup_image_focus_window_t2

0xdae2,	// (0x000b067d) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x000b22a1) popup_image_focus_window_t

0xdaf0,	// (0x000b068b) camera2_autofocus_pane_g1

0xa7fa,	// (0x000ad395) bg_tb_trans_pane_cp01

0xdafe,	// (0x000b0699) popup_image_details_window_g1

0xdb11,	// (0x000b06ac) popup_image_details_window_g2

0x0002,

0xf718,	// (0x000b22b3) popup_image_details_window_g

0xdb3a,	// (0x000b06d5) popup_image_details_window_t1

0xdb4c,	// (0x000b06e7) popup_image_details_window_t2

0xdb65,	// (0x000b0700) popup_image_details_window_t3

0xdb79,	// (0x000b0714) popup_image_details_window_t4

0xdb94,	// (0x000b072f) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x000b22ba) popup_image_details_window_t

0xa3d0,	// (0x000acf6b) bg_calc_paper_pane_ParamLimits

0x954a,	// (0x000ac0e5) grid_highlight_pane_cp013

0x9a83,	// (0x000ac61e) list_calc_pane_ParamLimits

0x9a95,	// (0x000ac630) scroll_pane_cp024

0xa3e4,	// (0x000acf7f) bg_calc_display_pane_ParamLimits

0x0844,	// (0x000a33df) calc_display_pane_t1_ParamLimits

0x0856,	// (0x000a33f1) calc_display_pane_t2_ParamLimits

0x9a9d,	// (0x000ac638) calc_display_pane_t3_ParamLimits

0xf151,	// (0x000b1cec) calc_display_pane_t_ParamLimits

0x0910,	// (0x000a34ab) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x000b1d09) cell_calc_pane_g

0x0919,	// (0x000a34b4) cell_calc_pane_t1

0xa443,	// (0x000acfde) grid_highlight_pane_cp02_ParamLimits

0xa459,	// (0x000acff4) toolbar_button_pane_cp01_ParamLimits

0xa459,	// (0x000acff4) toolbar_button_pane_cp01

0xc43a,	// (0x000aefd5) temp_image_control_pane_ParamLimits

0xc43a,	// (0x000aefd5) temp_image_control_pane

0x953c,	// (0x000ac0d7) main_mp3_pane

0xdbae,	// (0x000b0749) temp_image_control_pane_g1_ParamLimits

0xdbae,	// (0x000b0749) temp_image_control_pane_g1

0xdbbc,	// (0x000b0757) temp_image_control_pane_g2_ParamLimits

0xdbbc,	// (0x000b0757) temp_image_control_pane_g2

0xdbce,	// (0x000b0769) temp_image_control_pane_g3_ParamLimits

0xdbce,	// (0x000b0769) temp_image_control_pane_g3

0x43f8,	// (0x000a6f93) temp_image_control_pane_g4_ParamLimits

0x43f8,	// (0x000a6f93) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x000b22c5) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x000b22c5) temp_image_control_pane_g

0xdbae,	// (0x000b0749) main_mp3_pane_g1

0x440b,	// (0x000a6fa6) main_mp3_pane_g2

0x0007,

0xf733,	// (0x000b22ce) main_mp3_pane_g

0xdc11,	// (0x000b07ac) main_mp3_pane_t1

0xa5b1,	// (0x000ad14c) main_camera_pane_g8_ParamLimits

0xa5b1,	// (0x000ad14c) main_camera_pane_g8

0x11ff,	// (0x000a3d9a) main_video_pane_g7_ParamLimits

0x11ff,	// (0x000a3d9a) main_video_pane_g7

0x9c90,	// (0x000ac82b) main_camera2_pane_t7_ParamLimits

0x9c90,	// (0x000ac82b) main_camera2_pane_t7

0xa6f9,	// (0x000ad294) scroll_pane_cp025_ParamLimits

0xa6f9,	// (0x000ad294) scroll_pane_cp025

0xa70d,	// (0x000ad2a8) scroll_pane_cp026_ParamLimits

0xa70d,	// (0x000ad2a8) scroll_pane_cp026

0xa71c,	// (0x000ad2b7) wml_content_pane_ParamLimits

0x954a,	// (0x000ac0e5) main_touch_calib_pane

0x44df,	// (0x000a707a) main_touch_calib_pane_g1

0x44f1,	// (0x000a708c) main_touch_calib_pane_g2

0x4503,	// (0x000a709e) main_touch_calib_pane_g3

0x4515,	// (0x000a70b0) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x000b22ec) main_touch_calib_pane_g

0x4527,	// (0x000a70c2) main_touch_calib_pane_t1

0x4541,	// (0x000a70dc) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x000b22f5) main_touch_calib_pane_t

0xc007,	// (0x000aeba2) mup_progress_pane_cp02

0xc03c,	// (0x000aebd7) navi_pane_g1

0xc0f7,	// (0x000aec92) navi_pane_mp_t3

0x953c,	// (0x000ac0d7) main_mp3_pane_ParamLimits

0x3916,	// (0x000a64b1) navi_pane_ParamLimits

0xdbae,	// (0x000b0749) main_mp3_pane_g1_ParamLimits

0x440b,	// (0x000a6fa6) main_mp3_pane_g2_ParamLimits

0x4419,	// (0x000a6fb4) main_mp3_pane_g3_ParamLimits

0x4419,	// (0x000a6fb4) main_mp3_pane_g3

0x4427,	// (0x000a6fc2) main_mp3_pane_g4_ParamLimits

0x4427,	// (0x000a6fc2) main_mp3_pane_g4

0xdbde,	// (0x000b0779) main_mp3_pane_g5_ParamLimits

0xdbde,	// (0x000b0779) main_mp3_pane_g5

0xdbec,	// (0x000b0787) main_mp3_pane_g6_ParamLimits

0xdbec,	// (0x000b0787) main_mp3_pane_g6

0xdbf9,	// (0x000b0794) main_mp3_pane_g7_ParamLimits

0xdbf9,	// (0x000b0794) main_mp3_pane_g7

0xdc05,	// (0x000b07a0) main_mp3_pane_g8_ParamLimits

0xdc05,	// (0x000b07a0) main_mp3_pane_g8

0xf733,	// (0x000b22ce) main_mp3_pane_g_ParamLimits

0x4433,	// (0x000a6fce) main_mp3_pane_t2

0x4441,	// (0x000a6fdc) main_mp3_pane_t3

0xdc1f,	// (0x000b07ba) main_mp3_pane_t4

0xdc2d,	// (0x000b07c8) main_mp3_pane_t5

0x0005,

0xf744,	// (0x000b22df) main_mp3_pane_t

0xdc3b,	// (0x000b07d6) mup_progress_pane_cp01

0x94f2,	// (0x000ac08d) aid_zoom_text_secondary2

0xd9f5,	// (0x000b0590) list_cale_ev2_pane

0xd9fd,	// (0x000b0598) scroll_pane_cp023_ParamLimits

0x4597,	// (0x000a7132) field_cale_ev2_pane_ParamLimits

0x4597,	// (0x000a7132) field_cale_ev2_pane

0x45b7,	// (0x000a7152) field_cale_ev2_pane_g1_ParamLimits

0x45b7,	// (0x000a7152) field_cale_ev2_pane_g1

0x45c3,	// (0x000a715e) field_cale_ev2_pane_g2_ParamLimits

0x45c3,	// (0x000a715e) field_cale_ev2_pane_g2

0x45db,	// (0x000a7176) field_cale_ev2_pane_g3_ParamLimits

0x45db,	// (0x000a7176) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x000b2300) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x000b2300) field_cale_ev2_pane_g

0xdc4f,	// (0x000b07ea) field_cale_ev2_pane_t1_ParamLimits

0xdc4f,	// (0x000b07ea) field_cale_ev2_pane_t1

0xdc66,	// (0x000b0801) field_cale_ev2_pane_t2_ParamLimits

0xdc66,	// (0x000b0801) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x000b2309) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x000b2309) field_cale_ev2_pane_t

0x2e2e,	// (0x000a59c9) main_postcard_pane_g5_ParamLimits

0x2e2e,	// (0x000a59c9) main_postcard_pane_g5

0x2e44,	// (0x000a59df) main_postcard_pane_g6_ParamLimits

0x2e44,	// (0x000a59df) main_postcard_pane_g6

0x0fcb,	// (0x000a3b66) camera2_autofocus_pane_cp_ParamLimits

0x0fcb,	// (0x000a3b66) camera2_autofocus_pane_cp

0x953c,	// (0x000ac0d7) main_mup3_pane

0x4617,	// (0x000a71b2) main_mup3_pane_g1_ParamLimits

0x4617,	// (0x000a71b2) main_mup3_pane_g1

0x4639,	// (0x000a71d4) main_mup3_pane_g2_ParamLimits

0x4639,	// (0x000a71d4) main_mup3_pane_g2

0x46b7,	// (0x000a7252) main_mup3_pane_g3_ParamLimits

0x46b7,	// (0x000a7252) main_mup3_pane_g3

0x46fd,	// (0x000a7298) main_mup3_pane_g4_ParamLimits

0x46fd,	// (0x000a7298) main_mup3_pane_g4

0x4743,	// (0x000a72de) main_mup3_pane_g5_ParamLimits

0x4743,	// (0x000a72de) main_mup3_pane_g5

0x4789,	// (0x000a7324) main_mup3_pane_g6_ParamLimits

0x4789,	// (0x000a7324) main_mup3_pane_g6

0xdc9b,	// (0x000b0836) main_mup3_pane_g7_ParamLimits

0xdc9b,	// (0x000b0836) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x000b2319) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x000b2319) main_mup3_pane_g

0x4807,	// (0x000a73a2) main_mup3_pane_t1_ParamLimits

0x4807,	// (0x000a73a2) main_mup3_pane_t1

0x487b,	// (0x000a7416) main_mup3_pane_t2_ParamLimits

0x487b,	// (0x000a7416) main_mup3_pane_t2

0x494f,	// (0x000a74ea) main_mup3_pane_t4_ParamLimits

0x494f,	// (0x000a74ea) main_mup3_pane_t4

0x49a5,	// (0x000a7540) main_mup3_pane_t5_ParamLimits

0x49a5,	// (0x000a7540) main_mup3_pane_t5

0x4a61,	// (0x000a75fc) main_mup3_pane_t6_ParamLimits

0x4a61,	// (0x000a75fc) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x000b232a) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x000b232a) main_mup3_pane_t

0x4b19,	// (0x000a76b4) mup3_progress_pane_ParamLimits

0x4b19,	// (0x000a76b4) mup3_progress_pane

0x4baf,	// (0x000a774a) popup_mup3_control_window_ParamLimits

0x4baf,	// (0x000a774a) popup_mup3_control_window

0xdca9,	// (0x000b0844) popup_mup3_text_window

0x4be1,	// (0x000a777c) mup3_progress_pane_t1

0x4c00,	// (0x000a779b) mup3_progress_pane_t2

0xdcb1,	// (0x000b084c) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x000b2337) mup3_progress_pane_t

0xdcce,	// (0x000b0869) mup_progress_pane_cp03

0x94d4,	// (0x000ac06f) bg_tb_trans_pane_cp04

0x4c1f,	// (0x000a77ba) mup3_volume_pane

0x4c27,	// (0x000a77c2) popup_mup3_control_window_g1

0x4c30,	// (0x000a77cb) mup3_volume_pane_g1

0x4c39,	// (0x000a77d4) mup3_volume_pane_g2

0x4c42,	// (0x000a77dd) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x000b233e) mup3_volume_pane_g

0x94d4,	// (0x000ac06f) bg_tb_trans_pane_cp03

0xdcde,	// (0x000b0879) popup_mup3_text_window_g1

0xdce6,	// (0x000b0881) popup_mup3_text_window_t1

0xa42c,	// (0x000acfc7) list_calc_item_pane_g1_ParamLimits

0xd6c5,	// (0x000b0260) mup_volume_pane_cp_g1

0x455b,	// (0x000a70f6) main_touch_calib_pane_t3

0x456f,	// (0x000a710a) main_touch_calib_pane_t4

0x4583,	// (0x000a711e) main_touch_calib_pane_t5

0x94de,	// (0x000ac079) aid_cell_size_toolbar2

0x94e6,	// (0x000ac081) aid_popup3_width_pane

0x02e6,	// (0x000a2e81) aid_zoom_text_msg_primary

0x0faa,	// (0x000a3b45) vorec_t7

0xa3f0,	// (0x000acf8b) bg_calc_paper_pane_g1_ParamLimits

0xa3fc,	// (0x000acf97) bg_calc_paper_pane_g2_ParamLimits

0xa408,	// (0x000acfa3) bg_calc_paper_pane_g3_ParamLimits

0xa414,	// (0x000acfaf) bg_calc_paper_pane_g4_ParamLimits

0xa420,	// (0x000acfbb) bg_calc_paper_pane_g5_ParamLimits

0x089d,	// (0x000a3438) bg_calc_paper_pane_g6_ParamLimits

0x08ac,	// (0x000a3447) bg_calc_paper_pane_g7_ParamLimits

0x08bb,	// (0x000a3456) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x000b1cf3) bg_calc_paper_pane_g_ParamLimits

0x08ce,	// (0x000a3469) calc_bg_paper_pane_g9_ParamLimits

0x1116,	// (0x000a3cb1) image_qvga_pane_ParamLimits

0x1116,	// (0x000a3cb1) image_qvga_pane

0xa31f,	// (0x000aceba) bg_popup_sub_pane_cp04_ParamLimits

0xc371,	// (0x000aef0c) popup_mup_playback_window_g1_ParamLimits

0xc37d,	// (0x000aef18) popup_mup_playback_window_t1_ParamLimits

0xc392,	// (0x000aef2d) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x000b207d) popup_mup_playback_window_t_ParamLimits

0x409b,	// (0x000a6c36) main_mup2_pane_g3_ParamLimits

0x409b,	// (0x000a6c36) main_mup2_pane_g3

0x1508,	// (0x000a40a3) popup_toolbar_window_cp04

0xc774,	// (0x000af30f) popup_call2_audio_second_window_g3_ParamLimits

0xc774,	// (0x000af30f) popup_call2_audio_second_window_g3

0xcb7e,	// (0x000af719) popup_call2_audio_first_window_g4_ParamLimits

0xcb7e,	// (0x000af719) popup_call2_audio_first_window_g4

0xd1fd,	// (0x000afd98) popup_call2_audio_in_window_g4_ParamLimits

0xd1fd,	// (0x000afd98) popup_call2_audio_in_window_g4

0x2f5b,	// (0x000a5af6) aid_area_sk_bg_cut_ParamLimits

0x2f5b,	// (0x000a5af6) aid_area_sk_bg_cut

0xc3a7,	// (0x000aef42) aid_area_sk_bg_cut_2_ParamLimits

0xc3a7,	// (0x000aef42) aid_area_sk_bg_cut_2

0x439e,	// (0x000a6f39) aid_placing_details_win

0x43a6,	// (0x000a6f41) aid_placing_details_win_2

0xdaf0,	// (0x000b068b) camera2_autofocus_pane_g1_ParamLimits

0x048c,	// (0x000a3027) popup_fixed_preview_cale_window_ParamLimits

0x048c,	// (0x000a3027) popup_fixed_preview_cale_window

0xc175,	// (0x000aed10) navi_slider_pane_g3

0xc17e,	// (0x000aed19) navi_slider_pane_g4

0xc187,	// (0x000aed22) navi_slider_pane_g5

0xc175,	// (0x000aed10) navi_slider_pane_g6

0x9bbd,	// (0x000ac758) navi_slider_pane_g7

0xc2a8,	// (0x000aee43) mup_scale_pane_g3

0xc2b1,	// (0x000aee4c) mup_scale_pane_g4

0xc2ba,	// (0x000aee55) mup_scale_pane_g5

0x2c09,	// (0x000a57a4) mup_scale_pane_g6

0x2c12,	// (0x000a57ad) mup_scale_pane_g7

0xc175,	// (0x000aed10) cams2_slider_pane_g3

0xd747,	// (0x000b02e2) cams2_slider_pane_g4

0x9cf6,	// (0x000ac891) cams2_slider_pane_g5

0xc175,	// (0x000aed10) cams2_slider_pane_g6

0x9cfe,	// (0x000ac899) cams2_slider_pane_g7

0xd972,	// (0x000b050d) camera2_autofocus_pane_cp_g1

0xd55e,	// (0x000b00f9) bg_popup_preview_window_pane_cp02_ParamLimits

0xd55e,	// (0x000b00f9) bg_popup_preview_window_pane_cp02

0xdcf4,	// (0x000b088f) list_fp_cale_pane_ParamLimits

0xdcf4,	// (0x000b088f) list_fp_cale_pane

0xdd00,	// (0x000b089b) popup_fixed_preview_cale_window_t1_ParamLimits

0xdd00,	// (0x000b089b) popup_fixed_preview_cale_window_t1

0x4c4b,	// (0x000a77e6) popup_fixed_preview_cale_window_t2_ParamLimits

0x4c4b,	// (0x000a77e6) popup_fixed_preview_cale_window_t2

0x4c60,	// (0x000a77fb) popup_fixed_preview_cale_window_t3_ParamLimits

0x4c60,	// (0x000a77fb) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x000b2345) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x000b2345) popup_fixed_preview_cale_window_t

0x4c75,	// (0x000a7810) list_single_fp_cale_pane_ParamLimits

0x4c75,	// (0x000a7810) list_single_fp_cale_pane

0xdd1e,	// (0x000b08b9) list_single_fp_cale_pane_g1_ParamLimits

0xdd1e,	// (0x000b08b9) list_single_fp_cale_pane_g1

0xdd2a,	// (0x000b08c5) list_single_fp_cale_pane_g2_ParamLimits

0xdd2a,	// (0x000b08c5) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x000b234c) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x000b234c) list_single_fp_cale_pane_g

0xdd43,	// (0x000b08de) list_single_fp_cale_pane_t1_ParamLimits

0xdd43,	// (0x000b08de) list_single_fp_cale_pane_t1

0xdd55,	// (0x000b08f0) list_single_fp_cale_pane_t2_ParamLimits

0xdd55,	// (0x000b08f0) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x000b2353) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x000b2353) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x954a,	// (0x000ac0e5) main_dialer_pane

0x4c8a,	// (0x000a7825) aid_cell_size_keypad

0x4c94,	// (0x000a782f) dialer_ne_pane

0x4c9c,	// (0x000a7837) grid_dialer_command_1_pane

0x4ca4,	// (0x000a783f) grid_dialer_command_2_pane

0x4cac,	// (0x000a7847) grid_dialer_keypad_pane

0x4cbe,	// (0x000a7859) bg_popup_call_pane_cp06_ParamLimits

0x4cbe,	// (0x000a7859) bg_popup_call_pane_cp06

0x4cca,	// (0x000a7865) dialer_ne_clear_pane_ParamLimits

0x4cca,	// (0x000a7865) dialer_ne_clear_pane

0xdd88,	// (0x000b0923) dialer_ne_pane_g1

0xdd90,	// (0x000b092b) dialer_ne_pane_t1_ParamLimits

0xdd90,	// (0x000b092b) dialer_ne_pane_t1

0x4cd6,	// (0x000a7871) dialer_ne_pane_t2_ParamLimits

0x4cd6,	// (0x000a7871) dialer_ne_pane_t2

0x4d00,	// (0x000a789b) dialer_ne_pane_t3_ParamLimits

0x4d00,	// (0x000a789b) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x000b2358) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x000b2358) dialer_ne_pane_t

0x4d30,	// (0x000a78cb) dialer_ne_pane_t3_copy1_ParamLimits

0x4d30,	// (0x000a78cb) dialer_ne_pane_t3_copy1

0x4d5f,	// (0x000a78fa) cell_dialer_keypad_pane_ParamLimits

0x4d5f,	// (0x000a78fa) cell_dialer_keypad_pane

0x4d76,	// (0x000a7911) cell_dialer_command_1_pane_ParamLimits

0x4d76,	// (0x000a7911) cell_dialer_command_1_pane

0x4d8c,	// (0x000a7927) cell_dialer_command_2_pane_ParamLimits

0x4d8c,	// (0x000a7927) cell_dialer_command_2_pane

0xdda2,	// (0x000b093d) bg_button_pane_cp02_ParamLimits

0xdda2,	// (0x000b093d) bg_button_pane_cp02

0x4d9b,	// (0x000a7936) cell_dialer_keypad_pane_g1_ParamLimits

0x4d9b,	// (0x000a7936) cell_dialer_keypad_pane_g1

0xdda2,	// (0x000b093d) bg_button_pane_cp03_ParamLimits

0xdda2,	// (0x000b093d) bg_button_pane_cp03

0x4daf,	// (0x000a794a) cell_dialer_command_1_pane_g1_ParamLimits

0x4daf,	// (0x000a794a) cell_dialer_command_1_pane_g1

0xddae,	// (0x000b0949) bg_button_pane_cp04

0x4dc3,	// (0x000a795e) cell_dialer_command_2_pane_g1

0xa5a9,	// (0x000ad144) bg_button_pane_cp06

0xddb6,	// (0x000b0951) dialer_ne_clear_pane_g1

0xc048,	// (0x000aebe3) navi_pane_g2

0xc076,	// (0x000aec11) navi_pane_g3

0x0002,

0xf3e5,	// (0x000b1f80) navi_pane_g

0xc105,	// (0x000aeca0) navi_pane_mv_g2

0xc12c,	// (0x000aecc7) navi_pane_mv_g5

0x27cd,	// (0x000a5368) navi_pane_mv_t1

0xa3e4,	// (0x000acf7f) main_clock2_pane

0x4e10,	// (0x000a79ab) main_clock2_list_pane_ParamLimits

0x4e10,	// (0x000a79ab) main_clock2_list_pane

0x4e48,	// (0x000a79e3) main_clock2_pane_t1_ParamLimits

0x4e48,	// (0x000a79e3) main_clock2_pane_t1

0x4e84,	// (0x000a7a1f) main_clock2_pane_t2_ParamLimits

0x4e84,	// (0x000a7a1f) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x000b2364) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x000b2364) main_clock2_pane_t

0x4f22,	// (0x000a7abd) popup_clock_analogue_window_cp03_ParamLimits

0x4f22,	// (0x000a7abd) popup_clock_analogue_window_cp03

0x4f47,	// (0x000a7ae2) popup_clock_digital_window_cp02_ParamLimits

0x4f47,	// (0x000a7ae2) popup_clock_digital_window_cp02

0x4fb8,	// (0x000a7b53) main_clock2_list_single_pane_ParamLimits

0x4fb8,	// (0x000a7b53) main_clock2_list_single_pane

0xa5a9,	// (0x000ad144) list_highlight_pane_cp05

0xddf4,	// (0x000b098f) main_clock2_list_single_pane_t1

0x1508,	// (0x000a40a3) popup_toolbar_window_cp04_ParamLimits

0x43c8,	// (0x000a6f63) camera2_autofocus_pane_g2_ParamLimits

0x43c8,	// (0x000a6f63) camera2_autofocus_pane_g2

0x43d4,	// (0x000a6f6f) camera2_autofocus_pane_g3_ParamLimits

0x43d4,	// (0x000a6f6f) camera2_autofocus_pane_g3

0x43e0,	// (0x000a6f7b) camera2_autofocus_pane_g4_ParamLimits

0x43e0,	// (0x000a6f7b) camera2_autofocus_pane_g4

0x43ec,	// (0x000a6f87) camera2_autofocus_pane_g5_ParamLimits

0x43ec,	// (0x000a6f87) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x000b22a8) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x000b22a8) camera2_autofocus_pane_g

0xdc7b,	// (0x000b0816) camera2_autofocus_pane_cp_g2

0xdc83,	// (0x000b081e) camera2_autofocus_pane_cp_g3

0xdc8b,	// (0x000b0826) camera2_autofocus_pane_cp_g4

0xdc93,	// (0x000b082e) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x000b230e) camera2_autofocus_pane_cp_g

0x4cb6,	// (0x000a7851) popup_dialer_spcha_window

0x94d4,	// (0x000ac06f) bg_popup_sub_pane_cp07

0xde02,	// (0x000b099d) list_spcha_pane

0xde0a,	// (0x000b09a5) list_single_spcha_pane_ParamLimits

0xde0a,	// (0x000b09a5) list_single_spcha_pane

0x94d4,	// (0x000ac06f) list_highlight_pane_cp06

0xde1b,	// (0x000b09b6) list_single_spcha_pane_t1

0xcfa7,	// (0x000afb42) popup_call2_audio_out_window_g4_ParamLimits

0xcfa7,	// (0x000afb42) popup_call2_audio_out_window_g4

0x954a,	// (0x000ac0e5) main_imed2_pane

0x9c16,	// (0x000ac7b1) popup_imed_adjust2_window

0x37a9,	// (0x000a6344) popup_imed_trans_window_ParamLimits

0x37a9,	// (0x000a6344) popup_imed_trans_window

0xd7b0,	// (0x000b034b) popup_blid_sat_info2_window_t1

0xd7be,	// (0x000b0359) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x000b223d) popup_blid_sat_info2_window_t

0x5061,	// (0x000a7bfc) aid_size_cell_colour_35

0x5081,	// (0x000a7c1c) aid_size_cell_colour_112

0x50a1,	// (0x000a7c3c) aid_size_cell_effect

0xd56a,	// (0x000b0105) bg_tb_trans_pane_cp02

0xb136,	// (0x000adcd1) heading_imed_pane

0x50c1,	// (0x000a7c5c) listscroll_imed_pane

0xde29,	// (0x000b09c4) heading_imed_pane_g1

0xde31,	// (0x000b09cc) heading_imed_pane_t1

0xde3f,	// (0x000b09da) grid_imed_colour_35_pane_ParamLimits

0xde3f,	// (0x000b09da) grid_imed_colour_35_pane

0x50cd,	// (0x000a7c68) grid_imed_effect_pane

0xde56,	// (0x000b09f1) list_imed_aspect_pane

0x50e3,	// (0x000a7c7e) scroll_pane_cp027_ParamLimits

0x50e3,	// (0x000a7c7e) scroll_pane_cp027

0x50f4,	// (0x000a7c8f) cell_imed_effect_pane_ParamLimits

0x50f4,	// (0x000a7c8f) cell_imed_effect_pane

0xde5e,	// (0x000b09f9) cell_imed_colour_pane_ParamLimits

0xde5e,	// (0x000b09f9) cell_imed_colour_pane

0xdea0,	// (0x000b0a3b) cell_imed_colour_pane_g1_ParamLimits

0xdea0,	// (0x000b0a3b) cell_imed_colour_pane_g1

0xdeb1,	// (0x000b0a4c) hgihlgiht_grid_pane_cp016_ParamLimits

0xdeb1,	// (0x000b0a4c) hgihlgiht_grid_pane_cp016

0x511b,	// (0x000a7cb6) cell_imed_effect_pane_g1

0x5123,	// (0x000a7cbe) grid_highlight_pane_cp017

0xdec2,	// (0x000b0a5d) list_imed_single_pane_ParamLimits

0xdec2,	// (0x000b0a5d) list_imed_single_pane

0x94d4,	// (0x000ac06f) list_highlight_pane_cp07

0xded7,	// (0x000b0a72) list_imed_aspect_pane_comp1_t1

0xd56a,	// (0x000b0105) bg_tb_trans_pane_cp05

0xdef9,	// (0x000b0a94) popup_imed_adjust2_window_g1

0xdf20,	// (0x000b0abb) popup_imed_adjust2_window_t1

0xdf38,	// (0x000b0ad3) slider_imed_adjust_pane

0xdf4c,	// (0x000b0ae7) slider_imed_adjust_pane_g1

0xdf5c,	// (0x000b0af7) slider_imed_adjust_pane_g2

0xdf6c,	// (0x000b0b07) slider_imed_adjust_pane_g3

0xdf7d,	// (0x000b0b18) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x000b2381) slider_imed_adjust_pane_g

0x512c,	// (0x000a7cc7) aid_size_cell_clipart2

0x5138,	// (0x000a7cd3) grid_imed_clipart_pane

0xdf8e,	// (0x000b0b29) scroll_pane_cp031

0x5142,	// (0x000a7cdd) cell_imed_clipart_pane_ParamLimits

0x5142,	// (0x000a7cdd) cell_imed_clipart_pane

0x5164,	// (0x000a7cff) cell_imed_clipart_pane_g1

0x94d4,	// (0x000ac06f) grid_highlight_pane_cp014

0x4e25,	// (0x000a79c0) main_clock2_pane_g1_ParamLimits

0x4e25,	// (0x000a79c0) main_clock2_pane_g1

0x4f63,	// (0x000a7afe) aid_call2_pane_cp10

0x4f75,	// (0x000a7b10) aid_call_pane_cp10

0xbfa9,	// (0x000aeb44) popup_clock_analogue_window_cp10_g1

0xbfa9,	// (0x000aeb44) popup_clock_analogue_window_cp10_g2

0x4f87,	// (0x000a7b22) popup_clock_analogue_window_cp10_g3

0x4f87,	// (0x000a7b22) popup_clock_analogue_window_cp10_g4

0xbfa9,	// (0x000aeb44) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x000b236f) popup_clock_analogue_window_cp10_g

0x4f99,	// (0x000a7b34) popup_clock_analogue_window_cp10_t1

0x4fca,	// (0x000a7b65) clock_digital_number_pane_cp10_ParamLimits

0x4fca,	// (0x000a7b65) clock_digital_number_pane_cp10

0x4fe2,	// (0x000a7b7d) clock_digital_number_pane_cp11_ParamLimits

0x4fe2,	// (0x000a7b7d) clock_digital_number_pane_cp11

0x4ffa,	// (0x000a7b95) clock_digital_number_pane_cp12_ParamLimits

0x4ffa,	// (0x000a7b95) clock_digital_number_pane_cp12

0x5012,	// (0x000a7bad) clock_digital_number_pane_cp13_ParamLimits

0x5012,	// (0x000a7bad) clock_digital_number_pane_cp13

0x502a,	// (0x000a7bc5) clock_digital_separator_pane_cp10_ParamLimits

0x502a,	// (0x000a7bc5) clock_digital_separator_pane_cp10

0x5042,	// (0x000a7bdd) popup_clock_digital_window_cp02_t1_ParamLimits

0x5042,	// (0x000a7bdd) popup_clock_digital_window_cp02_t1

0xa317,	// (0x000aceb2) clock_digital_number_pane_cp10_g1

0xa317,	// (0x000aceb2) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x000b238a) clock_digital_number_pane_cp10_g

0xa317,	// (0x000aceb2) clock_digital_separator_pane_cp10_g1

0xa317,	// (0x000aceb2) clock_digital_separator_pane_g2_cp10

0xc134,	// (0x000aeccf) navi_pane_vded_g4

0xc13d,	// (0x000aecd8) navi_pane_vded_g5

0xc146,	// (0x000aece1) navi_pane_vded_t1

0x954a,	// (0x000ac0e5) main_vded_pane

0x516d,	// (0x000a7d08) main_vded_pane_g1

0x5177,	// (0x000a7d12) main_vded_pane_g2

0x5181,	// (0x000a7d1c) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x000b238f) main_vded_pane_g

0x518b,	// (0x000a7d26) main_vded_pane_t1

0x5199,	// (0x000a7d34) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x000b2396) main_vded_pane_t

0x51a7,	// (0x000a7d42) vded_slider_pane

0x51af,	// (0x000a7d4a) vded_video_pane

0xdf96,	// (0x000b0b31) vded_video_pane_g1

0x51b7,	// (0x000a7d52) vded_video_pane_g2

0xd972,	// (0x000b050d) vded_video_pane_g3

0x0002,

0xf800,	// (0x000b239b) vded_video_pane_g

0xdfa0,	// (0x000b0b3b) vded_slider_pane_g1

0xd6c5,	// (0x000b0260) vded_slider_pane_g2

0xdfa9,	// (0x000b0b44) vded_slider_pane_g3

0xdfb2,	// (0x000b0b4d) vded_slider_pane_g4

0xdfbb,	// (0x000b0b56) vded_slider_pane_g5

0x0004,

0xf807,	// (0x000b23a2) vded_slider_pane_g

0x4b97,	// (0x000a7732) mup3_rocker_pane_ParamLimits

0x4b97,	// (0x000a7732) mup3_rocker_pane

0x51c0,	// (0x000a7d5b) mup3_control_keys_pane_g1

0x51c8,	// (0x000a7d63) mup3_control_keys_pane_g2

0x51d0,	// (0x000a7d6b) mup3_control_keys_pane_g3

0x51d8,	// (0x000a7d73) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x000b23ad) mup3_control_keys_pane_g

0x04c3,	// (0x000a305e) popup_toolbar2_fixed_window_cp01_ParamLimits

0x04c3,	// (0x000a305e) popup_toolbar2_fixed_window_cp01

0x4bcb,	// (0x000a7766) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4bcb,	// (0x000a7766) popup_toolbar2_fixed_window_cp02

0xc8e6,	// (0x000af481) popup_call2_audio_second_window_t4_ParamLimits

0xc8e6,	// (0x000af481) popup_call2_audio_second_window_t4

0xce14,	// (0x000af9af) popup_call2_audio_first_window_t6_ParamLimits

0xce14,	// (0x000af9af) popup_call2_audio_first_window_t6

0xd0aa,	// (0x000afc45) popup_call2_audio_out_window_t6_ParamLimits

0xd0aa,	// (0x000afc45) popup_call2_audio_out_window_t6

0x954a,	// (0x000ac0e5) main_vitu_pane

0x51e8,	// (0x000a7d83) aid_size_cell_itu_ParamLimits

0x51e8,	// (0x000a7d83) aid_size_cell_itu

0xa7fa,	// (0x000ad395) bg_popup_window_pane_cp08_ParamLimits

0xa7fa,	// (0x000ad395) bg_popup_window_pane_cp08

0x51fe,	// (0x000a7d99) field_vitu_entry_pane_ParamLimits

0x51fe,	// (0x000a7d99) field_vitu_entry_pane

0x5215,	// (0x000a7db0) grid_vitu_function_pane_ParamLimits

0x5215,	// (0x000a7db0) grid_vitu_function_pane

0x5230,	// (0x000a7dcb) grid_vitu_itu_pane_ParamLimits

0x5230,	// (0x000a7dcb) grid_vitu_itu_pane

0x524e,	// (0x000a7de9) cell_vitu_itu_pane_ParamLimits

0x524e,	// (0x000a7de9) cell_vitu_itu_pane

0x5270,	// (0x000a7e0b) cell_vitu_function_pane_ParamLimits

0x5270,	// (0x000a7e0b) cell_vitu_function_pane

0xa7fa,	// (0x000ad395) bg_popup_sub_pane_cp08_ParamLimits

0xa7fa,	// (0x000ad395) bg_popup_sub_pane_cp08

0x5289,	// (0x000a7e24) field_vitu_entry_pane_t1_ParamLimits

0x5289,	// (0x000a7e24) field_vitu_entry_pane_t1

0xdfdc,	// (0x000b0b77) field_vitu_entry_pane_t2_ParamLimits

0xdfdc,	// (0x000b0b77) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x000b23bb) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x000b23bb) field_vitu_entry_pane_t

0xdff9,	// (0x000b0b94) bg_button_pane_cp05_ParamLimits

0xdff9,	// (0x000b0b94) bg_button_pane_cp05

0x52a7,	// (0x000a7e42) cell_vitu_itu_pane_g1

0x52bf,	// (0x000a7e5a) cell_vitu_itu_pane_t1_ParamLimits

0x52bf,	// (0x000a7e5a) cell_vitu_itu_pane_t1

0x52d1,	// (0x000a7e6c) cell_vitu_itu_pane_t2_ParamLimits

0x52d1,	// (0x000a7e6c) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x000b23c0) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x000b23c0) cell_vitu_itu_pane_t

0xe007,	// (0x000b0ba2) bg_button_pane_cp07

0x5306,	// (0x000a7ea1) cell_vitu_function_pane_g1

0x9a7b,	// (0x000ac616) main_calc_pane_g1

0x02da,	// (0x000a2e75) aid_visual_content_pane

0x954a,	// (0x000ac0e5) main_vradio_pane

0x530f,	// (0x000a7eaa) main_vradio_pane_g1_ParamLimits

0x530f,	// (0x000a7eaa) main_vradio_pane_g1

0xe011,	// (0x000b0bac) main_vradio_pane_g2_ParamLimits

0xe011,	// (0x000b0bac) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x000b23c7) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x000b23c7) main_vradio_pane_g

0x5328,	// (0x000a7ec3) main_vradio_pane_t1_ParamLimits

0x5328,	// (0x000a7ec3) main_vradio_pane_t1

0x533d,	// (0x000a7ed8) main_vradio_pane_t2_ParamLimits

0x533d,	// (0x000a7ed8) main_vradio_pane_t2

0xe01e,	// (0x000b0bb9) main_vradio_pane_t3_ParamLimits

0xe01e,	// (0x000b0bb9) main_vradio_pane_t3

0x0002,

0xf831,	// (0x000b23cc) main_vradio_pane_t_ParamLimits

0xf831,	// (0x000b23cc) main_vradio_pane_t

0x5352,	// (0x000a7eed) vradio_rocker_control_pane_ParamLimits

0x5352,	// (0x000a7eed) vradio_rocker_control_pane

0x5364,	// (0x000a7eff) vradio_station_info_pane_ParamLimits

0x5364,	// (0x000a7eff) vradio_station_info_pane

0xe032,	// (0x000b0bcd) vradio_frequency_info_pane_ParamLimits

0xe032,	// (0x000b0bcd) vradio_frequency_info_pane

0xd972,	// (0x000b050d) vradio_station_info_pane_g1

0xe041,	// (0x000b0bdc) vradio_station_info_pane_t1_ParamLimits

0xe041,	// (0x000b0bdc) vradio_station_info_pane_t1

0xe063,	// (0x000b0bfe) vradio_station_info_pane_t2_ParamLimits

0xe063,	// (0x000b0bfe) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x000b23d3) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x000b23d3) vradio_station_info_pane_t

0xe075,	// (0x000b0c10) vradio_tuning_pane

0xe07d,	// (0x000b0c18) vradio_rocker_control_pane_g1

0xe085,	// (0x000b0c20) vradio_rocker_control_pane_g2

0xe08d,	// (0x000b0c28) vradio_rocker_control_pane_g3

0xe095,	// (0x000b0c30) vradio_rocker_control_pane_g4

0xe09d,	// (0x000b0c38) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x000b23d8) vradio_rocker_control_pane_g

0x5376,	// (0x000a7f11) vradio_frequency_info_pane_g1

0xe0a5,	// (0x000b0c40) vradio_frequency_info_pane_t1_ParamLimits

0xe0a5,	// (0x000b0c40) vradio_frequency_info_pane_t1

0x5380,	// (0x000a7f1b) vradio_tuning_pane_g1

0x538b,	// (0x000a7f26) vradio_tuning_pane_t1

0x94fa,	// (0x000ac095) area_side_right_pane_ParamLimits

0x94fa,	// (0x000ac095) area_side_right_pane

0xd525,	// (0x000b00c0) status_small_pane_g1

0xd52d,	// (0x000b00c8) status_small_pane_g2

0xd536,	// (0x000b00d1) status_small_pane_g3

0xd53f,	// (0x000b00da) status_small_pane_g4

0x0003,

0xf5f8,	// (0x000b2193) status_small_pane_g

0xd548,	// (0x000b00e3) status_small_pane_t1

0x954a,	// (0x000ac0e5) main_video3_pane

0xe0b9,	// (0x000b0c54) cams_zoom_vslider_pane

0xe0c1,	// (0x000b0c5c) image3_wide_pane_ParamLimits

0xe0c1,	// (0x000b0c5c) image3_wide_pane

0xe0db,	// (0x000b0c76) image3_wide_small_pane

0xe0e7,	// (0x000b0c82) main_video3_pane_g1_ParamLimits

0xe0e7,	// (0x000b0c82) main_video3_pane_g1

0xe103,	// (0x000b0c9e) main_video3_pane_g2_ParamLimits

0xe103,	// (0x000b0c9e) main_video3_pane_g2

0x0001,

0xf848,	// (0x000b23e3) main_video3_pane_g_ParamLimits

0xf848,	// (0x000b23e3) main_video3_pane_g

0xe11f,	// (0x000b0cba) main_video3_pane_t1_ParamLimits

0xe11f,	// (0x000b0cba) main_video3_pane_t1

0xe14a,	// (0x000b0ce5) main_video3_pane_t2_ParamLimits

0xe14a,	// (0x000b0ce5) main_video3_pane_t2

0xe175,	// (0x000b0d10) main_video3_pane_t3_ParamLimits

0xe175,	// (0x000b0d10) main_video3_pane_t3

0x0002,

0xf84d,	// (0x000b23e8) main_video3_pane_t_ParamLimits

0xf84d,	// (0x000b23e8) main_video3_pane_t

0xe1a2,	// (0x000b0d3d) cams_zoom_vslider_pane_g1

0xe1ab,	// (0x000b0d46) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x000b23ef) cams_zoom_vslider_pane_g

0xe1b3,	// (0x000b0d4e) small_slider_vertical_pane

0xd972,	// (0x000b050d) small_slider_vertical_pane_g1

0xd972,	// (0x000b050d) small_slider_vertical_pane_g2

0xe1bb,	// (0x000b0d56) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x000b23f4) small_slider_vertical_pane_g

0x954a,	// (0x000ac0e5) main_hwr_training_pane

0xe1c4,	// (0x000b0d5f) hwr_training_instruct_pane_ParamLimits

0xe1c4,	// (0x000b0d5f) hwr_training_instruct_pane

0x539a,	// (0x000a7f35) hwr_training_navi_pane_ParamLimits

0x539a,	// (0x000a7f35) hwr_training_navi_pane

0x53b9,	// (0x000a7f54) hwr_training_write_pane_ParamLimits

0x53b9,	// (0x000a7f54) hwr_training_write_pane

0x94d4,	// (0x000ac06f) bg_frame_shadow_pane

0xe1fb,	// (0x000b0d96) hwr_training_write_pane_g1

0xe203,	// (0x000b0d9e) hwr_training_write_pane_g2

0xe20b,	// (0x000b0da6) hwr_training_write_pane_g3

0xe213,	// (0x000b0dae) hwr_training_write_pane_g4

0xe21b,	// (0x000b0db6) hwr_training_write_pane_g5

0xe223,	// (0x000b0dbe) hwr_training_write_pane_g6

0xe22b,	// (0x000b0dc6) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x000b23fb) hwr_training_write_pane_g

0x9d07,	// (0x000ac8a2) hwr_training_navi_pane_g1_ParamLimits

0x9d07,	// (0x000ac8a2) hwr_training_navi_pane_g1

0x9d19,	// (0x000ac8b4) hwr_training_navi_pane_g2_ParamLimits

0x9d19,	// (0x000ac8b4) hwr_training_navi_pane_g2

0x9d2b,	// (0x000ac8c6) hwr_training_navi_pane_g3_ParamLimits

0x9d2b,	// (0x000ac8c6) hwr_training_navi_pane_g3

0x9d3b,	// (0x000ac8d6) hwr_training_navi_pane_g4_ParamLimits

0x9d3b,	// (0x000ac8d6) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x000b240a) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x000b240a) hwr_training_navi_pane_g

0x9d48,	// (0x000ac8e3) hwr_training_navi_pane_t1

0x5401,	// (0x000a7f9c) list_single_hwr_training_instruct_pane_ParamLimits

0x5401,	// (0x000a7f9c) list_single_hwr_training_instruct_pane

0xe233,	// (0x000b0dce) list_single_hwr_training_instruct_pane_t1

0xd8b2,	// (0x000b044d) bg_frame_shadow_pane_g1

0xe242,	// (0x000b0ddd) bg_frame_shadow_pane_g2

0xe24a,	// (0x000b0de5) bg_frame_shadow_pane_g3

0xe252,	// (0x000b0ded) bg_frame_shadow_pane_g4

0xe25a,	// (0x000b0df5) bg_frame_shadow_pane_g5

0xe262,	// (0x000b0dfd) bg_frame_shadow_pane_g6

0xe26a,	// (0x000b0e05) bg_frame_shadow_pane_g7

0xa49d,	// (0x000ad038) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x000b2415) bg_frame_shadow_pane_g

0x954a,	// (0x000ac0e5) main_video_tele_dialer_pane

0x5416,	// (0x000a7fb1) aid_size_cell_video_keypad_ParamLimits

0x5416,	// (0x000a7fb1) aid_size_cell_video_keypad

0x5430,	// (0x000a7fcb) grid_video_dialer_keypad_pane_ParamLimits

0x5430,	// (0x000a7fcb) grid_video_dialer_keypad_pane

0x547c,	// (0x000a8017) video_down_pane_cp_ParamLimits

0x547c,	// (0x000a8017) video_down_pane_cp

0x54ae,	// (0x000a8049) cell_video_dialer_keypad_pane_ParamLimits

0x54ae,	// (0x000a8049) cell_video_dialer_keypad_pane

0xe272,	// (0x000b0e0d) bg_button_pane_cp08_ParamLimits

0xe272,	// (0x000b0e0d) bg_button_pane_cp08

0x54d0,	// (0x000a806b) cell_video_dialer_keypad_pane_g1_ParamLimits

0x54d0,	// (0x000a806b) cell_video_dialer_keypad_pane_g1

0x4b81,	// (0x000a771c) mup3_rocker2_pane_ParamLimits

0x4b81,	// (0x000a771c) mup3_rocker2_pane

0xd972,	// (0x000b050d) mup3_rocker2_pane_g1

0x368a,	// (0x000a6225) main_dialer2_pane

0x954a,	// (0x000ac0e5) main_mp4_pane

0x9d5e,	// (0x000ac8f9) main_mp4_pane_g1_ParamLimits

0x9d5e,	// (0x000ac8f9) main_mp4_pane_g1

0x9d5e,	// (0x000ac8f9) main_mp4_pane_g2_ParamLimits

0x9d5e,	// (0x000ac8f9) main_mp4_pane_g2

0x5507,	// (0x000a80a2) main_mp4_pane_g3_ParamLimits

0x5507,	// (0x000a80a2) main_mp4_pane_g3

0x9d6c,	// (0x000ac907) main_mp4_pane_g4_ParamLimits

0x9d6c,	// (0x000ac907) main_mp4_pane_g4

0x9d94,	// (0x000ac92f) main_mp4_pane_g5_ParamLimits

0x9d94,	// (0x000ac92f) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x000b2435) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x000b2435) main_mp4_pane_g

0x9de4,	// (0x000ac97f) main_mp4_pane_t1_ParamLimits

0x9de4,	// (0x000ac97f) main_mp4_pane_t1

0x9e40,	// (0x000ac9db) main_mp4_pane_t2_ParamLimits

0x9e40,	// (0x000ac9db) main_mp4_pane_t2

0xe27e,	// (0x000b0e19) main_mp4_pane_t3_ParamLimits

0xe27e,	// (0x000b0e19) main_mp4_pane_t3

0x9e92,	// (0x000aca2d) main_mp4_pane_t4_ParamLimits

0x9e92,	// (0x000aca2d) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x000b2442) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x000b2442) main_mp4_pane_t

0x9ed6,	// (0x000aca71) mp4_progress_pane_ParamLimits

0x9ed6,	// (0x000aca71) mp4_progress_pane

0x9f20,	// (0x000acabb) mp4_rocker_pane_ParamLimits

0x9f20,	// (0x000acabb) mp4_rocker_pane

0xe2a6,	// (0x000b0e41) mp4_progress_pane_t1

0xe2bf,	// (0x000b0e5a) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x000b244b) mp4_progress_pane_t

0xe2e0,	// (0x000b0e7b) mup_progress_pane_cp04

0xe2ec,	// (0x000b0e87) mp4_rocker_pane_g1

0x5543,	// (0x000a80de) aid_cell_size_keypad2_ParamLimits

0x5543,	// (0x000a80de) aid_cell_size_keypad2

0x5559,	// (0x000a80f4) dialer2_ne_pane_ParamLimits

0x5559,	// (0x000a80f4) dialer2_ne_pane

0x5573,	// (0x000a810e) grid_dialer2_keypad_pane_ParamLimits

0x5573,	// (0x000a810e) grid_dialer2_keypad_pane

0xd757,	// (0x000b02f2) bg_popup_call_pane_cp07_ParamLimits

0xd757,	// (0x000b02f2) bg_popup_call_pane_cp07

0x558f,	// (0x000a812a) dialer2_ne_pane_t1_ParamLimits

0x558f,	// (0x000a812a) dialer2_ne_pane_t1

0x55ca,	// (0x000a8165) cell_dialer2_keypad_pane_ParamLimits

0x55ca,	// (0x000a8165) cell_dialer2_keypad_pane

0xe308,	// (0x000b0ea3) bg_button_pane_pane_cp04_ParamLimits

0xe308,	// (0x000b0ea3) bg_button_pane_pane_cp04

0x55ec,	// (0x000a8187) cell_dialer2_keypad_pane_g1_ParamLimits

0x55ec,	// (0x000a8187) cell_dialer2_keypad_pane_g1

0x13dc,	// (0x000a3f77) aid_placing_vt_set_content_ParamLimits

0x13dc,	// (0x000a3f77) aid_placing_vt_set_content

0x1404,	// (0x000a3f9f) aid_placing_vt_set_title_ParamLimits

0x1404,	// (0x000a3f9f) aid_placing_vt_set_title

0x954a,	// (0x000ac0e5) main_image3_pane

0x56b2,	// (0x000a824d) area_side_right_pane_cp01_ParamLimits

0x56b2,	// (0x000a824d) area_side_right_pane_cp01

0x9d5e,	// (0x000ac8f9) main_image3_pane_g1_ParamLimits

0x9d5e,	// (0x000ac8f9) main_image3_pane_g1

0x56c9,	// (0x000a8264) main_image3_pane_g2_ParamLimits

0x56c9,	// (0x000a8264) main_image3_pane_g2

0x56f1,	// (0x000a828c) main_image3_pane_g3_ParamLimits

0x56f1,	// (0x000a828c) main_image3_pane_g3

0x571b,	// (0x000a82b6) main_image3_pane_g4_ParamLimits

0x571b,	// (0x000a82b6) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x000b245a) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x000b245a) main_image3_pane_g

0x5745,	// (0x000a82e0) main_image3_pane_t1_ParamLimits

0x5745,	// (0x000a82e0) main_image3_pane_t1

0x579d,	// (0x000a8338) main_image3_pane_t2_ParamLimits

0x579d,	// (0x000a8338) main_image3_pane_t2

0x57ef,	// (0x000a838a) main_image3_pane_t3_ParamLimits

0x57ef,	// (0x000a838a) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x000b2463) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x000b2463) main_image3_pane_t

0xa7fa,	// (0x000ad395) grid_sctrl_middle_pane_cp01_ParamLimits

0xa7fa,	// (0x000ad395) grid_sctrl_middle_pane_cp01

0x5877,	// (0x000a8412) cell_sctrl_middle_pane_cp01_ParamLimits

0x5877,	// (0x000a8412) cell_sctrl_middle_pane_cp01

0x5894,	// (0x000a842f) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5894,	// (0x000a842f) cell_sctrl_middle_pane_cp01_g1

0x954a,	// (0x000ac0e5) main_call4_pane

0x58aa,	// (0x000a8445) aid_size_button_call4_ParamLimits

0x58aa,	// (0x000a8445) aid_size_button_call4

0x58db,	// (0x000a8476) call4_windows_pane_ParamLimits

0x58db,	// (0x000a8476) call4_windows_pane

0x58fb,	// (0x000a8496) grid_call4_button_pane_ParamLimits

0x58fb,	// (0x000a8496) grid_call4_button_pane

0xe314,	// (0x000b0eaf) call4_windows_conf_pane

0xe32b,	// (0x000b0ec6) popup_call4_audio_first_window_ParamLimits

0xe32b,	// (0x000b0ec6) popup_call4_audio_first_window

0xe373,	// (0x000b0f0e) popup_call4_audio_second_window_ParamLimits

0xe373,	// (0x000b0f0e) popup_call4_audio_second_window

0xe38c,	// (0x000b0f27) popup_call4_audio_wait_window_ParamLimits

0xe38c,	// (0x000b0f27) popup_call4_audio_wait_window

0x5928,	// (0x000a84c3) cell_call4_button_pane_ParamLimits

0x5928,	// (0x000a84c3) cell_call4_button_pane

0x5951,	// (0x000a84ec) bg_button_pane_cp09_ParamLimits

0x5951,	// (0x000a84ec) bg_button_pane_cp09

0x595d,	// (0x000a84f8) cell_call4_button_pane_g1_ParamLimits

0x595d,	// (0x000a84f8) cell_call4_button_pane_g1

0x5983,	// (0x000a851e) cell_call4_button_pane_t1_ParamLimits

0x5983,	// (0x000a851e) cell_call4_button_pane_t1

0xe3a2,	// (0x000b0f3d) popup_call4_audio_conf_window_ParamLimits

0xe3a2,	// (0x000b0f3d) popup_call4_audio_conf_window

0x4be1,	// (0x000a777c) mup3_progress_pane_t1_ParamLimits

0x4c00,	// (0x000a779b) mup3_progress_pane_t2_ParamLimits

0xdcb1,	// (0x000b084c) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x000b2337) mup3_progress_pane_t_ParamLimits

0xdcce,	// (0x000b0869) mup_progress_pane_cp03_ParamLimits

0x51e0,	// (0x000a7d7b) mup3_control_keys_pane_g4_copy1

0x9f04,	// (0x000aca9f) mp4_rocker2_pane_ParamLimits

0x9f04,	// (0x000aca9f) mp4_rocker2_pane

0xe3b6,	// (0x000b0f51) mp4_rocker2_pane_g1

0xe3be,	// (0x000b0f59) mp4_rocker2_pane_g2

0x9fa4,	// (0x000acb3f) mp4_rocker2_pane_g3

0x9fac,	// (0x000acb47) mp4_rocker2_pane_g4

0x9fb4,	// (0x000acb4f) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x000b246c) mp4_rocker2_pane_g

0x954a,	// (0x000ac0e5) main_camera4_pane

0x954a,	// (0x000ac0e5) main_video4_pane

0x544a,	// (0x000a7fe5) main_video_tele_dialer_pane_t1_ParamLimits

0x544a,	// (0x000a7fe5) main_video_tele_dialer_pane_t1

0x5463,	// (0x000a7ffe) main_video_tele_dialer_pane_t2_ParamLimits

0x5463,	// (0x000a7ffe) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x000b2426) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x000b2426) main_video_tele_dialer_pane_t

0x59c1,	// (0x000a855c) cam4_autofocus_pane_ParamLimits

0x59c1,	// (0x000a855c) cam4_autofocus_pane

0x59d7,	// (0x000a8572) cam4_image_uncrop_pane_ParamLimits

0x59d7,	// (0x000a8572) cam4_image_uncrop_pane

0x59f1,	// (0x000a858c) cam4_indicators_pane_ParamLimits

0x59f1,	// (0x000a858c) cam4_indicators_pane

0x5a1c,	// (0x000a85b7) main_camera4_pane_g1_ParamLimits

0x5a1c,	// (0x000a85b7) main_camera4_pane_g1

0x5a2e,	// (0x000a85c9) main_camera4_pane_g2_ParamLimits

0x5a2e,	// (0x000a85c9) main_camera4_pane_g2

0x5a41,	// (0x000a85dc) main_camera4_pane_g3_ParamLimits

0x5a41,	// (0x000a85dc) main_camera4_pane_g3

0x5a54,	// (0x000a85ef) main_camera4_pane_g4_ParamLimits

0x5a54,	// (0x000a85ef) main_camera4_pane_g4

0x5a67,	// (0x000a8602) main_camera4_pane_g5_ParamLimits

0x5a67,	// (0x000a8602) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x000b2477) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x000b2477) main_camera4_pane_g

0x5a8b,	// (0x000a8626) main_camera4_pane_t1_ParamLimits

0x5a8b,	// (0x000a8626) main_camera4_pane_t1

0x9fd8,	// (0x000acb73) bg_tb_trans_pane_cp06

0x9fee,	// (0x000acb89) cam4_indicators_pane_g1

0x9fff,	// (0x000acb9a) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x000b2492) cam4_indicators_pane_g

0xa01d,	// (0x000acbb8) cam4_indicators_pane_t1

0x5aef,	// (0x000a868a) main_video4_pane_g1_ParamLimits

0x5aef,	// (0x000a868a) main_video4_pane_g1

0x5afe,	// (0x000a8699) main_video4_pane_g2_ParamLimits

0x5afe,	// (0x000a8699) main_video4_pane_g2

0x5b0d,	// (0x000a86a8) main_video4_pane_g3_ParamLimits

0x5b0d,	// (0x000a86a8) main_video4_pane_g3

0x5b1c,	// (0x000a86b7) main_video4_pane_g4_ParamLimits

0x5b1c,	// (0x000a86b7) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x000b2499) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x000b2499) main_video4_pane_g

0x5b3a,	// (0x000a86d5) vid4_indicators_pane_ParamLimits

0x5b3a,	// (0x000a86d5) vid4_indicators_pane

0x5b68,	// (0x000a8703) video4_image_uncrop_cif_pane_ParamLimits

0x5b68,	// (0x000a8703) video4_image_uncrop_cif_pane

0x5b82,	// (0x000a871d) video4_image_uncrop_nhd_pane_ParamLimits

0x5b82,	// (0x000a871d) video4_image_uncrop_nhd_pane

0x59d7,	// (0x000a8572) video4_image_uncrop_vga_pane_ParamLimits

0x59d7,	// (0x000a8572) video4_image_uncrop_vga_pane

0x953c,	// (0x000ac0d7) bg_tb_trans_pane_cp07

0xa049,	// (0x000acbe4) vid4_indicators_pane_g1

0xa05d,	// (0x000acbf8) vid4_indicators_pane_g2

0xa071,	// (0x000acc0c) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x000b24a4) vid4_indicators_pane_g

0xa0a0,	// (0x000acc3b) vid4_indicators_pane_t1

0x5b96,	// (0x000a8731) cam4_autofocus_pane_g1

0x5b9e,	// (0x000a8739) cam4_autofocus_pane_g2

0x5ba6,	// (0x000a8741) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x000b24af) cam4_autofocus_pane_g

0x5bae,	// (0x000a8749) cam4_autofocus_pane_g3_copy1

0x5492,	// (0x000a802d) video_down_pane_cp_t1

0x54a0,	// (0x000a803b) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x000b242b) video_down_pane_cp_t

0x953c,	// (0x000ac0d7) popup_vitu2_window_ParamLimits

0x953c,	// (0x000ac0d7) popup_vitu2_window

0x5bb6,	// (0x000a8751) aid_size_cell2_itu2_ParamLimits

0x5bb6,	// (0x000a8751) aid_size_cell2_itu2

0x5bdc,	// (0x000a8777) aid_size_cell_itu2_ParamLimits

0x5bdc,	// (0x000a8777) aid_size_cell_itu2

0x5c38,	// (0x000a87d3) bg_popup_window_pane_cp09_ParamLimits

0x5c38,	// (0x000a87d3) bg_popup_window_pane_cp09

0x5c46,	// (0x000a87e1) field_vitu2_entry_pane_ParamLimits

0x5c46,	// (0x000a87e1) field_vitu2_entry_pane

0x5c6c,	// (0x000a8807) grid_vitu2_function_pane_ParamLimits

0x5c6c,	// (0x000a8807) grid_vitu2_function_pane

0x5cbd,	// (0x000a8858) grid_vitu2_itu_pane_ParamLimits

0x5cbd,	// (0x000a8858) grid_vitu2_itu_pane

0x5d55,	// (0x000a88f0) cell_vitu2_itu_pane_ParamLimits

0x5d55,	// (0x000a88f0) cell_vitu2_itu_pane

0x5d81,	// (0x000a891c) cell_vitu2_function_pane_ParamLimits

0x5d81,	// (0x000a891c) cell_vitu2_function_pane

0xe3c6,	// (0x000b0f61) bg_popup_call_pane_cp08_ParamLimits

0xe3c6,	// (0x000b0f61) bg_popup_call_pane_cp08

0xe3dd,	// (0x000b0f78) field_vitu2_entry_pane_g1

0xe3e9,	// (0x000b0f84) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x000b24b6) field_vitu2_entry_pane_g

0x5dc0,	// (0x000a895b) field_vitu2_entry_pane_t1_ParamLimits

0x5dc0,	// (0x000a895b) field_vitu2_entry_pane_t1

0xe403,	// (0x000b0f9e) field_vitu2_entry_pane_t2_ParamLimits

0xe403,	// (0x000b0f9e) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x000b24bd) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x000b24bd) field_vitu2_entry_pane_t

0x5dee,	// (0x000a8989) bg_button_pane_cp010_ParamLimits

0x5dee,	// (0x000a8989) bg_button_pane_cp010

0xa0b7,	// (0x000acc52) cell_vitu2_itu_pane_g1

0x5e0a,	// (0x000a89a5) cell_vitu2_itu_pane_t1_ParamLimits

0x5e0a,	// (0x000a89a5) cell_vitu2_itu_pane_t1

0x01b2,	// (0x000a2d4d) cell_vitu2_itu_pane_t2_ParamLimits

0x01b2,	// (0x000a2d4d) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x000b24c7) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x000b24c7) cell_vitu2_itu_pane_t

0x953c,	// (0x000ac0d7) bg_button_pane_cp011

0x5e68,	// (0x000a8a03) cell_vitu2_function_pane_g1

0x954a,	// (0x000ac0e5) main_myfav_hc_pane

0x583f,	// (0x000a83da) popup_image3_note_pane_ParamLimits

0x583f,	// (0x000a83da) popup_image3_note_pane

0x585b,	// (0x000a83f6) popup_image3_tool_bar_pane_ParamLimits

0x585b,	// (0x000a83f6) popup_image3_tool_bar_pane

0x0240,	// (0x000a2ddb) cell_vitu2_itu_pane_t3_ParamLimits

0x0240,	// (0x000a2ddb) cell_vitu2_itu_pane_t3

0x94d4,	// (0x000ac06f) bg_popup_trans_pane

0xe428,	// (0x000b0fc3) grid_image3_tool_bar_pane

0xe432,	// (0x000b0fcd) bg_popup_trans_pane_g1

0xaeee,	// (0x000ada89) bg_popup_trans_pane_g2

0xe43a,	// (0x000b0fd5) bg_popup_trans_pane_g3

0xe442,	// (0x000b0fdd) bg_popup_trans_pane_g4

0xe44a,	// (0x000b0fe5) bg_popup_trans_pane_g5

0xe452,	// (0x000b0fed) bg_popup_trans_pane_g6

0xe45a,	// (0x000b0ff5) bg_popup_trans_pane_g7

0xe462,	// (0x000b0ffd) bg_popup_trans_pane_g8

0xa7e2,	// (0x000ad37d) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x000b24ce) bg_popup_trans_pane_g

0xe46a,	// (0x000b1005) cell_image3_tool_bar_pane_ParamLimits

0xe46a,	// (0x000b1005) cell_image3_tool_bar_pane

0xd972,	// (0x000b050d) cell_image3_tool_bar_pane_g1

0x94d4,	// (0x000ac06f) bg_popup_trans_pane_cp1

0xe47e,	// (0x000b1019) popup_image3_note_pane_t1

0xe48c,	// (0x000b1027) popup_image3_note_pane_t2

0xe49a,	// (0x000b1035) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000b24e1) popup_image3_note_pane_t

0xe4a8,	// (0x000b1043) popup_image3_note_pane_t3_copy1

0x5e7c,	// (0x000a8a17) bg_myfav_hc_instruction_pane_ParamLimits

0x5e7c,	// (0x000a8a17) bg_myfav_hc_instruction_pane

0x5e90,	// (0x000a8a2b) cell_myfav_contact_pane_ParamLimits

0x5e90,	// (0x000a8a2b) cell_myfav_contact_pane

0x5eae,	// (0x000a8a49) cell_myfav_contact_pane_cp1_ParamLimits

0x5eae,	// (0x000a8a49) cell_myfav_contact_pane_cp1

0x5ec6,	// (0x000a8a61) cell_myfav_contact_pane_cp2_ParamLimits

0x5ec6,	// (0x000a8a61) cell_myfav_contact_pane_cp2

0x5ede,	// (0x000a8a79) cell_myfav_contact_pane_cp3_ParamLimits

0x5ede,	// (0x000a8a79) cell_myfav_contact_pane_cp3

0x5ef5,	// (0x000a8a90) cell_myfav_contact_pane_cp4_ParamLimits

0x5ef5,	// (0x000a8a90) cell_myfav_contact_pane_cp4

0x5f0d,	// (0x000a8aa8) cell_myfav_contact_pane_cp5_ParamLimits

0x5f0d,	// (0x000a8aa8) cell_myfav_contact_pane_cp5

0x5f21,	// (0x000a8abc) cell_myfav_contact_pane_cp6_ParamLimits

0x5f21,	// (0x000a8abc) cell_myfav_contact_pane_cp6

0x5f37,	// (0x000a8ad2) cell_myfav_contact_pane_cp7_ParamLimits

0x5f37,	// (0x000a8ad2) cell_myfav_contact_pane_cp7

0xe4b6,	// (0x000b1051) listscroll_gen_pane_cp05

0x5f51,	// (0x000a8aec) main_myfav_hc_pane_g1_ParamLimits

0x5f51,	// (0x000a8aec) main_myfav_hc_pane_g1

0x5f6b,	// (0x000a8b06) main_myfav_hc_pane_g2_ParamLimits

0x5f6b,	// (0x000a8b06) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x000b24e8) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x000b24e8) main_myfav_hc_pane_g

0x5f9d,	// (0x000a8b38) main_myfav_hc_pane_t1_ParamLimits

0x5f9d,	// (0x000a8b38) main_myfav_hc_pane_t1

0xe4bf,	// (0x000b105a) main_myfav_hc_pane_t2_ParamLimits

0xe4bf,	// (0x000b105a) main_myfav_hc_pane_t2

0xe4d1,	// (0x000b106c) main_myfav_hc_pane_t3_ParamLimits

0xe4d1,	// (0x000b106c) main_myfav_hc_pane_t3

0x5fb4,	// (0x000a8b4f) main_myfav_hc_pane_t4_ParamLimits

0x5fb4,	// (0x000a8b4f) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000b24ef) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000b24ef) main_myfav_hc_pane_t

0xd972,	// (0x000b050d) bg_myfav_hc_instruction_pane_g1

0xe4e3,	// (0x000b107e) cell_myfav_contact_pane_g1_ParamLimits

0xe4e3,	// (0x000b107e) cell_myfav_contact_pane_g1

0xe4e3,	// (0x000b107e) cell_myfav_contact_pane_g2_ParamLimits

0xe4e3,	// (0x000b107e) cell_myfav_contact_pane_g2

0xe4ef,	// (0x000b108a) cell_myfav_contact_pane_g3_ParamLimits

0xe4ef,	// (0x000b108a) cell_myfav_contact_pane_g3

0xdc9b,	// (0x000b0836) cell_myfav_contact_pane_g4_ParamLimits

0xdc9b,	// (0x000b0836) cell_myfav_contact_pane_g4

0xe4fc,	// (0x000b1097) cell_myfav_contact_pane_g5_ParamLimits

0xe4fc,	// (0x000b1097) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000b24fa) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000b24fa) cell_myfav_contact_pane_g

0x5f85,	// (0x000a8b20) main_myfav_hc_pane_g3_ParamLimits

0x5f85,	// (0x000a8b20) main_myfav_hc_pane_g3

0x0425,	// (0x000a2fc0) popup_adpt_find_window

0x5fdc,	// (0x000a8b77) afind_page_pane_ParamLimits

0x5fdc,	// (0x000a8b77) afind_page_pane

0x5ff1,	// (0x000a8b8c) aid_size_cell_afind_ParamLimits

0x5ff1,	// (0x000a8b8c) aid_size_cell_afind

0x600f,	// (0x000a8baa) bg_popup_sub_pane_cp09_ParamLimits

0x600f,	// (0x000a8baa) bg_popup_sub_pane_cp09

0x601c,	// (0x000a8bb7) find_pane_cp01_ParamLimits

0x601c,	// (0x000a8bb7) find_pane_cp01

0xe508,	// (0x000b10a3) grid_afind_control_pane_ParamLimits

0xe508,	// (0x000b10a3) grid_afind_control_pane

0x6029,	// (0x000a8bc4) grid_afind_pane_ParamLimits

0x6029,	// (0x000a8bc4) grid_afind_pane

0x604b,	// (0x000a8be6) cell_afind_pane_ParamLimits

0x604b,	// (0x000a8be6) cell_afind_pane

0xd972,	// (0x000b050d) afind_page_pane_g1

0x60b2,	// (0x000a8c4d) afind_page_pane_g2

0x60bb,	// (0x000a8c56) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000b2505) afind_page_pane_g

0x60c4,	// (0x000a8c5f) afind_page_pane_t1

0xe51c,	// (0x000b10b7) cell_afind_grid_control_pane_ParamLimits

0xe51c,	// (0x000b10b7) cell_afind_grid_control_pane

0xe308,	// (0x000b0ea3) bg_button_pane_cp69_ParamLimits

0xe308,	// (0x000b0ea3) bg_button_pane_cp69

0x60e4,	// (0x000a8c7f) cell_afind_pane_g1_ParamLimits

0x60e4,	// (0x000a8c7f) cell_afind_pane_g1

0x60f1,	// (0x000a8c8c) cell_afind_pane_t1_ParamLimits

0x60f1,	// (0x000a8c8c) cell_afind_pane_t1

0xa5fb,	// (0x000ad196) bg_button_pane_cp72

0xe52b,	// (0x000b10c6) cell_afind_grid_control_pane_g1

0x3138,	// (0x000a5cd3) aid_image_placing_area_ParamLimits

0x3138,	// (0x000a5cd3) aid_image_placing_area

0xdfc4,	// (0x000b0b5f) field_vitu_entry_pane_g1_ParamLimits

0xdfc4,	// (0x000b0b5f) field_vitu_entry_pane_g1

0xdfd0,	// (0x000b0b6b) field_vitu_entry_pane_g2_ParamLimits

0xdfd0,	// (0x000b0b6b) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x000b23b6) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x000b23b6) field_vitu_entry_pane_g

0x52a7,	// (0x000a7e42) cell_vitu_itu_pane_g1_ParamLimits

0x52e9,	// (0x000a7e84) cell_vitu_itu_pane_t3_ParamLimits

0x52e9,	// (0x000a7e84) cell_vitu_itu_pane_t3

0xe2a6,	// (0x000b0e41) mp4_progress_pane_t1_ParamLimits

0xe2bf,	// (0x000b0e5a) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x000b244b) mp4_progress_pane_t_ParamLimits

0xe2e0,	// (0x000b0e7b) mup_progress_pane_cp04_ParamLimits

0x5fc8,	// (0x000a8b63) main_myfav_hc_pane_t5_ParamLimits

0x5fc8,	// (0x000a8b63) main_myfav_hc_pane_t5

0x02ee,	// (0x000a2e89) aid_zoom_text_primary

0x0425,	// (0x000a2fc0) popup_adpt_find_window_ParamLimits

0x953c,	// (0x000ac0d7) main_cam_set_pane

0x5a08,	// (0x000a85a3) cam4_zoom_pane_ParamLimits

0x5a08,	// (0x000a85a3) cam4_zoom_pane

0x6103,	// (0x000a8c9e) main_cam_set_pane_g1_ParamLimits

0x6103,	// (0x000a8c9e) main_cam_set_pane_g1

0x6111,	// (0x000a8cac) main_cam_set_pane_g2_ParamLimits

0x6111,	// (0x000a8cac) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000b250c) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000b250c) main_cam_set_pane_g

0x6132,	// (0x000a8ccd) main_cam_set_pane_t1_ParamLimits

0x6132,	// (0x000a8ccd) main_cam_set_pane_t1

0x614d,	// (0x000a8ce8) main_cset_listscroll_pane_ParamLimits

0x614d,	// (0x000a8ce8) main_cset_listscroll_pane

0x616d,	// (0x000a8d08) main_cset_slider_pane_ParamLimits

0x616d,	// (0x000a8d08) main_cset_slider_pane

0xe53c,	// (0x000b10d7) main_cset_list_pane_ParamLimits

0xe53c,	// (0x000b10d7) main_cset_list_pane

0xe54c,	// (0x000b10e7) scroll_pane_cp028

0x6193,	// (0x000a8d2e) aid_area_touch_slider

0x61af,	// (0x000a8d4a) cset_slider_pane

0x61d9,	// (0x000a8d74) main_cset_slider_pane_g1

0x61ee,	// (0x000a8d89) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000b2511) main_cset_slider_pane_g

0xe585,	// (0x000b1120) main_cset_slider_pane_t1

0x62aa,	// (0x000a8e45) main_cset_slider_pane_t2

0x62c4,	// (0x000a8e5f) main_cset_slider_pane_t3

0x62de,	// (0x000a8e79) main_cset_slider_pane_t4

0x62f8,	// (0x000a8e93) main_cset_slider_pane_t5

0x6312,	// (0x000a8ead) main_cset_slider_pane_t6

0x6327,	// (0x000a8ec2) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000b2536) main_cset_slider_pane_t

0x642b,	// (0x000a8fc6) cset_list_set_pane_ParamLimits

0x642b,	// (0x000a8fc6) cset_list_set_pane

0x643d,	// (0x000a8fd8) aid_position_infowindow_above

0x6445,	// (0x000a8fe0) aid_position_infowindow_below

0xe625,	// (0x000b11c0) cset_list_set_pane_g1_ParamLimits

0xe625,	// (0x000b11c0) cset_list_set_pane_g1

0xe631,	// (0x000b11cc) cset_list_set_pane_g3_ParamLimits

0xe631,	// (0x000b11cc) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x000b2555) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x000b2555) cset_list_set_pane_g

0xe640,	// (0x000b11db) cset_list_set_pane_t1_ParamLimits

0xe640,	// (0x000b11db) cset_list_set_pane_t1

0xa7fa,	// (0x000ad395) list_highlight_pane_cp021_ParamLimits

0xa7fa,	// (0x000ad395) list_highlight_pane_cp021

0xc2a8,	// (0x000aee43) cset_slider_pane_g1

0xc2ba,	// (0x000aee55) cset_slider_pane_g2

0xc2b1,	// (0x000aee4c) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x000b255a) cset_slider_pane_g

0xa0c9,	// (0x000acc64) aid_area_touch_cam4_zoom

0xa0d1,	// (0x000acc6c) cam4_zoom_cont_pane

0xa0d9,	// (0x000acc74) cam4_zoom_pane_g1

0xa0e1,	// (0x000acc7c) cam4_zoom_pane_g2

0x644d,	// (0x000a8fe8) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x000b2561) cam4_zoom_pane_g

0xa0e9,	// (0x000acc84) cam4_zoom_cont_pane_g1

0xa0f2,	// (0x000acc8d) cam4_zoom_cont_pane_g2

0xa0fb,	// (0x000acc96) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x000b2568) cam4_zoom_cont_pane_g

0x58c8,	// (0x000a8463) call4_image_pane_ParamLimits

0x58c8,	// (0x000a8463) call4_image_pane

0xe314,	// (0x000b0eaf) call4_windows_conf_pane_ParamLimits

0xe351,	// (0x000b0eec) popup_call4_audio_in_window_ParamLimits

0xe351,	// (0x000b0eec) popup_call4_audio_in_window

0x94d4,	// (0x000ac06f) bg_popup_call2_act_pane_cp02

0xe39a,	// (0x000b0f35) call4_list_conf_pane

0xd972,	// (0x000b050d) call4_image_pane_g1

0xd972,	// (0x000b050d) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x000b2277) call4_image_pane_g

0xe655,	// (0x000b11f0) list_single_graphic_popup_conf4_pane_ParamLimits

0xe655,	// (0x000b11f0) list_single_graphic_popup_conf4_pane

0x94d4,	// (0x000ac06f) list_highlight_pane_cp022

0xe668,	// (0x000b1203) list_single_graphic_popup_conf4_pane_g1

0xbe79,	// (0x000aea14) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x000b256f) list_single_graphic_popup_conf4_pane_g

0xe670,	// (0x000b120b) list_single_graphic_popup_conf4_pane_t1

0x1528,	// (0x000a40c3) popup_vtel_slider_window_ParamLimits

0x1528,	// (0x000a40c3) popup_vtel_slider_window

0xe2f6,	// (0x000b0e91) dialer2_ne_pane_t2_ParamLimits

0xe2f6,	// (0x000b0e91) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x000b2450) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x000b2450) dialer2_ne_pane_t

0xd757,	// (0x000b02f2) bg_popup_sub_pane_cp010_ParamLimits

0xd757,	// (0x000b02f2) bg_popup_sub_pane_cp010

0x6455,	// (0x000a8ff0) popup_vtel_slider_window_g1_ParamLimits

0x6455,	// (0x000a8ff0) popup_vtel_slider_window_g1

0x6468,	// (0x000a9003) popup_vtel_slider_window_g2_ParamLimits

0x6468,	// (0x000a9003) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x000b2574) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x000b2574) popup_vtel_slider_window_g

0x64be,	// (0x000a9059) vtel_slider_pane_ParamLimits

0x64be,	// (0x000a9059) vtel_slider_pane

0x64e0,	// (0x000a907b) vtel_slider_pane_g1_ParamLimits

0x64e0,	// (0x000a907b) vtel_slider_pane_g1

0x64f4,	// (0x000a908f) vtel_slider_pane_g2_ParamLimits

0x64f4,	// (0x000a908f) vtel_slider_pane_g2

0x650c,	// (0x000a90a7) vtel_slider_pane_g3_ParamLimits

0x650c,	// (0x000a90a7) vtel_slider_pane_g3

0x64e0,	// (0x000a907b) vtel_slider_pane_g4_ParamLimits

0x64e0,	// (0x000a907b) vtel_slider_pane_g4

0x6522,	// (0x000a90bd) vtel_slider_pane_g5_ParamLimits

0x6522,	// (0x000a90bd) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x000b257d) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x000b257d) vtel_slider_pane_g

0x953c,	// (0x000ac0d7) main_gallery2_pane

0x5c08,	// (0x000a87a3) aid_size_row_itut2_dropdow_list_ParamLimits

0x5c08,	// (0x000a87a3) aid_size_row_itut2_dropdow_list

0x5c94,	// (0x000a882f) grid_vitu2_function_top_pane_ParamLimits

0x5c94,	// (0x000a882f) grid_vitu2_function_top_pane

0x5cfe,	// (0x000a8899) popup_vitu2_dropdown_list_window_ParamLimits

0x5cfe,	// (0x000a8899) popup_vitu2_dropdown_list_window

0x5d27,	// (0x000a88c2) popup_vitu2_match_list_window

0x6546,	// (0x000a90e1) cell_vitu2_function_top_pane_ParamLimits

0x6546,	// (0x000a90e1) cell_vitu2_function_top_pane

0x655e,	// (0x000a90f9) cell_vitu2_function_top_pane_cp01_ParamLimits

0x655e,	// (0x000a90f9) cell_vitu2_function_top_pane_cp01

0x657a,	// (0x000a9115) cell_vitu2_function_top_wide_pane_ParamLimits

0x657a,	// (0x000a9115) cell_vitu2_function_top_wide_pane

0x953c,	// (0x000ac0d7) bg_button_pane_cp012

0x6596,	// (0x000a9131) cell_vitu2_function_top_pane_g1

0xa104,	// (0x000acc9f) bg_button_pane_cp013_ParamLimits

0xa104,	// (0x000acc9f) bg_button_pane_cp013

0x65aa,	// (0x000a9145) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x65aa,	// (0x000a9145) cell_vitu2_function_top_wide_pane_g1

0x953c,	// (0x000ac0d7) bg_popup_sub_pane_cp20

0x65c2,	// (0x000a915d) list_vitu2_match_list_pane

0xe432,	// (0x000b0fcd) bg_popup_sub_pane_cp20_g1

0xe43a,	// (0x000b0fd5) bg_popup_sub_pane_cp20_g2

0xaeee,	// (0x000ada89) bg_popup_sub_pane_cp20_g3

0xe442,	// (0x000b0fdd) bg_popup_sub_pane_cp20_g4

0xa7e2,	// (0x000ad37d) bg_popup_sub_pane_cp20_g5

0xe686,	// (0x000b1221) bg_popup_sub_pane_cp20_g6

0xe452,	// (0x000b0fed) bg_popup_sub_pane_cp20_g7

0xe45a,	// (0x000b0ff5) bg_popup_sub_pane_cp20_g8

0xe462,	// (0x000b0ffd) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x000b2588) bg_popup_sub_pane_cp20_g

0xa120,	// (0x000accbb) list_vitu2_match_list_item_pane_ParamLimits

0xa120,	// (0x000accbb) list_vitu2_match_list_item_pane

0xa132,	// (0x000acccd) list_vitu2_match_list_item_pane_t1

0x954a,	// (0x000ac0e5) bg_popup_sub_pane_cp21

0xa140,	// (0x000accdb) grid_vitu2_dropdown_list_pane

0x6630,	// (0x000a91cb) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6630,	// (0x000a91cb) cell_vitu2_dropdown_list_char_pane

0x6651,	// (0x000a91ec) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6651,	// (0x000a91ec) cell_vitu2_dropdown_list_ctrl_pane

0xe68e,	// (0x000b1229) cell_vitu2_dropdown_list_char_pane_g1

0xe697,	// (0x000b1232) cell_vitu2_dropdown_list_char_pane_g2

0xe6a0,	// (0x000b123b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x000b25a5) cell_vitu2_dropdown_list_char_pane_g

0x667d,	// (0x000a9218) cell_vitu2_dropdown_list_char_pane_t1

0x668b,	// (0x000a9226) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x668b,	// (0x000a9226) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6698,	// (0x000a9233) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6698,	// (0x000a9233) cell_vitu2_dropdown_list_ctrl_pane_g2

0x66a5,	// (0x000a9240) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x66a5,	// (0x000a9240) cell_vitu2_dropdown_list_ctrl_pane_g3

0x66b2,	// (0x000a924d) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x66b2,	// (0x000a924d) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9fd8,	// (0x000acb73) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9fd8,	// (0x000acb73) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x000b25ac) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x000b25ac) cell_vitu2_dropdown_list_ctrl_pane_g

0x66ce,	// (0x000a9269) aid_size_cell_gallery2_ParamLimits

0x66ce,	// (0x000a9269) aid_size_cell_gallery2

0x66ec,	// (0x000a9287) grid_gallery2_pane_ParamLimits

0x66ec,	// (0x000a9287) grid_gallery2_pane

0x6706,	// (0x000a92a1) scroll_pane_cp029_ParamLimits

0x6706,	// (0x000a92a1) scroll_pane_cp029

0x6717,	// (0x000a92b2) cell_gallery2_pane_ParamLimits

0x6717,	// (0x000a92b2) cell_gallery2_pane

0xe6a9,	// (0x000b1244) cell_gallery2_pane_g2

0x6776,	// (0x000a9311) cell_gallery2_pane_g3

0xe6b1,	// (0x000b124c) cell_gallery2_pane_g4

0xe6b9,	// (0x000b1254) cell_gallery2_pane_g5

0xa5a9,	// (0x000ad144) grid_highlight_pane_cp10

0x5d27,	// (0x000a88c2) popup_vitu2_match_list_window_ParamLimits

0x5d3e,	// (0x000a88d9) popup_vitu2_query_window_ParamLimits

0x5d3e,	// (0x000a88d9) popup_vitu2_query_window

0x954a,	// (0x000ac0e5) bg_vitu2_candi_button_pane

0xe68e,	// (0x000b1229) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xe697,	// (0x000b1232) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xe6a0,	// (0x000b123b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x677e,	// (0x000a9319) bg_button_pane_cp015

0x6790,	// (0x000a932b) bg_button_pane_cp016

0x67a3,	// (0x000a933e) bg_button_pane_cp017

0xd56a,	// (0x000b0105) bg_popup_sub_pane_cp22

0xe6c1,	// (0x000b125c) popup_vitu2_query_window_g1

0x67e8,	// (0x000a9383) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x000b25b7) popup_vitu2_query_window_g

0x6807,	// (0x000a93a2) popup_vitu2_query_window_t1_ParamLimits

0x6807,	// (0x000a93a2) popup_vitu2_query_window_t1

0x683c,	// (0x000a93d7) popup_vitu2_query_window_t2_ParamLimits

0x683c,	// (0x000a93d7) popup_vitu2_query_window_t2

0x684e,	// (0x000a93e9) popup_vitu2_query_window_t3_ParamLimits

0x684e,	// (0x000a93e9) popup_vitu2_query_window_t3

0x6876,	// (0x000a9411) popup_vitu2_query_window_t4_ParamLimits

0x6876,	// (0x000a9411) popup_vitu2_query_window_t4

0x6897,	// (0x000a9432) popup_vitu2_query_window_t5_ParamLimits

0x6897,	// (0x000a9432) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x000b25be) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x000b25be) popup_vitu2_query_window_t

0xe534,	// (0x000b10cf) main_cset_text_pane

0x6193,	// (0x000a8d2e) aid_area_touch_slider_ParamLimits

0x61af,	// (0x000a8d4a) cset_slider_pane_ParamLimits

0x61d9,	// (0x000a8d74) main_cset_slider_pane_g1_ParamLimits

0x61ee,	// (0x000a8d89) main_cset_slider_pane_g2_ParamLimits

0xe555,	// (0x000b10f0) main_cset_slider_pane_g3_ParamLimits

0xe555,	// (0x000b10f0) main_cset_slider_pane_g3

0x6203,	// (0x000a8d9e) main_cset_slider_pane_g4_ParamLimits

0x6203,	// (0x000a8d9e) main_cset_slider_pane_g4

0x6212,	// (0x000a8dad) main_cset_slider_pane_g5_ParamLimits

0x6212,	// (0x000a8dad) main_cset_slider_pane_g5

0x621e,	// (0x000a8db9) main_cset_slider_pane_g6_ParamLimits

0x621e,	// (0x000a8db9) main_cset_slider_pane_g6

0xf976,	// (0x000b2511) main_cset_slider_pane_g_ParamLimits

0xe585,	// (0x000b1120) main_cset_slider_pane_t1_ParamLimits

0x62aa,	// (0x000a8e45) main_cset_slider_pane_t2_ParamLimits

0x62c4,	// (0x000a8e5f) main_cset_slider_pane_t3_ParamLimits

0x62de,	// (0x000a8e79) main_cset_slider_pane_t4_ParamLimits

0x62f8,	// (0x000a8e93) main_cset_slider_pane_t5_ParamLimits

0x6312,	// (0x000a8ead) main_cset_slider_pane_t6_ParamLimits

0x6327,	// (0x000a8ec2) main_cset_slider_pane_t7_ParamLimits

0x6351,	// (0x000a8eec) main_cset_slider_pane_t8_ParamLimits

0x6351,	// (0x000a8eec) main_cset_slider_pane_t8

0x6379,	// (0x000a8f14) main_cset_slider_pane_t9_ParamLimits

0x6379,	// (0x000a8f14) main_cset_slider_pane_t9

0x63a1,	// (0x000a8f3c) main_cset_slider_pane_t10_ParamLimits

0x63a1,	// (0x000a8f3c) main_cset_slider_pane_t10

0x63c9,	// (0x000a8f64) main_cset_slider_pane_t11_ParamLimits

0x63c9,	// (0x000a8f64) main_cset_slider_pane_t11

0x63f1,	// (0x000a8f8c) main_cset_slider_pane_t12_ParamLimits

0x63f1,	// (0x000a8f8c) main_cset_slider_pane_t12

0x640e,	// (0x000a8fa9) main_cset_slider_pane_t13_ParamLimits

0x640e,	// (0x000a8fa9) main_cset_slider_pane_t13

0xf99b,	// (0x000b2536) main_cset_slider_pane_t_ParamLimits

0x94d4,	// (0x000ac06f) bg_popup_sub_pane_cp011

0xe6cd,	// (0x000b1268) main_cset_text_pane_g1

0xe6d5,	// (0x000b1270) main_cset_text_pane_t1

0xe6e3,	// (0x000b127e) main_cset_text_pane_t2

0xe6f1,	// (0x000b128c) main_cset_text_pane_t3

0xe6ff,	// (0x000b129a) main_cset_text_pane_t4

0xe70d,	// (0x000b12a8) main_cset_text_pane_t5

0xe71b,	// (0x000b12b6) main_cset_text_pane_t6

0xe729,	// (0x000b12c4) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x000b25cd) main_cset_text_pane_t

0x954a,	// (0x000ac0e5) main_cam4_burst_pane

0x954a,	// (0x000ac0e5) main_cam5_pane

0x60d2,	// (0x000a8c6d) bg_button_pane_cp019

0x60db,	// (0x000a8c76) bg_button_pane_cp020

0xe561,	// (0x000b10fc) main_cset_slider_pane_g7_ParamLimits

0xe561,	// (0x000b10fc) main_cset_slider_pane_g7

0xe56d,	// (0x000b1108) main_cset_slider_pane_g8_ParamLimits

0xe56d,	// (0x000b1108) main_cset_slider_pane_g8

0x6232,	// (0x000a8dcd) main_cset_slider_pane_g9_ParamLimits

0x6232,	// (0x000a8dcd) main_cset_slider_pane_g9

0x623e,	// (0x000a8dd9) main_cset_slider_pane_g10_ParamLimits

0x623e,	// (0x000a8dd9) main_cset_slider_pane_g10

0x624a,	// (0x000a8de5) main_cset_slider_pane_g11_ParamLimits

0x624a,	// (0x000a8de5) main_cset_slider_pane_g11

0x6256,	// (0x000a8df1) main_cset_slider_pane_g12_ParamLimits

0x6256,	// (0x000a8df1) main_cset_slider_pane_g12

0x6262,	// (0x000a8dfd) main_cset_slider_pane_g13_ParamLimits

0x6262,	// (0x000a8dfd) main_cset_slider_pane_g13

0x626e,	// (0x000a8e09) main_cset_slider_pane_g14_ParamLimits

0x626e,	// (0x000a8e09) main_cset_slider_pane_g14

0x627a,	// (0x000a8e15) main_cset_slider_pane_g15_ParamLimits

0x627a,	// (0x000a8e15) main_cset_slider_pane_g15

0xe5b3,	// (0x000b114e) main_cset_slider_pane_t14_ParamLimits

0xe5b3,	// (0x000b114e) main_cset_slider_pane_t14

0xe5ec,	// (0x000b1187) main_cset_slider_pane_t15_ParamLimits

0xe5ec,	// (0x000b1187) main_cset_slider_pane_t15

0x690e,	// (0x000a94a9) aid_cam4_burst_size_cell_ParamLimits

0x690e,	// (0x000a94a9) aid_cam4_burst_size_cell

0x692e,	// (0x000a94c9) grid_cam4_burst_pane_ParamLimits

0x692e,	// (0x000a94c9) grid_cam4_burst_pane

0x6966,	// (0x000a9501) linegrid_cam4_burst_pane_ParamLimits

0x6966,	// (0x000a9501) linegrid_cam4_burst_pane

0xe737,	// (0x000b12d2) scroll_pane_cp30_ParamLimits

0xe737,	// (0x000b12d2) scroll_pane_cp30

0x698a,	// (0x000a9525) cell_cam4_burst_pane_ParamLimits

0x698a,	// (0x000a9525) cell_cam4_burst_pane

0xe743,	// (0x000b12de) linegrid_cam4_burst_pane_g1_ParamLimits

0xe743,	// (0x000b12de) linegrid_cam4_burst_pane_g1

0x69d7,	// (0x000a9572) linegrid_cam4_burst_pane_g2_ParamLimits

0x69d7,	// (0x000a9572) linegrid_cam4_burst_pane_g2

0xe750,	// (0x000b12eb) linegrid_cam4_burst_pane_g3_ParamLimits

0xe750,	// (0x000b12eb) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x000b25dc) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x000b25dc) linegrid_cam4_burst_pane_g

0x69e8,	// (0x000a9583) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x69e8,	// (0x000a9583) linegrid_cam4_burst_pane_g3_copy1

0xe75d,	// (0x000b12f8) linegrid_cam4_burst_pane_g4_ParamLimits

0xe75d,	// (0x000b12f8) linegrid_cam4_burst_pane_g4

0x6a02,	// (0x000a959d) linegrid_cam4_burst_pane_g5_ParamLimits

0x6a02,	// (0x000a959d) linegrid_cam4_burst_pane_g5

0x6a13,	// (0x000a95ae) linegrid_cam4_burst_pane_g6_ParamLimits

0x6a13,	// (0x000a95ae) linegrid_cam4_burst_pane_g6

0xe76a,	// (0x000b1305) linegrid_cam4_burst_pane_g7_ParamLimits

0xe76a,	// (0x000b1305) linegrid_cam4_burst_pane_g7

0x6a2a,	// (0x000a95c5) cell_cam4_burst_pane_g1

0xe783,	// (0x000b131e) main_cam5_pane_t1_ParamLimits

0xe783,	// (0x000b131e) main_cam5_pane_t1

0xe795,	// (0x000b1330) main_cam5_pane_t2_ParamLimits

0xe795,	// (0x000b1330) main_cam5_pane_t2

0xe7a7,	// (0x000b1342) main_cam5_pane_t3_ParamLimits

0xe7a7,	// (0x000b1342) main_cam5_pane_t3

0xe7b9,	// (0x000b1354) main_cam5_pane_t4_ParamLimits

0xe7b9,	// (0x000b1354) main_cam5_pane_t4

0xe7d1,	// (0x000b136c) main_cam5_pane_t5_ParamLimits

0xe7d1,	// (0x000b136c) main_cam5_pane_t5

0xe7e5,	// (0x000b1380) main_cam5_pane_t6_ParamLimits

0xe7e5,	// (0x000b1380) main_cam5_pane_t6

0xe7f9,	// (0x000b1394) main_cam5_pane_t7_ParamLimits

0xe7f9,	// (0x000b1394) main_cam5_pane_t7

0xe80b,	// (0x000b13a6) main_cam5_pane_t8_ParamLimits

0xe80b,	// (0x000b13a6) main_cam5_pane_t8

0xe827,	// (0x000b13c2) main_cam5_pane_t9_ParamLimits

0xe827,	// (0x000b13c2) main_cam5_pane_t9

0xe839,	// (0x000b13d4) main_cam5_pane_t10_ParamLimits

0xe839,	// (0x000b13d4) main_cam5_pane_t10

0xe84b,	// (0x000b13e6) main_cam5_pane_t11_ParamLimits

0xe84b,	// (0x000b13e6) main_cam5_pane_t11

0xe85d,	// (0x000b13f8) main_cam5_pane_t12_ParamLimits

0xe85d,	// (0x000b13f8) main_cam5_pane_t12

0xe872,	// (0x000b140d) main_cam5_pane_t13_ParamLimits

0xe872,	// (0x000b140d) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x000b25e8) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x000b25e8) main_cam5_pane_t

0x04a7,	// (0x000a3042) popup_scut_keymap_window_ParamLimits

0x04a7,	// (0x000a3042) popup_scut_keymap_window

0x6a3d,	// (0x000a95d8) aid_size_cell_brow_shortcut

0xa5a9,	// (0x000ad144) bg_popup_window_pane_cp010

0x6a49,	// (0x000a95e4) grid_scut_pane

0x6a55,	// (0x000a95f0) cell_scut_pane_ParamLimits

0x6a55,	// (0x000a95f0) cell_scut_pane

0x6a6c,	// (0x000a9607) cell_scut_pane_g1

0xe88f,	// (0x000b142a) cell_scut_pane_t1

0xe89e,	// (0x000b1439) cell_scut_pane_t2

0x6a75,	// (0x000a9610) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x000b2603) cell_scut_pane_t

0x479a,	// (0x000a7335) main_mup3_pane_g8_ParamLimits

0x479a,	// (0x000a7335) main_mup3_pane_g8

0x5c20,	// (0x000a87bb) area_vitu2_query_pane_ParamLimits

0x5c20,	// (0x000a87bb) area_vitu2_query_pane

0x67b6,	// (0x000a9351) input_focus_pane_cp08

0xe8ad,	// (0x000b1448) area_vitu2_query_pane_g1

0x6a83,	// (0x000a961e) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x000b260a) area_vitu2_query_pane_g

0x6a94,	// (0x000a962f) area_vitu2_query_pane_t1_ParamLimits

0x6a94,	// (0x000a962f) area_vitu2_query_pane_t1

0x6aa8,	// (0x000a9643) area_vitu2_query_pane_t2_ParamLimits

0x6aa8,	// (0x000a9643) area_vitu2_query_pane_t2

0x6abc,	// (0x000a9657) area_vitu2_query_pane_t3_ParamLimits

0x6abc,	// (0x000a9657) area_vitu2_query_pane_t3

0xe8b9,	// (0x000b1454) area_vitu2_query_pane_t4_ParamLimits

0xe8b9,	// (0x000b1454) area_vitu2_query_pane_t4

0xe8e1,	// (0x000b147c) area_vitu2_query_pane_t5_ParamLimits

0xe8e1,	// (0x000b147c) area_vitu2_query_pane_t5

0xe909,	// (0x000b14a4) area_vitu2_query_pane_t6_ParamLimits

0xe909,	// (0x000b14a4) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x000b260f) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x000b260f) area_vitu2_query_pane_t

0x6ae4,	// (0x000a967f) bg_button_pane_cp018

0x6af2,	// (0x000a968d) bg_button_pane_cp021

0x6afe,	// (0x000a9699) bg_button_pane_cp022

0x6b0d,	// (0x000a96a8) input_focus_pane_cp09

0xbfb5,	// (0x000aeb50) aid_size_touch_mv_arrow_left

0xbfde,	// (0x000aeb79) aid_size_touch_mv_arrow_right

0x6292,	// (0x000a8e2d) main_cset_slider_pane_g16_ParamLimits

0x6292,	// (0x000a8e2d) main_cset_slider_pane_g16

0x629e,	// (0x000a8e39) main_cset_slider_pane_g17_ParamLimits

0x629e,	// (0x000a8e39) main_cset_slider_pane_g17

0x6a2a,	// (0x000a95c5) cell_cam4_burst_pane_g1_ParamLimits

0x94d4,	// (0x000ac06f) compa_mode_pane

0x6478,	// (0x000a9013) popup_vtel_slider_window_g3_ParamLimits

0x6478,	// (0x000a9013) popup_vtel_slider_window_g3

0x648f,	// (0x000a902a) popup_vtel_slider_window_g4_ParamLimits

0x648f,	// (0x000a902a) popup_vtel_slider_window_g4

0x64a6,	// (0x000a9041) popup_vtel_slider_window_t1_ParamLimits

0x64a6,	// (0x000a9041) popup_vtel_slider_window_t1

0x954a,	// (0x000ac0e5) main_cl_pane

0x9c16,	// (0x000ac7b1) popup_imed_adjust2_window_ParamLimits

0xd56a,	// (0x000b0105) bg_tb_trans_pane_cp05_ParamLimits

0xdef9,	// (0x000b0a94) popup_imed_adjust2_window_g1_ParamLimits

0xdf08,	// (0x000b0aa3) popup_imed_adjust2_window_g2_ParamLimits

0xdf08,	// (0x000b0aa3) popup_imed_adjust2_window_g2

0xdf14,	// (0x000b0aaf) popup_imed_adjust2_window_g3_ParamLimits

0xdf14,	// (0x000b0aaf) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x000b237a) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x000b237a) popup_imed_adjust2_window_g

0xdf20,	// (0x000b0abb) popup_imed_adjust2_window_t1_ParamLimits

0xdf38,	// (0x000b0ad3) slider_imed_adjust_pane_ParamLimits

0xdf4c,	// (0x000b0ae7) slider_imed_adjust_pane_g1_ParamLimits

0xdf5c,	// (0x000b0af7) slider_imed_adjust_pane_g2_ParamLimits

0xdf6c,	// (0x000b0b07) slider_imed_adjust_pane_g3_ParamLimits

0xdf7d,	// (0x000b0b18) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x000b2381) slider_imed_adjust_pane_g_ParamLimits

0x59a9,	// (0x000a8544) aid_touch_area_cam4_ParamLimits

0x59a9,	// (0x000a8544) aid_touch_area_cam4

0x9fbc,	// (0x000acb57) battery_pane_cp01

0x5a78,	// (0x000a8613) main_camera4_pane_g6_ParamLimits

0x5a78,	// (0x000a8613) main_camera4_pane_g6

0x5aa2,	// (0x000a863d) main_camera4_pane_t2_ParamLimits

0x5aa2,	// (0x000a863d) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x000b2484) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x000b2484) main_camera4_pane_t

0x5ad7,	// (0x000a8672) aid_touch_area_vid4_ParamLimits

0x5ad7,	// (0x000a8672) aid_touch_area_vid4

0x5b2b,	// (0x000a86c6) main_video4_pane_g5_ParamLimits

0x5b2b,	// (0x000a86c6) main_video4_pane_g5

0x5b50,	// (0x000a86eb) vid4_progress_pane_ParamLimits

0x5b50,	// (0x000a86eb) vid4_progress_pane

0xe579,	// (0x000b1114) main_cset_slider_pane_g18_ParamLimits

0xe579,	// (0x000b1114) main_cset_slider_pane_g18

0xe777,	// (0x000b1312) cell_cam4_burst_pane_g2_ParamLimits

0xe777,	// (0x000b1312) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x000b25e3) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x000b25e3) cell_cam4_burst_pane_g

0xa3e4,	// (0x000acf7f) bg_cl_pane_ParamLimits

0xa3e4,	// (0x000acf7f) bg_cl_pane

0x6b1c,	// (0x000a96b7) cl_header_pane_ParamLimits

0x6b1c,	// (0x000a96b7) cl_header_pane

0x6b30,	// (0x000a96cb) cl_listscroll_pane_ParamLimits

0x6b30,	// (0x000a96cb) cl_listscroll_pane

0xe955,	// (0x000b14f0) bg_cl_pane_g1

0xe95d,	// (0x000b14f8) bg_cl_pane_g2

0xe965,	// (0x000b1500) bg_cl_pane_g3

0xe96d,	// (0x000b1508) bg_cl_pane_g4

0xe975,	// (0x000b1510) bg_cl_pane_g5

0xe97d,	// (0x000b1518) bg_cl_pane_g6

0xe985,	// (0x000b1520) bg_cl_pane_g7

0xe98d,	// (0x000b1528) bg_cl_pane_g8

0xe995,	// (0x000b1530) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x000b261e) bg_cl_pane_g

0x6b40,	// (0x000a96db) aid_height_cl_leading_ParamLimits

0x6b40,	// (0x000a96db) aid_height_cl_leading

0x6b4c,	// (0x000a96e7) aid_height_cl_text_ParamLimits

0x6b4c,	// (0x000a96e7) aid_height_cl_text

0xa7fa,	// (0x000ad395) bg_cl_header_pane_ParamLimits

0xa7fa,	// (0x000ad395) bg_cl_header_pane

0x6b6b,	// (0x000a9706) cl_header_pane_g1_ParamLimits

0x6b6b,	// (0x000a9706) cl_header_pane_g1

0x6b81,	// (0x000a971c) cl_header_pane_t1_ParamLimits

0x6b81,	// (0x000a971c) cl_header_pane_t1

0xe99d,	// (0x000b1538) cl_list_pane

0xe54c,	// (0x000b10e7) hc_scroll_pane_cp01

0xa7e2,	// (0x000ad37d) bg_cl_header_pane_g1

0xe432,	// (0x000b0fcd) bg_cl_header_pane_g2

0xaeee,	// (0x000ada89) bg_cl_header_pane_g3

0xe442,	// (0x000b0fdd) bg_cl_header_pane_g4

0xe43a,	// (0x000b0fd5) bg_cl_header_pane_g5

0xe686,	// (0x000b1221) bg_cl_header_pane_g6

0xe45a,	// (0x000b0ff5) bg_cl_header_pane_g7

0xe462,	// (0x000b0ffd) bg_cl_header_pane_g8

0xe452,	// (0x000b0fed) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x000b2631) bg_cl_header_pane_g

0x6b9a,	// (0x000a9735) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6b9a,	// (0x000a9735) hc_cl_list_double_graphic_heading_pane

0x6bab,	// (0x000a9746) hc_cl_list_single_graphic_pane_ParamLimits

0x6bab,	// (0x000a9746) hc_cl_list_single_graphic_pane

0x6bc1,	// (0x000a975c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6bc1,	// (0x000a975c) hc_cl_list_single_graphic_pane_g1

0x6bcd,	// (0x000a9768) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6bcd,	// (0x000a9768) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x000b2644) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x000b2644) hc_cl_list_single_graphic_pane_g

0x6be1,	// (0x000a977c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6be1,	// (0x000a977c) hc_cl_list_single_graphic_pane_t1

0x6bc1,	// (0x000a975c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6bc1,	// (0x000a975c) hc_cl_list_double_graphic_heading_pane_g1

0x6bf6,	// (0x000a9791) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6bf6,	// (0x000a9791) hc_cl_list_double_graphic_heading_pane_g2

0x6c0a,	// (0x000a97a5) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6c0a,	// (0x000a97a5) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x000b2649) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x000b2649) hc_cl_list_double_graphic_heading_pane_g

0x6c1e,	// (0x000a97b9) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6c1e,	// (0x000a97b9) hc_cl_list_double_graphic_heading_pane_t1

0x6c33,	// (0x000a97ce) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6c33,	// (0x000a97ce) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x000b2650) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x000b2650) hc_cl_list_double_graphic_heading_pane_t

0xa150,	// (0x000acceb) vid4_progress_pane_g1

0xa160,	// (0x000accfb) vid4_progress_pane_g2

0x6c48,	// (0x000a97e3) vid4_progress_pane_g3

0xa170,	// (0x000acd0b) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x000b2655) vid4_progress_pane_g

0x6c5a,	// (0x000a97f5) vid4_progress_pane_t1

0xa188,	// (0x000acd23) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x000b2660) vid4_progress_pane_t

0x6c72,	// (0x000a980d) wait_bar_pane_cp07

0xd765,	// (0x000b0300) blid_firmament_pane_ParamLimits

0xd7a8,	// (0x000b0343) popup_blid_sat_info2_window_g1

0xd7cc,	// (0x000b0367) popup_blid_sat_info2_window_t3

0xd7da,	// (0x000b0375) popup_blid_sat_info2_window_t4

0xd7e8,	// (0x000b0383) popup_blid_sat_info2_window_t5

0xd7f6,	// (0x000b0391) popup_blid_sat_info2_window_t6

0xd806,	// (0x000b03a1) popup_blid_sat_info2_window_t7

0xd814,	// (0x000b03af) popup_blid_sat_info2_window_t8

0xd822,	// (0x000b03bd) popup_blid_sat_info2_window_t9

0xd830,	// (0x000b03cb) popup_blid_sat_info2_window_t10

0xd8f2,	// (0x000b048d) aid_firma_cardinal_ParamLimits

0xd906,	// (0x000b04a1) blid_firmament_pane_t1_ParamLimits

0xd91d,	// (0x000b04b8) blid_firmament_pane_t2_ParamLimits

0xd934,	// (0x000b04cf) blid_firmament_pane_t3_ParamLimits

0xd94b,	// (0x000b04e6) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x000b226e) blid_firmament_pane_t_ParamLimits

0xd962,	// (0x000b04fd) blid_sat_info_pane_ParamLimits

0x953c,	// (0x000ac0d7) main_cam_set_pane_ParamLimits

0x5061,	// (0x000a7bfc) aid_size_cell_colour_35_ParamLimits

0x5081,	// (0x000a7c1c) aid_size_cell_colour_112_ParamLimits

0x50a1,	// (0x000a7c3c) aid_size_cell_effect_ParamLimits

0xd56a,	// (0x000b0105) bg_tb_trans_pane_cp02_ParamLimits

0xb136,	// (0x000adcd1) heading_imed_pane_ParamLimits

0x50c1,	// (0x000a7c5c) listscroll_imed_pane_ParamLimits

0xcb90,	// (0x000af72b) popup_call2_audio_first_window_g5_ParamLimits

0xcb90,	// (0x000af72b) popup_call2_audio_first_window_g5

0x5654,	// (0x000a81ef) aid_size_touch_image3_arrow_left_ParamLimits

0x5654,	// (0x000a81ef) aid_size_touch_image3_arrow_left

0x5680,	// (0x000a821b) aid_size_touch_image3_arrow_right_ParamLimits

0x5680,	// (0x000a821b) aid_size_touch_image3_arrow_right

0xa19d,	// (0x000acd38) vid4_progress_pane_t3

0x53d4,	// (0x000a7f6f) main_hwr_training_symbol_option_pane_ParamLimits

0x53d4,	// (0x000a7f6f) main_hwr_training_symbol_option_pane

0xe1e6,	// (0x000b0d81) popup_hwr_training_preview_window_ParamLimits

0xe1e6,	// (0x000b0d81) popup_hwr_training_preview_window

0x53f4,	// (0x000a7f8f) hwr_training_navi_pane_g5_ParamLimits

0x53f4,	// (0x000a7f8f) hwr_training_navi_pane_g5

0xe420,	// (0x000b0fbb) popup_char_count_window

0x953c,	// (0x000ac0d7) bg_popup_sub_pane_cp20_ParamLimits

0x65c2,	// (0x000a915d) list_vitu2_match_list_pane_ParamLimits

0x65d1,	// (0x000a916c) vitu2_page_scroll_pane_ParamLimits

0x65d1,	// (0x000a916c) vitu2_page_scroll_pane

0xe9bf,	// (0x000b155a) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe9bf,	// (0x000b155a) list_single_hwr_training_symbol_option_pane

0xe9d2,	// (0x000b156d) list_single_hwr_training_symbol_option_pane_g1

0xe9da,	// (0x000b1575) list_single_hwr_training_symbol_option_pane_t1

0xe9e8,	// (0x000b1583) bg_button_pane_cp023

0xe9f1,	// (0x000b158c) bg_button_pane_cp024

0x6cb4,	// (0x000a984f) vitu2_page_scroll_pane_g1

0x6cbc,	// (0x000a9857) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x000b2667) vitu2_page_scroll_pane_g

0x6cc4,	// (0x000a985f) vitu2_page_scroll_pane_t1

0xd6c5,	// (0x000b0260) popup_char_count_window_g1

0xea24,	// (0x000b15bf) popup_char_count_window_g2

0xea2d,	// (0x000b15c8) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x000b266c) popup_char_count_window_g

0xea36,	// (0x000b15d1) popup_char_count_window_t1

0x954a,	// (0x000ac0e5) main_vded2_pane

0xdee5,	// (0x000b0a80) aid_size_cell_imed_line

0xdeef,	// (0x000b0a8a) grid_imed_line_width_pane

0xa082,	// (0x000acc1d) vid4_indicators_pane_g4

0xea44,	// (0x000b15df) cell_imed_line_width_pane_ParamLimits

0xea44,	// (0x000b15df) cell_imed_line_width_pane

0xea58,	// (0x000b15f3) cell_imed_line_width_pane_g1

0xe2d8,	// (0x000b0e73) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x000b2673) cell_imed_line_width_pane_g

0x6cd3,	// (0x000a986e) main_vded2_pane_g1_ParamLimits

0x6cd3,	// (0x000a986e) main_vded2_pane_g1

0x6ce9,	// (0x000a9884) main_vded2_pane_g2_ParamLimits

0x6ce9,	// (0x000a9884) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x000b2678) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x000b2678) main_vded2_pane_g

0x6cfb,	// (0x000a9896) vded2_slider_pane_ParamLimits

0x6cfb,	// (0x000a9896) vded2_slider_pane

0x6d0b,	// (0x000a98a6) aid_size_touch_vded2_end

0x6d15,	// (0x000a98b0) aid_size_touch_vded2_playhead

0xea61,	// (0x000b15fc) aid_size_touch_vded2_start

0xea69,	// (0x000b1604) vded2_slider_bg_pane

0xea72,	// (0x000b160d) vded2_slider_pane_g1

0xea7b,	// (0x000b1616) vded2_slider_pane_g2

0x6d1f,	// (0x000a98ba) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x000b267d) vded2_slider_pane_g

0xea83,	// (0x000b161e) vded2_slider_bg_pane_g1

0xea8c,	// (0x000b1627) vded2_slider_bg_pane_g2

0xea95,	// (0x000b1630) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x000b2684) vded2_slider_bg_pane_g

0x2da7,	// (0x000a5942) aid_postcard_touch_down_pane_ParamLimits

0x2da7,	// (0x000a5942) aid_postcard_touch_down_pane

0x2dbd,	// (0x000a5958) aid_postcard_touch_up_pane_ParamLimits

0x2dbd,	// (0x000a5958) aid_postcard_touch_up_pane

0x954a,	// (0x000ac0e5) main_blid2_pane

0x9bfc,	// (0x000ac797) popup_blid2_search_window

0x94d4,	// (0x000ac06f) blid2_gps_pane

0x94d4,	// (0x000ac06f) blid2_navig_pane

0x94d4,	// (0x000ac06f) blid2_search_pane

0x94d4,	// (0x000ac06f) blid2_tripm_pane

0x6d2a,	// (0x000a98c5) blid2_search_pane_g1_ParamLimits

0x6d2a,	// (0x000a98c5) blid2_search_pane_g1

0x6d44,	// (0x000a98df) blid2_search_pane_t1_ParamLimits

0x6d44,	// (0x000a98df) blid2_search_pane_t1

0x6d56,	// (0x000a98f1) aid_size_cell_blid2_gps_ParamLimits

0x6d56,	// (0x000a98f1) aid_size_cell_blid2_gps

0x6d6e,	// (0x000a9909) blid2_gps_pane_g1_ParamLimits

0x6d6e,	// (0x000a9909) blid2_gps_pane_g1

0x6d82,	// (0x000a991d) grid_blid2_satellite_pane_ParamLimits

0x6d82,	// (0x000a991d) grid_blid2_satellite_pane

0x6d9c,	// (0x000a9937) blid2_navig_pane_g1_ParamLimits

0x6d9c,	// (0x000a9937) blid2_navig_pane_g1

0x6da8,	// (0x000a9943) blid2_navig_pane_t1_ParamLimits

0x6da8,	// (0x000a9943) blid2_navig_pane_t1

0x6dc3,	// (0x000a995e) blid2_navig_pane_t2_ParamLimits

0x6dc3,	// (0x000a995e) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x000b268b) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x000b268b) blid2_navig_pane_t

0x6dde,	// (0x000a9979) blid2_navig_ring_pane_ParamLimits

0x6dde,	// (0x000a9979) blid2_navig_ring_pane

0x6df7,	// (0x000a9992) blid2_speed_pane_ParamLimits

0x6df7,	// (0x000a9992) blid2_speed_pane

0x6e03,	// (0x000a999e) blid2_tripm_pane_g1_ParamLimits

0x6e03,	// (0x000a999e) blid2_tripm_pane_g1

0x6e1c,	// (0x000a99b7) blid2_tripm_pane_g2_ParamLimits

0x6e1c,	// (0x000a99b7) blid2_tripm_pane_g2

0x6e30,	// (0x000a99cb) blid2_tripm_pane_g3_ParamLimits

0x6e30,	// (0x000a99cb) blid2_tripm_pane_g3

0x6e44,	// (0x000a99df) blid2_tripm_pane_g4_ParamLimits

0x6e44,	// (0x000a99df) blid2_tripm_pane_g4

0x6e58,	// (0x000a99f3) blid2_tripm_pane_g5_ParamLimits

0x6e58,	// (0x000a99f3) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x000b2690) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x000b2690) blid2_tripm_pane_g

0x6e7e,	// (0x000a9a19) blid2_tripm_pane_t1_ParamLimits

0x6e7e,	// (0x000a9a19) blid2_tripm_pane_t1

0x6e99,	// (0x000a9a34) blid2_tripm_pane_t2_ParamLimits

0x6e99,	// (0x000a9a34) blid2_tripm_pane_t2

0x6eb2,	// (0x000a9a4d) blid2_tripm_pane_t3_ParamLimits

0x6eb2,	// (0x000a9a4d) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x000b269d) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x000b269d) blid2_tripm_pane_t

0x6ef9,	// (0x000a9a94) cell_blid2_satellite_pane_ParamLimits

0x6ef9,	// (0x000a9a94) cell_blid2_satellite_pane

0x6f17,	// (0x000a9ab2) cell_blid2_satellite_pane_g1

0xea9e,	// (0x000b1639) cell_blid2_satellite_pane_t1

0xd972,	// (0x000b050d) blid2_speed_pane_g1

0xeaac,	// (0x000b1647) blid2_speed_pane_t1

0xeaba,	// (0x000b1655) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x000b26a6) blid2_speed_pane_t

0xd972,	// (0x000b050d) blid2_navig_ring_pane_g1

0x6f20,	// (0x000a9abb) blid2_navig_ring_pane_g2

0x6f28,	// (0x000a9ac3) blid2_navig_ring_pane_g3

0x6f30,	// (0x000a9acb) blid2_navig_ring_pane_g4

0x6f38,	// (0x000a9ad3) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x000b26ab) blid2_navig_ring_pane_g

0x94d4,	// (0x000ac06f) bg_popup_window_pane_cp011

0xeac8,	// (0x000b1663) popup_blid2_search_window_g1

0xead0,	// (0x000b166b) popup_blid2_search_window_t1

0xeade,	// (0x000b1679) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x000b26b6) popup_blid2_search_window_t

0xa6f1,	// (0x000ad28c) main_browser_pane_g1

0xa3e4,	// (0x000acf7f) main_browser_pane_ParamLimits

0x953c,	// (0x000ac0d7) bg_button_pane_cp011_ParamLimits

0x5e68,	// (0x000a8a03) cell_vitu2_function_pane_g1_ParamLimits

0xd56a,	// (0x000b0105) bg_popup_sub_pane_cp22_ParamLimits

0x67b6,	// (0x000a9351) input_focus_pane_cp08_ParamLimits

0x67cd,	// (0x000a9368) popup_vitu2_query_button_pane_ParamLimits

0x67cd,	// (0x000a9368) popup_vitu2_query_button_pane

0x67de,	// (0x000a9379) popup_vitu2_query_input_button_pane

0xe6c1,	// (0x000b125c) popup_vitu2_query_window_g1_ParamLimits

0x67e8,	// (0x000a9383) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x000b25b7) popup_vitu2_query_window_g_ParamLimits

0x94d4,	// (0x000ac06f) bg_button_pane_cp026

0x6f40,	// (0x000a9adb) popup_vitu2_query_input_button_pane_g1

0x94d4,	// (0x000ac06f) bg_button_pane_cp025

0xeaec,	// (0x000b1687) popup_vitu2_query_button_pane_t1

0x444f,	// (0x000a6fea) main_mp3_pane_t6

0x445d,	// (0x000a6ff8) popup_slider_window_cp01

0x9fe6,	// (0x000acb81) cam4_battery_pane

0xa03f,	// (0x000acbda) cam4_battery_pane_cp02

0xa148,	// (0x000acce3) cam4_battery_pane_cp01

0xa148,	// (0x000acce3) cam4_battery_pane_cp03

0xe2ec,	// (0x000b0e87) cam4_battery_pane_g1

0xd972,	// (0x000b050d) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x000b26bb) cam4_battery_pane_g

0xd83e,	// (0x000b03d9) popup_blid_sat_info2_window_t11

0xbfb5,	// (0x000aeb50) aid_size_touch_mv_arrow_left_ParamLimits

0xbfde,	// (0x000aeb79) aid_size_touch_mv_arrow_right_ParamLimits

0xc03c,	// (0x000aebd7) navi_pane_g1_ParamLimits

0xc048,	// (0x000aebe3) navi_pane_g2_ParamLimits

0xc076,	// (0x000aec11) navi_pane_g3_ParamLimits

0xf3e5,	// (0x000b1f80) navi_pane_g_ParamLimits

0x27cd,	// (0x000a5368) navi_pane_mv_t1_ParamLimits

0x50cd,	// (0x000a7c68) grid_imed_effect_pane_ParamLimits

0x1425,	// (0x000a3fc0) aid_placing_vt_slider_lsc

0xa640,	// (0x000ad1db) aid_placing_vt_slider_prt

0xa7fa,	// (0x000ad395) bg_tb_trans_pane_cp01_ParamLimits

0xdafe,	// (0x000b0699) popup_image_details_window_g1_ParamLimits

0xdb11,	// (0x000b06ac) popup_image_details_window_g2_ParamLimits

0xdb26,	// (0x000b06c1) popup_image_details_window_g3_ParamLimits

0xdb26,	// (0x000b06c1) popup_image_details_window_g3

0xf718,	// (0x000b22b3) popup_image_details_window_g_ParamLimits

0xdb3a,	// (0x000b06d5) popup_image_details_window_t1_ParamLimits

0xdb4c,	// (0x000b06e7) popup_image_details_window_t2_ParamLimits

0xdb65,	// (0x000b0700) popup_image_details_window_t3_ParamLimits

0xdb79,	// (0x000b0714) popup_image_details_window_t4_ParamLimits

0xdb94,	// (0x000b072f) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x000b22ba) popup_image_details_window_t_ParamLimits

0x6b58,	// (0x000a96f3) cl_header_name_pane_ParamLimits

0x6b58,	// (0x000a96f3) cl_header_name_pane

0x6f48,	// (0x000a9ae3) cl_header_name_pane_t1_ParamLimits

0x6f48,	// (0x000a9ae3) cl_header_name_pane_t1

0x6f69,	// (0x000a9b04) cl_header_name_pane_t2_ParamLimits

0x6f69,	// (0x000a9b04) cl_header_name_pane_t2

0x6fab,	// (0x000a9b46) cl_header_name_pane_t3_ParamLimits

0x6fab,	// (0x000a9b46) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x000b26c0) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x000b26c0) cl_header_name_pane_t

0xc105,	// (0x000aeca0) navi_pane_mv_g2_ParamLimits

0xe3dd,	// (0x000b0f78) field_vitu2_entry_pane_g1_ParamLimits

0xe3e9,	// (0x000b0f84) field_vitu2_entry_pane_g2_ParamLimits

0xe3f5,	// (0x000b0f90) field_vitu2_entry_pane_g3_ParamLimits

0xe3f5,	// (0x000b0f90) field_vitu2_entry_pane_g3

0xf91b,	// (0x000b24b6) field_vitu2_entry_pane_g_ParamLimits

0xa0b7,	// (0x000acc52) cell_vitu2_itu_pane_g1_ParamLimits

0x5dfc,	// (0x000a8997) cell_vitu2_itu_pane_g2_ParamLimits

0x5dfc,	// (0x000a8997) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x000b24c2) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x000b24c2) cell_vitu2_itu_pane_g

0x953c,	// (0x000ac0d7) bg_vkb2_func_pane_cp05_ParamLimits

0x953c,	// (0x000ac0d7) bg_vkb2_func_pane_cp05

0x953c,	// (0x000ac0d7) bg_vkb2_func_pane_cp03

0x953c,	// (0x000ac0d7) bg_vkb2_func_pane_cp04

0x953c,	// (0x000ac0d7) bg_vkb2_func_pane_cp10_ParamLimits

0x953c,	// (0x000ac0d7) bg_vkb2_func_pane_cp10

0x6afe,	// (0x000a9699) bg_vkb2_func_pane_cp08

0x6ae4,	// (0x000a967f) bg_vkb2_func_pane_cp06

0x6af2,	// (0x000a968d) bg_vkb2_func_pane_cp07

0xe9fa,	// (0x000b1595) bg_vkb2_func_pane_cp11_ParamLimits

0xe9fa,	// (0x000b1595) bg_vkb2_func_pane_cp11

0xea0f,	// (0x000b15aa) bg_vkb2_func_pane_cp12_ParamLimits

0xea0f,	// (0x000b15aa) bg_vkb2_func_pane_cp12

0x94d4,	// (0x000ac06f) bg_vkb2_func_pane_cp09

0xe432,	// (0x000b0fcd) bg_vkb2_func_pane_g1

0xaeee,	// (0x000ada89) bg_vkb2_func_pane_g2

0xe43a,	// (0x000b0fd5) bg_vkb2_func_pane_g3

0xe442,	// (0x000b0fdd) bg_vkb2_func_pane_g4

0xe686,	// (0x000b1221) bg_vkb2_func_pane_g5

0xe45a,	// (0x000b0ff5) bg_vkb2_func_pane_g6

0xe462,	// (0x000b0ffd) bg_vkb2_func_pane_g7

0xe452,	// (0x000b0fed) bg_vkb2_func_pane_g8

0xa7e2,	// (0x000ad37d) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x000b26c7) bg_vkb2_func_pane_g

0x6e6c,	// (0x000a9a07) blid2_tripm_pane_g6_ParamLimits

0x6e6c,	// (0x000a9a07) blid2_tripm_pane_g6

0xe29e,	// (0x000b0e39) mp4_progress_pane_g1

0x6ee5,	// (0x000a9a80) blid2_tripm_values_pane_ParamLimits

0x6ee5,	// (0x000a9a80) blid2_tripm_values_pane

0x6fdc,	// (0x000a9b77) blid2_tripm_values_pane_t1

0x6fea,	// (0x000a9b85) blid2_tripm_values_pane_t2

0x6ff8,	// (0x000a9b93) blid2_tripm_values_pane_t3

0x7006,	// (0x000a9ba1) blid2_tripm_values_pane_t4

0x7014,	// (0x000a9baf) blid2_tripm_values_pane_t5

0x7022,	// (0x000a9bbd) blid2_tripm_values_pane_t6

0x7030,	// (0x000a9bcb) blid2_tripm_values_pane_t7

0x703e,	// (0x000a9bd9) blid2_tripm_values_pane_t8

0x704c,	// (0x000a9be7) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x000b26da) blid2_tripm_values_pane_t

0x1467,	// (0x000a4002) call_video_pane_t1_ParamLimits

0x1485,	// (0x000a4020) call_video_pane_t2_ParamLimits

0xf26e,	// (0x000b1e09) call_video_pane_t_ParamLimits

0x2cac,	// (0x000a5847) msg_header_pane_g1_ParamLimits

0xc2ed,	// (0x000aee88) msg_header_pane_g2_ParamLimits

0xc2ed,	// (0x000aee88) msg_header_pane_g2

0x0001,

0xf488,	// (0x000b2023) msg_header_pane_g_ParamLimits

0xf488,	// (0x000b2023) msg_header_pane_g

0xa3e4,	// (0x000acf7f) main_clock2_pane_ParamLimits

0x4dcb,	// (0x000a7966) grid_clock2_toolbar_pane_ParamLimits

0x4dcb,	// (0x000a7966) grid_clock2_toolbar_pane

0x4dcb,	// (0x000a7966) listscroll_clock2_pane_ParamLimits

0x4dcb,	// (0x000a7966) listscroll_clock2_pane

0x4ec2,	// (0x000a7a5d) main_clock2_pane_t3_ParamLimits

0x4ec2,	// (0x000a7a5d) main_clock2_pane_t3

0x4ee6,	// (0x000a7a81) main_clock2_pane_t4_ParamLimits

0x4ee6,	// (0x000a7a81) main_clock2_pane_t4

0xeafa,	// (0x000b1695) cell_clock2_toolbar_pane

0xeb02,	// (0x000b169d) cell_clock2_toolbar_pane_cp01

0xeb02,	// (0x000b169d) cell_clock2_toolbar_pane_cp02

0xeb0a,	// (0x000b16a5) cell_clock2_toolbar_pane_cp03

0xeb12,	// (0x000b16ad) list_clock2_pane

0xbf2b,	// (0x000aeac6) scroll_pane_cp10

0xeb1a,	// (0x000b16b5) list_single_clock2_pane_ParamLimits

0xeb1a,	// (0x000b16b5) list_single_clock2_pane

0xa5a9,	// (0x000ad144) list_highlight_pane_cp08

0xeb27,	// (0x000b16c2) list_single_clock2_pane_t1

0xeb35,	// (0x000b16d0) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x000b26ed) list_single_clock2_pane_t

0x94d4,	// (0x000ac06f) bg_button_pane_cp10

0xeb43,	// (0x000b16de) cell_clock2_toolbar_pane_g1

0x2d33,	// (0x000a58ce) aid_main_viewer_pane_g1_ParamLimits

0x2d33,	// (0x000a58ce) aid_main_viewer_pane_g1

0x2d41,	// (0x000a58dc) aid_main_viewer_pane_g2_ParamLimits

0x2d41,	// (0x000a58dc) aid_main_viewer_pane_g2

0x2d4f,	// (0x000a58ea) aid_main_viewer_pane_g3_ParamLimits

0x2d4f,	// (0x000a58ea) aid_main_viewer_pane_g3

0x2d5e,	// (0x000a58f9) aid_main_viewer_pane_g4_ParamLimits

0x2d5e,	// (0x000a58f9) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000b2034) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000b2034) aid_main_viewer_pane_g

0x3664,	// (0x000a61ff) main_calc_pane_ParamLimits

0x368a,	// (0x000a6225) main_dialer2_pane_ParamLimits

0x954a,	// (0x000ac0e5) main_cam6_pane

0x954a,	// (0x000ac0e5) main_vid6_pane

0x4dd7,	// (0x000a7972) listscroll_gen_pane_cp06_ParamLimits

0x4dd7,	// (0x000a7972) listscroll_gen_pane_cp06

0x4f09,	// (0x000a7aa4) main_clock2_pane_t5_ParamLimits

0x4f09,	// (0x000a7aa4) main_clock2_pane_t5

0x4f63,	// (0x000a7afe) aid_call2_pane_cp10_ParamLimits

0x4f75,	// (0x000a7b10) aid_call_pane_cp10_ParamLimits

0xbfa9,	// (0x000aeb44) popup_clock_analogue_window_cp10_g1_ParamLimits

0xbfa9,	// (0x000aeb44) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4f87,	// (0x000a7b22) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4f87,	// (0x000a7b22) popup_clock_analogue_window_cp10_g4_ParamLimits

0xbfa9,	// (0x000aeb44) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x000b236f) popup_clock_analogue_window_cp10_g_ParamLimits

0x4f99,	// (0x000a7b34) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5601,	// (0x000a819c) cell_dialer2_keypad_pane_g2_ParamLimits

0x5601,	// (0x000a819c) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x000b2455) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x000b2455) cell_dialer2_keypad_pane_g

0x561d,	// (0x000a81b8) cell_dialer2_keypad_pane_t1

0x6185,	// (0x000a8d20) main_cset_text2_pane_ParamLimits

0x6185,	// (0x000a8d20) main_cset_text2_pane

0xe8ad,	// (0x000b1448) area_vitu2_query_pane_g1_ParamLimits

0x6a83,	// (0x000a961e) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x000b260a) area_vitu2_query_pane_g_ParamLimits

0xe931,	// (0x000b14cc) area_vitu2_query_pane_t7_ParamLimits

0xe931,	// (0x000b14cc) area_vitu2_query_pane_t7

0x6ae4,	// (0x000a967f) bg_button_pane_cp018_ParamLimits

0x6af2,	// (0x000a968d) bg_button_pane_cp021_ParamLimits

0x6afe,	// (0x000a9699) bg_button_pane_cp022_ParamLimits

0x6afe,	// (0x000a9699) bg_vkb2_func_pane_cp08_ParamLimits

0x6ae4,	// (0x000a967f) bg_vkb2_func_pane_cp06_ParamLimits

0x6af2,	// (0x000a968d) bg_vkb2_func_pane_cp07_ParamLimits

0x6b0d,	// (0x000a96a8) input_focus_pane_cp09_ParamLimits

0xa1b2,	// (0x000acd4d) cam6_autofocus_pane_ParamLimits

0xa1b2,	// (0x000acd4d) cam6_autofocus_pane

0x705a,	// (0x000a9bf5) cam6_image_uncrop_pane_ParamLimits

0x705a,	// (0x000a9bf5) cam6_image_uncrop_pane

0x7069,	// (0x000a9c04) cam6_indi_pane_ParamLimits

0x7069,	// (0x000a9c04) cam6_indi_pane

0x707f,	// (0x000a9c1a) cam6_mode_pane_ParamLimits

0x707f,	// (0x000a9c1a) cam6_mode_pane

0x7091,	// (0x000a9c2c) cam6_timer_pane_ParamLimits

0x7091,	// (0x000a9c2c) cam6_timer_pane

0x709d,	// (0x000a9c38) cam6_zoom_pane_ParamLimits

0x709d,	// (0x000a9c38) cam6_zoom_pane

0x70a9,	// (0x000a9c44) cam6_mode_pane_g1_ParamLimits

0x70a9,	// (0x000a9c44) cam6_mode_pane_g1

0x70b9,	// (0x000a9c54) cam6_mode_pane_g2_ParamLimits

0x70b9,	// (0x000a9c54) cam6_mode_pane_g2

0x70c9,	// (0x000a9c64) cam6_mode_pane_g3_ParamLimits

0x70c9,	// (0x000a9c64) cam6_mode_pane_g3

0x70d9,	// (0x000a9c74) cam6_mode_pane_g4_ParamLimits

0x70d9,	// (0x000a9c74) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x000b26f2) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x000b26f2) cam6_mode_pane_g

0xeb4b,	// (0x000b16e6) bg_tb_trans_pane_cp08_ParamLimits

0xeb4b,	// (0x000b16e6) bg_tb_trans_pane_cp08

0xeb59,	// (0x000b16f4) cam6_battery_pane_ParamLimits

0xeb59,	// (0x000b16f4) cam6_battery_pane

0xeb6f,	// (0x000b170a) cam6_indi_pane_g1_ParamLimits

0xeb6f,	// (0x000b170a) cam6_indi_pane_g1

0xeb81,	// (0x000b171c) cam6_indi_pane_g2_ParamLimits

0xeb81,	// (0x000b171c) cam6_indi_pane_g2

0xeb93,	// (0x000b172e) cam6_indi_pane_g3_ParamLimits

0xeb93,	// (0x000b172e) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x000b26fb) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x000b26fb) cam6_indi_pane_g

0xeba5,	// (0x000b1740) cam6_indi_pane_t1_ParamLimits

0xeba5,	// (0x000b1740) cam6_indi_pane_t1

0x70e9,	// (0x000a9c84) cam6_autofocus_pane_g1

0x70f1,	// (0x000a9c8c) cam6_autofocus_pane_g2

0x70f9,	// (0x000a9c94) cam6_autofocus_pane_g3

0x7101,	// (0x000a9c9c) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x000b2702) cam6_autofocus_pane_g

0xebcb,	// (0x000b1766) cam6_timer_pane_g1

0xebd3,	// (0x000b176e) cam6_timer_pane_t1

0xebe1,	// (0x000b177c) cam6_zoom_cont_pane

0xebe9,	// (0x000b1784) cam6_zoom_pane_g1

0xebf1,	// (0x000b178c) cam6_zoom_pane_g2

0x7109,	// (0x000a9ca4) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x000b270b) cam6_zoom_pane_g

0xd972,	// (0x000b050d) cam6_battery_pane_g1

0xd972,	// (0x000b050d) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x000b2277) cam6_battery_pane_g

0xebf9,	// (0x000b1794) cam6_zoom_cont_pane_g1

0xec02,	// (0x000b179d) cam6_zoom_cont_pane_g2

0xec0b,	// (0x000b17a6) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x000b2712) cam6_zoom_cont_pane_g

0x7126,	// (0x000a9cc1) cam6_mode_pane_cp_ParamLimits

0x7126,	// (0x000a9cc1) cam6_mode_pane_cp

0x7138,	// (0x000a9cd3) cam6_zoom_pane_cp_ParamLimits

0x7138,	// (0x000a9cd3) cam6_zoom_pane_cp

0x7144,	// (0x000a9cdf) vid6_image_uncrop_cif_pane_ParamLimits

0x7144,	// (0x000a9cdf) vid6_image_uncrop_cif_pane

0x7154,	// (0x000a9cef) vid6_image_uncrop_nhd_pane_ParamLimits

0x7154,	// (0x000a9cef) vid6_image_uncrop_nhd_pane

0x7163,	// (0x000a9cfe) vid6_image_uncrop_vga_pane_ParamLimits

0x7163,	// (0x000a9cfe) vid6_image_uncrop_vga_pane

0x7172,	// (0x000a9d0d) vid6_image_uncrop_wvga_pane_ParamLimits

0x7172,	// (0x000a9d0d) vid6_image_uncrop_wvga_pane

0x7181,	// (0x000a9d1c) vid6_indi_pane_ParamLimits

0x7181,	// (0x000a9d1c) vid6_indi_pane

0xeb4b,	// (0x000b16e6) bg_tb_trans_pane_cp09_ParamLimits

0xeb4b,	// (0x000b16e6) bg_tb_trans_pane_cp09

0xec23,	// (0x000b17be) cam6_battery_pane_cp_ParamLimits

0xec23,	// (0x000b17be) cam6_battery_pane_cp

0xec2f,	// (0x000b17ca) vid6_indi_pane_g1_ParamLimits

0xec2f,	// (0x000b17ca) vid6_indi_pane_g1

0xec41,	// (0x000b17dc) vid6_indi_pane_g2_ParamLimits

0xec41,	// (0x000b17dc) vid6_indi_pane_g2

0xec53,	// (0x000b17ee) vid6_indi_pane_g3_ParamLimits

0xec53,	// (0x000b17ee) vid6_indi_pane_g3

0xefc5,	// (0x000b1b60) vid6_indi_pane_g4_ParamLimits

0xefc5,	// (0x000b1b60) vid6_indi_pane_g4

0xefda,	// (0x000b1b75) vid6_indi_pane_g5_ParamLimits

0xefda,	// (0x000b1b75) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x000b2719) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x000b2719) vid6_indi_pane_g

0xeff4,	// (0x000b1b8f) vid6_indi_pane_t1_ParamLimits

0xeff4,	// (0x000b1b8f) vid6_indi_pane_t1

0xf00a,	// (0x000b1ba5) vid6_indi_pane_t2_ParamLimits

0xf00a,	// (0x000b1ba5) vid6_indi_pane_t2

0xf032,	// (0x000b1bcd) vid6_indi_pane_t3_ParamLimits

0xf032,	// (0x000b1bcd) vid6_indi_pane_t3

0xf05a,	// (0x000b1bf5) vid6_indi_pane_t4_ParamLimits

0xf05a,	// (0x000b1bf5) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x000b2724) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x000b2724) vid6_indi_pane_t

0xa811,	// (0x000ad3ac) wait_bar_pane_cp08

0x7199,	// (0x000a9d34) main_cset_text2_pane_t1_ParamLimits

0x7199,	// (0x000a9d34) main_cset_text2_pane_t1

0x7111,	// (0x000a9cac) listscroll_gen_pane_cp06_t1_ParamLimits

0x7111,	// (0x000a9cac) listscroll_gen_pane_cp06_t1

0x954a,	// (0x000ac0e5) main_cam6_set_pane

0x9fd8,	// (0x000acb73) bg_tb_trans_pane_cp06_ParamLimits

0x9fee,	// (0x000acb89) cam4_indicators_pane_g1_ParamLimits

0x9fff,	// (0x000acb9a) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x000b2492) cam4_indicators_pane_g_ParamLimits

0xa01d,	// (0x000acbb8) cam4_indicators_pane_t1_ParamLimits

0x953c,	// (0x000ac0d7) bg_tb_trans_pane_cp07_ParamLimits

0xa049,	// (0x000acbe4) vid4_indicators_pane_g1_ParamLimits

0xa05d,	// (0x000acbf8) vid4_indicators_pane_g2_ParamLimits

0xa071,	// (0x000acc0c) vid4_indicators_pane_g3_ParamLimits

0xa082,	// (0x000acc1d) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x000b24a4) vid4_indicators_pane_g_ParamLimits

0xa0a0,	// (0x000acc3b) vid4_indicators_pane_t1_ParamLimits

0xa150,	// (0x000acceb) vid4_progress_pane_g1_ParamLimits

0xa160,	// (0x000accfb) vid4_progress_pane_g2_ParamLimits

0x6c48,	// (0x000a97e3) vid4_progress_pane_g3_ParamLimits

0xa170,	// (0x000acd0b) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x000b2655) vid4_progress_pane_g_ParamLimits

0x6c5a,	// (0x000a97f5) vid4_progress_pane_t1_ParamLimits

0xa188,	// (0x000acd23) vid4_progress_pane_t2_ParamLimits

0xa19d,	// (0x000acd38) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x000b2660) vid4_progress_pane_t_ParamLimits

0x6c72,	// (0x000a980d) wait_bar_pane_cp07_ParamLimits

0x71b6,	// (0x000a9d51) main_cam6_set_pane_g2_ParamLimits

0x71b6,	// (0x000a9d51) main_cam6_set_pane_g2

0x71da,	// (0x000a9d75) main_cset6_listscroll_pane_ParamLimits

0x71da,	// (0x000a9d75) main_cset6_listscroll_pane

0x71fa,	// (0x000a9d95) main_cset6_slider_pane_ParamLimits

0x71fa,	// (0x000a9d95) main_cset6_slider_pane

0x7210,	// (0x000a9dab) main_cset6_text2_pane_ParamLimits

0x7210,	// (0x000a9dab) main_cset6_text2_pane

0xa820,	// (0x000ad3bb) main_cset6_text_pane

0xa828,	// (0x000ad3c3) main_cset_list_pane_copy1_ParamLimits

0xa828,	// (0x000ad3c3) main_cset_list_pane_copy1

0xa838,	// (0x000ad3d3) scroll_pane_cp028_copy1

0x721e,	// (0x000a9db9) cset_list_set_pane_copy1

0x722f,	// (0x000a9dca) aid_position_infowindow_above_copy1

0x7237,	// (0x000a9dd2) aid_position_infowindow_below_copy1

0x723f,	// (0x000a9dda) cset_list_set_pane_g1_copy1

0x7247,	// (0x000a9de2) cset_list_set_pane_g3_copy1_ParamLimits

0x7247,	// (0x000a9de2) cset_list_set_pane_g3_copy1

0x7256,	// (0x000a9df1) cset_list_set_pane_t1_copy1_ParamLimits

0x7256,	// (0x000a9df1) cset_list_set_pane_t1_copy1

0xa7fa,	// (0x000ad395) list_highlight_pane_cp021_copy1_ParamLimits

0xa7fa,	// (0x000ad395) list_highlight_pane_cp021_copy1

0xa841,	// (0x000ad3dc) cset6_slider_pane_ParamLimits

0xa841,	// (0x000ad3dc) cset6_slider_pane

0xa86d,	// (0x000ad408) main_cset6_slider_pane_g1_ParamLimits

0xa86d,	// (0x000ad408) main_cset6_slider_pane_g1

0x726b,	// (0x000a9e06) main_cset6_slider_pane_g2_ParamLimits

0x726b,	// (0x000a9e06) main_cset6_slider_pane_g2

0xa895,	// (0x000ad430) main_cset6_slider_pane_g3_ParamLimits

0xa895,	// (0x000ad430) main_cset6_slider_pane_g3

0x7293,	// (0x000a9e2e) main_cset6_slider_pane_g4_ParamLimits

0x7293,	// (0x000a9e2e) main_cset6_slider_pane_g4

0x729f,	// (0x000a9e3a) main_cset6_slider_pane_g5_ParamLimits

0x729f,	// (0x000a9e3a) main_cset6_slider_pane_g5

0xe561,	// (0x000b10fc) main_cset6_slider_pane_g7_ParamLimits

0xe561,	// (0x000b10fc) main_cset6_slider_pane_g7

0xe56d,	// (0x000b1108) main_cset6_slider_pane_g8_ParamLimits

0xe56d,	// (0x000b1108) main_cset6_slider_pane_g8

0x6232,	// (0x000a8dcd) main_cset6_slider_pane_g9_ParamLimits

0x6232,	// (0x000a8dcd) main_cset6_slider_pane_g9

0x623e,	// (0x000a8dd9) main_cset6_slider_pane_g10_ParamLimits

0x623e,	// (0x000a8dd9) main_cset6_slider_pane_g10

0x624a,	// (0x000a8de5) main_cset6_slider_pane_g11_ParamLimits

0x624a,	// (0x000a8de5) main_cset6_slider_pane_g11

0x6256,	// (0x000a8df1) main_cset6_slider_pane_g12_ParamLimits

0x6256,	// (0x000a8df1) main_cset6_slider_pane_g12

0x6262,	// (0x000a8dfd) main_cset6_slider_pane_g13_ParamLimits

0x6262,	// (0x000a8dfd) main_cset6_slider_pane_g13

0x626e,	// (0x000a8e09) main_cset6_slider_pane_g14_ParamLimits

0x626e,	// (0x000a8e09) main_cset6_slider_pane_g14

0x72ab,	// (0x000a9e46) main_cset6_slider_pane_g15_ParamLimits

0x72ab,	// (0x000a9e46) main_cset6_slider_pane_g15

0x6292,	// (0x000a8e2d) main_cset6_slider_pane_g16_ParamLimits

0x6292,	// (0x000a8e2d) main_cset6_slider_pane_g16

0x629e,	// (0x000a8e39) main_cset6_slider_pane_g17_ParamLimits

0x629e,	// (0x000a8e39) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x000b272d) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x000b272d) main_cset6_slider_pane_g

0xa8a1,	// (0x000ad43c) main_cset6_slider_pane_t1_ParamLimits

0xa8a1,	// (0x000ad43c) main_cset6_slider_pane_t1

0x72db,	// (0x000a9e76) main_cset6_slider_pane_t2_ParamLimits

0x72db,	// (0x000a9e76) main_cset6_slider_pane_t2

0x7306,	// (0x000a9ea1) main_cset6_slider_pane_t3_ParamLimits

0x7306,	// (0x000a9ea1) main_cset6_slider_pane_t3

0x7331,	// (0x000a9ecc) main_cset6_slider_pane_t4_ParamLimits

0x7331,	// (0x000a9ecc) main_cset6_slider_pane_t4

0x735c,	// (0x000a9ef7) main_cset6_slider_pane_t5_ParamLimits

0x735c,	// (0x000a9ef7) main_cset6_slider_pane_t5

0xa8e2,	// (0x000ad47d) main_cset6_slider_pane_t7_ParamLimits

0xa8e2,	// (0x000ad47d) main_cset6_slider_pane_t7

0x7387,	// (0x000a9f22) main_cset6_slider_pane_t8_ParamLimits

0x7387,	// (0x000a9f22) main_cset6_slider_pane_t8

0x73ab,	// (0x000a9f46) main_cset6_slider_pane_t9_ParamLimits

0x73ab,	// (0x000a9f46) main_cset6_slider_pane_t9

0x73cf,	// (0x000a9f6a) main_cset6_slider_pane_t10_ParamLimits

0x73cf,	// (0x000a9f6a) main_cset6_slider_pane_t10

0x73f3,	// (0x000a9f8e) main_cset6_slider_pane_t11_ParamLimits

0x73f3,	// (0x000a9f8e) main_cset6_slider_pane_t11

0xa918,	// (0x000ad4b3) main_cset6_slider_pane_t14_ParamLimits

0xa918,	// (0x000ad4b3) main_cset6_slider_pane_t14

0xa951,	// (0x000ad4ec) main_cset6_slider_pane_t15_ParamLimits

0xa951,	// (0x000ad4ec) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x000b2752) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x000b2752) main_cset6_slider_pane_t

0xec68,	// (0x000b1803) cset_slider_pane_g1_copy1

0xec71,	// (0x000b180c) cset_slider_pane_g2_copy1

0xec7a,	// (0x000b1815) cset_slider_pane_g3_copy1

0x94d4,	// (0x000ac06f) bg_popup_sub_pane_cp011_copy1

0xa98a,	// (0x000ad525) main_cset_text_pane_g1_copy1

0xe6d5,	// (0x000b1270) main_cset_text_pane_t1_copy1

0xe6e3,	// (0x000b127e) main_cset_text_pane_t2_copy1

0xe6f1,	// (0x000b128c) main_cset_text_pane_t3_copy1

0xe6ff,	// (0x000b129a) main_cset_text_pane_t4_copy1

0xe70d,	// (0x000b12a8) main_cset_text_pane_t5_copy1

0xa992,	// (0x000ad52d) main_cset_text_pane_t6_copy1

0xa9a0,	// (0x000ad53b) main_cset_text_pane_t7_copy1

0x7199,	// (0x000a9d34) main_cset_text2_pane_t1_copy1

0x953c,	// (0x000ac0d7) main_ncimui_pane

0x38d4,	// (0x000a646f) popup_query_ncimui_window_ParamLimits

0x38d4,	// (0x000a646f) popup_query_ncimui_window

0xdc43,	// (0x000b07de) field_cale_ev2_pane_g4_ParamLimits

0xdc43,	// (0x000b07de) field_cale_ev2_pane_g4

0x54e1,	// (0x000a807c) cell_video_dialer_keypad_pane_g2_ParamLimits

0x54e1,	// (0x000a807c) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x000b2430) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x000b2430) cell_video_dialer_keypad_pane_g

0x54f9,	// (0x000a8094) cell_video_dialer_keypad_pane_t1

0x94d4,	// (0x000ac06f) bg_popup_window_pane_cp012

0xbdf8,	// (0x000ae993) heading_pane_cp06

0xa9cc,	// (0x000ad567) ncim_query_content_pane

0x94d4,	// (0x000ac06f) bg_popup_heading_pane_cp01

0xa9d4,	// (0x000ad56f) ncim_heading_pane_t1

0xa9e2,	// (0x000ad57d) ncim_indicator_popup_pane

0xa9f4,	// (0x000ad58f) ncim_query_button_pane

0xaa08,	// (0x000ad5a3) ncim_query_content_pane_t1

0xaa1a,	// (0x000ad5b5) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x000b2796) ncim_query_content_pane_t

0xaa54,	// (0x000ad5ef) ncim_query_list_pane

0xaa66,	// (0x000ad601) ncim_query_popup_pane

0xa9e2,	// (0x000ad57d) ncim_indicator_popup_pane_ParamLimits

0x7618,	// (0x000aa1b3) ncim_query_content_pane_g1_ParamLimits

0x7618,	// (0x000aa1b3) ncim_query_content_pane_g1

0xaa08,	// (0x000ad5a3) ncim_query_content_pane_t1_ParamLimits

0xaa1a,	// (0x000ad5b5) ncim_query_content_pane_t2_ParamLimits

0x7624,	// (0x000aa1bf) ncim_query_content_pane_t3_ParamLimits

0x7624,	// (0x000aa1bf) ncim_query_content_pane_t3

0x764c,	// (0x000aa1e7) ncim_query_content_pane_t4_ParamLimits

0x764c,	// (0x000aa1e7) ncim_query_content_pane_t4

0x7674,	// (0x000aa20f) ncim_query_content_pane_t5_ParamLimits

0x7674,	// (0x000aa20f) ncim_query_content_pane_t5

0xaa2c,	// (0x000ad5c7) ncim_query_content_pane_t6_ParamLimits

0xaa2c,	// (0x000ad5c7) ncim_query_content_pane_t6

0xfbfb,	// (0x000b2796) ncim_query_content_pane_t_ParamLimits

0xaa54,	// (0x000ad5ef) ncim_query_list_pane_ParamLimits

0xaa66,	// (0x000ad601) ncim_query_popup_pane_ParamLimits

0xaa7a,	// (0x000ad615) wait_bar_pane_cp04

0x94d4,	// (0x000ac06f) input_focus_pane_cp011

0xaa82,	// (0x000ad61d) ncim_query_popup_pane_t1

0xaa90,	// (0x000ad62b) ncim_list_query_list_pane_ParamLimits

0xaa90,	// (0x000ad62b) ncim_list_query_list_pane

0x94d4,	// (0x000ac06f) bg_button_pane_cp027

0xaa9d,	// (0x000ad638) ncim_query_button_pane_g1

0x94d4,	// (0x000ac06f) list_highlight_pane_cp012

0xaaa7,	// (0x000ad642) ncim_list_query_list_pane_g1

0xaaaf,	// (0x000ad64a) ncim_list_query_list_pane_t1

0xa00e,	// (0x000acba9) cam4_indicators_pane_g3_ParamLimits

0xa00e,	// (0x000acba9) cam4_indicators_pane_g3

0xa08e,	// (0x000acc29) vid4_indicators_pane_g5_ParamLimits

0xa08e,	// (0x000acc29) vid4_indicators_pane_g5

0xa17c,	// (0x000acd17) vid4_progress_pane_g5_ParamLimits

0xa17c,	// (0x000acd17) vid4_progress_pane_g5

0x7503,	// (0x000aa09e) main_ncimui_pane_g1

0x756c,	// (0x000aa107) ncimui_group_query_pane_ParamLimits

0x756c,	// (0x000aa107) ncimui_group_query_pane

0x75b4,	// (0x000aa14f) ncimui_list_pane_ParamLimits

0x75b4,	// (0x000aa14f) ncimui_list_pane

0x75db,	// (0x000aa176) ncimui_text_pane_ParamLimits

0x75db,	// (0x000aa176) ncimui_text_pane

0x769c,	// (0x000aa237) ncimui_text_pane_t1_ParamLimits

0x769c,	// (0x000aa237) ncimui_text_pane_t1

0xaabd,	// (0x000ad658) ncimui_list_single_graphic_pane_ParamLimits

0xaabd,	// (0x000ad658) ncimui_list_single_graphic_pane

0x76ba,	// (0x000aa255) ncimui_query_pane_ParamLimits

0x76ba,	// (0x000aa255) ncimui_query_pane

0x94d4,	// (0x000ac06f) list_highlight_pane_cp013

0xaacd,	// (0x000ad668) ncim_list_query_list_pane_t1_copy1

0xaaa7,	// (0x000ad642) ncim_list_single_graphic_pane_g1

0x76cd,	// (0x000aa268) ncim_query_button_pane_cp01

0x76d9,	// (0x000aa274) ncim_query_entry_pane_ParamLimits

0x76d9,	// (0x000aa274) ncim_query_entry_pane

0x76ec,	// (0x000aa287) ncimui_query_pane_g1

0x76f8,	// (0x000aa293) ncimui_query_pane_t1_ParamLimits

0x76f8,	// (0x000aa293) ncimui_query_pane_t1

0xa7fa,	// (0x000ad395) input_focus_pane_cp012

0xaadb,	// (0x000ad676) ncim_query_entry_pane_t1

0xa3e4,	// (0x000acf7f) main_im_pane_ParamLimits

0x953c,	// (0x000ac0d7) main_mobtv_pane_ParamLimits

0x953c,	// (0x000ac0d7) main_mobtv_pane

0x72c3,	// (0x000a9e5e) main_cset6_slider_pane_g18_ParamLimits

0x72c3,	// (0x000a9e5e) main_cset6_slider_pane_g18

0x72cf,	// (0x000a9e6a) main_cset6_slider_pane_g19_ParamLimits

0x72cf,	// (0x000a9e6a) main_cset6_slider_pane_g19

0x7711,	// (0x000aa2ac) bg_main_mobtv_pane_ParamLimits

0x7711,	// (0x000aa2ac) bg_main_mobtv_pane

0x771f,	// (0x000aa2ba) main_mobtv_info_pane

0x7728,	// (0x000aa2c3) main_mobtv_loading_pane_ParamLimits

0x7728,	// (0x000aa2c3) main_mobtv_loading_pane

0xaaed,	// (0x000ad688) main_mobtv_pg_channel_list_pane

0xaaf7,	// (0x000ad692) main_mobtv_pg_hdr_pane

0x7735,	// (0x000aa2d0) main_mobtv_programe_curr_pane_ParamLimits

0x7735,	// (0x000aa2d0) main_mobtv_programe_curr_pane

0x7742,	// (0x000aa2dd) main_mobtv_programe_next_pane_ParamLimits

0x7742,	// (0x000aa2dd) main_mobtv_programe_next_pane

0xab00,	// (0x000ad69b) popup_mobtv_noti_window

0xd972,	// (0x000b050d) main_tv_pg_hdr_pane_g1

0xab08,	// (0x000ad6a3) main_tv_pg_hdr_pane_g2

0xab10,	// (0x000ad6ab) main_tv_pg_hdr_pane_g3

0xab18,	// (0x000ad6b3) main_tv_pg_hdr_pane_g4

0xab20,	// (0x000ad6bb) main_tv_pg_hdr_pane_g5

0xab2a,	// (0x000ad6c5) main_tv_pg_hdr_pane_g6

0xab34,	// (0x000ad6cf) main_tv_pg_hdr_pane_g7

0xab3e,	// (0x000ad6d9) main_tv_pg_hdr_pane_g8

0xab48,	// (0x000ad6e3) main_tv_pg_hdr_pane_g9

0xab52,	// (0x000ad6ed) main_tv_pg_hdr_pane_g10

0xab5c,	// (0x000ad6f7) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x000b27a3) main_tv_pg_hdr_pane_g

0xab66,	// (0x000ad701) main_tv_pg_hdr_pane_t1

0xab74,	// (0x000ad70f) main_tv_pg_hdr_pane_t2

0xab82,	// (0x000ad71d) main_tv_pg_hdr_pane_t3

0xab92,	// (0x000ad72d) main_tv_pg_hdr_pane_t4

0xaba2,	// (0x000ad73d) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x000b27ba) main_tv_pg_hdr_pane_t

0xabb2,	// (0x000ad74d) single_mobtv_pg_channel_pane_ParamLimits

0xabb2,	// (0x000ad74d) single_mobtv_pg_channel_pane

0xabc4,	// (0x000ad75f) single_mobtv_pg_channel_table_pane

0xabcd,	// (0x000ad768) single_mobtv_pg_channel_thumb_pane

0xabd6,	// (0x000ad771) single_tv_pg_channel_pane_g1

0xabdf,	// (0x000ad77a) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x000b27c5) single_tv_pg_channel_pane_g

0xdbde,	// (0x000b0779) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xdbde,	// (0x000b0779) bg_single_mobtv_pg_channel_thumb_pane

0xabe8,	// (0x000ad783) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xabe8,	// (0x000ad783) single_mobtv_pg_channel_thumb_pane_g1

0xabf6,	// (0x000ad791) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xabf6,	// (0x000ad791) single_mobtv_pg_channel_thumb_pane_g2

0xac02,	// (0x000ad79d) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xac02,	// (0x000ad79d) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x000b27ca) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x000b27ca) single_mobtv_pg_channel_thumb_pane_g

0xac0e,	// (0x000ad7a9) single_mobtv_pg_channel_thumb_pane_t1

0xac1c,	// (0x000ad7b7) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x000b27d1) single_mobtv_pg_channel_thumb_pane_t

0xd972,	// (0x000b050d) bg_single_mobtv_pg_channel_table_pane_g1

0xd972,	// (0x000b050d) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x000b2277) bg_single_mobtv_pg_channel_table_pane_g

0xac2a,	// (0x000ad7c5) single_mobtv_pg_channel_table_pane_t1

0xac38,	// (0x000ad7d3) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x000b27d6) single_mobtv_pg_channel_table_pane_t

0x7757,	// (0x000aa2f2) main_mobtv_info_pane_g1_ParamLimits

0x7757,	// (0x000aa2f2) main_mobtv_info_pane_g1

0x7775,	// (0x000aa310) main_mobtv_info_pane_t1_ParamLimits

0x7775,	// (0x000aa310) main_mobtv_info_pane_t1

0x77ed,	// (0x000aa388) main_mobtv_info_pane_t2_ParamLimits

0x77ed,	// (0x000aa388) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x000b27e0) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x000b27e0) main_mobtv_info_pane_t

0x787c,	// (0x000aa417) wait_bar_pane_cp05

0x788e,	// (0x000aa429) main_mobtv_loading_pane_g1_ParamLimits

0x788e,	// (0x000aa429) main_mobtv_loading_pane_g1

0x78a1,	// (0x000aa43c) main_mobtv_loading_pane_g2_ParamLimits

0x78a1,	// (0x000aa43c) main_mobtv_loading_pane_g2

0x78ad,	// (0x000aa448) main_mobtv_loading_pane_g3_ParamLimits

0x78ad,	// (0x000aa448) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x000b27e7) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x000b27e7) main_mobtv_loading_pane_g

0xac46,	// (0x000ad7e1) main_mobtv_loading_pane_t1_ParamLimits

0xac46,	// (0x000ad7e1) main_mobtv_loading_pane_t1

0xac5e,	// (0x000ad7f9) main_mobtv_loading_pane_t2_ParamLimits

0xac5e,	// (0x000ad7f9) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x000b27ee) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x000b27ee) main_mobtv_loading_pane_t

0x78c0,	// (0x000aa45b) wait_bar_pane_cp06_ParamLimits

0x78c0,	// (0x000aa45b) wait_bar_pane_cp06

0xac82,	// (0x000ad81d) main_mobtv_programe_curr_pane_t1

0xac90,	// (0x000ad82b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x000b27f3) main_mobtv_programe_curr_pane_t

0xac9e,	// (0x000ad839) main_mobtv_programe_next_pane_t1

0xacac,	// (0x000ad847) main_mobtv_programe_next_pane_t2

0xacba,	// (0x000ad855) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x000b27f8) main_mobtv_programe_next_pane_t

0x94d4,	// (0x000ac06f) bg_popup_mobtv_noti_window_pane

0xacc8,	// (0x000ad863) popup_mobtv_noti_window_g1

0xacd0,	// (0x000ad86b) popup_mobtv_noti_window_t1

0xacde,	// (0x000ad879) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x000b27ff) popup_mobtv_noti_window_t

0xd972,	// (0x000b050d) bg_popup_mobtv_noti_window_pane_g1

0x954a,	// (0x000ac0e5) sc_clock_pane

0x954a,	// (0x000ac0e5) main_fs_bigclock_pane

0x6ecf,	// (0x000a9a6a) blid2_tripm_pane_t4_ParamLimits

0x6ecf,	// (0x000a9a6a) blid2_tripm_pane_t4

0x78cf,	// (0x000aa46a) sc_clock_pane_g1_ParamLimits

0x78cf,	// (0x000aa46a) sc_clock_pane_g1

0x78e1,	// (0x000aa47c) sc_clock_pane_t1_ParamLimits

0x78e1,	// (0x000aa47c) sc_clock_pane_t1

0x7903,	// (0x000aa49e) sc_clock_pane_t2_ParamLimits

0x7903,	// (0x000aa49e) sc_clock_pane_t2

0x791b,	// (0x000aa4b6) sc_clock_pane_t3_ParamLimits

0x791b,	// (0x000aa4b6) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x000b2804) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x000b2804) sc_clock_pane_t

0x895e,	// (0x000ab4f9) main_fs_bigclock_indicator_pane_ParamLimits

0x895e,	// (0x000ab4f9) main_fs_bigclock_indicator_pane

0x79c1,	// (0x000aa55c) main_fs_bigclock_pane_g1_ParamLimits

0x79c1,	// (0x000aa55c) main_fs_bigclock_pane_g1

0x896a,	// (0x000ab505) main_fs_bigclock_pane_t1_ParamLimits

0x896a,	// (0x000ab505) main_fs_bigclock_pane_t1

0x897c,	// (0x000ab517) main_fs_bigclock_pane_t2_ParamLimits

0x897c,	// (0x000ab517) main_fs_bigclock_pane_t2

0x8990,	// (0x000ab52b) main_fs_bigclock_pane_t3_ParamLimits

0x8990,	// (0x000ab52b) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x000b2a0e) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x000b2a0e) main_fs_bigclock_pane_t

0xb7c7,	// (0x000ae362) main_fs_bigclock_indicator_pane_g1

0xa9fc,	// (0x000ad597) ncim_query_content_pane_g2_ParamLimits

0xa9fc,	// (0x000ad597) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x000b2791) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x000b2791) ncim_query_content_pane_g

0x7934,	// (0x000aa4cf) sc_clock_pane_t4_ParamLimits

0x7934,	// (0x000aa4cf) sc_clock_pane_t4

0x953c,	// (0x000ac0d7) main_radioblah_pane

0x9f72,	// (0x000acb0d) cell_call4_button_pane_t1_copy1_ParamLimits

0x9f72,	// (0x000acb0d) cell_call4_button_pane_t1_copy1

0x751b,	// (0x000aa0b6) main_ncimui_pane_t1_ParamLimits

0x751b,	// (0x000aa0b6) main_ncimui_pane_t1

0x7535,	// (0x000aa0d0) main_ncimui_pane_t2_ParamLimits

0x7535,	// (0x000aa0d0) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x000b278a) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x000b278a) main_ncimui_pane_t

0xae23,	// (0x000ad9be) main_radioblah_anim_pane_ParamLimits

0xae23,	// (0x000ad9be) main_radioblah_anim_pane

0xae34,	// (0x000ad9cf) main_radioblah_info_pane_ParamLimits

0xae34,	// (0x000ad9cf) main_radioblah_info_pane

0xae48,	// (0x000ad9e3) main_radioblah_pane_t1_ParamLimits

0xae48,	// (0x000ad9e3) main_radioblah_pane_t1

0xae64,	// (0x000ad9ff) main_radioblah_pane_t2_ParamLimits

0xae64,	// (0x000ad9ff) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x000b2825) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x000b2825) main_radioblah_pane_t

0x7a20,	// (0x000aa5bb) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7a20,	// (0x000aa5bb) main_radioblah_rocker_ctrl_pane

0xaeac,	// (0x000ada47) main_radioblah_info_pane_t1_ParamLimits

0xaeac,	// (0x000ada47) main_radioblah_info_pane_t1

0x7a78,	// (0x000aa613) main_radioblah_info_pane_t2_ParamLimits

0x7a78,	// (0x000aa613) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x000b282e) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x000b282e) main_radioblah_info_pane_t

0xd972,	// (0x000b050d) main_radioblah_rocker_ctrl_pane_g1

0x7b28,	// (0x000aa6c3) main_radioblah_rocker_ctrl_pane_g2

0x7b30,	// (0x000aa6cb) main_radioblah_rocker_ctrl_pane_g3

0x7b38,	// (0x000aa6d3) main_radioblah_rocker_ctrl_pane_g4

0x7b40,	// (0x000aa6db) main_radioblah_rocker_ctrl_pane_g5

0x7b48,	// (0x000aa6e3) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x000b2837) main_radioblah_rocker_ctrl_pane_g

0x7199,	// (0x000a9d34) main_cset_text2_pane_t1_copy1_ParamLimits

0x9fd0,	// (0x000acb6b) cam4_image_uncrop_qvga_pane

0xa037,	// (0x000acbd2) vid4_image_uncrop_qcif_pane

0xa1b2,	// (0x000acd4d) cam6_image_uncrop_qvga_pane_ParamLimits

0xa1b2,	// (0x000acd4d) cam6_image_uncrop_qvga_pane

0xec13,	// (0x000b17ae) vid6_image_uncrop_qcif_pane_ParamLimits

0xec13,	// (0x000b17ae) vid6_image_uncrop_qcif_pane

0x94d4,	// (0x000ac06f) bg_popup_preview_window_pane_cp03

0xa9ae,	// (0x000ad549) list_cset_text2_pane

0xa9b6,	// (0x000ad551) main_cset6_text2_pane_g1

0xa9be,	// (0x000ad559) main_cset6_text2_pane_t1

0x7b50,	// (0x000aa6eb) list_cset_text2_pane_t1_ParamLimits

0x7b50,	// (0x000aa6eb) list_cset_text2_pane_t1

0x953c,	// (0x000ac0d7) main_radioblah_pane_ParamLimits

0x7868,	// (0x000aa403) main_mobtv_info_pane_t3_ParamLimits

0x7868,	// (0x000aa403) main_mobtv_info_pane_t3

0x7a0e,	// (0x000aa5a9) main_radioblah_pane_g1

0x7a48,	// (0x000aa5e3) main_radioblah_info_pane_g1

0x7acd,	// (0x000aa668) main_radioblah_info_pane_t3_ParamLimits

0x7acd,	// (0x000aa668) main_radioblah_info_pane_t3

0x22d8,	// (0x000a4e73) highlight_cell_cale_month_pane_ParamLimits

0x22d8,	// (0x000a4e73) highlight_cell_cale_month_pane

0x954a,	// (0x000ac0e5) main_phob_fisheye_pane

0xdd12,	// (0x000b08ad) scroll_pane_cp0031_ParamLimits

0xdd12,	// (0x000b08ad) scroll_pane_cp0031

0xa811,	// (0x000ad3ac) wait_bar_pane_cp08_ParamLimits

0x721e,	// (0x000a9db9) cset_list_set_pane_copy1_ParamLimits

0xb188,	// (0x000add23) highlight_cell_cale_month_pane_g1

0x7b69,	// (0x000aa704) highlight_cell_cale_month_pane_t1

0xe99d,	// (0x000b1538) list_gen_pane_cp01

0xe54c,	// (0x000b10e7) scroll_pane_01

0xf07e,	// (0x000b1c19) list_single_double_fisheye_pane

0x7b77,	// (0x000aa712) list_double_fisheye_pane_g1_ParamLimits

0x7b77,	// (0x000aa712) list_double_fisheye_pane_g1

0x7b83,	// (0x000aa71e) list_double_fisheye_pane_g2_ParamLimits

0x7b83,	// (0x000aa71e) list_double_fisheye_pane_g2

0x7b97,	// (0x000aa732) list_double_fisheye_pane_g3_ParamLimits

0x7b97,	// (0x000aa732) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x000b2844) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x000b2844) list_double_fisheye_pane_g

0x7bc0,	// (0x000aa75b) list_double_fisheye_pane_t1_ParamLimits

0x7bc0,	// (0x000aa75b) list_double_fisheye_pane_t1

0x7bdb,	// (0x000aa776) list_double_fisheye_pane_t2_ParamLimits

0x7bdb,	// (0x000aa776) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x000b284f) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x000b284f) list_double_fisheye_pane_t

0x954a,	// (0x000ac0e5) main_call5_pane

0x795f,	// (0x000aa4fa) sc_swipe_pane_ParamLimits

0x795f,	// (0x000aa4fa) sc_swipe_pane

0x7c10,	// (0x000aa7ab) call5_image_pane_ParamLimits

0x7c10,	// (0x000aa7ab) call5_image_pane

0x7c2d,	// (0x000aa7c8) call5_swipe_1_pane_ParamLimits

0x7c2d,	// (0x000aa7c8) call5_swipe_1_pane

0x7c40,	// (0x000aa7db) call5_swipe_2_pane_ParamLimits

0x7c40,	// (0x000aa7db) call5_swipe_2_pane

0x7c6b,	// (0x000aa806) popup_call5_audio_first_window_ParamLimits

0x7c6b,	// (0x000aa806) popup_call5_audio_first_window

0xdbde,	// (0x000b0779) call5_swipe_1_pane_g1_ParamLimits

0xdbde,	// (0x000b0779) call5_swipe_1_pane_g1

0xb190,	// (0x000add2b) call5_swipe_1_pane_g2_ParamLimits

0xb190,	// (0x000add2b) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x000b2854) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x000b2854) call5_swipe_1_pane_g

0xb19c,	// (0x000add37) call5_swipe_1_pane_t1_ParamLimits

0xb19c,	// (0x000add37) call5_swipe_1_pane_t1

0xdbde,	// (0x000b0779) call5_swipe_2_pane_g1_ParamLimits

0xdbde,	// (0x000b0779) call5_swipe_2_pane_g1

0xb1b1,	// (0x000add4c) call5_swipe_2_pane_g2_ParamLimits

0xb1b1,	// (0x000add4c) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x000b2859) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x000b2859) call5_swipe_2_pane_g

0xb1bd,	// (0x000add58) call5_swipe_2_pane_t1_ParamLimits

0xb1bd,	// (0x000add58) call5_swipe_2_pane_t1

0xb1d2,	// (0x000add6d) sc_swipe_pane_g1_ParamLimits

0xb1d2,	// (0x000add6d) sc_swipe_pane_g1

0xb1df,	// (0x000add7a) sc_swipe_pane_g2_ParamLimits

0xb1df,	// (0x000add7a) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x000b285e) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x000b285e) sc_swipe_pane_g

0xb1eb,	// (0x000add86) sc_swipe_pane_t1_ParamLimits

0xb1eb,	// (0x000add86) sc_swipe_pane_t1

0x954a,	// (0x000ac0e5) main_cmail_launcher_pane

0x7c7c,	// (0x000aa817) aid_size_cell_cmail_l_ParamLimits

0x7c7c,	// (0x000aa817) aid_size_cell_cmail_l

0x7c8a,	// (0x000aa825) grid_cmail_l_pane_ParamLimits

0x7c8a,	// (0x000aa825) grid_cmail_l_pane

0x7ca4,	// (0x000aa83f) cell_cmail_l_pane_ParamLimits

0x7ca4,	// (0x000aa83f) cell_cmail_l_pane

0xb200,	// (0x000add9b) cell_cmail_l_pane_g1_ParamLimits

0xb200,	// (0x000add9b) cell_cmail_l_pane_g1

0xb20c,	// (0x000adda7) cell_cmail_l_pane_t1_ParamLimits

0xb20c,	// (0x000adda7) cell_cmail_l_pane_t1

0xb222,	// (0x000addbd) cell_cmail_l_pane_t2_ParamLimits

0xb222,	// (0x000addbd) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x000b2863) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x000b2863) cell_cmail_l_pane_t

0xa7fa,	// (0x000ad395) grid_highlight_pane_cp018_ParamLimits

0xa7fa,	// (0x000ad395) grid_highlight_pane_cp018

0x038c,	// (0x000a2f27) main2_pane_ParamLimits

0x038c,	// (0x000a2f27) main2_pane

0xa47d,	// (0x000ad018) popup_sp_fs_action_menu_bg_pane_g1

0xa485,	// (0x000ad020) popup_sp_fs_action_menu_bg_pane_g2

0xa48d,	// (0x000ad028) popup_sp_fs_action_menu_bg_pane_g3

0xa495,	// (0x000ad030) popup_sp_fs_action_menu_bg_pane_g4

0xa49d,	// (0x000ad038) popup_sp_fs_action_menu_bg_pane_g5

0xa4a5,	// (0x000ad040) popup_sp_fs_action_menu_bg_pane_g6

0xa4ad,	// (0x000ad048) popup_sp_fs_action_menu_bg_pane_g7

0xa4b5,	// (0x000ad050) popup_sp_fs_action_menu_bg_pane_g8

0xa4bd,	// (0x000ad058) popup_sp_fs_action_menu_bg_pane_g9

0xa4c5,	// (0x000ad060) popup_sp_fs_action_menu_bg_pane_g10

0xa4c5,	// (0x000ad060) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x000b1d25) popup_sp_fs_action_menu_bg_pane_g

0x12bb,	// (0x000a3e56) list_medium_line_x2_t3_g3_g1_ParamLimits

0x12bb,	// (0x000a3e56) list_medium_line_x2_t3_g3_g1

0x12c7,	// (0x000a3e62) list_medium_line_x2_t3_g3_g2_ParamLimits

0x12c7,	// (0x000a3e62) list_medium_line_x2_t3_g3_g2

0x12d3,	// (0x000a3e6e) list_medium_line_x2_t3_g3_g3_ParamLimits

0x12d3,	// (0x000a3e6e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x000b1dd3) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x000b1dd3) list_medium_line_x2_t3_g3_g

0x12df,	// (0x000a3e7a) list_medium_line_x2_t3_g3_t1_ParamLimits

0x12df,	// (0x000a3e7a) list_medium_line_x2_t3_g3_t1

0x12f4,	// (0x000a3e8f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x12f4,	// (0x000a3e8f) list_medium_line_x2_t3_g3_t2

0x1308,	// (0x000a3ea3) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1308,	// (0x000a3ea3) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x000b1dda) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x000b1dda) list_medium_line_x2_t3_g3_t

0x12bb,	// (0x000a3e56) list_medium_line_x2_t3_g2_g1_ParamLimits

0x12bb,	// (0x000a3e56) list_medium_line_x2_t3_g2_g1

0x12d3,	// (0x000a3e6e) list_medium_line_x2_t3_g2_g2_ParamLimits

0x12d3,	// (0x000a3e6e) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x000b1de1) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x000b1de1) list_medium_line_x2_t3_g2_g

0x131d,	// (0x000a3eb8) list_medium_line_x2_t3_g2_t1_ParamLimits

0x131d,	// (0x000a3eb8) list_medium_line_x2_t3_g2_t1

0x1333,	// (0x000a3ece) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1333,	// (0x000a3ece) list_medium_line_x2_t3_g2_t2

0x1308,	// (0x000a3ea3) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1308,	// (0x000a3ea3) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x000b1de6) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x000b1de6) list_medium_line_x2_t3_g2_t

0x12bb,	// (0x000a3e56) list_medium_line_x2_t4_g4_g1_ParamLimits

0x12bb,	// (0x000a3e56) list_medium_line_x2_t4_g4_g1

0x1345,	// (0x000a3ee0) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1345,	// (0x000a3ee0) list_medium_line_x2_t4_g4_g2

0x12c7,	// (0x000a3e62) list_medium_line_x2_t4_g4_g3_ParamLimits

0x12c7,	// (0x000a3e62) list_medium_line_x2_t4_g4_g3

0x1351,	// (0x000a3eec) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1351,	// (0x000a3eec) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x000b1ded) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x000b1ded) list_medium_line_x2_t4_g4_g

0x135d,	// (0x000a3ef8) list_medium_line_x2_t4_g4_t1_ParamLimits

0x135d,	// (0x000a3ef8) list_medium_line_x2_t4_g4_t1

0x1377,	// (0x000a3f12) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1377,	// (0x000a3f12) list_medium_line_x2_t4_g4_t2

0x138d,	// (0x000a3f28) list_medium_line_x2_t4_g4_t3_ParamLimits

0x138d,	// (0x000a3f28) list_medium_line_x2_t4_g4_t3

0x13a2,	// (0x000a3f3d) list_medium_line_x2_t4_g4_t4_ParamLimits

0x13a2,	// (0x000a3f3d) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x000b1df6) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x000b1df6) list_medium_line_x2_t4_g4_t

0x12bb,	// (0x000a3e56) list_medium_line_x2_t2_g4_g1_ParamLimits

0x12bb,	// (0x000a3e56) list_medium_line_x2_t2_g4_g1

0x1345,	// (0x000a3ee0) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1345,	// (0x000a3ee0) list_medium_line_x2_t2_g4_g2

0x12c7,	// (0x000a3e62) list_medium_line_x2_t2_g4_g3_ParamLimits

0x12c7,	// (0x000a3e62) list_medium_line_x2_t2_g4_g3

0x12d3,	// (0x000a3e6e) list_medium_line_x2_t2_g4_g4_ParamLimits

0x12d3,	// (0x000a3e6e) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000b1e5d) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000b1e5d) list_medium_line_x2_t2_g4_g

0x22fe,	// (0x000a4e99) list_medium_line_x2_t2_g4_t1_ParamLimits

0x22fe,	// (0x000a4e99) list_medium_line_x2_t2_g4_t1

0x1308,	// (0x000a3ea3) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1308,	// (0x000a3ea3) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000b1e66) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000b1e66) list_medium_line_x2_t2_g4_t

0x12bb,	// (0x000a3e56) list_medium_line_x2_t2_g3_g1_ParamLimits

0x12bb,	// (0x000a3e56) list_medium_line_x2_t2_g3_g1

0x12c7,	// (0x000a3e62) list_medium_line_x2_t2_g3_g2_ParamLimits

0x12c7,	// (0x000a3e62) list_medium_line_x2_t2_g3_g2

0x12d3,	// (0x000a3e6e) list_medium_line_x2_t2_g3_g3_ParamLimits

0x12d3,	// (0x000a3e6e) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x000b1dd3) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x000b1dd3) list_medium_line_x2_t2_g3_g

0x2313,	// (0x000a4eae) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2313,	// (0x000a4eae) list_medium_line_x2_t2_g3_t1

0x1308,	// (0x000a3ea3) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1308,	// (0x000a3ea3) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000b1e6b) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000b1e6b) list_medium_line_x2_t2_g3_t

0x245c,	// (0x000a4ff7) main_sp_fs_list_pane_ParamLimits

0x245c,	// (0x000a4ff7) main_sp_fs_list_pane

0xbc75,	// (0x000ae810) sp_fs_scroll_pane_ParamLimits

0xbc75,	// (0x000ae810) sp_fs_scroll_pane

0x2468,	// (0x000a5003) list_medium_line_x2_t3_t1

0x2478,	// (0x000a5013) list_medium_line_x2_t3_t2

0x2486,	// (0x000a5021) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x000b1eb6) list_medium_line_x2_t3_t

0x2494,	// (0x000a502f) list_medium_line_x3_t4_t1

0x24a4,	// (0x000a503f) list_medium_line_x3_t4_t2

0x24b2,	// (0x000a504d) list_medium_line_x3_t4_t3

0x2486,	// (0x000a5021) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x000b1ebd) list_medium_line_x3_t4_t

0x24c0,	// (0x000a505b) list_medium_line_x4_t5_t1

0x24d0,	// (0x000a506b) list_medium_line_x4_t5_t2

0x24b2,	// (0x000a504d) list_medium_line_x4_t5_t3

0x24de,	// (0x000a5079) list_medium_line_x4_t5_t4

0x2486,	// (0x000a5021) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x000b1ec6) list_medium_line_x4_t5_t

0x12bb,	// (0x000a3e56) list_medium_line_t4_g4_g1_ParamLimits

0x12bb,	// (0x000a3e56) list_medium_line_t4_g4_g1

0x24ec,	// (0x000a5087) list_medium_line_t4_g4_g2_ParamLimits

0x24ec,	// (0x000a5087) list_medium_line_t4_g4_g2

0x24f8,	// (0x000a5093) list_medium_line_t4_g4_g3_ParamLimits

0x24f8,	// (0x000a5093) list_medium_line_t4_g4_g3

0x12d3,	// (0x000a3e6e) list_medium_line_t4_g4_g4_ParamLimits

0x12d3,	// (0x000a3e6e) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x000b1ed1) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x000b1ed1) list_medium_line_t4_g4_g

0x2504,	// (0x000a509f) list_medium_line_t4_g4_t1_ParamLimits

0x2504,	// (0x000a509f) list_medium_line_t4_g4_t1

0x2519,	// (0x000a50b4) list_medium_line_t4_g4_t2_ParamLimits

0x2519,	// (0x000a50b4) list_medium_line_t4_g4_t2

0x252e,	// (0x000a50c9) list_medium_line_t4_g4_t3_ParamLimits

0x252e,	// (0x000a50c9) list_medium_line_t4_g4_t3

0x1308,	// (0x000a3ea3) list_medium_line_t4_g4_t4_ParamLimits

0x1308,	// (0x000a3ea3) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x000b1eda) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x000b1eda) list_medium_line_t4_g4_t

0x25f6,	// (0x000a5191) chi_dic_find_pane_g1

0x369e,	// (0x000a6239) main_tport_pane

0x6538,	// (0x000a90d3) list_medium_line_plain_t1

0x65e0,	// (0x000a917b) list_medium_line_t2_g2_g1_ParamLimits

0x65e0,	// (0x000a917b) list_medium_line_t2_g2_g1

0x65ec,	// (0x000a9187) list_medium_line_t2_g2_g2_ParamLimits

0x65ec,	// (0x000a9187) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x000b259b) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x000b259b) list_medium_line_t2_g2_g

0x65f8,	// (0x000a9193) list_medium_line_t2_g2_t1_ParamLimits

0x65f8,	// (0x000a9193) list_medium_line_t2_g2_t1

0x6612,	// (0x000a91ad) list_medium_line_t2_g2_t2_ParamLimits

0x6612,	// (0x000a91ad) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x000b25a0) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x000b25a0) list_medium_line_t2_g2_t

0xe9a6,	// (0x000b1541) aid_sp_fs_list_icon_a_sm

0xe9ae,	// (0x000b1549) aid_sp_fs_list_icon_d

0xa808,	// (0x000ad3a3) aid_sp_fs_text_primary

0xe9b6,	// (0x000b1551) aid_sp_fs_text_secondary

0x6c85,	// (0x000a9820) list_medium_line

0x6c85,	// (0x000a9820) list_medium_line_g2

0x6c85,	// (0x000a9820) list_medium_line_g3

0x6c85,	// (0x000a9820) list_medium_line_plain

0x6c85,	// (0x000a9820) list_medium_line_plain_t2

0x6c85,	// (0x000a9820) list_medium_line_plain_t3

0x6c85,	// (0x000a9820) list_medium_line_right_icon

0x6c85,	// (0x000a9820) list_medium_line_right_iconx2

0x6c85,	// (0x000a9820) list_medium_line_t2

0x6c85,	// (0x000a9820) list_medium_line_t2_g2

0x6c85,	// (0x000a9820) list_medium_line_t2_g3

0x6c85,	// (0x000a9820) list_medium_line_t2_right_icon

0x6c85,	// (0x000a9820) list_medium_line_t2_right_iconx2

0x6c85,	// (0x000a9820) list_medium_line_t3

0x6c85,	// (0x000a9820) list_medium_line_t3_g2

0x6c85,	// (0x000a9820) list_medium_line_t3_g3

0x6c85,	// (0x000a9820) list_medium_line_t3_right_iconx2

0x6c8e,	// (0x000a9829) list_medium_line_t4_g4

0x6c85,	// (0x000a9820) list_medium_line_x2

0x6c85,	// (0x000a9820) list_medium_line_x2_t2_g2

0x6c85,	// (0x000a9820) list_medium_line_x2_t2_g3

0x6c85,	// (0x000a9820) list_medium_line_x2_t2_g4

0x6c85,	// (0x000a9820) list_medium_line_x2_t3

0x6c85,	// (0x000a9820) list_medium_line_x2_t3_g2

0x6c85,	// (0x000a9820) list_medium_line_x2_t3_g3

0x6c85,	// (0x000a9820) list_medium_line_x2_t3_g4

0x6c85,	// (0x000a9820) list_medium_line_x2_t4_g2

0x6c85,	// (0x000a9820) list_medium_line_x2_t4_g4

0x6c97,	// (0x000a9832) list_medium_line_x3

0x6c97,	// (0x000a9832) list_medium_line_x3_t4

0x6c97,	// (0x000a9832) list_medium_line_x3_t4_g4

0x6c8e,	// (0x000a9829) list_medium_line_x4_t4

0x6c8e,	// (0x000a9829) list_medium_line_x4_t4_g7

0x6c8e,	// (0x000a9829) list_medium_line_x4_t5

0x6ca0,	// (0x000a983b) list_single_fs_dyc_pane_ParamLimits

0x6ca0,	// (0x000a983b) list_single_fs_dyc_pane

0x12bb,	// (0x000a3e56) list_medium_line_x4_t4_g7_g1_ParamLimits

0x12bb,	// (0x000a3e56) list_medium_line_x4_t4_g7_g1

0x7417,	// (0x000a9fb2) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7417,	// (0x000a9fb2) list_medium_line_x4_t4_g7_g2

0x7423,	// (0x000a9fbe) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7423,	// (0x000a9fbe) list_medium_line_x4_t4_g7_g3

0x7432,	// (0x000a9fcd) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7432,	// (0x000a9fcd) list_medium_line_x4_t4_g7_g4

0x743e,	// (0x000a9fd9) list_medium_line_x4_t4_g7_g5_ParamLimits

0x743e,	// (0x000a9fd9) list_medium_line_x4_t4_g7_g5

0x744d,	// (0x000a9fe8) list_medium_line_x4_t4_g7_g6_ParamLimits

0x744d,	// (0x000a9fe8) list_medium_line_x4_t4_g7_g6

0x745c,	// (0x000a9ff7) list_medium_line_x4_t4_g7_g7_ParamLimits

0x745c,	// (0x000a9ff7) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x000b276b) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x000b276b) list_medium_line_x4_t4_g7_g

0x7468,	// (0x000aa003) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7468,	// (0x000aa003) list_medium_line_x4_t4_g7_t1

0x747d,	// (0x000aa018) list_medium_line_x4_t4_g7_t2_ParamLimits

0x747d,	// (0x000aa018) list_medium_line_x4_t4_g7_t2

0x7492,	// (0x000aa02d) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7492,	// (0x000aa02d) list_medium_line_x4_t4_g7_t3

0x74a7,	// (0x000aa042) list_medium_line_x4_t4_g7_t4_ParamLimits

0x74a7,	// (0x000aa042) list_medium_line_x4_t4_g7_t4

0x74b9,	// (0x000aa054) list_medium_line_x4_t4_g7_t5_ParamLimits

0x74b9,	// (0x000aa054) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x000b277a) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x000b277a) list_medium_line_x4_t4_g7_t

0x74cb,	// (0x000aa066) list_single_dyc_row_pane_ParamLimits

0x74cb,	// (0x000aa066) list_single_dyc_row_pane

0x7bfd,	// (0x000aa798) call5_gesture_pane_ParamLimits

0x7bfd,	// (0x000aa798) call5_gesture_pane

0x7c53,	// (0x000aa7ee) call5_windows_pane_ParamLimits

0x7c53,	// (0x000aa7ee) call5_windows_pane

0x7cbe,	// (0x000aa859) call5_swipe_1_pane_cp_ParamLimits

0x7cbe,	// (0x000aa859) call5_swipe_1_pane_cp

0x7cca,	// (0x000aa865) call5_swipe_2_pane_cp_ParamLimits

0x7cca,	// (0x000aa865) call5_swipe_2_pane_cp

0xa5a9,	// (0x000ad144) call5_image_pane_cp

0x7cd6,	// (0x000aa871) popup_call5_audio_first_window_cp_ParamLimits

0x7cd6,	// (0x000aa871) popup_call5_audio_first_window_cp

0xb1d2,	// (0x000add6d) call5_swipe_1_pane_g1_cp_ParamLimits

0xb1d2,	// (0x000add6d) call5_swipe_1_pane_g1_cp

0xb23f,	// (0x000addda) call5_swipe_1_pane_g2_cp

0xb1eb,	// (0x000add86) call5_swipe_1_pane_t1_cp_ParamLimits

0xb1eb,	// (0x000add86) call5_swipe_1_pane_t1_cp

0xb1d2,	// (0x000add6d) call5_swipe_2_pane_g1_cp_ParamLimits

0xb1d2,	// (0x000add6d) call5_swipe_2_pane_g1_cp

0xb247,	// (0x000adde2) call5_swipe_2_pane_g2_cp

0xb24f,	// (0x000addea) call5_swipe_2_pane_t1_cp_ParamLimits

0xb24f,	// (0x000addea) call5_swipe_2_pane_t1_cp

0xa7fa,	// (0x000ad395) main_sp_fs_email_pane

0xb264,	// (0x000addff) main_sp_fs_listscroll_pane_te

0x7ce4,	// (0x000aa87f) popup_sp_fs_action_menu_pane_ParamLimits

0x7ce4,	// (0x000aa87f) popup_sp_fs_action_menu_pane

0xd972,	// (0x000b050d) bg_sp_fs_ctrlbar_pane_g1

0xb26d,	// (0x000ade08) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xb276,	// (0x000ade11) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xb27f,	// (0x000ade1a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xd972,	// (0x000b050d) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x000b2868) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xd757,	// (0x000b02f2) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xd757,	// (0x000b02f2) bg_sp_fs_ctrlbar_ddmenu_pane

0xb288,	// (0x000ade23) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xb288,	// (0x000ade23) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xb294,	// (0x000ade2f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xb294,	// (0x000ade2f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x000b2871) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x000b2871) main_sp_fs_ctrlbar_ddmenu_pane_g

0xb2a0,	// (0x000ade3b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xb2a0,	// (0x000ade3b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7d28,	// (0x000aa8c3) list_medium_line_t2_right_icon_g1

0x7d30,	// (0x000aa8cb) list_medium_line_t2_right_icon_t1

0x7d40,	// (0x000aa8db) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x000b2876) list_medium_line_t2_right_icon_t

0xd56a,	// (0x000b0105) bg_sp_fs_ctrlbar_pane_ParamLimits

0xd56a,	// (0x000b0105) bg_sp_fs_ctrlbar_pane

0x7d9a,	// (0x000aa935) main_sp_fs_ctrlbar_button_pane_cp01

0x7da4,	// (0x000aa93f) main_sp_fs_ctrlbar_ddmenu_pane

0xb2f2,	// (0x000ade8d) main_sp_fs_ctrlbar_pane_g1

0xb2fe,	// (0x000ade99) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x000b287b) main_sp_fs_ctrlbar_pane_g

0xb30a,	// (0x000adea5) main_sp_fs_ctrlbar_pane_t1

0x7dae,	// (0x000aa949) main_sp_fs_ctrlbar_pane

0x7dd2,	// (0x000aa96d) main_sp_fs_listscroll_pane_te_cp01

0x7df2,	// (0x000aa98d) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7df2,	// (0x000aa98d) popup_sp_fs_action_menu_pane_cp01

0xa7fa,	// (0x000ad395) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa7fa,	// (0x000ad395) bg_sp_fs_highlight_list_pane_cp01

0xec83,	// (0x000b181e) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xec83,	// (0x000b181e) sp_fs_action_menu_list_gene_pane_g1

0xb33a,	// (0x000aded5) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xb33a,	// (0x000aded5) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x000b2885) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x000b2885) sp_fs_action_menu_list_gene_pane_g

0xec92,	// (0x000b182d) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xec92,	// (0x000b182d) sp_fs_action_menu_list_gene_pane_t1

0xecaa,	// (0x000b1845) sp_fs_action_menu_list_gene_pane_ParamLimits

0xecaa,	// (0x000b1845) sp_fs_action_menu_list_gene_pane

0xb347,	// (0x000adee2) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xb347,	// (0x000adee2) popup_sp_fs_action_menu_bg_pane

0xeccb,	// (0x000b1866) sp_fs_action_menu_list_pane_ParamLimits

0xeccb,	// (0x000b1866) sp_fs_action_menu_list_pane

0xf087,	// (0x000b1c22) sp_fs_scroll_pane_cp01_ParamLimits

0xf087,	// (0x000b1c22) sp_fs_scroll_pane_cp01

0x7e22,	// (0x000aa9bd) list_medium_line_plain_t2_t1

0x7e32,	// (0x000aa9cd) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x000b288a) list_medium_line_plain_t2_t

0x7e42,	// (0x000aa9dd) list_medium_line_plain_t3_t1

0x7e52,	// (0x000aa9ed) list_medium_line_plain_t3_t2

0x7e60,	// (0x000aa9fb) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x000b288f) list_medium_line_plain_t3_t

0x12bb,	// (0x000a3e56) list_medium_line_x2_t2_g2_g1_ParamLimits

0x12bb,	// (0x000a3e56) list_medium_line_x2_t2_g2_g1

0x12d3,	// (0x000a3e6e) list_medium_line_x2_t2_g2_g2_ParamLimits

0x12d3,	// (0x000a3e6e) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x000b1de1) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x000b1de1) list_medium_line_x2_t2_g2_g

0x2504,	// (0x000a509f) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2504,	// (0x000a509f) list_medium_line_x2_t2_g2_t1

0x1308,	// (0x000a3ea3) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1308,	// (0x000a3ea3) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x000b2896) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x000b2896) list_medium_line_x2_t2_g2_t

0x12bb,	// (0x000a3e56) list_medium_line_x2_t4_g2_g1_ParamLimits

0x12bb,	// (0x000a3e56) list_medium_line_x2_t4_g2_g1

0x7e6e,	// (0x000aaa09) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7e6e,	// (0x000aaa09) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x000b289b) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x000b289b) list_medium_line_x2_t4_g2_g

0x7e80,	// (0x000aaa1b) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7e80,	// (0x000aaa1b) list_medium_line_x2_t4_g2_t1

0x7e9a,	// (0x000aaa35) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7e9a,	// (0x000aaa35) list_medium_line_x2_t4_g2_t2

0x7eb0,	// (0x000aaa4b) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7eb0,	// (0x000aaa4b) list_medium_line_x2_t4_g2_t3

0x1308,	// (0x000a3ea3) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1308,	// (0x000a3ea3) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x000b28a0) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x000b28a0) list_medium_line_x2_t4_g2_t

0x7ec5,	// (0x000aaa60) list_medium_line_t3_right_iconx2_g1

0x7d28,	// (0x000aa8c3) list_medium_line_t3_right_iconx2_g2

0x7ecd,	// (0x000aaa68) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x000b28a9) list_medium_line_t3_right_iconx2_g

0x7ed7,	// (0x000aaa72) list_medium_line_t3_right_iconx2_t1

0x7ee7,	// (0x000aaa82) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x000b28b0) list_medium_line_t3_right_iconx2_t

0x12bb,	// (0x000a3e56) list_medium_line_x3_t4_g4_g1_ParamLimits

0x12bb,	// (0x000a3e56) list_medium_line_x3_t4_g4_g1

0x12c7,	// (0x000a3e62) list_medium_line_x3_t4_g4_g2_ParamLimits

0x12c7,	// (0x000a3e62) list_medium_line_x3_t4_g4_g2

0x24ec,	// (0x000a5087) list_medium_line_x3_t4_g4_g3_ParamLimits

0x24ec,	// (0x000a5087) list_medium_line_x3_t4_g4_g3

0x7ef5,	// (0x000aaa90) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7ef5,	// (0x000aaa90) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x000b28b5) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x000b28b5) list_medium_line_x3_t4_g4_g

0x7f01,	// (0x000aaa9c) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7f01,	// (0x000aaa9c) list_medium_line_x3_t4_g4_t1

0x7f18,	// (0x000aaab3) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7f18,	// (0x000aaab3) list_medium_line_x3_t4_g4_t2

0x2519,	// (0x000a50b4) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2519,	// (0x000a50b4) list_medium_line_x3_t4_g4_t3

0x7f33,	// (0x000aaace) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7f33,	// (0x000aaace) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x000b28be) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x000b28be) list_medium_line_x3_t4_g4_t

0x7f50,	// (0x000aaaeb) list_single_dyc_row_text_pane_t1_ParamLimits

0x7f50,	// (0x000aaaeb) list_single_dyc_row_text_pane_t1

0x7f99,	// (0x000aab34) list_single_dyc_row_text_pane_t2_ParamLimits

0x7f99,	// (0x000aab34) list_single_dyc_row_text_pane_t2

0xeced,	// (0x000b1888) list_single_dyc_row_text_pane_t3_ParamLimits

0xeced,	// (0x000b1888) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x000b28c7) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x000b28c7) list_single_dyc_row_text_pane_t

0xed11,	// (0x000b18ac) list_single_dyc_row_pane_g1_ParamLimits

0xed11,	// (0x000b18ac) list_single_dyc_row_pane_g1

0xed1d,	// (0x000b18b8) list_single_dyc_row_pane_g2_ParamLimits

0xed1d,	// (0x000b18b8) list_single_dyc_row_pane_g2

0xed29,	// (0x000b18c4) list_single_dyc_row_pane_g3_ParamLimits

0xed29,	// (0x000b18c4) list_single_dyc_row_pane_g3

0xed35,	// (0x000b18d0) list_single_dyc_row_pane_g4_ParamLimits

0xed35,	// (0x000b18d0) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x000b28d4) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x000b28d4) list_single_dyc_row_pane_g

0xed41,	// (0x000b18dc) list_single_dyc_row_text_pane_ParamLimits

0xed41,	// (0x000b18dc) list_single_dyc_row_text_pane

0x94d4,	// (0x000ac06f) bg_sp_fs_scroll_pane

0xb355,	// (0x000adef0) thumb_sp_fs_scroll_pane

0x65e0,	// (0x000a917b) list_medium_line_g1_ParamLimits

0x65e0,	// (0x000a917b) list_medium_line_g1

0x80ce,	// (0x000aac69) list_medium_line_t1_ParamLimits

0x80ce,	// (0x000aac69) list_medium_line_t1

0x12bb,	// (0x000a3e56) list_medium_line_x2_g1_ParamLimits

0x12bb,	// (0x000a3e56) list_medium_line_x2_g1

0x12c7,	// (0x000a3e62) list_medium_line_x2_g2_ParamLimits

0x12c7,	// (0x000a3e62) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x000b28dd) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x000b28dd) list_medium_line_x2_g

0xed60,	// (0x000b18fb) list_medium_line_x2_t1_ParamLimits

0xed60,	// (0x000b18fb) list_medium_line_x2_t1

0x12bb,	// (0x000a3e56) list_medium_line_x3_g1_ParamLimits

0x12bb,	// (0x000a3e56) list_medium_line_x3_g1

0x12c7,	// (0x000a3e62) list_medium_line_x3_g2_ParamLimits

0x12c7,	// (0x000a3e62) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x000b28dd) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x000b28dd) list_medium_line_x3_g

0xed60,	// (0x000b18fb) list_medium_line_x3_t1_ParamLimits

0xed60,	// (0x000b18fb) list_medium_line_x3_t1

0xb35e,	// (0x000adef9) thumb_sp_fs_scroll_pane_g1

0xb367,	// (0x000adf02) thumb_sp_fs_scroll_pane_g2

0xb370,	// (0x000adf0b) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000b28e2) thumb_sp_fs_scroll_pane_g

0xb35e,	// (0x000adef9) bg_sp_fs_scroll_pane_g1

0xb367,	// (0x000adf02) bg_sp_fs_scroll_pane_g2

0xb370,	// (0x000adf0b) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000b28e2) bg_sp_fs_scroll_pane_g

0x12bb,	// (0x000a3e56) list_medium_line_x2_t3_g4_g1_ParamLimits

0x12bb,	// (0x000a3e56) list_medium_line_x2_t3_g4_g1

0x1345,	// (0x000a3ee0) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1345,	// (0x000a3ee0) list_medium_line_x2_t3_g4_g2

0x12c7,	// (0x000a3e62) list_medium_line_x2_t3_g4_g3_ParamLimits

0x12c7,	// (0x000a3e62) list_medium_line_x2_t3_g4_g3

0x12d3,	// (0x000a3e6e) list_medium_line_x2_t3_g4_g4_ParamLimits

0x12d3,	// (0x000a3e6e) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000b1e5d) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000b1e5d) list_medium_line_x2_t3_g4_g

0x80e3,	// (0x000aac7e) list_medium_line_x2_t3_g4_t1_ParamLimits

0x80e3,	// (0x000aac7e) list_medium_line_x2_t3_g4_t1

0x80fb,	// (0x000aac96) list_medium_line_x2_t3_g4_t2_ParamLimits

0x80fb,	// (0x000aac96) list_medium_line_x2_t3_g4_t2

0x1308,	// (0x000a3ea3) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1308,	// (0x000a3ea3) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x000b28e9) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x000b28e9) list_medium_line_x2_t3_g4_t

0x65e0,	// (0x000a917b) list_medium_line_g2_g1_ParamLimits

0x65e0,	// (0x000a917b) list_medium_line_g2_g1

0x65ec,	// (0x000a9187) list_medium_line_g2_g2_ParamLimits

0x65ec,	// (0x000a9187) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x000b259b) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x000b259b) list_medium_line_g2_g

0x8115,	// (0x000aacb0) list_medium_line_g2_t1_ParamLimits

0x8115,	// (0x000aacb0) list_medium_line_g2_t1

0x65e0,	// (0x000a917b) list_medium_line_t3_g2_g1_ParamLimits

0x65e0,	// (0x000a917b) list_medium_line_t3_g2_g1

0x65ec,	// (0x000a9187) list_medium_line_t3_g2_g2_ParamLimits

0x65ec,	// (0x000a9187) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x000b259b) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x000b259b) list_medium_line_t3_g2_g

0x812a,	// (0x000aacc5) list_medium_line_t3_g2_t1_ParamLimits

0x812a,	// (0x000aacc5) list_medium_line_t3_g2_t1

0x8144,	// (0x000aacdf) list_medium_line_t3_g2_t2_ParamLimits

0x8144,	// (0x000aacdf) list_medium_line_t3_g2_t2

0x815a,	// (0x000aacf5) list_medium_line_t3_g2_t3_ParamLimits

0x815a,	// (0x000aacf5) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x000b28f0) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x000b28f0) list_medium_line_t3_g2_t

0x7d28,	// (0x000aa8c3) list_medium_line_right_icon_g1

0x8174,	// (0x000aad0f) list_medium_line_right_icon_t1

0x65e0,	// (0x000a917b) list_medium_line_t2_g1_ParamLimits

0x65e0,	// (0x000a917b) list_medium_line_t2_g1

0x8182,	// (0x000aad1d) list_medium_line_t2_t1_ParamLimits

0x8182,	// (0x000aad1d) list_medium_line_t2_t1

0x819c,	// (0x000aad37) list_medium_line_t2_t2_ParamLimits

0x819c,	// (0x000aad37) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x000b28f7) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x000b28f7) list_medium_line_t2_t

0x65e0,	// (0x000a917b) list_medium_line_t3_g1_ParamLimits

0x65e0,	// (0x000a917b) list_medium_line_t3_g1

0x81b5,	// (0x000aad50) list_medium_line_t3_t1_ParamLimits

0x81b5,	// (0x000aad50) list_medium_line_t3_t1

0x81cf,	// (0x000aad6a) list_medium_line_t3_t2_ParamLimits

0x81cf,	// (0x000aad6a) list_medium_line_t3_t2

0x81e5,	// (0x000aad80) list_medium_line_t3_t3_ParamLimits

0x81e5,	// (0x000aad80) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x000b28fc) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x000b28fc) list_medium_line_t3_t

0x65e0,	// (0x000a917b) list_medium_line_g3_g1_ParamLimits

0x65e0,	// (0x000a917b) list_medium_line_g3_g1

0x81fa,	// (0x000aad95) list_medium_line_g3_g2_ParamLimits

0x81fa,	// (0x000aad95) list_medium_line_g3_g2

0x65ec,	// (0x000a9187) list_medium_line_g3_g3_ParamLimits

0x65ec,	// (0x000a9187) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x000b2903) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x000b2903) list_medium_line_g3_g

0x8206,	// (0x000aada1) list_medium_line_g3_t1_ParamLimits

0x8206,	// (0x000aada1) list_medium_line_g3_t1

0x65e0,	// (0x000a917b) list_medium_line_t2_g3_g1_ParamLimits

0x65e0,	// (0x000a917b) list_medium_line_t2_g3_g1

0x81fa,	// (0x000aad95) list_medium_line_t2_g3_g2_ParamLimits

0x81fa,	// (0x000aad95) list_medium_line_t2_g3_g2

0x65ec,	// (0x000a9187) list_medium_line_t2_g3_g3_ParamLimits

0x65ec,	// (0x000a9187) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x000b2903) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x000b2903) list_medium_line_t2_g3_g

0x821b,	// (0x000aadb6) list_medium_line_t2_g3_t1_ParamLimits

0x821b,	// (0x000aadb6) list_medium_line_t2_g3_t1

0x8235,	// (0x000aadd0) list_medium_line_t2_g3_t2_ParamLimits

0x8235,	// (0x000aadd0) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x000b290a) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x000b290a) list_medium_line_t2_g3_t

0x65e0,	// (0x000a917b) list_medium_line_t3_g3_g1_ParamLimits

0x65e0,	// (0x000a917b) list_medium_line_t3_g3_g1

0x81fa,	// (0x000aad95) list_medium_line_t3_g3_g2_ParamLimits

0x81fa,	// (0x000aad95) list_medium_line_t3_g3_g2

0x65ec,	// (0x000a9187) list_medium_line_t3_g3_g3_ParamLimits

0x65ec,	// (0x000a9187) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x000b2903) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x000b2903) list_medium_line_t3_g3_g

0x8251,	// (0x000aadec) list_medium_line_t3_g3_t1_ParamLimits

0x8251,	// (0x000aadec) list_medium_line_t3_g3_t1

0x826a,	// (0x000aae05) list_medium_line_t3_g3_t2_ParamLimits

0x826a,	// (0x000aae05) list_medium_line_t3_g3_t2

0x8280,	// (0x000aae1b) list_medium_line_t3_g3_t3_ParamLimits

0x8280,	// (0x000aae1b) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x000b290f) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x000b290f) list_medium_line_t3_g3_t

0x7ec5,	// (0x000aaa60) list_medium_line_right_iconx2_g1

0x7d28,	// (0x000aa8c3) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000b2916) list_medium_line_right_iconx2_g

0x829a,	// (0x000aae35) list_medium_line_right_iconx2_t1

0x7ec5,	// (0x000aaa60) list_medium_line_t2_right_iconx2_g1

0x7d28,	// (0x000aa8c3) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000b2916) list_medium_line_t2_right_iconx2_g

0x82a8,	// (0x000aae43) list_medium_line_t2_right_iconx2_t1

0x82b8,	// (0x000aae53) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x000b291b) list_medium_line_t2_right_iconx2_t

0x82ca,	// (0x000aae65) list_medium_line_x4_t4_t1

0x82d8,	// (0x000aae73) list_medium_line_x4_t4_t2

0x82e8,	// (0x000aae83) list_medium_line_x4_t4_t3

0x82f8,	// (0x000aae93) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x000b2920) list_medium_line_x4_t4_t

0x834b,	// (0x000aaee6) tport_appsw_pane_ParamLimits

0x834b,	// (0x000aaee6) tport_appsw_pane

0x8363,	// (0x000aaefe) tport_contact_pane_ParamLimits

0x8363,	// (0x000aaefe) tport_contact_pane

0x837b,	// (0x000aaf16) tport_listscroll_pane_ParamLimits

0x837b,	// (0x000aaf16) tport_listscroll_pane

0x8395,	// (0x000aaf30) cell_tport_appsw_pane_ParamLimits

0x8395,	// (0x000aaf30) cell_tport_appsw_pane

0xe3f5,	// (0x000b0f90) tport_appsw_pane_g1_ParamLimits

0xe3f5,	// (0x000b0f90) tport_appsw_pane_g1

0xb379,	// (0x000adf14) tport_contact_pane_g1

0xaa82,	// (0x000ad61d) tport_contact_pane_t1

0xb382,	// (0x000adf1d) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x000b2929) tport_contact_pane_t

0xb390,	// (0x000adf2b) list_tport_pane

0xb399,	// (0x000adf34) scroll_pane_cp_030

0x83dd,	// (0x000aaf78) cell_tport_appsw_pane_g1

0x83ed,	// (0x000aaf88) cell_tport_appsw_pane_t1

0x83fb,	// (0x000aaf96) grid_highlight_pane_cp019

0x8403,	// (0x000aaf9e) list_tport_double_graphic_pane_ParamLimits

0x8403,	// (0x000aaf9e) list_tport_double_graphic_pane

0xa7fa,	// (0x000ad395) list_highlight_pane_cp023_ParamLimits

0xa7fa,	// (0x000ad395) list_highlight_pane_cp023

0x8410,	// (0x000aafab) list_tport_double_graphic_pane_g1_ParamLimits

0x8410,	// (0x000aafab) list_tport_double_graphic_pane_g1

0x841d,	// (0x000aafb8) list_tport_double_graphic_pane_t1_ParamLimits

0x841d,	// (0x000aafb8) list_tport_double_graphic_pane_t1

0x8432,	// (0x000aafcd) list_tport_double_graphic_pane_t2_ParamLimits

0x8432,	// (0x000aafcd) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x000b2935) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x000b2935) list_tport_double_graphic_pane_t

0x94d4,	// (0x000ac06f) main_cale_note_pane

0x5da6,	// (0x000a8941) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5da6,	// (0x000a8941) cell_vitu2_function_top_wide_pane_cp01

0x787c,	// (0x000aa417) wait_bar_pane_cp05_ParamLimits

0xa7fa,	// (0x000ad395) listscroll_cmail_pane

0xb3a2,	// (0x000adf3d) list_cmail_pane

0x8444,	// (0x000aafdf) list_cmail_body_pane

0x8459,	// (0x000aaff4) list_single_cmail_header_caption_pane

0x846f,	// (0x000ab00a) list_single_cmail_header_detail_pane_ParamLimits

0x846f,	// (0x000ab00a) list_single_cmail_header_detail_pane

0xb3b2,	// (0x000adf4d) list_single_cmail_header_caption_pane_t1

0x8498,	// (0x000ab033) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8498,	// (0x000ab033) list_single_cmail_header_detail_pane_g1

0xf0ad,	// (0x000b1c48) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf0ad,	// (0x000b1c48) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x000b293a) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x000b293a) list_single_cmail_header_detail_pane_g

0xed76,	// (0x000b1911) list_single_cmail_header_detail_pane_t1_ParamLimits

0xed76,	// (0x000b1911) list_single_cmail_header_detail_pane_t1

0xedd6,	// (0x000b1971) list_single_cmail_header_editor_pane_bg_ParamLimits

0xedd6,	// (0x000b1971) list_single_cmail_header_editor_pane_bg

0xabdf,	// (0x000ad77a) list_cmail_body_pane_g1

0xb3d6,	// (0x000adf71) list_cmail_body_pane_t1

0xe432,	// (0x000b0fcd) list_single_cmail_header_editor_pane_bg_g1

0xaeee,	// (0x000ada89) list_single_cmail_header_editor_pane_bg_g1_copy1

0xe442,	// (0x000b0fdd) list_single_cmail_header_editor_pane_bg_g1_copy2

0xe43a,	// (0x000b0fd5) list_single_cmail_header_editor_pane_bg_g1_copy3

0xe686,	// (0x000b1221) list_single_cmail_header_editor_pane_bg_g1_copy4

0xe462,	// (0x000b0ffd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xe452,	// (0x000b0fed) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xe45a,	// (0x000b0ff5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa7e2,	// (0x000ad37d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x84b0,	// (0x000ab04b) calenote_gesture_pane_ParamLimits

0x84b0,	// (0x000ab04b) calenote_gesture_pane

0x84d0,	// (0x000ab06b) calenote_window_pane_ParamLimits

0x84d0,	// (0x000ab06b) calenote_window_pane

0xb3e4,	// (0x000adf7f) popup_note_window_cp01

0x84ec,	// (0x000ab087) calenote_swipe_1_pane_ParamLimits

0x84ec,	// (0x000ab087) calenote_swipe_1_pane

0x7cca,	// (0x000aa865) calenote_swipe_2_pane_ParamLimits

0x7cca,	// (0x000aa865) calenote_swipe_2_pane

0xb1d2,	// (0x000add6d) calenote_swipe_1_pane_g1_ParamLimits

0xb1d2,	// (0x000add6d) calenote_swipe_1_pane_g1

0xb1df,	// (0x000add7a) calenote_swipe_1_pane_g2_ParamLimits

0xb1df,	// (0x000add7a) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x000b285e) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x000b285e) calenote_swipe_1_pane_g

0xb3f6,	// (0x000adf91) calenote_swipe_1_pane_t1_ParamLimits

0xb3f6,	// (0x000adf91) calenote_swipe_1_pane_t1

0xb1d2,	// (0x000add6d) calenote_swipe_2_pane_g1_ParamLimits

0xb1d2,	// (0x000add6d) calenote_swipe_2_pane_g1

0xb415,	// (0x000adfb0) calenote_swipe_2_pane_g2_ParamLimits

0xb415,	// (0x000adfb0) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x000b2946) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x000b2946) calenote_swipe_2_pane_g

0xb421,	// (0x000adfbc) calenote_swipe_2_pane_t1_ParamLimits

0xb421,	// (0x000adfbc) calenote_swipe_2_pane_t1

0x94d4,	// (0x000ac06f) main_mup_navstr_pane

0x4a73,	// (0x000a760e) main_mup3_pane_t7_ParamLimits

0x4a73,	// (0x000a760e) main_mup3_pane_t7

0x9dbc,	// (0x000ac957) main_mp4_pane_g6_ParamLimits

0x9dbc,	// (0x000ac957) main_mp4_pane_g6

0x9f60,	// (0x000acafb) main_image3_pane_t4_ParamLimits

0x9f60,	// (0x000acafb) main_image3_pane_t4

0x8501,	// (0x000ab09c) popup_navstr_preview_pane_ParamLimits

0x8501,	// (0x000ab09c) popup_navstr_preview_pane

0x8515,	// (0x000ab0b0) scroll_navstr_pane_ParamLimits

0x8515,	// (0x000ab0b0) scroll_navstr_pane

0x94d4,	// (0x000ac06f) bg_popup_preview_window_pane_cp04

0xb448,	// (0x000adfe3) popup_navstr_preview_pane_t1

0x8529,	// (0x000ab0c4) scroll_navstr_pane_g1_ParamLimits

0x8529,	// (0x000ab0c4) scroll_navstr_pane_g1

0x853d,	// (0x000ab0d8) scroll_navstr_pane_t1_ParamLimits

0x853d,	// (0x000ab0d8) scroll_navstr_pane_t1

0xb3ed,	// (0x000adf88) bg_button_pane_cp014

0xb3ed,	// (0x000adf88) bg_button_pane_cp030

0x7ba3,	// (0x000aa73e) list_double_fisheye_pane_g4_ParamLimits

0x7ba3,	// (0x000aa73e) list_double_fisheye_pane_g4

0x7baf,	// (0x000aa74a) list_double_fisheye_pane_g5_ParamLimits

0x7baf,	// (0x000aa74a) list_double_fisheye_pane_g5

0xbc75,	// (0x000ae810) sp_fs_scroll_pane_cp03

0xb2f2,	// (0x000ade8d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xb2fe,	// (0x000ade99) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x000b287b) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xb30a,	// (0x000adea5) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xb3aa,	// (0x000adf45) sp_fs_scroll_pane_cp02

0xa4e8,	// (0x000ad083) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa4e8,	// (0x000ad083) popup_sp_fs_calendar_preview_list_single_pane

0x94d4,	// (0x000ac06f) main_cam6_pano_pane

0x953c,	// (0x000ac0d7) main_mup3_pane_ParamLimits

0x94d4,	// (0x000ac06f) main_phacti_pane

0x774f,	// (0x000aa2ea) bg_button_pane_cp11

0x7769,	// (0x000aa304) main_mobtv_info_pane_g2_ParamLimits

0x7769,	// (0x000aa304) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x000b27db) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x000b27db) main_mobtv_info_pane_g

0x7946,	// (0x000aa4e1) sc_clock_pane_t5_ParamLimits

0x7946,	// (0x000aa4e1) sc_clock_pane_t5

0x7a0e,	// (0x000aa5a9) main_radioblah_pane_g1_ParamLimits

0xae7c,	// (0x000ada17) main_radioblah_pane_t3_ParamLimits

0xae7c,	// (0x000ada17) main_radioblah_pane_t3

0xae94,	// (0x000ada2f) main_radioblah_pane_t4_ParamLimits

0xae94,	// (0x000ada2f) main_radioblah_pane_t4

0x7a36,	// (0x000aa5d1) main_radioblah_text_pane_ParamLimits

0x7a36,	// (0x000aa5d1) main_radioblah_text_pane

0x7a48,	// (0x000aa5e3) main_radioblah_info_pane_g1_ParamLimits

0x7ae1,	// (0x000aa67c) main_radioblah_info_pane_t4_ParamLimits

0x7ae1,	// (0x000aa67c) main_radioblah_info_pane_t4

0xa7fa,	// (0x000ad395) main_sp_fs_calendar_pane

0x8554,	// (0x000ab0ef) main_phacti_pane_g1

0x855c,	// (0x000ab0f7) phacti_note_pane_ParamLimits

0x855c,	// (0x000ab0f7) phacti_note_pane

0xb45f,	// (0x000adffa) phacti_term_pane_ParamLimits

0xb45f,	// (0x000adffa) phacti_term_pane

0xb474,	// (0x000ae00f) phacti_note_pane_t1_ParamLimits

0xb474,	// (0x000ae00f) phacti_note_pane_t1

0xeded,	// (0x000b1988) phacti_term_pane_g1

0xedf5,	// (0x000b1990) phacti_term_pane_t1_ParamLimits

0xedf5,	// (0x000b1990) phacti_term_pane_t1

0xb48b,	// (0x000ae026) popup_sp_fs_calendar_preview_list_single_pane_g1

0xa587,	// (0x000ad122) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x000b2950) popup_sp_fs_calendar_preview_list_single_pane_g

0xb493,	// (0x000ae02e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xb493,	// (0x000ae02e) popup_sp_fs_calendar_preview_list_single_pane_t1

0xb4a9,	// (0x000ae044) aid_popup_sp_fs_bg_corner_pane

0xd972,	// (0x000b050d) popup_sp_fs_calendar_preview_bg_pane_g1

0x94d4,	// (0x000ac06f) popup_sp_fs_calendar_preview_bg_pane

0xb4b1,	// (0x000ae04c) popup_sp_fs_calendar_preview_list_pane

0xd56a,	// (0x000b0105) bg_main_sp_fs_cale_pane_ParamLimits

0xd56a,	// (0x000b0105) bg_main_sp_fs_cale_pane

0xee1f,	// (0x000b19ba) listscroll_cale_mrui_pane_ParamLimits

0xee1f,	// (0x000b19ba) listscroll_cale_mrui_pane

0xee34,	// (0x000b19cf) listscroll_sp_fs_schedule_track_pane

0xee3d,	// (0x000b19d8) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xee3d,	// (0x000b19d8) main_sp_fs_ctrlbar_pane_cp01

0xb4b9,	// (0x000ae054) main_sp_fs_ribbon_pane

0xee50,	// (0x000b19eb) popup_sp_fs_cale_preview_window

0x85d1,	// (0x000ab16c) list_single_sp_fs_schedule_track_pane_ParamLimits

0x85d1,	// (0x000ab16c) list_single_sp_fs_schedule_track_pane

0xa7fa,	// (0x000ad395) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa7fa,	// (0x000ad395) bg_sp_fs_highlight_list_pane_cp03

0x85e4,	// (0x000ab17f) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x85e4,	// (0x000ab17f) list_single_sp_fs_schedule_track_pane_g1

0x85f0,	// (0x000ab18b) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x85f0,	// (0x000ab18b) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x000b2955) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x000b2955) list_single_sp_fs_schedule_track_pane_g

0x85fc,	// (0x000ab197) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x85fc,	// (0x000ab197) list_single_sp_fs_schedule_track_pane_t1

0x8616,	// (0x000ab1b1) sp_fs_schedule_track_pane_ParamLimits

0x8616,	// (0x000ab1b1) sp_fs_schedule_track_pane

0xb4c1,	// (0x000ae05c) sp_fs_schedule_track_pane_g1

0xb4c9,	// (0x000ae064) sp_fs_schedule_track_pane_g2

0xb4d1,	// (0x000ae06c) sp_fs_schedule_track_pane_g3

0xb4d9,	// (0x000ae074) sp_fs_schedule_track_pane_g4

0xb4e1,	// (0x000ae07c) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x000b295a) sp_fs_schedule_track_pane_g

0xe432,	// (0x000b0fcd) bg_sp_fs_schedule_viewer_highlight_g1

0xaeee,	// (0x000ada89) bg_sp_fs_schedule_viewer_highlight_g2

0xe43a,	// (0x000b0fd5) bg_sp_fs_schedule_viewer_highlight_g3

0xe442,	// (0x000b0fdd) bg_sp_fs_schedule_viewer_highlight_g4

0xe686,	// (0x000b1221) bg_sp_fs_schedule_viewer_highlight_g5

0xe452,	// (0x000b0fed) bg_sp_fs_schedule_viewer_highlight_g6

0xe45a,	// (0x000b0ff5) bg_sp_fs_schedule_viewer_highlight_g7

0xe462,	// (0x000b0ffd) bg_sp_fs_schedule_viewer_highlight_g8

0xa7e2,	// (0x000ad37d) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x000b2965) bg_sp_fs_schedule_viewer_highlight_g

0x94d4,	// (0x000ac06f) bg_main_sp_fs_ribbon_pane

0x8627,	// (0x000ab1c2) main_sp_fs_ribbon_pane_g1

0xb4e9,	// (0x000ae084) main_sp_fs_ribbon_pane_t1

0x8630,	// (0x000ab1cb) main_sp_fs_ribbon_pane_t2

0xb4f8,	// (0x000ae093) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x000b2978) main_sp_fs_ribbon_pane_t

0xb507,	// (0x000ae0a2) main_sp_fs_ribbon_scheduler_pane

0xb50f,	// (0x000ae0aa) bg_main_sp_fs_ribbon_pane_g1

0xb518,	// (0x000ae0b3) bg_main_sp_fs_ribbon_pane_g2

0xb521,	// (0x000ae0bc) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x000b297f) bg_main_sp_fs_ribbon_pane_g

0xb529,	// (0x000ae0c4) main_sp_fs_ribbon_scheduler_pane_g1

0xb532,	// (0x000ae0cd) main_sp_fs_ribbon_scheduler_pane_g2

0xb53b,	// (0x000ae0d6) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x000b2986) main_sp_fs_ribbon_scheduler_pane_g

0xb544,	// (0x000ae0df) list_cale_mrui_pane

0x863f,	// (0x000ab1da) sp_fs_scroll_pane_cp07_ParamLimits

0x863f,	// (0x000ab1da) sp_fs_scroll_pane_cp07

0x865b,	// (0x000ab1f6) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x865b,	// (0x000ab1f6) bg_sp_fs_schedule_viewer_highlight

0xb551,	// (0x000ae0ec) list_single_sp_fs_schedule_track_pane_cp01

0xb559,	// (0x000ae0f4) list_sp_fs_schedule_track_pane

0xb561,	// (0x000ae0fc) sp_fs_scroll_pane_cp06_ParamLimits

0xb561,	// (0x000ae0fc) sp_fs_scroll_pane_cp06

0xd972,	// (0x000b050d) bgmain_sp_fs_calendar_pane_g1

0x866b,	// (0x000ab206) list_single_cale_mrui_pane_ParamLimits

0x866b,	// (0x000ab206) list_single_cale_mrui_pane

0xee62,	// (0x000b19fd) list_single_cale_mrui_row_pane_ParamLimits

0xee62,	// (0x000b19fd) list_single_cale_mrui_row_pane

0xee6f,	// (0x000b1a0a) list_single_cale_mrui_row_pane_g1_ParamLimits

0xee6f,	// (0x000b1a0a) list_single_cale_mrui_row_pane_g1

0xeea7,	// (0x000b1a42) list_single_cale_mrui_row_pane_t1_ParamLimits

0xeea7,	// (0x000b1a42) list_single_cale_mrui_row_pane_t1

0x868c,	// (0x000ab227) list_single_cale_mrui_row_pane_t2_ParamLimits

0x868c,	// (0x000ab227) list_single_cale_mrui_row_pane_t2

0xeeb9,	// (0x000b1a54) list_single_cale_mrui_row_pane_t3_ParamLimits

0xeeb9,	// (0x000b1a54) list_single_cale_mrui_row_pane_t3

0xeee8,	// (0x000b1a83) list_single_cale_mrui_row_pane_t4_ParamLimits

0xeee8,	// (0x000b1a83) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x000b2994) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x000b2994) list_single_cale_mrui_row_pane_t

0x86f4,	// (0x000ab28f) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x86f4,	// (0x000ab28f) list_single_cmail_header_editor_pane_bg_cp01

0x871a,	// (0x000ab2b5) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x871a,	// (0x000ab2b5) list_single_cmail_header_editor_pane_bg_cp02

0x873a,	// (0x000ab2d5) main_radioblah_text_pane_t1_ParamLimits

0x873a,	// (0x000ab2d5) main_radioblah_text_pane_t1

0xb580,	// (0x000ae11b) cam6_indi_pane_cp01

0xb588,	// (0x000ae123) cam6_mode_pane_cp01

0xb590,	// (0x000ae12b) cam6_pano_pane

0xb599,	// (0x000ae134) cam6_zoom_pane_cp01

0xb5a1,	// (0x000ae13c) cam6_pano_image_pane

0xb5ac,	// (0x000ae147) cam6_pano_pane_g1

0xabdf,	// (0x000ad77a) cam6_pano_pane_g2

0xb5b5,	// (0x000ae150) cam6_pano_pane_g3

0xb5be,	// (0x000ae159) cam6_pano_pane_g4

0xdf96,	// (0x000b0b31) cam6_pano_pane_g5

0xb5c7,	// (0x000ae162) cam6_pano_pane_g6

0xf0c2,	// (0x000b1c5d) cam6_pano_pane_g7

0xb5d1,	// (0x000ae16c) cam6_pano_pane_g8

0xb5da,	// (0x000ae175) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x000b299d) cam6_pano_pane_g

0x94d4,	// (0x000ac06f) main_browser_tag_pane

0xb440,	// (0x000adfdb) grid_navstr_albumart_pane

0xb5e5,	// (0x000ae180) cell_navstr_albumart_pane_ParamLimits

0xb5e5,	// (0x000ae180) cell_navstr_albumart_pane

0xb605,	// (0x000ae1a0) cell_navstr_albumart_pane_g1

0xd37b,	// (0x000aff16) cell_navstr_albumart_pane_g2

0xd38b,	// (0x000aff26) cell_navstr_albumart_pane_g3

0xd383,	// (0x000aff1e) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x000b29b0) cell_navstr_albumart_pane_g

0x8754,	// (0x000ab2ef) bt_list_pane_ParamLimits

0x8754,	// (0x000ab2ef) bt_list_pane

0x8768,	// (0x000ab303) bt_list_pane_t1

0x8777,	// (0x000ab312) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x000b29b9) bt_list_pane_t

0x94d4,	// (0x000ac06f) main_cale_prevew_pane

0x8786,	// (0x000ab321) popup_cale_preview_window_ParamLimits

0x8786,	// (0x000ab321) popup_cale_preview_window

0xa7fa,	// (0x000ad395) bg_popup_preview_window_pane_cp05_ParamLimits

0xa7fa,	// (0x000ad395) bg_popup_preview_window_pane_cp05

0xb60d,	// (0x000ae1a8) list_cale_preview_pane_ParamLimits

0xb60d,	// (0x000ae1a8) list_cale_preview_pane

0x87a1,	// (0x000ab33c) list_double_cale_preview_pane_ParamLimits

0x87a1,	// (0x000ab33c) list_double_cale_preview_pane

0x87b3,	// (0x000ab34e) list_single_cale_preview_pane_ParamLimits

0x87b3,	// (0x000ab34e) list_single_cale_preview_pane

0x87c9,	// (0x000ab364) list_single_cale_preview_pane_g1

0x87d1,	// (0x000ab36c) list_single_cale_preview_pane_t1_ParamLimits

0x87d1,	// (0x000ab36c) list_single_cale_preview_pane_t1

0x87e6,	// (0x000ab381) list_double_cale_preview_pane_g1

0x87ee,	// (0x000ab389) list_double_cale_preview_pane_t1_ParamLimits

0x87ee,	// (0x000ab389) list_double_cale_preview_pane_t1

0x8803,	// (0x000ab39e) list_double_cale_preview_pane_t2_ParamLimits

0x8803,	// (0x000ab39e) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x000b29be) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x000b29be) list_double_cale_preview_pane_t

0x94d4,	// (0x000ac06f) main_ezdial_pane

0xa7fa,	// (0x000ad395) main_sp_fs_email_pane_ParamLimits

0x7d52,	// (0x000aa8ed) cmail_ddmenu_btn01_pane_ParamLimits

0x7d52,	// (0x000aa8ed) cmail_ddmenu_btn01_pane

0x7d65,	// (0x000aa900) cmail_ddmenu_btn02_pane_ParamLimits

0x7d65,	// (0x000aa900) cmail_ddmenu_btn02_pane

0x7d88,	// (0x000aa923) cmail_ddmenu_btn03_pane_ParamLimits

0x7d88,	// (0x000aa923) cmail_ddmenu_btn03_pane

0x7dae,	// (0x000aa949) main_sp_fs_ctrlbar_pane_ParamLimits

0x7dd2,	// (0x000aa96d) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8444,	// (0x000aafdf) list_cmail_body_pane_ParamLimits

0xb3c0,	// (0x000adf5b) bg_button_pane_cp12

0xb3c9,	// (0x000adf64) list_single_cmail_header_detail_pane_g3_ParamLimits

0xb3c9,	// (0x000adf64) list_single_cmail_header_detail_pane_g3

0xedb2,	// (0x000b194d) list_single_cmail_header_detail_pane_t2_ParamLimits

0xedb2,	// (0x000b194d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x000b2941) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x000b2941) list_single_cmail_header_detail_pane_t

0xee0a,	// (0x000b19a5) phacti_term_pane_t2_ParamLimits

0xee0a,	// (0x000b19a5) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x000b294b) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x000b294b) phacti_term_pane_t

0xb619,	// (0x000ae1b4) aid_size_list_single_double

0x881b,	// (0x000ab3b6) popup_ezdial_listscroll_window

0x8837,	// (0x000ab3d2) popup_number_entry_window_cp01

0xa5a9,	// (0x000ad144) bg_popup_call_pane_cp09

0xb625,	// (0x000ae1c0) ezdial_list_pane

0xb62d,	// (0x000ae1c8) scroll_pane_cp23

0xd56a,	// (0x000b0105) bg_button_pane_cp028_ParamLimits

0xd56a,	// (0x000b0105) bg_button_pane_cp028

0x8845,	// (0x000ab3e0) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8845,	// (0x000ab3e0) cmail_ddmenu_btn01_pane_g1

0x8851,	// (0x000ab3ec) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8851,	// (0x000ab3ec) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x000b29c3) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x000b29c3) cmail_ddmenu_btn01_pane_g

0xb635,	// (0x000ae1d0) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xb635,	// (0x000ae1d0) cmail_ddmenu_btn01_pane_t1

0xd56a,	// (0x000b0105) bg_button_pane_cp029_ParamLimits

0xd56a,	// (0x000b0105) bg_button_pane_cp029

0x885d,	// (0x000ab3f8) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x885d,	// (0x000ab3f8) cmail_ddmenu_btn02_pane_g1

0x8876,	// (0x000ab411) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8876,	// (0x000ab411) cmail_ddmenu_btn02_pane_t1

0xa7fa,	// (0x000ad395) bg_button_pane_cp031_ParamLimits

0xa7fa,	// (0x000ad395) bg_button_pane_cp031

0x885d,	// (0x000ab3f8) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x885d,	// (0x000ab3f8) cmail_ddmenu_btn03_pane_g1

0x8876,	// (0x000ab411) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8876,	// (0x000ab411) cmail_ddmenu_btn03_pane_t1

0x561d,	// (0x000a81b8) cell_dialer2_keypad_pane_t1_ParamLimits

0x5637,	// (0x000a81d2) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5637,	// (0x000a81d2) cell_dialer2_keypad_pane_t1_copy1

0x7564,	// (0x000aa0ff) ncimui_group_button_pane

0xa7fa,	// (0x000ad395) main_sp_fs_calendar_pane_ParamLimits

0x8459,	// (0x000aaff4) list_single_cmail_header_caption_pane_ParamLimits

0xf0b9,	// (0x000b1c54) aid_recal_txt_sm_pane

0x94d4,	// (0x000ac06f) mian_recal_day_pane

0xee50,	// (0x000b19eb) popup_sp_fs_cale_preview_window_ParamLimits

0xb64a,	// (0x000ae1e5) list_recal_day_pane

0xef32,	// (0x000b1acd) list_single_recal_day_pane_ParamLimits

0xef32,	// (0x000b1acd) list_single_recal_day_pane

0xb671,	// (0x000ae20c) list_single_recal_day_pane_g1_ParamLimits

0xb671,	// (0x000ae20c) list_single_recal_day_pane_g1

0xef44,	// (0x000b1adf) list_single_recal_day_pane_g2_ParamLimits

0xef44,	// (0x000b1adf) list_single_recal_day_pane_g2

0xef50,	// (0x000b1aeb) list_single_recal_day_pane_g3_ParamLimits

0xef50,	// (0x000b1aeb) list_single_recal_day_pane_g3

0x889a,	// (0x000ab435) list_single_recal_day_pane_g4_ParamLimits

0x889a,	// (0x000ab435) list_single_recal_day_pane_g4

0xef5c,	// (0x000b1af7) list_single_recal_day_pane_g5_ParamLimits

0xef5c,	// (0x000b1af7) list_single_recal_day_pane_g5

0xef68,	// (0x000b1b03) list_single_recal_day_pane_g6_ParamLimits

0xef68,	// (0x000b1b03) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x000b29d2) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x000b29d2) list_single_recal_day_pane_g

0xef7c,	// (0x000b1b17) list_single_recal_day_pane_t1

0xef8e,	// (0x000b1b29) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x000b29dd) list_single_recal_day_pane_t

0x88b2,	// (0x000ab44d) ncimui_query_button_pane_ParamLimits

0x88b2,	// (0x000ab44d) ncimui_query_button_pane

0x88c2,	// (0x000ab45d) ncimui_query_button_pane_t1_ParamLimits

0x88c2,	// (0x000ab45d) ncimui_query_button_pane_t1

0xb67d,	// (0x000ae218) ncimui_query_button_pane_t2_ParamLimits

0xb67d,	// (0x000ae218) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x000b29e2) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x000b29e2) ncimui_query_button_pane_t

0x88d5,	// (0x000ab470) query_button_pane_ParamLimits

0x88d5,	// (0x000ab470) query_button_pane

0x94d4,	// (0x000ac06f) bg_button_pane_cp0028

0xb690,	// (0x000ae22b) query_button_pane_t1

0x369e,	// (0x000a6239) main_tport_pane_ParamLimits

0x8308,	// (0x000aaea3) bg_popup_window_pane_cp01_ParamLimits

0x8308,	// (0x000aaea3) bg_popup_window_pane_cp01

0x8323,	// (0x000aaebe) heading_pane_cp08_ParamLimits

0x8323,	// (0x000aaebe) heading_pane_cp08

0x8336,	// (0x000aaed1) heading_pane_cp07_ParamLimits

0x8336,	// (0x000aaed1) heading_pane_cp07

0x83dd,	// (0x000aaf78) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x000b292e) cell_tport_appsw_pane_g

0x2c33,	// (0x000a57ce) input_candi_list_open_g1

0xb0b1,	// (0x000adc4c) list_cale_time_pane_g6_ParamLimits

0xb0b1,	// (0x000adc4c) list_cale_time_pane_g6

0x4467,	// (0x000a7002) aid_size_touch_calib_1_ParamLimits

0x4467,	// (0x000a7002) aid_size_touch_calib_1

0x4479,	// (0x000a7014) aid_size_touch_calib_2_ParamLimits

0x4479,	// (0x000a7014) aid_size_touch_calib_2

0x4491,	// (0x000a702c) aid_size_touch_calib_3_ParamLimits

0x4491,	// (0x000a702c) aid_size_touch_calib_3

0x44af,	// (0x000a704a) aid_size_touch_calib_4_ParamLimits

0x44af,	// (0x000a704a) aid_size_touch_calib_4

0x44c7,	// (0x000a7062) main_touch_calib_button_group_pane_ParamLimits

0x44c7,	// (0x000a7062) main_touch_calib_button_group_pane

0x44df,	// (0x000a707a) main_touch_calib_pane_g1_ParamLimits

0x44f1,	// (0x000a708c) main_touch_calib_pane_g2_ParamLimits

0x4503,	// (0x000a709e) main_touch_calib_pane_g3_ParamLimits

0x4515,	// (0x000a70b0) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x000b22ec) main_touch_calib_pane_g_ParamLimits

0x4527,	// (0x000a70c2) main_touch_calib_pane_t1_ParamLimits

0x4541,	// (0x000a70dc) main_touch_calib_pane_t2_ParamLimits

0x455b,	// (0x000a70f6) main_touch_calib_pane_t3_ParamLimits

0x456f,	// (0x000a710a) main_touch_calib_pane_t4_ParamLimits

0x4583,	// (0x000a711e) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x000b22f5) main_touch_calib_pane_t_ParamLimits

0xdd36,	// (0x000b08d1) list_single_fp_cale_pane_g3_ParamLimits

0xdd36,	// (0x000b08d1) list_single_fp_cale_pane_g3

0x953c,	// (0x000ac0d7) bg_button_pane_cp012_ParamLimits

0x953c,	// (0x000ac0d7) bg_vkb2_func_pane_cp03_ParamLimits

0x6596,	// (0x000a9131) cell_vitu2_function_top_pane_g1_ParamLimits

0x953c,	// (0x000ac0d7) bg_vkb2_func_pane_cp04_ParamLimits

0x74ef,	// (0x000aa08a) main_ncimui_button_group_pane_ParamLimits

0x74ef,	// (0x000aa08a) main_ncimui_button_group_pane

0x754f,	// (0x000aa0ea) main_ncimui_pane_t3_ParamLimits

0x754f,	// (0x000aa0ea) main_ncimui_pane_t3

0xb456,	// (0x000adff1) phacti_button_group_pane

0xb619,	// (0x000ae1b4) aid_size_list_single_double_ParamLimits

0x881b,	// (0x000ab3b6) popup_ezdial_listscroll_window_ParamLimits

0x8837,	// (0x000ab3d2) popup_number_entry_window_cp01_ParamLimits

0x88e8,	// (0x000ab483) phacti_button_pane_ParamLimits

0x88e8,	// (0x000ab483) phacti_button_pane

0x94d4,	// (0x000ac06f) bg_button_pane_cp14

0xb69e,	// (0x000ae239) phacti_button_pane_t1

0x88f9,	// (0x000ab494) main_touch_calib_button_pane_ParamLimits

0x88f9,	// (0x000ab494) main_touch_calib_button_pane

0xa3e4,	// (0x000acf7f) bg_button_pane_cp18_ParamLimits

0xa3e4,	// (0x000acf7f) bg_button_pane_cp18

0xb6ac,	// (0x000ae247) main_touch_calib_button_pane_t1_ParamLimits

0xb6ac,	// (0x000ae247) main_touch_calib_button_pane_t1

0xb6c2,	// (0x000ae25d) main_touch_calib_button_pane_t2_ParamLimits

0xb6c2,	// (0x000ae25d) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x000b29e7) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x000b29e7) main_touch_calib_button_pane_t

0x94d4,	// (0x000ac06f) cell_ncimui_button_pane

0x94d4,	// (0x000ac06f) bg_button_pane_cp032

0xb6e0,	// (0x000ae27b) cell_ncimui_button_pane_t1

0x9f40,	// (0x000acadb) image3_infobar_pane_ParamLimits

0x9f40,	// (0x000acadb) image3_infobar_pane

0x7972,	// (0x000aa50d) fs_bigclock_status_pane_ParamLimits

0x7972,	// (0x000aa50d) fs_bigclock_status_pane

0x797f,	// (0x000aa51a) main_fs_bigclock_clock_pane_ParamLimits

0x797f,	// (0x000aa51a) main_fs_bigclock_clock_pane

0x799d,	// (0x000aa538) main_fs_bigclock_indi_pane_ParamLimits

0x799d,	// (0x000aa538) main_fs_bigclock_indi_pane

0x79cf,	// (0x000aa56a) main_fs_bigclock_swipe_pane_ParamLimits

0x79cf,	// (0x000aa56a) main_fs_bigclock_swipe_pane

0x94d4,	// (0x000ac06f) main_fs_clock_dumped_data

0xacec,	// (0x000ad887) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xacec,	// (0x000ad887) list_single_fs_bigclock_indicator_pane_g1

0xad07,	// (0x000ad8a2) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xad07,	// (0x000ad8a2) list_single_fs_bigclock_indicator_pane_g2

0xad21,	// (0x000ad8bc) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xad21,	// (0x000ad8bc) list_single_fs_bigclock_indicator_pane_g3

0xad3b,	// (0x000ad8d6) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xad3b,	// (0x000ad8d6) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x000b280f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x000b280f) list_single_fs_bigclock_indicator_pane_g

0xad66,	// (0x000ad901) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xad66,	// (0x000ad901) list_single_fs_bigclock_indicator_pane_t1

0xad8e,	// (0x000ad929) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xad8e,	// (0x000ad929) list_single_fs_bigclock_indicator_pane_t2

0xadb6,	// (0x000ad951) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xadb6,	// (0x000ad951) list_single_fs_bigclock_indicator_pane_t3

0xadde,	// (0x000ad979) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xadde,	// (0x000ad979) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x000b281a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x000b281a) list_single_fs_bigclock_indicator_pane_t

0xb6ee,	// (0x000ae289) image3_infobar_fav_pane_ParamLimits

0xb6ee,	// (0x000ae289) image3_infobar_fav_pane

0xb6fe,	// (0x000ae299) image3_infobar_loc_pane_ParamLimits

0xb6fe,	// (0x000ae299) image3_infobar_loc_pane

0xb712,	// (0x000ae2ad) image3_infobar_time_pane_ParamLimits

0xb712,	// (0x000ae2ad) image3_infobar_time_pane

0xd972,	// (0x000b050d) image3_infobar_time_pane_g1

0xb722,	// (0x000ae2bd) image3_infobar_time_pane_t1

0xd972,	// (0x000b050d) image3_infobar_loc_pane_g1

0xb730,	// (0x000ae2cb) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x000b29ec) image3_infobar_loc_pane_g

0xb738,	// (0x000ae2d3) image3_infobar_loc_pane_t1

0xd972,	// (0x000b050d) image3_infobar_fav_pane_g1

0xb746,	// (0x000ae2e1) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x000b29f1) image3_infobar_fav_pane_g

0xb74e,	// (0x000ae2e9) fs_bigclock_status_battery_pane

0xb757,	// (0x000ae2f2) fs_bigclock_status_signal_pane

0xb760,	// (0x000ae2fb) fs_bigclock_status_title_pane

0xb769,	// (0x000ae304) fs_bigclock_status_signal_pane_g1

0xb772,	// (0x000ae30d) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x000b29f6) fs_bigclock_status_signal_pane_g

0xb77a,	// (0x000ae315) fs_bigclock_status_battery_pane_g1

0xb783,	// (0x000ae31e) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x000b29fb) fs_bigclock_status_battery_pane_g

0xb78b,	// (0x000ae326) fs_bigclock_status_title_pane_t1

0x890e,	// (0x000ab4a9) main_fs_bigclock_clock_pane_g1

0x890e,	// (0x000ab4a9) main_fs_bigclock_clock_pane_g2

0x891f,	// (0x000ab4ba) main_fs_bigclock_clock_pane_g3

0x891f,	// (0x000ab4ba) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x000b2a00) main_fs_bigclock_clock_pane_g

0x8932,	// (0x000ab4cd) main_fs_bigclock_clock_pane_t1

0x8948,	// (0x000ab4e3) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x000b2a09) main_fs_bigclock_clock_pane_t

0xb799,	// (0x000ae334) list_single_fs_bigclock_indicator_pane_ParamLimits

0xb799,	// (0x000ae334) list_single_fs_bigclock_indicator_pane

0xb7aa,	// (0x000ae345) list_single_fs_bigclock_pane_ParamLimits

0xb7aa,	// (0x000ae345) list_single_fs_bigclock_pane

0xb7d0,	// (0x000ae36b) main_fs_bigclock_indicator_pane_t1

0xb7df,	// (0x000ae37a) list_single_fs_bigclock_pane_g1

0xb7e7,	// (0x000ae382) list_single_fs_bigclock_pane_t1

0xd972,	// (0x000b050d) main_fs_bigclock_swipe_pane_g1

0xb82a,	// (0x000ae3c5) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x000b2a1a) main_fs_bigclock_swipe_pane_g

0xb832,	// (0x000ae3cd) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xb832,	// (0x000ae3cd) main_fs_bigclock_swipe_pane_t1

0x2543,	// (0x000a50de) call_type_pane_ParamLimits

0x94d4,	// (0x000ac06f) main_btmg_pane

0xee9b,	// (0x000b1a36) list_single_cale_mrui_row_pane_g2_ParamLimits

0xee9b,	// (0x000b1a36) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x000b298d) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x000b298d) list_single_cale_mrui_row_pane_g

0xef21,	// (0x000b1abc) list_recal_vselct_arw_lo_pane

0xb669,	// (0x000ae204) list_recal_vselct_arw_up_pane

0xef29,	// (0x000b1ac4) list_recal_vselct_pane

0x89a2,	// (0x000ab53d) btmg_button_pane

0x89ac,	// (0x000ab547) main_btmg_pane_g1

0x94d4,	// (0x000ac06f) bg_button_pane_cp044

0xb84f,	// (0x000ae3ea) btmg_button_pane_t1

0xd556,	// (0x000b00f1) aid_listscroll_gen

0xa7fa,	// (0x000ad395) main_cntbar_detail_pane

0xb3a2,	// (0x000adf3d) list_cmail_folder_pane

0xbc75,	// (0x000ae810) sp_fs_scroll_pane_cp03_ParamLimits

0x89b6,	// (0x000ab551) list_single_fs_dyc_pane_cp01_ParamLimits

0x89b6,	// (0x000ab551) list_single_fs_dyc_pane_cp01

0xb85d,	// (0x000ae3f8) aid_size_cmail_indent

0xefa0,	// (0x000b1b3b) list_single_dyc_row_pane_cp01

0x89fd,	// (0x000ab598) cntbar_detail_list_pane_ParamLimits

0x89fd,	// (0x000ab598) cntbar_detail_list_pane

0x8a49,	// (0x000ab5e4) main_cntbar_detail_cont_pane_ParamLimits

0x8a49,	// (0x000ab5e4) main_cntbar_detail_cont_pane

0xbc75,	// (0x000ae810) scroll_pane_cp032_ParamLimits

0xbc75,	// (0x000ae810) scroll_pane_cp032

0x8a5d,	// (0x000ab5f8) cntbar_detail_list_event_pane_ParamLimits

0x8a5d,	// (0x000ab5f8) cntbar_detail_list_event_pane

0x8a0d,	// (0x000ab5a8) cntbar_detail_list_shct_pane

0xaf3c,	// (0x000adad7) aid_list_gen

0xb866,	// (0x000ae401) aid_scroll

0xb86f,	// (0x000ae40a) aid_size_touch_scroll_bar

0x6c85,	// (0x000a9820) aid_list_double

0x8a6d,	// (0x000ab608) aid_list_single

0x6c85,	// (0x000a9820) aid_list_single_lg

0x8a76,	// (0x000ab611) aid_list_z_g_a_sm

0x8a7e,	// (0x000ab619) aid_list_z_g_d

0x8a86,	// (0x000ab621) aid_txt_z_prm

0x8a94,	// (0x000ab62f) aid_txt_z_prm_cp01

0x8aa2,	// (0x000ab63d) aid_txt_z_sec

0x8ab0,	// (0x000ab64b) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8ab0,	// (0x000ab64b) main_cntbar_detail_cont_pane_g1

0x8ac4,	// (0x000ab65f) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8ac4,	// (0x000ab65f) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x000b2a1f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x000b2a1f) main_cntbar_detail_cont_pane_g

0xb878,	// (0x000ae413) main_cntbar_detail_cont_pane_t1

0xb886,	// (0x000ae421) main_cntbar_detail_cont_pane_t2

0xb894,	// (0x000ae42f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x000b2a24) main_cntbar_detail_cont_pane_t

0x8ad4,	// (0x000ab66f) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8ad4,	// (0x000ab66f) cell_cntbar_detail_list_shct_pane

0xb8a2,	// (0x000ae43d) cntbar_detail_list_shct_pane_g1

0xb8ab,	// (0x000ae446) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x000b2a2b) cntbar_detail_list_shct_pane_g

0x8ae8,	// (0x000ab683) cntbar_detail_list_event_pane_g1_ParamLimits

0x8ae8,	// (0x000ab683) cntbar_detail_list_event_pane_g1

0x8af4,	// (0x000ab68f) cntbar_detail_list_event_pane_g2_ParamLimits

0x8af4,	// (0x000ab68f) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x000b2a30) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x000b2a30) cntbar_detail_list_event_pane_g

0x8b60,	// (0x000ab6fb) cntbar_detail_list_event_pane_t1_ParamLimits

0x8b60,	// (0x000ab6fb) cntbar_detail_list_event_pane_t1

0x8b75,	// (0x000ab710) cntbar_detail_list_event_pane_t2_ParamLimits

0x8b75,	// (0x000ab710) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x000b2a3d) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x000b2a3d) cntbar_detail_list_event_pane_t

0xd972,	// (0x000b050d) cell_cntbar_detail_list_shct_pane_g1

0xc124,	// (0x000aecbf) navi_pane_mv_g3

0xa7fa,	// (0x000ad395) main_cntbar_detail_pane_ParamLimits

0x94d4,	// (0x000ac06f) main_notif_wgt_pane

0x9d56,	// (0x000ac8f1) aid_tch_main_mp4_pane_g4

0x9f38,	// (0x000acad3) popup_slider_window_cp02

0xef17,	// (0x000b1ab2) list_recal_day_event_pane

0x89cb,	// (0x000ab566) cntbar_detail_btn_pane_ParamLimits

0x89cb,	// (0x000ab566) cntbar_detail_btn_pane

0x89e4,	// (0x000ab57f) cntbar_detail_btn_pane_cp01_ParamLimits

0x89e4,	// (0x000ab57f) cntbar_detail_btn_pane_cp01

0x8a0d,	// (0x000ab5a8) cntbar_detail_list_shct_pane_ParamLimits

0x8a1d,	// (0x000ab5b8) cntbar_detail_pane_g1_ParamLimits

0x8a1d,	// (0x000ab5b8) cntbar_detail_pane_g1

0x8a2d,	// (0x000ab5c8) cntbar_detail_pane_t1_ParamLimits

0x8a2d,	// (0x000ab5c8) cntbar_detail_pane_t1

0x8b00,	// (0x000ab69b) cntbar_detail_list_event_pane_g3_ParamLimits

0x8b00,	// (0x000ab69b) cntbar_detail_list_event_pane_g3

0x8b18,	// (0x000ab6b3) cntbar_detail_list_event_pane_g4_ParamLimits

0x8b18,	// (0x000ab6b3) cntbar_detail_list_event_pane_g4

0x8b30,	// (0x000ab6cb) cntbar_detail_list_event_pane_g5_ParamLimits

0x8b30,	// (0x000ab6cb) cntbar_detail_list_event_pane_g5

0x8b48,	// (0x000ab6e3) cntbar_detail_list_event_pane_g6_ParamLimits

0x8b48,	// (0x000ab6e3) cntbar_detail_list_event_pane_g6

0x8b8a,	// (0x000ab725) cntbar_detail_list_event_pane_t3_ParamLimits

0x8b8a,	// (0x000ab725) cntbar_detail_list_event_pane_t3

0x8b9c,	// (0x000ab737) popup_notif_wgt_window_ParamLimits

0x8b9c,	// (0x000ab737) popup_notif_wgt_window

0x8bb5,	// (0x000ab750) popup_submenu_window_cp01_ParamLimits

0x8bb5,	// (0x000ab750) popup_submenu_window_cp01

0xa5a9,	// (0x000ad144) bg_popup_window_pane_cp10

0xb8b4,	// (0x000ae44f) listscroll_notif_wgt_pane

0xb8c6,	// (0x000ae461) list_notif_wgt_window

0xb8cf,	// (0x000ae46a) scroll_pane_cp033

0x8bcb,	// (0x000ab766) list_notif_wgt_row_pane_ParamLimits

0x8bcb,	// (0x000ab766) list_notif_wgt_row_pane

0xb8d8,	// (0x000ae473) aid_size_list_notif_wgt_del

0xb8e5,	// (0x000ae480) list_notif_wgt_row_pane_g1

0xb8f1,	// (0x000ae48c) list_notif_wgt_row_pane_g2

0xb900,	// (0x000ae49b) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x000b2a44) list_notif_wgt_row_pane_g

0xb90d,	// (0x000ae4a8) list_notif_wgt_row_pane_t1

0xb923,	// (0x000ae4be) list_notif_wgt_row_pane_t2

0xb935,	// (0x000ae4d0) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x000b2a4b) list_notif_wgt_row_pane_t

0xe6a0,	// (0x000b123b) list_recal_day_event_pane_g1

0xb947,	// (0x000ae4e2) list_recal_day_event_pane_t1

0x94d4,	// (0x000ac06f) bg_button_pane_cp045

0x8bdb,	// (0x000ab776) cntbar_detail_btn_pane_t1

0xd56a,	// (0x000b0105) main_callh_pane_ParamLimits

0xd56a,	// (0x000b0105) main_callh_pane

0x94d4,	// (0x000ac06f) main_coverflow0_pane

0x94d4,	// (0x000ac06f) main_wgtman_pane

0x79e7,	// (0x000aa582) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x79e7,	// (0x000aa582) main_fs_bigclock_unlock_btn_pane

0x83d5,	// (0x000aaf70) bg_button_pane_cp16

0x83e5,	// (0x000aaf80) cell_tport_appsw_pane_g3

0x8be9,	// (0x000ab784) cf0_flow_pane_ParamLimits

0x8be9,	// (0x000ab784) cf0_flow_pane

0xb956,	// (0x000ae4f1) listscroll_cf0_pane

0xb961,	// (0x000ae4fc) main_cf0_pane_g1

0x8bfe,	// (0x000ab799) main_cf0_pane_t1_ParamLimits

0x8bfe,	// (0x000ab799) main_cf0_pane_t1

0x8c15,	// (0x000ab7b0) main_cf0_pane_t2_ParamLimits

0x8c15,	// (0x000ab7b0) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x000b2a57) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x000b2a57) main_cf0_pane_t

0xb973,	// (0x000ae50e) scroll_pane_cp11

0x8c2c,	// (0x000ab7c7) cf0_flow_pane_g1

0x8c34,	// (0x000ab7cf) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x000b2a5c) cf0_flow_pane_g

0x8c3c,	// (0x000ab7d7) cf0_flow_pane_t1

0x94d4,	// (0x000ac06f) main_call6_pane

0x94d4,	// (0x000ac06f) main_calllock_pane

0x8c4a,	// (0x000ab7e5) call6_btn_grp_pane_ParamLimits

0x8c4a,	// (0x000ab7e5) call6_btn_grp_pane

0x8c64,	// (0x000ab7ff) call6_pane_g1_ParamLimits

0x8c64,	// (0x000ab7ff) call6_pane_g1

0x8c7a,	// (0x000ab815) popup_call6_1st_window_ParamLimits

0x8c7a,	// (0x000ab815) popup_call6_1st_window

0x8c8b,	// (0x000ab826) popup_call6_2nd_window_ParamLimits

0x8c8b,	// (0x000ab826) popup_call6_2nd_window

0x8c9c,	// (0x000ab837) cell_call6_btn_pane_ParamLimits

0x8c9c,	// (0x000ab837) cell_call6_btn_pane

0xa5a9,	// (0x000ad144) bg_popup_call2_in_pane_cp03

0xb97e,	// (0x000ae519) popup_call6_1st_window_g1

0xb986,	// (0x000ae521) popup_call6_1st_window_g2

0xb98e,	// (0x000ae529) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x000b2a61) popup_call6_1st_window_g

0xb996,	// (0x000ae531) popup_call6_1st_window_t1

0xb9a5,	// (0x000ae540) popup_call6_1st_window_t2

0xb9b3,	// (0x000ae54e) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x000b2a68) popup_call6_1st_window_t

0xa5a9,	// (0x000ad144) bg_popup_call2_in_pane_cp04

0xb97e,	// (0x000ae519) popup_call6_2nd_window_g1

0xb986,	// (0x000ae521) popup_call6_2nd_window_g2

0xb98e,	// (0x000ae529) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x000b2a61) popup_call6_2nd_window_g

0xb996,	// (0x000ae531) popup_call6_2nd_window_t1

0x954a,	// (0x000ac0e5) bg_button_pane_cp15

0xa1c0,	// (0x000acd5b) cell_call6_btn_pane_g1

0xa1c9,	// (0x000acd64) cell_call6_btn_pane_t1

0x8caf,	// (0x000ab84a) listscroll_wgtman_pane_ParamLimits

0x8caf,	// (0x000ab84a) listscroll_wgtman_pane

0x8cd0,	// (0x000ab86b) wgtman_btn_pane_ParamLimits

0x8cd0,	// (0x000ab86b) wgtman_btn_pane

0xbf2b,	// (0x000aeac6) aid_scroll_copy1

0xb9c1,	// (0x000ae55c) list_wgtman_pane

0x8d13,	// (0x000ab8ae) wgtman_btn_pane_g1_ParamLimits

0x8d13,	// (0x000ab8ae) wgtman_btn_pane_g1

0x8d3f,	// (0x000ab8da) wgtman_btn_pane_t1_ParamLimits

0x8d3f,	// (0x000ab8da) wgtman_btn_pane_t1

0xb9cb,	// (0x000ae566) wgtman_btn_pane_t2_ParamLimits

0xb9cb,	// (0x000ae566) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x000b2a6f) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x000b2a6f) wgtman_btn_pane_t

0x8d7c,	// (0x000ab917) listrow_wgtman_pane_ParamLimits

0x8d7c,	// (0x000ab917) listrow_wgtman_pane

0x8d8e,	// (0x000ab929) listrow_wgtman_pane_g1

0x8d9b,	// (0x000ab936) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x000b2a74) listrow_wgtman_pane_g

0x8db9,	// (0x000ab954) listrow_wgtman_pane_t1

0x8dd1,	// (0x000ab96c) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x000b2a79) listrow_wgtman_pane_t

0x8df7,	// (0x000ab992) wait_bar_pane_cp09

0xb9e2,	// (0x000ae57d) main_calllock_btn_pane

0xb9ec,	// (0x000ae587) main_calllock_pane_g1

0x94d4,	// (0x000ac06f) bg_button_pane_cp17

0xb9f8,	// (0x000ae593) main_calllock_btn_pane_g1

0xba01,	// (0x000ae59c) main_calllock_btn_pane_t1

0x94d4,	// (0x000ac06f) main_dialer3_pane

0x94d4,	// (0x000ac06f) main_fmrd2_pane

0xd972,	// (0x000b050d) main_fs_bigclock_unlock_btn_pane_g1

0x8e11,	// (0x000ab9ac) main_fs_bigclock_unlock_btn_pane_t1

0x8e1f,	// (0x000ab9ba) area_fmrd2_info_pane_ParamLimits

0x8e1f,	// (0x000ab9ba) area_fmrd2_info_pane

0x8e30,	// (0x000ab9cb) area_fmrd2_visual_pane_ParamLimits

0x8e30,	// (0x000ab9cb) area_fmrd2_visual_pane

0x8e3e,	// (0x000ab9d9) fmrd2_indi_pane_ParamLimits

0x8e3e,	// (0x000ab9d9) fmrd2_indi_pane

0x8e4b,	// (0x000ab9e6) area_fmrd2_visual_pane_g1

0x8e53,	// (0x000ab9ee) area_fmrd2_visual_pane_t1

0x8e63,	// (0x000ab9fe) area_fmrd2_visual_pane_t2

0x8e73,	// (0x000aba0e) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x000b2a83) area_fmrd2_visual_pane_t

0x8e83,	// (0x000aba1e) area_fmrd2_info_pane_g1

0x8e8b,	// (0x000aba26) area_fmrd2_info_pane_t1

0x8e9b,	// (0x000aba36) area_fmrd2_info_pane_t2

0x8eab,	// (0x000aba46) area_fmrd2_info_pane_t3

0x8ebb,	// (0x000aba56) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x000b2a8a) area_fmrd2_info_pane_t

0x8ec9,	// (0x000aba64) fmrd2_indi_pane_t1

0x8ed9,	// (0x000aba74) fmrd2_indi_pane_t2

0x8ee9,	// (0x000aba84) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x000b2a93) fmrd2_indi_pane_t

0xad4a,	// (0x000ad8e5) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xad4a,	// (0x000ad8e5) list_single_fs_bigclock_indicator_pane_g5

0xadfb,	// (0x000ad996) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xadfb,	// (0x000ad996) list_single_fs_bigclock_indicator_pane_t5

0x8570,	// (0x000ab10b) aid_cell_bcale_month_pane_ParamLimits

0x8570,	// (0x000ab10b) aid_cell_bcale_month_pane

0x858e,	// (0x000ab129) bcale_month_pane_ParamLimits

0x858e,	// (0x000ab129) bcale_month_pane

0x85b2,	// (0x000ab14d) bcale_preview_pane_ParamLimits

0x85b2,	// (0x000ab14d) bcale_preview_pane

0xb7e7,	// (0x000ae382) list_single_fs_bigclock_pane_t1_ParamLimits

0xb806,	// (0x000ae3a1) list_single_fs_bigclock_pane_t2_ParamLimits

0xb806,	// (0x000ae3a1) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x000b2a15) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x000b2a15) list_single_fs_bigclock_pane_t

0x8e09,	// (0x000ab9a4) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x000b2a7e) main_fs_bigclock_unlock_btn_pane_g

0x8ef9,	// (0x000aba94) aid_dia3_key_size_ParamLimits

0x8ef9,	// (0x000aba94) aid_dia3_key_size

0x8f08,	// (0x000abaa3) aid_dia3_listrow_size_ParamLimits

0x8f08,	// (0x000abaa3) aid_dia3_listrow_size

0x8f1d,	// (0x000abab8) dia3_keypad_fun_pane_ParamLimits

0x8f1d,	// (0x000abab8) dia3_keypad_fun_pane

0x8f39,	// (0x000abad4) dia3_keypad_num_pane_ParamLimits

0x8f39,	// (0x000abad4) dia3_keypad_num_pane

0x8f54,	// (0x000abaef) dia3_listscroll_pane_ParamLimits

0x8f54,	// (0x000abaef) dia3_listscroll_pane

0x8f67,	// (0x000abb02) dia3_numentry_pane_ParamLimits

0x8f67,	// (0x000abb02) dia3_numentry_pane

0xba10,	// (0x000ae5ab) dia3_list_pane

0xba1b,	// (0x000ae5b6) scroll_pane_cp12

0x94d4,	// (0x000ac06f) bg_dia3_numentry_pane

0x8f7b,	// (0x000abb16) dia3_numentry_pane_t1

0x8f8a,	// (0x000abb25) cell_dia3_key_num_pane

0x8f92,	// (0x000abb2d) cell_dia3_key0_fun_pane_ParamLimits

0x8f92,	// (0x000abb2d) cell_dia3_key0_fun_pane

0x8fa6,	// (0x000abb41) cell_dia3_key1_fun_pane_ParamLimits

0x8fa6,	// (0x000abb41) cell_dia3_key1_fun_pane

0x8fbe,	// (0x000abb59) dia3_listrow_pane

0xaa9d,	// (0x000ad638) bg_dia3_numentry_pane_g1

0x94d4,	// (0x000ac06f) bg_button_pane_cp21

0xba26,	// (0x000ae5c1) cell_dia3_key_num_pane_t1

0xba34,	// (0x000ae5cf) cell_dia3_key_num_pane_t2

0xba43,	// (0x000ae5de) cell_dia3_key_num_pane_t3

0xba52,	// (0x000ae5ed) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x000b2a9a) cell_dia3_key_num_pane_t

0x94d4,	// (0x000ac06f) bg_button_pane_cp19

0x8fd0,	// (0x000abb6b) cell_dia3_key0_fun_pane_g1

0x94d4,	// (0x000ac06f) bg_button_pane_cp20

0x8fd8,	// (0x000abb73) cell_dia3_key1_fun_pane_g1

0x8fe0,	// (0x000abb7b) area_left_week_number_pane

0x8fec,	// (0x000abb87) area_top_day_name_pane

0x8fff,	// (0x000abb9a) frame_month_view_pane

0xba61,	// (0x000ae5fc) grid_month_view_pane

0x9012,	// (0x000abbad) cell_top_day_name_pane_ParamLimits

0x9012,	// (0x000abbad) cell_top_day_name_pane

0x903f,	// (0x000abbda) cell_area_left_week_number_pane_ParamLimits

0x903f,	// (0x000abbda) cell_area_left_week_number_pane

0x9053,	// (0x000abbee) cell_month_view_pane_ParamLimits

0x9053,	// (0x000abbee) cell_month_view_pane

0xba6f,	// (0x000ae60a) frm_month_g1

0x9080,	// (0x000abc1b) frm_month_g2

0x9093,	// (0x000abc2e) frm_month_g3

0x90a6,	// (0x000abc41) frm_month_g4

0x90b9,	// (0x000abc54) frm_month_g5

0x90cc,	// (0x000abc67) frm_month_g6

0x90df,	// (0x000abc7a) frm_month_g7

0xba7c,	// (0x000ae617) frm_month_g8

0x90f2,	// (0x000abc8d) frm_month_g9

0x9102,	// (0x000abc9d) frm_month_g10

0x9112,	// (0x000abcad) frm_month_g11

0x9122,	// (0x000abcbd) frm_month_g12

0x9134,	// (0x000abccf) frm_month_g13

0x9146,	// (0x000abce1) frm_month_g14

0x915a,	// (0x000abcf5) frm_month_g15

0x916e,	// (0x000abd09) frm_month_g16

0x000f,

0xff08,	// (0x000b2aa3) frm_month_g

0xba89,	// (0x000ae624) cell_top_day_name_pane_t1

0x9182,	// (0x000abd1d) cell_area_left_week_number_pane_g1

0x918e,	// (0x000abd29) cell_area_left_week_number_pane_t1

0xdbde,	// (0x000b0779) cell_month_view_pane_g1

0x91a1,	// (0x000abd3c) cell_month_view_pane_t1

0x94d4,	// (0x000ac06f) main_fps_pane

0xb2ba,	// (0x000ade55) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xb2ba,	// (0x000ade55) cmail_ddmenu_btn02_pane_cp1

0xb2d6,	// (0x000ade71) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xb2d6,	// (0x000ade71) cmail_ddmenu_btn02_pane_cp2

0x8869,	// (0x000ab404) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8869,	// (0x000ab404) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x000b29c8) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x000b29c8) cmail_ddmenu_btn02_pane_g

0x8888,	// (0x000ab423) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8888,	// (0x000ab423) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x000b29cd) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x000b29cd) cmail_ddmenu_btn02_pane_t

0x91b4,	// (0x000abd4f) fps_text_pane_ParamLimits

0x91b4,	// (0x000abd4f) fps_text_pane

0x91cb,	// (0x000abd66) main_fps_pane_g1_ParamLimits

0x91cb,	// (0x000abd66) main_fps_pane_g1

0x91e5,	// (0x000abd80) wait_bar_pane_cp010_ParamLimits

0x91e5,	// (0x000abd80) wait_bar_pane_cp010

0x91f6,	// (0x000abd91) fps_text_pane_t1_ParamLimits

0x91f6,	// (0x000abd91) fps_text_pane_t1

0xb176,	// (0x000add11) cam4_image_uncrop_pane_g1

0xb17f,	// (0x000add1a) cam4_image_uncrop_pane_g2

0x5ac3,	// (0x000a865e) cam4_image_uncrop_pane_g3

0x5acc,	// (0x000a8667) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x000b2489) cam4_image_uncrop_pane_g

0x8fbe,	// (0x000abb59) dia3_listrow_pane_ParamLimits

0x94d4,	// (0x000ac06f) main_phob2_pane

0x83a6,	// (0x000aaf41) cell_tport_appsw_pane_cp02_ParamLimits

0x83a6,	// (0x000aaf41) cell_tport_appsw_pane_cp02

0x83ba,	// (0x000aaf55) cell_tport_appsw_pane_cp03_ParamLimits

0x83ba,	// (0x000aaf55) cell_tport_appsw_pane_cp03

0x94d4,	// (0x000ac06f) phob2_contact_card_pane

0x94d4,	// (0x000ac06f) phob2_listscroll_pane

0xba9c,	// (0x000ae637) phob2_list_pane

0xbaa4,	// (0x000ae63f) scroll_pane_cp034

0x920e,	// (0x000abda9) phob2_cc_data_pane_ParamLimits

0x920e,	// (0x000abda9) phob2_cc_data_pane

0x922d,	// (0x000abdc8) phob2_cc_listscroll_pane_ParamLimits

0x922d,	// (0x000abdc8) phob2_cc_listscroll_pane

0x8d7c,	// (0x000ab917) list_double_large_graphic_phob2_pane_ParamLimits

0x8d7c,	// (0x000ab917) list_double_large_graphic_phob2_pane

0x924b,	// (0x000abde6) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x924b,	// (0x000abde6) list_double_large_graphic_phob2_pane_g1

0x9261,	// (0x000abdfc) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9261,	// (0x000abdfc) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x000b2ac4) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x000b2ac4) list_double_large_graphic_phob2_pane_g

0x926d,	// (0x000abe08) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x926d,	// (0x000abe08) list_double_large_graphic_phob2_pane_t1

0x9282,	// (0x000abe1d) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9282,	// (0x000abe1d) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x000b2ac9) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x000b2ac9) list_double_large_graphic_phob2_pane_t

0x94d4,	// (0x000ac06f) list_highlight_pane_cp024

0x9294,	// (0x000abe2f) phob2_cc_button_pane

0x929c,	// (0x000abe37) phob2_cc_data_pane_g1_ParamLimits

0x929c,	// (0x000abe37) phob2_cc_data_pane_g1

0x92b1,	// (0x000abe4c) phob2_cc_data_pane_g2_ParamLimits

0x92b1,	// (0x000abe4c) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x000b2ace) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x000b2ace) phob2_cc_data_pane_g

0x92c1,	// (0x000abe5c) phob2_cc_data_pane_t1_ParamLimits

0x92c1,	// (0x000abe5c) phob2_cc_data_pane_t1

0x92d9,	// (0x000abe74) phob2_cc_data_pane_t2_ParamLimits

0x92d9,	// (0x000abe74) phob2_cc_data_pane_t2

0x92f1,	// (0x000abe8c) phob2_cc_data_pane_t3_ParamLimits

0x92f1,	// (0x000abe8c) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x000b2ad3) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x000b2ad3) phob2_cc_data_pane_t

0xbaac,	// (0x000ae647) phob2_cc_list_pane_ParamLimits

0xbaac,	// (0x000ae647) phob2_cc_list_pane

0xe737,	// (0x000b12d2) scroll_pane_cp035_ParamLimits

0xe737,	// (0x000b12d2) scroll_pane_cp035

0xa7fa,	// (0x000ad395) bg_button_pane_cp033

0xbab8,	// (0x000ae653) phob2_cc_button_pane_g1

0xbac4,	// (0x000ae65f) phob2_cc_button_pane_t1

0xbad9,	// (0x000ae674) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x000b2ada) phob2_cc_button_pane_t

0x9309,	// (0x000abea4) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9309,	// (0x000abea4) list_double_large_graphic_phob2_cc_pane

0x931b,	// (0x000abeb6) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x931b,	// (0x000abeb6) list_double_large_graphic_phob2_cc_pane_g1

0x9327,	// (0x000abec2) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9327,	// (0x000abec2) list_double_large_graphic_phob2_cc_pane_g2

0x9333,	// (0x000abece) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9333,	// (0x000abece) list_double_large_graphic_phob2_cc_pane_g3

0x933f,	// (0x000abeda) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x933f,	// (0x000abeda) list_double_large_graphic_phob2_cc_pane_g4

0x934b,	// (0x000abee6) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x934b,	// (0x000abee6) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x000b2adf) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x000b2adf) list_double_large_graphic_phob2_cc_pane_g

0x9357,	// (0x000abef2) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9357,	// (0x000abef2) list_double_large_graphic_phob2_cc_pane_t1

0x9380,	// (0x000abf1b) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9380,	// (0x000abf1b) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x000b2aea) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x000b2aea) list_double_large_graphic_phob2_cc_pane_t

0xbaeb,	// (0x000ae686) list_highlight_pane_cp025_ParamLimits

0xbaeb,	// (0x000ae686) list_highlight_pane_cp025

0xa7fa,	// (0x000ad395) bg_button_pane_cp033_ParamLimits

0xbab8,	// (0x000ae653) phob2_cc_button_pane_g1_ParamLimits

0xbac4,	// (0x000ae65f) phob2_cc_button_pane_t1_ParamLimits

0xbad9,	// (0x000ae674) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x000b2ada) phob2_cc_button_pane_t_ParamLimits

0x04e7,	// (0x000a3082) popup_wgtman_window

0xe54c,	// (0x000b10e7) scroll_pane_cp038

0x8cf5,	// (0x000ab890) wgtman_btn_pane_cp_01_ParamLimits

0x8cf5,	// (0x000ab890) wgtman_btn_pane_cp_01

0xbaf9,	// (0x000ae694) wgtman_content_pane

0xbb02,	// (0x000ae69d) wgtman_heading_pane

0x94d4,	// (0x000ac06f) bg_heading_pane_cp02

0xbb0b,	// (0x000ae6a6) wgtman_heading_pane_g1

0xbb13,	// (0x000ae6ae) wgtman_heading_pane_t1

0xbb21,	// (0x000ae6bc) scroll_pane_cp036

0xbb29,	// (0x000ae6c4) wgtman_list_pane

0xbb31,	// (0x000ae6cc) wgtman_list_pane_t1_ParamLimits

0xbb31,	// (0x000ae6cc) wgtman_list_pane_t1

0x9fc4,	// (0x000acb5f) cam4_grid_pane

0x677e,	// (0x000a9319) bg_button_pane_cp015_ParamLimits

0x6790,	// (0x000a932b) bg_button_pane_cp016_ParamLimits

0x67a3,	// (0x000a933e) bg_button_pane_cp017_ParamLimits

0x67fb,	// (0x000a9396) popup_vitu2_query_window_g3_ParamLimits

0x67fb,	// (0x000a9396) popup_vitu2_query_window_g3

0x68b8,	// (0x000a9453) popup_vitu2_query_window_t6_ParamLimits

0x68b8,	// (0x000a9453) popup_vitu2_query_window_t6

0x68e3,	// (0x000a947e) popup_vitu2_query_window_t7_ParamLimits

0x68e3,	// (0x000a947e) popup_vitu2_query_window_t7

0xb176,	// (0x000add11) cam4_grid_pane_g1

0xb17f,	// (0x000add1a) cam4_grid_pane_g2

0xbb4b,	// (0x000ae6e6) cam4_grid_pane_g3

0xbb54,	// (0x000ae6ef) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x000b2aef) cam4_grid_pane_g

0x1425,	// (0x000a3fc0) aid_placing_vt_slider_lsc_ParamLimits

0x1730,	// (0x000a42cb) vidtel_button_pane_ParamLimits

0x1730,	// (0x000a42cb) vidtel_button_pane

0x94d4,	// (0x000ac06f) bg_button_pane_cp034

0xbb5f,	// (0x000ae6fa) vidtel_button_pane_g1

0xbb67,	// (0x000ae702) vidtel_button_pane_t1

0xe67e,	// (0x000b1219) aid_size_vtel_slider_touch

0xe737,	// (0x000b12d2) scroll_pane_cp039

0x76cd,	// (0x000aa268) ncim_query_button_pane_cp01_ParamLimits

0x76ec,	// (0x000aa287) ncimui_query_pane_g1_ParamLimits

0xa7fa,	// (0x000ad395) input_focus_pane_cp012_ParamLimits

0xaadb,	// (0x000ad676) ncim_query_entry_pane_t1_ParamLimits

0xe737,	// (0x000b12d2) scroll_pane_cp039_ParamLimits

0xc00f,	// (0x000aebaa) navi_pane_bcale_mc_g1

0xc017,	// (0x000aebb2) navi_pane_bcale_mc_t1

0xb31f,	// (0x000adeba) main_sp_fs_email_pane_g1

0xb32b,	// (0x000adec6) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x000b2880) main_sp_fs_email_pane_g

0xb573,	// (0x000ae10e) list_single_cale_mrui_row_pane_g3_ParamLimits

0xb573,	// (0x000ae10e) list_single_cale_mrui_row_pane_g3

0x88a8,	// (0x000ab443) list_single_recal_day_pane_g5_event_pane

0xef74,	// (0x000b1b0f) list_single_recal_day_pane_g7

0xbb7d,	// (0x000ae718) list_recal_day_event_pane_cp01

0xbb86,	// (0x000ae721) list_recal_vselct_arw_lo_pane_cp01

0xbb8e,	// (0x000ae729) list_recal_vselct_arw_up_pane_cp01

0xbb96,	// (0x000ae731) list_recal_vselct_pane_cp01

0xe6a0,	// (0x000b123b) list_recal_day_event_pane_cp01_g1

0xefa9,	// (0x000b1b44) list_recal_day_event_pane_cp01_t1

0xef7c,	// (0x000b1b17) list_single_recal_day_pane_t1_ParamLimits

0xef8e,	// (0x000b1b29) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x000b29dd) list_single_recal_day_pane_t_ParamLimits

0xa31f,	// (0x000aceba) bg_notes_pane_ParamLimits

0xa3c2,	// (0x000acf5d) list_notes_pane_ParamLimits

0x0830,	// (0x000a33cb) scroll_pane_cp06_ParamLimits

0xa3e4,	// (0x000acf7f) main_notes_pane_ParamLimits

0x94d4,	// (0x000ac06f) main_welc_pane

0x93a9,	// (0x000abf44) main_welc_body_pane_ParamLimits

0x93a9,	// (0x000abf44) main_welc_body_pane

0x93c7,	// (0x000abf62) main_welc_opti_pane_ParamLimits

0x93c7,	// (0x000abf62) main_welc_opti_pane

0x940c,	// (0x000abfa7) main_welc_pane_t1_ParamLimits

0x940c,	// (0x000abfa7) main_welc_pane_t1

0x942a,	// (0x000abfc5) main_welc_body_row_pane_ParamLimits

0x942a,	// (0x000abfc5) main_welc_body_row_pane

0xefb7,	// (0x000b1b52) main_welc_opti_row_pane_ParamLimits

0xefb7,	// (0x000b1b52) main_welc_opti_row_pane

0xbba0,	// (0x000ae73b) main_welc_opti_row_pane_g1

0x943e,	// (0x000abfd9) main_welc_opti_row_pane_t1

0xbba8,	// (0x000ae743) main_welc_body_row_pane_t1

0xb8be,	// (0x000ae459) popup_notif_wgt_heading_pane

0xb8d8,	// (0x000ae473) aid_size_list_notif_wgt_del_ParamLimits

0xb8e5,	// (0x000ae480) list_notif_wgt_row_pane_g1_ParamLimits

0xb8f1,	// (0x000ae48c) list_notif_wgt_row_pane_g2_ParamLimits

0xb900,	// (0x000ae49b) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x000b2a44) list_notif_wgt_row_pane_g_ParamLimits

0xb90d,	// (0x000ae4a8) list_notif_wgt_row_pane_t1_ParamLimits

0xb923,	// (0x000ae4be) list_notif_wgt_row_pane_t2_ParamLimits

0xb935,	// (0x000ae4d0) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x000b2a4b) list_notif_wgt_row_pane_t_ParamLimits

0x8d8e,	// (0x000ab929) listrow_wgtman_pane_g1_ParamLimits

0x8d9b,	// (0x000ab936) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x000b2a74) listrow_wgtman_pane_g_ParamLimits

0x8db9,	// (0x000ab954) listrow_wgtman_pane_t1_ParamLimits

0x8dd1,	// (0x000ab96c) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x000b2a79) listrow_wgtman_pane_t_ParamLimits

0x8df7,	// (0x000ab992) wait_bar_pane_cp09_ParamLimits

0x94d4,	// (0x000ac06f) bg_popup_heading_pane_cp02

0xbbb7,	// (0x000ae752) popup_notif_wgt_heading_pane_g1

0xbbbf,	// (0x000ae75a) popup_notif_wgt_heading_pane_t1

0x94d4,	// (0x000ac06f) main_vids_pane

0x94d4,	// (0x000ac06f) vids_listscroll_pane

0x944d,	// (0x000abfe8) scroll_pane_cp040

0x94d4,	// (0x000ac06f) vids_list_pane

0x9458,	// (0x000abff3) vids_list_double_pane_ParamLimits

0x9458,	// (0x000abff3) vids_list_double_pane

0x9469,	// (0x000ac004) vids_list_double_pane_g1

0x9472,	// (0x000ac00d) vids_list_double_pane_t1

0x9482,	// (0x000ac01d) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x000b2afd) vids_list_double_pane_t

0x953c,	// (0x000ac0d7) main_ncimui_pane_ParamLimits

0x7503,	// (0x000aa09e) main_ncimui_pane_g1_ParamLimits

0x750f,	// (0x000aa0aa) main_ncimui_pane_g2_ParamLimits

0x750f,	// (0x000aa0aa) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x000b2785) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x000b2785) main_ncimui_pane_g

0x93e2,	// (0x000abf7d) main_welc_pane_g1_ParamLimits

0x93e2,	// (0x000abf7d) main_welc_pane_g1

0x93f7,	// (0x000abf92) main_welc_pane_g2_ParamLimits

0x93f7,	// (0x000abf92) main_welc_pane_g2

0x0001,

0xff5d,	// (0x000b2af8) main_welc_pane_g_ParamLimits

0xff5d,	// (0x000b2af8) main_welc_pane_g

0xa31f,	// (0x000aceba) listscroll_mce_pane_ParamLimits

0xc164,	// (0x000aecff) wait_bar_pane_cp10

0xd55e,	// (0x000b00f9) main_cale_day_pane_ParamLimits

0xd55e,	// (0x000b00f9) main_cale_week_pane_ParamLimits

0xa31f,	// (0x000aceba) main_messa_pane_ParamLimits

0x4dff,	// (0x000a799a) main_clock2_btn_pane_ParamLimits

0x4dff,	// (0x000a799a) main_clock2_btn_pane

0xddbe,	// (0x000b0959) main_clock2_btn_pane_cp01_ParamLimits

0xddbe,	// (0x000b0959) main_clock2_btn_pane_cp01

0xb544,	// (0x000ae0df) list_cale_mrui_pane_ParamLimits

0xb96b,	// (0x000ae506) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x000b2a52) main_cf0_pane_g

0x8fe0,	// (0x000abb7b) area_left_week_number_pane_ParamLimits

0x8fec,	// (0x000abb87) area_top_day_name_pane_ParamLimits

0x8fff,	// (0x000abb9a) frame_month_view_pane_ParamLimits

0xba61,	// (0x000ae5fc) grid_month_view_pane_ParamLimits

0xba6f,	// (0x000ae60a) frm_month_g1_ParamLimits

0x9080,	// (0x000abc1b) frm_month_g2_ParamLimits

0x9093,	// (0x000abc2e) frm_month_g3_ParamLimits

0x90a6,	// (0x000abc41) frm_month_g4_ParamLimits

0x90b9,	// (0x000abc54) frm_month_g5_ParamLimits

0x90cc,	// (0x000abc67) frm_month_g6_ParamLimits

0x90df,	// (0x000abc7a) frm_month_g7_ParamLimits

0xba7c,	// (0x000ae617) frm_month_g8_ParamLimits

0x90f2,	// (0x000abc8d) frm_month_g9_ParamLimits

0x9102,	// (0x000abc9d) frm_month_g10_ParamLimits

0x9112,	// (0x000abcad) frm_month_g11_ParamLimits

0x9122,	// (0x000abcbd) frm_month_g12_ParamLimits

0x9134,	// (0x000abccf) frm_month_g13_ParamLimits

0x9146,	// (0x000abce1) frm_month_g14_ParamLimits

0x915a,	// (0x000abcf5) frm_month_g15_ParamLimits

0x916e,	// (0x000abd09) frm_month_g16_ParamLimits

0xff08,	// (0x000b2aa3) frm_month_g_ParamLimits

0xba89,	// (0x000ae624) cell_top_day_name_pane_t1_ParamLimits

0x9182,	// (0x000abd1d) cell_area_left_week_number_pane_g1_ParamLimits

0x918e,	// (0x000abd29) cell_area_left_week_number_pane_t1_ParamLimits

0xdbde,	// (0x000b0779) cell_month_view_pane_g1_ParamLimits

0x91a1,	// (0x000abd3c) cell_month_view_pane_t1_ParamLimits

0xa317,	// (0x000aceb2) main_clock2_btn_pane_g1

0xbbcd,	// (0x000ae768) main_clock2_btn_pane_t1

0xa7fa,	// (0x000ad395) listscroll_cmail_pane_ParamLimits

0xb31f,	// (0x000adeba) main_sp_fs_email_pane_g1_ParamLimits

0xb32b,	// (0x000adec6) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x000b2880) main_sp_fs_email_pane_g_ParamLimits

0xb64a,	// (0x000ae1e5) list_recal_day_pane_ParamLimits

0xb65b,	// (0x000ae1f6) mian_recal_day_pane_t1

0x800f,	// (0x000aabaa) list_single_dyc_row_text_pane_t4_ParamLimits

0x800f,	// (0x000aabaa) list_single_dyc_row_text_pane_t4

0x8058,	// (0x000aabf3) list_single_dyc_row_text_pane_t5_ParamLimits

0x8058,	// (0x000aabf3) list_single_dyc_row_text_pane_t5

0xecff,	// (0x000b189a) list_single_dyc_row_text_pane_t6_ParamLimits

0xecff,	// (0x000b189a) list_single_dyc_row_text_pane_t6

0x23ae,	// (0x000a4f49) aid_mgn_list_cale_time_pane

0x953c,	// (0x000ac0d7) main_gallery2_pane_ParamLimits

0xddd4,	// (0x000b096f) main_clock2_pane_cp01_t1

0xdde4,	// (0x000b097f) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x000b235f) main_clock2_pane_cp01_t

0x0bea,	// (0x000a3785) cale_week_scroll_pane_g16_ParamLimits

0x0bea,	// (0x000a3785) cale_week_scroll_pane_g16

0xa5a9,	// (0x000ad144) vorec_slider_pane

0xbb67,	// (0x000ae702) vidtel_button_pane_t1_ParamLimits

0x890e,	// (0x000ab4a9) main_fs_bigclock_clock_pane_g1_ParamLimits

0x890e,	// (0x000ab4a9) main_fs_bigclock_clock_pane_g2_ParamLimits

0x891f,	// (0x000ab4ba) main_fs_bigclock_clock_pane_g3_ParamLimits

0x891f,	// (0x000ab4ba) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe65,	// (0x000b2a00) main_fs_bigclock_clock_pane_g_ParamLimits

0x8932,	// (0x000ab4cd) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8948,	// (0x000ab4e3) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe6e,	// (0x000b2a09) main_fs_bigclock_clock_pane_t_ParamLimits

0x45f3,	// (0x000a718e) main_mup3_lyrics_pane_ParamLimits

0x45f3,	// (0x000a718e) main_mup3_lyrics_pane

0x94b8,	// (0x000ac053) main_mup3_lyrics_pane_t1_ParamLimits

0x94b8,	// (0x000ac053) main_mup3_lyrics_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large
