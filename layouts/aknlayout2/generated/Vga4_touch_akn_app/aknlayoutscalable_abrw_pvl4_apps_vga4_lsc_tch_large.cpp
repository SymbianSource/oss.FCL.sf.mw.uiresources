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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x000ad1f2 };

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
0xfc32,	// (0x000ace24) Screen

0xfc3e,	// (0x000ace30) application_window

0xfc92,	// (0x000ace84) area_bottom_pane_ParamLimits

0xfc92,	// (0x000ace84) area_bottom_pane

0xfccb,	// (0x000acebd) area_top_pane_ParamLimits

0xfccb,	// (0x000acebd) area_top_pane

0x954a,	// (0x000b673c) call_video_uplink_pane_ParamLimits

0x954a,	// (0x000b673c) call_video_uplink_pane

0xfd59,	// (0x000acf4b) main_pane_ParamLimits

0xfd59,	// (0x000acf4b) main_pane

0xc86b,	// (0x000b9a5d) context_pane

0x3904,	// (0x000b0af6) navi_pane

0x3934,	// (0x000b0b26) popup_cale_events_window_ParamLimits

0x3934,	// (0x000b0b26) popup_cale_events_window

0xc87e,	// (0x000b9a70) popup_mup_playback_window

0x394c,	// (0x000b0b3e) signal_pane

0xa861,	// (0x000b7a53) main_browser_pane

0xb363,	// (0x000b8555) main_burst_pane

0x3606,	// (0x000b07f8) main_calc_pane

0xc80e,	// (0x000b9a00) main_cale_day_pane

0x03a9,	// (0x000ad59b) main_cale_month_pane

0xc80e,	// (0x000b9a00) main_cale_week_pane

0xb363,	// (0x000b8555) main_call_pane

0x9989,	// (0x000b6b7b) main_call_poc_pane

0xb363,	// (0x000b8555) main_camera_pane

0xb363,	// (0x000b8555) main_chi_dic_pane

0xb205,	// (0x000b83f7) main_clock_pane

0x9989,	// (0x000b6b7b) main_fmradio_pane

0xb363,	// (0x000b8555) main_graph_messa_pane

0x9989,	// (0x000b6b7b) main_help_pane

0xa861,	// (0x000b7a53) main_im_pane

0x9be4,	// (0x000b6dd6) main_image_pane_ParamLimits

0x9be4,	// (0x000b6dd6) main_image_pane

0x9989,	// (0x000b6b7b) main_location2_pane

0xb363,	// (0x000b8555) main_location_pane

0x9be4,	// (0x000b6dd6) main_messa_pane

0x9989,	// (0x000b6b7b) main_mp2_pane

0xb363,	// (0x000b8555) main_mp_pane

0x9989,	// (0x000b6b7b) main_msg_pane

0x9989,	// (0x000b6b7b) main_mup_eq_pane

0x9989,	// (0x000b6b7b) main_mup_pane

0xa861,	// (0x000b7a53) main_notes_pane

0x9989,	// (0x000b6b7b) main_pec_pane

0x9989,	// (0x000b6b7b) main_phob_pane

0x9989,	// (0x000b6b7b) main_pinb_pane

0x9989,	// (0x000b6b7b) main_postcard_pane

0x9989,	// (0x000b6b7b) main_qdial_pane

0xb363,	// (0x000b8555) main_skin_pane

0x9989,	// (0x000b6b7b) main_smil2_pane

0xb363,	// (0x000b8555) main_smil_pane

0xb363,	// (0x000b8555) main_video_pane

0xb363,	// (0x000b8555) main_video_tele_pane

0x9be4,	// (0x000b6dd6) main_viewer_pane_ParamLimits

0x9be4,	// (0x000b6dd6) main_viewer_pane

0xb363,	// (0x000b8555) main_vorec_pane

0x365c,	// (0x000b084e) popup_blid_sat_info_window_ParamLimits

0x365c,	// (0x000b084e) popup_blid_sat_info_window

0x36c0,	// (0x000b08b2) popup_dyc_status_message_window_ParamLimits

0x36c0,	// (0x000b08b2) popup_dyc_status_message_window

0x36da,	// (0x000b08cc) popup_grid_large_graphic_window_ParamLimits

0x36da,	// (0x000b08cc) popup_grid_large_graphic_window

0x379c,	// (0x000b098e) popup_loc_request_window_ParamLimits

0x379c,	// (0x000b098e) popup_loc_request_window

0x38d8,	// (0x000b0aca) popup_wml_address_window_ParamLimits

0x38d8,	// (0x000b0aca) popup_wml_address_window

0x3444,	// (0x000b0636) call_muted_g1

0x30d8,	// (0x000b02ca) popup_call_audio_conf_window_ParamLimits

0x30d8,	// (0x000b02ca) popup_call_audio_conf_window

0x3454,	// (0x000b0646) popup_call_audio_first_window_ParamLimits

0x3454,	// (0x000b0646) popup_call_audio_first_window

0x34ca,	// (0x000b06bc) popup_call_audio_in_window_ParamLimits

0x34ca,	// (0x000b06bc) popup_call_audio_in_window

0x3506,	// (0x000b06f8) popup_call_audio_out_window_ParamLimits

0x3506,	// (0x000b06f8) popup_call_audio_out_window

0x3540,	// (0x000b0732) popup_call_audio_second_window_ParamLimits

0x3540,	// (0x000b0732) popup_call_audio_second_window

0x3596,	// (0x000b0788) popup_call_audio_wait_window_ParamLimits

0x3596,	// (0x000b0788) popup_call_audio_wait_window

0x35cb,	// (0x000b07bd) popup_number_entry_window_ParamLimits

0x35cb,	// (0x000b07bd) popup_number_entry_window

0x9576,	// (0x000b6768) bg_popup_call_pane_cp05_ParamLimits

0x9576,	// (0x000b6768) bg_popup_call_pane_cp05

0x9596,	// (0x000b6788) popup_number_entry_window_t1

0x95a9,	// (0x000b679b) popup_number_entry_window_t2

0x95bb,	// (0x000b67ad) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x000bc2b8) popup_number_entry_window_t

0x95cd,	// (0x000b67bf) text_title_cp2

0x95e0,	// (0x000b67d2) bg_popup_call_pane_cp_ParamLimits

0x95e0,	// (0x000b67d2) bg_popup_call_pane_cp

0x95ee,	// (0x000b67e0) call_thumbnail_pane

0x95f6,	// (0x000b67e8) popup_call_audio_in_window_g1_ParamLimits

0x95f6,	// (0x000b67e8) popup_call_audio_in_window_g1

0x9602,	// (0x000b67f4) popup_call_audio_in_window_g2_ParamLimits

0x9602,	// (0x000b67f4) popup_call_audio_in_window_g2

0x960e,	// (0x000b6800) popup_call_audio_in_window_g3_ParamLimits

0x960e,	// (0x000b6800) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x000bc2c1) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x000bc2c1) popup_call_audio_in_window_g

0x961a,	// (0x000b680c) popup_call_audio_in_window_t1_ParamLimits

0x961a,	// (0x000b680c) popup_call_audio_in_window_t1

0x9636,	// (0x000b6828) popup_call_audio_in_window_t2_ParamLimits

0x9636,	// (0x000b6828) popup_call_audio_in_window_t2

0x9652,	// (0x000b6844) popup_call_audio_in_window_t3_ParamLimits

0x9652,	// (0x000b6844) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x000bc2c8) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x000bc2c8) popup_call_audio_in_window_t

0x95e0,	// (0x000b67d2) bg_popup_call_pane_cp01_ParamLimits

0x95e0,	// (0x000b67d2) bg_popup_call_pane_cp01

0x95ee,	// (0x000b67e0) call_thumbnail_pane_cp02

0x9665,	// (0x000b6857) call_type_pane_cp022

0x966d,	// (0x000b685f) popup_call_audio_out_window_g1_ParamLimits

0x966d,	// (0x000b685f) popup_call_audio_out_window_g1

0x967f,	// (0x000b6871) popup_call_audio_out_window_g2_ParamLimits

0x967f,	// (0x000b6871) popup_call_audio_out_window_g2

0x968b,	// (0x000b687d) popup_call_audio_out_window_g3_ParamLimits

0x968b,	// (0x000b687d) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x000bc2cf) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x000bc2cf) popup_call_audio_out_window_g

0x969d,	// (0x000b688f) popup_call_audio_out_window_t1_ParamLimits

0x969d,	// (0x000b688f) popup_call_audio_out_window_t1

0x96b5,	// (0x000b68a7) popup_call_audio_out_window_t2_ParamLimits

0x96b5,	// (0x000b68a7) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x000bc2d6) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x000bc2d6) popup_call_audio_out_window_t

0x96ca,	// (0x000b68bc) bg_popup_call_pane_ParamLimits

0x96ca,	// (0x000b68bc) bg_popup_call_pane

0xff18,	// (0x000ad10a) call_thumbnail_pane_cp_ParamLimits

0xff18,	// (0x000ad10a) call_thumbnail_pane_cp

0x974e,	// (0x000b6940) call_type_pane_cp01_ParamLimits

0x974e,	// (0x000b6940) call_type_pane_cp01

0x9792,	// (0x000b6984) popup_call_audio_first_window_g1_ParamLimits

0x9792,	// (0x000b6984) popup_call_audio_first_window_g1

0x97de,	// (0x000b69d0) popup_call_audio_first_window_g2_ParamLimits

0x97de,	// (0x000b69d0) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x000bc2db) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x000bc2db) popup_call_audio_first_window_g

0x9822,	// (0x000b6a14) popup_call_audio_first_window_t1_ParamLimits

0x9822,	// (0x000b6a14) popup_call_audio_first_window_t1

0x98ce,	// (0x000b6ac0) popup_call_audio_first_window_t4_ParamLimits

0x98ce,	// (0x000b6ac0) popup_call_audio_first_window_t4

0x995a,	// (0x000b6b4c) popup_call_audio_first_window_t5_ParamLimits

0x995a,	// (0x000b6b4c) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x000bc2e0) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x000bc2e0) popup_call_audio_first_window_t

0x9989,	// (0x000b6b7b) bg_popup_call_pane_cp02

0x9993,	// (0x000b6b85) call_type_pane_cp023

0x999b,	// (0x000b6b8d) popup_call_audio_wait_window_g1

0x99a3,	// (0x000b6b95) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000bc2e7) popup_call_audio_wait_window_g

0x99ab,	// (0x000b6b9d) popup_call_audio_wait_window_t3

0x99b9,	// (0x000b6bab) bg_popup_call_pane_cp03_ParamLimits

0x99b9,	// (0x000b6bab) bg_popup_call_pane_cp03

0x9a19,	// (0x000b6c0b) call_thumbnail_pane_cp011_ParamLimits

0x9a19,	// (0x000b6c0b) call_thumbnail_pane_cp011

0x9a25,	// (0x000b6c17) call_type_pane_cp034_ParamLimits

0x9a25,	// (0x000b6c17) call_type_pane_cp034

0x9a61,	// (0x000b6c53) popup_call_audio_second_window_g1_ParamLimits

0x9a61,	// (0x000b6c53) popup_call_audio_second_window_g1

0x9a9d,	// (0x000b6c8f) popup_call_audio_second_window_g2_ParamLimits

0x9a9d,	// (0x000b6c8f) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x000bc2ec) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x000bc2ec) popup_call_audio_second_window_g

0x9ad9,	// (0x000b6ccb) popup_call_audio_second_window_t1_ParamLimits

0x9ad9,	// (0x000b6ccb) popup_call_audio_second_window_t1

0x9b5a,	// (0x000b6d4c) popup_call_audio_second_window_t2_ParamLimits

0x9b5a,	// (0x000b6d4c) popup_call_audio_second_window_t2

0x9b90,	// (0x000b6d82) popup_call_audio_second_window_t3_ParamLimits

0x9b90,	// (0x000b6d82) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x000bc2f1) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x000bc2f1) popup_call_audio_second_window_t

0x9989,	// (0x000b6b7b) bg_popup_call_pane_cp04

0x9bc6,	// (0x000b6db8) list_conf_pane

0x9bce,	// (0x000b6dc0) popup_call_audio_conf_window_t1

0x9bdc,	// (0x000b6dce) call_thumbnail_pane_g1

0x9be4,	// (0x000b6dd6) bg_pinb_pane_ParamLimits

0x9be4,	// (0x000b6dd6) bg_pinb_pane

0x9bf2,	// (0x000b6de4) find_pinb_pane

0x9bfb,	// (0x000b6ded) listscroll_pinb_pane_ParamLimits

0x9bfb,	// (0x000b6ded) listscroll_pinb_pane

0x9c0a,	// (0x000b6dfc) pinb_bg_pane_g1

0xff3c,	// (0x000ad12e) pinb_bg_pane_g2

0xff48,	// (0x000ad13a) pinb_bg_pane_g3

0xff54,	// (0x000ad146) pinb_bg_pane_g4

0xff60,	// (0x000ad152) pinb_bg_pane_g5

0xff6c,	// (0x000ad15e) pinb_bg_pane_g6

0xff77,	// (0x000ad169) pinb_bg_pane_g7

0xff82,	// (0x000ad174) pinb_bg_pane_g8

0xff8d,	// (0x000ad17f) pinb_bg_pane_g9

0xff97,	// (0x000ad189) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x000bc2f8) pinb_bg_pane_g

0xffb4,	// (0x000ad1a6) grid_pinb_pane

0xffbf,	// (0x000ad1b1) list_pinb_pane

0xffca,	// (0x000ad1bc) scroll_pane_cp01_ParamLimits

0xffca,	// (0x000ad1bc) scroll_pane_cp01

0x9c14,	// (0x000b6e06) find_pinb_pane_g1_ParamLimits

0x9c14,	// (0x000b6e06) find_pinb_pane_g1

0x9c2c,	// (0x000b6e1e) find_pinb_pane_t1

0x9c3e,	// (0x000b6e30) find_pinb_pane_t2

0x0001,

0xf120,	// (0x000bc312) find_pinb_pane_t

0x9c53,	// (0x000b6e45) input_focus_pane_cp01_ParamLimits

0x9c53,	// (0x000b6e45) input_focus_pane_cp01

0xffdc,	// (0x000ad1ce) cell_pinb_pane_ParamLimits

0xffdc,	// (0x000ad1ce) cell_pinb_pane

0xfffe,	// (0x000ad1f0) cell_pinb_pane_g1_ParamLimits

0xfffe,	// (0x000ad1f0) cell_pinb_pane_g1

0x0013,	// (0x000ad205) cell_pinb_pane_g2_ParamLimits

0x0013,	// (0x000ad205) cell_pinb_pane_g2

0x9c5f,	// (0x000b6e51) cell_pinb_pane_g3_ParamLimits

0x9c5f,	// (0x000b6e51) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x000bc317) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x000bc317) cell_pinb_pane_g

0x9989,	// (0x000b6b7b) grid_highlight_pane_cp01

0x001f,	// (0x000ad211) list_pinb_item_pane_ParamLimits

0x001f,	// (0x000ad211) list_pinb_item_pane

0x9989,	// (0x000b6b7b) list_highlight_pane_cp02

0x0031,	// (0x000ad223) list_pinb_item_pane_g1_ParamLimits

0x0031,	// (0x000ad223) list_pinb_item_pane_g1

0x003e,	// (0x000ad230) list_pinb_item_pane_g2_ParamLimits

0x003e,	// (0x000ad230) list_pinb_item_pane_g2

0x004a,	// (0x000ad23c) list_pinb_item_pane_g3_ParamLimits

0x004a,	// (0x000ad23c) list_pinb_item_pane_g3

0x005b,	// (0x000ad24d) list_pinb_item_pane_g4_ParamLimits

0x005b,	// (0x000ad24d) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x000bc31e) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x000bc31e) list_pinb_item_pane_g

0x0067,	// (0x000ad259) list_pinb_item_pane_t1_ParamLimits

0x0067,	// (0x000ad259) list_pinb_item_pane_t1

0x009c,	// (0x000ad28e) calc_display_pane

0x00c4,	// (0x000ad2b6) calc_paper_pane

0x00e7,	// (0x000ad2d9) grid_calc_pane

0x9989,	// (0x000b6b7b) bg_list_pane_cp01

0x0115,	// (0x000ad307) clock_g1

0x011d,	// (0x000ad30f) clock_g2

0x0001,

0xf135,	// (0x000bc327) clock_g

0x0125,	// (0x000ad317) clock_t1_ParamLimits

0x0125,	// (0x000ad317) clock_t1

0x013a,	// (0x000ad32c) clock_t2_ParamLimits

0x013a,	// (0x000ad32c) clock_t2

0x014c,	// (0x000ad33e) clock_t3_ParamLimits

0x014c,	// (0x000ad33e) clock_t3

0x015e,	// (0x000ad350) clock_t4_ParamLimits

0x015e,	// (0x000ad350) clock_t4

0x0170,	// (0x000ad362) clock_t5_ParamLimits

0x0170,	// (0x000ad362) clock_t5

0x0185,	// (0x000ad377) clock_t6_ParamLimits

0x0185,	// (0x000ad377) clock_t6

0x0197,	// (0x000ad389) clock_t7_ParamLimits

0x0197,	// (0x000ad389) clock_t7

0x01a9,	// (0x000ad39b) clock_t8_ParamLimits

0x01a9,	// (0x000ad39b) clock_t8

0x01bd,	// (0x000ad3af) clock_t9_ParamLimits

0x01bd,	// (0x000ad3af) clock_t9

0x0008,

0xf13a,	// (0x000bc32c) clock_t_ParamLimits

0xf13a,	// (0x000bc32c) clock_t

0x9c73,	// (0x000b6e65) popup_clock_analogue_window_cp02

0x9c73,	// (0x000b6e65) popup_clock_digital_window_cp01

0x9c7b,	// (0x000b6e6d) listscroll_help_pane

0x9989,	// (0x000b6b7b) phob_pre_status_pane

0x9c85,	// (0x000b6e77) grid_qdial_pane

0x9be4,	// (0x000b6dd6) listscroll_mce_pane

0x9be4,	// (0x000b6dd6) bg_notes_pane

0x9c8f,	// (0x000b6e81) list_notes_pane

0x01d3,	// (0x000ad3c5) scroll_pane_cp06

0x9c9d,	// (0x000b6e8f) bg_calc_paper_pane

0x9cbb,	// (0x000b6ead) list_calc_pane

0xa861,	// (0x000b7a53) bg_calc_display_pane

0x01e7,	// (0x000ad3d9) calc_display_pane_t1

0x01f9,	// (0x000ad3eb) calc_display_pane_t2

0x9cd5,	// (0x000b6ec7) calc_display_pane_t3

0x0002,

0xf14d,	// (0x000bc33f) calc_display_pane_t

0x020b,	// (0x000ad3fd) cell_calc_pane_ParamLimits

0x020b,	// (0x000ad3fd) cell_calc_pane

0xa86d,	// (0x000b7a5f) bg_calc_paper_pane_g1

0xa879,	// (0x000b7a6b) bg_calc_paper_pane_g2

0xa885,	// (0x000b7a77) bg_calc_paper_pane_g3

0xa891,	// (0x000b7a83) bg_calc_paper_pane_g4

0xa89d,	// (0x000b7a8f) bg_calc_paper_pane_g5

0x0248,	// (0x000ad43a) bg_calc_paper_pane_g6

0x025b,	// (0x000ad44d) bg_calc_paper_pane_g7

0x026e,	// (0x000ad460) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x000bc346) bg_calc_paper_pane_g

0x027f,	// (0x000ad471) calc_bg_paper_pane_g9

0x0290,	// (0x000ad482) list_calc_item_pane_ParamLimits

0x0290,	// (0x000ad482) list_calc_item_pane

0xa8a9,	// (0x000b7a9b) list_calc_item_pane_g1

0x9ce7,	// (0x000b6ed9) list_calc_item_pane_t1_ParamLimits

0x9ce7,	// (0x000b6ed9) list_calc_item_pane_t1

0x02a8,	// (0x000ad49a) list_calc_item_pane_t2_ParamLimits

0x02a8,	// (0x000ad49a) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x000bc357) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x000bc357) list_calc_item_pane_t

0xa8b6,	// (0x000b7aa8) cell_calc_pane_g1

0xa8c0,	// (0x000b7ab2) grid_highlight_pane_cp02

0xa8e2,	// (0x000b7ad4) bg_calc_display_pane_g1

0x9cf9,	// (0x000b6eeb) bg_calc_display_pane_g2

0xa8eb,	// (0x000b7add) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x000bc361) bg_calc_display_pane_g

0x02da,	// (0x000ad4cc) cell_qdial_pane_ParamLimits

0x02da,	// (0x000ad4cc) cell_qdial_pane

0x02ee,	// (0x000ad4e0) cell_qdial_pane_g1_ParamLimits

0x02ee,	// (0x000ad4e0) cell_qdial_pane_g1

0x0304,	// (0x000ad4f6) cell_qdial_pane_g2_ParamLimits

0x0304,	// (0x000ad4f6) cell_qdial_pane_g2

0xa8f4,	// (0x000b7ae6) cell_qdial_pane_g3_ParamLimits

0xa8f4,	// (0x000b7ae6) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x000bc368) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x000bc368) cell_qdial_pane_g

0x032b,	// (0x000ad51d) cell_qdial_pane_t1_ParamLimits

0x032b,	// (0x000ad51d) cell_qdial_pane_t1

0x0343,	// (0x000ad535) cell_qdial_pane_t2_ParamLimits

0x0343,	// (0x000ad535) cell_qdial_pane_t2

0x0356,	// (0x000ad548) cell_qdial_pane_t3_ParamLimits

0x0356,	// (0x000ad548) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x000bc371) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x000bc371) cell_qdial_pane_t

0x9989,	// (0x000b6b7b) grid_highlight_pane_cp04

0xa900,	// (0x000b7af2) thumbnail_qdial_pane_ParamLimits

0xa900,	// (0x000b7af2) thumbnail_qdial_pane

0xa95c,	// (0x000b7b4e) list_help_pane

0xa965,	// (0x000b7b57) scroll_pane_cp02

0x0369,	// (0x000ad55b) help_list_pane_t1_ParamLimits

0x0369,	// (0x000ad55b) help_list_pane_t1

0x9d03,	// (0x000b6ef5) bg_notes_pane_g2

0x9d0b,	// (0x000b6efd) bg_notes_pane_g3

0x9d13,	// (0x000b6f05) notes_bg_pane_g1

0x9d1b,	// (0x000b6f0d) notes_bg_pane_g4

0x9d23,	// (0x000b6f15) notes_bg_pane_g5

0x9d2b,	// (0x000b6f1d) notes_bg_pane_g6

0x9d33,	// (0x000b6f25) notes_bg_pane_g7

0x9d3b,	// (0x000b6f2d) notes_bg_pane_g8

0x9d43,	// (0x000b6f35) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x000bc38f) notes_bg_pane_g

0x0387,	// (0x000ad579) list_notes_text_pane_ParamLimits

0x0387,	// (0x000ad579) list_notes_text_pane

0xa96e,	// (0x000b7b60) list_notes_text_pane_g1

0x039b,	// (0x000ad58d) list_notes_text_pane_t1

0x03a9,	// (0x000ad59b) listscroll_cale_week_pane

0x03df,	// (0x000ad5d1) bg_cale_heading_pane

0xa988,	// (0x000b7b7a) bg_cale_pane_cp01

0x0408,	// (0x000ad5fa) cale_week_corner_pane

0x0427,	// (0x000ad619) cale_week_day_heading_pane

0x0455,	// (0x000ad647) cale_week_scroll_pane_g1

0x0479,	// (0x000ad66b) cale_week_scroll_pane_g2

0x0491,	// (0x000ad683) cale_week_scroll_pane_g3

0x04a9,	// (0x000ad69b) cale_week_scroll_pane_g4

0x04c5,	// (0x000ad6b7) cale_week_scroll_pane_g5

0x04e5,	// (0x000ad6d7) cale_week_scroll_pane_g6

0x0505,	// (0x000ad6f7) cale_week_scroll_pane_g7

0x0529,	// (0x000ad71b) cale_week_scroll_pane_g8

0x054d,	// (0x000ad73f) cale_week_scroll_pane_g9

0x056a,	// (0x000ad75c) cale_week_scroll_pane_g10

0x0587,	// (0x000ad779) cale_week_scroll_pane_g11

0x05a4,	// (0x000ad796) cale_week_scroll_pane_g12

0x05c1,	// (0x000ad7b3) cale_week_scroll_pane_g13

0x05de,	// (0x000ad7d0) cale_week_scroll_pane_g14

0x0607,	// (0x000ad7f9) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x000bc39e) cale_week_scroll_pane_g

0x0654,	// (0x000ad846) cale_week_time_pane

0x0678,	// (0x000ad86a) grid_cale_week_pane

0xa9b8,	// (0x000b7baa) scroll_pane_cp08

0x06af,	// (0x000ad8a1) cell_cale_week_pane_ParamLimits

0x06af,	// (0x000ad8a1) cell_cale_week_pane

0x073f,	// (0x000ad931) cale_week_day_heading_pane_t1

0x0789,	// (0x000ad97b) cale_week_day_heading_pane_t2

0x07d8,	// (0x000ad9ca) cale_week_day_heading_pane_t3

0x0827,	// (0x000ada19) cale_week_day_heading_pane_t4

0x0876,	// (0x000ada68) cale_week_day_heading_pane_t5

0x08c9,	// (0x000adabb) cale_week_day_heading_pane_t6

0x0920,	// (0x000adb12) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x000bc3bf) cale_week_day_heading_pane_t

0xa9da,	// (0x000b7bcc) bg_cale_side_pane

0x096a,	// (0x000adb5c) cale_week_time_pane_t1

0x09a4,	// (0x000adb96) cale_week_time_pane_t2

0x09de,	// (0x000adbd0) cale_week_time_pane_t3

0x0a18,	// (0x000adc0a) cale_week_time_pane_t4

0x0a52,	// (0x000adc44) cale_week_time_pane_t5

0x0a8c,	// (0x000adc7e) cale_week_time_pane_t6

0x0ac6,	// (0x000adcb8) cale_week_time_pane_t7

0x0b00,	// (0x000adcf2) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x000bc3ce) cale_week_time_pane_t

0x0b40,	// (0x000add32) cell_cale_week_pane_g2

0x0b5f,	// (0x000add51) cell_cale_week_pane_g3_ParamLimits

0x0b5f,	// (0x000add51) cell_cale_week_pane_g3

0xa9e8,	// (0x000b7bda) grid_highlight_pane_cp07

0xa9f0,	// (0x000b7be2) listscroll_gms_pane

0xa9fa,	// (0x000b7bec) grid_gms_pane

0xaa03,	// (0x000b7bf5) listscroll_gms_pane_g1

0xaa0b,	// (0x000b7bfd) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x000bc3df) listscroll_gms_pane_g

0x0b77,	// (0x000add69) scroll_pane_cp010

0x0b82,	// (0x000add74) cell_gms_pane_ParamLimits

0x0b82,	// (0x000add74) cell_gms_pane

0x0b9c,	// (0x000add8e) cell_gms_pane_g1

0xaa13,	// (0x000b7c05) cell_gms_pane_g2

0xaa1b,	// (0x000b7c0d) cell_gms_pane_g3

0xaa24,	// (0x000b7c16) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x000bc3e4) cell_gms_pane_g

0xaa2d,	// (0x000b7c1f) grid_highlight_pane_cp09

0x33ec,	// (0x000b05de) phob_pre_status_pane_g1

0x33f4,	// (0x000b05e6) phob_pre_status_pane_g2

0x33fc,	// (0x000b05ee) phob_pre_status_pane_g3

0x3404,	// (0x000b05f6) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x000bc7d3) phob_pre_status_pane_g

0x3414,	// (0x000b0606) phob_pre_status_pane_t1

0x3424,	// (0x000b0616) phob_pre_status_pane_t2

0x3434,	// (0x000b0626) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x000bc7de) phob_pre_status_pane_t

0x9989,	// (0x000b6b7b) bg_list_pane_cp05

0x0bac,	// (0x000add9e) grid_vorec_pane

0x0bb8,	// (0x000addaa) vorec_t1

0x0bc6,	// (0x000addb8) vorec_t2

0x0bd4,	// (0x000addc6) vorec_t3

0x0be2,	// (0x000addd4) vorec_t4

0x0bf0,	// (0x000adde2) vorec_t5

0x9d4b,	// (0x000b6f3d) vorec_t6

0x0006,

0xf1fb,	// (0x000bc3ed) vorec_t

0x0c0c,	// (0x000addfe) wait_bar_pane_cp01

0x0c14,	// (0x000ade06) cell_vorec_pane_ParamLimits

0x0c14,	// (0x000ade06) cell_vorec_pane

0x9d59,	// (0x000b6f4b) cell_vorec_pane_g1

0x9989,	// (0x000b6b7b) grid_highlight_pane_cp05

0x0c3f,	// (0x000ade31) cams_zoom_pane

0x0c4e,	// (0x000ade40) image_vga_pane

0x0c68,	// (0x000ade5a) main_camera_pane_g1

0x0c7a,	// (0x000ade6c) main_camera_pane_g2

0x0c8a,	// (0x000ade7c) main_camera_pane_g3

0x0c9e,	// (0x000ade90) main_camera_pane_g4

0x0cb2,	// (0x000adea4) main_camera_pane_g5

0x0cc6,	// (0x000adeb8) main_camera_pane_g6

0x0cda,	// (0x000adecc) main_camera_pane_g7

0x0007,

0xf20a,	// (0x000bc3fc) main_camera_pane_g

0x0cee,	// (0x000adee0) main_camera_pane_t1

0x0d04,	// (0x000adef6) main_camera_pane_t2

0x0001,

0xf21b,	// (0x000bc40d) main_camera_pane_t

0x0d42,	// (0x000adf34) cams_zoom_pane_cp_ParamLimits

0x0d42,	// (0x000adf34) cams_zoom_pane_cp

0x0d6a,	// (0x000adf5c) image_cif_pane_ParamLimits

0x0d6a,	// (0x000adf5c) image_cif_pane

0x0da5,	// (0x000adf97) image_subqcif_pane

0x0daf,	// (0x000adfa1) main_video_pane_g1_ParamLimits

0x0daf,	// (0x000adfa1) main_video_pane_g1

0x0dd3,	// (0x000adfc5) main_video_pane_g2_ParamLimits

0x0dd3,	// (0x000adfc5) main_video_pane_g2

0x0e09,	// (0x000adffb) main_video_pane_g3_ParamLimits

0x0e09,	// (0x000adffb) main_video_pane_g3

0x0e37,	// (0x000ae029) main_video_pane_g4_ParamLimits

0x0e37,	// (0x000ae029) main_video_pane_g4

0x0e65,	// (0x000ae057) main_video_pane_g5_ParamLimits

0x0e65,	// (0x000ae057) main_video_pane_g5

0xaa41,	// (0x000b7c33) main_video_pane_g6_ParamLimits

0xaa41,	// (0x000b7c33) main_video_pane_g6

0x0006,

0xf220,	// (0x000bc412) main_video_pane_g_ParamLimits

0xf220,	// (0x000bc412) main_video_pane_g

0x0e8e,	// (0x000ae080) main_video_pane_t1_ParamLimits

0x0e8e,	// (0x000ae080) main_video_pane_t1

0xaa5b,	// (0x000b7c4d) cams_zoom_pane_g1

0xaa64,	// (0x000b7c56) cams_zoom_pane_g2

0xaa6d,	// (0x000b7c5f) cams_zoom_pane_g3

0xaa76,	// (0x000b7c68) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x000bc421) cams_zoom_pane_g

0x0eeb,	// (0x000ae0dd) grid_cams_pane

0x0f05,	// (0x000ae0f7) linegrid_cams_pane

0x0f17,	// (0x000ae109) cell_cams_pane_ParamLimits

0x0f17,	// (0x000ae109) cell_cams_pane

0xaa7f,	// (0x000b7c71) cams_burst_image_pane

0xaa87,	// (0x000b7c79) cell_cams_pane_g1

0x9989,	// (0x000b6b7b) grid_highlight_pane_cp03

0xa8b6,	// (0x000b7aa8) mp_bg_pane_g1

0x9989,	// (0x000b6b7b) bg_list_pane_cp03

0xc731,	// (0x000b9923) bg_mp_pane

0xc739,	// (0x000b992b) grid_mp_pane

0xc741,	// (0x000b9933) media_player_g1

0xc74b,	// (0x000b993d) media_player_t1

0xc759,	// (0x000b994b) media_player_t2

0xc767,	// (0x000b9959) media_player_t3

0xc775,	// (0x000b9967) media_player_t4

0xc783,	// (0x000b9975) media_player_t5

0xc791,	// (0x000b9983) media_player_t6

0xc79f,	// (0x000b9991) media_player_t7

0x0006,

0xf5cb,	// (0x000bc7bd) media_player_t

0xc7ad,	// (0x000b999f) wait_bar_pane_cp02

0xf5b0,	// (0x000bc7a2) main_usb_pane_t

0x33e3,	// (0x000b05d5) cell_mp_pane

0xa8b6,	// (0x000b7aa8) cell_mp_pane_g1

0x9989,	// (0x000b6b7b) grid_highlight_pane_cp06

0xaa8f,	// (0x000b7c81) grid_skin_colour_pane

0xaa97,	// (0x000b7c89) list_highlight_pane_cp03

0x1050,	// (0x000ae242) skin_g1

0xaa9f,	// (0x000b7c91) skin_t1

0xaaae,	// (0x000b7ca0) skin_t2

0x0001,

0xf264,	// (0x000bc456) skin_t

0x1058,	// (0x000ae24a) cell_skin_colour_pane_ParamLimits

0x1058,	// (0x000ae24a) cell_skin_colour_pane

0xaabc,	// (0x000b7cae) cell_skin_colour_pane_g1

0x10cb,	// (0x000ae2bd) call_video_g1_ParamLimits

0x10cb,	// (0x000ae2bd) call_video_g1

0x10e7,	// (0x000ae2d9) call_video_g2_ParamLimits

0x10e7,	// (0x000ae2d9) call_video_g2

0x0001,

0xf269,	// (0x000bc45b) call_video_g_ParamLimits

0xf269,	// (0x000bc45b) call_video_g

0x112c,	// (0x000ae31e) call_video_uplink_pane_cp1_ParamLimits

0x112c,	// (0x000ae31e) call_video_uplink_pane_cp1

0xaace,	// (0x000b7cc0) call_video_uplink_pane_cp2

0x11cd,	// (0x000ae3bf) video_down_crop_pane_ParamLimits

0x11cd,	// (0x000ae3bf) video_down_crop_pane

0x12b6,	// (0x000ae4a8) video_down_pane_ParamLimits

0x12b6,	// (0x000ae4a8) video_down_pane

0xaad6,	// (0x000b7cc8) video_down_subqcif_pane_ParamLimits

0xaad6,	// (0x000b7cc8) video_down_subqcif_pane

0xaaf0,	// (0x000b7ce2) video_down_subqcif_pane_cp_ParamLimits

0xaaf0,	// (0x000b7ce2) video_down_subqcif_pane_cp

0xab18,	// (0x000b7d0a) im_reading_pane_ParamLimits

0xab18,	// (0x000b7d0a) im_reading_pane

0x13bf,	// (0x000ae5b1) im_writing_pane_ParamLimits

0x13bf,	// (0x000ae5b1) im_writing_pane

0x13db,	// (0x000ae5cd) im_reading_pane_t1

0xab32,	// (0x000b7d24) list_im_pane

0xab43,	// (0x000b7d35) scroll_pane_cp07

0x1417,	// (0x000ae609) im_writing_pane_t1_ParamLimits

0x1417,	// (0x000ae609) im_writing_pane_t1

0xab5c,	// (0x000b7d4e) im_writing_pane_t2_ParamLimits

0xab5c,	// (0x000b7d4e) im_writing_pane_t2

0x0001,

0xf273,	// (0x000bc465) im_writing_pane_t_ParamLimits

0xf273,	// (0x000bc465) im_writing_pane_t

0x9989,	// (0x000b6b7b) input_focus_pane_cp04

0x9989,	// (0x000b6b7b) input_focus_pane_cp05

0x142c,	// (0x000ae61e) list_im_single_pane_ParamLimits

0x142c,	// (0x000ae61e) list_im_single_pane

0x1442,	// (0x000ae634) list_single_im_pane_t1

0x33a3,	// (0x000b0595) blid_accuracy_pane

0x33ab,	// (0x000b059d) blid_compass_pane

0x33b5,	// (0x000b05a7) main_location_t1

0x33c5,	// (0x000b05b7) main_location_t2

0x33d5,	// (0x000b05c7) main_location_t3

0x0002,

0xf5da,	// (0x000bc7cc) main_location_t

0x9989,	// (0x000b6b7b) aid_levels_location

0xa8b6,	// (0x000b7aa8) blid_accuracy_pane_g1

0xa8b6,	// (0x000b7aa8) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000bc4c7) blid_accuracy_pane_g

0xaba4,	// (0x000b7d96) wml_content_pane

0xabe2,	// (0x000b7dd4) wml_button_pane_ParamLimits

0xabe2,	// (0x000b7dd4) wml_button_pane

0x1451,	// (0x000ae643) wml_list_single_large_pane_ParamLimits

0x1451,	// (0x000ae643) wml_list_single_large_pane

0x1467,	// (0x000ae659) wml_list_single_medium_pane_ParamLimits

0x1467,	// (0x000ae659) wml_list_single_medium_pane

0x147e,	// (0x000ae670) wml_list_single_small_pane_ParamLimits

0x147e,	// (0x000ae670) wml_list_single_small_pane

0xabf6,	// (0x000b7de8) wml_selection_box_pane_ParamLimits

0xabf6,	// (0x000b7de8) wml_selection_box_pane

0xac09,	// (0x000b7dfb) wml_list_single_pane_t1

0xac18,	// (0x000b7e0a) wml_list_single_medium_pane_t1

0xac27,	// (0x000b7e19) wml_list_single_large_pane_t1

0xac36,	// (0x000b7e28) input_focus_pane_cp02_ParamLimits

0xac36,	// (0x000b7e28) input_focus_pane_cp02

0xac49,	// (0x000b7e3b) wml_selection_box_pane_g1

0xac52,	// (0x000b7e44) wml_selection_box_pane_t1_ParamLimits

0xac52,	// (0x000b7e44) wml_selection_box_pane_t1

0x9be4,	// (0x000b6dd6) bg_wml_button_pane_ParamLimits

0x9be4,	// (0x000b6dd6) bg_wml_button_pane

0xac6a,	// (0x000b7e5c) wml_button_pane_g1

0xac72,	// (0x000b7e64) wml_button_pane_t1

0xac6a,	// (0x000b7e5c) wml_button_bg_pane_g1

0xac82,	// (0x000b7e74) wml_button_bg_pane_g2

0xac8a,	// (0x000b7e7c) wml_button_bg_pane_g3

0xac92,	// (0x000b7e84) wml_button_bg_pane_g4

0xac9a,	// (0x000b7e8c) wml_button_bg_pane_g5

0xaca2,	// (0x000b7e94) wml_button_bg_pane_g6

0xacaa,	// (0x000b7e9c) wml_button_bg_pane_g7

0xacb2,	// (0x000b7ea4) wml_button_bg_pane_g8

0xacba,	// (0x000b7eac) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000bc46a) wml_button_bg_pane_g

0x149a,	// (0x000ae68c) bg_list_pane_cp02

0xacc2,	// (0x000b7eb4) mce_header_pane_ParamLimits

0xacc2,	// (0x000b7eb4) mce_header_pane

0xacd8,	// (0x000b7eca) mce_icon_pane

0xacd8,	// (0x000b7eca) mce_image_pane

0xace1,	// (0x000b7ed3) mce_text_pane_ParamLimits

0xace1,	// (0x000b7ed3) mce_text_pane

0x14a4,	// (0x000ae696) scroll_pane_cp03

0xabda,	// (0x000b7dcc) scroll_pane_cp04

0xacf4,	// (0x000b7ee6) scroll_pane_cp05_ParamLimits

0xacf4,	// (0x000b7ee6) scroll_pane_cp05

0x14ae,	// (0x000ae6a0) mce_header_field_pane_ParamLimits

0x14ae,	// (0x000ae6a0) mce_header_field_pane

0x14c7,	// (0x000ae6b9) mce_header_field_pane_2_ParamLimits

0x14c7,	// (0x000ae6b9) mce_header_field_pane_2

0x14dd,	// (0x000ae6cf) mce_header_field_pane_3

0x14e5,	// (0x000ae6d7) list_single_mce_message_pane_ParamLimits

0x14e5,	// (0x000ae6d7) list_single_mce_message_pane

0x14fe,	// (0x000ae6f0) list_single_mce_smart_pane_ParamLimits

0x14fe,	// (0x000ae6f0) list_single_mce_smart_pane

0xad00,	// (0x000b7ef2) input_focus_pane_cp03

0xad09,	// (0x000b7efb) list_header_data_pane

0x1522,	// (0x000ae714) mce_header_field_pane_t1

0x1532,	// (0x000ae724) list_single_mce_header_pane_ParamLimits

0x1532,	// (0x000ae724) list_single_mce_header_pane

0xad11,	// (0x000b7f03) list_single_mce_header_pane_t1

0xad20,	// (0x000b7f12) list_single_mce_message_pane_g1

0xad28,	// (0x000b7f1a) list_single_mce_message_pane_t1

0x156c,	// (0x000ae75e) bg_cale_heading_pane_cp01_ParamLimits

0x156c,	// (0x000ae75e) bg_cale_heading_pane_cp01

0xad36,	// (0x000b7f28) bg_cale_pane_cp02_ParamLimits

0xad36,	// (0x000b7f28) bg_cale_pane_cp02

0x15b3,	// (0x000ae7a5) cale_month_corner_pane

0x15d2,	// (0x000ae7c4) cale_month_day_heading_pane_ParamLimits

0x15d2,	// (0x000ae7c4) cale_month_day_heading_pane

0x1631,	// (0x000ae823) cale_month_pane_g1_ParamLimits

0x1631,	// (0x000ae823) cale_month_pane_g1

0x166d,	// (0x000ae85f) cale_month_pane_g2_ParamLimits

0x166d,	// (0x000ae85f) cale_month_pane_g2

0x16a9,	// (0x000ae89b) cale_month_pane_g3_ParamLimits

0x16a9,	// (0x000ae89b) cale_month_pane_g3

0x16fd,	// (0x000ae8ef) cale_month_pane_g4_ParamLimits

0x16fd,	// (0x000ae8ef) cale_month_pane_g4

0x1751,	// (0x000ae943) cale_month_pane_g5_ParamLimits

0x1751,	// (0x000ae943) cale_month_pane_g5

0x17ad,	// (0x000ae99f) cale_month_pane_g6_ParamLimits

0x17ad,	// (0x000ae99f) cale_month_pane_g6

0x1811,	// (0x000aea03) cale_month_pane_g7_ParamLimits

0x1811,	// (0x000aea03) cale_month_pane_g7

0x187d,	// (0x000aea6f) cale_month_pane_g8_ParamLimits

0x187d,	// (0x000aea6f) cale_month_pane_g8

0x18e9,	// (0x000aeadb) cale_month_pane_g9_ParamLimits

0x18e9,	// (0x000aeadb) cale_month_pane_g9

0x1947,	// (0x000aeb39) cale_month_pane_g10_ParamLimits

0x1947,	// (0x000aeb39) cale_month_pane_g10

0x1999,	// (0x000aeb8b) cale_month_pane_g11_ParamLimits

0x1999,	// (0x000aeb8b) cale_month_pane_g11

0x19eb,	// (0x000aebdd) cale_month_pane_g12_ParamLimits

0x19eb,	// (0x000aebdd) cale_month_pane_g12

0x1a43,	// (0x000aec35) cale_month_pane_g13_ParamLimits

0x1a43,	// (0x000aec35) cale_month_pane_g13

0x000c,

0xf28b,	// (0x000bc47d) cale_month_pane_g_ParamLimits

0xf28b,	// (0x000bc47d) cale_month_pane_g

0x1a9b,	// (0x000aec8d) cale_month_week_pane

0x1abf,	// (0x000aecb1) grid_cale_month_pane_ParamLimits

0x1abf,	// (0x000aecb1) grid_cale_month_pane

0x1b15,	// (0x000aed07) cale_month_day_heading_pane_t1

0x1b9b,	// (0x000aed8d) cale_month_day_heading_pane_t2

0x1c2c,	// (0x000aee1e) cale_month_day_heading_pane_t3

0x1cbd,	// (0x000aeeaf) cale_month_day_heading_pane_t4

0x1d4e,	// (0x000aef40) cale_month_day_heading_pane_t5

0x1def,	// (0x000aefe1) cale_month_day_heading_pane_t6

0x1e94,	// (0x000af086) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000bc498) cale_month_day_heading_pane_t

0xa9da,	// (0x000b7bcc) bg_cale_side_pane_cp01

0x1f3d,	// (0x000af12f) cale_month_week_pane_t1

0x1f56,	// (0x000af148) cale_month_week_pane_t2

0x1f6f,	// (0x000af161) cale_month_week_pane_t3

0x1f88,	// (0x000af17a) cale_month_week_pane_t4

0x1fa1,	// (0x000af193) cale_month_week_pane_t5

0x1fba,	// (0x000af1ac) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000bc4a7) cale_month_week_pane_t

0x1fd9,	// (0x000af1cb) cell_cale_month_pane_ParamLimits

0x1fd9,	// (0x000af1cb) cell_cale_month_pane

0x9d63,	// (0x000b6f55) cell_cale_month_pane_g1

0x212d,	// (0x000af31f) cell_cale_month_pane_t1_ParamLimits

0x212d,	// (0x000af31f) cell_cale_month_pane_t1

0xa9e8,	// (0x000b7bda) grid_highlight_pane_cp08

0xa8b6,	// (0x000b7aa8) main_smil_g1

0x214d,	// (0x000af33f) smil_status_pane

0xad75,	// (0x000b7f67) smil_text_pane

0xc64f,	// (0x000b9841) bg_popup_call3_rect_pane_g8

0xc657,	// (0x000b9849) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x000bc760) bg_popup_call3_rect_pane_g

0xc8e5,	// (0x000b9ad7) smil_status_volume_pane_g1

0x2160,	// (0x000af352) smil_status_pane_t1

0x9eb1,	// (0x000b70a3) volume_smil_pane

0xad7f,	// (0x000b7f71) list_smil_text_pane

0x2179,	// (0x000af36b) scroll_pane_cp011

0x2184,	// (0x000af376) smil_text_list_pane_t1_ParamLimits

0x2184,	// (0x000af376) smil_text_list_pane_t1

0x9d6f,	// (0x000b6f61) aid_volume_smil_ParamLimits

0x9d6f,	// (0x000b6f61) aid_volume_smil

0xa8b6,	// (0x000b7aa8) smil_volume_pane_g1

0xa8b6,	// (0x000b7aa8) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000bc4c7) smil_volume_pane_g

0x03a9,	// (0x000ad59b) listscroll_cale_day_pane

0xad89,	// (0x000b7f7b) bg_cale_pane

0xada1,	// (0x000b7f93) list_cale_pane

0xadc4,	// (0x000b7fb6) scroll_pane_cp09

0xadd5,	// (0x000b7fc7) cale_bg_pane_g1

0xaddd,	// (0x000b7fcf) cale_bg_pane_g2

0xade5,	// (0x000b7fd7) cale_bg_pane_g3

0xaded,	// (0x000b7fdf) cale_bg_pane_g4

0xadf5,	// (0x000b7fe7) cale_bg_pane_g5

0xadfd,	// (0x000b7fef) cale_bg_pane_g6

0xae05,	// (0x000b7ff7) cale_bg_pane_g7

0xae0d,	// (0x000b7fff) cale_bg_pane_g8

0xae15,	// (0x000b8007) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x000bc4cc) cale_bg_pane_g

0x21bd,	// (0x000af3af) list_cale_time_pane_ParamLimits

0x21bd,	// (0x000af3af) list_cale_time_pane

0xae25,	// (0x000b8017) list_cale_time_pane_g1_ParamLimits

0xae25,	// (0x000b8017) list_cale_time_pane_g1

0xae31,	// (0x000b8023) list_cale_time_pane_g2_ParamLimits

0xae31,	// (0x000b8023) list_cale_time_pane_g2

0x21d1,	// (0x000af3c3) list_cale_time_pane_g3_ParamLimits

0x21d1,	// (0x000af3c3) list_cale_time_pane_g3

0x21df,	// (0x000af3d1) list_cale_time_pane_g4_ParamLimits

0x21df,	// (0x000af3d1) list_cale_time_pane_g4

0x21ed,	// (0x000af3df) list_cale_time_pane_g5_ParamLimits

0x21ed,	// (0x000af3df) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000bc4df) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000bc4df) list_cale_time_pane_g

0xae4b,	// (0x000b803d) list_cale_time_pane_t1_ParamLimits

0xae4b,	// (0x000b803d) list_cale_time_pane_t1

0xae73,	// (0x000b8065) list_cale_time_pane_t2_ParamLimits

0xae73,	// (0x000b8065) list_cale_time_pane_t2

0x258c,	// (0x000af77e) aid_blid_cardinal_pane

0x25ca,	// (0x000af7bc) compass_pane_t4

0xae9b,	// (0x000b808d) list_cale_time_pane_t4_ParamLimits

0xae9b,	// (0x000b808d) list_cale_time_pane_t4

0x25d8,	// (0x000af7ca) compass_pane_t5

0x25e6,	// (0x000af7d8) compass_pane_t6

0x25f4,	// (0x000af7e6) compass_pane_t7

0xb2b5,	// (0x000b84a7) navi_pane_cc_t1

0xb40a,	// (0x000b85fc) aid_phob_thumbnail_center_pane

0x2d6e,	// (0x000aff60) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x000bc4ec) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x000bc4ec) list_cale_time_pane_t

0x95e0,	// (0x000b67d2) bg_popup_window_pane_cp02_ParamLimits

0x95e0,	// (0x000b67d2) bg_popup_window_pane_cp02

0xaec3,	// (0x000b80b5) heading_pane_cp01_ParamLimits

0xaec3,	// (0x000b80b5) heading_pane_cp01

0xaecf,	// (0x000b80c1) loc_req_pane_ParamLimits

0xaecf,	// (0x000b80c1) loc_req_pane

0xaedf,	// (0x000b80d1) loc_type_pane_ParamLimits

0xaedf,	// (0x000b80d1) loc_type_pane

0xaef1,	// (0x000b80e3) loc_type_pane_t1_ParamLimits

0xaef1,	// (0x000b80e3) loc_type_pane_t1

0xaf03,	// (0x000b80f5) loc_type_pane_t2_ParamLimits

0xaf03,	// (0x000b80f5) loc_type_pane_t2

0xaf15,	// (0x000b8107) loc_type_pane_t3_ParamLimits

0xaf15,	// (0x000b8107) loc_type_pane_t3

0x0002,

0xf301,	// (0x000bc4f3) loc_type_pane_t_ParamLimits

0xf301,	// (0x000bc4f3) loc_type_pane_t

0xaf27,	// (0x000b8119) list_loc_req_pane

0xaf31,	// (0x000b8123) scroll_pane_cp012

0x21fb,	// (0x000af3ed) list_single_loc_request_popup_menu_pane_ParamLimits

0x21fb,	// (0x000af3ed) list_single_loc_request_popup_menu_pane

0xaf3c,	// (0x000b812e) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf3c,	// (0x000b812e) list_single_loc_request_popup_menu_pane_g1

0xaf48,	// (0x000b813a) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf48,	// (0x000b813a) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x000bc4fa) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x000bc4fa) list_single_loc_request_popup_menu_pane_g

0xaf54,	// (0x000b8146) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf54,	// (0x000b8146) list_single_loc_request_popup_menu_pane_t1

0x9be4,	// (0x000b6dd6) bg_popup_window_pane_cp03_ParamLimits

0x9be4,	// (0x000b6dd6) bg_popup_window_pane_cp03

0xaf6a,	// (0x000b815c) heading_loc_req_pane_ParamLimits

0xaf6a,	// (0x000b815c) heading_loc_req_pane

0x2208,	// (0x000af3fa) popup_dyc_status_message_window_g1_ParamLimits

0x2208,	// (0x000af3fa) popup_dyc_status_message_window_g1

0x221c,	// (0x000af40e) popup_dyc_status_message_window_t1_ParamLimits

0x221c,	// (0x000af40e) popup_dyc_status_message_window_t1

0x2231,	// (0x000af423) popup_dyc_status_message_window_t2_ParamLimits

0x2231,	// (0x000af423) popup_dyc_status_message_window_t2

0x2246,	// (0x000af438) popup_dyc_status_message_window_t3_ParamLimits

0x2246,	// (0x000af438) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x000bc4ff) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x000bc4ff) popup_dyc_status_message_window_t

0x9989,	// (0x000b6b7b) bg_heading_pane_cp01

0xaf76,	// (0x000b8168) heading_loc_req_pane_g1

0xaf7e,	// (0x000b8170) heading_loc_req_pane_g2

0xaf86,	// (0x000b8178) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x000bc506) heading_loc_req_pane_g

0xaf8e,	// (0x000b8180) heading_loc_req_pane_t1

0xaf9e,	// (0x000b8190) bg_popup_sub_pane_cp01_ParamLimits

0xaf9e,	// (0x000b8190) bg_popup_sub_pane_cp01

0xafac,	// (0x000b819e) popup_cale_events_window_g1_ParamLimits

0xafac,	// (0x000b819e) popup_cale_events_window_g1

0xafcc,	// (0x000b81be) popup_cale_events_window_g2_ParamLimits

0xafcc,	// (0x000b81be) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x000bc53a) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x000bc53a) popup_cale_events_window_g

0xafec,	// (0x000b81de) popup_cale_events_window_t1_ParamLimits

0xafec,	// (0x000b81de) popup_cale_events_window_t1

0xaffe,	// (0x000b81f0) popup_cale_events_window_t2_ParamLimits

0xaffe,	// (0x000b81f0) popup_cale_events_window_t2

0xb03c,	// (0x000b822e) popup_cale_events_window_t3_ParamLimits

0xb03c,	// (0x000b822e) popup_cale_events_window_t3

0xb076,	// (0x000b8268) popup_cale_events_window_t4_ParamLimits

0xb076,	// (0x000b8268) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x000bc53f) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x000bc53f) popup_cale_events_window_t

0x234b,	// (0x000af53d) call_type_pane

0x235b,	// (0x000af54d) popup_call_status_window_g1

0x236f,	// (0x000af561) popup_call_status_window_g2

0x2383,	// (0x000af575) popup_call_status_window_g3

0x0002,

0xf356,	// (0x000bc548) popup_call_status_window_g

0xb0ac,	// (0x000b829e) call_type_pane_g1

0xb0b5,	// (0x000b82a7) call_type_pane_g2

0x0001,

0xf35d,	// (0x000bc54f) call_type_pane_g

0x9989,	// (0x000b6b7b) bg_popup_sub_pane_cp02

0xb0be,	// (0x000b82b0) listscroll_popup_wml_pane

0xb0c6,	// (0x000b82b8) list_wml_pane

0xb0d0,	// (0x000b82c2) scroll_pane_cp013

0xb0db,	// (0x000b82cd) list_single_graphic_popup_wml_pane_ParamLimits

0xb0db,	// (0x000b82cd) list_single_graphic_popup_wml_pane

0xa8b6,	// (0x000b7aa8) list_single_graphic_popup_wml_pane_g1

0xb0ef,	// (0x000b82e1) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x000bc554) list_single_graphic_popup_wml_pane_g

0xb0f7,	// (0x000b82e9) list_single_graphic_popup_wml_pane_t1

0xb10d,	// (0x000b82ff) aid_call_pane

0x9bdc,	// (0x000b6dce) popup_clock_analogue_window_g1

0x9bdc,	// (0x000b6dce) popup_clock_analogue_window_g2

0x9d91,	// (0x000b6f83) popup_clock_analogue_window_g3

0x9d91,	// (0x000b6f83) popup_clock_analogue_window_g4

0xa8b6,	// (0x000b7aa8) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x000bc559) popup_clock_analogue_window_g

0x9d99,	// (0x000b6f8b) popup_clock_analogue_window_t1

0x9da7,	// (0x000b6f99) clock_digital_number_pane_ParamLimits

0x9da7,	// (0x000b6f99) clock_digital_number_pane

0x9db3,	// (0x000b6fa5) clock_digital_number_pane_cp02_ParamLimits

0x9db3,	// (0x000b6fa5) clock_digital_number_pane_cp02

0x9dbf,	// (0x000b6fb1) clock_digital_number_pane_cp03_ParamLimits

0x9dbf,	// (0x000b6fb1) clock_digital_number_pane_cp03

0x9dcb,	// (0x000b6fbd) clock_digital_number_pane_cp04_ParamLimits

0x9dcb,	// (0x000b6fbd) clock_digital_number_pane_cp04

0x9dd7,	// (0x000b6fc9) clock_digital_separator_pane_ParamLimits

0x9dd7,	// (0x000b6fc9) clock_digital_separator_pane

0x9de3,	// (0x000b6fd5) popup_clock_digital_window_t1

0xa8b6,	// (0x000b7aa8) clock_digital_number_pane_g1

0xa8b6,	// (0x000b7aa8) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000bc4c7) clock_digital_number_pane_g

0xa8b6,	// (0x000b7aa8) clock_digital_separator_pane_g1

0xa8b6,	// (0x000b7aa8) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000bc4c7) clock_digital_separator_pane_g

0x9989,	// (0x000b6b7b) bg_popup_window_pane_cp04

0xb115,	// (0x000b8307) heading_pane_cp03

0xb11d,	// (0x000b830f) listscroll_popup_gms_pane

0xb125,	// (0x000b8317) grid_large_graphic_popup_pane

0xb12f,	// (0x000b8321) listscroll_popup_gms_pane_g1

0xb137,	// (0x000b8329) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x000bc564) listscroll_popup_gms_pane_g

0xabda,	// (0x000b7dcc) scroll_pane_cp014

0x2393,	// (0x000af585) cell_large_graphic_popup_pane_ParamLimits

0x2393,	// (0x000af585) cell_large_graphic_popup_pane

0x23ab,	// (0x000af59d) cell_large_graphic_popup_pane_g1_ParamLimits

0x23ab,	// (0x000af59d) cell_large_graphic_popup_pane_g1

0xb13f,	// (0x000b8331) cell_large_graphic_popup_pane_g2_ParamLimits

0xb13f,	// (0x000b8331) cell_large_graphic_popup_pane_g2

0xb14b,	// (0x000b833d) cell_large_graphic_popup_pane_g3_ParamLimits

0xb14b,	// (0x000b833d) cell_large_graphic_popup_pane_g3

0xb158,	// (0x000b834a) cell_large_graphic_popup_pane_g4_ParamLimits

0xb158,	// (0x000b834a) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x000bc569) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x000bc569) cell_large_graphic_popup_pane_g

0xb168,	// (0x000b835a) grid_highlight_pane_cp010

0xa8b6,	// (0x000b7aa8) bg_popup_call_pane_g1

0xb172,	// (0x000b8364) list_single_graphic_popup_conf_pane_ParamLimits

0xb172,	// (0x000b8364) list_single_graphic_popup_conf_pane

0xb184,	// (0x000b8376) list_highlight_pane_cp01

0xb18d,	// (0x000b837f) list_single_graphic_popup_conf_pane_g1

0xb195,	// (0x000b8387) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x000bc572) list_single_graphic_popup_conf_pane_g

0xb19d,	// (0x000b838f) list_single_graphic_popup_conf_pane_t1

0xb1ab,	// (0x000b839d) linegrid_cams_pane_g1

0x23b7,	// (0x000af5a9) linegrid_cams_pane_g2

0xaa1b,	// (0x000b7c0d) linegrid_cams_pane_g3

0xb1b4,	// (0x000b83a6) linegrid_cams_pane_g4

0x23c0,	// (0x000af5b2) linegrid_cams_pane_g5

0x23c9,	// (0x000af5bb) linegrid_cams_pane_g6

0xaa24,	// (0x000b7c16) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x000bc577) linegrid_cams_pane_g

0xb1bd,	// (0x000b83af) popup_clock_analogue_window

0xb1bd,	// (0x000b83af) popup_clock_digital_window

0x9989,	// (0x000b6b7b) popup_phob_thumbnail_window

0xa8b6,	// (0x000b7aa8) call_video_uplink_pane_g1

0xb1c6,	// (0x000b83b8) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000bc586) call_video_uplink_pane_g

0xb1ce,	// (0x000b83c0) video_uplink_pane

0xb1d6,	// (0x000b83c8) mce_image_pane_g1

0x23d4,	// (0x000af5c6) mce_image_pane_g2

0x23de,	// (0x000af5d0) mce_image_pane_g3

0x23e8,	// (0x000af5da) mce_image_pane_g4

0x23f0,	// (0x000af5e2) mce_image_pane_g5

0x0004,

0xf399,	// (0x000bc58b) mce_image_pane_g

0xb1e0,	// (0x000b83d2) control_top_pane_stacon_cp01_ParamLimits

0xb1e0,	// (0x000b83d2) control_top_pane_stacon_cp01

0xb1f4,	// (0x000b83e6) uni_indicator_pane_stacon_cp01_ParamLimits

0xb1f4,	// (0x000b83e6) uni_indicator_pane_stacon_cp01

0xb205,	// (0x000b83f7) bg_popup_sub_pane_cp03

0x23f8,	// (0x000af5ea) chi_dic_find_pane

0x2400,	// (0x000af5f2) listscroll_chi_dic_pane

0x2409,	// (0x000af5fb) main_pane_chidic_g1

0x241c,	// (0x000af60e) chi_dic_find_pane_t1

0xb20f,	// (0x000b8401) find_chidic_pane

0xb218,	// (0x000b840a) chi_dic_list_pane_ParamLimits

0xb218,	// (0x000b840a) chi_dic_list_pane

0xb229,	// (0x000b841b) scroll_pane_cp020

0x242a,	// (0x000af61c) find_chidic_pane_t1

0x9989,	// (0x000b6b7b) input_focus_pane_cp06

0x001f,	// (0x000ad211) list_chi_dic_pane_ParamLimits

0x001f,	// (0x000ad211) list_chi_dic_pane

0x2439,	// (0x000af62b) list_chi_dic_pane_t1_ParamLimits

0x2439,	// (0x000af62b) list_chi_dic_pane_t1

0x9989,	// (0x000b6b7b) list_highlight_pane_cp020

0xb231,	// (0x000b8423) bg_cale_heading_pane_g1

0x244c,	// (0x000af63e) bg_cale_heading_pane_g2

0x2454,	// (0x000af646) bg_cale_heading_pane_g3

0x245c,	// (0x000af64e) bg_cale_heading_pane_g4

0x2466,	// (0x000af658) bg_cale_heading_pane_g5

0x2470,	// (0x000af662) bg_cale_heading_pane_g6

0x2478,	// (0x000af66a) bg_cale_heading_pane_g7

0x2480,	// (0x000af672) bg_cale_heading_pane_g8

0x248a,	// (0x000af67c) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000bc596) bg_cale_heading_pane_g

0xb231,	// (0x000b8423) bg_cale_side_pane_g1

0x2494,	// (0x000af686) bg_cale_side_pane_g2

0x249e,	// (0x000af690) bg_cale_side_pane_g3

0x24a8,	// (0x000af69a) bg_cale_side_pane_g4

0x24b2,	// (0x000af6a4) bg_cale_side_pane_g5

0x24bc,	// (0x000af6ae) bg_cale_side_pane_g6

0x24c6,	// (0x000af6b8) bg_cale_side_pane_g7

0x24d0,	// (0x000af6c2) bg_cale_side_pane_g8

0x24d8,	// (0x000af6ca) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000bc5a9) bg_cale_side_pane_g

0x24e0,	// (0x000af6d2) popup_call_status_window_ParamLimits

0x24e0,	// (0x000af6d2) popup_call_status_window

0xb239,	// (0x000b842b) stacon_top_pane

0xb241,	// (0x000b8433) status_pane_ParamLimits

0xb241,	// (0x000b8433) status_pane

0xb256,	// (0x000b8448) status_small_pane

0xb25e,	// (0x000b8450) control_pane

0x9989,	// (0x000b6b7b) stacon_bottom_pane

0xb266,	// (0x000b8458) list_single_mce_smart_pane_t1_ParamLimits

0xb266,	// (0x000b8458) list_single_mce_smart_pane_t1

0xb279,	// (0x000b846b) list_single_mce_smart_pane_t2_ParamLimits

0xb279,	// (0x000b846b) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x000bc5bc) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x000bc5bc) list_single_mce_smart_pane_t

0x252d,	// (0x000af71f) compass_pane

0x2538,	// (0x000af72a) main_location2_pane_t1

0x254c,	// (0x000af73e) main_location2_pane_t2

0x2562,	// (0x000af754) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000bc5c1) main_location2_pane_t

0xb298,	// (0x000b848a) compass_pane_g1_ParamLimits

0xb298,	// (0x000b848a) compass_pane_g1

0x25ac,	// (0x000af79e) compass_pane_t1

0x25bb,	// (0x000af7ad) compass_pane_t2

0x0005,

0xf3d8,	// (0x000bc5ca) compass_pane_t

0x2602,	// (0x000af7f4) text_secondary_cp61

0xb2ac,	// (0x000b849e) navi_pane_cams_g5

0xb2cf,	// (0x000b84c1) navi_pane_im_t1

0xb2dd,	// (0x000b84cf) navi_pane_mp_g1_ParamLimits

0xb2dd,	// (0x000b84cf) navi_pane_mp_g1

0xb2f1,	// (0x000b84e3) navi_pane_mp_g2_ParamLimits

0xb2f1,	// (0x000b84e3) navi_pane_mp_g2

0xb2fd,	// (0x000b84ef) navi_pane_mp_g3_ParamLimits

0xb2fd,	// (0x000b84ef) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x000bc5de) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x000bc5de) navi_pane_mp_g

0xb309,	// (0x000b84fb) navi_pane_mp_t1

0xb317,	// (0x000b8509) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x000bc5e5) navi_pane_mp_t

0xb353,	// (0x000b8545) navi_pane_vt_g1

0xb309,	// (0x000b84fb) navi_pane_vt_t1

0xb35b,	// (0x000b854d) navi_slider_pane

0xb363,	// (0x000b8555) zooming_pane

0xb36b,	// (0x000b855d) navi_slider_pane_g1

0x9e00,	// (0x000b6ff2) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x000bc5ec) navi_slider_pane_g

0xb38f,	// (0x000b8581) aid_levels_zoom

0xb397,	// (0x000b8589) zooming_pane_g1

0xb39f,	// (0x000b8591) zooming_pane_g2

0xb39f,	// (0x000b8591) zooming_pane_g3

0x0002,

0xf409,	// (0x000bc5fb) zooming_pane_g

0xb3a7,	// (0x000b8599) level_10_zoom

0xb3b0,	// (0x000b85a2) level_11_zoom

0xb3b9,	// (0x000b85ab) level_1_zoom

0xb3c2,	// (0x000b85b4) level_2_zoom

0xb3cb,	// (0x000b85bd) level_3_zoom

0xb3d4,	// (0x000b85c6) level_4_zoom

0xb3dd,	// (0x000b85cf) level_5_zoom

0xb3e6,	// (0x000b85d8) level_6_zoom

0xb3ef,	// (0x000b85e1) level_7_zoom

0xb3f8,	// (0x000b85ea) level_8_zoom

0xb401,	// (0x000b85f3) level_9_zoom

0xb412,	// (0x000b8604) popup_phob_thumbnail_window_g1

0xb41a,	// (0x000b860c) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x000bc602) popup_phob_thumbnail_window_g

0xc7b5,	// (0x000b99a7) level_1_location

0xc7bd,	// (0x000b99af) level_2_location

0xc7c5,	// (0x000b99b7) level_3_location

0xc7cd,	// (0x000b99bf) level_4_location

0xb363,	// (0x000b8555) level_5_location

0x274b,	// (0x000af93d) mce_icon_pane_g1

0x2755,	// (0x000af947) mce_icon_pane_g2

0x0001,

0xf415,	// (0x000bc607) mce_icon_pane_g

0x275d,	// (0x000af94f) main_mup_pane_g1_ParamLimits

0x275d,	// (0x000af94f) main_mup_pane_g1

0x2773,	// (0x000af965) main_mup_pane_g2_ParamLimits

0x2773,	// (0x000af965) main_mup_pane_g2

0x278b,	// (0x000af97d) main_mup_pane_g3_ParamLimits

0x278b,	// (0x000af97d) main_mup_pane_g3

0x27a3,	// (0x000af995) main_mup_pane_g4_ParamLimits

0x27a3,	// (0x000af995) main_mup_pane_g4

0x27bb,	// (0x000af9ad) main_mup_pane_g5_ParamLimits

0x27bb,	// (0x000af9ad) main_mup_pane_g5

0x27d7,	// (0x000af9c9) main_mup_pane_g6_ParamLimits

0x27d7,	// (0x000af9c9) main_mup_pane_g6

0x27f1,	// (0x000af9e3) main_mup_pane_g7_ParamLimits

0x27f1,	// (0x000af9e3) main_mup_pane_g7

0x280f,	// (0x000afa01) main_mup_pane_g8_ParamLimits

0x280f,	// (0x000afa01) main_mup_pane_g8

0x282d,	// (0x000afa1f) main_mup_pane_g9_ParamLimits

0x282d,	// (0x000afa1f) main_mup_pane_g9

0x2849,	// (0x000afa3b) main_mup_pane_g10_ParamLimits

0x2849,	// (0x000afa3b) main_mup_pane_g10

0x2867,	// (0x000afa59) main_mup_pane_g11_ParamLimits

0x2867,	// (0x000afa59) main_mup_pane_g11

0x2881,	// (0x000afa73) main_mup_pane_g12_ParamLimits

0x2881,	// (0x000afa73) main_mup_pane_g12

0x2897,	// (0x000afa89) main_mup_pane_g13_ParamLimits

0x2897,	// (0x000afa89) main_mup_pane_g13

0x000c,

0xf41a,	// (0x000bc60c) main_mup_pane_g_ParamLimits

0xf41a,	// (0x000bc60c) main_mup_pane_g

0x28ab,	// (0x000afa9d) main_mup_pane_t1_ParamLimits

0x28ab,	// (0x000afa9d) main_mup_pane_t1

0x28c7,	// (0x000afab9) main_mup_pane_t2_ParamLimits

0x28c7,	// (0x000afab9) main_mup_pane_t2

0x28df,	// (0x000afad1) main_mup_pane_t3_ParamLimits

0x28df,	// (0x000afad1) main_mup_pane_t3

0x28f7,	// (0x000afae9) main_mup_pane_t4_ParamLimits

0x28f7,	// (0x000afae9) main_mup_pane_t4

0x2915,	// (0x000afb07) main_mup_pane_t5_ParamLimits

0x2915,	// (0x000afb07) main_mup_pane_t5

0x292a,	// (0x000afb1c) main_mup_pane_t6_ParamLimits

0x292a,	// (0x000afb1c) main_mup_pane_t6

0x0005,

0xf435,	// (0x000bc627) main_mup_pane_t_ParamLimits

0xf435,	// (0x000bc627) main_mup_pane_t

0x293c,	// (0x000afb2e) mup_progress_pane_ParamLimits

0x293c,	// (0x000afb2e) mup_progress_pane

0x2948,	// (0x000afb3a) mup_visualizer_pane_ParamLimits

0x2948,	// (0x000afb3a) mup_visualizer_pane

0x297c,	// (0x000afb6e) mup_volume_pane_ParamLimits

0x297c,	// (0x000afb6e) mup_volume_pane

0xb422,	// (0x000b8614) mup_visualizer_pane_g1_ParamLimits

0xb422,	// (0x000b8614) mup_visualizer_pane_g1

0xb422,	// (0x000b8614) mup_visualizer_pane_g2_ParamLimits

0xb422,	// (0x000b8614) mup_visualizer_pane_g2

0xb298,	// (0x000b848a) mup_visualizer_pane_g3_ParamLimits

0xb298,	// (0x000b848a) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x000bc634) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x000bc634) mup_visualizer_pane_g

0xa8b6,	// (0x000b7aa8) mup_volume_pane_g1

0xb438,	// (0x000b862a) mup_volume_pane_g2

0x0001,

0xf449,	// (0x000bc63b) mup_volume_pane_g

0xa8b6,	// (0x000b7aa8) mup_progress_pane_g1

0xb441,	// (0x000b8633) mup_progress_pane_g2

0xb44a,	// (0x000b863c) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x000bc640) mup_progress_pane_g

0x9989,	// (0x000b6b7b) bg_popup_window_pane_cp05

0xb453,	// (0x000b8645) heading_pane_cp02_ParamLimits

0xb453,	// (0x000b8645) heading_pane_cp02

0xb46f,	// (0x000b8661) list_popup_blid_pane

0xb477,	// (0x000b8669) list_blid_sat_info_pane_ParamLimits

0xb477,	// (0x000b8669) list_blid_sat_info_pane

0xb48a,	// (0x000b867c) list_blid_sat_info_pane_g1

0xb492,	// (0x000b8684) list_blid_sat_info_pane_t1

0x2aa6,	// (0x000afc98) mup_equalizer_pane_ParamLimits

0x2aa6,	// (0x000afc98) mup_equalizer_pane

0x2ac7,	// (0x000afcb9) mup_equalizer_pane_cp1_ParamLimits

0x2ac7,	// (0x000afcb9) mup_equalizer_pane_cp1

0x2ae8,	// (0x000afcda) mup_equalizer_pane_cp2_ParamLimits

0x2ae8,	// (0x000afcda) mup_equalizer_pane_cp2

0x2b0d,	// (0x000afcff) mup_equalizer_pane_cp3_ParamLimits

0x2b0d,	// (0x000afcff) mup_equalizer_pane_cp3

0x2b36,	// (0x000afd28) mup_equalizer_pane_cp4_ParamLimits

0x2b36,	// (0x000afd28) mup_equalizer_pane_cp4

0x2b5f,	// (0x000afd51) mup_equalizer_pane_cp5

0x2b77,	// (0x000afd69) mup_equalizer_pane_cp6

0x2b8f,	// (0x000afd81) mup_equalizer_pane_cp7

0xc6cf,	// (0x000b98c1) bg_popup_call_poc_act_pane_g9

0xc6d7,	// (0x000b98c9) bg_popup_call_poc_act_pane_g10

0xc6df,	// (0x000b98d1) bg_popup_call_poc_act_pane_g11

0x000a,

0x9be4,	// (0x000b6dd6) mup_scale_pane

0xa8b6,	// (0x000b7aa8) mup_scale_pane_g1

0xb4a0,	// (0x000b8692) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x000bc65c) mup_scale_pane_g

0xb4c4,	// (0x000b86b6) msg_data_pane

0xb4cc,	// (0x000b86be) scroll_pane_cp017

0x2bb9,	// (0x000afdab) bg_list_pane_cp04_ParamLimits

0x2bb9,	// (0x000afdab) bg_list_pane_cp04

0xb4d4,	// (0x000b86c6) msg_data_pane_g1

0x2bd9,	// (0x000afdcb) msg_data_pane_g2

0x2be3,	// (0x000afdd5) msg_data_pane_g3

0x2bed,	// (0x000afddf) msg_data_pane_g4

0x2bf5,	// (0x000afde7) msg_data_pane_g5

0x2bfd,	// (0x000afdef) msg_data_pane_g6

0x2c05,	// (0x000afdf7) msg_data_pane_g7

0x0006,

0xf479,	// (0x000bc66b) msg_data_pane_g

0x2c0d,	// (0x000afdff) msg_text_pane_ParamLimits

0x2c0d,	// (0x000afdff) msg_text_pane

0x2c33,	// (0x000afe25) qrid_highlight_pane_cp011_ParamLimits

0x2c33,	// (0x000afe25) qrid_highlight_pane_cp011

0x9989,	// (0x000b6b7b) msg_body_pane

0x9989,	// (0x000b6b7b) msg_header_pane

0xb4e5,	// (0x000b86d7) input_focus_pane_cp07

0x9e1a,	// (0x000b700c) msg_header_pane_t1_ParamLimits

0x9e1a,	// (0x000b700c) msg_header_pane_t1

0x9e2c,	// (0x000b701e) msg_header_pane_t2_ParamLimits

0x9e2c,	// (0x000b701e) msg_header_pane_t2

0x0001,

0xf48d,	// (0x000bc67f) msg_header_pane_t_ParamLimits

0xf48d,	// (0x000bc67f) msg_header_pane_t

0xb4fa,	// (0x000b86ec) msg_body_pane_g1

0x2c57,	// (0x000afe49) msg_body_pane_t1_ParamLimits

0x2c57,	// (0x000afe49) msg_body_pane_t1

0x9e3e,	// (0x000b7030) msg_body_pane_t2_ParamLimits

0x9e3e,	// (0x000b7030) msg_body_pane_t2

0x9e50,	// (0x000b7042) msg_body_pane_t3_ParamLimits

0x9e50,	// (0x000b7042) msg_body_pane_t3

0x0002,

0xf492,	// (0x000bc684) msg_body_pane_t_ParamLimits

0xf492,	// (0x000bc684) msg_body_pane_t

0x2cc2,	// (0x000afeb4) main_viewer_pane_g1_ParamLimits

0x2cc2,	// (0x000afeb4) main_viewer_pane_g1

0x2cd0,	// (0x000afec2) main_viewer_pane_g2_ParamLimits

0x2cd0,	// (0x000afec2) main_viewer_pane_g2

0x2cde,	// (0x000afed0) main_viewer_pane_g3_ParamLimits

0x2cde,	// (0x000afed0) main_viewer_pane_g3

0x2ced,	// (0x000afedf) main_viewer_pane_g4_ParamLimits

0x2ced,	// (0x000afedf) main_viewer_pane_g4

0x9e7a,	// (0x000b706c) main_viewer_pane_g5_ParamLimits

0x9e7a,	// (0x000b706c) main_viewer_pane_g5

0x9e7a,	// (0x000b706c) main_viewer_pane_g7_ParamLimits

0x9e7a,	// (0x000b706c) main_viewer_pane_g7

0x9e8c,	// (0x000b707e) main_viewer_pane_g8_ParamLimits

0x9e8c,	// (0x000b707e) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x000bc694) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x000bc694) main_viewer_pane_g

0xb502,	// (0x000b86f4) viewer_content_pane_ParamLimits

0xb502,	// (0x000b86f4) viewer_content_pane

0x2d2b,	// (0x000aff1d) main_postcard_pane_g1_ParamLimits

0x2d2b,	// (0x000aff1d) main_postcard_pane_g1

0x2d41,	// (0x000aff33) main_postcard_pane_g2_ParamLimits

0x2d41,	// (0x000aff33) main_postcard_pane_g2

0x2d57,	// (0x000aff49) main_postcard_pane_g3_ParamLimits

0x2d57,	// (0x000aff49) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x000bc6a5) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x000bc6a5) main_postcard_pane_g

0x2d6e,	// (0x000aff60) main_postcard_pane_g4

0xc8f8,	// (0x000b9aea) smil_status_volume_pane_g2

0x2db1,	// (0x000affa3) postcard_pane_ParamLimits

0x2db1,	// (0x000affa3) postcard_pane

0xb510,	// (0x000b8702) postcard_pane_g1_ParamLimits

0xb510,	// (0x000b8702) postcard_pane_g1

0x2e01,	// (0x000afff3) postcard_pane_g2_ParamLimits

0x2e01,	// (0x000afff3) postcard_pane_g2

0x2e0d,	// (0x000affff) postcard_pane_g3_ParamLimits

0x2e0d,	// (0x000affff) postcard_pane_g3

0xb51e,	// (0x000b8710) postcard_pane_g4_ParamLimits

0xb51e,	// (0x000b8710) postcard_pane_g4

0x2e19,	// (0x000b000b) postcard_pane_g5_ParamLimits

0x2e19,	// (0x000b000b) postcard_pane_g5

0x2e2e,	// (0x000b0020) postcard_pane_g6_ParamLimits

0x2e2e,	// (0x000b0020) postcard_pane_g6

0xb510,	// (0x000b8702) postcard_pane_g7_ParamLimits

0xb510,	// (0x000b8702) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000bc6b2) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000bc6b2) postcard_pane_g

0x2e46,	// (0x000b0038) main_mp2_pane_g1_ParamLimits

0x2e46,	// (0x000b0038) main_mp2_pane_g1

0x2e54,	// (0x000b0046) main_mp2_pane_g2_ParamLimits

0x2e54,	// (0x000b0046) main_mp2_pane_g2

0x2e60,	// (0x000b0052) main_mp2_pane_g3_ParamLimits

0x2e60,	// (0x000b0052) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000bc6c1) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000bc6c1) main_mp2_pane_g

0x2e6c,	// (0x000b005e) main_mp2_pane_t1_ParamLimits

0x2e6c,	// (0x000b005e) main_mp2_pane_t1

0x2e83,	// (0x000b0075) main_mp2_pane_t2_ParamLimits

0x2e83,	// (0x000b0075) main_mp2_pane_t2

0x2e95,	// (0x000b0087) main_mp2_pane_t3_ParamLimits

0x2e95,	// (0x000b0087) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x000bc6c8) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x000bc6c8) main_mp2_pane_t

0xb52c,	// (0x000b871e) pec_content_pane_ParamLimits

0xb52c,	// (0x000b871e) pec_content_pane

0xabda,	// (0x000b7dcc) scroll_pane_cp015

0xb53e,	// (0x000b8730) pec_attribute_pane_ParamLimits

0xb53e,	// (0x000b8730) pec_attribute_pane

0x2ea7,	// (0x000b0099) pec_content_pane_g1_ParamLimits

0x2ea7,	// (0x000b0099) pec_content_pane_g1

0xb54e,	// (0x000b8740) pec_content_pane_t1_ParamLimits

0xb54e,	// (0x000b8740) pec_content_pane_t1

0xb560,	// (0x000b8752) pec_content_pane_t2_ParamLimits

0xb560,	// (0x000b8752) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x000bc6cf) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x000bc6cf) pec_content_pane_t

0x2eb3,	// (0x000b00a5) list_single_graphic_pane_cp01_ParamLimits

0x2eb3,	// (0x000b00a5) list_single_graphic_pane_cp01

0x9be4,	// (0x000b6dd6) bg_popup_sub_pane_cp04

0xb572,	// (0x000b8764) popup_mup_playback_window_g1

0xb57e,	// (0x000b8770) popup_mup_playback_window_t1

0xb593,	// (0x000b8785) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x000bc6d4) popup_mup_playback_window_t

0xb5ca,	// (0x000b87bc) main_image_pane_g1_ParamLimits

0xb5ca,	// (0x000b87bc) main_image_pane_g1

0xb60d,	// (0x000b87ff) scroll_pane_cp018_ParamLimits

0xb60d,	// (0x000b87ff) scroll_pane_cp018

0xb625,	// (0x000b8817) scroll_pane_cp016_ParamLimits

0xb625,	// (0x000b8817) scroll_pane_cp016

0x2f82,	// (0x000b0174) smil2_image_pane_ParamLimits

0x2f82,	// (0x000b0174) smil2_image_pane

0x2fb8,	// (0x000b01aa) smil2_root_pane_ParamLimits

0x2fb8,	// (0x000b01aa) smil2_root_pane

0x2ff0,	// (0x000b01e2) smil2_text_pane_ParamLimits

0x2ff0,	// (0x000b01e2) smil2_text_pane

0x9989,	// (0x000b6b7b) bg_list_pane_cp06

0xb661,	// (0x000b8853) grid_radio_pane

0x9989,	// (0x000b6b7b) bg_popup_window_pane_cp06

0xb66b,	// (0x000b885d) main_fmradio_pane_t1

0xb115,	// (0x000b8307) heading_pane_cp04

0xb679,	// (0x000b886b) main_fmradio_pane_t2

0xc6e7,	// (0x000b98d9) popup_cale_lunar_info_window_g1

0xb687,	// (0x000b8879) main_fmradio_pane_t3

0xc6ef,	// (0x000b98e1) popup_cale_lunar_info_window_g2

0xb697,	// (0x000b8889) main_fmradio_pane_t4

0x0001,

0xb6a5,	// (0x000b8897) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x000bc7af) popup_cale_lunar_info_window_g

0xf4f7,	// (0x000bc6e9) main_fmradio_pane_t

0xb6b3,	// (0x000b88a5) wait_bar_pane_cp03

0xb6bb,	// (0x000b88ad) cell_fmradio_pane_ParamLimits

0xb6bb,	// (0x000b88ad) cell_fmradio_pane

0xb510,	// (0x000b8702) cell_fmradio_pane_g1_ParamLimits

0xb510,	// (0x000b8702) cell_fmradio_pane_g1

0x9989,	// (0x000b6b7b) grid_highlight_pane_cp011

0xb6d0,	// (0x000b88c2) poc_content_pane_ParamLimits

0xb6d0,	// (0x000b88c2) poc_content_pane

0xb6e2,	// (0x000b88d4) scroll_pane_cp019

0x3080,	// (0x000b0272) popup_call_poc_act_window_ParamLimits

0x3080,	// (0x000b0272) popup_call_poc_act_window

0x30a4,	// (0x000b0296) popup_call_poc_inact_window_ParamLimits

0x30a4,	// (0x000b0296) popup_call_poc_inact_window

0xf594,	// (0x000bc786) bg_popup_call_poc_act_pane_g

0xc65f,	// (0x000b9851) bg_popup_call_poc_inact_pane_g1

0xc667,	// (0x000b9859) bg_popup_call_poc_inact_pane_g2

0xb6ea,	// (0x000b88dc) popup_call_poc_act_window_g2

0xc66f,	// (0x000b9861) bg_popup_call_poc_inact_pane_g3

0xc677,	// (0x000b9869) bg_popup_call_poc_inact_pane_g4

0xc67f,	// (0x000b9871) bg_popup_call_poc_inact_pane_g5

0xb6f2,	// (0x000b88e4) popup_call_poc_act_window_t1_ParamLimits

0xb6f2,	// (0x000b88e4) popup_call_poc_act_window_t1

0xb71a,	// (0x000b890c) popup_call_poc_act_window_t2_ParamLimits

0xb71a,	// (0x000b890c) popup_call_poc_act_window_t2

0xb742,	// (0x000b8934) popup_call_poc_act_window_t3_ParamLimits

0xb742,	// (0x000b8934) popup_call_poc_act_window_t3

0xb76a,	// (0x000b895c) popup_call_poc_act_window_t4_ParamLimits

0xb76a,	// (0x000b895c) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x000bc6f4) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x000bc6f4) popup_call_poc_act_window_t

0xc687,	// (0x000b9879) bg_popup_call_poc_inact_pane_g6

0xc68f,	// (0x000b9881) bg_popup_call_poc_inact_pane_g7

0xc697,	// (0x000b9889) bg_popup_call_poc_inact_pane_g8

0xb77c,	// (0x000b896e) popup_call_poc_inact_window_g2

0xc69f,	// (0x000b9891) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x000bc773) bg_popup_call_poc_inact_pane_g

0xb784,	// (0x000b8976) popup_call_poc_inact_window_t1_ParamLimits

0xb784,	// (0x000b8976) popup_call_poc_inact_window_t1

0xb799,	// (0x000b898b) popup_call_poc_inact_window_t2_ParamLimits

0xb799,	// (0x000b898b) popup_call_poc_inact_window_t2

0xb7ae,	// (0x000b89a0) popup_call_poc_inact_window_t3_ParamLimits

0xb7ae,	// (0x000b89a0) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x000bc6fd) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x000bc6fd) popup_call_poc_inact_window_t

0xc86b,	// (0x000b9a5d) context_pane_ParamLimits

0x394c,	// (0x000b0b3e) signal_pane_ParamLimits

0xb363,	// (0x000b8555) main_call2_pane

0xc859,	// (0x000b9a4b) popup_phob_thumbnail2_window_ParamLimits

0xc859,	// (0x000b9a4b) popup_phob_thumbnail2_window

0x9e62,	// (0x000b7054) aid_hotspot_pointer_arrow_pane

0x9e6a,	// (0x000b705c) aid_hotspot_pointer_hand_pane

0x340c,	// (0x000b05fe) phob_pre_status_pane_g5

0x0c3f,	// (0x000ade31) cams_zoom_pane_ParamLimits

0x0c4e,	// (0x000ade40) image_vga_pane_ParamLimits

0x0c68,	// (0x000ade5a) main_camera_pane_g1_ParamLimits

0x0c7a,	// (0x000ade6c) main_camera_pane_g2_ParamLimits

0x0c8a,	// (0x000ade7c) main_camera_pane_g3_ParamLimits

0x0c9e,	// (0x000ade90) main_camera_pane_g4_ParamLimits

0x0cb2,	// (0x000adea4) main_camera_pane_g5_ParamLimits

0x0cc6,	// (0x000adeb8) main_camera_pane_g6_ParamLimits

0x0cda,	// (0x000adecc) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x000bc3fc) main_camera_pane_g_ParamLimits

0x0cee,	// (0x000adee0) main_camera_pane_t1_ParamLimits

0x0d04,	// (0x000adef6) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x000bc40d) main_camera_pane_t_ParamLimits

0x9be4,	// (0x000b6dd6) bg_popup_preview_window_pane_cp01_ParamLimits

0x9be4,	// (0x000b6dd6) bg_popup_preview_window_pane_cp01

0xb7c3,	// (0x000b89b5) popup_phob_thumbnail2_window_g1_ParamLimits

0xb7c3,	// (0x000b89b5) popup_phob_thumbnail2_window_g1

0x9989,	// (0x000b6b7b) call2_cli_visual_pane

0x30d8,	// (0x000b02ca) popup_call2_audio_conf_window_ParamLimits

0x30d8,	// (0x000b02ca) popup_call2_audio_conf_window

0x3100,	// (0x000b02f2) popup_call2_audio_first_window_ParamLimits

0x3100,	// (0x000b02f2) popup_call2_audio_first_window

0x3196,	// (0x000b0388) popup_call2_audio_in_window_ParamLimits

0x3196,	// (0x000b0388) popup_call2_audio_in_window

0x31e2,	// (0x000b03d4) popup_call2_audio_out_window_ParamLimits

0x31e2,	// (0x000b03d4) popup_call2_audio_out_window

0x3254,	// (0x000b0446) popup_call2_audio_second_window_ParamLimits

0x3254,	// (0x000b0446) popup_call2_audio_second_window

0x32ba,	// (0x000b04ac) popup_call2_audio_wait_window_ParamLimits

0x32ba,	// (0x000b04ac) popup_call2_audio_wait_window

0x9989,	// (0x000b6b7b) bg_popup_call2_act_pane_cp03

0x9bc6,	// (0x000b6db8) list_conf_pane_cp

0xb7cf,	// (0x000b89c1) popup_call2_audio_conf_window_t1

0xb7dd,	// (0x000b89cf) list_single_graphic_popup_conf2_pane_ParamLimits

0xb7dd,	// (0x000b89cf) list_single_graphic_popup_conf2_pane

0xb184,	// (0x000b8376) list_highlight_pane_cp04

0xb7f0,	// (0x000b89e2) list_single_graphic_popup_conf2_pane_g1

0xb195,	// (0x000b8387) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x000bc704) list_single_graphic_popup_conf2_pane_g

0xb7fa,	// (0x000b89ec) list_single_graphic_popup_conf2_pane_t1

0xb808,	// (0x000b89fa) bg_popup_call2_act_pane_cp01_ParamLimits

0xb808,	// (0x000b89fa) bg_popup_call2_act_pane_cp01

0xb892,	// (0x000b8a84) call_type_pane_cp05_ParamLimits

0xb892,	// (0x000b8a84) call_type_pane_cp05

0xb8e6,	// (0x000b8ad8) popup_call2_audio_second_window_g1_ParamLimits

0xb8e6,	// (0x000b8ad8) popup_call2_audio_second_window_g1

0xb93a,	// (0x000b8b2c) popup_call2_audio_second_window_g2_ParamLimits

0xb93a,	// (0x000b8b2c) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x000bc709) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x000bc709) popup_call2_audio_second_window_g

0xb99f,	// (0x000b8b91) popup_call2_audio_second_window_t1_ParamLimits

0xb99f,	// (0x000b8b91) popup_call2_audio_second_window_t1

0xba5a,	// (0x000b8c4c) popup_call2_audio_second_window_t2_ParamLimits

0xba5a,	// (0x000b8c4c) popup_call2_audio_second_window_t2

0xbaad,	// (0x000b8c9f) popup_call2_audio_second_window_t3_ParamLimits

0xbaad,	// (0x000b8c9f) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x000bc710) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x000bc710) popup_call2_audio_second_window_t

0x9989,	// (0x000b6b7b) bg_popup_call2_in_pane_cp02

0x9993,	// (0x000b6b85) call_type_pane_cp04

0x999b,	// (0x000b6b8d) popup_call2_audio_wait_window_g1

0x99a3,	// (0x000b6b95) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000bc2e7) popup_call2_audio_wait_window_g

0x99ab,	// (0x000b6b9d) popup_call2_audio_wait_window_t3

0xbc32,	// (0x000b8e24) bg_popup_call2_act_pane_ParamLimits

0xbc32,	// (0x000b8e24) bg_popup_call2_act_pane

0xbcf2,	// (0x000b8ee4) call_type_pane_cp03_ParamLimits

0xbcf2,	// (0x000b8ee4) call_type_pane_cp03

0xbd56,	// (0x000b8f48) popup_call2_audio_first_window_g1_ParamLimits

0xbd56,	// (0x000b8f48) popup_call2_audio_first_window_g1

0xbdc6,	// (0x000b8fb8) popup_call2_audio_first_window_g2_ParamLimits

0xbdc6,	// (0x000b8fb8) popup_call2_audio_first_window_g2

0xb422,	// (0x000b8614) popup_call2_audio_first_window_g3_ParamLimits

0xb422,	// (0x000b8614) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x000bc719) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x000bc719) popup_call2_audio_first_window_g

0xbea4,	// (0x000b9096) popup_call2_audio_first_window_t1_ParamLimits

0xbea4,	// (0x000b9096) popup_call2_audio_first_window_t1

0xbfa7,	// (0x000b9199) popup_call2_audio_first_window_t4_ParamLimits

0xbfa7,	// (0x000b9199) popup_call2_audio_first_window_t4

0xc08a,	// (0x000b927c) popup_call2_audio_first_window_t5_ParamLimits

0xc08a,	// (0x000b927c) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x000bc724) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x000bc724) popup_call2_audio_first_window_t

0x9bdc,	// (0x000b6dce) bg_popup_call2_act_pane_g1

0xc6f9,	// (0x000b98eb) popup_cale_lunar_info_window_t1

0xc707,	// (0x000b98f9) popup_cale_lunar_info_window_t2

0xc715,	// (0x000b9907) popup_cale_lunar_info_window_t3

0x9989,	// (0x000b6b7b) bg_popup_call2_bubble_pane

0xc18b,	// (0x000b937d) bg_popup_call2_in_pane_cp01_ParamLimits

0xc18b,	// (0x000b937d) bg_popup_call2_in_pane_cp01

0x9665,	// (0x000b6857) call_type_pane_cp02

0xc1d3,	// (0x000b93c5) popup_call2_audio_out_window_g1_ParamLimits

0xc1d3,	// (0x000b93c5) popup_call2_audio_out_window_g1

0xc1ff,	// (0x000b93f1) popup_call2_audio_out_window_g2_ParamLimits

0xc1ff,	// (0x000b93f1) popup_call2_audio_out_window_g2

0xc227,	// (0x000b9419) popup_call2_audio_out_window_g3_ParamLimits

0xc227,	// (0x000b9419) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x000bc72d) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x000bc72d) popup_call2_audio_out_window_g

0xc262,	// (0x000b9454) popup_call2_audio_out_window_t1_ParamLimits

0xc262,	// (0x000b9454) popup_call2_audio_out_window_t1

0xc2c1,	// (0x000b94b3) popup_call2_audio_out_window_t2_ParamLimits

0xc2c1,	// (0x000b94b3) popup_call2_audio_out_window_t2

0xc315,	// (0x000b9507) popup_call2_audio_out_window_t3_ParamLimits

0xc315,	// (0x000b9507) popup_call2_audio_out_window_t3

0xc32b,	// (0x000b951d) popup_call2_audio_out_window_t4_ParamLimits

0xc32b,	// (0x000b951d) popup_call2_audio_out_window_t4

0xc341,	// (0x000b9533) popup_call2_audio_out_window_t5_ParamLimits

0xc341,	// (0x000b9533) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x000bc736) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x000bc736) popup_call2_audio_out_window_t

0xc3a5,	// (0x000b9597) bg_popup_call2_in_pane_ParamLimits

0xc3a5,	// (0x000b9597) bg_popup_call2_in_pane

0xc401,	// (0x000b95f3) popup_call2_audio_in_window_g1_ParamLimits

0xc401,	// (0x000b95f3) popup_call2_audio_in_window_g1

0xc439,	// (0x000b962b) popup_call2_audio_in_window_g2_ParamLimits

0xc439,	// (0x000b962b) popup_call2_audio_in_window_g2

0xc471,	// (0x000b9663) popup_call2_audio_in_window_g3_ParamLimits

0xc471,	// (0x000b9663) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x000bc743) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x000bc743) popup_call2_audio_in_window_g

0xc4c9,	// (0x000b96bb) popup_call2_audio_in_window_t1_ParamLimits

0xc4c9,	// (0x000b96bb) popup_call2_audio_in_window_t1

0xc549,	// (0x000b973b) popup_call2_audio_in_window_t2_ParamLimits

0xc549,	// (0x000b973b) popup_call2_audio_in_window_t2

0xc5c9,	// (0x000b97bb) popup_call2_audio_in_window_t3_ParamLimits

0xc5c9,	// (0x000b97bb) popup_call2_audio_in_window_t3

0xc5e3,	// (0x000b97d5) popup_call2_audio_in_window_t4_ParamLimits

0xc5e3,	// (0x000b97d5) popup_call2_audio_in_window_t4

0xc5f5,	// (0x000b97e7) popup_call2_audio_in_window_t5_ParamLimits

0xc5f5,	// (0x000b97e7) popup_call2_audio_in_window_t5

0xc60a,	// (0x000b97fc) popup_call2_audio_in_window_t6_ParamLimits

0xc60a,	// (0x000b97fc) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x000bc74c) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x000bc74c) popup_call2_audio_in_window_t

0x9bdc,	// (0x000b6dce) bg_popup_call2_in_pane_g1

0xc723,	// (0x000b9915) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x000bc7b4) popup_cale_lunar_info_window_t

0x9be4,	// (0x000b6dd6) bg_popup_call2_rect_pane_ParamLimits

0x9be4,	// (0x000b6dd6) bg_popup_call2_rect_pane

0x9989,	// (0x000b6b7b) call2_cli_visual_graphic_pane

0x9989,	// (0x000b6b7b) call2_cli_visual_text_pane

0x9ea4,	// (0x000b7096) smil_status_volume_pane_g3

0x0002,

0xa8b6,	// (0x000b7aa8) call2_cli_visual_graphic_pane_g1

0xa8b6,	// (0x000b7aa8) call2_cli_visual_graphic_pane_g2

0xa8b6,	// (0x000b7aa8) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x000bc759) call2_cli_visual_graphic_pane_g

0xc61f,	// (0x000b9811) bg_popup_call2_rect_pane_g1

0xa954,	// (0x000b7b46) bg_popup_call2_rect_pane_g2

0xc627,	// (0x000b9819) bg_popup_call2_rect_pane_g3

0xc62f,	// (0x000b9821) bg_popup_call2_rect_pane_g4

0xc637,	// (0x000b9829) bg_popup_call2_rect_pane_g5

0xc63f,	// (0x000b9831) bg_popup_call2_rect_pane_g6

0xc647,	// (0x000b9839) bg_popup_call2_rect_pane_g7

0xc64f,	// (0x000b9841) bg_popup_call2_rect_pane_g8

0xc657,	// (0x000b9849) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x000bc760) bg_popup_call2_rect_pane_g

0xc65f,	// (0x000b9851) bg_popup_call2_bubble_pane_g1

0xc667,	// (0x000b9859) bg_popup_call2_bubble_pane_g2

0xc66f,	// (0x000b9861) bg_popup_call2_bubble_pane_g3

0xc677,	// (0x000b9869) bg_popup_call2_bubble_pane_g4

0xc67f,	// (0x000b9871) bg_popup_call2_bubble_pane_g5

0xc687,	// (0x000b9879) bg_popup_call2_bubble_pane_g6

0xc68f,	// (0x000b9881) bg_popup_call2_bubble_pane_g7

0xc697,	// (0x000b9889) bg_popup_call2_bubble_pane_g8

0xc69f,	// (0x000b9891) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x000bc773) bg_popup_call2_bubble_pane_g

0x03c5,	// (0x000ad5b7) aid_cale_week_size_cell_pane

0x0d1e,	// (0x000adf10) aid_cams_cif_uncrop_pane_ParamLimits

0x0d1e,	// (0x000adf10) aid_cams_cif_uncrop_pane

0x0ed7,	// (0x000ae0c9) aid_cams_size_cell_ParamLimits

0x0ed7,	// (0x000ae0c9) aid_cams_size_cell

0x0eeb,	// (0x000ae0dd) grid_cams_pane_ParamLimits

0x0f05,	// (0x000ae0f7) linegrid_cams_pane_ParamLimits

0x10f8,	// (0x000ae2ea) call_video_pane_t1

0x1112,	// (0x000ae304) call_video_pane_t2

0x0001,

0xf26e,	// (0x000bc460) call_video_pane_t

0x1546,	// (0x000ae738) aid_cale_month_size_cell_pane_ParamLimits

0x1546,	// (0x000ae738) aid_cale_month_size_cell_pane

0xf60b,	// (0x000bc7fd) smil_status_volume_pane_g

0x9eb1,	// (0x000b70a3) volume_smil_pane_ParamLimits

0x9529,	// (0x000b671b) aid_popup2_width_pane

0x0315,	// (0x000ad507) cell_qdial_pane_g4_ParamLimits

0x0315,	// (0x000ad507) cell_qdial_pane_g4

0x258c,	// (0x000af77e) aid_blid_cardinal_pane_ParamLimits

0x2598,	// (0x000af78a) aid_blid_destination_pane_ParamLimits

0x2598,	// (0x000af78a) aid_blid_destination_pane

0x9be4,	// (0x000b6dd6) bg_popup_call_poc_act_pane_ParamLimits

0x9be4,	// (0x000b6dd6) bg_popup_call_poc_act_pane

0x9be4,	// (0x000b6dd6) bg_popup_call_poc_inact_pane_ParamLimits

0x9be4,	// (0x000b6dd6) bg_popup_call_poc_inact_pane

0xc6a7,	// (0x000b9899) bg_popup_call_poc_act_pane_g1

0xc6af,	// (0x000b98a1) bg_popup_call_poc_act_pane_g2

0xc6b7,	// (0x000b98a9) bg_popup_call_poc_act_pane_g3

0xc677,	// (0x000b9869) bg_popup_call_poc_act_pane_g4

0xc67f,	// (0x000b9871) bg_popup_call_poc_act_pane_g5

0xc6bf,	// (0x000b98b1) bg_popup_call_poc_act_pane_g6

0xc68f,	// (0x000b9881) bg_popup_call_poc_act_pane_g7

0xc6c7,	// (0x000b98b9) bg_popup_call_poc_act_pane_g8

0x9989,	// (0x000b6b7b) main_usb_pane

0xc830,	// (0x000b9a22) popup_cale_lunar_info_window

0x13db,	// (0x000ae5cd) im_reading_pane_t1_ParamLimits

0xab32,	// (0x000b7d24) list_im_pane_ParamLimits

0xab43,	// (0x000b7d35) scroll_pane_cp07_ParamLimits

0x9989,	// (0x000b6b7b) grid_highlight_pane_cp012

0x9be4,	// (0x000b6dd6) mup_scale_pane_ParamLimits

0xb510,	// (0x000b8702) main_usb_pane_g1_ParamLimits

0xb510,	// (0x000b8702) main_usb_pane_g1

0x3318,	// (0x000b050a) main_usb_pane_g2_ParamLimits

0x3318,	// (0x000b050a) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x000bc79d) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x000bc79d) main_usb_pane_g

0x332e,	// (0x000b0520) main_usb_pane_t1_ParamLimits

0x332e,	// (0x000b0520) main_usb_pane_t1

0x3340,	// (0x000b0532) main_usb_pane_t2_ParamLimits

0x3340,	// (0x000b0532) main_usb_pane_t2

0x3352,	// (0x000b0544) main_usb_pane_t3_ParamLimits

0x3352,	// (0x000b0544) main_usb_pane_t3

0x3364,	// (0x000b0556) main_usb_pane_t4_ParamLimits

0x3364,	// (0x000b0556) main_usb_pane_t4

0x3379,	// (0x000b056b) main_usb_pane_t5_ParamLimits

0x3379,	// (0x000b056b) main_usb_pane_t5

0x338e,	// (0x000b0580) main_usb_pane_t6_ParamLimits

0x338e,	// (0x000b0580) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x000bc7a2) main_usb_pane_t_ParamLimits

0x252d,	// (0x000af71f) aid_text_placing

0x2538,	// (0x000af72a) main_location2_pane_t1_ParamLimits

0x254c,	// (0x000af73e) main_location2_pane_t2_ParamLimits

0x2562,	// (0x000af754) main_location2_pane_t3_ParamLimits

0x2578,	// (0x000af76a) main_location2_pane_t4_ParamLimits

0x2578,	// (0x000af76a) main_location2_pane_t4

0xf3cf,	// (0x000bc5c1) main_location2_pane_t_ParamLimits

0x9c20,	// (0x000b6e12) find_pinb_pane_g2_ParamLimits

0x9c20,	// (0x000b6e12) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x000bc30d) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x000bc30d) find_pinb_pane_g

0x9c2c,	// (0x000b6e1e) find_pinb_pane_t1_ParamLimits

0x9c3e,	// (0x000b6e30) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x000bc312) find_pinb_pane_t_ParamLimits

0x9989,	// (0x000b6b7b) main_call3_pane

0x1b15,	// (0x000aed07) cale_month_day_heading_pane_t1_ParamLimits

0x1b9b,	// (0x000aed8d) cale_month_day_heading_pane_t2_ParamLimits

0x1c2c,	// (0x000aee1e) cale_month_day_heading_pane_t3_ParamLimits

0x1cbd,	// (0x000aeeaf) cale_month_day_heading_pane_t4_ParamLimits

0x1d4e,	// (0x000aef40) cale_month_day_heading_pane_t5_ParamLimits

0x1def,	// (0x000aefe1) cale_month_day_heading_pane_t6_ParamLimits

0x1e94,	// (0x000af086) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000bc498) cale_month_day_heading_pane_t_ParamLimits

0x2170,	// (0x000af362) smil_status_volume_pane

0x2dd5,	// (0x000affc7) postcard_address_pane_ParamLimits

0x2dd5,	// (0x000affc7) postcard_address_pane

0x2deb,	// (0x000affdd) postcard_message_pane_ParamLimits

0x2deb,	// (0x000affdd) postcard_message_pane

0x32f4,	// (0x000b04e6) call2_cli_visual_pane_t1_ParamLimits

0x32f4,	// (0x000b04e6) call2_cli_visual_pane_t1

0x3b81,	// (0x000b0d73) postcard_message_pane_t1_ParamLimits

0x3b81,	// (0x000b0d73) postcard_message_pane_t1

0x3b6a,	// (0x000b0d5c) postcard_address_pane_t1_ParamLimits

0x3b6a,	// (0x000b0d5c) postcard_address_pane_t1

0x3b56,	// (0x000b0d48) popup_call3_audio_in_window_ParamLimits

0x3b56,	// (0x000b0d48) popup_call3_audio_in_window

0x39db,	// (0x000b0bcd) bg_popup_call3_in_pane_ParamLimits

0x39db,	// (0x000b0bcd) bg_popup_call3_in_pane

0x3a57,	// (0x000b0c49) popup_call3_audio_in_window_g1_ParamLimits

0x3a57,	// (0x000b0c49) popup_call3_audio_in_window_g1

0x3a77,	// (0x000b0c69) popup_call3_audio_in_window_g2_ParamLimits

0x3a77,	// (0x000b0c69) popup_call3_audio_in_window_g2

0x3a97,	// (0x000b0c89) popup_call3_audio_in_window_g3_ParamLimits

0x3a97,	// (0x000b0c89) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x000bc804) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x000bc804) popup_call3_audio_in_window_g

0x3ac8,	// (0x000b0cba) popup_call3_audio_in_window_t1_ParamLimits

0x3ac8,	// (0x000b0cba) popup_call3_audio_in_window_t1

0x3b06,	// (0x000b0cf8) popup_call3_audio_in_window_t2_ParamLimits

0x3b06,	// (0x000b0cf8) popup_call3_audio_in_window_t2

0x3b44,	// (0x000b0d36) popup_call3_audio_in_window_t3_ParamLimits

0x3b44,	// (0x000b0d36) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x000bc80d) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x000bc80d) popup_call3_audio_in_window_t

0xb363,	// (0x000b8555) bg_popup_call3_rect_pane

0xc61f,	// (0x000b9811) bg_popup_call3_rect_pane_g1

0xa954,	// (0x000b7b46) bg_popup_call3_rect_pane_g2

0xc627,	// (0x000b9819) bg_popup_call3_rect_pane_g3

0xc62f,	// (0x000b9821) bg_popup_call3_rect_pane_g4

0xc637,	// (0x000b9829) bg_popup_call3_rect_pane_g5

0xc63f,	// (0x000b9831) bg_popup_call3_rect_pane_g6

0xc647,	// (0x000b9839) bg_popup_call3_rect_pane_g7

0x2992,	// (0x000afb84) mup_visualizer_osc_pane

0xb430,	// (0x000b8622) mup_visualizer_spec_pane

0x3a0b,	// (0x000b0bfd) call3_video_qcif_pane_ParamLimits

0x3a0b,	// (0x000b0bfd) call3_video_qcif_pane

0x3a1e,	// (0x000b0c10) call3_video_qcif_uncrop_pane_ParamLimits

0x3a1e,	// (0x000b0c10) call3_video_qcif_uncrop_pane

0x3a2e,	// (0x000b0c20) call3_video_subqcif_pane_ParamLimits

0x3a2e,	// (0x000b0c20) call3_video_subqcif_pane

0x3a44,	// (0x000b0c36) call3_video_subqcif_uncrop_pane_ParamLimits

0x3a44,	// (0x000b0c36) call3_video_subqcif_uncrop_pane

0x3ab7,	// (0x000b0ca9) popup_call3_audio_in_window_g4_ParamLimits

0x3ab7,	// (0x000b0ca9) popup_call3_audio_in_window_g4

0x39ca,	// (0x000b0bbc) mup_spec_half_pane

0x39d3,	// (0x000b0bc5) mup_spec_half_pane_cp

0xc8cb,	// (0x000b9abd) mup_osc_middle_pane

0xc8d4,	// (0x000b9ac6) mup_visualizer_osc_pane_g1

0x39aa,	// (0x000b0b9c) mup_spec_bar_pane_ParamLimits

0x39aa,	// (0x000b0b9c) mup_spec_bar_pane

0xc8b8,	// (0x000b9aaa) mup_spec_bar_pane_g1

0xc8c2,	// (0x000b9ab4) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000bc7f8) mup_spec_bar_pane_g

0x03c5,	// (0x000ad5b7) aid_cale_week_size_cell_pane_ParamLimits

0x03df,	// (0x000ad5d1) bg_cale_heading_pane_ParamLimits

0xa988,	// (0x000b7b7a) bg_cale_pane_cp01_ParamLimits

0x0408,	// (0x000ad5fa) cale_week_corner_pane_ParamLimits

0x0427,	// (0x000ad619) cale_week_day_heading_pane_ParamLimits

0x0455,	// (0x000ad647) cale_week_scroll_pane_g1_ParamLimits

0x0479,	// (0x000ad66b) cale_week_scroll_pane_g2_ParamLimits

0x0491,	// (0x000ad683) cale_week_scroll_pane_g3_ParamLimits

0x04a9,	// (0x000ad69b) cale_week_scroll_pane_g4_ParamLimits

0x04c5,	// (0x000ad6b7) cale_week_scroll_pane_g5_ParamLimits

0x04e5,	// (0x000ad6d7) cale_week_scroll_pane_g6_ParamLimits

0x0505,	// (0x000ad6f7) cale_week_scroll_pane_g7_ParamLimits

0x0529,	// (0x000ad71b) cale_week_scroll_pane_g8_ParamLimits

0x054d,	// (0x000ad73f) cale_week_scroll_pane_g9_ParamLimits

0x056a,	// (0x000ad75c) cale_week_scroll_pane_g10_ParamLimits

0x0587,	// (0x000ad779) cale_week_scroll_pane_g11_ParamLimits

0x05a4,	// (0x000ad796) cale_week_scroll_pane_g12_ParamLimits

0x05c1,	// (0x000ad7b3) cale_week_scroll_pane_g13_ParamLimits

0x05de,	// (0x000ad7d0) cale_week_scroll_pane_g14_ParamLimits

0x0607,	// (0x000ad7f9) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x000bc39e) cale_week_scroll_pane_g_ParamLimits

0x0654,	// (0x000ad846) cale_week_time_pane_ParamLimits

0x0678,	// (0x000ad86a) grid_cale_week_pane_ParamLimits

0xa9a6,	// (0x000b7b98) listscroll_cale_week_pane_t1

0xa9b8,	// (0x000b7baa) scroll_pane_cp08_ParamLimits

0x15b3,	// (0x000ae7a5) cale_month_corner_pane_ParamLimits

0xad63,	// (0x000b7f55) cale_month_pane_t1

0x1a9b,	// (0x000aec8d) cale_month_week_pane_ParamLimits

0x235b,	// (0x000af54d) popup_call_status_window_g1_ParamLimits

0x236f,	// (0x000af561) popup_call_status_window_g2_ParamLimits

0x2383,	// (0x000af575) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x000bc548) popup_call_status_window_g_ParamLimits

0xb105,	// (0x000b82f7) aid_call2_pane

0x2c49,	// (0x000afe3b) msg_header_pane_g1

0x2dd5,	// (0x000affc7) postcard_address2_pane_ParamLimits

0x2dd5,	// (0x000affc7) postcard_address2_pane

0x2deb,	// (0x000affdd) postcard_message2_pane_ParamLimits

0x2deb,	// (0x000affdd) postcard_message2_pane

0x395a,	// (0x000b0b4c) message2_row_pane_ParamLimits

0x395a,	// (0x000b0b4c) message2_row_pane

0x3977,	// (0x000b0b69) address2_row_pane_ParamLimits

0x3977,	// (0x000b0b69) address2_row_pane

0xc886,	// (0x000b9a78) postcard_message2_row_pane_g1

0xc88e,	// (0x000b9a80) postcard_message2_row_pane_t1

0xc886,	// (0x000b9a78) address2_row_pane_g1

0xc88e,	// (0x000b9a80) address2_row_pane_t1

0x0ba4,	// (0x000add96) aid_size_cell_vorec

0x9989,	// (0x000b6b7b) main_rss_pane

0x398a,	// (0x000b0b7c) rss_list_single_pane_ParamLimits

0x398a,	// (0x000b0b7c) rss_list_single_pane

0xc89c,	// (0x000b9a8e) rss_list_single_pane_t1

0xc8aa,	// (0x000b9a9c) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x000bc7f3) rss_list_single_pane_t

0x9989,	// (0x000b6b7b) main_camera2_pane

0x9989,	// (0x000b6b7b) main_video2_pane

0x3bf0,	// (0x000b0de2) cams_zoom_pane_cp2_ParamLimits

0x3bf0,	// (0x000b0de2) cams_zoom_pane_cp2

0x3c07,	// (0x000b0df9) image2_vga_pane_ParamLimits

0x3c07,	// (0x000b0df9) image2_vga_pane

0x3c4f,	// (0x000b0e41) main_camera2_pane_g1_ParamLimits

0x3c4f,	// (0x000b0e41) main_camera2_pane_g1

0x3c6f,	// (0x000b0e61) main_camera2_pane_g2_ParamLimits

0x3c6f,	// (0x000b0e61) main_camera2_pane_g2

0x3c86,	// (0x000b0e78) main_camera2_pane_g3_ParamLimits

0x3c86,	// (0x000b0e78) main_camera2_pane_g3

0x3c9d,	// (0x000b0e8f) main_camera2_pane_g4_ParamLimits

0x3c9d,	// (0x000b0e8f) main_camera2_pane_g4

0x3cb4,	// (0x000b0ea6) main_camera2_pane_g5_ParamLimits

0x3cb4,	// (0x000b0ea6) main_camera2_pane_g5

0x3ccb,	// (0x000b0ebd) main_camera2_pane_g6_ParamLimits

0x3ccb,	// (0x000b0ebd) main_camera2_pane_g6

0x3ce2,	// (0x000b0ed4) main_camera2_pane_g7_ParamLimits

0x3ce2,	// (0x000b0ed4) main_camera2_pane_g7

0x3cf9,	// (0x000b0eeb) main_camera2_pane_g8_ParamLimits

0x3cf9,	// (0x000b0eeb) main_camera2_pane_g8

0x0008,

0xf622,	// (0x000bc814) main_camera2_pane_g_ParamLimits

0xf622,	// (0x000bc814) main_camera2_pane_g

0x3d27,	// (0x000b0f19) main_camera2_pane_t1_ParamLimits

0x3d27,	// (0x000b0f19) main_camera2_pane_t1

0x3d5c,	// (0x000b0f4e) main_camera2_pane_t2_ParamLimits

0x3d5c,	// (0x000b0f4e) main_camera2_pane_t2

0x3d79,	// (0x000b0f6b) main_camera2_pane_t3_ParamLimits

0x3d79,	// (0x000b0f6b) main_camera2_pane_t3

0x3dd7,	// (0x000b0fc9) main_camera2_pane_t4_ParamLimits

0x3dd7,	// (0x000b0fc9) main_camera2_pane_t4

0x0006,

0xf635,	// (0x000bc827) main_camera2_pane_t_ParamLimits

0xf635,	// (0x000bc827) main_camera2_pane_t

0x3e60,	// (0x000b1052) cams_zoom_pane_cp4_ParamLimits

0x3e60,	// (0x000b1052) cams_zoom_pane_cp4

0x3e76,	// (0x000b1068) image2_cif_pane_ParamLimits

0x3e76,	// (0x000b1068) image2_cif_pane

0x3ea1,	// (0x000b1093) image2_subqcif_pane_ParamLimits

0x3ea1,	// (0x000b1093) image2_subqcif_pane

0x3ebc,	// (0x000b10ae) main_video2_pane_g1_ParamLimits

0x3ebc,	// (0x000b10ae) main_video2_pane_g1

0x3ed6,	// (0x000b10c8) main_video2_pane_g2_ParamLimits

0x3ed6,	// (0x000b10c8) main_video2_pane_g2

0x3eec,	// (0x000b10de) main_video2_pane_g3_ParamLimits

0x3eec,	// (0x000b10de) main_video2_pane_g3

0x3f02,	// (0x000b10f4) main_video2_pane_g4_ParamLimits

0x3f02,	// (0x000b10f4) main_video2_pane_g4

0x3f18,	// (0x000b110a) main_video2_pane_g5_ParamLimits

0x3f18,	// (0x000b110a) main_video2_pane_g5

0x3f2e,	// (0x000b1120) main_video2_pane_g6_ParamLimits

0x3f2e,	// (0x000b1120) main_video2_pane_g6

0x0005,

0xf644,	// (0x000bc836) main_video2_pane_g_ParamLimits

0xf644,	// (0x000bc836) main_video2_pane_g

0x3f48,	// (0x000b113a) main_video2_pane_t1_ParamLimits

0x3f48,	// (0x000b113a) main_video2_pane_t1

0x3f6c,	// (0x000b115e) main_video2_pane_t2_ParamLimits

0x3f6c,	// (0x000b115e) main_video2_pane_t2

0x3fbc,	// (0x000b11ae) main_video2_pane_t3_ParamLimits

0x3fbc,	// (0x000b11ae) main_video2_pane_t3

0x0002,

0xf651,	// (0x000bc843) main_video2_pane_t_ParamLimits

0xf651,	// (0x000bc843) main_video2_pane_t

0x344c,	// (0x000b063e) call_muted_g2

0x0001,

0xf5f3,	// (0x000bc7e5) call_muted_g

0x9989,	// (0x000b6b7b) main_mup2_pane

0x4004,	// (0x000b11f6) main_mup2_pane_g1_ParamLimits

0x4004,	// (0x000b11f6) main_mup2_pane_g1

0x4010,	// (0x000b1202) main_mup2_pane_g2_ParamLimits

0x4010,	// (0x000b1202) main_mup2_pane_g2

0x9f1c,	// (0x000b710e) main_mup_pane_g13_cp1

0x9f24,	// (0x000b7116) mup_volume_pane_cp1

0x402e,	// (0x000b1220) main_mup2_pane_g4_ParamLimits

0x402e,	// (0x000b1220) main_mup2_pane_g4

0x4040,	// (0x000b1232) main_mup2_pane_g5_ParamLimits

0x4040,	// (0x000b1232) main_mup2_pane_g5

0x4052,	// (0x000b1244) main_mup2_pane_g6_ParamLimits

0x4052,	// (0x000b1244) main_mup2_pane_g6

0x4064,	// (0x000b1256) main_mup2_pane_g7_ParamLimits

0x4064,	// (0x000b1256) main_mup2_pane_g7

0x0006,

0xf658,	// (0x000bc84a) main_mup2_pane_g_ParamLimits

0xf658,	// (0x000bc84a) main_mup2_pane_g

0x407c,	// (0x000b126e) main_mup2_pane_t1_ParamLimits

0x407c,	// (0x000b126e) main_mup2_pane_t1

0x4092,	// (0x000b1284) main_mup2_pane_t2_ParamLimits

0x4092,	// (0x000b1284) main_mup2_pane_t2

0x40a8,	// (0x000b129a) main_mup2_pane_t3_ParamLimits

0x40a8,	// (0x000b129a) main_mup2_pane_t3

0x40be,	// (0x000b12b0) main_mup2_pane_t4_ParamLimits

0x40be,	// (0x000b12b0) main_mup2_pane_t4

0x40d6,	// (0x000b12c8) main_mup2_pane_t5_ParamLimits

0x40d6,	// (0x000b12c8) main_mup2_pane_t5

0x40ee,	// (0x000b12e0) main_mup2_pane_t6_ParamLimits

0x40ee,	// (0x000b12e0) main_mup2_pane_t6

0x0005,

0xf667,	// (0x000bc859) main_mup2_pane_t_ParamLimits

0xf667,	// (0x000bc859) main_mup2_pane_t

0x411e,	// (0x000b1310) mup2_visualizer_pane_ParamLimits

0x411e,	// (0x000b1310) mup2_visualizer_pane

0x414c,	// (0x000b133e) mup_progress_pane_cp_ParamLimits

0x414c,	// (0x000b133e) mup_progress_pane_cp

0x9f07,	// (0x000b70f9) mup_volume_pane_cp_ParamLimits

0x9f07,	// (0x000b70f9) mup_volume_pane_cp

0x4162,	// (0x000b1354) mup2_visualizer_pane_g1_ParamLimits

0x4162,	// (0x000b1354) mup2_visualizer_pane_g1

0xc90b,	// (0x000b9afd) mup2_visualizer_pane_g2_ParamLimits

0xc90b,	// (0x000b9afd) mup2_visualizer_pane_g2

0x4179,	// (0x000b136b) mup2_visualizer_pane_g3_ParamLimits

0x4179,	// (0x000b136b) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x000bc866) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x000bc866) mup2_visualizer_pane_g

0xb659,	// (0x000b884b) aid_size_cell_fmradio

0x35fc,	// (0x000b07ee) aid_height_parent_landcape

0xabc1,	// (0x000b7db3) wml_content_pane_cp

0xabc9,	// (0x000b7dbb) wml_tabs_pane

0xabd2,	// (0x000b7dc4) popup_wml_miniature_window

0xabda,	// (0x000b7dcc) scroll_pane_cp021

0xabee,	// (0x000b7de0) wml_content_pane_comp8

0x9989,	// (0x000b6b7b) bg_popup_sub_pane_cp05

0xc929,	// (0x000b9b1b) popup_wml_miniature_window_g1

0xc931,	// (0x000b9b23) wml_miniature_view_pane

0x4185,	// (0x000b1377) aid_size_wml_view

0x418d,	// (0x000b137f) wml_miniature_view_pane_g1

0x4196,	// (0x000b1388) wml_miniature_view_pane_g2

0x419f,	// (0x000b1391) wml_miniature_view_pane_g3

0x41a7,	// (0x000b1399) wml_miniature_view_pane_g4

0x41af,	// (0x000b13a1) wml_miniature_view_pane_g5

0x41b7,	// (0x000b13a9) wml_miniature_view_pane_g6

0x41bf,	// (0x000b13b1) wml_miniature_view_pane_g7

0x41c7,	// (0x000b13b9) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x000bc86d) wml_miniature_view_pane_g

0xc939,	// (0x000b9b2b) background_graphic_ParamLimits

0xc939,	// (0x000b9b2b) background_graphic

0xc945,	// (0x000b9b37) wml_tabs_2_pane

0xc94e,	// (0x000b9b40) wml_tabs_3_pane_ParamLimits

0xc94e,	// (0x000b9b40) wml_tabs_3_pane

0xc960,	// (0x000b9b52) wml_tabs_4_pane_ParamLimits

0xc960,	// (0x000b9b52) wml_tabs_4_pane

0xc976,	// (0x000b9b68) wml_tabs_5_pane_ParamLimits

0xc976,	// (0x000b9b68) wml_tabs_5_pane

0xc990,	// (0x000b9b82) wml_tabs_pane_g2_ParamLimits

0xc990,	// (0x000b9b82) wml_tabs_pane_g2

0xc9a4,	// (0x000b9b96) wml_tabs_pane_g3_ParamLimits

0xc9a4,	// (0x000b9b96) wml_tabs_pane_g3

0x41cf,	// (0x000b13c1) wml_tabs_2_active_pane_ParamLimits

0x41cf,	// (0x000b13c1) wml_tabs_2_active_pane

0x41e3,	// (0x000b13d5) wml_tabs_2_passive_pane_ParamLimits

0x41e3,	// (0x000b13d5) wml_tabs_2_passive_pane

0x41f7,	// (0x000b13e9) wml_tabs_3_active_pane_cp_ParamLimits

0x41f7,	// (0x000b13e9) wml_tabs_3_active_pane_cp

0x420c,	// (0x000b13fe) wml_tabs_3_passive_pane_ParamLimits

0x420c,	// (0x000b13fe) wml_tabs_3_passive_pane

0x421f,	// (0x000b1411) wml_tabs_3_passive_pane_cp_ParamLimits

0x421f,	// (0x000b1411) wml_tabs_3_passive_pane_cp

0x4236,	// (0x000b1428) tabs_4_active_pane

0x423e,	// (0x000b1430) tabs_4_passive_pane

0x4248,	// (0x000b143a) tabs_4_passive_pane_cp

0x4250,	// (0x000b1442) tabs_4_passive_pane_cp2

0x3310,	// (0x000b0502) aid_height_text

0x2964,	// (0x000afb56) mup_volume_cont_pane_ParamLimits

0x2964,	// (0x000afb56) mup_volume_cont_pane

0xffa2,	// (0x000ad194) aid_size_cell_pinb

0xffac,	// (0x000ad19e) aid_size_list_pinb

0x4138,	// (0x000b132a) mup2_volume_cont_pane_ParamLimits

0x4138,	// (0x000b132a) mup2_volume_cont_pane

0x9ef3,	// (0x000b70e5) mup2_volume_cont_pane_g1_ParamLimits

0x9ef3,	// (0x000b70e5) mup2_volume_cont_pane_g1

0xfc4a,	// (0x000ace3c) aid_size_cell_touch_ParamLimits

0xfc4a,	// (0x000ace3c) aid_size_cell_touch

0xfe92,	// (0x000ad084) touch_pane_ParamLimits

0xfe92,	// (0x000ad084) touch_pane

0x9517,	// (0x000b6709) main_rss2_pane

0xc9c1,	// (0x000b9bb3) listscroll_rss2_pane

0xc9ca,	// (0x000b9bbc) rss2_navigation_pane

0xc9d2,	// (0x000b9bc4) list_rss2_pane

0xb229,	// (0x000b841b) scroll_pane_cp22

0xc9da,	// (0x000b9bcc) rss2_navigation_pane_g1

0xc9e3,	// (0x000b9bd5) rss2_navigation_pane_g2

0xc9eb,	// (0x000b9bdd) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x000bc87e) rss2_navigation_pane_g

0xc9f3,	// (0x000b9be5) rss2_navigation_pane_t1

0x425a,	// (0x000b144c) rss2_list_single_pane_ParamLimits

0x425a,	// (0x000b144c) rss2_list_single_pane

0xca01,	// (0x000b9bf3) rss2_list_single_pane_t2

0xca0f,	// (0x000b9c01) rss2_list_single_pane_t3_ParamLimits

0xca0f,	// (0x000b9c01) rss2_list_single_pane_t3

0xca2c,	// (0x000b9c1e) rss2_list_single_pane_t4

0x2158,	// (0x000af34a) smil_status_pane_g1

0x9568,	// (0x000b675a) main_image2_pane_ParamLimits

0x9568,	// (0x000b675a) main_image2_pane

0x3d10,	// (0x000b0f02) main_camera2_pane_g9_ParamLimits

0x3d10,	// (0x000b0f02) main_camera2_pane_g9

0x3e2c,	// (0x000b101e) main_camera2_pane_t5_ParamLimits

0x3e2c,	// (0x000b101e) main_camera2_pane_t5

0x9ec8,	// (0x000b70ba) main_camera2_pane_t6_ParamLimits

0x9ec8,	// (0x000b70ba) main_camera2_pane_t6

0x4270,	// (0x000b1462) main_image2_pane_g1_ParamLimits

0x4270,	// (0x000b1462) main_image2_pane_g1

0x302a,	// (0x000b021c) smil2_video_pane_ParamLimits

0x302a,	// (0x000b021c) smil2_video_pane

0xfc8a,	// (0x000ace7c) aid_zoom_text_primary_cp

0x955e,	// (0x000b6750) popup_preview_fixed_window

0xab2a,	// (0x000b7d1c) im_reading_pane_g1

0x3be2,	// (0x000b0dd4) cams2_bc_adjust_pane_cp_ParamLimits

0x3be2,	// (0x000b0dd4) cams2_bc_adjust_pane_cp

0x3e52,	// (0x000b1044) cams2_bc_adjust_pane_ParamLimits

0x3e52,	// (0x000b1044) cams2_bc_adjust_pane

0xcf77,	// (0x000ba169) cams2_bc_adjust_pane_g1

0x9f2c,	// (0x000b711e) cams2_slider_pane

0x9f35,	// (0x000b7127) cams2_slider_pane_g1

0x9f3e,	// (0x000b7130) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x000bc885) cams2_slider_pane_g

0x009c,	// (0x000ad28e) calc_display_pane_ParamLimits

0x00c4,	// (0x000ad2b6) calc_paper_pane_ParamLimits

0x00e7,	// (0x000ad2d9) grid_calc_pane_ParamLimits

0x9de3,	// (0x000b6fd5) popup_clock_digital_window_t1_ParamLimits

0xb5f6,	// (0x000b87e8) main_image_pane_t1

0x007e,	// (0x000ad270) aid_size_cell_calc_ParamLimits

0x007e,	// (0x000ad270) aid_size_cell_calc

0x3642,	// (0x000b0834) popup_blid_sat_info2_window_ParamLimits

0x3642,	// (0x000b0834) popup_blid_sat_info2_window

0xca42,	// (0x000b9c34) aid_size_cell_blid

0xca4a,	// (0x000b9c3c) bg_popup_window_pane_cp07

0xca6d,	// (0x000b9c5f) grid_popup_blid_pane

0xca77,	// (0x000b9c69) heading_pane_cp05_ParamLimits

0xca77,	// (0x000b9c69) heading_pane_cp05

0xcb41,	// (0x000b9d33) cell_popup_blid_pane_ParamLimits

0xcb41,	// (0x000b9d33) cell_popup_blid_pane

0xcb6b,	// (0x000b9d5d) cell_popup_blid_pane_g1

0xcb73,	// (0x000b9d65) cell_popup_blid_pane_t1

0x4108,	// (0x000b12fa) mup2_indicator_pane_ParamLimits

0x4108,	// (0x000b12fa) mup2_indicator_pane

0xb363,	// (0x000b8555) mup2_visualizer_osc_pane

0xc917,	// (0x000b9b09) mup2_visualizer_spec_pane_ParamLimits

0xc917,	// (0x000b9b09) mup2_visualizer_spec_pane

0x4286,	// (0x000b1478) mup2_spec_half_pane

0x428f,	// (0x000b1481) mup2_spec_half_pane_cp

0x4297,	// (0x000b1489) mup2_spec_bar_pane_ParamLimits

0x4297,	// (0x000b1489) mup2_spec_bar_pane

0xc8b8,	// (0x000b9aaa) mup2_spec_bar_pane_g1

0xc8c2,	// (0x000b9ab4) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000bc7f8) mup2_spec_bar_pane_g

0x42b7,	// (0x000b14a9) mup2_osc_middle_pane

0xc8d4,	// (0x000b9ac6) mup2_visualizer_osc_pane_g1

0x9596,	// (0x000b6788) popup_number_entry_window_t1_ParamLimits

0x95a9,	// (0x000b679b) popup_number_entry_window_t2_ParamLimits

0x95bb,	// (0x000b67ad) popup_number_entry_window_t3_ParamLimits

0xfee4,	// (0x000ad0d6) popup_number_entry_window_t5_ParamLimits

0xfee4,	// (0x000ad0d6) popup_number_entry_window_t5

0xf0c6,	// (0x000bc2b8) popup_number_entry_window_t_ParamLimits

0x95cd,	// (0x000b67bf) text_title_cp2_ParamLimits

0x9e72,	// (0x000b7064) aid_hotspot_pointer_text2_pane

0x9e98,	// (0x000b708a) main_viewer_pane_g9_ParamLimits

0x9e98,	// (0x000b708a) main_viewer_pane_g9

0xad63,	// (0x000b7f55) cale_month_pane_t1_ParamLimits

0xad89,	// (0x000b7f7b) bg_cale_pane_ParamLimits

0xada1,	// (0x000b7f93) list_cale_pane_ParamLimits

0xadb2,	// (0x000b7fa4) listscroll_cale_day_pane_t1

0xadc4,	// (0x000b7fb6) scroll_pane_cp09_ParamLimits

0x299a,	// (0x000afb8c) main_mup_eq_pane_t1_ParamLimits

0x299a,	// (0x000afb8c) main_mup_eq_pane_t1

0x29b6,	// (0x000afba8) main_mup_eq_pane_t2_ParamLimits

0x29b6,	// (0x000afba8) main_mup_eq_pane_t2

0x29d2,	// (0x000afbc4) main_mup_eq_pane_t3_ParamLimits

0x29d2,	// (0x000afbc4) main_mup_eq_pane_t3

0x29f0,	// (0x000afbe2) main_mup_eq_pane_t4_ParamLimits

0x29f0,	// (0x000afbe2) main_mup_eq_pane_t4

0x2a0e,	// (0x000afc00) main_mup_eq_pane_t5_ParamLimits

0x2a0e,	// (0x000afc00) main_mup_eq_pane_t5

0x2a2c,	// (0x000afc1e) main_mup_eq_pane_t6_ParamLimits

0x2a2c,	// (0x000afc1e) main_mup_eq_pane_t6

0x2a42,	// (0x000afc34) main_mup_eq_pane_t7_ParamLimits

0x2a42,	// (0x000afc34) main_mup_eq_pane_t7

0x2a58,	// (0x000afc4a) main_mup_eq_pane_t8_ParamLimits

0x2a58,	// (0x000afc4a) main_mup_eq_pane_t8

0x2a6e,	// (0x000afc60) main_mup_eq_pane_t9_ParamLimits

0x2a6e,	// (0x000afc60) main_mup_eq_pane_t9

0x2a8a,	// (0x000afc7c) main_mup_eq_pane_t10_ParamLimits

0x2a8a,	// (0x000afc7c) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x000bc647) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x000bc647) main_mup_eq_pane_t

0x2b5f,	// (0x000afd51) mup_equalizer_pane_cp5_ParamLimits

0x2b77,	// (0x000afd69) mup_equalizer_pane_cp6_ParamLimits

0x2b8f,	// (0x000afd81) mup_equalizer_pane_cp7_ParamLimits

0x9517,	// (0x000b6709) main_gallery_pane

0xc8dd,	// (0x000b9acf) smil2_volume_pane

0xc8e5,	// (0x000b9ad7) smil_status_volume_pane_g1_ParamLimits

0xc8f8,	// (0x000b9aea) smil_status_volume_pane_g2_ParamLimits

0x9ea4,	// (0x000b7096) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x000bc7fd) smil_status_volume_pane_g_ParamLimits

0xca4a,	// (0x000b9c3c) bg_popup_window_pane_cp07_ParamLimits

0xca58,	// (0x000b9c4a) blid_firmament_pane

0x42c0,	// (0x000b14b2) aid_size_cell_gallery_ParamLimits

0x42c0,	// (0x000b14b2) aid_size_cell_gallery

0x42d6,	// (0x000b14c8) grid_gallery_pane_ParamLimits

0x42d6,	// (0x000b14c8) grid_gallery_pane

0x42f1,	// (0x000b14e3) cell_gallery_pane_ParamLimits

0x42f1,	// (0x000b14e3) cell_gallery_pane

0xcb81,	// (0x000b9d73) bg_cell_gallery_focus_pane_ParamLimits

0xcb81,	// (0x000b9d73) bg_cell_gallery_focus_pane

0xcb93,	// (0x000b9d85) cell_gallery_pane_g1_ParamLimits

0xcb93,	// (0x000b9d85) cell_gallery_pane_g1

0x433c,	// (0x000b152e) cell_gallery_pane_g2_ParamLimits

0x433c,	// (0x000b152e) cell_gallery_pane_g2

0x4349,	// (0x000b153b) cell_gallery_pane_g3_ParamLimits

0x4349,	// (0x000b153b) cell_gallery_pane_g3

0xcb9f,	// (0x000b9d91) cell_gallery_pane_g4_ParamLimits

0xcb9f,	// (0x000b9d91) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x000bc8ab) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x000bc8ab) cell_gallery_pane_g

0xcbab,	// (0x000b9d9d) bg_cell_gallery_focus_pane_g1

0xcbb3,	// (0x000b9da5) bg_cell_gallery_focus_pane_g2

0xcbbb,	// (0x000b9dad) bg_cell_gallery_focus_pane_g3

0xcbc3,	// (0x000b9db5) bg_cell_gallery_focus_pane_g4

0xcbcb,	// (0x000b9dbd) bg_cell_gallery_focus_pane_g5

0xcbd3,	// (0x000b9dc5) bg_cell_gallery_focus_pane_g6

0xcbdb,	// (0x000b9dcd) bg_cell_gallery_focus_pane_g7

0xcbe3,	// (0x000b9dd5) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x000bc8b4) bg_cell_gallery_focus_pane_g

0xcbeb,	// (0x000b9ddd) aid_firma_cardinal

0xcbff,	// (0x000b9df1) blid_firmament_pane_t1

0xcc16,	// (0x000b9e08) blid_firmament_pane_t2

0xcc2d,	// (0x000b9e1f) blid_firmament_pane_t3

0xcc44,	// (0x000b9e36) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x000bc8c5) blid_firmament_pane_t

0xcc5b,	// (0x000b9e4d) blid_sat_info_pane

0xcc6b,	// (0x000b9e5d) blid_sat_info_pane_g1

0xcc6b,	// (0x000b9e5d) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x000bc8ce) blid_sat_info_pane_g

0xcc75,	// (0x000b9e67) blid_sat_info_pane_t1

0xcc83,	// (0x000b9e75) smil2_volume_content_pane

0xcc8c,	// (0x000b9e7e) smil2_volume_pane_g1

0xcc94,	// (0x000b9e86) smil2_volume_content_pane_g1

0xcc9d,	// (0x000b9e8f) smil2_volume_content_pane_g2

0xcca6,	// (0x000b9e98) smil2_volume_content_pane_g3

0xccaf,	// (0x000b9ea1) smil2_volume_content_pane_g4

0xccb8,	// (0x000b9eaa) smil2_volume_content_pane_g5

0xccc1,	// (0x000b9eb3) smil2_volume_content_pane_g6

0xccca,	// (0x000b9ebc) smil2_volume_content_pane_g7

0xccd3,	// (0x000b9ec5) smil2_volume_content_pane_g8

0xccdc,	// (0x000b9ece) smil2_volume_content_pane_g9

0xcce5,	// (0x000b9ed7) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x000bc8d3) smil2_volume_content_pane_g

0x073f,	// (0x000ad931) cale_week_day_heading_pane_t1_ParamLimits

0x0789,	// (0x000ad97b) cale_week_day_heading_pane_t2_ParamLimits

0x07d8,	// (0x000ad9ca) cale_week_day_heading_pane_t3_ParamLimits

0x0827,	// (0x000ada19) cale_week_day_heading_pane_t4_ParamLimits

0x0876,	// (0x000ada68) cale_week_day_heading_pane_t5_ParamLimits

0x08c9,	// (0x000adabb) cale_week_day_heading_pane_t6_ParamLimits

0x0920,	// (0x000adb12) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x000bc3bf) cale_week_day_heading_pane_t_ParamLimits

0xa9da,	// (0x000b7bcc) bg_cale_side_pane_ParamLimits

0x096a,	// (0x000adb5c) cale_week_time_pane_t1_ParamLimits

0x09a4,	// (0x000adb96) cale_week_time_pane_t2_ParamLimits

0x09de,	// (0x000adbd0) cale_week_time_pane_t3_ParamLimits

0x0a18,	// (0x000adc0a) cale_week_time_pane_t4_ParamLimits

0x0a52,	// (0x000adc44) cale_week_time_pane_t5_ParamLimits

0x0a8c,	// (0x000adc7e) cale_week_time_pane_t6_ParamLimits

0x0ac6,	// (0x000adcb8) cale_week_time_pane_t7_ParamLimits

0x0b00,	// (0x000adcf2) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x000bc3ce) cale_week_time_pane_t_ParamLimits

0x0b40,	// (0x000add32) cell_cale_week_pane_g2_ParamLimits

0xa9da,	// (0x000b7bcc) bg_cale_side_pane_cp01_ParamLimits

0x1f3d,	// (0x000af12f) cale_month_week_pane_t1_ParamLimits

0x1f56,	// (0x000af148) cale_month_week_pane_t2_ParamLimits

0x1f6f,	// (0x000af161) cale_month_week_pane_t3_ParamLimits

0x1f88,	// (0x000af17a) cale_month_week_pane_t4_ParamLimits

0x1fa1,	// (0x000af193) cale_month_week_pane_t5_ParamLimits

0x1fba,	// (0x000af1ac) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000bc4a7) cale_month_week_pane_t_ParamLimits

0x9d63,	// (0x000b6f55) cell_cale_month_pane_g1_ParamLimits

0x9517,	// (0x000b6709) main_cale_event_viewer_pane

0x9517,	// (0x000b6709) listscroll_cale_event_viewer_pane

0xccee,	// (0x000b9ee0) list_cale_ev_pane

0xccf6,	// (0x000b9ee8) scroll_pane_cp023

0x4356,	// (0x000b1548) field_cale_ev_pane_ParamLimits

0x4356,	// (0x000b1548) field_cale_ev_pane

0xcd02,	// (0x000b9ef4) field_cale_ev_content_pane_ParamLimits

0xcd02,	// (0x000b9ef4) field_cale_ev_content_pane

0xcd0e,	// (0x000b9f00) field_cale_ev_pane_g1_ParamLimits

0xcd0e,	// (0x000b9f00) field_cale_ev_pane_g1

0xcd1a,	// (0x000b9f0c) field_cale_ev_pane_g2_ParamLimits

0xcd1a,	// (0x000b9f0c) field_cale_ev_pane_g2

0xcd32,	// (0x000b9f24) field_cale_ev_pane_g3_ParamLimits

0xcd32,	// (0x000b9f24) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x000bc8e8) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x000bc8e8) field_cale_ev_pane_g

0xcd4a,	// (0x000b9f3c) field_cale_ev_pane_t1_ParamLimits

0xcd4a,	// (0x000b9f3c) field_cale_ev_pane_t1

0x437a,	// (0x000b156c) field_cale_ev_content_pane_t1_ParamLimits

0x437a,	// (0x000b156c) field_cale_ev_content_pane_t1

0xb4dc,	// (0x000b86ce) bg_button_pane_cp01

0x03a9,	// (0x000ad59b) listscroll_cale_week_pane_ParamLimits

0x03bb,	// (0x000ad5ad) popup_toolbar_window_cp01

0xa9a6,	// (0x000b7b98) listscroll_cale_week_pane_t1_ParamLimits

0x03a9,	// (0x000ad59b) listscroll_cale_day_pane_ParamLimits

0x03bb,	// (0x000ad5ad) popup_toolbar_window_cp02

0xadb2,	// (0x000b7fa4) listscroll_cale_day_pane_t1_ParamLimits

0x03a9,	// (0x000ad59b) main_cale_month_pane_ParamLimits

0x38c2,	// (0x000b0ab4) popup_toolbar_window_cp03_ParamLimits

0x38c2,	// (0x000b0ab4) popup_toolbar_window_cp03

0x2ee8,	// (0x000b00da) main_image_pane_g2_ParamLimits

0x2ee8,	// (0x000b00da) main_image_pane_g2

0x2ef9,	// (0x000b00eb) main_image_pane_g3_ParamLimits

0x2ef9,	// (0x000b00eb) main_image_pane_g3

0x0002,

0xf4e7,	// (0x000bc6d9) main_image_pane_g_ParamLimits

0xf4e7,	// (0x000bc6d9) main_image_pane_g

0xb5f6,	// (0x000b87e8) main_image_pane_t1_ParamLimits

0x2f0a,	// (0x000b00fc) main_image_pane_t2_ParamLimits

0x2f0a,	// (0x000b00fc) main_image_pane_t2

0x2f1c,	// (0x000b010e) main_image_pane_t3_ParamLimits

0x2f1c,	// (0x000b010e) main_image_pane_t3

0x2f44,	// (0x000b0136) main_image_pane_t4_ParamLimits

0x2f44,	// (0x000b0136) main_image_pane_t4

0x0003,

0xf4ee,	// (0x000bc6e0) main_image_pane_t_ParamLimits

0xf4ee,	// (0x000bc6e0) main_image_pane_t

0x2f64,	// (0x000b0156) popup_image_details_window_cp01

0x2f6e,	// (0x000b0160) popup_toobar_trans_pane_cp01_ParamLimits

0x2f6e,	// (0x000b0160) popup_toobar_trans_pane_cp01

0x3735,	// (0x000b0927) popup_image_details_window_ParamLimits

0x3735,	// (0x000b0927) popup_image_details_window

0xc83c,	// (0x000b9a2e) popup_image_focus_window

0x3b9c,	// (0x000b0d8e) camera2_autofocus_pane_ParamLimits

0x3b9c,	// (0x000b0d8e) camera2_autofocus_pane

0x9517,	// (0x000b6709) bg_popup_sub_pane_cp06

0xcd61,	// (0x000b9f53) popup_image_focus_window_g1

0xcd69,	// (0x000b9f5b) popup_image_focus_window_g2

0xcd71,	// (0x000b9f63) popup_image_focus_window_g3

0xcd79,	// (0x000b9f6b) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x000bc8ef) popup_image_focus_window_g

0xcd81,	// (0x000b9f73) popup_image_focus_window_t1

0xcd8f,	// (0x000b9f81) popup_image_focus_window_t2

0xcd9f,	// (0x000b9f91) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x000bc8f8) popup_image_focus_window_t

0xcdad,	// (0x000b9f9f) camera2_autofocus_pane_g1

0x9568,	// (0x000b675a) bg_tb_trans_pane_cp01

0xcdbb,	// (0x000b9fad) popup_image_details_window_g1

0xcdce,	// (0x000b9fc0) popup_image_details_window_g2

0x0002,

0xf718,	// (0x000bc90a) popup_image_details_window_g

0xcdf7,	// (0x000b9fe9) popup_image_details_window_t1

0xce09,	// (0x000b9ffb) popup_image_details_window_t2

0xce22,	// (0x000ba014) popup_image_details_window_t3

0xce36,	// (0x000ba028) popup_image_details_window_t4

0xce51,	// (0x000ba043) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x000bc911) popup_image_details_window_t

0x9c9d,	// (0x000b6e8f) bg_calc_paper_pane_ParamLimits

0x9cb1,	// (0x000b6ea3) grid_highlight_pane_cp013

0x9cbb,	// (0x000b6ead) list_calc_pane_ParamLimits

0x9ccd,	// (0x000b6ebf) scroll_pane_cp024

0xa861,	// (0x000b7a53) bg_calc_display_pane_ParamLimits

0x01e7,	// (0x000ad3d9) calc_display_pane_t1_ParamLimits

0x01f9,	// (0x000ad3eb) calc_display_pane_t2_ParamLimits

0x9cd5,	// (0x000b6ec7) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x000bc33f) calc_display_pane_t_ParamLimits

0x02c2,	// (0x000ad4b4) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x000bc35c) cell_calc_pane_g

0x02cb,	// (0x000ad4bd) cell_calc_pane_t1

0xa8c0,	// (0x000b7ab2) grid_highlight_pane_cp02_ParamLimits

0xa8d6,	// (0x000b7ac8) toolbar_button_pane_cp01_ParamLimits

0xa8d6,	// (0x000b7ac8) toolbar_button_pane_cp01

0xb63b,	// (0x000b882d) temp_image_control_pane_ParamLimits

0xb63b,	// (0x000b882d) temp_image_control_pane

0x9568,	// (0x000b675a) main_mp3_pane

0xce6b,	// (0x000ba05d) temp_image_control_pane_g1_ParamLimits

0xce6b,	// (0x000ba05d) temp_image_control_pane_g1

0xce79,	// (0x000ba06b) temp_image_control_pane_g2_ParamLimits

0xce79,	// (0x000ba06b) temp_image_control_pane_g2

0xce8b,	// (0x000ba07d) temp_image_control_pane_g3_ParamLimits

0xce8b,	// (0x000ba07d) temp_image_control_pane_g3

0x43cb,	// (0x000b15bd) temp_image_control_pane_g4_ParamLimits

0x43cb,	// (0x000b15bd) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x000bc91c) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x000bc91c) temp_image_control_pane_g

0xce6b,	// (0x000ba05d) main_mp3_pane_g1

0x43de,	// (0x000b15d0) main_mp3_pane_g2

0x0007,

0xf733,	// (0x000bc925) main_mp3_pane_g

0xcece,	// (0x000ba0c0) main_mp3_pane_t1

0xaa35,	// (0x000b7c27) main_camera_pane_g8_ParamLimits

0xaa35,	// (0x000b7c27) main_camera_pane_g8

0x0e7d,	// (0x000ae06f) main_video_pane_g7_ParamLimits

0x0e7d,	// (0x000ae06f) main_video_pane_g7

0x9ee1,	// (0x000b70d3) main_camera2_pane_t7_ParamLimits

0x9ee1,	// (0x000b70d3) main_camera2_pane_t7

0xab81,	// (0x000b7d73) scroll_pane_cp025_ParamLimits

0xab81,	// (0x000b7d73) scroll_pane_cp025

0xab95,	// (0x000b7d87) scroll_pane_cp026_ParamLimits

0xab95,	// (0x000b7d87) scroll_pane_cp026

0xaba4,	// (0x000b7d96) wml_content_pane_ParamLimits

0x9517,	// (0x000b6709) main_touch_calib_pane

0x44b0,	// (0x000b16a2) main_touch_calib_pane_g1

0x44c2,	// (0x000b16b4) main_touch_calib_pane_g2

0x44d4,	// (0x000b16c6) main_touch_calib_pane_g3

0x44e6,	// (0x000b16d8) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x000bc943) main_touch_calib_pane_g

0x44f8,	// (0x000b16ea) main_touch_calib_pane_t1

0x4512,	// (0x000b1704) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x000bc94c) main_touch_calib_pane_t

0xb2a4,	// (0x000b8496) mup_progress_pane_cp02

0xb2c3,	// (0x000b84b5) navi_pane_g1

0xb325,	// (0x000b8517) navi_pane_mp_t3

0x9568,	// (0x000b675a) main_mp3_pane_ParamLimits

0x3904,	// (0x000b0af6) navi_pane_ParamLimits

0xce6b,	// (0x000ba05d) main_mp3_pane_g1_ParamLimits

0x43de,	// (0x000b15d0) main_mp3_pane_g2_ParamLimits

0x43ea,	// (0x000b15dc) main_mp3_pane_g3_ParamLimits

0x43ea,	// (0x000b15dc) main_mp3_pane_g3

0x43f8,	// (0x000b15ea) main_mp3_pane_g4_ParamLimits

0x43f8,	// (0x000b15ea) main_mp3_pane_g4

0xce9b,	// (0x000ba08d) main_mp3_pane_g5_ParamLimits

0xce9b,	// (0x000ba08d) main_mp3_pane_g5

0xcea9,	// (0x000ba09b) main_mp3_pane_g6_ParamLimits

0xcea9,	// (0x000ba09b) main_mp3_pane_g6

0xceb6,	// (0x000ba0a8) main_mp3_pane_g7_ParamLimits

0xceb6,	// (0x000ba0a8) main_mp3_pane_g7

0xcec2,	// (0x000ba0b4) main_mp3_pane_g8_ParamLimits

0xcec2,	// (0x000ba0b4) main_mp3_pane_g8

0xf733,	// (0x000bc925) main_mp3_pane_g_ParamLimits

0x4404,	// (0x000b15f6) main_mp3_pane_t2

0x4412,	// (0x000b1604) main_mp3_pane_t3

0xcedc,	// (0x000ba0ce) main_mp3_pane_t4

0xceea,	// (0x000ba0dc) main_mp3_pane_t5

0x0005,

0xf744,	// (0x000bc936) main_mp3_pane_t

0xcef8,	// (0x000ba0ea) mup_progress_pane_cp01

0xf0be,	// (0x000bc2b0) aid_zoom_text_secondary2

0xccee,	// (0x000b9ee0) list_cale_ev2_pane

0xccf6,	// (0x000b9ee8) scroll_pane_cp023_ParamLimits

0x456c,	// (0x000b175e) field_cale_ev2_pane_ParamLimits

0x456c,	// (0x000b175e) field_cale_ev2_pane

0x4590,	// (0x000b1782) field_cale_ev2_pane_g1_ParamLimits

0x4590,	// (0x000b1782) field_cale_ev2_pane_g1

0x459c,	// (0x000b178e) field_cale_ev2_pane_g2_ParamLimits

0x459c,	// (0x000b178e) field_cale_ev2_pane_g2

0x45b4,	// (0x000b17a6) field_cale_ev2_pane_g3_ParamLimits

0x45b4,	// (0x000b17a6) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x000bc957) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x000bc957) field_cale_ev2_pane_g

0x45cc,	// (0x000b17be) field_cale_ev2_pane_t1_ParamLimits

0x45cc,	// (0x000b17be) field_cale_ev2_pane_t1

0x45e3,	// (0x000b17d5) field_cale_ev2_pane_t2_ParamLimits

0x45e3,	// (0x000b17d5) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x000bc960) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x000bc960) field_cale_ev2_pane_t

0x2d85,	// (0x000aff77) main_postcard_pane_g5_ParamLimits

0x2d85,	// (0x000aff77) main_postcard_pane_g5

0x2d9b,	// (0x000aff8d) main_postcard_pane_g6_ParamLimits

0x2d9b,	// (0x000aff8d) main_postcard_pane_g6

0x0c29,	// (0x000ade1b) camera2_autofocus_pane_cp_ParamLimits

0x0c29,	// (0x000ade1b) camera2_autofocus_pane_cp

0x9568,	// (0x000b675a) main_mup3_pane

0x4618,	// (0x000b180a) main_mup3_pane_g1_ParamLimits

0x4618,	// (0x000b180a) main_mup3_pane_g1

0x463a,	// (0x000b182c) main_mup3_pane_g2_ParamLimits

0x463a,	// (0x000b182c) main_mup3_pane_g2

0x46bd,	// (0x000b18af) main_mup3_pane_g3_ParamLimits

0x46bd,	// (0x000b18af) main_mup3_pane_g3

0x4705,	// (0x000b18f7) main_mup3_pane_g4_ParamLimits

0x4705,	// (0x000b18f7) main_mup3_pane_g4

0x474b,	// (0x000b193d) main_mup3_pane_g5_ParamLimits

0x474b,	// (0x000b193d) main_mup3_pane_g5

0x4793,	// (0x000b1985) main_mup3_pane_g6_ParamLimits

0x4793,	// (0x000b1985) main_mup3_pane_g6

0xcf00,	// (0x000ba0f2) main_mup3_pane_g7_ParamLimits

0xcf00,	// (0x000ba0f2) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x000bc970) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x000bc970) main_mup3_pane_g

0x4813,	// (0x000b1a05) main_mup3_pane_t1_ParamLimits

0x4813,	// (0x000b1a05) main_mup3_pane_t1

0x4881,	// (0x000b1a73) main_mup3_pane_t2_ParamLimits

0x4881,	// (0x000b1a73) main_mup3_pane_t2

0x4957,	// (0x000b1b49) main_mup3_pane_t4_ParamLimits

0x4957,	// (0x000b1b49) main_mup3_pane_t4

0x49b5,	// (0x000b1ba7) main_mup3_pane_t5_ParamLimits

0x49b5,	// (0x000b1ba7) main_mup3_pane_t5

0x4a6f,	// (0x000b1c61) main_mup3_pane_t6_ParamLimits

0x4a6f,	// (0x000b1c61) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x000bc981) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x000bc981) main_mup3_pane_t

0x4b27,	// (0x000b1d19) mup3_progress_pane_ParamLimits

0x4b27,	// (0x000b1d19) mup3_progress_pane

0x4bb9,	// (0x000b1dab) popup_mup3_control_window_ParamLimits

0x4bb9,	// (0x000b1dab) popup_mup3_control_window

0xcf0e,	// (0x000ba100) popup_mup3_text_window

0x4bef,	// (0x000b1de1) mup3_progress_pane_t1

0x4c0d,	// (0x000b1dff) mup3_progress_pane_t2

0xcf16,	// (0x000ba108) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x000bc98e) mup3_progress_pane_t

0xcf33,	// (0x000ba125) mup_progress_pane_cp03

0x9517,	// (0x000b6709) bg_tb_trans_pane_cp04

0x4c2b,	// (0x000b1e1d) mup3_volume_pane

0x4c33,	// (0x000b1e25) popup_mup3_control_window_g1

0x4c3c,	// (0x000b1e2e) mup3_volume_pane_g1

0x4c45,	// (0x000b1e37) mup3_volume_pane_g2

0x4c4e,	// (0x000b1e40) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x000bc995) mup3_volume_pane_g

0x9517,	// (0x000b6709) bg_tb_trans_pane_cp03

0xcf43,	// (0x000ba135) popup_mup3_text_window_g1

0xcf4b,	// (0x000ba13d) popup_mup3_text_window_t1

0xa8a9,	// (0x000b7a9b) list_calc_item_pane_g1_ParamLimits

0xc9b8,	// (0x000b9baa) mup_volume_pane_cp_g1

0x452c,	// (0x000b171e) main_touch_calib_pane_t3

0x4540,	// (0x000b1732) main_touch_calib_pane_t4

0x4556,	// (0x000b1748) main_touch_calib_pane_t5

0x9521,	// (0x000b6713) aid_cell_size_toolbar2

0x9529,	// (0x000b671b) aid_popup3_width_pane

0xfc7a,	// (0x000ace6c) aid_zoom_text_msg_primary

0x0bfe,	// (0x000addf0) vorec_t7

0xa86d,	// (0x000b7a5f) bg_calc_paper_pane_g1_ParamLimits

0xa879,	// (0x000b7a6b) bg_calc_paper_pane_g2_ParamLimits

0xa885,	// (0x000b7a77) bg_calc_paper_pane_g3_ParamLimits

0xa891,	// (0x000b7a83) bg_calc_paper_pane_g4_ParamLimits

0xa89d,	// (0x000b7a8f) bg_calc_paper_pane_g5_ParamLimits

0x0248,	// (0x000ad43a) bg_calc_paper_pane_g6_ParamLimits

0x025b,	// (0x000ad44d) bg_calc_paper_pane_g7_ParamLimits

0x026e,	// (0x000ad460) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x000bc346) bg_calc_paper_pane_g_ParamLimits

0x027f,	// (0x000ad471) calc_bg_paper_pane_g9_ParamLimits

0x0d8b,	// (0x000adf7d) image_qvga_pane_ParamLimits

0x0d8b,	// (0x000adf7d) image_qvga_pane

0x9be4,	// (0x000b6dd6) bg_popup_sub_pane_cp04_ParamLimits

0xb572,	// (0x000b8764) popup_mup_playback_window_g1_ParamLimits

0xb57e,	// (0x000b8770) popup_mup_playback_window_t1_ParamLimits

0xb593,	// (0x000b8785) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x000bc6d4) popup_mup_playback_window_t_ParamLimits

0x4020,	// (0x000b1212) main_mup2_pane_g3_ParamLimits

0x4020,	// (0x000b1212) main_mup2_pane_g3

0x1191,	// (0x000ae383) popup_toolbar_window_cp04

0xb98e,	// (0x000b8b80) popup_call2_audio_second_window_g3_ParamLimits

0xb98e,	// (0x000b8b80) popup_call2_audio_second_window_g3

0xbe2a,	// (0x000b901c) popup_call2_audio_first_window_g4_ParamLimits

0xbe2a,	// (0x000b901c) popup_call2_audio_first_window_g4

0xc4a9,	// (0x000b969b) popup_call2_audio_in_window_g4_ParamLimits

0xc4a9,	// (0x000b969b) popup_call2_audio_in_window_g4

0x2eca,	// (0x000b00bc) aid_area_sk_bg_cut_ParamLimits

0x2eca,	// (0x000b00bc) aid_area_sk_bg_cut

0xb5a8,	// (0x000b879a) aid_area_sk_bg_cut_2_ParamLimits

0xb5a8,	// (0x000b879a) aid_area_sk_bg_cut_2

0x432c,	// (0x000b151e) aid_placing_details_win

0x4334,	// (0x000b1526) aid_placing_details_win_2

0xcdad,	// (0x000b9f9f) camera2_autofocus_pane_g1_ParamLimits

0xfe2b,	// (0x000ad01d) popup_fixed_preview_cale_window_ParamLimits

0xfe2b,	// (0x000ad01d) popup_fixed_preview_cale_window

0xb374,	// (0x000b8566) navi_slider_pane_g3

0xb37d,	// (0x000b856f) navi_slider_pane_g4

0xb386,	// (0x000b8578) navi_slider_pane_g5

0xb374,	// (0x000b8566) navi_slider_pane_g6

0x9e09,	// (0x000b6ffb) navi_slider_pane_g7

0xb4a9,	// (0x000b869b) mup_scale_pane_g3

0xb4b2,	// (0x000b86a4) mup_scale_pane_g4

0xb4bb,	// (0x000b86ad) mup_scale_pane_g5

0x2ba7,	// (0x000afd99) mup_scale_pane_g6

0x2bb0,	// (0x000afda2) mup_scale_pane_g7

0xb374,	// (0x000b8566) cams2_slider_pane_g3

0xca3a,	// (0x000b9c2c) cams2_slider_pane_g4

0x9f47,	// (0x000b7139) cams2_slider_pane_g5

0xb374,	// (0x000b8566) cams2_slider_pane_g6

0x9f4f,	// (0x000b7141) cams2_slider_pane_g7

0xcc6b,	// (0x000b9e5d) camera2_autofocus_pane_cp_g1

0xc80e,	// (0x000b9a00) bg_popup_preview_window_pane_cp02_ParamLimits

0xc80e,	// (0x000b9a00) bg_popup_preview_window_pane_cp02

0xcf59,	// (0x000ba14b) list_fp_cale_pane_ParamLimits

0xcf59,	// (0x000ba14b) list_fp_cale_pane

0xcf65,	// (0x000ba157) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf65,	// (0x000ba157) popup_fixed_preview_cale_window_t1

0x4c57,	// (0x000b1e49) popup_fixed_preview_cale_window_t2_ParamLimits

0x4c57,	// (0x000b1e49) popup_fixed_preview_cale_window_t2

0x4c6c,	// (0x000b1e5e) popup_fixed_preview_cale_window_t3_ParamLimits

0x4c6c,	// (0x000b1e5e) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x000bc99c) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x000bc99c) popup_fixed_preview_cale_window_t

0x4c81,	// (0x000b1e73) list_single_fp_cale_pane_ParamLimits

0x4c81,	// (0x000b1e73) list_single_fp_cale_pane

0xcf8b,	// (0x000ba17d) list_single_fp_cale_pane_g1_ParamLimits

0xcf8b,	// (0x000ba17d) list_single_fp_cale_pane_g1

0xcf97,	// (0x000ba189) list_single_fp_cale_pane_g2_ParamLimits

0xcf97,	// (0x000ba189) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x000bc9a3) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x000bc9a3) list_single_fp_cale_pane_g

0xcfb0,	// (0x000ba1a2) list_single_fp_cale_pane_t1_ParamLimits

0xcfb0,	// (0x000ba1a2) list_single_fp_cale_pane_t1

0xcfc2,	// (0x000ba1b4) list_single_fp_cale_pane_t2_ParamLimits

0xcfc2,	// (0x000ba1b4) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x000bc9aa) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x000bc9aa) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9517,	// (0x000b6709) main_dialer_pane

0x4c96,	// (0x000b1e88) aid_cell_size_keypad

0x4ca0,	// (0x000b1e92) dialer_ne_pane

0x4caa,	// (0x000b1e9c) grid_dialer_command_1_pane

0x4cb2,	// (0x000b1ea4) grid_dialer_command_2_pane

0x4cba,	// (0x000b1eac) grid_dialer_keypad_pane

0x4ccc,	// (0x000b1ebe) bg_popup_call_pane_cp06_ParamLimits

0x4ccc,	// (0x000b1ebe) bg_popup_call_pane_cp06

0x4cd8,	// (0x000b1eca) dialer_ne_clear_pane_ParamLimits

0x4cd8,	// (0x000b1eca) dialer_ne_clear_pane

0xcff5,	// (0x000ba1e7) dialer_ne_pane_g1

0xcffd,	// (0x000ba1ef) dialer_ne_pane_t1_ParamLimits

0xcffd,	// (0x000ba1ef) dialer_ne_pane_t1

0x4ce4,	// (0x000b1ed6) dialer_ne_pane_t2_ParamLimits

0x4ce4,	// (0x000b1ed6) dialer_ne_pane_t2

0x4d0e,	// (0x000b1f00) dialer_ne_pane_t3_ParamLimits

0x4d0e,	// (0x000b1f00) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x000bc9af) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x000bc9af) dialer_ne_pane_t

0x4d3e,	// (0x000b1f30) dialer_ne_pane_t3_copy1_ParamLimits

0x4d3e,	// (0x000b1f30) dialer_ne_pane_t3_copy1

0x4d6d,	// (0x000b1f5f) cell_dialer_keypad_pane_ParamLimits

0x4d6d,	// (0x000b1f5f) cell_dialer_keypad_pane

0x4d84,	// (0x000b1f76) cell_dialer_command_1_pane_ParamLimits

0x4d84,	// (0x000b1f76) cell_dialer_command_1_pane

0x4d9a,	// (0x000b1f8c) cell_dialer_command_2_pane_ParamLimits

0x4d9a,	// (0x000b1f8c) cell_dialer_command_2_pane

0xd00f,	// (0x000ba201) bg_button_pane_cp02_ParamLimits

0xd00f,	// (0x000ba201) bg_button_pane_cp02

0x4da9,	// (0x000b1f9b) cell_dialer_keypad_pane_g1_ParamLimits

0x4da9,	// (0x000b1f9b) cell_dialer_keypad_pane_g1

0xd00f,	// (0x000ba201) bg_button_pane_cp03_ParamLimits

0xd00f,	// (0x000ba201) bg_button_pane_cp03

0x4dbe,	// (0x000b1fb0) cell_dialer_command_1_pane_g1_ParamLimits

0x4dbe,	// (0x000b1fb0) cell_dialer_command_1_pane_g1

0xd01b,	// (0x000ba20d) bg_button_pane_cp04

0x4dd2,	// (0x000b1fc4) cell_dialer_command_2_pane_g1

0xb363,	// (0x000b8555) bg_button_pane_cp06

0xd023,	// (0x000ba215) dialer_ne_clear_pane_g1

0x2679,	// (0x000af86b) navi_pane_g2

0x26a7,	// (0x000af899) navi_pane_g3

0x0002,

0xf3e5,	// (0x000bc5d7) navi_pane_g

0x26d2,	// (0x000af8c4) navi_pane_mv_g2

0x26f9,	// (0x000af8eb) navi_pane_mv_g5

0x2701,	// (0x000af8f3) navi_pane_mv_t1

0xa861,	// (0x000b7a53) main_clock2_pane

0x4e1d,	// (0x000b200f) main_clock2_list_pane_ParamLimits

0x4e1d,	// (0x000b200f) main_clock2_list_pane

0x4e55,	// (0x000b2047) main_clock2_pane_t1_ParamLimits

0x4e55,	// (0x000b2047) main_clock2_pane_t1

0x4e91,	// (0x000b2083) main_clock2_pane_t2_ParamLimits

0x4e91,	// (0x000b2083) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x000bc9bb) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x000bc9bb) main_clock2_pane_t

0x4f31,	// (0x000b2123) popup_clock_analogue_window_cp03_ParamLimits

0x4f31,	// (0x000b2123) popup_clock_analogue_window_cp03

0x4f58,	// (0x000b214a) popup_clock_digital_window_cp02_ParamLimits

0x4f58,	// (0x000b214a) popup_clock_digital_window_cp02

0x4fd1,	// (0x000b21c3) main_clock2_list_single_pane_ParamLimits

0x4fd1,	// (0x000b21c3) main_clock2_list_single_pane

0xb363,	// (0x000b8555) list_highlight_pane_cp05

0xd05f,	// (0x000ba251) main_clock2_list_single_pane_t1

0x1191,	// (0x000ae383) popup_toolbar_window_cp04_ParamLimits

0x439b,	// (0x000b158d) camera2_autofocus_pane_g2_ParamLimits

0x439b,	// (0x000b158d) camera2_autofocus_pane_g2

0x43a7,	// (0x000b1599) camera2_autofocus_pane_g3_ParamLimits

0x43a7,	// (0x000b1599) camera2_autofocus_pane_g3

0x43b3,	// (0x000b15a5) camera2_autofocus_pane_g4_ParamLimits

0x43b3,	// (0x000b15a5) camera2_autofocus_pane_g4

0x43bf,	// (0x000b15b1) camera2_autofocus_pane_g5_ParamLimits

0x43bf,	// (0x000b15b1) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x000bc8ff) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x000bc8ff) camera2_autofocus_pane_g

0x45f8,	// (0x000b17ea) camera2_autofocus_pane_cp_g2

0x4600,	// (0x000b17f2) camera2_autofocus_pane_cp_g3

0x4608,	// (0x000b17fa) camera2_autofocus_pane_cp_g4

0x4610,	// (0x000b1802) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x000bc965) camera2_autofocus_pane_cp_g

0x4cc4,	// (0x000b1eb6) popup_dialer_spcha_window

0x9517,	// (0x000b6709) bg_popup_sub_pane_cp07

0xd06d,	// (0x000ba25f) list_spcha_pane

0xd075,	// (0x000ba267) list_single_spcha_pane_ParamLimits

0xd075,	// (0x000ba267) list_single_spcha_pane

0x9517,	// (0x000b6709) list_highlight_pane_cp06

0xd086,	// (0x000ba278) list_single_spcha_pane_t1

0xc253,	// (0x000b9445) popup_call2_audio_out_window_g4_ParamLimits

0xc253,	// (0x000b9445) popup_call2_audio_out_window_g4

0x9517,	// (0x000b6709) main_imed2_pane

0xc846,	// (0x000b9a38) popup_imed_adjust2_window

0x374d,	// (0x000b093f) popup_imed_trans_window_ParamLimits

0x374d,	// (0x000b093f) popup_imed_trans_window

0xcaa3,	// (0x000b9c95) popup_blid_sat_info2_window_t1

0xcab1,	// (0x000b9ca3) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x000bc894) popup_blid_sat_info2_window_t

0x5087,	// (0x000b2279) aid_size_cell_colour_35

0x50a7,	// (0x000b2299) aid_size_cell_colour_112

0x50c7,	// (0x000b22b9) aid_size_cell_effect

0xc81a,	// (0x000b9a0c) bg_tb_trans_pane_cp02

0xaec3,	// (0x000b80b5) heading_imed_pane

0x50e7,	// (0x000b22d9) listscroll_imed_pane

0xd094,	// (0x000ba286) heading_imed_pane_g1

0xd09c,	// (0x000ba28e) heading_imed_pane_t1

0xd0aa,	// (0x000ba29c) grid_imed_colour_35_pane_ParamLimits

0xd0aa,	// (0x000ba29c) grid_imed_colour_35_pane

0x50f3,	// (0x000b22e5) grid_imed_effect_pane

0xd0c6,	// (0x000ba2b8) list_imed_aspect_pane

0x5108,	// (0x000b22fa) scroll_pane_cp027_ParamLimits

0x5108,	// (0x000b22fa) scroll_pane_cp027

0x5119,	// (0x000b230b) cell_imed_effect_pane_ParamLimits

0x5119,	// (0x000b230b) cell_imed_effect_pane

0xd0ce,	// (0x000ba2c0) cell_imed_colour_pane_ParamLimits

0xd0ce,	// (0x000ba2c0) cell_imed_colour_pane

0xd118,	// (0x000ba30a) cell_imed_colour_pane_g1_ParamLimits

0xd118,	// (0x000ba30a) cell_imed_colour_pane_g1

0xd129,	// (0x000ba31b) hgihlgiht_grid_pane_cp016_ParamLimits

0xd129,	// (0x000ba31b) hgihlgiht_grid_pane_cp016

0x5144,	// (0x000b2336) cell_imed_effect_pane_g1

0x514c,	// (0x000b233e) grid_highlight_pane_cp017

0xd13a,	// (0x000ba32c) list_imed_single_pane_ParamLimits

0xd13a,	// (0x000ba32c) list_imed_single_pane

0x9517,	// (0x000b6709) list_highlight_pane_cp07

0xd14e,	// (0x000ba340) list_imed_aspect_pane_comp1_t1

0xc81a,	// (0x000b9a0c) bg_tb_trans_pane_cp05

0xd170,	// (0x000ba362) popup_imed_adjust2_window_g1

0xd197,	// (0x000ba389) popup_imed_adjust2_window_t1

0xd1af,	// (0x000ba3a1) slider_imed_adjust_pane

0xd1c3,	// (0x000ba3b5) slider_imed_adjust_pane_g1

0xd1d3,	// (0x000ba3c5) slider_imed_adjust_pane_g2

0xd1e3,	// (0x000ba3d5) slider_imed_adjust_pane_g3

0xd1f4,	// (0x000ba3e6) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x000bc9d8) slider_imed_adjust_pane_g

0x5155,	// (0x000b2347) aid_size_cell_clipart2

0x5161,	// (0x000b2353) grid_imed_clipart_pane

0xd205,	// (0x000ba3f7) scroll_pane_cp031

0x516b,	// (0x000b235d) cell_imed_clipart_pane_ParamLimits

0x516b,	// (0x000b235d) cell_imed_clipart_pane

0x5188,	// (0x000b237a) cell_imed_clipart_pane_g1

0x9517,	// (0x000b6709) grid_highlight_pane_cp014

0x4e32,	// (0x000b2024) main_clock2_pane_g1_ParamLimits

0x4e32,	// (0x000b2024) main_clock2_pane_g1

0x4f78,	// (0x000b216a) aid_call2_pane_cp10

0x4f8a,	// (0x000b217c) aid_call_pane_cp10

0xb298,	// (0x000b848a) popup_clock_analogue_window_cp10_g1

0xb298,	// (0x000b848a) popup_clock_analogue_window_cp10_g2

0x4f9c,	// (0x000b218e) popup_clock_analogue_window_cp10_g3

0x4f9c,	// (0x000b218e) popup_clock_analogue_window_cp10_g4

0xb298,	// (0x000b848a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x000bc9c6) popup_clock_analogue_window_cp10_g

0x4fb2,	// (0x000b21a4) popup_clock_analogue_window_cp10_t1

0x4fe3,	// (0x000b21d5) clock_digital_number_pane_cp10_ParamLimits

0x4fe3,	// (0x000b21d5) clock_digital_number_pane_cp10

0x4ffd,	// (0x000b21ef) clock_digital_number_pane_cp11_ParamLimits

0x4ffd,	// (0x000b21ef) clock_digital_number_pane_cp11

0x5017,	// (0x000b2209) clock_digital_number_pane_cp12_ParamLimits

0x5017,	// (0x000b2209) clock_digital_number_pane_cp12

0x5031,	// (0x000b2223) clock_digital_number_pane_cp13_ParamLimits

0x5031,	// (0x000b2223) clock_digital_number_pane_cp13

0x504b,	// (0x000b223d) clock_digital_separator_pane_cp10_ParamLimits

0x504b,	// (0x000b223d) clock_digital_separator_pane_cp10

0x5065,	// (0x000b2257) popup_clock_digital_window_cp02_t1_ParamLimits

0x5065,	// (0x000b2257) popup_clock_digital_window_cp02_t1

0x9bdc,	// (0x000b6dce) clock_digital_number_pane_cp10_g1

0x9bdc,	// (0x000b6dce) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x000bc9e1) clock_digital_number_pane_cp10_g

0x9bdc,	// (0x000b6dce) clock_digital_separator_pane_cp10_g1

0x9bdc,	// (0x000b6dce) clock_digital_separator_pane_g2_cp10

0xb333,	// (0x000b8525) navi_pane_vded_g4

0xb33c,	// (0x000b852e) navi_pane_vded_g5

0xb345,	// (0x000b8537) navi_pane_vded_t1

0x9517,	// (0x000b6709) main_vded_pane

0x5191,	// (0x000b2383) main_vded_pane_g1

0x519d,	// (0x000b238f) main_vded_pane_g2

0x51a9,	// (0x000b239b) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x000bc9e6) main_vded_pane_g

0x51b5,	// (0x000b23a7) main_vded_pane_t1

0x51c3,	// (0x000b23b5) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x000bc9ed) main_vded_pane_t

0x51d1,	// (0x000b23c3) vded_slider_pane

0x51db,	// (0x000b23cd) vded_video_pane

0xd20d,	// (0x000ba3ff) vded_video_pane_g1

0x51e5,	// (0x000b23d7) vded_video_pane_g2

0xcc6b,	// (0x000b9e5d) vded_video_pane_g3

0x0002,

0xf800,	// (0x000bc9f2) vded_video_pane_g

0xd217,	// (0x000ba409) vded_slider_pane_g1

0xc9b8,	// (0x000b9baa) vded_slider_pane_g2

0xd220,	// (0x000ba412) vded_slider_pane_g3

0xd229,	// (0x000ba41b) vded_slider_pane_g4

0xd232,	// (0x000ba424) vded_slider_pane_g5

0x0004,

0xf807,	// (0x000bc9f9) vded_slider_pane_g

0x4ba3,	// (0x000b1d95) mup3_rocker_pane_ParamLimits

0x4ba3,	// (0x000b1d95) mup3_rocker_pane

0x51ee,	// (0x000b23e0) mup3_control_keys_pane_g1

0x51f6,	// (0x000b23e8) mup3_control_keys_pane_g2

0x51fe,	// (0x000b23f0) mup3_control_keys_pane_g3

0x5206,	// (0x000b23f8) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x000bca04) mup3_control_keys_pane_g

0xfe62,	// (0x000ad054) popup_toolbar2_fixed_window_cp01_ParamLimits

0xfe62,	// (0x000ad054) popup_toolbar2_fixed_window_cp01

0x4bd9,	// (0x000b1dcb) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4bd9,	// (0x000b1dcb) popup_toolbar2_fixed_window_cp02

0xbb00,	// (0x000b8cf2) popup_call2_audio_second_window_t4_ParamLimits

0xbb00,	// (0x000b8cf2) popup_call2_audio_second_window_t4

0xc0c0,	// (0x000b92b2) popup_call2_audio_first_window_t6_ParamLimits

0xc0c0,	// (0x000b92b2) popup_call2_audio_first_window_t6

0xc356,	// (0x000b9548) popup_call2_audio_out_window_t6_ParamLimits

0xc356,	// (0x000b9548) popup_call2_audio_out_window_t6

0x9517,	// (0x000b6709) main_vitu_pane

0x5216,	// (0x000b2408) aid_size_cell_itu_ParamLimits

0x5216,	// (0x000b2408) aid_size_cell_itu

0x9568,	// (0x000b675a) bg_popup_window_pane_cp08_ParamLimits

0x9568,	// (0x000b675a) bg_popup_window_pane_cp08

0x522c,	// (0x000b241e) field_vitu_entry_pane_ParamLimits

0x522c,	// (0x000b241e) field_vitu_entry_pane

0x5243,	// (0x000b2435) grid_vitu_function_pane_ParamLimits

0x5243,	// (0x000b2435) grid_vitu_function_pane

0x525e,	// (0x000b2450) grid_vitu_itu_pane_ParamLimits

0x525e,	// (0x000b2450) grid_vitu_itu_pane

0x527c,	// (0x000b246e) cell_vitu_itu_pane_ParamLimits

0x527c,	// (0x000b246e) cell_vitu_itu_pane

0x52a2,	// (0x000b2494) cell_vitu_function_pane_ParamLimits

0x52a2,	// (0x000b2494) cell_vitu_function_pane

0x9568,	// (0x000b675a) bg_popup_sub_pane_cp08_ParamLimits

0x9568,	// (0x000b675a) bg_popup_sub_pane_cp08

0x52bd,	// (0x000b24af) field_vitu_entry_pane_t1_ParamLimits

0x52bd,	// (0x000b24af) field_vitu_entry_pane_t1

0xd253,	// (0x000ba445) field_vitu_entry_pane_t2_ParamLimits

0xd253,	// (0x000ba445) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x000bca12) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x000bca12) field_vitu_entry_pane_t

0xd270,	// (0x000ba462) bg_button_pane_cp05_ParamLimits

0xd270,	// (0x000ba462) bg_button_pane_cp05

0x52dd,	// (0x000b24cf) cell_vitu_itu_pane_g1

0x52f5,	// (0x000b24e7) cell_vitu_itu_pane_t1_ParamLimits

0x52f5,	// (0x000b24e7) cell_vitu_itu_pane_t1

0x5307,	// (0x000b24f9) cell_vitu_itu_pane_t2_ParamLimits

0x5307,	// (0x000b24f9) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x000bca17) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x000bca17) cell_vitu_itu_pane_t

0xd27e,	// (0x000ba470) bg_button_pane_cp07

0x533c,	// (0x000b252e) cell_vitu_function_pane_g1

0x9c6b,	// (0x000b6e5d) main_calc_pane_g1

0xfc6e,	// (0x000ace60) aid_visual_content_pane

0x9517,	// (0x000b6709) main_vradio_pane

0x5345,	// (0x000b2537) main_vradio_pane_g1_ParamLimits

0x5345,	// (0x000b2537) main_vradio_pane_g1

0xd288,	// (0x000ba47a) main_vradio_pane_g2_ParamLimits

0xd288,	// (0x000ba47a) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x000bca1e) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x000bca1e) main_vradio_pane_g

0x535c,	// (0x000b254e) main_vradio_pane_t1_ParamLimits

0x535c,	// (0x000b254e) main_vradio_pane_t1

0x5371,	// (0x000b2563) main_vradio_pane_t2_ParamLimits

0x5371,	// (0x000b2563) main_vradio_pane_t2

0xd295,	// (0x000ba487) main_vradio_pane_t3_ParamLimits

0xd295,	// (0x000ba487) main_vradio_pane_t3

0x0002,

0xf831,	// (0x000bca23) main_vradio_pane_t_ParamLimits

0xf831,	// (0x000bca23) main_vradio_pane_t

0x5386,	// (0x000b2578) vradio_rocker_control_pane_ParamLimits

0x5386,	// (0x000b2578) vradio_rocker_control_pane

0x5398,	// (0x000b258a) vradio_station_info_pane_ParamLimits

0x5398,	// (0x000b258a) vradio_station_info_pane

0xd2a9,	// (0x000ba49b) vradio_frequency_info_pane_ParamLimits

0xd2a9,	// (0x000ba49b) vradio_frequency_info_pane

0xcc6b,	// (0x000b9e5d) vradio_station_info_pane_g1

0xd2b8,	// (0x000ba4aa) vradio_station_info_pane_t1_ParamLimits

0xd2b8,	// (0x000ba4aa) vradio_station_info_pane_t1

0xd2da,	// (0x000ba4cc) vradio_station_info_pane_t2_ParamLimits

0xd2da,	// (0x000ba4cc) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x000bca2a) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x000bca2a) vradio_station_info_pane_t

0xd2ec,	// (0x000ba4de) vradio_tuning_pane

0xd2f4,	// (0x000ba4e6) vradio_rocker_control_pane_g1

0xd2fc,	// (0x000ba4ee) vradio_rocker_control_pane_g2

0xd304,	// (0x000ba4f6) vradio_rocker_control_pane_g3

0xd30c,	// (0x000ba4fe) vradio_rocker_control_pane_g4

0xd314,	// (0x000ba506) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x000bca2f) vradio_rocker_control_pane_g

0x53a8,	// (0x000b259a) vradio_frequency_info_pane_g1

0xd31c,	// (0x000ba50e) vradio_frequency_info_pane_t1_ParamLimits

0xd31c,	// (0x000ba50e) vradio_frequency_info_pane_t1

0x53b2,	// (0x000b25a4) vradio_tuning_pane_g1

0x53bd,	// (0x000b25af) vradio_tuning_pane_t1

0x9535,	// (0x000b6727) area_side_right_pane_ParamLimits

0x9535,	// (0x000b6727) area_side_right_pane

0xc7d5,	// (0x000b99c7) status_small_pane_g1

0xc7dd,	// (0x000b99cf) status_small_pane_g2

0xc7e6,	// (0x000b99d8) status_small_pane_g3

0xc7ef,	// (0x000b99e1) status_small_pane_g4

0x0003,

0xf5f8,	// (0x000bc7ea) status_small_pane_g

0xc7f8,	// (0x000b99ea) status_small_pane_t1

0x9517,	// (0x000b6709) main_video3_pane

0xd330,	// (0x000ba522) cams_zoom_vslider_pane

0xd338,	// (0x000ba52a) image3_wide_pane_ParamLimits

0xd338,	// (0x000ba52a) image3_wide_pane

0xd352,	// (0x000ba544) image3_wide_small_pane

0xd35e,	// (0x000ba550) main_video3_pane_g1_ParamLimits

0xd35e,	// (0x000ba550) main_video3_pane_g1

0xd37a,	// (0x000ba56c) main_video3_pane_g2_ParamLimits

0xd37a,	// (0x000ba56c) main_video3_pane_g2

0x0001,

0xf848,	// (0x000bca3a) main_video3_pane_g_ParamLimits

0xf848,	// (0x000bca3a) main_video3_pane_g

0xd396,	// (0x000ba588) main_video3_pane_t1_ParamLimits

0xd396,	// (0x000ba588) main_video3_pane_t1

0xd3c1,	// (0x000ba5b3) main_video3_pane_t2_ParamLimits

0xd3c1,	// (0x000ba5b3) main_video3_pane_t2

0xd3ee,	// (0x000ba5e0) main_video3_pane_t3_ParamLimits

0xd3ee,	// (0x000ba5e0) main_video3_pane_t3

0x0002,

0xf84d,	// (0x000bca3f) main_video3_pane_t_ParamLimits

0xf84d,	// (0x000bca3f) main_video3_pane_t

0xd41b,	// (0x000ba60d) cams_zoom_vslider_pane_g1

0xd424,	// (0x000ba616) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x000bca46) cams_zoom_vslider_pane_g

0xd42c,	// (0x000ba61e) small_slider_vertical_pane

0xcc6b,	// (0x000b9e5d) small_slider_vertical_pane_g1

0xcc6b,	// (0x000b9e5d) small_slider_vertical_pane_g2

0xd434,	// (0x000ba626) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x000bca4b) small_slider_vertical_pane_g

0x9517,	// (0x000b6709) main_hwr_training_pane

0xd43d,	// (0x000ba62f) hwr_training_instruct_pane_ParamLimits

0xd43d,	// (0x000ba62f) hwr_training_instruct_pane

0x53cc,	// (0x000b25be) hwr_training_navi_pane_ParamLimits

0x53cc,	// (0x000b25be) hwr_training_navi_pane

0x53eb,	// (0x000b25dd) hwr_training_write_pane_ParamLimits

0x53eb,	// (0x000b25dd) hwr_training_write_pane

0x9517,	// (0x000b6709) bg_frame_shadow_pane

0xd474,	// (0x000ba666) hwr_training_write_pane_g1

0xd47c,	// (0x000ba66e) hwr_training_write_pane_g2

0xd484,	// (0x000ba676) hwr_training_write_pane_g3

0xd48c,	// (0x000ba67e) hwr_training_write_pane_g4

0xd494,	// (0x000ba686) hwr_training_write_pane_g5

0xd49c,	// (0x000ba68e) hwr_training_write_pane_g6

0xd4a4,	// (0x000ba696) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x000bca52) hwr_training_write_pane_g

0x9f58,	// (0x000b714a) hwr_training_navi_pane_g1_ParamLimits

0x9f58,	// (0x000b714a) hwr_training_navi_pane_g1

0x9f6a,	// (0x000b715c) hwr_training_navi_pane_g2_ParamLimits

0x9f6a,	// (0x000b715c) hwr_training_navi_pane_g2

0x9f7c,	// (0x000b716e) hwr_training_navi_pane_g3_ParamLimits

0x9f7c,	// (0x000b716e) hwr_training_navi_pane_g3

0x9f8c,	// (0x000b717e) hwr_training_navi_pane_g4_ParamLimits

0x9f8c,	// (0x000b717e) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x000bca61) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x000bca61) hwr_training_navi_pane_g

0x9f99,	// (0x000b718b) hwr_training_navi_pane_t1

0x5433,	// (0x000b2625) list_single_hwr_training_instruct_pane_ParamLimits

0x5433,	// (0x000b2625) list_single_hwr_training_instruct_pane

0xd4ac,	// (0x000ba69e) list_single_hwr_training_instruct_pane_t1

0xcbab,	// (0x000b9d9d) bg_frame_shadow_pane_g1

0xd4bb,	// (0x000ba6ad) bg_frame_shadow_pane_g2

0xd4c3,	// (0x000ba6b5) bg_frame_shadow_pane_g3

0xd4cb,	// (0x000ba6bd) bg_frame_shadow_pane_g4

0xd4d3,	// (0x000ba6c5) bg_frame_shadow_pane_g5

0xd4db,	// (0x000ba6cd) bg_frame_shadow_pane_g6

0xd4e3,	// (0x000ba6d5) bg_frame_shadow_pane_g7

0xa92c,	// (0x000b7b1e) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x000bca6c) bg_frame_shadow_pane_g

0x9517,	// (0x000b6709) main_video_tele_dialer_pane

0x5448,	// (0x000b263a) aid_size_cell_video_keypad_ParamLimits

0x5448,	// (0x000b263a) aid_size_cell_video_keypad

0x5462,	// (0x000b2654) grid_video_dialer_keypad_pane_ParamLimits

0x5462,	// (0x000b2654) grid_video_dialer_keypad_pane

0x54ae,	// (0x000b26a0) video_down_pane_cp_ParamLimits

0x54ae,	// (0x000b26a0) video_down_pane_cp

0x54de,	// (0x000b26d0) cell_video_dialer_keypad_pane_ParamLimits

0x54de,	// (0x000b26d0) cell_video_dialer_keypad_pane

0xd4eb,	// (0x000ba6dd) bg_button_pane_cp08_ParamLimits

0xd4eb,	// (0x000ba6dd) bg_button_pane_cp08

0x5502,	// (0x000b26f4) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5502,	// (0x000b26f4) cell_video_dialer_keypad_pane_g1

0x4b8d,	// (0x000b1d7f) mup3_rocker2_pane_ParamLimits

0x4b8d,	// (0x000b1d7f) mup3_rocker2_pane

0xcc6b,	// (0x000b9e5d) mup3_rocker2_pane_g1

0x361a,	// (0x000b080c) main_dialer2_pane

0x9517,	// (0x000b6709) main_mp4_pane

0x9faf,	// (0x000b71a1) main_mp4_pane_g1_ParamLimits

0x9faf,	// (0x000b71a1) main_mp4_pane_g1

0x9faf,	// (0x000b71a1) main_mp4_pane_g2_ParamLimits

0x9faf,	// (0x000b71a1) main_mp4_pane_g2

0x553d,	// (0x000b272f) main_mp4_pane_g3_ParamLimits

0x553d,	// (0x000b272f) main_mp4_pane_g3

0x9fbd,	// (0x000b71af) main_mp4_pane_g4_ParamLimits

0x9fbd,	// (0x000b71af) main_mp4_pane_g4

0x9fe5,	// (0x000b71d7) main_mp4_pane_g5_ParamLimits

0x9fe5,	// (0x000b71d7) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x000bca8c) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x000bca8c) main_mp4_pane_g

0xa035,	// (0x000b7227) main_mp4_pane_t1_ParamLimits

0xa035,	// (0x000b7227) main_mp4_pane_t1

0xa091,	// (0x000b7283) main_mp4_pane_t2_ParamLimits

0xa091,	// (0x000b7283) main_mp4_pane_t2

0xd4f7,	// (0x000ba6e9) main_mp4_pane_t3_ParamLimits

0xd4f7,	// (0x000ba6e9) main_mp4_pane_t3

0xa0e3,	// (0x000b72d5) main_mp4_pane_t4_ParamLimits

0xa0e3,	// (0x000b72d5) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x000bca99) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x000bca99) main_mp4_pane_t

0xa123,	// (0x000b7315) mp4_progress_pane_ParamLimits

0xa123,	// (0x000b7315) mp4_progress_pane

0xa16d,	// (0x000b735f) mp4_rocker_pane_ParamLimits

0xa16d,	// (0x000b735f) mp4_rocker_pane

0xd51f,	// (0x000ba711) mp4_progress_pane_t1

0xd538,	// (0x000ba72a) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x000bcaa2) mp4_progress_pane_t

0xd551,	// (0x000ba743) mup_progress_pane_cp04

0xd55d,	// (0x000ba74f) mp4_rocker_pane_g1

0x5587,	// (0x000b2779) aid_cell_size_keypad2_ParamLimits

0x5587,	// (0x000b2779) aid_cell_size_keypad2

0x559d,	// (0x000b278f) dialer2_ne_pane_ParamLimits

0x559d,	// (0x000b278f) dialer2_ne_pane

0x55b5,	// (0x000b27a7) grid_dialer2_keypad_pane_ParamLimits

0x55b5,	// (0x000b27a7) grid_dialer2_keypad_pane

0xca4a,	// (0x000b9c3c) bg_popup_call_pane_cp07_ParamLimits

0xca4a,	// (0x000b9c3c) bg_popup_call_pane_cp07

0x55d1,	// (0x000b27c3) dialer2_ne_pane_t1_ParamLimits

0x55d1,	// (0x000b27c3) dialer2_ne_pane_t1

0x560c,	// (0x000b27fe) cell_dialer2_keypad_pane_ParamLimits

0x560c,	// (0x000b27fe) cell_dialer2_keypad_pane

0xd579,	// (0x000ba76b) bg_button_pane_pane_cp04_ParamLimits

0xd579,	// (0x000ba76b) bg_button_pane_pane_cp04

0x5630,	// (0x000b2822) cell_dialer2_keypad_pane_g1_ParamLimits

0x5630,	// (0x000b2822) cell_dialer2_keypad_pane_g1

0x1078,	// (0x000ae26a) aid_placing_vt_set_content_ParamLimits

0x1078,	// (0x000ae26a) aid_placing_vt_set_content

0x109c,	// (0x000ae28e) aid_placing_vt_set_title_ParamLimits

0x109c,	// (0x000ae28e) aid_placing_vt_set_title

0x9517,	// (0x000b6709) main_image3_pane

0x56f6,	// (0x000b28e8) area_side_right_pane_cp01_ParamLimits

0x56f6,	// (0x000b28e8) area_side_right_pane_cp01

0x9faf,	// (0x000b71a1) main_image3_pane_g1_ParamLimits

0x9faf,	// (0x000b71a1) main_image3_pane_g1

0x570f,	// (0x000b2901) main_image3_pane_g2_ParamLimits

0x570f,	// (0x000b2901) main_image3_pane_g2

0x5737,	// (0x000b2929) main_image3_pane_g3_ParamLimits

0x5737,	// (0x000b2929) main_image3_pane_g3

0x5761,	// (0x000b2953) main_image3_pane_g4_ParamLimits

0x5761,	// (0x000b2953) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x000bcab1) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x000bcab1) main_image3_pane_g

0x578b,	// (0x000b297d) main_image3_pane_t1_ParamLimits

0x578b,	// (0x000b297d) main_image3_pane_t1

0x57e3,	// (0x000b29d5) main_image3_pane_t2_ParamLimits

0x57e3,	// (0x000b29d5) main_image3_pane_t2

0x5835,	// (0x000b2a27) main_image3_pane_t3_ParamLimits

0x5835,	// (0x000b2a27) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x000bcaba) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x000bcaba) main_image3_pane_t

0x9568,	// (0x000b675a) grid_sctrl_middle_pane_cp01_ParamLimits

0x9568,	// (0x000b675a) grid_sctrl_middle_pane_cp01

0x58bd,	// (0x000b2aaf) cell_sctrl_middle_pane_cp01_ParamLimits

0x58bd,	// (0x000b2aaf) cell_sctrl_middle_pane_cp01

0x58da,	// (0x000b2acc) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x58da,	// (0x000b2acc) cell_sctrl_middle_pane_cp01_g1

0x9517,	// (0x000b6709) main_call4_pane

0x58ef,	// (0x000b2ae1) aid_size_button_call4_ParamLimits

0x58ef,	// (0x000b2ae1) aid_size_button_call4

0x5922,	// (0x000b2b14) call4_windows_pane_ParamLimits

0x5922,	// (0x000b2b14) call4_windows_pane

0x5944,	// (0x000b2b36) grid_call4_button_pane_ParamLimits

0x5944,	// (0x000b2b36) grid_call4_button_pane

0xd585,	// (0x000ba777) call4_windows_conf_pane

0x596f,	// (0x000b2b61) popup_call4_audio_first_window_ParamLimits

0x596f,	// (0x000b2b61) popup_call4_audio_first_window

0x599b,	// (0x000b2b8d) popup_call4_audio_second_window_ParamLimits

0x599b,	// (0x000b2b8d) popup_call4_audio_second_window

0xd5c2,	// (0x000ba7b4) popup_call4_audio_wait_window_ParamLimits

0xd5c2,	// (0x000ba7b4) popup_call4_audio_wait_window

0x59b1,	// (0x000b2ba3) cell_call4_button_pane_ParamLimits

0x59b1,	// (0x000b2ba3) cell_call4_button_pane

0x59d8,	// (0x000b2bca) bg_button_pane_cp09_ParamLimits

0x59d8,	// (0x000b2bca) bg_button_pane_cp09

0x59e4,	// (0x000b2bd6) cell_call4_button_pane_g1_ParamLimits

0x59e4,	// (0x000b2bd6) cell_call4_button_pane_g1

0x5a0a,	// (0x000b2bfc) cell_call4_button_pane_t1_ParamLimits

0x5a0a,	// (0x000b2bfc) cell_call4_button_pane_t1

0xd60a,	// (0x000ba7fc) popup_call4_audio_conf_window_ParamLimits

0xd60a,	// (0x000ba7fc) popup_call4_audio_conf_window

0x4bef,	// (0x000b1de1) mup3_progress_pane_t1_ParamLimits

0x4c0d,	// (0x000b1dff) mup3_progress_pane_t2_ParamLimits

0xcf16,	// (0x000ba108) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x000bc98e) mup3_progress_pane_t_ParamLimits

0xcf33,	// (0x000ba125) mup_progress_pane_cp03_ParamLimits

0x520e,	// (0x000b2400) mup3_control_keys_pane_g4_copy1

0xa151,	// (0x000b7343) mp4_rocker2_pane_ParamLimits

0xa151,	// (0x000b7343) mp4_rocker2_pane

0xd624,	// (0x000ba816) mp4_rocker2_pane_g1

0xd62c,	// (0x000ba81e) mp4_rocker2_pane_g2

0xa1c3,	// (0x000b73b5) mp4_rocker2_pane_g3

0xa1cb,	// (0x000b73bd) mp4_rocker2_pane_g4

0xa1d3,	// (0x000b73c5) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x000bcac3) mp4_rocker2_pane_g

0x9517,	// (0x000b6709) main_camera4_pane

0x9517,	// (0x000b6709) main_video4_pane

0x547c,	// (0x000b266e) main_video_tele_dialer_pane_t1_ParamLimits

0x547c,	// (0x000b266e) main_video_tele_dialer_pane_t1

0x5495,	// (0x000b2687) main_video_tele_dialer_pane_t2_ParamLimits

0x5495,	// (0x000b2687) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x000bca7d) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x000bca7d) main_video_tele_dialer_pane_t

0x5a48,	// (0x000b2c3a) cam4_autofocus_pane_ParamLimits

0x5a48,	// (0x000b2c3a) cam4_autofocus_pane

0x5a5e,	// (0x000b2c50) cam4_image_uncrop_pane_ParamLimits

0x5a5e,	// (0x000b2c50) cam4_image_uncrop_pane

0x5a77,	// (0x000b2c69) cam4_indicators_pane_ParamLimits

0x5a77,	// (0x000b2c69) cam4_indicators_pane

0x5aa6,	// (0x000b2c98) main_camera4_pane_g1_ParamLimits

0x5aa6,	// (0x000b2c98) main_camera4_pane_g1

0x5ab8,	// (0x000b2caa) main_camera4_pane_g2_ParamLimits

0x5ab8,	// (0x000b2caa) main_camera4_pane_g2

0x5acb,	// (0x000b2cbd) main_camera4_pane_g3_ParamLimits

0x5acb,	// (0x000b2cbd) main_camera4_pane_g3

0x5ade,	// (0x000b2cd0) main_camera4_pane_g4_ParamLimits

0x5ade,	// (0x000b2cd0) main_camera4_pane_g4

0x5af1,	// (0x000b2ce3) main_camera4_pane_g5_ParamLimits

0x5af1,	// (0x000b2ce3) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x000bcace) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x000bcace) main_camera4_pane_g

0x5b15,	// (0x000b2d07) main_camera4_pane_t1_ParamLimits

0x5b15,	// (0x000b2d07) main_camera4_pane_t1

0xa1f9,	// (0x000b73eb) bg_tb_trans_pane_cp06

0xa20f,	// (0x000b7401) cam4_indicators_pane_g1

0xa220,	// (0x000b7412) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x000bcae9) cam4_indicators_pane_g

0xa238,	// (0x000b742a) cam4_indicators_pane_t1

0x5b79,	// (0x000b2d6b) main_video4_pane_g1_ParamLimits

0x5b79,	// (0x000b2d6b) main_video4_pane_g1

0x5b88,	// (0x000b2d7a) main_video4_pane_g2_ParamLimits

0x5b88,	// (0x000b2d7a) main_video4_pane_g2

0x5b97,	// (0x000b2d89) main_video4_pane_g3_ParamLimits

0x5b97,	// (0x000b2d89) main_video4_pane_g3

0x5ba6,	// (0x000b2d98) main_video4_pane_g4_ParamLimits

0x5ba6,	// (0x000b2d98) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x000bcaf0) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x000bcaf0) main_video4_pane_g

0x5bc4,	// (0x000b2db6) vid4_indicators_pane_ParamLimits

0x5bc4,	// (0x000b2db6) vid4_indicators_pane

0x5bf2,	// (0x000b2de4) video4_image_uncrop_cif_pane_ParamLimits

0x5bf2,	// (0x000b2de4) video4_image_uncrop_cif_pane

0x5c0c,	// (0x000b2dfe) video4_image_uncrop_nhd_pane_ParamLimits

0x5c0c,	// (0x000b2dfe) video4_image_uncrop_nhd_pane

0x5a5e,	// (0x000b2c50) video4_image_uncrop_vga_pane_ParamLimits

0x5a5e,	// (0x000b2c50) video4_image_uncrop_vga_pane

0xa25c,	// (0x000b744e) bg_tb_trans_pane_cp07

0xa274,	// (0x000b7466) vid4_indicators_pane_g1

0xa28a,	// (0x000b747c) vid4_indicators_pane_g2

0xa29e,	// (0x000b7490) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x000bcafb) vid4_indicators_pane_g

0xa2cf,	// (0x000b74c1) vid4_indicators_pane_t1

0x5c22,	// (0x000b2e14) cam4_autofocus_pane_g1

0x5c2a,	// (0x000b2e1c) cam4_autofocus_pane_g2

0x5c32,	// (0x000b2e24) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x000bcb06) cam4_autofocus_pane_g

0x5c3a,	// (0x000b2e2c) cam4_autofocus_pane_g3_copy1

0x54c2,	// (0x000b26b4) video_down_pane_cp_t1

0x54d0,	// (0x000b26c2) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x000bca82) video_down_pane_cp_t

0x9568,	// (0x000b675a) popup_vitu2_window_ParamLimits

0x9568,	// (0x000b675a) popup_vitu2_window

0x5c42,	// (0x000b2e34) aid_size_cell2_itu2_ParamLimits

0x5c42,	// (0x000b2e34) aid_size_cell2_itu2

0x5c68,	// (0x000b2e5a) aid_size_cell_itu2_ParamLimits

0x5c68,	// (0x000b2e5a) aid_size_cell_itu2

0x5cc8,	// (0x000b2eba) bg_popup_window_pane_cp09_ParamLimits

0x5cc8,	// (0x000b2eba) bg_popup_window_pane_cp09

0x5cd6,	// (0x000b2ec8) field_vitu2_entry_pane_ParamLimits

0x5cd6,	// (0x000b2ec8) field_vitu2_entry_pane

0x5cfe,	// (0x000b2ef0) grid_vitu2_function_pane_ParamLimits

0x5cfe,	// (0x000b2ef0) grid_vitu2_function_pane

0x5d4f,	// (0x000b2f41) grid_vitu2_itu_pane_ParamLimits

0x5d4f,	// (0x000b2f41) grid_vitu2_itu_pane

0x5dda,	// (0x000b2fcc) cell_vitu2_itu_pane_ParamLimits

0x5dda,	// (0x000b2fcc) cell_vitu2_itu_pane

0x5e00,	// (0x000b2ff2) cell_vitu2_function_pane_ParamLimits

0x5e00,	// (0x000b2ff2) cell_vitu2_function_pane

0xd648,	// (0x000ba83a) bg_popup_call_pane_cp08_ParamLimits

0xd648,	// (0x000ba83a) bg_popup_call_pane_cp08

0xd65f,	// (0x000ba851) field_vitu2_entry_pane_g1

0xd66b,	// (0x000ba85d) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x000bcb0d) field_vitu2_entry_pane_g

0x5e44,	// (0x000b3036) field_vitu2_entry_pane_t1_ParamLimits

0x5e44,	// (0x000b3036) field_vitu2_entry_pane_t1

0xa2e6,	// (0x000b74d8) field_vitu2_entry_pane_t2_ParamLimits

0xa2e6,	// (0x000b74d8) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x000bcb14) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x000bcb14) field_vitu2_entry_pane_t

0x5e6f,	// (0x000b3061) bg_button_pane_cp010_ParamLimits

0x5e6f,	// (0x000b3061) bg_button_pane_cp010

0x5e7d,	// (0x000b306f) cell_vitu2_itu_pane_g1

0x5ea8,	// (0x000b309a) cell_vitu2_itu_pane_t1_ParamLimits

0x5ea8,	// (0x000b309a) cell_vitu2_itu_pane_t1

0xfb56,	// (0x000acd48) cell_vitu2_itu_pane_t2_ParamLimits

0xfb56,	// (0x000acd48) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x000bcb1e) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x000bcb1e) cell_vitu2_itu_pane_t

0xa25c,	// (0x000b744e) bg_button_pane_cp011

0x5f06,	// (0x000b30f8) cell_vitu2_function_pane_g1

0x9517,	// (0x000b6709) main_myfav_hc_pane

0x5885,	// (0x000b2a77) popup_image3_note_pane_ParamLimits

0x5885,	// (0x000b2a77) popup_image3_note_pane

0x58a1,	// (0x000b2a93) popup_image3_tool_bar_pane_ParamLimits

0x58a1,	// (0x000b2a93) popup_image3_tool_bar_pane

0xfbda,	// (0x000acdcc) cell_vitu2_itu_pane_t3_ParamLimits

0xfbda,	// (0x000acdcc) cell_vitu2_itu_pane_t3

0x9517,	// (0x000b6709) bg_popup_trans_pane

0xd68d,	// (0x000ba87f) grid_image3_tool_bar_pane

0xd697,	// (0x000ba889) bg_popup_trans_pane_g1

0xac8a,	// (0x000b7e7c) bg_popup_trans_pane_g2

0xd69f,	// (0x000ba891) bg_popup_trans_pane_g3

0xd6a7,	// (0x000ba899) bg_popup_trans_pane_g4

0xd6af,	// (0x000ba8a1) bg_popup_trans_pane_g5

0xd6b7,	// (0x000ba8a9) bg_popup_trans_pane_g6

0xd6bf,	// (0x000ba8b1) bg_popup_trans_pane_g7

0xd6c7,	// (0x000ba8b9) bg_popup_trans_pane_g8

0xac6a,	// (0x000b7e5c) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x000bcb25) bg_popup_trans_pane_g

0xd6cf,	// (0x000ba8c1) cell_image3_tool_bar_pane_ParamLimits

0xd6cf,	// (0x000ba8c1) cell_image3_tool_bar_pane

0xcc6b,	// (0x000b9e5d) cell_image3_tool_bar_pane_g1

0x9517,	// (0x000b6709) bg_popup_trans_pane_cp1

0xd6e5,	// (0x000ba8d7) popup_image3_note_pane_t1

0xd6f3,	// (0x000ba8e5) popup_image3_note_pane_t2

0xd701,	// (0x000ba8f3) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000bcb38) popup_image3_note_pane_t

0xd711,	// (0x000ba903) popup_image3_note_pane_t3_copy1

0x5f1a,	// (0x000b310c) bg_myfav_hc_instruction_pane_ParamLimits

0x5f1a,	// (0x000b310c) bg_myfav_hc_instruction_pane

0x5f32,	// (0x000b3124) cell_myfav_contact_pane_ParamLimits

0x5f32,	// (0x000b3124) cell_myfav_contact_pane

0x5f4e,	// (0x000b3140) cell_myfav_contact_pane_cp1_ParamLimits

0x5f4e,	// (0x000b3140) cell_myfav_contact_pane_cp1

0x5f66,	// (0x000b3158) cell_myfav_contact_pane_cp2_ParamLimits

0x5f66,	// (0x000b3158) cell_myfav_contact_pane_cp2

0x5f7e,	// (0x000b3170) cell_myfav_contact_pane_cp3_ParamLimits

0x5f7e,	// (0x000b3170) cell_myfav_contact_pane_cp3

0x5f95,	// (0x000b3187) cell_myfav_contact_pane_cp4_ParamLimits

0x5f95,	// (0x000b3187) cell_myfav_contact_pane_cp4

0x5fad,	// (0x000b319f) cell_myfav_contact_pane_cp5_ParamLimits

0x5fad,	// (0x000b319f) cell_myfav_contact_pane_cp5

0x5fc1,	// (0x000b31b3) cell_myfav_contact_pane_cp6_ParamLimits

0x5fc1,	// (0x000b31b3) cell_myfav_contact_pane_cp6

0x5fd7,	// (0x000b31c9) cell_myfav_contact_pane_cp7_ParamLimits

0x5fd7,	// (0x000b31c9) cell_myfav_contact_pane_cp7

0xd71f,	// (0x000ba911) listscroll_gen_pane_cp05

0x5fef,	// (0x000b31e1) main_myfav_hc_pane_g1_ParamLimits

0x5fef,	// (0x000b31e1) main_myfav_hc_pane_g1

0x6009,	// (0x000b31fb) main_myfav_hc_pane_g2_ParamLimits

0x6009,	// (0x000b31fb) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x000bcb3f) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x000bcb3f) main_myfav_hc_pane_g

0x603d,	// (0x000b322f) main_myfav_hc_pane_t1_ParamLimits

0x603d,	// (0x000b322f) main_myfav_hc_pane_t1

0xd728,	// (0x000ba91a) main_myfav_hc_pane_t2_ParamLimits

0xd728,	// (0x000ba91a) main_myfav_hc_pane_t2

0xd73a,	// (0x000ba92c) main_myfav_hc_pane_t3_ParamLimits

0xd73a,	// (0x000ba92c) main_myfav_hc_pane_t3

0x6054,	// (0x000b3246) main_myfav_hc_pane_t4_ParamLimits

0x6054,	// (0x000b3246) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000bcb46) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000bcb46) main_myfav_hc_pane_t

0xcc6b,	// (0x000b9e5d) bg_myfav_hc_instruction_pane_g1

0xd74c,	// (0x000ba93e) cell_myfav_contact_pane_g1_ParamLimits

0xd74c,	// (0x000ba93e) cell_myfav_contact_pane_g1

0xd74c,	// (0x000ba93e) cell_myfav_contact_pane_g2_ParamLimits

0xd74c,	// (0x000ba93e) cell_myfav_contact_pane_g2

0xd758,	// (0x000ba94a) cell_myfav_contact_pane_g3_ParamLimits

0xd758,	// (0x000ba94a) cell_myfav_contact_pane_g3

0xcf00,	// (0x000ba0f2) cell_myfav_contact_pane_g4_ParamLimits

0xcf00,	// (0x000ba0f2) cell_myfav_contact_pane_g4

0xd765,	// (0x000ba957) cell_myfav_contact_pane_g5_ParamLimits

0xd765,	// (0x000ba957) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000bcb51) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000bcb51) cell_myfav_contact_pane_g

0x6023,	// (0x000b3215) main_myfav_hc_pane_g3_ParamLimits

0x6023,	// (0x000b3215) main_myfav_hc_pane_g3

0xfdc3,	// (0x000acfb5) popup_adpt_find_window

0x607e,	// (0x000b3270) afind_page_pane_ParamLimits

0x607e,	// (0x000b3270) afind_page_pane

0x6093,	// (0x000b3285) aid_size_cell_afind_ParamLimits

0x6093,	// (0x000b3285) aid_size_cell_afind

0x60b1,	// (0x000b32a3) bg_popup_sub_pane_cp09_ParamLimits

0x60b1,	// (0x000b32a3) bg_popup_sub_pane_cp09

0x60be,	// (0x000b32b0) find_pane_cp01_ParamLimits

0x60be,	// (0x000b32b0) find_pane_cp01

0xd771,	// (0x000ba963) grid_afind_control_pane_ParamLimits

0xd771,	// (0x000ba963) grid_afind_control_pane

0x60cb,	// (0x000b32bd) grid_afind_pane_ParamLimits

0x60cb,	// (0x000b32bd) grid_afind_pane

0x60ed,	// (0x000b32df) cell_afind_pane_ParamLimits

0x60ed,	// (0x000b32df) cell_afind_pane

0xcc6b,	// (0x000b9e5d) afind_page_pane_g1

0x6154,	// (0x000b3346) afind_page_pane_g2

0x615d,	// (0x000b334f) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000bcb5c) afind_page_pane_g

0x6166,	// (0x000b3358) afind_page_pane_t1

0xd785,	// (0x000ba977) cell_afind_grid_control_pane_ParamLimits

0xd785,	// (0x000ba977) cell_afind_grid_control_pane

0xd579,	// (0x000ba76b) bg_button_pane_cp69_ParamLimits

0xd579,	// (0x000ba76b) bg_button_pane_cp69

0x6186,	// (0x000b3378) cell_afind_pane_g1_ParamLimits

0x6186,	// (0x000b3378) cell_afind_pane_g1

0x6193,	// (0x000b3385) cell_afind_pane_t1_ParamLimits

0x6193,	// (0x000b3385) cell_afind_pane_t1

0xaa7f,	// (0x000b7c71) bg_button_pane_cp72

0xd794,	// (0x000ba986) cell_afind_grid_control_pane_g1

0x30bd,	// (0x000b02af) aid_image_placing_area_ParamLimits

0x30bd,	// (0x000b02af) aid_image_placing_area

0xd23b,	// (0x000ba42d) field_vitu_entry_pane_g1_ParamLimits

0xd23b,	// (0x000ba42d) field_vitu_entry_pane_g1

0xd247,	// (0x000ba439) field_vitu_entry_pane_g2_ParamLimits

0xd247,	// (0x000ba439) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x000bca0d) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x000bca0d) field_vitu_entry_pane_g

0x52dd,	// (0x000b24cf) cell_vitu_itu_pane_g1_ParamLimits

0x531f,	// (0x000b2511) cell_vitu_itu_pane_t3_ParamLimits

0x531f,	// (0x000b2511) cell_vitu_itu_pane_t3

0xd51f,	// (0x000ba711) mp4_progress_pane_t1_ParamLimits

0xd538,	// (0x000ba72a) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x000bcaa2) mp4_progress_pane_t_ParamLimits

0xd551,	// (0x000ba743) mup_progress_pane_cp04_ParamLimits

0x6068,	// (0x000b325a) main_myfav_hc_pane_t5_ParamLimits

0x6068,	// (0x000b325a) main_myfav_hc_pane_t5

0xfc82,	// (0x000ace74) aid_zoom_text_primary

0xfdc3,	// (0x000acfb5) popup_adpt_find_window_ParamLimits

0x9568,	// (0x000b675a) main_cam_set_pane

0x5a90,	// (0x000b2c82) cam4_zoom_pane_ParamLimits

0x5a90,	// (0x000b2c82) cam4_zoom_pane

0x61a5,	// (0x000b3397) main_cam_set_pane_g1_ParamLimits

0x61a5,	// (0x000b3397) main_cam_set_pane_g1

0x61b3,	// (0x000b33a5) main_cam_set_pane_g2_ParamLimits

0x61b3,	// (0x000b33a5) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000bcb63) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000bcb63) main_cam_set_pane_g

0x61d4,	// (0x000b33c6) main_cam_set_pane_t1_ParamLimits

0x61d4,	// (0x000b33c6) main_cam_set_pane_t1

0x61ef,	// (0x000b33e1) main_cset_listscroll_pane_ParamLimits

0x61ef,	// (0x000b33e1) main_cset_listscroll_pane

0x6213,	// (0x000b3405) main_cset_slider_pane_ParamLimits

0x6213,	// (0x000b3405) main_cset_slider_pane

0xd7a5,	// (0x000ba997) main_cset_list_pane_ParamLimits

0xd7a5,	// (0x000ba997) main_cset_list_pane

0xd7b5,	// (0x000ba9a7) scroll_pane_cp028

0x623d,	// (0x000b342f) aid_area_touch_slider

0x6259,	// (0x000b344b) cset_slider_pane

0x6283,	// (0x000b3475) main_cset_slider_pane_g1

0x6298,	// (0x000b348a) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000bcb68) main_cset_slider_pane_g

0xd7ee,	// (0x000ba9e0) main_cset_slider_pane_t1

0x635a,	// (0x000b354c) main_cset_slider_pane_t2

0x6374,	// (0x000b3566) main_cset_slider_pane_t3

0x638e,	// (0x000b3580) main_cset_slider_pane_t4

0x63a8,	// (0x000b359a) main_cset_slider_pane_t5

0x63c6,	// (0x000b35b8) main_cset_slider_pane_t6

0x63db,	// (0x000b35cd) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000bcb8d) main_cset_slider_pane_t

0x64e7,	// (0x000b36d9) cset_list_set_pane_ParamLimits

0x64e7,	// (0x000b36d9) cset_list_set_pane

0x64fb,	// (0x000b36ed) aid_position_infowindow_above

0x6503,	// (0x000b36f5) aid_position_infowindow_below

0x650b,	// (0x000b36fd) cset_list_set_pane_g1_ParamLimits

0x650b,	// (0x000b36fd) cset_list_set_pane_g1

0x6517,	// (0x000b3709) cset_list_set_pane_g3_ParamLimits

0x6517,	// (0x000b3709) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x000bcbac) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x000bcbac) cset_list_set_pane_g

0x6526,	// (0x000b3718) cset_list_set_pane_t1_ParamLimits

0x6526,	// (0x000b3718) cset_list_set_pane_t1

0x9568,	// (0x000b675a) list_highlight_pane_cp021_ParamLimits

0x9568,	// (0x000b675a) list_highlight_pane_cp021

0xb4a9,	// (0x000b869b) cset_slider_pane_g1

0xb4bb,	// (0x000b86ad) cset_slider_pane_g2

0xb4b2,	// (0x000b86a4) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x000bcbb1) cset_slider_pane_g

0xa303,	// (0x000b74f5) aid_area_touch_cam4_zoom

0xa30b,	// (0x000b74fd) cam4_zoom_cont_pane

0xa313,	// (0x000b7505) cam4_zoom_pane_g1

0xa31b,	// (0x000b750d) cam4_zoom_pane_g2

0x653b,	// (0x000b372d) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x000bcbb8) cam4_zoom_pane_g

0xa323,	// (0x000b7515) cam4_zoom_cont_pane_g1

0xa32c,	// (0x000b751e) cam4_zoom_cont_pane_g2

0xa335,	// (0x000b7527) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x000bcbbf) cam4_zoom_cont_pane_g

0x590d,	// (0x000b2aff) call4_image_pane_ParamLimits

0x590d,	// (0x000b2aff) call4_image_pane

0xd585,	// (0x000ba777) call4_windows_conf_pane_ParamLimits

0xd5a0,	// (0x000ba792) popup_call4_audio_in_window_ParamLimits

0xd5a0,	// (0x000ba792) popup_call4_audio_in_window

0x9517,	// (0x000b6709) bg_popup_call2_act_pane_cp02

0xd602,	// (0x000ba7f4) call4_list_conf_pane

0xcc6b,	// (0x000b9e5d) call4_image_pane_g1

0xcc6b,	// (0x000b9e5d) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x000bc8ce) call4_image_pane_g

0xd88e,	// (0x000baa80) list_single_graphic_popup_conf4_pane_ParamLimits

0xd88e,	// (0x000baa80) list_single_graphic_popup_conf4_pane

0x9517,	// (0x000b6709) list_highlight_pane_cp022

0xd8a3,	// (0x000baa95) list_single_graphic_popup_conf4_pane_g1

0xb195,	// (0x000b8387) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x000bcbc6) list_single_graphic_popup_conf4_pane_g

0xd8ab,	// (0x000baa9d) list_single_graphic_popup_conf4_pane_t1

0x11b3,	// (0x000ae3a5) popup_vtel_slider_window_ParamLimits

0x11b3,	// (0x000ae3a5) popup_vtel_slider_window

0xd567,	// (0x000ba759) dialer2_ne_pane_t2_ParamLimits

0xd567,	// (0x000ba759) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x000bcaa7) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x000bcaa7) dialer2_ne_pane_t

0xca4a,	// (0x000b9c3c) bg_popup_sub_pane_cp010_ParamLimits

0xca4a,	// (0x000b9c3c) bg_popup_sub_pane_cp010

0x6543,	// (0x000b3735) popup_vtel_slider_window_g1_ParamLimits

0x6543,	// (0x000b3735) popup_vtel_slider_window_g1

0x6556,	// (0x000b3748) popup_vtel_slider_window_g2_ParamLimits

0x6556,	// (0x000b3748) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x000bcbcb) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x000bcbcb) popup_vtel_slider_window_g

0x65ac,	// (0x000b379e) vtel_slider_pane_ParamLimits

0x65ac,	// (0x000b379e) vtel_slider_pane

0x65ce,	// (0x000b37c0) vtel_slider_pane_g1_ParamLimits

0x65ce,	// (0x000b37c0) vtel_slider_pane_g1

0x65e2,	// (0x000b37d4) vtel_slider_pane_g2_ParamLimits

0x65e2,	// (0x000b37d4) vtel_slider_pane_g2

0x65fa,	// (0x000b37ec) vtel_slider_pane_g3_ParamLimits

0x65fa,	// (0x000b37ec) vtel_slider_pane_g3

0x65ce,	// (0x000b37c0) vtel_slider_pane_g4_ParamLimits

0x65ce,	// (0x000b37c0) vtel_slider_pane_g4

0x6610,	// (0x000b3802) vtel_slider_pane_g5_ParamLimits

0x6610,	// (0x000b3802) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x000bcbd4) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x000bcbd4) vtel_slider_pane_g

0x9568,	// (0x000b675a) main_gallery2_pane

0x5c94,	// (0x000b2e86) aid_size_row_itut2_dropdow_list_ParamLimits

0x5c94,	// (0x000b2e86) aid_size_row_itut2_dropdow_list

0x5d26,	// (0x000b2f18) grid_vitu2_function_top_pane_ParamLimits

0x5d26,	// (0x000b2f18) grid_vitu2_function_top_pane

0x5d85,	// (0x000b2f77) popup_vitu2_dropdown_list_window_ParamLimits

0x5d85,	// (0x000b2f77) popup_vitu2_dropdown_list_window

0x5dae,	// (0x000b2fa0) popup_vitu2_match_list_window

0x6626,	// (0x000b3818) cell_vitu2_function_top_pane_ParamLimits

0x6626,	// (0x000b3818) cell_vitu2_function_top_pane

0x6646,	// (0x000b3838) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6646,	// (0x000b3838) cell_vitu2_function_top_pane_cp01

0x6664,	// (0x000b3856) cell_vitu2_function_top_wide_pane_ParamLimits

0x6664,	// (0x000b3856) cell_vitu2_function_top_wide_pane

0xa25c,	// (0x000b744e) bg_button_pane_cp012

0x6682,	// (0x000b3874) cell_vitu2_function_top_pane_g1

0xa34c,	// (0x000b753e) bg_button_pane_cp013_ParamLimits

0xa34c,	// (0x000b753e) bg_button_pane_cp013

0x6696,	// (0x000b3888) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6696,	// (0x000b3888) cell_vitu2_function_top_wide_pane_g1

0xa25c,	// (0x000b744e) bg_popup_sub_pane_cp20

0x66ae,	// (0x000b38a0) list_vitu2_match_list_pane

0xd697,	// (0x000ba889) bg_popup_sub_pane_cp20_g1

0xd69f,	// (0x000ba891) bg_popup_sub_pane_cp20_g2

0xac8a,	// (0x000b7e7c) bg_popup_sub_pane_cp20_g3

0xd6a7,	// (0x000ba899) bg_popup_sub_pane_cp20_g4

0xac6a,	// (0x000b7e5c) bg_popup_sub_pane_cp20_g5

0xd8c1,	// (0x000baab3) bg_popup_sub_pane_cp20_g6

0xd6b7,	// (0x000ba8a9) bg_popup_sub_pane_cp20_g7

0xd6bf,	// (0x000ba8b1) bg_popup_sub_pane_cp20_g8

0xd6c7,	// (0x000ba8b9) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x000bcbdf) bg_popup_sub_pane_cp20_g

0xa368,	// (0x000b755a) list_vitu2_match_list_item_pane_ParamLimits

0xa368,	// (0x000b755a) list_vitu2_match_list_item_pane

0xa37a,	// (0x000b756c) list_vitu2_match_list_item_pane_t1

0x9cb1,	// (0x000b6ea3) bg_popup_sub_pane_cp21

0xa394,	// (0x000b7586) grid_vitu2_dropdown_list_pane

0x6704,	// (0x000b38f6) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6704,	// (0x000b38f6) cell_vitu2_dropdown_list_char_pane

0x6727,	// (0x000b3919) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6727,	// (0x000b3919) cell_vitu2_dropdown_list_ctrl_pane

0xd8c9,	// (0x000baabb) cell_vitu2_dropdown_list_char_pane_g1

0xd8d2,	// (0x000baac4) cell_vitu2_dropdown_list_char_pane_g2

0xd8db,	// (0x000baacd) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x000bcbfc) cell_vitu2_dropdown_list_char_pane_g

0x6755,	// (0x000b3947) cell_vitu2_dropdown_list_char_pane_t1

0x6763,	// (0x000b3955) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6763,	// (0x000b3955) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6773,	// (0x000b3965) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6773,	// (0x000b3965) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6784,	// (0x000b3976) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6784,	// (0x000b3976) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6794,	// (0x000b3986) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6794,	// (0x000b3986) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa1f9,	// (0x000b73eb) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa1f9,	// (0x000b73eb) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x000bcc03) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x000bcc03) cell_vitu2_dropdown_list_ctrl_pane_g

0x67b0,	// (0x000b39a2) aid_size_cell_gallery2_ParamLimits

0x67b0,	// (0x000b39a2) aid_size_cell_gallery2

0x67ce,	// (0x000b39c0) grid_gallery2_pane_ParamLimits

0x67ce,	// (0x000b39c0) grid_gallery2_pane

0x67e8,	// (0x000b39da) scroll_pane_cp029_ParamLimits

0x67e8,	// (0x000b39da) scroll_pane_cp029

0x67f4,	// (0x000b39e6) cell_gallery2_pane_ParamLimits

0x67f4,	// (0x000b39e6) cell_gallery2_pane

0xd8e4,	// (0x000baad6) cell_gallery2_pane_g2

0x6855,	// (0x000b3a47) cell_gallery2_pane_g3

0xd8ec,	// (0x000baade) cell_gallery2_pane_g4

0xd8f4,	// (0x000baae6) cell_gallery2_pane_g5

0xb363,	// (0x000b8555) grid_highlight_pane_cp10

0x5dae,	// (0x000b2fa0) popup_vitu2_match_list_window_ParamLimits

0x5dc5,	// (0x000b2fb7) popup_vitu2_query_window_ParamLimits

0x5dc5,	// (0x000b2fb7) popup_vitu2_query_window

0x9cb1,	// (0x000b6ea3) bg_vitu2_candi_button_pane

0xd8c9,	// (0x000baabb) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8d2,	// (0x000baac4) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8db,	// (0x000baacd) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x685d,	// (0x000b3a4f) bg_button_pane_cp015

0x6871,	// (0x000b3a63) bg_button_pane_cp016

0x6884,	// (0x000b3a76) bg_button_pane_cp017

0xc81a,	// (0x000b9a0c) bg_popup_sub_pane_cp22

0xd8fc,	// (0x000baaee) popup_vitu2_query_window_g1

0x68c9,	// (0x000b3abb) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x000bcc0e) popup_vitu2_query_window_g

0x68e8,	// (0x000b3ada) popup_vitu2_query_window_t1_ParamLimits

0x68e8,	// (0x000b3ada) popup_vitu2_query_window_t1

0x691d,	// (0x000b3b0f) popup_vitu2_query_window_t2_ParamLimits

0x691d,	// (0x000b3b0f) popup_vitu2_query_window_t2

0x692f,	// (0x000b3b21) popup_vitu2_query_window_t3_ParamLimits

0x692f,	// (0x000b3b21) popup_vitu2_query_window_t3

0x6957,	// (0x000b3b49) popup_vitu2_query_window_t4_ParamLimits

0x6957,	// (0x000b3b49) popup_vitu2_query_window_t4

0x6978,	// (0x000b3b6a) popup_vitu2_query_window_t5_ParamLimits

0x6978,	// (0x000b3b6a) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x000bcc15) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x000bcc15) popup_vitu2_query_window_t

0xd79d,	// (0x000ba98f) main_cset_text_pane

0x623d,	// (0x000b342f) aid_area_touch_slider_ParamLimits

0x6259,	// (0x000b344b) cset_slider_pane_ParamLimits

0x6283,	// (0x000b3475) main_cset_slider_pane_g1_ParamLimits

0x6298,	// (0x000b348a) main_cset_slider_pane_g2_ParamLimits

0xd7be,	// (0x000ba9b0) main_cset_slider_pane_g3_ParamLimits

0xd7be,	// (0x000ba9b0) main_cset_slider_pane_g3

0x62ad,	// (0x000b349f) main_cset_slider_pane_g4_ParamLimits

0x62ad,	// (0x000b349f) main_cset_slider_pane_g4

0x62bc,	// (0x000b34ae) main_cset_slider_pane_g5_ParamLimits

0x62bc,	// (0x000b34ae) main_cset_slider_pane_g5

0x62ca,	// (0x000b34bc) main_cset_slider_pane_g6_ParamLimits

0x62ca,	// (0x000b34bc) main_cset_slider_pane_g6

0xf976,	// (0x000bcb68) main_cset_slider_pane_g_ParamLimits

0xd7ee,	// (0x000ba9e0) main_cset_slider_pane_t1_ParamLimits

0x635a,	// (0x000b354c) main_cset_slider_pane_t2_ParamLimits

0x6374,	// (0x000b3566) main_cset_slider_pane_t3_ParamLimits

0x638e,	// (0x000b3580) main_cset_slider_pane_t4_ParamLimits

0x63a8,	// (0x000b359a) main_cset_slider_pane_t5_ParamLimits

0x63c6,	// (0x000b35b8) main_cset_slider_pane_t6_ParamLimits

0x63db,	// (0x000b35cd) main_cset_slider_pane_t7_ParamLimits

0x6409,	// (0x000b35fb) main_cset_slider_pane_t8_ParamLimits

0x6409,	// (0x000b35fb) main_cset_slider_pane_t8

0x6431,	// (0x000b3623) main_cset_slider_pane_t9_ParamLimits

0x6431,	// (0x000b3623) main_cset_slider_pane_t9

0x6459,	// (0x000b364b) main_cset_slider_pane_t10_ParamLimits

0x6459,	// (0x000b364b) main_cset_slider_pane_t10

0x6481,	// (0x000b3673) main_cset_slider_pane_t11_ParamLimits

0x6481,	// (0x000b3673) main_cset_slider_pane_t11

0x64ab,	// (0x000b369d) main_cset_slider_pane_t12_ParamLimits

0x64ab,	// (0x000b369d) main_cset_slider_pane_t12

0x64c8,	// (0x000b36ba) main_cset_slider_pane_t13_ParamLimits

0x64c8,	// (0x000b36ba) main_cset_slider_pane_t13

0xf99b,	// (0x000bcb8d) main_cset_slider_pane_t_ParamLimits

0x9517,	// (0x000b6709) bg_popup_sub_pane_cp011

0xd908,	// (0x000baafa) main_cset_text_pane_g1

0xd910,	// (0x000bab02) main_cset_text_pane_t1

0xd91e,	// (0x000bab10) main_cset_text_pane_t2

0xd92c,	// (0x000bab1e) main_cset_text_pane_t3

0xd93a,	// (0x000bab2c) main_cset_text_pane_t4

0xd948,	// (0x000bab3a) main_cset_text_pane_t5

0xd956,	// (0x000bab48) main_cset_text_pane_t6

0xd964,	// (0x000bab56) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x000bcc24) main_cset_text_pane_t

0x9517,	// (0x000b6709) main_cam4_burst_pane

0x9517,	// (0x000b6709) main_cam5_pane

0x6174,	// (0x000b3366) bg_button_pane_cp019

0x617d,	// (0x000b336f) bg_button_pane_cp020

0xd7ca,	// (0x000ba9bc) main_cset_slider_pane_g7_ParamLimits

0xd7ca,	// (0x000ba9bc) main_cset_slider_pane_g7

0xd7d6,	// (0x000ba9c8) main_cset_slider_pane_g8_ParamLimits

0xd7d6,	// (0x000ba9c8) main_cset_slider_pane_g8

0x62de,	// (0x000b34d0) main_cset_slider_pane_g9_ParamLimits

0x62de,	// (0x000b34d0) main_cset_slider_pane_g9

0x62ea,	// (0x000b34dc) main_cset_slider_pane_g10_ParamLimits

0x62ea,	// (0x000b34dc) main_cset_slider_pane_g10

0x62f6,	// (0x000b34e8) main_cset_slider_pane_g11_ParamLimits

0x62f6,	// (0x000b34e8) main_cset_slider_pane_g11

0x6302,	// (0x000b34f4) main_cset_slider_pane_g12_ParamLimits

0x6302,	// (0x000b34f4) main_cset_slider_pane_g12

0x630e,	// (0x000b3500) main_cset_slider_pane_g13_ParamLimits

0x630e,	// (0x000b3500) main_cset_slider_pane_g13

0x631a,	// (0x000b350c) main_cset_slider_pane_g14_ParamLimits

0x631a,	// (0x000b350c) main_cset_slider_pane_g14

0x6326,	// (0x000b3518) main_cset_slider_pane_g15_ParamLimits

0x6326,	// (0x000b3518) main_cset_slider_pane_g15

0xd81c,	// (0x000baa0e) main_cset_slider_pane_t14_ParamLimits

0xd81c,	// (0x000baa0e) main_cset_slider_pane_t14

0xd855,	// (0x000baa47) main_cset_slider_pane_t15_ParamLimits

0xd855,	// (0x000baa47) main_cset_slider_pane_t15

0x69ef,	// (0x000b3be1) aid_cam4_burst_size_cell_ParamLimits

0x69ef,	// (0x000b3be1) aid_cam4_burst_size_cell

0x6a0f,	// (0x000b3c01) grid_cam4_burst_pane_ParamLimits

0x6a0f,	// (0x000b3c01) grid_cam4_burst_pane

0x6a49,	// (0x000b3c3b) linegrid_cam4_burst_pane_ParamLimits

0x6a49,	// (0x000b3c3b) linegrid_cam4_burst_pane

0xd972,	// (0x000bab64) scroll_pane_cp30_ParamLimits

0xd972,	// (0x000bab64) scroll_pane_cp30

0x6a6b,	// (0x000b3c5d) cell_cam4_burst_pane_ParamLimits

0x6a6b,	// (0x000b3c5d) cell_cam4_burst_pane

0xd97e,	// (0x000bab70) linegrid_cam4_burst_pane_g1_ParamLimits

0xd97e,	// (0x000bab70) linegrid_cam4_burst_pane_g1

0x6ac0,	// (0x000b3cb2) linegrid_cam4_burst_pane_g2_ParamLimits

0x6ac0,	// (0x000b3cb2) linegrid_cam4_burst_pane_g2

0xd98b,	// (0x000bab7d) linegrid_cam4_burst_pane_g3_ParamLimits

0xd98b,	// (0x000bab7d) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x000bcc33) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x000bcc33) linegrid_cam4_burst_pane_g

0x6ad1,	// (0x000b3cc3) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6ad1,	// (0x000b3cc3) linegrid_cam4_burst_pane_g3_copy1

0xd998,	// (0x000bab8a) linegrid_cam4_burst_pane_g4_ParamLimits

0xd998,	// (0x000bab8a) linegrid_cam4_burst_pane_g4

0x6aef,	// (0x000b3ce1) linegrid_cam4_burst_pane_g5_ParamLimits

0x6aef,	// (0x000b3ce1) linegrid_cam4_burst_pane_g5

0x6b00,	// (0x000b3cf2) linegrid_cam4_burst_pane_g6_ParamLimits

0x6b00,	// (0x000b3cf2) linegrid_cam4_burst_pane_g6

0xd9a5,	// (0x000bab97) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9a5,	// (0x000bab97) linegrid_cam4_burst_pane_g7

0x6b17,	// (0x000b3d09) cell_cam4_burst_pane_g1

0xd9be,	// (0x000babb0) main_cam5_pane_t1_ParamLimits

0xd9be,	// (0x000babb0) main_cam5_pane_t1

0xd9d0,	// (0x000babc2) main_cam5_pane_t2_ParamLimits

0xd9d0,	// (0x000babc2) main_cam5_pane_t2

0xd9e2,	// (0x000babd4) main_cam5_pane_t3_ParamLimits

0xd9e2,	// (0x000babd4) main_cam5_pane_t3

0xd9f4,	// (0x000babe6) main_cam5_pane_t4_ParamLimits

0xd9f4,	// (0x000babe6) main_cam5_pane_t4

0xda0c,	// (0x000babfe) main_cam5_pane_t5_ParamLimits

0xda0c,	// (0x000babfe) main_cam5_pane_t5

0xda20,	// (0x000bac12) main_cam5_pane_t6_ParamLimits

0xda20,	// (0x000bac12) main_cam5_pane_t6

0xda34,	// (0x000bac26) main_cam5_pane_t7_ParamLimits

0xda34,	// (0x000bac26) main_cam5_pane_t7

0xda46,	// (0x000bac38) main_cam5_pane_t8_ParamLimits

0xda46,	// (0x000bac38) main_cam5_pane_t8

0xda64,	// (0x000bac56) main_cam5_pane_t9_ParamLimits

0xda64,	// (0x000bac56) main_cam5_pane_t9

0xda76,	// (0x000bac68) main_cam5_pane_t10_ParamLimits

0xda76,	// (0x000bac68) main_cam5_pane_t10

0xda88,	// (0x000bac7a) main_cam5_pane_t11_ParamLimits

0xda88,	// (0x000bac7a) main_cam5_pane_t11

0xda9c,	// (0x000bac8e) main_cam5_pane_t12_ParamLimits

0xda9c,	// (0x000bac8e) main_cam5_pane_t12

0xdab3,	// (0x000baca5) main_cam5_pane_t13_ParamLimits

0xdab3,	// (0x000baca5) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x000bcc3f) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x000bcc3f) main_cam5_pane_t

0xfe46,	// (0x000ad038) popup_scut_keymap_window_ParamLimits

0xfe46,	// (0x000ad038) popup_scut_keymap_window

0x6b2a,	// (0x000b3d1c) aid_size_cell_brow_shortcut

0xb363,	// (0x000b8555) bg_popup_window_pane_cp010

0x6b36,	// (0x000b3d28) grid_scut_pane

0x6b42,	// (0x000b3d34) cell_scut_pane_ParamLimits

0x6b42,	// (0x000b3d34) cell_scut_pane

0x6b5b,	// (0x000b3d4d) cell_scut_pane_g1

0xdad6,	// (0x000bacc8) cell_scut_pane_t1

0xdae5,	// (0x000bacd7) cell_scut_pane_t2

0x6b64,	// (0x000b3d56) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x000bcc5a) cell_scut_pane_t

0x47a6,	// (0x000b1998) main_mup3_pane_g8_ParamLimits

0x47a6,	// (0x000b1998) main_mup3_pane_g8

0x5cb0,	// (0x000b2ea2) area_vitu2_query_pane_ParamLimits

0x5cb0,	// (0x000b2ea2) area_vitu2_query_pane

0x6897,	// (0x000b3a89) input_focus_pane_cp08

0xdaf4,	// (0x000bace6) area_vitu2_query_pane_g1

0x6b72,	// (0x000b3d64) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x000bcc61) area_vitu2_query_pane_g

0x6b85,	// (0x000b3d77) area_vitu2_query_pane_t1_ParamLimits

0x6b85,	// (0x000b3d77) area_vitu2_query_pane_t1

0x6b99,	// (0x000b3d8b) area_vitu2_query_pane_t2_ParamLimits

0x6b99,	// (0x000b3d8b) area_vitu2_query_pane_t2

0x6bad,	// (0x000b3d9f) area_vitu2_query_pane_t3_ParamLimits

0x6bad,	// (0x000b3d9f) area_vitu2_query_pane_t3

0xa39c,	// (0x000b758e) area_vitu2_query_pane_t4_ParamLimits

0xa39c,	// (0x000b758e) area_vitu2_query_pane_t4

0xa3c4,	// (0x000b75b6) area_vitu2_query_pane_t5_ParamLimits

0xa3c4,	// (0x000b75b6) area_vitu2_query_pane_t5

0xa3ec,	// (0x000b75de) area_vitu2_query_pane_t6_ParamLimits

0xa3ec,	// (0x000b75de) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x000bcc66) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x000bcc66) area_vitu2_query_pane_t

0x6bd5,	// (0x000b3dc7) bg_button_pane_cp018

0x6be3,	// (0x000b3dd5) bg_button_pane_cp021

0x6bef,	// (0x000b3de1) bg_button_pane_cp022

0x6c00,	// (0x000b3df2) input_focus_pane_cp09

0x2611,	// (0x000af803) aid_size_touch_mv_arrow_left

0x263a,	// (0x000af82c) aid_size_touch_mv_arrow_right

0x633e,	// (0x000b3530) main_cset_slider_pane_g16_ParamLimits

0x633e,	// (0x000b3530) main_cset_slider_pane_g16

0x634c,	// (0x000b353e) main_cset_slider_pane_g17_ParamLimits

0x634c,	// (0x000b353e) main_cset_slider_pane_g17

0x6b17,	// (0x000b3d09) cell_cam4_burst_pane_g1_ParamLimits

0x9517,	// (0x000b6709) compa_mode_pane

0x6566,	// (0x000b3758) popup_vtel_slider_window_g3_ParamLimits

0x6566,	// (0x000b3758) popup_vtel_slider_window_g3

0x657d,	// (0x000b376f) popup_vtel_slider_window_g4_ParamLimits

0x657d,	// (0x000b376f) popup_vtel_slider_window_g4

0x6594,	// (0x000b3786) popup_vtel_slider_window_t1_ParamLimits

0x6594,	// (0x000b3786) popup_vtel_slider_window_t1

0x9517,	// (0x000b6709) main_cl_pane

0xc846,	// (0x000b9a38) popup_imed_adjust2_window_ParamLimits

0xc81a,	// (0x000b9a0c) bg_tb_trans_pane_cp05_ParamLimits

0xd170,	// (0x000ba362) popup_imed_adjust2_window_g1_ParamLimits

0xd17f,	// (0x000ba371) popup_imed_adjust2_window_g2_ParamLimits

0xd17f,	// (0x000ba371) popup_imed_adjust2_window_g2

0xd18b,	// (0x000ba37d) popup_imed_adjust2_window_g3_ParamLimits

0xd18b,	// (0x000ba37d) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x000bc9d1) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x000bc9d1) popup_imed_adjust2_window_g

0xd197,	// (0x000ba389) popup_imed_adjust2_window_t1_ParamLimits

0xd1af,	// (0x000ba3a1) slider_imed_adjust_pane_ParamLimits

0xd1c3,	// (0x000ba3b5) slider_imed_adjust_pane_g1_ParamLimits

0xd1d3,	// (0x000ba3c5) slider_imed_adjust_pane_g2_ParamLimits

0xd1e3,	// (0x000ba3d5) slider_imed_adjust_pane_g3_ParamLimits

0xd1f4,	// (0x000ba3e6) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x000bc9d8) slider_imed_adjust_pane_g_ParamLimits

0x5a30,	// (0x000b2c22) aid_touch_area_cam4_ParamLimits

0x5a30,	// (0x000b2c22) aid_touch_area_cam4

0xa1db,	// (0x000b73cd) battery_pane_cp01

0x5b02,	// (0x000b2cf4) main_camera4_pane_g6_ParamLimits

0x5b02,	// (0x000b2cf4) main_camera4_pane_g6

0x5b2c,	// (0x000b2d1e) main_camera4_pane_t2_ParamLimits

0x5b2c,	// (0x000b2d1e) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x000bcadb) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x000bcadb) main_camera4_pane_t

0x5b61,	// (0x000b2d53) aid_touch_area_vid4_ParamLimits

0x5b61,	// (0x000b2d53) aid_touch_area_vid4

0x5bb5,	// (0x000b2da7) main_video4_pane_g5_ParamLimits

0x5bb5,	// (0x000b2da7) main_video4_pane_g5

0x5bda,	// (0x000b2dcc) vid4_progress_pane_ParamLimits

0x5bda,	// (0x000b2dcc) vid4_progress_pane

0xd7e2,	// (0x000ba9d4) main_cset_slider_pane_g18_ParamLimits

0xd7e2,	// (0x000ba9d4) main_cset_slider_pane_g18

0xd9b2,	// (0x000baba4) cell_cam4_burst_pane_g2_ParamLimits

0xd9b2,	// (0x000baba4) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x000bcc3a) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x000bcc3a) cell_cam4_burst_pane_g

0xa861,	// (0x000b7a53) bg_cl_pane_ParamLimits

0xa861,	// (0x000b7a53) bg_cl_pane

0x6c11,	// (0x000b3e03) cl_header_pane_ParamLimits

0x6c11,	// (0x000b3e03) cl_header_pane

0x6c25,	// (0x000b3e17) cl_listscroll_pane_ParamLimits

0x6c25,	// (0x000b3e17) cl_listscroll_pane

0xdb00,	// (0x000bacf2) bg_cl_pane_g1

0xdb08,	// (0x000bacfa) bg_cl_pane_g2

0xdb10,	// (0x000bad02) bg_cl_pane_g3

0xdb18,	// (0x000bad0a) bg_cl_pane_g4

0xdb20,	// (0x000bad12) bg_cl_pane_g5

0xdb28,	// (0x000bad1a) bg_cl_pane_g6

0xdb30,	// (0x000bad22) bg_cl_pane_g7

0xdb38,	// (0x000bad2a) bg_cl_pane_g8

0xdb40,	// (0x000bad32) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x000bcc75) bg_cl_pane_g

0x6c35,	// (0x000b3e27) aid_height_cl_leading_ParamLimits

0x6c35,	// (0x000b3e27) aid_height_cl_leading

0x6c41,	// (0x000b3e33) aid_height_cl_text_ParamLimits

0x6c41,	// (0x000b3e33) aid_height_cl_text

0x9568,	// (0x000b675a) bg_cl_header_pane_ParamLimits

0x9568,	// (0x000b675a) bg_cl_header_pane

0x6c60,	// (0x000b3e52) cl_header_pane_g1_ParamLimits

0x6c60,	// (0x000b3e52) cl_header_pane_g1

0x6c76,	// (0x000b3e68) cl_header_pane_t1_ParamLimits

0x6c76,	// (0x000b3e68) cl_header_pane_t1

0xdb48,	// (0x000bad3a) cl_list_pane

0xd7b5,	// (0x000ba9a7) hc_scroll_pane_cp01

0xac6a,	// (0x000b7e5c) bg_cl_header_pane_g1

0xd697,	// (0x000ba889) bg_cl_header_pane_g2

0xac8a,	// (0x000b7e7c) bg_cl_header_pane_g3

0xd6a7,	// (0x000ba899) bg_cl_header_pane_g4

0xd69f,	// (0x000ba891) bg_cl_header_pane_g5

0xd8c1,	// (0x000baab3) bg_cl_header_pane_g6

0xd6bf,	// (0x000ba8b1) bg_cl_header_pane_g7

0xd6c7,	// (0x000ba8b9) bg_cl_header_pane_g8

0xd6b7,	// (0x000ba8a9) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x000bcc88) bg_cl_header_pane_g

0x6c8f,	// (0x000b3e81) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6c8f,	// (0x000b3e81) hc_cl_list_double_graphic_heading_pane

0x6ca2,	// (0x000b3e94) hc_cl_list_single_graphic_pane_ParamLimits

0x6ca2,	// (0x000b3e94) hc_cl_list_single_graphic_pane

0x6cba,	// (0x000b3eac) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6cba,	// (0x000b3eac) hc_cl_list_single_graphic_pane_g1

0x6cc6,	// (0x000b3eb8) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6cc6,	// (0x000b3eb8) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x000bcc9b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x000bcc9b) hc_cl_list_single_graphic_pane_g

0x6cda,	// (0x000b3ecc) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6cda,	// (0x000b3ecc) hc_cl_list_single_graphic_pane_t1

0x6cba,	// (0x000b3eac) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6cba,	// (0x000b3eac) hc_cl_list_double_graphic_heading_pane_g1

0x6cef,	// (0x000b3ee1) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6cef,	// (0x000b3ee1) hc_cl_list_double_graphic_heading_pane_g2

0x6d03,	// (0x000b3ef5) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6d03,	// (0x000b3ef5) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x000bcca0) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x000bcca0) hc_cl_list_double_graphic_heading_pane_g

0x6d17,	// (0x000b3f09) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6d17,	// (0x000b3f09) hc_cl_list_double_graphic_heading_pane_t1

0x6d2c,	// (0x000b3f1e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6d2c,	// (0x000b3f1e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x000bcca7) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x000bcca7) hc_cl_list_double_graphic_heading_pane_t

0x6d41,	// (0x000b3f33) vid4_progress_pane_g1

0x6d53,	// (0x000b3f45) vid4_progress_pane_g2

0x9e8c,	// (0x000b707e) vid4_progress_pane_g3

0xa440,	// (0x000b7632) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x000bccac) vid4_progress_pane_g

0xa45e,	// (0x000b7650) vid4_progress_pane_t1

0xa473,	// (0x000b7665) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x000bccb7) vid4_progress_pane_t

0xa49e,	// (0x000b7690) wait_bar_pane_cp07

0xca58,	// (0x000b9c4a) blid_firmament_pane_ParamLimits

0xca9b,	// (0x000b9c8d) popup_blid_sat_info2_window_g1

0xcabf,	// (0x000b9cb1) popup_blid_sat_info2_window_t3

0xcacd,	// (0x000b9cbf) popup_blid_sat_info2_window_t4

0xcadb,	// (0x000b9ccd) popup_blid_sat_info2_window_t5

0xcae9,	// (0x000b9cdb) popup_blid_sat_info2_window_t6

0xcaf9,	// (0x000b9ceb) popup_blid_sat_info2_window_t7

0xcb07,	// (0x000b9cf9) popup_blid_sat_info2_window_t8

0xcb15,	// (0x000b9d07) popup_blid_sat_info2_window_t9

0xcb23,	// (0x000b9d15) popup_blid_sat_info2_window_t10

0xcbeb,	// (0x000b9ddd) aid_firma_cardinal_ParamLimits

0xcbff,	// (0x000b9df1) blid_firmament_pane_t1_ParamLimits

0xcc16,	// (0x000b9e08) blid_firmament_pane_t2_ParamLimits

0xcc2d,	// (0x000b9e1f) blid_firmament_pane_t3_ParamLimits

0xcc44,	// (0x000b9e36) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x000bc8c5) blid_firmament_pane_t_ParamLimits

0xcc5b,	// (0x000b9e4d) blid_sat_info_pane_ParamLimits

0x9568,	// (0x000b675a) main_cam_set_pane_ParamLimits

0x5087,	// (0x000b2279) aid_size_cell_colour_35_ParamLimits

0x50a7,	// (0x000b2299) aid_size_cell_colour_112_ParamLimits

0x50c7,	// (0x000b22b9) aid_size_cell_effect_ParamLimits

0xc81a,	// (0x000b9a0c) bg_tb_trans_pane_cp02_ParamLimits

0xaec3,	// (0x000b80b5) heading_imed_pane_ParamLimits

0x50e7,	// (0x000b22d9) listscroll_imed_pane_ParamLimits

0xbe3c,	// (0x000b902e) popup_call2_audio_first_window_g5_ParamLimits

0xbe3c,	// (0x000b902e) popup_call2_audio_first_window_g5

0x5698,	// (0x000b288a) aid_size_touch_image3_arrow_left_ParamLimits

0x5698,	// (0x000b288a) aid_size_touch_image3_arrow_left

0x56c4,	// (0x000b28b6) aid_size_touch_image3_arrow_right_ParamLimits

0x56c4,	// (0x000b28b6) aid_size_touch_image3_arrow_right

0xa489,	// (0x000b767b) vid4_progress_pane_t3

0x5406,	// (0x000b25f8) main_hwr_training_symbol_option_pane_ParamLimits

0x5406,	// (0x000b25f8) main_hwr_training_symbol_option_pane

0xd45f,	// (0x000ba651) popup_hwr_training_preview_window_ParamLimits

0xd45f,	// (0x000ba651) popup_hwr_training_preview_window

0x5426,	// (0x000b2618) hwr_training_navi_pane_g5_ParamLimits

0x5426,	// (0x000b2618) hwr_training_navi_pane_g5

0xd685,	// (0x000ba877) popup_char_count_window

0xa25c,	// (0x000b744e) bg_popup_sub_pane_cp20_ParamLimits

0x66ae,	// (0x000b38a0) list_vitu2_match_list_pane_ParamLimits

0x66bd,	// (0x000b38af) vitu2_page_scroll_pane_ParamLimits

0x66bd,	// (0x000b38af) vitu2_page_scroll_pane

0xdb51,	// (0x000bad43) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb51,	// (0x000bad43) list_single_hwr_training_symbol_option_pane

0xdb64,	// (0x000bad56) list_single_hwr_training_symbol_option_pane_g1

0xdb6c,	// (0x000bad5e) list_single_hwr_training_symbol_option_pane_t1

0xdb7a,	// (0x000bad6c) bg_button_pane_cp023

0xdb83,	// (0x000bad75) bg_button_pane_cp024

0x6d9d,	// (0x000b3f8f) vitu2_page_scroll_pane_g1

0x6da5,	// (0x000b3f97) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x000bccbe) vitu2_page_scroll_pane_g

0x6daf,	// (0x000b3fa1) vitu2_page_scroll_pane_t1

0xc9b8,	// (0x000b9baa) popup_char_count_window_g1

0xdbb6,	// (0x000bada8) popup_char_count_window_g2

0xdbbf,	// (0x000badb1) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x000bccc3) popup_char_count_window_g

0xdbc8,	// (0x000badba) popup_char_count_window_t1

0x9517,	// (0x000b6709) main_vded2_pane

0xd15c,	// (0x000ba34e) aid_size_cell_imed_line

0xd166,	// (0x000ba358) grid_imed_line_width_pane

0xa2b1,	// (0x000b74a3) vid4_indicators_pane_g4

0xdbd6,	// (0x000badc8) cell_imed_line_width_pane_ParamLimits

0xdbd6,	// (0x000badc8) cell_imed_line_width_pane

0xdbec,	// (0x000badde) cell_imed_line_width_pane_g1

0xcf77,	// (0x000ba169) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x000bccca) cell_imed_line_width_pane_g

0x6dbe,	// (0x000b3fb0) main_vded2_pane_g1_ParamLimits

0x6dbe,	// (0x000b3fb0) main_vded2_pane_g1

0x6dd9,	// (0x000b3fcb) main_vded2_pane_g2_ParamLimits

0x6dd9,	// (0x000b3fcb) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x000bcccf) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x000bcccf) main_vded2_pane_g

0x6deb,	// (0x000b3fdd) vded2_slider_pane_ParamLimits

0x6deb,	// (0x000b3fdd) vded2_slider_pane

0x6dfb,	// (0x000b3fed) aid_size_touch_vded2_end

0x6e05,	// (0x000b3ff7) aid_size_touch_vded2_playhead

0xdbf5,	// (0x000bade7) aid_size_touch_vded2_start

0xdbfd,	// (0x000badef) vded2_slider_bg_pane

0xdc06,	// (0x000badf8) vded2_slider_pane_g1

0xdc0f,	// (0x000bae01) vded2_slider_pane_g2

0x6e0f,	// (0x000b4001) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x000bccd4) vded2_slider_pane_g

0xdc17,	// (0x000bae09) vded2_slider_bg_pane_g1

0xdc20,	// (0x000bae12) vded2_slider_bg_pane_g2

0xdc29,	// (0x000bae1b) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x000bccdb) vded2_slider_bg_pane_g

0x2cfc,	// (0x000afeee) aid_postcard_touch_down_pane_ParamLimits

0x2cfc,	// (0x000afeee) aid_postcard_touch_down_pane

0x2d14,	// (0x000aff06) aid_postcard_touch_up_pane_ParamLimits

0x2d14,	// (0x000aff06) aid_postcard_touch_up_pane

0x9517,	// (0x000b6709) main_blid2_pane

0xc828,	// (0x000b9a1a) popup_blid2_search_window

0x9517,	// (0x000b6709) blid2_gps_pane

0x9517,	// (0x000b6709) blid2_navig_pane

0x9517,	// (0x000b6709) blid2_search_pane

0x9517,	// (0x000b6709) blid2_tripm_pane

0x6e1a,	// (0x000b400c) blid2_search_pane_g1_ParamLimits

0x6e1a,	// (0x000b400c) blid2_search_pane_g1

0x6e2d,	// (0x000b401f) blid2_search_pane_t1_ParamLimits

0x6e2d,	// (0x000b401f) blid2_search_pane_t1

0x6e3f,	// (0x000b4031) aid_size_cell_blid2_gps_ParamLimits

0x6e3f,	// (0x000b4031) aid_size_cell_blid2_gps

0x6e57,	// (0x000b4049) blid2_gps_pane_g1_ParamLimits

0x6e57,	// (0x000b4049) blid2_gps_pane_g1

0x6e6b,	// (0x000b405d) grid_blid2_satellite_pane_ParamLimits

0x6e6b,	// (0x000b405d) grid_blid2_satellite_pane

0x6e83,	// (0x000b4075) blid2_navig_pane_g1_ParamLimits

0x6e83,	// (0x000b4075) blid2_navig_pane_g1

0x6e8f,	// (0x000b4081) blid2_navig_pane_t1_ParamLimits

0x6e8f,	// (0x000b4081) blid2_navig_pane_t1

0x6eaa,	// (0x000b409c) blid2_navig_pane_t2_ParamLimits

0x6eaa,	// (0x000b409c) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x000bcce2) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x000bcce2) blid2_navig_pane_t

0x6ec5,	// (0x000b40b7) blid2_navig_ring_pane_ParamLimits

0x6ec5,	// (0x000b40b7) blid2_navig_ring_pane

0x6ee0,	// (0x000b40d2) blid2_speed_pane_ParamLimits

0x6ee0,	// (0x000b40d2) blid2_speed_pane

0x6eec,	// (0x000b40de) blid2_tripm_pane_g1_ParamLimits

0x6eec,	// (0x000b40de) blid2_tripm_pane_g1

0x6f07,	// (0x000b40f9) blid2_tripm_pane_g2_ParamLimits

0x6f07,	// (0x000b40f9) blid2_tripm_pane_g2

0x6f1b,	// (0x000b410d) blid2_tripm_pane_g3_ParamLimits

0x6f1b,	// (0x000b410d) blid2_tripm_pane_g3

0x6f2f,	// (0x000b4121) blid2_tripm_pane_g4_ParamLimits

0x6f2f,	// (0x000b4121) blid2_tripm_pane_g4

0x6f43,	// (0x000b4135) blid2_tripm_pane_g5_ParamLimits

0x6f43,	// (0x000b4135) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x000bcce7) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x000bcce7) blid2_tripm_pane_g

0x6f69,	// (0x000b415b) blid2_tripm_pane_t1_ParamLimits

0x6f69,	// (0x000b415b) blid2_tripm_pane_t1

0x6f82,	// (0x000b4174) blid2_tripm_pane_t2_ParamLimits

0x6f82,	// (0x000b4174) blid2_tripm_pane_t2

0x6f9b,	// (0x000b418d) blid2_tripm_pane_t3_ParamLimits

0x6f9b,	// (0x000b418d) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x000bccf4) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x000bccf4) blid2_tripm_pane_t

0x6fe2,	// (0x000b41d4) cell_blid2_satellite_pane_ParamLimits

0x6fe2,	// (0x000b41d4) cell_blid2_satellite_pane

0x7000,	// (0x000b41f2) cell_blid2_satellite_pane_g1

0xdc32,	// (0x000bae24) cell_blid2_satellite_pane_t1

0xcc6b,	// (0x000b9e5d) blid2_speed_pane_g1

0xdc40,	// (0x000bae32) blid2_speed_pane_t1

0xdc4e,	// (0x000bae40) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x000bccfd) blid2_speed_pane_t

0xcc6b,	// (0x000b9e5d) blid2_navig_ring_pane_g1

0x7009,	// (0x000b41fb) blid2_navig_ring_pane_g2

0x7011,	// (0x000b4203) blid2_navig_ring_pane_g3

0x7019,	// (0x000b420b) blid2_navig_ring_pane_g4

0x7021,	// (0x000b4213) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x000bcd02) blid2_navig_ring_pane_g

0x9517,	// (0x000b6709) bg_popup_window_pane_cp011

0xdc5c,	// (0x000bae4e) popup_blid2_search_window_g1

0xdc64,	// (0x000bae56) popup_blid2_search_window_t1

0xdc72,	// (0x000bae64) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x000bcd0d) popup_blid2_search_window_t

0xab79,	// (0x000b7d6b) main_browser_pane_g1

0xa861,	// (0x000b7a53) main_browser_pane_ParamLimits

0xa25c,	// (0x000b744e) bg_button_pane_cp011_ParamLimits

0x5f06,	// (0x000b30f8) cell_vitu2_function_pane_g1_ParamLimits

0xc81a,	// (0x000b9a0c) bg_popup_sub_pane_cp22_ParamLimits

0x6897,	// (0x000b3a89) input_focus_pane_cp08_ParamLimits

0x68ae,	// (0x000b3aa0) popup_vitu2_query_button_pane_ParamLimits

0x68ae,	// (0x000b3aa0) popup_vitu2_query_button_pane

0x68bf,	// (0x000b3ab1) popup_vitu2_query_input_button_pane

0xd8fc,	// (0x000baaee) popup_vitu2_query_window_g1_ParamLimits

0x68c9,	// (0x000b3abb) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x000bcc0e) popup_vitu2_query_window_g_ParamLimits

0x9517,	// (0x000b6709) bg_button_pane_cp026

0x7029,	// (0x000b421b) popup_vitu2_query_input_button_pane_g1

0x9517,	// (0x000b6709) bg_button_pane_cp025

0xdc80,	// (0x000bae72) popup_vitu2_query_button_pane_t1

0x4420,	// (0x000b1612) main_mp3_pane_t6

0x442e,	// (0x000b1620) popup_slider_window_cp01

0xa207,	// (0x000b73f9) cam4_battery_pane

0xa26a,	// (0x000b745c) cam4_battery_pane_cp02

0xa438,	// (0x000b762a) cam4_battery_pane_cp01

0xa438,	// (0x000b762a) cam4_battery_pane_cp03

0xd55d,	// (0x000ba74f) cam4_battery_pane_g1

0xcc6b,	// (0x000b9e5d) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x000bcd12) cam4_battery_pane_g

0xcb31,	// (0x000b9d23) popup_blid_sat_info2_window_t11

0x2611,	// (0x000af803) aid_size_touch_mv_arrow_left_ParamLimits

0x263a,	// (0x000af82c) aid_size_touch_mv_arrow_right_ParamLimits

0xb2c3,	// (0x000b84b5) navi_pane_g1_ParamLimits

0x2679,	// (0x000af86b) navi_pane_g2_ParamLimits

0x26a7,	// (0x000af899) navi_pane_g3_ParamLimits

0xf3e5,	// (0x000bc5d7) navi_pane_g_ParamLimits

0x2701,	// (0x000af8f3) navi_pane_mv_t1_ParamLimits

0x50f3,	// (0x000b22e5) grid_imed_effect_pane_ParamLimits

0x10bb,	// (0x000ae2ad) aid_placing_vt_slider_lsc

0xaac4,	// (0x000b7cb6) aid_placing_vt_slider_prt

0x9568,	// (0x000b675a) bg_tb_trans_pane_cp01_ParamLimits

0xcdbb,	// (0x000b9fad) popup_image_details_window_g1_ParamLimits

0xcdce,	// (0x000b9fc0) popup_image_details_window_g2_ParamLimits

0xcde3,	// (0x000b9fd5) popup_image_details_window_g3_ParamLimits

0xcde3,	// (0x000b9fd5) popup_image_details_window_g3

0xf718,	// (0x000bc90a) popup_image_details_window_g_ParamLimits

0xcdf7,	// (0x000b9fe9) popup_image_details_window_t1_ParamLimits

0xce09,	// (0x000b9ffb) popup_image_details_window_t2_ParamLimits

0xce22,	// (0x000ba014) popup_image_details_window_t3_ParamLimits

0xce36,	// (0x000ba028) popup_image_details_window_t4_ParamLimits

0xce51,	// (0x000ba043) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x000bc911) popup_image_details_window_t_ParamLimits

0x6c4d,	// (0x000b3e3f) cl_header_name_pane_ParamLimits

0x6c4d,	// (0x000b3e3f) cl_header_name_pane

0x7031,	// (0x000b4223) cl_header_name_pane_t1_ParamLimits

0x7031,	// (0x000b4223) cl_header_name_pane_t1

0x7052,	// (0x000b4244) cl_header_name_pane_t2_ParamLimits

0x7052,	// (0x000b4244) cl_header_name_pane_t2

0x7094,	// (0x000b4286) cl_header_name_pane_t3_ParamLimits

0x7094,	// (0x000b4286) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x000bcd17) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x000bcd17) cl_header_name_pane_t

0x26d2,	// (0x000af8c4) navi_pane_mv_g2_ParamLimits

0xd65f,	// (0x000ba851) field_vitu2_entry_pane_g1_ParamLimits

0xd66b,	// (0x000ba85d) field_vitu2_entry_pane_g2_ParamLimits

0xd677,	// (0x000ba869) field_vitu2_entry_pane_g3_ParamLimits

0xd677,	// (0x000ba869) field_vitu2_entry_pane_g3

0xf91b,	// (0x000bcb0d) field_vitu2_entry_pane_g_ParamLimits

0x5e7d,	// (0x000b306f) cell_vitu2_itu_pane_g1_ParamLimits

0x5e8d,	// (0x000b307f) cell_vitu2_itu_pane_g2_ParamLimits

0x5e8d,	// (0x000b307f) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x000bcb19) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x000bcb19) cell_vitu2_itu_pane_g

0xa25c,	// (0x000b744e) bg_vkb2_func_pane_cp05_ParamLimits

0xa25c,	// (0x000b744e) bg_vkb2_func_pane_cp05

0xa25c,	// (0x000b744e) bg_vkb2_func_pane_cp03

0xa25c,	// (0x000b744e) bg_vkb2_func_pane_cp04

0xa25c,	// (0x000b744e) bg_vkb2_func_pane_cp10_ParamLimits

0xa25c,	// (0x000b744e) bg_vkb2_func_pane_cp10

0x6bef,	// (0x000b3de1) bg_vkb2_func_pane_cp08

0x6bd5,	// (0x000b3dc7) bg_vkb2_func_pane_cp06

0x6be3,	// (0x000b3dd5) bg_vkb2_func_pane_cp07

0xdb8c,	// (0x000bad7e) bg_vkb2_func_pane_cp11_ParamLimits

0xdb8c,	// (0x000bad7e) bg_vkb2_func_pane_cp11

0xdba1,	// (0x000bad93) bg_vkb2_func_pane_cp12_ParamLimits

0xdba1,	// (0x000bad93) bg_vkb2_func_pane_cp12

0x9517,	// (0x000b6709) bg_vkb2_func_pane_cp09

0xd697,	// (0x000ba889) bg_vkb2_func_pane_g1

0xac8a,	// (0x000b7e7c) bg_vkb2_func_pane_g2

0xd69f,	// (0x000ba891) bg_vkb2_func_pane_g3

0xd6a7,	// (0x000ba899) bg_vkb2_func_pane_g4

0xd8c1,	// (0x000baab3) bg_vkb2_func_pane_g5

0xd6bf,	// (0x000ba8b1) bg_vkb2_func_pane_g6

0xd6c7,	// (0x000ba8b9) bg_vkb2_func_pane_g7

0xd6b7,	// (0x000ba8a9) bg_vkb2_func_pane_g8

0xac6a,	// (0x000b7e5c) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x000bcd1e) bg_vkb2_func_pane_g

0x6f57,	// (0x000b4149) blid2_tripm_pane_g6_ParamLimits

0x6f57,	// (0x000b4149) blid2_tripm_pane_g6

0xd517,	// (0x000ba709) mp4_progress_pane_g1

0x6fce,	// (0x000b41c0) blid2_tripm_values_pane_ParamLimits

0x6fce,	// (0x000b41c0) blid2_tripm_values_pane

0x70c5,	// (0x000b42b7) blid2_tripm_values_pane_t1

0x70d3,	// (0x000b42c5) blid2_tripm_values_pane_t2

0x70e1,	// (0x000b42d3) blid2_tripm_values_pane_t3

0x70ef,	// (0x000b42e1) blid2_tripm_values_pane_t4

0x70fd,	// (0x000b42ef) blid2_tripm_values_pane_t5

0x710b,	// (0x000b42fd) blid2_tripm_values_pane_t6

0x7119,	// (0x000b430b) blid2_tripm_values_pane_t7

0x7127,	// (0x000b4319) blid2_tripm_values_pane_t8

0x7135,	// (0x000b4327) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x000bcd31) blid2_tripm_values_pane_t

0x10f8,	// (0x000ae2ea) call_video_pane_t1_ParamLimits

0x1112,	// (0x000ae304) call_video_pane_t2_ParamLimits

0xf26e,	// (0x000bc460) call_video_pane_t_ParamLimits

0x2c49,	// (0x000afe3b) msg_header_pane_g1_ParamLimits

0xb4ee,	// (0x000b86e0) msg_header_pane_g2_ParamLimits

0xb4ee,	// (0x000b86e0) msg_header_pane_g2

0x0001,

0xf488,	// (0x000bc67a) msg_header_pane_g_ParamLimits

0xf488,	// (0x000bc67a) msg_header_pane_g

0xa861,	// (0x000b7a53) main_clock2_pane_ParamLimits

0x4dda,	// (0x000b1fcc) grid_clock2_toolbar_pane_ParamLimits

0x4dda,	// (0x000b1fcc) grid_clock2_toolbar_pane

0x4dda,	// (0x000b1fcc) listscroll_clock2_pane_ParamLimits

0x4dda,	// (0x000b1fcc) listscroll_clock2_pane

0x4ed1,	// (0x000b20c3) main_clock2_pane_t3_ParamLimits

0x4ed1,	// (0x000b20c3) main_clock2_pane_t3

0x4ef5,	// (0x000b20e7) main_clock2_pane_t4_ParamLimits

0x4ef5,	// (0x000b20e7) main_clock2_pane_t4

0xdc8e,	// (0x000bae80) cell_clock2_toolbar_pane

0xdc96,	// (0x000bae88) cell_clock2_toolbar_pane_cp01

0xdc96,	// (0x000bae88) cell_clock2_toolbar_pane_cp02

0xdc9e,	// (0x000bae90) cell_clock2_toolbar_pane_cp03

0xdca6,	// (0x000bae98) list_clock2_pane

0xb229,	// (0x000b841b) scroll_pane_cp10

0xdcae,	// (0x000baea0) list_single_clock2_pane_ParamLimits

0xdcae,	// (0x000baea0) list_single_clock2_pane

0xb363,	// (0x000b8555) list_highlight_pane_cp08

0xdcbb,	// (0x000baead) list_single_clock2_pane_t1

0xdcc9,	// (0x000baebb) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x000bcd44) list_single_clock2_pane_t

0x9517,	// (0x000b6709) bg_button_pane_cp10

0xdcd7,	// (0x000baec9) cell_clock2_toolbar_pane_g1

0x2c88,	// (0x000afe7a) aid_main_viewer_pane_g1_ParamLimits

0x2c88,	// (0x000afe7a) aid_main_viewer_pane_g1

0x2c96,	// (0x000afe88) aid_main_viewer_pane_g2_ParamLimits

0x2c96,	// (0x000afe88) aid_main_viewer_pane_g2

0x2ca4,	// (0x000afe96) aid_main_viewer_pane_g3_ParamLimits

0x2ca4,	// (0x000afe96) aid_main_viewer_pane_g3

0x2cb3,	// (0x000afea5) aid_main_viewer_pane_g4_ParamLimits

0x2cb3,	// (0x000afea5) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000bc68b) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000bc68b) aid_main_viewer_pane_g

0x3606,	// (0x000b07f8) main_calc_pane_ParamLimits

0x361a,	// (0x000b080c) main_dialer2_pane_ParamLimits

0x9517,	// (0x000b6709) main_cam6_pane

0x9517,	// (0x000b6709) main_vid6_pane

0x4de6,	// (0x000b1fd8) listscroll_gen_pane_cp06_ParamLimits

0x4de6,	// (0x000b1fd8) listscroll_gen_pane_cp06

0x4f18,	// (0x000b210a) main_clock2_pane_t5_ParamLimits

0x4f18,	// (0x000b210a) main_clock2_pane_t5

0x4f78,	// (0x000b216a) aid_call2_pane_cp10_ParamLimits

0x4f8a,	// (0x000b217c) aid_call_pane_cp10_ParamLimits

0xb298,	// (0x000b848a) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb298,	// (0x000b848a) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4f9c,	// (0x000b218e) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4f9c,	// (0x000b218e) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb298,	// (0x000b848a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x000bc9c6) popup_clock_analogue_window_cp10_g_ParamLimits

0x4fb2,	// (0x000b21a4) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5645,	// (0x000b2837) cell_dialer2_keypad_pane_g2_ParamLimits

0x5645,	// (0x000b2837) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x000bcaac) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x000bcaac) cell_dialer2_keypad_pane_g

0x5661,	// (0x000b2853) cell_dialer2_keypad_pane_t1

0x622f,	// (0x000b3421) main_cset_text2_pane_ParamLimits

0x622f,	// (0x000b3421) main_cset_text2_pane

0xdaf4,	// (0x000bace6) area_vitu2_query_pane_g1_ParamLimits

0x6b72,	// (0x000b3d64) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x000bcc61) area_vitu2_query_pane_g_ParamLimits

0xa414,	// (0x000b7606) area_vitu2_query_pane_t7_ParamLimits

0xa414,	// (0x000b7606) area_vitu2_query_pane_t7

0x6bd5,	// (0x000b3dc7) bg_button_pane_cp018_ParamLimits

0x6be3,	// (0x000b3dd5) bg_button_pane_cp021_ParamLimits

0x6bef,	// (0x000b3de1) bg_button_pane_cp022_ParamLimits

0x6bef,	// (0x000b3de1) bg_vkb2_func_pane_cp08_ParamLimits

0x6bd5,	// (0x000b3dc7) bg_vkb2_func_pane_cp06_ParamLimits

0x6be3,	// (0x000b3dd5) bg_vkb2_func_pane_cp07_ParamLimits

0x6c00,	// (0x000b3df2) input_focus_pane_cp09_ParamLimits

0xa4cc,	// (0x000b76be) cam6_autofocus_pane_ParamLimits

0xa4cc,	// (0x000b76be) cam6_autofocus_pane

0x7143,	// (0x000b4335) cam6_image_uncrop_pane_ParamLimits

0x7143,	// (0x000b4335) cam6_image_uncrop_pane

0x7152,	// (0x000b4344) cam6_indi_pane_ParamLimits

0x7152,	// (0x000b4344) cam6_indi_pane

0x7168,	// (0x000b435a) cam6_mode_pane_ParamLimits

0x7168,	// (0x000b435a) cam6_mode_pane

0x717a,	// (0x000b436c) cam6_timer_pane_ParamLimits

0x717a,	// (0x000b436c) cam6_timer_pane

0x7186,	// (0x000b4378) cam6_zoom_pane_ParamLimits

0x7186,	// (0x000b4378) cam6_zoom_pane

0x7194,	// (0x000b4386) cam6_mode_pane_g1_ParamLimits

0x7194,	// (0x000b4386) cam6_mode_pane_g1

0x71a4,	// (0x000b4396) cam6_mode_pane_g2_ParamLimits

0x71a4,	// (0x000b4396) cam6_mode_pane_g2

0x71b4,	// (0x000b43a6) cam6_mode_pane_g3_ParamLimits

0x71b4,	// (0x000b43a6) cam6_mode_pane_g3

0x71c4,	// (0x000b43b6) cam6_mode_pane_g4_ParamLimits

0x71c4,	// (0x000b43b6) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x000bcd49) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x000bcd49) cam6_mode_pane_g

0xdcdf,	// (0x000baed1) bg_tb_trans_pane_cp08_ParamLimits

0xdcdf,	// (0x000baed1) bg_tb_trans_pane_cp08

0xdced,	// (0x000baedf) cam6_battery_pane_ParamLimits

0xdced,	// (0x000baedf) cam6_battery_pane

0xdd03,	// (0x000baef5) cam6_indi_pane_g1_ParamLimits

0xdd03,	// (0x000baef5) cam6_indi_pane_g1

0xdd15,	// (0x000baf07) cam6_indi_pane_g2_ParamLimits

0xdd15,	// (0x000baf07) cam6_indi_pane_g2

0xdd27,	// (0x000baf19) cam6_indi_pane_g3_ParamLimits

0xdd27,	// (0x000baf19) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x000bcd52) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x000bcd52) cam6_indi_pane_g

0xdd39,	// (0x000baf2b) cam6_indi_pane_t1_ParamLimits

0xdd39,	// (0x000baf2b) cam6_indi_pane_t1

0x5c2a,	// (0x000b2e1c) cam6_autofocus_pane_g1

0x5c22,	// (0x000b2e14) cam6_autofocus_pane_g2

0x5c3a,	// (0x000b2e2c) cam6_autofocus_pane_g3

0x5c32,	// (0x000b2e24) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x000bcd59) cam6_autofocus_pane_g

0xdd5f,	// (0x000baf51) cam6_timer_pane_g1

0xdd67,	// (0x000baf59) cam6_timer_pane_t1

0xdd75,	// (0x000baf67) cam6_zoom_cont_pane

0xdd7d,	// (0x000baf6f) cam6_zoom_pane_g1

0xdd85,	// (0x000baf77) cam6_zoom_pane_g2

0x71d4,	// (0x000b43c6) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x000bcd62) cam6_zoom_pane_g

0xcc6b,	// (0x000b9e5d) cam6_battery_pane_g1

0xcc6b,	// (0x000b9e5d) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x000bc8ce) cam6_battery_pane_g

0xdd8d,	// (0x000baf7f) cam6_zoom_cont_pane_g1

0xdd96,	// (0x000baf88) cam6_zoom_cont_pane_g2

0xdd9f,	// (0x000baf91) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x000bcd69) cam6_zoom_cont_pane_g

0x71f1,	// (0x000b43e3) cam6_mode_pane_cp_ParamLimits

0x71f1,	// (0x000b43e3) cam6_mode_pane_cp

0x7203,	// (0x000b43f5) cam6_zoom_pane_cp_ParamLimits

0x7203,	// (0x000b43f5) cam6_zoom_pane_cp

0x7211,	// (0x000b4403) vid6_image_uncrop_cif_pane_ParamLimits

0x7211,	// (0x000b4403) vid6_image_uncrop_cif_pane

0x7221,	// (0x000b4413) vid6_image_uncrop_nhd_pane_ParamLimits

0x7221,	// (0x000b4413) vid6_image_uncrop_nhd_pane

0x7230,	// (0x000b4422) vid6_image_uncrop_vga_pane_ParamLimits

0x7230,	// (0x000b4422) vid6_image_uncrop_vga_pane

0x723f,	// (0x000b4431) vid6_image_uncrop_wvga_pane_ParamLimits

0x723f,	// (0x000b4431) vid6_image_uncrop_wvga_pane

0x724e,	// (0x000b4440) vid6_indi_pane_ParamLimits

0x724e,	// (0x000b4440) vid6_indi_pane

0xdcdf,	// (0x000baed1) bg_tb_trans_pane_cp09_ParamLimits

0xdcdf,	// (0x000baed1) bg_tb_trans_pane_cp09

0xddb7,	// (0x000bafa9) cam6_battery_pane_cp_ParamLimits

0xddb7,	// (0x000bafa9) cam6_battery_pane_cp

0xddc3,	// (0x000bafb5) vid6_indi_pane_g1_ParamLimits

0xddc3,	// (0x000bafb5) vid6_indi_pane_g1

0xddd5,	// (0x000bafc7) vid6_indi_pane_g2_ParamLimits

0xddd5,	// (0x000bafc7) vid6_indi_pane_g2

0xdde7,	// (0x000bafd9) vid6_indi_pane_g3_ParamLimits

0xdde7,	// (0x000bafd9) vid6_indi_pane_g3

0xddfe,	// (0x000baff0) vid6_indi_pane_g4_ParamLimits

0xddfe,	// (0x000baff0) vid6_indi_pane_g4

0xde15,	// (0x000bb007) vid6_indi_pane_g5_ParamLimits

0xde15,	// (0x000bb007) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x000bcd70) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x000bcd70) vid6_indi_pane_g

0xde2f,	// (0x000bb021) vid6_indi_pane_t1_ParamLimits

0xde2f,	// (0x000bb021) vid6_indi_pane_t1

0xde45,	// (0x000bb037) vid6_indi_pane_t2_ParamLimits

0xde45,	// (0x000bb037) vid6_indi_pane_t2

0xde6d,	// (0x000bb05f) vid6_indi_pane_t3_ParamLimits

0xde6d,	// (0x000bb05f) vid6_indi_pane_t3

0xde95,	// (0x000bb087) vid6_indi_pane_t4_ParamLimits

0xde95,	// (0x000bb087) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x000bcd7b) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x000bcd7b) vid6_indi_pane_t

0xdeb9,	// (0x000bb0ab) wait_bar_pane_cp08

0x7266,	// (0x000b4458) main_cset_text2_pane_t1_ParamLimits

0x7266,	// (0x000b4458) main_cset_text2_pane_t1

0x71dc,	// (0x000b43ce) listscroll_gen_pane_cp06_t1_ParamLimits

0x71dc,	// (0x000b43ce) listscroll_gen_pane_cp06_t1

0x9517,	// (0x000b6709) main_cam6_set_pane

0xa1f9,	// (0x000b73eb) bg_tb_trans_pane_cp06_ParamLimits

0xa20f,	// (0x000b7401) cam4_indicators_pane_g1_ParamLimits

0xa220,	// (0x000b7412) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x000bcae9) cam4_indicators_pane_g_ParamLimits

0xa238,	// (0x000b742a) cam4_indicators_pane_t1_ParamLimits

0xa25c,	// (0x000b744e) bg_tb_trans_pane_cp07_ParamLimits

0xa274,	// (0x000b7466) vid4_indicators_pane_g1_ParamLimits

0xa28a,	// (0x000b747c) vid4_indicators_pane_g2_ParamLimits

0xa29e,	// (0x000b7490) vid4_indicators_pane_g3_ParamLimits

0xa2b1,	// (0x000b74a3) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x000bcafb) vid4_indicators_pane_g_ParamLimits

0xa2cf,	// (0x000b74c1) vid4_indicators_pane_t1_ParamLimits

0x6d41,	// (0x000b3f33) vid4_progress_pane_g1_ParamLimits

0x6d53,	// (0x000b3f45) vid4_progress_pane_g2_ParamLimits

0x9e8c,	// (0x000b707e) vid4_progress_pane_g3_ParamLimits

0xa440,	// (0x000b7632) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x000bccac) vid4_progress_pane_g_ParamLimits

0xa45e,	// (0x000b7650) vid4_progress_pane_t1_ParamLimits

0xa473,	// (0x000b7665) vid4_progress_pane_t2_ParamLimits

0xa489,	// (0x000b767b) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x000bccb7) vid4_progress_pane_t_ParamLimits

0xa49e,	// (0x000b7690) wait_bar_pane_cp07_ParamLimits

0x7284,	// (0x000b4476) main_cam6_set_pane_g2_ParamLimits

0x7284,	// (0x000b4476) main_cam6_set_pane_g2

0x72aa,	// (0x000b449c) main_cset6_listscroll_pane_ParamLimits

0x72aa,	// (0x000b449c) main_cset6_listscroll_pane

0x72c8,	// (0x000b44ba) main_cset6_slider_pane_ParamLimits

0x72c8,	// (0x000b44ba) main_cset6_slider_pane

0x72de,	// (0x000b44d0) main_cset6_text2_pane_ParamLimits

0x72de,	// (0x000b44d0) main_cset6_text2_pane

0xdec8,	// (0x000bb0ba) main_cset6_text_pane

0xded0,	// (0x000bb0c2) main_cset_list_pane_copy1_ParamLimits

0xded0,	// (0x000bb0c2) main_cset_list_pane_copy1

0xdee0,	// (0x000bb0d2) scroll_pane_cp028_copy1

0x21bd,	// (0x000af3af) cset_list_set_pane_copy1

0x72ec,	// (0x000b44de) aid_position_infowindow_above_copy1

0x72f4,	// (0x000b44e6) aid_position_infowindow_below_copy1

0x72fc,	// (0x000b44ee) cset_list_set_pane_g1_copy1

0x7304,	// (0x000b44f6) cset_list_set_pane_g3_copy1_ParamLimits

0x7304,	// (0x000b44f6) cset_list_set_pane_g3_copy1

0x7313,	// (0x000b4505) cset_list_set_pane_t1_copy1_ParamLimits

0x7313,	// (0x000b4505) cset_list_set_pane_t1_copy1

0x9568,	// (0x000b675a) list_highlight_pane_cp021_copy1_ParamLimits

0x9568,	// (0x000b675a) list_highlight_pane_cp021_copy1

0xdee9,	// (0x000bb0db) cset6_slider_pane_ParamLimits

0xdee9,	// (0x000bb0db) cset6_slider_pane

0xdf15,	// (0x000bb107) main_cset6_slider_pane_g1_ParamLimits

0xdf15,	// (0x000bb107) main_cset6_slider_pane_g1

0x7328,	// (0x000b451a) main_cset6_slider_pane_g2_ParamLimits

0x7328,	// (0x000b451a) main_cset6_slider_pane_g2

0xdf3d,	// (0x000bb12f) main_cset6_slider_pane_g3_ParamLimits

0xdf3d,	// (0x000bb12f) main_cset6_slider_pane_g3

0x7350,	// (0x000b4542) main_cset6_slider_pane_g4_ParamLimits

0x7350,	// (0x000b4542) main_cset6_slider_pane_g4

0x735c,	// (0x000b454e) main_cset6_slider_pane_g5_ParamLimits

0x735c,	// (0x000b454e) main_cset6_slider_pane_g5

0xd7ca,	// (0x000ba9bc) main_cset6_slider_pane_g7_ParamLimits

0xd7ca,	// (0x000ba9bc) main_cset6_slider_pane_g7

0xd7d6,	// (0x000ba9c8) main_cset6_slider_pane_g8_ParamLimits

0xd7d6,	// (0x000ba9c8) main_cset6_slider_pane_g8

0x62de,	// (0x000b34d0) main_cset6_slider_pane_g9_ParamLimits

0x62de,	// (0x000b34d0) main_cset6_slider_pane_g9

0x62ea,	// (0x000b34dc) main_cset6_slider_pane_g10_ParamLimits

0x62ea,	// (0x000b34dc) main_cset6_slider_pane_g10

0x62f6,	// (0x000b34e8) main_cset6_slider_pane_g11_ParamLimits

0x62f6,	// (0x000b34e8) main_cset6_slider_pane_g11

0x6302,	// (0x000b34f4) main_cset6_slider_pane_g12_ParamLimits

0x6302,	// (0x000b34f4) main_cset6_slider_pane_g12

0x630e,	// (0x000b3500) main_cset6_slider_pane_g13_ParamLimits

0x630e,	// (0x000b3500) main_cset6_slider_pane_g13

0x631a,	// (0x000b350c) main_cset6_slider_pane_g14_ParamLimits

0x631a,	// (0x000b350c) main_cset6_slider_pane_g14

0x736a,	// (0x000b455c) main_cset6_slider_pane_g15_ParamLimits

0x736a,	// (0x000b455c) main_cset6_slider_pane_g15

0x633e,	// (0x000b3530) main_cset6_slider_pane_g16_ParamLimits

0x633e,	// (0x000b3530) main_cset6_slider_pane_g16

0x634c,	// (0x000b353e) main_cset6_slider_pane_g17_ParamLimits

0x634c,	// (0x000b353e) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x000bcd84) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x000bcd84) main_cset6_slider_pane_g

0xdf49,	// (0x000bb13b) main_cset6_slider_pane_t1_ParamLimits

0xdf49,	// (0x000bb13b) main_cset6_slider_pane_t1

0x739a,	// (0x000b458c) main_cset6_slider_pane_t2_ParamLimits

0x739a,	// (0x000b458c) main_cset6_slider_pane_t2

0x73c5,	// (0x000b45b7) main_cset6_slider_pane_t3_ParamLimits

0x73c5,	// (0x000b45b7) main_cset6_slider_pane_t3

0x73f0,	// (0x000b45e2) main_cset6_slider_pane_t4_ParamLimits

0x73f0,	// (0x000b45e2) main_cset6_slider_pane_t4

0x741b,	// (0x000b460d) main_cset6_slider_pane_t5_ParamLimits

0x741b,	// (0x000b460d) main_cset6_slider_pane_t5

0xdf8a,	// (0x000bb17c) main_cset6_slider_pane_t7_ParamLimits

0xdf8a,	// (0x000bb17c) main_cset6_slider_pane_t7

0x7448,	// (0x000b463a) main_cset6_slider_pane_t8_ParamLimits

0x7448,	// (0x000b463a) main_cset6_slider_pane_t8

0x746c,	// (0x000b465e) main_cset6_slider_pane_t9_ParamLimits

0x746c,	// (0x000b465e) main_cset6_slider_pane_t9

0x7490,	// (0x000b4682) main_cset6_slider_pane_t10_ParamLimits

0x7490,	// (0x000b4682) main_cset6_slider_pane_t10

0x74b4,	// (0x000b46a6) main_cset6_slider_pane_t11_ParamLimits

0x74b4,	// (0x000b46a6) main_cset6_slider_pane_t11

0xdfc0,	// (0x000bb1b2) main_cset6_slider_pane_t14_ParamLimits

0xdfc0,	// (0x000bb1b2) main_cset6_slider_pane_t14

0xdff9,	// (0x000bb1eb) main_cset6_slider_pane_t15_ParamLimits

0xdff9,	// (0x000bb1eb) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x000bcda9) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x000bcda9) main_cset6_slider_pane_t

0xe032,	// (0x000bb224) cset_slider_pane_g1_copy1

0xe03b,	// (0x000bb22d) cset_slider_pane_g2_copy1

0xe044,	// (0x000bb236) cset_slider_pane_g3_copy1

0x9517,	// (0x000b6709) bg_popup_sub_pane_cp011_copy1

0xe04d,	// (0x000bb23f) main_cset_text_pane_g1_copy1

0xd910,	// (0x000bab02) main_cset_text_pane_t1_copy1

0xd91e,	// (0x000bab10) main_cset_text_pane_t2_copy1

0xd92c,	// (0x000bab1e) main_cset_text_pane_t3_copy1

0xd93a,	// (0x000bab2c) main_cset_text_pane_t4_copy1

0xd948,	// (0x000bab3a) main_cset_text_pane_t5_copy1

0xe055,	// (0x000bb247) main_cset_text_pane_t6_copy1

0xe063,	// (0x000bb255) main_cset_text_pane_t7_copy1

0x7266,	// (0x000b4458) main_cset_text2_pane_t1_copy1

0x9568,	// (0x000b675a) main_ncimui_pane

0x38a8,	// (0x000b0a9a) popup_query_ncimui_window_ParamLimits

0x38a8,	// (0x000b0a9a) popup_query_ncimui_window

0xbba0,	// (0x000b8d92) field_cale_ev2_pane_g4_ParamLimits

0xbba0,	// (0x000b8d92) field_cale_ev2_pane_g4

0x5517,	// (0x000b2709) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5517,	// (0x000b2709) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x000bca87) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x000bca87) cell_video_dialer_keypad_pane_g

0x552f,	// (0x000b2721) cell_video_dialer_keypad_pane_t1

0x9517,	// (0x000b6709) bg_popup_window_pane_cp012

0xb115,	// (0x000b8307) heading_pane_cp06

0xe08f,	// (0x000bb281) ncim_query_content_pane

0x9517,	// (0x000b6709) bg_popup_heading_pane_cp01

0xe097,	// (0x000bb289) ncim_heading_pane_t1

0xe0a5,	// (0x000bb297) ncim_indicator_popup_pane

0xe0b7,	// (0x000bb2a9) ncim_query_button_pane

0xe0cd,	// (0x000bb2bf) ncim_query_content_pane_t1

0xe0df,	// (0x000bb2d1) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x000bcded) ncim_query_content_pane_t

0xe119,	// (0x000bb30b) ncim_query_list_pane

0xe12b,	// (0x000bb31d) ncim_query_popup_pane

0xe0a5,	// (0x000bb297) ncim_indicator_popup_pane_ParamLimits

0x76cf,	// (0x000b48c1) ncim_query_content_pane_g1_ParamLimits

0x76cf,	// (0x000b48c1) ncim_query_content_pane_g1

0xe0cd,	// (0x000bb2bf) ncim_query_content_pane_t1_ParamLimits

0xe0df,	// (0x000bb2d1) ncim_query_content_pane_t2_ParamLimits

0x76db,	// (0x000b48cd) ncim_query_content_pane_t3_ParamLimits

0x76db,	// (0x000b48cd) ncim_query_content_pane_t3

0x7703,	// (0x000b48f5) ncim_query_content_pane_t4_ParamLimits

0x7703,	// (0x000b48f5) ncim_query_content_pane_t4

0x772b,	// (0x000b491d) ncim_query_content_pane_t5_ParamLimits

0x772b,	// (0x000b491d) ncim_query_content_pane_t5

0xe0f1,	// (0x000bb2e3) ncim_query_content_pane_t6_ParamLimits

0xe0f1,	// (0x000bb2e3) ncim_query_content_pane_t6

0xfbfb,	// (0x000bcded) ncim_query_content_pane_t_ParamLimits

0xe119,	// (0x000bb30b) ncim_query_list_pane_ParamLimits

0xe12b,	// (0x000bb31d) ncim_query_popup_pane_ParamLimits

0xe13f,	// (0x000bb331) wait_bar_pane_cp04

0x9517,	// (0x000b6709) input_focus_pane_cp011

0xe147,	// (0x000bb339) ncim_query_popup_pane_t1

0xe155,	// (0x000bb347) ncim_list_query_list_pane_ParamLimits

0xe155,	// (0x000bb347) ncim_list_query_list_pane

0x9517,	// (0x000b6709) bg_button_pane_cp027

0xe168,	// (0x000bb35a) ncim_query_button_pane_g1

0x9517,	// (0x000b6709) list_highlight_pane_cp012

0xe172,	// (0x000bb364) ncim_list_query_list_pane_g1

0xe17a,	// (0x000bb36c) ncim_list_query_list_pane_t1

0xa22c,	// (0x000b741e) cam4_indicators_pane_g3_ParamLimits

0xa22c,	// (0x000b741e) cam4_indicators_pane_g3

0xa2bd,	// (0x000b74af) vid4_indicators_pane_g5_ParamLimits

0xa2bd,	// (0x000b74af) vid4_indicators_pane_g5

0xa44f,	// (0x000b7641) vid4_progress_pane_g5_ParamLimits

0xa44f,	// (0x000b7641) vid4_progress_pane_g5

0x75bd,	// (0x000b47af) main_ncimui_pane_g1

0x7623,	// (0x000b4815) ncimui_group_query_pane_ParamLimits

0x7623,	// (0x000b4815) ncimui_group_query_pane

0x766b,	// (0x000b485d) ncimui_list_pane_ParamLimits

0x766b,	// (0x000b485d) ncimui_list_pane

0x7692,	// (0x000b4884) ncimui_text_pane_ParamLimits

0x7692,	// (0x000b4884) ncimui_text_pane

0x7753,	// (0x000b4945) ncimui_text_pane_t1_ParamLimits

0x7753,	// (0x000b4945) ncimui_text_pane_t1

0xe188,	// (0x000bb37a) ncimui_list_single_graphic_pane_ParamLimits

0xe188,	// (0x000bb37a) ncimui_list_single_graphic_pane

0x7771,	// (0x000b4963) ncimui_query_pane_ParamLimits

0x7771,	// (0x000b4963) ncimui_query_pane

0x9517,	// (0x000b6709) list_highlight_pane_cp013

0xe198,	// (0x000bb38a) ncim_list_query_list_pane_t1_copy1

0xe172,	// (0x000bb364) ncim_list_single_graphic_pane_g1

0xe1a6,	// (0x000bb398) ncim_query_button_pane_cp01

0xe1b2,	// (0x000bb3a4) ncim_query_entry_pane_ParamLimits

0xe1b2,	// (0x000bb3a4) ncim_query_entry_pane

0xe1c5,	// (0x000bb3b7) ncimui_query_pane_g1

0xe1d1,	// (0x000bb3c3) ncimui_query_pane_t1_ParamLimits

0xe1d1,	// (0x000bb3c3) ncimui_query_pane_t1

0x9568,	// (0x000b675a) input_focus_pane_cp012

0xe1ea,	// (0x000bb3dc) ncim_query_entry_pane_t1

0xa861,	// (0x000b7a53) main_im_pane_ParamLimits

0x9568,	// (0x000b675a) main_mobtv_pane_ParamLimits

0x9568,	// (0x000b675a) main_mobtv_pane

0x7382,	// (0x000b4574) main_cset6_slider_pane_g18_ParamLimits

0x7382,	// (0x000b4574) main_cset6_slider_pane_g18

0x738e,	// (0x000b4580) main_cset6_slider_pane_g19_ParamLimits

0x738e,	// (0x000b4580) main_cset6_slider_pane_g19

0x7784,	// (0x000b4976) bg_main_mobtv_pane_ParamLimits

0x7784,	// (0x000b4976) bg_main_mobtv_pane

0x7792,	// (0x000b4984) main_mobtv_info_pane

0x779d,	// (0x000b498f) main_mobtv_loading_pane_ParamLimits

0x779d,	// (0x000b498f) main_mobtv_loading_pane

0xe1fc,	// (0x000bb3ee) main_mobtv_pg_channel_list_pane

0xe206,	// (0x000bb3f8) main_mobtv_pg_hdr_pane

0x77aa,	// (0x000b499c) main_mobtv_programe_curr_pane_ParamLimits

0x77aa,	// (0x000b499c) main_mobtv_programe_curr_pane

0x77b7,	// (0x000b49a9) main_mobtv_programe_next_pane_ParamLimits

0x77b7,	// (0x000b49a9) main_mobtv_programe_next_pane

0xe20f,	// (0x000bb401) popup_mobtv_noti_window

0xcc6b,	// (0x000b9e5d) main_tv_pg_hdr_pane_g1

0xe219,	// (0x000bb40b) main_tv_pg_hdr_pane_g2

0xe221,	// (0x000bb413) main_tv_pg_hdr_pane_g3

0xe229,	// (0x000bb41b) main_tv_pg_hdr_pane_g4

0xe231,	// (0x000bb423) main_tv_pg_hdr_pane_g5

0xe23b,	// (0x000bb42d) main_tv_pg_hdr_pane_g6

0xe245,	// (0x000bb437) main_tv_pg_hdr_pane_g7

0xe24f,	// (0x000bb441) main_tv_pg_hdr_pane_g8

0xe259,	// (0x000bb44b) main_tv_pg_hdr_pane_g9

0xe263,	// (0x000bb455) main_tv_pg_hdr_pane_g10

0xe26d,	// (0x000bb45f) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x000bcdfa) main_tv_pg_hdr_pane_g

0xe277,	// (0x000bb469) main_tv_pg_hdr_pane_t1

0xe285,	// (0x000bb477) main_tv_pg_hdr_pane_t2

0xe293,	// (0x000bb485) main_tv_pg_hdr_pane_t3

0xe2a3,	// (0x000bb495) main_tv_pg_hdr_pane_t4

0xe2b3,	// (0x000bb4a5) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x000bce11) main_tv_pg_hdr_pane_t

0xe2c3,	// (0x000bb4b5) single_mobtv_pg_channel_pane_ParamLimits

0xe2c3,	// (0x000bb4b5) single_mobtv_pg_channel_pane

0xe2d5,	// (0x000bb4c7) single_mobtv_pg_channel_table_pane

0xe2de,	// (0x000bb4d0) single_mobtv_pg_channel_thumb_pane

0xe2e7,	// (0x000bb4d9) single_tv_pg_channel_pane_g1

0xe2f0,	// (0x000bb4e2) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x000bce1c) single_tv_pg_channel_pane_g

0xce9b,	// (0x000ba08d) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce9b,	// (0x000ba08d) bg_single_mobtv_pg_channel_thumb_pane

0xe2f9,	// (0x000bb4eb) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2f9,	// (0x000bb4eb) single_mobtv_pg_channel_thumb_pane_g1

0xe307,	// (0x000bb4f9) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe307,	// (0x000bb4f9) single_mobtv_pg_channel_thumb_pane_g2

0xe313,	// (0x000bb505) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe313,	// (0x000bb505) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x000bce21) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x000bce21) single_mobtv_pg_channel_thumb_pane_g

0xe31f,	// (0x000bb511) single_mobtv_pg_channel_thumb_pane_t1

0xe32d,	// (0x000bb51f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x000bce28) single_mobtv_pg_channel_thumb_pane_t

0xcc6b,	// (0x000b9e5d) bg_single_mobtv_pg_channel_table_pane_g1

0xcc6b,	// (0x000b9e5d) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x000bc8ce) bg_single_mobtv_pg_channel_table_pane_g

0xe33b,	// (0x000bb52d) single_mobtv_pg_channel_table_pane_t1

0xe349,	// (0x000bb53b) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x000bce2d) single_mobtv_pg_channel_table_pane_t

0x77cc,	// (0x000b49be) main_mobtv_info_pane_g1_ParamLimits

0x77cc,	// (0x000b49be) main_mobtv_info_pane_g1

0x77ea,	// (0x000b49dc) main_mobtv_info_pane_t1_ParamLimits

0x77ea,	// (0x000b49dc) main_mobtv_info_pane_t1

0x7862,	// (0x000b4a54) main_mobtv_info_pane_t2_ParamLimits

0x7862,	// (0x000b4a54) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x000bce37) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x000bce37) main_mobtv_info_pane_t

0x78f1,	// (0x000b4ae3) wait_bar_pane_cp05

0x7903,	// (0x000b4af5) main_mobtv_loading_pane_g1_ParamLimits

0x7903,	// (0x000b4af5) main_mobtv_loading_pane_g1

0x7914,	// (0x000b4b06) main_mobtv_loading_pane_g2_ParamLimits

0x7914,	// (0x000b4b06) main_mobtv_loading_pane_g2

0x7920,	// (0x000b4b12) main_mobtv_loading_pane_g3_ParamLimits

0x7920,	// (0x000b4b12) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x000bce3e) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x000bce3e) main_mobtv_loading_pane_g

0xe357,	// (0x000bb549) main_mobtv_loading_pane_t1_ParamLimits

0xe357,	// (0x000bb549) main_mobtv_loading_pane_t1

0xe36f,	// (0x000bb561) main_mobtv_loading_pane_t2_ParamLimits

0xe36f,	// (0x000bb561) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x000bce45) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x000bce45) main_mobtv_loading_pane_t

0x7933,	// (0x000b4b25) wait_bar_pane_cp06_ParamLimits

0x7933,	// (0x000b4b25) wait_bar_pane_cp06

0xe393,	// (0x000bb585) main_mobtv_programe_curr_pane_t1

0xe3a1,	// (0x000bb593) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x000bce4a) main_mobtv_programe_curr_pane_t

0xe3af,	// (0x000bb5a1) main_mobtv_programe_next_pane_t1

0xe3bd,	// (0x000bb5af) main_mobtv_programe_next_pane_t2

0xe3cb,	// (0x000bb5bd) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x000bce4f) main_mobtv_programe_next_pane_t

0x9517,	// (0x000b6709) bg_popup_mobtv_noti_window_pane

0xe3d9,	// (0x000bb5cb) popup_mobtv_noti_window_g1

0xe3e1,	// (0x000bb5d3) popup_mobtv_noti_window_t1

0xe3ef,	// (0x000bb5e1) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x000bce56) popup_mobtv_noti_window_t

0xcc6b,	// (0x000b9e5d) bg_popup_mobtv_noti_window_pane_g1

0x9517,	// (0x000b6709) sc_clock_pane

0x9517,	// (0x000b6709) main_fs_bigclock_pane

0x6fb8,	// (0x000b41aa) blid2_tripm_pane_t4_ParamLimits

0x6fb8,	// (0x000b41aa) blid2_tripm_pane_t4

0x7942,	// (0x000b4b34) sc_clock_pane_g1_ParamLimits

0x7942,	// (0x000b4b34) sc_clock_pane_g1

0x7954,	// (0x000b4b46) sc_clock_pane_t1_ParamLimits

0x7954,	// (0x000b4b46) sc_clock_pane_t1

0x7978,	// (0x000b4b6a) sc_clock_pane_t2_ParamLimits

0x7978,	// (0x000b4b6a) sc_clock_pane_t2

0x7990,	// (0x000b4b82) sc_clock_pane_t3_ParamLimits

0x7990,	// (0x000b4b82) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x000bce5b) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x000bce5b) sc_clock_pane_t

0x89f7,	// (0x000b5be9) main_fs_bigclock_indicator_pane_ParamLimits

0x89f7,	// (0x000b5be9) main_fs_bigclock_indicator_pane

0x7a4c,	// (0x000b4c3e) main_fs_bigclock_pane_g1_ParamLimits

0x7a4c,	// (0x000b4c3e) main_fs_bigclock_pane_g1

0x8a03,	// (0x000b5bf5) main_fs_bigclock_pane_t1_ParamLimits

0x8a03,	// (0x000b5bf5) main_fs_bigclock_pane_t1

0x8a15,	// (0x000b5c07) main_fs_bigclock_pane_t2_ParamLimits

0x8a15,	// (0x000b5c07) main_fs_bigclock_pane_t2

0x8a29,	// (0x000b5c1b) main_fs_bigclock_pane_t3_ParamLimits

0x8a29,	// (0x000b5c1b) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x000bd065) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x000bd065) main_fs_bigclock_pane_t

0xec53,	// (0x000bbe45) main_fs_bigclock_indicator_pane_g1

0xe0bf,	// (0x000bb2b1) ncim_query_content_pane_g2_ParamLimits

0xe0bf,	// (0x000bb2b1) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x000bcde8) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x000bcde8) ncim_query_content_pane_g

0x79a7,	// (0x000b4b99) sc_clock_pane_t4_ParamLimits

0x79a7,	// (0x000b4b99) sc_clock_pane_t4

0x9568,	// (0x000b675a) main_radioblah_pane

0xd5d0,	// (0x000ba7c2) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5d0,	// (0x000ba7c2) cell_call4_button_pane_t1_copy1

0x75d5,	// (0x000b47c7) main_ncimui_pane_t1_ParamLimits

0x75d5,	// (0x000b47c7) main_ncimui_pane_t1

0x75ef,	// (0x000b47e1) main_ncimui_pane_t2_ParamLimits

0x75ef,	// (0x000b47e1) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x000bcde1) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x000bcde1) main_ncimui_pane_t

0xe542,	// (0x000bb734) main_radioblah_anim_pane_ParamLimits

0xe542,	// (0x000bb734) main_radioblah_anim_pane

0xe553,	// (0x000bb745) main_radioblah_info_pane_ParamLimits

0xe553,	// (0x000bb745) main_radioblah_info_pane

0xe567,	// (0x000bb759) main_radioblah_pane_t1_ParamLimits

0xe567,	// (0x000bb759) main_radioblah_pane_t1

0xe583,	// (0x000bb775) main_radioblah_pane_t2_ParamLimits

0xe583,	// (0x000bb775) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x000bce7c) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x000bce7c) main_radioblah_pane_t

0x7aa9,	// (0x000b4c9b) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7aa9,	// (0x000b4c9b) main_radioblah_rocker_ctrl_pane

0xe5cb,	// (0x000bb7bd) main_radioblah_info_pane_t1_ParamLimits

0xe5cb,	// (0x000bb7bd) main_radioblah_info_pane_t1

0x7b01,	// (0x000b4cf3) main_radioblah_info_pane_t2_ParamLimits

0x7b01,	// (0x000b4cf3) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x000bce85) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x000bce85) main_radioblah_info_pane_t

0xcc6b,	// (0x000b9e5d) main_radioblah_rocker_ctrl_pane_g1

0x7bb1,	// (0x000b4da3) main_radioblah_rocker_ctrl_pane_g2

0x7bb9,	// (0x000b4dab) main_radioblah_rocker_ctrl_pane_g3

0x7bc1,	// (0x000b4db3) main_radioblah_rocker_ctrl_pane_g4

0x7bc9,	// (0x000b4dbb) main_radioblah_rocker_ctrl_pane_g5

0x7bd1,	// (0x000b4dc3) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x000bce8e) main_radioblah_rocker_ctrl_pane_g

0x7266,	// (0x000b4458) main_cset_text2_pane_t1_copy1_ParamLimits

0xa1ef,	// (0x000b73e1) cam4_image_uncrop_qvga_pane

0xa252,	// (0x000b7444) vid4_image_uncrop_qcif_pane

0xa4cc,	// (0x000b76be) cam6_image_uncrop_qvga_pane_ParamLimits

0xa4cc,	// (0x000b76be) cam6_image_uncrop_qvga_pane

0xdda7,	// (0x000baf99) vid6_image_uncrop_qcif_pane_ParamLimits

0xdda7,	// (0x000baf99) vid6_image_uncrop_qcif_pane

0x9517,	// (0x000b6709) bg_popup_preview_window_pane_cp03

0xe071,	// (0x000bb263) list_cset_text2_pane

0xe079,	// (0x000bb26b) main_cset6_text2_pane_g1

0xe081,	// (0x000bb273) main_cset6_text2_pane_t1

0x7bd9,	// (0x000b4dcb) list_cset_text2_pane_t1_ParamLimits

0x7bd9,	// (0x000b4dcb) list_cset_text2_pane_t1

0x9568,	// (0x000b675a) main_radioblah_pane_ParamLimits

0x78dd,	// (0x000b4acf) main_mobtv_info_pane_t3_ParamLimits

0x78dd,	// (0x000b4acf) main_mobtv_info_pane_t3

0x7a97,	// (0x000b4c89) main_radioblah_pane_g1

0x7ad1,	// (0x000b4cc3) main_radioblah_info_pane_g1

0x7b56,	// (0x000b4d48) main_radioblah_info_pane_t3_ParamLimits

0x7b56,	// (0x000b4d48) main_radioblah_info_pane_t3

0x20dd,	// (0x000af2cf) highlight_cell_cale_month_pane_ParamLimits

0x20dd,	// (0x000af2cf) highlight_cell_cale_month_pane

0x9517,	// (0x000b6709) main_phob_fisheye_pane

0xcf7f,	// (0x000ba171) scroll_pane_cp0031_ParamLimits

0xcf7f,	// (0x000ba171) scroll_pane_cp0031

0xdeb9,	// (0x000bb0ab) wait_bar_pane_cp08_ParamLimits

0x21bd,	// (0x000af3af) cset_list_set_pane_copy1_ParamLimits

0xe605,	// (0x000bb7f7) highlight_cell_cale_month_pane_g1

0x7bf2,	// (0x000b4de4) highlight_cell_cale_month_pane_t1

0xdb48,	// (0x000bad3a) list_gen_pane_cp01

0xd7b5,	// (0x000ba9a7) scroll_pane_01

0x7c00,	// (0x000b4df2) list_single_double_fisheye_pane

0x7c09,	// (0x000b4dfb) list_double_fisheye_pane_g1_ParamLimits

0x7c09,	// (0x000b4dfb) list_double_fisheye_pane_g1

0x7c15,	// (0x000b4e07) list_double_fisheye_pane_g2_ParamLimits

0x7c15,	// (0x000b4e07) list_double_fisheye_pane_g2

0x7c29,	// (0x000b4e1b) list_double_fisheye_pane_g3_ParamLimits

0x7c29,	// (0x000b4e1b) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x000bce9b) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x000bce9b) list_double_fisheye_pane_g

0x7c52,	// (0x000b4e44) list_double_fisheye_pane_t1_ParamLimits

0x7c52,	// (0x000b4e44) list_double_fisheye_pane_t1

0x7c6d,	// (0x000b4e5f) list_double_fisheye_pane_t2_ParamLimits

0x7c6d,	// (0x000b4e5f) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x000bcea6) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x000bcea6) list_double_fisheye_pane_t

0x9517,	// (0x000b6709) main_call5_pane

0x79d2,	// (0x000b4bc4) sc_swipe_pane_ParamLimits

0x79d2,	// (0x000b4bc4) sc_swipe_pane

0x7ca2,	// (0x000b4e94) call5_image_pane_ParamLimits

0x7ca2,	// (0x000b4e94) call5_image_pane

0x7cbf,	// (0x000b4eb1) call5_swipe_1_pane_ParamLimits

0x7cbf,	// (0x000b4eb1) call5_swipe_1_pane

0x7cd2,	// (0x000b4ec4) call5_swipe_2_pane_ParamLimits

0x7cd2,	// (0x000b4ec4) call5_swipe_2_pane

0x7cff,	// (0x000b4ef1) popup_call5_audio_first_window_ParamLimits

0x7cff,	// (0x000b4ef1) popup_call5_audio_first_window

0xce9b,	// (0x000ba08d) call5_swipe_1_pane_g1_ParamLimits

0xce9b,	// (0x000ba08d) call5_swipe_1_pane_g1

0xe60d,	// (0x000bb7ff) call5_swipe_1_pane_g2_ParamLimits

0xe60d,	// (0x000bb7ff) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x000bceab) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x000bceab) call5_swipe_1_pane_g

0xe619,	// (0x000bb80b) call5_swipe_1_pane_t1_ParamLimits

0xe619,	// (0x000bb80b) call5_swipe_1_pane_t1

0xce9b,	// (0x000ba08d) call5_swipe_2_pane_g1_ParamLimits

0xce9b,	// (0x000ba08d) call5_swipe_2_pane_g1

0xe62e,	// (0x000bb820) call5_swipe_2_pane_g2_ParamLimits

0xe62e,	// (0x000bb820) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x000bceb0) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x000bceb0) call5_swipe_2_pane_g

0xe63a,	// (0x000bb82c) call5_swipe_2_pane_t1_ParamLimits

0xe63a,	// (0x000bb82c) call5_swipe_2_pane_t1

0xe64f,	// (0x000bb841) sc_swipe_pane_g1_ParamLimits

0xe64f,	// (0x000bb841) sc_swipe_pane_g1

0xe65c,	// (0x000bb84e) sc_swipe_pane_g2_ParamLimits

0xe65c,	// (0x000bb84e) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x000bceb5) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x000bceb5) sc_swipe_pane_g

0xe668,	// (0x000bb85a) sc_swipe_pane_t1_ParamLimits

0xe668,	// (0x000bb85a) sc_swipe_pane_t1

0x9517,	// (0x000b6709) main_cmail_launcher_pane

0x7d14,	// (0x000b4f06) aid_size_cell_cmail_l_ParamLimits

0x7d14,	// (0x000b4f06) aid_size_cell_cmail_l

0x7d2e,	// (0x000b4f20) grid_cmail_l_pane_ParamLimits

0x7d2e,	// (0x000b4f20) grid_cmail_l_pane

0x7d49,	// (0x000b4f3b) cell_cmail_l_pane_ParamLimits

0x7d49,	// (0x000b4f3b) cell_cmail_l_pane

0x7d71,	// (0x000b4f63) cell_cmail_l_pane_g1_ParamLimits

0x7d71,	// (0x000b4f63) cell_cmail_l_pane_g1

0x7d7d,	// (0x000b4f6f) cell_cmail_l_pane_t1_ParamLimits

0x7d7d,	// (0x000b4f6f) cell_cmail_l_pane_t1

0xe67d,	// (0x000bb86f) cell_cmail_l_pane_t2_ParamLimits

0xe67d,	// (0x000bb86f) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x000bceba) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x000bceba) cell_cmail_l_pane_t

0x9568,	// (0x000b675a) grid_highlight_pane_cp018_ParamLimits

0x9568,	// (0x000b675a) grid_highlight_pane_cp018

0xfd28,	// (0x000acf1a) main2_pane_ParamLimits

0xfd28,	// (0x000acf1a) main2_pane

0xa90c,	// (0x000b7afe) popup_sp_fs_action_menu_bg_pane_g1

0xa914,	// (0x000b7b06) popup_sp_fs_action_menu_bg_pane_g2

0xa91c,	// (0x000b7b0e) popup_sp_fs_action_menu_bg_pane_g3

0xa924,	// (0x000b7b16) popup_sp_fs_action_menu_bg_pane_g4

0xa92c,	// (0x000b7b1e) popup_sp_fs_action_menu_bg_pane_g5

0xa934,	// (0x000b7b26) popup_sp_fs_action_menu_bg_pane_g6

0xa93c,	// (0x000b7b2e) popup_sp_fs_action_menu_bg_pane_g7

0xa944,	// (0x000b7b36) popup_sp_fs_action_menu_bg_pane_g8

0xa94c,	// (0x000b7b3e) popup_sp_fs_action_menu_bg_pane_g9

0xa954,	// (0x000b7b46) popup_sp_fs_action_menu_bg_pane_g10

0xa954,	// (0x000b7b46) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x000bc378) popup_sp_fs_action_menu_bg_pane_g

0x0f39,	// (0x000ae12b) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0f39,	// (0x000ae12b) list_medium_line_x2_t3_g3_g1

0x0f45,	// (0x000ae137) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0f45,	// (0x000ae137) list_medium_line_x2_t3_g3_g2

0x0f51,	// (0x000ae143) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0f51,	// (0x000ae143) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x000bc42a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x000bc42a) list_medium_line_x2_t3_g3_g

0x0f5d,	// (0x000ae14f) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0f5d,	// (0x000ae14f) list_medium_line_x2_t3_g3_t1

0x0f72,	// (0x000ae164) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0f72,	// (0x000ae164) list_medium_line_x2_t3_g3_t2

0x0f86,	// (0x000ae178) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0f86,	// (0x000ae178) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x000bc431) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x000bc431) list_medium_line_x2_t3_g3_t

0x0f39,	// (0x000ae12b) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0f39,	// (0x000ae12b) list_medium_line_x2_t3_g2_g1

0x0f51,	// (0x000ae143) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0f51,	// (0x000ae143) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x000bc438) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x000bc438) list_medium_line_x2_t3_g2_g

0x0f9b,	// (0x000ae18d) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0f9b,	// (0x000ae18d) list_medium_line_x2_t3_g2_t1

0x0fb1,	// (0x000ae1a3) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0fb1,	// (0x000ae1a3) list_medium_line_x2_t3_g2_t2

0x0fc3,	// (0x000ae1b5) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0fc3,	// (0x000ae1b5) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x000bc43d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x000bc43d) list_medium_line_x2_t3_g2_t

0x0f39,	// (0x000ae12b) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0f39,	// (0x000ae12b) list_medium_line_x2_t4_g4_g1

0x0fe1,	// (0x000ae1d3) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0fe1,	// (0x000ae1d3) list_medium_line_x2_t4_g4_g2

0x0f45,	// (0x000ae137) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0f45,	// (0x000ae137) list_medium_line_x2_t4_g4_g3

0x0fed,	// (0x000ae1df) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0fed,	// (0x000ae1df) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x000bc444) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x000bc444) list_medium_line_x2_t4_g4_g

0x0ff9,	// (0x000ae1eb) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0ff9,	// (0x000ae1eb) list_medium_line_x2_t4_g4_t1

0x1013,	// (0x000ae205) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1013,	// (0x000ae205) list_medium_line_x2_t4_g4_t2

0x1029,	// (0x000ae21b) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1029,	// (0x000ae21b) list_medium_line_x2_t4_g4_t3

0x103e,	// (0x000ae230) list_medium_line_x2_t4_g4_t4_ParamLimits

0x103e,	// (0x000ae230) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x000bc44d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x000bc44d) list_medium_line_x2_t4_g4_t

0x0f39,	// (0x000ae12b) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0f39,	// (0x000ae12b) list_medium_line_x2_t2_g4_g1

0x0fe1,	// (0x000ae1d3) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0fe1,	// (0x000ae1d3) list_medium_line_x2_t2_g4_g2

0x0f45,	// (0x000ae137) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0f45,	// (0x000ae137) list_medium_line_x2_t2_g4_g3

0x0f51,	// (0x000ae143) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0f51,	// (0x000ae143) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000bc4b4) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000bc4b4) list_medium_line_x2_t2_g4_g

0x2103,	// (0x000af2f5) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2103,	// (0x000af2f5) list_medium_line_x2_t2_g4_t1

0x0f86,	// (0x000ae178) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0f86,	// (0x000ae178) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000bc4bd) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000bc4bd) list_medium_line_x2_t2_g4_t

0x0f39,	// (0x000ae12b) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0f39,	// (0x000ae12b) list_medium_line_x2_t2_g3_g1

0x0f45,	// (0x000ae137) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0f45,	// (0x000ae137) list_medium_line_x2_t2_g3_g2

0x0f51,	// (0x000ae143) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0f51,	// (0x000ae143) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x000bc42a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x000bc42a) list_medium_line_x2_t2_g3_g

0x2118,	// (0x000af30a) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2118,	// (0x000af30a) list_medium_line_x2_t2_g3_t1

0x0f86,	// (0x000ae178) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0f86,	// (0x000ae178) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000bc4c2) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000bc4c2) list_medium_line_x2_t2_g3_t

0x2262,	// (0x000af454) main_sp_fs_list_pane_ParamLimits

0x2262,	// (0x000af454) main_sp_fs_list_pane

0x226e,	// (0x000af460) sp_fs_scroll_pane_ParamLimits

0x226e,	// (0x000af460) sp_fs_scroll_pane

0x227a,	// (0x000af46c) list_medium_line_x2_t3_t1

0x228a,	// (0x000af47c) list_medium_line_x2_t3_t2

0x2298,	// (0x000af48a) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x000bc50d) list_medium_line_x2_t3_t

0x22a6,	// (0x000af498) list_medium_line_x3_t4_t1

0x22b6,	// (0x000af4a8) list_medium_line_x3_t4_t2

0x22c4,	// (0x000af4b6) list_medium_line_x3_t4_t3

0x2298,	// (0x000af48a) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x000bc514) list_medium_line_x3_t4_t

0x22d2,	// (0x000af4c4) list_medium_line_x4_t5_t1

0x22e2,	// (0x000af4d4) list_medium_line_x4_t5_t2

0x22c4,	// (0x000af4b6) list_medium_line_x4_t5_t3

0x22f0,	// (0x000af4e2) list_medium_line_x4_t5_t4

0x2298,	// (0x000af48a) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x000bc51d) list_medium_line_x4_t5_t

0x0f39,	// (0x000ae12b) list_medium_line_t4_g4_g1_ParamLimits

0x0f39,	// (0x000ae12b) list_medium_line_t4_g4_g1

0x0fed,	// (0x000ae1df) list_medium_line_t4_g4_g2_ParamLimits

0x0fed,	// (0x000ae1df) list_medium_line_t4_g4_g2

0x22fe,	// (0x000af4f0) list_medium_line_t4_g4_g3_ParamLimits

0x22fe,	// (0x000af4f0) list_medium_line_t4_g4_g3

0x0f51,	// (0x000ae143) list_medium_line_t4_g4_g4_ParamLimits

0x0f51,	// (0x000ae143) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x000bc528) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x000bc528) list_medium_line_t4_g4_g

0x230a,	// (0x000af4fc) list_medium_line_t4_g4_t1_ParamLimits

0x230a,	// (0x000af4fc) list_medium_line_t4_g4_t1

0x231f,	// (0x000af511) list_medium_line_t4_g4_t2_ParamLimits

0x231f,	// (0x000af511) list_medium_line_t4_g4_t2

0x2335,	// (0x000af527) list_medium_line_t4_g4_t3_ParamLimits

0x2335,	// (0x000af527) list_medium_line_t4_g4_t3

0x0f86,	// (0x000ae178) list_medium_line_t4_g4_t4_ParamLimits

0x0f86,	// (0x000ae178) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x000bc531) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x000bc531) list_medium_line_t4_g4_t

0x2411,	// (0x000af603) chi_dic_find_pane_g1

0x362e,	// (0x000b0820) main_tport_pane

0xa33e,	// (0x000b7530) list_medium_line_plain_t1

0xa388,	// (0x000b757a) list_medium_line_t2_g2_g1_ParamLimits

0xa388,	// (0x000b757a) list_medium_line_t2_g2_g1

0xbbac,	// (0x000b8d9e) list_medium_line_t2_g2_g2_ParamLimits

0xbbac,	// (0x000b8d9e) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x000bcbf2) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x000bcbf2) list_medium_line_t2_g2_g

0x66cc,	// (0x000b38be) list_medium_line_t2_g2_t1_ParamLimits

0x66cc,	// (0x000b38be) list_medium_line_t2_g2_t1

0x66e6,	// (0x000b38d8) list_medium_line_t2_g2_t2_ParamLimits

0x66e6,	// (0x000b38d8) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x000bcbf7) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x000bcbf7) list_medium_line_t2_g2_t

0xa4b2,	// (0x000b76a4) aid_sp_fs_list_icon_a_sm

0xbbb8,	// (0x000b8daa) aid_sp_fs_list_icon_d

0xa4ba,	// (0x000b76ac) aid_sp_fs_text_primary

0xa4c3,	// (0x000b76b5) aid_sp_fs_text_secondary

0x6d65,	// (0x000b3f57) list_medium_line

0x6d65,	// (0x000b3f57) list_medium_line_g2

0x6d65,	// (0x000b3f57) list_medium_line_g3

0x6d65,	// (0x000b3f57) list_medium_line_plain

0x6d65,	// (0x000b3f57) list_medium_line_plain_t2

0x6d65,	// (0x000b3f57) list_medium_line_plain_t3

0x6d65,	// (0x000b3f57) list_medium_line_right_icon

0x6d65,	// (0x000b3f57) list_medium_line_right_iconx2

0x6d65,	// (0x000b3f57) list_medium_line_t2

0x6d65,	// (0x000b3f57) list_medium_line_t2_g2

0x6d65,	// (0x000b3f57) list_medium_line_t2_g3

0x6d65,	// (0x000b3f57) list_medium_line_t2_right_icon

0x6d65,	// (0x000b3f57) list_medium_line_t2_right_iconx2

0x6d65,	// (0x000b3f57) list_medium_line_t3

0x6d65,	// (0x000b3f57) list_medium_line_t3_g2

0x6d65,	// (0x000b3f57) list_medium_line_t3_g3

0x6d65,	// (0x000b3f57) list_medium_line_t3_right_iconx2

0x6d6e,	// (0x000b3f60) list_medium_line_t4_g4

0x6d77,	// (0x000b3f69) list_medium_line_x2

0x6d77,	// (0x000b3f69) list_medium_line_x2_t2_g2

0x6d77,	// (0x000b3f69) list_medium_line_x2_t2_g3

0x6d77,	// (0x000b3f69) list_medium_line_x2_t2_g4

0x6d77,	// (0x000b3f69) list_medium_line_x2_t3

0x6d77,	// (0x000b3f69) list_medium_line_x2_t3_g2

0x6d77,	// (0x000b3f69) list_medium_line_x2_t3_g3

0x6d77,	// (0x000b3f69) list_medium_line_x2_t3_g4

0x6d77,	// (0x000b3f69) list_medium_line_x2_t4_g2

0x6d77,	// (0x000b3f69) list_medium_line_x2_t4_g4

0x6d80,	// (0x000b3f72) list_medium_line_x3

0x6d80,	// (0x000b3f72) list_medium_line_x3_t4

0x6d80,	// (0x000b3f72) list_medium_line_x3_t4_g4

0x6d6e,	// (0x000b3f60) list_medium_line_x4_t4

0x6d6e,	// (0x000b3f60) list_medium_line_x4_t4_g7

0x6d6e,	// (0x000b3f60) list_medium_line_x4_t5

0x6d89,	// (0x000b3f7b) list_single_fs_dyc_pane_ParamLimits

0x6d89,	// (0x000b3f7b) list_single_fs_dyc_pane

0x0f39,	// (0x000ae12b) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0f39,	// (0x000ae12b) list_medium_line_x4_t4_g7_g1

0x74da,	// (0x000b46cc) list_medium_line_x4_t4_g7_g2_ParamLimits

0x74da,	// (0x000b46cc) list_medium_line_x4_t4_g7_g2

0x74e6,	// (0x000b46d8) list_medium_line_x4_t4_g7_g3_ParamLimits

0x74e6,	// (0x000b46d8) list_medium_line_x4_t4_g7_g3

0x74f5,	// (0x000b46e7) list_medium_line_x4_t4_g7_g4_ParamLimits

0x74f5,	// (0x000b46e7) list_medium_line_x4_t4_g7_g4

0x7501,	// (0x000b46f3) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7501,	// (0x000b46f3) list_medium_line_x4_t4_g7_g5

0x7510,	// (0x000b4702) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7510,	// (0x000b4702) list_medium_line_x4_t4_g7_g6

0x751f,	// (0x000b4711) list_medium_line_x4_t4_g7_g7_ParamLimits

0x751f,	// (0x000b4711) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x000bcdc2) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x000bcdc2) list_medium_line_x4_t4_g7_g

0x752b,	// (0x000b471d) list_medium_line_x4_t4_g7_t1_ParamLimits

0x752b,	// (0x000b471d) list_medium_line_x4_t4_g7_t1

0x7540,	// (0x000b4732) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7540,	// (0x000b4732) list_medium_line_x4_t4_g7_t2

0x7555,	// (0x000b4747) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7555,	// (0x000b4747) list_medium_line_x4_t4_g7_t3

0x756a,	// (0x000b475c) list_medium_line_x4_t4_g7_t4_ParamLimits

0x756a,	// (0x000b475c) list_medium_line_x4_t4_g7_t4

0x757c,	// (0x000b476e) list_medium_line_x4_t4_g7_t5_ParamLimits

0x757c,	// (0x000b476e) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x000bcdd1) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x000bcdd1) list_medium_line_x4_t4_g7_t

0x758e,	// (0x000b4780) list_single_dyc_row_pane_ParamLimits

0x758e,	// (0x000b4780) list_single_dyc_row_pane

0x7c8f,	// (0x000b4e81) call5_gesture_pane_ParamLimits

0x7c8f,	// (0x000b4e81) call5_gesture_pane

0x7ce5,	// (0x000b4ed7) call5_windows_pane_ParamLimits

0x7ce5,	// (0x000b4ed7) call5_windows_pane

0x7d93,	// (0x000b4f85) call5_swipe_1_pane_cp_ParamLimits

0x7d93,	// (0x000b4f85) call5_swipe_1_pane_cp

0x7d9f,	// (0x000b4f91) call5_swipe_2_pane_cp_ParamLimits

0x7d9f,	// (0x000b4f91) call5_swipe_2_pane_cp

0xb363,	// (0x000b8555) call5_image_pane_cp

0x7dab,	// (0x000b4f9d) popup_call5_audio_first_window_cp_ParamLimits

0x7dab,	// (0x000b4f9d) popup_call5_audio_first_window_cp

0xe64f,	// (0x000bb841) call5_swipe_1_pane_g1_cp_ParamLimits

0xe64f,	// (0x000bb841) call5_swipe_1_pane_g1_cp

0xe68f,	// (0x000bb881) call5_swipe_1_pane_g2_cp

0xe668,	// (0x000bb85a) call5_swipe_1_pane_t1_cp_ParamLimits

0xe668,	// (0x000bb85a) call5_swipe_1_pane_t1_cp

0xe64f,	// (0x000bb841) call5_swipe_2_pane_g1_cp_ParamLimits

0xe64f,	// (0x000bb841) call5_swipe_2_pane_g1_cp

0xe697,	// (0x000bb889) call5_swipe_2_pane_g2_cp

0xe69f,	// (0x000bb891) call5_swipe_2_pane_t1_cp_ParamLimits

0xe69f,	// (0x000bb891) call5_swipe_2_pane_t1_cp

0x9568,	// (0x000b675a) main_sp_fs_email_pane

0xe6b4,	// (0x000bb8a6) main_sp_fs_listscroll_pane_te

0xa4da,	// (0x000b76cc) popup_sp_fs_action_menu_pane_ParamLimits

0xa4da,	// (0x000b76cc) popup_sp_fs_action_menu_pane

0xcc6b,	// (0x000b9e5d) bg_sp_fs_ctrlbar_pane_g1

0xd220,	// (0x000ba412) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd232,	// (0x000ba424) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd229,	// (0x000ba41b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc6b,	// (0x000b9e5d) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x000bcebf) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca4a,	// (0x000b9c3c) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca4a,	// (0x000b9c3c) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6bd,	// (0x000bb8af) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6bd,	// (0x000bb8af) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6c9,	// (0x000bb8bb) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6c9,	// (0x000bb8bb) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x000bcec8) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x000bcec8) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6d5,	// (0x000bb8c7) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6d5,	// (0x000bb8c7) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xbbc0,	// (0x000b8db2) list_medium_line_t2_right_icon_g1

0x7db9,	// (0x000b4fab) list_medium_line_t2_right_icon_t1

0x7dc9,	// (0x000b4fbb) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x000bcecd) list_medium_line_t2_right_icon_t

0xc81a,	// (0x000b9a0c) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc81a,	// (0x000b9a0c) bg_sp_fs_ctrlbar_pane

0x7e28,	// (0x000b501a) main_sp_fs_ctrlbar_button_pane_cp01

0x7e32,	// (0x000b5024) main_sp_fs_ctrlbar_ddmenu_pane

0xe727,	// (0x000bb919) main_sp_fs_ctrlbar_pane_g1

0xe733,	// (0x000bb925) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x000bced2) main_sp_fs_ctrlbar_pane_g

0xe73f,	// (0x000bb931) main_sp_fs_ctrlbar_pane_t1

0x7e3c,	// (0x000b502e) main_sp_fs_ctrlbar_pane

0x7e60,	// (0x000b5052) main_sp_fs_listscroll_pane_te_cp01

0x7e80,	// (0x000b5072) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7e80,	// (0x000b5072) popup_sp_fs_action_menu_pane_cp01

0x9568,	// (0x000b675a) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9568,	// (0x000b675a) bg_sp_fs_highlight_list_pane_cp01

0xa520,	// (0x000b7712) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa520,	// (0x000b7712) sp_fs_action_menu_list_gene_pane_g1

0xe76f,	// (0x000bb961) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe76f,	// (0x000bb961) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x000bcedc) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x000bcedc) sp_fs_action_menu_list_gene_pane_g

0xa52f,	// (0x000b7721) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa52f,	// (0x000b7721) sp_fs_action_menu_list_gene_pane_t1

0xa547,	// (0x000b7739) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa547,	// (0x000b7739) sp_fs_action_menu_list_gene_pane

0xe77c,	// (0x000bb96e) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe77c,	// (0x000bb96e) popup_sp_fs_action_menu_bg_pane

0xa56a,	// (0x000b775c) sp_fs_action_menu_list_pane_ParamLimits

0xa56a,	// (0x000b775c) sp_fs_action_menu_list_pane

0xe78a,	// (0x000bb97c) sp_fs_scroll_pane_cp01_ParamLimits

0xe78a,	// (0x000bb97c) sp_fs_scroll_pane_cp01

0x7eb6,	// (0x000b50a8) list_medium_line_plain_t2_t1

0x7ec6,	// (0x000b50b8) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x000bcee1) list_medium_line_plain_t2_t

0x7ed6,	// (0x000b50c8) list_medium_line_plain_t3_t1

0x7ee6,	// (0x000b50d8) list_medium_line_plain_t3_t2

0x7ef4,	// (0x000b50e6) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x000bcee6) list_medium_line_plain_t3_t

0x0f39,	// (0x000ae12b) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0f39,	// (0x000ae12b) list_medium_line_x2_t2_g2_g1

0x0f51,	// (0x000ae143) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0f51,	// (0x000ae143) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x000bc438) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x000bc438) list_medium_line_x2_t2_g2_g

0x230a,	// (0x000af4fc) list_medium_line_x2_t2_g2_t1_ParamLimits

0x230a,	// (0x000af4fc) list_medium_line_x2_t2_g2_t1

0x0f86,	// (0x000ae178) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0f86,	// (0x000ae178) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x000bceed) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x000bceed) list_medium_line_x2_t2_g2_t

0x0f39,	// (0x000ae12b) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0f39,	// (0x000ae12b) list_medium_line_x2_t4_g2_g1

0x7f02,	// (0x000b50f4) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7f02,	// (0x000b50f4) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x000bcef2) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x000bcef2) list_medium_line_x2_t4_g2_g

0x7f14,	// (0x000b5106) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7f14,	// (0x000b5106) list_medium_line_x2_t4_g2_t1

0x7f2e,	// (0x000b5120) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7f2e,	// (0x000b5120) list_medium_line_x2_t4_g2_t2

0x7f44,	// (0x000b5136) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7f44,	// (0x000b5136) list_medium_line_x2_t4_g2_t3

0x0f86,	// (0x000ae178) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0f86,	// (0x000ae178) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x000bcef7) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x000bcef7) list_medium_line_x2_t4_g2_t

0xbbc8,	// (0x000b8dba) list_medium_line_t3_right_iconx2_g1

0xbbc0,	// (0x000b8db2) list_medium_line_t3_right_iconx2_g2

0x7f59,	// (0x000b514b) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x000bcf00) list_medium_line_t3_right_iconx2_g

0x7f63,	// (0x000b5155) list_medium_line_t3_right_iconx2_t1

0x7f73,	// (0x000b5165) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x000bcf07) list_medium_line_t3_right_iconx2_t

0x0f39,	// (0x000ae12b) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0f39,	// (0x000ae12b) list_medium_line_x3_t4_g4_g1

0x0f45,	// (0x000ae137) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0f45,	// (0x000ae137) list_medium_line_x3_t4_g4_g2

0x0fed,	// (0x000ae1df) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0fed,	// (0x000ae1df) list_medium_line_x3_t4_g4_g3

0x7f81,	// (0x000b5173) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7f81,	// (0x000b5173) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x000bcf0c) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x000bcf0c) list_medium_line_x3_t4_g4_g

0x7f8d,	// (0x000b517f) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7f8d,	// (0x000b517f) list_medium_line_x3_t4_g4_t1

0x7fa4,	// (0x000b5196) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7fa4,	// (0x000b5196) list_medium_line_x3_t4_g4_t2

0x7fbf,	// (0x000b51b1) list_medium_line_x3_t4_g4_t3_ParamLimits

0x7fbf,	// (0x000b51b1) list_medium_line_x3_t4_g4_t3

0x7fd4,	// (0x000b51c6) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7fd4,	// (0x000b51c6) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x000bcf15) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x000bcf15) list_medium_line_x3_t4_g4_t

0x7ff1,	// (0x000b51e3) list_single_dyc_row_text_pane_t1_ParamLimits

0x7ff1,	// (0x000b51e3) list_single_dyc_row_text_pane_t1

0x803a,	// (0x000b522c) list_single_dyc_row_text_pane_t2_ParamLimits

0x803a,	// (0x000b522c) list_single_dyc_row_text_pane_t2

0xa58e,	// (0x000b7780) list_single_dyc_row_text_pane_t3_ParamLimits

0xa58e,	// (0x000b7780) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x000bcf1e) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x000bcf1e) list_single_dyc_row_text_pane_t

0xa5b2,	// (0x000b77a4) list_single_dyc_row_pane_g1_ParamLimits

0xa5b2,	// (0x000b77a4) list_single_dyc_row_pane_g1

0xa5be,	// (0x000b77b0) list_single_dyc_row_pane_g2_ParamLimits

0xa5be,	// (0x000b77b0) list_single_dyc_row_pane_g2

0xa5ca,	// (0x000b77bc) list_single_dyc_row_pane_g3_ParamLimits

0xa5ca,	// (0x000b77bc) list_single_dyc_row_pane_g3

0xa5d6,	// (0x000b77c8) list_single_dyc_row_pane_g4_ParamLimits

0xa5d6,	// (0x000b77c8) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x000bcf2b) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x000bcf2b) list_single_dyc_row_pane_g

0xa5e2,	// (0x000b77d4) list_single_dyc_row_text_pane_ParamLimits

0xa5e2,	// (0x000b77d4) list_single_dyc_row_text_pane

0x9517,	// (0x000b6709) bg_sp_fs_scroll_pane

0xe7b0,	// (0x000bb9a2) thumb_sp_fs_scroll_pane

0xa388,	// (0x000b757a) list_medium_line_g1_ParamLimits

0xa388,	// (0x000b757a) list_medium_line_g1

0xa601,	// (0x000b77f3) list_medium_line_t1_ParamLimits

0xa601,	// (0x000b77f3) list_medium_line_t1

0x0f39,	// (0x000ae12b) list_medium_line_x2_g1_ParamLimits

0x0f39,	// (0x000ae12b) list_medium_line_x2_g1

0x0f45,	// (0x000ae137) list_medium_line_x2_g2_ParamLimits

0x0f45,	// (0x000ae137) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x000bcf34) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x000bcf34) list_medium_line_x2_g

0xa616,	// (0x000b7808) list_medium_line_x2_t1_ParamLimits

0xa616,	// (0x000b7808) list_medium_line_x2_t1

0x0f39,	// (0x000ae12b) list_medium_line_x3_g1_ParamLimits

0x0f39,	// (0x000ae12b) list_medium_line_x3_g1

0x0f45,	// (0x000ae137) list_medium_line_x3_g2_ParamLimits

0x0f45,	// (0x000ae137) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x000bcf34) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x000bcf34) list_medium_line_x3_g

0xa616,	// (0x000b7808) list_medium_line_x3_t1_ParamLimits

0xa616,	// (0x000b7808) list_medium_line_x3_t1

0xe7b9,	// (0x000bb9ab) thumb_sp_fs_scroll_pane_g1

0xe7c2,	// (0x000bb9b4) thumb_sp_fs_scroll_pane_g2

0xe7cb,	// (0x000bb9bd) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000bcf39) thumb_sp_fs_scroll_pane_g

0xe7b9,	// (0x000bb9ab) bg_sp_fs_scroll_pane_g1

0xe7c2,	// (0x000bb9b4) bg_sp_fs_scroll_pane_g2

0xe7cb,	// (0x000bb9bd) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000bcf39) bg_sp_fs_scroll_pane_g

0x0f39,	// (0x000ae12b) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0f39,	// (0x000ae12b) list_medium_line_x2_t3_g4_g1

0x0fe1,	// (0x000ae1d3) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0fe1,	// (0x000ae1d3) list_medium_line_x2_t3_g4_g2

0x0f45,	// (0x000ae137) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0f45,	// (0x000ae137) list_medium_line_x2_t3_g4_g3

0x0f51,	// (0x000ae143) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0f51,	// (0x000ae143) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000bc4b4) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000bc4b4) list_medium_line_x2_t3_g4_g

0x816f,	// (0x000b5361) list_medium_line_x2_t3_g4_t1_ParamLimits

0x816f,	// (0x000b5361) list_medium_line_x2_t3_g4_t1

0x8185,	// (0x000b5377) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8185,	// (0x000b5377) list_medium_line_x2_t3_g4_t2

0x0f86,	// (0x000ae178) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0f86,	// (0x000ae178) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x000bcf40) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x000bcf40) list_medium_line_x2_t3_g4_t

0xa388,	// (0x000b757a) list_medium_line_g2_g1_ParamLimits

0xa388,	// (0x000b757a) list_medium_line_g2_g1

0xbbac,	// (0x000b8d9e) list_medium_line_g2_g2_ParamLimits

0xbbac,	// (0x000b8d9e) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x000bcbf2) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x000bcbf2) list_medium_line_g2_g

0xa62c,	// (0x000b781e) list_medium_line_g2_t1_ParamLimits

0xa62c,	// (0x000b781e) list_medium_line_g2_t1

0xa388,	// (0x000b757a) list_medium_line_t3_g2_g1_ParamLimits

0xa388,	// (0x000b757a) list_medium_line_t3_g2_g1

0xbbac,	// (0x000b8d9e) list_medium_line_t3_g2_g2_ParamLimits

0xbbac,	// (0x000b8d9e) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x000bcbf2) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x000bcbf2) list_medium_line_t3_g2_g

0x819e,	// (0x000b5390) list_medium_line_t3_g2_t1_ParamLimits

0x819e,	// (0x000b5390) list_medium_line_t3_g2_t1

0x81b5,	// (0x000b53a7) list_medium_line_t3_g2_t2_ParamLimits

0x81b5,	// (0x000b53a7) list_medium_line_t3_g2_t2

0x81ca,	// (0x000b53bc) list_medium_line_t3_g2_t3_ParamLimits

0x81ca,	// (0x000b53bc) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x000bcf47) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x000bcf47) list_medium_line_t3_g2_t

0xbbc0,	// (0x000b8db2) list_medium_line_right_icon_g1

0xa641,	// (0x000b7833) list_medium_line_right_icon_t1

0xa388,	// (0x000b757a) list_medium_line_t2_g1_ParamLimits

0xa388,	// (0x000b757a) list_medium_line_t2_g1

0x81e3,	// (0x000b53d5) list_medium_line_t2_t1_ParamLimits

0x81e3,	// (0x000b53d5) list_medium_line_t2_t1

0x81fd,	// (0x000b53ef) list_medium_line_t2_t2_ParamLimits

0x81fd,	// (0x000b53ef) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x000bcf4e) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x000bcf4e) list_medium_line_t2_t

0xa388,	// (0x000b757a) list_medium_line_t3_g1_ParamLimits

0xa388,	// (0x000b757a) list_medium_line_t3_g1

0x8216,	// (0x000b5408) list_medium_line_t3_t1_ParamLimits

0x8216,	// (0x000b5408) list_medium_line_t3_t1

0x8230,	// (0x000b5422) list_medium_line_t3_t2_ParamLimits

0x8230,	// (0x000b5422) list_medium_line_t3_t2

0x8246,	// (0x000b5438) list_medium_line_t3_t3_ParamLimits

0x8246,	// (0x000b5438) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x000bcf53) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x000bcf53) list_medium_line_t3_t

0xa388,	// (0x000b757a) list_medium_line_g3_g1_ParamLimits

0xa388,	// (0x000b757a) list_medium_line_g3_g1

0xbbd0,	// (0x000b8dc2) list_medium_line_g3_g2_ParamLimits

0xbbd0,	// (0x000b8dc2) list_medium_line_g3_g2

0xbbac,	// (0x000b8d9e) list_medium_line_g3_g3_ParamLimits

0xbbac,	// (0x000b8d9e) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x000bcf5a) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x000bcf5a) list_medium_line_g3_g

0xa64f,	// (0x000b7841) list_medium_line_g3_t1_ParamLimits

0xa64f,	// (0x000b7841) list_medium_line_g3_t1

0xa388,	// (0x000b757a) list_medium_line_t2_g3_g1_ParamLimits

0xa388,	// (0x000b757a) list_medium_line_t2_g3_g1

0xbbd0,	// (0x000b8dc2) list_medium_line_t2_g3_g2_ParamLimits

0xbbd0,	// (0x000b8dc2) list_medium_line_t2_g3_g2

0xbbac,	// (0x000b8d9e) list_medium_line_t2_g3_g3_ParamLimits

0xbbac,	// (0x000b8d9e) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x000bcf5a) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x000bcf5a) list_medium_line_t2_g3_g

0x825b,	// (0x000b544d) list_medium_line_t2_g3_t1_ParamLimits

0x825b,	// (0x000b544d) list_medium_line_t2_g3_t1

0x8275,	// (0x000b5467) list_medium_line_t2_g3_t2_ParamLimits

0x8275,	// (0x000b5467) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x000bcf61) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x000bcf61) list_medium_line_t2_g3_t

0xa388,	// (0x000b757a) list_medium_line_t3_g3_g1_ParamLimits

0xa388,	// (0x000b757a) list_medium_line_t3_g3_g1

0xbbd0,	// (0x000b8dc2) list_medium_line_t3_g3_g2_ParamLimits

0xbbd0,	// (0x000b8dc2) list_medium_line_t3_g3_g2

0xbbac,	// (0x000b8d9e) list_medium_line_t3_g3_g3_ParamLimits

0xbbac,	// (0x000b8d9e) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x000bcf5a) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x000bcf5a) list_medium_line_t3_g3_g

0x828f,	// (0x000b5481) list_medium_line_t3_g3_t1_ParamLimits

0x828f,	// (0x000b5481) list_medium_line_t3_g3_t1

0x82a3,	// (0x000b5495) list_medium_line_t3_g3_t2_ParamLimits

0x82a3,	// (0x000b5495) list_medium_line_t3_g3_t2

0x82b5,	// (0x000b54a7) list_medium_line_t3_g3_t3_ParamLimits

0x82b5,	// (0x000b54a7) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x000bcf66) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x000bcf66) list_medium_line_t3_g3_t

0xbbc8,	// (0x000b8dba) list_medium_line_right_iconx2_g1

0xbbc0,	// (0x000b8db2) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000bcf6d) list_medium_line_right_iconx2_g

0xbbdc,	// (0x000b8dce) list_medium_line_right_iconx2_t1

0xbbc8,	// (0x000b8dba) list_medium_line_t2_right_iconx2_g1

0xbbc0,	// (0x000b8db2) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000bcf6d) list_medium_line_t2_right_iconx2_g

0x82c9,	// (0x000b54bb) list_medium_line_t2_right_iconx2_t1

0x82d9,	// (0x000b54cb) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x000bcf72) list_medium_line_t2_right_iconx2_t

0x82eb,	// (0x000b54dd) list_medium_line_x4_t4_t1

0x82f9,	// (0x000b54eb) list_medium_line_x4_t4_t2

0x8309,	// (0x000b54fb) list_medium_line_x4_t4_t3

0x8319,	// (0x000b550b) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x000bcf77) list_medium_line_x4_t4_t

0x836c,	// (0x000b555e) tport_appsw_pane_ParamLimits

0x836c,	// (0x000b555e) tport_appsw_pane

0x8384,	// (0x000b5576) tport_contact_pane_ParamLimits

0x8384,	// (0x000b5576) tport_contact_pane

0x839c,	// (0x000b558e) tport_listscroll_pane_ParamLimits

0x839c,	// (0x000b558e) tport_listscroll_pane

0x83b6,	// (0x000b55a8) cell_tport_appsw_pane_ParamLimits

0x83b6,	// (0x000b55a8) cell_tport_appsw_pane

0xd677,	// (0x000ba869) tport_appsw_pane_g1_ParamLimits

0xd677,	// (0x000ba869) tport_appsw_pane_g1

0xe7d4,	// (0x000bb9c6) tport_contact_pane_g1

0xe7dd,	// (0x000bb9cf) tport_contact_pane_t1

0xe7eb,	// (0x000bb9dd) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x000bcf80) tport_contact_pane_t

0xe7f9,	// (0x000bb9eb) list_tport_pane

0xe802,	// (0x000bb9f4) scroll_pane_cp_030

0x8408,	// (0x000b55fa) cell_tport_appsw_pane_g1

0x8418,	// (0x000b560a) cell_tport_appsw_pane_t1

0x8426,	// (0x000b5618) grid_highlight_pane_cp019

0x842e,	// (0x000b5620) list_tport_double_graphic_pane_ParamLimits

0x842e,	// (0x000b5620) list_tport_double_graphic_pane

0x9568,	// (0x000b675a) list_highlight_pane_cp023_ParamLimits

0x9568,	// (0x000b675a) list_highlight_pane_cp023

0x843b,	// (0x000b562d) list_tport_double_graphic_pane_g1_ParamLimits

0x843b,	// (0x000b562d) list_tport_double_graphic_pane_g1

0x8448,	// (0x000b563a) list_tport_double_graphic_pane_t1_ParamLimits

0x8448,	// (0x000b563a) list_tport_double_graphic_pane_t1

0x845d,	// (0x000b564f) list_tport_double_graphic_pane_t2_ParamLimits

0x845d,	// (0x000b564f) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x000bcf8c) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x000bcf8c) list_tport_double_graphic_pane_t

0x9517,	// (0x000b6709) main_cale_note_pane

0x5e29,	// (0x000b301b) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5e29,	// (0x000b301b) cell_vitu2_function_top_wide_pane_cp01

0x78f1,	// (0x000b4ae3) wait_bar_pane_cp05_ParamLimits

0x9568,	// (0x000b675a) listscroll_cmail_pane

0xe813,	// (0x000bba05) list_cmail_pane

0x8479,	// (0x000b566b) list_cmail_body_pane

0xe82a,	// (0x000bba1c) list_single_cmail_header_caption_pane

0x848c,	// (0x000b567e) list_single_cmail_header_detail_pane_ParamLimits

0x848c,	// (0x000b567e) list_single_cmail_header_detail_pane

0x84b7,	// (0x000b56a9) list_single_cmail_header_caption_pane_t1

0x84c7,	// (0x000b56b9) list_single_cmail_header_detail_pane_g1_ParamLimits

0x84c7,	// (0x000b56b9) list_single_cmail_header_detail_pane_g1

0xbbea,	// (0x000b8ddc) list_single_cmail_header_detail_pane_g2_ParamLimits

0xbbea,	// (0x000b8ddc) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x000bcf91) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x000bcf91) list_single_cmail_header_detail_pane_g

0x84df,	// (0x000b56d1) list_single_cmail_header_detail_pane_t1_ParamLimits

0x84df,	// (0x000b56d1) list_single_cmail_header_detail_pane_t1

0x852f,	// (0x000b5721) list_single_cmail_header_editor_pane_bg_ParamLimits

0x852f,	// (0x000b5721) list_single_cmail_header_editor_pane_bg

0xe2f0,	// (0x000bb4e2) list_cmail_body_pane_g1

0xe85b,	// (0x000bba4d) list_cmail_body_pane_t1

0xd697,	// (0x000ba889) list_single_cmail_header_editor_pane_bg_g1

0xac8a,	// (0x000b7e7c) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6a7,	// (0x000ba899) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd69f,	// (0x000ba891) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8c1,	// (0x000baab3) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6c7,	// (0x000ba8b9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6b7,	// (0x000ba8a9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6bf,	// (0x000ba8b1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac6a,	// (0x000b7e5c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8548,	// (0x000b573a) calenote_gesture_pane_ParamLimits

0x8548,	// (0x000b573a) calenote_gesture_pane

0x8568,	// (0x000b575a) calenote_window_pane_ParamLimits

0x8568,	// (0x000b575a) calenote_window_pane

0xe869,	// (0x000bba5b) popup_note_window_cp01

0x8584,	// (0x000b5776) calenote_swipe_1_pane_ParamLimits

0x8584,	// (0x000b5776) calenote_swipe_1_pane

0x7d9f,	// (0x000b4f91) calenote_swipe_2_pane_ParamLimits

0x7d9f,	// (0x000b4f91) calenote_swipe_2_pane

0xe64f,	// (0x000bb841) calenote_swipe_1_pane_g1_ParamLimits

0xe64f,	// (0x000bb841) calenote_swipe_1_pane_g1

0xe65c,	// (0x000bb84e) calenote_swipe_1_pane_g2_ParamLimits

0xe65c,	// (0x000bb84e) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x000bceb5) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x000bceb5) calenote_swipe_1_pane_g

0xe87b,	// (0x000bba6d) calenote_swipe_1_pane_t1_ParamLimits

0xe87b,	// (0x000bba6d) calenote_swipe_1_pane_t1

0xe64f,	// (0x000bb841) calenote_swipe_2_pane_g1_ParamLimits

0xe64f,	// (0x000bb841) calenote_swipe_2_pane_g1

0xe89a,	// (0x000bba8c) calenote_swipe_2_pane_g2_ParamLimits

0xe89a,	// (0x000bba8c) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x000bcf9d) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x000bcf9d) calenote_swipe_2_pane_g

0xe8a6,	// (0x000bba98) calenote_swipe_2_pane_t1_ParamLimits

0xe8a6,	// (0x000bba98) calenote_swipe_2_pane_t1

0x9517,	// (0x000b6709) main_mup_navstr_pane

0x4a81,	// (0x000b1c73) main_mup3_pane_t7_ParamLimits

0x4a81,	// (0x000b1c73) main_mup3_pane_t7

0xa00d,	// (0x000b71ff) main_mp4_pane_g6_ParamLimits

0xa00d,	// (0x000b71ff) main_mp4_pane_g6

0xa1b1,	// (0x000b73a3) main_image3_pane_t4_ParamLimits

0xa1b1,	// (0x000b73a3) main_image3_pane_t4

0x8599,	// (0x000b578b) popup_navstr_preview_pane_ParamLimits

0x8599,	// (0x000b578b) popup_navstr_preview_pane

0x85a9,	// (0x000b579b) scroll_navstr_pane_ParamLimits

0x85a9,	// (0x000b579b) scroll_navstr_pane

0x9517,	// (0x000b6709) bg_popup_preview_window_pane_cp04

0xe8cd,	// (0x000bbabf) popup_navstr_preview_pane_t1

0x85bd,	// (0x000b57af) scroll_navstr_pane_g1_ParamLimits

0x85bd,	// (0x000b57af) scroll_navstr_pane_g1

0x85d1,	// (0x000b57c3) scroll_navstr_pane_t1_ParamLimits

0x85d1,	// (0x000b57c3) scroll_navstr_pane_t1

0xe872,	// (0x000bba64) bg_button_pane_cp014

0xe872,	// (0x000bba64) bg_button_pane_cp030

0x7c35,	// (0x000b4e27) list_double_fisheye_pane_g4_ParamLimits

0x7c35,	// (0x000b4e27) list_double_fisheye_pane_g4

0x7c41,	// (0x000b4e33) list_double_fisheye_pane_g5_ParamLimits

0x7c41,	// (0x000b4e33) list_double_fisheye_pane_g5

0xe81b,	// (0x000bba0d) sp_fs_scroll_pane_cp03

0xe727,	// (0x000bb919) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe733,	// (0x000bb925) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x000bced2) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe73f,	// (0x000bb931) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x846f,	// (0x000b5661) sp_fs_scroll_pane_cp02

0xa977,	// (0x000b7b69) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa977,	// (0x000b7b69) popup_sp_fs_calendar_preview_list_single_pane

0x9517,	// (0x000b6709) main_cam6_pano_pane

0x9568,	// (0x000b675a) main_mup3_pane_ParamLimits

0x9517,	// (0x000b6709) main_phacti_pane

0x77c4,	// (0x000b49b6) bg_button_pane_cp11

0x77de,	// (0x000b49d0) main_mobtv_info_pane_g2_ParamLimits

0x77de,	// (0x000b49d0) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x000bce32) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x000bce32) main_mobtv_info_pane_g

0x79b9,	// (0x000b4bab) sc_clock_pane_t5_ParamLimits

0x79b9,	// (0x000b4bab) sc_clock_pane_t5

0x7a97,	// (0x000b4c89) main_radioblah_pane_g1_ParamLimits

0xe59b,	// (0x000bb78d) main_radioblah_pane_t3_ParamLimits

0xe59b,	// (0x000bb78d) main_radioblah_pane_t3

0xe5b3,	// (0x000bb7a5) main_radioblah_pane_t4_ParamLimits

0xe5b3,	// (0x000bb7a5) main_radioblah_pane_t4

0x7abf,	// (0x000b4cb1) main_radioblah_text_pane_ParamLimits

0x7abf,	// (0x000b4cb1) main_radioblah_text_pane

0x7ad1,	// (0x000b4cc3) main_radioblah_info_pane_g1_ParamLimits

0x7b6a,	// (0x000b4d5c) main_radioblah_info_pane_t4_ParamLimits

0x7b6a,	// (0x000b4d5c) main_radioblah_info_pane_t4

0x9568,	// (0x000b675a) main_sp_fs_calendar_pane

0x85e8,	// (0x000b57da) main_phacti_pane_g1

0x85f0,	// (0x000b57e2) phacti_note_pane_ParamLimits

0x85f0,	// (0x000b57e2) phacti_note_pane

0xe8e4,	// (0x000bbad6) phacti_term_pane_ParamLimits

0xe8e4,	// (0x000bbad6) phacti_term_pane

0xe8f9,	// (0x000bbaeb) phacti_note_pane_t1_ParamLimits

0xe8f9,	// (0x000bbaeb) phacti_note_pane_t1

0xa688,	// (0x000b787a) phacti_term_pane_g1

0xa690,	// (0x000b7882) phacti_term_pane_t1_ParamLimits

0xa690,	// (0x000b7882) phacti_term_pane_t1

0xe910,	// (0x000bbb02) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe918,	// (0x000bbb0a) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x000bcfa7) popup_sp_fs_calendar_preview_list_single_pane_g

0xe920,	// (0x000bbb12) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe920,	// (0x000bbb12) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe936,	// (0x000bbb28) aid_popup_sp_fs_bg_corner_pane

0xcc6b,	// (0x000b9e5d) popup_sp_fs_calendar_preview_bg_pane_g1

0x9517,	// (0x000b6709) popup_sp_fs_calendar_preview_bg_pane

0xe93e,	// (0x000bbb30) popup_sp_fs_calendar_preview_list_pane

0xc81a,	// (0x000b9a0c) bg_main_sp_fs_cale_pane_ParamLimits

0xc81a,	// (0x000b9a0c) bg_main_sp_fs_cale_pane

0xa6c3,	// (0x000b78b5) listscroll_cale_mrui_pane_ParamLimits

0xa6c3,	// (0x000b78b5) listscroll_cale_mrui_pane

0xa6d8,	// (0x000b78ca) listscroll_sp_fs_schedule_track_pane

0xa6e1,	// (0x000b78d3) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa6e1,	// (0x000b78d3) main_sp_fs_ctrlbar_pane_cp01

0xe946,	// (0x000bbb38) main_sp_fs_ribbon_pane

0xa6f4,	// (0x000b78e6) popup_sp_fs_cale_preview_window

0x8661,	// (0x000b5853) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8661,	// (0x000b5853) list_single_sp_fs_schedule_track_pane

0x9568,	// (0x000b675a) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9568,	// (0x000b675a) bg_sp_fs_highlight_list_pane_cp03

0x8675,	// (0x000b5867) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8675,	// (0x000b5867) list_single_sp_fs_schedule_track_pane_g1

0x8681,	// (0x000b5873) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8681,	// (0x000b5873) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x000bcfac) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x000bcfac) list_single_sp_fs_schedule_track_pane_g

0x868d,	// (0x000b587f) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x868d,	// (0x000b587f) list_single_sp_fs_schedule_track_pane_t1

0x86af,	// (0x000b58a1) sp_fs_schedule_track_pane_ParamLimits

0x86af,	// (0x000b58a1) sp_fs_schedule_track_pane

0xe94e,	// (0x000bbb40) sp_fs_schedule_track_pane_g1

0xe956,	// (0x000bbb48) sp_fs_schedule_track_pane_g2

0xe95e,	// (0x000bbb50) sp_fs_schedule_track_pane_g3

0xe966,	// (0x000bbb58) sp_fs_schedule_track_pane_g4

0xe96e,	// (0x000bbb60) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x000bcfb1) sp_fs_schedule_track_pane_g

0xd697,	// (0x000ba889) bg_sp_fs_schedule_viewer_highlight_g1

0xac8a,	// (0x000b7e7c) bg_sp_fs_schedule_viewer_highlight_g2

0xd69f,	// (0x000ba891) bg_sp_fs_schedule_viewer_highlight_g3

0xd6a7,	// (0x000ba899) bg_sp_fs_schedule_viewer_highlight_g4

0xd8c1,	// (0x000baab3) bg_sp_fs_schedule_viewer_highlight_g5

0xd6b7,	// (0x000ba8a9) bg_sp_fs_schedule_viewer_highlight_g6

0xd6bf,	// (0x000ba8b1) bg_sp_fs_schedule_viewer_highlight_g7

0xd6c7,	// (0x000ba8b9) bg_sp_fs_schedule_viewer_highlight_g8

0xac6a,	// (0x000b7e5c) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x000bcfbc) bg_sp_fs_schedule_viewer_highlight_g

0x9517,	// (0x000b6709) bg_main_sp_fs_ribbon_pane

0x86c4,	// (0x000b58b6) main_sp_fs_ribbon_pane_g1

0xe976,	// (0x000bbb68) main_sp_fs_ribbon_pane_t1

0x86cd,	// (0x000b58bf) main_sp_fs_ribbon_pane_t2

0xe985,	// (0x000bbb77) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x000bcfcf) main_sp_fs_ribbon_pane_t

0xe994,	// (0x000bbb86) main_sp_fs_ribbon_scheduler_pane

0xe99c,	// (0x000bbb8e) bg_main_sp_fs_ribbon_pane_g1

0xe9a5,	// (0x000bbb97) bg_main_sp_fs_ribbon_pane_g2

0xe9ae,	// (0x000bbba0) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x000bcfd6) bg_main_sp_fs_ribbon_pane_g

0xe9b6,	// (0x000bbba8) main_sp_fs_ribbon_scheduler_pane_g1

0xe9bf,	// (0x000bbbb1) main_sp_fs_ribbon_scheduler_pane_g2

0xe9c8,	// (0x000bbbba) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x000bcfdd) main_sp_fs_ribbon_scheduler_pane_g

0xe9d1,	// (0x000bbbc3) list_cale_mrui_pane

0x86dc,	// (0x000b58ce) sp_fs_scroll_pane_cp07_ParamLimits

0x86dc,	// (0x000b58ce) sp_fs_scroll_pane_cp07

0x86f8,	// (0x000b58ea) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x86f8,	// (0x000b58ea) bg_sp_fs_schedule_viewer_highlight

0xe9de,	// (0x000bbbd0) list_single_sp_fs_schedule_track_pane_cp01

0xe9e6,	// (0x000bbbd8) list_sp_fs_schedule_track_pane

0xe9ee,	// (0x000bbbe0) sp_fs_scroll_pane_cp06_ParamLimits

0xe9ee,	// (0x000bbbe0) sp_fs_scroll_pane_cp06

0xcc6b,	// (0x000b9e5d) bgmain_sp_fs_calendar_pane_g1

0x870a,	// (0x000b58fc) list_single_cale_mrui_pane_ParamLimits

0x870a,	// (0x000b58fc) list_single_cale_mrui_pane

0xa706,	// (0x000b78f8) list_single_cale_mrui_row_pane_ParamLimits

0xa706,	// (0x000b78f8) list_single_cale_mrui_row_pane

0xa71c,	// (0x000b790e) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa71c,	// (0x000b790e) list_single_cale_mrui_row_pane_g1

0xa748,	// (0x000b793a) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa748,	// (0x000b793a) list_single_cale_mrui_row_pane_t1

0x871f,	// (0x000b5911) list_single_cale_mrui_row_pane_t2_ParamLimits

0x871f,	// (0x000b5911) list_single_cale_mrui_row_pane_t2

0xa75a,	// (0x000b794c) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa75a,	// (0x000b794c) list_single_cale_mrui_row_pane_t3

0xa789,	// (0x000b797b) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa789,	// (0x000b797b) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x000bcfeb) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x000bcfeb) list_single_cale_mrui_row_pane_t

0x8787,	// (0x000b5979) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8787,	// (0x000b5979) list_single_cmail_header_editor_pane_bg_cp01

0x87ab,	// (0x000b599d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x87ab,	// (0x000b599d) list_single_cmail_header_editor_pane_bg_cp02

0x87c9,	// (0x000b59bb) main_radioblah_text_pane_t1_ParamLimits

0x87c9,	// (0x000b59bb) main_radioblah_text_pane_t1

0xea0d,	// (0x000bbbff) cam6_indi_pane_cp01

0xea15,	// (0x000bbc07) cam6_mode_pane_cp01

0xea1d,	// (0x000bbc0f) cam6_pano_pane

0xea26,	// (0x000bbc18) cam6_zoom_pane_cp01

0xea30,	// (0x000bbc22) cam6_pano_image_pane

0xea39,	// (0x000bbc2b) cam6_pano_pane_g1

0xe2f0,	// (0x000bb4e2) cam6_pano_pane_g2

0xea42,	// (0x000bbc34) cam6_pano_pane_g3

0xea4b,	// (0x000bbc3d) cam6_pano_pane_g4

0xd20d,	// (0x000ba3ff) cam6_pano_pane_g5

0xea54,	// (0x000bbc46) cam6_pano_pane_g6

0xea5c,	// (0x000bbc4e) cam6_pano_pane_g7

0xea64,	// (0x000bbc56) cam6_pano_pane_g8

0xea6d,	// (0x000bbc5f) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x000bcff4) cam6_pano_pane_g

0x9517,	// (0x000b6709) main_browser_tag_pane

0xe8c5,	// (0x000bbab7) grid_navstr_albumart_pane

0xea78,	// (0x000bbc6a) cell_navstr_albumart_pane_ParamLimits

0xea78,	// (0x000bbc6a) cell_navstr_albumart_pane

0xea97,	// (0x000bbc89) cell_navstr_albumart_pane_g1

0xc627,	// (0x000b9819) cell_navstr_albumart_pane_g2

0xc637,	// (0x000b9829) cell_navstr_albumart_pane_g3

0xc62f,	// (0x000b9821) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x000bd007) cell_navstr_albumart_pane_g

0x87e4,	// (0x000b59d6) bt_list_pane_ParamLimits

0x87e4,	// (0x000b59d6) bt_list_pane

0x87fa,	// (0x000b59ec) bt_list_pane_t1

0x8809,	// (0x000b59fb) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x000bd010) bt_list_pane_t

0x9517,	// (0x000b6709) main_cale_prevew_pane

0x8818,	// (0x000b5a0a) popup_cale_preview_window_ParamLimits

0x8818,	// (0x000b5a0a) popup_cale_preview_window

0x9568,	// (0x000b675a) bg_popup_preview_window_pane_cp05_ParamLimits

0x9568,	// (0x000b675a) bg_popup_preview_window_pane_cp05

0xea9f,	// (0x000bbc91) list_cale_preview_pane_ParamLimits

0xea9f,	// (0x000bbc91) list_cale_preview_pane

0x8835,	// (0x000b5a27) list_double_cale_preview_pane_ParamLimits

0x8835,	// (0x000b5a27) list_double_cale_preview_pane

0x8849,	// (0x000b5a3b) list_single_cale_preview_pane_ParamLimits

0x8849,	// (0x000b5a3b) list_single_cale_preview_pane

0x8861,	// (0x000b5a53) list_single_cale_preview_pane_g1

0x8869,	// (0x000b5a5b) list_single_cale_preview_pane_t1_ParamLimits

0x8869,	// (0x000b5a5b) list_single_cale_preview_pane_t1

0x887e,	// (0x000b5a70) list_double_cale_preview_pane_g1

0x8886,	// (0x000b5a78) list_double_cale_preview_pane_t1_ParamLimits

0x8886,	// (0x000b5a78) list_double_cale_preview_pane_t1

0x889b,	// (0x000b5a8d) list_double_cale_preview_pane_t2_ParamLimits

0x889b,	// (0x000b5a8d) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x000bd015) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x000bd015) list_double_cale_preview_pane_t

0x9517,	// (0x000b6709) main_ezdial_pane

0x9568,	// (0x000b675a) main_sp_fs_email_pane_ParamLimits

0x7ddb,	// (0x000b4fcd) cmail_ddmenu_btn01_pane_ParamLimits

0x7ddb,	// (0x000b4fcd) cmail_ddmenu_btn01_pane

0x7dee,	// (0x000b4fe0) cmail_ddmenu_btn02_pane_ParamLimits

0x7dee,	// (0x000b4fe0) cmail_ddmenu_btn02_pane

0x7e11,	// (0x000b5003) cmail_ddmenu_btn03_pane_ParamLimits

0x7e11,	// (0x000b5003) cmail_ddmenu_btn03_pane

0x7e3c,	// (0x000b502e) main_sp_fs_ctrlbar_pane_ParamLimits

0x7e60,	// (0x000b5052) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8479,	// (0x000b566b) list_cmail_body_pane_ParamLimits

0xe845,	// (0x000bba37) bg_button_pane_cp12

0xe84e,	// (0x000bba40) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe84e,	// (0x000bba40) list_single_cmail_header_detail_pane_g3

0xa664,	// (0x000b7856) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa664,	// (0x000b7856) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x000bcf98) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x000bcf98) list_single_cmail_header_detail_pane_t

0xa6a5,	// (0x000b7897) phacti_term_pane_t2_ParamLimits

0xa6a5,	// (0x000b7897) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x000bcfa2) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x000bcfa2) phacti_term_pane_t

0xeaab,	// (0x000bbc9d) aid_size_list_single_double

0x88b3,	// (0x000b5aa5) popup_ezdial_listscroll_window

0x88cf,	// (0x000b5ac1) popup_number_entry_window_cp01

0xb363,	// (0x000b8555) bg_popup_call_pane_cp09

0xeab7,	// (0x000bbca9) ezdial_list_pane

0xeabf,	// (0x000bbcb1) scroll_pane_cp23

0xc81a,	// (0x000b9a0c) bg_button_pane_cp028_ParamLimits

0xc81a,	// (0x000b9a0c) bg_button_pane_cp028

0x88dd,	// (0x000b5acf) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x88dd,	// (0x000b5acf) cmail_ddmenu_btn01_pane_g1

0x88ec,	// (0x000b5ade) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x88ec,	// (0x000b5ade) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x000bd01a) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x000bd01a) cmail_ddmenu_btn01_pane_g

0xeac7,	// (0x000bbcb9) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeac7,	// (0x000bbcb9) cmail_ddmenu_btn01_pane_t1

0xc81a,	// (0x000b9a0c) bg_button_pane_cp029_ParamLimits

0xc81a,	// (0x000b9a0c) bg_button_pane_cp029

0x8902,	// (0x000b5af4) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8902,	// (0x000b5af4) cmail_ddmenu_btn02_pane_g1

0x891d,	// (0x000b5b0f) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x891d,	// (0x000b5b0f) cmail_ddmenu_btn02_pane_t1

0x9568,	// (0x000b675a) bg_button_pane_cp031_ParamLimits

0x9568,	// (0x000b675a) bg_button_pane_cp031

0x8902,	// (0x000b5af4) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8902,	// (0x000b5af4) cmail_ddmenu_btn03_pane_g1

0x891d,	// (0x000b5b0f) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x891d,	// (0x000b5b0f) cmail_ddmenu_btn03_pane_t1

0x5661,	// (0x000b2853) cell_dialer2_keypad_pane_t1_ParamLimits

0x567b,	// (0x000b286d) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x567b,	// (0x000b286d) cell_dialer2_keypad_pane_t1_copy1

0x761b,	// (0x000b480d) ncimui_group_button_pane

0x9568,	// (0x000b675a) main_sp_fs_calendar_pane_ParamLimits

0xe82a,	// (0x000bba1c) list_single_cmail_header_caption_pane_ParamLimits

0xa6ba,	// (0x000b78ac) aid_recal_txt_sm_pane

0x9517,	// (0x000b6709) mian_recal_day_pane

0xa6f4,	// (0x000b78e6) popup_sp_fs_cale_preview_window_ParamLimits

0xeadd,	// (0x000bbccf) list_recal_day_pane

0xa7d4,	// (0x000b79c6) list_single_recal_day_pane_ParamLimits

0xa7d4,	// (0x000b79c6) list_single_recal_day_pane

0xeb04,	// (0x000bbcf6) list_single_recal_day_pane_g1_ParamLimits

0xeb04,	// (0x000bbcf6) list_single_recal_day_pane_g1

0xa7e6,	// (0x000b79d8) list_single_recal_day_pane_g2_ParamLimits

0xa7e6,	// (0x000b79d8) list_single_recal_day_pane_g2

0xa7f2,	// (0x000b79e4) list_single_recal_day_pane_g3_ParamLimits

0xa7f2,	// (0x000b79e4) list_single_recal_day_pane_g3

0x8944,	// (0x000b5b36) list_single_recal_day_pane_g4_ParamLimits

0x8944,	// (0x000b5b36) list_single_recal_day_pane_g4

0xa7fe,	// (0x000b79f0) list_single_recal_day_pane_g5_ParamLimits

0xa7fe,	// (0x000b79f0) list_single_recal_day_pane_g5

0xa80a,	// (0x000b79fc) list_single_recal_day_pane_g6_ParamLimits

0xa80a,	// (0x000b79fc) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x000bd029) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x000bd029) list_single_recal_day_pane_g

0xa81e,	// (0x000b7a10) list_single_recal_day_pane_t1

0xa830,	// (0x000b7a22) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x000bd034) list_single_recal_day_pane_t

0x895c,	// (0x000b5b4e) ncimui_query_button_pane_ParamLimits

0x895c,	// (0x000b5b4e) ncimui_query_button_pane

0x896c,	// (0x000b5b5e) ncimui_query_button_pane_t1_ParamLimits

0x896c,	// (0x000b5b5e) ncimui_query_button_pane_t1

0xeb10,	// (0x000bbd02) ncimui_query_button_pane_t2_ParamLimits

0xeb10,	// (0x000bbd02) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x000bd039) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x000bd039) ncimui_query_button_pane_t

0x897f,	// (0x000b5b71) query_button_pane_ParamLimits

0x897f,	// (0x000b5b71) query_button_pane

0x9517,	// (0x000b6709) bg_button_pane_cp0028

0xeb23,	// (0x000bbd15) query_button_pane_t1

0x362e,	// (0x000b0820) main_tport_pane_ParamLimits

0x8329,	// (0x000b551b) bg_popup_window_pane_cp01_ParamLimits

0x8329,	// (0x000b551b) bg_popup_window_pane_cp01

0x8344,	// (0x000b5536) heading_pane_cp08_ParamLimits

0x8344,	// (0x000b5536) heading_pane_cp08

0x8357,	// (0x000b5549) heading_pane_cp07_ParamLimits

0x8357,	// (0x000b5549) heading_pane_cp07

0x8408,	// (0x000b55fa) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x000bcf85) cell_tport_appsw_pane_g

0x9e12,	// (0x000b7004) input_candi_list_open_g1

0xae3e,	// (0x000b8030) list_cale_time_pane_g6_ParamLimits

0xae3e,	// (0x000b8030) list_cale_time_pane_g6

0x4438,	// (0x000b162a) aid_size_touch_calib_1_ParamLimits

0x4438,	// (0x000b162a) aid_size_touch_calib_1

0x444a,	// (0x000b163c) aid_size_touch_calib_2_ParamLimits

0x444a,	// (0x000b163c) aid_size_touch_calib_2

0x4462,	// (0x000b1654) aid_size_touch_calib_3_ParamLimits

0x4462,	// (0x000b1654) aid_size_touch_calib_3

0x4480,	// (0x000b1672) aid_size_touch_calib_4_ParamLimits

0x4480,	// (0x000b1672) aid_size_touch_calib_4

0x4498,	// (0x000b168a) main_touch_calib_button_group_pane_ParamLimits

0x4498,	// (0x000b168a) main_touch_calib_button_group_pane

0x44b0,	// (0x000b16a2) main_touch_calib_pane_g1_ParamLimits

0x44c2,	// (0x000b16b4) main_touch_calib_pane_g2_ParamLimits

0x44d4,	// (0x000b16c6) main_touch_calib_pane_g3_ParamLimits

0x44e6,	// (0x000b16d8) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x000bc943) main_touch_calib_pane_g_ParamLimits

0x44f8,	// (0x000b16ea) main_touch_calib_pane_t1_ParamLimits

0x4512,	// (0x000b1704) main_touch_calib_pane_t2_ParamLimits

0x452c,	// (0x000b171e) main_touch_calib_pane_t3_ParamLimits

0x4540,	// (0x000b1732) main_touch_calib_pane_t4_ParamLimits

0x4556,	// (0x000b1748) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x000bc94c) main_touch_calib_pane_t_ParamLimits

0xcfa3,	// (0x000ba195) list_single_fp_cale_pane_g3_ParamLimits

0xcfa3,	// (0x000ba195) list_single_fp_cale_pane_g3

0xa25c,	// (0x000b744e) bg_button_pane_cp012_ParamLimits

0xa25c,	// (0x000b744e) bg_vkb2_func_pane_cp03_ParamLimits

0x6682,	// (0x000b3874) cell_vitu2_function_top_pane_g1_ParamLimits

0xa25c,	// (0x000b744e) bg_vkb2_func_pane_cp04_ParamLimits

0x75a9,	// (0x000b479b) main_ncimui_button_group_pane_ParamLimits

0x75a9,	// (0x000b479b) main_ncimui_button_group_pane

0x7609,	// (0x000b47fb) main_ncimui_pane_t3_ParamLimits

0x7609,	// (0x000b47fb) main_ncimui_pane_t3

0xe8db,	// (0x000bbacd) phacti_button_group_pane

0xeaab,	// (0x000bbc9d) aid_size_list_single_double_ParamLimits

0x88b3,	// (0x000b5aa5) popup_ezdial_listscroll_window_ParamLimits

0x88cf,	// (0x000b5ac1) popup_number_entry_window_cp01_ParamLimits

0x8992,	// (0x000b5b84) phacti_button_pane_ParamLimits

0x8992,	// (0x000b5b84) phacti_button_pane

0x9517,	// (0x000b6709) bg_button_pane_cp14

0xeb31,	// (0x000bbd23) phacti_button_pane_t1

0x89a3,	// (0x000b5b95) main_touch_calib_button_pane_ParamLimits

0x89a3,	// (0x000b5b95) main_touch_calib_button_pane

0xa861,	// (0x000b7a53) bg_button_pane_cp18_ParamLimits

0xa861,	// (0x000b7a53) bg_button_pane_cp18

0xeb3f,	// (0x000bbd31) main_touch_calib_button_pane_t1_ParamLimits

0xeb3f,	// (0x000bbd31) main_touch_calib_button_pane_t1

0xeb55,	// (0x000bbd47) main_touch_calib_button_pane_t2_ParamLimits

0xeb55,	// (0x000bbd47) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x000bd03e) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x000bd03e) main_touch_calib_button_pane_t

0x9517,	// (0x000b6709) cell_ncimui_button_pane

0x9517,	// (0x000b6709) bg_button_pane_cp032

0xeb73,	// (0x000bbd65) cell_ncimui_button_pane_t1

0xa18f,	// (0x000b7381) image3_infobar_pane_ParamLimits

0xa18f,	// (0x000b7381) image3_infobar_pane

0x79e5,	// (0x000b4bd7) fs_bigclock_status_pane_ParamLimits

0x79e5,	// (0x000b4bd7) fs_bigclock_status_pane

0x79f2,	// (0x000b4be4) main_fs_bigclock_clock_pane_ParamLimits

0x79f2,	// (0x000b4be4) main_fs_bigclock_clock_pane

0x7a1c,	// (0x000b4c0e) main_fs_bigclock_indi_pane_ParamLimits

0x7a1c,	// (0x000b4c0e) main_fs_bigclock_indi_pane

0x7a5a,	// (0x000b4c4c) main_fs_bigclock_swipe_pane_ParamLimits

0x7a5a,	// (0x000b4c4c) main_fs_bigclock_swipe_pane

0x9517,	// (0x000b6709) main_fs_clock_dumped_data

0xe3fd,	// (0x000bb5ef) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3fd,	// (0x000bb5ef) list_single_fs_bigclock_indicator_pane_g1

0xe427,	// (0x000bb619) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe427,	// (0x000bb619) list_single_fs_bigclock_indicator_pane_g2

0xe441,	// (0x000bb633) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe441,	// (0x000bb633) list_single_fs_bigclock_indicator_pane_g3

0xe45b,	// (0x000bb64d) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe45b,	// (0x000bb64d) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x000bce66) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x000bce66) list_single_fs_bigclock_indicator_pane_g

0xe486,	// (0x000bb678) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe486,	// (0x000bb678) list_single_fs_bigclock_indicator_pane_t1

0xe4ae,	// (0x000bb6a0) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4ae,	// (0x000bb6a0) list_single_fs_bigclock_indicator_pane_t2

0xe4d6,	// (0x000bb6c8) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4d6,	// (0x000bb6c8) list_single_fs_bigclock_indicator_pane_t3

0xe4fe,	// (0x000bb6f0) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4fe,	// (0x000bb6f0) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x000bce71) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x000bce71) list_single_fs_bigclock_indicator_pane_t

0xeb81,	// (0x000bbd73) image3_infobar_fav_pane_ParamLimits

0xeb81,	// (0x000bbd73) image3_infobar_fav_pane

0xeb91,	// (0x000bbd83) image3_infobar_loc_pane_ParamLimits

0xeb91,	// (0x000bbd83) image3_infobar_loc_pane

0xeba7,	// (0x000bbd99) image3_infobar_time_pane_ParamLimits

0xeba7,	// (0x000bbd99) image3_infobar_time_pane

0xcc6b,	// (0x000b9e5d) image3_infobar_time_pane_g1

0xebb7,	// (0x000bbda9) image3_infobar_time_pane_t1

0xcc6b,	// (0x000b9e5d) image3_infobar_loc_pane_g1

0xebc5,	// (0x000bbdb7) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x000bd043) image3_infobar_loc_pane_g

0xebcd,	// (0x000bbdbf) image3_infobar_loc_pane_t1

0xcc6b,	// (0x000b9e5d) image3_infobar_fav_pane_g1

0xebdb,	// (0x000bbdcd) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x000bd048) image3_infobar_fav_pane_g

0xebe3,	// (0x000bbdd5) fs_bigclock_status_battery_pane

0xebec,	// (0x000bbdde) fs_bigclock_status_signal_pane

0xebf5,	// (0x000bbde7) fs_bigclock_status_title_pane

0xebfe,	// (0x000bbdf0) fs_bigclock_status_signal_pane_g1

0xec07,	// (0x000bbdf9) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x000bd04d) fs_bigclock_status_signal_pane_g

0xec0f,	// (0x000bbe01) fs_bigclock_status_battery_pane_g1

0xec18,	// (0x000bbe0a) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x000bd052) fs_bigclock_status_battery_pane_g

0xec20,	// (0x000bbe12) fs_bigclock_status_title_pane_t1

0xcc6b,	// (0x000b9e5d) main_fs_bigclock_clock_pane_g1

0xec2e,	// (0x000bbe20) main_fs_bigclock_clock_pane_g2

0xec39,	// (0x000bbe2b) main_fs_bigclock_clock_pane_g3

0xec39,	// (0x000bbe2b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x000bd057) main_fs_bigclock_clock_pane_g

0xec45,	// (0x000bbe37) main_fs_bigclock_clock_pane_t1

0x89b8,	// (0x000b5baa) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x000bd060) main_fs_bigclock_clock_pane_t

0x89c7,	// (0x000b5bb9) list_single_fs_bigclock_indicator_pane_ParamLimits

0x89c7,	// (0x000b5bb9) list_single_fs_bigclock_indicator_pane

0x89d8,	// (0x000b5bca) list_single_fs_bigclock_pane_ParamLimits

0x89d8,	// (0x000b5bca) list_single_fs_bigclock_pane

0xec5c,	// (0x000bbe4e) main_fs_bigclock_indicator_pane_t1

0xec6b,	// (0x000bbe5d) list_single_fs_bigclock_pane_g1

0xec73,	// (0x000bbe65) list_single_fs_bigclock_pane_t1

0xcc6b,	// (0x000b9e5d) main_fs_bigclock_swipe_pane_g1

0xecb6,	// (0x000bbea8) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x000bd071) main_fs_bigclock_swipe_pane_g

0xecbe,	// (0x000bbeb0) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecbe,	// (0x000bbeb0) main_fs_bigclock_swipe_pane_t1

0x234b,	// (0x000af53d) call_type_pane_ParamLimits

0x9517,	// (0x000b6709) main_btmg_pane

0xbbf6,	// (0x000b8de8) list_single_cale_mrui_row_pane_g2_ParamLimits

0xbbf6,	// (0x000b8de8) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x000bcfe4) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x000bcfe4) list_single_cale_mrui_row_pane_g

0xa7c2,	// (0x000b79b4) list_recal_vselct_arw_lo_pane

0xeafc,	// (0x000bbcee) list_recal_vselct_arw_up_pane

0xa7ca,	// (0x000b79bc) list_recal_vselct_pane

0x8a3b,	// (0x000b5c2d) btmg_button_pane

0x8a45,	// (0x000b5c37) main_btmg_pane_g1

0x9517,	// (0x000b6709) bg_button_pane_cp044

0xecdb,	// (0x000bbecd) btmg_button_pane_t1

0xc806,	// (0x000b99f8) aid_listscroll_gen

0x9568,	// (0x000b675a) main_cntbar_detail_pane

0xe80b,	// (0x000bb9fd) list_cmail_folder_pane

0xe81b,	// (0x000bba0d) sp_fs_scroll_pane_cp03_ParamLimits

0xbc02,	// (0x000b8df4) list_single_fs_dyc_pane_cp01_ParamLimits

0xbc02,	// (0x000b8df4) list_single_fs_dyc_pane_cp01

0xece9,	// (0x000bbedb) aid_size_cmail_indent

0xa842,	// (0x000b7a34) list_single_dyc_row_pane_cp01

0x8a7f,	// (0x000b5c71) cntbar_detail_list_pane_ParamLimits

0x8a7f,	// (0x000b5c71) cntbar_detail_list_pane

0x8ad1,	// (0x000b5cc3) main_cntbar_detail_cont_pane_ParamLimits

0x8ad1,	// (0x000b5cc3) main_cntbar_detail_cont_pane

0x226e,	// (0x000af460) scroll_pane_cp032_ParamLimits

0x226e,	// (0x000af460) scroll_pane_cp032

0x8ae5,	// (0x000b5cd7) cntbar_detail_list_event_pane_ParamLimits

0x8ae5,	// (0x000b5cd7) cntbar_detail_list_event_pane

0x8a91,	// (0x000b5c83) cntbar_detail_list_shct_pane

0xacd8,	// (0x000b7eca) aid_list_gen

0xecf2,	// (0x000bbee4) aid_scroll

0xecfb,	// (0x000bbeed) aid_size_touch_scroll_bar

0x6d77,	// (0x000b3f69) aid_list_double

0xed04,	// (0x000bbef6) aid_list_single

0x6d65,	// (0x000b3f57) aid_list_single_lg

0xa84b,	// (0x000b7a3d) aid_list_z_g_a_sm

0xbc1c,	// (0x000b8e0e) aid_list_z_g_d

0xa853,	// (0x000b7a45) aid_txt_z_prm

0x8af5,	// (0x000b5ce7) aid_txt_z_prm_cp01

0x8b03,	// (0x000b5cf5) aid_txt_z_sec

0x8b11,	// (0x000b5d03) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8b11,	// (0x000b5d03) main_cntbar_detail_cont_pane_g1

0x8b25,	// (0x000b5d17) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8b25,	// (0x000b5d17) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x000bd076) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x000bd076) main_cntbar_detail_cont_pane_g

0xed0d,	// (0x000bbeff) main_cntbar_detail_cont_pane_t1

0xed1b,	// (0x000bbf0d) main_cntbar_detail_cont_pane_t2

0xed29,	// (0x000bbf1b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x000bd07b) main_cntbar_detail_cont_pane_t

0x8b35,	// (0x000b5d27) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8b35,	// (0x000b5d27) cell_cntbar_detail_list_shct_pane

0xed37,	// (0x000bbf29) cntbar_detail_list_shct_pane_g1

0xed40,	// (0x000bbf32) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x000bd082) cntbar_detail_list_shct_pane_g

0x8b47,	// (0x000b5d39) cntbar_detail_list_event_pane_g1_ParamLimits

0x8b47,	// (0x000b5d39) cntbar_detail_list_event_pane_g1

0x8b53,	// (0x000b5d45) cntbar_detail_list_event_pane_g2_ParamLimits

0x8b53,	// (0x000b5d45) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x000bd087) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x000bd087) cntbar_detail_list_event_pane_g

0x8bc1,	// (0x000b5db3) cntbar_detail_list_event_pane_t1_ParamLimits

0x8bc1,	// (0x000b5db3) cntbar_detail_list_event_pane_t1

0x8bd6,	// (0x000b5dc8) cntbar_detail_list_event_pane_t2_ParamLimits

0x8bd6,	// (0x000b5dc8) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x000bd094) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x000bd094) cntbar_detail_list_event_pane_t

0xcc6b,	// (0x000b9e5d) cell_cntbar_detail_list_shct_pane_g1

0x26f1,	// (0x000af8e3) navi_pane_mv_g3

0x9568,	// (0x000b675a) main_cntbar_detail_pane_ParamLimits

0x9517,	// (0x000b6709) main_notif_wgt_pane

0x9fa7,	// (0x000b7199) aid_tch_main_mp4_pane_g4

0xa185,	// (0x000b7377) popup_slider_window_cp02

0xa7b8,	// (0x000b79aa) list_recal_day_event_pane

0x8a4f,	// (0x000b5c41) cntbar_detail_btn_pane_ParamLimits

0x8a4f,	// (0x000b5c41) cntbar_detail_btn_pane

0x8a67,	// (0x000b5c59) cntbar_detail_btn_pane_cp01_ParamLimits

0x8a67,	// (0x000b5c59) cntbar_detail_btn_pane_cp01

0x8a91,	// (0x000b5c83) cntbar_detail_list_shct_pane_ParamLimits

0x8aa1,	// (0x000b5c93) cntbar_detail_pane_g1_ParamLimits

0x8aa1,	// (0x000b5c93) cntbar_detail_pane_g1

0x8ab5,	// (0x000b5ca7) cntbar_detail_pane_t1_ParamLimits

0x8ab5,	// (0x000b5ca7) cntbar_detail_pane_t1

0x8b5f,	// (0x000b5d51) cntbar_detail_list_event_pane_g3_ParamLimits

0x8b5f,	// (0x000b5d51) cntbar_detail_list_event_pane_g3

0x8b77,	// (0x000b5d69) cntbar_detail_list_event_pane_g4_ParamLimits

0x8b77,	// (0x000b5d69) cntbar_detail_list_event_pane_g4

0x8b8f,	// (0x000b5d81) cntbar_detail_list_event_pane_g5_ParamLimits

0x8b8f,	// (0x000b5d81) cntbar_detail_list_event_pane_g5

0x8ba7,	// (0x000b5d99) cntbar_detail_list_event_pane_g6_ParamLimits

0x8ba7,	// (0x000b5d99) cntbar_detail_list_event_pane_g6

0x8beb,	// (0x000b5ddd) cntbar_detail_list_event_pane_t3_ParamLimits

0x8beb,	// (0x000b5ddd) cntbar_detail_list_event_pane_t3

0x8bfd,	// (0x000b5def) popup_notif_wgt_window_ParamLimits

0x8bfd,	// (0x000b5def) popup_notif_wgt_window

0x8c16,	// (0x000b5e08) popup_submenu_window_cp01_ParamLimits

0x8c16,	// (0x000b5e08) popup_submenu_window_cp01

0xb363,	// (0x000b8555) bg_popup_window_pane_cp10

0xed49,	// (0x000bbf3b) listscroll_notif_wgt_pane

0xed5b,	// (0x000bbf4d) list_notif_wgt_window

0xed64,	// (0x000bbf56) scroll_pane_cp033

0x8c2a,	// (0x000b5e1c) list_notif_wgt_row_pane_ParamLimits

0x8c2a,	// (0x000b5e1c) list_notif_wgt_row_pane

0xed6d,	// (0x000bbf5f) aid_size_list_notif_wgt_del

0xed7a,	// (0x000bbf6c) list_notif_wgt_row_pane_g1

0xed86,	// (0x000bbf78) list_notif_wgt_row_pane_g2

0xed9a,	// (0x000bbf8c) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x000bd09b) list_notif_wgt_row_pane_g

0xeda7,	// (0x000bbf99) list_notif_wgt_row_pane_t1

0xedbd,	// (0x000bbfaf) list_notif_wgt_row_pane_t2

0xedcf,	// (0x000bbfc1) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x000bd0a2) list_notif_wgt_row_pane_t

0xd8db,	// (0x000baacd) list_recal_day_event_pane_g1

0xede1,	// (0x000bbfd3) list_recal_day_event_pane_t1

0x9517,	// (0x000b6709) bg_button_pane_cp045

0xedf0,	// (0x000bbfe2) cntbar_detail_btn_pane_t1

0xc81a,	// (0x000b9a0c) main_callh_pane_ParamLimits

0xc81a,	// (0x000b9a0c) main_callh_pane

0x9517,	// (0x000b6709) main_coverflow0_pane

0x9517,	// (0x000b6709) main_wgtman_pane

0x7a72,	// (0x000b4c64) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7a72,	// (0x000b4c64) main_fs_bigclock_unlock_btn_pane

0x8400,	// (0x000b55f2) bg_button_pane_cp16

0x8410,	// (0x000b5602) cell_tport_appsw_pane_g3

0x8c3a,	// (0x000b5e2c) cf0_flow_pane_ParamLimits

0x8c3a,	// (0x000b5e2c) cf0_flow_pane

0xedfe,	// (0x000bbff0) listscroll_cf0_pane

0xee09,	// (0x000bbffb) main_cf0_pane_g1

0x8c4f,	// (0x000b5e41) main_cf0_pane_t1_ParamLimits

0x8c4f,	// (0x000b5e41) main_cf0_pane_t1

0x8c66,	// (0x000b5e58) main_cf0_pane_t2_ParamLimits

0x8c66,	// (0x000b5e58) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x000bd0ae) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x000bd0ae) main_cf0_pane_t

0xee1b,	// (0x000bc00d) scroll_pane_cp11

0x8c7d,	// (0x000b5e6f) cf0_flow_pane_g1

0x8c89,	// (0x000b5e7b) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x000bd0b3) cf0_flow_pane_g

0x8c95,	// (0x000b5e87) cf0_flow_pane_t1

0x9517,	// (0x000b6709) main_call6_pane

0x9517,	// (0x000b6709) main_calllock_pane

0x8ca7,	// (0x000b5e99) call6_btn_grp_pane_ParamLimits

0x8ca7,	// (0x000b5e99) call6_btn_grp_pane

0x8cc1,	// (0x000b5eb3) call6_pane_g1_ParamLimits

0x8cc1,	// (0x000b5eb3) call6_pane_g1

0x8cd7,	// (0x000b5ec9) popup_call6_1st_window_ParamLimits

0x8cd7,	// (0x000b5ec9) popup_call6_1st_window

0x8ce8,	// (0x000b5eda) popup_call6_2nd_window_ParamLimits

0x8ce8,	// (0x000b5eda) popup_call6_2nd_window

0x8cf9,	// (0x000b5eeb) cell_call6_btn_pane_ParamLimits

0x8cf9,	// (0x000b5eeb) cell_call6_btn_pane

0xb363,	// (0x000b8555) bg_popup_call2_in_pane_cp03

0xee26,	// (0x000bc018) popup_call6_1st_window_g1

0xee2e,	// (0x000bc020) popup_call6_1st_window_g2

0xee36,	// (0x000bc028) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x000bd0b8) popup_call6_1st_window_g

0xee3e,	// (0x000bc030) popup_call6_1st_window_t1

0xee4d,	// (0x000bc03f) popup_call6_1st_window_t2

0xee5d,	// (0x000bc04f) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x000bd0bf) popup_call6_1st_window_t

0xb363,	// (0x000b8555) bg_popup_call2_in_pane_cp04

0xee26,	// (0x000bc018) popup_call6_2nd_window_g1

0xee2e,	// (0x000bc020) popup_call6_2nd_window_g2

0xee36,	// (0x000bc028) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x000bd0b8) popup_call6_2nd_window_g

0xee3e,	// (0x000bc030) popup_call6_2nd_window_t1

0x9517,	// (0x000b6709) bg_button_pane_cp15

0xee6d,	// (0x000bc05f) cell_call6_btn_pane_g1

0xee76,	// (0x000bc068) cell_call6_btn_pane_t1

0x8d0d,	// (0x000b5eff) listscroll_wgtman_pane_ParamLimits

0x8d0d,	// (0x000b5eff) listscroll_wgtman_pane

0x8d2e,	// (0x000b5f20) wgtman_btn_pane_ParamLimits

0x8d2e,	// (0x000b5f20) wgtman_btn_pane

0xb229,	// (0x000b841b) aid_scroll_copy1

0xee85,	// (0x000bc077) list_wgtman_pane

0x8d71,	// (0x000b5f63) wgtman_btn_pane_g1_ParamLimits

0x8d71,	// (0x000b5f63) wgtman_btn_pane_g1

0x8d9d,	// (0x000b5f8f) wgtman_btn_pane_t1_ParamLimits

0x8d9d,	// (0x000b5f8f) wgtman_btn_pane_t1

0xee8f,	// (0x000bc081) wgtman_btn_pane_t2_ParamLimits

0xee8f,	// (0x000bc081) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x000bd0c6) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x000bd0c6) wgtman_btn_pane_t

0x8dda,	// (0x000b5fcc) listrow_wgtman_pane_ParamLimits

0x8dda,	// (0x000b5fcc) listrow_wgtman_pane

0x8dec,	// (0x000b5fde) listrow_wgtman_pane_g1

0x8df9,	// (0x000b5feb) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x000bd0cb) listrow_wgtman_pane_g

0x8e17,	// (0x000b6009) listrow_wgtman_pane_t1

0x8e2f,	// (0x000b6021) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x000bd0d0) listrow_wgtman_pane_t

0x8e55,	// (0x000b6047) wait_bar_pane_cp09

0xeea6,	// (0x000bc098) main_calllock_btn_pane

0xeeb0,	// (0x000bc0a2) main_calllock_pane_g1

0x9517,	// (0x000b6709) bg_button_pane_cp17

0xeebc,	// (0x000bc0ae) main_calllock_btn_pane_g1

0xeec5,	// (0x000bc0b7) main_calllock_btn_pane_t1

0x9517,	// (0x000b6709) main_dialer3_pane

0x9517,	// (0x000b6709) main_fmrd2_pane

0xcc6b,	// (0x000b9e5d) main_fs_bigclock_unlock_btn_pane_g1

0xeedc,	// (0x000bc0ce) main_fs_bigclock_unlock_btn_pane_t1

0x8e67,	// (0x000b6059) area_fmrd2_info_pane_ParamLimits

0x8e67,	// (0x000b6059) area_fmrd2_info_pane

0x8e76,	// (0x000b6068) area_fmrd2_visual_pane_ParamLimits

0x8e76,	// (0x000b6068) area_fmrd2_visual_pane

0x8e84,	// (0x000b6076) fmrd2_indi_pane_ParamLimits

0x8e84,	// (0x000b6076) fmrd2_indi_pane

0x8e91,	// (0x000b6083) area_fmrd2_visual_pane_g1

0x8e99,	// (0x000b608b) area_fmrd2_visual_pane_t1

0x8ea9,	// (0x000b609b) area_fmrd2_visual_pane_t2

0x8eb9,	// (0x000b60ab) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x000bd0da) area_fmrd2_visual_pane_t

0x8ec9,	// (0x000b60bb) area_fmrd2_info_pane_g1

0x8ed1,	// (0x000b60c3) area_fmrd2_info_pane_t1

0x8ee1,	// (0x000b60d3) area_fmrd2_info_pane_t2

0x8ef1,	// (0x000b60e3) area_fmrd2_info_pane_t3

0x8f01,	// (0x000b60f3) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x000bd0e1) area_fmrd2_info_pane_t

0x8f11,	// (0x000b6103) fmrd2_indi_pane_t1

0x8f21,	// (0x000b6113) fmrd2_indi_pane_t2

0x8f31,	// (0x000b6123) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x000bd0ea) fmrd2_indi_pane_t

0xe46a,	// (0x000bb65c) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe46a,	// (0x000bb65c) list_single_fs_bigclock_indicator_pane_g5

0xe51a,	// (0x000bb70c) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe51a,	// (0x000bb70c) list_single_fs_bigclock_indicator_pane_t5

0x8604,	// (0x000b57f6) aid_cell_bcale_month_pane_ParamLimits

0x8604,	// (0x000b57f6) aid_cell_bcale_month_pane

0x8622,	// (0x000b5814) bcale_month_pane_ParamLimits

0x8622,	// (0x000b5814) bcale_month_pane

0x8644,	// (0x000b5836) bcale_preview_pane_ParamLimits

0x8644,	// (0x000b5836) bcale_preview_pane

0xec73,	// (0x000bbe65) list_single_fs_bigclock_pane_t1_ParamLimits

0xec92,	// (0x000bbe84) list_single_fs_bigclock_pane_t2_ParamLimits

0xec92,	// (0x000bbe84) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x000bd06c) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x000bd06c) list_single_fs_bigclock_pane_t

0xeed4,	// (0x000bc0c6) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x000bd0d5) main_fs_bigclock_unlock_btn_pane_g

0x8f41,	// (0x000b6133) aid_dia3_key_size_ParamLimits

0x8f41,	// (0x000b6133) aid_dia3_key_size

0x8f50,	// (0x000b6142) aid_dia3_listrow_size_ParamLimits

0x8f50,	// (0x000b6142) aid_dia3_listrow_size

0x8f65,	// (0x000b6157) dia3_keypad_fun_pane_ParamLimits

0x8f65,	// (0x000b6157) dia3_keypad_fun_pane

0x8f81,	// (0x000b6173) dia3_keypad_num_pane_ParamLimits

0x8f81,	// (0x000b6173) dia3_keypad_num_pane

0x8f9a,	// (0x000b618c) dia3_listscroll_pane_ParamLimits

0x8f9a,	// (0x000b618c) dia3_listscroll_pane

0x8fad,	// (0x000b619f) dia3_numentry_pane_ParamLimits

0x8fad,	// (0x000b619f) dia3_numentry_pane

0xeeea,	// (0x000bc0dc) dia3_list_pane

0xeef5,	// (0x000bc0e7) scroll_pane_cp12

0x9517,	// (0x000b6709) bg_dia3_numentry_pane

0x8fc1,	// (0x000b61b3) dia3_numentry_pane_t1

0x8fd0,	// (0x000b61c2) cell_dia3_key_num_pane

0x8fd8,	// (0x000b61ca) cell_dia3_key0_fun_pane_ParamLimits

0x8fd8,	// (0x000b61ca) cell_dia3_key0_fun_pane

0x8fec,	// (0x000b61de) cell_dia3_key1_fun_pane_ParamLimits

0x8fec,	// (0x000b61de) cell_dia3_key1_fun_pane

0x9004,	// (0x000b61f6) dia3_listrow_pane

0xe168,	// (0x000bb35a) bg_dia3_numentry_pane_g1

0x9517,	// (0x000b6709) bg_button_pane_cp21

0xef00,	// (0x000bc0f2) cell_dia3_key_num_pane_t1

0xef0e,	// (0x000bc100) cell_dia3_key_num_pane_t2

0xef1d,	// (0x000bc10f) cell_dia3_key_num_pane_t3

0xef2c,	// (0x000bc11e) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x000bd0f1) cell_dia3_key_num_pane_t

0x9517,	// (0x000b6709) bg_button_pane_cp19

0x9016,	// (0x000b6208) cell_dia3_key0_fun_pane_g1

0x9517,	// (0x000b6709) bg_button_pane_cp20

0x901e,	// (0x000b6210) cell_dia3_key1_fun_pane_g1

0x9026,	// (0x000b6218) area_left_week_number_pane

0x9034,	// (0x000b6226) area_top_day_name_pane

0x9047,	// (0x000b6239) frame_month_view_pane

0xef3b,	// (0x000bc12d) grid_month_view_pane

0x905c,	// (0x000b624e) cell_top_day_name_pane_ParamLimits

0x905c,	// (0x000b624e) cell_top_day_name_pane

0x908b,	// (0x000b627d) cell_area_left_week_number_pane_ParamLimits

0x908b,	// (0x000b627d) cell_area_left_week_number_pane

0x909f,	// (0x000b6291) cell_month_view_pane_ParamLimits

0x909f,	// (0x000b6291) cell_month_view_pane

0xef49,	// (0x000bc13b) frm_month_g1

0x90ce,	// (0x000b62c0) frm_month_g2

0x90e1,	// (0x000b62d3) frm_month_g3

0x90f4,	// (0x000b62e6) frm_month_g4

0x9107,	// (0x000b62f9) frm_month_g5

0x911a,	// (0x000b630c) frm_month_g6

0x912d,	// (0x000b631f) frm_month_g7

0xef56,	// (0x000bc148) frm_month_g8

0x9142,	// (0x000b6334) frm_month_g9

0x9152,	// (0x000b6344) frm_month_g10

0x9162,	// (0x000b6354) frm_month_g11

0x9172,	// (0x000b6364) frm_month_g12

0x9184,	// (0x000b6376) frm_month_g13

0x9198,	// (0x000b638a) frm_month_g14

0x91ac,	// (0x000b639e) frm_month_g15

0x91c0,	// (0x000b63b2) frm_month_g16

0x000f,

0xff08,	// (0x000bd0fa) frm_month_g

0xef63,	// (0x000bc155) cell_top_day_name_pane_t1

0x91d4,	// (0x000b63c6) cell_area_left_week_number_pane_g1

0x91e0,	// (0x000b63d2) cell_area_left_week_number_pane_t1

0xce9b,	// (0x000ba08d) cell_month_view_pane_g1

0x91f3,	// (0x000b63e5) cell_month_view_pane_t1

0x9517,	// (0x000b6709) main_fps_pane

0xe6ef,	// (0x000bb8e1) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6ef,	// (0x000bb8e1) cmail_ddmenu_btn02_pane_cp1

0xe70b,	// (0x000bb8fd) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe70b,	// (0x000bb8fd) cmail_ddmenu_btn02_pane_cp2

0x8911,	// (0x000b5b03) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8911,	// (0x000b5b03) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x000bd01f) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x000bd01f) cmail_ddmenu_btn02_pane_g

0x8932,	// (0x000b5b24) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8932,	// (0x000b5b24) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x000bd024) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x000bd024) cmail_ddmenu_btn02_pane_t

0x9206,	// (0x000b63f8) fps_text_pane_ParamLimits

0x9206,	// (0x000b63f8) fps_text_pane

0x921d,	// (0x000b640f) main_fps_pane_g1_ParamLimits

0x921d,	// (0x000b640f) main_fps_pane_g1

0x9235,	// (0x000b6427) wait_bar_pane_cp010_ParamLimits

0x9235,	// (0x000b6427) wait_bar_pane_cp010

0x9248,	// (0x000b643a) fps_text_pane_t1_ParamLimits

0x9248,	// (0x000b643a) fps_text_pane_t1

0xd634,	// (0x000ba826) cam4_image_uncrop_pane_g1

0xd63d,	// (0x000ba82f) cam4_image_uncrop_pane_g2

0x5b4d,	// (0x000b2d3f) cam4_image_uncrop_pane_g3

0x5b56,	// (0x000b2d48) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x000bcae0) cam4_image_uncrop_pane_g

0x9004,	// (0x000b61f6) dia3_listrow_pane_ParamLimits

0x9517,	// (0x000b6709) main_phob2_pane

0x83cf,	// (0x000b55c1) cell_tport_appsw_pane_cp02_ParamLimits

0x83cf,	// (0x000b55c1) cell_tport_appsw_pane_cp02

0x83e3,	// (0x000b55d5) cell_tport_appsw_pane_cp03_ParamLimits

0x83e3,	// (0x000b55d5) cell_tport_appsw_pane_cp03

0x9517,	// (0x000b6709) phob2_contact_card_pane

0x9517,	// (0x000b6709) phob2_listscroll_pane

0xef76,	// (0x000bc168) phob2_list_pane

0xef7e,	// (0x000bc170) scroll_pane_cp034

0x9260,	// (0x000b6452) phob2_cc_data_pane_ParamLimits

0x9260,	// (0x000b6452) phob2_cc_data_pane

0x9281,	// (0x000b6473) phob2_cc_listscroll_pane_ParamLimits

0x9281,	// (0x000b6473) phob2_cc_listscroll_pane

0x92a3,	// (0x000b6495) list_double_large_graphic_phob2_pane_ParamLimits

0x92a3,	// (0x000b6495) list_double_large_graphic_phob2_pane

0x92b7,	// (0x000b64a9) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x92b7,	// (0x000b64a9) list_double_large_graphic_phob2_pane_g1

0x92cd,	// (0x000b64bf) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x92cd,	// (0x000b64bf) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x000bd11b) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x000bd11b) list_double_large_graphic_phob2_pane_g

0x92d9,	// (0x000b64cb) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x92d9,	// (0x000b64cb) list_double_large_graphic_phob2_pane_t1

0x92ee,	// (0x000b64e0) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x92ee,	// (0x000b64e0) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x000bd120) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x000bd120) list_double_large_graphic_phob2_pane_t

0x9517,	// (0x000b6709) list_highlight_pane_cp024

0x9300,	// (0x000b64f2) phob2_cc_button_pane

0x9308,	// (0x000b64fa) phob2_cc_data_pane_g1_ParamLimits

0x9308,	// (0x000b64fa) phob2_cc_data_pane_g1

0x931e,	// (0x000b6510) phob2_cc_data_pane_g2_ParamLimits

0x931e,	// (0x000b6510) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x000bd125) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x000bd125) phob2_cc_data_pane_g

0x932e,	// (0x000b6520) phob2_cc_data_pane_t1_ParamLimits

0x932e,	// (0x000b6520) phob2_cc_data_pane_t1

0x9346,	// (0x000b6538) phob2_cc_data_pane_t2_ParamLimits

0x9346,	// (0x000b6538) phob2_cc_data_pane_t2

0x9360,	// (0x000b6552) phob2_cc_data_pane_t3_ParamLimits

0x9360,	// (0x000b6552) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x000bd12a) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x000bd12a) phob2_cc_data_pane_t

0xef86,	// (0x000bc178) phob2_cc_list_pane_ParamLimits

0xef86,	// (0x000bc178) phob2_cc_list_pane

0xd972,	// (0x000bab64) scroll_pane_cp035_ParamLimits

0xd972,	// (0x000bab64) scroll_pane_cp035

0x9568,	// (0x000b675a) bg_button_pane_cp033

0xef92,	// (0x000bc184) phob2_cc_button_pane_g1

0xef9e,	// (0x000bc190) phob2_cc_button_pane_t1

0xefb3,	// (0x000bc1a5) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x000bd131) phob2_cc_button_pane_t

0x937a,	// (0x000b656c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x937a,	// (0x000b656c) list_double_large_graphic_phob2_cc_pane

0x938e,	// (0x000b6580) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x938e,	// (0x000b6580) list_double_large_graphic_phob2_cc_pane_g1

0x939a,	// (0x000b658c) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x939a,	// (0x000b658c) list_double_large_graphic_phob2_cc_pane_g2

0x93a6,	// (0x000b6598) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x93a6,	// (0x000b6598) list_double_large_graphic_phob2_cc_pane_g3

0x93b2,	// (0x000b65a4) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x93b2,	// (0x000b65a4) list_double_large_graphic_phob2_cc_pane_g4

0x93be,	// (0x000b65b0) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x93be,	// (0x000b65b0) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x000bd136) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x000bd136) list_double_large_graphic_phob2_cc_pane_g

0x93ca,	// (0x000b65bc) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x93ca,	// (0x000b65bc) list_double_large_graphic_phob2_cc_pane_t1

0x93f3,	// (0x000b65e5) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x93f3,	// (0x000b65e5) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x000bd141) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x000bd141) list_double_large_graphic_phob2_cc_pane_t

0xefc5,	// (0x000bc1b7) list_highlight_pane_cp025_ParamLimits

0xefc5,	// (0x000bc1b7) list_highlight_pane_cp025

0x9568,	// (0x000b675a) bg_button_pane_cp033_ParamLimits

0xef92,	// (0x000bc184) phob2_cc_button_pane_g1_ParamLimits

0xef9e,	// (0x000bc190) phob2_cc_button_pane_t1_ParamLimits

0xefb3,	// (0x000bc1a5) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x000bd131) phob2_cc_button_pane_t_ParamLimits

0xfe86,	// (0x000ad078) popup_wgtman_window

0xd7b5,	// (0x000ba9a7) scroll_pane_cp038

0x8d53,	// (0x000b5f45) wgtman_btn_pane_cp_01_ParamLimits

0x8d53,	// (0x000b5f45) wgtman_btn_pane_cp_01

0xefd3,	// (0x000bc1c5) wgtman_content_pane

0xefdc,	// (0x000bc1ce) wgtman_heading_pane

0x9517,	// (0x000b6709) bg_heading_pane_cp02

0xefe5,	// (0x000bc1d7) wgtman_heading_pane_g1

0xefed,	// (0x000bc1df) wgtman_heading_pane_t1

0xeffb,	// (0x000bc1ed) scroll_pane_cp036

0xf003,	// (0x000bc1f5) wgtman_list_pane

0xf00b,	// (0x000bc1fd) wgtman_list_pane_t1_ParamLimits

0xf00b,	// (0x000bc1fd) wgtman_list_pane_t1

0xa1e3,	// (0x000b73d5) cam4_grid_pane

0x685d,	// (0x000b3a4f) bg_button_pane_cp015_ParamLimits

0x6871,	// (0x000b3a63) bg_button_pane_cp016_ParamLimits

0x6884,	// (0x000b3a76) bg_button_pane_cp017_ParamLimits

0x68dc,	// (0x000b3ace) popup_vitu2_query_window_g3_ParamLimits

0x68dc,	// (0x000b3ace) popup_vitu2_query_window_g3

0x6999,	// (0x000b3b8b) popup_vitu2_query_window_t6_ParamLimits

0x6999,	// (0x000b3b8b) popup_vitu2_query_window_t6

0x69c4,	// (0x000b3bb6) popup_vitu2_query_window_t7_ParamLimits

0x69c4,	// (0x000b3bb6) popup_vitu2_query_window_t7

0xd634,	// (0x000ba826) cam4_grid_pane_g1

0xd63d,	// (0x000ba82f) cam4_grid_pane_g2

0xf025,	// (0x000bc217) cam4_grid_pane_g3

0xf02e,	// (0x000bc220) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x000bd146) cam4_grid_pane_g

0x10bb,	// (0x000ae2ad) aid_placing_vt_slider_lsc_ParamLimits

0x13a8,	// (0x000ae59a) vidtel_button_pane_ParamLimits

0x13a8,	// (0x000ae59a) vidtel_button_pane

0xf039,	// (0x000bc22b) bg_button_pane_cp034

0x941c,	// (0x000b660e) vidtel_button_pane_g1

0xf043,	// (0x000bc235) vidtel_button_pane_t1

0xd8b9,	// (0x000baaab) aid_size_vtel_slider_touch

0xd972,	// (0x000bab64) scroll_pane_cp039

0xe1a6,	// (0x000bb398) ncim_query_button_pane_cp01_ParamLimits

0xe1c5,	// (0x000bb3b7) ncimui_query_pane_g1_ParamLimits

0x9568,	// (0x000b675a) input_focus_pane_cp012_ParamLimits

0xe1ea,	// (0x000bb3dc) ncim_query_entry_pane_t1_ParamLimits

0xd972,	// (0x000bab64) scroll_pane_cp039_ParamLimits

0x2663,	// (0x000af855) navi_pane_bcale_mc_g1

0x266b,	// (0x000af85d) navi_pane_bcale_mc_t1

0xe754,	// (0x000bb946) main_sp_fs_email_pane_g1

0xe760,	// (0x000bb952) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x000bced7) main_sp_fs_email_pane_g

0xea00,	// (0x000bbbf2) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea00,	// (0x000bbbf2) list_single_cale_mrui_row_pane_g3

0x8952,	// (0x000b5b44) list_single_recal_day_pane_g5_event_pane

0xa816,	// (0x000b7a08) list_single_recal_day_pane_g7

0xf051,	// (0x000bc243) list_recal_day_event_pane_cp01

0xf05a,	// (0x000bc24c) list_recal_vselct_arw_lo_pane_cp01

0xf062,	// (0x000bc254) list_recal_vselct_arw_up_pane_cp01

0xf06a,	// (0x000bc25c) list_recal_vselct_pane_cp01

0xd8db,	// (0x000baacd) list_recal_day_event_pane_cp01_g1

0xbc24,	// (0x000b8e16) list_recal_day_event_pane_cp01_t1

0xa81e,	// (0x000b7a10) list_single_recal_day_pane_t1_ParamLimits

0xa830,	// (0x000b7a22) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x000bd034) list_single_recal_day_pane_t_ParamLimits

0x9be4,	// (0x000b6dd6) bg_notes_pane_ParamLimits

0x9c8f,	// (0x000b6e81) list_notes_pane_ParamLimits

0x01d3,	// (0x000ad3c5) scroll_pane_cp06_ParamLimits

0xa861,	// (0x000b7a53) main_notes_pane_ParamLimits

0x9517,	// (0x000b6709) main_welc_pane

0x9424,	// (0x000b6616) main_welc_body_pane_ParamLimits

0x9424,	// (0x000b6616) main_welc_body_pane

0x9443,	// (0x000b6635) main_welc_opti_pane_ParamLimits

0x9443,	// (0x000b6635) main_welc_opti_pane

0x948c,	// (0x000b667e) main_welc_pane_t1_ParamLimits

0x948c,	// (0x000b667e) main_welc_pane_t1

0x94ae,	// (0x000b66a0) main_welc_body_row_pane_ParamLimits

0x94ae,	// (0x000b66a0) main_welc_body_row_pane

0x94c2,	// (0x000b66b4) main_welc_opti_row_pane_ParamLimits

0x94c2,	// (0x000b66b4) main_welc_opti_row_pane

0xf074,	// (0x000bc266) main_welc_opti_row_pane_g1

0xf07c,	// (0x000bc26e) main_welc_opti_row_pane_t1

0xf08b,	// (0x000bc27d) main_welc_body_row_pane_t1

0xed53,	// (0x000bbf45) popup_notif_wgt_heading_pane

0xed6d,	// (0x000bbf5f) aid_size_list_notif_wgt_del_ParamLimits

0xed7a,	// (0x000bbf6c) list_notif_wgt_row_pane_g1_ParamLimits

0xed86,	// (0x000bbf78) list_notif_wgt_row_pane_g2_ParamLimits

0xed9a,	// (0x000bbf8c) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x000bd09b) list_notif_wgt_row_pane_g_ParamLimits

0xeda7,	// (0x000bbf99) list_notif_wgt_row_pane_t1_ParamLimits

0xedbd,	// (0x000bbfaf) list_notif_wgt_row_pane_t2_ParamLimits

0xedcf,	// (0x000bbfc1) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x000bd0a2) list_notif_wgt_row_pane_t_ParamLimits

0x8dec,	// (0x000b5fde) listrow_wgtman_pane_g1_ParamLimits

0x8df9,	// (0x000b5feb) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x000bd0cb) listrow_wgtman_pane_g_ParamLimits

0x8e17,	// (0x000b6009) listrow_wgtman_pane_t1_ParamLimits

0x8e2f,	// (0x000b6021) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x000bd0d0) listrow_wgtman_pane_t_ParamLimits

0x8e55,	// (0x000b6047) wait_bar_pane_cp09_ParamLimits

0x9517,	// (0x000b6709) bg_popup_heading_pane_cp02

0xf09a,	// (0x000bc28c) popup_notif_wgt_heading_pane_g1

0xf0a2,	// (0x000bc294) popup_notif_wgt_heading_pane_t1

0x9517,	// (0x000b6709) main_vids_pane

0x9517,	// (0x000b6709) vids_listscroll_pane

0x94d2,	// (0x000b66c4) scroll_pane_cp040

0x9517,	// (0x000b6709) vids_list_pane

0x94dd,	// (0x000b66cf) vids_list_double_pane_ParamLimits

0x94dd,	// (0x000b66cf) vids_list_double_pane

0x94ee,	// (0x000b66e0) vids_list_double_pane_g1

0x94f7,	// (0x000b66e9) vids_list_double_pane_t1

0x9507,	// (0x000b66f9) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x000bd154) vids_list_double_pane_t

0x9568,	// (0x000b675a) main_ncimui_pane_ParamLimits

0x75bd,	// (0x000b47af) main_ncimui_pane_g1_ParamLimits

0x75c9,	// (0x000b47bb) main_ncimui_pane_g2_ParamLimits

0x75c9,	// (0x000b47bb) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x000bcddc) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x000bcddc) main_ncimui_pane_g

0x9462,	// (0x000b6654) main_welc_pane_g1_ParamLimits

0x9462,	// (0x000b6654) main_welc_pane_g1

0x9477,	// (0x000b6669) main_welc_pane_g2_ParamLimits

0x9477,	// (0x000b6669) main_welc_pane_g2

0x0001,

0xff5d,	// (0x000bd14f) main_welc_pane_g_ParamLimits

0xff5d,	// (0x000bd14f) main_welc_pane_g

0x9be4,	// (0x000b6dd6) listscroll_mce_pane_ParamLimits

0x2743,	// (0x000af935) wait_bar_pane_cp10

0xc80e,	// (0x000b9a00) main_cale_day_pane_ParamLimits

0xc80e,	// (0x000b9a00) main_cale_week_pane_ParamLimits

0x9be4,	// (0x000b6dd6) main_messa_pane_ParamLimits

0x4e0b,	// (0x000b1ffd) main_clock2_btn_pane_ParamLimits

0x4e0b,	// (0x000b1ffd) main_clock2_btn_pane

0xd02b,	// (0x000ba21d) main_clock2_btn_pane_cp01_ParamLimits

0xd02b,	// (0x000ba21d) main_clock2_btn_pane_cp01

0xe9d1,	// (0x000bbbc3) list_cale_mrui_pane_ParamLimits

0xee13,	// (0x000bc005) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x000bd0a9) main_cf0_pane_g

0x9026,	// (0x000b6218) area_left_week_number_pane_ParamLimits

0x9034,	// (0x000b6226) area_top_day_name_pane_ParamLimits

0x9047,	// (0x000b6239) frame_month_view_pane_ParamLimits

0xef3b,	// (0x000bc12d) grid_month_view_pane_ParamLimits

0xef49,	// (0x000bc13b) frm_month_g1_ParamLimits

0x90ce,	// (0x000b62c0) frm_month_g2_ParamLimits

0x90e1,	// (0x000b62d3) frm_month_g3_ParamLimits

0x90f4,	// (0x000b62e6) frm_month_g4_ParamLimits

0x9107,	// (0x000b62f9) frm_month_g5_ParamLimits

0x911a,	// (0x000b630c) frm_month_g6_ParamLimits

0x912d,	// (0x000b631f) frm_month_g7_ParamLimits

0xef56,	// (0x000bc148) frm_month_g8_ParamLimits

0x9142,	// (0x000b6334) frm_month_g9_ParamLimits

0x9152,	// (0x000b6344) frm_month_g10_ParamLimits

0x9162,	// (0x000b6354) frm_month_g11_ParamLimits

0x9172,	// (0x000b6364) frm_month_g12_ParamLimits

0x9184,	// (0x000b6376) frm_month_g13_ParamLimits

0x9198,	// (0x000b638a) frm_month_g14_ParamLimits

0x91ac,	// (0x000b639e) frm_month_g15_ParamLimits

0x91c0,	// (0x000b63b2) frm_month_g16_ParamLimits

0xff08,	// (0x000bd0fa) frm_month_g_ParamLimits

0xef63,	// (0x000bc155) cell_top_day_name_pane_t1_ParamLimits

0x91d4,	// (0x000b63c6) cell_area_left_week_number_pane_g1_ParamLimits

0x91e0,	// (0x000b63d2) cell_area_left_week_number_pane_t1_ParamLimits

0xce9b,	// (0x000ba08d) cell_month_view_pane_g1_ParamLimits

0x91f3,	// (0x000b63e5) cell_month_view_pane_t1_ParamLimits

0x9bdc,	// (0x000b6dce) main_clock2_btn_pane_g1

0xf0b0,	// (0x000bc2a2) main_clock2_btn_pane_t1

0x9568,	// (0x000b675a) listscroll_cmail_pane_ParamLimits

0xe754,	// (0x000bb946) main_sp_fs_email_pane_g1_ParamLimits

0xe760,	// (0x000bb952) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x000bced7) main_sp_fs_email_pane_g_ParamLimits

0xeadd,	// (0x000bbccf) list_recal_day_pane_ParamLimits

0xeaee,	// (0x000bbce0) mian_recal_day_pane_t1

0x80b0,	// (0x000b52a2) list_single_dyc_row_text_pane_t4_ParamLimits

0x80b0,	// (0x000b52a2) list_single_dyc_row_text_pane_t4

0x80f9,	// (0x000b52eb) list_single_dyc_row_text_pane_t5_ParamLimits

0x80f9,	// (0x000b52eb) list_single_dyc_row_text_pane_t5

0xa5a0,	// (0x000b7792) list_single_dyc_row_text_pane_t6_ParamLimits

0xa5a0,	// (0x000b7792) list_single_dyc_row_text_pane_t6

0xae1d,	// (0x000b800f) aid_mgn_list_cale_time_pane

0x9568,	// (0x000b675a) main_gallery2_pane_ParamLimits

0xd03f,	// (0x000ba231) main_clock2_pane_cp01_t1

0xd04f,	// (0x000ba241) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x000bc9b6) main_clock2_pane_cp01_t

0x0630,	// (0x000ad822) cale_week_scroll_pane_g16_ParamLimits

0x0630,	// (0x000ad822) cale_week_scroll_pane_g16
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Large
