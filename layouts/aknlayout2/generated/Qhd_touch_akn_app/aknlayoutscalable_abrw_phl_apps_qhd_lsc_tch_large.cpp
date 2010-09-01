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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00084e18 };

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
0x2e78,	// (0x00087c90) Screen

0x2e84,	// (0x00087c9c) application_window

0x2ec0,	// (0x00087cd8) area_bottom_pane_ParamLimits

0x2ec0,	// (0x00087cd8) area_bottom_pane

0x2ef9,	// (0x00087d11) area_top_pane_ParamLimits

0x2ef9,	// (0x00087d11) area_top_pane

0xb577,	// (0x0009038f) call_video_uplink_pane_ParamLimits

0xb577,	// (0x0009038f) call_video_uplink_pane

0x2f87,	// (0x00087d9f) main_pane_ParamLimits

0x2f87,	// (0x00087d9f) main_pane

0x1322,	// (0x0008613a) context_pane

0x644a,	// (0x0008b262) navi_pane

0x647c,	// (0x0008b294) popup_cale_events_window_ParamLimits

0x647c,	// (0x0008b294) popup_cale_events_window

0x1335,	// (0x0008614d) popup_mup_playback_window

0x6494,	// (0x0008b2ac) signal_pane

0x333d,	// (0x00088155) main_browser_pane

0x3bf8,	// (0x00088a10) main_burst_pane

0x618c,	// (0x0008afa4) main_calc_pane

0x1308,	// (0x00086120) main_cale_day_pane

0x61a0,	// (0x0008afb8) main_cale_month_pane

0x1308,	// (0x00086120) main_cale_week_pane

0x3bf8,	// (0x00088a10) main_call_pane

0x0b66,	// (0x0008597e) main_call_poc_pane

0x3bf8,	// (0x00088a10) main_camera_pane

0x3bf8,	// (0x00088a10) main_chi_dic_pane

0xbae6,	// (0x000908fe) main_clock_pane

0x0b66,	// (0x0008597e) main_fmradio_pane

0x3bf8,	// (0x00088a10) main_graph_messa_pane

0x0b66,	// (0x0008597e) main_help_pane

0x333d,	// (0x00088155) main_im_pane

0x0dc1,	// (0x00085bd9) main_image_pane_ParamLimits

0x0dc1,	// (0x00085bd9) main_image_pane

0x0b66,	// (0x0008597e) main_location2_pane

0x3bf8,	// (0x00088a10) main_location_pane

0x0dc1,	// (0x00085bd9) main_messa_pane

0x0b66,	// (0x0008597e) main_mp2_pane

0x3bf8,	// (0x00088a10) main_mp_pane

0x0b66,	// (0x0008597e) main_msg_pane

0x0b66,	// (0x0008597e) main_mup_eq_pane

0x0b66,	// (0x0008597e) main_mup_pane

0x333d,	// (0x00088155) main_notes_pane

0x0b66,	// (0x0008597e) main_pec_pane

0x0b66,	// (0x0008597e) main_phob_pane

0x0b66,	// (0x0008597e) main_pinb_pane

0x0b66,	// (0x0008597e) main_postcard_pane

0x0b66,	// (0x0008597e) main_qdial_pane

0x3bf8,	// (0x00088a10) main_skin_pane

0x0b66,	// (0x0008597e) main_smil2_pane

0x3bf8,	// (0x00088a10) main_smil_pane

0x3bf8,	// (0x00088a10) main_video_pane

0x3bf8,	// (0x00088a10) main_video_tele_pane

0x0dc1,	// (0x00085bd9) main_viewer_pane_ParamLimits

0x0dc1,	// (0x00085bd9) main_viewer_pane

0x3bf8,	// (0x00088a10) main_vorec_pane

0x61fe,	// (0x0008b016) popup_blid_sat_info_window_ParamLimits

0x61fe,	// (0x0008b016) popup_blid_sat_info_window

0x6256,	// (0x0008b06e) popup_dyc_status_message_window_ParamLimits

0x6256,	// (0x0008b06e) popup_dyc_status_message_window

0x6270,	// (0x0008b088) popup_grid_large_graphic_window_ParamLimits

0x6270,	// (0x0008b088) popup_grid_large_graphic_window

0x632c,	// (0x0008b144) popup_loc_request_window_ParamLimits

0x632c,	// (0x0008b144) popup_loc_request_window

0x6422,	// (0x0008b23a) popup_wml_address_window_ParamLimits

0x6422,	// (0x0008b23a) popup_wml_address_window

0x5fc6,	// (0x0008adde) call_muted_g1

0x5c3a,	// (0x0008aa52) popup_call_audio_conf_window_ParamLimits

0x5c3a,	// (0x0008aa52) popup_call_audio_conf_window

0x5fda,	// (0x0008adf2) popup_call_audio_first_window_ParamLimits

0x5fda,	// (0x0008adf2) popup_call_audio_first_window

0x6050,	// (0x0008ae68) popup_call_audio_in_window_ParamLimits

0x6050,	// (0x0008ae68) popup_call_audio_in_window

0x608c,	// (0x0008aea4) popup_call_audio_out_window_ParamLimits

0x608c,	// (0x0008aea4) popup_call_audio_out_window

0x60c6,	// (0x0008aede) popup_call_audio_second_window_ParamLimits

0x60c6,	// (0x0008aede) popup_call_audio_second_window

0x611c,	// (0x0008af34) popup_call_audio_wait_window_ParamLimits

0x611c,	// (0x0008af34) popup_call_audio_wait_window

0x6151,	// (0x0008af69) popup_number_entry_window_ParamLimits

0x6151,	// (0x0008af69) popup_number_entry_window

0x0753,	// (0x0008556b) bg_popup_call_pane_cp05_ParamLimits

0x0753,	// (0x0008556b) bg_popup_call_pane_cp05

0x0773,	// (0x0008558b) popup_number_entry_window_t1

0x0786,	// (0x0008559e) popup_number_entry_window_t2

0x0798,	// (0x000855b0) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x00093e9d) popup_number_entry_window_t

0x07aa,	// (0x000855c2) text_title_cp2

0x07bd,	// (0x000855d5) bg_popup_call_pane_cp_ParamLimits

0x07bd,	// (0x000855d5) bg_popup_call_pane_cp

0x07cb,	// (0x000855e3) call_thumbnail_pane

0x07d3,	// (0x000855eb) popup_call_audio_in_window_g1_ParamLimits

0x07d3,	// (0x000855eb) popup_call_audio_in_window_g1

0x07df,	// (0x000855f7) popup_call_audio_in_window_g2_ParamLimits

0x07df,	// (0x000855f7) popup_call_audio_in_window_g2

0x07eb,	// (0x00085603) popup_call_audio_in_window_g3_ParamLimits

0x07eb,	// (0x00085603) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x00093ea6) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x00093ea6) popup_call_audio_in_window_g

0x07f7,	// (0x0008560f) popup_call_audio_in_window_t1_ParamLimits

0x07f7,	// (0x0008560f) popup_call_audio_in_window_t1

0x0813,	// (0x0008562b) popup_call_audio_in_window_t2_ParamLimits

0x0813,	// (0x0008562b) popup_call_audio_in_window_t2

0x082f,	// (0x00085647) popup_call_audio_in_window_t3_ParamLimits

0x082f,	// (0x00085647) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x00093ead) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x00093ead) popup_call_audio_in_window_t

0x07bd,	// (0x000855d5) bg_popup_call_pane_cp01_ParamLimits

0x07bd,	// (0x000855d5) bg_popup_call_pane_cp01

0x07cb,	// (0x000855e3) call_thumbnail_pane_cp02

0x0842,	// (0x0008565a) call_type_pane_cp022

0x084a,	// (0x00085662) popup_call_audio_out_window_g1_ParamLimits

0x084a,	// (0x00085662) popup_call_audio_out_window_g1

0x085c,	// (0x00085674) popup_call_audio_out_window_g2_ParamLimits

0x085c,	// (0x00085674) popup_call_audio_out_window_g2

0x0868,	// (0x00085680) popup_call_audio_out_window_g3_ParamLimits

0x0868,	// (0x00085680) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x00093eb4) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x00093eb4) popup_call_audio_out_window_g

0x087a,	// (0x00085692) popup_call_audio_out_window_t1_ParamLimits

0x087a,	// (0x00085692) popup_call_audio_out_window_t1

0x0892,	// (0x000856aa) popup_call_audio_out_window_t2_ParamLimits

0x0892,	// (0x000856aa) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x00093ebb) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x00093ebb) popup_call_audio_out_window_t

0x08a7,	// (0x000856bf) bg_popup_call_pane_ParamLimits

0x08a7,	// (0x000856bf) bg_popup_call_pane

0x3143,	// (0x00087f5b) call_thumbnail_pane_cp_ParamLimits

0x3143,	// (0x00087f5b) call_thumbnail_pane_cp

0x092b,	// (0x00085743) call_type_pane_cp01_ParamLimits

0x092b,	// (0x00085743) call_type_pane_cp01

0x096f,	// (0x00085787) popup_call_audio_first_window_g1_ParamLimits

0x096f,	// (0x00085787) popup_call_audio_first_window_g1

0x09bb,	// (0x000857d3) popup_call_audio_first_window_g2_ParamLimits

0x09bb,	// (0x000857d3) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x00093ec0) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x00093ec0) popup_call_audio_first_window_g

0x09ff,	// (0x00085817) popup_call_audio_first_window_t1_ParamLimits

0x09ff,	// (0x00085817) popup_call_audio_first_window_t1

0x0aab,	// (0x000858c3) popup_call_audio_first_window_t4_ParamLimits

0x0aab,	// (0x000858c3) popup_call_audio_first_window_t4

0x0b37,	// (0x0008594f) popup_call_audio_first_window_t5_ParamLimits

0x0b37,	// (0x0008594f) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x00093ec5) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x00093ec5) popup_call_audio_first_window_t

0x0b66,	// (0x0008597e) bg_popup_call_pane_cp02

0x0b70,	// (0x00085988) call_type_pane_cp023

0x0b78,	// (0x00085990) popup_call_audio_wait_window_g1

0x0b80,	// (0x00085998) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x00093ecc) popup_call_audio_wait_window_g

0x0b88,	// (0x000859a0) popup_call_audio_wait_window_t3

0x0b96,	// (0x000859ae) bg_popup_call_pane_cp03_ParamLimits

0x0b96,	// (0x000859ae) bg_popup_call_pane_cp03

0x0bf6,	// (0x00085a0e) call_thumbnail_pane_cp011_ParamLimits

0x0bf6,	// (0x00085a0e) call_thumbnail_pane_cp011

0x0c02,	// (0x00085a1a) call_type_pane_cp034_ParamLimits

0x0c02,	// (0x00085a1a) call_type_pane_cp034

0x0c3e,	// (0x00085a56) popup_call_audio_second_window_g1_ParamLimits

0x0c3e,	// (0x00085a56) popup_call_audio_second_window_g1

0x0c7a,	// (0x00085a92) popup_call_audio_second_window_g2_ParamLimits

0x0c7a,	// (0x00085a92) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x00093ed1) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x00093ed1) popup_call_audio_second_window_g

0x0cb6,	// (0x00085ace) popup_call_audio_second_window_t1_ParamLimits

0x0cb6,	// (0x00085ace) popup_call_audio_second_window_t1

0x0d37,	// (0x00085b4f) popup_call_audio_second_window_t2_ParamLimits

0x0d37,	// (0x00085b4f) popup_call_audio_second_window_t2

0x0d6d,	// (0x00085b85) popup_call_audio_second_window_t3_ParamLimits

0x0d6d,	// (0x00085b85) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x00093ed6) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x00093ed6) popup_call_audio_second_window_t

0x0b66,	// (0x0008597e) bg_popup_call_pane_cp04

0x0da3,	// (0x00085bbb) list_conf_pane

0x0dab,	// (0x00085bc3) popup_call_audio_conf_window_t1

0x0db9,	// (0x00085bd1) call_thumbnail_pane_g1

0x0dc1,	// (0x00085bd9) bg_pinb_pane_ParamLimits

0x0dc1,	// (0x00085bd9) bg_pinb_pane

0x0dcf,	// (0x00085be7) find_pinb_pane

0x0dc1,	// (0x00085bd9) listscroll_pinb_pane_ParamLimits

0x0dc1,	// (0x00085bd9) listscroll_pinb_pane

0x0dd9,	// (0x00085bf1) pinb_bg_pane_g1

0x0dd9,	// (0x00085bf1) pinb_bg_pane_g2

0x0dd9,	// (0x00085bf1) pinb_bg_pane_g3

0x0dd9,	// (0x00085bf1) pinb_bg_pane_g4

0x0dd9,	// (0x00085bf1) pinb_bg_pane_g5

0x0dd9,	// (0x00085bf1) pinb_bg_pane_g6

0x0dd9,	// (0x00085bf1) pinb_bg_pane_g7

0x0dd9,	// (0x00085bf1) pinb_bg_pane_g8

0x0dd9,	// (0x00085bf1) pinb_bg_pane_g9

0x0dd9,	// (0x00085bf1) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x00093edd) pinb_bg_pane_g

0x0749,	// (0x00085561) grid_pinb_pane

0x0749,	// (0x00085561) list_pinb_pane

0x0de3,	// (0x00085bfb) scroll_pane_cp01_ParamLimits

0x0de3,	// (0x00085bfb) scroll_pane_cp01

0x0df1,	// (0x00085c09) find_pinb_pane_g1_ParamLimits

0x0df1,	// (0x00085c09) find_pinb_pane_g1

0x0e09,	// (0x00085c21) find_pinb_pane_t1

0x0e1b,	// (0x00085c33) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x00093ef7) find_pinb_pane_t

0x0e30,	// (0x00085c48) input_focus_pane_cp01_ParamLimits

0x0e30,	// (0x00085c48) input_focus_pane_cp01

0x0e3c,	// (0x00085c54) cell_pinb_pane_ParamLimits

0x0e3c,	// (0x00085c54) cell_pinb_pane

0x3167,	// (0x00087f7f) cell_pinb_pane_g1_ParamLimits

0x3167,	// (0x00087f7f) cell_pinb_pane_g1

0x3175,	// (0x00087f8d) cell_pinb_pane_g2_ParamLimits

0x3175,	// (0x00087f8d) cell_pinb_pane_g2

0x3175,	// (0x00087f8d) cell_pinb_pane_g3_ParamLimits

0x3175,	// (0x00087f8d) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x00093efc) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x00093efc) cell_pinb_pane_g

0x0b66,	// (0x0008597e) grid_highlight_pane_cp01

0x0e3c,	// (0x00085c54) list_pinb_item_pane_ParamLimits

0x0e3c,	// (0x00085c54) list_pinb_item_pane

0x0749,	// (0x00085561) list_highlight_pane_cp02

0x3183,	// (0x00087f9b) list_pinb_item_pane_g1_ParamLimits

0x3183,	// (0x00087f9b) list_pinb_item_pane_g1

0x3175,	// (0x00087f8d) list_pinb_item_pane_g2_ParamLimits

0x3175,	// (0x00087f8d) list_pinb_item_pane_g2

0x3167,	// (0x00087f7f) list_pinb_item_pane_g3_ParamLimits

0x3167,	// (0x00087f7f) list_pinb_item_pane_g3

0x3175,	// (0x00087f8d) list_pinb_item_pane_g4_ParamLimits

0x3175,	// (0x00087f8d) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x00093f03) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x00093f03) list_pinb_item_pane_g

0x3191,	// (0x00087fa9) list_pinb_item_pane_t1_ParamLimits

0x3191,	// (0x00087fa9) list_pinb_item_pane_t1

0x31c3,	// (0x00087fdb) calc_display_pane

0x31e8,	// (0x00088000) calc_paper_pane

0x320b,	// (0x00088023) grid_calc_pane

0x0b66,	// (0x0008597e) bg_list_pane_cp01

0x3239,	// (0x00088051) clock_g1

0x3241,	// (0x00088059) clock_g2

0x0001,

0xf0f4,	// (0x00093f0c) clock_g

0x3249,	// (0x00088061) clock_t1_ParamLimits

0x3249,	// (0x00088061) clock_t1

0x325e,	// (0x00088076) clock_t2_ParamLimits

0x325e,	// (0x00088076) clock_t2

0x3270,	// (0x00088088) clock_t3_ParamLimits

0x3270,	// (0x00088088) clock_t3

0x3282,	// (0x0008809a) clock_t4_ParamLimits

0x3282,	// (0x0008809a) clock_t4

0x3294,	// (0x000880ac) clock_t5_ParamLimits

0x3294,	// (0x000880ac) clock_t5

0x32a9,	// (0x000880c1) clock_t6_ParamLimits

0x32a9,	// (0x000880c1) clock_t6

0x32bb,	// (0x000880d3) clock_t7_ParamLimits

0x32bb,	// (0x000880d3) clock_t7

0x32cd,	// (0x000880e5) clock_t8_ParamLimits

0x32cd,	// (0x000880e5) clock_t8

0x32e1,	// (0x000880f9) clock_t9_ParamLimits

0x32e1,	// (0x000880f9) clock_t9

0x0008,

0xf0f9,	// (0x00093f11) clock_t_ParamLimits

0xf0f9,	// (0x00093f11) clock_t

0x32f5,	// (0x0008810d) popup_clock_analogue_window_cp02

0x32f5,	// (0x0008810d) popup_clock_digital_window_cp01

0x0b66,	// (0x0008597e) listscroll_help_pane

0x0b66,	// (0x0008597e) phob_pre_status_pane

0x32fd,	// (0x00088115) grid_qdial_pane

0x0dc1,	// (0x00085bd9) listscroll_mce_pane

0x0dc1,	// (0x00085bd9) bg_notes_pane

0x3307,	// (0x0008811f) list_notes_pane

0x3315,	// (0x0008812d) scroll_pane_cp06

0x3329,	// (0x00088141) bg_calc_paper_pane

0xb5b5,	// (0x000903cd) list_calc_pane

0x333d,	// (0x00088155) bg_calc_display_pane

0x3349,	// (0x00088161) calc_display_pane_t1

0x335e,	// (0x00088176) calc_display_pane_t2

0xb5cf,	// (0x000903e7) calc_display_pane_t3

0x0002,

0xf10c,	// (0x00093f24) calc_display_pane_t

0x3373,	// (0x0008818b) cell_calc_pane_ParamLimits

0x3373,	// (0x0008818b) cell_calc_pane

0x33a8,	// (0x000881c0) bg_calc_paper_pane_g1

0x33b4,	// (0x000881cc) bg_calc_paper_pane_g2

0x33c0,	// (0x000881d8) bg_calc_paper_pane_g3

0x33cc,	// (0x000881e4) bg_calc_paper_pane_g4

0x33d8,	// (0x000881f0) bg_calc_paper_pane_g5

0x33e4,	// (0x000881fc) bg_calc_paper_pane_g6

0x33f3,	// (0x0008820b) bg_calc_paper_pane_g7

0x3402,	// (0x0008821a) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x00093f2b) bg_calc_paper_pane_g

0x3415,	// (0x0008822d) calc_bg_paper_pane_g9

0x3428,	// (0x00088240) list_calc_item_pane_ParamLimits

0x3428,	// (0x00088240) list_calc_item_pane

0x3440,	// (0x00088258) list_calc_item_pane_g1

0xb5e1,	// (0x000903f9) list_calc_item_pane_t1_ParamLimits

0xb5e1,	// (0x000903f9) list_calc_item_pane_t1

0x344d,	// (0x00088265) list_calc_item_pane_t2_ParamLimits

0x344d,	// (0x00088265) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x00093f3c) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x00093f3c) list_calc_item_pane_t

0x0dd9,	// (0x00085bf1) cell_calc_pane_g1

0x347f,	// (0x00088297) grid_highlight_pane_cp02

0x34a1,	// (0x000882b9) bg_calc_display_pane_g1

0x34aa,	// (0x000882c2) bg_calc_display_pane_g2

0x175b,	// (0x00086573) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x00093f46) bg_calc_display_pane_g

0x34b4,	// (0x000882cc) cell_qdial_pane_ParamLimits

0x34b4,	// (0x000882cc) cell_qdial_pane

0x34c8,	// (0x000882e0) cell_qdial_pane_g1_ParamLimits

0x34c8,	// (0x000882e0) cell_qdial_pane_g1

0x34de,	// (0x000882f6) cell_qdial_pane_g2_ParamLimits

0x34de,	// (0x000882f6) cell_qdial_pane_g2

0x34ef,	// (0x00088307) cell_qdial_pane_g3_ParamLimits

0x34ef,	// (0x00088307) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x00093f4d) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x00093f4d) cell_qdial_pane_g

0x3511,	// (0x00088329) cell_qdial_pane_t1_ParamLimits

0x3511,	// (0x00088329) cell_qdial_pane_t1

0x3529,	// (0x00088341) cell_qdial_pane_t2_ParamLimits

0x3529,	// (0x00088341) cell_qdial_pane_t2

0x353c,	// (0x00088354) cell_qdial_pane_t3_ParamLimits

0x353c,	// (0x00088354) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x00093f56) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x00093f56) cell_qdial_pane_t

0x0b66,	// (0x0008597e) grid_highlight_pane_cp04

0x354f,	// (0x00088367) thumbnail_qdial_pane_ParamLimits

0x354f,	// (0x00088367) thumbnail_qdial_pane

0x35ab,	// (0x000883c3) list_help_pane

0x35b4,	// (0x000883cc) scroll_pane_cp02

0x1846,	// (0x0008665e) help_list_pane_t1_ParamLimits

0x1846,	// (0x0008665e) help_list_pane_t1

0xb5f3,	// (0x0009040b) bg_notes_pane_g2

0xb5fb,	// (0x00090413) bg_notes_pane_g3

0xb603,	// (0x0009041b) notes_bg_pane_g1

0xb60b,	// (0x00090423) notes_bg_pane_g4

0xb613,	// (0x0009042b) notes_bg_pane_g5

0xb61b,	// (0x00090433) notes_bg_pane_g6

0xb623,	// (0x0009043b) notes_bg_pane_g7

0xb62b,	// (0x00090443) notes_bg_pane_g8

0xb633,	// (0x0009044b) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x00093f74) notes_bg_pane_g

0x35bd,	// (0x000883d5) list_notes_text_pane_ParamLimits

0x35bd,	// (0x000883d5) list_notes_text_pane

0x35d2,	// (0x000883ea) list_notes_text_pane_g1

0x35db,	// (0x000883f3) list_notes_text_pane_t1

0x35fa,	// (0x00088412) listscroll_cale_week_pane

0x362f,	// (0x00088447) bg_cale_heading_pane

0x3647,	// (0x0008845f) bg_cale_pane_cp01

0x3664,	// (0x0008847c) cale_week_corner_pane

0x3683,	// (0x0008849b) cale_week_day_heading_pane

0x36a0,	// (0x000884b8) cale_week_scroll_pane_g1

0x36b3,	// (0x000884cb) cale_week_scroll_pane_g2

0x36cb,	// (0x000884e3) cale_week_scroll_pane_g3

0x36e3,	// (0x000884fb) cale_week_scroll_pane_g4

0x36fb,	// (0x00088513) cale_week_scroll_pane_g5

0x371b,	// (0x00088533) cale_week_scroll_pane_g6

0x373b,	// (0x00088553) cale_week_scroll_pane_g7

0x375b,	// (0x00088573) cale_week_scroll_pane_g8

0x377f,	// (0x00088597) cale_week_scroll_pane_g9

0x3797,	// (0x000885af) cale_week_scroll_pane_g10

0x37af,	// (0x000885c7) cale_week_scroll_pane_g11

0x37c7,	// (0x000885df) cale_week_scroll_pane_g12

0x37df,	// (0x000885f7) cale_week_scroll_pane_g13

0x37df,	// (0x000885f7) cale_week_scroll_pane_g14

0x37df,	// (0x000885f7) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x00093f83) cale_week_scroll_pane_g

0x381b,	// (0x00088633) cale_week_time_pane

0x383f,	// (0x00088657) grid_cale_week_pane

0x3877,	// (0x0008868f) scroll_pane_cp08

0x3894,	// (0x000886ac) cell_cale_week_pane_ParamLimits

0x3894,	// (0x000886ac) cell_cale_week_pane

0x3922,	// (0x0008873a) cale_week_day_heading_pane_t1

0x394c,	// (0x00088764) cale_week_day_heading_pane_t2

0x397b,	// (0x00088793) cale_week_day_heading_pane_t3

0x39aa,	// (0x000887c2) cale_week_day_heading_pane_t4

0x39d9,	// (0x000887f1) cale_week_day_heading_pane_t5

0x3a10,	// (0x00088828) cale_week_day_heading_pane_t6

0x3a47,	// (0x0008885f) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x00093fa4) cale_week_day_heading_pane_t

0x3a71,	// (0x00088889) bg_cale_side_pane

0x3a7f,	// (0x00088897) cale_week_time_pane_t1

0x3a99,	// (0x000888b1) cale_week_time_pane_t2

0x3ab3,	// (0x000888cb) cale_week_time_pane_t3

0x3acd,	// (0x000888e5) cale_week_time_pane_t4

0x3ae7,	// (0x000888ff) cale_week_time_pane_t5

0x3b01,	// (0x00088919) cale_week_time_pane_t6

0x3b1b,	// (0x00088933) cale_week_time_pane_t7

0x3b35,	// (0x0008894d) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x00093fb3) cale_week_time_pane_t

0x3b4f,	// (0x00088967) cell_cale_week_pane_g2

0x3b6e,	// (0x00088986) cell_cale_week_pane_g3_ParamLimits

0x3b6e,	// (0x00088986) cell_cale_week_pane_g3

0x3b86,	// (0x0008899e) grid_highlight_pane_cp07

0x3b8e,	// (0x000889a6) listscroll_gms_pane

0x3b98,	// (0x000889b0) grid_gms_pane

0x3ba1,	// (0x000889b9) listscroll_gms_pane_g1

0x3ba9,	// (0x000889c1) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x00093fc4) listscroll_gms_pane_g

0x3bb1,	// (0x000889c9) scroll_pane_cp010

0x3bbc,	// (0x000889d4) cell_gms_pane_ParamLimits

0x3bbc,	// (0x000889d4) cell_gms_pane

0x3bcf,	// (0x000889e7) cell_gms_pane_g1

0x3bd7,	// (0x000889ef) cell_gms_pane_g2

0x35d2,	// (0x000883ea) cell_gms_pane_g3

0x3bdf,	// (0x000889f7) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x00093fc9) cell_gms_pane_g

0x3be8,	// (0x00088a00) grid_highlight_pane_cp09

0x5f4e,	// (0x0008ad66) phob_pre_status_pane_g1

0x5f56,	// (0x0008ad6e) phob_pre_status_pane_g2

0x5f5e,	// (0x0008ad76) phob_pre_status_pane_g3

0x5f66,	// (0x0008ad7e) phob_pre_status_pane_g4

0x0004,

0xf575,	// (0x0009438d) phob_pre_status_pane_g

0x5f76,	// (0x0008ad8e) phob_pre_status_pane_t1

0x5f84,	// (0x0008ad9c) phob_pre_status_pane_t2

0x5f94,	// (0x0008adac) phob_pre_status_pane_t3

0x0002,

0xf580,	// (0x00094398) phob_pre_status_pane_t

0x3bf8,	// (0x00088a10) bg_list_pane_cp05

0x3c00,	// (0x00088a18) grid_vorec_pane

0x3c08,	// (0x00088a20) vorec_t1

0x3c16,	// (0x00088a2e) vorec_t2

0x3c24,	// (0x00088a3c) vorec_t3

0x3c32,	// (0x00088a4a) vorec_t4

0xb328,	// (0x00090140) vorec_t5

0xb336,	// (0x0009014e) vorec_t6

0x0004,

0xf1ba,	// (0x00093fd2) vorec_t

0xb344,	// (0x0009015c) wait_bar_pane_cp01

0x3c4e,	// (0x00088a66) cell_vorec_pane_ParamLimits

0x3c4e,	// (0x00088a66) cell_vorec_pane

0xb63b,	// (0x00090453) cell_vorec_pane_g1

0x0b66,	// (0x0008597e) grid_highlight_pane_cp05

0x0de3,	// (0x00085bfb) cams_zoom_pane

0x0de3,	// (0x00085bfb) image_vga_pane

0x3167,	// (0x00087f7f) main_camera_pane_g1

0x3167,	// (0x00087f7f) main_camera_pane_g2

0x3167,	// (0x00087f7f) main_camera_pane_g3

0x3167,	// (0x00087f7f) main_camera_pane_g4

0x3167,	// (0x00087f7f) main_camera_pane_g5

0x3167,	// (0x00087f7f) main_camera_pane_g6

0x3167,	// (0x00087f7f) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x00093fdd) main_camera_pane_g

0x3c61,	// (0x00088a79) main_camera_pane_t1

0x3c61,	// (0x00088a79) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x00093fee) main_camera_pane_t

0x3c89,	// (0x00088aa1) cams_zoom_pane_cp_ParamLimits

0x3c89,	// (0x00088aa1) cams_zoom_pane_cp

0x3cbd,	// (0x00088ad5) image_cif_pane_ParamLimits

0x3cbd,	// (0x00088ad5) image_cif_pane

0x0749,	// (0x00085561) image_subqcif_pane

0x3ccf,	// (0x00088ae7) main_video_pane_g1_ParamLimits

0x3ccf,	// (0x00088ae7) main_video_pane_g1

0x3cfd,	// (0x00088b15) main_video_pane_g2_ParamLimits

0x3cfd,	// (0x00088b15) main_video_pane_g2

0x3d37,	// (0x00088b4f) main_video_pane_g3_ParamLimits

0x3d37,	// (0x00088b4f) main_video_pane_g3

0x3d37,	// (0x00088b4f) main_video_pane_g4_ParamLimits

0x3d37,	// (0x00088b4f) main_video_pane_g4

0x3d6b,	// (0x00088b83) main_video_pane_g5_ParamLimits

0x3d6b,	// (0x00088b83) main_video_pane_g5

0x3d79,	// (0x00088b91) main_video_pane_g6_ParamLimits

0x3d79,	// (0x00088b91) main_video_pane_g6

0x0006,

0xf1db,	// (0x00093ff3) main_video_pane_g_ParamLimits

0xf1db,	// (0x00093ff3) main_video_pane_g

0x3da1,	// (0x00088bb9) main_video_pane_t1_ParamLimits

0x3da1,	// (0x00088bb9) main_video_pane_t1

0x3de5,	// (0x00088bfd) cams_zoom_pane_g1

0x3de5,	// (0x00088bfd) cams_zoom_pane_g2

0x3de5,	// (0x00088bfd) cams_zoom_pane_g3

0x3de5,	// (0x00088bfd) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x00094002) cams_zoom_pane_g

0x3e03,	// (0x00088c1b) grid_cams_pane

0x3e1d,	// (0x00088c35) linegrid_cams_pane

0x3e31,	// (0x00088c49) cell_cams_pane_ParamLimits

0x3e31,	// (0x00088c49) cell_cams_pane

0x3e51,	// (0x00088c69) cams_burst_image_pane

0x3e59,	// (0x00088c71) cell_cams_pane_g1

0x0b66,	// (0x0008597e) grid_highlight_pane_cp03

0x0dd9,	// (0x00085bf1) mp_bg_pane_g1

0x0749,	// (0x00085561) bg_list_pane_cp03

0x0749,	// (0x00085561) bg_mp_pane

0x0749,	// (0x00085561) grid_mp_pane

0x3de5,	// (0x00088bfd) media_player_g1

0xb807,	// (0x0009061f) media_player_t1

0xb807,	// (0x0009061f) media_player_t2

0xb807,	// (0x0009061f) media_player_t3

0xb807,	// (0x0009061f) media_player_t4

0xb807,	// (0x0009061f) media_player_t5

0xb807,	// (0x0009061f) media_player_t6

0xb807,	// (0x0009061f) media_player_t7

0x0006,

0xf55f,	// (0x00094377) media_player_t

0x0749,	// (0x00085561) wait_bar_pane_cp02

0xf544,	// (0x0009435c) main_usb_pane_t

0xbae6,	// (0x000908fe) cell_mp_pane

0x0dd9,	// (0x00085bf1) cell_mp_pane_g1

0x0b66,	// (0x0008597e) grid_highlight_pane_cp06

0x3e61,	// (0x00088c79) grid_skin_colour_pane

0x3e69,	// (0x00088c81) list_highlight_pane_cp03

0x3e71,	// (0x00088c89) skin_g1

0x3e79,	// (0x00088c91) skin_t1

0x3e88,	// (0x00088ca0) skin_t2

0x0001,

0xf218,	// (0x00094030) skin_t

0x3e96,	// (0x00088cae) cell_skin_colour_pane_ParamLimits

0x3e96,	// (0x00088cae) cell_skin_colour_pane

0x3eb6,	// (0x00088cce) cell_skin_colour_pane_g1

0x3f21,	// (0x00088d39) call_video_g1_ParamLimits

0x3f21,	// (0x00088d39) call_video_g1

0x3f3d,	// (0x00088d55) call_video_g2_ParamLimits

0x3f3d,	// (0x00088d55) call_video_g2

0x0001,

0xf21d,	// (0x00094035) call_video_g_ParamLimits

0xf21d,	// (0x00094035) call_video_g

0x3f8f,	// (0x00088da7) call_video_uplink_pane_cp1_ParamLimits

0x3f8f,	// (0x00088da7) call_video_uplink_pane_cp1

0x3ff4,	// (0x00088e0c) call_video_uplink_pane_cp2

0x4036,	// (0x00088e4e) video_down_crop_pane_ParamLimits

0x4036,	// (0x00088e4e) video_down_crop_pane

0x412d,	// (0x00088f45) video_down_pane_ParamLimits

0x412d,	// (0x00088f45) video_down_pane

0x4224,	// (0x0008903c) video_down_subqcif_pane_ParamLimits

0x4224,	// (0x0008903c) video_down_subqcif_pane

0x423c,	// (0x00089054) video_down_subqcif_pane_cp_ParamLimits

0x423c,	// (0x00089054) video_down_subqcif_pane_cp

0x427b,	// (0x00089093) im_reading_pane_ParamLimits

0x427b,	// (0x00089093) im_reading_pane

0x428d,	// (0x000890a5) im_writing_pane_ParamLimits

0x428d,	// (0x000890a5) im_writing_pane

0x42ab,	// (0x000890c3) im_reading_pane_t1

0x42e4,	// (0x000890fc) list_im_pane

0x42f5,	// (0x0008910d) scroll_pane_cp07

0x430e,	// (0x00089126) im_writing_pane_t1_ParamLimits

0x430e,	// (0x00089126) im_writing_pane_t1

0x4323,	// (0x0008913b) im_writing_pane_t2_ParamLimits

0x4323,	// (0x0008913b) im_writing_pane_t2

0x0001,

0xf227,	// (0x0009403f) im_writing_pane_t_ParamLimits

0xf227,	// (0x0009403f) im_writing_pane_t

0x0b66,	// (0x0008597e) input_focus_pane_cp04

0x0b66,	// (0x0008597e) input_focus_pane_cp05

0x4340,	// (0x00089158) list_im_single_pane_ParamLimits

0x4340,	// (0x00089158) list_im_single_pane

0x4354,	// (0x0008916c) list_single_im_pane_t1

0x3bf8,	// (0x00088a10) blid_accuracy_pane

0x3bf8,	// (0x00088a10) blid_compass_pane

0x12c0,	// (0x000860d8) main_location_t1

0x12c0,	// (0x000860d8) main_location_t2

0x12c0,	// (0x000860d8) main_location_t3

0x0002,

0xf56e,	// (0x00094386) main_location_t

0x0b66,	// (0x0008597e) aid_levels_location

0x0dd9,	// (0x00085bf1) blid_accuracy_pane_g1

0x0dd9,	// (0x00085bf1) blid_accuracy_pane_g2

0x0001,

0xf276,	// (0x0009408e) blid_accuracy_pane_g

0x438e,	// (0x000891a6) wml_content_pane

0x43cc,	// (0x000891e4) wml_button_pane_ParamLimits

0x43cc,	// (0x000891e4) wml_button_pane

0x43e0,	// (0x000891f8) wml_list_single_large_pane_ParamLimits

0x43e0,	// (0x000891f8) wml_list_single_large_pane

0x43f5,	// (0x0008920d) wml_list_single_medium_pane_ParamLimits

0x43f5,	// (0x0008920d) wml_list_single_medium_pane

0x440b,	// (0x00089223) wml_list_single_small_pane_ParamLimits

0x440b,	// (0x00089223) wml_list_single_small_pane

0x4423,	// (0x0008923b) wml_selection_box_pane_ParamLimits

0x4423,	// (0x0008923b) wml_selection_box_pane

0x4436,	// (0x0008924e) wml_list_single_pane_t1

0x4445,	// (0x0008925d) wml_list_single_medium_pane_t1

0x4454,	// (0x0008926c) wml_list_single_large_pane_t1

0x4463,	// (0x0008927b) input_focus_pane_cp02_ParamLimits

0x4463,	// (0x0008927b) input_focus_pane_cp02

0x4476,	// (0x0008928e) wml_selection_box_pane_g1

0x447f,	// (0x00089297) wml_selection_box_pane_t1_ParamLimits

0x447f,	// (0x00089297) wml_selection_box_pane_t1

0x0dc1,	// (0x00085bd9) bg_wml_button_pane_ParamLimits

0x0dc1,	// (0x00085bd9) bg_wml_button_pane

0x4497,	// (0x000892af) wml_button_pane_g1

0x449f,	// (0x000892b7) wml_button_pane_t1

0x4497,	// (0x000892af) wml_button_bg_pane_g1

0x44af,	// (0x000892c7) wml_button_bg_pane_g2

0x44b7,	// (0x000892cf) wml_button_bg_pane_g3

0x44bf,	// (0x000892d7) wml_button_bg_pane_g4

0x44c7,	// (0x000892df) wml_button_bg_pane_g5

0x44cf,	// (0x000892e7) wml_button_bg_pane_g6

0x44d7,	// (0x000892ef) wml_button_bg_pane_g7

0x44df,	// (0x000892f7) wml_button_bg_pane_g8

0x44e7,	// (0x000892ff) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x00094044) wml_button_bg_pane_g

0x44ef,	// (0x00089307) bg_list_pane_cp02

0x44f7,	// (0x0008930f) mce_header_pane_ParamLimits

0x44f7,	// (0x0008930f) mce_header_pane

0x450d,	// (0x00089325) mce_icon_pane

0x450d,	// (0x00089325) mce_image_pane

0x4516,	// (0x0008932e) mce_text_pane_ParamLimits

0x4516,	// (0x0008932e) mce_text_pane

0x4529,	// (0x00089341) scroll_pane_cp03

0x43c4,	// (0x000891dc) scroll_pane_cp04

0x4533,	// (0x0008934b) scroll_pane_cp05_ParamLimits

0x4533,	// (0x0008934b) scroll_pane_cp05

0x453f,	// (0x00089357) mce_header_field_pane_ParamLimits

0x453f,	// (0x00089357) mce_header_field_pane

0x4556,	// (0x0008936e) mce_header_field_pane_2_ParamLimits

0x4556,	// (0x0008936e) mce_header_field_pane_2

0x456c,	// (0x00089384) mce_header_field_pane_3

0x4574,	// (0x0008938c) list_single_mce_message_pane_ParamLimits

0x4574,	// (0x0008938c) list_single_mce_message_pane

0x4589,	// (0x000893a1) list_single_mce_smart_pane_ParamLimits

0x4589,	// (0x000893a1) list_single_mce_smart_pane

0x45a9,	// (0x000893c1) input_focus_pane_cp03

0x45b2,	// (0x000893ca) list_header_data_pane

0x45ba,	// (0x000893d2) mce_header_field_pane_t1

0x45ca,	// (0x000893e2) list_single_mce_header_pane_ParamLimits

0x45ca,	// (0x000893e2) list_single_mce_header_pane

0x45de,	// (0x000893f6) list_single_mce_header_pane_t1

0x45ed,	// (0x00089405) list_single_mce_message_pane_g1

0x45f5,	// (0x0008940d) list_single_mce_message_pane_t1

0x4629,	// (0x00089441) bg_cale_heading_pane_cp01_ParamLimits

0x4629,	// (0x00089441) bg_cale_heading_pane_cp01

0x4663,	// (0x0008947b) bg_cale_pane_cp02_ParamLimits

0x4663,	// (0x0008947b) bg_cale_pane_cp02

0x4690,	// (0x000894a8) cale_month_corner_pane

0x46af,	// (0x000894c7) cale_month_day_heading_pane_ParamLimits

0x46af,	// (0x000894c7) cale_month_day_heading_pane

0x4701,	// (0x00089519) cale_month_pane_g1_ParamLimits

0x4701,	// (0x00089519) cale_month_pane_g1

0x4730,	// (0x00089548) cale_month_pane_g2_ParamLimits

0x4730,	// (0x00089548) cale_month_pane_g2

0x4760,	// (0x00089578) cale_month_pane_g3_ParamLimits

0x4760,	// (0x00089578) cale_month_pane_g3

0x479c,	// (0x000895b4) cale_month_pane_g4_ParamLimits

0x479c,	// (0x000895b4) cale_month_pane_g4

0x47d8,	// (0x000895f0) cale_month_pane_g5_ParamLimits

0x47d8,	// (0x000895f0) cale_month_pane_g5

0x4820,	// (0x00089638) cale_month_pane_g6_ParamLimits

0x4820,	// (0x00089638) cale_month_pane_g6

0x486c,	// (0x00089684) cale_month_pane_g7_ParamLimits

0x486c,	// (0x00089684) cale_month_pane_g7

0x48c0,	// (0x000896d8) cale_month_pane_g8_ParamLimits

0x48c0,	// (0x000896d8) cale_month_pane_g8

0x4914,	// (0x0008972c) cale_month_pane_g9_ParamLimits

0x4914,	// (0x0008972c) cale_month_pane_g9

0x4966,	// (0x0008977e) cale_month_pane_g10_ParamLimits

0x4966,	// (0x0008977e) cale_month_pane_g10

0x49b8,	// (0x000897d0) cale_month_pane_g11_ParamLimits

0x49b8,	// (0x000897d0) cale_month_pane_g11

0x4a0a,	// (0x00089822) cale_month_pane_g12_ParamLimits

0x4a0a,	// (0x00089822) cale_month_pane_g12

0x4a5c,	// (0x00089874) cale_month_pane_g13_ParamLimits

0x4a5c,	// (0x00089874) cale_month_pane_g13

0x000c,

0xf23f,	// (0x00094057) cale_month_pane_g_ParamLimits

0xf23f,	// (0x00094057) cale_month_pane_g

0x4ac0,	// (0x000898d8) cale_month_week_pane

0x4ae4,	// (0x000898fc) grid_cale_month_pane_ParamLimits

0x4ae4,	// (0x000898fc) grid_cale_month_pane

0x4b2d,	// (0x00089945) cale_month_day_heading_pane_t1

0x4bb3,	// (0x000899cb) cale_month_day_heading_pane_t2

0x4c2c,	// (0x00089a44) cale_month_day_heading_pane_t3

0x4ca5,	// (0x00089abd) cale_month_day_heading_pane_t4

0x4d26,	// (0x00089b3e) cale_month_day_heading_pane_t5

0x4daf,	// (0x00089bc7) cale_month_day_heading_pane_t6

0x4e38,	// (0x00089c50) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x00094072) cale_month_day_heading_pane_t

0x3a71,	// (0x00088889) bg_cale_side_pane_cp01

0x4ec9,	// (0x00089ce1) cale_month_week_pane_t1

0x4ee2,	// (0x00089cfa) cale_month_week_pane_t2

0x4efb,	// (0x00089d13) cale_month_week_pane_t3

0x4f14,	// (0x00089d2c) cale_month_week_pane_t4

0x4f2d,	// (0x00089d45) cale_month_week_pane_t5

0x4f46,	// (0x00089d5e) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x00094081) cale_month_week_pane_t

0x4f5f,	// (0x00089d77) cell_cale_month_pane_ParamLimits

0x4f5f,	// (0x00089d77) cell_cale_month_pane

0xb645,	// (0x0009045d) cell_cale_month_pane_g1

0x508d,	// (0x00089ea5) cell_cale_month_pane_t1_ParamLimits

0x508d,	// (0x00089ea5) cell_cale_month_pane_t1

0x3b86,	// (0x0008899e) grid_highlight_pane_cp08

0x0dd9,	// (0x00085bf1) main_smil_g1

0x50b9,	// (0x00089ed1) smil_status_pane

0x50c2,	// (0x00089eda) smil_text_pane

0x11d8,	// (0x00085ff0) bg_popup_call3_rect_pane_g8

0x11e0,	// (0x00085ff8) bg_popup_call3_rect_pane_g9

0x0008,

0xf502,	// (0x0009431a) bg_popup_call3_rect_pane_g

0x1397,	// (0x000861af) smil_status_volume_pane_g1

0x50d6,	// (0x00089eee) smil_status_pane_t1

0xcc62,	// (0x00091a7a) volume_smil_pane

0x50ed,	// (0x00089f05) list_smil_text_pane

0x50f7,	// (0x00089f0f) scroll_pane_cp011

0x5102,	// (0x00089f1a) smil_text_list_pane_t1_ParamLimits

0x5102,	// (0x00089f1a) smil_text_list_pane_t1

0xb651,	// (0x00090469) aid_volume_smil_ParamLimits

0xb651,	// (0x00090469) aid_volume_smil

0x0dd9,	// (0x00085bf1) smil_volume_pane_g1

0x0dd9,	// (0x00085bf1) smil_volume_pane_g2

0x0001,

0xf276,	// (0x0009408e) smil_volume_pane_g

0x35fa,	// (0x00088412) listscroll_cale_day_pane

0x513e,	// (0x00089f56) bg_cale_pane

0x5156,	// (0x00089f6e) list_cale_pane

0x5179,	// (0x00089f91) scroll_pane_cp09

0x518a,	// (0x00089fa2) cale_bg_pane_g1

0x5192,	// (0x00089faa) cale_bg_pane_g2

0x519a,	// (0x00089fb2) cale_bg_pane_g3

0x51a2,	// (0x00089fba) cale_bg_pane_g4

0x51aa,	// (0x00089fc2) cale_bg_pane_g5

0xb673,	// (0x0009048b) cale_bg_pane_g6

0xb67b,	// (0x00090493) cale_bg_pane_g7

0xb683,	// (0x0009049b) cale_bg_pane_g8

0xb68b,	// (0x000904a3) cale_bg_pane_g9

0x0008,

0xf27b,	// (0x00094093) cale_bg_pane_g

0x51b2,	// (0x00089fca) list_cale_time_pane_ParamLimits

0x51b2,	// (0x00089fca) list_cale_time_pane

0xb69b,	// (0x000904b3) list_cale_time_pane_g1_ParamLimits

0xb69b,	// (0x000904b3) list_cale_time_pane_g1

0xb6a7,	// (0x000904bf) list_cale_time_pane_g2_ParamLimits

0xb6a7,	// (0x000904bf) list_cale_time_pane_g2

0x51c7,	// (0x00089fdf) list_cale_time_pane_g3_ParamLimits

0x51c7,	// (0x00089fdf) list_cale_time_pane_g3

0x51d5,	// (0x00089fed) list_cale_time_pane_g4_ParamLimits

0x51d5,	// (0x00089fed) list_cale_time_pane_g4

0x51e3,	// (0x00089ffb) list_cale_time_pane_g5_ParamLimits

0x51e3,	// (0x00089ffb) list_cale_time_pane_g5

0x0005,

0xf28e,	// (0x000940a6) list_cale_time_pane_g_ParamLimits

0xf28e,	// (0x000940a6) list_cale_time_pane_g

0xb6c1,	// (0x000904d9) list_cale_time_pane_t1_ParamLimits

0xb6c1,	// (0x000904d9) list_cale_time_pane_t1

0xb6e9,	// (0x00090501) list_cale_time_pane_t2_ParamLimits

0xb6e9,	// (0x00090501) list_cale_time_pane_t2

0x5445,	// (0x0008a25d) aid_blid_cardinal_pane

0x5483,	// (0x0008a29b) compass_pane_t4

0xb711,	// (0x00090529) list_cale_time_pane_t4_ParamLimits

0xb711,	// (0x00090529) list_cale_time_pane_t4

0x5491,	// (0x0008a2a9) compass_pane_t5

0x549f,	// (0x0008a2b7) compass_pane_t6

0x54ad,	// (0x0008a2c5) compass_pane_t7

0xbc2b,	// (0x00090a43) navi_pane_cc_t1

0xbe1a,	// (0x00090c32) aid_phob_thumbnail_center_pane

0x58fe,	// (0x0008a716) main_postcard_pane_g4_ParamLimits

0x0002,

0xf29b,	// (0x000940b3) list_cale_time_pane_t_ParamLimits

0xf29b,	// (0x000940b3) list_cale_time_pane_t

0x07bd,	// (0x000855d5) bg_popup_window_pane_cp02_ParamLimits

0x07bd,	// (0x000855d5) bg_popup_window_pane_cp02

0xb739,	// (0x00090551) heading_pane_cp01_ParamLimits

0xb739,	// (0x00090551) heading_pane_cp01

0xb745,	// (0x0009055d) loc_req_pane_ParamLimits

0xb745,	// (0x0009055d) loc_req_pane

0xb755,	// (0x0009056d) loc_type_pane_ParamLimits

0xb755,	// (0x0009056d) loc_type_pane

0xb767,	// (0x0009057f) loc_type_pane_t1_ParamLimits

0xb767,	// (0x0009057f) loc_type_pane_t1

0xb779,	// (0x00090591) loc_type_pane_t2_ParamLimits

0xb779,	// (0x00090591) loc_type_pane_t2

0xb78b,	// (0x000905a3) loc_type_pane_t3_ParamLimits

0xb78b,	// (0x000905a3) loc_type_pane_t3

0x0002,

0xf2a2,	// (0x000940ba) loc_type_pane_t_ParamLimits

0xf2a2,	// (0x000940ba) loc_type_pane_t

0xb79d,	// (0x000905b5) list_loc_req_pane

0xb7a7,	// (0x000905bf) scroll_pane_cp012

0x51f1,	// (0x0008a009) list_single_loc_request_popup_menu_pane_ParamLimits

0x51f1,	// (0x0008a009) list_single_loc_request_popup_menu_pane

0xb7b2,	// (0x000905ca) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb7b2,	// (0x000905ca) list_single_loc_request_popup_menu_pane_g1

0xb7be,	// (0x000905d6) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb7be,	// (0x000905d6) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2a9,	// (0x000940c1) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2a9,	// (0x000940c1) list_single_loc_request_popup_menu_pane_g

0xb7ca,	// (0x000905e2) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb7ca,	// (0x000905e2) list_single_loc_request_popup_menu_pane_t1

0x0dc1,	// (0x00085bd9) bg_popup_window_pane_cp03_ParamLimits

0x0dc1,	// (0x00085bd9) bg_popup_window_pane_cp03

0x1b61,	// (0x00086979) heading_loc_req_pane_ParamLimits

0x1b61,	// (0x00086979) heading_loc_req_pane

0x51fe,	// (0x0008a016) popup_dyc_status_message_window_g1_ParamLimits

0x51fe,	// (0x0008a016) popup_dyc_status_message_window_g1

0x5212,	// (0x0008a02a) popup_dyc_status_message_window_t1_ParamLimits

0x5212,	// (0x0008a02a) popup_dyc_status_message_window_t1

0x5227,	// (0x0008a03f) popup_dyc_status_message_window_t2_ParamLimits

0x5227,	// (0x0008a03f) popup_dyc_status_message_window_t2

0x523c,	// (0x0008a054) popup_dyc_status_message_window_t3_ParamLimits

0x523c,	// (0x0008a054) popup_dyc_status_message_window_t3

0x0002,

0xf2ae,	// (0x000940c6) popup_dyc_status_message_window_t_ParamLimits

0xf2ae,	// (0x000940c6) popup_dyc_status_message_window_t

0x0b66,	// (0x0008597e) bg_heading_pane_cp01

0xb7e0,	// (0x000905f8) heading_loc_req_pane_g1

0xb7e8,	// (0x00090600) heading_loc_req_pane_g2

0xb7f0,	// (0x00090608) heading_loc_req_pane_g3

0x0002,

0xf2b5,	// (0x000940cd) heading_loc_req_pane_g

0xb7f8,	// (0x00090610) heading_loc_req_pane_t1

0xb817,	// (0x0009062f) bg_popup_sub_pane_cp01_ParamLimits

0xb817,	// (0x0009062f) bg_popup_sub_pane_cp01

0xb825,	// (0x0009063d) popup_cale_events_window_g1_ParamLimits

0xb825,	// (0x0009063d) popup_cale_events_window_g1

0xb845,	// (0x0009065d) popup_cale_events_window_g2_ParamLimits

0xb845,	// (0x0009065d) popup_cale_events_window_g2

0x0001,

0xf2d7,	// (0x000940ef) popup_cale_events_window_g_ParamLimits

0xf2d7,	// (0x000940ef) popup_cale_events_window_g

0xb865,	// (0x0009067d) popup_cale_events_window_t1_ParamLimits

0xb865,	// (0x0009067d) popup_cale_events_window_t1

0xb877,	// (0x0009068f) popup_cale_events_window_t2_ParamLimits

0xb877,	// (0x0009068f) popup_cale_events_window_t2

0xb8b5,	// (0x000906cd) popup_cale_events_window_t3_ParamLimits

0xb8b5,	// (0x000906cd) popup_cale_events_window_t3

0xb8ef,	// (0x00090707) popup_cale_events_window_t4_ParamLimits

0xb8ef,	// (0x00090707) popup_cale_events_window_t4

0x0003,

0xf2dc,	// (0x000940f4) popup_cale_events_window_t_ParamLimits

0xf2dc,	// (0x000940f4) popup_cale_events_window_t

0x5264,	// (0x0008a07c) call_type_pane

0x5274,	// (0x0008a08c) popup_call_status_window_g1

0x5288,	// (0x0008a0a0) popup_call_status_window_g2

0x529c,	// (0x0008a0b4) popup_call_status_window_g3

0x0002,

0xf2e5,	// (0x000940fd) popup_call_status_window_g

0xb925,	// (0x0009073d) call_type_pane_g1

0xb92e,	// (0x00090746) call_type_pane_g2

0x0001,

0xf2ec,	// (0x00094104) call_type_pane_g

0x0b66,	// (0x0008597e) bg_popup_sub_pane_cp02

0xb937,	// (0x0009074f) listscroll_popup_wml_pane

0xb93f,	// (0x00090757) list_wml_pane

0xb949,	// (0x00090761) scroll_pane_cp013

0xb954,	// (0x0009076c) list_single_graphic_popup_wml_pane_ParamLimits

0xb954,	// (0x0009076c) list_single_graphic_popup_wml_pane

0x0dd9,	// (0x00085bf1) list_single_graphic_popup_wml_pane_g1

0xb968,	// (0x00090780) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f1,	// (0x00094109) list_single_graphic_popup_wml_pane_g

0xb970,	// (0x00090788) list_single_graphic_popup_wml_pane_t1

0xb986,	// (0x0009079e) aid_call_pane

0x0db9,	// (0x00085bd1) popup_clock_analogue_window_g1

0x0db9,	// (0x00085bd1) popup_clock_analogue_window_g2

0xb98e,	// (0x000907a6) popup_clock_analogue_window_g3

0xb98e,	// (0x000907a6) popup_clock_analogue_window_g4

0x0dd9,	// (0x00085bf1) popup_clock_analogue_window_g5

0x0004,

0xf2f6,	// (0x0009410e) popup_clock_analogue_window_g

0xb996,	// (0x000907ae) popup_clock_analogue_window_t1

0xb9a4,	// (0x000907bc) clock_digital_number_pane_ParamLimits

0xb9a4,	// (0x000907bc) clock_digital_number_pane

0xb9b0,	// (0x000907c8) clock_digital_number_pane_cp02_ParamLimits

0xb9b0,	// (0x000907c8) clock_digital_number_pane_cp02

0xb9bc,	// (0x000907d4) clock_digital_number_pane_cp03_ParamLimits

0xb9bc,	// (0x000907d4) clock_digital_number_pane_cp03

0xb9c8,	// (0x000907e0) clock_digital_number_pane_cp04_ParamLimits

0xb9c8,	// (0x000907e0) clock_digital_number_pane_cp04

0xb9d8,	// (0x000907f0) clock_digital_separator_pane_ParamLimits

0xb9d8,	// (0x000907f0) clock_digital_separator_pane

0xb9e4,	// (0x000907fc) popup_clock_digital_window_t1

0x0dd9,	// (0x00085bf1) clock_digital_number_pane_g1

0x0dd9,	// (0x00085bf1) clock_digital_number_pane_g2

0x0001,

0xf276,	// (0x0009408e) clock_digital_number_pane_g

0x0dd9,	// (0x00085bf1) clock_digital_separator_pane_g1

0x0dd9,	// (0x00085bf1) clock_digital_separator_pane_g2

0x0001,

0xf276,	// (0x0009408e) clock_digital_separator_pane_g

0x0b66,	// (0x0008597e) bg_popup_window_pane_cp04

0xba01,	// (0x00090819) heading_pane_cp03

0x3bf8,	// (0x00088a10) listscroll_popup_gms_pane

0x0b66,	// (0x0008597e) grid_large_graphic_popup_pane

0xba0a,	// (0x00090822) listscroll_popup_gms_pane_g1

0xba13,	// (0x0009082b) listscroll_popup_gms_pane_g2

0x0001,

0xf301,	// (0x00094119) listscroll_popup_gms_pane_g

0xba1c,	// (0x00090834) scroll_pane_cp014

0x0e3c,	// (0x00085c54) cell_large_graphic_popup_pane_ParamLimits

0x0e3c,	// (0x00085c54) cell_large_graphic_popup_pane

0x3167,	// (0x00087f7f) cell_large_graphic_popup_pane_g1_ParamLimits

0x3167,	// (0x00087f7f) cell_large_graphic_popup_pane_g1

0xba25,	// (0x0009083d) cell_large_graphic_popup_pane_g2_ParamLimits

0xba25,	// (0x0009083d) cell_large_graphic_popup_pane_g2

0xba33,	// (0x0009084b) cell_large_graphic_popup_pane_g3_ParamLimits

0xba33,	// (0x0009084b) cell_large_graphic_popup_pane_g3

0xba41,	// (0x00090859) cell_large_graphic_popup_pane_g4_ParamLimits

0xba41,	// (0x00090859) cell_large_graphic_popup_pane_g4

0x0003,

0xf306,	// (0x0009411e) cell_large_graphic_popup_pane_g_ParamLimits

0xf306,	// (0x0009411e) cell_large_graphic_popup_pane_g

0x0b66,	// (0x0008597e) grid_highlight_pane_cp010

0x0dd9,	// (0x00085bf1) bg_popup_call_pane_g1

0xba52,	// (0x0009086a) list_single_graphic_popup_conf_pane_ParamLimits

0xba52,	// (0x0009086a) list_single_graphic_popup_conf_pane

0xba65,	// (0x0009087d) list_highlight_pane_cp01

0xba6e,	// (0x00090886) list_single_graphic_popup_conf_pane_g1

0xba76,	// (0x0009088e) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf30f,	// (0x00094127) list_single_graphic_popup_conf_pane_g

0xba7e,	// (0x00090896) list_single_graphic_popup_conf_pane_t1

0xba8c,	// (0x000908a4) linegrid_cams_pane_g1

0x52ab,	// (0x0008a0c3) linegrid_cams_pane_g2

0x35d2,	// (0x000883ea) linegrid_cams_pane_g3

0xba95,	// (0x000908ad) linegrid_cams_pane_g4

0x52b4,	// (0x0008a0cc) linegrid_cams_pane_g5

0x52bd,	// (0x0008a0d5) linegrid_cams_pane_g6

0x3bdf,	// (0x000889f7) linegrid_cams_pane_g7

0x0006,

0xf314,	// (0x0009412c) linegrid_cams_pane_g

0xba9e,	// (0x000908b6) popup_clock_analogue_window

0xba9e,	// (0x000908b6) popup_clock_digital_window

0x0b66,	// (0x0008597e) popup_phob_thumbnail_window

0x0dd9,	// (0x00085bf1) call_video_uplink_pane_g1

0xbaa7,	// (0x000908bf) call_video_uplink_pane_g2

0x0001,

0xf323,	// (0x0009413b) call_video_uplink_pane_g

0xbaaf,	// (0x000908c7) video_uplink_pane

0xbab7,	// (0x000908cf) mce_image_pane_g1

0x52c8,	// (0x0008a0e0) mce_image_pane_g2

0x52d2,	// (0x0008a0ea) mce_image_pane_g3

0x52da,	// (0x0008a0f2) mce_image_pane_g4

0x52e2,	// (0x0008a0fa) mce_image_pane_g5

0x0004,

0xf328,	// (0x00094140) mce_image_pane_g

0xbac1,	// (0x000908d9) control_top_pane_stacon_cp01_ParamLimits

0xbac1,	// (0x000908d9) control_top_pane_stacon_cp01

0xbad5,	// (0x000908ed) uni_indicator_pane_stacon_cp01_ParamLimits

0xbad5,	// (0x000908ed) uni_indicator_pane_stacon_cp01

0xbae6,	// (0x000908fe) bg_popup_sub_pane_cp03

0xbaf0,	// (0x00090908) chi_dic_find_pane

0x52ea,	// (0x0008a102) listscroll_chi_dic_pane

0xbaf8,	// (0x00090910) main_pane_chidic_g1

0xbb00,	// (0x00090918) chi_dic_find_pane_t1

0xbb0e,	// (0x00090926) find_chidic_pane

0xbb17,	// (0x0009092f) chi_dic_list_pane_ParamLimits

0xbb17,	// (0x0009092f) chi_dic_list_pane

0xbb28,	// (0x00090940) scroll_pane_cp020

0xbb30,	// (0x00090948) find_chidic_pane_t1

0x0b66,	// (0x0008597e) input_focus_pane_cp06

0x52fe,	// (0x0008a116) list_chi_dic_pane_ParamLimits

0x52fe,	// (0x0008a116) list_chi_dic_pane

0x5310,	// (0x0008a128) list_chi_dic_pane_t1_ParamLimits

0x5310,	// (0x0008a128) list_chi_dic_pane_t1

0x0b66,	// (0x0008597e) list_highlight_pane_cp020

0xbb3f,	// (0x00090957) bg_cale_heading_pane_g1

0x5323,	// (0x0008a13b) bg_cale_heading_pane_g2

0x532b,	// (0x0008a143) bg_cale_heading_pane_g3

0x5333,	// (0x0008a14b) bg_cale_heading_pane_g4

0x533d,	// (0x0008a155) bg_cale_heading_pane_g5

0x5347,	// (0x0008a15f) bg_cale_heading_pane_g6

0x534f,	// (0x0008a167) bg_cale_heading_pane_g7

0x5357,	// (0x0008a16f) bg_cale_heading_pane_g8

0x5361,	// (0x0008a179) bg_cale_heading_pane_g9

0x0008,

0xf333,	// (0x0009414b) bg_cale_heading_pane_g

0xbb3f,	// (0x00090957) bg_cale_side_pane_g1

0x536b,	// (0x0008a183) bg_cale_side_pane_g2

0x5373,	// (0x0008a18b) bg_cale_side_pane_g3

0x537b,	// (0x0008a193) bg_cale_side_pane_g4

0x5383,	// (0x0008a19b) bg_cale_side_pane_g5

0x538b,	// (0x0008a1a3) bg_cale_side_pane_g6

0x5393,	// (0x0008a1ab) bg_cale_side_pane_g7

0x539b,	// (0x0008a1b3) bg_cale_side_pane_g8

0x53a3,	// (0x0008a1bb) bg_cale_side_pane_g9

0x0008,

0xf346,	// (0x0009415e) bg_cale_side_pane_g

0x53ab,	// (0x0008a1c3) popup_call_status_window_ParamLimits

0x53ab,	// (0x0008a1c3) popup_call_status_window

0xbb47,	// (0x0009095f) stacon_top_pane

0xbb4f,	// (0x00090967) status_pane_ParamLimits

0xbb4f,	// (0x00090967) status_pane

0xbb64,	// (0x0009097c) status_small_pane

0xbb6c,	// (0x00090984) control_pane

0x0b66,	// (0x0008597e) stacon_bottom_pane

0xbb74,	// (0x0009098c) list_single_mce_smart_pane_t1_ParamLimits

0xbb74,	// (0x0009098c) list_single_mce_smart_pane_t1

0xbb87,	// (0x0009099f) list_single_mce_smart_pane_t2_ParamLimits

0xbb87,	// (0x0009099f) list_single_mce_smart_pane_t2

0x0001,

0xf359,	// (0x00094171) list_single_mce_smart_pane_t_ParamLimits

0xf359,	// (0x00094171) list_single_mce_smart_pane_t

0x53f4,	// (0x0008a20c) compass_pane

0x53fd,	// (0x0008a215) main_location2_pane_t1

0x540f,	// (0x0008a227) main_location2_pane_t2

0x5421,	// (0x0008a239) main_location2_pane_t3

0x0003,

0xf35e,	// (0x00094176) main_location2_pane_t

0xbba6,	// (0x000909be) compass_pane_g1_ParamLimits

0xbba6,	// (0x000909be) compass_pane_g1

0x5465,	// (0x0008a27d) compass_pane_t1

0x5474,	// (0x0008a28c) compass_pane_t2

0x0005,

0xf367,	// (0x0009417f) compass_pane_t

0x54bb,	// (0x0008a2d3) text_secondary_cp61

0xbc22,	// (0x00090a3a) navi_pane_cams_g5

0xbc9e,	// (0x00090ab6) navi_pane_im_t1

0xbcac,	// (0x00090ac4) navi_pane_mp_g1_ParamLimits

0xbcac,	// (0x00090ac4) navi_pane_mp_g1

0xbcc0,	// (0x00090ad8) navi_pane_mp_g2_ParamLimits

0xbcc0,	// (0x00090ad8) navi_pane_mp_g2

0xbccc,	// (0x00090ae4) navi_pane_mp_g3_ParamLimits

0xbccc,	// (0x00090ae4) navi_pane_mp_g3

0x0002,

0xf37b,	// (0x00094193) navi_pane_mp_g_ParamLimits

0xf37b,	// (0x00094193) navi_pane_mp_g

0xbcd8,	// (0x00090af0) navi_pane_mp_t1

0xbce6,	// (0x00090afe) navi_pane_mp_t2

0x0002,

0xf382,	// (0x0009419a) navi_pane_mp_t

0xbd51,	// (0x00090b69) navi_pane_vt_g1

0xbcd8,	// (0x00090af0) navi_pane_vt_t1

0xbd59,	// (0x00090b71) navi_slider_pane

0x3bf8,	// (0x00088a10) zooming_pane

0xbd69,	// (0x00090b81) navi_slider_pane_g1

0xbd72,	// (0x00090b8a) navi_slider_pane_g2

0x0006,

0xf389,	// (0x000941a1) navi_slider_pane_g

0xbd9f,	// (0x00090bb7) aid_levels_zoom

0xbda7,	// (0x00090bbf) zooming_pane_g1

0xbdaf,	// (0x00090bc7) zooming_pane_g2

0xbdaf,	// (0x00090bc7) zooming_pane_g3

0x0002,

0xf398,	// (0x000941b0) zooming_pane_g

0xbdb7,	// (0x00090bcf) level_10_zoom

0xbdc0,	// (0x00090bd8) level_11_zoom

0xbdc9,	// (0x00090be1) level_1_zoom

0xbdd2,	// (0x00090bea) level_2_zoom

0xbddb,	// (0x00090bf3) level_3_zoom

0xbde4,	// (0x00090bfc) level_4_zoom

0xbded,	// (0x00090c05) level_5_zoom

0xbdf6,	// (0x00090c0e) level_6_zoom

0xbdff,	// (0x00090c17) level_7_zoom

0xbe08,	// (0x00090c20) level_8_zoom

0xbe11,	// (0x00090c29) level_9_zoom

0xbe22,	// (0x00090c3a) popup_phob_thumbnail_window_g1

0xbe2a,	// (0x00090c42) popup_phob_thumbnail_window_g2

0x0001,

0xf39f,	// (0x000941b7) popup_phob_thumbnail_window_g

0x5fa4,	// (0x0008adbc) level_1_location

0x5fac,	// (0x0008adc4) level_2_location

0x5fb4,	// (0x0008adcc) level_3_location

0x5fbc,	// (0x0008add4) level_4_location

0x3bf8,	// (0x00088a10) level_5_location

0x550c,	// (0x0008a324) mce_icon_pane_g1

0x5516,	// (0x0008a32e) mce_icon_pane_g2

0x0001,

0xf3a4,	// (0x000941bc) mce_icon_pane_g

0x1f39,	// (0x00086d51) main_mup_pane_g1_ParamLimits

0x1f39,	// (0x00086d51) main_mup_pane_g1

0x1f39,	// (0x00086d51) main_mup_pane_g2_ParamLimits

0x1f39,	// (0x00086d51) main_mup_pane_g2

0x1f39,	// (0x00086d51) main_mup_pane_g3_ParamLimits

0x1f39,	// (0x00086d51) main_mup_pane_g3

0x1f39,	// (0x00086d51) main_mup_pane_g4_ParamLimits

0x1f39,	// (0x00086d51) main_mup_pane_g4

0x1f39,	// (0x00086d51) main_mup_pane_g5_ParamLimits

0x1f39,	// (0x00086d51) main_mup_pane_g5

0x1f39,	// (0x00086d51) main_mup_pane_g6_ParamLimits

0x1f39,	// (0x00086d51) main_mup_pane_g6

0x1f39,	// (0x00086d51) main_mup_pane_g7_ParamLimits

0x1f39,	// (0x00086d51) main_mup_pane_g7

0x1f39,	// (0x00086d51) main_mup_pane_g8_ParamLimits

0x1f39,	// (0x00086d51) main_mup_pane_g8

0x1f39,	// (0x00086d51) main_mup_pane_g9_ParamLimits

0x1f39,	// (0x00086d51) main_mup_pane_g9

0x1f39,	// (0x00086d51) main_mup_pane_g10_ParamLimits

0x1f39,	// (0x00086d51) main_mup_pane_g10

0x1f39,	// (0x00086d51) main_mup_pane_g11_ParamLimits

0x1f39,	// (0x00086d51) main_mup_pane_g11

0x3167,	// (0x00087f7f) main_mup_pane_g12_ParamLimits

0x3167,	// (0x00087f7f) main_mup_pane_g12

0x1f39,	// (0x00086d51) main_mup_pane_g13_ParamLimits

0x1f39,	// (0x00086d51) main_mup_pane_g13

0x000c,

0xf3a9,	// (0x000941c1) main_mup_pane_g_ParamLimits

0xf3a9,	// (0x000941c1) main_mup_pane_g

0x1d24,	// (0x00086b3c) main_mup_pane_t1_ParamLimits

0x1d24,	// (0x00086b3c) main_mup_pane_t1

0x1d24,	// (0x00086b3c) main_mup_pane_t2_ParamLimits

0x1d24,	// (0x00086b3c) main_mup_pane_t2

0x1d24,	// (0x00086b3c) main_mup_pane_t3_ParamLimits

0x1d24,	// (0x00086b3c) main_mup_pane_t3

0x3c61,	// (0x00088a79) main_mup_pane_t4_ParamLimits

0x3c61,	// (0x00088a79) main_mup_pane_t4

0x3c61,	// (0x00088a79) main_mup_pane_t5_ParamLimits

0x3c61,	// (0x00088a79) main_mup_pane_t5

0xbe32,	// (0x00090c4a) main_mup_pane_t6_ParamLimits

0xbe32,	// (0x00090c4a) main_mup_pane_t6

0x0005,

0xf3c4,	// (0x000941dc) main_mup_pane_t_ParamLimits

0xf3c4,	// (0x000941dc) main_mup_pane_t

0x0e3c,	// (0x00085c54) mup_progress_pane_ParamLimits

0x0e3c,	// (0x00085c54) mup_progress_pane

0x1314,	// (0x0008612c) mup_visualizer_pane_ParamLimits

0x1314,	// (0x0008612c) mup_visualizer_pane

0x1314,	// (0x0008612c) mup_volume_pane_ParamLimits

0x1314,	// (0x0008612c) mup_volume_pane

0x3175,	// (0x00087f8d) mup_visualizer_pane_g1_ParamLimits

0x3175,	// (0x00087f8d) mup_visualizer_pane_g1

0xbe46,	// (0x00090c5e) mup_visualizer_pane_g2_ParamLimits

0xbe46,	// (0x00090c5e) mup_visualizer_pane_g2

0x3167,	// (0x00087f7f) mup_visualizer_pane_g3_ParamLimits

0x3167,	// (0x00087f7f) mup_visualizer_pane_g3

0x0002,

0xf3d1,	// (0x000941e9) mup_visualizer_pane_g_ParamLimits

0xf3d1,	// (0x000941e9) mup_visualizer_pane_g

0x3de5,	// (0x00088bfd) mup_volume_pane_g1

0x3de5,	// (0x00088bfd) mup_volume_pane_g2

0x0001,

0xf3d8,	// (0x000941f0) mup_volume_pane_g

0x3de5,	// (0x00088bfd) mup_progress_pane_g1

0x3de5,	// (0x00088bfd) mup_progress_pane_g2

0x3de5,	// (0x00088bfd) mup_progress_pane_g3

0x0002,

0xf3dd,	// (0x000941f5) mup_progress_pane_g

0x0b66,	// (0x0008597e) bg_popup_window_pane_cp05

0xbe54,	// (0x00090c6c) heading_pane_cp02_ParamLimits

0xbe54,	// (0x00090c6c) heading_pane_cp02

0xbe6e,	// (0x00090c86) list_popup_blid_pane

0xbe76,	// (0x00090c8e) list_blid_sat_info_pane_ParamLimits

0xbe76,	// (0x00090c8e) list_blid_sat_info_pane

0xbe89,	// (0x00090ca1) list_blid_sat_info_pane_g1

0xbe91,	// (0x00090ca9) list_blid_sat_info_pane_t1

0x5616,	// (0x0008a42e) mup_equalizer_pane_ParamLimits

0x5616,	// (0x0008a42e) mup_equalizer_pane

0x562f,	// (0x0008a447) mup_equalizer_pane_cp1_ParamLimits

0x562f,	// (0x0008a447) mup_equalizer_pane_cp1

0x564c,	// (0x0008a464) mup_equalizer_pane_cp2_ParamLimits

0x564c,	// (0x0008a464) mup_equalizer_pane_cp2

0x5669,	// (0x0008a481) mup_equalizer_pane_cp3_ParamLimits

0x5669,	// (0x0008a481) mup_equalizer_pane_cp3

0x568a,	// (0x0008a4a2) mup_equalizer_pane_cp4_ParamLimits

0x568a,	// (0x0008a4a2) mup_equalizer_pane_cp4

0x56ab,	// (0x0008a4c3) mup_equalizer_pane_cp5

0x56bf,	// (0x0008a4d7) mup_equalizer_pane_cp6

0x56d3,	// (0x0008a4eb) mup_equalizer_pane_cp7

0x1258,	// (0x00086070) bg_popup_call_poc_act_pane_g9

0x1260,	// (0x00086078) bg_popup_call_poc_act_pane_g10

0x1268,	// (0x00086080) bg_popup_call_poc_act_pane_g11

0x000a,

0x0dc1,	// (0x00085bd9) mup_scale_pane

0x0dd9,	// (0x00085bf1) mup_scale_pane_g1

0xbe9f,	// (0x00090cb7) mup_scale_pane_g2

0x0006,

0xf3f9,	// (0x00094211) mup_scale_pane_g

0xbec3,	// (0x00090cdb) msg_data_pane

0xbecb,	// (0x00090ce3) scroll_pane_cp017

0x56f9,	// (0x0008a511) bg_list_pane_cp04_ParamLimits

0x56f9,	// (0x0008a511) bg_list_pane_cp04

0xbed3,	// (0x00090ceb) msg_data_pane_g1

0x5719,	// (0x0008a531) msg_data_pane_g2

0x5723,	// (0x0008a53b) msg_data_pane_g3

0x572b,	// (0x0008a543) msg_data_pane_g4

0x5733,	// (0x0008a54b) msg_data_pane_g5

0x573b,	// (0x0008a553) msg_data_pane_g6

0x5743,	// (0x0008a55b) msg_data_pane_g7

0x0006,

0xf408,	// (0x00094220) msg_data_pane_g

0x574b,	// (0x0008a563) msg_text_pane_ParamLimits

0x574b,	// (0x0008a563) msg_text_pane

0x5774,	// (0x0008a58c) qrid_highlight_pane_cp011_ParamLimits

0x5774,	// (0x0008a58c) qrid_highlight_pane_cp011

0x0b66,	// (0x0008597e) msg_body_pane

0x0b66,	// (0x0008597e) msg_header_pane

0xbee4,	// (0x00090cfc) input_focus_pane_cp07

0x5798,	// (0x0008a5b0) msg_header_pane_t1_ParamLimits

0x5798,	// (0x0008a5b0) msg_header_pane_t1

0x57ae,	// (0x0008a5c6) msg_header_pane_t2_ParamLimits

0x57ae,	// (0x0008a5c6) msg_header_pane_t2

0x0001,

0xf41c,	// (0x00094234) msg_header_pane_t_ParamLimits

0xf41c,	// (0x00094234) msg_header_pane_t

0xbef9,	// (0x00090d11) msg_body_pane_g1

0x57c5,	// (0x0008a5dd) msg_body_pane_t1_ParamLimits

0x57c5,	// (0x0008a5dd) msg_body_pane_t1

0x57f6,	// (0x0008a60e) msg_body_pane_t2_ParamLimits

0x57f6,	// (0x0008a60e) msg_body_pane_t2

0x5808,	// (0x0008a620) msg_body_pane_t3_ParamLimits

0x5808,	// (0x0008a620) msg_body_pane_t3

0x0002,

0xf421,	// (0x00094239) msg_body_pane_t_ParamLimits

0xf421,	// (0x00094239) msg_body_pane_t

0x5854,	// (0x0008a66c) main_viewer_pane_g1_ParamLimits

0x5854,	// (0x0008a66c) main_viewer_pane_g1

0x5862,	// (0x0008a67a) main_viewer_pane_g2_ParamLimits

0x5862,	// (0x0008a67a) main_viewer_pane_g2

0x5870,	// (0x0008a688) main_viewer_pane_g3_ParamLimits

0x5870,	// (0x0008a688) main_viewer_pane_g3

0x587f,	// (0x0008a697) main_viewer_pane_g4_ParamLimits

0x587f,	// (0x0008a697) main_viewer_pane_g4

0xbf19,	// (0x00090d31) main_viewer_pane_g5_ParamLimits

0xbf19,	// (0x00090d31) main_viewer_pane_g5

0xbf19,	// (0x00090d31) main_viewer_pane_g7_ParamLimits

0xbf19,	// (0x00090d31) main_viewer_pane_g7

0xb7b2,	// (0x000905ca) main_viewer_pane_g8_ParamLimits

0xb7b2,	// (0x000905ca) main_viewer_pane_g8

0x0007,

0xf431,	// (0x00094249) main_viewer_pane_g_ParamLimits

0xf431,	// (0x00094249) main_viewer_pane_g

0xbf37,	// (0x00090d4f) viewer_content_pane_ParamLimits

0xbf37,	// (0x00090d4f) viewer_content_pane

0x58bb,	// (0x0008a6d3) main_postcard_pane_g1_ParamLimits

0x58bb,	// (0x0008a6d3) main_postcard_pane_g1

0x58d1,	// (0x0008a6e9) main_postcard_pane_g2_ParamLimits

0x58d1,	// (0x0008a6e9) main_postcard_pane_g2

0x58e7,	// (0x0008a6ff) main_postcard_pane_g3_ParamLimits

0x58e7,	// (0x0008a6ff) main_postcard_pane_g3

0x0005,

0xf442,	// (0x0009425a) main_postcard_pane_g_ParamLimits

0xf442,	// (0x0009425a) main_postcard_pane_g

0x58fe,	// (0x0008a716) main_postcard_pane_g4

0x13aa,	// (0x000861c2) smil_status_volume_pane_g2

0x5941,	// (0x0008a759) postcard_pane_ParamLimits

0x5941,	// (0x0008a759) postcard_pane

0xbf45,	// (0x00090d5d) postcard_pane_g1_ParamLimits

0xbf45,	// (0x00090d5d) postcard_pane_g1

0x5983,	// (0x0008a79b) postcard_pane_g2_ParamLimits

0x5983,	// (0x0008a79b) postcard_pane_g2

0x598f,	// (0x0008a7a7) postcard_pane_g3_ParamLimits

0x598f,	// (0x0008a7a7) postcard_pane_g3

0xbf53,	// (0x00090d6b) postcard_pane_g4_ParamLimits

0xbf53,	// (0x00090d6b) postcard_pane_g4

0x599b,	// (0x0008a7b3) postcard_pane_g5_ParamLimits

0x599b,	// (0x0008a7b3) postcard_pane_g5

0x59b0,	// (0x0008a7c8) postcard_pane_g6_ParamLimits

0x59b0,	// (0x0008a7c8) postcard_pane_g6

0xbf45,	// (0x00090d5d) postcard_pane_g7_ParamLimits

0xbf45,	// (0x00090d5d) postcard_pane_g7

0x0006,

0xf44f,	// (0x00094267) postcard_pane_g_ParamLimits

0xf44f,	// (0x00094267) postcard_pane_g

0x59c4,	// (0x0008a7dc) main_mp2_pane_g1_ParamLimits

0x59c4,	// (0x0008a7dc) main_mp2_pane_g1

0x59d0,	// (0x0008a7e8) main_mp2_pane_g2_ParamLimits

0x59d0,	// (0x0008a7e8) main_mp2_pane_g2

0x59dc,	// (0x0008a7f4) main_mp2_pane_g3_ParamLimits

0x59dc,	// (0x0008a7f4) main_mp2_pane_g3

0x0002,

0xf45e,	// (0x00094276) main_mp2_pane_g_ParamLimits

0xf45e,	// (0x00094276) main_mp2_pane_g

0x59e8,	// (0x0008a800) main_mp2_pane_t1_ParamLimits

0x59e8,	// (0x0008a800) main_mp2_pane_t1

0x59fd,	// (0x0008a815) main_mp2_pane_t2_ParamLimits

0x59fd,	// (0x0008a815) main_mp2_pane_t2

0x5a0f,	// (0x0008a827) main_mp2_pane_t3_ParamLimits

0x5a0f,	// (0x0008a827) main_mp2_pane_t3

0x0002,

0xf465,	// (0x0009427d) main_mp2_pane_t_ParamLimits

0xf465,	// (0x0009427d) main_mp2_pane_t

0xbf61,	// (0x00090d79) pec_content_pane_ParamLimits

0xbf61,	// (0x00090d79) pec_content_pane

0x43c4,	// (0x000891dc) scroll_pane_cp015

0xbf73,	// (0x00090d8b) pec_attribute_pane_ParamLimits

0xbf73,	// (0x00090d8b) pec_attribute_pane

0x5a21,	// (0x0008a839) pec_content_pane_g1_ParamLimits

0x5a21,	// (0x0008a839) pec_content_pane_g1

0xbf83,	// (0x00090d9b) pec_content_pane_t1_ParamLimits

0xbf83,	// (0x00090d9b) pec_content_pane_t1

0xbf95,	// (0x00090dad) pec_content_pane_t2_ParamLimits

0xbf95,	// (0x00090dad) pec_content_pane_t2

0x0001,

0xf46c,	// (0x00094284) pec_content_pane_t_ParamLimits

0xf46c,	// (0x00094284) pec_content_pane_t

0x5a2d,	// (0x0008a845) list_single_graphic_pane_cp01_ParamLimits

0x5a2d,	// (0x0008a845) list_single_graphic_pane_cp01

0x0dc1,	// (0x00085bd9) bg_popup_sub_pane_cp04

0xbfa7,	// (0x00090dbf) popup_mup_playback_window_g1

0xbfb3,	// (0x00090dcb) popup_mup_playback_window_t1

0xbfc8,	// (0x00090de0) popup_mup_playback_window_t2

0x0001,

0xf471,	// (0x00094289) popup_mup_playback_window_t

0xbfff,	// (0x00090e17) main_image_pane_g1_ParamLimits

0xbfff,	// (0x00090e17) main_image_pane_g1

0xc042,	// (0x00090e5a) scroll_pane_cp018_ParamLimits

0xc042,	// (0x00090e5a) scroll_pane_cp018

0xc05a,	// (0x00090e72) scroll_pane_cp016_ParamLimits

0xc05a,	// (0x00090e72) scroll_pane_cp016

0x5afa,	// (0x0008a912) smil2_image_pane_ParamLimits

0x5afa,	// (0x0008a912) smil2_image_pane

0x5b2a,	// (0x0008a942) smil2_root_pane_ParamLimits

0x5b2a,	// (0x0008a942) smil2_root_pane

0x5b62,	// (0x0008a97a) smil2_text_pane_ParamLimits

0x5b62,	// (0x0008a97a) smil2_text_pane

0x0b66,	// (0x0008597e) bg_list_pane_cp06

0xc096,	// (0x00090eae) grid_radio_pane

0x0b66,	// (0x0008597e) bg_popup_window_pane_cp06

0xc09e,	// (0x00090eb6) main_fmradio_pane_t1

0x1270,	// (0x00086088) heading_pane_cp04

0xc0ac,	// (0x00090ec4) main_fmradio_pane_t2

0x1278,	// (0x00086090) popup_cale_lunar_info_window_g1

0xc0ba,	// (0x00090ed2) main_fmradio_pane_t3

0x1280,	// (0x00086098) popup_cale_lunar_info_window_g2

0xc0c8,	// (0x00090ee0) main_fmradio_pane_t4

0x0001,

0xc0d6,	// (0x00090eee) main_fmradio_pane_t5

0x0004,

0xf551,	// (0x00094369) popup_cale_lunar_info_window_g

0xf486,	// (0x0009429e) main_fmradio_pane_t

0xc0e4,	// (0x00090efc) wait_bar_pane_cp03

0xc0ec,	// (0x00090f04) cell_fmradio_pane_ParamLimits

0xc0ec,	// (0x00090f04) cell_fmradio_pane

0xbf45,	// (0x00090d5d) cell_fmradio_pane_g1_ParamLimits

0xbf45,	// (0x00090d5d) cell_fmradio_pane_g1

0x0b66,	// (0x0008597e) grid_highlight_pane_cp011

0xc0ff,	// (0x00090f17) poc_content_pane_ParamLimits

0xc0ff,	// (0x00090f17) poc_content_pane

0xc111,	// (0x00090f29) scroll_pane_cp019

0x5be2,	// (0x0008a9fa) popup_call_poc_act_window_ParamLimits

0x5be2,	// (0x0008a9fa) popup_call_poc_act_window

0x5c06,	// (0x0008aa1e) popup_call_poc_inact_window_ParamLimits

0x5c06,	// (0x0008aa1e) popup_call_poc_inact_window

0xf528,	// (0x00094340) bg_popup_call_poc_act_pane_g

0x11e8,	// (0x00086000) bg_popup_call_poc_inact_pane_g1

0x11f0,	// (0x00086008) bg_popup_call_poc_inact_pane_g2

0xc119,	// (0x00090f31) popup_call_poc_act_window_g2

0x11f8,	// (0x00086010) bg_popup_call_poc_inact_pane_g3

0x1200,	// (0x00086018) bg_popup_call_poc_inact_pane_g4

0x1208,	// (0x00086020) bg_popup_call_poc_inact_pane_g5

0xc121,	// (0x00090f39) popup_call_poc_act_window_t1_ParamLimits

0xc121,	// (0x00090f39) popup_call_poc_act_window_t1

0xc149,	// (0x00090f61) popup_call_poc_act_window_t2_ParamLimits

0xc149,	// (0x00090f61) popup_call_poc_act_window_t2

0xc171,	// (0x00090f89) popup_call_poc_act_window_t3_ParamLimits

0xc171,	// (0x00090f89) popup_call_poc_act_window_t3

0xc199,	// (0x00090fb1) popup_call_poc_act_window_t4_ParamLimits

0xc199,	// (0x00090fb1) popup_call_poc_act_window_t4

0x0003,

0xf491,	// (0x000942a9) popup_call_poc_act_window_t_ParamLimits

0xf491,	// (0x000942a9) popup_call_poc_act_window_t

0x1210,	// (0x00086028) bg_popup_call_poc_inact_pane_g6

0x1218,	// (0x00086030) bg_popup_call_poc_inact_pane_g7

0x1220,	// (0x00086038) bg_popup_call_poc_inact_pane_g8

0xc1ab,	// (0x00090fc3) popup_call_poc_inact_window_g2

0x1228,	// (0x00086040) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf515,	// (0x0009432d) bg_popup_call_poc_inact_pane_g

0xc1b3,	// (0x00090fcb) popup_call_poc_inact_window_t1_ParamLimits

0xc1b3,	// (0x00090fcb) popup_call_poc_inact_window_t1

0xc1c8,	// (0x00090fe0) popup_call_poc_inact_window_t2_ParamLimits

0xc1c8,	// (0x00090fe0) popup_call_poc_inact_window_t2

0xc1dd,	// (0x00090ff5) popup_call_poc_inact_window_t3_ParamLimits

0xc1dd,	// (0x00090ff5) popup_call_poc_inact_window_t3

0x0002,

0xf49a,	// (0x000942b2) popup_call_poc_inact_window_t_ParamLimits

0xf49a,	// (0x000942b2) popup_call_poc_inact_window_t

0x1322,	// (0x0008613a) context_pane_ParamLimits

0x6494,	// (0x0008b2ac) signal_pane_ParamLimits

0x3bf8,	// (0x00088a10) main_call2_pane

0xcc2e,	// (0x00091a46) popup_phob_thumbnail2_window_ParamLimits

0xcc2e,	// (0x00091a46) popup_phob_thumbnail2_window

0xbf01,	// (0x00090d19) aid_hotspot_pointer_arrow_pane

0xbf09,	// (0x00090d21) aid_hotspot_pointer_hand_pane

0x5f6e,	// (0x0008ad86) phob_pre_status_pane_g5

0x0de3,	// (0x00085bfb) cams_zoom_pane_ParamLimits

0x0de3,	// (0x00085bfb) image_vga_pane_ParamLimits

0x3167,	// (0x00087f7f) main_camera_pane_g1_ParamLimits

0x3167,	// (0x00087f7f) main_camera_pane_g2_ParamLimits

0x3167,	// (0x00087f7f) main_camera_pane_g3_ParamLimits

0x3167,	// (0x00087f7f) main_camera_pane_g4_ParamLimits

0x3167,	// (0x00087f7f) main_camera_pane_g5_ParamLimits

0x3167,	// (0x00087f7f) main_camera_pane_g6_ParamLimits

0x3167,	// (0x00087f7f) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x00093fdd) main_camera_pane_g_ParamLimits

0x3c61,	// (0x00088a79) main_camera_pane_t1_ParamLimits

0x3c61,	// (0x00088a79) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x00093fee) main_camera_pane_t_ParamLimits

0x0dc1,	// (0x00085bd9) bg_popup_preview_window_pane_cp01_ParamLimits

0x0dc1,	// (0x00085bd9) bg_popup_preview_window_pane_cp01

0xc1f2,	// (0x0009100a) popup_phob_thumbnail2_window_g1_ParamLimits

0xc1f2,	// (0x0009100a) popup_phob_thumbnail2_window_g1

0x0b66,	// (0x0008597e) call2_cli_visual_pane

0x5c3a,	// (0x0008aa52) popup_call2_audio_conf_window_ParamLimits

0x5c3a,	// (0x0008aa52) popup_call2_audio_conf_window

0x5c5a,	// (0x0008aa72) popup_call2_audio_first_window_ParamLimits

0x5c5a,	// (0x0008aa72) popup_call2_audio_first_window

0x5cf0,	// (0x0008ab08) popup_call2_audio_in_window_ParamLimits

0x5cf0,	// (0x0008ab08) popup_call2_audio_in_window

0x5d38,	// (0x0008ab50) popup_call2_audio_out_window_ParamLimits

0x5d38,	// (0x0008ab50) popup_call2_audio_out_window

0x5da2,	// (0x0008abba) popup_call2_audio_second_window_ParamLimits

0x5da2,	// (0x0008abba) popup_call2_audio_second_window

0x5e08,	// (0x0008ac20) popup_call2_audio_wait_window_ParamLimits

0x5e08,	// (0x0008ac20) popup_call2_audio_wait_window

0x0b66,	// (0x0008597e) bg_popup_call2_act_pane_cp03

0x0da3,	// (0x00085bbb) list_conf_pane_cp

0xc1fe,	// (0x00091016) popup_call2_audio_conf_window_t1

0xba52,	// (0x0009086a) list_single_graphic_popup_conf2_pane_ParamLimits

0xba52,	// (0x0009086a) list_single_graphic_popup_conf2_pane

0xba65,	// (0x0009087d) list_highlight_pane_cp04

0xc20c,	// (0x00091024) list_single_graphic_popup_conf2_pane_g1

0xba76,	// (0x0009088e) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4a1,	// (0x000942b9) list_single_graphic_popup_conf2_pane_g

0xc216,	// (0x0009102e) list_single_graphic_popup_conf2_pane_t1

0xc224,	// (0x0009103c) bg_popup_call2_act_pane_cp01_ParamLimits

0xc224,	// (0x0009103c) bg_popup_call2_act_pane_cp01

0xc2ae,	// (0x000910c6) call_type_pane_cp05_ParamLimits

0xc2ae,	// (0x000910c6) call_type_pane_cp05

0xc302,	// (0x0009111a) popup_call2_audio_second_window_g1_ParamLimits

0xc302,	// (0x0009111a) popup_call2_audio_second_window_g1

0xc356,	// (0x0009116e) popup_call2_audio_second_window_g2_ParamLimits

0xc356,	// (0x0009116e) popup_call2_audio_second_window_g2

0x0002,

0xf4a6,	// (0x000942be) popup_call2_audio_second_window_g_ParamLimits

0xf4a6,	// (0x000942be) popup_call2_audio_second_window_g

0xc3bb,	// (0x000911d3) popup_call2_audio_second_window_t1_ParamLimits

0xc3bb,	// (0x000911d3) popup_call2_audio_second_window_t1

0xc476,	// (0x0009128e) popup_call2_audio_second_window_t2_ParamLimits

0xc476,	// (0x0009128e) popup_call2_audio_second_window_t2

0xc4c9,	// (0x000912e1) popup_call2_audio_second_window_t3_ParamLimits

0xc4c9,	// (0x000912e1) popup_call2_audio_second_window_t3

0x0003,

0xf4ad,	// (0x000942c5) popup_call2_audio_second_window_t_ParamLimits

0xf4ad,	// (0x000942c5) popup_call2_audio_second_window_t

0x0b66,	// (0x0008597e) bg_popup_call2_in_pane_cp02

0x0b70,	// (0x00085988) call_type_pane_cp04

0x5e42,	// (0x0008ac5a) popup_call2_audio_wait_window_g1

0x5e4a,	// (0x0008ac62) popup_call2_audio_wait_window_g2

0x0001,

0xf4b6,	// (0x000942ce) popup_call2_audio_wait_window_g

0x0b88,	// (0x000859a0) popup_call2_audio_wait_window_t3

0xc5bc,	// (0x000913d4) bg_popup_call2_act_pane_ParamLimits

0xc5bc,	// (0x000913d4) bg_popup_call2_act_pane

0xc67c,	// (0x00091494) call_type_pane_cp03_ParamLimits

0xc67c,	// (0x00091494) call_type_pane_cp03

0xc6e0,	// (0x000914f8) popup_call2_audio_first_window_g1_ParamLimits

0xc6e0,	// (0x000914f8) popup_call2_audio_first_window_g1

0xc750,	// (0x00091568) popup_call2_audio_first_window_g2_ParamLimits

0xc750,	// (0x00091568) popup_call2_audio_first_window_g2

0xc7b4,	// (0x000915cc) popup_call2_audio_first_window_g3_ParamLimits

0xc7b4,	// (0x000915cc) popup_call2_audio_first_window_g3

0x0004,

0xf4bb,	// (0x000942d3) popup_call2_audio_first_window_g_ParamLimits

0xf4bb,	// (0x000942d3) popup_call2_audio_first_window_g

0xc83c,	// (0x00091654) popup_call2_audio_first_window_t1_ParamLimits

0xc83c,	// (0x00091654) popup_call2_audio_first_window_t1

0xc93f,	// (0x00091757) popup_call2_audio_first_window_t4_ParamLimits

0xc93f,	// (0x00091757) popup_call2_audio_first_window_t4

0xca22,	// (0x0009183a) popup_call2_audio_first_window_t5_ParamLimits

0xca22,	// (0x0009183a) popup_call2_audio_first_window_t5

0x0003,

0xf4c6,	// (0x000942de) popup_call2_audio_first_window_t_ParamLimits

0xf4c6,	// (0x000942de) popup_call2_audio_first_window_t

0x0db9,	// (0x00085bd1) bg_popup_call2_act_pane_g1

0x1288,	// (0x000860a0) popup_cale_lunar_info_window_t1

0x1296,	// (0x000860ae) popup_cale_lunar_info_window_t2

0x12a4,	// (0x000860bc) popup_cale_lunar_info_window_t3

0x0b66,	// (0x0008597e) bg_popup_call2_bubble_pane

0xcb23,	// (0x0009193b) bg_popup_call2_in_pane_cp01_ParamLimits

0xcb23,	// (0x0009193b) bg_popup_call2_in_pane_cp01

0x0842,	// (0x0008565a) call_type_pane_cp02

0x5e52,	// (0x0008ac6a) popup_call2_audio_out_window_g1_ParamLimits

0x5e52,	// (0x0008ac6a) popup_call2_audio_out_window_g1

0xcb6b,	// (0x00091983) popup_call2_audio_out_window_g2_ParamLimits

0xcb6b,	// (0x00091983) popup_call2_audio_out_window_g2

0x5e7e,	// (0x0008ac96) popup_call2_audio_out_window_g3_ParamLimits

0x5e7e,	// (0x0008ac96) popup_call2_audio_out_window_g3

0x0003,

0xf4cf,	// (0x000942e7) popup_call2_audio_out_window_g_ParamLimits

0xf4cf,	// (0x000942e7) popup_call2_audio_out_window_g

0xcba2,	// (0x000919ba) popup_call2_audio_out_window_t1_ParamLimits

0xcba2,	// (0x000919ba) popup_call2_audio_out_window_t1

0x0e4a,	// (0x00085c62) popup_call2_audio_out_window_t2_ParamLimits

0x0e4a,	// (0x00085c62) popup_call2_audio_out_window_t2

0x0e9e,	// (0x00085cb6) popup_call2_audio_out_window_t3_ParamLimits

0x0e9e,	// (0x00085cb6) popup_call2_audio_out_window_t3

0x0eb4,	// (0x00085ccc) popup_call2_audio_out_window_t4_ParamLimits

0x0eb4,	// (0x00085ccc) popup_call2_audio_out_window_t4

0x0eca,	// (0x00085ce2) popup_call2_audio_out_window_t5_ParamLimits

0x0eca,	// (0x00085ce2) popup_call2_audio_out_window_t5

0x0005,

0xf4d8,	// (0x000942f0) popup_call2_audio_out_window_t_ParamLimits

0xf4d8,	// (0x000942f0) popup_call2_audio_out_window_t

0x0f2e,	// (0x00085d46) bg_popup_call2_in_pane_ParamLimits

0x0f2e,	// (0x00085d46) bg_popup_call2_in_pane

0x0f8a,	// (0x00085da2) popup_call2_audio_in_window_g1_ParamLimits

0x0f8a,	// (0x00085da2) popup_call2_audio_in_window_g1

0x0fc2,	// (0x00085dda) popup_call2_audio_in_window_g2_ParamLimits

0x0fc2,	// (0x00085dda) popup_call2_audio_in_window_g2

0x0ffa,	// (0x00085e12) popup_call2_audio_in_window_g3_ParamLimits

0x0ffa,	// (0x00085e12) popup_call2_audio_in_window_g3

0x0003,

0xf4e5,	// (0x000942fd) popup_call2_audio_in_window_g_ParamLimits

0xf4e5,	// (0x000942fd) popup_call2_audio_in_window_g

0x1052,	// (0x00085e6a) popup_call2_audio_in_window_t1_ParamLimits

0x1052,	// (0x00085e6a) popup_call2_audio_in_window_t1

0x10d2,	// (0x00085eea) popup_call2_audio_in_window_t2_ParamLimits

0x10d2,	// (0x00085eea) popup_call2_audio_in_window_t2

0x1152,	// (0x00085f6a) popup_call2_audio_in_window_t3_ParamLimits

0x1152,	// (0x00085f6a) popup_call2_audio_in_window_t3

0x116c,	// (0x00085f84) popup_call2_audio_in_window_t4_ParamLimits

0x116c,	// (0x00085f84) popup_call2_audio_in_window_t4

0x117e,	// (0x00085f96) popup_call2_audio_in_window_t5_ParamLimits

0x117e,	// (0x00085f96) popup_call2_audio_in_window_t5

0x1193,	// (0x00085fab) popup_call2_audio_in_window_t6_ParamLimits

0x1193,	// (0x00085fab) popup_call2_audio_in_window_t6

0x0005,

0xf4ee,	// (0x00094306) popup_call2_audio_in_window_t_ParamLimits

0xf4ee,	// (0x00094306) popup_call2_audio_in_window_t

0x0db9,	// (0x00085bd1) bg_popup_call2_in_pane_g1

0x12b2,	// (0x000860ca) popup_cale_lunar_info_window_t4

0x0003,

0xf556,	// (0x0009436e) popup_cale_lunar_info_window_t

0x0dc1,	// (0x00085bd9) bg_popup_call2_rect_pane_ParamLimits

0x0dc1,	// (0x00085bd9) bg_popup_call2_rect_pane

0x0b66,	// (0x0008597e) call2_cli_visual_graphic_pane

0x0b66,	// (0x0008597e) call2_cli_visual_text_pane

0xcc55,	// (0x00091a6d) smil_status_volume_pane_g3

0x0002,

0x0dd9,	// (0x00085bf1) call2_cli_visual_graphic_pane_g1

0x0dd9,	// (0x00085bf1) call2_cli_visual_graphic_pane_g2

0x0dd9,	// (0x00085bf1) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4fb,	// (0x00094313) call2_cli_visual_graphic_pane_g

0x11a8,	// (0x00085fc0) bg_popup_call2_rect_pane_g1

0x35a3,	// (0x000883bb) bg_popup_call2_rect_pane_g2

0x11b0,	// (0x00085fc8) bg_popup_call2_rect_pane_g3

0x11b8,	// (0x00085fd0) bg_popup_call2_rect_pane_g4

0x11c0,	// (0x00085fd8) bg_popup_call2_rect_pane_g5

0x11c8,	// (0x00085fe0) bg_popup_call2_rect_pane_g6

0x11d0,	// (0x00085fe8) bg_popup_call2_rect_pane_g7

0x11d8,	// (0x00085ff0) bg_popup_call2_rect_pane_g8

0x11e0,	// (0x00085ff8) bg_popup_call2_rect_pane_g9

0x0008,

0xf502,	// (0x0009431a) bg_popup_call2_rect_pane_g

0x11e8,	// (0x00086000) bg_popup_call2_bubble_pane_g1

0x11f0,	// (0x00086008) bg_popup_call2_bubble_pane_g2

0x11f8,	// (0x00086010) bg_popup_call2_bubble_pane_g3

0x1200,	// (0x00086018) bg_popup_call2_bubble_pane_g4

0x1208,	// (0x00086020) bg_popup_call2_bubble_pane_g5

0x1210,	// (0x00086028) bg_popup_call2_bubble_pane_g6

0x1218,	// (0x00086030) bg_popup_call2_bubble_pane_g7

0x1220,	// (0x00086038) bg_popup_call2_bubble_pane_g8

0x1228,	// (0x00086040) bg_popup_call2_bubble_pane_g9

0x0008,

0xf515,	// (0x0009432d) bg_popup_call2_bubble_pane_g

0x3615,	// (0x0008842d) aid_cale_week_size_cell_pane

0x3c75,	// (0x00088a8d) aid_cams_cif_uncrop_pane_ParamLimits

0x3c75,	// (0x00088a8d) aid_cams_cif_uncrop_pane

0x3def,	// (0x00088c07) aid_cams_size_cell_ParamLimits

0x3def,	// (0x00088c07) aid_cams_size_cell

0x3e03,	// (0x00088c1b) grid_cams_pane_ParamLimits

0x3e1d,	// (0x00088c35) linegrid_cams_pane_ParamLimits

0x3f53,	// (0x00088d6b) call_video_pane_t1

0x3f71,	// (0x00088d89) call_video_pane_t2

0x0001,

0xf222,	// (0x0009403a) call_video_pane_t

0x4603,	// (0x0008941b) aid_cale_month_size_cell_pane_ParamLimits

0x4603,	// (0x0008941b) aid_cale_month_size_cell_pane

0xf59a,	// (0x000943b2) smil_status_volume_pane_g

0xcc62,	// (0x00091a7a) volume_smil_pane_ParamLimits

0xb530,	// (0x00090348) aid_popup2_width_pane

0x34fb,	// (0x00088313) cell_qdial_pane_g4_ParamLimits

0x34fb,	// (0x00088313) cell_qdial_pane_g4

0x5445,	// (0x0008a25d) aid_blid_cardinal_pane_ParamLimits

0x5451,	// (0x0008a269) aid_blid_destination_pane_ParamLimits

0x5451,	// (0x0008a269) aid_blid_destination_pane

0x0dc1,	// (0x00085bd9) bg_popup_call_poc_act_pane_ParamLimits

0x0dc1,	// (0x00085bd9) bg_popup_call_poc_act_pane

0x0dc1,	// (0x00085bd9) bg_popup_call_poc_inact_pane_ParamLimits

0x0dc1,	// (0x00085bd9) bg_popup_call_poc_inact_pane

0x1230,	// (0x00086048) bg_popup_call_poc_act_pane_g1

0x1238,	// (0x00086050) bg_popup_call_poc_act_pane_g2

0x1240,	// (0x00086058) bg_popup_call_poc_act_pane_g3

0x1200,	// (0x00086018) bg_popup_call_poc_act_pane_g4

0x1208,	// (0x00086020) bg_popup_call_poc_act_pane_g5

0x1248,	// (0x00086060) bg_popup_call_poc_act_pane_g6

0x1218,	// (0x00086030) bg_popup_call_poc_act_pane_g7

0x1250,	// (0x00086068) bg_popup_call_poc_act_pane_g8

0x0b66,	// (0x0008597e) main_usb_pane

0xcc09,	// (0x00091a21) popup_cale_lunar_info_window

0x42ab,	// (0x000890c3) im_reading_pane_t1_ParamLimits

0x42e4,	// (0x000890fc) list_im_pane_ParamLimits

0x42f5,	// (0x0008910d) scroll_pane_cp07_ParamLimits

0x0b66,	// (0x0008597e) grid_highlight_pane_cp012

0x0dc1,	// (0x00085bd9) mup_scale_pane_ParamLimits

0xbf45,	// (0x00090d5d) main_usb_pane_g1_ParamLimits

0xbf45,	// (0x00090d5d) main_usb_pane_g1

0x5ecc,	// (0x0008ace4) main_usb_pane_g2_ParamLimits

0x5ecc,	// (0x0008ace4) main_usb_pane_g2

0x0001,

0xf53f,	// (0x00094357) main_usb_pane_g_ParamLimits

0xf53f,	// (0x00094357) main_usb_pane_g

0x5ee2,	// (0x0008acfa) main_usb_pane_t1_ParamLimits

0x5ee2,	// (0x0008acfa) main_usb_pane_t1

0x5ef4,	// (0x0008ad0c) main_usb_pane_t2_ParamLimits

0x5ef4,	// (0x0008ad0c) main_usb_pane_t2

0x5f06,	// (0x0008ad1e) main_usb_pane_t3_ParamLimits

0x5f06,	// (0x0008ad1e) main_usb_pane_t3

0x5f18,	// (0x0008ad30) main_usb_pane_t4_ParamLimits

0x5f18,	// (0x0008ad30) main_usb_pane_t4

0x5f2a,	// (0x0008ad42) main_usb_pane_t5_ParamLimits

0x5f2a,	// (0x0008ad42) main_usb_pane_t5

0x5f3c,	// (0x0008ad54) main_usb_pane_t6_ParamLimits

0x5f3c,	// (0x0008ad54) main_usb_pane_t6

0x0005,

0xf544,	// (0x0009435c) main_usb_pane_t_ParamLimits

0x53f4,	// (0x0008a20c) aid_text_placing

0x53fd,	// (0x0008a215) main_location2_pane_t1_ParamLimits

0x540f,	// (0x0008a227) main_location2_pane_t2_ParamLimits

0x5421,	// (0x0008a239) main_location2_pane_t3_ParamLimits

0x5433,	// (0x0008a24b) main_location2_pane_t4_ParamLimits

0x5433,	// (0x0008a24b) main_location2_pane_t4

0xf35e,	// (0x00094176) main_location2_pane_t_ParamLimits

0x0dfd,	// (0x00085c15) find_pinb_pane_g2_ParamLimits

0x0dfd,	// (0x00085c15) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x00093ef2) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x00093ef2) find_pinb_pane_g

0x0e09,	// (0x00085c21) find_pinb_pane_t1_ParamLimits

0x0e1b,	// (0x00085c33) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x00093ef7) find_pinb_pane_t_ParamLimits

0x0b66,	// (0x0008597e) main_call3_pane

0x4b2d,	// (0x00089945) cale_month_day_heading_pane_t1_ParamLimits

0x4bb3,	// (0x000899cb) cale_month_day_heading_pane_t2_ParamLimits

0x4c2c,	// (0x00089a44) cale_month_day_heading_pane_t3_ParamLimits

0x4ca5,	// (0x00089abd) cale_month_day_heading_pane_t4_ParamLimits

0x4d26,	// (0x00089b3e) cale_month_day_heading_pane_t5_ParamLimits

0x4daf,	// (0x00089bc7) cale_month_day_heading_pane_t6_ParamLimits

0x4e38,	// (0x00089c50) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x00094072) cale_month_day_heading_pane_t_ParamLimits

0x50e4,	// (0x00089efc) smil_status_volume_pane

0x595f,	// (0x0008a777) postcard_address_pane_ParamLimits

0x595f,	// (0x0008a777) postcard_address_pane

0x5971,	// (0x0008a789) postcard_message_pane_ParamLimits

0x5971,	// (0x0008a789) postcard_message_pane

0x5eaa,	// (0x0008acc2) call2_cli_visual_pane_t1_ParamLimits

0x5eaa,	// (0x0008acc2) call2_cli_visual_pane_t1

0x13d5,	// (0x000861ed) postcard_message_pane_t1_ParamLimits

0x13d5,	// (0x000861ed) postcard_message_pane_t1

0x13bd,	// (0x000861d5) postcard_address_pane_t1_ParamLimits

0x13bd,	// (0x000861d5) postcard_address_pane_t1

0x6646,	// (0x0008b45e) popup_call3_audio_in_window_ParamLimits

0x6646,	// (0x0008b45e) popup_call3_audio_in_window

0x64d1,	// (0x0008b2e9) bg_popup_call3_in_pane_ParamLimits

0x64d1,	// (0x0008b2e9) bg_popup_call3_in_pane

0x6547,	// (0x0008b35f) popup_call3_audio_in_window_g1_ParamLimits

0x6547,	// (0x0008b35f) popup_call3_audio_in_window_g1

0x6567,	// (0x0008b37f) popup_call3_audio_in_window_g2_ParamLimits

0x6567,	// (0x0008b37f) popup_call3_audio_in_window_g2

0x6587,	// (0x0008b39f) popup_call3_audio_in_window_g3_ParamLimits

0x6587,	// (0x0008b39f) popup_call3_audio_in_window_g3

0x0003,

0xf5a1,	// (0x000943b9) popup_call3_audio_in_window_g_ParamLimits

0xf5a1,	// (0x000943b9) popup_call3_audio_in_window_g

0x65b8,	// (0x0008b3d0) popup_call3_audio_in_window_t1_ParamLimits

0x65b8,	// (0x0008b3d0) popup_call3_audio_in_window_t1

0x65f6,	// (0x0008b40e) popup_call3_audio_in_window_t2_ParamLimits

0x65f6,	// (0x0008b40e) popup_call3_audio_in_window_t2

0x6634,	// (0x0008b44c) popup_call3_audio_in_window_t3_ParamLimits

0x6634,	// (0x0008b44c) popup_call3_audio_in_window_t3

0x0002,

0xf5aa,	// (0x000943c2) popup_call3_audio_in_window_t_ParamLimits

0xf5aa,	// (0x000943c2) popup_call3_audio_in_window_t

0x3bf8,	// (0x00088a10) bg_popup_call3_rect_pane

0x11a8,	// (0x00085fc0) bg_popup_call3_rect_pane_g1

0x35a3,	// (0x000883bb) bg_popup_call3_rect_pane_g2

0x11b0,	// (0x00085fc8) bg_popup_call3_rect_pane_g3

0x11b8,	// (0x00085fd0) bg_popup_call3_rect_pane_g4

0x11c0,	// (0x00085fd8) bg_popup_call3_rect_pane_g5

0x11c8,	// (0x00085fe0) bg_popup_call3_rect_pane_g6

0x11d0,	// (0x00085fe8) bg_popup_call3_rect_pane_g7

0x0749,	// (0x00085561) mup_visualizer_osc_pane

0x0749,	// (0x00085561) mup_visualizer_spec_pane

0x6501,	// (0x0008b319) call3_video_qcif_pane_ParamLimits

0x6501,	// (0x0008b319) call3_video_qcif_pane

0x6514,	// (0x0008b32c) call3_video_qcif_uncrop_pane_ParamLimits

0x6514,	// (0x0008b32c) call3_video_qcif_uncrop_pane

0x6522,	// (0x0008b33a) call3_video_subqcif_pane_ParamLimits

0x6522,	// (0x0008b33a) call3_video_subqcif_pane

0x6536,	// (0x0008b34e) call3_video_subqcif_uncrop_pane_ParamLimits

0x6536,	// (0x0008b34e) call3_video_subqcif_uncrop_pane

0x65a7,	// (0x0008b3bf) popup_call3_audio_in_window_g4_ParamLimits

0x65a7,	// (0x0008b3bf) popup_call3_audio_in_window_g4

0x0749,	// (0x00085561) mup_spec_half_pane

0x0749,	// (0x00085561) mup_spec_half_pane_cp

0x0749,	// (0x00085561) mup_osc_middle_pane

0x3de5,	// (0x00088bfd) mup_visualizer_osc_pane_g1

0x1370,	// (0x00086188) mup_spec_bar_pane_ParamLimits

0x1370,	// (0x00086188) mup_spec_bar_pane

0x3de5,	// (0x00088bfd) mup_spec_bar_pane_g1

0x3de5,	// (0x00088bfd) mup_spec_bar_pane_g2

0x0001,

0xf3d8,	// (0x000941f0) mup_spec_bar_pane_g

0x3615,	// (0x0008842d) aid_cale_week_size_cell_pane_ParamLimits

0x362f,	// (0x00088447) bg_cale_heading_pane_ParamLimits

0x3647,	// (0x0008845f) bg_cale_pane_cp01_ParamLimits

0x3664,	// (0x0008847c) cale_week_corner_pane_ParamLimits

0x3683,	// (0x0008849b) cale_week_day_heading_pane_ParamLimits

0x36a0,	// (0x000884b8) cale_week_scroll_pane_g1_ParamLimits

0x36b3,	// (0x000884cb) cale_week_scroll_pane_g2_ParamLimits

0x36cb,	// (0x000884e3) cale_week_scroll_pane_g3_ParamLimits

0x36e3,	// (0x000884fb) cale_week_scroll_pane_g4_ParamLimits

0x36fb,	// (0x00088513) cale_week_scroll_pane_g5_ParamLimits

0x371b,	// (0x00088533) cale_week_scroll_pane_g6_ParamLimits

0x373b,	// (0x00088553) cale_week_scroll_pane_g7_ParamLimits

0x375b,	// (0x00088573) cale_week_scroll_pane_g8_ParamLimits

0x377f,	// (0x00088597) cale_week_scroll_pane_g9_ParamLimits

0x3797,	// (0x000885af) cale_week_scroll_pane_g10_ParamLimits

0x37af,	// (0x000885c7) cale_week_scroll_pane_g11_ParamLimits

0x37c7,	// (0x000885df) cale_week_scroll_pane_g12_ParamLimits

0x37df,	// (0x000885f7) cale_week_scroll_pane_g13_ParamLimits

0x37df,	// (0x000885f7) cale_week_scroll_pane_g14_ParamLimits

0x37df,	// (0x000885f7) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x00093f83) cale_week_scroll_pane_g_ParamLimits

0x381b,	// (0x00088633) cale_week_time_pane_ParamLimits

0x383f,	// (0x00088657) grid_cale_week_pane_ParamLimits

0x3865,	// (0x0008867d) listscroll_cale_week_pane_t1

0x3877,	// (0x0008868f) scroll_pane_cp08_ParamLimits

0x4690,	// (0x000894a8) cale_month_corner_pane_ParamLimits

0x4aae,	// (0x000898c6) cale_month_pane_t1

0x4ac0,	// (0x000898d8) cale_month_week_pane_ParamLimits

0x5274,	// (0x0008a08c) popup_call_status_window_g1_ParamLimits

0x5288,	// (0x0008a0a0) popup_call_status_window_g2_ParamLimits

0x529c,	// (0x0008a0b4) popup_call_status_window_g3_ParamLimits

0xf2e5,	// (0x000940fd) popup_call_status_window_g_ParamLimits

0xb97e,	// (0x00090796) aid_call2_pane

0x578a,	// (0x0008a5a2) msg_header_pane_g1

0x595f,	// (0x0008a777) postcard_address2_pane_ParamLimits

0x595f,	// (0x0008a777) postcard_address2_pane

0x5971,	// (0x0008a789) postcard_message2_pane_ParamLimits

0x5971,	// (0x0008a789) postcard_message2_pane

0x64a2,	// (0x0008b2ba) message2_row_pane_ParamLimits

0x64a2,	// (0x0008b2ba) message2_row_pane

0x64be,	// (0x0008b2d6) address2_row_pane_ParamLimits

0x64be,	// (0x0008b2d6) address2_row_pane

0x133d,	// (0x00086155) postcard_message2_row_pane_g1

0x1345,	// (0x0008615d) postcard_message2_row_pane_t1

0x133d,	// (0x00086155) address2_row_pane_g1

0x1345,	// (0x0008615d) address2_row_pane_t1

0x3bf0,	// (0x00088a08) aid_size_cell_vorec

0x0b66,	// (0x0008597e) main_rss_pane

0x1353,	// (0x0008616b) rss_list_single_pane_ParamLimits

0x1353,	// (0x0008616b) rss_list_single_pane

0x1361,	// (0x00086179) rss_list_single_pane_t1

0x1361,	// (0x00086179) rss_list_single_pane_t2

0x0001,

0xf595,	// (0x000943ad) rss_list_single_pane_t

0x0b66,	// (0x0008597e) main_camera2_pane

0x0b66,	// (0x0008597e) main_video2_pane

0xcc77,	// (0x00091a8f) cams_zoom_pane_cp2_ParamLimits

0xcc77,	// (0x00091a8f) cams_zoom_pane_cp2

0xcc77,	// (0x00091a8f) image2_vga_pane_ParamLimits

0xcc77,	// (0x00091a8f) image2_vga_pane

0xeb80,	// (0x00093998) main_camera2_pane_g1_ParamLimits

0xeb80,	// (0x00093998) main_camera2_pane_g1

0xeb80,	// (0x00093998) main_camera2_pane_g2_ParamLimits

0xeb80,	// (0x00093998) main_camera2_pane_g2

0xeb80,	// (0x00093998) main_camera2_pane_g3_ParamLimits

0xeb80,	// (0x00093998) main_camera2_pane_g3

0xeb80,	// (0x00093998) main_camera2_pane_g4_ParamLimits

0xeb80,	// (0x00093998) main_camera2_pane_g4

0xeb80,	// (0x00093998) main_camera2_pane_g5_ParamLimits

0xeb80,	// (0x00093998) main_camera2_pane_g5

0xeb80,	// (0x00093998) main_camera2_pane_g6_ParamLimits

0xeb80,	// (0x00093998) main_camera2_pane_g6

0xeb80,	// (0x00093998) main_camera2_pane_g7_ParamLimits

0xeb80,	// (0x00093998) main_camera2_pane_g7

0xeb80,	// (0x00093998) main_camera2_pane_g8_ParamLimits

0xeb80,	// (0x00093998) main_camera2_pane_g8

0x0008,

0xf5b1,	// (0x000943c9) main_camera2_pane_g_ParamLimits

0xf5b1,	// (0x000943c9) main_camera2_pane_g

0x6668,	// (0x0008b480) main_camera2_pane_t1_ParamLimits

0x6668,	// (0x0008b480) main_camera2_pane_t1

0x6668,	// (0x0008b480) main_camera2_pane_t2_ParamLimits

0x6668,	// (0x0008b480) main_camera2_pane_t2

0x6668,	// (0x0008b480) main_camera2_pane_t3_ParamLimits

0x6668,	// (0x0008b480) main_camera2_pane_t3

0x6668,	// (0x0008b480) main_camera2_pane_t4_ParamLimits

0x6668,	// (0x0008b480) main_camera2_pane_t4

0x0006,

0xf5c4,	// (0x000943dc) main_camera2_pane_t_ParamLimits

0xf5c4,	// (0x000943dc) main_camera2_pane_t

0xeb8e,	// (0x000939a6) cams_zoom_pane_cp4_ParamLimits

0xeb8e,	// (0x000939a6) cams_zoom_pane_cp4

0x667c,	// (0x0008b494) image2_cif_pane_ParamLimits

0x667c,	// (0x0008b494) image2_cif_pane

0xb595,	// (0x000903ad) image2_subqcif_pane_ParamLimits

0xb595,	// (0x000903ad) image2_subqcif_pane

0x668a,	// (0x0008b4a2) main_video2_pane_g1_ParamLimits

0x668a,	// (0x0008b4a2) main_video2_pane_g1

0x668a,	// (0x0008b4a2) main_video2_pane_g2_ParamLimits

0x668a,	// (0x0008b4a2) main_video2_pane_g2

0x668a,	// (0x0008b4a2) main_video2_pane_g3_ParamLimits

0x668a,	// (0x0008b4a2) main_video2_pane_g3

0x668a,	// (0x0008b4a2) main_video2_pane_g4_ParamLimits

0x668a,	// (0x0008b4a2) main_video2_pane_g4

0x668a,	// (0x0008b4a2) main_video2_pane_g5_ParamLimits

0x668a,	// (0x0008b4a2) main_video2_pane_g5

0x668a,	// (0x0008b4a2) main_video2_pane_g6_ParamLimits

0x668a,	// (0x0008b4a2) main_video2_pane_g6

0x0005,

0xf5d3,	// (0x000943eb) main_video2_pane_g_ParamLimits

0xf5d3,	// (0x000943eb) main_video2_pane_g

0x6698,	// (0x0008b4b0) main_video2_pane_t1_ParamLimits

0x6698,	// (0x0008b4b0) main_video2_pane_t1

0x6698,	// (0x0008b4b0) main_video2_pane_t2_ParamLimits

0x6698,	// (0x0008b4b0) main_video2_pane_t2

0x6698,	// (0x0008b4b0) main_video2_pane_t3_ParamLimits

0x6698,	// (0x0008b4b0) main_video2_pane_t3

0x0002,

0xf5e0,	// (0x000943f8) main_video2_pane_t_ParamLimits

0xf5e0,	// (0x000943f8) main_video2_pane_t

0x5fd0,	// (0x0008ade8) call_muted_g2

0x0001,

0xf587,	// (0x0009439f) call_muted_g

0x0b66,	// (0x0008597e) main_mup2_pane

0x1f39,	// (0x00086d51) main_mup2_pane_g1_ParamLimits

0x1f39,	// (0x00086d51) main_mup2_pane_g1

0x1f39,	// (0x00086d51) main_mup2_pane_g2_ParamLimits

0x1f39,	// (0x00086d51) main_mup2_pane_g2

0x1f53,	// (0x00086d6b) main_mup_pane_g13_cp1

0xb5a3,	// (0x000903bb) mup_volume_pane_cp1

0x1f39,	// (0x00086d51) main_mup2_pane_g4_ParamLimits

0x1f39,	// (0x00086d51) main_mup2_pane_g4

0x1f39,	// (0x00086d51) main_mup2_pane_g5_ParamLimits

0x1f39,	// (0x00086d51) main_mup2_pane_g5

0x1f39,	// (0x00086d51) main_mup2_pane_g6_ParamLimits

0x1f39,	// (0x00086d51) main_mup2_pane_g6

0x1f39,	// (0x00086d51) main_mup2_pane_g7_ParamLimits

0x1f39,	// (0x00086d51) main_mup2_pane_g7

0x0006,

0xf5e7,	// (0x000943ff) main_mup2_pane_g_ParamLimits

0xf5e7,	// (0x000943ff) main_mup2_pane_g

0x1d24,	// (0x00086b3c) main_mup2_pane_t1_ParamLimits

0x1d24,	// (0x00086b3c) main_mup2_pane_t1

0x1d24,	// (0x00086b3c) main_mup2_pane_t2_ParamLimits

0x1d24,	// (0x00086b3c) main_mup2_pane_t2

0x1d24,	// (0x00086b3c) main_mup2_pane_t3_ParamLimits

0x1d24,	// (0x00086b3c) main_mup2_pane_t3

0x1d24,	// (0x00086b3c) main_mup2_pane_t4_ParamLimits

0x1d24,	// (0x00086b3c) main_mup2_pane_t4

0x1d24,	// (0x00086b3c) main_mup2_pane_t5_ParamLimits

0x1d24,	// (0x00086b3c) main_mup2_pane_t5

0x1d24,	// (0x00086b3c) main_mup2_pane_t6_ParamLimits

0x1d24,	// (0x00086b3c) main_mup2_pane_t6

0x0005,

0xf5f6,	// (0x0009440e) main_mup2_pane_t_ParamLimits

0xf5f6,	// (0x0009440e) main_mup2_pane_t

0x1314,	// (0x0008612c) mup2_visualizer_pane_ParamLimits

0x1314,	// (0x0008612c) mup2_visualizer_pane

0x1314,	// (0x0008612c) mup_progress_pane_cp_ParamLimits

0x1314,	// (0x0008612c) mup_progress_pane_cp

0xccd1,	// (0x00091ae9) mup_volume_pane_cp_ParamLimits

0xccd1,	// (0x00091ae9) mup_volume_pane_cp

0x3167,	// (0x00087f7f) mup2_visualizer_pane_g1_ParamLimits

0x3167,	// (0x00087f7f) mup2_visualizer_pane_g1

0x3175,	// (0x00087f8d) mup2_visualizer_pane_g2_ParamLimits

0x3175,	// (0x00087f8d) mup2_visualizer_pane_g2

0x3175,	// (0x00087f8d) mup2_visualizer_pane_g3_ParamLimits

0x3175,	// (0x00087f8d) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x00093efc) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x00093efc) mup2_visualizer_pane_g

0xc08e,	// (0x00090ea6) aid_size_cell_fmradio

0x6182,	// (0x0008af9a) aid_height_parent_landcape

0x43ab,	// (0x000891c3) wml_content_pane_cp

0x43b3,	// (0x000891cb) wml_tabs_pane

0x43bc,	// (0x000891d4) popup_wml_miniature_window

0x43c4,	// (0x000891dc) scroll_pane_cp021

0x43d8,	// (0x000891f0) wml_content_pane_comp8

0x0b66,	// (0x0008597e) bg_popup_sub_pane_cp05

0x1407,	// (0x0008621f) popup_wml_miniature_window_g1

0x140f,	// (0x00086227) wml_miniature_view_pane

0x66ac,	// (0x0008b4c4) aid_size_wml_view

0x66b4,	// (0x0008b4cc) wml_miniature_view_pane_g1

0x66bd,	// (0x0008b4d5) wml_miniature_view_pane_g2

0x66c6,	// (0x0008b4de) wml_miniature_view_pane_g3

0x66ce,	// (0x0008b4e6) wml_miniature_view_pane_g4

0x66d6,	// (0x0008b4ee) wml_miniature_view_pane_g5

0x66de,	// (0x0008b4f6) wml_miniature_view_pane_g6

0x66e6,	// (0x0008b4fe) wml_miniature_view_pane_g7

0x66ee,	// (0x0008b506) wml_miniature_view_pane_g8

0x0007,

0xf603,	// (0x0009441b) wml_miniature_view_pane_g

0x1417,	// (0x0008622f) background_graphic_ParamLimits

0x1417,	// (0x0008622f) background_graphic

0x1423,	// (0x0008623b) wml_tabs_2_pane

0x142c,	// (0x00086244) wml_tabs_3_pane_ParamLimits

0x142c,	// (0x00086244) wml_tabs_3_pane

0x143e,	// (0x00086256) wml_tabs_4_pane_ParamLimits

0x143e,	// (0x00086256) wml_tabs_4_pane

0x1454,	// (0x0008626c) wml_tabs_5_pane_ParamLimits

0x1454,	// (0x0008626c) wml_tabs_5_pane

0x146e,	// (0x00086286) wml_tabs_pane_g2_ParamLimits

0x146e,	// (0x00086286) wml_tabs_pane_g2

0x1483,	// (0x0008629b) wml_tabs_pane_g3_ParamLimits

0x1483,	// (0x0008629b) wml_tabs_pane_g3

0x1498,	// (0x000862b0) wml_tabs_2_active_pane_ParamLimits

0x1498,	// (0x000862b0) wml_tabs_2_active_pane

0x1498,	// (0x000862b0) wml_tabs_2_passive_pane_ParamLimits

0x1498,	// (0x000862b0) wml_tabs_2_passive_pane

0x66f6,	// (0x0008b50e) wml_tabs_3_active_pane_cp_ParamLimits

0x66f6,	// (0x0008b50e) wml_tabs_3_active_pane_cp

0x670b,	// (0x0008b523) wml_tabs_3_passive_pane_ParamLimits

0x670b,	// (0x0008b523) wml_tabs_3_passive_pane

0x671e,	// (0x0008b536) wml_tabs_3_passive_pane_cp_ParamLimits

0x671e,	// (0x0008b536) wml_tabs_3_passive_pane_cp

0x6735,	// (0x0008b54d) tabs_4_active_pane

0x673d,	// (0x0008b555) tabs_4_passive_pane

0x6747,	// (0x0008b55f) tabs_4_passive_pane_cp

0x674f,	// (0x0008b567) tabs_4_passive_pane_cp2

0x5ec4,	// (0x0008acdc) aid_height_text

0x1314,	// (0x0008612c) mup_volume_cont_pane_ParamLimits

0x1314,	// (0x0008612c) mup_volume_cont_pane

0x0749,	// (0x00085561) aid_size_cell_pinb

0x0749,	// (0x00085561) aid_size_list_pinb

0x1314,	// (0x0008612c) mup2_volume_cont_pane_ParamLimits

0x1314,	// (0x0008612c) mup2_volume_cont_pane

0xccbb,	// (0x00091ad3) mup2_volume_cont_pane_g1_ParamLimits

0xccbb,	// (0x00091ad3) mup2_volume_cont_pane_g1

0x2e90,	// (0x00087ca8) aid_size_cell_touch_ParamLimits

0x2e90,	// (0x00087ca8) aid_size_cell_touch

0x30bd,	// (0x00087ed5) touch_pane_ParamLimits

0x30bd,	// (0x00087ed5) touch_pane

0xb5a3,	// (0x000903bb) main_rss2_pane

0x14af,	// (0x000862c7) listscroll_rss2_pane

0x14b8,	// (0x000862d0) rss2_navigation_pane

0x14c0,	// (0x000862d8) list_rss2_pane

0xbb28,	// (0x00090940) scroll_pane_cp22

0x14c8,	// (0x000862e0) rss2_navigation_pane_g1

0x14d1,	// (0x000862e9) rss2_navigation_pane_g2

0x14d9,	// (0x000862f1) rss2_navigation_pane_g3

0x0002,

0xf614,	// (0x0009442c) rss2_navigation_pane_g

0x14e1,	// (0x000862f9) rss2_navigation_pane_t1

0x6759,	// (0x0008b571) rss2_list_single_pane_ParamLimits

0x6759,	// (0x0008b571) rss2_list_single_pane

0x14ef,	// (0x00086307) rss2_list_single_pane_t2

0x14fd,	// (0x00086315) rss2_list_single_pane_t3_ParamLimits

0x14fd,	// (0x00086315) rss2_list_single_pane_t3

0x151a,	// (0x00086332) rss2_list_single_pane_t4

0x50cc,	// (0x00089ee4) smil_status_pane_g1

0xb595,	// (0x000903ad) main_image2_pane_ParamLimits

0xb595,	// (0x000903ad) main_image2_pane

0xeb80,	// (0x00093998) main_camera2_pane_g9_ParamLimits

0xeb80,	// (0x00093998) main_camera2_pane_g9

0x6668,	// (0x0008b480) main_camera2_pane_t5_ParamLimits

0x6668,	// (0x0008b480) main_camera2_pane_t5

0xcc85,	// (0x00091a9d) main_camera2_pane_t6_ParamLimits

0xcc85,	// (0x00091a9d) main_camera2_pane_t6

0x676e,	// (0x0008b586) main_image2_pane_g1_ParamLimits

0x676e,	// (0x0008b586) main_image2_pane_g1

0x5b98,	// (0x0008a9b0) smil2_video_pane_ParamLimits

0x5b98,	// (0x0008a9b0) smil2_video_pane

0xb54c,	// (0x00090364) aid_zoom_text_primary_cp

0xb58b,	// (0x000903a3) popup_preview_fixed_window

0x42a3,	// (0x000890bb) im_reading_pane_g1

0x665a,	// (0x0008b472) cams2_bc_adjust_pane_cp_ParamLimits

0x665a,	// (0x0008b472) cams2_bc_adjust_pane_cp

0xccad,	// (0x00091ac5) cams2_bc_adjust_pane_ParamLimits

0xccad,	// (0x00091ac5) cams2_bc_adjust_pane

0x1f53,	// (0x00086d6b) cams2_bc_adjust_pane_g1

0xb5a3,	// (0x000903bb) cams2_slider_pane

0x1f53,	// (0x00086d6b) cams2_slider_pane_g1

0x1f53,	// (0x00086d6b) cams2_slider_pane_g2

0x0006,

0xf61b,	// (0x00094433) cams2_slider_pane_g

0x31c3,	// (0x00087fdb) calc_display_pane_ParamLimits

0x31e8,	// (0x00088000) calc_paper_pane_ParamLimits

0x320b,	// (0x00088023) grid_calc_pane_ParamLimits

0xb9e4,	// (0x000907fc) popup_clock_digital_window_t1_ParamLimits

0xc02b,	// (0x00090e43) main_image_pane_t1

0x31a5,	// (0x00087fbd) aid_size_cell_calc_ParamLimits

0x31a5,	// (0x00087fbd) aid_size_cell_calc

0x61e6,	// (0x0008affe) popup_blid_sat_info2_window_ParamLimits

0x61e6,	// (0x0008affe) popup_blid_sat_info2_window

0x1528,	// (0x00086340) aid_size_cell_blid

0xcce7,	// (0x00091aff) bg_popup_window_pane_cp07

0x1545,	// (0x0008635d) grid_popup_blid_pane

0x154f,	// (0x00086367) heading_pane_cp05_ParamLimits

0x154f,	// (0x00086367) heading_pane_cp05

0x1619,	// (0x00086431) cell_popup_blid_pane_ParamLimits

0x1619,	// (0x00086431) cell_popup_blid_pane

0x163d,	// (0x00086455) cell_popup_blid_pane_g1

0x1645,	// (0x0008645d) cell_popup_blid_pane_t1

0x1314,	// (0x0008612c) mup2_indicator_pane_ParamLimits

0x1314,	// (0x0008612c) mup2_indicator_pane

0x0749,	// (0x00085561) mup2_visualizer_osc_pane

0x13f1,	// (0x00086209) mup2_visualizer_spec_pane_ParamLimits

0x13f1,	// (0x00086209) mup2_visualizer_spec_pane

0x0749,	// (0x00085561) mup2_spec_half_pane

0x0749,	// (0x00085561) mup2_spec_half_pane_cp

0x1653,	// (0x0008646b) mup2_spec_bar_pane_ParamLimits

0x1653,	// (0x0008646b) mup2_spec_bar_pane

0x3de5,	// (0x00088bfd) mup2_spec_bar_pane_g1

0x1672,	// (0x0008648a) mup2_spec_bar_pane_g2

0x0001,

0xf641,	// (0x00094459) mup2_spec_bar_pane_g

0x0749,	// (0x00085561) mup2_osc_middle_pane

0x3de5,	// (0x00088bfd) mup2_visualizer_osc_pane_g1

0x0773,	// (0x0008558b) popup_number_entry_window_t1_ParamLimits

0x0786,	// (0x0008559e) popup_number_entry_window_t2_ParamLimits

0x0798,	// (0x000855b0) popup_number_entry_window_t3_ParamLimits

0x310f,	// (0x00087f27) popup_number_entry_window_t5_ParamLimits

0x310f,	// (0x00087f27) popup_number_entry_window_t5

0xf085,	// (0x00093e9d) popup_number_entry_window_t_ParamLimits

0x07aa,	// (0x000855c2) text_title_cp2_ParamLimits

0xbf11,	// (0x00090d29) aid_hotspot_pointer_text2_pane

0xbf2b,	// (0x00090d43) main_viewer_pane_g9_ParamLimits

0xbf2b,	// (0x00090d43) main_viewer_pane_g9

0x4aae,	// (0x000898c6) cale_month_pane_t1_ParamLimits

0x513e,	// (0x00089f56) bg_cale_pane_ParamLimits

0x5156,	// (0x00089f6e) list_cale_pane_ParamLimits

0x5167,	// (0x00089f7f) listscroll_cale_day_pane_t1

0x5179,	// (0x00089f91) scroll_pane_cp09_ParamLimits

0x551e,	// (0x0008a336) main_mup_eq_pane_t1_ParamLimits

0x551e,	// (0x0008a336) main_mup_eq_pane_t1

0x5538,	// (0x0008a350) main_mup_eq_pane_t2_ParamLimits

0x5538,	// (0x0008a350) main_mup_eq_pane_t2

0x5552,	// (0x0008a36a) main_mup_eq_pane_t3_ParamLimits

0x5552,	// (0x0008a36a) main_mup_eq_pane_t3

0x556e,	// (0x0008a386) main_mup_eq_pane_t4_ParamLimits

0x556e,	// (0x0008a386) main_mup_eq_pane_t4

0x558a,	// (0x0008a3a2) main_mup_eq_pane_t5_ParamLimits

0x558a,	// (0x0008a3a2) main_mup_eq_pane_t5

0x55a6,	// (0x0008a3be) main_mup_eq_pane_t6_ParamLimits

0x55a6,	// (0x0008a3be) main_mup_eq_pane_t6

0x55ba,	// (0x0008a3d2) main_mup_eq_pane_t7_ParamLimits

0x55ba,	// (0x0008a3d2) main_mup_eq_pane_t7

0x55ce,	// (0x0008a3e6) main_mup_eq_pane_t8_ParamLimits

0x55ce,	// (0x0008a3e6) main_mup_eq_pane_t8

0x55e2,	// (0x0008a3fa) main_mup_eq_pane_t9_ParamLimits

0x55e2,	// (0x0008a3fa) main_mup_eq_pane_t9

0x55fc,	// (0x0008a414) main_mup_eq_pane_t10_ParamLimits

0x55fc,	// (0x0008a414) main_mup_eq_pane_t10

0x0009,

0xf3e4,	// (0x000941fc) main_mup_eq_pane_t_ParamLimits

0xf3e4,	// (0x000941fc) main_mup_eq_pane_t

0x56ab,	// (0x0008a4c3) mup_equalizer_pane_cp5_ParamLimits

0x56bf,	// (0x0008a4d7) mup_equalizer_pane_cp6_ParamLimits

0x56d3,	// (0x0008a4eb) mup_equalizer_pane_cp7_ParamLimits

0xb5a3,	// (0x000903bb) main_gallery_pane

0x138f,	// (0x000861a7) smil2_volume_pane

0x1397,	// (0x000861af) smil_status_volume_pane_g1_ParamLimits

0x13aa,	// (0x000861c2) smil_status_volume_pane_g2_ParamLimits

0xcc55,	// (0x00091a6d) smil_status_volume_pane_g3_ParamLimits

0xf59a,	// (0x000943b2) smil_status_volume_pane_g_ParamLimits

0xcce7,	// (0x00091aff) bg_popup_window_pane_cp07_ParamLimits

0x1530,	// (0x00086348) blid_firmament_pane

0x0de3,	// (0x00085bfb) aid_size_cell_gallery_ParamLimits

0x0de3,	// (0x00085bfb) aid_size_cell_gallery

0x0de3,	// (0x00085bfb) grid_gallery_pane_ParamLimits

0x0de3,	// (0x00085bfb) grid_gallery_pane

0xcce7,	// (0x00091aff) cell_gallery_pane_ParamLimits

0xcce7,	// (0x00091aff) cell_gallery_pane

0x0de3,	// (0x00085bfb) bg_cell_gallery_focus_pane_ParamLimits

0x0de3,	// (0x00085bfb) bg_cell_gallery_focus_pane

0x3167,	// (0x00087f7f) cell_gallery_pane_g1_ParamLimits

0x3167,	// (0x00087f7f) cell_gallery_pane_g1

0x3167,	// (0x00087f7f) cell_gallery_pane_g2_ParamLimits

0x3167,	// (0x00087f7f) cell_gallery_pane_g2

0x3167,	// (0x00087f7f) cell_gallery_pane_g3_ParamLimits

0x3167,	// (0x00087f7f) cell_gallery_pane_g3

0x3175,	// (0x00087f8d) cell_gallery_pane_g4_ParamLimits

0x3175,	// (0x00087f8d) cell_gallery_pane_g4

0x0003,

0xf646,	// (0x0009445e) cell_gallery_pane_g_ParamLimits

0xf646,	// (0x0009445e) cell_gallery_pane_g

0x167c,	// (0x00086494) bg_cell_gallery_focus_pane_g1

0x1684,	// (0x0008649c) bg_cell_gallery_focus_pane_g2

0x168c,	// (0x000864a4) bg_cell_gallery_focus_pane_g3

0x1694,	// (0x000864ac) bg_cell_gallery_focus_pane_g4

0x169c,	// (0x000864b4) bg_cell_gallery_focus_pane_g5

0x16a4,	// (0x000864bc) bg_cell_gallery_focus_pane_g6

0x16ac,	// (0x000864c4) bg_cell_gallery_focus_pane_g7

0x16b4,	// (0x000864cc) bg_cell_gallery_focus_pane_g8

0x0007,

0xf64f,	// (0x00094467) bg_cell_gallery_focus_pane_g

0x16bc,	// (0x000864d4) aid_firma_cardinal

0x16d0,	// (0x000864e8) blid_firmament_pane_t1

0x16e7,	// (0x000864ff) blid_firmament_pane_t2

0x16fe,	// (0x00086516) blid_firmament_pane_t3

0x1715,	// (0x0008652d) blid_firmament_pane_t4

0x0003,

0xf660,	// (0x00094478) blid_firmament_pane_t

0x172c,	// (0x00086544) blid_sat_info_pane

0x3de5,	// (0x00088bfd) blid_sat_info_pane_g1

0x3de5,	// (0x00088bfd) blid_sat_info_pane_g2

0x0001,

0xf3d8,	// (0x000941f0) blid_sat_info_pane_g

0x173c,	// (0x00086554) blid_sat_info_pane_t1

0x174a,	// (0x00086562) smil2_volume_content_pane

0x1753,	// (0x0008656b) smil2_volume_pane_g1

0x175b,	// (0x00086573) smil2_volume_content_pane_g1

0x1764,	// (0x0008657c) smil2_volume_content_pane_g2

0x176d,	// (0x00086585) smil2_volume_content_pane_g3

0x1776,	// (0x0008658e) smil2_volume_content_pane_g4

0x177f,	// (0x00086597) smil2_volume_content_pane_g5

0x1788,	// (0x000865a0) smil2_volume_content_pane_g6

0x1791,	// (0x000865a9) smil2_volume_content_pane_g7

0x179a,	// (0x000865b2) smil2_volume_content_pane_g8

0x17a3,	// (0x000865bb) smil2_volume_content_pane_g9

0x17ac,	// (0x000865c4) smil2_volume_content_pane_g10

0x0009,

0xf669,	// (0x00094481) smil2_volume_content_pane_g

0x3922,	// (0x0008873a) cale_week_day_heading_pane_t1_ParamLimits

0x394c,	// (0x00088764) cale_week_day_heading_pane_t2_ParamLimits

0x397b,	// (0x00088793) cale_week_day_heading_pane_t3_ParamLimits

0x39aa,	// (0x000887c2) cale_week_day_heading_pane_t4_ParamLimits

0x39d9,	// (0x000887f1) cale_week_day_heading_pane_t5_ParamLimits

0x3a10,	// (0x00088828) cale_week_day_heading_pane_t6_ParamLimits

0x3a47,	// (0x0008885f) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x00093fa4) cale_week_day_heading_pane_t_ParamLimits

0x3a71,	// (0x00088889) bg_cale_side_pane_ParamLimits

0x3a7f,	// (0x00088897) cale_week_time_pane_t1_ParamLimits

0x3a99,	// (0x000888b1) cale_week_time_pane_t2_ParamLimits

0x3ab3,	// (0x000888cb) cale_week_time_pane_t3_ParamLimits

0x3acd,	// (0x000888e5) cale_week_time_pane_t4_ParamLimits

0x3ae7,	// (0x000888ff) cale_week_time_pane_t5_ParamLimits

0x3b01,	// (0x00088919) cale_week_time_pane_t6_ParamLimits

0x3b1b,	// (0x00088933) cale_week_time_pane_t7_ParamLimits

0x3b35,	// (0x0008894d) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x00093fb3) cale_week_time_pane_t_ParamLimits

0x3b4f,	// (0x00088967) cell_cale_week_pane_g2_ParamLimits

0x3a71,	// (0x00088889) bg_cale_side_pane_cp01_ParamLimits

0x4ec9,	// (0x00089ce1) cale_month_week_pane_t1_ParamLimits

0x4ee2,	// (0x00089cfa) cale_month_week_pane_t2_ParamLimits

0x4efb,	// (0x00089d13) cale_month_week_pane_t3_ParamLimits

0x4f14,	// (0x00089d2c) cale_month_week_pane_t4_ParamLimits

0x4f2d,	// (0x00089d45) cale_month_week_pane_t5_ParamLimits

0x4f46,	// (0x00089d5e) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x00094081) cale_month_week_pane_t_ParamLimits

0xb645,	// (0x0009045d) cell_cale_month_pane_g1_ParamLimits

0xb5a3,	// (0x000903bb) main_cale_event_viewer_pane

0x0749,	// (0x00085561) listscroll_cale_event_viewer_pane

0x17b5,	// (0x000865cd) list_cale_ev_pane

0x17bd,	// (0x000865d5) scroll_pane_cp023

0x17c9,	// (0x000865e1) field_cale_ev_pane_ParamLimits

0x17c9,	// (0x000865e1) field_cale_ev_pane

0x17e7,	// (0x000865ff) field_cale_ev_content_pane_ParamLimits

0x17e7,	// (0x000865ff) field_cale_ev_content_pane

0x17f3,	// (0x0008660b) field_cale_ev_pane_g1_ParamLimits

0x17f3,	// (0x0008660b) field_cale_ev_pane_g1

0x17ff,	// (0x00086617) field_cale_ev_pane_g2_ParamLimits

0x17ff,	// (0x00086617) field_cale_ev_pane_g2

0x1817,	// (0x0008662f) field_cale_ev_pane_g3_ParamLimits

0x1817,	// (0x0008662f) field_cale_ev_pane_g3

0x0002,

0xf67e,	// (0x00094496) field_cale_ev_pane_g_ParamLimits

0xf67e,	// (0x00094496) field_cale_ev_pane_g

0x182f,	// (0x00086647) field_cale_ev_pane_t1_ParamLimits

0x182f,	// (0x00086647) field_cale_ev_pane_t1

0x1846,	// (0x0008665e) field_cale_ev_content_pane_t1_ParamLimits

0x1846,	// (0x0008665e) field_cale_ev_content_pane_t1

0xbedb,	// (0x00090cf3) bg_button_pane_cp01

0x35fa,	// (0x00088412) listscroll_cale_week_pane_ParamLimits

0x360c,	// (0x00088424) popup_toolbar_window_cp01

0x3865,	// (0x0008867d) listscroll_cale_week_pane_t1_ParamLimits

0x35fa,	// (0x00088412) listscroll_cale_day_pane_ParamLimits

0x360c,	// (0x00088424) popup_toolbar_window_cp02

0x5167,	// (0x00089f7f) listscroll_cale_day_pane_t1_ParamLimits

0x61a0,	// (0x0008afb8) main_cale_month_pane_ParamLimits

0xcc40,	// (0x00091a58) popup_toolbar_window_cp03_ParamLimits

0xcc40,	// (0x00091a58) popup_toolbar_window_cp03

0x5a60,	// (0x0008a878) main_image_pane_g2_ParamLimits

0x5a60,	// (0x0008a878) main_image_pane_g2

0x5a71,	// (0x0008a889) main_image_pane_g3_ParamLimits

0x5a71,	// (0x0008a889) main_image_pane_g3

0x0002,

0xf476,	// (0x0009428e) main_image_pane_g_ParamLimits

0xf476,	// (0x0009428e) main_image_pane_g

0xc02b,	// (0x00090e43) main_image_pane_t1_ParamLimits

0x5a82,	// (0x0008a89a) main_image_pane_t2_ParamLimits

0x5a82,	// (0x0008a89a) main_image_pane_t2

0x5a94,	// (0x0008a8ac) main_image_pane_t3_ParamLimits

0x5a94,	// (0x0008a8ac) main_image_pane_t3

0x5abc,	// (0x0008a8d4) main_image_pane_t4_ParamLimits

0x5abc,	// (0x0008a8d4) main_image_pane_t4

0x0003,

0xf47d,	// (0x00094295) main_image_pane_t_ParamLimits

0xf47d,	// (0x00094295) main_image_pane_t

0x5adc,	// (0x0008a8f4) popup_image_details_window_cp01

0x5ae6,	// (0x0008a8fe) popup_toobar_trans_pane_cp01_ParamLimits

0x5ae6,	// (0x0008a8fe) popup_toobar_trans_pane_cp01

0x62c5,	// (0x0008b0dd) popup_image_details_window_ParamLimits

0x62c5,	// (0x0008b0dd) popup_image_details_window

0xcc13,	// (0x00091a2b) popup_image_focus_window

0xcc77,	// (0x00091a8f) camera2_autofocus_pane_ParamLimits

0xcc77,	// (0x00091a8f) camera2_autofocus_pane

0x0749,	// (0x00085561) bg_popup_sub_pane_cp06

0x1864,	// (0x0008667c) popup_image_focus_window_g1

0x186c,	// (0x00086684) popup_image_focus_window_g2

0x1874,	// (0x0008668c) popup_image_focus_window_g3

0x187c,	// (0x00086694) popup_image_focus_window_g4

0x0003,

0xf685,	// (0x0009449d) popup_image_focus_window_g

0x1884,	// (0x0008669c) popup_image_focus_window_t1

0x1892,	// (0x000866aa) popup_image_focus_window_t2

0x18a2,	// (0x000866ba) popup_image_focus_window_t3

0x0002,

0xf68e,	// (0x000944a6) popup_image_focus_window_t

0x3167,	// (0x00087f7f) camera2_autofocus_pane_g1

0x0de3,	// (0x00085bfb) bg_tb_trans_pane_cp01

0x18b0,	// (0x000866c8) popup_image_details_window_g1

0x18c3,	// (0x000866db) popup_image_details_window_g2

0x0002,

0xf6a0,	// (0x000944b8) popup_image_details_window_g

0x18ec,	// (0x00086704) popup_image_details_window_t1

0x18fe,	// (0x00086716) popup_image_details_window_t2

0x1917,	// (0x0008672f) popup_image_details_window_t3

0x192b,	// (0x00086743) popup_image_details_window_t4

0x1946,	// (0x0008675e) popup_image_details_window_t5

0x0004,

0xf6a7,	// (0x000944bf) popup_image_details_window_t

0x3329,	// (0x00088141) bg_calc_paper_pane_ParamLimits

0xb5a3,	// (0x000903bb) grid_highlight_pane_cp013

0xb5b5,	// (0x000903cd) list_calc_pane_ParamLimits

0xb5c7,	// (0x000903df) scroll_pane_cp024

0x333d,	// (0x00088155) bg_calc_display_pane_ParamLimits

0x3349,	// (0x00088161) calc_display_pane_t1_ParamLimits

0x335e,	// (0x00088176) calc_display_pane_t2_ParamLimits

0xb5cf,	// (0x000903e7) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x00093f24) calc_display_pane_t_ParamLimits

0x3467,	// (0x0008827f) cell_calc_pane_g2

0x0001,

0xf129,	// (0x00093f41) cell_calc_pane_g

0x3470,	// (0x00088288) cell_calc_pane_t1

0x347f,	// (0x00088297) grid_highlight_pane_cp02_ParamLimits

0x3495,	// (0x000882ad) toolbar_button_pane_cp01_ParamLimits

0x3495,	// (0x000882ad) toolbar_button_pane_cp01

0xc070,	// (0x00090e88) temp_image_control_pane_ParamLimits

0xc070,	// (0x00090e88) temp_image_control_pane

0xb595,	// (0x000903ad) main_mp3_pane

0x1960,	// (0x00086778) temp_image_control_pane_g1_ParamLimits

0x1960,	// (0x00086778) temp_image_control_pane_g1

0x196e,	// (0x00086786) temp_image_control_pane_g2_ParamLimits

0x196e,	// (0x00086786) temp_image_control_pane_g2

0x1980,	// (0x00086798) temp_image_control_pane_g3_ParamLimits

0x1980,	// (0x00086798) temp_image_control_pane_g3

0x6784,	// (0x0008b59c) temp_image_control_pane_g4_ParamLimits

0x6784,	// (0x0008b59c) temp_image_control_pane_g4

0x0003,

0xf6b2,	// (0x000944ca) temp_image_control_pane_g_ParamLimits

0xf6b2,	// (0x000944ca) temp_image_control_pane_g

0x1960,	// (0x00086778) main_mp3_pane_g1

0x6797,	// (0x0008b5af) main_mp3_pane_g2

0x0007,

0xf6bb,	// (0x000944d3) main_mp3_pane_g

0x19b5,	// (0x000867cd) main_mp3_pane_t1

0x3175,	// (0x00087f8d) main_camera_pane_g8_ParamLimits

0x3175,	// (0x00087f8d) main_camera_pane_g8

0x3d93,	// (0x00088bab) main_video_pane_g7_ParamLimits

0x3d93,	// (0x00088bab) main_video_pane_g7

0xcc99,	// (0x00091ab1) main_camera2_pane_t7_ParamLimits

0xcc99,	// (0x00091ab1) main_camera2_pane_t7

0x436b,	// (0x00089183) scroll_pane_cp025_ParamLimits

0x436b,	// (0x00089183) scroll_pane_cp025

0x437f,	// (0x00089197) scroll_pane_cp026_ParamLimits

0x437f,	// (0x00089197) scroll_pane_cp026

0x438e,	// (0x000891a6) wml_content_pane_ParamLimits

0xb5a3,	// (0x000903bb) main_touch_calib_pane

0x686b,	// (0x0008b683) main_touch_calib_pane_g1

0x687d,	// (0x0008b695) main_touch_calib_pane_g2

0x688f,	// (0x0008b6a7) main_touch_calib_pane_g3

0x68a1,	// (0x0008b6b9) main_touch_calib_pane_g4

0x0003,

0xf6d9,	// (0x000944f1) main_touch_calib_pane_g

0x68b3,	// (0x0008b6cb) main_touch_calib_pane_t1

0x68cd,	// (0x0008b6e5) main_touch_calib_pane_t2

0x0004,

0xf6e2,	// (0x000944fa) main_touch_calib_pane_t

0xbc04,	// (0x00090a1c) mup_progress_pane_cp02

0xbc39,	// (0x00090a51) navi_pane_g1

0xbcf4,	// (0x00090b0c) navi_pane_mp_t3

0xb595,	// (0x000903ad) main_mp3_pane_ParamLimits

0x644a,	// (0x0008b262) navi_pane_ParamLimits

0x1960,	// (0x00086778) main_mp3_pane_g1_ParamLimits

0x6797,	// (0x0008b5af) main_mp3_pane_g2_ParamLimits

0x67a5,	// (0x0008b5bd) main_mp3_pane_g3_ParamLimits

0x67a5,	// (0x0008b5bd) main_mp3_pane_g3

0x67b3,	// (0x0008b5cb) main_mp3_pane_g4_ParamLimits

0x67b3,	// (0x0008b5cb) main_mp3_pane_g4

0x3167,	// (0x00087f7f) main_mp3_pane_g5_ParamLimits

0x3167,	// (0x00087f7f) main_mp3_pane_g5

0x1990,	// (0x000867a8) main_mp3_pane_g6_ParamLimits

0x1990,	// (0x000867a8) main_mp3_pane_g6

0x199d,	// (0x000867b5) main_mp3_pane_g7_ParamLimits

0x199d,	// (0x000867b5) main_mp3_pane_g7

0x19a9,	// (0x000867c1) main_mp3_pane_g8_ParamLimits

0x19a9,	// (0x000867c1) main_mp3_pane_g8

0xf6bb,	// (0x000944d3) main_mp3_pane_g_ParamLimits

0x67bf,	// (0x0008b5d7) main_mp3_pane_t2

0x67cd,	// (0x0008b5e5) main_mp3_pane_t3

0x19c3,	// (0x000867db) main_mp3_pane_t4

0x19d1,	// (0x000867e9) main_mp3_pane_t5

0x0005,

0xf6cc,	// (0x000944e4) main_mp3_pane_t

0x19df,	// (0x000867f7) mup_progress_pane_cp01

0xb54c,	// (0x00090364) aid_zoom_text_secondary2

0x17b5,	// (0x000865cd) list_cale_ev2_pane

0x17bd,	// (0x000865d5) scroll_pane_cp023_ParamLimits

0x6923,	// (0x0008b73b) field_cale_ev2_pane_ParamLimits

0x6923,	// (0x0008b73b) field_cale_ev2_pane

0x6943,	// (0x0008b75b) field_cale_ev2_pane_g1_ParamLimits

0x6943,	// (0x0008b75b) field_cale_ev2_pane_g1

0x694f,	// (0x0008b767) field_cale_ev2_pane_g2_ParamLimits

0x694f,	// (0x0008b767) field_cale_ev2_pane_g2

0x6967,	// (0x0008b77f) field_cale_ev2_pane_g3_ParamLimits

0x6967,	// (0x0008b77f) field_cale_ev2_pane_g3

0x0003,

0xf6ed,	// (0x00094505) field_cale_ev2_pane_g_ParamLimits

0xf6ed,	// (0x00094505) field_cale_ev2_pane_g

0xcd01,	// (0x00091b19) field_cale_ev2_pane_t1_ParamLimits

0xcd01,	// (0x00091b19) field_cale_ev2_pane_t1

0xcd18,	// (0x00091b30) field_cale_ev2_pane_t2_ParamLimits

0xcd18,	// (0x00091b30) field_cale_ev2_pane_t2

0x0001,

0xf6f6,	// (0x0009450e) field_cale_ev2_pane_t_ParamLimits

0xf6f6,	// (0x0009450e) field_cale_ev2_pane_t

0x5915,	// (0x0008a72d) main_postcard_pane_g5_ParamLimits

0x5915,	// (0x0008a72d) main_postcard_pane_g5

0x592b,	// (0x0008a743) main_postcard_pane_g6_ParamLimits

0x592b,	// (0x0008a743) main_postcard_pane_g6

0x0de3,	// (0x00085bfb) camera2_autofocus_pane_cp_ParamLimits

0x0de3,	// (0x00085bfb) camera2_autofocus_pane_cp

0xb595,	// (0x000903ad) main_mup3_pane

0x69c3,	// (0x0008b7db) main_mup3_pane_g1_ParamLimits

0x69c3,	// (0x0008b7db) main_mup3_pane_g1

0x69e5,	// (0x0008b7fd) main_mup3_pane_g2_ParamLimits

0x69e5,	// (0x0008b7fd) main_mup3_pane_g2

0x6a63,	// (0x0008b87b) main_mup3_pane_g3_ParamLimits

0x6a63,	// (0x0008b87b) main_mup3_pane_g3

0x6aa9,	// (0x0008b8c1) main_mup3_pane_g4_ParamLimits

0x6aa9,	// (0x0008b8c1) main_mup3_pane_g4

0x6aef,	// (0x0008b907) main_mup3_pane_g5_ParamLimits

0x6aef,	// (0x0008b907) main_mup3_pane_g5

0x6b35,	// (0x0008b94d) main_mup3_pane_g6_ParamLimits

0x6b35,	// (0x0008b94d) main_mup3_pane_g6

0x3175,	// (0x00087f8d) main_mup3_pane_g7_ParamLimits

0x3175,	// (0x00087f8d) main_mup3_pane_g7

0x0007,

0xf706,	// (0x0009451e) main_mup3_pane_g_ParamLimits

0xf706,	// (0x0009451e) main_mup3_pane_g

0x6bb3,	// (0x0008b9cb) main_mup3_pane_t1_ParamLimits

0x6bb3,	// (0x0008b9cb) main_mup3_pane_t1

0x6c27,	// (0x0008ba3f) main_mup3_pane_t2_ParamLimits

0x6c27,	// (0x0008ba3f) main_mup3_pane_t2

0x6cfb,	// (0x0008bb13) main_mup3_pane_t4_ParamLimits

0x6cfb,	// (0x0008bb13) main_mup3_pane_t4

0x6d51,	// (0x0008bb69) main_mup3_pane_t5_ParamLimits

0x6d51,	// (0x0008bb69) main_mup3_pane_t5

0x6e0d,	// (0x0008bc25) main_mup3_pane_t6_ParamLimits

0x6e0d,	// (0x0008bc25) main_mup3_pane_t6

0x0005,

0xf717,	// (0x0009452f) main_mup3_pane_t_ParamLimits

0xf717,	// (0x0009452f) main_mup3_pane_t

0x6ec5,	// (0x0008bcdd) mup3_progress_pane_ParamLimits

0x6ec5,	// (0x0008bcdd) mup3_progress_pane

0x6f5b,	// (0x0008bd73) popup_mup3_control_window_ParamLimits

0x6f5b,	// (0x0008bd73) popup_mup3_control_window

0x19e7,	// (0x000867ff) popup_mup3_text_window

0x6f8d,	// (0x0008bda5) mup3_progress_pane_t1

0x6fac,	// (0x0008bdc4) mup3_progress_pane_t2

0x19ef,	// (0x00086807) mup3_progress_pane_t3

0x0002,

0xf724,	// (0x0009453c) mup3_progress_pane_t

0x1a0c,	// (0x00086824) mup_progress_pane_cp03

0x0749,	// (0x00085561) bg_tb_trans_pane_cp04

0x6fcb,	// (0x0008bde3) mup3_volume_pane

0x6fd3,	// (0x0008bdeb) popup_mup3_control_window_g1

0x6fdc,	// (0x0008bdf4) mup3_volume_pane_g1

0x6fe5,	// (0x0008bdfd) mup3_volume_pane_g2

0x6fee,	// (0x0008be06) mup3_volume_pane_g3

0x0002,

0xf72b,	// (0x00094543) mup3_volume_pane_g

0x0749,	// (0x00085561) bg_tb_trans_pane_cp03

0x1a1c,	// (0x00086834) popup_mup3_text_window_g1

0x1a24,	// (0x0008683c) popup_mup3_text_window_t1

0x3440,	// (0x00088258) list_calc_item_pane_g1_ParamLimits

0x14a6,	// (0x000862be) mup_volume_pane_cp_g1

0x68e7,	// (0x0008b6ff) main_touch_calib_pane_t3

0x68fb,	// (0x0008b713) main_touch_calib_pane_t4

0x690f,	// (0x0008b727) main_touch_calib_pane_t5

0xb528,	// (0x00090340) aid_cell_size_toolbar2

0xb530,	// (0x00090348) aid_popup3_width_pane

0xb53c,	// (0x00090354) aid_zoom_text_msg_primary

0x3c40,	// (0x00088a58) vorec_t7

0x33a8,	// (0x000881c0) bg_calc_paper_pane_g1_ParamLimits

0x33b4,	// (0x000881cc) bg_calc_paper_pane_g2_ParamLimits

0x33c0,	// (0x000881d8) bg_calc_paper_pane_g3_ParamLimits

0x33cc,	// (0x000881e4) bg_calc_paper_pane_g4_ParamLimits

0x33d8,	// (0x000881f0) bg_calc_paper_pane_g5_ParamLimits

0x33e4,	// (0x000881fc) bg_calc_paper_pane_g6_ParamLimits

0x33f3,	// (0x0008820b) bg_calc_paper_pane_g7_ParamLimits

0x3402,	// (0x0008821a) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x00093f2b) bg_calc_paper_pane_g_ParamLimits

0x3415,	// (0x0008822d) calc_bg_paper_pane_g9_ParamLimits

0x0de3,	// (0x00085bfb) image_qvga_pane_ParamLimits

0x0de3,	// (0x00085bfb) image_qvga_pane

0x0dc1,	// (0x00085bd9) bg_popup_sub_pane_cp04_ParamLimits

0xbfa7,	// (0x00090dbf) popup_mup_playback_window_g1_ParamLimits

0xbfb3,	// (0x00090dcb) popup_mup_playback_window_t1_ParamLimits

0xbfc8,	// (0x00090de0) popup_mup_playback_window_t2_ParamLimits

0xf471,	// (0x00094289) popup_mup_playback_window_t_ParamLimits

0x3175,	// (0x00087f8d) main_mup2_pane_g3_ParamLimits

0x3175,	// (0x00087f8d) main_mup2_pane_g3

0x3ffc,	// (0x00088e14) popup_toolbar_window_cp04

0xc3aa,	// (0x000911c2) popup_call2_audio_second_window_g3_ParamLimits

0xc3aa,	// (0x000911c2) popup_call2_audio_second_window_g3

0xc7c2,	// (0x000915da) popup_call2_audio_first_window_g4_ParamLimits

0xc7c2,	// (0x000915da) popup_call2_audio_first_window_g4

0x1032,	// (0x00085e4a) popup_call2_audio_in_window_g4_ParamLimits

0x1032,	// (0x00085e4a) popup_call2_audio_in_window_g4

0x5a42,	// (0x0008a85a) aid_area_sk_bg_cut_ParamLimits

0x5a42,	// (0x0008a85a) aid_area_sk_bg_cut

0xbfdd,	// (0x00090df5) aid_area_sk_bg_cut_2_ParamLimits

0xbfdd,	// (0x00090df5) aid_area_sk_bg_cut_2

0x0749,	// (0x00085561) aid_placing_details_win

0x0749,	// (0x00085561) aid_placing_details_win_2

0x3167,	// (0x00087f7f) camera2_autofocus_pane_g1_ParamLimits

0x3056,	// (0x00087e6e) popup_fixed_preview_cale_window_ParamLimits

0x3056,	// (0x00087e6e) popup_fixed_preview_cale_window

0xbd7b,	// (0x00090b93) navi_slider_pane_g3

0xbd84,	// (0x00090b9c) navi_slider_pane_g4

0xbd8d,	// (0x00090ba5) navi_slider_pane_g5

0xbd7b,	// (0x00090b93) navi_slider_pane_g6

0xbd96,	// (0x00090bae) navi_slider_pane_g7

0xbea8,	// (0x00090cc0) mup_scale_pane_g3

0xbeb1,	// (0x00090cc9) mup_scale_pane_g4

0xbeba,	// (0x00090cd2) mup_scale_pane_g5

0x56e7,	// (0x0008a4ff) mup_scale_pane_g6

0x56f0,	// (0x0008a508) mup_scale_pane_g7

0x1f53,	// (0x00086d6b) cams2_slider_pane_g3

0x1f53,	// (0x00086d6b) cams2_slider_pane_g4

0x1f53,	// (0x00086d6b) cams2_slider_pane_g5

0x1f53,	// (0x00086d6b) cams2_slider_pane_g6

0x1f53,	// (0x00086d6b) cams2_slider_pane_g7

0x3de5,	// (0x00088bfd) camera2_autofocus_pane_cp_g1

0x1308,	// (0x00086120) bg_popup_preview_window_pane_cp02_ParamLimits

0x1308,	// (0x00086120) bg_popup_preview_window_pane_cp02

0x1a32,	// (0x0008684a) list_fp_cale_pane_ParamLimits

0x1a32,	// (0x0008684a) list_fp_cale_pane

0x1a3e,	// (0x00086856) popup_fixed_preview_cale_window_t1_ParamLimits

0x1a3e,	// (0x00086856) popup_fixed_preview_cale_window_t1

0x6ff7,	// (0x0008be0f) popup_fixed_preview_cale_window_t2_ParamLimits

0x6ff7,	// (0x0008be0f) popup_fixed_preview_cale_window_t2

0x700c,	// (0x0008be24) popup_fixed_preview_cale_window_t3_ParamLimits

0x700c,	// (0x0008be24) popup_fixed_preview_cale_window_t3

0x0002,

0xf732,	// (0x0009454a) popup_fixed_preview_cale_window_t_ParamLimits

0xf732,	// (0x0009454a) popup_fixed_preview_cale_window_t

0x7021,	// (0x0008be39) list_single_fp_cale_pane_ParamLimits

0x7021,	// (0x0008be39) list_single_fp_cale_pane

0x1a5c,	// (0x00086874) list_single_fp_cale_pane_g1_ParamLimits

0x1a5c,	// (0x00086874) list_single_fp_cale_pane_g1

0x1a68,	// (0x00086880) list_single_fp_cale_pane_g2_ParamLimits

0x1a68,	// (0x00086880) list_single_fp_cale_pane_g2

0x0002,

0xf739,	// (0x00094551) list_single_fp_cale_pane_g_ParamLimits

0xf739,	// (0x00094551) list_single_fp_cale_pane_g

0x1a81,	// (0x00086899) list_single_fp_cale_pane_t1_ParamLimits

0x1a81,	// (0x00086899) list_single_fp_cale_pane_t1

0x1a93,	// (0x000868ab) list_single_fp_cale_pane_t2_ParamLimits

0x1a93,	// (0x000868ab) list_single_fp_cale_pane_t2

0x0001,

0xf740,	// (0x00094558) list_single_fp_cale_pane_t_ParamLimits

0xf740,	// (0x00094558) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb5a3,	// (0x000903bb) main_dialer_pane

0x0749,	// (0x00085561) aid_cell_size_keypad

0x0749,	// (0x00085561) dialer_ne_pane

0x0749,	// (0x00085561) grid_dialer_command_1_pane

0x0749,	// (0x00085561) grid_dialer_command_2_pane

0x0749,	// (0x00085561) grid_dialer_keypad_pane

0x7036,	// (0x0008be4e) bg_popup_call_pane_cp06_ParamLimits

0x7036,	// (0x0008be4e) bg_popup_call_pane_cp06

0x7036,	// (0x0008be4e) dialer_ne_clear_pane_ParamLimits

0x7036,	// (0x0008be4e) dialer_ne_clear_pane

0x3de5,	// (0x00088bfd) dialer_ne_pane_g1

0xbe32,	// (0x00090c4a) dialer_ne_pane_t1_ParamLimits

0xbe32,	// (0x00090c4a) dialer_ne_pane_t1

0x7044,	// (0x0008be5c) dialer_ne_pane_t2_ParamLimits

0x7044,	// (0x0008be5c) dialer_ne_pane_t2

0x706c,	// (0x0008be84) dialer_ne_pane_t3_ParamLimits

0x706c,	// (0x0008be84) dialer_ne_pane_t3

0x0002,

0xf745,	// (0x0009455d) dialer_ne_pane_t_ParamLimits

0xf745,	// (0x0009455d) dialer_ne_pane_t

0x706c,	// (0x0008be84) dialer_ne_pane_t3_copy1_ParamLimits

0x706c,	// (0x0008be84) dialer_ne_pane_t3_copy1

0x1ae3,	// (0x000868fb) cell_dialer_keypad_pane_ParamLimits

0x1ae3,	// (0x000868fb) cell_dialer_keypad_pane

0x0de3,	// (0x00085bfb) cell_dialer_command_1_pane_ParamLimits

0x0de3,	// (0x00085bfb) cell_dialer_command_1_pane

0x1afa,	// (0x00086912) cell_dialer_command_2_pane_ParamLimits

0x1afa,	// (0x00086912) cell_dialer_command_2_pane

0x0de3,	// (0x00085bfb) bg_button_pane_cp02_ParamLimits

0x0de3,	// (0x00085bfb) bg_button_pane_cp02

0x3167,	// (0x00087f7f) cell_dialer_keypad_pane_g1_ParamLimits

0x3167,	// (0x00087f7f) cell_dialer_keypad_pane_g1

0x0de3,	// (0x00085bfb) bg_button_pane_cp03_ParamLimits

0x0de3,	// (0x00085bfb) bg_button_pane_cp03

0x3167,	// (0x00087f7f) cell_dialer_command_1_pane_g1_ParamLimits

0x3167,	// (0x00087f7f) cell_dialer_command_1_pane_g1

0x0749,	// (0x00085561) bg_button_pane_cp04

0x3de5,	// (0x00088bfd) cell_dialer_command_2_pane_g1

0x0749,	// (0x00085561) bg_button_pane_cp06

0x3de5,	// (0x00088bfd) dialer_ne_clear_pane_g1

0xbc45,	// (0x00090a5d) navi_pane_g2

0xbc73,	// (0x00090a8b) navi_pane_g3

0x0002,

0xf374,	// (0x0009418c) navi_pane_g

0xbd02,	// (0x00090b1a) navi_pane_mv_g2

0xbd29,	// (0x00090b41) navi_pane_mv_g5

0x54ca,	// (0x0008a2e2) navi_pane_mv_t1

0x333d,	// (0x00088155) main_clock2_pane

0x0de3,	// (0x00085bfb) main_clock2_list_pane_ParamLimits

0x0de3,	// (0x00085bfb) main_clock2_list_pane

0x7102,	// (0x0008bf1a) main_clock2_pane_t1_ParamLimits

0x7102,	// (0x0008bf1a) main_clock2_pane_t1

0x713d,	// (0x0008bf55) main_clock2_pane_t2_ParamLimits

0x713d,	// (0x0008bf55) main_clock2_pane_t2

0x0004,

0xf751,	// (0x00094569) main_clock2_pane_t_ParamLimits

0xf751,	// (0x00094569) main_clock2_pane_t

0x71dd,	// (0x0008bff5) popup_clock_analogue_window_cp03_ParamLimits

0x71dd,	// (0x0008bff5) popup_clock_analogue_window_cp03

0x7202,	// (0x0008c01a) popup_clock_digital_window_cp02_ParamLimits

0x7202,	// (0x0008c01a) popup_clock_digital_window_cp02

0x727b,	// (0x0008c093) main_clock2_list_single_pane_ParamLimits

0x727b,	// (0x0008c093) main_clock2_list_single_pane

0x3bf8,	// (0x00088a10) list_highlight_pane_cp05

0x1b41,	// (0x00086959) main_clock2_list_single_pane_t1

0x3ffc,	// (0x00088e14) popup_toolbar_window_cp04_ParamLimits

0x3175,	// (0x00087f8d) camera2_autofocus_pane_g2_ParamLimits

0x3175,	// (0x00087f8d) camera2_autofocus_pane_g2

0x3175,	// (0x00087f8d) camera2_autofocus_pane_g3_ParamLimits

0x3175,	// (0x00087f8d) camera2_autofocus_pane_g3

0x3175,	// (0x00087f8d) camera2_autofocus_pane_g4_ParamLimits

0x3175,	// (0x00087f8d) camera2_autofocus_pane_g4

0x3175,	// (0x00087f8d) camera2_autofocus_pane_g5_ParamLimits

0x3175,	// (0x00087f8d) camera2_autofocus_pane_g5

0x0004,

0xf695,	// (0x000944ad) camera2_autofocus_pane_g_ParamLimits

0xf695,	// (0x000944ad) camera2_autofocus_pane_g

0x697f,	// (0x0008b797) camera2_autofocus_pane_cp_g2

0x6987,	// (0x0008b79f) camera2_autofocus_pane_cp_g3

0x698f,	// (0x0008b7a7) camera2_autofocus_pane_cp_g4

0x6997,	// (0x0008b7af) camera2_autofocus_pane_cp_g5

0x0004,

0xf6fb,	// (0x00094513) camera2_autofocus_pane_cp_g

0x0749,	// (0x00085561) popup_dialer_spcha_window

0x0749,	// (0x00085561) bg_popup_sub_pane_cp07

0x0749,	// (0x00085561) list_spcha_pane

0x1b4f,	// (0x00086967) list_single_spcha_pane_ParamLimits

0x1b4f,	// (0x00086967) list_single_spcha_pane

0x0749,	// (0x00085561) list_highlight_pane_cp06

0xb807,	// (0x0009061f) list_single_spcha_pane_t1

0xcb93,	// (0x000919ab) popup_call2_audio_out_window_g4_ParamLimits

0xcb93,	// (0x000919ab) popup_call2_audio_out_window_g4

0xb5a3,	// (0x000903bb) main_imed2_pane

0xcc1b,	// (0x00091a33) popup_imed_adjust2_window

0x62dd,	// (0x0008b0f5) popup_imed_trans_window_ParamLimits

0x62dd,	// (0x0008b0f5) popup_imed_trans_window

0x157b,	// (0x00086393) popup_blid_sat_info2_window_t1

0x1589,	// (0x000863a1) popup_blid_sat_info2_window_t2

0x000a,

0xf62a,	// (0x00094442) popup_blid_sat_info2_window_t

0x732c,	// (0x0008c144) aid_size_cell_colour_35

0x734c,	// (0x0008c164) aid_size_cell_colour_112

0x736c,	// (0x0008c184) aid_size_cell_effect

0x1314,	// (0x0008612c) bg_tb_trans_pane_cp02

0xb739,	// (0x00090551) heading_imed_pane

0x738c,	// (0x0008c1a4) listscroll_imed_pane

0x1b6d,	// (0x00086985) heading_imed_pane_g1

0x1b75,	// (0x0008698d) heading_imed_pane_t1

0x1b83,	// (0x0008699b) grid_imed_colour_35_pane_ParamLimits

0x1b83,	// (0x0008699b) grid_imed_colour_35_pane

0x7398,	// (0x0008c1b0) grid_imed_effect_pane

0x1b9a,	// (0x000869b2) list_imed_aspect_pane

0x73ae,	// (0x0008c1c6) scroll_pane_cp027_ParamLimits

0x73ae,	// (0x0008c1c6) scroll_pane_cp027

0x73bf,	// (0x0008c1d7) cell_imed_effect_pane_ParamLimits

0x73bf,	// (0x0008c1d7) cell_imed_effect_pane

0x1ba2,	// (0x000869ba) cell_imed_colour_pane_ParamLimits

0x1ba2,	// (0x000869ba) cell_imed_colour_pane

0x1be4,	// (0x000869fc) cell_imed_colour_pane_g1_ParamLimits

0x1be4,	// (0x000869fc) cell_imed_colour_pane_g1

0x1bf5,	// (0x00086a0d) hgihlgiht_grid_pane_cp016_ParamLimits

0x1bf5,	// (0x00086a0d) hgihlgiht_grid_pane_cp016

0x73e6,	// (0x0008c1fe) cell_imed_effect_pane_g1

0x73ee,	// (0x0008c206) grid_highlight_pane_cp017

0x1c06,	// (0x00086a1e) list_imed_single_pane_ParamLimits

0x1c06,	// (0x00086a1e) list_imed_single_pane

0x0749,	// (0x00085561) list_highlight_pane_cp07

0x1c1b,	// (0x00086a33) list_imed_aspect_pane_comp1_t1

0x1314,	// (0x0008612c) bg_tb_trans_pane_cp05

0x1c3d,	// (0x00086a55) popup_imed_adjust2_window_g1

0x1c64,	// (0x00086a7c) popup_imed_adjust2_window_t1

0x1c7c,	// (0x00086a94) slider_imed_adjust_pane

0x1c90,	// (0x00086aa8) slider_imed_adjust_pane_g1

0x1ca0,	// (0x00086ab8) slider_imed_adjust_pane_g2

0x1cb0,	// (0x00086ac8) slider_imed_adjust_pane_g3

0x1cc1,	// (0x00086ad9) slider_imed_adjust_pane_g4

0x0003,

0xf76e,	// (0x00094586) slider_imed_adjust_pane_g

0x73f7,	// (0x0008c20f) aid_size_cell_clipart2

0x7403,	// (0x0008c21b) grid_imed_clipart_pane

0x1cd2,	// (0x00086aea) scroll_pane_cp031

0x740d,	// (0x0008c225) cell_imed_clipart_pane_ParamLimits

0x740d,	// (0x0008c225) cell_imed_clipart_pane

0x742f,	// (0x0008c247) cell_imed_clipart_pane_g1

0x0749,	// (0x00085561) grid_highlight_pane_cp014

0x70de,	// (0x0008bef6) main_clock2_pane_g1_ParamLimits

0x70de,	// (0x0008bef6) main_clock2_pane_g1

0x7222,	// (0x0008c03a) aid_call2_pane_cp10

0x7234,	// (0x0008c04c) aid_call_pane_cp10

0xbba6,	// (0x000909be) popup_clock_analogue_window_cp10_g1

0xbba6,	// (0x000909be) popup_clock_analogue_window_cp10_g2

0x7246,	// (0x0008c05e) popup_clock_analogue_window_cp10_g3

0x7246,	// (0x0008c05e) popup_clock_analogue_window_cp10_g4

0xbba6,	// (0x000909be) popup_clock_analogue_window_cp10_g5

0x0004,

0xf75c,	// (0x00094574) popup_clock_analogue_window_cp10_g

0x725c,	// (0x0008c074) popup_clock_analogue_window_cp10_t1

0x728d,	// (0x0008c0a5) clock_digital_number_pane_cp10_ParamLimits

0x728d,	// (0x0008c0a5) clock_digital_number_pane_cp10

0x72a5,	// (0x0008c0bd) clock_digital_number_pane_cp11_ParamLimits

0x72a5,	// (0x0008c0bd) clock_digital_number_pane_cp11

0x72bd,	// (0x0008c0d5) clock_digital_number_pane_cp12_ParamLimits

0x72bd,	// (0x0008c0d5) clock_digital_number_pane_cp12

0x72d7,	// (0x0008c0ef) clock_digital_number_pane_cp13_ParamLimits

0x72d7,	// (0x0008c0ef) clock_digital_number_pane_cp13

0x72f1,	// (0x0008c109) clock_digital_separator_pane_cp10_ParamLimits

0x72f1,	// (0x0008c109) clock_digital_separator_pane_cp10

0x730b,	// (0x0008c123) popup_clock_digital_window_cp02_t1_ParamLimits

0x730b,	// (0x0008c123) popup_clock_digital_window_cp02_t1

0x0db9,	// (0x00085bd1) clock_digital_number_pane_cp10_g1

0x0db9,	// (0x00085bd1) clock_digital_number_pane_cp10_g2

0x0001,

0xf777,	// (0x0009458f) clock_digital_number_pane_cp10_g

0x0db9,	// (0x00085bd1) clock_digital_separator_pane_cp10_g1

0x0db9,	// (0x00085bd1) clock_digital_separator_pane_g2_cp10

0xbd31,	// (0x00090b49) navi_pane_vded_g4

0xbd3a,	// (0x00090b52) navi_pane_vded_g5

0xbd43,	// (0x00090b5b) navi_pane_vded_t1

0xb5a3,	// (0x000903bb) main_vded_pane

0x7438,	// (0x0008c250) main_vded_pane_g1

0x7442,	// (0x0008c25a) main_vded_pane_g2

0x744c,	// (0x0008c264) main_vded_pane_g3

0x0002,

0xf77c,	// (0x00094594) main_vded_pane_g

0x7456,	// (0x0008c26e) main_vded_pane_t1

0x7464,	// (0x0008c27c) main_vded_pane_t2

0x0001,

0xf783,	// (0x0009459b) main_vded_pane_t

0x7472,	// (0x0008c28a) vded_slider_pane

0x747a,	// (0x0008c292) vded_video_pane

0x1cda,	// (0x00086af2) vded_video_pane_g1

0x7482,	// (0x0008c29a) vded_video_pane_g2

0x3de5,	// (0x00088bfd) vded_video_pane_g3

0x0002,

0xf788,	// (0x000945a0) vded_video_pane_g

0x1ce4,	// (0x00086afc) vded_slider_pane_g1

0x14a6,	// (0x000862be) vded_slider_pane_g2

0x1ced,	// (0x00086b05) vded_slider_pane_g3

0x1cf6,	// (0x00086b0e) vded_slider_pane_g4

0x1cff,	// (0x00086b17) vded_slider_pane_g5

0x0004,

0xf78f,	// (0x000945a7) vded_slider_pane_g

0x6f43,	// (0x0008bd5b) mup3_rocker_pane_ParamLimits

0x6f43,	// (0x0008bd5b) mup3_rocker_pane

0x748b,	// (0x0008c2a3) mup3_control_keys_pane_g1

0x7493,	// (0x0008c2ab) mup3_control_keys_pane_g2

0x749b,	// (0x0008c2b3) mup3_control_keys_pane_g3

0x74a3,	// (0x0008c2bb) mup3_control_keys_pane_g4

0x0003,

0xf79a,	// (0x000945b2) mup3_control_keys_pane_g

0x308d,	// (0x00087ea5) popup_toolbar2_fixed_window_cp01_ParamLimits

0x308d,	// (0x00087ea5) popup_toolbar2_fixed_window_cp01

0x6f77,	// (0x0008bd8f) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6f77,	// (0x0008bd8f) popup_toolbar2_fixed_window_cp02

0xc51c,	// (0x00091334) popup_call2_audio_second_window_t4_ParamLimits

0xc51c,	// (0x00091334) popup_call2_audio_second_window_t4

0xca58,	// (0x00091870) popup_call2_audio_first_window_t6_ParamLimits

0xca58,	// (0x00091870) popup_call2_audio_first_window_t6

0x0edf,	// (0x00085cf7) popup_call2_audio_out_window_t6_ParamLimits

0x0edf,	// (0x00085cf7) popup_call2_audio_out_window_t6

0xb5a3,	// (0x000903bb) main_vitu_pane

0x0de3,	// (0x00085bfb) aid_size_cell_itu_ParamLimits

0x0de3,	// (0x00085bfb) aid_size_cell_itu

0x0de3,	// (0x00085bfb) bg_popup_window_pane_cp08_ParamLimits

0x0de3,	// (0x00085bfb) bg_popup_window_pane_cp08

0x0de3,	// (0x00085bfb) field_vitu_entry_pane_ParamLimits

0x0de3,	// (0x00085bfb) field_vitu_entry_pane

0x0de3,	// (0x00085bfb) grid_vitu_function_pane_ParamLimits

0x0de3,	// (0x00085bfb) grid_vitu_function_pane

0x0de3,	// (0x00085bfb) grid_vitu_itu_pane_ParamLimits

0x0de3,	// (0x00085bfb) grid_vitu_itu_pane

0x0de3,	// (0x00085bfb) cell_vitu_itu_pane_ParamLimits

0x0de3,	// (0x00085bfb) cell_vitu_itu_pane

0x0de3,	// (0x00085bfb) cell_vitu_function_pane_ParamLimits

0x0de3,	// (0x00085bfb) cell_vitu_function_pane

0x0de3,	// (0x00085bfb) bg_popup_sub_pane_cp08_ParamLimits

0x0de3,	// (0x00085bfb) bg_popup_sub_pane_cp08

0x3c61,	// (0x00088a79) field_vitu_entry_pane_t1_ParamLimits

0x3c61,	// (0x00088a79) field_vitu_entry_pane_t1

0x1ac6,	// (0x000868de) field_vitu_entry_pane_t2_ParamLimits

0x1ac6,	// (0x000868de) field_vitu_entry_pane_t2

0x0001,

0xf7a3,	// (0x000945bb) field_vitu_entry_pane_t_ParamLimits

0xf7a3,	// (0x000945bb) field_vitu_entry_pane_t

0xcce7,	// (0x00091aff) bg_button_pane_cp05_ParamLimits

0xcce7,	// (0x00091aff) bg_button_pane_cp05

0x1d08,	// (0x00086b20) cell_vitu_itu_pane_g1

0x1d24,	// (0x00086b3c) cell_vitu_itu_pane_t1_ParamLimits

0x1d24,	// (0x00086b3c) cell_vitu_itu_pane_t1

0x1d24,	// (0x00086b3c) cell_vitu_itu_pane_t2_ParamLimits

0x1d24,	// (0x00086b3c) cell_vitu_itu_pane_t2

0x0002,

0xf7a8,	// (0x000945c0) cell_vitu_itu_pane_t_ParamLimits

0xf7a8,	// (0x000945c0) cell_vitu_itu_pane_t

0x0749,	// (0x00085561) bg_button_pane_cp07

0x3de5,	// (0x00088bfd) cell_vitu_function_pane_g1

0xb5ad,	// (0x000903c5) main_calc_pane_g1

0x2eb4,	// (0x00087ccc) aid_visual_content_pane

0xb5a3,	// (0x000903bb) main_vradio_pane

0x3167,	// (0x00087f7f) main_vradio_pane_g1_ParamLimits

0x3167,	// (0x00087f7f) main_vradio_pane_g1

0x3175,	// (0x00087f8d) main_vradio_pane_g2_ParamLimits

0x3175,	// (0x00087f8d) main_vradio_pane_g2

0x0001,

0xf7af,	// (0x000945c7) main_vradio_pane_g_ParamLimits

0xf7af,	// (0x000945c7) main_vradio_pane_g

0x3c61,	// (0x00088a79) main_vradio_pane_t1_ParamLimits

0x3c61,	// (0x00088a79) main_vradio_pane_t1

0x3c61,	// (0x00088a79) main_vradio_pane_t2_ParamLimits

0x3c61,	// (0x00088a79) main_vradio_pane_t2

0xbe32,	// (0x00090c4a) main_vradio_pane_t3_ParamLimits

0xbe32,	// (0x00090c4a) main_vradio_pane_t3

0x0002,

0xf7b4,	// (0x000945cc) main_vradio_pane_t_ParamLimits

0xf7b4,	// (0x000945cc) main_vradio_pane_t

0x0de3,	// (0x00085bfb) vradio_rocker_control_pane_ParamLimits

0x0de3,	// (0x00085bfb) vradio_rocker_control_pane

0x0de3,	// (0x00085bfb) vradio_station_info_pane_ParamLimits

0x0de3,	// (0x00085bfb) vradio_station_info_pane

0x0de3,	// (0x00085bfb) vradio_frequency_info_pane_ParamLimits

0x0de3,	// (0x00085bfb) vradio_frequency_info_pane

0x3de5,	// (0x00088bfd) vradio_station_info_pane_g1

0x1d24,	// (0x00086b3c) vradio_station_info_pane_t1_ParamLimits

0x1d24,	// (0x00086b3c) vradio_station_info_pane_t1

0xbe32,	// (0x00090c4a) vradio_station_info_pane_t2_ParamLimits

0xbe32,	// (0x00090c4a) vradio_station_info_pane_t2

0x0001,

0xf7bb,	// (0x000945d3) vradio_station_info_pane_t_ParamLimits

0xf7bb,	// (0x000945d3) vradio_station_info_pane_t

0x0749,	// (0x00085561) vradio_tuning_pane

0x74b3,	// (0x0008c2cb) vradio_rocker_control_pane_g1

0x1d38,	// (0x00086b50) vradio_rocker_control_pane_g2

0x74bd,	// (0x0008c2d5) vradio_rocker_control_pane_g3

0x74c7,	// (0x0008c2df) vradio_rocker_control_pane_g4

0x74d1,	// (0x0008c2e9) vradio_rocker_control_pane_g5

0x0004,

0xf7c0,	// (0x000945d8) vradio_rocker_control_pane_g

0x3de5,	// (0x00088bfd) vradio_frequency_info_pane_g1

0x3c61,	// (0x00088a79) vradio_frequency_info_pane_t1_ParamLimits

0x3c61,	// (0x00088a79) vradio_frequency_info_pane_t1

0x74db,	// (0x0008c2f3) vradio_tuning_pane_g1

0x74e8,	// (0x0008c300) vradio_tuning_pane_t1

0xb554,	// (0x0009036c) area_side_right_pane_ParamLimits

0xb554,	// (0x0009036c) area_side_right_pane

0x12cf,	// (0x000860e7) status_small_pane_g1

0x12d7,	// (0x000860ef) status_small_pane_g2

0x12e0,	// (0x000860f8) status_small_pane_g3

0x12e9,	// (0x00086101) status_small_pane_g4

0x0003,

0xf58c,	// (0x000943a4) status_small_pane_g

0x12f2,	// (0x0008610a) status_small_pane_t1

0xb5a3,	// (0x000903bb) main_video3_pane

0x1d40,	// (0x00086b58) cams_zoom_vslider_pane

0x1d48,	// (0x00086b60) image3_wide_pane_ParamLimits

0x1d48,	// (0x00086b60) image3_wide_pane

0x1d62,	// (0x00086b7a) image3_wide_small_pane

0x1d6e,	// (0x00086b86) main_video3_pane_g1_ParamLimits

0x1d6e,	// (0x00086b86) main_video3_pane_g1

0x1d8a,	// (0x00086ba2) main_video3_pane_g2_ParamLimits

0x1d8a,	// (0x00086ba2) main_video3_pane_g2

0x0001,

0xf7cb,	// (0x000945e3) main_video3_pane_g_ParamLimits

0xf7cb,	// (0x000945e3) main_video3_pane_g

0x1da6,	// (0x00086bbe) main_video3_pane_t1_ParamLimits

0x1da6,	// (0x00086bbe) main_video3_pane_t1

0x1dd1,	// (0x00086be9) main_video3_pane_t2_ParamLimits

0x1dd1,	// (0x00086be9) main_video3_pane_t2

0x1dfc,	// (0x00086c14) main_video3_pane_t3_ParamLimits

0x1dfc,	// (0x00086c14) main_video3_pane_t3

0x0002,

0xf7d0,	// (0x000945e8) main_video3_pane_t_ParamLimits

0xf7d0,	// (0x000945e8) main_video3_pane_t

0x1e29,	// (0x00086c41) cams_zoom_vslider_pane_g1

0x1e32,	// (0x00086c4a) cams_zoom_vslider_pane_g2

0x0001,

0xf7d7,	// (0x000945ef) cams_zoom_vslider_pane_g

0x1e3a,	// (0x00086c52) small_slider_vertical_pane

0x3de5,	// (0x00088bfd) small_slider_vertical_pane_g1

0x3de5,	// (0x00088bfd) small_slider_vertical_pane_g2

0x1e42,	// (0x00086c5a) small_slider_vertical_pane_g3

0x0002,

0xf7dc,	// (0x000945f4) small_slider_vertical_pane_g

0xb5a3,	// (0x000903bb) main_hwr_training_pane

0x1e4b,	// (0x00086c63) hwr_training_instruct_pane_ParamLimits

0x1e4b,	// (0x00086c63) hwr_training_instruct_pane

0x74f7,	// (0x0008c30f) hwr_training_navi_pane_ParamLimits

0x74f7,	// (0x0008c30f) hwr_training_navi_pane

0x7516,	// (0x0008c32e) hwr_training_write_pane_ParamLimits

0x7516,	// (0x0008c32e) hwr_training_write_pane

0x0749,	// (0x00085561) bg_frame_shadow_pane

0x1e82,	// (0x00086c9a) hwr_training_write_pane_g1

0x1e8a,	// (0x00086ca2) hwr_training_write_pane_g2

0x1e92,	// (0x00086caa) hwr_training_write_pane_g3

0x1e9a,	// (0x00086cb2) hwr_training_write_pane_g4

0x1ea2,	// (0x00086cba) hwr_training_write_pane_g5

0x1eaa,	// (0x00086cc2) hwr_training_write_pane_g6

0x1eb2,	// (0x00086cca) hwr_training_write_pane_g7

0x0006,

0xf7e3,	// (0x000945fb) hwr_training_write_pane_g

0xeb9c,	// (0x000939b4) hwr_training_navi_pane_g1_ParamLimits

0xeb9c,	// (0x000939b4) hwr_training_navi_pane_g1

0xebae,	// (0x000939c6) hwr_training_navi_pane_g2_ParamLimits

0xebae,	// (0x000939c6) hwr_training_navi_pane_g2

0xebc0,	// (0x000939d8) hwr_training_navi_pane_g3_ParamLimits

0xebc0,	// (0x000939d8) hwr_training_navi_pane_g3

0xebd0,	// (0x000939e8) hwr_training_navi_pane_g4_ParamLimits

0xebd0,	// (0x000939e8) hwr_training_navi_pane_g4

0x0004,

0xf7f2,	// (0x0009460a) hwr_training_navi_pane_g_ParamLimits

0xf7f2,	// (0x0009460a) hwr_training_navi_pane_g

0xebdd,	// (0x000939f5) hwr_training_navi_pane_t1

0x755e,	// (0x0008c376) list_single_hwr_training_instruct_pane_ParamLimits

0x755e,	// (0x0008c376) list_single_hwr_training_instruct_pane

0x1eba,	// (0x00086cd2) list_single_hwr_training_instruct_pane_t1

0x167c,	// (0x00086494) bg_frame_shadow_pane_g1

0x1ec9,	// (0x00086ce1) bg_frame_shadow_pane_g2

0x1ed1,	// (0x00086ce9) bg_frame_shadow_pane_g3

0x1ed9,	// (0x00086cf1) bg_frame_shadow_pane_g4

0x1ee1,	// (0x00086cf9) bg_frame_shadow_pane_g5

0x1ee9,	// (0x00086d01) bg_frame_shadow_pane_g6

0x1ef1,	// (0x00086d09) bg_frame_shadow_pane_g7

0x357b,	// (0x00088393) bg_frame_shadow_pane_g8

0x0007,

0xf7fd,	// (0x00094615) bg_frame_shadow_pane_g

0xb5a3,	// (0x000903bb) main_video_tele_dialer_pane

0x7573,	// (0x0008c38b) aid_size_cell_video_keypad_ParamLimits

0x7573,	// (0x0008c38b) aid_size_cell_video_keypad

0x758d,	// (0x0008c3a5) grid_video_dialer_keypad_pane_ParamLimits

0x758d,	// (0x0008c3a5) grid_video_dialer_keypad_pane

0x75d9,	// (0x0008c3f1) video_down_pane_cp_ParamLimits

0x75d9,	// (0x0008c3f1) video_down_pane_cp

0x760b,	// (0x0008c423) cell_video_dialer_keypad_pane_ParamLimits

0x760b,	// (0x0008c423) cell_video_dialer_keypad_pane

0x1ef9,	// (0x00086d11) bg_button_pane_cp08_ParamLimits

0x1ef9,	// (0x00086d11) bg_button_pane_cp08

0x762d,	// (0x0008c445) cell_video_dialer_keypad_pane_g1_ParamLimits

0x762d,	// (0x0008c445) cell_video_dialer_keypad_pane_g1

0x6f2d,	// (0x0008bd45) mup3_rocker2_pane_ParamLimits

0x6f2d,	// (0x0008bd45) mup3_rocker2_pane

0x3de5,	// (0x00088bfd) mup3_rocker2_pane_g1

0x61b2,	// (0x0008afca) main_dialer2_pane

0xb5a3,	// (0x000903bb) main_mp4_pane

0xec09,	// (0x00093a21) main_mp4_pane_g1_ParamLimits

0xec09,	// (0x00093a21) main_mp4_pane_g1

0xec09,	// (0x00093a21) main_mp4_pane_g2_ParamLimits

0xec09,	// (0x00093a21) main_mp4_pane_g2

0x7664,	// (0x0008c47c) main_mp4_pane_g3_ParamLimits

0x7664,	// (0x0008c47c) main_mp4_pane_g3

0xec17,	// (0x00093a2f) main_mp4_pane_g4_ParamLimits

0xec17,	// (0x00093a2f) main_mp4_pane_g4

0xec45,	// (0x00093a5d) main_mp4_pane_g5_ParamLimits

0xec45,	// (0x00093a5d) main_mp4_pane_g5

0x0007,

0xf81d,	// (0x00094635) main_mp4_pane_g_ParamLimits

0xf81d,	// (0x00094635) main_mp4_pane_g

0xecb9,	// (0x00093ad1) main_mp4_pane_t1_ParamLimits

0xecb9,	// (0x00093ad1) main_mp4_pane_t1

0xed15,	// (0x00093b2d) main_mp4_pane_t2_ParamLimits

0xed15,	// (0x00093b2d) main_mp4_pane_t2

0x1f05,	// (0x00086d1d) main_mp4_pane_t3_ParamLimits

0x1f05,	// (0x00086d1d) main_mp4_pane_t3

0xed67,	// (0x00093b7f) main_mp4_pane_t4_ParamLimits

0xed67,	// (0x00093b7f) main_mp4_pane_t4

0x0003,

0xf82e,	// (0x00094646) main_mp4_pane_t_ParamLimits

0xf82e,	// (0x00094646) main_mp4_pane_t

0xedab,	// (0x00093bc3) mp4_progress_pane_ParamLimits

0xedab,	// (0x00093bc3) mp4_progress_pane

0xedf5,	// (0x00093c0d) mp4_rocker_pane_ParamLimits

0xedf5,	// (0x00093c0d) mp4_rocker_pane

0xcd35,	// (0x00091b4d) mp4_progress_pane_t1

0xcd4e,	// (0x00091b66) mp4_progress_pane_t2

0x0001,

0xf837,	// (0x0009464f) mp4_progress_pane_t

0xcd67,	// (0x00091b7f) mup_progress_pane_cp04

0x1f53,	// (0x00086d6b) mp4_rocker_pane_g1

0x76a0,	// (0x0008c4b8) aid_cell_size_keypad2_ParamLimits

0x76a0,	// (0x0008c4b8) aid_cell_size_keypad2

0x76b6,	// (0x0008c4ce) dialer2_ne_pane_ParamLimits

0x76b6,	// (0x0008c4ce) dialer2_ne_pane

0x76d0,	// (0x0008c4e8) grid_dialer2_keypad_pane_ParamLimits

0x76d0,	// (0x0008c4e8) grid_dialer2_keypad_pane

0xcce7,	// (0x00091aff) bg_popup_call_pane_cp07_ParamLimits

0xcce7,	// (0x00091aff) bg_popup_call_pane_cp07

0x76ec,	// (0x0008c504) dialer2_ne_pane_t1_ParamLimits

0x76ec,	// (0x0008c504) dialer2_ne_pane_t1

0x7727,	// (0x0008c53f) cell_dialer2_keypad_pane_ParamLimits

0x7727,	// (0x0008c53f) cell_dialer2_keypad_pane

0xcd8c,	// (0x00091ba4) bg_button_pane_pane_cp04_ParamLimits

0xcd8c,	// (0x00091ba4) bg_button_pane_pane_cp04

0x7749,	// (0x0008c561) cell_dialer2_keypad_pane_g1_ParamLimits

0x7749,	// (0x0008c561) cell_dialer2_keypad_pane_g1

0x3ebe,	// (0x00088cd6) aid_placing_vt_set_content_ParamLimits

0x3ebe,	// (0x00088cd6) aid_placing_vt_set_content

0x3ee6,	// (0x00088cfe) aid_placing_vt_set_title_ParamLimits

0x3ee6,	// (0x00088cfe) aid_placing_vt_set_title

0xb5a3,	// (0x000903bb) main_image3_pane

0x780f,	// (0x0008c627) area_side_right_pane_cp01_ParamLimits

0x780f,	// (0x0008c627) area_side_right_pane_cp01

0xec09,	// (0x00093a21) main_image3_pane_g1_ParamLimits

0xec09,	// (0x00093a21) main_image3_pane_g1

0x7826,	// (0x0008c63e) main_image3_pane_g2_ParamLimits

0x7826,	// (0x0008c63e) main_image3_pane_g2

0x784e,	// (0x0008c666) main_image3_pane_g3_ParamLimits

0x784e,	// (0x0008c666) main_image3_pane_g3

0x7878,	// (0x0008c690) main_image3_pane_g4_ParamLimits

0x7878,	// (0x0008c690) main_image3_pane_g4

0x0003,

0xf846,	// (0x0009465e) main_image3_pane_g_ParamLimits

0xf846,	// (0x0009465e) main_image3_pane_g

0x78a2,	// (0x0008c6ba) main_image3_pane_t1_ParamLimits

0x78a2,	// (0x0008c6ba) main_image3_pane_t1

0x78fa,	// (0x0008c712) main_image3_pane_t2_ParamLimits

0x78fa,	// (0x0008c712) main_image3_pane_t2

0x794c,	// (0x0008c764) main_image3_pane_t3_ParamLimits

0x794c,	// (0x0008c764) main_image3_pane_t3

0x0003,

0xf84f,	// (0x00094667) main_image3_pane_t_ParamLimits

0xf84f,	// (0x00094667) main_image3_pane_t

0x0de3,	// (0x00085bfb) grid_sctrl_middle_pane_cp01_ParamLimits

0x0de3,	// (0x00085bfb) grid_sctrl_middle_pane_cp01

0x79d4,	// (0x0008c7ec) cell_sctrl_middle_pane_cp01_ParamLimits

0x79d4,	// (0x0008c7ec) cell_sctrl_middle_pane_cp01

0x79f1,	// (0x0008c809) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x79f1,	// (0x0008c809) cell_sctrl_middle_pane_cp01_g1

0xb5a3,	// (0x000903bb) main_call4_pane

0x7a07,	// (0x0008c81f) aid_size_button_call4_ParamLimits

0x7a07,	// (0x0008c81f) aid_size_button_call4

0x7a3a,	// (0x0008c852) call4_windows_pane_ParamLimits

0x7a3a,	// (0x0008c852) call4_windows_pane

0x7a59,	// (0x0008c871) grid_call4_button_pane_ParamLimits

0x7a59,	// (0x0008c871) grid_call4_button_pane

0x7a8c,	// (0x0008c8a4) call4_windows_conf_pane

0x7aa3,	// (0x0008c8bb) popup_call4_audio_first_window_ParamLimits

0x7aa3,	// (0x0008c8bb) popup_call4_audio_first_window

0x7af3,	// (0x0008c90b) popup_call4_audio_second_window_ParamLimits

0x7af3,	// (0x0008c90b) popup_call4_audio_second_window

0x7b0a,	// (0x0008c922) popup_call4_audio_wait_window_ParamLimits

0x7b0a,	// (0x0008c922) popup_call4_audio_wait_window

0x7b18,	// (0x0008c930) cell_call4_button_pane_ParamLimits

0x7b18,	// (0x0008c930) cell_call4_button_pane

0x7b3d,	// (0x0008c955) bg_button_pane_cp09_ParamLimits

0x7b3d,	// (0x0008c955) bg_button_pane_cp09

0x7b49,	// (0x0008c961) cell_call4_button_pane_g1_ParamLimits

0x7b49,	// (0x0008c961) cell_call4_button_pane_g1

0x7b6f,	// (0x0008c987) cell_call4_button_pane_t1_ParamLimits

0x7b6f,	// (0x0008c987) cell_call4_button_pane_t1

0xcda0,	// (0x00091bb8) popup_call4_audio_conf_window_ParamLimits

0xcda0,	// (0x00091bb8) popup_call4_audio_conf_window

0x6f8d,	// (0x0008bda5) mup3_progress_pane_t1_ParamLimits

0x6fac,	// (0x0008bdc4) mup3_progress_pane_t2_ParamLimits

0x19ef,	// (0x00086807) mup3_progress_pane_t3_ParamLimits

0xf724,	// (0x0009453c) mup3_progress_pane_t_ParamLimits

0x1a0c,	// (0x00086824) mup_progress_pane_cp03_ParamLimits

0x74ab,	// (0x0008c2c3) mup3_control_keys_pane_g4_copy1

0xedd9,	// (0x00093bf1) mp4_rocker2_pane_ParamLimits

0xedd9,	// (0x00093bf1) mp4_rocker2_pane

0xcdb4,	// (0x00091bcc) mp4_rocker2_pane_g1

0xcdbc,	// (0x00091bd4) mp4_rocker2_pane_g2

0xee79,	// (0x00093c91) mp4_rocker2_pane_g3

0xee81,	// (0x00093c99) mp4_rocker2_pane_g4

0xee89,	// (0x00093ca1) mp4_rocker2_pane_g5

0x0004,

0xf858,	// (0x00094670) mp4_rocker2_pane_g

0xb5a3,	// (0x000903bb) main_camera4_pane

0xb5a3,	// (0x000903bb) main_video4_pane

0x75a7,	// (0x0008c3bf) main_video_tele_dialer_pane_t1_ParamLimits

0x75a7,	// (0x0008c3bf) main_video_tele_dialer_pane_t1

0x75c0,	// (0x0008c3d8) main_video_tele_dialer_pane_t2_ParamLimits

0x75c0,	// (0x0008c3d8) main_video_tele_dialer_pane_t2

0x0001,

0xf80e,	// (0x00094626) main_video_tele_dialer_pane_t_ParamLimits

0xf80e,	// (0x00094626) main_video_tele_dialer_pane_t

0x7bad,	// (0x0008c9c5) cam4_autofocus_pane_ParamLimits

0x7bad,	// (0x0008c9c5) cam4_autofocus_pane

0x7bc3,	// (0x0008c9db) cam4_image_uncrop_pane_ParamLimits

0x7bc3,	// (0x0008c9db) cam4_image_uncrop_pane

0x7bdd,	// (0x0008c9f5) cam4_indicators_pane_ParamLimits

0x7bdd,	// (0x0008c9f5) cam4_indicators_pane

0x7c08,	// (0x0008ca20) main_camera4_pane_g1_ParamLimits

0x7c08,	// (0x0008ca20) main_camera4_pane_g1

0x7c1a,	// (0x0008ca32) main_camera4_pane_g2_ParamLimits

0x7c1a,	// (0x0008ca32) main_camera4_pane_g2

0x7c2d,	// (0x0008ca45) main_camera4_pane_g3_ParamLimits

0x7c2d,	// (0x0008ca45) main_camera4_pane_g3

0x7c40,	// (0x0008ca58) main_camera4_pane_g4_ParamLimits

0x7c40,	// (0x0008ca58) main_camera4_pane_g4

0x7c53,	// (0x0008ca6b) main_camera4_pane_g5_ParamLimits

0x7c53,	// (0x0008ca6b) main_camera4_pane_g5

0x0005,

0xf863,	// (0x0009467b) main_camera4_pane_g_ParamLimits

0xf863,	// (0x0009467b) main_camera4_pane_g

0x7c77,	// (0x0008ca8f) main_camera4_pane_t1_ParamLimits

0x7c77,	// (0x0008ca8f) main_camera4_pane_t1

0xcdc4,	// (0x00091bdc) bg_tb_trans_pane_cp06

0xeeb5,	// (0x00093ccd) cam4_indicators_pane_g1

0xeec6,	// (0x00093cde) cam4_indicators_pane_g2

0x0002,

0xf87e,	// (0x00094696) cam4_indicators_pane_g

0xeee4,	// (0x00093cfc) cam4_indicators_pane_t1

0x7cdb,	// (0x0008caf3) main_video4_pane_g1_ParamLimits

0x7cdb,	// (0x0008caf3) main_video4_pane_g1

0x7cea,	// (0x0008cb02) main_video4_pane_g2_ParamLimits

0x7cea,	// (0x0008cb02) main_video4_pane_g2

0x7cf9,	// (0x0008cb11) main_video4_pane_g3_ParamLimits

0x7cf9,	// (0x0008cb11) main_video4_pane_g3

0x7d08,	// (0x0008cb20) main_video4_pane_g4_ParamLimits

0x7d08,	// (0x0008cb20) main_video4_pane_g4

0x0004,

0xf885,	// (0x0009469d) main_video4_pane_g_ParamLimits

0xf885,	// (0x0009469d) main_video4_pane_g

0x7d26,	// (0x0008cb3e) vid4_indicators_pane_ParamLimits

0x7d26,	// (0x0008cb3e) vid4_indicators_pane

0x7d54,	// (0x0008cb6c) video4_image_uncrop_cif_pane_ParamLimits

0x7d54,	// (0x0008cb6c) video4_image_uncrop_cif_pane

0x7d6e,	// (0x0008cb86) video4_image_uncrop_nhd_pane_ParamLimits

0x7d6e,	// (0x0008cb86) video4_image_uncrop_nhd_pane

0x7bc3,	// (0x0008c9db) video4_image_uncrop_vga_pane_ParamLimits

0x7bc3,	// (0x0008c9db) video4_image_uncrop_vga_pane

0xb595,	// (0x000903ad) bg_tb_trans_pane_cp07

0xef10,	// (0x00093d28) vid4_indicators_pane_g1

0xef24,	// (0x00093d3c) vid4_indicators_pane_g2

0xef38,	// (0x00093d50) vid4_indicators_pane_g3

0x0004,

0xf890,	// (0x000946a8) vid4_indicators_pane_g

0xef67,	// (0x00093d7f) vid4_indicators_pane_t1

0x7d82,	// (0x0008cb9a) cam4_autofocus_pane_g1

0x7d8a,	// (0x0008cba2) cam4_autofocus_pane_g2

0x7d92,	// (0x0008cbaa) cam4_autofocus_pane_g3

0x0002,

0xf89b,	// (0x000946b3) cam4_autofocus_pane_g

0x7d9a,	// (0x0008cbb2) cam4_autofocus_pane_g3_copy1

0x75ef,	// (0x0008c407) video_down_pane_cp_t1

0x75fd,	// (0x0008c415) video_down_pane_cp_t2

0x0001,

0xf813,	// (0x0009462b) video_down_pane_cp_t

0xb595,	// (0x000903ad) popup_vitu2_window_ParamLimits

0xb595,	// (0x000903ad) popup_vitu2_window

0x7da2,	// (0x0008cbba) aid_size_cell2_itu2_ParamLimits

0x7da2,	// (0x0008cbba) aid_size_cell2_itu2

0x7dc2,	// (0x0008cbda) aid_size_cell_itu2_ParamLimits

0x7dc2,	// (0x0008cbda) aid_size_cell_itu2

0x7e0f,	// (0x0008cc27) bg_popup_window_pane_cp09_ParamLimits

0x7e0f,	// (0x0008cc27) bg_popup_window_pane_cp09

0x7e1d,	// (0x0008cc35) field_vitu2_entry_pane_ParamLimits

0x7e1d,	// (0x0008cc35) field_vitu2_entry_pane

0x7e40,	// (0x0008cc58) grid_vitu2_function_pane_ParamLimits

0x7e40,	// (0x0008cc58) grid_vitu2_function_pane

0x7e8b,	// (0x0008cca3) grid_vitu2_itu_pane_ParamLimits

0x7e8b,	// (0x0008cca3) grid_vitu2_itu_pane

0x7f19,	// (0x0008cd31) cell_vitu2_itu_pane_ParamLimits

0x7f19,	// (0x0008cd31) cell_vitu2_itu_pane

0x7f45,	// (0x0008cd5d) cell_vitu2_function_pane_ParamLimits

0x7f45,	// (0x0008cd5d) cell_vitu2_function_pane

0xcdd2,	// (0x00091bea) bg_popup_call_pane_cp08_ParamLimits

0xcdd2,	// (0x00091bea) bg_popup_call_pane_cp08

0xcde9,	// (0x00091c01) field_vitu2_entry_pane_g1

0xcdf5,	// (0x00091c0d) field_vitu2_entry_pane_g2

0x0002,

0xf8a2,	// (0x000946ba) field_vitu2_entry_pane_g

0x7f84,	// (0x0008cd9c) field_vitu2_entry_pane_t1_ParamLimits

0x7f84,	// (0x0008cd9c) field_vitu2_entry_pane_t1

0xce01,	// (0x00091c19) field_vitu2_entry_pane_t2_ParamLimits

0xce01,	// (0x00091c19) field_vitu2_entry_pane_t2

0x0001,

0xf8a9,	// (0x000946c1) field_vitu2_entry_pane_t_ParamLimits

0xf8a9,	// (0x000946c1) field_vitu2_entry_pane_t

0x7fb3,	// (0x0008cdcb) bg_button_pane_cp010_ParamLimits

0x7fb3,	// (0x0008cdcb) bg_button_pane_cp010

0x7fc1,	// (0x0008cdd9) cell_vitu2_itu_pane_g1

0x7fe7,	// (0x0008cdff) cell_vitu2_itu_pane_t1_ParamLimits

0x7fe7,	// (0x0008cdff) cell_vitu2_itu_pane_t1

0x2d8c,	// (0x00087ba4) cell_vitu2_itu_pane_t2_ParamLimits

0x2d8c,	// (0x00087ba4) cell_vitu2_itu_pane_t2

0x0002,

0xf8b3,	// (0x000946cb) cell_vitu2_itu_pane_t_ParamLimits

0xf8b3,	// (0x000946cb) cell_vitu2_itu_pane_t

0xb595,	// (0x000903ad) bg_button_pane_cp011

0x8045,	// (0x0008ce5d) cell_vitu2_function_pane_g1

0xb5a3,	// (0x000903bb) main_myfav_hc_pane

0x799c,	// (0x0008c7b4) popup_image3_note_pane_ParamLimits

0x799c,	// (0x0008c7b4) popup_image3_note_pane

0x79b8,	// (0x0008c7d0) popup_image3_tool_bar_pane_ParamLimits

0x79b8,	// (0x0008c7d0) popup_image3_tool_bar_pane

0x2e1a,	// (0x00087c32) cell_vitu2_itu_pane_t3_ParamLimits

0x2e1a,	// (0x00087c32) cell_vitu2_itu_pane_t3

0x0749,	// (0x00085561) bg_popup_trans_pane

0xce26,	// (0x00091c3e) grid_image3_tool_bar_pane

0xce30,	// (0x00091c48) bg_popup_trans_pane_g1

0x44b7,	// (0x000892cf) bg_popup_trans_pane_g2

0xce38,	// (0x00091c50) bg_popup_trans_pane_g3

0xce40,	// (0x00091c58) bg_popup_trans_pane_g4

0xce48,	// (0x00091c60) bg_popup_trans_pane_g5

0xce50,	// (0x00091c68) bg_popup_trans_pane_g6

0xce58,	// (0x00091c70) bg_popup_trans_pane_g7

0xce60,	// (0x00091c78) bg_popup_trans_pane_g8

0x4497,	// (0x000892af) bg_popup_trans_pane_g9

0x0008,

0xf8ba,	// (0x000946d2) bg_popup_trans_pane_g

0xce68,	// (0x00091c80) cell_image3_tool_bar_pane_ParamLimits

0xce68,	// (0x00091c80) cell_image3_tool_bar_pane

0x3de5,	// (0x00088bfd) cell_image3_tool_bar_pane_g1

0x0749,	// (0x00085561) bg_popup_trans_pane_cp1

0xce7c,	// (0x00091c94) popup_image3_note_pane_t1

0xce8a,	// (0x00091ca2) popup_image3_note_pane_t2

0xce98,	// (0x00091cb0) popup_image3_note_pane_t3

0x0002,

0xf8cd,	// (0x000946e5) popup_image3_note_pane_t

0xcea6,	// (0x00091cbe) popup_image3_note_pane_t3_copy1

0x8059,	// (0x0008ce71) bg_myfav_hc_instruction_pane_ParamLimits

0x8059,	// (0x0008ce71) bg_myfav_hc_instruction_pane

0x806d,	// (0x0008ce85) cell_myfav_contact_pane_ParamLimits

0x806d,	// (0x0008ce85) cell_myfav_contact_pane

0x808b,	// (0x0008cea3) cell_myfav_contact_pane_cp1_ParamLimits

0x808b,	// (0x0008cea3) cell_myfav_contact_pane_cp1

0x80a3,	// (0x0008cebb) cell_myfav_contact_pane_cp2_ParamLimits

0x80a3,	// (0x0008cebb) cell_myfav_contact_pane_cp2

0x80bb,	// (0x0008ced3) cell_myfav_contact_pane_cp3_ParamLimits

0x80bb,	// (0x0008ced3) cell_myfav_contact_pane_cp3

0x80d2,	// (0x0008ceea) cell_myfav_contact_pane_cp4_ParamLimits

0x80d2,	// (0x0008ceea) cell_myfav_contact_pane_cp4

0x80ea,	// (0x0008cf02) cell_myfav_contact_pane_cp5_ParamLimits

0x80ea,	// (0x0008cf02) cell_myfav_contact_pane_cp5

0x80fe,	// (0x0008cf16) cell_myfav_contact_pane_cp6_ParamLimits

0x80fe,	// (0x0008cf16) cell_myfav_contact_pane_cp6

0x8114,	// (0x0008cf2c) cell_myfav_contact_pane_cp7_ParamLimits

0x8114,	// (0x0008cf2c) cell_myfav_contact_pane_cp7

0xceb4,	// (0x00091ccc) listscroll_gen_pane_cp05

0x812e,	// (0x0008cf46) main_myfav_hc_pane_g1_ParamLimits

0x812e,	// (0x0008cf46) main_myfav_hc_pane_g1

0x8148,	// (0x0008cf60) main_myfav_hc_pane_g2_ParamLimits

0x8148,	// (0x0008cf60) main_myfav_hc_pane_g2

0x0002,

0xf8d4,	// (0x000946ec) main_myfav_hc_pane_g_ParamLimits

0xf8d4,	// (0x000946ec) main_myfav_hc_pane_g

0x817a,	// (0x0008cf92) main_myfav_hc_pane_t1_ParamLimits

0x817a,	// (0x0008cf92) main_myfav_hc_pane_t1

0xcebd,	// (0x00091cd5) main_myfav_hc_pane_t2_ParamLimits

0xcebd,	// (0x00091cd5) main_myfav_hc_pane_t2

0xcecf,	// (0x00091ce7) main_myfav_hc_pane_t3_ParamLimits

0xcecf,	// (0x00091ce7) main_myfav_hc_pane_t3

0x8191,	// (0x0008cfa9) main_myfav_hc_pane_t4_ParamLimits

0x8191,	// (0x0008cfa9) main_myfav_hc_pane_t4

0x0004,

0xf8db,	// (0x000946f3) main_myfav_hc_pane_t_ParamLimits

0xf8db,	// (0x000946f3) main_myfav_hc_pane_t

0x3de5,	// (0x00088bfd) bg_myfav_hc_instruction_pane_g1

0xcee1,	// (0x00091cf9) cell_myfav_contact_pane_g1_ParamLimits

0xcee1,	// (0x00091cf9) cell_myfav_contact_pane_g1

0xcee1,	// (0x00091cf9) cell_myfav_contact_pane_g2_ParamLimits

0xcee1,	// (0x00091cf9) cell_myfav_contact_pane_g2

0xceed,	// (0x00091d05) cell_myfav_contact_pane_g3_ParamLimits

0xceed,	// (0x00091d05) cell_myfav_contact_pane_g3

0x3175,	// (0x00087f8d) cell_myfav_contact_pane_g4_ParamLimits

0x3175,	// (0x00087f8d) cell_myfav_contact_pane_g4

0xcefa,	// (0x00091d12) cell_myfav_contact_pane_g5_ParamLimits

0xcefa,	// (0x00091d12) cell_myfav_contact_pane_g5

0x0004,

0xf8e6,	// (0x000946fe) cell_myfav_contact_pane_g_ParamLimits

0xf8e6,	// (0x000946fe) cell_myfav_contact_pane_g

0x8162,	// (0x0008cf7a) main_myfav_hc_pane_g3_ParamLimits

0x8162,	// (0x0008cf7a) main_myfav_hc_pane_g3

0x2fef,	// (0x00087e07) popup_adpt_find_window

0x81b9,	// (0x0008cfd1) afind_page_pane_ParamLimits

0x81b9,	// (0x0008cfd1) afind_page_pane

0x81ce,	// (0x0008cfe6) aid_size_cell_afind_ParamLimits

0x81ce,	// (0x0008cfe6) aid_size_cell_afind

0x81ec,	// (0x0008d004) bg_popup_sub_pane_cp09_ParamLimits

0x81ec,	// (0x0008d004) bg_popup_sub_pane_cp09

0x81f9,	// (0x0008d011) find_pane_cp01_ParamLimits

0x81f9,	// (0x0008d011) find_pane_cp01

0xcf06,	// (0x00091d1e) grid_afind_control_pane_ParamLimits

0xcf06,	// (0x00091d1e) grid_afind_control_pane

0x8206,	// (0x0008d01e) grid_afind_pane_ParamLimits

0x8206,	// (0x0008d01e) grid_afind_pane

0x8228,	// (0x0008d040) cell_afind_pane_ParamLimits

0x8228,	// (0x0008d040) cell_afind_pane

0x3de5,	// (0x00088bfd) afind_page_pane_g1

0x828f,	// (0x0008d0a7) afind_page_pane_g2

0x8298,	// (0x0008d0b0) afind_page_pane_g3

0x0002,

0xf8f1,	// (0x00094709) afind_page_pane_g

0x82a1,	// (0x0008d0b9) afind_page_pane_t1

0xcf1a,	// (0x00091d32) cell_afind_grid_control_pane_ParamLimits

0xcf1a,	// (0x00091d32) cell_afind_grid_control_pane

0xcd8c,	// (0x00091ba4) bg_button_pane_cp69_ParamLimits

0xcd8c,	// (0x00091ba4) bg_button_pane_cp69

0x82c1,	// (0x0008d0d9) cell_afind_pane_g1_ParamLimits

0x82c1,	// (0x0008d0d9) cell_afind_pane_g1

0x82ce,	// (0x0008d0e6) cell_afind_pane_t1_ParamLimits

0x82ce,	// (0x0008d0e6) cell_afind_pane_t1

0x3e51,	// (0x00088c69) bg_button_pane_cp72

0xcf29,	// (0x00091d41) cell_afind_grid_control_pane_g1

0x5c1f,	// (0x0008aa37) aid_image_placing_area_ParamLimits

0x5c1f,	// (0x0008aa37) aid_image_placing_area

0x3167,	// (0x00087f7f) field_vitu_entry_pane_g1_ParamLimits

0x3167,	// (0x00087f7f) field_vitu_entry_pane_g1

0x3167,	// (0x00087f7f) field_vitu_entry_pane_g2_ParamLimits

0x3167,	// (0x00087f7f) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x00094019) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x00094019) field_vitu_entry_pane_g

0x1d08,	// (0x00086b20) cell_vitu_itu_pane_g1_ParamLimits

0x1ac6,	// (0x000868de) cell_vitu_itu_pane_t3_ParamLimits

0x1ac6,	// (0x000868de) cell_vitu_itu_pane_t3

0xcd35,	// (0x00091b4d) mp4_progress_pane_t1_ParamLimits

0xcd4e,	// (0x00091b66) mp4_progress_pane_t2_ParamLimits

0xf837,	// (0x0009464f) mp4_progress_pane_t_ParamLimits

0xcd67,	// (0x00091b7f) mup_progress_pane_cp04_ParamLimits

0x81a5,	// (0x0008cfbd) main_myfav_hc_pane_t5_ParamLimits

0x81a5,	// (0x0008cfbd) main_myfav_hc_pane_t5

0xb544,	// (0x0009035c) aid_zoom_text_primary

0x2fef,	// (0x00087e07) popup_adpt_find_window_ParamLimits

0xb595,	// (0x000903ad) main_cam_set_pane

0x7bf4,	// (0x0008ca0c) cam4_zoom_pane_ParamLimits

0x7bf4,	// (0x0008ca0c) cam4_zoom_pane

0x82e0,	// (0x0008d0f8) main_cam_set_pane_g1_ParamLimits

0x82e0,	// (0x0008d0f8) main_cam_set_pane_g1

0x82ee,	// (0x0008d106) main_cam_set_pane_g2_ParamLimits

0x82ee,	// (0x0008d106) main_cam_set_pane_g2

0x0001,

0xf8f8,	// (0x00094710) main_cam_set_pane_g_ParamLimits

0xf8f8,	// (0x00094710) main_cam_set_pane_g

0x830f,	// (0x0008d127) main_cam_set_pane_t1_ParamLimits

0x830f,	// (0x0008d127) main_cam_set_pane_t1

0x832a,	// (0x0008d142) main_cset_listscroll_pane_ParamLimits

0x832a,	// (0x0008d142) main_cset_listscroll_pane

0x8350,	// (0x0008d168) main_cset_slider_pane_ParamLimits

0x8350,	// (0x0008d168) main_cset_slider_pane

0xcf3a,	// (0x00091d52) main_cset_list_pane_ParamLimits

0xcf3a,	// (0x00091d52) main_cset_list_pane

0xcf4a,	// (0x00091d62) scroll_pane_cp028

0x8376,	// (0x0008d18e) aid_area_touch_slider

0x8392,	// (0x0008d1aa) cset_slider_pane

0x83b5,	// (0x0008d1cd) main_cset_slider_pane_g1

0x83ca,	// (0x0008d1e2) main_cset_slider_pane_g2

0x0011,

0xf8fd,	// (0x00094715) main_cset_slider_pane_g

0xcf83,	// (0x00091d9b) main_cset_slider_pane_t1

0x8486,	// (0x0008d29e) main_cset_slider_pane_t2

0x84a0,	// (0x0008d2b8) main_cset_slider_pane_t3

0x84ba,	// (0x0008d2d2) main_cset_slider_pane_t4

0x84d4,	// (0x0008d2ec) main_cset_slider_pane_t5

0x84ee,	// (0x0008d306) main_cset_slider_pane_t6

0x8503,	// (0x0008d31b) main_cset_slider_pane_t7

0x000e,

0xf922,	// (0x0009473a) main_cset_slider_pane_t

0x8607,	// (0x0008d41f) cset_list_set_pane_ParamLimits

0x8607,	// (0x0008d41f) cset_list_set_pane

0xd01d,	// (0x00091e35) aid_position_infowindow_above

0xd025,	// (0x00091e3d) aid_position_infowindow_below

0xd02d,	// (0x00091e45) cset_list_set_pane_g1_ParamLimits

0xd02d,	// (0x00091e45) cset_list_set_pane_g1

0xd039,	// (0x00091e51) cset_list_set_pane_g3_ParamLimits

0xd039,	// (0x00091e51) cset_list_set_pane_g3

0x0001,

0xf941,	// (0x00094759) cset_list_set_pane_g_ParamLimits

0xf941,	// (0x00094759) cset_list_set_pane_g

0xd048,	// (0x00091e60) cset_list_set_pane_t1_ParamLimits

0xd048,	// (0x00091e60) cset_list_set_pane_t1

0x0de3,	// (0x00085bfb) list_highlight_pane_cp021_ParamLimits

0x0de3,	// (0x00085bfb) list_highlight_pane_cp021

0xbea8,	// (0x00090cc0) cset_slider_pane_g1

0xbeba,	// (0x00090cd2) cset_slider_pane_g2

0xbeb1,	// (0x00090cc9) cset_slider_pane_g3

0x0002,

0xf946,	// (0x0009475e) cset_slider_pane_g

0xef7e,	// (0x00093d96) aid_area_touch_cam4_zoom

0xef86,	// (0x00093d9e) cam4_zoom_cont_pane

0xef8e,	// (0x00093da6) cam4_zoom_pane_g1

0xef96,	// (0x00093dae) cam4_zoom_pane_g2

0x8619,	// (0x0008d431) cam4_zoom_pane_g3

0x0002,

0xf94d,	// (0x00094765) cam4_zoom_pane_g

0xef9e,	// (0x00093db6) cam4_zoom_cont_pane_g1

0xefa7,	// (0x00093dbf) cam4_zoom_cont_pane_g2

0xefb0,	// (0x00093dc8) cam4_zoom_cont_pane_g3

0x0002,

0xf954,	// (0x0009476c) cam4_zoom_cont_pane_g

0x7a25,	// (0x0008c83d) call4_image_pane_ParamLimits

0x7a25,	// (0x0008c83d) call4_image_pane

0x7a8c,	// (0x0008c8a4) call4_windows_conf_pane_ParamLimits

0x7ad1,	// (0x0008c8e9) popup_call4_audio_in_window_ParamLimits

0x7ad1,	// (0x0008c8e9) popup_call4_audio_in_window

0x0749,	// (0x00085561) bg_popup_call2_act_pane_cp02

0xcd98,	// (0x00091bb0) call4_list_conf_pane

0x3de5,	// (0x00088bfd) call4_image_pane_g1

0x3de5,	// (0x00088bfd) call4_image_pane_g2

0x0001,

0xf3d8,	// (0x000941f0) call4_image_pane_g

0xd05d,	// (0x00091e75) list_single_graphic_popup_conf4_pane_ParamLimits

0xd05d,	// (0x00091e75) list_single_graphic_popup_conf4_pane

0x0749,	// (0x00085561) list_highlight_pane_cp022

0xd070,	// (0x00091e88) list_single_graphic_popup_conf4_pane_g1

0xba76,	// (0x0009088e) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf95b,	// (0x00094773) list_single_graphic_popup_conf4_pane_g

0xd078,	// (0x00091e90) list_single_graphic_popup_conf4_pane_t1

0x401c,	// (0x00088e34) popup_vtel_slider_window_ParamLimits

0x401c,	// (0x00088e34) popup_vtel_slider_window

0xcd7a,	// (0x00091b92) dialer2_ne_pane_t2_ParamLimits

0xcd7a,	// (0x00091b92) dialer2_ne_pane_t2

0x0001,

0xf83c,	// (0x00094654) dialer2_ne_pane_t_ParamLimits

0xf83c,	// (0x00094654) dialer2_ne_pane_t

0xcce7,	// (0x00091aff) bg_popup_sub_pane_cp010_ParamLimits

0xcce7,	// (0x00091aff) bg_popup_sub_pane_cp010

0x8621,	// (0x0008d439) popup_vtel_slider_window_g1_ParamLimits

0x8621,	// (0x0008d439) popup_vtel_slider_window_g1

0x8634,	// (0x0008d44c) popup_vtel_slider_window_g2_ParamLimits

0x8634,	// (0x0008d44c) popup_vtel_slider_window_g2

0x0003,

0xf960,	// (0x00094778) popup_vtel_slider_window_g_ParamLimits

0xf960,	// (0x00094778) popup_vtel_slider_window_g

0x868a,	// (0x0008d4a2) vtel_slider_pane_ParamLimits

0x868a,	// (0x0008d4a2) vtel_slider_pane

0x86ac,	// (0x0008d4c4) vtel_slider_pane_g1_ParamLimits

0x86ac,	// (0x0008d4c4) vtel_slider_pane_g1

0x86c0,	// (0x0008d4d8) vtel_slider_pane_g2_ParamLimits

0x86c0,	// (0x0008d4d8) vtel_slider_pane_g2

0x86d8,	// (0x0008d4f0) vtel_slider_pane_g3_ParamLimits

0x86d8,	// (0x0008d4f0) vtel_slider_pane_g3

0x86ac,	// (0x0008d4c4) vtel_slider_pane_g4_ParamLimits

0x86ac,	// (0x0008d4c4) vtel_slider_pane_g4

0x86ee,	// (0x0008d506) vtel_slider_pane_g5_ParamLimits

0x86ee,	// (0x0008d506) vtel_slider_pane_g5

0x0004,

0xf969,	// (0x00094781) vtel_slider_pane_g_ParamLimits

0xf969,	// (0x00094781) vtel_slider_pane_g

0xb595,	// (0x000903ad) main_gallery2_pane

0x7de2,	// (0x0008cbfa) aid_size_row_itut2_dropdow_list_ParamLimits

0x7de2,	// (0x0008cbfa) aid_size_row_itut2_dropdow_list

0x7e65,	// (0x0008cc7d) grid_vitu2_function_top_pane_ParamLimits

0x7e65,	// (0x0008cc7d) grid_vitu2_function_top_pane

0x7ec7,	// (0x0008ccdf) popup_vitu2_dropdown_list_window_ParamLimits

0x7ec7,	// (0x0008ccdf) popup_vitu2_dropdown_list_window

0x7eed,	// (0x0008cd05) popup_vitu2_match_list_window

0x8704,	// (0x0008d51c) cell_vitu2_function_top_pane_ParamLimits

0x8704,	// (0x0008d51c) cell_vitu2_function_top_pane

0x871e,	// (0x0008d536) cell_vitu2_function_top_pane_cp01_ParamLimits

0x871e,	// (0x0008d536) cell_vitu2_function_top_pane_cp01

0x873a,	// (0x0008d552) cell_vitu2_function_top_wide_pane_ParamLimits

0x873a,	// (0x0008d552) cell_vitu2_function_top_wide_pane

0xb595,	// (0x000903ad) bg_button_pane_cp012

0x8758,	// (0x0008d570) cell_vitu2_function_top_pane_g1

0xefb9,	// (0x00093dd1) bg_button_pane_cp013_ParamLimits

0xefb9,	// (0x00093dd1) bg_button_pane_cp013

0x876c,	// (0x0008d584) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x876c,	// (0x0008d584) cell_vitu2_function_top_wide_pane_g1

0xb595,	// (0x000903ad) bg_popup_sub_pane_cp20

0x8784,	// (0x0008d59c) list_vitu2_match_list_pane

0xce30,	// (0x00091c48) bg_popup_sub_pane_cp20_g1

0xce38,	// (0x00091c50) bg_popup_sub_pane_cp20_g2

0x44b7,	// (0x000892cf) bg_popup_sub_pane_cp20_g3

0xce40,	// (0x00091c58) bg_popup_sub_pane_cp20_g4

0x4497,	// (0x000892af) bg_popup_sub_pane_cp20_g5

0xd08e,	// (0x00091ea6) bg_popup_sub_pane_cp20_g6

0xce50,	// (0x00091c68) bg_popup_sub_pane_cp20_g7

0xce58,	// (0x00091c70) bg_popup_sub_pane_cp20_g8

0xce60,	// (0x00091c78) bg_popup_sub_pane_cp20_g9

0x0008,

0xf974,	// (0x0009478c) bg_popup_sub_pane_cp20_g

0xefd5,	// (0x00093ded) list_vitu2_match_list_item_pane_ParamLimits

0xefd5,	// (0x00093ded) list_vitu2_match_list_item_pane

0xefe7,	// (0x00093dff) list_vitu2_match_list_item_pane_t1

0xb5a3,	// (0x000903bb) bg_popup_sub_pane_cp21

0x3bf8,	// (0x00088a10) grid_vitu2_dropdown_list_pane

0x879c,	// (0x0008d5b4) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x879c,	// (0x0008d5b4) cell_vitu2_dropdown_list_char_pane

0x87bd,	// (0x0008d5d5) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x87bd,	// (0x0008d5d5) cell_vitu2_dropdown_list_ctrl_pane

0xd096,	// (0x00091eae) cell_vitu2_dropdown_list_char_pane_g1

0xd09f,	// (0x00091eb7) cell_vitu2_dropdown_list_char_pane_g2

0xd0a8,	// (0x00091ec0) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf987,	// (0x0009479f) cell_vitu2_dropdown_list_char_pane_g

0x87e7,	// (0x0008d5ff) cell_vitu2_dropdown_list_char_pane_t1

0x87f5,	// (0x0008d60d) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x87f5,	// (0x0008d60d) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8805,	// (0x0008d61d) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8805,	// (0x0008d61d) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8816,	// (0x0008d62e) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8816,	// (0x0008d62e) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8826,	// (0x0008d63e) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8826,	// (0x0008d63e) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcdc4,	// (0x00091bdc) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcdc4,	// (0x00091bdc) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf98e,	// (0x000947a6) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf98e,	// (0x000947a6) cell_vitu2_dropdown_list_ctrl_pane_g

0x8842,	// (0x0008d65a) aid_size_cell_gallery2_ParamLimits

0x8842,	// (0x0008d65a) aid_size_cell_gallery2

0x8860,	// (0x0008d678) grid_gallery2_pane_ParamLimits

0x8860,	// (0x0008d678) grid_gallery2_pane

0x887a,	// (0x0008d692) scroll_pane_cp029_ParamLimits

0x887a,	// (0x0008d692) scroll_pane_cp029

0x888b,	// (0x0008d6a3) cell_gallery2_pane_ParamLimits

0x888b,	// (0x0008d6a3) cell_gallery2_pane

0xd0b1,	// (0x00091ec9) cell_gallery2_pane_g2

0x88ea,	// (0x0008d702) cell_gallery2_pane_g3

0xd0b9,	// (0x00091ed1) cell_gallery2_pane_g4

0xd0c1,	// (0x00091ed9) cell_gallery2_pane_g5

0x3bf8,	// (0x00088a10) grid_highlight_pane_cp10

0x7eed,	// (0x0008cd05) popup_vitu2_match_list_window_ParamLimits

0x7f02,	// (0x0008cd1a) popup_vitu2_query_window_ParamLimits

0x7f02,	// (0x0008cd1a) popup_vitu2_query_window

0xb5a3,	// (0x000903bb) bg_vitu2_candi_button_pane

0xd096,	// (0x00091eae) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd09f,	// (0x00091eb7) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd0a8,	// (0x00091ec0) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x88f2,	// (0x0008d70a) bg_button_pane_cp015

0x8902,	// (0x0008d71a) bg_button_pane_cp016

0x8915,	// (0x0008d72d) bg_button_pane_cp017

0x1314,	// (0x0008612c) bg_popup_sub_pane_cp22

0xd0c9,	// (0x00091ee1) popup_vitu2_query_window_g1

0x8958,	// (0x0008d770) popup_vitu2_query_window_g2

0x0002,

0xf999,	// (0x000947b1) popup_vitu2_query_window_g

0x8977,	// (0x0008d78f) popup_vitu2_query_window_t1_ParamLimits

0x8977,	// (0x0008d78f) popup_vitu2_query_window_t1

0x89ac,	// (0x0008d7c4) popup_vitu2_query_window_t2_ParamLimits

0x89ac,	// (0x0008d7c4) popup_vitu2_query_window_t2

0x89be,	// (0x0008d7d6) popup_vitu2_query_window_t3_ParamLimits

0x89be,	// (0x0008d7d6) popup_vitu2_query_window_t3

0x89e6,	// (0x0008d7fe) popup_vitu2_query_window_t4_ParamLimits

0x89e6,	// (0x0008d7fe) popup_vitu2_query_window_t4

0x8a07,	// (0x0008d81f) popup_vitu2_query_window_t5_ParamLimits

0x8a07,	// (0x0008d81f) popup_vitu2_query_window_t5

0x0006,

0xf9a0,	// (0x000947b8) popup_vitu2_query_window_t_ParamLimits

0xf9a0,	// (0x000947b8) popup_vitu2_query_window_t

0xcf32,	// (0x00091d4a) main_cset_text_pane

0x8376,	// (0x0008d18e) aid_area_touch_slider_ParamLimits

0x8392,	// (0x0008d1aa) cset_slider_pane_ParamLimits

0x83b5,	// (0x0008d1cd) main_cset_slider_pane_g1_ParamLimits

0x83ca,	// (0x0008d1e2) main_cset_slider_pane_g2_ParamLimits

0xcf53,	// (0x00091d6b) main_cset_slider_pane_g3_ParamLimits

0xcf53,	// (0x00091d6b) main_cset_slider_pane_g3

0x83df,	// (0x0008d1f7) main_cset_slider_pane_g4_ParamLimits

0x83df,	// (0x0008d1f7) main_cset_slider_pane_g4

0x83ee,	// (0x0008d206) main_cset_slider_pane_g5_ParamLimits

0x83ee,	// (0x0008d206) main_cset_slider_pane_g5

0x83fa,	// (0x0008d212) main_cset_slider_pane_g6_ParamLimits

0x83fa,	// (0x0008d212) main_cset_slider_pane_g6

0xf8fd,	// (0x00094715) main_cset_slider_pane_g_ParamLimits

0xcf83,	// (0x00091d9b) main_cset_slider_pane_t1_ParamLimits

0x8486,	// (0x0008d29e) main_cset_slider_pane_t2_ParamLimits

0x84a0,	// (0x0008d2b8) main_cset_slider_pane_t3_ParamLimits

0x84ba,	// (0x0008d2d2) main_cset_slider_pane_t4_ParamLimits

0x84d4,	// (0x0008d2ec) main_cset_slider_pane_t5_ParamLimits

0x84ee,	// (0x0008d306) main_cset_slider_pane_t6_ParamLimits

0x8503,	// (0x0008d31b) main_cset_slider_pane_t7_ParamLimits

0x852d,	// (0x0008d345) main_cset_slider_pane_t8_ParamLimits

0x852d,	// (0x0008d345) main_cset_slider_pane_t8

0x8555,	// (0x0008d36d) main_cset_slider_pane_t9_ParamLimits

0x8555,	// (0x0008d36d) main_cset_slider_pane_t9

0x857d,	// (0x0008d395) main_cset_slider_pane_t10_ParamLimits

0x857d,	// (0x0008d395) main_cset_slider_pane_t10

0x85a5,	// (0x0008d3bd) main_cset_slider_pane_t11_ParamLimits

0x85a5,	// (0x0008d3bd) main_cset_slider_pane_t11

0x85cd,	// (0x0008d3e5) main_cset_slider_pane_t12_ParamLimits

0x85cd,	// (0x0008d3e5) main_cset_slider_pane_t12

0x85ea,	// (0x0008d402) main_cset_slider_pane_t13_ParamLimits

0x85ea,	// (0x0008d402) main_cset_slider_pane_t13

0xf922,	// (0x0009473a) main_cset_slider_pane_t_ParamLimits

0x0749,	// (0x00085561) bg_popup_sub_pane_cp011

0xd0d5,	// (0x00091eed) main_cset_text_pane_g1

0xd0dd,	// (0x00091ef5) main_cset_text_pane_t1

0xd0eb,	// (0x00091f03) main_cset_text_pane_t2

0xd0f9,	// (0x00091f11) main_cset_text_pane_t3

0xd107,	// (0x00091f1f) main_cset_text_pane_t4

0xd115,	// (0x00091f2d) main_cset_text_pane_t5

0xd123,	// (0x00091f3b) main_cset_text_pane_t6

0xd131,	// (0x00091f49) main_cset_text_pane_t7

0x0006,

0xf9af,	// (0x000947c7) main_cset_text_pane_t

0xb5a3,	// (0x000903bb) main_cam4_burst_pane

0xb5a3,	// (0x000903bb) main_cam5_pane

0x82af,	// (0x0008d0c7) bg_button_pane_cp019

0x82b8,	// (0x0008d0d0) bg_button_pane_cp020

0xcf5f,	// (0x00091d77) main_cset_slider_pane_g7_ParamLimits

0xcf5f,	// (0x00091d77) main_cset_slider_pane_g7

0xcf6b,	// (0x00091d83) main_cset_slider_pane_g8_ParamLimits

0xcf6b,	// (0x00091d83) main_cset_slider_pane_g8

0x840e,	// (0x0008d226) main_cset_slider_pane_g9_ParamLimits

0x840e,	// (0x0008d226) main_cset_slider_pane_g9

0x841a,	// (0x0008d232) main_cset_slider_pane_g10_ParamLimits

0x841a,	// (0x0008d232) main_cset_slider_pane_g10

0x8426,	// (0x0008d23e) main_cset_slider_pane_g11_ParamLimits

0x8426,	// (0x0008d23e) main_cset_slider_pane_g11

0x8432,	// (0x0008d24a) main_cset_slider_pane_g12_ParamLimits

0x8432,	// (0x0008d24a) main_cset_slider_pane_g12

0x843e,	// (0x0008d256) main_cset_slider_pane_g13_ParamLimits

0x843e,	// (0x0008d256) main_cset_slider_pane_g13

0x844a,	// (0x0008d262) main_cset_slider_pane_g14_ParamLimits

0x844a,	// (0x0008d262) main_cset_slider_pane_g14

0x8456,	// (0x0008d26e) main_cset_slider_pane_g15_ParamLimits

0x8456,	// (0x0008d26e) main_cset_slider_pane_g15

0xcfab,	// (0x00091dc3) main_cset_slider_pane_t14_ParamLimits

0xcfab,	// (0x00091dc3) main_cset_slider_pane_t14

0xcfe4,	// (0x00091dfc) main_cset_slider_pane_t15_ParamLimits

0xcfe4,	// (0x00091dfc) main_cset_slider_pane_t15

0x8a7e,	// (0x0008d896) aid_cam4_burst_size_cell_ParamLimits

0x8a7e,	// (0x0008d896) aid_cam4_burst_size_cell

0x8a9e,	// (0x0008d8b6) grid_cam4_burst_pane_ParamLimits

0x8a9e,	// (0x0008d8b6) grid_cam4_burst_pane

0x8ad6,	// (0x0008d8ee) linegrid_cam4_burst_pane_ParamLimits

0x8ad6,	// (0x0008d8ee) linegrid_cam4_burst_pane

0xd13f,	// (0x00091f57) scroll_pane_cp30_ParamLimits

0xd13f,	// (0x00091f57) scroll_pane_cp30

0x8afa,	// (0x0008d912) cell_cam4_burst_pane_ParamLimits

0x8afa,	// (0x0008d912) cell_cam4_burst_pane

0xd14b,	// (0x00091f63) linegrid_cam4_burst_pane_g1_ParamLimits

0xd14b,	// (0x00091f63) linegrid_cam4_burst_pane_g1

0x8b47,	// (0x0008d95f) linegrid_cam4_burst_pane_g2_ParamLimits

0x8b47,	// (0x0008d95f) linegrid_cam4_burst_pane_g2

0xd158,	// (0x00091f70) linegrid_cam4_burst_pane_g3_ParamLimits

0xd158,	// (0x00091f70) linegrid_cam4_burst_pane_g3

0x0002,

0xf9be,	// (0x000947d6) linegrid_cam4_burst_pane_g_ParamLimits

0xf9be,	// (0x000947d6) linegrid_cam4_burst_pane_g

0x8b58,	// (0x0008d970) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8b58,	// (0x0008d970) linegrid_cam4_burst_pane_g3_copy1

0xd165,	// (0x00091f7d) linegrid_cam4_burst_pane_g4_ParamLimits

0xd165,	// (0x00091f7d) linegrid_cam4_burst_pane_g4

0x8b72,	// (0x0008d98a) linegrid_cam4_burst_pane_g5_ParamLimits

0x8b72,	// (0x0008d98a) linegrid_cam4_burst_pane_g5

0x8b83,	// (0x0008d99b) linegrid_cam4_burst_pane_g6_ParamLimits

0x8b83,	// (0x0008d99b) linegrid_cam4_burst_pane_g6

0xd172,	// (0x00091f8a) linegrid_cam4_burst_pane_g7_ParamLimits

0xd172,	// (0x00091f8a) linegrid_cam4_burst_pane_g7

0x8b9a,	// (0x0008d9b2) cell_cam4_burst_pane_g1

0xd18b,	// (0x00091fa3) main_cam5_pane_t1_ParamLimits

0xd18b,	// (0x00091fa3) main_cam5_pane_t1

0xd19d,	// (0x00091fb5) main_cam5_pane_t2_ParamLimits

0xd19d,	// (0x00091fb5) main_cam5_pane_t2

0xd1af,	// (0x00091fc7) main_cam5_pane_t3_ParamLimits

0xd1af,	// (0x00091fc7) main_cam5_pane_t3

0xd1c1,	// (0x00091fd9) main_cam5_pane_t4_ParamLimits

0xd1c1,	// (0x00091fd9) main_cam5_pane_t4

0xd1d9,	// (0x00091ff1) main_cam5_pane_t5_ParamLimits

0xd1d9,	// (0x00091ff1) main_cam5_pane_t5

0xd1ed,	// (0x00092005) main_cam5_pane_t6_ParamLimits

0xd1ed,	// (0x00092005) main_cam5_pane_t6

0xd201,	// (0x00092019) main_cam5_pane_t7_ParamLimits

0xd201,	// (0x00092019) main_cam5_pane_t7

0xd213,	// (0x0009202b) main_cam5_pane_t8_ParamLimits

0xd213,	// (0x0009202b) main_cam5_pane_t8

0xd22f,	// (0x00092047) main_cam5_pane_t9_ParamLimits

0xd22f,	// (0x00092047) main_cam5_pane_t9

0xd241,	// (0x00092059) main_cam5_pane_t10_ParamLimits

0xd241,	// (0x00092059) main_cam5_pane_t10

0xd253,	// (0x0009206b) main_cam5_pane_t11_ParamLimits

0xd253,	// (0x0009206b) main_cam5_pane_t11

0xd265,	// (0x0009207d) main_cam5_pane_t12_ParamLimits

0xd265,	// (0x0009207d) main_cam5_pane_t12

0xd27a,	// (0x00092092) main_cam5_pane_t13_ParamLimits

0xd27a,	// (0x00092092) main_cam5_pane_t13

0x000c,

0xf9ca,	// (0x000947e2) main_cam5_pane_t_ParamLimits

0xf9ca,	// (0x000947e2) main_cam5_pane_t

0x3071,	// (0x00087e89) popup_scut_keymap_window_ParamLimits

0x3071,	// (0x00087e89) popup_scut_keymap_window

0x8bad,	// (0x0008d9c5) aid_size_cell_brow_shortcut

0x3bf8,	// (0x00088a10) bg_popup_window_pane_cp010

0x8bb9,	// (0x0008d9d1) grid_scut_pane

0x8bc5,	// (0x0008d9dd) cell_scut_pane_ParamLimits

0x8bc5,	// (0x0008d9dd) cell_scut_pane

0x8bdc,	// (0x0008d9f4) cell_scut_pane_g1

0xd297,	// (0x000920af) cell_scut_pane_t1

0xd2a6,	// (0x000920be) cell_scut_pane_t2

0x8be5,	// (0x0008d9fd) cell_scut_pane_t3

0x0002,

0xf9e5,	// (0x000947fd) cell_scut_pane_t

0x6b46,	// (0x0008b95e) main_mup3_pane_g8_ParamLimits

0x6b46,	// (0x0008b95e) main_mup3_pane_g8

0x7df9,	// (0x0008cc11) area_vitu2_query_pane_ParamLimits

0x7df9,	// (0x0008cc11) area_vitu2_query_pane

0x8928,	// (0x0008d740) input_focus_pane_cp08

0xd2b5,	// (0x000920cd) area_vitu2_query_pane_g1

0x8bf3,	// (0x0008da0b) area_vitu2_query_pane_g2

0x0001,

0xf9ec,	// (0x00094804) area_vitu2_query_pane_g

0x8c04,	// (0x0008da1c) area_vitu2_query_pane_t1_ParamLimits

0x8c04,	// (0x0008da1c) area_vitu2_query_pane_t1

0x8c18,	// (0x0008da30) area_vitu2_query_pane_t2_ParamLimits

0x8c18,	// (0x0008da30) area_vitu2_query_pane_t2

0x8c2c,	// (0x0008da44) area_vitu2_query_pane_t3_ParamLimits

0x8c2c,	// (0x0008da44) area_vitu2_query_pane_t3

0xd2c1,	// (0x000920d9) area_vitu2_query_pane_t4_ParamLimits

0xd2c1,	// (0x000920d9) area_vitu2_query_pane_t4

0xd2e9,	// (0x00092101) area_vitu2_query_pane_t5_ParamLimits

0xd2e9,	// (0x00092101) area_vitu2_query_pane_t5

0xd311,	// (0x00092129) area_vitu2_query_pane_t6_ParamLimits

0xd311,	// (0x00092129) area_vitu2_query_pane_t6

0x0006,

0xf9f1,	// (0x00094809) area_vitu2_query_pane_t_ParamLimits

0xf9f1,	// (0x00094809) area_vitu2_query_pane_t

0x8c54,	// (0x0008da6c) bg_button_pane_cp018

0x8c62,	// (0x0008da7a) bg_button_pane_cp021

0x8c6e,	// (0x0008da86) bg_button_pane_cp022

0x8c7d,	// (0x0008da95) input_focus_pane_cp09

0xbbb2,	// (0x000909ca) aid_size_touch_mv_arrow_left

0xbbdb,	// (0x000909f3) aid_size_touch_mv_arrow_right

0x846e,	// (0x0008d286) main_cset_slider_pane_g16_ParamLimits

0x846e,	// (0x0008d286) main_cset_slider_pane_g16

0x847a,	// (0x0008d292) main_cset_slider_pane_g17_ParamLimits

0x847a,	// (0x0008d292) main_cset_slider_pane_g17

0x8b9a,	// (0x0008d9b2) cell_cam4_burst_pane_g1_ParamLimits

0x0749,	// (0x00085561) compa_mode_pane

0x8644,	// (0x0008d45c) popup_vtel_slider_window_g3_ParamLimits

0x8644,	// (0x0008d45c) popup_vtel_slider_window_g3

0x865b,	// (0x0008d473) popup_vtel_slider_window_g4_ParamLimits

0x865b,	// (0x0008d473) popup_vtel_slider_window_g4

0x8672,	// (0x0008d48a) popup_vtel_slider_window_t1_ParamLimits

0x8672,	// (0x0008d48a) popup_vtel_slider_window_t1

0xb5a3,	// (0x000903bb) main_cl_pane

0xcc1b,	// (0x00091a33) popup_imed_adjust2_window_ParamLimits

0x1314,	// (0x0008612c) bg_tb_trans_pane_cp05_ParamLimits

0x1c3d,	// (0x00086a55) popup_imed_adjust2_window_g1_ParamLimits

0x1c4c,	// (0x00086a64) popup_imed_adjust2_window_g2_ParamLimits

0x1c4c,	// (0x00086a64) popup_imed_adjust2_window_g2

0x1c58,	// (0x00086a70) popup_imed_adjust2_window_g3_ParamLimits

0x1c58,	// (0x00086a70) popup_imed_adjust2_window_g3

0x0002,

0xf767,	// (0x0009457f) popup_imed_adjust2_window_g_ParamLimits

0xf767,	// (0x0009457f) popup_imed_adjust2_window_g

0x1c64,	// (0x00086a7c) popup_imed_adjust2_window_t1_ParamLimits

0x1c7c,	// (0x00086a94) slider_imed_adjust_pane_ParamLimits

0x1c90,	// (0x00086aa8) slider_imed_adjust_pane_g1_ParamLimits

0x1ca0,	// (0x00086ab8) slider_imed_adjust_pane_g2_ParamLimits

0x1cb0,	// (0x00086ac8) slider_imed_adjust_pane_g3_ParamLimits

0x1cc1,	// (0x00086ad9) slider_imed_adjust_pane_g4_ParamLimits

0xf76e,	// (0x00094586) slider_imed_adjust_pane_g_ParamLimits

0x7b95,	// (0x0008c9ad) aid_touch_area_cam4_ParamLimits

0x7b95,	// (0x0008c9ad) aid_touch_area_cam4

0xee91,	// (0x00093ca9) battery_pane_cp01

0x7c64,	// (0x0008ca7c) main_camera4_pane_g6_ParamLimits

0x7c64,	// (0x0008ca7c) main_camera4_pane_g6

0x7c8e,	// (0x0008caa6) main_camera4_pane_t2_ParamLimits

0x7c8e,	// (0x0008caa6) main_camera4_pane_t2

0x0001,

0xf870,	// (0x00094688) main_camera4_pane_t_ParamLimits

0xf870,	// (0x00094688) main_camera4_pane_t

0x7cc3,	// (0x0008cadb) aid_touch_area_vid4_ParamLimits

0x7cc3,	// (0x0008cadb) aid_touch_area_vid4

0x7d17,	// (0x0008cb2f) main_video4_pane_g5_ParamLimits

0x7d17,	// (0x0008cb2f) main_video4_pane_g5

0x7d3c,	// (0x0008cb54) vid4_progress_pane_ParamLimits

0x7d3c,	// (0x0008cb54) vid4_progress_pane

0xcf77,	// (0x00091d8f) main_cset_slider_pane_g18_ParamLimits

0xcf77,	// (0x00091d8f) main_cset_slider_pane_g18

0xd17f,	// (0x00091f97) cell_cam4_burst_pane_g2_ParamLimits

0xd17f,	// (0x00091f97) cell_cam4_burst_pane_g2

0x0001,

0xf9c5,	// (0x000947dd) cell_cam4_burst_pane_g_ParamLimits

0xf9c5,	// (0x000947dd) cell_cam4_burst_pane_g

0x333d,	// (0x00088155) bg_cl_pane_ParamLimits

0x333d,	// (0x00088155) bg_cl_pane

0x8c8c,	// (0x0008daa4) cl_header_pane_ParamLimits

0x8c8c,	// (0x0008daa4) cl_header_pane

0x8ca0,	// (0x0008dab8) cl_listscroll_pane_ParamLimits

0x8ca0,	// (0x0008dab8) cl_listscroll_pane

0xd35d,	// (0x00092175) bg_cl_pane_g1

0xd365,	// (0x0009217d) bg_cl_pane_g2

0xd36d,	// (0x00092185) bg_cl_pane_g3

0xd375,	// (0x0009218d) bg_cl_pane_g4

0xd37d,	// (0x00092195) bg_cl_pane_g5

0xd385,	// (0x0009219d) bg_cl_pane_g6

0xd38d,	// (0x000921a5) bg_cl_pane_g7

0xd395,	// (0x000921ad) bg_cl_pane_g8

0xd39d,	// (0x000921b5) bg_cl_pane_g9

0x0008,

0xfa00,	// (0x00094818) bg_cl_pane_g

0x8cb0,	// (0x0008dac8) aid_height_cl_leading_ParamLimits

0x8cb0,	// (0x0008dac8) aid_height_cl_leading

0x8cbc,	// (0x0008dad4) aid_height_cl_text_ParamLimits

0x8cbc,	// (0x0008dad4) aid_height_cl_text

0x0de3,	// (0x00085bfb) bg_cl_header_pane_ParamLimits

0x0de3,	// (0x00085bfb) bg_cl_header_pane

0x8cdb,	// (0x0008daf3) cl_header_pane_g1_ParamLimits

0x8cdb,	// (0x0008daf3) cl_header_pane_g1

0x8cf1,	// (0x0008db09) cl_header_pane_t1_ParamLimits

0x8cf1,	// (0x0008db09) cl_header_pane_t1

0xd3a5,	// (0x000921bd) cl_list_pane

0xcf4a,	// (0x00091d62) hc_scroll_pane_cp01

0x4497,	// (0x000892af) bg_cl_header_pane_g1

0xce30,	// (0x00091c48) bg_cl_header_pane_g2

0x44b7,	// (0x000892cf) bg_cl_header_pane_g3

0xce40,	// (0x00091c58) bg_cl_header_pane_g4

0xce38,	// (0x00091c50) bg_cl_header_pane_g5

0xd08e,	// (0x00091ea6) bg_cl_header_pane_g6

0xce58,	// (0x00091c70) bg_cl_header_pane_g7

0xce60,	// (0x00091c78) bg_cl_header_pane_g8

0xce50,	// (0x00091c68) bg_cl_header_pane_g9

0x0008,

0xfa13,	// (0x0009482b) bg_cl_header_pane_g

0x8d0a,	// (0x0008db22) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8d0a,	// (0x0008db22) hc_cl_list_double_graphic_heading_pane

0x8d1b,	// (0x0008db33) hc_cl_list_single_graphic_pane_ParamLimits

0x8d1b,	// (0x0008db33) hc_cl_list_single_graphic_pane

0x8d31,	// (0x0008db49) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8d31,	// (0x0008db49) hc_cl_list_single_graphic_pane_g1

0x8d3d,	// (0x0008db55) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8d3d,	// (0x0008db55) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa26,	// (0x0009483e) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa26,	// (0x0009483e) hc_cl_list_single_graphic_pane_g

0x8d51,	// (0x0008db69) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8d51,	// (0x0008db69) hc_cl_list_single_graphic_pane_t1

0x8d31,	// (0x0008db49) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8d31,	// (0x0008db49) hc_cl_list_double_graphic_heading_pane_g1

0x8d66,	// (0x0008db7e) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8d66,	// (0x0008db7e) hc_cl_list_double_graphic_heading_pane_g2

0x8d7a,	// (0x0008db92) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8d7a,	// (0x0008db92) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa2b,	// (0x00094843) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa2b,	// (0x00094843) hc_cl_list_double_graphic_heading_pane_g

0x8d8e,	// (0x0008dba6) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8d8e,	// (0x0008dba6) hc_cl_list_double_graphic_heading_pane_t1

0x8da3,	// (0x0008dbbb) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8da3,	// (0x0008dbbb) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa32,	// (0x0009484a) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa32,	// (0x0009484a) hc_cl_list_double_graphic_heading_pane_t

0xeffd,	// (0x00093e15) vid4_progress_pane_g1

0xf00d,	// (0x00093e25) vid4_progress_pane_g2

0x8db8,	// (0x0008dbd0) vid4_progress_pane_g3

0xf01d,	// (0x00093e35) vid4_progress_pane_g4

0x0004,

0xfa37,	// (0x0009484f) vid4_progress_pane_g

0x8dca,	// (0x0008dbe2) vid4_progress_pane_t1

0xf035,	// (0x00093e4d) vid4_progress_pane_t2

0x0002,

0xfa42,	// (0x0009485a) vid4_progress_pane_t

0x8de2,	// (0x0008dbfa) wait_bar_pane_cp07

0x1530,	// (0x00086348) blid_firmament_pane_ParamLimits

0x1573,	// (0x0008638b) popup_blid_sat_info2_window_g1

0x1597,	// (0x000863af) popup_blid_sat_info2_window_t3

0x15a5,	// (0x000863bd) popup_blid_sat_info2_window_t4

0x15b3,	// (0x000863cb) popup_blid_sat_info2_window_t5

0x15c1,	// (0x000863d9) popup_blid_sat_info2_window_t6

0x15d1,	// (0x000863e9) popup_blid_sat_info2_window_t7

0x15df,	// (0x000863f7) popup_blid_sat_info2_window_t8

0x15ed,	// (0x00086405) popup_blid_sat_info2_window_t9

0x15fb,	// (0x00086413) popup_blid_sat_info2_window_t10

0x16bc,	// (0x000864d4) aid_firma_cardinal_ParamLimits

0x16d0,	// (0x000864e8) blid_firmament_pane_t1_ParamLimits

0x16e7,	// (0x000864ff) blid_firmament_pane_t2_ParamLimits

0x16fe,	// (0x00086516) blid_firmament_pane_t3_ParamLimits

0x1715,	// (0x0008652d) blid_firmament_pane_t4_ParamLimits

0xf660,	// (0x00094478) blid_firmament_pane_t_ParamLimits

0x172c,	// (0x00086544) blid_sat_info_pane_ParamLimits

0xb595,	// (0x000903ad) main_cam_set_pane_ParamLimits

0x732c,	// (0x0008c144) aid_size_cell_colour_35_ParamLimits

0x734c,	// (0x0008c164) aid_size_cell_colour_112_ParamLimits

0x736c,	// (0x0008c184) aid_size_cell_effect_ParamLimits

0x1314,	// (0x0008612c) bg_tb_trans_pane_cp02_ParamLimits

0xb739,	// (0x00090551) heading_imed_pane_ParamLimits

0x738c,	// (0x0008c1a4) listscroll_imed_pane_ParamLimits

0xc7d4,	// (0x000915ec) popup_call2_audio_first_window_g5_ParamLimits

0xc7d4,	// (0x000915ec) popup_call2_audio_first_window_g5

0x77b1,	// (0x0008c5c9) aid_size_touch_image3_arrow_left_ParamLimits

0x77b1,	// (0x0008c5c9) aid_size_touch_image3_arrow_left

0x77dd,	// (0x0008c5f5) aid_size_touch_image3_arrow_right_ParamLimits

0x77dd,	// (0x0008c5f5) aid_size_touch_image3_arrow_right

0xf04a,	// (0x00093e62) vid4_progress_pane_t3

0x7531,	// (0x0008c349) main_hwr_training_symbol_option_pane_ParamLimits

0x7531,	// (0x0008c349) main_hwr_training_symbol_option_pane

0x1e6d,	// (0x00086c85) popup_hwr_training_preview_window_ParamLimits

0x1e6d,	// (0x00086c85) popup_hwr_training_preview_window

0x7551,	// (0x0008c369) hwr_training_navi_pane_g5_ParamLimits

0x7551,	// (0x0008c369) hwr_training_navi_pane_g5

0xce1e,	// (0x00091c36) popup_char_count_window

0xb595,	// (0x000903ad) bg_popup_sub_pane_cp20_ParamLimits

0x8784,	// (0x0008d59c) list_vitu2_match_list_pane_ParamLimits

0x8790,	// (0x0008d5a8) vitu2_page_scroll_pane_ParamLimits

0x8790,	// (0x0008d5a8) vitu2_page_scroll_pane

0xd3d0,	// (0x000921e8) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd3d0,	// (0x000921e8) list_single_hwr_training_symbol_option_pane

0xd3e3,	// (0x000921fb) list_single_hwr_training_symbol_option_pane_g1

0xd3eb,	// (0x00092203) list_single_hwr_training_symbol_option_pane_t1

0xd3f9,	// (0x00092211) bg_button_pane_cp023

0xd402,	// (0x0009221a) bg_button_pane_cp024

0xd435,	// (0x0009224d) vitu2_page_scroll_pane_g1

0xd43d,	// (0x00092255) vitu2_page_scroll_pane_g2

0x0001,

0xfa49,	// (0x00094861) vitu2_page_scroll_pane_g

0xd445,	// (0x0009225d) vitu2_page_scroll_pane_t1

0x14a6,	// (0x000862be) popup_char_count_window_g1

0xd454,	// (0x0009226c) popup_char_count_window_g2

0xd45d,	// (0x00092275) popup_char_count_window_g3

0x0002,

0xfa4e,	// (0x00094866) popup_char_count_window_g

0xd466,	// (0x0009227e) popup_char_count_window_t1

0xb5a3,	// (0x000903bb) main_vded2_pane

0x1c29,	// (0x00086a41) aid_size_cell_imed_line

0x1c33,	// (0x00086a4b) grid_imed_line_width_pane

0xef49,	// (0x00093d61) vid4_indicators_pane_g4

0xd474,	// (0x0009228c) cell_imed_line_width_pane_ParamLimits

0xd474,	// (0x0009228c) cell_imed_line_width_pane

0xd488,	// (0x000922a0) cell_imed_line_width_pane_g1

0xd491,	// (0x000922a9) cell_imed_line_width_pane_g2

0x0001,

0xfa55,	// (0x0009486d) cell_imed_line_width_pane_g

0x8e09,	// (0x0008dc21) main_vded2_pane_g1_ParamLimits

0x8e09,	// (0x0008dc21) main_vded2_pane_g1

0x8e1f,	// (0x0008dc37) main_vded2_pane_g2_ParamLimits

0x8e1f,	// (0x0008dc37) main_vded2_pane_g2

0x0001,

0xfa5a,	// (0x00094872) main_vded2_pane_g_ParamLimits

0xfa5a,	// (0x00094872) main_vded2_pane_g

0x8e31,	// (0x0008dc49) vded2_slider_pane_ParamLimits

0x8e31,	// (0x0008dc49) vded2_slider_pane

0x8e41,	// (0x0008dc59) aid_size_touch_vded2_end

0x8e4b,	// (0x0008dc63) aid_size_touch_vded2_playhead

0xd499,	// (0x000922b1) aid_size_touch_vded2_start

0xd4a1,	// (0x000922b9) vded2_slider_bg_pane

0xd4aa,	// (0x000922c2) vded2_slider_pane_g1

0xd4b3,	// (0x000922cb) vded2_slider_pane_g2

0x8e55,	// (0x0008dc6d) vded2_slider_pane_g3

0x0002,

0xfa5f,	// (0x00094877) vded2_slider_pane_g

0xd4bb,	// (0x000922d3) vded2_slider_bg_pane_g1

0xd4c4,	// (0x000922dc) vded2_slider_bg_pane_g2

0xd4cd,	// (0x000922e5) vded2_slider_bg_pane_g3

0x0002,

0xfa66,	// (0x0009487e) vded2_slider_bg_pane_g

0x588e,	// (0x0008a6a6) aid_postcard_touch_down_pane_ParamLimits

0x588e,	// (0x0008a6a6) aid_postcard_touch_down_pane

0x58a4,	// (0x0008a6bc) aid_postcard_touch_up_pane_ParamLimits

0x58a4,	// (0x0008a6bc) aid_postcard_touch_up_pane

0xb5a3,	// (0x000903bb) main_blid2_pane

0xcc01,	// (0x00091a19) popup_blid2_search_window

0x0749,	// (0x00085561) blid2_gps_pane

0x0749,	// (0x00085561) blid2_navig_pane

0x0749,	// (0x00085561) blid2_search_pane

0x0749,	// (0x00085561) blid2_tripm_pane

0x8e60,	// (0x0008dc78) blid2_search_pane_g1_ParamLimits

0x8e60,	// (0x0008dc78) blid2_search_pane_g1

0x8e7a,	// (0x0008dc92) blid2_search_pane_t1_ParamLimits

0x8e7a,	// (0x0008dc92) blid2_search_pane_t1

0x8e8c,	// (0x0008dca4) aid_size_cell_blid2_gps_ParamLimits

0x8e8c,	// (0x0008dca4) aid_size_cell_blid2_gps

0x8ea4,	// (0x0008dcbc) blid2_gps_pane_g1_ParamLimits

0x8ea4,	// (0x0008dcbc) blid2_gps_pane_g1

0x8eb8,	// (0x0008dcd0) grid_blid2_satellite_pane_ParamLimits

0x8eb8,	// (0x0008dcd0) grid_blid2_satellite_pane

0x8ed2,	// (0x0008dcea) blid2_navig_pane_g1_ParamLimits

0x8ed2,	// (0x0008dcea) blid2_navig_pane_g1

0x8ede,	// (0x0008dcf6) blid2_navig_pane_t1_ParamLimits

0x8ede,	// (0x0008dcf6) blid2_navig_pane_t1

0x8ef9,	// (0x0008dd11) blid2_navig_pane_t2_ParamLimits

0x8ef9,	// (0x0008dd11) blid2_navig_pane_t2

0x0001,

0xfa6d,	// (0x00094885) blid2_navig_pane_t_ParamLimits

0xfa6d,	// (0x00094885) blid2_navig_pane_t

0x8f14,	// (0x0008dd2c) blid2_navig_ring_pane_ParamLimits

0x8f14,	// (0x0008dd2c) blid2_navig_ring_pane

0x8f2d,	// (0x0008dd45) blid2_speed_pane_ParamLimits

0x8f2d,	// (0x0008dd45) blid2_speed_pane

0x8f39,	// (0x0008dd51) blid2_tripm_pane_g1_ParamLimits

0x8f39,	// (0x0008dd51) blid2_tripm_pane_g1

0x8f52,	// (0x0008dd6a) blid2_tripm_pane_g2_ParamLimits

0x8f52,	// (0x0008dd6a) blid2_tripm_pane_g2

0x8f66,	// (0x0008dd7e) blid2_tripm_pane_g3_ParamLimits

0x8f66,	// (0x0008dd7e) blid2_tripm_pane_g3

0x8f7a,	// (0x0008dd92) blid2_tripm_pane_g4_ParamLimits

0x8f7a,	// (0x0008dd92) blid2_tripm_pane_g4

0x8f8e,	// (0x0008dda6) blid2_tripm_pane_g5_ParamLimits

0x8f8e,	// (0x0008dda6) blid2_tripm_pane_g5

0x0005,

0xfa72,	// (0x0009488a) blid2_tripm_pane_g_ParamLimits

0xfa72,	// (0x0009488a) blid2_tripm_pane_g

0x8fb4,	// (0x0008ddcc) blid2_tripm_pane_t1_ParamLimits

0x8fb4,	// (0x0008ddcc) blid2_tripm_pane_t1

0x8fcf,	// (0x0008dde7) blid2_tripm_pane_t2_ParamLimits

0x8fcf,	// (0x0008dde7) blid2_tripm_pane_t2

0x8fe8,	// (0x0008de00) blid2_tripm_pane_t3_ParamLimits

0x8fe8,	// (0x0008de00) blid2_tripm_pane_t3

0x0003,

0xfa7f,	// (0x00094897) blid2_tripm_pane_t_ParamLimits

0xfa7f,	// (0x00094897) blid2_tripm_pane_t

0x902f,	// (0x0008de47) cell_blid2_satellite_pane_ParamLimits

0x902f,	// (0x0008de47) cell_blid2_satellite_pane

0x904d,	// (0x0008de65) cell_blid2_satellite_pane_g1

0xd4d6,	// (0x000922ee) cell_blid2_satellite_pane_t1

0x3de5,	// (0x00088bfd) blid2_speed_pane_g1

0xd4e4,	// (0x000922fc) blid2_speed_pane_t1

0xd4f2,	// (0x0009230a) blid2_speed_pane_t2

0x0001,

0xfa88,	// (0x000948a0) blid2_speed_pane_t

0x3de5,	// (0x00088bfd) blid2_navig_ring_pane_g1

0x9056,	// (0x0008de6e) blid2_navig_ring_pane_g2

0x905e,	// (0x0008de76) blid2_navig_ring_pane_g3

0x9066,	// (0x0008de7e) blid2_navig_ring_pane_g4

0x906e,	// (0x0008de86) blid2_navig_ring_pane_g5

0x0004,

0xfa8d,	// (0x000948a5) blid2_navig_ring_pane_g

0x0749,	// (0x00085561) bg_popup_window_pane_cp011

0xd500,	// (0x00092318) popup_blid2_search_window_g1

0xd508,	// (0x00092320) popup_blid2_search_window_t1

0xd516,	// (0x0009232e) popup_blid2_search_window_t2

0x0001,

0xfa98,	// (0x000948b0) popup_blid2_search_window_t

0x4363,	// (0x0008917b) main_browser_pane_g1

0x333d,	// (0x00088155) main_browser_pane_ParamLimits

0xb595,	// (0x000903ad) bg_button_pane_cp011_ParamLimits

0x8045,	// (0x0008ce5d) cell_vitu2_function_pane_g1_ParamLimits

0x1314,	// (0x0008612c) bg_popup_sub_pane_cp22_ParamLimits

0x8928,	// (0x0008d740) input_focus_pane_cp08_ParamLimits

0x893f,	// (0x0008d757) popup_vitu2_query_button_pane_ParamLimits

0x893f,	// (0x0008d757) popup_vitu2_query_button_pane

0x8950,	// (0x0008d768) popup_vitu2_query_input_button_pane

0xd0c9,	// (0x00091ee1) popup_vitu2_query_window_g1_ParamLimits

0x8958,	// (0x0008d770) popup_vitu2_query_window_g2_ParamLimits

0xf999,	// (0x000947b1) popup_vitu2_query_window_g_ParamLimits

0x0749,	// (0x00085561) bg_button_pane_cp026

0x9076,	// (0x0008de8e) popup_vitu2_query_input_button_pane_g1

0x0749,	// (0x00085561) bg_button_pane_cp025

0xd524,	// (0x0009233c) popup_vitu2_query_button_pane_t1

0x67db,	// (0x0008b5f3) main_mp3_pane_t6

0x67e9,	// (0x0008b601) popup_slider_window_cp01

0xeead,	// (0x00093cc5) cam4_battery_pane

0xef06,	// (0x00093d1e) cam4_battery_pane_cp02

0xeff5,	// (0x00093e0d) cam4_battery_pane_cp01

0xeff5,	// (0x00093e0d) cam4_battery_pane_cp03

0x1f53,	// (0x00086d6b) cam4_battery_pane_g1

0x3de5,	// (0x00088bfd) cam4_battery_pane_g2

0x0001,

0xfa9d,	// (0x000948b5) cam4_battery_pane_g

0x1609,	// (0x00086421) popup_blid_sat_info2_window_t11

0xbbb2,	// (0x000909ca) aid_size_touch_mv_arrow_left_ParamLimits

0xbbdb,	// (0x000909f3) aid_size_touch_mv_arrow_right_ParamLimits

0xbc39,	// (0x00090a51) navi_pane_g1_ParamLimits

0xbc45,	// (0x00090a5d) navi_pane_g2_ParamLimits

0xbc73,	// (0x00090a8b) navi_pane_g3_ParamLimits

0xf374,	// (0x0009418c) navi_pane_g_ParamLimits

0x54ca,	// (0x0008a2e2) navi_pane_mv_t1_ParamLimits

0x7398,	// (0x0008c1b0) grid_imed_effect_pane_ParamLimits

0x3f07,	// (0x00088d1f) aid_placing_vt_slider_lsc

0x3f17,	// (0x00088d2f) aid_placing_vt_slider_prt

0x0de3,	// (0x00085bfb) bg_tb_trans_pane_cp01_ParamLimits

0x18b0,	// (0x000866c8) popup_image_details_window_g1_ParamLimits

0x18c3,	// (0x000866db) popup_image_details_window_g2_ParamLimits

0x18d8,	// (0x000866f0) popup_image_details_window_g3_ParamLimits

0x18d8,	// (0x000866f0) popup_image_details_window_g3

0xf6a0,	// (0x000944b8) popup_image_details_window_g_ParamLimits

0x18ec,	// (0x00086704) popup_image_details_window_t1_ParamLimits

0x18fe,	// (0x00086716) popup_image_details_window_t2_ParamLimits

0x1917,	// (0x0008672f) popup_image_details_window_t3_ParamLimits

0x192b,	// (0x00086743) popup_image_details_window_t4_ParamLimits

0x1946,	// (0x0008675e) popup_image_details_window_t5_ParamLimits

0xf6a7,	// (0x000944bf) popup_image_details_window_t_ParamLimits

0x8cc8,	// (0x0008dae0) cl_header_name_pane_ParamLimits

0x8cc8,	// (0x0008dae0) cl_header_name_pane

0x907e,	// (0x0008de96) cl_header_name_pane_t1_ParamLimits

0x907e,	// (0x0008de96) cl_header_name_pane_t1

0x909f,	// (0x0008deb7) cl_header_name_pane_t2_ParamLimits

0x909f,	// (0x0008deb7) cl_header_name_pane_t2

0x90e1,	// (0x0008def9) cl_header_name_pane_t3_ParamLimits

0x90e1,	// (0x0008def9) cl_header_name_pane_t3

0x0002,

0xfaa2,	// (0x000948ba) cl_header_name_pane_t_ParamLimits

0xfaa2,	// (0x000948ba) cl_header_name_pane_t

0xbd02,	// (0x00090b1a) navi_pane_mv_g2_ParamLimits

0xcde9,	// (0x00091c01) field_vitu2_entry_pane_g1_ParamLimits

0xcdf5,	// (0x00091c0d) field_vitu2_entry_pane_g2_ParamLimits

0x1f39,	// (0x00086d51) field_vitu2_entry_pane_g3_ParamLimits

0x1f39,	// (0x00086d51) field_vitu2_entry_pane_g3

0xf8a2,	// (0x000946ba) field_vitu2_entry_pane_g_ParamLimits

0x7fc1,	// (0x0008cdd9) cell_vitu2_itu_pane_g1_ParamLimits

0x7fd9,	// (0x0008cdf1) cell_vitu2_itu_pane_g2_ParamLimits

0x7fd9,	// (0x0008cdf1) cell_vitu2_itu_pane_g2

0x0001,

0xf8ae,	// (0x000946c6) cell_vitu2_itu_pane_g_ParamLimits

0xf8ae,	// (0x000946c6) cell_vitu2_itu_pane_g

0xb595,	// (0x000903ad) bg_vkb2_func_pane_cp05_ParamLimits

0xb595,	// (0x000903ad) bg_vkb2_func_pane_cp05

0xb595,	// (0x000903ad) bg_vkb2_func_pane_cp03

0xb595,	// (0x000903ad) bg_vkb2_func_pane_cp04

0xb595,	// (0x000903ad) bg_vkb2_func_pane_cp10_ParamLimits

0xb595,	// (0x000903ad) bg_vkb2_func_pane_cp10

0x8c6e,	// (0x0008da86) bg_vkb2_func_pane_cp08

0x8c54,	// (0x0008da6c) bg_vkb2_func_pane_cp06

0x8c62,	// (0x0008da7a) bg_vkb2_func_pane_cp07

0xd40b,	// (0x00092223) bg_vkb2_func_pane_cp11_ParamLimits

0xd40b,	// (0x00092223) bg_vkb2_func_pane_cp11

0xd420,	// (0x00092238) bg_vkb2_func_pane_cp12_ParamLimits

0xd420,	// (0x00092238) bg_vkb2_func_pane_cp12

0x0749,	// (0x00085561) bg_vkb2_func_pane_cp09

0xce30,	// (0x00091c48) bg_vkb2_func_pane_g1

0x44b7,	// (0x000892cf) bg_vkb2_func_pane_g2

0xce38,	// (0x00091c50) bg_vkb2_func_pane_g3

0xce40,	// (0x00091c58) bg_vkb2_func_pane_g4

0xd08e,	// (0x00091ea6) bg_vkb2_func_pane_g5

0xce58,	// (0x00091c70) bg_vkb2_func_pane_g6

0xce60,	// (0x00091c78) bg_vkb2_func_pane_g7

0xce50,	// (0x00091c68) bg_vkb2_func_pane_g8

0x4497,	// (0x000892af) bg_vkb2_func_pane_g9

0x0008,

0xfaa9,	// (0x000948c1) bg_vkb2_func_pane_g

0x8fa2,	// (0x0008ddba) blid2_tripm_pane_g6_ParamLimits

0x8fa2,	// (0x0008ddba) blid2_tripm_pane_g6

0xcd2d,	// (0x00091b45) mp4_progress_pane_g1

0x901b,	// (0x0008de33) blid2_tripm_values_pane_ParamLimits

0x901b,	// (0x0008de33) blid2_tripm_values_pane

0x9112,	// (0x0008df2a) blid2_tripm_values_pane_t1

0x9120,	// (0x0008df38) blid2_tripm_values_pane_t2

0x912e,	// (0x0008df46) blid2_tripm_values_pane_t3

0x913c,	// (0x0008df54) blid2_tripm_values_pane_t4

0x914a,	// (0x0008df62) blid2_tripm_values_pane_t5

0x9158,	// (0x0008df70) blid2_tripm_values_pane_t6

0x9166,	// (0x0008df7e) blid2_tripm_values_pane_t7

0x9174,	// (0x0008df8c) blid2_tripm_values_pane_t8

0x9182,	// (0x0008df9a) blid2_tripm_values_pane_t9

0x0008,

0xfabc,	// (0x000948d4) blid2_tripm_values_pane_t

0x3f53,	// (0x00088d6b) call_video_pane_t1_ParamLimits

0x3f71,	// (0x00088d89) call_video_pane_t2_ParamLimits

0xf222,	// (0x0009403a) call_video_pane_t_ParamLimits

0x578a,	// (0x0008a5a2) msg_header_pane_g1_ParamLimits

0xbeed,	// (0x00090d05) msg_header_pane_g2_ParamLimits

0xbeed,	// (0x00090d05) msg_header_pane_g2

0x0001,

0xf417,	// (0x0009422f) msg_header_pane_g_ParamLimits

0xf417,	// (0x0009422f) msg_header_pane_g

0x333d,	// (0x00088155) main_clock2_pane_ParamLimits

0x7099,	// (0x0008beb1) grid_clock2_toolbar_pane_ParamLimits

0x7099,	// (0x0008beb1) grid_clock2_toolbar_pane

0x7099,	// (0x0008beb1) listscroll_clock2_pane_ParamLimits

0x7099,	// (0x0008beb1) listscroll_clock2_pane

0x717d,	// (0x0008bf95) main_clock2_pane_t3_ParamLimits

0x717d,	// (0x0008bf95) main_clock2_pane_t3

0x71a1,	// (0x0008bfb9) main_clock2_pane_t4_ParamLimits

0x71a1,	// (0x0008bfb9) main_clock2_pane_t4

0xd532,	// (0x0009234a) cell_clock2_toolbar_pane

0xd53a,	// (0x00092352) cell_clock2_toolbar_pane_cp01

0xd53a,	// (0x00092352) cell_clock2_toolbar_pane_cp02

0xd542,	// (0x0009235a) cell_clock2_toolbar_pane_cp03

0xd54a,	// (0x00092362) list_clock2_pane

0xbb28,	// (0x00090940) scroll_pane_cp10

0xd552,	// (0x0009236a) list_single_clock2_pane_ParamLimits

0xd552,	// (0x0009236a) list_single_clock2_pane

0x3bf8,	// (0x00088a10) list_highlight_pane_cp08

0xd55f,	// (0x00092377) list_single_clock2_pane_t1

0xd56d,	// (0x00092385) list_single_clock2_pane_t2

0x0001,

0xfacf,	// (0x000948e7) list_single_clock2_pane_t

0x0749,	// (0x00085561) bg_button_pane_cp10

0xd57b,	// (0x00092393) cell_clock2_toolbar_pane_g1

0x581a,	// (0x0008a632) aid_main_viewer_pane_g1_ParamLimits

0x581a,	// (0x0008a632) aid_main_viewer_pane_g1

0x5828,	// (0x0008a640) aid_main_viewer_pane_g2_ParamLimits

0x5828,	// (0x0008a640) aid_main_viewer_pane_g2

0x5836,	// (0x0008a64e) aid_main_viewer_pane_g3_ParamLimits

0x5836,	// (0x0008a64e) aid_main_viewer_pane_g3

0x5845,	// (0x0008a65d) aid_main_viewer_pane_g4_ParamLimits

0x5845,	// (0x0008a65d) aid_main_viewer_pane_g4

0x0003,

0xf428,	// (0x00094240) aid_main_viewer_pane_g_ParamLimits

0xf428,	// (0x00094240) aid_main_viewer_pane_g

0x618c,	// (0x0008afa4) main_calc_pane_ParamLimits

0x61b2,	// (0x0008afca) main_dialer2_pane_ParamLimits

0xb5a3,	// (0x000903bb) main_cam6_pane

0xb5a3,	// (0x000903bb) main_vid6_pane

0x70a5,	// (0x0008bebd) listscroll_gen_pane_cp06_ParamLimits

0x70a5,	// (0x0008bebd) listscroll_gen_pane_cp06

0x71c4,	// (0x0008bfdc) main_clock2_pane_t5_ParamLimits

0x71c4,	// (0x0008bfdc) main_clock2_pane_t5

0x7222,	// (0x0008c03a) aid_call2_pane_cp10_ParamLimits

0x7234,	// (0x0008c04c) aid_call_pane_cp10_ParamLimits

0xbba6,	// (0x000909be) popup_clock_analogue_window_cp10_g1_ParamLimits

0xbba6,	// (0x000909be) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7246,	// (0x0008c05e) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7246,	// (0x0008c05e) popup_clock_analogue_window_cp10_g4_ParamLimits

0xbba6,	// (0x000909be) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf75c,	// (0x00094574) popup_clock_analogue_window_cp10_g_ParamLimits

0x725c,	// (0x0008c074) popup_clock_analogue_window_cp10_t1_ParamLimits

0x775e,	// (0x0008c576) cell_dialer2_keypad_pane_g2_ParamLimits

0x775e,	// (0x0008c576) cell_dialer2_keypad_pane_g2

0x0001,

0xf841,	// (0x00094659) cell_dialer2_keypad_pane_g_ParamLimits

0xf841,	// (0x00094659) cell_dialer2_keypad_pane_g

0x777a,	// (0x0008c592) cell_dialer2_keypad_pane_t1

0x8368,	// (0x0008d180) main_cset_text2_pane_ParamLimits

0x8368,	// (0x0008d180) main_cset_text2_pane

0xd2b5,	// (0x000920cd) area_vitu2_query_pane_g1_ParamLimits

0x8bf3,	// (0x0008da0b) area_vitu2_query_pane_g2_ParamLimits

0xf9ec,	// (0x00094804) area_vitu2_query_pane_g_ParamLimits

0xd339,	// (0x00092151) area_vitu2_query_pane_t7_ParamLimits

0xd339,	// (0x00092151) area_vitu2_query_pane_t7

0x8c54,	// (0x0008da6c) bg_button_pane_cp018_ParamLimits

0x8c62,	// (0x0008da7a) bg_button_pane_cp021_ParamLimits

0x8c6e,	// (0x0008da86) bg_button_pane_cp022_ParamLimits

0x8c6e,	// (0x0008da86) bg_vkb2_func_pane_cp08_ParamLimits

0x8c54,	// (0x0008da6c) bg_vkb2_func_pane_cp06_ParamLimits

0x8c62,	// (0x0008da7a) bg_vkb2_func_pane_cp07_ParamLimits

0x8c7d,	// (0x0008da95) input_focus_pane_cp09_ParamLimits

0xf05f,	// (0x00093e77) cam6_autofocus_pane_ParamLimits

0xf05f,	// (0x00093e77) cam6_autofocus_pane

0x9190,	// (0x0008dfa8) cam6_image_uncrop_pane_ParamLimits

0x9190,	// (0x0008dfa8) cam6_image_uncrop_pane

0x919f,	// (0x0008dfb7) cam6_indi_pane_ParamLimits

0x919f,	// (0x0008dfb7) cam6_indi_pane

0x91b5,	// (0x0008dfcd) cam6_mode_pane_ParamLimits

0x91b5,	// (0x0008dfcd) cam6_mode_pane

0x91c7,	// (0x0008dfdf) cam6_timer_pane_ParamLimits

0x91c7,	// (0x0008dfdf) cam6_timer_pane

0x91d3,	// (0x0008dfeb) cam6_zoom_pane_ParamLimits

0x91d3,	// (0x0008dfeb) cam6_zoom_pane

0x91df,	// (0x0008dff7) cam6_mode_pane_g1_ParamLimits

0x91df,	// (0x0008dff7) cam6_mode_pane_g1

0x91ef,	// (0x0008e007) cam6_mode_pane_g2_ParamLimits

0x91ef,	// (0x0008e007) cam6_mode_pane_g2

0x91ff,	// (0x0008e017) cam6_mode_pane_g3_ParamLimits

0x91ff,	// (0x0008e017) cam6_mode_pane_g3

0x920f,	// (0x0008e027) cam6_mode_pane_g4_ParamLimits

0x920f,	// (0x0008e027) cam6_mode_pane_g4

0x0003,

0xfad4,	// (0x000948ec) cam6_mode_pane_g_ParamLimits

0xfad4,	// (0x000948ec) cam6_mode_pane_g

0x1f2b,	// (0x00086d43) bg_tb_trans_pane_cp08_ParamLimits

0x1f2b,	// (0x00086d43) bg_tb_trans_pane_cp08

0xd583,	// (0x0009239b) cam6_battery_pane_ParamLimits

0xd583,	// (0x0009239b) cam6_battery_pane

0xd599,	// (0x000923b1) cam6_indi_pane_g1_ParamLimits

0xd599,	// (0x000923b1) cam6_indi_pane_g1

0xd5ab,	// (0x000923c3) cam6_indi_pane_g2_ParamLimits

0xd5ab,	// (0x000923c3) cam6_indi_pane_g2

0xd5bd,	// (0x000923d5) cam6_indi_pane_g3_ParamLimits

0xd5bd,	// (0x000923d5) cam6_indi_pane_g3

0x0002,

0xfadd,	// (0x000948f5) cam6_indi_pane_g_ParamLimits

0xfadd,	// (0x000948f5) cam6_indi_pane_g

0xd5cf,	// (0x000923e7) cam6_indi_pane_t1_ParamLimits

0xd5cf,	// (0x000923e7) cam6_indi_pane_t1

0x921f,	// (0x0008e037) cam6_autofocus_pane_g1

0x9227,	// (0x0008e03f) cam6_autofocus_pane_g2

0x922f,	// (0x0008e047) cam6_autofocus_pane_g3

0x9237,	// (0x0008e04f) cam6_autofocus_pane_g4

0x0003,

0xfae4,	// (0x000948fc) cam6_autofocus_pane_g

0xd5f5,	// (0x0009240d) cam6_timer_pane_g1

0xd5fd,	// (0x00092415) cam6_timer_pane_t1

0xd60b,	// (0x00092423) cam6_zoom_cont_pane

0xd613,	// (0x0009242b) cam6_zoom_pane_g1

0xd61b,	// (0x00092433) cam6_zoom_pane_g2

0x923f,	// (0x0008e057) cam6_zoom_pane_g3

0x0002,

0xfaed,	// (0x00094905) cam6_zoom_pane_g

0x3de5,	// (0x00088bfd) cam6_battery_pane_g1

0x3de5,	// (0x00088bfd) cam6_battery_pane_g2

0x0001,

0xf3d8,	// (0x000941f0) cam6_battery_pane_g

0xd623,	// (0x0009243b) cam6_zoom_cont_pane_g1

0xd62c,	// (0x00092444) cam6_zoom_cont_pane_g2

0xd635,	// (0x0009244d) cam6_zoom_cont_pane_g3

0x0002,

0xfaf4,	// (0x0009490c) cam6_zoom_cont_pane_g

0x9259,	// (0x0008e071) cam6_mode_pane_cp_ParamLimits

0x9259,	// (0x0008e071) cam6_mode_pane_cp

0x926b,	// (0x0008e083) cam6_zoom_pane_cp_ParamLimits

0x926b,	// (0x0008e083) cam6_zoom_pane_cp

0x9277,	// (0x0008e08f) vid6_image_uncrop_cif_pane_ParamLimits

0x9277,	// (0x0008e08f) vid6_image_uncrop_cif_pane

0x9287,	// (0x0008e09f) vid6_image_uncrop_nhd_pane_ParamLimits

0x9287,	// (0x0008e09f) vid6_image_uncrop_nhd_pane

0x9296,	// (0x0008e0ae) vid6_image_uncrop_vga_pane_ParamLimits

0x9296,	// (0x0008e0ae) vid6_image_uncrop_vga_pane

0x92a5,	// (0x0008e0bd) vid6_image_uncrop_wvga_pane_ParamLimits

0x92a5,	// (0x0008e0bd) vid6_image_uncrop_wvga_pane

0x92b4,	// (0x0008e0cc) vid6_indi_pane_ParamLimits

0x92b4,	// (0x0008e0cc) vid6_indi_pane

0x1f2b,	// (0x00086d43) bg_tb_trans_pane_cp09_ParamLimits

0x1f2b,	// (0x00086d43) bg_tb_trans_pane_cp09

0xd64d,	// (0x00092465) cam6_battery_pane_cp_ParamLimits

0xd64d,	// (0x00092465) cam6_battery_pane_cp

0xd659,	// (0x00092471) vid6_indi_pane_g1_ParamLimits

0xd659,	// (0x00092471) vid6_indi_pane_g1

0xd66b,	// (0x00092483) vid6_indi_pane_g2_ParamLimits

0xd66b,	// (0x00092483) vid6_indi_pane_g2

0xd67d,	// (0x00092495) vid6_indi_pane_g3_ParamLimits

0xd67d,	// (0x00092495) vid6_indi_pane_g3

0xd692,	// (0x000924aa) vid6_indi_pane_g4_ParamLimits

0xd692,	// (0x000924aa) vid6_indi_pane_g4

0xd6a7,	// (0x000924bf) vid6_indi_pane_g5_ParamLimits

0xd6a7,	// (0x000924bf) vid6_indi_pane_g5

0x0004,

0xfafb,	// (0x00094913) vid6_indi_pane_g_ParamLimits

0xfafb,	// (0x00094913) vid6_indi_pane_g

0xd6c1,	// (0x000924d9) vid6_indi_pane_t1_ParamLimits

0xd6c1,	// (0x000924d9) vid6_indi_pane_t1

0xd6d7,	// (0x000924ef) vid6_indi_pane_t2_ParamLimits

0xd6d7,	// (0x000924ef) vid6_indi_pane_t2

0xd6ff,	// (0x00092517) vid6_indi_pane_t3_ParamLimits

0xd6ff,	// (0x00092517) vid6_indi_pane_t3

0xd727,	// (0x0009253f) vid6_indi_pane_t4_ParamLimits

0xd727,	// (0x0009253f) vid6_indi_pane_t4

0x0003,

0xfb06,	// (0x0009491e) vid6_indi_pane_t_ParamLimits

0xfb06,	// (0x0009491e) vid6_indi_pane_t

0xd74b,	// (0x00092563) wait_bar_pane_cp08

0x92cc,	// (0x0008e0e4) main_cset_text2_pane_t1_ParamLimits

0x92cc,	// (0x0008e0e4) main_cset_text2_pane_t1

0x9247,	// (0x0008e05f) listscroll_gen_pane_cp06_t1_ParamLimits

0x9247,	// (0x0008e05f) listscroll_gen_pane_cp06_t1

0xb5a3,	// (0x000903bb) main_cam6_set_pane

0xcdc4,	// (0x00091bdc) bg_tb_trans_pane_cp06_ParamLimits

0xeeb5,	// (0x00093ccd) cam4_indicators_pane_g1_ParamLimits

0xeec6,	// (0x00093cde) cam4_indicators_pane_g2_ParamLimits

0xf87e,	// (0x00094696) cam4_indicators_pane_g_ParamLimits

0xeee4,	// (0x00093cfc) cam4_indicators_pane_t1_ParamLimits

0xb595,	// (0x000903ad) bg_tb_trans_pane_cp07_ParamLimits

0xef10,	// (0x00093d28) vid4_indicators_pane_g1_ParamLimits

0xef24,	// (0x00093d3c) vid4_indicators_pane_g2_ParamLimits

0xef38,	// (0x00093d50) vid4_indicators_pane_g3_ParamLimits

0xef49,	// (0x00093d61) vid4_indicators_pane_g4_ParamLimits

0xf890,	// (0x000946a8) vid4_indicators_pane_g_ParamLimits

0xef67,	// (0x00093d7f) vid4_indicators_pane_t1_ParamLimits

0xeffd,	// (0x00093e15) vid4_progress_pane_g1_ParamLimits

0xf00d,	// (0x00093e25) vid4_progress_pane_g2_ParamLimits

0x8db8,	// (0x0008dbd0) vid4_progress_pane_g3_ParamLimits

0xf01d,	// (0x00093e35) vid4_progress_pane_g4_ParamLimits

0xfa37,	// (0x0009484f) vid4_progress_pane_g_ParamLimits

0x8dca,	// (0x0008dbe2) vid4_progress_pane_t1_ParamLimits

0xf035,	// (0x00093e4d) vid4_progress_pane_t2_ParamLimits

0xf04a,	// (0x00093e62) vid4_progress_pane_t3_ParamLimits

0xfa42,	// (0x0009485a) vid4_progress_pane_t_ParamLimits

0x8de2,	// (0x0008dbfa) wait_bar_pane_cp07_ParamLimits

0x92e9,	// (0x0008e101) main_cam6_set_pane_g2_ParamLimits

0x92e9,	// (0x0008e101) main_cam6_set_pane_g2

0x930d,	// (0x0008e125) main_cset6_listscroll_pane_ParamLimits

0x930d,	// (0x0008e125) main_cset6_listscroll_pane

0x932d,	// (0x0008e145) main_cset6_slider_pane_ParamLimits

0x932d,	// (0x0008e145) main_cset6_slider_pane

0x9343,	// (0x0008e15b) main_cset6_text2_pane_ParamLimits

0x9343,	// (0x0008e15b) main_cset6_text2_pane

0xd75a,	// (0x00092572) main_cset6_text_pane

0xd762,	// (0x0009257a) main_cset_list_pane_copy1_ParamLimits

0xd762,	// (0x0009257a) main_cset_list_pane_copy1

0xd772,	// (0x0009258a) scroll_pane_cp028_copy1

0x9351,	// (0x0008e169) cset_list_set_pane_copy1

0x9362,	// (0x0008e17a) aid_position_infowindow_above_copy1

0x936a,	// (0x0008e182) aid_position_infowindow_below_copy1

0x9372,	// (0x0008e18a) cset_list_set_pane_g1_copy1

0x937a,	// (0x0008e192) cset_list_set_pane_g3_copy1_ParamLimits

0x937a,	// (0x0008e192) cset_list_set_pane_g3_copy1

0x9389,	// (0x0008e1a1) cset_list_set_pane_t1_copy1_ParamLimits

0x9389,	// (0x0008e1a1) cset_list_set_pane_t1_copy1

0x0de3,	// (0x00085bfb) list_highlight_pane_cp021_copy1_ParamLimits

0x0de3,	// (0x00085bfb) list_highlight_pane_cp021_copy1

0xd77b,	// (0x00092593) cset6_slider_pane_ParamLimits

0xd77b,	// (0x00092593) cset6_slider_pane

0xd7a7,	// (0x000925bf) main_cset6_slider_pane_g1_ParamLimits

0xd7a7,	// (0x000925bf) main_cset6_slider_pane_g1

0x939e,	// (0x0008e1b6) main_cset6_slider_pane_g2_ParamLimits

0x939e,	// (0x0008e1b6) main_cset6_slider_pane_g2

0xd7cf,	// (0x000925e7) main_cset6_slider_pane_g3_ParamLimits

0xd7cf,	// (0x000925e7) main_cset6_slider_pane_g3

0x93c6,	// (0x0008e1de) main_cset6_slider_pane_g4_ParamLimits

0x93c6,	// (0x0008e1de) main_cset6_slider_pane_g4

0x93d2,	// (0x0008e1ea) main_cset6_slider_pane_g5_ParamLimits

0x93d2,	// (0x0008e1ea) main_cset6_slider_pane_g5

0xcf5f,	// (0x00091d77) main_cset6_slider_pane_g7_ParamLimits

0xcf5f,	// (0x00091d77) main_cset6_slider_pane_g7

0xcf6b,	// (0x00091d83) main_cset6_slider_pane_g8_ParamLimits

0xcf6b,	// (0x00091d83) main_cset6_slider_pane_g8

0x840e,	// (0x0008d226) main_cset6_slider_pane_g9_ParamLimits

0x840e,	// (0x0008d226) main_cset6_slider_pane_g9

0x841a,	// (0x0008d232) main_cset6_slider_pane_g10_ParamLimits

0x841a,	// (0x0008d232) main_cset6_slider_pane_g10

0x8426,	// (0x0008d23e) main_cset6_slider_pane_g11_ParamLimits

0x8426,	// (0x0008d23e) main_cset6_slider_pane_g11

0x8432,	// (0x0008d24a) main_cset6_slider_pane_g12_ParamLimits

0x8432,	// (0x0008d24a) main_cset6_slider_pane_g12

0x843e,	// (0x0008d256) main_cset6_slider_pane_g13_ParamLimits

0x843e,	// (0x0008d256) main_cset6_slider_pane_g13

0x844a,	// (0x0008d262) main_cset6_slider_pane_g14_ParamLimits

0x844a,	// (0x0008d262) main_cset6_slider_pane_g14

0x93de,	// (0x0008e1f6) main_cset6_slider_pane_g15_ParamLimits

0x93de,	// (0x0008e1f6) main_cset6_slider_pane_g15

0x846e,	// (0x0008d286) main_cset6_slider_pane_g16_ParamLimits

0x846e,	// (0x0008d286) main_cset6_slider_pane_g16

0x847a,	// (0x0008d292) main_cset6_slider_pane_g17_ParamLimits

0x847a,	// (0x0008d292) main_cset6_slider_pane_g17

0x0011,

0xfb0f,	// (0x00094927) main_cset6_slider_pane_g_ParamLimits

0xfb0f,	// (0x00094927) main_cset6_slider_pane_g

0xd7db,	// (0x000925f3) main_cset6_slider_pane_t1_ParamLimits

0xd7db,	// (0x000925f3) main_cset6_slider_pane_t1

0x940e,	// (0x0008e226) main_cset6_slider_pane_t2_ParamLimits

0x940e,	// (0x0008e226) main_cset6_slider_pane_t2

0x9439,	// (0x0008e251) main_cset6_slider_pane_t3_ParamLimits

0x9439,	// (0x0008e251) main_cset6_slider_pane_t3

0x9464,	// (0x0008e27c) main_cset6_slider_pane_t4_ParamLimits

0x9464,	// (0x0008e27c) main_cset6_slider_pane_t4

0x948f,	// (0x0008e2a7) main_cset6_slider_pane_t5_ParamLimits

0x948f,	// (0x0008e2a7) main_cset6_slider_pane_t5

0xd81c,	// (0x00092634) main_cset6_slider_pane_t7_ParamLimits

0xd81c,	// (0x00092634) main_cset6_slider_pane_t7

0x94ba,	// (0x0008e2d2) main_cset6_slider_pane_t8_ParamLimits

0x94ba,	// (0x0008e2d2) main_cset6_slider_pane_t8

0x94de,	// (0x0008e2f6) main_cset6_slider_pane_t9_ParamLimits

0x94de,	// (0x0008e2f6) main_cset6_slider_pane_t9

0x9502,	// (0x0008e31a) main_cset6_slider_pane_t10_ParamLimits

0x9502,	// (0x0008e31a) main_cset6_slider_pane_t10

0x9526,	// (0x0008e33e) main_cset6_slider_pane_t11_ParamLimits

0x9526,	// (0x0008e33e) main_cset6_slider_pane_t11

0xd852,	// (0x0009266a) main_cset6_slider_pane_t14_ParamLimits

0xd852,	// (0x0009266a) main_cset6_slider_pane_t14

0xd88b,	// (0x000926a3) main_cset6_slider_pane_t15_ParamLimits

0xd88b,	// (0x000926a3) main_cset6_slider_pane_t15

0x000b,

0xfb34,	// (0x0009494c) main_cset6_slider_pane_t_ParamLimits

0xfb34,	// (0x0009494c) main_cset6_slider_pane_t

0xd8c4,	// (0x000926dc) cset_slider_pane_g1_copy1

0xd8cd,	// (0x000926e5) cset_slider_pane_g2_copy1

0xd8d6,	// (0x000926ee) cset_slider_pane_g3_copy1

0x0749,	// (0x00085561) bg_popup_sub_pane_cp011_copy1

0xd8df,	// (0x000926f7) main_cset_text_pane_g1_copy1

0xd0dd,	// (0x00091ef5) main_cset_text_pane_t1_copy1

0xd0eb,	// (0x00091f03) main_cset_text_pane_t2_copy1

0xd0f9,	// (0x00091f11) main_cset_text_pane_t3_copy1

0xd107,	// (0x00091f1f) main_cset_text_pane_t4_copy1

0xd115,	// (0x00091f2d) main_cset_text_pane_t5_copy1

0xd8e7,	// (0x000926ff) main_cset_text_pane_t6_copy1

0xd8f5,	// (0x0009270d) main_cset_text_pane_t7_copy1

0x92cc,	// (0x0008e0e4) main_cset_text2_pane_t1_copy1

0xb595,	// (0x000903ad) main_ncimui_pane

0x6408,	// (0x0008b220) popup_query_ncimui_window_ParamLimits

0x6408,	// (0x0008b220) popup_query_ncimui_window

0xccf5,	// (0x00091b0d) field_cale_ev2_pane_g4_ParamLimits

0xccf5,	// (0x00091b0d) field_cale_ev2_pane_g4

0x763e,	// (0x0008c456) cell_video_dialer_keypad_pane_g2_ParamLimits

0x763e,	// (0x0008c456) cell_video_dialer_keypad_pane_g2

0x0001,

0xf818,	// (0x00094630) cell_video_dialer_keypad_pane_g_ParamLimits

0xf818,	// (0x00094630) cell_video_dialer_keypad_pane_g

0x7656,	// (0x0008c46e) cell_video_dialer_keypad_pane_t1

0x0749,	// (0x00085561) bg_popup_window_pane_cp012

0x1270,	// (0x00086088) heading_pane_cp06

0xd921,	// (0x00092739) ncim_query_content_pane

0x0749,	// (0x00085561) bg_popup_heading_pane_cp01

0xd929,	// (0x00092741) ncim_heading_pane_t1

0xd937,	// (0x0009274f) ncim_indicator_popup_pane

0xd949,	// (0x00092761) ncim_query_button_pane

0xd95d,	// (0x00092775) ncim_query_content_pane_t1

0xd96f,	// (0x00092787) ncim_query_content_pane_t2

0x0005,

0xfb78,	// (0x00094990) ncim_query_content_pane_t

0xd9a9,	// (0x000927c1) ncim_query_list_pane

0xd9bb,	// (0x000927d3) ncim_query_popup_pane

0xd937,	// (0x0009274f) ncim_indicator_popup_pane_ParamLimits

0x9690,	// (0x0008e4a8) ncim_query_content_pane_g1_ParamLimits

0x9690,	// (0x0008e4a8) ncim_query_content_pane_g1

0xd95d,	// (0x00092775) ncim_query_content_pane_t1_ParamLimits

0xd96f,	// (0x00092787) ncim_query_content_pane_t2_ParamLimits

0x969c,	// (0x0008e4b4) ncim_query_content_pane_t3_ParamLimits

0x969c,	// (0x0008e4b4) ncim_query_content_pane_t3

0x96c4,	// (0x0008e4dc) ncim_query_content_pane_t4_ParamLimits

0x96c4,	// (0x0008e4dc) ncim_query_content_pane_t4

0x96ec,	// (0x0008e504) ncim_query_content_pane_t5_ParamLimits

0x96ec,	// (0x0008e504) ncim_query_content_pane_t5

0xd981,	// (0x00092799) ncim_query_content_pane_t6_ParamLimits

0xd981,	// (0x00092799) ncim_query_content_pane_t6

0xfb78,	// (0x00094990) ncim_query_content_pane_t_ParamLimits

0xd9a9,	// (0x000927c1) ncim_query_list_pane_ParamLimits

0xd9bb,	// (0x000927d3) ncim_query_popup_pane_ParamLimits

0xd9cf,	// (0x000927e7) wait_bar_pane_cp04

0x0749,	// (0x00085561) input_focus_pane_cp011

0xd9d7,	// (0x000927ef) ncim_query_popup_pane_t1

0xd9e5,	// (0x000927fd) ncim_list_query_list_pane_ParamLimits

0xd9e5,	// (0x000927fd) ncim_list_query_list_pane

0x0749,	// (0x00085561) bg_button_pane_cp027

0xd9f2,	// (0x0009280a) ncim_query_button_pane_g1

0x0749,	// (0x00085561) list_highlight_pane_cp012

0xd9fc,	// (0x00092814) ncim_list_query_list_pane_g1

0xda04,	// (0x0009281c) ncim_list_query_list_pane_t1

0xeed5,	// (0x00093ced) cam4_indicators_pane_g3_ParamLimits

0xeed5,	// (0x00093ced) cam4_indicators_pane_g3

0xef55,	// (0x00093d6d) vid4_indicators_pane_g5_ParamLimits

0xef55,	// (0x00093d6d) vid4_indicators_pane_g5

0xf029,	// (0x00093e41) vid4_progress_pane_g5_ParamLimits

0xf029,	// (0x00093e41) vid4_progress_pane_g5

0x957b,	// (0x0008e393) main_ncimui_pane_g1

0x95e4,	// (0x0008e3fc) ncimui_group_query_pane_ParamLimits

0x95e4,	// (0x0008e3fc) ncimui_group_query_pane

0x962c,	// (0x0008e444) ncimui_list_pane_ParamLimits

0x962c,	// (0x0008e444) ncimui_list_pane

0x9653,	// (0x0008e46b) ncimui_text_pane_ParamLimits

0x9653,	// (0x0008e46b) ncimui_text_pane

0x9714,	// (0x0008e52c) ncimui_text_pane_t1_ParamLimits

0x9714,	// (0x0008e52c) ncimui_text_pane_t1

0xda12,	// (0x0009282a) ncimui_list_single_graphic_pane_ParamLimits

0xda12,	// (0x0009282a) ncimui_list_single_graphic_pane

0x9732,	// (0x0008e54a) ncimui_query_pane_ParamLimits

0x9732,	// (0x0008e54a) ncimui_query_pane

0x0749,	// (0x00085561) list_highlight_pane_cp013

0xda22,	// (0x0009283a) ncim_list_query_list_pane_t1_copy1

0xd9fc,	// (0x00092814) ncim_list_single_graphic_pane_g1

0x9745,	// (0x0008e55d) ncim_query_button_pane_cp01

0x9751,	// (0x0008e569) ncim_query_entry_pane_ParamLimits

0x9751,	// (0x0008e569) ncim_query_entry_pane

0x9764,	// (0x0008e57c) ncimui_query_pane_g1

0x9770,	// (0x0008e588) ncimui_query_pane_t1_ParamLimits

0x9770,	// (0x0008e588) ncimui_query_pane_t1

0x0de3,	// (0x00085bfb) input_focus_pane_cp012

0xda30,	// (0x00092848) ncim_query_entry_pane_t1

0x333d,	// (0x00088155) main_im_pane_ParamLimits

0xb595,	// (0x000903ad) main_mobtv_pane_ParamLimits

0xb595,	// (0x000903ad) main_mobtv_pane

0x93f6,	// (0x0008e20e) main_cset6_slider_pane_g18_ParamLimits

0x93f6,	// (0x0008e20e) main_cset6_slider_pane_g18

0x9402,	// (0x0008e21a) main_cset6_slider_pane_g19_ParamLimits

0x9402,	// (0x0008e21a) main_cset6_slider_pane_g19

0x3183,	// (0x00087f9b) bg_main_mobtv_pane_ParamLimits

0x3183,	// (0x00087f9b) bg_main_mobtv_pane

0x9789,	// (0x0008e5a1) main_mobtv_info_pane

0x9792,	// (0x0008e5aa) main_mobtv_loading_pane_ParamLimits

0x9792,	// (0x0008e5aa) main_mobtv_loading_pane

0xda42,	// (0x0009285a) main_mobtv_pg_channel_list_pane

0xda4c,	// (0x00092864) main_mobtv_pg_hdr_pane

0x979f,	// (0x0008e5b7) main_mobtv_programe_curr_pane_ParamLimits

0x979f,	// (0x0008e5b7) main_mobtv_programe_curr_pane

0x97ac,	// (0x0008e5c4) main_mobtv_programe_next_pane_ParamLimits

0x97ac,	// (0x0008e5c4) main_mobtv_programe_next_pane

0xda55,	// (0x0009286d) popup_mobtv_noti_window

0x3de5,	// (0x00088bfd) main_tv_pg_hdr_pane_g1

0xda5d,	// (0x00092875) main_tv_pg_hdr_pane_g2

0xda65,	// (0x0009287d) main_tv_pg_hdr_pane_g3

0xda6d,	// (0x00092885) main_tv_pg_hdr_pane_g4

0xda75,	// (0x0009288d) main_tv_pg_hdr_pane_g5

0xda7f,	// (0x00092897) main_tv_pg_hdr_pane_g6

0xda89,	// (0x000928a1) main_tv_pg_hdr_pane_g7

0xda93,	// (0x000928ab) main_tv_pg_hdr_pane_g8

0xda9d,	// (0x000928b5) main_tv_pg_hdr_pane_g9

0xdaa7,	// (0x000928bf) main_tv_pg_hdr_pane_g10

0xdab1,	// (0x000928c9) main_tv_pg_hdr_pane_g11

0x000a,

0xfb85,	// (0x0009499d) main_tv_pg_hdr_pane_g

0xdabb,	// (0x000928d3) main_tv_pg_hdr_pane_t1

0xdac9,	// (0x000928e1) main_tv_pg_hdr_pane_t2

0xdad7,	// (0x000928ef) main_tv_pg_hdr_pane_t3

0xdae7,	// (0x000928ff) main_tv_pg_hdr_pane_t4

0xdaf7,	// (0x0009290f) main_tv_pg_hdr_pane_t5

0x0004,

0xfb9c,	// (0x000949b4) main_tv_pg_hdr_pane_t

0xdb07,	// (0x0009291f) single_mobtv_pg_channel_pane_ParamLimits

0xdb07,	// (0x0009291f) single_mobtv_pg_channel_pane

0xdb19,	// (0x00092931) single_mobtv_pg_channel_table_pane

0xdb22,	// (0x0009293a) single_mobtv_pg_channel_thumb_pane

0xdb2b,	// (0x00092943) single_tv_pg_channel_pane_g1

0xdb34,	// (0x0009294c) single_tv_pg_channel_pane_g2

0x0001,

0xfba7,	// (0x000949bf) single_tv_pg_channel_pane_g

0x3167,	// (0x00087f7f) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x3167,	// (0x00087f7f) bg_single_mobtv_pg_channel_thumb_pane

0xdb3d,	// (0x00092955) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdb3d,	// (0x00092955) single_mobtv_pg_channel_thumb_pane_g1

0xdb4b,	// (0x00092963) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdb4b,	// (0x00092963) single_mobtv_pg_channel_thumb_pane_g2

0xdb57,	// (0x0009296f) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdb57,	// (0x0009296f) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbac,	// (0x000949c4) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbac,	// (0x000949c4) single_mobtv_pg_channel_thumb_pane_g

0xdb63,	// (0x0009297b) single_mobtv_pg_channel_thumb_pane_t1

0xdb71,	// (0x00092989) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbb3,	// (0x000949cb) single_mobtv_pg_channel_thumb_pane_t

0x3de5,	// (0x00088bfd) bg_single_mobtv_pg_channel_table_pane_g1

0x3de5,	// (0x00088bfd) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3d8,	// (0x000941f0) bg_single_mobtv_pg_channel_table_pane_g

0xdb7f,	// (0x00092997) single_mobtv_pg_channel_table_pane_t1

0xdb8d,	// (0x000929a5) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbb8,	// (0x000949d0) single_mobtv_pg_channel_table_pane_t

0x97c1,	// (0x0008e5d9) main_mobtv_info_pane_g1_ParamLimits

0x97c1,	// (0x0008e5d9) main_mobtv_info_pane_g1

0x97df,	// (0x0008e5f7) main_mobtv_info_pane_t1_ParamLimits

0x97df,	// (0x0008e5f7) main_mobtv_info_pane_t1

0x9857,	// (0x0008e66f) main_mobtv_info_pane_t2_ParamLimits

0x9857,	// (0x0008e66f) main_mobtv_info_pane_t2

0x0002,

0xfbc2,	// (0x000949da) main_mobtv_info_pane_t_ParamLimits

0xfbc2,	// (0x000949da) main_mobtv_info_pane_t

0x98e6,	// (0x0008e6fe) wait_bar_pane_cp05

0x98f8,	// (0x0008e710) main_mobtv_loading_pane_g1_ParamLimits

0x98f8,	// (0x0008e710) main_mobtv_loading_pane_g1

0x990b,	// (0x0008e723) main_mobtv_loading_pane_g2_ParamLimits

0x990b,	// (0x0008e723) main_mobtv_loading_pane_g2

0x9917,	// (0x0008e72f) main_mobtv_loading_pane_g3_ParamLimits

0x9917,	// (0x0008e72f) main_mobtv_loading_pane_g3

0x0002,

0xfbc9,	// (0x000949e1) main_mobtv_loading_pane_g_ParamLimits

0xfbc9,	// (0x000949e1) main_mobtv_loading_pane_g

0xdb9b,	// (0x000929b3) main_mobtv_loading_pane_t1_ParamLimits

0xdb9b,	// (0x000929b3) main_mobtv_loading_pane_t1

0xdbb3,	// (0x000929cb) main_mobtv_loading_pane_t2_ParamLimits

0xdbb3,	// (0x000929cb) main_mobtv_loading_pane_t2

0x0001,

0xfbd0,	// (0x000949e8) main_mobtv_loading_pane_t_ParamLimits

0xfbd0,	// (0x000949e8) main_mobtv_loading_pane_t

0x992a,	// (0x0008e742) wait_bar_pane_cp06_ParamLimits

0x992a,	// (0x0008e742) wait_bar_pane_cp06

0xdbd7,	// (0x000929ef) main_mobtv_programe_curr_pane_t1

0xdbe5,	// (0x000929fd) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbd5,	// (0x000949ed) main_mobtv_programe_curr_pane_t

0xdbf3,	// (0x00092a0b) main_mobtv_programe_next_pane_t1

0xdc01,	// (0x00092a19) main_mobtv_programe_next_pane_t2

0xdc0f,	// (0x00092a27) main_mobtv_programe_next_pane_t3

0x0002,

0xfbda,	// (0x000949f2) main_mobtv_programe_next_pane_t

0x0749,	// (0x00085561) bg_popup_mobtv_noti_window_pane

0xdc1d,	// (0x00092a35) popup_mobtv_noti_window_g1

0xdc25,	// (0x00092a3d) popup_mobtv_noti_window_t1

0xdc33,	// (0x00092a4b) popup_mobtv_noti_window_t2

0x0001,

0xfbe1,	// (0x000949f9) popup_mobtv_noti_window_t

0x3de5,	// (0x00088bfd) bg_popup_mobtv_noti_window_pane_g1

0xb5a3,	// (0x000903bb) sc_clock_pane

0xb5a3,	// (0x000903bb) main_fs_bigclock_pane

0x9005,	// (0x0008de1d) blid2_tripm_pane_t4_ParamLimits

0x9005,	// (0x0008de1d) blid2_tripm_pane_t4

0x9939,	// (0x0008e751) sc_clock_pane_g1_ParamLimits

0x9939,	// (0x0008e751) sc_clock_pane_g1

0x994b,	// (0x0008e763) sc_clock_pane_t1_ParamLimits

0x994b,	// (0x0008e763) sc_clock_pane_t1

0x996d,	// (0x0008e785) sc_clock_pane_t2_ParamLimits

0x996d,	// (0x0008e785) sc_clock_pane_t2

0x9985,	// (0x0008e79d) sc_clock_pane_t3_ParamLimits

0x9985,	// (0x0008e79d) sc_clock_pane_t3

0x0004,

0xfbe6,	// (0x000949fe) sc_clock_pane_t_ParamLimits

0xfbe6,	// (0x000949fe) sc_clock_pane_t

0xa669,	// (0x0008f481) main_fs_bigclock_indicator_pane_ParamLimits

0xa669,	// (0x0008f481) main_fs_bigclock_indicator_pane

0x9a2b,	// (0x0008e843) main_fs_bigclock_pane_g1_ParamLimits

0x9a2b,	// (0x0008e843) main_fs_bigclock_pane_g1

0xa675,	// (0x0008f48d) main_fs_bigclock_pane_t1_ParamLimits

0xa675,	// (0x0008f48d) main_fs_bigclock_pane_t1

0xa687,	// (0x0008f49f) main_fs_bigclock_pane_t2_ParamLimits

0xa687,	// (0x0008f49f) main_fs_bigclock_pane_t2

0xa69b,	// (0x0008f4b3) main_fs_bigclock_pane_t3_ParamLimits

0xa69b,	// (0x0008f4b3) main_fs_bigclock_pane_t3

0x0002,

0xfd77,	// (0x00094b8f) main_fs_bigclock_pane_t_ParamLimits

0xfd77,	// (0x00094b8f) main_fs_bigclock_pane_t

0xe808,	// (0x00093620) main_fs_bigclock_indicator_pane_g1

0xd951,	// (0x00092769) ncim_query_content_pane_g2_ParamLimits

0xd951,	// (0x00092769) ncim_query_content_pane_g2

0x0001,

0xfb73,	// (0x0009498b) ncim_query_content_pane_g_ParamLimits

0xfb73,	// (0x0009498b) ncim_query_content_pane_g

0x999e,	// (0x0008e7b6) sc_clock_pane_t4_ParamLimits

0x999e,	// (0x0008e7b6) sc_clock_pane_t4

0xb595,	// (0x000903ad) main_radioblah_pane

0xee47,	// (0x00093c5f) cell_call4_button_pane_t1_copy1_ParamLimits

0xee47,	// (0x00093c5f) cell_call4_button_pane_t1_copy1

0x9593,	// (0x0008e3ab) main_ncimui_pane_t1_ParamLimits

0x9593,	// (0x0008e3ab) main_ncimui_pane_t1

0x95ad,	// (0x0008e3c5) main_ncimui_pane_t2_ParamLimits

0x95ad,	// (0x0008e3c5) main_ncimui_pane_t2

0x0002,

0xfb6c,	// (0x00094984) main_ncimui_pane_t_ParamLimits

0xfb6c,	// (0x00094984) main_ncimui_pane_t

0xdd78,	// (0x00092b90) main_radioblah_anim_pane_ParamLimits

0xdd78,	// (0x00092b90) main_radioblah_anim_pane

0xdd89,	// (0x00092ba1) main_radioblah_info_pane_ParamLimits

0xdd89,	// (0x00092ba1) main_radioblah_info_pane

0xdd9d,	// (0x00092bb5) main_radioblah_pane_t1_ParamLimits

0xdd9d,	// (0x00092bb5) main_radioblah_pane_t1

0xddb9,	// (0x00092bd1) main_radioblah_pane_t2_ParamLimits

0xddb9,	// (0x00092bd1) main_radioblah_pane_t2

0x0003,

0xfc07,	// (0x00094a1f) main_radioblah_pane_t_ParamLimits

0xfc07,	// (0x00094a1f) main_radioblah_pane_t

0x9a8a,	// (0x0008e8a2) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9a8a,	// (0x0008e8a2) main_radioblah_rocker_ctrl_pane

0xde01,	// (0x00092c19) main_radioblah_info_pane_t1_ParamLimits

0xde01,	// (0x00092c19) main_radioblah_info_pane_t1

0x9ae2,	// (0x0008e8fa) main_radioblah_info_pane_t2_ParamLimits

0x9ae2,	// (0x0008e8fa) main_radioblah_info_pane_t2

0x0003,

0xfc10,	// (0x00094a28) main_radioblah_info_pane_t_ParamLimits

0xfc10,	// (0x00094a28) main_radioblah_info_pane_t

0x3de5,	// (0x00088bfd) main_radioblah_rocker_ctrl_pane_g1

0x9b92,	// (0x0008e9aa) main_radioblah_rocker_ctrl_pane_g2

0x9b9a,	// (0x0008e9b2) main_radioblah_rocker_ctrl_pane_g3

0x9ba2,	// (0x0008e9ba) main_radioblah_rocker_ctrl_pane_g4

0x9baa,	// (0x0008e9c2) main_radioblah_rocker_ctrl_pane_g5

0x9bb2,	// (0x0008e9ca) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc19,	// (0x00094a31) main_radioblah_rocker_ctrl_pane_g

0x92cc,	// (0x0008e0e4) main_cset_text2_pane_t1_copy1_ParamLimits

0xeea5,	// (0x00093cbd) cam4_image_uncrop_qvga_pane

0xeefe,	// (0x00093d16) vid4_image_uncrop_qcif_pane

0xf05f,	// (0x00093e77) cam6_image_uncrop_qvga_pane_ParamLimits

0xf05f,	// (0x00093e77) cam6_image_uncrop_qvga_pane

0xd63d,	// (0x00092455) vid6_image_uncrop_qcif_pane_ParamLimits

0xd63d,	// (0x00092455) vid6_image_uncrop_qcif_pane

0x0749,	// (0x00085561) bg_popup_preview_window_pane_cp03

0xd903,	// (0x0009271b) list_cset_text2_pane

0xd90b,	// (0x00092723) main_cset6_text2_pane_g1

0xd913,	// (0x0009272b) main_cset6_text2_pane_t1

0x9bba,	// (0x0008e9d2) list_cset_text2_pane_t1_ParamLimits

0x9bba,	// (0x0008e9d2) list_cset_text2_pane_t1

0xb595,	// (0x000903ad) main_radioblah_pane_ParamLimits

0x98d2,	// (0x0008e6ea) main_mobtv_info_pane_t3_ParamLimits

0x98d2,	// (0x0008e6ea) main_mobtv_info_pane_t3

0x9a78,	// (0x0008e890) main_radioblah_pane_g1

0x9ab2,	// (0x0008e8ca) main_radioblah_info_pane_g1

0x9b37,	// (0x0008e94f) main_radioblah_info_pane_t3_ParamLimits

0x9b37,	// (0x0008e94f) main_radioblah_info_pane_t3

0x5067,	// (0x00089e7f) highlight_cell_cale_month_pane_ParamLimits

0x5067,	// (0x00089e7f) highlight_cell_cale_month_pane

0xb5a3,	// (0x000903bb) main_phob_fisheye_pane

0x1a50,	// (0x00086868) scroll_pane_cp0031_ParamLimits

0x1a50,	// (0x00086868) scroll_pane_cp0031

0xd74b,	// (0x00092563) wait_bar_pane_cp08_ParamLimits

0x9351,	// (0x0008e169) cset_list_set_pane_copy1_ParamLimits

0xde3b,	// (0x00092c53) highlight_cell_cale_month_pane_g1

0x9bd3,	// (0x0008e9eb) highlight_cell_cale_month_pane_t1

0xd3a5,	// (0x000921bd) list_gen_pane_cp01

0xcf4a,	// (0x00091d62) scroll_pane_01

0x9be1,	// (0x0008e9f9) list_single_double_fisheye_pane

0x9bea,	// (0x0008ea02) list_double_fisheye_pane_g1_ParamLimits

0x9bea,	// (0x0008ea02) list_double_fisheye_pane_g1

0x9bf6,	// (0x0008ea0e) list_double_fisheye_pane_g2_ParamLimits

0x9bf6,	// (0x0008ea0e) list_double_fisheye_pane_g2

0x9c0a,	// (0x0008ea22) list_double_fisheye_pane_g3_ParamLimits

0x9c0a,	// (0x0008ea22) list_double_fisheye_pane_g3

0x0004,

0xfc26,	// (0x00094a3e) list_double_fisheye_pane_g_ParamLimits

0xfc26,	// (0x00094a3e) list_double_fisheye_pane_g

0x9c33,	// (0x0008ea4b) list_double_fisheye_pane_t1_ParamLimits

0x9c33,	// (0x0008ea4b) list_double_fisheye_pane_t1

0x9c4e,	// (0x0008ea66) list_double_fisheye_pane_t2_ParamLimits

0x9c4e,	// (0x0008ea66) list_double_fisheye_pane_t2

0x0001,

0xfc31,	// (0x00094a49) list_double_fisheye_pane_t_ParamLimits

0xfc31,	// (0x00094a49) list_double_fisheye_pane_t

0xb5a3,	// (0x000903bb) main_call5_pane

0x99c9,	// (0x0008e7e1) sc_swipe_pane_ParamLimits

0x99c9,	// (0x0008e7e1) sc_swipe_pane

0x9c83,	// (0x0008ea9b) call5_image_pane_ParamLimits

0x9c83,	// (0x0008ea9b) call5_image_pane

0x9ca0,	// (0x0008eab8) call5_swipe_1_pane_ParamLimits

0x9ca0,	// (0x0008eab8) call5_swipe_1_pane

0x9cb3,	// (0x0008eacb) call5_swipe_2_pane_ParamLimits

0x9cb3,	// (0x0008eacb) call5_swipe_2_pane

0x9cde,	// (0x0008eaf6) popup_call5_audio_first_window_ParamLimits

0x9cde,	// (0x0008eaf6) popup_call5_audio_first_window

0x3167,	// (0x00087f7f) call5_swipe_1_pane_g1_ParamLimits

0x3167,	// (0x00087f7f) call5_swipe_1_pane_g1

0xde43,	// (0x00092c5b) call5_swipe_1_pane_g2_ParamLimits

0xde43,	// (0x00092c5b) call5_swipe_1_pane_g2

0x0001,

0xfc36,	// (0x00094a4e) call5_swipe_1_pane_g_ParamLimits

0xfc36,	// (0x00094a4e) call5_swipe_1_pane_g

0xde4f,	// (0x00092c67) call5_swipe_1_pane_t1_ParamLimits

0xde4f,	// (0x00092c67) call5_swipe_1_pane_t1

0x3167,	// (0x00087f7f) call5_swipe_2_pane_g1_ParamLimits

0x3167,	// (0x00087f7f) call5_swipe_2_pane_g1

0xde64,	// (0x00092c7c) call5_swipe_2_pane_g2_ParamLimits

0xde64,	// (0x00092c7c) call5_swipe_2_pane_g2

0x0001,

0xfc3b,	// (0x00094a53) call5_swipe_2_pane_g_ParamLimits

0xfc3b,	// (0x00094a53) call5_swipe_2_pane_g

0xde70,	// (0x00092c88) call5_swipe_2_pane_t1_ParamLimits

0xde70,	// (0x00092c88) call5_swipe_2_pane_t1

0xde85,	// (0x00092c9d) sc_swipe_pane_g1_ParamLimits

0xde85,	// (0x00092c9d) sc_swipe_pane_g1

0xde92,	// (0x00092caa) sc_swipe_pane_g2_ParamLimits

0xde92,	// (0x00092caa) sc_swipe_pane_g2

0x0001,

0xfc40,	// (0x00094a58) sc_swipe_pane_g_ParamLimits

0xfc40,	// (0x00094a58) sc_swipe_pane_g

0xde9e,	// (0x00092cb6) sc_swipe_pane_t1_ParamLimits

0xde9e,	// (0x00092cb6) sc_swipe_pane_t1

0xb5a3,	// (0x000903bb) main_cmail_launcher_pane

0x9cef,	// (0x0008eb07) aid_size_cell_cmail_l_ParamLimits

0x9cef,	// (0x0008eb07) aid_size_cell_cmail_l

0x9cfd,	// (0x0008eb15) grid_cmail_l_pane_ParamLimits

0x9cfd,	// (0x0008eb15) grid_cmail_l_pane

0x9d17,	// (0x0008eb2f) cell_cmail_l_pane_ParamLimits

0x9d17,	// (0x0008eb2f) cell_cmail_l_pane

0xdeb3,	// (0x00092ccb) cell_cmail_l_pane_g1_ParamLimits

0xdeb3,	// (0x00092ccb) cell_cmail_l_pane_g1

0xdebf,	// (0x00092cd7) cell_cmail_l_pane_t1_ParamLimits

0xdebf,	// (0x00092cd7) cell_cmail_l_pane_t1

0xded5,	// (0x00092ced) cell_cmail_l_pane_t2_ParamLimits

0xded5,	// (0x00092ced) cell_cmail_l_pane_t2

0x0001,

0xfc45,	// (0x00094a5d) cell_cmail_l_pane_t_ParamLimits

0xfc45,	// (0x00094a5d) cell_cmail_l_pane_t

0x0de3,	// (0x00085bfb) grid_highlight_pane_cp018_ParamLimits

0x0de3,	// (0x00085bfb) grid_highlight_pane_cp018

0x2f56,	// (0x00087d6e) main2_pane_ParamLimits

0x2f56,	// (0x00087d6e) main2_pane

0x355b,	// (0x00088373) popup_sp_fs_action_menu_bg_pane_g1

0x3563,	// (0x0008837b) popup_sp_fs_action_menu_bg_pane_g2

0x356b,	// (0x00088383) popup_sp_fs_action_menu_bg_pane_g3

0x3573,	// (0x0008838b) popup_sp_fs_action_menu_bg_pane_g4

0x357b,	// (0x00088393) popup_sp_fs_action_menu_bg_pane_g5

0x3583,	// (0x0008839b) popup_sp_fs_action_menu_bg_pane_g6

0x358b,	// (0x000883a3) popup_sp_fs_action_menu_bg_pane_g7

0x3593,	// (0x000883ab) popup_sp_fs_action_menu_bg_pane_g8

0x359b,	// (0x000883b3) popup_sp_fs_action_menu_bg_pane_g9

0x35a3,	// (0x000883bb) popup_sp_fs_action_menu_bg_pane_g10

0x35a3,	// (0x000883bb) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x00093f5d) popup_sp_fs_action_menu_bg_pane_g

0x3167,	// (0x00087f7f) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x2_t3_g3_g1

0x3167,	// (0x00087f7f) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x2_t3_g3_g2

0x3167,	// (0x00087f7f) list_medium_line_x2_t3_g3_g3_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x0009400b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x0009400b) list_medium_line_x2_t3_g3_g

0x3c61,	// (0x00088a79) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_x2_t3_g3_t1

0x3c61,	// (0x00088a79) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_x2_t3_g3_t2

0x3c61,	// (0x00088a79) list_medium_line_x2_t3_g3_t3_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x00094012) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x00094012) list_medium_line_x2_t3_g3_t

0x3167,	// (0x00087f7f) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x2_t3_g2_g1

0x3167,	// (0x00087f7f) list_medium_line_x2_t3_g2_g2_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x00094019) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x00094019) list_medium_line_x2_t3_g2_g

0x3c61,	// (0x00088a79) list_medium_line_x2_t3_g2_t1_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_x2_t3_g2_t1

0x3c61,	// (0x00088a79) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_x2_t3_g2_t2

0x3c61,	// (0x00088a79) list_medium_line_x2_t3_g2_t3_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x00094012) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x00094012) list_medium_line_x2_t3_g2_t

0x3167,	// (0x00087f7f) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x2_t4_g4_g1

0x3167,	// (0x00087f7f) list_medium_line_x2_t4_g4_g2_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x2_t4_g4_g2

0x3167,	// (0x00087f7f) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x2_t4_g4_g3

0x3167,	// (0x00087f7f) list_medium_line_x2_t4_g4_g4_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x0009401e) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x0009401e) list_medium_line_x2_t4_g4_g

0x3c61,	// (0x00088a79) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_x2_t4_g4_t1

0x3c61,	// (0x00088a79) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_x2_t4_g4_t2

0x3c61,	// (0x00088a79) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_x2_t4_g4_t3

0x3c61,	// (0x00088a79) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x00094027) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x00094027) list_medium_line_x2_t4_g4_t

0x3167,	// (0x00087f7f) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x2_t2_g4_g1

0x3167,	// (0x00087f7f) list_medium_line_x2_t2_g4_g2_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x2_t2_g4_g2

0x3167,	// (0x00087f7f) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x2_t2_g4_g3

0x3167,	// (0x00087f7f) list_medium_line_x2_t2_g4_g4_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x0009401e) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x0009401e) list_medium_line_x2_t2_g4_g

0x3c61,	// (0x00088a79) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_x2_t2_g4_t1

0x3c61,	// (0x00088a79) list_medium_line_x2_t2_g4_t2_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1d6,	// (0x00093fee) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1d6,	// (0x00093fee) list_medium_line_x2_t2_g4_t

0x3167,	// (0x00087f7f) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x2_t2_g3_g1

0x3167,	// (0x00087f7f) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x2_t2_g3_g2

0x3167,	// (0x00087f7f) list_medium_line_x2_t2_g3_g3_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x0009400b) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x0009400b) list_medium_line_x2_t2_g3_g

0x3c61,	// (0x00088a79) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_x2_t2_g3_t1

0x3c61,	// (0x00088a79) list_medium_line_x2_t2_g3_t2_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1d6,	// (0x00093fee) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1d6,	// (0x00093fee) list_medium_line_x2_t2_g3_t

0x5258,	// (0x0008a070) main_sp_fs_list_pane_ParamLimits

0x5258,	// (0x0008a070) main_sp_fs_list_pane

0x1f47,	// (0x00086d5f) sp_fs_scroll_pane_ParamLimits

0x1f47,	// (0x00086d5f) sp_fs_scroll_pane

0xb807,	// (0x0009061f) list_medium_line_x2_t3_t1

0xb807,	// (0x0009061f) list_medium_line_x2_t3_t2

0xb807,	// (0x0009061f) list_medium_line_x2_t3_t3

0x0002,

0xf2bc,	// (0x000940d4) list_medium_line_x2_t3_t

0xb807,	// (0x0009061f) list_medium_line_x3_t4_t1

0xb807,	// (0x0009061f) list_medium_line_x3_t4_t2

0xb807,	// (0x0009061f) list_medium_line_x3_t4_t3

0xb807,	// (0x0009061f) list_medium_line_x3_t4_t4

0x0003,

0xf2c3,	// (0x000940db) list_medium_line_x3_t4_t

0xb807,	// (0x0009061f) list_medium_line_x4_t5_t1

0xb807,	// (0x0009061f) list_medium_line_x4_t5_t2

0xb807,	// (0x0009061f) list_medium_line_x4_t5_t3

0xb807,	// (0x0009061f) list_medium_line_x4_t5_t4

0xb807,	// (0x0009061f) list_medium_line_x4_t5_t5

0x0004,

0xf2cc,	// (0x000940e4) list_medium_line_x4_t5_t

0x3167,	// (0x00087f7f) list_medium_line_t4_g4_g1_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_t4_g4_g1

0x3167,	// (0x00087f7f) list_medium_line_t4_g4_g2_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_t4_g4_g2

0x3167,	// (0x00087f7f) list_medium_line_t4_g4_g3_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_t4_g4_g3

0x3167,	// (0x00087f7f) list_medium_line_t4_g4_g4_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x0009401e) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x0009401e) list_medium_line_t4_g4_g

0x3c61,	// (0x00088a79) list_medium_line_t4_g4_t1_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_t4_g4_t1

0x3c61,	// (0x00088a79) list_medium_line_t4_g4_t2_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_t4_g4_t2

0x3c61,	// (0x00088a79) list_medium_line_t4_g4_t3_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_t4_g4_t3

0x3c61,	// (0x00088a79) list_medium_line_t4_g4_t4_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x00094027) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x00094027) list_medium_line_t4_g4_t

0x52f3,	// (0x0008a10b) chi_dic_find_pane_g1

0x61d2,	// (0x0008afea) main_tport_pane

0xb807,	// (0x0009061f) list_medium_line_plain_t1

0x3167,	// (0x00087f7f) list_medium_line_t2_g2_g1_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_t2_g2_g1

0x3167,	// (0x00087f7f) list_medium_line_t2_g2_g2_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x00094019) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x00094019) list_medium_line_t2_g2_g

0x3c61,	// (0x00088a79) list_medium_line_t2_g2_t1_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_t2_g2_t1

0x3c61,	// (0x00088a79) list_medium_line_t2_g2_t2_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_t2_g2_t2

0x0001,

0xf1d6,	// (0x00093fee) list_medium_line_t2_g2_t_ParamLimits

0xf1d6,	// (0x00093fee) list_medium_line_t2_g2_t

0xd3ae,	// (0x000921c6) aid_sp_fs_list_icon_a_sm

0xd3b6,	// (0x000921ce) aid_sp_fs_list_icon_d

0xd3be,	// (0x000921d6) aid_sp_fs_text_primary

0xd3c7,	// (0x000921df) aid_sp_fs_text_secondary

0x0749,	// (0x00085561) list_medium_line

0x0749,	// (0x00085561) list_medium_line_g2

0x0749,	// (0x00085561) list_medium_line_g3

0x0749,	// (0x00085561) list_medium_line_plain

0x0749,	// (0x00085561) list_medium_line_plain_t2

0x0749,	// (0x00085561) list_medium_line_plain_t3

0x0749,	// (0x00085561) list_medium_line_right_icon

0x0749,	// (0x00085561) list_medium_line_right_iconx2

0x0749,	// (0x00085561) list_medium_line_t2

0x0749,	// (0x00085561) list_medium_line_t2_g2

0x0749,	// (0x00085561) list_medium_line_t2_g3

0x0749,	// (0x00085561) list_medium_line_t2_right_icon

0x0749,	// (0x00085561) list_medium_line_t2_right_iconx2

0x0749,	// (0x00085561) list_medium_line_t3

0x0749,	// (0x00085561) list_medium_line_t3_g2

0x0749,	// (0x00085561) list_medium_line_t3_g3

0x0749,	// (0x00085561) list_medium_line_t3_right_iconx2

0x0749,	// (0x00085561) list_medium_line_t4_g4

0x0749,	// (0x00085561) list_medium_line_x2

0x0749,	// (0x00085561) list_medium_line_x2_t2_g2

0x0749,	// (0x00085561) list_medium_line_x2_t2_g3

0x0749,	// (0x00085561) list_medium_line_x2_t2_g4

0x0749,	// (0x00085561) list_medium_line_x2_t3

0x0749,	// (0x00085561) list_medium_line_x2_t3_g2

0x0749,	// (0x00085561) list_medium_line_x2_t3_g3

0x0749,	// (0x00085561) list_medium_line_x2_t3_g4

0x0749,	// (0x00085561) list_medium_line_x2_t4_g2

0x0749,	// (0x00085561) list_medium_line_x2_t4_g4

0x0749,	// (0x00085561) list_medium_line_x3

0x0749,	// (0x00085561) list_medium_line_x3_t4

0x0749,	// (0x00085561) list_medium_line_x3_t4_g4

0x0749,	// (0x00085561) list_medium_line_x4_t4

0x0749,	// (0x00085561) list_medium_line_x4_t4_g7

0x0749,	// (0x00085561) list_medium_line_x4_t5

0x8df5,	// (0x0008dc0d) list_single_fs_dyc_pane_ParamLimits

0x8df5,	// (0x0008dc0d) list_single_fs_dyc_pane

0x3167,	// (0x00087f7f) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x4_t4_g7_g1

0x3167,	// (0x00087f7f) list_medium_line_x4_t4_g7_g2_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x4_t4_g7_g2

0x3167,	// (0x00087f7f) list_medium_line_x4_t4_g7_g3_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x4_t4_g7_g3

0x3167,	// (0x00087f7f) list_medium_line_x4_t4_g7_g4_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x4_t4_g7_g4

0x3167,	// (0x00087f7f) list_medium_line_x4_t4_g7_g5_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x4_t4_g7_g5

0x3167,	// (0x00087f7f) list_medium_line_x4_t4_g7_g6_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x4_t4_g7_g6

0x3175,	// (0x00087f8d) list_medium_line_x4_t4_g7_g7_ParamLimits

0x3175,	// (0x00087f8d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb4d,	// (0x00094965) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb4d,	// (0x00094965) list_medium_line_x4_t4_g7_g

0x3c61,	// (0x00088a79) list_medium_line_x4_t4_g7_t1_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_x4_t4_g7_t1

0x3c61,	// (0x00088a79) list_medium_line_x4_t4_g7_t2_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_x4_t4_g7_t2

0x3c61,	// (0x00088a79) list_medium_line_x4_t4_g7_t3_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_x4_t4_g7_t3

0xbe32,	// (0x00090c4a) list_medium_line_x4_t4_g7_t4_ParamLimits

0xbe32,	// (0x00090c4a) list_medium_line_x4_t4_g7_t4

0xbe32,	// (0x00090c4a) list_medium_line_x4_t4_g7_t5_ParamLimits

0xbe32,	// (0x00090c4a) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb5c,	// (0x00094974) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb5c,	// (0x00094974) list_medium_line_x4_t4_g7_t

0x954a,	// (0x0008e362) list_single_dyc_row_pane_ParamLimits

0x954a,	// (0x0008e362) list_single_dyc_row_pane

0x9c70,	// (0x0008ea88) call5_gesture_pane_ParamLimits

0x9c70,	// (0x0008ea88) call5_gesture_pane

0x9cc6,	// (0x0008eade) call5_windows_pane_ParamLimits

0x9cc6,	// (0x0008eade) call5_windows_pane

0x9d31,	// (0x0008eb49) call5_swipe_1_pane_cp_ParamLimits

0x9d31,	// (0x0008eb49) call5_swipe_1_pane_cp

0x9d3d,	// (0x0008eb55) call5_swipe_2_pane_cp_ParamLimits

0x9d3d,	// (0x0008eb55) call5_swipe_2_pane_cp

0x3bf8,	// (0x00088a10) call5_image_pane_cp

0x9d49,	// (0x0008eb61) popup_call5_audio_first_window_cp_ParamLimits

0x9d49,	// (0x0008eb61) popup_call5_audio_first_window_cp

0xde85,	// (0x00092c9d) call5_swipe_1_pane_g1_cp_ParamLimits

0xde85,	// (0x00092c9d) call5_swipe_1_pane_g1_cp

0xdef2,	// (0x00092d0a) call5_swipe_1_pane_g2_cp

0xde9e,	// (0x00092cb6) call5_swipe_1_pane_t1_cp_ParamLimits

0xde9e,	// (0x00092cb6) call5_swipe_1_pane_t1_cp

0xde85,	// (0x00092c9d) call5_swipe_2_pane_g1_cp_ParamLimits

0xde85,	// (0x00092c9d) call5_swipe_2_pane_g1_cp

0xdefa,	// (0x00092d12) call5_swipe_2_pane_g2_cp

0xdf02,	// (0x00092d1a) call5_swipe_2_pane_t1_cp_ParamLimits

0xdf02,	// (0x00092d1a) call5_swipe_2_pane_t1_cp

0x0de3,	// (0x00085bfb) main_sp_fs_email_pane

0xdf17,	// (0x00092d2f) main_sp_fs_listscroll_pane_te

0xdf20,	// (0x00092d38) popup_sp_fs_action_menu_pane_ParamLimits

0xdf20,	// (0x00092d38) popup_sp_fs_action_menu_pane

0x3de5,	// (0x00088bfd) bg_sp_fs_ctrlbar_pane_g1

0xdf64,	// (0x00092d7c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xdf6d,	// (0x00092d85) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xdf76,	// (0x00092d8e) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x3de5,	// (0x00088bfd) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc4a,	// (0x00094a62) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcce7,	// (0x00091aff) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcce7,	// (0x00091aff) bg_sp_fs_ctrlbar_ddmenu_pane

0xdf7f,	// (0x00092d97) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xdf7f,	// (0x00092d97) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xdf8b,	// (0x00092da3) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xdf8b,	// (0x00092da3) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc53,	// (0x00094a6b) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc53,	// (0x00094a6b) main_sp_fs_ctrlbar_ddmenu_pane_g

0xdf97,	// (0x00092daf) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xdf97,	// (0x00092daf) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x3de5,	// (0x00088bfd) list_medium_line_t2_right_icon_g1

0xb807,	// (0x0009061f) list_medium_line_t2_right_icon_t1

0xb807,	// (0x0009061f) list_medium_line_t2_right_icon_t2

0x0001,

0xfc58,	// (0x00094a70) list_medium_line_t2_right_icon_t

0x1314,	// (0x0008612c) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1314,	// (0x0008612c) bg_sp_fs_ctrlbar_pane

0x9d9f,	// (0x0008ebb7) main_sp_fs_ctrlbar_button_pane_cp01

0x9da9,	// (0x0008ebc1) main_sp_fs_ctrlbar_ddmenu_pane

0xdfe9,	// (0x00092e01) main_sp_fs_ctrlbar_pane_g1

0xdff5,	// (0x00092e0d) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc5d,	// (0x00094a75) main_sp_fs_ctrlbar_pane_g

0x9de7,	// (0x0008ebff) main_sp_fs_ctrlbar_pane_t1

0x9e26,	// (0x0008ec3e) main_sp_fs_ctrlbar_pane

0x9e4a,	// (0x0008ec62) main_sp_fs_listscroll_pane_te_cp01

0x9e6a,	// (0x0008ec82) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9e6a,	// (0x0008ec82) popup_sp_fs_action_menu_pane_cp01

0x0de3,	// (0x00085bfb) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0de3,	// (0x00085bfb) bg_sp_fs_highlight_list_pane_cp01

0xe01c,	// (0x00092e34) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe01c,	// (0x00092e34) sp_fs_action_menu_list_gene_pane_g1

0xe02b,	// (0x00092e43) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe02b,	// (0x00092e43) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc6b,	// (0x00094a83) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc6b,	// (0x00094a83) sp_fs_action_menu_list_gene_pane_g

0xe038,	// (0x00092e50) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe038,	// (0x00092e50) sp_fs_action_menu_list_gene_pane_t1

0xe050,	// (0x00092e68) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe050,	// (0x00092e68) sp_fs_action_menu_list_gene_pane

0xe071,	// (0x00092e89) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe071,	// (0x00092e89) popup_sp_fs_action_menu_bg_pane

0xe07f,	// (0x00092e97) sp_fs_action_menu_list_pane_ParamLimits

0xe07f,	// (0x00092e97) sp_fs_action_menu_list_pane

0xe0a1,	// (0x00092eb9) sp_fs_scroll_pane_cp01_ParamLimits

0xe0a1,	// (0x00092eb9) sp_fs_scroll_pane_cp01

0xb807,	// (0x0009061f) list_medium_line_plain_t2_t1

0xb807,	// (0x0009061f) list_medium_line_plain_t2_t2

0x0001,

0xfc58,	// (0x00094a70) list_medium_line_plain_t2_t

0xb807,	// (0x0009061f) list_medium_line_plain_t3_t1

0xb807,	// (0x0009061f) list_medium_line_plain_t3_t2

0xb807,	// (0x0009061f) list_medium_line_plain_t3_t3

0x0002,

0xf2bc,	// (0x000940d4) list_medium_line_plain_t3_t

0x3167,	// (0x00087f7f) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x2_t2_g2_g1

0x3167,	// (0x00087f7f) list_medium_line_x2_t2_g2_g2_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x00094019) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x00094019) list_medium_line_x2_t2_g2_g

0x3c61,	// (0x00088a79) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_x2_t2_g2_t1

0x3c61,	// (0x00088a79) list_medium_line_x2_t2_g2_t2_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1d6,	// (0x00093fee) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1d6,	// (0x00093fee) list_medium_line_x2_t2_g2_t

0x3167,	// (0x00087f7f) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x2_t4_g2_g1

0x3167,	// (0x00087f7f) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x00094019) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x00094019) list_medium_line_x2_t4_g2_g

0x3c61,	// (0x00088a79) list_medium_line_x2_t4_g2_t1_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_x2_t4_g2_t1

0x3c61,	// (0x00088a79) list_medium_line_x2_t4_g2_t2_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_x2_t4_g2_t2

0x3c61,	// (0x00088a79) list_medium_line_x2_t4_g2_t3_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_x2_t4_g2_t3

0x3c61,	// (0x00088a79) list_medium_line_x2_t4_g2_t4_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x00094027) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x00094027) list_medium_line_x2_t4_g2_t

0x3de5,	// (0x00088bfd) list_medium_line_t3_right_iconx2_g1

0x3de5,	// (0x00088bfd) list_medium_line_t3_right_iconx2_g2

0x3de5,	// (0x00088bfd) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3dd,	// (0x000941f5) list_medium_line_t3_right_iconx2_g

0xb807,	// (0x0009061f) list_medium_line_t3_right_iconx2_t1

0xb807,	// (0x0009061f) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc58,	// (0x00094a70) list_medium_line_t3_right_iconx2_t

0x3167,	// (0x00087f7f) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x3_t4_g4_g1

0x3167,	// (0x00087f7f) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x3_t4_g4_g2

0x3167,	// (0x00087f7f) list_medium_line_x3_t4_g4_g3_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x3_t4_g4_g3

0x3167,	// (0x00087f7f) list_medium_line_x3_t4_g4_g4_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x0009401e) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x0009401e) list_medium_line_x3_t4_g4_g

0x3c61,	// (0x00088a79) list_medium_line_x3_t4_g4_t1_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_x3_t4_g4_t1

0x3c61,	// (0x00088a79) list_medium_line_x3_t4_g4_t2_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_x3_t4_g4_t2

0x3c61,	// (0x00088a79) list_medium_line_x3_t4_g4_t3_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_x3_t4_g4_t3

0x3c61,	// (0x00088a79) list_medium_line_x3_t4_g4_t4_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x00094027) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x00094027) list_medium_line_x3_t4_g4_t

0x9e8f,	// (0x0008eca7) list_single_dyc_row_text_pane_t1_ParamLimits

0x9e8f,	// (0x0008eca7) list_single_dyc_row_text_pane_t1

0x9ed8,	// (0x0008ecf0) list_single_dyc_row_text_pane_t2_ParamLimits

0x9ed8,	// (0x0008ecf0) list_single_dyc_row_text_pane_t2

0xe0c7,	// (0x00092edf) list_single_dyc_row_text_pane_t3_ParamLimits

0xe0c7,	// (0x00092edf) list_single_dyc_row_text_pane_t3

0x0005,

0xfc70,	// (0x00094a88) list_single_dyc_row_text_pane_t_ParamLimits

0xfc70,	// (0x00094a88) list_single_dyc_row_text_pane_t

0xe0eb,	// (0x00092f03) list_single_dyc_row_pane_g1_ParamLimits

0xe0eb,	// (0x00092f03) list_single_dyc_row_pane_g1

0xe0f7,	// (0x00092f0f) list_single_dyc_row_pane_g2_ParamLimits

0xe0f7,	// (0x00092f0f) list_single_dyc_row_pane_g2

0xe103,	// (0x00092f1b) list_single_dyc_row_pane_g3_ParamLimits

0xe103,	// (0x00092f1b) list_single_dyc_row_pane_g3

0xe10f,	// (0x00092f27) list_single_dyc_row_pane_g4_ParamLimits

0xe10f,	// (0x00092f27) list_single_dyc_row_pane_g4

0x0003,

0xfc7d,	// (0x00094a95) list_single_dyc_row_pane_g_ParamLimits

0xfc7d,	// (0x00094a95) list_single_dyc_row_pane_g

0xe11b,	// (0x00092f33) list_single_dyc_row_text_pane_ParamLimits

0xe11b,	// (0x00092f33) list_single_dyc_row_text_pane

0x0749,	// (0x00085561) bg_sp_fs_scroll_pane

0xe13a,	// (0x00092f52) thumb_sp_fs_scroll_pane

0x3167,	// (0x00087f7f) list_medium_line_g1_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_g1

0x3c61,	// (0x00088a79) list_medium_line_t1_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_t1

0x3167,	// (0x00087f7f) list_medium_line_x2_g1_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x2_g1

0x3167,	// (0x00087f7f) list_medium_line_x2_g2_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x00094019) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x00094019) list_medium_line_x2_g

0x3c61,	// (0x00088a79) list_medium_line_x2_t1_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_x2_t1

0x3167,	// (0x00087f7f) list_medium_line_x3_g1_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x3_g1

0xcdc4,	// (0x00091bdc) list_medium_line_x3_g2_ParamLimits

0xcdc4,	// (0x00091bdc) list_medium_line_x3_g2

0x0001,

0xfc86,	// (0x00094a9e) list_medium_line_x3_g_ParamLimits

0xfc86,	// (0x00094a9e) list_medium_line_x3_g

0xe143,	// (0x00092f5b) list_medium_line_x3_t1_ParamLimits

0xe143,	// (0x00092f5b) list_medium_line_x3_t1

0xe157,	// (0x00092f6f) thumb_sp_fs_scroll_pane_g1

0xe160,	// (0x00092f78) thumb_sp_fs_scroll_pane_g2

0xe169,	// (0x00092f81) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc8b,	// (0x00094aa3) thumb_sp_fs_scroll_pane_g

0xe157,	// (0x00092f6f) bg_sp_fs_scroll_pane_g1

0xe160,	// (0x00092f78) bg_sp_fs_scroll_pane_g2

0xe169,	// (0x00092f81) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc8b,	// (0x00094aa3) bg_sp_fs_scroll_pane_g

0x3167,	// (0x00087f7f) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x2_t3_g4_g1

0x3167,	// (0x00087f7f) list_medium_line_x2_t3_g4_g2_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x2_t3_g4_g2

0x3167,	// (0x00087f7f) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x2_t3_g4_g3

0x3167,	// (0x00087f7f) list_medium_line_x2_t3_g4_g4_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x0009401e) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x0009401e) list_medium_line_x2_t3_g4_g

0x3c61,	// (0x00088a79) list_medium_line_x2_t3_g4_t1_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_x2_t3_g4_t1

0x3c61,	// (0x00088a79) list_medium_line_x2_t3_g4_t2_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_x2_t3_g4_t2

0x3c61,	// (0x00088a79) list_medium_line_x2_t3_g4_t3_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x00094012) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x00094012) list_medium_line_x2_t3_g4_t

0x3167,	// (0x00087f7f) list_medium_line_g2_g1_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_g2_g1

0x3167,	// (0x00087f7f) list_medium_line_g2_g2_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x00094019) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x00094019) list_medium_line_g2_g

0x3c61,	// (0x00088a79) list_medium_line_g2_t1_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_g2_t1

0x3167,	// (0x00087f7f) list_medium_line_t3_g2_g1_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_t3_g2_g1

0x3167,	// (0x00087f7f) list_medium_line_t3_g2_g2_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x00094019) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x00094019) list_medium_line_t3_g2_g

0x3c61,	// (0x00088a79) list_medium_line_t3_g2_t1_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_t3_g2_t1

0x3c61,	// (0x00088a79) list_medium_line_t3_g2_t2_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_t3_g2_t2

0x3c61,	// (0x00088a79) list_medium_line_t3_g2_t3_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x00094012) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x00094012) list_medium_line_t3_g2_t

0x3de5,	// (0x00088bfd) list_medium_line_right_icon_g1

0xb807,	// (0x0009061f) list_medium_line_right_icon_t1

0x3167,	// (0x00087f7f) list_medium_line_t2_g1_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_t2_g1

0x3c61,	// (0x00088a79) list_medium_line_t2_t1_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_t2_t1

0x3c61,	// (0x00088a79) list_medium_line_t2_t2_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_t2_t2

0x0001,

0xf1d6,	// (0x00093fee) list_medium_line_t2_t_ParamLimits

0xf1d6,	// (0x00093fee) list_medium_line_t2_t

0x3167,	// (0x00087f7f) list_medium_line_t3_g1_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_t3_g1

0x3c61,	// (0x00088a79) list_medium_line_t3_t1_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_t3_t1

0x3c61,	// (0x00088a79) list_medium_line_t3_t2_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_t3_t2

0x3c61,	// (0x00088a79) list_medium_line_t3_t3_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x00094012) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x00094012) list_medium_line_t3_t

0x3167,	// (0x00087f7f) list_medium_line_g3_g1_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_g3_g1

0x3167,	// (0x00087f7f) list_medium_line_g3_g2_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_g3_g2

0x3167,	// (0x00087f7f) list_medium_line_g3_g3_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x0009400b) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x0009400b) list_medium_line_g3_g

0x3c61,	// (0x00088a79) list_medium_line_g3_t1_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_g3_t1

0x3167,	// (0x00087f7f) list_medium_line_t2_g3_g1_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_t2_g3_g1

0x3167,	// (0x00087f7f) list_medium_line_t2_g3_g2_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_t2_g3_g2

0x3167,	// (0x00087f7f) list_medium_line_t2_g3_g3_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x0009400b) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x0009400b) list_medium_line_t2_g3_g

0x3c61,	// (0x00088a79) list_medium_line_t2_g3_t1_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_t2_g3_t1

0x3c61,	// (0x00088a79) list_medium_line_t2_g3_t2_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_t2_g3_t2

0x0001,

0xf1d6,	// (0x00093fee) list_medium_line_t2_g3_t_ParamLimits

0xf1d6,	// (0x00093fee) list_medium_line_t2_g3_t

0x3167,	// (0x00087f7f) list_medium_line_t3_g3_g1_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_t3_g3_g1

0x3167,	// (0x00087f7f) list_medium_line_t3_g3_g2_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_t3_g3_g2

0x3167,	// (0x00087f7f) list_medium_line_t3_g3_g3_ParamLimits

0x3167,	// (0x00087f7f) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x0009400b) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x0009400b) list_medium_line_t3_g3_g

0x3c61,	// (0x00088a79) list_medium_line_t3_g3_t1_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_t3_g3_t1

0x3c61,	// (0x00088a79) list_medium_line_t3_g3_t2_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_t3_g3_t2

0x3c61,	// (0x00088a79) list_medium_line_t3_g3_t3_ParamLimits

0x3c61,	// (0x00088a79) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x00094012) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x00094012) list_medium_line_t3_g3_t

0x3de5,	// (0x00088bfd) list_medium_line_right_iconx2_g1

0x3de5,	// (0x00088bfd) list_medium_line_right_iconx2_g2

0x0001,

0xf3d8,	// (0x000941f0) list_medium_line_right_iconx2_g

0xb807,	// (0x0009061f) list_medium_line_right_iconx2_t1

0x3de5,	// (0x00088bfd) list_medium_line_t2_right_iconx2_g1

0x3de5,	// (0x00088bfd) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3d8,	// (0x000941f0) list_medium_line_t2_right_iconx2_g

0xb807,	// (0x0009061f) list_medium_line_t2_right_iconx2_t1

0xb807,	// (0x0009061f) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc58,	// (0x00094a70) list_medium_line_t2_right_iconx2_t

0xb807,	// (0x0009061f) list_medium_line_x4_t4_t1

0xb807,	// (0x0009061f) list_medium_line_x4_t4_t2

0xb807,	// (0x0009061f) list_medium_line_x4_t4_t3

0xb807,	// (0x0009061f) list_medium_line_x4_t4_t4

0x0003,

0xf2c3,	// (0x000940db) list_medium_line_x4_t4_t

0xa050,	// (0x0008ee68) tport_appsw_pane_ParamLimits

0xa050,	// (0x0008ee68) tport_appsw_pane

0xa068,	// (0x0008ee80) tport_contact_pane_ParamLimits

0xa068,	// (0x0008ee80) tport_contact_pane

0xa080,	// (0x0008ee98) tport_listscroll_pane_ParamLimits

0xa080,	// (0x0008ee98) tport_listscroll_pane

0xa09a,	// (0x0008eeb2) cell_tport_appsw_pane_ParamLimits

0xa09a,	// (0x0008eeb2) cell_tport_appsw_pane

0x1f39,	// (0x00086d51) tport_appsw_pane_g1_ParamLimits

0x1f39,	// (0x00086d51) tport_appsw_pane_g1

0xe172,	// (0x00092f8a) tport_contact_pane_g1

0xd9d7,	// (0x000927ef) tport_contact_pane_t1

0xe17b,	// (0x00092f93) tport_contact_pane_t2

0x0001,

0xfc92,	// (0x00094aaa) tport_contact_pane_t

0xe189,	// (0x00092fa1) list_tport_pane

0xe192,	// (0x00092faa) scroll_pane_cp_030

0xa0e2,	// (0x0008eefa) cell_tport_appsw_pane_g1

0xa0f2,	// (0x0008ef0a) cell_tport_appsw_pane_t1

0xa100,	// (0x0008ef18) grid_highlight_pane_cp019

0xa108,	// (0x0008ef20) list_tport_double_graphic_pane_ParamLimits

0xa108,	// (0x0008ef20) list_tport_double_graphic_pane

0x0de3,	// (0x00085bfb) list_highlight_pane_cp023_ParamLimits

0x0de3,	// (0x00085bfb) list_highlight_pane_cp023

0xa115,	// (0x0008ef2d) list_tport_double_graphic_pane_g1_ParamLimits

0xa115,	// (0x0008ef2d) list_tport_double_graphic_pane_g1

0xa122,	// (0x0008ef3a) list_tport_double_graphic_pane_t1_ParamLimits

0xa122,	// (0x0008ef3a) list_tport_double_graphic_pane_t1

0xa137,	// (0x0008ef4f) list_tport_double_graphic_pane_t2_ParamLimits

0xa137,	// (0x0008ef4f) list_tport_double_graphic_pane_t2

0x0001,

0xfc9e,	// (0x00094ab6) list_tport_double_graphic_pane_t_ParamLimits

0xfc9e,	// (0x00094ab6) list_tport_double_graphic_pane_t

0x0749,	// (0x00085561) main_cale_note_pane

0x7f6a,	// (0x0008cd82) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7f6a,	// (0x0008cd82) cell_vitu2_function_top_wide_pane_cp01

0x98e6,	// (0x0008e6fe) wait_bar_pane_cp05_ParamLimits

0x0de3,	// (0x00085bfb) listscroll_cmail_pane

0xe19b,	// (0x00092fb3) list_cmail_pane

0xa149,	// (0x0008ef61) list_cmail_body_pane

0xa15e,	// (0x0008ef76) list_single_cmail_header_caption_pane

0xa174,	// (0x0008ef8c) list_single_cmail_header_detail_pane_ParamLimits

0xa174,	// (0x0008ef8c) list_single_cmail_header_detail_pane

0xe1ab,	// (0x00092fc3) list_single_cmail_header_caption_pane_t1

0xa19d,	// (0x0008efb5) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa19d,	// (0x0008efb5) list_single_cmail_header_detail_pane_g1

0xe1c2,	// (0x00092fda) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe1c2,	// (0x00092fda) list_single_cmail_header_detail_pane_g2

0x0002,

0xfca3,	// (0x00094abb) list_single_cmail_header_detail_pane_g_ParamLimits

0xfca3,	// (0x00094abb) list_single_cmail_header_detail_pane_g

0xe1db,	// (0x00092ff3) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe1db,	// (0x00092ff3) list_single_cmail_header_detail_pane_t1

0xe23b,	// (0x00093053) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe23b,	// (0x00093053) list_single_cmail_header_editor_pane_bg

0xdb34,	// (0x0009294c) list_cmail_body_pane_g1

0xe252,	// (0x0009306a) list_cmail_body_pane_t1

0xce30,	// (0x00091c48) list_single_cmail_header_editor_pane_bg_g1

0x44b7,	// (0x000892cf) list_single_cmail_header_editor_pane_bg_g1_copy1

0xce40,	// (0x00091c58) list_single_cmail_header_editor_pane_bg_g1_copy2

0xce38,	// (0x00091c50) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd08e,	// (0x00091ea6) list_single_cmail_header_editor_pane_bg_g1_copy4

0xce60,	// (0x00091c78) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xce50,	// (0x00091c68) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xce58,	// (0x00091c70) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x4497,	// (0x000892af) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa1b5,	// (0x0008efcd) calenote_gesture_pane_ParamLimits

0xa1b5,	// (0x0008efcd) calenote_gesture_pane

0xa1d5,	// (0x0008efed) calenote_window_pane_ParamLimits

0xa1d5,	// (0x0008efed) calenote_window_pane

0xe260,	// (0x00093078) popup_note_window_cp01

0xa1f1,	// (0x0008f009) calenote_swipe_1_pane_ParamLimits

0xa1f1,	// (0x0008f009) calenote_swipe_1_pane

0x9d3d,	// (0x0008eb55) calenote_swipe_2_pane_ParamLimits

0x9d3d,	// (0x0008eb55) calenote_swipe_2_pane

0xde85,	// (0x00092c9d) calenote_swipe_1_pane_g1_ParamLimits

0xde85,	// (0x00092c9d) calenote_swipe_1_pane_g1

0xde92,	// (0x00092caa) calenote_swipe_1_pane_g2_ParamLimits

0xde92,	// (0x00092caa) calenote_swipe_1_pane_g2

0x0001,

0xfc40,	// (0x00094a58) calenote_swipe_1_pane_g_ParamLimits

0xfc40,	// (0x00094a58) calenote_swipe_1_pane_g

0xe272,	// (0x0009308a) calenote_swipe_1_pane_t1_ParamLimits

0xe272,	// (0x0009308a) calenote_swipe_1_pane_t1

0xde85,	// (0x00092c9d) calenote_swipe_2_pane_g1_ParamLimits

0xde85,	// (0x00092c9d) calenote_swipe_2_pane_g1

0xe291,	// (0x000930a9) calenote_swipe_2_pane_g2_ParamLimits

0xe291,	// (0x000930a9) calenote_swipe_2_pane_g2

0x0001,

0xfcaf,	// (0x00094ac7) calenote_swipe_2_pane_g_ParamLimits

0xfcaf,	// (0x00094ac7) calenote_swipe_2_pane_g

0xe29d,	// (0x000930b5) calenote_swipe_2_pane_t1_ParamLimits

0xe29d,	// (0x000930b5) calenote_swipe_2_pane_t1

0x0749,	// (0x00085561) main_mup_navstr_pane

0x6e1f,	// (0x0008bc37) main_mup3_pane_t7_ParamLimits

0x6e1f,	// (0x0008bc37) main_mup3_pane_t7

0xec73,	// (0x00093a8b) main_mp4_pane_g6_ParamLimits

0xec73,	// (0x00093a8b) main_mp4_pane_g6

0xee35,	// (0x00093c4d) main_image3_pane_t4_ParamLimits

0xee35,	// (0x00093c4d) main_image3_pane_t4

0xa206,	// (0x0008f01e) popup_navstr_preview_pane_ParamLimits

0xa206,	// (0x0008f01e) popup_navstr_preview_pane

0xa21a,	// (0x0008f032) scroll_navstr_pane_ParamLimits

0xa21a,	// (0x0008f032) scroll_navstr_pane

0x0749,	// (0x00085561) bg_popup_preview_window_pane_cp04

0xe2c4,	// (0x000930dc) popup_navstr_preview_pane_t1

0xa22e,	// (0x0008f046) scroll_navstr_pane_g1_ParamLimits

0xa22e,	// (0x0008f046) scroll_navstr_pane_g1

0xa242,	// (0x0008f05a) scroll_navstr_pane_t1_ParamLimits

0xa242,	// (0x0008f05a) scroll_navstr_pane_t1

0xe269,	// (0x00093081) bg_button_pane_cp014

0xe269,	// (0x00093081) bg_button_pane_cp030

0x9c16,	// (0x0008ea2e) list_double_fisheye_pane_g4_ParamLimits

0x9c16,	// (0x0008ea2e) list_double_fisheye_pane_g4

0x9c22,	// (0x0008ea3a) list_double_fisheye_pane_g5_ParamLimits

0x9c22,	// (0x0008ea3a) list_double_fisheye_pane_g5

0x1f47,	// (0x00086d5f) sp_fs_scroll_pane_cp03

0xdfe9,	// (0x00092e01) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdff5,	// (0x00092e0d) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc5d,	// (0x00094a75) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x9de7,	// (0x0008ebff) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe1a3,	// (0x00092fbb) sp_fs_scroll_pane_cp02

0x35e9,	// (0x00088401) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x35e9,	// (0x00088401) popup_sp_fs_calendar_preview_list_single_pane

0x0749,	// (0x00085561) main_cam6_pano_pane

0xb595,	// (0x000903ad) main_mup3_pane_ParamLimits

0x0749,	// (0x00085561) main_phacti_pane

0x97b9,	// (0x0008e5d1) bg_button_pane_cp11

0x97d3,	// (0x0008e5eb) main_mobtv_info_pane_g2_ParamLimits

0x97d3,	// (0x0008e5eb) main_mobtv_info_pane_g2

0x0001,

0xfbbd,	// (0x000949d5) main_mobtv_info_pane_g_ParamLimits

0xfbbd,	// (0x000949d5) main_mobtv_info_pane_g

0x99b0,	// (0x0008e7c8) sc_clock_pane_t5_ParamLimits

0x99b0,	// (0x0008e7c8) sc_clock_pane_t5

0x9a78,	// (0x0008e890) main_radioblah_pane_g1_ParamLimits

0xddd1,	// (0x00092be9) main_radioblah_pane_t3_ParamLimits

0xddd1,	// (0x00092be9) main_radioblah_pane_t3

0xdde9,	// (0x00092c01) main_radioblah_pane_t4_ParamLimits

0xdde9,	// (0x00092c01) main_radioblah_pane_t4

0x9aa0,	// (0x0008e8b8) main_radioblah_text_pane_ParamLimits

0x9aa0,	// (0x0008e8b8) main_radioblah_text_pane

0x9ab2,	// (0x0008e8ca) main_radioblah_info_pane_g1_ParamLimits

0x9b4b,	// (0x0008e963) main_radioblah_info_pane_t4_ParamLimits

0x9b4b,	// (0x0008e963) main_radioblah_info_pane_t4

0x0de3,	// (0x00085bfb) main_sp_fs_calendar_pane

0xa259,	// (0x0008f071) main_phacti_pane_g1

0xa261,	// (0x0008f079) phacti_note_pane_ParamLimits

0xa261,	// (0x0008f079) phacti_note_pane

0xe2db,	// (0x000930f3) phacti_term_pane_ParamLimits

0xe2db,	// (0x000930f3) phacti_term_pane

0xe2f0,	// (0x00093108) phacti_note_pane_t1_ParamLimits

0xe2f0,	// (0x00093108) phacti_note_pane_t1

0xe307,	// (0x0009311f) phacti_term_pane_g1

0xe30f,	// (0x00093127) phacti_term_pane_t1_ParamLimits

0xe30f,	// (0x00093127) phacti_term_pane_t1

0xe339,	// (0x00093151) popup_sp_fs_calendar_preview_list_single_pane_g1

0x3bd7,	// (0x000889ef) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcb9,	// (0x00094ad1) popup_sp_fs_calendar_preview_list_single_pane_g

0xe341,	// (0x00093159) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe341,	// (0x00093159) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe357,	// (0x0009316f) aid_popup_sp_fs_bg_corner_pane

0x3de5,	// (0x00088bfd) popup_sp_fs_calendar_preview_bg_pane_g1

0x0749,	// (0x00085561) popup_sp_fs_calendar_preview_bg_pane

0xe35f,	// (0x00093177) popup_sp_fs_calendar_preview_list_pane

0x1314,	// (0x0008612c) bg_main_sp_fs_cale_pane_ParamLimits

0x1314,	// (0x0008612c) bg_main_sp_fs_cale_pane

0xe370,	// (0x00093188) listscroll_cale_mrui_pane_ParamLimits

0xe370,	// (0x00093188) listscroll_cale_mrui_pane

0xe385,	// (0x0009319d) listscroll_sp_fs_schedule_track_pane

0xe38e,	// (0x000931a6) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe38e,	// (0x000931a6) main_sp_fs_ctrlbar_pane_cp01

0xe3a1,	// (0x000931b9) main_sp_fs_ribbon_pane

0xe3a9,	// (0x000931c1) popup_sp_fs_cale_preview_window

0xa2d6,	// (0x0008f0ee) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa2d6,	// (0x0008f0ee) list_single_sp_fs_schedule_track_pane

0x0de3,	// (0x00085bfb) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0de3,	// (0x00085bfb) bg_sp_fs_highlight_list_pane_cp03

0xa2e9,	// (0x0008f101) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa2e9,	// (0x0008f101) list_single_sp_fs_schedule_track_pane_g1

0xa2f5,	// (0x0008f10d) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa2f5,	// (0x0008f10d) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcbe,	// (0x00094ad6) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcbe,	// (0x00094ad6) list_single_sp_fs_schedule_track_pane_g

0xa301,	// (0x0008f119) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa301,	// (0x0008f119) list_single_sp_fs_schedule_track_pane_t1

0xa31b,	// (0x0008f133) sp_fs_schedule_track_pane_ParamLimits

0xa31b,	// (0x0008f133) sp_fs_schedule_track_pane

0xe3bb,	// (0x000931d3) sp_fs_schedule_track_pane_g1

0xe3c3,	// (0x000931db) sp_fs_schedule_track_pane_g2

0xe3cb,	// (0x000931e3) sp_fs_schedule_track_pane_g3

0xe3d3,	// (0x000931eb) sp_fs_schedule_track_pane_g4

0xe3db,	// (0x000931f3) sp_fs_schedule_track_pane_g5

0x0004,

0xfcc3,	// (0x00094adb) sp_fs_schedule_track_pane_g

0xce30,	// (0x00091c48) bg_sp_fs_schedule_viewer_highlight_g1

0x44b7,	// (0x000892cf) bg_sp_fs_schedule_viewer_highlight_g2

0xce38,	// (0x00091c50) bg_sp_fs_schedule_viewer_highlight_g3

0xce40,	// (0x00091c58) bg_sp_fs_schedule_viewer_highlight_g4

0xd08e,	// (0x00091ea6) bg_sp_fs_schedule_viewer_highlight_g5

0xce50,	// (0x00091c68) bg_sp_fs_schedule_viewer_highlight_g6

0xce58,	// (0x00091c70) bg_sp_fs_schedule_viewer_highlight_g7

0xce60,	// (0x00091c78) bg_sp_fs_schedule_viewer_highlight_g8

0x4497,	// (0x000892af) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcce,	// (0x00094ae6) bg_sp_fs_schedule_viewer_highlight_g

0x0749,	// (0x00085561) bg_main_sp_fs_ribbon_pane

0xa32c,	// (0x0008f144) main_sp_fs_ribbon_pane_g1

0xe3e3,	// (0x000931fb) main_sp_fs_ribbon_pane_t1

0xa335,	// (0x0008f14d) main_sp_fs_ribbon_pane_t2

0xe3f2,	// (0x0009320a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfce1,	// (0x00094af9) main_sp_fs_ribbon_pane_t

0xe401,	// (0x00093219) main_sp_fs_ribbon_scheduler_pane

0xe409,	// (0x00093221) bg_main_sp_fs_ribbon_pane_g1

0xe412,	// (0x0009322a) bg_main_sp_fs_ribbon_pane_g2

0xe41b,	// (0x00093233) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfce8,	// (0x00094b00) bg_main_sp_fs_ribbon_pane_g

0xe423,	// (0x0009323b) main_sp_fs_ribbon_scheduler_pane_g1

0xe42c,	// (0x00093244) main_sp_fs_ribbon_scheduler_pane_g2

0xe435,	// (0x0009324d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcef,	// (0x00094b07) main_sp_fs_ribbon_scheduler_pane_g

0xe43e,	// (0x00093256) list_cale_mrui_pane

0xa344,	// (0x0008f15c) sp_fs_scroll_pane_cp07_ParamLimits

0xa344,	// (0x0008f15c) sp_fs_scroll_pane_cp07

0xa360,	// (0x0008f178) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa360,	// (0x0008f178) bg_sp_fs_schedule_viewer_highlight

0xe44b,	// (0x00093263) list_single_sp_fs_schedule_track_pane_cp01

0xe453,	// (0x0009326b) list_sp_fs_schedule_track_pane

0xe45b,	// (0x00093273) sp_fs_scroll_pane_cp06_ParamLimits

0xe45b,	// (0x00093273) sp_fs_scroll_pane_cp06

0x3de5,	// (0x00088bfd) bgmain_sp_fs_calendar_pane_g1

0xa370,	// (0x0008f188) list_single_cale_mrui_pane_ParamLimits

0xa370,	// (0x0008f188) list_single_cale_mrui_pane

0xe46d,	// (0x00093285) list_single_cale_mrui_row_pane_ParamLimits

0xe46d,	// (0x00093285) list_single_cale_mrui_row_pane

0xe47a,	// (0x00093292) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe47a,	// (0x00093292) list_single_cale_mrui_row_pane_g1

0xe4bf,	// (0x000932d7) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe4bf,	// (0x000932d7) list_single_cale_mrui_row_pane_t1

0xa390,	// (0x0008f1a8) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa390,	// (0x0008f1a8) list_single_cale_mrui_row_pane_t2

0xe4d1,	// (0x000932e9) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe4d1,	// (0x000932e9) list_single_cale_mrui_row_pane_t3

0xe500,	// (0x00093318) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe500,	// (0x00093318) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcfd,	// (0x00094b15) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcfd,	// (0x00094b15) list_single_cale_mrui_row_pane_t

0xa3f8,	// (0x0008f210) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa3f8,	// (0x0008f210) list_single_cmail_header_editor_pane_bg_cp01

0xa41e,	// (0x0008f236) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa41e,	// (0x0008f236) list_single_cmail_header_editor_pane_bg_cp02

0xa43e,	// (0x0008f256) main_radioblah_text_pane_t1_ParamLimits

0xa43e,	// (0x0008f256) main_radioblah_text_pane_t1

0xe52f,	// (0x00093347) cam6_indi_pane_cp01

0xe537,	// (0x0009334f) cam6_mode_pane_cp01

0xe53f,	// (0x00093357) cam6_pano_pane

0xe548,	// (0x00093360) cam6_zoom_pane_cp01

0xe550,	// (0x00093368) cam6_pano_image_pane

0xe55b,	// (0x00093373) cam6_pano_pane_g1

0xdb34,	// (0x0009294c) cam6_pano_pane_g2

0xe564,	// (0x0009337c) cam6_pano_pane_g3

0xe56d,	// (0x00093385) cam6_pano_pane_g4

0x1cda,	// (0x00086af2) cam6_pano_pane_g5

0xe576,	// (0x0009338e) cam6_pano_pane_g6

0xe580,	// (0x00093398) cam6_pano_pane_g7

0xe588,	// (0x000933a0) cam6_pano_pane_g8

0xe591,	// (0x000933a9) cam6_pano_pane_g9

0x0008,

0xfd06,	// (0x00094b1e) cam6_pano_pane_g

0x0749,	// (0x00085561) main_browser_tag_pane

0xe2bc,	// (0x000930d4) grid_navstr_albumart_pane

0xe59c,	// (0x000933b4) cell_navstr_albumart_pane_ParamLimits

0xe59c,	// (0x000933b4) cell_navstr_albumart_pane

0xe5bc,	// (0x000933d4) cell_navstr_albumart_pane_g1

0x11b0,	// (0x00085fc8) cell_navstr_albumart_pane_g2

0x11c0,	// (0x00085fd8) cell_navstr_albumart_pane_g3

0x11b8,	// (0x00085fd0) cell_navstr_albumart_pane_g4

0x0003,

0xfd19,	// (0x00094b31) cell_navstr_albumart_pane_g

0xa458,	// (0x0008f270) bt_list_pane_ParamLimits

0xa458,	// (0x0008f270) bt_list_pane

0xa46c,	// (0x0008f284) bt_list_pane_t1

0xa47b,	// (0x0008f293) bt_list_pane_t2

0x0001,

0xfd22,	// (0x00094b3a) bt_list_pane_t

0x0749,	// (0x00085561) main_cale_prevew_pane

0xa48a,	// (0x0008f2a2) popup_cale_preview_window_ParamLimits

0xa48a,	// (0x0008f2a2) popup_cale_preview_window

0x0de3,	// (0x00085bfb) bg_popup_preview_window_pane_cp05_ParamLimits

0x0de3,	// (0x00085bfb) bg_popup_preview_window_pane_cp05

0xe5c4,	// (0x000933dc) list_cale_preview_pane_ParamLimits

0xe5c4,	// (0x000933dc) list_cale_preview_pane

0xa4a5,	// (0x0008f2bd) list_double_cale_preview_pane_ParamLimits

0xa4a5,	// (0x0008f2bd) list_double_cale_preview_pane

0xa4b7,	// (0x0008f2cf) list_single_cale_preview_pane_ParamLimits

0xa4b7,	// (0x0008f2cf) list_single_cale_preview_pane

0xa4cd,	// (0x0008f2e5) list_single_cale_preview_pane_g1

0xa4d5,	// (0x0008f2ed) list_single_cale_preview_pane_t1_ParamLimits

0xa4d5,	// (0x0008f2ed) list_single_cale_preview_pane_t1

0xa4ea,	// (0x0008f302) list_double_cale_preview_pane_g1

0xa4f2,	// (0x0008f30a) list_double_cale_preview_pane_t1_ParamLimits

0xa4f2,	// (0x0008f30a) list_double_cale_preview_pane_t1

0xa507,	// (0x0008f31f) list_double_cale_preview_pane_t2_ParamLimits

0xa507,	// (0x0008f31f) list_double_cale_preview_pane_t2

0x0001,

0xfd27,	// (0x00094b3f) list_double_cale_preview_pane_t_ParamLimits

0xfd27,	// (0x00094b3f) list_double_cale_preview_pane_t

0x0749,	// (0x00085561) main_ezdial_pane

0x0de3,	// (0x00085bfb) main_sp_fs_email_pane_ParamLimits

0x9d57,	// (0x0008eb6f) cmail_ddmenu_btn01_pane_ParamLimits

0x9d57,	// (0x0008eb6f) cmail_ddmenu_btn01_pane

0x9d6a,	// (0x0008eb82) cmail_ddmenu_btn02_pane_ParamLimits

0x9d6a,	// (0x0008eb82) cmail_ddmenu_btn02_pane

0x9d8d,	// (0x0008eba5) cmail_ddmenu_btn03_pane_ParamLimits

0x9d8d,	// (0x0008eba5) cmail_ddmenu_btn03_pane

0x9e26,	// (0x0008ec3e) main_sp_fs_ctrlbar_pane_ParamLimits

0x9e4a,	// (0x0008ec62) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa149,	// (0x0008ef61) list_cmail_body_pane_ParamLimits

0xe1b9,	// (0x00092fd1) bg_button_pane_cp12

0xe1ce,	// (0x00092fe6) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe1ce,	// (0x00092fe6) list_single_cmail_header_detail_pane_g3

0xe217,	// (0x0009302f) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe217,	// (0x0009302f) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcaa,	// (0x00094ac2) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcaa,	// (0x00094ac2) list_single_cmail_header_detail_pane_t

0xe324,	// (0x0009313c) phacti_term_pane_t2_ParamLimits

0xe324,	// (0x0009313c) phacti_term_pane_t2

0x0001,

0xfcb4,	// (0x00094acc) phacti_term_pane_t_ParamLimits

0xfcb4,	// (0x00094acc) phacti_term_pane_t

0xe5d0,	// (0x000933e8) aid_size_list_single_double

0xa51f,	// (0x0008f337) popup_ezdial_listscroll_window

0xa53b,	// (0x0008f353) popup_number_entry_window_cp01

0x3bf8,	// (0x00088a10) bg_popup_call_pane_cp09

0xe5dc,	// (0x000933f4) ezdial_list_pane

0xe5e4,	// (0x000933fc) scroll_pane_cp23

0x1314,	// (0x0008612c) bg_button_pane_cp028_ParamLimits

0x1314,	// (0x0008612c) bg_button_pane_cp028

0xa549,	// (0x0008f361) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa549,	// (0x0008f361) cmail_ddmenu_btn01_pane_g1

0xa555,	// (0x0008f36d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa555,	// (0x0008f36d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd2c,	// (0x00094b44) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd2c,	// (0x00094b44) cmail_ddmenu_btn01_pane_g

0xe5ec,	// (0x00093404) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe5ec,	// (0x00093404) cmail_ddmenu_btn01_pane_t1

0x1314,	// (0x0008612c) bg_button_pane_cp029_ParamLimits

0x1314,	// (0x0008612c) bg_button_pane_cp029

0xa569,	// (0x0008f381) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa569,	// (0x0008f381) cmail_ddmenu_btn02_pane_g1

0xa581,	// (0x0008f399) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa581,	// (0x0008f399) cmail_ddmenu_btn02_pane_t1

0x0de3,	// (0x00085bfb) bg_button_pane_cp031_ParamLimits

0x0de3,	// (0x00085bfb) bg_button_pane_cp031

0xa569,	// (0x0008f381) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa569,	// (0x0008f381) cmail_ddmenu_btn03_pane_g1

0xa581,	// (0x0008f399) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa581,	// (0x0008f399) cmail_ddmenu_btn03_pane_t1

0x777a,	// (0x0008c592) cell_dialer2_keypad_pane_t1_ParamLimits

0x7794,	// (0x0008c5ac) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7794,	// (0x0008c5ac) cell_dialer2_keypad_pane_t1_copy1

0x95dc,	// (0x0008e3f4) ncimui_group_button_pane

0x0de3,	// (0x00085bfb) main_sp_fs_calendar_pane_ParamLimits

0xa15e,	// (0x0008ef76) list_single_cmail_header_caption_pane_ParamLimits

0xe367,	// (0x0009317f) aid_recal_txt_sm_pane

0x0749,	// (0x00085561) mian_recal_day_pane

0xe3a9,	// (0x000931c1) popup_sp_fs_cale_preview_window_ParamLimits

0xe602,	// (0x0009341a) list_recal_day_pane

0xe644,	// (0x0009345c) list_single_recal_day_pane_ParamLimits

0xe644,	// (0x0009345c) list_single_recal_day_pane

0xe656,	// (0x0009346e) list_single_recal_day_pane_g1_ParamLimits

0xe656,	// (0x0009346e) list_single_recal_day_pane_g1

0xe662,	// (0x0009347a) list_single_recal_day_pane_g2_ParamLimits

0xe662,	// (0x0009347a) list_single_recal_day_pane_g2

0xe66e,	// (0x00093486) list_single_recal_day_pane_g3_ParamLimits

0xe66e,	// (0x00093486) list_single_recal_day_pane_g3

0xa5a5,	// (0x0008f3bd) list_single_recal_day_pane_g4_ParamLimits

0xa5a5,	// (0x0008f3bd) list_single_recal_day_pane_g4

0xe67a,	// (0x00093492) list_single_recal_day_pane_g5_ParamLimits

0xe67a,	// (0x00093492) list_single_recal_day_pane_g5

0xe686,	// (0x0009349e) list_single_recal_day_pane_g6_ParamLimits

0xe686,	// (0x0009349e) list_single_recal_day_pane_g6

0x0004,

0xfd3b,	// (0x00094b53) list_single_recal_day_pane_g_ParamLimits

0xfd3b,	// (0x00094b53) list_single_recal_day_pane_g

0xe69a,	// (0x000934b2) list_single_recal_day_pane_t1

0xe6ac,	// (0x000934c4) list_single_recal_day_pane_t2

0x0001,

0xfd46,	// (0x00094b5e) list_single_recal_day_pane_t

0xa5bd,	// (0x0008f3d5) ncimui_query_button_pane_ParamLimits

0xa5bd,	// (0x0008f3d5) ncimui_query_button_pane

0xa5cd,	// (0x0008f3e5) ncimui_query_button_pane_t1_ParamLimits

0xa5cd,	// (0x0008f3e5) ncimui_query_button_pane_t1

0xe6be,	// (0x000934d6) ncimui_query_button_pane_t2_ParamLimits

0xe6be,	// (0x000934d6) ncimui_query_button_pane_t2

0x0001,

0xfd4b,	// (0x00094b63) ncimui_query_button_pane_t_ParamLimits

0xfd4b,	// (0x00094b63) ncimui_query_button_pane_t

0xa5e0,	// (0x0008f3f8) query_button_pane_ParamLimits

0xa5e0,	// (0x0008f3f8) query_button_pane

0x0749,	// (0x00085561) bg_button_pane_cp0028

0xe6d1,	// (0x000934e9) query_button_pane_t1

0x61d2,	// (0x0008afea) main_tport_pane_ParamLimits

0xa00d,	// (0x0008ee25) bg_popup_window_pane_cp01_ParamLimits

0xa00d,	// (0x0008ee25) bg_popup_window_pane_cp01

0xa028,	// (0x0008ee40) heading_pane_cp08_ParamLimits

0xa028,	// (0x0008ee40) heading_pane_cp08

0xa03b,	// (0x0008ee53) heading_pane_cp07_ParamLimits

0xa03b,	// (0x0008ee53) heading_pane_cp07

0xa0e2,	// (0x0008eefa) cell_tport_appsw_pane_g2

0x0002,

0xfc97,	// (0x00094aaf) cell_tport_appsw_pane_g

0x5711,	// (0x0008a529) input_candi_list_open_g1

0xb6b4,	// (0x000904cc) list_cale_time_pane_g6_ParamLimits

0xb6b4,	// (0x000904cc) list_cale_time_pane_g6

0x67f3,	// (0x0008b60b) aid_size_touch_calib_1_ParamLimits

0x67f3,	// (0x0008b60b) aid_size_touch_calib_1

0x6805,	// (0x0008b61d) aid_size_touch_calib_2_ParamLimits

0x6805,	// (0x0008b61d) aid_size_touch_calib_2

0x681d,	// (0x0008b635) aid_size_touch_calib_3_ParamLimits

0x681d,	// (0x0008b635) aid_size_touch_calib_3

0x683b,	// (0x0008b653) aid_size_touch_calib_4_ParamLimits

0x683b,	// (0x0008b653) aid_size_touch_calib_4

0x6853,	// (0x0008b66b) main_touch_calib_button_group_pane_ParamLimits

0x6853,	// (0x0008b66b) main_touch_calib_button_group_pane

0x686b,	// (0x0008b683) main_touch_calib_pane_g1_ParamLimits

0x687d,	// (0x0008b695) main_touch_calib_pane_g2_ParamLimits

0x688f,	// (0x0008b6a7) main_touch_calib_pane_g3_ParamLimits

0x68a1,	// (0x0008b6b9) main_touch_calib_pane_g4_ParamLimits

0xf6d9,	// (0x000944f1) main_touch_calib_pane_g_ParamLimits

0x68b3,	// (0x0008b6cb) main_touch_calib_pane_t1_ParamLimits

0x68cd,	// (0x0008b6e5) main_touch_calib_pane_t2_ParamLimits

0x68e7,	// (0x0008b6ff) main_touch_calib_pane_t3_ParamLimits

0x68fb,	// (0x0008b713) main_touch_calib_pane_t4_ParamLimits

0x690f,	// (0x0008b727) main_touch_calib_pane_t5_ParamLimits

0xf6e2,	// (0x000944fa) main_touch_calib_pane_t_ParamLimits

0x1a74,	// (0x0008688c) list_single_fp_cale_pane_g3_ParamLimits

0x1a74,	// (0x0008688c) list_single_fp_cale_pane_g3

0xb595,	// (0x000903ad) bg_button_pane_cp012_ParamLimits

0xb595,	// (0x000903ad) bg_vkb2_func_pane_cp03_ParamLimits

0x8758,	// (0x0008d570) cell_vitu2_function_top_pane_g1_ParamLimits

0xb595,	// (0x000903ad) bg_vkb2_func_pane_cp04_ParamLimits

0x9567,	// (0x0008e37f) main_ncimui_button_group_pane_ParamLimits

0x9567,	// (0x0008e37f) main_ncimui_button_group_pane

0x95c7,	// (0x0008e3df) main_ncimui_pane_t3_ParamLimits

0x95c7,	// (0x0008e3df) main_ncimui_pane_t3

0xe2d2,	// (0x000930ea) phacti_button_group_pane

0xe5d0,	// (0x000933e8) aid_size_list_single_double_ParamLimits

0xa51f,	// (0x0008f337) popup_ezdial_listscroll_window_ParamLimits

0xa53b,	// (0x0008f353) popup_number_entry_window_cp01_ParamLimits

0xa5f3,	// (0x0008f40b) phacti_button_pane_ParamLimits

0xa5f3,	// (0x0008f40b) phacti_button_pane

0x0749,	// (0x00085561) bg_button_pane_cp14

0xe6df,	// (0x000934f7) phacti_button_pane_t1

0xa604,	// (0x0008f41c) main_touch_calib_button_pane_ParamLimits

0xa604,	// (0x0008f41c) main_touch_calib_button_pane

0x333d,	// (0x00088155) bg_button_pane_cp18_ParamLimits

0x333d,	// (0x00088155) bg_button_pane_cp18

0xe6ed,	// (0x00093505) main_touch_calib_button_pane_t1_ParamLimits

0xe6ed,	// (0x00093505) main_touch_calib_button_pane_t1

0xe703,	// (0x0009351b) main_touch_calib_button_pane_t2_ParamLimits

0xe703,	// (0x0009351b) main_touch_calib_button_pane_t2

0x0001,

0xfd50,	// (0x00094b68) main_touch_calib_button_pane_t_ParamLimits

0xfd50,	// (0x00094b68) main_touch_calib_button_pane_t

0x0749,	// (0x00085561) cell_ncimui_button_pane

0x0749,	// (0x00085561) bg_button_pane_cp032

0xe721,	// (0x00093539) cell_ncimui_button_pane_t1

0xee15,	// (0x00093c2d) image3_infobar_pane_ParamLimits

0xee15,	// (0x00093c2d) image3_infobar_pane

0x99dc,	// (0x0008e7f4) fs_bigclock_status_pane_ParamLimits

0x99dc,	// (0x0008e7f4) fs_bigclock_status_pane

0x99e9,	// (0x0008e801) main_fs_bigclock_clock_pane_ParamLimits

0x99e9,	// (0x0008e801) main_fs_bigclock_clock_pane

0x9a07,	// (0x0008e81f) main_fs_bigclock_indi_pane_ParamLimits

0x9a07,	// (0x0008e81f) main_fs_bigclock_indi_pane

0x9a39,	// (0x0008e851) main_fs_bigclock_swipe_pane_ParamLimits

0x9a39,	// (0x0008e851) main_fs_bigclock_swipe_pane

0x0749,	// (0x00085561) main_fs_clock_dumped_data

0xdc41,	// (0x00092a59) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdc41,	// (0x00092a59) list_single_fs_bigclock_indicator_pane_g1

0xdc5c,	// (0x00092a74) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdc5c,	// (0x00092a74) list_single_fs_bigclock_indicator_pane_g2

0xdc76,	// (0x00092a8e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdc76,	// (0x00092a8e) list_single_fs_bigclock_indicator_pane_g3

0xdc90,	// (0x00092aa8) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdc90,	// (0x00092aa8) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbf1,	// (0x00094a09) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbf1,	// (0x00094a09) list_single_fs_bigclock_indicator_pane_g

0xdcbb,	// (0x00092ad3) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdcbb,	// (0x00092ad3) list_single_fs_bigclock_indicator_pane_t1

0xdce3,	// (0x00092afb) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdce3,	// (0x00092afb) list_single_fs_bigclock_indicator_pane_t2

0xdd0b,	// (0x00092b23) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdd0b,	// (0x00092b23) list_single_fs_bigclock_indicator_pane_t3

0xdd33,	// (0x00092b4b) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdd33,	// (0x00092b4b) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbfc,	// (0x00094a14) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbfc,	// (0x00094a14) list_single_fs_bigclock_indicator_pane_t

0xe72f,	// (0x00093547) image3_infobar_fav_pane_ParamLimits

0xe72f,	// (0x00093547) image3_infobar_fav_pane

0xe73f,	// (0x00093557) image3_infobar_loc_pane_ParamLimits

0xe73f,	// (0x00093557) image3_infobar_loc_pane

0xe753,	// (0x0009356b) image3_infobar_time_pane_ParamLimits

0xe753,	// (0x0009356b) image3_infobar_time_pane

0x3de5,	// (0x00088bfd) image3_infobar_time_pane_g1

0xe763,	// (0x0009357b) image3_infobar_time_pane_t1

0x3de5,	// (0x00088bfd) image3_infobar_loc_pane_g1

0xe771,	// (0x00093589) image3_infobar_loc_pane_g2

0x0001,

0xfd55,	// (0x00094b6d) image3_infobar_loc_pane_g

0xe779,	// (0x00093591) image3_infobar_loc_pane_t1

0x3de5,	// (0x00088bfd) image3_infobar_fav_pane_g1

0xe787,	// (0x0009359f) image3_infobar_fav_pane_g2

0x0001,

0xfd5a,	// (0x00094b72) image3_infobar_fav_pane_g

0xe78f,	// (0x000935a7) fs_bigclock_status_battery_pane

0xe798,	// (0x000935b0) fs_bigclock_status_signal_pane

0xe7a1,	// (0x000935b9) fs_bigclock_status_title_pane

0xe7aa,	// (0x000935c2) fs_bigclock_status_signal_pane_g1

0xe7b3,	// (0x000935cb) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd5f,	// (0x00094b77) fs_bigclock_status_signal_pane_g

0xe7bb,	// (0x000935d3) fs_bigclock_status_battery_pane_g1

0xe7c4,	// (0x000935dc) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd64,	// (0x00094b7c) fs_bigclock_status_battery_pane_g

0xe7cc,	// (0x000935e4) fs_bigclock_status_title_pane_t1

0xa619,	// (0x0008f431) main_fs_bigclock_clock_pane_g1

0xa619,	// (0x0008f431) main_fs_bigclock_clock_pane_g2

0xa62a,	// (0x0008f442) main_fs_bigclock_clock_pane_g3

0xa62a,	// (0x0008f442) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd69,	// (0x00094b81) main_fs_bigclock_clock_pane_g

0xa63d,	// (0x0008f455) main_fs_bigclock_clock_pane_t1

0xa653,	// (0x0008f46b) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd72,	// (0x00094b8a) main_fs_bigclock_clock_pane_t

0xe7da,	// (0x000935f2) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe7da,	// (0x000935f2) list_single_fs_bigclock_indicator_pane

0xe7eb,	// (0x00093603) list_single_fs_bigclock_pane_ParamLimits

0xe7eb,	// (0x00093603) list_single_fs_bigclock_pane

0xe811,	// (0x00093629) main_fs_bigclock_indicator_pane_t1

0xe820,	// (0x00093638) list_single_fs_bigclock_pane_g1

0xe828,	// (0x00093640) list_single_fs_bigclock_pane_t1

0x3de5,	// (0x00088bfd) main_fs_bigclock_swipe_pane_g1

0xe86b,	// (0x00093683) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd83,	// (0x00094b9b) main_fs_bigclock_swipe_pane_g

0xe873,	// (0x0009368b) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe873,	// (0x0009368b) main_fs_bigclock_swipe_pane_t1

0x5264,	// (0x0008a07c) call_type_pane_ParamLimits

0x0749,	// (0x00085561) main_btmg_pane

0xe4a6,	// (0x000932be) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe4a6,	// (0x000932be) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcf6,	// (0x00094b0e) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcf6,	// (0x00094b0e) list_single_cale_mrui_row_pane_g

0xe62b,	// (0x00093443) list_recal_vselct_arw_lo_pane

0xe633,	// (0x0009344b) list_recal_vselct_arw_up_pane

0xe63b,	// (0x00093453) list_recal_vselct_pane

0xa6ad,	// (0x0008f4c5) btmg_button_pane

0xa6b7,	// (0x0008f4cf) main_btmg_pane_g1

0x0749,	// (0x00085561) bg_button_pane_cp044

0xe890,	// (0x000936a8) btmg_button_pane_t1

0x1300,	// (0x00086118) aid_listscroll_gen

0x0de3,	// (0x00085bfb) main_cntbar_detail_pane

0xe19b,	// (0x00092fb3) list_cmail_folder_pane

0x1f47,	// (0x00086d5f) sp_fs_scroll_pane_cp03_ParamLimits

0xa6c1,	// (0x0008f4d9) list_single_fs_dyc_pane_cp01_ParamLimits

0xa6c1,	// (0x0008f4d9) list_single_fs_dyc_pane_cp01

0xe89e,	// (0x000936b6) aid_size_cmail_indent

0xe8a7,	// (0x000936bf) list_single_dyc_row_pane_cp01

0xa702,	// (0x0008f51a) cntbar_detail_list_pane_ParamLimits

0xa702,	// (0x0008f51a) cntbar_detail_list_pane

0xa74e,	// (0x0008f566) main_cntbar_detail_cont_pane_ParamLimits

0xa74e,	// (0x0008f566) main_cntbar_detail_cont_pane

0x1f47,	// (0x00086d5f) scroll_pane_cp032_ParamLimits

0x1f47,	// (0x00086d5f) scroll_pane_cp032

0xa762,	// (0x0008f57a) cntbar_detail_list_event_pane_ParamLimits

0xa762,	// (0x0008f57a) cntbar_detail_list_event_pane

0xa712,	// (0x0008f52a) cntbar_detail_list_shct_pane

0x450d,	// (0x00089325) aid_list_gen

0xe8b0,	// (0x000936c8) aid_scroll

0xe8b9,	// (0x000936d1) aid_size_touch_scroll_bar

0x9be1,	// (0x0008e9f9) aid_list_double

0xe8c2,	// (0x000936da) aid_list_single

0xe8c2,	// (0x000936da) aid_list_single_lg

0xe8cb,	// (0x000936e3) aid_list_z_g_a_sm

0xe8d3,	// (0x000936eb) aid_list_z_g_d

0xe8db,	// (0x000936f3) aid_txt_z_prm

0xa772,	// (0x0008f58a) aid_txt_z_prm_cp01

0xa780,	// (0x0008f598) aid_txt_z_sec

0xa78e,	// (0x0008f5a6) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa78e,	// (0x0008f5a6) main_cntbar_detail_cont_pane_g1

0xa7a2,	// (0x0008f5ba) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa7a2,	// (0x0008f5ba) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd88,	// (0x00094ba0) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd88,	// (0x00094ba0) main_cntbar_detail_cont_pane_g

0xe8e9,	// (0x00093701) main_cntbar_detail_cont_pane_t1

0xe8f7,	// (0x0009370f) main_cntbar_detail_cont_pane_t2

0xe905,	// (0x0009371d) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd8d,	// (0x00094ba5) main_cntbar_detail_cont_pane_t

0xa7b2,	// (0x0008f5ca) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa7b2,	// (0x0008f5ca) cell_cntbar_detail_list_shct_pane

0xe913,	// (0x0009372b) cntbar_detail_list_shct_pane_g1

0xe91c,	// (0x00093734) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd94,	// (0x00094bac) cntbar_detail_list_shct_pane_g

0xa7c6,	// (0x0008f5de) cntbar_detail_list_event_pane_g1_ParamLimits

0xa7c6,	// (0x0008f5de) cntbar_detail_list_event_pane_g1

0xa7d2,	// (0x0008f5ea) cntbar_detail_list_event_pane_g2_ParamLimits

0xa7d2,	// (0x0008f5ea) cntbar_detail_list_event_pane_g2

0x0005,

0xfd99,	// (0x00094bb1) cntbar_detail_list_event_pane_g_ParamLimits

0xfd99,	// (0x00094bb1) cntbar_detail_list_event_pane_g

0xa83e,	// (0x0008f656) cntbar_detail_list_event_pane_t1_ParamLimits

0xa83e,	// (0x0008f656) cntbar_detail_list_event_pane_t1

0xa853,	// (0x0008f66b) cntbar_detail_list_event_pane_t2_ParamLimits

0xa853,	// (0x0008f66b) cntbar_detail_list_event_pane_t2

0x0002,

0xfda6,	// (0x00094bbe) cntbar_detail_list_event_pane_t_ParamLimits

0xfda6,	// (0x00094bbe) cntbar_detail_list_event_pane_t

0x3de5,	// (0x00088bfd) cell_cntbar_detail_list_shct_pane_g1

0xbd21,	// (0x00090b39) navi_pane_mv_g3

0x0de3,	// (0x00085bfb) main_cntbar_detail_pane_ParamLimits

0x0749,	// (0x00085561) main_notif_wgt_pane

0xec01,	// (0x00093a19) aid_tch_main_mp4_pane_g4

0xee0d,	// (0x00093c25) popup_slider_window_cp02

0xe621,	// (0x00093439) list_recal_day_event_pane

0xa6d6,	// (0x0008f4ee) cntbar_detail_btn_pane_ParamLimits

0xa6d6,	// (0x0008f4ee) cntbar_detail_btn_pane

0xa6ec,	// (0x0008f504) cntbar_detail_btn_pane_cp01_ParamLimits

0xa6ec,	// (0x0008f504) cntbar_detail_btn_pane_cp01

0xa712,	// (0x0008f52a) cntbar_detail_list_shct_pane_ParamLimits

0xa722,	// (0x0008f53a) cntbar_detail_pane_g1_ParamLimits

0xa722,	// (0x0008f53a) cntbar_detail_pane_g1

0xa732,	// (0x0008f54a) cntbar_detail_pane_t1_ParamLimits

0xa732,	// (0x0008f54a) cntbar_detail_pane_t1

0xa7de,	// (0x0008f5f6) cntbar_detail_list_event_pane_g3_ParamLimits

0xa7de,	// (0x0008f5f6) cntbar_detail_list_event_pane_g3

0xa7f6,	// (0x0008f60e) cntbar_detail_list_event_pane_g4_ParamLimits

0xa7f6,	// (0x0008f60e) cntbar_detail_list_event_pane_g4

0xa80e,	// (0x0008f626) cntbar_detail_list_event_pane_g5_ParamLimits

0xa80e,	// (0x0008f626) cntbar_detail_list_event_pane_g5

0xa826,	// (0x0008f63e) cntbar_detail_list_event_pane_g6_ParamLimits

0xa826,	// (0x0008f63e) cntbar_detail_list_event_pane_g6

0xa868,	// (0x0008f680) cntbar_detail_list_event_pane_t3_ParamLimits

0xa868,	// (0x0008f680) cntbar_detail_list_event_pane_t3

0xa87a,	// (0x0008f692) popup_notif_wgt_window_ParamLimits

0xa87a,	// (0x0008f692) popup_notif_wgt_window

0xa893,	// (0x0008f6ab) popup_submenu_window_cp01_ParamLimits

0xa893,	// (0x0008f6ab) popup_submenu_window_cp01

0x3bf8,	// (0x00088a10) bg_popup_window_pane_cp10

0xe925,	// (0x0009373d) listscroll_notif_wgt_pane

0xe937,	// (0x0009374f) list_notif_wgt_window

0xe940,	// (0x00093758) scroll_pane_cp033

0xa8a9,	// (0x0008f6c1) list_notif_wgt_row_pane_ParamLimits

0xa8a9,	// (0x0008f6c1) list_notif_wgt_row_pane

0xe949,	// (0x00093761) aid_size_list_notif_wgt_del

0xe956,	// (0x0009376e) list_notif_wgt_row_pane_g1

0xe962,	// (0x0009377a) list_notif_wgt_row_pane_g2

0xe971,	// (0x00093789) list_notif_wgt_row_pane_g3

0x0002,

0xfdad,	// (0x00094bc5) list_notif_wgt_row_pane_g

0xe97e,	// (0x00093796) list_notif_wgt_row_pane_t1

0xe994,	// (0x000937ac) list_notif_wgt_row_pane_t2

0xe9a6,	// (0x000937be) list_notif_wgt_row_pane_t3

0x0002,

0xfdb4,	// (0x00094bcc) list_notif_wgt_row_pane_t

0xd0a8,	// (0x00091ec0) list_recal_day_event_pane_g1

0xe9b8,	// (0x000937d0) list_recal_day_event_pane_t1

0x0749,	// (0x00085561) bg_button_pane_cp045

0xe9c7,	// (0x000937df) cntbar_detail_btn_pane_t1

0x1314,	// (0x0008612c) main_callh_pane_ParamLimits

0x1314,	// (0x0008612c) main_callh_pane

0x0749,	// (0x00085561) main_coverflow0_pane

0x0749,	// (0x00085561) main_wgtman_pane

0x9a51,	// (0x0008e869) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9a51,	// (0x0008e869) main_fs_bigclock_unlock_btn_pane

0xa0da,	// (0x0008eef2) bg_button_pane_cp16

0xa0ea,	// (0x0008ef02) cell_tport_appsw_pane_g3

0xa8b9,	// (0x0008f6d1) cf0_flow_pane_ParamLimits

0xa8b9,	// (0x0008f6d1) cf0_flow_pane

0xe9d5,	// (0x000937ed) listscroll_cf0_pane

0xe9e0,	// (0x000937f8) main_cf0_pane_g1

0xa8ce,	// (0x0008f6e6) main_cf0_pane_t1_ParamLimits

0xa8ce,	// (0x0008f6e6) main_cf0_pane_t1

0xa8e5,	// (0x0008f6fd) main_cf0_pane_t2_ParamLimits

0xa8e5,	// (0x0008f6fd) main_cf0_pane_t2

0x0001,

0xfdc0,	// (0x00094bd8) main_cf0_pane_t_ParamLimits

0xfdc0,	// (0x00094bd8) main_cf0_pane_t

0xe9f2,	// (0x0009380a) scroll_pane_cp11

0xa8fc,	// (0x0008f714) cf0_flow_pane_g1

0xa904,	// (0x0008f71c) cf0_flow_pane_g2

0x0001,

0xfdc5,	// (0x00094bdd) cf0_flow_pane_g

0xa90c,	// (0x0008f724) cf0_flow_pane_t1

0x0749,	// (0x00085561) main_call6_pane

0x0749,	// (0x00085561) main_calllock_pane

0xa91a,	// (0x0008f732) call6_btn_grp_pane_ParamLimits

0xa91a,	// (0x0008f732) call6_btn_grp_pane

0xa934,	// (0x0008f74c) call6_pane_g1_ParamLimits

0xa934,	// (0x0008f74c) call6_pane_g1

0xa94a,	// (0x0008f762) popup_call6_1st_window_ParamLimits

0xa94a,	// (0x0008f762) popup_call6_1st_window

0xa95b,	// (0x0008f773) popup_call6_2nd_window_ParamLimits

0xa95b,	// (0x0008f773) popup_call6_2nd_window

0xa96c,	// (0x0008f784) cell_call6_btn_pane_ParamLimits

0xa96c,	// (0x0008f784) cell_call6_btn_pane

0x3bf8,	// (0x00088a10) bg_popup_call2_in_pane_cp03

0xe9fd,	// (0x00093815) popup_call6_1st_window_g1

0xea05,	// (0x0009381d) popup_call6_1st_window_g2

0xea0d,	// (0x00093825) popup_call6_1st_window_g3

0x0002,

0xfdca,	// (0x00094be2) popup_call6_1st_window_g

0xea15,	// (0x0009382d) popup_call6_1st_window_t1

0xea24,	// (0x0009383c) popup_call6_1st_window_t2

0xea32,	// (0x0009384a) popup_call6_1st_window_t3

0x0002,

0xfdd1,	// (0x00094be9) popup_call6_1st_window_t

0x3bf8,	// (0x00088a10) bg_popup_call2_in_pane_cp04

0xea40,	// (0x00093858) popup_call6_2nd_window_g1

0xea48,	// (0x00093860) popup_call6_2nd_window_g2

0xea50,	// (0x00093868) popup_call6_2nd_window_g3

0x0002,

0xfdd8,	// (0x00094bf0) popup_call6_2nd_window_g

0xea58,	// (0x00093870) popup_call6_2nd_window_t1

0xb5a3,	// (0x000903bb) bg_button_pane_cp15

0xf06d,	// (0x00093e85) cell_call6_btn_pane_g1

0xf076,	// (0x00093e8e) cell_call6_btn_pane_t1

0xa97f,	// (0x0008f797) listscroll_wgtman_pane_ParamLimits

0xa97f,	// (0x0008f797) listscroll_wgtman_pane

0xa9a0,	// (0x0008f7b8) wgtman_btn_pane_ParamLimits

0xa9a0,	// (0x0008f7b8) wgtman_btn_pane

0xbb28,	// (0x00090940) aid_scroll_copy1

0xea67,	// (0x0009387f) list_wgtman_pane

0xa9e3,	// (0x0008f7fb) wgtman_btn_pane_g1_ParamLimits

0xa9e3,	// (0x0008f7fb) wgtman_btn_pane_g1

0xaa0f,	// (0x0008f827) wgtman_btn_pane_t1_ParamLimits

0xaa0f,	// (0x0008f827) wgtman_btn_pane_t1

0xea71,	// (0x00093889) wgtman_btn_pane_t2_ParamLimits

0xea71,	// (0x00093889) wgtman_btn_pane_t2

0x0001,

0xfddf,	// (0x00094bf7) wgtman_btn_pane_t_ParamLimits

0xfddf,	// (0x00094bf7) wgtman_btn_pane_t

0xaa4c,	// (0x0008f864) listrow_wgtman_pane_ParamLimits

0xaa4c,	// (0x0008f864) listrow_wgtman_pane

0xaa5e,	// (0x0008f876) listrow_wgtman_pane_g1

0xaa6b,	// (0x0008f883) listrow_wgtman_pane_g2

0x0001,

0xfde4,	// (0x00094bfc) listrow_wgtman_pane_g

0xaa89,	// (0x0008f8a1) listrow_wgtman_pane_t1

0xaaa1,	// (0x0008f8b9) listrow_wgtman_pane_t2

0x0001,

0xfde9,	// (0x00094c01) listrow_wgtman_pane_t

0xaac7,	// (0x0008f8df) wait_bar_pane_cp09

0xea88,	// (0x000938a0) main_calllock_btn_pane

0xea92,	// (0x000938aa) main_calllock_pane_g1

0x0749,	// (0x00085561) bg_button_pane_cp17

0xea9a,	// (0x000938b2) main_calllock_btn_pane_g1

0xeaa3,	// (0x000938bb) main_calllock_btn_pane_t1

0x0749,	// (0x00085561) main_dialer3_pane

0x0749,	// (0x00085561) main_fmrd2_pane

0x3de5,	// (0x00088bfd) main_fs_bigclock_unlock_btn_pane_g1

0xaae1,	// (0x0008f8f9) main_fs_bigclock_unlock_btn_pane_t1

0xaaef,	// (0x0008f907) area_fmrd2_info_pane_ParamLimits

0xaaef,	// (0x0008f907) area_fmrd2_info_pane

0xab00,	// (0x0008f918) area_fmrd2_visual_pane_ParamLimits

0xab00,	// (0x0008f918) area_fmrd2_visual_pane

0xab0e,	// (0x0008f926) fmrd2_indi_pane_ParamLimits

0xab0e,	// (0x0008f926) fmrd2_indi_pane

0xab1b,	// (0x0008f933) area_fmrd2_visual_pane_g1

0xab23,	// (0x0008f93b) area_fmrd2_visual_pane_t1

0xab33,	// (0x0008f94b) area_fmrd2_visual_pane_t2

0xab43,	// (0x0008f95b) area_fmrd2_visual_pane_t3

0x0002,

0xfdf3,	// (0x00094c0b) area_fmrd2_visual_pane_t

0xab53,	// (0x0008f96b) area_fmrd2_info_pane_g1

0xab5b,	// (0x0008f973) area_fmrd2_info_pane_t1

0xab6b,	// (0x0008f983) area_fmrd2_info_pane_t2

0xab7b,	// (0x0008f993) area_fmrd2_info_pane_t3

0xab8b,	// (0x0008f9a3) area_fmrd2_info_pane_t4

0x0003,

0xfdfa,	// (0x00094c12) area_fmrd2_info_pane_t

0xab99,	// (0x0008f9b1) fmrd2_indi_pane_t1

0xaba9,	// (0x0008f9c1) fmrd2_indi_pane_t2

0xabb9,	// (0x0008f9d1) fmrd2_indi_pane_t3

0x0002,

0xfe03,	// (0x00094c1b) fmrd2_indi_pane_t

0xdc9f,	// (0x00092ab7) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdc9f,	// (0x00092ab7) list_single_fs_bigclock_indicator_pane_g5

0xdd50,	// (0x00092b68) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdd50,	// (0x00092b68) list_single_fs_bigclock_indicator_pane_t5

0xa275,	// (0x0008f08d) aid_cell_bcale_month_pane_ParamLimits

0xa275,	// (0x0008f08d) aid_cell_bcale_month_pane

0xa293,	// (0x0008f0ab) bcale_month_pane_ParamLimits

0xa293,	// (0x0008f0ab) bcale_month_pane

0xa2b7,	// (0x0008f0cf) bcale_preview_pane_ParamLimits

0xa2b7,	// (0x0008f0cf) bcale_preview_pane

0xe828,	// (0x00093640) list_single_fs_bigclock_pane_t1_ParamLimits

0xe847,	// (0x0009365f) list_single_fs_bigclock_pane_t2_ParamLimits

0xe847,	// (0x0009365f) list_single_fs_bigclock_pane_t2

0x0001,

0xfd7e,	// (0x00094b96) list_single_fs_bigclock_pane_t_ParamLimits

0xfd7e,	// (0x00094b96) list_single_fs_bigclock_pane_t

0xaad9,	// (0x0008f8f1) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdee,	// (0x00094c06) main_fs_bigclock_unlock_btn_pane_g

0xabc9,	// (0x0008f9e1) aid_dia3_key_size_ParamLimits

0xabc9,	// (0x0008f9e1) aid_dia3_key_size

0xabd8,	// (0x0008f9f0) aid_dia3_listrow_size_ParamLimits

0xabd8,	// (0x0008f9f0) aid_dia3_listrow_size

0xabed,	// (0x0008fa05) dia3_keypad_fun_pane_ParamLimits

0xabed,	// (0x0008fa05) dia3_keypad_fun_pane

0xac09,	// (0x0008fa21) dia3_keypad_num_pane_ParamLimits

0xac09,	// (0x0008fa21) dia3_keypad_num_pane

0xac24,	// (0x0008fa3c) dia3_listscroll_pane_ParamLimits

0xac24,	// (0x0008fa3c) dia3_listscroll_pane

0xac37,	// (0x0008fa4f) dia3_numentry_pane_ParamLimits

0xac37,	// (0x0008fa4f) dia3_numentry_pane

0xeab2,	// (0x000938ca) dia3_list_pane

0xeabd,	// (0x000938d5) scroll_pane_cp12

0x0749,	// (0x00085561) bg_dia3_numentry_pane

0xac4f,	// (0x0008fa67) dia3_numentry_pane_t1

0xac5e,	// (0x0008fa76) cell_dia3_key_num_pane

0xac66,	// (0x0008fa7e) cell_dia3_key0_fun_pane_ParamLimits

0xac66,	// (0x0008fa7e) cell_dia3_key0_fun_pane

0xac7a,	// (0x0008fa92) cell_dia3_key1_fun_pane_ParamLimits

0xac7a,	// (0x0008fa92) cell_dia3_key1_fun_pane

0xac92,	// (0x0008faaa) dia3_listrow_pane

0xd9f2,	// (0x0009280a) bg_dia3_numentry_pane_g1

0x0749,	// (0x00085561) bg_button_pane_cp21

0xeac8,	// (0x000938e0) cell_dia3_key_num_pane_t1

0xead6,	// (0x000938ee) cell_dia3_key_num_pane_t2

0xeae5,	// (0x000938fd) cell_dia3_key_num_pane_t3

0xeaf4,	// (0x0009390c) cell_dia3_key_num_pane_t4

0x0003,

0xfe0a,	// (0x00094c22) cell_dia3_key_num_pane_t

0x0749,	// (0x00085561) bg_button_pane_cp19

0xaca4,	// (0x0008fabc) cell_dia3_key0_fun_pane_g1

0x0749,	// (0x00085561) bg_button_pane_cp20

0xacac,	// (0x0008fac4) cell_dia3_key1_fun_pane_g1

0xacb4,	// (0x0008facc) area_left_week_number_pane

0xacc0,	// (0x0008fad8) area_top_day_name_pane

0xacd3,	// (0x0008faeb) frame_month_view_pane

0xeb03,	// (0x0009391b) grid_month_view_pane

0xace6,	// (0x0008fafe) cell_top_day_name_pane_ParamLimits

0xace6,	// (0x0008fafe) cell_top_day_name_pane

0xad13,	// (0x0008fb2b) cell_area_left_week_number_pane_ParamLimits

0xad13,	// (0x0008fb2b) cell_area_left_week_number_pane

0xad27,	// (0x0008fb3f) cell_month_view_pane_ParamLimits

0xad27,	// (0x0008fb3f) cell_month_view_pane

0xeb11,	// (0x00093929) frm_month_g1

0xad54,	// (0x0008fb6c) frm_month_g2

0xad67,	// (0x0008fb7f) frm_month_g3

0xad7a,	// (0x0008fb92) frm_month_g4

0xad8d,	// (0x0008fba5) frm_month_g5

0xada0,	// (0x0008fbb8) frm_month_g6

0xadb3,	// (0x0008fbcb) frm_month_g7

0xeb1e,	// (0x00093936) frm_month_g8

0xadc6,	// (0x0008fbde) frm_month_g9

0xadd6,	// (0x0008fbee) frm_month_g10

0xade6,	// (0x0008fbfe) frm_month_g11

0xadf6,	// (0x0008fc0e) frm_month_g12

0xae08,	// (0x0008fc20) frm_month_g13

0xae1a,	// (0x0008fc32) frm_month_g14

0xae2e,	// (0x0008fc46) frm_month_g15

0xae42,	// (0x0008fc5a) frm_month_g16

0x000f,

0xfe13,	// (0x00094c2b) frm_month_g

0xeb2b,	// (0x00093943) cell_top_day_name_pane_t1

0xae56,	// (0x0008fc6e) cell_area_left_week_number_pane_g1

0xae62,	// (0x0008fc7a) cell_area_left_week_number_pane_t1

0x3167,	// (0x00087f7f) cell_month_view_pane_g1

0xae75,	// (0x0008fc8d) cell_month_view_pane_t1

0x0749,	// (0x00085561) main_fps_pane

0xdfb1,	// (0x00092dc9) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xdfb1,	// (0x00092dc9) cmail_ddmenu_btn02_pane_cp1

0xdfcd,	// (0x00092de5) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdfcd,	// (0x00092de5) cmail_ddmenu_btn02_pane_cp2

0xa575,	// (0x0008f38d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa575,	// (0x0008f38d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd31,	// (0x00094b49) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd31,	// (0x00094b49) cmail_ddmenu_btn02_pane_g

0xa593,	// (0x0008f3ab) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa593,	// (0x0008f3ab) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd36,	// (0x00094b4e) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd36,	// (0x00094b4e) cmail_ddmenu_btn02_pane_t

0xae88,	// (0x0008fca0) fps_text_pane_ParamLimits

0xae88,	// (0x0008fca0) fps_text_pane

0xae9f,	// (0x0008fcb7) main_fps_pane_g1_ParamLimits

0xae9f,	// (0x0008fcb7) main_fps_pane_g1

0xaeb9,	// (0x0008fcd1) wait_bar_pane_cp010_ParamLimits

0xaeb9,	// (0x0008fcd1) wait_bar_pane_cp010

0xaeca,	// (0x0008fce2) fps_text_pane_t1_ParamLimits

0xaeca,	// (0x0008fce2) fps_text_pane_t1

0x01bb,	// (0x00084fd3) cam4_image_uncrop_pane_g1

0x01c4,	// (0x00084fdc) cam4_image_uncrop_pane_g2

0x7caf,	// (0x0008cac7) cam4_image_uncrop_pane_g3

0x7cb8,	// (0x0008cad0) cam4_image_uncrop_pane_g4

0x0003,

0xf875,	// (0x0009468d) cam4_image_uncrop_pane_g

0xac92,	// (0x0008faaa) dia3_listrow_pane_ParamLimits

0x0749,	// (0x00085561) main_phob2_pane

0xa0ab,	// (0x0008eec3) cell_tport_appsw_pane_cp02_ParamLimits

0xa0ab,	// (0x0008eec3) cell_tport_appsw_pane_cp02

0xa0bf,	// (0x0008eed7) cell_tport_appsw_pane_cp03_ParamLimits

0xa0bf,	// (0x0008eed7) cell_tport_appsw_pane_cp03

0x0749,	// (0x00085561) phob2_contact_card_pane

0x0749,	// (0x00085561) phob2_listscroll_pane

0xeb3e,	// (0x00093956) phob2_list_pane

0xeb46,	// (0x0009395e) scroll_pane_cp034

0xaee2,	// (0x0008fcfa) phob2_cc_data_pane_ParamLimits

0xaee2,	// (0x0008fcfa) phob2_cc_data_pane

0xaf01,	// (0x0008fd19) phob2_cc_listscroll_pane_ParamLimits

0xaf01,	// (0x0008fd19) phob2_cc_listscroll_pane

0xaa4c,	// (0x0008f864) list_double_large_graphic_phob2_pane_ParamLimits

0xaa4c,	// (0x0008f864) list_double_large_graphic_phob2_pane

0xaf1f,	// (0x0008fd37) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xaf1f,	// (0x0008fd37) list_double_large_graphic_phob2_pane_g1

0xaf2c,	// (0x0008fd44) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xaf2c,	// (0x0008fd44) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe34,	// (0x00094c4c) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe34,	// (0x00094c4c) list_double_large_graphic_phob2_pane_g

0xaf52,	// (0x0008fd6a) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xaf52,	// (0x0008fd6a) list_double_large_graphic_phob2_pane_t1

0xaf67,	// (0x0008fd7f) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xaf67,	// (0x0008fd7f) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe3d,	// (0x00094c55) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe3d,	// (0x00094c55) list_double_large_graphic_phob2_pane_t

0x0749,	// (0x00085561) list_highlight_pane_cp024

0xeb4e,	// (0x00093966) phob2_cc_button_pane

0xaf7c,	// (0x0008fd94) phob2_cc_data_pane_g1_ParamLimits

0xaf7c,	// (0x0008fd94) phob2_cc_data_pane_g1

0xaf93,	// (0x0008fdab) phob2_cc_data_pane_g2_ParamLimits

0xaf93,	// (0x0008fdab) phob2_cc_data_pane_g2

0x0001,

0xfe42,	// (0x00094c5a) phob2_cc_data_pane_g_ParamLimits

0xfe42,	// (0x00094c5a) phob2_cc_data_pane_g

0xafa5,	// (0x0008fdbd) phob2_cc_data_pane_t1_ParamLimits

0xafa5,	// (0x0008fdbd) phob2_cc_data_pane_t1

0xafbd,	// (0x0008fdd5) phob2_cc_data_pane_t2_ParamLimits

0xafbd,	// (0x0008fdd5) phob2_cc_data_pane_t2

0xafd5,	// (0x0008fded) phob2_cc_data_pane_t3_ParamLimits

0xafd5,	// (0x0008fded) phob2_cc_data_pane_t3

0x0002,

0xfe47,	// (0x00094c5f) phob2_cc_data_pane_t_ParamLimits

0xfe47,	// (0x00094c5f) phob2_cc_data_pane_t

0x001b,	// (0x00084e33) phob2_cc_list_pane_ParamLimits

0x001b,	// (0x00084e33) phob2_cc_list_pane

0xd13f,	// (0x00091f57) scroll_pane_cp035_ParamLimits

0xd13f,	// (0x00091f57) scroll_pane_cp035

0x0de3,	// (0x00085bfb) bg_button_pane_cp033

0x0027,	// (0x00084e3f) phob2_cc_button_pane_g1

0x0033,	// (0x00084e4b) phob2_cc_button_pane_t1

0x0048,	// (0x00084e60) phob2_cc_button_pane_t2

0x0001,

0xfe4e,	// (0x00094c66) phob2_cc_button_pane_t

0xafed,	// (0x0008fe05) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xafed,	// (0x0008fe05) list_double_large_graphic_phob2_cc_pane

0xb01d,	// (0x0008fe35) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb01d,	// (0x0008fe35) list_double_large_graphic_phob2_cc_pane_g1

0xb029,	// (0x0008fe41) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xb029,	// (0x0008fe41) list_double_large_graphic_phob2_cc_pane_g2

0xb035,	// (0x0008fe4d) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xb035,	// (0x0008fe4d) list_double_large_graphic_phob2_cc_pane_g3

0xb041,	// (0x0008fe59) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xb041,	// (0x0008fe59) list_double_large_graphic_phob2_cc_pane_g4

0xb04d,	// (0x0008fe65) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xb04d,	// (0x0008fe65) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe53,	// (0x00094c6b) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe53,	// (0x00094c6b) list_double_large_graphic_phob2_cc_pane_g

0xb059,	// (0x0008fe71) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xb059,	// (0x0008fe71) list_double_large_graphic_phob2_cc_pane_t1

0xb082,	// (0x0008fe9a) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xb082,	// (0x0008fe9a) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe5e,	// (0x00094c76) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe5e,	// (0x00094c76) list_double_large_graphic_phob2_cc_pane_t

0x015b,	// (0x00084f73) list_highlight_pane_cp025_ParamLimits

0x015b,	// (0x00084f73) list_highlight_pane_cp025

0x0de3,	// (0x00085bfb) bg_button_pane_cp033_ParamLimits

0x0027,	// (0x00084e3f) phob2_cc_button_pane_g1_ParamLimits

0x0033,	// (0x00084e4b) phob2_cc_button_pane_t1_ParamLimits

0x0048,	// (0x00084e60) phob2_cc_button_pane_t2_ParamLimits

0xfe4e,	// (0x00094c66) phob2_cc_button_pane_t_ParamLimits

0x30b1,	// (0x00087ec9) popup_wgtman_window

0xcf4a,	// (0x00091d62) scroll_pane_cp038

0xa9c5,	// (0x0008f7dd) wgtman_btn_pane_cp_01_ParamLimits

0xa9c5,	// (0x0008f7dd) wgtman_btn_pane_cp_01

0x0169,	// (0x00084f81) wgtman_content_pane

0x0172,	// (0x00084f8a) wgtman_heading_pane

0x0749,	// (0x00085561) bg_heading_pane_cp02

0x017b,	// (0x00084f93) wgtman_heading_pane_g1

0x0183,	// (0x00084f9b) wgtman_heading_pane_t1

0x0191,	// (0x00084fa9) scroll_pane_cp036

0x0199,	// (0x00084fb1) wgtman_list_pane

0x01a1,	// (0x00084fb9) wgtman_list_pane_t1_ParamLimits

0x01a1,	// (0x00084fb9) wgtman_list_pane_t1

0xee99,	// (0x00093cb1) cam4_grid_pane

0x88f2,	// (0x0008d70a) bg_button_pane_cp015_ParamLimits

0x8902,	// (0x0008d71a) bg_button_pane_cp016_ParamLimits

0x8915,	// (0x0008d72d) bg_button_pane_cp017_ParamLimits

0x896b,	// (0x0008d783) popup_vitu2_query_window_g3_ParamLimits

0x896b,	// (0x0008d783) popup_vitu2_query_window_g3

0x8a28,	// (0x0008d840) popup_vitu2_query_window_t6_ParamLimits

0x8a28,	// (0x0008d840) popup_vitu2_query_window_t6

0x8a53,	// (0x0008d86b) popup_vitu2_query_window_t7_ParamLimits

0x8a53,	// (0x0008d86b) popup_vitu2_query_window_t7

0x01bb,	// (0x00084fd3) cam4_grid_pane_g1

0x01c4,	// (0x00084fdc) cam4_grid_pane_g2

0x01cd,	// (0x00084fe5) cam4_grid_pane_g3

0x01d6,	// (0x00084fee) cam4_grid_pane_g4

0x0003,

0xfe63,	// (0x00094c7b) cam4_grid_pane_g

0x3f07,	// (0x00088d1f) aid_placing_vt_slider_lsc_ParamLimits

0x4262,	// (0x0008907a) vidtel_button_pane_ParamLimits

0x4262,	// (0x0008907a) vidtel_button_pane

0x0749,	// (0x00085561) bg_button_pane_cp034

0x01e1,	// (0x00084ff9) vidtel_button_pane_g1

0x01e9,	// (0x00085001) vidtel_button_pane_t1

0xd086,	// (0x00091e9e) aid_size_vtel_slider_touch

0xd13f,	// (0x00091f57) scroll_pane_cp039

0x9745,	// (0x0008e55d) ncim_query_button_pane_cp01_ParamLimits

0x9764,	// (0x0008e57c) ncimui_query_pane_g1_ParamLimits

0x0de3,	// (0x00085bfb) input_focus_pane_cp012_ParamLimits

0xda30,	// (0x00092848) ncim_query_entry_pane_t1_ParamLimits

0xd13f,	// (0x00091f57) scroll_pane_cp039_ParamLimits

0xbc0c,	// (0x00090a24) navi_pane_bcale_mc_g1

0xbc14,	// (0x00090a2c) navi_pane_bcale_mc_t1

0xe001,	// (0x00092e19) main_sp_fs_email_pane_g1

0xe00d,	// (0x00092e25) main_sp_fs_email_pane_g2

0x0001,

0xfc66,	// (0x00094a7e) main_sp_fs_email_pane_g

0xe4b2,	// (0x000932ca) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe4b2,	// (0x000932ca) list_single_cale_mrui_row_pane_g3

0xa5b3,	// (0x0008f3cb) list_single_recal_day_pane_g5_event_pane

0xe692,	// (0x000934aa) list_single_recal_day_pane_g7

0x01ff,	// (0x00085017) list_recal_day_event_pane_cp01

0x0208,	// (0x00085020) list_recal_vselct_arw_lo_pane_cp01

0x0210,	// (0x00085028) list_recal_vselct_arw_up_pane_cp01

0x0218,	// (0x00085030) list_recal_vselct_pane_cp01

0xd0a8,	// (0x00091ec0) list_recal_day_event_pane_cp01_g1

0xeb56,	// (0x0009396e) list_recal_day_event_pane_cp01_t1

0xe69a,	// (0x000934b2) list_single_recal_day_pane_t1_ParamLimits

0xe6ac,	// (0x000934c4) list_single_recal_day_pane_t2_ParamLimits

0xfd46,	// (0x00094b5e) list_single_recal_day_pane_t_ParamLimits

0x0dc1,	// (0x00085bd9) bg_notes_pane_ParamLimits

0x3307,	// (0x0008811f) list_notes_pane_ParamLimits

0x3315,	// (0x0008812d) scroll_pane_cp06_ParamLimits

0x333d,	// (0x00088155) main_notes_pane_ParamLimits

0x0de3,	// (0x00085bfb) main_welc_pane

0xb0c7,	// (0x0008fedf) main_welc_body_pane_ParamLimits

0xb0c7,	// (0x0008fedf) main_welc_body_pane

0xb0e5,	// (0x0008fefd) main_welc_opti_pane_ParamLimits

0xb0e5,	// (0x0008fefd) main_welc_opti_pane

0xb159,	// (0x0008ff71) main_welc_pane_t1_ParamLimits

0xb159,	// (0x0008ff71) main_welc_pane_t1

0xb2c0,	// (0x000900d8) main_welc_body_row_pane_ParamLimits

0xb2c0,	// (0x000900d8) main_welc_body_row_pane

0x0e3c,	// (0x00085c54) main_welc_opti_row_pane_ParamLimits

0x0e3c,	// (0x00085c54) main_welc_opti_row_pane

0x03e9,	// (0x00085201) main_welc_opti_row_pane_g1

0xb2d4,	// (0x000900ec) main_welc_opti_row_pane_t1

0x0400,	// (0x00085218) main_welc_body_row_pane_t1

0xe92f,	// (0x00093747) popup_notif_wgt_heading_pane

0xe949,	// (0x00093761) aid_size_list_notif_wgt_del_ParamLimits

0xe956,	// (0x0009376e) list_notif_wgt_row_pane_g1_ParamLimits

0xe962,	// (0x0009377a) list_notif_wgt_row_pane_g2_ParamLimits

0xe971,	// (0x00093789) list_notif_wgt_row_pane_g3_ParamLimits

0xfdad,	// (0x00094bc5) list_notif_wgt_row_pane_g_ParamLimits

0xe97e,	// (0x00093796) list_notif_wgt_row_pane_t1_ParamLimits

0xe994,	// (0x000937ac) list_notif_wgt_row_pane_t2_ParamLimits

0xe9a6,	// (0x000937be) list_notif_wgt_row_pane_t3_ParamLimits

0xfdb4,	// (0x00094bcc) list_notif_wgt_row_pane_t_ParamLimits

0xaa5e,	// (0x0008f876) listrow_wgtman_pane_g1_ParamLimits

0xaa6b,	// (0x0008f883) listrow_wgtman_pane_g2_ParamLimits

0xfde4,	// (0x00094bfc) listrow_wgtman_pane_g_ParamLimits

0xaa89,	// (0x0008f8a1) listrow_wgtman_pane_t1_ParamLimits

0xaaa1,	// (0x0008f8b9) listrow_wgtman_pane_t2_ParamLimits

0xfde9,	// (0x00094c01) listrow_wgtman_pane_t_ParamLimits

0xaac7,	// (0x0008f8df) wait_bar_pane_cp09_ParamLimits

0x0749,	// (0x00085561) bg_popup_heading_pane_cp02

0x040f,	// (0x00085227) popup_notif_wgt_heading_pane_g1

0x0417,	// (0x0008522f) popup_notif_wgt_heading_pane_t1

0x0749,	// (0x00085561) main_vids_pane

0x0749,	// (0x00085561) vids_listscroll_pane

0xb2e3,	// (0x000900fb) scroll_pane_cp040

0x0749,	// (0x00085561) vids_list_pane

0xb2ee,	// (0x00090106) vids_list_double_pane_ParamLimits

0xb2ee,	// (0x00090106) vids_list_double_pane

0xb2ff,	// (0x00090117) vids_list_double_pane_g1

0xb308,	// (0x00090120) vids_list_double_pane_t1

0xb318,	// (0x00090130) vids_list_double_pane_t2

0x0001,

0xfe82,	// (0x00094c9a) vids_list_double_pane_t

0xb595,	// (0x000903ad) main_ncimui_pane_ParamLimits

0x957b,	// (0x0008e393) main_ncimui_pane_g1_ParamLimits

0x9587,	// (0x0008e39f) main_ncimui_pane_g2_ParamLimits

0x9587,	// (0x0008e39f) main_ncimui_pane_g2

0x0001,

0xfb67,	// (0x0009497f) main_ncimui_pane_g_ParamLimits

0xfb67,	// (0x0009497f) main_ncimui_pane_g

0xb100,	// (0x0008ff18) main_welc_pane_g1_ParamLimits

0xb100,	// (0x0008ff18) main_welc_pane_g1

0xb115,	// (0x0008ff2d) main_welc_pane_g2_ParamLimits

0xb115,	// (0x0008ff2d) main_welc_pane_g2

0x0003,

0xfe6c,	// (0x00094c84) main_welc_pane_g_ParamLimits

0xfe6c,	// (0x00094c84) main_welc_pane_g

0x0dc1,	// (0x00085bd9) listscroll_mce_pane_ParamLimits

0xbd61,	// (0x00090b79) wait_bar_pane_cp10

0x1308,	// (0x00086120) main_cale_day_pane_ParamLimits

0x1308,	// (0x00086120) main_cale_week_pane_ParamLimits

0x0dc1,	// (0x00085bd9) main_messa_pane_ParamLimits

0x70ca,	// (0x0008bee2) main_clock2_btn_pane_ParamLimits

0x70ca,	// (0x0008bee2) main_clock2_btn_pane

0x1b0b,	// (0x00086923) main_clock2_btn_pane_cp01_ParamLimits

0x1b0b,	// (0x00086923) main_clock2_btn_pane_cp01

0xe43e,	// (0x00093256) list_cale_mrui_pane_ParamLimits

0xe9ea,	// (0x00093802) main_cf0_pane_g2

0x0001,

0xfdbb,	// (0x00094bd3) main_cf0_pane_g

0xacb4,	// (0x0008facc) area_left_week_number_pane_ParamLimits

0xacc0,	// (0x0008fad8) area_top_day_name_pane_ParamLimits

0xacd3,	// (0x0008faeb) frame_month_view_pane_ParamLimits

0xeb03,	// (0x0009391b) grid_month_view_pane_ParamLimits

0xeb11,	// (0x00093929) frm_month_g1_ParamLimits

0xad54,	// (0x0008fb6c) frm_month_g2_ParamLimits

0xad67,	// (0x0008fb7f) frm_month_g3_ParamLimits

0xad7a,	// (0x0008fb92) frm_month_g4_ParamLimits

0xad8d,	// (0x0008fba5) frm_month_g5_ParamLimits

0xada0,	// (0x0008fbb8) frm_month_g6_ParamLimits

0xadb3,	// (0x0008fbcb) frm_month_g7_ParamLimits

0xeb1e,	// (0x00093936) frm_month_g8_ParamLimits

0xadc6,	// (0x0008fbde) frm_month_g9_ParamLimits

0xadd6,	// (0x0008fbee) frm_month_g10_ParamLimits

0xade6,	// (0x0008fbfe) frm_month_g11_ParamLimits

0xadf6,	// (0x0008fc0e) frm_month_g12_ParamLimits

0xae08,	// (0x0008fc20) frm_month_g13_ParamLimits

0xae1a,	// (0x0008fc32) frm_month_g14_ParamLimits

0xae2e,	// (0x0008fc46) frm_month_g15_ParamLimits

0xae42,	// (0x0008fc5a) frm_month_g16_ParamLimits

0xfe13,	// (0x00094c2b) frm_month_g_ParamLimits

0xeb2b,	// (0x00093943) cell_top_day_name_pane_t1_ParamLimits

0xae56,	// (0x0008fc6e) cell_area_left_week_number_pane_g1_ParamLimits

0xae62,	// (0x0008fc7a) cell_area_left_week_number_pane_t1_ParamLimits

0x3167,	// (0x00087f7f) cell_month_view_pane_g1_ParamLimits

0xae75,	// (0x0008fc8d) cell_month_view_pane_t1_ParamLimits

0x0db9,	// (0x00085bd1) main_clock2_btn_pane_g1

0x046e,	// (0x00085286) main_clock2_btn_pane_t1

0x0de3,	// (0x00085bfb) listscroll_cmail_pane_ParamLimits

0xe001,	// (0x00092e19) main_sp_fs_email_pane_g1_ParamLimits

0xe00d,	// (0x00092e25) main_sp_fs_email_pane_g2_ParamLimits

0xfc66,	// (0x00094a7e) main_sp_fs_email_pane_g_ParamLimits

0xe602,	// (0x0009341a) list_recal_day_pane_ParamLimits

0xe613,	// (0x0009342b) mian_recal_day_pane_t1

0x9f4e,	// (0x0008ed66) list_single_dyc_row_text_pane_t4_ParamLimits

0x9f4e,	// (0x0008ed66) list_single_dyc_row_text_pane_t4

0x9f97,	// (0x0008edaf) list_single_dyc_row_text_pane_t5_ParamLimits

0x9f97,	// (0x0008edaf) list_single_dyc_row_text_pane_t5

0xe0d9,	// (0x00092ef1) list_single_dyc_row_text_pane_t6_ParamLimits

0xe0d9,	// (0x00092ef1) list_single_dyc_row_text_pane_t6

0xb693,	// (0x000904ab) aid_mgn_list_cale_time_pane

0xb595,	// (0x000903ad) main_gallery2_pane_ParamLimits

0x1b21,	// (0x00086939) main_clock2_pane_cp01_t1

0x1b31,	// (0x00086949) main_clock2_pane_cp01_t3

0x0001,

0xf74c,	// (0x00094564) main_clock2_pane_cp01_t

0x37f7,	// (0x0008860f) cale_week_scroll_pane_g16_ParamLimits

0x37f7,	// (0x0008860f) cale_week_scroll_pane_g16

0x3bf8,	// (0x00088a10) vorec_slider_pane

0x01e9,	// (0x00085001) vidtel_button_pane_t1_ParamLimits

0xa619,	// (0x0008f431) main_fs_bigclock_clock_pane_g1_ParamLimits

0xa619,	// (0x0008f431) main_fs_bigclock_clock_pane_g2_ParamLimits

0xa62a,	// (0x0008f442) main_fs_bigclock_clock_pane_g3_ParamLimits

0xa62a,	// (0x0008f442) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd69,	// (0x00094b81) main_fs_bigclock_clock_pane_g_ParamLimits

0xa63d,	// (0x0008f455) main_fs_bigclock_clock_pane_t1_ParamLimits

0xa653,	// (0x0008f46b) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd72,	// (0x00094b8a) main_fs_bigclock_clock_pane_t_ParamLimits

0x699f,	// (0x0008b7b7) main_mup3_lyrics_pane_ParamLimits

0x699f,	// (0x0008b7b7) main_mup3_lyrics_pane

0xb34e,	// (0x00090166) main_mup3_lyrics_pane_t1_ParamLimits

0xb34e,	// (0x00090166) main_mup3_lyrics_pane_t1

0xebeb,	// (0x00093a03) aid_main_mp4_pane_t1_area

0xebf5,	// (0x00093a0d) aid_main_mp4_pane_t2_area

0xeca1,	// (0x00093ab9) main_mp4_pane_g7_ParamLimits

0xeca1,	// (0x00093ab9) main_mp4_pane_g7

0xecad,	// (0x00093ac5) main_mp4_pane_g8_ParamLimits

0xecad,	// (0x00093ac5) main_mp4_pane_g8

0x7a82,	// (0x0008c89a) aid_call6_pane_g1_size

0xb007,	// (0x0008fe1f) list_double_large_graphic_phob2_other_pane_ParamLimits

0xb007,	// (0x0008fe1f) list_double_large_graphic_phob2_other_pane

0x518a,	// (0x00089fa2) list_double_large_graphic_phob2_other_pane_g1

0x0749,	// (0x00085561) list_highlight_pane_cp026

0x0de3,	// (0x00085bfb) main_welc_pane_ParamLimits

0x9db3,	// (0x0008ebcb) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x9db3,	// (0x0008ebcb) main_sp_fs_ctrlbar_pane_g3

0x9dcd,	// (0x0008ebe5) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x9dcd,	// (0x0008ebe5) main_sp_fs_ctrlbar_pane_g4

0x9e01,	// (0x0008ec19) toolbar2_fixed_button_pane_cp01

0x9e0c,	// (0x0008ec24) toolbar2_fixed_button_pane_cp02

0x9e19,	// (0x0008ec31) toolbar2_fixed_button_pane_cp03

0xb0ab,	// (0x0008fec3) list_welc_entry_pane_ParamLimits

0xb0ab,	// (0x0008fec3) list_welc_entry_pane

0xb12a,	// (0x0008ff42) main_welc_pane_g3_ParamLimits

0xb12a,	// (0x0008ff42) main_welc_pane_g3

0xb177,	// (0x0008ff8f) main_welc_pane_t2_ParamLimits

0xb177,	// (0x0008ff8f) main_welc_pane_t2

0xb191,	// (0x0008ffa9) main_welc_pane_t3_ParamLimits

0xb191,	// (0x0008ffa9) main_welc_pane_t3

0x0005,

0xfe75,	// (0x00094c8d) main_welc_pane_t_ParamLimits

0xfe75,	// (0x00094c8d) main_welc_pane_t

0xb243,	// (0x0009005b) welc_button_pane_ParamLimits

0xb243,	// (0x0009005b) welc_button_pane

0xb2ab,	// (0x000900c3) welc_service_logo_pane_ParamLimits

0xb2ab,	// (0x000900c3) welc_service_logo_pane

0xb36a,	// (0x00090182) list_single_welc_entry_pane_ParamLimits

0xb36a,	// (0x00090182) list_single_welc_entry_pane

0xb37b,	// (0x00090193) list_single_welc_entry_pane_g1

0xb383,	// (0x0009019b) list_single_welc_entry_pane_t1

0xb391,	// (0x000901a9) list_single_welc_entry_pane_t2

0x0001,

0xfe87,	// (0x00094c9f) list_single_welc_entry_pane_t

0x0749,	// (0x00085561) bg_button_pane_cp035

0x0509,	// (0x00085321) welc_button_pane_t1

0x0517,	// (0x0008532f) welc_service_logo_pane_g1

0x0520,	// (0x00085338) welc_service_logo_pane_g2

0x0001,

0xfe8c,	// (0x00094ca4) welc_service_logo_pane_g

0xb5a3,	// (0x000903bb) main_int_radio_pane

0x175b,	// (0x00086573) list_single_fs_dyc_pane_g1

0xaf38,	// (0x0008fd50) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xaf38,	// (0x0008fd50) list_double_large_graphic_phob2_pane_g3

0xaf44,	// (0x0008fd5c) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xaf44,	// (0x0008fd5c) list_double_large_graphic_phob2_pane_g4

0xb39f,	// (0x000901b7) main_int_radio1_pane_ParamLimits

0xb39f,	// (0x000901b7) main_int_radio1_pane

0x053b,	// (0x00085353) find_pane_cp02

0xb3bc,	// (0x000901d4) input_focus_pane_cp12_ParamLimits

0xb3bc,	// (0x000901d4) input_focus_pane_cp12

0xb3cc,	// (0x000901e4) input_focus_pane_cp13_ParamLimits

0xb3cc,	// (0x000901e4) input_focus_pane_cp13

0xb3e0,	// (0x000901f8) input_focus_pane_cp14_ParamLimits

0xb3e0,	// (0x000901f8) input_focus_pane_cp14

0x0580,	// (0x00085398) int_radio1_listscroll_pane

0xb3f4,	// (0x0009020c) main_int_radio1_pane_g1_ParamLimits

0xb3f4,	// (0x0009020c) main_int_radio1_pane_g1

0xb40c,	// (0x00090224) main_int_radio1_pane_t1_ParamLimits

0xb40c,	// (0x00090224) main_int_radio1_pane_t1

0xb427,	// (0x0009023f) main_int_radio1_pane_t2_ParamLimits

0xb427,	// (0x0009023f) main_int_radio1_pane_t2

0xb442,	// (0x0009025a) main_int_radio1_pane_t3_ParamLimits

0xb442,	// (0x0009025a) main_int_radio1_pane_t3

0xb45d,	// (0x00090275) main_int_radio1_pane_t4_ParamLimits

0xb45d,	// (0x00090275) main_int_radio1_pane_t4

0x05ed,	// (0x00085405) main_int_radio1_pane_t5_ParamLimits

0x05ed,	// (0x00085405) main_int_radio1_pane_t5

0xb46f,	// (0x00090287) main_int_radio1_pane_t6_ParamLimits

0xb46f,	// (0x00090287) main_int_radio1_pane_t6

0xb484,	// (0x0009029c) main_int_radio1_pane_t7_ParamLimits

0xb484,	// (0x0009029c) main_int_radio1_pane_t7

0xb499,	// (0x000902b1) main_int_radio1_pane_t8_ParamLimits

0xb499,	// (0x000902b1) main_int_radio1_pane_t8

0xb4b8,	// (0x000902d0) main_int_radio1_pane_t9_ParamLimits

0xb4b8,	// (0x000902d0) main_int_radio1_pane_t9

0xb4ca,	// (0x000902e2) main_int_radio1_pane_t10_ParamLimits

0xb4ca,	// (0x000902e2) main_int_radio1_pane_t10

0xb4f0,	// (0x00090308) main_int_radio1_pane_t11_ParamLimits

0xb4f0,	// (0x00090308) main_int_radio1_pane_t11

0xb516,	// (0x0009032e) main_int_radio1_pane_t12_ParamLimits

0xb516,	// (0x0009032e) main_int_radio1_pane_t12

0x000b,

0xfe91,	// (0x00094ca9) main_int_radio1_pane_t_ParamLimits

0xfe91,	// (0x00094ca9) main_int_radio1_pane_t

0x06c2,	// (0x000854da) int_radio_list_pane

0xeb46,	// (0x0009395e) scroll_pane_cp037

0x06ca,	// (0x000854e2) list_double_large_graphic_int_radio_pane_ParamLimits

0x06ca,	// (0x000854e2) list_double_large_graphic_int_radio_pane

0x06e2,	// (0x000854fa) list_double_large_graphic_int_radio_pane_g1

0xeb64,	// (0x0009397c) list_double_large_graphic_int_radio_pane_t1

0xeb72,	// (0x0009398a) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfeaa,	// (0x00094cc2) list_double_large_graphic_int_radio_pane_t

0x0749,	// (0x00085561) list_highlight_pane_cp027

0x0231,	// (0x00085049) main_button_pane_4

0xb13a,	// (0x0008ff52) main_welc_pane_g4_ParamLimits

0xb13a,	// (0x0008ff52) main_welc_pane_g4

0xb1a9,	// (0x0008ffc1) main_welc_pane_t4_ParamLimits

0xb1a9,	// (0x0008ffc1) main_welc_pane_t4

0xb1be,	// (0x0008ffd6) main_welc_pane_t5_ParamLimits

0xb1be,	// (0x0008ffd6) main_welc_pane_t5

0xb208,	// (0x00090020) main_welc_pane_t6_ParamLimits

0xb208,	// (0x00090020) main_welc_pane_t6

0xb25a,	// (0x00090072) welc_button_pane_2_ParamLimits

0xb25a,	// (0x00090072) welc_button_pane_2

0xb276,	// (0x0009008e) welc_button_pane_3_ParamLimits

0xb276,	// (0x0009008e) welc_button_pane_3

0x0231,	// (0x00085049) welc_button_pane_4

0xb295,	// (0x000900ad) welc_button_pane_5_ParamLimits

0xb295,	// (0x000900ad) welc_button_pane_5

0x61c6,	// (0x0008afde) main_popup_welc_pane

0x06eb,	// (0x00085503) main_welc_sk_g3

0x06f5,	// (0x0008550d) main_welc_sk_g4

0x06ff,	// (0x00085517) main_welc_sk_t3

0x070f,	// (0x00085527) main_welc_sk_t4

0x071f,	// (0x00085537) popup_welc_pane_t4

0x072d,	// (0x00085545) popup_welc_pane_t5

0x073b,	// (0x00085553) popup_welc_pane_t6
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large
