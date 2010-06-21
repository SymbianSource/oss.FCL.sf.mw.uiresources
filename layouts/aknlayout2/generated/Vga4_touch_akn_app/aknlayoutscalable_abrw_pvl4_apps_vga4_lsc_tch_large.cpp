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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x000acfc9 };

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
0xfc90,	// (0x000acc59) Screen

0xfc9c,	// (0x000acc65) application_window

0xfd04,	// (0x000acccd) area_bottom_pane_ParamLimits

0xfd04,	// (0x000acccd) area_bottom_pane

0xfd66,	// (0x000acd2f) area_top_pane_ParamLimits

0xfd66,	// (0x000acd2f) area_top_pane

0xfdc3,	// (0x000acd8c) call_video_uplink_pane_ParamLimits

0xfdc3,	// (0x000acd8c) call_video_uplink_pane

0xfe08,	// (0x000acdd1) main_pane_ParamLimits

0xfe08,	// (0x000acdd1) main_pane

0xca35,	// (0x000b99fe) context_pane

0x3649,	// (0x000b0612) navi_pane

0x367d,	// (0x000b0646) popup_cale_events_window_ParamLimits

0x367d,	// (0x000b0646) popup_cale_events_window

0xca48,	// (0x000b9a11) popup_mup_playback_window

0x3695,	// (0x000b065e) signal_pane

0xa95a,	// (0x000b7923) main_browser_pane

0xab0b,	// (0x000b7ad4) main_burst_pane

0x3351,	// (0x000b031a) main_calc_pane

0xca1b,	// (0x000b99e4) main_cale_day_pane

0x3365,	// (0x000b032e) main_cale_month_pane

0xca1b,	// (0x000b99e4) main_cale_week_pane

0xab0b,	// (0x000b7ad4) main_call_pane

0x9aa6,	// (0x000b6a6f) main_call_poc_pane

0xab0b,	// (0x000b7ad4) main_camera_pane

0xab0b,	// (0x000b7ad4) main_chi_dic_pane

0xb307,	// (0x000b82d0) main_clock_pane

0x9aa6,	// (0x000b6a6f) main_fmradio_pane

0xab0b,	// (0x000b7ad4) main_graph_messa_pane

0x9aa6,	// (0x000b6a6f) main_help_pane

0xa95a,	// (0x000b7923) main_im_pane

0x9d01,	// (0x000b6cca) main_image_pane_ParamLimits

0x9d01,	// (0x000b6cca) main_image_pane

0x9aa6,	// (0x000b6a6f) main_location2_pane

0xab0b,	// (0x000b7ad4) main_location_pane

0x9d01,	// (0x000b6cca) main_messa_pane

0x9aa6,	// (0x000b6a6f) main_mp2_pane

0xab0b,	// (0x000b7ad4) main_mp_pane

0x9aa6,	// (0x000b6a6f) main_msg_pane

0x9aa6,	// (0x000b6a6f) main_mup_eq_pane

0x9aa6,	// (0x000b6a6f) main_mup_pane

0xa95a,	// (0x000b7923) main_notes_pane

0x9aa6,	// (0x000b6a6f) main_pec_pane

0x9aa6,	// (0x000b6a6f) main_phob_pane

0x9aa6,	// (0x000b6a6f) main_pinb_pane

0x9aa6,	// (0x000b6a6f) main_postcard_pane

0x9aa6,	// (0x000b6a6f) main_qdial_pane

0xab0b,	// (0x000b7ad4) main_skin_pane

0x9aa6,	// (0x000b6a6f) main_smil2_pane

0xab0b,	// (0x000b7ad4) main_smil_pane

0xab0b,	// (0x000b7ad4) main_video_pane

0xab0b,	// (0x000b7ad4) main_video_tele_pane

0x9d01,	// (0x000b6cca) main_viewer_pane_ParamLimits

0x9d01,	// (0x000b6cca) main_viewer_pane

0xab0b,	// (0x000b7ad4) main_vorec_pane

0x33b7,	// (0x000b0380) popup_blid_sat_info_window_ParamLimits

0x33b7,	// (0x000b0380) popup_blid_sat_info_window

0x341b,	// (0x000b03e4) popup_dyc_status_message_window_ParamLimits

0x341b,	// (0x000b03e4) popup_dyc_status_message_window

0x3435,	// (0x000b03fe) popup_grid_large_graphic_window_ParamLimits

0x3435,	// (0x000b03fe) popup_grid_large_graphic_window

0x34f7,	// (0x000b04c0) popup_loc_request_window_ParamLimits

0x34f7,	// (0x000b04c0) popup_loc_request_window

0x361d,	// (0x000b05e6) popup_wml_address_window_ParamLimits

0x361d,	// (0x000b05e6) popup_wml_address_window

0x318f,	// (0x000b0158) call_muted_g1

0x2e20,	// (0x000afde9) popup_call_audio_conf_window_ParamLimits

0x2e20,	// (0x000afde9) popup_call_audio_conf_window

0x319f,	// (0x000b0168) popup_call_audio_first_window_ParamLimits

0x319f,	// (0x000b0168) popup_call_audio_first_window

0x3215,	// (0x000b01de) popup_call_audio_in_window_ParamLimits

0x3215,	// (0x000b01de) popup_call_audio_in_window

0x3251,	// (0x000b021a) popup_call_audio_out_window_ParamLimits

0x3251,	// (0x000b021a) popup_call_audio_out_window

0x328b,	// (0x000b0254) popup_call_audio_second_window_ParamLimits

0x328b,	// (0x000b0254) popup_call_audio_second_window

0x32e1,	// (0x000b02aa) popup_call_audio_wait_window_ParamLimits

0x32e1,	// (0x000b02aa) popup_call_audio_wait_window

0x3316,	// (0x000b02df) popup_number_entry_window_ParamLimits

0x3316,	// (0x000b02df) popup_number_entry_window

0x965e,	// (0x000b6627) bg_popup_call_pane_cp05_ParamLimits

0x965e,	// (0x000b6627) bg_popup_call_pane_cp05

0x967e,	// (0x000b6647) popup_number_entry_window_t1

0x9691,	// (0x000b665a) popup_number_entry_window_t2

0x96a3,	// (0x000b666c) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x000bc08f) popup_number_entry_window_t

0x96ea,	// (0x000b66b3) text_title_cp2

0x96fd,	// (0x000b66c6) bg_popup_call_pane_cp_ParamLimits

0x96fd,	// (0x000b66c6) bg_popup_call_pane_cp

0x970b,	// (0x000b66d4) call_thumbnail_pane

0x9713,	// (0x000b66dc) popup_call_audio_in_window_g1_ParamLimits

0x9713,	// (0x000b66dc) popup_call_audio_in_window_g1

0x971f,	// (0x000b66e8) popup_call_audio_in_window_g2_ParamLimits

0x971f,	// (0x000b66e8) popup_call_audio_in_window_g2

0x972b,	// (0x000b66f4) popup_call_audio_in_window_g3_ParamLimits

0x972b,	// (0x000b66f4) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x000bc098) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x000bc098) popup_call_audio_in_window_g

0x9737,	// (0x000b6700) popup_call_audio_in_window_t1_ParamLimits

0x9737,	// (0x000b6700) popup_call_audio_in_window_t1

0x9753,	// (0x000b671c) popup_call_audio_in_window_t2_ParamLimits

0x9753,	// (0x000b671c) popup_call_audio_in_window_t2

0x976f,	// (0x000b6738) popup_call_audio_in_window_t3_ParamLimits

0x976f,	// (0x000b6738) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x000bc09f) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x000bc09f) popup_call_audio_in_window_t

0x96fd,	// (0x000b66c6) bg_popup_call_pane_cp01_ParamLimits

0x96fd,	// (0x000b66c6) bg_popup_call_pane_cp01

0x970b,	// (0x000b66d4) call_thumbnail_pane_cp02

0x9782,	// (0x000b674b) call_type_pane_cp022

0x978a,	// (0x000b6753) popup_call_audio_out_window_g1_ParamLimits

0x978a,	// (0x000b6753) popup_call_audio_out_window_g1

0x979c,	// (0x000b6765) popup_call_audio_out_window_g2_ParamLimits

0x979c,	// (0x000b6765) popup_call_audio_out_window_g2

0x97a8,	// (0x000b6771) popup_call_audio_out_window_g3_ParamLimits

0x97a8,	// (0x000b6771) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x000bc0a6) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x000bc0a6) popup_call_audio_out_window_g

0x97ba,	// (0x000b6783) popup_call_audio_out_window_t1_ParamLimits

0x97ba,	// (0x000b6783) popup_call_audio_out_window_t1

0x97d2,	// (0x000b679b) popup_call_audio_out_window_t2_ParamLimits

0x97d2,	// (0x000b679b) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x000bc0ad) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x000bc0ad) popup_call_audio_out_window_t

0x97e7,	// (0x000b67b0) bg_popup_call_pane_ParamLimits

0x97e7,	// (0x000b67b0) bg_popup_call_pane

0xffa5,	// (0x000acf6e) call_thumbnail_pane_cp_ParamLimits

0xffa5,	// (0x000acf6e) call_thumbnail_pane_cp

0x986b,	// (0x000b6834) call_type_pane_cp01_ParamLimits

0x986b,	// (0x000b6834) call_type_pane_cp01

0x98af,	// (0x000b6878) popup_call_audio_first_window_g1_ParamLimits

0x98af,	// (0x000b6878) popup_call_audio_first_window_g1

0x98fb,	// (0x000b68c4) popup_call_audio_first_window_g2_ParamLimits

0x98fb,	// (0x000b68c4) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x000bc0b2) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x000bc0b2) popup_call_audio_first_window_g

0x993f,	// (0x000b6908) popup_call_audio_first_window_t1_ParamLimits

0x993f,	// (0x000b6908) popup_call_audio_first_window_t1

0x99eb,	// (0x000b69b4) popup_call_audio_first_window_t4_ParamLimits

0x99eb,	// (0x000b69b4) popup_call_audio_first_window_t4

0x9a77,	// (0x000b6a40) popup_call_audio_first_window_t5_ParamLimits

0x9a77,	// (0x000b6a40) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x000bc0b7) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x000bc0b7) popup_call_audio_first_window_t

0x9aa6,	// (0x000b6a6f) bg_popup_call_pane_cp02

0x9ab0,	// (0x000b6a79) call_type_pane_cp023

0x9ab8,	// (0x000b6a81) popup_call_audio_wait_window_g1

0x9ac0,	// (0x000b6a89) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000bc0be) popup_call_audio_wait_window_g

0x9ac8,	// (0x000b6a91) popup_call_audio_wait_window_t3

0x9ad6,	// (0x000b6a9f) bg_popup_call_pane_cp03_ParamLimits

0x9ad6,	// (0x000b6a9f) bg_popup_call_pane_cp03

0x9b36,	// (0x000b6aff) call_thumbnail_pane_cp011_ParamLimits

0x9b36,	// (0x000b6aff) call_thumbnail_pane_cp011

0x9b42,	// (0x000b6b0b) call_type_pane_cp034_ParamLimits

0x9b42,	// (0x000b6b0b) call_type_pane_cp034

0x9b7e,	// (0x000b6b47) popup_call_audio_second_window_g1_ParamLimits

0x9b7e,	// (0x000b6b47) popup_call_audio_second_window_g1

0x9bba,	// (0x000b6b83) popup_call_audio_second_window_g2_ParamLimits

0x9bba,	// (0x000b6b83) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x000bc0c3) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x000bc0c3) popup_call_audio_second_window_g

0x9bf6,	// (0x000b6bbf) popup_call_audio_second_window_t1_ParamLimits

0x9bf6,	// (0x000b6bbf) popup_call_audio_second_window_t1

0x9c77,	// (0x000b6c40) popup_call_audio_second_window_t2_ParamLimits

0x9c77,	// (0x000b6c40) popup_call_audio_second_window_t2

0x9cad,	// (0x000b6c76) popup_call_audio_second_window_t3_ParamLimits

0x9cad,	// (0x000b6c76) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x000bc0c8) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x000bc0c8) popup_call_audio_second_window_t

0x9aa6,	// (0x000b6a6f) bg_popup_call_pane_cp04

0x9ce3,	// (0x000b6cac) list_conf_pane

0x9ceb,	// (0x000b6cb4) popup_call_audio_conf_window_t1

0x9cf9,	// (0x000b6cc2) call_thumbnail_pane_g1

0x9d01,	// (0x000b6cca) bg_pinb_pane_ParamLimits

0x9d01,	// (0x000b6cca) bg_pinb_pane

0x9d0f,	// (0x000b6cd8) find_pinb_pane

0x9d18,	// (0x000b6ce1) listscroll_pinb_pane_ParamLimits

0x9d18,	// (0x000b6ce1) listscroll_pinb_pane

0x9d27,	// (0x000b6cf0) pinb_bg_pane_g1

0xffc9,	// (0x000acf92) pinb_bg_pane_g2

0xffd5,	// (0x000acf9e) pinb_bg_pane_g3

0xffe1,	// (0x000acfaa) pinb_bg_pane_g4

0xffed,	// (0x000acfb6) pinb_bg_pane_g5

0xfff9,	// (0x000acfc2) pinb_bg_pane_g6

0x0004,	// (0x000acfcd) pinb_bg_pane_g7

0x000f,	// (0x000acfd8) pinb_bg_pane_g8

0x001a,	// (0x000acfe3) pinb_bg_pane_g9

0x0024,	// (0x000acfed) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x000bc0cf) pinb_bg_pane_g

0x0041,	// (0x000ad00a) grid_pinb_pane

0x004c,	// (0x000ad015) list_pinb_pane

0x0057,	// (0x000ad020) scroll_pane_cp01_ParamLimits

0x0057,	// (0x000ad020) scroll_pane_cp01

0x9d31,	// (0x000b6cfa) find_pinb_pane_g1_ParamLimits

0x9d31,	// (0x000b6cfa) find_pinb_pane_g1

0x9d49,	// (0x000b6d12) find_pinb_pane_t1

0x9d5b,	// (0x000b6d24) find_pinb_pane_t2

0x0001,

0xf120,	// (0x000bc0e9) find_pinb_pane_t

0x9d70,	// (0x000b6d39) input_focus_pane_cp01_ParamLimits

0x9d70,	// (0x000b6d39) input_focus_pane_cp01

0x0069,	// (0x000ad032) cell_pinb_pane_ParamLimits

0x0069,	// (0x000ad032) cell_pinb_pane

0x008b,	// (0x000ad054) cell_pinb_pane_g1_ParamLimits

0x008b,	// (0x000ad054) cell_pinb_pane_g1

0x009f,	// (0x000ad068) cell_pinb_pane_g2_ParamLimits

0x009f,	// (0x000ad068) cell_pinb_pane_g2

0x9d7c,	// (0x000b6d45) cell_pinb_pane_g3_ParamLimits

0x9d7c,	// (0x000b6d45) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x000bc0ee) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x000bc0ee) cell_pinb_pane_g

0x9aa6,	// (0x000b6a6f) grid_highlight_pane_cp01

0x00ab,	// (0x000ad074) list_pinb_item_pane_ParamLimits

0x00ab,	// (0x000ad074) list_pinb_item_pane

0x9aa6,	// (0x000b6a6f) list_highlight_pane_cp02

0x00be,	// (0x000ad087) list_pinb_item_pane_g1_ParamLimits

0x00be,	// (0x000ad087) list_pinb_item_pane_g1

0x00cb,	// (0x000ad094) list_pinb_item_pane_g2_ParamLimits

0x00cb,	// (0x000ad094) list_pinb_item_pane_g2

0x00d7,	// (0x000ad0a0) list_pinb_item_pane_g3_ParamLimits

0x00d7,	// (0x000ad0a0) list_pinb_item_pane_g3

0x00e8,	// (0x000ad0b1) list_pinb_item_pane_g4_ParamLimits

0x00e8,	// (0x000ad0b1) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x000bc0f5) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x000bc0f5) list_pinb_item_pane_g

0x00f4,	// (0x000ad0bd) list_pinb_item_pane_t1_ParamLimits

0x00f4,	// (0x000ad0bd) list_pinb_item_pane_t1

0x012b,	// (0x000ad0f4) calc_display_pane

0x0150,	// (0x000ad119) calc_paper_pane

0x0173,	// (0x000ad13c) grid_calc_pane

0x9aa6,	// (0x000b6a6f) bg_list_pane_cp01

0x01a1,	// (0x000ad16a) clock_g1

0x01a9,	// (0x000ad172) clock_g2

0x0001,

0xf135,	// (0x000bc0fe) clock_g

0x01b1,	// (0x000ad17a) clock_t1_ParamLimits

0x01b1,	// (0x000ad17a) clock_t1

0x01c6,	// (0x000ad18f) clock_t2_ParamLimits

0x01c6,	// (0x000ad18f) clock_t2

0x01d8,	// (0x000ad1a1) clock_t3_ParamLimits

0x01d8,	// (0x000ad1a1) clock_t3

0x01ea,	// (0x000ad1b3) clock_t4_ParamLimits

0x01ea,	// (0x000ad1b3) clock_t4

0x01fc,	// (0x000ad1c5) clock_t5_ParamLimits

0x01fc,	// (0x000ad1c5) clock_t5

0x0211,	// (0x000ad1da) clock_t6_ParamLimits

0x0211,	// (0x000ad1da) clock_t6

0x0223,	// (0x000ad1ec) clock_t7_ParamLimits

0x0223,	// (0x000ad1ec) clock_t7

0x0235,	// (0x000ad1fe) clock_t8_ParamLimits

0x0235,	// (0x000ad1fe) clock_t8

0x0249,	// (0x000ad212) clock_t9_ParamLimits

0x0249,	// (0x000ad212) clock_t9

0x0008,

0xf13a,	// (0x000bc103) clock_t_ParamLimits

0xf13a,	// (0x000bc103) clock_t

0x9d90,	// (0x000b6d59) popup_clock_analogue_window_cp02

0x9d90,	// (0x000b6d59) popup_clock_digital_window_cp01

0xa924,	// (0x000b78ed) listscroll_help_pane

0x9aa6,	// (0x000b6a6f) phob_pre_status_pane

0xa92e,	// (0x000b78f7) grid_qdial_pane

0x9d01,	// (0x000b6cca) listscroll_mce_pane

0x9d01,	// (0x000b6cca) bg_notes_pane

0xa938,	// (0x000b7901) list_notes_pane

0x025f,	// (0x000ad228) scroll_pane_cp06

0xa946,	// (0x000b790f) bg_calc_paper_pane

0x9d98,	// (0x000b6d61) list_calc_pane

0xa95a,	// (0x000b7923) bg_calc_display_pane

0x0273,	// (0x000ad23c) calc_display_pane_t1

0x0285,	// (0x000ad24e) calc_display_pane_t2

0x9db2,	// (0x000b6d7b) calc_display_pane_t3

0x0002,

0xf14d,	// (0x000bc116) calc_display_pane_t

0x0297,	// (0x000ad260) cell_calc_pane_ParamLimits

0x0297,	// (0x000ad260) cell_calc_pane

0xa966,	// (0x000b792f) bg_calc_paper_pane_g1

0xa972,	// (0x000b793b) bg_calc_paper_pane_g2

0xa97e,	// (0x000b7947) bg_calc_paper_pane_g3

0xa98a,	// (0x000b7953) bg_calc_paper_pane_g4

0xa996,	// (0x000b795f) bg_calc_paper_pane_g5

0x02d2,	// (0x000ad29b) bg_calc_paper_pane_g6

0x02e0,	// (0x000ad2a9) bg_calc_paper_pane_g7

0x02ee,	// (0x000ad2b7) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x000bc11d) bg_calc_paper_pane_g

0x0301,	// (0x000ad2ca) calc_bg_paper_pane_g9

0x0314,	// (0x000ad2dd) list_calc_item_pane_ParamLimits

0x0314,	// (0x000ad2dd) list_calc_item_pane

0xa9a2,	// (0x000b796b) list_calc_item_pane_g1

0x9dc4,	// (0x000b6d8d) list_calc_item_pane_t1_ParamLimits

0x9dc4,	// (0x000b6d8d) list_calc_item_pane_t1

0x032c,	// (0x000ad2f5) list_calc_item_pane_t2_ParamLimits

0x032c,	// (0x000ad2f5) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x000bc12e) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x000bc12e) list_calc_item_pane_t

0xa9af,	// (0x000b7978) cell_calc_pane_g1

0xa9b9,	// (0x000b7982) grid_highlight_pane_cp02

0x035e,	// (0x000ad327) bg_calc_display_pane_g1

0x0367,	// (0x000ad330) bg_calc_display_pane_g2

0xa9db,	// (0x000b79a4) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x000bc138) bg_calc_display_pane_g

0x0371,	// (0x000ad33a) cell_qdial_pane_ParamLimits

0x0371,	// (0x000ad33a) cell_qdial_pane

0x0385,	// (0x000ad34e) cell_qdial_pane_g1_ParamLimits

0x0385,	// (0x000ad34e) cell_qdial_pane_g1

0x039b,	// (0x000ad364) cell_qdial_pane_g2_ParamLimits

0x039b,	// (0x000ad364) cell_qdial_pane_g2

0xa9e4,	// (0x000b79ad) cell_qdial_pane_g3_ParamLimits

0xa9e4,	// (0x000b79ad) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x000bc13f) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x000bc13f) cell_qdial_pane_g

0x03c2,	// (0x000ad38b) cell_qdial_pane_t1_ParamLimits

0x03c2,	// (0x000ad38b) cell_qdial_pane_t1

0x03da,	// (0x000ad3a3) cell_qdial_pane_t2_ParamLimits

0x03da,	// (0x000ad3a3) cell_qdial_pane_t2

0x03ed,	// (0x000ad3b6) cell_qdial_pane_t3_ParamLimits

0x03ed,	// (0x000ad3b6) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x000bc148) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x000bc148) cell_qdial_pane_t

0x9aa6,	// (0x000b6a6f) grid_highlight_pane_cp04

0xa9f0,	// (0x000b79b9) thumbnail_qdial_pane_ParamLimits

0xa9f0,	// (0x000b79b9) thumbnail_qdial_pane

0xaa4c,	// (0x000b7a15) list_help_pane

0xaa55,	// (0x000b7a1e) scroll_pane_cp02

0x0400,	// (0x000ad3c9) help_list_pane_t1_ParamLimits

0x0400,	// (0x000ad3c9) help_list_pane_t1

0x9dd6,	// (0x000b6d9f) bg_notes_pane_g2

0x9dde,	// (0x000b6da7) bg_notes_pane_g3

0x9de6,	// (0x000b6daf) notes_bg_pane_g1

0x9dee,	// (0x000b6db7) notes_bg_pane_g4

0x9df6,	// (0x000b6dbf) notes_bg_pane_g5

0x9dfe,	// (0x000b6dc7) notes_bg_pane_g6

0x9e06,	// (0x000b6dcf) notes_bg_pane_g7

0x9e0e,	// (0x000b6dd7) notes_bg_pane_g8

0x9e16,	// (0x000b6ddf) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x000bc166) notes_bg_pane_g

0x0424,	// (0x000ad3ed) list_notes_text_pane_ParamLimits

0x0424,	// (0x000ad3ed) list_notes_text_pane

0xaa5e,	// (0x000b7a27) list_notes_text_pane_g1

0x043b,	// (0x000ad404) list_notes_text_pane_t1

0x0449,	// (0x000ad412) listscroll_cale_week_pane

0x0473,	// (0x000ad43c) bg_cale_heading_pane

0x0497,	// (0x000ad460) bg_cale_pane_cp01

0x04b4,	// (0x000ad47d) cale_week_corner_pane

0x04d3,	// (0x000ad49c) cale_week_day_heading_pane

0x04fc,	// (0x000ad4c5) cale_week_scroll_pane_g1

0x051b,	// (0x000ad4e4) cale_week_scroll_pane_g2

0x0533,	// (0x000ad4fc) cale_week_scroll_pane_g3

0x054b,	// (0x000ad514) cale_week_scroll_pane_g4

0x0563,	// (0x000ad52c) cale_week_scroll_pane_g5

0x0583,	// (0x000ad54c) cale_week_scroll_pane_g6

0x05a3,	// (0x000ad56c) cale_week_scroll_pane_g7

0x05c7,	// (0x000ad590) cale_week_scroll_pane_g8

0x05eb,	// (0x000ad5b4) cale_week_scroll_pane_g9

0x0603,	// (0x000ad5cc) cale_week_scroll_pane_g10

0x061b,	// (0x000ad5e4) cale_week_scroll_pane_g11

0x0633,	// (0x000ad5fc) cale_week_scroll_pane_g12

0x0657,	// (0x000ad620) cale_week_scroll_pane_g13

0x0657,	// (0x000ad620) cale_week_scroll_pane_g14

0x0657,	// (0x000ad620) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x000bc175) cale_week_scroll_pane_g

0x069f,	// (0x000ad668) cale_week_time_pane

0x06c3,	// (0x000ad68c) grid_cale_week_pane

0xaa93,	// (0x000b7a5c) scroll_pane_cp08

0x06f5,	// (0x000ad6be) cell_cale_week_pane_ParamLimits

0x06f5,	// (0x000ad6be) cell_cale_week_pane

0x0791,	// (0x000ad75a) cale_week_day_heading_pane_t1

0x07bb,	// (0x000ad784) cale_week_day_heading_pane_t2

0x07ea,	// (0x000ad7b3) cale_week_day_heading_pane_t3

0x0819,	// (0x000ad7e2) cale_week_day_heading_pane_t4

0x0848,	// (0x000ad811) cale_week_day_heading_pane_t5

0x087b,	// (0x000ad844) cale_week_day_heading_pane_t6

0x08b2,	// (0x000ad87b) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x000bc196) cale_week_day_heading_pane_t

0xaab0,	// (0x000b7a79) bg_cale_side_pane

0x08dc,	// (0x000ad8a5) cale_week_time_pane_t1

0x08f6,	// (0x000ad8bf) cale_week_time_pane_t2

0x0910,	// (0x000ad8d9) cale_week_time_pane_t3

0x092a,	// (0x000ad8f3) cale_week_time_pane_t4

0x0944,	// (0x000ad90d) cale_week_time_pane_t5

0x095e,	// (0x000ad927) cale_week_time_pane_t6

0x097e,	// (0x000ad947) cale_week_time_pane_t7

0x09a4,	// (0x000ad96d) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x000bc1a5) cale_week_time_pane_t

0x09ca,	// (0x000ad993) cell_cale_week_pane_g2

0x09ee,	// (0x000ad9b7) cell_cale_week_pane_g3_ParamLimits

0x09ee,	// (0x000ad9b7) cell_cale_week_pane_g3

0xaabe,	// (0x000b7a87) grid_highlight_pane_cp07

0xaac6,	// (0x000b7a8f) listscroll_gms_pane

0xaad0,	// (0x000b7a99) grid_gms_pane

0xaad9,	// (0x000b7aa2) listscroll_gms_pane_g1

0xaae1,	// (0x000b7aaa) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x000bc1b6) listscroll_gms_pane_g

0x0a06,	// (0x000ad9cf) scroll_pane_cp010

0x0a11,	// (0x000ad9da) cell_gms_pane_ParamLimits

0x0a11,	// (0x000ad9da) cell_gms_pane

0x0a28,	// (0x000ad9f1) cell_gms_pane_g1

0xaae9,	// (0x000b7ab2) cell_gms_pane_g2

0xaaf1,	// (0x000b7aba) cell_gms_pane_g3

0xaafa,	// (0x000b7ac3) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x000bc1bb) cell_gms_pane_g

0xab03,	// (0x000b7acc) grid_highlight_pane_cp09

0x3137,	// (0x000b0100) phob_pre_status_pane_g1

0x313f,	// (0x000b0108) phob_pre_status_pane_g2

0x3147,	// (0x000b0110) phob_pre_status_pane_g3

0x314f,	// (0x000b0118) phob_pre_status_pane_g4

0x0004,

0xf5dd,	// (0x000bc5a6) phob_pre_status_pane_g

0x315f,	// (0x000b0128) phob_pre_status_pane_t1

0x316f,	// (0x000b0138) phob_pre_status_pane_t2

0x317f,	// (0x000b0148) phob_pre_status_pane_t3

0x0002,

0xf5e8,	// (0x000bc5b1) phob_pre_status_pane_t

0xab0b,	// (0x000b7ad4) bg_list_pane_cp05

0x0a38,	// (0x000ada01) grid_vorec_pane

0x0a42,	// (0x000ada0b) vorec_t1

0x0a50,	// (0x000ada19) vorec_t2

0x0a5e,	// (0x000ada27) vorec_t3

0x0a6c,	// (0x000ada35) vorec_t4

0x95fd,	// (0x000b65c6) vorec_t5

0x960b,	// (0x000b65d4) vorec_t6

0x0004,

0xf1fb,	// (0x000bc1c4) vorec_t

0x9619,	// (0x000b65e2) wait_bar_pane_cp01

0xab13,	// (0x000b7adc) cell_vorec_pane_ParamLimits

0xab13,	// (0x000b7adc) cell_vorec_pane

0x9e1e,	// (0x000b6de7) cell_vorec_pane_g1

0x9aa6,	// (0x000b6a6f) grid_highlight_pane_cp05

0x0a9e,	// (0x000ada67) cams_zoom_pane

0x0aad,	// (0x000ada76) image_vga_pane

0x0ac7,	// (0x000ada90) main_camera_pane_g1

0x0ad9,	// (0x000adaa2) main_camera_pane_g2

0x0ae9,	// (0x000adab2) main_camera_pane_g3

0x0afd,	// (0x000adac6) main_camera_pane_g4

0x0b11,	// (0x000adada) main_camera_pane_g5

0x0b25,	// (0x000adaee) main_camera_pane_g6

0x0b39,	// (0x000adb02) main_camera_pane_g7

0x0007,

0xf206,	// (0x000bc1cf) main_camera_pane_g

0x0b4d,	// (0x000adb16) main_camera_pane_t1

0x0b63,	// (0x000adb2c) main_camera_pane_t2

0x0001,

0xf217,	// (0x000bc1e0) main_camera_pane_t

0x0ba1,	// (0x000adb6a) cams_zoom_pane_cp_ParamLimits

0x0ba1,	// (0x000adb6a) cams_zoom_pane_cp

0x0bc9,	// (0x000adb92) image_cif_pane_ParamLimits

0x0bc9,	// (0x000adb92) image_cif_pane

0x0c04,	// (0x000adbcd) image_subqcif_pane

0x0c0e,	// (0x000adbd7) main_video_pane_g1_ParamLimits

0x0c0e,	// (0x000adbd7) main_video_pane_g1

0x0c32,	// (0x000adbfb) main_video_pane_g2_ParamLimits

0x0c32,	// (0x000adbfb) main_video_pane_g2

0x0c68,	// (0x000adc31) main_video_pane_g3_ParamLimits

0x0c68,	// (0x000adc31) main_video_pane_g3

0x0c96,	// (0x000adc5f) main_video_pane_g4_ParamLimits

0x0c96,	// (0x000adc5f) main_video_pane_g4

0x0cc4,	// (0x000adc8d) main_video_pane_g5_ParamLimits

0x0cc4,	// (0x000adc8d) main_video_pane_g5

0xab34,	// (0x000b7afd) main_video_pane_g6_ParamLimits

0xab34,	// (0x000b7afd) main_video_pane_g6

0x0006,

0xf21c,	// (0x000bc1e5) main_video_pane_g_ParamLimits

0xf21c,	// (0x000bc1e5) main_video_pane_g

0x0ced,	// (0x000adcb6) main_video_pane_t1_ParamLimits

0x0ced,	// (0x000adcb6) main_video_pane_t1

0xab4e,	// (0x000b7b17) cams_zoom_pane_g1

0xab57,	// (0x000b7b20) cams_zoom_pane_g2

0xab60,	// (0x000b7b29) cams_zoom_pane_g3

0xab69,	// (0x000b7b32) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x000bc1f4) cams_zoom_pane_g

0x0d4a,	// (0x000add13) grid_cams_pane

0x0d64,	// (0x000add2d) linegrid_cams_pane

0x0d76,	// (0x000add3f) cell_cams_pane_ParamLimits

0x0d76,	// (0x000add3f) cell_cams_pane

0xab72,	// (0x000b7b3b) cams_burst_image_pane

0xab7a,	// (0x000b7b43) cell_cams_pane_g1

0x9aa6,	// (0x000b6a6f) grid_highlight_pane_cp03

0xa9af,	// (0x000b7978) mp_bg_pane_g1

0x9aa6,	// (0x000b6a6f) bg_list_pane_cp03

0xc93e,	// (0x000b9907) bg_mp_pane

0xc946,	// (0x000b990f) grid_mp_pane

0xc94e,	// (0x000b9917) media_player_g1

0xc958,	// (0x000b9921) media_player_t1

0xc966,	// (0x000b992f) media_player_t2

0xc974,	// (0x000b993d) media_player_t3

0xc982,	// (0x000b994b) media_player_t4

0xc990,	// (0x000b9959) media_player_t5

0xc99e,	// (0x000b9967) media_player_t6

0xc9ac,	// (0x000b9975) media_player_t7

0x0006,

0xf5c7,	// (0x000bc590) media_player_t

0xc9ba,	// (0x000b9983) wait_bar_pane_cp02

0xf5ac,	// (0x000bc575) main_usb_pane_t

0x312e,	// (0x000b00f7) cell_mp_pane

0xa9af,	// (0x000b7978) cell_mp_pane_g1

0x9aa6,	// (0x000b6a6f) grid_highlight_pane_cp06

0xab82,	// (0x000b7b4b) grid_skin_colour_pane

0xab8a,	// (0x000b7b53) list_highlight_pane_cp03

0x0e91,	// (0x000ade5a) skin_g1

0xab92,	// (0x000b7b5b) skin_t1

0xaba1,	// (0x000b7b6a) skin_t2

0x0001,

0xf260,	// (0x000bc229) skin_t

0x0e9b,	// (0x000ade64) cell_skin_colour_pane_ParamLimits

0x0e9b,	// (0x000ade64) cell_skin_colour_pane

0xabaf,	// (0x000b7b78) cell_skin_colour_pane_g1

0x0f0e,	// (0x000aded7) call_video_g1_ParamLimits

0x0f0e,	// (0x000aded7) call_video_g1

0x0f2a,	// (0x000adef3) call_video_g2_ParamLimits

0x0f2a,	// (0x000adef3) call_video_g2

0x0001,

0xf265,	// (0x000bc22e) call_video_g_ParamLimits

0xf265,	// (0x000bc22e) call_video_g

0x0f6f,	// (0x000adf38) call_video_uplink_pane_cp1_ParamLimits

0x0f6f,	// (0x000adf38) call_video_uplink_pane_cp1

0xabc1,	// (0x000b7b8a) call_video_uplink_pane_cp2

0x1010,	// (0x000adfd9) video_down_crop_pane_ParamLimits

0x1010,	// (0x000adfd9) video_down_crop_pane

0x10f9,	// (0x000ae0c2) video_down_pane_ParamLimits

0x10f9,	// (0x000ae0c2) video_down_pane

0xabc9,	// (0x000b7b92) video_down_subqcif_pane_ParamLimits

0xabc9,	// (0x000b7b92) video_down_subqcif_pane

0xabe3,	// (0x000b7bac) video_down_subqcif_pane_cp_ParamLimits

0xabe3,	// (0x000b7bac) video_down_subqcif_pane_cp

0xac0b,	// (0x000b7bd4) im_reading_pane_ParamLimits

0xac0b,	// (0x000b7bd4) im_reading_pane

0x1204,	// (0x000ae1cd) im_writing_pane_ParamLimits

0x1204,	// (0x000ae1cd) im_writing_pane

0x1222,	// (0x000ae1eb) im_reading_pane_t1

0xac25,	// (0x000b7bee) list_im_pane

0xac36,	// (0x000b7bff) scroll_pane_cp07

0x1261,	// (0x000ae22a) im_writing_pane_t1_ParamLimits

0x1261,	// (0x000ae22a) im_writing_pane_t1

0xac4f,	// (0x000b7c18) im_writing_pane_t2_ParamLimits

0xac4f,	// (0x000b7c18) im_writing_pane_t2

0x0001,

0xf26f,	// (0x000bc238) im_writing_pane_t_ParamLimits

0xf26f,	// (0x000bc238) im_writing_pane_t

0x9aa6,	// (0x000b6a6f) input_focus_pane_cp04

0x9aa6,	// (0x000b6a6f) input_focus_pane_cp05

0x1276,	// (0x000ae23f) list_im_single_pane_ParamLimits

0x1276,	// (0x000ae23f) list_im_single_pane

0x128f,	// (0x000ae258) list_single_im_pane_t1

0x30ee,	// (0x000b00b7) blid_accuracy_pane

0x30f6,	// (0x000b00bf) blid_compass_pane

0x3100,	// (0x000b00c9) main_location_t1

0x3110,	// (0x000b00d9) main_location_t2

0x3120,	// (0x000b00e9) main_location_t3

0x0002,

0xf5d6,	// (0x000bc59f) main_location_t

0x9aa6,	// (0x000b6a6f) aid_levels_location

0xa9af,	// (0x000b7978) blid_accuracy_pane_g1

0xa9af,	// (0x000b7978) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x000bc29a) blid_accuracy_pane_g

0xac97,	// (0x000b7c60) wml_content_pane

0xacd5,	// (0x000b7c9e) wml_button_pane_ParamLimits

0xacd5,	// (0x000b7c9e) wml_button_pane

0x129e,	// (0x000ae267) wml_list_single_large_pane_ParamLimits

0x129e,	// (0x000ae267) wml_list_single_large_pane

0x12b7,	// (0x000ae280) wml_list_single_medium_pane_ParamLimits

0x12b7,	// (0x000ae280) wml_list_single_medium_pane

0x12d1,	// (0x000ae29a) wml_list_single_small_pane_ParamLimits

0x12d1,	// (0x000ae29a) wml_list_single_small_pane

0xace9,	// (0x000b7cb2) wml_selection_box_pane_ParamLimits

0xace9,	// (0x000b7cb2) wml_selection_box_pane

0xacfc,	// (0x000b7cc5) wml_list_single_pane_t1

0xad0b,	// (0x000b7cd4) wml_list_single_medium_pane_t1

0xad1a,	// (0x000b7ce3) wml_list_single_large_pane_t1

0xad29,	// (0x000b7cf2) input_focus_pane_cp02_ParamLimits

0xad29,	// (0x000b7cf2) input_focus_pane_cp02

0xad3c,	// (0x000b7d05) wml_selection_box_pane_g1

0xad45,	// (0x000b7d0e) wml_selection_box_pane_t1_ParamLimits

0xad45,	// (0x000b7d0e) wml_selection_box_pane_t1

0x9d01,	// (0x000b6cca) bg_wml_button_pane_ParamLimits

0x9d01,	// (0x000b6cca) bg_wml_button_pane

0xad5d,	// (0x000b7d26) wml_button_pane_g1

0xad65,	// (0x000b7d2e) wml_button_pane_t1

0xad5d,	// (0x000b7d26) wml_button_bg_pane_g1

0xad75,	// (0x000b7d3e) wml_button_bg_pane_g2

0xad7d,	// (0x000b7d46) wml_button_bg_pane_g3

0xad85,	// (0x000b7d4e) wml_button_bg_pane_g4

0xad8d,	// (0x000b7d56) wml_button_bg_pane_g5

0xad95,	// (0x000b7d5e) wml_button_bg_pane_g6

0xad9d,	// (0x000b7d66) wml_button_bg_pane_g7

0xada5,	// (0x000b7d6e) wml_button_bg_pane_g8

0xadad,	// (0x000b7d76) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x000bc23d) wml_button_bg_pane_g

0x12f0,	// (0x000ae2b9) bg_list_pane_cp02

0xadb5,	// (0x000b7d7e) mce_header_pane_ParamLimits

0xadb5,	// (0x000b7d7e) mce_header_pane

0xadcb,	// (0x000b7d94) mce_icon_pane

0xadcb,	// (0x000b7d94) mce_image_pane

0xadd4,	// (0x000b7d9d) mce_text_pane_ParamLimits

0xadd4,	// (0x000b7d9d) mce_text_pane

0x12fa,	// (0x000ae2c3) scroll_pane_cp03

0xaccd,	// (0x000b7c96) scroll_pane_cp04

0xade7,	// (0x000b7db0) scroll_pane_cp05_ParamLimits

0xade7,	// (0x000b7db0) scroll_pane_cp05

0x1304,	// (0x000ae2cd) mce_header_field_pane_ParamLimits

0x1304,	// (0x000ae2cd) mce_header_field_pane

0x131d,	// (0x000ae2e6) mce_header_field_pane_2_ParamLimits

0x131d,	// (0x000ae2e6) mce_header_field_pane_2

0x1333,	// (0x000ae2fc) mce_header_field_pane_3

0x133b,	// (0x000ae304) list_single_mce_message_pane_ParamLimits

0x133b,	// (0x000ae304) list_single_mce_message_pane

0x1357,	// (0x000ae320) list_single_mce_smart_pane_ParamLimits

0x1357,	// (0x000ae320) list_single_mce_smart_pane

0xadf3,	// (0x000b7dbc) input_focus_pane_cp03

0xadfc,	// (0x000b7dc5) list_header_data_pane

0x137e,	// (0x000ae347) mce_header_field_pane_t1

0x138e,	// (0x000ae357) list_single_mce_header_pane_ParamLimits

0x138e,	// (0x000ae357) list_single_mce_header_pane

0xae04,	// (0x000b7dcd) list_single_mce_header_pane_t1

0xae13,	// (0x000b7ddc) list_single_mce_message_pane_g1

0xae1b,	// (0x000b7de4) list_single_mce_message_pane_t1

0x13c8,	// (0x000ae391) bg_cale_heading_pane_cp01_ParamLimits

0x13c8,	// (0x000ae391) bg_cale_heading_pane_cp01

0xae29,	// (0x000b7df2) bg_cale_pane_cp02_ParamLimits

0xae29,	// (0x000b7df2) bg_cale_pane_cp02

0x141a,	// (0x000ae3e3) cale_month_corner_pane

0x1439,	// (0x000ae402) cale_month_day_heading_pane_ParamLimits

0x1439,	// (0x000ae402) cale_month_day_heading_pane

0x14a3,	// (0x000ae46c) cale_month_pane_g1_ParamLimits

0x14a3,	// (0x000ae46c) cale_month_pane_g1

0x14ea,	// (0x000ae4b3) cale_month_pane_g2_ParamLimits

0x14ea,	// (0x000ae4b3) cale_month_pane_g2

0x1526,	// (0x000ae4ef) cale_month_pane_g3_ParamLimits

0x1526,	// (0x000ae4ef) cale_month_pane_g3

0x157a,	// (0x000ae543) cale_month_pane_g4_ParamLimits

0x157a,	// (0x000ae543) cale_month_pane_g4

0x15ce,	// (0x000ae597) cale_month_pane_g5_ParamLimits

0x15ce,	// (0x000ae597) cale_month_pane_g5

0x162a,	// (0x000ae5f3) cale_month_pane_g6_ParamLimits

0x162a,	// (0x000ae5f3) cale_month_pane_g6

0x1692,	// (0x000ae65b) cale_month_pane_g7_ParamLimits

0x1692,	// (0x000ae65b) cale_month_pane_g7

0x16fe,	// (0x000ae6c7) cale_month_pane_g8_ParamLimits

0x16fe,	// (0x000ae6c7) cale_month_pane_g8

0x176a,	// (0x000ae733) cale_month_pane_g9_ParamLimits

0x176a,	// (0x000ae733) cale_month_pane_g9

0x17ce,	// (0x000ae797) cale_month_pane_g10_ParamLimits

0x17ce,	// (0x000ae797) cale_month_pane_g10

0x1820,	// (0x000ae7e9) cale_month_pane_g11_ParamLimits

0x1820,	// (0x000ae7e9) cale_month_pane_g11

0x1872,	// (0x000ae83b) cale_month_pane_g12_ParamLimits

0x1872,	// (0x000ae83b) cale_month_pane_g12

0x18ca,	// (0x000ae893) cale_month_pane_g13_ParamLimits

0x18ca,	// (0x000ae893) cale_month_pane_g13

0x000c,

0xf287,	// (0x000bc250) cale_month_pane_g_ParamLimits

0xf287,	// (0x000bc250) cale_month_pane_g

0x1922,	// (0x000ae8eb) cale_month_week_pane

0x1946,	// (0x000ae90f) grid_cale_month_pane_ParamLimits

0x1946,	// (0x000ae90f) grid_cale_month_pane

0x19a7,	// (0x000ae970) cale_month_day_heading_pane_t1

0x1a2d,	// (0x000ae9f6) cale_month_day_heading_pane_t2

0x1aa6,	// (0x000aea6f) cale_month_day_heading_pane_t3

0x1b1f,	// (0x000aeae8) cale_month_day_heading_pane_t4

0x1ba0,	// (0x000aeb69) cale_month_day_heading_pane_t5

0x1c29,	// (0x000aebf2) cale_month_day_heading_pane_t6

0x1cba,	// (0x000aec83) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x000bc26b) cale_month_day_heading_pane_t

0xaab0,	// (0x000b7a79) bg_cale_side_pane_cp01

0x1d4b,	// (0x000aed14) cale_month_week_pane_t1

0x1d64,	// (0x000aed2d) cale_month_week_pane_t2

0x1d7d,	// (0x000aed46) cale_month_week_pane_t3

0x1d96,	// (0x000aed5f) cale_month_week_pane_t4

0x1daf,	// (0x000aed78) cale_month_week_pane_t5

0x1dc8,	// (0x000aed91) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x000bc27a) cale_month_week_pane_t

0x1ded,	// (0x000aedb6) cell_cale_month_pane_ParamLimits

0x1ded,	// (0x000aedb6) cell_cale_month_pane

0x9e28,	// (0x000b6df1) cell_cale_month_pane_g1

0x1f61,	// (0x000aef2a) cell_cale_month_pane_t1_ParamLimits

0x1f61,	// (0x000aef2a) cell_cale_month_pane_t1

0xaabe,	// (0x000b7a87) grid_highlight_pane_cp08

0xa9af,	// (0x000b7978) main_smil_g1

0x1f8d,	// (0x000aef56) smil_status_pane

0xae68,	// (0x000b7e31) smil_text_pane

0xc85c,	// (0x000b9825) bg_popup_call3_rect_pane_g8

0xc864,	// (0x000b982d) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x000bc533) bg_popup_call3_rect_pane_g

0xcac2,	// (0x000b9a8b) smil_status_volume_pane_g1

0xae72,	// (0x000b7e3b) smil_status_pane_t1

0x9fff,	// (0x000b6fc8) volume_smil_pane

0xae89,	// (0x000b7e52) list_smil_text_pane

0x1fa2,	// (0x000aef6b) scroll_pane_cp011

0x1fad,	// (0x000aef76) smil_text_list_pane_t1_ParamLimits

0x1fad,	// (0x000aef76) smil_text_list_pane_t1

0x9e34,	// (0x000b6dfd) aid_volume_smil_ParamLimits

0x9e34,	// (0x000b6dfd) aid_volume_smil

0xa9af,	// (0x000b7978) smil_volume_pane_g1

0xa9af,	// (0x000b7978) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x000bc29a) smil_volume_pane_g

0x0449,	// (0x000ad412) listscroll_cale_day_pane

0xae93,	// (0x000b7e5c) bg_cale_pane

0xaeab,	// (0x000b7e74) list_cale_pane

0xaece,	// (0x000b7e97) scroll_pane_cp09

0xaedf,	// (0x000b7ea8) cale_bg_pane_g1

0xaee7,	// (0x000b7eb0) cale_bg_pane_g2

0xaeef,	// (0x000b7eb8) cale_bg_pane_g3

0xaef7,	// (0x000b7ec0) cale_bg_pane_g4

0xaeff,	// (0x000b7ec8) cale_bg_pane_g5

0xaf07,	// (0x000b7ed0) cale_bg_pane_g6

0xaf0f,	// (0x000b7ed8) cale_bg_pane_g7

0xaf17,	// (0x000b7ee0) cale_bg_pane_g8

0xaf1f,	// (0x000b7ee8) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x000bc29f) cale_bg_pane_g

0x2000,	// (0x000aefc9) list_cale_time_pane_ParamLimits

0x2000,	// (0x000aefc9) list_cale_time_pane

0xaf27,	// (0x000b7ef0) list_cale_time_pane_g1_ParamLimits

0xaf27,	// (0x000b7ef0) list_cale_time_pane_g1

0xaf33,	// (0x000b7efc) list_cale_time_pane_g2_ParamLimits

0xaf33,	// (0x000b7efc) list_cale_time_pane_g2

0x201a,	// (0x000aefe3) list_cale_time_pane_g3_ParamLimits

0x201a,	// (0x000aefe3) list_cale_time_pane_g3

0x2028,	// (0x000aeff1) list_cale_time_pane_g4_ParamLimits

0x2028,	// (0x000aeff1) list_cale_time_pane_g4

0x2036,	// (0x000aefff) list_cale_time_pane_g5_ParamLimits

0x2036,	// (0x000aefff) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x000bc2b2) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x000bc2b2) list_cale_time_pane_g

0xaf4d,	// (0x000b7f16) list_cale_time_pane_t1_ParamLimits

0xaf4d,	// (0x000b7f16) list_cale_time_pane_t1

0xaf75,	// (0x000b7f3e) list_cale_time_pane_t2_ParamLimits

0xaf75,	// (0x000b7f3e) list_cale_time_pane_t2

0x23e7,	// (0x000af3b0) aid_blid_cardinal_pane

0x2429,	// (0x000af3f2) compass_pane_t4

0xaf9d,	// (0x000b7f66) list_cale_time_pane_t4_ParamLimits

0xaf9d,	// (0x000b7f66) list_cale_time_pane_t4

0x2437,	// (0x000af400) compass_pane_t5

0x2447,	// (0x000af410) compass_pane_t6

0x2455,	// (0x000af41e) compass_pane_t7

0xb421,	// (0x000b83ea) navi_pane_cc_t1

0xb600,	// (0x000b85c9) aid_phob_thumbnail_center_pane

0x2ab1,	// (0x000afa7a) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x000bc2bf) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x000bc2bf) list_cale_time_pane_t

0x96fd,	// (0x000b66c6) bg_popup_window_pane_cp02_ParamLimits

0x96fd,	// (0x000b66c6) bg_popup_window_pane_cp02

0xafc5,	// (0x000b7f8e) heading_pane_cp01_ParamLimits

0xafc5,	// (0x000b7f8e) heading_pane_cp01

0xafd1,	// (0x000b7f9a) loc_req_pane_ParamLimits

0xafd1,	// (0x000b7f9a) loc_req_pane

0xafe1,	// (0x000b7faa) loc_type_pane_ParamLimits

0xafe1,	// (0x000b7faa) loc_type_pane

0xaff3,	// (0x000b7fbc) loc_type_pane_t1_ParamLimits

0xaff3,	// (0x000b7fbc) loc_type_pane_t1

0xb005,	// (0x000b7fce) loc_type_pane_t2_ParamLimits

0xb005,	// (0x000b7fce) loc_type_pane_t2

0xb017,	// (0x000b7fe0) loc_type_pane_t3_ParamLimits

0xb017,	// (0x000b7fe0) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x000bc2c6) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x000bc2c6) loc_type_pane_t

0xb029,	// (0x000b7ff2) list_loc_req_pane

0xb033,	// (0x000b7ffc) scroll_pane_cp012

0x2044,	// (0x000af00d) list_single_loc_request_popup_menu_pane_ParamLimits

0x2044,	// (0x000af00d) list_single_loc_request_popup_menu_pane

0xb03e,	// (0x000b8007) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb03e,	// (0x000b8007) list_single_loc_request_popup_menu_pane_g1

0xb04a,	// (0x000b8013) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb04a,	// (0x000b8013) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x000bc2cd) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x000bc2cd) list_single_loc_request_popup_menu_pane_g

0xb056,	// (0x000b801f) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb056,	// (0x000b801f) list_single_loc_request_popup_menu_pane_t1

0x9d01,	// (0x000b6cca) bg_popup_window_pane_cp03_ParamLimits

0x9d01,	// (0x000b6cca) bg_popup_window_pane_cp03

0xb06c,	// (0x000b8035) heading_loc_req_pane_ParamLimits

0xb06c,	// (0x000b8035) heading_loc_req_pane

0x2051,	// (0x000af01a) popup_dyc_status_message_window_g1_ParamLimits

0x2051,	// (0x000af01a) popup_dyc_status_message_window_g1

0x2065,	// (0x000af02e) popup_dyc_status_message_window_t1_ParamLimits

0x2065,	// (0x000af02e) popup_dyc_status_message_window_t1

0x207a,	// (0x000af043) popup_dyc_status_message_window_t2_ParamLimits

0x207a,	// (0x000af043) popup_dyc_status_message_window_t2

0x208f,	// (0x000af058) popup_dyc_status_message_window_t3_ParamLimits

0x208f,	// (0x000af058) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x000bc2d2) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x000bc2d2) popup_dyc_status_message_window_t

0x9aa6,	// (0x000b6a6f) bg_heading_pane_cp01

0xb078,	// (0x000b8041) heading_loc_req_pane_g1

0xb080,	// (0x000b8049) heading_loc_req_pane_g2

0xb088,	// (0x000b8051) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x000bc2d9) heading_loc_req_pane_g

0xb090,	// (0x000b8059) heading_loc_req_pane_t1

0xb0a0,	// (0x000b8069) bg_popup_sub_pane_cp01_ParamLimits

0xb0a0,	// (0x000b8069) bg_popup_sub_pane_cp01

0xb0ae,	// (0x000b8077) popup_cale_events_window_g1_ParamLimits

0xb0ae,	// (0x000b8077) popup_cale_events_window_g1

0xb0ce,	// (0x000b8097) popup_cale_events_window_g2_ParamLimits

0xb0ce,	// (0x000b8097) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x000bc30d) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x000bc30d) popup_cale_events_window_g

0xb0ee,	// (0x000b80b7) popup_cale_events_window_t1_ParamLimits

0xb0ee,	// (0x000b80b7) popup_cale_events_window_t1

0xb100,	// (0x000b80c9) popup_cale_events_window_t2_ParamLimits

0xb100,	// (0x000b80c9) popup_cale_events_window_t2

0xb13e,	// (0x000b8107) popup_cale_events_window_t3_ParamLimits

0xb13e,	// (0x000b8107) popup_cale_events_window_t3

0xb178,	// (0x000b8141) popup_cale_events_window_t4_ParamLimits

0xb178,	// (0x000b8141) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x000bc312) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x000bc312) popup_cale_events_window_t

0x2192,	// (0x000af15b) call_type_pane

0x21a2,	// (0x000af16b) popup_call_status_window_g1

0x21b6,	// (0x000af17f) popup_call_status_window_g2

0x21ca,	// (0x000af193) popup_call_status_window_g3

0x0002,

0xf352,	// (0x000bc31b) popup_call_status_window_g

0xb1ae,	// (0x000b8177) call_type_pane_g1

0xb1b7,	// (0x000b8180) call_type_pane_g2

0x0001,

0xf359,	// (0x000bc322) call_type_pane_g

0x9aa6,	// (0x000b6a6f) bg_popup_sub_pane_cp02

0xb1c0,	// (0x000b8189) listscroll_popup_wml_pane

0xb1c8,	// (0x000b8191) list_wml_pane

0xb1d2,	// (0x000b819b) scroll_pane_cp013

0xb1dd,	// (0x000b81a6) list_single_graphic_popup_wml_pane_ParamLimits

0xb1dd,	// (0x000b81a6) list_single_graphic_popup_wml_pane

0xa9af,	// (0x000b7978) list_single_graphic_popup_wml_pane_g1

0xb1f1,	// (0x000b81ba) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x000bc327) list_single_graphic_popup_wml_pane_g

0xb1f9,	// (0x000b81c2) list_single_graphic_popup_wml_pane_t1

0xb20f,	// (0x000b81d8) aid_call_pane

0x9cf9,	// (0x000b6cc2) popup_clock_analogue_window_g1

0x9cf9,	// (0x000b6cc2) popup_clock_analogue_window_g2

0x9e56,	// (0x000b6e1f) popup_clock_analogue_window_g3

0x9e56,	// (0x000b6e1f) popup_clock_analogue_window_g4

0xa9af,	// (0x000b7978) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x000bc32c) popup_clock_analogue_window_g

0x9e5e,	// (0x000b6e27) popup_clock_analogue_window_t1

0x9e6c,	// (0x000b6e35) clock_digital_number_pane_ParamLimits

0x9e6c,	// (0x000b6e35) clock_digital_number_pane

0x9e78,	// (0x000b6e41) clock_digital_number_pane_cp02_ParamLimits

0x9e78,	// (0x000b6e41) clock_digital_number_pane_cp02

0x9e84,	// (0x000b6e4d) clock_digital_number_pane_cp03_ParamLimits

0x9e84,	// (0x000b6e4d) clock_digital_number_pane_cp03

0x9e90,	// (0x000b6e59) clock_digital_number_pane_cp04_ParamLimits

0x9e90,	// (0x000b6e59) clock_digital_number_pane_cp04

0x9e9c,	// (0x000b6e65) clock_digital_separator_pane_ParamLimits

0x9e9c,	// (0x000b6e65) clock_digital_separator_pane

0x9ea8,	// (0x000b6e71) popup_clock_digital_window_t1

0xa9af,	// (0x000b7978) clock_digital_number_pane_g1

0xa9af,	// (0x000b7978) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x000bc29a) clock_digital_number_pane_g

0xa9af,	// (0x000b7978) clock_digital_separator_pane_g1

0xa9af,	// (0x000b7978) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x000bc29a) clock_digital_separator_pane_g

0x9aa6,	// (0x000b6a6f) bg_popup_window_pane_cp04

0xb217,	// (0x000b81e0) heading_pane_cp03

0xb21f,	// (0x000b81e8) listscroll_popup_gms_pane

0xb227,	// (0x000b81f0) grid_large_graphic_popup_pane

0xb231,	// (0x000b81fa) listscroll_popup_gms_pane_g1

0xb239,	// (0x000b8202) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x000bc337) listscroll_popup_gms_pane_g

0xaccd,	// (0x000b7c96) scroll_pane_cp014

0x21da,	// (0x000af1a3) cell_large_graphic_popup_pane_ParamLimits

0x21da,	// (0x000af1a3) cell_large_graphic_popup_pane

0x21f2,	// (0x000af1bb) cell_large_graphic_popup_pane_g1_ParamLimits

0x21f2,	// (0x000af1bb) cell_large_graphic_popup_pane_g1

0xb241,	// (0x000b820a) cell_large_graphic_popup_pane_g2_ParamLimits

0xb241,	// (0x000b820a) cell_large_graphic_popup_pane_g2

0xb24d,	// (0x000b8216) cell_large_graphic_popup_pane_g3_ParamLimits

0xb24d,	// (0x000b8216) cell_large_graphic_popup_pane_g3

0xb25a,	// (0x000b8223) cell_large_graphic_popup_pane_g4_ParamLimits

0xb25a,	// (0x000b8223) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x000bc33c) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x000bc33c) cell_large_graphic_popup_pane_g

0xb26a,	// (0x000b8233) grid_highlight_pane_cp010

0xa9af,	// (0x000b7978) bg_popup_call_pane_g1

0xb274,	// (0x000b823d) list_single_graphic_popup_conf_pane_ParamLimits

0xb274,	// (0x000b823d) list_single_graphic_popup_conf_pane

0xb286,	// (0x000b824f) list_highlight_pane_cp01

0xb28f,	// (0x000b8258) list_single_graphic_popup_conf_pane_g1

0xb297,	// (0x000b8260) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x000bc345) list_single_graphic_popup_conf_pane_g

0xb29f,	// (0x000b8268) list_single_graphic_popup_conf_pane_t1

0xb2ad,	// (0x000b8276) linegrid_cams_pane_g1

0x21fe,	// (0x000af1c7) linegrid_cams_pane_g2

0xaaf1,	// (0x000b7aba) linegrid_cams_pane_g3

0xb2b6,	// (0x000b827f) linegrid_cams_pane_g4

0x2207,	// (0x000af1d0) linegrid_cams_pane_g5

0x2210,	// (0x000af1d9) linegrid_cams_pane_g6

0xaafa,	// (0x000b7ac3) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x000bc34a) linegrid_cams_pane_g

0xb2bf,	// (0x000b8288) popup_clock_analogue_window

0xb2bf,	// (0x000b8288) popup_clock_digital_window

0x9aa6,	// (0x000b6a6f) popup_phob_thumbnail_window

0xa9af,	// (0x000b7978) call_video_uplink_pane_g1

0xb2c8,	// (0x000b8291) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x000bc359) call_video_uplink_pane_g

0xb2d0,	// (0x000b8299) video_uplink_pane

0xb2d8,	// (0x000b82a1) mce_image_pane_g1

0x221b,	// (0x000af1e4) mce_image_pane_g2

0x2225,	// (0x000af1ee) mce_image_pane_g3

0x222f,	// (0x000af1f8) mce_image_pane_g4

0x2237,	// (0x000af200) mce_image_pane_g5

0x0004,

0xf395,	// (0x000bc35e) mce_image_pane_g

0xb2e2,	// (0x000b82ab) control_top_pane_stacon_cp01_ParamLimits

0xb2e2,	// (0x000b82ab) control_top_pane_stacon_cp01

0xb2f6,	// (0x000b82bf) uni_indicator_pane_stacon_cp01_ParamLimits

0xb2f6,	// (0x000b82bf) uni_indicator_pane_stacon_cp01

0xb307,	// (0x000b82d0) bg_popup_sub_pane_cp03

0x223f,	// (0x000af208) chi_dic_find_pane

0x2247,	// (0x000af210) listscroll_chi_dic_pane

0x2250,	// (0x000af219) main_pane_chidic_g1

0x2263,	// (0x000af22c) chi_dic_find_pane_t1

0xb311,	// (0x000b82da) find_chidic_pane

0xb31a,	// (0x000b82e3) chi_dic_list_pane_ParamLimits

0xb31a,	// (0x000b82e3) chi_dic_list_pane

0xb32b,	// (0x000b82f4) scroll_pane_cp020

0x2271,	// (0x000af23a) find_chidic_pane_t1

0x9aa6,	// (0x000b6a6f) input_focus_pane_cp06

0x2280,	// (0x000af249) list_chi_dic_pane_ParamLimits

0x2280,	// (0x000af249) list_chi_dic_pane

0x2292,	// (0x000af25b) list_chi_dic_pane_t1_ParamLimits

0x2292,	// (0x000af25b) list_chi_dic_pane_t1

0x9aa6,	// (0x000b6a6f) list_highlight_pane_cp020

0xb333,	// (0x000b82fc) bg_cale_heading_pane_g1

0x22a5,	// (0x000af26e) bg_cale_heading_pane_g2

0x22ad,	// (0x000af276) bg_cale_heading_pane_g3

0x22b5,	// (0x000af27e) bg_cale_heading_pane_g4

0x22bf,	// (0x000af288) bg_cale_heading_pane_g5

0x22c9,	// (0x000af292) bg_cale_heading_pane_g6

0x22d1,	// (0x000af29a) bg_cale_heading_pane_g7

0x22d9,	// (0x000af2a2) bg_cale_heading_pane_g8

0x22e3,	// (0x000af2ac) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x000bc369) bg_cale_heading_pane_g

0xb333,	// (0x000b82fc) bg_cale_side_pane_g1

0x22ed,	// (0x000af2b6) bg_cale_side_pane_g2

0x22f7,	// (0x000af2c0) bg_cale_side_pane_g3

0x2301,	// (0x000af2ca) bg_cale_side_pane_g4

0x230b,	// (0x000af2d4) bg_cale_side_pane_g5

0x2315,	// (0x000af2de) bg_cale_side_pane_g6

0x231f,	// (0x000af2e8) bg_cale_side_pane_g7

0x2329,	// (0x000af2f2) bg_cale_side_pane_g8

0x2331,	// (0x000af2fa) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x000bc37c) bg_cale_side_pane_g

0x2339,	// (0x000af302) popup_call_status_window_ParamLimits

0x2339,	// (0x000af302) popup_call_status_window

0xb33b,	// (0x000b8304) stacon_top_pane

0xb343,	// (0x000b830c) status_pane_ParamLimits

0xb343,	// (0x000b830c) status_pane

0xb358,	// (0x000b8321) status_small_pane

0xb360,	// (0x000b8329) control_pane

0x9aa6,	// (0x000b6a6f) stacon_bottom_pane

0xb368,	// (0x000b8331) list_single_mce_smart_pane_t1_ParamLimits

0xb368,	// (0x000b8331) list_single_mce_smart_pane_t1

0xb37b,	// (0x000b8344) list_single_mce_smart_pane_t2_ParamLimits

0xb37b,	// (0x000b8344) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x000bc38f) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x000bc38f) list_single_mce_smart_pane_t

0x2386,	// (0x000af34f) compass_pane

0x2391,	// (0x000af35a) main_location2_pane_t1

0x23a7,	// (0x000af370) main_location2_pane_t2

0x23bd,	// (0x000af386) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x000bc394) main_location2_pane_t

0xb39a,	// (0x000b8363) compass_pane_g1_ParamLimits

0xb39a,	// (0x000b8363) compass_pane_g1

0x240b,	// (0x000af3d4) compass_pane_t1

0x241a,	// (0x000af3e3) compass_pane_t2

0x0005,

0xf3d4,	// (0x000bc39d) compass_pane_t

0x2465,	// (0x000af42e) text_secondary_cp61

0xb418,	// (0x000b83e1) navi_pane_cams_g5

0xb494,	// (0x000b845d) navi_pane_im_t1

0xb4a2,	// (0x000b846b) navi_pane_mp_g1_ParamLimits

0xb4a2,	// (0x000b846b) navi_pane_mp_g1

0xb4b6,	// (0x000b847f) navi_pane_mp_g2_ParamLimits

0xb4b6,	// (0x000b847f) navi_pane_mp_g2

0xb4c2,	// (0x000b848b) navi_pane_mp_g3_ParamLimits

0xb4c2,	// (0x000b848b) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x000bc3b1) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x000bc3b1) navi_pane_mp_g

0xb4ce,	// (0x000b8497) navi_pane_mp_t1

0xb4dc,	// (0x000b84a5) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x000bc3b8) navi_pane_mp_t

0xb549,	// (0x000b8512) navi_pane_vt_g1

0xb4ce,	// (0x000b8497) navi_pane_vt_t1

0xb551,	// (0x000b851a) navi_slider_pane

0xab0b,	// (0x000b7ad4) zooming_pane

0xb561,	// (0x000b852a) navi_slider_pane_g1

0x9ec5,	// (0x000b6e8e) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x000bc3bf) navi_slider_pane_g

0xb585,	// (0x000b854e) aid_levels_zoom

0xb58d,	// (0x000b8556) zooming_pane_g1

0xb595,	// (0x000b855e) zooming_pane_g2

0xb595,	// (0x000b855e) zooming_pane_g3

0x0002,

0xf405,	// (0x000bc3ce) zooming_pane_g

0xb59d,	// (0x000b8566) level_10_zoom

0xb5a6,	// (0x000b856f) level_11_zoom

0xb5af,	// (0x000b8578) level_1_zoom

0xb5b8,	// (0x000b8581) level_2_zoom

0xb5c1,	// (0x000b858a) level_3_zoom

0xb5ca,	// (0x000b8593) level_4_zoom

0xb5d3,	// (0x000b859c) level_5_zoom

0xb5dc,	// (0x000b85a5) level_6_zoom

0xb5e5,	// (0x000b85ae) level_7_zoom

0xb5ee,	// (0x000b85b7) level_8_zoom

0xb5f7,	// (0x000b85c0) level_9_zoom

0xb608,	// (0x000b85d1) popup_phob_thumbnail_window_g1

0xb610,	// (0x000b85d9) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x000bc3d5) popup_phob_thumbnail_window_g

0xc9c2,	// (0x000b998b) level_1_location

0xc9ca,	// (0x000b9993) level_2_location

0xc9d2,	// (0x000b999b) level_3_location

0xc9da,	// (0x000b99a3) level_4_location

0xab0b,	// (0x000b7ad4) level_5_location

0x24b6,	// (0x000af47f) mce_icon_pane_g1

0x24c0,	// (0x000af489) mce_icon_pane_g2

0x0001,

0xf411,	// (0x000bc3da) mce_icon_pane_g

0x24c8,	// (0x000af491) main_mup_pane_g1_ParamLimits

0x24c8,	// (0x000af491) main_mup_pane_g1

0x24de,	// (0x000af4a7) main_mup_pane_g2_ParamLimits

0x24de,	// (0x000af4a7) main_mup_pane_g2

0x24f6,	// (0x000af4bf) main_mup_pane_g3_ParamLimits

0x24f6,	// (0x000af4bf) main_mup_pane_g3

0x250e,	// (0x000af4d7) main_mup_pane_g4_ParamLimits

0x250e,	// (0x000af4d7) main_mup_pane_g4

0x2520,	// (0x000af4e9) main_mup_pane_g5_ParamLimits

0x2520,	// (0x000af4e9) main_mup_pane_g5

0x253c,	// (0x000af505) main_mup_pane_g6_ParamLimits

0x253c,	// (0x000af505) main_mup_pane_g6

0x2556,	// (0x000af51f) main_mup_pane_g7_ParamLimits

0x2556,	// (0x000af51f) main_mup_pane_g7

0x2574,	// (0x000af53d) main_mup_pane_g8_ParamLimits

0x2574,	// (0x000af53d) main_mup_pane_g8

0x2592,	// (0x000af55b) main_mup_pane_g9_ParamLimits

0x2592,	// (0x000af55b) main_mup_pane_g9

0x25ae,	// (0x000af577) main_mup_pane_g10_ParamLimits

0x25ae,	// (0x000af577) main_mup_pane_g10

0x25cc,	// (0x000af595) main_mup_pane_g11_ParamLimits

0x25cc,	// (0x000af595) main_mup_pane_g11

0x25e6,	// (0x000af5af) main_mup_pane_g12_ParamLimits

0x25e6,	// (0x000af5af) main_mup_pane_g12

0x25fc,	// (0x000af5c5) main_mup_pane_g13_ParamLimits

0x25fc,	// (0x000af5c5) main_mup_pane_g13

0x000c,

0xf416,	// (0x000bc3df) main_mup_pane_g_ParamLimits

0xf416,	// (0x000bc3df) main_mup_pane_g

0x2610,	// (0x000af5d9) main_mup_pane_t1_ParamLimits

0x2610,	// (0x000af5d9) main_mup_pane_t1

0x262c,	// (0x000af5f5) main_mup_pane_t2_ParamLimits

0x262c,	// (0x000af5f5) main_mup_pane_t2

0x2644,	// (0x000af60d) main_mup_pane_t3_ParamLimits

0x2644,	// (0x000af60d) main_mup_pane_t3

0x265c,	// (0x000af625) main_mup_pane_t4_ParamLimits

0x265c,	// (0x000af625) main_mup_pane_t4

0x267a,	// (0x000af643) main_mup_pane_t5_ParamLimits

0x267a,	// (0x000af643) main_mup_pane_t5

0x268f,	// (0x000af658) main_mup_pane_t6_ParamLimits

0x268f,	// (0x000af658) main_mup_pane_t6

0x0005,

0xf431,	// (0x000bc3fa) main_mup_pane_t_ParamLimits

0xf431,	// (0x000bc3fa) main_mup_pane_t

0x26a1,	// (0x000af66a) mup_progress_pane_ParamLimits

0x26a1,	// (0x000af66a) mup_progress_pane

0x26ad,	// (0x000af676) mup_visualizer_pane_ParamLimits

0x26ad,	// (0x000af676) mup_visualizer_pane

0x26e1,	// (0x000af6aa) mup_volume_pane_ParamLimits

0x26e1,	// (0x000af6aa) mup_volume_pane

0xb618,	// (0x000b85e1) mup_visualizer_pane_g1_ParamLimits

0xb618,	// (0x000b85e1) mup_visualizer_pane_g1

0xb618,	// (0x000b85e1) mup_visualizer_pane_g2_ParamLimits

0xb618,	// (0x000b85e1) mup_visualizer_pane_g2

0xb39a,	// (0x000b8363) mup_visualizer_pane_g3_ParamLimits

0xb39a,	// (0x000b8363) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x000bc407) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x000bc407) mup_visualizer_pane_g

0xa9af,	// (0x000b7978) mup_volume_pane_g1

0xb62e,	// (0x000b85f7) mup_volume_pane_g2

0x0001,

0xf445,	// (0x000bc40e) mup_volume_pane_g

0xa9af,	// (0x000b7978) mup_progress_pane_g1

0xb637,	// (0x000b8600) mup_progress_pane_g2

0xb640,	// (0x000b8609) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x000bc413) mup_progress_pane_g

0x9aa6,	// (0x000b6a6f) bg_popup_window_pane_cp05

0xb649,	// (0x000b8612) heading_pane_cp02_ParamLimits

0xb649,	// (0x000b8612) heading_pane_cp02

0xb665,	// (0x000b862e) list_popup_blid_pane

0xb66d,	// (0x000b8636) list_blid_sat_info_pane_ParamLimits

0xb66d,	// (0x000b8636) list_blid_sat_info_pane

0xb680,	// (0x000b8649) list_blid_sat_info_pane_g1

0xb688,	// (0x000b8651) list_blid_sat_info_pane_t1

0x280b,	// (0x000af7d4) mup_equalizer_pane_ParamLimits

0x280b,	// (0x000af7d4) mup_equalizer_pane

0x282c,	// (0x000af7f5) mup_equalizer_pane_cp1_ParamLimits

0x282c,	// (0x000af7f5) mup_equalizer_pane_cp1

0x284d,	// (0x000af816) mup_equalizer_pane_cp2_ParamLimits

0x284d,	// (0x000af816) mup_equalizer_pane_cp2

0x2872,	// (0x000af83b) mup_equalizer_pane_cp3_ParamLimits

0x2872,	// (0x000af83b) mup_equalizer_pane_cp3

0x289b,	// (0x000af864) mup_equalizer_pane_cp4_ParamLimits

0x289b,	// (0x000af864) mup_equalizer_pane_cp4

0x28c4,	// (0x000af88d) mup_equalizer_pane_cp5

0x28dc,	// (0x000af8a5) mup_equalizer_pane_cp6

0x28f4,	// (0x000af8bd) mup_equalizer_pane_cp7

0xc8dc,	// (0x000b98a5) bg_popup_call_poc_act_pane_g9

0xc8e4,	// (0x000b98ad) bg_popup_call_poc_act_pane_g10

0xc8ec,	// (0x000b98b5) bg_popup_call_poc_act_pane_g11

0x000a,

0x9d01,	// (0x000b6cca) mup_scale_pane

0xa9af,	// (0x000b7978) mup_scale_pane_g1

0xb696,	// (0x000b865f) mup_scale_pane_g2

0x0006,

0xf466,	// (0x000bc42f) mup_scale_pane_g

0xb6ba,	// (0x000b8683) msg_data_pane

0xb6c2,	// (0x000b868b) scroll_pane_cp017

0x291e,	// (0x000af8e7) bg_list_pane_cp04_ParamLimits

0x291e,	// (0x000af8e7) bg_list_pane_cp04

0xb6ca,	// (0x000b8693) msg_data_pane_g1

0x293e,	// (0x000af907) msg_data_pane_g2

0x2948,	// (0x000af911) msg_data_pane_g3

0x2952,	// (0x000af91b) msg_data_pane_g4

0x295a,	// (0x000af923) msg_data_pane_g5

0x2962,	// (0x000af92b) msg_data_pane_g6

0x296a,	// (0x000af933) msg_data_pane_g7

0x0006,

0xf475,	// (0x000bc43e) msg_data_pane_g

0x2972,	// (0x000af93b) msg_text_pane_ParamLimits

0x2972,	// (0x000af93b) msg_text_pane

0x29a7,	// (0x000af970) qrid_highlight_pane_cp011_ParamLimits

0x29a7,	// (0x000af970) qrid_highlight_pane_cp011

0x9aa6,	// (0x000b6a6f) msg_body_pane

0x9aa6,	// (0x000b6a6f) msg_header_pane

0xb6db,	// (0x000b86a4) input_focus_pane_cp07

0x9edf,	// (0x000b6ea8) msg_header_pane_t1_ParamLimits

0x9edf,	// (0x000b6ea8) msg_header_pane_t1

0x9ef1,	// (0x000b6eba) msg_header_pane_t2_ParamLimits

0x9ef1,	// (0x000b6eba) msg_header_pane_t2

0x0001,

0xf489,	// (0x000bc452) msg_header_pane_t_ParamLimits

0xf489,	// (0x000bc452) msg_header_pane_t

0xb6f0,	// (0x000b86b9) msg_body_pane_g1

0x9f03,	// (0x000b6ecc) msg_body_pane_t1_ParamLimits

0x9f03,	// (0x000b6ecc) msg_body_pane_t1

0x9f34,	// (0x000b6efd) msg_body_pane_t2_ParamLimits

0x9f34,	// (0x000b6efd) msg_body_pane_t2

0x9f46,	// (0x000b6f0f) msg_body_pane_t3_ParamLimits

0x9f46,	// (0x000b6f0f) msg_body_pane_t3

0x0002,

0xf48e,	// (0x000bc457) msg_body_pane_t_ParamLimits

0xf48e,	// (0x000bc457) msg_body_pane_t

0x2a05,	// (0x000af9ce) main_viewer_pane_g1_ParamLimits

0x2a05,	// (0x000af9ce) main_viewer_pane_g1

0x2a13,	// (0x000af9dc) main_viewer_pane_g2_ParamLimits

0x2a13,	// (0x000af9dc) main_viewer_pane_g2

0x2a21,	// (0x000af9ea) main_viewer_pane_g3_ParamLimits

0x2a21,	// (0x000af9ea) main_viewer_pane_g3

0x2a30,	// (0x000af9f9) main_viewer_pane_g4_ParamLimits

0x2a30,	// (0x000af9f9) main_viewer_pane_g4

0x9f70,	// (0x000b6f39) main_viewer_pane_g5_ParamLimits

0x9f70,	// (0x000b6f39) main_viewer_pane_g5

0x9f70,	// (0x000b6f39) main_viewer_pane_g7_ParamLimits

0x9f70,	// (0x000b6f39) main_viewer_pane_g7

0x9f82,	// (0x000b6f4b) main_viewer_pane_g8_ParamLimits

0x9f82,	// (0x000b6f4b) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x000bc467) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x000bc467) main_viewer_pane_g

0xb6f8,	// (0x000b86c1) viewer_content_pane_ParamLimits

0xb6f8,	// (0x000b86c1) viewer_content_pane

0x2a6e,	// (0x000afa37) main_postcard_pane_g1_ParamLimits

0x2a6e,	// (0x000afa37) main_postcard_pane_g1

0x2a84,	// (0x000afa4d) main_postcard_pane_g2_ParamLimits

0x2a84,	// (0x000afa4d) main_postcard_pane_g2

0x2a9a,	// (0x000afa63) main_postcard_pane_g3_ParamLimits

0x2a9a,	// (0x000afa63) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x000bc478) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x000bc478) main_postcard_pane_g

0x2ab1,	// (0x000afa7a) main_postcard_pane_g4

0xcad5,	// (0x000b9a9e) smil_status_volume_pane_g2

0x2af4,	// (0x000afabd) postcard_pane_ParamLimits

0x2af4,	// (0x000afabd) postcard_pane

0xb706,	// (0x000b86cf) postcard_pane_g1_ParamLimits

0xb706,	// (0x000b86cf) postcard_pane_g1

0x2b44,	// (0x000afb0d) postcard_pane_g2_ParamLimits

0x2b44,	// (0x000afb0d) postcard_pane_g2

0x2b50,	// (0x000afb19) postcard_pane_g3_ParamLimits

0x2b50,	// (0x000afb19) postcard_pane_g3

0xb714,	// (0x000b86dd) postcard_pane_g4_ParamLimits

0xb714,	// (0x000b86dd) postcard_pane_g4

0x2b5c,	// (0x000afb25) postcard_pane_g5_ParamLimits

0x2b5c,	// (0x000afb25) postcard_pane_g5

0x2b71,	// (0x000afb3a) postcard_pane_g6_ParamLimits

0x2b71,	// (0x000afb3a) postcard_pane_g6

0xb706,	// (0x000b86cf) postcard_pane_g7_ParamLimits

0xb706,	// (0x000b86cf) postcard_pane_g7

0x0006,

0xf4bc,	// (0x000bc485) postcard_pane_g_ParamLimits

0xf4bc,	// (0x000bc485) postcard_pane_g

0x2b89,	// (0x000afb52) main_mp2_pane_g1_ParamLimits

0x2b89,	// (0x000afb52) main_mp2_pane_g1

0x2b97,	// (0x000afb60) main_mp2_pane_g2_ParamLimits

0x2b97,	// (0x000afb60) main_mp2_pane_g2

0x2ba3,	// (0x000afb6c) main_mp2_pane_g3_ParamLimits

0x2ba3,	// (0x000afb6c) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x000bc494) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x000bc494) main_mp2_pane_g

0x2baf,	// (0x000afb78) main_mp2_pane_t1_ParamLimits

0x2baf,	// (0x000afb78) main_mp2_pane_t1

0x2bc6,	// (0x000afb8f) main_mp2_pane_t2_ParamLimits

0x2bc6,	// (0x000afb8f) main_mp2_pane_t2

0x2bda,	// (0x000afba3) main_mp2_pane_t3_ParamLimits

0x2bda,	// (0x000afba3) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x000bc49b) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x000bc49b) main_mp2_pane_t

0xb722,	// (0x000b86eb) pec_content_pane_ParamLimits

0xb722,	// (0x000b86eb) pec_content_pane

0xaccd,	// (0x000b7c96) scroll_pane_cp015

0xb734,	// (0x000b86fd) pec_attribute_pane_ParamLimits

0xb734,	// (0x000b86fd) pec_attribute_pane

0x2bec,	// (0x000afbb5) pec_content_pane_g1_ParamLimits

0x2bec,	// (0x000afbb5) pec_content_pane_g1

0xb744,	// (0x000b870d) pec_content_pane_t1_ParamLimits

0xb744,	// (0x000b870d) pec_content_pane_t1

0xb756,	// (0x000b871f) pec_content_pane_t2_ParamLimits

0xb756,	// (0x000b871f) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x000bc4a2) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x000bc4a2) pec_content_pane_t

0x2bf8,	// (0x000afbc1) list_single_graphic_pane_cp01_ParamLimits

0x2bf8,	// (0x000afbc1) list_single_graphic_pane_cp01

0x9d01,	// (0x000b6cca) bg_popup_sub_pane_cp04

0xb768,	// (0x000b8731) popup_mup_playback_window_g1

0xb774,	// (0x000b873d) popup_mup_playback_window_t1

0xb789,	// (0x000b8752) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x000bc4a7) popup_mup_playback_window_t

0xb7c0,	// (0x000b8789) main_image_pane_g1_ParamLimits

0xb7c0,	// (0x000b8789) main_image_pane_g1

0xb803,	// (0x000b87cc) scroll_pane_cp018_ParamLimits

0xb803,	// (0x000b87cc) scroll_pane_cp018

0xb81b,	// (0x000b87e4) scroll_pane_cp016_ParamLimits

0xb81b,	// (0x000b87e4) scroll_pane_cp016

0x2cca,	// (0x000afc93) smil2_image_pane_ParamLimits

0x2cca,	// (0x000afc93) smil2_image_pane

0x2d00,	// (0x000afcc9) smil2_root_pane_ParamLimits

0x2d00,	// (0x000afcc9) smil2_root_pane

0x2d38,	// (0x000afd01) smil2_text_pane_ParamLimits

0x2d38,	// (0x000afd01) smil2_text_pane

0x9aa6,	// (0x000b6a6f) bg_list_pane_cp06

0xb857,	// (0x000b8820) grid_radio_pane

0x9aa6,	// (0x000b6a6f) bg_popup_window_pane_cp06

0xb861,	// (0x000b882a) main_fmradio_pane_t1

0xb217,	// (0x000b81e0) heading_pane_cp04

0xb86f,	// (0x000b8838) main_fmradio_pane_t2

0xc8f4,	// (0x000b98bd) popup_cale_lunar_info_window_g1

0xb87d,	// (0x000b8846) main_fmradio_pane_t3

0xc8fc,	// (0x000b98c5) popup_cale_lunar_info_window_g2

0xb88d,	// (0x000b8856) main_fmradio_pane_t4

0x0001,

0xb89b,	// (0x000b8864) main_fmradio_pane_t5

0x0004,

0xf5b9,	// (0x000bc582) popup_cale_lunar_info_window_g

0xf4f3,	// (0x000bc4bc) main_fmradio_pane_t

0xb8a9,	// (0x000b8872) wait_bar_pane_cp03

0xb8b1,	// (0x000b887a) cell_fmradio_pane_ParamLimits

0xb8b1,	// (0x000b887a) cell_fmradio_pane

0xb706,	// (0x000b86cf) cell_fmradio_pane_g1_ParamLimits

0xb706,	// (0x000b86cf) cell_fmradio_pane_g1

0x9aa6,	// (0x000b6a6f) grid_highlight_pane_cp011

0xb8c6,	// (0x000b888f) poc_content_pane_ParamLimits

0xb8c6,	// (0x000b888f) poc_content_pane

0xb8d8,	// (0x000b88a1) scroll_pane_cp019

0x2dc8,	// (0x000afd91) popup_call_poc_act_window_ParamLimits

0x2dc8,	// (0x000afd91) popup_call_poc_act_window

0x2dec,	// (0x000afdb5) popup_call_poc_inact_window_ParamLimits

0x2dec,	// (0x000afdb5) popup_call_poc_inact_window

0xf590,	// (0x000bc559) bg_popup_call_poc_act_pane_g

0xc86c,	// (0x000b9835) bg_popup_call_poc_inact_pane_g1

0xc874,	// (0x000b983d) bg_popup_call_poc_inact_pane_g2

0xb8e0,	// (0x000b88a9) popup_call_poc_act_window_g2

0xc87c,	// (0x000b9845) bg_popup_call_poc_inact_pane_g3

0xc884,	// (0x000b984d) bg_popup_call_poc_inact_pane_g4

0xc88c,	// (0x000b9855) bg_popup_call_poc_inact_pane_g5

0xb8e8,	// (0x000b88b1) popup_call_poc_act_window_t1_ParamLimits

0xb8e8,	// (0x000b88b1) popup_call_poc_act_window_t1

0xb910,	// (0x000b88d9) popup_call_poc_act_window_t2_ParamLimits

0xb910,	// (0x000b88d9) popup_call_poc_act_window_t2

0xb938,	// (0x000b8901) popup_call_poc_act_window_t3_ParamLimits

0xb938,	// (0x000b8901) popup_call_poc_act_window_t3

0xb960,	// (0x000b8929) popup_call_poc_act_window_t4_ParamLimits

0xb960,	// (0x000b8929) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x000bc4c7) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x000bc4c7) popup_call_poc_act_window_t

0xc894,	// (0x000b985d) bg_popup_call_poc_inact_pane_g6

0xc89c,	// (0x000b9865) bg_popup_call_poc_inact_pane_g7

0xc8a4,	// (0x000b986d) bg_popup_call_poc_inact_pane_g8

0xb972,	// (0x000b893b) popup_call_poc_inact_window_g2

0xc8ac,	// (0x000b9875) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf57d,	// (0x000bc546) bg_popup_call_poc_inact_pane_g

0xb97a,	// (0x000b8943) popup_call_poc_inact_window_t1_ParamLimits

0xb97a,	// (0x000b8943) popup_call_poc_inact_window_t1

0xb98f,	// (0x000b8958) popup_call_poc_inact_window_t2_ParamLimits

0xb98f,	// (0x000b8958) popup_call_poc_inact_window_t2

0xb9a4,	// (0x000b896d) popup_call_poc_inact_window_t3_ParamLimits

0xb9a4,	// (0x000b896d) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x000bc4d0) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x000bc4d0) popup_call_poc_inact_window_t

0xca35,	// (0x000b99fe) context_pane_ParamLimits

0x3695,	// (0x000b065e) signal_pane_ParamLimits

0xab0b,	// (0x000b7ad4) main_call2_pane

0x9fcb,	// (0x000b6f94) popup_phob_thumbnail2_window_ParamLimits

0x9fcb,	// (0x000b6f94) popup_phob_thumbnail2_window

0x9f58,	// (0x000b6f21) aid_hotspot_pointer_arrow_pane

0x9f60,	// (0x000b6f29) aid_hotspot_pointer_hand_pane

0x3157,	// (0x000b0120) phob_pre_status_pane_g5

0x0a9e,	// (0x000ada67) cams_zoom_pane_ParamLimits

0x0aad,	// (0x000ada76) image_vga_pane_ParamLimits

0x0ac7,	// (0x000ada90) main_camera_pane_g1_ParamLimits

0x0ad9,	// (0x000adaa2) main_camera_pane_g2_ParamLimits

0x0ae9,	// (0x000adab2) main_camera_pane_g3_ParamLimits

0x0afd,	// (0x000adac6) main_camera_pane_g4_ParamLimits

0x0b11,	// (0x000adada) main_camera_pane_g5_ParamLimits

0x0b25,	// (0x000adaee) main_camera_pane_g6_ParamLimits

0x0b39,	// (0x000adb02) main_camera_pane_g7_ParamLimits

0xf206,	// (0x000bc1cf) main_camera_pane_g_ParamLimits

0x0b4d,	// (0x000adb16) main_camera_pane_t1_ParamLimits

0x0b63,	// (0x000adb2c) main_camera_pane_t2_ParamLimits

0xf217,	// (0x000bc1e0) main_camera_pane_t_ParamLimits

0x9d01,	// (0x000b6cca) bg_popup_preview_window_pane_cp01_ParamLimits

0x9d01,	// (0x000b6cca) bg_popup_preview_window_pane_cp01

0xb9b9,	// (0x000b8982) popup_phob_thumbnail2_window_g1_ParamLimits

0xb9b9,	// (0x000b8982) popup_phob_thumbnail2_window_g1

0x9aa6,	// (0x000b6a6f) call2_cli_visual_pane

0x2e20,	// (0x000afde9) popup_call2_audio_conf_window_ParamLimits

0x2e20,	// (0x000afde9) popup_call2_audio_conf_window

0x2e48,	// (0x000afe11) popup_call2_audio_first_window_ParamLimits

0x2e48,	// (0x000afe11) popup_call2_audio_first_window

0x2ede,	// (0x000afea7) popup_call2_audio_in_window_ParamLimits

0x2ede,	// (0x000afea7) popup_call2_audio_in_window

0x2f2a,	// (0x000afef3) popup_call2_audio_out_window_ParamLimits

0x2f2a,	// (0x000afef3) popup_call2_audio_out_window

0x2f9c,	// (0x000aff65) popup_call2_audio_second_window_ParamLimits

0x2f9c,	// (0x000aff65) popup_call2_audio_second_window

0x3002,	// (0x000affcb) popup_call2_audio_wait_window_ParamLimits

0x3002,	// (0x000affcb) popup_call2_audio_wait_window

0x9aa6,	// (0x000b6a6f) bg_popup_call2_act_pane_cp03

0x9ce3,	// (0x000b6cac) list_conf_pane_cp

0xb9c5,	// (0x000b898e) popup_call2_audio_conf_window_t1

0xb9d3,	// (0x000b899c) list_single_graphic_popup_conf2_pane_ParamLimits

0xb9d3,	// (0x000b899c) list_single_graphic_popup_conf2_pane

0xb286,	// (0x000b824f) list_highlight_pane_cp04

0xb9e6,	// (0x000b89af) list_single_graphic_popup_conf2_pane_g1

0xb297,	// (0x000b8260) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x000bc4d7) list_single_graphic_popup_conf2_pane_g

0xb9f0,	// (0x000b89b9) list_single_graphic_popup_conf2_pane_t1

0xb9fe,	// (0x000b89c7) bg_popup_call2_act_pane_cp01_ParamLimits

0xb9fe,	// (0x000b89c7) bg_popup_call2_act_pane_cp01

0xba88,	// (0x000b8a51) call_type_pane_cp05_ParamLimits

0xba88,	// (0x000b8a51) call_type_pane_cp05

0xbadc,	// (0x000b8aa5) popup_call2_audio_second_window_g1_ParamLimits

0xbadc,	// (0x000b8aa5) popup_call2_audio_second_window_g1

0xbb30,	// (0x000b8af9) popup_call2_audio_second_window_g2_ParamLimits

0xbb30,	// (0x000b8af9) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x000bc4dc) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x000bc4dc) popup_call2_audio_second_window_g

0xbc44,	// (0x000b8c0d) popup_call2_audio_second_window_t1_ParamLimits

0xbc44,	// (0x000b8c0d) popup_call2_audio_second_window_t1

0xbcff,	// (0x000b8cc8) popup_call2_audio_second_window_t2_ParamLimits

0xbcff,	// (0x000b8cc8) popup_call2_audio_second_window_t2

0xbd52,	// (0x000b8d1b) popup_call2_audio_second_window_t3_ParamLimits

0xbd52,	// (0x000b8d1b) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x000bc4e3) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x000bc4e3) popup_call2_audio_second_window_t

0x9aa6,	// (0x000b6a6f) bg_popup_call2_in_pane_cp02

0x9ab0,	// (0x000b6a79) call_type_pane_cp04

0x9ab8,	// (0x000b6a81) popup_call2_audio_wait_window_g1

0x9ac0,	// (0x000b6a89) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000bc0be) popup_call2_audio_wait_window_g

0x9ac8,	// (0x000b6a91) popup_call2_audio_wait_window_t3

0xbe45,	// (0x000b8e0e) bg_popup_call2_act_pane_ParamLimits

0xbe45,	// (0x000b8e0e) bg_popup_call2_act_pane

0xbf05,	// (0x000b8ece) call_type_pane_cp03_ParamLimits

0xbf05,	// (0x000b8ece) call_type_pane_cp03

0xbf69,	// (0x000b8f32) popup_call2_audio_first_window_g1_ParamLimits

0xbf69,	// (0x000b8f32) popup_call2_audio_first_window_g1

0xbfd9,	// (0x000b8fa2) popup_call2_audio_first_window_g2_ParamLimits

0xbfd9,	// (0x000b8fa2) popup_call2_audio_first_window_g2

0xb618,	// (0x000b85e1) popup_call2_audio_first_window_g3_ParamLimits

0xb618,	// (0x000b85e1) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x000bc4ec) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x000bc4ec) popup_call2_audio_first_window_g

0xc0b7,	// (0x000b9080) popup_call2_audio_first_window_t1_ParamLimits

0xc0b7,	// (0x000b9080) popup_call2_audio_first_window_t1

0xc1ba,	// (0x000b9183) popup_call2_audio_first_window_t4_ParamLimits

0xc1ba,	// (0x000b9183) popup_call2_audio_first_window_t4

0xc29d,	// (0x000b9266) popup_call2_audio_first_window_t5_ParamLimits

0xc29d,	// (0x000b9266) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x000bc4f7) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x000bc4f7) popup_call2_audio_first_window_t

0x9cf9,	// (0x000b6cc2) bg_popup_call2_act_pane_g1

0xc906,	// (0x000b98cf) popup_cale_lunar_info_window_t1

0xc914,	// (0x000b98dd) popup_cale_lunar_info_window_t2

0xc922,	// (0x000b98eb) popup_cale_lunar_info_window_t3

0x9aa6,	// (0x000b6a6f) bg_popup_call2_bubble_pane

0xc39e,	// (0x000b9367) bg_popup_call2_in_pane_cp01_ParamLimits

0xc39e,	// (0x000b9367) bg_popup_call2_in_pane_cp01

0x9782,	// (0x000b674b) call_type_pane_cp02

0xc3e6,	// (0x000b93af) popup_call2_audio_out_window_g1_ParamLimits

0xc3e6,	// (0x000b93af) popup_call2_audio_out_window_g1

0xc412,	// (0x000b93db) popup_call2_audio_out_window_g2_ParamLimits

0xc412,	// (0x000b93db) popup_call2_audio_out_window_g2

0xc43a,	// (0x000b9403) popup_call2_audio_out_window_g3_ParamLimits

0xc43a,	// (0x000b9403) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x000bc500) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x000bc500) popup_call2_audio_out_window_g

0xc475,	// (0x000b943e) popup_call2_audio_out_window_t1_ParamLimits

0xc475,	// (0x000b943e) popup_call2_audio_out_window_t1

0xc4d4,	// (0x000b949d) popup_call2_audio_out_window_t2_ParamLimits

0xc4d4,	// (0x000b949d) popup_call2_audio_out_window_t2

0xc528,	// (0x000b94f1) popup_call2_audio_out_window_t3_ParamLimits

0xc528,	// (0x000b94f1) popup_call2_audio_out_window_t3

0xc53e,	// (0x000b9507) popup_call2_audio_out_window_t4_ParamLimits

0xc53e,	// (0x000b9507) popup_call2_audio_out_window_t4

0xc554,	// (0x000b951d) popup_call2_audio_out_window_t5_ParamLimits

0xc554,	// (0x000b951d) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x000bc509) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x000bc509) popup_call2_audio_out_window_t

0xc5b8,	// (0x000b9581) bg_popup_call2_in_pane_ParamLimits

0xc5b8,	// (0x000b9581) bg_popup_call2_in_pane

0xc614,	// (0x000b95dd) popup_call2_audio_in_window_g1_ParamLimits

0xc614,	// (0x000b95dd) popup_call2_audio_in_window_g1

0xc64c,	// (0x000b9615) popup_call2_audio_in_window_g2_ParamLimits

0xc64c,	// (0x000b9615) popup_call2_audio_in_window_g2

0xc684,	// (0x000b964d) popup_call2_audio_in_window_g3_ParamLimits

0xc684,	// (0x000b964d) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x000bc516) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x000bc516) popup_call2_audio_in_window_g

0xc6dc,	// (0x000b96a5) popup_call2_audio_in_window_t1_ParamLimits

0xc6dc,	// (0x000b96a5) popup_call2_audio_in_window_t1

0xc75c,	// (0x000b9725) popup_call2_audio_in_window_t2_ParamLimits

0xc75c,	// (0x000b9725) popup_call2_audio_in_window_t2

0xc7dc,	// (0x000b97a5) popup_call2_audio_in_window_t3_ParamLimits

0xc7dc,	// (0x000b97a5) popup_call2_audio_in_window_t3

0xc7f6,	// (0x000b97bf) popup_call2_audio_in_window_t4_ParamLimits

0xc7f6,	// (0x000b97bf) popup_call2_audio_in_window_t4

0xc808,	// (0x000b97d1) popup_call2_audio_in_window_t5_ParamLimits

0xc808,	// (0x000b97d1) popup_call2_audio_in_window_t5

0xc81a,	// (0x000b97e3) popup_call2_audio_in_window_t6_ParamLimits

0xc81a,	// (0x000b97e3) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x000bc51f) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x000bc51f) popup_call2_audio_in_window_t

0x9cf9,	// (0x000b6cc2) bg_popup_call2_in_pane_g1

0xc930,	// (0x000b98f9) popup_cale_lunar_info_window_t4

0x0003,

0xf5be,	// (0x000bc587) popup_cale_lunar_info_window_t

0x9d01,	// (0x000b6cca) bg_popup_call2_rect_pane_ParamLimits

0x9d01,	// (0x000b6cca) bg_popup_call2_rect_pane

0x9aa6,	// (0x000b6a6f) call2_cli_visual_graphic_pane

0x9aa6,	// (0x000b6a6f) call2_cli_visual_text_pane

0x9ff2,	// (0x000b6fbb) smil_status_volume_pane_g3

0x0002,

0xa9af,	// (0x000b7978) call2_cli_visual_graphic_pane_g1

0xa9af,	// (0x000b7978) call2_cli_visual_graphic_pane_g2

0xa9af,	// (0x000b7978) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x000bc52c) call2_cli_visual_graphic_pane_g

0xc82c,	// (0x000b97f5) bg_popup_call2_rect_pane_g1

0xaa44,	// (0x000b7a0d) bg_popup_call2_rect_pane_g2

0xc834,	// (0x000b97fd) bg_popup_call2_rect_pane_g3

0xc83c,	// (0x000b9805) bg_popup_call2_rect_pane_g4

0xc844,	// (0x000b980d) bg_popup_call2_rect_pane_g5

0xc84c,	// (0x000b9815) bg_popup_call2_rect_pane_g6

0xc854,	// (0x000b981d) bg_popup_call2_rect_pane_g7

0xc85c,	// (0x000b9825) bg_popup_call2_rect_pane_g8

0xc864,	// (0x000b982d) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x000bc533) bg_popup_call2_rect_pane_g

0xc86c,	// (0x000b9835) bg_popup_call2_bubble_pane_g1

0xc874,	// (0x000b983d) bg_popup_call2_bubble_pane_g2

0xc87c,	// (0x000b9845) bg_popup_call2_bubble_pane_g3

0xc884,	// (0x000b984d) bg_popup_call2_bubble_pane_g4

0xc88c,	// (0x000b9855) bg_popup_call2_bubble_pane_g5

0xc894,	// (0x000b985d) bg_popup_call2_bubble_pane_g6

0xc89c,	// (0x000b9865) bg_popup_call2_bubble_pane_g7

0xc8a4,	// (0x000b986d) bg_popup_call2_bubble_pane_g8

0xc8ac,	// (0x000b9875) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x000bc546) bg_popup_call2_bubble_pane_g

0x0459,	// (0x000ad422) aid_cale_week_size_cell_pane

0x0b7d,	// (0x000adb46) aid_cams_cif_uncrop_pane_ParamLimits

0x0b7d,	// (0x000adb46) aid_cams_cif_uncrop_pane

0x0d36,	// (0x000adcff) aid_cams_size_cell_ParamLimits

0x0d36,	// (0x000adcff) aid_cams_size_cell

0x0d4a,	// (0x000add13) grid_cams_pane_ParamLimits

0x0d64,	// (0x000add2d) linegrid_cams_pane_ParamLimits

0x0f3b,	// (0x000adf04) call_video_pane_t1

0x0f55,	// (0x000adf1e) call_video_pane_t2

0x0001,

0xf26a,	// (0x000bc233) call_video_pane_t

0x13a2,	// (0x000ae36b) aid_cale_month_size_cell_pane_ParamLimits

0x13a2,	// (0x000ae36b) aid_cale_month_size_cell_pane

0xf607,	// (0x000bc5d0) smil_status_volume_pane_g

0x9fff,	// (0x000b6fc8) volume_smil_pane_ParamLimits

0xfcb0,	// (0x000acc79) aid_popup2_width_pane

0x03ac,	// (0x000ad375) cell_qdial_pane_g4_ParamLimits

0x03ac,	// (0x000ad375) cell_qdial_pane_g4

0x23e7,	// (0x000af3b0) aid_blid_cardinal_pane_ParamLimits

0x23f7,	// (0x000af3c0) aid_blid_destination_pane_ParamLimits

0x23f7,	// (0x000af3c0) aid_blid_destination_pane

0x9d01,	// (0x000b6cca) bg_popup_call_poc_act_pane_ParamLimits

0x9d01,	// (0x000b6cca) bg_popup_call_poc_act_pane

0x9d01,	// (0x000b6cca) bg_popup_call_poc_inact_pane_ParamLimits

0x9d01,	// (0x000b6cca) bg_popup_call_poc_inact_pane

0xc8b4,	// (0x000b987d) bg_popup_call_poc_act_pane_g1

0xc8bc,	// (0x000b9885) bg_popup_call_poc_act_pane_g2

0xc8c4,	// (0x000b988d) bg_popup_call_poc_act_pane_g3

0xc884,	// (0x000b984d) bg_popup_call_poc_act_pane_g4

0xc88c,	// (0x000b9855) bg_popup_call_poc_act_pane_g5

0xc8cc,	// (0x000b9895) bg_popup_call_poc_act_pane_g6

0xc89c,	// (0x000b9865) bg_popup_call_poc_act_pane_g7

0xc8d4,	// (0x000b989d) bg_popup_call_poc_act_pane_g8

0x9aa6,	// (0x000b6a6f) main_usb_pane

0x9fa2,	// (0x000b6f6b) popup_cale_lunar_info_window

0x1222,	// (0x000ae1eb) im_reading_pane_t1_ParamLimits

0xac25,	// (0x000b7bee) list_im_pane_ParamLimits

0xac36,	// (0x000b7bff) scroll_pane_cp07_ParamLimits

0x9aa6,	// (0x000b6a6f) grid_highlight_pane_cp012

0x9d01,	// (0x000b6cca) mup_scale_pane_ParamLimits

0xb706,	// (0x000b86cf) main_usb_pane_g1_ParamLimits

0xb706,	// (0x000b86cf) main_usb_pane_g1

0x3063,	// (0x000b002c) main_usb_pane_g2_ParamLimits

0x3063,	// (0x000b002c) main_usb_pane_g2

0x0001,

0xf5a7,	// (0x000bc570) main_usb_pane_g_ParamLimits

0xf5a7,	// (0x000bc570) main_usb_pane_g

0x3079,	// (0x000b0042) main_usb_pane_t1_ParamLimits

0x3079,	// (0x000b0042) main_usb_pane_t1

0x308b,	// (0x000b0054) main_usb_pane_t2_ParamLimits

0x308b,	// (0x000b0054) main_usb_pane_t2

0x309d,	// (0x000b0066) main_usb_pane_t3_ParamLimits

0x309d,	// (0x000b0066) main_usb_pane_t3

0x30af,	// (0x000b0078) main_usb_pane_t4_ParamLimits

0x30af,	// (0x000b0078) main_usb_pane_t4

0x30c4,	// (0x000b008d) main_usb_pane_t5_ParamLimits

0x30c4,	// (0x000b008d) main_usb_pane_t5

0x30d9,	// (0x000b00a2) main_usb_pane_t6_ParamLimits

0x30d9,	// (0x000b00a2) main_usb_pane_t6

0x0005,

0xf5ac,	// (0x000bc575) main_usb_pane_t_ParamLimits

0x2386,	// (0x000af34f) aid_text_placing

0x2391,	// (0x000af35a) main_location2_pane_t1_ParamLimits

0x23a7,	// (0x000af370) main_location2_pane_t2_ParamLimits

0x23bd,	// (0x000af386) main_location2_pane_t3_ParamLimits

0x23d3,	// (0x000af39c) main_location2_pane_t4_ParamLimits

0x23d3,	// (0x000af39c) main_location2_pane_t4

0xf3cb,	// (0x000bc394) main_location2_pane_t_ParamLimits

0x9d3d,	// (0x000b6d06) find_pinb_pane_g2_ParamLimits

0x9d3d,	// (0x000b6d06) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x000bc0e4) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x000bc0e4) find_pinb_pane_g

0x9d49,	// (0x000b6d12) find_pinb_pane_t1_ParamLimits

0x9d5b,	// (0x000b6d24) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x000bc0e9) find_pinb_pane_t_ParamLimits

0x9aa6,	// (0x000b6a6f) main_call3_pane

0x19a7,	// (0x000ae970) cale_month_day_heading_pane_t1_ParamLimits

0x1a2d,	// (0x000ae9f6) cale_month_day_heading_pane_t2_ParamLimits

0x1aa6,	// (0x000aea6f) cale_month_day_heading_pane_t3_ParamLimits

0x1b1f,	// (0x000aeae8) cale_month_day_heading_pane_t4_ParamLimits

0x1ba0,	// (0x000aeb69) cale_month_day_heading_pane_t5_ParamLimits

0x1c29,	// (0x000aebf2) cale_month_day_heading_pane_t6_ParamLimits

0x1cba,	// (0x000aec83) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x000bc26b) cale_month_day_heading_pane_t_ParamLimits

0xae80,	// (0x000b7e49) smil_status_volume_pane

0x2b18,	// (0x000afae1) postcard_address_pane_ParamLimits

0x2b18,	// (0x000afae1) postcard_address_pane

0x2b2e,	// (0x000afaf7) postcard_message_pane_ParamLimits

0x2b2e,	// (0x000afaf7) postcard_message_pane

0x303c,	// (0x000b0005) call2_cli_visual_pane_t1_ParamLimits

0x303c,	// (0x000b0005) call2_cli_visual_pane_t1

0x38a6,	// (0x000b086f) postcard_message_pane_t1_ParamLimits

0x38a6,	// (0x000b086f) postcard_message_pane_t1

0xcae8,	// (0x000b9ab1) postcard_address_pane_t1_ParamLimits

0xcae8,	// (0x000b9ab1) postcard_address_pane_t1

0x3892,	// (0x000b085b) popup_call3_audio_in_window_ParamLimits

0x3892,	// (0x000b085b) popup_call3_audio_in_window

0x3717,	// (0x000b06e0) bg_popup_call3_in_pane_ParamLimits

0x3717,	// (0x000b06e0) bg_popup_call3_in_pane

0x3793,	// (0x000b075c) popup_call3_audio_in_window_g1_ParamLimits

0x3793,	// (0x000b075c) popup_call3_audio_in_window_g1

0x37b3,	// (0x000b077c) popup_call3_audio_in_window_g2_ParamLimits

0x37b3,	// (0x000b077c) popup_call3_audio_in_window_g2

0x37d3,	// (0x000b079c) popup_call3_audio_in_window_g3_ParamLimits

0x37d3,	// (0x000b079c) popup_call3_audio_in_window_g3

0x0003,

0xf60e,	// (0x000bc5d7) popup_call3_audio_in_window_g_ParamLimits

0xf60e,	// (0x000bc5d7) popup_call3_audio_in_window_g

0x3804,	// (0x000b07cd) popup_call3_audio_in_window_t1_ParamLimits

0x3804,	// (0x000b07cd) popup_call3_audio_in_window_t1

0x3842,	// (0x000b080b) popup_call3_audio_in_window_t2_ParamLimits

0x3842,	// (0x000b080b) popup_call3_audio_in_window_t2

0x3880,	// (0x000b0849) popup_call3_audio_in_window_t3_ParamLimits

0x3880,	// (0x000b0849) popup_call3_audio_in_window_t3

0x0002,

0xf617,	// (0x000bc5e0) popup_call3_audio_in_window_t_ParamLimits

0xf617,	// (0x000bc5e0) popup_call3_audio_in_window_t

0xab0b,	// (0x000b7ad4) bg_popup_call3_rect_pane

0xc82c,	// (0x000b97f5) bg_popup_call3_rect_pane_g1

0xaa44,	// (0x000b7a0d) bg_popup_call3_rect_pane_g2

0xc834,	// (0x000b97fd) bg_popup_call3_rect_pane_g3

0xc83c,	// (0x000b9805) bg_popup_call3_rect_pane_g4

0xc844,	// (0x000b980d) bg_popup_call3_rect_pane_g5

0xc84c,	// (0x000b9815) bg_popup_call3_rect_pane_g6

0xc854,	// (0x000b981d) bg_popup_call3_rect_pane_g7

0x26f7,	// (0x000af6c0) mup_visualizer_osc_pane

0xb626,	// (0x000b85ef) mup_visualizer_spec_pane

0x3747,	// (0x000b0710) call3_video_qcif_pane_ParamLimits

0x3747,	// (0x000b0710) call3_video_qcif_pane

0x375a,	// (0x000b0723) call3_video_qcif_uncrop_pane_ParamLimits

0x375a,	// (0x000b0723) call3_video_qcif_uncrop_pane

0x376a,	// (0x000b0733) call3_video_subqcif_pane_ParamLimits

0x376a,	// (0x000b0733) call3_video_subqcif_pane

0x3780,	// (0x000b0749) call3_video_subqcif_uncrop_pane_ParamLimits

0x3780,	// (0x000b0749) call3_video_subqcif_uncrop_pane

0x37f3,	// (0x000b07bc) popup_call3_audio_in_window_g4_ParamLimits

0x37f3,	// (0x000b07bc) popup_call3_audio_in_window_g4

0x3706,	// (0x000b06cf) mup_spec_half_pane

0x370f,	// (0x000b06d8) mup_spec_half_pane_cp

0xcaa8,	// (0x000b9a71) mup_osc_middle_pane

0xcab1,	// (0x000b9a7a) mup_visualizer_osc_pane_g1

0x36e6,	// (0x000b06af) mup_spec_bar_pane_ParamLimits

0x36e6,	// (0x000b06af) mup_spec_bar_pane

0xca95,	// (0x000b9a5e) mup_spec_bar_pane_g1

0xca9f,	// (0x000b9a68) mup_spec_bar_pane_g2

0x0001,

0xf602,	// (0x000bc5cb) mup_spec_bar_pane_g

0x0459,	// (0x000ad422) aid_cale_week_size_cell_pane_ParamLimits

0x0473,	// (0x000ad43c) bg_cale_heading_pane_ParamLimits

0x0497,	// (0x000ad460) bg_cale_pane_cp01_ParamLimits

0x04b4,	// (0x000ad47d) cale_week_corner_pane_ParamLimits

0x04d3,	// (0x000ad49c) cale_week_day_heading_pane_ParamLimits

0x04fc,	// (0x000ad4c5) cale_week_scroll_pane_g1_ParamLimits

0x051b,	// (0x000ad4e4) cale_week_scroll_pane_g2_ParamLimits

0x0533,	// (0x000ad4fc) cale_week_scroll_pane_g3_ParamLimits

0x054b,	// (0x000ad514) cale_week_scroll_pane_g4_ParamLimits

0x0563,	// (0x000ad52c) cale_week_scroll_pane_g5_ParamLimits

0x0583,	// (0x000ad54c) cale_week_scroll_pane_g6_ParamLimits

0x05a3,	// (0x000ad56c) cale_week_scroll_pane_g7_ParamLimits

0x05c7,	// (0x000ad590) cale_week_scroll_pane_g8_ParamLimits

0x05eb,	// (0x000ad5b4) cale_week_scroll_pane_g9_ParamLimits

0x0603,	// (0x000ad5cc) cale_week_scroll_pane_g10_ParamLimits

0x061b,	// (0x000ad5e4) cale_week_scroll_pane_g11_ParamLimits

0x0633,	// (0x000ad5fc) cale_week_scroll_pane_g12_ParamLimits

0x0657,	// (0x000ad620) cale_week_scroll_pane_g13_ParamLimits

0x0657,	// (0x000ad620) cale_week_scroll_pane_g14_ParamLimits

0x0657,	// (0x000ad620) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x000bc175) cale_week_scroll_pane_g_ParamLimits

0x069f,	// (0x000ad668) cale_week_time_pane_ParamLimits

0x06c3,	// (0x000ad68c) grid_cale_week_pane_ParamLimits

0xaa81,	// (0x000b7a4a) listscroll_cale_week_pane_t1

0xaa93,	// (0x000b7a5c) scroll_pane_cp08_ParamLimits

0x141a,	// (0x000ae3e3) cale_month_corner_pane_ParamLimits

0xae56,	// (0x000b7e1f) cale_month_pane_t1

0x1922,	// (0x000ae8eb) cale_month_week_pane_ParamLimits

0x21a2,	// (0x000af16b) popup_call_status_window_g1_ParamLimits

0x21b6,	// (0x000af17f) popup_call_status_window_g2_ParamLimits

0x21ca,	// (0x000af193) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x000bc31b) popup_call_status_window_g_ParamLimits

0xb207,	// (0x000b81d0) aid_call2_pane

0x29bd,	// (0x000af986) msg_header_pane_g1

0x2b18,	// (0x000afae1) postcard_address2_pane_ParamLimits

0x2b18,	// (0x000afae1) postcard_address2_pane

0x2b2e,	// (0x000afaf7) postcard_message2_pane_ParamLimits

0x2b2e,	// (0x000afaf7) postcard_message2_pane

0x36a3,	// (0x000b066c) message2_row_pane_ParamLimits

0x36a3,	// (0x000b066c) message2_row_pane

0xca50,	// (0x000b9a19) address2_row_pane_ParamLimits

0xca50,	// (0x000b9a19) address2_row_pane

0xca63,	// (0x000b9a2c) postcard_message2_row_pane_g1

0xca6b,	// (0x000b9a34) postcard_message2_row_pane_t1

0xca63,	// (0x000b9a2c) address2_row_pane_g1

0xca6b,	// (0x000b9a34) address2_row_pane_t1

0x0a30,	// (0x000ad9f9) aid_size_cell_vorec

0x9aa6,	// (0x000b6a6f) main_rss_pane

0x36c6,	// (0x000b068f) rss_list_single_pane_ParamLimits

0x36c6,	// (0x000b068f) rss_list_single_pane

0xca79,	// (0x000b9a42) rss_list_single_pane_t1

0xca87,	// (0x000b9a50) rss_list_single_pane_t2

0x0001,

0xf5fd,	// (0x000bc5c6) rss_list_single_pane_t

0x9aa6,	// (0x000b6a6f) main_camera2_pane

0x9aa6,	// (0x000b6a6f) main_video2_pane

0x3915,	// (0x000b08de) cams_zoom_pane_cp2_ParamLimits

0x3915,	// (0x000b08de) cams_zoom_pane_cp2

0x392c,	// (0x000b08f5) image2_vga_pane_ParamLimits

0x392c,	// (0x000b08f5) image2_vga_pane

0x3974,	// (0x000b093d) main_camera2_pane_g1_ParamLimits

0x3974,	// (0x000b093d) main_camera2_pane_g1

0x3994,	// (0x000b095d) main_camera2_pane_g2_ParamLimits

0x3994,	// (0x000b095d) main_camera2_pane_g2

0x39ab,	// (0x000b0974) main_camera2_pane_g3_ParamLimits

0x39ab,	// (0x000b0974) main_camera2_pane_g3

0x39c2,	// (0x000b098b) main_camera2_pane_g4_ParamLimits

0x39c2,	// (0x000b098b) main_camera2_pane_g4

0x39d9,	// (0x000b09a2) main_camera2_pane_g5_ParamLimits

0x39d9,	// (0x000b09a2) main_camera2_pane_g5

0x39f0,	// (0x000b09b9) main_camera2_pane_g6_ParamLimits

0x39f0,	// (0x000b09b9) main_camera2_pane_g6

0x3a07,	// (0x000b09d0) main_camera2_pane_g7_ParamLimits

0x3a07,	// (0x000b09d0) main_camera2_pane_g7

0x3a1e,	// (0x000b09e7) main_camera2_pane_g8_ParamLimits

0x3a1e,	// (0x000b09e7) main_camera2_pane_g8

0x0008,

0xf61e,	// (0x000bc5e7) main_camera2_pane_g_ParamLimits

0xf61e,	// (0x000bc5e7) main_camera2_pane_g

0x3a4c,	// (0x000b0a15) main_camera2_pane_t1_ParamLimits

0x3a4c,	// (0x000b0a15) main_camera2_pane_t1

0x3a81,	// (0x000b0a4a) main_camera2_pane_t2_ParamLimits

0x3a81,	// (0x000b0a4a) main_camera2_pane_t2

0x3a9e,	// (0x000b0a67) main_camera2_pane_t3_ParamLimits

0x3a9e,	// (0x000b0a67) main_camera2_pane_t3

0x3afc,	// (0x000b0ac5) main_camera2_pane_t4_ParamLimits

0x3afc,	// (0x000b0ac5) main_camera2_pane_t4

0x0006,

0xf631,	// (0x000bc5fa) main_camera2_pane_t_ParamLimits

0xf631,	// (0x000bc5fa) main_camera2_pane_t

0x3b85,	// (0x000b0b4e) cams_zoom_pane_cp4_ParamLimits

0x3b85,	// (0x000b0b4e) cams_zoom_pane_cp4

0x3b9b,	// (0x000b0b64) image2_cif_pane_ParamLimits

0x3b9b,	// (0x000b0b64) image2_cif_pane

0x3bc6,	// (0x000b0b8f) image2_subqcif_pane_ParamLimits

0x3bc6,	// (0x000b0b8f) image2_subqcif_pane

0x3be1,	// (0x000b0baa) main_video2_pane_g1_ParamLimits

0x3be1,	// (0x000b0baa) main_video2_pane_g1

0x3bfb,	// (0x000b0bc4) main_video2_pane_g2_ParamLimits

0x3bfb,	// (0x000b0bc4) main_video2_pane_g2

0x3c11,	// (0x000b0bda) main_video2_pane_g3_ParamLimits

0x3c11,	// (0x000b0bda) main_video2_pane_g3

0x3c27,	// (0x000b0bf0) main_video2_pane_g4_ParamLimits

0x3c27,	// (0x000b0bf0) main_video2_pane_g4

0x3c3d,	// (0x000b0c06) main_video2_pane_g5_ParamLimits

0x3c3d,	// (0x000b0c06) main_video2_pane_g5

0x3c53,	// (0x000b0c1c) main_video2_pane_g6_ParamLimits

0x3c53,	// (0x000b0c1c) main_video2_pane_g6

0x0005,

0xf640,	// (0x000bc609) main_video2_pane_g_ParamLimits

0xf640,	// (0x000bc609) main_video2_pane_g

0x3c6d,	// (0x000b0c36) main_video2_pane_t1_ParamLimits

0x3c6d,	// (0x000b0c36) main_video2_pane_t1

0x3c91,	// (0x000b0c5a) main_video2_pane_t2_ParamLimits

0x3c91,	// (0x000b0c5a) main_video2_pane_t2

0x3ce1,	// (0x000b0caa) main_video2_pane_t3_ParamLimits

0x3ce1,	// (0x000b0caa) main_video2_pane_t3

0x0002,

0xf64d,	// (0x000bc616) main_video2_pane_t_ParamLimits

0xf64d,	// (0x000bc616) main_video2_pane_t

0x3197,	// (0x000b0160) call_muted_g2

0x0001,

0xf5ef,	// (0x000bc5b8) call_muted_g

0x9aa6,	// (0x000b6a6f) main_mup2_pane

0x3d29,	// (0x000b0cf2) main_mup2_pane_g1_ParamLimits

0x3d29,	// (0x000b0cf2) main_mup2_pane_g1

0x3d35,	// (0x000b0cfe) main_mup2_pane_g2_ParamLimits

0x3d35,	// (0x000b0cfe) main_mup2_pane_g2

0xa068,	// (0x000b7031) main_mup_pane_g13_cp1

0xa070,	// (0x000b7039) mup_volume_pane_cp1

0x3d53,	// (0x000b0d1c) main_mup2_pane_g4_ParamLimits

0x3d53,	// (0x000b0d1c) main_mup2_pane_g4

0x3d65,	// (0x000b0d2e) main_mup2_pane_g5_ParamLimits

0x3d65,	// (0x000b0d2e) main_mup2_pane_g5

0x3d77,	// (0x000b0d40) main_mup2_pane_g6_ParamLimits

0x3d77,	// (0x000b0d40) main_mup2_pane_g6

0x3d89,	// (0x000b0d52) main_mup2_pane_g7_ParamLimits

0x3d89,	// (0x000b0d52) main_mup2_pane_g7

0x0006,

0xf654,	// (0x000bc61d) main_mup2_pane_g_ParamLimits

0xf654,	// (0x000bc61d) main_mup2_pane_g

0x3da1,	// (0x000b0d6a) main_mup2_pane_t1_ParamLimits

0x3da1,	// (0x000b0d6a) main_mup2_pane_t1

0x3db7,	// (0x000b0d80) main_mup2_pane_t2_ParamLimits

0x3db7,	// (0x000b0d80) main_mup2_pane_t2

0x3dcd,	// (0x000b0d96) main_mup2_pane_t3_ParamLimits

0x3dcd,	// (0x000b0d96) main_mup2_pane_t3

0x3de3,	// (0x000b0dac) main_mup2_pane_t4_ParamLimits

0x3de3,	// (0x000b0dac) main_mup2_pane_t4

0x3dfb,	// (0x000b0dc4) main_mup2_pane_t5_ParamLimits

0x3dfb,	// (0x000b0dc4) main_mup2_pane_t5

0x3e13,	// (0x000b0ddc) main_mup2_pane_t6_ParamLimits

0x3e13,	// (0x000b0ddc) main_mup2_pane_t6

0x0005,

0xf663,	// (0x000bc62c) main_mup2_pane_t_ParamLimits

0xf663,	// (0x000bc62c) main_mup2_pane_t

0x3e43,	// (0x000b0e0c) mup2_visualizer_pane_ParamLimits

0x3e43,	// (0x000b0e0c) mup2_visualizer_pane

0x3e71,	// (0x000b0e3a) mup_progress_pane_cp_ParamLimits

0x3e71,	// (0x000b0e3a) mup_progress_pane_cp

0xa053,	// (0x000b701c) mup_volume_pane_cp_ParamLimits

0xa053,	// (0x000b701c) mup_volume_pane_cp

0x3e87,	// (0x000b0e50) mup2_visualizer_pane_g1_ParamLimits

0x3e87,	// (0x000b0e50) mup2_visualizer_pane_g1

0xcaff,	// (0x000b9ac8) mup2_visualizer_pane_g2_ParamLimits

0xcaff,	// (0x000b9ac8) mup2_visualizer_pane_g2

0x3e9c,	// (0x000b0e65) mup2_visualizer_pane_g3_ParamLimits

0x3e9c,	// (0x000b0e65) mup2_visualizer_pane_g3

0x0002,

0xf670,	// (0x000bc639) mup2_visualizer_pane_g_ParamLimits

0xf670,	// (0x000bc639) mup2_visualizer_pane_g

0xb84f,	// (0x000b8818) aid_size_cell_fmradio

0x3347,	// (0x000b0310) aid_height_parent_landcape

0xacb4,	// (0x000b7c7d) wml_content_pane_cp

0xacbc,	// (0x000b7c85) wml_tabs_pane

0xacc5,	// (0x000b7c8e) popup_wml_miniature_window

0xaccd,	// (0x000b7c96) scroll_pane_cp021

0xace1,	// (0x000b7caa) wml_content_pane_comp8

0x9aa6,	// (0x000b6a6f) bg_popup_sub_pane_cp05

0xcb1d,	// (0x000b9ae6) popup_wml_miniature_window_g1

0xcb25,	// (0x000b9aee) wml_miniature_view_pane

0x3ea8,	// (0x000b0e71) aid_size_wml_view

0x3eb0,	// (0x000b0e79) wml_miniature_view_pane_g1

0x3eb9,	// (0x000b0e82) wml_miniature_view_pane_g2

0x3ec2,	// (0x000b0e8b) wml_miniature_view_pane_g3

0x3eca,	// (0x000b0e93) wml_miniature_view_pane_g4

0x3ed2,	// (0x000b0e9b) wml_miniature_view_pane_g5

0x3eda,	// (0x000b0ea3) wml_miniature_view_pane_g6

0x3ee2,	// (0x000b0eab) wml_miniature_view_pane_g7

0x3eea,	// (0x000b0eb3) wml_miniature_view_pane_g8

0x0007,

0xf677,	// (0x000bc640) wml_miniature_view_pane_g

0xcb2d,	// (0x000b9af6) background_graphic_ParamLimits

0xcb2d,	// (0x000b9af6) background_graphic

0xcb39,	// (0x000b9b02) wml_tabs_2_pane

0xcb42,	// (0x000b9b0b) wml_tabs_3_pane_ParamLimits

0xcb42,	// (0x000b9b0b) wml_tabs_3_pane

0xcb54,	// (0x000b9b1d) wml_tabs_4_pane_ParamLimits

0xcb54,	// (0x000b9b1d) wml_tabs_4_pane

0xcb6a,	// (0x000b9b33) wml_tabs_5_pane_ParamLimits

0xcb6a,	// (0x000b9b33) wml_tabs_5_pane

0xcb84,	// (0x000b9b4d) wml_tabs_pane_g2_ParamLimits

0xcb84,	// (0x000b9b4d) wml_tabs_pane_g2

0xcb98,	// (0x000b9b61) wml_tabs_pane_g3_ParamLimits

0xcb98,	// (0x000b9b61) wml_tabs_pane_g3

0x3ef2,	// (0x000b0ebb) wml_tabs_2_active_pane_ParamLimits

0x3ef2,	// (0x000b0ebb) wml_tabs_2_active_pane

0x3f06,	// (0x000b0ecf) wml_tabs_2_passive_pane_ParamLimits

0x3f06,	// (0x000b0ecf) wml_tabs_2_passive_pane

0x3f1a,	// (0x000b0ee3) wml_tabs_3_active_pane_cp_ParamLimits

0x3f1a,	// (0x000b0ee3) wml_tabs_3_active_pane_cp

0x3f2f,	// (0x000b0ef8) wml_tabs_3_passive_pane_ParamLimits

0x3f2f,	// (0x000b0ef8) wml_tabs_3_passive_pane

0x3f42,	// (0x000b0f0b) wml_tabs_3_passive_pane_cp_ParamLimits

0x3f42,	// (0x000b0f0b) wml_tabs_3_passive_pane_cp

0x3f59,	// (0x000b0f22) tabs_4_active_pane

0x3f61,	// (0x000b0f2a) tabs_4_passive_pane

0x3f6b,	// (0x000b0f34) tabs_4_passive_pane_cp

0x3f73,	// (0x000b0f3c) tabs_4_passive_pane_cp2

0x305b,	// (0x000b0024) aid_height_text

0x26c9,	// (0x000af692) mup_volume_cont_pane_ParamLimits

0x26c9,	// (0x000af692) mup_volume_cont_pane

0x002f,	// (0x000acff8) aid_size_cell_pinb

0x0039,	// (0x000ad002) aid_size_list_pinb

0x3e5d,	// (0x000b0e26) mup2_volume_cont_pane_ParamLimits

0x3e5d,	// (0x000b0e26) mup2_volume_cont_pane

0xa03f,	// (0x000b7008) mup2_volume_cont_pane_g1_ParamLimits

0xa03f,	// (0x000b7008) mup2_volume_cont_pane_g1

0xfcbc,	// (0x000acc85) aid_size_cell_touch_ParamLimits

0xfcbc,	// (0x000acc85) aid_size_cell_touch

0xff53,	// (0x000acf1c) touch_pane_ParamLimits

0xff53,	// (0x000acf1c) touch_pane

0xf0b4,	// (0x000bc07d) main_rss2_pane

0xcbb5,	// (0x000b9b7e) listscroll_rss2_pane

0xcbbe,	// (0x000b9b87) rss2_navigation_pane

0xcbc6,	// (0x000b9b8f) list_rss2_pane

0xb32b,	// (0x000b82f4) scroll_pane_cp22

0xcbce,	// (0x000b9b97) rss2_navigation_pane_g1

0xcbd7,	// (0x000b9ba0) rss2_navigation_pane_g2

0xcbdf,	// (0x000b9ba8) rss2_navigation_pane_g3

0x0002,

0xf688,	// (0x000bc651) rss2_navigation_pane_g

0xcbe7,	// (0x000b9bb0) rss2_navigation_pane_t1

0x3f7d,	// (0x000b0f46) rss2_list_single_pane_ParamLimits

0x3f7d,	// (0x000b0f46) rss2_list_single_pane

0xcbf5,	// (0x000b9bbe) rss2_list_single_pane_t2

0xcc03,	// (0x000b9bcc) rss2_list_single_pane_t3_ParamLimits

0xcc03,	// (0x000b9bcc) rss2_list_single_pane_t3

0xcc20,	// (0x000b9be9) rss2_list_single_pane_t4

0x1f98,	// (0x000aef61) smil_status_pane_g1

0x9650,	// (0x000b6619) main_image2_pane_ParamLimits

0x9650,	// (0x000b6619) main_image2_pane

0x3a35,	// (0x000b09fe) main_camera2_pane_g9_ParamLimits

0x3a35,	// (0x000b09fe) main_camera2_pane_g9

0x3b51,	// (0x000b0b1a) main_camera2_pane_t5_ParamLimits

0x3b51,	// (0x000b0b1a) main_camera2_pane_t5

0xa014,	// (0x000b6fdd) main_camera2_pane_t6_ParamLimits

0xa014,	// (0x000b6fdd) main_camera2_pane_t6

0x3f97,	// (0x000b0f60) main_image2_pane_g1_ParamLimits

0x3f97,	// (0x000b0f60) main_image2_pane_g1

0x2d72,	// (0x000afd3b) smil2_video_pane_ParamLimits

0x2d72,	// (0x000afd3b) smil2_video_pane

0xfcfc,	// (0x000accc5) aid_zoom_text_primary_cp

0xfef3,	// (0x000acebc) popup_preview_fixed_window

0xac1d,	// (0x000b7be6) im_reading_pane_g1

0x3907,	// (0x000b08d0) cams2_bc_adjust_pane_cp_ParamLimits

0x3907,	// (0x000b08d0) cams2_bc_adjust_pane_cp

0x3b77,	// (0x000b0b40) cams2_bc_adjust_pane_ParamLimits

0x3b77,	// (0x000b0b40) cams2_bc_adjust_pane

0xcf17,	// (0x000b9ee0) cams2_bc_adjust_pane_g1

0xa078,	// (0x000b7041) cams2_slider_pane

0xa081,	// (0x000b704a) cams2_slider_pane_g1

0xa08a,	// (0x000b7053) cams2_slider_pane_g2

0x0006,

0xf68f,	// (0x000bc658) cams2_slider_pane_g

0x012b,	// (0x000ad0f4) calc_display_pane_ParamLimits

0x0150,	// (0x000ad119) calc_paper_pane_ParamLimits

0x0173,	// (0x000ad13c) grid_calc_pane_ParamLimits

0x9ea8,	// (0x000b6e71) popup_clock_digital_window_t1_ParamLimits

0xb7ec,	// (0x000b87b5) main_image_pane_t1

0x010b,	// (0x000ad0d4) aid_size_cell_calc_ParamLimits

0x010b,	// (0x000ad0d4) aid_size_cell_calc

0x339d,	// (0x000b0366) popup_blid_sat_info2_window_ParamLimits

0x339d,	// (0x000b0366) popup_blid_sat_info2_window

0xcc36,	// (0x000b9bff) aid_size_cell_blid

0xcc3e,	// (0x000b9c07) bg_popup_window_pane_cp07

0xcc61,	// (0x000b9c2a) grid_popup_blid_pane

0xcc6b,	// (0x000b9c34) heading_pane_cp05_ParamLimits

0xcc6b,	// (0x000b9c34) heading_pane_cp05

0xcd35,	// (0x000b9cfe) cell_popup_blid_pane_ParamLimits

0xcd35,	// (0x000b9cfe) cell_popup_blid_pane

0xcd5f,	// (0x000b9d28) cell_popup_blid_pane_g1

0xcd67,	// (0x000b9d30) cell_popup_blid_pane_t1

0x3e2d,	// (0x000b0df6) mup2_indicator_pane_ParamLimits

0x3e2d,	// (0x000b0df6) mup2_indicator_pane

0xab0b,	// (0x000b7ad4) mup2_visualizer_osc_pane

0xcb0b,	// (0x000b9ad4) mup2_visualizer_spec_pane_ParamLimits

0xcb0b,	// (0x000b9ad4) mup2_visualizer_spec_pane

0x3fad,	// (0x000b0f76) mup2_spec_half_pane

0x3fb6,	// (0x000b0f7f) mup2_spec_half_pane_cp

0x3fbe,	// (0x000b0f87) mup2_spec_bar_pane_ParamLimits

0x3fbe,	// (0x000b0f87) mup2_spec_bar_pane

0xca95,	// (0x000b9a5e) mup2_spec_bar_pane_g1

0xca9f,	// (0x000b9a68) mup2_spec_bar_pane_g2

0x0001,

0xf602,	// (0x000bc5cb) mup2_spec_bar_pane_g

0x3fde,	// (0x000b0fa7) mup2_osc_middle_pane

0xcab1,	// (0x000b9a7a) mup2_visualizer_osc_pane_g1

0x967e,	// (0x000b6647) popup_number_entry_window_t1_ParamLimits

0x9691,	// (0x000b665a) popup_number_entry_window_t2_ParamLimits

0x96a3,	// (0x000b666c) popup_number_entry_window_t3_ParamLimits

0x96b5,	// (0x000b667e) popup_number_entry_window_t5_ParamLimits

0x96b5,	// (0x000b667e) popup_number_entry_window_t5

0xf0c6,	// (0x000bc08f) popup_number_entry_window_t_ParamLimits

0x96ea,	// (0x000b66b3) text_title_cp2_ParamLimits

0x9f68,	// (0x000b6f31) aid_hotspot_pointer_text2_pane

0x9f8e,	// (0x000b6f57) main_viewer_pane_g9_ParamLimits

0x9f8e,	// (0x000b6f57) main_viewer_pane_g9

0xae56,	// (0x000b7e1f) cale_month_pane_t1_ParamLimits

0xae93,	// (0x000b7e5c) bg_cale_pane_ParamLimits

0xaeab,	// (0x000b7e74) list_cale_pane_ParamLimits

0xaebc,	// (0x000b7e85) listscroll_cale_day_pane_t1

0xaece,	// (0x000b7e97) scroll_pane_cp09_ParamLimits

0x26ff,	// (0x000af6c8) main_mup_eq_pane_t1_ParamLimits

0x26ff,	// (0x000af6c8) main_mup_eq_pane_t1

0x271b,	// (0x000af6e4) main_mup_eq_pane_t2_ParamLimits

0x271b,	// (0x000af6e4) main_mup_eq_pane_t2

0x2737,	// (0x000af700) main_mup_eq_pane_t3_ParamLimits

0x2737,	// (0x000af700) main_mup_eq_pane_t3

0x2755,	// (0x000af71e) main_mup_eq_pane_t4_ParamLimits

0x2755,	// (0x000af71e) main_mup_eq_pane_t4

0x2773,	// (0x000af73c) main_mup_eq_pane_t5_ParamLimits

0x2773,	// (0x000af73c) main_mup_eq_pane_t5

0x2791,	// (0x000af75a) main_mup_eq_pane_t6_ParamLimits

0x2791,	// (0x000af75a) main_mup_eq_pane_t6

0x27a7,	// (0x000af770) main_mup_eq_pane_t7_ParamLimits

0x27a7,	// (0x000af770) main_mup_eq_pane_t7

0x27bd,	// (0x000af786) main_mup_eq_pane_t8_ParamLimits

0x27bd,	// (0x000af786) main_mup_eq_pane_t8

0x27d3,	// (0x000af79c) main_mup_eq_pane_t9_ParamLimits

0x27d3,	// (0x000af79c) main_mup_eq_pane_t9

0x27ef,	// (0x000af7b8) main_mup_eq_pane_t10_ParamLimits

0x27ef,	// (0x000af7b8) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x000bc41a) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x000bc41a) main_mup_eq_pane_t

0x28c4,	// (0x000af88d) mup_equalizer_pane_cp5_ParamLimits

0x28dc,	// (0x000af8a5) mup_equalizer_pane_cp6_ParamLimits

0x28f4,	// (0x000af8bd) mup_equalizer_pane_cp7_ParamLimits

0xf0b4,	// (0x000bc07d) main_gallery_pane

0xcaba,	// (0x000b9a83) smil2_volume_pane

0xcac2,	// (0x000b9a8b) smil_status_volume_pane_g1_ParamLimits

0xcad5,	// (0x000b9a9e) smil_status_volume_pane_g2_ParamLimits

0x9ff2,	// (0x000b6fbb) smil_status_volume_pane_g3_ParamLimits

0xf607,	// (0x000bc5d0) smil_status_volume_pane_g_ParamLimits

0xcc3e,	// (0x000b9c07) bg_popup_window_pane_cp07_ParamLimits

0xcc4c,	// (0x000b9c15) blid_firmament_pane

0x3fe7,	// (0x000b0fb0) aid_size_cell_gallery_ParamLimits

0x3fe7,	// (0x000b0fb0) aid_size_cell_gallery

0x3ffd,	// (0x000b0fc6) grid_gallery_pane_ParamLimits

0x3ffd,	// (0x000b0fc6) grid_gallery_pane

0x4018,	// (0x000b0fe1) cell_gallery_pane_ParamLimits

0x4018,	// (0x000b0fe1) cell_gallery_pane

0xcd75,	// (0x000b9d3e) bg_cell_gallery_focus_pane_ParamLimits

0xcd75,	// (0x000b9d3e) bg_cell_gallery_focus_pane

0xcd87,	// (0x000b9d50) cell_gallery_pane_g1_ParamLimits

0xcd87,	// (0x000b9d50) cell_gallery_pane_g1

0x4069,	// (0x000b1032) cell_gallery_pane_g2_ParamLimits

0x4069,	// (0x000b1032) cell_gallery_pane_g2

0x4076,	// (0x000b103f) cell_gallery_pane_g3_ParamLimits

0x4076,	// (0x000b103f) cell_gallery_pane_g3

0xcd93,	// (0x000b9d5c) cell_gallery_pane_g4_ParamLimits

0xcd93,	// (0x000b9d5c) cell_gallery_pane_g4

0x0003,

0xf6b5,	// (0x000bc67e) cell_gallery_pane_g_ParamLimits

0xf6b5,	// (0x000bc67e) cell_gallery_pane_g

0xcd9f,	// (0x000b9d68) bg_cell_gallery_focus_pane_g1

0xcda7,	// (0x000b9d70) bg_cell_gallery_focus_pane_g2

0xcdaf,	// (0x000b9d78) bg_cell_gallery_focus_pane_g3

0xcdb7,	// (0x000b9d80) bg_cell_gallery_focus_pane_g4

0xcdbf,	// (0x000b9d88) bg_cell_gallery_focus_pane_g5

0xcdc7,	// (0x000b9d90) bg_cell_gallery_focus_pane_g6

0xcdcf,	// (0x000b9d98) bg_cell_gallery_focus_pane_g7

0xcdd7,	// (0x000b9da0) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6be,	// (0x000bc687) bg_cell_gallery_focus_pane_g

0xcddf,	// (0x000b9da8) aid_firma_cardinal

0xcdf3,	// (0x000b9dbc) blid_firmament_pane_t1

0xce0a,	// (0x000b9dd3) blid_firmament_pane_t2

0xce21,	// (0x000b9dea) blid_firmament_pane_t3

0xce38,	// (0x000b9e01) blid_firmament_pane_t4

0x0003,

0xf6cf,	// (0x000bc698) blid_firmament_pane_t

0xce4f,	// (0x000b9e18) blid_sat_info_pane

0xce5f,	// (0x000b9e28) blid_sat_info_pane_g1

0xce5f,	// (0x000b9e28) blid_sat_info_pane_g2

0x0001,

0xf6d8,	// (0x000bc6a1) blid_sat_info_pane_g

0xce69,	// (0x000b9e32) blid_sat_info_pane_t1

0xce77,	// (0x000b9e40) smil2_volume_content_pane

0xce80,	// (0x000b9e49) smil2_volume_pane_g1

0xa9db,	// (0x000b79a4) smil2_volume_content_pane_g1

0xce88,	// (0x000b9e51) smil2_volume_content_pane_g2

0xce91,	// (0x000b9e5a) smil2_volume_content_pane_g3

0xce9a,	// (0x000b9e63) smil2_volume_content_pane_g4

0xcea3,	// (0x000b9e6c) smil2_volume_content_pane_g5

0xceac,	// (0x000b9e75) smil2_volume_content_pane_g6

0xceb5,	// (0x000b9e7e) smil2_volume_content_pane_g7

0xcebe,	// (0x000b9e87) smil2_volume_content_pane_g8

0xcec7,	// (0x000b9e90) smil2_volume_content_pane_g9

0xced0,	// (0x000b9e99) smil2_volume_content_pane_g10

0x0009,

0xf6dd,	// (0x000bc6a6) smil2_volume_content_pane_g

0x0791,	// (0x000ad75a) cale_week_day_heading_pane_t1_ParamLimits

0x07bb,	// (0x000ad784) cale_week_day_heading_pane_t2_ParamLimits

0x07ea,	// (0x000ad7b3) cale_week_day_heading_pane_t3_ParamLimits

0x0819,	// (0x000ad7e2) cale_week_day_heading_pane_t4_ParamLimits

0x0848,	// (0x000ad811) cale_week_day_heading_pane_t5_ParamLimits

0x087b,	// (0x000ad844) cale_week_day_heading_pane_t6_ParamLimits

0x08b2,	// (0x000ad87b) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x000bc196) cale_week_day_heading_pane_t_ParamLimits

0xaab0,	// (0x000b7a79) bg_cale_side_pane_ParamLimits

0x08dc,	// (0x000ad8a5) cale_week_time_pane_t1_ParamLimits

0x08f6,	// (0x000ad8bf) cale_week_time_pane_t2_ParamLimits

0x0910,	// (0x000ad8d9) cale_week_time_pane_t3_ParamLimits

0x092a,	// (0x000ad8f3) cale_week_time_pane_t4_ParamLimits

0x0944,	// (0x000ad90d) cale_week_time_pane_t5_ParamLimits

0x095e,	// (0x000ad927) cale_week_time_pane_t6_ParamLimits

0x097e,	// (0x000ad947) cale_week_time_pane_t7_ParamLimits

0x09a4,	// (0x000ad96d) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x000bc1a5) cale_week_time_pane_t_ParamLimits

0x09ca,	// (0x000ad993) cell_cale_week_pane_g2_ParamLimits

0xaab0,	// (0x000b7a79) bg_cale_side_pane_cp01_ParamLimits

0x1d4b,	// (0x000aed14) cale_month_week_pane_t1_ParamLimits

0x1d64,	// (0x000aed2d) cale_month_week_pane_t2_ParamLimits

0x1d7d,	// (0x000aed46) cale_month_week_pane_t3_ParamLimits

0x1d96,	// (0x000aed5f) cale_month_week_pane_t4_ParamLimits

0x1daf,	// (0x000aed78) cale_month_week_pane_t5_ParamLimits

0x1dc8,	// (0x000aed91) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x000bc27a) cale_month_week_pane_t_ParamLimits

0x9e28,	// (0x000b6df1) cell_cale_month_pane_g1_ParamLimits

0xf0b4,	// (0x000bc07d) main_cale_event_viewer_pane

0x9646,	// (0x000b660f) listscroll_cale_event_viewer_pane

0xced9,	// (0x000b9ea2) list_cale_ev_pane

0xcee1,	// (0x000b9eaa) scroll_pane_cp023

0x4083,	// (0x000b104c) field_cale_ev_pane_ParamLimits

0x4083,	// (0x000b104c) field_cale_ev_pane

0xceed,	// (0x000b9eb6) field_cale_ev_content_pane_ParamLimits

0xceed,	// (0x000b9eb6) field_cale_ev_content_pane

0xcf1f,	// (0x000b9ee8) field_cale_ev_pane_g1_ParamLimits

0xcf1f,	// (0x000b9ee8) field_cale_ev_pane_g1

0xcf2b,	// (0x000b9ef4) field_cale_ev_pane_g2_ParamLimits

0xcf2b,	// (0x000b9ef4) field_cale_ev_pane_g2

0xcf43,	// (0x000b9f0c) field_cale_ev_pane_g3_ParamLimits

0xcf43,	// (0x000b9f0c) field_cale_ev_pane_g3

0x0002,

0xf6f2,	// (0x000bc6bb) field_cale_ev_pane_g_ParamLimits

0xf6f2,	// (0x000bc6bb) field_cale_ev_pane_g

0xcf5b,	// (0x000b9f24) field_cale_ev_pane_t1_ParamLimits

0xcf5b,	// (0x000b9f24) field_cale_ev_pane_t1

0x40a7,	// (0x000b1070) field_cale_ev_content_pane_t1_ParamLimits

0x40a7,	// (0x000b1070) field_cale_ev_content_pane_t1

0xb6d2,	// (0x000b869b) bg_button_pane_cp01

0x0449,	// (0x000ad412) listscroll_cale_week_pane_ParamLimits

0xaa78,	// (0x000b7a41) popup_toolbar_window_cp01

0xaa81,	// (0x000b7a4a) listscroll_cale_week_pane_t1_ParamLimits

0x0449,	// (0x000ad412) listscroll_cale_day_pane_ParamLimits

0xaa78,	// (0x000b7a41) popup_toolbar_window_cp02

0xaebc,	// (0x000b7e85) listscroll_cale_day_pane_t1_ParamLimits

0x3365,	// (0x000b032e) main_cale_month_pane_ParamLimits

0x9fdd,	// (0x000b6fa6) popup_toolbar_window_cp03_ParamLimits

0x9fdd,	// (0x000b6fa6) popup_toolbar_window_cp03

0x2c30,	// (0x000afbf9) main_image_pane_g2_ParamLimits

0x2c30,	// (0x000afbf9) main_image_pane_g2

0x2c41,	// (0x000afc0a) main_image_pane_g3_ParamLimits

0x2c41,	// (0x000afc0a) main_image_pane_g3

0x0002,

0xf4e3,	// (0x000bc4ac) main_image_pane_g_ParamLimits

0xf4e3,	// (0x000bc4ac) main_image_pane_g

0xb7ec,	// (0x000b87b5) main_image_pane_t1_ParamLimits

0x2c52,	// (0x000afc1b) main_image_pane_t2_ParamLimits

0x2c52,	// (0x000afc1b) main_image_pane_t2

0x2c64,	// (0x000afc2d) main_image_pane_t3_ParamLimits

0x2c64,	// (0x000afc2d) main_image_pane_t3

0x2c8c,	// (0x000afc55) main_image_pane_t4_ParamLimits

0x2c8c,	// (0x000afc55) main_image_pane_t4

0x0003,

0xf4ea,	// (0x000bc4b3) main_image_pane_t_ParamLimits

0xf4ea,	// (0x000bc4b3) main_image_pane_t

0x2cac,	// (0x000afc75) popup_image_details_window_cp01

0x2cb6,	// (0x000afc7f) popup_toobar_trans_pane_cp01_ParamLimits

0x2cb6,	// (0x000afc7f) popup_toobar_trans_pane_cp01

0x3490,	// (0x000b0459) popup_image_details_window_ParamLimits

0x3490,	// (0x000b0459) popup_image_details_window

0x9fae,	// (0x000b6f77) popup_image_focus_window

0x38c1,	// (0x000b088a) camera2_autofocus_pane_ParamLimits

0x38c1,	// (0x000b088a) camera2_autofocus_pane

0x9646,	// (0x000b660f) bg_popup_sub_pane_cp06

0xcf72,	// (0x000b9f3b) popup_image_focus_window_g1

0xcf7a,	// (0x000b9f43) popup_image_focus_window_g2

0xcf82,	// (0x000b9f4b) popup_image_focus_window_g3

0xcf8a,	// (0x000b9f53) popup_image_focus_window_g4

0x0003,

0xf6f9,	// (0x000bc6c2) popup_image_focus_window_g

0xcf92,	// (0x000b9f5b) popup_image_focus_window_t1

0xcfa0,	// (0x000b9f69) popup_image_focus_window_t2

0xcfb0,	// (0x000b9f79) popup_image_focus_window_t3

0x0002,

0xf702,	// (0x000bc6cb) popup_image_focus_window_t

0xcfbe,	// (0x000b9f87) camera2_autofocus_pane_g1

0xbb84,	// (0x000b8b4d) bg_tb_trans_pane_cp01

0xcfcc,	// (0x000b9f95) popup_image_details_window_g1

0xcfdf,	// (0x000b9fa8) popup_image_details_window_g2

0x0002,

0xf714,	// (0x000bc6dd) popup_image_details_window_g

0xd008,	// (0x000b9fd1) popup_image_details_window_t1

0xd01a,	// (0x000b9fe3) popup_image_details_window_t2

0xd033,	// (0x000b9ffc) popup_image_details_window_t3

0xd047,	// (0x000ba010) popup_image_details_window_t4

0xd062,	// (0x000ba02b) popup_image_details_window_t5

0x0004,

0xf71b,	// (0x000bc6e4) popup_image_details_window_t

0xa946,	// (0x000b790f) bg_calc_paper_pane_ParamLimits

0xf0b4,	// (0x000bc07d) grid_highlight_pane_cp013

0x9d98,	// (0x000b6d61) list_calc_pane_ParamLimits

0x9daa,	// (0x000b6d73) scroll_pane_cp024

0xa95a,	// (0x000b7923) bg_calc_display_pane_ParamLimits

0x0273,	// (0x000ad23c) calc_display_pane_t1_ParamLimits

0x0285,	// (0x000ad24e) calc_display_pane_t2_ParamLimits

0x9db2,	// (0x000b6d7b) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x000bc116) calc_display_pane_t_ParamLimits

0x0346,	// (0x000ad30f) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x000bc133) cell_calc_pane_g

0x034f,	// (0x000ad318) cell_calc_pane_t1

0xa9b9,	// (0x000b7982) grid_highlight_pane_cp02_ParamLimits

0xa9cf,	// (0x000b7998) toolbar_button_pane_cp01_ParamLimits

0xa9cf,	// (0x000b7998) toolbar_button_pane_cp01

0xb831,	// (0x000b87fa) temp_image_control_pane_ParamLimits

0xb831,	// (0x000b87fa) temp_image_control_pane

0x9650,	// (0x000b6619) main_mp3_pane

0xd07c,	// (0x000ba045) temp_image_control_pane_g1_ParamLimits

0xd07c,	// (0x000ba045) temp_image_control_pane_g1

0xd08a,	// (0x000ba053) temp_image_control_pane_g2_ParamLimits

0xd08a,	// (0x000ba053) temp_image_control_pane_g2

0xd09c,	// (0x000ba065) temp_image_control_pane_g3_ParamLimits

0xd09c,	// (0x000ba065) temp_image_control_pane_g3

0x40f8,	// (0x000b10c1) temp_image_control_pane_g4_ParamLimits

0x40f8,	// (0x000b10c1) temp_image_control_pane_g4

0x0003,

0xf726,	// (0x000bc6ef) temp_image_control_pane_g_ParamLimits

0xf726,	// (0x000bc6ef) temp_image_control_pane_g

0xd07c,	// (0x000ba045) main_mp3_pane_g1

0x410b,	// (0x000b10d4) main_mp3_pane_g2

0x0007,

0xf72f,	// (0x000bc6f8) main_mp3_pane_g

0xd0df,	// (0x000ba0a8) main_mp3_pane_t1

0xab28,	// (0x000b7af1) main_camera_pane_g8_ParamLimits

0xab28,	// (0x000b7af1) main_camera_pane_g8

0x0cdc,	// (0x000adca5) main_video_pane_g7_ParamLimits

0x0cdc,	// (0x000adca5) main_video_pane_g7

0xa02d,	// (0x000b6ff6) main_camera2_pane_t7_ParamLimits

0xa02d,	// (0x000b6ff6) main_camera2_pane_t7

0xac74,	// (0x000b7c3d) scroll_pane_cp025_ParamLimits

0xac74,	// (0x000b7c3d) scroll_pane_cp025

0xac88,	// (0x000b7c51) scroll_pane_cp026_ParamLimits

0xac88,	// (0x000b7c51) scroll_pane_cp026

0xac97,	// (0x000b7c60) wml_content_pane_ParamLimits

0xf0b4,	// (0x000bc07d) main_touch_calib_pane

0x41dd,	// (0x000b11a6) main_touch_calib_pane_g1

0x41ef,	// (0x000b11b8) main_touch_calib_pane_g2

0x4201,	// (0x000b11ca) main_touch_calib_pane_g3

0x4213,	// (0x000b11dc) main_touch_calib_pane_g4

0x0003,

0xf74d,	// (0x000bc716) main_touch_calib_pane_g

0x4225,	// (0x000b11ee) main_touch_calib_pane_t1

0x423f,	// (0x000b1208) main_touch_calib_pane_t2

0x0004,

0xf756,	// (0x000bc71f) main_touch_calib_pane_t

0xb3fa,	// (0x000b83c3) mup_progress_pane_cp02

0xb42f,	// (0x000b83f8) navi_pane_g1

0xb4ea,	// (0x000b84b3) navi_pane_mp_t3

0x9650,	// (0x000b6619) main_mp3_pane_ParamLimits

0x3649,	// (0x000b0612) navi_pane_ParamLimits

0xd07c,	// (0x000ba045) main_mp3_pane_g1_ParamLimits

0x410b,	// (0x000b10d4) main_mp3_pane_g2_ParamLimits

0x4117,	// (0x000b10e0) main_mp3_pane_g3_ParamLimits

0x4117,	// (0x000b10e0) main_mp3_pane_g3

0x4125,	// (0x000b10ee) main_mp3_pane_g4_ParamLimits

0x4125,	// (0x000b10ee) main_mp3_pane_g4

0xd0ac,	// (0x000ba075) main_mp3_pane_g5_ParamLimits

0xd0ac,	// (0x000ba075) main_mp3_pane_g5

0xd0ba,	// (0x000ba083) main_mp3_pane_g6_ParamLimits

0xd0ba,	// (0x000ba083) main_mp3_pane_g6

0xd0c7,	// (0x000ba090) main_mp3_pane_g7_ParamLimits

0xd0c7,	// (0x000ba090) main_mp3_pane_g7

0xd0d3,	// (0x000ba09c) main_mp3_pane_g8_ParamLimits

0xd0d3,	// (0x000ba09c) main_mp3_pane_g8

0xf72f,	// (0x000bc6f8) main_mp3_pane_g_ParamLimits

0x4131,	// (0x000b10fa) main_mp3_pane_t2

0x413f,	// (0x000b1108) main_mp3_pane_t3

0xd0ed,	// (0x000ba0b6) main_mp3_pane_t4

0xd0fb,	// (0x000ba0c4) main_mp3_pane_t5

0x0005,

0xf740,	// (0x000bc709) main_mp3_pane_t

0xd109,	// (0x000ba0d2) mup_progress_pane_cp01

0xf0be,	// (0x000bc087) aid_zoom_text_secondary2

0xced9,	// (0x000b9ea2) list_cale_ev2_pane

0xcee1,	// (0x000b9eaa) scroll_pane_cp023_ParamLimits

0x4299,	// (0x000b1262) field_cale_ev2_pane_ParamLimits

0x4299,	// (0x000b1262) field_cale_ev2_pane

0x42bd,	// (0x000b1286) field_cale_ev2_pane_g1_ParamLimits

0x42bd,	// (0x000b1286) field_cale_ev2_pane_g1

0x42c9,	// (0x000b1292) field_cale_ev2_pane_g2_ParamLimits

0x42c9,	// (0x000b1292) field_cale_ev2_pane_g2

0x42e1,	// (0x000b12aa) field_cale_ev2_pane_g3_ParamLimits

0x42e1,	// (0x000b12aa) field_cale_ev2_pane_g3

0x0003,

0xf761,	// (0x000bc72a) field_cale_ev2_pane_g_ParamLimits

0xf761,	// (0x000bc72a) field_cale_ev2_pane_g

0x42f9,	// (0x000b12c2) field_cale_ev2_pane_t1_ParamLimits

0x42f9,	// (0x000b12c2) field_cale_ev2_pane_t1

0x4310,	// (0x000b12d9) field_cale_ev2_pane_t2_ParamLimits

0x4310,	// (0x000b12d9) field_cale_ev2_pane_t2

0x0001,

0xf76a,	// (0x000bc733) field_cale_ev2_pane_t_ParamLimits

0xf76a,	// (0x000bc733) field_cale_ev2_pane_t

0x2ac8,	// (0x000afa91) main_postcard_pane_g5_ParamLimits

0x2ac8,	// (0x000afa91) main_postcard_pane_g5

0x2ade,	// (0x000afaa7) main_postcard_pane_g6_ParamLimits

0x2ade,	// (0x000afaa7) main_postcard_pane_g6

0x0a88,	// (0x000ada51) camera2_autofocus_pane_cp_ParamLimits

0x0a88,	// (0x000ada51) camera2_autofocus_pane_cp

0x9650,	// (0x000b6619) main_mup3_pane

0x436f,	// (0x000b1338) main_mup3_pane_g1_ParamLimits

0x436f,	// (0x000b1338) main_mup3_pane_g1

0x4391,	// (0x000b135a) main_mup3_pane_g2_ParamLimits

0x4391,	// (0x000b135a) main_mup3_pane_g2

0x440c,	// (0x000b13d5) main_mup3_pane_g3_ParamLimits

0x440c,	// (0x000b13d5) main_mup3_pane_g3

0x4476,	// (0x000b143f) main_mup3_pane_g4_ParamLimits

0x4476,	// (0x000b143f) main_mup3_pane_g4

0x44e0,	// (0x000b14a9) main_mup3_pane_g5_ParamLimits

0x44e0,	// (0x000b14a9) main_mup3_pane_g5

0x454a,	// (0x000b1513) main_mup3_pane_g6_ParamLimits

0x454a,	// (0x000b1513) main_mup3_pane_g6

0xd111,	// (0x000ba0da) main_mup3_pane_g7_ParamLimits

0xd111,	// (0x000ba0da) main_mup3_pane_g7

0x0007,

0xf77a,	// (0x000bc743) main_mup3_pane_g_ParamLimits

0xf77a,	// (0x000bc743) main_mup3_pane_g

0x45ca,	// (0x000b1593) main_mup3_pane_t1_ParamLimits

0x45ca,	// (0x000b1593) main_mup3_pane_t1

0x463c,	// (0x000b1605) main_mup3_pane_t2_ParamLimits

0x463c,	// (0x000b1605) main_mup3_pane_t2

0x470e,	// (0x000b16d7) main_mup3_pane_t4_ParamLimits

0x470e,	// (0x000b16d7) main_mup3_pane_t4

0x476c,	// (0x000b1735) main_mup3_pane_t5_ParamLimits

0x476c,	// (0x000b1735) main_mup3_pane_t5

0x4828,	// (0x000b17f1) main_mup3_pane_t6_ParamLimits

0x4828,	// (0x000b17f1) main_mup3_pane_t6

0x0005,

0xf78b,	// (0x000bc754) main_mup3_pane_t_ParamLimits

0xf78b,	// (0x000bc754) main_mup3_pane_t

0x48e0,	// (0x000b18a9) mup3_progress_pane_ParamLimits

0x48e0,	// (0x000b18a9) mup3_progress_pane

0x4978,	// (0x000b1941) popup_mup3_control_window_ParamLimits

0x4978,	// (0x000b1941) popup_mup3_control_window

0xd11f,	// (0x000ba0e8) popup_mup3_text_window

0x49ae,	// (0x000b1977) mup3_progress_pane_t1

0x49cd,	// (0x000b1996) mup3_progress_pane_t2

0xd127,	// (0x000ba0f0) mup3_progress_pane_t3

0x0002,

0xf798,	// (0x000bc761) mup3_progress_pane_t

0xd144,	// (0x000ba10d) mup_progress_pane_cp03

0x9646,	// (0x000b660f) bg_tb_trans_pane_cp04

0x49ec,	// (0x000b19b5) mup3_volume_pane

0x49f4,	// (0x000b19bd) popup_mup3_control_window_g1

0x49fd,	// (0x000b19c6) mup3_volume_pane_g1

0x4a06,	// (0x000b19cf) mup3_volume_pane_g2

0x4a0f,	// (0x000b19d8) mup3_volume_pane_g3

0x0002,

0xf79f,	// (0x000bc768) mup3_volume_pane_g

0x9646,	// (0x000b660f) bg_tb_trans_pane_cp03

0xd154,	// (0x000ba11d) popup_mup3_text_window_g1

0xd15c,	// (0x000ba125) popup_mup3_text_window_t1

0xa9a2,	// (0x000b796b) list_calc_item_pane_g1_ParamLimits

0xcbac,	// (0x000b9b75) mup_volume_pane_cp_g1

0x4259,	// (0x000b1222) main_touch_calib_pane_t3

0x426d,	// (0x000b1236) main_touch_calib_pane_t4

0x4283,	// (0x000b124c) main_touch_calib_pane_t5

0xfca8,	// (0x000acc71) aid_cell_size_toolbar2

0xf0a8,	// (0x000bc071) aid_popup3_width_pane

0xfcec,	// (0x000accb5) aid_zoom_text_msg_primary

0x0a7a,	// (0x000ada43) vorec_t7

0xa966,	// (0x000b792f) bg_calc_paper_pane_g1_ParamLimits

0xa972,	// (0x000b793b) bg_calc_paper_pane_g2_ParamLimits

0xa97e,	// (0x000b7947) bg_calc_paper_pane_g3_ParamLimits

0xa98a,	// (0x000b7953) bg_calc_paper_pane_g4_ParamLimits

0xa996,	// (0x000b795f) bg_calc_paper_pane_g5_ParamLimits

0x02d2,	// (0x000ad29b) bg_calc_paper_pane_g6_ParamLimits

0x02e0,	// (0x000ad2a9) bg_calc_paper_pane_g7_ParamLimits

0x02ee,	// (0x000ad2b7) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x000bc11d) bg_calc_paper_pane_g_ParamLimits

0x0301,	// (0x000ad2ca) calc_bg_paper_pane_g9_ParamLimits

0x0bea,	// (0x000adbb3) image_qvga_pane_ParamLimits

0x0bea,	// (0x000adbb3) image_qvga_pane

0x9d01,	// (0x000b6cca) bg_popup_sub_pane_cp04_ParamLimits

0xb768,	// (0x000b8731) popup_mup_playback_window_g1_ParamLimits

0xb774,	// (0x000b873d) popup_mup_playback_window_t1_ParamLimits

0xb789,	// (0x000b8752) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x000bc4a7) popup_mup_playback_window_t_ParamLimits

0x3d45,	// (0x000b0d0e) main_mup2_pane_g3_ParamLimits

0x3d45,	// (0x000b0d0e) main_mup2_pane_g3

0x0fd4,	// (0x000adf9d) popup_toolbar_window_cp04

0xbc33,	// (0x000b8bfc) popup_call2_audio_second_window_g3_ParamLimits

0xbc33,	// (0x000b8bfc) popup_call2_audio_second_window_g3

0xc03d,	// (0x000b9006) popup_call2_audio_first_window_g4_ParamLimits

0xc03d,	// (0x000b9006) popup_call2_audio_first_window_g4

0xc6bc,	// (0x000b9685) popup_call2_audio_in_window_g4_ParamLimits

0xc6bc,	// (0x000b9685) popup_call2_audio_in_window_g4

0x2c12,	// (0x000afbdb) aid_area_sk_bg_cut_ParamLimits

0x2c12,	// (0x000afbdb) aid_area_sk_bg_cut

0xb79e,	// (0x000b8767) aid_area_sk_bg_cut_2_ParamLimits

0xb79e,	// (0x000b8767) aid_area_sk_bg_cut_2

0x4059,	// (0x000b1022) aid_placing_details_win

0x4061,	// (0x000b102a) aid_placing_details_win_2

0xcfbe,	// (0x000b9f87) camera2_autofocus_pane_g1_ParamLimits

0xfeda,	// (0x000acea3) popup_fixed_preview_cale_window_ParamLimits

0xfeda,	// (0x000acea3) popup_fixed_preview_cale_window

0xb56a,	// (0x000b8533) navi_slider_pane_g3

0xb573,	// (0x000b853c) navi_slider_pane_g4

0xb57c,	// (0x000b8545) navi_slider_pane_g5

0xb56a,	// (0x000b8533) navi_slider_pane_g6

0x9ece,	// (0x000b6e97) navi_slider_pane_g7

0xb69f,	// (0x000b8668) mup_scale_pane_g3

0xb6a8,	// (0x000b8671) mup_scale_pane_g4

0xb6b1,	// (0x000b867a) mup_scale_pane_g5

0x290c,	// (0x000af8d5) mup_scale_pane_g6

0x2915,	// (0x000af8de) mup_scale_pane_g7

0xb56a,	// (0x000b8533) cams2_slider_pane_g3

0xcc2e,	// (0x000b9bf7) cams2_slider_pane_g4

0xa093,	// (0x000b705c) cams2_slider_pane_g5

0xb56a,	// (0x000b8533) cams2_slider_pane_g6

0xa09b,	// (0x000b7064) cams2_slider_pane_g7

0xce5f,	// (0x000b9e28) camera2_autofocus_pane_cp_g1

0xca1b,	// (0x000b99e4) bg_popup_preview_window_pane_cp02_ParamLimits

0xca1b,	// (0x000b99e4) bg_popup_preview_window_pane_cp02

0xd16a,	// (0x000ba133) list_fp_cale_pane_ParamLimits

0xd16a,	// (0x000ba133) list_fp_cale_pane

0xd176,	// (0x000ba13f) popup_fixed_preview_cale_window_t1_ParamLimits

0xd176,	// (0x000ba13f) popup_fixed_preview_cale_window_t1

0x4a18,	// (0x000b19e1) popup_fixed_preview_cale_window_t2_ParamLimits

0x4a18,	// (0x000b19e1) popup_fixed_preview_cale_window_t2

0x4a2d,	// (0x000b19f6) popup_fixed_preview_cale_window_t3_ParamLimits

0x4a2d,	// (0x000b19f6) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a6,	// (0x000bc76f) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a6,	// (0x000bc76f) popup_fixed_preview_cale_window_t

0x4a44,	// (0x000b1a0d) list_single_fp_cale_pane_ParamLimits

0x4a44,	// (0x000b1a0d) list_single_fp_cale_pane

0xd194,	// (0x000ba15d) list_single_fp_cale_pane_g1_ParamLimits

0xd194,	// (0x000ba15d) list_single_fp_cale_pane_g1

0xd1a0,	// (0x000ba169) list_single_fp_cale_pane_g2_ParamLimits

0xd1a0,	// (0x000ba169) list_single_fp_cale_pane_g2

0x0002,

0xf7ad,	// (0x000bc776) list_single_fp_cale_pane_g_ParamLimits

0xf7ad,	// (0x000bc776) list_single_fp_cale_pane_g

0xd1b9,	// (0x000ba182) list_single_fp_cale_pane_t1_ParamLimits

0xd1b9,	// (0x000ba182) list_single_fp_cale_pane_t1

0xd1cb,	// (0x000ba194) list_single_fp_cale_pane_t2_ParamLimits

0xd1cb,	// (0x000ba194) list_single_fp_cale_pane_t2

0x0001,

0xf7b4,	// (0x000bc77d) list_single_fp_cale_pane_t_ParamLimits

0xf7b4,	// (0x000bc77d) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf0b4,	// (0x000bc07d) main_dialer_pane

0x4a5c,	// (0x000b1a25) aid_cell_size_keypad

0x4a66,	// (0x000b1a2f) dialer_ne_pane

0x4a70,	// (0x000b1a39) grid_dialer_command_1_pane

0x4a78,	// (0x000b1a41) grid_dialer_command_2_pane

0x4a80,	// (0x000b1a49) grid_dialer_keypad_pane

0x4a94,	// (0x000b1a5d) bg_popup_call_pane_cp06_ParamLimits

0x4a94,	// (0x000b1a5d) bg_popup_call_pane_cp06

0x4aa0,	// (0x000b1a69) dialer_ne_clear_pane_ParamLimits

0x4aa0,	// (0x000b1a69) dialer_ne_clear_pane

0xd1fe,	// (0x000ba1c7) dialer_ne_pane_g1

0xd206,	// (0x000ba1cf) dialer_ne_pane_t1_ParamLimits

0xd206,	// (0x000ba1cf) dialer_ne_pane_t1

0x4aac,	// (0x000b1a75) dialer_ne_pane_t2_ParamLimits

0x4aac,	// (0x000b1a75) dialer_ne_pane_t2

0x4ad6,	// (0x000b1a9f) dialer_ne_pane_t3_ParamLimits

0x4ad6,	// (0x000b1a9f) dialer_ne_pane_t3

0x0002,

0xf7b9,	// (0x000bc782) dialer_ne_pane_t_ParamLimits

0xf7b9,	// (0x000bc782) dialer_ne_pane_t

0x4b06,	// (0x000b1acf) dialer_ne_pane_t3_copy1_ParamLimits

0x4b06,	// (0x000b1acf) dialer_ne_pane_t3_copy1

0x4b35,	// (0x000b1afe) cell_dialer_keypad_pane_ParamLimits

0x4b35,	// (0x000b1afe) cell_dialer_keypad_pane

0x4b4c,	// (0x000b1b15) cell_dialer_command_1_pane_ParamLimits

0x4b4c,	// (0x000b1b15) cell_dialer_command_1_pane

0x4b62,	// (0x000b1b2b) cell_dialer_command_2_pane_ParamLimits

0x4b62,	// (0x000b1b2b) cell_dialer_command_2_pane

0xd218,	// (0x000ba1e1) bg_button_pane_cp02_ParamLimits

0xd218,	// (0x000ba1e1) bg_button_pane_cp02

0x4b71,	// (0x000b1b3a) cell_dialer_keypad_pane_g1_ParamLimits

0x4b71,	// (0x000b1b3a) cell_dialer_keypad_pane_g1

0xd218,	// (0x000ba1e1) bg_button_pane_cp03_ParamLimits

0xd218,	// (0x000ba1e1) bg_button_pane_cp03

0x4b82,	// (0x000b1b4b) cell_dialer_command_1_pane_g1_ParamLimits

0x4b82,	// (0x000b1b4b) cell_dialer_command_1_pane_g1

0xd224,	// (0x000ba1ed) bg_button_pane_cp04

0x4b96,	// (0x000b1b5f) cell_dialer_command_2_pane_g1

0xab0b,	// (0x000b7ad4) bg_button_pane_cp06

0xd22c,	// (0x000ba1f5) dialer_ne_clear_pane_g1

0xb43b,	// (0x000b8404) navi_pane_g2

0xb469,	// (0x000b8432) navi_pane_g3

0x0002,

0xf3e1,	// (0x000bc3aa) navi_pane_g

0xb4f8,	// (0x000b84c1) navi_pane_mv_g2

0xb521,	// (0x000b84ea) navi_pane_mv_g5

0x2474,	// (0x000af43d) navi_pane_mv_t1

0xa95a,	// (0x000b7923) main_clock2_pane

0xbb84,	// (0x000b8b4d) main_clock2_list_pane_ParamLimits

0xbb84,	// (0x000b8b4d) main_clock2_list_pane

0x4c02,	// (0x000b1bcb) main_clock2_pane_t1_ParamLimits

0x4c02,	// (0x000b1bcb) main_clock2_pane_t1

0x4c3d,	// (0x000b1c06) main_clock2_pane_t2_ParamLimits

0x4c3d,	// (0x000b1c06) main_clock2_pane_t2

0x0004,

0xf7c5,	// (0x000bc78e) main_clock2_pane_t_ParamLimits

0xf7c5,	// (0x000bc78e) main_clock2_pane_t

0x4cdc,	// (0x000b1ca5) popup_clock_analogue_window_cp03_ParamLimits

0x4cdc,	// (0x000b1ca5) popup_clock_analogue_window_cp03

0x4d01,	// (0x000b1cca) popup_clock_digital_window_cp02_ParamLimits

0x4d01,	// (0x000b1cca) popup_clock_digital_window_cp02

0x4d7a,	// (0x000b1d43) main_clock2_list_single_pane_ParamLimits

0x4d7a,	// (0x000b1d43) main_clock2_list_single_pane

0xab0b,	// (0x000b7ad4) list_highlight_pane_cp05

0xd264,	// (0x000ba22d) main_clock2_list_single_pane_t1

0x0fd4,	// (0x000adf9d) popup_toolbar_window_cp04_ParamLimits

0x40c8,	// (0x000b1091) camera2_autofocus_pane_g2_ParamLimits

0x40c8,	// (0x000b1091) camera2_autofocus_pane_g2

0x40d4,	// (0x000b109d) camera2_autofocus_pane_g3_ParamLimits

0x40d4,	// (0x000b109d) camera2_autofocus_pane_g3

0x40e0,	// (0x000b10a9) camera2_autofocus_pane_g4_ParamLimits

0x40e0,	// (0x000b10a9) camera2_autofocus_pane_g4

0x40ec,	// (0x000b10b5) camera2_autofocus_pane_g5_ParamLimits

0x40ec,	// (0x000b10b5) camera2_autofocus_pane_g5

0x0004,

0xf709,	// (0x000bc6d2) camera2_autofocus_pane_g_ParamLimits

0xf709,	// (0x000bc6d2) camera2_autofocus_pane_g

0x4325,	// (0x000b12ee) camera2_autofocus_pane_cp_g2

0x432d,	// (0x000b12f6) camera2_autofocus_pane_cp_g3

0x4335,	// (0x000b12fe) camera2_autofocus_pane_cp_g4

0x433d,	// (0x000b1306) camera2_autofocus_pane_cp_g5

0x0004,

0xf76f,	// (0x000bc738) camera2_autofocus_pane_cp_g

0x4a8c,	// (0x000b1a55) popup_dialer_spcha_window

0x9646,	// (0x000b660f) bg_popup_sub_pane_cp07

0xd272,	// (0x000ba23b) list_spcha_pane

0xd27a,	// (0x000ba243) list_single_spcha_pane_ParamLimits

0xd27a,	// (0x000ba243) list_single_spcha_pane

0x9646,	// (0x000b660f) list_highlight_pane_cp06

0xd28b,	// (0x000ba254) list_single_spcha_pane_t1

0xc466,	// (0x000b942f) popup_call2_audio_out_window_g4_ParamLimits

0xc466,	// (0x000b942f) popup_call2_audio_out_window_g4

0xf0b4,	// (0x000bc07d) main_imed2_pane

0x9fb8,	// (0x000b6f81) popup_imed_adjust2_window

0x34a8,	// (0x000b0471) popup_imed_trans_window_ParamLimits

0x34a8,	// (0x000b0471) popup_imed_trans_window

0xcc97,	// (0x000b9c60) popup_blid_sat_info2_window_t1

0xcca5,	// (0x000b9c6e) popup_blid_sat_info2_window_t2

0x000a,

0xf69e,	// (0x000bc667) popup_blid_sat_info2_window_t

0x4e35,	// (0x000b1dfe) aid_size_cell_colour_35

0x4e55,	// (0x000b1e1e) aid_size_cell_colour_112

0x4e75,	// (0x000b1e3e) aid_size_cell_effect

0xca27,	// (0x000b99f0) bg_tb_trans_pane_cp02

0xafc5,	// (0x000b7f8e) heading_imed_pane

0x4e95,	// (0x000b1e5e) listscroll_imed_pane

0xd299,	// (0x000ba262) heading_imed_pane_g1

0xd2a1,	// (0x000ba26a) heading_imed_pane_t1

0xd2af,	// (0x000ba278) grid_imed_colour_35_pane_ParamLimits

0xd2af,	// (0x000ba278) grid_imed_colour_35_pane

0x4ea1,	// (0x000b1e6a) grid_imed_effect_pane

0xd2cb,	// (0x000ba294) list_imed_aspect_pane

0x4eb8,	// (0x000b1e81) scroll_pane_cp027_ParamLimits

0x4eb8,	// (0x000b1e81) scroll_pane_cp027

0x4ec9,	// (0x000b1e92) cell_imed_effect_pane_ParamLimits

0x4ec9,	// (0x000b1e92) cell_imed_effect_pane

0xd2d3,	// (0x000ba29c) cell_imed_colour_pane_ParamLimits

0xd2d3,	// (0x000ba29c) cell_imed_colour_pane

0xd31d,	// (0x000ba2e6) cell_imed_colour_pane_g1_ParamLimits

0xd31d,	// (0x000ba2e6) cell_imed_colour_pane_g1

0xd32e,	// (0x000ba2f7) hgihlgiht_grid_pane_cp016_ParamLimits

0xd32e,	// (0x000ba2f7) hgihlgiht_grid_pane_cp016

0x4ef4,	// (0x000b1ebd) cell_imed_effect_pane_g1

0x4efc,	// (0x000b1ec5) grid_highlight_pane_cp017

0xd33f,	// (0x000ba308) list_imed_single_pane_ParamLimits

0xd33f,	// (0x000ba308) list_imed_single_pane

0x9646,	// (0x000b660f) list_highlight_pane_cp07

0xd353,	// (0x000ba31c) list_imed_aspect_pane_comp1_t1

0xca27,	// (0x000b99f0) bg_tb_trans_pane_cp05

0xd375,	// (0x000ba33e) popup_imed_adjust2_window_g1

0xd39c,	// (0x000ba365) popup_imed_adjust2_window_t1

0xd3b4,	// (0x000ba37d) slider_imed_adjust_pane

0xd3c8,	// (0x000ba391) slider_imed_adjust_pane_g1

0xd3d8,	// (0x000ba3a1) slider_imed_adjust_pane_g2

0xd3e8,	// (0x000ba3b1) slider_imed_adjust_pane_g3

0xd3f9,	// (0x000ba3c2) slider_imed_adjust_pane_g4

0x0003,

0xf7e2,	// (0x000bc7ab) slider_imed_adjust_pane_g

0x4f05,	// (0x000b1ece) aid_size_cell_clipart2

0xd40a,	// (0x000ba3d3) grid_imed_clipart_pane

0xd414,	// (0x000ba3dd) scroll_pane_cp031

0x4f11,	// (0x000b1eda) cell_imed_clipart_pane_ParamLimits

0x4f11,	// (0x000b1eda) cell_imed_clipart_pane

0x4f2e,	// (0x000b1ef7) cell_imed_clipart_pane_g1

0x9646,	// (0x000b660f) grid_highlight_pane_cp014

0x4be0,	// (0x000b1ba9) main_clock2_pane_g1_ParamLimits

0x4be0,	// (0x000b1ba9) main_clock2_pane_g1

0x4d21,	// (0x000b1cea) aid_call2_pane_cp10

0x4d33,	// (0x000b1cfc) aid_call_pane_cp10

0xb39a,	// (0x000b8363) popup_clock_analogue_window_cp10_g1

0xb39a,	// (0x000b8363) popup_clock_analogue_window_cp10_g2

0x4d45,	// (0x000b1d0e) popup_clock_analogue_window_cp10_g3

0x4d45,	// (0x000b1d0e) popup_clock_analogue_window_cp10_g4

0xb39a,	// (0x000b8363) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d0,	// (0x000bc799) popup_clock_analogue_window_cp10_g

0x4d5b,	// (0x000b1d24) popup_clock_analogue_window_cp10_t1

0x4d8c,	// (0x000b1d55) clock_digital_number_pane_cp10_ParamLimits

0x4d8c,	// (0x000b1d55) clock_digital_number_pane_cp10

0x4da6,	// (0x000b1d6f) clock_digital_number_pane_cp11_ParamLimits

0x4da6,	// (0x000b1d6f) clock_digital_number_pane_cp11

0x4dc0,	// (0x000b1d89) clock_digital_number_pane_cp12_ParamLimits

0x4dc0,	// (0x000b1d89) clock_digital_number_pane_cp12

0x4ddc,	// (0x000b1da5) clock_digital_number_pane_cp13_ParamLimits

0x4ddc,	// (0x000b1da5) clock_digital_number_pane_cp13

0x4df8,	// (0x000b1dc1) clock_digital_separator_pane_cp10_ParamLimits

0x4df8,	// (0x000b1dc1) clock_digital_separator_pane_cp10

0x4e14,	// (0x000b1ddd) popup_clock_digital_window_cp02_t1_ParamLimits

0x4e14,	// (0x000b1ddd) popup_clock_digital_window_cp02_t1

0x9cf9,	// (0x000b6cc2) clock_digital_number_pane_cp10_g1

0x9cf9,	// (0x000b6cc2) clock_digital_number_pane_cp10_g2

0x0001,

0xf7eb,	// (0x000bc7b4) clock_digital_number_pane_cp10_g

0x9cf9,	// (0x000b6cc2) clock_digital_separator_pane_cp10_g1

0x9cf9,	// (0x000b6cc2) clock_digital_separator_pane_g2_cp10

0xb529,	// (0x000b84f2) navi_pane_vded_g4

0xb532,	// (0x000b84fb) navi_pane_vded_g5

0xb53b,	// (0x000b8504) navi_pane_vded_t1

0xf0b4,	// (0x000bc07d) main_vded_pane

0x4f37,	// (0x000b1f00) main_vded_pane_g1

0x4f43,	// (0x000b1f0c) main_vded_pane_g2

0x4f4f,	// (0x000b1f18) main_vded_pane_g3

0x0002,

0xf7f0,	// (0x000bc7b9) main_vded_pane_g

0x4f5b,	// (0x000b1f24) main_vded_pane_t1

0x4f69,	// (0x000b1f32) main_vded_pane_t2

0x0001,

0xf7f7,	// (0x000bc7c0) main_vded_pane_t

0x4f77,	// (0x000b1f40) vded_slider_pane

0x4f81,	// (0x000b1f4a) vded_video_pane

0xd41c,	// (0x000ba3e5) vded_video_pane_g1

0x4f8d,	// (0x000b1f56) vded_video_pane_g2

0xce5f,	// (0x000b9e28) vded_video_pane_g3

0x0002,

0xf7fc,	// (0x000bc7c5) vded_video_pane_g

0xd426,	// (0x000ba3ef) vded_slider_pane_g1

0xcbac,	// (0x000b9b75) vded_slider_pane_g2

0xd42f,	// (0x000ba3f8) vded_slider_pane_g3

0xd438,	// (0x000ba401) vded_slider_pane_g4

0xd441,	// (0x000ba40a) vded_slider_pane_g5

0x0004,

0xf803,	// (0x000bc7cc) vded_slider_pane_g

0x4962,	// (0x000b192b) mup3_rocker_pane_ParamLimits

0x4962,	// (0x000b192b) mup3_rocker_pane

0x4f96,	// (0x000b1f5f) mup3_control_keys_pane_g1

0x4f9e,	// (0x000b1f67) mup3_control_keys_pane_g2

0x4fa6,	// (0x000b1f6f) mup3_control_keys_pane_g3

0x4fae,	// (0x000b1f77) mup3_control_keys_pane_g4

0x0003,

0xf80e,	// (0x000bc7d7) mup3_control_keys_pane_g

0xff19,	// (0x000acee2) popup_toolbar2_fixed_window_cp01_ParamLimits

0xff19,	// (0x000acee2) popup_toolbar2_fixed_window_cp01

0x4998,	// (0x000b1961) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4998,	// (0x000b1961) popup_toolbar2_fixed_window_cp02

0xbda5,	// (0x000b8d6e) popup_call2_audio_second_window_t4_ParamLimits

0xbda5,	// (0x000b8d6e) popup_call2_audio_second_window_t4

0xc2d3,	// (0x000b929c) popup_call2_audio_first_window_t6_ParamLimits

0xc2d3,	// (0x000b929c) popup_call2_audio_first_window_t6

0xc569,	// (0x000b9532) popup_call2_audio_out_window_t6_ParamLimits

0xc569,	// (0x000b9532) popup_call2_audio_out_window_t6

0xf0b4,	// (0x000bc07d) main_vitu_pane

0x4fbe,	// (0x000b1f87) aid_size_cell_itu_ParamLimits

0x4fbe,	// (0x000b1f87) aid_size_cell_itu

0xbb84,	// (0x000b8b4d) bg_popup_window_pane_cp08_ParamLimits

0xbb84,	// (0x000b8b4d) bg_popup_window_pane_cp08

0x4fd4,	// (0x000b1f9d) field_vitu_entry_pane_ParamLimits

0x4fd4,	// (0x000b1f9d) field_vitu_entry_pane

0x4feb,	// (0x000b1fb4) grid_vitu_function_pane_ParamLimits

0x4feb,	// (0x000b1fb4) grid_vitu_function_pane

0x5006,	// (0x000b1fcf) grid_vitu_itu_pane_ParamLimits

0x5006,	// (0x000b1fcf) grid_vitu_itu_pane

0x5024,	// (0x000b1fed) cell_vitu_itu_pane_ParamLimits

0x5024,	// (0x000b1fed) cell_vitu_itu_pane

0x504a,	// (0x000b2013) cell_vitu_function_pane_ParamLimits

0x504a,	// (0x000b2013) cell_vitu_function_pane

0xbb84,	// (0x000b8b4d) bg_popup_sub_pane_cp08_ParamLimits

0xbb84,	// (0x000b8b4d) bg_popup_sub_pane_cp08

0x5065,	// (0x000b202e) field_vitu_entry_pane_t1_ParamLimits

0x5065,	// (0x000b202e) field_vitu_entry_pane_t1

0xd462,	// (0x000ba42b) field_vitu_entry_pane_t2_ParamLimits

0xd462,	// (0x000ba42b) field_vitu_entry_pane_t2

0x0001,

0xf81c,	// (0x000bc7e5) field_vitu_entry_pane_t_ParamLimits

0xf81c,	// (0x000bc7e5) field_vitu_entry_pane_t

0xd47f,	// (0x000ba448) bg_button_pane_cp05_ParamLimits

0xd47f,	// (0x000ba448) bg_button_pane_cp05

0x5085,	// (0x000b204e) cell_vitu_itu_pane_g1

0x509d,	// (0x000b2066) cell_vitu_itu_pane_t1_ParamLimits

0x509d,	// (0x000b2066) cell_vitu_itu_pane_t1

0x50af,	// (0x000b2078) cell_vitu_itu_pane_t2_ParamLimits

0x50af,	// (0x000b2078) cell_vitu_itu_pane_t2

0x0002,

0xf821,	// (0x000bc7ea) cell_vitu_itu_pane_t_ParamLimits

0xf821,	// (0x000bc7ea) cell_vitu_itu_pane_t

0xd48d,	// (0x000ba456) bg_button_pane_cp07

0x50e4,	// (0x000b20ad) cell_vitu_function_pane_g1

0x9d88,	// (0x000b6d51) main_calc_pane_g1

0xfce0,	// (0x000acca9) aid_visual_content_pane

0xf0b4,	// (0x000bc07d) main_vradio_pane

0x50ed,	// (0x000b20b6) main_vradio_pane_g1_ParamLimits

0x50ed,	// (0x000b20b6) main_vradio_pane_g1

0xd497,	// (0x000ba460) main_vradio_pane_g2_ParamLimits

0xd497,	// (0x000ba460) main_vradio_pane_g2

0x0001,

0xf828,	// (0x000bc7f1) main_vradio_pane_g_ParamLimits

0xf828,	// (0x000bc7f1) main_vradio_pane_g

0x5104,	// (0x000b20cd) main_vradio_pane_t1_ParamLimits

0x5104,	// (0x000b20cd) main_vradio_pane_t1

0x5119,	// (0x000b20e2) main_vradio_pane_t2_ParamLimits

0x5119,	// (0x000b20e2) main_vradio_pane_t2

0xd4a4,	// (0x000ba46d) main_vradio_pane_t3_ParamLimits

0xd4a4,	// (0x000ba46d) main_vradio_pane_t3

0x0002,

0xf82d,	// (0x000bc7f6) main_vradio_pane_t_ParamLimits

0xf82d,	// (0x000bc7f6) main_vradio_pane_t

0x512e,	// (0x000b20f7) vradio_rocker_control_pane_ParamLimits

0x512e,	// (0x000b20f7) vradio_rocker_control_pane

0x5140,	// (0x000b2109) vradio_station_info_pane_ParamLimits

0x5140,	// (0x000b2109) vradio_station_info_pane

0xd4b8,	// (0x000ba481) vradio_frequency_info_pane_ParamLimits

0xd4b8,	// (0x000ba481) vradio_frequency_info_pane

0xce5f,	// (0x000b9e28) vradio_station_info_pane_g1

0xd4c7,	// (0x000ba490) vradio_station_info_pane_t1_ParamLimits

0xd4c7,	// (0x000ba490) vradio_station_info_pane_t1

0xd4e9,	// (0x000ba4b2) vradio_station_info_pane_t2_ParamLimits

0xd4e9,	// (0x000ba4b2) vradio_station_info_pane_t2

0x0001,

0xf834,	// (0x000bc7fd) vradio_station_info_pane_t_ParamLimits

0xf834,	// (0x000bc7fd) vradio_station_info_pane_t

0xd4fb,	// (0x000ba4c4) vradio_tuning_pane

0xd503,	// (0x000ba4cc) vradio_rocker_control_pane_g1

0xd50b,	// (0x000ba4d4) vradio_rocker_control_pane_g2

0xd513,	// (0x000ba4dc) vradio_rocker_control_pane_g3

0xd51b,	// (0x000ba4e4) vradio_rocker_control_pane_g4

0xd523,	// (0x000ba4ec) vradio_rocker_control_pane_g5

0x0004,

0xf839,	// (0x000bc802) vradio_rocker_control_pane_g

0x5150,	// (0x000b2119) vradio_frequency_info_pane_g1

0xd52b,	// (0x000ba4f4) vradio_frequency_info_pane_t1_ParamLimits

0xd52b,	// (0x000ba4f4) vradio_frequency_info_pane_t1

0x515a,	// (0x000b2123) vradio_tuning_pane_g1

0x5165,	// (0x000b212e) vradio_tuning_pane_t1

0xfd3d,	// (0x000acd06) area_side_right_pane_ParamLimits

0xfd3d,	// (0x000acd06) area_side_right_pane

0xc9e2,	// (0x000b99ab) status_small_pane_g1

0xc9ea,	// (0x000b99b3) status_small_pane_g2

0xc9f3,	// (0x000b99bc) status_small_pane_g3

0xc9fc,	// (0x000b99c5) status_small_pane_g4

0x0003,

0xf5f4,	// (0x000bc5bd) status_small_pane_g

0xca05,	// (0x000b99ce) status_small_pane_t1

0xf0b4,	// (0x000bc07d) main_video3_pane

0xd53f,	// (0x000ba508) cams_zoom_vslider_pane

0xd547,	// (0x000ba510) image3_wide_pane_ParamLimits

0xd547,	// (0x000ba510) image3_wide_pane

0xd561,	// (0x000ba52a) image3_wide_small_pane

0xd56d,	// (0x000ba536) main_video3_pane_g1_ParamLimits

0xd56d,	// (0x000ba536) main_video3_pane_g1

0xd589,	// (0x000ba552) main_video3_pane_g2_ParamLimits

0xd589,	// (0x000ba552) main_video3_pane_g2

0x0001,

0xf844,	// (0x000bc80d) main_video3_pane_g_ParamLimits

0xf844,	// (0x000bc80d) main_video3_pane_g

0xd5a5,	// (0x000ba56e) main_video3_pane_t1_ParamLimits

0xd5a5,	// (0x000ba56e) main_video3_pane_t1

0xd5d0,	// (0x000ba599) main_video3_pane_t2_ParamLimits

0xd5d0,	// (0x000ba599) main_video3_pane_t2

0xd5fd,	// (0x000ba5c6) main_video3_pane_t3_ParamLimits

0xd5fd,	// (0x000ba5c6) main_video3_pane_t3

0x0002,

0xf849,	// (0x000bc812) main_video3_pane_t_ParamLimits

0xf849,	// (0x000bc812) main_video3_pane_t

0xd62a,	// (0x000ba5f3) cams_zoom_vslider_pane_g1

0xd633,	// (0x000ba5fc) cams_zoom_vslider_pane_g2

0x0001,

0xf850,	// (0x000bc819) cams_zoom_vslider_pane_g

0xd63b,	// (0x000ba604) small_slider_vertical_pane

0xce5f,	// (0x000b9e28) small_slider_vertical_pane_g1

0xce5f,	// (0x000b9e28) small_slider_vertical_pane_g2

0xd643,	// (0x000ba60c) small_slider_vertical_pane_g3

0x0002,

0xf855,	// (0x000bc81e) small_slider_vertical_pane_g

0xf0b4,	// (0x000bc07d) main_hwr_training_pane

0xd64c,	// (0x000ba615) hwr_training_instruct_pane_ParamLimits

0xd64c,	// (0x000ba615) hwr_training_instruct_pane

0x5174,	// (0x000b213d) hwr_training_navi_pane_ParamLimits

0x5174,	// (0x000b213d) hwr_training_navi_pane

0x5193,	// (0x000b215c) hwr_training_write_pane_ParamLimits

0x5193,	// (0x000b215c) hwr_training_write_pane

0x9646,	// (0x000b660f) bg_frame_shadow_pane

0xd683,	// (0x000ba64c) hwr_training_write_pane_g1

0xd68b,	// (0x000ba654) hwr_training_write_pane_g2

0xd693,	// (0x000ba65c) hwr_training_write_pane_g3

0xd69b,	// (0x000ba664) hwr_training_write_pane_g4

0xd6a3,	// (0x000ba66c) hwr_training_write_pane_g5

0xd6ab,	// (0x000ba674) hwr_training_write_pane_g6

0xd6b3,	// (0x000ba67c) hwr_training_write_pane_g7

0x0006,

0xf85c,	// (0x000bc825) hwr_training_write_pane_g

0xa0a4,	// (0x000b706d) hwr_training_navi_pane_g1_ParamLimits

0xa0a4,	// (0x000b706d) hwr_training_navi_pane_g1

0xa0b6,	// (0x000b707f) hwr_training_navi_pane_g2_ParamLimits

0xa0b6,	// (0x000b707f) hwr_training_navi_pane_g2

0xa0c8,	// (0x000b7091) hwr_training_navi_pane_g3_ParamLimits

0xa0c8,	// (0x000b7091) hwr_training_navi_pane_g3

0xa0d8,	// (0x000b70a1) hwr_training_navi_pane_g4_ParamLimits

0xa0d8,	// (0x000b70a1) hwr_training_navi_pane_g4

0x0004,

0xf86b,	// (0x000bc834) hwr_training_navi_pane_g_ParamLimits

0xf86b,	// (0x000bc834) hwr_training_navi_pane_g

0xa0e5,	// (0x000b70ae) hwr_training_navi_pane_t1

0x51db,	// (0x000b21a4) list_single_hwr_training_instruct_pane_ParamLimits

0x51db,	// (0x000b21a4) list_single_hwr_training_instruct_pane

0xd6bb,	// (0x000ba684) list_single_hwr_training_instruct_pane_t1

0xcd9f,	// (0x000b9d68) bg_frame_shadow_pane_g1

0xd6ca,	// (0x000ba693) bg_frame_shadow_pane_g2

0xd6d2,	// (0x000ba69b) bg_frame_shadow_pane_g3

0xd6da,	// (0x000ba6a3) bg_frame_shadow_pane_g4

0xd6e2,	// (0x000ba6ab) bg_frame_shadow_pane_g5

0xd6ea,	// (0x000ba6b3) bg_frame_shadow_pane_g6

0xd6f2,	// (0x000ba6bb) bg_frame_shadow_pane_g7

0xaa1c,	// (0x000b79e5) bg_frame_shadow_pane_g8

0x0007,

0xf876,	// (0x000bc83f) bg_frame_shadow_pane_g

0xf0b4,	// (0x000bc07d) main_video_tele_dialer_pane

0x51f7,	// (0x000b21c0) aid_size_cell_video_keypad_ParamLimits

0x51f7,	// (0x000b21c0) aid_size_cell_video_keypad

0x5211,	// (0x000b21da) grid_video_dialer_keypad_pane_ParamLimits

0x5211,	// (0x000b21da) grid_video_dialer_keypad_pane

0x525d,	// (0x000b2226) video_down_pane_cp_ParamLimits

0x525d,	// (0x000b2226) video_down_pane_cp

0x528f,	// (0x000b2258) cell_video_dialer_keypad_pane_ParamLimits

0x528f,	// (0x000b2258) cell_video_dialer_keypad_pane

0xd6fa,	// (0x000ba6c3) bg_button_pane_cp08_ParamLimits

0xd6fa,	// (0x000ba6c3) bg_button_pane_cp08

0x52b5,	// (0x000b227e) cell_video_dialer_keypad_pane_g1_ParamLimits

0x52b5,	// (0x000b227e) cell_video_dialer_keypad_pane_g1

0x494c,	// (0x000b1915) mup3_rocker2_pane_ParamLimits

0x494c,	// (0x000b1915) mup3_rocker2_pane

0xce5f,	// (0x000b9e28) mup3_rocker2_pane_g1

0x3375,	// (0x000b033e) main_dialer2_pane

0xf0b4,	// (0x000bc07d) main_mp4_pane

0xa111,	// (0x000b70da) main_mp4_pane_g1_ParamLimits

0xa111,	// (0x000b70da) main_mp4_pane_g1

0xa111,	// (0x000b70da) main_mp4_pane_g2_ParamLimits

0xa111,	// (0x000b70da) main_mp4_pane_g2

0x52f0,	// (0x000b22b9) main_mp4_pane_g3_ParamLimits

0x52f0,	// (0x000b22b9) main_mp4_pane_g3

0xa11f,	// (0x000b70e8) main_mp4_pane_g4_ParamLimits

0xa11f,	// (0x000b70e8) main_mp4_pane_g4

0xa14d,	// (0x000b7116) main_mp4_pane_g5_ParamLimits

0xa14d,	// (0x000b7116) main_mp4_pane_g5

0x0007,

0xf896,	// (0x000bc85f) main_mp4_pane_g_ParamLimits

0xf896,	// (0x000bc85f) main_mp4_pane_g

0xa1c1,	// (0x000b718a) main_mp4_pane_t1_ParamLimits

0xa1c1,	// (0x000b718a) main_mp4_pane_t1

0xa21d,	// (0x000b71e6) main_mp4_pane_t2_ParamLimits

0xa21d,	// (0x000b71e6) main_mp4_pane_t2

0xd706,	// (0x000ba6cf) main_mp4_pane_t3_ParamLimits

0xd706,	// (0x000ba6cf) main_mp4_pane_t3

0xa26f,	// (0x000b7238) main_mp4_pane_t4_ParamLimits

0xa26f,	// (0x000b7238) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x000bc870) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x000bc870) main_mp4_pane_t

0xa2af,	// (0x000b7278) mp4_progress_pane_ParamLimits

0xa2af,	// (0x000b7278) mp4_progress_pane

0xa2f9,	// (0x000b72c2) mp4_rocker_pane_ParamLimits

0xa2f9,	// (0x000b72c2) mp4_rocker_pane

0xd734,	// (0x000ba6fd) mp4_progress_pane_t1

0xd74d,	// (0x000ba716) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x000bc879) mp4_progress_pane_t

0xd766,	// (0x000ba72f) mup_progress_pane_cp04

0xd779,	// (0x000ba742) mp4_rocker_pane_g1

0x533a,	// (0x000b2303) aid_cell_size_keypad2_ParamLimits

0x533a,	// (0x000b2303) aid_cell_size_keypad2

0x5350,	// (0x000b2319) dialer2_ne_pane_ParamLimits

0x5350,	// (0x000b2319) dialer2_ne_pane

0x5368,	// (0x000b2331) grid_dialer2_keypad_pane_ParamLimits

0x5368,	// (0x000b2331) grid_dialer2_keypad_pane

0xcc3e,	// (0x000b9c07) bg_popup_call_pane_cp07_ParamLimits

0xcc3e,	// (0x000b9c07) bg_popup_call_pane_cp07

0x5384,	// (0x000b234d) dialer2_ne_pane_t1_ParamLimits

0x5384,	// (0x000b234d) dialer2_ne_pane_t1

0x53c4,	// (0x000b238d) cell_dialer2_keypad_pane_ParamLimits

0x53c4,	// (0x000b238d) cell_dialer2_keypad_pane

0xd795,	// (0x000ba75e) bg_button_pane_pane_cp04_ParamLimits

0xd795,	// (0x000ba75e) bg_button_pane_pane_cp04

0x53ea,	// (0x000b23b3) cell_dialer2_keypad_pane_g1_ParamLimits

0x53ea,	// (0x000b23b3) cell_dialer2_keypad_pane_g1

0x0ebb,	// (0x000ade84) aid_placing_vt_set_content_ParamLimits

0x0ebb,	// (0x000ade84) aid_placing_vt_set_content

0x0edf,	// (0x000adea8) aid_placing_vt_set_title_ParamLimits

0x0edf,	// (0x000adea8) aid_placing_vt_set_title

0xf0b4,	// (0x000bc07d) main_image3_pane

0x54b0,	// (0x000b2479) area_side_right_pane_cp01_ParamLimits

0x54b0,	// (0x000b2479) area_side_right_pane_cp01

0xa111,	// (0x000b70da) main_image3_pane_g1_ParamLimits

0xa111,	// (0x000b70da) main_image3_pane_g1

0x54c9,	// (0x000b2492) main_image3_pane_g2_ParamLimits

0x54c9,	// (0x000b2492) main_image3_pane_g2

0x54f1,	// (0x000b24ba) main_image3_pane_g3_ParamLimits

0x54f1,	// (0x000b24ba) main_image3_pane_g3

0x551b,	// (0x000b24e4) main_image3_pane_g4_ParamLimits

0x551b,	// (0x000b24e4) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x000bc888) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x000bc888) main_image3_pane_g

0x5545,	// (0x000b250e) main_image3_pane_t1_ParamLimits

0x5545,	// (0x000b250e) main_image3_pane_t1

0x559d,	// (0x000b2566) main_image3_pane_t2_ParamLimits

0x559d,	// (0x000b2566) main_image3_pane_t2

0x55ef,	// (0x000b25b8) main_image3_pane_t3_ParamLimits

0x55ef,	// (0x000b25b8) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x000bc891) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x000bc891) main_image3_pane_t

0xbb84,	// (0x000b8b4d) grid_sctrl_middle_pane_cp01_ParamLimits

0xbb84,	// (0x000b8b4d) grid_sctrl_middle_pane_cp01

0x5677,	// (0x000b2640) cell_sctrl_middle_pane_cp01_ParamLimits

0x5677,	// (0x000b2640) cell_sctrl_middle_pane_cp01

0x5694,	// (0x000b265d) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5694,	// (0x000b265d) cell_sctrl_middle_pane_cp01_g1

0xf0b4,	// (0x000bc07d) main_call4_pane

0x56a9,	// (0x000b2672) aid_size_button_call4_ParamLimits

0x56a9,	// (0x000b2672) aid_size_button_call4

0x56dc,	// (0x000b26a5) call4_windows_pane_ParamLimits

0x56dc,	// (0x000b26a5) call4_windows_pane

0x56fb,	// (0x000b26c4) grid_call4_button_pane_ParamLimits

0x56fb,	// (0x000b26c4) grid_call4_button_pane

0x5732,	// (0x000b26fb) call4_windows_conf_pane

0x574d,	// (0x000b2716) popup_call4_audio_first_window_ParamLimits

0x574d,	// (0x000b2716) popup_call4_audio_first_window

0x579f,	// (0x000b2768) popup_call4_audio_second_window_ParamLimits

0x579f,	// (0x000b2768) popup_call4_audio_second_window

0x57b8,	// (0x000b2781) popup_call4_audio_wait_window_ParamLimits

0x57b8,	// (0x000b2781) popup_call4_audio_wait_window

0x57c6,	// (0x000b278f) cell_call4_button_pane_ParamLimits

0x57c6,	// (0x000b278f) cell_call4_button_pane

0x57ed,	// (0x000b27b6) bg_button_pane_cp09_ParamLimits

0x57ed,	// (0x000b27b6) bg_button_pane_cp09

0x57f9,	// (0x000b27c2) cell_call4_button_pane_g1_ParamLimits

0x57f9,	// (0x000b27c2) cell_call4_button_pane_g1

0x581f,	// (0x000b27e8) cell_call4_button_pane_t1_ParamLimits

0x581f,	// (0x000b27e8) cell_call4_button_pane_t1

0xd7a9,	// (0x000ba772) popup_call4_audio_conf_window_ParamLimits

0xd7a9,	// (0x000ba772) popup_call4_audio_conf_window

0x49ae,	// (0x000b1977) mup3_progress_pane_t1_ParamLimits

0x49cd,	// (0x000b1996) mup3_progress_pane_t2_ParamLimits

0xd127,	// (0x000ba0f0) mup3_progress_pane_t3_ParamLimits

0xf798,	// (0x000bc761) mup3_progress_pane_t_ParamLimits

0xd144,	// (0x000ba10d) mup_progress_pane_cp03_ParamLimits

0x4fb6,	// (0x000b1f7f) mup3_control_keys_pane_g4_copy1

0xa2dd,	// (0x000b72a6) mp4_rocker2_pane_ParamLimits

0xa2dd,	// (0x000b72a6) mp4_rocker2_pane

0xd7c3,	// (0x000ba78c) mp4_rocker2_pane_g1

0xd7cb,	// (0x000ba794) mp4_rocker2_pane_g2

0xa37f,	// (0x000b7348) mp4_rocker2_pane_g3

0xa387,	// (0x000b7350) mp4_rocker2_pane_g4

0xa38f,	// (0x000b7358) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x000bc89a) mp4_rocker2_pane_g

0xf0b4,	// (0x000bc07d) main_camera4_pane

0xf0b4,	// (0x000bc07d) main_video4_pane

0x522b,	// (0x000b21f4) main_video_tele_dialer_pane_t1_ParamLimits

0x522b,	// (0x000b21f4) main_video_tele_dialer_pane_t1

0x5244,	// (0x000b220d) main_video_tele_dialer_pane_t2_ParamLimits

0x5244,	// (0x000b220d) main_video_tele_dialer_pane_t2

0x0001,

0xf887,	// (0x000bc850) main_video_tele_dialer_pane_t_ParamLimits

0xf887,	// (0x000bc850) main_video_tele_dialer_pane_t

0x585d,	// (0x000b2826) cam4_autofocus_pane_ParamLimits

0x585d,	// (0x000b2826) cam4_autofocus_pane

0x5873,	// (0x000b283c) cam4_image_uncrop_pane_ParamLimits

0x5873,	// (0x000b283c) cam4_image_uncrop_pane

0x588c,	// (0x000b2855) cam4_indicators_pane_ParamLimits

0x588c,	// (0x000b2855) cam4_indicators_pane

0x58bc,	// (0x000b2885) main_camera4_pane_g1_ParamLimits

0x58bc,	// (0x000b2885) main_camera4_pane_g1

0x58ce,	// (0x000b2897) main_camera4_pane_g2_ParamLimits

0x58ce,	// (0x000b2897) main_camera4_pane_g2

0x58e1,	// (0x000b28aa) main_camera4_pane_g3_ParamLimits

0x58e1,	// (0x000b28aa) main_camera4_pane_g3

0x58f4,	// (0x000b28bd) main_camera4_pane_g4_ParamLimits

0x58f4,	// (0x000b28bd) main_camera4_pane_g4

0x5907,	// (0x000b28d0) main_camera4_pane_g5_ParamLimits

0x5907,	// (0x000b28d0) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x000bc8a5) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x000bc8a5) main_camera4_pane_g

0x592b,	// (0x000b28f4) main_camera4_pane_t1_ParamLimits

0x592b,	// (0x000b28f4) main_camera4_pane_t1

0xa3b5,	// (0x000b737e) bg_tb_trans_pane_cp06

0xa3cb,	// (0x000b7394) cam4_indicators_pane_g1

0xa3dc,	// (0x000b73a5) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x000bc8c0) cam4_indicators_pane_g

0xa3f4,	// (0x000b73bd) cam4_indicators_pane_t1

0x598f,	// (0x000b2958) main_video4_pane_g1_ParamLimits

0x598f,	// (0x000b2958) main_video4_pane_g1

0x599e,	// (0x000b2967) main_video4_pane_g2_ParamLimits

0x599e,	// (0x000b2967) main_video4_pane_g2

0x59ad,	// (0x000b2976) main_video4_pane_g3_ParamLimits

0x59ad,	// (0x000b2976) main_video4_pane_g3

0x59bc,	// (0x000b2985) main_video4_pane_g4_ParamLimits

0x59bc,	// (0x000b2985) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x000bc8c7) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x000bc8c7) main_video4_pane_g

0x59da,	// (0x000b29a3) vid4_indicators_pane_ParamLimits

0x59da,	// (0x000b29a3) vid4_indicators_pane

0x5a08,	// (0x000b29d1) video4_image_uncrop_cif_pane_ParamLimits

0x5a08,	// (0x000b29d1) video4_image_uncrop_cif_pane

0x5a22,	// (0x000b29eb) video4_image_uncrop_nhd_pane_ParamLimits

0x5a22,	// (0x000b29eb) video4_image_uncrop_nhd_pane

0x5873,	// (0x000b283c) video4_image_uncrop_vga_pane_ParamLimits

0x5873,	// (0x000b283c) video4_image_uncrop_vga_pane

0x9650,	// (0x000b6619) bg_tb_trans_pane_cp07

0xa422,	// (0x000b73eb) vid4_indicators_pane_g1

0xa438,	// (0x000b7401) vid4_indicators_pane_g2

0xa44c,	// (0x000b7415) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x000bc8d2) vid4_indicators_pane_g

0xa47d,	// (0x000b7446) vid4_indicators_pane_t1

0x5a38,	// (0x000b2a01) cam4_autofocus_pane_g1

0x5a40,	// (0x000b2a09) cam4_autofocus_pane_g2

0x5a48,	// (0x000b2a11) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x000bc8dd) cam4_autofocus_pane_g

0x5a50,	// (0x000b2a19) cam4_autofocus_pane_g3_copy1

0x5273,	// (0x000b223c) video_down_pane_cp_t1

0x5281,	// (0x000b224a) video_down_pane_cp_t2

0x0001,

0xf88c,	// (0x000bc855) video_down_pane_cp_t

0x9650,	// (0x000b6619) popup_vitu2_window_ParamLimits

0x9650,	// (0x000b6619) popup_vitu2_window

0x5a58,	// (0x000b2a21) aid_size_cell2_itu2_ParamLimits

0x5a58,	// (0x000b2a21) aid_size_cell2_itu2

0x5a7e,	// (0x000b2a47) aid_size_cell_itu2_ParamLimits

0x5a7e,	// (0x000b2a47) aid_size_cell_itu2

0x5ade,	// (0x000b2aa7) bg_popup_window_pane_cp09_ParamLimits

0x5ade,	// (0x000b2aa7) bg_popup_window_pane_cp09

0x5aec,	// (0x000b2ab5) field_vitu2_entry_pane_ParamLimits

0x5aec,	// (0x000b2ab5) field_vitu2_entry_pane

0x5b14,	// (0x000b2add) grid_vitu2_function_pane_ParamLimits

0x5b14,	// (0x000b2add) grid_vitu2_function_pane

0x5b65,	// (0x000b2b2e) grid_vitu2_itu_pane_ParamLimits

0x5b65,	// (0x000b2b2e) grid_vitu2_itu_pane

0x5bf5,	// (0x000b2bbe) cell_vitu2_itu_pane_ParamLimits

0x5bf5,	// (0x000b2bbe) cell_vitu2_itu_pane

0x5c22,	// (0x000b2beb) cell_vitu2_function_pane_ParamLimits

0x5c22,	// (0x000b2beb) cell_vitu2_function_pane

0xd7d3,	// (0x000ba79c) bg_popup_call_pane_cp08_ParamLimits

0xd7d3,	// (0x000ba79c) bg_popup_call_pane_cp08

0xd7ea,	// (0x000ba7b3) field_vitu2_entry_pane_g1

0xd7f6,	// (0x000ba7bf) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x000bc8e4) field_vitu2_entry_pane_g

0x5c66,	// (0x000b2c2f) field_vitu2_entry_pane_t1_ParamLimits

0x5c66,	// (0x000b2c2f) field_vitu2_entry_pane_t1

0xa494,	// (0x000b745d) field_vitu2_entry_pane_t2_ParamLimits

0xa494,	// (0x000b745d) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x000bc8eb) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x000bc8eb) field_vitu2_entry_pane_t

0x5c94,	// (0x000b2c5d) bg_button_pane_cp010_ParamLimits

0x5c94,	// (0x000b2c5d) bg_button_pane_cp010

0xa4b1,	// (0x000b747a) cell_vitu2_itu_pane_g1

0x5cb0,	// (0x000b2c79) cell_vitu2_itu_pane_t1_ParamLimits

0x5cb0,	// (0x000b2c79) cell_vitu2_itu_pane_t1

0xfba4,	// (0x000acb6d) cell_vitu2_itu_pane_t2_ParamLimits

0xfba4,	// (0x000acb6d) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x000bc8f5) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x000bc8f5) cell_vitu2_itu_pane_t

0x9650,	// (0x000b6619) bg_button_pane_cp011

0x5d0e,	// (0x000b2cd7) cell_vitu2_function_pane_g1

0xf0b4,	// (0x000bc07d) main_myfav_hc_pane

0x563f,	// (0x000b2608) popup_image3_note_pane_ParamLimits

0x563f,	// (0x000b2608) popup_image3_note_pane

0x565b,	// (0x000b2624) popup_image3_tool_bar_pane_ParamLimits

0x565b,	// (0x000b2624) popup_image3_tool_bar_pane

0xfc32,	// (0x000acbfb) cell_vitu2_itu_pane_t3_ParamLimits

0xfc32,	// (0x000acbfb) cell_vitu2_itu_pane_t3

0x9646,	// (0x000b660f) bg_popup_trans_pane

0xd818,	// (0x000ba7e1) grid_image3_tool_bar_pane

0xd822,	// (0x000ba7eb) bg_popup_trans_pane_g1

0xad7d,	// (0x000b7d46) bg_popup_trans_pane_g2

0xd82a,	// (0x000ba7f3) bg_popup_trans_pane_g3

0xd832,	// (0x000ba7fb) bg_popup_trans_pane_g4

0xd83a,	// (0x000ba803) bg_popup_trans_pane_g5

0xd842,	// (0x000ba80b) bg_popup_trans_pane_g6

0xd84a,	// (0x000ba813) bg_popup_trans_pane_g7

0xd852,	// (0x000ba81b) bg_popup_trans_pane_g8

0xad5d,	// (0x000b7d26) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x000bc8fc) bg_popup_trans_pane_g

0xd85a,	// (0x000ba823) cell_image3_tool_bar_pane_ParamLimits

0xd85a,	// (0x000ba823) cell_image3_tool_bar_pane

0xce5f,	// (0x000b9e28) cell_image3_tool_bar_pane_g1

0x9646,	// (0x000b660f) bg_popup_trans_pane_cp1

0xd870,	// (0x000ba839) popup_image3_note_pane_t1

0xd87e,	// (0x000ba847) popup_image3_note_pane_t2

0xd88c,	// (0x000ba855) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000bc90f) popup_image3_note_pane_t

0xd89c,	// (0x000ba865) popup_image3_note_pane_t3_copy1

0x5d22,	// (0x000b2ceb) bg_myfav_hc_instruction_pane_ParamLimits

0x5d22,	// (0x000b2ceb) bg_myfav_hc_instruction_pane

0x5d3a,	// (0x000b2d03) cell_myfav_contact_pane_ParamLimits

0x5d3a,	// (0x000b2d03) cell_myfav_contact_pane

0x5d56,	// (0x000b2d1f) cell_myfav_contact_pane_cp1_ParamLimits

0x5d56,	// (0x000b2d1f) cell_myfav_contact_pane_cp1

0x5d6e,	// (0x000b2d37) cell_myfav_contact_pane_cp2_ParamLimits

0x5d6e,	// (0x000b2d37) cell_myfav_contact_pane_cp2

0x5d86,	// (0x000b2d4f) cell_myfav_contact_pane_cp3_ParamLimits

0x5d86,	// (0x000b2d4f) cell_myfav_contact_pane_cp3

0x5d9d,	// (0x000b2d66) cell_myfav_contact_pane_cp4_ParamLimits

0x5d9d,	// (0x000b2d66) cell_myfav_contact_pane_cp4

0x5db5,	// (0x000b2d7e) cell_myfav_contact_pane_cp5_ParamLimits

0x5db5,	// (0x000b2d7e) cell_myfav_contact_pane_cp5

0x5dc9,	// (0x000b2d92) cell_myfav_contact_pane_cp6_ParamLimits

0x5dc9,	// (0x000b2d92) cell_myfav_contact_pane_cp6

0x5ddf,	// (0x000b2da8) cell_myfav_contact_pane_cp7_ParamLimits

0x5ddf,	// (0x000b2da8) cell_myfav_contact_pane_cp7

0xd8aa,	// (0x000ba873) listscroll_gen_pane_cp05

0x5df7,	// (0x000b2dc0) main_myfav_hc_pane_g1_ParamLimits

0x5df7,	// (0x000b2dc0) main_myfav_hc_pane_g1

0x5e11,	// (0x000b2dda) main_myfav_hc_pane_g2_ParamLimits

0x5e11,	// (0x000b2dda) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x000bc916) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x000bc916) main_myfav_hc_pane_g

0x5e45,	// (0x000b2e0e) main_myfav_hc_pane_t1_ParamLimits

0x5e45,	// (0x000b2e0e) main_myfav_hc_pane_t1

0xd8b3,	// (0x000ba87c) main_myfav_hc_pane_t2_ParamLimits

0xd8b3,	// (0x000ba87c) main_myfav_hc_pane_t2

0xd8c5,	// (0x000ba88e) main_myfav_hc_pane_t3_ParamLimits

0xd8c5,	// (0x000ba88e) main_myfav_hc_pane_t3

0x5e5c,	// (0x000b2e25) main_myfav_hc_pane_t4_ParamLimits

0x5e5c,	// (0x000b2e25) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000bc91d) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000bc91d) main_myfav_hc_pane_t

0xce5f,	// (0x000b9e28) bg_myfav_hc_instruction_pane_g1

0xd8d7,	// (0x000ba8a0) cell_myfav_contact_pane_g1_ParamLimits

0xd8d7,	// (0x000ba8a0) cell_myfav_contact_pane_g1

0xd8d7,	// (0x000ba8a0) cell_myfav_contact_pane_g2_ParamLimits

0xd8d7,	// (0x000ba8a0) cell_myfav_contact_pane_g2

0xd8e3,	// (0x000ba8ac) cell_myfav_contact_pane_g3_ParamLimits

0xd8e3,	// (0x000ba8ac) cell_myfav_contact_pane_g3

0xd111,	// (0x000ba0da) cell_myfav_contact_pane_g4_ParamLimits

0xd111,	// (0x000ba0da) cell_myfav_contact_pane_g4

0xd8f0,	// (0x000ba8b9) cell_myfav_contact_pane_g5_ParamLimits

0xd8f0,	// (0x000ba8b9) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000bc928) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000bc928) cell_myfav_contact_pane_g

0x5e2b,	// (0x000b2df4) main_myfav_hc_pane_g3_ParamLimits

0x5e2b,	// (0x000b2df4) main_myfav_hc_pane_g3

0xfe72,	// (0x000ace3b) popup_adpt_find_window

0x5e86,	// (0x000b2e4f) afind_page_pane_ParamLimits

0x5e86,	// (0x000b2e4f) afind_page_pane

0x5e9b,	// (0x000b2e64) aid_size_cell_afind_ParamLimits

0x5e9b,	// (0x000b2e64) aid_size_cell_afind

0x5eb9,	// (0x000b2e82) bg_popup_sub_pane_cp09_ParamLimits

0x5eb9,	// (0x000b2e82) bg_popup_sub_pane_cp09

0x5ec6,	// (0x000b2e8f) find_pane_cp01_ParamLimits

0x5ec6,	// (0x000b2e8f) find_pane_cp01

0xd8fc,	// (0x000ba8c5) grid_afind_control_pane_ParamLimits

0xd8fc,	// (0x000ba8c5) grid_afind_control_pane

0x5ed3,	// (0x000b2e9c) grid_afind_pane_ParamLimits

0x5ed3,	// (0x000b2e9c) grid_afind_pane

0x5ef5,	// (0x000b2ebe) cell_afind_pane_ParamLimits

0x5ef5,	// (0x000b2ebe) cell_afind_pane

0xce5f,	// (0x000b9e28) afind_page_pane_g1

0x5f62,	// (0x000b2f2b) afind_page_pane_g2

0x5f6b,	// (0x000b2f34) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000bc933) afind_page_pane_g

0x5f74,	// (0x000b2f3d) afind_page_pane_t1

0xd910,	// (0x000ba8d9) cell_afind_grid_control_pane_ParamLimits

0xd910,	// (0x000ba8d9) cell_afind_grid_control_pane

0xd795,	// (0x000ba75e) bg_button_pane_cp69_ParamLimits

0xd795,	// (0x000ba75e) bg_button_pane_cp69

0x5f94,	// (0x000b2f5d) cell_afind_pane_g1_ParamLimits

0x5f94,	// (0x000b2f5d) cell_afind_pane_g1

0x5fa1,	// (0x000b2f6a) cell_afind_pane_t1_ParamLimits

0x5fa1,	// (0x000b2f6a) cell_afind_pane_t1

0xab72,	// (0x000b7b3b) bg_button_pane_cp72

0xd91f,	// (0x000ba8e8) cell_afind_grid_control_pane_g1

0x2e05,	// (0x000afdce) aid_image_placing_area_ParamLimits

0x2e05,	// (0x000afdce) aid_image_placing_area

0xd44a,	// (0x000ba413) field_vitu_entry_pane_g1_ParamLimits

0xd44a,	// (0x000ba413) field_vitu_entry_pane_g1

0xd456,	// (0x000ba41f) field_vitu_entry_pane_g2_ParamLimits

0xd456,	// (0x000ba41f) field_vitu_entry_pane_g2

0x0001,

0xf817,	// (0x000bc7e0) field_vitu_entry_pane_g_ParamLimits

0xf817,	// (0x000bc7e0) field_vitu_entry_pane_g

0x5085,	// (0x000b204e) cell_vitu_itu_pane_g1_ParamLimits

0x50c7,	// (0x000b2090) cell_vitu_itu_pane_t3_ParamLimits

0x50c7,	// (0x000b2090) cell_vitu_itu_pane_t3

0xd734,	// (0x000ba6fd) mp4_progress_pane_t1_ParamLimits

0xd74d,	// (0x000ba716) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x000bc879) mp4_progress_pane_t_ParamLimits

0xd766,	// (0x000ba72f) mup_progress_pane_cp04_ParamLimits

0x5e70,	// (0x000b2e39) main_myfav_hc_pane_t5_ParamLimits

0x5e70,	// (0x000b2e39) main_myfav_hc_pane_t5

0xfcf4,	// (0x000accbd) aid_zoom_text_primary

0xfe72,	// (0x000ace3b) popup_adpt_find_window_ParamLimits

0x9650,	// (0x000b6619) main_cam_set_pane

0x58a5,	// (0x000b286e) cam4_zoom_pane_ParamLimits

0x58a5,	// (0x000b286e) cam4_zoom_pane

0x5fb3,	// (0x000b2f7c) main_cam_set_pane_g1_ParamLimits

0x5fb3,	// (0x000b2f7c) main_cam_set_pane_g1

0x5fc1,	// (0x000b2f8a) main_cam_set_pane_g2_ParamLimits

0x5fc1,	// (0x000b2f8a) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000bc93a) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000bc93a) main_cam_set_pane_g

0x5fe2,	// (0x000b2fab) main_cam_set_pane_t1_ParamLimits

0x5fe2,	// (0x000b2fab) main_cam_set_pane_t1

0x5ffd,	// (0x000b2fc6) main_cset_listscroll_pane_ParamLimits

0x5ffd,	// (0x000b2fc6) main_cset_listscroll_pane

0x6021,	// (0x000b2fea) main_cset_slider_pane_ParamLimits

0x6021,	// (0x000b2fea) main_cset_slider_pane

0xd930,	// (0x000ba8f9) main_cset_list_pane_ParamLimits

0xd930,	// (0x000ba8f9) main_cset_list_pane

0xd940,	// (0x000ba909) scroll_pane_cp028

0x604b,	// (0x000b3014) aid_area_touch_slider

0x6067,	// (0x000b3030) cset_slider_pane

0x6091,	// (0x000b305a) main_cset_slider_pane_g1

0x60a6,	// (0x000b306f) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000bc93f) main_cset_slider_pane_g

0xd979,	// (0x000ba942) main_cset_slider_pane_t1

0x6168,	// (0x000b3131) main_cset_slider_pane_t2

0x6182,	// (0x000b314b) main_cset_slider_pane_t3

0x619c,	// (0x000b3165) main_cset_slider_pane_t4

0x61b6,	// (0x000b317f) main_cset_slider_pane_t5

0x61d4,	// (0x000b319d) main_cset_slider_pane_t6

0x61eb,	// (0x000b31b4) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000bc964) main_cset_slider_pane_t

0x62f7,	// (0x000b32c0) cset_list_set_pane_ParamLimits

0x62f7,	// (0x000b32c0) cset_list_set_pane

0x630b,	// (0x000b32d4) aid_position_infowindow_above

0x6313,	// (0x000b32dc) aid_position_infowindow_below

0x631b,	// (0x000b32e4) cset_list_set_pane_g1_ParamLimits

0x631b,	// (0x000b32e4) cset_list_set_pane_g1

0x6327,	// (0x000b32f0) cset_list_set_pane_g3_ParamLimits

0x6327,	// (0x000b32f0) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x000bc983) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x000bc983) cset_list_set_pane_g

0x6336,	// (0x000b32ff) cset_list_set_pane_t1_ParamLimits

0x6336,	// (0x000b32ff) cset_list_set_pane_t1

0xbb84,	// (0x000b8b4d) list_highlight_pane_cp021_ParamLimits

0xbb84,	// (0x000b8b4d) list_highlight_pane_cp021

0xb69f,	// (0x000b8668) cset_slider_pane_g1

0xb6b1,	// (0x000b867a) cset_slider_pane_g2

0xb6a8,	// (0x000b8671) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x000bc988) cset_slider_pane_g

0xa4c3,	// (0x000b748c) aid_area_touch_cam4_zoom

0x634b,	// (0x000b3314) cam4_zoom_cont_pane

0x6353,	// (0x000b331c) cam4_zoom_pane_g1

0x635b,	// (0x000b3324) cam4_zoom_pane_g2

0x6363,	// (0x000b332c) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x000bc98f) cam4_zoom_pane_g

0xa4cc,	// (0x000b7495) cam4_zoom_cont_pane_g1

0xa4d5,	// (0x000b749e) cam4_zoom_cont_pane_g2

0xa4de,	// (0x000b74a7) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x000bc996) cam4_zoom_cont_pane_g

0x56c7,	// (0x000b2690) call4_image_pane_ParamLimits

0x56c7,	// (0x000b2690) call4_image_pane

0x5732,	// (0x000b26fb) call4_windows_conf_pane_ParamLimits

0x577d,	// (0x000b2746) popup_call4_audio_in_window_ParamLimits

0x577d,	// (0x000b2746) popup_call4_audio_in_window

0x9646,	// (0x000b660f) bg_popup_call2_act_pane_cp02

0xd7a1,	// (0x000ba76a) call4_list_conf_pane

0xce5f,	// (0x000b9e28) call4_image_pane_g1

0xce5f,	// (0x000b9e28) call4_image_pane_g2

0x0001,

0xf6d8,	// (0x000bc6a1) call4_image_pane_g

0xda19,	// (0x000ba9e2) list_single_graphic_popup_conf4_pane_ParamLimits

0xda19,	// (0x000ba9e2) list_single_graphic_popup_conf4_pane

0x9646,	// (0x000b660f) list_highlight_pane_cp022

0xda2e,	// (0x000ba9f7) list_single_graphic_popup_conf4_pane_g1

0xb297,	// (0x000b8260) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x000bc99d) list_single_graphic_popup_conf4_pane_g

0xda36,	// (0x000ba9ff) list_single_graphic_popup_conf4_pane_t1

0x0ff6,	// (0x000adfbf) popup_vtel_slider_window_ParamLimits

0x0ff6,	// (0x000adfbf) popup_vtel_slider_window

0xd783,	// (0x000ba74c) dialer2_ne_pane_t2_ParamLimits

0xd783,	// (0x000ba74c) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x000bc87e) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x000bc87e) dialer2_ne_pane_t

0xcc3e,	// (0x000b9c07) bg_popup_sub_pane_cp010_ParamLimits

0xcc3e,	// (0x000b9c07) bg_popup_sub_pane_cp010

0x636c,	// (0x000b3335) popup_vtel_slider_window_g1_ParamLimits

0x636c,	// (0x000b3335) popup_vtel_slider_window_g1

0x637f,	// (0x000b3348) popup_vtel_slider_window_g2_ParamLimits

0x637f,	// (0x000b3348) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x000bc9a2) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x000bc9a2) popup_vtel_slider_window_g

0x63d5,	// (0x000b339e) vtel_slider_pane_ParamLimits

0x63d5,	// (0x000b339e) vtel_slider_pane

0x63f7,	// (0x000b33c0) vtel_slider_pane_g1_ParamLimits

0x63f7,	// (0x000b33c0) vtel_slider_pane_g1

0x640b,	// (0x000b33d4) vtel_slider_pane_g2_ParamLimits

0x640b,	// (0x000b33d4) vtel_slider_pane_g2

0x6423,	// (0x000b33ec) vtel_slider_pane_g3_ParamLimits

0x6423,	// (0x000b33ec) vtel_slider_pane_g3

0x63f7,	// (0x000b33c0) vtel_slider_pane_g4_ParamLimits

0x63f7,	// (0x000b33c0) vtel_slider_pane_g4

0x6439,	// (0x000b3402) vtel_slider_pane_g5_ParamLimits

0x6439,	// (0x000b3402) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x000bc9ab) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x000bc9ab) vtel_slider_pane_g

0x9650,	// (0x000b6619) main_gallery2_pane

0x5aaa,	// (0x000b2a73) aid_size_row_itut2_dropdow_list_ParamLimits

0x5aaa,	// (0x000b2a73) aid_size_row_itut2_dropdow_list

0x5b3c,	// (0x000b2b05) grid_vitu2_function_top_pane_ParamLimits

0x5b3c,	// (0x000b2b05) grid_vitu2_function_top_pane

0x5ba0,	// (0x000b2b69) popup_vitu2_dropdown_list_window_ParamLimits

0x5ba0,	// (0x000b2b69) popup_vitu2_dropdown_list_window

0x5bc9,	// (0x000b2b92) popup_vitu2_match_list_window

0x645d,	// (0x000b3426) cell_vitu2_function_top_pane_ParamLimits

0x645d,	// (0x000b3426) cell_vitu2_function_top_pane

0x647f,	// (0x000b3448) cell_vitu2_function_top_pane_cp01_ParamLimits

0x647f,	// (0x000b3448) cell_vitu2_function_top_pane_cp01

0x649b,	// (0x000b3464) cell_vitu2_function_top_wide_pane_ParamLimits

0x649b,	// (0x000b3464) cell_vitu2_function_top_wide_pane

0x9650,	// (0x000b6619) bg_button_pane_cp012

0x64b7,	// (0x000b3480) cell_vitu2_function_top_pane_g1

0xa4e7,	// (0x000b74b0) bg_button_pane_cp013_ParamLimits

0xa4e7,	// (0x000b74b0) bg_button_pane_cp013

0x64cb,	// (0x000b3494) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x64cb,	// (0x000b3494) cell_vitu2_function_top_wide_pane_g1

0x9650,	// (0x000b6619) bg_popup_sub_pane_cp20

0x64e3,	// (0x000b34ac) list_vitu2_match_list_pane

0xd822,	// (0x000ba7eb) bg_popup_sub_pane_cp20_g1

0xd82a,	// (0x000ba7f3) bg_popup_sub_pane_cp20_g2

0xad7d,	// (0x000b7d46) bg_popup_sub_pane_cp20_g3

0xd832,	// (0x000ba7fb) bg_popup_sub_pane_cp20_g4

0xad5d,	// (0x000b7d26) bg_popup_sub_pane_cp20_g5

0xda4c,	// (0x000baa15) bg_popup_sub_pane_cp20_g6

0xd842,	// (0x000ba80b) bg_popup_sub_pane_cp20_g7

0xd84a,	// (0x000ba813) bg_popup_sub_pane_cp20_g8

0xd852,	// (0x000ba81b) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x000bc9b6) bg_popup_sub_pane_cp20_g

0xa503,	// (0x000b74cc) list_vitu2_match_list_item_pane_ParamLimits

0xa503,	// (0x000b74cc) list_vitu2_match_list_item_pane

0xa515,	// (0x000b74de) list_vitu2_match_list_item_pane_t1

0xf0b4,	// (0x000bc07d) bg_popup_sub_pane_cp21

0xa523,	// (0x000b74ec) grid_vitu2_dropdown_list_pane

0x654d,	// (0x000b3516) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x654d,	// (0x000b3516) cell_vitu2_dropdown_list_char_pane

0x6570,	// (0x000b3539) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6570,	// (0x000b3539) cell_vitu2_dropdown_list_ctrl_pane

0xda54,	// (0x000baa1d) cell_vitu2_dropdown_list_char_pane_g1

0xda5d,	// (0x000baa26) cell_vitu2_dropdown_list_char_pane_g2

0xda66,	// (0x000baa2f) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x000bc9d3) cell_vitu2_dropdown_list_char_pane_g

0x659e,	// (0x000b3567) cell_vitu2_dropdown_list_char_pane_t1

0x65ac,	// (0x000b3575) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x65ac,	// (0x000b3575) cell_vitu2_dropdown_list_ctrl_pane_g1

0x65bc,	// (0x000b3585) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x65bc,	// (0x000b3585) cell_vitu2_dropdown_list_ctrl_pane_g2

0x65cd,	// (0x000b3596) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x65cd,	// (0x000b3596) cell_vitu2_dropdown_list_ctrl_pane_g3

0x65dd,	// (0x000b35a6) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x65dd,	// (0x000b35a6) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa3b5,	// (0x000b737e) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa3b5,	// (0x000b737e) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x000bc9da) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x000bc9da) cell_vitu2_dropdown_list_ctrl_pane_g

0x65f9,	// (0x000b35c2) aid_size_cell_gallery2_ParamLimits

0x65f9,	// (0x000b35c2) aid_size_cell_gallery2

0x6617,	// (0x000b35e0) grid_gallery2_pane_ParamLimits

0x6617,	// (0x000b35e0) grid_gallery2_pane

0x6631,	// (0x000b35fa) scroll_pane_cp029_ParamLimits

0x6631,	// (0x000b35fa) scroll_pane_cp029

0x6642,	// (0x000b360b) cell_gallery2_pane_ParamLimits

0x6642,	// (0x000b360b) cell_gallery2_pane

0xda6f,	// (0x000baa38) cell_gallery2_pane_g2

0x66a6,	// (0x000b366f) cell_gallery2_pane_g3

0xda77,	// (0x000baa40) cell_gallery2_pane_g4

0xda7f,	// (0x000baa48) cell_gallery2_pane_g5

0xab0b,	// (0x000b7ad4) grid_highlight_pane_cp10

0x5bc9,	// (0x000b2b92) popup_vitu2_match_list_window_ParamLimits

0x5be0,	// (0x000b2ba9) popup_vitu2_query_window_ParamLimits

0x5be0,	// (0x000b2ba9) popup_vitu2_query_window

0xf0b4,	// (0x000bc07d) bg_vitu2_candi_button_pane

0xda54,	// (0x000baa1d) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xda5d,	// (0x000baa26) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xda66,	// (0x000baa2f) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x66ae,	// (0x000b3677) bg_button_pane_cp015

0x66c2,	// (0x000b368b) bg_button_pane_cp016

0x66d5,	// (0x000b369e) bg_button_pane_cp017

0xca27,	// (0x000b99f0) bg_popup_sub_pane_cp22

0xda87,	// (0x000baa50) popup_vitu2_query_window_g1

0x671a,	// (0x000b36e3) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x000bc9e5) popup_vitu2_query_window_g

0x6739,	// (0x000b3702) popup_vitu2_query_window_t1_ParamLimits

0x6739,	// (0x000b3702) popup_vitu2_query_window_t1

0x676e,	// (0x000b3737) popup_vitu2_query_window_t2_ParamLimits

0x676e,	// (0x000b3737) popup_vitu2_query_window_t2

0x6780,	// (0x000b3749) popup_vitu2_query_window_t3_ParamLimits

0x6780,	// (0x000b3749) popup_vitu2_query_window_t3

0x67a8,	// (0x000b3771) popup_vitu2_query_window_t4_ParamLimits

0x67a8,	// (0x000b3771) popup_vitu2_query_window_t4

0x67c9,	// (0x000b3792) popup_vitu2_query_window_t5_ParamLimits

0x67c9,	// (0x000b3792) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x000bc9ec) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x000bc9ec) popup_vitu2_query_window_t

0xd928,	// (0x000ba8f1) main_cset_text_pane

0x604b,	// (0x000b3014) aid_area_touch_slider_ParamLimits

0x6067,	// (0x000b3030) cset_slider_pane_ParamLimits

0x6091,	// (0x000b305a) main_cset_slider_pane_g1_ParamLimits

0x60a6,	// (0x000b306f) main_cset_slider_pane_g2_ParamLimits

0xd949,	// (0x000ba912) main_cset_slider_pane_g3_ParamLimits

0xd949,	// (0x000ba912) main_cset_slider_pane_g3

0x60bb,	// (0x000b3084) main_cset_slider_pane_g4_ParamLimits

0x60bb,	// (0x000b3084) main_cset_slider_pane_g4

0x60ca,	// (0x000b3093) main_cset_slider_pane_g5_ParamLimits

0x60ca,	// (0x000b3093) main_cset_slider_pane_g5

0x60d8,	// (0x000b30a1) main_cset_slider_pane_g6_ParamLimits

0x60d8,	// (0x000b30a1) main_cset_slider_pane_g6

0xf976,	// (0x000bc93f) main_cset_slider_pane_g_ParamLimits

0xd979,	// (0x000ba942) main_cset_slider_pane_t1_ParamLimits

0x6168,	// (0x000b3131) main_cset_slider_pane_t2_ParamLimits

0x6182,	// (0x000b314b) main_cset_slider_pane_t3_ParamLimits

0x619c,	// (0x000b3165) main_cset_slider_pane_t4_ParamLimits

0x61b6,	// (0x000b317f) main_cset_slider_pane_t5_ParamLimits

0x61d4,	// (0x000b319d) main_cset_slider_pane_t6_ParamLimits

0x61eb,	// (0x000b31b4) main_cset_slider_pane_t7_ParamLimits

0x6219,	// (0x000b31e2) main_cset_slider_pane_t8_ParamLimits

0x6219,	// (0x000b31e2) main_cset_slider_pane_t8

0x6241,	// (0x000b320a) main_cset_slider_pane_t9_ParamLimits

0x6241,	// (0x000b320a) main_cset_slider_pane_t9

0x6269,	// (0x000b3232) main_cset_slider_pane_t10_ParamLimits

0x6269,	// (0x000b3232) main_cset_slider_pane_t10

0x6291,	// (0x000b325a) main_cset_slider_pane_t11_ParamLimits

0x6291,	// (0x000b325a) main_cset_slider_pane_t11

0x62bb,	// (0x000b3284) main_cset_slider_pane_t12_ParamLimits

0x62bb,	// (0x000b3284) main_cset_slider_pane_t12

0x62d8,	// (0x000b32a1) main_cset_slider_pane_t13_ParamLimits

0x62d8,	// (0x000b32a1) main_cset_slider_pane_t13

0xf99b,	// (0x000bc964) main_cset_slider_pane_t_ParamLimits

0x9646,	// (0x000b660f) bg_popup_sub_pane_cp011

0xda93,	// (0x000baa5c) main_cset_text_pane_g1

0xda9b,	// (0x000baa64) main_cset_text_pane_t1

0xdaa9,	// (0x000baa72) main_cset_text_pane_t2

0xdab7,	// (0x000baa80) main_cset_text_pane_t3

0xdac5,	// (0x000baa8e) main_cset_text_pane_t4

0xdad3,	// (0x000baa9c) main_cset_text_pane_t5

0xdae1,	// (0x000baaaa) main_cset_text_pane_t6

0xdaef,	// (0x000baab8) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x000bc9fb) main_cset_text_pane_t

0xf0b4,	// (0x000bc07d) main_cam4_burst_pane

0xf0b4,	// (0x000bc07d) main_cam5_pane

0x5f82,	// (0x000b2f4b) bg_button_pane_cp019

0x5f8b,	// (0x000b2f54) bg_button_pane_cp020

0xd955,	// (0x000ba91e) main_cset_slider_pane_g7_ParamLimits

0xd955,	// (0x000ba91e) main_cset_slider_pane_g7

0xd961,	// (0x000ba92a) main_cset_slider_pane_g8_ParamLimits

0xd961,	// (0x000ba92a) main_cset_slider_pane_g8

0x60ec,	// (0x000b30b5) main_cset_slider_pane_g9_ParamLimits

0x60ec,	// (0x000b30b5) main_cset_slider_pane_g9

0x60f8,	// (0x000b30c1) main_cset_slider_pane_g10_ParamLimits

0x60f8,	// (0x000b30c1) main_cset_slider_pane_g10

0x6104,	// (0x000b30cd) main_cset_slider_pane_g11_ParamLimits

0x6104,	// (0x000b30cd) main_cset_slider_pane_g11

0x6110,	// (0x000b30d9) main_cset_slider_pane_g12_ParamLimits

0x6110,	// (0x000b30d9) main_cset_slider_pane_g12

0x611c,	// (0x000b30e5) main_cset_slider_pane_g13_ParamLimits

0x611c,	// (0x000b30e5) main_cset_slider_pane_g13

0x6128,	// (0x000b30f1) main_cset_slider_pane_g14_ParamLimits

0x6128,	// (0x000b30f1) main_cset_slider_pane_g14

0x6134,	// (0x000b30fd) main_cset_slider_pane_g15_ParamLimits

0x6134,	// (0x000b30fd) main_cset_slider_pane_g15

0xd9a7,	// (0x000ba970) main_cset_slider_pane_t14_ParamLimits

0xd9a7,	// (0x000ba970) main_cset_slider_pane_t14

0xd9e0,	// (0x000ba9a9) main_cset_slider_pane_t15_ParamLimits

0xd9e0,	// (0x000ba9a9) main_cset_slider_pane_t15

0x6840,	// (0x000b3809) aid_cam4_burst_size_cell_ParamLimits

0x6840,	// (0x000b3809) aid_cam4_burst_size_cell

0x6860,	// (0x000b3829) grid_cam4_burst_pane_ParamLimits

0x6860,	// (0x000b3829) grid_cam4_burst_pane

0x689a,	// (0x000b3863) linegrid_cam4_burst_pane_ParamLimits

0x689a,	// (0x000b3863) linegrid_cam4_burst_pane

0xdafd,	// (0x000baac6) scroll_pane_cp30_ParamLimits

0xdafd,	// (0x000baac6) scroll_pane_cp30

0x68bc,	// (0x000b3885) cell_cam4_burst_pane_ParamLimits

0x68bc,	// (0x000b3885) cell_cam4_burst_pane

0xdb09,	// (0x000baad2) linegrid_cam4_burst_pane_g1_ParamLimits

0xdb09,	// (0x000baad2) linegrid_cam4_burst_pane_g1

0x6911,	// (0x000b38da) linegrid_cam4_burst_pane_g2_ParamLimits

0x6911,	// (0x000b38da) linegrid_cam4_burst_pane_g2

0xdb16,	// (0x000baadf) linegrid_cam4_burst_pane_g3_ParamLimits

0xdb16,	// (0x000baadf) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x000bca0a) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x000bca0a) linegrid_cam4_burst_pane_g

0x6922,	// (0x000b38eb) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6922,	// (0x000b38eb) linegrid_cam4_burst_pane_g3_copy1

0xdb23,	// (0x000baaec) linegrid_cam4_burst_pane_g4_ParamLimits

0xdb23,	// (0x000baaec) linegrid_cam4_burst_pane_g4

0x6940,	// (0x000b3909) linegrid_cam4_burst_pane_g5_ParamLimits

0x6940,	// (0x000b3909) linegrid_cam4_burst_pane_g5

0x6951,	// (0x000b391a) linegrid_cam4_burst_pane_g6_ParamLimits

0x6951,	// (0x000b391a) linegrid_cam4_burst_pane_g6

0xdb30,	// (0x000baaf9) linegrid_cam4_burst_pane_g7_ParamLimits

0xdb30,	// (0x000baaf9) linegrid_cam4_burst_pane_g7

0x6968,	// (0x000b3931) cell_cam4_burst_pane_g1

0xdb49,	// (0x000bab12) main_cam5_pane_t1_ParamLimits

0xdb49,	// (0x000bab12) main_cam5_pane_t1

0xdb5b,	// (0x000bab24) main_cam5_pane_t2_ParamLimits

0xdb5b,	// (0x000bab24) main_cam5_pane_t2

0xdb6d,	// (0x000bab36) main_cam5_pane_t3_ParamLimits

0xdb6d,	// (0x000bab36) main_cam5_pane_t3

0xdb7f,	// (0x000bab48) main_cam5_pane_t4_ParamLimits

0xdb7f,	// (0x000bab48) main_cam5_pane_t4

0xdb97,	// (0x000bab60) main_cam5_pane_t5_ParamLimits

0xdb97,	// (0x000bab60) main_cam5_pane_t5

0xdbab,	// (0x000bab74) main_cam5_pane_t6_ParamLimits

0xdbab,	// (0x000bab74) main_cam5_pane_t6

0xdbbf,	// (0x000bab88) main_cam5_pane_t7_ParamLimits

0xdbbf,	// (0x000bab88) main_cam5_pane_t7

0xdbd1,	// (0x000bab9a) main_cam5_pane_t8_ParamLimits

0xdbd1,	// (0x000bab9a) main_cam5_pane_t8

0xdbef,	// (0x000babb8) main_cam5_pane_t9_ParamLimits

0xdbef,	// (0x000babb8) main_cam5_pane_t9

0xdc01,	// (0x000babca) main_cam5_pane_t10_ParamLimits

0xdc01,	// (0x000babca) main_cam5_pane_t10

0xdc13,	// (0x000babdc) main_cam5_pane_t11_ParamLimits

0xdc13,	// (0x000babdc) main_cam5_pane_t11

0xdc27,	// (0x000babf0) main_cam5_pane_t12_ParamLimits

0xdc27,	// (0x000babf0) main_cam5_pane_t12

0xdc3e,	// (0x000bac07) main_cam5_pane_t13_ParamLimits

0xdc3e,	// (0x000bac07) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x000bca16) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x000bca16) main_cam5_pane_t

0xfefd,	// (0x000acec6) popup_scut_keymap_window_ParamLimits

0xfefd,	// (0x000acec6) popup_scut_keymap_window

0x697b,	// (0x000b3944) aid_size_cell_brow_shortcut

0xab0b,	// (0x000b7ad4) bg_popup_window_pane_cp010

0x6987,	// (0x000b3950) grid_scut_pane

0x6993,	// (0x000b395c) cell_scut_pane_ParamLimits

0x6993,	// (0x000b395c) cell_scut_pane

0x69ac,	// (0x000b3975) cell_scut_pane_g1

0xdc61,	// (0x000bac2a) cell_scut_pane_t1

0xdc70,	// (0x000bac39) cell_scut_pane_t2

0x69b5,	// (0x000b397e) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x000bca31) cell_scut_pane_t

0x455d,	// (0x000b1526) main_mup3_pane_g8_ParamLimits

0x455d,	// (0x000b1526) main_mup3_pane_g8

0x5ac6,	// (0x000b2a8f) area_vitu2_query_pane_ParamLimits

0x5ac6,	// (0x000b2a8f) area_vitu2_query_pane

0x66e8,	// (0x000b36b1) input_focus_pane_cp08

0xdc7f,	// (0x000bac48) area_vitu2_query_pane_g1

0x69c3,	// (0x000b398c) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x000bca38) area_vitu2_query_pane_g

0x69d6,	// (0x000b399f) area_vitu2_query_pane_t1_ParamLimits

0x69d6,	// (0x000b399f) area_vitu2_query_pane_t1

0x69ea,	// (0x000b39b3) area_vitu2_query_pane_t2_ParamLimits

0x69ea,	// (0x000b39b3) area_vitu2_query_pane_t2

0x69fe,	// (0x000b39c7) area_vitu2_query_pane_t3_ParamLimits

0x69fe,	// (0x000b39c7) area_vitu2_query_pane_t3

0xa52b,	// (0x000b74f4) area_vitu2_query_pane_t4_ParamLimits

0xa52b,	// (0x000b74f4) area_vitu2_query_pane_t4

0xa553,	// (0x000b751c) area_vitu2_query_pane_t5_ParamLimits

0xa553,	// (0x000b751c) area_vitu2_query_pane_t5

0xa57b,	// (0x000b7544) area_vitu2_query_pane_t6_ParamLimits

0xa57b,	// (0x000b7544) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x000bca3d) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x000bca3d) area_vitu2_query_pane_t

0x6a26,	// (0x000b39ef) bg_button_pane_cp018

0x6a34,	// (0x000b39fd) bg_button_pane_cp021

0x6a40,	// (0x000b3a09) bg_button_pane_cp022

0x6a51,	// (0x000b3a1a) input_focus_pane_cp09

0xb3a6,	// (0x000b836f) aid_size_touch_mv_arrow_left

0xb3d1,	// (0x000b839a) aid_size_touch_mv_arrow_right

0x614c,	// (0x000b3115) main_cset_slider_pane_g16_ParamLimits

0x614c,	// (0x000b3115) main_cset_slider_pane_g16

0x615a,	// (0x000b3123) main_cset_slider_pane_g17_ParamLimits

0x615a,	// (0x000b3123) main_cset_slider_pane_g17

0x6968,	// (0x000b3931) cell_cam4_burst_pane_g1_ParamLimits

0x9646,	// (0x000b660f) compa_mode_pane

0x638f,	// (0x000b3358) popup_vtel_slider_window_g3_ParamLimits

0x638f,	// (0x000b3358) popup_vtel_slider_window_g3

0x63a6,	// (0x000b336f) popup_vtel_slider_window_g4_ParamLimits

0x63a6,	// (0x000b336f) popup_vtel_slider_window_g4

0x63bd,	// (0x000b3386) popup_vtel_slider_window_t1_ParamLimits

0x63bd,	// (0x000b3386) popup_vtel_slider_window_t1

0xf0b4,	// (0x000bc07d) main_cl_pane

0x9fb8,	// (0x000b6f81) popup_imed_adjust2_window_ParamLimits

0xca27,	// (0x000b99f0) bg_tb_trans_pane_cp05_ParamLimits

0xd375,	// (0x000ba33e) popup_imed_adjust2_window_g1_ParamLimits

0xd384,	// (0x000ba34d) popup_imed_adjust2_window_g2_ParamLimits

0xd384,	// (0x000ba34d) popup_imed_adjust2_window_g2

0xd390,	// (0x000ba359) popup_imed_adjust2_window_g3_ParamLimits

0xd390,	// (0x000ba359) popup_imed_adjust2_window_g3

0x0002,

0xf7db,	// (0x000bc7a4) popup_imed_adjust2_window_g_ParamLimits

0xf7db,	// (0x000bc7a4) popup_imed_adjust2_window_g

0xd39c,	// (0x000ba365) popup_imed_adjust2_window_t1_ParamLimits

0xd3b4,	// (0x000ba37d) slider_imed_adjust_pane_ParamLimits

0xd3c8,	// (0x000ba391) slider_imed_adjust_pane_g1_ParamLimits

0xd3d8,	// (0x000ba3a1) slider_imed_adjust_pane_g2_ParamLimits

0xd3e8,	// (0x000ba3b1) slider_imed_adjust_pane_g3_ParamLimits

0xd3f9,	// (0x000ba3c2) slider_imed_adjust_pane_g4_ParamLimits

0xf7e2,	// (0x000bc7ab) slider_imed_adjust_pane_g_ParamLimits

0x5845,	// (0x000b280e) aid_touch_area_cam4_ParamLimits

0x5845,	// (0x000b280e) aid_touch_area_cam4

0xa397,	// (0x000b7360) battery_pane_cp01

0x5918,	// (0x000b28e1) main_camera4_pane_g6_ParamLimits

0x5918,	// (0x000b28e1) main_camera4_pane_g6

0x5942,	// (0x000b290b) main_camera4_pane_t2_ParamLimits

0x5942,	// (0x000b290b) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x000bc8b2) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x000bc8b2) main_camera4_pane_t

0x5977,	// (0x000b2940) aid_touch_area_vid4_ParamLimits

0x5977,	// (0x000b2940) aid_touch_area_vid4

0x59cb,	// (0x000b2994) main_video4_pane_g5_ParamLimits

0x59cb,	// (0x000b2994) main_video4_pane_g5

0x59f0,	// (0x000b29b9) vid4_progress_pane_ParamLimits

0x59f0,	// (0x000b29b9) vid4_progress_pane

0xd96d,	// (0x000ba936) main_cset_slider_pane_g18_ParamLimits

0xd96d,	// (0x000ba936) main_cset_slider_pane_g18

0xdb3d,	// (0x000bab06) cell_cam4_burst_pane_g2_ParamLimits

0xdb3d,	// (0x000bab06) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x000bca11) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x000bca11) cell_cam4_burst_pane_g

0xa95a,	// (0x000b7923) bg_cl_pane_ParamLimits

0xa95a,	// (0x000b7923) bg_cl_pane

0x6a62,	// (0x000b3a2b) cl_header_pane_ParamLimits

0x6a62,	// (0x000b3a2b) cl_header_pane

0x6a76,	// (0x000b3a3f) cl_listscroll_pane_ParamLimits

0x6a76,	// (0x000b3a3f) cl_listscroll_pane

0xdc8b,	// (0x000bac54) bg_cl_pane_g1

0xdc93,	// (0x000bac5c) bg_cl_pane_g2

0xdc9b,	// (0x000bac64) bg_cl_pane_g3

0xdca3,	// (0x000bac6c) bg_cl_pane_g4

0xdcab,	// (0x000bac74) bg_cl_pane_g5

0xdcb3,	// (0x000bac7c) bg_cl_pane_g6

0xdcbb,	// (0x000bac84) bg_cl_pane_g7

0xdcc3,	// (0x000bac8c) bg_cl_pane_g8

0xdccb,	// (0x000bac94) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x000bca4c) bg_cl_pane_g

0x6a86,	// (0x000b3a4f) aid_height_cl_leading_ParamLimits

0x6a86,	// (0x000b3a4f) aid_height_cl_leading

0x6a92,	// (0x000b3a5b) aid_height_cl_text_ParamLimits

0x6a92,	// (0x000b3a5b) aid_height_cl_text

0xbb84,	// (0x000b8b4d) bg_cl_header_pane_ParamLimits

0xbb84,	// (0x000b8b4d) bg_cl_header_pane

0x6ab1,	// (0x000b3a7a) cl_header_pane_g1_ParamLimits

0x6ab1,	// (0x000b3a7a) cl_header_pane_g1

0x6ac7,	// (0x000b3a90) cl_header_pane_t1_ParamLimits

0x6ac7,	// (0x000b3a90) cl_header_pane_t1

0xdcd3,	// (0x000bac9c) cl_list_pane

0xd940,	// (0x000ba909) hc_scroll_pane_cp01

0xad5d,	// (0x000b7d26) bg_cl_header_pane_g1

0xd822,	// (0x000ba7eb) bg_cl_header_pane_g2

0xad7d,	// (0x000b7d46) bg_cl_header_pane_g3

0xd832,	// (0x000ba7fb) bg_cl_header_pane_g4

0xd82a,	// (0x000ba7f3) bg_cl_header_pane_g5

0xda4c,	// (0x000baa15) bg_cl_header_pane_g6

0xd84a,	// (0x000ba813) bg_cl_header_pane_g7

0xd852,	// (0x000ba81b) bg_cl_header_pane_g8

0xd842,	// (0x000ba80b) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x000bca5f) bg_cl_header_pane_g

0x6ae0,	// (0x000b3aa9) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6ae0,	// (0x000b3aa9) hc_cl_list_double_graphic_heading_pane

0x6af3,	// (0x000b3abc) hc_cl_list_single_graphic_pane_ParamLimits

0x6af3,	// (0x000b3abc) hc_cl_list_single_graphic_pane

0x6b0b,	// (0x000b3ad4) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6b0b,	// (0x000b3ad4) hc_cl_list_single_graphic_pane_g1

0x6b17,	// (0x000b3ae0) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6b17,	// (0x000b3ae0) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x000bca72) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x000bca72) hc_cl_list_single_graphic_pane_g

0x6b2b,	// (0x000b3af4) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6b2b,	// (0x000b3af4) hc_cl_list_single_graphic_pane_t1

0x6b0b,	// (0x000b3ad4) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6b0b,	// (0x000b3ad4) hc_cl_list_double_graphic_heading_pane_g1

0x6b40,	// (0x000b3b09) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6b40,	// (0x000b3b09) hc_cl_list_double_graphic_heading_pane_g2

0x6b54,	// (0x000b3b1d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6b54,	// (0x000b3b1d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x000bca77) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x000bca77) hc_cl_list_double_graphic_heading_pane_g

0x6b68,	// (0x000b3b31) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6b68,	// (0x000b3b31) hc_cl_list_double_graphic_heading_pane_t1

0x6b7d,	// (0x000b3b46) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6b7d,	// (0x000b3b46) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x000bca7e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x000bca7e) hc_cl_list_double_graphic_heading_pane_t

0xa5cf,	// (0x000b7598) vid4_progress_pane_g1

0xa5df,	// (0x000b75a8) vid4_progress_pane_g2

0x6b92,	// (0x000b3b5b) vid4_progress_pane_g3

0xa3dc,	// (0x000b73a5) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x000bca83) vid4_progress_pane_g

0x6ba4,	// (0x000b3b6d) vid4_progress_pane_t1

0xa5ef,	// (0x000b75b8) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x000bca8e) vid4_progress_pane_t

0x6bbc,	// (0x000b3b85) wait_bar_pane_cp07

0xcc4c,	// (0x000b9c15) blid_firmament_pane_ParamLimits

0xcc8f,	// (0x000b9c58) popup_blid_sat_info2_window_g1

0xccb3,	// (0x000b9c7c) popup_blid_sat_info2_window_t3

0xccc1,	// (0x000b9c8a) popup_blid_sat_info2_window_t4

0xcccf,	// (0x000b9c98) popup_blid_sat_info2_window_t5

0xccdd,	// (0x000b9ca6) popup_blid_sat_info2_window_t6

0xcced,	// (0x000b9cb6) popup_blid_sat_info2_window_t7

0xccfb,	// (0x000b9cc4) popup_blid_sat_info2_window_t8

0xcd09,	// (0x000b9cd2) popup_blid_sat_info2_window_t9

0xcd17,	// (0x000b9ce0) popup_blid_sat_info2_window_t10

0xcddf,	// (0x000b9da8) aid_firma_cardinal_ParamLimits

0xcdf3,	// (0x000b9dbc) blid_firmament_pane_t1_ParamLimits

0xce0a,	// (0x000b9dd3) blid_firmament_pane_t2_ParamLimits

0xce21,	// (0x000b9dea) blid_firmament_pane_t3_ParamLimits

0xce38,	// (0x000b9e01) blid_firmament_pane_t4_ParamLimits

0xf6cf,	// (0x000bc698) blid_firmament_pane_t_ParamLimits

0xce4f,	// (0x000b9e18) blid_sat_info_pane_ParamLimits

0x9650,	// (0x000b6619) main_cam_set_pane_ParamLimits

0x4e35,	// (0x000b1dfe) aid_size_cell_colour_35_ParamLimits

0x4e55,	// (0x000b1e1e) aid_size_cell_colour_112_ParamLimits

0x4e75,	// (0x000b1e3e) aid_size_cell_effect_ParamLimits

0xca27,	// (0x000b99f0) bg_tb_trans_pane_cp02_ParamLimits

0xafc5,	// (0x000b7f8e) heading_imed_pane_ParamLimits

0x4e95,	// (0x000b1e5e) listscroll_imed_pane_ParamLimits

0xc04f,	// (0x000b9018) popup_call2_audio_first_window_g5_ParamLimits

0xc04f,	// (0x000b9018) popup_call2_audio_first_window_g5

0x5452,	// (0x000b241b) aid_size_touch_image3_arrow_left_ParamLimits

0x5452,	// (0x000b241b) aid_size_touch_image3_arrow_left

0x547e,	// (0x000b2447) aid_size_touch_image3_arrow_right_ParamLimits

0x547e,	// (0x000b2447) aid_size_touch_image3_arrow_right

0xa604,	// (0x000b75cd) vid4_progress_pane_t3

0x51ae,	// (0x000b2177) main_hwr_training_symbol_option_pane_ParamLimits

0x51ae,	// (0x000b2177) main_hwr_training_symbol_option_pane

0xd66e,	// (0x000ba637) popup_hwr_training_preview_window_ParamLimits

0xd66e,	// (0x000ba637) popup_hwr_training_preview_window

0x51ce,	// (0x000b2197) hwr_training_navi_pane_g5_ParamLimits

0x51ce,	// (0x000b2197) hwr_training_navi_pane_g5

0xd810,	// (0x000ba7d9) popup_char_count_window

0x9650,	// (0x000b6619) bg_popup_sub_pane_cp20_ParamLimits

0x64e3,	// (0x000b34ac) list_vitu2_match_list_pane_ParamLimits

0x64f2,	// (0x000b34bb) vitu2_page_scroll_pane_ParamLimits

0x64f2,	// (0x000b34bb) vitu2_page_scroll_pane

0xdcdc,	// (0x000baca5) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdcdc,	// (0x000baca5) list_single_hwr_training_symbol_option_pane

0xdcef,	// (0x000bacb8) list_single_hwr_training_symbol_option_pane_g1

0xdcf7,	// (0x000bacc0) list_single_hwr_training_symbol_option_pane_t1

0xdd05,	// (0x000bacce) bg_button_pane_cp023

0xdd0e,	// (0x000bacd7) bg_button_pane_cp024

0x6c07,	// (0x000b3bd0) vitu2_page_scroll_pane_g1

0x6c0f,	// (0x000b3bd8) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x000bca95) vitu2_page_scroll_pane_g

0x6c19,	// (0x000b3be2) vitu2_page_scroll_pane_t1

0xdd41,	// (0x000bad0a) popup_char_count_window_g1

0xdd4a,	// (0x000bad13) popup_char_count_window_g2

0xdd53,	// (0x000bad1c) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x000bca9a) popup_char_count_window_g

0xdd5c,	// (0x000bad25) popup_char_count_window_t1

0xf0b4,	// (0x000bc07d) main_vded2_pane

0xd361,	// (0x000ba32a) aid_size_cell_imed_line

0xd36b,	// (0x000ba334) grid_imed_line_width_pane

0xa45f,	// (0x000b7428) vid4_indicators_pane_g4

0xdd6a,	// (0x000bad33) cell_imed_line_width_pane_ParamLimits

0xdd6a,	// (0x000bad33) cell_imed_line_width_pane

0xdd80,	// (0x000bad49) cell_imed_line_width_pane_g1

0xcf17,	// (0x000b9ee0) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x000bcaa1) cell_imed_line_width_pane_g

0x6c28,	// (0x000b3bf1) main_vded2_pane_g1_ParamLimits

0x6c28,	// (0x000b3bf1) main_vded2_pane_g1

0x6c43,	// (0x000b3c0c) main_vded2_pane_g2_ParamLimits

0x6c43,	// (0x000b3c0c) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x000bcaa6) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x000bcaa6) main_vded2_pane_g

0x6c55,	// (0x000b3c1e) vded2_slider_pane_ParamLimits

0x6c55,	// (0x000b3c1e) vded2_slider_pane

0x6c65,	// (0x000b3c2e) aid_size_touch_vded2_end

0x6c6f,	// (0x000b3c38) aid_size_touch_vded2_playhead

0xdd89,	// (0x000bad52) aid_size_touch_vded2_start

0xdd91,	// (0x000bad5a) vded2_slider_bg_pane

0xdd9a,	// (0x000bad63) vded2_slider_pane_g1

0xdda3,	// (0x000bad6c) vded2_slider_pane_g2

0x6c79,	// (0x000b3c42) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x000bcaab) vded2_slider_pane_g

0xddab,	// (0x000bad74) vded2_slider_bg_pane_g1

0xddb4,	// (0x000bad7d) vded2_slider_bg_pane_g2

0xddbd,	// (0x000bad86) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x000bcab2) vded2_slider_bg_pane_g

0x2a3f,	// (0x000afa08) aid_postcard_touch_down_pane_ParamLimits

0x2a3f,	// (0x000afa08) aid_postcard_touch_down_pane

0x2a57,	// (0x000afa20) aid_postcard_touch_up_pane_ParamLimits

0x2a57,	// (0x000afa20) aid_postcard_touch_up_pane

0xf0b4,	// (0x000bc07d) main_blid2_pane

0x9f9a,	// (0x000b6f63) popup_blid2_search_window

0x9646,	// (0x000b660f) blid2_gps_pane

0x9646,	// (0x000b660f) blid2_navig_pane

0x9646,	// (0x000b660f) blid2_search_pane

0x9646,	// (0x000b660f) blid2_tripm_pane

0x6c84,	// (0x000b3c4d) blid2_search_pane_g1_ParamLimits

0x6c84,	// (0x000b3c4d) blid2_search_pane_g1

0x6c97,	// (0x000b3c60) blid2_search_pane_t1_ParamLimits

0x6c97,	// (0x000b3c60) blid2_search_pane_t1

0x6ca9,	// (0x000b3c72) aid_size_cell_blid2_gps_ParamLimits

0x6ca9,	// (0x000b3c72) aid_size_cell_blid2_gps

0x6cc1,	// (0x000b3c8a) blid2_gps_pane_g1_ParamLimits

0x6cc1,	// (0x000b3c8a) blid2_gps_pane_g1

0x6cd5,	// (0x000b3c9e) grid_blid2_satellite_pane_ParamLimits

0x6cd5,	// (0x000b3c9e) grid_blid2_satellite_pane

0x6ced,	// (0x000b3cb6) blid2_navig_pane_g1_ParamLimits

0x6ced,	// (0x000b3cb6) blid2_navig_pane_g1

0x6cf9,	// (0x000b3cc2) blid2_navig_pane_t1_ParamLimits

0x6cf9,	// (0x000b3cc2) blid2_navig_pane_t1

0x6d14,	// (0x000b3cdd) blid2_navig_pane_t2_ParamLimits

0x6d14,	// (0x000b3cdd) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x000bcab9) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x000bcab9) blid2_navig_pane_t

0x6d2f,	// (0x000b3cf8) blid2_navig_ring_pane_ParamLimits

0x6d2f,	// (0x000b3cf8) blid2_navig_ring_pane

0x6d4a,	// (0x000b3d13) blid2_speed_pane_ParamLimits

0x6d4a,	// (0x000b3d13) blid2_speed_pane

0x6d56,	// (0x000b3d1f) blid2_tripm_pane_g1_ParamLimits

0x6d56,	// (0x000b3d1f) blid2_tripm_pane_g1

0x6d71,	// (0x000b3d3a) blid2_tripm_pane_g2_ParamLimits

0x6d71,	// (0x000b3d3a) blid2_tripm_pane_g2

0x6d85,	// (0x000b3d4e) blid2_tripm_pane_g3_ParamLimits

0x6d85,	// (0x000b3d4e) blid2_tripm_pane_g3

0x6d99,	// (0x000b3d62) blid2_tripm_pane_g4_ParamLimits

0x6d99,	// (0x000b3d62) blid2_tripm_pane_g4

0x6dad,	// (0x000b3d76) blid2_tripm_pane_g5_ParamLimits

0x6dad,	// (0x000b3d76) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x000bcabe) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x000bcabe) blid2_tripm_pane_g

0x6dd3,	// (0x000b3d9c) blid2_tripm_pane_t1_ParamLimits

0x6dd3,	// (0x000b3d9c) blid2_tripm_pane_t1

0x6dec,	// (0x000b3db5) blid2_tripm_pane_t2_ParamLimits

0x6dec,	// (0x000b3db5) blid2_tripm_pane_t2

0x6e05,	// (0x000b3dce) blid2_tripm_pane_t3_ParamLimits

0x6e05,	// (0x000b3dce) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x000bcacb) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x000bcacb) blid2_tripm_pane_t

0x6e4c,	// (0x000b3e15) cell_blid2_satellite_pane_ParamLimits

0x6e4c,	// (0x000b3e15) cell_blid2_satellite_pane

0x6e68,	// (0x000b3e31) cell_blid2_satellite_pane_g1

0xddc6,	// (0x000bad8f) cell_blid2_satellite_pane_t1

0xce5f,	// (0x000b9e28) blid2_speed_pane_g1

0xddd4,	// (0x000bad9d) blid2_speed_pane_t1

0xdde2,	// (0x000badab) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x000bcad4) blid2_speed_pane_t

0xce5f,	// (0x000b9e28) blid2_navig_ring_pane_g1

0x6e71,	// (0x000b3e3a) blid2_navig_ring_pane_g2

0x6e79,	// (0x000b3e42) blid2_navig_ring_pane_g3

0x6e81,	// (0x000b3e4a) blid2_navig_ring_pane_g4

0x6e89,	// (0x000b3e52) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x000bcad9) blid2_navig_ring_pane_g

0x9646,	// (0x000b660f) bg_popup_window_pane_cp011

0xddf0,	// (0x000badb9) popup_blid2_search_window_g1

0xddf8,	// (0x000badc1) popup_blid2_search_window_t1

0xde06,	// (0x000badcf) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x000bcae4) popup_blid2_search_window_t

0xac6c,	// (0x000b7c35) main_browser_pane_g1

0xa95a,	// (0x000b7923) main_browser_pane_ParamLimits

0x9650,	// (0x000b6619) bg_button_pane_cp011_ParamLimits

0x5d0e,	// (0x000b2cd7) cell_vitu2_function_pane_g1_ParamLimits

0xca27,	// (0x000b99f0) bg_popup_sub_pane_cp22_ParamLimits

0x66e8,	// (0x000b36b1) input_focus_pane_cp08_ParamLimits

0x66ff,	// (0x000b36c8) popup_vitu2_query_button_pane_ParamLimits

0x66ff,	// (0x000b36c8) popup_vitu2_query_button_pane

0x6710,	// (0x000b36d9) popup_vitu2_query_input_button_pane

0xda87,	// (0x000baa50) popup_vitu2_query_window_g1_ParamLimits

0x671a,	// (0x000b36e3) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x000bc9e5) popup_vitu2_query_window_g_ParamLimits

0x9646,	// (0x000b660f) bg_button_pane_cp026

0x6e91,	// (0x000b3e5a) popup_vitu2_query_input_button_pane_g1

0x9646,	// (0x000b660f) bg_button_pane_cp025

0xde14,	// (0x000baddd) popup_vitu2_query_button_pane_t1

0x414d,	// (0x000b1116) main_mp3_pane_t6

0x415b,	// (0x000b1124) popup_slider_window_cp01

0xa3c3,	// (0x000b738c) cam4_battery_pane

0xa418,	// (0x000b73e1) cam4_battery_pane_cp02

0xa5c7,	// (0x000b7590) cam4_battery_pane_cp01

0xa5c7,	// (0x000b7590) cam4_battery_pane_cp03

0xd779,	// (0x000ba742) cam4_battery_pane_g1

0xce5f,	// (0x000b9e28) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x000bcae9) cam4_battery_pane_g

0xcd25,	// (0x000b9cee) popup_blid_sat_info2_window_t11

0xb3a6,	// (0x000b836f) aid_size_touch_mv_arrow_left_ParamLimits

0xb3d1,	// (0x000b839a) aid_size_touch_mv_arrow_right_ParamLimits

0xb42f,	// (0x000b83f8) navi_pane_g1_ParamLimits

0xb43b,	// (0x000b8404) navi_pane_g2_ParamLimits

0xb469,	// (0x000b8432) navi_pane_g3_ParamLimits

0xf3e1,	// (0x000bc3aa) navi_pane_g_ParamLimits

0x2474,	// (0x000af43d) navi_pane_mv_t1_ParamLimits

0x4ea1,	// (0x000b1e6a) grid_imed_effect_pane_ParamLimits

0x0efe,	// (0x000adec7) aid_placing_vt_slider_lsc

0xabb7,	// (0x000b7b80) aid_placing_vt_slider_prt

0xbb84,	// (0x000b8b4d) bg_tb_trans_pane_cp01_ParamLimits

0xcfcc,	// (0x000b9f95) popup_image_details_window_g1_ParamLimits

0xcfdf,	// (0x000b9fa8) popup_image_details_window_g2_ParamLimits

0xcff4,	// (0x000b9fbd) popup_image_details_window_g3_ParamLimits

0xcff4,	// (0x000b9fbd) popup_image_details_window_g3

0xf714,	// (0x000bc6dd) popup_image_details_window_g_ParamLimits

0xd008,	// (0x000b9fd1) popup_image_details_window_t1_ParamLimits

0xd01a,	// (0x000b9fe3) popup_image_details_window_t2_ParamLimits

0xd033,	// (0x000b9ffc) popup_image_details_window_t3_ParamLimits

0xd047,	// (0x000ba010) popup_image_details_window_t4_ParamLimits

0xd062,	// (0x000ba02b) popup_image_details_window_t5_ParamLimits

0xf71b,	// (0x000bc6e4) popup_image_details_window_t_ParamLimits

0x6a9e,	// (0x000b3a67) cl_header_name_pane_ParamLimits

0x6a9e,	// (0x000b3a67) cl_header_name_pane

0x6e99,	// (0x000b3e62) cl_header_name_pane_t1_ParamLimits

0x6e99,	// (0x000b3e62) cl_header_name_pane_t1

0x6eba,	// (0x000b3e83) cl_header_name_pane_t2_ParamLimits

0x6eba,	// (0x000b3e83) cl_header_name_pane_t2

0x6efc,	// (0x000b3ec5) cl_header_name_pane_t3_ParamLimits

0x6efc,	// (0x000b3ec5) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x000bcaee) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x000bcaee) cl_header_name_pane_t

0xb4f8,	// (0x000b84c1) navi_pane_mv_g2_ParamLimits

0xd7ea,	// (0x000ba7b3) field_vitu2_entry_pane_g1_ParamLimits

0xd7f6,	// (0x000ba7bf) field_vitu2_entry_pane_g2_ParamLimits

0xd802,	// (0x000ba7cb) field_vitu2_entry_pane_g3_ParamLimits

0xd802,	// (0x000ba7cb) field_vitu2_entry_pane_g3

0xf91b,	// (0x000bc8e4) field_vitu2_entry_pane_g_ParamLimits

0xa4b1,	// (0x000b747a) cell_vitu2_itu_pane_g1_ParamLimits

0x5ca2,	// (0x000b2c6b) cell_vitu2_itu_pane_g2_ParamLimits

0x5ca2,	// (0x000b2c6b) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x000bc8f0) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x000bc8f0) cell_vitu2_itu_pane_g

0x9650,	// (0x000b6619) bg_vkb2_func_pane_cp05_ParamLimits

0x9650,	// (0x000b6619) bg_vkb2_func_pane_cp05

0x9650,	// (0x000b6619) bg_vkb2_func_pane_cp03

0x9650,	// (0x000b6619) bg_vkb2_func_pane_cp04

0x9650,	// (0x000b6619) bg_vkb2_func_pane_cp10_ParamLimits

0x9650,	// (0x000b6619) bg_vkb2_func_pane_cp10

0x6a40,	// (0x000b3a09) bg_vkb2_func_pane_cp08

0x6a26,	// (0x000b39ef) bg_vkb2_func_pane_cp06

0x6a34,	// (0x000b39fd) bg_vkb2_func_pane_cp07

0xdd17,	// (0x000bace0) bg_vkb2_func_pane_cp11_ParamLimits

0xdd17,	// (0x000bace0) bg_vkb2_func_pane_cp11

0xdd2c,	// (0x000bacf5) bg_vkb2_func_pane_cp12_ParamLimits

0xdd2c,	// (0x000bacf5) bg_vkb2_func_pane_cp12

0x9646,	// (0x000b660f) bg_vkb2_func_pane_cp09

0xd822,	// (0x000ba7eb) bg_vkb2_func_pane_g1

0xad7d,	// (0x000b7d46) bg_vkb2_func_pane_g2

0xd82a,	// (0x000ba7f3) bg_vkb2_func_pane_g3

0xd832,	// (0x000ba7fb) bg_vkb2_func_pane_g4

0xda4c,	// (0x000baa15) bg_vkb2_func_pane_g5

0xd84a,	// (0x000ba813) bg_vkb2_func_pane_g6

0xd852,	// (0x000ba81b) bg_vkb2_func_pane_g7

0xd842,	// (0x000ba80b) bg_vkb2_func_pane_g8

0xad5d,	// (0x000b7d26) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x000bcaf5) bg_vkb2_func_pane_g

0x6dc1,	// (0x000b3d8a) blid2_tripm_pane_g6_ParamLimits

0x6dc1,	// (0x000b3d8a) blid2_tripm_pane_g6

0xd72c,	// (0x000ba6f5) mp4_progress_pane_g1

0x6e38,	// (0x000b3e01) blid2_tripm_values_pane_ParamLimits

0x6e38,	// (0x000b3e01) blid2_tripm_values_pane

0x6f2d,	// (0x000b3ef6) blid2_tripm_values_pane_t1

0x6f3b,	// (0x000b3f04) blid2_tripm_values_pane_t2

0x6f49,	// (0x000b3f12) blid2_tripm_values_pane_t3

0x6f57,	// (0x000b3f20) blid2_tripm_values_pane_t4

0x6f65,	// (0x000b3f2e) blid2_tripm_values_pane_t5

0x6f73,	// (0x000b3f3c) blid2_tripm_values_pane_t6

0x6f81,	// (0x000b3f4a) blid2_tripm_values_pane_t7

0x6f8f,	// (0x000b3f58) blid2_tripm_values_pane_t8

0x6f9d,	// (0x000b3f66) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x000bcb08) blid2_tripm_values_pane_t

0x0f3b,	// (0x000adf04) call_video_pane_t1_ParamLimits

0x0f55,	// (0x000adf1e) call_video_pane_t2_ParamLimits

0xf26a,	// (0x000bc233) call_video_pane_t_ParamLimits

0x29bd,	// (0x000af986) msg_header_pane_g1_ParamLimits

0xb6e4,	// (0x000b86ad) msg_header_pane_g2_ParamLimits

0xb6e4,	// (0x000b86ad) msg_header_pane_g2

0x0001,

0xf484,	// (0x000bc44d) msg_header_pane_g_ParamLimits

0xf484,	// (0x000bc44d) msg_header_pane_g

0xa95a,	// (0x000b7923) main_clock2_pane_ParamLimits

0x4b9e,	// (0x000b1b67) grid_clock2_toolbar_pane_ParamLimits

0x4b9e,	// (0x000b1b67) grid_clock2_toolbar_pane

0x4b9e,	// (0x000b1b67) listscroll_clock2_pane_ParamLimits

0x4b9e,	// (0x000b1b67) listscroll_clock2_pane

0x4c7d,	// (0x000b1c46) main_clock2_pane_t3_ParamLimits

0x4c7d,	// (0x000b1c46) main_clock2_pane_t3

0x4ca0,	// (0x000b1c69) main_clock2_pane_t4_ParamLimits

0x4ca0,	// (0x000b1c69) main_clock2_pane_t4

0xde22,	// (0x000badeb) cell_clock2_toolbar_pane

0xde2a,	// (0x000badf3) cell_clock2_toolbar_pane_cp01

0xde2a,	// (0x000badf3) cell_clock2_toolbar_pane_cp02

0xde32,	// (0x000badfb) cell_clock2_toolbar_pane_cp03

0xde3a,	// (0x000bae03) list_clock2_pane

0xb32b,	// (0x000b82f4) scroll_pane_cp10

0xde42,	// (0x000bae0b) list_single_clock2_pane_ParamLimits

0xde42,	// (0x000bae0b) list_single_clock2_pane

0xab0b,	// (0x000b7ad4) list_highlight_pane_cp08

0xde4f,	// (0x000bae18) list_single_clock2_pane_t1

0xde5d,	// (0x000bae26) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x000bcb1b) list_single_clock2_pane_t

0x9646,	// (0x000b660f) bg_button_pane_cp10

0xde6b,	// (0x000bae34) cell_clock2_toolbar_pane_g1

0x29cb,	// (0x000af994) aid_main_viewer_pane_g1_ParamLimits

0x29cb,	// (0x000af994) aid_main_viewer_pane_g1

0x29d9,	// (0x000af9a2) aid_main_viewer_pane_g2_ParamLimits

0x29d9,	// (0x000af9a2) aid_main_viewer_pane_g2

0x29e7,	// (0x000af9b0) aid_main_viewer_pane_g3_ParamLimits

0x29e7,	// (0x000af9b0) aid_main_viewer_pane_g3

0x29f6,	// (0x000af9bf) aid_main_viewer_pane_g4_ParamLimits

0x29f6,	// (0x000af9bf) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x000bc45e) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x000bc45e) aid_main_viewer_pane_g

0x3351,	// (0x000b031a) main_calc_pane_ParamLimits

0x3375,	// (0x000b033e) main_dialer2_pane_ParamLimits

0xf0b4,	// (0x000bc07d) main_cam6_pane

0xf0b4,	// (0x000bc07d) main_vid6_pane

0x4baa,	// (0x000b1b73) listscroll_gen_pane_cp06_ParamLimits

0x4baa,	// (0x000b1b73) listscroll_gen_pane_cp06

0x4cc3,	// (0x000b1c8c) main_clock2_pane_t5_ParamLimits

0x4cc3,	// (0x000b1c8c) main_clock2_pane_t5

0x4d21,	// (0x000b1cea) aid_call2_pane_cp10_ParamLimits

0x4d33,	// (0x000b1cfc) aid_call_pane_cp10_ParamLimits

0xb39a,	// (0x000b8363) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb39a,	// (0x000b8363) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4d45,	// (0x000b1d0e) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4d45,	// (0x000b1d0e) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb39a,	// (0x000b8363) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d0,	// (0x000bc799) popup_clock_analogue_window_cp10_g_ParamLimits

0x4d5b,	// (0x000b1d24) popup_clock_analogue_window_cp10_t1_ParamLimits

0x53ff,	// (0x000b23c8) cell_dialer2_keypad_pane_g2_ParamLimits

0x53ff,	// (0x000b23c8) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x000bc883) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x000bc883) cell_dialer2_keypad_pane_g

0x541b,	// (0x000b23e4) cell_dialer2_keypad_pane_t1

0x603d,	// (0x000b3006) main_cset_text2_pane_ParamLimits

0x603d,	// (0x000b3006) main_cset_text2_pane

0xdc7f,	// (0x000bac48) area_vitu2_query_pane_g1_ParamLimits

0x69c3,	// (0x000b398c) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x000bca38) area_vitu2_query_pane_g_ParamLimits

0xa5a3,	// (0x000b756c) area_vitu2_query_pane_t7_ParamLimits

0xa5a3,	// (0x000b756c) area_vitu2_query_pane_t7

0x6a26,	// (0x000b39ef) bg_button_pane_cp018_ParamLimits

0x6a34,	// (0x000b39fd) bg_button_pane_cp021_ParamLimits

0x6a40,	// (0x000b3a09) bg_button_pane_cp022_ParamLimits

0x6a40,	// (0x000b3a09) bg_vkb2_func_pane_cp08_ParamLimits

0x6a26,	// (0x000b39ef) bg_vkb2_func_pane_cp06_ParamLimits

0x6a34,	// (0x000b39fd) bg_vkb2_func_pane_cp07_ParamLimits

0x6a51,	// (0x000b3a1a) input_focus_pane_cp09_ParamLimits

0xa621,	// (0x000b75ea) cam6_autofocus_pane_ParamLimits

0xa621,	// (0x000b75ea) cam6_autofocus_pane

0x6fab,	// (0x000b3f74) cam6_image_uncrop_pane_ParamLimits

0x6fab,	// (0x000b3f74) cam6_image_uncrop_pane

0x6fba,	// (0x000b3f83) cam6_indi_pane_ParamLimits

0x6fba,	// (0x000b3f83) cam6_indi_pane

0x6fd0,	// (0x000b3f99) cam6_mode_pane_ParamLimits

0x6fd0,	// (0x000b3f99) cam6_mode_pane

0x6fe2,	// (0x000b3fab) cam6_timer_pane_ParamLimits

0x6fe2,	// (0x000b3fab) cam6_timer_pane

0x6fee,	// (0x000b3fb7) cam6_zoom_pane_ParamLimits

0x6fee,	// (0x000b3fb7) cam6_zoom_pane

0x6ffc,	// (0x000b3fc5) cam6_mode_pane_g1_ParamLimits

0x6ffc,	// (0x000b3fc5) cam6_mode_pane_g1

0x700c,	// (0x000b3fd5) cam6_mode_pane_g2_ParamLimits

0x700c,	// (0x000b3fd5) cam6_mode_pane_g2

0x701c,	// (0x000b3fe5) cam6_mode_pane_g3_ParamLimits

0x701c,	// (0x000b3fe5) cam6_mode_pane_g3

0x702c,	// (0x000b3ff5) cam6_mode_pane_g4_ParamLimits

0x702c,	// (0x000b3ff5) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x000bcb20) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x000bcb20) cam6_mode_pane_g

0xde73,	// (0x000bae3c) bg_tb_trans_pane_cp08_ParamLimits

0xde73,	// (0x000bae3c) bg_tb_trans_pane_cp08

0xde81,	// (0x000bae4a) cam6_battery_pane_ParamLimits

0xde81,	// (0x000bae4a) cam6_battery_pane

0xde97,	// (0x000bae60) cam6_indi_pane_g1_ParamLimits

0xde97,	// (0x000bae60) cam6_indi_pane_g1

0xdea9,	// (0x000bae72) cam6_indi_pane_g2_ParamLimits

0xdea9,	// (0x000bae72) cam6_indi_pane_g2

0xdebb,	// (0x000bae84) cam6_indi_pane_g3_ParamLimits

0xdebb,	// (0x000bae84) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x000bcb29) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x000bcb29) cam6_indi_pane_g

0xdecd,	// (0x000bae96) cam6_indi_pane_t1_ParamLimits

0xdecd,	// (0x000bae96) cam6_indi_pane_t1

0x5a40,	// (0x000b2a09) cam6_autofocus_pane_g1

0x5a38,	// (0x000b2a01) cam6_autofocus_pane_g2

0x5a50,	// (0x000b2a19) cam6_autofocus_pane_g3

0x5a48,	// (0x000b2a11) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x000bcb30) cam6_autofocus_pane_g

0xdef3,	// (0x000baebc) cam6_timer_pane_g1

0xdefb,	// (0x000baec4) cam6_timer_pane_t1

0xdf09,	// (0x000baed2) cam6_zoom_cont_pane

0xdf11,	// (0x000baeda) cam6_zoom_pane_g1

0xdf19,	// (0x000baee2) cam6_zoom_pane_g2

0x703c,	// (0x000b4005) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x000bcb39) cam6_zoom_pane_g

0xce5f,	// (0x000b9e28) cam6_battery_pane_g1

0xce5f,	// (0x000b9e28) cam6_battery_pane_g2

0x0001,

0xf6d8,	// (0x000bc6a1) cam6_battery_pane_g

0xdf21,	// (0x000baeea) cam6_zoom_cont_pane_g1

0xdf2a,	// (0x000baef3) cam6_zoom_cont_pane_g2

0xdf33,	// (0x000baefc) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x000bcb40) cam6_zoom_cont_pane_g

0x7059,	// (0x000b4022) cam6_mode_pane_cp_ParamLimits

0x7059,	// (0x000b4022) cam6_mode_pane_cp

0x706b,	// (0x000b4034) cam6_zoom_pane_cp_ParamLimits

0x706b,	// (0x000b4034) cam6_zoom_pane_cp

0x7079,	// (0x000b4042) vid6_image_uncrop_cif_pane_ParamLimits

0x7079,	// (0x000b4042) vid6_image_uncrop_cif_pane

0x7089,	// (0x000b4052) vid6_image_uncrop_nhd_pane_ParamLimits

0x7089,	// (0x000b4052) vid6_image_uncrop_nhd_pane

0x7098,	// (0x000b4061) vid6_image_uncrop_vga_pane_ParamLimits

0x7098,	// (0x000b4061) vid6_image_uncrop_vga_pane

0x70a7,	// (0x000b4070) vid6_image_uncrop_wvga_pane_ParamLimits

0x70a7,	// (0x000b4070) vid6_image_uncrop_wvga_pane

0x70b6,	// (0x000b407f) vid6_indi_pane_ParamLimits

0x70b6,	// (0x000b407f) vid6_indi_pane

0xde73,	// (0x000bae3c) bg_tb_trans_pane_cp09_ParamLimits

0xde73,	// (0x000bae3c) bg_tb_trans_pane_cp09

0xdf4b,	// (0x000baf14) cam6_battery_pane_cp_ParamLimits

0xdf4b,	// (0x000baf14) cam6_battery_pane_cp

0xdf57,	// (0x000baf20) vid6_indi_pane_g1_ParamLimits

0xdf57,	// (0x000baf20) vid6_indi_pane_g1

0xdf69,	// (0x000baf32) vid6_indi_pane_g2_ParamLimits

0xdf69,	// (0x000baf32) vid6_indi_pane_g2

0xdf7b,	// (0x000baf44) vid6_indi_pane_g3_ParamLimits

0xdf7b,	// (0x000baf44) vid6_indi_pane_g3

0xdf92,	// (0x000baf5b) vid6_indi_pane_g4_ParamLimits

0xdf92,	// (0x000baf5b) vid6_indi_pane_g4

0xdfa9,	// (0x000baf72) vid6_indi_pane_g5_ParamLimits

0xdfa9,	// (0x000baf72) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x000bcb47) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x000bcb47) vid6_indi_pane_g

0xdfc3,	// (0x000baf8c) vid6_indi_pane_t1_ParamLimits

0xdfc3,	// (0x000baf8c) vid6_indi_pane_t1

0xdfd9,	// (0x000bafa2) vid6_indi_pane_t2_ParamLimits

0xdfd9,	// (0x000bafa2) vid6_indi_pane_t2

0xe001,	// (0x000bafca) vid6_indi_pane_t3_ParamLimits

0xe001,	// (0x000bafca) vid6_indi_pane_t3

0xe029,	// (0x000baff2) vid6_indi_pane_t4_ParamLimits

0xe029,	// (0x000baff2) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x000bcb52) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x000bcb52) vid6_indi_pane_t

0xe04d,	// (0x000bb016) wait_bar_pane_cp08

0x70ce,	// (0x000b4097) main_cset_text2_pane_t1_ParamLimits

0x70ce,	// (0x000b4097) main_cset_text2_pane_t1

0x7044,	// (0x000b400d) listscroll_gen_pane_cp06_t1_ParamLimits

0x7044,	// (0x000b400d) listscroll_gen_pane_cp06_t1

0xf0b4,	// (0x000bc07d) main_cam6_set_pane

0xa3b5,	// (0x000b737e) bg_tb_trans_pane_cp06_ParamLimits

0xa3cb,	// (0x000b7394) cam4_indicators_pane_g1_ParamLimits

0xa3dc,	// (0x000b73a5) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x000bc8c0) cam4_indicators_pane_g_ParamLimits

0xa3f4,	// (0x000b73bd) cam4_indicators_pane_t1_ParamLimits

0x9650,	// (0x000b6619) bg_tb_trans_pane_cp07_ParamLimits

0xa422,	// (0x000b73eb) vid4_indicators_pane_g1_ParamLimits

0xa438,	// (0x000b7401) vid4_indicators_pane_g2_ParamLimits

0xa44c,	// (0x000b7415) vid4_indicators_pane_g3_ParamLimits

0xa45f,	// (0x000b7428) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x000bc8d2) vid4_indicators_pane_g_ParamLimits

0xa47d,	// (0x000b7446) vid4_indicators_pane_t1_ParamLimits

0xa5cf,	// (0x000b7598) vid4_progress_pane_g1_ParamLimits

0xa5df,	// (0x000b75a8) vid4_progress_pane_g2_ParamLimits

0x6b92,	// (0x000b3b5b) vid4_progress_pane_g3_ParamLimits

0xa3dc,	// (0x000b73a5) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x000bca83) vid4_progress_pane_g_ParamLimits

0x6ba4,	// (0x000b3b6d) vid4_progress_pane_t1_ParamLimits

0xa5ef,	// (0x000b75b8) vid4_progress_pane_t2_ParamLimits

0xa604,	// (0x000b75cd) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x000bca8e) vid4_progress_pane_t_ParamLimits

0x6bbc,	// (0x000b3b85) wait_bar_pane_cp07_ParamLimits

0x70ef,	// (0x000b40b8) main_cam6_set_pane_g2_ParamLimits

0x70ef,	// (0x000b40b8) main_cam6_set_pane_g2

0x7115,	// (0x000b40de) main_cset6_listscroll_pane_ParamLimits

0x7115,	// (0x000b40de) main_cset6_listscroll_pane

0x7133,	// (0x000b40fc) main_cset6_slider_pane_ParamLimits

0x7133,	// (0x000b40fc) main_cset6_slider_pane

0x7149,	// (0x000b4112) main_cset6_text2_pane_ParamLimits

0x7149,	// (0x000b4112) main_cset6_text2_pane

0xe05c,	// (0x000bb025) main_cset6_text_pane

0xe064,	// (0x000bb02d) main_cset_list_pane_copy1_ParamLimits

0xe064,	// (0x000bb02d) main_cset_list_pane_copy1

0xe074,	// (0x000bb03d) scroll_pane_cp028_copy1

0x7157,	// (0x000b4120) cset_list_set_pane_copy1

0x716b,	// (0x000b4134) aid_position_infowindow_above_copy1

0x7173,	// (0x000b413c) aid_position_infowindow_below_copy1

0x717b,	// (0x000b4144) cset_list_set_pane_g1_copy1

0x7183,	// (0x000b414c) cset_list_set_pane_g3_copy1_ParamLimits

0x7183,	// (0x000b414c) cset_list_set_pane_g3_copy1

0x7192,	// (0x000b415b) cset_list_set_pane_t1_copy1_ParamLimits

0x7192,	// (0x000b415b) cset_list_set_pane_t1_copy1

0xbb84,	// (0x000b8b4d) list_highlight_pane_cp021_copy1_ParamLimits

0xbb84,	// (0x000b8b4d) list_highlight_pane_cp021_copy1

0xe07d,	// (0x000bb046) cset6_slider_pane_ParamLimits

0xe07d,	// (0x000bb046) cset6_slider_pane

0xe0a9,	// (0x000bb072) main_cset6_slider_pane_g1_ParamLimits

0xe0a9,	// (0x000bb072) main_cset6_slider_pane_g1

0x71a7,	// (0x000b4170) main_cset6_slider_pane_g2_ParamLimits

0x71a7,	// (0x000b4170) main_cset6_slider_pane_g2

0xe0d1,	// (0x000bb09a) main_cset6_slider_pane_g3_ParamLimits

0xe0d1,	// (0x000bb09a) main_cset6_slider_pane_g3

0x71cf,	// (0x000b4198) main_cset6_slider_pane_g4_ParamLimits

0x71cf,	// (0x000b4198) main_cset6_slider_pane_g4

0x71db,	// (0x000b41a4) main_cset6_slider_pane_g5_ParamLimits

0x71db,	// (0x000b41a4) main_cset6_slider_pane_g5

0xd955,	// (0x000ba91e) main_cset6_slider_pane_g7_ParamLimits

0xd955,	// (0x000ba91e) main_cset6_slider_pane_g7

0xd961,	// (0x000ba92a) main_cset6_slider_pane_g8_ParamLimits

0xd961,	// (0x000ba92a) main_cset6_slider_pane_g8

0x60ec,	// (0x000b30b5) main_cset6_slider_pane_g9_ParamLimits

0x60ec,	// (0x000b30b5) main_cset6_slider_pane_g9

0x60f8,	// (0x000b30c1) main_cset6_slider_pane_g10_ParamLimits

0x60f8,	// (0x000b30c1) main_cset6_slider_pane_g10

0x6104,	// (0x000b30cd) main_cset6_slider_pane_g11_ParamLimits

0x6104,	// (0x000b30cd) main_cset6_slider_pane_g11

0x6110,	// (0x000b30d9) main_cset6_slider_pane_g12_ParamLimits

0x6110,	// (0x000b30d9) main_cset6_slider_pane_g12

0x611c,	// (0x000b30e5) main_cset6_slider_pane_g13_ParamLimits

0x611c,	// (0x000b30e5) main_cset6_slider_pane_g13

0x6128,	// (0x000b30f1) main_cset6_slider_pane_g14_ParamLimits

0x6128,	// (0x000b30f1) main_cset6_slider_pane_g14

0x71e9,	// (0x000b41b2) main_cset6_slider_pane_g15_ParamLimits

0x71e9,	// (0x000b41b2) main_cset6_slider_pane_g15

0x614c,	// (0x000b3115) main_cset6_slider_pane_g16_ParamLimits

0x614c,	// (0x000b3115) main_cset6_slider_pane_g16

0x615a,	// (0x000b3123) main_cset6_slider_pane_g17_ParamLimits

0x615a,	// (0x000b3123) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x000bcb5b) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x000bcb5b) main_cset6_slider_pane_g

0xe0dd,	// (0x000bb0a6) main_cset6_slider_pane_t1_ParamLimits

0xe0dd,	// (0x000bb0a6) main_cset6_slider_pane_t1

0x7219,	// (0x000b41e2) main_cset6_slider_pane_t2_ParamLimits

0x7219,	// (0x000b41e2) main_cset6_slider_pane_t2

0x7244,	// (0x000b420d) main_cset6_slider_pane_t3_ParamLimits

0x7244,	// (0x000b420d) main_cset6_slider_pane_t3

0x726f,	// (0x000b4238) main_cset6_slider_pane_t4_ParamLimits

0x726f,	// (0x000b4238) main_cset6_slider_pane_t4

0x729c,	// (0x000b4265) main_cset6_slider_pane_t5_ParamLimits

0x729c,	// (0x000b4265) main_cset6_slider_pane_t5

0xe11e,	// (0x000bb0e7) main_cset6_slider_pane_t7_ParamLimits

0xe11e,	// (0x000bb0e7) main_cset6_slider_pane_t7

0x72c9,	// (0x000b4292) main_cset6_slider_pane_t8_ParamLimits

0x72c9,	// (0x000b4292) main_cset6_slider_pane_t8

0x72ed,	// (0x000b42b6) main_cset6_slider_pane_t9_ParamLimits

0x72ed,	// (0x000b42b6) main_cset6_slider_pane_t9

0x7311,	// (0x000b42da) main_cset6_slider_pane_t10_ParamLimits

0x7311,	// (0x000b42da) main_cset6_slider_pane_t10

0x7335,	// (0x000b42fe) main_cset6_slider_pane_t11_ParamLimits

0x7335,	// (0x000b42fe) main_cset6_slider_pane_t11

0xe154,	// (0x000bb11d) main_cset6_slider_pane_t14_ParamLimits

0xe154,	// (0x000bb11d) main_cset6_slider_pane_t14

0xe18d,	// (0x000bb156) main_cset6_slider_pane_t15_ParamLimits

0xe18d,	// (0x000bb156) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x000bcb80) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x000bcb80) main_cset6_slider_pane_t

0xe1c6,	// (0x000bb18f) cset_slider_pane_g1_copy1

0xe1fa,	// (0x000bb1c3) cset_slider_pane_g2_copy1

0xe203,	// (0x000bb1cc) cset_slider_pane_g3_copy1

0x9646,	// (0x000b660f) bg_popup_sub_pane_cp011_copy1

0xe20c,	// (0x000bb1d5) main_cset_text_pane_g1_copy1

0xda9b,	// (0x000baa64) main_cset_text_pane_t1_copy1

0xdaa9,	// (0x000baa72) main_cset_text_pane_t2_copy1

0xdab7,	// (0x000baa80) main_cset_text_pane_t3_copy1

0xdac5,	// (0x000baa8e) main_cset_text_pane_t4_copy1

0xdad3,	// (0x000baa9c) main_cset_text_pane_t5_copy1

0xe214,	// (0x000bb1dd) main_cset_text_pane_t6_copy1

0xe222,	// (0x000bb1eb) main_cset_text_pane_t7_copy1

0x70ce,	// (0x000b4097) main_cset_text2_pane_t1_copy1

0x9650,	// (0x000b6619) main_ncimui_pane

0x3603,	// (0x000b05cc) popup_query_ncimui_window_ParamLimits

0x3603,	// (0x000b05cc) popup_query_ncimui_window

0xbb92,	// (0x000b8b5b) field_cale_ev2_pane_g4_ParamLimits

0xbb92,	// (0x000b8b5b) field_cale_ev2_pane_g4

0x52ca,	// (0x000b2293) cell_video_dialer_keypad_pane_g2_ParamLimits

0x52ca,	// (0x000b2293) cell_video_dialer_keypad_pane_g2

0x0001,

0xf891,	// (0x000bc85a) cell_video_dialer_keypad_pane_g_ParamLimits

0xf891,	// (0x000bc85a) cell_video_dialer_keypad_pane_g

0x52e2,	// (0x000b22ab) cell_video_dialer_keypad_pane_t1

0x9646,	// (0x000b660f) bg_popup_window_pane_cp012

0xb217,	// (0x000b81e0) heading_pane_cp06

0xe24e,	// (0x000bb217) ncim_query_content_pane

0x9646,	// (0x000b660f) bg_popup_heading_pane_cp01

0xe256,	// (0x000bb21f) ncim_heading_pane_t1

0xe264,	// (0x000bb22d) ncim_indicator_popup_pane

0xe276,	// (0x000bb23f) ncim_query_button_pane

0xe28c,	// (0x000bb255) ncim_query_content_pane_t1

0xe29e,	// (0x000bb267) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x000bcbc4) ncim_query_content_pane_t

0xe2d8,	// (0x000bb2a1) ncim_query_list_pane

0xe2ea,	// (0x000bb2b3) ncim_query_popup_pane

0xe264,	// (0x000bb22d) ncim_indicator_popup_pane_ParamLimits

0x755a,	// (0x000b4523) ncim_query_content_pane_g1_ParamLimits

0x755a,	// (0x000b4523) ncim_query_content_pane_g1

0xe28c,	// (0x000bb255) ncim_query_content_pane_t1_ParamLimits

0xe29e,	// (0x000bb267) ncim_query_content_pane_t2_ParamLimits

0x7566,	// (0x000b452f) ncim_query_content_pane_t3_ParamLimits

0x7566,	// (0x000b452f) ncim_query_content_pane_t3

0x758e,	// (0x000b4557) ncim_query_content_pane_t4_ParamLimits

0x758e,	// (0x000b4557) ncim_query_content_pane_t4

0x75b6,	// (0x000b457f) ncim_query_content_pane_t5_ParamLimits

0x75b6,	// (0x000b457f) ncim_query_content_pane_t5

0xe2b0,	// (0x000bb279) ncim_query_content_pane_t6_ParamLimits

0xe2b0,	// (0x000bb279) ncim_query_content_pane_t6

0xfbfb,	// (0x000bcbc4) ncim_query_content_pane_t_ParamLimits

0xe2d8,	// (0x000bb2a1) ncim_query_list_pane_ParamLimits

0xe2ea,	// (0x000bb2b3) ncim_query_popup_pane_ParamLimits

0xe2fe,	// (0x000bb2c7) wait_bar_pane_cp04

0x9646,	// (0x000b660f) input_focus_pane_cp011

0xe306,	// (0x000bb2cf) ncim_query_popup_pane_t1

0xe314,	// (0x000bb2dd) ncim_list_query_list_pane_ParamLimits

0xe314,	// (0x000bb2dd) ncim_list_query_list_pane

0x9646,	// (0x000b660f) bg_button_pane_cp027

0xe327,	// (0x000bb2f0) ncim_query_button_pane_g1

0x9646,	// (0x000b660f) list_highlight_pane_cp012

0xe331,	// (0x000bb2fa) ncim_list_query_list_pane_g1

0xe339,	// (0x000bb302) ncim_list_query_list_pane_t1

0xa3e8,	// (0x000b73b1) cam4_indicators_pane_g3_ParamLimits

0xa3e8,	// (0x000b73b1) cam4_indicators_pane_g3

0xa46b,	// (0x000b7434) vid4_indicators_pane_g5_ParamLimits

0xa46b,	// (0x000b7434) vid4_indicators_pane_g5

0xa3e8,	// (0x000b73b1) vid4_progress_pane_g5_ParamLimits

0xa3e8,	// (0x000b73b1) vid4_progress_pane_g5

0x7445,	// (0x000b440e) main_ncimui_pane_g1

0x74ae,	// (0x000b4477) ncimui_group_query_pane_ParamLimits

0x74ae,	// (0x000b4477) ncimui_group_query_pane

0x74f6,	// (0x000b44bf) ncimui_list_pane_ParamLimits

0x74f6,	// (0x000b44bf) ncimui_list_pane

0x751d,	// (0x000b44e6) ncimui_text_pane_ParamLimits

0x751d,	// (0x000b44e6) ncimui_text_pane

0x75de,	// (0x000b45a7) ncimui_text_pane_t1_ParamLimits

0x75de,	// (0x000b45a7) ncimui_text_pane_t1

0xe347,	// (0x000bb310) ncimui_list_single_graphic_pane_ParamLimits

0xe347,	// (0x000bb310) ncimui_list_single_graphic_pane

0x75fc,	// (0x000b45c5) ncimui_query_pane_ParamLimits

0x75fc,	// (0x000b45c5) ncimui_query_pane

0x9646,	// (0x000b660f) list_highlight_pane_cp013

0xe357,	// (0x000bb320) ncim_list_query_list_pane_t1_copy1

0xe331,	// (0x000bb2fa) ncim_list_single_graphic_pane_g1

0x760f,	// (0x000b45d8) ncim_query_button_pane_cp01

0x761b,	// (0x000b45e4) ncim_query_entry_pane_ParamLimits

0x761b,	// (0x000b45e4) ncim_query_entry_pane

0x762e,	// (0x000b45f7) ncimui_query_pane_g1

0x763a,	// (0x000b4603) ncimui_query_pane_t1_ParamLimits

0x763a,	// (0x000b4603) ncimui_query_pane_t1

0xbb84,	// (0x000b8b4d) input_focus_pane_cp012

0xe365,	// (0x000bb32e) ncim_query_entry_pane_t1

0xa95a,	// (0x000b7923) main_im_pane_ParamLimits

0x9650,	// (0x000b6619) main_mobtv_pane_ParamLimits

0x9650,	// (0x000b6619) main_mobtv_pane

0x7201,	// (0x000b41ca) main_cset6_slider_pane_g18_ParamLimits

0x7201,	// (0x000b41ca) main_cset6_slider_pane_g18

0x720d,	// (0x000b41d6) main_cset6_slider_pane_g19_ParamLimits

0x720d,	// (0x000b41d6) main_cset6_slider_pane_g19

0x7653,	// (0x000b461c) bg_main_mobtv_pane_ParamLimits

0x7653,	// (0x000b461c) bg_main_mobtv_pane

0x7661,	// (0x000b462a) main_mobtv_info_pane

0x766c,	// (0x000b4635) main_mobtv_loading_pane_ParamLimits

0x766c,	// (0x000b4635) main_mobtv_loading_pane

0xe377,	// (0x000bb340) main_mobtv_pg_channel_list_pane

0xe381,	// (0x000bb34a) main_mobtv_pg_hdr_pane

0x7679,	// (0x000b4642) main_mobtv_programe_curr_pane_ParamLimits

0x7679,	// (0x000b4642) main_mobtv_programe_curr_pane

0x7686,	// (0x000b464f) main_mobtv_programe_next_pane_ParamLimits

0x7686,	// (0x000b464f) main_mobtv_programe_next_pane

0xe38a,	// (0x000bb353) popup_mobtv_noti_window

0xce5f,	// (0x000b9e28) main_tv_pg_hdr_pane_g1

0xe394,	// (0x000bb35d) main_tv_pg_hdr_pane_g2

0xe39c,	// (0x000bb365) main_tv_pg_hdr_pane_g3

0xe3a4,	// (0x000bb36d) main_tv_pg_hdr_pane_g4

0xe3ac,	// (0x000bb375) main_tv_pg_hdr_pane_g5

0xe3b6,	// (0x000bb37f) main_tv_pg_hdr_pane_g6

0xe3c0,	// (0x000bb389) main_tv_pg_hdr_pane_g7

0xe3ca,	// (0x000bb393) main_tv_pg_hdr_pane_g8

0xe3d4,	// (0x000bb39d) main_tv_pg_hdr_pane_g9

0xe3de,	// (0x000bb3a7) main_tv_pg_hdr_pane_g10

0xe3e8,	// (0x000bb3b1) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x000bcbd1) main_tv_pg_hdr_pane_g

0xe3f2,	// (0x000bb3bb) main_tv_pg_hdr_pane_t1

0xe400,	// (0x000bb3c9) main_tv_pg_hdr_pane_t2

0xe40e,	// (0x000bb3d7) main_tv_pg_hdr_pane_t3

0xe41e,	// (0x000bb3e7) main_tv_pg_hdr_pane_t4

0xe42e,	// (0x000bb3f7) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x000bcbe8) main_tv_pg_hdr_pane_t

0xe43e,	// (0x000bb407) single_mobtv_pg_channel_pane_ParamLimits

0xe43e,	// (0x000bb407) single_mobtv_pg_channel_pane

0xe450,	// (0x000bb419) single_mobtv_pg_channel_table_pane

0xe459,	// (0x000bb422) single_mobtv_pg_channel_thumb_pane

0xe462,	// (0x000bb42b) single_tv_pg_channel_pane_g1

0xe46b,	// (0x000bb434) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x000bcbf3) single_tv_pg_channel_pane_g

0xd0ac,	// (0x000ba075) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd0ac,	// (0x000ba075) bg_single_mobtv_pg_channel_thumb_pane

0xe474,	// (0x000bb43d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe474,	// (0x000bb43d) single_mobtv_pg_channel_thumb_pane_g1

0xe482,	// (0x000bb44b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe482,	// (0x000bb44b) single_mobtv_pg_channel_thumb_pane_g2

0xe48e,	// (0x000bb457) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe48e,	// (0x000bb457) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x000bcbf8) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x000bcbf8) single_mobtv_pg_channel_thumb_pane_g

0xe49a,	// (0x000bb463) single_mobtv_pg_channel_thumb_pane_t1

0xe4a8,	// (0x000bb471) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x000bcbff) single_mobtv_pg_channel_thumb_pane_t

0xce5f,	// (0x000b9e28) bg_single_mobtv_pg_channel_table_pane_g1

0xce5f,	// (0x000b9e28) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d8,	// (0x000bc6a1) bg_single_mobtv_pg_channel_table_pane_g

0xe4b6,	// (0x000bb47f) single_mobtv_pg_channel_table_pane_t1

0xe4c4,	// (0x000bb48d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x000bcc04) single_mobtv_pg_channel_table_pane_t

0x769b,	// (0x000b4664) main_mobtv_info_pane_g1_ParamLimits

0x769b,	// (0x000b4664) main_mobtv_info_pane_g1

0x76b9,	// (0x000b4682) main_mobtv_info_pane_t1_ParamLimits

0x76b9,	// (0x000b4682) main_mobtv_info_pane_t1

0x7731,	// (0x000b46fa) main_mobtv_info_pane_t2_ParamLimits

0x7731,	// (0x000b46fa) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x000bcc0e) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x000bcc0e) main_mobtv_info_pane_t

0x77c2,	// (0x000b478b) wait_bar_pane_cp05

0x77d4,	// (0x000b479d) main_mobtv_loading_pane_g1_ParamLimits

0x77d4,	// (0x000b479d) main_mobtv_loading_pane_g1

0x77e5,	// (0x000b47ae) main_mobtv_loading_pane_g2_ParamLimits

0x77e5,	// (0x000b47ae) main_mobtv_loading_pane_g2

0x77f1,	// (0x000b47ba) main_mobtv_loading_pane_g3_ParamLimits

0x77f1,	// (0x000b47ba) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x000bcc15) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x000bcc15) main_mobtv_loading_pane_g

0xe4d2,	// (0x000bb49b) main_mobtv_loading_pane_t1_ParamLimits

0xe4d2,	// (0x000bb49b) main_mobtv_loading_pane_t1

0xe4ea,	// (0x000bb4b3) main_mobtv_loading_pane_t2_ParamLimits

0xe4ea,	// (0x000bb4b3) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x000bcc1c) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x000bcc1c) main_mobtv_loading_pane_t

0x7804,	// (0x000b47cd) wait_bar_pane_cp06_ParamLimits

0x7804,	// (0x000b47cd) wait_bar_pane_cp06

0xe50e,	// (0x000bb4d7) main_mobtv_programe_curr_pane_t1

0xe51c,	// (0x000bb4e5) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x000bcc21) main_mobtv_programe_curr_pane_t

0xe52a,	// (0x000bb4f3) main_mobtv_programe_next_pane_t1

0xe538,	// (0x000bb501) main_mobtv_programe_next_pane_t2

0xe546,	// (0x000bb50f) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x000bcc26) main_mobtv_programe_next_pane_t

0x9646,	// (0x000b660f) bg_popup_mobtv_noti_window_pane

0xe554,	// (0x000bb51d) popup_mobtv_noti_window_g1

0xe55c,	// (0x000bb525) popup_mobtv_noti_window_t1

0xe56a,	// (0x000bb533) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x000bcc2d) popup_mobtv_noti_window_t

0xce5f,	// (0x000b9e28) bg_popup_mobtv_noti_window_pane_g1

0xff49,	// (0x000acf12) sc_clock_pane

0xf0b4,	// (0x000bc07d) main_fs_bigclock_pane

0x6e22,	// (0x000b3deb) blid2_tripm_pane_t4_ParamLimits

0x6e22,	// (0x000b3deb) blid2_tripm_pane_t4

0x7813,	// (0x000b47dc) sc_clock_pane_g1_ParamLimits

0x7813,	// (0x000b47dc) sc_clock_pane_g1

0x7825,	// (0x000b47ee) sc_clock_pane_t1_ParamLimits

0x7825,	// (0x000b47ee) sc_clock_pane_t1

0x7849,	// (0x000b4812) sc_clock_pane_t2_ParamLimits

0x7849,	// (0x000b4812) sc_clock_pane_t2

0x7861,	// (0x000b482a) sc_clock_pane_t3_ParamLimits

0x7861,	// (0x000b482a) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x000bcc32) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x000bcc32) sc_clock_pane_t

0x8a23,	// (0x000b59ec) main_fs_bigclock_indicator_pane_ParamLimits

0x8a23,	// (0x000b59ec) main_fs_bigclock_indicator_pane

0x7927,	// (0x000b48f0) main_fs_bigclock_pane_g1_ParamLimits

0x7927,	// (0x000b48f0) main_fs_bigclock_pane_g1

0x8a2f,	// (0x000b59f8) main_fs_bigclock_pane_t1_ParamLimits

0x8a2f,	// (0x000b59f8) main_fs_bigclock_pane_t1

0x8a41,	// (0x000b5a0a) main_fs_bigclock_pane_t2_ParamLimits

0x8a41,	// (0x000b5a0a) main_fs_bigclock_pane_t2

0x8a55,	// (0x000b5a1e) main_fs_bigclock_pane_t3_ParamLimits

0x8a55,	// (0x000b5a1e) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x000bce3c) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x000bce3c) main_fs_bigclock_pane_t

0xecd9,	// (0x000bbca2) main_fs_bigclock_indicator_pane_g1

0xe27e,	// (0x000bb247) ncim_query_content_pane_g2_ParamLimits

0xe27e,	// (0x000bb247) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x000bcbbf) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x000bcbbf) ncim_query_content_pane_g

0x7878,	// (0x000b4841) sc_clock_pane_t4_ParamLimits

0x7878,	// (0x000b4841) sc_clock_pane_t4

0x9650,	// (0x000b6619) main_radioblah_pane

0xa34d,	// (0x000b7316) cell_call4_button_pane_t1_copy1_ParamLimits

0xa34d,	// (0x000b7316) cell_call4_button_pane_t1_copy1

0x745d,	// (0x000b4426) main_ncimui_pane_t1_ParamLimits

0x745d,	// (0x000b4426) main_ncimui_pane_t1

0x7477,	// (0x000b4440) main_ncimui_pane_t2_ParamLimits

0x7477,	// (0x000b4440) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x000bcbb8) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x000bcbb8) main_ncimui_pane_t

0xe578,	// (0x000bb541) main_radioblah_anim_pane_ParamLimits

0xe578,	// (0x000bb541) main_radioblah_anim_pane

0xe589,	// (0x000bb552) main_radioblah_info_pane_ParamLimits

0xe589,	// (0x000bb552) main_radioblah_info_pane

0xe59d,	// (0x000bb566) main_radioblah_pane_t1_ParamLimits

0xe59d,	// (0x000bb566) main_radioblah_pane_t1

0xe5b9,	// (0x000bb582) main_radioblah_pane_t2_ParamLimits

0xe5b9,	// (0x000bb582) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x000bcc53) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x000bcc53) main_radioblah_pane_t

0x7ad0,	// (0x000b4a99) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7ad0,	// (0x000b4a99) main_radioblah_rocker_ctrl_pane

0xe601,	// (0x000bb5ca) main_radioblah_info_pane_t1_ParamLimits

0xe601,	// (0x000bb5ca) main_radioblah_info_pane_t1

0x7b28,	// (0x000b4af1) main_radioblah_info_pane_t2_ParamLimits

0x7b28,	// (0x000b4af1) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x000bcc5c) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x000bcc5c) main_radioblah_info_pane_t

0xce5f,	// (0x000b9e28) main_radioblah_rocker_ctrl_pane_g1

0x7bd8,	// (0x000b4ba1) main_radioblah_rocker_ctrl_pane_g2

0x7be0,	// (0x000b4ba9) main_radioblah_rocker_ctrl_pane_g3

0x7be8,	// (0x000b4bb1) main_radioblah_rocker_ctrl_pane_g4

0x7bf0,	// (0x000b4bb9) main_radioblah_rocker_ctrl_pane_g5

0x7bf8,	// (0x000b4bc1) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x000bcc65) main_radioblah_rocker_ctrl_pane_g

0x70ce,	// (0x000b4097) main_cset_text2_pane_t1_copy1_ParamLimits

0xa3ab,	// (0x000b7374) cam4_image_uncrop_qvga_pane

0xa40e,	// (0x000b73d7) vid4_image_uncrop_qcif_pane

0xa621,	// (0x000b75ea) cam6_image_uncrop_qvga_pane_ParamLimits

0xa621,	// (0x000b75ea) cam6_image_uncrop_qvga_pane

0xdf3b,	// (0x000baf04) vid6_image_uncrop_qcif_pane_ParamLimits

0xdf3b,	// (0x000baf04) vid6_image_uncrop_qcif_pane

0x9646,	// (0x000b660f) bg_popup_preview_window_pane_cp03

0xe230,	// (0x000bb1f9) list_cset_text2_pane

0xe238,	// (0x000bb201) main_cset6_text2_pane_g1

0xe240,	// (0x000bb209) main_cset6_text2_pane_t1

0xe63b,	// (0x000bb604) list_cset_text2_pane_t1_ParamLimits

0xe63b,	// (0x000bb604) list_cset_text2_pane_t1

0x9650,	// (0x000b6619) main_radioblah_pane_ParamLimits

0x77ae,	// (0x000b4777) main_mobtv_info_pane_t3_ParamLimits

0x77ae,	// (0x000b4777) main_mobtv_info_pane_t3

0x7abe,	// (0x000b4a87) main_radioblah_pane_g1

0x7af8,	// (0x000b4ac1) main_radioblah_info_pane_g1

0x7b7d,	// (0x000b4b46) main_radioblah_info_pane_t3_ParamLimits

0x7b7d,	// (0x000b4b46) main_radioblah_info_pane_t3

0x1f11,	// (0x000aeeda) highlight_cell_cale_month_pane_ParamLimits

0x1f11,	// (0x000aeeda) highlight_cell_cale_month_pane

0xf0b4,	// (0x000bc07d) main_phob_fisheye_pane

0xd188,	// (0x000ba151) scroll_pane_cp0031_ParamLimits

0xd188,	// (0x000ba151) scroll_pane_cp0031

0xe04d,	// (0x000bb016) wait_bar_pane_cp08_ParamLimits

0x7157,	// (0x000b4120) cset_list_set_pane_copy1_ParamLimits

0xe655,	// (0x000bb61e) highlight_cell_cale_month_pane_g1

0x7c00,	// (0x000b4bc9) highlight_cell_cale_month_pane_t1

0xdcd3,	// (0x000bac9c) list_gen_pane_cp01

0xd940,	// (0x000ba909) scroll_pane_01

0x7c0e,	// (0x000b4bd7) list_single_double_fisheye_pane

0x7c17,	// (0x000b4be0) list_double_fisheye_pane_g1_ParamLimits

0x7c17,	// (0x000b4be0) list_double_fisheye_pane_g1

0x7c23,	// (0x000b4bec) list_double_fisheye_pane_g2_ParamLimits

0x7c23,	// (0x000b4bec) list_double_fisheye_pane_g2

0x7c37,	// (0x000b4c00) list_double_fisheye_pane_g3_ParamLimits

0x7c37,	// (0x000b4c00) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x000bcc72) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x000bcc72) list_double_fisheye_pane_g

0x7c60,	// (0x000b4c29) list_double_fisheye_pane_t1_ParamLimits

0x7c60,	// (0x000b4c29) list_double_fisheye_pane_t1

0x7c7b,	// (0x000b4c44) list_double_fisheye_pane_t2_ParamLimits

0x7c7b,	// (0x000b4c44) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x000bcc7d) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x000bcc7d) list_double_fisheye_pane_t

0xf0b4,	// (0x000bc07d) main_call5_pane

0x78a3,	// (0x000b486c) sc_swipe_pane_ParamLimits

0x78a3,	// (0x000b486c) sc_swipe_pane

0x7cb0,	// (0x000b4c79) call5_image_pane_ParamLimits

0x7cb0,	// (0x000b4c79) call5_image_pane

0x7ccd,	// (0x000b4c96) call5_swipe_1_pane_ParamLimits

0x7ccd,	// (0x000b4c96) call5_swipe_1_pane

0x7ce0,	// (0x000b4ca9) call5_swipe_2_pane_ParamLimits

0x7ce0,	// (0x000b4ca9) call5_swipe_2_pane

0x7d0b,	// (0x000b4cd4) popup_call5_audio_first_window_ParamLimits

0x7d0b,	// (0x000b4cd4) popup_call5_audio_first_window

0xd0ac,	// (0x000ba075) call5_swipe_1_pane_g1_ParamLimits

0xd0ac,	// (0x000ba075) call5_swipe_1_pane_g1

0xe65d,	// (0x000bb626) call5_swipe_1_pane_g2_ParamLimits

0xe65d,	// (0x000bb626) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x000bcc82) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x000bcc82) call5_swipe_1_pane_g

0xe669,	// (0x000bb632) call5_swipe_1_pane_t1_ParamLimits

0xe669,	// (0x000bb632) call5_swipe_1_pane_t1

0xd0ac,	// (0x000ba075) call5_swipe_2_pane_g1_ParamLimits

0xd0ac,	// (0x000ba075) call5_swipe_2_pane_g1

0xe67e,	// (0x000bb647) call5_swipe_2_pane_g2_ParamLimits

0xe67e,	// (0x000bb647) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x000bcc87) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x000bcc87) call5_swipe_2_pane_g

0xe68a,	// (0x000bb653) call5_swipe_2_pane_t1_ParamLimits

0xe68a,	// (0x000bb653) call5_swipe_2_pane_t1

0xe69f,	// (0x000bb668) sc_swipe_pane_g1_ParamLimits

0xe69f,	// (0x000bb668) sc_swipe_pane_g1

0xe6ac,	// (0x000bb675) sc_swipe_pane_g2_ParamLimits

0xe6ac,	// (0x000bb675) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x000bcc8c) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x000bcc8c) sc_swipe_pane_g

0xe6b8,	// (0x000bb681) sc_swipe_pane_t1_ParamLimits

0xe6b8,	// (0x000bb681) sc_swipe_pane_t1

0xf0b4,	// (0x000bc07d) main_cmail_launcher_pane

0x7d20,	// (0x000b4ce9) aid_size_cell_cmail_l_ParamLimits

0x7d20,	// (0x000b4ce9) aid_size_cell_cmail_l

0x7d2e,	// (0x000b4cf7) grid_cmail_l_pane_ParamLimits

0x7d2e,	// (0x000b4cf7) grid_cmail_l_pane

0x7d47,	// (0x000b4d10) cell_cmail_l_pane_ParamLimits

0x7d47,	// (0x000b4d10) cell_cmail_l_pane

0xe6cd,	// (0x000bb696) cell_cmail_l_pane_g1_ParamLimits

0xe6cd,	// (0x000bb696) cell_cmail_l_pane_g1

0xe6d9,	// (0x000bb6a2) cell_cmail_l_pane_t1_ParamLimits

0xe6d9,	// (0x000bb6a2) cell_cmail_l_pane_t1

0xe6ef,	// (0x000bb6b8) cell_cmail_l_pane_t2_ParamLimits

0xe6ef,	// (0x000bb6b8) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x000bcc91) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x000bcc91) cell_cmail_l_pane_t

0xbb84,	// (0x000b8b4d) grid_highlight_pane_cp018_ParamLimits

0xbb84,	// (0x000b8b4d) grid_highlight_pane_cp018

0xfdd7,	// (0x000acda0) main2_pane_ParamLimits

0xfdd7,	// (0x000acda0) main2_pane

0xa9fc,	// (0x000b79c5) popup_sp_fs_action_menu_bg_pane_g1

0xaa04,	// (0x000b79cd) popup_sp_fs_action_menu_bg_pane_g2

0xaa0c,	// (0x000b79d5) popup_sp_fs_action_menu_bg_pane_g3

0xaa14,	// (0x000b79dd) popup_sp_fs_action_menu_bg_pane_g4

0xaa1c,	// (0x000b79e5) popup_sp_fs_action_menu_bg_pane_g5

0xaa24,	// (0x000b79ed) popup_sp_fs_action_menu_bg_pane_g6

0xaa2c,	// (0x000b79f5) popup_sp_fs_action_menu_bg_pane_g7

0xaa34,	// (0x000b79fd) popup_sp_fs_action_menu_bg_pane_g8

0xaa3c,	// (0x000b7a05) popup_sp_fs_action_menu_bg_pane_g9

0xaa44,	// (0x000b7a0d) popup_sp_fs_action_menu_bg_pane_g10

0xaa44,	// (0x000b7a0d) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x000bc14f) popup_sp_fs_action_menu_bg_pane_g

0x0d98,	// (0x000add61) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0d98,	// (0x000add61) list_medium_line_x2_t3_g3_g1

0x0da4,	// (0x000add6d) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0da4,	// (0x000add6d) list_medium_line_x2_t3_g3_g2

0x0db0,	// (0x000add79) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0db0,	// (0x000add79) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x000bc1fd) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x000bc1fd) list_medium_line_x2_t3_g3_g

0x0dbc,	// (0x000add85) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0dbc,	// (0x000add85) list_medium_line_x2_t3_g3_t1

0x0dd1,	// (0x000add9a) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0dd1,	// (0x000add9a) list_medium_line_x2_t3_g3_t2

0x0de5,	// (0x000addae) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0de5,	// (0x000addae) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x000bc204) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x000bc204) list_medium_line_x2_t3_g3_t

0x0d98,	// (0x000add61) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0d98,	// (0x000add61) list_medium_line_x2_t3_g2_g1

0x0db0,	// (0x000add79) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0db0,	// (0x000add79) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x000bc20b) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x000bc20b) list_medium_line_x2_t3_g2_g

0x0dfa,	// (0x000addc3) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0dfa,	// (0x000addc3) list_medium_line_x2_t3_g2_t1

0x0e10,	// (0x000addd9) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0e10,	// (0x000addd9) list_medium_line_x2_t3_g2_t2

0x0de5,	// (0x000addae) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0de5,	// (0x000addae) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x000bc210) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x000bc210) list_medium_line_x2_t3_g2_t

0x0d98,	// (0x000add61) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0d98,	// (0x000add61) list_medium_line_x2_t4_g4_g1

0x0e22,	// (0x000addeb) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0e22,	// (0x000addeb) list_medium_line_x2_t4_g4_g2

0x0da4,	// (0x000add6d) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0da4,	// (0x000add6d) list_medium_line_x2_t4_g4_g3

0x0e2e,	// (0x000addf7) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0e2e,	// (0x000addf7) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x000bc217) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x000bc217) list_medium_line_x2_t4_g4_g

0x0e3a,	// (0x000ade03) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0e3a,	// (0x000ade03) list_medium_line_x2_t4_g4_t1

0x0e54,	// (0x000ade1d) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0e54,	// (0x000ade1d) list_medium_line_x2_t4_g4_t2

0x0e6a,	// (0x000ade33) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0e6a,	// (0x000ade33) list_medium_line_x2_t4_g4_t3

0x0e7f,	// (0x000ade48) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0e7f,	// (0x000ade48) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x000bc220) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x000bc220) list_medium_line_x2_t4_g4_t

0x0d98,	// (0x000add61) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0d98,	// (0x000add61) list_medium_line_x2_t2_g4_g1

0x0e22,	// (0x000addeb) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0e22,	// (0x000addeb) list_medium_line_x2_t2_g4_g2

0x0da4,	// (0x000add6d) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0da4,	// (0x000add6d) list_medium_line_x2_t2_g4_g3

0x0db0,	// (0x000add79) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0db0,	// (0x000add79) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x000bc287) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x000bc287) list_medium_line_x2_t2_g4_g

0x1f37,	// (0x000aef00) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1f37,	// (0x000aef00) list_medium_line_x2_t2_g4_t1

0x0de5,	// (0x000addae) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0de5,	// (0x000addae) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x000bc290) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x000bc290) list_medium_line_x2_t2_g4_t

0x0d98,	// (0x000add61) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0d98,	// (0x000add61) list_medium_line_x2_t2_g3_g1

0x0da4,	// (0x000add6d) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0da4,	// (0x000add6d) list_medium_line_x2_t2_g3_g2

0x0db0,	// (0x000add79) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0db0,	// (0x000add79) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x000bc1fd) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x000bc1fd) list_medium_line_x2_t2_g3_g

0x1f4c,	// (0x000aef15) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1f4c,	// (0x000aef15) list_medium_line_x2_t2_g3_t1

0x0de5,	// (0x000addae) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0de5,	// (0x000addae) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x000bc295) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x000bc295) list_medium_line_x2_t2_g3_t

0x20ab,	// (0x000af074) main_sp_fs_list_pane_ParamLimits

0x20ab,	// (0x000af074) main_sp_fs_list_pane

0xcf0b,	// (0x000b9ed4) sp_fs_scroll_pane_ParamLimits

0xcf0b,	// (0x000b9ed4) sp_fs_scroll_pane

0x20b7,	// (0x000af080) list_medium_line_x2_t3_t1

0x20c7,	// (0x000af090) list_medium_line_x2_t3_t2

0x20d5,	// (0x000af09e) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x000bc2e0) list_medium_line_x2_t3_t

0x20e3,	// (0x000af0ac) list_medium_line_x3_t4_t1

0x20f3,	// (0x000af0bc) list_medium_line_x3_t4_t2

0x2101,	// (0x000af0ca) list_medium_line_x3_t4_t3

0x20d5,	// (0x000af09e) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x000bc2e7) list_medium_line_x3_t4_t

0x210f,	// (0x000af0d8) list_medium_line_x4_t5_t1

0x211f,	// (0x000af0e8) list_medium_line_x4_t5_t2

0x2101,	// (0x000af0ca) list_medium_line_x4_t5_t3

0x212d,	// (0x000af0f6) list_medium_line_x4_t5_t4

0x20d5,	// (0x000af09e) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x000bc2f0) list_medium_line_x4_t5_t

0x0d98,	// (0x000add61) list_medium_line_t4_g4_g1_ParamLimits

0x0d98,	// (0x000add61) list_medium_line_t4_g4_g1

0x213b,	// (0x000af104) list_medium_line_t4_g4_g2_ParamLimits

0x213b,	// (0x000af104) list_medium_line_t4_g4_g2

0x2147,	// (0x000af110) list_medium_line_t4_g4_g3_ParamLimits

0x2147,	// (0x000af110) list_medium_line_t4_g4_g3

0x0db0,	// (0x000add79) list_medium_line_t4_g4_g4_ParamLimits

0x0db0,	// (0x000add79) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x000bc2fb) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x000bc2fb) list_medium_line_t4_g4_g

0x2153,	// (0x000af11c) list_medium_line_t4_g4_t1_ParamLimits

0x2153,	// (0x000af11c) list_medium_line_t4_g4_t1

0x2168,	// (0x000af131) list_medium_line_t4_g4_t2_ParamLimits

0x2168,	// (0x000af131) list_medium_line_t4_g4_t2

0x217d,	// (0x000af146) list_medium_line_t4_g4_t3_ParamLimits

0x217d,	// (0x000af146) list_medium_line_t4_g4_t3

0x0de5,	// (0x000addae) list_medium_line_t4_g4_t4_ParamLimits

0x0de5,	// (0x000addae) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x000bc304) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x000bc304) list_medium_line_t4_g4_t

0x2258,	// (0x000af221) chi_dic_find_pane_g1

0x3389,	// (0x000b0352) main_tport_pane

0x644f,	// (0x000b3418) list_medium_line_plain_t1

0x6501,	// (0x000b34ca) list_medium_line_t2_g2_g1_ParamLimits

0x6501,	// (0x000b34ca) list_medium_line_t2_g2_g1

0x650d,	// (0x000b34d6) list_medium_line_t2_g2_g2_ParamLimits

0x650d,	// (0x000b34d6) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x000bc9c9) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x000bc9c9) list_medium_line_t2_g2_g

0x6519,	// (0x000b34e2) list_medium_line_t2_g2_t1_ParamLimits

0x6519,	// (0x000b34e2) list_medium_line_t2_g2_t1

0x6533,	// (0x000b34fc) list_medium_line_t2_g2_t2_ParamLimits

0x6533,	// (0x000b34fc) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x000bc9ce) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x000bc9ce) list_medium_line_t2_g2_t

0xa619,	// (0x000b75e2) aid_sp_fs_list_icon_a_sm

0xbb9e,	// (0x000b8b67) aid_sp_fs_list_icon_d

0xcef9,	// (0x000b9ec2) aid_sp_fs_text_primary

0xcf02,	// (0x000b9ecb) aid_sp_fs_text_secondary

0x6bcf,	// (0x000b3b98) list_medium_line

0x6bcf,	// (0x000b3b98) list_medium_line_g2

0x6bcf,	// (0x000b3b98) list_medium_line_g3

0x6bcf,	// (0x000b3b98) list_medium_line_plain

0x6bcf,	// (0x000b3b98) list_medium_line_plain_t2

0x6bcf,	// (0x000b3b98) list_medium_line_plain_t3

0x6bcf,	// (0x000b3b98) list_medium_line_right_icon

0x6bcf,	// (0x000b3b98) list_medium_line_right_iconx2

0x6bcf,	// (0x000b3b98) list_medium_line_t2

0x6bcf,	// (0x000b3b98) list_medium_line_t2_g2

0x6bcf,	// (0x000b3b98) list_medium_line_t2_g3

0x6bcf,	// (0x000b3b98) list_medium_line_t2_right_icon

0x6bcf,	// (0x000b3b98) list_medium_line_t2_right_iconx2

0x6bcf,	// (0x000b3b98) list_medium_line_t3

0x6bcf,	// (0x000b3b98) list_medium_line_t3_g2

0x6bcf,	// (0x000b3b98) list_medium_line_t3_g3

0x6bcf,	// (0x000b3b98) list_medium_line_t3_right_iconx2

0x6bd8,	// (0x000b3ba1) list_medium_line_t4_g4

0x6be1,	// (0x000b3baa) list_medium_line_x2

0x6be1,	// (0x000b3baa) list_medium_line_x2_t2_g2

0x6be1,	// (0x000b3baa) list_medium_line_x2_t2_g3

0x6be1,	// (0x000b3baa) list_medium_line_x2_t2_g4

0x6be1,	// (0x000b3baa) list_medium_line_x2_t3

0x6be1,	// (0x000b3baa) list_medium_line_x2_t3_g2

0x6be1,	// (0x000b3baa) list_medium_line_x2_t3_g3

0x6be1,	// (0x000b3baa) list_medium_line_x2_t3_g4

0x6be1,	// (0x000b3baa) list_medium_line_x2_t4_g2

0x6be1,	// (0x000b3baa) list_medium_line_x2_t4_g4

0x6bea,	// (0x000b3bb3) list_medium_line_x3

0x6bea,	// (0x000b3bb3) list_medium_line_x3_t4

0x6bea,	// (0x000b3bb3) list_medium_line_x3_t4_g4

0x6bd8,	// (0x000b3ba1) list_medium_line_x4_t4

0x6bd8,	// (0x000b3ba1) list_medium_line_x4_t4_g7

0x6bd8,	// (0x000b3ba1) list_medium_line_x4_t5

0x6bf3,	// (0x000b3bbc) list_single_fs_dyc_pane_ParamLimits

0x6bf3,	// (0x000b3bbc) list_single_fs_dyc_pane

0x0d98,	// (0x000add61) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0d98,	// (0x000add61) list_medium_line_x4_t4_g7_g1

0x735b,	// (0x000b4324) list_medium_line_x4_t4_g7_g2_ParamLimits

0x735b,	// (0x000b4324) list_medium_line_x4_t4_g7_g2

0x7367,	// (0x000b4330) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7367,	// (0x000b4330) list_medium_line_x4_t4_g7_g3

0x7376,	// (0x000b433f) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7376,	// (0x000b433f) list_medium_line_x4_t4_g7_g4

0x7382,	// (0x000b434b) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7382,	// (0x000b434b) list_medium_line_x4_t4_g7_g5

0x7391,	// (0x000b435a) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7391,	// (0x000b435a) list_medium_line_x4_t4_g7_g6

0x73a0,	// (0x000b4369) list_medium_line_x4_t4_g7_g7_ParamLimits

0x73a0,	// (0x000b4369) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x000bcb99) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x000bcb99) list_medium_line_x4_t4_g7_g

0x73ac,	// (0x000b4375) list_medium_line_x4_t4_g7_t1_ParamLimits

0x73ac,	// (0x000b4375) list_medium_line_x4_t4_g7_t1

0x73c1,	// (0x000b438a) list_medium_line_x4_t4_g7_t2_ParamLimits

0x73c1,	// (0x000b438a) list_medium_line_x4_t4_g7_t2

0x73d6,	// (0x000b439f) list_medium_line_x4_t4_g7_t3_ParamLimits

0x73d6,	// (0x000b439f) list_medium_line_x4_t4_g7_t3

0x73eb,	// (0x000b43b4) list_medium_line_x4_t4_g7_t4_ParamLimits

0x73eb,	// (0x000b43b4) list_medium_line_x4_t4_g7_t4

0x73fd,	// (0x000b43c6) list_medium_line_x4_t4_g7_t5_ParamLimits

0x73fd,	// (0x000b43c6) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x000bcba8) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x000bcba8) list_medium_line_x4_t4_g7_t

0x740f,	// (0x000b43d8) list_single_dyc_row_pane_ParamLimits

0x740f,	// (0x000b43d8) list_single_dyc_row_pane

0x7c9d,	// (0x000b4c66) call5_gesture_pane_ParamLimits

0x7c9d,	// (0x000b4c66) call5_gesture_pane

0x7cf3,	// (0x000b4cbc) call5_windows_pane_ParamLimits

0x7cf3,	// (0x000b4cbc) call5_windows_pane

0x7d59,	// (0x000b4d22) call5_swipe_1_pane_cp_ParamLimits

0x7d59,	// (0x000b4d22) call5_swipe_1_pane_cp

0x7d65,	// (0x000b4d2e) call5_swipe_2_pane_cp_ParamLimits

0x7d65,	// (0x000b4d2e) call5_swipe_2_pane_cp

0xab0b,	// (0x000b7ad4) call5_image_pane_cp

0x7d71,	// (0x000b4d3a) popup_call5_audio_first_window_cp_ParamLimits

0x7d71,	// (0x000b4d3a) popup_call5_audio_first_window_cp

0xe69f,	// (0x000bb668) call5_swipe_1_pane_g1_cp_ParamLimits

0xe69f,	// (0x000bb668) call5_swipe_1_pane_g1_cp

0xe70c,	// (0x000bb6d5) call5_swipe_1_pane_g2_cp

0xe6b8,	// (0x000bb681) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6b8,	// (0x000bb681) call5_swipe_1_pane_t1_cp

0xe69f,	// (0x000bb668) call5_swipe_2_pane_g1_cp_ParamLimits

0xe69f,	// (0x000bb668) call5_swipe_2_pane_g1_cp

0xe714,	// (0x000bb6dd) call5_swipe_2_pane_g2_cp

0xe71c,	// (0x000bb6e5) call5_swipe_2_pane_t1_cp_ParamLimits

0xe71c,	// (0x000bb6e5) call5_swipe_2_pane_t1_cp

0xbb84,	// (0x000b8b4d) main_sp_fs_email_pane

0xe1cf,	// (0x000bb198) main_sp_fs_listscroll_pane_te

0x7d7f,	// (0x000b4d48) popup_sp_fs_action_menu_pane_ParamLimits

0x7d7f,	// (0x000b4d48) popup_sp_fs_action_menu_pane

0xce5f,	// (0x000b9e28) bg_sp_fs_ctrlbar_pane_g1

0xe731,	// (0x000bb6fa) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe73a,	// (0x000bb703) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe743,	// (0x000bb70c) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xce5f,	// (0x000b9e28) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x000bcc96) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcc3e,	// (0x000b9c07) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcc3e,	// (0x000b9c07) bg_sp_fs_ctrlbar_ddmenu_pane

0xe74c,	// (0x000bb715) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe74c,	// (0x000bb715) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe758,	// (0x000bb721) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe758,	// (0x000bb721) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x000bcc9f) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x000bcc9f) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe764,	// (0x000bb72d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe764,	// (0x000bb72d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7dc5,	// (0x000b4d8e) list_medium_line_t2_right_icon_g1

0x7dcd,	// (0x000b4d96) list_medium_line_t2_right_icon_t1

0x7ddd,	// (0x000b4da6) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x000bcca4) list_medium_line_t2_right_icon_t

0xca27,	// (0x000b99f0) bg_sp_fs_ctrlbar_pane_ParamLimits

0xca27,	// (0x000b99f0) bg_sp_fs_ctrlbar_pane

0x7e39,	// (0x000b4e02) main_sp_fs_ctrlbar_button_pane_cp01

0x7e43,	// (0x000b4e0c) main_sp_fs_ctrlbar_ddmenu_pane

0xe7b8,	// (0x000bb781) main_sp_fs_ctrlbar_pane_g1

0xe7c4,	// (0x000bb78d) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x000bcca9) main_sp_fs_ctrlbar_pane_g

0xe7d0,	// (0x000bb799) main_sp_fs_ctrlbar_pane_t1

0x7e4d,	// (0x000b4e16) main_sp_fs_ctrlbar_pane

0x7e71,	// (0x000b4e3a) main_sp_fs_listscroll_pane_te_cp01

0x7e91,	// (0x000b4e5a) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7e91,	// (0x000b4e5a) popup_sp_fs_action_menu_pane_cp01

0xbb84,	// (0x000b8b4d) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xbb84,	// (0x000b8b4d) bg_sp_fs_highlight_list_pane_cp01

0xa62f,	// (0x000b75f8) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa62f,	// (0x000b75f8) sp_fs_action_menu_list_gene_pane_g1

0xe800,	// (0x000bb7c9) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe800,	// (0x000bb7c9) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x000bccb3) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x000bccb3) sp_fs_action_menu_list_gene_pane_g

0xa63e,	// (0x000b7607) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa63e,	// (0x000b7607) sp_fs_action_menu_list_gene_pane_t1

0xa656,	// (0x000b761f) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa656,	// (0x000b761f) sp_fs_action_menu_list_gene_pane

0xe80d,	// (0x000bb7d6) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe80d,	// (0x000bb7d6) popup_sp_fs_action_menu_bg_pane

0xa679,	// (0x000b7642) sp_fs_action_menu_list_pane_ParamLimits

0xa679,	// (0x000b7642) sp_fs_action_menu_list_pane

0x7ec7,	// (0x000b4e90) sp_fs_scroll_pane_cp01_ParamLimits

0x7ec7,	// (0x000b4e90) sp_fs_scroll_pane_cp01

0x7eed,	// (0x000b4eb6) list_medium_line_plain_t2_t1

0x7efd,	// (0x000b4ec6) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x000bccb8) list_medium_line_plain_t2_t

0x7f0d,	// (0x000b4ed6) list_medium_line_plain_t3_t1

0x7f1d,	// (0x000b4ee6) list_medium_line_plain_t3_t2

0x7f2b,	// (0x000b4ef4) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x000bccbd) list_medium_line_plain_t3_t

0x0d98,	// (0x000add61) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0d98,	// (0x000add61) list_medium_line_x2_t2_g2_g1

0x0db0,	// (0x000add79) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0db0,	// (0x000add79) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x000bc20b) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x000bc20b) list_medium_line_x2_t2_g2_g

0x2153,	// (0x000af11c) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2153,	// (0x000af11c) list_medium_line_x2_t2_g2_t1

0x0de5,	// (0x000addae) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0de5,	// (0x000addae) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x000bccc4) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x000bccc4) list_medium_line_x2_t2_g2_t

0x0d98,	// (0x000add61) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0d98,	// (0x000add61) list_medium_line_x2_t4_g2_g1

0x7f39,	// (0x000b4f02) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7f39,	// (0x000b4f02) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x000bccc9) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x000bccc9) list_medium_line_x2_t4_g2_g

0x7f4b,	// (0x000b4f14) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7f4b,	// (0x000b4f14) list_medium_line_x2_t4_g2_t1

0x7f65,	// (0x000b4f2e) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7f65,	// (0x000b4f2e) list_medium_line_x2_t4_g2_t2

0x7f7b,	// (0x000b4f44) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7f7b,	// (0x000b4f44) list_medium_line_x2_t4_g2_t3

0x0de5,	// (0x000addae) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0de5,	// (0x000addae) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x000bccce) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x000bccce) list_medium_line_x2_t4_g2_t

0x7f90,	// (0x000b4f59) list_medium_line_t3_right_iconx2_g1

0x7dc5,	// (0x000b4d8e) list_medium_line_t3_right_iconx2_g2

0x7f98,	// (0x000b4f61) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x000bccd7) list_medium_line_t3_right_iconx2_g

0x7fa2,	// (0x000b4f6b) list_medium_line_t3_right_iconx2_t1

0x7fb2,	// (0x000b4f7b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x000bccde) list_medium_line_t3_right_iconx2_t

0x0d98,	// (0x000add61) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0d98,	// (0x000add61) list_medium_line_x3_t4_g4_g1

0x0da4,	// (0x000add6d) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0da4,	// (0x000add6d) list_medium_line_x3_t4_g4_g2

0x213b,	// (0x000af104) list_medium_line_x3_t4_g4_g3_ParamLimits

0x213b,	// (0x000af104) list_medium_line_x3_t4_g4_g3

0x7fc0,	// (0x000b4f89) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7fc0,	// (0x000b4f89) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x000bcce3) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x000bcce3) list_medium_line_x3_t4_g4_g

0x7fcc,	// (0x000b4f95) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7fcc,	// (0x000b4f95) list_medium_line_x3_t4_g4_t1

0x7fe3,	// (0x000b4fac) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7fe3,	// (0x000b4fac) list_medium_line_x3_t4_g4_t2

0x2168,	// (0x000af131) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2168,	// (0x000af131) list_medium_line_x3_t4_g4_t3

0x7ffc,	// (0x000b4fc5) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7ffc,	// (0x000b4fc5) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x000bccec) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x000bccec) list_medium_line_x3_t4_g4_t

0x8019,	// (0x000b4fe2) list_single_dyc_row_text_pane_t1_ParamLimits

0x8019,	// (0x000b4fe2) list_single_dyc_row_text_pane_t1

0x8062,	// (0x000b502b) list_single_dyc_row_text_pane_t2_ParamLimits

0x8062,	// (0x000b502b) list_single_dyc_row_text_pane_t2

0xa69d,	// (0x000b7666) list_single_dyc_row_text_pane_t3_ParamLimits

0xa69d,	// (0x000b7666) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x000bccf5) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x000bccf5) list_single_dyc_row_text_pane_t

0xa6c1,	// (0x000b768a) list_single_dyc_row_pane_g1_ParamLimits

0xa6c1,	// (0x000b768a) list_single_dyc_row_pane_g1

0xa6cd,	// (0x000b7696) list_single_dyc_row_pane_g2_ParamLimits

0xa6cd,	// (0x000b7696) list_single_dyc_row_pane_g2

0xa6d9,	// (0x000b76a2) list_single_dyc_row_pane_g3_ParamLimits

0xa6d9,	// (0x000b76a2) list_single_dyc_row_pane_g3

0xa6e5,	// (0x000b76ae) list_single_dyc_row_pane_g4_ParamLimits

0xa6e5,	// (0x000b76ae) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x000bcd02) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x000bcd02) list_single_dyc_row_pane_g

0xa6f1,	// (0x000b76ba) list_single_dyc_row_text_pane_ParamLimits

0xa6f1,	// (0x000b76ba) list_single_dyc_row_text_pane

0x9646,	// (0x000b660f) bg_sp_fs_scroll_pane

0xe81b,	// (0x000bb7e4) thumb_sp_fs_scroll_pane

0x6501,	// (0x000b34ca) list_medium_line_g1_ParamLimits

0x6501,	// (0x000b34ca) list_medium_line_g1

0x8197,	// (0x000b5160) list_medium_line_t1_ParamLimits

0x8197,	// (0x000b5160) list_medium_line_t1

0x0d98,	// (0x000add61) list_medium_line_x2_g1_ParamLimits

0x0d98,	// (0x000add61) list_medium_line_x2_g1

0x0da4,	// (0x000add6d) list_medium_line_x2_g2_ParamLimits

0x0da4,	// (0x000add6d) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x000bcd0b) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x000bcd0b) list_medium_line_x2_g

0xa710,	// (0x000b76d9) list_medium_line_x2_t1_ParamLimits

0xa710,	// (0x000b76d9) list_medium_line_x2_t1

0x0d98,	// (0x000add61) list_medium_line_x3_g1_ParamLimits

0x0d98,	// (0x000add61) list_medium_line_x3_g1

0x0da4,	// (0x000add6d) list_medium_line_x3_g2_ParamLimits

0x0da4,	// (0x000add6d) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x000bcd0b) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x000bcd0b) list_medium_line_x3_g

0xa710,	// (0x000b76d9) list_medium_line_x3_t1_ParamLimits

0xa710,	// (0x000b76d9) list_medium_line_x3_t1

0xe824,	// (0x000bb7ed) thumb_sp_fs_scroll_pane_g1

0xe82d,	// (0x000bb7f6) thumb_sp_fs_scroll_pane_g2

0xe836,	// (0x000bb7ff) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000bcd10) thumb_sp_fs_scroll_pane_g

0xe824,	// (0x000bb7ed) bg_sp_fs_scroll_pane_g1

0xe82d,	// (0x000bb7f6) bg_sp_fs_scroll_pane_g2

0xe836,	// (0x000bb7ff) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000bcd10) bg_sp_fs_scroll_pane_g

0x0d98,	// (0x000add61) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0d98,	// (0x000add61) list_medium_line_x2_t3_g4_g1

0x0e22,	// (0x000addeb) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0e22,	// (0x000addeb) list_medium_line_x2_t3_g4_g2

0x0da4,	// (0x000add6d) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0da4,	// (0x000add6d) list_medium_line_x2_t3_g4_g3

0x0db0,	// (0x000add79) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0db0,	// (0x000add79) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x000bc287) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x000bc287) list_medium_line_x2_t3_g4_g

0x81ac,	// (0x000b5175) list_medium_line_x2_t3_g4_t1_ParamLimits

0x81ac,	// (0x000b5175) list_medium_line_x2_t3_g4_t1

0x81c2,	// (0x000b518b) list_medium_line_x2_t3_g4_t2_ParamLimits

0x81c2,	// (0x000b518b) list_medium_line_x2_t3_g4_t2

0x0de5,	// (0x000addae) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0de5,	// (0x000addae) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x000bcd17) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x000bcd17) list_medium_line_x2_t3_g4_t

0x6501,	// (0x000b34ca) list_medium_line_g2_g1_ParamLimits

0x6501,	// (0x000b34ca) list_medium_line_g2_g1

0x650d,	// (0x000b34d6) list_medium_line_g2_g2_ParamLimits

0x650d,	// (0x000b34d6) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x000bc9c9) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x000bc9c9) list_medium_line_g2_g

0x81dc,	// (0x000b51a5) list_medium_line_g2_t1_ParamLimits

0x81dc,	// (0x000b51a5) list_medium_line_g2_t1

0x6501,	// (0x000b34ca) list_medium_line_t3_g2_g1_ParamLimits

0x6501,	// (0x000b34ca) list_medium_line_t3_g2_g1

0x650d,	// (0x000b34d6) list_medium_line_t3_g2_g2_ParamLimits

0x650d,	// (0x000b34d6) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x000bc9c9) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x000bc9c9) list_medium_line_t3_g2_g

0x81f1,	// (0x000b51ba) list_medium_line_t3_g2_t1_ParamLimits

0x81f1,	// (0x000b51ba) list_medium_line_t3_g2_t1

0x820b,	// (0x000b51d4) list_medium_line_t3_g2_t2_ParamLimits

0x820b,	// (0x000b51d4) list_medium_line_t3_g2_t2

0x8221,	// (0x000b51ea) list_medium_line_t3_g2_t3_ParamLimits

0x8221,	// (0x000b51ea) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x000bcd1e) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x000bcd1e) list_medium_line_t3_g2_t

0x7dc5,	// (0x000b4d8e) list_medium_line_right_icon_g1

0x823b,	// (0x000b5204) list_medium_line_right_icon_t1

0x6501,	// (0x000b34ca) list_medium_line_t2_g1_ParamLimits

0x6501,	// (0x000b34ca) list_medium_line_t2_g1

0x8249,	// (0x000b5212) list_medium_line_t2_t1_ParamLimits

0x8249,	// (0x000b5212) list_medium_line_t2_t1

0x8263,	// (0x000b522c) list_medium_line_t2_t2_ParamLimits

0x8263,	// (0x000b522c) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x000bcd25) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x000bcd25) list_medium_line_t2_t

0x6501,	// (0x000b34ca) list_medium_line_t3_g1_ParamLimits

0x6501,	// (0x000b34ca) list_medium_line_t3_g1

0x827c,	// (0x000b5245) list_medium_line_t3_t1_ParamLimits

0x827c,	// (0x000b5245) list_medium_line_t3_t1

0x8296,	// (0x000b525f) list_medium_line_t3_t2_ParamLimits

0x8296,	// (0x000b525f) list_medium_line_t3_t2

0x82ac,	// (0x000b5275) list_medium_line_t3_t3_ParamLimits

0x82ac,	// (0x000b5275) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x000bcd2a) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x000bcd2a) list_medium_line_t3_t

0x6501,	// (0x000b34ca) list_medium_line_g3_g1_ParamLimits

0x6501,	// (0x000b34ca) list_medium_line_g3_g1

0x82c1,	// (0x000b528a) list_medium_line_g3_g2_ParamLimits

0x82c1,	// (0x000b528a) list_medium_line_g3_g2

0x650d,	// (0x000b34d6) list_medium_line_g3_g3_ParamLimits

0x650d,	// (0x000b34d6) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x000bcd31) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x000bcd31) list_medium_line_g3_g

0x82cd,	// (0x000b5296) list_medium_line_g3_t1_ParamLimits

0x82cd,	// (0x000b5296) list_medium_line_g3_t1

0x6501,	// (0x000b34ca) list_medium_line_t2_g3_g1_ParamLimits

0x6501,	// (0x000b34ca) list_medium_line_t2_g3_g1

0x82c1,	// (0x000b528a) list_medium_line_t2_g3_g2_ParamLimits

0x82c1,	// (0x000b528a) list_medium_line_t2_g3_g2

0x650d,	// (0x000b34d6) list_medium_line_t2_g3_g3_ParamLimits

0x650d,	// (0x000b34d6) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x000bcd31) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x000bcd31) list_medium_line_t2_g3_g

0x82e2,	// (0x000b52ab) list_medium_line_t2_g3_t1_ParamLimits

0x82e2,	// (0x000b52ab) list_medium_line_t2_g3_t1

0x82fc,	// (0x000b52c5) list_medium_line_t2_g3_t2_ParamLimits

0x82fc,	// (0x000b52c5) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x000bcd38) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x000bcd38) list_medium_line_t2_g3_t

0x6501,	// (0x000b34ca) list_medium_line_t3_g3_g1_ParamLimits

0x6501,	// (0x000b34ca) list_medium_line_t3_g3_g1

0x82c1,	// (0x000b528a) list_medium_line_t3_g3_g2_ParamLimits

0x82c1,	// (0x000b528a) list_medium_line_t3_g3_g2

0x650d,	// (0x000b34d6) list_medium_line_t3_g3_g3_ParamLimits

0x650d,	// (0x000b34d6) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x000bcd31) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x000bcd31) list_medium_line_t3_g3_g

0x8316,	// (0x000b52df) list_medium_line_t3_g3_t1_ParamLimits

0x8316,	// (0x000b52df) list_medium_line_t3_g3_t1

0x832f,	// (0x000b52f8) list_medium_line_t3_g3_t2_ParamLimits

0x832f,	// (0x000b52f8) list_medium_line_t3_g3_t2

0x8345,	// (0x000b530e) list_medium_line_t3_g3_t3_ParamLimits

0x8345,	// (0x000b530e) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x000bcd3d) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x000bcd3d) list_medium_line_t3_g3_t

0x7f90,	// (0x000b4f59) list_medium_line_right_iconx2_g1

0x7dc5,	// (0x000b4d8e) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000bcd44) list_medium_line_right_iconx2_g

0x835f,	// (0x000b5328) list_medium_line_right_iconx2_t1

0x7f90,	// (0x000b4f59) list_medium_line_t2_right_iconx2_g1

0x7dc5,	// (0x000b4d8e) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000bcd44) list_medium_line_t2_right_iconx2_g

0x836d,	// (0x000b5336) list_medium_line_t2_right_iconx2_t1

0x837d,	// (0x000b5346) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x000bcd49) list_medium_line_t2_right_iconx2_t

0x838d,	// (0x000b5356) list_medium_line_x4_t4_t1

0x839b,	// (0x000b5364) list_medium_line_x4_t4_t2

0x83ab,	// (0x000b5374) list_medium_line_x4_t4_t3

0x83bb,	// (0x000b5384) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x000bcd4e) list_medium_line_x4_t4_t

0x840c,	// (0x000b53d5) tport_appsw_pane_ParamLimits

0x840c,	// (0x000b53d5) tport_appsw_pane

0x8423,	// (0x000b53ec) tport_contact_pane_ParamLimits

0x8423,	// (0x000b53ec) tport_contact_pane

0x843b,	// (0x000b5404) tport_listscroll_pane_ParamLimits

0x843b,	// (0x000b5404) tport_listscroll_pane

0x844f,	// (0x000b5418) cell_tport_appsw_pane_ParamLimits

0x844f,	// (0x000b5418) cell_tport_appsw_pane

0xd802,	// (0x000ba7cb) tport_appsw_pane_g1_ParamLimits

0xd802,	// (0x000ba7cb) tport_appsw_pane_g1

0xe83f,	// (0x000bb808) tport_contact_pane_g1

0xe848,	// (0x000bb811) tport_contact_pane_t1

0xe856,	// (0x000bb81f) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x000bcd57) tport_contact_pane_t

0xe864,	// (0x000bb82d) list_tport_pane

0xe86d,	// (0x000bb836) scroll_pane_cp_030

0x8499,	// (0x000b5462) cell_tport_appsw_pane_g1

0x84a9,	// (0x000b5472) cell_tport_appsw_pane_t1

0x84b7,	// (0x000b5480) grid_highlight_pane_cp019

0x84bf,	// (0x000b5488) list_tport_double_graphic_pane_ParamLimits

0x84bf,	// (0x000b5488) list_tport_double_graphic_pane

0xbb84,	// (0x000b8b4d) list_highlight_pane_cp023_ParamLimits

0xbb84,	// (0x000b8b4d) list_highlight_pane_cp023

0x84d6,	// (0x000b549f) list_tport_double_graphic_pane_g1_ParamLimits

0x84d6,	// (0x000b549f) list_tport_double_graphic_pane_g1

0x84e3,	// (0x000b54ac) list_tport_double_graphic_pane_t1_ParamLimits

0x84e3,	// (0x000b54ac) list_tport_double_graphic_pane_t1

0x84f8,	// (0x000b54c1) list_tport_double_graphic_pane_t2_ParamLimits

0x84f8,	// (0x000b54c1) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x000bcd63) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x000bcd63) list_tport_double_graphic_pane_t

0x9646,	// (0x000b660f) main_cale_note_pane

0x5c4b,	// (0x000b2c14) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5c4b,	// (0x000b2c14) cell_vitu2_function_top_wide_pane_cp01

0x77c2,	// (0x000b478b) wait_bar_pane_cp05_ParamLimits

0xbb84,	// (0x000b8b4d) listscroll_cmail_pane

0xe876,	// (0x000bb83f) list_cmail_pane

0x850a,	// (0x000b54d3) list_cmail_body_pane

0x8521,	// (0x000b54ea) list_single_cmail_header_caption_pane

0xe886,	// (0x000bb84f) list_single_cmail_header_detail_pane_ParamLimits

0xe886,	// (0x000bb84f) list_single_cmail_header_detail_pane

0xe8b8,	// (0x000bb881) list_single_cmail_header_caption_pane_t1

0x853e,	// (0x000b5507) list_single_cmail_header_detail_pane_g1_ParamLimits

0x853e,	// (0x000b5507) list_single_cmail_header_detail_pane_g1

0xbba6,	// (0x000b8b6f) list_single_cmail_header_detail_pane_g2_ParamLimits

0xbba6,	// (0x000b8b6f) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x000bcd68) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x000bcd68) list_single_cmail_header_detail_pane_g

0xa726,	// (0x000b76ef) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa726,	// (0x000b76ef) list_single_cmail_header_detail_pane_t1

0xa786,	// (0x000b774f) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa786,	// (0x000b774f) list_single_cmail_header_editor_pane_bg

0xe46b,	// (0x000bb434) list_cmail_body_pane_g1

0xe8dc,	// (0x000bb8a5) list_cmail_body_pane_t1

0xd822,	// (0x000ba7eb) list_single_cmail_header_editor_pane_bg_g1

0xad7d,	// (0x000b7d46) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd832,	// (0x000ba7fb) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd82a,	// (0x000ba7f3) list_single_cmail_header_editor_pane_bg_g1_copy3

0xda4c,	// (0x000baa15) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd852,	// (0x000ba81b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd842,	// (0x000ba80b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd84a,	// (0x000ba813) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xad5d,	// (0x000b7d26) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8556,	// (0x000b551f) calenote_gesture_pane_ParamLimits

0x8556,	// (0x000b551f) calenote_gesture_pane

0x8576,	// (0x000b553f) calenote_window_pane_ParamLimits

0x8576,	// (0x000b553f) calenote_window_pane

0xe8ea,	// (0x000bb8b3) popup_note_window_cp01

0x8592,	// (0x000b555b) calenote_swipe_1_pane_ParamLimits

0x8592,	// (0x000b555b) calenote_swipe_1_pane

0x7d65,	// (0x000b4d2e) calenote_swipe_2_pane_ParamLimits

0x7d65,	// (0x000b4d2e) calenote_swipe_2_pane

0xe69f,	// (0x000bb668) calenote_swipe_1_pane_g1_ParamLimits

0xe69f,	// (0x000bb668) calenote_swipe_1_pane_g1

0xe6ac,	// (0x000bb675) calenote_swipe_1_pane_g2_ParamLimits

0xe6ac,	// (0x000bb675) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x000bcc8c) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x000bcc8c) calenote_swipe_1_pane_g

0xe8fc,	// (0x000bb8c5) calenote_swipe_1_pane_t1_ParamLimits

0xe8fc,	// (0x000bb8c5) calenote_swipe_1_pane_t1

0xe69f,	// (0x000bb668) calenote_swipe_2_pane_g1_ParamLimits

0xe69f,	// (0x000bb668) calenote_swipe_2_pane_g1

0xe91b,	// (0x000bb8e4) calenote_swipe_2_pane_g2_ParamLimits

0xe91b,	// (0x000bb8e4) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x000bcd74) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x000bcd74) calenote_swipe_2_pane_g

0xe927,	// (0x000bb8f0) calenote_swipe_2_pane_t1_ParamLimits

0xe927,	// (0x000bb8f0) calenote_swipe_2_pane_t1

0x9646,	// (0x000b660f) main_mup_navstr_pane

0x483a,	// (0x000b1803) main_mup3_pane_t7_ParamLimits

0x483a,	// (0x000b1803) main_mup3_pane_t7

0xa17b,	// (0x000b7144) main_mp4_pane_g6_ParamLimits

0xa17b,	// (0x000b7144) main_mp4_pane_g6

0xa33b,	// (0x000b7304) main_image3_pane_t4_ParamLimits

0xa33b,	// (0x000b7304) main_image3_pane_t4

0x85a7,	// (0x000b5570) popup_navstr_preview_pane_ParamLimits

0x85a7,	// (0x000b5570) popup_navstr_preview_pane

0x85b7,	// (0x000b5580) scroll_navstr_pane_ParamLimits

0x85b7,	// (0x000b5580) scroll_navstr_pane

0x9646,	// (0x000b660f) bg_popup_preview_window_pane_cp04

0xe94e,	// (0x000bb917) popup_navstr_preview_pane_t1

0x85cb,	// (0x000b5594) scroll_navstr_pane_g1_ParamLimits

0x85cb,	// (0x000b5594) scroll_navstr_pane_g1

0x85df,	// (0x000b55a8) scroll_navstr_pane_t1_ParamLimits

0x85df,	// (0x000b55a8) scroll_navstr_pane_t1

0xe8f3,	// (0x000bb8bc) bg_button_pane_cp014

0xe8f3,	// (0x000bb8bc) bg_button_pane_cp030

0x7c43,	// (0x000b4c0c) list_double_fisheye_pane_g4_ParamLimits

0x7c43,	// (0x000b4c0c) list_double_fisheye_pane_g4

0x7c4f,	// (0x000b4c18) list_double_fisheye_pane_g5_ParamLimits

0x7c4f,	// (0x000b4c18) list_double_fisheye_pane_g5

0xcf0b,	// (0x000b9ed4) sp_fs_scroll_pane_cp03

0xe7b8,	// (0x000bb781) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe7c4,	// (0x000bb78d) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x000bcca9) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7d0,	// (0x000bb799) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe87e,	// (0x000bb847) sp_fs_scroll_pane_cp02

0xaa67,	// (0x000b7a30) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaa67,	// (0x000b7a30) popup_sp_fs_calendar_preview_list_single_pane

0x9646,	// (0x000b660f) main_cam6_pano_pane

0x9650,	// (0x000b6619) main_mup3_pane_ParamLimits

0x9646,	// (0x000b660f) main_phacti_pane

0x7693,	// (0x000b465c) bg_button_pane_cp11

0x76ad,	// (0x000b4676) main_mobtv_info_pane_g2_ParamLimits

0x76ad,	// (0x000b4676) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x000bcc09) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x000bcc09) main_mobtv_info_pane_g

0x788a,	// (0x000b4853) sc_clock_pane_t5_ParamLimits

0x788a,	// (0x000b4853) sc_clock_pane_t5

0x7abe,	// (0x000b4a87) main_radioblah_pane_g1_ParamLimits

0xe5d1,	// (0x000bb59a) main_radioblah_pane_t3_ParamLimits

0xe5d1,	// (0x000bb59a) main_radioblah_pane_t3

0xe5e9,	// (0x000bb5b2) main_radioblah_pane_t4_ParamLimits

0xe5e9,	// (0x000bb5b2) main_radioblah_pane_t4

0x7ae6,	// (0x000b4aaf) main_radioblah_text_pane_ParamLimits

0x7ae6,	// (0x000b4aaf) main_radioblah_text_pane

0x7af8,	// (0x000b4ac1) main_radioblah_info_pane_g1_ParamLimits

0x7b91,	// (0x000b4b5a) main_radioblah_info_pane_t4_ParamLimits

0x7b91,	// (0x000b4b5a) main_radioblah_info_pane_t4

0xbb84,	// (0x000b8b4d) main_sp_fs_calendar_pane

0x85f6,	// (0x000b55bf) main_phacti_pane_g1

0x85fe,	// (0x000b55c7) phacti_note_pane_ParamLimits

0x85fe,	// (0x000b55c7) phacti_note_pane

0xe965,	// (0x000bb92e) phacti_term_pane_ParamLimits

0xe965,	// (0x000bb92e) phacti_term_pane

0xe97a,	// (0x000bb943) phacti_note_pane_t1_ParamLimits

0xe97a,	// (0x000bb943) phacti_note_pane_t1

0xa79d,	// (0x000b7766) phacti_term_pane_g1

0xa7a5,	// (0x000b776e) phacti_term_pane_t1_ParamLimits

0xa7a5,	// (0x000b776e) phacti_term_pane_t1

0xe991,	// (0x000bb95a) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe999,	// (0x000bb962) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x000bcd7e) popup_sp_fs_calendar_preview_list_single_pane_g

0xe9a1,	// (0x000bb96a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe9a1,	// (0x000bb96a) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe9b7,	// (0x000bb980) aid_popup_sp_fs_bg_corner_pane

0xce5f,	// (0x000b9e28) popup_sp_fs_calendar_preview_bg_pane_g1

0x9646,	// (0x000b660f) popup_sp_fs_calendar_preview_bg_pane

0xe9bf,	// (0x000bb988) popup_sp_fs_calendar_preview_list_pane

0xca27,	// (0x000b99f0) bg_main_sp_fs_cale_pane_ParamLimits

0xca27,	// (0x000b99f0) bg_main_sp_fs_cale_pane

0xa7d8,	// (0x000b77a1) listscroll_cale_mrui_pane_ParamLimits

0xa7d8,	// (0x000b77a1) listscroll_cale_mrui_pane

0xa7ed,	// (0x000b77b6) listscroll_sp_fs_schedule_track_pane

0xa7f6,	// (0x000b77bf) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa7f6,	// (0x000b77bf) main_sp_fs_ctrlbar_pane_cp01

0xe9c7,	// (0x000bb990) main_sp_fs_ribbon_pane

0xa809,	// (0x000b77d2) popup_sp_fs_cale_preview_window

0x8673,	// (0x000b563c) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8673,	// (0x000b563c) list_single_sp_fs_schedule_track_pane

0xbb84,	// (0x000b8b4d) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xbb84,	// (0x000b8b4d) bg_sp_fs_highlight_list_pane_cp03

0x8687,	// (0x000b5650) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8687,	// (0x000b5650) list_single_sp_fs_schedule_track_pane_g1

0x8693,	// (0x000b565c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8693,	// (0x000b565c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x000bcd83) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x000bcd83) list_single_sp_fs_schedule_track_pane_g

0x869f,	// (0x000b5668) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x869f,	// (0x000b5668) list_single_sp_fs_schedule_track_pane_t1

0x86c1,	// (0x000b568a) sp_fs_schedule_track_pane_ParamLimits

0x86c1,	// (0x000b568a) sp_fs_schedule_track_pane

0xe9cf,	// (0x000bb998) sp_fs_schedule_track_pane_g1

0xe9d7,	// (0x000bb9a0) sp_fs_schedule_track_pane_g2

0xe9df,	// (0x000bb9a8) sp_fs_schedule_track_pane_g3

0xe9e7,	// (0x000bb9b0) sp_fs_schedule_track_pane_g4

0xe9ef,	// (0x000bb9b8) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x000bcd88) sp_fs_schedule_track_pane_g

0xd822,	// (0x000ba7eb) bg_sp_fs_schedule_viewer_highlight_g1

0xad7d,	// (0x000b7d46) bg_sp_fs_schedule_viewer_highlight_g2

0xd82a,	// (0x000ba7f3) bg_sp_fs_schedule_viewer_highlight_g3

0xd832,	// (0x000ba7fb) bg_sp_fs_schedule_viewer_highlight_g4

0xda4c,	// (0x000baa15) bg_sp_fs_schedule_viewer_highlight_g5

0xd842,	// (0x000ba80b) bg_sp_fs_schedule_viewer_highlight_g6

0xd84a,	// (0x000ba813) bg_sp_fs_schedule_viewer_highlight_g7

0xd852,	// (0x000ba81b) bg_sp_fs_schedule_viewer_highlight_g8

0xad5d,	// (0x000b7d26) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x000bcd93) bg_sp_fs_schedule_viewer_highlight_g

0x9646,	// (0x000b660f) bg_main_sp_fs_ribbon_pane

0x86d6,	// (0x000b569f) main_sp_fs_ribbon_pane_g1

0xe9f7,	// (0x000bb9c0) main_sp_fs_ribbon_pane_t1

0x86df,	// (0x000b56a8) main_sp_fs_ribbon_pane_t2

0xea06,	// (0x000bb9cf) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x000bcda6) main_sp_fs_ribbon_pane_t

0xea15,	// (0x000bb9de) main_sp_fs_ribbon_scheduler_pane

0xea1d,	// (0x000bb9e6) bg_main_sp_fs_ribbon_pane_g1

0xea26,	// (0x000bb9ef) bg_main_sp_fs_ribbon_pane_g2

0xea2f,	// (0x000bb9f8) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x000bcdad) bg_main_sp_fs_ribbon_pane_g

0xea37,	// (0x000bba00) main_sp_fs_ribbon_scheduler_pane_g1

0xea40,	// (0x000bba09) main_sp_fs_ribbon_scheduler_pane_g2

0xea49,	// (0x000bba12) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x000bcdb4) main_sp_fs_ribbon_scheduler_pane_g

0xea52,	// (0x000bba1b) list_cale_mrui_pane

0x86ee,	// (0x000b56b7) sp_fs_scroll_pane_cp07_ParamLimits

0x86ee,	// (0x000b56b7) sp_fs_scroll_pane_cp07

0x870a,	// (0x000b56d3) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x870a,	// (0x000b56d3) bg_sp_fs_schedule_viewer_highlight

0xea5f,	// (0x000bba28) list_single_sp_fs_schedule_track_pane_cp01

0xea67,	// (0x000bba30) list_sp_fs_schedule_track_pane

0xea6f,	// (0x000bba38) sp_fs_scroll_pane_cp06_ParamLimits

0xea6f,	// (0x000bba38) sp_fs_scroll_pane_cp06

0xce5f,	// (0x000b9e28) bgmain_sp_fs_calendar_pane_g1

0x871c,	// (0x000b56e5) list_single_cale_mrui_pane_ParamLimits

0x871c,	// (0x000b56e5) list_single_cale_mrui_pane

0xa81b,	// (0x000b77e4) list_single_cale_mrui_row_pane_ParamLimits

0xa81b,	// (0x000b77e4) list_single_cale_mrui_row_pane

0xa828,	// (0x000b77f1) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa828,	// (0x000b77f1) list_single_cale_mrui_row_pane_g1

0xa860,	// (0x000b7829) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa860,	// (0x000b7829) list_single_cale_mrui_row_pane_t1

0x873f,	// (0x000b5708) list_single_cale_mrui_row_pane_t2_ParamLimits

0x873f,	// (0x000b5708) list_single_cale_mrui_row_pane_t2

0xa872,	// (0x000b783b) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa872,	// (0x000b783b) list_single_cale_mrui_row_pane_t3

0xa8a1,	// (0x000b786a) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa8a1,	// (0x000b786a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x000bcdc2) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x000bcdc2) list_single_cale_mrui_row_pane_t

0x87a5,	// (0x000b576e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x87a5,	// (0x000b576e) list_single_cmail_header_editor_pane_bg_cp01

0x87c9,	// (0x000b5792) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x87c9,	// (0x000b5792) list_single_cmail_header_editor_pane_bg_cp02

0x87e9,	// (0x000b57b2) main_radioblah_text_pane_t1_ParamLimits

0x87e9,	// (0x000b57b2) main_radioblah_text_pane_t1

0xea8e,	// (0x000bba57) cam6_indi_pane_cp01

0xea96,	// (0x000bba5f) cam6_mode_pane_cp01

0xea9e,	// (0x000bba67) cam6_pano_pane

0xeaa7,	// (0x000bba70) cam6_zoom_pane_cp01

0xeab1,	// (0x000bba7a) cam6_pano_image_pane

0xeaba,	// (0x000bba83) cam6_pano_pane_g1

0xe46b,	// (0x000bb434) cam6_pano_pane_g2

0xeac3,	// (0x000bba8c) cam6_pano_pane_g3

0xeacc,	// (0x000bba95) cam6_pano_pane_g4

0xd41c,	// (0x000ba3e5) cam6_pano_pane_g5

0xead5,	// (0x000bba9e) cam6_pano_pane_g6

0xeadd,	// (0x000bbaa6) cam6_pano_pane_g7

0xeae5,	// (0x000bbaae) cam6_pano_pane_g8

0xeaee,	// (0x000bbab7) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x000bcdcb) cam6_pano_pane_g

0x9646,	// (0x000b660f) main_browser_tag_pane

0xe946,	// (0x000bb90f) grid_navstr_albumart_pane

0xeaf9,	// (0x000bbac2) cell_navstr_albumart_pane_ParamLimits

0xeaf9,	// (0x000bbac2) cell_navstr_albumart_pane

0xeb15,	// (0x000bbade) cell_navstr_albumart_pane_g1

0xc834,	// (0x000b97fd) cell_navstr_albumart_pane_g2

0xc844,	// (0x000b980d) cell_navstr_albumart_pane_g3

0xc83c,	// (0x000b9805) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x000bcdde) cell_navstr_albumart_pane_g

0x8804,	// (0x000b57cd) bt_list_pane_ParamLimits

0x8804,	// (0x000b57cd) bt_list_pane

0x881a,	// (0x000b57e3) bt_list_pane_t1

0x8829,	// (0x000b57f2) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x000bcde7) bt_list_pane_t

0x9646,	// (0x000b660f) main_cale_prevew_pane

0x8838,	// (0x000b5801) popup_cale_preview_window_ParamLimits

0x8838,	// (0x000b5801) popup_cale_preview_window

0xbb84,	// (0x000b8b4d) bg_popup_preview_window_pane_cp05_ParamLimits

0xbb84,	// (0x000b8b4d) bg_popup_preview_window_pane_cp05

0xeb1d,	// (0x000bbae6) list_cale_preview_pane_ParamLimits

0xeb1d,	// (0x000bbae6) list_cale_preview_pane

0x8855,	// (0x000b581e) list_double_cale_preview_pane_ParamLimits

0x8855,	// (0x000b581e) list_double_cale_preview_pane

0x8869,	// (0x000b5832) list_single_cale_preview_pane_ParamLimits

0x8869,	// (0x000b5832) list_single_cale_preview_pane

0x8881,	// (0x000b584a) list_single_cale_preview_pane_g1

0x8889,	// (0x000b5852) list_single_cale_preview_pane_t1_ParamLimits

0x8889,	// (0x000b5852) list_single_cale_preview_pane_t1

0x889e,	// (0x000b5867) list_double_cale_preview_pane_g1

0x88a6,	// (0x000b586f) list_double_cale_preview_pane_t1_ParamLimits

0x88a6,	// (0x000b586f) list_double_cale_preview_pane_t1

0x88bb,	// (0x000b5884) list_double_cale_preview_pane_t2_ParamLimits

0x88bb,	// (0x000b5884) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x000bcdec) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x000bcdec) list_double_cale_preview_pane_t

0x9646,	// (0x000b660f) main_ezdial_pane

0xbb84,	// (0x000b8b4d) main_sp_fs_email_pane_ParamLimits

0x7def,	// (0x000b4db8) cmail_ddmenu_btn01_pane_ParamLimits

0x7def,	// (0x000b4db8) cmail_ddmenu_btn01_pane

0x7e02,	// (0x000b4dcb) cmail_ddmenu_btn02_pane_ParamLimits

0x7e02,	// (0x000b4dcb) cmail_ddmenu_btn02_pane

0x7e25,	// (0x000b4dee) cmail_ddmenu_btn03_pane_ParamLimits

0x7e25,	// (0x000b4dee) cmail_ddmenu_btn03_pane

0x7e4d,	// (0x000b4e16) main_sp_fs_ctrlbar_pane_ParamLimits

0x7e71,	// (0x000b4e3a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x850a,	// (0x000b54d3) list_cmail_body_pane_ParamLimits

0xe8c6,	// (0x000bb88f) bg_button_pane_cp12

0xe8cf,	// (0x000bb898) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe8cf,	// (0x000bb898) list_single_cmail_header_detail_pane_g3

0xa762,	// (0x000b772b) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa762,	// (0x000b772b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x000bcd6f) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x000bcd6f) list_single_cmail_header_detail_pane_t

0xa7ba,	// (0x000b7783) phacti_term_pane_t2_ParamLimits

0xa7ba,	// (0x000b7783) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x000bcd79) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x000bcd79) phacti_term_pane_t

0xeb29,	// (0x000bbaf2) aid_size_list_single_double

0x88d3,	// (0x000b589c) popup_ezdial_listscroll_window

0x88ef,	// (0x000b58b8) popup_number_entry_window_cp01

0xab0b,	// (0x000b7ad4) bg_popup_call_pane_cp09

0xeb35,	// (0x000bbafe) ezdial_list_pane

0xeb3d,	// (0x000bbb06) scroll_pane_cp23

0xca27,	// (0x000b99f0) bg_button_pane_cp028_ParamLimits

0xca27,	// (0x000b99f0) bg_button_pane_cp028

0x88fd,	// (0x000b58c6) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x88fd,	// (0x000b58c6) cmail_ddmenu_btn01_pane_g1

0x8909,	// (0x000b58d2) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8909,	// (0x000b58d2) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x000bcdf1) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x000bcdf1) cmail_ddmenu_btn01_pane_g

0xeb45,	// (0x000bbb0e) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb45,	// (0x000bbb0e) cmail_ddmenu_btn01_pane_t1

0xca27,	// (0x000b99f0) bg_button_pane_cp029_ParamLimits

0xca27,	// (0x000b99f0) bg_button_pane_cp029

0x8915,	// (0x000b58de) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8915,	// (0x000b58de) cmail_ddmenu_btn02_pane_g1

0x892d,	// (0x000b58f6) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x892d,	// (0x000b58f6) cmail_ddmenu_btn02_pane_t1

0xbb84,	// (0x000b8b4d) bg_button_pane_cp031_ParamLimits

0xbb84,	// (0x000b8b4d) bg_button_pane_cp031

0x8915,	// (0x000b58de) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8915,	// (0x000b58de) cmail_ddmenu_btn03_pane_g1

0x892d,	// (0x000b58f6) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x892d,	// (0x000b58f6) cmail_ddmenu_btn03_pane_t1

0x541b,	// (0x000b23e4) cell_dialer2_keypad_pane_t1_ParamLimits

0x5435,	// (0x000b23fe) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5435,	// (0x000b23fe) cell_dialer2_keypad_pane_t1_copy1

0x74a6,	// (0x000b446f) ncimui_group_button_pane

0xbb84,	// (0x000b8b4d) main_sp_fs_calendar_pane_ParamLimits

0x8521,	// (0x000b54ea) list_single_cmail_header_caption_pane_ParamLimits

0xa7cf,	// (0x000b7798) aid_recal_txt_sm_pane

0x9646,	// (0x000b660f) mian_recal_day_pane

0xa809,	// (0x000b77d2) popup_sp_fs_cale_preview_window_ParamLimits

0xeb5a,	// (0x000bbb23) list_recal_day_pane

0xa8ee,	// (0x000b78b7) list_single_recal_day_pane_ParamLimits

0xa8ee,	// (0x000b78b7) list_single_recal_day_pane

0xeb81,	// (0x000bbb4a) list_single_recal_day_pane_g1_ParamLimits

0xeb81,	// (0x000bbb4a) list_single_recal_day_pane_g1

0xa900,	// (0x000b78c9) list_single_recal_day_pane_g2_ParamLimits

0xa900,	// (0x000b78c9) list_single_recal_day_pane_g2

0xbbb2,	// (0x000b8b7b) list_single_recal_day_pane_g3_ParamLimits

0xbbb2,	// (0x000b8b7b) list_single_recal_day_pane_g3

0x8951,	// (0x000b591a) list_single_recal_day_pane_g4_ParamLimits

0x8951,	// (0x000b591a) list_single_recal_day_pane_g4

0xbbbe,	// (0x000b8b87) list_single_recal_day_pane_g5_ParamLimits

0xbbbe,	// (0x000b8b87) list_single_recal_day_pane_g5

0xbbca,	// (0x000b8b93) list_single_recal_day_pane_g6_ParamLimits

0xbbca,	// (0x000b8b93) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x000bce00) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x000bce00) list_single_recal_day_pane_g

0xbbde,	// (0x000b8ba7) list_single_recal_day_pane_t1

0xbbf0,	// (0x000b8bb9) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x000bce0b) list_single_recal_day_pane_t

0x8969,	// (0x000b5932) ncimui_query_button_pane_ParamLimits

0x8969,	// (0x000b5932) ncimui_query_button_pane

0x8979,	// (0x000b5942) ncimui_query_button_pane_t1_ParamLimits

0x8979,	// (0x000b5942) ncimui_query_button_pane_t1

0xeb8d,	// (0x000bbb56) ncimui_query_button_pane_t2_ParamLimits

0xeb8d,	// (0x000bbb56) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x000bce10) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x000bce10) ncimui_query_button_pane_t

0x898c,	// (0x000b5955) query_button_pane_ParamLimits

0x898c,	// (0x000b5955) query_button_pane

0x9646,	// (0x000b660f) bg_button_pane_cp0028

0xeba0,	// (0x000bbb69) query_button_pane_t1

0x3389,	// (0x000b0352) main_tport_pane_ParamLimits

0x83cb,	// (0x000b5394) bg_popup_window_pane_cp01_ParamLimits

0x83cb,	// (0x000b5394) bg_popup_window_pane_cp01

0x83e4,	// (0x000b53ad) heading_pane_cp08_ParamLimits

0x83e4,	// (0x000b53ad) heading_pane_cp08

0x83f7,	// (0x000b53c0) heading_pane_cp07_ParamLimits

0x83f7,	// (0x000b53c0) heading_pane_cp07

0x8499,	// (0x000b5462) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x000bcd5c) cell_tport_appsw_pane_g

0x9ed7,	// (0x000b6ea0) input_candi_list_open_g1

0xaf40,	// (0x000b7f09) list_cale_time_pane_g6_ParamLimits

0xaf40,	// (0x000b7f09) list_cale_time_pane_g6

0x4165,	// (0x000b112e) aid_size_touch_calib_1_ParamLimits

0x4165,	// (0x000b112e) aid_size_touch_calib_1

0x4177,	// (0x000b1140) aid_size_touch_calib_2_ParamLimits

0x4177,	// (0x000b1140) aid_size_touch_calib_2

0x418f,	// (0x000b1158) aid_size_touch_calib_3_ParamLimits

0x418f,	// (0x000b1158) aid_size_touch_calib_3

0x41ad,	// (0x000b1176) aid_size_touch_calib_4_ParamLimits

0x41ad,	// (0x000b1176) aid_size_touch_calib_4

0x41c5,	// (0x000b118e) main_touch_calib_button_group_pane_ParamLimits

0x41c5,	// (0x000b118e) main_touch_calib_button_group_pane

0x41dd,	// (0x000b11a6) main_touch_calib_pane_g1_ParamLimits

0x41ef,	// (0x000b11b8) main_touch_calib_pane_g2_ParamLimits

0x4201,	// (0x000b11ca) main_touch_calib_pane_g3_ParamLimits

0x4213,	// (0x000b11dc) main_touch_calib_pane_g4_ParamLimits

0xf74d,	// (0x000bc716) main_touch_calib_pane_g_ParamLimits

0x4225,	// (0x000b11ee) main_touch_calib_pane_t1_ParamLimits

0x423f,	// (0x000b1208) main_touch_calib_pane_t2_ParamLimits

0x4259,	// (0x000b1222) main_touch_calib_pane_t3_ParamLimits

0x426d,	// (0x000b1236) main_touch_calib_pane_t4_ParamLimits

0x4283,	// (0x000b124c) main_touch_calib_pane_t5_ParamLimits

0xf756,	// (0x000bc71f) main_touch_calib_pane_t_ParamLimits

0xd1ac,	// (0x000ba175) list_single_fp_cale_pane_g3_ParamLimits

0xd1ac,	// (0x000ba175) list_single_fp_cale_pane_g3

0x9650,	// (0x000b6619) bg_button_pane_cp012_ParamLimits

0x9650,	// (0x000b6619) bg_vkb2_func_pane_cp03_ParamLimits

0x64b7,	// (0x000b3480) cell_vitu2_function_top_pane_g1_ParamLimits

0x9650,	// (0x000b6619) bg_vkb2_func_pane_cp04_ParamLimits

0x7431,	// (0x000b43fa) main_ncimui_button_group_pane_ParamLimits

0x7431,	// (0x000b43fa) main_ncimui_button_group_pane

0x7491,	// (0x000b445a) main_ncimui_pane_t3_ParamLimits

0x7491,	// (0x000b445a) main_ncimui_pane_t3

0xe95c,	// (0x000bb925) phacti_button_group_pane

0xeb29,	// (0x000bbaf2) aid_size_list_single_double_ParamLimits

0x88d3,	// (0x000b589c) popup_ezdial_listscroll_window_ParamLimits

0x88ef,	// (0x000b58b8) popup_number_entry_window_cp01_ParamLimits

0x899f,	// (0x000b5968) phacti_button_pane_ParamLimits

0x899f,	// (0x000b5968) phacti_button_pane

0x9646,	// (0x000b660f) bg_button_pane_cp14

0xebae,	// (0x000bbb77) phacti_button_pane_t1

0x89b0,	// (0x000b5979) main_touch_calib_button_pane_ParamLimits

0x89b0,	// (0x000b5979) main_touch_calib_button_pane

0xa95a,	// (0x000b7923) bg_button_pane_cp18_ParamLimits

0xa95a,	// (0x000b7923) bg_button_pane_cp18

0xebbc,	// (0x000bbb85) main_touch_calib_button_pane_t1_ParamLimits

0xebbc,	// (0x000bbb85) main_touch_calib_button_pane_t1

0xebd2,	// (0x000bbb9b) main_touch_calib_button_pane_t2_ParamLimits

0xebd2,	// (0x000bbb9b) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x000bce15) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x000bce15) main_touch_calib_button_pane_t

0x9646,	// (0x000b660f) cell_ncimui_button_pane

0x9646,	// (0x000b660f) bg_button_pane_cp032

0xebf0,	// (0x000bbbb9) cell_ncimui_button_pane_t1

0xa319,	// (0x000b72e2) image3_infobar_pane_ParamLimits

0xa319,	// (0x000b72e2) image3_infobar_pane

0x78b6,	// (0x000b487f) fs_bigclock_status_pane_ParamLimits

0x78b6,	// (0x000b487f) fs_bigclock_status_pane

0x78c3,	// (0x000b488c) main_fs_bigclock_clock_pane_ParamLimits

0x78c3,	// (0x000b488c) main_fs_bigclock_clock_pane

0x78f5,	// (0x000b48be) main_fs_bigclock_indi_pane_ParamLimits

0x78f5,	// (0x000b48be) main_fs_bigclock_indi_pane

0x7935,	// (0x000b48fe) main_fs_bigclock_swipe_pane_ParamLimits

0x7935,	// (0x000b48fe) main_fs_bigclock_swipe_pane

0x9646,	// (0x000b660f) main_fs_clock_dumped_data

0x7981,	// (0x000b494a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x7981,	// (0x000b494a) list_single_fs_bigclock_indicator_pane_g1

0x799a,	// (0x000b4963) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x799a,	// (0x000b4963) list_single_fs_bigclock_indicator_pane_g2

0x79b4,	// (0x000b497d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x79b4,	// (0x000b497d) list_single_fs_bigclock_indicator_pane_g3

0x79ce,	// (0x000b4997) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x79ce,	// (0x000b4997) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x000bcc3d) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x000bcc3d) list_single_fs_bigclock_indicator_pane_g

0x79fd,	// (0x000b49c6) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x79fd,	// (0x000b49c6) list_single_fs_bigclock_indicator_pane_t1

0x7a25,	// (0x000b49ee) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x7a25,	// (0x000b49ee) list_single_fs_bigclock_indicator_pane_t2

0x7a4d,	// (0x000b4a16) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x7a4d,	// (0x000b4a16) list_single_fs_bigclock_indicator_pane_t3

0x7a75,	// (0x000b4a3e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x7a75,	// (0x000b4a3e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x000bcc48) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x000bcc48) list_single_fs_bigclock_indicator_pane_t

0xebfe,	// (0x000bbbc7) image3_infobar_fav_pane_ParamLimits

0xebfe,	// (0x000bbbc7) image3_infobar_fav_pane

0xec0e,	// (0x000bbbd7) image3_infobar_loc_pane_ParamLimits

0xec0e,	// (0x000bbbd7) image3_infobar_loc_pane

0xec24,	// (0x000bbbed) image3_infobar_time_pane_ParamLimits

0xec24,	// (0x000bbbed) image3_infobar_time_pane

0xce5f,	// (0x000b9e28) image3_infobar_time_pane_g1

0xec34,	// (0x000bbbfd) image3_infobar_time_pane_t1

0xce5f,	// (0x000b9e28) image3_infobar_loc_pane_g1

0xec42,	// (0x000bbc0b) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x000bce1a) image3_infobar_loc_pane_g

0xec4a,	// (0x000bbc13) image3_infobar_loc_pane_t1

0xce5f,	// (0x000b9e28) image3_infobar_fav_pane_g1

0xec58,	// (0x000bbc21) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x000bce1f) image3_infobar_fav_pane_g

0xec60,	// (0x000bbc29) fs_bigclock_status_battery_pane

0xec69,	// (0x000bbc32) fs_bigclock_status_signal_pane

0xec72,	// (0x000bbc3b) fs_bigclock_status_title_pane

0xec7b,	// (0x000bbc44) fs_bigclock_status_signal_pane_g1

0xec84,	// (0x000bbc4d) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x000bce24) fs_bigclock_status_signal_pane_g

0xec8c,	// (0x000bbc55) fs_bigclock_status_battery_pane_g1

0xec95,	// (0x000bbc5e) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x000bce29) fs_bigclock_status_battery_pane_g

0xec9d,	// (0x000bbc66) fs_bigclock_status_title_pane_t1

0x89c5,	// (0x000b598e) main_fs_bigclock_clock_pane_g1

0x89c5,	// (0x000b598e) main_fs_bigclock_clock_pane_g2

0x89d8,	// (0x000b59a1) main_fs_bigclock_clock_pane_g3

0x89d8,	// (0x000b59a1) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x000bce2e) main_fs_bigclock_clock_pane_g

0x89ef,	// (0x000b59b8) main_fs_bigclock_clock_pane_t1

0x8a05,	// (0x000b59ce) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x000bce37) main_fs_bigclock_clock_pane_t

0xecab,	// (0x000bbc74) list_single_fs_bigclock_indicator_pane_ParamLimits

0xecab,	// (0x000bbc74) list_single_fs_bigclock_indicator_pane

0xecbc,	// (0x000bbc85) list_single_fs_bigclock_pane_ParamLimits

0xecbc,	// (0x000bbc85) list_single_fs_bigclock_pane

0xece2,	// (0x000bbcab) main_fs_bigclock_indicator_pane_t1

0xecf1,	// (0x000bbcba) list_single_fs_bigclock_pane_g1

0xecf9,	// (0x000bbcc2) list_single_fs_bigclock_pane_t1

0xce5f,	// (0x000b9e28) main_fs_bigclock_swipe_pane_g1

0xed3c,	// (0x000bbd05) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x000bce48) main_fs_bigclock_swipe_pane_g

0xed44,	// (0x000bbd0d) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed44,	// (0x000bbd0d) main_fs_bigclock_swipe_pane_t1

0x2192,	// (0x000af15b) call_type_pane_ParamLimits

0x9646,	// (0x000b660f) main_btmg_pane

0xa854,	// (0x000b781d) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa854,	// (0x000b781d) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x000bcdbb) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x000bcdbb) list_single_cale_mrui_row_pane_g

0xa8dc,	// (0x000b78a5) list_recal_vselct_arw_lo_pane

0xeb79,	// (0x000bbb42) list_recal_vselct_arw_up_pane

0xa8e4,	// (0x000b78ad) list_recal_vselct_pane

0x8a67,	// (0x000b5a30) btmg_button_pane

0x8a71,	// (0x000b5a3a) main_btmg_pane_g1

0x9646,	// (0x000b660f) bg_button_pane_cp044

0xed61,	// (0x000bbd2a) btmg_button_pane_t1

0xca13,	// (0x000b99dc) aid_listscroll_gen

0xbb84,	// (0x000b8b4d) main_cntbar_detail_pane

0xe876,	// (0x000bb83f) list_cmail_folder_pane

0xcf0b,	// (0x000b9ed4) sp_fs_scroll_pane_cp03_ParamLimits

0xbc02,	// (0x000b8bcb) list_single_fs_dyc_pane_cp01_ParamLimits

0xbc02,	// (0x000b8bcb) list_single_fs_dyc_pane_cp01

0xed6f,	// (0x000bbd38) aid_size_cmail_indent

0xbc1c,	// (0x000b8be5) list_single_dyc_row_pane_cp01

0x8aaf,	// (0x000b5a78) cntbar_detail_list_pane_ParamLimits

0x8aaf,	// (0x000b5a78) cntbar_detail_list_pane

0x8b01,	// (0x000b5aca) main_cntbar_detail_cont_pane_ParamLimits

0x8b01,	// (0x000b5aca) main_cntbar_detail_cont_pane

0xcf0b,	// (0x000b9ed4) scroll_pane_cp032_ParamLimits

0xcf0b,	// (0x000b9ed4) scroll_pane_cp032

0x8b15,	// (0x000b5ade) cntbar_detail_list_event_pane_ParamLimits

0x8b15,	// (0x000b5ade) cntbar_detail_list_event_pane

0x8ac1,	// (0x000b5a8a) cntbar_detail_list_shct_pane

0xadcb,	// (0x000b7d94) aid_list_gen

0xed78,	// (0x000bbd41) aid_scroll

0xed81,	// (0x000bbd4a) aid_size_touch_scroll_bar

0x6be1,	// (0x000b3baa) aid_list_double

0x6bcf,	// (0x000b3b98) aid_list_single

0x6bcf,	// (0x000b3b98) aid_list_single_lg

0x8b25,	// (0x000b5aee) aid_list_z_g_a_sm

0x8b2d,	// (0x000b5af6) aid_list_z_g_d

0x8b35,	// (0x000b5afe) aid_txt_z_prm

0x8b43,	// (0x000b5b0c) aid_txt_z_prm_cp01

0x8b51,	// (0x000b5b1a) aid_txt_z_sec

0x8b5f,	// (0x000b5b28) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8b5f,	// (0x000b5b28) main_cntbar_detail_cont_pane_g1

0x8b73,	// (0x000b5b3c) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8b73,	// (0x000b5b3c) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x000bce4d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x000bce4d) main_cntbar_detail_cont_pane_g

0xed8a,	// (0x000bbd53) main_cntbar_detail_cont_pane_t1

0xed98,	// (0x000bbd61) main_cntbar_detail_cont_pane_t2

0xeda6,	// (0x000bbd6f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x000bce52) main_cntbar_detail_cont_pane_t

0x8b83,	// (0x000b5b4c) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8b83,	// (0x000b5b4c) cell_cntbar_detail_list_shct_pane

0xedb4,	// (0x000bbd7d) cntbar_detail_list_shct_pane_g1

0xedbd,	// (0x000bbd86) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x000bce59) cntbar_detail_list_shct_pane_g

0x8b95,	// (0x000b5b5e) cntbar_detail_list_event_pane_g1_ParamLimits

0x8b95,	// (0x000b5b5e) cntbar_detail_list_event_pane_g1

0x8ba1,	// (0x000b5b6a) cntbar_detail_list_event_pane_g2_ParamLimits

0x8ba1,	// (0x000b5b6a) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x000bce5e) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x000bce5e) cntbar_detail_list_event_pane_g

0x8c0f,	// (0x000b5bd8) cntbar_detail_list_event_pane_t1_ParamLimits

0x8c0f,	// (0x000b5bd8) cntbar_detail_list_event_pane_t1

0x8c24,	// (0x000b5bed) cntbar_detail_list_event_pane_t2_ParamLimits

0x8c24,	// (0x000b5bed) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x000bce6b) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x000bce6b) cntbar_detail_list_event_pane_t

0xce5f,	// (0x000b9e28) cell_cntbar_detail_list_shct_pane_g1

0xb519,	// (0x000b84e2) navi_pane_mv_g3

0xbb84,	// (0x000b8b4d) main_cntbar_detail_pane_ParamLimits

0x9646,	// (0x000b660f) main_notif_wgt_pane

0xa109,	// (0x000b70d2) aid_tch_main_mp4_pane_g4

0xa311,	// (0x000b72da) popup_slider_window_cp02

0xa8d2,	// (0x000b789b) list_recal_day_event_pane

0x8a7b,	// (0x000b5a44) cntbar_detail_btn_pane_ParamLimits

0x8a7b,	// (0x000b5a44) cntbar_detail_btn_pane

0x8a94,	// (0x000b5a5d) cntbar_detail_btn_pane_cp01_ParamLimits

0x8a94,	// (0x000b5a5d) cntbar_detail_btn_pane_cp01

0x8ac1,	// (0x000b5a8a) cntbar_detail_list_shct_pane_ParamLimits

0x8ad1,	// (0x000b5a9a) cntbar_detail_pane_g1_ParamLimits

0x8ad1,	// (0x000b5a9a) cntbar_detail_pane_g1

0x8ae5,	// (0x000b5aae) cntbar_detail_pane_t1_ParamLimits

0x8ae5,	// (0x000b5aae) cntbar_detail_pane_t1

0x8bad,	// (0x000b5b76) cntbar_detail_list_event_pane_g3_ParamLimits

0x8bad,	// (0x000b5b76) cntbar_detail_list_event_pane_g3

0x8bc5,	// (0x000b5b8e) cntbar_detail_list_event_pane_g4_ParamLimits

0x8bc5,	// (0x000b5b8e) cntbar_detail_list_event_pane_g4

0x8bdd,	// (0x000b5ba6) cntbar_detail_list_event_pane_g5_ParamLimits

0x8bdd,	// (0x000b5ba6) cntbar_detail_list_event_pane_g5

0x8bf5,	// (0x000b5bbe) cntbar_detail_list_event_pane_g6_ParamLimits

0x8bf5,	// (0x000b5bbe) cntbar_detail_list_event_pane_g6

0x8c39,	// (0x000b5c02) cntbar_detail_list_event_pane_t3_ParamLimits

0x8c39,	// (0x000b5c02) cntbar_detail_list_event_pane_t3

0x8c4b,	// (0x000b5c14) popup_notif_wgt_window_ParamLimits

0x8c4b,	// (0x000b5c14) popup_notif_wgt_window

0x8c64,	// (0x000b5c2d) popup_submenu_window_cp01_ParamLimits

0x8c64,	// (0x000b5c2d) popup_submenu_window_cp01

0xab0b,	// (0x000b7ad4) bg_popup_window_pane_cp10

0xedc6,	// (0x000bbd8f) listscroll_notif_wgt_pane

0xedd8,	// (0x000bbda1) list_notif_wgt_window

0xede1,	// (0x000bbdaa) scroll_pane_cp033

0x8c78,	// (0x000b5c41) list_notif_wgt_row_pane_ParamLimits

0x8c78,	// (0x000b5c41) list_notif_wgt_row_pane

0xedea,	// (0x000bbdb3) aid_size_list_notif_wgt_del

0xedf7,	// (0x000bbdc0) list_notif_wgt_row_pane_g1

0xee03,	// (0x000bbdcc) list_notif_wgt_row_pane_g2

0xee12,	// (0x000bbddb) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x000bce72) list_notif_wgt_row_pane_g

0xee1f,	// (0x000bbde8) list_notif_wgt_row_pane_t1

0xee35,	// (0x000bbdfe) list_notif_wgt_row_pane_t2

0xee47,	// (0x000bbe10) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x000bce79) list_notif_wgt_row_pane_t

0xda66,	// (0x000baa2f) list_recal_day_event_pane_g1

0xee59,	// (0x000bbe22) list_recal_day_event_pane_t1

0x9646,	// (0x000b660f) bg_button_pane_cp045

0x8c88,	// (0x000b5c51) cntbar_detail_btn_pane_t1

0xca27,	// (0x000b99f0) main_callh_pane_ParamLimits

0xca27,	// (0x000b99f0) main_callh_pane

0x9646,	// (0x000b660f) main_coverflow0_pane

0x9646,	// (0x000b660f) main_wgtman_pane

0x7956,	// (0x000b491f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7956,	// (0x000b491f) main_fs_bigclock_unlock_btn_pane

0x8491,	// (0x000b545a) bg_button_pane_cp16

0x84a1,	// (0x000b546a) cell_tport_appsw_pane_g3

0x8c96,	// (0x000b5c5f) cf0_flow_pane_ParamLimits

0x8c96,	// (0x000b5c5f) cf0_flow_pane

0xee68,	// (0x000bbe31) listscroll_cf0_pane

0xee73,	// (0x000bbe3c) main_cf0_pane_g1

0x8cab,	// (0x000b5c74) main_cf0_pane_t1_ParamLimits

0x8cab,	// (0x000b5c74) main_cf0_pane_t1

0x8cc2,	// (0x000b5c8b) main_cf0_pane_t2_ParamLimits

0x8cc2,	// (0x000b5c8b) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x000bce85) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x000bce85) main_cf0_pane_t

0xee85,	// (0x000bbe4e) scroll_pane_cp11

0x8cd9,	// (0x000b5ca2) cf0_flow_pane_g1

0x8ce5,	// (0x000b5cae) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x000bce8a) cf0_flow_pane_g

0x8cf1,	// (0x000b5cba) cf0_flow_pane_t1

0x9646,	// (0x000b660f) main_call6_pane

0x9646,	// (0x000b660f) main_calllock_pane

0x8d03,	// (0x000b5ccc) call6_btn_grp_pane_ParamLimits

0x8d03,	// (0x000b5ccc) call6_btn_grp_pane

0x8d1d,	// (0x000b5ce6) call6_pane_g1_ParamLimits

0x8d1d,	// (0x000b5ce6) call6_pane_g1

0x8d36,	// (0x000b5cff) popup_call6_1st_window_ParamLimits

0x8d36,	// (0x000b5cff) popup_call6_1st_window

0x8d4a,	// (0x000b5d13) popup_call6_2nd_window_ParamLimits

0x8d4a,	// (0x000b5d13) popup_call6_2nd_window

0x8d5e,	// (0x000b5d27) cell_call6_btn_pane_ParamLimits

0x8d5e,	// (0x000b5d27) cell_call6_btn_pane

0xab0b,	// (0x000b7ad4) bg_popup_call2_in_pane_cp03

0xee90,	// (0x000bbe59) popup_call6_1st_window_g1

0xee98,	// (0x000bbe61) popup_call6_1st_window_g2

0xeea0,	// (0x000bbe69) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x000bce8f) popup_call6_1st_window_g

0xeea8,	// (0x000bbe71) popup_call6_1st_window_t1

0xeeb7,	// (0x000bbe80) popup_call6_1st_window_t2

0xeec7,	// (0x000bbe90) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x000bce96) popup_call6_1st_window_t

0xab0b,	// (0x000b7ad4) bg_popup_call2_in_pane_cp04

0xee90,	// (0x000bbe59) popup_call6_2nd_window_g1

0xee98,	// (0x000bbe61) popup_call6_2nd_window_g2

0xeea0,	// (0x000bbe69) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x000bce8f) popup_call6_2nd_window_g

0xeea8,	// (0x000bbe71) popup_call6_2nd_window_t1

0xf0b4,	// (0x000bc07d) bg_button_pane_cp15

0xa90c,	// (0x000b78d5) cell_call6_btn_pane_g1

0xa915,	// (0x000b78de) cell_call6_btn_pane_t1

0x8d72,	// (0x000b5d3b) listscroll_wgtman_pane_ParamLimits

0x8d72,	// (0x000b5d3b) listscroll_wgtman_pane

0x8d93,	// (0x000b5d5c) wgtman_btn_pane_ParamLimits

0x8d93,	// (0x000b5d5c) wgtman_btn_pane

0xb32b,	// (0x000b82f4) aid_scroll_copy1

0xeed7,	// (0x000bbea0) list_wgtman_pane

0x8dd6,	// (0x000b5d9f) wgtman_btn_pane_g1_ParamLimits

0x8dd6,	// (0x000b5d9f) wgtman_btn_pane_g1

0x8e02,	// (0x000b5dcb) wgtman_btn_pane_t1_ParamLimits

0x8e02,	// (0x000b5dcb) wgtman_btn_pane_t1

0xeee1,	// (0x000bbeaa) wgtman_btn_pane_t2_ParamLimits

0xeee1,	// (0x000bbeaa) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x000bce9d) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x000bce9d) wgtman_btn_pane_t

0x8e3f,	// (0x000b5e08) listrow_wgtman_pane_ParamLimits

0x8e3f,	// (0x000b5e08) listrow_wgtman_pane

0x8e53,	// (0x000b5e1c) listrow_wgtman_pane_g1

0x8e60,	// (0x000b5e29) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x000bcea2) listrow_wgtman_pane_g

0x8e7e,	// (0x000b5e47) listrow_wgtman_pane_t1

0x8e96,	// (0x000b5e5f) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x000bcea7) listrow_wgtman_pane_t

0x8ebc,	// (0x000b5e85) wait_bar_pane_cp09

0xeef8,	// (0x000bbec1) main_calllock_btn_pane

0xef02,	// (0x000bbecb) main_calllock_pane_g1

0x9646,	// (0x000b660f) bg_button_pane_cp17

0xef0e,	// (0x000bbed7) main_calllock_btn_pane_g1

0xef17,	// (0x000bbee0) main_calllock_btn_pane_t1

0x9646,	// (0x000b660f) main_dialer3_pane

0x9646,	// (0x000b660f) main_fmrd2_pane

0xce5f,	// (0x000b9e28) main_fs_bigclock_unlock_btn_pane_g1

0x8ed6,	// (0x000b5e9f) main_fs_bigclock_unlock_btn_pane_t1

0x8ee4,	// (0x000b5ead) area_fmrd2_info_pane_ParamLimits

0x8ee4,	// (0x000b5ead) area_fmrd2_info_pane

0x8ef5,	// (0x000b5ebe) area_fmrd2_visual_pane_ParamLimits

0x8ef5,	// (0x000b5ebe) area_fmrd2_visual_pane

0x8f03,	// (0x000b5ecc) fmrd2_indi_pane_ParamLimits

0x8f03,	// (0x000b5ecc) fmrd2_indi_pane

0x8f10,	// (0x000b5ed9) area_fmrd2_visual_pane_g1

0x8f18,	// (0x000b5ee1) area_fmrd2_visual_pane_t1

0x8f28,	// (0x000b5ef1) area_fmrd2_visual_pane_t2

0x8f38,	// (0x000b5f01) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x000bceb1) area_fmrd2_visual_pane_t

0x8f48,	// (0x000b5f11) area_fmrd2_info_pane_g1

0x8f50,	// (0x000b5f19) area_fmrd2_info_pane_t1

0x8f60,	// (0x000b5f29) area_fmrd2_info_pane_t2

0x8f70,	// (0x000b5f39) area_fmrd2_info_pane_t3

0x8f80,	// (0x000b5f49) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x000bceb8) area_fmrd2_info_pane_t

0x8f90,	// (0x000b5f59) fmrd2_indi_pane_t1

0x8fa0,	// (0x000b5f69) fmrd2_indi_pane_t2

0x8fb0,	// (0x000b5f79) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x000bcec1) fmrd2_indi_pane_t

0x79df,	// (0x000b49a8) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x79df,	// (0x000b49a8) list_single_fs_bigclock_indicator_pane_g5

0x7a94,	// (0x000b4a5d) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x7a94,	// (0x000b4a5d) list_single_fs_bigclock_indicator_pane_t5

0x8612,	// (0x000b55db) aid_cell_bcale_month_pane_ParamLimits

0x8612,	// (0x000b55db) aid_cell_bcale_month_pane

0x8630,	// (0x000b55f9) bcale_month_pane_ParamLimits

0x8630,	// (0x000b55f9) bcale_month_pane

0x8654,	// (0x000b561d) bcale_preview_pane_ParamLimits

0x8654,	// (0x000b561d) bcale_preview_pane

0xecf9,	// (0x000bbcc2) list_single_fs_bigclock_pane_t1_ParamLimits

0xed18,	// (0x000bbce1) list_single_fs_bigclock_pane_t2_ParamLimits

0xed18,	// (0x000bbce1) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x000bce43) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x000bce43) list_single_fs_bigclock_pane_t

0x8ece,	// (0x000b5e97) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x000bceac) main_fs_bigclock_unlock_btn_pane_g

0x8fc0,	// (0x000b5f89) aid_dia3_key_size_ParamLimits

0x8fc0,	// (0x000b5f89) aid_dia3_key_size

0x8fd4,	// (0x000b5f9d) aid_dia3_listrow_size_ParamLimits

0x8fd4,	// (0x000b5f9d) aid_dia3_listrow_size

0x8fee,	// (0x000b5fb7) dia3_keypad_fun_pane_ParamLimits

0x8fee,	// (0x000b5fb7) dia3_keypad_fun_pane

0x900a,	// (0x000b5fd3) dia3_keypad_num_pane_ParamLimits

0x900a,	// (0x000b5fd3) dia3_keypad_num_pane

0x9026,	// (0x000b5fef) dia3_listscroll_pane_ParamLimits

0x9026,	// (0x000b5fef) dia3_listscroll_pane

0x903c,	// (0x000b6005) dia3_numentry_pane_ParamLimits

0x903c,	// (0x000b6005) dia3_numentry_pane

0xef26,	// (0x000bbeef) dia3_list_pane

0x9055,	// (0x000b601e) scroll_pane_cp12

0x9646,	// (0x000b660f) bg_dia3_numentry_pane

0x9060,	// (0x000b6029) dia3_numentry_pane_t1

0x906f,	// (0x000b6038) cell_dia3_key_num_pane

0x9077,	// (0x000b6040) cell_dia3_key0_fun_pane_ParamLimits

0x9077,	// (0x000b6040) cell_dia3_key0_fun_pane

0x908b,	// (0x000b6054) cell_dia3_key1_fun_pane_ParamLimits

0x908b,	// (0x000b6054) cell_dia3_key1_fun_pane

0x90a2,	// (0x000b606b) dia3_listrow_pane

0xe327,	// (0x000bb2f0) bg_dia3_numentry_pane_g1

0x9646,	// (0x000b660f) bg_button_pane_cp21

0x90b4,	// (0x000b607d) cell_dia3_key_num_pane_t1

0x90c2,	// (0x000b608b) cell_dia3_key_num_pane_t2

0x90d1,	// (0x000b609a) cell_dia3_key_num_pane_t3

0x90e0,	// (0x000b60a9) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x000bcec8) cell_dia3_key_num_pane_t

0x9646,	// (0x000b660f) bg_button_pane_cp19

0x90ef,	// (0x000b60b8) cell_dia3_key0_fun_pane_g1

0x9646,	// (0x000b660f) bg_button_pane_cp20

0x90ef,	// (0x000b60b8) cell_dia3_key1_fun_pane_g1

0x90f7,	// (0x000b60c0) area_left_week_number_pane

0x9105,	// (0x000b60ce) area_top_day_name_pane

0x9118,	// (0x000b60e1) frame_month_view_pane

0xef31,	// (0x000bbefa) grid_month_view_pane

0x912d,	// (0x000b60f6) cell_top_day_name_pane_ParamLimits

0x912d,	// (0x000b60f6) cell_top_day_name_pane

0x915c,	// (0x000b6125) cell_area_left_week_number_pane_ParamLimits

0x915c,	// (0x000b6125) cell_area_left_week_number_pane

0x9172,	// (0x000b613b) cell_month_view_pane_ParamLimits

0x9172,	// (0x000b613b) cell_month_view_pane

0xef3f,	// (0x000bbf08) frm_month_g1

0x91a3,	// (0x000b616c) frm_month_g2

0x91b6,	// (0x000b617f) frm_month_g3

0x91c9,	// (0x000b6192) frm_month_g4

0x91dc,	// (0x000b61a5) frm_month_g5

0x91ef,	// (0x000b61b8) frm_month_g6

0x9204,	// (0x000b61cd) frm_month_g7

0xef4c,	// (0x000bbf15) frm_month_g8

0x9219,	// (0x000b61e2) frm_month_g9

0x9229,	// (0x000b61f2) frm_month_g10

0x9239,	// (0x000b6202) frm_month_g11

0x9249,	// (0x000b6212) frm_month_g12

0x925b,	// (0x000b6224) frm_month_g13

0x926f,	// (0x000b6238) frm_month_g14

0x9283,	// (0x000b624c) frm_month_g15

0x9297,	// (0x000b6260) frm_month_g16

0x000f,

0xff08,	// (0x000bced1) frm_month_g

0xef59,	// (0x000bbf22) cell_top_day_name_pane_t1

0x92ab,	// (0x000b6274) cell_area_left_week_number_pane_g1

0x92b7,	// (0x000b6280) cell_area_left_week_number_pane_t1

0xd0ac,	// (0x000ba075) cell_month_view_pane_g1

0x92ca,	// (0x000b6293) cell_month_view_pane_t1

0x9646,	// (0x000b660f) main_fps_pane

0xe77e,	// (0x000bb747) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe77e,	// (0x000bb747) cmail_ddmenu_btn02_pane_cp1

0xe79a,	// (0x000bb763) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe79a,	// (0x000bb763) cmail_ddmenu_btn02_pane_cp2

0x8921,	// (0x000b58ea) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8921,	// (0x000b58ea) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x000bcdf6) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x000bcdf6) cmail_ddmenu_btn02_pane_g

0x893f,	// (0x000b5908) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x893f,	// (0x000b5908) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x000bcdfb) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x000bcdfb) cmail_ddmenu_btn02_pane_t

0x92dd,	// (0x000b62a6) fps_text_pane_ParamLimits

0x92dd,	// (0x000b62a6) fps_text_pane

0x92f4,	// (0x000b62bd) main_fps_pane_g1_ParamLimits

0x92f4,	// (0x000b62bd) main_fps_pane_g1

0x930c,	// (0x000b62d5) wait_bar_pane_cp010_ParamLimits

0x930c,	// (0x000b62d5) wait_bar_pane_cp010

0x931f,	// (0x000b62e8) fps_text_pane_t1_ParamLimits

0x931f,	// (0x000b62e8) fps_text_pane_t1

0xe1e6,	// (0x000bb1af) cam4_image_uncrop_pane_g1

0xe1ef,	// (0x000bb1b8) cam4_image_uncrop_pane_g2

0x5963,	// (0x000b292c) cam4_image_uncrop_pane_g3

0x596c,	// (0x000b2935) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x000bc8b7) cam4_image_uncrop_pane_g

0x90a2,	// (0x000b606b) dia3_listrow_pane_ParamLimits

0x9646,	// (0x000b660f) main_phob2_pane

0x8464,	// (0x000b542d) cell_tport_appsw_pane_cp02_ParamLimits

0x8464,	// (0x000b542d) cell_tport_appsw_pane_cp02

0x8478,	// (0x000b5441) cell_tport_appsw_pane_cp03_ParamLimits

0x8478,	// (0x000b5441) cell_tport_appsw_pane_cp03

0x9646,	// (0x000b660f) phob2_contact_card_pane

0x9646,	// (0x000b660f) phob2_listscroll_pane

0xef6c,	// (0x000bbf35) phob2_list_pane

0xef74,	// (0x000bbf3d) scroll_pane_cp034

0x9337,	// (0x000b6300) phob2_cc_data_pane_ParamLimits

0x9337,	// (0x000b6300) phob2_cc_data_pane

0x9350,	// (0x000b6319) phob2_cc_listscroll_pane_ParamLimits

0x9350,	// (0x000b6319) phob2_cc_listscroll_pane

0x8e3f,	// (0x000b5e08) list_double_large_graphic_phob2_pane_ParamLimits

0x8e3f,	// (0x000b5e08) list_double_large_graphic_phob2_pane

0x9372,	// (0x000b633b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9372,	// (0x000b633b) list_double_large_graphic_phob2_pane_g1

0x9388,	// (0x000b6351) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9388,	// (0x000b6351) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x000bcef2) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x000bcef2) list_double_large_graphic_phob2_pane_g

0x9394,	// (0x000b635d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9394,	// (0x000b635d) list_double_large_graphic_phob2_pane_t1

0x93a9,	// (0x000b6372) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x93a9,	// (0x000b6372) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x000bcef7) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x000bcef7) list_double_large_graphic_phob2_pane_t

0x9646,	// (0x000b660f) list_highlight_pane_cp024

0x93bb,	// (0x000b6384) phob2_cc_button_pane

0x93c5,	// (0x000b638e) phob2_cc_data_pane_g1_ParamLimits

0x93c5,	// (0x000b638e) phob2_cc_data_pane_g1

0x93dd,	// (0x000b63a6) phob2_cc_data_pane_g2_ParamLimits

0x93dd,	// (0x000b63a6) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x000bcefc) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x000bcefc) phob2_cc_data_pane_g

0x93ed,	// (0x000b63b6) phob2_cc_data_pane_t1_ParamLimits

0x93ed,	// (0x000b63b6) phob2_cc_data_pane_t1

0x940f,	// (0x000b63d8) phob2_cc_data_pane_t2_ParamLimits

0x940f,	// (0x000b63d8) phob2_cc_data_pane_t2

0x9431,	// (0x000b63fa) phob2_cc_data_pane_t3_ParamLimits

0x9431,	// (0x000b63fa) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x000bcf01) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x000bcf01) phob2_cc_data_pane_t

0xef7c,	// (0x000bbf45) phob2_cc_list_pane_ParamLimits

0xef7c,	// (0x000bbf45) phob2_cc_list_pane

0xdafd,	// (0x000baac6) scroll_pane_cp035_ParamLimits

0xdafd,	// (0x000baac6) scroll_pane_cp035

0xbb84,	// (0x000b8b4d) bg_button_pane_cp033

0xef88,	// (0x000bbf51) phob2_cc_button_pane_g1

0xef94,	// (0x000bbf5d) phob2_cc_button_pane_t1

0xefa9,	// (0x000bbf72) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x000bcf08) phob2_cc_button_pane_t

0x9453,	// (0x000b641c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9453,	// (0x000b641c) list_double_large_graphic_phob2_cc_pane

0x9491,	// (0x000b645a) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9491,	// (0x000b645a) list_double_large_graphic_phob2_cc_pane_g1

0x949d,	// (0x000b6466) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x949d,	// (0x000b6466) list_double_large_graphic_phob2_cc_pane_g2

0x94a9,	// (0x000b6472) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x94a9,	// (0x000b6472) list_double_large_graphic_phob2_cc_pane_g3

0x94b5,	// (0x000b647e) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x94b5,	// (0x000b647e) list_double_large_graphic_phob2_cc_pane_g4

0x94c1,	// (0x000b648a) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x94c1,	// (0x000b648a) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x000bcf0d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x000bcf0d) list_double_large_graphic_phob2_cc_pane_g

0x94cd,	// (0x000b6496) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x94cd,	// (0x000b6496) list_double_large_graphic_phob2_cc_pane_t1

0x94f6,	// (0x000b64bf) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x94f6,	// (0x000b64bf) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x000bcf18) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x000bcf18) list_double_large_graphic_phob2_cc_pane_t

0xefbb,	// (0x000bbf84) list_highlight_pane_cp025_ParamLimits

0xefbb,	// (0x000bbf84) list_highlight_pane_cp025

0xbb84,	// (0x000b8b4d) bg_button_pane_cp033_ParamLimits

0xef88,	// (0x000bbf51) phob2_cc_button_pane_g1_ParamLimits

0xef94,	// (0x000bbf5d) phob2_cc_button_pane_t1_ParamLimits

0xefa9,	// (0x000bbf72) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x000bcf08) phob2_cc_button_pane_t_ParamLimits

0xff3d,	// (0x000acf06) popup_wgtman_window

0xd940,	// (0x000ba909) scroll_pane_cp038

0x8db8,	// (0x000b5d81) wgtman_btn_pane_cp_01_ParamLimits

0x8db8,	// (0x000b5d81) wgtman_btn_pane_cp_01

0xefc9,	// (0x000bbf92) wgtman_content_pane

0xefd2,	// (0x000bbf9b) wgtman_heading_pane

0x9646,	// (0x000b660f) bg_heading_pane_cp02

0xefdb,	// (0x000bbfa4) wgtman_heading_pane_g1

0xefe3,	// (0x000bbfac) wgtman_heading_pane_t1

0xeff1,	// (0x000bbfba) scroll_pane_cp036

0xeff9,	// (0x000bbfc2) wgtman_list_pane

0xe63b,	// (0x000bb604) wgtman_list_pane_t1_ParamLimits

0xe63b,	// (0x000bb604) wgtman_list_pane_t1

0xa39f,	// (0x000b7368) cam4_grid_pane

0x66ae,	// (0x000b3677) bg_button_pane_cp015_ParamLimits

0x66c2,	// (0x000b368b) bg_button_pane_cp016_ParamLimits

0x66d5,	// (0x000b369e) bg_button_pane_cp017_ParamLimits

0x672d,	// (0x000b36f6) popup_vitu2_query_window_g3_ParamLimits

0x672d,	// (0x000b36f6) popup_vitu2_query_window_g3

0x67ea,	// (0x000b37b3) popup_vitu2_query_window_t6_ParamLimits

0x67ea,	// (0x000b37b3) popup_vitu2_query_window_t6

0x6815,	// (0x000b37de) popup_vitu2_query_window_t7_ParamLimits

0x6815,	// (0x000b37de) popup_vitu2_query_window_t7

0xe1e6,	// (0x000bb1af) cam4_grid_pane_g1

0xe1ef,	// (0x000bb1b8) cam4_grid_pane_g2

0xf001,	// (0x000bbfca) cam4_grid_pane_g3

0xf00a,	// (0x000bbfd3) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x000bcf1d) cam4_grid_pane_g

0x0efe,	// (0x000adec7) aid_placing_vt_slider_lsc_ParamLimits

0x11eb,	// (0x000ae1b4) vidtel_button_pane_ParamLimits

0x11eb,	// (0x000ae1b4) vidtel_button_pane

0x9646,	// (0x000b660f) bg_button_pane_cp034

0xf015,	// (0x000bbfde) vidtel_button_pane_g1

0xf01d,	// (0x000bbfe6) vidtel_button_pane_t1

0xda44,	// (0x000baa0d) aid_size_vtel_slider_touch

0xdafd,	// (0x000baac6) scroll_pane_cp039

0x760f,	// (0x000b45d8) ncim_query_button_pane_cp01_ParamLimits

0x762e,	// (0x000b45f7) ncimui_query_pane_g1_ParamLimits

0xbb84,	// (0x000b8b4d) input_focus_pane_cp012_ParamLimits

0xe365,	// (0x000bb32e) ncim_query_entry_pane_t1_ParamLimits

0xdafd,	// (0x000baac6) scroll_pane_cp039_ParamLimits

0xb402,	// (0x000b83cb) navi_pane_bcale_mc_g1

0xb40a,	// (0x000b83d3) navi_pane_bcale_mc_t1

0xe7e5,	// (0x000bb7ae) main_sp_fs_email_pane_g1

0xe7f1,	// (0x000bb7ba) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x000bccae) main_sp_fs_email_pane_g

0xea81,	// (0x000bba4a) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea81,	// (0x000bba4a) list_single_cale_mrui_row_pane_g3

0x895f,	// (0x000b5928) list_single_recal_day_pane_g5_event_pane

0xbbd6,	// (0x000b8b9f) list_single_recal_day_pane_g7

0xf033,	// (0x000bbffc) list_recal_day_event_pane_cp01

0xf03c,	// (0x000bc005) list_recal_vselct_arw_lo_pane_cp01

0xf044,	// (0x000bc00d) list_recal_vselct_arw_up_pane_cp01

0xf04c,	// (0x000bc015) list_recal_vselct_pane_cp01

0xda66,	// (0x000baa2f) list_recal_day_event_pane_cp01_g1

0xbc25,	// (0x000b8bee) list_recal_day_event_pane_cp01_t1

0xbbde,	// (0x000b8ba7) list_single_recal_day_pane_t1_ParamLimits

0xbbf0,	// (0x000b8bb9) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x000bce0b) list_single_recal_day_pane_t_ParamLimits

0x9d01,	// (0x000b6cca) bg_notes_pane_ParamLimits

0xa938,	// (0x000b7901) list_notes_pane_ParamLimits

0x025f,	// (0x000ad228) scroll_pane_cp06_ParamLimits

0xa95a,	// (0x000b7923) main_notes_pane_ParamLimits

0x9646,	// (0x000b660f) main_welc_pane

0x951f,	// (0x000b64e8) main_welc_body_pane_ParamLimits

0x951f,	// (0x000b64e8) main_welc_body_pane

0x953e,	// (0x000b6507) main_welc_opti_pane_ParamLimits

0x953e,	// (0x000b6507) main_welc_opti_pane

0x9587,	// (0x000b6550) main_welc_pane_t1_ParamLimits

0x9587,	// (0x000b6550) main_welc_pane_t1

0xf056,	// (0x000bc01f) main_welc_body_row_pane_ParamLimits

0xf056,	// (0x000bc01f) main_welc_body_row_pane

0xe1d8,	// (0x000bb1a1) main_welc_opti_row_pane_ParamLimits

0xe1d8,	// (0x000bb1a1) main_welc_opti_row_pane

0xf06d,	// (0x000bc036) main_welc_opti_row_pane_g1

0x95a9,	// (0x000b6572) main_welc_opti_row_pane_t1

0xf075,	// (0x000bc03e) main_welc_body_row_pane_t1

0xedd0,	// (0x000bbd99) popup_notif_wgt_heading_pane

0xedea,	// (0x000bbdb3) aid_size_list_notif_wgt_del_ParamLimits

0xedf7,	// (0x000bbdc0) list_notif_wgt_row_pane_g1_ParamLimits

0xee03,	// (0x000bbdcc) list_notif_wgt_row_pane_g2_ParamLimits

0xee12,	// (0x000bbddb) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x000bce72) list_notif_wgt_row_pane_g_ParamLimits

0xee1f,	// (0x000bbde8) list_notif_wgt_row_pane_t1_ParamLimits

0xee35,	// (0x000bbdfe) list_notif_wgt_row_pane_t2_ParamLimits

0xee47,	// (0x000bbe10) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x000bce79) list_notif_wgt_row_pane_t_ParamLimits

0x8e53,	// (0x000b5e1c) listrow_wgtman_pane_g1_ParamLimits

0x8e60,	// (0x000b5e29) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x000bcea2) listrow_wgtman_pane_g_ParamLimits

0x8e7e,	// (0x000b5e47) listrow_wgtman_pane_t1_ParamLimits

0x8e96,	// (0x000b5e5f) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x000bcea7) listrow_wgtman_pane_t_ParamLimits

0x8ebc,	// (0x000b5e85) wait_bar_pane_cp09_ParamLimits

0x9646,	// (0x000b660f) bg_popup_heading_pane_cp02

0xf084,	// (0x000bc04d) popup_notif_wgt_heading_pane_g1

0xf08c,	// (0x000bc055) popup_notif_wgt_heading_pane_t1

0x9646,	// (0x000b660f) main_vids_pane

0x9646,	// (0x000b660f) vids_listscroll_pane

0x95b8,	// (0x000b6581) scroll_pane_cp040

0x9646,	// (0x000b660f) vids_list_pane

0x95c3,	// (0x000b658c) vids_list_double_pane_ParamLimits

0x95c3,	// (0x000b658c) vids_list_double_pane

0x95d4,	// (0x000b659d) vids_list_double_pane_g1

0x95dd,	// (0x000b65a6) vids_list_double_pane_t1

0x95ed,	// (0x000b65b6) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x000bcf2b) vids_list_double_pane_t

0x9650,	// (0x000b6619) main_ncimui_pane_ParamLimits

0x7445,	// (0x000b440e) main_ncimui_pane_g1_ParamLimits

0x7451,	// (0x000b441a) main_ncimui_pane_g2_ParamLimits

0x7451,	// (0x000b441a) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x000bcbb3) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x000bcbb3) main_ncimui_pane_g

0x955d,	// (0x000b6526) main_welc_pane_g1_ParamLimits

0x955d,	// (0x000b6526) main_welc_pane_g1

0x9572,	// (0x000b653b) main_welc_pane_g2_ParamLimits

0x9572,	// (0x000b653b) main_welc_pane_g2

0x0001,

0xff5d,	// (0x000bcf26) main_welc_pane_g_ParamLimits

0xff5d,	// (0x000bcf26) main_welc_pane_g

0x9d01,	// (0x000b6cca) listscroll_mce_pane_ParamLimits

0xb559,	// (0x000b8522) wait_bar_pane_cp10

0xca1b,	// (0x000b99e4) main_cale_day_pane_ParamLimits

0xca1b,	// (0x000b99e4) main_cale_week_pane_ParamLimits

0x9d01,	// (0x000b6cca) main_messa_pane_ParamLimits

0x4bce,	// (0x000b1b97) main_clock2_btn_pane_ParamLimits

0x4bce,	// (0x000b1b97) main_clock2_btn_pane

0xd234,	// (0x000ba1fd) main_clock2_btn_pane_cp01_ParamLimits

0xd234,	// (0x000ba1fd) main_clock2_btn_pane_cp01

0xea52,	// (0x000bba1b) list_cale_mrui_pane_ParamLimits

0xee7d,	// (0x000bbe46) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x000bce80) main_cf0_pane_g

0x90f7,	// (0x000b60c0) area_left_week_number_pane_ParamLimits

0x9105,	// (0x000b60ce) area_top_day_name_pane_ParamLimits

0x9118,	// (0x000b60e1) frame_month_view_pane_ParamLimits

0xef31,	// (0x000bbefa) grid_month_view_pane_ParamLimits

0xef3f,	// (0x000bbf08) frm_month_g1_ParamLimits

0x91a3,	// (0x000b616c) frm_month_g2_ParamLimits

0x91b6,	// (0x000b617f) frm_month_g3_ParamLimits

0x91c9,	// (0x000b6192) frm_month_g4_ParamLimits

0x91dc,	// (0x000b61a5) frm_month_g5_ParamLimits

0x91ef,	// (0x000b61b8) frm_month_g6_ParamLimits

0x9204,	// (0x000b61cd) frm_month_g7_ParamLimits

0xef4c,	// (0x000bbf15) frm_month_g8_ParamLimits

0x9219,	// (0x000b61e2) frm_month_g9_ParamLimits

0x9229,	// (0x000b61f2) frm_month_g10_ParamLimits

0x9239,	// (0x000b6202) frm_month_g11_ParamLimits

0x9249,	// (0x000b6212) frm_month_g12_ParamLimits

0x925b,	// (0x000b6224) frm_month_g13_ParamLimits

0x926f,	// (0x000b6238) frm_month_g14_ParamLimits

0x9283,	// (0x000b624c) frm_month_g15_ParamLimits

0x9297,	// (0x000b6260) frm_month_g16_ParamLimits

0xff08,	// (0x000bced1) frm_month_g_ParamLimits

0xef59,	// (0x000bbf22) cell_top_day_name_pane_t1_ParamLimits

0x92ab,	// (0x000b6274) cell_area_left_week_number_pane_g1_ParamLimits

0x92b7,	// (0x000b6280) cell_area_left_week_number_pane_t1_ParamLimits

0xd0ac,	// (0x000ba075) cell_month_view_pane_g1_ParamLimits

0x92ca,	// (0x000b6293) cell_month_view_pane_t1_ParamLimits

0x9cf9,	// (0x000b6cc2) main_clock2_btn_pane_g1

0xf09a,	// (0x000bc063) main_clock2_btn_pane_t1

0xbb84,	// (0x000b8b4d) listscroll_cmail_pane_ParamLimits

0xe7e5,	// (0x000bb7ae) main_sp_fs_email_pane_g1_ParamLimits

0xe7f1,	// (0x000bb7ba) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x000bccae) main_sp_fs_email_pane_g_ParamLimits

0xeb5a,	// (0x000bbb23) list_recal_day_pane_ParamLimits

0xeb6b,	// (0x000bbb34) mian_recal_day_pane_t1

0x80d8,	// (0x000b50a1) list_single_dyc_row_text_pane_t4_ParamLimits

0x80d8,	// (0x000b50a1) list_single_dyc_row_text_pane_t4

0x8121,	// (0x000b50ea) list_single_dyc_row_text_pane_t5_ParamLimits

0x8121,	// (0x000b50ea) list_single_dyc_row_text_pane_t5

0xa6af,	// (0x000b7678) list_single_dyc_row_text_pane_t6_ParamLimits

0xa6af,	// (0x000b7678) list_single_dyc_row_text_pane_t6

0x1ff8,	// (0x000aefc1) aid_mgn_list_cale_time_pane

0x9650,	// (0x000b6619) main_gallery2_pane_ParamLimits

0xd248,	// (0x000ba211) main_clock2_pane_cp01_t1

0xd256,	// (0x000ba21f) main_clock2_pane_cp01_t3

0x0001,

0xf7c0,	// (0x000bc789) main_clock2_pane_cp01_t

0x067b,	// (0x000ad644) cale_week_scroll_pane_g16_ParamLimits

0x067b,	// (0x000ad644) cale_week_scroll_pane_g16

0xab0b,	// (0x000b7ad4) vorec_slider_pane

0xf01d,	// (0x000bbfe6) vidtel_button_pane_t1_ParamLimits

0x89c5,	// (0x000b598e) main_fs_bigclock_clock_pane_g1_ParamLimits

0x89c5,	// (0x000b598e) main_fs_bigclock_clock_pane_g2_ParamLimits

0x89d8,	// (0x000b59a1) main_fs_bigclock_clock_pane_g3_ParamLimits

0x89d8,	// (0x000b59a1) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe65,	// (0x000bce2e) main_fs_bigclock_clock_pane_g_ParamLimits

0x89ef,	// (0x000b59b8) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8a05,	// (0x000b59ce) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe6e,	// (0x000bce37) main_fs_bigclock_clock_pane_t_ParamLimits

0x4345,	// (0x000b130e) main_mup3_lyrics_pane_ParamLimits

0x4345,	// (0x000b130e) main_mup3_lyrics_pane

0x9623,	// (0x000b65ec) main_mup3_lyrics_pane_t1_ParamLimits

0x9623,	// (0x000b65ec) main_mup3_lyrics_pane_t1

0xa0f3,	// (0x000b70bc) aid_main_mp4_pane_t1_area

0xa0fd,	// (0x000b70c6) aid_main_mp4_pane_t2_area

0xa1a9,	// (0x000b7172) main_mp4_pane_g7_ParamLimits

0xa1a9,	// (0x000b7172) main_mp4_pane_g7

0xa1b5,	// (0x000b717e) main_mp4_pane_g8_ParamLimits

0xa1b5,	// (0x000b717e) main_mp4_pane_g8

0x5726,	// (0x000b26ef) aid_call6_pane_g1_size

0x9481,	// (0x000b644a) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9481,	// (0x000b644a) list_double_large_graphic_phob2_other_pane

0x963e,	// (0x000b6607) list_double_large_graphic_phob2_other_pane_g1

0x9646,	// (0x000b660f) list_highlight_pane_cp026
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Large
