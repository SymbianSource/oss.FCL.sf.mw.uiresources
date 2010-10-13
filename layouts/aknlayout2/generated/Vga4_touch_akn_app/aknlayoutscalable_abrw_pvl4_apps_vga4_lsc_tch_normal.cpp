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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0002bf9d };

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
0x155f,	// (0x0002d4fc) Screen

0x156b,	// (0x0002d508) application_window

0x1577,	// (0x0002d514) area_bottom_pane_ParamLimits

0x1577,	// (0x0002d514) area_bottom_pane

0x00c1,	// (0x0002c05e) area_top_pane_ParamLimits

0x00c1,	// (0x0002c05e) area_top_pane

0xb0d3,	// (0x00037070) call_video_uplink_pane_ParamLimits

0xb0d3,	// (0x00037070) call_video_uplink_pane

0x014f,	// (0x0002c0ec) main_pane_ParamLimits

0x014f,	// (0x0002c0ec) main_pane

0xde5c,	// (0x00039df9) context_pane

0x3fcf,	// (0x0002ff6c) navi_pane

0x4006,	// (0x0002ffa3) popup_cale_events_window_ParamLimits

0x4006,	// (0x0002ffa3) popup_cale_events_window

0xde6f,	// (0x00039e0c) popup_mup_playback_window

0x401e,	// (0x0002ffbb) signal_pane

0xc0a3,	// (0x00038040) main_browser_pane

0xc258,	// (0x000381f5) main_burst_pane

0x056f,	// (0x0002c50c) main_calc_pane

0xde50,	// (0x00039ded) main_cale_day_pane

0x0583,	// (0x0002c520) main_cale_month_pane

0xde50,	// (0x00039ded) main_cale_week_pane

0xc258,	// (0x000381f5) main_call_pane

0xb551,	// (0x000374ee) main_call_poc_pane

0xc258,	// (0x000381f5) main_camera_pane

0xc258,	// (0x000381f5) main_chi_dic_pane

0xca29,	// (0x000389c6) main_clock_pane

0xb551,	// (0x000374ee) main_fmradio_pane

0xc258,	// (0x000381f5) main_graph_messa_pane

0xb551,	// (0x000374ee) main_help_pane

0xc0a3,	// (0x00038040) main_im_pane

0xbf7e,	// (0x00037f1b) main_image_pane_ParamLimits

0xbf7e,	// (0x00037f1b) main_image_pane

0xb551,	// (0x000374ee) main_location2_pane

0xc258,	// (0x000381f5) main_location_pane

0xbf7e,	// (0x00037f1b) main_messa_pane

0xb551,	// (0x000374ee) main_mp2_pane

0xc258,	// (0x000381f5) main_mp_pane

0xb551,	// (0x000374ee) main_msg_pane

0xb551,	// (0x000374ee) main_mup_eq_pane

0xb551,	// (0x000374ee) main_mup_pane

0xc0a3,	// (0x00038040) main_notes_pane

0xb551,	// (0x000374ee) main_pec_pane

0xb551,	// (0x000374ee) main_phob_pane

0xb551,	// (0x000374ee) main_pinb_pane

0xb551,	// (0x000374ee) main_postcard_pane

0xb551,	// (0x000374ee) main_qdial_pane

0xc258,	// (0x000381f5) main_skin_pane

0xb551,	// (0x000374ee) main_smil2_pane

0xc258,	// (0x000381f5) main_smil_pane

0xc258,	// (0x000381f5) main_video_pane

0xc258,	// (0x000381f5) main_video_tele_pane

0xbf7e,	// (0x00037f1b) main_viewer_pane_ParamLimits

0xbf7e,	// (0x00037f1b) main_viewer_pane

0xc258,	// (0x000381f5) main_vorec_pane

0x05d5,	// (0x0002c572) popup_blid_sat_info_window_ParamLimits

0x05d5,	// (0x0002c572) popup_blid_sat_info_window

0x0639,	// (0x0002c5d6) popup_dyc_status_message_window_ParamLimits

0x0639,	// (0x0002c5d6) popup_dyc_status_message_window

0x0653,	// (0x0002c5f0) popup_grid_large_graphic_window_ParamLimits

0x0653,	// (0x0002c5f0) popup_grid_large_graphic_window

0x0715,	// (0x0002c6b2) popup_loc_request_window_ParamLimits

0x0715,	// (0x0002c6b2) popup_loc_request_window

0x083b,	// (0x0002c7d8) popup_wml_address_window_ParamLimits

0x083b,	// (0x0002c7d8) popup_wml_address_window

0x3e17,	// (0x0002fdb4) call_muted_g1

0x3af0,	// (0x0002fa8d) popup_call_audio_conf_window_ParamLimits

0x3af0,	// (0x0002fa8d) popup_call_audio_conf_window

0x3e27,	// (0x0002fdc4) popup_call_audio_first_window_ParamLimits

0x3e27,	// (0x0002fdc4) popup_call_audio_first_window

0x3e9d,	// (0x0002fe3a) popup_call_audio_in_window_ParamLimits

0x3e9d,	// (0x0002fe3a) popup_call_audio_in_window

0x3ed9,	// (0x0002fe76) popup_call_audio_out_window_ParamLimits

0x3ed9,	// (0x0002fe76) popup_call_audio_out_window

0x3f13,	// (0x0002feb0) popup_call_audio_second_window_ParamLimits

0x3f13,	// (0x0002feb0) popup_call_audio_second_window

0x3f69,	// (0x0002ff06) popup_call_audio_wait_window_ParamLimits

0x3f69,	// (0x0002ff06) popup_call_audio_wait_window

0x3f9e,	// (0x0002ff3b) popup_number_entry_window_ParamLimits

0x3f9e,	// (0x0002ff3b) popup_number_entry_window

0xb109,	// (0x000370a6) bg_popup_call_pane_cp05_ParamLimits

0xb109,	// (0x000370a6) bg_popup_call_pane_cp05

0xb129,	// (0x000370c6) popup_number_entry_window_t1

0xb13c,	// (0x000370d9) popup_number_entry_window_t2

0xb14e,	// (0x000370eb) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x0003afdd) popup_number_entry_window_t

0xb195,	// (0x00037132) text_title_cp2

0xb1a8,	// (0x00037145) bg_popup_call_pane_cp_ParamLimits

0xb1a8,	// (0x00037145) bg_popup_call_pane_cp

0xb1b6,	// (0x00037153) call_thumbnail_pane

0xb1be,	// (0x0003715b) popup_call_audio_in_window_g1_ParamLimits

0xb1be,	// (0x0003715b) popup_call_audio_in_window_g1

0xb1ca,	// (0x00037167) popup_call_audio_in_window_g2_ParamLimits

0xb1ca,	// (0x00037167) popup_call_audio_in_window_g2

0xb1d6,	// (0x00037173) popup_call_audio_in_window_g3_ParamLimits

0xb1d6,	// (0x00037173) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x0003afe6) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x0003afe6) popup_call_audio_in_window_g

0xb1e2,	// (0x0003717f) popup_call_audio_in_window_t1_ParamLimits

0xb1e2,	// (0x0003717f) popup_call_audio_in_window_t1

0xb1fe,	// (0x0003719b) popup_call_audio_in_window_t2_ParamLimits

0xb1fe,	// (0x0003719b) popup_call_audio_in_window_t2

0xb21a,	// (0x000371b7) popup_call_audio_in_window_t3_ParamLimits

0xb21a,	// (0x000371b7) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x0003afed) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x0003afed) popup_call_audio_in_window_t

0xb1a8,	// (0x00037145) bg_popup_call_pane_cp01_ParamLimits

0xb1a8,	// (0x00037145) bg_popup_call_pane_cp01

0xb1b6,	// (0x00037153) call_thumbnail_pane_cp02

0xb22d,	// (0x000371ca) call_type_pane_cp022

0xb235,	// (0x000371d2) popup_call_audio_out_window_g1_ParamLimits

0xb235,	// (0x000371d2) popup_call_audio_out_window_g1

0xb247,	// (0x000371e4) popup_call_audio_out_window_g2_ParamLimits

0xb247,	// (0x000371e4) popup_call_audio_out_window_g2

0xb253,	// (0x000371f0) popup_call_audio_out_window_g3_ParamLimits

0xb253,	// (0x000371f0) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x0003aff4) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x0003aff4) popup_call_audio_out_window_g

0xb265,	// (0x00037202) popup_call_audio_out_window_t1_ParamLimits

0xb265,	// (0x00037202) popup_call_audio_out_window_t1

0xb27d,	// (0x0003721a) popup_call_audio_out_window_t2_ParamLimits

0xb27d,	// (0x0003721a) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x0003affb) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x0003affb) popup_call_audio_out_window_t

0xb292,	// (0x0003722f) bg_popup_call_pane_ParamLimits

0xb292,	// (0x0003722f) bg_popup_call_pane

0x15bc,	// (0x0002d559) call_thumbnail_pane_cp_ParamLimits

0x15bc,	// (0x0002d559) call_thumbnail_pane_cp

0xb316,	// (0x000372b3) call_type_pane_cp01_ParamLimits

0xb316,	// (0x000372b3) call_type_pane_cp01

0xb35a,	// (0x000372f7) popup_call_audio_first_window_g1_ParamLimits

0xb35a,	// (0x000372f7) popup_call_audio_first_window_g1

0xb3a6,	// (0x00037343) popup_call_audio_first_window_g2_ParamLimits

0xb3a6,	// (0x00037343) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x0003b000) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x0003b000) popup_call_audio_first_window_g

0xb3ea,	// (0x00037387) popup_call_audio_first_window_t1_ParamLimits

0xb3ea,	// (0x00037387) popup_call_audio_first_window_t1

0xb496,	// (0x00037433) popup_call_audio_first_window_t4_ParamLimits

0xb496,	// (0x00037433) popup_call_audio_first_window_t4

0xb522,	// (0x000374bf) popup_call_audio_first_window_t5_ParamLimits

0xb522,	// (0x000374bf) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x0003b005) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x0003b005) popup_call_audio_first_window_t

0xb551,	// (0x000374ee) bg_popup_call_pane_cp02

0xb55b,	// (0x000374f8) call_type_pane_cp023

0xb563,	// (0x00037500) popup_call_audio_wait_window_g1

0xb56b,	// (0x00037508) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x0003b00c) popup_call_audio_wait_window_g

0xb573,	// (0x00037510) popup_call_audio_wait_window_t3

0xb581,	// (0x0003751e) bg_popup_call_pane_cp03_ParamLimits

0xb581,	// (0x0003751e) bg_popup_call_pane_cp03

0xb5e1,	// (0x0003757e) call_thumbnail_pane_cp011_ParamLimits

0xb5e1,	// (0x0003757e) call_thumbnail_pane_cp011

0xb5ed,	// (0x0003758a) call_type_pane_cp034_ParamLimits

0xb5ed,	// (0x0003758a) call_type_pane_cp034

0xb629,	// (0x000375c6) popup_call_audio_second_window_g1_ParamLimits

0xb629,	// (0x000375c6) popup_call_audio_second_window_g1

0xb665,	// (0x00037602) popup_call_audio_second_window_g2_ParamLimits

0xb665,	// (0x00037602) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x0003b011) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x0003b011) popup_call_audio_second_window_g

0xbe73,	// (0x00037e10) popup_call_audio_second_window_t1_ParamLimits

0xbe73,	// (0x00037e10) popup_call_audio_second_window_t1

0xbef4,	// (0x00037e91) popup_call_audio_second_window_t2_ParamLimits

0xbef4,	// (0x00037e91) popup_call_audio_second_window_t2

0xbf2a,	// (0x00037ec7) popup_call_audio_second_window_t3_ParamLimits

0xbf2a,	// (0x00037ec7) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x0003b016) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x0003b016) popup_call_audio_second_window_t

0xb551,	// (0x000374ee) bg_popup_call_pane_cp04

0xbf60,	// (0x00037efd) list_conf_pane

0xbf68,	// (0x00037f05) popup_call_audio_conf_window_t1

0xbf76,	// (0x00037f13) call_thumbnail_pane_g1

0xbf7e,	// (0x00037f1b) bg_pinb_pane_ParamLimits

0xbf7e,	// (0x00037f1b) bg_pinb_pane

0xbf8c,	// (0x00037f29) find_pinb_pane

0xbf7e,	// (0x00037f1b) listscroll_pinb_pane_ParamLimits

0xbf7e,	// (0x00037f1b) listscroll_pinb_pane

0xbf96,	// (0x00037f33) pinb_bg_pane_g1

0xbf96,	// (0x00037f33) pinb_bg_pane_g2

0xbf96,	// (0x00037f33) pinb_bg_pane_g3

0xbf96,	// (0x00037f33) pinb_bg_pane_g4

0xbf96,	// (0x00037f33) pinb_bg_pane_g5

0xbf96,	// (0x00037f33) pinb_bg_pane_g6

0xbf96,	// (0x00037f33) pinb_bg_pane_g7

0xbf96,	// (0x00037f33) pinb_bg_pane_g8

0xbf96,	// (0x00037f33) pinb_bg_pane_g9

0xbf96,	// (0x00037f33) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x0003b01d) pinb_bg_pane_g

0xb07c,	// (0x00037019) grid_pinb_pane

0xb07c,	// (0x00037019) list_pinb_pane

0xbfa0,	// (0x00037f3d) scroll_pane_cp01_ParamLimits

0xbfa0,	// (0x00037f3d) scroll_pane_cp01

0xbfae,	// (0x00037f4b) find_pinb_pane_g1_ParamLimits

0xbfae,	// (0x00037f4b) find_pinb_pane_g1

0xbfc6,	// (0x00037f63) find_pinb_pane_t1

0xbfd8,	// (0x00037f75) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x0003b037) find_pinb_pane_t

0xbfed,	// (0x00037f8a) input_focus_pane_cp01_ParamLimits

0xbfed,	// (0x00037f8a) input_focus_pane_cp01

0xbff9,	// (0x00037f96) cell_pinb_pane_ParamLimits

0xbff9,	// (0x00037f96) cell_pinb_pane

0xc007,	// (0x00037fa4) cell_pinb_pane_g1_ParamLimits

0xc007,	// (0x00037fa4) cell_pinb_pane_g1

0xc015,	// (0x00037fb2) cell_pinb_pane_g2_ParamLimits

0xc015,	// (0x00037fb2) cell_pinb_pane_g2

0xc015,	// (0x00037fb2) cell_pinb_pane_g3_ParamLimits

0xc015,	// (0x00037fb2) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x0003b03c) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x0003b03c) cell_pinb_pane_g

0xb551,	// (0x000374ee) grid_highlight_pane_cp01

0xbff9,	// (0x00037f96) list_pinb_item_pane_ParamLimits

0xbff9,	// (0x00037f96) list_pinb_item_pane

0xb07c,	// (0x00037019) list_highlight_pane_cp02

0xc023,	// (0x00037fc0) list_pinb_item_pane_g1_ParamLimits

0xc023,	// (0x00037fc0) list_pinb_item_pane_g1

0xc015,	// (0x00037fb2) list_pinb_item_pane_g2_ParamLimits

0xc015,	// (0x00037fb2) list_pinb_item_pane_g2

0xc007,	// (0x00037fa4) list_pinb_item_pane_g3_ParamLimits

0xc007,	// (0x00037fa4) list_pinb_item_pane_g3

0xc015,	// (0x00037fb2) list_pinb_item_pane_g4_ParamLimits

0xc015,	// (0x00037fb2) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x0003b043) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x0003b043) list_pinb_item_pane_g

0xc031,	// (0x00037fce) list_pinb_item_pane_t1_ParamLimits

0xc031,	// (0x00037fce) list_pinb_item_pane_t1

0x02e8,	// (0x0002c285) calc_display_pane

0x030d,	// (0x0002c2aa) calc_paper_pane

0x0330,	// (0x0002c2cd) grid_calc_pane

0xb07c,	// (0x00037019) bg_list_pane_cp01

0xc045,	// (0x00037fe2) clock_g1

0xc045,	// (0x00037fe2) clock_g2

0x0001,

0xf0af,	// (0x0003b04c) clock_g

0xc04f,	// (0x00037fec) clock_t1_ParamLimits

0xc04f,	// (0x00037fec) clock_t1

0xc063,	// (0x00038000) clock_t2_ParamLimits

0xc063,	// (0x00038000) clock_t2

0xc063,	// (0x00038000) clock_t3_ParamLimits

0xc063,	// (0x00038000) clock_t3

0xc063,	// (0x00038000) clock_t4_ParamLimits

0xc063,	// (0x00038000) clock_t4

0xc04f,	// (0x00037fec) clock_t5_ParamLimits

0xc04f,	// (0x00037fec) clock_t5

0xc063,	// (0x00038000) clock_t6_ParamLimits

0xc063,	// (0x00038000) clock_t6

0xc063,	// (0x00038000) clock_t7_ParamLimits

0xc063,	// (0x00038000) clock_t7

0xc063,	// (0x00038000) clock_t8_ParamLimits

0xc063,	// (0x00038000) clock_t8

0xc063,	// (0x00038000) clock_t9_ParamLimits

0xc063,	// (0x00038000) clock_t9

0x0008,

0xf0b4,	// (0x0003b051) clock_t_ParamLimits

0xf0b4,	// (0x0003b051) clock_t

0xb07c,	// (0x00037019) popup_clock_analogue_window_cp02

0xb07c,	// (0x00037019) popup_clock_digital_window_cp01

0xb551,	// (0x000374ee) listscroll_help_pane

0xb551,	// (0x000374ee) phob_pre_status_pane

0xc077,	// (0x00038014) grid_qdial_pane

0xbf7e,	// (0x00037f1b) listscroll_mce_pane

0xbf7e,	// (0x00037f1b) bg_notes_pane

0xc081,	// (0x0003801e) list_notes_pane

0x15e0,	// (0x0002d57d) scroll_pane_cp06

0xc08f,	// (0x0003802c) bg_calc_paper_pane

0xb6a9,	// (0x00037646) list_calc_pane

0xc0a3,	// (0x00038040) bg_calc_display_pane

0x035e,	// (0x0002c2fb) calc_display_pane_t1

0x0373,	// (0x0002c310) calc_display_pane_t2

0xb6c3,	// (0x00037660) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x0003b064) calc_display_pane_t

0x0388,	// (0x0002c325) cell_calc_pane_ParamLimits

0x0388,	// (0x0002c325) cell_calc_pane

0xc0af,	// (0x0003804c) bg_calc_paper_pane_g1

0xc0bb,	// (0x00038058) bg_calc_paper_pane_g2

0xc0c7,	// (0x00038064) bg_calc_paper_pane_g3

0xc0d3,	// (0x00038070) bg_calc_paper_pane_g4

0xc0df,	// (0x0003807c) bg_calc_paper_pane_g5

0x15f4,	// (0x0002d591) bg_calc_paper_pane_g6

0x1607,	// (0x0002d5a4) bg_calc_paper_pane_g7

0x161a,	// (0x0002d5b7) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x0003b06b) bg_calc_paper_pane_g

0x162d,	// (0x0002d5ca) calc_bg_paper_pane_g9

0x1640,	// (0x0002d5dd) list_calc_item_pane_ParamLimits

0x1640,	// (0x0002d5dd) list_calc_item_pane

0xc0eb,	// (0x00038088) list_calc_item_pane_g1

0xb6d5,	// (0x00037672) list_calc_item_pane_t1_ParamLimits

0xb6d5,	// (0x00037672) list_calc_item_pane_t1

0x03c3,	// (0x0002c360) list_calc_item_pane_t2_ParamLimits

0x03c3,	// (0x0002c360) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x0003b07c) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x0003b07c) list_calc_item_pane_t

0xbf96,	// (0x00037f33) cell_calc_pane_g1

0xc0f8,	// (0x00038095) grid_highlight_pane_cp02

0x1658,	// (0x0002d5f5) bg_calc_display_pane_g1

0x03f5,	// (0x0002c392) bg_calc_display_pane_g2

0xc11a,	// (0x000380b7) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x0003b086) bg_calc_display_pane_g

0x03ff,	// (0x0002c39c) cell_qdial_pane_ParamLimits

0x03ff,	// (0x0002c39c) cell_qdial_pane

0x1661,	// (0x0002d5fe) cell_qdial_pane_g1_ParamLimits

0x1661,	// (0x0002d5fe) cell_qdial_pane_g1

0x1677,	// (0x0002d614) cell_qdial_pane_g2_ParamLimits

0x1677,	// (0x0002d614) cell_qdial_pane_g2

0xc123,	// (0x000380c0) cell_qdial_pane_g3_ParamLimits

0xc123,	// (0x000380c0) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x0003b08d) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x0003b08d) cell_qdial_pane_g

0x169e,	// (0x0002d63b) cell_qdial_pane_t1_ParamLimits

0x169e,	// (0x0002d63b) cell_qdial_pane_t1

0x16b6,	// (0x0002d653) cell_qdial_pane_t2_ParamLimits

0x16b6,	// (0x0002d653) cell_qdial_pane_t2

0x16c9,	// (0x0002d666) cell_qdial_pane_t3_ParamLimits

0x16c9,	// (0x0002d666) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x0003b096) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x0003b096) cell_qdial_pane_t

0xb551,	// (0x000374ee) grid_highlight_pane_cp04

0xc12f,	// (0x000380cc) thumbnail_qdial_pane_ParamLimits

0xc12f,	// (0x000380cc) thumbnail_qdial_pane

0xc18b,	// (0x00038128) list_help_pane

0xc194,	// (0x00038131) scroll_pane_cp02

0x16dc,	// (0x0002d679) help_list_pane_t1_ParamLimits

0x16dc,	// (0x0002d679) help_list_pane_t1

0xb6e7,	// (0x00037684) bg_notes_pane_g2

0xb6ef,	// (0x0003768c) bg_notes_pane_g3

0xb6f7,	// (0x00037694) notes_bg_pane_g1

0xb6ff,	// (0x0003769c) notes_bg_pane_g4

0xb707,	// (0x000376a4) notes_bg_pane_g5

0xb70f,	// (0x000376ac) notes_bg_pane_g6

0xb717,	// (0x000376b4) notes_bg_pane_g7

0xb71f,	// (0x000376bc) notes_bg_pane_g8

0xb727,	// (0x000376c4) notes_bg_pane_g9

0x0006,

0xf117,	// (0x0003b0b4) notes_bg_pane_g

0x1700,	// (0x0002d69d) list_notes_text_pane_ParamLimits

0x1700,	// (0x0002d69d) list_notes_text_pane

0xc19d,	// (0x0003813a) list_notes_text_pane_g1

0xc1a6,	// (0x00038143) list_notes_text_pane_t1

0x1717,	// (0x0002d6b4) listscroll_cale_week_pane

0x1741,	// (0x0002d6de) bg_cale_heading_pane

0x1765,	// (0x0002d702) bg_cale_pane_cp01

0x1782,	// (0x0002d71f) cale_week_corner_pane

0x17a1,	// (0x0002d73e) cale_week_day_heading_pane

0x17ca,	// (0x0002d767) cale_week_scroll_pane_g1

0x17e9,	// (0x0002d786) cale_week_scroll_pane_g2

0x1801,	// (0x0002d79e) cale_week_scroll_pane_g3

0x1819,	// (0x0002d7b6) cale_week_scroll_pane_g4

0x1831,	// (0x0002d7ce) cale_week_scroll_pane_g5

0x1851,	// (0x0002d7ee) cale_week_scroll_pane_g6

0x1871,	// (0x0002d80e) cale_week_scroll_pane_g7

0x1895,	// (0x0002d832) cale_week_scroll_pane_g8

0x18b9,	// (0x0002d856) cale_week_scroll_pane_g9

0x18d1,	// (0x0002d86e) cale_week_scroll_pane_g10

0x18e9,	// (0x0002d886) cale_week_scroll_pane_g11

0x1901,	// (0x0002d89e) cale_week_scroll_pane_g12

0x1925,	// (0x0002d8c2) cale_week_scroll_pane_g13

0x1925,	// (0x0002d8c2) cale_week_scroll_pane_g14

0x1925,	// (0x0002d8c2) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x0003b0c3) cale_week_scroll_pane_g

0x196d,	// (0x0002d90a) cale_week_time_pane

0x1991,	// (0x0002d92e) grid_cale_week_pane

0xc1e0,	// (0x0003817d) scroll_pane_cp08

0x19c3,	// (0x0002d960) cell_cale_week_pane_ParamLimits

0x19c3,	// (0x0002d960) cell_cale_week_pane

0x1a5f,	// (0x0002d9fc) cale_week_day_heading_pane_t1

0x1a89,	// (0x0002da26) cale_week_day_heading_pane_t2

0x1ab8,	// (0x0002da55) cale_week_day_heading_pane_t3

0x1ae7,	// (0x0002da84) cale_week_day_heading_pane_t4

0x1b16,	// (0x0002dab3) cale_week_day_heading_pane_t5

0x1b49,	// (0x0002dae6) cale_week_day_heading_pane_t6

0x1b80,	// (0x0002db1d) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x0003b0e4) cale_week_day_heading_pane_t

0xc1fd,	// (0x0003819a) bg_cale_side_pane

0x0413,	// (0x0002c3b0) cale_week_time_pane_t1

0x042d,	// (0x0002c3ca) cale_week_time_pane_t2

0x0447,	// (0x0002c3e4) cale_week_time_pane_t3

0x0461,	// (0x0002c3fe) cale_week_time_pane_t4

0x047b,	// (0x0002c418) cale_week_time_pane_t5

0x0495,	// (0x0002c432) cale_week_time_pane_t6

0x04b5,	// (0x0002c452) cale_week_time_pane_t7

0x04db,	// (0x0002c478) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x0003b0f3) cale_week_time_pane_t

0x1baa,	// (0x0002db47) cell_cale_week_pane_g2

0x1bce,	// (0x0002db6b) cell_cale_week_pane_g3_ParamLimits

0x1bce,	// (0x0002db6b) cell_cale_week_pane_g3

0xc20b,	// (0x000381a8) grid_highlight_pane_cp07

0xc213,	// (0x000381b0) listscroll_gms_pane

0xc21d,	// (0x000381ba) grid_gms_pane

0xc226,	// (0x000381c3) listscroll_gms_pane_g1

0xc22e,	// (0x000381cb) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x0003b104) listscroll_gms_pane_g

0x1be6,	// (0x0002db83) scroll_pane_cp010

0x1bf1,	// (0x0002db8e) cell_gms_pane_ParamLimits

0x1bf1,	// (0x0002db8e) cell_gms_pane

0x1c08,	// (0x0002dba5) cell_gms_pane_g1

0xc236,	// (0x000381d3) cell_gms_pane_g2

0xc23e,	// (0x000381db) cell_gms_pane_g3

0xc247,	// (0x000381e4) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x0003b109) cell_gms_pane_g

0xc250,	// (0x000381ed) grid_highlight_pane_cp09

0x3d9b,	// (0x0002fd38) phob_pre_status_pane_g1

0x3da3,	// (0x0002fd40) phob_pre_status_pane_g2

0x3dab,	// (0x0002fd48) phob_pre_status_pane_g3

0x3db3,	// (0x0002fd50) phob_pre_status_pane_g4

0x0004,

0xf51b,	// (0x0003b4b8) phob_pre_status_pane_g

0x3dc3,	// (0x0002fd60) phob_pre_status_pane_t1

0x3dd3,	// (0x0002fd70) phob_pre_status_pane_t2

0x3de3,	// (0x0002fd80) phob_pre_status_pane_t3

0x0002,

0xf526,	// (0x0003b4c3) phob_pre_status_pane_t

0xc258,	// (0x000381f5) bg_list_pane_cp05

0x1c18,	// (0x0002dbb5) grid_vorec_pane

0x1c22,	// (0x0002dbbf) vorec_t1

0x1c30,	// (0x0002dbcd) vorec_t2

0x1c3e,	// (0x0002dbdb) vorec_t3

0x1c4c,	// (0x0002dbe9) vorec_t4

0xbe65,	// (0x00037e02) vorec_t5

0x1547,	// (0x0002d4e4) vorec_t6

0x0004,

0xf175,	// (0x0003b112) vorec_t

0x1555,	// (0x0002d4f2) wait_bar_pane_cp01

0x1c68,	// (0x0002dc05) cell_vorec_pane_ParamLimits

0x1c68,	// (0x0002dc05) cell_vorec_pane

0xb72f,	// (0x000376cc) cell_vorec_pane_g1

0xb551,	// (0x000374ee) grid_highlight_pane_cp05

0xbfa0,	// (0x00037f3d) cams_zoom_pane

0xbfa0,	// (0x00037f3d) image_vga_pane

0xc007,	// (0x00037fa4) main_camera_pane_g1

0xc007,	// (0x00037fa4) main_camera_pane_g2

0xc007,	// (0x00037fa4) main_camera_pane_g3

0xc007,	// (0x00037fa4) main_camera_pane_g4

0xc007,	// (0x00037fa4) main_camera_pane_g5

0xc007,	// (0x00037fa4) main_camera_pane_g6

0xc007,	// (0x00037fa4) main_camera_pane_g7

0x0007,

0xf180,	// (0x0003b11d) main_camera_pane_g

0xc04f,	// (0x00037fec) main_camera_pane_t1

0xc04f,	// (0x00037fec) main_camera_pane_t2

0x0001,

0xf191,	// (0x0003b12e) main_camera_pane_t

0x1c91,	// (0x0002dc2e) cams_zoom_pane_cp_ParamLimits

0x1c91,	// (0x0002dc2e) cams_zoom_pane_cp

0x1cc5,	// (0x0002dc62) image_cif_pane_ParamLimits

0x1cc5,	// (0x0002dc62) image_cif_pane

0xb07c,	// (0x00037019) image_subqcif_pane

0x1cd7,	// (0x0002dc74) main_video_pane_g1_ParamLimits

0x1cd7,	// (0x0002dc74) main_video_pane_g1

0x1d05,	// (0x0002dca2) main_video_pane_g2_ParamLimits

0x1d05,	// (0x0002dca2) main_video_pane_g2

0x1d3f,	// (0x0002dcdc) main_video_pane_g3_ParamLimits

0x1d3f,	// (0x0002dcdc) main_video_pane_g3

0x1d3f,	// (0x0002dcdc) main_video_pane_g4_ParamLimits

0x1d3f,	// (0x0002dcdc) main_video_pane_g4

0x1d73,	// (0x0002dd10) main_video_pane_g5_ParamLimits

0x1d73,	// (0x0002dd10) main_video_pane_g5

0xc260,	// (0x000381fd) main_video_pane_g6_ParamLimits

0xc260,	// (0x000381fd) main_video_pane_g6

0x0006,

0xf196,	// (0x0003b133) main_video_pane_g_ParamLimits

0xf196,	// (0x0003b133) main_video_pane_g

0x1d8f,	// (0x0002dd2c) main_video_pane_t1_ParamLimits

0x1d8f,	// (0x0002dd2c) main_video_pane_t1

0xc045,	// (0x00037fe2) cams_zoom_pane_g1

0xc045,	// (0x00037fe2) cams_zoom_pane_g2

0xc045,	// (0x00037fe2) cams_zoom_pane_g3

0xc045,	// (0x00037fe2) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x0003b142) cams_zoom_pane_g

0xbfa0,	// (0x00037f3d) grid_cams_pane

0xbfa0,	// (0x00037f3d) linegrid_cams_pane

0x1dd3,	// (0x0002dd70) cell_cams_pane_ParamLimits

0x1dd3,	// (0x0002dd70) cell_cams_pane

0xb07c,	// (0x00037019) cams_burst_image_pane

0xc045,	// (0x00037fe2) cell_cams_pane_g1

0xb07c,	// (0x00037019) grid_highlight_pane_cp03

0xbf96,	// (0x00037f33) mp_bg_pane_g1

0xb07c,	// (0x00037019) bg_list_pane_cp03

0xb07c,	// (0x00037019) bg_mp_pane

0xb07c,	// (0x00037019) grid_mp_pane

0xc045,	// (0x00037fe2) media_player_g1

0xc7be,	// (0x0003875b) media_player_t1

0xc7be,	// (0x0003875b) media_player_t2

0xc7be,	// (0x0003875b) media_player_t3

0xc7be,	// (0x0003875b) media_player_t4

0xc7be,	// (0x0003875b) media_player_t5

0xc7be,	// (0x0003875b) media_player_t6

0xc7be,	// (0x0003875b) media_player_t7

0x0006,

0xf505,	// (0x0003b4a2) media_player_t

0xb07c,	// (0x00037019) wait_bar_pane_cp02

0xf4ea,	// (0x0003b487) main_usb_pane_t

0xca29,	// (0x000389c6) cell_mp_pane

0xbf96,	// (0x00037f33) cell_mp_pane_g1

0xb551,	// (0x000374ee) grid_highlight_pane_cp06

0xc27a,	// (0x00038217) grid_skin_colour_pane

0xc282,	// (0x0003821f) list_highlight_pane_cp03

0x1de8,	// (0x0002dd85) skin_g1

0xc28a,	// (0x00038227) skin_t1

0xc299,	// (0x00038236) skin_t2

0x0001,

0xf1d3,	// (0x0003b170) skin_t

0x1df0,	// (0x0002dd8d) cell_skin_colour_pane_ParamLimits

0x1df0,	// (0x0002dd8d) cell_skin_colour_pane

0xc2a7,	// (0x00038244) cell_skin_colour_pane_g1

0x1e63,	// (0x0002de00) call_video_g1_ParamLimits

0x1e63,	// (0x0002de00) call_video_g1

0x1e7f,	// (0x0002de1c) call_video_g2_ParamLimits

0x1e7f,	// (0x0002de1c) call_video_g2

0x0001,

0xf1d8,	// (0x0003b175) call_video_g_ParamLimits

0xf1d8,	// (0x0003b175) call_video_g

0x1ec4,	// (0x0002de61) call_video_uplink_pane_cp1_ParamLimits

0x1ec4,	// (0x0002de61) call_video_uplink_pane_cp1

0xc2b9,	// (0x00038256) call_video_uplink_pane_cp2

0x1f65,	// (0x0002df02) video_down_crop_pane_ParamLimits

0x1f65,	// (0x0002df02) video_down_crop_pane

0x204e,	// (0x0002dfeb) video_down_pane_ParamLimits

0x204e,	// (0x0002dfeb) video_down_pane

0xc2c1,	// (0x0003825e) video_down_subqcif_pane_ParamLimits

0xc2c1,	// (0x0003825e) video_down_subqcif_pane

0xc2db,	// (0x00038278) video_down_subqcif_pane_cp_ParamLimits

0xc2db,	// (0x00038278) video_down_subqcif_pane_cp

0xc303,	// (0x000382a0) im_reading_pane_ParamLimits

0xc303,	// (0x000382a0) im_reading_pane

0x2159,	// (0x0002e0f6) im_writing_pane_ParamLimits

0x2159,	// (0x0002e0f6) im_writing_pane

0x2177,	// (0x0002e114) im_reading_pane_t1

0xc31d,	// (0x000382ba) list_im_pane

0xc32e,	// (0x000382cb) scroll_pane_cp07

0x21b6,	// (0x0002e153) im_writing_pane_t1_ParamLimits

0x21b6,	// (0x0002e153) im_writing_pane_t1

0xc347,	// (0x000382e4) im_writing_pane_t2_ParamLimits

0xc347,	// (0x000382e4) im_writing_pane_t2

0x0001,

0xf1e2,	// (0x0003b17f) im_writing_pane_t_ParamLimits

0xf1e2,	// (0x0003b17f) im_writing_pane_t

0xb551,	// (0x000374ee) input_focus_pane_cp04

0xb551,	// (0x000374ee) input_focus_pane_cp05

0x21cb,	// (0x0002e168) list_im_single_pane_ParamLimits

0x21cb,	// (0x0002e168) list_im_single_pane

0xc364,	// (0x00038301) list_single_im_pane_t1

0xc258,	// (0x000381f5) blid_accuracy_pane

0xc258,	// (0x000381f5) blid_compass_pane

0xde08,	// (0x00039da5) main_location_t1

0xde08,	// (0x00039da5) main_location_t2

0xde08,	// (0x00039da5) main_location_t3

0x0002,

0xf514,	// (0x0003b4b1) main_location_t

0xb551,	// (0x000374ee) aid_levels_location

0xbf96,	// (0x00037f33) blid_accuracy_pane_g1

0xbf96,	// (0x00037f33) blid_accuracy_pane_g2

0x0001,

0xf231,	// (0x0003b1ce) blid_accuracy_pane_g

0xc39e,	// (0x0003833b) wml_content_pane

0xc3dc,	// (0x00038379) wml_button_pane_ParamLimits

0xc3dc,	// (0x00038379) wml_button_pane

0x21e1,	// (0x0002e17e) wml_list_single_large_pane_ParamLimits

0x21e1,	// (0x0002e17e) wml_list_single_large_pane

0x21fa,	// (0x0002e197) wml_list_single_medium_pane_ParamLimits

0x21fa,	// (0x0002e197) wml_list_single_medium_pane

0x2214,	// (0x0002e1b1) wml_list_single_small_pane_ParamLimits

0x2214,	// (0x0002e1b1) wml_list_single_small_pane

0xc3f0,	// (0x0003838d) wml_selection_box_pane_ParamLimits

0xc3f0,	// (0x0003838d) wml_selection_box_pane

0xc403,	// (0x000383a0) wml_list_single_pane_t1

0xc412,	// (0x000383af) wml_list_single_medium_pane_t1

0xc421,	// (0x000383be) wml_list_single_large_pane_t1

0xc430,	// (0x000383cd) input_focus_pane_cp02_ParamLimits

0xc430,	// (0x000383cd) input_focus_pane_cp02

0xc443,	// (0x000383e0) wml_selection_box_pane_g1

0xc44c,	// (0x000383e9) wml_selection_box_pane_t1_ParamLimits

0xc44c,	// (0x000383e9) wml_selection_box_pane_t1

0xbf7e,	// (0x00037f1b) bg_wml_button_pane_ParamLimits

0xbf7e,	// (0x00037f1b) bg_wml_button_pane

0xc464,	// (0x00038401) wml_button_pane_g1

0xc46c,	// (0x00038409) wml_button_pane_t1

0xc464,	// (0x00038401) wml_button_bg_pane_g1

0xc47c,	// (0x00038419) wml_button_bg_pane_g2

0xc484,	// (0x00038421) wml_button_bg_pane_g3

0xc48c,	// (0x00038429) wml_button_bg_pane_g4

0xc494,	// (0x00038431) wml_button_bg_pane_g5

0xc49c,	// (0x00038439) wml_button_bg_pane_g6

0xc4a4,	// (0x00038441) wml_button_bg_pane_g7

0xc4ac,	// (0x00038449) wml_button_bg_pane_g8

0xc4b4,	// (0x00038451) wml_button_bg_pane_g9

0x0008,

0xf1e7,	// (0x0003b184) wml_button_bg_pane_g

0x2230,	// (0x0002e1cd) bg_list_pane_cp02

0xc4bc,	// (0x00038459) mce_header_pane_ParamLimits

0xc4bc,	// (0x00038459) mce_header_pane

0xc4d2,	// (0x0003846f) mce_icon_pane

0xc4d2,	// (0x0003846f) mce_image_pane

0xc4db,	// (0x00038478) mce_text_pane_ParamLimits

0xc4db,	// (0x00038478) mce_text_pane

0x223a,	// (0x0002e1d7) scroll_pane_cp03

0xc3d4,	// (0x00038371) scroll_pane_cp04

0xc4ee,	// (0x0003848b) scroll_pane_cp05_ParamLimits

0xc4ee,	// (0x0003848b) scroll_pane_cp05

0x2244,	// (0x0002e1e1) mce_header_field_pane_ParamLimits

0x2244,	// (0x0002e1e1) mce_header_field_pane

0x225d,	// (0x0002e1fa) mce_header_field_pane_2_ParamLimits

0x225d,	// (0x0002e1fa) mce_header_field_pane_2

0x2273,	// (0x0002e210) mce_header_field_pane_3

0x227b,	// (0x0002e218) list_single_mce_message_pane_ParamLimits

0x227b,	// (0x0002e218) list_single_mce_message_pane

0x2297,	// (0x0002e234) list_single_mce_smart_pane_ParamLimits

0x2297,	// (0x0002e234) list_single_mce_smart_pane

0xc4fa,	// (0x00038497) input_focus_pane_cp03

0xc503,	// (0x000384a0) list_header_data_pane

0x22be,	// (0x0002e25b) mce_header_field_pane_t1

0x22ce,	// (0x0002e26b) list_single_mce_header_pane_ParamLimits

0x22ce,	// (0x0002e26b) list_single_mce_header_pane

0xc50b,	// (0x000384a8) list_single_mce_header_pane_t1

0xc51a,	// (0x000384b7) list_single_mce_message_pane_g1

0xc522,	// (0x000384bf) list_single_mce_message_pane_t1

0x2308,	// (0x0002e2a5) bg_cale_heading_pane_cp01_ParamLimits

0x2308,	// (0x0002e2a5) bg_cale_heading_pane_cp01

0xc530,	// (0x000384cd) bg_cale_pane_cp02_ParamLimits

0xc530,	// (0x000384cd) bg_cale_pane_cp02

0x235a,	// (0x0002e2f7) cale_month_corner_pane

0x2379,	// (0x0002e316) cale_month_day_heading_pane_ParamLimits

0x2379,	// (0x0002e316) cale_month_day_heading_pane

0x23e3,	// (0x0002e380) cale_month_pane_g1_ParamLimits

0x23e3,	// (0x0002e380) cale_month_pane_g1

0x242a,	// (0x0002e3c7) cale_month_pane_g2_ParamLimits

0x242a,	// (0x0002e3c7) cale_month_pane_g2

0x2466,	// (0x0002e403) cale_month_pane_g3_ParamLimits

0x2466,	// (0x0002e403) cale_month_pane_g3

0x24ba,	// (0x0002e457) cale_month_pane_g4_ParamLimits

0x24ba,	// (0x0002e457) cale_month_pane_g4

0x250e,	// (0x0002e4ab) cale_month_pane_g5_ParamLimits

0x250e,	// (0x0002e4ab) cale_month_pane_g5

0x256a,	// (0x0002e507) cale_month_pane_g6_ParamLimits

0x256a,	// (0x0002e507) cale_month_pane_g6

0x25d2,	// (0x0002e56f) cale_month_pane_g7_ParamLimits

0x25d2,	// (0x0002e56f) cale_month_pane_g7

0x263e,	// (0x0002e5db) cale_month_pane_g8_ParamLimits

0x263e,	// (0x0002e5db) cale_month_pane_g8

0x26aa,	// (0x0002e647) cale_month_pane_g9_ParamLimits

0x26aa,	// (0x0002e647) cale_month_pane_g9

0x270e,	// (0x0002e6ab) cale_month_pane_g10_ParamLimits

0x270e,	// (0x0002e6ab) cale_month_pane_g10

0x2760,	// (0x0002e6fd) cale_month_pane_g11_ParamLimits

0x2760,	// (0x0002e6fd) cale_month_pane_g11

0x27b2,	// (0x0002e74f) cale_month_pane_g12_ParamLimits

0x27b2,	// (0x0002e74f) cale_month_pane_g12

0x280a,	// (0x0002e7a7) cale_month_pane_g13_ParamLimits

0x280a,	// (0x0002e7a7) cale_month_pane_g13

0x000c,

0xf1fa,	// (0x0003b197) cale_month_pane_g_ParamLimits

0xf1fa,	// (0x0003b197) cale_month_pane_g

0x2862,	// (0x0002e7ff) cale_month_week_pane

0x2886,	// (0x0002e823) grid_cale_month_pane_ParamLimits

0x2886,	// (0x0002e823) grid_cale_month_pane

0x28e7,	// (0x0002e884) cale_month_day_heading_pane_t1

0x296d,	// (0x0002e90a) cale_month_day_heading_pane_t2

0x29e6,	// (0x0002e983) cale_month_day_heading_pane_t3

0x2a5f,	// (0x0002e9fc) cale_month_day_heading_pane_t4

0x2ae0,	// (0x0002ea7d) cale_month_day_heading_pane_t5

0x2b69,	// (0x0002eb06) cale_month_day_heading_pane_t6

0x2bfa,	// (0x0002eb97) cale_month_day_heading_pane_t7

0x0006,

0xf215,	// (0x0003b1b2) cale_month_day_heading_pane_t

0xc1fd,	// (0x0003819a) bg_cale_side_pane_cp01

0x2c8b,	// (0x0002ec28) cale_month_week_pane_t1

0x2ca4,	// (0x0002ec41) cale_month_week_pane_t2

0x2cbd,	// (0x0002ec5a) cale_month_week_pane_t3

0x2cd6,	// (0x0002ec73) cale_month_week_pane_t4

0x2cef,	// (0x0002ec8c) cale_month_week_pane_t5

0x2d08,	// (0x0002eca5) cale_month_week_pane_t6

0x0005,

0xf224,	// (0x0003b1c1) cale_month_week_pane_t

0x2d2d,	// (0x0002ecca) cell_cale_month_pane_ParamLimits

0x2d2d,	// (0x0002ecca) cell_cale_month_pane

0xb739,	// (0x000376d6) cell_cale_month_pane_g1

0x0501,	// (0x0002c49e) cell_cale_month_pane_t1_ParamLimits

0x0501,	// (0x0002c49e) cell_cale_month_pane_t1

0xc20b,	// (0x000381a8) grid_highlight_pane_cp08

0xbf96,	// (0x00037f33) main_smil_g1

0x2e6b,	// (0x0002ee08) smil_status_pane

0xc56f,	// (0x0003850c) smil_text_pane

0xdd1e,	// (0x00039cbb) bg_popup_call3_rect_pane_g8

0xdd26,	// (0x00039cc3) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ad,	// (0x0003b44a) bg_popup_call3_rect_pane_g

0xded1,	// (0x00039e6e) smil_status_volume_pane_g1

0xc579,	// (0x00038516) smil_status_pane_t1

0xb88f,	// (0x0003782c) volume_smil_pane

0xc590,	// (0x0003852d) list_smil_text_pane

0x2e80,	// (0x0002ee1d) scroll_pane_cp011

0x2e8b,	// (0x0002ee28) smil_text_list_pane_t1_ParamLimits

0x2e8b,	// (0x0002ee28) smil_text_list_pane_t1

0xb745,	// (0x000376e2) aid_volume_smil_ParamLimits

0xb745,	// (0x000376e2) aid_volume_smil

0xbf96,	// (0x00037f33) smil_volume_pane_g1

0xbf96,	// (0x00037f33) smil_volume_pane_g2

0x0001,

0xf231,	// (0x0003b1ce) smil_volume_pane_g

0x1717,	// (0x0002d6b4) listscroll_cale_day_pane

0xc59a,	// (0x00038537) bg_cale_pane

0xc5b2,	// (0x0003854f) list_cale_pane

0xc5d5,	// (0x00038572) scroll_pane_cp09

0xc5e6,	// (0x00038583) cale_bg_pane_g1

0xc5ee,	// (0x0003858b) cale_bg_pane_g2

0xc5f6,	// (0x00038593) cale_bg_pane_g3

0xc5fe,	// (0x0003859b) cale_bg_pane_g4

0xc606,	// (0x000385a3) cale_bg_pane_g5

0xc60e,	// (0x000385ab) cale_bg_pane_g6

0xc616,	// (0x000385b3) cale_bg_pane_g7

0xc61e,	// (0x000385bb) cale_bg_pane_g8

0xc626,	// (0x000385c3) cale_bg_pane_g9

0x0008,

0xf236,	// (0x0003b1d3) cale_bg_pane_g

0xc62e,	// (0x000385cb) list_cale_time_pane_ParamLimits

0xc62e,	// (0x000385cb) list_cale_time_pane

0xc645,	// (0x000385e2) list_cale_time_pane_g1_ParamLimits

0xc645,	// (0x000385e2) list_cale_time_pane_g1

0xc651,	// (0x000385ee) list_cale_time_pane_g2_ParamLimits

0xc651,	// (0x000385ee) list_cale_time_pane_g2

0x2edf,	// (0x0002ee7c) list_cale_time_pane_g3_ParamLimits

0x2edf,	// (0x0002ee7c) list_cale_time_pane_g3

0x2eed,	// (0x0002ee8a) list_cale_time_pane_g4_ParamLimits

0x2eed,	// (0x0002ee8a) list_cale_time_pane_g4

0x2efb,	// (0x0002ee98) list_cale_time_pane_g5_ParamLimits

0x2efb,	// (0x0002ee98) list_cale_time_pane_g5

0x0005,

0xf249,	// (0x0003b1e6) list_cale_time_pane_g_ParamLimits

0xf249,	// (0x0003b1e6) list_cale_time_pane_g

0xc66b,	// (0x00038608) list_cale_time_pane_t1_ParamLimits

0xc66b,	// (0x00038608) list_cale_time_pane_t1

0xc693,	// (0x00038630) list_cale_time_pane_t2_ParamLimits

0xc693,	// (0x00038630) list_cale_time_pane_t2

0x31b9,	// (0x0002f156) aid_blid_cardinal_pane

0x31f7,	// (0x0002f194) compass_pane_t4

0xc6bb,	// (0x00038658) list_cale_time_pane_t4_ParamLimits

0xc6bb,	// (0x00038658) list_cale_time_pane_t4

0x3205,	// (0x0002f1a2) compass_pane_t5

0x3215,	// (0x0002f1b2) compass_pane_t6

0x3223,	// (0x0002f1c0) compass_pane_t7

0xcad9,	// (0x00038a76) navi_pane_cc_t1

0xcc26,	// (0x00038bc3) aid_phob_thumbnail_center_pane

0x37a9,	// (0x0002f746) main_postcard_pane_g4_ParamLimits

0x0002,

0xf256,	// (0x0003b1f3) list_cale_time_pane_t_ParamLimits

0xf256,	// (0x0003b1f3) list_cale_time_pane_t

0xb1a8,	// (0x00037145) bg_popup_window_pane_cp02_ParamLimits

0xb1a8,	// (0x00037145) bg_popup_window_pane_cp02

0xc6e3,	// (0x00038680) heading_pane_cp01_ParamLimits

0xc6e3,	// (0x00038680) heading_pane_cp01

0xc6ef,	// (0x0003868c) loc_req_pane_ParamLimits

0xc6ef,	// (0x0003868c) loc_req_pane

0xc6ff,	// (0x0003869c) loc_type_pane_ParamLimits

0xc6ff,	// (0x0003869c) loc_type_pane

0xc711,	// (0x000386ae) loc_type_pane_t1_ParamLimits

0xc711,	// (0x000386ae) loc_type_pane_t1

0xc723,	// (0x000386c0) loc_type_pane_t2_ParamLimits

0xc723,	// (0x000386c0) loc_type_pane_t2

0xc735,	// (0x000386d2) loc_type_pane_t3_ParamLimits

0xc735,	// (0x000386d2) loc_type_pane_t3

0x0002,

0xf25d,	// (0x0003b1fa) loc_type_pane_t_ParamLimits

0xf25d,	// (0x0003b1fa) loc_type_pane_t

0xc747,	// (0x000386e4) list_loc_req_pane

0xc751,	// (0x000386ee) scroll_pane_cp012

0x2f09,	// (0x0002eea6) list_single_loc_request_popup_menu_pane_ParamLimits

0x2f09,	// (0x0002eea6) list_single_loc_request_popup_menu_pane

0xc75c,	// (0x000386f9) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xc75c,	// (0x000386f9) list_single_loc_request_popup_menu_pane_g1

0xc768,	// (0x00038705) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xc768,	// (0x00038705) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf264,	// (0x0003b201) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf264,	// (0x0003b201) list_single_loc_request_popup_menu_pane_g

0xc774,	// (0x00038711) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xc774,	// (0x00038711) list_single_loc_request_popup_menu_pane_t1

0xbf7e,	// (0x00037f1b) bg_popup_window_pane_cp03_ParamLimits

0xbf7e,	// (0x00037f1b) bg_popup_window_pane_cp03

0xc78a,	// (0x00038727) heading_loc_req_pane_ParamLimits

0xc78a,	// (0x00038727) heading_loc_req_pane

0x2f16,	// (0x0002eeb3) popup_dyc_status_message_window_g1_ParamLimits

0x2f16,	// (0x0002eeb3) popup_dyc_status_message_window_g1

0x2f2a,	// (0x0002eec7) popup_dyc_status_message_window_t1_ParamLimits

0x2f2a,	// (0x0002eec7) popup_dyc_status_message_window_t1

0x2f3f,	// (0x0002eedc) popup_dyc_status_message_window_t2_ParamLimits

0x2f3f,	// (0x0002eedc) popup_dyc_status_message_window_t2

0x2f54,	// (0x0002eef1) popup_dyc_status_message_window_t3_ParamLimits

0x2f54,	// (0x0002eef1) popup_dyc_status_message_window_t3

0x0002,

0xf269,	// (0x0003b206) popup_dyc_status_message_window_t_ParamLimits

0xf269,	// (0x0003b206) popup_dyc_status_message_window_t

0xb551,	// (0x000374ee) bg_heading_pane_cp01

0xc796,	// (0x00038733) heading_loc_req_pane_g1

0xc79e,	// (0x0003873b) heading_loc_req_pane_g2

0xc7a6,	// (0x00038743) heading_loc_req_pane_g3

0x0002,

0xf270,	// (0x0003b20d) heading_loc_req_pane_g

0xc7ae,	// (0x0003874b) heading_loc_req_pane_t1

0xc7ce,	// (0x0003876b) bg_popup_sub_pane_cp01_ParamLimits

0xc7ce,	// (0x0003876b) bg_popup_sub_pane_cp01

0xc7dc,	// (0x00038779) popup_cale_events_window_g1_ParamLimits

0xc7dc,	// (0x00038779) popup_cale_events_window_g1

0xc7fc,	// (0x00038799) popup_cale_events_window_g2_ParamLimits

0xc7fc,	// (0x00038799) popup_cale_events_window_g2

0x0001,

0xf292,	// (0x0003b22f) popup_cale_events_window_g_ParamLimits

0xf292,	// (0x0003b22f) popup_cale_events_window_g

0xc81c,	// (0x000387b9) popup_cale_events_window_t1_ParamLimits

0xc81c,	// (0x000387b9) popup_cale_events_window_t1

0xc82e,	// (0x000387cb) popup_cale_events_window_t2_ParamLimits

0xc82e,	// (0x000387cb) popup_cale_events_window_t2

0xc86c,	// (0x00038809) popup_cale_events_window_t3_ParamLimits

0xc86c,	// (0x00038809) popup_cale_events_window_t3

0xc8a6,	// (0x00038843) popup_cale_events_window_t4_ParamLimits

0xc8a6,	// (0x00038843) popup_cale_events_window_t4

0x0003,

0xf297,	// (0x0003b234) popup_cale_events_window_t_ParamLimits

0xf297,	// (0x0003b234) popup_cale_events_window_t

0x2f88,	// (0x0002ef25) call_type_pane

0x2f98,	// (0x0002ef35) popup_call_status_window_g1

0x2fac,	// (0x0002ef49) popup_call_status_window_g2

0x2fc0,	// (0x0002ef5d) popup_call_status_window_g3

0x0002,

0xf2a0,	// (0x0003b23d) popup_call_status_window_g

0xc8dc,	// (0x00038879) call_type_pane_g1

0xc8e5,	// (0x00038882) call_type_pane_g2

0x0001,

0xf2a7,	// (0x0003b244) call_type_pane_g

0xb551,	// (0x000374ee) bg_popup_sub_pane_cp02

0xc8ee,	// (0x0003888b) listscroll_popup_wml_pane

0xc8f6,	// (0x00038893) list_wml_pane

0xc900,	// (0x0003889d) scroll_pane_cp013

0xc90b,	// (0x000388a8) list_single_graphic_popup_wml_pane_ParamLimits

0xc90b,	// (0x000388a8) list_single_graphic_popup_wml_pane

0xbf96,	// (0x00037f33) list_single_graphic_popup_wml_pane_g1

0xc91f,	// (0x000388bc) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2ac,	// (0x0003b249) list_single_graphic_popup_wml_pane_g

0xc927,	// (0x000388c4) list_single_graphic_popup_wml_pane_t1

0xc93d,	// (0x000388da) aid_call_pane

0xbf76,	// (0x00037f13) popup_clock_analogue_window_g1

0xbf76,	// (0x00037f13) popup_clock_analogue_window_g2

0xb767,	// (0x00037704) popup_clock_analogue_window_g3

0xb767,	// (0x00037704) popup_clock_analogue_window_g4

0xbf96,	// (0x00037f33) popup_clock_analogue_window_g5

0x0004,

0xf2b1,	// (0x0003b24e) popup_clock_analogue_window_g

0xb76f,	// (0x0003770c) popup_clock_analogue_window_t1

0xb77d,	// (0x0003771a) clock_digital_number_pane_ParamLimits

0xb77d,	// (0x0003771a) clock_digital_number_pane

0xb789,	// (0x00037726) clock_digital_number_pane_cp02_ParamLimits

0xb789,	// (0x00037726) clock_digital_number_pane_cp02

0xb795,	// (0x00037732) clock_digital_number_pane_cp03_ParamLimits

0xb795,	// (0x00037732) clock_digital_number_pane_cp03

0xb7a1,	// (0x0003773e) clock_digital_number_pane_cp04_ParamLimits

0xb7a1,	// (0x0003773e) clock_digital_number_pane_cp04

0xb7ad,	// (0x0003774a) clock_digital_separator_pane_ParamLimits

0xb7ad,	// (0x0003774a) clock_digital_separator_pane

0xb7b9,	// (0x00037756) popup_clock_digital_window_t1

0xbf96,	// (0x00037f33) clock_digital_number_pane_g1

0xbf96,	// (0x00037f33) clock_digital_number_pane_g2

0x0001,

0xf231,	// (0x0003b1ce) clock_digital_number_pane_g

0xbf96,	// (0x00037f33) clock_digital_separator_pane_g1

0xbf96,	// (0x00037f33) clock_digital_separator_pane_g2

0x0001,

0xf231,	// (0x0003b1ce) clock_digital_separator_pane_g

0xb551,	// (0x000374ee) bg_popup_window_pane_cp04

0xc945,	// (0x000388e2) heading_pane_cp03

0xc258,	// (0x000381f5) listscroll_popup_gms_pane

0xb551,	// (0x000374ee) grid_large_graphic_popup_pane

0xc94e,	// (0x000388eb) listscroll_popup_gms_pane_g1

0xc957,	// (0x000388f4) listscroll_popup_gms_pane_g2

0x0001,

0xf2bc,	// (0x0003b259) listscroll_popup_gms_pane_g

0xc960,	// (0x000388fd) scroll_pane_cp014

0xbff9,	// (0x00037f96) cell_large_graphic_popup_pane_ParamLimits

0xbff9,	// (0x00037f96) cell_large_graphic_popup_pane

0xc007,	// (0x00037fa4) cell_large_graphic_popup_pane_g1_ParamLimits

0xc007,	// (0x00037fa4) cell_large_graphic_popup_pane_g1

0xc969,	// (0x00038906) cell_large_graphic_popup_pane_g2_ParamLimits

0xc969,	// (0x00038906) cell_large_graphic_popup_pane_g2

0xc977,	// (0x00038914) cell_large_graphic_popup_pane_g3_ParamLimits

0xc977,	// (0x00038914) cell_large_graphic_popup_pane_g3

0xc985,	// (0x00038922) cell_large_graphic_popup_pane_g4_ParamLimits

0xc985,	// (0x00038922) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c1,	// (0x0003b25e) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c1,	// (0x0003b25e) cell_large_graphic_popup_pane_g

0xb551,	// (0x000374ee) grid_highlight_pane_cp010

0xbf96,	// (0x00037f33) bg_popup_call_pane_g1

0xc996,	// (0x00038933) list_single_graphic_popup_conf_pane_ParamLimits

0xc996,	// (0x00038933) list_single_graphic_popup_conf_pane

0xc9a8,	// (0x00038945) list_highlight_pane_cp01

0xc9b1,	// (0x0003894e) list_single_graphic_popup_conf_pane_g1

0xc9b9,	// (0x00038956) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ca,	// (0x0003b267) list_single_graphic_popup_conf_pane_g

0xc9c1,	// (0x0003895e) list_single_graphic_popup_conf_pane_t1

0xc9cf,	// (0x0003896c) linegrid_cams_pane_g1

0x2fd0,	// (0x0002ef6d) linegrid_cams_pane_g2

0xc23e,	// (0x000381db) linegrid_cams_pane_g3

0xc9d8,	// (0x00038975) linegrid_cams_pane_g4

0x2fd9,	// (0x0002ef76) linegrid_cams_pane_g5

0x2fe2,	// (0x0002ef7f) linegrid_cams_pane_g6

0xc247,	// (0x000381e4) linegrid_cams_pane_g7

0x0006,

0xf2cf,	// (0x0003b26c) linegrid_cams_pane_g

0xc9e1,	// (0x0003897e) popup_clock_analogue_window

0xc9e1,	// (0x0003897e) popup_clock_digital_window

0xb551,	// (0x000374ee) popup_phob_thumbnail_window

0xbf96,	// (0x00037f33) call_video_uplink_pane_g1

0xc9ea,	// (0x00038987) call_video_uplink_pane_g2

0x0001,

0xf2de,	// (0x0003b27b) call_video_uplink_pane_g

0xc9f2,	// (0x0003898f) video_uplink_pane

0xc9fa,	// (0x00038997) mce_image_pane_g1

0x2fed,	// (0x0002ef8a) mce_image_pane_g2

0x2ff7,	// (0x0002ef94) mce_image_pane_g3

0x3001,	// (0x0002ef9e) mce_image_pane_g4

0x3009,	// (0x0002efa6) mce_image_pane_g5

0x0004,

0xf2e3,	// (0x0003b280) mce_image_pane_g

0xca04,	// (0x000389a1) control_top_pane_stacon_cp01_ParamLimits

0xca04,	// (0x000389a1) control_top_pane_stacon_cp01

0xca18,	// (0x000389b5) uni_indicator_pane_stacon_cp01_ParamLimits

0xca18,	// (0x000389b5) uni_indicator_pane_stacon_cp01

0xca29,	// (0x000389c6) bg_popup_sub_pane_cp03

0x3011,	// (0x0002efae) chi_dic_find_pane

0x3019,	// (0x0002efb6) listscroll_chi_dic_pane

0x3022,	// (0x0002efbf) main_pane_chidic_g1

0x3035,	// (0x0002efd2) chi_dic_find_pane_t1

0xca33,	// (0x000389d0) find_chidic_pane

0xca3c,	// (0x000389d9) chi_dic_list_pane_ParamLimits

0xca3c,	// (0x000389d9) chi_dic_list_pane

0xca4d,	// (0x000389ea) scroll_pane_cp020

0x3043,	// (0x0002efe0) find_chidic_pane_t1

0xb551,	// (0x000374ee) input_focus_pane_cp06

0x3052,	// (0x0002efef) list_chi_dic_pane_ParamLimits

0x3052,	// (0x0002efef) list_chi_dic_pane

0x3064,	// (0x0002f001) list_chi_dic_pane_t1_ParamLimits

0x3064,	// (0x0002f001) list_chi_dic_pane_t1

0xb551,	// (0x000374ee) list_highlight_pane_cp020

0xca55,	// (0x000389f2) bg_cale_heading_pane_g1

0x3077,	// (0x0002f014) bg_cale_heading_pane_g2

0x307f,	// (0x0002f01c) bg_cale_heading_pane_g3

0x3087,	// (0x0002f024) bg_cale_heading_pane_g4

0x3091,	// (0x0002f02e) bg_cale_heading_pane_g5

0x309b,	// (0x0002f038) bg_cale_heading_pane_g6

0x30a3,	// (0x0002f040) bg_cale_heading_pane_g7

0x30ab,	// (0x0002f048) bg_cale_heading_pane_g8

0x30b5,	// (0x0002f052) bg_cale_heading_pane_g9

0x0008,

0xf2ee,	// (0x0003b28b) bg_cale_heading_pane_g

0xca55,	// (0x000389f2) bg_cale_side_pane_g1

0x30bf,	// (0x0002f05c) bg_cale_side_pane_g2

0x30c9,	// (0x0002f066) bg_cale_side_pane_g3

0x30d3,	// (0x0002f070) bg_cale_side_pane_g4

0x30dd,	// (0x0002f07a) bg_cale_side_pane_g5

0x30e7,	// (0x0002f084) bg_cale_side_pane_g6

0x30f1,	// (0x0002f08e) bg_cale_side_pane_g7

0x30fb,	// (0x0002f098) bg_cale_side_pane_g8

0x3103,	// (0x0002f0a0) bg_cale_side_pane_g9

0x0008,

0xf301,	// (0x0003b29e) bg_cale_side_pane_g

0x310b,	// (0x0002f0a8) popup_call_status_window_ParamLimits

0x310b,	// (0x0002f0a8) popup_call_status_window

0xca5d,	// (0x000389fa) stacon_top_pane

0xca65,	// (0x00038a02) status_pane_ParamLimits

0xca65,	// (0x00038a02) status_pane

0xca7a,	// (0x00038a17) status_small_pane

0xca82,	// (0x00038a1f) control_pane

0xb551,	// (0x000374ee) stacon_bottom_pane

0xca8a,	// (0x00038a27) list_single_mce_smart_pane_t1_ParamLimits

0xca8a,	// (0x00038a27) list_single_mce_smart_pane_t1

0xca9d,	// (0x00038a3a) list_single_mce_smart_pane_t2_ParamLimits

0xca9d,	// (0x00038a3a) list_single_mce_smart_pane_t2

0x0001,

0xf314,	// (0x0003b2b1) list_single_mce_smart_pane_t_ParamLimits

0xf314,	// (0x0003b2b1) list_single_mce_smart_pane_t

0x3158,	// (0x0002f0f5) compass_pane

0x3163,	// (0x0002f100) main_location2_pane_t1

0x3179,	// (0x0002f116) main_location2_pane_t2

0x318f,	// (0x0002f12c) main_location2_pane_t3

0x0003,

0xf319,	// (0x0003b2b6) main_location2_pane_t

0xcabc,	// (0x00038a59) compass_pane_g1_ParamLimits

0xcabc,	// (0x00038a59) compass_pane_g1

0x31d9,	// (0x0002f176) compass_pane_t1

0x31e8,	// (0x0002f185) compass_pane_t2

0x0005,

0xf322,	// (0x0003b2bf) compass_pane_t

0x3233,	// (0x0002f1d0) text_secondary_cp61

0xcad0,	// (0x00038a6d) navi_pane_cams_g5

0xcaf3,	// (0x00038a90) navi_pane_im_t1

0xcb01,	// (0x00038a9e) navi_pane_mp_g1_ParamLimits

0xcb01,	// (0x00038a9e) navi_pane_mp_g1

0xcb15,	// (0x00038ab2) navi_pane_mp_g2_ParamLimits

0xcb15,	// (0x00038ab2) navi_pane_mp_g2

0xcb21,	// (0x00038abe) navi_pane_mp_g3_ParamLimits

0xcb21,	// (0x00038abe) navi_pane_mp_g3

0x0002,

0xf336,	// (0x0003b2d3) navi_pane_mp_g_ParamLimits

0xf336,	// (0x0003b2d3) navi_pane_mp_g

0xcb2d,	// (0x00038aca) navi_pane_mp_t1

0xcb3b,	// (0x00038ad8) navi_pane_mp_t2

0x0002,

0xf33d,	// (0x0003b2da) navi_pane_mp_t

0xcb77,	// (0x00038b14) navi_pane_vt_g1

0xcb2d,	// (0x00038aca) navi_pane_vt_t1

0xcb7f,	// (0x00038b1c) navi_slider_pane

0xc258,	// (0x000381f5) zooming_pane

0xcb87,	// (0x00038b24) navi_slider_pane_g1

0xb7d6,	// (0x00037773) navi_slider_pane_g2

0x0006,

0xf344,	// (0x0003b2e1) navi_slider_pane_g

0xcbab,	// (0x00038b48) aid_levels_zoom

0xcbb3,	// (0x00038b50) zooming_pane_g1

0xcbbb,	// (0x00038b58) zooming_pane_g2

0xcbbb,	// (0x00038b58) zooming_pane_g3

0x0002,

0xf353,	// (0x0003b2f0) zooming_pane_g

0xcbc3,	// (0x00038b60) level_10_zoom

0xcbcc,	// (0x00038b69) level_11_zoom

0xcbd5,	// (0x00038b72) level_1_zoom

0xcbde,	// (0x00038b7b) level_2_zoom

0xcbe7,	// (0x00038b84) level_3_zoom

0xcbf0,	// (0x00038b8d) level_4_zoom

0xcbf9,	// (0x00038b96) level_5_zoom

0xcc02,	// (0x00038b9f) level_6_zoom

0xcc0b,	// (0x00038ba8) level_7_zoom

0xcc14,	// (0x00038bb1) level_8_zoom

0xcc1d,	// (0x00038bba) level_9_zoom

0xcc2e,	// (0x00038bcb) popup_phob_thumbnail_window_g1

0xcc36,	// (0x00038bd3) popup_phob_thumbnail_window_g2

0x0001,

0xf35a,	// (0x0003b2f7) popup_phob_thumbnail_window_g

0x3df3,	// (0x0002fd90) level_1_location

0x3dfb,	// (0x0002fd98) level_2_location

0x3e03,	// (0x0002fda0) level_3_location

0x3e0d,	// (0x0002fdaa) level_4_location

0xc258,	// (0x000381f5) level_5_location

0x337c,	// (0x0002f319) mce_icon_pane_g1

0x3386,	// (0x0002f323) mce_icon_pane_g2

0x0001,

0xf35f,	// (0x0003b2fc) mce_icon_pane_g

0xcc3e,	// (0x00038bdb) main_mup_pane_g1_ParamLimits

0xcc3e,	// (0x00038bdb) main_mup_pane_g1

0xcc3e,	// (0x00038bdb) main_mup_pane_g2_ParamLimits

0xcc3e,	// (0x00038bdb) main_mup_pane_g2

0xcc3e,	// (0x00038bdb) main_mup_pane_g3_ParamLimits

0xcc3e,	// (0x00038bdb) main_mup_pane_g3

0xcc3e,	// (0x00038bdb) main_mup_pane_g4_ParamLimits

0xcc3e,	// (0x00038bdb) main_mup_pane_g4

0xcc3e,	// (0x00038bdb) main_mup_pane_g5_ParamLimits

0xcc3e,	// (0x00038bdb) main_mup_pane_g5

0xcc3e,	// (0x00038bdb) main_mup_pane_g6_ParamLimits

0xcc3e,	// (0x00038bdb) main_mup_pane_g6

0xcc3e,	// (0x00038bdb) main_mup_pane_g7_ParamLimits

0xcc3e,	// (0x00038bdb) main_mup_pane_g7

0xcc3e,	// (0x00038bdb) main_mup_pane_g8_ParamLimits

0xcc3e,	// (0x00038bdb) main_mup_pane_g8

0xcc3e,	// (0x00038bdb) main_mup_pane_g9_ParamLimits

0xcc3e,	// (0x00038bdb) main_mup_pane_g9

0xcc3e,	// (0x00038bdb) main_mup_pane_g10_ParamLimits

0xcc3e,	// (0x00038bdb) main_mup_pane_g10

0xcc3e,	// (0x00038bdb) main_mup_pane_g11_ParamLimits

0xcc3e,	// (0x00038bdb) main_mup_pane_g11

0xc007,	// (0x00037fa4) main_mup_pane_g12_ParamLimits

0xc007,	// (0x00037fa4) main_mup_pane_g12

0xcc3e,	// (0x00038bdb) main_mup_pane_g13_ParamLimits

0xcc3e,	// (0x00038bdb) main_mup_pane_g13

0x000c,

0xf364,	// (0x0003b301) main_mup_pane_g_ParamLimits

0xf364,	// (0x0003b301) main_mup_pane_g

0xcc4c,	// (0x00038be9) main_mup_pane_t1_ParamLimits

0xcc4c,	// (0x00038be9) main_mup_pane_t1

0xcc4c,	// (0x00038be9) main_mup_pane_t2_ParamLimits

0xcc4c,	// (0x00038be9) main_mup_pane_t2

0xcc4c,	// (0x00038be9) main_mup_pane_t3_ParamLimits

0xcc4c,	// (0x00038be9) main_mup_pane_t3

0xc04f,	// (0x00037fec) main_mup_pane_t4_ParamLimits

0xc04f,	// (0x00037fec) main_mup_pane_t4

0xc04f,	// (0x00037fec) main_mup_pane_t5_ParamLimits

0xc04f,	// (0x00037fec) main_mup_pane_t5

0xc063,	// (0x00038000) main_mup_pane_t6_ParamLimits

0xc063,	// (0x00038000) main_mup_pane_t6

0x0005,

0xf37f,	// (0x0003b31c) main_mup_pane_t_ParamLimits

0xf37f,	// (0x0003b31c) main_mup_pane_t

0xbff9,	// (0x00037f96) mup_progress_pane_ParamLimits

0xbff9,	// (0x00037f96) mup_progress_pane

0xcc60,	// (0x00038bfd) mup_visualizer_pane_ParamLimits

0xcc60,	// (0x00038bfd) mup_visualizer_pane

0xcc60,	// (0x00038bfd) mup_volume_pane_ParamLimits

0xcc60,	// (0x00038bfd) mup_volume_pane

0xc015,	// (0x00037fb2) mup_visualizer_pane_g1_ParamLimits

0xc015,	// (0x00037fb2) mup_visualizer_pane_g1

0xcc6e,	// (0x00038c0b) mup_visualizer_pane_g2_ParamLimits

0xcc6e,	// (0x00038c0b) mup_visualizer_pane_g2

0xc007,	// (0x00037fa4) mup_visualizer_pane_g3_ParamLimits

0xc007,	// (0x00037fa4) mup_visualizer_pane_g3

0x0002,

0xf38c,	// (0x0003b329) mup_visualizer_pane_g_ParamLimits

0xf38c,	// (0x0003b329) mup_visualizer_pane_g

0xc045,	// (0x00037fe2) mup_volume_pane_g1

0xc045,	// (0x00037fe2) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x0003b04c) mup_volume_pane_g

0xc045,	// (0x00037fe2) mup_progress_pane_g1

0xc045,	// (0x00037fe2) mup_progress_pane_g2

0xc045,	// (0x00037fe2) mup_progress_pane_g3

0x0002,

0xf393,	// (0x0003b330) mup_progress_pane_g

0xb551,	// (0x000374ee) bg_popup_window_pane_cp05

0xcc7c,	// (0x00038c19) heading_pane_cp02_ParamLimits

0xcc7c,	// (0x00038c19) heading_pane_cp02

0xcc98,	// (0x00038c35) list_popup_blid_pane

0xcca0,	// (0x00038c3d) list_blid_sat_info_pane_ParamLimits

0xcca0,	// (0x00038c3d) list_blid_sat_info_pane

0xccb3,	// (0x00038c50) list_blid_sat_info_pane_g1

0xccbb,	// (0x00038c58) list_blid_sat_info_pane_t1

0x349a,	// (0x0002f437) mup_equalizer_pane_ParamLimits

0x349a,	// (0x0002f437) mup_equalizer_pane

0x34bb,	// (0x0002f458) mup_equalizer_pane_cp1_ParamLimits

0x34bb,	// (0x0002f458) mup_equalizer_pane_cp1

0x34dc,	// (0x0002f479) mup_equalizer_pane_cp2_ParamLimits

0x34dc,	// (0x0002f479) mup_equalizer_pane_cp2

0x3501,	// (0x0002f49e) mup_equalizer_pane_cp3_ParamLimits

0x3501,	// (0x0002f49e) mup_equalizer_pane_cp3

0x352a,	// (0x0002f4c7) mup_equalizer_pane_cp4_ParamLimits

0x352a,	// (0x0002f4c7) mup_equalizer_pane_cp4

0x3553,	// (0x0002f4f0) mup_equalizer_pane_cp5

0x356b,	// (0x0002f508) mup_equalizer_pane_cp6

0x3583,	// (0x0002f520) mup_equalizer_pane_cp7

0xdd9e,	// (0x00039d3b) bg_popup_call_poc_act_pane_g9

0xdda6,	// (0x00039d43) bg_popup_call_poc_act_pane_g10

0xddae,	// (0x00039d4b) bg_popup_call_poc_act_pane_g11

0x000a,

0xbf7e,	// (0x00037f1b) mup_scale_pane

0xbf96,	// (0x00037f33) mup_scale_pane_g1

0xccc9,	// (0x00038c66) mup_scale_pane_g2

0x0006,

0xf3af,	// (0x0003b34c) mup_scale_pane_g

0xcced,	// (0x00038c8a) msg_data_pane

0xccf5,	// (0x00038c92) scroll_pane_cp017

0x35ad,	// (0x0002f54a) bg_list_pane_cp04_ParamLimits

0x35ad,	// (0x0002f54a) bg_list_pane_cp04

0xccfd,	// (0x00038c9a) msg_data_pane_g1

0x35d5,	// (0x0002f572) msg_data_pane_g2

0x35df,	// (0x0002f57c) msg_data_pane_g3

0x35e9,	// (0x0002f586) msg_data_pane_g4

0x35f1,	// (0x0002f58e) msg_data_pane_g5

0x35f9,	// (0x0002f596) msg_data_pane_g6

0x3601,	// (0x0002f59e) msg_data_pane_g7

0x0006,

0xf3be,	// (0x0003b35b) msg_data_pane_g

0x3609,	// (0x0002f5a6) msg_text_pane_ParamLimits

0x3609,	// (0x0002f5a6) msg_text_pane

0x3646,	// (0x0002f5e3) qrid_highlight_pane_cp011_ParamLimits

0x3646,	// (0x0002f5e3) qrid_highlight_pane_cp011

0xb551,	// (0x000374ee) msg_body_pane

0xbf7e,	// (0x00037f1b) msg_header_pane

0xcd19,	// (0x00038cb6) input_focus_pane_cp07

0x366a,	// (0x0002f607) msg_header_pane_t1_ParamLimits

0x366a,	// (0x0002f607) msg_header_pane_t1

0x3686,	// (0x0002f623) msg_header_pane_t2_ParamLimits

0x3686,	// (0x0002f623) msg_header_pane_t2

0x0001,

0xf3d2,	// (0x0003b36f) msg_header_pane_t_ParamLimits

0xf3d2,	// (0x0003b36f) msg_header_pane_t

0xcd3a,	// (0x00038cd7) msg_body_pane_g1

0x36a6,	// (0x0002f643) msg_body_pane_t1_ParamLimits

0x36a6,	// (0x0002f643) msg_body_pane_t1

0x36d7,	// (0x0002f674) msg_body_pane_t2_ParamLimits

0x36d7,	// (0x0002f674) msg_body_pane_t2

0x36e9,	// (0x0002f686) msg_body_pane_t3_ParamLimits

0x36e9,	// (0x0002f686) msg_body_pane_t3

0x0002,

0xf3d7,	// (0x0003b374) msg_body_pane_t_ParamLimits

0xf3d7,	// (0x0003b374) msg_body_pane_t

0x0549,	// (0x0002c4e6) main_viewer_pane_g1_ParamLimits

0x0549,	// (0x0002c4e6) main_viewer_pane_g1

0x0557,	// (0x0002c4f4) main_viewer_pane_g2_ParamLimits

0x0557,	// (0x0002c4f4) main_viewer_pane_g2

0x3719,	// (0x0002f6b6) main_viewer_pane_g3_ParamLimits

0x3719,	// (0x0002f6b6) main_viewer_pane_g3

0x3728,	// (0x0002f6c5) main_viewer_pane_g4_ParamLimits

0x3728,	// (0x0002f6c5) main_viewer_pane_g4

0xb800,	// (0x0003779d) main_viewer_pane_g5_ParamLimits

0xb800,	// (0x0003779d) main_viewer_pane_g5

0xb800,	// (0x0003779d) main_viewer_pane_g7_ParamLimits

0xb800,	// (0x0003779d) main_viewer_pane_g7

0xb812,	// (0x000377af) main_viewer_pane_g8_ParamLimits

0xb812,	// (0x000377af) main_viewer_pane_g8

0x0007,

0xf3e7,	// (0x0003b384) main_viewer_pane_g_ParamLimits

0xf3e7,	// (0x0003b384) main_viewer_pane_g

0xcd42,	// (0x00038cdf) viewer_content_pane_ParamLimits

0xcd42,	// (0x00038cdf) viewer_content_pane

0x3766,	// (0x0002f703) main_postcard_pane_g1_ParamLimits

0x3766,	// (0x0002f703) main_postcard_pane_g1

0x377c,	// (0x0002f719) main_postcard_pane_g2_ParamLimits

0x377c,	// (0x0002f719) main_postcard_pane_g2

0x3792,	// (0x0002f72f) main_postcard_pane_g3_ParamLimits

0x3792,	// (0x0002f72f) main_postcard_pane_g3

0x0005,

0xf3f8,	// (0x0003b395) main_postcard_pane_g_ParamLimits

0xf3f8,	// (0x0003b395) main_postcard_pane_g

0x37a9,	// (0x0002f746) main_postcard_pane_g4

0xdee4,	// (0x00039e81) smil_status_volume_pane_g2

0x37ec,	// (0x0002f789) postcard_pane_ParamLimits

0x37ec,	// (0x0002f789) postcard_pane

0xcd50,	// (0x00038ced) postcard_pane_g1_ParamLimits

0xcd50,	// (0x00038ced) postcard_pane_g1

0x383c,	// (0x0002f7d9) postcard_pane_g2_ParamLimits

0x383c,	// (0x0002f7d9) postcard_pane_g2

0x3848,	// (0x0002f7e5) postcard_pane_g3_ParamLimits

0x3848,	// (0x0002f7e5) postcard_pane_g3

0xcd5e,	// (0x00038cfb) postcard_pane_g4_ParamLimits

0xcd5e,	// (0x00038cfb) postcard_pane_g4

0x3854,	// (0x0002f7f1) postcard_pane_g5_ParamLimits

0x3854,	// (0x0002f7f1) postcard_pane_g5

0x3869,	// (0x0002f806) postcard_pane_g6_ParamLimits

0x3869,	// (0x0002f806) postcard_pane_g6

0xcd50,	// (0x00038ced) postcard_pane_g7_ParamLimits

0xcd50,	// (0x00038ced) postcard_pane_g7

0x0006,

0xf405,	// (0x0003b3a2) postcard_pane_g_ParamLimits

0xf405,	// (0x0003b3a2) postcard_pane_g

0x3881,	// (0x0002f81e) main_mp2_pane_g1_ParamLimits

0x3881,	// (0x0002f81e) main_mp2_pane_g1

0x388f,	// (0x0002f82c) main_mp2_pane_g2_ParamLimits

0x388f,	// (0x0002f82c) main_mp2_pane_g2

0x389b,	// (0x0002f838) main_mp2_pane_g3_ParamLimits

0x389b,	// (0x0002f838) main_mp2_pane_g3

0x0002,

0xf414,	// (0x0003b3b1) main_mp2_pane_g_ParamLimits

0xf414,	// (0x0003b3b1) main_mp2_pane_g

0x38a7,	// (0x0002f844) main_mp2_pane_t1_ParamLimits

0x38a7,	// (0x0002f844) main_mp2_pane_t1

0x38be,	// (0x0002f85b) main_mp2_pane_t2_ParamLimits

0x38be,	// (0x0002f85b) main_mp2_pane_t2

0x38d0,	// (0x0002f86d) main_mp2_pane_t3_ParamLimits

0x38d0,	// (0x0002f86d) main_mp2_pane_t3

0x0002,

0xf41b,	// (0x0003b3b8) main_mp2_pane_t_ParamLimits

0xf41b,	// (0x0003b3b8) main_mp2_pane_t

0xbfa0,	// (0x00037f3d) pec_content_pane_ParamLimits

0xbfa0,	// (0x00037f3d) pec_content_pane

0xb07c,	// (0x00037019) scroll_pane_cp015

0xcc60,	// (0x00038bfd) pec_attribute_pane_ParamLimits

0xcc60,	// (0x00038bfd) pec_attribute_pane

0xc007,	// (0x00037fa4) pec_content_pane_g1_ParamLimits

0xc007,	// (0x00037fa4) pec_content_pane_g1

0xcd6c,	// (0x00038d09) pec_content_pane_t1_ParamLimits

0xcd6c,	// (0x00038d09) pec_content_pane_t1

0xcd80,	// (0x00038d1d) pec_content_pane_t2_ParamLimits

0xcd80,	// (0x00038d1d) pec_content_pane_t2

0x0001,

0xf422,	// (0x0003b3bf) pec_content_pane_t_ParamLimits

0xf422,	// (0x0003b3bf) pec_content_pane_t

0xbff9,	// (0x00037f96) list_single_graphic_pane_cp01_ParamLimits

0xbff9,	// (0x00037f96) list_single_graphic_pane_cp01

0xbf7e,	// (0x00037f1b) bg_popup_sub_pane_cp04

0xcd94,	// (0x00038d31) popup_mup_playback_window_g1

0xcda0,	// (0x00038d3d) popup_mup_playback_window_t1

0xcdb5,	// (0x00038d52) popup_mup_playback_window_t2

0x0001,

0xf427,	// (0x0003b3c4) popup_mup_playback_window_t

0xcdec,	// (0x00038d89) main_image_pane_g1_ParamLimits

0xcdec,	// (0x00038d89) main_image_pane_g1

0xce2f,	// (0x00038dcc) scroll_pane_cp018_ParamLimits

0xce2f,	// (0x00038dcc) scroll_pane_cp018

0xce47,	// (0x00038de4) scroll_pane_cp016_ParamLimits

0xce47,	// (0x00038de4) scroll_pane_cp016

0x399a,	// (0x0002f937) smil2_image_pane_ParamLimits

0x399a,	// (0x0002f937) smil2_image_pane

0x39d0,	// (0x0002f96d) smil2_root_pane_ParamLimits

0x39d0,	// (0x0002f96d) smil2_root_pane

0x3a08,	// (0x0002f9a5) smil2_text_pane_ParamLimits

0x3a08,	// (0x0002f9a5) smil2_text_pane

0xb07c,	// (0x00037019) bg_list_pane_cp06

0xb07c,	// (0x00037019) grid_radio_pane

0xb551,	// (0x000374ee) bg_popup_window_pane_cp06

0xc7be,	// (0x0003875b) main_fmradio_pane_t1

0xddb6,	// (0x00039d53) heading_pane_cp04

0xc7be,	// (0x0003875b) main_fmradio_pane_t2

0xddbe,	// (0x00039d5b) popup_cale_lunar_info_window_g1

0xc7be,	// (0x0003875b) main_fmradio_pane_t3

0xddc6,	// (0x00039d63) popup_cale_lunar_info_window_g2

0xc7be,	// (0x0003875b) main_fmradio_pane_t4

0x0001,

0xc7be,	// (0x0003875b) main_fmradio_pane_t5

0x0004,

0xf4f7,	// (0x0003b494) popup_cale_lunar_info_window_g

0xf287,	// (0x0003b224) main_fmradio_pane_t

0xb07c,	// (0x00037019) wait_bar_pane_cp03

0xbff9,	// (0x00037f96) cell_fmradio_pane_ParamLimits

0xbff9,	// (0x00037f96) cell_fmradio_pane

0xc007,	// (0x00037fa4) cell_fmradio_pane_g1_ParamLimits

0xc007,	// (0x00037fa4) cell_fmradio_pane_g1

0xb07c,	// (0x00037019) grid_highlight_pane_cp011

0xce7b,	// (0x00038e18) poc_content_pane_ParamLimits

0xce7b,	// (0x00038e18) poc_content_pane

0xce8d,	// (0x00038e2a) scroll_pane_cp019

0x3a98,	// (0x0002fa35) popup_call_poc_act_window_ParamLimits

0x3a98,	// (0x0002fa35) popup_call_poc_act_window

0x3abc,	// (0x0002fa59) popup_call_poc_inact_window_ParamLimits

0x3abc,	// (0x0002fa59) popup_call_poc_inact_window

0xf4d3,	// (0x0003b470) bg_popup_call_poc_act_pane_g

0xdd2e,	// (0x00039ccb) bg_popup_call_poc_inact_pane_g1

0xdd36,	// (0x00039cd3) bg_popup_call_poc_inact_pane_g2

0xce95,	// (0x00038e32) popup_call_poc_act_window_g2

0xdd3e,	// (0x00039cdb) bg_popup_call_poc_inact_pane_g3

0xdd46,	// (0x00039ce3) bg_popup_call_poc_inact_pane_g4

0xdd4e,	// (0x00039ceb) bg_popup_call_poc_inact_pane_g5

0xce9d,	// (0x00038e3a) popup_call_poc_act_window_t1_ParamLimits

0xce9d,	// (0x00038e3a) popup_call_poc_act_window_t1

0xcec5,	// (0x00038e62) popup_call_poc_act_window_t2_ParamLimits

0xcec5,	// (0x00038e62) popup_call_poc_act_window_t2

0xceed,	// (0x00038e8a) popup_call_poc_act_window_t3_ParamLimits

0xceed,	// (0x00038e8a) popup_call_poc_act_window_t3

0xcf15,	// (0x00038eb2) popup_call_poc_act_window_t4_ParamLimits

0xcf15,	// (0x00038eb2) popup_call_poc_act_window_t4

0x0003,

0xf43c,	// (0x0003b3d9) popup_call_poc_act_window_t_ParamLimits

0xf43c,	// (0x0003b3d9) popup_call_poc_act_window_t

0xdd56,	// (0x00039cf3) bg_popup_call_poc_inact_pane_g6

0xdd5e,	// (0x00039cfb) bg_popup_call_poc_inact_pane_g7

0xdd66,	// (0x00039d03) bg_popup_call_poc_inact_pane_g8

0xcf27,	// (0x00038ec4) popup_call_poc_inact_window_g2

0xdd6e,	// (0x00039d0b) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4c0,	// (0x0003b45d) bg_popup_call_poc_inact_pane_g

0xcf2f,	// (0x00038ecc) popup_call_poc_inact_window_t1_ParamLimits

0xcf2f,	// (0x00038ecc) popup_call_poc_inact_window_t1

0xcf44,	// (0x00038ee1) popup_call_poc_inact_window_t2_ParamLimits

0xcf44,	// (0x00038ee1) popup_call_poc_inact_window_t2

0xcf59,	// (0x00038ef6) popup_call_poc_inact_window_t3_ParamLimits

0xcf59,	// (0x00038ef6) popup_call_poc_inact_window_t3

0x0002,

0xf445,	// (0x0003b3e2) popup_call_poc_inact_window_t_ParamLimits

0xf445,	// (0x0003b3e2) popup_call_poc_inact_window_t

0xde5c,	// (0x00039df9) context_pane_ParamLimits

0x401e,	// (0x0002ffbb) signal_pane_ParamLimits

0xc258,	// (0x000381f5) main_call2_pane

0xb85b,	// (0x000377f8) popup_phob_thumbnail2_window_ParamLimits

0xb85b,	// (0x000377f8) popup_phob_thumbnail2_window

0xb7e8,	// (0x00037785) aid_hotspot_pointer_arrow_pane

0xb7f0,	// (0x0003778d) aid_hotspot_pointer_hand_pane

0x3dbb,	// (0x0002fd58) phob_pre_status_pane_g5

0xbfa0,	// (0x00037f3d) cams_zoom_pane_ParamLimits

0xbfa0,	// (0x00037f3d) image_vga_pane_ParamLimits

0xc007,	// (0x00037fa4) main_camera_pane_g1_ParamLimits

0xc007,	// (0x00037fa4) main_camera_pane_g2_ParamLimits

0xc007,	// (0x00037fa4) main_camera_pane_g3_ParamLimits

0xc007,	// (0x00037fa4) main_camera_pane_g4_ParamLimits

0xc007,	// (0x00037fa4) main_camera_pane_g5_ParamLimits

0xc007,	// (0x00037fa4) main_camera_pane_g6_ParamLimits

0xc007,	// (0x00037fa4) main_camera_pane_g7_ParamLimits

0xf180,	// (0x0003b11d) main_camera_pane_g_ParamLimits

0xc04f,	// (0x00037fec) main_camera_pane_t1_ParamLimits

0xc04f,	// (0x00037fec) main_camera_pane_t2_ParamLimits

0xf191,	// (0x0003b12e) main_camera_pane_t_ParamLimits

0xbf7e,	// (0x00037f1b) bg_popup_preview_window_pane_cp01_ParamLimits

0xbf7e,	// (0x00037f1b) bg_popup_preview_window_pane_cp01

0xcf6e,	// (0x00038f0b) popup_phob_thumbnail2_window_g1_ParamLimits

0xcf6e,	// (0x00038f0b) popup_phob_thumbnail2_window_g1

0xb551,	// (0x000374ee) call2_cli_visual_pane

0x3af0,	// (0x0002fa8d) popup_call2_audio_conf_window_ParamLimits

0x3af0,	// (0x0002fa8d) popup_call2_audio_conf_window

0x3b18,	// (0x0002fab5) popup_call2_audio_first_window_ParamLimits

0x3b18,	// (0x0002fab5) popup_call2_audio_first_window

0x3bae,	// (0x0002fb4b) popup_call2_audio_in_window_ParamLimits

0x3bae,	// (0x0002fb4b) popup_call2_audio_in_window

0x3bfa,	// (0x0002fb97) popup_call2_audio_out_window_ParamLimits

0x3bfa,	// (0x0002fb97) popup_call2_audio_out_window

0x3c6c,	// (0x0002fc09) popup_call2_audio_second_window_ParamLimits

0x3c6c,	// (0x0002fc09) popup_call2_audio_second_window

0x3cd2,	// (0x0002fc6f) popup_call2_audio_wait_window_ParamLimits

0x3cd2,	// (0x0002fc6f) popup_call2_audio_wait_window

0xb551,	// (0x000374ee) bg_popup_call2_act_pane_cp03

0xbf60,	// (0x00037efd) list_conf_pane_cp

0xcf7a,	// (0x00038f17) popup_call2_audio_conf_window_t1

0xcf88,	// (0x00038f25) list_single_graphic_popup_conf2_pane_ParamLimits

0xcf88,	// (0x00038f25) list_single_graphic_popup_conf2_pane

0xc9a8,	// (0x00038945) list_highlight_pane_cp04

0xcf9b,	// (0x00038f38) list_single_graphic_popup_conf2_pane_g1

0xc9b9,	// (0x00038956) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf44c,	// (0x0003b3e9) list_single_graphic_popup_conf2_pane_g

0xcfa5,	// (0x00038f42) list_single_graphic_popup_conf2_pane_t1

0xcfb3,	// (0x00038f50) bg_popup_call2_act_pane_cp01_ParamLimits

0xcfb3,	// (0x00038f50) bg_popup_call2_act_pane_cp01

0xd03d,	// (0x00038fda) call_type_pane_cp05_ParamLimits

0xd03d,	// (0x00038fda) call_type_pane_cp05

0xd091,	// (0x0003902e) popup_call2_audio_second_window_g1_ParamLimits

0xd091,	// (0x0003902e) popup_call2_audio_second_window_g1

0xd0e5,	// (0x00039082) popup_call2_audio_second_window_g2_ParamLimits

0xd0e5,	// (0x00039082) popup_call2_audio_second_window_g2

0x0002,

0xf451,	// (0x0003b3ee) popup_call2_audio_second_window_g_ParamLimits

0xf451,	// (0x0003b3ee) popup_call2_audio_second_window_g

0xd14a,	// (0x000390e7) popup_call2_audio_second_window_t1_ParamLimits

0xd14a,	// (0x000390e7) popup_call2_audio_second_window_t1

0xd205,	// (0x000391a2) popup_call2_audio_second_window_t2_ParamLimits

0xd205,	// (0x000391a2) popup_call2_audio_second_window_t2

0xd258,	// (0x000391f5) popup_call2_audio_second_window_t3_ParamLimits

0xd258,	// (0x000391f5) popup_call2_audio_second_window_t3

0x0003,

0xf458,	// (0x0003b3f5) popup_call2_audio_second_window_t_ParamLimits

0xf458,	// (0x0003b3f5) popup_call2_audio_second_window_t

0xb551,	// (0x000374ee) bg_popup_call2_in_pane_cp02

0xb55b,	// (0x000374f8) call_type_pane_cp04

0x3d0c,	// (0x0002fca9) popup_call2_audio_wait_window_g1

0x3d14,	// (0x0002fcb1) popup_call2_audio_wait_window_g2

0x0001,

0xf461,	// (0x0003b3fe) popup_call2_audio_wait_window_g

0xb573,	// (0x00037510) popup_call2_audio_wait_window_t3

0xd34b,	// (0x000392e8) bg_popup_call2_act_pane_ParamLimits

0xd34b,	// (0x000392e8) bg_popup_call2_act_pane

0xd40b,	// (0x000393a8) call_type_pane_cp03_ParamLimits

0xd40b,	// (0x000393a8) call_type_pane_cp03

0xd46f,	// (0x0003940c) popup_call2_audio_first_window_g1_ParamLimits

0xd46f,	// (0x0003940c) popup_call2_audio_first_window_g1

0xd4df,	// (0x0003947c) popup_call2_audio_first_window_g2_ParamLimits

0xd4df,	// (0x0003947c) popup_call2_audio_first_window_g2

0xd543,	// (0x000394e0) popup_call2_audio_first_window_g3_ParamLimits

0xd543,	// (0x000394e0) popup_call2_audio_first_window_g3

0x0004,

0xf466,	// (0x0003b403) popup_call2_audio_first_window_g_ParamLimits

0xf466,	// (0x0003b403) popup_call2_audio_first_window_g

0xd5cb,	// (0x00039568) popup_call2_audio_first_window_t1_ParamLimits

0xd5cb,	// (0x00039568) popup_call2_audio_first_window_t1

0xd6ce,	// (0x0003966b) popup_call2_audio_first_window_t4_ParamLimits

0xd6ce,	// (0x0003966b) popup_call2_audio_first_window_t4

0xd7b1,	// (0x0003974e) popup_call2_audio_first_window_t5_ParamLimits

0xd7b1,	// (0x0003974e) popup_call2_audio_first_window_t5

0x0003,

0xf471,	// (0x0003b40e) popup_call2_audio_first_window_t_ParamLimits

0xf471,	// (0x0003b40e) popup_call2_audio_first_window_t

0xbf76,	// (0x00037f13) bg_popup_call2_act_pane_g1

0xddd0,	// (0x00039d6d) popup_cale_lunar_info_window_t1

0xddde,	// (0x00039d7b) popup_cale_lunar_info_window_t2

0xddec,	// (0x00039d89) popup_cale_lunar_info_window_t3

0xb551,	// (0x000374ee) bg_popup_call2_bubble_pane

0xd8b2,	// (0x0003984f) bg_popup_call2_in_pane_cp01_ParamLimits

0xd8b2,	// (0x0003984f) bg_popup_call2_in_pane_cp01

0xb22d,	// (0x000371ca) call_type_pane_cp02

0x3d1c,	// (0x0002fcb9) popup_call2_audio_out_window_g1_ParamLimits

0x3d1c,	// (0x0002fcb9) popup_call2_audio_out_window_g1

0xd8fa,	// (0x00039897) popup_call2_audio_out_window_g2_ParamLimits

0xd8fa,	// (0x00039897) popup_call2_audio_out_window_g2

0x3d48,	// (0x0002fce5) popup_call2_audio_out_window_g3_ParamLimits

0x3d48,	// (0x0002fce5) popup_call2_audio_out_window_g3

0x0003,

0xf47a,	// (0x0003b417) popup_call2_audio_out_window_g_ParamLimits

0xf47a,	// (0x0003b417) popup_call2_audio_out_window_g

0xd931,	// (0x000398ce) popup_call2_audio_out_window_t1_ParamLimits

0xd931,	// (0x000398ce) popup_call2_audio_out_window_t1

0xd990,	// (0x0003992d) popup_call2_audio_out_window_t2_ParamLimits

0xd990,	// (0x0003992d) popup_call2_audio_out_window_t2

0xd9e4,	// (0x00039981) popup_call2_audio_out_window_t3_ParamLimits

0xd9e4,	// (0x00039981) popup_call2_audio_out_window_t3

0xd9fa,	// (0x00039997) popup_call2_audio_out_window_t4_ParamLimits

0xd9fa,	// (0x00039997) popup_call2_audio_out_window_t4

0xda10,	// (0x000399ad) popup_call2_audio_out_window_t5_ParamLimits

0xda10,	// (0x000399ad) popup_call2_audio_out_window_t5

0x0005,

0xf483,	// (0x0003b420) popup_call2_audio_out_window_t_ParamLimits

0xf483,	// (0x0003b420) popup_call2_audio_out_window_t

0xda74,	// (0x00039a11) bg_popup_call2_in_pane_ParamLimits

0xda74,	// (0x00039a11) bg_popup_call2_in_pane

0xdad0,	// (0x00039a6d) popup_call2_audio_in_window_g1_ParamLimits

0xdad0,	// (0x00039a6d) popup_call2_audio_in_window_g1

0xdb08,	// (0x00039aa5) popup_call2_audio_in_window_g2_ParamLimits

0xdb08,	// (0x00039aa5) popup_call2_audio_in_window_g2

0xdb40,	// (0x00039add) popup_call2_audio_in_window_g3_ParamLimits

0xdb40,	// (0x00039add) popup_call2_audio_in_window_g3

0x0003,

0xf490,	// (0x0003b42d) popup_call2_audio_in_window_g_ParamLimits

0xf490,	// (0x0003b42d) popup_call2_audio_in_window_g

0xdb98,	// (0x00039b35) popup_call2_audio_in_window_t1_ParamLimits

0xdb98,	// (0x00039b35) popup_call2_audio_in_window_t1

0xdc18,	// (0x00039bb5) popup_call2_audio_in_window_t2_ParamLimits

0xdc18,	// (0x00039bb5) popup_call2_audio_in_window_t2

0xdc98,	// (0x00039c35) popup_call2_audio_in_window_t3_ParamLimits

0xdc98,	// (0x00039c35) popup_call2_audio_in_window_t3

0xdcb2,	// (0x00039c4f) popup_call2_audio_in_window_t4_ParamLimits

0xdcb2,	// (0x00039c4f) popup_call2_audio_in_window_t4

0xdcc4,	// (0x00039c61) popup_call2_audio_in_window_t5_ParamLimits

0xdcc4,	// (0x00039c61) popup_call2_audio_in_window_t5

0xdcd9,	// (0x00039c76) popup_call2_audio_in_window_t6_ParamLimits

0xdcd9,	// (0x00039c76) popup_call2_audio_in_window_t6

0x0005,

0xf499,	// (0x0003b436) popup_call2_audio_in_window_t_ParamLimits

0xf499,	// (0x0003b436) popup_call2_audio_in_window_t

0xbf76,	// (0x00037f13) bg_popup_call2_in_pane_g1

0xddfa,	// (0x00039d97) popup_cale_lunar_info_window_t4

0x0003,

0xf4fc,	// (0x0003b499) popup_cale_lunar_info_window_t

0xbf7e,	// (0x00037f1b) bg_popup_call2_rect_pane_ParamLimits

0xbf7e,	// (0x00037f1b) bg_popup_call2_rect_pane

0xb551,	// (0x000374ee) call2_cli_visual_graphic_pane

0xb551,	// (0x000374ee) call2_cli_visual_text_pane

0xb882,	// (0x0003781f) smil_status_volume_pane_g3

0x0002,

0xbf96,	// (0x00037f33) call2_cli_visual_graphic_pane_g1

0xbf96,	// (0x00037f33) call2_cli_visual_graphic_pane_g2

0xbf96,	// (0x00037f33) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4a6,	// (0x0003b443) call2_cli_visual_graphic_pane_g

0xdcee,	// (0x00039c8b) bg_popup_call2_rect_pane_g1

0xc183,	// (0x00038120) bg_popup_call2_rect_pane_g2

0xdcf6,	// (0x00039c93) bg_popup_call2_rect_pane_g3

0xdcfe,	// (0x00039c9b) bg_popup_call2_rect_pane_g4

0xdd06,	// (0x00039ca3) bg_popup_call2_rect_pane_g5

0xdd0e,	// (0x00039cab) bg_popup_call2_rect_pane_g6

0xdd16,	// (0x00039cb3) bg_popup_call2_rect_pane_g7

0xdd1e,	// (0x00039cbb) bg_popup_call2_rect_pane_g8

0xdd26,	// (0x00039cc3) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ad,	// (0x0003b44a) bg_popup_call2_rect_pane_g

0xdd2e,	// (0x00039ccb) bg_popup_call2_bubble_pane_g1

0xdd36,	// (0x00039cd3) bg_popup_call2_bubble_pane_g2

0xdd3e,	// (0x00039cdb) bg_popup_call2_bubble_pane_g3

0xdd46,	// (0x00039ce3) bg_popup_call2_bubble_pane_g4

0xdd4e,	// (0x00039ceb) bg_popup_call2_bubble_pane_g5

0xdd56,	// (0x00039cf3) bg_popup_call2_bubble_pane_g6

0xdd5e,	// (0x00039cfb) bg_popup_call2_bubble_pane_g7

0xdd66,	// (0x00039d03) bg_popup_call2_bubble_pane_g8

0xdd6e,	// (0x00039d0b) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c0,	// (0x0003b45d) bg_popup_call2_bubble_pane_g

0x1727,	// (0x0002d6c4) aid_cale_week_size_cell_pane

0x1c7d,	// (0x0002dc1a) aid_cams_cif_uncrop_pane_ParamLimits

0x1c7d,	// (0x0002dc1a) aid_cams_cif_uncrop_pane

0xbfa0,	// (0x00037f3d) aid_cams_size_cell_ParamLimits

0xbfa0,	// (0x00037f3d) aid_cams_size_cell

0xbfa0,	// (0x00037f3d) grid_cams_pane_ParamLimits

0xbfa0,	// (0x00037f3d) linegrid_cams_pane_ParamLimits

0x1e90,	// (0x0002de2d) call_video_pane_t1

0x1eaa,	// (0x0002de47) call_video_pane_t2

0x0001,

0xf1dd,	// (0x0003b17a) call_video_pane_t

0x22e2,	// (0x0002e27f) aid_cale_month_size_cell_pane_ParamLimits

0x22e2,	// (0x0002e27f) aid_cale_month_size_cell_pane

0xf540,	// (0x0003b4dd) smil_status_volume_pane_g

0xb88f,	// (0x0003782c) volume_smil_pane_ParamLimits

0xb08e,	// (0x0003702b) aid_popup2_width_pane

0x1688,	// (0x0002d625) cell_qdial_pane_g4_ParamLimits

0x1688,	// (0x0002d625) cell_qdial_pane_g4

0x31b9,	// (0x0002f156) aid_blid_cardinal_pane_ParamLimits

0x31c5,	// (0x0002f162) aid_blid_destination_pane_ParamLimits

0x31c5,	// (0x0002f162) aid_blid_destination_pane

0xbf7e,	// (0x00037f1b) bg_popup_call_poc_act_pane_ParamLimits

0xbf7e,	// (0x00037f1b) bg_popup_call_poc_act_pane

0xbf7e,	// (0x00037f1b) bg_popup_call_poc_inact_pane_ParamLimits

0xbf7e,	// (0x00037f1b) bg_popup_call_poc_inact_pane

0xdd76,	// (0x00039d13) bg_popup_call_poc_act_pane_g1

0xdd7e,	// (0x00039d1b) bg_popup_call_poc_act_pane_g2

0xdd86,	// (0x00039d23) bg_popup_call_poc_act_pane_g3

0xdd46,	// (0x00039ce3) bg_popup_call_poc_act_pane_g4

0xdd4e,	// (0x00039ceb) bg_popup_call_poc_act_pane_g5

0xdd8e,	// (0x00039d2b) bg_popup_call_poc_act_pane_g6

0xdd5e,	// (0x00039cfb) bg_popup_call_poc_act_pane_g7

0xdd96,	// (0x00039d33) bg_popup_call_poc_act_pane_g8

0xb551,	// (0x000374ee) main_usb_pane

0xb832,	// (0x000377cf) popup_cale_lunar_info_window

0x2177,	// (0x0002e114) im_reading_pane_t1_ParamLimits

0xc31d,	// (0x000382ba) list_im_pane_ParamLimits

0xc32e,	// (0x000382cb) scroll_pane_cp07_ParamLimits

0xb551,	// (0x000374ee) grid_highlight_pane_cp012

0xbf7e,	// (0x00037f1b) mup_scale_pane_ParamLimits

0xc007,	// (0x00037fa4) main_usb_pane_g1_ParamLimits

0xc007,	// (0x00037fa4) main_usb_pane_g1

0xc007,	// (0x00037fa4) main_usb_pane_g2_ParamLimits

0xc007,	// (0x00037fa4) main_usb_pane_g2

0x0001,

0xf1bc,	// (0x0003b159) main_usb_pane_g_ParamLimits

0xf1bc,	// (0x0003b159) main_usb_pane_g

0xc04f,	// (0x00037fec) main_usb_pane_t1_ParamLimits

0xc04f,	// (0x00037fec) main_usb_pane_t1

0xc04f,	// (0x00037fec) main_usb_pane_t2_ParamLimits

0xc04f,	// (0x00037fec) main_usb_pane_t2

0xc04f,	// (0x00037fec) main_usb_pane_t3_ParamLimits

0xc04f,	// (0x00037fec) main_usb_pane_t3

0xc04f,	// (0x00037fec) main_usb_pane_t4_ParamLimits

0xc04f,	// (0x00037fec) main_usb_pane_t4

0xc04f,	// (0x00037fec) main_usb_pane_t5_ParamLimits

0xc04f,	// (0x00037fec) main_usb_pane_t5

0xc04f,	// (0x00037fec) main_usb_pane_t6_ParamLimits

0xc04f,	// (0x00037fec) main_usb_pane_t6

0x0005,

0xf4ea,	// (0x0003b487) main_usb_pane_t_ParamLimits

0x3158,	// (0x0002f0f5) aid_text_placing

0x3163,	// (0x0002f100) main_location2_pane_t1_ParamLimits

0x3179,	// (0x0002f116) main_location2_pane_t2_ParamLimits

0x318f,	// (0x0002f12c) main_location2_pane_t3_ParamLimits

0x31a5,	// (0x0002f142) main_location2_pane_t4_ParamLimits

0x31a5,	// (0x0002f142) main_location2_pane_t4

0xf319,	// (0x0003b2b6) main_location2_pane_t_ParamLimits

0xbfba,	// (0x00037f57) find_pinb_pane_g2_ParamLimits

0xbfba,	// (0x00037f57) find_pinb_pane_g2

0x0001,

0xf095,	// (0x0003b032) find_pinb_pane_g_ParamLimits

0xf095,	// (0x0003b032) find_pinb_pane_g

0xbfc6,	// (0x00037f63) find_pinb_pane_t1_ParamLimits

0xbfd8,	// (0x00037f75) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x0003b037) find_pinb_pane_t_ParamLimits

0xb551,	// (0x000374ee) main_call3_pane

0x28e7,	// (0x0002e884) cale_month_day_heading_pane_t1_ParamLimits

0x296d,	// (0x0002e90a) cale_month_day_heading_pane_t2_ParamLimits

0x29e6,	// (0x0002e983) cale_month_day_heading_pane_t3_ParamLimits

0x2a5f,	// (0x0002e9fc) cale_month_day_heading_pane_t4_ParamLimits

0x2ae0,	// (0x0002ea7d) cale_month_day_heading_pane_t5_ParamLimits

0x2b69,	// (0x0002eb06) cale_month_day_heading_pane_t6_ParamLimits

0x2bfa,	// (0x0002eb97) cale_month_day_heading_pane_t7_ParamLimits

0xf215,	// (0x0003b1b2) cale_month_day_heading_pane_t_ParamLimits

0xc587,	// (0x00038524) smil_status_volume_pane

0x3810,	// (0x0002f7ad) postcard_address_pane_ParamLimits

0x3810,	// (0x0002f7ad) postcard_address_pane

0x3826,	// (0x0002f7c3) postcard_message_pane_ParamLimits

0x3826,	// (0x0002f7c3) postcard_message_pane

0x3d74,	// (0x0002fd11) call2_cli_visual_pane_t1_ParamLimits

0x3d74,	// (0x0002fd11) call2_cli_visual_pane_t1

0xdf0f,	// (0x00039eac) postcard_message_pane_t1_ParamLimits

0xdf0f,	// (0x00039eac) postcard_message_pane_t1

0xdef7,	// (0x00039e94) postcard_address_pane_t1_ParamLimits

0xdef7,	// (0x00039e94) postcard_address_pane_t1

0x41da,	// (0x00030177) popup_call3_audio_in_window_ParamLimits

0x41da,	// (0x00030177) popup_call3_audio_in_window

0x405f,	// (0x0002fffc) bg_popup_call3_in_pane_ParamLimits

0x405f,	// (0x0002fffc) bg_popup_call3_in_pane

0x40db,	// (0x00030078) popup_call3_audio_in_window_g1_ParamLimits

0x40db,	// (0x00030078) popup_call3_audio_in_window_g1

0x40fb,	// (0x00030098) popup_call3_audio_in_window_g2_ParamLimits

0x40fb,	// (0x00030098) popup_call3_audio_in_window_g2

0x411b,	// (0x000300b8) popup_call3_audio_in_window_g3_ParamLimits

0x411b,	// (0x000300b8) popup_call3_audio_in_window_g3

0x0003,

0xf547,	// (0x0003b4e4) popup_call3_audio_in_window_g_ParamLimits

0xf547,	// (0x0003b4e4) popup_call3_audio_in_window_g

0x414c,	// (0x000300e9) popup_call3_audio_in_window_t1_ParamLimits

0x414c,	// (0x000300e9) popup_call3_audio_in_window_t1

0x418a,	// (0x00030127) popup_call3_audio_in_window_t2_ParamLimits

0x418a,	// (0x00030127) popup_call3_audio_in_window_t2

0x41c8,	// (0x00030165) popup_call3_audio_in_window_t3_ParamLimits

0x41c8,	// (0x00030165) popup_call3_audio_in_window_t3

0x0002,

0xf550,	// (0x0003b4ed) popup_call3_audio_in_window_t_ParamLimits

0xf550,	// (0x0003b4ed) popup_call3_audio_in_window_t

0xc258,	// (0x000381f5) bg_popup_call3_rect_pane

0xdcee,	// (0x00039c8b) bg_popup_call3_rect_pane_g1

0xc183,	// (0x00038120) bg_popup_call3_rect_pane_g2

0xdcf6,	// (0x00039c93) bg_popup_call3_rect_pane_g3

0xdcfe,	// (0x00039c9b) bg_popup_call3_rect_pane_g4

0xdd06,	// (0x00039ca3) bg_popup_call3_rect_pane_g5

0xdd0e,	// (0x00039cab) bg_popup_call3_rect_pane_g6

0xdd16,	// (0x00039cb3) bg_popup_call3_rect_pane_g7

0xb07c,	// (0x00037019) mup_visualizer_osc_pane

0xb07c,	// (0x00037019) mup_visualizer_spec_pane

0x408f,	// (0x0003002c) call3_video_qcif_pane_ParamLimits

0x408f,	// (0x0003002c) call3_video_qcif_pane

0x40a2,	// (0x0003003f) call3_video_qcif_uncrop_pane_ParamLimits

0x40a2,	// (0x0003003f) call3_video_qcif_uncrop_pane

0x40b2,	// (0x0003004f) call3_video_subqcif_pane_ParamLimits

0x40b2,	// (0x0003004f) call3_video_subqcif_pane

0x40c8,	// (0x00030065) call3_video_subqcif_uncrop_pane_ParamLimits

0x40c8,	// (0x00030065) call3_video_subqcif_uncrop_pane

0x413b,	// (0x000300d8) popup_call3_audio_in_window_g4_ParamLimits

0x413b,	// (0x000300d8) popup_call3_audio_in_window_g4

0xb07c,	// (0x00037019) mup_spec_half_pane

0xb07c,	// (0x00037019) mup_spec_half_pane_cp

0xb07c,	// (0x00037019) mup_osc_middle_pane

0xc045,	// (0x00037fe2) mup_visualizer_osc_pane_g1

0xdeaa,	// (0x00039e47) mup_spec_bar_pane_ParamLimits

0xdeaa,	// (0x00039e47) mup_spec_bar_pane

0xc045,	// (0x00037fe2) mup_spec_bar_pane_g1

0xc045,	// (0x00037fe2) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x0003b04c) mup_spec_bar_pane_g

0x1727,	// (0x0002d6c4) aid_cale_week_size_cell_pane_ParamLimits

0x1741,	// (0x0002d6de) bg_cale_heading_pane_ParamLimits

0x1765,	// (0x0002d702) bg_cale_pane_cp01_ParamLimits

0x1782,	// (0x0002d71f) cale_week_corner_pane_ParamLimits

0x17a1,	// (0x0002d73e) cale_week_day_heading_pane_ParamLimits

0x17ca,	// (0x0002d767) cale_week_scroll_pane_g1_ParamLimits

0x17e9,	// (0x0002d786) cale_week_scroll_pane_g2_ParamLimits

0x1801,	// (0x0002d79e) cale_week_scroll_pane_g3_ParamLimits

0x1819,	// (0x0002d7b6) cale_week_scroll_pane_g4_ParamLimits

0x1831,	// (0x0002d7ce) cale_week_scroll_pane_g5_ParamLimits

0x1851,	// (0x0002d7ee) cale_week_scroll_pane_g6_ParamLimits

0x1871,	// (0x0002d80e) cale_week_scroll_pane_g7_ParamLimits

0x1895,	// (0x0002d832) cale_week_scroll_pane_g8_ParamLimits

0x18b9,	// (0x0002d856) cale_week_scroll_pane_g9_ParamLimits

0x18d1,	// (0x0002d86e) cale_week_scroll_pane_g10_ParamLimits

0x18e9,	// (0x0002d886) cale_week_scroll_pane_g11_ParamLimits

0x1901,	// (0x0002d89e) cale_week_scroll_pane_g12_ParamLimits

0x1925,	// (0x0002d8c2) cale_week_scroll_pane_g13_ParamLimits

0x1925,	// (0x0002d8c2) cale_week_scroll_pane_g14_ParamLimits

0x1925,	// (0x0002d8c2) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x0003b0c3) cale_week_scroll_pane_g_ParamLimits

0x196d,	// (0x0002d90a) cale_week_time_pane_ParamLimits

0x1991,	// (0x0002d92e) grid_cale_week_pane_ParamLimits

0xc1ce,	// (0x0003816b) listscroll_cale_week_pane_t1

0xc1e0,	// (0x0003817d) scroll_pane_cp08_ParamLimits

0x235a,	// (0x0002e2f7) cale_month_corner_pane_ParamLimits

0xc55d,	// (0x000384fa) cale_month_pane_t1

0x2862,	// (0x0002e7ff) cale_month_week_pane_ParamLimits

0x2f98,	// (0x0002ef35) popup_call_status_window_g1_ParamLimits

0x2fac,	// (0x0002ef49) popup_call_status_window_g2_ParamLimits

0x2fc0,	// (0x0002ef5d) popup_call_status_window_g3_ParamLimits

0xf2a0,	// (0x0003b23d) popup_call_status_window_g_ParamLimits

0xc935,	// (0x000388d2) aid_call2_pane

0x365c,	// (0x0002f5f9) msg_header_pane_g1

0x3810,	// (0x0002f7ad) postcard_address2_pane_ParamLimits

0x3810,	// (0x0002f7ad) postcard_address2_pane

0x3826,	// (0x0002f7c3) postcard_message2_pane_ParamLimits

0x3826,	// (0x0002f7c3) postcard_message2_pane

0x402c,	// (0x0002ffc9) message2_row_pane_ParamLimits

0x402c,	// (0x0002ffc9) message2_row_pane

0x404c,	// (0x0002ffe9) address2_row_pane_ParamLimits

0x404c,	// (0x0002ffe9) address2_row_pane

0xde77,	// (0x00039e14) postcard_message2_row_pane_g1

0xde7f,	// (0x00039e1c) postcard_message2_row_pane_t1

0xde77,	// (0x00039e14) address2_row_pane_g1

0xde7f,	// (0x00039e1c) address2_row_pane_t1

0x1c10,	// (0x0002dbad) aid_size_cell_vorec

0xb551,	// (0x000374ee) main_rss_pane

0xde8d,	// (0x00039e2a) rss_list_single_pane_ParamLimits

0xde8d,	// (0x00039e2a) rss_list_single_pane

0xde9b,	// (0x00039e38) rss_list_single_pane_t1

0xde9b,	// (0x00039e38) rss_list_single_pane_t2

0x0001,

0xf53b,	// (0x0003b4d8) rss_list_single_pane_t

0xb551,	// (0x000374ee) main_camera2_pane

0xb551,	// (0x000374ee) main_video2_pane

0xb8a4,	// (0x00037841) cams_zoom_pane_cp2_ParamLimits

0xb8a4,	// (0x00037841) cams_zoom_pane_cp2

0xb8a4,	// (0x00037841) image2_vga_pane_ParamLimits

0xb8a4,	// (0x00037841) image2_vga_pane

0xb8b2,	// (0x0003784f) main_camera2_pane_g1_ParamLimits

0xb8b2,	// (0x0003784f) main_camera2_pane_g1

0xb8b2,	// (0x0003784f) main_camera2_pane_g2_ParamLimits

0xb8b2,	// (0x0003784f) main_camera2_pane_g2

0xb8b2,	// (0x0003784f) main_camera2_pane_g3_ParamLimits

0xb8b2,	// (0x0003784f) main_camera2_pane_g3

0xb8b2,	// (0x0003784f) main_camera2_pane_g4_ParamLimits

0xb8b2,	// (0x0003784f) main_camera2_pane_g4

0xb8b2,	// (0x0003784f) main_camera2_pane_g5_ParamLimits

0xb8b2,	// (0x0003784f) main_camera2_pane_g5

0xb8b2,	// (0x0003784f) main_camera2_pane_g6_ParamLimits

0xb8b2,	// (0x0003784f) main_camera2_pane_g6

0xb8b2,	// (0x0003784f) main_camera2_pane_g7_ParamLimits

0xb8b2,	// (0x0003784f) main_camera2_pane_g7

0xb8b2,	// (0x0003784f) main_camera2_pane_g8_ParamLimits

0xb8b2,	// (0x0003784f) main_camera2_pane_g8

0x0008,

0xf557,	// (0x0003b4f4) main_camera2_pane_g_ParamLimits

0xf557,	// (0x0003b4f4) main_camera2_pane_g

0x0875,	// (0x0002c812) main_camera2_pane_t1_ParamLimits

0x0875,	// (0x0002c812) main_camera2_pane_t1

0x0875,	// (0x0002c812) main_camera2_pane_t2_ParamLimits

0x0875,	// (0x0002c812) main_camera2_pane_t2

0x0875,	// (0x0002c812) main_camera2_pane_t3_ParamLimits

0x0875,	// (0x0002c812) main_camera2_pane_t3

0x0875,	// (0x0002c812) main_camera2_pane_t4_ParamLimits

0x0875,	// (0x0002c812) main_camera2_pane_t4

0x0006,

0xf56a,	// (0x0003b507) main_camera2_pane_t_ParamLimits

0xf56a,	// (0x0003b507) main_camera2_pane_t

0xb8f6,	// (0x00037893) cams_zoom_pane_cp4_ParamLimits

0xb8f6,	// (0x00037893) cams_zoom_pane_cp4

0x0889,	// (0x0002c826) image2_cif_pane_ParamLimits

0x0889,	// (0x0002c826) image2_cif_pane

0xb0f1,	// (0x0003708e) image2_subqcif_pane_ParamLimits

0xb0f1,	// (0x0003708e) image2_subqcif_pane

0x0897,	// (0x0002c834) main_video2_pane_g1_ParamLimits

0x0897,	// (0x0002c834) main_video2_pane_g1

0x0897,	// (0x0002c834) main_video2_pane_g2_ParamLimits

0x0897,	// (0x0002c834) main_video2_pane_g2

0x0897,	// (0x0002c834) main_video2_pane_g3_ParamLimits

0x0897,	// (0x0002c834) main_video2_pane_g3

0x0897,	// (0x0002c834) main_video2_pane_g4_ParamLimits

0x0897,	// (0x0002c834) main_video2_pane_g4

0x0897,	// (0x0002c834) main_video2_pane_g5_ParamLimits

0x0897,	// (0x0002c834) main_video2_pane_g5

0x0897,	// (0x0002c834) main_video2_pane_g6_ParamLimits

0x0897,	// (0x0002c834) main_video2_pane_g6

0x0005,

0xf579,	// (0x0003b516) main_video2_pane_g_ParamLimits

0xf579,	// (0x0003b516) main_video2_pane_g

0x08a5,	// (0x0002c842) main_video2_pane_t1_ParamLimits

0x08a5,	// (0x0002c842) main_video2_pane_t1

0x08a5,	// (0x0002c842) main_video2_pane_t2_ParamLimits

0x08a5,	// (0x0002c842) main_video2_pane_t2

0x08a5,	// (0x0002c842) main_video2_pane_t3_ParamLimits

0x08a5,	// (0x0002c842) main_video2_pane_t3

0x0002,

0xf586,	// (0x0003b523) main_video2_pane_t_ParamLimits

0xf586,	// (0x0003b523) main_video2_pane_t

0x3e1f,	// (0x0002fdbc) call_muted_g2

0x0001,

0xf52d,	// (0x0003b4ca) call_muted_g

0xb551,	// (0x000374ee) main_mup2_pane

0xcc3e,	// (0x00038bdb) main_mup2_pane_g1_ParamLimits

0xcc3e,	// (0x00038bdb) main_mup2_pane_g1

0xcc3e,	// (0x00038bdb) main_mup2_pane_g2_ParamLimits

0xcc3e,	// (0x00038bdb) main_mup2_pane_g2

0x429b,	// (0x00030238) main_mup_pane_g13_cp1

0xb0ff,	// (0x0003709c) mup_volume_pane_cp1

0xcc3e,	// (0x00038bdb) main_mup2_pane_g4_ParamLimits

0xcc3e,	// (0x00038bdb) main_mup2_pane_g4

0xcc3e,	// (0x00038bdb) main_mup2_pane_g5_ParamLimits

0xcc3e,	// (0x00038bdb) main_mup2_pane_g5

0xcc3e,	// (0x00038bdb) main_mup2_pane_g6_ParamLimits

0xcc3e,	// (0x00038bdb) main_mup2_pane_g6

0xcc3e,	// (0x00038bdb) main_mup2_pane_g7_ParamLimits

0xcc3e,	// (0x00038bdb) main_mup2_pane_g7

0x0006,

0xf58d,	// (0x0003b52a) main_mup2_pane_g_ParamLimits

0xf58d,	// (0x0003b52a) main_mup2_pane_g

0xcc4c,	// (0x00038be9) main_mup2_pane_t1_ParamLimits

0xcc4c,	// (0x00038be9) main_mup2_pane_t1

0xcc4c,	// (0x00038be9) main_mup2_pane_t2_ParamLimits

0xcc4c,	// (0x00038be9) main_mup2_pane_t2

0xcc4c,	// (0x00038be9) main_mup2_pane_t3_ParamLimits

0xcc4c,	// (0x00038be9) main_mup2_pane_t3

0xcc4c,	// (0x00038be9) main_mup2_pane_t4_ParamLimits

0xcc4c,	// (0x00038be9) main_mup2_pane_t4

0xcc4c,	// (0x00038be9) main_mup2_pane_t5_ParamLimits

0xcc4c,	// (0x00038be9) main_mup2_pane_t5

0xcc4c,	// (0x00038be9) main_mup2_pane_t6_ParamLimits

0xcc4c,	// (0x00038be9) main_mup2_pane_t6

0x0005,

0xf59c,	// (0x0003b539) main_mup2_pane_t_ParamLimits

0xf59c,	// (0x0003b539) main_mup2_pane_t

0xcc60,	// (0x00038bfd) mup2_visualizer_pane_ParamLimits

0xcc60,	// (0x00038bfd) mup2_visualizer_pane

0xcc60,	// (0x00038bfd) mup_progress_pane_cp_ParamLimits

0xcc60,	// (0x00038bfd) mup_progress_pane_cp

0xb91a,	// (0x000378b7) mup_volume_pane_cp_ParamLimits

0xb91a,	// (0x000378b7) mup_volume_pane_cp

0xc007,	// (0x00037fa4) mup2_visualizer_pane_g1_ParamLimits

0xc007,	// (0x00037fa4) mup2_visualizer_pane_g1

0xc015,	// (0x00037fb2) mup2_visualizer_pane_g2_ParamLimits

0xc015,	// (0x00037fb2) mup2_visualizer_pane_g2

0xc015,	// (0x00037fb2) mup2_visualizer_pane_g3_ParamLimits

0xc015,	// (0x00037fb2) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x0003b03c) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x0003b03c) mup2_visualizer_pane_g

0xb07c,	// (0x00037019) aid_size_cell_fmradio

0x0565,	// (0x0002c502) aid_height_parent_landcape

0xc3bb,	// (0x00038358) wml_content_pane_cp

0xc3c3,	// (0x00038360) wml_tabs_pane

0xc3cc,	// (0x00038369) popup_wml_miniature_window

0xc3d4,	// (0x00038371) scroll_pane_cp021

0xc3e8,	// (0x00038385) wml_content_pane_comp8

0xb551,	// (0x000374ee) bg_popup_sub_pane_cp05

0xdf41,	// (0x00039ede) popup_wml_miniature_window_g1

0xdf49,	// (0x00039ee6) wml_miniature_view_pane

0x41ee,	// (0x0003018b) aid_size_wml_view

0x41f6,	// (0x00030193) wml_miniature_view_pane_g1

0x41ff,	// (0x0003019c) wml_miniature_view_pane_g2

0x4208,	// (0x000301a5) wml_miniature_view_pane_g3

0x4210,	// (0x000301ad) wml_miniature_view_pane_g4

0x4218,	// (0x000301b5) wml_miniature_view_pane_g5

0x4220,	// (0x000301bd) wml_miniature_view_pane_g6

0x4228,	// (0x000301c5) wml_miniature_view_pane_g7

0x4230,	// (0x000301cd) wml_miniature_view_pane_g8

0x0007,

0xf5a9,	// (0x0003b546) wml_miniature_view_pane_g

0xdf51,	// (0x00039eee) background_graphic_ParamLimits

0xdf51,	// (0x00039eee) background_graphic

0xdf5d,	// (0x00039efa) wml_tabs_2_pane

0xdf66,	// (0x00039f03) wml_tabs_3_pane_ParamLimits

0xdf66,	// (0x00039f03) wml_tabs_3_pane

0xdf78,	// (0x00039f15) wml_tabs_4_pane_ParamLimits

0xdf78,	// (0x00039f15) wml_tabs_4_pane

0xdf8e,	// (0x00039f2b) wml_tabs_5_pane_ParamLimits

0xdf8e,	// (0x00039f2b) wml_tabs_5_pane

0xdfa8,	// (0x00039f45) wml_tabs_pane_g2_ParamLimits

0xdfa8,	// (0x00039f45) wml_tabs_pane_g2

0xdfbd,	// (0x00039f5a) wml_tabs_pane_g3_ParamLimits

0xdfbd,	// (0x00039f5a) wml_tabs_pane_g3

0xdfd2,	// (0x00039f6f) wml_tabs_2_active_pane_ParamLimits

0xdfd2,	// (0x00039f6f) wml_tabs_2_active_pane

0xdfd2,	// (0x00039f6f) wml_tabs_2_passive_pane_ParamLimits

0xdfd2,	// (0x00039f6f) wml_tabs_2_passive_pane

0x4238,	// (0x000301d5) wml_tabs_3_active_pane_cp_ParamLimits

0x4238,	// (0x000301d5) wml_tabs_3_active_pane_cp

0x424d,	// (0x000301ea) wml_tabs_3_passive_pane_ParamLimits

0x424d,	// (0x000301ea) wml_tabs_3_passive_pane

0x4260,	// (0x000301fd) wml_tabs_3_passive_pane_cp_ParamLimits

0x4260,	// (0x000301fd) wml_tabs_3_passive_pane_cp

0x4277,	// (0x00030214) tabs_4_active_pane

0x427f,	// (0x0003021c) tabs_4_passive_pane

0x4289,	// (0x00030226) tabs_4_passive_pane_cp

0x4291,	// (0x0003022e) tabs_4_passive_pane_cp2

0x3d93,	// (0x0002fd30) aid_height_text

0xcc60,	// (0x00038bfd) mup_volume_cont_pane_ParamLimits

0xcc60,	// (0x00038bfd) mup_volume_cont_pane

0xb07c,	// (0x00037019) aid_size_cell_pinb

0xb07c,	// (0x00037019) aid_size_list_pinb

0xcc60,	// (0x00038bfd) mup2_volume_cont_pane_ParamLimits

0xcc60,	// (0x00038bfd) mup2_volume_cont_pane

0xb904,	// (0x000378a1) mup2_volume_cont_pane_g1_ParamLimits

0xb904,	// (0x000378a1) mup2_volume_cont_pane_g1

0x0091,	// (0x0002c02e) aid_size_cell_touch_ParamLimits

0x0091,	// (0x0002c02e) aid_size_cell_touch

0x0276,	// (0x0002c213) touch_pane_ParamLimits

0x0276,	// (0x0002c213) touch_pane

0xb0ff,	// (0x0003709c) main_rss2_pane

0xdfe9,	// (0x00039f86) listscroll_rss2_pane

0xdff2,	// (0x00039f8f) rss2_navigation_pane

0xdffa,	// (0x00039f97) list_rss2_pane

0xca4d,	// (0x000389ea) scroll_pane_cp22

0xe002,	// (0x00039f9f) rss2_navigation_pane_g1

0xe00b,	// (0x00039fa8) rss2_navigation_pane_g2

0xe013,	// (0x00039fb0) rss2_navigation_pane_g3

0x0002,

0xf5ba,	// (0x0003b557) rss2_navigation_pane_g

0xe01b,	// (0x00039fb8) rss2_navigation_pane_t1

0x42a5,	// (0x00030242) rss2_list_single_pane_ParamLimits

0x42a5,	// (0x00030242) rss2_list_single_pane

0xe029,	// (0x00039fc6) rss2_list_single_pane_t2

0xe037,	// (0x00039fd4) rss2_list_single_pane_t3_ParamLimits

0xe037,	// (0x00039fd4) rss2_list_single_pane_t3

0xe054,	// (0x00039ff1) rss2_list_single_pane_t4

0x2e76,	// (0x0002ee13) smil_status_pane_g1

0xb0f1,	// (0x0003708e) main_image2_pane_ParamLimits

0xb0f1,	// (0x0003708e) main_image2_pane

0xb8b2,	// (0x0003784f) main_camera2_pane_g9_ParamLimits

0xb8b2,	// (0x0003784f) main_camera2_pane_g9

0x0875,	// (0x0002c812) main_camera2_pane_t5_ParamLimits

0x0875,	// (0x0002c812) main_camera2_pane_t5

0xb8c0,	// (0x0003785d) main_camera2_pane_t6_ParamLimits

0xb8c0,	// (0x0003785d) main_camera2_pane_t6

0x42bc,	// (0x00030259) main_image2_pane_g1_ParamLimits

0x42bc,	// (0x00030259) main_image2_pane_g1

0x3a42,	// (0x0002f9df) smil2_video_pane_ParamLimits

0x3a42,	// (0x0002f9df) smil2_video_pane

0xb09a,	// (0x00037037) aid_zoom_text_primary_cp

0xb0e7,	// (0x00037084) popup_preview_fixed_window

0xc315,	// (0x000382b2) im_reading_pane_g1

0x0867,	// (0x0002c804) cams2_bc_adjust_pane_cp_ParamLimits

0x0867,	// (0x0002c804) cams2_bc_adjust_pane_cp

0xb8e8,	// (0x00037885) cams2_bc_adjust_pane_ParamLimits

0xb8e8,	// (0x00037885) cams2_bc_adjust_pane

0x429b,	// (0x00030238) cams2_bc_adjust_pane_g1

0xb0ff,	// (0x0003709c) cams2_slider_pane

0x429b,	// (0x00030238) cams2_slider_pane_g1

0x429b,	// (0x00030238) cams2_slider_pane_g2

0x0006,

0xf5c1,	// (0x0003b55e) cams2_slider_pane_g

0x02e8,	// (0x0002c285) calc_display_pane_ParamLimits

0x030d,	// (0x0002c2aa) calc_paper_pane_ParamLimits

0x0330,	// (0x0002c2cd) grid_calc_pane_ParamLimits

0xb7b9,	// (0x00037756) popup_clock_digital_window_t1_ParamLimits

0xce18,	// (0x00038db5) main_image_pane_t1

0x02c8,	// (0x0002c265) aid_size_cell_calc_ParamLimits

0x02c8,	// (0x0002c265) aid_size_cell_calc

0x05bb,	// (0x0002c558) popup_blid_sat_info2_window_ParamLimits

0x05bb,	// (0x0002c558) popup_blid_sat_info2_window

0xe062,	// (0x00039fff) aid_size_cell_blid

0xe06a,	// (0x0003a007) bg_popup_window_pane_cp07

0xe08d,	// (0x0003a02a) grid_popup_blid_pane

0xe097,	// (0x0003a034) heading_pane_cp05_ParamLimits

0xe097,	// (0x0003a034) heading_pane_cp05

0xe161,	// (0x0003a0fe) cell_popup_blid_pane_ParamLimits

0xe161,	// (0x0003a0fe) cell_popup_blid_pane

0xe18b,	// (0x0003a128) cell_popup_blid_pane_g1

0xe193,	// (0x0003a130) cell_popup_blid_pane_t1

0xcc60,	// (0x00038bfd) mup2_indicator_pane_ParamLimits

0xcc60,	// (0x00038bfd) mup2_indicator_pane

0xb07c,	// (0x00037019) mup2_visualizer_osc_pane

0xdf2b,	// (0x00039ec8) mup2_visualizer_spec_pane_ParamLimits

0xdf2b,	// (0x00039ec8) mup2_visualizer_spec_pane

0xb07c,	// (0x00037019) mup2_spec_half_pane

0xb07c,	// (0x00037019) mup2_spec_half_pane_cp

0xe1a1,	// (0x0003a13e) mup2_spec_bar_pane_ParamLimits

0xe1a1,	// (0x0003a13e) mup2_spec_bar_pane

0xc045,	// (0x00037fe2) mup2_spec_bar_pane_g1

0xe1c0,	// (0x0003a15d) mup2_spec_bar_pane_g2

0x0001,

0xf5e7,	// (0x0003b584) mup2_spec_bar_pane_g

0xb07c,	// (0x00037019) mup2_osc_middle_pane

0xc045,	// (0x00037fe2) mup2_visualizer_osc_pane_g1

0xb129,	// (0x000370c6) popup_number_entry_window_t1_ParamLimits

0xb13c,	// (0x000370d9) popup_number_entry_window_t2_ParamLimits

0xb14e,	// (0x000370eb) popup_number_entry_window_t3_ParamLimits

0xb160,	// (0x000370fd) popup_number_entry_window_t5_ParamLimits

0xb160,	// (0x000370fd) popup_number_entry_window_t5

0xf040,	// (0x0003afdd) popup_number_entry_window_t_ParamLimits

0xb195,	// (0x00037132) text_title_cp2_ParamLimits

0xb7f8,	// (0x00037795) aid_hotspot_pointer_text2_pane

0xb81e,	// (0x000377bb) main_viewer_pane_g9_ParamLimits

0xb81e,	// (0x000377bb) main_viewer_pane_g9

0xc55d,	// (0x000384fa) cale_month_pane_t1_ParamLimits

0xc59a,	// (0x00038537) bg_cale_pane_ParamLimits

0xc5b2,	// (0x0003854f) list_cale_pane_ParamLimits

0xc5c3,	// (0x00038560) listscroll_cale_day_pane_t1

0xc5d5,	// (0x00038572) scroll_pane_cp09_ParamLimits

0x338e,	// (0x0002f32b) main_mup_eq_pane_t1_ParamLimits

0x338e,	// (0x0002f32b) main_mup_eq_pane_t1

0x33aa,	// (0x0002f347) main_mup_eq_pane_t2_ParamLimits

0x33aa,	// (0x0002f347) main_mup_eq_pane_t2

0x33c6,	// (0x0002f363) main_mup_eq_pane_t3_ParamLimits

0x33c6,	// (0x0002f363) main_mup_eq_pane_t3

0x33e4,	// (0x0002f381) main_mup_eq_pane_t4_ParamLimits

0x33e4,	// (0x0002f381) main_mup_eq_pane_t4

0x3402,	// (0x0002f39f) main_mup_eq_pane_t5_ParamLimits

0x3402,	// (0x0002f39f) main_mup_eq_pane_t5

0x3420,	// (0x0002f3bd) main_mup_eq_pane_t6_ParamLimits

0x3420,	// (0x0002f3bd) main_mup_eq_pane_t6

0x3436,	// (0x0002f3d3) main_mup_eq_pane_t7_ParamLimits

0x3436,	// (0x0002f3d3) main_mup_eq_pane_t7

0x344c,	// (0x0002f3e9) main_mup_eq_pane_t8_ParamLimits

0x344c,	// (0x0002f3e9) main_mup_eq_pane_t8

0x3462,	// (0x0002f3ff) main_mup_eq_pane_t9_ParamLimits

0x3462,	// (0x0002f3ff) main_mup_eq_pane_t9

0x347e,	// (0x0002f41b) main_mup_eq_pane_t10_ParamLimits

0x347e,	// (0x0002f41b) main_mup_eq_pane_t10

0x0009,

0xf39a,	// (0x0003b337) main_mup_eq_pane_t_ParamLimits

0xf39a,	// (0x0003b337) main_mup_eq_pane_t

0x3553,	// (0x0002f4f0) mup_equalizer_pane_cp5_ParamLimits

0x356b,	// (0x0002f508) mup_equalizer_pane_cp6_ParamLimits

0x3583,	// (0x0002f520) mup_equalizer_pane_cp7_ParamLimits

0xb0ff,	// (0x0003709c) main_gallery_pane

0xdec9,	// (0x00039e66) smil2_volume_pane

0xded1,	// (0x00039e6e) smil_status_volume_pane_g1_ParamLimits

0xdee4,	// (0x00039e81) smil_status_volume_pane_g2_ParamLimits

0xb882,	// (0x0003781f) smil_status_volume_pane_g3_ParamLimits

0xf540,	// (0x0003b4dd) smil_status_volume_pane_g_ParamLimits

0xe06a,	// (0x0003a007) bg_popup_window_pane_cp07_ParamLimits

0xe078,	// (0x0003a015) blid_firmament_pane

0xbfa0,	// (0x00037f3d) aid_size_cell_gallery_ParamLimits

0xbfa0,	// (0x00037f3d) aid_size_cell_gallery

0xbfa0,	// (0x00037f3d) grid_gallery_pane_ParamLimits

0xbfa0,	// (0x00037f3d) grid_gallery_pane

0xe06a,	// (0x0003a007) cell_gallery_pane_ParamLimits

0xe06a,	// (0x0003a007) cell_gallery_pane

0xbfa0,	// (0x00037f3d) bg_cell_gallery_focus_pane_ParamLimits

0xbfa0,	// (0x00037f3d) bg_cell_gallery_focus_pane

0xc007,	// (0x00037fa4) cell_gallery_pane_g1_ParamLimits

0xc007,	// (0x00037fa4) cell_gallery_pane_g1

0xc007,	// (0x00037fa4) cell_gallery_pane_g2_ParamLimits

0xc007,	// (0x00037fa4) cell_gallery_pane_g2

0xc007,	// (0x00037fa4) cell_gallery_pane_g3_ParamLimits

0xc007,	// (0x00037fa4) cell_gallery_pane_g3

0xc015,	// (0x00037fb2) cell_gallery_pane_g4_ParamLimits

0xc015,	// (0x00037fb2) cell_gallery_pane_g4

0x0003,

0xf5ec,	// (0x0003b589) cell_gallery_pane_g_ParamLimits

0xf5ec,	// (0x0003b589) cell_gallery_pane_g

0xe1ca,	// (0x0003a167) bg_cell_gallery_focus_pane_g1

0xe1d2,	// (0x0003a16f) bg_cell_gallery_focus_pane_g2

0xe1da,	// (0x0003a177) bg_cell_gallery_focus_pane_g3

0xe1e2,	// (0x0003a17f) bg_cell_gallery_focus_pane_g4

0xe1ea,	// (0x0003a187) bg_cell_gallery_focus_pane_g5

0xe1f2,	// (0x0003a18f) bg_cell_gallery_focus_pane_g6

0xe1fa,	// (0x0003a197) bg_cell_gallery_focus_pane_g7

0xe202,	// (0x0003a19f) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5f5,	// (0x0003b592) bg_cell_gallery_focus_pane_g

0xe20a,	// (0x0003a1a7) aid_firma_cardinal

0xe21e,	// (0x0003a1bb) blid_firmament_pane_t1

0xe235,	// (0x0003a1d2) blid_firmament_pane_t2

0xe24c,	// (0x0003a1e9) blid_firmament_pane_t3

0xe263,	// (0x0003a200) blid_firmament_pane_t4

0x0003,

0xf606,	// (0x0003b5a3) blid_firmament_pane_t

0xe27a,	// (0x0003a217) blid_sat_info_pane

0xc045,	// (0x00037fe2) blid_sat_info_pane_g1

0xc045,	// (0x00037fe2) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x0003b04c) blid_sat_info_pane_g

0xe28a,	// (0x0003a227) blid_sat_info_pane_t1

0xe298,	// (0x0003a235) smil2_volume_content_pane

0xe2a1,	// (0x0003a23e) smil2_volume_pane_g1

0xc11a,	// (0x000380b7) smil2_volume_content_pane_g1

0xe2a9,	// (0x0003a246) smil2_volume_content_pane_g2

0xe2b2,	// (0x0003a24f) smil2_volume_content_pane_g3

0xe2bb,	// (0x0003a258) smil2_volume_content_pane_g4

0xe2c4,	// (0x0003a261) smil2_volume_content_pane_g5

0xe2cd,	// (0x0003a26a) smil2_volume_content_pane_g6

0xe2d6,	// (0x0003a273) smil2_volume_content_pane_g7

0xe2df,	// (0x0003a27c) smil2_volume_content_pane_g8

0xe2e8,	// (0x0003a285) smil2_volume_content_pane_g9

0xe2f1,	// (0x0003a28e) smil2_volume_content_pane_g10

0x0009,

0xf60f,	// (0x0003b5ac) smil2_volume_content_pane_g

0x1a5f,	// (0x0002d9fc) cale_week_day_heading_pane_t1_ParamLimits

0x1a89,	// (0x0002da26) cale_week_day_heading_pane_t2_ParamLimits

0x1ab8,	// (0x0002da55) cale_week_day_heading_pane_t3_ParamLimits

0x1ae7,	// (0x0002da84) cale_week_day_heading_pane_t4_ParamLimits

0x1b16,	// (0x0002dab3) cale_week_day_heading_pane_t5_ParamLimits

0x1b49,	// (0x0002dae6) cale_week_day_heading_pane_t6_ParamLimits

0x1b80,	// (0x0002db1d) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x0003b0e4) cale_week_day_heading_pane_t_ParamLimits

0xc1fd,	// (0x0003819a) bg_cale_side_pane_ParamLimits

0x0413,	// (0x0002c3b0) cale_week_time_pane_t1_ParamLimits

0x042d,	// (0x0002c3ca) cale_week_time_pane_t2_ParamLimits

0x0447,	// (0x0002c3e4) cale_week_time_pane_t3_ParamLimits

0x0461,	// (0x0002c3fe) cale_week_time_pane_t4_ParamLimits

0x047b,	// (0x0002c418) cale_week_time_pane_t5_ParamLimits

0x0495,	// (0x0002c432) cale_week_time_pane_t6_ParamLimits

0x04b5,	// (0x0002c452) cale_week_time_pane_t7_ParamLimits

0x04db,	// (0x0002c478) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x0003b0f3) cale_week_time_pane_t_ParamLimits

0x1baa,	// (0x0002db47) cell_cale_week_pane_g2_ParamLimits

0xc1fd,	// (0x0003819a) bg_cale_side_pane_cp01_ParamLimits

0x2c8b,	// (0x0002ec28) cale_month_week_pane_t1_ParamLimits

0x2ca4,	// (0x0002ec41) cale_month_week_pane_t2_ParamLimits

0x2cbd,	// (0x0002ec5a) cale_month_week_pane_t3_ParamLimits

0x2cd6,	// (0x0002ec73) cale_month_week_pane_t4_ParamLimits

0x2cef,	// (0x0002ec8c) cale_month_week_pane_t5_ParamLimits

0x2d08,	// (0x0002eca5) cale_month_week_pane_t6_ParamLimits

0xf224,	// (0x0003b1c1) cale_month_week_pane_t_ParamLimits

0xb739,	// (0x000376d6) cell_cale_month_pane_g1_ParamLimits

0xb0ff,	// (0x0003709c) main_cale_event_viewer_pane

0xb07c,	// (0x00037019) listscroll_cale_event_viewer_pane

0xe2fa,	// (0x0003a297) list_cale_ev_pane

0xe302,	// (0x0003a29f) scroll_pane_cp023

0x42d2,	// (0x0003026f) field_cale_ev_pane_ParamLimits

0x42d2,	// (0x0003026f) field_cale_ev_pane

0xe30e,	// (0x0003a2ab) field_cale_ev_content_pane_ParamLimits

0xe30e,	// (0x0003a2ab) field_cale_ev_content_pane

0xe31a,	// (0x0003a2b7) field_cale_ev_pane_g1_ParamLimits

0xe31a,	// (0x0003a2b7) field_cale_ev_pane_g1

0xe326,	// (0x0003a2c3) field_cale_ev_pane_g2_ParamLimits

0xe326,	// (0x0003a2c3) field_cale_ev_pane_g2

0xe33e,	// (0x0003a2db) field_cale_ev_pane_g3_ParamLimits

0xe33e,	// (0x0003a2db) field_cale_ev_pane_g3

0x0002,

0xf624,	// (0x0003b5c1) field_cale_ev_pane_g_ParamLimits

0xf624,	// (0x0003b5c1) field_cale_ev_pane_g

0xe356,	// (0x0003a2f3) field_cale_ev_pane_t1_ParamLimits

0xe356,	// (0x0003a2f3) field_cale_ev_pane_t1

0x42f6,	// (0x00030293) field_cale_ev_content_pane_t1_ParamLimits

0x42f6,	// (0x00030293) field_cale_ev_content_pane_t1

0xcd05,	// (0x00038ca2) bg_button_pane_cp01

0x1717,	// (0x0002d6b4) listscroll_cale_week_pane_ParamLimits

0xc1c5,	// (0x00038162) popup_toolbar_window_cp01

0xc1ce,	// (0x0003816b) listscroll_cale_week_pane_t1_ParamLimits

0x1717,	// (0x0002d6b4) listscroll_cale_day_pane_ParamLimits

0xc1c5,	// (0x00038162) popup_toolbar_window_cp02

0xc5c3,	// (0x00038560) listscroll_cale_day_pane_t1_ParamLimits

0x0583,	// (0x0002c520) main_cale_month_pane_ParamLimits

0xb86d,	// (0x0003780a) popup_toolbar_window_cp03_ParamLimits

0xb86d,	// (0x0003780a) popup_toolbar_window_cp03

0x3900,	// (0x0002f89d) main_image_pane_g2_ParamLimits

0x3900,	// (0x0002f89d) main_image_pane_g2

0x3911,	// (0x0002f8ae) main_image_pane_g3_ParamLimits

0x3911,	// (0x0002f8ae) main_image_pane_g3

0x0002,

0xf42c,	// (0x0003b3c9) main_image_pane_g_ParamLimits

0xf42c,	// (0x0003b3c9) main_image_pane_g

0xce18,	// (0x00038db5) main_image_pane_t1_ParamLimits

0x3922,	// (0x0002f8bf) main_image_pane_t2_ParamLimits

0x3922,	// (0x0002f8bf) main_image_pane_t2

0x3934,	// (0x0002f8d1) main_image_pane_t3_ParamLimits

0x3934,	// (0x0002f8d1) main_image_pane_t3

0x395c,	// (0x0002f8f9) main_image_pane_t4_ParamLimits

0x395c,	// (0x0002f8f9) main_image_pane_t4

0x0003,

0xf433,	// (0x0003b3d0) main_image_pane_t_ParamLimits

0xf433,	// (0x0003b3d0) main_image_pane_t

0x397c,	// (0x0002f919) popup_image_details_window_cp01

0x3986,	// (0x0002f923) popup_toobar_trans_pane_cp01_ParamLimits

0x3986,	// (0x0002f923) popup_toobar_trans_pane_cp01

0x06ae,	// (0x0002c64b) popup_image_details_window_ParamLimits

0x06ae,	// (0x0002c64b) popup_image_details_window

0xb83e,	// (0x000377db) popup_image_focus_window

0xb8a4,	// (0x00037841) camera2_autofocus_pane_ParamLimits

0xb8a4,	// (0x00037841) camera2_autofocus_pane

0xb07c,	// (0x00037019) bg_popup_sub_pane_cp06

0xe36d,	// (0x0003a30a) popup_image_focus_window_g1

0xe375,	// (0x0003a312) popup_image_focus_window_g2

0xe37d,	// (0x0003a31a) popup_image_focus_window_g3

0xe385,	// (0x0003a322) popup_image_focus_window_g4

0x0003,

0xf62b,	// (0x0003b5c8) popup_image_focus_window_g

0xe38d,	// (0x0003a32a) popup_image_focus_window_t1

0xe39b,	// (0x0003a338) popup_image_focus_window_t2

0xe3ab,	// (0x0003a348) popup_image_focus_window_t3

0x0002,

0xf634,	// (0x0003b5d1) popup_image_focus_window_t

0xc007,	// (0x00037fa4) camera2_autofocus_pane_g1

0xbfa0,	// (0x00037f3d) bg_tb_trans_pane_cp01

0xe3b9,	// (0x0003a356) popup_image_details_window_g1

0xe3cc,	// (0x0003a369) popup_image_details_window_g2

0x0002,

0xf646,	// (0x0003b5e3) popup_image_details_window_g

0xe3f5,	// (0x0003a392) popup_image_details_window_t1

0xe407,	// (0x0003a3a4) popup_image_details_window_t2

0xe420,	// (0x0003a3bd) popup_image_details_window_t3

0xe434,	// (0x0003a3d1) popup_image_details_window_t4

0xe44f,	// (0x0003a3ec) popup_image_details_window_t5

0x0004,

0xf64d,	// (0x0003b5ea) popup_image_details_window_t

0xc08f,	// (0x0003802c) bg_calc_paper_pane_ParamLimits

0xb0ff,	// (0x0003709c) grid_highlight_pane_cp013

0xb6a9,	// (0x00037646) list_calc_pane_ParamLimits

0xb6bb,	// (0x00037658) scroll_pane_cp024

0xc0a3,	// (0x00038040) bg_calc_display_pane_ParamLimits

0x035e,	// (0x0002c2fb) calc_display_pane_t1_ParamLimits

0x0373,	// (0x0002c310) calc_display_pane_t2_ParamLimits

0xb6c3,	// (0x00037660) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x0003b064) calc_display_pane_t_ParamLimits

0x03dd,	// (0x0002c37a) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x0003b081) cell_calc_pane_g

0x03e6,	// (0x0002c383) cell_calc_pane_t1

0xc0f8,	// (0x00038095) grid_highlight_pane_cp02_ParamLimits

0xc10e,	// (0x000380ab) toolbar_button_pane_cp01_ParamLimits

0xc10e,	// (0x000380ab) toolbar_button_pane_cp01

0xce5d,	// (0x00038dfa) temp_image_control_pane_ParamLimits

0xce5d,	// (0x00038dfa) temp_image_control_pane

0xb0f1,	// (0x0003708e) main_mp3_pane

0xe469,	// (0x0003a406) temp_image_control_pane_g1_ParamLimits

0xe469,	// (0x0003a406) temp_image_control_pane_g1

0xe477,	// (0x0003a414) temp_image_control_pane_g2_ParamLimits

0xe477,	// (0x0003a414) temp_image_control_pane_g2

0xe489,	// (0x0003a426) temp_image_control_pane_g3_ParamLimits

0xe489,	// (0x0003a426) temp_image_control_pane_g3

0x4317,	// (0x000302b4) temp_image_control_pane_g4_ParamLimits

0x4317,	// (0x000302b4) temp_image_control_pane_g4

0x0003,

0xf658,	// (0x0003b5f5) temp_image_control_pane_g_ParamLimits

0xf658,	// (0x0003b5f5) temp_image_control_pane_g

0xe469,	// (0x0003a406) main_mp3_pane_g1

0x432a,	// (0x000302c7) main_mp3_pane_g2

0x0007,

0xf661,	// (0x0003b5fe) main_mp3_pane_g

0xe4be,	// (0x0003a45b) main_mp3_pane_t1

0xc015,	// (0x00037fb2) main_camera_pane_g8_ParamLimits

0xc015,	// (0x00037fb2) main_camera_pane_g8

0x1d81,	// (0x0002dd1e) main_video_pane_g7_ParamLimits

0x1d81,	// (0x0002dd1e) main_video_pane_g7

0xb8d4,	// (0x00037871) main_camera2_pane_t7_ParamLimits

0xb8d4,	// (0x00037871) main_camera2_pane_t7

0xc37b,	// (0x00038318) scroll_pane_cp025_ParamLimits

0xc37b,	// (0x00038318) scroll_pane_cp025

0xc38f,	// (0x0003832c) scroll_pane_cp026_ParamLimits

0xc38f,	// (0x0003832c) scroll_pane_cp026

0xc39e,	// (0x0003833b) wml_content_pane_ParamLimits

0xb0ff,	// (0x0003709c) main_touch_calib_pane

0x43fc,	// (0x00030399) main_touch_calib_pane_g1

0x440e,	// (0x000303ab) main_touch_calib_pane_g2

0x4420,	// (0x000303bd) main_touch_calib_pane_g3

0x4432,	// (0x000303cf) main_touch_calib_pane_g4

0x0003,

0xf67f,	// (0x0003b61c) main_touch_calib_pane_g

0x4444,	// (0x000303e1) main_touch_calib_pane_t1

0x445e,	// (0x000303fb) main_touch_calib_pane_t2

0x0004,

0xf688,	// (0x0003b625) main_touch_calib_pane_t

0xcac8,	// (0x00038a65) mup_progress_pane_cp02

0xcae7,	// (0x00038a84) navi_pane_g1

0xcb49,	// (0x00038ae6) navi_pane_mp_t3

0xb0f1,	// (0x0003708e) main_mp3_pane_ParamLimits

0x3fcf,	// (0x0002ff6c) navi_pane_ParamLimits

0xe469,	// (0x0003a406) main_mp3_pane_g1_ParamLimits

0x432a,	// (0x000302c7) main_mp3_pane_g2_ParamLimits

0x4336,	// (0x000302d3) main_mp3_pane_g3_ParamLimits

0x4336,	// (0x000302d3) main_mp3_pane_g3

0x4344,	// (0x000302e1) main_mp3_pane_g4_ParamLimits

0x4344,	// (0x000302e1) main_mp3_pane_g4

0xc007,	// (0x00037fa4) main_mp3_pane_g5_ParamLimits

0xc007,	// (0x00037fa4) main_mp3_pane_g5

0xe499,	// (0x0003a436) main_mp3_pane_g6_ParamLimits

0xe499,	// (0x0003a436) main_mp3_pane_g6

0xe4a6,	// (0x0003a443) main_mp3_pane_g7_ParamLimits

0xe4a6,	// (0x0003a443) main_mp3_pane_g7

0xe4b2,	// (0x0003a44f) main_mp3_pane_g8_ParamLimits

0xe4b2,	// (0x0003a44f) main_mp3_pane_g8

0xf661,	// (0x0003b5fe) main_mp3_pane_g_ParamLimits

0x4350,	// (0x000302ed) main_mp3_pane_t2

0x435e,	// (0x000302fb) main_mp3_pane_t3

0xe4cc,	// (0x0003a469) main_mp3_pane_t4

0xe4da,	// (0x0003a477) main_mp3_pane_t5

0x0005,

0xf672,	// (0x0003b60f) main_mp3_pane_t

0xe4e8,	// (0x0003a485) mup_progress_pane_cp01

0xb09a,	// (0x00037037) aid_zoom_text_secondary2

0xe2fa,	// (0x0003a297) list_cale_ev2_pane

0xe302,	// (0x0003a29f) scroll_pane_cp023_ParamLimits

0x44b8,	// (0x00030455) field_cale_ev2_pane_ParamLimits

0x44b8,	// (0x00030455) field_cale_ev2_pane

0x44dc,	// (0x00030479) field_cale_ev2_pane_g1_ParamLimits

0x44dc,	// (0x00030479) field_cale_ev2_pane_g1

0x44e8,	// (0x00030485) field_cale_ev2_pane_g2_ParamLimits

0x44e8,	// (0x00030485) field_cale_ev2_pane_g2

0x4500,	// (0x0003049d) field_cale_ev2_pane_g3_ParamLimits

0x4500,	// (0x0003049d) field_cale_ev2_pane_g3

0x0003,

0xf693,	// (0x0003b630) field_cale_ev2_pane_g_ParamLimits

0xf693,	// (0x0003b630) field_cale_ev2_pane_g

0x4518,	// (0x000304b5) field_cale_ev2_pane_t1_ParamLimits

0x4518,	// (0x000304b5) field_cale_ev2_pane_t1

0x452f,	// (0x000304cc) field_cale_ev2_pane_t2_ParamLimits

0x452f,	// (0x000304cc) field_cale_ev2_pane_t2

0x0001,

0xf69c,	// (0x0003b639) field_cale_ev2_pane_t_ParamLimits

0xf69c,	// (0x0003b639) field_cale_ev2_pane_t

0x37c0,	// (0x0002f75d) main_postcard_pane_g5_ParamLimits

0x37c0,	// (0x0002f75d) main_postcard_pane_g5

0x37d6,	// (0x0002f773) main_postcard_pane_g6_ParamLimits

0x37d6,	// (0x0002f773) main_postcard_pane_g6

0xbfa0,	// (0x00037f3d) camera2_autofocus_pane_cp_ParamLimits

0xbfa0,	// (0x00037f3d) camera2_autofocus_pane_cp

0xb0f1,	// (0x0003708e) main_mup3_pane

0x458e,	// (0x0003052b) main_mup3_pane_g1_ParamLimits

0x458e,	// (0x0003052b) main_mup3_pane_g1

0x45b0,	// (0x0003054d) main_mup3_pane_g2_ParamLimits

0x45b0,	// (0x0003054d) main_mup3_pane_g2

0x462b,	// (0x000305c8) main_mup3_pane_g3_ParamLimits

0x462b,	// (0x000305c8) main_mup3_pane_g3

0x4695,	// (0x00030632) main_mup3_pane_g4_ParamLimits

0x4695,	// (0x00030632) main_mup3_pane_g4

0x46ff,	// (0x0003069c) main_mup3_pane_g5_ParamLimits

0x46ff,	// (0x0003069c) main_mup3_pane_g5

0x4769,	// (0x00030706) main_mup3_pane_g6_ParamLimits

0x4769,	// (0x00030706) main_mup3_pane_g6

0xc015,	// (0x00037fb2) main_mup3_pane_g7_ParamLimits

0xc015,	// (0x00037fb2) main_mup3_pane_g7

0x0007,

0xf6ac,	// (0x0003b649) main_mup3_pane_g_ParamLimits

0xf6ac,	// (0x0003b649) main_mup3_pane_g

0x47ed,	// (0x0003078a) main_mup3_pane_t1_ParamLimits

0x47ed,	// (0x0003078a) main_mup3_pane_t1

0x4857,	// (0x000307f4) main_mup3_pane_t2_ParamLimits

0x4857,	// (0x000307f4) main_mup3_pane_t2

0x492d,	// (0x000308ca) main_mup3_pane_t4_ParamLimits

0x492d,	// (0x000308ca) main_mup3_pane_t4

0x498b,	// (0x00030928) main_mup3_pane_t5_ParamLimits

0x498b,	// (0x00030928) main_mup3_pane_t5

0x4a53,	// (0x000309f0) main_mup3_pane_t6_ParamLimits

0x4a53,	// (0x000309f0) main_mup3_pane_t6

0x0005,

0xf6bd,	// (0x0003b65a) main_mup3_pane_t_ParamLimits

0xf6bd,	// (0x0003b65a) main_mup3_pane_t

0x4b0b,	// (0x00030aa8) mup3_progress_pane_ParamLimits

0x4b0b,	// (0x00030aa8) mup3_progress_pane

0x4ba3,	// (0x00030b40) popup_mup3_control_window_ParamLimits

0x4ba3,	// (0x00030b40) popup_mup3_control_window

0xe4fc,	// (0x0003a499) popup_mup3_text_window

0x4bd9,	// (0x00030b76) mup3_progress_pane_t1

0x4bf8,	// (0x00030b95) mup3_progress_pane_t2

0xe504,	// (0x0003a4a1) mup3_progress_pane_t3

0x0002,

0xf6ca,	// (0x0003b667) mup3_progress_pane_t

0xe521,	// (0x0003a4be) mup_progress_pane_cp03

0xb07c,	// (0x00037019) bg_tb_trans_pane_cp04

0x4c17,	// (0x00030bb4) mup3_volume_pane

0x4c1f,	// (0x00030bbc) popup_mup3_control_window_g1

0x4c28,	// (0x00030bc5) mup3_volume_pane_g1

0x4c31,	// (0x00030bce) mup3_volume_pane_g2

0x4c3a,	// (0x00030bd7) mup3_volume_pane_g3

0x0002,

0xf6d1,	// (0x0003b66e) mup3_volume_pane_g

0xb07c,	// (0x00037019) bg_tb_trans_pane_cp03

0xe531,	// (0x0003a4ce) popup_mup3_text_window_g1

0xe539,	// (0x0003a4d6) popup_mup3_text_window_t1

0xc0eb,	// (0x00038088) list_calc_item_pane_g1_ParamLimits

0xdfe0,	// (0x00039f7d) mup_volume_pane_cp_g1

0x4478,	// (0x00030415) main_touch_calib_pane_t3

0x448c,	// (0x00030429) main_touch_calib_pane_t4

0x44a2,	// (0x0003043f) main_touch_calib_pane_t5

0xb086,	// (0x00037023) aid_cell_size_toolbar2

0xb08e,	// (0x0003702b) aid_popup3_width_pane

0xb09a,	// (0x00037037) aid_zoom_text_msg_primary

0x1c5a,	// (0x0002dbf7) vorec_t7

0xc0af,	// (0x0003804c) bg_calc_paper_pane_g1_ParamLimits

0xc0bb,	// (0x00038058) bg_calc_paper_pane_g2_ParamLimits

0xc0c7,	// (0x00038064) bg_calc_paper_pane_g3_ParamLimits

0xc0d3,	// (0x00038070) bg_calc_paper_pane_g4_ParamLimits

0xc0df,	// (0x0003807c) bg_calc_paper_pane_g5_ParamLimits

0x15f4,	// (0x0002d591) bg_calc_paper_pane_g6_ParamLimits

0x1607,	// (0x0002d5a4) bg_calc_paper_pane_g7_ParamLimits

0x161a,	// (0x0002d5b7) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x0003b06b) bg_calc_paper_pane_g_ParamLimits

0x162d,	// (0x0002d5ca) calc_bg_paper_pane_g9_ParamLimits

0xbfa0,	// (0x00037f3d) image_qvga_pane_ParamLimits

0xbfa0,	// (0x00037f3d) image_qvga_pane

0xbf7e,	// (0x00037f1b) bg_popup_sub_pane_cp04_ParamLimits

0xcd94,	// (0x00038d31) popup_mup_playback_window_g1_ParamLimits

0xcda0,	// (0x00038d3d) popup_mup_playback_window_t1_ParamLimits

0xcdb5,	// (0x00038d52) popup_mup_playback_window_t2_ParamLimits

0xf427,	// (0x0003b3c4) popup_mup_playback_window_t_ParamLimits

0xc015,	// (0x00037fb2) main_mup2_pane_g3_ParamLimits

0xc015,	// (0x00037fb2) main_mup2_pane_g3

0x1f29,	// (0x0002dec6) popup_toolbar_window_cp04

0xd139,	// (0x000390d6) popup_call2_audio_second_window_g3_ParamLimits

0xd139,	// (0x000390d6) popup_call2_audio_second_window_g3

0xd551,	// (0x000394ee) popup_call2_audio_first_window_g4_ParamLimits

0xd551,	// (0x000394ee) popup_call2_audio_first_window_g4

0xdb78,	// (0x00039b15) popup_call2_audio_in_window_g4_ParamLimits

0xdb78,	// (0x00039b15) popup_call2_audio_in_window_g4

0x38e2,	// (0x0002f87f) aid_area_sk_bg_cut_ParamLimits

0x38e2,	// (0x0002f87f) aid_area_sk_bg_cut

0xcdca,	// (0x00038d67) aid_area_sk_bg_cut_2_ParamLimits

0xcdca,	// (0x00038d67) aid_area_sk_bg_cut_2

0xb07c,	// (0x00037019) aid_placing_details_win

0xb07c,	// (0x00037019) aid_placing_details_win_2

0xc007,	// (0x00037fa4) camera2_autofocus_pane_g1_ParamLimits

0x021d,	// (0x0002c1ba) popup_fixed_preview_cale_window_ParamLimits

0x021d,	// (0x0002c1ba) popup_fixed_preview_cale_window

0xcb90,	// (0x00038b2d) navi_slider_pane_g3

0xcb99,	// (0x00038b36) navi_slider_pane_g4

0xcba2,	// (0x00038b3f) navi_slider_pane_g5

0xcb90,	// (0x00038b2d) navi_slider_pane_g6

0xb7df,	// (0x0003777c) navi_slider_pane_g7

0xccd2,	// (0x00038c6f) mup_scale_pane_g3

0xccdb,	// (0x00038c78) mup_scale_pane_g4

0xcce4,	// (0x00038c81) mup_scale_pane_g5

0x359b,	// (0x0002f538) mup_scale_pane_g6

0x35a4,	// (0x0002f541) mup_scale_pane_g7

0x429b,	// (0x00030238) cams2_slider_pane_g3

0x429b,	// (0x00030238) cams2_slider_pane_g4

0x429b,	// (0x00030238) cams2_slider_pane_g5

0x429b,	// (0x00030238) cams2_slider_pane_g6

0x429b,	// (0x00030238) cams2_slider_pane_g7

0xc045,	// (0x00037fe2) camera2_autofocus_pane_cp_g1

0xde50,	// (0x00039ded) bg_popup_preview_window_pane_cp02_ParamLimits

0xde50,	// (0x00039ded) bg_popup_preview_window_pane_cp02

0xe547,	// (0x0003a4e4) list_fp_cale_pane_ParamLimits

0xe547,	// (0x0003a4e4) list_fp_cale_pane

0xe553,	// (0x0003a4f0) popup_fixed_preview_cale_window_t1_ParamLimits

0xe553,	// (0x0003a4f0) popup_fixed_preview_cale_window_t1

0x4c43,	// (0x00030be0) popup_fixed_preview_cale_window_t2_ParamLimits

0x4c43,	// (0x00030be0) popup_fixed_preview_cale_window_t2

0x4c58,	// (0x00030bf5) popup_fixed_preview_cale_window_t3_ParamLimits

0x4c58,	// (0x00030bf5) popup_fixed_preview_cale_window_t3

0x0002,

0xf6d8,	// (0x0003b675) popup_fixed_preview_cale_window_t_ParamLimits

0xf6d8,	// (0x0003b675) popup_fixed_preview_cale_window_t

0x4c6f,	// (0x00030c0c) list_single_fp_cale_pane_ParamLimits

0x4c6f,	// (0x00030c0c) list_single_fp_cale_pane

0xe571,	// (0x0003a50e) list_single_fp_cale_pane_g1_ParamLimits

0xe571,	// (0x0003a50e) list_single_fp_cale_pane_g1

0xe57d,	// (0x0003a51a) list_single_fp_cale_pane_g2_ParamLimits

0xe57d,	// (0x0003a51a) list_single_fp_cale_pane_g2

0x0002,

0xf6df,	// (0x0003b67c) list_single_fp_cale_pane_g_ParamLimits

0xf6df,	// (0x0003b67c) list_single_fp_cale_pane_g

0xe596,	// (0x0003a533) list_single_fp_cale_pane_t1_ParamLimits

0xe596,	// (0x0003a533) list_single_fp_cale_pane_t1

0xe5a8,	// (0x0003a545) list_single_fp_cale_pane_t2_ParamLimits

0xe5a8,	// (0x0003a545) list_single_fp_cale_pane_t2

0x0001,

0xf6e6,	// (0x0003b683) list_single_fp_cale_pane_t_ParamLimits

0xf6e6,	// (0x0003b683) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb0ff,	// (0x0003709c) main_dialer_pane

0xb07c,	// (0x00037019) aid_cell_size_keypad

0xb07c,	// (0x00037019) dialer_ne_pane

0xb07c,	// (0x00037019) grid_dialer_command_1_pane

0xb07c,	// (0x00037019) grid_dialer_command_2_pane

0xb07c,	// (0x00037019) grid_dialer_keypad_pane

0x4c84,	// (0x00030c21) bg_popup_call_pane_cp06_ParamLimits

0x4c84,	// (0x00030c21) bg_popup_call_pane_cp06

0x4c84,	// (0x00030c21) dialer_ne_clear_pane_ParamLimits

0x4c84,	// (0x00030c21) dialer_ne_clear_pane

0xc045,	// (0x00037fe2) dialer_ne_pane_g1

0xc063,	// (0x00038000) dialer_ne_pane_t1_ParamLimits

0xc063,	// (0x00038000) dialer_ne_pane_t1

0x4c92,	// (0x00030c2f) dialer_ne_pane_t2_ParamLimits

0x4c92,	// (0x00030c2f) dialer_ne_pane_t2

0x4cba,	// (0x00030c57) dialer_ne_pane_t3_ParamLimits

0x4cba,	// (0x00030c57) dialer_ne_pane_t3

0x0002,

0xf6eb,	// (0x0003b688) dialer_ne_pane_t_ParamLimits

0xf6eb,	// (0x0003b688) dialer_ne_pane_t

0x4cba,	// (0x00030c57) dialer_ne_pane_t3_copy1_ParamLimits

0x4cba,	// (0x00030c57) dialer_ne_pane_t3_copy1

0xe5db,	// (0x0003a578) cell_dialer_keypad_pane_ParamLimits

0xe5db,	// (0x0003a578) cell_dialer_keypad_pane

0xbfa0,	// (0x00037f3d) cell_dialer_command_1_pane_ParamLimits

0xbfa0,	// (0x00037f3d) cell_dialer_command_1_pane

0xe5f2,	// (0x0003a58f) cell_dialer_command_2_pane_ParamLimits

0xe5f2,	// (0x0003a58f) cell_dialer_command_2_pane

0xbfa0,	// (0x00037f3d) bg_button_pane_cp02_ParamLimits

0xbfa0,	// (0x00037f3d) bg_button_pane_cp02

0xc007,	// (0x00037fa4) cell_dialer_keypad_pane_g1_ParamLimits

0xc007,	// (0x00037fa4) cell_dialer_keypad_pane_g1

0xbfa0,	// (0x00037f3d) bg_button_pane_cp03_ParamLimits

0xbfa0,	// (0x00037f3d) bg_button_pane_cp03

0xc007,	// (0x00037fa4) cell_dialer_command_1_pane_g1_ParamLimits

0xc007,	// (0x00037fa4) cell_dialer_command_1_pane_g1

0xb07c,	// (0x00037019) bg_button_pane_cp04

0xc045,	// (0x00037fe2) cell_dialer_command_2_pane_g1

0xb07c,	// (0x00037019) bg_button_pane_cp06

0xc045,	// (0x00037fe2) dialer_ne_clear_pane_g1

0x32aa,	// (0x0002f247) navi_pane_g2

0x32d8,	// (0x0002f275) navi_pane_g3

0x0002,

0xf32f,	// (0x0003b2cc) navi_pane_g

0x3303,	// (0x0002f2a0) navi_pane_mv_g2

0x332a,	// (0x0002f2c7) navi_pane_mv_g5

0x3332,	// (0x0002f2cf) navi_pane_mv_t1

0xc0a3,	// (0x00038040) main_clock2_pane

0xbfa0,	// (0x00037f3d) main_clock2_list_pane_ParamLimits

0xbfa0,	// (0x00037f3d) main_clock2_list_pane

0x4d4b,	// (0x00030ce8) main_clock2_pane_t1_ParamLimits

0x4d4b,	// (0x00030ce8) main_clock2_pane_t1

0x4d86,	// (0x00030d23) main_clock2_pane_t2_ParamLimits

0x4d86,	// (0x00030d23) main_clock2_pane_t2

0x0004,

0xf6f7,	// (0x0003b694) main_clock2_pane_t_ParamLimits

0xf6f7,	// (0x0003b694) main_clock2_pane_t

0x4e25,	// (0x00030dc2) popup_clock_analogue_window_cp03_ParamLimits

0x4e25,	// (0x00030dc2) popup_clock_analogue_window_cp03

0x4e4a,	// (0x00030de7) popup_clock_digital_window_cp02_ParamLimits

0x4e4a,	// (0x00030de7) popup_clock_digital_window_cp02

0x4e8e,	// (0x00030e2b) main_clock2_list_single_pane_ParamLimits

0x4e8e,	// (0x00030e2b) main_clock2_list_single_pane

0xc258,	// (0x000381f5) list_highlight_pane_cp05

0xe633,	// (0x0003a5d0) main_clock2_list_single_pane_t1

0x1f29,	// (0x0002dec6) popup_toolbar_window_cp04_ParamLimits

0xc015,	// (0x00037fb2) camera2_autofocus_pane_g2_ParamLimits

0xc015,	// (0x00037fb2) camera2_autofocus_pane_g2

0xc015,	// (0x00037fb2) camera2_autofocus_pane_g3_ParamLimits

0xc015,	// (0x00037fb2) camera2_autofocus_pane_g3

0xc015,	// (0x00037fb2) camera2_autofocus_pane_g4_ParamLimits

0xc015,	// (0x00037fb2) camera2_autofocus_pane_g4

0xc015,	// (0x00037fb2) camera2_autofocus_pane_g5_ParamLimits

0xc015,	// (0x00037fb2) camera2_autofocus_pane_g5

0x0004,

0xf63b,	// (0x0003b5d8) camera2_autofocus_pane_g_ParamLimits

0xf63b,	// (0x0003b5d8) camera2_autofocus_pane_g

0x4544,	// (0x000304e1) camera2_autofocus_pane_cp_g2

0x454c,	// (0x000304e9) camera2_autofocus_pane_cp_g3

0x4554,	// (0x000304f1) camera2_autofocus_pane_cp_g4

0x455c,	// (0x000304f9) camera2_autofocus_pane_cp_g5

0x0004,

0xf6a1,	// (0x0003b63e) camera2_autofocus_pane_cp_g

0xb07c,	// (0x00037019) popup_dialer_spcha_window

0xb07c,	// (0x00037019) bg_popup_sub_pane_cp07

0xb07c,	// (0x00037019) list_spcha_pane

0xe641,	// (0x0003a5de) list_single_spcha_pane_ParamLimits

0xe641,	// (0x0003a5de) list_single_spcha_pane

0xb07c,	// (0x00037019) list_highlight_pane_cp06

0xc7be,	// (0x0003875b) list_single_spcha_pane_t1

0xd922,	// (0x000398bf) popup_call2_audio_out_window_g4_ParamLimits

0xd922,	// (0x000398bf) popup_call2_audio_out_window_g4

0xb0ff,	// (0x0003709c) main_imed2_pane

0xb848,	// (0x000377e5) popup_imed_adjust2_window

0x06c6,	// (0x0002c663) popup_imed_trans_window_ParamLimits

0x06c6,	// (0x0002c663) popup_imed_trans_window

0xe0c3,	// (0x0003a060) popup_blid_sat_info2_window_t1

0xe0d1,	// (0x0003a06e) popup_blid_sat_info2_window_t2

0x000a,

0xf5d0,	// (0x0003b56d) popup_blid_sat_info2_window_t

0x4ea0,	// (0x00030e3d) aid_size_cell_colour_35

0x4ec0,	// (0x00030e5d) aid_size_cell_colour_112

0x4ee0,	// (0x00030e7d) aid_size_cell_effect

0xcc60,	// (0x00038bfd) bg_tb_trans_pane_cp02

0xc6e3,	// (0x00038680) heading_imed_pane

0x4f00,	// (0x00030e9d) listscroll_imed_pane

0xe653,	// (0x0003a5f0) heading_imed_pane_g1

0xe65b,	// (0x0003a5f8) heading_imed_pane_t1

0xe669,	// (0x0003a606) grid_imed_colour_35_pane_ParamLimits

0xe669,	// (0x0003a606) grid_imed_colour_35_pane

0x4f0c,	// (0x00030ea9) grid_imed_effect_pane

0xe685,	// (0x0003a622) list_imed_aspect_pane

0x4f23,	// (0x00030ec0) scroll_pane_cp027_ParamLimits

0x4f23,	// (0x00030ec0) scroll_pane_cp027

0x4f34,	// (0x00030ed1) cell_imed_effect_pane_ParamLimits

0x4f34,	// (0x00030ed1) cell_imed_effect_pane

0xe68d,	// (0x0003a62a) cell_imed_colour_pane_ParamLimits

0xe68d,	// (0x0003a62a) cell_imed_colour_pane

0xe6d7,	// (0x0003a674) cell_imed_colour_pane_g1_ParamLimits

0xe6d7,	// (0x0003a674) cell_imed_colour_pane_g1

0xe6e8,	// (0x0003a685) hgihlgiht_grid_pane_cp016_ParamLimits

0xe6e8,	// (0x0003a685) hgihlgiht_grid_pane_cp016

0x4f5f,	// (0x00030efc) cell_imed_effect_pane_g1

0x4f67,	// (0x00030f04) grid_highlight_pane_cp017

0xe6f9,	// (0x0003a696) list_imed_single_pane_ParamLimits

0xe6f9,	// (0x0003a696) list_imed_single_pane

0xb07c,	// (0x00037019) list_highlight_pane_cp07

0xe70d,	// (0x0003a6aa) list_imed_aspect_pane_comp1_t1

0xcc60,	// (0x00038bfd) bg_tb_trans_pane_cp05

0xe72f,	// (0x0003a6cc) popup_imed_adjust2_window_g1

0xe756,	// (0x0003a6f3) popup_imed_adjust2_window_t1

0xe76e,	// (0x0003a70b) slider_imed_adjust_pane

0xe782,	// (0x0003a71f) slider_imed_adjust_pane_g1

0xe792,	// (0x0003a72f) slider_imed_adjust_pane_g2

0xe7e1,	// (0x0003a77e) slider_imed_adjust_pane_g3

0xe7f2,	// (0x0003a78f) slider_imed_adjust_pane_g4

0x0003,

0xf714,	// (0x0003b6b1) slider_imed_adjust_pane_g

0x4f70,	// (0x00030f0d) aid_size_cell_clipart2

0xe803,	// (0x0003a7a0) grid_imed_clipart_pane

0xccf5,	// (0x00038c92) scroll_pane_cp031

0x4f7c,	// (0x00030f19) cell_imed_clipart_pane_ParamLimits

0x4f7c,	// (0x00030f19) cell_imed_clipart_pane

0x4f99,	// (0x00030f36) cell_imed_clipart_pane_g1

0xb07c,	// (0x00037019) grid_highlight_pane_cp014

0x4d29,	// (0x00030cc6) main_clock2_pane_g1_ParamLimits

0x4d29,	// (0x00030cc6) main_clock2_pane_g1

0x4e6a,	// (0x00030e07) aid_call2_pane_cp10

0x4e7c,	// (0x00030e19) aid_call_pane_cp10

0xcabc,	// (0x00038a59) popup_clock_analogue_window_cp10_g1

0xcabc,	// (0x00038a59) popup_clock_analogue_window_cp10_g2

0x08b9,	// (0x0002c856) popup_clock_analogue_window_cp10_g3

0x08b9,	// (0x0002c856) popup_clock_analogue_window_cp10_g4

0xcabc,	// (0x00038a59) popup_clock_analogue_window_cp10_g5

0x0004,

0xf702,	// (0x0003b69f) popup_clock_analogue_window_cp10_g

0x08cf,	// (0x0002c86c) popup_clock_analogue_window_cp10_t1

0x08ee,	// (0x0002c88b) clock_digital_number_pane_cp10_ParamLimits

0x08ee,	// (0x0002c88b) clock_digital_number_pane_cp10

0x0908,	// (0x0002c8a5) clock_digital_number_pane_cp11_ParamLimits

0x0908,	// (0x0002c8a5) clock_digital_number_pane_cp11

0x0922,	// (0x0002c8bf) clock_digital_number_pane_cp12_ParamLimits

0x0922,	// (0x0002c8bf) clock_digital_number_pane_cp12

0x093e,	// (0x0002c8db) clock_digital_number_pane_cp13_ParamLimits

0x093e,	// (0x0002c8db) clock_digital_number_pane_cp13

0x095a,	// (0x0002c8f7) clock_digital_separator_pane_cp10_ParamLimits

0x095a,	// (0x0002c8f7) clock_digital_separator_pane_cp10

0x0976,	// (0x0002c913) popup_clock_digital_window_cp02_t1_ParamLimits

0x0976,	// (0x0002c913) popup_clock_digital_window_cp02_t1

0xbf76,	// (0x00037f13) clock_digital_number_pane_cp10_g1

0xbf76,	// (0x00037f13) clock_digital_number_pane_cp10_g2

0x0001,

0xf71d,	// (0x0003b6ba) clock_digital_number_pane_cp10_g

0xbf76,	// (0x00037f13) clock_digital_separator_pane_cp10_g1

0xbf76,	// (0x00037f13) clock_digital_separator_pane_g2_cp10

0xcb57,	// (0x00038af4) navi_pane_vded_g4

0xcb60,	// (0x00038afd) navi_pane_vded_g5

0xcb69,	// (0x00038b06) navi_pane_vded_t1

0xb0ff,	// (0x0003709c) main_vded_pane

0x4fa2,	// (0x00030f3f) main_vded_pane_g1

0x4fae,	// (0x00030f4b) main_vded_pane_g2

0x4fba,	// (0x00030f57) main_vded_pane_g3

0x0002,

0xf722,	// (0x0003b6bf) main_vded_pane_g

0x4fc6,	// (0x00030f63) main_vded_pane_t1

0x4fd4,	// (0x00030f71) main_vded_pane_t2

0x0001,

0xf729,	// (0x0003b6c6) main_vded_pane_t

0x4fe2,	// (0x00030f7f) vded_slider_pane

0x4fec,	// (0x00030f89) vded_video_pane

0xe80d,	// (0x0003a7aa) vded_video_pane_g1

0x4ff8,	// (0x00030f95) vded_video_pane_g2

0xc045,	// (0x00037fe2) vded_video_pane_g3

0x0002,

0xf72e,	// (0x0003b6cb) vded_video_pane_g

0xe817,	// (0x0003a7b4) vded_slider_pane_g1

0xdfe0,	// (0x00039f7d) vded_slider_pane_g2

0xe820,	// (0x0003a7bd) vded_slider_pane_g3

0xe829,	// (0x0003a7c6) vded_slider_pane_g4

0xe832,	// (0x0003a7cf) vded_slider_pane_g5

0x0004,

0xf735,	// (0x0003b6d2) vded_slider_pane_g

0x4b8d,	// (0x00030b2a) mup3_rocker_pane_ParamLimits

0x4b8d,	// (0x00030b2a) mup3_rocker_pane

0x5001,	// (0x00030f9e) mup3_control_keys_pane_g1

0x5009,	// (0x00030fa6) mup3_control_keys_pane_g2

0x5011,	// (0x00030fae) mup3_control_keys_pane_g3

0x5019,	// (0x00030fb6) mup3_control_keys_pane_g4

0x0003,

0xf740,	// (0x0003b6dd) mup3_control_keys_pane_g

0x0252,	// (0x0002c1ef) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0252,	// (0x0002c1ef) popup_toolbar2_fixed_window_cp01

0x4bc3,	// (0x00030b60) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4bc3,	// (0x00030b60) popup_toolbar2_fixed_window_cp02

0xd2ab,	// (0x00039248) popup_call2_audio_second_window_t4_ParamLimits

0xd2ab,	// (0x00039248) popup_call2_audio_second_window_t4

0xd7e7,	// (0x00039784) popup_call2_audio_first_window_t6_ParamLimits

0xd7e7,	// (0x00039784) popup_call2_audio_first_window_t6

0xda25,	// (0x000399c2) popup_call2_audio_out_window_t6_ParamLimits

0xda25,	// (0x000399c2) popup_call2_audio_out_window_t6

0xb0ff,	// (0x0003709c) main_vitu_pane

0xbfa0,	// (0x00037f3d) aid_size_cell_itu_ParamLimits

0xbfa0,	// (0x00037f3d) aid_size_cell_itu

0xbfa0,	// (0x00037f3d) bg_popup_window_pane_cp08_ParamLimits

0xbfa0,	// (0x00037f3d) bg_popup_window_pane_cp08

0xbfa0,	// (0x00037f3d) field_vitu_entry_pane_ParamLimits

0xbfa0,	// (0x00037f3d) field_vitu_entry_pane

0xbfa0,	// (0x00037f3d) grid_vitu_function_pane_ParamLimits

0xbfa0,	// (0x00037f3d) grid_vitu_function_pane

0xbfa0,	// (0x00037f3d) grid_vitu_itu_pane_ParamLimits

0xbfa0,	// (0x00037f3d) grid_vitu_itu_pane

0xbfa0,	// (0x00037f3d) cell_vitu_itu_pane_ParamLimits

0xbfa0,	// (0x00037f3d) cell_vitu_itu_pane

0xbfa0,	// (0x00037f3d) cell_vitu_function_pane_ParamLimits

0xbfa0,	// (0x00037f3d) cell_vitu_function_pane

0xbfa0,	// (0x00037f3d) bg_popup_sub_pane_cp08_ParamLimits

0xbfa0,	// (0x00037f3d) bg_popup_sub_pane_cp08

0xc04f,	// (0x00037fec) field_vitu_entry_pane_t1_ParamLimits

0xc04f,	// (0x00037fec) field_vitu_entry_pane_t1

0xe7a2,	// (0x0003a73f) field_vitu_entry_pane_t2_ParamLimits

0xe7a2,	// (0x0003a73f) field_vitu_entry_pane_t2

0x0001,

0xf749,	// (0x0003b6e6) field_vitu_entry_pane_t_ParamLimits

0xf749,	// (0x0003b6e6) field_vitu_entry_pane_t

0xe06a,	// (0x0003a007) bg_button_pane_cp05_ParamLimits

0xe06a,	// (0x0003a007) bg_button_pane_cp05

0xe83b,	// (0x0003a7d8) cell_vitu_itu_pane_g1

0xcc4c,	// (0x00038be9) cell_vitu_itu_pane_t1_ParamLimits

0xcc4c,	// (0x00038be9) cell_vitu_itu_pane_t1

0xcc4c,	// (0x00038be9) cell_vitu_itu_pane_t2_ParamLimits

0xcc4c,	// (0x00038be9) cell_vitu_itu_pane_t2

0x0002,

0xf74e,	// (0x0003b6eb) cell_vitu_itu_pane_t_ParamLimits

0xf74e,	// (0x0003b6eb) cell_vitu_itu_pane_t

0xb07c,	// (0x00037019) bg_button_pane_cp07

0xc045,	// (0x00037fe2) cell_vitu_function_pane_g1

0xb6a1,	// (0x0003763e) main_calc_pane_g1

0x00b5,	// (0x0002c052) aid_visual_content_pane

0xb0ff,	// (0x0003709c) main_vradio_pane

0xc007,	// (0x00037fa4) main_vradio_pane_g1_ParamLimits

0xc007,	// (0x00037fa4) main_vradio_pane_g1

0xc015,	// (0x00037fb2) main_vradio_pane_g2_ParamLimits

0xc015,	// (0x00037fb2) main_vradio_pane_g2

0x0001,

0xf755,	// (0x0003b6f2) main_vradio_pane_g_ParamLimits

0xf755,	// (0x0003b6f2) main_vradio_pane_g

0xc04f,	// (0x00037fec) main_vradio_pane_t1_ParamLimits

0xc04f,	// (0x00037fec) main_vradio_pane_t1

0xc04f,	// (0x00037fec) main_vradio_pane_t2_ParamLimits

0xc04f,	// (0x00037fec) main_vradio_pane_t2

0xc063,	// (0x00038000) main_vradio_pane_t3_ParamLimits

0xc063,	// (0x00038000) main_vradio_pane_t3

0x0002,

0xf75a,	// (0x0003b6f7) main_vradio_pane_t_ParamLimits

0xf75a,	// (0x0003b6f7) main_vradio_pane_t

0xbfa0,	// (0x00037f3d) vradio_rocker_control_pane_ParamLimits

0xbfa0,	// (0x00037f3d) vradio_rocker_control_pane

0xbfa0,	// (0x00037f3d) vradio_station_info_pane_ParamLimits

0xbfa0,	// (0x00037f3d) vradio_station_info_pane

0xbfa0,	// (0x00037f3d) vradio_frequency_info_pane_ParamLimits

0xbfa0,	// (0x00037f3d) vradio_frequency_info_pane

0xc045,	// (0x00037fe2) vradio_station_info_pane_g1

0xcc4c,	// (0x00038be9) vradio_station_info_pane_t1_ParamLimits

0xcc4c,	// (0x00038be9) vradio_station_info_pane_t1

0xc063,	// (0x00038000) vradio_station_info_pane_t2_ParamLimits

0xc063,	// (0x00038000) vradio_station_info_pane_t2

0x0001,

0xf761,	// (0x0003b6fe) vradio_station_info_pane_t_ParamLimits

0xf761,	// (0x0003b6fe) vradio_station_info_pane_t

0xb07c,	// (0x00037019) vradio_tuning_pane

0x5029,	// (0x00030fc6) vradio_rocker_control_pane_g1

0xe857,	// (0x0003a7f4) vradio_rocker_control_pane_g2

0x5033,	// (0x00030fd0) vradio_rocker_control_pane_g3

0x503d,	// (0x00030fda) vradio_rocker_control_pane_g4

0x5047,	// (0x00030fe4) vradio_rocker_control_pane_g5

0x0004,

0xf766,	// (0x0003b703) vradio_rocker_control_pane_g

0xc045,	// (0x00037fe2) vradio_frequency_info_pane_g1

0xc04f,	// (0x00037fec) vradio_frequency_info_pane_t1_ParamLimits

0xc04f,	// (0x00037fec) vradio_frequency_info_pane_t1

0x5051,	// (0x00030fee) vradio_tuning_pane_g1

0x505c,	// (0x00030ff9) vradio_tuning_pane_t1

0xb0aa,	// (0x00037047) area_side_right_pane_ParamLimits

0xb0aa,	// (0x00037047) area_side_right_pane

0xde17,	// (0x00039db4) status_small_pane_g1

0xde1f,	// (0x00039dbc) status_small_pane_g2

0xde28,	// (0x00039dc5) status_small_pane_g3

0xde31,	// (0x00039dce) status_small_pane_g4

0x0003,

0xf532,	// (0x0003b4cf) status_small_pane_g

0xde3a,	// (0x00039dd7) status_small_pane_t1

0xb0ff,	// (0x0003709c) main_video3_pane

0xb07c,	// (0x00037019) cams_zoom_vslider_pane

0xe85f,	// (0x0003a7fc) image3_wide_pane_ParamLimits

0xe85f,	// (0x0003a7fc) image3_wide_pane

0xb07c,	// (0x00037019) image3_wide_small_pane

0xe879,	// (0x0003a816) main_video3_pane_g1_ParamLimits

0xe879,	// (0x0003a816) main_video3_pane_g1

0xe879,	// (0x0003a816) main_video3_pane_g2_ParamLimits

0xe879,	// (0x0003a816) main_video3_pane_g2

0x0001,

0xf771,	// (0x0003b70e) main_video3_pane_g_ParamLimits

0xf771,	// (0x0003b70e) main_video3_pane_g

0xe897,	// (0x0003a834) main_video3_pane_t1_ParamLimits

0xe897,	// (0x0003a834) main_video3_pane_t1

0xe897,	// (0x0003a834) main_video3_pane_t2_ParamLimits

0xe897,	// (0x0003a834) main_video3_pane_t2

0xe897,	// (0x0003a834) main_video3_pane_t3_ParamLimits

0xe897,	// (0x0003a834) main_video3_pane_t3

0x0002,

0xf776,	// (0x0003b713) main_video3_pane_t_ParamLimits

0xf776,	// (0x0003b713) main_video3_pane_t

0xc045,	// (0x00037fe2) cams_zoom_vslider_pane_g1

0xc045,	// (0x00037fe2) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x0003b04c) cams_zoom_vslider_pane_g

0xb07c,	// (0x00037019) small_slider_vertical_pane

0xc045,	// (0x00037fe2) small_slider_vertical_pane_g1

0xc045,	// (0x00037fe2) small_slider_vertical_pane_g2

0xe8be,	// (0x0003a85b) small_slider_vertical_pane_g3

0x0002,

0xf77d,	// (0x0003b71a) small_slider_vertical_pane_g

0xb0ff,	// (0x0003709c) main_hwr_training_pane

0xe8c7,	// (0x0003a864) hwr_training_instruct_pane_ParamLimits

0xe8c7,	// (0x0003a864) hwr_training_instruct_pane

0x506b,	// (0x00031008) hwr_training_navi_pane_ParamLimits

0x506b,	// (0x00031008) hwr_training_navi_pane

0x508a,	// (0x00031027) hwr_training_write_pane_ParamLimits

0x508a,	// (0x00031027) hwr_training_write_pane

0xb07c,	// (0x00037019) bg_frame_shadow_pane

0xe8fe,	// (0x0003a89b) hwr_training_write_pane_g1

0xe906,	// (0x0003a8a3) hwr_training_write_pane_g2

0xe90e,	// (0x0003a8ab) hwr_training_write_pane_g3

0xe916,	// (0x0003a8b3) hwr_training_write_pane_g4

0xe91e,	// (0x0003a8bb) hwr_training_write_pane_g5

0xe926,	// (0x0003a8c3) hwr_training_write_pane_g6

0xe92e,	// (0x0003a8cb) hwr_training_write_pane_g7

0x0006,

0xf784,	// (0x0003b721) hwr_training_write_pane_g

0xb930,	// (0x000378cd) hwr_training_navi_pane_g1_ParamLimits

0xb930,	// (0x000378cd) hwr_training_navi_pane_g1

0xb942,	// (0x000378df) hwr_training_navi_pane_g2_ParamLimits

0xb942,	// (0x000378df) hwr_training_navi_pane_g2

0xb954,	// (0x000378f1) hwr_training_navi_pane_g3_ParamLimits

0xb954,	// (0x000378f1) hwr_training_navi_pane_g3

0xb964,	// (0x00037901) hwr_training_navi_pane_g4_ParamLimits

0xb964,	// (0x00037901) hwr_training_navi_pane_g4

0x0004,

0xf793,	// (0x0003b730) hwr_training_navi_pane_g_ParamLimits

0xf793,	// (0x0003b730) hwr_training_navi_pane_g

0xb971,	// (0x0003790e) hwr_training_navi_pane_t1

0x50c5,	// (0x00031062) list_single_hwr_training_instruct_pane_ParamLimits

0x50c5,	// (0x00031062) list_single_hwr_training_instruct_pane

0xe936,	// (0x0003a8d3) list_single_hwr_training_instruct_pane_t1

0xe1ca,	// (0x0003a167) bg_frame_shadow_pane_g1

0xe945,	// (0x0003a8e2) bg_frame_shadow_pane_g2

0xe94d,	// (0x0003a8ea) bg_frame_shadow_pane_g3

0xe955,	// (0x0003a8f2) bg_frame_shadow_pane_g4

0xe95d,	// (0x0003a8fa) bg_frame_shadow_pane_g5

0xe965,	// (0x0003a902) bg_frame_shadow_pane_g6

0xe96d,	// (0x0003a90a) bg_frame_shadow_pane_g7

0xc15b,	// (0x000380f8) bg_frame_shadow_pane_g8

0x0007,

0xf79e,	// (0x0003b73b) bg_frame_shadow_pane_g

0xb0ff,	// (0x0003709c) main_video_tele_dialer_pane

0x09a4,	// (0x0002c941) aid_size_cell_video_keypad_ParamLimits

0x09a4,	// (0x0002c941) aid_size_cell_video_keypad

0x09be,	// (0x0002c95b) grid_video_dialer_keypad_pane_ParamLimits

0x09be,	// (0x0002c95b) grid_video_dialer_keypad_pane

0x0a0a,	// (0x0002c9a7) video_down_pane_cp_ParamLimits

0x0a0a,	// (0x0002c9a7) video_down_pane_cp

0x0a20,	// (0x0002c9bd) cell_video_dialer_keypad_pane_ParamLimits

0x0a20,	// (0x0002c9bd) cell_video_dialer_keypad_pane

0xe975,	// (0x0003a912) bg_button_pane_cp08_ParamLimits

0xe975,	// (0x0003a912) bg_button_pane_cp08

0x50fd,	// (0x0003109a) cell_video_dialer_keypad_pane_g1_ParamLimits

0x50fd,	// (0x0003109a) cell_video_dialer_keypad_pane_g1

0x4b77,	// (0x00030b14) mup3_rocker2_pane_ParamLimits

0x4b77,	// (0x00030b14) mup3_rocker2_pane

0xc045,	// (0x00037fe2) mup3_rocker2_pane_g1

0x0593,	// (0x0002c530) main_dialer2_pane

0xb0ff,	// (0x0003709c) main_mp4_pane

0xb99d,	// (0x0003793a) main_mp4_pane_g1_ParamLimits

0xb99d,	// (0x0003793a) main_mp4_pane_g1

0xb99d,	// (0x0003793a) main_mp4_pane_g2_ParamLimits

0xb99d,	// (0x0003793a) main_mp4_pane_g2

0x0a46,	// (0x0002c9e3) main_mp4_pane_g3_ParamLimits

0x0a46,	// (0x0002c9e3) main_mp4_pane_g3

0xb9bb,	// (0x00037958) main_mp4_pane_g4_ParamLimits

0xb9bb,	// (0x00037958) main_mp4_pane_g4

0xb9e3,	// (0x00037980) main_mp4_pane_g5_ParamLimits

0xb9e3,	// (0x00037980) main_mp4_pane_g5

0x0007,

0xf7be,	// (0x0003b75b) main_mp4_pane_g_ParamLimits

0xf7be,	// (0x0003b75b) main_mp4_pane_g

0xba4b,	// (0x000379e8) main_mp4_pane_t1_ParamLimits

0xba4b,	// (0x000379e8) main_mp4_pane_t1

0xbaad,	// (0x00037a4a) main_mp4_pane_t2_ParamLimits

0xbaad,	// (0x00037a4a) main_mp4_pane_t2

0xbb11,	// (0x00037aae) main_mp4_pane_t3_ParamLimits

0xbb11,	// (0x00037aae) main_mp4_pane_t3

0xbb6f,	// (0x00037b0c) main_mp4_pane_t4_ParamLimits

0xbb6f,	// (0x00037b0c) main_mp4_pane_t4

0x0003,

0xf7cf,	// (0x0003b76c) main_mp4_pane_t_ParamLimits

0xf7cf,	// (0x0003b76c) main_mp4_pane_t

0xbbcd,	// (0x00037b6a) mp4_progress_pane_ParamLimits

0xbbcd,	// (0x00037b6a) mp4_progress_pane

0xbc01,	// (0x00037b9e) mp4_rocker_pane_ParamLimits

0xbc01,	// (0x00037b9e) mp4_rocker_pane

0xe989,	// (0x0003a926) mp4_progress_pane_t1

0xe9ab,	// (0x0003a948) mp4_progress_pane_t2

0x0001,

0xf7d8,	// (0x0003b775) mp4_progress_pane_t

0xe9cd,	// (0x0003a96a) mup_progress_pane_cp04

0x429b,	// (0x00030238) mp4_rocker_pane_g1

0xb0f1,	// (0x0003708e) aid_cell_size_keypad2_ParamLimits

0xb0f1,	// (0x0003708e) aid_cell_size_keypad2

0xb0f1,	// (0x0003708e) dialer2_ne_pane_ParamLimits

0xb0f1,	// (0x0003708e) dialer2_ne_pane

0xb0f1,	// (0x0003708e) grid_dialer2_keypad_pane_ParamLimits

0xb0f1,	// (0x0003708e) grid_dialer2_keypad_pane

0xe06a,	// (0x0003a007) bg_popup_call_pane_cp07_ParamLimits

0xe06a,	// (0x0003a007) bg_popup_call_pane_cp07

0x5138,	// (0x000310d5) dialer2_ne_pane_t1_ParamLimits

0x5138,	// (0x000310d5) dialer2_ne_pane_t1

0x0a78,	// (0x0002ca15) cell_dialer2_keypad_pane_ParamLimits

0x0a78,	// (0x0002ca15) cell_dialer2_keypad_pane

0xe06a,	// (0x0003a007) bg_button_pane_pane_cp04_ParamLimits

0xe06a,	// (0x0003a007) bg_button_pane_pane_cp04

0xc007,	// (0x00037fa4) cell_dialer2_keypad_pane_g1_ParamLimits

0xc007,	// (0x00037fa4) cell_dialer2_keypad_pane_g1

0x1e10,	// (0x0002ddad) aid_placing_vt_set_content_ParamLimits

0x1e10,	// (0x0002ddad) aid_placing_vt_set_content

0x1e34,	// (0x0002ddd1) aid_placing_vt_set_title_ParamLimits

0x1e34,	// (0x0002ddd1) aid_placing_vt_set_title

0xb0ff,	// (0x0003709c) main_image3_pane

0x0aed,	// (0x0002ca8a) area_side_right_pane_cp01_ParamLimits

0x0aed,	// (0x0002ca8a) area_side_right_pane_cp01

0x0b06,	// (0x0002caa3) main_image3_pane_g1_ParamLimits

0x0b06,	// (0x0002caa3) main_image3_pane_g1

0x0b14,	// (0x0002cab1) main_image3_pane_g2_ParamLimits

0x0b14,	// (0x0002cab1) main_image3_pane_g2

0x0b3c,	// (0x0002cad9) main_image3_pane_g3_ParamLimits

0x0b3c,	// (0x0002cad9) main_image3_pane_g3

0x0b66,	// (0x0002cb03) main_image3_pane_g4_ParamLimits

0x0b66,	// (0x0002cb03) main_image3_pane_g4

0x0003,

0xf7e7,	// (0x0003b784) main_image3_pane_g_ParamLimits

0xf7e7,	// (0x0003b784) main_image3_pane_g

0x0b90,	// (0x0002cb2d) main_image3_pane_t1_ParamLimits

0x0b90,	// (0x0002cb2d) main_image3_pane_t1

0x0be8,	// (0x0002cb85) main_image3_pane_t2_ParamLimits

0x0be8,	// (0x0002cb85) main_image3_pane_t2

0x0c3a,	// (0x0002cbd7) main_image3_pane_t3_ParamLimits

0x0c3a,	// (0x0002cbd7) main_image3_pane_t3

0x0003,

0xf7f0,	// (0x0003b78d) main_image3_pane_t_ParamLimits

0xf7f0,	// (0x0003b78d) main_image3_pane_t

0xbfa0,	// (0x00037f3d) grid_sctrl_middle_pane_cp01_ParamLimits

0xbfa0,	// (0x00037f3d) grid_sctrl_middle_pane_cp01

0x5178,	// (0x00031115) cell_sctrl_middle_pane_cp01_ParamLimits

0x5178,	// (0x00031115) cell_sctrl_middle_pane_cp01

0x5195,	// (0x00031132) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5195,	// (0x00031132) cell_sctrl_middle_pane_cp01_g1

0xb0ff,	// (0x0003709c) main_call4_pane

0x0cc2,	// (0x0002cc5f) aid_size_button_call4_ParamLimits

0x0cc2,	// (0x0002cc5f) aid_size_button_call4

0x0cf5,	// (0x0002cc92) call4_windows_pane_ParamLimits

0x0cf5,	// (0x0002cc92) call4_windows_pane

0x0d14,	// (0x0002ccb1) grid_call4_button_pane_ParamLimits

0x0d14,	// (0x0002ccb1) grid_call4_button_pane

0x51b6,	// (0x00031153) call4_windows_conf_pane

0x51cf,	// (0x0003116c) popup_call4_audio_first_window_ParamLimits

0x51cf,	// (0x0003116c) popup_call4_audio_first_window

0x521f,	// (0x000311bc) popup_call4_audio_second_window_ParamLimits

0x521f,	// (0x000311bc) popup_call4_audio_second_window

0x5238,	// (0x000311d5) popup_call4_audio_wait_window_ParamLimits

0x5238,	// (0x000311d5) popup_call4_audio_wait_window

0x0d3f,	// (0x0002ccdc) cell_call4_button_pane_ParamLimits

0x0d3f,	// (0x0002ccdc) cell_call4_button_pane

0x5246,	// (0x000311e3) bg_button_pane_cp09_ParamLimits

0x5246,	// (0x000311e3) bg_button_pane_cp09

0x0d66,	// (0x0002cd03) cell_call4_button_pane_g1_ParamLimits

0x0d66,	// (0x0002cd03) cell_call4_button_pane_g1

0x0d8c,	// (0x0002cd29) cell_call4_button_pane_t1_ParamLimits

0x0d8c,	// (0x0002cd29) cell_call4_button_pane_t1

0xea16,	// (0x0003a9b3) popup_call4_audio_conf_window_ParamLimits

0xea16,	// (0x0003a9b3) popup_call4_audio_conf_window

0x4bd9,	// (0x00030b76) mup3_progress_pane_t1_ParamLimits

0x4bf8,	// (0x00030b95) mup3_progress_pane_t2_ParamLimits

0xe504,	// (0x0003a4a1) mup3_progress_pane_t3_ParamLimits

0xf6ca,	// (0x0003b667) mup3_progress_pane_t_ParamLimits

0xe521,	// (0x0003a4be) mup_progress_pane_cp03_ParamLimits

0x5021,	// (0x00030fbe) mup3_control_keys_pane_g4_copy1

0xbc01,	// (0x00037b9e) mp4_rocker2_pane_ParamLimits

0xbc01,	// (0x00037b9e) mp4_rocker2_pane

0xbc7d,	// (0x00037c1a) mp4_rocker2_pane_g1

0xbc7d,	// (0x00037c1a) mp4_rocker2_pane_g2

0xbc7d,	// (0x00037c1a) mp4_rocker2_pane_g3

0xbc7d,	// (0x00037c1a) mp4_rocker2_pane_g4

0xbc7d,	// (0x00037c1a) mp4_rocker2_pane_g5

0x0004,

0xf7f9,	// (0x0003b796) mp4_rocker2_pane_g

0xb0ff,	// (0x0003709c) main_camera4_pane

0xb0ff,	// (0x0003709c) main_video4_pane

0x09d8,	// (0x0002c975) main_video_tele_dialer_pane_t1_ParamLimits

0x09d8,	// (0x0002c975) main_video_tele_dialer_pane_t1

0x09f1,	// (0x0002c98e) main_video_tele_dialer_pane_t2_ParamLimits

0x09f1,	// (0x0002c98e) main_video_tele_dialer_pane_t2

0x0001,

0xf7af,	// (0x0003b74c) main_video_tele_dialer_pane_t_ParamLimits

0xf7af,	// (0x0003b74c) main_video_tele_dialer_pane_t

0x0dca,	// (0x0002cd67) cam4_autofocus_pane_ParamLimits

0x0dca,	// (0x0002cd67) cam4_autofocus_pane

0x0de0,	// (0x0002cd7d) cam4_image_uncrop_pane_ParamLimits

0x0de0,	// (0x0002cd7d) cam4_image_uncrop_pane

0x0df9,	// (0x0002cd96) cam4_indicators_pane_ParamLimits

0x0df9,	// (0x0002cd96) cam4_indicators_pane

0x0e29,	// (0x0002cdc6) main_camera4_pane_g1_ParamLimits

0x0e29,	// (0x0002cdc6) main_camera4_pane_g1

0x0e3b,	// (0x0002cdd8) main_camera4_pane_g2_ParamLimits

0x0e3b,	// (0x0002cdd8) main_camera4_pane_g2

0x0e4e,	// (0x0002cdeb) main_camera4_pane_g3_ParamLimits

0x0e4e,	// (0x0002cdeb) main_camera4_pane_g3

0x0e61,	// (0x0002cdfe) main_camera4_pane_g4_ParamLimits

0x0e61,	// (0x0002cdfe) main_camera4_pane_g4

0x0e74,	// (0x0002ce11) main_camera4_pane_g5_ParamLimits

0x0e74,	// (0x0002ce11) main_camera4_pane_g5

0x0005,

0xf804,	// (0x0003b7a1) main_camera4_pane_g_ParamLimits

0xf804,	// (0x0003b7a1) main_camera4_pane_g

0x0e98,	// (0x0002ce35) main_camera4_pane_t1_ParamLimits

0x0e98,	// (0x0002ce35) main_camera4_pane_t1

0x527a,	// (0x00031217) bg_tb_trans_pane_cp06

0xbcab,	// (0x00037c48) cam4_indicators_pane_g1

0xbcbc,	// (0x00037c59) cam4_indicators_pane_g2

0x0002,

0xf81f,	// (0x0003b7bc) cam4_indicators_pane_g

0xbcd4,	// (0x00037c71) cam4_indicators_pane_t1

0x0ee8,	// (0x0002ce85) main_video4_pane_g1_ParamLimits

0x0ee8,	// (0x0002ce85) main_video4_pane_g1

0x0ef7,	// (0x0002ce94) main_video4_pane_g2_ParamLimits

0x0ef7,	// (0x0002ce94) main_video4_pane_g2

0x0f07,	// (0x0002cea4) main_video4_pane_g3_ParamLimits

0x0f07,	// (0x0002cea4) main_video4_pane_g3

0x0f17,	// (0x0002ceb4) main_video4_pane_g4_ParamLimits

0x0f17,	// (0x0002ceb4) main_video4_pane_g4

0x0004,

0xf826,	// (0x0003b7c3) main_video4_pane_g_ParamLimits

0xf826,	// (0x0003b7c3) main_video4_pane_g

0x0f37,	// (0x0002ced4) vid4_indicators_pane_ParamLimits

0x0f37,	// (0x0002ced4) vid4_indicators_pane

0x0f61,	// (0x0002cefe) video4_image_uncrop_cif_pane_ParamLimits

0x0f61,	// (0x0002cefe) video4_image_uncrop_cif_pane

0x0f7b,	// (0x0002cf18) video4_image_uncrop_nhd_pane_ParamLimits

0x0f7b,	// (0x0002cf18) video4_image_uncrop_nhd_pane

0x0de0,	// (0x0002cd7d) video4_image_uncrop_vga_pane_ParamLimits

0x0de0,	// (0x0002cd7d) video4_image_uncrop_vga_pane

0xb0f1,	// (0x0003708e) bg_tb_trans_pane_cp07

0xbd02,	// (0x00037c9f) vid4_indicators_pane_g1

0xbd18,	// (0x00037cb5) vid4_indicators_pane_g2

0xbd2c,	// (0x00037cc9) vid4_indicators_pane_g3

0x0004,

0xf831,	// (0x0003b7ce) vid4_indicators_pane_g

0xbd5d,	// (0x00037cfa) vid4_indicators_pane_t1

0x5288,	// (0x00031225) cam4_autofocus_pane_g1

0x5290,	// (0x0003122d) cam4_autofocus_pane_g2

0x5298,	// (0x00031235) cam4_autofocus_pane_g3

0x0002,

0xf83c,	// (0x0003b7d9) cam4_autofocus_pane_g

0x52a0,	// (0x0003123d) cam4_autofocus_pane_g3_copy1

0x50e1,	// (0x0003107e) video_down_pane_cp_t1

0x50ef,	// (0x0003108c) video_down_pane_cp_t2

0x0001,

0xf7b4,	// (0x0003b751) video_down_pane_cp_t

0xb0f1,	// (0x0003708e) popup_vitu2_window_ParamLimits

0xb0f1,	// (0x0003708e) popup_vitu2_window

0x0f92,	// (0x0002cf2f) aid_size_cell2_itu2_ParamLimits

0x0f92,	// (0x0002cf2f) aid_size_cell2_itu2

0x0fb8,	// (0x0002cf55) aid_size_cell_itu2_ParamLimits

0x0fb8,	// (0x0002cf55) aid_size_cell_itu2

0x1016,	// (0x0002cfb3) bg_popup_window_pane_cp09_ParamLimits

0x1016,	// (0x0002cfb3) bg_popup_window_pane_cp09

0x1024,	// (0x0002cfc1) field_vitu2_entry_pane_ParamLimits

0x1024,	// (0x0002cfc1) field_vitu2_entry_pane

0x104c,	// (0x0002cfe9) grid_vitu2_function_pane_ParamLimits

0x104c,	// (0x0002cfe9) grid_vitu2_function_pane

0x109d,	// (0x0002d03a) grid_vitu2_itu_pane_ParamLimits

0x109d,	// (0x0002d03a) grid_vitu2_itu_pane

0x112d,	// (0x0002d0ca) cell_vitu2_itu_pane_ParamLimits

0x112d,	// (0x0002d0ca) cell_vitu2_itu_pane

0x115b,	// (0x0002d0f8) cell_vitu2_function_pane_ParamLimits

0x115b,	// (0x0002d0f8) cell_vitu2_function_pane

0xea30,	// (0x0003a9cd) bg_popup_call_pane_cp08_ParamLimits

0xea30,	// (0x0003a9cd) bg_popup_call_pane_cp08

0xea47,	// (0x0003a9e4) field_vitu2_entry_pane_g1

0xea53,	// (0x0003a9f0) field_vitu2_entry_pane_g2

0x0002,

0xf843,	// (0x0003b7e0) field_vitu2_entry_pane_g

0xea5f,	// (0x0003a9fc) field_vitu2_entry_pane_t1_ParamLimits

0xea5f,	// (0x0003a9fc) field_vitu2_entry_pane_t1

0xea8e,	// (0x0003aa2b) field_vitu2_entry_pane_t2_ParamLimits

0xea8e,	// (0x0003aa2b) field_vitu2_entry_pane_t2

0x0001,

0xf84a,	// (0x0003b7e7) field_vitu2_entry_pane_t_ParamLimits

0xf84a,	// (0x0003b7e7) field_vitu2_entry_pane_t

0x119f,	// (0x0002d13c) bg_button_pane_cp010_ParamLimits

0x119f,	// (0x0002d13c) bg_button_pane_cp010

0x11ad,	// (0x0002d14a) cell_vitu2_itu_pane_g1

0x11d3,	// (0x0002d170) cell_vitu2_itu_pane_t1_ParamLimits

0x11d3,	// (0x0002d170) cell_vitu2_itu_pane_t1

0x1231,	// (0x0002d1ce) cell_vitu2_itu_pane_t2_ParamLimits

0x1231,	// (0x0002d1ce) cell_vitu2_itu_pane_t2

0x0002,

0xf854,	// (0x0003b7f1) cell_vitu2_itu_pane_t_ParamLimits

0xf854,	// (0x0003b7f1) cell_vitu2_itu_pane_t

0xb0f1,	// (0x0003708e) bg_button_pane_cp011

0x131d,	// (0x0002d2ba) cell_vitu2_function_pane_g1

0xb0ff,	// (0x0003709c) main_myfav_hc_pane

0x0c8a,	// (0x0002cc27) popup_image3_note_pane_ParamLimits

0x0c8a,	// (0x0002cc27) popup_image3_note_pane

0x0ca6,	// (0x0002cc43) popup_image3_tool_bar_pane_ParamLimits

0x0ca6,	// (0x0002cc43) popup_image3_tool_bar_pane

0x12bf,	// (0x0002d25c) cell_vitu2_itu_pane_t3_ParamLimits

0x12bf,	// (0x0002d25c) cell_vitu2_itu_pane_t3

0xb07c,	// (0x00037019) bg_popup_trans_pane

0xeab3,	// (0x0003aa50) grid_image3_tool_bar_pane

0xeabd,	// (0x0003aa5a) bg_popup_trans_pane_g1

0xc484,	// (0x00038421) bg_popup_trans_pane_g2

0xeac5,	// (0x0003aa62) bg_popup_trans_pane_g3

0xeacd,	// (0x0003aa6a) bg_popup_trans_pane_g4

0xead5,	// (0x0003aa72) bg_popup_trans_pane_g5

0xeadd,	// (0x0003aa7a) bg_popup_trans_pane_g6

0xeae5,	// (0x0003aa82) bg_popup_trans_pane_g7

0xeaed,	// (0x0003aa8a) bg_popup_trans_pane_g8

0xc464,	// (0x00038401) bg_popup_trans_pane_g9

0x0008,

0xf85b,	// (0x0003b7f8) bg_popup_trans_pane_g

0xeaf5,	// (0x0003aa92) cell_image3_tool_bar_pane_ParamLimits

0xeaf5,	// (0x0003aa92) cell_image3_tool_bar_pane

0xc045,	// (0x00037fe2) cell_image3_tool_bar_pane_g1

0xb07c,	// (0x00037019) bg_popup_trans_pane_cp1

0xeb0b,	// (0x0003aaa8) popup_image3_note_pane_t1

0xeb19,	// (0x0003aab6) popup_image3_note_pane_t2

0xeb27,	// (0x0003aac4) popup_image3_note_pane_t3

0x0002,

0xf86e,	// (0x0003b80b) popup_image3_note_pane_t

0xeb37,	// (0x0003aad4) popup_image3_note_pane_t3_copy1

0x52a8,	// (0x00031245) bg_myfav_hc_instruction_pane_ParamLimits

0x52a8,	// (0x00031245) bg_myfav_hc_instruction_pane

0x52c0,	// (0x0003125d) cell_myfav_contact_pane_ParamLimits

0x52c0,	// (0x0003125d) cell_myfav_contact_pane

0x52dc,	// (0x00031279) cell_myfav_contact_pane_cp1_ParamLimits

0x52dc,	// (0x00031279) cell_myfav_contact_pane_cp1

0x52f4,	// (0x00031291) cell_myfav_contact_pane_cp2_ParamLimits

0x52f4,	// (0x00031291) cell_myfav_contact_pane_cp2

0x530c,	// (0x000312a9) cell_myfav_contact_pane_cp3_ParamLimits

0x530c,	// (0x000312a9) cell_myfav_contact_pane_cp3

0x5323,	// (0x000312c0) cell_myfav_contact_pane_cp4_ParamLimits

0x5323,	// (0x000312c0) cell_myfav_contact_pane_cp4

0x533b,	// (0x000312d8) cell_myfav_contact_pane_cp5_ParamLimits

0x533b,	// (0x000312d8) cell_myfav_contact_pane_cp5

0x534f,	// (0x000312ec) cell_myfav_contact_pane_cp6_ParamLimits

0x534f,	// (0x000312ec) cell_myfav_contact_pane_cp6

0x5365,	// (0x00031302) cell_myfav_contact_pane_cp7_ParamLimits

0x5365,	// (0x00031302) cell_myfav_contact_pane_cp7

0xeb45,	// (0x0003aae2) listscroll_gen_pane_cp05

0x537d,	// (0x0003131a) main_myfav_hc_pane_g1_ParamLimits

0x537d,	// (0x0003131a) main_myfav_hc_pane_g1

0x5397,	// (0x00031334) main_myfav_hc_pane_g2_ParamLimits

0x5397,	// (0x00031334) main_myfav_hc_pane_g2

0x0002,

0xf875,	// (0x0003b812) main_myfav_hc_pane_g_ParamLimits

0xf875,	// (0x0003b812) main_myfav_hc_pane_g

0x53cb,	// (0x00031368) main_myfav_hc_pane_t1_ParamLimits

0x53cb,	// (0x00031368) main_myfav_hc_pane_t1

0xeb4e,	// (0x0003aaeb) main_myfav_hc_pane_t2_ParamLimits

0xeb4e,	// (0x0003aaeb) main_myfav_hc_pane_t2

0xeb60,	// (0x0003aafd) main_myfav_hc_pane_t3_ParamLimits

0xeb60,	// (0x0003aafd) main_myfav_hc_pane_t3

0x53e2,	// (0x0003137f) main_myfav_hc_pane_t4_ParamLimits

0x53e2,	// (0x0003137f) main_myfav_hc_pane_t4

0x0004,

0xf87c,	// (0x0003b819) main_myfav_hc_pane_t_ParamLimits

0xf87c,	// (0x0003b819) main_myfav_hc_pane_t

0xc045,	// (0x00037fe2) bg_myfav_hc_instruction_pane_g1

0xeb72,	// (0x0003ab0f) cell_myfav_contact_pane_g1_ParamLimits

0xeb72,	// (0x0003ab0f) cell_myfav_contact_pane_g1

0xeb72,	// (0x0003ab0f) cell_myfav_contact_pane_g2_ParamLimits

0xeb72,	// (0x0003ab0f) cell_myfav_contact_pane_g2

0xeb7e,	// (0x0003ab1b) cell_myfav_contact_pane_g3_ParamLimits

0xeb7e,	// (0x0003ab1b) cell_myfav_contact_pane_g3

0xc015,	// (0x00037fb2) cell_myfav_contact_pane_g4_ParamLimits

0xc015,	// (0x00037fb2) cell_myfav_contact_pane_g4

0xeb8b,	// (0x0003ab28) cell_myfav_contact_pane_g5_ParamLimits

0xeb8b,	// (0x0003ab28) cell_myfav_contact_pane_g5

0x0004,

0xf887,	// (0x0003b824) cell_myfav_contact_pane_g_ParamLimits

0xf887,	// (0x0003b824) cell_myfav_contact_pane_g

0x53b1,	// (0x0003134e) main_myfav_hc_pane_g3_ParamLimits

0x53b1,	// (0x0003134e) main_myfav_hc_pane_g3

0x01b7,	// (0x0002c154) popup_adpt_find_window

0x540c,	// (0x000313a9) afind_page_pane_ParamLimits

0x540c,	// (0x000313a9) afind_page_pane

0x5422,	// (0x000313bf) aid_size_cell_afind_ParamLimits

0x5422,	// (0x000313bf) aid_size_cell_afind

0x5440,	// (0x000313dd) bg_popup_sub_pane_cp09_ParamLimits

0x5440,	// (0x000313dd) bg_popup_sub_pane_cp09

0x5452,	// (0x000313ef) find_pane_cp01_ParamLimits

0x5452,	// (0x000313ef) find_pane_cp01

0xeb97,	// (0x0003ab34) grid_afind_control_pane_ParamLimits

0xeb97,	// (0x0003ab34) grid_afind_control_pane

0x5466,	// (0x00031403) grid_afind_pane_ParamLimits

0x5466,	// (0x00031403) grid_afind_pane

0x5488,	// (0x00031425) cell_afind_pane_ParamLimits

0x5488,	// (0x00031425) cell_afind_pane

0xc045,	// (0x00037fe2) afind_page_pane_g1

0x54f1,	// (0x0003148e) afind_page_pane_g2

0x54f9,	// (0x00031496) afind_page_pane_g3

0x0002,

0xf892,	// (0x0003b82f) afind_page_pane_g

0x5501,	// (0x0003149e) afind_page_pane_t1

0xebbd,	// (0x0003ab5a) cell_afind_grid_control_pane_ParamLimits

0xebbd,	// (0x0003ab5a) cell_afind_grid_control_pane

0xebcc,	// (0x0003ab69) bg_button_pane_cp69_ParamLimits

0xebcc,	// (0x0003ab69) bg_button_pane_cp69

0x550f,	// (0x000314ac) cell_afind_pane_g1_ParamLimits

0x550f,	// (0x000314ac) cell_afind_pane_g1

0x551c,	// (0x000314b9) cell_afind_pane_t1_ParamLimits

0x551c,	// (0x000314b9) cell_afind_pane_t1

0xebd8,	// (0x0003ab75) bg_button_pane_cp72

0xebe0,	// (0x0003ab7d) cell_afind_grid_control_pane_g1

0x3ad5,	// (0x0002fa72) aid_image_placing_area_ParamLimits

0x3ad5,	// (0x0002fa72) aid_image_placing_area

0xc007,	// (0x00037fa4) field_vitu_entry_pane_g1_ParamLimits

0xc007,	// (0x00037fa4) field_vitu_entry_pane_g1

0xc007,	// (0x00037fa4) field_vitu_entry_pane_g2_ParamLimits

0xc007,	// (0x00037fa4) field_vitu_entry_pane_g2

0x0001,

0xf1bc,	// (0x0003b159) field_vitu_entry_pane_g_ParamLimits

0xf1bc,	// (0x0003b159) field_vitu_entry_pane_g

0xe83b,	// (0x0003a7d8) cell_vitu_itu_pane_g1_ParamLimits

0xe7a2,	// (0x0003a73f) cell_vitu_itu_pane_t3_ParamLimits

0xe7a2,	// (0x0003a73f) cell_vitu_itu_pane_t3

0xe989,	// (0x0003a926) mp4_progress_pane_t1_ParamLimits

0xe9ab,	// (0x0003a948) mp4_progress_pane_t2_ParamLimits

0xf7d8,	// (0x0003b775) mp4_progress_pane_t_ParamLimits

0xe9cd,	// (0x0003a96a) mup_progress_pane_cp04_ParamLimits

0x53f6,	// (0x00031393) main_myfav_hc_pane_t5_ParamLimits

0x53f6,	// (0x00031393) main_myfav_hc_pane_t5

0xb0a2,	// (0x0003703f) aid_zoom_text_primary

0x01b7,	// (0x0002c154) popup_adpt_find_window_ParamLimits

0xb0f1,	// (0x0003708e) main_cam_set_pane

0x0e12,	// (0x0002cdaf) cam4_zoom_pane_ParamLimits

0x0e12,	// (0x0002cdaf) cam4_zoom_pane

0x552e,	// (0x000314cb) main_cam_set_pane_g1_ParamLimits

0x552e,	// (0x000314cb) main_cam_set_pane_g1

0x553c,	// (0x000314d9) main_cam_set_pane_g2_ParamLimits

0x553c,	// (0x000314d9) main_cam_set_pane_g2

0x0001,

0xf899,	// (0x0003b836) main_cam_set_pane_g_ParamLimits

0xf899,	// (0x0003b836) main_cam_set_pane_g

0x555d,	// (0x000314fa) main_cam_set_pane_t1_ParamLimits

0x555d,	// (0x000314fa) main_cam_set_pane_t1

0x5578,	// (0x00031515) main_cset_listscroll_pane_ParamLimits

0x5578,	// (0x00031515) main_cset_listscroll_pane

0x55a0,	// (0x0003153d) main_cset_slider_pane_ParamLimits

0x55a0,	// (0x0003153d) main_cset_slider_pane

0xebf1,	// (0x0003ab8e) main_cset_list_pane_ParamLimits

0xebf1,	// (0x0003ab8e) main_cset_list_pane

0xec01,	// (0x0003ab9e) scroll_pane_cp028

0x55ca,	// (0x00031567) aid_area_touch_slider

0x55e6,	// (0x00031583) cset_slider_pane

0x5609,	// (0x000315a6) main_cset_slider_pane_g1

0x561e,	// (0x000315bb) main_cset_slider_pane_g2

0x0011,

0xf89e,	// (0x0003b83b) main_cset_slider_pane_g

0xec3a,	// (0x0003abd7) main_cset_slider_pane_t1

0x56e0,	// (0x0003167d) main_cset_slider_pane_t2

0x56fa,	// (0x00031697) main_cset_slider_pane_t3

0x5714,	// (0x000316b1) main_cset_slider_pane_t4

0x572e,	// (0x000316cb) main_cset_slider_pane_t5

0x574c,	// (0x000316e9) main_cset_slider_pane_t6

0x5761,	// (0x000316fe) main_cset_slider_pane_t7

0x000e,

0xf8c3,	// (0x0003b860) main_cset_slider_pane_t

0x586d,	// (0x0003180a) cset_list_set_pane_ParamLimits

0x586d,	// (0x0003180a) cset_list_set_pane

0xecd4,	// (0x0003ac71) aid_position_infowindow_above

0xecdc,	// (0x0003ac79) aid_position_infowindow_below

0x5881,	// (0x0003181e) cset_list_set_pane_g1_ParamLimits

0x5881,	// (0x0003181e) cset_list_set_pane_g1

0x588d,	// (0x0003182a) cset_list_set_pane_g3_ParamLimits

0x588d,	// (0x0003182a) cset_list_set_pane_g3

0x0001,

0xf8e2,	// (0x0003b87f) cset_list_set_pane_g_ParamLimits

0xf8e2,	// (0x0003b87f) cset_list_set_pane_g

0x589c,	// (0x00031839) cset_list_set_pane_t1_ParamLimits

0x589c,	// (0x00031839) cset_list_set_pane_t1

0xbfa0,	// (0x00037f3d) list_highlight_pane_cp021_ParamLimits

0xbfa0,	// (0x00037f3d) list_highlight_pane_cp021

0xccd2,	// (0x00038c6f) cset_slider_pane_g1

0xcce4,	// (0x00038c81) cset_slider_pane_g2

0xccdb,	// (0x00038c78) cset_slider_pane_g3

0x0002,

0xf8e7,	// (0x0003b884) cset_slider_pane_g

0xc960,	// (0x000388fd) aid_area_touch_cam4_zoom

0x1331,	// (0x0002d2ce) cam4_zoom_cont_pane

0x1339,	// (0x0002d2d6) cam4_zoom_pane_g1

0x1341,	// (0x0002d2de) cam4_zoom_pane_g2

0x1349,	// (0x0002d2e6) cam4_zoom_pane_g3

0x0002,

0xf8ee,	// (0x0003b88b) cam4_zoom_pane_g

0xbd74,	// (0x00037d11) cam4_zoom_cont_pane_g1

0xbd7d,	// (0x00037d1a) cam4_zoom_cont_pane_g2

0xbd86,	// (0x00037d23) cam4_zoom_cont_pane_g3

0x0002,

0xf8f5,	// (0x0003b892) cam4_zoom_cont_pane_g

0x0ce0,	// (0x0002cc7d) call4_image_pane_ParamLimits

0x0ce0,	// (0x0002cc7d) call4_image_pane

0x51b6,	// (0x00031153) call4_windows_conf_pane_ParamLimits

0x51fd,	// (0x0003119a) popup_call4_audio_in_window_ParamLimits

0x51fd,	// (0x0003119a) popup_call4_audio_in_window

0xb07c,	// (0x00037019) bg_popup_call2_act_pane_cp02

0xea0e,	// (0x0003a9ab) call4_list_conf_pane

0xc045,	// (0x00037fe2) call4_image_pane_g1

0xc045,	// (0x00037fe2) call4_image_pane_g2

0x0001,

0xf0af,	// (0x0003b04c) call4_image_pane_g

0xece4,	// (0x0003ac81) list_single_graphic_popup_conf4_pane_ParamLimits

0xece4,	// (0x0003ac81) list_single_graphic_popup_conf4_pane

0xb07c,	// (0x00037019) list_highlight_pane_cp022

0xecf9,	// (0x0003ac96) list_single_graphic_popup_conf4_pane_g1

0xc9b9,	// (0x00038956) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8fc,	// (0x0003b899) list_single_graphic_popup_conf4_pane_g

0xed01,	// (0x0003ac9e) list_single_graphic_popup_conf4_pane_t1

0x1f4b,	// (0x0002dee8) popup_vtel_slider_window_ParamLimits

0x1f4b,	// (0x0002dee8) popup_vtel_slider_window

0xe9e0,	// (0x0003a97d) dialer2_ne_pane_t2_ParamLimits

0xe9e0,	// (0x0003a97d) dialer2_ne_pane_t2

0x0001,

0xf7dd,	// (0x0003b77a) dialer2_ne_pane_t_ParamLimits

0xf7dd,	// (0x0003b77a) dialer2_ne_pane_t

0xe06a,	// (0x0003a007) bg_popup_sub_pane_cp010_ParamLimits

0xe06a,	// (0x0003a007) bg_popup_sub_pane_cp010

0x58b1,	// (0x0003184e) popup_vtel_slider_window_g1_ParamLimits

0x58b1,	// (0x0003184e) popup_vtel_slider_window_g1

0x58c4,	// (0x00031861) popup_vtel_slider_window_g2_ParamLimits

0x58c4,	// (0x00031861) popup_vtel_slider_window_g2

0x0003,

0xf901,	// (0x0003b89e) popup_vtel_slider_window_g_ParamLimits

0xf901,	// (0x0003b89e) popup_vtel_slider_window_g

0x591a,	// (0x000318b7) vtel_slider_pane_ParamLimits

0x591a,	// (0x000318b7) vtel_slider_pane

0x593c,	// (0x000318d9) vtel_slider_pane_g1_ParamLimits

0x593c,	// (0x000318d9) vtel_slider_pane_g1

0x5950,	// (0x000318ed) vtel_slider_pane_g2_ParamLimits

0x5950,	// (0x000318ed) vtel_slider_pane_g2

0x5968,	// (0x00031905) vtel_slider_pane_g3_ParamLimits

0x5968,	// (0x00031905) vtel_slider_pane_g3

0x593c,	// (0x000318d9) vtel_slider_pane_g4_ParamLimits

0x593c,	// (0x000318d9) vtel_slider_pane_g4

0x597e,	// (0x0003191b) vtel_slider_pane_g5_ParamLimits

0x597e,	// (0x0003191b) vtel_slider_pane_g5

0x0004,

0xf90a,	// (0x0003b8a7) vtel_slider_pane_g_ParamLimits

0xf90a,	// (0x0003b8a7) vtel_slider_pane_g

0xb0f1,	// (0x0003708e) main_gallery2_pane

0x0fe4,	// (0x0002cf81) aid_size_row_itut2_dropdow_list_ParamLimits

0x0fe4,	// (0x0002cf81) aid_size_row_itut2_dropdow_list

0x1074,	// (0x0002d011) grid_vitu2_function_top_pane_ParamLimits

0x1074,	// (0x0002d011) grid_vitu2_function_top_pane

0x10d8,	// (0x0002d075) popup_vitu2_dropdown_list_window_ParamLimits

0x10d8,	// (0x0002d075) popup_vitu2_dropdown_list_window

0x10ff,	// (0x0002d09c) popup_vitu2_match_list_window

0x1351,	// (0x0002d2ee) cell_vitu2_function_top_pane_ParamLimits

0x1351,	// (0x0002d2ee) cell_vitu2_function_top_pane

0x136b,	// (0x0002d308) cell_vitu2_function_top_pane_cp01_ParamLimits

0x136b,	// (0x0002d308) cell_vitu2_function_top_pane_cp01

0x1387,	// (0x0002d324) cell_vitu2_function_top_wide_pane_ParamLimits

0x1387,	// (0x0002d324) cell_vitu2_function_top_wide_pane

0xb0f1,	// (0x0003708e) bg_button_pane_cp012

0x13a5,	// (0x0002d342) cell_vitu2_function_top_pane_g1

0xbd8f,	// (0x00037d2c) bg_button_pane_cp013_ParamLimits

0xbd8f,	// (0x00037d2c) bg_button_pane_cp013

0x5994,	// (0x00031931) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x5994,	// (0x00031931) cell_vitu2_function_top_wide_pane_g1

0xb0f1,	// (0x0003708e) bg_popup_sub_pane_cp20

0x13b9,	// (0x0002d356) list_vitu2_match_list_pane

0xeabd,	// (0x0003aa5a) bg_popup_sub_pane_cp20_g1

0xeac5,	// (0x0003aa62) bg_popup_sub_pane_cp20_g2

0xc484,	// (0x00038421) bg_popup_sub_pane_cp20_g3

0xeacd,	// (0x0003aa6a) bg_popup_sub_pane_cp20_g4

0xc464,	// (0x00038401) bg_popup_sub_pane_cp20_g5

0xed17,	// (0x0003acb4) bg_popup_sub_pane_cp20_g6

0xeadd,	// (0x0003aa7a) bg_popup_sub_pane_cp20_g7

0xeae5,	// (0x0003aa82) bg_popup_sub_pane_cp20_g8

0xeaed,	// (0x0003aa8a) bg_popup_sub_pane_cp20_g9

0x0008,

0xf915,	// (0x0003b8b2) bg_popup_sub_pane_cp20_g

0xbdab,	// (0x00037d48) list_vitu2_match_list_item_pane_ParamLimits

0xbdab,	// (0x00037d48) list_vitu2_match_list_item_pane

0xbdbd,	// (0x00037d5a) list_vitu2_match_list_item_pane_t1

0xb0ff,	// (0x0003709c) bg_popup_sub_pane_cp21

0xc258,	// (0x000381f5) grid_vitu2_dropdown_list_pane

0x13d1,	// (0x0002d36e) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x13d1,	// (0x0002d36e) cell_vitu2_dropdown_list_char_pane

0x13f3,	// (0x0002d390) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x13f3,	// (0x0002d390) cell_vitu2_dropdown_list_ctrl_pane

0xed1f,	// (0x0003acbc) cell_vitu2_dropdown_list_char_pane_g1

0xed28,	// (0x0003acc5) cell_vitu2_dropdown_list_char_pane_g2

0xed31,	// (0x0003acce) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf928,	// (0x0003b8c5) cell_vitu2_dropdown_list_char_pane_g

0x141d,	// (0x0002d3ba) cell_vitu2_dropdown_list_char_pane_t1

0x59ac,	// (0x00031949) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x59ac,	// (0x00031949) cell_vitu2_dropdown_list_ctrl_pane_g1

0x59bc,	// (0x00031959) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x59bc,	// (0x00031959) cell_vitu2_dropdown_list_ctrl_pane_g2

0x59cd,	// (0x0003196a) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x59cd,	// (0x0003196a) cell_vitu2_dropdown_list_ctrl_pane_g3

0x142b,	// (0x0002d3c8) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x142b,	// (0x0002d3c8) cell_vitu2_dropdown_list_ctrl_pane_g4

0x527a,	// (0x00031217) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x527a,	// (0x00031217) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf92f,	// (0x0003b8cc) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf92f,	// (0x0003b8cc) cell_vitu2_dropdown_list_ctrl_pane_g

0x59dd,	// (0x0003197a) aid_size_cell_gallery2_ParamLimits

0x59dd,	// (0x0003197a) aid_size_cell_gallery2

0x59fb,	// (0x00031998) grid_gallery2_pane_ParamLimits

0x59fb,	// (0x00031998) grid_gallery2_pane

0x5a15,	// (0x000319b2) scroll_pane_cp029_ParamLimits

0x5a15,	// (0x000319b2) scroll_pane_cp029

0x5a26,	// (0x000319c3) cell_gallery2_pane_ParamLimits

0x5a26,	// (0x000319c3) cell_gallery2_pane

0xed3a,	// (0x0003acd7) cell_gallery2_pane_g2

0x5a8a,	// (0x00031a27) cell_gallery2_pane_g3

0xed42,	// (0x0003acdf) cell_gallery2_pane_g4

0xed4a,	// (0x0003ace7) cell_gallery2_pane_g5

0xc258,	// (0x000381f5) grid_highlight_pane_cp10

0x10ff,	// (0x0002d09c) popup_vitu2_match_list_window_ParamLimits

0x1116,	// (0x0002d0b3) popup_vitu2_query_window_ParamLimits

0x1116,	// (0x0002d0b3) popup_vitu2_query_window

0xb0ff,	// (0x0003709c) bg_vitu2_candi_button_pane

0xed1f,	// (0x0003acbc) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xed28,	// (0x0003acc5) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xed31,	// (0x0003acce) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5a92,	// (0x00031a2f) bg_button_pane_cp015

0x5aa9,	// (0x00031a46) bg_button_pane_cp016

0x5ab5,	// (0x00031a52) bg_button_pane_cp017

0xcc60,	// (0x00038bfd) bg_popup_sub_pane_cp22

0xed52,	// (0x0003acef) popup_vitu2_query_window_g1

0x5af6,	// (0x00031a93) popup_vitu2_query_window_g2

0x0002,

0xf93a,	// (0x0003b8d7) popup_vitu2_query_window_g

0x5b1c,	// (0x00031ab9) popup_vitu2_query_window_t1_ParamLimits

0x5b1c,	// (0x00031ab9) popup_vitu2_query_window_t1

0x5b51,	// (0x00031aee) popup_vitu2_query_window_t2_ParamLimits

0x5b51,	// (0x00031aee) popup_vitu2_query_window_t2

0x5b63,	// (0x00031b00) popup_vitu2_query_window_t3_ParamLimits

0x5b63,	// (0x00031b00) popup_vitu2_query_window_t3

0x5b8b,	// (0x00031b28) popup_vitu2_query_window_t4_ParamLimits

0x5b8b,	// (0x00031b28) popup_vitu2_query_window_t4

0x5b9f,	// (0x00031b3c) popup_vitu2_query_window_t5_ParamLimits

0x5b9f,	// (0x00031b3c) popup_vitu2_query_window_t5

0x0006,

0xf941,	// (0x0003b8de) popup_vitu2_query_window_t_ParamLimits

0xf941,	// (0x0003b8de) popup_vitu2_query_window_t

0xebe9,	// (0x0003ab86) main_cset_text_pane

0x55ca,	// (0x00031567) aid_area_touch_slider_ParamLimits

0x55e6,	// (0x00031583) cset_slider_pane_ParamLimits

0x5609,	// (0x000315a6) main_cset_slider_pane_g1_ParamLimits

0x561e,	// (0x000315bb) main_cset_slider_pane_g2_ParamLimits

0xec0a,	// (0x0003aba7) main_cset_slider_pane_g3_ParamLimits

0xec0a,	// (0x0003aba7) main_cset_slider_pane_g3

0x5633,	// (0x000315d0) main_cset_slider_pane_g4_ParamLimits

0x5633,	// (0x000315d0) main_cset_slider_pane_g4

0x5642,	// (0x000315df) main_cset_slider_pane_g5_ParamLimits

0x5642,	// (0x000315df) main_cset_slider_pane_g5

0x5650,	// (0x000315ed) main_cset_slider_pane_g6_ParamLimits

0x5650,	// (0x000315ed) main_cset_slider_pane_g6

0xf89e,	// (0x0003b83b) main_cset_slider_pane_g_ParamLimits

0xec3a,	// (0x0003abd7) main_cset_slider_pane_t1_ParamLimits

0x56e0,	// (0x0003167d) main_cset_slider_pane_t2_ParamLimits

0x56fa,	// (0x00031697) main_cset_slider_pane_t3_ParamLimits

0x5714,	// (0x000316b1) main_cset_slider_pane_t4_ParamLimits

0x572e,	// (0x000316cb) main_cset_slider_pane_t5_ParamLimits

0x574c,	// (0x000316e9) main_cset_slider_pane_t6_ParamLimits

0x5761,	// (0x000316fe) main_cset_slider_pane_t7_ParamLimits

0x578f,	// (0x0003172c) main_cset_slider_pane_t8_ParamLimits

0x578f,	// (0x0003172c) main_cset_slider_pane_t8

0x57b7,	// (0x00031754) main_cset_slider_pane_t9_ParamLimits

0x57b7,	// (0x00031754) main_cset_slider_pane_t9

0x57df,	// (0x0003177c) main_cset_slider_pane_t10_ParamLimits

0x57df,	// (0x0003177c) main_cset_slider_pane_t10

0x5807,	// (0x000317a4) main_cset_slider_pane_t11_ParamLimits

0x5807,	// (0x000317a4) main_cset_slider_pane_t11

0x5831,	// (0x000317ce) main_cset_slider_pane_t12_ParamLimits

0x5831,	// (0x000317ce) main_cset_slider_pane_t12

0x584e,	// (0x000317eb) main_cset_slider_pane_t13_ParamLimits

0x584e,	// (0x000317eb) main_cset_slider_pane_t13

0xf8c3,	// (0x0003b860) main_cset_slider_pane_t_ParamLimits

0xb07c,	// (0x00037019) bg_popup_sub_pane_cp011

0xed5e,	// (0x0003acfb) main_cset_text_pane_g1

0xed66,	// (0x0003ad03) main_cset_text_pane_t1

0xed74,	// (0x0003ad11) main_cset_text_pane_t2

0xed82,	// (0x0003ad1f) main_cset_text_pane_t3

0xed90,	// (0x0003ad2d) main_cset_text_pane_t4

0xed9e,	// (0x0003ad3b) main_cset_text_pane_t5

0xedac,	// (0x0003ad49) main_cset_text_pane_t6

0xedba,	// (0x0003ad57) main_cset_text_pane_t7

0x0006,

0xf950,	// (0x0003b8ed) main_cset_text_pane_t

0xb0ff,	// (0x0003709c) main_cam4_burst_pane

0xb0ff,	// (0x0003709c) main_cam5_pane

0xebab,	// (0x0003ab48) bg_button_pane_cp019

0xebb4,	// (0x0003ab51) bg_button_pane_cp020

0xec16,	// (0x0003abb3) main_cset_slider_pane_g7_ParamLimits

0xec16,	// (0x0003abb3) main_cset_slider_pane_g7

0xec22,	// (0x0003abbf) main_cset_slider_pane_g8_ParamLimits

0xec22,	// (0x0003abbf) main_cset_slider_pane_g8

0x5664,	// (0x00031601) main_cset_slider_pane_g9_ParamLimits

0x5664,	// (0x00031601) main_cset_slider_pane_g9

0x5670,	// (0x0003160d) main_cset_slider_pane_g10_ParamLimits

0x5670,	// (0x0003160d) main_cset_slider_pane_g10

0x567c,	// (0x00031619) main_cset_slider_pane_g11_ParamLimits

0x567c,	// (0x00031619) main_cset_slider_pane_g11

0x5688,	// (0x00031625) main_cset_slider_pane_g12_ParamLimits

0x5688,	// (0x00031625) main_cset_slider_pane_g12

0x5694,	// (0x00031631) main_cset_slider_pane_g13_ParamLimits

0x5694,	// (0x00031631) main_cset_slider_pane_g13

0x56a0,	// (0x0003163d) main_cset_slider_pane_g14_ParamLimits

0x56a0,	// (0x0003163d) main_cset_slider_pane_g14

0x56ac,	// (0x00031649) main_cset_slider_pane_g15_ParamLimits

0x56ac,	// (0x00031649) main_cset_slider_pane_g15

0xec62,	// (0x0003abff) main_cset_slider_pane_t14_ParamLimits

0xec62,	// (0x0003abff) main_cset_slider_pane_t14

0xec9b,	// (0x0003ac38) main_cset_slider_pane_t15_ParamLimits

0xec9b,	// (0x0003ac38) main_cset_slider_pane_t15

0x5c09,	// (0x00031ba6) aid_cam4_burst_size_cell_ParamLimits

0x5c09,	// (0x00031ba6) aid_cam4_burst_size_cell

0x5c29,	// (0x00031bc6) grid_cam4_burst_pane_ParamLimits

0x5c29,	// (0x00031bc6) grid_cam4_burst_pane

0x5c63,	// (0x00031c00) linegrid_cam4_burst_pane_ParamLimits

0x5c63,	// (0x00031c00) linegrid_cam4_burst_pane

0x5c85,	// (0x00031c22) scroll_pane_cp30_ParamLimits

0x5c85,	// (0x00031c22) scroll_pane_cp30

0x5c91,	// (0x00031c2e) cell_cam4_burst_pane_ParamLimits

0x5c91,	// (0x00031c2e) cell_cam4_burst_pane

0xedc8,	// (0x0003ad65) linegrid_cam4_burst_pane_g1_ParamLimits

0xedc8,	// (0x0003ad65) linegrid_cam4_burst_pane_g1

0x5ce6,	// (0x00031c83) linegrid_cam4_burst_pane_g2_ParamLimits

0x5ce6,	// (0x00031c83) linegrid_cam4_burst_pane_g2

0xedd5,	// (0x0003ad72) linegrid_cam4_burst_pane_g3_ParamLimits

0xedd5,	// (0x0003ad72) linegrid_cam4_burst_pane_g3

0x0002,

0xf95f,	// (0x0003b8fc) linegrid_cam4_burst_pane_g_ParamLimits

0xf95f,	// (0x0003b8fc) linegrid_cam4_burst_pane_g

0x5cf7,	// (0x00031c94) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x5cf7,	// (0x00031c94) linegrid_cam4_burst_pane_g3_copy1

0xede2,	// (0x0003ad7f) linegrid_cam4_burst_pane_g4_ParamLimits

0xede2,	// (0x0003ad7f) linegrid_cam4_burst_pane_g4

0x5d15,	// (0x00031cb2) linegrid_cam4_burst_pane_g5_ParamLimits

0x5d15,	// (0x00031cb2) linegrid_cam4_burst_pane_g5

0x5d26,	// (0x00031cc3) linegrid_cam4_burst_pane_g6_ParamLimits

0x5d26,	// (0x00031cc3) linegrid_cam4_burst_pane_g6

0xedef,	// (0x0003ad8c) linegrid_cam4_burst_pane_g7_ParamLimits

0xedef,	// (0x0003ad8c) linegrid_cam4_burst_pane_g7

0x5d3d,	// (0x00031cda) cell_cam4_burst_pane_g1

0xee08,	// (0x0003ada5) main_cam5_pane_t1_ParamLimits

0xee08,	// (0x0003ada5) main_cam5_pane_t1

0xee1a,	// (0x0003adb7) main_cam5_pane_t2_ParamLimits

0xee1a,	// (0x0003adb7) main_cam5_pane_t2

0xee2c,	// (0x0003adc9) main_cam5_pane_t3_ParamLimits

0xee2c,	// (0x0003adc9) main_cam5_pane_t3

0xee3e,	// (0x0003addb) main_cam5_pane_t4_ParamLimits

0xee3e,	// (0x0003addb) main_cam5_pane_t4

0xee56,	// (0x0003adf3) main_cam5_pane_t5_ParamLimits

0xee56,	// (0x0003adf3) main_cam5_pane_t5

0xee6a,	// (0x0003ae07) main_cam5_pane_t6_ParamLimits

0xee6a,	// (0x0003ae07) main_cam5_pane_t6

0xee7e,	// (0x0003ae1b) main_cam5_pane_t7_ParamLimits

0xee7e,	// (0x0003ae1b) main_cam5_pane_t7

0xee90,	// (0x0003ae2d) main_cam5_pane_t8_ParamLimits

0xee90,	// (0x0003ae2d) main_cam5_pane_t8

0xeeae,	// (0x0003ae4b) main_cam5_pane_t9_ParamLimits

0xeeae,	// (0x0003ae4b) main_cam5_pane_t9

0xeec0,	// (0x0003ae5d) main_cam5_pane_t10_ParamLimits

0xeec0,	// (0x0003ae5d) main_cam5_pane_t10

0xeed2,	// (0x0003ae6f) main_cam5_pane_t11_ParamLimits

0xeed2,	// (0x0003ae6f) main_cam5_pane_t11

0xeee6,	// (0x0003ae83) main_cam5_pane_t12_ParamLimits

0xeee6,	// (0x0003ae83) main_cam5_pane_t12

0xeefd,	// (0x0003ae9a) main_cam5_pane_t13_ParamLimits

0xeefd,	// (0x0003ae9a) main_cam5_pane_t13

0x000c,

0xf96b,	// (0x0003b908) main_cam5_pane_t_ParamLimits

0xf96b,	// (0x0003b908) main_cam5_pane_t

0x0236,	// (0x0002c1d3) popup_scut_keymap_window_ParamLimits

0x0236,	// (0x0002c1d3) popup_scut_keymap_window

0x5d50,	// (0x00031ced) aid_size_cell_brow_shortcut

0xc258,	// (0x000381f5) bg_popup_window_pane_cp010

0x5d5c,	// (0x00031cf9) grid_scut_pane

0x5d68,	// (0x00031d05) cell_scut_pane_ParamLimits

0x5d68,	// (0x00031d05) cell_scut_pane

0x5d81,	// (0x00031d1e) cell_scut_pane_g1

0xef20,	// (0x0003aebd) cell_scut_pane_t1

0xef2f,	// (0x0003aecc) cell_scut_pane_t2

0x5d8a,	// (0x00031d27) cell_scut_pane_t3

0x0002,

0xf986,	// (0x0003b923) cell_scut_pane_t

0x477c,	// (0x00030719) main_mup3_pane_g8_ParamLimits

0x477c,	// (0x00030719) main_mup3_pane_g8

0x0ffe,	// (0x0002cf9b) area_vitu2_query_pane_ParamLimits

0x0ffe,	// (0x0002cf9b) area_vitu2_query_pane

0x5ac1,	// (0x00031a5e) input_focus_pane_cp08

0xef3e,	// (0x0003aedb) area_vitu2_query_pane_g1

0x5d98,	// (0x00031d35) area_vitu2_query_pane_g2

0x0001,

0xf98d,	// (0x0003b92a) area_vitu2_query_pane_g

0x5dad,	// (0x00031d4a) area_vitu2_query_pane_t1_ParamLimits

0x5dad,	// (0x00031d4a) area_vitu2_query_pane_t1

0x5dc1,	// (0x00031d5e) area_vitu2_query_pane_t2_ParamLimits

0x5dc1,	// (0x00031d5e) area_vitu2_query_pane_t2

0x5dd5,	// (0x00031d72) area_vitu2_query_pane_t3_ParamLimits

0x5dd5,	// (0x00031d72) area_vitu2_query_pane_t3

0xef4a,	// (0x0003aee7) area_vitu2_query_pane_t4_ParamLimits

0xef4a,	// (0x0003aee7) area_vitu2_query_pane_t4

0xef72,	// (0x0003af0f) area_vitu2_query_pane_t5_ParamLimits

0xef72,	// (0x0003af0f) area_vitu2_query_pane_t5

0xef9a,	// (0x0003af37) area_vitu2_query_pane_t6_ParamLimits

0xef9a,	// (0x0003af37) area_vitu2_query_pane_t6

0x0006,

0xf992,	// (0x0003b92f) area_vitu2_query_pane_t_ParamLimits

0xf992,	// (0x0003b92f) area_vitu2_query_pane_t

0x5e01,	// (0x00031d9e) bg_button_pane_cp018

0x5e0d,	// (0x00031daa) bg_button_pane_cp021

0x5e19,	// (0x00031db6) bg_button_pane_cp022

0x5e44,	// (0x00031de1) input_focus_pane_cp09

0x3242,	// (0x0002f1df) aid_size_touch_mv_arrow_left

0x326b,	// (0x0002f208) aid_size_touch_mv_arrow_right

0x56c4,	// (0x00031661) main_cset_slider_pane_g16_ParamLimits

0x56c4,	// (0x00031661) main_cset_slider_pane_g16

0x56d2,	// (0x0003166f) main_cset_slider_pane_g17_ParamLimits

0x56d2,	// (0x0003166f) main_cset_slider_pane_g17

0x5d3d,	// (0x00031cda) cell_cam4_burst_pane_g1_ParamLimits

0xb07c,	// (0x00037019) compa_mode_pane

0x58d4,	// (0x00031871) popup_vtel_slider_window_g3_ParamLimits

0x58d4,	// (0x00031871) popup_vtel_slider_window_g3

0x58eb,	// (0x00031888) popup_vtel_slider_window_g4_ParamLimits

0x58eb,	// (0x00031888) popup_vtel_slider_window_g4

0x5902,	// (0x0003189f) popup_vtel_slider_window_t1_ParamLimits

0x5902,	// (0x0003189f) popup_vtel_slider_window_t1

0xb0ff,	// (0x0003709c) main_cl_pane

0xb848,	// (0x000377e5) popup_imed_adjust2_window_ParamLimits

0xcc60,	// (0x00038bfd) bg_tb_trans_pane_cp05_ParamLimits

0xe72f,	// (0x0003a6cc) popup_imed_adjust2_window_g1_ParamLimits

0xe73e,	// (0x0003a6db) popup_imed_adjust2_window_g2_ParamLimits

0xe73e,	// (0x0003a6db) popup_imed_adjust2_window_g2

0xe74a,	// (0x0003a6e7) popup_imed_adjust2_window_g3_ParamLimits

0xe74a,	// (0x0003a6e7) popup_imed_adjust2_window_g3

0x0002,

0xf70d,	// (0x0003b6aa) popup_imed_adjust2_window_g_ParamLimits

0xf70d,	// (0x0003b6aa) popup_imed_adjust2_window_g

0xe756,	// (0x0003a6f3) popup_imed_adjust2_window_t1_ParamLimits

0xe76e,	// (0x0003a70b) slider_imed_adjust_pane_ParamLimits

0xe782,	// (0x0003a71f) slider_imed_adjust_pane_g1_ParamLimits

0xe792,	// (0x0003a72f) slider_imed_adjust_pane_g2_ParamLimits

0xe7e1,	// (0x0003a77e) slider_imed_adjust_pane_g3_ParamLimits

0xe7f2,	// (0x0003a78f) slider_imed_adjust_pane_g4_ParamLimits

0xf714,	// (0x0003b6b1) slider_imed_adjust_pane_g_ParamLimits

0x0db2,	// (0x0002cd4f) aid_touch_area_cam4_ParamLimits

0x0db2,	// (0x0002cd4f) aid_touch_area_cam4

0xbc85,	// (0x00037c22) battery_pane_cp01

0x0e85,	// (0x0002ce22) main_camera4_pane_g6_ParamLimits

0x0e85,	// (0x0002ce22) main_camera4_pane_g6

0x0eaf,	// (0x0002ce4c) main_camera4_pane_t2_ParamLimits

0x0eaf,	// (0x0002ce4c) main_camera4_pane_t2

0x0001,

0xf811,	// (0x0003b7ae) main_camera4_pane_t_ParamLimits

0xf811,	// (0x0003b7ae) main_camera4_pane_t

0x0ed0,	// (0x0002ce6d) aid_touch_area_vid4_ParamLimits

0x0ed0,	// (0x0002ce6d) aid_touch_area_vid4

0x0f27,	// (0x0002cec4) main_video4_pane_g5_ParamLimits

0x0f27,	// (0x0002cec4) main_video4_pane_g5

0x0f4d,	// (0x0002ceea) vid4_progress_pane_ParamLimits

0x0f4d,	// (0x0002ceea) vid4_progress_pane

0xec2e,	// (0x0003abcb) main_cset_slider_pane_g18_ParamLimits

0xec2e,	// (0x0003abcb) main_cset_slider_pane_g18

0xedfc,	// (0x0003ad99) cell_cam4_burst_pane_g2_ParamLimits

0xedfc,	// (0x0003ad99) cell_cam4_burst_pane_g2

0x0001,

0xf966,	// (0x0003b903) cell_cam4_burst_pane_g_ParamLimits

0xf966,	// (0x0003b903) cell_cam4_burst_pane_g

0xc0a3,	// (0x00038040) bg_cl_pane_ParamLimits

0xc0a3,	// (0x00038040) bg_cl_pane

0x5e55,	// (0x00031df2) cl_header_pane_ParamLimits

0x5e55,	// (0x00031df2) cl_header_pane

0x5e69,	// (0x00031e06) cl_listscroll_pane_ParamLimits

0x5e69,	// (0x00031e06) cl_listscroll_pane

0xefe6,	// (0x0003af83) bg_cl_pane_g1

0xefee,	// (0x0003af8b) bg_cl_pane_g2

0xeff6,	// (0x0003af93) bg_cl_pane_g3

0xeffe,	// (0x0003af9b) bg_cl_pane_g4

0xf006,	// (0x0003afa3) bg_cl_pane_g5

0xf00e,	// (0x0003afab) bg_cl_pane_g6

0xf016,	// (0x0003afb3) bg_cl_pane_g7

0xf01e,	// (0x0003afbb) bg_cl_pane_g8

0xf026,	// (0x0003afc3) bg_cl_pane_g9

0x0008,

0xf9a1,	// (0x0003b93e) bg_cl_pane_g

0x5e79,	// (0x00031e16) aid_height_cl_leading_ParamLimits

0x5e79,	// (0x00031e16) aid_height_cl_leading

0x5e85,	// (0x00031e22) aid_height_cl_text_ParamLimits

0x5e85,	// (0x00031e22) aid_height_cl_text

0xbfa0,	// (0x00037f3d) bg_cl_header_pane_ParamLimits

0xbfa0,	// (0x00037f3d) bg_cl_header_pane

0x5ea4,	// (0x00031e41) cl_header_pane_g1_ParamLimits

0x5ea4,	// (0x00031e41) cl_header_pane_g1

0x5eba,	// (0x00031e57) cl_header_pane_t1_ParamLimits

0x5eba,	// (0x00031e57) cl_header_pane_t1

0xf02e,	// (0x0003afcb) cl_list_pane

0xec01,	// (0x0003ab9e) hc_scroll_pane_cp01

0xc464,	// (0x00038401) bg_cl_header_pane_g1

0xeabd,	// (0x0003aa5a) bg_cl_header_pane_g2

0xc484,	// (0x00038421) bg_cl_header_pane_g3

0xeacd,	// (0x0003aa6a) bg_cl_header_pane_g4

0xeac5,	// (0x0003aa62) bg_cl_header_pane_g5

0xed17,	// (0x0003acb4) bg_cl_header_pane_g6

0xeae5,	// (0x0003aa82) bg_cl_header_pane_g7

0xeaed,	// (0x0003aa8a) bg_cl_header_pane_g8

0xeadd,	// (0x0003aa7a) bg_cl_header_pane_g9

0x0008,

0xf9b4,	// (0x0003b951) bg_cl_header_pane_g

0x5ed3,	// (0x00031e70) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x5ed3,	// (0x00031e70) hc_cl_list_double_graphic_heading_pane

0x5ee6,	// (0x00031e83) hc_cl_list_single_graphic_pane_ParamLimits

0x5ee6,	// (0x00031e83) hc_cl_list_single_graphic_pane

0x5efe,	// (0x00031e9b) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x5efe,	// (0x00031e9b) hc_cl_list_single_graphic_pane_g1

0x5f0a,	// (0x00031ea7) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x5f0a,	// (0x00031ea7) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9c7,	// (0x0003b964) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9c7,	// (0x0003b964) hc_cl_list_single_graphic_pane_g

0x5f1e,	// (0x00031ebb) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x5f1e,	// (0x00031ebb) hc_cl_list_single_graphic_pane_t1

0x5efe,	// (0x00031e9b) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x5efe,	// (0x00031e9b) hc_cl_list_double_graphic_heading_pane_g1

0x5f33,	// (0x00031ed0) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x5f33,	// (0x00031ed0) hc_cl_list_double_graphic_heading_pane_g2

0x5f47,	// (0x00031ee4) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x5f47,	// (0x00031ee4) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9cc,	// (0x0003b969) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9cc,	// (0x0003b969) hc_cl_list_double_graphic_heading_pane_g

0x5f5b,	// (0x00031ef8) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x5f5b,	// (0x00031ef8) hc_cl_list_double_graphic_heading_pane_t1

0x5f70,	// (0x00031f0d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x5f70,	// (0x00031f0d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9d3,	// (0x0003b970) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9d3,	// (0x0003b970) hc_cl_list_double_graphic_heading_pane_t

0xbdd3,	// (0x00037d70) vid4_progress_pane_g1

0xbde3,	// (0x00037d80) vid4_progress_pane_g2

0x1447,	// (0x0002d3e4) vid4_progress_pane_g3

0xbdf3,	// (0x00037d90) vid4_progress_pane_g4

0x0004,

0xf9d8,	// (0x0003b975) vid4_progress_pane_g

0x1459,	// (0x0002d3f6) vid4_progress_pane_t1

0xbe11,	// (0x00037dae) vid4_progress_pane_t2

0x0002,

0xf9e3,	// (0x0003b980) vid4_progress_pane_t

0x1473,	// (0x0002d410) wait_bar_pane_cp07

0xe078,	// (0x0003a015) blid_firmament_pane_ParamLimits

0xe0bb,	// (0x0003a058) popup_blid_sat_info2_window_g1

0xe0df,	// (0x0003a07c) popup_blid_sat_info2_window_t3

0xe0ed,	// (0x0003a08a) popup_blid_sat_info2_window_t4

0xe0fb,	// (0x0003a098) popup_blid_sat_info2_window_t5

0xe109,	// (0x0003a0a6) popup_blid_sat_info2_window_t6

0xe119,	// (0x0003a0b6) popup_blid_sat_info2_window_t7

0xe127,	// (0x0003a0c4) popup_blid_sat_info2_window_t8

0xe135,	// (0x0003a0d2) popup_blid_sat_info2_window_t9

0xe143,	// (0x0003a0e0) popup_blid_sat_info2_window_t10

0xe20a,	// (0x0003a1a7) aid_firma_cardinal_ParamLimits

0xe21e,	// (0x0003a1bb) blid_firmament_pane_t1_ParamLimits

0xe235,	// (0x0003a1d2) blid_firmament_pane_t2_ParamLimits

0xe24c,	// (0x0003a1e9) blid_firmament_pane_t3_ParamLimits

0xe263,	// (0x0003a200) blid_firmament_pane_t4_ParamLimits

0xf606,	// (0x0003b5a3) blid_firmament_pane_t_ParamLimits

0xe27a,	// (0x0003a217) blid_sat_info_pane_ParamLimits

0xb0f1,	// (0x0003708e) main_cam_set_pane_ParamLimits

0x4ea0,	// (0x00030e3d) aid_size_cell_colour_35_ParamLimits

0x4ec0,	// (0x00030e5d) aid_size_cell_colour_112_ParamLimits

0x4ee0,	// (0x00030e7d) aid_size_cell_effect_ParamLimits

0xcc60,	// (0x00038bfd) bg_tb_trans_pane_cp02_ParamLimits

0xc6e3,	// (0x00038680) heading_imed_pane_ParamLimits

0x4f00,	// (0x00030e9d) listscroll_imed_pane_ParamLimits

0xd563,	// (0x00039500) popup_call2_audio_first_window_g5_ParamLimits

0xd563,	// (0x00039500) popup_call2_audio_first_window_g5

0x0a8f,	// (0x0002ca2c) aid_size_touch_image3_arrow_left_ParamLimits

0x0a8f,	// (0x0002ca2c) aid_size_touch_image3_arrow_left

0x0abb,	// (0x0002ca58) aid_size_touch_image3_arrow_right_ParamLimits

0x0abb,	// (0x0002ca58) aid_size_touch_image3_arrow_right

0xbe2a,	// (0x00037dc7) vid4_progress_pane_t3

0x50a5,	// (0x00031042) main_hwr_training_symbol_option_pane_ParamLimits

0x50a5,	// (0x00031042) main_hwr_training_symbol_option_pane

0xe8e9,	// (0x0003a886) popup_hwr_training_preview_window_ParamLimits

0xe8e9,	// (0x0003a886) popup_hwr_training_preview_window

0x0997,	// (0x0002c934) hwr_training_navi_pane_g5_ParamLimits

0x0997,	// (0x0002c934) hwr_training_navi_pane_g5

0xeaab,	// (0x0003aa48) popup_char_count_window

0xb0f1,	// (0x0003708e) bg_popup_sub_pane_cp20_ParamLimits

0x13b9,	// (0x0002d356) list_vitu2_match_list_pane_ParamLimits

0x13c5,	// (0x0002d362) vitu2_page_scroll_pane_ParamLimits

0x13c5,	// (0x0002d362) vitu2_page_scroll_pane

0x5fbb,	// (0x00031f58) list_single_hwr_training_symbol_option_pane_ParamLimits

0x5fbb,	// (0x00031f58) list_single_hwr_training_symbol_option_pane

0x5fce,	// (0x00031f6b) list_single_hwr_training_symbol_option_pane_g1

0x5fd6,	// (0x00031f73) list_single_hwr_training_symbol_option_pane_t1

0x5fe4,	// (0x00031f81) bg_button_pane_cp023

0x5fed,	// (0x00031f8a) bg_button_pane_cp024

0x6020,	// (0x00031fbd) vitu2_page_scroll_pane_g1

0x6028,	// (0x00031fc5) vitu2_page_scroll_pane_g2

0x0001,

0xf9ea,	// (0x0003b987) vitu2_page_scroll_pane_g

0x6030,	// (0x00031fcd) vitu2_page_scroll_pane_t1

0x603f,	// (0x00031fdc) popup_char_count_window_g1

0x6048,	// (0x00031fe5) popup_char_count_window_g2

0x6051,	// (0x00031fee) popup_char_count_window_g3

0x0002,

0xf9ef,	// (0x0003b98c) popup_char_count_window_g

0x605a,	// (0x00031ff7) popup_char_count_window_t1

0xb0ff,	// (0x0003709c) main_vded2_pane

0xe71b,	// (0x0003a6b8) aid_size_cell_imed_line

0xe725,	// (0x0003a6c2) grid_imed_line_width_pane

0xbd3f,	// (0x00037cdc) vid4_indicators_pane_g4

0x6068,	// (0x00032005) cell_imed_line_width_pane_ParamLimits

0x6068,	// (0x00032005) cell_imed_line_width_pane

0x607e,	// (0x0003201b) cell_imed_line_width_pane_g1

0x6087,	// (0x00032024) cell_imed_line_width_pane_g2

0x0001,

0xf9f6,	// (0x0003b993) cell_imed_line_width_pane_g

0x608f,	// (0x0003202c) main_vded2_pane_g1_ParamLimits

0x608f,	// (0x0003202c) main_vded2_pane_g1

0x60aa,	// (0x00032047) main_vded2_pane_g2_ParamLimits

0x60aa,	// (0x00032047) main_vded2_pane_g2

0x0001,

0xf9fb,	// (0x0003b998) main_vded2_pane_g_ParamLimits

0xf9fb,	// (0x0003b998) main_vded2_pane_g

0x60bc,	// (0x00032059) vded2_slider_pane_ParamLimits

0x60bc,	// (0x00032059) vded2_slider_pane

0x60cc,	// (0x00032069) aid_size_touch_vded2_end

0x60d6,	// (0x00032073) aid_size_touch_vded2_playhead

0x60e0,	// (0x0003207d) aid_size_touch_vded2_start

0x60e8,	// (0x00032085) vded2_slider_bg_pane

0x60f1,	// (0x0003208e) vded2_slider_pane_g1

0x60fa,	// (0x00032097) vded2_slider_pane_g2

0x6102,	// (0x0003209f) vded2_slider_pane_g3

0x0002,

0xfa00,	// (0x0003b99d) vded2_slider_pane_g

0x610d,	// (0x000320aa) vded2_slider_bg_pane_g1

0x6116,	// (0x000320b3) vded2_slider_bg_pane_g2

0x611f,	// (0x000320bc) vded2_slider_bg_pane_g3

0x0002,

0xfa07,	// (0x0003b9a4) vded2_slider_bg_pane_g

0x3737,	// (0x0002f6d4) aid_postcard_touch_down_pane_ParamLimits

0x3737,	// (0x0002f6d4) aid_postcard_touch_down_pane

0x374f,	// (0x0002f6ec) aid_postcard_touch_up_pane_ParamLimits

0x374f,	// (0x0002f6ec) aid_postcard_touch_up_pane

0xb0ff,	// (0x0003709c) main_blid2_pane

0xb82a,	// (0x000377c7) popup_blid2_search_window

0xb07c,	// (0x00037019) blid2_gps_pane

0xb07c,	// (0x00037019) blid2_navig_pane

0xb07c,	// (0x00037019) blid2_search_pane

0xb07c,	// (0x00037019) blid2_tripm_pane

0x6128,	// (0x000320c5) blid2_search_pane_g1_ParamLimits

0x6128,	// (0x000320c5) blid2_search_pane_g1

0x613b,	// (0x000320d8) blid2_search_pane_t1_ParamLimits

0x613b,	// (0x000320d8) blid2_search_pane_t1

0x614d,	// (0x000320ea) aid_size_cell_blid2_gps_ParamLimits

0x614d,	// (0x000320ea) aid_size_cell_blid2_gps

0x6165,	// (0x00032102) blid2_gps_pane_g1_ParamLimits

0x6165,	// (0x00032102) blid2_gps_pane_g1

0x6179,	// (0x00032116) grid_blid2_satellite_pane_ParamLimits

0x6179,	// (0x00032116) grid_blid2_satellite_pane

0x6191,	// (0x0003212e) blid2_navig_pane_g1_ParamLimits

0x6191,	// (0x0003212e) blid2_navig_pane_g1

0x619d,	// (0x0003213a) blid2_navig_pane_t1_ParamLimits

0x619d,	// (0x0003213a) blid2_navig_pane_t1

0x61b8,	// (0x00032155) blid2_navig_pane_t2_ParamLimits

0x61b8,	// (0x00032155) blid2_navig_pane_t2

0x0001,

0xfa0e,	// (0x0003b9ab) blid2_navig_pane_t_ParamLimits

0xfa0e,	// (0x0003b9ab) blid2_navig_pane_t

0x61d3,	// (0x00032170) blid2_navig_ring_pane_ParamLimits

0x61d3,	// (0x00032170) blid2_navig_ring_pane

0x61ee,	// (0x0003218b) blid2_speed_pane_ParamLimits

0x61ee,	// (0x0003218b) blid2_speed_pane

0x61fa,	// (0x00032197) blid2_tripm_pane_g1_ParamLimits

0x61fa,	// (0x00032197) blid2_tripm_pane_g1

0x6215,	// (0x000321b2) blid2_tripm_pane_g2_ParamLimits

0x6215,	// (0x000321b2) blid2_tripm_pane_g2

0x6228,	// (0x000321c5) blid2_tripm_pane_g3_ParamLimits

0x6228,	// (0x000321c5) blid2_tripm_pane_g3

0x6239,	// (0x000321d6) blid2_tripm_pane_g4_ParamLimits

0x6239,	// (0x000321d6) blid2_tripm_pane_g4

0x624a,	// (0x000321e7) blid2_tripm_pane_g5_ParamLimits

0x624a,	// (0x000321e7) blid2_tripm_pane_g5

0x0005,

0xfa13,	// (0x0003b9b0) blid2_tripm_pane_g_ParamLimits

0xfa13,	// (0x0003b9b0) blid2_tripm_pane_g

0x6270,	// (0x0003220d) blid2_tripm_pane_t1_ParamLimits

0x6270,	// (0x0003220d) blid2_tripm_pane_t1

0x6289,	// (0x00032226) blid2_tripm_pane_t2_ParamLimits

0x6289,	// (0x00032226) blid2_tripm_pane_t2

0x62a2,	// (0x0003223f) blid2_tripm_pane_t3_ParamLimits

0x62a2,	// (0x0003223f) blid2_tripm_pane_t3

0x0003,

0xfa20,	// (0x0003b9bd) blid2_tripm_pane_t_ParamLimits

0xfa20,	// (0x0003b9bd) blid2_tripm_pane_t

0x62e9,	// (0x00032286) cell_blid2_satellite_pane_ParamLimits

0x62e9,	// (0x00032286) cell_blid2_satellite_pane

0x6305,	// (0x000322a2) cell_blid2_satellite_pane_g1

0x630e,	// (0x000322ab) cell_blid2_satellite_pane_t1

0xc045,	// (0x00037fe2) blid2_speed_pane_g1

0x631c,	// (0x000322b9) blid2_speed_pane_t1

0x632a,	// (0x000322c7) blid2_speed_pane_t2

0x0001,

0xfa29,	// (0x0003b9c6) blid2_speed_pane_t

0xc045,	// (0x00037fe2) blid2_navig_ring_pane_g1

0x6338,	// (0x000322d5) blid2_navig_ring_pane_g2

0x6340,	// (0x000322dd) blid2_navig_ring_pane_g3

0x6348,	// (0x000322e5) blid2_navig_ring_pane_g4

0x6350,	// (0x000322ed) blid2_navig_ring_pane_g5

0x0004,

0xfa2e,	// (0x0003b9cb) blid2_navig_ring_pane_g

0xb07c,	// (0x00037019) bg_popup_window_pane_cp011

0x6358,	// (0x000322f5) popup_blid2_search_window_g1

0x6360,	// (0x000322fd) popup_blid2_search_window_t1

0x636e,	// (0x0003230b) popup_blid2_search_window_t2

0x0001,

0xfa39,	// (0x0003b9d6) popup_blid2_search_window_t

0xc373,	// (0x00038310) main_browser_pane_g1

0xc0a3,	// (0x00038040) main_browser_pane_ParamLimits

0xb0f1,	// (0x0003708e) bg_button_pane_cp011_ParamLimits

0x131d,	// (0x0002d2ba) cell_vitu2_function_pane_g1_ParamLimits

0xcc60,	// (0x00038bfd) bg_popup_sub_pane_cp22_ParamLimits

0x5ac1,	// (0x00031a5e) input_focus_pane_cp08_ParamLimits

0x5add,	// (0x00031a7a) popup_vitu2_query_button_pane_ParamLimits

0x5add,	// (0x00031a7a) popup_vitu2_query_button_pane

0x5aec,	// (0x00031a89) popup_vitu2_query_input_button_pane

0xed52,	// (0x0003acef) popup_vitu2_query_window_g1_ParamLimits

0x5af6,	// (0x00031a93) popup_vitu2_query_window_g2_ParamLimits

0xf93a,	// (0x0003b8d7) popup_vitu2_query_window_g_ParamLimits

0xb07c,	// (0x00037019) bg_button_pane_cp026

0x637c,	// (0x00032319) popup_vitu2_query_input_button_pane_g1

0xb07c,	// (0x00037019) bg_button_pane_cp025

0x6384,	// (0x00032321) popup_vitu2_query_button_pane_t1

0x436c,	// (0x00030309) main_mp3_pane_t6

0x437a,	// (0x00030317) popup_slider_window_cp01

0xbca3,	// (0x00037c40) cam4_battery_pane

0xbcf8,	// (0x00037c95) cam4_battery_pane_cp02

0xbdcb,	// (0x00037d68) cam4_battery_pane_cp01

0xbdcb,	// (0x00037d68) cam4_battery_pane_cp03

0x429b,	// (0x00030238) cam4_battery_pane_g1

0xc045,	// (0x00037fe2) cam4_battery_pane_g2

0x0001,

0xfa3e,	// (0x0003b9db) cam4_battery_pane_g

0xe151,	// (0x0003a0ee) popup_blid_sat_info2_window_t11

0x3242,	// (0x0002f1df) aid_size_touch_mv_arrow_left_ParamLimits

0x326b,	// (0x0002f208) aid_size_touch_mv_arrow_right_ParamLimits

0xcae7,	// (0x00038a84) navi_pane_g1_ParamLimits

0x32aa,	// (0x0002f247) navi_pane_g2_ParamLimits

0x32d8,	// (0x0002f275) navi_pane_g3_ParamLimits

0xf32f,	// (0x0003b2cc) navi_pane_g_ParamLimits

0x3332,	// (0x0002f2cf) navi_pane_mv_t1_ParamLimits

0x4f0c,	// (0x00030ea9) grid_imed_effect_pane_ParamLimits

0x1e53,	// (0x0002ddf0) aid_placing_vt_slider_lsc

0xc2af,	// (0x0003824c) aid_placing_vt_slider_prt

0xbfa0,	// (0x00037f3d) bg_tb_trans_pane_cp01_ParamLimits

0xe3b9,	// (0x0003a356) popup_image_details_window_g1_ParamLimits

0xe3cc,	// (0x0003a369) popup_image_details_window_g2_ParamLimits

0xe3e1,	// (0x0003a37e) popup_image_details_window_g3_ParamLimits

0xe3e1,	// (0x0003a37e) popup_image_details_window_g3

0xf646,	// (0x0003b5e3) popup_image_details_window_g_ParamLimits

0xe3f5,	// (0x0003a392) popup_image_details_window_t1_ParamLimits

0xe407,	// (0x0003a3a4) popup_image_details_window_t2_ParamLimits

0xe420,	// (0x0003a3bd) popup_image_details_window_t3_ParamLimits

0xe434,	// (0x0003a3d1) popup_image_details_window_t4_ParamLimits

0xe44f,	// (0x0003a3ec) popup_image_details_window_t5_ParamLimits

0xf64d,	// (0x0003b5ea) popup_image_details_window_t_ParamLimits

0x5e91,	// (0x00031e2e) cl_header_name_pane_ParamLimits

0x5e91,	// (0x00031e2e) cl_header_name_pane

0x6392,	// (0x0003232f) cl_header_name_pane_t1_ParamLimits

0x6392,	// (0x0003232f) cl_header_name_pane_t1

0x63b3,	// (0x00032350) cl_header_name_pane_t2_ParamLimits

0x63b3,	// (0x00032350) cl_header_name_pane_t2

0x63f5,	// (0x00032392) cl_header_name_pane_t3_ParamLimits

0x63f5,	// (0x00032392) cl_header_name_pane_t3

0x0002,

0xfa43,	// (0x0003b9e0) cl_header_name_pane_t_ParamLimits

0xfa43,	// (0x0003b9e0) cl_header_name_pane_t

0x3303,	// (0x0002f2a0) navi_pane_mv_g2_ParamLimits

0xea47,	// (0x0003a9e4) field_vitu2_entry_pane_g1_ParamLimits

0xea53,	// (0x0003a9f0) field_vitu2_entry_pane_g2_ParamLimits

0xcc3e,	// (0x00038bdb) field_vitu2_entry_pane_g3_ParamLimits

0xcc3e,	// (0x00038bdb) field_vitu2_entry_pane_g3

0xf843,	// (0x0003b7e0) field_vitu2_entry_pane_g_ParamLimits

0x11ad,	// (0x0002d14a) cell_vitu2_itu_pane_g1_ParamLimits

0x11c5,	// (0x0002d162) cell_vitu2_itu_pane_g2_ParamLimits

0x11c5,	// (0x0002d162) cell_vitu2_itu_pane_g2

0x0001,

0xf84f,	// (0x0003b7ec) cell_vitu2_itu_pane_g_ParamLimits

0xf84f,	// (0x0003b7ec) cell_vitu2_itu_pane_g

0xb0f1,	// (0x0003708e) bg_vkb2_func_pane_cp05_ParamLimits

0xb0f1,	// (0x0003708e) bg_vkb2_func_pane_cp05

0xb0f1,	// (0x0003708e) bg_vkb2_func_pane_cp03

0xb0f1,	// (0x0003708e) bg_vkb2_func_pane_cp04

0xb0f1,	// (0x0003708e) bg_vkb2_func_pane_cp10_ParamLimits

0xb0f1,	// (0x0003708e) bg_vkb2_func_pane_cp10

0x5e2e,	// (0x00031dcb) bg_vkb2_func_pane_cp08

0x5e01,	// (0x00031d9e) bg_vkb2_func_pane_cp06

0x5e0d,	// (0x00031daa) bg_vkb2_func_pane_cp07

0x5ff6,	// (0x00031f93) bg_vkb2_func_pane_cp11_ParamLimits

0x5ff6,	// (0x00031f93) bg_vkb2_func_pane_cp11

0x600b,	// (0x00031fa8) bg_vkb2_func_pane_cp12_ParamLimits

0x600b,	// (0x00031fa8) bg_vkb2_func_pane_cp12

0xb07c,	// (0x00037019) bg_vkb2_func_pane_cp09

0xeabd,	// (0x0003aa5a) bg_vkb2_func_pane_g1

0xc484,	// (0x00038421) bg_vkb2_func_pane_g2

0xeac5,	// (0x0003aa62) bg_vkb2_func_pane_g3

0xeacd,	// (0x0003aa6a) bg_vkb2_func_pane_g4

0xed17,	// (0x0003acb4) bg_vkb2_func_pane_g5

0xeae5,	// (0x0003aa82) bg_vkb2_func_pane_g6

0xeaed,	// (0x0003aa8a) bg_vkb2_func_pane_g7

0xeadd,	// (0x0003aa7a) bg_vkb2_func_pane_g8

0xc464,	// (0x00038401) bg_vkb2_func_pane_g9

0x0008,

0xfa4a,	// (0x0003b9e7) bg_vkb2_func_pane_g

0x625e,	// (0x000321fb) blid2_tripm_pane_g6_ParamLimits

0x625e,	// (0x000321fb) blid2_tripm_pane_g6

0xe981,	// (0x0003a91e) mp4_progress_pane_g1

0x62d5,	// (0x00032272) blid2_tripm_values_pane_ParamLimits

0x62d5,	// (0x00032272) blid2_tripm_values_pane

0x6426,	// (0x000323c3) blid2_tripm_values_pane_t1

0x6434,	// (0x000323d1) blid2_tripm_values_pane_t2

0x6442,	// (0x000323df) blid2_tripm_values_pane_t3

0x6450,	// (0x000323ed) blid2_tripm_values_pane_t4

0x645e,	// (0x000323fb) blid2_tripm_values_pane_t5

0x646c,	// (0x00032409) blid2_tripm_values_pane_t6

0x647a,	// (0x00032417) blid2_tripm_values_pane_t7

0x6488,	// (0x00032425) blid2_tripm_values_pane_t8

0x6496,	// (0x00032433) blid2_tripm_values_pane_t9

0x0008,

0xfa5d,	// (0x0003b9fa) blid2_tripm_values_pane_t

0x1e90,	// (0x0002de2d) call_video_pane_t1_ParamLimits

0x1eaa,	// (0x0002de47) call_video_pane_t2_ParamLimits

0xf1dd,	// (0x0003b17a) call_video_pane_t_ParamLimits

0x365c,	// (0x0002f5f9) msg_header_pane_g1_ParamLimits

0xcd2e,	// (0x00038ccb) msg_header_pane_g2_ParamLimits

0xcd2e,	// (0x00038ccb) msg_header_pane_g2

0x0001,

0xf3cd,	// (0x0003b36a) msg_header_pane_g_ParamLimits

0xf3cd,	// (0x0003b36a) msg_header_pane_g

0xc0a3,	// (0x00038040) main_clock2_pane_ParamLimits

0x4ce7,	// (0x00030c84) grid_clock2_toolbar_pane_ParamLimits

0x4ce7,	// (0x00030c84) grid_clock2_toolbar_pane

0x4ce7,	// (0x00030c84) listscroll_clock2_pane_ParamLimits

0x4ce7,	// (0x00030c84) listscroll_clock2_pane

0x4dc6,	// (0x00030d63) main_clock2_pane_t3_ParamLimits

0x4dc6,	// (0x00030d63) main_clock2_pane_t3

0x4de9,	// (0x00030d86) main_clock2_pane_t4_ParamLimits

0x4de9,	// (0x00030d86) main_clock2_pane_t4

0x64a4,	// (0x00032441) cell_clock2_toolbar_pane

0x64ac,	// (0x00032449) cell_clock2_toolbar_pane_cp01

0x64ac,	// (0x00032449) cell_clock2_toolbar_pane_cp02

0x64b4,	// (0x00032451) cell_clock2_toolbar_pane_cp03

0x64bc,	// (0x00032459) list_clock2_pane

0xca4d,	// (0x000389ea) scroll_pane_cp10

0x64c4,	// (0x00032461) list_single_clock2_pane_ParamLimits

0x64c4,	// (0x00032461) list_single_clock2_pane

0xc258,	// (0x000381f5) list_highlight_pane_cp08

0x64d1,	// (0x0003246e) list_single_clock2_pane_t1

0x64df,	// (0x0003247c) list_single_clock2_pane_t2

0x0001,

0xfa70,	// (0x0003ba0d) list_single_clock2_pane_t

0xb07c,	// (0x00037019) bg_button_pane_cp10

0x64ed,	// (0x0003248a) cell_clock2_toolbar_pane_g1

0x052d,	// (0x0002c4ca) aid_main_viewer_pane_g1_ParamLimits

0x052d,	// (0x0002c4ca) aid_main_viewer_pane_g1

0x053b,	// (0x0002c4d8) aid_main_viewer_pane_g2_ParamLimits

0x053b,	// (0x0002c4d8) aid_main_viewer_pane_g2

0x36fb,	// (0x0002f698) aid_main_viewer_pane_g3_ParamLimits

0x36fb,	// (0x0002f698) aid_main_viewer_pane_g3

0x370a,	// (0x0002f6a7) aid_main_viewer_pane_g4_ParamLimits

0x370a,	// (0x0002f6a7) aid_main_viewer_pane_g4

0x0003,

0xf3de,	// (0x0003b37b) aid_main_viewer_pane_g_ParamLimits

0xf3de,	// (0x0003b37b) aid_main_viewer_pane_g

0x056f,	// (0x0002c50c) main_calc_pane_ParamLimits

0x0593,	// (0x0002c530) main_dialer2_pane_ParamLimits

0xb0ff,	// (0x0003709c) main_cam6_pane

0xb0ff,	// (0x0003709c) main_vid6_pane

0x4cf3,	// (0x00030c90) listscroll_gen_pane_cp06_ParamLimits

0x4cf3,	// (0x00030c90) listscroll_gen_pane_cp06

0x4e0c,	// (0x00030da9) main_clock2_pane_t5_ParamLimits

0x4e0c,	// (0x00030da9) main_clock2_pane_t5

0x4e6a,	// (0x00030e07) aid_call2_pane_cp10_ParamLimits

0x4e7c,	// (0x00030e19) aid_call_pane_cp10_ParamLimits

0xcabc,	// (0x00038a59) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcabc,	// (0x00038a59) popup_clock_analogue_window_cp10_g2_ParamLimits

0x08b9,	// (0x0002c856) popup_clock_analogue_window_cp10_g3_ParamLimits

0x08b9,	// (0x0002c856) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcabc,	// (0x00038a59) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf702,	// (0x0003b69f) popup_clock_analogue_window_cp10_g_ParamLimits

0x08cf,	// (0x0002c86c) popup_clock_analogue_window_cp10_t1_ParamLimits

0xe9f2,	// (0x0003a98f) cell_dialer2_keypad_pane_g2_ParamLimits

0xe9f2,	// (0x0003a98f) cell_dialer2_keypad_pane_g2

0x0001,

0xf7e2,	// (0x0003b77f) cell_dialer2_keypad_pane_g_ParamLimits

0xf7e2,	// (0x0003b77f) cell_dialer2_keypad_pane_g

0xc04f,	// (0x00037fec) cell_dialer2_keypad_pane_t1

0x55bc,	// (0x00031559) main_cset_text2_pane_ParamLimits

0x55bc,	// (0x00031559) main_cset_text2_pane

0xef3e,	// (0x0003aedb) area_vitu2_query_pane_g1_ParamLimits

0x5d98,	// (0x00031d35) area_vitu2_query_pane_g2_ParamLimits

0xf98d,	// (0x0003b92a) area_vitu2_query_pane_g_ParamLimits

0xefc2,	// (0x0003af5f) area_vitu2_query_pane_t7_ParamLimits

0xefc2,	// (0x0003af5f) area_vitu2_query_pane_t7

0x5e01,	// (0x00031d9e) bg_button_pane_cp018_ParamLimits

0x5e0d,	// (0x00031daa) bg_button_pane_cp021_ParamLimits

0x5e19,	// (0x00031db6) bg_button_pane_cp022_ParamLimits

0x5e2e,	// (0x00031dcb) bg_vkb2_func_pane_cp08_ParamLimits

0x5e01,	// (0x00031d9e) bg_vkb2_func_pane_cp06_ParamLimits

0x5e0d,	// (0x00031daa) bg_vkb2_func_pane_cp07_ParamLimits

0x5e44,	// (0x00031de1) input_focus_pane_cp09_ParamLimits

0xbe3f,	// (0x00037ddc) cam6_autofocus_pane_ParamLimits

0xbe3f,	// (0x00037ddc) cam6_autofocus_pane

0x1486,	// (0x0002d423) cam6_image_uncrop_pane_ParamLimits

0x1486,	// (0x0002d423) cam6_image_uncrop_pane

0x1496,	// (0x0002d433) cam6_indi_pane_ParamLimits

0x1496,	// (0x0002d433) cam6_indi_pane

0x14ac,	// (0x0002d449) cam6_mode_pane_ParamLimits

0x14ac,	// (0x0002d449) cam6_mode_pane

0x14be,	// (0x0002d45b) cam6_timer_pane_ParamLimits

0x14be,	// (0x0002d45b) cam6_timer_pane

0x14ca,	// (0x0002d467) cam6_zoom_pane_ParamLimits

0x14ca,	// (0x0002d467) cam6_zoom_pane

0x64f5,	// (0x00032492) cam6_mode_pane_g1_ParamLimits

0x64f5,	// (0x00032492) cam6_mode_pane_g1

0x6505,	// (0x000324a2) cam6_mode_pane_g2_ParamLimits

0x6505,	// (0x000324a2) cam6_mode_pane_g2

0x6515,	// (0x000324b2) cam6_mode_pane_g3_ParamLimits

0x6515,	// (0x000324b2) cam6_mode_pane_g3

0x6525,	// (0x000324c2) cam6_mode_pane_g4_ParamLimits

0x6525,	// (0x000324c2) cam6_mode_pane_g4

0x0003,

0xfa75,	// (0x0003ba12) cam6_mode_pane_g_ParamLimits

0xfa75,	// (0x0003ba12) cam6_mode_pane_g

0xe7bf,	// (0x0003a75c) bg_tb_trans_pane_cp08_ParamLimits

0xe7bf,	// (0x0003a75c) bg_tb_trans_pane_cp08

0x6535,	// (0x000324d2) cam6_battery_pane_ParamLimits

0x6535,	// (0x000324d2) cam6_battery_pane

0x654b,	// (0x000324e8) cam6_indi_pane_g1_ParamLimits

0x654b,	// (0x000324e8) cam6_indi_pane_g1

0x655d,	// (0x000324fa) cam6_indi_pane_g2_ParamLimits

0x655d,	// (0x000324fa) cam6_indi_pane_g2

0x656f,	// (0x0003250c) cam6_indi_pane_g3_ParamLimits

0x656f,	// (0x0003250c) cam6_indi_pane_g3

0x0002,

0xfa7e,	// (0x0003ba1b) cam6_indi_pane_g_ParamLimits

0xfa7e,	// (0x0003ba1b) cam6_indi_pane_g

0x6581,	// (0x0003251e) cam6_indi_pane_t1_ParamLimits

0x6581,	// (0x0003251e) cam6_indi_pane_t1

0x5290,	// (0x0003122d) cam6_autofocus_pane_g1

0x5288,	// (0x00031225) cam6_autofocus_pane_g2

0x52a0,	// (0x0003123d) cam6_autofocus_pane_g3

0x5298,	// (0x00031235) cam6_autofocus_pane_g4

0x0003,

0xfa85,	// (0x0003ba22) cam6_autofocus_pane_g

0x65a7,	// (0x00032544) cam6_timer_pane_g1

0x65af,	// (0x0003254c) cam6_timer_pane_t1

0x65bd,	// (0x0003255a) cam6_zoom_cont_pane

0x65c5,	// (0x00032562) cam6_zoom_pane_g1

0x65ce,	// (0x0003256b) cam6_zoom_pane_g2

0x65d7,	// (0x00032574) cam6_zoom_pane_g3

0x0002,

0xfa8e,	// (0x0003ba2b) cam6_zoom_pane_g

0xc045,	// (0x00037fe2) cam6_battery_pane_g1

0xc045,	// (0x00037fe2) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x0003b04c) cam6_battery_pane_g

0x65c5,	// (0x00032562) cam6_zoom_cont_pane_g1

0x65ce,	// (0x0003256b) cam6_zoom_cont_pane_g2

0x65e0,	// (0x0003257d) cam6_zoom_cont_pane_g3

0x0002,

0xfa95,	// (0x0003ba32) cam6_zoom_cont_pane_g

0x65fd,	// (0x0003259a) cam6_mode_pane_cp_ParamLimits

0x65fd,	// (0x0003259a) cam6_mode_pane_cp

0x660f,	// (0x000325ac) cam6_zoom_pane_cp_ParamLimits

0x660f,	// (0x000325ac) cam6_zoom_pane_cp

0x661d,	// (0x000325ba) vid6_image_uncrop_cif_pane_ParamLimits

0x661d,	// (0x000325ba) vid6_image_uncrop_cif_pane

0x662d,	// (0x000325ca) vid6_image_uncrop_nhd_pane_ParamLimits

0x662d,	// (0x000325ca) vid6_image_uncrop_nhd_pane

0x664c,	// (0x000325e9) vid6_image_uncrop_vga_pane_ParamLimits

0x664c,	// (0x000325e9) vid6_image_uncrop_vga_pane

0x665b,	// (0x000325f8) vid6_image_uncrop_wvga_pane_ParamLimits

0x665b,	// (0x000325f8) vid6_image_uncrop_wvga_pane

0x666a,	// (0x00032607) vid6_indi_pane_ParamLimits

0x666a,	// (0x00032607) vid6_indi_pane

0xe7bf,	// (0x0003a75c) bg_tb_trans_pane_cp09_ParamLimits

0xe7bf,	// (0x0003a75c) bg_tb_trans_pane_cp09

0x6682,	// (0x0003261f) cam6_battery_pane_cp_ParamLimits

0x6682,	// (0x0003261f) cam6_battery_pane_cp

0x668e,	// (0x0003262b) vid6_indi_pane_g1_ParamLimits

0x668e,	// (0x0003262b) vid6_indi_pane_g1

0x66a0,	// (0x0003263d) vid6_indi_pane_g2_ParamLimits

0x66a0,	// (0x0003263d) vid6_indi_pane_g2

0x66b2,	// (0x0003264f) vid6_indi_pane_g3_ParamLimits

0x66b2,	// (0x0003264f) vid6_indi_pane_g3

0x66c9,	// (0x00032666) vid6_indi_pane_g4_ParamLimits

0x66c9,	// (0x00032666) vid6_indi_pane_g4

0x66e0,	// (0x0003267d) vid6_indi_pane_g5_ParamLimits

0x66e0,	// (0x0003267d) vid6_indi_pane_g5

0x0004,

0xfa9c,	// (0x0003ba39) vid6_indi_pane_g_ParamLimits

0xfa9c,	// (0x0003ba39) vid6_indi_pane_g

0x66fa,	// (0x00032697) vid6_indi_pane_t1_ParamLimits

0x66fa,	// (0x00032697) vid6_indi_pane_t1

0x6710,	// (0x000326ad) vid6_indi_pane_t2_ParamLimits

0x6710,	// (0x000326ad) vid6_indi_pane_t2

0x6738,	// (0x000326d5) vid6_indi_pane_t3_ParamLimits

0x6738,	// (0x000326d5) vid6_indi_pane_t3

0x6760,	// (0x000326fd) vid6_indi_pane_t4_ParamLimits

0x6760,	// (0x000326fd) vid6_indi_pane_t4

0x0003,

0xfaa7,	// (0x0003ba44) vid6_indi_pane_t_ParamLimits

0xfaa7,	// (0x0003ba44) vid6_indi_pane_t

0x6784,	// (0x00032721) wait_bar_pane_cp08

0x6793,	// (0x00032730) main_cset_text2_pane_t1_ParamLimits

0x6793,	// (0x00032730) main_cset_text2_pane_t1

0x65e8,	// (0x00032585) listscroll_gen_pane_cp06_t1_ParamLimits

0x65e8,	// (0x00032585) listscroll_gen_pane_cp06_t1

0xb0ff,	// (0x0003709c) main_cam6_set_pane

0x527a,	// (0x00031217) bg_tb_trans_pane_cp06_ParamLimits

0xbcab,	// (0x00037c48) cam4_indicators_pane_g1_ParamLimits

0xbcbc,	// (0x00037c59) cam4_indicators_pane_g2_ParamLimits

0xf81f,	// (0x0003b7bc) cam4_indicators_pane_g_ParamLimits

0xbcd4,	// (0x00037c71) cam4_indicators_pane_t1_ParamLimits

0xb0f1,	// (0x0003708e) bg_tb_trans_pane_cp07_ParamLimits

0xbd02,	// (0x00037c9f) vid4_indicators_pane_g1_ParamLimits

0xbd18,	// (0x00037cb5) vid4_indicators_pane_g2_ParamLimits

0xbd2c,	// (0x00037cc9) vid4_indicators_pane_g3_ParamLimits

0xbd3f,	// (0x00037cdc) vid4_indicators_pane_g4_ParamLimits

0xf831,	// (0x0003b7ce) vid4_indicators_pane_g_ParamLimits

0xbd5d,	// (0x00037cfa) vid4_indicators_pane_t1_ParamLimits

0xbdd3,	// (0x00037d70) vid4_progress_pane_g1_ParamLimits

0xbde3,	// (0x00037d80) vid4_progress_pane_g2_ParamLimits

0x1447,	// (0x0002d3e4) vid4_progress_pane_g3_ParamLimits

0xbdf3,	// (0x00037d90) vid4_progress_pane_g4_ParamLimits

0xf9d8,	// (0x0003b975) vid4_progress_pane_g_ParamLimits

0x1459,	// (0x0002d3f6) vid4_progress_pane_t1_ParamLimits

0xbe11,	// (0x00037dae) vid4_progress_pane_t2_ParamLimits

0xbe2a,	// (0x00037dc7) vid4_progress_pane_t3_ParamLimits

0xf9e3,	// (0x0003b980) vid4_progress_pane_t_ParamLimits

0x1473,	// (0x0002d410) wait_bar_pane_cp07_ParamLimits

0x67b4,	// (0x00032751) main_cam6_set_pane_g2_ParamLimits

0x67b4,	// (0x00032751) main_cam6_set_pane_g2

0x67da,	// (0x00032777) main_cset6_listscroll_pane_ParamLimits

0x67da,	// (0x00032777) main_cset6_listscroll_pane

0x67f8,	// (0x00032795) main_cset6_slider_pane_ParamLimits

0x67f8,	// (0x00032795) main_cset6_slider_pane

0x680e,	// (0x000327ab) main_cset6_text2_pane_ParamLimits

0x680e,	// (0x000327ab) main_cset6_text2_pane

0x681c,	// (0x000327b9) main_cset6_text_pane

0x6824,	// (0x000327c1) main_cset_list_pane_copy1_ParamLimits

0x6824,	// (0x000327c1) main_cset_list_pane_copy1

0x6834,	// (0x000327d1) scroll_pane_cp028_copy1

0x683d,	// (0x000327da) cset_list_set_pane_copy1

0x6851,	// (0x000327ee) aid_position_infowindow_above_copy1

0x6859,	// (0x000327f6) aid_position_infowindow_below_copy1

0x6861,	// (0x000327fe) cset_list_set_pane_g1_copy1

0x6869,	// (0x00032806) cset_list_set_pane_g3_copy1_ParamLimits

0x6869,	// (0x00032806) cset_list_set_pane_g3_copy1

0x6878,	// (0x00032815) cset_list_set_pane_t1_copy1_ParamLimits

0x6878,	// (0x00032815) cset_list_set_pane_t1_copy1

0xbfa0,	// (0x00037f3d) list_highlight_pane_cp021_copy1_ParamLimits

0xbfa0,	// (0x00037f3d) list_highlight_pane_cp021_copy1

0x688d,	// (0x0003282a) cset6_slider_pane_ParamLimits

0x688d,	// (0x0003282a) cset6_slider_pane

0x68b9,	// (0x00032856) main_cset6_slider_pane_g1_ParamLimits

0x68b9,	// (0x00032856) main_cset6_slider_pane_g1

0x68e1,	// (0x0003287e) main_cset6_slider_pane_g2_ParamLimits

0x68e1,	// (0x0003287e) main_cset6_slider_pane_g2

0x6909,	// (0x000328a6) main_cset6_slider_pane_g3_ParamLimits

0x6909,	// (0x000328a6) main_cset6_slider_pane_g3

0x6915,	// (0x000328b2) main_cset6_slider_pane_g4_ParamLimits

0x6915,	// (0x000328b2) main_cset6_slider_pane_g4

0x6921,	// (0x000328be) main_cset6_slider_pane_g5_ParamLimits

0x6921,	// (0x000328be) main_cset6_slider_pane_g5

0xec16,	// (0x0003abb3) main_cset6_slider_pane_g7_ParamLimits

0xec16,	// (0x0003abb3) main_cset6_slider_pane_g7

0xec22,	// (0x0003abbf) main_cset6_slider_pane_g8_ParamLimits

0xec22,	// (0x0003abbf) main_cset6_slider_pane_g8

0x5664,	// (0x00031601) main_cset6_slider_pane_g9_ParamLimits

0x5664,	// (0x00031601) main_cset6_slider_pane_g9

0x5670,	// (0x0003160d) main_cset6_slider_pane_g10_ParamLimits

0x5670,	// (0x0003160d) main_cset6_slider_pane_g10

0x567c,	// (0x00031619) main_cset6_slider_pane_g11_ParamLimits

0x567c,	// (0x00031619) main_cset6_slider_pane_g11

0x5688,	// (0x00031625) main_cset6_slider_pane_g12_ParamLimits

0x5688,	// (0x00031625) main_cset6_slider_pane_g12

0x5694,	// (0x00031631) main_cset6_slider_pane_g13_ParamLimits

0x5694,	// (0x00031631) main_cset6_slider_pane_g13

0x56a0,	// (0x0003163d) main_cset6_slider_pane_g14_ParamLimits

0x56a0,	// (0x0003163d) main_cset6_slider_pane_g14

0x692f,	// (0x000328cc) main_cset6_slider_pane_g15_ParamLimits

0x692f,	// (0x000328cc) main_cset6_slider_pane_g15

0x56c4,	// (0x00031661) main_cset6_slider_pane_g16_ParamLimits

0x56c4,	// (0x00031661) main_cset6_slider_pane_g16

0x56d2,	// (0x0003166f) main_cset6_slider_pane_g17_ParamLimits

0x56d2,	// (0x0003166f) main_cset6_slider_pane_g17

0x0011,

0xfab0,	// (0x0003ba4d) main_cset6_slider_pane_g_ParamLimits

0xfab0,	// (0x0003ba4d) main_cset6_slider_pane_g

0x695f,	// (0x000328fc) main_cset6_slider_pane_t1_ParamLimits

0x695f,	// (0x000328fc) main_cset6_slider_pane_t1

0x69a0,	// (0x0003293d) main_cset6_slider_pane_t2_ParamLimits

0x69a0,	// (0x0003293d) main_cset6_slider_pane_t2

0x69cb,	// (0x00032968) main_cset6_slider_pane_t3_ParamLimits

0x69cb,	// (0x00032968) main_cset6_slider_pane_t3

0x69f6,	// (0x00032993) main_cset6_slider_pane_t4_ParamLimits

0x69f6,	// (0x00032993) main_cset6_slider_pane_t4

0x6a21,	// (0x000329be) main_cset6_slider_pane_t5_ParamLimits

0x6a21,	// (0x000329be) main_cset6_slider_pane_t5

0x6a4e,	// (0x000329eb) main_cset6_slider_pane_t7_ParamLimits

0x6a4e,	// (0x000329eb) main_cset6_slider_pane_t7

0x6a84,	// (0x00032a21) main_cset6_slider_pane_t8_ParamLimits

0x6a84,	// (0x00032a21) main_cset6_slider_pane_t8

0x6aa8,	// (0x00032a45) main_cset6_slider_pane_t9_ParamLimits

0x6aa8,	// (0x00032a45) main_cset6_slider_pane_t9

0x6acc,	// (0x00032a69) main_cset6_slider_pane_t10_ParamLimits

0x6acc,	// (0x00032a69) main_cset6_slider_pane_t10

0x6af0,	// (0x00032a8d) main_cset6_slider_pane_t11_ParamLimits

0x6af0,	// (0x00032a8d) main_cset6_slider_pane_t11

0x6b16,	// (0x00032ab3) main_cset6_slider_pane_t14_ParamLimits

0x6b16,	// (0x00032ab3) main_cset6_slider_pane_t14

0x6b4f,	// (0x00032aec) main_cset6_slider_pane_t15_ParamLimits

0x6b4f,	// (0x00032aec) main_cset6_slider_pane_t15

0x000b,

0xfad5,	// (0x0003ba72) main_cset6_slider_pane_t_ParamLimits

0xfad5,	// (0x0003ba72) main_cset6_slider_pane_t

0x6b88,	// (0x00032b25) cset_slider_pane_g1_copy1

0x6b91,	// (0x00032b2e) cset_slider_pane_g2_copy1

0x6b9a,	// (0x00032b37) cset_slider_pane_g3_copy1

0xb07c,	// (0x00037019) bg_popup_sub_pane_cp011_copy1

0x6bc9,	// (0x00032b66) main_cset_text_pane_g1_copy1

0xed66,	// (0x0003ad03) main_cset_text_pane_t1_copy1

0xed74,	// (0x0003ad11) main_cset_text_pane_t2_copy1

0xed82,	// (0x0003ad1f) main_cset_text_pane_t3_copy1

0xed90,	// (0x0003ad2d) main_cset_text_pane_t4_copy1

0xed9e,	// (0x0003ad3b) main_cset_text_pane_t5_copy1

0x6bd1,	// (0x00032b6e) main_cset_text_pane_t6_copy1

0x6bdf,	// (0x00032b7c) main_cset_text_pane_t7_copy1

0x6793,	// (0x00032730) main_cset_text2_pane_t1_copy1

0xb0f1,	// (0x0003708e) main_ncimui_pane

0x0821,	// (0x0002c7be) popup_query_ncimui_window_ParamLimits

0x0821,	// (0x0002c7be) popup_query_ncimui_window

0xe4f0,	// (0x0003a48d) field_cale_ev2_pane_g4_ParamLimits

0xe4f0,	// (0x0003a48d) field_cale_ev2_pane_g4

0x5112,	// (0x000310af) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5112,	// (0x000310af) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7b9,	// (0x0003b756) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7b9,	// (0x0003b756) cell_video_dialer_keypad_pane_g

0x512a,	// (0x000310c7) cell_video_dialer_keypad_pane_t1

0xb07c,	// (0x00037019) bg_popup_window_pane_cp012

0xddb6,	// (0x00039d53) heading_pane_cp06

0x6d34,	// (0x00032cd1) ncim_query_content_pane

0xb07c,	// (0x00037019) bg_popup_heading_pane_cp01

0x6d3c,	// (0x00032cd9) ncim_heading_pane_t1

0x6d4a,	// (0x00032ce7) ncim_indicator_popup_pane

0x6d5c,	// (0x00032cf9) ncim_query_button_pane

0x6d7e,	// (0x00032d1b) ncim_query_content_pane_t1

0x6d90,	// (0x00032d2d) ncim_query_content_pane_t2

0x0005,

0xfb0a,	// (0x0003baa7) ncim_query_content_pane_t

0x6e42,	// (0x00032ddf) ncim_query_list_pane

0x6e54,	// (0x00032df1) ncim_query_popup_pane

0x6d4a,	// (0x00032ce7) ncim_indicator_popup_pane_ParamLimits

0x6d64,	// (0x00032d01) ncim_query_content_pane_g1_ParamLimits

0x6d64,	// (0x00032d01) ncim_query_content_pane_g1

0x6d7e,	// (0x00032d1b) ncim_query_content_pane_t1_ParamLimits

0x6d90,	// (0x00032d2d) ncim_query_content_pane_t2_ParamLimits

0x6da2,	// (0x00032d3f) ncim_query_content_pane_t3_ParamLimits

0x6da2,	// (0x00032d3f) ncim_query_content_pane_t3

0x6dca,	// (0x00032d67) ncim_query_content_pane_t4_ParamLimits

0x6dca,	// (0x00032d67) ncim_query_content_pane_t4

0x6df2,	// (0x00032d8f) ncim_query_content_pane_t5_ParamLimits

0x6df2,	// (0x00032d8f) ncim_query_content_pane_t5

0x6e1a,	// (0x00032db7) ncim_query_content_pane_t6_ParamLimits

0x6e1a,	// (0x00032db7) ncim_query_content_pane_t6

0xfb0a,	// (0x0003baa7) ncim_query_content_pane_t_ParamLimits

0x6e42,	// (0x00032ddf) ncim_query_list_pane_ParamLimits

0x6e54,	// (0x00032df1) ncim_query_popup_pane_ParamLimits

0x6e68,	// (0x00032e05) wait_bar_pane_cp04

0xb07c,	// (0x00037019) input_focus_pane_cp011

0x6e70,	// (0x00032e0d) ncim_query_popup_pane_t1

0x6e7e,	// (0x00032e1b) ncim_list_query_list_pane_ParamLimits

0x6e7e,	// (0x00032e1b) ncim_list_query_list_pane

0xb07c,	// (0x00037019) bg_button_pane_cp027

0x6e91,	// (0x00032e2e) ncim_query_button_pane_g1

0xb07c,	// (0x00037019) list_highlight_pane_cp012

0x6e9b,	// (0x00032e38) ncim_list_query_list_pane_g1

0x6ea3,	// (0x00032e40) ncim_list_query_list_pane_t1

0xbcc8,	// (0x00037c65) cam4_indicators_pane_g3_ParamLimits

0xbcc8,	// (0x00037c65) cam4_indicators_pane_g3

0xbd4b,	// (0x00037ce8) vid4_indicators_pane_g5_ParamLimits

0xbd4b,	// (0x00037ce8) vid4_indicators_pane_g5

0xbe02,	// (0x00037d9f) vid4_progress_pane_g5_ParamLimits

0xbe02,	// (0x00037d9f) vid4_progress_pane_g5

0x6c1f,	// (0x00032bbc) main_ncimui_pane_g1

0x6c88,	// (0x00032c25) ncimui_group_query_pane_ParamLimits

0x6c88,	// (0x00032c25) ncimui_group_query_pane

0x6cd0,	// (0x00032c6d) ncimui_list_pane_ParamLimits

0x6cd0,	// (0x00032c6d) ncimui_list_pane

0x6cf7,	// (0x00032c94) ncimui_text_pane_ParamLimits

0x6cf7,	// (0x00032c94) ncimui_text_pane

0x6eb1,	// (0x00032e4e) ncimui_text_pane_t1_ParamLimits

0x6eb1,	// (0x00032e4e) ncimui_text_pane_t1

0x6ecf,	// (0x00032e6c) ncimui_list_single_graphic_pane_ParamLimits

0x6ecf,	// (0x00032e6c) ncimui_list_single_graphic_pane

0x6edf,	// (0x00032e7c) ncimui_query_pane_ParamLimits

0x6edf,	// (0x00032e7c) ncimui_query_pane

0xb07c,	// (0x00037019) list_highlight_pane_cp013

0x6ef2,	// (0x00032e8f) ncim_list_query_list_pane_t1_copy1

0x6e9b,	// (0x00032e38) ncim_list_single_graphic_pane_g1

0x6f00,	// (0x00032e9d) ncim_query_button_pane_cp01

0x6f0c,	// (0x00032ea9) ncim_query_entry_pane_ParamLimits

0x6f0c,	// (0x00032ea9) ncim_query_entry_pane

0x6f1f,	// (0x00032ebc) ncimui_query_pane_g1

0x6f2b,	// (0x00032ec8) ncimui_query_pane_t1_ParamLimits

0x6f2b,	// (0x00032ec8) ncimui_query_pane_t1

0xbfa0,	// (0x00037f3d) input_focus_pane_cp012

0x6f44,	// (0x00032ee1) ncim_query_entry_pane_t1

0xc0a3,	// (0x00038040) main_im_pane_ParamLimits

0xb0f1,	// (0x0003708e) main_mobtv_pane_ParamLimits

0xb0f1,	// (0x0003708e) main_mobtv_pane

0x6947,	// (0x000328e4) main_cset6_slider_pane_g18_ParamLimits

0x6947,	// (0x000328e4) main_cset6_slider_pane_g18

0x6953,	// (0x000328f0) main_cset6_slider_pane_g19_ParamLimits

0x6953,	// (0x000328f0) main_cset6_slider_pane_g19

0xc023,	// (0x00037fc0) bg_main_mobtv_pane_ParamLimits

0xc023,	// (0x00037fc0) bg_main_mobtv_pane

0x6f56,	// (0x00032ef3) main_mobtv_info_pane

0x6f61,	// (0x00032efe) main_mobtv_loading_pane_ParamLimits

0x6f61,	// (0x00032efe) main_mobtv_loading_pane

0x6f6e,	// (0x00032f0b) main_mobtv_pg_channel_list_pane

0x6f78,	// (0x00032f15) main_mobtv_pg_hdr_pane

0x6f81,	// (0x00032f1e) main_mobtv_programe_curr_pane_ParamLimits

0x6f81,	// (0x00032f1e) main_mobtv_programe_curr_pane

0x6f8e,	// (0x00032f2b) main_mobtv_programe_next_pane_ParamLimits

0x6f8e,	// (0x00032f2b) main_mobtv_programe_next_pane

0x6f9b,	// (0x00032f38) popup_mobtv_noti_window

0xc045,	// (0x00037fe2) main_tv_pg_hdr_pane_g1

0x6fa5,	// (0x00032f42) main_tv_pg_hdr_pane_g2

0x6fad,	// (0x00032f4a) main_tv_pg_hdr_pane_g3

0x6fb5,	// (0x00032f52) main_tv_pg_hdr_pane_g4

0x6fbd,	// (0x00032f5a) main_tv_pg_hdr_pane_g5

0x6fc7,	// (0x00032f64) main_tv_pg_hdr_pane_g6

0x6fd1,	// (0x00032f6e) main_tv_pg_hdr_pane_g7

0x6fdb,	// (0x00032f78) main_tv_pg_hdr_pane_g8

0x6fe5,	// (0x00032f82) main_tv_pg_hdr_pane_g9

0x6fef,	// (0x00032f8c) main_tv_pg_hdr_pane_g10

0x6ff9,	// (0x00032f96) main_tv_pg_hdr_pane_g11

0x000a,

0xfb17,	// (0x0003bab4) main_tv_pg_hdr_pane_g

0x7003,	// (0x00032fa0) main_tv_pg_hdr_pane_t1

0x7011,	// (0x00032fae) main_tv_pg_hdr_pane_t2

0x701f,	// (0x00032fbc) main_tv_pg_hdr_pane_t3

0x702f,	// (0x00032fcc) main_tv_pg_hdr_pane_t4

0x703f,	// (0x00032fdc) main_tv_pg_hdr_pane_t5

0x0004,

0xfb2e,	// (0x0003bacb) main_tv_pg_hdr_pane_t

0x704f,	// (0x00032fec) single_mobtv_pg_channel_pane_ParamLimits

0x704f,	// (0x00032fec) single_mobtv_pg_channel_pane

0x7061,	// (0x00032ffe) single_mobtv_pg_channel_table_pane

0x706a,	// (0x00033007) single_mobtv_pg_channel_thumb_pane

0x7073,	// (0x00033010) single_tv_pg_channel_pane_g1

0x707c,	// (0x00033019) single_tv_pg_channel_pane_g2

0x0001,

0xfb39,	// (0x0003bad6) single_tv_pg_channel_pane_g

0xc007,	// (0x00037fa4) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc007,	// (0x00037fa4) bg_single_mobtv_pg_channel_thumb_pane

0x7085,	// (0x00033022) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x7085,	// (0x00033022) single_mobtv_pg_channel_thumb_pane_g1

0x7093,	// (0x00033030) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x7093,	// (0x00033030) single_mobtv_pg_channel_thumb_pane_g2

0x709f,	// (0x0003303c) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x709f,	// (0x0003303c) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb3e,	// (0x0003badb) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb3e,	// (0x0003badb) single_mobtv_pg_channel_thumb_pane_g

0x70ab,	// (0x00033048) single_mobtv_pg_channel_thumb_pane_t1

0x70b9,	// (0x00033056) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb45,	// (0x0003bae2) single_mobtv_pg_channel_thumb_pane_t

0xc045,	// (0x00037fe2) bg_single_mobtv_pg_channel_table_pane_g1

0xc045,	// (0x00037fe2) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x0003b04c) bg_single_mobtv_pg_channel_table_pane_g

0x70c7,	// (0x00033064) single_mobtv_pg_channel_table_pane_t1

0x70d5,	// (0x00033072) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb4a,	// (0x0003bae7) single_mobtv_pg_channel_table_pane_t

0x70eb,	// (0x00033088) main_mobtv_info_pane_g1_ParamLimits

0x70eb,	// (0x00033088) main_mobtv_info_pane_g1

0x7109,	// (0x000330a6) main_mobtv_info_pane_t1_ParamLimits

0x7109,	// (0x000330a6) main_mobtv_info_pane_t1

0x7181,	// (0x0003311e) main_mobtv_info_pane_t2_ParamLimits

0x7181,	// (0x0003311e) main_mobtv_info_pane_t2

0x0002,

0xfb54,	// (0x0003baf1) main_mobtv_info_pane_t_ParamLimits

0xfb54,	// (0x0003baf1) main_mobtv_info_pane_t

0x7212,	// (0x000331af) wait_bar_pane_cp05

0x7224,	// (0x000331c1) main_mobtv_loading_pane_g1_ParamLimits

0x7224,	// (0x000331c1) main_mobtv_loading_pane_g1

0x7235,	// (0x000331d2) main_mobtv_loading_pane_g2_ParamLimits

0x7235,	// (0x000331d2) main_mobtv_loading_pane_g2

0x7241,	// (0x000331de) main_mobtv_loading_pane_g3_ParamLimits

0x7241,	// (0x000331de) main_mobtv_loading_pane_g3

0x0002,

0xfb5b,	// (0x0003baf8) main_mobtv_loading_pane_g_ParamLimits

0xfb5b,	// (0x0003baf8) main_mobtv_loading_pane_g

0x7254,	// (0x000331f1) main_mobtv_loading_pane_t1_ParamLimits

0x7254,	// (0x000331f1) main_mobtv_loading_pane_t1

0x726c,	// (0x00033209) main_mobtv_loading_pane_t2_ParamLimits

0x726c,	// (0x00033209) main_mobtv_loading_pane_t2

0x0001,

0xfb62,	// (0x0003baff) main_mobtv_loading_pane_t_ParamLimits

0xfb62,	// (0x0003baff) main_mobtv_loading_pane_t

0x7290,	// (0x0003322d) wait_bar_pane_cp06_ParamLimits

0x7290,	// (0x0003322d) wait_bar_pane_cp06

0x729f,	// (0x0003323c) main_mobtv_programe_curr_pane_t1

0x72ad,	// (0x0003324a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb67,	// (0x0003bb04) main_mobtv_programe_curr_pane_t

0x72bb,	// (0x00033258) main_mobtv_programe_next_pane_t1

0x72c9,	// (0x00033266) main_mobtv_programe_next_pane_t2

0x72d7,	// (0x00033274) main_mobtv_programe_next_pane_t3

0x0002,

0xfb6c,	// (0x0003bb09) main_mobtv_programe_next_pane_t

0xb07c,	// (0x00037019) bg_popup_mobtv_noti_window_pane

0x72e5,	// (0x00033282) popup_mobtv_noti_window_g1

0x72ed,	// (0x0003328a) popup_mobtv_noti_window_t1

0x72fb,	// (0x00033298) popup_mobtv_noti_window_t2

0x0001,

0xfb73,	// (0x0003bb10) popup_mobtv_noti_window_t

0xc045,	// (0x00037fe2) bg_popup_mobtv_noti_window_pane_g1

0xb0ff,	// (0x0003709c) sc_clock_pane

0xb0ff,	// (0x0003709c) main_fs_bigclock_pane

0x62bf,	// (0x0003225c) blid2_tripm_pane_t4_ParamLimits

0x62bf,	// (0x0003225c) blid2_tripm_pane_t4

0xc007,	// (0x00037fa4) sc_clock_pane_g1_ParamLimits

0xc007,	// (0x00037fa4) sc_clock_pane_g1

0xc04f,	// (0x00037fec) sc_clock_pane_t1_ParamLimits

0xc04f,	// (0x00037fec) sc_clock_pane_t1

0xc04f,	// (0x00037fec) sc_clock_pane_t2_ParamLimits

0xc04f,	// (0x00037fec) sc_clock_pane_t2

0xc04f,	// (0x00037fec) sc_clock_pane_t3_ParamLimits

0xc04f,	// (0x00037fec) sc_clock_pane_t3

0x0004,

0xfb78,	// (0x0003bb15) sc_clock_pane_t_ParamLimits

0xfb78,	// (0x0003bb15) sc_clock_pane_t

0x8a9b,	// (0x00034a38) main_fs_bigclock_indicator_pane_ParamLimits

0x8a9b,	// (0x00034a38) main_fs_bigclock_indicator_pane

0x737a,	// (0x00033317) main_fs_bigclock_pane_g1_ParamLimits

0x737a,	// (0x00033317) main_fs_bigclock_pane_g1

0x8aa7,	// (0x00034a44) main_fs_bigclock_pane_t1_ParamLimits

0x8aa7,	// (0x00034a44) main_fs_bigclock_pane_t1

0x8ab9,	// (0x00034a56) main_fs_bigclock_pane_t2_ParamLimits

0x8ab9,	// (0x00034a56) main_fs_bigclock_pane_t2

0x8acd,	// (0x00034a6a) main_fs_bigclock_pane_t3_ParamLimits

0x8acd,	// (0x00034a6a) main_fs_bigclock_pane_t3

0x0002,

0xfd09,	// (0x0003bca6) main_fs_bigclock_pane_t_ParamLimits

0xfd09,	// (0x0003bca6) main_fs_bigclock_pane_t

0x8adf,	// (0x00034a7c) main_fs_bigclock_indicator_pane_g1

0x6d70,	// (0x00032d0d) ncim_query_content_pane_g2_ParamLimits

0x6d70,	// (0x00032d0d) ncim_query_content_pane_g2

0x0001,

0xfb05,	// (0x0003baa2) ncim_query_content_pane_g_ParamLimits

0xfb05,	// (0x0003baa2) ncim_query_content_pane_g

0xc04f,	// (0x00037fec) sc_clock_pane_t4_ParamLimits

0xc04f,	// (0x00037fec) sc_clock_pane_t4

0xb0f1,	// (0x0003708e) main_radioblah_pane

0xbc4b,	// (0x00037be8) cell_call4_button_pane_t1_copy1_ParamLimits

0xbc4b,	// (0x00037be8) cell_call4_button_pane_t1_copy1

0x6c37,	// (0x00032bd4) main_ncimui_pane_t1_ParamLimits

0x6c37,	// (0x00032bd4) main_ncimui_pane_t1

0x6c51,	// (0x00032bee) main_ncimui_pane_t2_ParamLimits

0x6c51,	// (0x00032bee) main_ncimui_pane_t2

0x0002,

0xfafe,	// (0x0003ba9b) main_ncimui_pane_t_ParamLimits

0xfafe,	// (0x0003ba9b) main_ncimui_pane_t

0xcc60,	// (0x00038bfd) main_radioblah_anim_pane_ParamLimits

0xcc60,	// (0x00038bfd) main_radioblah_anim_pane

0xcc60,	// (0x00038bfd) main_radioblah_info_pane_ParamLimits

0xcc60,	// (0x00038bfd) main_radioblah_info_pane

0xcc4c,	// (0x00038be9) main_radioblah_pane_t1_ParamLimits

0xcc4c,	// (0x00038be9) main_radioblah_pane_t1

0xcc4c,	// (0x00038be9) main_radioblah_pane_t2_ParamLimits

0xcc4c,	// (0x00038be9) main_radioblah_pane_t2

0x0003,

0xfb99,	// (0x0003bb36) main_radioblah_pane_t_ParamLimits

0xfb99,	// (0x0003bb36) main_radioblah_pane_t

0xbfa0,	// (0x00037f3d) main_radioblah_rocker_ctrl_pane_ParamLimits

0xbfa0,	// (0x00037f3d) main_radioblah_rocker_ctrl_pane

0xe7cd,	// (0x0003a76a) main_radioblah_info_pane_t1_ParamLimits

0xe7cd,	// (0x0003a76a) main_radioblah_info_pane_t1

0x7541,	// (0x000334de) main_radioblah_info_pane_t2_ParamLimits

0x7541,	// (0x000334de) main_radioblah_info_pane_t2

0x0003,

0xfba2,	// (0x0003bb3f) main_radioblah_info_pane_t_ParamLimits

0xfba2,	// (0x0003bb3f) main_radioblah_info_pane_t

0xc045,	// (0x00037fe2) main_radioblah_rocker_ctrl_pane_g1

0xc045,	// (0x00037fe2) main_radioblah_rocker_ctrl_pane_g2

0xc045,	// (0x00037fe2) main_radioblah_rocker_ctrl_pane_g3

0xc045,	// (0x00037fe2) main_radioblah_rocker_ctrl_pane_g4

0xc045,	// (0x00037fe2) main_radioblah_rocker_ctrl_pane_g5

0xc045,	// (0x00037fe2) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbab,	// (0x0003bb48) main_radioblah_rocker_ctrl_pane_g

0x6793,	// (0x00032730) main_cset_text2_pane_t1_copy1_ParamLimits

0xbc99,	// (0x00037c36) cam4_image_uncrop_qvga_pane

0xbcee,	// (0x00037c8b) vid4_image_uncrop_qcif_pane

0xbe3f,	// (0x00037ddc) cam6_image_uncrop_qvga_pane_ParamLimits

0xbe3f,	// (0x00037ddc) cam6_image_uncrop_qvga_pane

0x663c,	// (0x000325d9) vid6_image_uncrop_qcif_pane_ParamLimits

0x663c,	// (0x000325d9) vid6_image_uncrop_qcif_pane

0xb07c,	// (0x00037019) bg_popup_preview_window_pane_cp03

0x6bed,	// (0x00032b8a) list_cset_text2_pane

0x6bf5,	// (0x00032b92) main_cset6_text2_pane_g1

0x6bfd,	// (0x00032b9a) main_cset6_text2_pane_t1

0x7590,	// (0x0003352d) list_cset_text2_pane_t1_ParamLimits

0x7590,	// (0x0003352d) list_cset_text2_pane_t1

0xb0f1,	// (0x0003708e) main_radioblah_pane_ParamLimits

0x71fe,	// (0x0003319b) main_mobtv_info_pane_t3_ParamLimits

0x71fe,	// (0x0003319b) main_mobtv_info_pane_t3

0xcc3e,	// (0x00038bdb) main_radioblah_pane_g1

0x7511,	// (0x000334ae) main_radioblah_info_pane_g1

0xc063,	// (0x00038000) main_radioblah_info_pane_t3_ParamLimits

0xc063,	// (0x00038000) main_radioblah_info_pane_t3

0x2e45,	// (0x0002ede2) highlight_cell_cale_month_pane_ParamLimits

0x2e45,	// (0x0002ede2) highlight_cell_cale_month_pane

0xb0ff,	// (0x0003709c) main_phob_fisheye_pane

0xe565,	// (0x0003a502) scroll_pane_cp0031_ParamLimits

0xe565,	// (0x0003a502) scroll_pane_cp0031

0x6784,	// (0x00032721) wait_bar_pane_cp08_ParamLimits

0x683d,	// (0x000327da) cset_list_set_pane_copy1_ParamLimits

0x75aa,	// (0x00033547) highlight_cell_cale_month_pane_g1

0x75b2,	// (0x0003354f) highlight_cell_cale_month_pane_t1

0xf02e,	// (0x0003afcb) list_gen_pane_cp01

0xec01,	// (0x0003ab9e) scroll_pane_01

0x75c0,	// (0x0003355d) list_single_double_fisheye_pane

0x75c9,	// (0x00033566) list_double_fisheye_pane_g1_ParamLimits

0x75c9,	// (0x00033566) list_double_fisheye_pane_g1

0x75d5,	// (0x00033572) list_double_fisheye_pane_g2_ParamLimits

0x75d5,	// (0x00033572) list_double_fisheye_pane_g2

0x75e9,	// (0x00033586) list_double_fisheye_pane_g3_ParamLimits

0x75e9,	// (0x00033586) list_double_fisheye_pane_g3

0x0004,

0xfbb8,	// (0x0003bb55) list_double_fisheye_pane_g_ParamLimits

0xfbb8,	// (0x0003bb55) list_double_fisheye_pane_g

0x7612,	// (0x000335af) list_double_fisheye_pane_t1_ParamLimits

0x7612,	// (0x000335af) list_double_fisheye_pane_t1

0x762d,	// (0x000335ca) list_double_fisheye_pane_t2_ParamLimits

0x762d,	// (0x000335ca) list_double_fisheye_pane_t2

0x0001,

0xfbc3,	// (0x0003bb60) list_double_fisheye_pane_t_ParamLimits

0xfbc3,	// (0x0003bb60) list_double_fisheye_pane_t

0xb0ff,	// (0x0003709c) main_call5_pane

0xbfa0,	// (0x00037f3d) sc_swipe_pane_ParamLimits

0xbfa0,	// (0x00037f3d) sc_swipe_pane

0x7662,	// (0x000335ff) call5_image_pane_ParamLimits

0x7662,	// (0x000335ff) call5_image_pane

0x767f,	// (0x0003361c) call5_swipe_1_pane_ParamLimits

0x767f,	// (0x0003361c) call5_swipe_1_pane

0x7692,	// (0x0003362f) call5_swipe_2_pane_ParamLimits

0x7692,	// (0x0003362f) call5_swipe_2_pane

0x76bd,	// (0x0003365a) popup_call5_audio_first_window_ParamLimits

0x76bd,	// (0x0003365a) popup_call5_audio_first_window

0xc007,	// (0x00037fa4) call5_swipe_1_pane_g1_ParamLimits

0xc007,	// (0x00037fa4) call5_swipe_1_pane_g1

0x76d2,	// (0x0003366f) call5_swipe_1_pane_g2_ParamLimits

0x76d2,	// (0x0003366f) call5_swipe_1_pane_g2

0x0001,

0xfbc8,	// (0x0003bb65) call5_swipe_1_pane_g_ParamLimits

0xfbc8,	// (0x0003bb65) call5_swipe_1_pane_g

0x76de,	// (0x0003367b) call5_swipe_1_pane_t1_ParamLimits

0x76de,	// (0x0003367b) call5_swipe_1_pane_t1

0xc007,	// (0x00037fa4) call5_swipe_2_pane_g1_ParamLimits

0xc007,	// (0x00037fa4) call5_swipe_2_pane_g1

0x76f3,	// (0x00033690) call5_swipe_2_pane_g2_ParamLimits

0x76f3,	// (0x00033690) call5_swipe_2_pane_g2

0x0001,

0xfbcd,	// (0x0003bb6a) call5_swipe_2_pane_g_ParamLimits

0xfbcd,	// (0x0003bb6a) call5_swipe_2_pane_g

0x76ff,	// (0x0003369c) call5_swipe_2_pane_t1_ParamLimits

0x76ff,	// (0x0003369c) call5_swipe_2_pane_t1

0xc007,	// (0x00037fa4) sc_swipe_pane_g1_ParamLimits

0xc007,	// (0x00037fa4) sc_swipe_pane_g1

0xc015,	// (0x00037fb2) sc_swipe_pane_g2_ParamLimits

0xc015,	// (0x00037fb2) sc_swipe_pane_g2

0x0001,

0xf755,	// (0x0003b6f2) sc_swipe_pane_g_ParamLimits

0xf755,	// (0x0003b6f2) sc_swipe_pane_g

0xc04f,	// (0x00037fec) sc_swipe_pane_t1_ParamLimits

0xc04f,	// (0x00037fec) sc_swipe_pane_t1

0xb0ff,	// (0x0003709c) main_cmail_launcher_pane

0x7714,	// (0x000336b1) aid_size_cell_cmail_l_ParamLimits

0x7714,	// (0x000336b1) aid_size_cell_cmail_l

0x7729,	// (0x000336c6) grid_cmail_l_pane_ParamLimits

0x7729,	// (0x000336c6) grid_cmail_l_pane

0x7743,	// (0x000336e0) cell_cmail_l_pane_ParamLimits

0x7743,	// (0x000336e0) cell_cmail_l_pane

0x7764,	// (0x00033701) cell_cmail_l_pane_g1_ParamLimits

0x7764,	// (0x00033701) cell_cmail_l_pane_g1

0x7770,	// (0x0003370d) cell_cmail_l_pane_t1_ParamLimits

0x7770,	// (0x0003370d) cell_cmail_l_pane_t1

0x7786,	// (0x00033723) cell_cmail_l_pane_t2_ParamLimits

0x7786,	// (0x00033723) cell_cmail_l_pane_t2

0x0001,

0xfbd2,	// (0x0003bb6f) cell_cmail_l_pane_t_ParamLimits

0xfbd2,	// (0x0003bb6f) cell_cmail_l_pane_t

0xbfa0,	// (0x00037f3d) grid_highlight_pane_cp018_ParamLimits

0xbfa0,	// (0x00037f3d) grid_highlight_pane_cp018

0x011e,	// (0x0002c0bb) main2_pane_ParamLimits

0x011e,	// (0x0002c0bb) main2_pane

0xc13b,	// (0x000380d8) popup_sp_fs_action_menu_bg_pane_g1

0xc143,	// (0x000380e0) popup_sp_fs_action_menu_bg_pane_g2

0xc14b,	// (0x000380e8) popup_sp_fs_action_menu_bg_pane_g3

0xc153,	// (0x000380f0) popup_sp_fs_action_menu_bg_pane_g4

0xc15b,	// (0x000380f8) popup_sp_fs_action_menu_bg_pane_g5

0xc163,	// (0x00038100) popup_sp_fs_action_menu_bg_pane_g6

0xc16b,	// (0x00038108) popup_sp_fs_action_menu_bg_pane_g7

0xc173,	// (0x00038110) popup_sp_fs_action_menu_bg_pane_g8

0xc17b,	// (0x00038118) popup_sp_fs_action_menu_bg_pane_g9

0xc183,	// (0x00038120) popup_sp_fs_action_menu_bg_pane_g10

0xc183,	// (0x00038120) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x0003b09d) popup_sp_fs_action_menu_bg_pane_g

0xc007,	// (0x00037fa4) list_medium_line_x2_t3_g3_g1_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x2_t3_g3_g1

0xc007,	// (0x00037fa4) list_medium_line_x2_t3_g3_g2_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x2_t3_g3_g2

0xc007,	// (0x00037fa4) list_medium_line_x2_t3_g3_g3_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x0003b14b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x0003b14b) list_medium_line_x2_t3_g3_g

0xc04f,	// (0x00037fec) list_medium_line_x2_t3_g3_t1_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_x2_t3_g3_t1

0xc04f,	// (0x00037fec) list_medium_line_x2_t3_g3_t2_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_x2_t3_g3_t2

0xc04f,	// (0x00037fec) list_medium_line_x2_t3_g3_t3_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x0003b152) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x0003b152) list_medium_line_x2_t3_g3_t

0xc007,	// (0x00037fa4) list_medium_line_x2_t3_g2_g1_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x2_t3_g2_g1

0xc007,	// (0x00037fa4) list_medium_line_x2_t3_g2_g2_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1bc,	// (0x0003b159) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1bc,	// (0x0003b159) list_medium_line_x2_t3_g2_g

0xc04f,	// (0x00037fec) list_medium_line_x2_t3_g2_t1_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_x2_t3_g2_t1

0xc04f,	// (0x00037fec) list_medium_line_x2_t3_g2_t2_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_x2_t3_g2_t2

0xc04f,	// (0x00037fec) list_medium_line_x2_t3_g2_t3_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x0003b152) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x0003b152) list_medium_line_x2_t3_g2_t

0xc007,	// (0x00037fa4) list_medium_line_x2_t4_g4_g1_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x2_t4_g4_g1

0xc007,	// (0x00037fa4) list_medium_line_x2_t4_g4_g2_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x2_t4_g4_g2

0xc007,	// (0x00037fa4) list_medium_line_x2_t4_g4_g3_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x2_t4_g4_g3

0xc007,	// (0x00037fa4) list_medium_line_x2_t4_g4_g4_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c1,	// (0x0003b15e) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c1,	// (0x0003b15e) list_medium_line_x2_t4_g4_g

0xc04f,	// (0x00037fec) list_medium_line_x2_t4_g4_t1_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_x2_t4_g4_t1

0xc04f,	// (0x00037fec) list_medium_line_x2_t4_g4_t2_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_x2_t4_g4_t2

0xc04f,	// (0x00037fec) list_medium_line_x2_t4_g4_t3_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_x2_t4_g4_t3

0xc04f,	// (0x00037fec) list_medium_line_x2_t4_g4_t4_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1ca,	// (0x0003b167) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1ca,	// (0x0003b167) list_medium_line_x2_t4_g4_t

0xc007,	// (0x00037fa4) list_medium_line_x2_t2_g4_g1_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x2_t2_g4_g1

0xc007,	// (0x00037fa4) list_medium_line_x2_t2_g4_g2_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x2_t2_g4_g2

0xc007,	// (0x00037fa4) list_medium_line_x2_t2_g4_g3_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x2_t2_g4_g3

0xc007,	// (0x00037fa4) list_medium_line_x2_t2_g4_g4_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c1,	// (0x0003b15e) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c1,	// (0x0003b15e) list_medium_line_x2_t2_g4_g

0xc04f,	// (0x00037fec) list_medium_line_x2_t2_g4_t1_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_x2_t2_g4_t1

0xc04f,	// (0x00037fec) list_medium_line_x2_t2_g4_t2_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_x2_t2_g4_t2

0x0001,

0xf191,	// (0x0003b12e) list_medium_line_x2_t2_g4_t_ParamLimits

0xf191,	// (0x0003b12e) list_medium_line_x2_t2_g4_t

0xc007,	// (0x00037fa4) list_medium_line_x2_t2_g3_g1_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x2_t2_g3_g1

0xc007,	// (0x00037fa4) list_medium_line_x2_t2_g3_g2_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x2_t2_g3_g2

0xc007,	// (0x00037fa4) list_medium_line_x2_t2_g3_g3_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x0003b14b) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x0003b14b) list_medium_line_x2_t2_g3_g

0xc04f,	// (0x00037fec) list_medium_line_x2_t2_g3_t1_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_x2_t2_g3_t1

0xc04f,	// (0x00037fec) list_medium_line_x2_t2_g3_t2_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_x2_t2_g3_t2

0x0001,

0xf191,	// (0x0003b12e) list_medium_line_x2_t2_g3_t_ParamLimits

0xf191,	// (0x0003b12e) list_medium_line_x2_t2_g3_t

0x2f70,	// (0x0002ef0d) main_sp_fs_list_pane_ParamLimits

0x2f70,	// (0x0002ef0d) main_sp_fs_list_pane

0x2f7c,	// (0x0002ef19) sp_fs_scroll_pane_ParamLimits

0x2f7c,	// (0x0002ef19) sp_fs_scroll_pane

0xc7be,	// (0x0003875b) list_medium_line_x2_t3_t1

0xc7be,	// (0x0003875b) list_medium_line_x2_t3_t2

0xc7be,	// (0x0003875b) list_medium_line_x2_t3_t3

0x0002,

0xf277,	// (0x0003b214) list_medium_line_x2_t3_t

0xc7be,	// (0x0003875b) list_medium_line_x3_t4_t1

0xc7be,	// (0x0003875b) list_medium_line_x3_t4_t2

0xc7be,	// (0x0003875b) list_medium_line_x3_t4_t3

0xc7be,	// (0x0003875b) list_medium_line_x3_t4_t4

0x0003,

0xf27e,	// (0x0003b21b) list_medium_line_x3_t4_t

0xc7be,	// (0x0003875b) list_medium_line_x4_t5_t1

0xc7be,	// (0x0003875b) list_medium_line_x4_t5_t2

0xc7be,	// (0x0003875b) list_medium_line_x4_t5_t3

0xc7be,	// (0x0003875b) list_medium_line_x4_t5_t4

0xc7be,	// (0x0003875b) list_medium_line_x4_t5_t5

0x0004,

0xf287,	// (0x0003b224) list_medium_line_x4_t5_t

0xc007,	// (0x00037fa4) list_medium_line_t4_g4_g1_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_t4_g4_g1

0xc007,	// (0x00037fa4) list_medium_line_t4_g4_g2_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_t4_g4_g2

0xc007,	// (0x00037fa4) list_medium_line_t4_g4_g3_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_t4_g4_g3

0xc007,	// (0x00037fa4) list_medium_line_t4_g4_g4_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_t4_g4_g4

0x0003,

0xf1c1,	// (0x0003b15e) list_medium_line_t4_g4_g_ParamLimits

0xf1c1,	// (0x0003b15e) list_medium_line_t4_g4_g

0xc04f,	// (0x00037fec) list_medium_line_t4_g4_t1_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_t4_g4_t1

0xc04f,	// (0x00037fec) list_medium_line_t4_g4_t2_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_t4_g4_t2

0xc04f,	// (0x00037fec) list_medium_line_t4_g4_t3_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_t4_g4_t3

0xc04f,	// (0x00037fec) list_medium_line_t4_g4_t4_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_t4_g4_t4

0x0003,

0xf1ca,	// (0x0003b167) list_medium_line_t4_g4_t_ParamLimits

0xf1ca,	// (0x0003b167) list_medium_line_t4_g4_t

0x302a,	// (0x0002efc7) chi_dic_find_pane_g1

0x05a7,	// (0x0002c544) main_tport_pane

0xc7be,	// (0x0003875b) list_medium_line_plain_t1

0xc007,	// (0x00037fa4) list_medium_line_t2_g2_g1_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_t2_g2_g1

0xc007,	// (0x00037fa4) list_medium_line_t2_g2_g2_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_t2_g2_g2

0x0001,

0xf1bc,	// (0x0003b159) list_medium_line_t2_g2_g_ParamLimits

0xf1bc,	// (0x0003b159) list_medium_line_t2_g2_g

0xc04f,	// (0x00037fec) list_medium_line_t2_g2_t1_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_t2_g2_t1

0xc04f,	// (0x00037fec) list_medium_line_t2_g2_t2_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_t2_g2_t2

0x0001,

0xf191,	// (0x0003b12e) list_medium_line_t2_g2_t_ParamLimits

0xf191,	// (0x0003b12e) list_medium_line_t2_g2_t

0x5f85,	// (0x00031f22) aid_sp_fs_list_icon_a_sm

0x5f8d,	// (0x00031f2a) aid_sp_fs_list_icon_d

0x5f95,	// (0x00031f32) aid_sp_fs_text_primary

0x5f9e,	// (0x00031f3b) aid_sp_fs_text_secondary

0xb07c,	// (0x00037019) list_medium_line

0xb07c,	// (0x00037019) list_medium_line_g2

0xb07c,	// (0x00037019) list_medium_line_g3

0xb07c,	// (0x00037019) list_medium_line_plain

0xb07c,	// (0x00037019) list_medium_line_plain_t2

0xb07c,	// (0x00037019) list_medium_line_plain_t3

0xb07c,	// (0x00037019) list_medium_line_right_icon

0xb07c,	// (0x00037019) list_medium_line_right_iconx2

0xb07c,	// (0x00037019) list_medium_line_t2

0xb07c,	// (0x00037019) list_medium_line_t2_g2

0xb07c,	// (0x00037019) list_medium_line_t2_g3

0xb07c,	// (0x00037019) list_medium_line_t2_right_icon

0xb07c,	// (0x00037019) list_medium_line_t2_right_iconx2

0xb07c,	// (0x00037019) list_medium_line_t3

0xb07c,	// (0x00037019) list_medium_line_t3_g2

0xb07c,	// (0x00037019) list_medium_line_t3_g3

0xb07c,	// (0x00037019) list_medium_line_t3_right_iconx2

0xb07c,	// (0x00037019) list_medium_line_t4_g4

0xb07c,	// (0x00037019) list_medium_line_x2

0xb07c,	// (0x00037019) list_medium_line_x2_t2_g2

0xb07c,	// (0x00037019) list_medium_line_x2_t2_g3

0xb07c,	// (0x00037019) list_medium_line_x2_t2_g4

0xb07c,	// (0x00037019) list_medium_line_x2_t3

0xb07c,	// (0x00037019) list_medium_line_x2_t3_g2

0xb07c,	// (0x00037019) list_medium_line_x2_t3_g3

0xb07c,	// (0x00037019) list_medium_line_x2_t3_g4

0xb07c,	// (0x00037019) list_medium_line_x2_t4_g2

0xb07c,	// (0x00037019) list_medium_line_x2_t4_g4

0xb07c,	// (0x00037019) list_medium_line_x3

0xb07c,	// (0x00037019) list_medium_line_x3_t4

0xb07c,	// (0x00037019) list_medium_line_x3_t4_g4

0xb07c,	// (0x00037019) list_medium_line_x4_t4

0xb07c,	// (0x00037019) list_medium_line_x4_t4_g7

0xb07c,	// (0x00037019) list_medium_line_x4_t5

0x5fa7,	// (0x00031f44) list_single_fs_dyc_pane_ParamLimits

0x5fa7,	// (0x00031f44) list_single_fs_dyc_pane

0xc007,	// (0x00037fa4) list_medium_line_x4_t4_g7_g1_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x4_t4_g7_g1

0xc007,	// (0x00037fa4) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x4_t4_g7_g2

0xc007,	// (0x00037fa4) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x4_t4_g7_g3

0xc007,	// (0x00037fa4) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x4_t4_g7_g4

0xc007,	// (0x00037fa4) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x4_t4_g7_g5

0xc007,	// (0x00037fa4) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x4_t4_g7_g6

0xc015,	// (0x00037fb2) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc015,	// (0x00037fb2) list_medium_line_x4_t4_g7_g7

0x0006,

0xf182,	// (0x0003b11f) list_medium_line_x4_t4_g7_g_ParamLimits

0xf182,	// (0x0003b11f) list_medium_line_x4_t4_g7_g

0xc04f,	// (0x00037fec) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_x4_t4_g7_t1

0xc04f,	// (0x00037fec) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_x4_t4_g7_t2

0xc04f,	// (0x00037fec) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_x4_t4_g7_t3

0xc063,	// (0x00038000) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc063,	// (0x00038000) list_medium_line_x4_t4_g7_t4

0xc063,	// (0x00038000) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc063,	// (0x00038000) list_medium_line_x4_t4_g7_t5

0x0004,

0xfaee,	// (0x0003ba8b) list_medium_line_x4_t4_g7_t_ParamLimits

0xfaee,	// (0x0003ba8b) list_medium_line_x4_t4_g7_t

0x6ba3,	// (0x00032b40) list_single_dyc_row_pane_ParamLimits

0x6ba3,	// (0x00032b40) list_single_dyc_row_pane

0x764f,	// (0x000335ec) call5_gesture_pane_ParamLimits

0x764f,	// (0x000335ec) call5_gesture_pane

0x76a5,	// (0x00033642) call5_windows_pane_ParamLimits

0x76a5,	// (0x00033642) call5_windows_pane

0x77a3,	// (0x00033740) call5_swipe_1_pane_cp_ParamLimits

0x77a3,	// (0x00033740) call5_swipe_1_pane_cp

0x77af,	// (0x0003374c) call5_swipe_2_pane_cp_ParamLimits

0x77af,	// (0x0003374c) call5_swipe_2_pane_cp

0xc258,	// (0x000381f5) call5_image_pane_cp

0x77bb,	// (0x00033758) popup_call5_audio_first_window_cp_ParamLimits

0x77bb,	// (0x00033758) popup_call5_audio_first_window_cp

0x77c9,	// (0x00033766) call5_swipe_1_pane_g1_cp_ParamLimits

0x77c9,	// (0x00033766) call5_swipe_1_pane_g1_cp

0x77d6,	// (0x00033773) call5_swipe_1_pane_g2_cp

0x77de,	// (0x0003377b) call5_swipe_1_pane_t1_cp_ParamLimits

0x77de,	// (0x0003377b) call5_swipe_1_pane_t1_cp

0x77c9,	// (0x00033766) call5_swipe_2_pane_g1_cp_ParamLimits

0x77c9,	// (0x00033766) call5_swipe_2_pane_g1_cp

0x77f3,	// (0x00033790) call5_swipe_2_pane_g2_cp

0x77fb,	// (0x00033798) call5_swipe_2_pane_t1_cp_ParamLimits

0x77fb,	// (0x00033798) call5_swipe_2_pane_t1_cp

0xbfa0,	// (0x00037f3d) main_sp_fs_email_pane

0xf037,	// (0x0003afd4) main_sp_fs_listscroll_pane_te

0x7810,	// (0x000337ad) popup_sp_fs_action_menu_pane_ParamLimits

0x7810,	// (0x000337ad) popup_sp_fs_action_menu_pane

0xc045,	// (0x00037fe2) bg_sp_fs_ctrlbar_pane_g1

0x7856,	// (0x000337f3) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x785f,	// (0x000337fc) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x7868,	// (0x00033805) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc045,	// (0x00037fe2) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbd7,	// (0x0003bb74) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe06a,	// (0x0003a007) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe06a,	// (0x0003a007) bg_sp_fs_ctrlbar_ddmenu_pane

0x7871,	// (0x0003380e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x7871,	// (0x0003380e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x787d,	// (0x0003381a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x787d,	// (0x0003381a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbe0,	// (0x0003bb7d) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbe0,	// (0x0003bb7d) main_sp_fs_ctrlbar_ddmenu_pane_g

0x7889,	// (0x00033826) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x7889,	// (0x00033826) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc045,	// (0x00037fe2) list_medium_line_t2_right_icon_g1

0xc7be,	// (0x0003875b) list_medium_line_t2_right_icon_t1

0xc7be,	// (0x0003875b) list_medium_line_t2_right_icon_t2

0x0001,

0xfbe5,	// (0x0003bb82) list_medium_line_t2_right_icon_t

0xcc60,	// (0x00038bfd) bg_sp_fs_ctrlbar_pane_ParamLimits

0xcc60,	// (0x00038bfd) bg_sp_fs_ctrlbar_pane

0x792a,	// (0x000338c7) main_sp_fs_ctrlbar_button_pane_cp01

0x7934,	// (0x000338d1) main_sp_fs_ctrlbar_ddmenu_pane

0x793e,	// (0x000338db) main_sp_fs_ctrlbar_pane_g1

0x794a,	// (0x000338e7) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbea,	// (0x0003bb87) main_sp_fs_ctrlbar_pane_g

0x798a,	// (0x00033927) main_sp_fs_ctrlbar_pane_t1

0x79c9,	// (0x00033966) main_sp_fs_ctrlbar_pane

0x7a08,	// (0x000339a5) main_sp_fs_listscroll_pane_te_cp01

0x7a34,	// (0x000339d1) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7a34,	// (0x000339d1) popup_sp_fs_action_menu_pane_cp01

0xbfa0,	// (0x00037f3d) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xbfa0,	// (0x00037f3d) bg_sp_fs_highlight_list_pane_cp01

0x7a59,	// (0x000339f6) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x7a59,	// (0x000339f6) sp_fs_action_menu_list_gene_pane_g1

0x7a68,	// (0x00033a05) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x7a68,	// (0x00033a05) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbf8,	// (0x0003bb95) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbf8,	// (0x0003bb95) sp_fs_action_menu_list_gene_pane_g

0x7a75,	// (0x00033a12) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x7a75,	// (0x00033a12) sp_fs_action_menu_list_gene_pane_t1

0x7a8d,	// (0x00033a2a) sp_fs_action_menu_list_gene_pane_ParamLimits

0x7a8d,	// (0x00033a2a) sp_fs_action_menu_list_gene_pane

0x7ab0,	// (0x00033a4d) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x7ab0,	// (0x00033a4d) popup_sp_fs_action_menu_bg_pane

0x7abe,	// (0x00033a5b) sp_fs_action_menu_list_pane_ParamLimits

0x7abe,	// (0x00033a5b) sp_fs_action_menu_list_pane

0x7ae2,	// (0x00033a7f) sp_fs_scroll_pane_cp01_ParamLimits

0x7ae2,	// (0x00033a7f) sp_fs_scroll_pane_cp01

0xc7be,	// (0x0003875b) list_medium_line_plain_t2_t1

0xc7be,	// (0x0003875b) list_medium_line_plain_t2_t2

0x0001,

0xfbe5,	// (0x0003bb82) list_medium_line_plain_t2_t

0xc7be,	// (0x0003875b) list_medium_line_plain_t3_t1

0xc7be,	// (0x0003875b) list_medium_line_plain_t3_t2

0xc7be,	// (0x0003875b) list_medium_line_plain_t3_t3

0x0002,

0xf277,	// (0x0003b214) list_medium_line_plain_t3_t

0xc007,	// (0x00037fa4) list_medium_line_x2_t2_g2_g1_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x2_t2_g2_g1

0xc007,	// (0x00037fa4) list_medium_line_x2_t2_g2_g2_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1bc,	// (0x0003b159) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1bc,	// (0x0003b159) list_medium_line_x2_t2_g2_g

0xc04f,	// (0x00037fec) list_medium_line_x2_t2_g2_t1_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_x2_t2_g2_t1

0xc04f,	// (0x00037fec) list_medium_line_x2_t2_g2_t2_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_x2_t2_g2_t2

0x0001,

0xf191,	// (0x0003b12e) list_medium_line_x2_t2_g2_t_ParamLimits

0xf191,	// (0x0003b12e) list_medium_line_x2_t2_g2_t

0xc007,	// (0x00037fa4) list_medium_line_x2_t4_g2_g1_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x2_t4_g2_g1

0xc007,	// (0x00037fa4) list_medium_line_x2_t4_g2_g2_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1bc,	// (0x0003b159) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1bc,	// (0x0003b159) list_medium_line_x2_t4_g2_g

0xc04f,	// (0x00037fec) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_x2_t4_g2_t1

0xc04f,	// (0x00037fec) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_x2_t4_g2_t2

0xc04f,	// (0x00037fec) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_x2_t4_g2_t3

0xc04f,	// (0x00037fec) list_medium_line_x2_t4_g2_t4_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1ca,	// (0x0003b167) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1ca,	// (0x0003b167) list_medium_line_x2_t4_g2_t

0xc045,	// (0x00037fe2) list_medium_line_t3_right_iconx2_g1

0xc045,	// (0x00037fe2) list_medium_line_t3_right_iconx2_g2

0xc045,	// (0x00037fe2) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf393,	// (0x0003b330) list_medium_line_t3_right_iconx2_g

0xc7be,	// (0x0003875b) list_medium_line_t3_right_iconx2_t1

0xc7be,	// (0x0003875b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbe5,	// (0x0003bb82) list_medium_line_t3_right_iconx2_t

0xc007,	// (0x00037fa4) list_medium_line_x3_t4_g4_g1_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x3_t4_g4_g1

0xc007,	// (0x00037fa4) list_medium_line_x3_t4_g4_g2_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x3_t4_g4_g2

0xc007,	// (0x00037fa4) list_medium_line_x3_t4_g4_g3_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x3_t4_g4_g3

0xc007,	// (0x00037fa4) list_medium_line_x3_t4_g4_g4_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c1,	// (0x0003b15e) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c1,	// (0x0003b15e) list_medium_line_x3_t4_g4_g

0xc04f,	// (0x00037fec) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_x3_t4_g4_t1

0xc04f,	// (0x00037fec) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_x3_t4_g4_t2

0xc04f,	// (0x00037fec) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_x3_t4_g4_t3

0xc04f,	// (0x00037fec) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1ca,	// (0x0003b167) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1ca,	// (0x0003b167) list_medium_line_x3_t4_g4_t

0x7b08,	// (0x00033aa5) list_single_dyc_row_text_pane_t1_ParamLimits

0x7b08,	// (0x00033aa5) list_single_dyc_row_text_pane_t1

0x7b51,	// (0x00033aee) list_single_dyc_row_text_pane_t2_ParamLimits

0x7b51,	// (0x00033aee) list_single_dyc_row_text_pane_t2

0x7bc7,	// (0x00033b64) list_single_dyc_row_text_pane_t3_ParamLimits

0x7bc7,	// (0x00033b64) list_single_dyc_row_text_pane_t3

0x0005,

0xfbfd,	// (0x0003bb9a) list_single_dyc_row_text_pane_t_ParamLimits

0xfbfd,	// (0x0003bb9a) list_single_dyc_row_text_pane_t

0x7caa,	// (0x00033c47) list_single_dyc_row_pane_g1_ParamLimits

0x7caa,	// (0x00033c47) list_single_dyc_row_pane_g1

0x7cb6,	// (0x00033c53) list_single_dyc_row_pane_g2_ParamLimits

0x7cb6,	// (0x00033c53) list_single_dyc_row_pane_g2

0x7cc2,	// (0x00033c5f) list_single_dyc_row_pane_g3_ParamLimits

0x7cc2,	// (0x00033c5f) list_single_dyc_row_pane_g3

0x7cce,	// (0x00033c6b) list_single_dyc_row_pane_g4_ParamLimits

0x7cce,	// (0x00033c6b) list_single_dyc_row_pane_g4

0x0003,

0xfc0a,	// (0x0003bba7) list_single_dyc_row_pane_g_ParamLimits

0xfc0a,	// (0x0003bba7) list_single_dyc_row_pane_g

0x7cda,	// (0x00033c77) list_single_dyc_row_text_pane_ParamLimits

0x7cda,	// (0x00033c77) list_single_dyc_row_text_pane

0xb07c,	// (0x00037019) bg_sp_fs_scroll_pane

0x7cf9,	// (0x00033c96) thumb_sp_fs_scroll_pane

0xc007,	// (0x00037fa4) list_medium_line_g1_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_g1

0xc04f,	// (0x00037fec) list_medium_line_t1_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_t1

0xc007,	// (0x00037fa4) list_medium_line_x2_g1_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x2_g1

0xc007,	// (0x00037fa4) list_medium_line_x2_g2_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x2_g2

0x0001,

0xf1bc,	// (0x0003b159) list_medium_line_x2_g_ParamLimits

0xf1bc,	// (0x0003b159) list_medium_line_x2_g

0xc04f,	// (0x00037fec) list_medium_line_x2_t1_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_x2_t1

0xc007,	// (0x00037fa4) list_medium_line_x3_g1_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x3_g1

0x527a,	// (0x00031217) list_medium_line_x3_g2_ParamLimits

0x527a,	// (0x00031217) list_medium_line_x3_g2

0x0001,

0xfc13,	// (0x0003bbb0) list_medium_line_x3_g_ParamLimits

0xfc13,	// (0x0003bbb0) list_medium_line_x3_g

0x7d02,	// (0x00033c9f) list_medium_line_x3_t1_ParamLimits

0x7d02,	// (0x00033c9f) list_medium_line_x3_t1

0x7d16,	// (0x00033cb3) thumb_sp_fs_scroll_pane_g1

0x7d1f,	// (0x00033cbc) thumb_sp_fs_scroll_pane_g2

0x7d28,	// (0x00033cc5) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc18,	// (0x0003bbb5) thumb_sp_fs_scroll_pane_g

0x7d16,	// (0x00033cb3) bg_sp_fs_scroll_pane_g1

0x7d1f,	// (0x00033cbc) bg_sp_fs_scroll_pane_g2

0x7d28,	// (0x00033cc5) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc18,	// (0x0003bbb5) bg_sp_fs_scroll_pane_g

0xc007,	// (0x00037fa4) list_medium_line_x2_t3_g4_g1_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x2_t3_g4_g1

0xc007,	// (0x00037fa4) list_medium_line_x2_t3_g4_g2_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x2_t3_g4_g2

0xc007,	// (0x00037fa4) list_medium_line_x2_t3_g4_g3_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x2_t3_g4_g3

0xc007,	// (0x00037fa4) list_medium_line_x2_t3_g4_g4_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c1,	// (0x0003b15e) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c1,	// (0x0003b15e) list_medium_line_x2_t3_g4_g

0xc04f,	// (0x00037fec) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_x2_t3_g4_t1

0xc04f,	// (0x00037fec) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_x2_t3_g4_t2

0xc04f,	// (0x00037fec) list_medium_line_x2_t3_g4_t3_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x0003b152) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x0003b152) list_medium_line_x2_t3_g4_t

0xc007,	// (0x00037fa4) list_medium_line_g2_g1_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_g2_g1

0xc007,	// (0x00037fa4) list_medium_line_g2_g2_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_g2_g2

0x0001,

0xf1bc,	// (0x0003b159) list_medium_line_g2_g_ParamLimits

0xf1bc,	// (0x0003b159) list_medium_line_g2_g

0xc04f,	// (0x00037fec) list_medium_line_g2_t1_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_g2_t1

0xc007,	// (0x00037fa4) list_medium_line_t3_g2_g1_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_t3_g2_g1

0xc007,	// (0x00037fa4) list_medium_line_t3_g2_g2_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_t3_g2_g2

0x0001,

0xf1bc,	// (0x0003b159) list_medium_line_t3_g2_g_ParamLimits

0xf1bc,	// (0x0003b159) list_medium_line_t3_g2_g

0xc04f,	// (0x00037fec) list_medium_line_t3_g2_t1_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_t3_g2_t1

0xc04f,	// (0x00037fec) list_medium_line_t3_g2_t2_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_t3_g2_t2

0xc04f,	// (0x00037fec) list_medium_line_t3_g2_t3_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x0003b152) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x0003b152) list_medium_line_t3_g2_t

0xc045,	// (0x00037fe2) list_medium_line_right_icon_g1

0xc7be,	// (0x0003875b) list_medium_line_right_icon_t1

0xc007,	// (0x00037fa4) list_medium_line_t2_g1_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_t2_g1

0xc04f,	// (0x00037fec) list_medium_line_t2_t1_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_t2_t1

0xc04f,	// (0x00037fec) list_medium_line_t2_t2_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_t2_t2

0x0001,

0xf191,	// (0x0003b12e) list_medium_line_t2_t_ParamLimits

0xf191,	// (0x0003b12e) list_medium_line_t2_t

0xc007,	// (0x00037fa4) list_medium_line_t3_g1_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_t3_g1

0xc04f,	// (0x00037fec) list_medium_line_t3_t1_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_t3_t1

0xc04f,	// (0x00037fec) list_medium_line_t3_t2_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_t3_t2

0xc04f,	// (0x00037fec) list_medium_line_t3_t3_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x0003b152) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x0003b152) list_medium_line_t3_t

0xc007,	// (0x00037fa4) list_medium_line_g3_g1_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_g3_g1

0xc007,	// (0x00037fa4) list_medium_line_g3_g2_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_g3_g2

0xc007,	// (0x00037fa4) list_medium_line_g3_g3_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x0003b14b) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x0003b14b) list_medium_line_g3_g

0xc04f,	// (0x00037fec) list_medium_line_g3_t1_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_g3_t1

0xc007,	// (0x00037fa4) list_medium_line_t2_g3_g1_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_t2_g3_g1

0xc007,	// (0x00037fa4) list_medium_line_t2_g3_g2_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_t2_g3_g2

0xc007,	// (0x00037fa4) list_medium_line_t2_g3_g3_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x0003b14b) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x0003b14b) list_medium_line_t2_g3_g

0xc04f,	// (0x00037fec) list_medium_line_t2_g3_t1_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_t2_g3_t1

0xc04f,	// (0x00037fec) list_medium_line_t2_g3_t2_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_t2_g3_t2

0x0001,

0xf191,	// (0x0003b12e) list_medium_line_t2_g3_t_ParamLimits

0xf191,	// (0x0003b12e) list_medium_line_t2_g3_t

0xc007,	// (0x00037fa4) list_medium_line_t3_g3_g1_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_t3_g3_g1

0xc007,	// (0x00037fa4) list_medium_line_t3_g3_g2_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_t3_g3_g2

0xc007,	// (0x00037fa4) list_medium_line_t3_g3_g3_ParamLimits

0xc007,	// (0x00037fa4) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x0003b14b) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x0003b14b) list_medium_line_t3_g3_g

0xc04f,	// (0x00037fec) list_medium_line_t3_g3_t1_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_t3_g3_t1

0xc04f,	// (0x00037fec) list_medium_line_t3_g3_t2_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_t3_g3_t2

0xc04f,	// (0x00037fec) list_medium_line_t3_g3_t3_ParamLimits

0xc04f,	// (0x00037fec) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x0003b152) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x0003b152) list_medium_line_t3_g3_t

0xc045,	// (0x00037fe2) list_medium_line_right_iconx2_g1

0xc045,	// (0x00037fe2) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x0003b04c) list_medium_line_right_iconx2_g

0xc7be,	// (0x0003875b) list_medium_line_right_iconx2_t1

0xc045,	// (0x00037fe2) list_medium_line_t2_right_iconx2_g1

0xc045,	// (0x00037fe2) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x0003b04c) list_medium_line_t2_right_iconx2_g

0xc7be,	// (0x0003875b) list_medium_line_t2_right_iconx2_t1

0xc7be,	// (0x0003875b) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbe5,	// (0x0003bb82) list_medium_line_t2_right_iconx2_t

0xc7be,	// (0x0003875b) list_medium_line_x4_t4_t1

0xc7be,	// (0x0003875b) list_medium_line_x4_t4_t2

0xc7be,	// (0x0003875b) list_medium_line_x4_t4_t3

0xc7be,	// (0x0003875b) list_medium_line_x4_t4_t4

0x0003,

0xf27e,	// (0x0003b21b) list_medium_line_x4_t4_t

0x7d75,	// (0x00033d12) tport_appsw_pane_ParamLimits

0x7d75,	// (0x00033d12) tport_appsw_pane

0x7d8d,	// (0x00033d2a) tport_contact_pane_ParamLimits

0x7d8d,	// (0x00033d2a) tport_contact_pane

0x7da8,	// (0x00033d45) tport_listscroll_pane_ParamLimits

0x7da8,	// (0x00033d45) tport_listscroll_pane

0x7dc0,	// (0x00033d5d) cell_tport_appsw_pane_ParamLimits

0x7dc0,	// (0x00033d5d) cell_tport_appsw_pane

0xcc3e,	// (0x00038bdb) tport_appsw_pane_g1_ParamLimits

0xcc3e,	// (0x00038bdb) tport_appsw_pane_g1

0x7e0a,	// (0x00033da7) tport_contact_pane_g1

0x7e13,	// (0x00033db0) tport_contact_pane_t1

0x7e21,	// (0x00033dbe) tport_contact_pane_t2

0x0001,

0xfc1f,	// (0x0003bbbc) tport_contact_pane_t

0x7e2f,	// (0x00033dcc) list_tport_pane

0x7e38,	// (0x00033dd5) scroll_pane_cp_030

0x7e49,	// (0x00033de6) cell_tport_appsw_pane_g1

0x7e59,	// (0x00033df6) cell_tport_appsw_pane_t1

0x7e67,	// (0x00033e04) grid_highlight_pane_cp019

0x7e6f,	// (0x00033e0c) list_tport_double_graphic_pane_ParamLimits

0x7e6f,	// (0x00033e0c) list_tport_double_graphic_pane

0xbfa0,	// (0x00037f3d) list_highlight_pane_cp023_ParamLimits

0xbfa0,	// (0x00037f3d) list_highlight_pane_cp023

0x7e7c,	// (0x00033e19) list_tport_double_graphic_pane_g1_ParamLimits

0x7e7c,	// (0x00033e19) list_tport_double_graphic_pane_g1

0x7e89,	// (0x00033e26) list_tport_double_graphic_pane_t1_ParamLimits

0x7e89,	// (0x00033e26) list_tport_double_graphic_pane_t1

0x7e9e,	// (0x00033e3b) list_tport_double_graphic_pane_t2_ParamLimits

0x7e9e,	// (0x00033e3b) list_tport_double_graphic_pane_t2

0x0001,

0xfc2b,	// (0x0003bbc8) list_tport_double_graphic_pane_t_ParamLimits

0xfc2b,	// (0x0003bbc8) list_tport_double_graphic_pane_t

0xb07c,	// (0x00037019) main_cale_note_pane

0x1184,	// (0x0002d121) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1184,	// (0x0002d121) cell_vitu2_function_top_wide_pane_cp01

0x7212,	// (0x000331af) wait_bar_pane_cp05_ParamLimits

0xbfa0,	// (0x00037f3d) listscroll_cmail_pane

0x7eb8,	// (0x00033e55) list_cmail_pane

0x7ecf,	// (0x00033e6c) list_cmail_body_pane

0x7ee6,	// (0x00033e83) list_single_cmail_header_caption_pane

0x7f00,	// (0x00033e9d) list_single_cmail_header_detail_pane_ParamLimits

0x7f00,	// (0x00033e9d) list_single_cmail_header_detail_pane

0x7f33,	// (0x00033ed0) list_single_cmail_header_caption_pane_t1

0x7f4a,	// (0x00033ee7) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7f4a,	// (0x00033ee7) list_single_cmail_header_detail_pane_g1

0x7f62,	// (0x00033eff) list_single_cmail_header_detail_pane_g2_ParamLimits

0x7f62,	// (0x00033eff) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc30,	// (0x0003bbcd) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc30,	// (0x0003bbcd) list_single_cmail_header_detail_pane_g

0x7f7b,	// (0x00033f18) list_single_cmail_header_detail_pane_t1_ParamLimits

0x7f7b,	// (0x00033f18) list_single_cmail_header_detail_pane_t1

0x7fdb,	// (0x00033f78) list_single_cmail_header_editor_pane_bg_ParamLimits

0x7fdb,	// (0x00033f78) list_single_cmail_header_editor_pane_bg

0x707c,	// (0x00033019) list_cmail_body_pane_g1

0x7ff2,	// (0x00033f8f) list_cmail_body_pane_t1

0xeabd,	// (0x0003aa5a) list_single_cmail_header_editor_pane_bg_g1

0xc484,	// (0x00038421) list_single_cmail_header_editor_pane_bg_g1_copy1

0xeacd,	// (0x0003aa6a) list_single_cmail_header_editor_pane_bg_g1_copy2

0xeac5,	// (0x0003aa62) list_single_cmail_header_editor_pane_bg_g1_copy3

0xed17,	// (0x0003acb4) list_single_cmail_header_editor_pane_bg_g1_copy4

0xeaed,	// (0x0003aa8a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xeadd,	// (0x0003aa7a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xeae5,	// (0x0003aa82) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc464,	// (0x00038401) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8000,	// (0x00033f9d) calenote_gesture_pane_ParamLimits

0x8000,	// (0x00033f9d) calenote_gesture_pane

0x8020,	// (0x00033fbd) calenote_window_pane_ParamLimits

0x8020,	// (0x00033fbd) calenote_window_pane

0x803c,	// (0x00033fd9) popup_note_window_cp01

0x8045,	// (0x00033fe2) calenote_swipe_1_pane_ParamLimits

0x8045,	// (0x00033fe2) calenote_swipe_1_pane

0x77af,	// (0x0003374c) calenote_swipe_2_pane_ParamLimits

0x77af,	// (0x0003374c) calenote_swipe_2_pane

0x77c9,	// (0x00033766) calenote_swipe_1_pane_g1_ParamLimits

0x77c9,	// (0x00033766) calenote_swipe_1_pane_g1

0x8063,	// (0x00034000) calenote_swipe_1_pane_g2_ParamLimits

0x8063,	// (0x00034000) calenote_swipe_1_pane_g2

0x0001,

0xfc3c,	// (0x0003bbd9) calenote_swipe_1_pane_g_ParamLimits

0xfc3c,	// (0x0003bbd9) calenote_swipe_1_pane_g

0x806f,	// (0x0003400c) calenote_swipe_1_pane_t1_ParamLimits

0x806f,	// (0x0003400c) calenote_swipe_1_pane_t1

0x77c9,	// (0x00033766) calenote_swipe_2_pane_g1_ParamLimits

0x77c9,	// (0x00033766) calenote_swipe_2_pane_g1

0x808e,	// (0x0003402b) calenote_swipe_2_pane_g2_ParamLimits

0x808e,	// (0x0003402b) calenote_swipe_2_pane_g2

0x0001,

0xfc41,	// (0x0003bbde) calenote_swipe_2_pane_g_ParamLimits

0xfc41,	// (0x0003bbde) calenote_swipe_2_pane_g

0x809a,	// (0x00034037) calenote_swipe_2_pane_t1_ParamLimits

0x809a,	// (0x00034037) calenote_swipe_2_pane_t1

0xb07c,	// (0x00037019) main_mup_navstr_pane

0x4a65,	// (0x00030a02) main_mup3_pane_t7_ParamLimits

0x4a65,	// (0x00030a02) main_mup3_pane_t7

0xba0b,	// (0x000379a8) main_mp4_pane_g6_ParamLimits

0xba0b,	// (0x000379a8) main_mp4_pane_g6

0xbc39,	// (0x00037bd6) main_image3_pane_t4_ParamLimits

0xbc39,	// (0x00037bd6) main_image3_pane_t4

0x80c1,	// (0x0003405e) popup_navstr_preview_pane_ParamLimits

0x80c1,	// (0x0003405e) popup_navstr_preview_pane

0x80d1,	// (0x0003406e) scroll_navstr_pane_ParamLimits

0x80d1,	// (0x0003406e) scroll_navstr_pane

0xb07c,	// (0x00037019) bg_popup_preview_window_pane_cp04

0x80e5,	// (0x00034082) popup_navstr_preview_pane_t1

0x80f3,	// (0x00034090) scroll_navstr_pane_g1_ParamLimits

0x80f3,	// (0x00034090) scroll_navstr_pane_g1

0x8107,	// (0x000340a4) scroll_navstr_pane_t1_ParamLimits

0x8107,	// (0x000340a4) scroll_navstr_pane_t1

0x805a,	// (0x00033ff7) bg_button_pane_cp014

0x805a,	// (0x00033ff7) bg_button_pane_cp030

0x75f5,	// (0x00033592) list_double_fisheye_pane_g4_ParamLimits

0x75f5,	// (0x00033592) list_double_fisheye_pane_g4

0x7601,	// (0x0003359e) list_double_fisheye_pane_g5_ParamLimits

0x7601,	// (0x0003359e) list_double_fisheye_pane_g5

0x2f7c,	// (0x0002ef19) sp_fs_scroll_pane_cp03

0x793e,	// (0x000338db) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x794a,	// (0x000338e7) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbea,	// (0x0003bb87) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x798a,	// (0x00033927) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x7ec7,	// (0x00033e64) sp_fs_scroll_pane_cp02

0xc1b4,	// (0x00038151) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc1b4,	// (0x00038151) popup_sp_fs_calendar_preview_list_single_pane

0xb07c,	// (0x00037019) main_cam6_pano_pane

0xb0f1,	// (0x0003708e) main_mup3_pane_ParamLimits

0xb07c,	// (0x00037019) main_phacti_pane

0x70e3,	// (0x00033080) bg_button_pane_cp11

0x70fd,	// (0x0003309a) main_mobtv_info_pane_g2_ParamLimits

0x70fd,	// (0x0003309a) main_mobtv_info_pane_g2

0x0001,

0xfb4f,	// (0x0003baec) main_mobtv_info_pane_g_ParamLimits

0xfb4f,	// (0x0003baec) main_mobtv_info_pane_g

0xc04f,	// (0x00037fec) sc_clock_pane_t5_ParamLimits

0xc04f,	// (0x00037fec) sc_clock_pane_t5

0xcc3e,	// (0x00038bdb) main_radioblah_pane_g1_ParamLimits

0xcc4c,	// (0x00038be9) main_radioblah_pane_t3_ParamLimits

0xcc4c,	// (0x00038be9) main_radioblah_pane_t3

0xcc4c,	// (0x00038be9) main_radioblah_pane_t4_ParamLimits

0xcc4c,	// (0x00038be9) main_radioblah_pane_t4

0xbfa0,	// (0x00037f3d) main_radioblah_text_pane_ParamLimits

0xbfa0,	// (0x00037f3d) main_radioblah_text_pane

0x7511,	// (0x000334ae) main_radioblah_info_pane_g1_ParamLimits

0x7555,	// (0x000334f2) main_radioblah_info_pane_t4_ParamLimits

0x7555,	// (0x000334f2) main_radioblah_info_pane_t4

0xbfa0,	// (0x00037f3d) main_sp_fs_calendar_pane

0x811e,	// (0x000340bb) main_phacti_pane_g1

0x812f,	// (0x000340cc) phacti_note_pane_ParamLimits

0x812f,	// (0x000340cc) phacti_note_pane

0x8143,	// (0x000340e0) phacti_term_pane_ParamLimits

0x8143,	// (0x000340e0) phacti_term_pane

0x8158,	// (0x000340f5) phacti_note_pane_t1_ParamLimits

0x8158,	// (0x000340f5) phacti_note_pane_t1

0x816f,	// (0x0003410c) phacti_term_pane_g1

0x8177,	// (0x00034114) phacti_term_pane_t1_ParamLimits

0x8177,	// (0x00034114) phacti_term_pane_t1

0x81a1,	// (0x0003413e) popup_sp_fs_calendar_preview_list_single_pane_g1

0x81a9,	// (0x00034146) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc4b,	// (0x0003bbe8) popup_sp_fs_calendar_preview_list_single_pane_g

0x81b1,	// (0x0003414e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x81b1,	// (0x0003414e) popup_sp_fs_calendar_preview_list_single_pane_t1

0x81c7,	// (0x00034164) aid_popup_sp_fs_bg_corner_pane

0xc045,	// (0x00037fe2) popup_sp_fs_calendar_preview_bg_pane_g1

0xb07c,	// (0x00037019) popup_sp_fs_calendar_preview_bg_pane

0x81cf,	// (0x0003416c) popup_sp_fs_calendar_preview_list_pane

0xcc60,	// (0x00038bfd) bg_main_sp_fs_cale_pane_ParamLimits

0xcc60,	// (0x00038bfd) bg_main_sp_fs_cale_pane

0x8241,	// (0x000341de) listscroll_cale_mrui_pane_ParamLimits

0x8241,	// (0x000341de) listscroll_cale_mrui_pane

0x8256,	// (0x000341f3) listscroll_sp_fs_schedule_track_pane

0x825f,	// (0x000341fc) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x825f,	// (0x000341fc) main_sp_fs_ctrlbar_pane_cp01

0x8272,	// (0x0003420f) main_sp_fs_ribbon_pane

0x827a,	// (0x00034217) popup_sp_fs_cale_preview_window

0x828c,	// (0x00034229) list_single_sp_fs_schedule_track_pane_ParamLimits

0x828c,	// (0x00034229) list_single_sp_fs_schedule_track_pane

0xbfa0,	// (0x00037f3d) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xbfa0,	// (0x00037f3d) bg_sp_fs_highlight_list_pane_cp03

0x829f,	// (0x0003423c) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x829f,	// (0x0003423c) list_single_sp_fs_schedule_track_pane_g1

0x82ab,	// (0x00034248) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x82ab,	// (0x00034248) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc50,	// (0x0003bbed) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc50,	// (0x0003bbed) list_single_sp_fs_schedule_track_pane_g

0x82b7,	// (0x00034254) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x82b7,	// (0x00034254) list_single_sp_fs_schedule_track_pane_t1

0x82d9,	// (0x00034276) sp_fs_schedule_track_pane_ParamLimits

0x82d9,	// (0x00034276) sp_fs_schedule_track_pane

0x82ee,	// (0x0003428b) sp_fs_schedule_track_pane_g1

0x82f6,	// (0x00034293) sp_fs_schedule_track_pane_g2

0x82fe,	// (0x0003429b) sp_fs_schedule_track_pane_g3

0x8306,	// (0x000342a3) sp_fs_schedule_track_pane_g4

0x830e,	// (0x000342ab) sp_fs_schedule_track_pane_g5

0x0004,

0xfc55,	// (0x0003bbf2) sp_fs_schedule_track_pane_g

0xeabd,	// (0x0003aa5a) bg_sp_fs_schedule_viewer_highlight_g1

0xc484,	// (0x00038421) bg_sp_fs_schedule_viewer_highlight_g2

0xeac5,	// (0x0003aa62) bg_sp_fs_schedule_viewer_highlight_g3

0xeacd,	// (0x0003aa6a) bg_sp_fs_schedule_viewer_highlight_g4

0xed17,	// (0x0003acb4) bg_sp_fs_schedule_viewer_highlight_g5

0xeadd,	// (0x0003aa7a) bg_sp_fs_schedule_viewer_highlight_g6

0xeae5,	// (0x0003aa82) bg_sp_fs_schedule_viewer_highlight_g7

0xeaed,	// (0x0003aa8a) bg_sp_fs_schedule_viewer_highlight_g8

0xc464,	// (0x00038401) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc60,	// (0x0003bbfd) bg_sp_fs_schedule_viewer_highlight_g

0xb07c,	// (0x00037019) bg_main_sp_fs_ribbon_pane

0x8316,	// (0x000342b3) main_sp_fs_ribbon_pane_g1

0x831f,	// (0x000342bc) main_sp_fs_ribbon_pane_t1

0x832e,	// (0x000342cb) main_sp_fs_ribbon_pane_t2

0x833d,	// (0x000342da) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc73,	// (0x0003bc10) main_sp_fs_ribbon_pane_t

0x834c,	// (0x000342e9) main_sp_fs_ribbon_scheduler_pane

0x8354,	// (0x000342f1) bg_main_sp_fs_ribbon_pane_g1

0x835d,	// (0x000342fa) bg_main_sp_fs_ribbon_pane_g2

0x8366,	// (0x00034303) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc7a,	// (0x0003bc17) bg_main_sp_fs_ribbon_pane_g

0x836e,	// (0x0003430b) main_sp_fs_ribbon_scheduler_pane_g1

0x8377,	// (0x00034314) main_sp_fs_ribbon_scheduler_pane_g2

0x8380,	// (0x0003431d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc81,	// (0x0003bc1e) main_sp_fs_ribbon_scheduler_pane_g

0x8389,	// (0x00034326) list_cale_mrui_pane

0x8396,	// (0x00034333) sp_fs_scroll_pane_cp07_ParamLimits

0x8396,	// (0x00034333) sp_fs_scroll_pane_cp07

0x83b2,	// (0x0003434f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x83b2,	// (0x0003434f) bg_sp_fs_schedule_viewer_highlight

0x83c4,	// (0x00034361) list_single_sp_fs_schedule_track_pane_cp01

0x83cc,	// (0x00034369) list_sp_fs_schedule_track_pane

0x83d4,	// (0x00034371) sp_fs_scroll_pane_cp06_ParamLimits

0x83d4,	// (0x00034371) sp_fs_scroll_pane_cp06

0xc045,	// (0x00037fe2) bgmain_sp_fs_calendar_pane_g1

0x83e6,	// (0x00034383) list_single_cale_mrui_pane_ParamLimits

0x83e6,	// (0x00034383) list_single_cale_mrui_pane

0x8406,	// (0x000343a3) list_single_cale_mrui_row_pane_ParamLimits

0x8406,	// (0x000343a3) list_single_cale_mrui_row_pane

0x8413,	// (0x000343b0) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8413,	// (0x000343b0) list_single_cale_mrui_row_pane_g1

0x8458,	// (0x000343f5) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8458,	// (0x000343f5) list_single_cale_mrui_row_pane_t1

0x846a,	// (0x00034407) list_single_cale_mrui_row_pane_t2_ParamLimits

0x846a,	// (0x00034407) list_single_cale_mrui_row_pane_t2

0x84d0,	// (0x0003446d) list_single_cale_mrui_row_pane_t3_ParamLimits

0x84d0,	// (0x0003446d) list_single_cale_mrui_row_pane_t3

0x84ff,	// (0x0003449c) list_single_cale_mrui_row_pane_t4_ParamLimits

0x84ff,	// (0x0003449c) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc8f,	// (0x0003bc2c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc8f,	// (0x0003bc2c) list_single_cale_mrui_row_pane_t

0x8530,	// (0x000344cd) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8530,	// (0x000344cd) list_single_cmail_header_editor_pane_bg_cp01

0x855c,	// (0x000344f9) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x855c,	// (0x000344f9) list_single_cmail_header_editor_pane_bg_cp02

0x857a,	// (0x00034517) main_radioblah_text_pane_t1_ParamLimits

0x857a,	// (0x00034517) main_radioblah_text_pane_t1

0x8594,	// (0x00034531) cam6_indi_pane_cp01

0x859c,	// (0x00034539) cam6_mode_pane_cp01

0x85a4,	// (0x00034541) cam6_pano_pane

0x85ad,	// (0x0003454a) cam6_zoom_pane_cp01

0x85b7,	// (0x00034554) cam6_pano_image_pane

0x85c0,	// (0x0003455d) cam6_pano_pane_g1

0x707c,	// (0x00033019) cam6_pano_pane_g2

0x85c9,	// (0x00034566) cam6_pano_pane_g3

0x85d2,	// (0x0003456f) cam6_pano_pane_g4

0xe80d,	// (0x0003a7aa) cam6_pano_pane_g5

0x85db,	// (0x00034578) cam6_pano_pane_g6

0x85e3,	// (0x00034580) cam6_pano_pane_g7

0x85eb,	// (0x00034588) cam6_pano_pane_g8

0x85f4,	// (0x00034591) cam6_pano_pane_g9

0x0008,

0xfc98,	// (0x0003bc35) cam6_pano_pane_g

0xb07c,	// (0x00037019) main_browser_tag_pane

0x80b9,	// (0x00034056) grid_navstr_albumart_pane

0x85ff,	// (0x0003459c) cell_navstr_albumart_pane_ParamLimits

0x85ff,	// (0x0003459c) cell_navstr_albumart_pane

0x861b,	// (0x000345b8) cell_navstr_albumart_pane_g1

0xdcf6,	// (0x00039c93) cell_navstr_albumart_pane_g2

0xdd06,	// (0x00039ca3) cell_navstr_albumart_pane_g3

0xdcfe,	// (0x00039c9b) cell_navstr_albumart_pane_g4

0x0003,

0xfcab,	// (0x0003bc48) cell_navstr_albumart_pane_g

0x8623,	// (0x000345c0) bt_list_pane_ParamLimits

0x8623,	// (0x000345c0) bt_list_pane

0x8639,	// (0x000345d6) bt_list_pane_t1

0x8648,	// (0x000345e5) bt_list_pane_t2

0x0001,

0xfcb4,	// (0x0003bc51) bt_list_pane_t

0xb07c,	// (0x00037019) main_cale_prevew_pane

0x8657,	// (0x000345f4) popup_cale_preview_window_ParamLimits

0x8657,	// (0x000345f4) popup_cale_preview_window

0xbfa0,	// (0x00037f3d) bg_popup_preview_window_pane_cp05_ParamLimits

0xbfa0,	// (0x00037f3d) bg_popup_preview_window_pane_cp05

0x8674,	// (0x00034611) list_cale_preview_pane_ParamLimits

0x8674,	// (0x00034611) list_cale_preview_pane

0x8680,	// (0x0003461d) list_double_cale_preview_pane_ParamLimits

0x8680,	// (0x0003461d) list_double_cale_preview_pane

0x8694,	// (0x00034631) list_single_cale_preview_pane_ParamLimits

0x8694,	// (0x00034631) list_single_cale_preview_pane

0x86ac,	// (0x00034649) list_single_cale_preview_pane_g1

0x86b4,	// (0x00034651) list_single_cale_preview_pane_t1_ParamLimits

0x86b4,	// (0x00034651) list_single_cale_preview_pane_t1

0x86c9,	// (0x00034666) list_double_cale_preview_pane_g1

0x86d1,	// (0x0003466e) list_double_cale_preview_pane_t1_ParamLimits

0x86d1,	// (0x0003466e) list_double_cale_preview_pane_t1

0x86e6,	// (0x00034683) list_double_cale_preview_pane_t2_ParamLimits

0x86e6,	// (0x00034683) list_double_cale_preview_pane_t2

0x0001,

0xfcb9,	// (0x0003bc56) list_double_cale_preview_pane_t_ParamLimits

0xfcb9,	// (0x0003bc56) list_double_cale_preview_pane_t

0xb07c,	// (0x00037019) main_ezdial_pane

0xbfa0,	// (0x00037f3d) main_sp_fs_email_pane_ParamLimits

0x78a3,	// (0x00033840) cmail_ddmenu_btn01_pane_ParamLimits

0x78a3,	// (0x00033840) cmail_ddmenu_btn01_pane

0x78b6,	// (0x00033853) cmail_ddmenu_btn02_pane_ParamLimits

0x78b6,	// (0x00033853) cmail_ddmenu_btn02_pane

0x7913,	// (0x000338b0) cmail_ddmenu_btn03_pane_ParamLimits

0x7913,	// (0x000338b0) cmail_ddmenu_btn03_pane

0x79c9,	// (0x00033966) main_sp_fs_ctrlbar_pane_ParamLimits

0x7a08,	// (0x000339a5) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7ecf,	// (0x00033e6c) list_cmail_body_pane_ParamLimits

0x7f41,	// (0x00033ede) bg_button_pane_cp12

0x7f6e,	// (0x00033f0b) list_single_cmail_header_detail_pane_g3_ParamLimits

0x7f6e,	// (0x00033f0b) list_single_cmail_header_detail_pane_g3

0x7fb7,	// (0x00033f54) list_single_cmail_header_detail_pane_t2_ParamLimits

0x7fb7,	// (0x00033f54) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc37,	// (0x0003bbd4) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc37,	// (0x0003bbd4) list_single_cmail_header_detail_pane_t

0x818c,	// (0x00034129) phacti_term_pane_t2_ParamLimits

0x818c,	// (0x00034129) phacti_term_pane_t2

0x0001,

0xfc46,	// (0x0003bbe3) phacti_term_pane_t_ParamLimits

0xfc46,	// (0x0003bbe3) phacti_term_pane_t

0x86fe,	// (0x0003469b) aid_size_list_single_double

0x870a,	// (0x000346a7) popup_ezdial_listscroll_window

0x8726,	// (0x000346c3) popup_number_entry_window_cp01

0xc258,	// (0x000381f5) bg_popup_call_pane_cp09

0x8733,	// (0x000346d0) ezdial_list_pane

0x873b,	// (0x000346d8) scroll_pane_cp23

0xcc60,	// (0x00038bfd) bg_button_pane_cp028_ParamLimits

0xcc60,	// (0x00038bfd) bg_button_pane_cp028

0x8743,	// (0x000346e0) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8743,	// (0x000346e0) cmail_ddmenu_btn01_pane_g1

0x8752,	// (0x000346ef) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8752,	// (0x000346ef) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcbe,	// (0x0003bc5b) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcbe,	// (0x0003bc5b) cmail_ddmenu_btn01_pane_g

0x8768,	// (0x00034705) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x8768,	// (0x00034705) cmail_ddmenu_btn01_pane_t1

0xcc60,	// (0x00038bfd) bg_button_pane_cp029_ParamLimits

0xcc60,	// (0x00038bfd) bg_button_pane_cp029

0x877e,	// (0x0003471b) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x877e,	// (0x0003471b) cmail_ddmenu_btn02_pane_g1

0x8799,	// (0x00034736) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8799,	// (0x00034736) cmail_ddmenu_btn02_pane_t1

0xbfa0,	// (0x00037f3d) bg_button_pane_cp031_ParamLimits

0xbfa0,	// (0x00037f3d) bg_button_pane_cp031

0x877e,	// (0x0003471b) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x877e,	// (0x0003471b) cmail_ddmenu_btn03_pane_g1

0x8799,	// (0x00034736) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8799,	// (0x00034736) cmail_ddmenu_btn03_pane_t1

0xc04f,	// (0x00037fec) cell_dialer2_keypad_pane_t1_ParamLimits

0xe7a2,	// (0x0003a73f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xe7a2,	// (0x0003a73f) cell_dialer2_keypad_pane_t1_copy1

0x6c80,	// (0x00032c1d) ncimui_group_button_pane

0xbfa0,	// (0x00037f3d) main_sp_fs_calendar_pane_ParamLimits

0x7ee6,	// (0x00033e83) list_single_cmail_header_caption_pane_ParamLimits

0x81f5,	// (0x00034192) aid_recal_txt_sm_pane

0xb07c,	// (0x00037019) mian_recal_day_pane

0x827a,	// (0x00034217) popup_sp_fs_cale_preview_window_ParamLimits

0x87c0,	// (0x0003475d) list_recal_day_pane

0x8803,	// (0x000347a0) list_single_recal_day_pane_ParamLimits

0x8803,	// (0x000347a0) list_single_recal_day_pane

0x8815,	// (0x000347b2) list_single_recal_day_pane_g1_ParamLimits

0x8815,	// (0x000347b2) list_single_recal_day_pane_g1

0x8821,	// (0x000347be) list_single_recal_day_pane_g2_ParamLimits

0x8821,	// (0x000347be) list_single_recal_day_pane_g2

0x882d,	// (0x000347ca) list_single_recal_day_pane_g3_ParamLimits

0x882d,	// (0x000347ca) list_single_recal_day_pane_g3

0x8839,	// (0x000347d6) list_single_recal_day_pane_g4_ParamLimits

0x8839,	// (0x000347d6) list_single_recal_day_pane_g4

0x8847,	// (0x000347e4) list_single_recal_day_pane_g5_ParamLimits

0x8847,	// (0x000347e4) list_single_recal_day_pane_g5

0x885d,	// (0x000347fa) list_single_recal_day_pane_g6_ParamLimits

0x885d,	// (0x000347fa) list_single_recal_day_pane_g6

0x0004,

0xfccd,	// (0x0003bc6a) list_single_recal_day_pane_g_ParamLimits

0xfccd,	// (0x0003bc6a) list_single_recal_day_pane_g

0x8871,	// (0x0003480e) list_single_recal_day_pane_t1

0x8883,	// (0x00034820) list_single_recal_day_pane_t2

0x0001,

0xfcd8,	// (0x0003bc75) list_single_recal_day_pane_t

0x8895,	// (0x00034832) ncimui_query_button_pane_ParamLimits

0x8895,	// (0x00034832) ncimui_query_button_pane

0x88a5,	// (0x00034842) ncimui_query_button_pane_t1_ParamLimits

0x88a5,	// (0x00034842) ncimui_query_button_pane_t1

0x88b8,	// (0x00034855) ncimui_query_button_pane_t2_ParamLimits

0x88b8,	// (0x00034855) ncimui_query_button_pane_t2

0x0001,

0xfcdd,	// (0x0003bc7a) ncimui_query_button_pane_t_ParamLimits

0xfcdd,	// (0x0003bc7a) ncimui_query_button_pane_t

0x88cb,	// (0x00034868) query_button_pane_ParamLimits

0x88cb,	// (0x00034868) query_button_pane

0xb07c,	// (0x00037019) bg_button_pane_cp0028

0x88de,	// (0x0003487b) query_button_pane_t1

0x05a7,	// (0x0002c544) main_tport_pane_ParamLimits

0x7d31,	// (0x00033cce) bg_popup_window_pane_cp01_ParamLimits

0x7d31,	// (0x00033cce) bg_popup_window_pane_cp01

0x7d4a,	// (0x00033ce7) heading_pane_cp08_ParamLimits

0x7d4a,	// (0x00033ce7) heading_pane_cp08

0x7d60,	// (0x00033cfd) heading_pane_cp07_ParamLimits

0x7d60,	// (0x00033cfd) heading_pane_cp07

0x7e49,	// (0x00033de6) cell_tport_appsw_pane_g2

0x0002,

0xfc24,	// (0x0003bbc1) cell_tport_appsw_pane_g

0x35cd,	// (0x0002f56a) input_candi_list_open_g1

0xc65e,	// (0x000385fb) list_cale_time_pane_g6_ParamLimits

0xc65e,	// (0x000385fb) list_cale_time_pane_g6

0x4384,	// (0x00030321) aid_size_touch_calib_1_ParamLimits

0x4384,	// (0x00030321) aid_size_touch_calib_1

0x4396,	// (0x00030333) aid_size_touch_calib_2_ParamLimits

0x4396,	// (0x00030333) aid_size_touch_calib_2

0x43ae,	// (0x0003034b) aid_size_touch_calib_3_ParamLimits

0x43ae,	// (0x0003034b) aid_size_touch_calib_3

0x43cc,	// (0x00030369) aid_size_touch_calib_4_ParamLimits

0x43cc,	// (0x00030369) aid_size_touch_calib_4

0x43e4,	// (0x00030381) main_touch_calib_button_group_pane_ParamLimits

0x43e4,	// (0x00030381) main_touch_calib_button_group_pane

0x43fc,	// (0x00030399) main_touch_calib_pane_g1_ParamLimits

0x440e,	// (0x000303ab) main_touch_calib_pane_g2_ParamLimits

0x4420,	// (0x000303bd) main_touch_calib_pane_g3_ParamLimits

0x4432,	// (0x000303cf) main_touch_calib_pane_g4_ParamLimits

0xf67f,	// (0x0003b61c) main_touch_calib_pane_g_ParamLimits

0x4444,	// (0x000303e1) main_touch_calib_pane_t1_ParamLimits

0x445e,	// (0x000303fb) main_touch_calib_pane_t2_ParamLimits

0x4478,	// (0x00030415) main_touch_calib_pane_t3_ParamLimits

0x448c,	// (0x00030429) main_touch_calib_pane_t4_ParamLimits

0x44a2,	// (0x0003043f) main_touch_calib_pane_t5_ParamLimits

0xf688,	// (0x0003b625) main_touch_calib_pane_t_ParamLimits

0xe589,	// (0x0003a526) list_single_fp_cale_pane_g3_ParamLimits

0xe589,	// (0x0003a526) list_single_fp_cale_pane_g3

0xb0f1,	// (0x0003708e) bg_button_pane_cp012_ParamLimits

0xb0f1,	// (0x0003708e) bg_vkb2_func_pane_cp03_ParamLimits

0x13a5,	// (0x0002d342) cell_vitu2_function_top_pane_g1_ParamLimits

0xb0f1,	// (0x0003708e) bg_vkb2_func_pane_cp04_ParamLimits

0x6c0b,	// (0x00032ba8) main_ncimui_button_group_pane_ParamLimits

0x6c0b,	// (0x00032ba8) main_ncimui_button_group_pane

0x6c6b,	// (0x00032c08) main_ncimui_pane_t3_ParamLimits

0x6c6b,	// (0x00032c08) main_ncimui_pane_t3

0x8126,	// (0x000340c3) phacti_button_group_pane

0x86fe,	// (0x0003469b) aid_size_list_single_double_ParamLimits

0x870a,	// (0x000346a7) popup_ezdial_listscroll_window_ParamLimits

0x8726,	// (0x000346c3) popup_number_entry_window_cp01_ParamLimits

0x88ec,	// (0x00034889) phacti_button_pane_ParamLimits

0x88ec,	// (0x00034889) phacti_button_pane

0xb07c,	// (0x00037019) bg_button_pane_cp14

0x88fd,	// (0x0003489a) phacti_button_pane_t1

0x890b,	// (0x000348a8) main_touch_calib_button_pane_ParamLimits

0x890b,	// (0x000348a8) main_touch_calib_button_pane

0xc0a3,	// (0x00038040) bg_button_pane_cp18_ParamLimits

0xc0a3,	// (0x00038040) bg_button_pane_cp18

0x8920,	// (0x000348bd) main_touch_calib_button_pane_t1_ParamLimits

0x8920,	// (0x000348bd) main_touch_calib_button_pane_t1

0x8936,	// (0x000348d3) main_touch_calib_button_pane_t2_ParamLimits

0x8936,	// (0x000348d3) main_touch_calib_button_pane_t2

0x0001,

0xfce2,	// (0x0003bc7f) main_touch_calib_button_pane_t_ParamLimits

0xfce2,	// (0x0003bc7f) main_touch_calib_button_pane_t

0xb07c,	// (0x00037019) cell_ncimui_button_pane

0xb07c,	// (0x00037019) bg_button_pane_cp032

0x8954,	// (0x000348f1) cell_ncimui_button_pane_t1

0xbc17,	// (0x00037bb4) image3_infobar_pane_ParamLimits

0xbc17,	// (0x00037bb4) image3_infobar_pane

0x7309,	// (0x000332a6) fs_bigclock_status_pane_ParamLimits

0x7309,	// (0x000332a6) fs_bigclock_status_pane

0x7316,	// (0x000332b3) main_fs_bigclock_clock_pane_ParamLimits

0x7316,	// (0x000332b3) main_fs_bigclock_clock_pane

0x7348,	// (0x000332e5) main_fs_bigclock_indi_pane_ParamLimits

0x7348,	// (0x000332e5) main_fs_bigclock_indi_pane

0x7388,	// (0x00033325) main_fs_bigclock_swipe_pane_ParamLimits

0x7388,	// (0x00033325) main_fs_bigclock_swipe_pane

0xb07c,	// (0x00037019) main_fs_clock_dumped_data

0x73d4,	// (0x00033371) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x73d4,	// (0x00033371) list_single_fs_bigclock_indicator_pane_g1

0x73ed,	// (0x0003338a) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x73ed,	// (0x0003338a) list_single_fs_bigclock_indicator_pane_g2

0x7407,	// (0x000333a4) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x7407,	// (0x000333a4) list_single_fs_bigclock_indicator_pane_g3

0x7421,	// (0x000333be) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x7421,	// (0x000333be) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb83,	// (0x0003bb20) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb83,	// (0x0003bb20) list_single_fs_bigclock_indicator_pane_g

0x7450,	// (0x000333ed) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x7450,	// (0x000333ed) list_single_fs_bigclock_indicator_pane_t1

0x7478,	// (0x00033415) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x7478,	// (0x00033415) list_single_fs_bigclock_indicator_pane_t2

0x74a0,	// (0x0003343d) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x74a0,	// (0x0003343d) list_single_fs_bigclock_indicator_pane_t3

0x74c8,	// (0x00033465) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x74c8,	// (0x00033465) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb8e,	// (0x0003bb2b) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb8e,	// (0x0003bb2b) list_single_fs_bigclock_indicator_pane_t

0x8962,	// (0x000348ff) image3_infobar_fav_pane_ParamLimits

0x8962,	// (0x000348ff) image3_infobar_fav_pane

0x8972,	// (0x0003490f) image3_infobar_loc_pane_ParamLimits

0x8972,	// (0x0003490f) image3_infobar_loc_pane

0x8988,	// (0x00034925) image3_infobar_time_pane_ParamLimits

0x8988,	// (0x00034925) image3_infobar_time_pane

0xc045,	// (0x00037fe2) image3_infobar_time_pane_g1

0x8998,	// (0x00034935) image3_infobar_time_pane_t1

0xc045,	// (0x00037fe2) image3_infobar_loc_pane_g1

0x89a6,	// (0x00034943) image3_infobar_loc_pane_g2

0x0001,

0xfce7,	// (0x0003bc84) image3_infobar_loc_pane_g

0x89ae,	// (0x0003494b) image3_infobar_loc_pane_t1

0xc045,	// (0x00037fe2) image3_infobar_fav_pane_g1

0x89bc,	// (0x00034959) image3_infobar_fav_pane_g2

0x0001,

0xfcec,	// (0x0003bc89) image3_infobar_fav_pane_g

0x89c4,	// (0x00034961) fs_bigclock_status_battery_pane

0x89cd,	// (0x0003496a) fs_bigclock_status_signal_pane

0x89d6,	// (0x00034973) fs_bigclock_status_title_pane

0x89df,	// (0x0003497c) fs_bigclock_status_signal_pane_g1

0x89e8,	// (0x00034985) fs_bigclock_status_signal_pane_g2

0x0001,

0xfcf1,	// (0x0003bc8e) fs_bigclock_status_signal_pane_g

0x89f0,	// (0x0003498d) fs_bigclock_status_battery_pane_g1

0x89f9,	// (0x00034996) fs_bigclock_status_battery_pane_g2

0x0001,

0xfcf6,	// (0x0003bc93) fs_bigclock_status_battery_pane_g

0x8a01,	// (0x0003499e) fs_bigclock_status_title_pane_t1

0x8a0f,	// (0x000349ac) main_fs_bigclock_clock_pane_g1

0x8a0f,	// (0x000349ac) main_fs_bigclock_clock_pane_g2

0x8a22,	// (0x000349bf) main_fs_bigclock_clock_pane_g3

0x8a22,	// (0x000349bf) main_fs_bigclock_clock_pane_g4

0x0003,

0xfcfb,	// (0x0003bc98) main_fs_bigclock_clock_pane_g

0x8a39,	// (0x000349d6) main_fs_bigclock_clock_pane_t1

0x8a4f,	// (0x000349ec) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd04,	// (0x0003bca1) main_fs_bigclock_clock_pane_t

0x8a6d,	// (0x00034a0a) list_single_fs_bigclock_indicator_pane_ParamLimits

0x8a6d,	// (0x00034a0a) list_single_fs_bigclock_indicator_pane

0x8a7e,	// (0x00034a1b) list_single_fs_bigclock_pane_ParamLimits

0x8a7e,	// (0x00034a1b) list_single_fs_bigclock_pane

0x8ae8,	// (0x00034a85) main_fs_bigclock_indicator_pane_t1

0x8af7,	// (0x00034a94) list_single_fs_bigclock_pane_g1

0x8aff,	// (0x00034a9c) list_single_fs_bigclock_pane_t1

0xc045,	// (0x00037fe2) main_fs_bigclock_swipe_pane_g1

0x8b42,	// (0x00034adf) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd15,	// (0x0003bcb2) main_fs_bigclock_swipe_pane_g

0x8b4a,	// (0x00034ae7) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x8b4a,	// (0x00034ae7) main_fs_bigclock_swipe_pane_t1

0x2f88,	// (0x0002ef25) call_type_pane_ParamLimits

0xb07c,	// (0x00037019) main_btmg_pane

0x843f,	// (0x000343dc) list_single_cale_mrui_row_pane_g2_ParamLimits

0x843f,	// (0x000343dc) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc88,	// (0x0003bc25) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc88,	// (0x0003bc25) list_single_cale_mrui_row_pane_g

0x87e9,	// (0x00034786) list_recal_vselct_arw_lo_pane

0x87f1,	// (0x0003478e) list_recal_vselct_arw_up_pane

0x87f9,	// (0x00034796) list_recal_vselct_pane

0x8b67,	// (0x00034b04) btmg_button_pane

0x8b71,	// (0x00034b0e) main_btmg_pane_g1

0xb07c,	// (0x00037019) bg_button_pane_cp044

0x8b7b,	// (0x00034b18) btmg_button_pane_t1

0xde48,	// (0x00039de5) aid_listscroll_gen

0xbfa0,	// (0x00037f3d) main_cntbar_detail_pane

0x7eb0,	// (0x00033e4d) list_cmail_folder_pane

0x2f7c,	// (0x0002ef19) sp_fs_scroll_pane_cp03_ParamLimits

0x8b89,	// (0x00034b26) list_single_fs_dyc_pane_cp01_ParamLimits

0x8b89,	// (0x00034b26) list_single_fs_dyc_pane_cp01

0x8ba3,	// (0x00034b40) aid_size_cmail_indent

0x8bac,	// (0x00034b49) list_single_dyc_row_pane_cp01

0x8be9,	// (0x00034b86) cntbar_detail_list_pane_ParamLimits

0x8be9,	// (0x00034b86) cntbar_detail_list_pane

0x8c3b,	// (0x00034bd8) main_cntbar_detail_cont_pane_ParamLimits

0x8c3b,	// (0x00034bd8) main_cntbar_detail_cont_pane

0x2f7c,	// (0x0002ef19) scroll_pane_cp032_ParamLimits

0x2f7c,	// (0x0002ef19) scroll_pane_cp032

0x8c4f,	// (0x00034bec) cntbar_detail_list_event_pane_ParamLimits

0x8c4f,	// (0x00034bec) cntbar_detail_list_event_pane

0x8bfb,	// (0x00034b98) cntbar_detail_list_shct_pane

0xc4d2,	// (0x0003846f) aid_list_gen

0x8c5f,	// (0x00034bfc) aid_scroll

0x8c68,	// (0x00034c05) aid_size_touch_scroll_bar

0x75c0,	// (0x0003355d) aid_list_double

0x8c71,	// (0x00034c0e) aid_list_single

0x8c71,	// (0x00034c0e) aid_list_single_lg

0x8c7a,	// (0x00034c17) aid_list_z_g_a_sm

0x8c82,	// (0x00034c1f) aid_list_z_g_d

0x8c8a,	// (0x00034c27) aid_txt_z_prm

0x8c98,	// (0x00034c35) aid_txt_z_prm_cp01

0x8ca6,	// (0x00034c43) aid_txt_z_sec

0x8cb4,	// (0x00034c51) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8cb4,	// (0x00034c51) main_cntbar_detail_cont_pane_g1

0x8cc8,	// (0x00034c65) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8cc8,	// (0x00034c65) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd1a,	// (0x0003bcb7) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd1a,	// (0x0003bcb7) main_cntbar_detail_cont_pane_g

0x8cd8,	// (0x00034c75) main_cntbar_detail_cont_pane_t1

0x8ce6,	// (0x00034c83) main_cntbar_detail_cont_pane_t2

0x8cf4,	// (0x00034c91) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd1f,	// (0x0003bcbc) main_cntbar_detail_cont_pane_t

0x8d02,	// (0x00034c9f) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8d02,	// (0x00034c9f) cell_cntbar_detail_list_shct_pane

0x8d14,	// (0x00034cb1) cntbar_detail_list_shct_pane_g1

0x8d1d,	// (0x00034cba) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd26,	// (0x0003bcc3) cntbar_detail_list_shct_pane_g

0x8d26,	// (0x00034cc3) cntbar_detail_list_event_pane_g1_ParamLimits

0x8d26,	// (0x00034cc3) cntbar_detail_list_event_pane_g1

0x8d32,	// (0x00034ccf) cntbar_detail_list_event_pane_g2_ParamLimits

0x8d32,	// (0x00034ccf) cntbar_detail_list_event_pane_g2

0x0005,

0xfd2b,	// (0x0003bcc8) cntbar_detail_list_event_pane_g_ParamLimits

0xfd2b,	// (0x0003bcc8) cntbar_detail_list_event_pane_g

0x8da0,	// (0x00034d3d) cntbar_detail_list_event_pane_t1_ParamLimits

0x8da0,	// (0x00034d3d) cntbar_detail_list_event_pane_t1

0x8db5,	// (0x00034d52) cntbar_detail_list_event_pane_t2_ParamLimits

0x8db5,	// (0x00034d52) cntbar_detail_list_event_pane_t2

0x0002,

0xfd38,	// (0x0003bcd5) cntbar_detail_list_event_pane_t_ParamLimits

0xfd38,	// (0x0003bcd5) cntbar_detail_list_event_pane_t

0xc045,	// (0x00037fe2) cell_cntbar_detail_list_shct_pane_g1

0x3322,	// (0x0002f2bf) navi_pane_mv_g3

0xbfa0,	// (0x00037f3d) main_cntbar_detail_pane_ParamLimits

0xb07c,	// (0x00037019) main_notif_wgt_pane

0xb995,	// (0x00037932) aid_tch_main_mp4_pane_g4

0xbc0d,	// (0x00037baa) popup_slider_window_cp02

0x87df,	// (0x0003477c) list_recal_day_event_pane

0x8bb5,	// (0x00034b52) cntbar_detail_btn_pane_ParamLimits

0x8bb5,	// (0x00034b52) cntbar_detail_btn_pane

0x8bce,	// (0x00034b6b) cntbar_detail_btn_pane_cp01_ParamLimits

0x8bce,	// (0x00034b6b) cntbar_detail_btn_pane_cp01

0x8bfb,	// (0x00034b98) cntbar_detail_list_shct_pane_ParamLimits

0x8c0b,	// (0x00034ba8) cntbar_detail_pane_g1_ParamLimits

0x8c0b,	// (0x00034ba8) cntbar_detail_pane_g1

0x8c1f,	// (0x00034bbc) cntbar_detail_pane_t1_ParamLimits

0x8c1f,	// (0x00034bbc) cntbar_detail_pane_t1

0x8d3e,	// (0x00034cdb) cntbar_detail_list_event_pane_g3_ParamLimits

0x8d3e,	// (0x00034cdb) cntbar_detail_list_event_pane_g3

0x8d56,	// (0x00034cf3) cntbar_detail_list_event_pane_g4_ParamLimits

0x8d56,	// (0x00034cf3) cntbar_detail_list_event_pane_g4

0x8d6e,	// (0x00034d0b) cntbar_detail_list_event_pane_g5_ParamLimits

0x8d6e,	// (0x00034d0b) cntbar_detail_list_event_pane_g5

0x8d86,	// (0x00034d23) cntbar_detail_list_event_pane_g6_ParamLimits

0x8d86,	// (0x00034d23) cntbar_detail_list_event_pane_g6

0x8dca,	// (0x00034d67) cntbar_detail_list_event_pane_t3_ParamLimits

0x8dca,	// (0x00034d67) cntbar_detail_list_event_pane_t3

0x8ddc,	// (0x00034d79) popup_notif_wgt_window_ParamLimits

0x8ddc,	// (0x00034d79) popup_notif_wgt_window

0x8df5,	// (0x00034d92) popup_submenu_window_cp01_ParamLimits

0x8df5,	// (0x00034d92) popup_submenu_window_cp01

0xc258,	// (0x000381f5) bg_popup_window_pane_cp10

0x8e09,	// (0x00034da6) listscroll_notif_wgt_pane

0x8e1b,	// (0x00034db8) list_notif_wgt_window

0x8e24,	// (0x00034dc1) scroll_pane_cp033

0x8e2d,	// (0x00034dca) list_notif_wgt_row_pane_ParamLimits

0x8e2d,	// (0x00034dca) list_notif_wgt_row_pane

0x8e3d,	// (0x00034dda) aid_size_list_notif_wgt_del

0x8e4a,	// (0x00034de7) list_notif_wgt_row_pane_g1

0x8e56,	// (0x00034df3) list_notif_wgt_row_pane_g2

0x8e65,	// (0x00034e02) list_notif_wgt_row_pane_g3

0x0002,

0xfd3f,	// (0x0003bcdc) list_notif_wgt_row_pane_g

0x8e72,	// (0x00034e0f) list_notif_wgt_row_pane_t1

0x8e88,	// (0x00034e25) list_notif_wgt_row_pane_t2

0x8e9a,	// (0x00034e37) list_notif_wgt_row_pane_t3

0x0002,

0xfd46,	// (0x0003bce3) list_notif_wgt_row_pane_t

0xed31,	// (0x0003acce) list_recal_day_event_pane_g1

0x8eac,	// (0x00034e49) list_recal_day_event_pane_t1

0xb07c,	// (0x00037019) bg_button_pane_cp045

0x8ebb,	// (0x00034e58) cntbar_detail_btn_pane_t1

0xcc60,	// (0x00038bfd) main_callh_pane_ParamLimits

0xcc60,	// (0x00038bfd) main_callh_pane

0xb07c,	// (0x00037019) main_coverflow0_pane

0xb07c,	// (0x00037019) main_wgtman_pane

0x73a9,	// (0x00033346) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x73a9,	// (0x00033346) main_fs_bigclock_unlock_btn_pane

0x7e41,	// (0x00033dde) bg_button_pane_cp16

0x7e51,	// (0x00033dee) cell_tport_appsw_pane_g3

0x8ec9,	// (0x00034e66) cf0_flow_pane_ParamLimits

0x8ec9,	// (0x00034e66) cf0_flow_pane

0x8ede,	// (0x00034e7b) listscroll_cf0_pane

0x8ee9,	// (0x00034e86) main_cf0_pane_g1

0x8efb,	// (0x00034e98) main_cf0_pane_t1_ParamLimits

0x8efb,	// (0x00034e98) main_cf0_pane_t1

0x8f12,	// (0x00034eaf) main_cf0_pane_t2_ParamLimits

0x8f12,	// (0x00034eaf) main_cf0_pane_t2

0x0001,

0xfd52,	// (0x0003bcef) main_cf0_pane_t_ParamLimits

0xfd52,	// (0x0003bcef) main_cf0_pane_t

0x8f29,	// (0x00034ec6) scroll_pane_cp11

0x8f34,	// (0x00034ed1) cf0_flow_pane_g1

0x8f40,	// (0x00034edd) cf0_flow_pane_g2

0x0001,

0xfd57,	// (0x0003bcf4) cf0_flow_pane_g

0x8f4c,	// (0x00034ee9) cf0_flow_pane_t1

0xb07c,	// (0x00037019) main_call6_pane

0xb07c,	// (0x00037019) main_calllock_pane

0x14d8,	// (0x0002d475) call6_btn_grp_pane_ParamLimits

0x14d8,	// (0x0002d475) call6_btn_grp_pane

0x14f2,	// (0x0002d48f) call6_pane_g1_ParamLimits

0x14f2,	// (0x0002d48f) call6_pane_g1

0x150b,	// (0x0002d4a8) popup_call6_1st_window_ParamLimits

0x150b,	// (0x0002d4a8) popup_call6_1st_window

0x151f,	// (0x0002d4bc) popup_call6_2nd_window_ParamLimits

0x151f,	// (0x0002d4bc) popup_call6_2nd_window

0x1533,	// (0x0002d4d0) cell_call6_btn_pane_ParamLimits

0x1533,	// (0x0002d4d0) cell_call6_btn_pane

0xc258,	// (0x000381f5) bg_popup_call2_in_pane_cp03

0x8f5e,	// (0x00034efb) popup_call6_1st_window_g1

0x8f66,	// (0x00034f03) popup_call6_1st_window_g2

0x8f6e,	// (0x00034f0b) popup_call6_1st_window_g3

0x0002,

0xfd5c,	// (0x0003bcf9) popup_call6_1st_window_g

0x8f76,	// (0x00034f13) popup_call6_1st_window_t1

0x8f85,	// (0x00034f22) popup_call6_1st_window_t2

0x8f95,	// (0x00034f32) popup_call6_1st_window_t3

0x0002,

0xfd63,	// (0x0003bd00) popup_call6_1st_window_t

0xc258,	// (0x000381f5) bg_popup_call2_in_pane_cp04

0x8fa5,	// (0x00034f42) popup_call6_2nd_window_g1

0x8fad,	// (0x00034f4a) popup_call6_2nd_window_g2

0x8fb5,	// (0x00034f52) popup_call6_2nd_window_g3

0x0002,

0xfd6a,	// (0x0003bd07) popup_call6_2nd_window_g

0x8fbd,	// (0x00034f5a) popup_call6_2nd_window_t1

0xb0ff,	// (0x0003709c) bg_button_pane_cp15

0xbe4d,	// (0x00037dea) cell_call6_btn_pane_g1

0xbe56,	// (0x00037df3) cell_call6_btn_pane_t1

0x8fcc,	// (0x00034f69) listscroll_wgtman_pane_ParamLimits

0x8fcc,	// (0x00034f69) listscroll_wgtman_pane

0x8fed,	// (0x00034f8a) wgtman_btn_pane_ParamLimits

0x8fed,	// (0x00034f8a) wgtman_btn_pane

0xca4d,	// (0x000389ea) aid_scroll_copy1

0x9030,	// (0x00034fcd) list_wgtman_pane

0x903a,	// (0x00034fd7) wgtman_btn_pane_g1_ParamLimits

0x903a,	// (0x00034fd7) wgtman_btn_pane_g1

0x9066,	// (0x00035003) wgtman_btn_pane_t1_ParamLimits

0x9066,	// (0x00035003) wgtman_btn_pane_t1

0x90a3,	// (0x00035040) wgtman_btn_pane_t2_ParamLimits

0x90a3,	// (0x00035040) wgtman_btn_pane_t2

0x0001,

0xfd71,	// (0x0003bd0e) wgtman_btn_pane_t_ParamLimits

0xfd71,	// (0x0003bd0e) wgtman_btn_pane_t

0x90ba,	// (0x00035057) listrow_wgtman_pane_ParamLimits

0x90ba,	// (0x00035057) listrow_wgtman_pane

0x90ce,	// (0x0003506b) listrow_wgtman_pane_g1

0x90db,	// (0x00035078) listrow_wgtman_pane_g2

0x0001,

0xfd76,	// (0x0003bd13) listrow_wgtman_pane_g

0x90f9,	// (0x00035096) listrow_wgtman_pane_t1

0x9111,	// (0x000350ae) listrow_wgtman_pane_t2

0x0001,

0xfd7b,	// (0x0003bd18) listrow_wgtman_pane_t

0x9137,	// (0x000350d4) wait_bar_pane_cp09

0x9149,	// (0x000350e6) main_calllock_btn_pane

0x9153,	// (0x000350f0) main_calllock_pane_g1

0xb07c,	// (0x00037019) bg_button_pane_cp17

0x915f,	// (0x000350fc) main_calllock_btn_pane_g1

0x9168,	// (0x00035105) main_calllock_btn_pane_t1

0xb07c,	// (0x00037019) main_dialer3_pane

0xb07c,	// (0x00037019) main_fmrd2_pane

0xc045,	// (0x00037fe2) main_fs_bigclock_unlock_btn_pane_g1

0x917f,	// (0x0003511c) main_fs_bigclock_unlock_btn_pane_t1

0x918d,	// (0x0003512a) area_fmrd2_info_pane_ParamLimits

0x918d,	// (0x0003512a) area_fmrd2_info_pane

0x919e,	// (0x0003513b) area_fmrd2_visual_pane_ParamLimits

0x919e,	// (0x0003513b) area_fmrd2_visual_pane

0x91ac,	// (0x00035149) fmrd2_indi_pane_ParamLimits

0x91ac,	// (0x00035149) fmrd2_indi_pane

0x91b9,	// (0x00035156) area_fmrd2_visual_pane_g1

0x91c1,	// (0x0003515e) area_fmrd2_visual_pane_t1

0x91d1,	// (0x0003516e) area_fmrd2_visual_pane_t2

0x91e1,	// (0x0003517e) area_fmrd2_visual_pane_t3

0x0002,

0xfd85,	// (0x0003bd22) area_fmrd2_visual_pane_t

0x91f1,	// (0x0003518e) area_fmrd2_info_pane_g1

0x91f9,	// (0x00035196) area_fmrd2_info_pane_t1

0x9209,	// (0x000351a6) area_fmrd2_info_pane_t2

0x9219,	// (0x000351b6) area_fmrd2_info_pane_t3

0x9229,	// (0x000351c6) area_fmrd2_info_pane_t4

0x0003,

0xfd8c,	// (0x0003bd29) area_fmrd2_info_pane_t

0x9239,	// (0x000351d6) fmrd2_indi_pane_t1

0x9249,	// (0x000351e6) fmrd2_indi_pane_t2

0x9259,	// (0x000351f6) fmrd2_indi_pane_t3

0x0002,

0xfd95,	// (0x0003bd32) fmrd2_indi_pane_t

0x7432,	// (0x000333cf) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x7432,	// (0x000333cf) list_single_fs_bigclock_indicator_pane_g5

0x74e7,	// (0x00033484) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x74e7,	// (0x00033484) list_single_fs_bigclock_indicator_pane_t5

0x81d7,	// (0x00034174) aid_cell_bcale_month_pane_ParamLimits

0x81d7,	// (0x00034174) aid_cell_bcale_month_pane

0x81fe,	// (0x0003419b) bcale_month_pane_ParamLimits

0x81fe,	// (0x0003419b) bcale_month_pane

0x8222,	// (0x000341bf) bcale_preview_pane_ParamLimits

0x8222,	// (0x000341bf) bcale_preview_pane

0x8aff,	// (0x00034a9c) list_single_fs_bigclock_pane_t1_ParamLimits

0x8b1e,	// (0x00034abb) list_single_fs_bigclock_pane_t2_ParamLimits

0x8b1e,	// (0x00034abb) list_single_fs_bigclock_pane_t2

0x0001,

0xfd10,	// (0x0003bcad) list_single_fs_bigclock_pane_t_ParamLimits

0xfd10,	// (0x0003bcad) list_single_fs_bigclock_pane_t

0x9177,	// (0x00035114) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd80,	// (0x0003bd1d) main_fs_bigclock_unlock_btn_pane_g

0x9269,	// (0x00035206) aid_dia3_key_size_ParamLimits

0x9269,	// (0x00035206) aid_dia3_key_size

0x927d,	// (0x0003521a) aid_dia3_listrow_size_ParamLimits

0x927d,	// (0x0003521a) aid_dia3_listrow_size

0x9297,	// (0x00035234) dia3_keypad_fun_pane_ParamLimits

0x9297,	// (0x00035234) dia3_keypad_fun_pane

0x92b1,	// (0x0003524e) dia3_keypad_num_pane_ParamLimits

0x92b1,	// (0x0003524e) dia3_keypad_num_pane

0x92cb,	// (0x00035268) dia3_listscroll_pane_ParamLimits

0x92cb,	// (0x00035268) dia3_listscroll_pane

0x92e1,	// (0x0003527e) dia3_numentry_pane_ParamLimits

0x92e1,	// (0x0003527e) dia3_numentry_pane

0x92fb,	// (0x00035298) dia3_list_pane

0x9306,	// (0x000352a3) scroll_pane_cp12

0xb07c,	// (0x00037019) bg_dia3_numentry_pane

0x9311,	// (0x000352ae) dia3_numentry_pane_t1

0x9320,	// (0x000352bd) cell_dia3_key_num_pane

0x9328,	// (0x000352c5) cell_dia3_key0_fun_pane_ParamLimits

0x9328,	// (0x000352c5) cell_dia3_key0_fun_pane

0x933c,	// (0x000352d9) cell_dia3_key1_fun_pane_ParamLimits

0x933c,	// (0x000352d9) cell_dia3_key1_fun_pane

0x9351,	// (0x000352ee) dia3_listrow_pane

0x6e91,	// (0x00032e2e) bg_dia3_numentry_pane_g1

0xb07c,	// (0x00037019) bg_button_pane_cp21

0x9363,	// (0x00035300) cell_dia3_key_num_pane_t1

0x9371,	// (0x0003530e) cell_dia3_key_num_pane_t2

0x9371,	// (0x0003530e) cell_dia3_key_num_pane_t3

0x9371,	// (0x0003530e) cell_dia3_key_num_pane_t4

0x0003,

0xfd9c,	// (0x0003bd39) cell_dia3_key_num_pane_t

0xb07c,	// (0x00037019) bg_button_pane_cp19

0x9380,	// (0x0003531d) cell_dia3_key0_fun_pane_g1

0xb07c,	// (0x00037019) bg_button_pane_cp20

0x9388,	// (0x00035325) cell_dia3_key1_fun_pane_g1

0x9390,	// (0x0003532d) area_left_week_number_pane

0x939e,	// (0x0003533b) area_top_day_name_pane

0x93b1,	// (0x0003534e) frame_month_view_pane

0x93c6,	// (0x00035363) grid_month_view_pane

0x93d4,	// (0x00035371) cell_top_day_name_pane_ParamLimits

0x93d4,	// (0x00035371) cell_top_day_name_pane

0x9403,	// (0x000353a0) cell_area_left_week_number_pane_ParamLimits

0x9403,	// (0x000353a0) cell_area_left_week_number_pane

0x9419,	// (0x000353b6) cell_month_view_pane_ParamLimits

0x9419,	// (0x000353b6) cell_month_view_pane

0x944a,	// (0x000353e7) frm_month_g1

0x9457,	// (0x000353f4) frm_month_g2

0x946a,	// (0x00035407) frm_month_g3

0x947d,	// (0x0003541a) frm_month_g4

0x9490,	// (0x0003542d) frm_month_g5

0x94a3,	// (0x00035440) frm_month_g6

0x94b8,	// (0x00035455) frm_month_g7

0x94cd,	// (0x0003546a) frm_month_g8

0x94da,	// (0x00035477) frm_month_g9

0x94ea,	// (0x00035487) frm_month_g10

0x94fa,	// (0x00035497) frm_month_g11

0x950a,	// (0x000354a7) frm_month_g12

0x951c,	// (0x000354b9) frm_month_g13

0x9530,	// (0x000354cd) frm_month_g14

0x9544,	// (0x000354e1) frm_month_g15

0x9558,	// (0x000354f5) frm_month_g16

0x000f,

0xfda5,	// (0x0003bd42) frm_month_g

0x956c,	// (0x00035509) cell_top_day_name_pane_t1

0x957f,	// (0x0003551c) cell_area_left_week_number_pane_g1

0x958b,	// (0x00035528) cell_area_left_week_number_pane_t1

0xc007,	// (0x00037fa4) cell_month_view_pane_g1

0x959e,	// (0x0003553b) cell_month_view_pane_t1

0xb07c,	// (0x00037019) main_fps_pane

0x78d9,	// (0x00033876) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x78d9,	// (0x00033876) cmail_ddmenu_btn02_pane_cp1

0x78f5,	// (0x00033892) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x78f5,	// (0x00033892) cmail_ddmenu_btn02_pane_cp2

0x878d,	// (0x0003472a) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x878d,	// (0x0003472a) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcc3,	// (0x0003bc60) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcc3,	// (0x0003bc60) cmail_ddmenu_btn02_pane_g

0x87ae,	// (0x0003474b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x87ae,	// (0x0003474b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcc8,	// (0x0003bc65) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcc8,	// (0x0003bc65) cmail_ddmenu_btn02_pane_t

0x95b1,	// (0x0003554e) fps_text_pane_ParamLimits

0x95b1,	// (0x0003554e) fps_text_pane

0x95c8,	// (0x00035565) main_fps_pane_g1_ParamLimits

0x95c8,	// (0x00035565) main_fps_pane_g1

0x95e0,	// (0x0003557d) wait_bar_pane_cp010_ParamLimits

0x95e0,	// (0x0003557d) wait_bar_pane_cp010

0x95f3,	// (0x00035590) fps_text_pane_t1_ParamLimits

0x95f3,	// (0x00035590) fps_text_pane_t1

0x5252,	// (0x000311ef) cam4_image_uncrop_pane_g1

0x525b,	// (0x000311f8) cam4_image_uncrop_pane_g2

0x5266,	// (0x00031203) cam4_image_uncrop_pane_g3

0x526f,	// (0x0003120c) cam4_image_uncrop_pane_g4

0x0003,

0xf816,	// (0x0003b7b3) cam4_image_uncrop_pane_g

0x9351,	// (0x000352ee) dia3_listrow_pane_ParamLimits

0xb07c,	// (0x00037019) main_phob2_pane

0x7dd9,	// (0x00033d76) cell_tport_appsw_pane_cp02_ParamLimits

0x7dd9,	// (0x00033d76) cell_tport_appsw_pane_cp02

0x7ded,	// (0x00033d8a) cell_tport_appsw_pane_cp03_ParamLimits

0x7ded,	// (0x00033d8a) cell_tport_appsw_pane_cp03

0xb07c,	// (0x00037019) phob2_contact_card_pane

0xb07c,	// (0x00037019) phob2_listscroll_pane

0x960b,	// (0x000355a8) phob2_list_pane

0x9613,	// (0x000355b0) scroll_pane_cp034

0x961b,	// (0x000355b8) phob2_cc_data_pane_ParamLimits

0x961b,	// (0x000355b8) phob2_cc_data_pane

0x9634,	// (0x000355d1) phob2_cc_listscroll_pane_ParamLimits

0x9634,	// (0x000355d1) phob2_cc_listscroll_pane

0x9655,	// (0x000355f2) list_double_large_graphic_phob2_pane_ParamLimits

0x9655,	// (0x000355f2) list_double_large_graphic_phob2_pane

0x9669,	// (0x00035606) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9669,	// (0x00035606) list_double_large_graphic_phob2_pane_g1

0x9676,	// (0x00035613) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9676,	// (0x00035613) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdc6,	// (0x0003bd63) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdc6,	// (0x0003bd63) list_double_large_graphic_phob2_pane_g

0x969c,	// (0x00035639) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x969c,	// (0x00035639) list_double_large_graphic_phob2_pane_t1

0x96b1,	// (0x0003564e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x96b1,	// (0x0003564e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdcf,	// (0x0003bd6c) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdcf,	// (0x0003bd6c) list_double_large_graphic_phob2_pane_t

0xb07c,	// (0x00037019) list_highlight_pane_cp024

0x96c6,	// (0x00035663) phob2_cc_button_pane

0x96d2,	// (0x0003566f) phob2_cc_data_pane_g1_ParamLimits

0x96d2,	// (0x0003566f) phob2_cc_data_pane_g1

0x96e8,	// (0x00035685) phob2_cc_data_pane_g2_ParamLimits

0x96e8,	// (0x00035685) phob2_cc_data_pane_g2

0x0001,

0xfdd4,	// (0x0003bd71) phob2_cc_data_pane_g_ParamLimits

0xfdd4,	// (0x0003bd71) phob2_cc_data_pane_g

0x9700,	// (0x0003569d) phob2_cc_data_pane_t1_ParamLimits

0x9700,	// (0x0003569d) phob2_cc_data_pane_t1

0x9730,	// (0x000356cd) phob2_cc_data_pane_t2_ParamLimits

0x9730,	// (0x000356cd) phob2_cc_data_pane_t2

0x9760,	// (0x000356fd) phob2_cc_data_pane_t3_ParamLimits

0x9760,	// (0x000356fd) phob2_cc_data_pane_t3

0x0002,

0xfdd9,	// (0x0003bd76) phob2_cc_data_pane_t_ParamLimits

0xfdd9,	// (0x0003bd76) phob2_cc_data_pane_t

0x9790,	// (0x0003572d) phob2_cc_list_pane_ParamLimits

0x9790,	// (0x0003572d) phob2_cc_list_pane

0x5c85,	// (0x00031c22) scroll_pane_cp035_ParamLimits

0x5c85,	// (0x00031c22) scroll_pane_cp035

0xbfa0,	// (0x00037f3d) bg_button_pane_cp033

0x979c,	// (0x00035739) phob2_cc_button_pane_g1

0x97a8,	// (0x00035745) phob2_cc_button_pane_t1

0x97bd,	// (0x0003575a) phob2_cc_button_pane_t2

0x0001,

0xfde0,	// (0x0003bd7d) phob2_cc_button_pane_t

0x97cf,	// (0x0003576c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x97cf,	// (0x0003576c) list_double_large_graphic_phob2_cc_pane

0x9806,	// (0x000357a3) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9806,	// (0x000357a3) list_double_large_graphic_phob2_cc_pane_g1

0x9812,	// (0x000357af) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9812,	// (0x000357af) list_double_large_graphic_phob2_cc_pane_g2

0x981e,	// (0x000357bb) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x981e,	// (0x000357bb) list_double_large_graphic_phob2_cc_pane_g3

0x982a,	// (0x000357c7) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x982a,	// (0x000357c7) list_double_large_graphic_phob2_cc_pane_g4

0x9836,	// (0x000357d3) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9836,	// (0x000357d3) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfde5,	// (0x0003bd82) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfde5,	// (0x0003bd82) list_double_large_graphic_phob2_cc_pane_g

0x9842,	// (0x000357df) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9842,	// (0x000357df) list_double_large_graphic_phob2_cc_pane_t1

0x986b,	// (0x00035808) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x986b,	// (0x00035808) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdf0,	// (0x0003bd8d) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdf0,	// (0x0003bd8d) list_double_large_graphic_phob2_cc_pane_t

0x9894,	// (0x00035831) list_highlight_pane_cp025_ParamLimits

0x9894,	// (0x00035831) list_highlight_pane_cp025

0xbfa0,	// (0x00037f3d) bg_button_pane_cp033_ParamLimits

0x979c,	// (0x00035739) phob2_cc_button_pane_g1_ParamLimits

0x97a8,	// (0x00035745) phob2_cc_button_pane_t1_ParamLimits

0x97bd,	// (0x0003575a) phob2_cc_button_pane_t2_ParamLimits

0xfde0,	// (0x0003bd7d) phob2_cc_button_pane_t_ParamLimits

0x15b0,	// (0x0002d54d) popup_wgtman_window

0xec01,	// (0x0003ab9e) scroll_pane_cp038

0x9012,	// (0x00034faf) wgtman_btn_pane_cp_01_ParamLimits

0x9012,	// (0x00034faf) wgtman_btn_pane_cp_01

0x98a2,	// (0x0003583f) wgtman_content_pane

0x98ab,	// (0x00035848) wgtman_heading_pane

0xb07c,	// (0x00037019) bg_heading_pane_cp02

0x98b4,	// (0x00035851) wgtman_heading_pane_g1

0x98bc,	// (0x00035859) wgtman_heading_pane_t1

0x98ca,	// (0x00035867) scroll_pane_cp036

0x98d2,	// (0x0003586f) wgtman_list_pane

0x7590,	// (0x0003352d) wgtman_list_pane_t1_ParamLimits

0x7590,	// (0x0003352d) wgtman_list_pane_t1

0xbc8d,	// (0x00037c2a) cam4_grid_pane

0x5a92,	// (0x00031a2f) bg_button_pane_cp015_ParamLimits

0x5aa9,	// (0x00031a46) bg_button_pane_cp016_ParamLimits

0x5ab5,	// (0x00031a52) bg_button_pane_cp017_ParamLimits

0x5b10,	// (0x00031aad) popup_vitu2_query_window_g3_ParamLimits

0x5b10,	// (0x00031aad) popup_vitu2_query_window_g3

0x5bb3,	// (0x00031b50) popup_vitu2_query_window_t6_ParamLimits

0x5bb3,	// (0x00031b50) popup_vitu2_query_window_t6

0x5bde,	// (0x00031b7b) popup_vitu2_query_window_t7_ParamLimits

0x5bde,	// (0x00031b7b) popup_vitu2_query_window_t7

0x5252,	// (0x000311ef) cam4_grid_pane_g1

0x525b,	// (0x000311f8) cam4_grid_pane_g2

0x98da,	// (0x00035877) cam4_grid_pane_g3

0x98e3,	// (0x00035880) cam4_grid_pane_g4

0x0003,

0xfdf5,	// (0x0003bd92) cam4_grid_pane_g

0x1e53,	// (0x0002ddf0) aid_placing_vt_slider_lsc_ParamLimits

0x2140,	// (0x0002e0dd) vidtel_button_pane_ParamLimits

0x2140,	// (0x0002e0dd) vidtel_button_pane

0xb07c,	// (0x00037019) bg_button_pane_cp034

0x98ee,	// (0x0003588b) vidtel_button_pane_g1

0x98f6,	// (0x00035893) vidtel_button_pane_t1

0xed0f,	// (0x0003acac) aid_size_vtel_slider_touch

0x5c85,	// (0x00031c22) scroll_pane_cp039

0x6f00,	// (0x00032e9d) ncim_query_button_pane_cp01_ParamLimits

0x6f1f,	// (0x00032ebc) ncimui_query_pane_g1_ParamLimits

0xbfa0,	// (0x00037f3d) input_focus_pane_cp012_ParamLimits

0x6f44,	// (0x00032ee1) ncim_query_entry_pane_t1_ParamLimits

0x5c85,	// (0x00031c22) scroll_pane_cp039_ParamLimits

0x3294,	// (0x0002f231) navi_pane_bcale_mc_g1

0x329c,	// (0x0002f239) navi_pane_bcale_mc_t1

0x79ed,	// (0x0003398a) main_sp_fs_email_pane_g1

0x79f9,	// (0x00033996) main_sp_fs_email_pane_g2

0x0001,

0xfbf3,	// (0x0003bb90) main_sp_fs_email_pane_g

0x844b,	// (0x000343e8) list_single_cale_mrui_row_pane_g3_ParamLimits

0x844b,	// (0x000343e8) list_single_cale_mrui_row_pane_g3

0x8853,	// (0x000347f0) list_single_recal_day_pane_g5_event_pane

0x8869,	// (0x00034806) list_single_recal_day_pane_g7

0x990c,	// (0x000358a9) list_recal_day_event_pane_cp01

0x9915,	// (0x000358b2) list_recal_vselct_arw_lo_pane_cp01

0x991d,	// (0x000358ba) list_recal_vselct_arw_up_pane_cp01

0x9925,	// (0x000358c2) list_recal_vselct_pane_cp01

0xed31,	// (0x0003acce) list_recal_day_event_pane_cp01_g1

0x992f,	// (0x000358cc) list_recal_day_event_pane_cp01_t1

0x8871,	// (0x0003480e) list_single_recal_day_pane_t1_ParamLimits

0x8883,	// (0x00034820) list_single_recal_day_pane_t2_ParamLimits

0xfcd8,	// (0x0003bc75) list_single_recal_day_pane_t_ParamLimits

0xbf7e,	// (0x00037f1b) bg_notes_pane_ParamLimits

0xc081,	// (0x0003801e) list_notes_pane_ParamLimits

0x15e0,	// (0x0002d57d) scroll_pane_cp06_ParamLimits

0xc0a3,	// (0x00038040) main_notes_pane_ParamLimits

0xbfa0,	// (0x00037f3d) main_welc_pane

0x9973,	// (0x00035910) main_welc_body_pane_ParamLimits

0x9973,	// (0x00035910) main_welc_body_pane

0x9992,	// (0x0003592f) main_welc_opti_pane_ParamLimits

0x9992,	// (0x0003592f) main_welc_opti_pane

0x9a20,	// (0x000359bd) main_welc_pane_t1_ParamLimits

0x9a20,	// (0x000359bd) main_welc_pane_t1

0x9c50,	// (0x00035bed) main_welc_body_row_pane_ParamLimits

0x9c50,	// (0x00035bed) main_welc_body_row_pane

0xbff9,	// (0x00037f96) main_welc_opti_row_pane_ParamLimits

0xbff9,	// (0x00037f96) main_welc_opti_row_pane

0x9c64,	// (0x00035c01) main_welc_opti_row_pane_g1

0x9c6c,	// (0x00035c09) main_welc_opti_row_pane_t1

0x9c7b,	// (0x00035c18) main_welc_body_row_pane_t1

0x8e13,	// (0x00034db0) popup_notif_wgt_heading_pane

0x8e3d,	// (0x00034dda) aid_size_list_notif_wgt_del_ParamLimits

0x8e4a,	// (0x00034de7) list_notif_wgt_row_pane_g1_ParamLimits

0x8e56,	// (0x00034df3) list_notif_wgt_row_pane_g2_ParamLimits

0x8e65,	// (0x00034e02) list_notif_wgt_row_pane_g3_ParamLimits

0xfd3f,	// (0x0003bcdc) list_notif_wgt_row_pane_g_ParamLimits

0x8e72,	// (0x00034e0f) list_notif_wgt_row_pane_t1_ParamLimits

0x8e88,	// (0x00034e25) list_notif_wgt_row_pane_t2_ParamLimits

0x8e9a,	// (0x00034e37) list_notif_wgt_row_pane_t3_ParamLimits

0xfd46,	// (0x0003bce3) list_notif_wgt_row_pane_t_ParamLimits

0x90ce,	// (0x0003506b) listrow_wgtman_pane_g1_ParamLimits

0x90db,	// (0x00035078) listrow_wgtman_pane_g2_ParamLimits

0xfd76,	// (0x0003bd13) listrow_wgtman_pane_g_ParamLimits

0x90f9,	// (0x00035096) listrow_wgtman_pane_t1_ParamLimits

0x9111,	// (0x000350ae) listrow_wgtman_pane_t2_ParamLimits

0xfd7b,	// (0x0003bd18) listrow_wgtman_pane_t_ParamLimits

0x9137,	// (0x000350d4) wait_bar_pane_cp09_ParamLimits

0xb07c,	// (0x00037019) bg_popup_heading_pane_cp02

0x9c8a,	// (0x00035c27) popup_notif_wgt_heading_pane_g1

0x9c92,	// (0x00035c2f) popup_notif_wgt_heading_pane_t1

0xb07c,	// (0x00037019) main_vids_pane

0xb07c,	// (0x00037019) vids_listscroll_pane

0x9ca0,	// (0x00035c3d) scroll_pane_cp040

0xb07c,	// (0x00037019) vids_list_pane

0x9cab,	// (0x00035c48) vids_list_double_pane_ParamLimits

0x9cab,	// (0x00035c48) vids_list_double_pane

0x9cbe,	// (0x00035c5b) vids_list_double_pane_g1

0x9cc7,	// (0x00035c64) vids_list_double_pane_t1

0x9cd7,	// (0x00035c74) vids_list_double_pane_t2

0x0001,

0xfe14,	// (0x0003bdb1) vids_list_double_pane_t

0xb0f1,	// (0x0003708e) main_ncimui_pane_ParamLimits

0x6c1f,	// (0x00032bbc) main_ncimui_pane_g1_ParamLimits

0x6c2b,	// (0x00032bc8) main_ncimui_pane_g2_ParamLimits

0x6c2b,	// (0x00032bc8) main_ncimui_pane_g2

0x0001,

0xfaf9,	// (0x0003ba96) main_ncimui_pane_g_ParamLimits

0xfaf9,	// (0x0003ba96) main_ncimui_pane_g

0x99b1,	// (0x0003594e) main_welc_pane_g1_ParamLimits

0x99b1,	// (0x0003594e) main_welc_pane_g1

0x99c6,	// (0x00035963) main_welc_pane_g2_ParamLimits

0x99c6,	// (0x00035963) main_welc_pane_g2

0x0003,

0xfdfe,	// (0x0003bd9b) main_welc_pane_g_ParamLimits

0xfdfe,	// (0x0003bd9b) main_welc_pane_g

0xbf7e,	// (0x00037f1b) listscroll_mce_pane_ParamLimits

0x3374,	// (0x0002f311) wait_bar_pane_cp10

0xde50,	// (0x00039ded) main_cale_day_pane_ParamLimits

0xde50,	// (0x00039ded) main_cale_week_pane_ParamLimits

0xbf7e,	// (0x00037f1b) main_messa_pane_ParamLimits

0x4d17,	// (0x00030cb4) main_clock2_btn_pane_ParamLimits

0x4d17,	// (0x00030cb4) main_clock2_btn_pane

0xe603,	// (0x0003a5a0) main_clock2_btn_pane_cp01_ParamLimits

0xe603,	// (0x0003a5a0) main_clock2_btn_pane_cp01

0x8389,	// (0x00034326) list_cale_mrui_pane_ParamLimits

0x8ef3,	// (0x00034e90) main_cf0_pane_g2

0x0001,

0xfd4d,	// (0x0003bcea) main_cf0_pane_g

0x9390,	// (0x0003532d) area_left_week_number_pane_ParamLimits

0x939e,	// (0x0003533b) area_top_day_name_pane_ParamLimits

0x93b1,	// (0x0003534e) frame_month_view_pane_ParamLimits

0x93c6,	// (0x00035363) grid_month_view_pane_ParamLimits

0x944a,	// (0x000353e7) frm_month_g1_ParamLimits

0x9457,	// (0x000353f4) frm_month_g2_ParamLimits

0x946a,	// (0x00035407) frm_month_g3_ParamLimits

0x947d,	// (0x0003541a) frm_month_g4_ParamLimits

0x9490,	// (0x0003542d) frm_month_g5_ParamLimits

0x94a3,	// (0x00035440) frm_month_g6_ParamLimits

0x94b8,	// (0x00035455) frm_month_g7_ParamLimits

0x94cd,	// (0x0003546a) frm_month_g8_ParamLimits

0x94da,	// (0x00035477) frm_month_g9_ParamLimits

0x94ea,	// (0x00035487) frm_month_g10_ParamLimits

0x94fa,	// (0x00035497) frm_month_g11_ParamLimits

0x950a,	// (0x000354a7) frm_month_g12_ParamLimits

0x951c,	// (0x000354b9) frm_month_g13_ParamLimits

0x9530,	// (0x000354cd) frm_month_g14_ParamLimits

0x9544,	// (0x000354e1) frm_month_g15_ParamLimits

0x9558,	// (0x000354f5) frm_month_g16_ParamLimits

0xfda5,	// (0x0003bd42) frm_month_g_ParamLimits

0x956c,	// (0x00035509) cell_top_day_name_pane_t1_ParamLimits

0x957f,	// (0x0003551c) cell_area_left_week_number_pane_g1_ParamLimits

0x958b,	// (0x00035528) cell_area_left_week_number_pane_t1_ParamLimits

0xc007,	// (0x00037fa4) cell_month_view_pane_g1_ParamLimits

0x959e,	// (0x0003553b) cell_month_view_pane_t1_ParamLimits

0xbf76,	// (0x00037f13) main_clock2_btn_pane_g1

0x9ce7,	// (0x00035c84) main_clock2_btn_pane_t1

0xbfa0,	// (0x00037f3d) listscroll_cmail_pane_ParamLimits

0x79ed,	// (0x0003398a) main_sp_fs_email_pane_g1_ParamLimits

0x79f9,	// (0x00033996) main_sp_fs_email_pane_g2_ParamLimits

0xfbf3,	// (0x0003bb90) main_sp_fs_email_pane_g_ParamLimits

0x87c0,	// (0x0003475d) list_recal_day_pane_ParamLimits

0x87d1,	// (0x0003476e) mian_recal_day_pane_t1

0x7bd9,	// (0x00033b76) list_single_dyc_row_text_pane_t4_ParamLimits

0x7bd9,	// (0x00033b76) list_single_dyc_row_text_pane_t4

0x7c22,	// (0x00033bbf) list_single_dyc_row_text_pane_t5_ParamLimits

0x7c22,	// (0x00033bbf) list_single_dyc_row_text_pane_t5

0x7c98,	// (0x00033c35) list_single_dyc_row_text_pane_t6_ParamLimits

0x7c98,	// (0x00033c35) list_single_dyc_row_text_pane_t6

0x2ed7,	// (0x0002ee74) aid_mgn_list_cale_time_pane

0xb0f1,	// (0x0003708e) main_gallery2_pane_ParamLimits

0xe617,	// (0x0003a5b4) main_clock2_pane_cp01_t1

0xe625,	// (0x0003a5c2) main_clock2_pane_cp01_t3

0x0001,

0xf6f2,	// (0x0003b68f) main_clock2_pane_cp01_t

0x1949,	// (0x0002d8e6) cale_week_scroll_pane_g16_ParamLimits

0x1949,	// (0x0002d8e6) cale_week_scroll_pane_g16

0xc258,	// (0x000381f5) vorec_slider_pane

0x98f6,	// (0x00035893) vidtel_button_pane_t1_ParamLimits

0x8a0f,	// (0x000349ac) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8a0f,	// (0x000349ac) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8a22,	// (0x000349bf) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8a22,	// (0x000349bf) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfcfb,	// (0x0003bc98) main_fs_bigclock_clock_pane_g_ParamLimits

0x8a39,	// (0x000349d6) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8a4f,	// (0x000349ec) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd04,	// (0x0003bca1) main_fs_bigclock_clock_pane_t_ParamLimits

0x4564,	// (0x00030501) main_mup3_lyrics_pane_ParamLimits

0x4564,	// (0x00030501) main_mup3_lyrics_pane

0x9cf5,	// (0x00035c92) main_mup3_lyrics_pane_t1_ParamLimits

0x9cf5,	// (0x00035c92) main_mup3_lyrics_pane_t1

0xb97f,	// (0x0003791c) aid_main_mp4_pane_t1_area

0xb989,	// (0x00037926) aid_main_mp4_pane_t2_area

0xba33,	// (0x000379d0) main_mp4_pane_g7_ParamLimits

0xba33,	// (0x000379d0) main_mp4_pane_g7

0xba3f,	// (0x000379dc) main_mp4_pane_g8_ParamLimits

0xba3f,	// (0x000379dc) main_mp4_pane_g8

0x51aa,	// (0x00031147) aid_call6_pane_g1_size

0x97ee,	// (0x0003578b) list_double_large_graphic_phob2_other_pane_ParamLimits

0x97ee,	// (0x0003578b) list_double_large_graphic_phob2_other_pane

0xc5e6,	// (0x00038583) list_double_large_graphic_phob2_other_pane_g1

0xb07c,	// (0x00037019) list_highlight_pane_cp026

0xbfa0,	// (0x00037f3d) main_welc_pane_ParamLimits

0x7956,	// (0x000338f3) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7956,	// (0x000338f3) main_sp_fs_ctrlbar_pane_g3

0x7970,	// (0x0003390d) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7970,	// (0x0003390d) main_sp_fs_ctrlbar_pane_g4

0x79a4,	// (0x00033941) toolbar2_fixed_button_pane_cp01

0x79af,	// (0x0003394c) toolbar2_fixed_button_pane_cp02

0x79bc,	// (0x00033959) toolbar2_fixed_button_pane_cp03

0x9950,	// (0x000358ed) list_welc_entry_pane_ParamLimits

0x9950,	// (0x000358ed) list_welc_entry_pane

0x99db,	// (0x00035978) main_welc_pane_g3_ParamLimits

0x99db,	// (0x00035978) main_welc_pane_g3

0x9a42,	// (0x000359df) main_welc_pane_t2_ParamLimits

0x9a42,	// (0x000359df) main_welc_pane_t2

0x9a65,	// (0x00035a02) main_welc_pane_t3_ParamLimits

0x9a65,	// (0x00035a02) main_welc_pane_t3

0x0005,

0xfe07,	// (0x0003bda4) main_welc_pane_t_ParamLimits

0xfe07,	// (0x0003bda4) main_welc_pane_t

0x9b9d,	// (0x00035b3a) welc_button_pane_ParamLimits

0x9b9d,	// (0x00035b3a) welc_button_pane

0x9c38,	// (0x00035bd5) welc_service_logo_pane_ParamLimits

0x9c38,	// (0x00035bd5) welc_service_logo_pane

0x9d10,	// (0x00035cad) list_single_welc_entry_pane_ParamLimits

0x9d10,	// (0x00035cad) list_single_welc_entry_pane

0x9d21,	// (0x00035cbe) list_single_welc_entry_pane_g1

0x9d29,	// (0x00035cc6) list_single_welc_entry_pane_t1

0x9d37,	// (0x00035cd4) list_single_welc_entry_pane_t2

0x0001,

0xfe19,	// (0x0003bdb6) list_single_welc_entry_pane_t

0xb07c,	// (0x00037019) bg_button_pane_cp035

0x9d45,	// (0x00035ce2) welc_button_pane_t1

0x9d53,	// (0x00035cf0) welc_service_logo_pane_g1

0x9d5c,	// (0x00035cf9) welc_service_logo_pane_g2

0x0001,

0xfe1e,	// (0x0003bdbb) welc_service_logo_pane_g

0xb0ff,	// (0x0003709c) main_int_radio_pane

0x6bc0,	// (0x00032b5d) list_single_fs_dyc_pane_g1

0x9682,	// (0x0003561f) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x9682,	// (0x0003561f) list_double_large_graphic_phob2_pane_g3

0x968e,	// (0x0003562b) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x968e,	// (0x0003562b) list_double_large_graphic_phob2_pane_g4

0x9d65,	// (0x00035d02) main_int_radio1_pane_ParamLimits

0x9d65,	// (0x00035d02) main_int_radio1_pane

0x9d82,	// (0x00035d1f) find_pane_cp02

0x9d8b,	// (0x00035d28) input_focus_pane_cp12_ParamLimits

0x9d8b,	// (0x00035d28) input_focus_pane_cp12

0x9d9b,	// (0x00035d38) input_focus_pane_cp13_ParamLimits

0x9d9b,	// (0x00035d38) input_focus_pane_cp13

0x9daf,	// (0x00035d4c) input_focus_pane_cp14_ParamLimits

0x9daf,	// (0x00035d4c) input_focus_pane_cp14

0x9dc3,	// (0x00035d60) int_radio1_listscroll_pane

0x9dcd,	// (0x00035d6a) main_int_radio1_pane_g1_ParamLimits

0x9dcd,	// (0x00035d6a) main_int_radio1_pane_g1

0x9de3,	// (0x00035d80) main_int_radio1_pane_t1_ParamLimits

0x9de3,	// (0x00035d80) main_int_radio1_pane_t1

0x9dfc,	// (0x00035d99) main_int_radio1_pane_t2_ParamLimits

0x9dfc,	// (0x00035d99) main_int_radio1_pane_t2

0x9e17,	// (0x00035db4) main_int_radio1_pane_t3_ParamLimits

0x9e17,	// (0x00035db4) main_int_radio1_pane_t3

0x9e32,	// (0x00035dcf) main_int_radio1_pane_t4_ParamLimits

0x9e32,	// (0x00035dcf) main_int_radio1_pane_t4

0x9e44,	// (0x00035de1) main_int_radio1_pane_t5_ParamLimits

0x9e44,	// (0x00035de1) main_int_radio1_pane_t5

0x9e56,	// (0x00035df3) main_int_radio1_pane_t6_ParamLimits

0x9e56,	// (0x00035df3) main_int_radio1_pane_t6

0x9e6b,	// (0x00035e08) main_int_radio1_pane_t7_ParamLimits

0x9e6b,	// (0x00035e08) main_int_radio1_pane_t7

0x9e80,	// (0x00035e1d) main_int_radio1_pane_t8_ParamLimits

0x9e80,	// (0x00035e1d) main_int_radio1_pane_t8

0x9e9d,	// (0x00035e3a) main_int_radio1_pane_t9_ParamLimits

0x9e9d,	// (0x00035e3a) main_int_radio1_pane_t9

0x9eaf,	// (0x00035e4c) main_int_radio1_pane_t10_ParamLimits

0x9eaf,	// (0x00035e4c) main_int_radio1_pane_t10

0x9ed5,	// (0x00035e72) main_int_radio1_pane_t11_ParamLimits

0x9ed5,	// (0x00035e72) main_int_radio1_pane_t11

0x9efb,	// (0x00035e98) main_int_radio1_pane_t12_ParamLimits

0x9efb,	// (0x00035e98) main_int_radio1_pane_t12

0x000b,

0xfe23,	// (0x0003bdc0) main_int_radio1_pane_t_ParamLimits

0xfe23,	// (0x0003bdc0) main_int_radio1_pane_t

0x960b,	// (0x000355a8) int_radio_list_pane

0x9613,	// (0x000355b0) scroll_pane_cp037

0x9f0d,	// (0x00035eaa) list_double_large_graphic_int_radio_pane_ParamLimits

0x9f0d,	// (0x00035eaa) list_double_large_graphic_int_radio_pane

0x9f21,	// (0x00035ebe) list_double_large_graphic_int_radio_pane_g1

0x9f2a,	// (0x00035ec7) list_double_large_graphic_int_radio_pane_t1

0x9f38,	// (0x00035ed5) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe3c,	// (0x0003bdd9) list_double_large_graphic_int_radio_pane_t

0xb07c,	// (0x00037019) list_highlight_pane_cp027

0x996b,	// (0x00035908) main_button_pane_4

0x99ef,	// (0x0003598c) main_welc_pane_g4_ParamLimits

0x99ef,	// (0x0003598c) main_welc_pane_g4

0x9a88,	// (0x00035a25) main_welc_pane_t4_ParamLimits

0x9a88,	// (0x00035a25) main_welc_pane_t4

0x9a9f,	// (0x00035a3c) main_welc_pane_t5_ParamLimits

0x9a9f,	// (0x00035a3c) main_welc_pane_t5

0x9ade,	// (0x00035a7b) main_welc_pane_t6_ParamLimits

0x9ade,	// (0x00035a7b) main_welc_pane_t6

0x9bb2,	// (0x00035b4f) welc_button_pane_2_ParamLimits

0x9bb2,	// (0x00035b4f) welc_button_pane_2

0x9bd5,	// (0x00035b72) welc_button_pane_3_ParamLimits

0x9bd5,	// (0x00035b72) welc_button_pane_3

0x9bfd,	// (0x00035b9a) welc_button_pane_4

0x9c05,	// (0x00035ba2) welc_button_pane_5_ParamLimits

0x9c05,	// (0x00035ba2) welc_button_pane_5

0x00b5,	// (0x0002c052) main_popup_welc_pane

0x9f5e,	// (0x00035efb) main_welc_sk_g3

0x9f68,	// (0x00035f05) main_welc_sk_g4

0x9f72,	// (0x00035f0f) main_welc_sk_t3

0x9f82,	// (0x00035f1f) main_welc_sk_t4

0x9f92,	// (0x00035f2f) popup_welc_pane_t4

0x9fa0,	// (0x00035f3d) popup_welc_pane_t5

0x9fae,	// (0x00035f4b) popup_welc_pane_t6

0xb0ff,	// (0x0003709c) main_acti_pane

0xb07c,	// (0x00037019) main_sso_pane

0x9ff0,	// (0x00035f8d) sso_body_pane_ParamLimits

0x9ff0,	// (0x00035f8d) sso_body_pane

0xa005,	// (0x00035fa2) sso_logo_pane_ParamLimits

0xa005,	// (0x00035fa2) sso_logo_pane

0xa03e,	// (0x00035fdb) sso_sk_pane_ParamLimits

0xa03e,	// (0x00035fdb) sso_sk_pane

0xa050,	// (0x00035fed) main_sso_logo_pane_g1

0xa05b,	// (0x00035ff8) sso_sk_pane_t1_ParamLimits

0xa05b,	// (0x00035ff8) sso_sk_pane_t1

0xa075,	// (0x00036012) sso_sk_pane_t2_ParamLimits

0xa075,	// (0x00036012) sso_sk_pane_t2

0x0001,

0xfe41,	// (0x0003bdde) sso_sk_pane_t_ParamLimits

0xfe41,	// (0x0003bdde) sso_sk_pane_t

0xa08b,	// (0x00036028) aid_sso_gap

0xa094,	// (0x00036031) aid_sso_txt1

0xa09e,	// (0x0003603b) aid_sso_txt2

0xa0a8,	// (0x00036045) aid_sso_txt3

0x0002,

0xfe46,	// (0x0003bde3) aid_sso_txt

0xa0b2,	// (0x0003604f) aid_sso_widget

0xa110,	// (0x000360ad) sso_btn_pane_ParamLimits

0xa110,	// (0x000360ad) sso_btn_pane

0xa194,	// (0x00036131) sso_option_pane_ParamLimits

0xa194,	// (0x00036131) sso_option_pane

0xa252,	// (0x000361ef) sso_query_pane_ParamLimits

0xa252,	// (0x000361ef) sso_query_pane

0xa2a8,	// (0x00036245) sso_query_pane_cp01_ParamLimits

0xa2a8,	// (0x00036245) sso_query_pane_cp01

0xa308,	// (0x000362a5) sso_t_hdr_pane_ParamLimits

0xa308,	// (0x000362a5) sso_t_hdr_pane

0xa332,	// (0x000362cf) sso_t_nml_pane_ParamLimits

0xa332,	// (0x000362cf) sso_t_nml_pane

0xa388,	// (0x00036325) sso_t_sub_pane

0xa012,	// (0x00035faf) sso_popup_window_ParamLimits

0xa012,	// (0x00035faf) sso_popup_window

0xa0bc,	// (0x00036059) sso_apps_pane_ParamLimits

0xa0bc,	// (0x00036059) sso_apps_pane

0xa0e6,	// (0x00036083) sso_body_pane_g1

0xa0f0,	// (0x0003608d) sso_body_pane_t1

0xa100,	// (0x0003609d) sso_body_pane_t2

0x0001,

0xfe4d,	// (0x0003bdea) sso_body_pane_t

0xa15c,	// (0x000360f9) sso_btn_pane_cp01_ParamLimits

0xa15c,	// (0x000360f9) sso_btn_pane_cp01

0xa226,	// (0x000361c3) sso_prog_pane_ParamLimits

0xa226,	// (0x000361c3) sso_prog_pane

0xa39d,	// (0x0003633a) sso_t_hdr_pane_t1_ParamLimits

0xa39d,	// (0x0003633a) sso_t_hdr_pane_t1

0xa3b0,	// (0x0003634d) input_focus_pane_cp10_ParamLimits

0xa3b0,	// (0x0003634d) input_focus_pane_cp10

0xa3c4,	// (0x00036361) sso_query_pane_t1_ParamLimits

0xa3c4,	// (0x00036361) sso_query_pane_t1

0xa3d7,	// (0x00036374) sso_query_pane_t2_ParamLimits

0xa3d7,	// (0x00036374) sso_query_pane_t2

0xa3f1,	// (0x0003638e) sso_query_pane_t3_ParamLimits

0xa3f1,	// (0x0003638e) sso_query_pane_t3

0xa41b,	// (0x000363b8) sso_query_pane_t4_ParamLimits

0xa41b,	// (0x000363b8) sso_query_pane_t4

0x0003,

0xfe52,	// (0x0003bdef) sso_query_pane_t_ParamLimits

0xfe52,	// (0x0003bdef) sso_query_pane_t

0x9f55,	// (0x00035ef2) bg_button_pane_cp22

0x9f46,	// (0x00035ee3) sso_btn_pane_t1

0xa43f,	// (0x000363dc) sso_t_nml_pane_t1_ParamLimits

0xa43f,	// (0x000363dc) sso_t_nml_pane_t1

0xa45a,	// (0x000363f7) sso_option_row_pane_ParamLimits

0xa45a,	// (0x000363f7) sso_option_row_pane

0xa467,	// (0x00036404) sso_t_sub_pane_t1_ParamLimits

0xa467,	// (0x00036404) sso_t_sub_pane_t1

0xbfa0,	// (0x00037f3d) bg_popup_window_pane_cp11_ParamLimits

0xbfa0,	// (0x00037f3d) bg_popup_window_pane_cp11

0xa484,	// (0x00036421) popup_sk_window_cp01_ParamLimits

0xa484,	// (0x00036421) popup_sk_window_cp01

0xa491,	// (0x0003642e) sso_popup_body_pane_ParamLimits

0xa491,	// (0x0003642e) sso_popup_body_pane

0xa49e,	// (0x0003643b) scroll_pane_cp21_ParamLimits

0xa49e,	// (0x0003643b) scroll_pane_cp21

0xa4ab,	// (0x00036448) sso_popup_body_t_pane_ParamLimits

0xa4ab,	// (0x00036448) sso_popup_body_t_pane

0xa4b8,	// (0x00036455) sso_popup_body_t_hdr_pane_ParamLimits

0xa4b8,	// (0x00036455) sso_popup_body_t_hdr_pane

0xa4ca,	// (0x00036467) sso_popup_body_t_nml_pane_ParamLimits

0xa4ca,	// (0x00036467) sso_popup_body_t_nml_pane

0xa4f1,	// (0x0003648e) sso_popup_body_t_sub_pane_ParamLimits

0xa4f1,	// (0x0003648e) sso_popup_body_t_sub_pane

0xa514,	// (0x000364b1) sso_popup_body_t_hdr_pane_t1

0xa524,	// (0x000364c1) sso_popup_body_t_nml_pane_t1_ParamLimits

0xa524,	// (0x000364c1) sso_popup_body_t_nml_pane_t1

0xa55c,	// (0x000364f9) sso_popup_body_t_sub_pane_t1_ParamLimits

0xa55c,	// (0x000364f9) sso_popup_body_t_sub_pane_t1

0xc045,	// (0x00037fe2) sso_prog_pane_g1

0xa581,	// (0x0003651e) sso_apps_pane_comp1_ParamLimits

0xa581,	// (0x0003651e) sso_apps_pane_comp1

0xa59b,	// (0x00036538) sso_apps_pane_comp1_g1

0xa5a3,	// (0x00036540) sso_apps_pane_comp1_t1

0xa5bf,	// (0x0003655c) sso_option_row_pane_g1

0xa5c7,	// (0x00036564) sso_option_row_pane_t1

0x7eb8,	// (0x00033e55) list_cmail_pane_ParamLimits

0xb07c,	// (0x00037019) main_call7_pane

0x993d,	// (0x000358da) bg_welc_area_ParamLimits

0x993d,	// (0x000358da) bg_welc_area

0x9b1c,	// (0x00035ab9) sso_t_hdr_pane_a_t1_ParamLimits

0x9b1c,	// (0x00035ab9) sso_t_hdr_pane_a_t1

0x9b35,	// (0x00035ad2) sso_t_nml_pane_a_t1_ParamLimits

0x9b35,	// (0x00035ad2) sso_t_nml_pane_a_t1

0x9b64,	// (0x00035b01) sso_t_sub_pane_a_t1_ParamLimits

0x9b64,	// (0x00035b01) sso_t_sub_pane_a_t1

0x9c1e,	// (0x00035bbb) welc_button_pane_cp01_ParamLimits

0x9c1e,	// (0x00035bbb) welc_button_pane_cp01

0x9f46,	// (0x00035ee3) sso_btn_pane_t1_copy1

0x9f55,	// (0x00035ef2) welc_button_pane_2_comp1

0x9fbe,	// (0x00035f5b) sso_t_hdr_pane_p_t1

0x9fce,	// (0x00035f6b) sso_t_nml_pane_p_t1

0x9fde,	// (0x00035f7b) sso_t_sub_pane_p_t1

0xb07c,	// (0x00037019) main_att_pane

0xb07c,	// (0x00037019) main_vod_pane

0xa388,	// (0x00036325) sso_t_sub_pane_ParamLimits

0xa5b1,	// (0x0003654e) input_focus_pane_cp10_t1

0xa5c7,	// (0x00036564) sso_option_row_pane_t1_ParamLimits

0xa5e0,	// (0x0003657d) main_att_body_pane_ParamLimits

0xa5e0,	// (0x0003657d) main_att_body_pane

0xa5f6,	// (0x00036593) att_btn_emg_pane_ParamLimits

0xa5f6,	// (0x00036593) att_btn_emg_pane

0xa615,	// (0x000365b2) att_btn_pane_ParamLimits

0xa615,	// (0x000365b2) att_btn_pane

0xa68a,	// (0x00036627) att_btn_pane_cp01_ParamLimits

0xa68a,	// (0x00036627) att_btn_pane_cp01

0xa6aa,	// (0x00036647) att_li_srv_pane_ParamLimits

0xa6aa,	// (0x00036647) att_li_srv_pane

0xa6c7,	// (0x00036664) att_opt_pane_ParamLimits

0xa6c7,	// (0x00036664) att_opt_pane

0xa711,	// (0x000366ae) att_query_pane_ParamLimits

0xa711,	// (0x000366ae) att_query_pane

0xa78a,	// (0x00036727) att_query_pane_cp01_ParamLimits

0xa78a,	// (0x00036727) att_query_pane_cp01

0xa7d6,	// (0x00036773) att_t_hdr_pane_ParamLimits

0xa7d6,	// (0x00036773) att_t_hdr_pane

0xa846,	// (0x000367e3) att_t_nml_pane_ParamLimits

0xa846,	// (0x000367e3) att_t_nml_pane

0xa8c0,	// (0x0003685d) att_t_nml_pane_cp01_ParamLimits

0xa8c0,	// (0x0003685d) att_t_nml_pane_cp01

0xa8ee,	// (0x0003688b) att_t_nmlb_pane_ParamLimits

0xa8ee,	// (0x0003688b) att_t_nmlb_pane

0xa95b,	// (0x000368f8) att_term_pane_ParamLimits

0xa95b,	// (0x000368f8) att_term_pane

0xa9a7,	// (0x00036944) main_att_body_pane_g1_ParamLimits

0xa9a7,	// (0x00036944) main_att_body_pane_g1

0xa9d5,	// (0x00036972) att_t_hdr_pane_t1_ParamLimits

0xa9d5,	// (0x00036972) att_t_hdr_pane_t1

0xa9ee,	// (0x0003698b) att_t_nml_pane_t1_ParamLimits

0xa9ee,	// (0x0003698b) att_t_nml_pane_t1

0xaa13,	// (0x000369b0) att_btn_pane_t1

0x9f55,	// (0x00035ef2) bg_button_pane_cp23

0xaa23,	// (0x000369c0) att_li_srv_row_pane_ParamLimits

0xaa23,	// (0x000369c0) att_li_srv_row_pane

0xaa33,	// (0x000369d0) att_t_nmlb_pane_t1_ParamLimits

0xaa33,	// (0x000369d0) att_t_nmlb_pane_t1

0xaa51,	// (0x000369ee) att_query_pane_t1

0xaa60,	// (0x000369fd) att_query_pane_t2

0xaa6f,	// (0x00036a0c) att_query_pane_t3

0x0002,

0xfe5b,	// (0x0003bdf8) att_query_pane_t

0xaa7e,	// (0x00036a1b) input_focus_pane_cp11

0xaa87,	// (0x00036a24) att_term_pane_t1_ParamLimits

0xaa87,	// (0x00036a24) att_term_pane_t1

0xb07c,	// (0x00037019) att_opt_row_pane

0xa5bf,	// (0x0003655c) att_opt_row_pane_g1

0xaaa4,	// (0x00036a41) att_opt_row_pane_t1_ParamLimits

0xaaa4,	// (0x00036a41) att_opt_row_pane_t1

0xaabd,	// (0x00036a5a) att_li_srv_row_pane_g1

0xaac5,	// (0x00036a62) att_li_srv_row_pane_t1_ParamLimits

0xaac5,	// (0x00036a62) att_li_srv_row_pane_t1

0xaada,	// (0x00036a77) att_li_srv_row_pane_t2_ParamLimits

0xaada,	// (0x00036a77) att_li_srv_row_pane_t2

0x0001,

0xfe62,	// (0x0003bdff) att_li_srv_row_pane_t_ParamLimits

0xfe62,	// (0x0003bdff) att_li_srv_row_pane_t

0xaaef,	// (0x00036a8c) att_btn_close_pane_g1

0xb07c,	// (0x00037019) bg_button_pane_cp24

0xaaf7,	// (0x00036a94) main_vod_body_pane_ParamLimits

0xaaf7,	// (0x00036a94) main_vod_body_pane

0xab0b,	// (0x00036aa8) main_vod_body_pane_g1_ParamLimits

0xab0b,	// (0x00036aa8) main_vod_body_pane_g1

0xab3f,	// (0x00036adc) scroll_pane_cp24_ParamLimits

0xab3f,	// (0x00036adc) scroll_pane_cp24

0xab8d,	// (0x00036b2a) vod_btn_pane_ParamLimits

0xab8d,	// (0x00036b2a) vod_btn_pane

0xabcf,	// (0x00036b6c) vod_det_pane_ParamLimits

0xabcf,	// (0x00036b6c) vod_det_pane

0xac03,	// (0x00036ba0) vod_logo_g1_ParamLimits

0xac03,	// (0x00036ba0) vod_logo_g1

0xac51,	// (0x00036bee) vod_opt_pane_ParamLimits

0xac51,	// (0x00036bee) vod_opt_pane

0xac84,	// (0x00036c21) vod_opt_pane_cp01_ParamLimits

0xac84,	// (0x00036c21) vod_opt_pane_cp01

0xacb0,	// (0x00036c4d) vod_query_pane_ParamLimits

0xacb0,	// (0x00036c4d) vod_query_pane

0xacdb,	// (0x00036c78) vod_query_pane_cp01_ParamLimits

0xacdb,	// (0x00036c78) vod_query_pane_cp01

0xace7,	// (0x00036c84) vod_t_nml_pane_ParamLimits

0xace7,	// (0x00036c84) vod_t_nml_pane

0xad9c,	// (0x00036d39) vod_t_nml_pane_cp01_ParamLimits

0xad9c,	// (0x00036d39) vod_t_nml_pane_cp01

0xadd8,	// (0x00036d75) vod_t_sub_pane_ParamLimits

0xadd8,	// (0x00036d75) vod_t_sub_pane

0xae09,	// (0x00036da6) vod_t_sub_pane_cp01_ParamLimits

0xae09,	// (0x00036da6) vod_t_sub_pane_cp01

0xaa7e,	// (0x00036a1b) vod_query_field_pane

0xae35,	// (0x00036dd2) vod_query_pane_t1

0x9f55,	// (0x00035ef2) bg_button_pane_cp25

0xae44,	// (0x00036de1) sso_btn_pane_t1_copy2

0xae53,	// (0x00036df0) vod_t_nml_pane_t1_ParamLimits

0xae53,	// (0x00036df0) vod_t_nml_pane_t1

0xae88,	// (0x00036e25) vod_opt_row_pane_ParamLimits

0xae88,	// (0x00036e25) vod_opt_row_pane

0xae9a,	// (0x00036e37) vod_t_sub_pane_t1_ParamLimits

0xae9a,	// (0x00036e37) vod_t_sub_pane_t1

0xaeb3,	// (0x00036e50) vod_det_cell_pane_ParamLimits

0xaeb3,	// (0x00036e50) vod_det_cell_pane

0xb07c,	// (0x00037019) input_focus_pane_cp15

0xaec4,	// (0x00036e61) vod_query_field_pane_t1

0xaed2,	// (0x00036e6f) vod_opt_row_pane_g1_ParamLimits

0xaed2,	// (0x00036e6f) vod_opt_row_pane_g1

0xaede,	// (0x00036e7b) vod_opt_row_pane_t1_ParamLimits

0xaede,	// (0x00036e7b) vod_opt_row_pane_t1

0xaefd,	// (0x00036e9a) vod_det_cell_field_pane

0xaf06,	// (0x00036ea3) vod_det_cell_pane_g1

0xaf0e,	// (0x00036eab) vod_det_cell_pane_t1

0xb07c,	// (0x00037019) input_focus_pane_cp16

0xaf1d,	// (0x00036eba) vod_det_cell_field_pane_t1

0xaf2b,	// (0x00036ec8) call7_btn_grp_pane_ParamLimits

0xaf2b,	// (0x00036ec8) call7_btn_grp_pane

0xbfa0,	// (0x00037f3d) call7_bubble_pane_ParamLimits

0xbfa0,	// (0x00037f3d) call7_bubble_pane

0xaf45,	// (0x00036ee2) cell_call7_btn_pane_ParamLimits

0xaf45,	// (0x00036ee2) cell_call7_btn_pane

0xaf59,	// (0x00036ef6) call7_pane_g1_ParamLimits

0xaf59,	// (0x00036ef6) call7_pane_g1

0xaf6b,	// (0x00036f08) call7_windows_conf_pane_ParamLimits

0xaf6b,	// (0x00036f08) call7_windows_conf_pane

0xaf89,	// (0x00036f26) popup_call7_1st_window_ParamLimits

0xaf89,	// (0x00036f26) popup_call7_1st_window

0xaf9b,	// (0x00036f38) popup_call7_2nd_window_ParamLimits

0xaf9b,	// (0x00036f38) popup_call7_2nd_window

0xafad,	// (0x00036f4a) popup_call7_3rd_window_ParamLimits

0xafad,	// (0x00036f4a) popup_call7_3rd_window

0xb07c,	// (0x00037019) bg_button_pane_cp26

0x915f,	// (0x000350fc) cell_call7_btn_pane_g1

0xafbf,	// (0x00036f5c) cell_call7_btn_pane_t1

0xb07c,	// (0x00037019) bg_popup_window_pane_cp12

0xafce,	// (0x00036f6b) popup_call7_1st_window_g1

0xafd6,	// (0x00036f73) popup_call7_1st_window_g2

0xafde,	// (0x00036f7b) popup_call7_1st_window_g3

0x0002,

0xfe67,	// (0x0003be04) popup_call7_1st_window_g

0xafe6,	// (0x00036f83) popup_call7_1st_window_t1

0xaff5,	// (0x00036f92) popup_call7_1st_window_t2

0xb005,	// (0x00036fa2) popup_call7_1st_window_t3

0x0002,

0xfe6e,	// (0x0003be0b) popup_call7_1st_window_t

0xb07c,	// (0x00037019) bg_popup_window_pane_cp13

0xb015,	// (0x00036fb2) popup_call7_2nd_window_g1

0xb01d,	// (0x00036fba) popup_call7_2nd_window_g2

0xb025,	// (0x00036fc2) popup_call7_2nd_window_g3

0x0002,

0xfe75,	// (0x0003be12) popup_call7_2nd_window_g

0xafe6,	// (0x00036f83) popup_call7_2nd_window_t1

0xb07c,	// (0x00037019) bg_popup_window_pane_cp14

0xb02d,	// (0x00036fca) call7_list_conf_pane

0xb035,	// (0x00036fd2) call7_list_conf_row_pane_ParamLimits

0xb035,	// (0x00036fd2) call7_list_conf_row_pane

0xb048,	// (0x00036fe5) call7_list_conf_row_pane_g1

0xb050,	// (0x00036fed) call7_list_conf_row_pane_g2

0x0001,

0xfe7c,	// (0x0003be19) call7_list_conf_row_pane_g

0xb058,	// (0x00036ff5) call7_list_conf_row_pane_t1

0xb07c,	// (0x00037019) list_highlight_pane_cp22

0xa1ee,	// (0x0003618b) sso_option_pane_cp01_ParamLimits

0xa1ee,	// (0x0003618b) sso_option_pane_cp01

0xbf7e,	// (0x00037f1b) msg_header_pane_ParamLimits

0xcd05,	// (0x00038ca2) bg_button_pane_cp01_ParamLimits

0xcd19,	// (0x00038cb6) input_focus_pane_cp07_ParamLimits

0x7a28,	// (0x000339c5) popup_email_progress_window

0xc045,	// (0x00037fe2) popup_email_progress_window_g1

0xb066,	// (0x00037003) popup_email_progress_window_g2

0x0001,

0xfe81,	// (0x0003be1e) popup_email_progress_window_g

0xb06e,	// (0x0003700b) popup_email_progress_window_t1
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Normal
