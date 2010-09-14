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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x000259b8 };

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
0x21c1,	// (0x00027b79) Screen

0x21cd,	// (0x00027b85) application_window

0x21e3,	// (0x00027b9b) area_bottom_pane_ParamLimits

0x21e3,	// (0x00027b9b) area_bottom_pane

0x0d78,	// (0x00026730) area_top_pane_ParamLimits

0x0d78,	// (0x00026730) area_top_pane

0xb14e,	// (0x00030b06) call_video_uplink_pane_ParamLimits

0xb14e,	// (0x00030b06) call_video_uplink_pane

0x0e06,	// (0x000267be) main_pane_ParamLimits

0x0e06,	// (0x000267be) main_pane

0xbc5c,	// (0x00031614) context_pane

0x6825,	// (0x0002c1dd) navi_pane

0x6857,	// (0x0002c20f) popup_cale_events_window_ParamLimits

0x6857,	// (0x0002c20f) popup_cale_events_window

0xbc6f,	// (0x00031627) popup_mup_playback_window

0x686f,	// (0x0002c227) signal_pane

0x2ad3,	// (0x0002848b) main_browser_pane

0x3236,	// (0x00028bee) main_burst_pane

0x1203,	// (0x00026bbb) main_calc_pane

0xbbfc,	// (0x000315b4) main_cale_day_pane

0x1217,	// (0x00026bcf) main_cale_month_pane

0xbbfc,	// (0x000315b4) main_cale_week_pane

0x3236,	// (0x00028bee) main_call_pane

0x2693,	// (0x0002804b) main_call_poc_pane

0x3236,	// (0x00028bee) main_camera_pane

0x3236,	// (0x00028bee) main_chi_dic_pane

0x4cef,	// (0x0002a6a7) main_clock_pane

0x2693,	// (0x0002804b) main_fmradio_pane

0x3236,	// (0x00028bee) main_graph_messa_pane

0x2693,	// (0x0002804b) main_help_pane

0x2ad3,	// (0x0002848b) main_im_pane

0x28ee,	// (0x000282a6) main_image_pane_ParamLimits

0x28ee,	// (0x000282a6) main_image_pane

0x2693,	// (0x0002804b) main_location2_pane

0x3236,	// (0x00028bee) main_location_pane

0x28ee,	// (0x000282a6) main_messa_pane

0x2693,	// (0x0002804b) main_mp2_pane

0x3236,	// (0x00028bee) main_mp_pane

0x2693,	// (0x0002804b) main_msg_pane

0x2693,	// (0x0002804b) main_mup_eq_pane

0x2693,	// (0x0002804b) main_mup_pane

0x2ad3,	// (0x0002848b) main_notes_pane

0x2693,	// (0x0002804b) main_pec_pane

0x2693,	// (0x0002804b) main_phob_pane

0x2693,	// (0x0002804b) main_pinb_pane

0x2693,	// (0x0002804b) main_postcard_pane

0x2693,	// (0x0002804b) main_qdial_pane

0x3236,	// (0x00028bee) main_skin_pane

0x2693,	// (0x0002804b) main_smil2_pane

0x3236,	// (0x00028bee) main_smil_pane

0x3236,	// (0x00028bee) main_video_pane

0x3236,	// (0x00028bee) main_video_tele_pane

0x28ee,	// (0x000282a6) main_viewer_pane_ParamLimits

0x28ee,	// (0x000282a6) main_viewer_pane

0x3236,	// (0x00028bee) main_vorec_pane

0x1269,	// (0x00026c21) popup_blid_sat_info_window_ParamLimits

0x1269,	// (0x00026c21) popup_blid_sat_info_window

0x12c1,	// (0x00026c79) popup_dyc_status_message_window_ParamLimits

0x12c1,	// (0x00026c79) popup_dyc_status_message_window

0x12db,	// (0x00026c93) popup_grid_large_graphic_window_ParamLimits

0x12db,	// (0x00026c93) popup_grid_large_graphic_window

0x1397,	// (0x00026d4f) popup_loc_request_window_ParamLimits

0x1397,	// (0x00026d4f) popup_loc_request_window

0x148d,	// (0x00026e45) popup_wml_address_window_ParamLimits

0x148d,	// (0x00026e45) popup_wml_address_window

0x6669,	// (0x0002c021) call_muted_g1

0x5d07,	// (0x0002b6bf) popup_call_audio_conf_window_ParamLimits

0x5d07,	// (0x0002b6bf) popup_call_audio_conf_window

0x667d,	// (0x0002c035) popup_call_audio_first_window_ParamLimits

0x667d,	// (0x0002c035) popup_call_audio_first_window

0x66f3,	// (0x0002c0ab) popup_call_audio_in_window_ParamLimits

0x66f3,	// (0x0002c0ab) popup_call_audio_in_window

0x672f,	// (0x0002c0e7) popup_call_audio_out_window_ParamLimits

0x672f,	// (0x0002c0e7) popup_call_audio_out_window

0x6769,	// (0x0002c121) popup_call_audio_second_window_ParamLimits

0x6769,	// (0x0002c121) popup_call_audio_second_window

0x67bf,	// (0x0002c177) popup_call_audio_wait_window_ParamLimits

0x67bf,	// (0x0002c177) popup_call_audio_wait_window

0x67f4,	// (0x0002c1ac) popup_number_entry_window_ParamLimits

0x67f4,	// (0x0002c1ac) popup_number_entry_window

0x2228,	// (0x00027be0) bg_popup_call_pane_cp05_ParamLimits

0x2228,	// (0x00027be0) bg_popup_call_pane_cp05

0x2248,	// (0x00027c00) popup_number_entry_window_t1

0x225b,	// (0x00027c13) popup_number_entry_window_t2

0x226d,	// (0x00027c25) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x00034a23) popup_number_entry_window_t

0x22b3,	// (0x00027c6b) text_title_cp2

0x22c6,	// (0x00027c7e) bg_popup_call_pane_cp_ParamLimits

0x22c6,	// (0x00027c7e) bg_popup_call_pane_cp

0x22d4,	// (0x00027c8c) call_thumbnail_pane

0x22dc,	// (0x00027c94) popup_call_audio_in_window_g1_ParamLimits

0x22dc,	// (0x00027c94) popup_call_audio_in_window_g1

0x22e8,	// (0x00027ca0) popup_call_audio_in_window_g2_ParamLimits

0x22e8,	// (0x00027ca0) popup_call_audio_in_window_g2

0x22f4,	// (0x00027cac) popup_call_audio_in_window_g3_ParamLimits

0x22f4,	// (0x00027cac) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x00034a2c) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x00034a2c) popup_call_audio_in_window_g

0x2300,	// (0x00027cb8) popup_call_audio_in_window_t1_ParamLimits

0x2300,	// (0x00027cb8) popup_call_audio_in_window_t1

0x231c,	// (0x00027cd4) popup_call_audio_in_window_t2_ParamLimits

0x231c,	// (0x00027cd4) popup_call_audio_in_window_t2

0x2338,	// (0x00027cf0) popup_call_audio_in_window_t3_ParamLimits

0x2338,	// (0x00027cf0) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x00034a33) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x00034a33) popup_call_audio_in_window_t

0x22c6,	// (0x00027c7e) bg_popup_call_pane_cp01_ParamLimits

0x22c6,	// (0x00027c7e) bg_popup_call_pane_cp01

0x22d4,	// (0x00027c8c) call_thumbnail_pane_cp02

0x234b,	// (0x00027d03) call_type_pane_cp022

0x2353,	// (0x00027d0b) popup_call_audio_out_window_g1_ParamLimits

0x2353,	// (0x00027d0b) popup_call_audio_out_window_g1

0x2365,	// (0x00027d1d) popup_call_audio_out_window_g2_ParamLimits

0x2365,	// (0x00027d1d) popup_call_audio_out_window_g2

0x2371,	// (0x00027d29) popup_call_audio_out_window_g3_ParamLimits

0x2371,	// (0x00027d29) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x00034a3a) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x00034a3a) popup_call_audio_out_window_g

0x2383,	// (0x00027d3b) popup_call_audio_out_window_t1_ParamLimits

0x2383,	// (0x00027d3b) popup_call_audio_out_window_t1

0x239b,	// (0x00027d53) popup_call_audio_out_window_t2_ParamLimits

0x239b,	// (0x00027d53) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x00034a41) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x00034a41) popup_call_audio_out_window_t

0x23b0,	// (0x00027d68) bg_popup_call_pane_ParamLimits

0x23b0,	// (0x00027d68) bg_popup_call_pane

0x2434,	// (0x00027dec) call_thumbnail_pane_cp_ParamLimits

0x2434,	// (0x00027dec) call_thumbnail_pane_cp

0x2458,	// (0x00027e10) call_type_pane_cp01_ParamLimits

0x2458,	// (0x00027e10) call_type_pane_cp01

0x249c,	// (0x00027e54) popup_call_audio_first_window_g1_ParamLimits

0x249c,	// (0x00027e54) popup_call_audio_first_window_g1

0x24e8,	// (0x00027ea0) popup_call_audio_first_window_g2_ParamLimits

0x24e8,	// (0x00027ea0) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x00034a46) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x00034a46) popup_call_audio_first_window_g

0x252c,	// (0x00027ee4) popup_call_audio_first_window_t1_ParamLimits

0x252c,	// (0x00027ee4) popup_call_audio_first_window_t1

0x25d8,	// (0x00027f90) popup_call_audio_first_window_t4_ParamLimits

0x25d8,	// (0x00027f90) popup_call_audio_first_window_t4

0x2664,	// (0x0002801c) popup_call_audio_first_window_t5_ParamLimits

0x2664,	// (0x0002801c) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x00034a4b) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x00034a4b) popup_call_audio_first_window_t

0x2693,	// (0x0002804b) bg_popup_call_pane_cp02

0x269d,	// (0x00028055) call_type_pane_cp023

0x26a5,	// (0x0002805d) popup_call_audio_wait_window_g1

0x26ad,	// (0x00028065) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x00034a52) popup_call_audio_wait_window_g

0x26b5,	// (0x0002806d) popup_call_audio_wait_window_t3

0x26c3,	// (0x0002807b) bg_popup_call_pane_cp03_ParamLimits

0x26c3,	// (0x0002807b) bg_popup_call_pane_cp03

0x2723,	// (0x000280db) call_thumbnail_pane_cp011_ParamLimits

0x2723,	// (0x000280db) call_thumbnail_pane_cp011

0x272f,	// (0x000280e7) call_type_pane_cp034_ParamLimits

0x272f,	// (0x000280e7) call_type_pane_cp034

0x276b,	// (0x00028123) popup_call_audio_second_window_g1_ParamLimits

0x276b,	// (0x00028123) popup_call_audio_second_window_g1

0x27a7,	// (0x0002815f) popup_call_audio_second_window_g2_ParamLimits

0x27a7,	// (0x0002815f) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x00034a57) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x00034a57) popup_call_audio_second_window_g

0x27e3,	// (0x0002819b) popup_call_audio_second_window_t1_ParamLimits

0x27e3,	// (0x0002819b) popup_call_audio_second_window_t1

0x2864,	// (0x0002821c) popup_call_audio_second_window_t2_ParamLimits

0x2864,	// (0x0002821c) popup_call_audio_second_window_t2

0x289a,	// (0x00028252) popup_call_audio_second_window_t3_ParamLimits

0x289a,	// (0x00028252) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x00034a5c) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x00034a5c) popup_call_audio_second_window_t

0x2693,	// (0x0002804b) bg_popup_call_pane_cp04

0x28d0,	// (0x00028288) list_conf_pane

0x28d8,	// (0x00028290) popup_call_audio_conf_window_t1

0x28e6,	// (0x0002829e) call_thumbnail_pane_g1

0x28ee,	// (0x000282a6) bg_pinb_pane_ParamLimits

0x28ee,	// (0x000282a6) bg_pinb_pane

0x28fc,	// (0x000282b4) find_pinb_pane

0x28ee,	// (0x000282a6) listscroll_pinb_pane_ParamLimits

0x28ee,	// (0x000282a6) listscroll_pinb_pane

0x2906,	// (0x000282be) pinb_bg_pane_g1

0x2906,	// (0x000282be) pinb_bg_pane_g2

0x2906,	// (0x000282be) pinb_bg_pane_g3

0x2906,	// (0x000282be) pinb_bg_pane_g4

0x2906,	// (0x000282be) pinb_bg_pane_g5

0x2906,	// (0x000282be) pinb_bg_pane_g6

0x2906,	// (0x000282be) pinb_bg_pane_g7

0x2906,	// (0x000282be) pinb_bg_pane_g8

0x2906,	// (0x000282be) pinb_bg_pane_g9

0x2906,	// (0x000282be) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x00034a63) pinb_bg_pane_g

0x21d9,	// (0x00027b91) grid_pinb_pane

0x21d9,	// (0x00027b91) list_pinb_pane

0x2910,	// (0x000282c8) scroll_pane_cp01_ParamLimits

0x2910,	// (0x000282c8) scroll_pane_cp01

0x291e,	// (0x000282d6) find_pinb_pane_g1_ParamLimits

0x291e,	// (0x000282d6) find_pinb_pane_g1

0x2936,	// (0x000282ee) find_pinb_pane_t1

0x2948,	// (0x00028300) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x00034a7d) find_pinb_pane_t

0x295d,	// (0x00028315) input_focus_pane_cp01_ParamLimits

0x295d,	// (0x00028315) input_focus_pane_cp01

0x2969,	// (0x00028321) cell_pinb_pane_ParamLimits

0x2969,	// (0x00028321) cell_pinb_pane

0x2977,	// (0x0002832f) cell_pinb_pane_g1_ParamLimits

0x2977,	// (0x0002832f) cell_pinb_pane_g1

0x2985,	// (0x0002833d) cell_pinb_pane_g2_ParamLimits

0x2985,	// (0x0002833d) cell_pinb_pane_g2

0x2985,	// (0x0002833d) cell_pinb_pane_g3_ParamLimits

0x2985,	// (0x0002833d) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x00034a82) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x00034a82) cell_pinb_pane_g

0x2693,	// (0x0002804b) grid_highlight_pane_cp01

0x2969,	// (0x00028321) list_pinb_item_pane_ParamLimits

0x2969,	// (0x00028321) list_pinb_item_pane

0x21d9,	// (0x00027b91) list_highlight_pane_cp02

0x2993,	// (0x0002834b) list_pinb_item_pane_g1_ParamLimits

0x2993,	// (0x0002834b) list_pinb_item_pane_g1

0x2985,	// (0x0002833d) list_pinb_item_pane_g2_ParamLimits

0x2985,	// (0x0002833d) list_pinb_item_pane_g2

0x2977,	// (0x0002832f) list_pinb_item_pane_g3_ParamLimits

0x2977,	// (0x0002832f) list_pinb_item_pane_g3

0x2985,	// (0x0002833d) list_pinb_item_pane_g4_ParamLimits

0x2985,	// (0x0002833d) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x00034a89) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x00034a89) list_pinb_item_pane_g

0x29a1,	// (0x00028359) list_pinb_item_pane_t1_ParamLimits

0x29a1,	// (0x00028359) list_pinb_item_pane_t1

0x0fa0,	// (0x00026958) calc_display_pane

0x0fc5,	// (0x0002697d) calc_paper_pane

0x0fe8,	// (0x000269a0) grid_calc_pane

0x2693,	// (0x0002804b) bg_list_pane_cp01

0x29b5,	// (0x0002836d) clock_g1

0x29bd,	// (0x00028375) clock_g2

0x0001,

0xf0da,	// (0x00034a92) clock_g

0x29c5,	// (0x0002837d) clock_t1_ParamLimits

0x29c5,	// (0x0002837d) clock_t1

0x29da,	// (0x00028392) clock_t2_ParamLimits

0x29da,	// (0x00028392) clock_t2

0x29ec,	// (0x000283a4) clock_t3_ParamLimits

0x29ec,	// (0x000283a4) clock_t3

0x29fe,	// (0x000283b6) clock_t4_ParamLimits

0x29fe,	// (0x000283b6) clock_t4

0x2a10,	// (0x000283c8) clock_t5_ParamLimits

0x2a10,	// (0x000283c8) clock_t5

0x2a25,	// (0x000283dd) clock_t6_ParamLimits

0x2a25,	// (0x000283dd) clock_t6

0x2a37,	// (0x000283ef) clock_t7_ParamLimits

0x2a37,	// (0x000283ef) clock_t7

0x2a49,	// (0x00028401) clock_t8_ParamLimits

0x2a49,	// (0x00028401) clock_t8

0x2a5d,	// (0x00028415) clock_t9_ParamLimits

0x2a5d,	// (0x00028415) clock_t9

0x0008,

0xf0df,	// (0x00034a97) clock_t_ParamLimits

0xf0df,	// (0x00034a97) clock_t

0x2a71,	// (0x00028429) popup_clock_analogue_window_cp02

0x2a71,	// (0x00028429) popup_clock_digital_window_cp01

0x2693,	// (0x0002804b) listscroll_help_pane

0x2693,	// (0x0002804b) phob_pre_status_pane

0x2a79,	// (0x00028431) grid_qdial_pane

0x2a83,	// (0x0002843b) listscroll_mce_pane

0x28ee,	// (0x000282a6) bg_notes_pane

0x2a9d,	// (0x00028455) list_notes_pane

0x2aab,	// (0x00028463) scroll_pane_cp06

0x2abf,	// (0x00028477) bg_calc_paper_pane

0xb18c,	// (0x00030b44) list_calc_pane

0x2ad3,	// (0x0002848b) bg_calc_display_pane

0x1016,	// (0x000269ce) calc_display_pane_t1

0x102b,	// (0x000269e3) calc_display_pane_t2

0xb1a6,	// (0x00030b5e) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x00034aaa) calc_display_pane_t

0x1040,	// (0x000269f8) cell_calc_pane_ParamLimits

0x1040,	// (0x000269f8) cell_calc_pane

0x2adf,	// (0x00028497) bg_calc_paper_pane_g1

0x2aeb,	// (0x000284a3) bg_calc_paper_pane_g2

0x2af7,	// (0x000284af) bg_calc_paper_pane_g3

0x2b03,	// (0x000284bb) bg_calc_paper_pane_g4

0x2b0f,	// (0x000284c7) bg_calc_paper_pane_g5

0x2b1b,	// (0x000284d3) bg_calc_paper_pane_g6

0x2b2a,	// (0x000284e2) bg_calc_paper_pane_g7

0x2b39,	// (0x000284f1) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x00034ab1) bg_calc_paper_pane_g

0x2b4c,	// (0x00028504) calc_bg_paper_pane_g9

0x2b5f,	// (0x00028517) list_calc_item_pane_ParamLimits

0x2b5f,	// (0x00028517) list_calc_item_pane

0x2b77,	// (0x0002852f) list_calc_item_pane_g1

0xb1b8,	// (0x00030b70) list_calc_item_pane_t1_ParamLimits

0xb1b8,	// (0x00030b70) list_calc_item_pane_t1

0x1075,	// (0x00026a2d) list_calc_item_pane_t2_ParamLimits

0x1075,	// (0x00026a2d) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x00034ac2) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x00034ac2) list_calc_item_pane_t

0x2906,	// (0x000282be) cell_calc_pane_g1

0x2b84,	// (0x0002853c) grid_highlight_pane_cp02

0x2ba6,	// (0x0002855e) bg_calc_display_pane_g1

0x10a7,	// (0x00026a5f) bg_calc_display_pane_g2

0x2baf,	// (0x00028567) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x00034acc) bg_calc_display_pane_g

0x10b1,	// (0x00026a69) cell_qdial_pane_ParamLimits

0x10b1,	// (0x00026a69) cell_qdial_pane

0x2bb8,	// (0x00028570) cell_qdial_pane_g1_ParamLimits

0x2bb8,	// (0x00028570) cell_qdial_pane_g1

0x2bce,	// (0x00028586) cell_qdial_pane_g2_ParamLimits

0x2bce,	// (0x00028586) cell_qdial_pane_g2

0x2bdf,	// (0x00028597) cell_qdial_pane_g3_ParamLimits

0x2bdf,	// (0x00028597) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x00034ad3) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x00034ad3) cell_qdial_pane_g

0x2c01,	// (0x000285b9) cell_qdial_pane_t1_ParamLimits

0x2c01,	// (0x000285b9) cell_qdial_pane_t1

0x2c19,	// (0x000285d1) cell_qdial_pane_t2_ParamLimits

0x2c19,	// (0x000285d1) cell_qdial_pane_t2

0x2c2c,	// (0x000285e4) cell_qdial_pane_t3_ParamLimits

0x2c2c,	// (0x000285e4) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x00034adc) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x00034adc) cell_qdial_pane_t

0x2693,	// (0x0002804b) grid_highlight_pane_cp04

0x2c3f,	// (0x000285f7) thumbnail_qdial_pane_ParamLimits

0x2c3f,	// (0x000285f7) thumbnail_qdial_pane

0x2c9b,	// (0x00028653) list_help_pane

0x2ca4,	// (0x0002865c) scroll_pane_cp02

0x2cad,	// (0x00028665) help_list_pane_t1_ParamLimits

0x2cad,	// (0x00028665) help_list_pane_t1

0xb1ca,	// (0x00030b82) bg_notes_pane_g2

0xb1d2,	// (0x00030b8a) bg_notes_pane_g3

0xb1da,	// (0x00030b92) notes_bg_pane_g1

0xb1e2,	// (0x00030b9a) notes_bg_pane_g4

0xb1ea,	// (0x00030ba2) notes_bg_pane_g5

0xb1f2,	// (0x00030baa) notes_bg_pane_g6

0xb1fa,	// (0x00030bb2) notes_bg_pane_g7

0xb202,	// (0x00030bba) notes_bg_pane_g8

0xb20a,	// (0x00030bc2) notes_bg_pane_g9

0x0006,

0xf142,	// (0x00034afa) notes_bg_pane_g

0x2ccb,	// (0x00028683) list_notes_text_pane_ParamLimits

0x2ccb,	// (0x00028683) list_notes_text_pane

0x2ce0,	// (0x00028698) list_notes_text_pane_g1

0x2ce9,	// (0x000286a1) list_notes_text_pane_t1

0x2d08,	// (0x000286c0) listscroll_cale_week_pane

0x2d3d,	// (0x000286f5) bg_cale_heading_pane

0x2d55,	// (0x0002870d) bg_cale_pane_cp01

0x2d72,	// (0x0002872a) cale_week_corner_pane

0x2d91,	// (0x00028749) cale_week_day_heading_pane

0x2dae,	// (0x00028766) cale_week_scroll_pane_g1

0x2dc1,	// (0x00028779) cale_week_scroll_pane_g2

0x2dd9,	// (0x00028791) cale_week_scroll_pane_g3

0x2df1,	// (0x000287a9) cale_week_scroll_pane_g4

0x2e09,	// (0x000287c1) cale_week_scroll_pane_g5

0x2e29,	// (0x000287e1) cale_week_scroll_pane_g6

0x2e49,	// (0x00028801) cale_week_scroll_pane_g7

0x2e69,	// (0x00028821) cale_week_scroll_pane_g8

0x2e8d,	// (0x00028845) cale_week_scroll_pane_g9

0x2ea5,	// (0x0002885d) cale_week_scroll_pane_g10

0x2ebd,	// (0x00028875) cale_week_scroll_pane_g11

0x2ed5,	// (0x0002888d) cale_week_scroll_pane_g12

0x2eed,	// (0x000288a5) cale_week_scroll_pane_g13

0x2eed,	// (0x000288a5) cale_week_scroll_pane_g14

0x2eed,	// (0x000288a5) cale_week_scroll_pane_g15

0x000f,

0xf151,	// (0x00034b09) cale_week_scroll_pane_g

0x2f29,	// (0x000288e1) cale_week_time_pane

0x2f4d,	// (0x00028905) grid_cale_week_pane

0x2f85,	// (0x0002893d) scroll_pane_cp08

0x2fa2,	// (0x0002895a) cell_cale_week_pane_ParamLimits

0x2fa2,	// (0x0002895a) cell_cale_week_pane

0x3030,	// (0x000289e8) cale_week_day_heading_pane_t1

0x305a,	// (0x00028a12) cale_week_day_heading_pane_t2

0x3089,	// (0x00028a41) cale_week_day_heading_pane_t3

0x30b8,	// (0x00028a70) cale_week_day_heading_pane_t4

0x30e7,	// (0x00028a9f) cale_week_day_heading_pane_t5

0x311e,	// (0x00028ad6) cale_week_day_heading_pane_t6

0x3155,	// (0x00028b0d) cale_week_day_heading_pane_t7

0x0006,

0xf172,	// (0x00034b2a) cale_week_day_heading_pane_t

0x317f,	// (0x00028b37) bg_cale_side_pane

0x10c5,	// (0x00026a7d) cale_week_time_pane_t1

0x10df,	// (0x00026a97) cale_week_time_pane_t2

0x10f9,	// (0x00026ab1) cale_week_time_pane_t3

0x1113,	// (0x00026acb) cale_week_time_pane_t4

0x112d,	// (0x00026ae5) cale_week_time_pane_t5

0x1147,	// (0x00026aff) cale_week_time_pane_t6

0x1161,	// (0x00026b19) cale_week_time_pane_t7

0x117b,	// (0x00026b33) cale_week_time_pane_t8

0x0007,

0xf181,	// (0x00034b39) cale_week_time_pane_t

0x318d,	// (0x00028b45) cell_cale_week_pane_g2

0x31ac,	// (0x00028b64) cell_cale_week_pane_g3_ParamLimits

0x31ac,	// (0x00028b64) cell_cale_week_pane_g3

0x31c4,	// (0x00028b7c) grid_highlight_pane_cp07

0x31cc,	// (0x00028b84) listscroll_gms_pane

0x31d6,	// (0x00028b8e) grid_gms_pane

0x31df,	// (0x00028b97) listscroll_gms_pane_g1

0x31e7,	// (0x00028b9f) listscroll_gms_pane_g2

0x0001,

0xf192,	// (0x00034b4a) listscroll_gms_pane_g

0x31ef,	// (0x00028ba7) scroll_pane_cp010

0x31fa,	// (0x00028bb2) cell_gms_pane_ParamLimits

0x31fa,	// (0x00028bb2) cell_gms_pane

0x320d,	// (0x00028bc5) cell_gms_pane_g1

0x3215,	// (0x00028bcd) cell_gms_pane_g2

0x2ce0,	// (0x00028698) cell_gms_pane_g3

0x321d,	// (0x00028bd5) cell_gms_pane_g4

0x0003,

0xf197,	// (0x00034b4f) cell_gms_pane_g

0x3226,	// (0x00028bde) grid_highlight_pane_cp09

0x65f1,	// (0x0002bfa9) phob_pre_status_pane_g1

0x65f9,	// (0x0002bfb1) phob_pre_status_pane_g2

0x6601,	// (0x0002bfb9) phob_pre_status_pane_g3

0x6609,	// (0x0002bfc1) phob_pre_status_pane_g4

0x0004,

0xf55b,	// (0x00034f13) phob_pre_status_pane_g

0x6619,	// (0x0002bfd1) phob_pre_status_pane_t1

0x6627,	// (0x0002bfdf) phob_pre_status_pane_t2

0x6637,	// (0x0002bfef) phob_pre_status_pane_t3

0x0002,

0xf566,	// (0x00034f1e) phob_pre_status_pane_t

0x3236,	// (0x00028bee) bg_list_pane_cp05

0x323e,	// (0x00028bf6) grid_vorec_pane

0x3246,	// (0x00028bfe) vorec_t1

0x3254,	// (0x00028c0c) vorec_t2

0x3262,	// (0x00028c1a) vorec_t3

0x3270,	// (0x00028c28) vorec_t4

0x219b,	// (0x00027b53) vorec_t5

0x21a9,	// (0x00027b61) vorec_t6

0x0004,

0xf1a0,	// (0x00034b58) vorec_t

0x21b7,	// (0x00027b6f) wait_bar_pane_cp01

0x328c,	// (0x00028c44) cell_vorec_pane_ParamLimits

0x328c,	// (0x00028c44) cell_vorec_pane

0xb212,	// (0x00030bca) cell_vorec_pane_g1

0x2693,	// (0x0002804b) grid_highlight_pane_cp05

0x2910,	// (0x000282c8) cams_zoom_pane

0x2910,	// (0x000282c8) image_vga_pane

0x2977,	// (0x0002832f) main_camera_pane_g1

0x2977,	// (0x0002832f) main_camera_pane_g2

0x2977,	// (0x0002832f) main_camera_pane_g3

0x2977,	// (0x0002832f) main_camera_pane_g4

0x2977,	// (0x0002832f) main_camera_pane_g5

0x2977,	// (0x0002832f) main_camera_pane_g6

0x2977,	// (0x0002832f) main_camera_pane_g7

0x0007,

0xf1ab,	// (0x00034b63) main_camera_pane_g

0x329f,	// (0x00028c57) main_camera_pane_t1

0x329f,	// (0x00028c57) main_camera_pane_t2

0x0001,

0xf1bc,	// (0x00034b74) main_camera_pane_t

0x32c7,	// (0x00028c7f) cams_zoom_pane_cp_ParamLimits

0x32c7,	// (0x00028c7f) cams_zoom_pane_cp

0x32fb,	// (0x00028cb3) image_cif_pane_ParamLimits

0x32fb,	// (0x00028cb3) image_cif_pane

0x21d9,	// (0x00027b91) image_subqcif_pane

0x330d,	// (0x00028cc5) main_video_pane_g1_ParamLimits

0x330d,	// (0x00028cc5) main_video_pane_g1

0x333b,	// (0x00028cf3) main_video_pane_g2_ParamLimits

0x333b,	// (0x00028cf3) main_video_pane_g2

0x3375,	// (0x00028d2d) main_video_pane_g3_ParamLimits

0x3375,	// (0x00028d2d) main_video_pane_g3

0x3375,	// (0x00028d2d) main_video_pane_g4_ParamLimits

0x3375,	// (0x00028d2d) main_video_pane_g4

0x33a9,	// (0x00028d61) main_video_pane_g5_ParamLimits

0x33a9,	// (0x00028d61) main_video_pane_g5

0x33b7,	// (0x00028d6f) main_video_pane_g6_ParamLimits

0x33b7,	// (0x00028d6f) main_video_pane_g6

0x0006,

0xf1c1,	// (0x00034b79) main_video_pane_g_ParamLimits

0xf1c1,	// (0x00034b79) main_video_pane_g

0x33df,	// (0x00028d97) main_video_pane_t1_ParamLimits

0x33df,	// (0x00028d97) main_video_pane_t1

0x3423,	// (0x00028ddb) cams_zoom_pane_g1

0x3423,	// (0x00028ddb) cams_zoom_pane_g2

0x3423,	// (0x00028ddb) cams_zoom_pane_g3

0x3423,	// (0x00028ddb) cams_zoom_pane_g4

0x0003,

0xf1d0,	// (0x00034b88) cams_zoom_pane_g

0x3441,	// (0x00028df9) grid_cams_pane

0x345b,	// (0x00028e13) linegrid_cams_pane

0x346f,	// (0x00028e27) cell_cams_pane_ParamLimits

0x346f,	// (0x00028e27) cell_cams_pane

0x348f,	// (0x00028e47) cams_burst_image_pane

0x3497,	// (0x00028e4f) cell_cams_pane_g1

0x2693,	// (0x0002804b) grid_highlight_pane_cp03

0x2906,	// (0x000282be) mp_bg_pane_g1

0x21d9,	// (0x00027b91) bg_list_pane_cp03

0x21d9,	// (0x00027b91) bg_mp_pane

0x21d9,	// (0x00027b91) grid_mp_pane

0x3423,	// (0x00028ddb) media_player_g1

0x49fd,	// (0x0002a3b5) media_player_t1

0x49fd,	// (0x0002a3b5) media_player_t2

0x49fd,	// (0x0002a3b5) media_player_t3

0x49fd,	// (0x0002a3b5) media_player_t4

0x49fd,	// (0x0002a3b5) media_player_t5

0x49fd,	// (0x0002a3b5) media_player_t6

0x49fd,	// (0x0002a3b5) media_player_t7

0x0006,

0xf545,	// (0x00034efd) media_player_t

0x21d9,	// (0x00027b91) wait_bar_pane_cp02

0xf52a,	// (0x00034ee2) main_usb_pane_t

0x4cef,	// (0x0002a6a7) cell_mp_pane

0x2906,	// (0x000282be) cell_mp_pane_g1

0x2693,	// (0x0002804b) grid_highlight_pane_cp06

0x349f,	// (0x00028e57) grid_skin_colour_pane

0x34a7,	// (0x00028e5f) list_highlight_pane_cp03

0x34af,	// (0x00028e67) skin_g1

0x34b7,	// (0x00028e6f) skin_t1

0x34c6,	// (0x00028e7e) skin_t2

0x0001,

0xf1fe,	// (0x00034bb6) skin_t

0x34d4,	// (0x00028e8c) cell_skin_colour_pane_ParamLimits

0x34d4,	// (0x00028e8c) cell_skin_colour_pane

0x34f4,	// (0x00028eac) cell_skin_colour_pane_g1

0x355f,	// (0x00028f17) call_video_g1_ParamLimits

0x355f,	// (0x00028f17) call_video_g1

0x357b,	// (0x00028f33) call_video_g2_ParamLimits

0x357b,	// (0x00028f33) call_video_g2

0x0001,

0xf203,	// (0x00034bbb) call_video_g_ParamLimits

0xf203,	// (0x00034bbb) call_video_g

0x35cd,	// (0x00028f85) call_video_uplink_pane_cp1_ParamLimits

0x35cd,	// (0x00028f85) call_video_uplink_pane_cp1

0x3632,	// (0x00028fea) call_video_uplink_pane_cp2

0x3674,	// (0x0002902c) video_down_crop_pane_ParamLimits

0x3674,	// (0x0002902c) video_down_crop_pane

0x376b,	// (0x00029123) video_down_pane_ParamLimits

0x376b,	// (0x00029123) video_down_pane

0x3862,	// (0x0002921a) video_down_subqcif_pane_ParamLimits

0x3862,	// (0x0002921a) video_down_subqcif_pane

0x387a,	// (0x00029232) video_down_subqcif_pane_cp_ParamLimits

0x387a,	// (0x00029232) video_down_subqcif_pane_cp

0x38b9,	// (0x00029271) im_reading_pane_ParamLimits

0x38b9,	// (0x00029271) im_reading_pane

0x38cb,	// (0x00029283) im_writing_pane_ParamLimits

0x38cb,	// (0x00029283) im_writing_pane

0x38e9,	// (0x000292a1) im_reading_pane_t1

0x3922,	// (0x000292da) list_im_pane

0x3933,	// (0x000292eb) scroll_pane_cp07

0x394c,	// (0x00029304) im_writing_pane_t1_ParamLimits

0x394c,	// (0x00029304) im_writing_pane_t1

0x3961,	// (0x00029319) im_writing_pane_t2_ParamLimits

0x3961,	// (0x00029319) im_writing_pane_t2

0x0001,

0xf20d,	// (0x00034bc5) im_writing_pane_t_ParamLimits

0xf20d,	// (0x00034bc5) im_writing_pane_t

0x2693,	// (0x0002804b) input_focus_pane_cp04

0x2693,	// (0x0002804b) input_focus_pane_cp05

0x397e,	// (0x00029336) list_im_single_pane_ParamLimits

0x397e,	// (0x00029336) list_im_single_pane

0x3992,	// (0x0002934a) list_single_im_pane_t1

0x3236,	// (0x00028bee) blid_accuracy_pane

0x3236,	// (0x00028bee) blid_compass_pane

0xbbb4,	// (0x0003156c) main_location_t1

0xbbb4,	// (0x0003156c) main_location_t2

0xbbb4,	// (0x0003156c) main_location_t3

0x0002,

0xf554,	// (0x00034f0c) main_location_t

0x2693,	// (0x0002804b) aid_levels_location

0x2906,	// (0x000282be) blid_accuracy_pane_g1

0x2906,	// (0x000282be) blid_accuracy_pane_g2

0x0001,

0xf25c,	// (0x00034c14) blid_accuracy_pane_g

0x39cc,	// (0x00029384) wml_content_pane

0x3a0a,	// (0x000293c2) wml_button_pane_ParamLimits

0x3a0a,	// (0x000293c2) wml_button_pane

0x3a1e,	// (0x000293d6) wml_list_single_large_pane_ParamLimits

0x3a1e,	// (0x000293d6) wml_list_single_large_pane

0x3a33,	// (0x000293eb) wml_list_single_medium_pane_ParamLimits

0x3a33,	// (0x000293eb) wml_list_single_medium_pane

0x3a49,	// (0x00029401) wml_list_single_small_pane_ParamLimits

0x3a49,	// (0x00029401) wml_list_single_small_pane

0x3a61,	// (0x00029419) wml_selection_box_pane_ParamLimits

0x3a61,	// (0x00029419) wml_selection_box_pane

0x3a74,	// (0x0002942c) wml_list_single_pane_t1

0x3a83,	// (0x0002943b) wml_list_single_medium_pane_t1

0x3a92,	// (0x0002944a) wml_list_single_large_pane_t1

0x3aa1,	// (0x00029459) input_focus_pane_cp02_ParamLimits

0x3aa1,	// (0x00029459) input_focus_pane_cp02

0x3ab4,	// (0x0002946c) wml_selection_box_pane_g1

0x3abd,	// (0x00029475) wml_selection_box_pane_t1_ParamLimits

0x3abd,	// (0x00029475) wml_selection_box_pane_t1

0x28ee,	// (0x000282a6) bg_wml_button_pane_ParamLimits

0x28ee,	// (0x000282a6) bg_wml_button_pane

0x3ad5,	// (0x0002948d) wml_button_pane_g1

0x3add,	// (0x00029495) wml_button_pane_t1

0x3ad5,	// (0x0002948d) wml_button_bg_pane_g1

0x3aed,	// (0x000294a5) wml_button_bg_pane_g2

0x3af5,	// (0x000294ad) wml_button_bg_pane_g3

0x3afd,	// (0x000294b5) wml_button_bg_pane_g4

0x3b05,	// (0x000294bd) wml_button_bg_pane_g5

0x3b0d,	// (0x000294c5) wml_button_bg_pane_g6

0x3b15,	// (0x000294cd) wml_button_bg_pane_g7

0x3b1d,	// (0x000294d5) wml_button_bg_pane_g8

0x3b25,	// (0x000294dd) wml_button_bg_pane_g9

0x0008,

0xf212,	// (0x00034bca) wml_button_bg_pane_g

0x3b2d,	// (0x000294e5) bg_list_pane_cp02

0x3b35,	// (0x000294ed) mce_header_pane_ParamLimits

0x3b35,	// (0x000294ed) mce_header_pane

0x3b4b,	// (0x00029503) mce_icon_pane

0x3b4b,	// (0x00029503) mce_image_pane

0x3b54,	// (0x0002950c) mce_text_pane_ParamLimits

0x3b54,	// (0x0002950c) mce_text_pane

0x3b67,	// (0x0002951f) scroll_pane_cp03

0x3a02,	// (0x000293ba) scroll_pane_cp04

0x3b6f,	// (0x00029527) scroll_pane_cp05_ParamLimits

0x3b6f,	// (0x00029527) scroll_pane_cp05

0x3b7b,	// (0x00029533) mce_header_field_pane_ParamLimits

0x3b7b,	// (0x00029533) mce_header_field_pane

0x3b92,	// (0x0002954a) mce_header_field_pane_2_ParamLimits

0x3b92,	// (0x0002954a) mce_header_field_pane_2

0x3ba8,	// (0x00029560) mce_header_field_pane_3

0x3bb0,	// (0x00029568) list_single_mce_message_pane_ParamLimits

0x3bb0,	// (0x00029568) list_single_mce_message_pane

0x3bbc,	// (0x00029574) list_single_mce_smart_pane_ParamLimits

0x3bbc,	// (0x00029574) list_single_mce_smart_pane

0x3bd0,	// (0x00029588) input_focus_pane_cp03

0x3bd9,	// (0x00029591) list_header_data_pane

0x3be1,	// (0x00029599) mce_header_field_pane_t1

0x3bef,	// (0x000295a7) list_single_mce_header_pane_ParamLimits

0x3bef,	// (0x000295a7) list_single_mce_header_pane

0x3c03,	// (0x000295bb) list_single_mce_header_pane_t1

0x3c12,	// (0x000295ca) list_single_mce_message_pane_g1

0x3c1a,	// (0x000295d2) list_single_mce_message_pane_t1

0x3c4e,	// (0x00029606) bg_cale_heading_pane_cp01_ParamLimits

0x3c4e,	// (0x00029606) bg_cale_heading_pane_cp01

0x3c88,	// (0x00029640) bg_cale_pane_cp02_ParamLimits

0x3c88,	// (0x00029640) bg_cale_pane_cp02

0x3cb5,	// (0x0002966d) cale_month_corner_pane

0x3cd4,	// (0x0002968c) cale_month_day_heading_pane_ParamLimits

0x3cd4,	// (0x0002968c) cale_month_day_heading_pane

0x3d26,	// (0x000296de) cale_month_pane_g1_ParamLimits

0x3d26,	// (0x000296de) cale_month_pane_g1

0x3d55,	// (0x0002970d) cale_month_pane_g2_ParamLimits

0x3d55,	// (0x0002970d) cale_month_pane_g2

0x3d85,	// (0x0002973d) cale_month_pane_g3_ParamLimits

0x3d85,	// (0x0002973d) cale_month_pane_g3

0x3dc1,	// (0x00029779) cale_month_pane_g4_ParamLimits

0x3dc1,	// (0x00029779) cale_month_pane_g4

0x3dfd,	// (0x000297b5) cale_month_pane_g5_ParamLimits

0x3dfd,	// (0x000297b5) cale_month_pane_g5

0x3e45,	// (0x000297fd) cale_month_pane_g6_ParamLimits

0x3e45,	// (0x000297fd) cale_month_pane_g6

0x3e91,	// (0x00029849) cale_month_pane_g7_ParamLimits

0x3e91,	// (0x00029849) cale_month_pane_g7

0x3ee5,	// (0x0002989d) cale_month_pane_g8_ParamLimits

0x3ee5,	// (0x0002989d) cale_month_pane_g8

0x3f39,	// (0x000298f1) cale_month_pane_g9_ParamLimits

0x3f39,	// (0x000298f1) cale_month_pane_g9

0x3f8b,	// (0x00029943) cale_month_pane_g10_ParamLimits

0x3f8b,	// (0x00029943) cale_month_pane_g10

0x3fdd,	// (0x00029995) cale_month_pane_g11_ParamLimits

0x3fdd,	// (0x00029995) cale_month_pane_g11

0x402f,	// (0x000299e7) cale_month_pane_g12_ParamLimits

0x402f,	// (0x000299e7) cale_month_pane_g12

0x4081,	// (0x00029a39) cale_month_pane_g13_ParamLimits

0x4081,	// (0x00029a39) cale_month_pane_g13

0x000c,

0xf225,	// (0x00034bdd) cale_month_pane_g_ParamLimits

0xf225,	// (0x00034bdd) cale_month_pane_g

0x40e5,	// (0x00029a9d) cale_month_week_pane

0x4109,	// (0x00029ac1) grid_cale_month_pane_ParamLimits

0x4109,	// (0x00029ac1) grid_cale_month_pane

0x4152,	// (0x00029b0a) cale_month_day_heading_pane_t1

0x41d8,	// (0x00029b90) cale_month_day_heading_pane_t2

0x4251,	// (0x00029c09) cale_month_day_heading_pane_t3

0x42ca,	// (0x00029c82) cale_month_day_heading_pane_t4

0x434b,	// (0x00029d03) cale_month_day_heading_pane_t5

0x43d4,	// (0x00029d8c) cale_month_day_heading_pane_t6

0x445d,	// (0x00029e15) cale_month_day_heading_pane_t7

0x0006,

0xf240,	// (0x00034bf8) cale_month_day_heading_pane_t

0x317f,	// (0x00028b37) bg_cale_side_pane_cp01

0x44ee,	// (0x00029ea6) cale_month_week_pane_t1

0x4507,	// (0x00029ebf) cale_month_week_pane_t2

0x4520,	// (0x00029ed8) cale_month_week_pane_t3

0x4539,	// (0x00029ef1) cale_month_week_pane_t4

0x4552,	// (0x00029f0a) cale_month_week_pane_t5

0x456b,	// (0x00029f23) cale_month_week_pane_t6

0x0005,

0xf24f,	// (0x00034c07) cale_month_week_pane_t

0x4584,	// (0x00029f3c) cell_cale_month_pane_ParamLimits

0x4584,	// (0x00029f3c) cell_cale_month_pane

0xb21c,	// (0x00030bd4) cell_cale_month_pane_g1

0x1195,	// (0x00026b4d) cell_cale_month_pane_t1_ParamLimits

0x1195,	// (0x00026b4d) cell_cale_month_pane_t1

0x31c4,	// (0x00028b7c) grid_highlight_pane_cp08

0x2906,	// (0x000282be) main_smil_g1

0x46b2,	// (0x0002a06a) smil_status_pane

0x46bb,	// (0x0002a073) smil_text_pane

0xbacc,	// (0x00031484) bg_popup_call3_rect_pane_g8

0xbad4,	// (0x0003148c) bg_popup_call3_rect_pane_g9

0x0008,

0xf4e8,	// (0x00034ea0) bg_popup_call3_rect_pane_g

0xbcd1,	// (0x00031689) smil_status_volume_pane_g1

0x46cf,	// (0x0002a087) smil_status_pane_t1

0xbd04,	// (0x000316bc) volume_smil_pane

0x46e6,	// (0x0002a09e) list_smil_text_pane

0x46f0,	// (0x0002a0a8) scroll_pane_cp011

0x46fb,	// (0x0002a0b3) smil_text_list_pane_t1_ParamLimits

0x46fb,	// (0x0002a0b3) smil_text_list_pane_t1

0xb228,	// (0x00030be0) aid_volume_smil_ParamLimits

0xb228,	// (0x00030be0) aid_volume_smil

0x2906,	// (0x000282be) smil_volume_pane_g1

0x2906,	// (0x000282be) smil_volume_pane_g2

0x0001,

0xf25c,	// (0x00034c14) smil_volume_pane_g

0x2d08,	// (0x000286c0) listscroll_cale_day_pane

0x4737,	// (0x0002a0ef) bg_cale_pane

0x474f,	// (0x0002a107) list_cale_pane

0x4772,	// (0x0002a12a) scroll_pane_cp09

0x4783,	// (0x0002a13b) cale_bg_pane_g1

0x478b,	// (0x0002a143) cale_bg_pane_g2

0x4793,	// (0x0002a14b) cale_bg_pane_g3

0x479b,	// (0x0002a153) cale_bg_pane_g4

0x47a3,	// (0x0002a15b) cale_bg_pane_g5

0x47ab,	// (0x0002a163) cale_bg_pane_g6

0x47b3,	// (0x0002a16b) cale_bg_pane_g7

0x47bb,	// (0x0002a173) cale_bg_pane_g8

0x47c3,	// (0x0002a17b) cale_bg_pane_g9

0x0008,

0xf261,	// (0x00034c19) cale_bg_pane_g

0x47d3,	// (0x0002a18b) list_cale_time_pane_ParamLimits

0x47d3,	// (0x0002a18b) list_cale_time_pane

0x47e8,	// (0x0002a1a0) list_cale_time_pane_g1_ParamLimits

0x47e8,	// (0x0002a1a0) list_cale_time_pane_g1

0x47f4,	// (0x0002a1ac) list_cale_time_pane_g2_ParamLimits

0x47f4,	// (0x0002a1ac) list_cale_time_pane_g2

0x4801,	// (0x0002a1b9) list_cale_time_pane_g3_ParamLimits

0x4801,	// (0x0002a1b9) list_cale_time_pane_g3

0x480f,	// (0x0002a1c7) list_cale_time_pane_g4_ParamLimits

0x480f,	// (0x0002a1c7) list_cale_time_pane_g4

0x481d,	// (0x0002a1d5) list_cale_time_pane_g5_ParamLimits

0x481d,	// (0x0002a1d5) list_cale_time_pane_g5

0x0005,

0xf274,	// (0x00034c2c) list_cale_time_pane_g_ParamLimits

0xf274,	// (0x00034c2c) list_cale_time_pane_g

0x4838,	// (0x0002a1f0) list_cale_time_pane_t1_ParamLimits

0x4838,	// (0x0002a1f0) list_cale_time_pane_t1

0x4860,	// (0x0002a218) list_cale_time_pane_t2_ParamLimits

0x4860,	// (0x0002a218) list_cale_time_pane_t2

0x4f0a,	// (0x0002a8c2) aid_blid_cardinal_pane

0x4f54,	// (0x0002a90c) compass_pane_t4

0x4888,	// (0x0002a240) list_cale_time_pane_t4_ParamLimits

0x4888,	// (0x0002a240) list_cale_time_pane_t4

0x4f62,	// (0x0002a91a) compass_pane_t5

0x4f70,	// (0x0002a928) compass_pane_t6

0x4f7e,	// (0x0002a936) compass_pane_t7

0x5014,	// (0x0002a9cc) navi_pane_cc_t1

0x5233,	// (0x0002abeb) aid_phob_thumbnail_center_pane

0x5712,	// (0x0002b0ca) main_postcard_pane_g4_ParamLimits

0x0002,

0xf281,	// (0x00034c39) list_cale_time_pane_t_ParamLimits

0xf281,	// (0x00034c39) list_cale_time_pane_t

0x22c6,	// (0x00027c7e) bg_popup_window_pane_cp02_ParamLimits

0x22c6,	// (0x00027c7e) bg_popup_window_pane_cp02

0x48b0,	// (0x0002a268) heading_pane_cp01_ParamLimits

0x48b0,	// (0x0002a268) heading_pane_cp01

0x48bc,	// (0x0002a274) loc_req_pane_ParamLimits

0x48bc,	// (0x0002a274) loc_req_pane

0x48cc,	// (0x0002a284) loc_type_pane_ParamLimits

0x48cc,	// (0x0002a284) loc_type_pane

0x48de,	// (0x0002a296) loc_type_pane_t1_ParamLimits

0x48de,	// (0x0002a296) loc_type_pane_t1

0x48f0,	// (0x0002a2a8) loc_type_pane_t2_ParamLimits

0x48f0,	// (0x0002a2a8) loc_type_pane_t2

0x4902,	// (0x0002a2ba) loc_type_pane_t3_ParamLimits

0x4902,	// (0x0002a2ba) loc_type_pane_t3

0x0002,

0xf288,	// (0x00034c40) loc_type_pane_t_ParamLimits

0xf288,	// (0x00034c40) loc_type_pane_t

0x4914,	// (0x0002a2cc) list_loc_req_pane

0x491e,	// (0x0002a2d6) scroll_pane_cp012

0x4929,	// (0x0002a2e1) list_single_loc_request_popup_menu_pane_ParamLimits

0x4929,	// (0x0002a2e1) list_single_loc_request_popup_menu_pane

0x4936,	// (0x0002a2ee) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x4936,	// (0x0002a2ee) list_single_loc_request_popup_menu_pane_g1

0x4942,	// (0x0002a2fa) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x4942,	// (0x0002a2fa) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf28f,	// (0x00034c47) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf28f,	// (0x00034c47) list_single_loc_request_popup_menu_pane_g

0x494e,	// (0x0002a306) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x494e,	// (0x0002a306) list_single_loc_request_popup_menu_pane_t1

0x28ee,	// (0x000282a6) bg_popup_window_pane_cp03_ParamLimits

0x28ee,	// (0x000282a6) bg_popup_window_pane_cp03

0x4964,	// (0x0002a31c) heading_loc_req_pane_ParamLimits

0x4964,	// (0x0002a31c) heading_loc_req_pane

0x4970,	// (0x0002a328) popup_dyc_status_message_window_g1_ParamLimits

0x4970,	// (0x0002a328) popup_dyc_status_message_window_g1

0x4984,	// (0x0002a33c) popup_dyc_status_message_window_t1_ParamLimits

0x4984,	// (0x0002a33c) popup_dyc_status_message_window_t1

0x4999,	// (0x0002a351) popup_dyc_status_message_window_t2_ParamLimits

0x4999,	// (0x0002a351) popup_dyc_status_message_window_t2

0x49ae,	// (0x0002a366) popup_dyc_status_message_window_t3_ParamLimits

0x49ae,	// (0x0002a366) popup_dyc_status_message_window_t3

0x0002,

0xf294,	// (0x00034c4c) popup_dyc_status_message_window_t_ParamLimits

0xf294,	// (0x00034c4c) popup_dyc_status_message_window_t

0x2693,	// (0x0002804b) bg_heading_pane_cp01

0x49ca,	// (0x0002a382) heading_loc_req_pane_g1

0x49d2,	// (0x0002a38a) heading_loc_req_pane_g2

0x49da,	// (0x0002a392) heading_loc_req_pane_g3

0x0002,

0xf29b,	// (0x00034c53) heading_loc_req_pane_g

0x49e2,	// (0x0002a39a) heading_loc_req_pane_t1

0x4a0d,	// (0x0002a3c5) bg_popup_sub_pane_cp01_ParamLimits

0x4a0d,	// (0x0002a3c5) bg_popup_sub_pane_cp01

0x4a1b,	// (0x0002a3d3) popup_cale_events_window_g1_ParamLimits

0x4a1b,	// (0x0002a3d3) popup_cale_events_window_g1

0x4a3b,	// (0x0002a3f3) popup_cale_events_window_g2_ParamLimits

0x4a3b,	// (0x0002a3f3) popup_cale_events_window_g2

0x0001,

0xf2bd,	// (0x00034c75) popup_cale_events_window_g_ParamLimits

0xf2bd,	// (0x00034c75) popup_cale_events_window_g

0x4a5b,	// (0x0002a413) popup_cale_events_window_t1_ParamLimits

0x4a5b,	// (0x0002a413) popup_cale_events_window_t1

0x4a6d,	// (0x0002a425) popup_cale_events_window_t2_ParamLimits

0x4a6d,	// (0x0002a425) popup_cale_events_window_t2

0x4aab,	// (0x0002a463) popup_cale_events_window_t3_ParamLimits

0x4aab,	// (0x0002a463) popup_cale_events_window_t3

0x4ae5,	// (0x0002a49d) popup_cale_events_window_t4_ParamLimits

0x4ae5,	// (0x0002a49d) popup_cale_events_window_t4

0x0003,

0xf2c2,	// (0x00034c7a) popup_cale_events_window_t_ParamLimits

0xf2c2,	// (0x00034c7a) popup_cale_events_window_t

0x4b1b,	// (0x0002a4d3) call_type_pane

0x4b2b,	// (0x0002a4e3) popup_call_status_window_g1

0x4b3f,	// (0x0002a4f7) popup_call_status_window_g2

0x4b53,	// (0x0002a50b) popup_call_status_window_g3

0x0002,

0xf2cb,	// (0x00034c83) popup_call_status_window_g

0x4b62,	// (0x0002a51a) call_type_pane_g1

0x4b6b,	// (0x0002a523) call_type_pane_g2

0x0001,

0xf2d2,	// (0x00034c8a) call_type_pane_g

0x2693,	// (0x0002804b) bg_popup_sub_pane_cp02

0x4b74,	// (0x0002a52c) listscroll_popup_wml_pane

0x4b7c,	// (0x0002a534) list_wml_pane

0x4b86,	// (0x0002a53e) scroll_pane_cp013

0x4b91,	// (0x0002a549) list_single_graphic_popup_wml_pane_ParamLimits

0x4b91,	// (0x0002a549) list_single_graphic_popup_wml_pane

0x2906,	// (0x000282be) list_single_graphic_popup_wml_pane_g1

0x4ba5,	// (0x0002a55d) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2d7,	// (0x00034c8f) list_single_graphic_popup_wml_pane_g

0x4bad,	// (0x0002a565) list_single_graphic_popup_wml_pane_t1

0x4bc3,	// (0x0002a57b) aid_call_pane

0x28e6,	// (0x0002829e) popup_clock_analogue_window_g1

0x28e6,	// (0x0002829e) popup_clock_analogue_window_g2

0xb256,	// (0x00030c0e) popup_clock_analogue_window_g3

0xb256,	// (0x00030c0e) popup_clock_analogue_window_g4

0x2906,	// (0x000282be) popup_clock_analogue_window_g5

0x0004,

0xf2dc,	// (0x00034c94) popup_clock_analogue_window_g

0xb25e,	// (0x00030c16) popup_clock_analogue_window_t1

0xb26c,	// (0x00030c24) clock_digital_number_pane_ParamLimits

0xb26c,	// (0x00030c24) clock_digital_number_pane

0xb278,	// (0x00030c30) clock_digital_number_pane_cp02_ParamLimits

0xb278,	// (0x00030c30) clock_digital_number_pane_cp02

0xb284,	// (0x00030c3c) clock_digital_number_pane_cp03_ParamLimits

0xb284,	// (0x00030c3c) clock_digital_number_pane_cp03

0xb290,	// (0x00030c48) clock_digital_number_pane_cp04_ParamLimits

0xb290,	// (0x00030c48) clock_digital_number_pane_cp04

0xb2a0,	// (0x00030c58) clock_digital_separator_pane_ParamLimits

0xb2a0,	// (0x00030c58) clock_digital_separator_pane

0xb2ac,	// (0x00030c64) popup_clock_digital_window_t1

0x2906,	// (0x000282be) clock_digital_number_pane_g1

0x2906,	// (0x000282be) clock_digital_number_pane_g2

0x0001,

0xf25c,	// (0x00034c14) clock_digital_number_pane_g

0x2906,	// (0x000282be) clock_digital_separator_pane_g1

0x2906,	// (0x000282be) clock_digital_separator_pane_g2

0x0001,

0xf25c,	// (0x00034c14) clock_digital_separator_pane_g

0x2693,	// (0x0002804b) bg_popup_window_pane_cp04

0x4bcb,	// (0x0002a583) heading_pane_cp03

0x3236,	// (0x00028bee) listscroll_popup_gms_pane

0x2693,	// (0x0002804b) grid_large_graphic_popup_pane

0x4bd4,	// (0x0002a58c) listscroll_popup_gms_pane_g1

0x4bdd,	// (0x0002a595) listscroll_popup_gms_pane_g2

0x0001,

0xf2e7,	// (0x00034c9f) listscroll_popup_gms_pane_g

0x4be6,	// (0x0002a59e) scroll_pane_cp014

0x2969,	// (0x00028321) cell_large_graphic_popup_pane_ParamLimits

0x2969,	// (0x00028321) cell_large_graphic_popup_pane

0x2977,	// (0x0002832f) cell_large_graphic_popup_pane_g1_ParamLimits

0x2977,	// (0x0002832f) cell_large_graphic_popup_pane_g1

0x4bef,	// (0x0002a5a7) cell_large_graphic_popup_pane_g2_ParamLimits

0x4bef,	// (0x0002a5a7) cell_large_graphic_popup_pane_g2

0x4bfd,	// (0x0002a5b5) cell_large_graphic_popup_pane_g3_ParamLimits

0x4bfd,	// (0x0002a5b5) cell_large_graphic_popup_pane_g3

0x4c0b,	// (0x0002a5c3) cell_large_graphic_popup_pane_g4_ParamLimits

0x4c0b,	// (0x0002a5c3) cell_large_graphic_popup_pane_g4

0x0003,

0xf2ec,	// (0x00034ca4) cell_large_graphic_popup_pane_g_ParamLimits

0xf2ec,	// (0x00034ca4) cell_large_graphic_popup_pane_g

0x2693,	// (0x0002804b) grid_highlight_pane_cp010

0x2906,	// (0x000282be) bg_popup_call_pane_g1

0x4c1c,	// (0x0002a5d4) list_single_graphic_popup_conf_pane_ParamLimits

0x4c1c,	// (0x0002a5d4) list_single_graphic_popup_conf_pane

0x4c2f,	// (0x0002a5e7) list_highlight_pane_cp01

0x4c38,	// (0x0002a5f0) list_single_graphic_popup_conf_pane_g1

0x4c40,	// (0x0002a5f8) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2f5,	// (0x00034cad) list_single_graphic_popup_conf_pane_g

0x4c48,	// (0x0002a600) list_single_graphic_popup_conf_pane_t1

0x4c56,	// (0x0002a60e) linegrid_cams_pane_g1

0x4c5f,	// (0x0002a617) linegrid_cams_pane_g2

0x2ce0,	// (0x00028698) linegrid_cams_pane_g3

0x4c68,	// (0x0002a620) linegrid_cams_pane_g4

0x4c71,	// (0x0002a629) linegrid_cams_pane_g5

0x4c7a,	// (0x0002a632) linegrid_cams_pane_g6

0x321d,	// (0x00028bd5) linegrid_cams_pane_g7

0x0006,

0xf2fa,	// (0x00034cb2) linegrid_cams_pane_g

0x4c85,	// (0x0002a63d) popup_clock_analogue_window

0x4c85,	// (0x0002a63d) popup_clock_digital_window

0x2693,	// (0x0002804b) popup_phob_thumbnail_window

0x2906,	// (0x000282be) call_video_uplink_pane_g1

0x4c8e,	// (0x0002a646) call_video_uplink_pane_g2

0x0001,

0xf309,	// (0x00034cc1) call_video_uplink_pane_g

0x4c96,	// (0x0002a64e) video_uplink_pane

0x4c9e,	// (0x0002a656) mce_image_pane_g1

0x4ca8,	// (0x0002a660) mce_image_pane_g2

0x4cb2,	// (0x0002a66a) mce_image_pane_g3

0x4cba,	// (0x0002a672) mce_image_pane_g4

0x4cc2,	// (0x0002a67a) mce_image_pane_g5

0x0004,

0xf30e,	// (0x00034cc6) mce_image_pane_g

0x4cca,	// (0x0002a682) control_top_pane_stacon_cp01_ParamLimits

0x4cca,	// (0x0002a682) control_top_pane_stacon_cp01

0x4cde,	// (0x0002a696) uni_indicator_pane_stacon_cp01_ParamLimits

0x4cde,	// (0x0002a696) uni_indicator_pane_stacon_cp01

0x4cef,	// (0x0002a6a7) bg_popup_sub_pane_cp03

0x4cf9,	// (0x0002a6b1) chi_dic_find_pane

0x4d01,	// (0x0002a6b9) listscroll_chi_dic_pane

0x4d0a,	// (0x0002a6c2) main_pane_chidic_g1

0x4d1d,	// (0x0002a6d5) chi_dic_find_pane_t1

0x4d2b,	// (0x0002a6e3) find_chidic_pane

0x4d34,	// (0x0002a6ec) chi_dic_list_pane_ParamLimits

0x4d34,	// (0x0002a6ec) chi_dic_list_pane

0x4d45,	// (0x0002a6fd) scroll_pane_cp020

0x4d4d,	// (0x0002a705) find_chidic_pane_t1

0x2693,	// (0x0002804b) input_focus_pane_cp06

0x4d5c,	// (0x0002a714) list_chi_dic_pane_ParamLimits

0x4d5c,	// (0x0002a714) list_chi_dic_pane

0x4d6e,	// (0x0002a726) list_chi_dic_pane_t1_ParamLimits

0x4d6e,	// (0x0002a726) list_chi_dic_pane_t1

0x2693,	// (0x0002804b) list_highlight_pane_cp020

0x4d81,	// (0x0002a739) bg_cale_heading_pane_g1

0x4d89,	// (0x0002a741) bg_cale_heading_pane_g2

0x4d91,	// (0x0002a749) bg_cale_heading_pane_g3

0x4d99,	// (0x0002a751) bg_cale_heading_pane_g4

0x4da3,	// (0x0002a75b) bg_cale_heading_pane_g5

0x4dad,	// (0x0002a765) bg_cale_heading_pane_g6

0x4db5,	// (0x0002a76d) bg_cale_heading_pane_g7

0x4dbd,	// (0x0002a775) bg_cale_heading_pane_g8

0x4dc7,	// (0x0002a77f) bg_cale_heading_pane_g9

0x0008,

0xf319,	// (0x00034cd1) bg_cale_heading_pane_g

0x4d81,	// (0x0002a739) bg_cale_side_pane_g1

0x4dd1,	// (0x0002a789) bg_cale_side_pane_g2

0x4dd9,	// (0x0002a791) bg_cale_side_pane_g3

0x4de1,	// (0x0002a799) bg_cale_side_pane_g4

0x4de9,	// (0x0002a7a1) bg_cale_side_pane_g5

0x4df1,	// (0x0002a7a9) bg_cale_side_pane_g6

0x4df9,	// (0x0002a7b1) bg_cale_side_pane_g7

0x4e01,	// (0x0002a7b9) bg_cale_side_pane_g8

0x4e09,	// (0x0002a7c1) bg_cale_side_pane_g9

0x0008,

0xf32c,	// (0x00034ce4) bg_cale_side_pane_g

0x4e11,	// (0x0002a7c9) popup_call_status_window_ParamLimits

0x4e11,	// (0x0002a7c9) popup_call_status_window

0x4e5a,	// (0x0002a812) stacon_top_pane

0x4e62,	// (0x0002a81a) status_pane_ParamLimits

0x4e62,	// (0x0002a81a) status_pane

0x4e77,	// (0x0002a82f) status_small_pane

0x4e7f,	// (0x0002a837) control_pane

0x2693,	// (0x0002804b) stacon_bottom_pane

0x4e87,	// (0x0002a83f) list_single_mce_smart_pane_t1_ParamLimits

0x4e87,	// (0x0002a83f) list_single_mce_smart_pane_t1

0x4e9a,	// (0x0002a852) list_single_mce_smart_pane_t2_ParamLimits

0x4e9a,	// (0x0002a852) list_single_mce_smart_pane_t2

0x0001,

0xf33f,	// (0x00034cf7) list_single_mce_smart_pane_t_ParamLimits

0xf33f,	// (0x00034cf7) list_single_mce_smart_pane_t

0x4eb9,	// (0x0002a871) compass_pane

0x4ec2,	// (0x0002a87a) main_location2_pane_t1

0x4ed4,	// (0x0002a88c) main_location2_pane_t2

0x4ee6,	// (0x0002a89e) main_location2_pane_t3

0x0003,

0xf344,	// (0x00034cfc) main_location2_pane_t

0x4f2a,	// (0x0002a8e2) compass_pane_g1_ParamLimits

0x4f2a,	// (0x0002a8e2) compass_pane_g1

0x4f36,	// (0x0002a8ee) compass_pane_t1

0x4f45,	// (0x0002a8fd) compass_pane_t2

0x0005,

0xf34d,	// (0x00034d05) compass_pane_t

0x4f8c,	// (0x0002a944) text_secondary_cp61

0x500b,	// (0x0002a9c3) navi_pane_cams_g5

0x5087,	// (0x0002aa3f) navi_pane_im_t1

0x5095,	// (0x0002aa4d) navi_pane_mp_g1_ParamLimits

0x5095,	// (0x0002aa4d) navi_pane_mp_g1

0x50a9,	// (0x0002aa61) navi_pane_mp_g2_ParamLimits

0x50a9,	// (0x0002aa61) navi_pane_mp_g2

0x50b5,	// (0x0002aa6d) navi_pane_mp_g3_ParamLimits

0x50b5,	// (0x0002aa6d) navi_pane_mp_g3

0x0002,

0xf361,	// (0x00034d19) navi_pane_mp_g_ParamLimits

0xf361,	// (0x00034d19) navi_pane_mp_g

0x50c1,	// (0x0002aa79) navi_pane_mp_t1

0x50cf,	// (0x0002aa87) navi_pane_mp_t2

0x0002,

0xf368,	// (0x00034d20) navi_pane_mp_t

0x517c,	// (0x0002ab34) navi_pane_vt_g1

0x50c1,	// (0x0002aa79) navi_pane_vt_t1

0x5184,	// (0x0002ab3c) navi_slider_pane

0x3236,	// (0x00028bee) zooming_pane

0x5194,	// (0x0002ab4c) navi_slider_pane_g1

0xb2c9,	// (0x00030c81) navi_slider_pane_g2

0x0006,

0xf36f,	// (0x00034d27) navi_slider_pane_g

0x51b8,	// (0x0002ab70) aid_levels_zoom

0x51c0,	// (0x0002ab78) zooming_pane_g1

0x51c8,	// (0x0002ab80) zooming_pane_g2

0x51c8,	// (0x0002ab80) zooming_pane_g3

0x0002,

0xf37e,	// (0x00034d36) zooming_pane_g

0x51d0,	// (0x0002ab88) level_10_zoom

0x51d9,	// (0x0002ab91) level_11_zoom

0x51e2,	// (0x0002ab9a) level_1_zoom

0x51eb,	// (0x0002aba3) level_2_zoom

0x51f4,	// (0x0002abac) level_3_zoom

0x51fd,	// (0x0002abb5) level_4_zoom

0x5206,	// (0x0002abbe) level_5_zoom

0x520f,	// (0x0002abc7) level_6_zoom

0x5218,	// (0x0002abd0) level_7_zoom

0x5221,	// (0x0002abd9) level_8_zoom

0x522a,	// (0x0002abe2) level_9_zoom

0x523b,	// (0x0002abf3) popup_phob_thumbnail_window_g1

0x5243,	// (0x0002abfb) popup_phob_thumbnail_window_g2

0x0001,

0xf385,	// (0x00034d3d) popup_phob_thumbnail_window_g

0x6647,	// (0x0002bfff) level_1_location

0x664f,	// (0x0002c007) level_2_location

0x6657,	// (0x0002c00f) level_3_location

0x665f,	// (0x0002c017) level_4_location

0x3236,	// (0x00028bee) level_5_location

0x524b,	// (0x0002ac03) mce_icon_pane_g1

0x5253,	// (0x0002ac0b) mce_icon_pane_g2

0x0001,

0xf38a,	// (0x00034d42) mce_icon_pane_g

0x525b,	// (0x0002ac13) main_mup_pane_g1_ParamLimits

0x525b,	// (0x0002ac13) main_mup_pane_g1

0x525b,	// (0x0002ac13) main_mup_pane_g2_ParamLimits

0x525b,	// (0x0002ac13) main_mup_pane_g2

0x525b,	// (0x0002ac13) main_mup_pane_g3_ParamLimits

0x525b,	// (0x0002ac13) main_mup_pane_g3

0x525b,	// (0x0002ac13) main_mup_pane_g4_ParamLimits

0x525b,	// (0x0002ac13) main_mup_pane_g4

0x525b,	// (0x0002ac13) main_mup_pane_g5_ParamLimits

0x525b,	// (0x0002ac13) main_mup_pane_g5

0x525b,	// (0x0002ac13) main_mup_pane_g6_ParamLimits

0x525b,	// (0x0002ac13) main_mup_pane_g6

0x525b,	// (0x0002ac13) main_mup_pane_g7_ParamLimits

0x525b,	// (0x0002ac13) main_mup_pane_g7

0x525b,	// (0x0002ac13) main_mup_pane_g8_ParamLimits

0x525b,	// (0x0002ac13) main_mup_pane_g8

0x525b,	// (0x0002ac13) main_mup_pane_g9_ParamLimits

0x525b,	// (0x0002ac13) main_mup_pane_g9

0x525b,	// (0x0002ac13) main_mup_pane_g10_ParamLimits

0x525b,	// (0x0002ac13) main_mup_pane_g10

0x525b,	// (0x0002ac13) main_mup_pane_g11_ParamLimits

0x525b,	// (0x0002ac13) main_mup_pane_g11

0x2977,	// (0x0002832f) main_mup_pane_g12_ParamLimits

0x2977,	// (0x0002832f) main_mup_pane_g12

0x525b,	// (0x0002ac13) main_mup_pane_g13_ParamLimits

0x525b,	// (0x0002ac13) main_mup_pane_g13

0x000c,

0xf38f,	// (0x00034d47) main_mup_pane_g_ParamLimits

0xf38f,	// (0x00034d47) main_mup_pane_g

0x5269,	// (0x0002ac21) main_mup_pane_t1_ParamLimits

0x5269,	// (0x0002ac21) main_mup_pane_t1

0x5269,	// (0x0002ac21) main_mup_pane_t2_ParamLimits

0x5269,	// (0x0002ac21) main_mup_pane_t2

0x5269,	// (0x0002ac21) main_mup_pane_t3_ParamLimits

0x5269,	// (0x0002ac21) main_mup_pane_t3

0x329f,	// (0x00028c57) main_mup_pane_t4_ParamLimits

0x329f,	// (0x00028c57) main_mup_pane_t4

0x329f,	// (0x00028c57) main_mup_pane_t5_ParamLimits

0x329f,	// (0x00028c57) main_mup_pane_t5

0x527d,	// (0x0002ac35) main_mup_pane_t6_ParamLimits

0x527d,	// (0x0002ac35) main_mup_pane_t6

0x0005,

0xf3aa,	// (0x00034d62) main_mup_pane_t_ParamLimits

0xf3aa,	// (0x00034d62) main_mup_pane_t

0x2969,	// (0x00028321) mup_progress_pane_ParamLimits

0x2969,	// (0x00028321) mup_progress_pane

0x5291,	// (0x0002ac49) mup_visualizer_pane_ParamLimits

0x5291,	// (0x0002ac49) mup_visualizer_pane

0x5291,	// (0x0002ac49) mup_volume_pane_ParamLimits

0x5291,	// (0x0002ac49) mup_volume_pane

0x2985,	// (0x0002833d) mup_visualizer_pane_g1_ParamLimits

0x2985,	// (0x0002833d) mup_visualizer_pane_g1

0x529f,	// (0x0002ac57) mup_visualizer_pane_g2_ParamLimits

0x529f,	// (0x0002ac57) mup_visualizer_pane_g2

0x2977,	// (0x0002832f) mup_visualizer_pane_g3_ParamLimits

0x2977,	// (0x0002832f) mup_visualizer_pane_g3

0x0002,

0xf3b7,	// (0x00034d6f) mup_visualizer_pane_g_ParamLimits

0xf3b7,	// (0x00034d6f) mup_visualizer_pane_g

0x3423,	// (0x00028ddb) mup_volume_pane_g1

0x3423,	// (0x00028ddb) mup_volume_pane_g2

0x0001,

0xf3be,	// (0x00034d76) mup_volume_pane_g

0x3423,	// (0x00028ddb) mup_progress_pane_g1

0x3423,	// (0x00028ddb) mup_progress_pane_g2

0x3423,	// (0x00028ddb) mup_progress_pane_g3

0x0002,

0xf3c3,	// (0x00034d7b) mup_progress_pane_g

0x2693,	// (0x0002804b) bg_popup_window_pane_cp05

0x52ad,	// (0x0002ac65) heading_pane_cp02_ParamLimits

0x52ad,	// (0x0002ac65) heading_pane_cp02

0x52c7,	// (0x0002ac7f) list_popup_blid_pane

0x52cf,	// (0x0002ac87) list_blid_sat_info_pane_ParamLimits

0x52cf,	// (0x0002ac87) list_blid_sat_info_pane

0x52e2,	// (0x0002ac9a) list_blid_sat_info_pane_g1

0x52ea,	// (0x0002aca2) list_blid_sat_info_pane_t1

0x53f0,	// (0x0002ada8) mup_equalizer_pane_ParamLimits

0x53f0,	// (0x0002ada8) mup_equalizer_pane

0x5409,	// (0x0002adc1) mup_equalizer_pane_cp1_ParamLimits

0x5409,	// (0x0002adc1) mup_equalizer_pane_cp1

0x5426,	// (0x0002adde) mup_equalizer_pane_cp2_ParamLimits

0x5426,	// (0x0002adde) mup_equalizer_pane_cp2

0x5443,	// (0x0002adfb) mup_equalizer_pane_cp3_ParamLimits

0x5443,	// (0x0002adfb) mup_equalizer_pane_cp3

0x5464,	// (0x0002ae1c) mup_equalizer_pane_cp4_ParamLimits

0x5464,	// (0x0002ae1c) mup_equalizer_pane_cp4

0x5485,	// (0x0002ae3d) mup_equalizer_pane_cp5

0x5499,	// (0x0002ae51) mup_equalizer_pane_cp6

0x54ad,	// (0x0002ae65) mup_equalizer_pane_cp7

0xbb4c,	// (0x00031504) bg_popup_call_poc_act_pane_g9

0xbb54,	// (0x0003150c) bg_popup_call_poc_act_pane_g10

0xbb5c,	// (0x00031514) bg_popup_call_poc_act_pane_g11

0x000a,

0x28ee,	// (0x000282a6) mup_scale_pane

0x2906,	// (0x000282be) mup_scale_pane_g1

0x54c1,	// (0x0002ae79) mup_scale_pane_g2

0x0006,

0xf3df,	// (0x00034d97) mup_scale_pane_g

0x54f7,	// (0x0002aeaf) msg_data_pane

0x54ff,	// (0x0002aeb7) scroll_pane_cp017

0x5507,	// (0x0002aebf) bg_list_pane_cp04_ParamLimits

0x5507,	// (0x0002aebf) bg_list_pane_cp04

0x5527,	// (0x0002aedf) msg_data_pane_g1

0x552f,	// (0x0002aee7) msg_data_pane_g2

0x5539,	// (0x0002aef1) msg_data_pane_g3

0x5541,	// (0x0002aef9) msg_data_pane_g4

0x5549,	// (0x0002af01) msg_data_pane_g5

0x5551,	// (0x0002af09) msg_data_pane_g6

0x5559,	// (0x0002af11) msg_data_pane_g7

0x0006,

0xf3ee,	// (0x00034da6) msg_data_pane_g

0x5561,	// (0x0002af19) msg_text_pane_ParamLimits

0x5561,	// (0x0002af19) msg_text_pane

0x558c,	// (0x0002af44) qrid_highlight_pane_cp011_ParamLimits

0x558c,	// (0x0002af44) qrid_highlight_pane_cp011

0x2693,	// (0x0002804b) msg_body_pane

0x2693,	// (0x0002804b) msg_header_pane

0x55ab,	// (0x0002af63) input_focus_pane_cp07

0x55ce,	// (0x0002af86) msg_header_pane_t1_ParamLimits

0x55ce,	// (0x0002af86) msg_header_pane_t1

0x55e4,	// (0x0002af9c) msg_header_pane_t2_ParamLimits

0x55e4,	// (0x0002af9c) msg_header_pane_t2

0x0001,

0xf402,	// (0x00034dba) msg_header_pane_t_ParamLimits

0xf402,	// (0x00034dba) msg_header_pane_t

0x55fb,	// (0x0002afb3) msg_body_pane_g1

0x5603,	// (0x0002afbb) msg_body_pane_t1_ParamLimits

0x5603,	// (0x0002afbb) msg_body_pane_t1

0x5634,	// (0x0002afec) msg_body_pane_t2_ParamLimits

0x5634,	// (0x0002afec) msg_body_pane_t2

0x5646,	// (0x0002affe) msg_body_pane_t3_ParamLimits

0x5646,	// (0x0002affe) msg_body_pane_t3

0x0002,

0xf407,	// (0x00034dbf) msg_body_pane_t_ParamLimits

0xf407,	// (0x00034dbf) msg_body_pane_t

0x11dd,	// (0x00026b95) main_viewer_pane_g1_ParamLimits

0x11dd,	// (0x00026b95) main_viewer_pane_g1

0x11eb,	// (0x00026ba3) main_viewer_pane_g2_ParamLimits

0x11eb,	// (0x00026ba3) main_viewer_pane_g2

0x5676,	// (0x0002b02e) main_viewer_pane_g3_ParamLimits

0x5676,	// (0x0002b02e) main_viewer_pane_g3

0x5685,	// (0x0002b03d) main_viewer_pane_g4_ParamLimits

0x5685,	// (0x0002b03d) main_viewer_pane_g4

0xb2f3,	// (0x00030cab) main_viewer_pane_g5_ParamLimits

0xb2f3,	// (0x00030cab) main_viewer_pane_g5

0xb2f3,	// (0x00030cab) main_viewer_pane_g7_ParamLimits

0xb2f3,	// (0x00030cab) main_viewer_pane_g7

0x4936,	// (0x0002a2ee) main_viewer_pane_g8_ParamLimits

0x4936,	// (0x0002a2ee) main_viewer_pane_g8

0x0007,

0xf417,	// (0x00034dcf) main_viewer_pane_g_ParamLimits

0xf417,	// (0x00034dcf) main_viewer_pane_g

0x5694,	// (0x0002b04c) viewer_content_pane_ParamLimits

0x5694,	// (0x0002b04c) viewer_content_pane

0x56cf,	// (0x0002b087) main_postcard_pane_g1_ParamLimits

0x56cf,	// (0x0002b087) main_postcard_pane_g1

0x56e5,	// (0x0002b09d) main_postcard_pane_g2_ParamLimits

0x56e5,	// (0x0002b09d) main_postcard_pane_g2

0x56fb,	// (0x0002b0b3) main_postcard_pane_g3_ParamLimits

0x56fb,	// (0x0002b0b3) main_postcard_pane_g3

0x0005,

0xf428,	// (0x00034de0) main_postcard_pane_g_ParamLimits

0xf428,	// (0x00034de0) main_postcard_pane_g

0x5712,	// (0x0002b0ca) main_postcard_pane_g4

0xbce4,	// (0x0003169c) smil_status_volume_pane_g2

0x5755,	// (0x0002b10d) postcard_pane_ParamLimits

0x5755,	// (0x0002b10d) postcard_pane

0x5797,	// (0x0002b14f) postcard_pane_g1_ParamLimits

0x5797,	// (0x0002b14f) postcard_pane_g1

0x57a5,	// (0x0002b15d) postcard_pane_g2_ParamLimits

0x57a5,	// (0x0002b15d) postcard_pane_g2

0x57b1,	// (0x0002b169) postcard_pane_g3_ParamLimits

0x57b1,	// (0x0002b169) postcard_pane_g3

0x57bd,	// (0x0002b175) postcard_pane_g4_ParamLimits

0x57bd,	// (0x0002b175) postcard_pane_g4

0x57cb,	// (0x0002b183) postcard_pane_g5_ParamLimits

0x57cb,	// (0x0002b183) postcard_pane_g5

0x57e0,	// (0x0002b198) postcard_pane_g6_ParamLimits

0x57e0,	// (0x0002b198) postcard_pane_g6

0x5797,	// (0x0002b14f) postcard_pane_g7_ParamLimits

0x5797,	// (0x0002b14f) postcard_pane_g7

0x0006,

0xf435,	// (0x00034ded) postcard_pane_g_ParamLimits

0xf435,	// (0x00034ded) postcard_pane_g

0x57f4,	// (0x0002b1ac) main_mp2_pane_g1_ParamLimits

0x57f4,	// (0x0002b1ac) main_mp2_pane_g1

0x5800,	// (0x0002b1b8) main_mp2_pane_g2_ParamLimits

0x5800,	// (0x0002b1b8) main_mp2_pane_g2

0x580c,	// (0x0002b1c4) main_mp2_pane_g3_ParamLimits

0x580c,	// (0x0002b1c4) main_mp2_pane_g3

0x0002,

0xf444,	// (0x00034dfc) main_mp2_pane_g_ParamLimits

0xf444,	// (0x00034dfc) main_mp2_pane_g

0x5818,	// (0x0002b1d0) main_mp2_pane_t1_ParamLimits

0x5818,	// (0x0002b1d0) main_mp2_pane_t1

0x582d,	// (0x0002b1e5) main_mp2_pane_t2_ParamLimits

0x582d,	// (0x0002b1e5) main_mp2_pane_t2

0x583f,	// (0x0002b1f7) main_mp2_pane_t3_ParamLimits

0x583f,	// (0x0002b1f7) main_mp2_pane_t3

0x0002,

0xf44b,	// (0x00034e03) main_mp2_pane_t_ParamLimits

0xf44b,	// (0x00034e03) main_mp2_pane_t

0x5851,	// (0x0002b209) pec_content_pane_ParamLimits

0x5851,	// (0x0002b209) pec_content_pane

0x3a02,	// (0x000293ba) scroll_pane_cp015

0x5863,	// (0x0002b21b) pec_attribute_pane_ParamLimits

0x5863,	// (0x0002b21b) pec_attribute_pane

0x5873,	// (0x0002b22b) pec_content_pane_g1_ParamLimits

0x5873,	// (0x0002b22b) pec_content_pane_g1

0x587f,	// (0x0002b237) pec_content_pane_t1_ParamLimits

0x587f,	// (0x0002b237) pec_content_pane_t1

0x5891,	// (0x0002b249) pec_content_pane_t2_ParamLimits

0x5891,	// (0x0002b249) pec_content_pane_t2

0x0001,

0xf452,	// (0x00034e0a) pec_content_pane_t_ParamLimits

0xf452,	// (0x00034e0a) pec_content_pane_t

0x58a3,	// (0x0002b25b) list_single_graphic_pane_cp01_ParamLimits

0x58a3,	// (0x0002b25b) list_single_graphic_pane_cp01

0x28ee,	// (0x000282a6) bg_popup_sub_pane_cp04

0x58b8,	// (0x0002b270) popup_mup_playback_window_g1

0x58c4,	// (0x0002b27c) popup_mup_playback_window_t1

0x58d9,	// (0x0002b291) popup_mup_playback_window_t2

0x0001,

0xf457,	// (0x00034e0f) popup_mup_playback_window_t

0x592e,	// (0x0002b2e6) main_image_pane_g1_ParamLimits

0x592e,	// (0x0002b2e6) main_image_pane_g1

0x5a0b,	// (0x0002b3c3) scroll_pane_cp018_ParamLimits

0x5a0b,	// (0x0002b3c3) scroll_pane_cp018

0x5a23,	// (0x0002b3db) scroll_pane_cp016_ParamLimits

0x5a23,	// (0x0002b3db) scroll_pane_cp016

0x5a57,	// (0x0002b40f) smil2_image_pane_ParamLimits

0x5a57,	// (0x0002b40f) smil2_image_pane

0x5a87,	// (0x0002b43f) smil2_root_pane_ParamLimits

0x5a87,	// (0x0002b43f) smil2_root_pane

0x5abf,	// (0x0002b477) smil2_text_pane_ParamLimits

0x5abf,	// (0x0002b477) smil2_text_pane

0x2693,	// (0x0002804b) bg_list_pane_cp06

0x5b47,	// (0x0002b4ff) grid_radio_pane

0x2693,	// (0x0002804b) bg_popup_window_pane_cp06

0x5b4f,	// (0x0002b507) main_fmradio_pane_t1

0xbb64,	// (0x0003151c) heading_pane_cp04

0x5b5d,	// (0x0002b515) main_fmradio_pane_t2

0xbb6c,	// (0x00031524) popup_cale_lunar_info_window_g1

0x5b6b,	// (0x0002b523) main_fmradio_pane_t3

0xbb74,	// (0x0003152c) popup_cale_lunar_info_window_g2

0x5b79,	// (0x0002b531) main_fmradio_pane_t4

0x0001,

0x5b87,	// (0x0002b53f) main_fmradio_pane_t5

0x0004,

0xf537,	// (0x00034eef) popup_cale_lunar_info_window_g

0xf46c,	// (0x00034e24) main_fmradio_pane_t

0x5b95,	// (0x0002b54d) wait_bar_pane_cp03

0x5b9d,	// (0x0002b555) cell_fmradio_pane_ParamLimits

0x5b9d,	// (0x0002b555) cell_fmradio_pane

0x5797,	// (0x0002b14f) cell_fmradio_pane_g1_ParamLimits

0x5797,	// (0x0002b14f) cell_fmradio_pane_g1

0x2693,	// (0x0002804b) grid_highlight_pane_cp011

0x5bb0,	// (0x0002b568) poc_content_pane_ParamLimits

0x5bb0,	// (0x0002b568) poc_content_pane

0x5bc2,	// (0x0002b57a) scroll_pane_cp019

0x5bca,	// (0x0002b582) popup_call_poc_act_window_ParamLimits

0x5bca,	// (0x0002b582) popup_call_poc_act_window

0x5bee,	// (0x0002b5a6) popup_call_poc_inact_window_ParamLimits

0x5bee,	// (0x0002b5a6) popup_call_poc_inact_window

0xf50e,	// (0x00034ec6) bg_popup_call_poc_act_pane_g

0xbadc,	// (0x00031494) bg_popup_call_poc_inact_pane_g1

0xbae4,	// (0x0003149c) bg_popup_call_poc_inact_pane_g2

0x5c07,	// (0x0002b5bf) popup_call_poc_act_window_g2

0xbaec,	// (0x000314a4) bg_popup_call_poc_inact_pane_g3

0xbaf4,	// (0x000314ac) bg_popup_call_poc_inact_pane_g4

0xbafc,	// (0x000314b4) bg_popup_call_poc_inact_pane_g5

0x5c0f,	// (0x0002b5c7) popup_call_poc_act_window_t1_ParamLimits

0x5c0f,	// (0x0002b5c7) popup_call_poc_act_window_t1

0x5c37,	// (0x0002b5ef) popup_call_poc_act_window_t2_ParamLimits

0x5c37,	// (0x0002b5ef) popup_call_poc_act_window_t2

0x5c5f,	// (0x0002b617) popup_call_poc_act_window_t3_ParamLimits

0x5c5f,	// (0x0002b617) popup_call_poc_act_window_t3

0x5c87,	// (0x0002b63f) popup_call_poc_act_window_t4_ParamLimits

0x5c87,	// (0x0002b63f) popup_call_poc_act_window_t4

0x0003,

0xf477,	// (0x00034e2f) popup_call_poc_act_window_t_ParamLimits

0xf477,	// (0x00034e2f) popup_call_poc_act_window_t

0xbb04,	// (0x000314bc) bg_popup_call_poc_inact_pane_g6

0xbb0c,	// (0x000314c4) bg_popup_call_poc_inact_pane_g7

0xbb14,	// (0x000314cc) bg_popup_call_poc_inact_pane_g8

0x5c99,	// (0x0002b651) popup_call_poc_inact_window_g2

0xbb1c,	// (0x000314d4) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4fb,	// (0x00034eb3) bg_popup_call_poc_inact_pane_g

0x5ca1,	// (0x0002b659) popup_call_poc_inact_window_t1_ParamLimits

0x5ca1,	// (0x0002b659) popup_call_poc_inact_window_t1

0x5cb6,	// (0x0002b66e) popup_call_poc_inact_window_t2_ParamLimits

0x5cb6,	// (0x0002b66e) popup_call_poc_inact_window_t2

0x5ccb,	// (0x0002b683) popup_call_poc_inact_window_t3_ParamLimits

0x5ccb,	// (0x0002b683) popup_call_poc_inact_window_t3

0x0002,

0xf480,	// (0x00034e38) popup_call_poc_inact_window_t_ParamLimits

0xf480,	// (0x00034e38) popup_call_poc_inact_window_t

0xbc5c,	// (0x00031614) context_pane_ParamLimits

0x686f,	// (0x0002c227) signal_pane_ParamLimits

0x3236,	// (0x00028bee) main_call2_pane

0xbc35,	// (0x000315ed) popup_phob_thumbnail2_window_ParamLimits

0xbc35,	// (0x000315ed) popup_phob_thumbnail2_window

0xb2db,	// (0x00030c93) aid_hotspot_pointer_arrow_pane

0xb2e3,	// (0x00030c9b) aid_hotspot_pointer_hand_pane

0x6611,	// (0x0002bfc9) phob_pre_status_pane_g5

0x2910,	// (0x000282c8) cams_zoom_pane_ParamLimits

0x2910,	// (0x000282c8) image_vga_pane_ParamLimits

0x2977,	// (0x0002832f) main_camera_pane_g1_ParamLimits

0x2977,	// (0x0002832f) main_camera_pane_g2_ParamLimits

0x2977,	// (0x0002832f) main_camera_pane_g3_ParamLimits

0x2977,	// (0x0002832f) main_camera_pane_g4_ParamLimits

0x2977,	// (0x0002832f) main_camera_pane_g5_ParamLimits

0x2977,	// (0x0002832f) main_camera_pane_g6_ParamLimits

0x2977,	// (0x0002832f) main_camera_pane_g7_ParamLimits

0xf1ab,	// (0x00034b63) main_camera_pane_g_ParamLimits

0x329f,	// (0x00028c57) main_camera_pane_t1_ParamLimits

0x329f,	// (0x00028c57) main_camera_pane_t2_ParamLimits

0xf1bc,	// (0x00034b74) main_camera_pane_t_ParamLimits

0x28ee,	// (0x000282a6) bg_popup_preview_window_pane_cp01_ParamLimits

0x28ee,	// (0x000282a6) bg_popup_preview_window_pane_cp01

0x5ce0,	// (0x0002b698) popup_phob_thumbnail2_window_g1_ParamLimits

0x5ce0,	// (0x0002b698) popup_phob_thumbnail2_window_g1

0x2693,	// (0x0002804b) call2_cli_visual_pane

0x5d07,	// (0x0002b6bf) popup_call2_audio_conf_window_ParamLimits

0x5d07,	// (0x0002b6bf) popup_call2_audio_conf_window

0x5d27,	// (0x0002b6df) popup_call2_audio_first_window_ParamLimits

0x5d27,	// (0x0002b6df) popup_call2_audio_first_window

0x5dbd,	// (0x0002b775) popup_call2_audio_in_window_ParamLimits

0x5dbd,	// (0x0002b775) popup_call2_audio_in_window

0x5e05,	// (0x0002b7bd) popup_call2_audio_out_window_ParamLimits

0x5e05,	// (0x0002b7bd) popup_call2_audio_out_window

0x5e6f,	// (0x0002b827) popup_call2_audio_second_window_ParamLimits

0x5e6f,	// (0x0002b827) popup_call2_audio_second_window

0x5ed5,	// (0x0002b88d) popup_call2_audio_wait_window_ParamLimits

0x5ed5,	// (0x0002b88d) popup_call2_audio_wait_window

0x2693,	// (0x0002804b) bg_popup_call2_act_pane_cp03

0x28d0,	// (0x00028288) list_conf_pane_cp

0x5f0f,	// (0x0002b8c7) popup_call2_audio_conf_window_t1

0x4c1c,	// (0x0002a5d4) list_single_graphic_popup_conf2_pane_ParamLimits

0x4c1c,	// (0x0002a5d4) list_single_graphic_popup_conf2_pane

0x4c2f,	// (0x0002a5e7) list_highlight_pane_cp04

0x5f1d,	// (0x0002b8d5) list_single_graphic_popup_conf2_pane_g1

0x4c40,	// (0x0002a5f8) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf487,	// (0x00034e3f) list_single_graphic_popup_conf2_pane_g

0x5f27,	// (0x0002b8df) list_single_graphic_popup_conf2_pane_t1

0x5f35,	// (0x0002b8ed) bg_popup_call2_act_pane_cp01_ParamLimits

0x5f35,	// (0x0002b8ed) bg_popup_call2_act_pane_cp01

0x5fbf,	// (0x0002b977) call_type_pane_cp05_ParamLimits

0x5fbf,	// (0x0002b977) call_type_pane_cp05

0x6013,	// (0x0002b9cb) popup_call2_audio_second_window_g1_ParamLimits

0x6013,	// (0x0002b9cb) popup_call2_audio_second_window_g1

0x6067,	// (0x0002ba1f) popup_call2_audio_second_window_g2_ParamLimits

0x6067,	// (0x0002ba1f) popup_call2_audio_second_window_g2

0x0002,

0xf48c,	// (0x00034e44) popup_call2_audio_second_window_g_ParamLimits

0xf48c,	// (0x00034e44) popup_call2_audio_second_window_g

0x60cc,	// (0x0002ba84) popup_call2_audio_second_window_t1_ParamLimits

0x60cc,	// (0x0002ba84) popup_call2_audio_second_window_t1

0x6187,	// (0x0002bb3f) popup_call2_audio_second_window_t2_ParamLimits

0x6187,	// (0x0002bb3f) popup_call2_audio_second_window_t2

0x61da,	// (0x0002bb92) popup_call2_audio_second_window_t3_ParamLimits

0x61da,	// (0x0002bb92) popup_call2_audio_second_window_t3

0x0003,

0xf493,	// (0x00034e4b) popup_call2_audio_second_window_t_ParamLimits

0xf493,	// (0x00034e4b) popup_call2_audio_second_window_t

0x2693,	// (0x0002804b) bg_popup_call2_in_pane_cp02

0x269d,	// (0x00028055) call_type_pane_cp04

0x62cd,	// (0x0002bc85) popup_call2_audio_wait_window_g1

0x62d5,	// (0x0002bc8d) popup_call2_audio_wait_window_g2

0x0001,

0xf49c,	// (0x00034e54) popup_call2_audio_wait_window_g

0x26b5,	// (0x0002806d) popup_call2_audio_wait_window_t3

0x62dd,	// (0x0002bc95) bg_popup_call2_act_pane_ParamLimits

0x62dd,	// (0x0002bc95) bg_popup_call2_act_pane

0x639d,	// (0x0002bd55) call_type_pane_cp03_ParamLimits

0x639d,	// (0x0002bd55) call_type_pane_cp03

0x6401,	// (0x0002bdb9) popup_call2_audio_first_window_g1_ParamLimits

0x6401,	// (0x0002bdb9) popup_call2_audio_first_window_g1

0x6471,	// (0x0002be29) popup_call2_audio_first_window_g2_ParamLimits

0x6471,	// (0x0002be29) popup_call2_audio_first_window_g2

0x64d5,	// (0x0002be8d) popup_call2_audio_first_window_g3_ParamLimits

0x64d5,	// (0x0002be8d) popup_call2_audio_first_window_g3

0x0004,

0xf4a1,	// (0x00034e59) popup_call2_audio_first_window_g_ParamLimits

0xf4a1,	// (0x00034e59) popup_call2_audio_first_window_g

0xb379,	// (0x00030d31) popup_call2_audio_first_window_t1_ParamLimits

0xb379,	// (0x00030d31) popup_call2_audio_first_window_t1

0xb47c,	// (0x00030e34) popup_call2_audio_first_window_t4_ParamLimits

0xb47c,	// (0x00030e34) popup_call2_audio_first_window_t4

0xb55f,	// (0x00030f17) popup_call2_audio_first_window_t5_ParamLimits

0xb55f,	// (0x00030f17) popup_call2_audio_first_window_t5

0x0003,

0xf4ac,	// (0x00034e64) popup_call2_audio_first_window_t_ParamLimits

0xf4ac,	// (0x00034e64) popup_call2_audio_first_window_t

0x28e6,	// (0x0002829e) bg_popup_call2_act_pane_g1

0xbb7c,	// (0x00031534) popup_cale_lunar_info_window_t1

0xbb8a,	// (0x00031542) popup_cale_lunar_info_window_t2

0xbb98,	// (0x00031550) popup_cale_lunar_info_window_t3

0x2693,	// (0x0002804b) bg_popup_call2_bubble_pane

0xb660,	// (0x00031018) bg_popup_call2_in_pane_cp01_ParamLimits

0xb660,	// (0x00031018) bg_popup_call2_in_pane_cp01

0x234b,	// (0x00027d03) call_type_pane_cp02

0x64f5,	// (0x0002bead) popup_call2_audio_out_window_g1_ParamLimits

0x64f5,	// (0x0002bead) popup_call2_audio_out_window_g1

0xb6a8,	// (0x00031060) popup_call2_audio_out_window_g2_ParamLimits

0xb6a8,	// (0x00031060) popup_call2_audio_out_window_g2

0x6521,	// (0x0002bed9) popup_call2_audio_out_window_g3_ParamLimits

0x6521,	// (0x0002bed9) popup_call2_audio_out_window_g3

0x0003,

0xf4b5,	// (0x00034e6d) popup_call2_audio_out_window_g_ParamLimits

0xf4b5,	// (0x00034e6d) popup_call2_audio_out_window_g

0xb6df,	// (0x00031097) popup_call2_audio_out_window_t1_ParamLimits

0xb6df,	// (0x00031097) popup_call2_audio_out_window_t1

0xb73e,	// (0x000310f6) popup_call2_audio_out_window_t2_ParamLimits

0xb73e,	// (0x000310f6) popup_call2_audio_out_window_t2

0xb792,	// (0x0003114a) popup_call2_audio_out_window_t3_ParamLimits

0xb792,	// (0x0003114a) popup_call2_audio_out_window_t3

0xb7a8,	// (0x00031160) popup_call2_audio_out_window_t4_ParamLimits

0xb7a8,	// (0x00031160) popup_call2_audio_out_window_t4

0xb7be,	// (0x00031176) popup_call2_audio_out_window_t5_ParamLimits

0xb7be,	// (0x00031176) popup_call2_audio_out_window_t5

0x0005,

0xf4be,	// (0x00034e76) popup_call2_audio_out_window_t_ParamLimits

0xf4be,	// (0x00034e76) popup_call2_audio_out_window_t

0xb822,	// (0x000311da) bg_popup_call2_in_pane_ParamLimits

0xb822,	// (0x000311da) bg_popup_call2_in_pane

0xb87e,	// (0x00031236) popup_call2_audio_in_window_g1_ParamLimits

0xb87e,	// (0x00031236) popup_call2_audio_in_window_g1

0xb8b6,	// (0x0003126e) popup_call2_audio_in_window_g2_ParamLimits

0xb8b6,	// (0x0003126e) popup_call2_audio_in_window_g2

0xb8ee,	// (0x000312a6) popup_call2_audio_in_window_g3_ParamLimits

0xb8ee,	// (0x000312a6) popup_call2_audio_in_window_g3

0x0003,

0xf4cb,	// (0x00034e83) popup_call2_audio_in_window_g_ParamLimits

0xf4cb,	// (0x00034e83) popup_call2_audio_in_window_g

0xb946,	// (0x000312fe) popup_call2_audio_in_window_t1_ParamLimits

0xb946,	// (0x000312fe) popup_call2_audio_in_window_t1

0xb9c6,	// (0x0003137e) popup_call2_audio_in_window_t2_ParamLimits

0xb9c6,	// (0x0003137e) popup_call2_audio_in_window_t2

0xba46,	// (0x000313fe) popup_call2_audio_in_window_t3_ParamLimits

0xba46,	// (0x000313fe) popup_call2_audio_in_window_t3

0xba60,	// (0x00031418) popup_call2_audio_in_window_t4_ParamLimits

0xba60,	// (0x00031418) popup_call2_audio_in_window_t4

0xba72,	// (0x0003142a) popup_call2_audio_in_window_t5_ParamLimits

0xba72,	// (0x0003142a) popup_call2_audio_in_window_t5

0xba87,	// (0x0003143f) popup_call2_audio_in_window_t6_ParamLimits

0xba87,	// (0x0003143f) popup_call2_audio_in_window_t6

0x0005,

0xf4d4,	// (0x00034e8c) popup_call2_audio_in_window_t_ParamLimits

0xf4d4,	// (0x00034e8c) popup_call2_audio_in_window_t

0x28e6,	// (0x0002829e) bg_popup_call2_in_pane_g1

0xbba6,	// (0x0003155e) popup_cale_lunar_info_window_t4

0x0003,

0xf53c,	// (0x00034ef4) popup_cale_lunar_info_window_t

0x28ee,	// (0x000282a6) bg_popup_call2_rect_pane_ParamLimits

0x28ee,	// (0x000282a6) bg_popup_call2_rect_pane

0x2693,	// (0x0002804b) call2_cli_visual_graphic_pane

0x2693,	// (0x0002804b) call2_cli_visual_text_pane

0xbcf7,	// (0x000316af) smil_status_volume_pane_g3

0x0002,

0x2906,	// (0x000282be) call2_cli_visual_graphic_pane_g1

0x2906,	// (0x000282be) call2_cli_visual_graphic_pane_g2

0x2906,	// (0x000282be) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4e1,	// (0x00034e99) call2_cli_visual_graphic_pane_g

0xba9c,	// (0x00031454) bg_popup_call2_rect_pane_g1

0x2c93,	// (0x0002864b) bg_popup_call2_rect_pane_g2

0xbaa4,	// (0x0003145c) bg_popup_call2_rect_pane_g3

0xbaac,	// (0x00031464) bg_popup_call2_rect_pane_g4

0xbab4,	// (0x0003146c) bg_popup_call2_rect_pane_g5

0xbabc,	// (0x00031474) bg_popup_call2_rect_pane_g6

0xbac4,	// (0x0003147c) bg_popup_call2_rect_pane_g7

0xbacc,	// (0x00031484) bg_popup_call2_rect_pane_g8

0xbad4,	// (0x0003148c) bg_popup_call2_rect_pane_g9

0x0008,

0xf4e8,	// (0x00034ea0) bg_popup_call2_rect_pane_g

0xbadc,	// (0x00031494) bg_popup_call2_bubble_pane_g1

0xbae4,	// (0x0003149c) bg_popup_call2_bubble_pane_g2

0xbaec,	// (0x000314a4) bg_popup_call2_bubble_pane_g3

0xbaf4,	// (0x000314ac) bg_popup_call2_bubble_pane_g4

0xbafc,	// (0x000314b4) bg_popup_call2_bubble_pane_g5

0xbb04,	// (0x000314bc) bg_popup_call2_bubble_pane_g6

0xbb0c,	// (0x000314c4) bg_popup_call2_bubble_pane_g7

0xbb14,	// (0x000314cc) bg_popup_call2_bubble_pane_g8

0xbb1c,	// (0x000314d4) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4fb,	// (0x00034eb3) bg_popup_call2_bubble_pane_g

0x2d23,	// (0x000286db) aid_cale_week_size_cell_pane

0x32b3,	// (0x00028c6b) aid_cams_cif_uncrop_pane_ParamLimits

0x32b3,	// (0x00028c6b) aid_cams_cif_uncrop_pane

0x342d,	// (0x00028de5) aid_cams_size_cell_ParamLimits

0x342d,	// (0x00028de5) aid_cams_size_cell

0x3441,	// (0x00028df9) grid_cams_pane_ParamLimits

0x345b,	// (0x00028e13) linegrid_cams_pane_ParamLimits

0x3591,	// (0x00028f49) call_video_pane_t1

0x35af,	// (0x00028f67) call_video_pane_t2

0x0001,

0xf208,	// (0x00034bc0) call_video_pane_t

0x3c28,	// (0x000295e0) aid_cale_month_size_cell_pane_ParamLimits

0x3c28,	// (0x000295e0) aid_cale_month_size_cell_pane

0xf580,	// (0x00034f38) smil_status_volume_pane_g

0xbd04,	// (0x000316bc) volume_smil_pane_ParamLimits

0xb10f,	// (0x00030ac7) aid_popup2_width_pane

0x2beb,	// (0x000285a3) cell_qdial_pane_g4_ParamLimits

0x2beb,	// (0x000285a3) cell_qdial_pane_g4

0x4f0a,	// (0x0002a8c2) aid_blid_cardinal_pane_ParamLimits

0x4f16,	// (0x0002a8ce) aid_blid_destination_pane_ParamLimits

0x4f16,	// (0x0002a8ce) aid_blid_destination_pane

0x28ee,	// (0x000282a6) bg_popup_call_poc_act_pane_ParamLimits

0x28ee,	// (0x000282a6) bg_popup_call_poc_act_pane

0x28ee,	// (0x000282a6) bg_popup_call_poc_inact_pane_ParamLimits

0x28ee,	// (0x000282a6) bg_popup_call_poc_inact_pane

0xbb24,	// (0x000314dc) bg_popup_call_poc_act_pane_g1

0xbb2c,	// (0x000314e4) bg_popup_call_poc_act_pane_g2

0xbb34,	// (0x000314ec) bg_popup_call_poc_act_pane_g3

0xbaf4,	// (0x000314ac) bg_popup_call_poc_act_pane_g4

0xbafc,	// (0x000314b4) bg_popup_call_poc_act_pane_g5

0xbb3c,	// (0x000314f4) bg_popup_call_poc_act_pane_g6

0xbb0c,	// (0x000314c4) bg_popup_call_poc_act_pane_g7

0xbb44,	// (0x000314fc) bg_popup_call_poc_act_pane_g8

0x2693,	// (0x0002804b) main_usb_pane

0xbc10,	// (0x000315c8) popup_cale_lunar_info_window

0x38e9,	// (0x000292a1) im_reading_pane_t1_ParamLimits

0x3922,	// (0x000292da) list_im_pane_ParamLimits

0x3933,	// (0x000292eb) scroll_pane_cp07_ParamLimits

0x2693,	// (0x0002804b) grid_highlight_pane_cp012

0x28ee,	// (0x000282a6) mup_scale_pane_ParamLimits

0x5797,	// (0x0002b14f) main_usb_pane_g1_ParamLimits

0x5797,	// (0x0002b14f) main_usb_pane_g1

0x656f,	// (0x0002bf27) main_usb_pane_g2_ParamLimits

0x656f,	// (0x0002bf27) main_usb_pane_g2

0x0001,

0xf525,	// (0x00034edd) main_usb_pane_g_ParamLimits

0xf525,	// (0x00034edd) main_usb_pane_g

0x6585,	// (0x0002bf3d) main_usb_pane_t1_ParamLimits

0x6585,	// (0x0002bf3d) main_usb_pane_t1

0x6597,	// (0x0002bf4f) main_usb_pane_t2_ParamLimits

0x6597,	// (0x0002bf4f) main_usb_pane_t2

0x65a9,	// (0x0002bf61) main_usb_pane_t3_ParamLimits

0x65a9,	// (0x0002bf61) main_usb_pane_t3

0x65bb,	// (0x0002bf73) main_usb_pane_t4_ParamLimits

0x65bb,	// (0x0002bf73) main_usb_pane_t4

0x65cd,	// (0x0002bf85) main_usb_pane_t5_ParamLimits

0x65cd,	// (0x0002bf85) main_usb_pane_t5

0x65df,	// (0x0002bf97) main_usb_pane_t6_ParamLimits

0x65df,	// (0x0002bf97) main_usb_pane_t6

0x0005,

0xf52a,	// (0x00034ee2) main_usb_pane_t_ParamLimits

0x4eb9,	// (0x0002a871) aid_text_placing

0x4ec2,	// (0x0002a87a) main_location2_pane_t1_ParamLimits

0x4ed4,	// (0x0002a88c) main_location2_pane_t2_ParamLimits

0x4ee6,	// (0x0002a89e) main_location2_pane_t3_ParamLimits

0x4ef8,	// (0x0002a8b0) main_location2_pane_t4_ParamLimits

0x4ef8,	// (0x0002a8b0) main_location2_pane_t4

0xf344,	// (0x00034cfc) main_location2_pane_t_ParamLimits

0x292a,	// (0x000282e2) find_pinb_pane_g2_ParamLimits

0x292a,	// (0x000282e2) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x00034a78) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x00034a78) find_pinb_pane_g

0x2936,	// (0x000282ee) find_pinb_pane_t1_ParamLimits

0x2948,	// (0x00028300) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x00034a7d) find_pinb_pane_t_ParamLimits

0x2693,	// (0x0002804b) main_call3_pane

0x4152,	// (0x00029b0a) cale_month_day_heading_pane_t1_ParamLimits

0x41d8,	// (0x00029b90) cale_month_day_heading_pane_t2_ParamLimits

0x4251,	// (0x00029c09) cale_month_day_heading_pane_t3_ParamLimits

0x42ca,	// (0x00029c82) cale_month_day_heading_pane_t4_ParamLimits

0x434b,	// (0x00029d03) cale_month_day_heading_pane_t5_ParamLimits

0x43d4,	// (0x00029d8c) cale_month_day_heading_pane_t6_ParamLimits

0x445d,	// (0x00029e15) cale_month_day_heading_pane_t7_ParamLimits

0xf240,	// (0x00034bf8) cale_month_day_heading_pane_t_ParamLimits

0x46dd,	// (0x0002a095) smil_status_volume_pane

0x5773,	// (0x0002b12b) postcard_address_pane_ParamLimits

0x5773,	// (0x0002b12b) postcard_address_pane

0x5785,	// (0x0002b13d) postcard_message_pane_ParamLimits

0x5785,	// (0x0002b13d) postcard_message_pane

0x654d,	// (0x0002bf05) call2_cli_visual_pane_t1_ParamLimits

0x654d,	// (0x0002bf05) call2_cli_visual_pane_t1

0xbd31,	// (0x000316e9) postcard_message_pane_t1_ParamLimits

0xbd31,	// (0x000316e9) postcard_message_pane_t1

0xbd19,	// (0x000316d1) postcard_address_pane_t1_ParamLimits

0xbd19,	// (0x000316d1) postcard_address_pane_t1

0x6a21,	// (0x0002c3d9) popup_call3_audio_in_window_ParamLimits

0x6a21,	// (0x0002c3d9) popup_call3_audio_in_window

0x68ac,	// (0x0002c264) bg_popup_call3_in_pane_ParamLimits

0x68ac,	// (0x0002c264) bg_popup_call3_in_pane

0x6922,	// (0x0002c2da) popup_call3_audio_in_window_g1_ParamLimits

0x6922,	// (0x0002c2da) popup_call3_audio_in_window_g1

0x6942,	// (0x0002c2fa) popup_call3_audio_in_window_g2_ParamLimits

0x6942,	// (0x0002c2fa) popup_call3_audio_in_window_g2

0x6962,	// (0x0002c31a) popup_call3_audio_in_window_g3_ParamLimits

0x6962,	// (0x0002c31a) popup_call3_audio_in_window_g3

0x0003,

0xf587,	// (0x00034f3f) popup_call3_audio_in_window_g_ParamLimits

0xf587,	// (0x00034f3f) popup_call3_audio_in_window_g

0x6993,	// (0x0002c34b) popup_call3_audio_in_window_t1_ParamLimits

0x6993,	// (0x0002c34b) popup_call3_audio_in_window_t1

0x69d1,	// (0x0002c389) popup_call3_audio_in_window_t2_ParamLimits

0x69d1,	// (0x0002c389) popup_call3_audio_in_window_t2

0x6a0f,	// (0x0002c3c7) popup_call3_audio_in_window_t3_ParamLimits

0x6a0f,	// (0x0002c3c7) popup_call3_audio_in_window_t3

0x0002,

0xf590,	// (0x00034f48) popup_call3_audio_in_window_t_ParamLimits

0xf590,	// (0x00034f48) popup_call3_audio_in_window_t

0x3236,	// (0x00028bee) bg_popup_call3_rect_pane

0xba9c,	// (0x00031454) bg_popup_call3_rect_pane_g1

0x2c93,	// (0x0002864b) bg_popup_call3_rect_pane_g2

0xbaa4,	// (0x0003145c) bg_popup_call3_rect_pane_g3

0xbaac,	// (0x00031464) bg_popup_call3_rect_pane_g4

0xbab4,	// (0x0003146c) bg_popup_call3_rect_pane_g5

0xbabc,	// (0x00031474) bg_popup_call3_rect_pane_g6

0xbac4,	// (0x0003147c) bg_popup_call3_rect_pane_g7

0x21d9,	// (0x00027b91) mup_visualizer_osc_pane

0x21d9,	// (0x00027b91) mup_visualizer_spec_pane

0x68dc,	// (0x0002c294) call3_video_qcif_pane_ParamLimits

0x68dc,	// (0x0002c294) call3_video_qcif_pane

0x68ef,	// (0x0002c2a7) call3_video_qcif_uncrop_pane_ParamLimits

0x68ef,	// (0x0002c2a7) call3_video_qcif_uncrop_pane

0x68fd,	// (0x0002c2b5) call3_video_subqcif_pane_ParamLimits

0x68fd,	// (0x0002c2b5) call3_video_subqcif_pane

0x6911,	// (0x0002c2c9) call3_video_subqcif_uncrop_pane_ParamLimits

0x6911,	// (0x0002c2c9) call3_video_subqcif_uncrop_pane

0x6982,	// (0x0002c33a) popup_call3_audio_in_window_g4_ParamLimits

0x6982,	// (0x0002c33a) popup_call3_audio_in_window_g4

0x21d9,	// (0x00027b91) mup_spec_half_pane

0x21d9,	// (0x00027b91) mup_spec_half_pane_cp

0x21d9,	// (0x00027b91) mup_osc_middle_pane

0x3423,	// (0x00028ddb) mup_visualizer_osc_pane_g1

0xbcaa,	// (0x00031662) mup_spec_bar_pane_ParamLimits

0xbcaa,	// (0x00031662) mup_spec_bar_pane

0x3423,	// (0x00028ddb) mup_spec_bar_pane_g1

0x3423,	// (0x00028ddb) mup_spec_bar_pane_g2

0x0001,

0xf3be,	// (0x00034d76) mup_spec_bar_pane_g

0x2d23,	// (0x000286db) aid_cale_week_size_cell_pane_ParamLimits

0x2d3d,	// (0x000286f5) bg_cale_heading_pane_ParamLimits

0x2d55,	// (0x0002870d) bg_cale_pane_cp01_ParamLimits

0x2d72,	// (0x0002872a) cale_week_corner_pane_ParamLimits

0x2d91,	// (0x00028749) cale_week_day_heading_pane_ParamLimits

0x2dae,	// (0x00028766) cale_week_scroll_pane_g1_ParamLimits

0x2dc1,	// (0x00028779) cale_week_scroll_pane_g2_ParamLimits

0x2dd9,	// (0x00028791) cale_week_scroll_pane_g3_ParamLimits

0x2df1,	// (0x000287a9) cale_week_scroll_pane_g4_ParamLimits

0x2e09,	// (0x000287c1) cale_week_scroll_pane_g5_ParamLimits

0x2e29,	// (0x000287e1) cale_week_scroll_pane_g6_ParamLimits

0x2e49,	// (0x00028801) cale_week_scroll_pane_g7_ParamLimits

0x2e69,	// (0x00028821) cale_week_scroll_pane_g8_ParamLimits

0x2e8d,	// (0x00028845) cale_week_scroll_pane_g9_ParamLimits

0x2ea5,	// (0x0002885d) cale_week_scroll_pane_g10_ParamLimits

0x2ebd,	// (0x00028875) cale_week_scroll_pane_g11_ParamLimits

0x2ed5,	// (0x0002888d) cale_week_scroll_pane_g12_ParamLimits

0x2eed,	// (0x000288a5) cale_week_scroll_pane_g13_ParamLimits

0x2eed,	// (0x000288a5) cale_week_scroll_pane_g14_ParamLimits

0x2eed,	// (0x000288a5) cale_week_scroll_pane_g15_ParamLimits

0xf151,	// (0x00034b09) cale_week_scroll_pane_g_ParamLimits

0x2f29,	// (0x000288e1) cale_week_time_pane_ParamLimits

0x2f4d,	// (0x00028905) grid_cale_week_pane_ParamLimits

0x2f73,	// (0x0002892b) listscroll_cale_week_pane_t1

0x2f85,	// (0x0002893d) scroll_pane_cp08_ParamLimits

0x3cb5,	// (0x0002966d) cale_month_corner_pane_ParamLimits

0x40d3,	// (0x00029a8b) cale_month_pane_t1

0x40e5,	// (0x00029a9d) cale_month_week_pane_ParamLimits

0x4b2b,	// (0x0002a4e3) popup_call_status_window_g1_ParamLimits

0x4b3f,	// (0x0002a4f7) popup_call_status_window_g2_ParamLimits

0x4b53,	// (0x0002a50b) popup_call_status_window_g3_ParamLimits

0xf2cb,	// (0x00034c83) popup_call_status_window_g_ParamLimits

0x4bbb,	// (0x0002a573) aid_call2_pane

0x55b4,	// (0x0002af6c) msg_header_pane_g1

0x5773,	// (0x0002b12b) postcard_address2_pane_ParamLimits

0x5773,	// (0x0002b12b) postcard_address2_pane

0x5785,	// (0x0002b13d) postcard_message2_pane_ParamLimits

0x5785,	// (0x0002b13d) postcard_message2_pane

0x687d,	// (0x0002c235) message2_row_pane_ParamLimits

0x687d,	// (0x0002c235) message2_row_pane

0x6899,	// (0x0002c251) address2_row_pane_ParamLimits

0x6899,	// (0x0002c251) address2_row_pane

0xbc77,	// (0x0003162f) postcard_message2_row_pane_g1

0xbc7f,	// (0x00031637) postcard_message2_row_pane_t1

0xbc77,	// (0x0003162f) address2_row_pane_g1

0xbc7f,	// (0x00031637) address2_row_pane_t1

0x322e,	// (0x00028be6) aid_size_cell_vorec

0x2693,	// (0x0002804b) main_rss_pane

0xbc8d,	// (0x00031645) rss_list_single_pane_ParamLimits

0xbc8d,	// (0x00031645) rss_list_single_pane

0xbc9b,	// (0x00031653) rss_list_single_pane_t1

0xbc9b,	// (0x00031653) rss_list_single_pane_t2

0x0001,

0xf57b,	// (0x00034f33) rss_list_single_pane_t

0x2693,	// (0x0002804b) main_camera2_pane

0x2693,	// (0x0002804b) main_video2_pane

0xbd4d,	// (0x00031705) cams_zoom_pane_cp2_ParamLimits

0xbd4d,	// (0x00031705) cams_zoom_pane_cp2

0xbd4d,	// (0x00031705) image2_vga_pane_ParamLimits

0xbd4d,	// (0x00031705) image2_vga_pane

0xbd5b,	// (0x00031713) main_camera2_pane_g1_ParamLimits

0xbd5b,	// (0x00031713) main_camera2_pane_g1

0xbd5b,	// (0x00031713) main_camera2_pane_g2_ParamLimits

0xbd5b,	// (0x00031713) main_camera2_pane_g2

0xbd5b,	// (0x00031713) main_camera2_pane_g3_ParamLimits

0xbd5b,	// (0x00031713) main_camera2_pane_g3

0xbd5b,	// (0x00031713) main_camera2_pane_g4_ParamLimits

0xbd5b,	// (0x00031713) main_camera2_pane_g4

0xbd5b,	// (0x00031713) main_camera2_pane_g5_ParamLimits

0xbd5b,	// (0x00031713) main_camera2_pane_g5

0xbd5b,	// (0x00031713) main_camera2_pane_g6_ParamLimits

0xbd5b,	// (0x00031713) main_camera2_pane_g6

0xbd5b,	// (0x00031713) main_camera2_pane_g7_ParamLimits

0xbd5b,	// (0x00031713) main_camera2_pane_g7

0xbd5b,	// (0x00031713) main_camera2_pane_g8_ParamLimits

0xbd5b,	// (0x00031713) main_camera2_pane_g8

0x0008,

0xf597,	// (0x00034f4f) main_camera2_pane_g_ParamLimits

0xf597,	// (0x00034f4f) main_camera2_pane_g

0x14c3,	// (0x00026e7b) main_camera2_pane_t1_ParamLimits

0x14c3,	// (0x00026e7b) main_camera2_pane_t1

0x14c3,	// (0x00026e7b) main_camera2_pane_t2_ParamLimits

0x14c3,	// (0x00026e7b) main_camera2_pane_t2

0x14c3,	// (0x00026e7b) main_camera2_pane_t3_ParamLimits

0x14c3,	// (0x00026e7b) main_camera2_pane_t3

0x14c3,	// (0x00026e7b) main_camera2_pane_t4_ParamLimits

0x14c3,	// (0x00026e7b) main_camera2_pane_t4

0x0006,

0xf5aa,	// (0x00034f62) main_camera2_pane_t_ParamLimits

0xf5aa,	// (0x00034f62) main_camera2_pane_t

0xbd9f,	// (0x00031757) cams_zoom_pane_cp4_ParamLimits

0xbd9f,	// (0x00031757) cams_zoom_pane_cp4

0x14d7,	// (0x00026e8f) image2_cif_pane_ParamLimits

0x14d7,	// (0x00026e8f) image2_cif_pane

0xb16c,	// (0x00030b24) image2_subqcif_pane_ParamLimits

0xb16c,	// (0x00030b24) image2_subqcif_pane

0x14e5,	// (0x00026e9d) main_video2_pane_g1_ParamLimits

0x14e5,	// (0x00026e9d) main_video2_pane_g1

0x14e5,	// (0x00026e9d) main_video2_pane_g2_ParamLimits

0x14e5,	// (0x00026e9d) main_video2_pane_g2

0x14e5,	// (0x00026e9d) main_video2_pane_g3_ParamLimits

0x14e5,	// (0x00026e9d) main_video2_pane_g3

0x14e5,	// (0x00026e9d) main_video2_pane_g4_ParamLimits

0x14e5,	// (0x00026e9d) main_video2_pane_g4

0x14e5,	// (0x00026e9d) main_video2_pane_g5_ParamLimits

0x14e5,	// (0x00026e9d) main_video2_pane_g5

0x14e5,	// (0x00026e9d) main_video2_pane_g6_ParamLimits

0x14e5,	// (0x00026e9d) main_video2_pane_g6

0x0005,

0xf5b9,	// (0x00034f71) main_video2_pane_g_ParamLimits

0xf5b9,	// (0x00034f71) main_video2_pane_g

0x14f3,	// (0x00026eab) main_video2_pane_t1_ParamLimits

0x14f3,	// (0x00026eab) main_video2_pane_t1

0x14f3,	// (0x00026eab) main_video2_pane_t2_ParamLimits

0x14f3,	// (0x00026eab) main_video2_pane_t2

0x14f3,	// (0x00026eab) main_video2_pane_t3_ParamLimits

0x14f3,	// (0x00026eab) main_video2_pane_t3

0x0002,

0xf5c6,	// (0x00034f7e) main_video2_pane_t_ParamLimits

0xf5c6,	// (0x00034f7e) main_video2_pane_t

0x6673,	// (0x0002c02b) call_muted_g2

0x0001,

0xf56d,	// (0x00034f25) call_muted_g

0x2693,	// (0x0002804b) main_mup2_pane

0x525b,	// (0x0002ac13) main_mup2_pane_g1_ParamLimits

0x525b,	// (0x0002ac13) main_mup2_pane_g1

0x525b,	// (0x0002ac13) main_mup2_pane_g2_ParamLimits

0x525b,	// (0x0002ac13) main_mup2_pane_g2

0xbe97,	// (0x0003184f) main_mup_pane_g13_cp1

0xb17a,	// (0x00030b32) mup_volume_pane_cp1

0x525b,	// (0x0002ac13) main_mup2_pane_g4_ParamLimits

0x525b,	// (0x0002ac13) main_mup2_pane_g4

0x525b,	// (0x0002ac13) main_mup2_pane_g5_ParamLimits

0x525b,	// (0x0002ac13) main_mup2_pane_g5

0x525b,	// (0x0002ac13) main_mup2_pane_g6_ParamLimits

0x525b,	// (0x0002ac13) main_mup2_pane_g6

0x525b,	// (0x0002ac13) main_mup2_pane_g7_ParamLimits

0x525b,	// (0x0002ac13) main_mup2_pane_g7

0x0006,

0xf5cd,	// (0x00034f85) main_mup2_pane_g_ParamLimits

0xf5cd,	// (0x00034f85) main_mup2_pane_g

0x5269,	// (0x0002ac21) main_mup2_pane_t1_ParamLimits

0x5269,	// (0x0002ac21) main_mup2_pane_t1

0x5269,	// (0x0002ac21) main_mup2_pane_t2_ParamLimits

0x5269,	// (0x0002ac21) main_mup2_pane_t2

0x5269,	// (0x0002ac21) main_mup2_pane_t3_ParamLimits

0x5269,	// (0x0002ac21) main_mup2_pane_t3

0x5269,	// (0x0002ac21) main_mup2_pane_t4_ParamLimits

0x5269,	// (0x0002ac21) main_mup2_pane_t4

0x5269,	// (0x0002ac21) main_mup2_pane_t5_ParamLimits

0x5269,	// (0x0002ac21) main_mup2_pane_t5

0x5269,	// (0x0002ac21) main_mup2_pane_t6_ParamLimits

0x5269,	// (0x0002ac21) main_mup2_pane_t6

0x0005,

0xf5dc,	// (0x00034f94) main_mup2_pane_t_ParamLimits

0xf5dc,	// (0x00034f94) main_mup2_pane_t

0x5291,	// (0x0002ac49) mup2_visualizer_pane_ParamLimits

0x5291,	// (0x0002ac49) mup2_visualizer_pane

0x5291,	// (0x0002ac49) mup_progress_pane_cp_ParamLimits

0x5291,	// (0x0002ac49) mup_progress_pane_cp

0xbe78,	// (0x00031830) mup_volume_pane_cp_ParamLimits

0xbe78,	// (0x00031830) mup_volume_pane_cp

0x2977,	// (0x0002832f) mup2_visualizer_pane_g1_ParamLimits

0x2977,	// (0x0002832f) mup2_visualizer_pane_g1

0x2985,	// (0x0002833d) mup2_visualizer_pane_g2_ParamLimits

0x2985,	// (0x0002833d) mup2_visualizer_pane_g2

0x2985,	// (0x0002833d) mup2_visualizer_pane_g3_ParamLimits

0x2985,	// (0x0002833d) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x00034a82) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x00034a82) mup2_visualizer_pane_g

0x5b3f,	// (0x0002b4f7) aid_size_cell_fmradio

0x11f9,	// (0x00026bb1) aid_height_parent_landcape

0x39e9,	// (0x000293a1) wml_content_pane_cp

0x39f1,	// (0x000293a9) wml_tabs_pane

0x39fa,	// (0x000293b2) popup_wml_miniature_window

0x3a02,	// (0x000293ba) scroll_pane_cp021

0x3a16,	// (0x000293ce) wml_content_pane_comp8

0x2693,	// (0x0002804b) bg_popup_sub_pane_cp05

0xbdc3,	// (0x0003177b) popup_wml_miniature_window_g1

0xbdcb,	// (0x00031783) wml_miniature_view_pane

0x6a35,	// (0x0002c3ed) aid_size_wml_view

0x6a3d,	// (0x0002c3f5) wml_miniature_view_pane_g1

0x6a46,	// (0x0002c3fe) wml_miniature_view_pane_g2

0x6a4f,	// (0x0002c407) wml_miniature_view_pane_g3

0x6a57,	// (0x0002c40f) wml_miniature_view_pane_g4

0x6a5f,	// (0x0002c417) wml_miniature_view_pane_g5

0x6a67,	// (0x0002c41f) wml_miniature_view_pane_g6

0x6a6f,	// (0x0002c427) wml_miniature_view_pane_g7

0x6a77,	// (0x0002c42f) wml_miniature_view_pane_g8

0x0007,

0xf5e9,	// (0x00034fa1) wml_miniature_view_pane_g

0xbdd3,	// (0x0003178b) background_graphic_ParamLimits

0xbdd3,	// (0x0003178b) background_graphic

0xbddf,	// (0x00031797) wml_tabs_2_pane

0xbde8,	// (0x000317a0) wml_tabs_3_pane_ParamLimits

0xbde8,	// (0x000317a0) wml_tabs_3_pane

0xbdfa,	// (0x000317b2) wml_tabs_4_pane_ParamLimits

0xbdfa,	// (0x000317b2) wml_tabs_4_pane

0xbe10,	// (0x000317c8) wml_tabs_5_pane_ParamLimits

0xbe10,	// (0x000317c8) wml_tabs_5_pane

0xbe2a,	// (0x000317e2) wml_tabs_pane_g2_ParamLimits

0xbe2a,	// (0x000317e2) wml_tabs_pane_g2

0xbe3f,	// (0x000317f7) wml_tabs_pane_g3_ParamLimits

0xbe3f,	// (0x000317f7) wml_tabs_pane_g3

0xbe54,	// (0x0003180c) wml_tabs_2_active_pane_ParamLimits

0xbe54,	// (0x0003180c) wml_tabs_2_active_pane

0xbe54,	// (0x0003180c) wml_tabs_2_passive_pane_ParamLimits

0xbe54,	// (0x0003180c) wml_tabs_2_passive_pane

0x6a7f,	// (0x0002c437) wml_tabs_3_active_pane_cp_ParamLimits

0x6a7f,	// (0x0002c437) wml_tabs_3_active_pane_cp

0x6a94,	// (0x0002c44c) wml_tabs_3_passive_pane_ParamLimits

0x6a94,	// (0x0002c44c) wml_tabs_3_passive_pane

0x6aa7,	// (0x0002c45f) wml_tabs_3_passive_pane_cp_ParamLimits

0x6aa7,	// (0x0002c45f) wml_tabs_3_passive_pane_cp

0x6abe,	// (0x0002c476) tabs_4_active_pane

0x6ac6,	// (0x0002c47e) tabs_4_passive_pane

0x6ad0,	// (0x0002c488) tabs_4_passive_pane_cp

0x6ad8,	// (0x0002c490) tabs_4_passive_pane_cp2

0x6567,	// (0x0002bf1f) aid_height_text

0x5291,	// (0x0002ac49) mup_volume_cont_pane_ParamLimits

0x5291,	// (0x0002ac49) mup_volume_cont_pane

0x21d9,	// (0x00027b91) aid_size_cell_pinb

0x21d9,	// (0x00027b91) aid_size_list_pinb

0x5291,	// (0x0002ac49) mup2_volume_cont_pane_ParamLimits

0x5291,	// (0x0002ac49) mup2_volume_cont_pane

0xbe62,	// (0x0003181a) mup2_volume_cont_pane_g1_ParamLimits

0xbe62,	// (0x0003181a) mup2_volume_cont_pane_g1

0x0d48,	// (0x00026700) aid_size_cell_touch_ParamLimits

0x0d48,	// (0x00026700) aid_size_cell_touch

0x0f30,	// (0x000268e8) touch_pane_ParamLimits

0x0f30,	// (0x000268e8) touch_pane

0xb17a,	// (0x00030b32) main_rss2_pane

0xbea1,	// (0x00031859) listscroll_rss2_pane

0xbeaa,	// (0x00031862) rss2_navigation_pane

0xbeb2,	// (0x0003186a) list_rss2_pane

0x4d45,	// (0x0002a6fd) scroll_pane_cp22

0xbeba,	// (0x00031872) rss2_navigation_pane_g1

0xbec3,	// (0x0003187b) rss2_navigation_pane_g2

0xbecb,	// (0x00031883) rss2_navigation_pane_g3

0x0002,

0xf5fa,	// (0x00034fb2) rss2_navigation_pane_g

0xbed3,	// (0x0003188b) rss2_navigation_pane_t1

0x6ae2,	// (0x0002c49a) rss2_list_single_pane_ParamLimits

0x6ae2,	// (0x0002c49a) rss2_list_single_pane

0xbee1,	// (0x00031899) rss2_list_single_pane_t2

0xbeef,	// (0x000318a7) rss2_list_single_pane_t3_ParamLimits

0xbeef,	// (0x000318a7) rss2_list_single_pane_t3

0xbf0c,	// (0x000318c4) rss2_list_single_pane_t4

0x46c5,	// (0x0002a07d) smil_status_pane_g1

0xb16c,	// (0x00030b24) main_image2_pane_ParamLimits

0xb16c,	// (0x00030b24) main_image2_pane

0xbd5b,	// (0x00031713) main_camera2_pane_g9_ParamLimits

0xbd5b,	// (0x00031713) main_camera2_pane_g9

0x14c3,	// (0x00026e7b) main_camera2_pane_t5_ParamLimits

0x14c3,	// (0x00026e7b) main_camera2_pane_t5

0xbd69,	// (0x00031721) main_camera2_pane_t6_ParamLimits

0xbd69,	// (0x00031721) main_camera2_pane_t6

0x6af7,	// (0x0002c4af) main_image2_pane_g1_ParamLimits

0x6af7,	// (0x0002c4af) main_image2_pane_g1

0x5af5,	// (0x0002b4ad) smil2_video_pane_ParamLimits

0x5af5,	// (0x0002b4ad) smil2_video_pane

0xb11b,	// (0x00030ad3) aid_zoom_text_primary_cp

0xb162,	// (0x00030b1a) popup_preview_fixed_window

0x38e1,	// (0x00029299) im_reading_pane_g1

0x14b5,	// (0x00026e6d) cams2_bc_adjust_pane_cp_ParamLimits

0x14b5,	// (0x00026e6d) cams2_bc_adjust_pane_cp

0xbd91,	// (0x00031749) cams2_bc_adjust_pane_ParamLimits

0xbd91,	// (0x00031749) cams2_bc_adjust_pane

0xbe97,	// (0x0003184f) cams2_bc_adjust_pane_g1

0xb17a,	// (0x00030b32) cams2_slider_pane

0xbe97,	// (0x0003184f) cams2_slider_pane_g1

0xbe97,	// (0x0003184f) cams2_slider_pane_g2

0x0006,

0xf601,	// (0x00034fb9) cams2_slider_pane_g

0x0fa0,	// (0x00026958) calc_display_pane_ParamLimits

0x0fc5,	// (0x0002697d) calc_paper_pane_ParamLimits

0x0fe8,	// (0x000269a0) grid_calc_pane_ParamLimits

0xb2ac,	// (0x00030c64) popup_clock_digital_window_t1_ParamLimits

0x597c,	// (0x0002b334) main_image_pane_t1

0x0f82,	// (0x0002693a) aid_size_cell_calc_ParamLimits

0x0f82,	// (0x0002693a) aid_size_cell_calc

0x1251,	// (0x00026c09) popup_blid_sat_info2_window_ParamLimits

0x1251,	// (0x00026c09) popup_blid_sat_info2_window

0xbf1a,	// (0x000318d2) aid_size_cell_blid

0xbf22,	// (0x000318da) bg_popup_window_pane_cp07

0xbf45,	// (0x000318fd) grid_popup_blid_pane

0xbf4f,	// (0x00031907) heading_pane_cp05_ParamLimits

0xbf4f,	// (0x00031907) heading_pane_cp05

0xc019,	// (0x000319d1) cell_popup_blid_pane_ParamLimits

0xc019,	// (0x000319d1) cell_popup_blid_pane

0xc03d,	// (0x000319f5) cell_popup_blid_pane_g1

0xc045,	// (0x000319fd) cell_popup_blid_pane_t1

0x5291,	// (0x0002ac49) mup2_indicator_pane_ParamLimits

0x5291,	// (0x0002ac49) mup2_indicator_pane

0x21d9,	// (0x00027b91) mup2_visualizer_osc_pane

0xbdad,	// (0x00031765) mup2_visualizer_spec_pane_ParamLimits

0xbdad,	// (0x00031765) mup2_visualizer_spec_pane

0x21d9,	// (0x00027b91) mup2_spec_half_pane

0x21d9,	// (0x00027b91) mup2_spec_half_pane_cp

0xc053,	// (0x00031a0b) mup2_spec_bar_pane_ParamLimits

0xc053,	// (0x00031a0b) mup2_spec_bar_pane

0x3423,	// (0x00028ddb) mup2_spec_bar_pane_g1

0xc072,	// (0x00031a2a) mup2_spec_bar_pane_g2

0x0001,

0xf627,	// (0x00034fdf) mup2_spec_bar_pane_g

0x21d9,	// (0x00027b91) mup2_osc_middle_pane

0x3423,	// (0x00028ddb) mup2_visualizer_osc_pane_g1

0x2248,	// (0x00027c00) popup_number_entry_window_t1_ParamLimits

0x225b,	// (0x00027c13) popup_number_entry_window_t2_ParamLimits

0x226d,	// (0x00027c25) popup_number_entry_window_t3_ParamLimits

0x227f,	// (0x00027c37) popup_number_entry_window_t5_ParamLimits

0x227f,	// (0x00027c37) popup_number_entry_window_t5

0xf06b,	// (0x00034a23) popup_number_entry_window_t_ParamLimits

0x22b3,	// (0x00027c6b) text_title_cp2_ParamLimits

0xb2eb,	// (0x00030ca3) aid_hotspot_pointer_text2_pane

0xb305,	// (0x00030cbd) main_viewer_pane_g9_ParamLimits

0xb305,	// (0x00030cbd) main_viewer_pane_g9

0x40d3,	// (0x00029a8b) cale_month_pane_t1_ParamLimits

0x4737,	// (0x0002a0ef) bg_cale_pane_ParamLimits

0x474f,	// (0x0002a107) list_cale_pane_ParamLimits

0x4760,	// (0x0002a118) listscroll_cale_day_pane_t1

0x4772,	// (0x0002a12a) scroll_pane_cp09_ParamLimits

0x52f8,	// (0x0002acb0) main_mup_eq_pane_t1_ParamLimits

0x52f8,	// (0x0002acb0) main_mup_eq_pane_t1

0x5312,	// (0x0002acca) main_mup_eq_pane_t2_ParamLimits

0x5312,	// (0x0002acca) main_mup_eq_pane_t2

0x532c,	// (0x0002ace4) main_mup_eq_pane_t3_ParamLimits

0x532c,	// (0x0002ace4) main_mup_eq_pane_t3

0x5348,	// (0x0002ad00) main_mup_eq_pane_t4_ParamLimits

0x5348,	// (0x0002ad00) main_mup_eq_pane_t4

0x5364,	// (0x0002ad1c) main_mup_eq_pane_t5_ParamLimits

0x5364,	// (0x0002ad1c) main_mup_eq_pane_t5

0x5380,	// (0x0002ad38) main_mup_eq_pane_t6_ParamLimits

0x5380,	// (0x0002ad38) main_mup_eq_pane_t6

0x5394,	// (0x0002ad4c) main_mup_eq_pane_t7_ParamLimits

0x5394,	// (0x0002ad4c) main_mup_eq_pane_t7

0x53a8,	// (0x0002ad60) main_mup_eq_pane_t8_ParamLimits

0x53a8,	// (0x0002ad60) main_mup_eq_pane_t8

0x53bc,	// (0x0002ad74) main_mup_eq_pane_t9_ParamLimits

0x53bc,	// (0x0002ad74) main_mup_eq_pane_t9

0x53d6,	// (0x0002ad8e) main_mup_eq_pane_t10_ParamLimits

0x53d6,	// (0x0002ad8e) main_mup_eq_pane_t10

0x0009,

0xf3ca,	// (0x00034d82) main_mup_eq_pane_t_ParamLimits

0xf3ca,	// (0x00034d82) main_mup_eq_pane_t

0x5485,	// (0x0002ae3d) mup_equalizer_pane_cp5_ParamLimits

0x5499,	// (0x0002ae51) mup_equalizer_pane_cp6_ParamLimits

0x54ad,	// (0x0002ae65) mup_equalizer_pane_cp7_ParamLimits

0xb17a,	// (0x00030b32) main_gallery_pane

0xbcc9,	// (0x00031681) smil2_volume_pane

0xbcd1,	// (0x00031689) smil_status_volume_pane_g1_ParamLimits

0xbce4,	// (0x0003169c) smil_status_volume_pane_g2_ParamLimits

0xbcf7,	// (0x000316af) smil_status_volume_pane_g3_ParamLimits

0xf580,	// (0x00034f38) smil_status_volume_pane_g_ParamLimits

0xbf22,	// (0x000318da) bg_popup_window_pane_cp07_ParamLimits

0xbf30,	// (0x000318e8) blid_firmament_pane

0x2910,	// (0x000282c8) aid_size_cell_gallery_ParamLimits

0x2910,	// (0x000282c8) aid_size_cell_gallery

0x2910,	// (0x000282c8) grid_gallery_pane_ParamLimits

0x2910,	// (0x000282c8) grid_gallery_pane

0xbf22,	// (0x000318da) cell_gallery_pane_ParamLimits

0xbf22,	// (0x000318da) cell_gallery_pane

0x2910,	// (0x000282c8) bg_cell_gallery_focus_pane_ParamLimits

0x2910,	// (0x000282c8) bg_cell_gallery_focus_pane

0x2977,	// (0x0002832f) cell_gallery_pane_g1_ParamLimits

0x2977,	// (0x0002832f) cell_gallery_pane_g1

0x2977,	// (0x0002832f) cell_gallery_pane_g2_ParamLimits

0x2977,	// (0x0002832f) cell_gallery_pane_g2

0x2977,	// (0x0002832f) cell_gallery_pane_g3_ParamLimits

0x2977,	// (0x0002832f) cell_gallery_pane_g3

0x2985,	// (0x0002833d) cell_gallery_pane_g4_ParamLimits

0x2985,	// (0x0002833d) cell_gallery_pane_g4

0x0003,

0xf62c,	// (0x00034fe4) cell_gallery_pane_g_ParamLimits

0xf62c,	// (0x00034fe4) cell_gallery_pane_g

0xc07c,	// (0x00031a34) bg_cell_gallery_focus_pane_g1

0xc084,	// (0x00031a3c) bg_cell_gallery_focus_pane_g2

0xc08c,	// (0x00031a44) bg_cell_gallery_focus_pane_g3

0xc094,	// (0x00031a4c) bg_cell_gallery_focus_pane_g4

0xc09c,	// (0x00031a54) bg_cell_gallery_focus_pane_g5

0xc0a4,	// (0x00031a5c) bg_cell_gallery_focus_pane_g6

0xc0ac,	// (0x00031a64) bg_cell_gallery_focus_pane_g7

0xc0b4,	// (0x00031a6c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf635,	// (0x00034fed) bg_cell_gallery_focus_pane_g

0xc0bc,	// (0x00031a74) aid_firma_cardinal

0xc0d0,	// (0x00031a88) blid_firmament_pane_t1

0xc0e7,	// (0x00031a9f) blid_firmament_pane_t2

0xc0fe,	// (0x00031ab6) blid_firmament_pane_t3

0xc115,	// (0x00031acd) blid_firmament_pane_t4

0x0003,

0xf646,	// (0x00034ffe) blid_firmament_pane_t

0xc12c,	// (0x00031ae4) blid_sat_info_pane

0x3423,	// (0x00028ddb) blid_sat_info_pane_g1

0x3423,	// (0x00028ddb) blid_sat_info_pane_g2

0x0001,

0xf3be,	// (0x00034d76) blid_sat_info_pane_g

0xc13c,	// (0x00031af4) blid_sat_info_pane_t1

0xc14a,	// (0x00031b02) smil2_volume_content_pane

0xc153,	// (0x00031b0b) smil2_volume_pane_g1

0x2baf,	// (0x00028567) smil2_volume_content_pane_g1

0xc15b,	// (0x00031b13) smil2_volume_content_pane_g2

0xc164,	// (0x00031b1c) smil2_volume_content_pane_g3

0xc16d,	// (0x00031b25) smil2_volume_content_pane_g4

0xc176,	// (0x00031b2e) smil2_volume_content_pane_g5

0xc17f,	// (0x00031b37) smil2_volume_content_pane_g6

0xc188,	// (0x00031b40) smil2_volume_content_pane_g7

0xc191,	// (0x00031b49) smil2_volume_content_pane_g8

0xc19a,	// (0x00031b52) smil2_volume_content_pane_g9

0xc1a3,	// (0x00031b5b) smil2_volume_content_pane_g10

0x0009,

0xf64f,	// (0x00035007) smil2_volume_content_pane_g

0x3030,	// (0x000289e8) cale_week_day_heading_pane_t1_ParamLimits

0x305a,	// (0x00028a12) cale_week_day_heading_pane_t2_ParamLimits

0x3089,	// (0x00028a41) cale_week_day_heading_pane_t3_ParamLimits

0x30b8,	// (0x00028a70) cale_week_day_heading_pane_t4_ParamLimits

0x30e7,	// (0x00028a9f) cale_week_day_heading_pane_t5_ParamLimits

0x311e,	// (0x00028ad6) cale_week_day_heading_pane_t6_ParamLimits

0x3155,	// (0x00028b0d) cale_week_day_heading_pane_t7_ParamLimits

0xf172,	// (0x00034b2a) cale_week_day_heading_pane_t_ParamLimits

0x317f,	// (0x00028b37) bg_cale_side_pane_ParamLimits

0x10c5,	// (0x00026a7d) cale_week_time_pane_t1_ParamLimits

0x10df,	// (0x00026a97) cale_week_time_pane_t2_ParamLimits

0x10f9,	// (0x00026ab1) cale_week_time_pane_t3_ParamLimits

0x1113,	// (0x00026acb) cale_week_time_pane_t4_ParamLimits

0x112d,	// (0x00026ae5) cale_week_time_pane_t5_ParamLimits

0x1147,	// (0x00026aff) cale_week_time_pane_t6_ParamLimits

0x1161,	// (0x00026b19) cale_week_time_pane_t7_ParamLimits

0x117b,	// (0x00026b33) cale_week_time_pane_t8_ParamLimits

0xf181,	// (0x00034b39) cale_week_time_pane_t_ParamLimits

0x318d,	// (0x00028b45) cell_cale_week_pane_g2_ParamLimits

0x317f,	// (0x00028b37) bg_cale_side_pane_cp01_ParamLimits

0x44ee,	// (0x00029ea6) cale_month_week_pane_t1_ParamLimits

0x4507,	// (0x00029ebf) cale_month_week_pane_t2_ParamLimits

0x4520,	// (0x00029ed8) cale_month_week_pane_t3_ParamLimits

0x4539,	// (0x00029ef1) cale_month_week_pane_t4_ParamLimits

0x4552,	// (0x00029f0a) cale_month_week_pane_t5_ParamLimits

0x456b,	// (0x00029f23) cale_month_week_pane_t6_ParamLimits

0xf24f,	// (0x00034c07) cale_month_week_pane_t_ParamLimits

0xb21c,	// (0x00030bd4) cell_cale_month_pane_g1_ParamLimits

0xb17a,	// (0x00030b32) main_cale_event_viewer_pane

0x21d9,	// (0x00027b91) listscroll_cale_event_viewer_pane

0xc1ac,	// (0x00031b64) list_cale_ev_pane

0xc1b4,	// (0x00031b6c) scroll_pane_cp023

0xc1c0,	// (0x00031b78) field_cale_ev_pane_ParamLimits

0xc1c0,	// (0x00031b78) field_cale_ev_pane

0xc1de,	// (0x00031b96) field_cale_ev_content_pane_ParamLimits

0xc1de,	// (0x00031b96) field_cale_ev_content_pane

0xc1ea,	// (0x00031ba2) field_cale_ev_pane_g1_ParamLimits

0xc1ea,	// (0x00031ba2) field_cale_ev_pane_g1

0xc1f6,	// (0x00031bae) field_cale_ev_pane_g2_ParamLimits

0xc1f6,	// (0x00031bae) field_cale_ev_pane_g2

0xc20e,	// (0x00031bc6) field_cale_ev_pane_g3_ParamLimits

0xc20e,	// (0x00031bc6) field_cale_ev_pane_g3

0x0002,

0xf664,	// (0x0003501c) field_cale_ev_pane_g_ParamLimits

0xf664,	// (0x0003501c) field_cale_ev_pane_g

0xc226,	// (0x00031bde) field_cale_ev_pane_t1_ParamLimits

0xc226,	// (0x00031bde) field_cale_ev_pane_t1

0x2cad,	// (0x00028665) field_cale_ev_content_pane_t1_ParamLimits

0x2cad,	// (0x00028665) field_cale_ev_content_pane_t1

0x55a2,	// (0x0002af5a) bg_button_pane_cp01

0x2d08,	// (0x000286c0) listscroll_cale_week_pane_ParamLimits

0x2d1a,	// (0x000286d2) popup_toolbar_window_cp01

0x2f73,	// (0x0002892b) listscroll_cale_week_pane_t1_ParamLimits

0x2d08,	// (0x000286c0) listscroll_cale_day_pane_ParamLimits

0x2d1a,	// (0x000286d2) popup_toolbar_window_cp02

0x4760,	// (0x0002a118) listscroll_cale_day_pane_t1_ParamLimits

0x1217,	// (0x00026bcf) main_cale_month_pane_ParamLimits

0xbc47,	// (0x000315ff) popup_toolbar_window_cp03_ParamLimits

0xbc47,	// (0x000315ff) popup_toolbar_window_cp03

0x595a,	// (0x0002b312) main_image_pane_g2_ParamLimits

0x595a,	// (0x0002b312) main_image_pane_g2

0x596b,	// (0x0002b323) main_image_pane_g3_ParamLimits

0x596b,	// (0x0002b323) main_image_pane_g3

0x0002,

0xf45c,	// (0x00034e14) main_image_pane_g_ParamLimits

0xf45c,	// (0x00034e14) main_image_pane_g

0x597c,	// (0x0002b334) main_image_pane_t1_ParamLimits

0x5993,	// (0x0002b34b) main_image_pane_t2_ParamLimits

0x5993,	// (0x0002b34b) main_image_pane_t2

0x59a5,	// (0x0002b35d) main_image_pane_t3_ParamLimits

0x59a5,	// (0x0002b35d) main_image_pane_t3

0x59cd,	// (0x0002b385) main_image_pane_t4_ParamLimits

0x59cd,	// (0x0002b385) main_image_pane_t4

0x0003,

0xf463,	// (0x00034e1b) main_image_pane_t_ParamLimits

0xf463,	// (0x00034e1b) main_image_pane_t

0x59ed,	// (0x0002b3a5) popup_image_details_window_cp01

0x59f7,	// (0x0002b3af) popup_toobar_trans_pane_cp01_ParamLimits

0x59f7,	// (0x0002b3af) popup_toobar_trans_pane_cp01

0x1330,	// (0x00026ce8) popup_image_details_window_ParamLimits

0x1330,	// (0x00026ce8) popup_image_details_window

0xbc1a,	// (0x000315d2) popup_image_focus_window

0xbd4d,	// (0x00031705) camera2_autofocus_pane_ParamLimits

0xbd4d,	// (0x00031705) camera2_autofocus_pane

0x21d9,	// (0x00027b91) bg_popup_sub_pane_cp06

0xc23d,	// (0x00031bf5) popup_image_focus_window_g1

0xc245,	// (0x00031bfd) popup_image_focus_window_g2

0xc24d,	// (0x00031c05) popup_image_focus_window_g3

0xc255,	// (0x00031c0d) popup_image_focus_window_g4

0x0003,

0xf66b,	// (0x00035023) popup_image_focus_window_g

0xc25d,	// (0x00031c15) popup_image_focus_window_t1

0xc26b,	// (0x00031c23) popup_image_focus_window_t2

0xc27b,	// (0x00031c33) popup_image_focus_window_t3

0x0002,

0xf674,	// (0x0003502c) popup_image_focus_window_t

0x2977,	// (0x0002832f) camera2_autofocus_pane_g1

0x2910,	// (0x000282c8) bg_tb_trans_pane_cp01

0xc289,	// (0x00031c41) popup_image_details_window_g1

0xc29c,	// (0x00031c54) popup_image_details_window_g2

0x0002,

0xf686,	// (0x0003503e) popup_image_details_window_g

0xc2c5,	// (0x00031c7d) popup_image_details_window_t1

0xc2d7,	// (0x00031c8f) popup_image_details_window_t2

0xc2f0,	// (0x00031ca8) popup_image_details_window_t3

0xc304,	// (0x00031cbc) popup_image_details_window_t4

0xc31f,	// (0x00031cd7) popup_image_details_window_t5

0x0004,

0xf68d,	// (0x00035045) popup_image_details_window_t

0x2abf,	// (0x00028477) bg_calc_paper_pane_ParamLimits

0xb17a,	// (0x00030b32) grid_highlight_pane_cp013

0xb18c,	// (0x00030b44) list_calc_pane_ParamLimits

0xb19e,	// (0x00030b56) scroll_pane_cp024

0x2ad3,	// (0x0002848b) bg_calc_display_pane_ParamLimits

0x1016,	// (0x000269ce) calc_display_pane_t1_ParamLimits

0x102b,	// (0x000269e3) calc_display_pane_t2_ParamLimits

0xb1a6,	// (0x00030b5e) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x00034aaa) calc_display_pane_t_ParamLimits

0x108f,	// (0x00026a47) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x00034ac7) cell_calc_pane_g

0x1098,	// (0x00026a50) cell_calc_pane_t1

0x2b84,	// (0x0002853c) grid_highlight_pane_cp02_ParamLimits

0x2b9a,	// (0x00028552) toolbar_button_pane_cp01_ParamLimits

0x2b9a,	// (0x00028552) toolbar_button_pane_cp01

0x5a39,	// (0x0002b3f1) temp_image_control_pane_ParamLimits

0x5a39,	// (0x0002b3f1) temp_image_control_pane

0xb16c,	// (0x00030b24) main_mp3_pane

0xc339,	// (0x00031cf1) temp_image_control_pane_g1_ParamLimits

0xc339,	// (0x00031cf1) temp_image_control_pane_g1

0xc347,	// (0x00031cff) temp_image_control_pane_g2_ParamLimits

0xc347,	// (0x00031cff) temp_image_control_pane_g2

0xc359,	// (0x00031d11) temp_image_control_pane_g3_ParamLimits

0xc359,	// (0x00031d11) temp_image_control_pane_g3

0x6b0d,	// (0x0002c4c5) temp_image_control_pane_g4_ParamLimits

0x6b0d,	// (0x0002c4c5) temp_image_control_pane_g4

0x0003,

0xf698,	// (0x00035050) temp_image_control_pane_g_ParamLimits

0xf698,	// (0x00035050) temp_image_control_pane_g

0xc339,	// (0x00031cf1) main_mp3_pane_g1

0x6b20,	// (0x0002c4d8) main_mp3_pane_g2

0x0007,

0xf6a1,	// (0x00035059) main_mp3_pane_g

0xc38e,	// (0x00031d46) main_mp3_pane_t1

0x2985,	// (0x0002833d) main_camera_pane_g8_ParamLimits

0x2985,	// (0x0002833d) main_camera_pane_g8

0x33d1,	// (0x00028d89) main_video_pane_g7_ParamLimits

0x33d1,	// (0x00028d89) main_video_pane_g7

0xbd7d,	// (0x00031735) main_camera2_pane_t7_ParamLimits

0xbd7d,	// (0x00031735) main_camera2_pane_t7

0x39a9,	// (0x00029361) scroll_pane_cp025_ParamLimits

0x39a9,	// (0x00029361) scroll_pane_cp025

0x39bd,	// (0x00029375) scroll_pane_cp026_ParamLimits

0x39bd,	// (0x00029375) scroll_pane_cp026

0x39cc,	// (0x00029384) wml_content_pane_ParamLimits

0xb17a,	// (0x00030b32) main_touch_calib_pane

0x6bf4,	// (0x0002c5ac) main_touch_calib_pane_g1

0x6c06,	// (0x0002c5be) main_touch_calib_pane_g2

0x6c18,	// (0x0002c5d0) main_touch_calib_pane_g3

0x6c2a,	// (0x0002c5e2) main_touch_calib_pane_g4

0x0003,

0xf6bf,	// (0x00035077) main_touch_calib_pane_g

0x6c3c,	// (0x0002c5f4) main_touch_calib_pane_t1

0x6c56,	// (0x0002c60e) main_touch_calib_pane_t2

0x0004,

0xf6c8,	// (0x00035080) main_touch_calib_pane_t

0x4fed,	// (0x0002a9a5) mup_progress_pane_cp02

0x5022,	// (0x0002a9da) navi_pane_g1

0x50dd,	// (0x0002aa95) navi_pane_mp_t3

0xb16c,	// (0x00030b24) main_mp3_pane_ParamLimits

0x6825,	// (0x0002c1dd) navi_pane_ParamLimits

0xc339,	// (0x00031cf1) main_mp3_pane_g1_ParamLimits

0x6b20,	// (0x0002c4d8) main_mp3_pane_g2_ParamLimits

0x6b2e,	// (0x0002c4e6) main_mp3_pane_g3_ParamLimits

0x6b2e,	// (0x0002c4e6) main_mp3_pane_g3

0x6b3c,	// (0x0002c4f4) main_mp3_pane_g4_ParamLimits

0x6b3c,	// (0x0002c4f4) main_mp3_pane_g4

0x2977,	// (0x0002832f) main_mp3_pane_g5_ParamLimits

0x2977,	// (0x0002832f) main_mp3_pane_g5

0xc369,	// (0x00031d21) main_mp3_pane_g6_ParamLimits

0xc369,	// (0x00031d21) main_mp3_pane_g6

0xc376,	// (0x00031d2e) main_mp3_pane_g7_ParamLimits

0xc376,	// (0x00031d2e) main_mp3_pane_g7

0xc382,	// (0x00031d3a) main_mp3_pane_g8_ParamLimits

0xc382,	// (0x00031d3a) main_mp3_pane_g8

0xf6a1,	// (0x00035059) main_mp3_pane_g_ParamLimits

0x6b48,	// (0x0002c500) main_mp3_pane_t2

0x6b56,	// (0x0002c50e) main_mp3_pane_t3

0xc39c,	// (0x00031d54) main_mp3_pane_t4

0xc3aa,	// (0x00031d62) main_mp3_pane_t5

0x0005,

0xf6b2,	// (0x0003506a) main_mp3_pane_t

0xc3b8,	// (0x00031d70) mup_progress_pane_cp01

0xb11b,	// (0x00030ad3) aid_zoom_text_secondary2

0xc1ac,	// (0x00031b64) list_cale_ev2_pane

0xc1b4,	// (0x00031b6c) scroll_pane_cp023_ParamLimits

0x6cac,	// (0x0002c664) field_cale_ev2_pane_ParamLimits

0x6cac,	// (0x0002c664) field_cale_ev2_pane

0x6ccc,	// (0x0002c684) field_cale_ev2_pane_g1_ParamLimits

0x6ccc,	// (0x0002c684) field_cale_ev2_pane_g1

0x6cd8,	// (0x0002c690) field_cale_ev2_pane_g2_ParamLimits

0x6cd8,	// (0x0002c690) field_cale_ev2_pane_g2

0x6cf0,	// (0x0002c6a8) field_cale_ev2_pane_g3_ParamLimits

0x6cf0,	// (0x0002c6a8) field_cale_ev2_pane_g3

0x0003,

0xf6d3,	// (0x0003508b) field_cale_ev2_pane_g_ParamLimits

0xf6d3,	// (0x0003508b) field_cale_ev2_pane_g

0x6d08,	// (0x0002c6c0) field_cale_ev2_pane_t1_ParamLimits

0x6d08,	// (0x0002c6c0) field_cale_ev2_pane_t1

0x6d1f,	// (0x0002c6d7) field_cale_ev2_pane_t2_ParamLimits

0x6d1f,	// (0x0002c6d7) field_cale_ev2_pane_t2

0x0001,

0xf6dc,	// (0x00035094) field_cale_ev2_pane_t_ParamLimits

0xf6dc,	// (0x00035094) field_cale_ev2_pane_t

0x5729,	// (0x0002b0e1) main_postcard_pane_g5_ParamLimits

0x5729,	// (0x0002b0e1) main_postcard_pane_g5

0x573f,	// (0x0002b0f7) main_postcard_pane_g6_ParamLimits

0x573f,	// (0x0002b0f7) main_postcard_pane_g6

0x2910,	// (0x000282c8) camera2_autofocus_pane_cp_ParamLimits

0x2910,	// (0x000282c8) camera2_autofocus_pane_cp

0xb16c,	// (0x00030b24) main_mup3_pane

0x6d78,	// (0x0002c730) main_mup3_pane_g1_ParamLimits

0x6d78,	// (0x0002c730) main_mup3_pane_g1

0x6d9a,	// (0x0002c752) main_mup3_pane_g2_ParamLimits

0x6d9a,	// (0x0002c752) main_mup3_pane_g2

0x6e18,	// (0x0002c7d0) main_mup3_pane_g3_ParamLimits

0x6e18,	// (0x0002c7d0) main_mup3_pane_g3

0x6e5e,	// (0x0002c816) main_mup3_pane_g4_ParamLimits

0x6e5e,	// (0x0002c816) main_mup3_pane_g4

0x6ea4,	// (0x0002c85c) main_mup3_pane_g5_ParamLimits

0x6ea4,	// (0x0002c85c) main_mup3_pane_g5

0x6eea,	// (0x0002c8a2) main_mup3_pane_g6_ParamLimits

0x6eea,	// (0x0002c8a2) main_mup3_pane_g6

0x2985,	// (0x0002833d) main_mup3_pane_g7_ParamLimits

0x2985,	// (0x0002833d) main_mup3_pane_g7

0x0007,

0xf6ec,	// (0x000350a4) main_mup3_pane_g_ParamLimits

0xf6ec,	// (0x000350a4) main_mup3_pane_g

0x6f68,	// (0x0002c920) main_mup3_pane_t1_ParamLimits

0x6f68,	// (0x0002c920) main_mup3_pane_t1

0x6fdc,	// (0x0002c994) main_mup3_pane_t2_ParamLimits

0x6fdc,	// (0x0002c994) main_mup3_pane_t2

0x70b0,	// (0x0002ca68) main_mup3_pane_t4_ParamLimits

0x70b0,	// (0x0002ca68) main_mup3_pane_t4

0x7106,	// (0x0002cabe) main_mup3_pane_t5_ParamLimits

0x7106,	// (0x0002cabe) main_mup3_pane_t5

0x71c2,	// (0x0002cb7a) main_mup3_pane_t6_ParamLimits

0x71c2,	// (0x0002cb7a) main_mup3_pane_t6

0x0005,

0xf6fd,	// (0x000350b5) main_mup3_pane_t_ParamLimits

0xf6fd,	// (0x000350b5) main_mup3_pane_t

0x727a,	// (0x0002cc32) mup3_progress_pane_ParamLimits

0x727a,	// (0x0002cc32) mup3_progress_pane

0x7310,	// (0x0002ccc8) popup_mup3_control_window_ParamLimits

0x7310,	// (0x0002ccc8) popup_mup3_control_window

0xc3cc,	// (0x00031d84) popup_mup3_text_window

0x7342,	// (0x0002ccfa) mup3_progress_pane_t1

0x7361,	// (0x0002cd19) mup3_progress_pane_t2

0xc3d4,	// (0x00031d8c) mup3_progress_pane_t3

0x0002,

0xf70a,	// (0x000350c2) mup3_progress_pane_t

0xc3f1,	// (0x00031da9) mup_progress_pane_cp03

0x21d9,	// (0x00027b91) bg_tb_trans_pane_cp04

0x7380,	// (0x0002cd38) mup3_volume_pane

0x7388,	// (0x0002cd40) popup_mup3_control_window_g1

0x7391,	// (0x0002cd49) mup3_volume_pane_g1

0x739a,	// (0x0002cd52) mup3_volume_pane_g2

0x73a3,	// (0x0002cd5b) mup3_volume_pane_g3

0x0002,

0xf711,	// (0x000350c9) mup3_volume_pane_g

0x21d9,	// (0x00027b91) bg_tb_trans_pane_cp03

0xc401,	// (0x00031db9) popup_mup3_text_window_g1

0xc409,	// (0x00031dc1) popup_mup3_text_window_t1

0x2b77,	// (0x0002852f) list_calc_item_pane_g1_ParamLimits

0xbe8e,	// (0x00031846) mup_volume_pane_cp_g1

0x6c70,	// (0x0002c628) main_touch_calib_pane_t3

0x6c84,	// (0x0002c63c) main_touch_calib_pane_t4

0x6c98,	// (0x0002c650) main_touch_calib_pane_t5

0xb107,	// (0x00030abf) aid_cell_size_toolbar2

0xb10f,	// (0x00030ac7) aid_popup3_width_pane

0xb11b,	// (0x00030ad3) aid_zoom_text_msg_primary

0x327e,	// (0x00028c36) vorec_t7

0x2adf,	// (0x00028497) bg_calc_paper_pane_g1_ParamLimits

0x2aeb,	// (0x000284a3) bg_calc_paper_pane_g2_ParamLimits

0x2af7,	// (0x000284af) bg_calc_paper_pane_g3_ParamLimits

0x2b03,	// (0x000284bb) bg_calc_paper_pane_g4_ParamLimits

0x2b0f,	// (0x000284c7) bg_calc_paper_pane_g5_ParamLimits

0x2b1b,	// (0x000284d3) bg_calc_paper_pane_g6_ParamLimits

0x2b2a,	// (0x000284e2) bg_calc_paper_pane_g7_ParamLimits

0x2b39,	// (0x000284f1) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x00034ab1) bg_calc_paper_pane_g_ParamLimits

0x2b4c,	// (0x00028504) calc_bg_paper_pane_g9_ParamLimits

0x2910,	// (0x000282c8) image_qvga_pane_ParamLimits

0x2910,	// (0x000282c8) image_qvga_pane

0x28ee,	// (0x000282a6) bg_popup_sub_pane_cp04_ParamLimits

0x58b8,	// (0x0002b270) popup_mup_playback_window_g1_ParamLimits

0x58c4,	// (0x0002b27c) popup_mup_playback_window_t1_ParamLimits

0x58d9,	// (0x0002b291) popup_mup_playback_window_t2_ParamLimits

0xf457,	// (0x00034e0f) popup_mup_playback_window_t_ParamLimits

0x2985,	// (0x0002833d) main_mup2_pane_g3_ParamLimits

0x2985,	// (0x0002833d) main_mup2_pane_g3

0x363a,	// (0x00028ff2) popup_toolbar_window_cp04

0x60bb,	// (0x0002ba73) popup_call2_audio_second_window_g3_ParamLimits

0x60bb,	// (0x0002ba73) popup_call2_audio_second_window_g3

0x64e3,	// (0x0002be9b) popup_call2_audio_first_window_g4_ParamLimits

0x64e3,	// (0x0002be9b) popup_call2_audio_first_window_g4

0xb926,	// (0x000312de) popup_call2_audio_in_window_g4_ParamLimits

0xb926,	// (0x000312de) popup_call2_audio_in_window_g4

0x58ee,	// (0x0002b2a6) aid_area_sk_bg_cut_ParamLimits

0x58ee,	// (0x0002b2a6) aid_area_sk_bg_cut

0x590c,	// (0x0002b2c4) aid_area_sk_bg_cut_2_ParamLimits

0x590c,	// (0x0002b2c4) aid_area_sk_bg_cut_2

0x21d9,	// (0x00027b91) aid_placing_details_win

0x21d9,	// (0x00027b91) aid_placing_details_win_2

0x2977,	// (0x0002832f) camera2_autofocus_pane_g1_ParamLimits

0x0ed5,	// (0x0002688d) popup_fixed_preview_cale_window_ParamLimits

0x0ed5,	// (0x0002688d) popup_fixed_preview_cale_window

0x519d,	// (0x0002ab55) navi_slider_pane_g3

0x51a6,	// (0x0002ab5e) navi_slider_pane_g4

0x51af,	// (0x0002ab67) navi_slider_pane_g5

0x519d,	// (0x0002ab55) navi_slider_pane_g6

0xb2d2,	// (0x00030c8a) navi_slider_pane_g7

0x54ca,	// (0x0002ae82) mup_scale_pane_g3

0x54d3,	// (0x0002ae8b) mup_scale_pane_g4

0x54dc,	// (0x0002ae94) mup_scale_pane_g5

0x54e5,	// (0x0002ae9d) mup_scale_pane_g6

0x54ee,	// (0x0002aea6) mup_scale_pane_g7

0xbe97,	// (0x0003184f) cams2_slider_pane_g3

0xbe97,	// (0x0003184f) cams2_slider_pane_g4

0xbe97,	// (0x0003184f) cams2_slider_pane_g5

0xbe97,	// (0x0003184f) cams2_slider_pane_g6

0xbe97,	// (0x0003184f) cams2_slider_pane_g7

0x3423,	// (0x00028ddb) camera2_autofocus_pane_cp_g1

0xbbfc,	// (0x000315b4) bg_popup_preview_window_pane_cp02_ParamLimits

0xbbfc,	// (0x000315b4) bg_popup_preview_window_pane_cp02

0xc417,	// (0x00031dcf) list_fp_cale_pane_ParamLimits

0xc417,	// (0x00031dcf) list_fp_cale_pane

0xc423,	// (0x00031ddb) popup_fixed_preview_cale_window_t1_ParamLimits

0xc423,	// (0x00031ddb) popup_fixed_preview_cale_window_t1

0x73ac,	// (0x0002cd64) popup_fixed_preview_cale_window_t2_ParamLimits

0x73ac,	// (0x0002cd64) popup_fixed_preview_cale_window_t2

0x73c1,	// (0x0002cd79) popup_fixed_preview_cale_window_t3_ParamLimits

0x73c1,	// (0x0002cd79) popup_fixed_preview_cale_window_t3

0x0002,

0xf718,	// (0x000350d0) popup_fixed_preview_cale_window_t_ParamLimits

0xf718,	// (0x000350d0) popup_fixed_preview_cale_window_t

0x73d6,	// (0x0002cd8e) list_single_fp_cale_pane_ParamLimits

0x73d6,	// (0x0002cd8e) list_single_fp_cale_pane

0xc441,	// (0x00031df9) list_single_fp_cale_pane_g1_ParamLimits

0xc441,	// (0x00031df9) list_single_fp_cale_pane_g1

0xc44d,	// (0x00031e05) list_single_fp_cale_pane_g2_ParamLimits

0xc44d,	// (0x00031e05) list_single_fp_cale_pane_g2

0x0002,

0xf71f,	// (0x000350d7) list_single_fp_cale_pane_g_ParamLimits

0xf71f,	// (0x000350d7) list_single_fp_cale_pane_g

0xc466,	// (0x00031e1e) list_single_fp_cale_pane_t1_ParamLimits

0xc466,	// (0x00031e1e) list_single_fp_cale_pane_t1

0xc478,	// (0x00031e30) list_single_fp_cale_pane_t2_ParamLimits

0xc478,	// (0x00031e30) list_single_fp_cale_pane_t2

0x0001,

0xf726,	// (0x000350de) list_single_fp_cale_pane_t_ParamLimits

0xf726,	// (0x000350de) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb17a,	// (0x00030b32) main_dialer_pane

0x21d9,	// (0x00027b91) aid_cell_size_keypad

0x21d9,	// (0x00027b91) dialer_ne_pane

0x21d9,	// (0x00027b91) grid_dialer_command_1_pane

0x21d9,	// (0x00027b91) grid_dialer_command_2_pane

0x21d9,	// (0x00027b91) grid_dialer_keypad_pane

0x73eb,	// (0x0002cda3) bg_popup_call_pane_cp06_ParamLimits

0x73eb,	// (0x0002cda3) bg_popup_call_pane_cp06

0x73eb,	// (0x0002cda3) dialer_ne_clear_pane_ParamLimits

0x73eb,	// (0x0002cda3) dialer_ne_clear_pane

0x3423,	// (0x00028ddb) dialer_ne_pane_g1

0x527d,	// (0x0002ac35) dialer_ne_pane_t1_ParamLimits

0x527d,	// (0x0002ac35) dialer_ne_pane_t1

0x73f9,	// (0x0002cdb1) dialer_ne_pane_t2_ParamLimits

0x73f9,	// (0x0002cdb1) dialer_ne_pane_t2

0x7421,	// (0x0002cdd9) dialer_ne_pane_t3_ParamLimits

0x7421,	// (0x0002cdd9) dialer_ne_pane_t3

0x0002,

0xf72b,	// (0x000350e3) dialer_ne_pane_t_ParamLimits

0xf72b,	// (0x000350e3) dialer_ne_pane_t

0x7421,	// (0x0002cdd9) dialer_ne_pane_t3_copy1_ParamLimits

0x7421,	// (0x0002cdd9) dialer_ne_pane_t3_copy1

0xc4ab,	// (0x00031e63) cell_dialer_keypad_pane_ParamLimits

0xc4ab,	// (0x00031e63) cell_dialer_keypad_pane

0x2910,	// (0x000282c8) cell_dialer_command_1_pane_ParamLimits

0x2910,	// (0x000282c8) cell_dialer_command_1_pane

0xc4c2,	// (0x00031e7a) cell_dialer_command_2_pane_ParamLimits

0xc4c2,	// (0x00031e7a) cell_dialer_command_2_pane

0x2910,	// (0x000282c8) bg_button_pane_cp02_ParamLimits

0x2910,	// (0x000282c8) bg_button_pane_cp02

0x2977,	// (0x0002832f) cell_dialer_keypad_pane_g1_ParamLimits

0x2977,	// (0x0002832f) cell_dialer_keypad_pane_g1

0x2910,	// (0x000282c8) bg_button_pane_cp03_ParamLimits

0x2910,	// (0x000282c8) bg_button_pane_cp03

0x2977,	// (0x0002832f) cell_dialer_command_1_pane_g1_ParamLimits

0x2977,	// (0x0002832f) cell_dialer_command_1_pane_g1

0x21d9,	// (0x00027b91) bg_button_pane_cp04

0x3423,	// (0x00028ddb) cell_dialer_command_2_pane_g1

0x21d9,	// (0x00027b91) bg_button_pane_cp06

0x3423,	// (0x00028ddb) dialer_ne_clear_pane_g1

0x502e,	// (0x0002a9e6) navi_pane_g2

0x505c,	// (0x0002aa14) navi_pane_g3

0x0002,

0xf35a,	// (0x00034d12) navi_pane_g

0x50eb,	// (0x0002aaa3) navi_pane_mv_g2

0x5112,	// (0x0002aaca) navi_pane_mv_g5

0x511a,	// (0x0002aad2) navi_pane_mv_t1

0x2ad3,	// (0x0002848b) main_clock2_pane

0x2910,	// (0x000282c8) main_clock2_list_pane_ParamLimits

0x2910,	// (0x000282c8) main_clock2_list_pane

0x74b7,	// (0x0002ce6f) main_clock2_pane_t1_ParamLimits

0x74b7,	// (0x0002ce6f) main_clock2_pane_t1

0x74f2,	// (0x0002ceaa) main_clock2_pane_t2_ParamLimits

0x74f2,	// (0x0002ceaa) main_clock2_pane_t2

0x0004,

0xf737,	// (0x000350ef) main_clock2_pane_t_ParamLimits

0xf737,	// (0x000350ef) main_clock2_pane_t

0x7592,	// (0x0002cf4a) popup_clock_analogue_window_cp03_ParamLimits

0x7592,	// (0x0002cf4a) popup_clock_analogue_window_cp03

0x75b7,	// (0x0002cf6f) popup_clock_digital_window_cp02_ParamLimits

0x75b7,	// (0x0002cf6f) popup_clock_digital_window_cp02

0x75fb,	// (0x0002cfb3) main_clock2_list_single_pane_ParamLimits

0x75fb,	// (0x0002cfb3) main_clock2_list_single_pane

0x3236,	// (0x00028bee) list_highlight_pane_cp05

0xc509,	// (0x00031ec1) main_clock2_list_single_pane_t1

0x363a,	// (0x00028ff2) popup_toolbar_window_cp04_ParamLimits

0x2985,	// (0x0002833d) camera2_autofocus_pane_g2_ParamLimits

0x2985,	// (0x0002833d) camera2_autofocus_pane_g2

0x2985,	// (0x0002833d) camera2_autofocus_pane_g3_ParamLimits

0x2985,	// (0x0002833d) camera2_autofocus_pane_g3

0x2985,	// (0x0002833d) camera2_autofocus_pane_g4_ParamLimits

0x2985,	// (0x0002833d) camera2_autofocus_pane_g4

0x2985,	// (0x0002833d) camera2_autofocus_pane_g5_ParamLimits

0x2985,	// (0x0002833d) camera2_autofocus_pane_g5

0x0004,

0xf67b,	// (0x00035033) camera2_autofocus_pane_g_ParamLimits

0xf67b,	// (0x00035033) camera2_autofocus_pane_g

0x6d34,	// (0x0002c6ec) camera2_autofocus_pane_cp_g2

0x6d3c,	// (0x0002c6f4) camera2_autofocus_pane_cp_g3

0x6d44,	// (0x0002c6fc) camera2_autofocus_pane_cp_g4

0x6d4c,	// (0x0002c704) camera2_autofocus_pane_cp_g5

0x0004,

0xf6e1,	// (0x00035099) camera2_autofocus_pane_cp_g

0x21d9,	// (0x00027b91) popup_dialer_spcha_window

0x21d9,	// (0x00027b91) bg_popup_sub_pane_cp07

0x21d9,	// (0x00027b91) list_spcha_pane

0xc517,	// (0x00031ecf) list_single_spcha_pane_ParamLimits

0xc517,	// (0x00031ecf) list_single_spcha_pane

0x21d9,	// (0x00027b91) list_highlight_pane_cp06

0x49fd,	// (0x0002a3b5) list_single_spcha_pane_t1

0xb6d0,	// (0x00031088) popup_call2_audio_out_window_g4_ParamLimits

0xb6d0,	// (0x00031088) popup_call2_audio_out_window_g4

0xb17a,	// (0x00030b32) main_imed2_pane

0xbc22,	// (0x000315da) popup_imed_adjust2_window

0x1348,	// (0x00026d00) popup_imed_trans_window_ParamLimits

0x1348,	// (0x00026d00) popup_imed_trans_window

0xbf7b,	// (0x00031933) popup_blid_sat_info2_window_t1

0xbf89,	// (0x00031941) popup_blid_sat_info2_window_t2

0x000a,

0xf610,	// (0x00034fc8) popup_blid_sat_info2_window_t

0x760d,	// (0x0002cfc5) aid_size_cell_colour_35

0x762d,	// (0x0002cfe5) aid_size_cell_colour_112

0x764d,	// (0x0002d005) aid_size_cell_effect

0x5291,	// (0x0002ac49) bg_tb_trans_pane_cp02

0x48b0,	// (0x0002a268) heading_imed_pane

0x766d,	// (0x0002d025) listscroll_imed_pane

0xc529,	// (0x00031ee1) heading_imed_pane_g1

0xc531,	// (0x00031ee9) heading_imed_pane_t1

0xc53f,	// (0x00031ef7) grid_imed_colour_35_pane_ParamLimits

0xc53f,	// (0x00031ef7) grid_imed_colour_35_pane

0x7679,	// (0x0002d031) grid_imed_effect_pane

0xc556,	// (0x00031f0e) list_imed_aspect_pane

0x768f,	// (0x0002d047) scroll_pane_cp027_ParamLimits

0x768f,	// (0x0002d047) scroll_pane_cp027

0x76a0,	// (0x0002d058) cell_imed_effect_pane_ParamLimits

0x76a0,	// (0x0002d058) cell_imed_effect_pane

0xc55e,	// (0x00031f16) cell_imed_colour_pane_ParamLimits

0xc55e,	// (0x00031f16) cell_imed_colour_pane

0xc5a0,	// (0x00031f58) cell_imed_colour_pane_g1_ParamLimits

0xc5a0,	// (0x00031f58) cell_imed_colour_pane_g1

0xc5b1,	// (0x00031f69) hgihlgiht_grid_pane_cp016_ParamLimits

0xc5b1,	// (0x00031f69) hgihlgiht_grid_pane_cp016

0x76c7,	// (0x0002d07f) cell_imed_effect_pane_g1

0x76cf,	// (0x0002d087) grid_highlight_pane_cp017

0xc5c2,	// (0x00031f7a) list_imed_single_pane_ParamLimits

0xc5c2,	// (0x00031f7a) list_imed_single_pane

0x21d9,	// (0x00027b91) list_highlight_pane_cp07

0xc5d7,	// (0x00031f8f) list_imed_aspect_pane_comp1_t1

0x5291,	// (0x0002ac49) bg_tb_trans_pane_cp05

0xc5f9,	// (0x00031fb1) popup_imed_adjust2_window_g1

0xc620,	// (0x00031fd8) popup_imed_adjust2_window_t1

0xc638,	// (0x00031ff0) slider_imed_adjust_pane

0xc64c,	// (0x00032004) slider_imed_adjust_pane_g1

0xc65c,	// (0x00032014) slider_imed_adjust_pane_g2

0xc66c,	// (0x00032024) slider_imed_adjust_pane_g3

0xc67d,	// (0x00032035) slider_imed_adjust_pane_g4

0x0003,

0xf754,	// (0x0003510c) slider_imed_adjust_pane_g

0x76d8,	// (0x0002d090) aid_size_cell_clipart2

0x76e4,	// (0x0002d09c) grid_imed_clipart_pane

0xc68e,	// (0x00032046) scroll_pane_cp031

0x76ee,	// (0x0002d0a6) cell_imed_clipart_pane_ParamLimits

0x76ee,	// (0x0002d0a6) cell_imed_clipart_pane

0x7710,	// (0x0002d0c8) cell_imed_clipart_pane_g1

0x21d9,	// (0x00027b91) grid_highlight_pane_cp014

0x7493,	// (0x0002ce4b) main_clock2_pane_g1_ParamLimits

0x7493,	// (0x0002ce4b) main_clock2_pane_g1

0x75d7,	// (0x0002cf8f) aid_call2_pane_cp10

0x75e9,	// (0x0002cfa1) aid_call_pane_cp10

0x4f2a,	// (0x0002a8e2) popup_clock_analogue_window_cp10_g1

0x4f2a,	// (0x0002a8e2) popup_clock_analogue_window_cp10_g2

0x1507,	// (0x00026ebf) popup_clock_analogue_window_cp10_g3

0x1507,	// (0x00026ebf) popup_clock_analogue_window_cp10_g4

0x4f2a,	// (0x0002a8e2) popup_clock_analogue_window_cp10_g5

0x0004,

0xf742,	// (0x000350fa) popup_clock_analogue_window_cp10_g

0x151d,	// (0x00026ed5) popup_clock_analogue_window_cp10_t1

0x153c,	// (0x00026ef4) clock_digital_number_pane_cp10_ParamLimits

0x153c,	// (0x00026ef4) clock_digital_number_pane_cp10

0x1554,	// (0x00026f0c) clock_digital_number_pane_cp11_ParamLimits

0x1554,	// (0x00026f0c) clock_digital_number_pane_cp11

0x156c,	// (0x00026f24) clock_digital_number_pane_cp12_ParamLimits

0x156c,	// (0x00026f24) clock_digital_number_pane_cp12

0x1586,	// (0x00026f3e) clock_digital_number_pane_cp13_ParamLimits

0x1586,	// (0x00026f3e) clock_digital_number_pane_cp13

0x15a0,	// (0x00026f58) clock_digital_separator_pane_cp10_ParamLimits

0x15a0,	// (0x00026f58) clock_digital_separator_pane_cp10

0x15ba,	// (0x00026f72) popup_clock_digital_window_cp02_t1_ParamLimits

0x15ba,	// (0x00026f72) popup_clock_digital_window_cp02_t1

0x28e6,	// (0x0002829e) clock_digital_number_pane_cp10_g1

0x28e6,	// (0x0002829e) clock_digital_number_pane_cp10_g2

0x0001,

0xf75d,	// (0x00035115) clock_digital_number_pane_cp10_g

0x28e6,	// (0x0002829e) clock_digital_separator_pane_cp10_g1

0x28e6,	// (0x0002829e) clock_digital_separator_pane_g2_cp10

0x515c,	// (0x0002ab14) navi_pane_vded_g4

0x5165,	// (0x0002ab1d) navi_pane_vded_g5

0x516e,	// (0x0002ab26) navi_pane_vded_t1

0xb17a,	// (0x00030b32) main_vded_pane

0x7719,	// (0x0002d0d1) main_vded_pane_g1

0x7723,	// (0x0002d0db) main_vded_pane_g2

0x772d,	// (0x0002d0e5) main_vded_pane_g3

0x0002,

0xf762,	// (0x0003511a) main_vded_pane_g

0x7737,	// (0x0002d0ef) main_vded_pane_t1

0x7745,	// (0x0002d0fd) main_vded_pane_t2

0x0001,

0xf769,	// (0x00035121) main_vded_pane_t

0x7753,	// (0x0002d10b) vded_slider_pane

0x775b,	// (0x0002d113) vded_video_pane

0xc696,	// (0x0003204e) vded_video_pane_g1

0x7763,	// (0x0002d11b) vded_video_pane_g2

0x3423,	// (0x00028ddb) vded_video_pane_g3

0x0002,

0xf76e,	// (0x00035126) vded_video_pane_g

0xc6a0,	// (0x00032058) vded_slider_pane_g1

0xbe8e,	// (0x00031846) vded_slider_pane_g2

0xc6a9,	// (0x00032061) vded_slider_pane_g3

0xc6b2,	// (0x0003206a) vded_slider_pane_g4

0xc6bb,	// (0x00032073) vded_slider_pane_g5

0x0004,

0xf775,	// (0x0003512d) vded_slider_pane_g

0x72f8,	// (0x0002ccb0) mup3_rocker_pane_ParamLimits

0x72f8,	// (0x0002ccb0) mup3_rocker_pane

0x776c,	// (0x0002d124) mup3_control_keys_pane_g1

0x7774,	// (0x0002d12c) mup3_control_keys_pane_g2

0x777c,	// (0x0002d134) mup3_control_keys_pane_g3

0x7784,	// (0x0002d13c) mup3_control_keys_pane_g4

0x0003,

0xf780,	// (0x00035138) mup3_control_keys_pane_g

0x0f0c,	// (0x000268c4) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0f0c,	// (0x000268c4) popup_toolbar2_fixed_window_cp01

0x732c,	// (0x0002cce4) popup_toolbar2_fixed_window_cp02_ParamLimits

0x732c,	// (0x0002cce4) popup_toolbar2_fixed_window_cp02

0x622d,	// (0x0002bbe5) popup_call2_audio_second_window_t4_ParamLimits

0x622d,	// (0x0002bbe5) popup_call2_audio_second_window_t4

0xb595,	// (0x00030f4d) popup_call2_audio_first_window_t6_ParamLimits

0xb595,	// (0x00030f4d) popup_call2_audio_first_window_t6

0xb7d3,	// (0x0003118b) popup_call2_audio_out_window_t6_ParamLimits

0xb7d3,	// (0x0003118b) popup_call2_audio_out_window_t6

0xb17a,	// (0x00030b32) main_vitu_pane

0x2910,	// (0x000282c8) aid_size_cell_itu_ParamLimits

0x2910,	// (0x000282c8) aid_size_cell_itu

0x2910,	// (0x000282c8) bg_popup_window_pane_cp08_ParamLimits

0x2910,	// (0x000282c8) bg_popup_window_pane_cp08

0x2910,	// (0x000282c8) field_vitu_entry_pane_ParamLimits

0x2910,	// (0x000282c8) field_vitu_entry_pane

0x2910,	// (0x000282c8) grid_vitu_function_pane_ParamLimits

0x2910,	// (0x000282c8) grid_vitu_function_pane

0x2910,	// (0x000282c8) grid_vitu_itu_pane_ParamLimits

0x2910,	// (0x000282c8) grid_vitu_itu_pane

0x2910,	// (0x000282c8) cell_vitu_itu_pane_ParamLimits

0x2910,	// (0x000282c8) cell_vitu_itu_pane

0x2910,	// (0x000282c8) cell_vitu_function_pane_ParamLimits

0x2910,	// (0x000282c8) cell_vitu_function_pane

0x2910,	// (0x000282c8) bg_popup_sub_pane_cp08_ParamLimits

0x2910,	// (0x000282c8) bg_popup_sub_pane_cp08

0x329f,	// (0x00028c57) field_vitu_entry_pane_t1_ParamLimits

0x329f,	// (0x00028c57) field_vitu_entry_pane_t1

0xc6c4,	// (0x0003207c) field_vitu_entry_pane_t2_ParamLimits

0xc6c4,	// (0x0003207c) field_vitu_entry_pane_t2

0x0001,

0xf789,	// (0x00035141) field_vitu_entry_pane_t_ParamLimits

0xf789,	// (0x00035141) field_vitu_entry_pane_t

0xbf22,	// (0x000318da) bg_button_pane_cp05_ParamLimits

0xbf22,	// (0x000318da) bg_button_pane_cp05

0xc6e1,	// (0x00032099) cell_vitu_itu_pane_g1

0x5269,	// (0x0002ac21) cell_vitu_itu_pane_t1_ParamLimits

0x5269,	// (0x0002ac21) cell_vitu_itu_pane_t1

0x5269,	// (0x0002ac21) cell_vitu_itu_pane_t2_ParamLimits

0x5269,	// (0x0002ac21) cell_vitu_itu_pane_t2

0x0002,

0xf78e,	// (0x00035146) cell_vitu_itu_pane_t_ParamLimits

0xf78e,	// (0x00035146) cell_vitu_itu_pane_t

0x21d9,	// (0x00027b91) bg_button_pane_cp07

0x3423,	// (0x00028ddb) cell_vitu_function_pane_g1

0xb184,	// (0x00030b3c) main_calc_pane_g1

0x0d6c,	// (0x00026724) aid_visual_content_pane

0xb17a,	// (0x00030b32) main_vradio_pane

0x2977,	// (0x0002832f) main_vradio_pane_g1_ParamLimits

0x2977,	// (0x0002832f) main_vradio_pane_g1

0x2985,	// (0x0002833d) main_vradio_pane_g2_ParamLimits

0x2985,	// (0x0002833d) main_vradio_pane_g2

0x0001,

0xf795,	// (0x0003514d) main_vradio_pane_g_ParamLimits

0xf795,	// (0x0003514d) main_vradio_pane_g

0x329f,	// (0x00028c57) main_vradio_pane_t1_ParamLimits

0x329f,	// (0x00028c57) main_vradio_pane_t1

0x329f,	// (0x00028c57) main_vradio_pane_t2_ParamLimits

0x329f,	// (0x00028c57) main_vradio_pane_t2

0x527d,	// (0x0002ac35) main_vradio_pane_t3_ParamLimits

0x527d,	// (0x0002ac35) main_vradio_pane_t3

0x0002,

0xf79a,	// (0x00035152) main_vradio_pane_t_ParamLimits

0xf79a,	// (0x00035152) main_vradio_pane_t

0x2910,	// (0x000282c8) vradio_rocker_control_pane_ParamLimits

0x2910,	// (0x000282c8) vradio_rocker_control_pane

0x2910,	// (0x000282c8) vradio_station_info_pane_ParamLimits

0x2910,	// (0x000282c8) vradio_station_info_pane

0x2910,	// (0x000282c8) vradio_frequency_info_pane_ParamLimits

0x2910,	// (0x000282c8) vradio_frequency_info_pane

0x3423,	// (0x00028ddb) vradio_station_info_pane_g1

0x5269,	// (0x0002ac21) vradio_station_info_pane_t1_ParamLimits

0x5269,	// (0x0002ac21) vradio_station_info_pane_t1

0x527d,	// (0x0002ac35) vradio_station_info_pane_t2_ParamLimits

0x527d,	// (0x0002ac35) vradio_station_info_pane_t2

0x0001,

0xf7a1,	// (0x00035159) vradio_station_info_pane_t_ParamLimits

0xf7a1,	// (0x00035159) vradio_station_info_pane_t

0x21d9,	// (0x00027b91) vradio_tuning_pane

0x7794,	// (0x0002d14c) vradio_rocker_control_pane_g1

0xc6fd,	// (0x000320b5) vradio_rocker_control_pane_g2

0x779e,	// (0x0002d156) vradio_rocker_control_pane_g3

0x77a8,	// (0x0002d160) vradio_rocker_control_pane_g4

0x77b2,	// (0x0002d16a) vradio_rocker_control_pane_g5

0x0004,

0xf7a6,	// (0x0003515e) vradio_rocker_control_pane_g

0x3423,	// (0x00028ddb) vradio_frequency_info_pane_g1

0x329f,	// (0x00028c57) vradio_frequency_info_pane_t1_ParamLimits

0x329f,	// (0x00028c57) vradio_frequency_info_pane_t1

0x77bc,	// (0x0002d174) vradio_tuning_pane_g1

0x77c9,	// (0x0002d181) vradio_tuning_pane_t1

0xb12b,	// (0x00030ae3) area_side_right_pane_ParamLimits

0xb12b,	// (0x00030ae3) area_side_right_pane

0xbbc3,	// (0x0003157b) status_small_pane_g1

0xbbcb,	// (0x00031583) status_small_pane_g2

0xbbd4,	// (0x0003158c) status_small_pane_g3

0xbbdd,	// (0x00031595) status_small_pane_g4

0x0003,

0xf572,	// (0x00034f2a) status_small_pane_g

0xbbe6,	// (0x0003159e) status_small_pane_t1

0xb17a,	// (0x00030b32) main_video3_pane

0xc705,	// (0x000320bd) cams_zoom_vslider_pane

0xc70d,	// (0x000320c5) image3_wide_pane_ParamLimits

0xc70d,	// (0x000320c5) image3_wide_pane

0xc727,	// (0x000320df) image3_wide_small_pane

0xc733,	// (0x000320eb) main_video3_pane_g1_ParamLimits

0xc733,	// (0x000320eb) main_video3_pane_g1

0xc74f,	// (0x00032107) main_video3_pane_g2_ParamLimits

0xc74f,	// (0x00032107) main_video3_pane_g2

0x0001,

0xf7b1,	// (0x00035169) main_video3_pane_g_ParamLimits

0xf7b1,	// (0x00035169) main_video3_pane_g

0xc76b,	// (0x00032123) main_video3_pane_t1_ParamLimits

0xc76b,	// (0x00032123) main_video3_pane_t1

0xc796,	// (0x0003214e) main_video3_pane_t2_ParamLimits

0xc796,	// (0x0003214e) main_video3_pane_t2

0xc7c1,	// (0x00032179) main_video3_pane_t3_ParamLimits

0xc7c1,	// (0x00032179) main_video3_pane_t3

0x0002,

0xf7b6,	// (0x0003516e) main_video3_pane_t_ParamLimits

0xf7b6,	// (0x0003516e) main_video3_pane_t

0xc7ee,	// (0x000321a6) cams_zoom_vslider_pane_g1

0xc7f7,	// (0x000321af) cams_zoom_vslider_pane_g2

0x0001,

0xf7bd,	// (0x00035175) cams_zoom_vslider_pane_g

0xc7ff,	// (0x000321b7) small_slider_vertical_pane

0x3423,	// (0x00028ddb) small_slider_vertical_pane_g1

0x3423,	// (0x00028ddb) small_slider_vertical_pane_g2

0xc807,	// (0x000321bf) small_slider_vertical_pane_g3

0x0002,

0xf7c2,	// (0x0003517a) small_slider_vertical_pane_g

0xb17a,	// (0x00030b32) main_hwr_training_pane

0xc810,	// (0x000321c8) hwr_training_instruct_pane_ParamLimits

0xc810,	// (0x000321c8) hwr_training_instruct_pane

0x77d8,	// (0x0002d190) hwr_training_navi_pane_ParamLimits

0x77d8,	// (0x0002d190) hwr_training_navi_pane

0x77f7,	// (0x0002d1af) hwr_training_write_pane_ParamLimits

0x77f7,	// (0x0002d1af) hwr_training_write_pane

0x21d9,	// (0x00027b91) bg_frame_shadow_pane

0xc847,	// (0x000321ff) hwr_training_write_pane_g1

0xc84f,	// (0x00032207) hwr_training_write_pane_g2

0xc857,	// (0x0003220f) hwr_training_write_pane_g3

0xc85f,	// (0x00032217) hwr_training_write_pane_g4

0xc867,	// (0x0003221f) hwr_training_write_pane_g5

0xc86f,	// (0x00032227) hwr_training_write_pane_g6

0xc877,	// (0x0003222f) hwr_training_write_pane_g7

0x0006,

0xf7c9,	// (0x00035181) hwr_training_write_pane_g

0xc87f,	// (0x00032237) hwr_training_navi_pane_g1_ParamLimits

0xc87f,	// (0x00032237) hwr_training_navi_pane_g1

0xc891,	// (0x00032249) hwr_training_navi_pane_g2_ParamLimits

0xc891,	// (0x00032249) hwr_training_navi_pane_g2

0xc8a3,	// (0x0003225b) hwr_training_navi_pane_g3_ParamLimits

0xc8a3,	// (0x0003225b) hwr_training_navi_pane_g3

0xc8b3,	// (0x0003226b) hwr_training_navi_pane_g4_ParamLimits

0xc8b3,	// (0x0003226b) hwr_training_navi_pane_g4

0x0004,

0xf7d8,	// (0x00035190) hwr_training_navi_pane_g_ParamLimits

0xf7d8,	// (0x00035190) hwr_training_navi_pane_g

0xc8c0,	// (0x00032278) hwr_training_navi_pane_t1

0x7832,	// (0x0002d1ea) list_single_hwr_training_instruct_pane_ParamLimits

0x7832,	// (0x0002d1ea) list_single_hwr_training_instruct_pane

0xc8ce,	// (0x00032286) list_single_hwr_training_instruct_pane_t1

0xc07c,	// (0x00031a34) bg_frame_shadow_pane_g1

0xc8dd,	// (0x00032295) bg_frame_shadow_pane_g2

0xc8e5,	// (0x0003229d) bg_frame_shadow_pane_g3

0xc8ed,	// (0x000322a5) bg_frame_shadow_pane_g4

0xc8f5,	// (0x000322ad) bg_frame_shadow_pane_g5

0xc8fd,	// (0x000322b5) bg_frame_shadow_pane_g6

0xc905,	// (0x000322bd) bg_frame_shadow_pane_g7

0x2c6b,	// (0x00028623) bg_frame_shadow_pane_g8

0x0007,

0xf7e3,	// (0x0003519b) bg_frame_shadow_pane_g

0xb17a,	// (0x00030b32) main_video_tele_dialer_pane

0x15e8,	// (0x00026fa0) aid_size_cell_video_keypad_ParamLimits

0x15e8,	// (0x00026fa0) aid_size_cell_video_keypad

0x1602,	// (0x00026fba) grid_video_dialer_keypad_pane_ParamLimits

0x1602,	// (0x00026fba) grid_video_dialer_keypad_pane

0x164e,	// (0x00027006) video_down_pane_cp_ParamLimits

0x164e,	// (0x00027006) video_down_pane_cp

0x1664,	// (0x0002701c) cell_video_dialer_keypad_pane_ParamLimits

0x1664,	// (0x0002701c) cell_video_dialer_keypad_pane

0xc90d,	// (0x000322c5) bg_button_pane_cp08_ParamLimits

0xc90d,	// (0x000322c5) bg_button_pane_cp08

0x7863,	// (0x0002d21b) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7863,	// (0x0002d21b) cell_video_dialer_keypad_pane_g1

0x72e2,	// (0x0002cc9a) mup3_rocker2_pane_ParamLimits

0x72e2,	// (0x0002cc9a) mup3_rocker2_pane

0x3423,	// (0x00028ddb) mup3_rocker2_pane_g1

0x1229,	// (0x00026be1) main_dialer2_pane

0xb17a,	// (0x00030b32) main_mp4_pane

0xc937,	// (0x000322ef) main_mp4_pane_g1_ParamLimits

0xc937,	// (0x000322ef) main_mp4_pane_g1

0xc937,	// (0x000322ef) main_mp4_pane_g2_ParamLimits

0xc937,	// (0x000322ef) main_mp4_pane_g2

0x1686,	// (0x0002703e) main_mp4_pane_g3_ParamLimits

0x1686,	// (0x0002703e) main_mp4_pane_g3

0xc945,	// (0x000322fd) main_mp4_pane_g4_ParamLimits

0xc945,	// (0x000322fd) main_mp4_pane_g4

0xc973,	// (0x0003232b) main_mp4_pane_g5_ParamLimits

0xc973,	// (0x0003232b) main_mp4_pane_g5

0x0007,

0xf803,	// (0x000351bb) main_mp4_pane_g_ParamLimits

0xf803,	// (0x000351bb) main_mp4_pane_g

0xc9e7,	// (0x0003239f) main_mp4_pane_t1_ParamLimits

0xc9e7,	// (0x0003239f) main_mp4_pane_t1

0xca43,	// (0x000323fb) main_mp4_pane_t2_ParamLimits

0xca43,	// (0x000323fb) main_mp4_pane_t2

0xca95,	// (0x0003244d) main_mp4_pane_t3_ParamLimits

0xca95,	// (0x0003244d) main_mp4_pane_t3

0xcabb,	// (0x00032473) main_mp4_pane_t4_ParamLimits

0xcabb,	// (0x00032473) main_mp4_pane_t4

0x0003,

0xf814,	// (0x000351cc) main_mp4_pane_t_ParamLimits

0xf814,	// (0x000351cc) main_mp4_pane_t

0xcaff,	// (0x000324b7) mp4_progress_pane_ParamLimits

0xcaff,	// (0x000324b7) mp4_progress_pane

0xcb49,	// (0x00032501) mp4_rocker_pane_ParamLimits

0xcb49,	// (0x00032501) mp4_rocker_pane

0xcb71,	// (0x00032529) mp4_progress_pane_t1

0xcb8a,	// (0x00032542) mp4_progress_pane_t2

0x0001,

0xf81d,	// (0x000351d5) mp4_progress_pane_t

0xcba3,	// (0x0003255b) mup_progress_pane_cp04

0xbe97,	// (0x0003184f) mp4_rocker_pane_g1

0x16c2,	// (0x0002707a) aid_cell_size_keypad2_ParamLimits

0x16c2,	// (0x0002707a) aid_cell_size_keypad2

0x16d8,	// (0x00027090) dialer2_ne_pane_ParamLimits

0x16d8,	// (0x00027090) dialer2_ne_pane

0x16f2,	// (0x000270aa) grid_dialer2_keypad_pane_ParamLimits

0x16f2,	// (0x000270aa) grid_dialer2_keypad_pane

0xbf22,	// (0x000318da) bg_popup_call_pane_cp07_ParamLimits

0xbf22,	// (0x000318da) bg_popup_call_pane_cp07

0x789a,	// (0x0002d252) dialer2_ne_pane_t1_ParamLimits

0x789a,	// (0x0002d252) dialer2_ne_pane_t1

0x170e,	// (0x000270c6) cell_dialer2_keypad_pane_ParamLimits

0x170e,	// (0x000270c6) cell_dialer2_keypad_pane

0xcbc8,	// (0x00032580) bg_button_pane_pane_cp04_ParamLimits

0xcbc8,	// (0x00032580) bg_button_pane_pane_cp04

0x78d5,	// (0x0002d28d) cell_dialer2_keypad_pane_g1_ParamLimits

0x78d5,	// (0x0002d28d) cell_dialer2_keypad_pane_g1

0x34fc,	// (0x00028eb4) aid_placing_vt_set_content_ParamLimits

0x34fc,	// (0x00028eb4) aid_placing_vt_set_content

0x3524,	// (0x00028edc) aid_placing_vt_set_title_ParamLimits

0x3524,	// (0x00028edc) aid_placing_vt_set_title

0xb17a,	// (0x00030b32) main_image3_pane

0x178e,	// (0x00027146) area_side_right_pane_cp01_ParamLimits

0x178e,	// (0x00027146) area_side_right_pane_cp01

0xc937,	// (0x000322ef) main_image3_pane_g1_ParamLimits

0xc937,	// (0x000322ef) main_image3_pane_g1

0x17a5,	// (0x0002715d) main_image3_pane_g2_ParamLimits

0x17a5,	// (0x0002715d) main_image3_pane_g2

0x17cd,	// (0x00027185) main_image3_pane_g3_ParamLimits

0x17cd,	// (0x00027185) main_image3_pane_g3

0x17f7,	// (0x000271af) main_image3_pane_g4_ParamLimits

0x17f7,	// (0x000271af) main_image3_pane_g4

0x0003,

0xf82c,	// (0x000351e4) main_image3_pane_g_ParamLimits

0xf82c,	// (0x000351e4) main_image3_pane_g

0x1821,	// (0x000271d9) main_image3_pane_t1_ParamLimits

0x1821,	// (0x000271d9) main_image3_pane_t1

0x1879,	// (0x00027231) main_image3_pane_t2_ParamLimits

0x1879,	// (0x00027231) main_image3_pane_t2

0x18cb,	// (0x00027283) main_image3_pane_t3_ParamLimits

0x18cb,	// (0x00027283) main_image3_pane_t3

0x0003,

0xf835,	// (0x000351ed) main_image3_pane_t_ParamLimits

0xf835,	// (0x000351ed) main_image3_pane_t

0x2910,	// (0x000282c8) grid_sctrl_middle_pane_cp01_ParamLimits

0x2910,	// (0x000282c8) grid_sctrl_middle_pane_cp01

0x793d,	// (0x0002d2f5) cell_sctrl_middle_pane_cp01_ParamLimits

0x793d,	// (0x0002d2f5) cell_sctrl_middle_pane_cp01

0x795a,	// (0x0002d312) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x795a,	// (0x0002d312) cell_sctrl_middle_pane_cp01_g1

0xb17a,	// (0x00030b32) main_call4_pane

0x1953,	// (0x0002730b) aid_size_button_call4_ParamLimits

0x1953,	// (0x0002730b) aid_size_button_call4

0x1986,	// (0x0002733e) call4_windows_pane_ParamLimits

0x1986,	// (0x0002733e) call4_windows_pane

0x19a5,	// (0x0002735d) grid_call4_button_pane_ParamLimits

0x19a5,	// (0x0002735d) grid_call4_button_pane

0x797a,	// (0x0002d332) call4_windows_conf_pane

0x7991,	// (0x0002d349) popup_call4_audio_first_window_ParamLimits

0x7991,	// (0x0002d349) popup_call4_audio_first_window

0x79e1,	// (0x0002d399) popup_call4_audio_second_window_ParamLimits

0x79e1,	// (0x0002d399) popup_call4_audio_second_window

0x79f8,	// (0x0002d3b0) popup_call4_audio_wait_window_ParamLimits

0x79f8,	// (0x0002d3b0) popup_call4_audio_wait_window

0x19ce,	// (0x00027386) cell_call4_button_pane_ParamLimits

0x19ce,	// (0x00027386) cell_call4_button_pane

0x7a06,	// (0x0002d3be) bg_button_pane_cp09_ParamLimits

0x7a06,	// (0x0002d3be) bg_button_pane_cp09

0x19f3,	// (0x000273ab) cell_call4_button_pane_g1_ParamLimits

0x19f3,	// (0x000273ab) cell_call4_button_pane_g1

0x1a19,	// (0x000273d1) cell_call4_button_pane_t1_ParamLimits

0x1a19,	// (0x000273d1) cell_call4_button_pane_t1

0xcc40,	// (0x000325f8) popup_call4_audio_conf_window_ParamLimits

0xcc40,	// (0x000325f8) popup_call4_audio_conf_window

0x7342,	// (0x0002ccfa) mup3_progress_pane_t1_ParamLimits

0x7361,	// (0x0002cd19) mup3_progress_pane_t2_ParamLimits

0xc3d4,	// (0x00031d8c) mup3_progress_pane_t3_ParamLimits

0xf70a,	// (0x000350c2) mup3_progress_pane_t_ParamLimits

0xc3f1,	// (0x00031da9) mup_progress_pane_cp03_ParamLimits

0x778c,	// (0x0002d144) mup3_control_keys_pane_g4_copy1

0xcb2d,	// (0x000324e5) mp4_rocker2_pane_ParamLimits

0xcb2d,	// (0x000324e5) mp4_rocker2_pane

0xcc54,	// (0x0003260c) mp4_rocker2_pane_g1

0xcc5c,	// (0x00032614) mp4_rocker2_pane_g2

0xcc64,	// (0x0003261c) mp4_rocker2_pane_g3

0xcc6c,	// (0x00032624) mp4_rocker2_pane_g4

0xcc74,	// (0x0003262c) mp4_rocker2_pane_g5

0x0004,

0xf83e,	// (0x000351f6) mp4_rocker2_pane_g

0xb17a,	// (0x00030b32) main_camera4_pane

0xb17a,	// (0x00030b32) main_video4_pane

0x161c,	// (0x00026fd4) main_video_tele_dialer_pane_t1_ParamLimits

0x161c,	// (0x00026fd4) main_video_tele_dialer_pane_t1

0x1635,	// (0x00026fed) main_video_tele_dialer_pane_t2_ParamLimits

0x1635,	// (0x00026fed) main_video_tele_dialer_pane_t2

0x0001,

0xf7f4,	// (0x000351ac) main_video_tele_dialer_pane_t_ParamLimits

0xf7f4,	// (0x000351ac) main_video_tele_dialer_pane_t

0x1a57,	// (0x0002740f) cam4_autofocus_pane_ParamLimits

0x1a57,	// (0x0002740f) cam4_autofocus_pane

0x1a6d,	// (0x00027425) cam4_image_uncrop_pane_ParamLimits

0x1a6d,	// (0x00027425) cam4_image_uncrop_pane

0x1a87,	// (0x0002743f) cam4_indicators_pane_ParamLimits

0x1a87,	// (0x0002743f) cam4_indicators_pane

0x1ab2,	// (0x0002746a) main_camera4_pane_g1_ParamLimits

0x1ab2,	// (0x0002746a) main_camera4_pane_g1

0x1ac4,	// (0x0002747c) main_camera4_pane_g2_ParamLimits

0x1ac4,	// (0x0002747c) main_camera4_pane_g2

0x1ad7,	// (0x0002748f) main_camera4_pane_g3_ParamLimits

0x1ad7,	// (0x0002748f) main_camera4_pane_g3

0x1aea,	// (0x000274a2) main_camera4_pane_g4_ParamLimits

0x1aea,	// (0x000274a2) main_camera4_pane_g4

0x1afd,	// (0x000274b5) main_camera4_pane_g5_ParamLimits

0x1afd,	// (0x000274b5) main_camera4_pane_g5

0x0005,

0xf849,	// (0x00035201) main_camera4_pane_g_ParamLimits

0xf849,	// (0x00035201) main_camera4_pane_g

0x1b21,	// (0x000274d9) main_camera4_pane_t1_ParamLimits

0x1b21,	// (0x000274d9) main_camera4_pane_t1

0xccaa,	// (0x00032662) bg_tb_trans_pane_cp06

0xccc0,	// (0x00032678) cam4_indicators_pane_g1

0xccd1,	// (0x00032689) cam4_indicators_pane_g2

0x0002,

0xf864,	// (0x0003521c) cam4_indicators_pane_g

0xccef,	// (0x000326a7) cam4_indicators_pane_t1

0x1b71,	// (0x00027529) main_video4_pane_g1_ParamLimits

0x1b71,	// (0x00027529) main_video4_pane_g1

0x1b80,	// (0x00027538) main_video4_pane_g2_ParamLimits

0x1b80,	// (0x00027538) main_video4_pane_g2

0x1b8f,	// (0x00027547) main_video4_pane_g3_ParamLimits

0x1b8f,	// (0x00027547) main_video4_pane_g3

0x1b9e,	// (0x00027556) main_video4_pane_g4_ParamLimits

0x1b9e,	// (0x00027556) main_video4_pane_g4

0x0004,

0xf86b,	// (0x00035223) main_video4_pane_g_ParamLimits

0xf86b,	// (0x00035223) main_video4_pane_g

0x1bbc,	// (0x00027574) vid4_indicators_pane_ParamLimits

0x1bbc,	// (0x00027574) vid4_indicators_pane

0x1bea,	// (0x000275a2) video4_image_uncrop_cif_pane_ParamLimits

0x1bea,	// (0x000275a2) video4_image_uncrop_cif_pane

0x1c04,	// (0x000275bc) video4_image_uncrop_nhd_pane_ParamLimits

0x1c04,	// (0x000275bc) video4_image_uncrop_nhd_pane

0x1a6d,	// (0x00027425) video4_image_uncrop_vga_pane_ParamLimits

0x1a6d,	// (0x00027425) video4_image_uncrop_vga_pane

0xb16c,	// (0x00030b24) bg_tb_trans_pane_cp07

0xcd1b,	// (0x000326d3) vid4_indicators_pane_g1

0xcd2f,	// (0x000326e7) vid4_indicators_pane_g2

0xcd43,	// (0x000326fb) vid4_indicators_pane_g3

0x0004,

0xf876,	// (0x0003522e) vid4_indicators_pane_g

0xcd72,	// (0x0003272a) vid4_indicators_pane_t1

0x7a26,	// (0x0002d3de) cam4_autofocus_pane_g1

0x7a2e,	// (0x0002d3e6) cam4_autofocus_pane_g2

0x7a36,	// (0x0002d3ee) cam4_autofocus_pane_g3

0x0002,

0xf881,	// (0x00035239) cam4_autofocus_pane_g

0x7a3e,	// (0x0002d3f6) cam4_autofocus_pane_g3_copy1

0x7847,	// (0x0002d1ff) video_down_pane_cp_t1

0x7855,	// (0x0002d20d) video_down_pane_cp_t2

0x0001,

0xf7f9,	// (0x000351b1) video_down_pane_cp_t

0xb16c,	// (0x00030b24) popup_vitu2_window_ParamLimits

0xb16c,	// (0x00030b24) popup_vitu2_window

0x1c18,	// (0x000275d0) aid_size_cell2_itu2_ParamLimits

0x1c18,	// (0x000275d0) aid_size_cell2_itu2

0x1c3e,	// (0x000275f6) aid_size_cell_itu2_ParamLimits

0x1c3e,	// (0x000275f6) aid_size_cell_itu2

0x1c9a,	// (0x00027652) bg_popup_window_pane_cp09_ParamLimits

0x1c9a,	// (0x00027652) bg_popup_window_pane_cp09

0x1ca8,	// (0x00027660) field_vitu2_entry_pane_ParamLimits

0x1ca8,	// (0x00027660) field_vitu2_entry_pane

0x1cce,	// (0x00027686) grid_vitu2_function_pane_ParamLimits

0x1cce,	// (0x00027686) grid_vitu2_function_pane

0x1d1f,	// (0x000276d7) grid_vitu2_itu_pane_ParamLimits

0x1d1f,	// (0x000276d7) grid_vitu2_itu_pane

0x1db5,	// (0x0002776d) cell_vitu2_itu_pane_ParamLimits

0x1db5,	// (0x0002776d) cell_vitu2_itu_pane

0x1de1,	// (0x00027799) cell_vitu2_function_pane_ParamLimits

0x1de1,	// (0x00027799) cell_vitu2_function_pane

0xcd89,	// (0x00032741) bg_popup_call_pane_cp08_ParamLimits

0xcd89,	// (0x00032741) bg_popup_call_pane_cp08

0xcda0,	// (0x00032758) field_vitu2_entry_pane_g1

0xcdac,	// (0x00032764) field_vitu2_entry_pane_g2

0x0002,

0xf888,	// (0x00035240) field_vitu2_entry_pane_g

0x7a46,	// (0x0002d3fe) field_vitu2_entry_pane_t1_ParamLimits

0x7a46,	// (0x0002d3fe) field_vitu2_entry_pane_t1

0xcdb8,	// (0x00032770) field_vitu2_entry_pane_t2_ParamLimits

0xcdb8,	// (0x00032770) field_vitu2_entry_pane_t2

0x0001,

0xf88f,	// (0x00035247) field_vitu2_entry_pane_t_ParamLimits

0xf88f,	// (0x00035247) field_vitu2_entry_pane_t

0x1e20,	// (0x000277d8) bg_button_pane_cp010_ParamLimits

0x1e20,	// (0x000277d8) bg_button_pane_cp010

0x1e2e,	// (0x000277e6) cell_vitu2_itu_pane_g1

0x1e54,	// (0x0002780c) cell_vitu2_itu_pane_t1_ParamLimits

0x1e54,	// (0x0002780c) cell_vitu2_itu_pane_t1

0x1eb2,	// (0x0002786a) cell_vitu2_itu_pane_t2_ParamLimits

0x1eb2,	// (0x0002786a) cell_vitu2_itu_pane_t2

0x0002,

0xf899,	// (0x00035251) cell_vitu2_itu_pane_t_ParamLimits

0xf899,	// (0x00035251) cell_vitu2_itu_pane_t

0xb16c,	// (0x00030b24) bg_button_pane_cp011

0x1f9e,	// (0x00027956) cell_vitu2_function_pane_g1

0xb17a,	// (0x00030b32) main_myfav_hc_pane

0x191b,	// (0x000272d3) popup_image3_note_pane_ParamLimits

0x191b,	// (0x000272d3) popup_image3_note_pane

0x1937,	// (0x000272ef) popup_image3_tool_bar_pane_ParamLimits

0x1937,	// (0x000272ef) popup_image3_tool_bar_pane

0x1f40,	// (0x000278f8) cell_vitu2_itu_pane_t3_ParamLimits

0x1f40,	// (0x000278f8) cell_vitu2_itu_pane_t3

0x21d9,	// (0x00027b91) bg_popup_trans_pane

0xcddd,	// (0x00032795) grid_image3_tool_bar_pane

0xcde7,	// (0x0003279f) bg_popup_trans_pane_g1

0x3af5,	// (0x000294ad) bg_popup_trans_pane_g2

0xcdef,	// (0x000327a7) bg_popup_trans_pane_g3

0xcdf7,	// (0x000327af) bg_popup_trans_pane_g4

0xcdff,	// (0x000327b7) bg_popup_trans_pane_g5

0xce07,	// (0x000327bf) bg_popup_trans_pane_g6

0xce0f,	// (0x000327c7) bg_popup_trans_pane_g7

0xce17,	// (0x000327cf) bg_popup_trans_pane_g8

0x3ad5,	// (0x0002948d) bg_popup_trans_pane_g9

0x0008,

0xf8a0,	// (0x00035258) bg_popup_trans_pane_g

0xce1f,	// (0x000327d7) cell_image3_tool_bar_pane_ParamLimits

0xce1f,	// (0x000327d7) cell_image3_tool_bar_pane

0x3423,	// (0x00028ddb) cell_image3_tool_bar_pane_g1

0x21d9,	// (0x00027b91) bg_popup_trans_pane_cp1

0xce33,	// (0x000327eb) popup_image3_note_pane_t1

0xce41,	// (0x000327f9) popup_image3_note_pane_t2

0xce4f,	// (0x00032807) popup_image3_note_pane_t3

0x0002,

0xf8b3,	// (0x0003526b) popup_image3_note_pane_t

0xce5d,	// (0x00032815) popup_image3_note_pane_t3_copy1

0x7a75,	// (0x0002d42d) bg_myfav_hc_instruction_pane_ParamLimits

0x7a75,	// (0x0002d42d) bg_myfav_hc_instruction_pane

0x7a89,	// (0x0002d441) cell_myfav_contact_pane_ParamLimits

0x7a89,	// (0x0002d441) cell_myfav_contact_pane

0x7aa7,	// (0x0002d45f) cell_myfav_contact_pane_cp1_ParamLimits

0x7aa7,	// (0x0002d45f) cell_myfav_contact_pane_cp1

0x7abf,	// (0x0002d477) cell_myfav_contact_pane_cp2_ParamLimits

0x7abf,	// (0x0002d477) cell_myfav_contact_pane_cp2

0x7ad7,	// (0x0002d48f) cell_myfav_contact_pane_cp3_ParamLimits

0x7ad7,	// (0x0002d48f) cell_myfav_contact_pane_cp3

0x7aee,	// (0x0002d4a6) cell_myfav_contact_pane_cp4_ParamLimits

0x7aee,	// (0x0002d4a6) cell_myfav_contact_pane_cp4

0x7b06,	// (0x0002d4be) cell_myfav_contact_pane_cp5_ParamLimits

0x7b06,	// (0x0002d4be) cell_myfav_contact_pane_cp5

0x7b1a,	// (0x0002d4d2) cell_myfav_contact_pane_cp6_ParamLimits

0x7b1a,	// (0x0002d4d2) cell_myfav_contact_pane_cp6

0x7b30,	// (0x0002d4e8) cell_myfav_contact_pane_cp7_ParamLimits

0x7b30,	// (0x0002d4e8) cell_myfav_contact_pane_cp7

0xce6b,	// (0x00032823) listscroll_gen_pane_cp05

0x7b4a,	// (0x0002d502) main_myfav_hc_pane_g1_ParamLimits

0x7b4a,	// (0x0002d502) main_myfav_hc_pane_g1

0x7b64,	// (0x0002d51c) main_myfav_hc_pane_g2_ParamLimits

0x7b64,	// (0x0002d51c) main_myfav_hc_pane_g2

0x0002,

0xf8ba,	// (0x00035272) main_myfav_hc_pane_g_ParamLimits

0xf8ba,	// (0x00035272) main_myfav_hc_pane_g

0x7b96,	// (0x0002d54e) main_myfav_hc_pane_t1_ParamLimits

0x7b96,	// (0x0002d54e) main_myfav_hc_pane_t1

0xce74,	// (0x0003282c) main_myfav_hc_pane_t2_ParamLimits

0xce74,	// (0x0003282c) main_myfav_hc_pane_t2

0xce86,	// (0x0003283e) main_myfav_hc_pane_t3_ParamLimits

0xce86,	// (0x0003283e) main_myfav_hc_pane_t3

0x7bad,	// (0x0002d565) main_myfav_hc_pane_t4_ParamLimits

0x7bad,	// (0x0002d565) main_myfav_hc_pane_t4

0x0004,

0xf8c1,	// (0x00035279) main_myfav_hc_pane_t_ParamLimits

0xf8c1,	// (0x00035279) main_myfav_hc_pane_t

0x3423,	// (0x00028ddb) bg_myfav_hc_instruction_pane_g1

0xce98,	// (0x00032850) cell_myfav_contact_pane_g1_ParamLimits

0xce98,	// (0x00032850) cell_myfav_contact_pane_g1

0xce98,	// (0x00032850) cell_myfav_contact_pane_g2_ParamLimits

0xce98,	// (0x00032850) cell_myfav_contact_pane_g2

0xcea4,	// (0x0003285c) cell_myfav_contact_pane_g3_ParamLimits

0xcea4,	// (0x0003285c) cell_myfav_contact_pane_g3

0x2985,	// (0x0002833d) cell_myfav_contact_pane_g4_ParamLimits

0x2985,	// (0x0002833d) cell_myfav_contact_pane_g4

0xceb1,	// (0x00032869) cell_myfav_contact_pane_g5_ParamLimits

0xceb1,	// (0x00032869) cell_myfav_contact_pane_g5

0x0004,

0xf8cc,	// (0x00035284) cell_myfav_contact_pane_g_ParamLimits

0xf8cc,	// (0x00035284) cell_myfav_contact_pane_g

0x7b7e,	// (0x0002d536) main_myfav_hc_pane_g3_ParamLimits

0x7b7e,	// (0x0002d536) main_myfav_hc_pane_g3

0x0e6e,	// (0x00026826) popup_adpt_find_window

0x7bd5,	// (0x0002d58d) afind_page_pane_ParamLimits

0x7bd5,	// (0x0002d58d) afind_page_pane

0x7bea,	// (0x0002d5a2) aid_size_cell_afind_ParamLimits

0x7bea,	// (0x0002d5a2) aid_size_cell_afind

0x7c08,	// (0x0002d5c0) bg_popup_sub_pane_cp09_ParamLimits

0x7c08,	// (0x0002d5c0) bg_popup_sub_pane_cp09

0x7c15,	// (0x0002d5cd) find_pane_cp01_ParamLimits

0x7c15,	// (0x0002d5cd) find_pane_cp01

0xcebd,	// (0x00032875) grid_afind_control_pane_ParamLimits

0xcebd,	// (0x00032875) grid_afind_control_pane

0x7c22,	// (0x0002d5da) grid_afind_pane_ParamLimits

0x7c22,	// (0x0002d5da) grid_afind_pane

0x7c44,	// (0x0002d5fc) cell_afind_pane_ParamLimits

0x7c44,	// (0x0002d5fc) cell_afind_pane

0x3423,	// (0x00028ddb) afind_page_pane_g1

0x7cab,	// (0x0002d663) afind_page_pane_g2

0x7cb4,	// (0x0002d66c) afind_page_pane_g3

0x0002,

0xf8d7,	// (0x0003528f) afind_page_pane_g

0x7cbd,	// (0x0002d675) afind_page_pane_t1

0xced1,	// (0x00032889) cell_afind_grid_control_pane_ParamLimits

0xced1,	// (0x00032889) cell_afind_grid_control_pane

0xcbc8,	// (0x00032580) bg_button_pane_cp69_ParamLimits

0xcbc8,	// (0x00032580) bg_button_pane_cp69

0x7cdd,	// (0x0002d695) cell_afind_pane_g1_ParamLimits

0x7cdd,	// (0x0002d695) cell_afind_pane_g1

0x7cea,	// (0x0002d6a2) cell_afind_pane_t1_ParamLimits

0x7cea,	// (0x0002d6a2) cell_afind_pane_t1

0x348f,	// (0x00028e47) bg_button_pane_cp72

0xcee0,	// (0x00032898) cell_afind_grid_control_pane_g1

0x5cec,	// (0x0002b6a4) aid_image_placing_area_ParamLimits

0x5cec,	// (0x0002b6a4) aid_image_placing_area

0x2977,	// (0x0002832f) field_vitu_entry_pane_g1_ParamLimits

0x2977,	// (0x0002832f) field_vitu_entry_pane_g1

0x2977,	// (0x0002832f) field_vitu_entry_pane_g2_ParamLimits

0x2977,	// (0x0002832f) field_vitu_entry_pane_g2

0x0001,

0xf1e7,	// (0x00034b9f) field_vitu_entry_pane_g_ParamLimits

0xf1e7,	// (0x00034b9f) field_vitu_entry_pane_g

0xc6e1,	// (0x00032099) cell_vitu_itu_pane_g1_ParamLimits

0xc6c4,	// (0x0003207c) cell_vitu_itu_pane_t3_ParamLimits

0xc6c4,	// (0x0003207c) cell_vitu_itu_pane_t3

0xcb71,	// (0x00032529) mp4_progress_pane_t1_ParamLimits

0xcb8a,	// (0x00032542) mp4_progress_pane_t2_ParamLimits

0xf81d,	// (0x000351d5) mp4_progress_pane_t_ParamLimits

0xcba3,	// (0x0003255b) mup_progress_pane_cp04_ParamLimits

0x7bc1,	// (0x0002d579) main_myfav_hc_pane_t5_ParamLimits

0x7bc1,	// (0x0002d579) main_myfav_hc_pane_t5

0xb123,	// (0x00030adb) aid_zoom_text_primary

0x0e6e,	// (0x00026826) popup_adpt_find_window_ParamLimits

0xb16c,	// (0x00030b24) main_cam_set_pane

0x1a9e,	// (0x00027456) cam4_zoom_pane_ParamLimits

0x1a9e,	// (0x00027456) cam4_zoom_pane

0x7cfc,	// (0x0002d6b4) main_cam_set_pane_g1_ParamLimits

0x7cfc,	// (0x0002d6b4) main_cam_set_pane_g1

0x7d0a,	// (0x0002d6c2) main_cam_set_pane_g2_ParamLimits

0x7d0a,	// (0x0002d6c2) main_cam_set_pane_g2

0x0001,

0xf8de,	// (0x00035296) main_cam_set_pane_g_ParamLimits

0xf8de,	// (0x00035296) main_cam_set_pane_g

0x7d2b,	// (0x0002d6e3) main_cam_set_pane_t1_ParamLimits

0x7d2b,	// (0x0002d6e3) main_cam_set_pane_t1

0x7d46,	// (0x0002d6fe) main_cset_listscroll_pane_ParamLimits

0x7d46,	// (0x0002d6fe) main_cset_listscroll_pane

0x7d6c,	// (0x0002d724) main_cset_slider_pane_ParamLimits

0x7d6c,	// (0x0002d724) main_cset_slider_pane

0xcef1,	// (0x000328a9) main_cset_list_pane_ParamLimits

0xcef1,	// (0x000328a9) main_cset_list_pane

0xcf01,	// (0x000328b9) scroll_pane_cp028

0x7d92,	// (0x0002d74a) aid_area_touch_slider

0x7dae,	// (0x0002d766) cset_slider_pane

0x7dd1,	// (0x0002d789) main_cset_slider_pane_g1

0x7de6,	// (0x0002d79e) main_cset_slider_pane_g2

0x0011,

0xf8e3,	// (0x0003529b) main_cset_slider_pane_g

0xcf3a,	// (0x000328f2) main_cset_slider_pane_t1

0x7ea2,	// (0x0002d85a) main_cset_slider_pane_t2

0x7ebc,	// (0x0002d874) main_cset_slider_pane_t3

0x7ed6,	// (0x0002d88e) main_cset_slider_pane_t4

0x7ef0,	// (0x0002d8a8) main_cset_slider_pane_t5

0x7f0a,	// (0x0002d8c2) main_cset_slider_pane_t6

0x7f1f,	// (0x0002d8d7) main_cset_slider_pane_t7

0x000e,

0xf908,	// (0x000352c0) main_cset_slider_pane_t

0x8023,	// (0x0002d9db) cset_list_set_pane_ParamLimits

0x8023,	// (0x0002d9db) cset_list_set_pane

0xcfd4,	// (0x0003298c) aid_position_infowindow_above

0xcfdc,	// (0x00032994) aid_position_infowindow_below

0xcfe4,	// (0x0003299c) cset_list_set_pane_g1_ParamLimits

0xcfe4,	// (0x0003299c) cset_list_set_pane_g1

0xcff0,	// (0x000329a8) cset_list_set_pane_g3_ParamLimits

0xcff0,	// (0x000329a8) cset_list_set_pane_g3

0x0001,

0xf927,	// (0x000352df) cset_list_set_pane_g_ParamLimits

0xf927,	// (0x000352df) cset_list_set_pane_g

0xcfff,	// (0x000329b7) cset_list_set_pane_t1_ParamLimits

0xcfff,	// (0x000329b7) cset_list_set_pane_t1

0x2910,	// (0x000282c8) list_highlight_pane_cp021_ParamLimits

0x2910,	// (0x000282c8) list_highlight_pane_cp021

0x54ca,	// (0x0002ae82) cset_slider_pane_g1

0x54dc,	// (0x0002ae94) cset_slider_pane_g2

0x54d3,	// (0x0002ae8b) cset_slider_pane_g3

0x0002,

0xf92c,	// (0x000352e4) cset_slider_pane_g

0xd014,	// (0x000329cc) aid_area_touch_cam4_zoom

0xd01c,	// (0x000329d4) cam4_zoom_cont_pane

0xd024,	// (0x000329dc) cam4_zoom_pane_g1

0xd02c,	// (0x000329e4) cam4_zoom_pane_g2

0x1fb2,	// (0x0002796a) cam4_zoom_pane_g3

0x0002,

0xf933,	// (0x000352eb) cam4_zoom_pane_g

0xd034,	// (0x000329ec) cam4_zoom_cont_pane_g1

0xd03d,	// (0x000329f5) cam4_zoom_cont_pane_g2

0xd046,	// (0x000329fe) cam4_zoom_cont_pane_g3

0x0002,

0xf93a,	// (0x000352f2) cam4_zoom_cont_pane_g

0x1971,	// (0x00027329) call4_image_pane_ParamLimits

0x1971,	// (0x00027329) call4_image_pane

0x797a,	// (0x0002d332) call4_windows_conf_pane_ParamLimits

0x79bf,	// (0x0002d377) popup_call4_audio_in_window_ParamLimits

0x79bf,	// (0x0002d377) popup_call4_audio_in_window

0x21d9,	// (0x00027b91) bg_popup_call2_act_pane_cp02

0xcc38,	// (0x000325f0) call4_list_conf_pane

0x3423,	// (0x00028ddb) call4_image_pane_g1

0x3423,	// (0x00028ddb) call4_image_pane_g2

0x0001,

0xf3be,	// (0x00034d76) call4_image_pane_g

0xd04f,	// (0x00032a07) list_single_graphic_popup_conf4_pane_ParamLimits

0xd04f,	// (0x00032a07) list_single_graphic_popup_conf4_pane

0x21d9,	// (0x00027b91) list_highlight_pane_cp022

0xd062,	// (0x00032a1a) list_single_graphic_popup_conf4_pane_g1

0x4c40,	// (0x0002a5f8) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf941,	// (0x000352f9) list_single_graphic_popup_conf4_pane_g

0xd06a,	// (0x00032a22) list_single_graphic_popup_conf4_pane_t1

0x365a,	// (0x00029012) popup_vtel_slider_window_ParamLimits

0x365a,	// (0x00029012) popup_vtel_slider_window

0xcbb6,	// (0x0003256e) dialer2_ne_pane_t2_ParamLimits

0xcbb6,	// (0x0003256e) dialer2_ne_pane_t2

0x0001,

0xf822,	// (0x000351da) dialer2_ne_pane_t_ParamLimits

0xf822,	// (0x000351da) dialer2_ne_pane_t

0xbf22,	// (0x000318da) bg_popup_sub_pane_cp010_ParamLimits

0xbf22,	// (0x000318da) bg_popup_sub_pane_cp010

0x8035,	// (0x0002d9ed) popup_vtel_slider_window_g1_ParamLimits

0x8035,	// (0x0002d9ed) popup_vtel_slider_window_g1

0x8048,	// (0x0002da00) popup_vtel_slider_window_g2_ParamLimits

0x8048,	// (0x0002da00) popup_vtel_slider_window_g2

0x0003,

0xf946,	// (0x000352fe) popup_vtel_slider_window_g_ParamLimits

0xf946,	// (0x000352fe) popup_vtel_slider_window_g

0x809e,	// (0x0002da56) vtel_slider_pane_ParamLimits

0x809e,	// (0x0002da56) vtel_slider_pane

0x80c0,	// (0x0002da78) vtel_slider_pane_g1_ParamLimits

0x80c0,	// (0x0002da78) vtel_slider_pane_g1

0x80d4,	// (0x0002da8c) vtel_slider_pane_g2_ParamLimits

0x80d4,	// (0x0002da8c) vtel_slider_pane_g2

0x80ec,	// (0x0002daa4) vtel_slider_pane_g3_ParamLimits

0x80ec,	// (0x0002daa4) vtel_slider_pane_g3

0x80c0,	// (0x0002da78) vtel_slider_pane_g4_ParamLimits

0x80c0,	// (0x0002da78) vtel_slider_pane_g4

0x8102,	// (0x0002daba) vtel_slider_pane_g5_ParamLimits

0x8102,	// (0x0002daba) vtel_slider_pane_g5

0x0004,

0xf94f,	// (0x00035307) vtel_slider_pane_g_ParamLimits

0xf94f,	// (0x00035307) vtel_slider_pane_g

0xb16c,	// (0x00030b24) main_gallery2_pane

0x1c6a,	// (0x00027622) aid_size_row_itut2_dropdow_list_ParamLimits

0x1c6a,	// (0x00027622) aid_size_row_itut2_dropdow_list

0x1cf6,	// (0x000276ae) grid_vitu2_function_top_pane_ParamLimits

0x1cf6,	// (0x000276ae) grid_vitu2_function_top_pane

0x1d60,	// (0x00027718) popup_vitu2_dropdown_list_window_ParamLimits

0x1d60,	// (0x00027718) popup_vitu2_dropdown_list_window

0x1d87,	// (0x0002773f) popup_vitu2_match_list_window

0x1fba,	// (0x00027972) cell_vitu2_function_top_pane_ParamLimits

0x1fba,	// (0x00027972) cell_vitu2_function_top_pane

0x1fd2,	// (0x0002798a) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1fd2,	// (0x0002798a) cell_vitu2_function_top_pane_cp01

0x1fee,	// (0x000279a6) cell_vitu2_function_top_wide_pane_ParamLimits

0x1fee,	// (0x000279a6) cell_vitu2_function_top_wide_pane

0xb16c,	// (0x00030b24) bg_button_pane_cp012

0x200c,	// (0x000279c4) cell_vitu2_function_top_pane_g1

0xd080,	// (0x00032a38) bg_button_pane_cp013_ParamLimits

0xd080,	// (0x00032a38) bg_button_pane_cp013

0x8118,	// (0x0002dad0) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8118,	// (0x0002dad0) cell_vitu2_function_top_wide_pane_g1

0xb16c,	// (0x00030b24) bg_popup_sub_pane_cp20

0x2020,	// (0x000279d8) list_vitu2_match_list_pane

0xcde7,	// (0x0003279f) bg_popup_sub_pane_cp20_g1

0xcdef,	// (0x000327a7) bg_popup_sub_pane_cp20_g2

0x3af5,	// (0x000294ad) bg_popup_sub_pane_cp20_g3

0xcdf7,	// (0x000327af) bg_popup_sub_pane_cp20_g4

0x3ad5,	// (0x0002948d) bg_popup_sub_pane_cp20_g5

0xd09c,	// (0x00032a54) bg_popup_sub_pane_cp20_g6

0xce07,	// (0x000327bf) bg_popup_sub_pane_cp20_g7

0xce0f,	// (0x000327c7) bg_popup_sub_pane_cp20_g8

0xce17,	// (0x000327cf) bg_popup_sub_pane_cp20_g9

0x0008,

0xf95a,	// (0x00035312) bg_popup_sub_pane_cp20_g

0xd0a4,	// (0x00032a5c) list_vitu2_match_list_item_pane_ParamLimits

0xd0a4,	// (0x00032a5c) list_vitu2_match_list_item_pane

0xd0b6,	// (0x00032a6e) list_vitu2_match_list_item_pane_t1

0xb17a,	// (0x00030b32) bg_popup_sub_pane_cp21

0x3236,	// (0x00028bee) grid_vitu2_dropdown_list_pane

0x2038,	// (0x000279f0) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x2038,	// (0x000279f0) cell_vitu2_dropdown_list_char_pane

0x2058,	// (0x00027a10) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x2058,	// (0x00027a10) cell_vitu2_dropdown_list_ctrl_pane

0xd0c4,	// (0x00032a7c) cell_vitu2_dropdown_list_char_pane_g1

0xd0cd,	// (0x00032a85) cell_vitu2_dropdown_list_char_pane_g2

0xd0d6,	// (0x00032a8e) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf96d,	// (0x00035325) cell_vitu2_dropdown_list_char_pane_g

0x2080,	// (0x00027a38) cell_vitu2_dropdown_list_char_pane_t1

0x8130,	// (0x0002dae8) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8130,	// (0x0002dae8) cell_vitu2_dropdown_list_ctrl_pane_g1

0x813d,	// (0x0002daf5) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x813d,	// (0x0002daf5) cell_vitu2_dropdown_list_ctrl_pane_g2

0x814a,	// (0x0002db02) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x814a,	// (0x0002db02) cell_vitu2_dropdown_list_ctrl_pane_g3

0x208e,	// (0x00027a46) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x208e,	// (0x00027a46) cell_vitu2_dropdown_list_ctrl_pane_g4

0xccaa,	// (0x00032662) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xccaa,	// (0x00032662) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf974,	// (0x0003532c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf974,	// (0x0003532c) cell_vitu2_dropdown_list_ctrl_pane_g

0x8157,	// (0x0002db0f) aid_size_cell_gallery2_ParamLimits

0x8157,	// (0x0002db0f) aid_size_cell_gallery2

0x8175,	// (0x0002db2d) grid_gallery2_pane_ParamLimits

0x8175,	// (0x0002db2d) grid_gallery2_pane

0x818f,	// (0x0002db47) scroll_pane_cp029_ParamLimits

0x818f,	// (0x0002db47) scroll_pane_cp029

0x81a0,	// (0x0002db58) cell_gallery2_pane_ParamLimits

0x81a0,	// (0x0002db58) cell_gallery2_pane

0xd0df,	// (0x00032a97) cell_gallery2_pane_g2

0x81ff,	// (0x0002dbb7) cell_gallery2_pane_g3

0xd0e7,	// (0x00032a9f) cell_gallery2_pane_g4

0xd0ef,	// (0x00032aa7) cell_gallery2_pane_g5

0x3236,	// (0x00028bee) grid_highlight_pane_cp10

0x1d87,	// (0x0002773f) popup_vitu2_match_list_window_ParamLimits

0x1d9c,	// (0x00027754) popup_vitu2_query_window_ParamLimits

0x1d9c,	// (0x00027754) popup_vitu2_query_window

0xb17a,	// (0x00030b32) bg_vitu2_candi_button_pane

0xd0c4,	// (0x00032a7c) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd0cd,	// (0x00032a85) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd0d6,	// (0x00032a8e) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8207,	// (0x0002dbbf) bg_button_pane_cp015

0x8218,	// (0x0002dbd0) bg_button_pane_cp016

0x8224,	// (0x0002dbdc) bg_button_pane_cp017

0x5291,	// (0x0002ac49) bg_popup_sub_pane_cp22

0xd0f7,	// (0x00032aaf) popup_vitu2_query_window_g1

0x8262,	// (0x0002dc1a) popup_vitu2_query_window_g2

0x0002,

0xf97f,	// (0x00035337) popup_vitu2_query_window_g

0x8284,	// (0x0002dc3c) popup_vitu2_query_window_t1_ParamLimits

0x8284,	// (0x0002dc3c) popup_vitu2_query_window_t1

0x82b7,	// (0x0002dc6f) popup_vitu2_query_window_t2_ParamLimits

0x82b7,	// (0x0002dc6f) popup_vitu2_query_window_t2

0x82c9,	// (0x0002dc81) popup_vitu2_query_window_t3_ParamLimits

0x82c9,	// (0x0002dc81) popup_vitu2_query_window_t3

0x82f1,	// (0x0002dca9) popup_vitu2_query_window_t4_ParamLimits

0x82f1,	// (0x0002dca9) popup_vitu2_query_window_t4

0x8305,	// (0x0002dcbd) popup_vitu2_query_window_t5_ParamLimits

0x8305,	// (0x0002dcbd) popup_vitu2_query_window_t5

0x0006,

0xf986,	// (0x0003533e) popup_vitu2_query_window_t_ParamLimits

0xf986,	// (0x0003533e) popup_vitu2_query_window_t

0xcee9,	// (0x000328a1) main_cset_text_pane

0x7d92,	// (0x0002d74a) aid_area_touch_slider_ParamLimits

0x7dae,	// (0x0002d766) cset_slider_pane_ParamLimits

0x7dd1,	// (0x0002d789) main_cset_slider_pane_g1_ParamLimits

0x7de6,	// (0x0002d79e) main_cset_slider_pane_g2_ParamLimits

0xcf0a,	// (0x000328c2) main_cset_slider_pane_g3_ParamLimits

0xcf0a,	// (0x000328c2) main_cset_slider_pane_g3

0x7dfb,	// (0x0002d7b3) main_cset_slider_pane_g4_ParamLimits

0x7dfb,	// (0x0002d7b3) main_cset_slider_pane_g4

0x7e0a,	// (0x0002d7c2) main_cset_slider_pane_g5_ParamLimits

0x7e0a,	// (0x0002d7c2) main_cset_slider_pane_g5

0x7e16,	// (0x0002d7ce) main_cset_slider_pane_g6_ParamLimits

0x7e16,	// (0x0002d7ce) main_cset_slider_pane_g6

0xf8e3,	// (0x0003529b) main_cset_slider_pane_g_ParamLimits

0xcf3a,	// (0x000328f2) main_cset_slider_pane_t1_ParamLimits

0x7ea2,	// (0x0002d85a) main_cset_slider_pane_t2_ParamLimits

0x7ebc,	// (0x0002d874) main_cset_slider_pane_t3_ParamLimits

0x7ed6,	// (0x0002d88e) main_cset_slider_pane_t4_ParamLimits

0x7ef0,	// (0x0002d8a8) main_cset_slider_pane_t5_ParamLimits

0x7f0a,	// (0x0002d8c2) main_cset_slider_pane_t6_ParamLimits

0x7f1f,	// (0x0002d8d7) main_cset_slider_pane_t7_ParamLimits

0x7f49,	// (0x0002d901) main_cset_slider_pane_t8_ParamLimits

0x7f49,	// (0x0002d901) main_cset_slider_pane_t8

0x7f71,	// (0x0002d929) main_cset_slider_pane_t9_ParamLimits

0x7f71,	// (0x0002d929) main_cset_slider_pane_t9

0x7f99,	// (0x0002d951) main_cset_slider_pane_t10_ParamLimits

0x7f99,	// (0x0002d951) main_cset_slider_pane_t10

0x7fc1,	// (0x0002d979) main_cset_slider_pane_t11_ParamLimits

0x7fc1,	// (0x0002d979) main_cset_slider_pane_t11

0x7fe9,	// (0x0002d9a1) main_cset_slider_pane_t12_ParamLimits

0x7fe9,	// (0x0002d9a1) main_cset_slider_pane_t12

0x8006,	// (0x0002d9be) main_cset_slider_pane_t13_ParamLimits

0x8006,	// (0x0002d9be) main_cset_slider_pane_t13

0xf908,	// (0x000352c0) main_cset_slider_pane_t_ParamLimits

0x21d9,	// (0x00027b91) bg_popup_sub_pane_cp011

0xd103,	// (0x00032abb) main_cset_text_pane_g1

0xd10b,	// (0x00032ac3) main_cset_text_pane_t1

0xd119,	// (0x00032ad1) main_cset_text_pane_t2

0xd127,	// (0x00032adf) main_cset_text_pane_t3

0xd135,	// (0x00032aed) main_cset_text_pane_t4

0xd143,	// (0x00032afb) main_cset_text_pane_t5

0xd151,	// (0x00032b09) main_cset_text_pane_t6

0xd15f,	// (0x00032b17) main_cset_text_pane_t7

0x0006,

0xf995,	// (0x0003534d) main_cset_text_pane_t

0xb17a,	// (0x00030b32) main_cam4_burst_pane

0xb17a,	// (0x00030b32) main_cam5_pane

0x7ccb,	// (0x0002d683) bg_button_pane_cp019

0x7cd4,	// (0x0002d68c) bg_button_pane_cp020

0xcf16,	// (0x000328ce) main_cset_slider_pane_g7_ParamLimits

0xcf16,	// (0x000328ce) main_cset_slider_pane_g7

0xcf22,	// (0x000328da) main_cset_slider_pane_g8_ParamLimits

0xcf22,	// (0x000328da) main_cset_slider_pane_g8

0x7e2a,	// (0x0002d7e2) main_cset_slider_pane_g9_ParamLimits

0x7e2a,	// (0x0002d7e2) main_cset_slider_pane_g9

0x7e36,	// (0x0002d7ee) main_cset_slider_pane_g10_ParamLimits

0x7e36,	// (0x0002d7ee) main_cset_slider_pane_g10

0x7e42,	// (0x0002d7fa) main_cset_slider_pane_g11_ParamLimits

0x7e42,	// (0x0002d7fa) main_cset_slider_pane_g11

0x7e4e,	// (0x0002d806) main_cset_slider_pane_g12_ParamLimits

0x7e4e,	// (0x0002d806) main_cset_slider_pane_g12

0x7e5a,	// (0x0002d812) main_cset_slider_pane_g13_ParamLimits

0x7e5a,	// (0x0002d812) main_cset_slider_pane_g13

0x7e66,	// (0x0002d81e) main_cset_slider_pane_g14_ParamLimits

0x7e66,	// (0x0002d81e) main_cset_slider_pane_g14

0x7e72,	// (0x0002d82a) main_cset_slider_pane_g15_ParamLimits

0x7e72,	// (0x0002d82a) main_cset_slider_pane_g15

0xcf62,	// (0x0003291a) main_cset_slider_pane_t14_ParamLimits

0xcf62,	// (0x0003291a) main_cset_slider_pane_t14

0xcf9b,	// (0x00032953) main_cset_slider_pane_t15_ParamLimits

0xcf9b,	// (0x00032953) main_cset_slider_pane_t15

0x836f,	// (0x0002dd27) aid_cam4_burst_size_cell_ParamLimits

0x836f,	// (0x0002dd27) aid_cam4_burst_size_cell

0x838f,	// (0x0002dd47) grid_cam4_burst_pane_ParamLimits

0x838f,	// (0x0002dd47) grid_cam4_burst_pane

0x83c7,	// (0x0002dd7f) linegrid_cam4_burst_pane_ParamLimits

0x83c7,	// (0x0002dd7f) linegrid_cam4_burst_pane

0xd16d,	// (0x00032b25) scroll_pane_cp30_ParamLimits

0xd16d,	// (0x00032b25) scroll_pane_cp30

0x83eb,	// (0x0002dda3) cell_cam4_burst_pane_ParamLimits

0x83eb,	// (0x0002dda3) cell_cam4_burst_pane

0xd179,	// (0x00032b31) linegrid_cam4_burst_pane_g1_ParamLimits

0xd179,	// (0x00032b31) linegrid_cam4_burst_pane_g1

0x8438,	// (0x0002ddf0) linegrid_cam4_burst_pane_g2_ParamLimits

0x8438,	// (0x0002ddf0) linegrid_cam4_burst_pane_g2

0xd186,	// (0x00032b3e) linegrid_cam4_burst_pane_g3_ParamLimits

0xd186,	// (0x00032b3e) linegrid_cam4_burst_pane_g3

0x0002,

0xf9a4,	// (0x0003535c) linegrid_cam4_burst_pane_g_ParamLimits

0xf9a4,	// (0x0003535c) linegrid_cam4_burst_pane_g

0x8449,	// (0x0002de01) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8449,	// (0x0002de01) linegrid_cam4_burst_pane_g3_copy1

0xd193,	// (0x00032b4b) linegrid_cam4_burst_pane_g4_ParamLimits

0xd193,	// (0x00032b4b) linegrid_cam4_burst_pane_g4

0x8463,	// (0x0002de1b) linegrid_cam4_burst_pane_g5_ParamLimits

0x8463,	// (0x0002de1b) linegrid_cam4_burst_pane_g5

0x8474,	// (0x0002de2c) linegrid_cam4_burst_pane_g6_ParamLimits

0x8474,	// (0x0002de2c) linegrid_cam4_burst_pane_g6

0xd1a0,	// (0x00032b58) linegrid_cam4_burst_pane_g7_ParamLimits

0xd1a0,	// (0x00032b58) linegrid_cam4_burst_pane_g7

0x848b,	// (0x0002de43) cell_cam4_burst_pane_g1

0xd1b9,	// (0x00032b71) main_cam5_pane_t1_ParamLimits

0xd1b9,	// (0x00032b71) main_cam5_pane_t1

0xd1cb,	// (0x00032b83) main_cam5_pane_t2_ParamLimits

0xd1cb,	// (0x00032b83) main_cam5_pane_t2

0xd1dd,	// (0x00032b95) main_cam5_pane_t3_ParamLimits

0xd1dd,	// (0x00032b95) main_cam5_pane_t3

0xd1ef,	// (0x00032ba7) main_cam5_pane_t4_ParamLimits

0xd1ef,	// (0x00032ba7) main_cam5_pane_t4

0xd207,	// (0x00032bbf) main_cam5_pane_t5_ParamLimits

0xd207,	// (0x00032bbf) main_cam5_pane_t5

0xd21b,	// (0x00032bd3) main_cam5_pane_t6_ParamLimits

0xd21b,	// (0x00032bd3) main_cam5_pane_t6

0xd22f,	// (0x00032be7) main_cam5_pane_t7_ParamLimits

0xd22f,	// (0x00032be7) main_cam5_pane_t7

0xd241,	// (0x00032bf9) main_cam5_pane_t8_ParamLimits

0xd241,	// (0x00032bf9) main_cam5_pane_t8

0xd25d,	// (0x00032c15) main_cam5_pane_t9_ParamLimits

0xd25d,	// (0x00032c15) main_cam5_pane_t9

0xd26f,	// (0x00032c27) main_cam5_pane_t10_ParamLimits

0xd26f,	// (0x00032c27) main_cam5_pane_t10

0xd281,	// (0x00032c39) main_cam5_pane_t11_ParamLimits

0xd281,	// (0x00032c39) main_cam5_pane_t11

0xd293,	// (0x00032c4b) main_cam5_pane_t12_ParamLimits

0xd293,	// (0x00032c4b) main_cam5_pane_t12

0xd2a8,	// (0x00032c60) main_cam5_pane_t13_ParamLimits

0xd2a8,	// (0x00032c60) main_cam5_pane_t13

0x000c,

0xf9b0,	// (0x00035368) main_cam5_pane_t_ParamLimits

0xf9b0,	// (0x00035368) main_cam5_pane_t

0x0ef0,	// (0x000268a8) popup_scut_keymap_window_ParamLimits

0x0ef0,	// (0x000268a8) popup_scut_keymap_window

0x849e,	// (0x0002de56) aid_size_cell_brow_shortcut

0x3236,	// (0x00028bee) bg_popup_window_pane_cp010

0x84aa,	// (0x0002de62) grid_scut_pane

0x84b6,	// (0x0002de6e) cell_scut_pane_ParamLimits

0x84b6,	// (0x0002de6e) cell_scut_pane

0x84cd,	// (0x0002de85) cell_scut_pane_g1

0xd2c5,	// (0x00032c7d) cell_scut_pane_t1

0xd2d4,	// (0x00032c8c) cell_scut_pane_t2

0x84d6,	// (0x0002de8e) cell_scut_pane_t3

0x0002,

0xf9cb,	// (0x00035383) cell_scut_pane_t

0x6efb,	// (0x0002c8b3) main_mup3_pane_g8_ParamLimits

0x6efb,	// (0x0002c8b3) main_mup3_pane_g8

0x1c82,	// (0x0002763a) area_vitu2_query_pane_ParamLimits

0x1c82,	// (0x0002763a) area_vitu2_query_pane

0x8230,	// (0x0002dbe8) input_focus_pane_cp08

0xd2e3,	// (0x00032c9b) area_vitu2_query_pane_g1

0x84e4,	// (0x0002de9c) area_vitu2_query_pane_g2

0x0001,

0xf9d2,	// (0x0003538a) area_vitu2_query_pane_g

0x84f3,	// (0x0002deab) area_vitu2_query_pane_t1_ParamLimits

0x84f3,	// (0x0002deab) area_vitu2_query_pane_t1

0x8507,	// (0x0002debf) area_vitu2_query_pane_t2_ParamLimits

0x8507,	// (0x0002debf) area_vitu2_query_pane_t2

0x851b,	// (0x0002ded3) area_vitu2_query_pane_t3_ParamLimits

0x851b,	// (0x0002ded3) area_vitu2_query_pane_t3

0xd2ef,	// (0x00032ca7) area_vitu2_query_pane_t4_ParamLimits

0xd2ef,	// (0x00032ca7) area_vitu2_query_pane_t4

0xd317,	// (0x00032ccf) area_vitu2_query_pane_t5_ParamLimits

0xd317,	// (0x00032ccf) area_vitu2_query_pane_t5

0xd33f,	// (0x00032cf7) area_vitu2_query_pane_t6_ParamLimits

0xd33f,	// (0x00032cf7) area_vitu2_query_pane_t6

0x0006,

0xf9d7,	// (0x0003538f) area_vitu2_query_pane_t_ParamLimits

0xf9d7,	// (0x0003538f) area_vitu2_query_pane_t

0x8543,	// (0x0002defb) bg_button_pane_cp018

0x854f,	// (0x0002df07) bg_button_pane_cp021

0x855b,	// (0x0002df13) bg_button_pane_cp022

0x857a,	// (0x0002df32) input_focus_pane_cp09

0x4f9b,	// (0x0002a953) aid_size_touch_mv_arrow_left

0x4fc4,	// (0x0002a97c) aid_size_touch_mv_arrow_right

0x7e8a,	// (0x0002d842) main_cset_slider_pane_g16_ParamLimits

0x7e8a,	// (0x0002d842) main_cset_slider_pane_g16

0x7e96,	// (0x0002d84e) main_cset_slider_pane_g17_ParamLimits

0x7e96,	// (0x0002d84e) main_cset_slider_pane_g17

0x848b,	// (0x0002de43) cell_cam4_burst_pane_g1_ParamLimits

0x21d9,	// (0x00027b91) compa_mode_pane

0x8058,	// (0x0002da10) popup_vtel_slider_window_g3_ParamLimits

0x8058,	// (0x0002da10) popup_vtel_slider_window_g3

0x806f,	// (0x0002da27) popup_vtel_slider_window_g4_ParamLimits

0x806f,	// (0x0002da27) popup_vtel_slider_window_g4

0x8086,	// (0x0002da3e) popup_vtel_slider_window_t1_ParamLimits

0x8086,	// (0x0002da3e) popup_vtel_slider_window_t1

0xb17a,	// (0x00030b32) main_cl_pane

0xbc22,	// (0x000315da) popup_imed_adjust2_window_ParamLimits

0x5291,	// (0x0002ac49) bg_tb_trans_pane_cp05_ParamLimits

0xc5f9,	// (0x00031fb1) popup_imed_adjust2_window_g1_ParamLimits

0xc608,	// (0x00031fc0) popup_imed_adjust2_window_g2_ParamLimits

0xc608,	// (0x00031fc0) popup_imed_adjust2_window_g2

0xc614,	// (0x00031fcc) popup_imed_adjust2_window_g3_ParamLimits

0xc614,	// (0x00031fcc) popup_imed_adjust2_window_g3

0x0002,

0xf74d,	// (0x00035105) popup_imed_adjust2_window_g_ParamLimits

0xf74d,	// (0x00035105) popup_imed_adjust2_window_g

0xc620,	// (0x00031fd8) popup_imed_adjust2_window_t1_ParamLimits

0xc638,	// (0x00031ff0) slider_imed_adjust_pane_ParamLimits

0xc64c,	// (0x00032004) slider_imed_adjust_pane_g1_ParamLimits

0xc65c,	// (0x00032014) slider_imed_adjust_pane_g2_ParamLimits

0xc66c,	// (0x00032024) slider_imed_adjust_pane_g3_ParamLimits

0xc67d,	// (0x00032035) slider_imed_adjust_pane_g4_ParamLimits

0xf754,	// (0x0003510c) slider_imed_adjust_pane_g_ParamLimits

0x1a3f,	// (0x000273f7) aid_touch_area_cam4_ParamLimits

0x1a3f,	// (0x000273f7) aid_touch_area_cam4

0xcc7c,	// (0x00032634) battery_pane_cp01

0x1b0e,	// (0x000274c6) main_camera4_pane_g6_ParamLimits

0x1b0e,	// (0x000274c6) main_camera4_pane_g6

0x1b38,	// (0x000274f0) main_camera4_pane_t2_ParamLimits

0x1b38,	// (0x000274f0) main_camera4_pane_t2

0x0001,

0xf856,	// (0x0003520e) main_camera4_pane_t_ParamLimits

0xf856,	// (0x0003520e) main_camera4_pane_t

0x1b59,	// (0x00027511) aid_touch_area_vid4_ParamLimits

0x1b59,	// (0x00027511) aid_touch_area_vid4

0x1bad,	// (0x00027565) main_video4_pane_g5_ParamLimits

0x1bad,	// (0x00027565) main_video4_pane_g5

0x1bd2,	// (0x0002758a) vid4_progress_pane_ParamLimits

0x1bd2,	// (0x0002758a) vid4_progress_pane

0xcf2e,	// (0x000328e6) main_cset_slider_pane_g18_ParamLimits

0xcf2e,	// (0x000328e6) main_cset_slider_pane_g18

0xd1ad,	// (0x00032b65) cell_cam4_burst_pane_g2_ParamLimits

0xd1ad,	// (0x00032b65) cell_cam4_burst_pane_g2

0x0001,

0xf9ab,	// (0x00035363) cell_cam4_burst_pane_g_ParamLimits

0xf9ab,	// (0x00035363) cell_cam4_burst_pane_g

0x2ad3,	// (0x0002848b) bg_cl_pane_ParamLimits

0x2ad3,	// (0x0002848b) bg_cl_pane

0x858a,	// (0x0002df42) cl_header_pane_ParamLimits

0x858a,	// (0x0002df42) cl_header_pane

0x859e,	// (0x0002df56) cl_listscroll_pane_ParamLimits

0x859e,	// (0x0002df56) cl_listscroll_pane

0xd38b,	// (0x00032d43) bg_cl_pane_g1

0xd393,	// (0x00032d4b) bg_cl_pane_g2

0xd39b,	// (0x00032d53) bg_cl_pane_g3

0xd3a3,	// (0x00032d5b) bg_cl_pane_g4

0xd3ab,	// (0x00032d63) bg_cl_pane_g5

0xd3b3,	// (0x00032d6b) bg_cl_pane_g6

0xd3bb,	// (0x00032d73) bg_cl_pane_g7

0xd3c3,	// (0x00032d7b) bg_cl_pane_g8

0xd3cb,	// (0x00032d83) bg_cl_pane_g9

0x0008,

0xf9e6,	// (0x0003539e) bg_cl_pane_g

0x85ae,	// (0x0002df66) aid_height_cl_leading_ParamLimits

0x85ae,	// (0x0002df66) aid_height_cl_leading

0x85ba,	// (0x0002df72) aid_height_cl_text_ParamLimits

0x85ba,	// (0x0002df72) aid_height_cl_text

0x2910,	// (0x000282c8) bg_cl_header_pane_ParamLimits

0x2910,	// (0x000282c8) bg_cl_header_pane

0x85d9,	// (0x0002df91) cl_header_pane_g1_ParamLimits

0x85d9,	// (0x0002df91) cl_header_pane_g1

0x85ef,	// (0x0002dfa7) cl_header_pane_t1_ParamLimits

0x85ef,	// (0x0002dfa7) cl_header_pane_t1

0xd3d3,	// (0x00032d8b) cl_list_pane

0xcf01,	// (0x000328b9) hc_scroll_pane_cp01

0x3ad5,	// (0x0002948d) bg_cl_header_pane_g1

0xcde7,	// (0x0003279f) bg_cl_header_pane_g2

0x3af5,	// (0x000294ad) bg_cl_header_pane_g3

0xcdf7,	// (0x000327af) bg_cl_header_pane_g4

0xcdef,	// (0x000327a7) bg_cl_header_pane_g5

0xd09c,	// (0x00032a54) bg_cl_header_pane_g6

0xce0f,	// (0x000327c7) bg_cl_header_pane_g7

0xce17,	// (0x000327cf) bg_cl_header_pane_g8

0xce07,	// (0x000327bf) bg_cl_header_pane_g9

0x0008,

0xf9f9,	// (0x000353b1) bg_cl_header_pane_g

0x8608,	// (0x0002dfc0) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8608,	// (0x0002dfc0) hc_cl_list_double_graphic_heading_pane

0x8619,	// (0x0002dfd1) hc_cl_list_single_graphic_pane_ParamLimits

0x8619,	// (0x0002dfd1) hc_cl_list_single_graphic_pane

0x862f,	// (0x0002dfe7) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x862f,	// (0x0002dfe7) hc_cl_list_single_graphic_pane_g1

0x863b,	// (0x0002dff3) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x863b,	// (0x0002dff3) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa0c,	// (0x000353c4) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa0c,	// (0x000353c4) hc_cl_list_single_graphic_pane_g

0x864f,	// (0x0002e007) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x864f,	// (0x0002e007) hc_cl_list_single_graphic_pane_t1

0x862f,	// (0x0002dfe7) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x862f,	// (0x0002dfe7) hc_cl_list_double_graphic_heading_pane_g1

0x8664,	// (0x0002e01c) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8664,	// (0x0002e01c) hc_cl_list_double_graphic_heading_pane_g2

0x8678,	// (0x0002e030) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8678,	// (0x0002e030) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa11,	// (0x000353c9) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa11,	// (0x000353c9) hc_cl_list_double_graphic_heading_pane_g

0x868c,	// (0x0002e044) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x868c,	// (0x0002e044) hc_cl_list_double_graphic_heading_pane_t1

0x86a1,	// (0x0002e059) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x86a1,	// (0x0002e059) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa18,	// (0x000353d0) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa18,	// (0x000353d0) hc_cl_list_double_graphic_heading_pane_t

0xd3e4,	// (0x00032d9c) vid4_progress_pane_g1

0xd3f4,	// (0x00032dac) vid4_progress_pane_g2

0x20aa,	// (0x00027a62) vid4_progress_pane_g3

0xd404,	// (0x00032dbc) vid4_progress_pane_g4

0x0004,

0xfa1d,	// (0x000353d5) vid4_progress_pane_g

0x20bc,	// (0x00027a74) vid4_progress_pane_t1

0xd41c,	// (0x00032dd4) vid4_progress_pane_t2

0x0002,

0xfa28,	// (0x000353e0) vid4_progress_pane_t

0x20d4,	// (0x00027a8c) wait_bar_pane_cp07

0xbf30,	// (0x000318e8) blid_firmament_pane_ParamLimits

0xbf73,	// (0x0003192b) popup_blid_sat_info2_window_g1

0xbf97,	// (0x0003194f) popup_blid_sat_info2_window_t3

0xbfa5,	// (0x0003195d) popup_blid_sat_info2_window_t4

0xbfb3,	// (0x0003196b) popup_blid_sat_info2_window_t5

0xbfc1,	// (0x00031979) popup_blid_sat_info2_window_t6

0xbfd1,	// (0x00031989) popup_blid_sat_info2_window_t7

0xbfdf,	// (0x00031997) popup_blid_sat_info2_window_t8

0xbfed,	// (0x000319a5) popup_blid_sat_info2_window_t9

0xbffb,	// (0x000319b3) popup_blid_sat_info2_window_t10

0xc0bc,	// (0x00031a74) aid_firma_cardinal_ParamLimits

0xc0d0,	// (0x00031a88) blid_firmament_pane_t1_ParamLimits

0xc0e7,	// (0x00031a9f) blid_firmament_pane_t2_ParamLimits

0xc0fe,	// (0x00031ab6) blid_firmament_pane_t3_ParamLimits

0xc115,	// (0x00031acd) blid_firmament_pane_t4_ParamLimits

0xf646,	// (0x00034ffe) blid_firmament_pane_t_ParamLimits

0xc12c,	// (0x00031ae4) blid_sat_info_pane_ParamLimits

0xb16c,	// (0x00030b24) main_cam_set_pane_ParamLimits

0x760d,	// (0x0002cfc5) aid_size_cell_colour_35_ParamLimits

0x762d,	// (0x0002cfe5) aid_size_cell_colour_112_ParamLimits

0x764d,	// (0x0002d005) aid_size_cell_effect_ParamLimits

0x5291,	// (0x0002ac49) bg_tb_trans_pane_cp02_ParamLimits

0x48b0,	// (0x0002a268) heading_imed_pane_ParamLimits

0x766d,	// (0x0002d025) listscroll_imed_pane_ParamLimits

0xb311,	// (0x00030cc9) popup_call2_audio_first_window_g5_ParamLimits

0xb311,	// (0x00030cc9) popup_call2_audio_first_window_g5

0x1730,	// (0x000270e8) aid_size_touch_image3_arrow_left_ParamLimits

0x1730,	// (0x000270e8) aid_size_touch_image3_arrow_left

0x175c,	// (0x00027114) aid_size_touch_image3_arrow_right_ParamLimits

0x175c,	// (0x00027114) aid_size_touch_image3_arrow_right

0xd431,	// (0x00032de9) vid4_progress_pane_t3

0x7812,	// (0x0002d1ca) main_hwr_training_symbol_option_pane_ParamLimits

0x7812,	// (0x0002d1ca) main_hwr_training_symbol_option_pane

0xc832,	// (0x000321ea) popup_hwr_training_preview_window_ParamLimits

0xc832,	// (0x000321ea) popup_hwr_training_preview_window

0x15db,	// (0x00026f93) hwr_training_navi_pane_g5_ParamLimits

0x15db,	// (0x00026f93) hwr_training_navi_pane_g5

0xcdd5,	// (0x0003278d) popup_char_count_window

0xb16c,	// (0x00030b24) bg_popup_sub_pane_cp20_ParamLimits

0x2020,	// (0x000279d8) list_vitu2_match_list_pane_ParamLimits

0x202c,	// (0x000279e4) vitu2_page_scroll_pane_ParamLimits

0x202c,	// (0x000279e4) vitu2_page_scroll_pane

0xd468,	// (0x00032e20) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd468,	// (0x00032e20) list_single_hwr_training_symbol_option_pane

0xd47b,	// (0x00032e33) list_single_hwr_training_symbol_option_pane_g1

0xd483,	// (0x00032e3b) list_single_hwr_training_symbol_option_pane_t1

0xd491,	// (0x00032e49) bg_button_pane_cp023

0xd49a,	// (0x00032e52) bg_button_pane_cp024

0xd4cd,	// (0x00032e85) vitu2_page_scroll_pane_g1

0xd4d5,	// (0x00032e8d) vitu2_page_scroll_pane_g2

0x0001,

0xfa2f,	// (0x000353e7) vitu2_page_scroll_pane_g

0xd4dd,	// (0x00032e95) vitu2_page_scroll_pane_t1

0xbe8e,	// (0x00031846) popup_char_count_window_g1

0xd4ec,	// (0x00032ea4) popup_char_count_window_g2

0xd4f5,	// (0x00032ead) popup_char_count_window_g3

0x0002,

0xfa34,	// (0x000353ec) popup_char_count_window_g

0xd4fe,	// (0x00032eb6) popup_char_count_window_t1

0xb17a,	// (0x00030b32) main_vded2_pane

0xc5e5,	// (0x00031f9d) aid_size_cell_imed_line

0xc5ef,	// (0x00031fa7) grid_imed_line_width_pane

0xcd54,	// (0x0003270c) vid4_indicators_pane_g4

0xd50c,	// (0x00032ec4) cell_imed_line_width_pane_ParamLimits

0xd50c,	// (0x00032ec4) cell_imed_line_width_pane

0xd520,	// (0x00032ed8) cell_imed_line_width_pane_g1

0xd529,	// (0x00032ee1) cell_imed_line_width_pane_g2

0x0001,

0xfa3b,	// (0x000353f3) cell_imed_line_width_pane_g

0x86ca,	// (0x0002e082) main_vded2_pane_g1_ParamLimits

0x86ca,	// (0x0002e082) main_vded2_pane_g1

0x86e0,	// (0x0002e098) main_vded2_pane_g2_ParamLimits

0x86e0,	// (0x0002e098) main_vded2_pane_g2

0x0001,

0xfa40,	// (0x000353f8) main_vded2_pane_g_ParamLimits

0xfa40,	// (0x000353f8) main_vded2_pane_g

0x86f2,	// (0x0002e0aa) vded2_slider_pane_ParamLimits

0x86f2,	// (0x0002e0aa) vded2_slider_pane

0x8702,	// (0x0002e0ba) aid_size_touch_vded2_end

0x870c,	// (0x0002e0c4) aid_size_touch_vded2_playhead

0xd531,	// (0x00032ee9) aid_size_touch_vded2_start

0xd539,	// (0x00032ef1) vded2_slider_bg_pane

0xd542,	// (0x00032efa) vded2_slider_pane_g1

0xd54b,	// (0x00032f03) vded2_slider_pane_g2

0x8716,	// (0x0002e0ce) vded2_slider_pane_g3

0x0002,

0xfa45,	// (0x000353fd) vded2_slider_pane_g

0xd553,	// (0x00032f0b) vded2_slider_bg_pane_g1

0xd55c,	// (0x00032f14) vded2_slider_bg_pane_g2

0xd565,	// (0x00032f1d) vded2_slider_bg_pane_g3

0x0002,

0xfa4c,	// (0x00035404) vded2_slider_bg_pane_g

0x56a2,	// (0x0002b05a) aid_postcard_touch_down_pane_ParamLimits

0x56a2,	// (0x0002b05a) aid_postcard_touch_down_pane

0x56b8,	// (0x0002b070) aid_postcard_touch_up_pane_ParamLimits

0x56b8,	// (0x0002b070) aid_postcard_touch_up_pane

0xb17a,	// (0x00030b32) main_blid2_pane

0xbc08,	// (0x000315c0) popup_blid2_search_window

0x21d9,	// (0x00027b91) blid2_gps_pane

0x21d9,	// (0x00027b91) blid2_navig_pane

0x21d9,	// (0x00027b91) blid2_search_pane

0x21d9,	// (0x00027b91) blid2_tripm_pane

0x8721,	// (0x0002e0d9) blid2_search_pane_g1_ParamLimits

0x8721,	// (0x0002e0d9) blid2_search_pane_g1

0x873b,	// (0x0002e0f3) blid2_search_pane_t1_ParamLimits

0x873b,	// (0x0002e0f3) blid2_search_pane_t1

0x874d,	// (0x0002e105) aid_size_cell_blid2_gps_ParamLimits

0x874d,	// (0x0002e105) aid_size_cell_blid2_gps

0x8765,	// (0x0002e11d) blid2_gps_pane_g1_ParamLimits

0x8765,	// (0x0002e11d) blid2_gps_pane_g1

0x8779,	// (0x0002e131) grid_blid2_satellite_pane_ParamLimits

0x8779,	// (0x0002e131) grid_blid2_satellite_pane

0x8793,	// (0x0002e14b) blid2_navig_pane_g1_ParamLimits

0x8793,	// (0x0002e14b) blid2_navig_pane_g1

0x879f,	// (0x0002e157) blid2_navig_pane_t1_ParamLimits

0x879f,	// (0x0002e157) blid2_navig_pane_t1

0x87ba,	// (0x0002e172) blid2_navig_pane_t2_ParamLimits

0x87ba,	// (0x0002e172) blid2_navig_pane_t2

0x0001,

0xfa53,	// (0x0003540b) blid2_navig_pane_t_ParamLimits

0xfa53,	// (0x0003540b) blid2_navig_pane_t

0x87d5,	// (0x0002e18d) blid2_navig_ring_pane_ParamLimits

0x87d5,	// (0x0002e18d) blid2_navig_ring_pane

0x87ee,	// (0x0002e1a6) blid2_speed_pane_ParamLimits

0x87ee,	// (0x0002e1a6) blid2_speed_pane

0x87fa,	// (0x0002e1b2) blid2_tripm_pane_g1_ParamLimits

0x87fa,	// (0x0002e1b2) blid2_tripm_pane_g1

0x8813,	// (0x0002e1cb) blid2_tripm_pane_g2_ParamLimits

0x8813,	// (0x0002e1cb) blid2_tripm_pane_g2

0x8827,	// (0x0002e1df) blid2_tripm_pane_g3_ParamLimits

0x8827,	// (0x0002e1df) blid2_tripm_pane_g3

0x883b,	// (0x0002e1f3) blid2_tripm_pane_g4_ParamLimits

0x883b,	// (0x0002e1f3) blid2_tripm_pane_g4

0x884f,	// (0x0002e207) blid2_tripm_pane_g5_ParamLimits

0x884f,	// (0x0002e207) blid2_tripm_pane_g5

0x0005,

0xfa58,	// (0x00035410) blid2_tripm_pane_g_ParamLimits

0xfa58,	// (0x00035410) blid2_tripm_pane_g

0x8875,	// (0x0002e22d) blid2_tripm_pane_t1_ParamLimits

0x8875,	// (0x0002e22d) blid2_tripm_pane_t1

0x8890,	// (0x0002e248) blid2_tripm_pane_t2_ParamLimits

0x8890,	// (0x0002e248) blid2_tripm_pane_t2

0x88a9,	// (0x0002e261) blid2_tripm_pane_t3_ParamLimits

0x88a9,	// (0x0002e261) blid2_tripm_pane_t3

0x0003,

0xfa65,	// (0x0003541d) blid2_tripm_pane_t_ParamLimits

0xfa65,	// (0x0003541d) blid2_tripm_pane_t

0x88f0,	// (0x0002e2a8) cell_blid2_satellite_pane_ParamLimits

0x88f0,	// (0x0002e2a8) cell_blid2_satellite_pane

0x890e,	// (0x0002e2c6) cell_blid2_satellite_pane_g1

0xd56e,	// (0x00032f26) cell_blid2_satellite_pane_t1

0x3423,	// (0x00028ddb) blid2_speed_pane_g1

0xd57c,	// (0x00032f34) blid2_speed_pane_t1

0xd58a,	// (0x00032f42) blid2_speed_pane_t2

0x0001,

0xfa6e,	// (0x00035426) blid2_speed_pane_t

0x3423,	// (0x00028ddb) blid2_navig_ring_pane_g1

0x8917,	// (0x0002e2cf) blid2_navig_ring_pane_g2

0x891f,	// (0x0002e2d7) blid2_navig_ring_pane_g3

0x8927,	// (0x0002e2df) blid2_navig_ring_pane_g4

0x892f,	// (0x0002e2e7) blid2_navig_ring_pane_g5

0x0004,

0xfa73,	// (0x0003542b) blid2_navig_ring_pane_g

0x21d9,	// (0x00027b91) bg_popup_window_pane_cp011

0xd598,	// (0x00032f50) popup_blid2_search_window_g1

0xd5a0,	// (0x00032f58) popup_blid2_search_window_t1

0xd5ae,	// (0x00032f66) popup_blid2_search_window_t2

0x0001,

0xfa7e,	// (0x00035436) popup_blid2_search_window_t

0x39a1,	// (0x00029359) main_browser_pane_g1

0x2ad3,	// (0x0002848b) main_browser_pane_ParamLimits

0xb16c,	// (0x00030b24) bg_button_pane_cp011_ParamLimits

0x1f9e,	// (0x00027956) cell_vitu2_function_pane_g1_ParamLimits

0x5291,	// (0x0002ac49) bg_popup_sub_pane_cp22_ParamLimits

0x8230,	// (0x0002dbe8) input_focus_pane_cp08_ParamLimits

0x824b,	// (0x0002dc03) popup_vitu2_query_button_pane_ParamLimits

0x824b,	// (0x0002dc03) popup_vitu2_query_button_pane

0x825a,	// (0x0002dc12) popup_vitu2_query_input_button_pane

0xd0f7,	// (0x00032aaf) popup_vitu2_query_window_g1_ParamLimits

0x8262,	// (0x0002dc1a) popup_vitu2_query_window_g2_ParamLimits

0xf97f,	// (0x00035337) popup_vitu2_query_window_g_ParamLimits

0x21d9,	// (0x00027b91) bg_button_pane_cp026

0x8937,	// (0x0002e2ef) popup_vitu2_query_input_button_pane_g1

0x21d9,	// (0x00027b91) bg_button_pane_cp025

0xd5bc,	// (0x00032f74) popup_vitu2_query_button_pane_t1

0x6b64,	// (0x0002c51c) main_mp3_pane_t6

0x6b72,	// (0x0002c52a) popup_slider_window_cp01

0xccb8,	// (0x00032670) cam4_battery_pane

0xcd11,	// (0x000326c9) cam4_battery_pane_cp02

0xd3dc,	// (0x00032d94) cam4_battery_pane_cp01

0xd3dc,	// (0x00032d94) cam4_battery_pane_cp03

0xbe97,	// (0x0003184f) cam4_battery_pane_g1

0x3423,	// (0x00028ddb) cam4_battery_pane_g2

0x0001,

0xfa83,	// (0x0003543b) cam4_battery_pane_g

0xc009,	// (0x000319c1) popup_blid_sat_info2_window_t11

0x4f9b,	// (0x0002a953) aid_size_touch_mv_arrow_left_ParamLimits

0x4fc4,	// (0x0002a97c) aid_size_touch_mv_arrow_right_ParamLimits

0x5022,	// (0x0002a9da) navi_pane_g1_ParamLimits

0x502e,	// (0x0002a9e6) navi_pane_g2_ParamLimits

0x505c,	// (0x0002aa14) navi_pane_g3_ParamLimits

0xf35a,	// (0x00034d12) navi_pane_g_ParamLimits

0x511a,	// (0x0002aad2) navi_pane_mv_t1_ParamLimits

0x7679,	// (0x0002d031) grid_imed_effect_pane_ParamLimits

0x3545,	// (0x00028efd) aid_placing_vt_slider_lsc

0x3555,	// (0x00028f0d) aid_placing_vt_slider_prt

0x2910,	// (0x000282c8) bg_tb_trans_pane_cp01_ParamLimits

0xc289,	// (0x00031c41) popup_image_details_window_g1_ParamLimits

0xc29c,	// (0x00031c54) popup_image_details_window_g2_ParamLimits

0xc2b1,	// (0x00031c69) popup_image_details_window_g3_ParamLimits

0xc2b1,	// (0x00031c69) popup_image_details_window_g3

0xf686,	// (0x0003503e) popup_image_details_window_g_ParamLimits

0xc2c5,	// (0x00031c7d) popup_image_details_window_t1_ParamLimits

0xc2d7,	// (0x00031c8f) popup_image_details_window_t2_ParamLimits

0xc2f0,	// (0x00031ca8) popup_image_details_window_t3_ParamLimits

0xc304,	// (0x00031cbc) popup_image_details_window_t4_ParamLimits

0xc31f,	// (0x00031cd7) popup_image_details_window_t5_ParamLimits

0xf68d,	// (0x00035045) popup_image_details_window_t_ParamLimits

0x85c6,	// (0x0002df7e) cl_header_name_pane_ParamLimits

0x85c6,	// (0x0002df7e) cl_header_name_pane

0x893f,	// (0x0002e2f7) cl_header_name_pane_t1_ParamLimits

0x893f,	// (0x0002e2f7) cl_header_name_pane_t1

0x8960,	// (0x0002e318) cl_header_name_pane_t2_ParamLimits

0x8960,	// (0x0002e318) cl_header_name_pane_t2

0x89a2,	// (0x0002e35a) cl_header_name_pane_t3_ParamLimits

0x89a2,	// (0x0002e35a) cl_header_name_pane_t3

0x0002,

0xfa88,	// (0x00035440) cl_header_name_pane_t_ParamLimits

0xfa88,	// (0x00035440) cl_header_name_pane_t

0x50eb,	// (0x0002aaa3) navi_pane_mv_g2_ParamLimits

0xcda0,	// (0x00032758) field_vitu2_entry_pane_g1_ParamLimits

0xcdac,	// (0x00032764) field_vitu2_entry_pane_g2_ParamLimits

0x525b,	// (0x0002ac13) field_vitu2_entry_pane_g3_ParamLimits

0x525b,	// (0x0002ac13) field_vitu2_entry_pane_g3

0xf888,	// (0x00035240) field_vitu2_entry_pane_g_ParamLimits

0x1e2e,	// (0x000277e6) cell_vitu2_itu_pane_g1_ParamLimits

0x1e46,	// (0x000277fe) cell_vitu2_itu_pane_g2_ParamLimits

0x1e46,	// (0x000277fe) cell_vitu2_itu_pane_g2

0x0001,

0xf894,	// (0x0003524c) cell_vitu2_itu_pane_g_ParamLimits

0xf894,	// (0x0003524c) cell_vitu2_itu_pane_g

0xb16c,	// (0x00030b24) bg_vkb2_func_pane_cp05_ParamLimits

0xb16c,	// (0x00030b24) bg_vkb2_func_pane_cp05

0xb16c,	// (0x00030b24) bg_vkb2_func_pane_cp03

0xb16c,	// (0x00030b24) bg_vkb2_func_pane_cp04

0xb16c,	// (0x00030b24) bg_vkb2_func_pane_cp10_ParamLimits

0xb16c,	// (0x00030b24) bg_vkb2_func_pane_cp10

0x856a,	// (0x0002df22) bg_vkb2_func_pane_cp08

0x8543,	// (0x0002defb) bg_vkb2_func_pane_cp06

0x854f,	// (0x0002df07) bg_vkb2_func_pane_cp07

0xd4a3,	// (0x00032e5b) bg_vkb2_func_pane_cp11_ParamLimits

0xd4a3,	// (0x00032e5b) bg_vkb2_func_pane_cp11

0xd4b8,	// (0x00032e70) bg_vkb2_func_pane_cp12_ParamLimits

0xd4b8,	// (0x00032e70) bg_vkb2_func_pane_cp12

0x21d9,	// (0x00027b91) bg_vkb2_func_pane_cp09

0xcde7,	// (0x0003279f) bg_vkb2_func_pane_g1

0x3af5,	// (0x000294ad) bg_vkb2_func_pane_g2

0xcdef,	// (0x000327a7) bg_vkb2_func_pane_g3

0xcdf7,	// (0x000327af) bg_vkb2_func_pane_g4

0xd09c,	// (0x00032a54) bg_vkb2_func_pane_g5

0xce0f,	// (0x000327c7) bg_vkb2_func_pane_g6

0xce17,	// (0x000327cf) bg_vkb2_func_pane_g7

0xce07,	// (0x000327bf) bg_vkb2_func_pane_g8

0x3ad5,	// (0x0002948d) bg_vkb2_func_pane_g9

0x0008,

0xfa8f,	// (0x00035447) bg_vkb2_func_pane_g

0x8863,	// (0x0002e21b) blid2_tripm_pane_g6_ParamLimits

0x8863,	// (0x0002e21b) blid2_tripm_pane_g6

0xcb69,	// (0x00032521) mp4_progress_pane_g1

0x88dc,	// (0x0002e294) blid2_tripm_values_pane_ParamLimits

0x88dc,	// (0x0002e294) blid2_tripm_values_pane

0x89d3,	// (0x0002e38b) blid2_tripm_values_pane_t1

0x89e1,	// (0x0002e399) blid2_tripm_values_pane_t2

0x89ef,	// (0x0002e3a7) blid2_tripm_values_pane_t3

0x89fd,	// (0x0002e3b5) blid2_tripm_values_pane_t4

0x8a0b,	// (0x0002e3c3) blid2_tripm_values_pane_t5

0x8a19,	// (0x0002e3d1) blid2_tripm_values_pane_t6

0x8a27,	// (0x0002e3df) blid2_tripm_values_pane_t7

0x8a35,	// (0x0002e3ed) blid2_tripm_values_pane_t8

0x8a43,	// (0x0002e3fb) blid2_tripm_values_pane_t9

0x0008,

0xfaa2,	// (0x0003545a) blid2_tripm_values_pane_t

0x3591,	// (0x00028f49) call_video_pane_t1_ParamLimits

0x35af,	// (0x00028f67) call_video_pane_t2_ParamLimits

0xf208,	// (0x00034bc0) call_video_pane_t_ParamLimits

0x55b4,	// (0x0002af6c) msg_header_pane_g1_ParamLimits

0x55c2,	// (0x0002af7a) msg_header_pane_g2_ParamLimits

0x55c2,	// (0x0002af7a) msg_header_pane_g2

0x0001,

0xf3fd,	// (0x00034db5) msg_header_pane_g_ParamLimits

0xf3fd,	// (0x00034db5) msg_header_pane_g

0x2ad3,	// (0x0002848b) main_clock2_pane_ParamLimits

0x744e,	// (0x0002ce06) grid_clock2_toolbar_pane_ParamLimits

0x744e,	// (0x0002ce06) grid_clock2_toolbar_pane

0x744e,	// (0x0002ce06) listscroll_clock2_pane_ParamLimits

0x744e,	// (0x0002ce06) listscroll_clock2_pane

0x7532,	// (0x0002ceea) main_clock2_pane_t3_ParamLimits

0x7532,	// (0x0002ceea) main_clock2_pane_t3

0x7556,	// (0x0002cf0e) main_clock2_pane_t4_ParamLimits

0x7556,	// (0x0002cf0e) main_clock2_pane_t4

0xd5ca,	// (0x00032f82) cell_clock2_toolbar_pane

0xd5d2,	// (0x00032f8a) cell_clock2_toolbar_pane_cp01

0xd5d2,	// (0x00032f8a) cell_clock2_toolbar_pane_cp02

0xd5da,	// (0x00032f92) cell_clock2_toolbar_pane_cp03

0xd5e2,	// (0x00032f9a) list_clock2_pane

0x4d45,	// (0x0002a6fd) scroll_pane_cp10

0xd5ea,	// (0x00032fa2) list_single_clock2_pane_ParamLimits

0xd5ea,	// (0x00032fa2) list_single_clock2_pane

0x3236,	// (0x00028bee) list_highlight_pane_cp08

0xd5f7,	// (0x00032faf) list_single_clock2_pane_t1

0xd605,	// (0x00032fbd) list_single_clock2_pane_t2

0x0001,

0xfab5,	// (0x0003546d) list_single_clock2_pane_t

0x21d9,	// (0x00027b91) bg_button_pane_cp10

0xd613,	// (0x00032fcb) cell_clock2_toolbar_pane_g1

0x11c1,	// (0x00026b79) aid_main_viewer_pane_g1_ParamLimits

0x11c1,	// (0x00026b79) aid_main_viewer_pane_g1

0x11cf,	// (0x00026b87) aid_main_viewer_pane_g2_ParamLimits

0x11cf,	// (0x00026b87) aid_main_viewer_pane_g2

0x5658,	// (0x0002b010) aid_main_viewer_pane_g3_ParamLimits

0x5658,	// (0x0002b010) aid_main_viewer_pane_g3

0x5667,	// (0x0002b01f) aid_main_viewer_pane_g4_ParamLimits

0x5667,	// (0x0002b01f) aid_main_viewer_pane_g4

0x0003,

0xf40e,	// (0x00034dc6) aid_main_viewer_pane_g_ParamLimits

0xf40e,	// (0x00034dc6) aid_main_viewer_pane_g

0x1203,	// (0x00026bbb) main_calc_pane_ParamLimits

0x1229,	// (0x00026be1) main_dialer2_pane_ParamLimits

0xb17a,	// (0x00030b32) main_cam6_pane

0xb17a,	// (0x00030b32) main_vid6_pane

0x745a,	// (0x0002ce12) listscroll_gen_pane_cp06_ParamLimits

0x745a,	// (0x0002ce12) listscroll_gen_pane_cp06

0x7579,	// (0x0002cf31) main_clock2_pane_t5_ParamLimits

0x7579,	// (0x0002cf31) main_clock2_pane_t5

0x75d7,	// (0x0002cf8f) aid_call2_pane_cp10_ParamLimits

0x75e9,	// (0x0002cfa1) aid_call_pane_cp10_ParamLimits

0x4f2a,	// (0x0002a8e2) popup_clock_analogue_window_cp10_g1_ParamLimits

0x4f2a,	// (0x0002a8e2) popup_clock_analogue_window_cp10_g2_ParamLimits

0x1507,	// (0x00026ebf) popup_clock_analogue_window_cp10_g3_ParamLimits

0x1507,	// (0x00026ebf) popup_clock_analogue_window_cp10_g4_ParamLimits

0x4f2a,	// (0x0002a8e2) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf742,	// (0x000350fa) popup_clock_analogue_window_cp10_g_ParamLimits

0x151d,	// (0x00026ed5) popup_clock_analogue_window_cp10_t1_ParamLimits

0x78ea,	// (0x0002d2a2) cell_dialer2_keypad_pane_g2_ParamLimits

0x78ea,	// (0x0002d2a2) cell_dialer2_keypad_pane_g2

0x0001,

0xf827,	// (0x000351df) cell_dialer2_keypad_pane_g_ParamLimits

0xf827,	// (0x000351df) cell_dialer2_keypad_pane_g

0x7906,	// (0x0002d2be) cell_dialer2_keypad_pane_t1

0x7d84,	// (0x0002d73c) main_cset_text2_pane_ParamLimits

0x7d84,	// (0x0002d73c) main_cset_text2_pane

0xd2e3,	// (0x00032c9b) area_vitu2_query_pane_g1_ParamLimits

0x84e4,	// (0x0002de9c) area_vitu2_query_pane_g2_ParamLimits

0xf9d2,	// (0x0003538a) area_vitu2_query_pane_g_ParamLimits

0xd367,	// (0x00032d1f) area_vitu2_query_pane_t7_ParamLimits

0xd367,	// (0x00032d1f) area_vitu2_query_pane_t7

0x8543,	// (0x0002defb) bg_button_pane_cp018_ParamLimits

0x854f,	// (0x0002df07) bg_button_pane_cp021_ParamLimits

0x855b,	// (0x0002df13) bg_button_pane_cp022_ParamLimits

0x856a,	// (0x0002df22) bg_vkb2_func_pane_cp08_ParamLimits

0x8543,	// (0x0002defb) bg_vkb2_func_pane_cp06_ParamLimits

0x854f,	// (0x0002df07) bg_vkb2_func_pane_cp07_ParamLimits

0x857a,	// (0x0002df32) input_focus_pane_cp09_ParamLimits

0xd61b,	// (0x00032fd3) cam6_autofocus_pane_ParamLimits

0xd61b,	// (0x00032fd3) cam6_autofocus_pane

0x20e7,	// (0x00027a9f) cam6_image_uncrop_pane_ParamLimits

0x20e7,	// (0x00027a9f) cam6_image_uncrop_pane

0x20f6,	// (0x00027aae) cam6_indi_pane_ParamLimits

0x20f6,	// (0x00027aae) cam6_indi_pane

0x210c,	// (0x00027ac4) cam6_mode_pane_ParamLimits

0x210c,	// (0x00027ac4) cam6_mode_pane

0x211e,	// (0x00027ad6) cam6_timer_pane_ParamLimits

0x211e,	// (0x00027ad6) cam6_timer_pane

0x212a,	// (0x00027ae2) cam6_zoom_pane_ParamLimits

0x212a,	// (0x00027ae2) cam6_zoom_pane

0x8a51,	// (0x0002e409) cam6_mode_pane_g1_ParamLimits

0x8a51,	// (0x0002e409) cam6_mode_pane_g1

0x8a61,	// (0x0002e419) cam6_mode_pane_g2_ParamLimits

0x8a61,	// (0x0002e419) cam6_mode_pane_g2

0x8a71,	// (0x0002e429) cam6_mode_pane_g3_ParamLimits

0x8a71,	// (0x0002e429) cam6_mode_pane_g3

0x8a81,	// (0x0002e439) cam6_mode_pane_g4_ParamLimits

0x8a81,	// (0x0002e439) cam6_mode_pane_g4

0x0003,

0xfaba,	// (0x00035472) cam6_mode_pane_g_ParamLimits

0xfaba,	// (0x00035472) cam6_mode_pane_g

0xd629,	// (0x00032fe1) bg_tb_trans_pane_cp08_ParamLimits

0xd629,	// (0x00032fe1) bg_tb_trans_pane_cp08

0xd637,	// (0x00032fef) cam6_battery_pane_ParamLimits

0xd637,	// (0x00032fef) cam6_battery_pane

0xd64d,	// (0x00033005) cam6_indi_pane_g1_ParamLimits

0xd64d,	// (0x00033005) cam6_indi_pane_g1

0xd65f,	// (0x00033017) cam6_indi_pane_g2_ParamLimits

0xd65f,	// (0x00033017) cam6_indi_pane_g2

0xd671,	// (0x00033029) cam6_indi_pane_g3_ParamLimits

0xd671,	// (0x00033029) cam6_indi_pane_g3

0x0002,

0xfac3,	// (0x0003547b) cam6_indi_pane_g_ParamLimits

0xfac3,	// (0x0003547b) cam6_indi_pane_g

0xd683,	// (0x0003303b) cam6_indi_pane_t1_ParamLimits

0xd683,	// (0x0003303b) cam6_indi_pane_t1

0x8a91,	// (0x0002e449) cam6_autofocus_pane_g1

0x8a99,	// (0x0002e451) cam6_autofocus_pane_g2

0x8aa1,	// (0x0002e459) cam6_autofocus_pane_g3

0x8aa9,	// (0x0002e461) cam6_autofocus_pane_g4

0x0003,

0xfaca,	// (0x00035482) cam6_autofocus_pane_g

0xd6a9,	// (0x00033061) cam6_timer_pane_g1

0xd6b1,	// (0x00033069) cam6_timer_pane_t1

0xd6bf,	// (0x00033077) cam6_zoom_cont_pane

0xd6c7,	// (0x0003307f) cam6_zoom_pane_g1

0xd6cf,	// (0x00033087) cam6_zoom_pane_g2

0x8ab1,	// (0x0002e469) cam6_zoom_pane_g3

0x0002,

0xfad3,	// (0x0003548b) cam6_zoom_pane_g

0x3423,	// (0x00028ddb) cam6_battery_pane_g1

0x3423,	// (0x00028ddb) cam6_battery_pane_g2

0x0001,

0xf3be,	// (0x00034d76) cam6_battery_pane_g

0xd6d7,	// (0x0003308f) cam6_zoom_cont_pane_g1

0xd6e0,	// (0x00033098) cam6_zoom_cont_pane_g2

0xd6e9,	// (0x000330a1) cam6_zoom_cont_pane_g3

0x0002,

0xfada,	// (0x00035492) cam6_zoom_cont_pane_g

0x8acb,	// (0x0002e483) cam6_mode_pane_cp_ParamLimits

0x8acb,	// (0x0002e483) cam6_mode_pane_cp

0x8add,	// (0x0002e495) cam6_zoom_pane_cp_ParamLimits

0x8add,	// (0x0002e495) cam6_zoom_pane_cp

0x8ae9,	// (0x0002e4a1) vid6_image_uncrop_cif_pane_ParamLimits

0x8ae9,	// (0x0002e4a1) vid6_image_uncrop_cif_pane

0x8af9,	// (0x0002e4b1) vid6_image_uncrop_nhd_pane_ParamLimits

0x8af9,	// (0x0002e4b1) vid6_image_uncrop_nhd_pane

0x8b08,	// (0x0002e4c0) vid6_image_uncrop_vga_pane_ParamLimits

0x8b08,	// (0x0002e4c0) vid6_image_uncrop_vga_pane

0x8b17,	// (0x0002e4cf) vid6_image_uncrop_wvga_pane_ParamLimits

0x8b17,	// (0x0002e4cf) vid6_image_uncrop_wvga_pane

0x8b26,	// (0x0002e4de) vid6_indi_pane_ParamLimits

0x8b26,	// (0x0002e4de) vid6_indi_pane

0xd629,	// (0x00032fe1) bg_tb_trans_pane_cp09_ParamLimits

0xd629,	// (0x00032fe1) bg_tb_trans_pane_cp09

0xd701,	// (0x000330b9) cam6_battery_pane_cp_ParamLimits

0xd701,	// (0x000330b9) cam6_battery_pane_cp

0xd70d,	// (0x000330c5) vid6_indi_pane_g1_ParamLimits

0xd70d,	// (0x000330c5) vid6_indi_pane_g1

0xd71f,	// (0x000330d7) vid6_indi_pane_g2_ParamLimits

0xd71f,	// (0x000330d7) vid6_indi_pane_g2

0xd731,	// (0x000330e9) vid6_indi_pane_g3_ParamLimits

0xd731,	// (0x000330e9) vid6_indi_pane_g3

0xd746,	// (0x000330fe) vid6_indi_pane_g4_ParamLimits

0xd746,	// (0x000330fe) vid6_indi_pane_g4

0xd75b,	// (0x00033113) vid6_indi_pane_g5_ParamLimits

0xd75b,	// (0x00033113) vid6_indi_pane_g5

0x0004,

0xfae1,	// (0x00035499) vid6_indi_pane_g_ParamLimits

0xfae1,	// (0x00035499) vid6_indi_pane_g

0xd775,	// (0x0003312d) vid6_indi_pane_t1_ParamLimits

0xd775,	// (0x0003312d) vid6_indi_pane_t1

0xd78b,	// (0x00033143) vid6_indi_pane_t2_ParamLimits

0xd78b,	// (0x00033143) vid6_indi_pane_t2

0xd7b3,	// (0x0003316b) vid6_indi_pane_t3_ParamLimits

0xd7b3,	// (0x0003316b) vid6_indi_pane_t3

0xd7db,	// (0x00033193) vid6_indi_pane_t4_ParamLimits

0xd7db,	// (0x00033193) vid6_indi_pane_t4

0x0003,

0xfaec,	// (0x000354a4) vid6_indi_pane_t_ParamLimits

0xfaec,	// (0x000354a4) vid6_indi_pane_t

0xd7ff,	// (0x000331b7) wait_bar_pane_cp08

0x8b3e,	// (0x0002e4f6) main_cset_text2_pane_t1_ParamLimits

0x8b3e,	// (0x0002e4f6) main_cset_text2_pane_t1

0x8ab9,	// (0x0002e471) listscroll_gen_pane_cp06_t1_ParamLimits

0x8ab9,	// (0x0002e471) listscroll_gen_pane_cp06_t1

0xb17a,	// (0x00030b32) main_cam6_set_pane

0xccaa,	// (0x00032662) bg_tb_trans_pane_cp06_ParamLimits

0xccc0,	// (0x00032678) cam4_indicators_pane_g1_ParamLimits

0xccd1,	// (0x00032689) cam4_indicators_pane_g2_ParamLimits

0xf864,	// (0x0003521c) cam4_indicators_pane_g_ParamLimits

0xccef,	// (0x000326a7) cam4_indicators_pane_t1_ParamLimits

0xb16c,	// (0x00030b24) bg_tb_trans_pane_cp07_ParamLimits

0xcd1b,	// (0x000326d3) vid4_indicators_pane_g1_ParamLimits

0xcd2f,	// (0x000326e7) vid4_indicators_pane_g2_ParamLimits

0xcd43,	// (0x000326fb) vid4_indicators_pane_g3_ParamLimits

0xcd54,	// (0x0003270c) vid4_indicators_pane_g4_ParamLimits

0xf876,	// (0x0003522e) vid4_indicators_pane_g_ParamLimits

0xcd72,	// (0x0003272a) vid4_indicators_pane_t1_ParamLimits

0xd3e4,	// (0x00032d9c) vid4_progress_pane_g1_ParamLimits

0xd3f4,	// (0x00032dac) vid4_progress_pane_g2_ParamLimits

0x20aa,	// (0x00027a62) vid4_progress_pane_g3_ParamLimits

0xd404,	// (0x00032dbc) vid4_progress_pane_g4_ParamLimits

0xfa1d,	// (0x000353d5) vid4_progress_pane_g_ParamLimits

0x20bc,	// (0x00027a74) vid4_progress_pane_t1_ParamLimits

0xd41c,	// (0x00032dd4) vid4_progress_pane_t2_ParamLimits

0xd431,	// (0x00032de9) vid4_progress_pane_t3_ParamLimits

0xfa28,	// (0x000353e0) vid4_progress_pane_t_ParamLimits

0x20d4,	// (0x00027a8c) wait_bar_pane_cp07_ParamLimits

0x8b5b,	// (0x0002e513) main_cam6_set_pane_g2_ParamLimits

0x8b5b,	// (0x0002e513) main_cam6_set_pane_g2

0x8b7f,	// (0x0002e537) main_cset6_listscroll_pane_ParamLimits

0x8b7f,	// (0x0002e537) main_cset6_listscroll_pane

0x8b9f,	// (0x0002e557) main_cset6_slider_pane_ParamLimits

0x8b9f,	// (0x0002e557) main_cset6_slider_pane

0x8bb5,	// (0x0002e56d) main_cset6_text2_pane_ParamLimits

0x8bb5,	// (0x0002e56d) main_cset6_text2_pane

0xd80e,	// (0x000331c6) main_cset6_text_pane

0xd816,	// (0x000331ce) main_cset_list_pane_copy1_ParamLimits

0xd816,	// (0x000331ce) main_cset_list_pane_copy1

0xd826,	// (0x000331de) scroll_pane_cp028_copy1

0x8bc3,	// (0x0002e57b) cset_list_set_pane_copy1

0x8bd4,	// (0x0002e58c) aid_position_infowindow_above_copy1

0x8bdc,	// (0x0002e594) aid_position_infowindow_below_copy1

0x8be4,	// (0x0002e59c) cset_list_set_pane_g1_copy1

0x8bec,	// (0x0002e5a4) cset_list_set_pane_g3_copy1_ParamLimits

0x8bec,	// (0x0002e5a4) cset_list_set_pane_g3_copy1

0x8bfb,	// (0x0002e5b3) cset_list_set_pane_t1_copy1_ParamLimits

0x8bfb,	// (0x0002e5b3) cset_list_set_pane_t1_copy1

0x2910,	// (0x000282c8) list_highlight_pane_cp021_copy1_ParamLimits

0x2910,	// (0x000282c8) list_highlight_pane_cp021_copy1

0xd82f,	// (0x000331e7) cset6_slider_pane_ParamLimits

0xd82f,	// (0x000331e7) cset6_slider_pane

0xd85b,	// (0x00033213) main_cset6_slider_pane_g1_ParamLimits

0xd85b,	// (0x00033213) main_cset6_slider_pane_g1

0x8c10,	// (0x0002e5c8) main_cset6_slider_pane_g2_ParamLimits

0x8c10,	// (0x0002e5c8) main_cset6_slider_pane_g2

0xd883,	// (0x0003323b) main_cset6_slider_pane_g3_ParamLimits

0xd883,	// (0x0003323b) main_cset6_slider_pane_g3

0x8c38,	// (0x0002e5f0) main_cset6_slider_pane_g4_ParamLimits

0x8c38,	// (0x0002e5f0) main_cset6_slider_pane_g4

0x8c44,	// (0x0002e5fc) main_cset6_slider_pane_g5_ParamLimits

0x8c44,	// (0x0002e5fc) main_cset6_slider_pane_g5

0xcf16,	// (0x000328ce) main_cset6_slider_pane_g7_ParamLimits

0xcf16,	// (0x000328ce) main_cset6_slider_pane_g7

0xcf22,	// (0x000328da) main_cset6_slider_pane_g8_ParamLimits

0xcf22,	// (0x000328da) main_cset6_slider_pane_g8

0x7e2a,	// (0x0002d7e2) main_cset6_slider_pane_g9_ParamLimits

0x7e2a,	// (0x0002d7e2) main_cset6_slider_pane_g9

0x7e36,	// (0x0002d7ee) main_cset6_slider_pane_g10_ParamLimits

0x7e36,	// (0x0002d7ee) main_cset6_slider_pane_g10

0x7e42,	// (0x0002d7fa) main_cset6_slider_pane_g11_ParamLimits

0x7e42,	// (0x0002d7fa) main_cset6_slider_pane_g11

0x7e4e,	// (0x0002d806) main_cset6_slider_pane_g12_ParamLimits

0x7e4e,	// (0x0002d806) main_cset6_slider_pane_g12

0x7e5a,	// (0x0002d812) main_cset6_slider_pane_g13_ParamLimits

0x7e5a,	// (0x0002d812) main_cset6_slider_pane_g13

0x7e66,	// (0x0002d81e) main_cset6_slider_pane_g14_ParamLimits

0x7e66,	// (0x0002d81e) main_cset6_slider_pane_g14

0x8c50,	// (0x0002e608) main_cset6_slider_pane_g15_ParamLimits

0x8c50,	// (0x0002e608) main_cset6_slider_pane_g15

0x7e8a,	// (0x0002d842) main_cset6_slider_pane_g16_ParamLimits

0x7e8a,	// (0x0002d842) main_cset6_slider_pane_g16

0x7e96,	// (0x0002d84e) main_cset6_slider_pane_g17_ParamLimits

0x7e96,	// (0x0002d84e) main_cset6_slider_pane_g17

0x0011,

0xfaf5,	// (0x000354ad) main_cset6_slider_pane_g_ParamLimits

0xfaf5,	// (0x000354ad) main_cset6_slider_pane_g

0xd88f,	// (0x00033247) main_cset6_slider_pane_t1_ParamLimits

0xd88f,	// (0x00033247) main_cset6_slider_pane_t1

0x8c80,	// (0x0002e638) main_cset6_slider_pane_t2_ParamLimits

0x8c80,	// (0x0002e638) main_cset6_slider_pane_t2

0x8cab,	// (0x0002e663) main_cset6_slider_pane_t3_ParamLimits

0x8cab,	// (0x0002e663) main_cset6_slider_pane_t3

0x8cd6,	// (0x0002e68e) main_cset6_slider_pane_t4_ParamLimits

0x8cd6,	// (0x0002e68e) main_cset6_slider_pane_t4

0x8d01,	// (0x0002e6b9) main_cset6_slider_pane_t5_ParamLimits

0x8d01,	// (0x0002e6b9) main_cset6_slider_pane_t5

0xd8d0,	// (0x00033288) main_cset6_slider_pane_t7_ParamLimits

0xd8d0,	// (0x00033288) main_cset6_slider_pane_t7

0x8d2c,	// (0x0002e6e4) main_cset6_slider_pane_t8_ParamLimits

0x8d2c,	// (0x0002e6e4) main_cset6_slider_pane_t8

0x8d50,	// (0x0002e708) main_cset6_slider_pane_t9_ParamLimits

0x8d50,	// (0x0002e708) main_cset6_slider_pane_t9

0x8d74,	// (0x0002e72c) main_cset6_slider_pane_t10_ParamLimits

0x8d74,	// (0x0002e72c) main_cset6_slider_pane_t10

0x8d98,	// (0x0002e750) main_cset6_slider_pane_t11_ParamLimits

0x8d98,	// (0x0002e750) main_cset6_slider_pane_t11

0xd906,	// (0x000332be) main_cset6_slider_pane_t14_ParamLimits

0xd906,	// (0x000332be) main_cset6_slider_pane_t14

0xd93f,	// (0x000332f7) main_cset6_slider_pane_t15_ParamLimits

0xd93f,	// (0x000332f7) main_cset6_slider_pane_t15

0x000b,

0xfb1a,	// (0x000354d2) main_cset6_slider_pane_t_ParamLimits

0xfb1a,	// (0x000354d2) main_cset6_slider_pane_t

0xd978,	// (0x00033330) cset_slider_pane_g1_copy1

0xd981,	// (0x00033339) cset_slider_pane_g2_copy1

0xd98a,	// (0x00033342) cset_slider_pane_g3_copy1

0x21d9,	// (0x00027b91) bg_popup_sub_pane_cp011_copy1

0xd993,	// (0x0003334b) main_cset_text_pane_g1_copy1

0xd10b,	// (0x00032ac3) main_cset_text_pane_t1_copy1

0xd119,	// (0x00032ad1) main_cset_text_pane_t2_copy1

0xd127,	// (0x00032adf) main_cset_text_pane_t3_copy1

0xd135,	// (0x00032aed) main_cset_text_pane_t4_copy1

0xd143,	// (0x00032afb) main_cset_text_pane_t5_copy1

0xd99b,	// (0x00033353) main_cset_text_pane_t6_copy1

0xd9a9,	// (0x00033361) main_cset_text_pane_t7_copy1

0x8b3e,	// (0x0002e4f6) main_cset_text2_pane_t1_copy1

0xb16c,	// (0x00030b24) main_ncimui_pane

0x1473,	// (0x00026e2b) popup_query_ncimui_window_ParamLimits

0x1473,	// (0x00026e2b) popup_query_ncimui_window

0xc3c0,	// (0x00031d78) field_cale_ev2_pane_g4_ParamLimits

0xc3c0,	// (0x00031d78) field_cale_ev2_pane_g4

0x7874,	// (0x0002d22c) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7874,	// (0x0002d22c) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7fe,	// (0x000351b6) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7fe,	// (0x000351b6) cell_video_dialer_keypad_pane_g

0x788c,	// (0x0002d244) cell_video_dialer_keypad_pane_t1

0x21d9,	// (0x00027b91) bg_popup_window_pane_cp012

0xbb64,	// (0x0003151c) heading_pane_cp06

0xd9d5,	// (0x0003338d) ncim_query_content_pane

0x21d9,	// (0x00027b91) bg_popup_heading_pane_cp01

0xd9dd,	// (0x00033395) ncim_heading_pane_t1

0xd9eb,	// (0x000333a3) ncim_indicator_popup_pane

0xd9fd,	// (0x000333b5) ncim_query_button_pane

0xda11,	// (0x000333c9) ncim_query_content_pane_t1

0xda23,	// (0x000333db) ncim_query_content_pane_t2

0x0005,

0xfb5e,	// (0x00035516) ncim_query_content_pane_t

0xda5d,	// (0x00033415) ncim_query_list_pane

0xda6f,	// (0x00033427) ncim_query_popup_pane

0xd9eb,	// (0x000333a3) ncim_indicator_popup_pane_ParamLimits

0x8f02,	// (0x0002e8ba) ncim_query_content_pane_g1_ParamLimits

0x8f02,	// (0x0002e8ba) ncim_query_content_pane_g1

0xda11,	// (0x000333c9) ncim_query_content_pane_t1_ParamLimits

0xda23,	// (0x000333db) ncim_query_content_pane_t2_ParamLimits

0x8f0e,	// (0x0002e8c6) ncim_query_content_pane_t3_ParamLimits

0x8f0e,	// (0x0002e8c6) ncim_query_content_pane_t3

0x8f36,	// (0x0002e8ee) ncim_query_content_pane_t4_ParamLimits

0x8f36,	// (0x0002e8ee) ncim_query_content_pane_t4

0x8f5e,	// (0x0002e916) ncim_query_content_pane_t5_ParamLimits

0x8f5e,	// (0x0002e916) ncim_query_content_pane_t5

0xda35,	// (0x000333ed) ncim_query_content_pane_t6_ParamLimits

0xda35,	// (0x000333ed) ncim_query_content_pane_t6

0xfb5e,	// (0x00035516) ncim_query_content_pane_t_ParamLimits

0xda5d,	// (0x00033415) ncim_query_list_pane_ParamLimits

0xda6f,	// (0x00033427) ncim_query_popup_pane_ParamLimits

0xda83,	// (0x0003343b) wait_bar_pane_cp04

0x21d9,	// (0x00027b91) input_focus_pane_cp011

0xda8b,	// (0x00033443) ncim_query_popup_pane_t1

0xda99,	// (0x00033451) ncim_list_query_list_pane_ParamLimits

0xda99,	// (0x00033451) ncim_list_query_list_pane

0x21d9,	// (0x00027b91) bg_button_pane_cp027

0xdaa6,	// (0x0003345e) ncim_query_button_pane_g1

0x21d9,	// (0x00027b91) list_highlight_pane_cp012

0xdab0,	// (0x00033468) ncim_list_query_list_pane_g1

0xdab8,	// (0x00033470) ncim_list_query_list_pane_t1

0xcce0,	// (0x00032698) cam4_indicators_pane_g3_ParamLimits

0xcce0,	// (0x00032698) cam4_indicators_pane_g3

0xcd60,	// (0x00032718) vid4_indicators_pane_g5_ParamLimits

0xcd60,	// (0x00032718) vid4_indicators_pane_g5

0xd410,	// (0x00032dc8) vid4_progress_pane_g5_ParamLimits

0xd410,	// (0x00032dc8) vid4_progress_pane_g5

0x8ded,	// (0x0002e7a5) main_ncimui_pane_g1

0x8e56,	// (0x0002e80e) ncimui_group_query_pane_ParamLimits

0x8e56,	// (0x0002e80e) ncimui_group_query_pane

0x8e9e,	// (0x0002e856) ncimui_list_pane_ParamLimits

0x8e9e,	// (0x0002e856) ncimui_list_pane

0x8ec5,	// (0x0002e87d) ncimui_text_pane_ParamLimits

0x8ec5,	// (0x0002e87d) ncimui_text_pane

0x8f86,	// (0x0002e93e) ncimui_text_pane_t1_ParamLimits

0x8f86,	// (0x0002e93e) ncimui_text_pane_t1

0xdac6,	// (0x0003347e) ncimui_list_single_graphic_pane_ParamLimits

0xdac6,	// (0x0003347e) ncimui_list_single_graphic_pane

0x8fa4,	// (0x0002e95c) ncimui_query_pane_ParamLimits

0x8fa4,	// (0x0002e95c) ncimui_query_pane

0x21d9,	// (0x00027b91) list_highlight_pane_cp013

0xdad6,	// (0x0003348e) ncim_list_query_list_pane_t1_copy1

0xdab0,	// (0x00033468) ncim_list_single_graphic_pane_g1

0x8fb7,	// (0x0002e96f) ncim_query_button_pane_cp01

0x8fc3,	// (0x0002e97b) ncim_query_entry_pane_ParamLimits

0x8fc3,	// (0x0002e97b) ncim_query_entry_pane

0x8fd6,	// (0x0002e98e) ncimui_query_pane_g1

0x8fe2,	// (0x0002e99a) ncimui_query_pane_t1_ParamLimits

0x8fe2,	// (0x0002e99a) ncimui_query_pane_t1

0x2910,	// (0x000282c8) input_focus_pane_cp012

0xdae4,	// (0x0003349c) ncim_query_entry_pane_t1

0x2ad3,	// (0x0002848b) main_im_pane_ParamLimits

0xb16c,	// (0x00030b24) main_mobtv_pane_ParamLimits

0xb16c,	// (0x00030b24) main_mobtv_pane

0x8c68,	// (0x0002e620) main_cset6_slider_pane_g18_ParamLimits

0x8c68,	// (0x0002e620) main_cset6_slider_pane_g18

0x8c74,	// (0x0002e62c) main_cset6_slider_pane_g19_ParamLimits

0x8c74,	// (0x0002e62c) main_cset6_slider_pane_g19

0x2993,	// (0x0002834b) bg_main_mobtv_pane_ParamLimits

0x2993,	// (0x0002834b) bg_main_mobtv_pane

0x8ffb,	// (0x0002e9b3) main_mobtv_info_pane

0x9004,	// (0x0002e9bc) main_mobtv_loading_pane_ParamLimits

0x9004,	// (0x0002e9bc) main_mobtv_loading_pane

0xdaf6,	// (0x000334ae) main_mobtv_pg_channel_list_pane

0xdb00,	// (0x000334b8) main_mobtv_pg_hdr_pane

0x9011,	// (0x0002e9c9) main_mobtv_programe_curr_pane_ParamLimits

0x9011,	// (0x0002e9c9) main_mobtv_programe_curr_pane

0x901e,	// (0x0002e9d6) main_mobtv_programe_next_pane_ParamLimits

0x901e,	// (0x0002e9d6) main_mobtv_programe_next_pane

0xdb09,	// (0x000334c1) popup_mobtv_noti_window

0x3423,	// (0x00028ddb) main_tv_pg_hdr_pane_g1

0xdb11,	// (0x000334c9) main_tv_pg_hdr_pane_g2

0xdb19,	// (0x000334d1) main_tv_pg_hdr_pane_g3

0xdb21,	// (0x000334d9) main_tv_pg_hdr_pane_g4

0xdb29,	// (0x000334e1) main_tv_pg_hdr_pane_g5

0xdb33,	// (0x000334eb) main_tv_pg_hdr_pane_g6

0xdb3d,	// (0x000334f5) main_tv_pg_hdr_pane_g7

0xdb47,	// (0x000334ff) main_tv_pg_hdr_pane_g8

0xdb51,	// (0x00033509) main_tv_pg_hdr_pane_g9

0xdb5b,	// (0x00033513) main_tv_pg_hdr_pane_g10

0xdb65,	// (0x0003351d) main_tv_pg_hdr_pane_g11

0x000a,

0xfb6b,	// (0x00035523) main_tv_pg_hdr_pane_g

0xdb6f,	// (0x00033527) main_tv_pg_hdr_pane_t1

0xdb7d,	// (0x00033535) main_tv_pg_hdr_pane_t2

0xdb8b,	// (0x00033543) main_tv_pg_hdr_pane_t3

0xdb9b,	// (0x00033553) main_tv_pg_hdr_pane_t4

0xdbab,	// (0x00033563) main_tv_pg_hdr_pane_t5

0x0004,

0xfb82,	// (0x0003553a) main_tv_pg_hdr_pane_t

0xdbbb,	// (0x00033573) single_mobtv_pg_channel_pane_ParamLimits

0xdbbb,	// (0x00033573) single_mobtv_pg_channel_pane

0xdbcd,	// (0x00033585) single_mobtv_pg_channel_table_pane

0xdbd6,	// (0x0003358e) single_mobtv_pg_channel_thumb_pane

0xdbdf,	// (0x00033597) single_tv_pg_channel_pane_g1

0xdbe8,	// (0x000335a0) single_tv_pg_channel_pane_g2

0x0001,

0xfb8d,	// (0x00035545) single_tv_pg_channel_pane_g

0x2977,	// (0x0002832f) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x2977,	// (0x0002832f) bg_single_mobtv_pg_channel_thumb_pane

0xdbf1,	// (0x000335a9) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdbf1,	// (0x000335a9) single_mobtv_pg_channel_thumb_pane_g1

0xdbff,	// (0x000335b7) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdbff,	// (0x000335b7) single_mobtv_pg_channel_thumb_pane_g2

0xdc0b,	// (0x000335c3) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdc0b,	// (0x000335c3) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb92,	// (0x0003554a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb92,	// (0x0003554a) single_mobtv_pg_channel_thumb_pane_g

0xdc17,	// (0x000335cf) single_mobtv_pg_channel_thumb_pane_t1

0xdc25,	// (0x000335dd) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb99,	// (0x00035551) single_mobtv_pg_channel_thumb_pane_t

0x3423,	// (0x00028ddb) bg_single_mobtv_pg_channel_table_pane_g1

0x3423,	// (0x00028ddb) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3be,	// (0x00034d76) bg_single_mobtv_pg_channel_table_pane_g

0xdc33,	// (0x000335eb) single_mobtv_pg_channel_table_pane_t1

0xdc41,	// (0x000335f9) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb9e,	// (0x00035556) single_mobtv_pg_channel_table_pane_t

0x9033,	// (0x0002e9eb) main_mobtv_info_pane_g1_ParamLimits

0x9033,	// (0x0002e9eb) main_mobtv_info_pane_g1

0x9051,	// (0x0002ea09) main_mobtv_info_pane_t1_ParamLimits

0x9051,	// (0x0002ea09) main_mobtv_info_pane_t1

0x90c9,	// (0x0002ea81) main_mobtv_info_pane_t2_ParamLimits

0x90c9,	// (0x0002ea81) main_mobtv_info_pane_t2

0x0002,

0xfba8,	// (0x00035560) main_mobtv_info_pane_t_ParamLimits

0xfba8,	// (0x00035560) main_mobtv_info_pane_t

0x9158,	// (0x0002eb10) wait_bar_pane_cp05

0x916a,	// (0x0002eb22) main_mobtv_loading_pane_g1_ParamLimits

0x916a,	// (0x0002eb22) main_mobtv_loading_pane_g1

0x917d,	// (0x0002eb35) main_mobtv_loading_pane_g2_ParamLimits

0x917d,	// (0x0002eb35) main_mobtv_loading_pane_g2

0x9189,	// (0x0002eb41) main_mobtv_loading_pane_g3_ParamLimits

0x9189,	// (0x0002eb41) main_mobtv_loading_pane_g3

0x0002,

0xfbaf,	// (0x00035567) main_mobtv_loading_pane_g_ParamLimits

0xfbaf,	// (0x00035567) main_mobtv_loading_pane_g

0xdc4f,	// (0x00033607) main_mobtv_loading_pane_t1_ParamLimits

0xdc4f,	// (0x00033607) main_mobtv_loading_pane_t1

0xdc67,	// (0x0003361f) main_mobtv_loading_pane_t2_ParamLimits

0xdc67,	// (0x0003361f) main_mobtv_loading_pane_t2

0x0001,

0xfbb6,	// (0x0003556e) main_mobtv_loading_pane_t_ParamLimits

0xfbb6,	// (0x0003556e) main_mobtv_loading_pane_t

0x919c,	// (0x0002eb54) wait_bar_pane_cp06_ParamLimits

0x919c,	// (0x0002eb54) wait_bar_pane_cp06

0xdc8b,	// (0x00033643) main_mobtv_programe_curr_pane_t1

0xdc99,	// (0x00033651) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbbb,	// (0x00035573) main_mobtv_programe_curr_pane_t

0xdca7,	// (0x0003365f) main_mobtv_programe_next_pane_t1

0xdcb5,	// (0x0003366d) main_mobtv_programe_next_pane_t2

0xdcc3,	// (0x0003367b) main_mobtv_programe_next_pane_t3

0x0002,

0xfbc0,	// (0x00035578) main_mobtv_programe_next_pane_t

0x21d9,	// (0x00027b91) bg_popup_mobtv_noti_window_pane

0xdcd1,	// (0x00033689) popup_mobtv_noti_window_g1

0xdcd9,	// (0x00033691) popup_mobtv_noti_window_t1

0xdce7,	// (0x0003369f) popup_mobtv_noti_window_t2

0x0001,

0xfbc7,	// (0x0003557f) popup_mobtv_noti_window_t

0x3423,	// (0x00028ddb) bg_popup_mobtv_noti_window_pane_g1

0xb17a,	// (0x00030b32) sc_clock_pane

0xb17a,	// (0x00030b32) main_fs_bigclock_pane

0x88c6,	// (0x0002e27e) blid2_tripm_pane_t4_ParamLimits

0x88c6,	// (0x0002e27e) blid2_tripm_pane_t4

0x91ab,	// (0x0002eb63) sc_clock_pane_g1_ParamLimits

0x91ab,	// (0x0002eb63) sc_clock_pane_g1

0x91bd,	// (0x0002eb75) sc_clock_pane_t1_ParamLimits

0x91bd,	// (0x0002eb75) sc_clock_pane_t1

0x91df,	// (0x0002eb97) sc_clock_pane_t2_ParamLimits

0x91df,	// (0x0002eb97) sc_clock_pane_t2

0x91f7,	// (0x0002ebaf) sc_clock_pane_t3_ParamLimits

0x91f7,	// (0x0002ebaf) sc_clock_pane_t3

0x0004,

0xfbcc,	// (0x00035584) sc_clock_pane_t_ParamLimits

0xfbcc,	// (0x00035584) sc_clock_pane_t

0x9edb,	// (0x0002f893) main_fs_bigclock_indicator_pane_ParamLimits

0x9edb,	// (0x0002f893) main_fs_bigclock_indicator_pane

0x929d,	// (0x0002ec55) main_fs_bigclock_pane_g1_ParamLimits

0x929d,	// (0x0002ec55) main_fs_bigclock_pane_g1

0x9ee7,	// (0x0002f89f) main_fs_bigclock_pane_t1_ParamLimits

0x9ee7,	// (0x0002f89f) main_fs_bigclock_pane_t1

0x9ef9,	// (0x0002f8b1) main_fs_bigclock_pane_t2_ParamLimits

0x9ef9,	// (0x0002f8b1) main_fs_bigclock_pane_t2

0x9f0d,	// (0x0002f8c5) main_fs_bigclock_pane_t3_ParamLimits

0x9f0d,	// (0x0002f8c5) main_fs_bigclock_pane_t3

0x0002,

0xfd5d,	// (0x00035715) main_fs_bigclock_pane_t_ParamLimits

0xfd5d,	// (0x00035715) main_fs_bigclock_pane_t

0xe8b8,	// (0x00034270) main_fs_bigclock_indicator_pane_g1

0xda05,	// (0x000333bd) ncim_query_content_pane_g2_ParamLimits

0xda05,	// (0x000333bd) ncim_query_content_pane_g2

0x0001,

0xfb59,	// (0x00035511) ncim_query_content_pane_g_ParamLimits

0xfb59,	// (0x00035511) ncim_query_content_pane_g

0x9210,	// (0x0002ebc8) sc_clock_pane_t4_ParamLimits

0x9210,	// (0x0002ebc8) sc_clock_pane_t4

0xb16c,	// (0x00030b24) main_radioblah_pane

0xcc06,	// (0x000325be) cell_call4_button_pane_t1_copy1_ParamLimits

0xcc06,	// (0x000325be) cell_call4_button_pane_t1_copy1

0x8e05,	// (0x0002e7bd) main_ncimui_pane_t1_ParamLimits

0x8e05,	// (0x0002e7bd) main_ncimui_pane_t1

0x8e1f,	// (0x0002e7d7) main_ncimui_pane_t2_ParamLimits

0x8e1f,	// (0x0002e7d7) main_ncimui_pane_t2

0x0002,

0xfb52,	// (0x0003550a) main_ncimui_pane_t_ParamLimits

0xfb52,	// (0x0003550a) main_ncimui_pane_t

0xde2c,	// (0x000337e4) main_radioblah_anim_pane_ParamLimits

0xde2c,	// (0x000337e4) main_radioblah_anim_pane

0xde3d,	// (0x000337f5) main_radioblah_info_pane_ParamLimits

0xde3d,	// (0x000337f5) main_radioblah_info_pane

0xde51,	// (0x00033809) main_radioblah_pane_t1_ParamLimits

0xde51,	// (0x00033809) main_radioblah_pane_t1

0xde6d,	// (0x00033825) main_radioblah_pane_t2_ParamLimits

0xde6d,	// (0x00033825) main_radioblah_pane_t2

0x0003,

0xfbed,	// (0x000355a5) main_radioblah_pane_t_ParamLimits

0xfbed,	// (0x000355a5) main_radioblah_pane_t

0x92fc,	// (0x0002ecb4) main_radioblah_rocker_ctrl_pane_ParamLimits

0x92fc,	// (0x0002ecb4) main_radioblah_rocker_ctrl_pane

0xdeb5,	// (0x0003386d) main_radioblah_info_pane_t1_ParamLimits

0xdeb5,	// (0x0003386d) main_radioblah_info_pane_t1

0x9354,	// (0x0002ed0c) main_radioblah_info_pane_t2_ParamLimits

0x9354,	// (0x0002ed0c) main_radioblah_info_pane_t2

0x0003,

0xfbf6,	// (0x000355ae) main_radioblah_info_pane_t_ParamLimits

0xfbf6,	// (0x000355ae) main_radioblah_info_pane_t

0x3423,	// (0x00028ddb) main_radioblah_rocker_ctrl_pane_g1

0x9404,	// (0x0002edbc) main_radioblah_rocker_ctrl_pane_g2

0x940c,	// (0x0002edc4) main_radioblah_rocker_ctrl_pane_g3

0x9414,	// (0x0002edcc) main_radioblah_rocker_ctrl_pane_g4

0x941c,	// (0x0002edd4) main_radioblah_rocker_ctrl_pane_g5

0x9424,	// (0x0002eddc) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbff,	// (0x000355b7) main_radioblah_rocker_ctrl_pane_g

0x8b3e,	// (0x0002e4f6) main_cset_text2_pane_t1_copy1_ParamLimits

0xcc90,	// (0x00032648) cam4_image_uncrop_qvga_pane

0xcd09,	// (0x000326c1) vid4_image_uncrop_qcif_pane

0xd61b,	// (0x00032fd3) cam6_image_uncrop_qvga_pane_ParamLimits

0xd61b,	// (0x00032fd3) cam6_image_uncrop_qvga_pane

0xd6f1,	// (0x000330a9) vid6_image_uncrop_qcif_pane_ParamLimits

0xd6f1,	// (0x000330a9) vid6_image_uncrop_qcif_pane

0x21d9,	// (0x00027b91) bg_popup_preview_window_pane_cp03

0xd9b7,	// (0x0003336f) list_cset_text2_pane

0xd9bf,	// (0x00033377) main_cset6_text2_pane_g1

0xd9c7,	// (0x0003337f) main_cset6_text2_pane_t1

0x942c,	// (0x0002ede4) list_cset_text2_pane_t1_ParamLimits

0x942c,	// (0x0002ede4) list_cset_text2_pane_t1

0xb16c,	// (0x00030b24) main_radioblah_pane_ParamLimits

0x9144,	// (0x0002eafc) main_mobtv_info_pane_t3_ParamLimits

0x9144,	// (0x0002eafc) main_mobtv_info_pane_t3

0x92ea,	// (0x0002eca2) main_radioblah_pane_g1

0x9324,	// (0x0002ecdc) main_radioblah_info_pane_g1

0x93a9,	// (0x0002ed61) main_radioblah_info_pane_t3_ParamLimits

0x93a9,	// (0x0002ed61) main_radioblah_info_pane_t3

0x468c,	// (0x0002a044) highlight_cell_cale_month_pane_ParamLimits

0x468c,	// (0x0002a044) highlight_cell_cale_month_pane

0xb17a,	// (0x00030b32) main_phob_fisheye_pane

0xc435,	// (0x00031ded) scroll_pane_cp0031_ParamLimits

0xc435,	// (0x00031ded) scroll_pane_cp0031

0xd7ff,	// (0x000331b7) wait_bar_pane_cp08_ParamLimits

0x8bc3,	// (0x0002e57b) cset_list_set_pane_copy1_ParamLimits

0xdeef,	// (0x000338a7) highlight_cell_cale_month_pane_g1

0x9445,	// (0x0002edfd) highlight_cell_cale_month_pane_t1

0xd3d3,	// (0x00032d8b) list_gen_pane_cp01

0xcf01,	// (0x000328b9) scroll_pane_01

0x9453,	// (0x0002ee0b) list_single_double_fisheye_pane

0x945c,	// (0x0002ee14) list_double_fisheye_pane_g1_ParamLimits

0x945c,	// (0x0002ee14) list_double_fisheye_pane_g1

0x9468,	// (0x0002ee20) list_double_fisheye_pane_g2_ParamLimits

0x9468,	// (0x0002ee20) list_double_fisheye_pane_g2

0x947c,	// (0x0002ee34) list_double_fisheye_pane_g3_ParamLimits

0x947c,	// (0x0002ee34) list_double_fisheye_pane_g3

0x0004,

0xfc0c,	// (0x000355c4) list_double_fisheye_pane_g_ParamLimits

0xfc0c,	// (0x000355c4) list_double_fisheye_pane_g

0x94a5,	// (0x0002ee5d) list_double_fisheye_pane_t1_ParamLimits

0x94a5,	// (0x0002ee5d) list_double_fisheye_pane_t1

0x94c0,	// (0x0002ee78) list_double_fisheye_pane_t2_ParamLimits

0x94c0,	// (0x0002ee78) list_double_fisheye_pane_t2

0x0001,

0xfc17,	// (0x000355cf) list_double_fisheye_pane_t_ParamLimits

0xfc17,	// (0x000355cf) list_double_fisheye_pane_t

0xb17a,	// (0x00030b32) main_call5_pane

0x923b,	// (0x0002ebf3) sc_swipe_pane_ParamLimits

0x923b,	// (0x0002ebf3) sc_swipe_pane

0x94f5,	// (0x0002eead) call5_image_pane_ParamLimits

0x94f5,	// (0x0002eead) call5_image_pane

0x9512,	// (0x0002eeca) call5_swipe_1_pane_ParamLimits

0x9512,	// (0x0002eeca) call5_swipe_1_pane

0x9525,	// (0x0002eedd) call5_swipe_2_pane_ParamLimits

0x9525,	// (0x0002eedd) call5_swipe_2_pane

0x9550,	// (0x0002ef08) popup_call5_audio_first_window_ParamLimits

0x9550,	// (0x0002ef08) popup_call5_audio_first_window

0x2977,	// (0x0002832f) call5_swipe_1_pane_g1_ParamLimits

0x2977,	// (0x0002832f) call5_swipe_1_pane_g1

0xdef7,	// (0x000338af) call5_swipe_1_pane_g2_ParamLimits

0xdef7,	// (0x000338af) call5_swipe_1_pane_g2

0x0001,

0xfc1c,	// (0x000355d4) call5_swipe_1_pane_g_ParamLimits

0xfc1c,	// (0x000355d4) call5_swipe_1_pane_g

0xdf03,	// (0x000338bb) call5_swipe_1_pane_t1_ParamLimits

0xdf03,	// (0x000338bb) call5_swipe_1_pane_t1

0x2977,	// (0x0002832f) call5_swipe_2_pane_g1_ParamLimits

0x2977,	// (0x0002832f) call5_swipe_2_pane_g1

0xdf18,	// (0x000338d0) call5_swipe_2_pane_g2_ParamLimits

0xdf18,	// (0x000338d0) call5_swipe_2_pane_g2

0x0001,

0xfc21,	// (0x000355d9) call5_swipe_2_pane_g_ParamLimits

0xfc21,	// (0x000355d9) call5_swipe_2_pane_g

0xdf24,	// (0x000338dc) call5_swipe_2_pane_t1_ParamLimits

0xdf24,	// (0x000338dc) call5_swipe_2_pane_t1

0xdf39,	// (0x000338f1) sc_swipe_pane_g1_ParamLimits

0xdf39,	// (0x000338f1) sc_swipe_pane_g1

0xdf46,	// (0x000338fe) sc_swipe_pane_g2_ParamLimits

0xdf46,	// (0x000338fe) sc_swipe_pane_g2

0x0001,

0xfc26,	// (0x000355de) sc_swipe_pane_g_ParamLimits

0xfc26,	// (0x000355de) sc_swipe_pane_g

0xdf52,	// (0x0003390a) sc_swipe_pane_t1_ParamLimits

0xdf52,	// (0x0003390a) sc_swipe_pane_t1

0xb17a,	// (0x00030b32) main_cmail_launcher_pane

0x9561,	// (0x0002ef19) aid_size_cell_cmail_l_ParamLimits

0x9561,	// (0x0002ef19) aid_size_cell_cmail_l

0x956f,	// (0x0002ef27) grid_cmail_l_pane_ParamLimits

0x956f,	// (0x0002ef27) grid_cmail_l_pane

0x9589,	// (0x0002ef41) cell_cmail_l_pane_ParamLimits

0x9589,	// (0x0002ef41) cell_cmail_l_pane

0xdf67,	// (0x0003391f) cell_cmail_l_pane_g1_ParamLimits

0xdf67,	// (0x0003391f) cell_cmail_l_pane_g1

0xdf73,	// (0x0003392b) cell_cmail_l_pane_t1_ParamLimits

0xdf73,	// (0x0003392b) cell_cmail_l_pane_t1

0xdf89,	// (0x00033941) cell_cmail_l_pane_t2_ParamLimits

0xdf89,	// (0x00033941) cell_cmail_l_pane_t2

0x0001,

0xfc2b,	// (0x000355e3) cell_cmail_l_pane_t_ParamLimits

0xfc2b,	// (0x000355e3) cell_cmail_l_pane_t

0x2910,	// (0x000282c8) grid_highlight_pane_cp018_ParamLimits

0x2910,	// (0x000282c8) grid_highlight_pane_cp018

0x0dd5,	// (0x0002678d) main2_pane_ParamLimits

0x0dd5,	// (0x0002678d) main2_pane

0x2c4b,	// (0x00028603) popup_sp_fs_action_menu_bg_pane_g1

0x2c53,	// (0x0002860b) popup_sp_fs_action_menu_bg_pane_g2

0x2c5b,	// (0x00028613) popup_sp_fs_action_menu_bg_pane_g3

0x2c63,	// (0x0002861b) popup_sp_fs_action_menu_bg_pane_g4

0x2c6b,	// (0x00028623) popup_sp_fs_action_menu_bg_pane_g5

0x2c73,	// (0x0002862b) popup_sp_fs_action_menu_bg_pane_g6

0x2c7b,	// (0x00028633) popup_sp_fs_action_menu_bg_pane_g7

0x2c83,	// (0x0002863b) popup_sp_fs_action_menu_bg_pane_g8

0x2c8b,	// (0x00028643) popup_sp_fs_action_menu_bg_pane_g9

0x2c93,	// (0x0002864b) popup_sp_fs_action_menu_bg_pane_g10

0x2c93,	// (0x0002864b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf12b,	// (0x00034ae3) popup_sp_fs_action_menu_bg_pane_g

0x2977,	// (0x0002832f) list_medium_line_x2_t3_g3_g1_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x2_t3_g3_g1

0x2977,	// (0x0002832f) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x2_t3_g3_g2

0x2977,	// (0x0002832f) list_medium_line_x2_t3_g3_g3_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1d9,	// (0x00034b91) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1d9,	// (0x00034b91) list_medium_line_x2_t3_g3_g

0x329f,	// (0x00028c57) list_medium_line_x2_t3_g3_t1_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_x2_t3_g3_t1

0x329f,	// (0x00028c57) list_medium_line_x2_t3_g3_t2_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_x2_t3_g3_t2

0x329f,	// (0x00028c57) list_medium_line_x2_t3_g3_t3_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1e0,	// (0x00034b98) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1e0,	// (0x00034b98) list_medium_line_x2_t3_g3_t

0x2977,	// (0x0002832f) list_medium_line_x2_t3_g2_g1_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x2_t3_g2_g1

0x2977,	// (0x0002832f) list_medium_line_x2_t3_g2_g2_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1e7,	// (0x00034b9f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1e7,	// (0x00034b9f) list_medium_line_x2_t3_g2_g

0x329f,	// (0x00028c57) list_medium_line_x2_t3_g2_t1_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_x2_t3_g2_t1

0x329f,	// (0x00028c57) list_medium_line_x2_t3_g2_t2_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_x2_t3_g2_t2

0x329f,	// (0x00028c57) list_medium_line_x2_t3_g2_t3_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1e0,	// (0x00034b98) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1e0,	// (0x00034b98) list_medium_line_x2_t3_g2_t

0x2977,	// (0x0002832f) list_medium_line_x2_t4_g4_g1_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x2_t4_g4_g1

0x2977,	// (0x0002832f) list_medium_line_x2_t4_g4_g2_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x2_t4_g4_g2

0x2977,	// (0x0002832f) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x2_t4_g4_g3

0x2977,	// (0x0002832f) list_medium_line_x2_t4_g4_g4_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1ec,	// (0x00034ba4) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1ec,	// (0x00034ba4) list_medium_line_x2_t4_g4_g

0x329f,	// (0x00028c57) list_medium_line_x2_t4_g4_t1_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_x2_t4_g4_t1

0x329f,	// (0x00028c57) list_medium_line_x2_t4_g4_t2_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_x2_t4_g4_t2

0x329f,	// (0x00028c57) list_medium_line_x2_t4_g4_t3_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_x2_t4_g4_t3

0x329f,	// (0x00028c57) list_medium_line_x2_t4_g4_t4_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1f5,	// (0x00034bad) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1f5,	// (0x00034bad) list_medium_line_x2_t4_g4_t

0x2977,	// (0x0002832f) list_medium_line_x2_t2_g4_g1_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x2_t2_g4_g1

0x2977,	// (0x0002832f) list_medium_line_x2_t2_g4_g2_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x2_t2_g4_g2

0x2977,	// (0x0002832f) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x2_t2_g4_g3

0x2977,	// (0x0002832f) list_medium_line_x2_t2_g4_g4_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1ec,	// (0x00034ba4) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1ec,	// (0x00034ba4) list_medium_line_x2_t2_g4_g

0x329f,	// (0x00028c57) list_medium_line_x2_t2_g4_t1_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_x2_t2_g4_t1

0x329f,	// (0x00028c57) list_medium_line_x2_t2_g4_t2_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1bc,	// (0x00034b74) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1bc,	// (0x00034b74) list_medium_line_x2_t2_g4_t

0x2977,	// (0x0002832f) list_medium_line_x2_t2_g3_g1_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x2_t2_g3_g1

0x2977,	// (0x0002832f) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x2_t2_g3_g2

0x2977,	// (0x0002832f) list_medium_line_x2_t2_g3_g3_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1d9,	// (0x00034b91) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1d9,	// (0x00034b91) list_medium_line_x2_t2_g3_g

0x329f,	// (0x00028c57) list_medium_line_x2_t2_g3_t1_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_x2_t2_g3_t1

0x329f,	// (0x00028c57) list_medium_line_x2_t2_g3_t2_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1bc,	// (0x00034b74) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1bc,	// (0x00034b74) list_medium_line_x2_t2_g3_t

0x49f1,	// (0x0002a3a9) main_sp_fs_list_pane_ParamLimits

0x49f1,	// (0x0002a3a9) main_sp_fs_list_pane

0xb24a,	// (0x00030c02) sp_fs_scroll_pane_ParamLimits

0xb24a,	// (0x00030c02) sp_fs_scroll_pane

0x49fd,	// (0x0002a3b5) list_medium_line_x2_t3_t1

0x49fd,	// (0x0002a3b5) list_medium_line_x2_t3_t2

0x49fd,	// (0x0002a3b5) list_medium_line_x2_t3_t3

0x0002,

0xf2a2,	// (0x00034c5a) list_medium_line_x2_t3_t

0x49fd,	// (0x0002a3b5) list_medium_line_x3_t4_t1

0x49fd,	// (0x0002a3b5) list_medium_line_x3_t4_t2

0x49fd,	// (0x0002a3b5) list_medium_line_x3_t4_t3

0x49fd,	// (0x0002a3b5) list_medium_line_x3_t4_t4

0x0003,

0xf2a9,	// (0x00034c61) list_medium_line_x3_t4_t

0x49fd,	// (0x0002a3b5) list_medium_line_x4_t5_t1

0x49fd,	// (0x0002a3b5) list_medium_line_x4_t5_t2

0x49fd,	// (0x0002a3b5) list_medium_line_x4_t5_t3

0x49fd,	// (0x0002a3b5) list_medium_line_x4_t5_t4

0x49fd,	// (0x0002a3b5) list_medium_line_x4_t5_t5

0x0004,

0xf2b2,	// (0x00034c6a) list_medium_line_x4_t5_t

0x2977,	// (0x0002832f) list_medium_line_t4_g4_g1_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_t4_g4_g1

0x2977,	// (0x0002832f) list_medium_line_t4_g4_g2_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_t4_g4_g2

0x2977,	// (0x0002832f) list_medium_line_t4_g4_g3_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_t4_g4_g3

0x2977,	// (0x0002832f) list_medium_line_t4_g4_g4_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_t4_g4_g4

0x0003,

0xf1ec,	// (0x00034ba4) list_medium_line_t4_g4_g_ParamLimits

0xf1ec,	// (0x00034ba4) list_medium_line_t4_g4_g

0x329f,	// (0x00028c57) list_medium_line_t4_g4_t1_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_t4_g4_t1

0x329f,	// (0x00028c57) list_medium_line_t4_g4_t2_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_t4_g4_t2

0x329f,	// (0x00028c57) list_medium_line_t4_g4_t3_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_t4_g4_t3

0x329f,	// (0x00028c57) list_medium_line_t4_g4_t4_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_t4_g4_t4

0x0003,

0xf1f5,	// (0x00034bad) list_medium_line_t4_g4_t_ParamLimits

0xf1f5,	// (0x00034bad) list_medium_line_t4_g4_t

0x4d12,	// (0x0002a6ca) chi_dic_find_pane_g1

0x123d,	// (0x00026bf5) main_tport_pane

0x49fd,	// (0x0002a3b5) list_medium_line_plain_t1

0x2977,	// (0x0002832f) list_medium_line_t2_g2_g1_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_t2_g2_g1

0x2977,	// (0x0002832f) list_medium_line_t2_g2_g2_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_t2_g2_g2

0x0001,

0xf1e7,	// (0x00034b9f) list_medium_line_t2_g2_g_ParamLimits

0xf1e7,	// (0x00034b9f) list_medium_line_t2_g2_g

0x329f,	// (0x00028c57) list_medium_line_t2_g2_t1_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_t2_g2_t1

0x329f,	// (0x00028c57) list_medium_line_t2_g2_t2_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_t2_g2_t2

0x0001,

0xf1bc,	// (0x00034b74) list_medium_line_t2_g2_t_ParamLimits

0xf1bc,	// (0x00034b74) list_medium_line_t2_g2_t

0xd446,	// (0x00032dfe) aid_sp_fs_list_icon_a_sm

0xd44e,	// (0x00032e06) aid_sp_fs_list_icon_d

0xd456,	// (0x00032e0e) aid_sp_fs_text_primary

0xd45f,	// (0x00032e17) aid_sp_fs_text_secondary

0x21d9,	// (0x00027b91) list_medium_line

0x21d9,	// (0x00027b91) list_medium_line_g2

0x21d9,	// (0x00027b91) list_medium_line_g3

0x21d9,	// (0x00027b91) list_medium_line_plain

0x21d9,	// (0x00027b91) list_medium_line_plain_t2

0x21d9,	// (0x00027b91) list_medium_line_plain_t3

0x21d9,	// (0x00027b91) list_medium_line_right_icon

0x21d9,	// (0x00027b91) list_medium_line_right_iconx2

0x21d9,	// (0x00027b91) list_medium_line_t2

0x21d9,	// (0x00027b91) list_medium_line_t2_g2

0x21d9,	// (0x00027b91) list_medium_line_t2_g3

0x21d9,	// (0x00027b91) list_medium_line_t2_right_icon

0x21d9,	// (0x00027b91) list_medium_line_t2_right_iconx2

0x21d9,	// (0x00027b91) list_medium_line_t3

0x21d9,	// (0x00027b91) list_medium_line_t3_g2

0x21d9,	// (0x00027b91) list_medium_line_t3_g3

0x21d9,	// (0x00027b91) list_medium_line_t3_right_iconx2

0x21d9,	// (0x00027b91) list_medium_line_t4_g4

0x21d9,	// (0x00027b91) list_medium_line_x2

0x21d9,	// (0x00027b91) list_medium_line_x2_t2_g2

0x21d9,	// (0x00027b91) list_medium_line_x2_t2_g3

0x21d9,	// (0x00027b91) list_medium_line_x2_t2_g4

0x21d9,	// (0x00027b91) list_medium_line_x2_t3

0x21d9,	// (0x00027b91) list_medium_line_x2_t3_g2

0x21d9,	// (0x00027b91) list_medium_line_x2_t3_g3

0x21d9,	// (0x00027b91) list_medium_line_x2_t3_g4

0x21d9,	// (0x00027b91) list_medium_line_x2_t4_g2

0x21d9,	// (0x00027b91) list_medium_line_x2_t4_g4

0x21d9,	// (0x00027b91) list_medium_line_x3

0x21d9,	// (0x00027b91) list_medium_line_x3_t4

0x21d9,	// (0x00027b91) list_medium_line_x3_t4_g4

0x21d9,	// (0x00027b91) list_medium_line_x4_t4

0x21d9,	// (0x00027b91) list_medium_line_x4_t4_g7

0x21d9,	// (0x00027b91) list_medium_line_x4_t5

0x86b6,	// (0x0002e06e) list_single_fs_dyc_pane_ParamLimits

0x86b6,	// (0x0002e06e) list_single_fs_dyc_pane

0x2977,	// (0x0002832f) list_medium_line_x4_t4_g7_g1_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x4_t4_g7_g1

0x2977,	// (0x0002832f) list_medium_line_x4_t4_g7_g2_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x4_t4_g7_g2

0x2977,	// (0x0002832f) list_medium_line_x4_t4_g7_g3_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x4_t4_g7_g3

0x2977,	// (0x0002832f) list_medium_line_x4_t4_g7_g4_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x4_t4_g7_g4

0x2977,	// (0x0002832f) list_medium_line_x4_t4_g7_g5_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x4_t4_g7_g5

0x2977,	// (0x0002832f) list_medium_line_x4_t4_g7_g6_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x4_t4_g7_g6

0x2985,	// (0x0002833d) list_medium_line_x4_t4_g7_g7_ParamLimits

0x2985,	// (0x0002833d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb33,	// (0x000354eb) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb33,	// (0x000354eb) list_medium_line_x4_t4_g7_g

0x329f,	// (0x00028c57) list_medium_line_x4_t4_g7_t1_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_x4_t4_g7_t1

0x329f,	// (0x00028c57) list_medium_line_x4_t4_g7_t2_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_x4_t4_g7_t2

0x329f,	// (0x00028c57) list_medium_line_x4_t4_g7_t3_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_x4_t4_g7_t3

0x527d,	// (0x0002ac35) list_medium_line_x4_t4_g7_t4_ParamLimits

0x527d,	// (0x0002ac35) list_medium_line_x4_t4_g7_t4

0x527d,	// (0x0002ac35) list_medium_line_x4_t4_g7_t5_ParamLimits

0x527d,	// (0x0002ac35) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb42,	// (0x000354fa) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb42,	// (0x000354fa) list_medium_line_x4_t4_g7_t

0x8dbc,	// (0x0002e774) list_single_dyc_row_pane_ParamLimits

0x8dbc,	// (0x0002e774) list_single_dyc_row_pane

0x94e2,	// (0x0002ee9a) call5_gesture_pane_ParamLimits

0x94e2,	// (0x0002ee9a) call5_gesture_pane

0x9538,	// (0x0002eef0) call5_windows_pane_ParamLimits

0x9538,	// (0x0002eef0) call5_windows_pane

0x95a3,	// (0x0002ef5b) call5_swipe_1_pane_cp_ParamLimits

0x95a3,	// (0x0002ef5b) call5_swipe_1_pane_cp

0x95af,	// (0x0002ef67) call5_swipe_2_pane_cp_ParamLimits

0x95af,	// (0x0002ef67) call5_swipe_2_pane_cp

0x3236,	// (0x00028bee) call5_image_pane_cp

0x95bb,	// (0x0002ef73) popup_call5_audio_first_window_cp_ParamLimits

0x95bb,	// (0x0002ef73) popup_call5_audio_first_window_cp

0xdf39,	// (0x000338f1) call5_swipe_1_pane_g1_cp_ParamLimits

0xdf39,	// (0x000338f1) call5_swipe_1_pane_g1_cp

0xdfa6,	// (0x0003395e) call5_swipe_1_pane_g2_cp

0xdf52,	// (0x0003390a) call5_swipe_1_pane_t1_cp_ParamLimits

0xdf52,	// (0x0003390a) call5_swipe_1_pane_t1_cp

0xdf39,	// (0x000338f1) call5_swipe_2_pane_g1_cp_ParamLimits

0xdf39,	// (0x000338f1) call5_swipe_2_pane_g1_cp

0xdfae,	// (0x00033966) call5_swipe_2_pane_g2_cp

0xdfb6,	// (0x0003396e) call5_swipe_2_pane_t1_cp_ParamLimits

0xdfb6,	// (0x0003396e) call5_swipe_2_pane_t1_cp

0x2910,	// (0x000282c8) main_sp_fs_email_pane

0xdfcb,	// (0x00033983) main_sp_fs_listscroll_pane_te

0xdfd4,	// (0x0003398c) popup_sp_fs_action_menu_pane_ParamLimits

0xdfd4,	// (0x0003398c) popup_sp_fs_action_menu_pane

0x3423,	// (0x00028ddb) bg_sp_fs_ctrlbar_pane_g1

0xe018,	// (0x000339d0) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe021,	// (0x000339d9) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe02a,	// (0x000339e2) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x3423,	// (0x00028ddb) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc30,	// (0x000355e8) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbf22,	// (0x000318da) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbf22,	// (0x000318da) bg_sp_fs_ctrlbar_ddmenu_pane

0xe033,	// (0x000339eb) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe033,	// (0x000339eb) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe03f,	// (0x000339f7) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe03f,	// (0x000339f7) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc39,	// (0x000355f1) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc39,	// (0x000355f1) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe04b,	// (0x00033a03) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe04b,	// (0x00033a03) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x3423,	// (0x00028ddb) list_medium_line_t2_right_icon_g1

0x49fd,	// (0x0002a3b5) list_medium_line_t2_right_icon_t1

0x49fd,	// (0x0002a3b5) list_medium_line_t2_right_icon_t2

0x0001,

0xfc3e,	// (0x000355f6) list_medium_line_t2_right_icon_t

0x5291,	// (0x0002ac49) bg_sp_fs_ctrlbar_pane_ParamLimits

0x5291,	// (0x0002ac49) bg_sp_fs_ctrlbar_pane

0x9611,	// (0x0002efc9) main_sp_fs_ctrlbar_button_pane_cp01

0x961b,	// (0x0002efd3) main_sp_fs_ctrlbar_ddmenu_pane

0xe09d,	// (0x00033a55) main_sp_fs_ctrlbar_pane_g1

0xe0a9,	// (0x00033a61) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc43,	// (0x000355fb) main_sp_fs_ctrlbar_pane_g

0x9659,	// (0x0002f011) main_sp_fs_ctrlbar_pane_t1

0x9698,	// (0x0002f050) main_sp_fs_ctrlbar_pane

0x96bc,	// (0x0002f074) main_sp_fs_listscroll_pane_te_cp01

0x96dc,	// (0x0002f094) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x96dc,	// (0x0002f094) popup_sp_fs_action_menu_pane_cp01

0x2910,	// (0x000282c8) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x2910,	// (0x000282c8) bg_sp_fs_highlight_list_pane_cp01

0xe0d0,	// (0x00033a88) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe0d0,	// (0x00033a88) sp_fs_action_menu_list_gene_pane_g1

0xe0df,	// (0x00033a97) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe0df,	// (0x00033a97) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc51,	// (0x00035609) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc51,	// (0x00035609) sp_fs_action_menu_list_gene_pane_g

0xe0ec,	// (0x00033aa4) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe0ec,	// (0x00033aa4) sp_fs_action_menu_list_gene_pane_t1

0xe104,	// (0x00033abc) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe104,	// (0x00033abc) sp_fs_action_menu_list_gene_pane

0xe123,	// (0x00033adb) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe123,	// (0x00033adb) popup_sp_fs_action_menu_bg_pane

0xe131,	// (0x00033ae9) sp_fs_action_menu_list_pane_ParamLimits

0xe131,	// (0x00033ae9) sp_fs_action_menu_list_pane

0xe151,	// (0x00033b09) sp_fs_scroll_pane_cp01_ParamLimits

0xe151,	// (0x00033b09) sp_fs_scroll_pane_cp01

0x49fd,	// (0x0002a3b5) list_medium_line_plain_t2_t1

0x49fd,	// (0x0002a3b5) list_medium_line_plain_t2_t2

0x0001,

0xfc3e,	// (0x000355f6) list_medium_line_plain_t2_t

0x49fd,	// (0x0002a3b5) list_medium_line_plain_t3_t1

0x49fd,	// (0x0002a3b5) list_medium_line_plain_t3_t2

0x49fd,	// (0x0002a3b5) list_medium_line_plain_t3_t3

0x0002,

0xf2a2,	// (0x00034c5a) list_medium_line_plain_t3_t

0x2977,	// (0x0002832f) list_medium_line_x2_t2_g2_g1_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x2_t2_g2_g1

0x2977,	// (0x0002832f) list_medium_line_x2_t2_g2_g2_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1e7,	// (0x00034b9f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1e7,	// (0x00034b9f) list_medium_line_x2_t2_g2_g

0x329f,	// (0x00028c57) list_medium_line_x2_t2_g2_t1_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_x2_t2_g2_t1

0x329f,	// (0x00028c57) list_medium_line_x2_t2_g2_t2_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1bc,	// (0x00034b74) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1bc,	// (0x00034b74) list_medium_line_x2_t2_g2_t

0x2977,	// (0x0002832f) list_medium_line_x2_t4_g2_g1_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x2_t4_g2_g1

0x2977,	// (0x0002832f) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1e7,	// (0x00034b9f) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1e7,	// (0x00034b9f) list_medium_line_x2_t4_g2_g

0x329f,	// (0x00028c57) list_medium_line_x2_t4_g2_t1_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_x2_t4_g2_t1

0x329f,	// (0x00028c57) list_medium_line_x2_t4_g2_t2_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_x2_t4_g2_t2

0x329f,	// (0x00028c57) list_medium_line_x2_t4_g2_t3_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_x2_t4_g2_t3

0x329f,	// (0x00028c57) list_medium_line_x2_t4_g2_t4_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1f5,	// (0x00034bad) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1f5,	// (0x00034bad) list_medium_line_x2_t4_g2_t

0x3423,	// (0x00028ddb) list_medium_line_t3_right_iconx2_g1

0x3423,	// (0x00028ddb) list_medium_line_t3_right_iconx2_g2

0x3423,	// (0x00028ddb) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3c3,	// (0x00034d7b) list_medium_line_t3_right_iconx2_g

0x49fd,	// (0x0002a3b5) list_medium_line_t3_right_iconx2_t1

0x49fd,	// (0x0002a3b5) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc3e,	// (0x000355f6) list_medium_line_t3_right_iconx2_t

0x2977,	// (0x0002832f) list_medium_line_x3_t4_g4_g1_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x3_t4_g4_g1

0x2977,	// (0x0002832f) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x3_t4_g4_g2

0x2977,	// (0x0002832f) list_medium_line_x3_t4_g4_g3_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x3_t4_g4_g3

0x2977,	// (0x0002832f) list_medium_line_x3_t4_g4_g4_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1ec,	// (0x00034ba4) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1ec,	// (0x00034ba4) list_medium_line_x3_t4_g4_g

0x329f,	// (0x00028c57) list_medium_line_x3_t4_g4_t1_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_x3_t4_g4_t1

0x329f,	// (0x00028c57) list_medium_line_x3_t4_g4_t2_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_x3_t4_g4_t2

0x329f,	// (0x00028c57) list_medium_line_x3_t4_g4_t3_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_x3_t4_g4_t3

0x329f,	// (0x00028c57) list_medium_line_x3_t4_g4_t4_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1f5,	// (0x00034bad) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1f5,	// (0x00034bad) list_medium_line_x3_t4_g4_t

0x9701,	// (0x0002f0b9) list_single_dyc_row_text_pane_t1_ParamLimits

0x9701,	// (0x0002f0b9) list_single_dyc_row_text_pane_t1

0x974a,	// (0x0002f102) list_single_dyc_row_text_pane_t2_ParamLimits

0x974a,	// (0x0002f102) list_single_dyc_row_text_pane_t2

0xe177,	// (0x00033b2f) list_single_dyc_row_text_pane_t3_ParamLimits

0xe177,	// (0x00033b2f) list_single_dyc_row_text_pane_t3

0x0005,

0xfc56,	// (0x0003560e) list_single_dyc_row_text_pane_t_ParamLimits

0xfc56,	// (0x0003560e) list_single_dyc_row_text_pane_t

0xe19b,	// (0x00033b53) list_single_dyc_row_pane_g1_ParamLimits

0xe19b,	// (0x00033b53) list_single_dyc_row_pane_g1

0xe1a7,	// (0x00033b5f) list_single_dyc_row_pane_g2_ParamLimits

0xe1a7,	// (0x00033b5f) list_single_dyc_row_pane_g2

0xe1b3,	// (0x00033b6b) list_single_dyc_row_pane_g3_ParamLimits

0xe1b3,	// (0x00033b6b) list_single_dyc_row_pane_g3

0xe1bf,	// (0x00033b77) list_single_dyc_row_pane_g4_ParamLimits

0xe1bf,	// (0x00033b77) list_single_dyc_row_pane_g4

0x0003,

0xfc63,	// (0x0003561b) list_single_dyc_row_pane_g_ParamLimits

0xfc63,	// (0x0003561b) list_single_dyc_row_pane_g

0xe1cb,	// (0x00033b83) list_single_dyc_row_text_pane_ParamLimits

0xe1cb,	// (0x00033b83) list_single_dyc_row_text_pane

0x21d9,	// (0x00027b91) bg_sp_fs_scroll_pane

0xe1ea,	// (0x00033ba2) thumb_sp_fs_scroll_pane

0x2977,	// (0x0002832f) list_medium_line_g1_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_g1

0x329f,	// (0x00028c57) list_medium_line_t1_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_t1

0x2977,	// (0x0002832f) list_medium_line_x2_g1_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x2_g1

0x2977,	// (0x0002832f) list_medium_line_x2_g2_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x2_g2

0x0001,

0xf1e7,	// (0x00034b9f) list_medium_line_x2_g_ParamLimits

0xf1e7,	// (0x00034b9f) list_medium_line_x2_g

0x329f,	// (0x00028c57) list_medium_line_x2_t1_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_x2_t1

0x2977,	// (0x0002832f) list_medium_line_x3_g1_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x3_g1

0xccaa,	// (0x00032662) list_medium_line_x3_g2_ParamLimits

0xccaa,	// (0x00032662) list_medium_line_x3_g2

0x0001,

0xfc6c,	// (0x00035624) list_medium_line_x3_g_ParamLimits

0xfc6c,	// (0x00035624) list_medium_line_x3_g

0xe1f3,	// (0x00033bab) list_medium_line_x3_t1_ParamLimits

0xe1f3,	// (0x00033bab) list_medium_line_x3_t1

0xe207,	// (0x00033bbf) thumb_sp_fs_scroll_pane_g1

0xe210,	// (0x00033bc8) thumb_sp_fs_scroll_pane_g2

0xe219,	// (0x00033bd1) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc71,	// (0x00035629) thumb_sp_fs_scroll_pane_g

0xe207,	// (0x00033bbf) bg_sp_fs_scroll_pane_g1

0xe210,	// (0x00033bc8) bg_sp_fs_scroll_pane_g2

0xe219,	// (0x00033bd1) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc71,	// (0x00035629) bg_sp_fs_scroll_pane_g

0x2977,	// (0x0002832f) list_medium_line_x2_t3_g4_g1_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x2_t3_g4_g1

0x2977,	// (0x0002832f) list_medium_line_x2_t3_g4_g2_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x2_t3_g4_g2

0x2977,	// (0x0002832f) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x2_t3_g4_g3

0x2977,	// (0x0002832f) list_medium_line_x2_t3_g4_g4_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1ec,	// (0x00034ba4) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1ec,	// (0x00034ba4) list_medium_line_x2_t3_g4_g

0x329f,	// (0x00028c57) list_medium_line_x2_t3_g4_t1_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_x2_t3_g4_t1

0x329f,	// (0x00028c57) list_medium_line_x2_t3_g4_t2_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_x2_t3_g4_t2

0x329f,	// (0x00028c57) list_medium_line_x2_t3_g4_t3_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1e0,	// (0x00034b98) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1e0,	// (0x00034b98) list_medium_line_x2_t3_g4_t

0x2977,	// (0x0002832f) list_medium_line_g2_g1_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_g2_g1

0x2977,	// (0x0002832f) list_medium_line_g2_g2_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_g2_g2

0x0001,

0xf1e7,	// (0x00034b9f) list_medium_line_g2_g_ParamLimits

0xf1e7,	// (0x00034b9f) list_medium_line_g2_g

0x329f,	// (0x00028c57) list_medium_line_g2_t1_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_g2_t1

0x2977,	// (0x0002832f) list_medium_line_t3_g2_g1_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_t3_g2_g1

0x2977,	// (0x0002832f) list_medium_line_t3_g2_g2_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_t3_g2_g2

0x0001,

0xf1e7,	// (0x00034b9f) list_medium_line_t3_g2_g_ParamLimits

0xf1e7,	// (0x00034b9f) list_medium_line_t3_g2_g

0x329f,	// (0x00028c57) list_medium_line_t3_g2_t1_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_t3_g2_t1

0x329f,	// (0x00028c57) list_medium_line_t3_g2_t2_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_t3_g2_t2

0x329f,	// (0x00028c57) list_medium_line_t3_g2_t3_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_t3_g2_t3

0x0002,

0xf1e0,	// (0x00034b98) list_medium_line_t3_g2_t_ParamLimits

0xf1e0,	// (0x00034b98) list_medium_line_t3_g2_t

0x3423,	// (0x00028ddb) list_medium_line_right_icon_g1

0x49fd,	// (0x0002a3b5) list_medium_line_right_icon_t1

0x2977,	// (0x0002832f) list_medium_line_t2_g1_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_t2_g1

0x329f,	// (0x00028c57) list_medium_line_t2_t1_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_t2_t1

0x329f,	// (0x00028c57) list_medium_line_t2_t2_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_t2_t2

0x0001,

0xf1bc,	// (0x00034b74) list_medium_line_t2_t_ParamLimits

0xf1bc,	// (0x00034b74) list_medium_line_t2_t

0x2977,	// (0x0002832f) list_medium_line_t3_g1_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_t3_g1

0x329f,	// (0x00028c57) list_medium_line_t3_t1_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_t3_t1

0x329f,	// (0x00028c57) list_medium_line_t3_t2_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_t3_t2

0x329f,	// (0x00028c57) list_medium_line_t3_t3_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_t3_t3

0x0002,

0xf1e0,	// (0x00034b98) list_medium_line_t3_t_ParamLimits

0xf1e0,	// (0x00034b98) list_medium_line_t3_t

0x2977,	// (0x0002832f) list_medium_line_g3_g1_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_g3_g1

0x2977,	// (0x0002832f) list_medium_line_g3_g2_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_g3_g2

0x2977,	// (0x0002832f) list_medium_line_g3_g3_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_g3_g3

0x0002,

0xf1d9,	// (0x00034b91) list_medium_line_g3_g_ParamLimits

0xf1d9,	// (0x00034b91) list_medium_line_g3_g

0x329f,	// (0x00028c57) list_medium_line_g3_t1_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_g3_t1

0x2977,	// (0x0002832f) list_medium_line_t2_g3_g1_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_t2_g3_g1

0x2977,	// (0x0002832f) list_medium_line_t2_g3_g2_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_t2_g3_g2

0x2977,	// (0x0002832f) list_medium_line_t2_g3_g3_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_t2_g3_g3

0x0002,

0xf1d9,	// (0x00034b91) list_medium_line_t2_g3_g_ParamLimits

0xf1d9,	// (0x00034b91) list_medium_line_t2_g3_g

0x329f,	// (0x00028c57) list_medium_line_t2_g3_t1_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_t2_g3_t1

0x329f,	// (0x00028c57) list_medium_line_t2_g3_t2_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_t2_g3_t2

0x0001,

0xf1bc,	// (0x00034b74) list_medium_line_t2_g3_t_ParamLimits

0xf1bc,	// (0x00034b74) list_medium_line_t2_g3_t

0x2977,	// (0x0002832f) list_medium_line_t3_g3_g1_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_t3_g3_g1

0x2977,	// (0x0002832f) list_medium_line_t3_g3_g2_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_t3_g3_g2

0x2977,	// (0x0002832f) list_medium_line_t3_g3_g3_ParamLimits

0x2977,	// (0x0002832f) list_medium_line_t3_g3_g3

0x0002,

0xf1d9,	// (0x00034b91) list_medium_line_t3_g3_g_ParamLimits

0xf1d9,	// (0x00034b91) list_medium_line_t3_g3_g

0x329f,	// (0x00028c57) list_medium_line_t3_g3_t1_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_t3_g3_t1

0x329f,	// (0x00028c57) list_medium_line_t3_g3_t2_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_t3_g3_t2

0x329f,	// (0x00028c57) list_medium_line_t3_g3_t3_ParamLimits

0x329f,	// (0x00028c57) list_medium_line_t3_g3_t3

0x0002,

0xf1e0,	// (0x00034b98) list_medium_line_t3_g3_t_ParamLimits

0xf1e0,	// (0x00034b98) list_medium_line_t3_g3_t

0x3423,	// (0x00028ddb) list_medium_line_right_iconx2_g1

0x3423,	// (0x00028ddb) list_medium_line_right_iconx2_g2

0x0001,

0xf3be,	// (0x00034d76) list_medium_line_right_iconx2_g

0x49fd,	// (0x0002a3b5) list_medium_line_right_iconx2_t1

0x3423,	// (0x00028ddb) list_medium_line_t2_right_iconx2_g1

0x3423,	// (0x00028ddb) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3be,	// (0x00034d76) list_medium_line_t2_right_iconx2_g

0x49fd,	// (0x0002a3b5) list_medium_line_t2_right_iconx2_t1

0x49fd,	// (0x0002a3b5) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc3e,	// (0x000355f6) list_medium_line_t2_right_iconx2_t

0x49fd,	// (0x0002a3b5) list_medium_line_x4_t4_t1

0x49fd,	// (0x0002a3b5) list_medium_line_x4_t4_t2

0x49fd,	// (0x0002a3b5) list_medium_line_x4_t4_t3

0x49fd,	// (0x0002a3b5) list_medium_line_x4_t4_t4

0x0003,

0xf2a9,	// (0x00034c61) list_medium_line_x4_t4_t

0x98c2,	// (0x0002f27a) tport_appsw_pane_ParamLimits

0x98c2,	// (0x0002f27a) tport_appsw_pane

0x98da,	// (0x0002f292) tport_contact_pane_ParamLimits

0x98da,	// (0x0002f292) tport_contact_pane

0x98f2,	// (0x0002f2aa) tport_listscroll_pane_ParamLimits

0x98f2,	// (0x0002f2aa) tport_listscroll_pane

0x990c,	// (0x0002f2c4) cell_tport_appsw_pane_ParamLimits

0x990c,	// (0x0002f2c4) cell_tport_appsw_pane

0x525b,	// (0x0002ac13) tport_appsw_pane_g1_ParamLimits

0x525b,	// (0x0002ac13) tport_appsw_pane_g1

0xe222,	// (0x00033bda) tport_contact_pane_g1

0xda8b,	// (0x00033443) tport_contact_pane_t1

0xe22b,	// (0x00033be3) tport_contact_pane_t2

0x0001,

0xfc78,	// (0x00035630) tport_contact_pane_t

0xe239,	// (0x00033bf1) list_tport_pane

0xe242,	// (0x00033bfa) scroll_pane_cp_030

0x9954,	// (0x0002f30c) cell_tport_appsw_pane_g1

0x9964,	// (0x0002f31c) cell_tport_appsw_pane_t1

0x9972,	// (0x0002f32a) grid_highlight_pane_cp019

0x997a,	// (0x0002f332) list_tport_double_graphic_pane_ParamLimits

0x997a,	// (0x0002f332) list_tport_double_graphic_pane

0x2910,	// (0x000282c8) list_highlight_pane_cp023_ParamLimits

0x2910,	// (0x000282c8) list_highlight_pane_cp023

0x9987,	// (0x0002f33f) list_tport_double_graphic_pane_g1_ParamLimits

0x9987,	// (0x0002f33f) list_tport_double_graphic_pane_g1

0x9994,	// (0x0002f34c) list_tport_double_graphic_pane_t1_ParamLimits

0x9994,	// (0x0002f34c) list_tport_double_graphic_pane_t1

0x99a9,	// (0x0002f361) list_tport_double_graphic_pane_t2_ParamLimits

0x99a9,	// (0x0002f361) list_tport_double_graphic_pane_t2

0x0001,

0xfc84,	// (0x0003563c) list_tport_double_graphic_pane_t_ParamLimits

0xfc84,	// (0x0003563c) list_tport_double_graphic_pane_t

0x21d9,	// (0x00027b91) main_cale_note_pane

0x1e06,	// (0x000277be) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1e06,	// (0x000277be) cell_vitu2_function_top_wide_pane_cp01

0x9158,	// (0x0002eb10) wait_bar_pane_cp05_ParamLimits

0x2910,	// (0x000282c8) listscroll_cmail_pane

0xe24b,	// (0x00033c03) list_cmail_pane

0x99bb,	// (0x0002f373) list_cmail_body_pane

0x99d0,	// (0x0002f388) list_single_cmail_header_caption_pane

0x99e6,	// (0x0002f39e) list_single_cmail_header_detail_pane_ParamLimits

0x99e6,	// (0x0002f39e) list_single_cmail_header_detail_pane

0xe25b,	// (0x00033c13) list_single_cmail_header_caption_pane_t1

0x9a0f,	// (0x0002f3c7) list_single_cmail_header_detail_pane_g1_ParamLimits

0x9a0f,	// (0x0002f3c7) list_single_cmail_header_detail_pane_g1

0xe272,	// (0x00033c2a) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe272,	// (0x00033c2a) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc89,	// (0x00035641) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc89,	// (0x00035641) list_single_cmail_header_detail_pane_g

0xe28b,	// (0x00033c43) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe28b,	// (0x00033c43) list_single_cmail_header_detail_pane_t1

0xe2eb,	// (0x00033ca3) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe2eb,	// (0x00033ca3) list_single_cmail_header_editor_pane_bg

0xdbe8,	// (0x000335a0) list_cmail_body_pane_g1

0xe302,	// (0x00033cba) list_cmail_body_pane_t1

0xcde7,	// (0x0003279f) list_single_cmail_header_editor_pane_bg_g1

0x3af5,	// (0x000294ad) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcdf7,	// (0x000327af) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcdef,	// (0x000327a7) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd09c,	// (0x00032a54) list_single_cmail_header_editor_pane_bg_g1_copy4

0xce17,	// (0x000327cf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xce07,	// (0x000327bf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xce0f,	// (0x000327c7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3ad5,	// (0x0002948d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9a27,	// (0x0002f3df) calenote_gesture_pane_ParamLimits

0x9a27,	// (0x0002f3df) calenote_gesture_pane

0x9a47,	// (0x0002f3ff) calenote_window_pane_ParamLimits

0x9a47,	// (0x0002f3ff) calenote_window_pane

0xe310,	// (0x00033cc8) popup_note_window_cp01

0x9a63,	// (0x0002f41b) calenote_swipe_1_pane_ParamLimits

0x9a63,	// (0x0002f41b) calenote_swipe_1_pane

0x95af,	// (0x0002ef67) calenote_swipe_2_pane_ParamLimits

0x95af,	// (0x0002ef67) calenote_swipe_2_pane

0xdf39,	// (0x000338f1) calenote_swipe_1_pane_g1_ParamLimits

0xdf39,	// (0x000338f1) calenote_swipe_1_pane_g1

0xdf46,	// (0x000338fe) calenote_swipe_1_pane_g2_ParamLimits

0xdf46,	// (0x000338fe) calenote_swipe_1_pane_g2

0x0001,

0xfc26,	// (0x000355de) calenote_swipe_1_pane_g_ParamLimits

0xfc26,	// (0x000355de) calenote_swipe_1_pane_g

0xe322,	// (0x00033cda) calenote_swipe_1_pane_t1_ParamLimits

0xe322,	// (0x00033cda) calenote_swipe_1_pane_t1

0xdf39,	// (0x000338f1) calenote_swipe_2_pane_g1_ParamLimits

0xdf39,	// (0x000338f1) calenote_swipe_2_pane_g1

0xe341,	// (0x00033cf9) calenote_swipe_2_pane_g2_ParamLimits

0xe341,	// (0x00033cf9) calenote_swipe_2_pane_g2

0x0001,

0xfc95,	// (0x0003564d) calenote_swipe_2_pane_g_ParamLimits

0xfc95,	// (0x0003564d) calenote_swipe_2_pane_g

0xe34d,	// (0x00033d05) calenote_swipe_2_pane_t1_ParamLimits

0xe34d,	// (0x00033d05) calenote_swipe_2_pane_t1

0x21d9,	// (0x00027b91) main_mup_navstr_pane

0x71d4,	// (0x0002cb8c) main_mup3_pane_t7_ParamLimits

0x71d4,	// (0x0002cb8c) main_mup3_pane_t7

0xc9a1,	// (0x00032359) main_mp4_pane_g6_ParamLimits

0xc9a1,	// (0x00032359) main_mp4_pane_g6

0xcbf4,	// (0x000325ac) main_image3_pane_t4_ParamLimits

0xcbf4,	// (0x000325ac) main_image3_pane_t4

0x9a78,	// (0x0002f430) popup_navstr_preview_pane_ParamLimits

0x9a78,	// (0x0002f430) popup_navstr_preview_pane

0x9a8c,	// (0x0002f444) scroll_navstr_pane_ParamLimits

0x9a8c,	// (0x0002f444) scroll_navstr_pane

0x21d9,	// (0x00027b91) bg_popup_preview_window_pane_cp04

0xe374,	// (0x00033d2c) popup_navstr_preview_pane_t1

0x9aa0,	// (0x0002f458) scroll_navstr_pane_g1_ParamLimits

0x9aa0,	// (0x0002f458) scroll_navstr_pane_g1

0x9ab4,	// (0x0002f46c) scroll_navstr_pane_t1_ParamLimits

0x9ab4,	// (0x0002f46c) scroll_navstr_pane_t1

0xe319,	// (0x00033cd1) bg_button_pane_cp014

0xe319,	// (0x00033cd1) bg_button_pane_cp030

0x9488,	// (0x0002ee40) list_double_fisheye_pane_g4_ParamLimits

0x9488,	// (0x0002ee40) list_double_fisheye_pane_g4

0x9494,	// (0x0002ee4c) list_double_fisheye_pane_g5_ParamLimits

0x9494,	// (0x0002ee4c) list_double_fisheye_pane_g5

0xb24a,	// (0x00030c02) sp_fs_scroll_pane_cp03

0xe09d,	// (0x00033a55) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe0a9,	// (0x00033a61) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc43,	// (0x000355fb) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x9659,	// (0x0002f011) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe253,	// (0x00033c0b) sp_fs_scroll_pane_cp02

0x2cf7,	// (0x000286af) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2cf7,	// (0x000286af) popup_sp_fs_calendar_preview_list_single_pane

0x21d9,	// (0x00027b91) main_cam6_pano_pane

0xb16c,	// (0x00030b24) main_mup3_pane_ParamLimits

0x21d9,	// (0x00027b91) main_phacti_pane

0x902b,	// (0x0002e9e3) bg_button_pane_cp11

0x9045,	// (0x0002e9fd) main_mobtv_info_pane_g2_ParamLimits

0x9045,	// (0x0002e9fd) main_mobtv_info_pane_g2

0x0001,

0xfba3,	// (0x0003555b) main_mobtv_info_pane_g_ParamLimits

0xfba3,	// (0x0003555b) main_mobtv_info_pane_g

0x9222,	// (0x0002ebda) sc_clock_pane_t5_ParamLimits

0x9222,	// (0x0002ebda) sc_clock_pane_t5

0x92ea,	// (0x0002eca2) main_radioblah_pane_g1_ParamLimits

0xde85,	// (0x0003383d) main_radioblah_pane_t3_ParamLimits

0xde85,	// (0x0003383d) main_radioblah_pane_t3

0xde9d,	// (0x00033855) main_radioblah_pane_t4_ParamLimits

0xde9d,	// (0x00033855) main_radioblah_pane_t4

0x9312,	// (0x0002ecca) main_radioblah_text_pane_ParamLimits

0x9312,	// (0x0002ecca) main_radioblah_text_pane

0x9324,	// (0x0002ecdc) main_radioblah_info_pane_g1_ParamLimits

0x93bd,	// (0x0002ed75) main_radioblah_info_pane_t4_ParamLimits

0x93bd,	// (0x0002ed75) main_radioblah_info_pane_t4

0x2910,	// (0x000282c8) main_sp_fs_calendar_pane

0x9acb,	// (0x0002f483) main_phacti_pane_g1

0x9ad3,	// (0x0002f48b) phacti_note_pane_ParamLimits

0x9ad3,	// (0x0002f48b) phacti_note_pane

0xe38b,	// (0x00033d43) phacti_term_pane_ParamLimits

0xe38b,	// (0x00033d43) phacti_term_pane

0xe3a0,	// (0x00033d58) phacti_note_pane_t1_ParamLimits

0xe3a0,	// (0x00033d58) phacti_note_pane_t1

0xe3b7,	// (0x00033d6f) phacti_term_pane_g1

0xe3bf,	// (0x00033d77) phacti_term_pane_t1_ParamLimits

0xe3bf,	// (0x00033d77) phacti_term_pane_t1

0xe3e9,	// (0x00033da1) popup_sp_fs_calendar_preview_list_single_pane_g1

0x3215,	// (0x00028bcd) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc9f,	// (0x00035657) popup_sp_fs_calendar_preview_list_single_pane_g

0xe3f1,	// (0x00033da9) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe3f1,	// (0x00033da9) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe407,	// (0x00033dbf) aid_popup_sp_fs_bg_corner_pane

0x3423,	// (0x00028ddb) popup_sp_fs_calendar_preview_bg_pane_g1

0x21d9,	// (0x00027b91) popup_sp_fs_calendar_preview_bg_pane

0xe40f,	// (0x00033dc7) popup_sp_fs_calendar_preview_list_pane

0x5291,	// (0x0002ac49) bg_main_sp_fs_cale_pane_ParamLimits

0x5291,	// (0x0002ac49) bg_main_sp_fs_cale_pane

0xe420,	// (0x00033dd8) listscroll_cale_mrui_pane_ParamLimits

0xe420,	// (0x00033dd8) listscroll_cale_mrui_pane

0xe435,	// (0x00033ded) listscroll_sp_fs_schedule_track_pane

0xe43e,	// (0x00033df6) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe43e,	// (0x00033df6) main_sp_fs_ctrlbar_pane_cp01

0xe451,	// (0x00033e09) main_sp_fs_ribbon_pane

0xe459,	// (0x00033e11) popup_sp_fs_cale_preview_window

0x9b48,	// (0x0002f500) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9b48,	// (0x0002f500) list_single_sp_fs_schedule_track_pane

0x2910,	// (0x000282c8) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x2910,	// (0x000282c8) bg_sp_fs_highlight_list_pane_cp03

0x9b5b,	// (0x0002f513) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9b5b,	// (0x0002f513) list_single_sp_fs_schedule_track_pane_g1

0x9b67,	// (0x0002f51f) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9b67,	// (0x0002f51f) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfca4,	// (0x0003565c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfca4,	// (0x0003565c) list_single_sp_fs_schedule_track_pane_g

0x9b73,	// (0x0002f52b) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9b73,	// (0x0002f52b) list_single_sp_fs_schedule_track_pane_t1

0x9b8d,	// (0x0002f545) sp_fs_schedule_track_pane_ParamLimits

0x9b8d,	// (0x0002f545) sp_fs_schedule_track_pane

0xe46b,	// (0x00033e23) sp_fs_schedule_track_pane_g1

0xe473,	// (0x00033e2b) sp_fs_schedule_track_pane_g2

0xe47b,	// (0x00033e33) sp_fs_schedule_track_pane_g3

0xe483,	// (0x00033e3b) sp_fs_schedule_track_pane_g4

0xe48b,	// (0x00033e43) sp_fs_schedule_track_pane_g5

0x0004,

0xfca9,	// (0x00035661) sp_fs_schedule_track_pane_g

0xcde7,	// (0x0003279f) bg_sp_fs_schedule_viewer_highlight_g1

0x3af5,	// (0x000294ad) bg_sp_fs_schedule_viewer_highlight_g2

0xcdef,	// (0x000327a7) bg_sp_fs_schedule_viewer_highlight_g3

0xcdf7,	// (0x000327af) bg_sp_fs_schedule_viewer_highlight_g4

0xd09c,	// (0x00032a54) bg_sp_fs_schedule_viewer_highlight_g5

0xce07,	// (0x000327bf) bg_sp_fs_schedule_viewer_highlight_g6

0xce0f,	// (0x000327c7) bg_sp_fs_schedule_viewer_highlight_g7

0xce17,	// (0x000327cf) bg_sp_fs_schedule_viewer_highlight_g8

0x3ad5,	// (0x0002948d) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcb4,	// (0x0003566c) bg_sp_fs_schedule_viewer_highlight_g

0x21d9,	// (0x00027b91) bg_main_sp_fs_ribbon_pane

0x9b9e,	// (0x0002f556) main_sp_fs_ribbon_pane_g1

0xe493,	// (0x00033e4b) main_sp_fs_ribbon_pane_t1

0x9ba7,	// (0x0002f55f) main_sp_fs_ribbon_pane_t2

0xe4a2,	// (0x00033e5a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcc7,	// (0x0003567f) main_sp_fs_ribbon_pane_t

0xe4b1,	// (0x00033e69) main_sp_fs_ribbon_scheduler_pane

0xe4b9,	// (0x00033e71) bg_main_sp_fs_ribbon_pane_g1

0xe4c2,	// (0x00033e7a) bg_main_sp_fs_ribbon_pane_g2

0xe4cb,	// (0x00033e83) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcce,	// (0x00035686) bg_main_sp_fs_ribbon_pane_g

0xe4d3,	// (0x00033e8b) main_sp_fs_ribbon_scheduler_pane_g1

0xe4dc,	// (0x00033e94) main_sp_fs_ribbon_scheduler_pane_g2

0xe4e5,	// (0x00033e9d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcd5,	// (0x0003568d) main_sp_fs_ribbon_scheduler_pane_g

0xe4ee,	// (0x00033ea6) list_cale_mrui_pane

0x9bb6,	// (0x0002f56e) sp_fs_scroll_pane_cp07_ParamLimits

0x9bb6,	// (0x0002f56e) sp_fs_scroll_pane_cp07

0x9bd2,	// (0x0002f58a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9bd2,	// (0x0002f58a) bg_sp_fs_schedule_viewer_highlight

0xe4fb,	// (0x00033eb3) list_single_sp_fs_schedule_track_pane_cp01

0xe503,	// (0x00033ebb) list_sp_fs_schedule_track_pane

0xe50b,	// (0x00033ec3) sp_fs_scroll_pane_cp06_ParamLimits

0xe50b,	// (0x00033ec3) sp_fs_scroll_pane_cp06

0x3423,	// (0x00028ddb) bgmain_sp_fs_calendar_pane_g1

0x9be2,	// (0x0002f59a) list_single_cale_mrui_pane_ParamLimits

0x9be2,	// (0x0002f59a) list_single_cale_mrui_pane

0xe51d,	// (0x00033ed5) list_single_cale_mrui_row_pane_ParamLimits

0xe51d,	// (0x00033ed5) list_single_cale_mrui_row_pane

0xe52a,	// (0x00033ee2) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe52a,	// (0x00033ee2) list_single_cale_mrui_row_pane_g1

0xe56f,	// (0x00033f27) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe56f,	// (0x00033f27) list_single_cale_mrui_row_pane_t1

0x9c02,	// (0x0002f5ba) list_single_cale_mrui_row_pane_t2_ParamLimits

0x9c02,	// (0x0002f5ba) list_single_cale_mrui_row_pane_t2

0xe581,	// (0x00033f39) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe581,	// (0x00033f39) list_single_cale_mrui_row_pane_t3

0xe5b0,	// (0x00033f68) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe5b0,	// (0x00033f68) list_single_cale_mrui_row_pane_t4

0x0003,

0xfce3,	// (0x0003569b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfce3,	// (0x0003569b) list_single_cale_mrui_row_pane_t

0x9c6a,	// (0x0002f622) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9c6a,	// (0x0002f622) list_single_cmail_header_editor_pane_bg_cp01

0x9c90,	// (0x0002f648) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9c90,	// (0x0002f648) list_single_cmail_header_editor_pane_bg_cp02

0x9cb0,	// (0x0002f668) main_radioblah_text_pane_t1_ParamLimits

0x9cb0,	// (0x0002f668) main_radioblah_text_pane_t1

0xe5df,	// (0x00033f97) cam6_indi_pane_cp01

0xe5e7,	// (0x00033f9f) cam6_mode_pane_cp01

0xe5ef,	// (0x00033fa7) cam6_pano_pane

0xe5f8,	// (0x00033fb0) cam6_zoom_pane_cp01

0xe600,	// (0x00033fb8) cam6_pano_image_pane

0xe60b,	// (0x00033fc3) cam6_pano_pane_g1

0xdbe8,	// (0x000335a0) cam6_pano_pane_g2

0xe614,	// (0x00033fcc) cam6_pano_pane_g3

0xe61d,	// (0x00033fd5) cam6_pano_pane_g4

0xc696,	// (0x0003204e) cam6_pano_pane_g5

0xe626,	// (0x00033fde) cam6_pano_pane_g6

0xe630,	// (0x00033fe8) cam6_pano_pane_g7

0xe638,	// (0x00033ff0) cam6_pano_pane_g8

0xe641,	// (0x00033ff9) cam6_pano_pane_g9

0x0008,

0xfcec,	// (0x000356a4) cam6_pano_pane_g

0x21d9,	// (0x00027b91) main_browser_tag_pane

0xe36c,	// (0x00033d24) grid_navstr_albumart_pane

0xe64c,	// (0x00034004) cell_navstr_albumart_pane_ParamLimits

0xe64c,	// (0x00034004) cell_navstr_albumart_pane

0xe66c,	// (0x00034024) cell_navstr_albumart_pane_g1

0xbaa4,	// (0x0003145c) cell_navstr_albumart_pane_g2

0xbab4,	// (0x0003146c) cell_navstr_albumart_pane_g3

0xbaac,	// (0x00031464) cell_navstr_albumart_pane_g4

0x0003,

0xfcff,	// (0x000356b7) cell_navstr_albumart_pane_g

0x9cca,	// (0x0002f682) bt_list_pane_ParamLimits

0x9cca,	// (0x0002f682) bt_list_pane

0x9cde,	// (0x0002f696) bt_list_pane_t1

0x9ced,	// (0x0002f6a5) bt_list_pane_t2

0x0001,

0xfd08,	// (0x000356c0) bt_list_pane_t

0x21d9,	// (0x00027b91) main_cale_prevew_pane

0x9cfc,	// (0x0002f6b4) popup_cale_preview_window_ParamLimits

0x9cfc,	// (0x0002f6b4) popup_cale_preview_window

0x2910,	// (0x000282c8) bg_popup_preview_window_pane_cp05_ParamLimits

0x2910,	// (0x000282c8) bg_popup_preview_window_pane_cp05

0xe674,	// (0x0003402c) list_cale_preview_pane_ParamLimits

0xe674,	// (0x0003402c) list_cale_preview_pane

0x9d17,	// (0x0002f6cf) list_double_cale_preview_pane_ParamLimits

0x9d17,	// (0x0002f6cf) list_double_cale_preview_pane

0x9d29,	// (0x0002f6e1) list_single_cale_preview_pane_ParamLimits

0x9d29,	// (0x0002f6e1) list_single_cale_preview_pane

0x9d3f,	// (0x0002f6f7) list_single_cale_preview_pane_g1

0x9d47,	// (0x0002f6ff) list_single_cale_preview_pane_t1_ParamLimits

0x9d47,	// (0x0002f6ff) list_single_cale_preview_pane_t1

0x9d5c,	// (0x0002f714) list_double_cale_preview_pane_g1

0x9d64,	// (0x0002f71c) list_double_cale_preview_pane_t1_ParamLimits

0x9d64,	// (0x0002f71c) list_double_cale_preview_pane_t1

0x9d79,	// (0x0002f731) list_double_cale_preview_pane_t2_ParamLimits

0x9d79,	// (0x0002f731) list_double_cale_preview_pane_t2

0x0001,

0xfd0d,	// (0x000356c5) list_double_cale_preview_pane_t_ParamLimits

0xfd0d,	// (0x000356c5) list_double_cale_preview_pane_t

0x21d9,	// (0x00027b91) main_ezdial_pane

0x2910,	// (0x000282c8) main_sp_fs_email_pane_ParamLimits

0x95c9,	// (0x0002ef81) cmail_ddmenu_btn01_pane_ParamLimits

0x95c9,	// (0x0002ef81) cmail_ddmenu_btn01_pane

0x95dc,	// (0x0002ef94) cmail_ddmenu_btn02_pane_ParamLimits

0x95dc,	// (0x0002ef94) cmail_ddmenu_btn02_pane

0x95ff,	// (0x0002efb7) cmail_ddmenu_btn03_pane_ParamLimits

0x95ff,	// (0x0002efb7) cmail_ddmenu_btn03_pane

0x9698,	// (0x0002f050) main_sp_fs_ctrlbar_pane_ParamLimits

0x96bc,	// (0x0002f074) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x99bb,	// (0x0002f373) list_cmail_body_pane_ParamLimits

0xe269,	// (0x00033c21) bg_button_pane_cp12

0xe27e,	// (0x00033c36) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe27e,	// (0x00033c36) list_single_cmail_header_detail_pane_g3

0xe2c7,	// (0x00033c7f) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe2c7,	// (0x00033c7f) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc90,	// (0x00035648) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc90,	// (0x00035648) list_single_cmail_header_detail_pane_t

0xe3d4,	// (0x00033d8c) phacti_term_pane_t2_ParamLimits

0xe3d4,	// (0x00033d8c) phacti_term_pane_t2

0x0001,

0xfc9a,	// (0x00035652) phacti_term_pane_t_ParamLimits

0xfc9a,	// (0x00035652) phacti_term_pane_t

0xe680,	// (0x00034038) aid_size_list_single_double

0x9d91,	// (0x0002f749) popup_ezdial_listscroll_window

0x9dad,	// (0x0002f765) popup_number_entry_window_cp01

0x3236,	// (0x00028bee) bg_popup_call_pane_cp09

0xe68c,	// (0x00034044) ezdial_list_pane

0xe694,	// (0x0003404c) scroll_pane_cp23

0x5291,	// (0x0002ac49) bg_button_pane_cp028_ParamLimits

0x5291,	// (0x0002ac49) bg_button_pane_cp028

0x9dbb,	// (0x0002f773) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9dbb,	// (0x0002f773) cmail_ddmenu_btn01_pane_g1

0x9dc7,	// (0x0002f77f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9dc7,	// (0x0002f77f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd12,	// (0x000356ca) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd12,	// (0x000356ca) cmail_ddmenu_btn01_pane_g

0xe69c,	// (0x00034054) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe69c,	// (0x00034054) cmail_ddmenu_btn01_pane_t1

0x5291,	// (0x0002ac49) bg_button_pane_cp029_ParamLimits

0x5291,	// (0x0002ac49) bg_button_pane_cp029

0x9ddb,	// (0x0002f793) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9ddb,	// (0x0002f793) cmail_ddmenu_btn02_pane_g1

0x9df3,	// (0x0002f7ab) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9df3,	// (0x0002f7ab) cmail_ddmenu_btn02_pane_t1

0x2910,	// (0x000282c8) bg_button_pane_cp031_ParamLimits

0x2910,	// (0x000282c8) bg_button_pane_cp031

0x9ddb,	// (0x0002f793) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9ddb,	// (0x0002f793) cmail_ddmenu_btn03_pane_g1

0x9df3,	// (0x0002f7ab) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9df3,	// (0x0002f7ab) cmail_ddmenu_btn03_pane_t1

0x7906,	// (0x0002d2be) cell_dialer2_keypad_pane_t1_ParamLimits

0x7920,	// (0x0002d2d8) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7920,	// (0x0002d2d8) cell_dialer2_keypad_pane_t1_copy1

0x8e4e,	// (0x0002e806) ncimui_group_button_pane

0x2910,	// (0x000282c8) main_sp_fs_calendar_pane_ParamLimits

0x99d0,	// (0x0002f388) list_single_cmail_header_caption_pane_ParamLimits

0xe417,	// (0x00033dcf) aid_recal_txt_sm_pane

0x21d9,	// (0x00027b91) mian_recal_day_pane

0xe459,	// (0x00033e11) popup_sp_fs_cale_preview_window_ParamLimits

0xe6b2,	// (0x0003406a) list_recal_day_pane

0xe6f4,	// (0x000340ac) list_single_recal_day_pane_ParamLimits

0xe6f4,	// (0x000340ac) list_single_recal_day_pane

0xe706,	// (0x000340be) list_single_recal_day_pane_g1_ParamLimits

0xe706,	// (0x000340be) list_single_recal_day_pane_g1

0xe712,	// (0x000340ca) list_single_recal_day_pane_g2_ParamLimits

0xe712,	// (0x000340ca) list_single_recal_day_pane_g2

0xe71e,	// (0x000340d6) list_single_recal_day_pane_g3_ParamLimits

0xe71e,	// (0x000340d6) list_single_recal_day_pane_g3

0x9e17,	// (0x0002f7cf) list_single_recal_day_pane_g4_ParamLimits

0x9e17,	// (0x0002f7cf) list_single_recal_day_pane_g4

0xe72a,	// (0x000340e2) list_single_recal_day_pane_g5_ParamLimits

0xe72a,	// (0x000340e2) list_single_recal_day_pane_g5

0xe736,	// (0x000340ee) list_single_recal_day_pane_g6_ParamLimits

0xe736,	// (0x000340ee) list_single_recal_day_pane_g6

0x0004,

0xfd21,	// (0x000356d9) list_single_recal_day_pane_g_ParamLimits

0xfd21,	// (0x000356d9) list_single_recal_day_pane_g

0xe74a,	// (0x00034102) list_single_recal_day_pane_t1

0xe75c,	// (0x00034114) list_single_recal_day_pane_t2

0x0001,

0xfd2c,	// (0x000356e4) list_single_recal_day_pane_t

0x9e2f,	// (0x0002f7e7) ncimui_query_button_pane_ParamLimits

0x9e2f,	// (0x0002f7e7) ncimui_query_button_pane

0x9e3f,	// (0x0002f7f7) ncimui_query_button_pane_t1_ParamLimits

0x9e3f,	// (0x0002f7f7) ncimui_query_button_pane_t1

0xe76e,	// (0x00034126) ncimui_query_button_pane_t2_ParamLimits

0xe76e,	// (0x00034126) ncimui_query_button_pane_t2

0x0001,

0xfd31,	// (0x000356e9) ncimui_query_button_pane_t_ParamLimits

0xfd31,	// (0x000356e9) ncimui_query_button_pane_t

0x9e52,	// (0x0002f80a) query_button_pane_ParamLimits

0x9e52,	// (0x0002f80a) query_button_pane

0x21d9,	// (0x00027b91) bg_button_pane_cp0028

0xe781,	// (0x00034139) query_button_pane_t1

0x123d,	// (0x00026bf5) main_tport_pane_ParamLimits

0x987f,	// (0x0002f237) bg_popup_window_pane_cp01_ParamLimits

0x987f,	// (0x0002f237) bg_popup_window_pane_cp01

0x989a,	// (0x0002f252) heading_pane_cp08_ParamLimits

0x989a,	// (0x0002f252) heading_pane_cp08

0x98ad,	// (0x0002f265) heading_pane_cp07_ParamLimits

0x98ad,	// (0x0002f265) heading_pane_cp07

0x9954,	// (0x0002f30c) cell_tport_appsw_pane_g2

0x0002,

0xfc7d,	// (0x00035635) cell_tport_appsw_pane_g

0x551f,	// (0x0002aed7) input_candi_list_open_g1

0x482b,	// (0x0002a1e3) list_cale_time_pane_g6_ParamLimits

0x482b,	// (0x0002a1e3) list_cale_time_pane_g6

0x6b7c,	// (0x0002c534) aid_size_touch_calib_1_ParamLimits

0x6b7c,	// (0x0002c534) aid_size_touch_calib_1

0x6b8e,	// (0x0002c546) aid_size_touch_calib_2_ParamLimits

0x6b8e,	// (0x0002c546) aid_size_touch_calib_2

0x6ba6,	// (0x0002c55e) aid_size_touch_calib_3_ParamLimits

0x6ba6,	// (0x0002c55e) aid_size_touch_calib_3

0x6bc4,	// (0x0002c57c) aid_size_touch_calib_4_ParamLimits

0x6bc4,	// (0x0002c57c) aid_size_touch_calib_4

0x6bdc,	// (0x0002c594) main_touch_calib_button_group_pane_ParamLimits

0x6bdc,	// (0x0002c594) main_touch_calib_button_group_pane

0x6bf4,	// (0x0002c5ac) main_touch_calib_pane_g1_ParamLimits

0x6c06,	// (0x0002c5be) main_touch_calib_pane_g2_ParamLimits

0x6c18,	// (0x0002c5d0) main_touch_calib_pane_g3_ParamLimits

0x6c2a,	// (0x0002c5e2) main_touch_calib_pane_g4_ParamLimits

0xf6bf,	// (0x00035077) main_touch_calib_pane_g_ParamLimits

0x6c3c,	// (0x0002c5f4) main_touch_calib_pane_t1_ParamLimits

0x6c56,	// (0x0002c60e) main_touch_calib_pane_t2_ParamLimits

0x6c70,	// (0x0002c628) main_touch_calib_pane_t3_ParamLimits

0x6c84,	// (0x0002c63c) main_touch_calib_pane_t4_ParamLimits

0x6c98,	// (0x0002c650) main_touch_calib_pane_t5_ParamLimits

0xf6c8,	// (0x00035080) main_touch_calib_pane_t_ParamLimits

0xc459,	// (0x00031e11) list_single_fp_cale_pane_g3_ParamLimits

0xc459,	// (0x00031e11) list_single_fp_cale_pane_g3

0xb16c,	// (0x00030b24) bg_button_pane_cp012_ParamLimits

0xb16c,	// (0x00030b24) bg_vkb2_func_pane_cp03_ParamLimits

0x200c,	// (0x000279c4) cell_vitu2_function_top_pane_g1_ParamLimits

0xb16c,	// (0x00030b24) bg_vkb2_func_pane_cp04_ParamLimits

0x8dd9,	// (0x0002e791) main_ncimui_button_group_pane_ParamLimits

0x8dd9,	// (0x0002e791) main_ncimui_button_group_pane

0x8e39,	// (0x0002e7f1) main_ncimui_pane_t3_ParamLimits

0x8e39,	// (0x0002e7f1) main_ncimui_pane_t3

0xe382,	// (0x00033d3a) phacti_button_group_pane

0xe680,	// (0x00034038) aid_size_list_single_double_ParamLimits

0x9d91,	// (0x0002f749) popup_ezdial_listscroll_window_ParamLimits

0x9dad,	// (0x0002f765) popup_number_entry_window_cp01_ParamLimits

0x9e65,	// (0x0002f81d) phacti_button_pane_ParamLimits

0x9e65,	// (0x0002f81d) phacti_button_pane

0x21d9,	// (0x00027b91) bg_button_pane_cp14

0xe78f,	// (0x00034147) phacti_button_pane_t1

0x9e76,	// (0x0002f82e) main_touch_calib_button_pane_ParamLimits

0x9e76,	// (0x0002f82e) main_touch_calib_button_pane

0x2ad3,	// (0x0002848b) bg_button_pane_cp18_ParamLimits

0x2ad3,	// (0x0002848b) bg_button_pane_cp18

0xe79d,	// (0x00034155) main_touch_calib_button_pane_t1_ParamLimits

0xe79d,	// (0x00034155) main_touch_calib_button_pane_t1

0xe7b3,	// (0x0003416b) main_touch_calib_button_pane_t2_ParamLimits

0xe7b3,	// (0x0003416b) main_touch_calib_button_pane_t2

0x0001,

0xfd36,	// (0x000356ee) main_touch_calib_button_pane_t_ParamLimits

0xfd36,	// (0x000356ee) main_touch_calib_button_pane_t

0x21d9,	// (0x00027b91) cell_ncimui_button_pane

0x21d9,	// (0x00027b91) bg_button_pane_cp032

0xe7d1,	// (0x00034189) cell_ncimui_button_pane_t1

0xcbd4,	// (0x0003258c) image3_infobar_pane_ParamLimits

0xcbd4,	// (0x0003258c) image3_infobar_pane

0x924e,	// (0x0002ec06) fs_bigclock_status_pane_ParamLimits

0x924e,	// (0x0002ec06) fs_bigclock_status_pane

0x925b,	// (0x0002ec13) main_fs_bigclock_clock_pane_ParamLimits

0x925b,	// (0x0002ec13) main_fs_bigclock_clock_pane

0x9279,	// (0x0002ec31) main_fs_bigclock_indi_pane_ParamLimits

0x9279,	// (0x0002ec31) main_fs_bigclock_indi_pane

0x92ab,	// (0x0002ec63) main_fs_bigclock_swipe_pane_ParamLimits

0x92ab,	// (0x0002ec63) main_fs_bigclock_swipe_pane

0x21d9,	// (0x00027b91) main_fs_clock_dumped_data

0xdcf5,	// (0x000336ad) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdcf5,	// (0x000336ad) list_single_fs_bigclock_indicator_pane_g1

0xdd10,	// (0x000336c8) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdd10,	// (0x000336c8) list_single_fs_bigclock_indicator_pane_g2

0xdd2a,	// (0x000336e2) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdd2a,	// (0x000336e2) list_single_fs_bigclock_indicator_pane_g3

0xdd44,	// (0x000336fc) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdd44,	// (0x000336fc) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbd7,	// (0x0003558f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbd7,	// (0x0003558f) list_single_fs_bigclock_indicator_pane_g

0xdd6f,	// (0x00033727) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdd6f,	// (0x00033727) list_single_fs_bigclock_indicator_pane_t1

0xdd97,	// (0x0003374f) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdd97,	// (0x0003374f) list_single_fs_bigclock_indicator_pane_t2

0xddbf,	// (0x00033777) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xddbf,	// (0x00033777) list_single_fs_bigclock_indicator_pane_t3

0xdde7,	// (0x0003379f) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdde7,	// (0x0003379f) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbe2,	// (0x0003559a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbe2,	// (0x0003559a) list_single_fs_bigclock_indicator_pane_t

0xe7df,	// (0x00034197) image3_infobar_fav_pane_ParamLimits

0xe7df,	// (0x00034197) image3_infobar_fav_pane

0xe7ef,	// (0x000341a7) image3_infobar_loc_pane_ParamLimits

0xe7ef,	// (0x000341a7) image3_infobar_loc_pane

0xe803,	// (0x000341bb) image3_infobar_time_pane_ParamLimits

0xe803,	// (0x000341bb) image3_infobar_time_pane

0x3423,	// (0x00028ddb) image3_infobar_time_pane_g1

0xe813,	// (0x000341cb) image3_infobar_time_pane_t1

0x3423,	// (0x00028ddb) image3_infobar_loc_pane_g1

0xe821,	// (0x000341d9) image3_infobar_loc_pane_g2

0x0001,

0xfd3b,	// (0x000356f3) image3_infobar_loc_pane_g

0xe829,	// (0x000341e1) image3_infobar_loc_pane_t1

0x3423,	// (0x00028ddb) image3_infobar_fav_pane_g1

0xe837,	// (0x000341ef) image3_infobar_fav_pane_g2

0x0001,

0xfd40,	// (0x000356f8) image3_infobar_fav_pane_g

0xe83f,	// (0x000341f7) fs_bigclock_status_battery_pane

0xe848,	// (0x00034200) fs_bigclock_status_signal_pane

0xe851,	// (0x00034209) fs_bigclock_status_title_pane

0xe85a,	// (0x00034212) fs_bigclock_status_signal_pane_g1

0xe863,	// (0x0003421b) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd45,	// (0x000356fd) fs_bigclock_status_signal_pane_g

0xe86b,	// (0x00034223) fs_bigclock_status_battery_pane_g1

0xe874,	// (0x0003422c) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd4a,	// (0x00035702) fs_bigclock_status_battery_pane_g

0xe87c,	// (0x00034234) fs_bigclock_status_title_pane_t1

0x9e8b,	// (0x0002f843) main_fs_bigclock_clock_pane_g1

0x9e8b,	// (0x0002f843) main_fs_bigclock_clock_pane_g2

0x9e9c,	// (0x0002f854) main_fs_bigclock_clock_pane_g3

0x9e9c,	// (0x0002f854) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd4f,	// (0x00035707) main_fs_bigclock_clock_pane_g

0x9eaf,	// (0x0002f867) main_fs_bigclock_clock_pane_t1

0x9ec5,	// (0x0002f87d) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd58,	// (0x00035710) main_fs_bigclock_clock_pane_t

0xe88a,	// (0x00034242) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe88a,	// (0x00034242) list_single_fs_bigclock_indicator_pane

0xe89b,	// (0x00034253) list_single_fs_bigclock_pane_ParamLimits

0xe89b,	// (0x00034253) list_single_fs_bigclock_pane

0xe8c1,	// (0x00034279) main_fs_bigclock_indicator_pane_t1

0xe8d0,	// (0x00034288) list_single_fs_bigclock_pane_g1

0xe8d8,	// (0x00034290) list_single_fs_bigclock_pane_t1

0x3423,	// (0x00028ddb) main_fs_bigclock_swipe_pane_g1

0xe91b,	// (0x000342d3) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd69,	// (0x00035721) main_fs_bigclock_swipe_pane_g

0xe923,	// (0x000342db) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe923,	// (0x000342db) main_fs_bigclock_swipe_pane_t1

0x4b1b,	// (0x0002a4d3) call_type_pane_ParamLimits

0x21d9,	// (0x00027b91) main_btmg_pane

0xe556,	// (0x00033f0e) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe556,	// (0x00033f0e) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcdc,	// (0x00035694) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcdc,	// (0x00035694) list_single_cale_mrui_row_pane_g

0xe6db,	// (0x00034093) list_recal_vselct_arw_lo_pane

0xe6e3,	// (0x0003409b) list_recal_vselct_arw_up_pane

0xe6eb,	// (0x000340a3) list_recal_vselct_pane

0x9f1f,	// (0x0002f8d7) btmg_button_pane

0x9f29,	// (0x0002f8e1) main_btmg_pane_g1

0x21d9,	// (0x00027b91) bg_button_pane_cp044

0xe940,	// (0x000342f8) btmg_button_pane_t1

0xbbf4,	// (0x000315ac) aid_listscroll_gen

0x2910,	// (0x000282c8) main_cntbar_detail_pane

0xe24b,	// (0x00033c03) list_cmail_folder_pane

0xb24a,	// (0x00030c02) sp_fs_scroll_pane_cp03_ParamLimits

0x99d0,	// (0x0002f388) list_single_fs_dyc_pane_cp01_ParamLimits

0x99d0,	// (0x0002f388) list_single_fs_dyc_pane_cp01

0xe94e,	// (0x00034306) aid_size_cmail_indent

0xe957,	// (0x0003430f) list_single_dyc_row_pane_cp01

0x9f5f,	// (0x0002f917) cntbar_detail_list_pane_ParamLimits

0x9f5f,	// (0x0002f917) cntbar_detail_list_pane

0x9fab,	// (0x0002f963) main_cntbar_detail_cont_pane_ParamLimits

0x9fab,	// (0x0002f963) main_cntbar_detail_cont_pane

0xb24a,	// (0x00030c02) scroll_pane_cp032_ParamLimits

0xb24a,	// (0x00030c02) scroll_pane_cp032

0x9fbf,	// (0x0002f977) cntbar_detail_list_event_pane_ParamLimits

0x9fbf,	// (0x0002f977) cntbar_detail_list_event_pane

0x9f6f,	// (0x0002f927) cntbar_detail_list_shct_pane

0x3b4b,	// (0x00029503) aid_list_gen

0xe960,	// (0x00034318) aid_scroll

0xe969,	// (0x00034321) aid_size_touch_scroll_bar

0x9453,	// (0x0002ee0b) aid_list_double

0xe972,	// (0x0003432a) aid_list_single

0xe972,	// (0x0003432a) aid_list_single_lg

0xe97b,	// (0x00034333) aid_list_z_g_a_sm

0xe983,	// (0x0003433b) aid_list_z_g_d

0xe98b,	// (0x00034343) aid_txt_z_prm

0x9fcf,	// (0x0002f987) aid_txt_z_prm_cp01

0x9fdd,	// (0x0002f995) aid_txt_z_sec

0x9feb,	// (0x0002f9a3) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9feb,	// (0x0002f9a3) main_cntbar_detail_cont_pane_g1

0x9fff,	// (0x0002f9b7) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9fff,	// (0x0002f9b7) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd6e,	// (0x00035726) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd6e,	// (0x00035726) main_cntbar_detail_cont_pane_g

0xe999,	// (0x00034351) main_cntbar_detail_cont_pane_t1

0xe9a7,	// (0x0003435f) main_cntbar_detail_cont_pane_t2

0xe9b5,	// (0x0003436d) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd73,	// (0x0003572b) main_cntbar_detail_cont_pane_t

0xa00f,	// (0x0002f9c7) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa00f,	// (0x0002f9c7) cell_cntbar_detail_list_shct_pane

0xe9c3,	// (0x0003437b) cntbar_detail_list_shct_pane_g1

0xe9cc,	// (0x00034384) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd7a,	// (0x00035732) cntbar_detail_list_shct_pane_g

0xa023,	// (0x0002f9db) cntbar_detail_list_event_pane_g1_ParamLimits

0xa023,	// (0x0002f9db) cntbar_detail_list_event_pane_g1

0xa02f,	// (0x0002f9e7) cntbar_detail_list_event_pane_g2_ParamLimits

0xa02f,	// (0x0002f9e7) cntbar_detail_list_event_pane_g2

0x0005,

0xfd7f,	// (0x00035737) cntbar_detail_list_event_pane_g_ParamLimits

0xfd7f,	// (0x00035737) cntbar_detail_list_event_pane_g

0xa09b,	// (0x0002fa53) cntbar_detail_list_event_pane_t1_ParamLimits

0xa09b,	// (0x0002fa53) cntbar_detail_list_event_pane_t1

0xa0b0,	// (0x0002fa68) cntbar_detail_list_event_pane_t2_ParamLimits

0xa0b0,	// (0x0002fa68) cntbar_detail_list_event_pane_t2

0x0002,

0xfd8c,	// (0x00035744) cntbar_detail_list_event_pane_t_ParamLimits

0xfd8c,	// (0x00035744) cntbar_detail_list_event_pane_t

0x3423,	// (0x00028ddb) cell_cntbar_detail_list_shct_pane_g1

0x510a,	// (0x0002aac2) navi_pane_mv_g3

0x2910,	// (0x000282c8) main_cntbar_detail_pane_ParamLimits

0x21d9,	// (0x00027b91) main_notif_wgt_pane

0xc92f,	// (0x000322e7) aid_tch_main_mp4_pane_g4

0xcb61,	// (0x00032519) popup_slider_window_cp02

0xe6d1,	// (0x00034089) list_recal_day_event_pane

0x9f33,	// (0x0002f8eb) cntbar_detail_btn_pane_ParamLimits

0x9f33,	// (0x0002f8eb) cntbar_detail_btn_pane

0x9f49,	// (0x0002f901) cntbar_detail_btn_pane_cp01_ParamLimits

0x9f49,	// (0x0002f901) cntbar_detail_btn_pane_cp01

0x9f6f,	// (0x0002f927) cntbar_detail_list_shct_pane_ParamLimits

0x9f7f,	// (0x0002f937) cntbar_detail_pane_g1_ParamLimits

0x9f7f,	// (0x0002f937) cntbar_detail_pane_g1

0x9f8f,	// (0x0002f947) cntbar_detail_pane_t1_ParamLimits

0x9f8f,	// (0x0002f947) cntbar_detail_pane_t1

0xa03b,	// (0x0002f9f3) cntbar_detail_list_event_pane_g3_ParamLimits

0xa03b,	// (0x0002f9f3) cntbar_detail_list_event_pane_g3

0xa053,	// (0x0002fa0b) cntbar_detail_list_event_pane_g4_ParamLimits

0xa053,	// (0x0002fa0b) cntbar_detail_list_event_pane_g4

0xa06b,	// (0x0002fa23) cntbar_detail_list_event_pane_g5_ParamLimits

0xa06b,	// (0x0002fa23) cntbar_detail_list_event_pane_g5

0xa083,	// (0x0002fa3b) cntbar_detail_list_event_pane_g6_ParamLimits

0xa083,	// (0x0002fa3b) cntbar_detail_list_event_pane_g6

0xa0c5,	// (0x0002fa7d) cntbar_detail_list_event_pane_t3_ParamLimits

0xa0c5,	// (0x0002fa7d) cntbar_detail_list_event_pane_t3

0xa0d7,	// (0x0002fa8f) popup_notif_wgt_window_ParamLimits

0xa0d7,	// (0x0002fa8f) popup_notif_wgt_window

0xa0f0,	// (0x0002faa8) popup_submenu_window_cp01_ParamLimits

0xa0f0,	// (0x0002faa8) popup_submenu_window_cp01

0x3236,	// (0x00028bee) bg_popup_window_pane_cp10

0xe9d5,	// (0x0003438d) listscroll_notif_wgt_pane

0xe9e7,	// (0x0003439f) list_notif_wgt_window

0xe9f0,	// (0x000343a8) scroll_pane_cp033

0xa106,	// (0x0002fabe) list_notif_wgt_row_pane_ParamLimits

0xa106,	// (0x0002fabe) list_notif_wgt_row_pane

0xe9f9,	// (0x000343b1) aid_size_list_notif_wgt_del

0xea06,	// (0x000343be) list_notif_wgt_row_pane_g1

0xea12,	// (0x000343ca) list_notif_wgt_row_pane_g2

0xea21,	// (0x000343d9) list_notif_wgt_row_pane_g3

0x0002,

0xfd93,	// (0x0003574b) list_notif_wgt_row_pane_g

0xea2e,	// (0x000343e6) list_notif_wgt_row_pane_t1

0xea44,	// (0x000343fc) list_notif_wgt_row_pane_t2

0xea56,	// (0x0003440e) list_notif_wgt_row_pane_t3

0x0002,

0xfd9a,	// (0x00035752) list_notif_wgt_row_pane_t

0xd0d6,	// (0x00032a8e) list_recal_day_event_pane_g1

0xea68,	// (0x00034420) list_recal_day_event_pane_t1

0x21d9,	// (0x00027b91) bg_button_pane_cp045

0xea77,	// (0x0003442f) cntbar_detail_btn_pane_t1

0x5291,	// (0x0002ac49) main_callh_pane_ParamLimits

0x5291,	// (0x0002ac49) main_callh_pane

0x21d9,	// (0x00027b91) main_coverflow0_pane

0x21d9,	// (0x00027b91) main_wgtman_pane

0x92c3,	// (0x0002ec7b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x92c3,	// (0x0002ec7b) main_fs_bigclock_unlock_btn_pane

0x994c,	// (0x0002f304) bg_button_pane_cp16

0x995c,	// (0x0002f314) cell_tport_appsw_pane_g3

0xa116,	// (0x0002face) cf0_flow_pane_ParamLimits

0xa116,	// (0x0002face) cf0_flow_pane

0xea85,	// (0x0003443d) listscroll_cf0_pane

0xea90,	// (0x00034448) main_cf0_pane_g1

0xa12b,	// (0x0002fae3) main_cf0_pane_t1_ParamLimits

0xa12b,	// (0x0002fae3) main_cf0_pane_t1

0xa142,	// (0x0002fafa) main_cf0_pane_t2_ParamLimits

0xa142,	// (0x0002fafa) main_cf0_pane_t2

0x0001,

0xfda6,	// (0x0003575e) main_cf0_pane_t_ParamLimits

0xfda6,	// (0x0003575e) main_cf0_pane_t

0xeaa2,	// (0x0003445a) scroll_pane_cp11

0xa159,	// (0x0002fb11) cf0_flow_pane_g1

0xa161,	// (0x0002fb19) cf0_flow_pane_g2

0x0001,

0xfdab,	// (0x00035763) cf0_flow_pane_g

0xa169,	// (0x0002fb21) cf0_flow_pane_t1

0x21d9,	// (0x00027b91) main_call6_pane

0x21d9,	// (0x00027b91) main_calllock_pane

0x2136,	// (0x00027aee) call6_btn_grp_pane_ParamLimits

0x2136,	// (0x00027aee) call6_btn_grp_pane

0x2150,	// (0x00027b08) call6_pane_g1_ParamLimits

0x2150,	// (0x00027b08) call6_pane_g1

0x2166,	// (0x00027b1e) popup_call6_1st_window_ParamLimits

0x2166,	// (0x00027b1e) popup_call6_1st_window

0x2177,	// (0x00027b2f) popup_call6_2nd_window_ParamLimits

0x2177,	// (0x00027b2f) popup_call6_2nd_window

0x2188,	// (0x00027b40) cell_call6_btn_pane_ParamLimits

0x2188,	// (0x00027b40) cell_call6_btn_pane

0x3236,	// (0x00028bee) bg_popup_call2_in_pane_cp03

0xeaad,	// (0x00034465) popup_call6_1st_window_g1

0xeab5,	// (0x0003446d) popup_call6_1st_window_g2

0xeabd,	// (0x00034475) popup_call6_1st_window_g3

0x0002,

0xfdb0,	// (0x00035768) popup_call6_1st_window_g

0xeac5,	// (0x0003447d) popup_call6_1st_window_t1

0xead4,	// (0x0003448c) popup_call6_1st_window_t2

0xeae2,	// (0x0003449a) popup_call6_1st_window_t3

0x0002,

0xfdb7,	// (0x0003576f) popup_call6_1st_window_t

0x3236,	// (0x00028bee) bg_popup_call2_in_pane_cp04

0xeaf0,	// (0x000344a8) popup_call6_2nd_window_g1

0xeaf8,	// (0x000344b0) popup_call6_2nd_window_g2

0xeb00,	// (0x000344b8) popup_call6_2nd_window_g3

0x0002,

0xfdbe,	// (0x00035776) popup_call6_2nd_window_g

0xeb08,	// (0x000344c0) popup_call6_2nd_window_t1

0xb17a,	// (0x00030b32) bg_button_pane_cp15

0xeb17,	// (0x000344cf) cell_call6_btn_pane_g1

0xeb20,	// (0x000344d8) cell_call6_btn_pane_t1

0xa177,	// (0x0002fb2f) listscroll_wgtman_pane_ParamLimits

0xa177,	// (0x0002fb2f) listscroll_wgtman_pane

0xa198,	// (0x0002fb50) wgtman_btn_pane_ParamLimits

0xa198,	// (0x0002fb50) wgtman_btn_pane

0x4d45,	// (0x0002a6fd) aid_scroll_copy1

0xeb2f,	// (0x000344e7) list_wgtman_pane

0xa1db,	// (0x0002fb93) wgtman_btn_pane_g1_ParamLimits

0xa1db,	// (0x0002fb93) wgtman_btn_pane_g1

0xa207,	// (0x0002fbbf) wgtman_btn_pane_t1_ParamLimits

0xa207,	// (0x0002fbbf) wgtman_btn_pane_t1

0xeb39,	// (0x000344f1) wgtman_btn_pane_t2_ParamLimits

0xeb39,	// (0x000344f1) wgtman_btn_pane_t2

0x0001,

0xfdc5,	// (0x0003577d) wgtman_btn_pane_t_ParamLimits

0xfdc5,	// (0x0003577d) wgtman_btn_pane_t

0xa244,	// (0x0002fbfc) listrow_wgtman_pane_ParamLimits

0xa244,	// (0x0002fbfc) listrow_wgtman_pane

0xa256,	// (0x0002fc0e) listrow_wgtman_pane_g1

0xa263,	// (0x0002fc1b) listrow_wgtman_pane_g2

0x0001,

0xfdca,	// (0x00035782) listrow_wgtman_pane_g

0xa281,	// (0x0002fc39) listrow_wgtman_pane_t1

0xa299,	// (0x0002fc51) listrow_wgtman_pane_t2

0x0001,

0xfdcf,	// (0x00035787) listrow_wgtman_pane_t

0xa2bf,	// (0x0002fc77) wait_bar_pane_cp09

0xeb50,	// (0x00034508) main_calllock_btn_pane

0xeb5a,	// (0x00034512) main_calllock_pane_g1

0x21d9,	// (0x00027b91) bg_button_pane_cp17

0xeb62,	// (0x0003451a) main_calllock_btn_pane_g1

0xeb6b,	// (0x00034523) main_calllock_btn_pane_t1

0x21d9,	// (0x00027b91) main_dialer3_pane

0x21d9,	// (0x00027b91) main_fmrd2_pane

0x3423,	// (0x00028ddb) main_fs_bigclock_unlock_btn_pane_g1

0xa2d9,	// (0x0002fc91) main_fs_bigclock_unlock_btn_pane_t1

0xa2e7,	// (0x0002fc9f) area_fmrd2_info_pane_ParamLimits

0xa2e7,	// (0x0002fc9f) area_fmrd2_info_pane

0xa2f8,	// (0x0002fcb0) area_fmrd2_visual_pane_ParamLimits

0xa2f8,	// (0x0002fcb0) area_fmrd2_visual_pane

0xa306,	// (0x0002fcbe) fmrd2_indi_pane_ParamLimits

0xa306,	// (0x0002fcbe) fmrd2_indi_pane

0xa313,	// (0x0002fccb) area_fmrd2_visual_pane_g1

0xa31b,	// (0x0002fcd3) area_fmrd2_visual_pane_t1

0xa32b,	// (0x0002fce3) area_fmrd2_visual_pane_t2

0xa33b,	// (0x0002fcf3) area_fmrd2_visual_pane_t3

0x0002,

0xfdd9,	// (0x00035791) area_fmrd2_visual_pane_t

0xa34b,	// (0x0002fd03) area_fmrd2_info_pane_g1

0xa353,	// (0x0002fd0b) area_fmrd2_info_pane_t1

0xa363,	// (0x0002fd1b) area_fmrd2_info_pane_t2

0xa373,	// (0x0002fd2b) area_fmrd2_info_pane_t3

0xa383,	// (0x0002fd3b) area_fmrd2_info_pane_t4

0x0003,

0xfde0,	// (0x00035798) area_fmrd2_info_pane_t

0xa391,	// (0x0002fd49) fmrd2_indi_pane_t1

0xa3a1,	// (0x0002fd59) fmrd2_indi_pane_t2

0xa3b1,	// (0x0002fd69) fmrd2_indi_pane_t3

0x0002,

0xfde9,	// (0x000357a1) fmrd2_indi_pane_t

0xdd53,	// (0x0003370b) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdd53,	// (0x0003370b) list_single_fs_bigclock_indicator_pane_g5

0xde04,	// (0x000337bc) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xde04,	// (0x000337bc) list_single_fs_bigclock_indicator_pane_t5

0x9ae7,	// (0x0002f49f) aid_cell_bcale_month_pane_ParamLimits

0x9ae7,	// (0x0002f49f) aid_cell_bcale_month_pane

0x9b05,	// (0x0002f4bd) bcale_month_pane_ParamLimits

0x9b05,	// (0x0002f4bd) bcale_month_pane

0x9b29,	// (0x0002f4e1) bcale_preview_pane_ParamLimits

0x9b29,	// (0x0002f4e1) bcale_preview_pane

0xe8d8,	// (0x00034290) list_single_fs_bigclock_pane_t1_ParamLimits

0xe8f7,	// (0x000342af) list_single_fs_bigclock_pane_t2_ParamLimits

0xe8f7,	// (0x000342af) list_single_fs_bigclock_pane_t2

0x0001,

0xfd64,	// (0x0003571c) list_single_fs_bigclock_pane_t_ParamLimits

0xfd64,	// (0x0003571c) list_single_fs_bigclock_pane_t

0xa2d1,	// (0x0002fc89) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdd4,	// (0x0003578c) main_fs_bigclock_unlock_btn_pane_g

0xa3c1,	// (0x0002fd79) aid_dia3_key_size_ParamLimits

0xa3c1,	// (0x0002fd79) aid_dia3_key_size

0xa3d0,	// (0x0002fd88) aid_dia3_listrow_size_ParamLimits

0xa3d0,	// (0x0002fd88) aid_dia3_listrow_size

0xa3e5,	// (0x0002fd9d) dia3_keypad_fun_pane_ParamLimits

0xa3e5,	// (0x0002fd9d) dia3_keypad_fun_pane

0xa401,	// (0x0002fdb9) dia3_keypad_num_pane_ParamLimits

0xa401,	// (0x0002fdb9) dia3_keypad_num_pane

0xa41c,	// (0x0002fdd4) dia3_listscroll_pane_ParamLimits

0xa41c,	// (0x0002fdd4) dia3_listscroll_pane

0xa42f,	// (0x0002fde7) dia3_numentry_pane_ParamLimits

0xa42f,	// (0x0002fde7) dia3_numentry_pane

0xeb7a,	// (0x00034532) dia3_list_pane

0xeb85,	// (0x0003453d) scroll_pane_cp12

0x21d9,	// (0x00027b91) bg_dia3_numentry_pane

0xa447,	// (0x0002fdff) dia3_numentry_pane_t1

0xa456,	// (0x0002fe0e) cell_dia3_key_num_pane

0xa45e,	// (0x0002fe16) cell_dia3_key0_fun_pane_ParamLimits

0xa45e,	// (0x0002fe16) cell_dia3_key0_fun_pane

0xa472,	// (0x0002fe2a) cell_dia3_key1_fun_pane_ParamLimits

0xa472,	// (0x0002fe2a) cell_dia3_key1_fun_pane

0xa48a,	// (0x0002fe42) dia3_listrow_pane

0xdaa6,	// (0x0003345e) bg_dia3_numentry_pane_g1

0x21d9,	// (0x00027b91) bg_button_pane_cp21

0xeb90,	// (0x00034548) cell_dia3_key_num_pane_t1

0xeb9e,	// (0x00034556) cell_dia3_key_num_pane_t2

0xebad,	// (0x00034565) cell_dia3_key_num_pane_t3

0xebbc,	// (0x00034574) cell_dia3_key_num_pane_t4

0x0003,

0xfdf0,	// (0x000357a8) cell_dia3_key_num_pane_t

0x21d9,	// (0x00027b91) bg_button_pane_cp19

0xa49c,	// (0x0002fe54) cell_dia3_key0_fun_pane_g1

0x21d9,	// (0x00027b91) bg_button_pane_cp20

0xa4a4,	// (0x0002fe5c) cell_dia3_key1_fun_pane_g1

0xa4ac,	// (0x0002fe64) area_left_week_number_pane

0xa4b8,	// (0x0002fe70) area_top_day_name_pane

0xa4cb,	// (0x0002fe83) frame_month_view_pane

0xebcb,	// (0x00034583) grid_month_view_pane

0xa4de,	// (0x0002fe96) cell_top_day_name_pane_ParamLimits

0xa4de,	// (0x0002fe96) cell_top_day_name_pane

0xa50b,	// (0x0002fec3) cell_area_left_week_number_pane_ParamLimits

0xa50b,	// (0x0002fec3) cell_area_left_week_number_pane

0xa51f,	// (0x0002fed7) cell_month_view_pane_ParamLimits

0xa51f,	// (0x0002fed7) cell_month_view_pane

0xebd9,	// (0x00034591) frm_month_g1

0xa54c,	// (0x0002ff04) frm_month_g2

0xa55f,	// (0x0002ff17) frm_month_g3

0xa572,	// (0x0002ff2a) frm_month_g4

0xa585,	// (0x0002ff3d) frm_month_g5

0xa598,	// (0x0002ff50) frm_month_g6

0xa5ab,	// (0x0002ff63) frm_month_g7

0xebe6,	// (0x0003459e) frm_month_g8

0xa5be,	// (0x0002ff76) frm_month_g9

0xa5ce,	// (0x0002ff86) frm_month_g10

0xa5de,	// (0x0002ff96) frm_month_g11

0xa5ee,	// (0x0002ffa6) frm_month_g12

0xa600,	// (0x0002ffb8) frm_month_g13

0xa612,	// (0x0002ffca) frm_month_g14

0xa626,	// (0x0002ffde) frm_month_g15

0xa63a,	// (0x0002fff2) frm_month_g16

0x000f,

0xfdf9,	// (0x000357b1) frm_month_g

0xebf3,	// (0x000345ab) cell_top_day_name_pane_t1

0xa64e,	// (0x00030006) cell_area_left_week_number_pane_g1

0xa65a,	// (0x00030012) cell_area_left_week_number_pane_t1

0x2977,	// (0x0002832f) cell_month_view_pane_g1

0xa66d,	// (0x00030025) cell_month_view_pane_t1

0x21d9,	// (0x00027b91) main_fps_pane

0xe065,	// (0x00033a1d) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe065,	// (0x00033a1d) cmail_ddmenu_btn02_pane_cp1

0xe081,	// (0x00033a39) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe081,	// (0x00033a39) cmail_ddmenu_btn02_pane_cp2

0x9de7,	// (0x0002f79f) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9de7,	// (0x0002f79f) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd17,	// (0x000356cf) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd17,	// (0x000356cf) cmail_ddmenu_btn02_pane_g

0x9e05,	// (0x0002f7bd) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9e05,	// (0x0002f7bd) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd1c,	// (0x000356d4) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd1c,	// (0x000356d4) cmail_ddmenu_btn02_pane_t

0xa680,	// (0x00030038) fps_text_pane_ParamLimits

0xa680,	// (0x00030038) fps_text_pane

0xa697,	// (0x0003004f) main_fps_pane_g1_ParamLimits

0xa697,	// (0x0003004f) main_fps_pane_g1

0xa6b1,	// (0x00030069) wait_bar_pane_cp010_ParamLimits

0xa6b1,	// (0x00030069) wait_bar_pane_cp010

0xa6c2,	// (0x0003007a) fps_text_pane_t1_ParamLimits

0xa6c2,	// (0x0003007a) fps_text_pane_t1

0xcc98,	// (0x00032650) cam4_image_uncrop_pane_g1

0xcca1,	// (0x00032659) cam4_image_uncrop_pane_g2

0x7a12,	// (0x0002d3ca) cam4_image_uncrop_pane_g3

0x7a1b,	// (0x0002d3d3) cam4_image_uncrop_pane_g4

0x0003,

0xf85b,	// (0x00035213) cam4_image_uncrop_pane_g

0xa48a,	// (0x0002fe42) dia3_listrow_pane_ParamLimits

0x21d9,	// (0x00027b91) main_phob2_pane

0x991d,	// (0x0002f2d5) cell_tport_appsw_pane_cp02_ParamLimits

0x991d,	// (0x0002f2d5) cell_tport_appsw_pane_cp02

0x9931,	// (0x0002f2e9) cell_tport_appsw_pane_cp03_ParamLimits

0x9931,	// (0x0002f2e9) cell_tport_appsw_pane_cp03

0x21d9,	// (0x00027b91) phob2_contact_card_pane

0x21d9,	// (0x00027b91) phob2_listscroll_pane

0xec06,	// (0x000345be) phob2_list_pane

0xec0e,	// (0x000345c6) scroll_pane_cp034

0xa6da,	// (0x00030092) phob2_cc_data_pane_ParamLimits

0xa6da,	// (0x00030092) phob2_cc_data_pane

0xa6f9,	// (0x000300b1) phob2_cc_listscroll_pane_ParamLimits

0xa6f9,	// (0x000300b1) phob2_cc_listscroll_pane

0xa244,	// (0x0002fbfc) list_double_large_graphic_phob2_pane_ParamLimits

0xa244,	// (0x0002fbfc) list_double_large_graphic_phob2_pane

0xa717,	// (0x000300cf) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa717,	// (0x000300cf) list_double_large_graphic_phob2_pane_g1

0xa724,	// (0x000300dc) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xa724,	// (0x000300dc) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe1a,	// (0x000357d2) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe1a,	// (0x000357d2) list_double_large_graphic_phob2_pane_g

0xa74a,	// (0x00030102) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xa74a,	// (0x00030102) list_double_large_graphic_phob2_pane_t1

0xa75f,	// (0x00030117) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xa75f,	// (0x00030117) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe23,	// (0x000357db) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe23,	// (0x000357db) list_double_large_graphic_phob2_pane_t

0x21d9,	// (0x00027b91) list_highlight_pane_cp024

0xec16,	// (0x000345ce) phob2_cc_button_pane

0xa774,	// (0x0003012c) phob2_cc_data_pane_g1_ParamLimits

0xa774,	// (0x0003012c) phob2_cc_data_pane_g1

0xa78b,	// (0x00030143) phob2_cc_data_pane_g2_ParamLimits

0xa78b,	// (0x00030143) phob2_cc_data_pane_g2

0x0001,

0xfe28,	// (0x000357e0) phob2_cc_data_pane_g_ParamLimits

0xfe28,	// (0x000357e0) phob2_cc_data_pane_g

0xa79d,	// (0x00030155) phob2_cc_data_pane_t1_ParamLimits

0xa79d,	// (0x00030155) phob2_cc_data_pane_t1

0xa7b5,	// (0x0003016d) phob2_cc_data_pane_t2_ParamLimits

0xa7b5,	// (0x0003016d) phob2_cc_data_pane_t2

0xa7cd,	// (0x00030185) phob2_cc_data_pane_t3_ParamLimits

0xa7cd,	// (0x00030185) phob2_cc_data_pane_t3

0x0002,

0xfe2d,	// (0x000357e5) phob2_cc_data_pane_t_ParamLimits

0xfe2d,	// (0x000357e5) phob2_cc_data_pane_t

0xec1e,	// (0x000345d6) phob2_cc_list_pane_ParamLimits

0xec1e,	// (0x000345d6) phob2_cc_list_pane

0xd16d,	// (0x00032b25) scroll_pane_cp035_ParamLimits

0xd16d,	// (0x00032b25) scroll_pane_cp035

0x2910,	// (0x000282c8) bg_button_pane_cp033

0xec2a,	// (0x000345e2) phob2_cc_button_pane_g1

0xec36,	// (0x000345ee) phob2_cc_button_pane_t1

0xec4b,	// (0x00034603) phob2_cc_button_pane_t2

0x0001,

0xfe34,	// (0x000357ec) phob2_cc_button_pane_t

0xa7e5,	// (0x0003019d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa7e5,	// (0x0003019d) list_double_large_graphic_phob2_cc_pane

0xa815,	// (0x000301cd) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa815,	// (0x000301cd) list_double_large_graphic_phob2_cc_pane_g1

0xa821,	// (0x000301d9) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa821,	// (0x000301d9) list_double_large_graphic_phob2_cc_pane_g2

0xa82d,	// (0x000301e5) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xa82d,	// (0x000301e5) list_double_large_graphic_phob2_cc_pane_g3

0xa839,	// (0x000301f1) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xa839,	// (0x000301f1) list_double_large_graphic_phob2_cc_pane_g4

0xa845,	// (0x000301fd) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xa845,	// (0x000301fd) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe39,	// (0x000357f1) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe39,	// (0x000357f1) list_double_large_graphic_phob2_cc_pane_g

0xa851,	// (0x00030209) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xa851,	// (0x00030209) list_double_large_graphic_phob2_cc_pane_t1

0xa87a,	// (0x00030232) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xa87a,	// (0x00030232) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe44,	// (0x000357fc) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe44,	// (0x000357fc) list_double_large_graphic_phob2_cc_pane_t

0xec5d,	// (0x00034615) list_highlight_pane_cp025_ParamLimits

0xec5d,	// (0x00034615) list_highlight_pane_cp025

0x2910,	// (0x000282c8) bg_button_pane_cp033_ParamLimits

0xec2a,	// (0x000345e2) phob2_cc_button_pane_g1_ParamLimits

0xec36,	// (0x000345ee) phob2_cc_button_pane_t1_ParamLimits

0xec4b,	// (0x00034603) phob2_cc_button_pane_t2_ParamLimits

0xfe34,	// (0x000357ec) phob2_cc_button_pane_t_ParamLimits

0x221c,	// (0x00027bd4) popup_wgtman_window

0xcf01,	// (0x000328b9) scroll_pane_cp038

0xa1bd,	// (0x0002fb75) wgtman_btn_pane_cp_01_ParamLimits

0xa1bd,	// (0x0002fb75) wgtman_btn_pane_cp_01

0xec6b,	// (0x00034623) wgtman_content_pane

0xec74,	// (0x0003462c) wgtman_heading_pane

0x21d9,	// (0x00027b91) bg_heading_pane_cp02

0xec7d,	// (0x00034635) wgtman_heading_pane_g1

0xec85,	// (0x0003463d) wgtman_heading_pane_t1

0xec93,	// (0x0003464b) scroll_pane_cp036

0xec9b,	// (0x00034653) wgtman_list_pane

0xeca3,	// (0x0003465b) wgtman_list_pane_t1_ParamLimits

0xeca3,	// (0x0003465b) wgtman_list_pane_t1

0xcc84,	// (0x0003263c) cam4_grid_pane

0x8207,	// (0x0002dbbf) bg_button_pane_cp015_ParamLimits

0x8218,	// (0x0002dbd0) bg_button_pane_cp016_ParamLimits

0x8224,	// (0x0002dbdc) bg_button_pane_cp017_ParamLimits

0x8278,	// (0x0002dc30) popup_vitu2_query_window_g3_ParamLimits

0x8278,	// (0x0002dc30) popup_vitu2_query_window_g3

0x8319,	// (0x0002dcd1) popup_vitu2_query_window_t6_ParamLimits

0x8319,	// (0x0002dcd1) popup_vitu2_query_window_t6

0x8344,	// (0x0002dcfc) popup_vitu2_query_window_t7_ParamLimits

0x8344,	// (0x0002dcfc) popup_vitu2_query_window_t7

0xcc98,	// (0x00032650) cam4_grid_pane_g1

0xcca1,	// (0x00032659) cam4_grid_pane_g2

0xecbd,	// (0x00034675) cam4_grid_pane_g3

0xecc6,	// (0x0003467e) cam4_grid_pane_g4

0x0003,

0xfe49,	// (0x00035801) cam4_grid_pane_g

0x3545,	// (0x00028efd) aid_placing_vt_slider_lsc_ParamLimits

0x38a0,	// (0x00029258) vidtel_button_pane_ParamLimits

0x38a0,	// (0x00029258) vidtel_button_pane

0x21d9,	// (0x00027b91) bg_button_pane_cp034

0xecd1,	// (0x00034689) vidtel_button_pane_g1

0xecd9,	// (0x00034691) vidtel_button_pane_t1

0xd078,	// (0x00032a30) aid_size_vtel_slider_touch

0xd16d,	// (0x00032b25) scroll_pane_cp039

0x8fb7,	// (0x0002e96f) ncim_query_button_pane_cp01_ParamLimits

0x8fd6,	// (0x0002e98e) ncimui_query_pane_g1_ParamLimits

0x2910,	// (0x000282c8) input_focus_pane_cp012_ParamLimits

0xdae4,	// (0x0003349c) ncim_query_entry_pane_t1_ParamLimits

0xd16d,	// (0x00032b25) scroll_pane_cp039_ParamLimits

0x4ff5,	// (0x0002a9ad) navi_pane_bcale_mc_g1

0x4ffd,	// (0x0002a9b5) navi_pane_bcale_mc_t1

0xe0b5,	// (0x00033a6d) main_sp_fs_email_pane_g1

0xe0c1,	// (0x00033a79) main_sp_fs_email_pane_g2

0x0001,

0xfc4c,	// (0x00035604) main_sp_fs_email_pane_g

0xe562,	// (0x00033f1a) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe562,	// (0x00033f1a) list_single_cale_mrui_row_pane_g3

0x9e25,	// (0x0002f7dd) list_single_recal_day_pane_g5_event_pane

0xe742,	// (0x000340fa) list_single_recal_day_pane_g7

0xecef,	// (0x000346a7) list_recal_day_event_pane_cp01

0xecf8,	// (0x000346b0) list_recal_vselct_arw_lo_pane_cp01

0xed00,	// (0x000346b8) list_recal_vselct_arw_up_pane_cp01

0xed08,	// (0x000346c0) list_recal_vselct_pane_cp01

0xd0d6,	// (0x00032a8e) list_recal_day_event_pane_cp01_g1

0xed12,	// (0x000346ca) list_recal_day_event_pane_cp01_t1

0xe74a,	// (0x00034102) list_single_recal_day_pane_t1_ParamLimits

0xe75c,	// (0x00034114) list_single_recal_day_pane_t2_ParamLimits

0xfd2c,	// (0x000356e4) list_single_recal_day_pane_t_ParamLimits

0x28ee,	// (0x000282a6) bg_notes_pane_ParamLimits

0x2a9d,	// (0x00028455) list_notes_pane_ParamLimits

0x2aab,	// (0x00028463) scroll_pane_cp06_ParamLimits

0x2ad3,	// (0x0002848b) main_notes_pane_ParamLimits

0x2910,	// (0x000282c8) main_welc_pane

0xa8d2,	// (0x0003028a) main_welc_body_pane_ParamLimits

0xa8d2,	// (0x0003028a) main_welc_body_pane

0xa8f0,	// (0x000302a8) main_welc_opti_pane_ParamLimits

0xa8f0,	// (0x000302a8) main_welc_opti_pane

0xa96b,	// (0x00030323) main_welc_pane_t1_ParamLimits

0xa96b,	// (0x00030323) main_welc_pane_t1

0xab4f,	// (0x00030507) main_welc_body_row_pane_ParamLimits

0xab4f,	// (0x00030507) main_welc_body_row_pane

0x2969,	// (0x00028321) main_welc_opti_row_pane_ParamLimits

0x2969,	// (0x00028321) main_welc_opti_row_pane

0xed30,	// (0x000346e8) main_welc_opti_row_pane_g1

0xab63,	// (0x0003051b) main_welc_opti_row_pane_t1

0xed38,	// (0x000346f0) main_welc_body_row_pane_t1

0xe9df,	// (0x00034397) popup_notif_wgt_heading_pane

0xe9f9,	// (0x000343b1) aid_size_list_notif_wgt_del_ParamLimits

0xea06,	// (0x000343be) list_notif_wgt_row_pane_g1_ParamLimits

0xea12,	// (0x000343ca) list_notif_wgt_row_pane_g2_ParamLimits

0xea21,	// (0x000343d9) list_notif_wgt_row_pane_g3_ParamLimits

0xfd93,	// (0x0003574b) list_notif_wgt_row_pane_g_ParamLimits

0xea2e,	// (0x000343e6) list_notif_wgt_row_pane_t1_ParamLimits

0xea44,	// (0x000343fc) list_notif_wgt_row_pane_t2_ParamLimits

0xea56,	// (0x0003440e) list_notif_wgt_row_pane_t3_ParamLimits

0xfd9a,	// (0x00035752) list_notif_wgt_row_pane_t_ParamLimits

0xa256,	// (0x0002fc0e) listrow_wgtman_pane_g1_ParamLimits

0xa263,	// (0x0002fc1b) listrow_wgtman_pane_g2_ParamLimits

0xfdca,	// (0x00035782) listrow_wgtman_pane_g_ParamLimits

0xa281,	// (0x0002fc39) listrow_wgtman_pane_t1_ParamLimits

0xa299,	// (0x0002fc51) listrow_wgtman_pane_t2_ParamLimits

0xfdcf,	// (0x00035787) listrow_wgtman_pane_t_ParamLimits

0xa2bf,	// (0x0002fc77) wait_bar_pane_cp09_ParamLimits

0x21d9,	// (0x00027b91) bg_popup_heading_pane_cp02

0xed47,	// (0x000346ff) popup_notif_wgt_heading_pane_g1

0xed4f,	// (0x00034707) popup_notif_wgt_heading_pane_t1

0x21d9,	// (0x00027b91) main_vids_pane

0x21d9,	// (0x00027b91) vids_listscroll_pane

0xab72,	// (0x0003052a) scroll_pane_cp040

0x21d9,	// (0x00027b91) vids_list_pane

0xab7d,	// (0x00030535) vids_list_double_pane_ParamLimits

0xab7d,	// (0x00030535) vids_list_double_pane

0xab8e,	// (0x00030546) vids_list_double_pane_g1

0xab97,	// (0x0003054f) vids_list_double_pane_t1

0xaba7,	// (0x0003055f) vids_list_double_pane_t2

0x0001,

0xfe68,	// (0x00035820) vids_list_double_pane_t

0xb16c,	// (0x00030b24) main_ncimui_pane_ParamLimits

0x8ded,	// (0x0002e7a5) main_ncimui_pane_g1_ParamLimits

0x8df9,	// (0x0002e7b1) main_ncimui_pane_g2_ParamLimits

0x8df9,	// (0x0002e7b1) main_ncimui_pane_g2

0x0001,

0xfb4d,	// (0x00035505) main_ncimui_pane_g_ParamLimits

0xfb4d,	// (0x00035505) main_ncimui_pane_g

0xa90b,	// (0x000302c3) main_welc_pane_g1_ParamLimits

0xa90b,	// (0x000302c3) main_welc_pane_g1

0xa920,	// (0x000302d8) main_welc_pane_g2_ParamLimits

0xa920,	// (0x000302d8) main_welc_pane_g2

0x0003,

0xfe52,	// (0x0003580a) main_welc_pane_g_ParamLimits

0xfe52,	// (0x0003580a) main_welc_pane_g

0x2a83,	// (0x0002843b) listscroll_mce_pane_ParamLimits

0x518c,	// (0x0002ab44) wait_bar_pane_cp10

0xbbfc,	// (0x000315b4) main_cale_day_pane_ParamLimits

0xbbfc,	// (0x000315b4) main_cale_week_pane_ParamLimits

0x28ee,	// (0x000282a6) main_messa_pane_ParamLimits

0x747f,	// (0x0002ce37) main_clock2_btn_pane_ParamLimits

0x747f,	// (0x0002ce37) main_clock2_btn_pane

0xc4d3,	// (0x00031e8b) main_clock2_btn_pane_cp01_ParamLimits

0xc4d3,	// (0x00031e8b) main_clock2_btn_pane_cp01

0xe4ee,	// (0x00033ea6) list_cale_mrui_pane_ParamLimits

0xea9a,	// (0x00034452) main_cf0_pane_g2

0x0001,

0xfda1,	// (0x00035759) main_cf0_pane_g

0xa4ac,	// (0x0002fe64) area_left_week_number_pane_ParamLimits

0xa4b8,	// (0x0002fe70) area_top_day_name_pane_ParamLimits

0xa4cb,	// (0x0002fe83) frame_month_view_pane_ParamLimits

0xebcb,	// (0x00034583) grid_month_view_pane_ParamLimits

0xebd9,	// (0x00034591) frm_month_g1_ParamLimits

0xa54c,	// (0x0002ff04) frm_month_g2_ParamLimits

0xa55f,	// (0x0002ff17) frm_month_g3_ParamLimits

0xa572,	// (0x0002ff2a) frm_month_g4_ParamLimits

0xa585,	// (0x0002ff3d) frm_month_g5_ParamLimits

0xa598,	// (0x0002ff50) frm_month_g6_ParamLimits

0xa5ab,	// (0x0002ff63) frm_month_g7_ParamLimits

0xebe6,	// (0x0003459e) frm_month_g8_ParamLimits

0xa5be,	// (0x0002ff76) frm_month_g9_ParamLimits

0xa5ce,	// (0x0002ff86) frm_month_g10_ParamLimits

0xa5de,	// (0x0002ff96) frm_month_g11_ParamLimits

0xa5ee,	// (0x0002ffa6) frm_month_g12_ParamLimits

0xa600,	// (0x0002ffb8) frm_month_g13_ParamLimits

0xa612,	// (0x0002ffca) frm_month_g14_ParamLimits

0xa626,	// (0x0002ffde) frm_month_g15_ParamLimits

0xa63a,	// (0x0002fff2) frm_month_g16_ParamLimits

0xfdf9,	// (0x000357b1) frm_month_g_ParamLimits

0xebf3,	// (0x000345ab) cell_top_day_name_pane_t1_ParamLimits

0xa64e,	// (0x00030006) cell_area_left_week_number_pane_g1_ParamLimits

0xa65a,	// (0x00030012) cell_area_left_week_number_pane_t1_ParamLimits

0x2977,	// (0x0002832f) cell_month_view_pane_g1_ParamLimits

0xa66d,	// (0x00030025) cell_month_view_pane_t1_ParamLimits

0x28e6,	// (0x0002829e) main_clock2_btn_pane_g1

0xed5d,	// (0x00034715) main_clock2_btn_pane_t1

0x2910,	// (0x000282c8) listscroll_cmail_pane_ParamLimits

0xe0b5,	// (0x00033a6d) main_sp_fs_email_pane_g1_ParamLimits

0xe0c1,	// (0x00033a79) main_sp_fs_email_pane_g2_ParamLimits

0xfc4c,	// (0x00035604) main_sp_fs_email_pane_g_ParamLimits

0xe6b2,	// (0x0003406a) list_recal_day_pane_ParamLimits

0xe6c3,	// (0x0003407b) mian_recal_day_pane_t1

0x97c0,	// (0x0002f178) list_single_dyc_row_text_pane_t4_ParamLimits

0x97c0,	// (0x0002f178) list_single_dyc_row_text_pane_t4

0x9809,	// (0x0002f1c1) list_single_dyc_row_text_pane_t5_ParamLimits

0x9809,	// (0x0002f1c1) list_single_dyc_row_text_pane_t5

0xe189,	// (0x00033b41) list_single_dyc_row_text_pane_t6_ParamLimits

0xe189,	// (0x00033b41) list_single_dyc_row_text_pane_t6

0x47cb,	// (0x0002a183) aid_mgn_list_cale_time_pane

0xb16c,	// (0x00030b24) main_gallery2_pane_ParamLimits

0xc4e9,	// (0x00031ea1) main_clock2_pane_cp01_t1

0xc4f9,	// (0x00031eb1) main_clock2_pane_cp01_t3

0x0001,

0xf732,	// (0x000350ea) main_clock2_pane_cp01_t

0x2f05,	// (0x000288bd) cale_week_scroll_pane_g16_ParamLimits

0x2f05,	// (0x000288bd) cale_week_scroll_pane_g16

0x3236,	// (0x00028bee) vorec_slider_pane

0xecd9,	// (0x00034691) vidtel_button_pane_t1_ParamLimits

0x9e8b,	// (0x0002f843) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9e8b,	// (0x0002f843) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9e9c,	// (0x0002f854) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9e9c,	// (0x0002f854) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd4f,	// (0x00035707) main_fs_bigclock_clock_pane_g_ParamLimits

0x9eaf,	// (0x0002f867) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9ec5,	// (0x0002f87d) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd58,	// (0x00035710) main_fs_bigclock_clock_pane_t_ParamLimits

0x6d54,	// (0x0002c70c) main_mup3_lyrics_pane_ParamLimits

0x6d54,	// (0x0002c70c) main_mup3_lyrics_pane

0xabb7,	// (0x0003056f) main_mup3_lyrics_pane_t1_ParamLimits

0xabb7,	// (0x0003056f) main_mup3_lyrics_pane_t1

0xc919,	// (0x000322d1) aid_main_mp4_pane_t1_area

0xc923,	// (0x000322db) aid_main_mp4_pane_t2_area

0xc9cf,	// (0x00032387) main_mp4_pane_g7_ParamLimits

0xc9cf,	// (0x00032387) main_mp4_pane_g7

0xc9db,	// (0x00032393) main_mp4_pane_g8_ParamLimits

0xc9db,	// (0x00032393) main_mp4_pane_g8

0x7970,	// (0x0002d328) aid_call6_pane_g1_size

0xa7ff,	// (0x000301b7) list_double_large_graphic_phob2_other_pane_ParamLimits

0xa7ff,	// (0x000301b7) list_double_large_graphic_phob2_other_pane

0x4783,	// (0x0002a13b) list_double_large_graphic_phob2_other_pane_g1

0x21d9,	// (0x00027b91) list_highlight_pane_cp026

0x2910,	// (0x000282c8) main_welc_pane_ParamLimits

0x9625,	// (0x0002efdd) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x9625,	// (0x0002efdd) main_sp_fs_ctrlbar_pane_g3

0x963f,	// (0x0002eff7) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x963f,	// (0x0002eff7) main_sp_fs_ctrlbar_pane_g4

0x9673,	// (0x0002f02b) toolbar2_fixed_button_pane_cp01

0x967e,	// (0x0002f036) toolbar2_fixed_button_pane_cp02

0x968b,	// (0x0002f043) toolbar2_fixed_button_pane_cp03

0xa8b6,	// (0x0003026e) list_welc_entry_pane_ParamLimits

0xa8b6,	// (0x0003026e) list_welc_entry_pane

0xa935,	// (0x000302ed) main_welc_pane_g3_ParamLimits

0xa935,	// (0x000302ed) main_welc_pane_g3

0xa989,	// (0x00030341) main_welc_pane_t2_ParamLimits

0xa989,	// (0x00030341) main_welc_pane_t2

0xa9a3,	// (0x0003035b) main_welc_pane_t3_ParamLimits

0xa9a3,	// (0x0003035b) main_welc_pane_t3

0x0005,

0xfe5b,	// (0x00035813) main_welc_pane_t_ParamLimits

0xfe5b,	// (0x00035813) main_welc_pane_t

0xaad2,	// (0x0003048a) welc_button_pane_ParamLimits

0xaad2,	// (0x0003048a) welc_button_pane

0xab3a,	// (0x000304f2) welc_service_logo_pane_ParamLimits

0xab3a,	// (0x000304f2) welc_service_logo_pane

0xabd3,	// (0x0003058b) list_single_welc_entry_pane_ParamLimits

0xabd3,	// (0x0003058b) list_single_welc_entry_pane

0xabe4,	// (0x0003059c) list_single_welc_entry_pane_g1

0xabec,	// (0x000305a4) list_single_welc_entry_pane_t1

0xabfa,	// (0x000305b2) list_single_welc_entry_pane_t2

0x0001,

0xfe6d,	// (0x00035825) list_single_welc_entry_pane_t

0x21d9,	// (0x00027b91) bg_button_pane_cp035

0xed6b,	// (0x00034723) welc_button_pane_t1

0xed79,	// (0x00034731) welc_service_logo_pane_g1

0xed82,	// (0x0003473a) welc_service_logo_pane_g2

0x0001,

0xfe72,	// (0x0003582a) welc_service_logo_pane_g

0xb17a,	// (0x00030b32) main_int_radio_pane

0x2baf,	// (0x00028567) list_single_fs_dyc_pane_g1

0xa730,	// (0x000300e8) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xa730,	// (0x000300e8) list_double_large_graphic_phob2_pane_g3

0xa73c,	// (0x000300f4) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xa73c,	// (0x000300f4) list_double_large_graphic_phob2_pane_g4

0xac08,	// (0x000305c0) main_int_radio1_pane_ParamLimits

0xac08,	// (0x000305c0) main_int_radio1_pane

0xed8b,	// (0x00034743) find_pane_cp02

0xac25,	// (0x000305dd) input_focus_pane_cp12_ParamLimits

0xac25,	// (0x000305dd) input_focus_pane_cp12

0xac35,	// (0x000305ed) input_focus_pane_cp13_ParamLimits

0xac35,	// (0x000305ed) input_focus_pane_cp13

0xac49,	// (0x00030601) input_focus_pane_cp14_ParamLimits

0xac49,	// (0x00030601) input_focus_pane_cp14

0xed94,	// (0x0003474c) int_radio1_listscroll_pane

0xac5d,	// (0x00030615) main_int_radio1_pane_g1_ParamLimits

0xac5d,	// (0x00030615) main_int_radio1_pane_g1

0xac75,	// (0x0003062d) main_int_radio1_pane_t1_ParamLimits

0xac75,	// (0x0003062d) main_int_radio1_pane_t1

0xac90,	// (0x00030648) main_int_radio1_pane_t2_ParamLimits

0xac90,	// (0x00030648) main_int_radio1_pane_t2

0xacab,	// (0x00030663) main_int_radio1_pane_t3_ParamLimits

0xacab,	// (0x00030663) main_int_radio1_pane_t3

0xacc6,	// (0x0003067e) main_int_radio1_pane_t4_ParamLimits

0xacc6,	// (0x0003067e) main_int_radio1_pane_t4

0xed9e,	// (0x00034756) main_int_radio1_pane_t5_ParamLimits

0xed9e,	// (0x00034756) main_int_radio1_pane_t5

0xacd8,	// (0x00030690) main_int_radio1_pane_t6_ParamLimits

0xacd8,	// (0x00030690) main_int_radio1_pane_t6

0xaced,	// (0x000306a5) main_int_radio1_pane_t7_ParamLimits

0xaced,	// (0x000306a5) main_int_radio1_pane_t7

0xad02,	// (0x000306ba) main_int_radio1_pane_t8_ParamLimits

0xad02,	// (0x000306ba) main_int_radio1_pane_t8

0xad21,	// (0x000306d9) main_int_radio1_pane_t9_ParamLimits

0xad21,	// (0x000306d9) main_int_radio1_pane_t9

0xad33,	// (0x000306eb) main_int_radio1_pane_t10_ParamLimits

0xad33,	// (0x000306eb) main_int_radio1_pane_t10

0xad59,	// (0x00030711) main_int_radio1_pane_t11_ParamLimits

0xad59,	// (0x00030711) main_int_radio1_pane_t11

0xad7f,	// (0x00030737) main_int_radio1_pane_t12_ParamLimits

0xad7f,	// (0x00030737) main_int_radio1_pane_t12

0x000b,

0xfe77,	// (0x0003582f) main_int_radio1_pane_t_ParamLimits

0xfe77,	// (0x0003582f) main_int_radio1_pane_t

0xedb0,	// (0x00034768) int_radio_list_pane

0xec0e,	// (0x000345c6) scroll_pane_cp037

0xedb8,	// (0x00034770) list_double_large_graphic_int_radio_pane_ParamLimits

0xedb8,	// (0x00034770) list_double_large_graphic_int_radio_pane

0xedd0,	// (0x00034788) list_double_large_graphic_int_radio_pane_g1

0xedd9,	// (0x00034791) list_double_large_graphic_int_radio_pane_t1

0xede7,	// (0x0003479f) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe90,	// (0x00035848) list_double_large_graphic_int_radio_pane_t

0x21d9,	// (0x00027b91) list_highlight_pane_cp027

0xed20,	// (0x000346d8) main_button_pane_4

0xa945,	// (0x000302fd) main_welc_pane_g4_ParamLimits

0xa945,	// (0x000302fd) main_welc_pane_g4

0xa9bb,	// (0x00030373) main_welc_pane_t4_ParamLimits

0xa9bb,	// (0x00030373) main_welc_pane_t4

0xa9d2,	// (0x0003038a) main_welc_pane_t5_ParamLimits

0xa9d2,	// (0x0003038a) main_welc_pane_t5

0xaa0f,	// (0x000303c7) main_welc_pane_t6_ParamLimits

0xaa0f,	// (0x000303c7) main_welc_pane_t6

0xaae9,	// (0x000304a1) welc_button_pane_2_ParamLimits

0xaae9,	// (0x000304a1) welc_button_pane_2

0xab05,	// (0x000304bd) welc_button_pane_3_ParamLimits

0xab05,	// (0x000304bd) welc_button_pane_3

0xed28,	// (0x000346e0) welc_button_pane_4

0xab24,	// (0x000304dc) welc_button_pane_5_ParamLimits

0xab24,	// (0x000304dc) welc_button_pane_5

0x0d6c,	// (0x00026724) main_popup_welc_pane

0xee04,	// (0x000347bc) main_welc_sk_g3

0xee0e,	// (0x000347c6) main_welc_sk_g4

0xee18,	// (0x000347d0) main_welc_sk_t3

0xee28,	// (0x000347e0) main_welc_sk_t4

0xee38,	// (0x000347f0) popup_welc_pane_t4

0xee46,	// (0x000347fe) popup_welc_pane_t5

0xee56,	// (0x0003480e) popup_welc_pane_t6

0xb17a,	// (0x00030b32) main_acti_pane

0x21d9,	// (0x00027b91) main_sso_pane

0xad91,	// (0x00030749) sso_body_pane_ParamLimits

0xad91,	// (0x00030749) sso_body_pane

0xada5,	// (0x0003075d) sso_logo_pane_ParamLimits

0xada5,	// (0x0003075d) sso_logo_pane

0xadd1,	// (0x00030789) sso_sk_pane_ParamLimits

0xadd1,	// (0x00030789) sso_sk_pane

0x3423,	// (0x00028ddb) main_sso_logo_pane_g1

0xade3,	// (0x0003079b) sso_sk_pane_t1_ParamLimits

0xade3,	// (0x0003079b) sso_sk_pane_t1

0xadfd,	// (0x000307b5) sso_sk_pane_t2_ParamLimits

0xadfd,	// (0x000307b5) sso_sk_pane_t2

0x0001,

0xfe95,	// (0x0003584d) sso_sk_pane_t_ParamLimits

0xfe95,	// (0x0003584d) sso_sk_pane_t

0xee94,	// (0x0003484c) aid_sso_gap

0xee9d,	// (0x00034855) aid_sso_txt1

0xeea7,	// (0x0003485f) aid_sso_txt2

0xeeb1,	// (0x00034869) aid_sso_txt3

0x0002,

0xfe9a,	// (0x00035852) aid_sso_txt

0xeebb,	// (0x00034873) aid_sso_widget

0xae67,	// (0x0003081f) sso_btn_pane_ParamLimits

0xae67,	// (0x0003081f) sso_btn_pane

0xaeef,	// (0x000308a7) sso_option_pane_ParamLimits

0xaeef,	// (0x000308a7) sso_option_pane

0xaf6f,	// (0x00030927) sso_query_pane_ParamLimits

0xaf6f,	// (0x00030927) sso_query_pane

0xafc5,	// (0x0003097d) sso_query_pane_cp01_ParamLimits

0xafc5,	// (0x0003097d) sso_query_pane_cp01

0xb01f,	// (0x000309d7) sso_t_hdr_pane_ParamLimits

0xb01f,	// (0x000309d7) sso_t_hdr_pane

0xb043,	// (0x000309fb) sso_t_nml_pane_ParamLimits

0xb043,	// (0x000309fb) sso_t_nml_pane

0xeeb1,	// (0x00034869) sso_t_sub_pane

0xadb2,	// (0x0003076a) sso_popup_window_ParamLimits

0xadb2,	// (0x0003076a) sso_popup_window

0xae13,	// (0x000307cb) sso_apps_pane_ParamLimits

0xae13,	// (0x000307cb) sso_apps_pane

0xae3d,	// (0x000307f5) sso_body_pane_g1

0xae47,	// (0x000307ff) sso_body_pane_t1

0xae57,	// (0x0003080f) sso_body_pane_t2

0x0001,

0xfea1,	// (0x00035859) sso_body_pane_t

0xaeb9,	// (0x00030871) sso_btn_pane_cp01_ParamLimits

0xaeb9,	// (0x00030871) sso_btn_pane_cp01

0xaf43,	// (0x000308fb) sso_prog_pane_ParamLimits

0xaf43,	// (0x000308fb) sso_prog_pane

0xeec5,	// (0x0003487d) sso_t_hdr_pane_t1_ParamLimits

0xeec5,	// (0x0003487d) sso_t_hdr_pane_t1

0xeed8,	// (0x00034890) input_focus_pane_cp10_ParamLimits

0xeed8,	// (0x00034890) input_focus_pane_cp10

0xeeee,	// (0x000348a6) sso_query_pane_t1_ParamLimits

0xeeee,	// (0x000348a6) sso_query_pane_t1

0xef01,	// (0x000348b9) sso_query_pane_t2_ParamLimits

0xef01,	// (0x000348b9) sso_query_pane_t2

0xef1c,	// (0x000348d4) sso_query_pane_t3_ParamLimits

0xef1c,	// (0x000348d4) sso_query_pane_t3

0xef46,	// (0x000348fe) sso_query_pane_t4_ParamLimits

0xef46,	// (0x000348fe) sso_query_pane_t4

0x0003,

0xfea6,	// (0x0003585e) sso_query_pane_t_ParamLimits

0xfea6,	// (0x0003585e) sso_query_pane_t

0x21d9,	// (0x00027b91) bg_button_pane_cp22

0xedf5,	// (0x000347ad) sso_btn_pane_t1

0xb099,	// (0x00030a51) sso_t_nml_pane_t1_ParamLimits

0xb099,	// (0x00030a51) sso_t_nml_pane_t1

0xef6a,	// (0x00034922) sso_option_row_pane_ParamLimits

0xef6a,	// (0x00034922) sso_option_row_pane

0xef77,	// (0x0003492f) sso_t_sub_pane_t1_ParamLimits

0xef77,	// (0x0003492f) sso_t_sub_pane_t1

0x2910,	// (0x000282c8) bg_popup_window_pane_cp11_ParamLimits

0x2910,	// (0x000282c8) bg_popup_window_pane_cp11

0xef8a,	// (0x00034942) popup_sk_window_cp01_ParamLimits

0xef8a,	// (0x00034942) popup_sk_window_cp01

0xef97,	// (0x0003494f) sso_popup_body_pane_ParamLimits

0xef97,	// (0x0003494f) sso_popup_body_pane

0xefa4,	// (0x0003495c) scroll_pane_cp21_ParamLimits

0xefa4,	// (0x0003495c) scroll_pane_cp21

0xefb1,	// (0x00034969) sso_popup_body_t_pane_ParamLimits

0xefb1,	// (0x00034969) sso_popup_body_t_pane

0xefbe,	// (0x00034976) sso_popup_body_t_hdr_pane_ParamLimits

0xefbe,	// (0x00034976) sso_popup_body_t_hdr_pane

0xefcc,	// (0x00034984) sso_popup_body_t_nml_pane_ParamLimits

0xefcc,	// (0x00034984) sso_popup_body_t_nml_pane

0xefe7,	// (0x0003499f) sso_popup_body_t_sub_pane_ParamLimits

0xefe7,	// (0x0003499f) sso_popup_body_t_sub_pane

0xf00a,	// (0x000349c2) sso_popup_body_t_hdr_pane_t1

0xb0b4,	// (0x00030a6c) sso_popup_body_t_nml_pane_t1_ParamLimits

0xb0b4,	// (0x00030a6c) sso_popup_body_t_nml_pane_t1

0xf01a,	// (0x000349d2) sso_popup_body_t_sub_pane_t1_ParamLimits

0xf01a,	// (0x000349d2) sso_popup_body_t_sub_pane_t1

0x3423,	// (0x00028ddb) sso_prog_pane_g1

0xb0ed,	// (0x00030aa5) sso_apps_pane_comp1_ParamLimits

0xb0ed,	// (0x00030aa5) sso_apps_pane_comp1

0xf03f,	// (0x000349f7) sso_apps_pane_comp1_g1

0xf047,	// (0x000349ff) sso_apps_pane_comp1_t1

0xf055,	// (0x00034a0d) sso_option_row_pane_g1

0xf05d,	// (0x00034a15) sso_option_row_pane_t1

0xa8a3,	// (0x0003025b) bg_welc_area_ParamLimits

0xa8a3,	// (0x0003025b) bg_welc_area

0xaa4d,	// (0x00030405) sso_t_hdr_pane_a_t1_ParamLimits

0xaa4d,	// (0x00030405) sso_t_hdr_pane_a_t1

0xaa68,	// (0x00030420) sso_t_nml_pane_a_t1_ParamLimits

0xaa68,	// (0x00030420) sso_t_nml_pane_a_t1

0xaa97,	// (0x0003044f) sso_t_sub_pane_a_t1_ParamLimits

0xaa97,	// (0x0003044f) sso_t_sub_pane_a_t1

0xedf5,	// (0x000347ad) sso_btn_pane_t1_copy1

0x21d9,	// (0x00027b91) welc_button_pane_2_comp1

0xee64,	// (0x0003481c) sso_t_hdr_pane_p_t1

0xee74,	// (0x0003482c) sso_t_nml_pane_p_t1

0xee84,	// (0x0003483c) sso_t_sub_pane_p_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal
